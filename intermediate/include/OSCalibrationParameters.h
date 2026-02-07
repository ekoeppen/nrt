#ifndef __INFERRED_OSCALIBRATIONPARAMETERS_H
#define __INFERRED_OSCALIBRATIONPARAMETERS_H

class OSCalibrationParameters {
public:
	void CalculateROMREXCheckSums();
	void SetDefaultValues();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
	long fField64; // Offset: 64
	long fField84; // Offset: 84
	long fField140; // Offset: 140
};

#endif
