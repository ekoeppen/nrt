#ifndef __INFERRED_NARRAY_H
#define __INFERRED_NARRAY_H

class NArray {
public:
	void At();
	void Contains();
	void Init();
	void InsertElements();
	NArray();
	void RemoveElements();
	void SetCount();
	void SetPhysicalCount();
	void Where();
	~NArray();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField28; // Offset: 28
};

#endif
