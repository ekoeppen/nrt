#ifndef __INFERRED_TNBPLOOKUPEVENTHANDLER_H
#define __INFERRED_TNBPLOOKUPEVENTHANDLER_H

class TNBPLookupEventHandler {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void AETestEvent();
	void Init();
	TNBPLookupEventHandler();
	~TNBPLookupEventHandler();

protected:
	long fField20; // Offset: 20
};

#endif
