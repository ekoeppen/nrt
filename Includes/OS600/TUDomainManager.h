/*
	File:		TUDomainManager.h

	Contains:	User domain manager for managing memory domains and page fault handling

	Copyright:	© 1992-1994 by Apple Computer, Inc., all rights reserved.

	Derived from v14 internal.
*/

#ifndef	__USERDOMAINMANAGER_H
#define __USERDOMAINMANAGER_H

#ifndef __NEWTON_H
#include "Newton.h"
#endif	//__NEWTON_H

#ifndef	__USEROBJECTS_H
#include "UserObjects.h"
#endif	//__USEROBJECTS_H

#include "UserMonitor.h"
#include "UserDomain.h"

class TUDomainManager : public TUMonitor
{
	public:
		// Constructor/Destructor
		TUDomainManager();
		~TUDomainManager();

		// Static initialization
		void StaticInit(ULong flags, VAddr param2);

		// Domain management
		long AddDomain(ULong faultMonitorId);
		long AddDomain(ULong& domainId, ULong monitorId, ULong flags);
		
		// Memory management
		void AllocatePageTable();
		void ReleasePageTable();
		void CopyPhysPg();
		
		// Fault monitoring
		void RegisterPageMonitor();
		void FaultMonProc(long selector, void* userObject);
		void PageMonProc();
		
		// Physical memory mapping
		void Remember(ULong base, ULong size, ULong perm, ULong physAddr, UChar flags);
		void Forget(ULong base, ULong size);
		void RememberPhysMap(ULong domainId, ULong physAddr);
		void ForgetPhysMap(ULong domainId, ULong physAddr);
		void RememberPhysMapRange(ULong domainId, ULong base, ULong size, ULong perm, ULong physAddr);
		void ForgetPhysMapRange(ULong domainId, ULong base, ULong size);
		void RememberPermMap(ULong domainId, ULong base, ULong size, ULong perm);
		void ForgetPermMap(ULong domainId, ULong base, ULong size);
		
		// Reference counting
		void Get();
		void GetExternal();
		void Release();
		
		// Fault handling
		void ReleasePagesForFaultHandling();
		void ReleasePagesFromOtherMonitorsForFaultHandling();

	private:
		// Domain table and state management
		VAddr		fDomainTable;		// Offset: 36 - Domain table pointer
		VAddr		fDomainBase;		// Offset: 16 - Base address of domain space
		ULong		fFaultMonitorId;	// Offset: 24 - ID of fault monitoring domain
		ULong		fFaultState;		// Offset: 32 - Current fault processing state
		UChar		fFlags;				// Offset: 4  - Domain manager flags
};

#endif /* __USERDOMAINMANAGER_H */