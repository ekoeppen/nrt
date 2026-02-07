#ifndef __INFERRED_TADSPCONNECTION_H
#define __INFERRED_TADSPCONNECTION_H

class TADSPConnection {
public:
	void Abort();
	void AttnExpired();
	void CheckSend();
	void CheckSendData();
	void DoClose();
	void DoCloseAdvice();
	void ExecuteState();
	void FlushExpired();
	void ForwdReset();
	void ForwdResetAck();
	void Init();
	void Match();
	void MatchAddress();
	void MatchFilterAddress();
	void NotifyListener();
	void NotifyUser();
	void OpenComplete();
	void PrepHeader();
	void ProbeExpired();
	void ProcessAck();
	void Read();
	void ReadAttention();
	void RecvAttnComplete();
	void ResetExpired();
	void ResetProbeTimer();
	void ResetTrans();
	void RetryExpired();
	void SendControl();
	void SendDataAck();
	TADSPConnection();
	void UpDateClient();
	void UpdateConnection();
	void UpdateRetryIntervalAfterAck();
	void UpdateRetryIntervalAfterTimeout();
	~TADSPConnection();

protected:
	long fField8; // Offset: 8
	char fField10; // Offset: 10
	char fField11; // Offset: 11
	char fField28; // Offset: 28
	char fField29; // Offset: 29
	long fField32; // Offset: 32
	char fField36; // Offset: 36
	char fField37; // Offset: 37
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField72; // Offset: 72
	char fField76; // Offset: 76
	long fField80; // Offset: 80
	char fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField156; // Offset: 156
	char fField353; // Offset: 353
	long fField364; // Offset: 364
	long fField368; // Offset: 368
	long fField372; // Offset: 372
	long fField376; // Offset: 376
	long fField380; // Offset: 380
	long fField392; // Offset: 392
	long fField396; // Offset: 396
	long fField400; // Offset: 400
	long fField404; // Offset: 404
	long fField424; // Offset: 424
};

#endif
