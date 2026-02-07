#ifndef __INFERRED_TFLASHBLOCK_H
#define __INFERRED_TFLASHBLOCK_H

class TFlashBlock {
public:
	void AddDirEnt();
	void AddMigDirEnt();
	void AddObject();
	void Avail();
	void BasicWrite();
	void BucketCount();
	void BucketSize();
	void CalcRecoverableBytes();
	void CompactInPlace();
	void CompactInto();
	void ContinueCompact();
	void EndOffset();
	void EraseCount();
	void EraseHeuristic();
	void ExtendDirBucket();
	void Init();
	void IsReserved();
	void IsVirgin();
	void LogEntryOffset();
	void Lookup();
	void NextObject();
	void NextPSSID();
	void ObjectMigrated();
	void PhysBlock();
	void ReadDirEntAt();
	void ReadObjectAt();
	void RealContinueCompact();
	void RootDirEnt();
	void RootDirSize();
	void SetDirEntOffset();
	void SetInfo();
	void StartCompact();
	void UseNextPSSID();
	void WriteRootDirectory();
	void Yield();
	void ZapDirEnt();
	void ZapMigDirEnt();
	void ZapObject();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField21; // Offset: 21
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField36; // Offset: 36
	char fField61; // Offset: 61
	long fField80; // Offset: 80
	long fField88; // Offset: 88
	long fField108; // Offset: 108
	long fField112; // Offset: 112
};

#endif
