#include "TimerQueue.h"

/**
 * Symbol: TTimerPort::__ct(void)
 * Address: 00255758
 */
TTimerPort::TTimerPort() : TUPort() {
	fQueue = nil;
}

/**
 * Symbol: TTimerPort::__dt(void)
 * Address: 00255790
 */
TTimerPort::~TTimerPort() {
	if (fQueue) {
		delete fQueue;
	}
}

/**
 * Symbol: TTimerPort::Init(void)
 * Address: 002557d4
 */
NewtonErr TTimerPort::Init(void) {
	NewtonErr err = TUPort::Init();
	if (err == noErr) {
		fQueue = new TTimerQueue();
		if (fQueue == nil) {
			err = kOSErrNoMemory;
		}
	}
	return err;
}

/**
 * Symbol: TTimerPort::TimedReceive(...)
 * Address: 00255814
 */
NewtonErr TTimerPort::TimedReceive(ULong* returnSize,
								void* content,
								ULong size,
								TUMsgToken* token,
								ULong* returnMsgType,
								ULong msgFilter,
								Boolean onMsgAvail,
								Boolean tokenOnly) {
	NewtonErr err;
	for (;;) {
		TTimeout nextDelta = fQueue->Check();
		err = TUPort::Receive(returnSize, content, size, token, returnMsgType, nextDelta, msgFilter, onMsgAvail, tokenOnly);
		if (err != kOSErrTimeout) break;
	}
	return err;
}
