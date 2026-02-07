#ifndef __INFERRED_STROKECENTRAL_H
#define __INFERRED_STROKECENTRAL_H

class StrokeCentral {
public:
	void AddDeferredStroke();
	void AddExpiredStroke();
	void BeforeLastFlush();
	void BlockStrokes();
	void CompressGroup();
	void CurrentStroke();
	void DoneCurrentStroke();
	void DoneFields();
	void ExpireAll();
	void ExpireGroup();
	void FlushStrokes();
	void IGCompressGroup();
	void IdleCompress();
	void IdleCurrentStroke();
	void IdleStrokes();
	void Init();
	void InitFields();
	void InvalidateCurrentStroke();
	void RestoreRecognitionState();
	void SaveRecognitionState();
	void StartNewStroke();
	StrokeCentral();
	void UnblockStrokes();
	void UpdateCompressGroup();
	~StrokeCentral();

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
	long fField52; // Offset: 52
	char fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
};

#endif
