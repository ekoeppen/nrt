/*
	File:		TSubArrayOption.cpp

	Contains:	Implementation of TSubArrayOption class for CommAPI

	Copyright:	© 1992-1996 by Apple Computer, Inc., all rights reserved.

	Reverse engineered from Newton OS 2.x ROM
*/

#include "CommAPI/OptionArray.h"

/**
 * Constructor for TSubArrayOption
 * 
 * @param size The size of the sub-array data
 * @param count The number of elements in the sub-array
 * 
 * Creates a special TOption that represents a nested TOptionArray.
 * The label is set to 'suba' (0x73756261) and the length is size + 4.
 * The count is stored at offset 12.
 */
TSubArrayOption::TSubArrayOption(ULong size, Long count)
	: TOption(kOptionType)
{
	// Address: 0014b014
	
	// Set label to 'suba' (sub-array marker)
	fLabel = 0x73756261;  // 'suba'
	
	// Length is size + 4 bytes (to account for the structure)
	fLength = size + 4;
	
	// Store count at offset 12 (this + 12)
	*(Long*)((char*)this + 12) = count;
}
