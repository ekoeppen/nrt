#ifndef __INFERRED_TGCSAFESORTEDLIST_H
#define __INFERRED_TGCSAFESORTEDLIST_H

class TGCSafeSortedList {
public:
	void GCMarkItems();
	void GCMarkRefs();
	void GCUpdateItems();
	void GCUpdateRefs();
	TGCSafeSortedList();
	~TGCSafeSortedList();

protected:
};

#endif
