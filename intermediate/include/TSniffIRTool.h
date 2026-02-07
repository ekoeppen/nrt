#ifndef __INFERRED_TSNIFFIRTOOL_H
#define __INFERRED_TSNIFFIRTOOL_H

class TSniffIRTool {
public:
	void AddCurrentOptions();
	void AddDefaultOptions();
	void AllocateBuffers();
	void CheckBufferForIrDAData();
	void CheckBufferForSharpData();
	void CheckBufferForValidInput();
	void ConnectStart();
	void DoInput();
	void DoOutput();
	void GetSizeOf();
	void GetToolName();
	void ListenStart();
	void NextState();
	void NotifyUser();
	void PowerOffEvent();
	void PowerOnEvent();
	void ProcessOptionStart();
	void ResArbClaimNotification();
	void ResArbReleaseStart();
	void RxDataAvailable();
	void SetIOParms();
	void SniffStart();
	void SniffStop();
	void StartReceive();
	void StopReceive();
	TSniffIRTool();
	void TaskConstructor();
	void TaskDestructor();
	void TerminateComplete();
	void TxDataSent();
	void WakeUpHandler();
	~TSniffIRTool();

protected:
	char fField464; // Offset: 464
	char fField465; // Offset: 465
	char fField466; // Offset: 466
	long fField620; // Offset: 620
	long fField624; // Offset: 624
	char fField652; // Offset: 652
	char fField654; // Offset: 654
	long fField768; // Offset: 768
	long fField772; // Offset: 772
	long fField992; // Offset: 992
	long fField996; // Offset: 996
	long fField1148; // Offset: 1148
	char fField1152; // Offset: 1152
	char fField1153; // Offset: 1153
	long fField1176; // Offset: 1176
	char fField1200; // Offset: 1200
	char fField1201; // Offset: 1201
	char fField1202; // Offset: 1202
	long fField1204; // Offset: 1204
	char fField1220; // Offset: 1220
};

#endif
