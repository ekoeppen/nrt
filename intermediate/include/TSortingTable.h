#ifndef __INFERRED_TSORTINGTABLE_H
#define __INFERRED_TSORTINGTABLE_H

class TSortingTable {
public:
	void CalcSize();
	void ConvertTextToLowestSort();
	void GetLigatureEntry();
	void GetProjectionEntry();

protected:
	long fField6; // Offset: 6
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField38; // Offset: 38
	long fField40; // Offset: 40
	long fField42; // Offset: 42
};

#endif
