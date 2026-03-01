package commands

import (
	"fmt"
	"log"
	"os"
	"path/filepath"
	"regexp"
	"sort"
	"strconv"
	"strings"

	"newton/reconstructor/pkg/analysis"
	"newton/reconstructor/pkg/asm"
	"newton/reconstructor/pkg/cpp"
	"github.com/spf13/cobra"
)

var (
	scaffoldOutDir      string
	scaffoldTargetClass string
)

var scaffoldCmd = &cobra.Command{
	Use:   "scaffold",
	Short: "Generate initial .cpp files from assembly",
	Run: func(cmd *cobra.Command, args []string) {
		runScaffold()
	},
}

func init() {
	scaffoldCmd.Flags().StringVar(&scaffoldOutDir, "out", "intermediate", "Output directory")
	scaffoldCmd.Flags().StringVar(&scaffoldTargetClass, "class", "", "Filter for a specific class")
	rootCmd.AddCommand(scaffoldCmd)
}

type ClassMeta struct {
	VTable []string
	Fields map[uint64]FieldInfo
	Base   string
}

type FieldInfo struct {
	Offset uint64
	Type   string
	Size   int
	Name   string
}

func runScaffold() {
	log.Printf("Scanning headers from %s...", headersPath)
	classes, _ := cpp.ScanHeaders(headersPath)

	log.Printf("Parsing assembly from %s...", asmPath)
	symbols, allInsts, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Parse error: %v", err)
	}

	addrToSymbol := make(map[uint64]*asm.Function)
	for _, s := range symbols {
		addrToSymbol[s.AddressInt] = s
	}

	classMeta := make(map[string]*ClassMeta)
	classFunctions := make(map[string][]*asm.Function)
	var globalData []*asm.Function

	for _, fn := range symbols {
		if fn.Type == asm.TypeData {
			globalData = append(globalData, fn)
			continue
		}
		name := extractClassName(fn)
		if name == "" {
			name = "globals"
		}
		if scaffoldTargetClass != "" && name != scaffoldTargetClass {
			continue
		}
		classFunctions[name] = append(classFunctions[name], fn)
	}

	log.Printf("Analyzing classes...")
	for name, fns := range classFunctions {
		if name == "globals" {
			continue
		}
		meta := &ClassMeta{Fields: make(map[uint64]FieldInfo)}

		// Map header class if available
		headerClass, found := findClass(name, classes)

		for _, fn := range fns {
			analyzeFunction(fn, meta, allInsts, addrToSymbol)
		}

		// Apply header names to inferred fields
		if found {
			meta.Base = headerClass.Base
			for _, member := range headerClass.Members {
				if f, ok := meta.Fields[member.Offset]; ok {
					f.Name = member.Name
					f.Type = member.Type
					meta.Fields[member.Offset] = f
				} else {
					// Add members from header even if not accessed in seen code
					meta.Fields[member.Offset] = FieldInfo{
						Offset: member.Offset,
						Type:   member.Type,
						Size:   member.Size,
						Name:   member.Name,
					}
				}
			}
		}

		classMeta[name] = meta
	}

	os.MkdirAll(filepath.Join(scaffoldOutDir, "include"), 0755)

	for name, fns := range classFunctions {
		cppPath := filepath.Join(scaffoldOutDir, name+".cpp")
		f, _ := os.Create(cppPath)

		meta := classMeta[name]
		header := "Newton.h"
		c, found := findClass(name, classes)
		if found {
			header = c.Path
			if idx := strings.Index(header, "Includes/"); idx != -1 {
				header = header[idx+9:]
			} else if idx := strings.Index(header, "NCT_Projects/"); idx != -1 {
				header = header[idx+13:]
			}
		} else if name != "globals" {
			header = "include/" + name + ".h"
			genHeader(filepath.Join(scaffoldOutDir, header), name, meta, fns)
		}

		fmt.Fprintf(f, "#include \"%s\"\n\n", header)

		if meta != nil && len(meta.VTable) > 0 {
			fmt.Fprintf(f, "/* VTable Layout:\n")
			for i, v := range meta.VTable {
				fmt.Fprintf(f, " * [%d] %s\n", i, v)
			}
			fmt.Fprintf(f, " */\n\n")
		}

		for _, fn := range fns {
			writeFunction(f, fn, name, c, meta)
		}
		f.Close()
	}

	writeGlobalData(scaffoldOutDir, globalData, symbols)
	log.Println("Done.")
}

func analyzeFunction(fn *asm.Function, meta *ClassMeta, allInsts map[uint64]*asm.Instruction, addrToSymbol map[uint64]*asm.Function) {
	// Mirror the multi-register 'this' tracking from analysis.Engine.analyzeFunction.
	thisRegs := map[string]bool{"r0": true}
	isThisAccess := func(args string) bool {
		for reg := range thisRegs {
			if strings.Contains(args, "["+reg) {
				return true
			}
		}
		return false
	}

	for _, inst := range fn.Instructions {
		if inst.Mnemonic == "mov" {
			parts := strings.SplitN(inst.Args, ", ", 2)
			if len(parts) == 2 {
				dst, src := strings.TrimSpace(parts[0]), strings.TrimSpace(parts[1])
				calleeSaved := dst == "r4" || dst == "r5" || dst == "r6" ||
					dst == "r7" || dst == "r8" || dst == "r9" || dst == "r10" || dst == "r11"
				if calleeSaved && thisRegs[src] {
					thisRegs[dst] = true
				}
				if dst == "r0" && !thisRegs[src] {
					delete(thisRegs, "r0")
				}
			}
		}
		if inst.Mnemonic == "bl" {
			delete(thisRegs, "r0")
		}

		if typeName, size, _, _, isMemAccess := analysis.FieldTypeFromMnemonic(inst.Mnemonic); isMemAccess && isThisAccess(inst.Args) {
			re := regexp.MustCompile(`#(\d+)`)
			match := re.FindStringSubmatch(inst.Args)
			if match != nil {
				offset, _ := strconv.ParseUint(match[1], 10, 64)
				// Upgrade to widest observed type (long > short > char).
				if existing, ok := meta.Fields[offset]; !ok || existing.Size < size {
					meta.Fields[offset] = FieldInfo{Offset: offset, Type: typeName, Size: size, Name: fmt.Sprintf("fField%d", offset)}
				}
			}
		}

		// VTable assignment: str rX, [thisReg] with no offset = writing vtable pointer
		if inst.Mnemonic == "str" && isThisAccess(inst.Args) && !strings.Contains(inst.Args, "#") {
			// Find register that was stored
			storedReg := strings.Split(inst.Args, ",")[0]
			vtableAddr := uint64(0)
			for i := len(fn.Instructions) - 1; i >= 0; i-- {
				prev := fn.Instructions[i]
				if prev.AddressInt >= inst.AddressInt {
					continue
				}
				if prev.Mnemonic == "ldr" && strings.HasPrefix(prev.Args, storedReg+", [pc") {
					re := regexp.MustCompile(`#(\d+)`)
					m := re.FindStringSubmatch(prev.Args)
					if m != nil {
						off, _ := strconv.ParseUint(m[1], 10, 64)
						ptrAddr := prev.AddressInt + 8 + off
						if ptrInst, ok := allInsts[ptrAddr]; ok {
							vtableAddr, _ = strconv.ParseUint(ptrInst.Opcode, 16, 64)
						}
					}
					break
				}
			}
			if vtableAddr != 0 && len(meta.VTable) == 0 {
				for i := uint64(0); i < 400; i += 4 { // Read up to 100 slots
					vinst, ok := allInsts[vtableAddr+i]
					if !ok || vinst.Mnemonic != "b" {
						break
					}
					targetStr := vinst.Args
					if idx := strings.Index(targetStr, " "); idx != -1 {
						targetStr = targetStr[:idx]
					}
					targetAddr, _ := strconv.ParseUint(targetStr, 16, 64)
					if sym, ok := addrToSymbol[targetAddr]; ok {
						meta.VTable = append(meta.VTable, sym.Name)
					} else {
						meta.VTable = append(meta.VTable, fmt.Sprintf("0x%x", targetAddr))
					}
				}
			}
		}
	}
}

func genHeader(path string, className string, meta *ClassMeta, fns []*asm.Function) {
	f, _ := os.Create(path)
	defer f.Close()

	fmt.Fprintf(f, "#ifndef __INFERRED_%s_H\n#define __INFERRED_%s_H\n\n", strings.ToUpper(className), strings.ToUpper(className))
	if meta.Base != "" {
		fmt.Fprintf(f, "class %s : public %s {\npublic:\n", className, meta.Base)
	} else {
		fmt.Fprintf(f, "class %s {\npublic:\n", className)
	}

	seen := make(map[string]bool)
	var methods []string
	for _, fn := range fns {
		m := extractMethodName(fn, className)
		if !seen[m] {
			methods = append(methods, m)
			seen[m] = true
		}
	}
	sort.Strings(methods)
	for _, m := range methods {
		if m == className || m == "~"+className {
			fmt.Fprintf(f, "\t%s();\n", m)
		} else {
			fmt.Fprintf(f, "\tvoid %s();\n", m)
		}
	}

	fmt.Fprintf(f, "\nprotected:\n")
	var offsets []uint64
	for off := range meta.Fields {
		offsets = append(offsets, off)
	}
	sort.Slice(offsets, func(i, j int) bool { return offsets[i] < offsets[j] })
	for _, off := range offsets {
		field := meta.Fields[off]
		fmt.Fprintf(f, "\t%s %s; // Offset: %d\n", field.Type, field.Name, off)
	}
	fmt.Fprintf(f, "};\n\n#endif\n")
}

func writeFunction(f *os.File, fn *asm.Function, className string, c *cpp.Class, meta *ClassMeta) {
	methodName := extractMethodName(fn, className)
	signature := fn.Name
	if !strings.Contains(signature, "(") {
		signature = "void " + className + "::" + methodName + "()"
	}
	if c != nil {
		if s, ok := c.Methods[methodName]; ok {
			s = strings.TrimPrefix(s, "virtual")
			s = strings.TrimSuffix(s, ";")
			s = strings.TrimSpace(s)
			if !strings.Contains(s, "::") {
				mIdx := strings.Index(s, methodName)
				if mIdx != -1 {
					signature = s[:mIdx] + className + "::" + s[mIdx:]
				}
			} else {
				signature = s
			}
		}
	}
	if strings.Contains(fn.Name, "__ct") {
		signature = strings.ReplaceAll(signature, "__ct", className)
		signature = strings.ReplaceAll(signature, "void ", "")
	}
	if strings.Contains(fn.Name, "__dt") {
		signature = strings.ReplaceAll(signature, "__dt", "~"+className)
		signature = strings.ReplaceAll(signature, "void ", "")
	}
	signature = strings.ReplaceAll(signature, "$", "")

	fmt.Fprintf(f, "/**\n * Symbol: %s\n * Address: %s\n */\n", fn.Name, fn.Address)
	fmt.Fprintf(f, "%s {\n", signature)
	fmt.Fprintf(f, "    /*\n")
	for _, inst := range fn.Instructions {
		line := inst.Raw
		// Replace offsets with member names in comments
		if meta != nil && strings.Contains(inst.Args, "[") {
			re := regexp.MustCompile(`#(\d+)`)
			match := re.FindStringSubmatch(inst.Args)
			if match != nil {
				off, _ := strconv.ParseUint(match[1], 10, 64)
				if field, ok := meta.Fields[off]; ok {
					line = line + "\t; " + field.Name
				}
			}
		}
		fmt.Fprintf(f, "      %s\n", line)
	}
	fmt.Fprintf(f, "    */\n}\n\n")
}

func writeGlobalData(outDir string, globalData []*asm.Function, symbols []*asm.Function) {
	if len(globalData) == 0 {
		return
	}
	f, _ := os.Create(filepath.Join(outDir, "global_data.cpp"))
	h, _ := os.Create(filepath.Join(outDir, "include/global_data.h"))
	defer f.Close()
	defer h.Close()

	fmt.Fprintf(h, "#ifndef __GLOBAL_DATA_H\n#define __GLOBAL_DATA_H\n\n")
	fmt.Fprintf(f, "#include \"global_data.h\"\n\n")

	for _, item := range globalData {
		size := uint64(4)
		for j := 0; j < len(symbols); j++ {
			if symbols[j].AddressInt == item.AddressInt && j+1 < len(symbols) {
				size = symbols[j+1].AddressInt - item.AddressInt
				break
			}
		}
		fmt.Fprintf(h, "extern unsigned char %s[%d];\n", item.Name, size)
		fmt.Fprintf(f, "unsigned char %s[%d] = {", item.Name, size)
		for j, inst := range item.Instructions {
			if j%4 == 0 {
				fmt.Fprintf(f, "\n    ")
			}
			if len(inst.Opcode) == 8 {
				fmt.Fprintf(f, "0x%s, 0x%s, 0x%s, 0x%s, ", inst.Opcode[6:8], inst.Opcode[4:6], inst.Opcode[2:4], inst.Opcode[0:2])
			}
		}
		fmt.Fprintf(f, "\n};\n\n")
	}
	fmt.Fprintf(h, "\n#endif\n")
}

func extractClassName(fn *asm.Function) string {
	if fn.ClassName != "" {
		return fn.ClassName
	}
	if strings.Contains(fn.Name, "::") {
		return strings.Split(fn.Name, "::")[0]
	}
	return ""
}

func extractMethodName(fn *asm.Function, className string) string {
	method := ""
	if strings.Contains(fn.Name, "::") {
		method = strings.Split(fn.Name, "::")[1]
		if idx := strings.Index(method, "("); idx != -1 {
			method = method[:idx]
		}
	} else if idx := strings.Index(fn.Name, "__"); idx != -1 {
		method = fn.Name[:idx]
	} else {
		method = fn.Name
	}
	method = strings.TrimPrefix(method, "$")
	if method == "__ct" {
		return className
	}
	if method == "__dt" {
		return "~" + className
	}
	return method
}

func findClass(name string, classes map[string]*cpp.Class) (*cpp.Class, bool) {
	if c, ok := classes[name]; ok {
		return c, true
	}
	if strings.HasPrefix(name, "T") {
		base := name[1:]
		if c, ok := classes["TU"+base]; ok {
			return c, true
		}
		if c, ok := classes[base]; ok {
			return c, true
		}
	}
	if c, ok := classes["T"+name]; ok {
		return c, true
	}
	if c, ok := classes["TU"+name]; ok {
		return c, true
	}
	return nil, false
}
