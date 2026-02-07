#ifndef __INFERRED_TSTARTINFO_H
#define __INFERRED_TSTARTINFO_H

class TStartInfo {
public:
	void Complete();
	void Init();
	TStartInfo();
	~TStartInfo();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
