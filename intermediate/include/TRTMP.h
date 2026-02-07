#ifndef __INFERRED_TRTMP_H
#define __INFERRED_TRTMP_H

class TRTMP {
public:
	void ATLKAttachLink();
	void ATLKClose();
	void ATLKDetachLink();
	void ATLKOpen();
	void ATLKShutDown();
	void ATLKSocketClosed();
	void AgeTable();
	void BroadcastRTMPRequest();
	void DoCommand();
	void GetRouterAddress();
	void Init();
	void Read();
	void ResolveAddress();
	TRTMP();
	~TRTMP();

protected:
	char fField10; // Offset: 10
	long fField20; // Offset: 20
	char fField29; // Offset: 29
	long fField30; // Offset: 30
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
