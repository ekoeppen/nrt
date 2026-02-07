#ifndef __INFERRED_TGENERALSHAPEUNIT_H
#define __INFERRED_TGENERALSHAPEUNIT_H

class TGeneralShapeUnit {
public:
	void AddInterpretation();
	void ContextID();
	void DoneUsingUnit();
	void Dump();
	void EndUnit();
	void GetEllipseAsStroke();
	void GetGSAsStroke();
	void GetGeneralShape();
	void GetInterpretation();
	void IDispose();
	void IGeneralShapeUnit();
	void InterpretationCount();
	void Make();
	void NewInterpretation();
	void SetContextID();
	void SetGeneralShape();
	void SizeInBytes();

protected:
	long fField4; // Offset: 4
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	long fField116; // Offset: 116
	long fField120; // Offset: 120
};

#endif
