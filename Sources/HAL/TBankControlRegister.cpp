#include "NewtTypes.h"
#include "RegisterRdWr.h"

/*
	File:		TBankControlRegister.cpp

	Contains:	TBankControlRegister implementation.

	Copyright:	 1992-1993, 1996 by Apple Computer, Inc., all rights reserved.
*/

// For now, define the register address locally or use a global.
#define kBankControlReg 0xF241000

class TBankControlRegister {
public:
    static unsigned long SetBankControlRegister(unsigned long value, unsigned long mask);
    long ConfigureFlashBankDataSize(int lane);
};

/**
 * Symbol: TBankControlRegister::SetBankControlRegister(unsigned long, unsigned long)
 * Address: 0003b324
 */
unsigned long TBankControlRegister::SetBankControlRegister(unsigned long value, unsigned long mask) {
    volatile unsigned long *reg = (volatile unsigned long *)kBankControlReg;
    unsigned long current = *reg;
    unsigned long newVal = (current & ~mask) | (value & mask);
    *reg = newVal;
    return *reg;
}

/**
 * Symbol: TBankControlRegister::ConfigureFlashBankDataSize(eMemoryLane)
 * Address: 0003b298
 */
long TBankControlRegister::ConfigureFlashBankDataSize(int lane) {
    unsigned long value;
    unsigned long mask = 0x700; // From mov r2, #1792 (0x700) at 3b2ec

    switch (lane) {
        case -1:
            value = 0;
            break;
        case 0xFF000000:
            value = 0x400;
            break;
        case 0xFFFF0000: // cmn r1, #65536
            value = 0x200;
            break;
        case 0xFF00:
            value = 0x500;
            break;
        case 0xFFFF: // sub ip, r1, #65280; teq ip, #255
            value = 0x300;
            break;
        default:
            return 0x293B; // From mov r0, #59; add r0, r0, #10496 at 3b2fc
    }

    SetBankControlRegister(value, mask);
    return 0;
}
