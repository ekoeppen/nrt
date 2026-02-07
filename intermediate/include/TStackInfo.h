#ifndef __INFERRED_TSTACKINFO_H
#define __INFERRED_TSTACKINFO_H

class TStackInfo {
public:
	void Init();
	TStackInfo();
	~TStackInfo();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField16; // Offset: 16
	long fField28; // Offset: 28
	long fField32; // Offset: 32
};

#endif
