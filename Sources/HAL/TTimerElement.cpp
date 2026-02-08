#include "TimerQueue.h"

/**
 * Symbol: TTimerElement::__ct(TTimerQueue *, unsigned long)
 * Address: 0025564c
 */
TTimerElement::TTimerElement(TTimerQueue * inQueue, ULong inRefCon) {
	fQueue = inQueue;
	fNext = nil;
	fDelta = 0;
	fRefCon = inRefCon;
	fPrimed = false;
}

/**
 * Symbol: TTimerElement::__dt(void)
 * Address: 0025569c
 */
TTimerElement::~TTimerElement(void) {
	Cancel();
}

/**
 * Symbol: TTimerElement::Prime(unsigned long)
 * Address: 00255894
 */
Boolean TTimerElement::Prime(TTimeout inDelta) {
	if (fQueue && inDelta != 0) {
		if (fPrimed) {
			fQueue->Dequeue(this, true);
		}
		fDelta = inDelta;
		fQueue->Calibrate();
		fQueue->Enqueue(this);
	}
	return fPrimed;
}

/**
 * Symbol: TTimerElement::Cancel(void)
 * Address: 002558ec
 */
Boolean TTimerElement::Cancel(void) {
	if (fPrimed && fQueue) {
		fQueue->Dequeue(this, true);
	}
	return true;
}
