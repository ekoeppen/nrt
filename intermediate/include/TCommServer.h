#ifndef __INFERRED_TCOMMSERVER_H
#define __INFERRED_TCOMMSERVER_H

class TCommServer {
public:
	void ConnectToTestServer();
	void DisconnectFromTestServer();
	void FlushPadding();
	void GetResponse();
	void IsBusy();
	void Pad();
	void ReadChunk();
	void ReadString();
	void SendChunk();
	void SendCommandHeader();
	void SetBusy();
	void SetTestServerName();
	TCommServer();
	void TestPipeExceptionHandler();
	~TCommServer();

protected:
	long fField16; // Offset: 16
	long fField86; // Offset: 86
	long fField88; // Offset: 88
	long fField90; // Offset: 90
	long fField220; // Offset: 220
	char fField224; // Offset: 224
};

#endif
