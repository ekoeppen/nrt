# TSerialChipVoyager Field Name Inference

## Analysis Summary

Using the `nrt analyze` tool and manual inspection of assembly code, I've inferred the semantic meaning of the previously unnamed fields in TSerialChipVoyager.

## Field Mapping

### Core Configuration (40-48)
- **fField40 → fChipType**: Values 0-3 representing async/IR/sync/LocalTalk modes
- **fField44 → fClockRate**: Used as divisor in SetSpeed() for baud rate calculation
- **fField48 → fSerialMode**: Mode flags passed to SetSerialMode()

### Port Identity & Flags (56-60)
- **fField56 → fPortID**: Passed to RegisterSerialChip() for identification
- **fField60 → fSerialModeFlags**: Stores the current serial mode flags

### State Flags (84-91)
- **fField84**: General status flags (set to 0 in InstallChipHandler)
- **fField85 → fPowerOn**: Power state (checked in PowerIsOn())
- **fField86 → fIsRegistered**: Set to 1 after successful registry
- **fField87 → fReconfigure**: Set to 1 in SysEventNotify for power-on
- **fField88 → fSerialStatusReg**: Hardware status register cache

### Hardware Register Shadows (92-107)
These are shadow registers matching the Voyager UART hardware layout:

- **fField92 → fLineControl**: Parity and stop bit configuration (bits 0-1)
- **fField93 → fDataBitsReg**: Data bits setting (bits 6-7)
- **fField94 → fParityReg**: Parity mode (bits 6-7)
- **fField95 → fStopBitsReg**: Stop bits mode (bits 6-7)
- **fField96 → fSDLCAddress**: SDLC protocol node address
- **fField97 → fRxControlReg**: Receive control register
- **fField98 → fTxControlReg**: Transmit control register
- **fField99 → fTxDEnable**: TxD transceiver enable bit
- **fField100 → fInterruptEnableReg**: Interrupt enable mask
- **fField103 → fBaudRateLow**: Low byte of baud divisor
- **fField104 → fBaudRateHigh**: High byte of baud divisor
- **fField107 → fSDLCControlReg**: SDLC mode control

### Interrupt & DMA Management (108-144)

#### Engine Objects (112-120)
- **fField112 → fPrimaryIntObj**: Primary interrupt handler object
- **fField116 → fTxDMAEngine**: Transmit DMA engine instance
- **fField120 → fRxDMAEngine**: Receive DMA engine instance

#### DMA Callbacks & Buffers (124-144)
- **fField124 → fTxDMACallback**: Called on transmit DMA completion
- **fField128 → fTxDMABuffer**: TCircleBuf for transmit DMA
- **fField132 → fRxDMACallback**: Called on receive DMA with status parameter
- **fField136 → fRxDMABuffer**: TCircleBuf for receive DMA

#### DMA State (140-144)
- **fField140 → fDMASupported**: Set to 1 if chip supports TX/RX config needed feature
- **fField141 → fTxDMAState**: 0=none, 1=async DMA, 2=sync DMA
- **fField142 → fTxDMAPaused**: Pause state for transmit DMA
- **fField143 → fRxDMAState**: 0=none, 1=async DMA, 2=sync DMA
- **fField144 → fRxDMAThreshold**: Notification level for RX DMA (threshold - 4)

### Timer Objects (148-156)
- **fField148 → fLocalTalkTimer**: Timer for LocalTalk mode operations
- **fField152 → fFIQTimer**: FIQ timer object pointer (from GetFIQTimerObject)
- **fField156 → fIRControl**: THermesIRControl instance for IR mode (chip type 1)

## Evidence

### InitByOption Analysis
The option structure at offset +12, +16, +24, +28 maps to:
```c
struct VoyagerHardwareOption {
    unsigned long tag;              // 0: 'vshw'
    void * baseAddress;             // 12
    long chipType;                  // 16 (0=async, 1=IR, 2=sync, 3=LocalTalk)
    long clockRate;                 // 24
    long serialMode;                // 28
};
```

### SetIOParms Analysis
Extracts fStopBits (offset +20), fParity (+16), fDataBits (+12) from TCMOSerialIOParms and encodes them into bytes 92-95.

### SetSpeed Analysis
Computes `divisor = fClockRate / bitsPerSec` and writes to offsets 103-104 (hardware baud registers at base+0x3100 and base+0x3200).

### DMA Initialization Pattern
```asm
InitTxDMA:
  str r1, [r0, #128]   ; fTxDMABuffer
  str r2, [r0, #124]   ; fTxDMACallback
  ...
  ldr r0, [r4, #120]   ; fRxDMAEngine
```

### Serial Mode Switch
SetSerialMode() checks fChipType (offset 40) and loads different register initialization tables for async (0), IR (1), sync (2), and LocalTalk (3).

## Verification

All inferred names were cross-validated by:
1. Usage patterns in multiple methods
2. Consistency with known Newton OS conventions (f-prefixed field names)
3. Matching hardware register layouts in the Voyager platform
4. Callback signature requirements (1 vs 2 parameters)
5. DMA engine API requirements (BindToBuffer, ConfigureInterrupts, etc.)

## Hardware Register Offsets

The Voyager UART appears to use the following memory-mapped layout from fBaseAddress:
- +0x3000: Control registers (write)
- +0x3100: Clear interrupt bits
- +0x3C00: Interrupt setup
- +0x4000: Status registers (read)
- +0x6000: Data register (read/write)
- +0x2000: Extended control (TxD transceiver)
