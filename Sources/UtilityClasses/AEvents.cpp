/*
	File:		AEvents.cpp

	Contains:	TAEvent implementation

	Copyright:	© 1992-1996 by Apple Computer, Inc., all rights reserved.

	Derived from v26 internal.
*/

#include "UtilityClasses/AEvents.h"

#pragma segment UtilityClasses

/**
 * TAEvent Constructor
 * Sets the default event class to 'newt'.
 *
 * Address: 00025d1c
 */
TAEvent::TAEvent()
{
	fAEventClass = kNewtEventClass;
	fAEventID = 0;
}

/**
 * TAESystemEvent Constructor (default)
 *
 * Address: 00025d50
 */
TAESystemEvent::TAESystemEvent()
{
	fAEventID = kAESystemEventID;
	fSysEventType = 0;
}

/**
 * TAESystemEvent Constructor (with type)
 *
 * Address: 00025d98
 */
TAESystemEvent::TAESystemEvent(ULong type)
{
	fAEventID = kAESystemEventID;
	fSysEventType = type;
}

/**
 * TPowerEvent Constructor (default)
 */
TPowerEvent::TPowerEvent()
{
	fSysEventType = 0; // Set by parent
	fReason = 0;
}

/**
 * TPowerEvent Constructor (with type and reason)
 */
TPowerEvent::TPowerEvent(ULong type, ULong reason) : TAESystemEvent(type)
{
	fReason = reason;
}
