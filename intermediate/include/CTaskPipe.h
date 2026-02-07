#ifndef __INFERRED_CTASKPIPE_H
#define __INFERRED_CTASKPIPE_H

class CTaskPipe {
public:
	CTaskPipe();
	void FlushRead();
	void FlushWrite();
	void Init();
	void Overflow();
	void Underflow();
	~CTaskPipe();

protected:
	long fField4; // Offset: 4
	long fField12; // Offset: 12
};

#endif
