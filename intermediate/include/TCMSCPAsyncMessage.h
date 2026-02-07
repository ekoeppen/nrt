#ifndef __INFERRED_TCMSCPASYNCMESSAGE_H
#define __INFERRED_TCMSCPASYNCMESSAGE_H

class TCMSCPAsyncMessage {
public:
	void Init();
	void ReplyRPC();
	void SendRPC();
	void SetToken();
	TCMSCPAsyncMessage();

protected:
	char fField80; // Offset: 80
};

#endif
