#ifndef __INFERRED_TFIQTIMER_H
#define __INFERRED_TFIQTIMER_H

class TFIQTimer {
public:
	void AcquireFIQTimer();
	void DecrementFIQTimers();
	void FIQTimerInterrupt();
	void Init();
	void InitFIQTimer();
	void InitializeFIQTimers();
	void ReleaseFIQTimer();
	void ReleaseFIQTimers();
	void ResetFIQTimer();
	void ServiceFIQTimers();
	void SetFIQTimer();
	void SetFIQTimerForShortestDelay();
	TFIQTimer();

protected:
	long fField4; // Offset: 4
	char fField88; // Offset: 88
	char fField89; // Offset: 89
	char fField90; // Offset: 90
	long fField92; // Offset: 92
};

#endif
