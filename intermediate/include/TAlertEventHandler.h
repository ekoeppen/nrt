#ifndef __INFERRED_TALERTEVENTHANDLER_H
#define __INFERRED_TALERTEVENTHANDLER_H

class TAlertEventHandler {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void IdleProc();
	void Init();

protected:
	long fField20; // Offset: 20
};

#endif
