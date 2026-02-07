#ifndef __INFERRED_TSHARPIRTOOL_H
#define __INFERRED_TSHARPIRTOOL_H

class TSharpIRTool {
public:
	void AbortReceive();
	void AbortSend();
	void AcceptStart();
	void AddCurrentOptions();
	void AddDefaultOptions();
	void AllocateBuffers();
	void CheckReceiveDone();
	void ConnectStart();
	void DoConnectComplete();
	void DoInput();
	void DoListenComplete();
	void DoOutput();
	void EmptyInputBuffer();
	void FillOutputBuffer();
	void GetSizeOf();
	void GetToolName();
	void HandleControl();
	void HandleData();
	void HandleNegotiate();
	void HandleRequest();
	void KillGet();
	void KillPut();
	void ListenStart();
	void NextState();
	void OpenStart();
	void PrepControlPacket();
	void PrepDataPacket();
	void PrepLeadIn();
	void PrepNegotiatePacket();
	void ProcessOptionStart();
	void ReceiveControl();
	void ReceiveData();
	void ReceiveLeadIn();
	void ReceiveNegotiate();
	void ResetStateMachine();
	void SelectProtocol();
	void SelectSpeed();
	void SetChannelFilter();
	void SetIOParms();
	void SetSerialChipSelect();
	void StartAbort();
	void StartInput();
	void StartOutput();
	void StartReceive();
	void StartTimer1();
	void StartTimer2();
	void StartTransmit();
	void StopReceive();
	void StopTimer1();
	void StopTimer2();
	void StopTransmit();
	TSharpIRTool();
	void TaskConstructor();
	void TaskDestructor();
	void TerminateComplete();
	~TSharpIRTool();

protected:
	char fField1; // Offset: 1
	long fField624; // Offset: 624
	long fField628; // Offset: 628
	char fField632; // Offset: 632
	long fField636; // Offset: 636
	long fField640; // Offset: 640
	char fField652; // Offset: 652
	long fField768; // Offset: 768
	long fField772; // Offset: 772
	long fField780; // Offset: 780
	long fField992; // Offset: 992
	long fField996; // Offset: 996
	long fField1176; // Offset: 1176
	char fField1200; // Offset: 1200
	char fField1201; // Offset: 1201
	char fField1202; // Offset: 1202
	char fField1203; // Offset: 1203
	long fField1728; // Offset: 1728
	long fField1732; // Offset: 1732
	long fField1736; // Offset: 1736
	long fField1740; // Offset: 1740
	long fField1744; // Offset: 1744
	long fField1748; // Offset: 1748
	char fField1752; // Offset: 1752
	long fField1772; // Offset: 1772
	long fField1788; // Offset: 1788
	long fField1808; // Offset: 1808
	long fField1824; // Offset: 1824
	long fField1828; // Offset: 1828
	long fField1832; // Offset: 1832
	long fField1836; // Offset: 1836
	long fField1840; // Offset: 1840
	long fField1856; // Offset: 1856
	long fField1860; // Offset: 1860
	long fField1876; // Offset: 1876
	long fField1880; // Offset: 1880
	long fField1884; // Offset: 1884
	long fField1888; // Offset: 1888
	long fField1896; // Offset: 1896
	long fField1900; // Offset: 1900
	long fField1916; // Offset: 1916
	long fField1920; // Offset: 1920
	char fField1924; // Offset: 1924
	char fField1925; // Offset: 1925
	char fField1926; // Offset: 1926
};

#endif
