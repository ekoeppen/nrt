#ifndef __INFERRED_TATP_H
#define __INFERRED_TATP_H

class TATP {
public:
	void ATLKAttachLink();
	void ATLKClose();
	void ATLKDetachLink();
	void ATLKOpen();
	void ATLKShutDown();
	void ATLKSocketClosed();
	void Cancel();
	void DoCommand();
	void Init();
	void Read();
	TATP();
	void Write();

protected:
};

#endif
