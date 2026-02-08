/*
	File:		UserDomain.cpp

	Contains:	User-space domain object implementation.

	Copyright:	 1992, 1994 by Apple Computer, Inc., all rights reserved.
*/

#include "UserDomain.h"

/**
 * Symbol: TUDomain::Init(unsigned long, unsigned long, unsigned long)
 * Address: 00258918
 */
long TUDomain::Init(TObjectId monitor, VAddr base, ULong size)
{
	struct DomainInitMsg : public ObjectMessage {
		TObjectId	fMonitor;	// Offset 12
		VAddr		fBase;		// Offset 16
		ULong		fSize;		// Offset 20
	} msg;

	msg.fMonitor = monitor;
	msg.fBase = base;
	msg.fSize = size;

	return MakeObject(kObjectDomain, &msg, sizeof(msg));
}

/**
 * Symbol: TUDomain::SetFaultMonitor(unsigned long)
 * Address: 00259384
 */
long TUDomain::SetFaultMonitor(TObjectId monitor)
{
	struct DomainFaultMsg {
		TObjectId	fDomainId;	// Offset 12
		TObjectId	fMonitorId;	// Offset 16
	} msg;

	msg.fDomainId = fId;
	msg.fMonitorId = monitor;

	// Object Type 10? Wait, KernelTypes.h shows:
	// kObjectMonitor = 8, kObjectPhys = 9.
	// intermediate code shows:
	// r1 = 10
	// This might be a specific selector for Domain Manager or similar?
	// Actually, looking at TUDomain::SetFaultMonitor assembly:
	// 2593b0:	e3a0100a 	mov	r1, #10	; 0xa
	// 2593b4:	e5900000 	ldr	r0, [r0]
	// 2593b8:	eb0553d8 	bl	3ae320 <MonitorDispatchSWI>
	// It uses MonitorDispatchSWI with selector 10.
	
	TObjectId domainManagerPort = 0; // Inferred from GetPortSWI usage in other classes
	// The assembly shows:
	// 2593a4:	e59f0014 	ldr	r0, [pc, #14]
	// 2593a8:	e5900000 	ldr	r0, [r0]
	// This usually points to a global port.
	
	return MonitorDispatchSWI(domainManagerPort, 10, &msg);
}
