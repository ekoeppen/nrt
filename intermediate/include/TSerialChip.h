#ifndef __INFERRED_TSERIALCHIP_H
#define __INFERRED_TSERIALCHIP_H

class TSerialChip {
public:
	void AllSent();
	void CardRemoved();
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
	void Reconfigure();
	void RemoveChipHandler();
	void Reset();
	void ResetSerialStatus();
	void ResetTxBEmpty();
	void RxBufFull();
	void RxDMAControl();
	void SendControlPacket();
	void SetBreak();
	void SetIOParms();
	void SetIntSourceEnable();
	void SetInterruptEnable();
	void SetSDLCAddress();
	void SetSerialMode();
	void SetSerialOutputs();
	void SetSpeed();
	void SetTxDTransceiverEnable();
	void SysEventNotify();
	void TxBufEmpty();
	void TxDMAControl();
	void WaitForAllSent();
	void WaitForPacket();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
