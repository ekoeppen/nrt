/*
	File:		TKDomain.h

	Contains:	Kernel-side domain object implementation.

	Copyright:	© 1992-1994 by Apple Computer, Inc., all rights reserved.
*/

#ifndef	__TKDOMAIN_H
#define __TKDOMAIN_H

#ifndef __KERNELTYPES_H
#include "KernelTypes.h"
#endif

class TKDomain
{
	public:
					TKDomain();
					~TKDomain();

		long		Init(VAddr base, ULong size, TObjectId monitor);
		long		InitWithDomainNumber(long domainNumber, VAddr base, ULong size, TObjectId monitor);
		
		long		SetFaultMonitor(TObjectId monitor);
		Boolean		Intersects(VAddr addr, ULong size);

		VAddr		Base() const { return fBase; }
		ULong		Size() const { return fSize; }
		long		DomainNumber() const { return fDomainNumber; }

	protected:
		ULong		fReserved[4];		// Offset 0 (16 bytes)
		TObjectId	fFaultMonitor;		// Offset 16
		VAddr		fBase;				// Offset 20
		ULong		fSize;				// Offset 24
		long		fDomainNumber;		// Offset 28
		ULong		fFlags;				// Offset 32
};

#endif
