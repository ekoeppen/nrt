#ifndef __INFERRED_TUNIT_H
#define __INFERRED_TUNIT_H

class TUnit {
public:
	void ClaimUnit();
	void Clone();
	void ContextID();
	void CountStrokes();
	void Dispose();
	void DoneUsingUnit();
	void Dump();
	void DumpName();
	void GetAllStrokes();
	void GetArea();
	void GetAreas();
	void GetBBox();
	void GetBestInterpretation();
	void GetStroke();
	void IDispose();
	void IUnit();
	void InterpretationCount();
	void Invalidate();
	void MarkUnit();
	void OwnsStroke();
	void Release();
	void SetAreas();
	void SetBBox();
	void SetContextID();
	void SetDelay();
	void SizeInBytes();
	void SubCount();
	TUnit();
	~TUnit();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	char fField34; // Offset: 34
	char fField35; // Offset: 35
	char fField36; // Offset: 36
	char fField37; // Offset: 37
	char fField38; // Offset: 38
	char fField39; // Offset: 39
	char fField40; // Offset: 40
	char fField41; // Offset: 41
	char fField42; // Offset: 42
	char fField43; // Offset: 43
	char fField44; // Offset: 44
	char fField45; // Offset: 45
};

#endif
