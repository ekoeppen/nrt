#ifndef __INFERRED_TTESTREPORTER_H
#define __INFERRED_TTESTREPORTER_H

class TTestReporter {
public:
	void SendToTestAgent();
	TTestReporter();
	void TestFPrintf();
	void TestFlushReportQueue();
	void TestReadDataFile();
	void TestReportError();
	void TestReportErrorValues();
	void TestReportMessage();
	~TTestReporter();

protected:
	char fField96; // Offset: 96
	long fField392; // Offset: 392
	long fField396; // Offset: 396
	long fField400; // Offset: 400
	long fField408; // Offset: 408
	long fField412; // Offset: 412
	long fField884; // Offset: 884
	long fField1362; // Offset: 1362
	long fField3411; // Offset: 3411
};

#endif
