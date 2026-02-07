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
	target := flag.String("target", "", "Target class or function to center the graph on")
	depth := flag.Int("depth", 1, "Graph depth")
	flag.Parse()

	if *target == "" {
		log.Fatalf("Target is required")
	}

	log.Printf("Loading assembly...")
	symbols, _, err := asm.ParseFile(*asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	log.Printf("Analyzing...")
	engine := analysis.NewEngine(symbols)
	engine.Analyze()

	fmt.Println("graph TD")
	
	visited := make(map[string]bool)
	queue := []string{*target}
	
	// We'll search for callers and callees
	for d := 0; d < *depth; d++ {
		nextQueue := []string{}
		for _, node := range queue {
			if visited[node] { continue }
			visited[node] = true

			// Show callers
			for callee, callers := range engine.Callers {
				if strings.Contains(callee, node) {
					for _, caller := range callers {
						fmt.Printf("  %s --> %s\n", clean(caller.Name), clean(callee))
						nextQueue = append(nextQueue, caller.Name)
					}
				}
			}
			
			// Show callees (this requires a separate map or scanning)
			// For now, let's just do callers as it's the most interesting for reverse engineering
		}
		queue = nextQueue
	}
}

func clean(s string) string {
	s = strings.ReplaceAll(s, "::", "_")
	s = strings.ReplaceAll(s, "$", "")
	s = strings.ReplaceAll(s, "(", "_")
	s = strings.ReplaceAll(s, ")", "_")
	s = strings.ReplaceAll(s, " ", "_")
	s = strings.ReplaceAll(s, "*", "ptr")
	s = strings.ReplaceAll(s, ",", "_")
	return s
}
