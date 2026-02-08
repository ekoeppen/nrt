/*
	File:		TEndpoint.cpp

	Contains:	TEndpoint protocol implementation

	Copyright:	© 1992-1995 by Apple Computer, Inc., all rights reserved.

	Derived from v32 internal.
*/

#include "CommAPI/Endpoint.h"
#include "CommAPI/CMService.h"
#include "CommAPI/OptionArray.h"
#include "CommAPI/Transport.h"
#include "CommAPI/CommManagerInterface.h"
#include "OS600/UserPorts.h"
#include "UtilityClasses/BufferList.h"

// For TCMOTransportInfo
class TCMOTransportInfo {
public:
    TCMOTransportInfo();
    // Size is approx 44 bytes based on GetInfo implementation
    char data[44];
};

#pragma segment CommAPI

/*------------------------------------------------------------------------------
	N e w

	Address: 00382A0C
------------------------------------------------------------------------------*/

TEndpoint*
TEndpoint::New(char* name)
{
	TEndpoint* endpoint = (TEndpoint*)AllocInstanceByName("TEndpoint", name);
	if (endpoint != NULL)
	{
		endpoint->Init();
	}
	return endpoint;
}


/*------------------------------------------------------------------------------
	D e l e t e

	Address: 00382A38
------------------------------------------------------------------------------*/

void
TEndpoint::Delete(void)
{
	// Protocol dispatch handled by the system.
	// 1. calls implementation's Delete() [fBTable + 12]
	// 2. calls FreeInstance()
}


/*------------------------------------------------------------------------------
	I n i t B a s e E n d p o i n t

	Address: 000ac2e0
------------------------------------------------------------------------------*/

NewtonErr
TEndpoint::InitBaseEndpoint(TEndpointEventHandler* handler)
{
	fState = 0;
	fEventHandler = handler;
	fClientRefCon = 0;
	
	fSync = true;
	fToolIsRunning = true;
	
	fInfo = new TCMOTransportInfo();
	if (fInfo == NULL)
		return kNoMemory;
		
	return noErr;
}


/*------------------------------------------------------------------------------
	D e s t r o y B a s e E n d p o i n t

	Address: 000ad82c
------------------------------------------------------------------------------*/

void
TEndpoint::DestroyBaseEndpoint(void)
{
	if (fEventHandler != NULL)
	{
		fEventHandler->Abort(true);
	}
	
	if (fInfo != NULL)
	{
		delete fInfo;
		fInfo = NULL;
	}
}


/*------------------------------------------------------------------------------
	D e l e t e L e a v i n g T o o l

	Address: 000ad860
------------------------------------------------------------------------------*/

TObjectId
TEndpoint::DeleteLeavingTool(void)
{
	TObjectId portId = 0;
	if (fEventHandler != NULL)
	{
		portId = fEventHandler->GetServicePortId();
	}
	
	fToolIsRunning = false;
	this->Delete();
	
	return portId;
}


/*------------------------------------------------------------------------------
	S e t C l i e n t H a n d l e r

	Address: 000ada18
------------------------------------------------------------------------------*/

void
TEndpoint::SetClientHandler(ULong clientHandler)
{
	fClientRefCon = clientHandler;
}


/*------------------------------------------------------------------------------
	G e t I n f o

	Address: 000ad894
------------------------------------------------------------------------------*/

NewtonErr
TEndpoint::GetInfo(TCMOTransportInfo* info)
{
	if (fInfo == NULL)
		return TBADF;
	
	*info = *fInfo;
	return noErr;
}


/*------------------------------------------------------------------------------
	U s e F o r k s

	Address: 000ada20
------------------------------------------------------------------------------*/

Boolean
TEndpoint::UseForks(Boolean justDoIt)
{
	if (fEventHandler != NULL)
		return fEventHandler->UseForks(justDoIt);
	return false;
}


/*------------------------------------------------------------------------------
	E a s y O p e n

	Address: 000ad8d0
------------------------------------------------------------------------------*/

NewtonErr
TEndpoint::EasyOpen(ULong clientHandler)
{
	NewtonErr err;
	
	err = this->Open(clientHandler);
	if (err == noErr)
	{
		err = this->nBind(NULL, kNoTimeout, true);
		if (err == noErr)
		{
			err = this->nConnect(NULL, NULL, NULL, kNoTimeout, true);
		}
	}
	
	return err;
}


/*------------------------------------------------------------------------------
	E a s y C o n n e c t

	Address: 000ad928
------------------------------------------------------------------------------*/

NewtonErr
TEndpoint::EasyConnect(ULong clientHandler, TOptionArray* options, TTimeout timeOut)
{
	NewtonErr err;
	
	err = this->Open(clientHandler);
	if (err == noErr)
	{
		err = this->nConnect(options, NULL, NULL, timeOut, true);
	}
	
	return err;
}


/*------------------------------------------------------------------------------
	E a s y C l o s e

	Address: 000ad98c
------------------------------------------------------------------------------*/

NewtonErr
TEndpoint::EasyClose(void)
{
	NewtonErr err;
	
	err = this->nDisconnect(NULL, 0, 0, kNoTimeout, true);
	if (err == noErr || err == TOUTSTATE)
	{
		err = this->nUnBind(kNoTimeout, true);
		if (err == noErr || err == TOUTSTATE)
		{
			err = this->Close();
		}
	}
	
	return err;
}


/*------------------------------------------------------------------------------
	V i r t u a l   D i s p a t c h e r s
------------------------------------------------------------------------------*/

// slot 0 (8): Init
void TEndpoint::Init() {}

// slot 4 (24): HandleEvent
Boolean TEndpoint::HandleEvent(ULong msgType, TAEvent* event, ULong msgSize) { return false; }

// slot 5 (28): HandleComplete
Boolean TEndpoint::HandleComplete(TUMsgToken* msgToken, ULong* msgSize, TAEvent* event) { return false; }

// slot 6 (32): AddToAppWorld
NewtonErr TEndpoint::AddToAppWorld(void) { return noErr; }

// slot 7 (36): RemoveFromAppWorld
NewtonErr TEndpoint::RemoveFromAppWorld(void) { return noErr; }

// slot 8 (40): Open
NewtonErr TEndpoint::Open(ULong clientHandler) { return noErr; }

// slot 9 (44): Close
NewtonErr TEndpoint::Close(void) { return noErr; }

// slot 10 (48): Abort
NewtonErr TEndpoint::Abort(void) { return noErr; }

// slot 11 (52): SetSync
Boolean TEndpoint::SetSync(Boolean sync) { return false; }

// slot 12 (56): GetProtAddr
NewtonErr TEndpoint::GetProtAddr(TOptionArray* bndAddr, TOptionArray* peerAddr, TTimeout timeOut) { return noErr; }

// slot 13 (60): OptMgmt
NewtonErr TEndpoint::OptMgmt(ULong arrayOpCode, TOptionArray* options, TTimeout timeOut) { return noErr; }

// slot 14 (64): Bind
NewtonErr TEndpoint::Bind(TOptionArray* addr, Long* qlen, TTimeout timeOut) { return noErr; }

// slot 15 (68): UnBind
NewtonErr TEndpoint::UnBind(TTimeout timeOut) { return noErr; }

// slot 16 (72): Listen
NewtonErr TEndpoint::Listen(TOptionArray* addr, TOptionArray* opt, CBufferSegment* data, Long* seq, TTimeout timeOut) { return noErr; }

// slot 17 (76): Accept
NewtonErr TEndpoint::Accept(TEndpoint* resfd, TOptionArray* addr, TOptionArray* opt, CBufferSegment* data, Long seq, TTimeout timeOut) { return noErr; }

// slot 18 (80): Connect
NewtonErr TEndpoint::Connect(TOptionArray* addr, TOptionArray* opt, CBufferSegment* data, Long* seq, TTimeout timeOut) { return noErr; }

// slot 19 (84): Disconnect
NewtonErr TEndpoint::Disconnect(CBufferSegment* data, Long reason, Long seq) { return noErr; }

// slot 20 (88): Release
NewtonErr TEndpoint::Release(TTimeout timeOut) { return noErr; }

// slot 21 (92): Snd (buf)
NewtonErr TEndpoint::Snd(UByte* buf, Size& nBytes, ULong flags, TTimeout timeOut) { return noErr; }

// slot 22 (96): Rcv (buf)
NewtonErr TEndpoint::Rcv(UByte* buf, Size& nBytes, Size thresh, ULong* flags, TTimeout timeOut) { return noErr; }

// slot 23 (100): Snd (CBufferSegment)
NewtonErr TEndpoint::Snd(CBufferSegment* buf, ULong flags, TTimeout timeOut) { return noErr; }

// slot 24 (104): Rcv (CBufferSegment)
NewtonErr TEndpoint::Rcv(CBufferSegment* buf, Size thresh, ULong* flags, TTimeout timeOut) { return noErr; }

// slot 25 (108): WaitForEvent
NewtonErr TEndpoint::WaitForEvent(TTimeout timeOut) { return noErr; }

// slot 26 (112): nBind
NewtonErr TEndpoint::nBind(TOptionArray* opt, TTimeout timeOut, Boolean sync) { return noErr; }

// slot 27 (116): nListen
NewtonErr TEndpoint::nListen(TOptionArray* opt, CBufferSegment* data, Long* seq, TTimeout timeOut, Boolean sync) { return noErr; }

// slot 28 (120): nAccept
NewtonErr TEndpoint::nAccept(TEndpoint* resfd, TOptionArray* opt, CBufferSegment* data, Long seq, TTimeout timeOut, Boolean sync) { return noErr; }

// slot 29 (124): nConnect
NewtonErr TEndpoint::nConnect(TOptionArray* opt, CBufferSegment* data, Long* seq, TTimeout timeOut, Boolean sync) { return noErr; }

// slot 30 (128): nRelease
NewtonErr TEndpoint::nRelease(TTimeout timeOut, Boolean sync) { return noErr; }

// slot 31 (132): nDisconnect
NewtonErr TEndpoint::nDisconnect(CBufferSegment* data, Long reason, Long seq, TTimeout timeOut, Boolean sync) { return noErr; }

// slot 32 (136): nUnBind
NewtonErr TEndpoint::nUnBind(TTimeout timeOut, Boolean sync) { return noErr; }

// slot 33 (140): nOptMgmt
NewtonErr TEndpoint::nOptMgmt(ULong arrayOpCode, TOptionArray* options, TTimeout timeOut, Boolean sync) { return noErr; }

// slot 34 (144): nSnd (buf)
NewtonErr TEndpoint::nSnd(UByte* buf, Size* count, ULong flags, TTimeout timeOut, Boolean sync, TOptionArray* opt) { return noErr; }

// slot 35 (148): nRcv (buf)
NewtonErr TEndpoint::nRcv(UByte* buf, Size* count, Size thresh, ULong* flags, TTimeout timeOut, Boolean sync, TOptionArray* opt) { return noErr; }

// slot 36 (152): nSnd (CBufferSegment)
NewtonErr TEndpoint::nSnd(CBufferSegment* buf, ULong flags, TTimeout timeOut, Boolean sync, TOptionArray* opt) { return noErr; }

// slot 37 (156): nRcv (CBufferSegment)
NewtonErr TEndpoint::nRcv(CBufferSegment* buf, Size thresh, ULong* flags, TTimeout timeOut, Boolean sync, TOptionArray* opt) { return noErr; }

// slot 38 (160): nAbort
NewtonErr TEndpoint::nAbort(Boolean sync) { return noErr; }

// slot 39 (164): Timeout
NewtonErr TEndpoint::Timeout(ULong refCon) { return noErr; }

// slot 40 (168): IsPending
Boolean TEndpoint::IsPending(ULong which) { return false; }
