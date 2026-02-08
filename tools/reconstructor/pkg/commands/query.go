package commands

import (
	"fmt"
	"log"
	"strconv"
	"strings"

	"newton/reconstructor/pkg/analysis"
	"newton/reconstructor/pkg/asm"
	"github.com/spf13/cobra"
)

var (
	queryCalleesOf   string
	queryAccessorsOf string
)

var queryCmd = &cobra.Command{
	Use:   "query",
	Short: "Symbolic search for callers and field access",
	Run: func(cmd *cobra.Command, args []string) {
		runQuery()
	},
}

func init() {
	queryCmd.Flags().StringVar(&queryCalleesOf, "callees-of", "", "Show who calls this function")
	queryCmd.Flags().StringVar(&queryAccessorsOf, "accessors-of", "", "Show who accesses Class:Offset (e.g. TSharedMem:4)")
	rootCmd.AddCommand(queryCmd)
}

func runQuery() {
	log.Printf("Loading assembly from %s...", asmPath)
	symbols, _, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	log.Printf("Running analysis engine...")
	engine := analysis.NewEngine(symbols)
	engine.Analyze()

	if queryCalleesOf != "" {
		fmt.Printf("Callers of %s:\n", queryCalleesOf)
		callers := engine.Callers[queryCalleesOf]
		if len(callers) == 0 {
			for name, c := range engine.Callers {
				if strings.Contains(name, queryCalleesOf) {
					fmt.Printf("--- From fuzzy match: %s ---\n", name)
					printFunctions(c)
				}
			}
		} else {
			printFunctions(callers)
		}
	}

	if queryAccessorsOf != "" {
		parts := strings.Split(queryAccessorsOf, ":")
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
