# TCommTool Class Hierarchy

## Overview

The Newton OS communications framework is split into two complementary hierarchies:

1. **`TCommToolProtocol`** — the client-facing PROTOCOL glue/proxy class. Lives on the client side and provides a synchronous-looking API by sending messages to the tool task.
2. **`TCommTool`** — the implementation class. Inherits from `TUTaskWorld` and runs in its own OS task, processing incoming requests on 7 distinct channels.

This mirrors the same PROTOCOL/implementation split seen elsewhere in Newton OS (e.g. `TSerialChip` vs `TSerialChipProtocol`).

---

## Protocol Glue: TCommToolProtocol

```
TProtocol
  └── TCommToolProtocol
```

`TCommToolProtocol` (defined in `Includes/Communications/CommToolProtocol.h`) is a Newton **PROTOCOL** class — a vtable-based dispatch mechanism that sends IPC messages to the tool task. Clients call methods on `TCommToolProtocol`; these are marshalled into `TCommToolAEvent`-derived request objects and dispatched to the tool.

Each method on `TCommToolProtocol` corresponds directly to one of the tool's 7 channels.

---

## Implementation: TCommTool

```
TUObject
  └── TUTaskWorld
        └── TCommTool   (620 bytes / 0x26C)
```

`TCommTool` (defined in `Includes/Communications/CommTool.h`) is the abstract base class for all communications tools. It runs in its own Newton OS task and owns the 7-channel message pump. Concrete subclasses override the `<Op>Start()` / `<Op>Complete()` virtual methods to provide actual transport logic.

### Known Concrete Subclasses

| Subclass | Transport |
|---|---|
| `TAsyncSerTool` | Asynchronous serial (base) |
| `TFramedAsyncSerTool` | Framed async serial |
| `TSerTool` | Synchronous serial |
| `TLocalTalkTool` | LocalTalk |
| `TIrDATool` | IrDA infrared |
| `TADSP` / `TADSPEndpoint` | AppleTalk ADSP |
| `TMuxTool` | Multiplexed channels |
| `TClassOneModem` / `TFaxTool` | Class 1 modem / fax |

---

## Message Class Hierarchy

All inter-task messages are rooted at `TAEvent` (asynchronous event base class).

### Request Classes

```
TAEvent
  └── TCommToolAEvent
        ├── TCommToolControlRequest
        │     ├── TCommToolOpenRequest
        │     ├── TCommToolConnectRequest
        │     ├── TCommToolDisconnectRequest
        │     ├── TCommToolBindRequest
        │     ├── TCommToolOptionMgmtRequest
        │     ├── TCommToolGetProtAddrRequest
        │     ├── TCommToolStatusRequest
        │     └── TCommToolResArbRequest
        ├── TCommToolPutRequest
        ├── TCommToolGetRequest
        └── TCommToolKillRequest
```

### Reply Classes

```
TCommToolAEvent
  └── TCommToolReply
        ├── TCommToolPutReply
        ├── TCommToolGetReply
        ├── TCommToolConnectReply
        ├── TCommToolOpenReply
        ├── TCommToolBindReply
        └── TCommToolGetEventReply
```

`TCommToolGetEventReply` is pre-allocated inside `TCommTool` (at offset `+0x1D8`) so the tool can always post an unsolicited event notification without allocating memory at interrupt time.

---

## 7-Channel Architecture

`TCommTool` services requests on 7 independent logical channels. Each channel has a dedicated `TCommToolMsgContainer` slot (the array starts at `+0x94`).

| # | Channel | Request Type | Bitmask |
|---|---------|-------------|---------|
| 0 | **Get** | `TCommToolGetRequest` | `0x01` |
| 1 | **Put** | `TCommToolPutRequest` | `0x02` |
| 2 | **Control** | `TCommToolControlRequest` (and subclasses) | `0x04` |
| 3 | **GetEvent** | *(unsolicited events)* | `0x08` |
| 4 | **Kill** | `TCommToolKillRequest` | `0x10` |
| 5 | **Status** | `TCommToolStatusRequest` | `0x20` |
| 6 | **ResArb** | `TCommToolResArbRequest` | `0x40` |

`fChannelFilter` (at `+0x208`) is a bitmask of which channels are currently enabled. Kill and GetEvent are always active.

---

## Operation Lifecycle (Three-Phase Pattern)

Each channel operation follows a consistent three-phase pattern. Using Connect as the example:

```
Client calls:
  TCommToolProtocol::Connect()
    → marshals TCommToolConnectRequest, posts to tool task

Tool task receives message on Control channel:
  TCommTool::DoControl()
    → TCommTool::Connect()           // phase 1: validate / set up options
        → TCommTool::ConnectOptionsComplete()  // phase 2: options resolved
            → TCommTool::ConnectStart()        // phase 3: start actual I/O

Hardware interrupt / timer fires:
  TCommTool::ConnectComplete()       // finish and reply to client
```

The same `<Op>()` → `<Op>OptionsComplete()` → `<Op>Start()` → `<Op>Complete()` pattern applies to:
- `Open` / `Close`
- `Connect` / `Disconnect`
- `Bind` / `Unbind`
- `Get` / `Put`
- `OptionMgmt`
- `GetProtAddr`
- `Status`
- `ResArb`

Options processing (`TCommToolOptionInfo`) inserts an asynchronous yield point between phase 1 and phase 2, allowing option negotiation with a remote endpoint before I/O begins.

---

## TCommTool Memory Layout

Total object size: **620 bytes (0x26C)**

| Offset | Size | Field | Type | Purpose |
|--------|------|-------|------|---------|
| +0x00 | 4 | *(vtable)* | — | Inherited from `TUObject` |
| +0x24 | 4 | `fField24` | `ULong` | Connection state flags (see below) |
| +0x30 | 0x5C | `fCTConnectInfo` | `TCMOCTConnectInfo` | Embedded connect-info CMO |
| +0x44 | 4 | `fMsgSize` | `ULong` | Size of last received IPC message |
| +0x48 | 0x40 | `fMsgData` | `UByte[0x40]` | Inline IPC receive scratch buffer (no heap alloc needed for normal messages) |
| +0x8C | 4 | `fToolPort` | `TUPort` | Registered IPC port for this tool |
| +0x94 | 0xB4 | `fMsgContainers[7]` | `TCommToolMsgContainer[7]` | One message container per channel |
| +0x148 | 0x30 | `fTransportInfo` | `TCMOTransportInfo` | Embedded transport-info CMO |
| +0x178 | 0x18 | `fOpenOptInfo` | `TCommToolOptionInfo` | Options context for Open/Control channel (also called `fOpenOptionInfo` in Blunt-2) |
| +0x190 | 0x18 | `fGetOptInfo` | `TCommToolOptionInfo` | Options context for Get channel |
| +0x1A8 | 0x30 | `fPutOptInfo` | `TCommToolOptionInfo` | Options context for Put channel (larger) |
| +0x1C8 | 4 | `fGetBufferList` | `CBufferList*` | Current pending Get request buffer pointer |
| +0x1CC | 4 | `fTCommToolInputBufferSize` | `Size` | Threshold for `GetBytesImmediate` |
| +0x1D8 | 0x2C | `fGetEventReply` | `TCommToolGetEventReply` | Pre-allocated unsolicited event reply |
| +0x204 | 4 | `fServiceId` | `ULong` | Tool's registered service ID |
| +0x208 | 4 | `fChannelFilter` | `ULong` | Enabled channels bitmask |
| +0x220 | 0x1C | `fGetBuf` | `CShadowBufferSegment` | Shadow buffer for Get (receive) |
| +0x23C | 0x1C | `fPutBuf` | `CShadowBufferSegment` | Shadow buffer for Put (transmit) |
| +0x258 | 4 | *(heap ptr)* | `void*` | VM heap base pointer |
| +0x25C | 4 | *(heap ptr)* | `void*` | VM heap limit pointer |

### TCommToolMsgContainer (per-channel, 0x1A bytes)

Each channel slot holds:
- The pending `TCommToolAEvent*` request pointer
- Reply buffer / completion info
- Channel-specific state

### TCommToolOptionInfo (options context, 0x18 bytes)

Each option-capable channel (Control, Get, Put) has one of these, tracking:
- Current option list pointer
- Option iteration state
- Async completion callback info

---

## Connection State Machine

`fField24` is a bitfield of connection state flags:

| Bit | Constant | Meaning |
|-----|----------|---------|
| `0x001` | `kToolStateConnecting` | Active outbound connection in progress |
| `0x002` | `kToolStateConnected` | Fully connected |
| `0x004` | `kToolStateWantAbort` | Abort requested, pending cleanup |
| `0x008` | `kToolStateRelease` | Orderly release / half-close in progress |
| `0x010` | `kToolStateClosing` | Tool shutting down |
| `0x020` | `kToolStateDisconnectReq` | Disconnect request pending |
| `0x040` | `kToolStateListenMode` | Passive listen mode (server side) |
| `0x080` | `kToolStateTerminating` | Unrecoverable termination in progress |
| `0x100` | `kToolStateBound` | Bound to a local address |

Typical client-initiated connection sequence:

```
(idle)
  → kToolStateConnecting set    [Connect() called]
  → kToolStateConnected set     [ConnectComplete() succeeds]
  → kToolStateDisconnectReq set [Disconnect() called]
  → kToolStateRelease set       [orderly release negotiated]
  → kToolStateClosing set       [Close() called]
  → (idle)
```

---

## Key Source Files

| File | Description |
|------|-------------|
| `Includes/Communications/CommTool.h` | Official Apple DDK header — authoritative class layout |
| `Includes/Communications/CommToolProtocol.h` | Official PROTOCOL glue definition |
| `intermediate/TCommTool.cpp` | Machine-scaffolded implementation (~157 KB) |
| `intermediate/include/TCommTool.h` | Inferred header with all methods and field offsets |
| `intermediate/include/TCommToolProtocol.h` | Inferred protocol header |
| `intermediate/include/TCommToolPB.h` | Parameter block base types |
| `intermediate/include/TCommToolConnectPB.h` | Connect/Disconnect PB types |
| `intermediate/include/TCommToolGetPB.h` | Get channel PB types |
| `intermediate/include/TCommToolPutPB.h` | Put channel PB types |

---

## Reconstruction Status

`TCommTool` is currently at the **intermediate / scaffolded** stage:

- ✅ Full method list extracted from ROM vtable
- ✅ Field offsets inferred from assembly operand analysis
- ✅ Message class hierarchy identified
- ✅ Official DDK header (`CommTool.h`) cross-referenced and confirmed
- 🔲 Method bodies not yet reconstructed (still assembly scaffolding)
- 🔲 Concrete subclasses (`TAsyncSerTool`, etc.) not yet started

See `docs/progress.md` and `docs/CommAPI_progress.md` for overall project reconstruction status.
