#ifndef __INFERRED_TIRDATOOL_H
#define __INFERRED_TIRDATOOL_H

class TIrDATool {
public:
	void AcceptStart();
	void AddCurrentOptions();
	void AddDefaultOptions();
	void AllocateBuffers();
	void ChangeSpeed();
	void ConnectStart();
	void DoAcceptComplete();
	void DoCancelGetComplete();
	void DoCancelPutComplete();
	void DoConnectComplete();
	void DoDiscoverComplete();
	void DoGetDataComplete();
	void DoInput();
	void DoLSAPLookupComplete();
	void DoListenComplete();
	void DoOutput();
	void DoPutDataComplete();
	void GetSizeOf();
	void GetToolName();
	void HandleInternalEvent();
	void HandleRequest();
	void KillGet();
	void KillPut();
	void ListenStart();
	void MediaBusy();
	void OpenStart();
	void PostAsyncEvent();
	void ProcessOptionStart();
	void ReceivingInput();
	void RxDataAvailable();
	void SetMediaBusy();
	void SetSerialChipSelect();
	void StartConnect();
	void StartInput();
	void StartOutput();
	void StartReceive();
	void StartTerminate();
	void StartTimer1();
	void StartTimer2();
	void StartTransmit();
	void StopReceive();
	void StopTimer1();
	void StopTimer2();
	void StopTransmit();
	TIrDATool();
	void TaskConstructor();
	void TaskDestructor();
	void TerminateComplete();
	void TerminateConnection();
	void TxDataSent();
	void UpdateOptionsAfterConnectOrListen();
	~TIrDATool();

protected:
	long fField36; // Offset: 36
	long fField96; // Offset: 96
	long fField108; // Offset: 108
	long fField292; // Offset: 292
	long fField340; // Offset: 340
	long fField344; // Offset: 344
	long fField348; // Offset: 348
	long fField368; // Offset: 368
	long fField400; // Offset: 400
	long fField624; // Offset: 624
	long fField628; // Offset: 628
	long fField636; // Offset: 636
	long fField640; // Offset: 640
	long fField644; // Offset: 644
	char fField648; // Offset: 648
	char fField649; // Offset: 649
	long fField768; // Offset: 768
	long fField772; // Offset: 772
	long fField780; // Offset: 780
	long fField860; // Offset: 860
	long fField992; // Offset: 992
	long fField996; // Offset: 996
	long fField1176; // Offset: 1176
	long fField1200; // Offset: 1200
	long fField1204; // Offset: 1204
	long fField1260; // Offset: 1260
	long fField1276; // Offset: 1276
	long fField1296; // Offset: 1296
	long fField1304; // Offset: 1304
	long fField1308; // Offset: 1308
	long fField1312; // Offset: 1312
	long fField1328; // Offset: 1328
	long fField1332; // Offset: 1332
	long fField1348; // Offset: 1348
	long fField1364; // Offset: 1364
	long fField1368; // Offset: 1368
	long fField1372; // Offset: 1372
	long fField1456; // Offset: 1456
	long fField1532; // Offset: 1532
	char fField1596; // Offset: 1596
	long fField1600; // Offset: 1600
	long fField1620; // Offset: 1620
	long fField1628; // Offset: 1628
	long fField1632; // Offset: 1632
	long fField1636; // Offset: 1636
	long fField1656; // Offset: 1656
	long fField1664; // Offset: 1664
	long fField1668; // Offset: 1668
	long fField1672; // Offset: 1672
	long fField1676; // Offset: 1676
};

#endif
