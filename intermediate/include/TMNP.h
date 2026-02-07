#ifndef __INFERRED_TMNP_H
#define __INFERRED_TMNP_H

class TMNP {
public:
	void AcceptStart();
	void AcceptorTimeOut();
	void AckTimeOut();
	void CancelRcv();
	void CancelTimer();
	void CancelXmit();
	void CancelXmitAbortTimer();
	void CleanupCCB();
	void ConnectPreflight();
	void ConnectStart();
	void Disconnect();
	void DoCompressFile();
	void DoControl();
	void EnterConnectedState();
	void FreeCCB();
	void GetBytes();
	void GetBytesImmediate();
	void GetBytesStart();
	void GetComplete();
	void GetFramedBytes();
	void GetNextTermProc();
	void GetSizeOf();
	void GetToolName();
	void HandleRequest();
	void HandleTickTimer();
	void HandleXmitAbortTimer();
	void InactiveTimeOut();
	void InitConnectParms();
	void InitFrameBufs();
	void KillGet();
	void KillGetComplete();
	void KillPut();
	void KillPutComplete();
	void KillWrite();
	void ListenStart();
	void MNPCompressOut();
	void MNPDecompressOut();
	void MNPNilFlush();
	void OpenAlloc();
	void ParamNegotiation();
	void ProcessLA();
	void ProcessOptionStart();
	void PutBytes();
	void PutComplete();
	void PutFramedBytes();
	void RcvBrokenFrame();
	void RcvBuffer();
	void RcvFrame();
	void RcvFrameComplete();
	void RcvInit();
	void RcvLA();
	void RcvLD();
	void RcvLN();
	void RcvLNA();
	void RcvLR();
	void RcvLT();
	void RcvProcessFrame();
	void RcvStartBuffer();
	void ReceiveCredit();
	void ReleaseStart();
	void ResetLink();
	void RetransTimeOut();
	void SetRetransTimer();
	void SetTimer();
	void SetXmitAbortTimer();
	TMNP();
	void TaskConstructor();
	void TaskDestructor();
	void WindowTimeOut();
	void XmitBufferLT();
	void XmitFrameComplete();
	void XmitInitBuffer();
	void XmitLA();
	void XmitLD();
	void XmitLDComplete();
	void XmitLR();
	void XmitLT();
	void XmitLTContinue();
	void XmitNAck();
	void XmitPostRequest();
	void XmitStartBuffer();
	~TMNP();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	char fField17; // Offset: 17
	long fField24; // Offset: 24
	long fField40; // Offset: 40
	char fField60; // Offset: 60
	char fField61; // Offset: 61
	char fField62; // Offset: 62
	long fField68; // Offset: 68
	long fField76; // Offset: 76
	char fField154; // Offset: 154
	long fField160; // Offset: 160
	char fField172; // Offset: 172
	long fField388; // Offset: 388
	long fField624; // Offset: 624
	long fField636; // Offset: 636
	long fField640; // Offset: 640
	long fField996; // Offset: 996
	long fField1316; // Offset: 1316
	long fField1368; // Offset: 1368
	long fField1372; // Offset: 1372
	long fField1376; // Offset: 1376
	long fField1380; // Offset: 1380
	long fField1384; // Offset: 1384
	char fField1400; // Offset: 1400
	char fField1401; // Offset: 1401
	char fField1402; // Offset: 1402
	char fField1403; // Offset: 1403
	long fField1404; // Offset: 1404
	long fField1408; // Offset: 1408
	long fField1412; // Offset: 1412
	long fField1416; // Offset: 1416
	char fField1420; // Offset: 1420
	long fField1452; // Offset: 1452
	long fField3160; // Offset: 3160
	long fField3308; // Offset: 3308
	long fField3312; // Offset: 3312
	long fField3316; // Offset: 3316
	long fField3320; // Offset: 3320
	long fField3332; // Offset: 3332
	long fField3340; // Offset: 3340
	long fField3412; // Offset: 3412
};

#endif
