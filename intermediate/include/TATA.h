#ifndef __INFERRED_TATA_H
#define __INFERRED_TATA_H

class TATA {
public:
	void ATASpecific();
	void CheckPowerMode();
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
	void SuspendService();
	void Write();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
