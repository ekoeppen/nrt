#ifndef __INFERRED_TFRAMERELOCATIONGENERATOR_H
#define __INFERRED_TFRAMERELOCATIONGENERATOR_H

class TFrameRelocationGenerator {
public:
	void GetHeader();
	TFrameRelocationGenerator();
	void Update();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	char fField21; // Offset: 21
	char fField22; // Offset: 22
	char fField23; // Offset: 23
};

#endif
