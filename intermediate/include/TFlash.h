#ifndef __INFERRED_TFLASH_H
#define __INFERRED_TFLASH_H

class TFlash {
public:
	void AcknowledgeReset();
	void Copy();
	void DeepSleep();
	void Delete();
	void Erase();
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
	void Initialize();
	void IsVirgin();
	void New();
	void Read();
	void RegisterClientInfo();
	void ResetCard();
	void ResumeErase();
	void ResumeService();
	void Status();
	void SuspendErase();
	void SuspendService();
	void VppRisingTime();
	void VppStatus();
	void Wakeup();
	void Write();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
