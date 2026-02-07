#ifndef __INFERRED_PLINK_H
#define __INFERRED_PLINK_H

class PLink {
public:
	void AcquireNodeAddress();
	void Activate();
	void ConfirmNodeAddress();
	void DeActivate();
	void Delete();
	void Init();
	void New();
	void PostRead();
	void ReleaseNodeAddress();
	void Write();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
