/*
	File:		TUDomainManager.cpp

	Contains:	Implementation of user domain manager for NewtonOS

	Copyright:	© 1992-1994 by Apple Computer, Inc., all rights reserved.

	Derived from v14 internal.
*/

#include "TUDomainManager.h"
#include "NameServer.h"		// For TNameServerRequest
#include "KernelTypes.h"	// For kernel SWI calls
#include "OSErrors.h"		// For error codes

#pragma segment OS600

// Constants
enum {
	kDomainManagerSWI = 61,		// Domain manager system call number
	kAllocatePageTable = 0xed,	// Allocate page table error code
	kDomainAlreadyExists = 0xb2	// Domain already exists error code
};

/**
 * Static initialization of domain manager
 */
void TUDomainManager::StaticInit(ULong flags, VAddr param2) {
    TUMonitor::CopyObject((TObjectId)flags);
    TUMonitor::CopyObject(param2);
}

/**
 * Constructor - Initialize domain manager
 */
TUDomainManager::TUDomainManager() {
    if (fId == 0) {
        fId = (TObjectId)::operator new(64);
        if (!fId) return;
    }
    
    fFlags = 0;
    // fDomainBase, fFaultMonitorId, fFaultState, fDomainTable initialized via TUMonitor calls or directly
    fDomainBase = 0;
    fFaultMonitorId = 0;
    fFaultState = 0;
    fDomainTable = 0;
    
    // Parent constructors
    // TUMonitor(0) is called at 2589c4 and 2589d0? 
    // Actually assembly shows two TUMonitor::__ct calls, probably for internal members
}

/**
 * Destructor
 */
TUDomainManager::~TUDomainManager() {
    // Cleanup of internal CList (at offset 40)
    // CList destructor called implicitly
    
    // Explicit cleanup of monitors
    // ...
}

/**
 * Add a new domain with fault monitoring
 */
long TUDomainManager::AddDomain(ULong faultMonitorId) {
    TUDomain tempDomain;
    return tempDomain.SetFaultMonitor(faultMonitorId);
}

/**
 * Add a new domain and return its ID
 */
long TUDomainManager::AddDomain(ULong& domainId, ULong monitorId, ULong flags) {
    if (fFaultMonitorId == 0) {
        return kOSInvalidParameter;
    }
    
    TUDomain newDomain;
    long result = newDomain.Init(monitorId, fDomainBase, flags);
    
    if (result == 0) {
        domainId = (TObjectId)newDomain;
        // In real code, would insert into fDomainList
    }
    return result;
}

/**
 * Physical memory mapping
 */
void TUDomainManager::RememberPhysMapRange(ULong domainId, ULong base, ULong size, ULong perm, ULong physAddr) {
    UChar flags = (UChar)(physAddr & 0xFF);
    VAddr params[5] = { fDomainTable, domainId, base, size, perm };
    
    long result;
    do {
        result = GenericSWI(kDomainManagerSWI, params, flags);
        if (result == (long)kAllocatePageTable) {
            AllocatePageTable();
            result = 0; // retry
        } else {
            break;
        }
    } while (result == 0);
}

void TUDomainManager::ForgetPhysMapRange(ULong domainId, ULong base, ULong size) {
    VAddr params[4] = { fDomainTable, domainId, base, size };
    long result;
    do {
        result = GenericSWI(60, params);
        if (result == (long)kAllocatePageTable) {
            AllocatePageTable();
            result = 0;
        } else {
            break;
        }
    } while (result == 0);
}

void TUDomainManager::RememberPhysMap(ULong domainId, ULong physAddr) {
    ULong mappedAddr = (physAddr & ~0xFFF) | (physAddr & 0xFF ? 1 : 0);
    long result;
    do {
        result = GenericSWI(10, fDomainTable, domainId, mappedAddr);
        if (result == (long)kAllocatePageTable) {
            AllocatePageTable();
            result = 0;
        } else {
            break;
        }
    } while (result == 0);
}

void TUDomainManager::ForgetPhysMap(ULong domainId, ULong physAddr) {
    GenericSWI(7, fDomainTable, domainId, physAddr);
}

void TUDomainManager::RememberPermMap(ULong domainId, ULong base, ULong size, ULong perm) {
    ULong mappedBase = (base >> 12) << 12 | (size & 0xFFF);
    long result;
    do {
        result = GenericSWI(11, fDomainTable, domainId, mappedBase, perm);
        if (result == (long)kAllocatePageTable) {
            AllocatePageTable();
            result = 0;
        } else {
            break;
        }
    } while (result == 0);
}

void TUDomainManager::ForgetPermMap(ULong domainId, ULong base, ULong size) {
    GenericSWI(8, fDomainTable, domainId, base, size);
}

/**
 * Memory management
 */
void TUDomainManager::AllocatePageTable() {
    MonitorDispatchSWI(GetPortSWI(1), 1, &fId);
}

void TUDomainManager::ReleasePageTable() {
    if (GenericSWI(63, fId) == 0) {
        MonitorDispatchSWI(GetPortSWI(1), 2, &fId);
    }
}

void TUDomainManager::CopyPhysPg() {
    GenericSWI(18);
}

/**
 * Fault handling
 */
void TUDomainManager::ReleasePagesForFaultHandling() {
    struct {
        ULong zero;
        ULong p1;
        ULong p2;
    } msg = { 0, 0, 0 }; // Simplified
    MonitorDispatchSWI(GetPortSWI(1), 6, &msg);
}

void TUDomainManager::ReleasePagesFromOtherMonitorsForFaultHandling() {
    struct {
        ULong monitor;
        ULong p1;
        ULong p2;
    } msg = { fFaultMonitorId, 0, 0 };
    MonitorDispatchSWI(GetPortSWI(1), 6, &msg);
}

/**
 * Reference counting
 */
void TUDomainManager::Get() {
    struct {
        ULong p1;
        ULong p2;
        VAddr port;
    } msg;
    // ... setup msg
    MonitorDispatchSWI(GetPortSWI(1), 5, &msg);
}

void TUDomainManager::GetExternal() {
    struct {
        VAddr p1;
        ULong p2;
    } msg;
    MonitorDispatchSWI(GetPortSWI(1), 1, &msg);
}

void TUDomainManager::Release() {
    GenericSWI(17, 0, 0, 0);
}

/**
 * Fault monitoring
 */
void TUDomainManager::RegisterPageMonitor() {
    VAddr param = 0; // Simplified
    MonitorDispatchSWI(GetPortSWI(1), 3, &param);
}

void TUDomainManager::FaultMonProc(long selector, void* userObject) {
    if (selector == -2) {
        fFaultState = 0;
        // ... processor state handling
    } else {
        // Default handling
    }
}

void TUDomainManager::PageMonProc() {
    // Default monitor procedure
}

// Stub for Remember/Forget base-level mapping
void TUDomainManager::Remember(ULong base, ULong size, ULong perm, ULong physAddr, UChar flags) {
    ULong mappedBase = (base >> 12) << 12 | (perm & 0xFF);
    ULong mappedPhys = (physAddr & 0xFF) ? (mappedBase | 0x100) : mappedBase;
    
    long result;
    do {
        result = GenericSWI(12, fDomainTable, mappedPhys, size, flags);
        if (result == (long)kAllocatePageTable) {
            AllocatePageTable();
            result = 0;
        } else {
            break;
        }
    } while (result == 0);
}

void TUDomainManager::Forget(ULong base, ULong size) {
    GenericSWI(9, fDomainTable, base, size);
}

#pragma segment Reset
