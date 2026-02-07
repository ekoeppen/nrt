#ifndef __INFERRED_PAPPLETALKSTACK_H
#define __INFERRED_PAPPLETALKSTACK_H

class PAppleTalkStack {
public:
	void ATPCloseSocket();
	void ATPOpenSocket();
	void ATPSendRequest();
	void ATPSendRequestCancel();
	void ATPSendRequestGetResult();
	void ATPSendRequestResponses();
	void ClassInfo();
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
	void Sizeof();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	char fField40; // Offset: 40
	long fField44; // Offset: 44
	char fField48; // Offset: 48
};

#endif
