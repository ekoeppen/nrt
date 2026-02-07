#ifndef __INFERRED_TFAXTOOLINTERFACE_H
#define __INFERRED_TFAXTOOLINTERFACE_H

class TFaxToolInterface {
public:
	void AECompletionProc();
	void AETestEvent();
	void AcceptSession();
	void BeginPage();
	void CleanUpAfterConnect();
	void CloseSession();
	void ConfirmReceivedPage();
	void ContinueClose();
	void DoInit();
	void EndPage();
	void GetBand();
	void IdleProc();
	void Init();
	void InitAsyncMsg();
	void InitConnect();
	void OpenSession();
	void PostBind();
	void PostConnect();
	void PrintBand();
	void PrintBandContinue();
	void SetDefaultConfig();
	void SetDefaultOptions();
	void SetFaxOptions();
	void SetMinScanLineTime();
	TFaxToolInterface();
	~TFaxToolInterface();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField28; // Offset: 28
	long fField80; // Offset: 80
	long fField116; // Offset: 116
	char fField216; // Offset: 216
	char fField217; // Offset: 217
	char fField218; // Offset: 218
	char fField219; // Offset: 219
	long fField228; // Offset: 228
	long fField240; // Offset: 240
	char fField256; // Offset: 256
	long fField300; // Offset: 300
	long fField324; // Offset: 324
	long fField336; // Offset: 336
	char fField344; // Offset: 344
	char fField345; // Offset: 345
	long fField348; // Offset: 348
	long fField364; // Offset: 364
	long fField384; // Offset: 384
	char fField392; // Offset: 392
	char fField393; // Offset: 393
	char fField394; // Offset: 394
	long fField396; // Offset: 396
	long fField400; // Offset: 400
	long fField412; // Offset: 412
	char fField420; // Offset: 420
	long fField424; // Offset: 424
	long fField444; // Offset: 444
	char fField448; // Offset: 448
	long fField464; // Offset: 464
	long fField472; // Offset: 472
	char fField476; // Offset: 476
	char fField477; // Offset: 477
	long fField488; // Offset: 488
	long fField512; // Offset: 512
	long fField524; // Offset: 524
	long fField560; // Offset: 560
};

#endif
