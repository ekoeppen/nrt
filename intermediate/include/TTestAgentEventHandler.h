#ifndef __INFERRED_TTESTAGENTEVENTHANDLER_H
#define __INFERRED_TTESTAGENTEVENTHANDLER_H

class TTestAgentEventHandler {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void IdleProc();

protected:
	long fField20; // Offset: 20
};

#endif
