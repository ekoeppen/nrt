#ifndef __INFERRED_TSTOREHASHTABLE_H
#define __INFERRED_TSTOREHASHTABLE_H

class TStoreHashTable {
public:
	void Abort();
	void Create();
	void Get();
	void Insert();
	TStoreHashTable();
	void TotalSize();

protected:
	long fField260; // Offset: 260
};

#endif
