#include "NewtTypes.h"
#include "NewtonTime.h"

/*
	File:		TRealTimeClock.cpp

	Contains:	TRealTimeClock implementation.

	Copyright:	 1992-1997 by Apple Computer, Inc., all rights reserved.
*/

struct RealTimeAlarm {
    void *      fData;          // 0
    ULong       fAlarmTime;     // 4
    // ...
    ULong       fState;         // 32
    ULong       fFlags;         // 36
    // ...
    void        Fire(ULong now);
};

class TRealTimeClock {
public:
    static void Alarm();
    static void InterruptEntry();
    static void Cleanup();
    static void SleepingCheckFire();
    static void CheckAlarmsStaySleeping();

private:
    static ULong PrimRawSetAlarm(ULong time);
};

// Internal global state for RTC
struct RTCState {
    ULong       fUnused0;       // 0
    unsigned char fAlarmOccurred; // 4
    // ...
    ULong       fAlarmTimeSet;  // 16
    ULong       fAlarmInProgress; // 20
};

extern "C" RTCState gRTCState;
extern "C" RealTimeAlarm gRealTimeAlarms[16];
extern "C" ULong GetRealTimeClock();
extern "C" void ClearRealTimeClockAlarm();
extern "C" long Swap(long *addr, long val);

void TRealTimeClock::InterruptEntry() {
    Alarm();
}

void TRealTimeClock::Cleanup() {
    Alarm();
}

void TRealTimeClock::Alarm() {
    gRTCState.fAlarmInProgress = 1;
    
    if (Swap((long *)&gRTCState.fAlarmInProgress, 1) != 0) {
        return;
    }

    ClearRealTimeClockAlarm();
    ULong now = GetRealTimeClock();
    gRTCState.fAlarmOccurred = 0;
    
    ULong nextAlarm = 0xFFFFFFFF;
    bool hasNext = false;

    for (int i = 0; i < 16; ++i) {
        RealTimeAlarm &alarm = gRealTimeAlarms[i];
        alarm.Fire(now);
        
        if (alarm.fState & 0xFF) {
            if (!hasNext || alarm.fAlarmTime < nextAlarm) {
                nextAlarm = alarm.fAlarmTime;
                hasNext = true;
            }
        }
    }

    if (hasNext) {
        PrimRawSetAlarm(nextAlarm);
    }
    
    gRTCState.fAlarmTimeSet = 0;
    gRTCState.fAlarmInProgress = 0;
}

void TRealTimeClock::CheckAlarmsStaySleeping() {
    ULong now = GetRealTimeClock();
    
    for (int i = 0; i < 16; ++i) {
        RealTimeAlarm &alarm = gRealTimeAlarms[i];
        if (alarm.fState != 0 && alarm.fAlarmTime <= now) {
            if (alarm.fFlags & 0xFF) {
                // This alarm prevents staying asleep?
                return; 
            }
            alarm.Fire(now);
            gRTCState.fAlarmOccurred = 0;
        }
    }
}
