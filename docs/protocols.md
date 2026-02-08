# NewtonOS Protocol System

This document describes the internals of the NewtonOS Protocol system, which serves as the primary object-oriented mechanism for cross-component communication and system services.

## 1. Overview

NewtonOS uses "Protocols" instead of standard C++ virtual functions for most of its internal APIs. This system provides several advantages for a ROM-based OS:
*   **Relocatability**: Meta-information is stored using self-relative offsets.
*   **Performance**: Method dispatch is a simple ARM branch instruction.
*   **Transparency**: Objects can exist in the same task or be transparently proxied to a separate monitor task.

## 2. Core Structures

### TProtocol (16 bytes)
The base class for all protocol instances and monitors.

| Offset | Field | Description |
| :--- | :--- | :--- |
| 0 | `fRuntime` | Used for exception handling and runtime cleanup. |
| 4 | `fRealThis` | Pointer to the actual instance (used by auto-forwarding). |
| 8 | `fBTable` | Pointer to the dispatch jump table. |
| 12 | `fMonitorId` | The `TObjectId` of the monitor task (if this is a proxy). |

### TClassInfo (48 bytes)
Meta-information describing a protocol implementation.

| Offset | Field | Description |
| :--- | :--- | :--- |
| 0 | `fReserved1` | Reserved for future use. |
| 4 | `fNameDelta` | Self-Relative Offset (SRO) to implementation name string. |
| 8 | `fInterfaceDelta` | SRO to the public interface name string. |
| 12 | `fSignatureDelta` | SRO to the capability/signature string. |
| 16 | `fBTableDelta` | SRO to the jump table (`fBTable`). |
| 20 | `fEntryProcDelta` | SRO to the monitor entry point (for monitor tasks). |
| 24 | `fSizeofBranch` | ARM Branch instruction to code returning instance size. |
| 28 | `fAllocBranch` | ARM Branch instruction to custom `operator new`. |
| 32 | `fFreeBranch` | ARM Branch instruction to custom `operator delete`. |
| 36 | `fDefaultNew` | ARM Branch instruction to default constructor. |
| 40 | `fDefaultDelete`| ARM Branch instruction to default destructor. |
| 44 | `fVersion` | Implementation version. |

## 3. Dispatch Mechanism: The BTable

The `fBTable` is not a table of function pointers, but a table of **ARM Branch (`B`) instructions**. 

### How a call works:
When a method is called on a protocol, the generated glue code performs the following:
1.  Load the `fBTable` from the object (at offset 8).
2.  Add the method's specific offset to the `pc`.
3.  Execution jumps into the `BTable`, where a branch instruction immediately jumps to the actual implementation.

**Example Assembly (Method 1):**
```arm
ldr r0, [this, #8]   ; Load BTable
add pc, r0, #4       ; Jump to Method 1 (4 bytes in)
```

**Inside the BTable:**
```arm
B  Implementation_Method0  ; Offset 0
B  Implementation_Method1  ; Offset 4
B  Implementation_Method2  ; Offset 8
```

## 4. Monitors and Proxies

A `TProtocol` instance can represent a "Monitor". In this state, `fMonitorId` is non-zero. 

When a call is made to a monitor:
1.  The `BTable` contains branches to "stub" functions.
2.  These stubs package the arguments into a message.
3.  The message is sent to the `fMonitorId` (the server task) using `MonitorDispatchSWI`.
4.  The server task receives the message and executes the real implementation in its own address space.

This allows for transparent RPC (Remote Procedure Call) between different protection domains in NewtonOS.

## 5. Self-Relative Offsets (SRO)

To allow `TClassInfo` structures to be stored in ROM and moved without relocation fixups, all pointers to strings or tables are stored as **deltas**.

To resolve a pointer:
`Pointer = (Address of Delta Field) + DeltaValue`

This is why `TClassInfo` uses fields like `fBTableDelta` instead of absolute pointers.
