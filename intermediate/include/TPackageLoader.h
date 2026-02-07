#ifndef __INFERRED_TPACKAGELOADER_H
#define __INFERRED_TPACKAGELOADER_H

class TPackageLoader {
public:
	void Done();
	void Load();
	void Reset();
	TPackageLoader();
	~TPackageLoader();

protected:
	long fField4; // Offset: 4
	char fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField28; // Offset: 28
	char fField32; // Offset: 32
	char fField33; // Offset: 33
	char fField111; // Offset: 111
};

#endif
