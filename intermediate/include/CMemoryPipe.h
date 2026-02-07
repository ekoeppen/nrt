#ifndef __INFERRED_CMEMORYPIPE_H
#define __INFERRED_CMEMORYPIPE_H

class CMemoryPipe {
public:
	void FlushRead();
	void FlushWrite();
	void Overflow();
	void Underflow();

protected:
};

#endif
