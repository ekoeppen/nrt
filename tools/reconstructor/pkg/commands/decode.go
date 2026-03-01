package commands

import (
	"fmt"
	"log"
	"regexp"
	"strconv"
	"strings"

	"newton/reconstructor/pkg/asm"
	"github.com/spf13/cobra"
)

var decodeTarget string

var decodeCmd = &cobra.Command{
	Use:   "decode",
	Short: "Annotate a function body: constants, field offsets, vtable slots",
	Long: `Decodes a function body and annotates each instruction with:
  - Folded ARM immediate arithmetic (e.g. mov r4,#0x71 / sub r4,r4,#0x3f00 => -16015)
  - Literal pool loads (ldr rX,[pc,#N] => actual 32-bit value)
  - Field accesses (ldr/str/ldrb/strb [rN, #offset] => +offset in hex and decimal)
  - Virtual dispatch sites (add pc, rN, #offset => vtable slot N)
  - Known Newton constant names (kCommErrNoGetCommEvent, noErr, etc.)`,
	Run: func(cmd *cobra.Command, args []string) {
		runDecode()
	},
}

func init() {
	decodeCmd.Flags().StringVar(&decodeTarget, "target", "", "Function name (partial match) or hex address (0x...)")
	decodeCmd.MarkFlagRequired("target")
	rootCmd.AddCommand(decodeCmd)
}

// knownNewtonConstants maps signed 32-bit values to their symbolic names.
var knownNewtonConstants = map[int32]string{
	0:       "noErr",
	-16016:  "kGetCommEventPending",
	-16015:  "kCommErrNoGetCommEvent",
	-16005:  "kCommErrKilledGetCommEvent",
	-10067:  "kCommErrToolNotFound",
	-10078:  "kRFCOMMToolErrBind",
	-19001:  "kRFCOMMToolErrConnectStatus",
	-19002:  "kRFCOMMToolErrConnect",
	-9474:   "kCommErrResourceNotAvailable",
}

// offsetImmRe extracts a decimal immediate from a memory operand like [r4, #220] or [sp, #16].
var offsetImmRe = regexp.MustCompile(`\[.*?#(\d+)`)

func runDecode() {
	log.Printf("Loading assembly from %s...", asmPath)
	functions, _, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	fn := resolveFunction(functions, decodeTarget)
	if fn == nil {
		log.Fatalf("Function not found: %s", decodeTarget)
	}

	fmt.Printf("\n=== Decoded: %s  (0x%X) ===\n\n", fn.DemangledName, fn.AddressInt)

	// Register constant-value tracker
	regVal := make(map[string]int64)
	regKnown := make(map[string]bool)

	for _, inst := range fn.Instructions {
		annotation := decodeInstruction(inst, regVal, regKnown)
		raw := inst.Raw
		// Trim leading address+colon prefix that is already printed separately
		if idx := strings.Index(raw, ":\t"); idx >= 0 {
			raw = raw[idx+2:]
		}
		if annotation != "" {
			fmt.Printf("   %-60s  // %s\n", raw, annotation)
		} else {
			fmt.Printf("   %s\n", raw)
		}
	}
	fmt.Println()
}

// resolveFunction finds a function by exact name, partial name, or hex address.
func resolveFunction(functions []*asm.Function, target string) *asm.Function {
	// Try hex address first
	if strings.HasPrefix(target, "0x") || strings.HasPrefix(target, "0X") {
		addr, err := strconv.ParseUint(target[2:], 16, 64)
		if err == nil {
			for _, fn := range functions {
				if fn.AddressInt == addr {
					return fn
				}
			}
		}
	}
	// Exact match
	for _, fn := range functions {
		if fn.Name == target || fn.DemangledName == target {
			return fn
		}
	}
	// Partial match (case-sensitive)
	for _, fn := range functions {
		if strings.Contains(fn.Name, target) || strings.Contains(fn.DemangledName, target) {
			return fn
		}
	}
	return nil
}

// decodeInstruction annotates a single instruction, updating register state in place.
func decodeInstruction(inst asm.Instruction, regVal map[string]int64, regKnown map[string]bool) string {
	switch inst.Mnemonic {

	// ── Constant loading ────────────────────────────────────────────────────
	case "mov":
		parts := decodeArgs(inst.Args)
		if len(parts) == 2 {
			dst := parts[0]
			if v, ok := parseImmediate(parts[1]); ok {
				regVal[dst] = v
				regKnown[dst] = true
				return fmtConst(dst, v)
			}
			// Propagate register copy
			if src := parts[1]; regKnown[src] {
				regVal[dst] = regVal[src]
				regKnown[dst] = true
				return fmt.Sprintf("%s = %s = %d (0x%X)", dst, src, int32(regVal[dst]), uint32(regVal[dst]))
			}
			// Unknown — invalidate
			regKnown[dst] = false
		}

	case "mvn":
		parts := decodeArgs(inst.Args)
		if len(parts) == 2 {
			dst := parts[0]
			if v, ok := parseImmediate(parts[1]); ok {
				result := ^v
				regVal[dst] = result
				regKnown[dst] = true
				return fmtConst(dst, result)
			}
			regKnown[dst] = false
		}

	// ── Arithmetic on known constants ───────────────────────────────────────
	case "add", "sub", "and", "orr", "bic", "eor":
		parts := decodeArgs(inst.Args)
		// Virtual dispatch: add pc, rX, #offset
		if inst.Mnemonic == "add" && len(parts) == 3 && parts[0] == "pc" {
			if offset, ok := parseImmediate(parts[2]); ok {
				slot := offset / 4
				return fmt.Sprintf("vtable call slot %d (offset +0x%X / +%d)", slot, offset, offset)
			}
		}
		if len(parts) == 3 {
			dst, src, immStr := parts[0], parts[1], parts[2]
			immVal, immOk := parseImmediate(immStr)
			srcVal := regVal[src]
			srcOk := regKnown[src]
			if immOk && srcOk {
				var result int64
				switch inst.Mnemonic {
				case "add":
					result = srcVal + immVal
				case "sub":
					result = srcVal - immVal
				case "and":
					result = srcVal & immVal
				case "orr":
					result = srcVal | immVal
				case "bic":
					result = srcVal &^ immVal
				case "eor":
					result = srcVal ^ immVal
				}
				regVal[dst] = result
				regKnown[dst] = true
				return fmtConst(dst, result)
			}
		}
		// 2-arg form: add dst, #imm
		if len(parts) == 2 {
			dst, immStr := parts[0], parts[1]
			if v, ok := parseImmediate(immStr); ok && regKnown[dst] {
				var result int64
				switch inst.Mnemonic {
				case "add":
					result = regVal[dst] + v
				case "sub":
					result = regVal[dst] - v
				}
				regVal[dst] = result
				regKnown[dst] = true
				return fmtConst(dst, result)
			}
		}

	// ── Literal pool loads ──────────────────────────────────────────────────
	case "ldr":
		parts := decodeArgs(inst.Args)
		if len(parts) >= 2 {
			dst := parts[0]
			mem := parts[1]
			if strings.HasPrefix(mem, "[pc") {
				// PC-relative literal: value is in the comment ("; <hex> <symbol>")
				if inst.Comment != "" {
					fields := strings.Fields(inst.Comment)
					if len(fields) >= 1 {
						if v, err := strconv.ParseInt(fields[0], 16, 64); err == nil {
							regVal[dst] = v
							regKnown[dst] = true
							return fmtConst(dst, v)
						}
					}
				}
			} else {
				// Memory field access — annotate offset, invalidate dst
				regKnown[dst] = false
				return fmtFieldAccess(inst.Args, "read word")
			}
		}

	// ── Byte loads/stores ───────────────────────────────────────────────────
	case "ldrb":
		parts := decodeArgs(inst.Args)
		if len(parts) >= 1 {
			regKnown[parts[0]] = false
		}
		return fmtFieldAccess(inst.Args, "read byte")

	case "strb":
		src := ""
		parts := decodeArgs(inst.Args)
		if len(parts) >= 1 {
			src = parts[0]
		}
		extra := ""
		if src != "" && regKnown[src] {
			extra = fmt.Sprintf(" value=%d", int32(regVal[src]))
		}
		return fmtFieldAccess(inst.Args, "write byte"+extra)

	case "str":
		src := ""
		parts := decodeArgs(inst.Args)
		if len(parts) >= 1 {
			src = parts[0]
		}
		extra := ""
		if src != "" && regKnown[src] {
			extra = fmt.Sprintf(" value=%d (0x%X)", int32(regVal[src]), uint32(regVal[src]))
		}
		return fmtFieldAccess(inst.Args, "write word"+extra)

	}

	return ""
}

// fmtConst formats a "dst = value" annotation with known-name lookup.
func fmtConst(dst string, v int64) string {
	s := fmt.Sprintf("%s = %d (0x%X)", dst, int32(v), uint32(v))
	if name := knownNewtonConst(int32(v)); name != "" {
		s += "  [" + name + "]"
	}
	return s
}

// fmtFieldAccess extracts and formats a field offset from a memory operand.
func fmtFieldAccess(args, op string) string {
	m := offsetImmRe.FindStringSubmatch(args)
	if len(m) < 2 {
		return ""
	}
	offset, _ := strconv.ParseInt(m[1], 10, 64)
	return fmt.Sprintf("%s  field +0x%X (+%d)", op, offset, offset)
}

// knownNewtonConst returns the symbolic name for a known Newton constant value.
func knownNewtonConst(v int32) string {
	return knownNewtonConstants[v]
}

// parseImmediate parses "#N", "#0xNN", "N", or "0xNN" into int64.
func parseImmediate(s string) (int64, bool) {
	s = strings.TrimSpace(s)
	s = strings.TrimPrefix(s, "#")
	// Discard trailing comments or semicolons
	if idx := strings.IndexAny(s, " \t;"); idx >= 0 {
		s = s[:idx]
	}
	if strings.HasPrefix(s, "0x") || strings.HasPrefix(s, "0X") {
		v, err := strconv.ParseInt(s[2:], 16, 64)
		return v, err == nil
	}
	v, err := strconv.ParseInt(s, 10, 64)
	return v, err == nil
}

// decodeArgs splits an instruction's argument string on commas, respecting brackets.
func decodeArgs(args string) []string {
	var result []string
	depth := 0
	start := 0
	for i, c := range args {
		switch c {
		case '[', '{':
			depth++
		case ']', '}':
			depth--
		case ',':
			if depth == 0 {
				result = append(result, strings.TrimSpace(args[start:i]))
				start = i + 1
			}
		}
	}
	if start < len(args) {
		result = append(result, strings.TrimSpace(args[start:]))
	}
	return result
}
