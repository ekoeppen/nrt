#ifndef __INFERRED_TSERIALNUMBERROM_H
#define __INFERRED_TSERIALNUMBERROM_H

class TSerialNumberROM {
public:
	void GetSystemSerialNumber();
	void Init();

protected:
	long fField4; // Offset: 4
	char fField8; // Offset: 8
	char fField9; // Offset: 9
};

#endif
