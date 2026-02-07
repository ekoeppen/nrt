#ifndef __INFERRED_TNBPNAMETABLE_H
#define __INFERRED_TNBPNAMETABLE_H

class TNBPNameTable {
public:
	void Add();
	void AddPending();
	void Cancel();
	void Completion();
	void GetEnumeratorSeed();
	void GetPending();
	void GetPendingByReference();
	void HandleLookupRequest();
	void Hash();
	void Init();
	void MatchFromTable();
	void NameInTable();
	void RegisterName();
	void RegisterNameCompletion();
	void Remove();
	void RemovePending();
	void SendLookupReply();
	TNBPNameTable();
	void UnRegisterName();
	~TNBPNameTable();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField24; // Offset: 24
	long fField40; // Offset: 40
	long fField116; // Offset: 116
	long fField284; // Offset: 284
	long fField288; // Offset: 288
};

#endif
