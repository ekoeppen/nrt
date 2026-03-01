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
	vmapClassName  string
	vmapVTableAddr string
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
	vmapCmd.Flags().StringVar(&vmapVTableAddr, "vtable-addr", "", "Manual VTable address override (hex)")
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

	var vtableAddr uint64
	if vmapVTableAddr != "" {
		v, err := strconv.ParseUint(strings.TrimPrefix(vmapVTableAddr, "0x"), 16, 64)
		if err != nil {
			log.Fatalf("Invalid vtable-addr: %v", err)
		}
		vtableAddr = v
	} else {
		log.Printf("Searching for %s constructor...", vmapClassName)
		var constructor *asm.Function
		for _, fn := range functions {
			if fn.ClassName == vmapClassName && (strings.Contains(fn.Name, "__ct") || strings.Contains(fn.DemangledName, vmapClassName+"(")) {
				constructor = fn
				break
			}
		}

		if constructor == nil {
			log.Fatalf("Constructor for %s not found. Use --vtable-addr if automated discovery fails.", vmapClassName)
		}

		vtableAddr = analysis.FindVTableAddr(constructor)
		if vtableAddr == 0 {
			log.Fatalf("VTable address for %s not found in constructor at 0x%X. Use --vtable-addr for manual override.", vmapClassName, constructor.AddressInt)
		}
	}

	fmt.Printf("\n=== VTable for %s ===\n", vmapClassName)
	fmt.Printf("Address: 0x%08X\n\n", vtableAddr)
	fmt.Printf("%-4s | %-12s | %s\n", "Slot", "Address", "Method")
	fmt.Printf("------------------------------------------------------------\n")

	addr := vtableAddr
	slot := 0
	for {
		// VTable entries are 4-byte pointers (usually branch instructions in ROM)
		targetFn, ok := fnMap[addr]
		if !ok {
			// If we can't find a function at this exact address, check if there's a pointer in ROM
			// In many cases, the vtable is a list of branch instructions:
			//   0x100: b Method1
			//   0x104: b Method2
			// The functions we've parsed are at Method1, Method2, etc.
			// But the VTable address is 0x100.
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
