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
	thisReg := "r0"

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

		// Field access analysis
		// Track 'this' pointer - often moved from r0 to r4 or r5
		if inst.Mnemonic == "mov" && (strings.HasPrefix(inst.Args, "r4, r0") || strings.HasPrefix(inst.Args, "r5, r0")) {
			thisReg = inst.Args[:2]
		}

		if (strings.HasPrefix(inst.Mnemonic, "ldr") || strings.HasPrefix(inst.Mnemonic, "str")) && strings.Contains(inst.Args, "["+thisReg) {
			re := regexp.MustCompile(`#(\d+)`)
			match := re.FindStringSubmatch(inst.Args)
			if match != nil {
				offset, _ := strconv.ParseUint(match[1], 10, 64)
				accType := Read
				if strings.HasPrefix(inst.Mnemonic, "str") {
					accType = Write
				}


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
					
					// Also update ClassMetadata fields
					meta := e.getOrCreateClass(fn.ClassName)
					if _, ok := meta.Fields[offset]; !ok {
						fieldType := "long"
						if strings.HasSuffix(inst.Mnemonic, "b") {
							fieldType = "char"
						}
						meta.Fields[offset] = FieldInfo{Offset: offset, Type: fieldType}
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
