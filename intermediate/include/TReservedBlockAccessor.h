#ifndef __INFERRED_TRESERVEDBLOCKACCESSOR_H
#define __INFERRED_TRESERVEDBLOCKACCESSOR_H

class TReservedBlockAccessor {
public:
	void CalibrationParameters();
	void CheckIfRecoveryIsNeeded();
	void Checksum();
	void ChecksumFlash();
	void CleanUp();
	void CompareAndRebootIfDifferent();
	void CompareFlashAndMemRebootIfDifferent();
	void CompareFlashRebootIfDifferent();
	void CopyFlash();
	void GetBufferForCopy();
	void GetBufferForCopy2();
	void GetEraseRegionSize();
	void Init();
	void InitializeForWrite();
	void MarkBlock0AsValidConfig();
	void MarkBlock1AsValidConfig();
	void MarkBlock1Invalid();
	void MarkStoreAsValid();
	void PatchSize();
	void ReadCalibration();
	void ReadPatch();
	TReservedBlockAccessor();
	void UpdateBlock0FromBlock1();
	void ValidateCalibrationFields();
	void ValidateCalibrationInformation();
	void ValidatePatchCheckSum();
	void WritePatch();

protected:
	long fField4; // Offset: 4
	long fField60; // Offset: 60
	long fField92; // Offset: 92
	long fField148; // Offset: 148
	long fField544; // Offset: 544
	long fField548; // Offset: 548
	long fField552; // Offset: 552
};

#endif
