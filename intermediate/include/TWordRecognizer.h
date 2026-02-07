#ifndef __INFERRED_TWORDRECOGNIZER_H
#define __INFERRED_TWORDRECOGNIZER_H

class TWordRecognizer {
public:
	void BuildConfig();
	void ConfigFromFrame();
	void ConfigureArea();
	void DoLearning();
	void FieldType();
	void GetLearningData();
	void HandleUnit();
	void Sleep();
	void UnitConfidence();
	void WakeUp();

protected:
	long fField36; // Offset: 36
};

#endif
