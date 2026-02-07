#ifndef __INFERRED_TTESTAGENT_H
#define __INFERRED_TTESTAGENT_H

class TTestAgent {
public:
	void AEHandlerProc();
	void AgentReportDirect();
	void AllocateATestReporter();
	void DoDropConnection();
	void DoRunTestsFromStore();
	void ForkConstructor();
	void ForkInit();
	void GetSizeOf();
	void IdleProc();
	void MainConstructor();
	void MainDestructor();
	void MakeFork();
	void MakeTestStore();
	void ProcessTestMgrParameters();
	void ProcessTestServerCommand();
	void Setup();
	void StartACardTestCase();
	void StartCTestCase();
	void StoreTestCommand();
	void StoreTestOrDataFile();
	TTestAgent();

protected:
	long fField6; // Offset: 6
	char fField26; // Offset: 26
	char fField37; // Offset: 37
	char fField105; // Offset: 105
	char fField111; // Offset: 111
	long fField112; // Offset: 112
	char fField116; // Offset: 116
	char fField124; // Offset: 124
	long fField128; // Offset: 128
	long fField132; // Offset: 132
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	long fField144; // Offset: 144
	long fField148; // Offset: 148
	long fField152; // Offset: 152
	long fField156; // Offset: 156
	long fField160; // Offset: 160
	long fField164; // Offset: 164
	long fField172; // Offset: 172
	char fField176; // Offset: 176
	char fField196; // Offset: 196
	long fField216; // Offset: 216
	long fField220; // Offset: 220
	long fField224; // Offset: 224
	long fField228; // Offset: 228
	char fField364; // Offset: 364
	char fField365; // Offset: 365
	char fField366; // Offset: 366
	char fField367; // Offset: 367
	long fField368; // Offset: 368
	long fField372; // Offset: 372
	long fField875; // Offset: 875
	long fField884; // Offset: 884
	char fField1395; // Offset: 1395
	char fField3328; // Offset: 3328
};

#endif
