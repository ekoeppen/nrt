#ifndef __INFERRED_TXOBJECTITERATOR_H
#define __INFERRED_TXOBJECTITERATOR_H

class TXObjectIterator {
public:
	void Next();
	void SetOffset();
	TXObjectIterator();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
};

#endif
