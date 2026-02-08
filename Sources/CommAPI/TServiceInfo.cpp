/*
	File:		TServiceInfo.cpp

	Contains:	Implementation of TServiceInfo

	Copyright:	© 1992-1995 by Apple Computer, Inc., all rights reserved.

	Derived from v3 internal.
*/

#include "CommAPI/CommManagerInterface.h"

#pragma segment CommAPI

/**
 * Set the port ID for the service.
 * Also sets the flags to indicate the service is identified by a port.
 *
 * Symbol: TServiceInfo::SetPortId(unsigned long)
 * Address: 0006ca84
 */
void TServiceInfo::SetPortId(TObjectId portId)
{
	fFlags = kServiceByPort;
	fPortId = portId;
}

/**
 * Set the service identifier.
 *
 * Symbol: TServiceInfo::SetServiceId(unsigned long)
 * Address: 0006ca94
 */
void TServiceInfo::SetServiceId(ULong serviceId)
{
	fServiceId = serviceId;
}
