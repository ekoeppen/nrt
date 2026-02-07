#ifndef __INFERRED_TPAPINTERFACE_H
#define __INFERRED_TPAPINTERFACE_H

class TPAPInterface {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void CancelAsyncEvents();
	void Close();
	void CloseConnection();
	void Flush();
	void FlushData();
	void GetConnectionId();
	void GetData();
	void GetStatus();
	void HandleCloseConnectionRequest();
	void HandleSendDataRequest();
	void HandleStatus();
	void HandleTimer();
	void Init();
	void MustFlush();
	void OKSequenceNumber();
	void Open();
	void OpenConnection();
	void PostRead();
	void PrepareRead();
	void PrepareStatusRequestPacket();
	void PrepareTicklePacket();
	void PutData();
	void SendData();
	void SendTicklePacket();
	void SendZeroLengthResponse();
	void SetupToSendData();
	TPAPInterface();
	~TPAPInterface();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField12; // Offset: 12
	char fField20; // Offset: 20
	char fField21; // Offset: 21
	char fField22; // Offset: 22
	long fField24; // Offset: 24
	char fField25; // Offset: 25
	long fField44; // Offset: 44
	char fField52; // Offset: 52
	char fField53; // Offset: 53
	long fField520; // Offset: 520
	long fField596; // Offset: 596
	char fField624; // Offset: 624
	long fField700; // Offset: 700
	char fField728; // Offset: 728
	char fField729; // Offset: 729
	long fField732; // Offset: 732
	long fField736; // Offset: 736
	char fField784; // Offset: 784
};

#endif
