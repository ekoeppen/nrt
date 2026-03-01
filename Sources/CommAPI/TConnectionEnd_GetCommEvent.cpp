/*
 * TConnectionEnd_GetCommEvent.cpp
 *
 * Reconstructed from Newton MP2x00 ROM (MP2x00US.s)
 * SDK headers:  Includes/Communications/CommTool.h
 *               Includes/OS600/UserPorts.h
 *               Includes/UtilityClasses/AEvents.h
 *
 * ─── Three tightly-related methods on TConnectionEnd ──────────────────────────
 *
 *   GetCommEvent()             — vtable-dispatched poll: deliver buffered event
 *   PostCommEvent()            — deliver an event reply to a pending request
 *   KillGetCommEventComplete() — complete a KillGetEvent IPC round-trip
 *
 * ─── Memory layout (confirmed from ROM assembly) ──────────────────────────────
 *
 *  TCommToolMsgContainer  (SDK struct, 24 bytes):
 *    +0x00  fRequestPending  (Boolean/UChar) — set=1 on request arrival,
 *                                              cleared=0 in CompleteRequest
 *    +0x01  [3 bytes padding]
 *    +0x04  fRequestMsgSize  (ULong)
 *    +0x08  fMsgToken        (TUMsgToken, 16 bytes = 4 × TObjectId)
 *    total: 24 bytes (0x18) ✓
 *
 *  TCommToolGetEventReply  (SDK struct, 36 bytes, inherits TCommToolReply):
 *    +0x00  fAEventClass  = 'comt' (0x636F6D74, set in TCommToolAEvent.__ct)
 *    +0x04  fAEventID
 *    +0x08  fResult       (NewtonErr) ← STATE SENTINEL FIELD
 *    +0x0C  fSize         = 36
 *    +0x10  fEventCode    (ULong)
 *    +0x14  fEventTime    (TTime, 8 bytes)
 *    +0x1C  fEventData    (ULong)
 *    +0x20  fServiceId    (ULong)
 *    total: 0x24 = 36 bytes ✓
 *
 *  TConnectionEnd field layout (relevant fields):
 *    +0x44  fMsgContainers[0]  — TCommToolMsgContainer[7], stride 24
 *    +0x8C  fMsgContainers[3].fRequestPending   (channel 3 = kCommToolGetEventChannel)
 *    +0x188 fGetEventReply     — inline TCommToolGetEventReply (36 bytes)
 *    +0x190 fGetEventReply.fResult  (sub-offset +0x08 within reply)
 *           kGetCommEventPending (-16016) = no event queued / buffer free
 *           any other value              = event waiting to be drained
 *
 *  Formula used in CompleteRequest to find fRequestPending for channel N:
 *    r6 = this + N*24
 *    ldrb [r6, #0x44]   →  *(this + 0x44 + N*24 + 0)  = fMsgContainers[N].fRequestPending
 *
 * ─── ROM addresses ───────────────────────────────────────────────────────────
 *   TConnectionEnd::GetCommEvent             0x00071C00
 *   TConnectionEnd::KillGetCommEventComplete 0x00071C3C
 *   TConnectionEnd::PostCommEvent            0x00071CE0
 */

#include "CommTool.h"
#include "TConnectionEnd.h"


// ─────────────────────────────────────────────────────────────────────────────
//  Error constants
// ─────────────────────────────────────────────────────────────────────────────

// Sentinel stored in fGetEventReply.fResult when no event is buffered.
// Chosen so it cannot collide with any real NewtonErr.
//   = 0x170 - 0x4000  =  -16016  =  0xFFFFC170
static const NewtonErr kGetCommEventPending = (NewtonErr)-16016;

// Returned by PostCommEvent when no GetEvent request is currently pending.
//   = 0x71 - 0x3F00  =  -16015  =  0xFFFFC171
static const NewtonErr kCommErrNoGetCommEvent = (NewtonErr)-16015;

// Delivered as the result when a GetEvent request is killed mid-flight.
//   = 0xFFFFC17B  =  -16005
static const NewtonErr kCommErrKilledGetCommEvent = (NewtonErr)-16005;

// CommToolRequestType bitmask for the GetEvent channel (channel 3 = bit 3).
static const CommToolRequestType kGetEventRequestType =
    (CommToolRequestType)(1 << kCommToolGetEventChannel);  // = 8


// ─────────────────────────────────────────────────────────────────────────────
//  TConnectionEnd::GetCommEvent
//  ROM: 0x00071C00
// ─────────────────────────────────────────────────────────────────────────────
//
// Called via vtable dispatch (slot 15, add pc,rN,#0x3C) when the upper layer
// (TEndpoint / TScriptEndpointClient) wants to receive a pending comm event.
//
// This is the "re-delivery" path.  When TRFCOMMTool (or any comm tool) calls
// PostCommEvent() but no GetEvent request is outstanding at that moment, the
// event should be buffered in fGetEventReply so it can be delivered here later.
// (In practice TRFCOMMTool does NOT buffer the event — see Bug #1 in
//  RFCOMMTool_dataflow_and_bugs.md.)
//
// Logic:
//   1. Read fGetEventReply.fResult (+0x190).
//   2. If it equals kGetCommEventPending the buffer is empty — return early.
//   3. Otherwise call PostCommEvent(&fGetEventReply, noErr) to drain the buffer.
//   4. Reset fGetEventReply.fResult back to kGetCommEventPending.
//
// Decoded ARM (0x71C00):
//   ldr  r0, [r0, #400]        ; fGetEventReply.fResult  (+0x190)
//   mov  r5, #368              ; build kGetCommEventPending in r5:
//   sub  r5, r5, #16384        ;   0x170 - 0x4000 = -16016
//   teq  r0, r5
//   ldmnedb  fp, {..}          ; return if not equal (buffer empty)
//   add  r1, r4, #392          ; r1 = &fGetEventReply  (+0x188)
//   mov  r0, r4                ; r0 = this
//   mov  r2, #0                ; result = noErr
//   bl   $PostCommEvent
//   str  r5, [r4, #400]!       ; fGetEventReply.fResult = kGetCommEventPending

void TConnectionEnd::GetCommEvent()
{
    NewtonErr state = fGetEventReply.fResult;   // +0x190

    const NewtonErr sentinel = kGetCommEventPending;

    if (state == sentinel)
        return;     // buffer is empty — nothing to deliver

    // Deliver the buffered event.
    PostCommEvent(fGetEventReply, noErr);        // &fGetEventReply = this+0x188

    // Mark the buffer slot as free.
    fGetEventReply.fResult = sentinel;
}


// ─────────────────────────────────────────────────────────────────────────────
//  TConnectionEnd::PostCommEvent
//  ROM: 0x00071CE0
// ─────────────────────────────────────────────────────────────────────────────
//
// Delivers theEvent through the GetEvent IPC channel (kCommToolGetEventChannel=3)
// to any outstanding GetEvent request on the client side.
//
// Logic:
//   1. Read fMsgContainers[3].fRequestPending at this+0x8C.
//   2. If non-zero: complete channel 3 with (result, theEvent).  Return noErr.
//   3. If zero: no request outstanding.  Return kCommErrNoGetCommEvent.
//
// ⚠  Bug #1: TRFCOMMTool::HandleRequest calls this and ignores the return value.
//    If kCommErrNoGetCommEvent is returned the event is silently dropped.
//    The correct fix is: on kCommErrNoGetCommEvent, copy theEvent into
//    this->fGetEventReply and set fGetEventReply.fResult ≠ kGetCommEventPending
//    so that the next GetCommEvent() call will drain the buffer.
//
// Decoded ARM (0x71CE0):
//   mov  r4, #0                ; ret = noErr
//   ldrb r3, [r0, #140]        ; fMsgContainers[3].fRequestPending  (+0x8C)
//   teq  r3, #0
//   beq  +2c                   ; branch to kCommErrNoGetCommEvent path
//   mov  r3, r1                ; r3 = result (third arg to CompleteRequest)
//   mov  r1, #3                ; channel = kCommToolGetEventChannel
//   bl   $CompleteRequest(channel, result, reply)
//   b    +34                   ; -> return noErr
//   mov  r4, #113              ; build kCommErrNoGetCommEvent:
//   sub  r4, r4, #16128        ;   0x71 - 0x3F00 = -16015
//   mov  r0, r4                ; return value

NewtonErr TConnectionEnd::PostCommEvent(TCommToolGetEventReply& theEvent,
                                        NewtonErr result)
{
    NewtonErr ret = noErr;

    if (fMsgContainers[kCommToolGetEventChannel].fRequestPending)
    {
        // A GetEvent request is outstanding — complete it immediately.
        CompleteRequest(kCommToolGetEventChannel, result, theEvent);
        // ret stays noErr
    }
    else
    {
        ret = kCommErrNoGetCommEvent;
    }

    return ret;
}


// ─────────────────────────────────────────────────────────────────────────────
//  TConnectionEnd::KillGetCommEventComplete
//  ROM: 0x00071C3C
// ─────────────────────────────────────────────────────────────────────────────
//
// Called by the IPC machinery when a KillGetCommEvent round-trip completes
// (the tool side has acknowledged the kill).  Handles two cases:
//
//   A. A GetEvent request was still outstanding when the kill arrived.
//      Complete channel 3 with kCommErrKilledGetCommEvent (using a fresh
//      stack-allocated reply struct), then call KillRequestComplete.
//
//   B. No GetEvent request was pending.
//      Call KillRequestComplete directly, forwarding result.
//
// The literal 0xFFFFC17B (kCommErrKilledGetCommEvent) is stored in the
// literal pool at 0x71C8C immediately after the function body.
//
// Decoded ARM (0x71C3C):
//   ldrb r0, [r0, #140]        ; fMsgContainers[3].fRequestPending  (+0x8C)
//   teq  r0, #0
//   beq  +54                   ; -> path B
//   sub  sp, sp, #36           ; allocate TCommToolGetEventReply on stack
//   mov  r0, sp
//   bl   TCommToolGetEventReply::$__ct
//   mov  r3, sp                ; r3 = &killReply
//   mov  r0, r4                ; r0 = this
//   ldr  r2, [pc,#18]          ; r2 = 0xFFFFC17B = kCommErrKilledGetCommEvent
//   mov  r1, #3                ; channel = kCommToolGetEventChannel
//   bl   $CompleteRequest(channel, result, reply)
//   mov  r0, r4
//   mov  r2, #0                ; result = noErr (kill was handled cleanly)
//   mov  r1, #8                ; kGetEventRequestType = 1<<3
//   bl   $KillRequestComplete(type, result)
//   ldmdb ...                  ; return
//   [literal pool: 0xFFFFC17B]
//   ; path B:
//   mov  r2, r1                ; r2 = result (forwarded)
//   mov  r0, r4
//   mov  r1, #8                ; kGetEventRequestType
//   b    $KillRequestComplete  ; tail-call

void TConnectionEnd::KillGetCommEventComplete(NewtonErr result)
{
    if (fMsgContainers[kCommToolGetEventChannel].fRequestPending)
    {
        // Path A: kill an in-flight GetEvent request with a synthetic reply.
        TCommToolGetEventReply killReply;   // stack-allocated, __ct zeroes fields

        CompleteRequest(kCommToolGetEventChannel,
                        kCommErrKilledGetCommEvent,
                        killReply);

        // Kill transaction is complete; result is noErr because we handled it.
        KillRequestComplete(kGetEventRequestType, noErr);
    }
    else
    {
        // Path B: no request was pending; forward result as-is.
        KillRequestComplete(kGetEventRequestType, result);
    }
}
