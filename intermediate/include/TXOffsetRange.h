#ifndef __INFERRED_TXOFFSETRANGE_H
#define __INFERRED_TXOFFSETRANGE_H

class TXOffsetRange {
public:
	void CheckBounds();
	void Offset();
	void Set();
	TXOffsetRange();
	void operator==();

protected:
	char fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
