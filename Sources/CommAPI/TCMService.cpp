/*
	File:		TCMService.cpp

	Contains:	TCMService protocol dispatch glue

	Copyright:	© 1992-1995 by Apple Computer, Inc., all rights reserved.

	Derived from v9 internal.
*/

#include "CommAPI/CMService.h"

#pragma segment CommAPI

/*------------------------------------------------------------------------------
	N e w

	Address: 00382998
------------------------------------------------------------------------------*/

TCMService*
TCMService::New(char* name)
{
	TCMService* service = (TCMService*)AllocInstanceByName(kServiceInterfaceName, name);
	if (service != NULL)
	{
		service->Init();
	}
	return service;
}


/*------------------------------------------------------------------------------
	D e l e t e

	Address: 003829c4
------------------------------------------------------------------------------*/

void
TCMService::Delete(void)
{
	// Protocol dispatch handled by the system.
	// The ROM implementation for this glue method:
	// 1. calls implementation's Delete() [fBTable + 12]
	// 2. calls FreeInstance()
}


/*------------------------------------------------------------------------------
	Virtual Method Stubs

	The following methods are dispatched via the protocol VTable.
	Slot 0: Init           [fBTable + 8]
	Slot 1: Delete         [fBTable + 12] (the virtual part)
	Slot 2: Start          [fBTable + 16]
	Slot 3: DoneStarting   [fBTable + 20]
------------------------------------------------------------------------------*/

void TCMService::Init() {}

NewtonErr
TCMService::Start(TOptionArray* options, ULong serviceId, TServiceInfo* serviceInfo)
{
	return noErr;
}

NewtonErr
TCMService::DoneStarting(TAEvent* event, ULong size, TServiceInfo* serviceInfo)
{
	return noErr;
}
