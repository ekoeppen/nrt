#ifndef __INFERRED_TCARDPROCESSOREVENTHANDLER_H
#define __INFERRED_TCARDPROCESSOREVENTHANDLER_H

class TCardProcessorEventHandler {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void Init();
	TCardProcessorEventHandler();

protected:
};

#endif
