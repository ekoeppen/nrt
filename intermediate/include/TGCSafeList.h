#ifndef __INFERRED_TGCSAFELIST_H
#define __INFERRED_TGCSAFELIST_H

class TGCSafeList {
public:
	void GCMarkItems();
	void GCMarkRefs();
	void GCUpdateItems();
	void GCUpdateRefs();
	TGCSafeList();
	~TGCSafeList();

protected:
};

#endif
