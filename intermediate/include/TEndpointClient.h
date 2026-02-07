#ifndef __INFERRED_TENDPOINTCLIENT_H
#define __INFERRED_TENDPOINTCLIENT_H

class TEndpointClient {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void AETestEvent();
	void AbortComplete();
	void AcceptComplete();
	void BindComplete();
	void ConnectComplete();
	void Default();
	void DefaultComplete();
	void Disconnect();
	void DisconnectComplete();
	void GetProtAddr();
	void Init();
	void ListenComplete();
	void OptMgmtComplete();
	void RcvComplete();
	void Release();
	void ReleaseComplete();
	void SndComplete();
	TEndpointClient();
	void UnBindComplete();
	~TEndpointClient();

protected:
	long fField20; // Offset: 20
};

#endif
