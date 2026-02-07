#ifndef __INFERRED_TTILE_H
#define __INFERRED_TTILE_H

class TTile {
public:
	void RotateTilesL();
	void RotateTilesR();
	TTile();
	void TileBuffer();
	void Untile();
	~TTile();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField180; // Offset: 180
	long fField184; // Offset: 184
	long fField188; // Offset: 188
};

#endif
