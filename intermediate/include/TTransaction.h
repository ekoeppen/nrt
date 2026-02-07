#ifndef __INFERRED_TTRANSACTION_H
#define __INFERRED_TTRANSACTION_H

class TTransaction {
public:
	void Again();
	void ClearHigherBits();
	void Complete();
	void CopyResponse();
	void DecrementRetries();
	void ExpectingThisResponse();
	void Init();
	void PrepareRequestPacket();
	void SetTID();
	void SetupBitmap();
	void StartTimer();
	void StopTimer();
	TTransaction();
	~TTransaction();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField28; // Offset: 28
	char fField156; // Offset: 156
	long fField220; // Offset: 220
	long fField300; // Offset: 300
};

#endif
