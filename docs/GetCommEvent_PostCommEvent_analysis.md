# GetCommEvent / PostCommEvent Reverse Engineering Notes

## Key Findings from nrt + assembly analysis

### MsgContainer layout (corrected)

Stride = **24 bytes (0x18)**, not 0x1A as previously assumed.
- Total array: 7 × 24 = 168 bytes (0xA8), starting at +0x94
- Array end: 0x94 + 0xA8 = 0x13C

Per-container layout (from CompleteRequest + TaskMain):

| Sub-offset | Size | Field | Notes |
|---|---|---|---|
| +0x00 | 1 | `fPending` | Set to 1 in TaskMain when request arrives; cleared to 0 in CompleteRequest |
| +0x04 | 4 | `fRequestType` (stored) | ldr r1,[r4,#72] stored at [r0,#152] = base+0x98 |
| +0x08 | 16 | `fMsgToken` (TUMsgToken) | 4-word copy from receive buffer at sub-offset +0x9c = base+0x9C–0xAB |

So for channel N:
- `fPending` byte = this + 0x94 + N*24 + 0 = this + 0x94 + N*0x18
- `fMsgToken` = this + 0x94 + N*24 + 0x08

Confirming for channel 3 (GetEvent):
- `fPending` = this + 0x94 + 3*24 = this + 0x94 + 0x48 = this + **0xDC** ✓ (matches ldrb [r0, #220])

For TConnectionEnd channel 3 (stride also 24, base at different offset):
- `fPending` at +0x8C (140) → base = 0x8C - 3*0 ... actually base = +0x44, stride 24:
  - 0x44 + 3*24 = 0x44 + 0x48 = **0x8C** ✓ (matches ldrb [r0, #140])

---

### TCommTool::GetCommEvent (0x6F29C) — FULLY DECODED

```cpp
UByte* TCommTool::GetCommEvent()
{
    // fField480 is the GetCommEvent "in-progress" sentinel.
    // Value kGetCommEventPending = 0x170 - 0x4000 = -0x3E90 = (ULong)0xFFFFC170
    // When a GetCommEvent call is outstanding, fField480 == kGetCommEventPending.
    // Any other value means no outstanding request — return immediately.
    
    static const ULong kGetCommEventPending = 0xFFFFC170;  // = 0x170 - 0x4000
    
    if (*(ULong*)((Byte*)this + 0x1E0) != kGetCommEventPending)
        return nullptr;   // no outstanding GetCommEvent request — bail
    
    // Call vtable slot 0x3c / 4 = slot 15 = PostCommEvent (virtual dispatch)
    // with: r1 = &fGetEventReply (+0x1D8), r2 = 0 (result = noErr)
    PostCommEvent(fGetEventReply, noErr);
    
    // Mark as "delivered" — store sentinel back
    // (str r5,[r4,#480]! — same sentinel value, so this writes kGetCommEventPending back)
    // Actually: this resets to sentinel, meaning the slot is now CONSUMED.
    // Wait — r5 = kGetCommEventPending, and it writes it BACK. 
    // That means fField480 retains kGetCommEventPending after delivery.
    // The flag is only cleared when a new GetCommEvent arrives or is killed.
    *(ULong*)((Byte*)this + 0x1E0) = kGetCommEventPending;
    
    return (UByte*)&fGetEventReply;
}
```

**Key insight:** `GetCommEvent` is called by the upper layer (TConnectionEnd/PCECallBack) 
to *trigger* posting of a queued event. It:
1. Guards against being called with no outstanding request
2. Calls `PostCommEvent` with the pre-allocated `fGetEventReply`  
3. The sentinel at +0x1E0 (480) acts as "is there an event queued?"

**fField480 = +0x1E0** — this is NOT inside fGetEventReply (+0x1D8, size 0x28).
fGetEventReply ends at 0x1D8 + 0x28 = 0x200. So +0x1E0 is INSIDE fGetEventReply.

Let's check TCommToolGetEventReply layout:
- It's 0x28 = 40 bytes (from DoKillGetCommEvent: sub sp, sp, #36 = 0x24 for stack local... 
  actually 36 bytes)
- fGetEventReply at +0x1D8, so fields:
  - +0x1D8+0x00 = vtable
  - +0x1D8+0x08 = fEventCode?
  - +0x1D8+0x08 = 0x1E0... so offset 8 within the reply struct

**fField480 is actually offset +8 within fGetEventReply = the event code / state field.**

The sentinel value `0xFFFFC170` = `-16016` stored there means "pending/empty."
The subclass sets `fGetEventReply.fEventCode = 1`, `fGetEventReply.fEventData = DCD_MASK`
before calling `PostCommEvent`. GetCommEvent checks if that field has been set 
(≠ sentinel) to decide whether there's an event ready to post.

---

### TCommTool::PostCommEvent (0x6F328) — FULLY DECODED

```cpp
NewtonErr TCommTool::PostCommEvent(TCommToolGetEventReply& theEvent, NewtonErr result)
{
    // Check the GetEvent channel pending flag:
    // fMsgContainers[3].fPending = *(Byte*)(this + 0xDC)
    if (*(Byte*)((Byte*)this + 0xDC) == 0)
        return kCommErrNoGetCommEvent;   // = 0x71 - 0x3F00 = -16015 = 0xFFFFC171
    
    // A GetCommEvent request IS pending on channel 3.
    // Complete it: result is passed as r3=r1 (the 'result' param), channel=3
    CompleteRequest(kGetCommEventChannel /*3*/, result, theEvent);
    return noErr;
}
```

**kCommErrNoGetCommEvent = -16015 (0xFFFFC171)**

The flag at +0xDC is `fMsgContainers[3].fPending` — set to 1 in `TaskMain` when 
a GetCommEvent IPC request arrives, cleared to 0 in `CompleteRequest` after delivery.

---

### TCommTool::DoKillGetCommEvent (0x6F2E0) — FULLY DECODED

```cpp
void TCommTool::DoKillGetCommEvent()
{
    // Construct a default (empty) GetEventReply on the stack
    TCommToolGetEventReply reply;   // stack-allocated, 36 bytes
    
    // Complete the pending GetEvent request with a special "killed" error
    // The literal at 6f324 = 0xFFFFC17B = -16005
    CompleteRequest(kGetCommEventChannel /*3*/, 
                    (NewtonErr)0xFFFFC17B /*kCommErrKilled?*/, 
                    reply);
    
    // Then complete the Kill request itself (channel 3 bitmask = 0x08)
    KillRequestComplete(kGetEventRequestType /*0x08*/, noErr);
}
```

---

### TaskMain — Request Registration (0x6E984–0x6E9C4)

```cpp
// In TaskMain, when a message arrives with requestType r5:
channelNum = RequestTypeToChannelNumber(requestType);  // r7

// Compute container base:
// r0 = channelNum + channelNum*2 = channelNum*3
// r0 = this + r0*8 = this + channelNum*24  (stride = 24!)
UByte* container = (UByte*)this + channelNum * 24;

// Store the received message token (from fField48/fField4c area):
container[0x98 - 0x94] = fField48;   // str r1,[r0,#152] — sub-offset 0x04 from +0x94 base

// Copy 4 words of MsgToken data into container[0x9c - 0x94]:
// stmia r1={sp+0xc..sp+0x18} -> container[8..24]
memcpy(container + 0x08, &receivedMsgToken, 16);

// SET the pending flag:
container[0x00] = 1;   // strb r1=1, [r0, #148] where r0=this+channelNum*24

// Then dispatch via vtable[0x124] = SetChannelFilter? or the channel handler
```

Wait — the strb is `[r0, #148]` where r0 = this + channelNum*24 (not this + 0x94 + channelNum*24).
So: pending flag offset = this + channelNum*24 + 148 = this + channelNum*24 + 0x94.

For channel 3: this + 3*24 + 0x94 = this + 72 + 148 = this + 220 = this + 0xDC ✓

**Confirmed: MsgContainer array base = +0x94, stride = 24, pending byte at sub-offset 0.**

---

### fField480 / fGetEventReply Internal Layout

From GetCommEvent: reads `[r0, #480]` = this+0x1E0.
fGetEventReply is at this+0x1D8 (472). So 0x1E0 - 0x1D8 = 0x08 = sub-offset 8 within reply.

TCommToolGetEventReply inherits from TCommToolReply which inherits from TAEvent.
TAEvent/TProtocolEvent base likely has vtable(+0)+type(+4)+... 
At sub-offset +8 within the reply struct is likely `fResult` or `fEventCode`.

The sentinel `0xFFFFC170` stored there = "no event pending."
When TRFCOMMTool does:
```cpp
event.fEventCode = 1;
event.fEventData = kSerialEventDCDAssertedMask;
```
...it sets the inline event's fields, then calls PostCommEvent.
But PostCommEvent only checks `fMsgContainers[3].fPending` (+0xDC), NOT fGetEventReply.

**The pre-allocated fGetEventReply (+0x1D8) and fField480 (+0x1E0) are used by GetCommEvent,
not by PostCommEvent. PostCommEvent takes ANY TCommToolGetEventReply& by reference.**

**GetCommEvent is called from the tool's vtable[0x3c] dispatch — it is the mechanism
by which the UPPER LAYER (TConnectionEnd) triggers event delivery by calling down
into the tool task.** This is separate from the bottom-up PostCommEvent path.

---

### The Two GetEvent Paths

1. **Tool-initiated (PostCommEvent):** Tool calls `PostCommEvent(someReply, result)`.
   Checks if channel 3 has a pending request, if so calls `CompleteRequest(3, ...)` immediately.
   Used by TRFCOMMTool when Bluetooth data or connection events arrive.

2. **Client-initiated (GetCommEvent):** Client calls `TConnectionEnd::GetCommEvent()` 
   which calls down via vtable[0x3c] = `TCommTool::GetCommEvent()`.
   That checks if `fGetEventReply` has been populated (sentinel ≠ kEmpty),
   then calls `PostCommEvent(&fGetEventReply, noErr)`.
   Used when the tool has queued an event in `fGetEventReply` but no channel-3
   request was pending at the time of queueing.

**This means the correct pattern for TRFCOMMTool is:**
- If `PostCommEvent` returns `kCommErrNoGetCommEvent`, the event should be stored 
  in `fGetEventReply` and the sentinel cleared so `GetCommEvent` will deliver it later.
- TRFCOMMTool does neither — it discards the event entirely.

---

## Tool Enhancement Needed

The `nrt` tool currently:
- Cannot resolve `strb` writes to field offsets (analysis.go only tracks `ldr`/`str`)
- Cannot decode ARM immediate constants (e.g. `0x71 - 0x3f00`)
- `vmap` cannot walk vtable data segments

### Proposed: `nrt decode` command

A simple command that takes a class name + method name and:
1. Decodes all ARM immediate arithmetic into human-readable constants
2. Identifies literal pool values  
3. Resolves vtable slot numbers at call sites

### Also needed: fix `query --accessors-of` to track `ldrb`/`strb`

Currently `analysis.go` only tracks `ldr`/`str`. Adding `ldrb`/`strb` would have
found the `strb r1, [r0, #148]` setter in TaskMain directly.

---

## Files to Create/Update

- `Sources/CommAPI/TCommTool_GetCommEvent.cpp` — reconstructed source
- `intermediate/include/TCommTool.h` — update fField480 name, MsgContainer stride
- `tools/reconstructor/pkg/analysis/analysis.go` — add strb/ldrb tracking
- `tools/reconstructor/pkg/commands/decode.go` — new decode command
