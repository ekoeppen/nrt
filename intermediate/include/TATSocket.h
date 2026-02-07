#ifndef __INFERRED_TATSOCKET_H
#define __INFERRED_TATSOCKET_H

class TATSocket {
public:
	void CancelReceiveDatagram();
	void Init();
	void Read();
	void ReceiveDatagram();
	TATSocket();
	void WriteLong();
	void WriteShort();
	~TATSocket();

protected:
	char fField1; // Offset: 1
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField36; // Offset: 36
	long fField40; // Offset: 40
};

#endif
