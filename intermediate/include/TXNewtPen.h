#ifndef __INFERRED_TXNEWTPEN_H
#define __INFERRED_TXNEWTPEN_H

class TXNewtPen {
public:
	void CurrentLocation();
	void FirstLocation();
	void GetDoubleClickTime();
	void InkOff();
	void IsStillDown();
	TXNewtPen();

protected:
	long fField4; // Offset: 4
};

#endif
