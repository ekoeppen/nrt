#include "NewtTypes.h"

/*
	File:		TGPIOInterface.cpp

	Contains:	TGPIOInterface implementation.

	Copyright:	 1992-1997 by Apple Computer, Inc., all rights reserved.
*/

struct GPIOIntObject {
    void *      fData;
    void        (*fHandler)(void *);
    unsigned char fFlags;
    unsigned char fBit;
    unsigned short fUnused;
};

class TGPIOInterface {
public:
    void Init();
    int RegisterInterrupt(unsigned char func, void *data, void (*handler)(void *), unsigned long flags);
    int MapFunctionToBit(unsigned char func, unsigned char *bit);
    int MapFunctionToBitMask(unsigned char func, unsigned long *mask);

protected:
    void *          fRExConfig;         // 0  - REx configuration entry
    volatile ULong *fGPIOIntStatus;     // 4  - 0xF018C000 - GPIO interrupt status register
    volatile ULong *fGPIOIntEnable;     // 8  - 0xF018C400 - GPIO interrupt enable register
    volatile ULong *fGPIOIntClear;      // 12 - 0xF018C800 - GPIO interrupt clear register
    volatile ULong *fGPIOPolarity;      // 16 - 0xF018CC00 - GPIO polarity control register
    volatile ULong *fGPIOIntConfig;     // 20 - 0xF108D000 - GPIO interrupt configuration register
    volatile ULong *fGPIODataIn;        // 24 - 0xF108D400 - GPIO data input register
    volatile ULong *fGPIOIntMask;       // 28 - 0xF108D800 - GPIO interrupt mask register
    
    unsigned long   fInterruptId;       // 32 - Registered interrupt ID
    GPIOIntObject   fIntObjects[13];    // 36 - Array of GPIO interrupt objects (13 GPIO pins)
};

extern "C" void * GetLastRExConfigEntry();

void TGPIOInterface::Init() {
    fGPIOIntStatus = (volatile ULong *)0xF018C000;
    fGPIOIntEnable = (volatile ULong *)0xF018C400;
    fGPIOIntClear = (volatile ULong *)0xF018C800;
    fGPIOPolarity = (volatile ULong *)0xF018CC00;
    fGPIOIntConfig = (volatile ULong *)0xF108D000;
    fGPIODataIn = (volatile ULong *)0xF108D400;
    fGPIOIntMask = (volatile ULong *)0xF108D800;
    fInterruptId = 0;
    
    fRExConfig = GetLastRExConfigEntry();
    
    // Initialize interrupt objects
    for (int i = 0; i < 13; ++i) {
        fIntObjects[i].fData = 0;
        fIntObjects[i].fHandler = 0;
        fIntObjects[i].fFlags = 0;
        fIntObjects[i].fBit = i;
        // ...
    }
}

int TGPIOInterface::MapFunctionToBit(unsigned char func, unsigned char *bit) {
    if (func >= 16) return -1;
    // ... lookup in fRExConfig ...
    return 0;
}

int TGPIOInterface::RegisterInterrupt(unsigned char func, void *data, void (*handler)(void *), unsigned long flags) {
    unsigned char bit;
    if (MapFunctionToBit(func, &bit) != 0) return -1;
    
    GPIOIntObject &obj = fIntObjects[bit];
    obj.fData = data;
    obj.fHandler = handler;
    // ... set flags and enable hardware interrupt ...
    return 0;
}
