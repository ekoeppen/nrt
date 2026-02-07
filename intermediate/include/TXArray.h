#ifndef __INFERRED_TXARRAY_H
#define __INFERRED_TXARRAY_H

class TXArray {
public:
	void CheckUnusedCount();
	void Compact();
	void CopyTo();
	void GetElementPtr();
	void GetLastElementPtr();
	void Insert();
	void Lock();
	void Remove();
	void Replace();
	void Reserve();
	void SetCount();
	void SetPhysicalCount();
	void Stuff();
	TXArray();
	void Unlock();
	~TXArray();

protected:
	long fField4; // Offset: 4
	char fField8; // Offset: 8
	char fField9; // Offset: 9
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
};

#endif
