#ifndef __INFERRED_TTYPEASSOC_H
#define __INFERRED_TTYPEASSOC_H

class TTypeAssoc {
public:
	void AddAssoc();
	void Copy();
	void Dump();
	void GetAssoc();
	void IDispose();
	void ITypeAssoc();
	void Make();
	void MergeAssoc();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	char fField24; // Offset: 24
};

#endif
