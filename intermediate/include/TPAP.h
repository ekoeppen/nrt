#ifndef __INFERRED_TPAP_H
#define __INFERRED_TPAP_H

class TPAP {
public:
	void ATLKAttachLink();
	void ATLKClose();
	void ATLKDetachLink();
	void ATLKOpen();
	void ATLKShutDown();
	void ATLKSocketClosed();
	void DoCommand();
	void GetConnectionId();
	void Init();
	TPAP();

protected:
	long fField20; // Offset: 20
};

#endif
