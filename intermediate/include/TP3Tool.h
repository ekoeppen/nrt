#ifndef __INFERRED_TP3TOOL_H
#define __INFERRED_TP3TOOL_H

class TP3Tool {
public:
	void BindStart();
	void CancelModemCmds();
	void CancelTimer();
	void ClearPacketsWaitingOnAck();
	void CloseComplete();
	void CnctPostConnect();
	void ConnectStart();
	void DeliverInput();
	void ForwardOptions();
	void GetBytes();
	void GetBytesComplete();
	void GetFramedBytes();
	void GetNextTermProc();
	void GetSizeOf();
	void GetToolName();
	void HandlePacket();
	void HandleReply();
	void HandleRequest();
	void HangUp();
	void Init();
	void InitState();
	void KillGet();
	void KillModemRequest();
	void KillPut();
	void KillTimer();
	void ModemCommandComplete();
	void ModemConnectComplete();
	void OpenStart();
	void PostGetBytes();
	void PostPutBytes();
	void PostTimer();
	void ProcessOptionStart();
	void PutBytes();
	void PutBytesComplete();
	void PutFramedBytes();
	void ReadBody();
	void ReadHeader();
	void ReadSync();
	void ResetHeartBeat();
	void SendInitPacket();
	void SendNextOutput();
	void SendPacket();
	void SendSystemPacket();
	TP3Tool();
	void TaskConstructor();
	void TaskDestructor();
	void TerminateComplete();
	void TimerComplete();
	void UnbindStart();
	~TP3Tool();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField76; // Offset: 76
	long fField220; // Offset: 220
	long fField224; // Offset: 224
	long fField228; // Offset: 228
	long fField232; // Offset: 232
	long fField236; // Offset: 236
	long fField388; // Offset: 388
	long fField516; // Offset: 516
	long fField628; // Offset: 628
	char fField649; // Offset: 649
	char fField650; // Offset: 650
	long fField652; // Offset: 652
	long fField656; // Offset: 656
	long fField708; // Offset: 708
	char fField712; // Offset: 712
	char fField713; // Offset: 713
	long fField716; // Offset: 716
	long fField720; // Offset: 720
	long fField748; // Offset: 748
	long fField760; // Offset: 760
	long fField772; // Offset: 772
	char fField784; // Offset: 784
	char fField785; // Offset: 785
	long fField788; // Offset: 788
	long fField804; // Offset: 804
	long fField816; // Offset: 816
	long fField820; // Offset: 820
	char fField832; // Offset: 832
	long fField860; // Offset: 860
	long fField920; // Offset: 920
	long fField956; // Offset: 956
	long fField960; // Offset: 960
	long fField3568; // Offset: 3568
	long fField3572; // Offset: 3572
	long fField3576; // Offset: 3576
	long fField3580; // Offset: 3580
	long fField3612; // Offset: 3612
	char fField3616; // Offset: 3616
	char fField3617; // Offset: 3617
	char fField3618; // Offset: 3618
	char fField3619; // Offset: 3619
	char fField3620; // Offset: 3620
	long fField3836; // Offset: 3836
};

#endif
