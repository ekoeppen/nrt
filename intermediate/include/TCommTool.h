#ifndef __INFERRED_TCOMMTOOL_H
#define __INFERRED_TCOMMTOOL_H

class TCommTool {
public:
	void Accept();
	void AcceptComplete();
	void AcceptOptionsComplete();
	void AcceptStart();
	void AddCurrentOptions();
	void AddDefaultOptions();
	void AllowAbort();
	void Bind();
	void BindComplete();
	void BindOptionsComplete();
	void BindStart();
	void Close();
	void CloseComplete();
	void CompleteRequest();
	void Connect();
	void ConnectCheck();
	void ConnectComplete();
	void ConnectOptionsComplete();
	void ConnectStart();
	void CopyBackConnectPB();
	void CreatePort();
	void Disconnect();
	void DisconnectComplete();
	void DoControl();
	void DoKillControl();
	void DoKillGetCommEvent();
	void DoStatus();
	void FlushChannel();
	void ForwardOptions();
	void GetBytesImmediate();
	void GetCommEvent();
	void GetComplete();
	void GetConnectState();
	void GetNextTermProc();
	void GetOptionsComplete();
	void GetProtAddr();
	void GetToolPort();
	void HandleInternalEvent();
	void HandleReply();
	void HandleRequest();
	void HandleTimerTick();
	void HoldAbort();
	void ImportConnectPB();
	void InitAsyncRPCMsg();
	void KillGetComplete();
	void KillPutComplete();
	void KillRequestComplete();
	void Listen();
	void ListenComplete();
	void ListenOptionsComplete();
	void ListenStart();
	void Open();
	void OpenComplete();
	void OpenContinue();
	void OpenOptionsComplete();
	void OpenStart();
	void OptionMgmt();
	void OptionMgmtComplete();
	void PostCommEvent();
	void PrepControlRequest();
	void PrepGetRequest();
	void PrepKillRequest();
	void PrepPutRequest();
	void PrepResArbRequest();
	void ProcessCommOptionComplete();
	void ProcessControlOptions();
	void ProcessGetBytesOptionComplete();
	void ProcessGetBytesOptionStart();
	void ProcessOption();
	void ProcessOptionComplete();
	void ProcessOptionStart();
	void ProcessOptions();
	void ProcessOptionsCleanUp();
	void ProcessOptionsComplete();
	void ProcessOptionsContinue();
	void ProcessPutBytesOptionComplete();
	void ProcessPutBytesOptionStart();
	void PutComplete();
	void PutOptionsComplete();
	void Release();
	void ReleaseComplete();
	void ReleaseStart();
	void RequestTypeToChannelNumber();
	void ResArbClaimNotification();
	void ResArbRelease();
	void ResArbReleaseComplete();
	void ResArbReleaseStart();
	void SetChannelFilter();
	void ShouldAbort();
	void StartAbort();
	TCommTool();
	void TaskConstructor();
	void TaskDestructor();
	void TaskMain();
	void TerminateComplete();
	void TerminateConnection();
	void UnRegisterPort();
	void Unbind();
	void UnbindComplete();
	void UnbindStart();
	~TCommTool();

protected:
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	char fField96; // Offset: 96
	long fField140; // Offset: 140
	char fField148; // Offset: 148
	long fField152; // Offset: 152
	char fField172; // Offset: 172
	long fField176; // Offset: 176
	char fField196; // Offset: 196
	long fField200; // Offset: 200
	char fField220; // Offset: 220
	long fField316; // Offset: 316
	long fField320; // Offset: 320
	char fField324; // Offset: 324
	long fField372; // Offset: 372
	long fField376; // Offset: 376
	long fField380; // Offset: 380
	long fField388; // Offset: 388
	long fField396; // Offset: 396
	long fField400; // Offset: 400
	long fField404; // Offset: 404
	long fField408; // Offset: 408
	long fField412; // Offset: 412
	long fField424; // Offset: 424
	long fField428; // Offset: 428
	long fField432; // Offset: 432
	long fField436; // Offset: 436
	long fField448; // Offset: 448
	char fField452; // Offset: 452
	char fField453; // Offset: 453
	char fField454; // Offset: 454
	char fField455; // Offset: 455
	long fField456; // Offset: 456
	long fField460; // Offset: 460
	char fField464; // Offset: 464
	char fField465; // Offset: 465
	char fField466; // Offset: 466
	long fField468; // Offset: 468
	long fField480; // Offset: 480
	long fField488; // Offset: 488
	long fField500; // Offset: 500
	long fField504; // Offset: 504
	long fField508; // Offset: 508
	char fField512; // Offset: 512
	char fField513; // Offset: 513
	long fField516; // Offset: 516
	long fField520; // Offset: 520
	long fField524; // Offset: 524
	long fField528; // Offset: 528
	long fField532; // Offset: 532
	long fField536; // Offset: 536
	long fField540; // Offset: 540
	long fField600; // Offset: 600
	long fField604; // Offset: 604
	long fField608; // Offset: 608
	long fField612; // Offset: 612
	long fField616; // Offset: 616
};

#endif
