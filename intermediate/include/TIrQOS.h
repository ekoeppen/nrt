#ifndef __INFERRED_TIRQOS_H
#define __INFERRED_TIRQOS_H

class TIrQOS {
public:
	void AddInfoToBuffer();
	void ExtractInfoFromBuffer();
	void GetBaudRate();
	void GetDataSize();
	void GetExtraBOFs();
	void GetLinkDiscThresholdTime();
	void GetMaxTurnAroundTime();
	void GetMinTurnAroundTime();
	void GetWindowSize();
	void HighestBitOn();
	void NegotiateWith();
	void NormalizeInfo();
	void Reset();
	void SetBaudRate();
	void SetDataSize();
	void SetLinkDiscThresholdTime();
	void SetWindowSize();
	TIrQOS();
	~TIrQOS();

protected:
	char fField1; // Offset: 1
	char fField2; // Offset: 2
	char fField3; // Offset: 3
	char fField4; // Offset: 4
	char fField5; // Offset: 5
	char fField6; // Offset: 6
};

#endif
