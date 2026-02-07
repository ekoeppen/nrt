#ifndef __INFERRED_TIRSIR_H
#define __INFERRED_TIRSIR_H

class TIrSIR {
public:
	void CopyStatsTo();
	void EmptyInputBuffer();
	void EscapePutChar();
	void FillOutputBuffer();
	void InitReceiveState();
	void MediaBusy();
	void ReceivingInput();
	void Reset();
	void ResetStats();
	void SetMediaBusy();
	void StartReceive();
	void StartTransmit();
	TIrSIR();
	void ValidFrameAddress();
	~TIrSIR();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	char fField34; // Offset: 34
	char fField35; // Offset: 35
	char fField36; // Offset: 36
	char fField37; // Offset: 37
	char fField38; // Offset: 38
	long fField40; // Offset: 40
	char fField52; // Offset: 52
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField88; // Offset: 88
};

#endif
