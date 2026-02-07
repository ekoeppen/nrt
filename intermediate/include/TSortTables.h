#ifndef __INFERRED_TSORTTABLES_H
#define __INFERRED_TSORTTABLES_H

class TSortTables {
public:
	void AddSortTable();
	void GetSortTable();
	void GetTableEntry();
	void SetDefaultTableId();
	void Subscribe();
	void Unsubscribe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField60; // Offset: 60
	long fField64; // Offset: 64
};

#endif
