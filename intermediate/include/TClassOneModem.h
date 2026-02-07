#ifndef __INFERRED_TCLASSONEMODEM_H
#define __INFERRED_TCLASSONEMODEM_H

class TClassOneModem {
public:
	void AbortCommand();
	void AbortTimer();
	void AcceptComplete();
	void AcceptStart();
	void AdjustForConnectSpeed();
	void AdjustForReset();
	void BeginModemCommand();
	void BindComplete();
	void BindStart();
	void BlockGetAndPutChannel();
	void BuildCommand();
	void C1CnctBegin();
	void C1CnctCheckAndSetListenTimer();
	void C1CnctCheckCountryConfig();
	void C1CnctCheckRingCount();
	void C1CnctConfigModem();
	void C1CnctConnectComplete();
	void C1CnctDial();
	void C1CnctDialPrefs();
	void C1CnctGetCheckRingCountResponse();
	void C1CnctSetClass();
	void C1CnctSetClassBaud();
	void C1CnctWaitForConnect();
	void C1GetCapComplete();
	void C1GetCapContinue();
	void C1GetCapExtractResult();
	void C1GetCapStart();
	void C1GetFaxCapabilities();
	void C1IdACLCheckForMNP10();
	void C1IdACLCheckForV32bis();
	void C1IdACLCheckSetAutoModeResponse();
	void C1IdACLCheckV32bisCmdResponse();
	void C1IdACLGetMNP10CmdResponse();
	void C1IdACLSetProfile();
	void C1IdACLSetV32bis();
	void C1IdAreYouThere();
	void C1IdBegin();
	void C1IdCheck4HCode();
	void C1IdCheck4Response();
	void C1IdCheckForLCS();
	void C1IdGetCheck4HCodeCmdResponse();
	void C1IdGetIdCmdResponse();
	void C1IdGetModemId();
	void C1IdI4CmdFailed();
	void C1IdModem();
	void C1IdModemComplete();
	void C1IdReset();
	void C1IdSetS0();
	void C1IdWait4Reset();
	void C1IdWakeUp();
	void C1PktAbort();
	void C1PktCheckFRMResult();
	void C1PktCheckPktCRC();
	void C1PktCheckPutResult();
	void C1PktComplete();
	void C1PktContinue();
	void C1PktGetBytes();
	void C1PktGetPktCRC();
	void C1PktGetPutResult();
	void C1PktPutBytes();
	void C1PktRecvCmd();
	void C1PktTransCmd();
	void C1PktTransSilent();
	void C2DoCommand();
	void C2ModemRecvPgData();
	void C2ParseDIS();
	void C2ParsePTS();
	void C2ParsePhoneNum();
	void C2PktCheckResult();
	void C2PktGetBytes();
	void C2PktGetBytesSetup();
	void C2PktGetBytesSetupCont();
	void CancelMNPConnect();
	void CheckForErrorResult();
	void ConnectComplete();
	void ConnectModemComplete();
	void ConnectModemContinue();
	void ConnectStart();
	void DoControl();
	void DoKillControl();
	void DoRecvPkt();
	void DoTransPkt();
	void EnterConnectedState();
	void GetBytes();
	void GetBytesImmediate();
	void GetCommEvent();
	void GetCommandResult();
	void GetCommandResultComplete();
	void GetComplete();
	void GetFramedBytes();
	void GetModBaudRate();
	void GetModParamStr();
	void GetNextTermProc();
	void GetSizeOf();
	void GetSrvcClsSupported();
	void GetToolCapabilities();
	void HandleReply();
	void HandleRequest();
	void HandleTimerTick();
	void HangUp();
	void HangUpContinue();
	void HangUpModemComplete();
	void IToARegisterValue();
	void InitPhoneNumberInfo();
	void KillGet();
	void KillGetComplete();
	void KillPut();
	void KillPutComplete();
	void ListenStart();
	void ModemCommandComplete();
	void OpenStart();
	void ParseModemRsp();
	void PostCommEvent();
	void PostTapiEvent();
	void PostTimer();
	void PrepareCommand();
	void ProcessOptionStart();
	void ProcessTAPICommand();
	void PutBytes();
	void PutCommand();
	void PutCommandComplete();
	void PutComplete();
	void PutEscapeCmd();
	void PutFramedBytes();
	void ReleaseStart();
	void ResArbClaimNotification();
	void ResArbReleaseStart();
	void ResetSerialDrvr();
	void SetActiveConfigStrs();
	void SetCDOption();
	void SetModemProfile();
	void SetServiceClass();
	void SetSpeakerVolume();
	void TAPICommandComplete();
	TClassOneModem();
	void TaskConstructor();
	void TaskDestructor();
	void TerminateComplete();
	void TimeOutCmdResult();
	void UnbindStart();
	void UnblockGetAndPutChannel();
	void UpdateDialOptionsStr();
	void ZeroStuffing();
	void ZeroStuffingDeinit();
	void ZeroStuffingInit();
	~TClassOneModem();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField60; // Offset: 60
	char fField61; // Offset: 61
	char fField62; // Offset: 62
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	char fField172; // Offset: 172
	long fField388; // Offset: 388
	long fField392; // Offset: 392
	char fField465; // Offset: 465
	long fField516; // Offset: 516
	long fField624; // Offset: 624
	long fField636; // Offset: 636
	long fField640; // Offset: 640
	long fField768; // Offset: 768
	long fField772; // Offset: 772
	long fField796; // Offset: 796
	long fField1372; // Offset: 1372
	long fField1412; // Offset: 1412
	long fField1456; // Offset: 1456
	long fField1460; // Offset: 1460
	long fField1464; // Offset: 1464
	long fField1468; // Offset: 1468
	long fField1472; // Offset: 1472
	long fField1476; // Offset: 1476
	long fField1480; // Offset: 1480
	long fField1524; // Offset: 1524
	char fField1528; // Offset: 1528
	char fField1567; // Offset: 1567
	long fField1576; // Offset: 1576
	long fField1584; // Offset: 1584
	long fField1588; // Offset: 1588
	char fField1589; // Offset: 1589
	char fField1590; // Offset: 1590
	char fField1591; // Offset: 1591
	long fField1592; // Offset: 1592
	char fField1593; // Offset: 1593
	char fField1594; // Offset: 1594
	char fField1595; // Offset: 1595
	long fField1596; // Offset: 1596
	char fField1600; // Offset: 1600
	char fField1626; // Offset: 1626
	char fField1627; // Offset: 1627
	char fField1646; // Offset: 1646
	char fField1647; // Offset: 1647
	long fField1924; // Offset: 1924
	long fField1928; // Offset: 1928
	long fField1932; // Offset: 1932
	long fField1936; // Offset: 1936
	long fField1940; // Offset: 1940
	long fField1944; // Offset: 1944
	long fField1948; // Offset: 1948
	long fField1952; // Offset: 1952
	long fField1956; // Offset: 1956
	long fField1960; // Offset: 1960
	long fField1964; // Offset: 1964
	long fField1968; // Offset: 1968
	long fField1972; // Offset: 1972
	char fField1988; // Offset: 1988
	char fField1989; // Offset: 1989
	char fField1990; // Offset: 1990
	char fField1991; // Offset: 1991
	char fField1992; // Offset: 1992
	char fField1993; // Offset: 1993
	char fField1994; // Offset: 1994
	char fField1995; // Offset: 1995
	char fField1996; // Offset: 1996
	char fField1997; // Offset: 1997
	long fField2000; // Offset: 2000
	char fField2004; // Offset: 2004
	long fField2008; // Offset: 2008
	char fField2024; // Offset: 2024
	char fField2025; // Offset: 2025
	char fField2026; // Offset: 2026
	char fField2027; // Offset: 2027
	char fField2029; // Offset: 2029
	char fField2030; // Offset: 2030
	char fField2031; // Offset: 2031
	char fField2032; // Offset: 2032
	long fField2036; // Offset: 2036
	long fField2040; // Offset: 2040
	long fField2044; // Offset: 2044
	char fField2048; // Offset: 2048
	char fField2064; // Offset: 2064
	char fField2065; // Offset: 2065
	char fField2066; // Offset: 2066
	char fField2068; // Offset: 2068
	char fField2084; // Offset: 2084
	long fField2108; // Offset: 2108
	long fField2112; // Offset: 2112
	long fField2116; // Offset: 2116
	long fField2120; // Offset: 2120
	long fField2124; // Offset: 2124
	long fField2188; // Offset: 2188
	long fField2212; // Offset: 2212
	char fField2264; // Offset: 2264
	char fField2265; // Offset: 2265
	char fField2280; // Offset: 2280
	long fField2284; // Offset: 2284
	char fField2288; // Offset: 2288
	char fField2289; // Offset: 2289
	char fField2290; // Offset: 2290
	char fField2291; // Offset: 2291
	char fField2292; // Offset: 2292
	char fField2293; // Offset: 2293
	char fField2294; // Offset: 2294
	long fField2296; // Offset: 2296
	long fField2300; // Offset: 2300
	long fField2304; // Offset: 2304
	long fField2308; // Offset: 2308
	long fField2324; // Offset: 2324
	long fField2352; // Offset: 2352
	char fField2356; // Offset: 2356
	char fField2357; // Offset: 2357
	long fField2612; // Offset: 2612
	long fField2616; // Offset: 2616
	long fField2620; // Offset: 2620
	long fField2624; // Offset: 2624
	long fField2628; // Offset: 2628
	long fField2632; // Offset: 2632
	long fField2636; // Offset: 2636
	long fField2640; // Offset: 2640
	long fField2644; // Offset: 2644
	char fField2720; // Offset: 2720
	long fField2728; // Offset: 2728
	long fField2732; // Offset: 2732
	long fField2748; // Offset: 2748
	long fField2824; // Offset: 2824
	char fField2832; // Offset: 2832
	long fField2960; // Offset: 2960
	long fField2964; // Offset: 2964
	long fField2968; // Offset: 2968
	char fField2969; // Offset: 2969
	long fField2972; // Offset: 2972
};

#endif
