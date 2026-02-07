#ifndef __INFERRED_TIRQTIMER_H
#define __INFERRED_TIRQTIMER_H

class TIRQTimer {
public:
	void AcquireIRQTimer();
	void DecrementIRQTimers();
	void IRQTimerInterrupt();
	void Init();
	void InitIRQTimer();
	void InitializeIRQTimers();
	void ReleaseIRQTimer();
	void ReleaseIRQTimers();
	void ResetIRQTimer();
	void ServiceIRQTimers();
	void SetIRQTimer();
	void SetIRQTimerForShortestDelay();
	TIRQTimer();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField204; // Offset: 204
	char fField205; // Offset: 205
	char fField206; // Offset: 206
	long fField208; // Offset: 208
	long fField212; // Offset: 212
};

#endif
