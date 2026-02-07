#ifndef __INFERRED_TNOREUSEALLOCATOR_H
#define __INFERRED_TNOREUSEALLOCATOR_H

class TNoReuseAllocator {
public:
	void Allocate();
	void Deallocate();

protected:
	long fField4; // Offset: 4
	long fField8; // Offset: 8
};

#endif
