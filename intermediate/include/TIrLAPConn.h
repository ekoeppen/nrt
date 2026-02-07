#ifndef __INFERRED_TIRLAPCONN_H
#define __INFERRED_TIRLAPCONN_H

class TIrLAPConn {
public:
	void CancelPendingGetRequests();
	void CleanupPendingGetRequestsAndReplies();
	void DataDelivered();
	void DeInit();
	void Demultiplexor();
	void ExtractHeader();
	void FillInLMPDUHeader();
	void HandleActiveStateEvent();
	void HandleConnectOrListenStateEvent();
	void HandleGetDataRequest();
	void HandleStandbyStateEvent();
	void Init();
	void NextState();
	void ReplyToInvalidFrame();
	void Reset();
	TIrLAPConn();
	void TimerComplete();
	~TIrLAPConn();

protected:
	char fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField12; // Offset: 12
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
	char fField29; // Offset: 29
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
