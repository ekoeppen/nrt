#ifndef __INFERRED_TXSECTFRAMES_H
#define __INFERRED_TXSECTFRAMES_H

class TXSectFrames {
public:
	void GetNextFrame();
	void SetUniform();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField32; // Offset: 32
};

#endif
