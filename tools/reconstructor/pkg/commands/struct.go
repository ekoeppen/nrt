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
	structClassName string
)

var structCmd = &cobra.Command{
	Use:   "struct",
	Short: "Generate a C++ header skeleton from discovered field offsets",
	Run: func(cmd *cobra.Command, args []string) {
		runStruct()
	},
}

func init() {
	structCmd.Flags().StringVar(&structClassName, "class", "", "Class name to emit")
	structCmd.MarkFlagRequired("class")
	rootCmd.AddCommand(structCmd)
}

func runStruct() {
	log.Printf("Loading assembly from %s...", asmPath)
	symbols, _, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	log.Printf("Running analysis engine...")
	engine := analysis.NewEngine(symbols)
	engine.Analyze()

	meta, ok := engine.Classes[structClassName]
	if !ok {
		log.Fatalf("Class %s not found in metadata.", structClassName)
	}

	fmt.Printf("\n// ─────────────────────────────────────────────────────────────────────────────\n")
	fmt.Printf("//  %s  —  Inferred Memory Layout (Size: %d)\n", meta.Name, meta.Size)
	fmt.Printf("// ─────────────────────────────────────────────────────────────────────────────\n\n")

	if meta.BaseClass != "" {
		fmt.Printf("class %s : public %s {\n", meta.Name, meta.BaseClass)
	} else {
		fmt.Printf("class %s {\n", meta.Name)
	}
	fmt.Printf("public:\n")

	fieldUsers := engine.FieldUsers[structClassName]
	var offsets []int
	for off := range fieldUsers {
		offsets = append(offsets, int(off))
	}
	sort.Ints(offsets)

	lastOffset := 0
	if meta.BaseClass != "" {
		// Heuristic: base class size is roughly the first field offset if it's large,
		// but let's just assume 0 for now and let the user adjust.
	}

	for _, off := range offsets {
		uOff := uint64(off)

		// Padding if there's a gap
		if off > lastOffset {
			padding := off - lastOffset
			if padding > 0 {
				fmt.Printf("\tUByte\t\tfPadding%X[%d];\t\t// +0x%X\n", lastOffset, padding, lastOffset)
			}
		}

		fieldType := "long"
		if fi, ok := meta.Fields[uOff]; ok {
			fieldType = fi.Type
		}

		fmt.Printf("\t%-12s fField%X;\t\t\t\t// +0x%X\n", fieldType, off, off)

		size := 4
		if fieldType == "char" || fieldType == "UByte" {
			size = 1
		}
		lastOffset = off + size
	}

	// Final padding to reach total size
	if meta.Size > uint64(lastOffset) {
		padding := int(meta.Size) - lastOffset
		fmt.Printf("\tUByte\t\tfPaddingEnd[%d];\t\t// +0x%X\n", padding, lastOffset)
	}

	fmt.Printf("};\n\n")
}
