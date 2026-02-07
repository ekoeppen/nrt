#ifndef __INFERRED_TLOCALTALKTOOL_H
#define __INFERRED_TLOCALTALKTOOL_H

class TLocalTalkTool {
public:
	void AddCurrentOptions();
	void AddDefaultOptions();
	void AllocateBuffers();
	void BitCount();
	void BytesAvailable();
	void Close();
	void ConnectStart();
	void DeallocateBuffers();
	void DelayLinkIsFree();
	void DoControl();
	void DoInput();
	void DoOutput();
	void DoPutComplete();
	void ExtStatusInt();
	void GetChannelIntHandlers();
	void GetControlPacket();
	void GetRandomNodeID();
	void GetSizeOf();
	void GetToolName();
	void IHReqHandler();
	void IHRequest();
	void KillGet();
	void KillPut();
	void ProcessOptionStart();
	void ReceiverErrorReset();
	void ResetStats();
	void ResetTransmitTimer();
	void RxCAvailableInt();
	void RxCSpecialInt();
	void RxDMAPacketInterrupt();
	void SetAbortIntEnable();
	void SetDefaultBufferSizes();
	void SetTransmitTimer();
	void StopReadDataPacket();
	TLocalTalkTool();
	void TaskConstructor();
	void TaskDestructor();
	void TransmitStateMachine();
	void TransmitTimerInterrupt();
	void TurnOffSerChip();
	void TurnOnSerChip();
	void TxBEmptyInt();
	void TxDMAPacketInterrupt();
	~TLocalTalkTool();

protected:
	long fField24; // Offset: 24
	char fField88; // Offset: 88
	long fField624; // Offset: 624
	long fField628; // Offset: 628
	long fField636; // Offset: 636
	char fField652; // Offset: 652
	char fField654; // Offset: 654
	long fField668; // Offset: 668
	char fField676; // Offset: 676
	long fField760; // Offset: 760
	long fField764; // Offset: 764
	long fField772; // Offset: 772
	long fField816; // Offset: 816
	long fField896; // Offset: 896
	long fField900; // Offset: 900
	char fField916; // Offset: 916
	char fField917; // Offset: 917
	char fField918; // Offset: 918
	char fField919; // Offset: 919
	char fField920; // Offset: 920
	char fField921; // Offset: 921
	char fField922; // Offset: 922
	char fField923; // Offset: 923
	char fField924; // Offset: 924
	char fField925; // Offset: 925
	char fField926; // Offset: 926
	long fField1020; // Offset: 1020
	char fField1032; // Offset: 1032
	char fField1033; // Offset: 1033
	char fField1034; // Offset: 1034
	char fField1035; // Offset: 1035
	char fField1036; // Offset: 1036
	char fField1037; // Offset: 1037
	char fField1038; // Offset: 1038
	long fField1040; // Offset: 1040
	long fField1044; // Offset: 1044
	long fField1048; // Offset: 1048
	char fField1052; // Offset: 1052
	char fField1053; // Offset: 1053
	char fField1054; // Offset: 1054
	char fField1055; // Offset: 1055
	char fField1056; // Offset: 1056
	char fField1057; // Offset: 1057
	char fField1058; // Offset: 1058
	char fField1072; // Offset: 1072
	char fField1073; // Offset: 1073
	char fField1074; // Offset: 1074
	char fField1075; // Offset: 1075
	long fField1076; // Offset: 1076
};

#endif
