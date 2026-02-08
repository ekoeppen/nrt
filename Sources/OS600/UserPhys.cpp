/*
	File:		UserPhys.cpp

	Contains:	User-space physical memory object implementation.

	Copyright:	 1993-1994 by Apple Computer, Inc., all rights reserved.
*/

#include "UserPhys.h"

/**
 * Symbol: TUPhys::Init(unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 0025970c
 */
long TUPhys::Init(PAddr base, ULong size, Boolean readOnly, Boolean cache)
{
	struct PhysInitMsg : public ObjectMessage {
		PAddr	fBase;		// Offset 12
		ULong	fSize;		// Offset 16
		Boolean	fReadOnly;	// Offset 20
		Boolean	fCache;		// Offset 21
		ULong	fReserved;	// Padding/Reserved
	} msg;

	msg.fBase = base;
	msg.fSize = size;
	msg.fReadOnly = readOnly;
	msg.fCache = cache;

	return MakeObject(kObjectPhys, &msg, sizeof(msg));
}

/**
 * Symbol: TUPhys::ReadOnly(unsigned char &)
 * Address: 0025974c
 */
long TUPhys::ReadOnly(Boolean& ro)
{
	long result = GenericSWI(23, fId);
	if (result == -1)
		return -10015;

	ro = (result == 1);
	return 0;
}

/**
 * Symbol: TUPhys::Size(unsigned long &)
 * Address: 00259790
 */
long TUPhys::Size(ULong& sz)
{
	long result = GenericSWI(20, fId);
	if (result == 0)
		return -10015;

	sz = result;
	return 0;
}

/**
 * Symbol: TUPhys::Base(unsigned long &)
 * Address: 002597c4
 */
long TUPhys::Base(PAddr& paddr)
{
	long result = GenericSWI(21, fId);
	if (result == -1)
		return -10015;

	paddr = result;
	return 0;
}

/**
 * Symbol: TUPhys::Align(unsigned long &)
 * Address: 002597f8
 */
long TUPhys::Align(ULong& al)
{
	long result = GenericSWI(22, fId);
	if (result == -1)
		return -10015;

	al = result;
	return 0;
}

long TUPhys::Invalidate()
{
	return GenericSWI(17, fId);
}

long TUPhys::MakeInaccessible()
{
	return GenericSWI(18, fId);
}

long TUPhys::MakeAccessible()
{
	return GenericSWI(19, fId);
}

long TUPhys::ChangeVirtualMapping(VAddr va, ULong vsize, EPhysChangeType access)
{
	return GenericSWI(24, fId, va, vsize, (ULong)access);
}
