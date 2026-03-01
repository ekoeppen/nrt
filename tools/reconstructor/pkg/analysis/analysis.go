package analysis

import (
	"newton/reconstructor/pkg/asm"
	"regexp"
	"strconv"
	"strings"
)

type AccessType int

const (
	Read AccessType = iota
	Write
)

type FieldAccess struct {
	Class  string
	Offset uint64
	Func   *asm.Function
	Addr   uint64
	Type   AccessType
}

type ClassMetadata struct {
	Name       string
	Size       uint64
	BaseClass  string
	VTableAddr uint64
	Fields     map[uint64]FieldInfo
}

type FieldInfo struct {
	Offset uint64
	Type   string // e.g., "long", "char", "void*"
}

type Engine struct {
	Callers    map[string][]*asm.Function           // Callee name -> list of callers
	FieldUsers map[string]map[uint64][]*FieldAccess // Class -> Offset -> list of accesses
	Classes    map[string]*ClassMetadata
	Functions  []*asm.Function
}

func NewEngine(fns []*asm.Function) *Engine {
	e := &Engine{
		Callers:    make(map[string][]*asm.Function),
		FieldUsers: make(map[string]map[uint64][]*FieldAccess),
		Classes:    make(map[string]*ClassMetadata),
		Functions:  fns,
	}
	return e
}

func (e *Engine) Analyze() {
	for _, fn := range e.Functions {
		e.analyzeFunction(fn)
	}
}

func (e *Engine) analyzeFunction(fn *asm.Function) {
	// thisRegs is the set of registers currently holding 'this'.
	// ARM calling convention: 'this' arrives in r0.  Prologues often copy it
	// to r4 or r5 for preservation across calls, but r0 stays valid until it
	// is clobbered by the next call return or an explicit assignment.
	// We track all registers that have been observed to hold 'this' and only
	// remove r0 from the set when we see it written to by a non-copy instruction
	// (bl return, ldm restoring r0, or a new mov r0 from a non-this source).
	thisRegs := map[string]bool{"r0": true}

	// isThisAccess returns true when the instruction's memory operand uses any
	// currently-tracked 'this' register as the base.
	isThisAccess := func(args string) bool {
		for reg := range thisRegs {
			if strings.Contains(args, "["+reg) {
				return true
			}
		}
		return false
	}

	// Analyze constructor logic for size and base class
	if fn.ClassName != "" && (strings.Contains(fn.Name, "__ct") || strings.Contains(fn.Name, "::"+fn.ClassName+"(")) {
		meta := e.getOrCreateClass(fn.ClassName)

		for i, inst := range fn.Instructions {
			// Find operator new call for size: mov r0, #size followed by bl <__nw>
			if i+1 < len(fn.Instructions) && inst.Mnemonic == "mov" && strings.HasPrefix(inst.Args, "r0, #") {
				next := fn.Instructions[i+1]
				if (next.Mnemonic == "bl" || next.Mnemonic == "b") && strings.Contains(next.Args, "__nw") {
					sizeStr := strings.TrimPrefix(inst.Args, "r0, #")
					// Some sizes are in hex or have comments
					sizeStr = strings.Fields(sizeStr)[0]
					size, _ := strconv.ParseUint(sizeStr, 0, 64)
					if meta.Size == 0 {
						meta.Size = size
					}
				}
			}

			// Find base class constructor call
			if (inst.Mnemonic == "bl" || inst.Mnemonic == "b") && !strings.Contains(inst.Args, "__nw") {
				target := extractTarget(inst.Args)
				if strings.Contains(target, "__ct") {
					baseName := extractClassNameFromSymbol(target)
					if baseName != "" && baseName != fn.ClassName && meta.BaseClass == "" {
						meta.BaseClass = baseName
					}
				}
			}
		}
	}

	for _, inst := range fn.Instructions {
		// Call analysis
		if inst.Mnemonic == "bl" || inst.Mnemonic == "b" {
			target := extractTarget(inst.Args)
			if target != "" {
				e.Callers[target] = append(e.Callers[target], fn)
			}
		}

		// Field access analysis: maintain the set of registers holding 'this'.
		//
		// Propagate: "mov rX, rY" where rY is in thisRegs → rX also holds 'this'.
		// ARM compilers typically only copy to callee-saved registers (r4–r11),
		// so we allow copies to r4, r5, r6, r7, r8, r9, r10, r11.
		if inst.Mnemonic == "mov" {
			parts := strings.SplitN(inst.Args, ", ", 2)
			if len(parts) == 2 {
				dst := strings.TrimSpace(parts[0])
				src := strings.TrimSpace(parts[1])
				calleeSaved := dst == "r4" || dst == "r5" || dst == "r6" ||
					dst == "r7" || dst == "r8" || dst == "r9" ||
					dst == "r10" || dst == "r11"
				if calleeSaved && thisRegs[src] {
					thisRegs[dst] = true
				}
				// If dst is a this-register being overwritten with a non-this source,
				// evict it (only evict r0; preserved regs are never reused mid-function
				// for non-this purposes in typical ARM ABI prologues).
				if dst == "r0" && !thisRegs[src] {
					delete(thisRegs, "r0")
				}
			}
		}
		// A call return clobbers r0; remove it from the this-set.
		if inst.Mnemonic == "bl" {
			delete(thisRegs, "r0")
		}

		if typeName, _, isLoad, isStore, ok := FieldTypeFromMnemonic(inst.Mnemonic); ok && isThisAccess(inst.Args) {
			re := regexp.MustCompile(`#(\d+)`)
			match := re.FindStringSubmatch(inst.Args)
			if match != nil {
				offset, _ := strconv.ParseUint(match[1], 10, 64)
				accType := Read
				if isStore {
					accType = Write
				}
				_ = isLoad // suppress unused warning; accType already encodes direction

				if fn.ClassName != "" {
					if _, ok := e.FieldUsers[fn.ClassName]; !ok {
						e.FieldUsers[fn.ClassName] = make(map[uint64][]*FieldAccess)
					}
					e.FieldUsers[fn.ClassName][offset] = append(e.FieldUsers[fn.ClassName][offset], &FieldAccess{
						Class:  fn.ClassName,
						Offset: offset,
						Func:   fn,
						Addr:   inst.AddressInt,
						Type:   accType,
					})

					// Update ClassMetadata fields; upgrade to widest observed type
					// (e.g. if a byte access is seen first, a later word access upgrades it).
					meta := e.getOrCreateClass(fn.ClassName)
					if existing, exists := meta.Fields[offset]; !exists ||
						fieldTypePriority(typeName) > fieldTypePriority(existing.Type) {
						meta.Fields[offset] = FieldInfo{Offset: offset, Type: typeName}
					}
				}
			}
		}
	}
}

func (e *Engine) getOrCreateClass(name string) *ClassMetadata {
	if meta, ok := e.Classes[name]; ok {
		return meta
	}
	meta := &ClassMetadata{
		Name:   name,
		Fields: make(map[uint64]FieldInfo),
	}
	e.Classes[name] = meta
	return meta
}

// fieldTypeFromMnemonic maps an ARM load/store mnemonic to its field metadata.
// Returns (typeName, byteSize, isLoad, isStore, ok).
// ok is false for any mnemonic that is not a memory access.
//
// Mnemonics handled:
//   ldr  / str   → "long"  / 4 bytes
//   ldrh / strh  → "short" / 2 bytes
//   ldrb / strb  → "char"  / 1 byte
//   ldrsb        → "char"  / 1 byte  (signed byte load)
//   ldrsh        → "short" / 2 bytes (signed halfword load)
//   ldm* / stm*  → not tracked (multi-register, no single field offset)
// FieldTypeFromMnemonic maps an ARM load/store mnemonic to its field metadata.
// Returns (typeName, byteSize, isLoad, isStore, ok).
// ok is false for any mnemonic that is not a single-register memory access.
// Exported so scaffold.go and other packages can share the same dispatch table.
func FieldTypeFromMnemonic(m string) (typeName string, size int, isLoad bool, isStore bool, ok bool) {
	switch m {
	case "ldr":
		return "long", 4, true, false, true
	case "str":
		return "long", 4, false, true, true
	case "ldrh":
		return "short", 2, true, false, true
	case "strh":
		return "short", 2, false, true, true
	case "ldrb":
		return "char", 1, true, false, true
	case "strb":
		return "char", 1, false, true, true
	case "ldrsb":
		return "char", 1, true, false, true
	case "ldrsh":
		return "short", 2, true, false, true
	default:
		return "", 0, false, false, false
	}
}

// fieldTypePriority returns a numeric priority for a field type name.
// Higher priority wins when upgrading a field entry to the widest observed access.
func fieldTypePriority(typeName string) int {
	switch typeName {
	case "long":
		return 3
	case "short":
		return 2
	case "char":
		return 1
	default:
		return 0
	}
}

func extractClassNameFromSymbol(sym string) string {
	if strings.Contains(sym, "::") {
		return strings.Split(sym, "::")[0]
	}
	// Simplified mangled check
	if strings.Contains(sym, "__") {
		idx := strings.Index(sym, "__")
		mangled := sym[idx+2:]
		var lenStr string
		for _, char := range mangled {
			if char >= '0' && char <= '9' {
				lenStr += string(char)
			} else {
				break
			}
		}
		if lenStr != "" {
			length, _ := strconv.Atoi(lenStr)
			if len(mangled) >= len(lenStr)+length {
				return mangled[len(lenStr) : len(lenStr)+length]
			}
		}
	}
	return ""
}

func extractTarget(args string) string {
	idx := strings.Index(args, "<")
	if idx != -1 {
		target := args[idx+1:]
		end := strings.Index(target, ">")
		if end != -1 {
			return target[:end]
		}
	}
	return ""
}

type AtomicBlock struct {
	StartAddr uint64
	EndAddr   uint64
	Instructions []asm.Instruction
}

func FindAtomicBlocks(f *asm.Function) []AtomicBlock {
	var blocks []AtomicBlock
	var currentBlock *AtomicBlock
	
	for _, inst := range f.Instructions {
		if strings.Contains(inst.Raw, "bl") && strings.Contains(inst.Raw, "EnterAtomic") {
			currentBlock = &AtomicBlock{StartAddr: inst.AddressInt}
			continue
		}
		
		if currentBlock != nil {
			if strings.Contains(inst.Raw, "bl") && strings.Contains(inst.Raw, "ExitAtomic") {
				currentBlock.EndAddr = inst.AddressInt
				blocks = append(blocks, *currentBlock)
				currentBlock = nil
			} else {
				currentBlock.Instructions = append(currentBlock.Instructions, inst)
			}
		}
	}
	
	return blocks
}

func FindVTableAddr(f *asm.Function) uint64 {
	// Look for: ldr rX, [pc, #offset]; ...; str rX, [r0]
	// where r0 is usually the 'this' pointer in a constructor.
	
	var vtableAddr uint64
	var lastLdrValue uint64
	var lastLdrReg string

	for _, inst := range f.Instructions {
		// Detect ldr rX, [pc, #offset]
		if inst.Mnemonic == "ldr" {
			parts := strings.Split(inst.Args, ",")
			if len(parts) >= 2 {
				reg := strings.TrimSpace(parts[0])
				target := strings.TrimSpace(parts[1])
				if strings.Contains(target, "[pc") {
					// It's a PC-relative load, usually from a literal pool
					// We need to look at the comment or raw to find the actual value
					re := regexp.MustCompile(`; ([0-9a-fA-F]+)`)
					match := re.FindStringSubmatch(inst.Raw)
					if len(match) > 1 {
						val, _ := strconv.ParseUint(match[1], 16, 64)
						lastLdrValue = val
						lastLdrReg = reg
					}
				}
			}
		}
		
		// Detect str rX, [r0] (or [r4] if this was moved)
		if inst.Mnemonic == "str" {
			parts := strings.Split(inst.Args, ",")
			if len(parts) >= 2 {
				srcReg := strings.TrimSpace(parts[0])
				dst := strings.TrimSpace(parts[1])
				if (dst == "[r0]" || dst == "[r4]") && srcReg == lastLdrReg {
					vtableAddr = lastLdrValue
				}
			}
		}
	}
	
	return vtableAddr
}

func (c *ClassMetadata) ExtractVTable(symbols map[uint64]*asm.Function) []string {
	var methods []string
	addr := c.VTableAddr
	
	for {
		sym, ok := symbols[addr]
		if !ok || sym.Type != asm.TypeFunction {
			break
		}
		methods = append(methods, sym.DemangledName)
		addr += 4
	}
	
	return methods
}
