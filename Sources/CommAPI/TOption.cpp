/*
	File:		TOption.cpp

	Contains:	Implementation of TOption class for CommAPI

	Copyright:	© 1992-1996 by Apple Computer, Inc., all rights reserved.

	Reverse engineered from Newton OS 2.x ROM
*/

#include "CommAPI/OptionArray.h"

/**
 * Constructor for TOption
 * 
 * @param type The option type flag (defaults to kOptionType)
 * 
 * Initializes a TOption with the given type. The fLabel and fLength
 * are set to 0, and fFlags is set to type | 0x100.
 */
TOption::TOption(ULong type)
{
	// Address: 0014aa38
	fLabel = 0;
	fLength = 0;
	fFlags = type | 0x100;  // Set type with bit 8 set
}

/**
 * Reset the option
 * 
 * Clears the processed flag (bit 31), preserves type bits,
 * and clears the opcode result bits (low 8 bits).
 */
void TOption::Reset()
{
	// Address: 0014aa78
	// Clear bit 31 (processed flag) and low 8 bits (opcode result)
	fFlags &= ~(kProcessedFlagMask | kOpCodeResultMask);
}

/**
 * Set option as a service with the specified service ID
 * 
 * @param serviceId The service identifier to set
 */
void TOption::SetAsService(ULong serviceId)
{
	// Address: 0014ad04
	fLabel = serviceId;
	SetAsService();
}

/**
 * Set the service type flag
 * 
 * Sets the type bits in fFlags to indicate this is a service type option.
 */
void TOption::SetAsService()
{
	// Address: 0014afc8
	fFlags = (fFlags & ~kTypeMask) | kServiceType;
}

/**
 * Set option as an option type with the specified option ID
 * 
 * @param optionId The option identifier to set
 */
void TOption::SetAsOption(ULong optionId)
{
	// Address: 0014b250
	fLabel = optionId;
	fFlags = (fFlags & ~kTypeMask) | kOptionType;
}

/**
 * Set option as a configuration type with the specified config ID
 * 
 * @param configId The configuration identifier to set
 */
void TOption::SetAsConfig(ULong configId)
{
	// Address: 0014b844
	fLabel = configId;
	fFlags = (fFlags & ~kTypeMask) | kConfigType;
}

/**
 * Set option as an address type with the specified address ID
 * 
 * @param addrId The address identifier to set
 */
void TOption::SetAsAddress(ULong addrId)
{
	// Address: 0014b944
	fLabel = addrId;
	fFlags = (fFlags & ~kTypeMask) | kAddressType;
}

/**
 * Copy data from another TOption
 * 
 * @param source The source TOption to copy from
 * @return noErr if successful, kOSErrMessageTooBig if dest too small,
 *         kOSErrMessageTooSmall if source too big
 * 
 * Copies up to fLength bytes from the source option's data area
 * (starting 12 bytes after the option header) to this option's data area.
 */
NewtonErr TOption::CopyDataFrom(TOption* source)
{
	// Address: 0014b95c
	NewtonErr result = noErr;
	Size copySize;
	
	// Source and dest start 12 bytes in (after fLabel, fLength, fFlags)
	void* srcData = (void*)((char*)source + 12);
	void* dstData = (void*)((char*)this + 12);
	
	Size srcLen = source->fLength;
	Size dstLen = this->fLength;
	
	// Determine how much to copy and set error code
	if (srcLen > dstLen) {
		copySize = dstLen;
		result = kOSErrMessageTooBig;  // -7
	} else {
		copySize = srcLen;
		if (dstLen > srcLen) {
			result = kOSErrMessageTooSmall;  // -8
		}
	}
	
	// Copy the data
	BlockMove(srcData, dstData, copySize);
	
	return result;
}
