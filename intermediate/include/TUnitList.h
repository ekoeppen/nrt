#ifndef __INFERRED_TUNITLIST_H
#define __INFERRED_TUNITLIST_H

class TUnitList {
public:
	void AddUnique();
	void AddUnit();
	void Dump();
	void GetUnit();
	void IUnitList();
	void Make();
	void Purge();

protected:
	long fField12; // Offset: 12
};

#endif
