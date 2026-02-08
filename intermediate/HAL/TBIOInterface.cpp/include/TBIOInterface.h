#ifndef __INFERRED_TBIOINTERFACE_H
#define __INFERRED_TBIOINTERFACE_H

class TBIOInterface {
public:
	void BIOFIFOWriteCommand();
	void BIOReadCommand();
	void BIOReadCommandData();
	void BIOReadRegister();
	void BIOUnSafeReadRegister();
	void BIOUnSafeWriteCommand();
	void BIOWriteCommand();
	void ClearInterrupt();
	void DeregisterInterrupt();
	void DisableInterrupt();
	void EnableInterrupt();
	void GetInterruptFlags();
	void Init();
	void MainKeynesInterrupt();
	void MapFunctionToBit();
	void MapFunctionToBitMask();
	void ReadBIOStatus();
	void ReadDIOPins();
	void RegisterInterrupt();
	void SetInterruptFlags();
	void SoftReset();
	void UpdateInterruptFlags();
	void UpdateKeynesBit();
	void WaitBIOStatus();
	void WriteDIODir();
	void WriteDIOPins();
	void WriteDIOPullup();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
};

#endif
