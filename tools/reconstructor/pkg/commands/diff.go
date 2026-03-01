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
	diffTarget1 string
	diffTarget2 string
)

var diffCmd = &cobra.Command{
	Use:   "diff",
	Short: "Side-by-side structural comparison of two functions",
	Run: func(cmd *cobra.Command, args []string) {
		runDiff()
	},
}

func init() {
	diffCmd.Flags().StringVar(&diffTarget1, "fn1", "", "First function to compare (name or address)")
	diffCmd.Flags().StringVar(&diffTarget2, "fn2", "", "Second function to compare (name or address)")
	diffCmd.MarkFlagRequired("fn1")
	diffCmd.MarkFlagRequired("fn2")
	rootCmd.AddCommand(diffCmd)
}

func runDiff() {
	log.Printf("Loading assembly from %s...", asmPath)
	functions, _, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	findFn := func(target string) *asm.Function {
		for _, fn := range functions {
			if fn.Name == target || fn.DemangledName == target || fn.Address == strings.ToLower(strings.TrimPrefix(target, "0x")) {
				return fn
			}
		}
		return nil
	}

	fn1 := findFn(diffTarget1)
	fn2 := findFn(diffTarget2)

	if fn1 == nil {
		log.Fatalf("Function 1 not found: %s", diffTarget1)
	}
	if fn2 == nil {
		log.Fatalf("Function 2 not found: %s", diffTarget2)
	}

	fmt.Printf("\n%-50s | %-50s\n", fn1.DemangledName, fn2.DemangledName)
	fmt.Printf("%s\n", strings.Repeat("-", 103))

	decoder1 := analysis.NewDecoder(functions, 0)
	decoder2 := analysis.NewDecoder(functions, 0)

	maxLen := len(fn1.Instructions)
	if len(fn2.Instructions) > maxLen {
		maxLen = len(fn2.Instructions)
	}

	for i := 0; i < maxLen; i++ {
		var line1, line2 string

		if i < len(fn1.Instructions) {
			inst := &fn1.Instructions[i]
			annotation := decoder1.Annotate(inst)
			line1 = fmt.Sprintf("%-25s", inst.Mnemonic+" "+inst.Args)
			if annotation != "" {
				line1 += " // " + annotation
			}
		}

		if i < len(fn2.Instructions) {
			inst := &fn2.Instructions[i]
			annotation := decoder2.Annotate(inst)
			line2 = fmt.Sprintf("%-25s", inst.Mnemonic+" "+inst.Args)
			if annotation != "" {
				line2 += " // " + annotation
			}
		}

		// Highlight differences (very simple mnemonic match for now)
		prefix := "  "
		if i < len(fn1.Instructions) && i < len(fn2.Instructions) {
			if fn1.Instructions[i].Mnemonic != fn2.Instructions[i].Mnemonic {
				prefix = "! "
			}
		}

		fmt.Printf("%s%-48.48s | %-48.48s\n", prefix, line1, line2)
	}
}
