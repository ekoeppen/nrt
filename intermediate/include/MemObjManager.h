#ifndef __INFERRED_MEMOBJMANAGER_H
#define __INFERRED_MEMOBJMANAGER_H

class MemObjManager {
public:
	void CopyObject();
	void DeregisterPersistentEntry();
	void EntryLocByIndex();
	void EntryLocByName();
	void FindDomainId();
	void FindEntryByIndex();
	void FindEntryByName();
	void FindEnvironmentId();
	void FindHeapRef();
	void GetDomainInfo();
	void GetDomainInfoByName();
	void GetEnvDomainName();
	void GetEnvironmentInfo();
	void GetPersistentRef();
	void PrimGetDomainInfo();
	void PrimGetDomainInfoByName();
	void PrimGetEntryByIndex();
	void PrimGetEntryByName();
	void PrimGetEnvDomainName();
	void PrimGetEnvironmentInfo();
	void PrimSetEntryByIndex();
	void PrimSetEntryByName();
	void RegisterDomainId();
	void RegisterEntryByName();
	void RegisterEnvironmentId();
	void RegisterHeapRef();
	void RegisterPersistentNewEntry();

protected:
};

#endif
