package analysis

import (
	"fmt"
	"regexp"
	"strconv"
	"strings"

	"newton/reconstructor/pkg/asm"
)

var (
	offsetImmRe = regexp.MustCompile(`#([0-9a-fA-FxX]+)`)
)

type Decoder struct {
	regVal     map[string]int64
	regKnown   map[string]bool
	vtableAddr uint64
	symbols    []*asm.Function
}

func NewDecoder(symbols []*asm.Function, vtableAddr uint64) *Decoder {
	return &Decoder{
		regVal:     make(map[string]int64),
		regKnown:   make(map[string]bool),
		vtableAddr: vtableAddr,
		symbols:    symbols,
	}
}

func (d *Decoder) Annotate(inst *asm.Instruction) string {
	regVal := d.regVal
	regKnown := d.regKnown

	switch inst.Mnemonic {
	case "mov":
		parts := decodeArgs(inst.Args)
		if len(parts) == 2 {
			dst, src := parts[0], parts[1]
			if v, ok := parseImmediate(src); ok {
				regVal[dst] = v
				regKnown[dst] = true
				return fmtConst(dst, v)
			}
			if regKnown[src] {
				regVal[dst] = regVal[src]
				regKnown[dst] = true
				return fmtConst(dst, regVal[dst])
			}
		}
		if len(parts) >= 1 {
			regKnown[parts[0]] = false
		}

	case "mvn":
		parts := decodeArgs(inst.Args)
		if len(parts) == 2 {
			dst, src := parts[0], parts[1]
			if v, ok := parseImmediate(src); ok {
				regVal[dst] = ^v
				regKnown[dst] = true
				return fmtConst(dst, ^v)
			}
		}
		if len(parts) >= 1 {
			regKnown[parts[0]] = false
		}

	case "add", "sub", "and", "orr", "bic", "eor":
		parts := decodeArgs(inst.Args)
		// Virtual dispatch: add pc, rX, #offset
		if inst.Mnemonic == "add" && len(parts) == 3 && parts[0] == "pc" {
			if offset, ok := parseImmediate(parts[2]); ok {
				slot := offset / 4
				methodName := ""
				if d.vtableAddr != 0 {
					methodName = resolveSlot(d.symbols, d.vtableAddr, int(slot))
				}
				if methodName != "" {
					return fmt.Sprintf("vtable call slot %d (offset +0x%X / +%d) -> %s", slot, offset, offset, methodName)
				}
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

	case "ldr":
		parts := decodeArgs(inst.Args)
		if len(parts) >= 2 {
			dst := parts[0]
			mem := parts[1]
			if strings.HasPrefix(mem, "[pc") {
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
				regKnown[dst] = false
				return fmtFieldAccess(inst.Args, "read word")
			}
		}

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

func fmtConst(dst string, v int64) string {
	s := fmt.Sprintf("%s = %d (0x%X)", dst, int32(v), uint32(v))
	if name := knownNewtonConst(int32(v)); name != "" {
		s += "  [" + name + "]"
	}
	return s
}

func fmtFieldAccess(args, op string) string {
	m := offsetImmRe.FindStringSubmatch(args)
	if len(m) < 2 {
		return ""
	}
	offset, _ := strconv.ParseInt(m[1], 10, 64)
	return fmt.Sprintf("%s  field +0x%X (+%d)", op, offset, offset)
}

func knownNewtonConst(v int32) string {
	return knownNewtonConstants[v]
}

func parseImmediate(s string) (int64, bool) {
	s = strings.TrimSpace(s)
	s = strings.TrimPrefix(s, "#")
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

func resolveSlot(symbols []*asm.Function, vtableAddr uint64, slot int) string {
	targetAddr := vtableAddr + uint64(slot*4)
	for _, sym := range symbols {
		if sym.AddressInt == targetAddr {
			if len(sym.Instructions) > 0 {
				inst := sym.Instructions[0]
				if inst.Mnemonic == "b" {
					re := regexp.MustCompile(`<([^>]+)>`)
					match := re.FindStringSubmatch(inst.Raw)
					if len(match) > 1 {
						return match[1]
					}
				}
			}
		}
	}
	return ""
}

var knownNewtonConstants = map[int32]string{
	0:         "noErr",
	-16000:    "kCommErrBase",
	-16001:    "kCommErrAbort",
	-16005:    "kCommErrKilledGetCommEvent",
	-16006:    "kCommErrHardwareError",
	-16007:    "kCommErrBadOption",
	-16012:    "kCommErrBadServiceId",
	-16015:    "kCommErrNoGetCommEvent",
	-16016:    "kGetCommEventPending",
}
