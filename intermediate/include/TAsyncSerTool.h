#ifndef __INFERRED_TASYNCSERTOOL_H
#define __INFERRED_TASYNCSERTOOL_H

class TAsyncSerTool {
public:
	void AddCurrentOptions();
	void AddDefaultOptions();
	void AllocateBuffers();
	void BytesAvailable();
	void CarrierTimerInterrupt();
	void ConfigureModemInterrupts();
	void ContinueOutputIH();
	void ContinueOutputST();
	void DataInObserver();
	void DeallocateBuffers();
	void DoBreakFraming();
	void DoGetComplete();
	void DoInput();
	void DoInputFlowControl();
	void DoOutput();
	void DoPutComplete();
	void EmptyInFIFO();
	void EmptyInputBuffer();
	void ExtStatusInt();
	void FillOutputBuffer();
	void FlushInputBytes();
	void FlushOutputBytes();
	void GPiOn();
	void GetChannelIntHandlers();
	void GetMoreOutChars();
	void GetNextOutChar();
	void GetSizeOf();
	void GetStats();
	void GetToolName();
	void HSKiOn();
	void HandleCharIn();
	void IHReqHandler();
	void IHRequest();
	void KillGet();
	void KillPut();
	void OutputStopped();
	void ProcessOptionStart();
	void ResetStats();
	void RestoreInputSendForIntDelay();
	void RxCAvailInt();
	void RxCSpecialInt();
	void RxDataAvailable();
	void RxMultiByteInterrupt();
	void SerialEvents();
	void SetEventEnables();
	void SetInputFlowControl();
	void SetInputSendForIntDelay();
	void SetOutputFlowControl();
	void StartOutputST();
	void SuspendTxDMA();
	void SyncInputBuffer();
	TAsyncSerTool();
	void TaskConstructor();
	void TaskDestructor();
	void TurnOffSerChip();
	void TurnOnSerChip();
	void TxBEmptyInt();
	void TxDMAInterrupt();
	void TxDataSent();
	void UpdateStats();
	~TAsyncSerTool();

protected:
	long fField624; // Offset: 624
	char fField634; // Offset: 634
	long fField636; // Offset: 636
	long fField640; // Offset: 640
	long fField644; // Offset: 644
	char fField649; // Offset: 649
	char fField650; // Offset: 650
	char fField652; // Offset: 652
	char fField654; // Offset: 654
	char fField658; // Offset: 658
	long fField716; // Offset: 716
	long fField772; // Offset: 772
	long fField780; // Offset: 780
	long fField816; // Offset: 816
	char fField892; // Offset: 892
	char fField896; // Offset: 896
	char fField897; // Offset: 897
	long fField1004; // Offset: 1004
	long fField1008; // Offset: 1008
	char fField1024; // Offset: 1024
	char fField1025; // Offset: 1025
	char fField1026; // Offset: 1026
	char fField1027; // Offset: 1027
	char fField1028; // Offset: 1028
	char fField1029; // Offset: 1029
	char fField1044; // Offset: 1044
	char fField1045; // Offset: 1045
	char fField1046; // Offset: 1046
	char fField1047; // Offset: 1047
	char fField1048; // Offset: 1048
	char fField1049; // Offset: 1049
	long fField1064; // Offset: 1064
	long fField1068; // Offset: 1068
	long fField1072; // Offset: 1072
	long fField1076; // Offset: 1076
	char fField1080; // Offset: 1080
	char fField1081; // Offset: 1081
	long fField1096; // Offset: 1096
	long fField1100; // Offset: 1100
	char fField1104; // Offset: 1104
	long fField1108; // Offset: 1108
	long fField1124; // Offset: 1124
	long fField1128; // Offset: 1128
	long fField1132; // Offset: 1132
	long fField1148; // Offset: 1148
	char fField1154; // Offset: 1154
	char fField1155; // Offset: 1155
	char fField1156; // Offset: 1156
	long fField1160; // Offset: 1160
	long fField1164; // Offset: 1164
	long fField1168; // Offset: 1168
	long fField1172; // Offset: 1172
	long fField1176; // Offset: 1176
	long fField1180; // Offset: 1180
	long fField1184; // Offset: 1184
	long fField1188; // Offset: 1188
};

#endif
