#ifndef __INFERRED_CNULLPIPE_H
#define __INFERRED_CNULLPIPE_H

class CNullPipe {
public:
	CNullPipe();
	void FlushRead();
	void FlushWrite();
	void Overflow();
	void Reset();
	void Underflow();
	~CNullPipe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
	long fField16; // Offset: 16
};

#endif
