#ifndef __INFERRED_TIRLAPPUTBUFFER_H
#define __INFERRED_TIRLAPPUTBUFFER_H

class TIrLAPPutBuffer {
public:
	void AtEOF();
	void Get();
	void Init();
	void Seek();
	void SetControlBuffer();
	void SetDataBuffer();
	TIrLAPPutBuffer();
	~TIrLAPPutBuffer();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField12; // Offset: 12
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
};

#endif
