#ifndef __INFERRED_TPLATFORMDRIVER_H
#define __INFERRED_TPLATFORMDRIVER_H

class TPlatformDriver {
public:
	void BacklightTrigger();
	void Delete();
	void EnableSysPowerInterrupt();
	void GetPCMCIAPowerSpec();
	void GetSubsystemPower();
	void Init();
	void InterruptHandler();
	void New();
	void PauseSystem();
	void PowerOffAllSubsystems();
	void PowerOffSubsystem();
	void PowerOffSystem();
	void PowerOnDeviceCheck();
	void PowerOnSubsystem();
	void PowerOnSystem();
	void RegisterPowerSwitchInterrupt();
	void ResetZAPStoreCheck();
	void SetSubsystemPower();
	void TimerInterruptHandler();
	void TranslatePowerEvent();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField617; // Offset: 617
};

#endif
