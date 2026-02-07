#ifndef __INFERRED_TPACKETBUFFER_H
#define __INFERRED_TPACKETBUFFER_H

class TPacketBuffer {
public:
	void BeginDispatch();
	void DoneDispatch();
	void SetMsgToken();
	TPacketBuffer();
	void UnLock();

protected:
	char fField48; // Offset: 48
	char fField49; // Offset: 49
};

#endif
