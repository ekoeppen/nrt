#ifndef __INFERRED_TIASSERVER_H
#define __INFERRED_TIASSERVER_H

class TIASServer {
public:
	void DeInit();
	void GetStart();
	void GotAValidString();
	void Init();
	void ListenStart();
	void NextState();
	void ParseInput();
	void ParseRequest();
	void PutStart();
	void SendResponse();
	void SetNameService();
	TIASServer();
	~TIASServer();

protected:
	long fField12; // Offset: 12
	char fField20; // Offset: 20
	char fField21; // Offset: 21
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField76; // Offset: 76
};

#endif
