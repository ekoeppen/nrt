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
	decodeTarget     string
	decodeVTableAddr string
)

var decodeCmd = &cobra.Command{
	Use:   "decode",
	Short: "Annotate a function body: constants, field offsets, vtable slots",
	Run: func(cmd *cobra.Command, args []string) {
		runDecode()
	},
}

func init() {
	decodeCmd.Flags().StringVar(&decodeTarget, "target", "", "Function name or address to decode")
	decodeCmd.Flags().StringVar(&decodeVTableAddr, "vtable-addr", "", "Optional VTable address for resolving slots (hex)")
	decodeCmd.MarkFlagRequired("target")
	rootCmd.AddCommand(decodeCmd)
}

func runDecode() {
	log.Printf("Loading assembly from %s...", asmPath)
	functions, _, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	var targetFn *asm.Function
	for _, fn := range functions {
		if fn.Name == decodeTarget || fn.DemangledName == decodeTarget || fn.Address == strings.ToLower(strings.TrimPrefix(decodeTarget, "0x")) {
			targetFn = fn
			break
		}
	}

	if targetFn == nil {
		log.Fatalf("Function not found: %s", decodeTarget)
	}

	var vtableAddr uint64
	if decodeVTableAddr != "" {
		v, err := strconv.ParseUint(strings.TrimPrefix(decodeVTableAddr, "0x"), 16, 64)
		if err != nil {
			log.Fatalf("Invalid vtable-addr: %v", err)
		}
		vtableAddr = v
	}

	fmt.Printf("\n=== Decoded: %s (%s) ===\n\n", targetFn.DemangledName, targetFn.Address)

	decoder := analysis.NewDecoder(functions, vtableAddr)
	for i := range targetFn.Instructions {
		inst := &targetFn.Instructions[i]
		annotation := decoder.Annotate(inst)
		line := fmt.Sprintf("   %-8s %-32s", inst.Address, inst.Raw)
		if annotation != "" {
			line += " // " + annotation
		}
		fmt.Println(line)
	}
}
