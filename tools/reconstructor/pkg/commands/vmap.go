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
	vmapClassName string
)

var vmapCmd = &cobra.Command{
	Use:   "vmap",
	Short: "Automated VTable discovery and mapping",
	Run: func(cmd *cobra.Command, args []string) {
		runVMap()
	},
}

func init() {
	vmapCmd.Flags().StringVar(&vmapClassName, "class", "", "Class name to analyze")
	vmapCmd.MarkFlagRequired("class")
	rootCmd.AddCommand(vmapCmd)
}

func runVMap() {
	log.Printf("Loading assembly from %s...", asmPath)
	functions, _, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	fnMap := make(map[uint64]*asm.Function)
	for _, fn := range functions {
		fnMap[fn.AddressInt] = fn
	}

	log.Printf("Searching for %s constructor...", vmapClassName)
	var constructor *asm.Function
	for _, fn := range functions {
		if fn.ClassName == vmapClassName && (strings.Contains(fn.Name, "__ct") || strings.Contains(fn.DemangledName, vmapClassName+"(")) {
			constructor = fn
			break
		}
	}

	if constructor == nil {
		log.Fatalf("Constructor for %s not found", vmapClassName)
	}

	vtableAddr := analysis.FindVTableAddr(constructor)
	if vtableAddr == 0 {
		log.Fatalf("VTable address for %s not found in constructor at 0x%X", vmapClassName, constructor.AddressInt)
	}

	fmt.Printf("\n=== VTable for %s ===\n", vmapClassName)
	fmt.Printf("Address: 0x%08X\n\n", vtableAddr)
	fmt.Printf("%-4s | %-12s | %s\n", "Slot", "Address", "Method")
	fmt.Printf("------------------------------------------------------------\n")

	addr := vtableAddr
	slot := 0
	for {
		targetFn, ok := fnMap[addr]
		if !ok {
			break
		}

		fmt.Printf("%-4d | 0x%08X | %s\n", slot, addr, targetFn.DemangledName)
		addr += 4
		slot++

		if slot > 200 {
			break
		} // Sanity check
	}
}
