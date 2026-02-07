#ifndef __INFERRED_TSERIALDMAENGINE_H
#define __INFERRED_TSERIALDMAENGINE_H

class TSerialDMAEngine {
public:
	void BindToBuffer();
	void ConfigureInterrupts();
	void DMAInterrupt();
	void Init();
	void PauseDMA();
	void ShareEngine();
	void StartIn();
	void StartRxDMA();
	void StartTxDMA();
	void StopIn();
	void StopRxDMA();
	void StopTxDMA();
	TSerialDMAEngine();
	~TSerialDMAEngine();

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
	char fField61; // Offset: 61
	long fField3072; // Offset: 3072
};

#endif
