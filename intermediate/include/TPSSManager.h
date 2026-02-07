#ifndef __INFERRED_TPSSMANAGER_H
#define __INFERRED_TPSSMANAGER_H

class TPSSManager {
public:
	void CardAvailable();
	void CardGone();
	void CardIsSame();
	void DeregisterStores();
	void DoCommand();
	void DoReply();
	void DoReplyTransitions();
	void GCStores();
	void GetCardSlotStores();
	void GetStorePSSInfo();
	void MainConstructor();
	void MainDestructor();
	void MessageInUse();
	void RegisterStores();
	void ReinsertCard();
	void ReplyServer();
	void SendServer();
	void StuffSendAndTransition();
	void TheMain();
	void UIEngine();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	char fField56; // Offset: 56
	char fField57; // Offset: 57
	long fField312; // Offset: 312
	long fField400; // Offset: 400
	long fField404; // Offset: 404
	long fField408; // Offset: 408
	long fField412; // Offset: 412
	long fField416; // Offset: 416
	long fField772; // Offset: 772
};

#endif
