#ifndef __INFERRED_TSERIALCHIPVOYAGER_H
#define __INFERRED_TSERIALCHIPVOYAGER_H

class TSerialChipVoyager {
public:
	void AllSent();
	void AsyncDMAInInt();
	void AsyncDMAOutInt();
	void CardRemoved();
	void ClassInfo();
	void ClearSerialOutputs();
	void ConfigureForOutput();
	void ConfigureIRChip();
	void DCDInterrupt();
	void Delete();
	void DisableRxDMA();
	void EnableRxDMA();
	void EnableTVModeIR();
	void GetByte();
	void GetByteAndStatus();
	void GetFeatures();
	void GetRxErrorStatus();
	void GetSerialOutputs();
	void GetSerialStatus();
	void IRCmdOtherInterrupt();
	void IRCmdTxInterrupt();
	void Init();
	void InitByOption();
	void InitRxDMA();
	void InitTxDMA();
	void InitializeForNextHandler();
	void InstallChipHandler();
	void LTReceiveTimer();
	void LinkIsFree();
	void LocalTalkDMAInInt();
	void LocalTalkDMAOutInt();
	void LocalTalkInterrupt();
	void New();
	void PowerIsOn();
	void PowerOff();
	void PowerOn();
	void ProcessOption();
	void PutByte();
	void ReEnableReceiver();
	void ReadNextByteWithTimeOut();
	void ReceivePacket();
	void Reconfigure();
	void ReconfigureAll();
	void ReconfigureIOParms();
	void RegisterPrimaryInterrupt();
	void RemoveChipHandler();
	void Reset();
	void ResetSerialStatus();
	void ResetTxBEmpty();
	void RxBufFull();
	void RxDMAControl();
	void SendControlPacket();
	void SerialInterrupt();
	void SetBreak();
	void SetIOParms();
	void SetIntSourceEnable();
	void SetInterruptEnable();
	void SetModemDCDIntEnable();
	void SetSDLCAddress();
	void SetSerialMode();
	void SetSerialOutputs();
	void SetSpeed();
	void SetTxDTransceiverEnable();
	void Sizeof();
	void StartSendDMAPacket();
	void StopRcvDataPacket();
	void SysEventNotify();
	void TxBufEmpty();
	void TxDMAControl();
	void TxDMAEnable();
	void WaitForAllSent();
	void WaitForPacket();
	void WaitNextByteWithTimeOut();
	void WriteNextByteWithTimeOut();

protected:
	long fField4; // Offset: 4
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	char fField84; // Offset: 84
	char fField85; // Offset: 85
	char fField86; // Offset: 86
	char fField87; // Offset: 87
	char fField88; // Offset: 88
	char fField89; // Offset: 89
	char fField92; // Offset: 92
	char fField93; // Offset: 93
	char fField94; // Offset: 94
	char fField95; // Offset: 95
	char fField96; // Offset: 96
	char fField97; // Offset: 97
	char fField98; // Offset: 98
	char fField99; // Offset: 99
	char fField100; // Offset: 100
	char fField101; // Offset: 101
	char fField102; // Offset: 102
	char fField103; // Offset: 103
	char fField104; // Offset: 104
	char fField105; // Offset: 105
	char fField106; // Offset: 106
	char fField107; // Offset: 107
	long fField108; // Offset: 108
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField124; // Offset: 124
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	char fField140; // Offset: 140
	char fField141; // Offset: 141
	char fField142; // Offset: 142
	char fField143; // Offset: 143
	long fField144; // Offset: 144
	long fField148; // Offset: 148
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	char fField1024; // Offset: 1024
	char fField2048; // Offset: 2048
	char fField3072; // Offset: 3072
};

#endif
