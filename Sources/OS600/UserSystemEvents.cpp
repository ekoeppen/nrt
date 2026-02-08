/*
	File:		UserSystemEvents.cpp

	Contains:	Implementation of TSystemEvent and TSendSystemEvent classes.

	Copyright:	© 1993-1995 by Apple Computer, Inc., all rights reserved.
*/

#include "SystemEvents.h"
#include "NameServer.h"
#include "OSErrors.h"

#pragma segment OS600

/**
 * Symbol: TSystemEvent::__ct(unsigned long)
 * Address: 001313a0
 */
TSystemEvent::TSystemEvent(SystemEvent event)
{
	fNameServerPort.DenyOwnership();
	fNameServerPort.fId = 0;
	fEvent = event;
	fNameServerPort.CopyObject(GetPortSWI(kGetNameServerPort));
}

/**
 * Symbol: TSystemEvent::SetEvent(unsigned long)
 * Address: 001313fc
 */
void TSystemEvent::SetEvent(SystemEvent event)
{
	fEvent = event;
}

/**
 * Symbol: TSystemEvent::RegisterForSystemEvent(unsigned long, unsigned long, unsigned long)
 * Address: 00131404
 */
NewtonErr TSystemEvent::RegisterForSystemEvent(TObjectId portId, ULong sendFilter, TTimeout timeout)
{
	TSysEventRequest request;
	TNameServerReply reply;
	
	request.fCommand = kRegisterForSystemEvent;
	request.fTheEvent = fEvent;
	request.fSysEventObjId = portId;
	request.fSysEventTimeOut = timeout;
	request.fSysEventSendFilter = sendFilter;
	
	return fNameServerPort.SendRPC(&request, sizeof(request), &reply, sizeof(reply), timeout);
}

/**
 * Symbol: TSystemEvent::UnRegisterForSystemEvent(unsigned long)
 * Address: 001314a0
 */
NewtonErr TSystemEvent::UnRegisterForSystemEvent(TObjectId portId)
{
	TSysEventRequest request;
	TNameServerReply reply;
	
	request.fCommand = kUnRegisterForSystemEvent;
	request.fTheEvent = fEvent;
	request.fSysEventObjId = portId;
	
	return fNameServerPort.SendRPC(&request, sizeof(request), &reply, sizeof(reply));
}

/**
 * Symbol: TSendSystemEvent::Init(void)
 * Address: 001313f4
 */
NewtonErr TSendSystemEvent::Init()
{
	return fMsgToSend.Init();
}

/**
 * Symbol: TSendSystemEvent::SendSystemEvent(void *, unsigned long)
 * Address: 0013152c
 */
NewtonErr TSendSystemEvent::SendSystemEvent(void* message, ULong messageSize)
{
	TNameServerReply reply;
	
	NewtonErr err = fMsgToSend.SetBuffer(message, messageSize, kSMemReadOnly);
	if (err != noErr) return err;
	
	fMsgToNameServer.fCommand = kSendSystemEvent;
	fMsgToNameServer.fTheEvent = fEvent;
	fMsgToNameServer.fSysEventObjId = fMsgToSend;
	fMsgToNameServer.fSysEventTimeOut = 0;
	fMsgToNameServer.fSysEventSendFilter = 0;
	
	return fNameServerPort.SendRPC(&fMsgToNameServer, sizeof(fMsgToNameServer), &reply, sizeof(reply));
}

/**
 * Symbol: TSendSystemEvent::SendSystemEvent(TUAsyncMessage *, void *, unsigned long, void *, unsigned long)
 * Address: 001315d8
 */
NewtonErr TSendSystemEvent::SendSystemEvent(TUAsyncMessage* asyncMessage, void* message, ULong messageSize, void* reply, ULong replySize)
{
	// Assembly shows a check for messageSize == -1 (0xffffffff)
	if (messageSize == 0xffffffff) return kOSInvalidParameter;
	
	NewtonErr err = fMsgToSend.SetBuffer(message, messageSize, kSMemReadOnly);
	if (err != noErr) return err;

	fMsgToNameServer.fCommand = kSendSystemEvent;
	fMsgToNameServer.fTheEvent = fEvent;
	fMsgToNameServer.fSysEventObjId = fMsgToSend;
	fMsgToNameServer.fSysEventTimeOut = 0; // Not used for async send? Or uses asyncMessage timeout?
	fMsgToNameServer.fSysEventSendFilter = 0;

	return fNameServerPort.SendRPC(asyncMessage, &fMsgToNameServer, sizeof(fMsgToNameServer), reply, replySize);
}
