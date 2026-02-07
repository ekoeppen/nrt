#ifndef __INFERRED_TAEP_H
#define __INFERRED_TAEP_H

class TAEP {
public:
	void ATLKAttachLink();
	void ATLKClose();
	void ATLKDetachLink();
	void ATLKOpen();
	void ATLKShutDown();
	void ATLKSocketClosed();
	void DoCommand();
	void Init();
	void Read();
	TAEP();
	void Write();
	~TAEP();

protected:
	long fField20; // Offset: 20
	long fField44; // Offset: 44
};

#endif
