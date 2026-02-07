#include "UserSharedMem.h"
#include "UserGlobals.h"

// Note: TUMsgToken is defined in UserPorts.h, but used here.
// For reconstruction, we assume it has fMsgId and fReplyId at specific offsets.
struct TUMsgToken {
    TObjectId fMsgId;     // Offset 0
    TObjectId fRcvrMsgId; // Offset 4
    TObjectId fReplyId;   // Offset 8
    unsigned long fSignature; // Offset 12
};

// --- TUSharedMem Implementation ---

long TUSharedMem::Init() {
    ObjectMessage msg;
    return MakeObject(kObjectSharedMem, &msg, sizeof(msg));
}

long TUSharedMem::SetBuffer(void* buffer, unsigned long size, unsigned long permissions) {
    return SMemSetBufferSWI(fId, buffer, size, permissions);
}

long TUSharedMem::GetSize(unsigned long* returnSize, void** returnBuffer) {
    return SMemGetSizeSWI(fId, returnSize, returnBuffer, 0);
}

long TUSharedMem::CopyToShared(void* buffer, unsigned long size, unsigned long offset, TUMsgToken* token) {
    unsigned long msgId = 0;
    unsigned long signature = 0;
    
    if (token) {
        msgId = token->fMsgId;
        signature = token->fReplyId; // Looking at assembly 25a614, it loads [r2, #8]
    }
    
    return SMemCopyToSharedSWI(fId, buffer, size, offset, msgId, signature);
}

long TUSharedMem::CopyFromShared(unsigned long* returnSize, void* buffer, unsigned long size, unsigned long offset, TUMsgToken* token) {
    unsigned long msgId = 0;
    unsigned long signature = 0;
    
    if (token) {
        msgId = token->fMsgId;
        signature = token->fReplyId; // Looking at assembly 25a674, it loads [r2, #8]
    }
    
    return SMemCopyFromSharedSWI(fId, buffer, size, offset, msgId, signature, returnSize);
}

// --- TUSharedMemMsg Implementation ---

long TUSharedMemMsg::Init() {
    ObjectMessage msg;
    return MakeObject(kObjectSharedMemMsg, &msg, sizeof(msg));
}

long TUSharedMemMsg::SetTimerParms(unsigned long timeout, void* delay) {
    unsigned long timeLow = 0;
    unsigned long timeHigh = 0;
    if (delay) {
        // TTime is likely { ULong low, ULong high }
        timeLow = ((unsigned long*)delay)[0];
        timeHigh = ((unsigned long*)delay)[1];
    }
    return SMemMsgSetTimerParmsSWI(fId, timeout, timeLow, timeHigh);
}

long TUSharedMemMsg::SetMsgAvailPort(TObjectId availPortId) {
    return SMemMsgSetMsgAvailPortSWI(fId, availPortId);
}

long TUSharedMemMsg::GetSenderTaskId(TObjectId* theSenderTaskId) {
    return SMemMsgGetSenderTaskIdSWI(fId, theSenderTaskId);
}

long TUSharedMemMsg::GetSize(unsigned long* returnSize, void** returnBuffer, unsigned long *refConPtr) {
    return SMemGetSizeSWI(fId, returnSize, returnBuffer, refConPtr);
}

long TUSharedMemMsg::SetUserRefCon(unsigned long refCon) {
    return SMemMsgSetUserRefConSWI(fId, refCon);
}

long TUSharedMemMsg::GetUserRefCon(unsigned long *refConPtr) {
    return SMemMsgGetUserRefConSWI(fId, refConPtr);
}

long TUSharedMemMsg::CheckForDone(unsigned long flags, TObjectId* sentbyId, TObjectId* replymemId, unsigned long* msgType, unsigned long* signature) {
    return SMemMsgCheckForDoneSWI(fId, flags, sentbyId, replymemId, msgType, signature);
}

long TUSharedMemMsg::MsgDone(long result, TObjectId signature) {
    return SMemMsgMsgDoneSWI(fId, result, signature);
}
