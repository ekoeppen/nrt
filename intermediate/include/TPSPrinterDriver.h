#ifndef __INFERRED_TPSPRINTERDRIVER_H
#define __INFERRED_TPSPRINTERDRIVER_H

class TPSPrinterDriver {
public:
	void CancelJob();
	void Close();
	void ClosePage();
	void Delete();
	void GetStatus();
	void IsProblemResolved();
	void Open();
	void OpenPage();
	void RecvPSText();
	void RepeatPSPage();
	void SendPSBinary();
	void SendPSText();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
