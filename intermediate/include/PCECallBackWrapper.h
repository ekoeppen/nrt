#ifndef __INFERRED_PCECALLBACKWRAPPER_H
#define __INFERRED_PCECALLBACKWRAPPER_H

class PCECallBackWrapper {
public:
	void AcceptComplete();
	void BindComplete();
	void ClassInfo();
	void CloseComplete();
	void ConnectComplete();
	void Delete();
	void FlushChannel();
	void GetAbortErr();
	void GetCMOTransportInfo();
	void GetCommEvent();
	void GetComplete();
	void GetConnectInfo();
	void GetConnectionEndPort();
	void GetControlOptionsInfo();
	void GetCurGetData();
	void GetCurGetFrameData();
	void GetCurGetNonBlocking();
	void GetCurGetThreshold();
	void GetCurPutData();
	void GetCurPutEndOfFrame();
	void GetCurPutFrameData();
	void GetCurRequestOpCode();
	void GetGetBytesOptionsInfo();
	void GetPassiveClaim();
	void GetPassiveState();
	void GetPutBytesOptionsInfo();
	void GetReceiveMessageBufSize();
	void GetTerminationEvent();
	void GetToolConnectState();
	void GetWaitingForResNotify();
	void HandleReply();
	void HandleRequest();
	void Init();
	void InitAsyncRPCMsg();
	void KillControlComplete();
	void KillGetCommEventComplete();
	void KillGetComplete();
	void KillPutComplete();
	void ListenComplete();
	void New();
	void OpenComplete();
	void PostCommEvent();
	void ProcessGetBytesOptionComplete();
	void ProcessOptionComplete();
	void ProcessPutBytesOptionComplete();
	void PutComplete();
	void ResArbReleaseComplete();
	void SetCMOTransportInfo();
	void SetConnectInfo();
	void SetPassiveClaim();
	void SetPassiveState();
	void SetTerminationEvent();
	void SetToolConnectState();
	void SetWaitingForResNotify();
	void Sizeof();
	void StartAbort();
	void TerminateComplete();
	void UnbindComplete();

protected:
	long fField16; // Offset: 16
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField368; // Offset: 368
	char fField372; // Offset: 372
	char fField373; // Offset: 373
	char fField374; // Offset: 374
	char fField375; // Offset: 375
	long fField376; // Offset: 376
	long fField380; // Offset: 380
	char fField384; // Offset: 384
	char fField385; // Offset: 385
	char fField386; // Offset: 386
	long fField388; // Offset: 388
};

#endif
