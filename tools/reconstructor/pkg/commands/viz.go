package commands

import (
	"fmt"
	"log"
	"strings"

	"newton/reconstructor/pkg/analysis"
	"newton/reconstructor/pkg/asm"
	"github.com/spf13/cobra"
)

var (
	vizTarget string
	vizDepth  int
)

var vizCmd = &cobra.Command{
	Use:   "viz",
	Short: "Generate Mermaid call graphs",
	Run: func(cmd *cobra.Command, args []string) {
		runViz()
	},
}

func init() {
	vizCmd.Flags().StringVar(&vizTarget, "target", "", "Target class or function to center the graph on")
	vizCmd.Flags().IntVar(&vizDepth, "depth", 1, "Graph depth")
	vizCmd.MarkFlagRequired("target")
	rootCmd.AddCommand(vizCmd)
}

func runViz() {
	log.Printf("Loading assembly from %s...", asmPath)
	symbols, _, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	log.Printf("Analyzing...")
	engine := analysis.NewEngine(symbols)
	engine.Analyze()

	fmt.Println("graph TD")

	visited := make(map[string]bool)
	queue := []string{vizTarget}

	// We'll search for callers and callees
	for d := 0; d < vizDepth; d++ {
		nextQueue := []string{}
		for _, node := range queue {
			if visited[node] {
				continue
			}
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
