#ifndef __INFERRED_TARRAY_H
#define __INFERRED_TARRAY_H

class TArray {
public:
	void Add();
	void AddEntry();
	void Clear();
	void Clone();
	void Compact();
	void CopyInto();
	void CutToIndex();
	void Dispose();
	void Dump();
	void GetEntry();
	void GetIterator();
	void IArray();
	void IDispose();
	void Load();
	void LoadFromSoup();
	void Lock();
	void Make();
	void Release();
	void Reuse();
	void Save();
	void SetEntry();
	void SizeInBytes();
	TArray();
	void Unlock();
	~TArray();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField99; // Offset: 99
};

#endif
