# TPlatformDriver Reconstruction

## Overview

**TPlatformDriver** is an abstract PROTOCOL (not a class) that defines the interface for platform-specific hardware drivers in NewtonOS. Concrete implementations like `TVoyagerPlatform` provide the actual hardware control.

## Status: ✅ COMPLETE

- **Complexity**: ⭐ (1/5) - Pure abstract interface
- **Time Taken**: 15 minutes
- **Confidence**: 99% - All methods are simple virtual dispatchers

## Architecture

### Protocol vs Class

TPlatformDriver uses the NewtonOS **protocol system**, not standard C++ inheritance:

- Protocols provide dynamic dispatch and late binding
- The `TProtocol` base class contains:
  - `fRealThis` - pointer to actual instance
  - `fBTable` - pointer to virtual dispatch table (VTable)
  - `fMonitorId` - for monitor-based protocols

### Virtual Dispatch Pattern

Every virtual method follows this ARM assembly pattern:

```assembly
ldr    r0, [r0, #4]      ; Load fRealThis from TProtocol
ldr    ip, [r0, #8]      ; Load fBTable pointer
add    pc, ip, #OFFSET   ; Jump to VTable[slot]
```

**VTable Layout (offsets from fBTable):**

| Offset | Method |
|--------|--------|
| +8 | Init() |
| +12 | Delete() |
| +16 | BacklightTrigger() |
| +24 | RegisterPowerSwitchInterrupt() |
| +28 | EnableSysPowerInterrupt() |
| +32 | InterruptHandler() |
| +36 | TimerInterruptHandler() |
| +40 | ResetZAPStoreCheck() |
| +44 | PowerOnSubsystem() |
| +48 | PowerOffSubsystem() |
| +52 | PowerOffAllSubsystems() |
| +56 | PauseSystem() |
| +60 | PowerOffSystem() |
| +64 | PowerOnSystem() |
| +68 | TranslatePowerEvent() |
| +72 | GetPCMCIAPowerSpec() |
| +76 | PowerOnDeviceCheck() |
| +80 | SetSubsystemPower() |
| +84 | GetSubsystemPower() |

## Method Categories

### Lifecycle
- `New(const char*)` - Factory to create instances by name
- `Delete()` - Cleanup and deallocate
- `Init()` - Initialize hardware

### Power Management (System Level)
- `PowerOnSystem()` - Full system power-up sequence
- `PowerOffSystem()` - Full system power-down
- `PauseSystem()` - Enter low-power mode

### Power Management (Subsystem Level)
- `PowerOnSubsystem(subsystem)` - Power on specific subsystem
- `PowerOffSubsystem(subsystem)` - Power off specific subsystem
- `PowerOffAllSubsystems()` - Emergency power-down all
- `SetSubsystemPower(subsystem, state)` - Set power state
- `GetSubsystemPower(subsystem, *state)` - Query power state

### Interrupt Handling
- `RegisterPowerSwitchInterrupt()` - Setup power button handler
- `EnableSysPowerInterrupt()` - Enable system power interrupts
- `InterruptHandler()` - Handle power switch events
- `TimerInterruptHandler()` - Handle delayed power events

### Device Management
- `PowerOnDeviceCheck(device)` - Check if device powered on correctly
- `GetPCMCIAPowerSpec(slot, *spec)` - Get PCMCIA power requirements
- `TranslatePowerEvent(event)` - Convert hardware event to OS event

### Miscellaneous
- `BacklightTrigger()` - Trigger backlight on/off
- `ResetZAPStoreCheck()` - Check Zero-Always-Present store integrity

## Usage Example

```cpp
// Create platform driver (chooses implementation based on hardware)
TPlatformDriver* platform = TPlatformDriver::New("TVoyagerPlatform");

// Initialize hardware
platform->Init();

// Setup power button handling
platform->RegisterPowerSwitchInterrupt();
platform->EnableSysPowerInterrupt();

// Power on serial subsystem
platform->PowerOnSubsystem(kSerialSubsystem);

// Query subsystem state
unsigned long state;
platform->GetSubsystemPower(kSerialSubsystem, &state);

// Cleanup
platform->Delete();
FreeInstance(platform);
```

## Concrete Implementations

### TVoyagerPlatform (MessagePad 2000)
- **File**: `TVoyagerPlatform.cpp` (66 KB, 1449 lines)
- **Complexity**: ⭐⭐⭐⭐ (4/5)
- **Dependencies**: TGPIOInterface, TBIOInterface, TIRQTimer
- **Status**: Deferred until dependencies complete

### Other Platforms
- **TJuniorPlatform** (eMate 300) - Not yet found in ROM
- **TNoveauPlatform** (MessagePad 2100) - Variant of Voyager

## Key Findings

1. **No Implementation Logic**: TPlatformDriver contains zero hardware code
2. **Pure Dispatch**: All methods are 3-5 instruction VTable jumps
3. **Protocol-Based**: Uses NewtonOS protocol system, not C++ classes
4. **Factory Pattern**: `New()` uses name-based dynamic instantiation

## Dependencies

**Required Headers:**
- `OS600/Protocols.h` - TProtocol base class and protocol macros

**No Runtime Dependencies** - TPlatformDriver is purely abstract

## Testing Notes

Since TPlatformDriver is abstract:
- Cannot instantiate directly
- Must test via concrete implementations (TVoyagerPlatform)
- All logic is in subclasses

## Future Work

1. Reconstruct **TVoyagerPlatform** (main implementation)
2. Document subsystem power map tables
3. Identify all subsystem ID constants
4. Map power state machine transitions

## References

- **Assembly Source**: `MP2x00US.s` @ 0x00387df8 - 0x00387f28
- **Protocol System**: `Includes/OS600/Protocols.h`
- **VTable Analysis**: All 20 methods follow identical dispatch pattern
