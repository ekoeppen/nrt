#ifndef __INFERRED_TADC_H
#define __INFERRED_TADC_H

class TADC {
public:
	void ADCDMAIntrptEntry();
	void ADCTimerIntrptEntry();
	void ClearADCPenWait();
	void Discharge();
	void DumpRegs();
	void FilterSamples();
	void GetSample();
	void Init();
	void InsertionSort();
	void PrimeADCPenWait();
	void ReadSamples();
	void SampleMachine();
	void SetADCMux();
	void SetADCXfer();
	void SetSampleSize();
	void ShutDown();
	void SortThemSamples();
	TADC();
	void TestSetPenWait();
	void UsePolling();
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
	char fField56; // Offset: 56
	char fField57; // Offset: 57
	char fField58; // Offset: 58
	char fField59; // Offset: 59
	char fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
};

#endif
