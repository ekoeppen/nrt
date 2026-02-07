#ifndef __INFERRED_TSAVESCREENBITS_H
#define __INFERRED_TSAVESCREENBITS_H

class TSaveScreenBits {
public:
	void AllocateBuffers();
	void RestoreScreenBits();
	void SaveScreenBits();
	TSaveScreenBits();
	~TSaveScreenBits();

protected:
	long fField4; // Offset: 4
	char fField5; // Offset: 5
	long fField12; // Offset: 12
	long fField14; // Offset: 14
	long fField16; // Offset: 16
	char fField20; // Offset: 20
	char fField21; // Offset: 21
	char fField22; // Offset: 22
	char fField23; // Offset: 23
	long fField24; // Offset: 24
};

#endif
