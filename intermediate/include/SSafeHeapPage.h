#ifndef __INFERRED_SSAFEHEAPPAGE_H
#define __INFERRED_SSAFEHEAPPAGE_H

class SSafeHeapPage {
public:
	void Alloc();
	void FirstPage();
	void Free();
	void FreePage();
	void GetPage();
	void Init();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
};

#endif
