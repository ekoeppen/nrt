#ifndef __INFERRED_TPIXELOBJ_H
#define __INFERRED_TPIXELOBJ_H

class TPixelObj {
public:
	void FramBitMapToPixMap();
	void GetFramBitmap();
	void Init();
	TPixelObj();
	~TPixelObj();

protected:
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
	char fField48; // Offset: 48
};

#endif
