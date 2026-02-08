# TSerialChip Protocol Structure

## Overview

`TSerialChip` is a **protocol** (pure interface) in Newton OS, similar to a Java interface or C++ pure virtual class. It defines the contract for hardware abstraction of serial communication chips.

## Protocol Definition

TSerialChip is defined using the Newton OS `PROTOCOL` macro, which means:
- It inherits from `TProtocol` (the base for all protocols)
- All methods are **pure virtual** (must be implemented by concrete classes)
- No instance data is defined in the protocol itself
- Implementations provide the actual data fields

## The Protocol Interface (from SerialChipV2.h)

```cpp
PROTOCOL TSerialChip : public TProtocol
{
public:
    // Factory & lifecycle
    static TSerialChip* New(char*);
    void Delete();

    // Handler management
    NewtonErr InstallChipHandler(void* serialTool, SCCChannelInts* intHandlers);
    NewtonErr RemoveChipHandler(void* serialTool);

    // Byte-level I/O (marked ** = called with interrupts disabled)
    void     PutByte(UByte nextChar);           // **
    void     ResetTxBEmpty();                    // **
    UByte    GetByte();                          // **
    Boolean  TxBufEmpty();                       // **
    Boolean  RxBufFull();                        // **
    RxErrorStatus GetRxErrorStatus();            // **

    // Status & control
    SerialStatus GetSerialStatus();
    void ResetSerialStatus();
    void SetSerialOutputs(SerialOutputControl);  // **
    void ClearSerialOutputs(SerialOutputControl);// **
    SerialOutputControl GetSerialOutputs();

    // Power management
    void PowerOff();
    void PowerOn();
    Boolean PowerIsOn();
    void SetInterruptEnable(Boolean enable);     // **

    // Configuration
    void Reset();                                // **
    void SetBreak(Boolean assert);               // **
    InterfaceSpeed SetSpeed(BitRate bitsPerSec);
    void SetIOParms(TCMOSerialIOParms* opt);
    void Reconfigure();                          // **

    // PCMCIA support
    NewtonErr Init(TCardSocket*, TCardHandler*, UByte* baseRegAddr);
    void CardRemoved(void);

    // Version 2.0 extensions
    SerialFeatures GetFeatures();
    NewtonErr InitByOption(TOption* initOpt);
    NewtonErr ProcessOption(TOption* opt);
    NewtonErr SetSerialMode(SerialMode mode);
    void SysEventNotify(ULong event);
    void SetTxDTransceiverEnable(Boolean enable);// **
    RxErrorStatus GetByteAndStatus(UByte* nextCharPtr); // **
    NewtonErr SetIntSourceEnable(SerialIntSource src, Boolean enable);
    Boolean AllSent();                           // **
    void ConfigureForOutput(Boolean start);

    // DMA support
    NewtonErr InitTxDMA(TCircleBuf* buf, SCCIntHandler txDMAIntHandler);
    NewtonErr InitRxDMA(TCircleBuf* buf, ULong notifyLevel, RxDMAIntHandler intHandler);
    NewtonErr TxDMAControl(DMAControl ctl);
    NewtonErr RxDMAControl(DMAControl ctl);

    // Synchronous/SDLC support
    void SetSDLCAddress(UByte nodeID);           // **
    void ReEnableReceiver(Boolean reset);        // **

    // LocalTalk support
    Boolean LinkIsFree(Boolean resetClks);
    Boolean SendControlPacket(UByte pType, UByte dest, Boolean syncPulse);
    void WaitForPacket(TTimeout delay);

    // Version 3.0
    NewtonErr WaitForAllSent();
};
```

## What TProtocol Provides (Base Class)

Every TSerialChip implementation inherits these fields from TProtocol:

```cpp
// Offset 0-15 (from TProtocol base)
void*       fRuntime;       // 0  - Runtime type info
void*       fRealThis;      // 4  - Actual implementation pointer
void**      fBTable;        // 8  - Virtual method table (VTable)
long        fMonitorId;     // 12 - Monitor/lock ID for thread safety
```

## Concrete Implementations

### 1. TSerialChipVoyager (Built-in Voyager UART)

**Size**: ~176 bytes

**Purpose**: Controls the MessagePad 2000's integrated Voyager UART chip

**Key Features**:
- Supports 4 modes: Async, IR (Hermes), Sync/SDLC, LocalTalk
- Hardware DMA support via TSerialDMAEngine
- 16-byte hardware register shadow (offsets 92-107)
- IR controller integration (THermesIRControl)

**Data Structure** (after TProtocol):
```cpp
Offset 16:  void* fSerialTool              (tool that installed handler)
Offset 20:  SCCChannelInts fIntHandlers    (16 bytes - 4 callback pointers)
Offset 36:  void* fBaseAddress             (MMIO base address)
Offset 40:  long fChipType                 (0=async, 1=IR, 2=sync, 3=LocalTalk)
Offset 44:  long fClockRate                (for baud calculations)
Offset 48:  long fSerialMode               (mode flags)
Offset 72:  TDelayTimer fDelayTimer        (12 bytes)
Offset 84:  8 status bytes                 (power, registration, reconfigure)
Offset 92:  16 hardware register shadows   (line control, baud, parity, etc.)
Offset 108: long fInterruptObject
Offset 112: InterruptObject* fPrimaryIntObj
Offset 116: TSerialDMAEngine* fTxDMAEngine
Offset 120: TSerialDMAEngine* fRxDMAEngine
Offset 124: DMA callbacks and buffers      (20 bytes)
Offset 148: Timer objects                  (12 bytes)
Offset 160: Reserved fields                (16 bytes)
```

### 2. TSerialChip16450 (PCMCIA Serial Cards)

**Size**: ~92 bytes

**Purpose**: Controls industry-standard 16450 UART chips found on PCMCIA modem cards

**Key Features**:
- Simple async-only operation
- No DMA support
- Direct register I/O
- Hot-plug support (card removal detection)

**Data Structure** (after TProtocol):
```cpp
Offset 16:  void* fSerialTool
Offset 20:  SCCChannelInts fIntHandlers (16 bytes)
Offset 36:  TCardSocket* fCardSocket
Offset 40:  TCardHandler* fCardHandler
Offset 44:  long fRegisterSpacing        (for different card layouts)
Offset 48:  UByte* fBaseRegAddr          (PCMCIA I/O base)
Offset 52:  long fFeatures
Offset 56:  long fPortID
Offset 60:  long fCurrentSpeed
Offset 64:  long fField64
Offset 68:  long fField68
Offset 72:  UByte fRxErrorStatus
Offset 73:  UByte fSerialStatus
Offset 74:  UByte fBaudRateLow
Offset 75:  UByte fBaudRateHigh
Offset 76:  UByte fLineControlReg
Offset 77:  UByte fModemControlReg
Offset 78:  UByte fInterruptEnableReg
Offset 79:  UByte fTxBEmptyFlag
Offset 80:  UByte fPowerOn
Offset 81:  UByte fIsRegistered
Offset 82:  UByte fIsInstalled
Offset 83:  UByte fIsCardPresent
Offset 84:  UByte fInterruptsEnabled
Offset 88:  InterruptObject* fInterruptObj
```

## Key Architectural Patterns

### 1. Interrupt Callbacks

The serial tool provides 4 interrupt handlers:
```cpp
struct SCCChannelInts {
    SCCIntHandler TxBEmptyIntHandler;      // Transmit buffer empty
    SCCIntHandler ExtStsIntHandler;        // External status change
    SCCIntHandler RxCAvailIntHandler;      // Receive character available
    SCCIntHandler RxCSpecialIntHandler;    // Special receive condition
};
```

### 2. Feature Flags

Implementations advertise capabilities via `GetFeatures()`:
```cpp
#define kSerFeatureVersion2          (0x00000002)  // V2 API
#define kSerFeatureAsyncRxDMA        (0x00001000)  // RX DMA support
#define kSerFeatureAsyncTxDMA        (0x00002000)  // TX DMA support
#define kSerFeatureSDLCMode          (0x00000200)  // Synchronous
#define kSerFeatureLocalTalk         (0x00000400)  // LocalTalk
```

### 3. Initialization Patterns

**V1 (PCMCIA cards)**:
```cpp
chip->Init(cardSocket, cardHandler, baseRegAddr);
chip->InstallChipHandler(tool, &handlers);
chip->SetSpeed(9600);
chip->SetIOParms(&ioParms);
chip->Reconfigure();
```

**V2 (Built-in chips)**:
```cpp
chip->InitByOption(hardwareOption);  // Platform-specific
chip->SetSerialMode(kSerModeAsync);
chip->InstallChipHandler(tool, &handlers);
```

## Usage Constraints

1. **Interrupt Context**: Methods marked `**` must be called with interrupts disabled
2. **Memory Locking**: Implementations must be locked in memory (interrupt access)
3. **Hot Removal**: PCMCIA implementations must handle async CardRemoved() calls
4. **Thread Safety**: Access coordinated via TProtocol's fMonitorId

## Comparison to Modern APIs

| Newton TSerialChip | Modern Equivalent |
|-------------------|-------------------|
| PROTOCOL keyword | Pure virtual C++ class / Java interface |
| InstallChipHandler | Interrupt handler registration (Linux request_irq) |
| TCircleBuf + DMA | DMA buffer descriptors (scatter-gather lists) |
| GetFeatures() | Device capability flags (ioctl TCGETS) |
| SetSerialMode() | Mode switching (termios cfmakeraw, cfsetspeed) |
| CardRemoved() | Hot-plug notification (USB device_del) |

## Design Philosophy

The TSerialChip protocol demonstrates Newton OS's commitment to:
- **Hardware abstraction**: Same API for built-in and PCMCIA chips
- **Feature discovery**: Runtime capability negotiation
- **Performance**: Direct hardware access for interrupt routines
- **Extensibility**: V1 → V2 → V3 API evolution without breaking compatibility
- **Safety**: Explicit constraints on calling contexts (interrupt-safe methods marked)
