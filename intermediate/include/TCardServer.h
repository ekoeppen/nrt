#ifndef __INFERRED_TCARDSERVER_H
#define __INFERRED_TCARDSERVER_H

class TCardServer {
public:
	void ActivateCardHandler();
	void AddCardHandler();
	void CardIntHandler();
	void CardPositionAlertProc();
	void CardReinsertAlertProc();
	void CheckCardStatus();
	void DeactivateCardHandler();
	void DoCardEjection();
	void DoCardRecognition();
	void DoCommand();
	void DoPollLockSwitchAndCardDetected();
	void DoSysEventPowerOff();
	void DoSysEventPowerOn();
	void FirstCardHandler();
	void GetFreeMessage();
	void InitializeCardDetection();
	void InitializePCMCIABus();
	void LoadCardPackage();
	void MainConstructor();
	void MainDestructor();
	void NewMessage();
	void NextCardHandler();
	void RemoveCardHandler();
	void ReplyMessage();
	void ResumeSocketAccess();
	void SelectCardCISPower();
	void SelectCardConfiguration();
	void SelectCardPower();
	void SendMessage();
	void SendNewCardMessage();
	void SendSelfMessage();
	void SetPCMCIAWaitStates();
	void SuspendSocketAccess();
	TCardServer();
	~TCardServer();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField44; // Offset: 44
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField76; // Offset: 76
	char fField111; // Offset: 111
	long fField112; // Offset: 112
	long fField136; // Offset: 136
	long fField324; // Offset: 324
	long fField860; // Offset: 860
	long fField2496; // Offset: 2496
	long fField2516; // Offset: 2516
	long fField2520; // Offset: 2520
	char fField2524; // Offset: 2524
};

#endif
