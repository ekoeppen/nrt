#ifndef __INFERRED_TADSPENDPOINT_H
#define __INFERRED_TADSPENDPOINT_H

class TADSPEndpoint {
public:
	void Abort();
	void Accept();
	void AddToAppWorld();
	void Bind();
	void ClassInfo();
	void Close();
	void CloseConnectionComplete();
	void Connect();
	void Delete();
	void Disconnect();
	void DoAttnRecv();
	void DoCloseConnection();
	void DoSendAttnComplete();
	void DoUpdateComplete();
	void DoUpdateConnection();
	void ExtractAddress();
	void GetProtAddr();
	void HandleComplete();
	void HandleEvent();
	void IsPending();
	void Listen();
	void New();
	void Open();
	void OpenConnectionComplete();
	void OptMgmt();
	void PrepOpenConnection();
	void Rcv();
	void RegisterAddress();
	void Release();
	void RemoveFromAppWorld();
	void SetSync();
	void Sizeof();
	void Snd();
	void Timeout();
	void UnBind();
	void WaitForEvent();
	void nAbort();
	void nAccept();
	void nBind();
	void nConnect();
	void nDisconnect();
	void nListen();
	void nOptMgmt();
	void nRcv();
	void nRelease();
	void nSnd();
	void nUnBind();

protected:
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField1093; // Offset: 1093
};

#endif
