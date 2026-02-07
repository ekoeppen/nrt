#ifndef __INFERRED_TDARRAY_H
#define __INFERRED_TDARRAY_H

class TDArray {
public:
	void Delete();
	void DeleteEntries();
	void IDArray();
	void Insert();
	void InsertEntries();
	void InsertEntry();
	void Make();
	TDArray();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField28; // Offset: 28
};

#endif
