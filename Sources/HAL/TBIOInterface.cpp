#include "NewtTypes.h"
#include "DelayTimer.h"

/*
	File:		TBIOInterface.cpp

	Contains:	TBIOInterface implementation - Basic Input/Output (Keynes/BIO) chip interface.

	Copyright:	 1992-1997 by Apple Computer, Inc., all rights reserved.
*/

struct KeynesIntObject {
    void *      fData;
    void        (*fHandler)(void *);
    unsigned char fFlags;
    unsigned char fBit;
    unsigned short fUnused;
};

class TBIOInterface {
public:
    void Init();
    unsigned long BIOReadRegister(int reg);
    int BIOWriteCommand(int reg, unsigned long data);
    unsigned long BIOReadCommandData();
    int BIOReadCommand(int reg);
    int WaitBIOStatus(unsigned long mask, unsigned long value, unsigned long timeout);

    int MapFunctionToBit(unsigned char func, unsigned char *bit);
    int MapFunctionToBitMask(unsigned char func, unsigned long *mask);

protected:
    void *          fRExConfig;         // 0  - REx configuration entry
    volatile ULong *fBIOStatusReg;      // 4  - 0xF0048000 - BIO status register
    volatile ULong *fBIOControlReg;     // 8  - 0xF0040000 - BIO control register
    volatile ULong *fBIOIntStatusReg;   // 12 - 0xF0048800 - BIO interrupt status register
    volatile ULong *fBIODataReg;        // 16 - 0xF0048C00 - BIO data register
    volatile ULong *fBIOCmdBase;        // 20 - 0xF0050000 - BIO command base address
    volatile ULong *fBIOIntEnableReg;   // 24 - 0xF004A000 - BIO interrupt enable register
    volatile ULong *fBIOIntClearReg;    // 28 - 0xF004A800 - BIO interrupt clear register
    volatile ULong *fBIOIntMaskReg;     // 32 - 0xF004A400 - BIO interrupt mask register
    volatile ULong *fBIOConfigReg;      // 36 - 0xF004AC00 - BIO configuration register
    volatile ULong *fBIOExtReg;         // 40 - 0xF004B400 - BIO extended register
    
    TDelayTimer     fDelayTimer;        // 44 - Timer for BIO status polling
    
    unsigned long   fInterruptId;       // 68 - Registered interrupt ID
    unsigned long   fIntMask;           // 72 - Active interrupt mask
    unsigned long   fIntPolarity;       // 76 - Interrupt polarity settings
    unsigned long   fIntEnable;         // 80 - Interrupt enable settings
    unsigned long   fIntConfig;         // 84 - Interrupt configuration settings
    
    unsigned long   fDIOPins;           // 56 - Digital I/O pin states
    unsigned long   fDIODir;            // 60 - Digital I/O direction (1=output, 0=input)
    unsigned long   fDIOPullup;         // 64 - Digital I/O pullup enable
    
    KeynesIntObject fIntObjects[10];    // 88 - Array of Keynes interrupt objects (10 interrupt sources)
};

extern "C" void * GetLastRExConfigEntry();
extern "C" void EnterAtomic();
extern "C" void ExitAtomic();

void TBIOInterface::Init() {
    fBIOStatusReg = (volatile ULong *)0xF0048000;
    fBIOControlReg = (volatile ULong *)0xF0040000;
    fBIOIntStatusReg = (volatile ULong *)0xF0048800;
    fBIODataReg = (volatile ULong *)0xF0048C00;
    fBIOCmdBase = (volatile ULong *)0xF0050000;
    fBIOIntEnableReg = (volatile ULong *)0xF004A000;
    fBIOIntClearReg = (volatile ULong *)0xF004A800;
    fBIOIntMaskReg = (volatile ULong *)0xF004A400;
    fBIOConfigReg = (volatile ULong *)0xF004AC00;
    fBIOExtReg = (volatile ULong *)0xF004B400;
    
    // Initialize timer
    fDelayTimer.Init();
    
    // Clear interrupt state
    fInterruptId = 0;
    fIntMask = 0;
    
    // ... Simplified initialization ...
    fRExConfig = GetLastRExConfigEntry();
    
    // Read initial DIO state
    fDIODir = BIOReadRegister(12);
    fDIOPins = BIOReadRegister(14);
    fDIOPullup = BIOReadRegister(13);
}

unsigned long TBIOInterface::BIOReadRegister(int reg) {
    EnterAtomic();
    unsigned long val = 0;
    if (BIOReadCommand(reg)) {
        val = BIOReadCommandData();
    }
    ExitAtomic();
    return val;
}

int TBIOInterface::BIOReadCommand(int reg) {
    volatile ULong *target = (volatile ULong *)((unsigned long)fBIOCmdBase + (reg << 10));
    if (WaitBIOStatus(0x1000, 0, 400)) {
        (void)*target; // Trigger read
        return 1;
    }
    return 0;
}

unsigned long TBIOInterface::BIOReadCommandData() {
    if (WaitBIOStatus(0x80, 0x80, 400)) {
        return *fBIODataReg & 0xFFFF;
    }
    return 0xFEEDFACE;
}

int TBIOInterface::BIOWriteCommand(int reg, unsigned long data) {
    volatile ULong *target = (volatile ULong *)((unsigned long)fBIOCmdBase + (reg << 10));
    EnterAtomic();
    int success = 0;
    if (WaitBIOStatus(0x1000, 0, 400)) {
        *target = data;
        success = 1;
    }
    ExitAtomic();
    return success;
}

int TBIOInterface::WaitBIOStatus(unsigned long mask, unsigned long value, unsigned long timeout) {
    fDelayTimer.ResetTimeOut(timeout);
    while ((*fBIOStatusReg & mask) != value) {
        if (fDelayTimer.TimedOut()) return 0;
    }
    return 1;
}

int TBIOInterface::MapFunctionToBit(unsigned char func, unsigned char *bit) {
    if (func < 32 || func >= 48) return -1;
    // ... configuration lookup ...
    return 0;
}
