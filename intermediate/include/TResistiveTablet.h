#ifndef __INFERRED_TRESISTIVETABLET_H
#define __INFERRED_TRESISTIVETABLET_H

class TResistiveTablet {
public:
	void ClassInfo();
	void ConvertSample();
	void D2Detect();
	void Delete();
	void DoACMODInterrupt();
	void DumpRegs();
	void EnablePenDownInt();
	void ErrorPenUp();
	void GetFingerInputState();
	void GetSampleRate();
	void GetTabletCalibration();
	void GetTabletResolution();
	void GetTabletState();
	void HandleSample();
	void Init();
	void New();
	void PenUp();
	void RecalibrateTabletAfterRotate();
	void ReturnTabletToConsciousness();
	void SampleResult();
	void SetDoingCalibration();
	void SetFingerInputState();
	void SetNextState();
	void SetNextTime();
	void SetSampleRate();
	void SetTabletCalibration();
	void SetUpTabTimer();
	void ShutDown();
	void Sizeof();
	void StartBypassTablet();
	void StopBypassTablet();
	void TabPenEntry();
	void TabSetOrientation();
	void TabletIdle();
	void TabletNeedsRecalibration();
	void WakeUp();

protected:
	long fField4; // Offset: 4
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField44; // Offset: 44
	char fField45; // Offset: 45
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField100; // Offset: 100
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	char fField124; // Offset: 124
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	char fField144; // Offset: 144
	char fField145; // Offset: 145
	long fField148; // Offset: 148
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	long fField160; // Offset: 160
	long fField164; // Offset: 164
	long fField168; // Offset: 168
	long fField172; // Offset: 172
	long fField176; // Offset: 176
	long fField312; // Offset: 312
};

#endif
