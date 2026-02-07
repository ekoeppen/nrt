#ifndef __INFERRED_TPAPTIMER_H
#define __INFERRED_TPAPTIMER_H

class TPAPTimer {
public:
	void Init();
	TPAPTimer();
	void Timeout();

protected:
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField100; // Offset: 100
};

#endif
