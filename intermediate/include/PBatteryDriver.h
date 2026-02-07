#ifndef __INFERRED_PBATTERYDRIVER_H
#define __INFERRED_PBATTERYDRIVER_H

class PBatteryDriver {
public:
	void ConvertVoltage();
	void Count();
	void Delete();
	void Init();
	void New();
	void RawStatus();
	void ReadADCVoltage();
	void SetType();
	void ShutDown();
	void StartSleepCharge();
	void Status();
	void WakeUp();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
