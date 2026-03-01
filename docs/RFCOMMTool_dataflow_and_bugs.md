# RFCOMMTool Data Flow & Potential Bugs

## Overview

This document traces how received Bluetooth data travels from the hardware up to
NewtonScript, identifies the fragile points in that path, and lists the
`TCommTool`-related code that should be reverse engineered next.

---

## Full Stack: Data Path from Hardware to NewtonScript

```
Bluetooth hardware
    │
BluntServer task (TUTaskWorld)
    │  BluntDataEvent posted via TUPort::Send to fToolPort (+0x8C)
    │
TRFCOMMTool::HandleRequest()          ← intercepts BLUNT_MSG_TYPE
    │  reads from fMsgData[0x40] inline buffer (+0x48)
    │  E_DATA              → fills fGetBuffer, calls GetComplete()
    │  E_DATA_SENT         → calls PutComplete() or SendPendingData()
    │  E_CONNECTION_COMPLETE → calls ConnectComplete(), PostCommEvent(DCD)
    │  E_DISCONNECT_COMPLETE → calls TerminateComplete()
    │
TCommTool::GetComplete() / PutComplete()
    │  calls ProcessOptionsCleanUp() on fGetOptInfo (+0x190) / fPutOptInfo (+0x1A8)
    │  calls CompleteRequest(channel, result, TCommToolGetReply/PutReply)
    │
TCommTool::CompleteRequest()
    │  looks up TUMsgToken in fMsgContainers[channel] (+0x94)
    │  calls TUMsgToken::ReplyRPC()    ← IPC reply to the waiting TEndpoint
    │
TConnectionEnd (client side, in app task)
    │  GetComplete() / PutComplete()
    │  CompleteRequest() → signals waiting TEndpoint
    │
TEndpoint::nRcv() / nSnd() unblocks
    │
TScriptEndpointClient / TNewScriptEndpointClient
    │  RcvComplete() / SndComplete()
    │  PostInput() → queues Newton async event
    │
NewtonScript  ← inputSpec / cbReceive / cbDisconnect callbacks
```

---

## Potential Bugs

### 🔴 Bug 1 — `PostCommEvent` silently drops events (highest severity)

**Location:** `TRFCOMMTool::HandleRequest` → `E_CONNECTION_COMPLETE` handler

```cpp
ConnectComplete(e->fResult);
TCommToolGetEventReply event;
event.fEventCode = 1;
event.fEventData = kSerialEventDCDAssertedMask;
event.fServiceId = 'rfcm';
PostCommEvent(event, noErr);    // ← return value ignored
```

`TCommTool::PostCommEvent` (ROM `0x6f328`) checks a flag byte at `+0x220`:

```asm
ldrb  r3, [r0, #220]    ; fField220 — "GetEvent pending" flag
teq   r3, #0
beq   → return kCommErrNoGetCommEvent   ; silent drop if no request queued
mov   r1, #3            ; channel 3 = GetEvent
bl    CompleteRequest(channel, result, reply)
```

**The flag at `+0x220` is only set when the client has an outstanding
`GetCommEvent` request pending on channel 3.** If `PostCommEvent` is called
when no such request is pending — e.g. `ConnectComplete` fires before the
client has queued its `GetEvent` call, or two events fire back-to-back — the
event is **silently discarded** with error `-0x3F8F`
(`kCommErrNoGetCommEvent`).

`TRFCOMMTool` ignores the return value, so the DCD-asserted notification that
signals an active connection to the upper layers can be **lost with no
indication**.

Note: `TRFCOMMTool` allocates a stack-local `TCommToolGetEventReply` rather
than using the pre-allocated `fGetEventReply` at `+0x1D8`. The pre-allocated
slot exists precisely to allow `PostCommEvent` to be called safely at any time.
Whether using the pre-allocated slot changes the delivery semantics depends on
the gating flag — but it is still worth using for correctness.

---

### 🟡 Bug 2 — `fSavedData` overflow (no bounds check)

**Location:** `TRFCOMMTool::HandleRequest` → `E_DATA` handler

```cpp
// when fGetBuffer is NULL (no pending GetBytes call):
memcpy(fSavedData + fSavedDataAmount, e->fData + n, e->fLength - n);
fSavedDataAmount += (e->fLength - n);   // ← no bounds check
```

`fSavedData` is allocated as `new UByte[MAX_SAVE]` (2096 bytes) in
`ConnectStart`. There is **no check** that
`fSavedDataAmount + incoming_length <= MAX_SAVE`. A burst of incoming data
exceeding 2096 bytes before the client calls `GetBytes` will silently overflow
`fSavedData` into adjacent heap memory.

---

### 🟡 Bug 3 — `CTPostCommEvent` state check bypassed

**Location:** `TCommToolProtocol::CTPostCommEvent` (ROM `0x6d014`)

The protocol-layer version of `PostCommEvent` performs an extra state check
before calling through:

```asm
ldr  r3, [r3, #624]     ; field at +0x270 on TCommTool — connection state
cmp  r3, #2
bge  → TCommTool::PostCommEvent   ; fast path if state >= 2
; else: copies reply struct into local buffer, patches fServiceId from fField516
bl   TCommTool::PostCommEvent
```

`TRFCOMMTool` calls `PostCommEvent` directly on `this` (bypassing
`TCommToolProtocol`), skipping both the state check and the `fServiceId`
patching from `fField516` (`+0x204`). Whether `fServiceId` is correctly
initialised at the moment `HandleRequest` fires is not guaranteed by the
Blunt-2 source.

---

## What to Reverse Engineer Next

In priority order:

| # | Target | Why |
|---|--------|-----|
| **1** | `TCommTool::PostCommEvent` + `TCommTool::GetCommEvent` | The gating flag at `+0x220` is the core of the drop bug. Need to understand when it is set/cleared and what the error return means to callers upstream |
| **2** | `TConnectionEnd::GetCommEvent` + `TConnectionEnd::PostCommEvent` | Client-side mirror of the above. `TConnectionEnd` checks `+0x8C` (vs `+0x220` in `TCommTool`) — comparing the two confirms the full GetEvent request/reply lifecycle |
| **3** | `TCommTool::CompleteRequest(CommToolChannelNumber, ...)` | The per-channel `fField148` pending flag, `SetChannelFilter`, and `KillRequestComplete` interaction determine whether the GetEvent channel can get permanently stuck after a dropped event |
| **4** | `TScriptEndpointClient` / `TNewScriptEndpointClient` — `RcvComplete`, `PostInput`, `CheckForInput` | The NS-layer side: how `GetComplete` becomes a NewtonScript callback. `TNewScriptEndpointClient::fField1390` is far outside the normal struct layout — suspicious |
| **5** | `PCECallBackWrapper` — full method reconstruction | Glue between `TConnectionEnd` (tool side) and `TEndpoint` (app side). All `Complete*` methods are PROTOCOL vtable thunks into `TConnectionEnd`. Reconstructing this closes the IPC reply path |
| **6** | `TCommTool::GetComplete` vs `TConnectionEnd::GetComplete` | Both call `ProcessOptionsCleanUp` but against different `TCommToolOptionInfo` slots (`+0x190` vs `+0x140`). Confirming they are structurally equivalent closes the data-delivery path analysis |

---

## Key Source Files

| File | Role |
|------|------|
| `Blunt-2/RFCOMMTool.cp` | Concrete tool implementation — the bugs live here |
| `Blunt-2/EventsCommands.h` | `BluntEvent` / `BluntCommand` IPC message types |
| `Blunt-2/BluntClient.cp` | NS↔C++ bridge; `AEHandlerProc` → `NSSendIfDefined` callbacks |
| `Blunt-2/Main.cp` | Newton C native function entry points (`MStart`, `MReset`, etc.) |
| `intermediate/TCommTool.cpp` | ROM scaffolding for `GetCommEvent`, `PostCommEvent`, `CompleteRequest` |
| `intermediate/TConnectionEnd.cpp` | Client-side `GetComplete`, `PostCommEvent`, `GetOptionsComplete` |
| `intermediate/PCECallBack.cpp` | PROTOCOL thunk layer into `TConnectionEnd` |
| `intermediate/PCECallBackWrapper.cpp` | Second thunk layer; jumps to `TConnectionEnd::$*` |
| `intermediate/include/TNewScriptEndpointClient.h` | NS endpoint client — `PostInput`, `RcvComplete` |
| `Includes/CommAPI/Endpoint.h` | DDK `TEndpoint` — the client-facing API |
