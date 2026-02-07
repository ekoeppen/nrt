#ifndef __INFERRED_TPIPEEVENTHANDLER_H
#define __INFERRED_TPIPEEVENTHANDLER_H

class TPipeEventHandler {
public:
	void AEHandlerProc();
	void AETestEvent();
	TPipeEventHandler();

protected:
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
};

#endif
