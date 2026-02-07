#ifndef __INFERRED_TFLASHRANGE_H
#define __INFERRED_TFLASHRANGE_H

class TFlashRange {
public:
	void Delete();
	void DoneReadingArray();
	void EarlyPrepareForReadingArray();
	void EraseRange();
	void FlushDataCache();
	void IsEraseComplete();
	void IsVirgin();
	void LockBlock();
	void Read();
	void ResetAllBlocksStatus();
	void StartErase();
	void StartOfBlockFlashAddress();
	void StartReadingArray();
	void SyncErase();
	TFlashRange();
	void Write();
	~TFlashRange();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField48; // Offset: 48
	long fField60; // Offset: 60
	long fField68; // Offset: 68
	long fField72; // Offset: 72
};

#endif
