#ifndef __INFERRED_TCOMMTOOLPROTOCOL_H
#define __INFERRED_TCOMMTOOLPROTOCOL_H

class TCommToolProtocol {
public:
	void AcceptComplete();
	void AcceptStart();
	void AddCurrentOptions();
	void AddDefaultOptions();
	void Bind();
	void BindComplete();
	void BindStart();
	void CTAcceptComplete();
	void CTAcceptStart();
	void CTAddCurrentOptions();
	void CTAddDefaultOptions();
	void CTAllowAbort();
	void CTBind();
	void CTBindComplete();
	void CTChannelNumberToRequestType();
	void CTClose();
	void CTCloseComplete();
	void CTCompleteRequest();
	void CTConnectComplete();
	void CTConnectStart();
	void CTDisconnectComplete();
	void CTDoControl();
	void CTDoKillControl();
	void CTDoKillGetCommEvent();
	void CTFlushChannel();
	void CTGetAbortErr();
	void CTGetCMOTransportInfo();
	void CTGetCommEvent();
	void CTGetComplete();
	void CTGetConnectInfo();
	void CTGetConnectParms();
	void CTGetControlOptionsInfo();
	void CTGetCurGetData();
	void CTGetCurGetFrameData();
	void CTGetCurGetNonBlocking();
	void CTGetCurGetThreshold();
	void CTGetCurPutData();
	void CTGetCurPutEndOfFrame();
	void CTGetCurPutFrameData();
	void CTGetCurRequestOpCode();
	void CTGetGetBytesOptionsInfo();
	void CTGetPassiveClaim();
	void CTGetPassiveState();
	void CTGetProtAddr();
	void CTGetPutBytesOptionsInfo();
	void CTGetReceiveMessageBufSize();
	void CTGetRequest();
	void CTGetRequestListItem();
	void CTGetRequestSize();
	void CTGetRequestsToKill();
	void CTGetTerminationEvent();
	void CTGetToolConnectState();
	void CTGetToolId();
	void CTGetToolPort();
	void CTGetWaitingForResNotify();
	void CTHandleInternalEvent();
	void CTHandleReply();
	void CTHandleRequest();
	void CTHoldAbort();
	void CTInitAsyncRPCMsg();
	void CTKillGetComplete();
	void CTKillPutComplete();
	void CTKillRequestComplete();
	void CTListenComplete();
	void CTListenStart();
	void CTOpenComplete();
	void CTOpenContinue();
	void CTOpenStart();
	void CTPostCommEvent();
	void CTProcessGetBytesOptionComplete();
	void CTProcessGetBytesOptionStart();
	void CTProcessOption();
	void CTProcessOptionComplete();
	void CTProcessOptionStart();
	void CTProcessPutBytesOptionComplete();
	void CTProcessPutBytesOptionStart();
	void CTPutComplete();
	void CTReleaseComplete();
	void CTReleaseStart();
	void CTRequestTypeToChannelNumber();
	void CTResArbClaimNotification();
	void CTResArbRelease();
	void CTResArbReleaseComplete();
	void CTResArbReleaseStart();
	void CTSetAbortErr();
	void CTSetCMOTransportInfo();
	void CTSetChannelFilter();
	void CTSetConnectInfo();
	void CTSetPassiveClaim();
	void CTSetPassiveState();
	void CTSetRequestsToKill();
	void CTSetTerminationEvent();
	void CTSetToolConnectState();
	void CTSetWaitingForResNotify();
	void CTShouldAbort();
	void CTStartAbort();
	void CTTaskConstructor();
	void CTTaskDestructor();
	void CTTerminateComplete();
	void CTTerminateConnection();
	void CTUnbind();
	void CTUnbindComplete();
	void Close();
	void CloseComplete();
	void ConnectComplete();
	void ConnectStart();
	void Delete();
	void DisconnectComplete();
	void DoControl();
	void DoKillControl();
	void DoKillGetCommEvent();
	void ForwardOptions();
	void GetBytes();
	void GetBytesImmediate();
	void GetCommEvent();
	void GetComplete();
	void GetFramedBytes();
	void GetNextTermProc();
	void GetProtAddr();
	void GetToolName();
	void HandleInternalEvent();
	void HandleReply();
	void HandleRequest();
	void KillGet();
	void KillGetComplete();
	void KillPut();
	void KillPutComplete();
	void ListenComplete();
	void ListenStart();
	void New();
	void OpenComplete();
	void OpenStart();
	void PostCommEvent();
	void ProcessGetBytesOptionComplete();
	void ProcessGetBytesOptionStart();
	void ProcessOption();
	void ProcessOptionComplete();
	void ProcessOptionStart();
	void ProcessPutBytesOptionComplete();
	void ProcessPutBytesOptionStart();
	void PutBytes();
	void PutComplete();
	void PutFramedBytes();
	void ReleaseComplete();
	void ReleaseStart();
	void ResArbClaimNotification();
	void ResArbRelease();
	void ResArbReleaseComplete();
	void ResArbReleaseStart();
	void SetChannelFilter();
	void TaskConstructor();
	void TaskDestructor();
	void TerminateComplete();
	void TerminateConnection();
	void ToolInit();
	void Unbind();
	void UnbindComplete();
	void UnbindStart();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField72; // Offset: 72
	long fField372; // Offset: 372
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
	long fField516; // Offset: 516
};

#endif
