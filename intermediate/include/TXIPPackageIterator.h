#ifndef __INFERRED_TXIPPACKAGEITERATOR_H
#define __INFERRED_TXIPPACKAGEITERATOR_H

class TXIPPackageIterator {
public:
	void StoreXIP();
	TXIPPackageIterator();

protected:
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	char fField32; // Offset: 32
	long fField36; // Offset: 36
};

#endif
