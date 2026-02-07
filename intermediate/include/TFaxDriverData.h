#ifndef __INFERRED_TFAXDRIVERDATA_H
#define __INFERRED_TFAXDRIVERDATA_H

class TFaxDriverData {
public:
	void BeginPageComplete();
	void CloseSessionComplete();
	void EndPageComplete();
	void OpenSessionComplete();
	void PrintBandComplete();

protected:
	long fField16; // Offset: 16
	long fField572; // Offset: 572
	char fField576; // Offset: 576
	char fField577; // Offset: 577
	long fField600; // Offset: 600
	long fField604; // Offset: 604
	long fField608; // Offset: 608
	long fField612; // Offset: 612
	char fField616; // Offset: 616
};

#endif
