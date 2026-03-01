# TRFCOMMTool vs TCommTool — Alignment Analysis

`TRFCOMMTool` (from the Blunt-2 Bluetooth package) is a real, working Newton OS
comm tool that subclasses `TCommTool`.  It is the best available reference for
how a concrete comm tool is supposed to behave, and it cross-validates several
assumptions made in the reverse-engineered `TCommTool` scaffolding.

---

## 1. Inheritance Chain

```
TUObject
  └── TUTaskWorld
        └── TCommTool        (CommToolImpl.h — Blunt-2 local copy / CommTool.h DDK)
              └── TRFCOMMTool   (RFCOMMTool.h)
```

`TRFCOMMTool` inherits directly from `TCommTool` with no intermediate layer.
The Blunt-2 local `CommToolImpl.h` is a hand-written reconstruction of the DDK
`CommTool.h`; comparing the two confirms the field layout and virtual method
table used at runtime.

---

## 2. Object Size

| Class | Declared size | Source |
|-------|--------------|--------|
| `TCommTool` | `0x18 – 0x26B` (≈ 0x254 = 596 bytes) | `CommToolImpl.h` comment |
| `TCommTool` | 0x26C (620 bytes) | `intermediate/include/TCommTool.h` (ROM analysis) |
| `TRFCOMMTool` | `0x0690` comment in header | `RFCOMMTool.h` |

The Blunt-2 reconstruction slightly undershoots the ROM-derived size (596 vs 620
bytes — the 24 bytes are in the trailing `filler_0248[0x14]` region plus the two
heap pointers at `+0x258/+0x25C` that are not yet identified in CommToolImpl.h).
`TRFCOMMTool` itself is 0x690 = 1680 bytes, so the subclass adds roughly 1060
bytes of new fields on top of `TCommTool`.

---

## 3. Memory Layout Cross-Check

The Blunt-2 `CommToolImpl.h` reveals the layout from the subclass author's
perspective.  Comparing against the ROM-derived offsets:

| Offset | ROM name (`TCommTool.h`) | Blunt-2 name (`CommToolImpl.h`) | Match? |
|--------|--------------------------|----------------------------------|--------|
| +0x18 | *(TUTaskWorld end)* | `filler_0030[0x18]` | ✅ |
| +0x30 | `fCTConnectInfo` | `fConnectInfo` (`TCMOCTConnectInfo`) | ✅ |
| +0x44 | *(unknown)* | `fMsgSize` (ULong) | new info |
| +0x48 | *(unknown)* | `fMsgData[0x40]` (inline msg buffer) | new info ✅ |
| +0x8C | `fToolPort` | `*(TObjectId*)((Byte*)this + 0x8c)` (hard-coded in RFCOMMTool.cp) | ✅ confirmed by code |
| +0x94 | `fMsgContainers[7]` | `filler_0094[0xb4]` | ✅ (size matches) |
| +0x148 | `fTransportInfo` | `fTransportInfo` (`TCMOTransportInfo`) | ✅ |
| +0x178 | `fControlOptInfo` | `fOpenOptionInfo` (`TCommToolOptionInfo`) | ⚠️ name differs (see §6) |
| +0x190 | `fGetOptInfo` | `fGetOptionInfo` | ✅ |
| +0x1A8 | `fPutOptInfo` | `fPutOptionInfo` | ✅ |
| +0x1D8 | `fGetEventReply` | `fGetEventReply` (`TCommToolGetEventReply`) | ✅ |
| +0x1C8 | *(unknown)* | `fGetBufferList` (`CBufferList*`) | new info |
| +0x1CC | *(unknown)* | `fTCommToolInputBufferSize` (`Size`) | new info |
| +0x220 | `fGetBuf` | `fBufferSegment_1` (`CShadowBufferSegment`) | ✅ |
| +0x23C | `fPutBuf` | `fBufferSegment_2` | ✅ |

**Key new information from Blunt-2:**
- `+0x44`: `fMsgSize` + `fMsgData[0x40]` — a 68-byte inline message scratch
  buffer used by `HandleRequest` to read incoming IPC payloads without a heap
  allocation.  In `RFCOMMTool.cp`, `fMsgData` is cast directly to
  `BluntEvent*`, confirming it holds the raw received message body.
- `+0x1C8`: `fGetBufferList` — a `CBufferList*` tracking the current pending
  Get request buffer (distinct from `fGetBuf` the shadow segment).
- `+0x1CC`: `fTCommToolInputBufferSize` — threshold used in `GetBytesImmediate`.

---

## 4. Virtual Method Coverage

`TRFCOMMTool` overrides a well-defined subset of `TCommTool` virtuals.  Methods
are grouped by how the override is handled:

### 4a. Full overrides (custom implementation, no super call)

| Method | What TRFCOMMTool does |
|--------|-----------------------|
| `ConnectStart()` | Allocates `fSavedData`, fills `BluntConnectionCommand`, sends to `fServerPort` |
| `BindStart()` | Immediately calls `BindComplete(noErr)` — trivial bind |
| `ListenStart()` | Immediately calls `ListenComplete(noErr)` — stub listen |
| `AcceptStart()` | Immediately calls `AcceptComplete(noErr)` — stub accept |
| `PutBytes()` | Sets `fPutBuffer`, resets `fDataSent`, calls `SendPendingData()` |
| `PutFramedBytes()` | Returns `noErr` — not implemented (RFCOMM is stream) |
| `KillPut()` | Seeks buffer to start, calls `KillPutComplete(noErr)` |
| `GetBytes()` | Drains `fSavedData` into client buffer, then calls `GetComplete` if data available |
| `GetFramedBytes()` | Returns `noErr` — not implemented |
| `KillGet()` | Clears `fSavedDataAmount`, calls `KillGetComplete(noErr)` |
| `GetBytesImmediate()` | Delegates to `GetBytes()` directly |
| `GetComplete()` | Clears `fGetBuffer = NULL`, then calls super |
| `TerminateConnection()` | Sends `BluntDisconnectCommand` to `fServerPort` |
| `ProcessOptionStart()` | Handles `'addr'`, `'pinc'`, `'lnkk'`, `'logl'` labels; falls through to super |

### 4b. Logging wrappers (log + delegate to super)

These overrides exist only to log the call and then call the base:

| Method | Notes |
|--------|-------|
| `HandleRequest()` | Intercepts `BLUNT_MSG_TYPE` messages; delegates all other types to super |
| `HandleReply()` | Log + super |
| `DoControl()` | Log + super |
| `DoStatus()` | Log + super |
| `GetCommEvent()` | Log + super |
| `OptionMgmt()` | Log + super |
| `ProcessOptions()` | Log + super |
| `ProcessGetBytesOptionStart()` | Log + super |
| `ProcessOption()` | Log + super |
| `GetOptionsComplete()` | Dumps option state for debugging, then calls super |
| `TerminateComplete()` | Log + super |

### 4c. Not overridden (relies entirely on TCommTool base)

- `OpenStart()` / `OpenComplete()` / `Close()` / `CloseComplete()`
- `ConnectComplete()` / `DisconnectComplete()`
- `ReleaseStart()` / `ReleaseComplete()`
- `UnbindStart()` / `UnbindComplete()`
- `GetProtAddr()`
- `OptionMgmtComplete()`
- `ProcessOptionsContinue()` / `ProcessOptionsComplete()` / `ProcessOptionsCleanUp()`
- `ProcessCommOptionComplete()` / `ProcessOptionComplete()`
- `ForwardOptions()` / `AddDefaultOptions()` / `AddCurrentOptions()`
- `PrepGetRequest()` / `PrepPutRequest()` / `PutOptionsComplete()`
- `ResArb*`
- `GetNextTermProc()` / `SetChannelFilter()`

---

## 5. The HandleRequest / IPC Pattern

`TRFCOMMTool::HandleRequest` is the most revealing method:

```cpp
NewtonErr TRFCOMMTool::HandleRequest(TUMsgToken& msgToken, ULong msgType)
{
    if (msgType == BLUNT_MSG_TYPE) {
        event = (BluntEvent*) fMsgData;   // ← reads from inline buffer at +0x48
        switch (event->fType) {
            case E_CONNECTION_COMPLETE: ConnectComplete(e->fResult); ...
            case E_DATA:               /* fill fGetBuffer, call GetComplete() */
            case E_DATA_SENT:          /* call PutComplete() or SendPendingData() */
            case E_DISCONNECT_COMPLETE: TerminateComplete();
        }
    } else {
        r = TCommTool::HandleRequest(msgToken, msgType);  // ← handles all Newton channel msgs
    }
}
```

This confirms the architecture:
- `TCommTool::HandleRequest` is the **Newton channel dispatcher** (Get/Put/Control/etc.)
- `TRFCOMMTool` **prepends** its own message type check for Bluetooth events
  arriving from the `BluntServer` task
- The inline `fMsgData[0x40]` buffer at `+0x48` is where received messages land
  before dispatch — no heap allocation needed for normal-sized payloads

The tool port (`+0x8C`) is hard-coded by offset in the constructor and in
`ConnectStart` / `TerminateConnection`:
```cpp
fConnectionCommand.fToolPort = *(TObjectId*)((Byte*)this + 0x8c);
```
This is the field that the ROM-derived header names `fToolPort` — **confirmed**.

---

## 6. Naming Discrepancy: fControlOptInfo vs fOpenOptionInfo

At offset `+0x178`, the ROM analysis calls this field `fControlOptInfo` (options
context for the Control channel).  Blunt-2 calls it `fOpenOptionInfo`.

The Blunt-2 name is more precise: the Apple DDK uses the Control channel for
Open, Connect, Disconnect, Bind, OptionMgmt, GetProtAddr, Status, and ResArb —
but the *first* operation that runs option processing is `OpenStart`, and the
option-info slot at `+0x178` is what `OpenStart`'s options pipeline uses.

**Resolution:** `fOpenOptionInfo` / `fControlOptInfo` refer to the same field.
The ROM-derived name should be updated to `fOpenOptInfo` to match Blunt-2.

Similarly the Blunt-2 `GetOptionsComplete` inspects `fGetOptionInfo` (at
`+0x190`), which matches the ROM field exactly.

---

## 7. The Saved-Data Buffer Pattern

`TRFCOMMTool` introduces a significant flow-control mechanism not visible in
`TCommTool` alone:

```
fSavedData       UByte*   heap buffer (MAX_SAVE = 2096 bytes)
fSavedDataAmount Long     bytes currently buffered
```

When incoming Bluetooth data arrives before `GetBytes()` has been called (no
client buffer registered), or when the client buffer fills before all data is
consumed, the overflow is saved in `fSavedData`.  On the next `GetBytes()` call,
saved data is drained first before blocking for more network data.

This is the comm-tool equivalent of a receive ring buffer, layered on top of
`TCommTool`'s `CShadowBufferSegment` infrastructure.

---

## 8. The BluntServer IPC Bridge

`TRFCOMMTool` sits between two IPC worlds:

```
Newton CommManager
    │  (TCommToolProtocol calls → 7-channel TCommTool message pump)
    ▼
TRFCOMMTool
    │  (BluntCommand structs sent via TUPort::Send to fServerPort)
    ▼
BluntServer (TUTaskWorld)
    │
    ├── HCI layer
    ├── L2CAP layer
    ├── RFCOMM layer
    └── SDP layer
```

The tool registers its own `TUPort` (at `+0x8C`, `fToolPort`) with the name
server so that `BluntServer` can send `BluntEvent` replies back to it.
`BluntServer` finds the tool port from `BluntConnectionCommand.fToolPort`.

Commands sent to `BluntServer`:
| Command class | Trigger |
|---|---|
| `BluntConnectionCommand` | `ConnectStart()` |
| `BluntDisconnectCommand` | `TerminateConnection()` |
| `BluntDataCommand` | `SendPendingData()` |
| `BluntLogCommand` | `Log()` |

Events received from `BluntServer` (via `HandleRequest`):
| Event type | TCommTool response |
|---|---|
| `E_CONNECTION_COMPLETE` | `ConnectComplete()`, `PostCommEvent(DCD asserted)` |
| `E_DATA` | Fill `fGetBuffer`, `GetComplete()` |
| `E_DATA_SENT` | `PutComplete()` or `SendPendingData()` |
| `E_DISCONNECT_COMPLETE` | `TerminateComplete()` |

---

## 9. Option Labels Handled

`ProcessOptionStart` handles four private Blunt options plus falls through to
the base for standard Newton options:

| Label (FourCC) | Option class | Field set |
|---|---|---|
| `'addr'` | `TRFCOMMAddressOption` | `fPeerBdAddr[6]`, `fPeerRFCOMMPort` |
| `'pinc'` | `TRFCOMMPINCodeOption` | `fPINCode[16]` |
| `'lnkk'` | `TRFCOMMLinkKeyOption` | `fLinkKey[16]` |
| `'logl'` | `TRFCOMMLogLevelOption` | `fLogLevel` |
| `kCMOSerialEventEnables` | `TCMOSerialEventEnables` | (logged, not stored — serial compat) |
| *(all others)* | — | `TCommTool::ProcessOptionStart()` |

The `kCMOSerialEventEnables` handling is notable: `TRFCOMMTool` is registered
under the serial service family, so the CommManager sends serial options to it.
The tool logs them but ignores them — RFCOMM has no concept of hardware flow
control or DCD.  It does, however, post a synthetic `kSerialEventDCDAssertedMask`
event via `PostCommEvent` when the connection completes, to satisfy the upper
layer's expectation of a serial connection signal.

---

## 10. VTable Relocation Hack

```cpp
RelocVTable(__VTABLE__11TRFCOMMTool);
```

This call at the end of the constructor is a Blunt-2-specific Newton DDK
workaround: Newton's shared-library vtable pointers are not auto-relocated by
the OS loader for `new`-allocated objects, so `RelocHack` patches the vtable
pointer in place after construction.  This is not part of `TCommTool` itself
but is required for any dynamically-loaded subclass.

---

## 11. What TRFCOMMTool Confirms About TCommTool

| Aspect | Status before | Status after |
|--------|--------------|--------------|
| `fToolPort` at `+0x8C` | Inferred from assembly | ✅ **Confirmed** by hard-coded offset in RFCOMMTool.cp |
| `fMsgData[0x40]` at `+0x48` | Not identified | ✅ **New** — inline IPC receive buffer |
| `fMsgSize` at `+0x44` | Not identified | ✅ **New** — received message size |
| `fGetBufferList` at ~`+0x1C8` | Not identified | ✅ **New** — current Get CBufferList* |
| `fTCommToolInputBufferSize` at ~`+0x1CC` | Not identified | ✅ **New** — GetBytesImmediate threshold |
| `fOpenOptInfo` at `+0x178` | Named `fControlOptInfo` | ⚠️ **Rename recommended** → `fOpenOptInfo` |
| Three-phase lifecycle pattern | Documented | ✅ **Confirmed** by all Start/Complete pairs |
| `PostCommEvent()` pre-allocated reply | Documented | ✅ **Confirmed** by DCD assertion usage |
| `GetComplete()` clears buffer pointer | Not documented | ✅ **New** — `fGetBuffer = NULL` before calling super |

---

## 12. Summary

`TRFCOMMTool` is a textbook-clean `TCommTool` subclass.  It:

1. **Follows the three-phase lifecycle** exactly as documented (`ConnectStart` →
   async Bluetooth operation → `ConnectComplete` called from event handler)
2. **Confirms the field offsets** at `+0x8C`, `+0x148`, `+0x178`, `+0x190`,
   `+0x1A8`, `+0x1D8`, `+0x220`, `+0x23C`
3. **Adds new field knowledge** for `+0x44`–`+0x48` (inline message buffer),
   `+0x1C8`–`+0x1CC` (Get buffer pointer and size threshold)
4. **Demonstrates the `HandleRequest` intercept pattern** — the correct way to
   receive non-Newton IPC while still servicing channel requests
5. **Shows the minimal viable override set**: only `ConnectStart`, `BindStart`,
   `Get/PutBytes`, `KillGet/Put`, `ProcessOptionStart`, `TerminateConnection`,
   and `HandleRequest` are truly required; everything else can delegate to super
