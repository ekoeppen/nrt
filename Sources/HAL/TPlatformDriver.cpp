/*
	File:		TPlatformDriver.cpp

	Contains:	Abstract platform driver implementation (dispatch wrappers only)

	Written by:	Newton Research, 1994-1995
				Reverse engineered from MP2x00US.s

	Copyright:	© 1994-1995 by Apple Computer, Inc., all rights reserved.

	Description:
		TPlatformDriver is an abstract protocol. This file contains only the
		factory method implementation. All virtual methods are dispatched via
		the protocol VTable to concrete implementations (e.g., TVoyagerPlatform).
*/

#include "TPlatformDriver.h"

PROTOCOL_IMPL_SOURCE_MACRO(TPlatformDriver);


/*------------------------------------------------------------------------------
	N e w

	Factory method to create a platform driver by name.
	Uses the protocol system to allocate an instance of the requested
	implementation and calls its Init() virtual method.

	Args:		implName		implementation name (e.g., "TVoyagerPlatform")
	Return:		newly created instance, or NULL on failure
------------------------------------------------------------------------------*/

TPlatformDriver*
TPlatformDriver::New(const char* implName)
{
	// Use the protocol system to allocate an instance by name
	TPlatformDriver* driver = (TPlatformDriver*)AllocInstanceByName("TPlatformDriver", implName);
	
	if (driver != NULL)
	{
		// Call the implementation's Init() method
		driver->Init();
	}
	
	return driver;
}


/*------------------------------------------------------------------------------
	D e l e t e

	Destroy a platform driver instance.
	This is a virtual method dispatched to the concrete implementation.
	After calling the implementation's Delete(), free the instance memory.
------------------------------------------------------------------------------*/

void
TPlatformDriver::Delete(void)
{
	// Virtual dispatch handled by protocol system - this is never actually called
	// The actual implementation in TVoyagerPlatform (or other concrete class)
	// will be invoked via the VTable.
}


/*------------------------------------------------------------------------------
	Virtual Method Stubs
	
	All remaining methods are pure virtual and must be implemented by
	concrete subclasses (e.g., TVoyagerPlatform). The protocol system
	handles dispatch automatically via the VTable at offset +8 from the
	TProtocol::fBTable pointer.
	
	The ARM dispatch pattern for each virtual method is:
		ldr    r0, [r0, #4]      ; Load fRealThis
		ldr    ip, [r0, #8]      ; Load fBTable
		add    pc, ip, #OFFSET   ; Jump to method at VTable slot N
------------------------------------------------------------------------------*/

void TPlatformDriver::Init(void) {}
void TPlatformDriver::BacklightTrigger(void) {}
void TPlatformDriver::RegisterPowerSwitchInterrupt(void) {}
void TPlatformDriver::EnableSysPowerInterrupt(void) {}
void TPlatformDriver::InterruptHandler(void) {}
void TPlatformDriver::TimerInterruptHandler(void) {}
void TPlatformDriver::ResetZAPStoreCheck(void) {}
void TPlatformDriver::PowerOnSubsystem(unsigned long) {}
void TPlatformDriver::PowerOffSubsystem(unsigned long) {}
void TPlatformDriver::PowerOffAllSubsystems(void) {}
void TPlatformDriver::PauseSystem(void) {}
void TPlatformDriver::PowerOffSystem(void) {}
void TPlatformDriver::PowerOnSystem(void) {}
unsigned long TPlatformDriver::TranslatePowerEvent(unsigned long) { return 0; }
NewtonErr TPlatformDriver::GetPCMCIAPowerSpec(unsigned long, unsigned long*) { return -1; }
void TPlatformDriver::PowerOnDeviceCheck(unsigned char) {}
NewtonErr TPlatformDriver::SetSubsystemPower(unsigned long, unsigned long) { return -1; }
NewtonErr TPlatformDriver::GetSubsystemPower(unsigned long, unsigned long*) { return -1; }
