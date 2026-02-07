#ifndef __INFERRED_TRECT_H
#define __INFERRED_TRECT_H

class TRect {
public:
	void CoveredBy();
	void Encloses();
	void Flip();
	void Intersects();
	void MidPoint();
	void Overlaps();
	void Scale();
	void Union();

protected:
	char fField1; // Offset: 1
	long fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField4; // Offset: 4
	char fField5; // Offset: 5
	long fField6; // Offset: 6
	char fField7; // Offset: 7
};

#endif
