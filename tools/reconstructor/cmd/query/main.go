package main

import (
	"flag"
	"fmt"
	"log"
	"newton/reconstructor/pkg/analysis"
	"newton/reconstructor/pkg/asm"
	"strings"
	"strconv"
)

func main() {
	asmPath := flag.String("asm", "MP2x00US.s", "Path to assembly file")
	calleesOf := flag.String("callees-of", "", "Show who calls this function")
	accessorsOf := flag.String("accessors-of", "", "Show who accesses Class:Offset (e.g. TSharedMem:4)")
	flag.Parse()

	log.Printf("Loading assembly...")
	symbols, _, err := asm.ParseFile(*asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	log.Printf("Running analysis engine...")
	engine := analysis.NewEngine(symbols)
	engine.Analyze()

	if *calleesOf != "" {
		fmt.Printf("Callers of %s:\n", *calleesOf)
		callers := engine.Callers[*calleesOf]
		if len(callers) == 0 {
			for name, c := range engine.Callers {
				if strings.Contains(name, *calleesOf) {
					fmt.Printf("--- From fuzzy match: %s ---\n", name)
					printFunctions(c)
				}
			}
		} else {
			printFunctions(callers)
		}
	}

	if *accessorsOf != "" {
		parts := strings.Split(*accessorsOf, ":")
		if len(parts) != 2 {
			log.Fatalf("Invalid format for accessors-of. Use Class:Offset")
		}
		className := parts[0]
		offsetStr := strings.TrimPrefix(parts[1], "#")
		offInt, _ := strconv.ParseUint(offsetStr, 10, 64)

		fmt.Printf("Accessors of %s at offset %d:\n", className, offInt)
		if classMap, ok := engine.FieldUsers[className]; ok {
			if accesses, ok := classMap[offInt]; ok {
				for _, acc := range accesses {
					typeStr := "Read"
					if acc.Type == analysis.Write {
						typeStr = "Write"
					}
					fmt.Printf("  [%s] %s (at 0x%x)\n", typeStr, acc.Func.Name, acc.Addr)
				}
			} else {
				fmt.Println("No accesses found for this offset.")
			}
		} else {
			fmt.Println("No accesses found for this class.")
		}
	}
}

func printFunctions(fns []*asm.Function) {
	seen := make(map[string]bool)
	for _, f := range fns {
		if !seen[f.Name] {
			fmt.Printf("  %s (at 0x%s)\n", f.Name, f.Address)
			seen[f.Name] = true
		}
	}
}
