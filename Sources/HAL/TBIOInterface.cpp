#include "NewtTypes.h"
#include "DelayTimer.h"

/*
	File:		TBIOInterface.cpp

	Contains:	TBIOInterface implementation.

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
    void *          fRExConfig;     // 0
    volatile ULong *fStatusReg;     // 4  0xF0048000
    volatile ULong *fField8;        // 8  0xF0040000
    volatile ULong *fField12;       // 12 0xF0048800
    volatile ULong *fDataReg;       // 16 0xF0048C00
    volatile ULong *fCmdBase;       // 20 0xF0050000
    // ... other register pointers ...
    TDelayTimer     fDelayTimer;    // 44
    
    unsigned long   fDIOPins;       // 56
    unsigned long   fDIODir;        // 60
    unsigned long   fDIOPullup;     // 64
    
    KeynesIntObject fIntObjects[10]; // 88? 
};

extern "C" void * GetLastRExConfigEntry();
extern "C" void EnterAtomic();
extern "C" void ExitAtomic();

void TBIOInterface::Init() {
    fStatusReg = (volatile ULong *)0xF0048000;
    fField8 = (volatile ULong *)0xF0040000;
    fField12 = (volatile ULong *)0xF0048800;
    fDataReg = (volatile ULong *)0xF0048C00;
    fCmdBase = (volatile ULong *)0xF0050000;
    
    // ... Simplified initialization ...
    fRExConfig = GetLastRExConfigEntry();
    
    // Read initial state
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
    volatile ULong *target = (volatile ULong *)((unsigned long)fCmdBase + (reg << 10));
    if (WaitBIOStatus(0x1000, 0, 400)) {
        (void)*target; // Trigger read
        return 1;
    }
    return 0;
}

unsigned long TBIOInterface::BIOReadCommandData() {
    if (WaitBIOStatus(0x80, 0x80, 400)) {
        return *fDataReg & 0xFFFF;
    }
    return 0xFEEDFACE;
}

int TBIOInterface::BIOWriteCommand(int reg, unsigned long data) {
    volatile ULong *target = (volatile ULong *)((unsigned long)fCmdBase + (reg << 10));
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
    while ((*fStatusReg & mask) != value) {
        if (fDelayTimer.TimedOut()) return 0;
    }
    return 1;
}

int TBIOInterface::MapFunctionToBit(unsigned char func, unsigned char *bit) {
    if (func < 32 || func >= 48) return -1;
    // ... configuration lookup ...
    return 0;
}
