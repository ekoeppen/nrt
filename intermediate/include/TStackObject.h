#ifndef __INFERRED_TSTACKOBJECT_H
#define __INFERRED_TSTACKOBJECT_H

class TStackObject {
public:
	void AECompletionProc();
	void AEHandlerProc();
	void ATLKAttachLink();
	void ATLKClose();
	void ATLKDetachLink();
	void ATLKOpen();
	void ATLKShutDown();
	void ATLKSocketClosed();
	void Init();
	TStackObject();
	~TStackObject();

protected:
	long fField20; // Offset: 20
};

#endif
