#ifndef __INFERRED_TSTACKMANAGER_H
#define __INFERRED_TSTACKMANAGER_H

class TStackManager {
public:
	void AllocNewPage();
	void BuildPerms();
	void CheckRange();
	void CheckRestrictedPage();
	void CopyPageState();
	void CopyPagesAfterStackCollided();
	void CountMatches();
	void FMAddPageMappingToDomain();
	void FMFree();
	void FMFreeHeapRange();
	void FMGetHeapAreaInfo();
	void FMGetSystemReleaseable();
	void FMLockHeapRange();
	void FMNewHeapArea();
	void FMNewHeapDomain();
	void FMNewStack();
	void FMSetHeapLimits();
	void FMSetRemoveRoutine();
	void FMUnlockHeapRange();
	void Fault();
	void FindOrAllocPage_ReturnUnLockedOnNoPage();
	void ForgetMappings();
	void FreeSubPagesAbove();
	void FreeSubPagesBelow();
	void FreeSubPagesBetween();
	void GatherFreePages();
	void GetDomainForAddress();
	void GetMatchingDomain();
	void GetMatchingPage();
	void GetStackInfo();
	void Init();
	void PageMatchFound();
	void ReleasePagesInOneStack();
	void ReleaseRequest();
	void RememberMappings();
	void RemoveOwnerFromPage();
	void ResolveFault();
	void RoundRobinPageRelease();
	void SafeUserRequestEntry();
	void SetRestrictedPage();
	void SetSubPageInfo();
	TStackManager();
	void UnlockSubPagesBetween();
	void UpdatePageState();
	void ValidateHeapLimitsParms();
	~TStackManager();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField64; // Offset: 64
	long fField176; // Offset: 176
	long fField180; // Offset: 180
	char fField192; // Offset: 192
	long fField240; // Offset: 240
	long fField244; // Offset: 244
};

#endif
