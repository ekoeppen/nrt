package commands

import (
	"fmt"
	"log"
	"regexp"
	"strconv"
	"strings"

	"newton/reconstructor/pkg/asm"
	"github.com/spf13/cobra"
)

var (
	vcallClassName  string
	vcallOffsetStr  string
	vcallVTableAddr string
)

var vcallCmd = &cobra.Command{
	Use:   "vcall",
	Short: "Resolve virtual calls to method names",
	Run: func(cmd *cobra.Command, args []string) {
		runVCall()
	},
}

func init() {
	vcallCmd.Flags().StringVar(&vcallClassName, "class", "", "Class name to analyze")
	vcallCmd.Flags().StringVar(&vcallOffsetStr, "offset", "", "Offset in decimal or hex (e.g. 56 or 0x38)")
	vcallCmd.Flags().StringVar(&vcallVTableAddr, "vtable-addr", "", "Manual VTable address override (hex)")
	vcallCmd.MarkFlagRequired("class")
	vcallCmd.MarkFlagRequired("offset")
	rootCmd.AddCommand(vcallCmd)
}

func runVCall() {
	offset, err := parseOffset(vcallOffsetStr)
	if err != nil {
		log.Fatalf("Invalid offset: %v", err)
	}

	log.Printf("Loading assembly from %s...", asmPath)
	symbols, _, err := asm.ParseFile(asmPath)
	if err != nil {
		log.Fatalf("Load error: %v", err)
	}

	var vtableAddr uint64
	if vcallVTableAddr != "" {
		v, err := strconv.ParseUint(strings.TrimPrefix(vcallVTableAddr, "0x"), 16, 64)
		if err != nil {
			log.Fatalf("Invalid vtable-addr: %v", err)
		}
		vtableAddr = v
	} else {
		// 1. Find the constructor to get the VTable address
		vtableAddr = findVTableAddr(symbols, vcallClassName)
		if vtableAddr == 0 {
			log.Fatalf("Could not find VTable address for class %s. Use --vtable-addr for manual override.", vcallClassName)
		}
	}

	fmt.Printf("Class:          %s\n", vcallClassName)
	fmt.Printf("VTable Address: 0x%x\n", vtableAddr)

	// 2. Resolve the slot
	slot := offset / 4
	target := resolveSlot(symbols, vtableAddr, slot)
	if target == "" {
		fmt.Printf("Slot %d (Offset #%d): Could not resolve\n", slot, offset)
	} else {
		fmt.Printf("Slot %d (Offset #%d): %s\n", slot, offset, target)
	}
}

func parseOffset(s string) (int, error) {
	if strings.HasPrefix(s, "0x") {
		v, err := strconv.ParseUint(s[2:], 16, 32)
		return int(v), err
	}
	v, err := strconv.Atoi(s)
	return v, err
}

func findVTableAddr(symbols []*asm.Function, className string) uint64 {
	constructorName := fmt.Sprintf("%s::__ct(void)", className)
	var constructor *asm.Function
	for i := range symbols {
		if symbols[i].Name == constructorName {
			constructor = symbols[i]
			break
		}
	}

	if constructor == nil {
		return 0
	}

	// Look for str rX, [r0] where rX was loaded from a constant pool
	for i, inst := range constructor.Instructions {
		if inst.Mnemonic == "str" && strings.Contains(inst.Args, "[r0]") {
			// Found the VTable store. Now look back for the load.
			reg := strings.Split(inst.Args, ",")[0]
			for j := i - 1; j >= 0; j-- {
				prev := constructor.Instructions[j]
				if prev.Mnemonic == "ldr" && strings.HasPrefix(prev.Args, reg) {
					// Found the load. Extract address from comment.
					re := regexp.MustCompile(`([0-9a-f]+) <`)
					match := re.FindStringSubmatch(prev.Comment)
					if len(match) > 1 {
						addr, _ := strconv.ParseUint(match[1], 16, 64)
						return addr
					}
				}
			}
		}
	}
	return 0
}

func resolveSlot(symbols []*asm.Function, vtableAddr uint64, slot int) string {
	targetAddr := vtableAddr + uint64(slot*4)

	// Find the symbol at this address
	for _, sym := range symbols {
		if sym.AddressInt == targetAddr {
			// VTable slots are usually branch instructions: b <target>
			if len(sym.Instructions) > 0 {
				inst := sym.Instructions[0]
				if inst.Mnemonic == "b" {
					re := regexp.MustCompile(`<([^>]+)>`)
					match := re.FindStringSubmatch(inst.Raw)
					if len(match) > 1 {
						return match[1]
					}
				}
			}
		}
	}
	return ""
}
