#ifndef __INFERRED_TVOYAGERMISCINTFIMPL_H
#define __INFERRED_TVOYAGERMISCINTFIMPL_H

class TVoyagerMiscIntfImpl {
public:
	void AcquireIRQTimer();
	void BIOFIFOWriteCommand();
	void BIOReadRegister();
	void BIOWriteCommand();
	void ClassInfo();
	void ClearADCPenWait();
	void ClearInterrupt();
	void DebuggerPowerCycleProc();
	void Delete();
	void DeregisterInterrupt();
	void DisableInterrupt();
	void Discharge();
	void EnableInterrupt();
	void GetGDebuggerBits();
	void GetGNewtConfig();
	void GetInterruptFlags();
	void GetSample();
	void InitIRQTimer();
	void MapDIOFunctionToBit();
	void MapDIOFunctionToBitMask();
	void MapGPIOFunctionToBit();
	void MapGPIOFunctionToBitMask();
	void New();
	void PowerOffAssignment();
	void PowerOnAssignment();
	void PrimeADCPenWait();
	void ReadBIOStatus();
	void ReadDIOPins();
	void ReadGPIOData();
	void RegisterBIOInterrupt();
	void RegisterGPIOInterrupt();
	void ReleaseIRQTimer();
	void ReleaseIRQTimers();
	void RequestAssignment();
	void ResetIRQTimer();
	void SaveCPUStateAndStopSystem();
	void SendPowerSwitchEvent();
	void SetAndClearInterruptFlags();
	void SetIRQTimer();
	void SetInterruptFlags();
	void SetSampleSize();
	void ShutDown();
	void Sizeof();
	void UsePolling();
	void WakeUp();
	void WriteDIODir();
	void WriteDIOPins();
	void WriteDIOPullup();
	void WriteGPIOData();
	void WriteGPIODir();
	void WriteGPIOPolarity();
	void WriteGPIOPullup();

protected:
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
};

#endif
