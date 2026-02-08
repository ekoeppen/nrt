/*
	File:		AEventHandler.cpp

	Contains:	TAEventHandler implementation

	Copyright:	© 1992-1995 by Apple Computer, Inc., all rights reserved.

	Derived from v18 internal.
*/

#include "UtilityClasses/AEventHandler.h"
#include "OS600/UserGlobals.h"

// Forward declaration of internal AppWorld methods
class TAppWorld {
public:
    static void AEInstallHandler(TAEventHandler* handler);
    static void AERemoveHandler(TAEventHandler* handler);
    static void AEReplyImmed();
};

#pragma segment UtilityClasses

/**
 * TAEventHandler Constructor
 *
 * Address: 00025574
 */
TAEventHandler::TAEventHandler()
{
	fNext = NULL;
	fEventClass = 0;
	fEventID = 0;
	fIdler = NULL;
}

/**
 * TAEventHandler Destructor
 *
 * Address: 000255BC
 */
TAEventHandler::~TAEventHandler()
{
	if (fIdler)
	{
		delete fIdler;
	}
	
	if (fEventClass != 0 && fEventID != 0)
	{
		TAppWorld::AERemoveHandler(this);
	}
}

/**
 * Initialize handler for specified event ID and class.
 *
 * Address: 00025628
 */
NewtonErr TAEventHandler::Init(AEEventID eventID, AEEventClass eventClass)
{
	fEventID = eventID;
	fEventClass = eventClass;
	
	TAppWorld::AEInstallHandler(this);
	
	return noErr;
}

/**
 * Defer reply to the current message.
 *
 * Address: 00025654
 */
void TAEventHandler::DeferReply(void)
{
	// Logic involves GetGlobals() and AppWorld calls in assembly
}

/**
 * Do an immediate reply.
 *
 * Address: 000256E8
 */
NewtonErr TAEventHandler::ReplyImmed(void)
{
	TAppWorld::AEReplyImmed();
	return noErr;
}

/**
 * Initialize idler.
 *
 * Address: 000258A4
 */
NewtonErr TAEventHandler::InitIdler(TTimeout idle, ULong refCon, Boolean start)
{
	if (fIdler)
		delete fIdler;
		
	// TTimerQueue is at GetGlobals() + 100
	TTimerQueue* timerQueue = (TTimerQueue*)((char*)GetGlobals() + 100);
	
	fIdler = new TAEIdleTimer(timerQueue, refCon, this, idle);
	if (fIdler == NULL)
		return (NewtonErr)MemError();
		
	if (start)
	{
		if (!fIdler->Start())
			return -1; // General error
	}
	
	return noErr;
}

/**
 * Start the idle timer.
 *
 * Address: 0002591C
 */
NewtonErr TAEventHandler::StartIdle(void)
{
	if (fIdler)
	{
		if (fIdler->Start())
			return noErr;
	}
	return -1;
}

/**
 * Stop the idle timer.
 *
 * Address: 00025950
 */
NewtonErr TAEventHandler::StopIdle(void)
{
	if (fIdler)
	{
		if (fIdler->Stop())
			return noErr;
	}
	return -1;
}

/**
 * Reset the idle timer.
 *
 * Address: 00025980
 */
NewtonErr TAEventHandler::ResetIdle(void)
{
	if (fIdler)
	{
		if (fIdler->Reset())
			return noErr;
	}
	return -1;
}

/**
 * Reset the idle timer with a new timeout.
 *
 * Address: 000259B4
 */
NewtonErr TAEventHandler::ResetIdle(TTimeout idle)
{
	if (fIdler)
	{
		if (fIdler->Reset(idle))
			return noErr;
	}
	return -1;
}

/**
 * Virtual method stubs
 */
Boolean TAEventHandler::AETestEvent(TAEvent* event) { return true; }
void TAEventHandler::AEHandlerProc(TUMsgToken* token, ULong* size, TAEvent* event) {}
void TAEventHandler::AECompletionProc(TUMsgToken* token, ULong* size, TAEvent* event) {}
void TAEventHandler::IdleProc(TUMsgToken* token, ULong* size, TAEvent* event) {}

/**
 * TAEIdleTimer Constructor
 *
 * Address: 00025C14
 */
TAEIdleTimer::TAEIdleTimer(TTimerQueue* q, ULong refCon, TAEventHandler* handler, TTimeout idle)
	: TTimerElement(q, refCon)
{
	fHandler = handler;
	fIdleTime = idle;
}

/**
 * TAEIdleTimer Timeout
 *
 * Address: 00025C78
 */
void TAEIdleTimer::Timeout(void)
{
	TAEvent event;
	// Construct event and call handler->IdleProc
	ULong size = sizeof(event);
	fHandler->IdleProc(NULL, &size, &event);
}
