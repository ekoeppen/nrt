#ifndef __INFERRED_TSTROKE_H
#define __INFERRED_TSTROKE_H

class TStroke {
public:
	void AddPoint();
	void Bifurcate();
	void Done();
	void Draw();
	void EndStroke();
	void GetFPoint();
	void GetPoint();
	void GetTabPt();
	void IDispose();
	void IStroke();
	void Make();
	void Map();
	void Offset();
	void Rotate();
	void Scale();
	void SizeInBytes();
	void TryToAddPoint();
	void UpdateBBox();

protected:
	char fField1; // Offset: 1
	long fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField4; // Offset: 4
	long fField12; // Offset: 12
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField68; // Offset: 68
	char fField69; // Offset: 69
	long fField70; // Offset: 70
	char fField71; // Offset: 71
	long fField72; // Offset: 72
};

#endif
