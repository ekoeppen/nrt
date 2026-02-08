package main

import (
	"flag"
	"fmt"
	"log"
	"newton/reconstructor/pkg/analysis"
	"newton/reconstructor/pkg/asm"
)

func main() {
	asmPath := flag.String("asm", "MP2x00US.s", "Path to assembly file")
	className := flag.String("class", "", "Class name to analyze")
	flag.Parse()

	log.Printf("Loading assembly...")
	functions, _, err := asm.ParseFile(*asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	fmt.Printf("\n=== Atomic Transaction Analysis ===\n")
	
	for _, fn := range functions {
		if *className != "" && fn.ClassName != *className {
			continue
		}

		blocks := analysis.FindAtomicBlocks(fn)
		if len(blocks) == 0 {
			continue
		}

		fmt.Printf("\nFunction: %s (0x%X)\n", fn.DemangledName, fn.AddressInt)
		for i, block := range blocks {
			fmt.Printf("  Block %d: 0x%X - 0x%X\n", i+1, block.StartAddr, block.EndAddr)
			for _, inst := range block.Instructions {
				fmt.Printf("    %s\n", inst.Raw)
			}
		}
	}
}
