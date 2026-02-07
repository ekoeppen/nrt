#ifndef __INFERRED_TSCRIPTENDPOINTCLIENT_H
#define __INFERRED_TSCRIPTENDPOINTCLIENT_H

class TScriptEndpointClient {
public:
	void AEHandlerProc();
	void CheckForInput();
	void ConvertBlock();
	void ConvertFromOption();
	void ConvertFromOptionArray();
	void ConvertToAddressParms();
	void ConvertToFlowControlParms();
	void ConvertToModemDialingOption();
	void ConvertToOption();
	void ConvertToOptionArray();
	void ConvertToSerialIOParms();
	void Default();
	void DoAbort();
	void DoAccept();
	void DoBytesAvailable();
	void DoCaller();
	void DoConnect();
	void DoDisconnect();
	void DoException();
	void DoFlushInput();
	void DoFlushOutput();
	void DoFlushPartial();
	void DoGetOption();
	void DoGetOptions();
	void DoInput();
	void DoInputAvailable();
	void DoInputSpec();
	void DoListen();
	void DoOutput();
	void DoOutputDone();
	void DoOutputFrame();
	void DoOutputOne();
	void DoPartial();
	void DoReadyForOutput();
	void DoReject();
	void DoRelease();
	void DoSetOptions();
	void DoState();
	void IdleProc();
	void InitScriptEndpointClient();
	void OptMgmtComplete();
	void PostInput();
	void RcvComplete();
	void SetInputSpec();
	void SndComplete();
	void StopYielding();
	TScriptEndpointClient();
	void TranslateError();
	void Yield();
	~TScriptEndpointClient();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	char fField24; // Offset: 24
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	char fField64; // Offset: 64
	char fField65; // Offset: 65
	char fField67; // Offset: 67
	char fField69; // Offset: 69
	long fField112; // Offset: 112
	long fField116; // Offset: 116
	long fField120; // Offset: 120
	long fField124; // Offset: 124
	long fField132; // Offset: 132
	char fField136; // Offset: 136
	char fField137; // Offset: 137
	char fField138; // Offset: 138
	long fField140; // Offset: 140
	char fField144; // Offset: 144
};

#endif
