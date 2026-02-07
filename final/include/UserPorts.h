#ifndef __USERPORTS_H
#define __USERPORTS_H

#include "UserObjects.h"
#include "UserSharedMem.h"

class TUPort;
class TUAsyncMessage;

// TUMsgToken
// Used for receive to get info about sender
class TUMsgToken
{
public:
    TUMsgToken() : fMsgId(0), fReplyId(0), fSignature(0), fRcvrMsgId(0) {}

    long CashMessageToken(unsigned long* returnSize, void* content, unsigned long size, unsigned long offset = 0, bool copyDone = true);
    long ReplyRPC(void* content, unsigned long size, long replyResult = 0); // noErr = 0
    long GetUserRefCon(unsigned long *refConPtr);

    TObjectId GetMsgId() const { return fMsgId; }
    TObjectId GetReceiverMsgId() const { return fRcvrMsgId; }
    TObjectId GetReplyId() const { return fReplyId; }
    unsigned long GetSignature() const { return fSignature; }

    friend class TUPort;
    friend class TUAsyncMessage;

private:
    TObjectId fMsgId;      // Offset 0: message senders id
    TObjectId fReplyId;    // Offset 4: send reply message here
    unsigned long fSignature; // Offset 8: signature used to sync to message sender
    TObjectId fRcvrMsgId;  // Offset 12: message receivers id on async receive
};

// TUAsyncMessage
// Async Message Parameter Block
class TUAsyncMessage
{
public:
    TUAsyncMessage();
    TUAsyncMessage(const TUAsyncMessage& copy);
    TUAsyncMessage(TObjectId sMemMsg, TObjectId replyMem);
    ~TUAsyncMessage();

    void operator=(const TUAsyncMessage& copy) { fMsg = copy.fMsg; fReplyMem = copy.fReplyMem; }
    void operator=(const TUMsgToken& copy);

    long Init(bool forSendRPC = true);

    long SetCollectorPort(TObjectId portId);
    long SetUserRefCon(unsigned long refCon) { return fMsg.SetUserRefCon(refCon); }
    long GetUserRefCon(unsigned long *refConPtr) { return fMsg.GetUserRefCon(refConPtr); }

    TObjectId GetMsgId() { return fMsg; }
    TObjectId GetReplyMemId() { return fReplyMem; }

    long GetResult(TObjectId* sentbyId = NULL, TObjectId* replymemId = NULL, unsigned long* msgType = NULL, unsigned long* signature = NULL);
    long BlockTillDone(TObjectId* sentbyId = NULL, TObjectId* replymemId = NULL, unsigned long* msgType = NULL, unsigned long* signature = NULL);
    long Abort();
    long Abort(TUMsgToken* token, unsigned long* msgType);

private:
    TUSharedMemMsg fMsg;     // Offset 0
    TUSharedMem    fReplyMem; // Offset 8
};

#endif

#define kBuiltInSMemMsgId (TObjectId)1
#define kBuiltInSMemId (TObjectId)2

#define kPortFlags_Async 0x01
#define kPortFlags_Urgent 0x02
#define kPortFlags_Timer 0x08
#define kPortFlags_Future 0x10
#define kPortFlags_OnMsgAvail 0x20
#define kPortFlags_TokenOnly 0x40

class TUPort : public TUObject
{
public:
    TUPort() : TUObject(0) {}
    TUPort(TObjectId id);
    void operator=(TObjectId id) { CopyObject(id); }
    void operator=(const TUPort& copy) { CopyObject(copy); }
    long Init();

    long Send(void* content, unsigned long size, unsigned long timeout = 0, unsigned long msgType = 0, bool urgent = false)
                            { return SendGoo(kBuiltInSMemMsgId, 0, content, size, msgType, 0, urgent, timeout, NULL); }
    long SendRPC(unsigned long* returnSize, void* content, unsigned long size, void* replyBuf, unsigned long replySize, unsigned long timeout = 0, unsigned long msgType = 0, bool urgent = false)
                            { return SendRPCGoo(kBuiltInSMemMsgId, kBuiltInSMemId, returnSize, content, size, msgType, 0, urgent, replyBuf, replySize, timeout, NULL); }

    long Send(TUAsyncMessage* async, void* content, unsigned long size, unsigned long timeout = 0, void* futureTimeToSend = NULL, unsigned long msgType = 0, bool urgent = false)
                            { return SendGoo(async->GetMsgId(), 0, content, size, msgType, kPortFlags_Async, urgent, timeout, futureTimeToSend); }
    long SendRPC(TUAsyncMessage* async, void* content, unsigned long size, void* replyBuf, unsigned long replySize, unsigned long timeout = 0, void* futureTimeToSend = NULL, unsigned long msgType = 0, bool urgent = false)
                            { return SendRPCGoo(async->GetMsgId(), async->GetReplyMemId(), NULL, content, size, msgType, kPortFlags_Async, urgent, replyBuf, replySize, timeout, futureTimeToSend); }

    long Receive(unsigned long* returnSize, void* content, unsigned long size, TUMsgToken* token = NULL, unsigned long* returnMsgType = NULL, unsigned long timeout = 0, unsigned long msgFilter = 0xFFFFFFFF, bool onMsgAvail = false, bool tokenOnly = false);
    long Receive(TUAsyncMessage* async, unsigned long timeout = 0, unsigned long msgFilter = 0xFFFFFFFF, bool onMsgAvail = false);

    long IsMsgAvailable(unsigned long msgFilter = 0xFFFFFFFF)
                            { return Receive(NULL, (unsigned long) 0, msgFilter); }

    long ResetMsgFilter(TUAsyncMessage* async, unsigned long msgFilter);

    long Reset(unsigned long sendersResetFlags, unsigned long receiversResetFlags);

private:
    long SendGoo(TObjectId msgId, TObjectId replyId, void* content, unsigned long size, unsigned long msgType, unsigned long flags, bool urgent, unsigned long timeout, void* futureTimeToSend);
    long SendRPCGoo(TObjectId msgId, TObjectId replyId, unsigned long* returnSize, void* content, unsigned long size, unsigned long msgType, unsigned long flags, bool urgent,
                            void* replyBuf, unsigned long replySize, unsigned long timeout, void* futureTimeToSend);
};
