#ifndef __INFERRED_TAPPLETALKSTACK_H
#define __INFERRED_TAPPLETALKSTACK_H

class TAppleTalkStack {
public:
	void ATLKAttachLink();
	void ATLKClose();
	void ATLKDetachLink();
	void ATLKOpen();
	void ATLKShutDown();
	void ATLKSocketClosed();
	void AttachLink();
	void DetachLink();
	void DoCommand();
	void Init();
	void ShutDown();
	TAppleTalkStack();
	~TAppleTalkStack();

protected:
	long fField36; // Offset: 36
};

#endif
