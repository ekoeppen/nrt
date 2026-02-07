#ifndef __INFERRED_TGPIOINTERFACE_H
#define __INFERRED_TGPIOINTERFACE_H

class TGPIOInterface {
public:
	void ClearInterrupt();
	void DeregisterInterrupt();
	void DisableInterrupt();
	void EnableInterrupt();
	void GetInterruptFlags();
	void Init();
	void MainGPIOInterrupt();
	void MapFunctionToBit();
	void MapFunctionToBitMask();
	void ReadGPIOData();
	void RegisterInterrupt();
	void SetAndClearInterruptFlags();
	void SetInterruptFlags();
	void WriteGPIOData();
	void WriteGPIODir();
	void WriteGPIOPolarity();
	void WriteGPIOPullup();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
};

#endif
