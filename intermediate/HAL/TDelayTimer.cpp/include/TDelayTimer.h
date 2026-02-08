#ifndef __INFERRED_TDELAYTIMER_H
#define __INFERRED_TDELAYTIMER_H

class TDelayTimer {
public:
	void ConvertFromHardwareTime();
	void ConvertToHardwareTime();
	void GetHardwareTime();
	void ResetTimeOut();
	void ShortTimerDelay();
	void ShortTimerDelayUntil();
	TDelayTimer();
	void TimedOut();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
