#ifndef __INFERRED_THPPCL_H
#define __INFERRED_THPPCL_H

class ThpPCL {
public:
	void CancelJob();
	void ClassInfo();
	void Close();
	void ClosePage();
	void ContinueIO();
	void Delete();
	void DoHandleProblem();
	void ErrorIsProblem();
	void FaxEndPage();
	void GetBandPrefs();
	void GetPageInfo();
	void GetStatus();
	void ImageBand();
	void InitializeConnection();
	void InitializeFields();
	void IsProblemResolved();
	void Open();
	void OpenPage();
	void PrinterCanPrint();
	void ReleaseConnection();
	void SendCommand();
	void SendData();
	void Sizeof();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	char fField34; // Offset: 34
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField512; // Offset: 512
	long fField3072; // Offset: 3072
};

#endif
