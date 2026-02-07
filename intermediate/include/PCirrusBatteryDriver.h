#ifndef __INFERRED_PCIRRUSBATTERYDRIVER_H
#define __INFERRED_PCIRRUSBATTERYDRIVER_H

class PCirrusBatteryDriver {
public:
	void AdapterInHandler();
	void AdapterInstalled();
	void AdaptorStatusMessage();
	void BatteryHandler();
	void BatteryLevel();
	void BatteryStatusMessage();
	void BatteryType();
	void BatteryTypeSense();
	void BeginTrickleCharge();
	void Charge();
	void ChargeCycle();
	void ChargeHandler();
	void ChargeInterrupt();
	void ChargeOff();
	void ChargeOffHandler();
	void ChargeOn();
	void ClassInfo();
	void ConvertTemperature();
	void ConvertVoltage();
	void Count();
	void Delete();
	void EnableBattAdaptInterrupts();
	void FastCharge();
	void FastChargeCont();
	void FastOrTrickle();
	void Init();
	void New();
	void NiMHInstalled();
	void PreliminaryCharge();
	void PreliminaryChargeTestIfDone();
	void PreliminaryOrFast();
	void PrimeChargeCycleTime();
	void RawStatus();
	void ReadADCVoltage();
	void ReadVoltage();
	void ReturnStatus();
	void SampleResult();
	void SetType();
	void ShutDown();
	void Sizeof();
	void StartBatteryCharge();
	void StartSleepCharge();
	void Status();
	void StopBatteryCharge();
	void TrickleCharge();
	void TrickleChargeCont();
	void WakeUp();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	char fField88; // Offset: 88
	char fField89; // Offset: 89
	char fField90; // Offset: 90
	char fField91; // Offset: 91
	long fField92; // Offset: 92
	char fField96; // Offset: 96
	long fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField108; // Offset: 108
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField124; // Offset: 124
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	long fField144; // Offset: 144
	long fField148; // Offset: 148
	long fField152; // Offset: 152
	long fField356; // Offset: 356
};

#endif
