#ifndef __INFERRED_TOBJECTTABLEITERATOR_H
#define __INFERRED_TOBJECTTABLEITERATOR_H

class TObjectTableIterator {
public:
	void GetNextTableId();
	void GetNextTypedId();
	void GetNextTypedObject();
	void GetThisLineNextEntry();
	void SetCurrentPosition();
	TObjectTableIterator();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
};

#endif
