#ifndef __INFERRED_TTYPELIST_H
#define __INFERRED_TTYPELIST_H

class TTypeList {
public:
	void AddType();
	void AddUnique();
	void Dump();
	void FindType();
	void GetType();
	void ITypeList();
	void Make();

protected:
	long fField12; // Offset: 12
};

#endif
