#ifndef __INFERRED_TNEWSCRIPTENDPOINTCLIENT_H
#define __INFERRED_TNEWSCRIPTENDPOINTCLIENT_H

class TNewScriptEndpointClient {
public:
	void AEHandlerProc();
	void AbortComplete();
	void AcceptComplete();
	void AddEndArrayElement();
	void AddProxyArrayElement();
	void AddProxyFrame();
	void BindComplete();
	void CheckEndArray();
	void CheckForInput();
	void ClearInputSpec();
	void CommandComplete();
	void ConnectComplete();
	void ConvertFromOptionArray();
	void ConvertToOptionArray();
	void Default();
	void DisconnectComplete();
	void DoAbort();
	void DoAccept();
	void DoBind();
	void DoCompletion();
	void DoConnect();
	void DoDisconnect();
	void DoFlushInput();
	void DoFlushPartial();
	void DoInput();
	void DoInputSpec();
	void DoListen();
	void DoOption();
	void DoOutput();
	void DoPartial();
	void DoState();
	void DoUnBind();
	void FilterRcvComplete();
	void GetFrameLength();
	void GetParms();
	void GetPartialData();
	void GetScriptDataInXlator();
	void GetScriptDataOutXlator();
	void IdleProc();
	void InitInputBuffers();
	void InitScriptEndpointClient();
	void ListenComplete();
	void OptMgmtComplete();
	void OptionCommandComplete();
	void OutputData();
	void OutputFrame();
	void OutputRaw();
	void ParseInput();
	void PostInput();
	void PostReceive();
	void PrepOptions();
	void QueueCallback();
	void QueueOptions();
	void RawRcvComplete();
	void RcvComplete();
	void ReadFilter();
	void ReadInputSlots();
	void ReadTarget();
	void ReadTermination();
	void ReleaseComplete();
	void SndComplete();
	TNewScriptEndpointClient();
	void UnBindComplete();
	void UnwindCallback();
	void UnwindOptions();
	~TNewScriptEndpointClient();

protected:
	long fField4; // Offset: 4
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	char fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	char fField68; // Offset: 68
	long fField76; // Offset: 76
	long fField80; // Offset: 80
	long fField84; // Offset: 84
	char fField88; // Offset: 88
	long fField92; // Offset: 92
	long fField96; // Offset: 96
	char fField100; // Offset: 100
	long fField104; // Offset: 104
	long fField108; // Offset: 108
	long fField156; // Offset: 156
	long fField160; // Offset: 160
	long fField164; // Offset: 164
	char fField168; // Offset: 168
	long fField172; // Offset: 172
	char fField177; // Offset: 177
	long fField180; // Offset: 180
	long fField188; // Offset: 188
	long fField192; // Offset: 192
	long fField196; // Offset: 196
	long fField200; // Offset: 200
	long fField204; // Offset: 204
	long fField208; // Offset: 208
	long fField1390; // Offset: 1390
};

#endif
