#ifndef __INFERRED_TNBPLOOKUPMANAGER_H
#define __INFERRED_TNBPLOOKUPMANAGER_H

class TNBPLookupManager {
public:
	void Cancel();
	void CompleteLookup();
	void CreateNewLookup();
	void GetLookup();
	void GetLookupByCompletionId();
	void HandleLookupReply();
	void HandleTimer();
	void Init();
	void Lookup();
	void LookupAgain();
	void LookupForRegister();
	void Remove();
	TNBPLookupManager();
	void UpdateBuffer();
	~TNBPLookupManager();

protected:
	long fField4; // Offset: 4
	char fField8; // Offset: 8
	char fField24; // Offset: 24
	long fField252; // Offset: 252
	long fField336; // Offset: 336
};

#endif
