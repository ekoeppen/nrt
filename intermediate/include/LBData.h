#ifndef __INFERRED_LBDATA_H
#define __INFERRED_LBDATA_H

class LBData {
public:
	void GetStore();
	void IsSameEntry();
	void SetStore();

protected:
	long fField8; // Offset: 8
	long fField20; // Offset: 20
	long fField36; // Offset: 36
};

#endif
