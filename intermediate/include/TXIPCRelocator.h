#ifndef __INFERRED_TXIPCRELOCATOR_H
#define __INFERRED_TXIPCRELOCATOR_H

class TXIPCRelocator {
public:
	void GetTheNextRelocEntry();
	void Init();
	void Relocate();
	TXIPCRelocator();
	~TXIPCRelocator();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	char fField33; // Offset: 33
	long fField34; // Offset: 34
	char fField35; // Offset: 35
	char fField36; // Offset: 36
};

#endif
