#ifndef __INFERRED_MEMBUFFERPIPE_H
#define __INFERRED_MEMBUFFERPIPE_H

class MemBufferPipe {
public:
	void FlushRead();
	void FlushWrite();
	void Overflow();
	void Reset();
	void Underflow();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
