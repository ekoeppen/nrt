#ifndef __INFERRED_TRAMTABLE_H
#define __INFERRED_TRAMTABLE_H

class TRAMTable {
public:
	void Add();
	void GetPPage();
	void GetPPageWithTag();
	void GetRamSize();
	void Init();
	void Remove();

protected:
	long fField2; // Offset: 2
	long fField8; // Offset: 8
};

#endif
