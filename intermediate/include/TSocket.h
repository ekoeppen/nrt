#ifndef __INFERRED_TSOCKET_H
#define __INFERRED_TSOCKET_H

class TSocket {
public:
	void CancelReceive();
	void Close();
	void GetReceiveMsgId();
	void Init();
	void Open();
	void ReceiveAsync();
	void ReceiveGetResults();
	void Send();
	TSocket();

protected:
	char fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField32; // Offset: 32
	long fField64; // Offset: 64
	long fField80; // Offset: 80
};

#endif
