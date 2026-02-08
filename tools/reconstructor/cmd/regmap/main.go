package main

import (
	"flag"
	"fmt"
	"log"
	"newton/reconstructor/pkg/analysis"
	"newton/reconstructor/pkg/asm"
	"sort"
)

func main() {
	asmPath := flag.String("asm", "MP2x00US.s", "Path to assembly file")
	className := flag.String("class", "", "Class name to analyze (optional)")
	flag.Parse()

	log.Printf("Loading assembly...")
	symbols, _, err := asm.ParseFile(*asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	log.Printf("Scanning for MMIO constants...")
	
	mmioMap := make(map[uint64][]string)

	for _, sym := range symbols {
		if sym.Type != asm.TypeFunction {
			continue
		}
		
		if *className != "" && sym.ClassName != *className {
			continue
		}

		constants := analysis.FindMMIOConstants(sym)
		for _, c := range constants {
			mmioMap[c] = append(mmioMap[c], sym.Name)
		}
	}

	var addresses []uint64
	for addr := range mmioMap {
		addresses = append(addresses, addr)
	}
	sort.Slice(addresses, func(i, j int) bool { return addresses[i] < addresses[j] })

	fmt.Printf("\n=== MMIO Register Map ===\n")
	fmt.Printf("%-12s | %-20s | %s\n", "Address", "Known Name", "Used In")
	fmt.Printf("------------------------------------------------------------\n")
	for _, addr := range addresses {
		name := "Unknown"
		if info, ok := analysis.KnownRegisters[addr]; ok {
			name = info.Name
		}
		
		users := mmioMap[addr]
		if len(users) > 3 {
			users = append(users[:3], fmt.Sprintf("... (%d more)", len(users)-3))
		}
		
		fmt.Printf("0x%08X | %-20s | %v\n", addr, name, users)
	}
}
