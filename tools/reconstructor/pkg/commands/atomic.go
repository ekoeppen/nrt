package commands

import (
	"fmt"
	"log"

	"newton/reconstructor/pkg/analysis"
	"newton/reconstructor/pkg/asm"
	"github.com/spf13/cobra"
)

var (
	atomicClassName string
)

var atomicCmd = &cobra.Command{
	Use:   "atomic",
	Short: "Pattern recognizer for atomic hardware transactions",
	Run: func(cmd *cobra.Command, args []string) {
		runAtomic()
	},
}

func init() {
	atomicCmd.Flags().StringVar(&atomicClassName, "class", "", "Class name to analyze")
	rootCmd.AddCommand(atomicCmd)
}

func runAtomic() {
	log.Printf("Loading assembly from %s...", asmPath)
	functions, _, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	fmt.Printf("\n=== Atomic Transaction Analysis ===\n")

	for _, fn := range functions {
		if atomicClassName != "" && fn.ClassName != atomicClassName {
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
