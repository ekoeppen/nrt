#include "HAL/TSerialChipVoyager.h"
#include "HAL/SerialChipV2.h"
#include "NewtErrors.h"
#include <string.h>

/*
	File:		TSerialChipVoyager.cpp

	Contains:	TSerialChipVoyager implementation for the Voyager platform.

	Copyright:	 1996 by Apple Computer, Inc., all rights reserved.
*/

extern "C" void* $GetFIQTimerObject(void);
extern "C" void* $GetDMAManagerObject(void);

/**
 * Symbol: TSerialChipVoyager::New(void)
 * Address: 001d8d90
 */
TSerialChipVoyager* TSerialChipVoyager::New(void) {
    // Note: In Newton OS, the memory is already allocated when this is called.
    // The 'this' pointer is passed in r0.
    TSerialChipVoyager* chip = (TSerialChipVoyager*)this; // This is a simplification
    
    chip->fField40 = -1;
    
    // Copy some initial data to fField92
    // 1d8dac: ldr r1, [pc, #58] ; points to 0x1d8e0c
    // 1d8db0: ldmia r1!, {r3, ip}
    // 1d8db4: stmia r0!, {r3, ip}
    // ...
    static const unsigned char kInitialData[16] = {
        0x7c, 0x76, 0x37, 0x00, // From 1d8e0c (reversed or direct?)
        // ...
    };
    memcpy(chip->fField92, kInitialData, 16);
    
    chip->fField108 = 0;
    chip->fField86 = 0;
    
    // Initialize DelayTimer
    // chip->fDelayTimer is at offset 72
    new (&chip->fDelayTimer) TDelayTimer();
    
    chip->fBaseAddress = 0;
    chip->fField85 = 0;
    chip->fField87 = 1;
    chip->fField156 = 0;
    chip->fField116 = 0;
    chip->fDMAEngine = 0;
    chip->fField148 = 0;
    
    chip->fFIQTimer = $GetFIQTimerObject();
    
    chip->InitializeForNextHandler();
    
    return chip;
}

/**
 * Symbol: TSerialChipVoyager::Delete(void)
 * Address: 001d920c
 */
void TSerialChipVoyager::Delete(void) {
    // Destructor logic
    if (fDMAEngine) {
        delete fDMAEngine;
        fDMAEngine = 0;
    }
}

/**
 * Symbol: TSerialChipVoyager::InitializeForNextHandler(void)
 * Address: 001d6a88
 */
void TSerialChipVoyager::InitializeForNextHandler(void) {
    fSerialTool = 0;
    memset(&fIntHandlers, 0, sizeof(fIntHandlers));
    
    fField84 = 0;
    fField140 = 0;
    fField141 = 0;
    fField142 = 0;
    fField143 = 0;
    fField160 = 0;
    fField161 = 0;
    fField162 = 0;
    fField163 = 0;
    
    fField116 = 0;
    fField164 = 0;
    fField168 = 0;
    fField172 = 0;
    fField148 = 0;
}

/**
 * Symbol: TSerialChipVoyager::Init(TCardSocket *, TCardHandler *, unsigned char *)
 * Address: 001d6780
 */
NewtonErr TSerialChipVoyager::Init(TCardSocket * theCardSocket, TCardHandler * theCardHandler, unsigned char * baseRegAddr) {
    // Returns -16024 (0xFFFFC168), which is likely kCommErrNotSupported or similar for this class.
    return -16024;
}

/**
 * Symbol: TSerialChipVoyager::InitByOption(TOption *)
 * Address: 001d678c
 */
NewtonErr TSerialChipVoyager::InitByOption(TOption * option) {
    // Option tag check
    if (*(unsigned long*)option != 0x76736877) { // 'vshw'
        return -16023; // 0xFFFFC169
    }

    struct VoyagerOption {
        unsigned long tag;
        unsigned long unused1[2];
        void * baseAddress;     // +12
        long field16;           // +16
        unsigned long unused2[1];
        long field24;           // +24
        long field28;           // +28
    };
    VoyagerOption * vo = (VoyagerOption *)option;

    fBaseAddress = vo->baseAddress;
    fField40 = vo->field16;
    fField44 = vo->field24;
    fField48 = vo->field28;
    
    fField60 = 0; // Wait, fField60 was accessed?
    
    // ... logic for fField140 and DMA engine ...
    // This part is complex, will refine later.
    
    return 0;
}

/**
 * Symbol: TSerialChipVoyager::InstallChipHandler(void *, SCCChannelInts *)
 * Address: 001d6a14
 */
NewtonErr TSerialChipVoyager::InstallChipHandler(void * serialTool, SCCChannelInts * intHandlers) {
    if (fSerialTool != 0) {
        return -17760; // 0xFFFFBAA0
    }
    
    fSerialTool = serialTool;
    memcpy(&fIntHandlers, intHandlers, sizeof(fIntHandlers));
    
    fField84 = 0;
    SetSerialMode(fField48);
    
    return 0;
}

/**
 * Symbol: TSerialChipVoyager::RemoveChipHandler(void *)
 * Address: 001d6a5c
 */
NewtonErr TSerialChipVoyager::RemoveChipHandler(void * serialTool) {
    if (fSerialTool != serialTool) {
        return -17760;
    }
    
    InitializeForNextHandler();
    return 0;
}

/**
 * Symbol: TSerialChipVoyager::PutByte(unsigned char)
 * Address: 001d6af0
 */
void TSerialChipVoyager::PutByte(unsigned char nextChar) {
    unsigned char status = fField100;
    if (!(status & 0x80)) {
        if (fField60 & 0x08) {
            return;
        }
    }
    
    fField100 |= 0x80;
    unsigned char * base = (unsigned char *)fBaseAddress;
    
    // Control registers at 0x3000
    *(base + 0x3C00) = 0x80;
    *(base + 0x3000) = fField100;
    
    // Data register at 0x6000
    *(base + 0x6000) = nextChar;
}

/**
 * Symbol: TSerialChipVoyager::GetByte(void)
 * Address: 001d6b60
 */
unsigned char TSerialChipVoyager::GetByte(void) {
    unsigned char * base = (unsigned char *)fBaseAddress;
    return *(base + 0x6000);
}

/**
 * Symbol: TSerialChipVoyager::TxBufEmpty(void)
 * Address: 001d6b70
 */
Boolean TSerialChipVoyager::TxBufEmpty(void) {
    unsigned char * base = (unsigned char *)fBaseAddress;
    // Read status from 0x4000?
    unsigned char status = *(base + 0x4000);
    return (status & 0x40) != 0;
}

/**
 * Symbol: TSerialChipVoyager::RxBufFull(void)
 * Address: 001d6b84
 */
Boolean TSerialChipVoyager::RxBufFull(void) {
    unsigned char * base = (unsigned char *)fBaseAddress;
    unsigned char status = *(base + 0x4000);
    return (status & 0x01) != 0;
}

/**
 * Symbol: TSerialChipVoyager::ResetTxBEmpty(void)
 * Address: 001d6b3c
 */
void TSerialChipVoyager::ResetTxBEmpty(void) {
    if (fField100 & 0x80) {
        fField100 &= ~0x80;
        unsigned char * base = (unsigned char *)fBaseAddress;
        *(base + 0x3100) = 0x80;
    }
}

/**
 * Symbol: TSerialChipVoyager::SetSpeed(unsigned long)
 * Address: 001d6fd4
 */
unsigned long TSerialChipVoyager::SetSpeed(unsigned long bitsPerSec) {
    if (bitsPerSec == 0 || fBaseAddress == 0) {
        return 0; // Or some error
    }
    
    // Check for maximum speed if some bits are set
    if (fField132 & 0x03) {
        if (bitsPerSec > 115200) {
            return 0;
        }
    }
    
    unsigned long divisor = fField44 / bitsPerSec;
    if (divisor == 0) return 0;
    
    unsigned char * base = (unsigned char *)fBaseAddress;
    unsigned char * ctrl = base + 0x3000;
    
    ctrl[0x100] = divisor & 0xFF;
    ctrl[0x200] = (divisor >> 8) & 0xFF;
    
    return bitsPerSec;
}

/**
 * Symbol: TSerialChipVoyager::SerialInterrupt(void)
 * Address: 001d8e48
 */
void TSerialChipVoyager::SerialInterrupt(void) {
    unsigned char * base = (unsigned char *)fBaseAddress;
    unsigned char * ctrl = base + 0x3000;
    unsigned char * status_base = base + 0x4000;

    while (true) {
        unsigned char status1 = status_base[0];
        unsigned char status2 = status_base[0x400]; // Offset 0x4400
        unsigned char combined_status = status1 | (status2 & 0xE0);
        
        unsigned char pending = combined_status & fField100;
        if (pending == 0) break;
        
        if (pending & 0x20) { // Receive
            ctrl[0xC00] = 0x20; // Clear int
            if (fField143 == 2) {
                AsyncDMAInInt();
            } else {
                if (status2 & 0x20) {
                    typedef void (*Handler)(void *);
                    ((Handler)fIntHandlers.rxHandler)(fSerialTool);
                }
            }
        }
        else if (pending & 0x40) { // Transmit
            ctrl[0xC00] = 0x40; // Clear int
            if (fField143 == 2) {
                SetIntSourceEnable(0x40, 0);
                typedef void (*Handler)(void *);
                ((Handler)fField132)(fSerialTool); // Wait, offset 132 is a handler?
            } else {
                if (status2 & 0x40) {
                    typedef void (*Handler)(void *);
                    ((Handler)fIntHandlers.txHandler)(fSerialTool);
                }
            }
        }
        else if (pending & 0x80) { // Error/Status
            ctrl[0xC00] = 0x80; // Clear int
            if (status2 & 0x80) {
                typedef void (*Handler)(void *);
                ((Handler)fIntHandlers.statusHandler)(fSerialTool);
            }
        }
        else {
            ctrl[0xC00] = pending;
            // ... other bits ...
        }
    }
}
