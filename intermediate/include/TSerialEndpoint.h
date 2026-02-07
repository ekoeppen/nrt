#ifndef __INFERRED_TSERIALENDPOINT_H
#define __INFERRED_TSERIALENDPOINT_H

class TSerialEndpoint {
public:
	void Abort();
	void Accept();
	void AddToAppWorld();
	void Bind();
	void ClassInfo();
	void Close();
	void Connect();
	void Delete();
	void DeleteLeavingTool();
	void Disconnect();
	void GetProtAddr();
	void GrabGetPB();
	void GrabPutPB();
	void HandleAbortReply();
	void HandleAcceptReply();
	void HandleBindReply();
	void HandleComplete();
	void HandleConnectReply();
	void HandleControlReply();
	void HandleDisconnectReply();
	void HandleEvent();
	void HandleEventReply();
	void HandleGetReply();
	void HandleListenReply();
	void HandleOptMgmtReply();
	void HandlePutReply();
	void HandleReleaseReply();
	void HandleUnBindReply();
	void InitGetPBList();
	void InitPending();
	void InitPutPBList();
	void IsPending();
	void KillKillKill();
	void Listen();
	void New();
	void NukeGetPBList();
	void NukePending();
	void NukePutPBList();
	void Open();
	void OptMgmt();
	void PostEventRequest();
	void PostKillRequest();
	void PrepDisconnect();
	void PrepareAbort();
	void Rcv();
	void RecvBytes();
	void Release();
	void ReleaseGetPB();
	void ReleasePutPB();
	void RemoveFromAppWorld();
	void SendBytes();
	void SendDisconnect();
	void SetState();
	void SetSync();
	void Sizeof();
	void Snd();
	void Timeout();
	void UnBind();
	void WaitForEvent();
	void eWorldSendBytes();
	void eWorldSnd();
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
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	char fField64; // Offset: 64
	char fField65; // Offset: 65
	char fField66; // Offset: 66
	char fField67; // Offset: 67
	long fField124; // Offset: 124
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	long fField136; // Offset: 136
};

#endif
