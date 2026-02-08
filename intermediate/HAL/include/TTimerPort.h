#ifndef __INFERRED_TTIMERPORT_H
#define __INFERRED_TTIMERPORT_H

class TTimerPort {
public:
	void Init();
	TTimerPort();
	void TimedReceive();
	~TTimerPort();

protected:
	char fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
