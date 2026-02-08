#ifndef __INFERRED_TTIMERQUEUE_H
#define __INFERRED_TTIMERQUEUE_H

class TTimerQueue {
public:
	void Calibrate();
	void Cancel();
	void Check();
	void Dequeue();
	void Enqueue();
	TTimerQueue();
	~TTimerQueue();

protected:
	char fField12; // Offset: 12
};

#endif
