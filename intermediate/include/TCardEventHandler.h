#ifndef __INFERRED_TCARDEVENTHANDLER_H
#define __INFERRED_TCARDEVENTHANDLER_H

class TCardEventHandler {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void IdleProc();
	void Init();
	TCardEventHandler();

protected:
	long fField20; // Offset: 20
};

#endif
