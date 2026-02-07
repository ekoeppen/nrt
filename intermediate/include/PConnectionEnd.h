#ifndef __INFERRED_PCONNECTIONEND_H
#define __INFERRED_PCONNECTIONEND_H

class PConnectionEnd {
public:
	void AcceptStart();
	void BindStart();
	void CloseStart();
	void ConnectStart();
	void Delete();
	void ForwardOptions();
	void GetBytesImmediateStart();
	void GetBytesStart();
	void GetCommEvent();
	void GetFramedBytesStart();
	void HandleInternalEvent();
	void HandleInternalRequest();
	void HandleReply();
	void HandleRequest();
	void HandleTimerTick();
	void Init();
	void KillControlStart();
	void KillGetCommEventStart();
	void KillGetStart();
	void KillPutStart();
	void ListenStart();
	void New();
	void OpenStart();
	void ProcessGetBytesOptionStart();
	void ProcessOptionStart();
	void ProcessPutBytesOptionStart();
	void PutBytesStart();
	void PutFramedBytesStart();
	void ReleaseStart();
	void ResArbClaimNotification();
	void ResArbReleaseStart();
	void TerminateStart();
	void UnbindStart();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
