/*
	File:		TKDomain.cpp

	Contains:	Implementation of kernel domain object.

	Copyright:	© 1992-1994 by Apple Computer, Inc., all rights reserved.
*/

#include "TKDomain.h"
#include "OSErrors.h"

// Forward declarations of kernel internal functions
extern "C" long RegisterFaultMonitorByDomainNumber(long domainNumber, TObjectId monitor);
extern "C" long DeregisterFaultMonitorByDomainNumber(long domainNumber);
extern "C" void InitDomainPrimaryTable(long domainNumber, VAddr base, ULong size);
extern "C" void ClearDomainPrimaryTable(VAddr base, ULong size);

/**
 * Symbol: TKDomain::__ct(void)
 * Address: 000af51c
 */
TKDomain::TKDomain()
{
	fFaultMonitor = 0;
	fBase = 0;
	fSize = 0;
	fDomainNumber = -1;
	fFlags = 0;
}

/**
 * Symbol: TKDomain::__dt(void)
 * Address: 000af560
 */
TKDomain::~TKDomain()
{
	if (fDomainNumber != -1) {
		DeregisterFaultMonitorByDomainNumber(fDomainNumber);
		ClearDomainPrimaryTable(fBase, fSize);
		// Removed from MemArchManager by caller or via internal link
	}
}

/**
 * Symbol: TKDomain::Init(unsigned long, unsigned long, unsigned long)
 * Address: 000af0dc
 */
long TKDomain::Init(VAddr base, ULong size, TObjectId monitor)
{
	fBase = base;
	fSize = size;
	
	// Check if range is free via MemArchManager (internal kernel singleton)
	// ...
	
	InitDomainPrimaryTable(fDomainNumber, fBase, fSize);
	return SetFaultMonitor(monitor);
}

/**
 * Symbol: TKDomain::InitWithDomainNumber(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 000af040
 */
long TKDomain::InitWithDomainNumber(long domainNumber, VAddr base, ULong size, TObjectId monitor)
{
	fDomainNumber = domainNumber;
	fBase = base;
	fSize = size;
	
	// range checks...
	
	return SetFaultMonitor(monitor);
}

/**
 * Symbol: TKDomain::SetFaultMonitor(unsigned long)
 * Address: 000af188
 */
long TKDomain::SetFaultMonitor(TObjectId monitor)
{
	fFaultMonitor = monitor;
	if (fDomainNumber != -1 && monitor != (TObjectId)-1) {
		return RegisterFaultMonitorByDomainNumber(fDomainNumber, monitor);
	}
	return noErr;
}

/**
 * Symbol: TKDomain::Intersects(unsigned long, unsigned long)
 * Address: 000af1b0
 */
Boolean TKDomain::Intersects(VAddr addr, ULong size)
{
	// Check if range [addr, addr+size) intersects with [fBase, fBase+fSize)
	if (addr >= fBase + fSize) return false;
	if (addr + size <= fBase) return false;
	return true;
}
