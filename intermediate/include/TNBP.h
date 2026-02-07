#ifndef __INFERRED_TNBP_H
#define __INFERRED_TNBP_H

class TNBP {
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
	void Lookup();
	void LookupAgain();
	void NBPRegister();
	void NBPUnRegister();
	void Read();
	TNBP();
	void Write();
	~TNBP();

protected:
	long fField20; // Offset: 20
};

#endif
