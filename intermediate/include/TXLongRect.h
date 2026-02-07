#ifndef __INFERRED_TXLONGRECT_H
#define __INFERRED_TXLONGRECT_H

class TXLongRect {
public:
	void IsPointInside();
	void Offset();
	void Sect();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
};

#endif
