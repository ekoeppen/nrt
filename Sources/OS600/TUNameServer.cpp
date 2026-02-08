#include "NameServer.h"
#include "UserGlobals.h"
#include "LongTime.h"
#include <string.h>

/**
 * Symbol: TUNameServer::__ct(void)
 * Address: 001304c0
 */
TUNameServer::TUNameServer() {
    fNameServerPort.CopyObject(GetPortSWI(2)); // NameServer port is 2
    
    fMsgName = new TUSharedMem();
    if (fMsgName) {
        fMsgName->Init();
    }
    
    fMsgType = new TUSharedMem();
    if (fMsgType) {
        fMsgType->Init();
    }
}

/**
 * Symbol: TUNameServer::__dt(void)
 * Address: 00130560
 */
TUNameServer::~TUNameServer() {
    if (fMsgName) {
        delete fMsgName;
    }
    if (fMsgType) {
        delete fMsgType;
    }
}

/**
 * Symbol: TUNameServer::RegisterName(char *, char *, unsigned long, unsigned long)
 * Address: 001305b8
 */
NewtonErr TUNameServer::RegisterName(char* name, char* type, ULong thing, ULong spec) {
    if (fMsgName == nil || fMsgType == nil) {
        return -10007; // kError_Not_Initialized
    }

    fMsgName->SetBuffer(name, strlen(name) + 1, kSMemReadOnly);
    fMsgType->SetBuffer(type, strlen(type) + 1, kSMemReadOnly);

    TNameRequest request;
    TNameServerReply reply;

    request.fCommand = kRegisterName;
    request.fThing = thing;
    request.fSpec = spec;
    request.fObjectName = *fMsgName;
    request.fObjectType = *fMsgType;

    ULong returnSize;
    NewtonErr err = fNameServerPort.SendRPC(&returnSize, &request, sizeof(request), &reply, sizeof(reply));

    if (err == noErr) {
        err = reply.fResult;
    }
    return err;
}

/**
 * Symbol: TUNameServer::UnRegisterName(char *, char *)
 * Address: 00130e90
 */
NewtonErr TUNameServer::UnRegisterName(char* name, char* type) {
    if (fMsgName == nil || fMsgType == nil) {
        return -10007;
    }

    fMsgName->SetBuffer(name, strlen(name) + 1, kSMemReadOnly);
    fMsgType->SetBuffer(type, strlen(type) + 1, kSMemReadOnly);

    TNameRequest request;
    TNameServerReply reply;

    request.fCommand = kUnregisterName;
    request.fObjectName = *fMsgName;
    request.fObjectType = *fMsgType;

    ULong returnSize;
    NewtonErr err = fNameServerPort.SendRPC(&returnSize, &request, sizeof(request), &reply, sizeof(reply));

    if (err == noErr) {
        err = reply.fResult;
    }
    return err;
}

/**
 * Symbol: TUNameServer::Lookup(char *, char *, unsigned long *, unsigned long *)
 * Address: 0013069c
 */
NewtonErr TUNameServer::Lookup(char* name, char* type, ULong* thing, ULong* spec) {
    if (fMsgName == nil || fMsgType == nil) {
        return -10007;
    }

    fMsgName->SetBuffer(name, strlen(name) + 1, kSMemReadOnly);
    fMsgType->SetBuffer(type, strlen(type) + 1, kSMemReadOnly);

    TNameRequest request;
    TNameServerReply reply;

    request.fCommand = kLookup;
    request.fObjectName = *fMsgName;
    request.fObjectType = *fMsgType;

    ULong returnSize;
    NewtonErr err = fNameServerPort.SendRPC(&returnSize, &request, sizeof(request), &reply, sizeof(reply));

    if (err == noErr) {
        err = reply.fResult;
        if (err == noErr) {
            if (thing) *thing = reply.fThing;
            if (spec) *spec = reply.fSpec;
        }
    }
    return err;
}

/**
 * Symbol: TUNameServer::WaitForRegister(char *, char *, unsigned long *, unsigned long *)
 * Address: 00130b94
 */
NewtonErr TUNameServer::WaitForRegister(char* name, char* type, ULong* thing, ULong* spec) {
    if (fMsgName == nil || fMsgType == nil) {
        return -10007;
    }

    fMsgName->SetBuffer(name, strlen(name) + 1, kSMemReadOnly);
    fMsgType->SetBuffer(type, strlen(type) + 1, kSMemReadOnly);

    TNameRequest request;
    TNameServerReply reply;

    request.fCommand = kWaitForRegister;
    request.fObjectName = *fMsgName;
    request.fObjectType = *fMsgType;

    ULong returnSize;
    NewtonErr err = fNameServerPort.SendRPC(&returnSize, &request, sizeof(request), &reply, sizeof(reply));

    if (err == noErr) {
        err = reply.fResult;
        if (err == noErr) {
            if (thing) *thing = reply.fThing;
            if (spec) *spec = reply.fSpec;
        }
    }
    return err;
}

/**
 * Symbol: TUNameServer::WaitForUnregister(char *, char *)
 * Address: 00130d20
 */
NewtonErr TUNameServer::WaitForUnregister(char* name, char* type) {
    if (fMsgName == nil || fMsgType == nil) {
        return -10007;
    }

    fMsgName->SetBuffer(name, strlen(name) + 1, kSMemReadOnly);
    fMsgType->SetBuffer(type, strlen(type) + 1, kSMemReadOnly);

    TNameRequest request;
    TNameServerReply reply;

    request.fCommand = kWaitForUnregister;
    request.fObjectName = *fMsgName;
    request.fObjectType = *fMsgType;

    ULong returnSize;
    NewtonErr err = fNameServerPort.SendRPC(&returnSize, &request, sizeof(request), &reply, sizeof(reply));

    if (err == noErr) {
        err = reply.fResult;
    }
    return err;
}

/**
 * Symbol: TUNameServer::ResourceClaim(char *, char *, unsigned long, unsigned long)
 * Address: 00131104
 */
NewtonErr TUNameServer::ResourceClaim(char* name, char* type, TObjectId ownerPortId, TObjectId applicationNameId) {
    if (fMsgName == nil || fMsgType == nil) {
        return -10007;
    }

    fMsgName->SetBuffer(name, strlen(name) + 1, kSMemReadOnly);
    fMsgType->SetBuffer(type, strlen(type) + 1, kSMemReadOnly);

    TResArbitrationRequest request;
    TNameServerReply reply;

    request.fCommand = kResourceArbitration;
    request.fRequestType = kResArbitrationClaim;
    request.fObjectName = *fMsgName;
    request.fObjectType = *fMsgType;
    request.fOwnerPortId = ownerPortId;
    request.fOwnerName = applicationNameId;

    ULong returnSize;
    NewtonErr err = fNameServerPort.SendRPC(&returnSize, &request, sizeof(request), &reply, sizeof(reply));

    if (err == noErr) {
        err = reply.fResult;
    }
    return err;
}

/**
 * Symbol: TUNameServer::ResourceUnclaim(char *, char *)
 * Address: 00131464
 */
NewtonErr TUNameServer::ResourceUnclaim(char* name, char* type) {
    if (fMsgName == nil || fMsgType == nil) {
        return -10007;
    }

    fMsgName->SetBuffer(name, strlen(name) + 1, kSMemReadOnly);
    fMsgType->SetBuffer(type, strlen(type) + 1, kSMemReadOnly);

    TResArbitrationRequest request;
    TNameServerReply reply;

    request.fCommand = kResourceArbitration;
    request.fRequestType = kResArbitrationUncliam;
    request.fObjectName = *fMsgName;
    request.fObjectType = *fMsgType;

    ULong returnSize;
    NewtonErr err = fNameServerPort.SendRPC(&returnSize, &request, sizeof(request), &reply, sizeof(reply));

    if (err == noErr) {
        err = reply.fResult;
    }
    return err;
}

/**
 * Symbol: TUNameServer::ResourcePassiveClaim(char *, char *, unsigned long, unsigned long)
 * Address: 00131234
 */
NewtonErr TUNameServer::ResourcePassiveClaim(char* name, char* type, TObjectId ownerPortId, TObjectId applicationNameId) {
    if (fMsgName == nil || fMsgType == nil) {
        return -10007;
    }

    fMsgName->SetBuffer(name, strlen(name) + 1, kSMemReadOnly);
    fMsgType->SetBuffer(type, strlen(type) + 1, kSMemReadOnly);

    TResArbitrationRequest request;
    TNameServerReply reply;

    request.fCommand = kResourceArbitration;
    request.fRequestType = kResArbitrationPassiveClaim;
    request.fObjectName = *fMsgName;
    request.fObjectType = *fMsgType;
    request.fOwnerPortId = ownerPortId;
    request.fOwnerName = applicationNameId;

    ULong returnSize;
    NewtonErr err = fNameServerPort.SendRPC(&returnSize, &request, sizeof(request), &reply, sizeof(reply));

    if (err == noErr) {
        err = reply.fResult;
    }
    return err;
}

/**
 * Symbol: TUNameServer::ResourcePassiveUnclaim(char *, char *)
 * Address: 0013134c
 */
NewtonErr TUNameServer::ResourcePassiveUnclaim(char* name, char* type) {
    if (fMsgName == nil || fMsgType == nil) {
        return -10007;
    }

    fMsgName->SetBuffer(name, strlen(name) + 1, kSMemReadOnly);
    fMsgType->SetBuffer(type, strlen(type) + 1, kSMemReadOnly);

    TResArbitrationRequest request;
    TNameServerReply reply;

    request.fCommand = kResourceArbitration;
    request.fRequestType = kResArbitrationPassiveUnclaim;
    request.fObjectName = *fMsgName;
    request.fObjectType = *fMsgType;

    ULong returnSize;
    NewtonErr err = fNameServerPort.SendRPC(&returnSize, &request, sizeof(request), &reply, sizeof(reply));

    if (err == noErr) {
        err = reply.fResult;
    }
    return err;
}
