#ifndef __INFERRED_MEMORYPIPE_H
#define __INFERRED_MEMORYPIPE_H

class MemoryPipe {
public:
	void FlushRead();
	void FlushWrite();
	MemoryPipe();
	void Overflow();
	void Reset();
	void Underflow();
	~MemoryPipe();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
