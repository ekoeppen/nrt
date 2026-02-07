#include "UserPorts.h"
#include "UserGlobals.h"

// --- TUMsgToken Implementation ---

long TUMsgToken::CashMessageToken(unsigned long* returnSize, void* content, unsigned long size, unsigned long offset, bool copyDone) {
    long result = SMemCopyFromSharedSWI(fMsgId, content, size, offset, fMsgId, fSignature, returnSize);
    
    if (fReplyId != 0 || copyDone || result != 0) {
        SMemMsgMsgDoneSWI(fMsgId, result, fSignature);
    }
    
    return result;
}

long TUMsgToken::ReplyRPC(void* content, unsigned long size, long replyResult) {
    long result = 0;
    
    // CMN r1, #1 in assembly is comparing against -1 (0xFFFFFFFF)
    // If size is not -1 and size > 0, copy data to the reply buffer
    if (size != 0xFFFFFFFF && size > 0) {
        result = SMemCopyToSharedSWI(fReplyId, content, size, 0, fMsgId, fSignature);
    }
    
    // Then complete the message
    SMemMsgMsgDoneSWI(fMsgId, replyResult, fSignature);
    
    return result;
}

long TUMsgToken::GetUserRefCon(unsigned long *refConPtr) {
    // If fRcvrMsgId is non-zero (async receive), use it. Otherwise use fMsgId.
    TObjectId targetId = fRcvrMsgId ? fRcvrMsgId : fMsgId;
    return SMemMsgGetUserRefConSWI(targetId, refConPtr);
}

// --- TUAsyncMessage Implementation ---

TUAsyncMessage::TUAsyncMessage() {
    fMsg.fId = 0;
    fMsg.fObjectCreatedByUs = false;
    fReplyMem.fId = 0;
    fReplyMem.fObjectCreatedByUs = false;
}

TUAsyncMessage::TUAsyncMessage(const TUAsyncMessage& copy) {
    fMsg.CopyObject(copy.fMsg.fId);
    fReplyMem.CopyObject(copy.fReplyMem.fId);
}

TUAsyncMessage::TUAsyncMessage(TObjectId sMemMsg, TObjectId replyMem) {
    fMsg.CopyObject(sMemMsg);
    fReplyMem.CopyObject(replyMem);
}

TUAsyncMessage::~TUAsyncMessage() {
    fMsg.DestroyObject();
    fReplyMem.DestroyObject();
}

void TUAsyncMessage::operator=(const TUMsgToken& token) {
    if (token.fRcvrMsgId != 0) {
        fMsg.CopyObject(token.fRcvrMsgId);
    } else {
        fMsg.CopyObject(token.fMsgId);
        fReplyMem.CopyObject(token.fReplyId);
    }
}

long TUAsyncMessage::Init(bool forSendRPC) {
    long result = fMsg.Init();
    if (result == 0 && forSendRPC) {
        result = fReplyMem.Init();
        if (result == 0) {
            // Success: map the reply shared memory as the message buffer
            // Permissions: 1 (kSuperReadWrite) or similar?
            // In TUTask::Init it used 1.
            result = fMsg.SetBuffer(fReplyMem, 0, 1);
        } else {
            // Failure: clear the message object
            fMsg.CopyObject(0);
        }
    }
    return result;
}

long TUAsyncMessage::SetCollectorPort(TObjectId portId) {
    return fMsg.SetMsgAvailPort(portId);
}

long TUAsyncMessage::GetResult(TObjectId* sentbyId, TObjectId* replymemId, unsigned long* msgType, unsigned long* signature) {
    return SMemMsgCheckForDoneSWI(fMsg.fId, 0, sentbyId, replymemId, msgType, signature);
}

long TUAsyncMessage::BlockTillDone(TObjectId* sentbyId, TObjectId* replymemId, unsigned long* msgType, unsigned long* signature) {
    // Flag 2 = kWaitOnBlock
    return SMemMsgCheckForDoneSWI(fMsg.fId, 2, sentbyId, replymemId, msgType, signature);
}

long TUAsyncMessage::Abort() {
    // Flag 1 = kAbort?
    return SMemMsgCheckForDoneSWI(fMsg.fId, 1, NULL, NULL, NULL, NULL);
}

long TUAsyncMessage::Abort(TUMsgToken* token, unsigned long* msgType) {
    if (token) {
        token->fRcvrMsgId = fMsg.fId;
    }
    // Flag 1 = kAbort?
    return SMemMsgCheckForDoneSWI(fMsg.fId, 1, (TObjectId*)token, (TObjectId*)((char*)token + 8), msgType, (unsigned long*)((char*)token + 4));
    // Wait, let's check the Abort(token, msgType) assembly for argument ordering.
    /*
        259a94:	e92d000c 	stmdb	sp!, {r2, r3}     ; Push msgType, &token->fSignature (r3 = token + 8)
        259a98:	e1a0300c 	mov	r3, ip            ; r3 = &token->fReplyId (ip = token + 4)
        259a9c:	e1a02001 	mov	r2, r1            ; r2 = &token->fMsgId (r1 = token)
    */
    // SMemMsgCheckForDoneSWI(id, flags, sentbyId, replymemId, msgType, signature)
    // r0=id, r1=flags, r2=sentbyId, r3=replymemId, [sp]=msgType, [sp+4]=signature
    // So:
    // sentbyId = token + 0  (fMsgId)
    // replymemId = token + 4 (fReplyId)
    // msgType = from r2 (but stmdb pushed r2 at sp?) 
    // Wait, stmdb {r2, r3} pushes r2 then r3? No, {r2, r3} pushes r3 then r2.
    // So [sp] = r2 (msgType), [sp+4] = r3 (&token->fSignature).
    // This matches the struct layout!
}

// --- TUPort Implementation ---

TUPort::TUPort(TObjectId id) : TUObject(id) {}

long TUPort::Init() {
    ObjectMessage msg;
    return MakeObject(kObjectPort, &msg, sizeof(msg));
}

long TUPort::SendGoo(TObjectId msgId, TObjectId replyId, void* content, unsigned long size, unsigned long msgType, unsigned long flags, bool urgent, unsigned long timeout, void* futureTimeToSend) {
    if (urgent) flags |= kPortFlags_Urgent;
    
    if (size != 0xFFFFFFFF) {
        // Permission 1 = Write?
        long result = SMemSetBufferSWI(msgId, content, size, 1);
        if (result != 0) return result;
    }
    
    if (futureTimeToSend) {
        flags |= kPortFlags_Future;
        unsigned long timeLow = ((unsigned long*)futureTimeToSend)[0];
        unsigned long timeHigh = ((unsigned long*)futureTimeToSend)[1];
        long result = SMemMsgSetTimerParmsSWI(msgId, timeout, timeLow, timeHigh);
        if (result != 0) return result;
    } else if (timeout != 0) {
        flags |= kPortFlags_Timer;
        long result = SMemMsgSetTimerParmsSWI(msgId, timeout, 0, 0);
        if (result != 0) return result;
    }
    
    return PortSendSWI(fId, msgId, replyId, msgType, flags);
}

long TUPort::SendRPCGoo(TObjectId msgId, TObjectId replyId, unsigned long* returnSize, void* content, unsigned long size, unsigned long msgType, unsigned long flags, bool urgent,
                        void* replyBuf, unsigned long replySize, unsigned long timeout, void* futureTimeToSend) {
    
    if (replyBuf) {
        // Permission 0 = Read/Write?
        long result = SMemSetBufferSWI(replyId, replyBuf, replySize, 0);
        if (result != 0) return result;
    }
    
    long result = SendGoo(msgId, replyId, content, size, msgType, flags, urgent, timeout, futureTimeToSend);
    
    if (result == 0 && returnSize && !(flags & kPortFlags_Async)) {
        result = SMemGetSizeSWI(replyId, returnSize, NULL, NULL);
    }
    
    return result;
}

long TUPort::Receive(unsigned long* returnSize, void* content, unsigned long size, TUMsgToken* token, unsigned long* returnMsgType, unsigned long timeout, unsigned long msgFilter, bool onMsgAvail, bool tokenOnly) {
    unsigned long flags = 0;
    if (onMsgAvail) flags |= kPortFlags_OnMsgAvail;
    if (tokenOnly) flags |= kPortFlags_TokenOnly;
    
    if (timeout != 0) {
        flags |= kPortFlags_Timer;
        long result = SMemMsgSetTimerParmsSWI(kBuiltInSMemMsgId, timeout, 0, 0);
        if (result != 0) return result;
    }
    
    TObjectId senderMsgId, replyMemId;
    unsigned long signature;
    long result = PortReceiveSWI(fId, kBuiltInSMemMsgId, msgFilter, flags, &senderMsgId, &replyMemId, returnMsgType, &signature);
    
    if (result == 0) {
        if (token) {
            token->fMsgId = senderMsgId;
            token->fReplyId = replyMemId;
            token->fSignature = signature;
            token->fRcvrMsgId = 0;
        }
        
        if (!tokenOnly) {
            if (returnSize) {
                result = SMemGetSizeSWI(senderMsgId, returnSize, NULL, NULL);
            } else if (content) {
                result = SMemCopyFromSharedSWI(senderMsgId, content, size, 0, senderMsgId, signature, returnSize);
            }
            
            // Auto-complete message if not a token-only receive and no error
            if (result == 0) {
                SMemMsgMsgDoneSWI(senderMsgId, 0, signature);
            }
        }
    }
    
    return result;
}

long TUPort::Receive(TUAsyncMessage* async, unsigned long timeout, unsigned long msgFilter, bool onMsgAvail) {
    unsigned long flags = kPortFlags_Async;
    if (onMsgAvail) flags |= kPortFlags_OnMsgAvail;
    
    if (timeout != 0) {
        flags |= kPortFlags_Timer;
        long result = SMemMsgSetTimerParmsSWI(async->GetMsgId(), timeout, 0, 0);
        if (result != 0) return result;
    }
    
    return PortReceiveSWI(fId, async->GetMsgId(), msgFilter, flags, NULL, NULL, NULL, NULL);
}

long TUPort::ResetMsgFilter(TUAsyncMessage* async, unsigned long msgFilter) {
    return PortResetFilterSWI(fId, async->GetMsgId(), msgFilter);
}

long TUPort::Reset(unsigned long sendersResetFlags, unsigned long receiversResetFlags) {
    return GenericSWI(0x43, fId, sendersResetFlags, receiversResetFlags);
}
