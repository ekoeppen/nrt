/*
	File:		TEndpointEventHandler.cpp

	Contains:	TEndpointEventHandler implementation

	Copyright:	© 1992-1995 by Apple Computer, Inc., all rights reserved.

	Derived from v18 internal.
*/

#include "CommAPI/Endpoint.h"
#include "UtilityClasses/AEventHandler.h"

// TPseudoSyncState for synchronous behavior in asynchronous environment
class TPseudoSyncState {
public:
    TPseudoSyncState();
    ~TPseudoSyncState();
    void Init();
    NewtonErr Block(ULong timeout);
    void Unblock();
    
private:
    ULong fField0;
    ULong fField4;
};

#pragma segment CommAPI

/**
 * Constructor
 *
 * Address: 000acc9c
 */
TEndpointEventHandler::TEndpointEventHandler(TEndpoint* endpoint, Boolean useForks)
    : TAEventHandler()
{
	fEndpoint = endpoint;
	fServicePort.fId = 0;
	fServicePort.fObjectCreatedByUs = false;
	fSyncState.Init();
	
	fBlocking = false;
	fAborted = false;
	fUseForks = useForks;
}

/**
 * Destructor
 *
 * Address: 000ac678
 */
TEndpointEventHandler::~TEndpointEventHandler()
{
	// TAEventHandler destructor handles list removal
}

/**
 * Initialize
 *
 * Address: 000ac6d0
 */
NewtonErr TEndpointEventHandler::Init(TObjectId id, AEEventID eventID, AEEventClass eventClass)
{
	NewtonErr err = TAEventHandler::Init(eventID, eventClass);
	if (err == noErr)
	{
		fServicePort.CopyObject(id);
		fSyncState.Init();
	}
	return err;
}

/**
 * Use forks?
 *
 * Address: 000ac9c4
 */
Boolean TEndpointEventHandler::UseForks(Boolean useForks)
{
	Boolean old = fUseForks;
	fUseForks = useForks;
	return old;
}

/**
 * Block for synchronous call
 *
 * Address: 000ac9cc
 */
NewtonErr TEndpointEventHandler::Block(ULong timeout)
{
	if (fBlocking)
		return -8018; // Already blocking error
		
	fBlocking = true;
	NewtonErr err = fSyncState.Block(timeout);
	fBlocking = false;
	
	if (err == noErr && fAborted)
	{
		fAborted = false;
		return -10441; // Aborted error
	}
	
	return err;
}

/**
 * Unblock after synchronous call
 *
 * Address: 000aca28
 */
void TEndpointEventHandler::Unblock(void)
{
	if (fBlocking)
		fSyncState.Unblock();
}

/**
 * Get the service port ID
 *
 * Address: 000acae0
 */
TObjectId TEndpointEventHandler::GetServicePortId(void)
{
	return fServicePort.fId;
}

/**
 * Add to AppWorld
 *
 * Address: 000acae8
 */
NewtonErr TEndpointEventHandler::AddToAppWorld(void)
{
    // Implementation calls TAppWorld::AEInstallHandler(fEndpoint)
	return noErr;
}

/**
 * Remove from AppWorld
 *
 * Address: 000acaf0
 */
NewtonErr TEndpointEventHandler::RemoveFromAppWorld(void)
{
    // Implementation calls TAppWorld::AERemoveHandler(fEndpoint)
	return noErr;
}

/**
 * Abort all pending operations
 *
 * Address: 000acafc
 */
void TEndpointEventHandler::Abort(void)
{
	fAborted = true;
	// Logic to send abort message to the service
}

/**
 * Handle completing messages
 *
 * Address: 000acad8
 */
void TEndpointEventHandler::AECompletionProc(TUMsgToken* token, ULong* size, TAEvent* event)
{
	// Check if this completion belongs to us and unblock if necessary
}

/**
 * Handle incoming events
 *
 * Address: 000aca54
 */
void TEndpointEventHandler::AEHandlerProc(TUMsgToken* token, ULong* size, TAEvent* event)
{
	// Check if we should abort on receiving 'abrt' event
	if (fUseForks && event->fType == 'abrt')
	{
		Abort();
		return;
	}
	
	// Process incoming service events through the endpoint
	TAppWorld* appWorld = GetGlobals();
	ULong msgType = appWorld->AEGetMsgType();
	fEndpoint->HandleEvent(msgType, event, size);
	
	// Handle reply if needed
	if (token && token->fReplyMemId != 0)
	{
		// Reply logic
	}
}

/**
 * Test if event is for this handler
 *
 * Address: 000aca3c
 */
Boolean TEndpointEventHandler::AETestEvent(TAEvent* event)
{
	// Test if the event's owner matches our endpoint
	return (event->fOwner == this);
}

/**
 * Idle process
 *
 * Address: 000acc34
 */
void TEndpointEventHandler::IdleProc(TUMsgToken* token, ULong* size, TAEvent* event)
{
	// Default idler behavior
}
