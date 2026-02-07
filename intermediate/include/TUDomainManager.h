#ifndef __INFERRED_TUDOMAINMANAGER_H
#define __INFERRED_TUDOMAINMANAGER_H

class TUDomainManager {
public:
	void AddDomain();
	void AllocatePageTable();
	void CopyPhysPg();
	void FaultMonProc();
	void Forget();
	void ForgetPermMap();
	void ForgetPhysMap();
	void ForgetPhysMapRange();
	void Get();
	void GetExternal();
	void Init();
	void PageMonProc();
	void RegisterPageMonitor();
	void Release();
	void ReleasePageTable();
	void ReleasePagesForFaultHandling();
	void ReleasePagesFromOtherMonitorsForFaultHandling();
	void Remember();
	void RememberPermMap();
	void RememberPhysMap();
	void RememberPhysMapRange();
	void StaticInit();
	TUDomainManager();
	~TUDomainManager();

protected:
	char fField4; // Offset: 4
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	char fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
