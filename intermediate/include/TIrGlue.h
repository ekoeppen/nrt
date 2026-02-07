#ifndef __INFERRED_TIRGLUE_H
#define __INFERRED_TIRGLUE_H

class TIrGlue {
public:
	void AcceptComplete();
	void AcceptStart();
	void CancelGetComplete();
	void CancelGetStart();
	void CancelPutComplete();
	void CancelPutStart();
	void ChangeSpeed();
	void CheckGetDone();
	void ConnectComplete();
	void ConnectStart();
	void ConnectedAsPrimary();
	void CopyStatsTo();
	void DeInit();
	void DeleteDiscoveredDevicesList();
	void DeleteEventBlockList();
	void DisconnectComplete();
	void DisconnectStart();
	void DiscoverComplete();
	void DiscoverStart();
	void GetComplete();
	void GetStart();
	void GrabEventBlock();
	void HandleAcceptComplete();
	void HandleAcceptingStateEvent();
	void HandleCancelGetComplete();
	void HandleCancelPutComplete();
	void HandleConnectComplete();
	void HandleConnectedStateEvent();
	void HandleConnectingStateEvent();
	void HandleDisconnectComplete();
	void HandleDisconnectedStateEvent();
	void HandleDiscoverComplete();
	void HandleDiscoveringStateEvent();
	void HandleGetComplete();
	void HandleInternalEvent();
	void HandleListenComplete();
	void HandleListeningStateEvent();
	void HandleNameServerConnectComplete();
	void HandleNameServerLookupComplete();
	void HandleNameServerLookupStateEvent();
	void HandleNameServerReleaseComplete();
	void HandlePutComplete();
	void Init();
	void InitBuffers();
	void InitEventBlockList();
	void InitGetRequest();
	void InitNameService();
	void InitPutRequests();
	void InputComplete();
	void LSAPLookupComplete();
	void LSAPLookupStart();
	void ListenComplete();
	void ListenStart();
	void MediaBusy();
	void NextState();
	void NextStateMachine();
	void ObtainLSAPId();
	void OutputComplete();
	void PostAsyncEvent();
	void PutComplete();
	void PutStart();
	void ReceivingInput();
	void RegisterMyNameAndLSAPId();
	void ReleaseEventBlock();
	void ReleaseLSAPId();
	void ResetRecvBufferState();
	void ResetStats();
	void SetMediaBusy();
	void StartReceive();
	void StartTerminate();
	void StartTimer1();
	void StartTimer2();
	void StartTransmit();
	void StopReceive();
	void StopTimer1();
	void StopTimer2();
	void StopTransmit();
	TIrGlue();
	void TimerComplete();
	~TIrGlue();

protected:
	long fField12; // Offset: 12
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	char fField52; // Offset: 52
	char fField53; // Offset: 53
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	long fField108; // Offset: 108
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	char fField140; // Offset: 140
	long fField144; // Offset: 144
	long fField148; // Offset: 148
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	long fField160; // Offset: 160
	char fField164; // Offset: 164
	long fField168; // Offset: 168
	long fField172; // Offset: 172
	long fField176; // Offset: 176
	long fField180; // Offset: 180
};

#endif
