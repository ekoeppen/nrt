#ifndef __INFERRED_TLIVEINKER_H
#define __INFERRED_TLIVEINKER_H

class TLiveInker {
public:
	void AddPoint();
	void Init();
	void InkLine();
	void MapLCDExtent();
	void ResetAccumulator();
	void StartLiveInk();
	void StopLiveInk();
	TLiveInker();
	~TLiveInker();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	char fField9; // Offset: 9
	long fField12; // Offset: 12
	long fField14; // Offset: 14
	long fField16; // Offset: 16
	long fField18; // Offset: 18
	long fField20; // Offset: 20
	char fField24; // Offset: 24
	char fField25; // Offset: 25
	char fField26; // Offset: 26
	char fField27; // Offset: 27
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField34; // Offset: 34
	long fField36; // Offset: 36
	long fField38; // Offset: 38
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	long fField48; // Offset: 48
	long fField52; // Offset: 52
	long fField56; // Offset: 56
};

#endif
