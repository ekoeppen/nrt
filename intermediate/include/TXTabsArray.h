#ifndef __INFERRED_TXTABSARRAY_H
#define __INFERRED_TXTABSARRAY_H

class TXTabsArray {
public:
	void GetIndTab();
	void InsertTab();
	void IsEqual();
	void RemoveTab();
	void SearchTab();
	TXTabsArray();
	void WidthToTab();
	~TXTabsArray();

protected:
	long fField4; // Offset: 4
};

#endif
