#ifndef __INFERRED_TFLASHAMD_H
#define __INFERRED_TFLASHAMD_H

class TFlashAMD {
public:
	void AcknowledgeReset();
	void CheckMode();
	void CheckStatus();
	void CheckWriteProtected();
	void ChipIsReady();
	void ChipReadID();
	void ChipSendCommand();
	void ChipSendCommandByte();
	void ChipWaitReady();
	void ClassInfo();
	void Copy();
	void DeepSleep();
	void Delete();
	void DoErase();
	void DoWrite();
	void EnterFlashOperation();
	void Erase();
	void ExitFlashOperation();
	void FlashSpecific();
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
	void IdentifyCard();
	void Initialize();
	void IsVirgin();
	void New();
	void Read();
	void RegisterClientInfo();
	void ResetCard();
	void ResumeErase();
	void ResumeService();
	void Sizeof();
	void Status();
	void SuspendErase();
	void SuspendService();
	void VppRisingTime();
	void VppStatus();
	void Wakeup();
	void Write();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	char fField40; // Offset: 40
	char fField41; // Offset: 41
	char fField42; // Offset: 42
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField1094; // Offset: 1094
};

#endif
