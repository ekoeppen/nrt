#ifndef __INFERRED_TXFRAMESEDITINFO_H
#define __INFERRED_TXFRAMESEDITINFO_H

class TXFramesEditInfo {
public:
	void CatchFrame();
	void GetEditInfoPtr();
	void GetNext();
	void SetEditFlag();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField52; // Offset: 52
	long fField56; // Offset: 56
	long fField60; // Offset: 60
};

#endif
