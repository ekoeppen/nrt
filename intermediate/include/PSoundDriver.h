#ifndef __INFERRED_PSOUNDDRIVER_H
#define __INFERRED_PSOUNDDRIVER_H

class PSoundDriver {
public:
	void CurrentInputPtr();
	void CurrentOutputPtr();
	void Delete();
	void DisableExtSoundSource();
	void EnableExtSoundSource();
	void GetSoundHardwareInfo();
	void InputIntHandler();
	void InputIntHandlerDispatcher();
	void InputIsEnabled();
	void InputIsRunning();
	void InputVolume();
	void New();
	void OutputIntHandler();
	void OutputIntHandlerDispatcher();
	void OutputIsEnabled();
	void OutputIsRunning();
	void OutputVolume();
	void PowerInputOff();
	void PowerInputOn();
	void PowerOutputOff();
	void PowerOutputOn();
	void ScheduleInputBuffer();
	void ScheduleOutputBuffer();
	void SetInputBuffers();
	void SetInputCallbackProc();
	void SetOutputBuffers();
	void SetOutputCallbackProc();
	void SetSoundHardwareInfo();
	void StartInput();
	void StartOutput();
	void StopInput();
	void StopOutput();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
