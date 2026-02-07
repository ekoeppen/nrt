#ifndef __INFERRED_TIRLAP_H
#define __INFERRED_TIRLAP_H

class TIrLAP {
public:
	void ApplyDefaultConnParms();
	void CancelPendingPutRequests();
	void CancelPutRequest();
	void ConnLstnComplete();
	void CopyStatsTo();
	void DeInit();
	void DisconnectComplete();
	void FreeGetBuffers();
	void GotData();
	void HandleConnectStateEvent();
	void HandleDisconnectedStateEvent();
	void HandleListenStateEvent();
	void HandleNDMDisconnectRequest();
	void HandlePriCloseStateEvent();
	void HandlePriReceiveStateEvent();
	void HandlePriTransmitStateEvent();
	void HandleQueryStateEvent();
	void HandleReplyStateEvent();
	void HandleSecCloseStateEvent();
	void HandleSecReceiveStateEvent();
	void HandleSecTransmitStateEvent();
	void HandleTestFrame();
	void Init();
	void InputComplete();
	void InputHappening();
	void NextState();
	void NotConnectedCompletion();
	void OutputComplete();
	void OutputControlFrame();
	void OutputDataFrame();
	void OutputFRMRResponse();
	void OutputSNRMCommand();
	void OutputUAResponse();
	void OutputXIDCommand();
	void OutputXIDResponse();
	void ParseNegotiateAndInitConnState();
	void PostponePutRequest();
	void PrepareFRMRResponse();
	void ProcessRecdInfoOrSuperFrame();
	void PutComplete();
	void RecdCmd();
	void RecdFinalRsp();
	void RecdPollCmd();
	void RecdRsp();
	void ReleaseInputBuffer();
	void ResendRejectedFrames();
	void Reset();
	void ResetStats();
	void StartDataReceive();
	void StartInput();
	void StartOutput();
	void StartTimer();
	void StopInput();
	void StopOutput();
	void StopTimer();
	TIrLAP();
	void TestFrameComplete();
	void TimerComplete();
	void UpdateNrReceived();
	~TIrLAP();

protected:
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField21; // Offset: 21
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	char fField29; // Offset: 29
	long fField32; // Offset: 32
	char fField36; // Offset: 36
	char fField37; // Offset: 37
	char fField38; // Offset: 38
	char fField39; // Offset: 39
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	char fField72; // Offset: 72
	char fField73; // Offset: 73
	char fField74; // Offset: 74
	char fField76; // Offset: 76
	char fField77; // Offset: 77
	char fField78; // Offset: 78
	char fField79; // Offset: 79
	char fField80; // Offset: 80
	char fField81; // Offset: 81
	char fField82; // Offset: 82
	char fField84; // Offset: 84
	char fField85; // Offset: 85
	char fField88; // Offset: 88
	char fField89; // Offset: 89
	char fField90; // Offset: 90
	char fField91; // Offset: 91
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	long fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField108; // Offset: 108
	char fField120; // Offset: 120
	long fField124; // Offset: 124
	char fField128; // Offset: 128
	char fField129; // Offset: 129
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	long fField144; // Offset: 144
	char fField148; // Offset: 148
	char fField149; // Offset: 149
	char fField151; // Offset: 151
	char fField152; // Offset: 152
	char fField153; // Offset: 153
	char fField154; // Offset: 154
	char fField155; // Offset: 155
	char fField156; // Offset: 156
	char fField158; // Offset: 158
	char fField159; // Offset: 159
	char fField160; // Offset: 160
	char fField161; // Offset: 161
	char fField268; // Offset: 268
	char fField269; // Offset: 269
	char fField270; // Offset: 270
	long fField272; // Offset: 272
	long fField308; // Offset: 308
	long fField312; // Offset: 312
};

#endif
