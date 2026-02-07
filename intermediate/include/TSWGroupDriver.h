#ifndef __INFERRED_TSWGROUPDRIVER_H
#define __INFERRED_TSWGROUPDRIVER_H

class TSWGroupDriver {
public:
	void CancelJob();
	void ClassInfo();
	void Close();
	void ClosePage();
	void ConnectToPrinter();
	void ContinueIO();
	void Delete();
	void DoHandleProblem();
	void ErrorIsProblem();
	void FaxEndPage();
	void GetBandPrefs();
	void GetPageInfo();
	void GetPrinterID();
	void GetStatus();
	void ImageBand();
	void InitializeConnection();
	void InitializeFields();
	void IsProblemResolved();
	void Open();
	void OpenPage();
	void PrinterCanPrint();
	void Receive();
	void ReleaseConnection();
	void SendCommand();
	void SendData();
	void SendImmediateCommand();
	void ShiftToHighSpeed();
	void Sizeof();
	void StillPrinting();
	void UpdateFreeBuff();
	void WaitPrinterBuffer();

protected:
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField44; // Offset: 44
	char fField45; // Offset: 45
};

#endif
