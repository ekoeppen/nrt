package main

import (
	"flag"
	"fmt"
	"log"
	"newton/reconstructor/pkg/asm"
	"regexp"
	"sort"
	"strconv"
	"strings"
)

func main() {
	asmPath := flag.String("asm", "MP2x00US.s", "Path to assembly file")
	cmd := flag.String("cmd", "lookup", "Command: lookup, xref, body, range")
	target := flag.String("target", "", "Target symbol, address, or regex")
	endAddr := flag.String("end", "", "End address for 'range' command")
	flag.Parse()

	if *target == "" {
		log.Fatalf("Please provide a -target")
	}

	log.Printf("Loading and indexing assembly...")
	functions, _, err := asm.ParseFile(*asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	// Create indexes
	nameMap := make(map[string]*asm.Function)
	addrMap := make(map[uint64]*asm.Function)
	for _, fn := range functions {
		nameMap[fn.Name] = fn
		nameMap[fn.DemangledName] = fn
		addrMap[fn.AddressInt] = fn
	}

	switch *cmd {
	case "lookup":
		doLookup(functions, *target)
	case "xref":
		doXRef(functions, addrMap, *target)
	case "body":
		doBody(nameMap, addrMap, *target)
	case "range":
		doRange(addrMap, *target, *endAddr)
	default:
		log.Fatalf("Unknown command: %s", *cmd)
	}
}

func doLookup(functions []*asm.Function, query string) {
	re, err := regexp.Compile("(?i)" + query)
	if err != nil {
		log.Fatalf("Invalid regex: %v", err)
	}

	fmt.Printf("\n%-12s | %s\n", "Address", "Symbol")
	fmt.Printf("------------------------------------------------------------\n")
	for _, fn := range functions {
		if re.MatchString(fn.Name) || re.MatchString(fn.DemangledName) {
			fmt.Printf("0x%08X | %s\n", fn.AddressInt, fn.DemangledName)
		}
	}
}

func doXRef(functions []*asm.Function, addrMap map[uint64]*asm.Function, target string) {
	var targetAddr uint64
	if strings.HasPrefix(target, "0x") {
		targetAddr, _ = strconv.ParseUint(target[2:], 16, 64)
	} else {
		// Try to find the address of the symbol
		for _, fn := range functions {
			if fn.Name == target || fn.DemangledName == target {
				targetAddr = fn.AddressInt
				break
			}
		}
	}

	if targetAddr == 0 {
		log.Fatalf("Could not resolve target: %s", target)
	}

	targetHex := fmt.Sprintf("%x", targetAddr)
	fmt.Printf("\nCross-references to 0x%08X (%s):\n", targetAddr, target)
	fmt.Printf("------------------------------------------------------------\n")

	for _, fn := range functions {
		for _, inst := range fn.Instructions {
			if strings.Contains(inst.Args, targetHex) || strings.Contains(inst.Comment, targetHex) {
				fmt.Printf("0x%08X in %-30s | %s\n", inst.AddressInt, fn.Name, inst.Raw)
			}
		}
	}
}

func doBody(nameMap map[string]*asm.Function, addrMap map[uint64]*asm.Function, target string) {
	var fn *asm.Function
	if strings.HasPrefix(target, "0x") {
		addr, _ := strconv.ParseUint(target[2:], 16, 64)
		fn = addrMap[addr]
	} else {
		fn = nameMap[target]
	}

	if fn == nil {
		log.Fatalf("Function not found: %s", target)
	}

	fmt.Printf("\n--- Body of %s (0x%X) ---\n", fn.DemangledName, fn.AddressInt)
	for _, inst := range fn.Instructions {
		fmt.Println(inst.Raw)
	}
}

func doRange(addrMap map[uint64]*asm.Function, startStr, endStr string) {
	start, _ := strconv.ParseUint(strings.TrimPrefix(startStr, "0x"), 16, 64)
	end, _ := strconv.ParseUint(strings.TrimPrefix(endStr, "0x"), 16, 64)

	if end == 0 {
		end = start + 0x100
	}

	fmt.Printf("\n--- Range 0x%X - 0x%X ---\n", start, end)
	
	// Since instructions are grouped by function, we need to iterate functions
	// This is slightly inefficient but works with current pkg/asm structure.
	var keys []uint64
	for k := range addrMap {
		keys = append(keys, k)
	}
	sort.Slice(keys, func(i, j int) bool { return keys[i] < keys[j] })

	for _, k := range keys {
		fn := addrMap[k]
		for _, inst := range fn.Instructions {
			if inst.AddressInt >= start && inst.AddressInt <= end {
				fmt.Println(inst.Raw)
			}
		}
	}
}
