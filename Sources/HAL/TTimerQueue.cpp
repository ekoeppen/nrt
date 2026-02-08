#include "TimerQueue.h"
#include "NewtonTime.h"

/**
 * Symbol: TTimerQueue::__ct(void)
 * Address: 0025591c
 */
TTimerQueue::TTimerQueue() {
	fHead = nil;
	fLastCalibrate.SetToNow();
	fTimeoutInProgress = false;
	Calibrate();
}

/**
 * Symbol: TTimerQueue::__dt(void)
 * Address: 0025595c
 */
TTimerQueue::~TTimerQueue() {
}

/**
 * Symbol: TTimerQueue::Check(void)
 * Address: 00255968
 */
TTimeout TTimerQueue::Check(void) {
	TTimeout nextDelta = 0;
	if (fHead != nil) {
		Calibrate();
		fTimeoutInProgress = true;
		TTimerElement * curr = fHead;
		while (curr != nil) {
			if (curr->fDelta > 4) break;
			
			TTimerElement * next = curr->fNext;
			Dequeue(curr, false);
			curr->Timeout();
			curr = next;
		}
		fTimeoutInProgress = false;
		if (fHead != nil) {
			nextDelta = fHead->fDelta;
		}
	}
	return nextDelta;
}

/**
 * Symbol: TTimerQueue::Calibrate(void)
 * Address: 002559f8
 */
void TTimerQueue::Calibrate(void) {
	if (fTimeoutInProgress) return;
	
	TTime now;
	GetGlobalTime(&now);
	
	TTime elapsed = now - fLastCalibrate;
	unsigned long elapsedTicks = elapsed.Low();
	
	TTimerElement * curr = fHead;
	if (curr != nil) {
		if (curr->fDelta >= elapsedTicks) {
			curr->fDelta -= elapsedTicks;
			if (curr->fDelta < 4) curr->fDelta = 4;
		} else {
			unsigned long remaining = elapsedTicks - curr->fDelta;
			curr->fDelta = 4;
			curr = curr->fNext;
			while (curr != nil) {
				if (curr->fDelta > remaining) {
					curr->fDelta -= remaining;
					break;
				}
				remaining -= curr->fDelta;
				curr->fDelta = 4;
				curr = curr->fNext;
			}
		}
	}
	fLastCalibrate = now;
}

/**
 * Symbol: TTimerQueue::Enqueue(TTimerElement *)
 * Address: 00255abc
 */
TTimerElement * TTimerQueue::Enqueue(TTimerElement * inElement) {
	if (inElement == nil || inElement->fQueue != this || inElement->fDelta == 0) {
		return nil;
	}

	TTimerElement * prev = nil;
	TTimerElement * curr = fHead;
	
	while (curr != nil) {
		if (inElement->fDelta < curr->fDelta) {
			break;
		}
		
		inElement->fDelta -= curr->fDelta;
		if (inElement->fDelta < 4) inElement->fDelta = 4;
		
		prev = curr;
		curr = curr->fNext;
	}
	
	inElement->fNext = curr;
	if (prev == nil) {
		fHead = inElement;
	} else {
		prev->fNext = inElement;
	}
	
	if (curr != nil) {
		if (curr->fDelta > inElement->fDelta) {
			curr->fDelta -= inElement->fDelta;
		} else {
			curr->fDelta = 0;
		}
		if (curr->fDelta < 4) curr->fDelta = 4;
	}
	
	inElement->fPrimed = true;
	return inElement;
}

/**
 * Symbol: TTimerQueue::Dequeue(TTimerElement *, unsigned char)
 * Address: 00255b68
 */
TTimerElement * TTimerQueue::Dequeue(TTimerElement * inElement, Boolean inAdjust) {
	if (inElement == nil || inElement->fQueue != this || fHead == nil) {
		return nil;
	}

	TTimerElement * prev = nil;
	TTimerElement * curr = fHead;
	
	while (curr != nil && curr != inElement) {
		prev = curr;
		curr = curr->fNext;
	}
	
	if (curr == nil) return nil;
	
	if (inAdjust && inElement->fNext != nil) {
		inElement->fNext->fDelta += inElement->fDelta;
	}
	
	if (prev == nil) {
		fHead = inElement->fNext;
	} else {
		prev->fNext = inElement->fNext;
	}
	
	inElement->fNext = nil;
	inElement->fPrimed = false;
	
	return inElement;
}

/**
 * Symbol: TTimerQueue::Cancel(unsigned long)
 * Address: 002556d8
 */
TTimerElement * TTimerQueue::Cancel(ULong inRefCon) {
	TTimerElement * prev = nil;
	TTimerElement * curr = fHead;
	
	while (curr != nil) {
		if (curr->fRefCon == inRefCon) {
			break;
		}
		prev = curr;
		curr = curr->fNext;
	}
	
	if (curr != nil) {
		if (curr->fNext != nil) {
			curr->fNext->fDelta += curr->fDelta;
		}
		
		if (prev == nil) {
			fHead = curr->fNext;
		} else {
			prev->fNext = curr->fNext;
		}
		
		curr->fNext = nil;
		curr->fPrimed = false;
	}
	
	return curr;
}
