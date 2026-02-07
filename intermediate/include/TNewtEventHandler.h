#ifndef __INFERRED_TNEWTEVENTHANDLER_H
#define __INFERRED_TNEWTEVENTHANDLER_H

class TNewtEventHandler {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void IdleProc();
	void SetWakeupTime();
	TNewtEventHandler();

protected:
};

#endif
