#ifndef __INFERRED_TSTROKEPUBLIC_H
#define __INFERRED_TSTROKEPUBLIC_H

class TStrokePublic {
public:
	void Bounds();
	void Done();
	void DownTime();
	void FinalPoint();
	void FirstPoint();
	void GetInkedRect();
	void GetPoint();
	void InkOff();
	void InkOn();
	void Invalidate();
	void Make();
	void Size();
	TStrokePublic();
	void UpTime();
	~TStrokePublic();

protected:
	long fField4; // Offset: 4
	char fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField52; // Offset: 52
	long fField56; // Offset: 56
};

#endif
