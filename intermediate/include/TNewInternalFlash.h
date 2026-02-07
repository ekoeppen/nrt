#ifndef __INFERRED_TNEWINTERNALFLASH_H
#define __INFERRED_TNEWINTERNALFLASH_H

class TNewInternalFlash {
public:
	void AcknowledgeReset();
	void AddFlashRange();
	void AlignAndMapVMRange();
	void AllocateReservedBlockRange();
	void AvoidConflictWithRexInIOSpace();
	void CheckEraseCompletion();
	void CheckFor1LaneFlash();
	void CheckFor2LaneFlash();
	void CheckFor4LaneFlash();
	void ClassInfo();
	void CleanUp();
	void Clobber();
	void ConfigureFlashBank();
	void ConfigureIOBank();
	void ConfigureNot32BitFlashBank();
	void Copy();
	void CopyUsingBuffer();
	void DeepSleep();
	void Delete();
	void Erase();
	void FindDriverAble();
	void FindRange();
	void FlashAllowedLocations();
	void FlashSpecific();
	void GatherBlockMappingInfo();
	void GetAttributes();
	void GetBlocksPerPartition();
	void GetChipsPerGroup();
	void GetDataOffset();
	void GetEraseRegionCurrent();
	void GetEraseRegionSize();
	void GetEraseRegionTime();
	void GetGroupSize();
	void GetMaxConcurrentVppOps();
	void GetPhysResource();
	void GetReadAccessTime();
	void GetSocketNumber();
	void GetTotalSize();
	void GetVendorInfo();
	void GetWriteAccessTime();
	void GetWriteErrorAddress();
	void GetWriteProtected();
	void GetWriteRegionCurrent();
	void Init();
	void InitForReservedBlock();
	void Initialize();
	void InitializeState();
	void InternalCheckEraseCompletion();
	void InternalClobber();
	void InternalInit();
	void IsVirgin();
	void New();
	void Read();
	void ReadPhysical();
	void ReadWrite();
	void ReadWritePhysical();
	void RegisterClientInfo();
	void ResetCard();
	void ResumeErase();
	void ResumeService();
	void SearchForFlashDrivers();
	void SetupVirtualMappings();
	void Sizeof();
	void Status();
	void SuspendErase();
	void SuspendService();
	void SyncErasePhysicalBlock();
	void TurnPowerOff();
	void TurnPowerOn();
	void VppRisingTime();
	void VppStatus();
	void Wakeup();
	void Write();
	void WritePhysical();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField56; // Offset: 56
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	char fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
	long fField104; // Offset: 104
};

#endif
