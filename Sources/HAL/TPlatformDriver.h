/*
	File:		TPlatformDriver.h

	Contains:	Abstract base protocol for platform-specific hardware drivers

	Written by:	Newton Research, 1994-1995
				Reverse engineered from MP2x00US.s

	Copyright:	© 1994-1995 by Apple Computer, Inc., all rights reserved.

	Description:
		TPlatformDriver defines the abstract interface for platform-specific
		hardware drivers. Concrete implementations (e.g., TVoyagerPlatform for
		the MessagePad 2000) provide the actual hardware control logic.
		
		This is a PROTOCOL (not a class) using the NewtonOS protocol system,
		which provides dynamic dispatch and late binding.
*/

#ifndef __TPLATFORMDRIVER_H
#define __TPLATFORMDRIVER_H

#ifndef __PROTOCOLS_H
#include "OS600/Protocols.h"
#endif

/*
 * TPlatformDriver - Abstract platform hardware driver protocol
 * 
 * This protocol defines the interface for platform-specific operations:
 *   - Power management (system and subsystem level)
 *   - Power switch interrupt handling
 *   - Backlight control
 *   - Device power-on checks
 *   - PCMCIA power specifications
 *   - Power event translation
 */

PROTOCOL TPlatformDriver : public TProtocol
{
public:
	PROTOCOL_IMPL_HEADER_MACRO(TPlatformDriver);

	// Factory method
	static TPlatformDriver* New(const char* implName);
	
	// Virtual methods (VIRTUAL/ENDVIRTUAL are macros from Protocols.h)
	// On ARM: expand to nothing (ProtocolGen generates dispatch glue)
	// On Mac: expand to "virtual" and "= 0" (pure virtual for development)

	VIRTUAL void Delete(void) ENDVIRTUAL;
	VIRTUAL void Init(void) ENDVIRTUAL;

	// Backlight control
	VIRTUAL void BacklightTrigger(void) ENDVIRTUAL;

	// Power switch interrupt handling
	VIRTUAL void RegisterPowerSwitchInterrupt(void) ENDVIRTUAL;
	VIRTUAL void EnableSysPowerInterrupt(void) ENDVIRTUAL;
	VIRTUAL void InterruptHandler(void) ENDVIRTUAL;
	VIRTUAL void TimerInterruptHandler(void) ENDVIRTUAL;

	// Store integrity check (ZAP = Zero Always Present)
	VIRTUAL void ResetZAPStoreCheck(void) ENDVIRTUAL;

	// Subsystem power management
	VIRTUAL void PowerOnSubsystem(unsigned long subsystem) ENDVIRTUAL;
	VIRTUAL void PowerOffSubsystem(unsigned long subsystem) ENDVIRTUAL;
	VIRTUAL void PowerOffAllSubsystems(void) ENDVIRTUAL;

	// System-level power management
	VIRTUAL void PauseSystem(void) ENDVIRTUAL;
	VIRTUAL void PowerOffSystem(void) ENDVIRTUAL;
	VIRTUAL void PowerOnSystem(void) ENDVIRTUAL;

	// Power event translation
	VIRTUAL unsigned long TranslatePowerEvent(unsigned long event) ENDVIRTUAL;

	// PCMCIA power specifications
	VIRTUAL NewtonErr GetPCMCIAPowerSpec(unsigned long slot, unsigned long* spec) ENDVIRTUAL;

	// Device power checks
	VIRTUAL void PowerOnDeviceCheck(unsigned char device) ENDVIRTUAL;

	// Subsystem power state management
	VIRTUAL NewtonErr SetSubsystemPower(unsigned long subsystem, unsigned long state) ENDVIRTUAL;
	VIRTUAL NewtonErr GetSubsystemPower(unsigned long subsystem, unsigned long* state) ENDVIRTUAL;
};

#endif /* __TPLATFORMDRIVER_H */
