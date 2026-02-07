#ifndef __INFERRED_TXRULERBITMAPCLUSTER_H
#define __INFERRED_TXRULERBITMAPCLUSTER_H

class TXRulerBitMapCluster {
public:
	void CalcBitMapRect();
	void CalcDimensions();
	void CalcDragBitMapRect();
	void Draw();
	void IRulerBitMapCluster();
	void InvertBitMap();
	void PointToBitMapIndex();
	void SetTopLeft();
	TXRulerBitMapCluster();

protected:
	long fField2; // Offset: 2
	long fField4; // Offset: 4
	long fField6; // Offset: 6
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
};

#endif
