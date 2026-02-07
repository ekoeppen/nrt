#ifndef __INFERRED_CXIPOBJECTPIPE_H
#define __INFERRED_CXIPOBJECTPIPE_H

class CXIPObjectPipe {
public:
	CXIPObjectPipe();
	void FlushRead();
	void FlushWrite();
	void Init();
	void Overflow();
	void Reset();
	void Underflow();
	~CXIPObjectPipe();

protected:
	long fField4; // Offset: 4
	long fField16; // Offset: 16
	long fField20; // Offset: 20
	long fField24; // Offset: 24
	long fField28; // Offset: 28
	long fField32; // Offset: 32
	long fField36; // Offset: 36
	long fField40; // Offset: 40
	long fField44; // Offset: 44
};

#endif
