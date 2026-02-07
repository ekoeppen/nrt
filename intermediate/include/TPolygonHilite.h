#ifndef __INFERRED_TPOLYGONHILITE_H
#define __INFERRED_TPOLYGONHILITE_H

class TPolygonHilite {
public:
	void Clone();
	void CopyFrom();
	void Encloses();
	void Overlaps();
	TPolygonHilite();
	void UpdateBounds();
	~TPolygonHilite();

protected:
	long fField2; // Offset: 2
	char fField3; // Offset: 3
	long fField8; // Offset: 8
	char fField9; // Offset: 9
	long fField10; // Offset: 10
	char fField11; // Offset: 11
	long fField32; // Offset: 32
};

#endif
