#ifndef __INFERRED_TVOYAGERPLATFORM_H
#define __INFERRED_TVOYAGERPLATFORM_H

class TVoyagerPlatform {
public:
	void BacklightTrigger();
	void CheckForKeyboard();
	void ClassInfo();
	void Delete();
	void EnableSysPowerInterrupt();
	void GetMutex();
	void GetPCMCIAPowerSpec();
	void GetPowerMapEntry();
	void GetSubsystemPower();
	void Init();
	void InterruptHandler();
	void New();
	void PauseSystem();
	void PowerOffAllSubsystems();
	void PowerOffDMA();
	void PowerOffIC5v();
	void PowerOffSrc12v();
	void PowerOffSrc5v();
	void PowerOffSubsystem();
	void PowerOffSystem();
	void PowerOnDMA();
	void PowerOnDeviceCheck();
	void PowerOnIC5v();
	void PowerOnSrc12v();
	void PowerOnSrc5v();
	void PowerOnSubsystem();
	void PowerOnSystem();
	void RegisterPowerSwitchInterrupt();
	void RelMutex();
	void ResetZAPStoreCheck();
	void SamplePowerSwitchStateMachine();
	void SerialPort0LineDriverConfig();
	void SerialPort3LineDriverConfig();
	void SetSubsystemPower();
	void Sizeof();
	void Sleep();
	void StartKeyboardDriver();
	void TimerInterruptHandler();
	void TranslatePowerEvent();
	void TurnOffMiltonPwrRegBit();
	void TurnOnMiltonPwrRegBit();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	char fField52; // Offset: 52
	char fField53; // Offset: 53
	char fField54; // Offset: 54
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	long fField88; // Offset: 88
	long fField92; // Offset: 92
	char fField93; // Offset: 93
	char fField224; // Offset: 224
	char fField225; // Offset: 225
	char fField226; // Offset: 226
	char fField227; // Offset: 227
	long fField232; // Offset: 232
	long fField236; // Offset: 236
	long fField240; // Offset: 240
	long fField244; // Offset: 244
	long fField248; // Offset: 248
	long fField252; // Offset: 252
	long fField256; // Offset: 256
	char fField3169; // Offset: 3169
};

#endif
