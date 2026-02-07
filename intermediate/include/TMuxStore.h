#ifndef __INFERRED_TMUXSTORE_H
#define __INFERRED_TMUXSTORE_H

class TMuxStore {
public:
	void Abort();
	void Acquire();
	void AddToCurrentTransaction();
	void Address();
	void CalcXIPObjectSize();
	void CheckIntegrity();
	void ClassInfo();
	void Delete();
	void DeleteObject();
	void EraseObject();
	void Format();
	void GetObjectSize();
	void GetRootId();
	void GetStore();
	void GetStoreSizes();
	void GetXIPObjectInfo();
	void Idle();
	void InSeparateTransaction();
	void InTransaction();
	void Init();
	void IsLocked();
	void IsROM();
	void IsReadOnly();
	void IsSameStore();
	void LockReadOnly();
	void LockStore();
	void NeedsFormat();
	void New();
	void NewObject();
	void NewWithinTransaction();
	void NewXIPObject();
	void NextObject();
	void OwnsObject();
	void Read();
	void Release();
	void ReplaceObject();
	void SeparatelyAbort();
	void SetBuddy();
	void SetObjectSize();
	void SetStore();
	void Sizeof();
	void Sleep();
	void StartTransactionAgainst();
	void StoreKind();
	void UnlockReadOnly();
	void UnlockStore();
	void VppOff();
	void Write();

protected:
	long fField4; // Offset: 4
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField1107; // Offset: 1107
};

#endif
