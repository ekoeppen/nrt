#ifndef __INFERRED_TLINK_H
#define __INFERRED_TLINK_H

class TLink {
public:
	void AECompletionProc();
	void AcquireNodeAddress();
	void Activate();
	void GetZoneName();
	void Init();
	void PostRead();
	void SetNetwork();
	void SetZoneName();
	TLink();
	void Write();
	~TLink();

protected:
	long fField20; // Offset: 20
	char fField28; // Offset: 28
	char fField29; // Offset: 29
	long fField30; // Offset: 30
	char fField31; // Offset: 31
	long fField32; // Offset: 32
	long fField72; // Offset: 72
	long fField232; // Offset: 232
	long fField240; // Offset: 240
	long fField252; // Offset: 252
	char fField268; // Offset: 268
	long fField276; // Offset: 276
	long fField280; // Offset: 280
};

#endif
