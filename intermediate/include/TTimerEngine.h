#ifndef __INFERRED_TTIMERENGINE_H
#define __INFERRED_TTIMERENGINE_H

class TTimerEngine {
public:
	void Alarm();
	void Init();
	void Queue();
	void QueueDelay();
	void QueueTimeout();
	void QueueTimer();
	void Remove();
	void Start();
	TTimerEngine();

protected:
};

#endif
