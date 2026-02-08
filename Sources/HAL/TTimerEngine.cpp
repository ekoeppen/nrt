#include "TimerEngine.h"
#include "SharedTypes.h"
#include "KernelUtility.h"

/**
 * Symbol: TTimerEngine::__ct(void)
 * Address: 00255eec
 */
TTimerEngine::TTimerEngine() : TDoubleQContainer() {
}

/**
 * Symbol: TTimerEngine::Start(void)
 * Address: 00255ee8
 */
void TTimerEngine::Start(void) {
}

/**
 * Symbol: TTimerEngine::Alarm(void)
 * Address: 00255cb0
 */
void TTimerEngine::Alarm(void) {
	EnterAtomic();
	TSharedMemMsg * msg;
	while ((msg = (TSharedMemMsg *)Peek()) != nil) {
		TTime now;
		GetClock(&now);
		// TSharedMemMsg::fTime is at offset 40
		TTime * msgTime = (TTime *)((char *)msg + 40);
		if (CompCompare(&now, msgTime) >= 0) {
			Remove();
			// fFlags at offset 60, clear bits 0x600
			unsigned long * flags = (unsigned long *)((char *)msg + 60);
			*flags &= ~0x600;
			
			// Callback at offset 164, arg at 160
			void (*callback)(void *) = *(void (**)(void *))((char *)msg + 164);
			void * arg = *(void **)((char *)msg + 160);
			if (callback) {
				callback(arg);
			}
		} else {
			if (SetAlarmAtomic(*msgTime) != 0) {
				break;
			}
		}
	}
	if (msg == nil) {
		ClearAlarmAtomic();
	}
	ExitAtomic();
}

/**
 * Symbol: TTimerEngine::Remove(TSharedMemMsg *)
 * Address: 00255c20
 */
void TTimerEngine::Remove(TSharedMemMsg * msg) {
	EnterAtomic();
	// This logic matches the assembly's use of RemoveFromQueue and Peek
	if (RemoveFromQueue(msg) == 0) {
		if (Peek() == msg) {
			Remove();
			if (Peek() == nil) {
				ClearAlarmAtomic();
			} else {
				Alarm();
			}
		} else {
			RemoveFromQueue(msg);
		}
	}
	// fFlags at offset 60, clear bits 0x600
	unsigned long * flags = (unsigned long *)((char *)msg + 60);
	*flags &= ~0x600;
	ExitAtomic();
}
