package analysis

import (
	"newton/reconstructor/pkg/asm"
	"regexp"
	"strconv"
)

type RegisterInfo struct {
	Address uint64
	Name    string
	Desc    string
}

var KnownRegisters = map[uint64]RegisterInfo{
	0xF0181800: {0xF0181800, "Timer0Counter", "Free-running timer 0 counter"},
	0xF241000:  {0xF241000,  "BankControlReg", "Memory bank control register"},
	0xF181000:  {0xF181000,  "RTC", "Real Time Clock"},
	0xF0048000: {0xF0048000, "KeynesStatus", "Keynes/Voyager BIO status register"},
	0xF0040000: {0xF0040000, "KeynesRegister1", "Keynes/Voyager BIO register"},
	0xF0048800: {0xF0048800, "KeynesRegister2", "Keynes/Voyager BIO register"},
	0xF0048C00: {0xF0048C00, "KeynesData", "Keynes/Voyager BIO data register"},
	0xF0050000: {0xF0050000, "KeynesCmdBase", "Keynes/Voyager BIO command base address"},
	0xF018C000: {0xF018C000, "GPIO_0", "General Purpose I/O register 0"},
	0xF018C400: {0xF018C400, "GPIO_1", "General Purpose I/O register 1"},
	0xF018C800: {0xF018C800, "GPIO_2", "General Purpose I/O register 2"},
	0xF018CC00: {0xF018CC00, "GPIO_3", "General Purpose I/O register 3"},
	0xF108D000: {0xF108D000, "GPIO_4", "General Purpose I/O register 4"},
	0xF108D400: {0xF108D400, "GPIO_5", "General Purpose I/O register 5"},
	0xF108D800: {0xF108D800, "GPIO_6", "General Purpose I/O register 6"},
}

func FindMMIOConstants(f *asm.Function) []uint64 {
	found := make(map[uint64]bool)
	re := regexp.MustCompile(`0x([0-9a-fA-F]{7,8})`)
	
	for _, inst := range f.Instructions {
		matches := re.FindAllStringSubmatch(inst.Raw, -1)
		for _, match := range matches {
			val, _ := strconv.ParseUint(match[1], 16, 64)
			// Heuristic: MMIO usually starts with 0xF or 0x1 (for some platforms)
			if (val >= 0xF0000000) || (val >= 0x01000000 && val < 0x10000000) {
				found[val] = true
			}
		}
	}
	
	var result []uint64
	for k := range found {
		result = append(result, k)
	}
	return result
}
