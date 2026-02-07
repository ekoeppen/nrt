#ifndef __INFERRED_PATSTACK_H
#define __INFERRED_PATSTACK_H

class PATStack {
public:
	void ATPCloseSocket();
	void ATPOpenSocket();
	void ATPSendRequest();
	void ATPSendRequestCancel();
	void ATPSendRequestGetResult();
	void ATPSendRequestResponses();
	void DDPCloseSocket();
	void DDPOpenSocket();
	void DDPReceive();
	void DDPReceiveCancel();
	void DDPReceiveGetResults();
	void DDPSend();
	void Delete();
	void HandleReply();
	void HandleRequest();
	void Init();
	void NBPLookupNames();
	void NBPLookupNamesCancel();
	void NBPLookupNamesClose();
	void NBPLookupNamesGetResult();
	void NBPLookupNamesReceived();
	void NBPRegisterName();
	void NBPUnRegisterName();
	void New();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
