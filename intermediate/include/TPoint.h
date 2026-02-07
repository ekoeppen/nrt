#ifndef __INFERRED_TPOINT_H
#define __INFERRED_TPOINT_H

class TPoint {
public:
	void Aligned();
	void DistanceFromLine();
	void InverseScale();
	void LineHitRatio();
	void PinTo();
	void Scale();

protected:
	char fField1; // Offset: 1
	long fField2; // Offset: 2
	char fField3; // Offset: 3
};

#endif
