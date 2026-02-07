#ifndef __INFERRED_TFRAMEDASYNCSERTOOL_H
#define __INFERRED_TFRAMEDASYNCSERTOOL_H

class TFramedAsyncSerTool {
public:
	void AddCurrentOptions();
	void AddDefaultOptions();
	void AllocateBuffers();
	void DeallocateBuffers();
	void EmptyInputBuffer();
	void FillOutputBuffer();
	void GetFramingCtl();
	void GetSizeOf();
	void GetToolName();
	void KillGet();
	void KillPut();
	void ProcessOptionStart();
	void ResetFramingStats();
	void SetFramingCtl();
	TFramedAsyncSerTool();
	void TaskConstructor();
	void TaskDestructor();
	~TFramedAsyncSerTool();

protected:
	long fField344; // Offset: 344
	long fField624; // Offset: 624
	long fField628; // Offset: 628
	char fField632; // Offset: 632
	long fField636; // Offset: 636
	long fField1200; // Offset: 1200
	long fField1204; // Offset: 1204
	char fField1228; // Offset: 1228
	char fField1229; // Offset: 1229
	char fField1230; // Offset: 1230
	char fField1231; // Offset: 1231
	char fField1232; // Offset: 1232
	long fField1316; // Offset: 1316
	char fField1332; // Offset: 1332
	char fField1333; // Offset: 1333
	char fField1334; // Offset: 1334
	char fField1335; // Offset: 1335
	char fField1336; // Offset: 1336
	long fField1352; // Offset: 1352
};

#endif
