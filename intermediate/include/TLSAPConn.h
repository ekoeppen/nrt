#ifndef __INFERRED_TLSAPCONN_H
#define __INFERRED_TLSAPCONN_H

class TLSAPConn {
public:
	void AssignId();
	void ConnLstnComplete();
	void DeInit();
	void DisconnectStart();
	void GetControlFrame();
	void GetDataFrame();
	void GetPendConnLstn();
	void HandleAcceptStateEvent();
	void HandleConnectPendingStateEvent();
	void HandleConnectStateEvent();
	void HandleDataTransferReadyStateEvent();
	void HandleDisconnectedStateEvent();
	void HandleListenPendingStateEvent();
	void HandleListenStateEvent();
	void Init();
	void InternalDisconnectRequest();
	void InternalPutRequest();
	void NextState();
	void OneSecTickerComplete();
	void PassRequestToLMP();
	void PutControlFrame();
	void PutDataFrame();
	void SaveCurrentRequest();
	void StartConnectTimer();
	void StopConnectTimer();
	TLSAPConn();
	void TranslateReasonToError();
	void YourData();
	~TLSAPConn();

protected:
	char fField1; // Offset: 1
	long fField12; // Offset: 12
	long fField20; // Offset: 20
	char fField21; // Offset: 21
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	char fField60; // Offset: 60
	char fField61; // Offset: 61
	char fField62; // Offset: 62
	char fField63; // Offset: 63
};

#endif
