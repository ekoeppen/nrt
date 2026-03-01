package commands

import (
	"fmt"
	"log"
	"sort"

	"newton/reconstructor/pkg/analysis"
	"newton/reconstructor/pkg/asm"
	"github.com/spf13/cobra"
)

var (
	analyzeClassName string
)

var analyzeCmd = &cobra.Command{
	Use:   "analyze",
	Short: "Determine class sizes and base classes",
	Run: func(cmd *cobra.Command, args []string) {
		runAnalyze()
	},
}

func init() {
	analyzeCmd.Flags().StringVar(&analyzeClassName, "class", "", "Class name to analyze")
	analyzeCmd.MarkFlagRequired("class")
	rootCmd.AddCommand(analyzeCmd)
}

func runAnalyze() {
	log.Printf("Loading assembly from %s...", asmPath)
	symbols, _, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	log.Printf("Running analysis engine...")
	engine := analysis.NewEngine(symbols)
	engine.Analyze()

	meta, ok := engine.Classes[analyzeClassName]
	if !ok {
		fmt.Printf("Class %s not found in metadata. Showing raw field accesses if available.\n", analyzeClassName)
	} else {
		fmt.Printf("\n=== Class Analysis: %s ===\n", meta.Name)
		if meta.Size > 0 {
			fmt.Printf("  Size:       %d bytes\n", meta.Size)
		} else {
			fmt.Printf("  Size:       Unknown (no 'new' call found in constructor)\n")
		}
		if meta.BaseClass != "" {
			fmt.Printf("  Base Class: %s\n", meta.BaseClass)
		} else {
			fmt.Printf("  Base Class: None (or not detected)\n")
		}
	}

	fmt.Printf("\n--- Discovered Fields ---\n")
	fieldUsers := engine.FieldUsers[analyzeClassName]
	if len(fieldUsers) == 0 {
		fmt.Println("  No direct field accesses found.")
	} else {
		var offsets []int
		for off := range fieldUsers {
			offsets = append(offsets, int(off))
		}
		sort.Ints(offsets)

		for _, off := range offsets {
			uOff := uint64(off)
			accesses := fieldUsers[uOff]

			// Derive the widest field type from ClassMetadata (populated by the engine).
			fieldType := "long"
			if meta != nil {
				if fi, ok := meta.Fields[uOff]; ok {
					fieldType = fi.Type
				}
			}

			fmt.Printf("  [Offset %3d] %s (%d accesses)\n", off, fieldType, len(accesses))

			// Show first few accessors
			limit := 3
			for i, acc := range accesses {
				if i >= limit {
					fmt.Printf("      ... and %d more\n", len(accesses)-limit)
					break
				}
				typeStr := "Read"
				if acc.Type == analysis.Write {
					typeStr = "Write"
				}
				fmt.Printf("      - %s: %s (at 0x%x)\n", typeStr, acc.Func.Name, acc.Addr)
			}
		}
	}
	fmt.Println()
}
