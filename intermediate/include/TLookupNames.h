#ifndef __INFERRED_TLOOKUPNAMES_H
#define __INFERRED_TLOOKUPNAMES_H

class TLookupNames {
public:
	void Cancel();
	void CancelLookup();
	void CleanUp();
	void Close();
	void Completion();
	void GetId();
	void GetName();
	void HandleLookupReply();
	void InitiateLookup();
	void LookupNames();
	void LookupNamesAsync();
	void LookupNamesAsyncFromTask();
	void NamesFound();
	void RemoveEventHandler();
	void Reset();
	TLookupNames();
	~TLookupNames();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField9; // Offset: 9
	char fField10; // Offset: 10
	char fField11; // Offset: 11
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField116; // Offset: 116
	char fField216; // Offset: 216
	char fField217; // Offset: 217
	long fField220; // Offset: 220
};

#endif
