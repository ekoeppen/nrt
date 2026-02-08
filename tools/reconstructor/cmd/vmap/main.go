package main

import (
	"flag"
	"fmt"
	"log"
	"newton/reconstructor/pkg/analysis"
	"newton/reconstructor/pkg/asm"
	"strings"
)

func main() {
	asmPath := flag.String("asm", "MP2x00US.s", "Path to assembly file")
	className := flag.String("class", "", "Class name to analyze")
	flag.Parse()

	if *className == "" {
		log.Fatalf("Please provide a class name using -class")
	}

	log.Printf("Loading assembly...")
	functions, _, err := asm.ParseFile(*asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	fnMap := make(map[uint64]*asm.Function)
	for _, fn := range functions {
		fnMap[fn.AddressInt] = fn
	}

	log.Printf("Searching for %s constructor...", *className)
	var constructor *asm.Function
	for _, fn := range functions {
		if fn.ClassName == *className && (strings.Contains(fn.Name, "__ct") || strings.Contains(fn.DemangledName, *className+"(")) {
			constructor = fn
			break
		}
	}

	if constructor == nil {
		log.Fatalf("Constructor for %s not found", *className)
	}

	vtableAddr := analysis.FindVTableAddr(constructor)
	if vtableAddr == 0 {
		log.Fatalf("VTable address for %s not found in constructor at 0x%X", *className, constructor.AddressInt)
	}

	fmt.Printf("\n=== VTable for %s ===\n", *className)
	fmt.Printf("Address: 0x%08X\n\n", vtableAddr)
	fmt.Printf("%-4s | %-12s | %s\n", "Slot", "Address", "Method")
	fmt.Printf("------------------------------------------------------------\n")

	addr := vtableAddr
	slot := 0
	for {
		// In a real VTable, these are pointers to functions.
		// However, in our disassembly, they are often labels.
		// We need to look at what's at this address in the data section or if it's a label.
		
		// Heuristic: If we don't have the data section fully parsed, we look for labels 
		// that point to this address.
		
		targetFn, ok := fnMap[addr]
		if !ok {
			// Try reading 4 bytes if we had a data section parser.
			// For now, if we don't find a function at this address, we stop 
			// (assuming the VTable is a contiguous list of function pointers 
			// that the labels already point to in our disassembly)
			break
		}
		
		fmt.Printf("%-4d | 0x%08X | %s\n", slot, addr, targetFn.DemangledName)
		addr += 4
		slot++
		
		if slot > 200 { break } // Sanity check
	}
}
