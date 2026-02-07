#ifndef __INFERRED_TREALTIMECLOCK_H
#define __INFERRED_TREALTIMECLOCK_H

class TRealTimeClock {
public:
	void Alarm();
	void AlarmStatus();
	void CheckAlarmsStaySleeping();
	void CheckIn();
	void CheckOut();
	void Cleanup();
	void ClearAlarm();
	void DeRegister();
	void FindSlot();
	void Init();
	void InterruptEntry();
	void NewName();
	void PrimRawSetAlarm();
	void PrimSetAlarm();
	void Register();
	void SetAlarm();
	void SetRealTimeClock();
	void SleepingCheckFire();

protected:
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
