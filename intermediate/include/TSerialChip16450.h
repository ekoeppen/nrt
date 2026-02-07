#ifndef __INFERRED_TSERIALCHIP16450_H
#define __INFERRED_TSERIALCHIP16450_H

class TSerialChip16450 {
public:
	void AllSent();
	void CardRemoved();
	void CheckLineStatusReg();
	void CheckModemStatusReg();
	void ClassInfo();
	void ClearSerialOutputs();
	void ConfigureForOutput();
	void Delete();
	void GetByte();
	void GetByteAndStatus();
	void GetFeatures();
	void GetRxErrorStatus();
	void GetSerialOutputs();
	void GetSerialStatus();
	void Init();
	void InitByOption();
	void InitRxDMA();
	void InitTxDMA();
	void InstallChipHandler();
	void LinkIsFree();
	void New();
	void PowerIsOn();
	void PowerOff();
	void PowerOn();
	void ProcessOption();
	void PutByte();
	void ReEnableReceiver();
	void ReadSerReg();
	void Reconfigure();
	void RemoveChipHandler();
	void Reset();
	void ResetSerialStatus();
	void ResetState();
	void ResetTxBEmpty();
	void RxBufFull();
	void RxDMAControl();
	void SendControlPacket();
	void SerialInterrupt();
	void SetBreak();
	void SetIOParms();
	void SetIntSourceEnable();
	void SetInterruptEnable();
	void SetSDLCAddress();
	void SetSerialMode();
	void SetSerialOutputs();
	void SetSpeed();
	void SetTxDTransceiverEnable();
	void Sizeof();
	void SysEventNotify();
	void TxBufEmpty();
	void TxDMAControl();
	void WaitForAllSent();
	void WaitForPacket();
	void WriteSerReg();

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
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	char fField72; // Offset: 72
	char fField73; // Offset: 73
	char fField74; // Offset: 74
	char fField75; // Offset: 75
	char fField76; // Offset: 76
	char fField77; // Offset: 77
	char fField78; // Offset: 78
	char fField79; // Offset: 79
	char fField80; // Offset: 80
	char fField81; // Offset: 81
	char fField82; // Offset: 82
	char fField83; // Offset: 83
	char fField84; // Offset: 84
	long fField88; // Offset: 88
};

#endif
