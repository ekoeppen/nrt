#ifndef __INFERRED_TWRECOGNIZER_H
#define __INFERRED_TWRECOGNIZER_H

class TWRecognizer {
public:
	void AddSub();
	void AddWordInterpretation();
	void AreaInfoConfigure();
	void AreaInfoFillDefaults();
	void AreaInfoFreeDependents();
	void AreaInfoGetSize();
	void AreaInfoSetParameters();
	void Classify();
	void Delete();
	void EndInkStrokeGroup();
	void EndSubs();
	void FindBaseline();
	void GetEndTime();
	void GetLabel();
	void GetPartialGroup();
	void GetSamplePtAddress();
	void GetScore();
	void GetStartTime();
	void GetSub();
	void GetWordString();
	void Group();
	void GroupInkStroke();
	void Initialize();
	void InterpretationCount();
	void InvalidateUnit();
	void MakeNewGroupFromStroke();
	void New();
	void NewClassification();
	void Reclassify();
	void RejectUnit();
	void SetCharWordString();
	void SetLabel();
	void SetScore();
	void SetWordString();
	void Sleep();
	void StrokeSampleX();
	void StrokeSampleY();
	void StrokeSize();
	void StrokeUnitStroke();
	void SubCount();
	void TestClassifiedUnit();
	void TestInvalidUnit();
	void TestRejectedUnit();
	void UnitConfidence();
	void UnitInfoFreePtr();
	void UnitInfoGetPtr();
	void UnitInfoSetPtr();
	void VerifyWordSymbols();
	void WakeUp();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
};

#endif
