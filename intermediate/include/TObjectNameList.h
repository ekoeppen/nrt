#ifndef __INFERRED_TOBJECTNAMELIST_H
#define __INFERRED_TOBJECTNAMELIST_H

class TObjectNameList {
public:
	void Add();
	void Lookup();
	void Remove();

protected:
	long fField4; // Offset: 4
	long fField16; // Offset: 16
};

#endif
