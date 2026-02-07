#ifndef __INFERRED_TFAXTOOL_H
#define __INFERRED_TFAXTOOL_H

class TFaxTool {
public:
	void AcceptStart();
	void AdjustSpeedForFTT();
	void AllocateLineBuffers();
	void AllocateReceiveBuffers();
	void AllocateTCBuffer();
	void BindGetModemOptions();
	void BindStart();
	void BufferNextLine();
	void BuildControlFrame();
	void BuildDCS();
	void C20AbortSession();
	void C20ConfigModem();
	void C20FHS_OK_Rsp();
	void C20FHS_Rsp();
	void C20GetModemRsp();
	void C20RecvCfgMdm();
	void C20RecvCopyQualityCheck();
	void C20RecvFDR_Cmd();
	void C20RecvFDR_Rsp();
	void C20StateUpdate();
	void C20TransCfgMdm();
	void C20TransFDT_Cmd();
	void C20TransFDT_Rsp();
	void C20TransPhaseCSendEOM();
	void C2AbortSession();
	void C2ConfigModem();
	void C2DisFromCapabilities();
	void C2FHNG_OK_Rsp();
	void C2FHNG_Rsp();
	void C2GetModemRsp();
	void C2InitSubSystem();
	void C2ModemReqComplete();
	void C2ParseDISResponse();
	void C2PhaseBProcessOptions();
	void C2RecvCfgMdm();
	void C2RecvCopyQualityCheck();
	void C2RecvFDR_Cmd();
	void C2RecvFDR_Rsp();
	void C2SetSessionParameters();
	void C2StateUpdate();
	void C2TransCfgMdm();
	void C2TransFDT_Cmd();
	void C2TransFDT_Rsp();
	void C2TransFET_Cmd();
	void C2TransFET_Rsp();
	void C2TransFPTS_Rsp();
	void C2ValidateDCS();
	void CRPRetransmitTimeOut();
	void CancelModemCmd();
	void CancelTimer();
	void CloseComplete();
	void CompatibleRemoteRcvr();
	void CompatibleRemoteXmtr();
	void ConnectStart();
	void CopyQualityResponse();
	void DISTimeOut();
	void DecodeLinesBuf();
	void DoEndPage();
	void DoKillControl();
	void DoStartPage();
	void EndPageComplete();
	void FastestDataRate();
	void FigureTCSize();
	void ForwardOptions();
	void FreeLineBuffers();
	void FreeReceiveBuffers();
	void FreeTCBuffer();
	void GetBytes();
	void GetCommEvent();
	void GetCommand();
	void GetCommandComplete();
	void GetComplete();
	void GetFramedBytes();
	void GetIdentification();
	void GetNextTermProc();
	void GetResponse();
	void GetSizeOf();
	void GetToolName();
	void GetTrainingCheck();
	void GetTrainingCheckComplete();
	void HandleReply();
	void HandleRequest();
	void HangUp();
	void Init();
	void KillGet();
	void KillModemRequest();
	void KillPut();
	void KillTimer();
	void ListenStart();
	void ModemReqComplete();
	void OpenStart();
	void PhaseAAcceptModem();
	void PhaseAComplete();
	void PhaseAConnectModem();
	void PhaseAModemReqComplete();
	void PhaseBComplete();
	void PhaseBGetInitialID();
	void PhaseBGetResponse();
	void PhaseBPktComplete();
	void PhaseBProcessCommand();
	void PhaseBProcessDCSResponse();
	void PhaseBProcessDISResponse();
	void PhaseBProcessDTCResponse();
	void PhaseBProcessInitialID();
	void PhaseBProcessOptions();
	void PhaseBPutCommandToRcv();
	void PhaseBPutInitialID();
	void PhaseBPutPostMsgCmd();
	void PhaseBRespondToFTT();
	void PhaseBWaitForSignalGone();
	void PhaseCPktComplete();
	void PhaseCSendProgressEvent();
	void PhaseDBlackoutTimeout();
	void PhaseDGetResponse();
	void PhaseDPktComplete();
	void PhaseDProcessCommand();
	void PhaseDProcessEOPResponse();
	void PhaseDProcessMPSResponse();
	void PhaseDProcessReceivedPageConfirmation();
	void PhaseDProcessResponse();
	void PhaseDPutCRP();
	void PhaseDPutMCF();
	void PhaseDPutPostMsgCmd();
	void PhaseDWaitForSignalGone();
	void PhaseEPktComplete();
	void PostFaxEvent();
	void PostModemCommand();
	void PostRecvPkt();
	void PostTimer();
	void PostTransPkt();
	void ProcessGetBytesOptionStart();
	void ProcessOptionStart();
	void ProcessPutBytesOptionStart();
	void PutBytes();
	void PutCommandToRcv();
	void PutCommandToXmit();
	void PutComplete();
	void PutFramedBytes();
	void PutInitialId();
	void PutMessage();
	void PutTrainingCheck();
	void PutTrainingCheckComplete();
	void ReStartPhaseB();
	void ReceiveNextLinesBuf();
	void ResponseTimeOut();
	void RetransCommand();
	void SendEOM();
	void SendEOMCont();
	void SendNextLine();
	void SetDefaultCapabilities();
	void SetIdentification();
	void SetModemCapabilities();
	void SetSessionParameters();
	void StartPageComplete();
	void StartPhaseA();
	void StartPhaseB();
	void StartPhaseC();
	void StartPhaseD();
	void StartPhaseE();
	TFaxTool();
	void TaskConstructor();
	void TaskDestructor();
	void TerminateComplete();
	void TimeOutKillComplete();
	void TimerComplete();
	void UnbindStart();
	void ValidateDCS();
	void VerifyTrainingCheck();
	~TFaxTool();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	char fField3; // Offset: 3
	char fField4; // Offset: 4
	char fField5; // Offset: 5
	char fField6; // Offset: 6
	long fField16; // Offset: 16
	long fField24; // Offset: 24
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField76; // Offset: 76
	long fField156; // Offset: 156
	long fField388; // Offset: 388
	long fField392; // Offset: 392
	long fField468; // Offset: 468
	long fField516; // Offset: 516
	long fField620; // Offset: 620
	long fField624; // Offset: 624
	long fField628; // Offset: 628
	long fField632; // Offset: 632
	long fField636; // Offset: 636
	long fField640; // Offset: 640
	long fField644; // Offset: 644
	long fField648; // Offset: 648
	long fField652; // Offset: 652
	long fField656; // Offset: 656
	long fField660; // Offset: 660
	long fField664; // Offset: 664
	long fField668; // Offset: 668
	long fField672; // Offset: 672
	long fField676; // Offset: 676
	long fField680; // Offset: 680
	long fField684; // Offset: 684
	long fField688; // Offset: 688
	long fField692; // Offset: 692
	long fField696; // Offset: 696
	long fField700; // Offset: 700
	long fField704; // Offset: 704
	char fField720; // Offset: 720
	char fField721; // Offset: 721
	long fField724; // Offset: 724
	long fField728; // Offset: 728
	long fField732; // Offset: 732
	long fField736; // Offset: 736
	long fField748; // Offset: 748
	long fField756; // Offset: 756
	long fField760; // Offset: 760
	long fField764; // Offset: 764
	long fField768; // Offset: 768
	long fField772; // Offset: 772
	long fField776; // Offset: 776
	long fField804; // Offset: 804
	long fField812; // Offset: 812
	long fField820; // Offset: 820
	long fField824; // Offset: 824
	long fField872; // Offset: 872
	char fField876; // Offset: 876
	char fField877; // Offset: 877
	long fField960; // Offset: 960
	char fField964; // Offset: 964
	char fField965; // Offset: 965
	long fField1004; // Offset: 1004
	long fField1008; // Offset: 1008
	long fField1012; // Offset: 1012
	long fField1016; // Offset: 1016
	long fField1020; // Offset: 1020
	long fField1024; // Offset: 1024
	long fField1028; // Offset: 1028
	long fField1032; // Offset: 1032
	long fField1036; // Offset: 1036
	long fField1040; // Offset: 1040
	long fField1084; // Offset: 1084
	long fField1088; // Offset: 1088
	char fField1092; // Offset: 1092
	char fField1093; // Offset: 1093
	long fField1176; // Offset: 1176
	char fField1180; // Offset: 1180
	char fField1181; // Offset: 1181
	long fField1220; // Offset: 1220
	long fField1232; // Offset: 1232
	long fField1288; // Offset: 1288
	long fField1296; // Offset: 1296
	long fField1300; // Offset: 1300
	long fField1312; // Offset: 1312
	long fField1320; // Offset: 1320
	long fField1324; // Offset: 1324
	char fField1325; // Offset: 1325
	char fField1326; // Offset: 1326
	char fField1327; // Offset: 1327
	long fField1328; // Offset: 1328
	long fField1332; // Offset: 1332
	char fField1336; // Offset: 1336
	char fField1344; // Offset: 1344
	long fField1356; // Offset: 1356
	char fField1368; // Offset: 1368
	long fField1372; // Offset: 1372
	long fField1388; // Offset: 1388
	long fField1400; // Offset: 1400
	long fField1404; // Offset: 1404
	long fField1408; // Offset: 1408
	char fField1416; // Offset: 1416
	long fField1436; // Offset: 1436
	long fField1440; // Offset: 1440
	long fField1444; // Offset: 1444
	long fField1452; // Offset: 1452
	char fField1456; // Offset: 1456
	long fField1504; // Offset: 1504
	long fField1576; // Offset: 1576
	long fField1584; // Offset: 1584
	char fField1588; // Offset: 1588
	long fField1592; // Offset: 1592
	long fField1596; // Offset: 1596
	char fField1697; // Offset: 1697
	char fField1992; // Offset: 1992
	char fField1993; // Offset: 1993
	char fField1994; // Offset: 1994
	char fField2028; // Offset: 2028
	long fField2052; // Offset: 2052
	long fField2056; // Offset: 2056
	long fField2060; // Offset: 2060
	long fField2064; // Offset: 2064
	long fField2068; // Offset: 2068
	long fField2072; // Offset: 2072
	long fField2076; // Offset: 2076
	long fField2080; // Offset: 2080
	long fField2084; // Offset: 2084
	long fField2088; // Offset: 2088
	char fField2100; // Offset: 2100
	char fField2101; // Offset: 2101
	char fField2102; // Offset: 2102
	char fField2103; // Offset: 2103
	char fField2107; // Offset: 2107
	char fField2116; // Offset: 2116
	char fField2117; // Offset: 2117
	long fField2120; // Offset: 2120
	char fField2144; // Offset: 2144
	char fField2164; // Offset: 2164
};

#endif
