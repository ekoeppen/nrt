#ifndef __INFERRED_TSTOREMONITOR_H
#define __INFERRED_TSTOREMONITOR_H

class TStoreMonitor {
public:
	void Abort();
	void AddToCurrentTransaction();
	void CheckIntegrity();
	void Delete();
	void DeleteObject();
	void EraseObject();
	void Format();
	void GetObjectSize();
	void GetRootId();
	void GetStoreSizes();
	void Idle();
	void Init();
	void IsReadOnly();
	void LockReadOnly();
	void LockStore();
	void NeedsFormat();
	void New();
	void NewObject();
	void NewWithinTransaction();
	void NewXIPObject();
	void NextObject();
	void Read();
	void ReplaceObject();
	void SeparatelyAbort();
	void SetObjectSize();
	void StartTransactionAgainst();
	void UnlockReadOnly();
	void UnlockStore();
	void Write();

protected:
};

#endif
