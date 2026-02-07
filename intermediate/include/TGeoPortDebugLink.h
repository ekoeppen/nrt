#ifndef __INFERRED_TGEOPORTDEBUGLINK_H
#define __INFERRED_TGEOPORTDEBUGLINK_H

class TGeoPortDebugLink {
public:
	void BeaconDetect();
	void ClassInfo();
	void Delete();
	void EnbIntOnNextRxC();
	void GetBeaconMsg();
	void GetNextByte();
	void GetSerialChipPtr();
	void GrabSerialPort();
	void Init();
	void InitForAsync();
	void InitForHDLC();
	void Install();
	void New();
	void PollByte();
	void PowerCycle();
	void PutByte();
	void PutByteEnd();
	void PutByteStart();
	void ReEnableReceiver();
	void ReadDebugFrame();
	void ReadNextByteWithTimeOut();
	void Remove();
	void ResetTimeOut();
	void Send2BytePacket();
	void SendDataFrame();
	void SerialInterrupt();
	void ShortTimerDelay();
	void Sizeof();
	void TimedOut();
	void WaitFor2BytePacket();
	void WriteDebugFrame();

protected:
	char fField1; // Offset: 1
	long fField4; // Offset: 4
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	char fField40; // Offset: 40
	char fField41; // Offset: 41
	char fField43; // Offset: 43
	char fField44; // Offset: 44
	char fField45; // Offset: 45
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	char fField1024; // Offset: 1024
	char fField3072; // Offset: 3072
};

#endif
