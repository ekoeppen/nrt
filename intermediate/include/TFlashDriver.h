#ifndef __INFERRED_TFLASHDRIVER_H
#define __INFERRED_TFLASHDRIVER_H

class TFlashDriver {
public:
	void BeginWrite();
	void CleanUp();
	void CleanUpDriverData();
	void DoneReadingArray();
	void Identify();
	void Init();
	void InitializeDriverData();
	void IsEraseComplete();
	void LockBlock();
	void ReportWriteResult();
	void ResetBlockStatus();
	void StartErase();
	void StartReadingArray();
	void Write();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
