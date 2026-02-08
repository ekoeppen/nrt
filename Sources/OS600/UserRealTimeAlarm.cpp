/*
	File:		UserRealTimeAlarm.cpp

	Contains:	User-space real-time alarm implementation.

	Copyright:	 1992-1994 by Apple Computer, Inc., all rights reserved.
*/

#include "LongTime.h"
#include "UserGlobals.h"

// Forward declarations for kernel bridges
extern "C" long RealTimeClockDispatch(void);
extern "C" Boolean IsSuperMode(void);

/**
 * Symbol: SetAlarm__15TURealTimeAlarmSFUl5TTimeN21PvlT1
 * Address: 0019c6b8
 */
long TURealTimeAlarm::SetAlarm(ULong name, TTime time, InterruptHandler DirectHandler, void* obj, ULong WakeUp, ULong IsRelative)
{
	STaskSwitchedGlobals* globals = TaskSwitchedGlobals();
	SKernelParams* params = &globals->fKernelParams;
	
	// Message layout for RealTimeClockDispatch/SWI 43
	// Offset 0: selector (0 for SetAlarm)
	// Offset 4: name
	// Offset 8: time (8 bytes)
	// Offset 16: DirectHandler
	// Offset 20: obj
	// Offset 24: WakeUp
	// Offset 28: IsRelative
	
	params->fParams[0] = 0; // SetAlarm selector
	params->fParams[1] = name;
	*(TTime*)&params->fParams[2] = time;
	params->fParams[4] = (ULong)DirectHandler;
	params->fParams[5] = (ULong)obj;
	params->fParams[6] = WakeUp;
	params->fParams[7] = IsRelative;

	if (IsSuperMode()) {
		return RealTimeClockDispatch();
	} else {
		return GenericSWI(43, 0); // SWI 43 uses the kernel params in globals
	}
}

/**
 * Symbol: ClearAlarm__15TURealTimeAlarmSFUl
 * Address: 0019c824
 */
long TURealTimeAlarm::ClearAlarm(ULong name)
{
	STaskSwitchedGlobals* globals = TaskSwitchedGlobals();
	SKernelParams* params = &globals->fKernelParams;

	params->fParams[0] = 2; // ClearAlarm selector
	params->fParams[1] = name;

	if (IsSuperMode()) {
		return RealTimeClockDispatch();
	} else {
		return GenericSWI(43, 0);
	}
}
