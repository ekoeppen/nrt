# TSerialChip Class Hierarchy

## Visual Structure

```
┌─────────────────────────────────────────────────────────────────┐
│                         TProtocol                                │
│  (Base class for all protocols in Newton OS)                    │
│                                                                   │
│  +0:  void*   fRuntime      - Runtime type information          │
│  +4:  void*   fRealThis     - Pointer to concrete implementation│
│  +8:  void**  fBTable       - Virtual method table pointer      │
│  +12: long    fMonitorId    - Thread synchronization lock ID    │
└─────────────────────────────────────────────────────────────────┘
                              △
                              │ inherits
                              │
┌─────────────────────────────────────────────────────────────────┐
│              PROTOCOL TSerialChip : public TProtocol             │
│  (Pure interface - no data fields, only method signatures)      │
│                                                                   │
│  • 50+ pure virtual methods defining serial chip interface      │
│  • Version 1.0: Basic async serial (16 methods)                 │
│  • Version 2.0: Adds DMA, sync, IR, LocalTalk (34 methods)      │
│  • Version 3.0: Adds WaitForAllSent (1 method)                  │
└─────────────────────────────────────────────────────────────────┘
                              △
                              │ implements
                ┌─────────────┴─────────────┐
                │                           │
┌───────────────────────────┐   ┌───────────────────────────┐
│  TSerialChipVoyager       │   │  TSerialChip16450         │
│  (Built-in Voyager UART)  │   │  (PCMCIA 16450 UARTs)     │
│                           │   │                           │
│  Size: ~176 bytes         │   │  Size: ~92 bytes          │
│                           │   │                           │
│  Features:                │   │  Features:                │
│  • 4 modes (Async/IR/     │   │  • Async only             │
│    Sync/LocalTalk)        │   │  • No DMA                 │
│  • Hardware DMA engines   │   │  • Hot-plug support       │
│  • IR controller          │   │  • Simple register I/O    │
│  • Timer integration      │   │                           │
└───────────────────────────┘   └───────────────────────────┘
```

## Memory Layout Comparison

### TSerialChipVoyager (176 bytes)

```
┌─────────────────────────────────────────────────────────────┐
│ Offset │ Size │ Field Name              │ Description       │
├────────┼──────┼─────────────────────────┼───────────────────┤
│   0-15 │  16  │ TProtocol base          │ From base class   │
├────────┼──────┼─────────────────────────┼───────────────────┤
│     16 │   4  │ fSerialTool             │ Client tool ptr   │
│     20 │  16  │ fIntHandlers            │ 4 callbacks       │
│     36 │   4  │ fBaseAddress            │ HW MMIO base      │
│     40 │   4  │ fChipType               │ 0-3 (mode select) │
│     44 │   4  │ fClockRate              │ Baud calculation  │
│     48 │   4  │ fSerialMode             │ Mode flags        │
│  52-71 │  20  │ (reserved/temporary)    │                   │
├────────┼──────┼─────────────────────────┼───────────────────┤
│     72 │  12  │ fDelayTimer             │ TDelayTimer obj   │
│  84-91 │   8  │ Status flags            │ Power, state      │
│ 92-107 │  16  │ HW register shadows     │ UART config       │
├────────┼──────┼─────────────────────────┼───────────────────┤
│    108 │   4  │ fInterruptObject        │ Int controller    │
│    112 │   4  │ fPrimaryIntObj          │ Primary handler   │
│    116 │   4  │ fTxDMAEngine            │ TX DMA engine     │
│    120 │   4  │ fRxDMAEngine            │ RX DMA engine     │
│ 124-147│  24  │ DMA callbacks/buffers   │ 2×(callback+buf)  │
├────────┼──────┼─────────────────────────┼───────────────────┤
│    148 │   4  │ fLocalTalkTimer         │ LT polling timer  │
│    152 │   4  │ fFIQTimer               │ Fast int timer    │
│    156 │   4  │ fIRControl              │ Hermes IR ctrl    │
│ 160-175│  16  │ (reserved)              │ Future expansion  │
└────────┴──────┴─────────────────────────┴───────────────────┘
```

### TSerialChip16450 (92 bytes)

```
┌─────────────────────────────────────────────────────────────┐
│ Offset │ Size │ Field Name              │ Description       │
├────────┼──────┼─────────────────────────┼───────────────────┤
│   0-15 │  16  │ TProtocol base          │ From base class   │
├────────┼──────┼─────────────────────────┼───────────────────┤
│     16 │   4  │ fSerialTool             │ Client tool ptr   │
│     20 │  16  │ fIntHandlers            │ 4 callbacks       │
│     36 │   4  │ fCardSocket             │ PCMCIA socket     │
│     40 │   4  │ fCardHandler            │ Card handler      │
│     44 │   4  │ fRegisterSpacing        │ I/O layout        │
│     48 │   4  │ fBaseRegAddr            │ PCMCIA I/O base   │
│     52 │   4  │ fFeatures               │ Capability bits   │
│     56 │   4  │ fPortID                 │ Registry ID       │
│     60 │   4  │ fCurrentSpeed           │ Baud rate         │
│  64-71 │   8  │ (state fields)          │ Speed, config     │
├────────┼──────┼─────────────────────────┼───────────────────┤
│     72 │   1  │ fRxErrorStatus          │ Error bits        │
│     73 │   1  │ fSerialStatus           │ Status bits       │
│     74 │   1  │ fBaudRateLow            │ Divisor low       │
│     75 │   1  │ fBaudRateHigh           │ Divisor high      │
│     76 │   1  │ fLineControlReg         │ LCR shadow        │
│     77 │   1  │ fModemControlReg        │ MCR shadow        │
│     78 │   1  │ fInterruptEnableReg     │ IER shadow        │
│     79 │   1  │ fTxBEmptyFlag           │ TX ready flag     │
│     80 │   1  │ fPowerOn                │ Power state       │
│     81 │   1  │ fIsRegistered           │ Registry state    │
│     82 │   1  │ fIsInstalled            │ Handler state     │
│     83 │   1  │ fIsCardPresent          │ Hot-plug state    │
│     84 │   1  │ fInterruptsEnabled      │ Int enable        │
│  85-87 │   3  │ (padding)               │ Alignment         │
├────────┼──────┼─────────────────────────┼───────────────────┤
│     88 │   4  │ fInterruptObj           │ Interrupt hdlr    │
└────────┴──────┴─────────────────────────┴───────────────────┘
```

## Method Dispatch Mechanism

Newton OS uses a **VTable** (virtual method table) for protocol dispatch:

```
┌──────────────────┐
│  Instance        │
│  (TSerialChip*)  │
├──────────────────┤
│ +0: fRuntime   ──┼──→ [Type Info: "TSerialChipVoyager"]
│ +4: fRealThis  ──┼──→ [Actual object if wrapped]
│ +8: fBTable    ──┼──┐
│ +12: fMonitorId  │  │
│ ...              │  │
└──────────────────┘  │
                      │
                      ▼
            ┌─────────────────────┐
            │  VTable              │
            ├─────────────────────┤
            │ [0]: New()          │
            │ [1]: Delete()       │
            │ [2]: Install...()   │
            │ [3]: Remove...()    │
            │ [4]: PutByte()      │
            │ [5]: ResetTxB...()  │
            │ ...                 │
            │ [50]: WaitForAll... │
            └─────────────────────┘
                      │
                      ▼
            [Actual implementation code]
```

## Example: How a Method Call Works

When code calls `chip->PutByte(0x42)`:

1. **Caller** has a `TSerialChip*` pointer
2. **Lookup** VTable at `chip->fBTable`
3. **Index** to slot #4 (PutByte is 4th method)
4. **Invoke** function pointer with `chip->fRealThis` as `this`
5. **Execute** TSerialChipVoyager::PutByte() or TSerialChip16450::PutByte()

This is exactly how C++ virtual functions work, but Newton OS makes it explicit!

## Feature Discovery Pattern

```cpp
// Client code discovers capabilities at runtime:
TSerialChip* chip = GetSerialChip();
SerialFeatures features = chip->GetFeatures();

if (features & kSerFeatureAsyncTxDMA) {
    // Use DMA for transmit
    chip->InitTxDMA(txBuffer, txCallback);
    chip->TxDMAControl(kDMAStart);
} else {
    // Fall back to byte-by-byte
    while (hasData) {
        if (chip->TxBufEmpty()) {
            chip->PutByte(nextByte());
        }
    }
}

if (features & kSerFeatureLocalTalk) {
    // Switch to LocalTalk mode
    chip->SetSerialMode(kSerModeLocalTalk);
    if (chip->LinkIsFree(true)) {
        chip->SendControlPacket(type, dest, true);
    }
}
```

## Design Advantages

1. **Polymorphism**: Same interface for built-in and PCMCIA chips
2. **Extensibility**: New implementations just implement the protocol
3. **Capability negotiation**: Runtime feature discovery
4. **Hot-plug**: CardRemoved() handles dynamic removal
5. **Performance**: No overhead beyond virtual dispatch
6. **Type safety**: Protocol ensures all methods are implemented

## Comparison to Other Systems

| Newton TSerialChip | Linux Serial | Windows Serial | POSIX termios |
|-------------------|--------------|----------------|---------------|
| Protocol interface | struct tty_driver | DRIVER_OBJECT | int fd + ioctl |
| Virtual dispatch | VTable | Function pointers | System call table |
| Feature discovery | GetFeatures() | TTY_DRIVER_* flags | tcgetattr() |
| Interrupt callbacks | SCCChannelInts | tty_flip_buffer_push | Signal handlers |
| DMA support | InitTxDMA/InitRxDMA | DMA subsystem | N/A (kernel only) |
| Mode switching | SetSerialMode() | tty_set_operations | cfmake* functions |
