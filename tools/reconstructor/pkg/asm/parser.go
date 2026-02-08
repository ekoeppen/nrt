package asm

import (
	"bufio"
	"os"
	"regexp"
	"strconv"
	"strings"
)

type SymbolType int

const (
	TypeUnknown SymbolType = iota
	TypeFunction
	TypeData
)

type Instruction struct {
	Address    string
	AddressInt uint64
	Opcode     string
	Mnemonic   string
	Args       string
	Comment    string
	Raw        string
}

type Function struct {
	Name         string
	DemangledName string
	ClassName    string
	Address      string
	AddressInt   uint64
	Instructions []Instruction
	Type         SymbolType
}

var (
	labelRegex = regexp.MustCompile(`^([0-9a-fA-F]+) <([^>]+)>:`)
	instRegex  = regexp.MustCompile(`^\s+([0-9a-fA-F]+):\s+([0-9a-fA-F]+)\s+([^\t\s;]+)\s*(.*?)(?:;|\t|$)`)
)

func ParseFile(path string) ([]*Function, map[uint64]*Instruction, error) {
	file, err := os.Open(path)
	if err != nil {
		return nil, nil, err
	}
	defer file.Close()

	var functions []*Function
	var currentFn *Function
	allInsts := make(map[uint64]*Instruction)

	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		line := scanner.Text()

		// Check for label/function start
		if matches := labelRegex.FindStringSubmatch(line); matches != nil {
			addrStr := matches[1]
			name := matches[2]
			addrInt, _ := strconv.ParseUint(addrStr, 16, 64)

			currentFn = &Function{
				Name:       name,
				Address:    addrStr,
				AddressInt: addrInt,
				Type:       inferType(name),
			}
			parseName(currentFn)
			functions = append(functions, currentFn)
			continue
		}

		// Check for instruction
		if matches := instRegex.FindStringSubmatch(line); matches != nil {
			addrStr := matches[1]
			addrInt, _ := strconv.ParseUint(addrStr, 16, 64)
			
			inst := &Instruction{
				Address:    addrStr,
				AddressInt: addrInt,
				Opcode:     matches[2],
				Mnemonic:   strings.TrimSpace(matches[3]),
				Args:       strings.TrimSpace(matches[4]),
				Raw:        line,
			}
			if parts := strings.Split(inst.Args, ";"); len(parts) > 1 {
				inst.Args = strings.TrimSpace(parts[0])
				inst.Comment = strings.TrimSpace(parts[1])
			}
			
			allInsts[addrInt] = inst
			if currentFn != nil {
				currentFn.Instructions = append(currentFn.Instructions, *inst)
			}
		}
	}

	return functions, allInsts, scanner.Err()
}

func inferType(name string) SymbolType {
	if strings.HasPrefix(name, "g") && len(name) > 1 && name[1] >= 'A' && name[1] <= 'Z' {
		return TypeData
	}
	if strings.HasPrefix(name, "k") && len(name) > 1 && name[1] >= 'A' && name[1] <= 'Z' {
		return TypeData
	}
	dataMarkers := []string{"DataAreaTable", "vtables", "CirrusVoltageTable", "CirrusBatteryTable"}
	for _, m := range dataMarkers {
		if strings.Contains(name, m) {
			return TypeData
		}
	}
	if strings.Contains(name, "::") || strings.Contains(name, "__") || strings.Contains(name, "(") {
		return TypeFunction
	}
	return TypeFunction
}

func demangle(name string) string {
	d := name
	d = strings.ReplaceAll(d, "$", "")
	return d
}

func parseName(fn *Function) {
	fn.DemangledName = demangle(fn.Name)
	if strings.Contains(fn.Name, "::") {
		parts := strings.Split(fn.Name, "::")
		fn.ClassName = parts[0]
		fn.ClassName = regexp.MustCompile(`^[^A-Za-z_]+`).ReplaceAllString(fn.ClassName, "")
	} else if strings.Contains(fn.Name, "__") {
		idx := strings.Index(fn.Name, "__")
		mangled := fn.Name[idx+2:]
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
				fn.ClassName = mangled[len(lenStr) : len(lenStr)+length]
			}
		}
	}
}
