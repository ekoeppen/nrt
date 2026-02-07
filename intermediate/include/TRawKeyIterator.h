#ifndef __INFERRED_TRAWKEYITERATOR_H
#define __INFERRED_TRAWKEYITERATOR_H

class TRawKeyIterator {
public:
	void CopyInto();
	void LoadKey();
	void LoadRow();
	void Next();
	void Reset();
	TRawKeyIterator();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
};

#endif
