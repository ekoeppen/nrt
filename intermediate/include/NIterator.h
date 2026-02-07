#ifndef __INFERRED_NITERATOR_H
#define __INFERRED_NITERATOR_H

class NIterator {
public:
	void DeleteArray();
	void InsertElements();
	void RemoveElements();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField20; // Offset: 20
	char fField24; // Offset: 24
};

#endif
