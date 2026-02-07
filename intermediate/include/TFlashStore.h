#ifndef __INFERRED_TFLASHSTORE_H
#define __INFERRED_TFLASHSTORE_H

class TFlashStore {
public:
	void Abort();
	void Add();
	void AddLogEntryToPhysBlock();
	void AddObject();
	void AddToCurrentTransaction();
	void Address();
	void Avail();
	void AverageEraseCount();
	void BasicCopy();
	void BasicRead();
	void BasicWrite();
	void BlockCompacted();
	void BringVirginBlockOnline();
	void CalcAverageEraseCount();
	void CalcXIPObjectSize();
	void CardWPAlertProc();
	void CheckIntegrity();
	void ChooseWorkingBlock();
	void ClassInfo();
	void Deinit();
	void Delete();
	void DeleteObject();
	void DeleteTransactionRecord();
	void DoAbort();
	void DoCommit();
	void DummyBlock();
	void EraseObject();
	void EraseStatus();
	void ExchangeBlock();
	void FindPhysWritable();
	void FindUnusedPhysicalBlock();
	void Format();
	void GC();
	void GetObjectSize();
	void GetRootId();
	void GetStoreSizes();
	void GetXIPObjectInfo();
	void Idle();
	void InSeparateTransaction();
	void InTransaction();
	void Init();
	void InitBlocks();
	void InternalNeedsFormat();
	void InternalStoreSlop();
	void IsErased();
	void IsLocked();
	void IsROM();
	void IsRangeVirgin();
	void IsReadOnly();
	void IsSameStore();
	void IsWriteProtected();
	void LockReadOnly();
	void LockStore();
	void Lookup();
	void LowLevelRecovery();
	void MarkCommitPoint();
	void Mount();
	void NeedsFormat();
	void New();
	void NewObject();
	void NewWithinTransaction();
	void NewXIPObject();
	void NextLSN();
	void NextLogEntry();
	void NextObject();
	void NotifyCompact();
	void ObjectNumberFor();
	void OwnsObject();
	void PSSIDFor();
	void Read();
	void RecoveryCheck();
	void Remove();
	void ReplaceObject();
	void ScanLogForErasures();
	void ScanLogForLogicalBlocks();
	void ScanLogForReservedBlocks();
	void SendAlertMgrWPBitch();
	void SeparatelyAbort();
	void SetBuddy();
	void SetObjectSize();
	void SetStore();
	void SetupForModify();
	void SetupForRead();
	void Sizeof();
	void Sleep();
	void StartErase();
	void StartTransaction();
	void StartTransactionAgainst();
	void StoreCapacity();
	void StoreKind();
	void SyncErase();
	void TouchMe();
	void TransactionState();
	void Translate();
	void UnlockReadOnly();
	void UnlockStore();
	void ValidateIncomingPSSID();
	void VccOff();
	void VccOn();
	void VppOff();
	void VppOn();
	void WaitForEraseDone();
	void Write();
	void Zap();
	void ZapLogEntry();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	char fField21; // Offset: 21
	char fField22; // Offset: 22
	char fField23; // Offset: 23
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	char fField60; // Offset: 60
	char fField61; // Offset: 61
	char fField62; // Offset: 62
	char fField63; // Offset: 63
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField108; // Offset: 108
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField124; // Offset: 124
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	char fField144; // Offset: 144
	char fField145; // Offset: 145
	char fField146; // Offset: 146
	char fField148; // Offset: 148
	char fField149; // Offset: 149
	char fField150; // Offset: 150
	char fField151; // Offset: 151
	long fField160; // Offset: 160
	long fField212; // Offset: 212
	long fField216; // Offset: 216
	char fField228; // Offset: 228
	char fField229; // Offset: 229
	long fField232; // Offset: 232
	long fField236; // Offset: 236
};

#endif
