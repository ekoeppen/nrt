/*
	File:		TAsyncServiceMessage.cpp

	Contains:	Implementation of TAsyncServiceMessage

	Copyright:	© 1992-1995 by Apple Computer, Inc., all rights reserved.

	Derived from v9 internal.
*/

#include "CommAPI/CMService.h"
#include "OS600/UserPorts.h"
#include "UtilityClasses/List.h"

// External or Global accessors
extern "C" void* GetGlobals();

class TAppWorld {
public:
    static TObjectId* GetMyPort();
};

#pragma segment CommAPI

/**
 * Constructor
 *
 * Address: 00049448
 */
TAsyncServiceMessage::TAsyncServiceMessage()
{
	fService = NULL;
	fMessage = NULL;
	fReply = NULL;
    // fAsyncMessage is initialized by its own constructor (at this+4)
}

/**
 * Destructor
 *
 * Address: 0004948c
 */
TAsyncServiceMessage::~TAsyncServiceMessage()
{
	if (fMessage)
		delete fMessage;
	if (fReply)
		delete fReply;
	
	// Remove from the global async message list
    // The list is located at offset 0x90 of UserGlobals
	CList* list = (CList*)((char*)GetGlobals() + 0x90);
	list->Remove(this);
}

/**
 * Initialize the message
 *
 * Address: 000494e8
 */
NewtonErr TAsyncServiceMessage::Init(TCMService* service)
{
	fService = service;
	
	fAsyncMessage.Init(true);
	
	// Set the collector port to the current task's port
	fAsyncMessage.SetCollectorPort(*TAppWorld::GetMyPort());
	
	// Set the user refcon to some global state (possibly for completion handling)
    // Offset 0x70 of UserGlobals
	fAsyncMessage.SetUserRefCon((ULong)GetGlobals() + 0x70);
	
	// Add to the global async message list
	CList* list = (CList*)((char*)GetGlobals() + 0x90);
	list->Insert(this);
	
	return noErr;
}

/**
 * Send the message
 *
 * Address: 00049550
 */
NewtonErr TAsyncServiceMessage::Send(TUPort* destination, void* message, ULong messageSize, void* reply, ULong replySize, ULong messageType)
{
	fMessage = message;
	fReply = reply;
	
	return destination->SendRPC(&fAsyncMessage, message, messageSize, reply, replySize, kNoTimeout, nil, messageType);
}

/**
 * Match a token against this message
 *
 * Address: 000495c8
 */
Boolean TAsyncServiceMessage::Match(TUMsgToken* token)
{
	return token->GetMsgId() == fAsyncMessage.GetMsgId();
}
