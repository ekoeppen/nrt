#ifndef __INFERRED_TROSRECOGNIZER_H
#define __INFERRED_TROSRECOGNIZER_H

class TRosRecognizer {
public:
	void AddRosettaWordsToInterpretation();
	void AllocateAndConvertStrokeForRosetta();
	void AreaInfoConfigure();
	void AreaInfoFillDefaults();
	void AreaInfoFreeDependents();
	void AreaInfoGetSize();
	void AreaInfoSetParameters();
	void ClassInfo();
	void Classify();
	void Delete();
	void FindBaseline();
	void Group();
	void GroupInkStroke();
	void Initialize();
	void New();
	void Reclassify();
	void Sizeof();
	void Sleep();
	void UnitConfidence();
	void UnitInfoFreePtr();
	void VerifyWordSymbols();
	void WakeUp();

protected:
	char fField1; // Offset: 1
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	char fField44; // Offset: 44
	char fField45; // Offset: 45
	char fField46; // Offset: 46
	char fField47; // Offset: 47
	char fField48; // Offset: 48
	char fField49; // Offset: 49
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField72; // Offset: 72
	char fField96; // Offset: 96
	char fField97; // Offset: 97
	char fField98; // Offset: 98
	char fField99; // Offset: 99
	char fField101; // Offset: 101
};

#endif
