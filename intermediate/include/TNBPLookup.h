#ifndef __INFERRED_TNBPLOOKUP_H
#define __INFERRED_TNBPLOOKUP_H

class TNBPLookup {
public:
	void AdjustZoneName();
	void Again();
	void DecrementRetries();
	void HandleLookupReply();
	void Init();
	void ResetLookupInfo();
	void StartTimer();
	void StopTimer();
	TNBPLookup();
	void UpdateBuffer();
	~TNBPLookup();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField24; // Offset: 24
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField48; // Offset: 48
	char fField56; // Offset: 56
	long fField252; // Offset: 252
	long fField284; // Offset: 284
	long fField288; // Offset: 288
	long fField300; // Offset: 300
	long fField304; // Offset: 304
};

#endif
