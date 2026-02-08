#include "DelayTimer.h"
#include "NewtTypes.h"

/*
	File:		DelayTimer.cpp

	Contains:	TDelayTimer implementation.

	Copyright:	 1992-1997 by Apple Computer, Inc., all rights reserved.
*/

/**
 * Symbol: TDelayTimer::__ct(void)
 * Address: 0008e978
 */
TDelayTimer::TDelayTimer() {
    fTimerCounterReg = (volatile ULong *)0xF0181800;
}

/**
 * Symbol: TDelayTimer::ConvertToHardwareTime(unsigned long)
 * Address: 0008e9ac
 */
THardwareTimeUnits TDelayTimer::ConvertToHardwareTime(TTimeout time) {
    // This seems to just return time + 1 in the disassembly?
    // 8e9ac:	e2810001 	add	r0, r1, #1
    // Actually, maybe it's platform dependent and this is the Voyager version.
    return (THardwareTimeUnits)(time + 1);
}

/**
 * Symbol: TDelayTimer::ConvertFromHardwareTime(unsigned long)
 * Address: 0008e9b4
 */
TTimeout TDelayTimer::ConvertFromHardwareTime(THardwareTimeUnits time) {
    return (TTimeout)time;
}

/**
 * Symbol: TDelayTimer::GetHardwareTime(void)
 * Address: 0008e9bc
 */
THardwareTimeUnits TDelayTimer::GetHardwareTime() {
    return *fTimerCounterReg;
}

/**
 * Symbol: TDelayTimer::ShortTimerDelay(unsigned long)
 * Address: 0008e9c8
 */
void TDelayTimer::ShortTimerDelay(THardwareTimeUnits delay) {
    THardwareTimeUnits start = *fTimerCounterReg;
    while ((*fTimerCounterReg - start) < delay) ;
}

/**
 * Symbol: TDelayTimer::ResetTimeOut(unsigned long)
 * Address: 0008e9f4
 */
void TDelayTimer::ResetTimeOut(THardwareTimeUnits delay) {
    fTimeOutStart = *fTimerCounterReg;
    fTimeOutDelay = delay;
}

/**
 * Symbol: TDelayTimer::ShortTimerDelayUntil(unsigned long)
 * Address: 0008ea08
 */
void TDelayTimer::ShortTimerDelayUntil(THardwareTimeUnits delay) {
    THardwareTimeUnits start = fTimeOutStart;
    while ((*fTimerCounterReg - start) < delay) ;
}

/**
 * Symbol: TDelayTimer::TimedOut(void)
 * Address: 0008ea34
 */
FastBoolean TDelayTimer::TimedOut() {
    return (*fTimerCounterReg - fTimeOutStart) >= fTimeOutDelay;
}

/**
 * Symbol: TDelayTimer::TimedOut(unsigned long)
 * Address: 0008ea58
 */
FastBoolean TDelayTimer::TimedOut(THardwareTimeUnits delay) {
    return (*fTimerCounterReg - fTimeOutStart) >= delay;
}
