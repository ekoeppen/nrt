#ifndef __INFERRED_TNEWTCARDEVENTHANDLER_H
#define __INFERRED_TNEWTCARDEVENTHANDLER_H

class TNewtCardEventHandler {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void HandleCardEvent();
	void Init();
	void ReadyToAcceptCardEvents();
	void ReplyServer();
	void SendAyncServer();
	void SendServer();

protected:
	long fField20; // Offset: 20
};

#endif
