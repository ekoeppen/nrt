#ifndef __INFERRED_PLOCALTALKLINK_H
#define __INFERRED_PLOCALTALKLINK_H

class PLocalTalkLink {
public:
	void AcquireNodeAddress();
	void AcquireNodeID();
	void Activate();
	void AllocateStuff();
	void ClassInfo();
	void ConfirmNodeAddress();
	void ControlCall();
	void DeActivate();
	void Delete();
	void Init();
	void New();
	void PostRead();
	void ReleaseNodeAddress();
	void Sizeof();
	void Write();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
};

#endif
