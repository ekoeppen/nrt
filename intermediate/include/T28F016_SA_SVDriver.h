#ifndef __INFERRED_T28F016_SA_SVDRIVER_H
#define __INFERRED_T28F016_SA_SVDRIVER_H

class T28F016_SA_SVDriver {
public:
	void BeginWrite();
	void ClassInfo();
	void CleanErrorStatus();
	void CleanUp();
	void CleanUpDriverData();
	void DoneReadingArray();
	void Identify();
	void Init();
	void InitializeDriverData();
	void IsEraseComplete();
	void IssueCommonBlockCommand();
	void LockBlock();
	void ReportWriteEraseStatus();
	void ReportWriteResult();
	void ResetBlockStatus();
	void Sizeof();
	void StartErase();
	void StartLoadingPageBuffer();
	void StartReadingArray();
	void WaitForBlockQueue();
	void WaitForDeviceWSMReady();
	void WaitForQueueAndPageBuffer();
	void WaitForStatus();
	void Write();

protected:
	char fField29; // Offset: 29
};

#endif
