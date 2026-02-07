#ifndef __INFERRED_TNTKENDPOINTCLIENT_H
#define __INFERRED_TNTKENDPOINTCLIENT_H

class TNTKEndpointClient {
public:
	void AbortComplete();
	void BindComplete();
	void CheckSend();
	void ConnectComplete();
	void Disconnect();
	void DisconnectComplete();
	void IdleProc();
	void Init();
	void MakeYourPeace();
	void RcvComplete();
	void SndComplete();
	TNTKEndpointClient();
	void UnBindComplete();
	~TNTKEndpointClient();

protected:
	long fField4; // Offset: 4
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	char fField64; // Offset: 64
	char fField65; // Offset: 65
};

#endif
