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
    void *          fRExConfig;     // 0
    volatile ULong *fField4;        // 4  0xF018C000
    volatile ULong *fField8;        // 8  0xF018C400
    volatile ULong *fField12;       // 12 0xF018C800
    volatile ULong *fField16;       // 16 0xF018CC00
    volatile ULong *fField20;       // 20 0xF108D000
    volatile ULong *fField24;       // 24 0xF108D400
    volatile ULong *fField28;       // 28 0xF108D800
    
    unsigned long   fField32;       // 32
    GPIOIntObject   fIntObjects[13]; // 36
};

extern "C" void * GetLastRExConfigEntry();

void TGPIOInterface::Init() {
    fField4 = (volatile ULong *)0xF018C000;
    fField8 = (volatile ULong *)0xF018C400;
    fField12 = (volatile ULong *)0xF018C800;
    fField16 = (volatile ULong *)0xF018CC00;
    fField20 = (volatile ULong *)0xF108D000;
    fField24 = (volatile ULong *)0xF108D400;
    fField28 = (volatile ULong *)0xF108D800;
    fField32 = 0;
    
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
