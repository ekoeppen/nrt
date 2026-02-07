#ifndef __INFERRED_TSTROKEUNIT_H
#define __INFERRED_TSTROKEUNIT_H

class TStrokeUnit {
public:
	void ContextID();
	void CountStrokes();
	void Dump();
	void GetAllStrokes();
	void GetPts();
	void GetStroke();
	void IDispose();
	void IStrokeUnit();
	void IsCircle();
	void IsEllipse();
	void Make();
	void OwnsStroke();
	void SetContextID();
	void SizeInBytes();

protected:
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	long fField60; // Offset: 60
	long fField64; // Offset: 64
};

#endif
