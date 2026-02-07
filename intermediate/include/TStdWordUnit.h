#ifndef __INFERRED_TSTDWORDUNIT_H
#define __INFERRED_TSTDWORDUNIT_H

class TStdWordUnit {
public:
	void AddWordInterpretation();
	void DeleteInterpretation();
	void DisposeTrainingData();
	void Dump();
	void EndUnit();
	void GetParam();
	void GetString();
	void GetTrainingData();
	void GetWordBase();
	void GetWordSize();
	void GetWordSlant();
	void IStdWordUnit();
	void InsertWordInterpretation();
	void ReinforceWordChoice();
	void SetCharWordString();
	void SetParam();
	void SetWordString();
	void SizeInBytes();

protected:
	long fField12; // Offset: 12
};

#endif
