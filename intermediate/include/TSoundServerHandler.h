#ifndef __INFERRED_TSOUNDSERVERHANDLER_H
#define __INFERRED_TSOUNDSERVERHANDLER_H

class TSoundServerHandler {
public:
	void AEHandlerProc();
	void Init();
	TSoundServerHandler();

protected:
	long fField20; // Offset: 20
};

#endif
