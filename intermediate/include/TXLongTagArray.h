#ifndef __INFERRED_TXLONGTAGARRAY_H
#define __INFERRED_TXLONGTAGARRAY_H

class TXLongTagArray {
public:
	void AddToElements();
	void Search();
	void SearchBigger();
	TXLongTagArray();
	~TXLongTagArray();

protected:
	long fField4; // Offset: 4
};

#endif
