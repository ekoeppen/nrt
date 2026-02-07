#ifndef __INFERRED_TINKER_H
#define __INFERRED_TINKER_H

class TInker {
public:
	void Calibrate();
	void Convert();
	void DrawInk();
	void GetCurrentPenMode();
	void GetNextPenMode();
	void GetRawPoint();
	void IInker();
	void InsertionSort();
	void LCDEntry();
	void MainConstructor();
	void PresCalibrate();
	void SetCurrentPenMode();
	void SetNewtPort();
	void SetNextPenMode();
	TInker();
	void TestForCalibrationNeeded();
	~TInker();

protected:
	long fField128; // Offset: 128
	char fField132; // Offset: 132
	char fField133; // Offset: 133
	long fField136; // Offset: 136
	long fField140; // Offset: 140
	long fField144; // Offset: 144
	long fField148; // Offset: 148
	char fField192; // Offset: 192
	char fField193; // Offset: 193
	char fField194; // Offset: 194
	char fField195; // Offset: 195
	long fField196; // Offset: 196
	long fField198; // Offset: 198
	char fField199; // Offset: 199
	long fField200; // Offset: 200
	long fField202; // Offset: 202
	char fField203; // Offset: 203
	long fField204; // Offset: 204
	long fField208; // Offset: 208
	long fField212; // Offset: 212
};

#endif
