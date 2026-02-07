#ifndef __INFERRED_TXLINESPACINGCLUSTER_H
#define __INFERRED_TXLINESPACINGCLUSTER_H

class TXLineSpacingCluster {
public:
	void CalcDimensions();
	void Draw();
	void DrawLineSpacingString();
	void GetLineSpacingStringBounds();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField28; // Offset: 28
};

#endif
