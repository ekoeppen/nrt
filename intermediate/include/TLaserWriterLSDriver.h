#ifndef __INFERRED_TLASERWRITERLSDRIVER_H
#define __INFERRED_TLASERWRITERLSDRIVER_H

class TLaserWriterLSDriver {
public:
	void BlinkLED();
	void BreakOccurred();
	void CancelJob();
	void CassettePaperMatches();
	void CheckMisprint();
	void CheckSumData();
	void ClassInfo();
	void CleanupPrinter();
	void ClearState();
	void Close();
	void ClosePage();
	void ConnectToPrinter();
	void ContinueIO();
	void ContinueRendering();
	void Delete();
	void DoGetControllerStatus();
	void DoHandleProblem();
	void DoSend();
	void DoorOpen();
	void ErrorIsFatal();
	void ErrorIsProblem();
	void ExtinguishLEDs();
	void FaxEndPage();
	void FlushBuffer();
	void ForceLEDs();
	void GetBandPrefs();
	void GetControllerStatus();
	void GetEngineRegister();
	void GetExceptionStatus();
	void GetMinimalStatus();
	void GetPageInfo();
	void GetStatus();
	void GetStatusRegister0();
	void GetStatusRegister1();
	void GetStatusRegister18();
	void GetStatusRegister2();
	void GetStatusRegister21();
	void GetStatusRegister3();
	void ImageBand();
	void InitializeConnection();
	void InitializeFields();
	void IsProblemResolved();
	void Jammed();
	void LightLEDs();
	void NoPaperTray();
	void Open();
	void OpenPage();
	void OutOfPaper();
	void PreparePrinter();
	void PrintPage();
	void PrinterBufferHasRoom();
	void PrinterCanPrint();
	void ProblemIsFatal();
	void ProcessPrinterBreak();
	void Receive();
	void ReleaseConnection();
	void Reprint();
	void ResetBuffer();
	void ResetPrinter();
	void ScanlineLoop();
	void SelectCassette();
	void SelectPaperSource();
	void SelectTray();
	void Send();
	void SendBlankLines();
	void SendCommand();
	void SendData();
	void SendEndOfPage();
	void SetLeftMargin();
	void SetPaperSize();
	void SetScanlineWidth();
	void SetSoftError();
	void SetState();
	void SetTopMargin();
	void Sizeof();
	void TestAndProcessPrinterBreak();
	void TestForPrinterBreak();
	void WaitForPage();
	void WrongPaperTray();

protected:
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	char fField34; // Offset: 34
	long fField36; // Offset: 36
	long fField360; // Offset: 360
	long fField372; // Offset: 372
	char fField376; // Offset: 376
	char fField377; // Offset: 377
	long fField380; // Offset: 380
	char fField381; // Offset: 381
	long fField382; // Offset: 382
	char fField383; // Offset: 383
	long fField384; // Offset: 384
	char fField385; // Offset: 385
	long fField386; // Offset: 386
	char fField387; // Offset: 387
	char fField617; // Offset: 617
};

#endif
