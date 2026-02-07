#ifndef __INFERRED_TIASCLIENT_H
#define __INFERRED_TIASCLIENT_H

class TIASClient {
public:
	void DeInit();
	void GetStart();
	void HandleConnectedStateEvent();
	void HandleDisconnectedStateEvent();
	void Init();
	void LookupComplete();
	void NextState();
	void ParseInput();
	void ParseReply();
	void PutStart();
	void SendRequest();
	TIASClient();
	~TIASClient();

protected:
	long fField12; // Offset: 12
	long fField20; // Offset: 20
	char fField21; // Offset: 21
	long fField24; // Offset: 24
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
};

#endif
