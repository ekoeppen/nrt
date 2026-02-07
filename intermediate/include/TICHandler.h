#ifndef __INFERRED_TICHANDLER_H
#define __INFERRED_TICHANDLER_H

class TICHandler {
public:
	void IC_InterruptHandler();
	void IC_TimerInterruptHandler();
	void Init();
	void ResetTimer();
	void SampleInterconnectStateMachine();
	void Send();
	void SendICMessage();
	void SetTimer();

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
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
};

#endif
