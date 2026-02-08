#ifndef __HAL_TIMER_H
#define __HAL_TIMER_H

#include "TimerQueue.h"

// TTimerEngine is a kernel-side class for HAL timer management
#include "KernelUtility.h"

class TSharedMemMsg;

class TTimerEngine : public TDoubleQContainer
{
public:
	TTimerEngine();
	void Start();
	void Alarm();
	void Remove(TSharedMemMsg * msg);
};

#endif
