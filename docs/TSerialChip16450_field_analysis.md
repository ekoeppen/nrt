# TSerialChip16450 Field Name Inference

## Analysis Summary

TSerialChip16450 is the simpler PCMCIA-based serial chip implementation, supporting only basic async serial communication (no DMA, no sync modes). The field inference was based on 16450 UART hardware specifications combined with assembly analysis.

## Field Mapping

### Core Pointers (16-48)

**fSerialTool (16)**
- Set to 0 in New()
- Checked in InstallChipHandler(), RemoveChipHandler(), Delete()
- Used as `this` pointer for callback invocations in SerialInterrupt()

**fIntHandlers (20-35)** - SCCChannelInts structure
- **+20 fIntHandlers.TxBEmptyIntHandler**: Called from SerialInterrupt when IIR=0x02
- **+24 fIntHandlers.ExtStsIntHandler**: Called when line status changes
- **+28 fIntHandlers.RxCAvailIntHandler**: Called from SerialInterrupt when IIR=0x04
- **+32 fIntHandlers.RxCSpecialIntHandler**: Called when receive errors occur

**fCardSocket (36)**
- Passed to Init() from TCardHandler
- Used in PowerOff() and PowerOn() for card-specific operations

**fCardHandler (40)**
- Stored in Init()
- Used in Delete() for CardSpecific() calls

**fTimerObject (44)**
- Value: 0x0F181800 (timer object pointer from constant pool)
- Used in WriteSerReg() and ReadSerReg() for timing delays
- Ensures minimum 4 microseconds between register accesses (PC bus timing)

**fBaseRegAddr (48)**
- PCMCIA I/O base address
- Used as base for all register accesses: `[fBaseRegAddr + offset]`

### Configuration & State (52-71)

**fChipType (52)**
- Values: 0xFF=unknown, 1=16450, 2=16550 (with FIFO)
- Detected in Reconfigure() by checking IIR register bits 6-7
- Determines if chip has FIFO capabilities

**fPortID (56)**
- Serial port identifier for registry
- Set in InitByOption() from option structure at +24
- Used in Init() for registry key generation

**fCurrentSpeed (60)**
- Current baud rate in bits per second
- Updated by SetSpeed()

**fSpeedMultiplier (64)**
- Calculated as `4 * baud_rate` in SetSpeed()
- Stored temporarily, reloaded in Reconfigure()

**fClockDivisor (68)**
- Calculated as `4 * baud_rate` in SetSpeed()
- Used in Reconfigure() to restore speed settings

### Hardware Register Shadows (72-79)

These are shadow copies of 16450 UART registers, maintained to avoid unnecessary I/O reads:

**fRxErrorStatus (72)** - LSR bits 1-3
- Bit 1: Overrun Error → maps to kSerialRxOverrun (0x20)
- Bit 2: Parity Error → maps to kSerialRxParityErr (0x10)
- Bit 3: Framing Error → maps to kSerialRxFramingErr (0x40)
- Updated by CheckLineStatusReg(), returned by GetRxErrorStatus()

**fSerialStatus (73)** - MSR bits
- Updated by CheckModemStatusReg()
- Reflects modem control line states (CTS, DSR, RI, DCD)

**fBaudRateLow (74)** - DLL register
- Low byte of baud rate divisor
- Calculation: `divisor = 1843200 / (16 * baud_rate)`
- Written to register 0 when LCR bit 7 = 1 (DLAB mode)

**fBaudRateHigh (75)** - DLM register
- High byte of baud rate divisor (divisor >> 8)
- Written to register 1 when LCR bit 7 = 1 (DLAB mode)

**fLineControlReg (76)** - LCR register
- Bit encoding from SetIOParms():
  - Bits 0-1: Data bits (5/6/7/8 → 0/1/2/3)
  - Bit 2: Stop bits (0/1)
  - Bits 3-5: Parity (none/odd/even → 0/8/24)
- Bit 7 is temporarily set for baud rate programming (DLAB)

**fModemControlReg (77)** - MCR register
- Bit 0: DTR (Data Terminal Ready)
- Bit 1: RTS (Request To Send)
- Modified by SetSerialOutputs() and ClearSerialOutputs()

**fInterruptEnableReg (78)** - IER register
- Bit 0: RX data available interrupt
- Bit 1: TX holding register empty interrupt
- Bit 2: Line status interrupt
- Bit 3: Modem status interrupt
- Value 0x81 enables RX data and modem status interrupts

**fTxBEmptyFlag (79)**
- Count/flag for transmit buffer management
- Set to 0x10 in specific conditions in TxBufEmpty() and SerialInterrupt()
- Checked to determine if transmitter is ready

### State Flags (80-87)

**fPowerOn (80)**
- 0 = powered off, non-zero = powered on
- Set to 0 in New(), checked in PowerOff/PowerOn

**fIsRegistered (81)**
- Set to 0 in New()
- Checked in InstallChipHandler() to verify registration

**fIsInstalled (82)**
- Indicates if chip handler is installed
- Set when InstallChipHandler() succeeds
- Checked in Delete() to determine cleanup path

**fIsCardPresent (83)**
- Set to 0 in New()
- Checked in Delete(), PowerOn(), CardRemoved()
- Indicates if PCMCIA card is physically present

**fInterruptsEnabled (84)**
- Set in ResetState()
- Tracks global interrupt enable state

### Interrupt Management (88)

**fInterruptObj (88)**
- Points to InterruptObject for card socket interrupt
- Used in ProcessOption() to check interrupt configuration

## 16450 UART Hardware Details

### Baud Rate Calculation

The 16450 uses a 1.8432 MHz clock divided by 16 internally:
```
divisor = 1,843,200 / (16 * baud_rate)
       = 115,200 / baud_rate
```

Common divisors:
- 300 bps → divisor = 384 (0x180)
- 9600 bps → divisor = 12 (0x0C)
- 38400 bps → divisor = 3 (0x03)
- 115200 bps → divisor = 1 (0x01)

Maximum supported: 57600 bps (clamped in SetSpeed)

### Register Access Timing

The timer at offset 44 ensures minimum 4 microseconds between accesses:
```c
WriteSerReg(offset, value) {
    // Wait until timer delta >= 4
    while (timer_current - timer_last < 4);
    fBaseRegAddr[offset] = value;
}
```

This is required for ISA bus PCMCIA cards that can't handle back-to-back I/O.

### Interrupt Identification

SerialInterrupt() reads IIR register (offset 1) to determine source:
- **IIR & 0x01 = 0**: Interrupt pending
- **IIR & 0x06**:
  - 0x00: Modem status change → call ExtStsIntHandler
  - 0x02: TX holding register empty → call TxBEmptyIntHandler
  - 0x04: RX data available → call RxCAvailIntHandler
  - 0x06: Line status error → call RxCSpecialIntHandler

### FIFO Detection (16550 compatibility)

In Reconfigure(), after enabling FIFO via FCR:
```c
value = ReadSerReg(1);  // Read IIR
if ((value & 0xC0) == 0xC0) {
    fChipType = 2;  // 16550 with working FIFO
} else {
    fChipType = 1;  // 16450 or broken FIFO
}
```

Bits 6-7 of IIR indicate FIFO status on 16550+.

## Evidence Trail

### Init() Analysis
```asm
1d5d78: ldr r0, [r4, #56]  ; fPortID
1d5d88: ldr r0, [r4, #36]  ; fCardSocket
1d5d40: mov r5, r1          ; TCardSocket parameter
1d5d44: mov r7, r2          ; TCardHandler parameter
1d5d48: mov r6, r3          ; baseRegAddr parameter
```

### SetSpeed() Analysis
```asm
1d56a0: strb r0, [r5, #74]  ; Store divisor low byte
1d56a4: mov r0, r0, lsr #8
1d56a8: strb r0, [r5, #75]  ; Store divisor high byte
1d56b8: mov r0, r0, lsl #2  ; Multiply by 4
1d56bc: str r0, [r5, #68]!  ; Store clock divisor
```

### SetIOParms() Analysis
```asm
; Parse data bits (5/6/7/8)
1d56d0: teq r2, #5
1d56d4: moveq r2, #0
...
1d56ec: moveq r2, #3        ; 8 bits = 3

; Parse parity (none/odd/even)
1d56f8: teq r3, #0
1d5704: moveq r3, #8        ; odd parity
1d5710: moveq r3, #24       ; even parity

; Combine: lineControl = dataBits + parity + stopBits
1d5740: strb r1, [r0, #76]  ; Store to fLineControlReg
```

### SerialInterrupt() Dispatch
```asm
1d5e54: ldr r5, [r4, #32]   ; fIntHandlers.RxCSpecialIntHandler
1d5e70: ldr r5, [r4, #24]   ; fIntHandlers.ExtStsIntHandler
1d5e78: ldr r5, [r4, #28]   ; fIntHandlers.RxCAvailIntHandler
1d5e9c: ldr r5, [r4, #20]   ; fIntHandlers.TxBEmptyIntHandler
1d5ea0: ldr r0, [r4, #16]   ; fSerialTool (as callback parameter)
1d5ea8: mov pc, r5          ; Call handler function
```

## Comparison: TSerialChip16450 vs TSerialChipVoyager

| Feature | TSerialChip16450 | TSerialChipVoyager |
|---------|------------------|-------------------|
| Size | 92 bytes | 176 bytes |
| Hardware | PCMCIA 16450 UART | Built-in Voyager UART |
| Modes | Async only | Async, IR, Sync, LocalTalk |
| DMA | No | Yes (2 engines) |
| Hot-plug | Yes | No |
| Register shadows | 8 bytes (72-79) | 16 bytes (92-107) |
| Timers | 1 (access delay) | 3 (delay, LocalTalk, FIQ) |
| Max baud | 57600 bps | Platform dependent |
| FIFO support | Auto-detect 16550 | N/A (different hardware) |

The 16450 implementation is significantly simpler because it targets commodity PC hardware, while Voyager is a custom integrated chip with advanced features.
