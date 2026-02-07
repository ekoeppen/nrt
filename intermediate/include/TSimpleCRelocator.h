#ifndef __INFERRED_TSIMPLECRELOCATOR_H
#define __INFERRED_TSIMPLECRELOCATOR_H

class TSimpleCRelocator {
public:
	void GetTheNextRelocEntry();
	void Init();
	void Relocate();
	TSimpleCRelocator();
	~TSimpleCRelocator();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	char fField17; // Offset: 17
	long fField24; // Offset: 24
	char fField28; // Offset: 28
};

#endif
