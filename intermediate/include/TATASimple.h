#ifndef __INFERRED_TATASIMPLE_H
#define __INFERRED_TATASIMPLE_H

class TATASimple {
public:
	void ATASpecific();
	void CheckError();
	void CheckPowerMode();
	void ClassInfo();
	void Delete();
	void DoATALBACommand();
	void DoATARegCommand();
	void Format();
	void GetAttributes();
	void IdentifyDrive();
	void InitDriveParam();
	void Initialize();
	void New();
	void Read();
	void Reset();
	void ResumeService();
	void SetAttributes();
	void SetDeviceControlReg();
	void SetFeatures();
	void SetMultipleMode();
	void SetPowerMode();
	void Sizeof();
	void SuspendService();
	void SwapDriveInfoBytes();
	void SwapShorts();
	void WaitFor();
	void Write();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	char fField34; // Offset: 34
	char fField35; // Offset: 35
	char fField36; // Offset: 36
	char fField37; // Offset: 37
	char fField38; // Offset: 38
	char fField39; // Offset: 39
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
