#ifndef __INFERRED_TCPREADMESSAGE_H
#define __INFERRED_TCPREADMESSAGE_H

class TCPReadMessage {
public:
	void Find();
	void Init();
	void ReadChunk();
	void ReadTuple();
	void ReceiveMessage();
	void Reset();
	TCPReadMessage();
	~TCPReadMessage();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
