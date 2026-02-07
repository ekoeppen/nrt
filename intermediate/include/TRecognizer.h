#ifndef __INFERRED_TRECOGNIZER_H
#define __INFERRED_TRECOGNIZER_H

class TRecognizer {
public:
	void ArbitrateTime();
	void BuildConfig();
	void Command();
	void ConfigureArea();
	void DoLearning();
	void Domain();
	void EnableArea();
	void Flags();
	void GetLearningData();
	void HandleUnit();
	void ID();
	void Init();
	void InitServices();
	void ServicesEnabled();
	void ServicesPossible();
	void Sleep();
	TRecognizer();
	void TestFlags();
	void UnitConfidence();
	void WakeUp();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	char fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
