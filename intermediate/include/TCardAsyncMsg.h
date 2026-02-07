#ifndef __INFERRED_TCARDASYNCMSG_H
#define __INFERRED_TCARDASYNCMSG_H

class TCardAsyncMsg {
public:
	void Free();
	void Init();
	void Send();
	void SendRPC();
	TCardAsyncMsg();

protected:
	long fField184; // Offset: 184
};

#endif
