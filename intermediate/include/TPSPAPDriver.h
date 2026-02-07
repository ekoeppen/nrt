#ifndef __INFERRED_TPSPAPDRIVER_H
#define __INFERRED_TPSPAPDRIVER_H

class TPSPAPDriver {
public:
	void CancelJob();
	void ClassInfo();
	void Close();
	void ClosePage();
	void Delete();
	void GetPAPStatus();
	void GetStatus();
	void InterpretPAPStatusString();
	void InterpretPAPString();
	void IsProblemResolved();
	void Open();
	void OpenPage();
	void RecvPSText();
	void RepeatPSPage();
	void SendPSBinary();
	void SendPSText();
	void Sizeof();

protected:
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	char fField39; // Offset: 39
	char fField548; // Offset: 548
	char fField549; // Offset: 549
	long fField581; // Offset: 581
	char fField848; // Offset: 848
};

#endif
