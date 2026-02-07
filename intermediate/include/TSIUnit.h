#ifndef __INFERRED_TSIUNIT_H
#define __INFERRED_TSIUNIT_H

class TSIUnit {
public:
	void AddInterpretation();
	void AddSub();
	void CheckInterpretationIndex();
	void ClaimUnit();
	void CloseInterpList();
	void CompactInterpretations();
	void CountStrokes();
	void DeleteInterpretation();
	void DeleteSub();
	void DoneUsingUnit();
	void Dump();
	void EndSubs();
	void EndUnit();
	void GetAllStrokes();
	void GetAngle();
	void GetBestInterpretation();
	void GetInterpretation();
	void GetLabel();
	void GetParam();
	void GetScore();
	void GetStroke();
	void GetSub();
	void GetSubsCopy();
	void IDispose();
	void ISIUnit();
	void InsertInterpretation();
	void InterpretationCount();
	void InterpretationReuse();
	void LockInterpretations();
	void MarkUnit();
	void OpenInterpList();
	void SetAngle();
	void SetLabel();
	void SetScore();
	void SizeInBytes();
	void SubCount();
	TSIUnit();
	void UnlockInterpretations();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	char fField39; // Offset: 39
	long fField42; // Offset: 42
	long fField44; // Offset: 44
	char fField48; // Offset: 48
	char fField49; // Offset: 49
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	char fField372; // Offset: 372
};

#endif
