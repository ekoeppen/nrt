#ifndef __INFERRED_TEDGELISTUNIT_H
#define __INFERRED_TEDGELISTUNIT_H

class TEdgeListUnit {
public:
	void AddInterpretation();
	void DoneUsingUnit();
	void Dump();
	void EndUnit();
	void GetCorners();
	void GetInterpretation();
	void IDispose();
	void IEdgeListUnit();
	void InterpretationCount();
	void Make();
	void SetInterpretation();
	void SizeInBytes();

protected:
	long fField60; // Offset: 60
	long fField64; // Offset: 64
};

#endif
