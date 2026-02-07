#ifndef __INFERRED_POLYGONSHAPE_H
#define __INFERRED_POLYGONSHAPE_H

class PolygonShape {
public:
	void CalcBounds();
	void IsCurvy();
	void IsOval();
	void Offset();
	void Scale();

protected:
	long fField2; // Offset: 2
};

#endif
