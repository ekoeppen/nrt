#ifndef __INFERRED_TLINKMGR_H
#define __INFERRED_TLINKMGR_H

class TLinkMgr {
public:
	void ATLKAttachLink();
	void ATLKClose();
	void ATLKDetachLink();
	void ATLKOpen();
	void ATLKShutDown();
	void ATLKSocketClosed();
	void AcquireNodeAddress();
	void AttachLink();
	void AttachProtocol();
	void DetachLink();
	void DetachProtocol();
	void DoCommand();
	void GetAddress();
	void GetLinkInfo();
	void GetZoneName();
	void Init();
	void Read();
	void SetZoneName();
	TLinkMgr();
	void Write();
	~TLinkMgr();

protected:
	char fField10; // Offset: 10
	long fField20; // Offset: 20
	char fField29; // Offset: 29
	long fField30; // Offset: 30
	char fField36; // Offset: 36
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
};

#endif
