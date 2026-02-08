/*
	File:		UserMonitor.cpp

	Contains:	User routines for creating and accessing monitors.

	Copyright:	 1992-1994 by Apple Computer, Inc., all rights reserved.
*/

#include "UserMonitor.h"

/**
 * Symbol: TUMonitor::__ct(unsigned long)
 * Address: 0025947c
 */
TUMonitor::TUMonitor(TObjectId id) : TUObject(id)
{
}

/**
 * Symbol: TUMonitor::~TUMonitor(void)
 * Address: 0025957c
 */
TUMonitor::~TUMonitor()
{
	DestroyObject();
}

/**
 * Symbol: TUMonitor::DestroyObject(void)
 * Address: 00259540
 */
void TUMonitor::DestroyObject()
{
	if (fId != 0 && fObjectCreatedByUs) {
		MonitorDispatchSWI(fId, -1, 0); // kSuspendMonitor is -1
	}
	TUObject::DestroyObject();
}

/**
 * Symbol: TUMonitor::CopyObject(unsigned long)
 * Address: 00259500
 */
void TUMonitor::CopyObject(TObjectId id)
{
	if (fId != id) {
		DestroyObject();
		fId = id;
		fObjectCreatedByUs = false;
	}
}

/**
 * Symbol: TUMonitor::CopyObject(TUMonitor const &)
 * Address: 00259538
 */
void TUMonitor::CopyObject(const TUMonitor& copy)
{
	CopyObject(copy.fId);
}

/**
 * Symbol: Init__9TUMonitorFPFPvUlT1_vUlPvT2UcT2T5
 * Address: 002594b4
 */
long TUMonitor::Init(MonitorProcPtr monitorProc, ULong stackSize, void* monitorObject, TObjectId environmentId, Boolean faultMonitor, ULong name, Boolean rebootProtected)
{
	struct MonitorMsg : public ObjectMessage {
		MonitorProcPtr	fMonitorProc;		// Offset 12
		ULong			fStackSize;			// Offset 16
		void*			fMonitorObject;		// Offset 20
		TObjectId		fEnvironmentId;		// Offset 24
		Boolean			fFaultMonitor;		// Offset 28
		Boolean			fRebootProtected;	// Offset 29
		ULong			fName;				// Offset 32
	} msg;

	msg.fMonitorProc = monitorProc;
	msg.fStackSize = stackSize;
	msg.fMonitorObject = monitorObject;
	msg.fEnvironmentId = environmentId;
	msg.fFaultMonitor = faultMonitor;
	msg.fRebootProtected = rebootProtected;
	msg.fName = name;

	return MakeObject(kObjectMonitor, &msg, sizeof(msg));
}
