/*
	File:		TOptionExtended.cpp

	Contains:	Implementation of TOptionExtended class for CommAPI

	Copyright:	© 1992-1996 by Apple Computer, Inc., all rights reserved.

	Reverse engineered from Newton OS 2.x ROM
*/

#include "CommAPI/OptionArray.h"

/**
 * Constructor for TOptionExtended
 * 
 * @param type The option type flag (defaults to kOptionType)
 * 
 * Extends TOption with additional fields for service-specific options
 * and extended result codes.
 */
TOptionExtended::TOptionExtended(ULong type)
	: TOption(type)
{
	// Address: 0014b9ac
	fServiceLabel = 0;
	fExtendedResult = 0;
}

/**
 * Set as service-specific option
 * 
 * @param service The service identifier
 * 
 * Sets this option to be service-specific, associated with
 * the given service identifier.
 */
void TOptionExtended::SetAsServiceSpecific(ULong service)
{
	// Address: 0014b92c
	fFlags = (fFlags & ~kTypeMask) | kServiceSpecificType;
	fServiceLabel = service;
}
