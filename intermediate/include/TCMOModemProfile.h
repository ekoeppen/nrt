#ifndef __INFERRED_TCMOMODEMPROFILE_H
#define __INFERRED_TCMOMODEMPROFILE_H

class TCMOModemProfile {
public:
	void GetModemString();
	void SetDefault();
	void SetModemStrings();
	TCMOModemProfile();

protected:
	long fField4; // Offset: 4
	char fField12; // Offset: 12
	char fField13; // Offset: 13
	char fField14; // Offset: 14
	char fField15; // Offset: 15
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
