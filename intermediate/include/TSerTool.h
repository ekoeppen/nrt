#ifndef __INFERRED_TSERTOOL_H
#define __INFERRED_TSERTOOL_H

class TSerTool {
public:
	void AddCurrentOptions();
	void AddDefaultOptions();
	void BindStart();
	void BindToSerChip();
	void ChangeSpeed();
	void ClaimSerialChip();
	void CleanUp();
	void ConnectStart();
	void ControlComplete();
	void DoControl();
	void DoKillControl();
	void GetBytes();
	void GetBytesImmediate();
	void GetCommEvent();
	void GetComplete();
	void GetFramedBytes();
	void GetSerialOutputs();
	void HandleRequest();
	void IHRequest();
	void KillWakeUp();
	void ListenStart();
	void LookUpSerialChip();
	void PostSerialEvent();
	void PowerOffEvent();
	void PowerOnEvent();
	void ProcessOptionStart();
	void PutBytes();
	void PutComplete();
	void PutFramedBytes();
	void ResArbClaimNotification();
	void ResArbReleaseStart();
	void SendWakeUp();
	void SetBreak();
	void SetHSKo();
	void SetIOParms();
	void SetSerialChipLocation();
	void SetSerialChipSelect();
	void SetSerialChipSpec();
	void SetSerialOutputs();
	void SetTxDTransceiverEnable();
	void StartInput();
	void StartOutput();
	TSerTool();
	void TaskConstructor();
	void TaskDestructor();
	void TerminateComplete();
	void TurnOff();
	void TurnOn();
	void UnbindStart();
	void UnbindToSerChip();
	void UnclaimSerialChip();
	void WakeUpHandler();
	~TSerTool();

protected:
	long fField72; // Offset: 72
	char fField88; // Offset: 88
	long fField140; // Offset: 140
	char fField196; // Offset: 196
	char fField464; // Offset: 464
	char fField466; // Offset: 466
	long fField468; // Offset: 468
	long fField516; // Offset: 516
	long fField620; // Offset: 620
	long fField624; // Offset: 624
	long fField628; // Offset: 628
	char fField632; // Offset: 632
	char fField634; // Offset: 634
	long fField636; // Offset: 636
	long fField640; // Offset: 640
	char fField650; // Offset: 650
	char fField651; // Offset: 651
	char fField652; // Offset: 652
	char fField653; // Offset: 653
	char fField654; // Offset: 654
	char fField655; // Offset: 655
	char fField656; // Offset: 656
	char fField657; // Offset: 657
	char fField658; // Offset: 658
	long fField668; // Offset: 668
	long fField716; // Offset: 716
	long fField740; // Offset: 740
	long fField744; // Offset: 744
	long fField752; // Offset: 752
	long fField760; // Offset: 760
	long fField764; // Offset: 764
	long fField768; // Offset: 768
	long fField772; // Offset: 772
	long fField776; // Offset: 776
	long fField780; // Offset: 780
	long fField796; // Offset: 796
	long fField816; // Offset: 816
	long fField820; // Offset: 820
	long fField856; // Offset: 856
	long fField860; // Offset: 860
	long fField880; // Offset: 880
	long fField888; // Offset: 888
	char fField892; // Offset: 892
};

#endif
