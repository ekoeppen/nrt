#ifndef __INFERRED_TIRPROBETOOL_H
#define __INFERRED_TIRPROBETOOL_H

class TIrProbeTool {
public:
	void AddCurrentOptions();
	void AddDefaultOptions();
	void AllocateBuffers();
	void ConnectStart();
	void DoInput();
	void DoOutput();
	void GetSizeOf();
	void GetToolName();
	void HandleRequest();
	void InputComplete();
	void ListenStart();
	void NextState();
	void OpenStart();
	void OutputComplete();
	void ProcessOptionStart();
	void RecdIrDATestFrame();
	void SendIrDATestFrame();
	void SetSerialChipSelect();
	void SharpEmptyInputBuffer();
	void SharpFillOutputBuffer();
	void StartReceive();
	void StartTimer();
	void StartTransmit();
	void StopReceive();
	void StopTimer();
	void StopTransmit();
	void SwitchIrLink();
	TIrProbeTool();
	void TaskConstructor();
	void TaskDestructor();
	void TerminateComplete();
	void TerminateConnection();
	void TimerComplete();
	~TIrProbeTool();

protected:
	long fField8; // Offset: 8
	long fField624; // Offset: 624
	long fField636; // Offset: 636
	long fField768; // Offset: 768
	long fField772; // Offset: 772
	long fField780; // Offset: 780
	long fField1176; // Offset: 1176
	long fField1212; // Offset: 1212
	long fField1216; // Offset: 1216
	long fField1220; // Offset: 1220
	long fField1224; // Offset: 1224
	long fField1228; // Offset: 1228
	long fField1232; // Offset: 1232
	char fField1236; // Offset: 1236
	long fField1256; // Offset: 1256
	long fField1272; // Offset: 1272
	long fField1276; // Offset: 1276
	long fField1280; // Offset: 1280
	long fField1340; // Offset: 1340
	long fField1344; // Offset: 1344
	long fField1348; // Offset: 1348
	long fField1352; // Offset: 1352
	long fField1356; // Offset: 1356
	long fField1360; // Offset: 1360
	long fField1364; // Offset: 1364
	long fField1368; // Offset: 1368
	long fField1372; // Offset: 1372
	long fField1376; // Offset: 1376
	long fField1380; // Offset: 1380
	long fField1384; // Offset: 1384
	long fField1388; // Offset: 1388
	long fField1392; // Offset: 1392
};

#endif
