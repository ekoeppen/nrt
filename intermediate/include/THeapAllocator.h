#ifndef __INFERRED_THEAPALLOCATOR_H
#define __INFERRED_THEAPALLOCATOR_H

class THeapAllocator {
public:
	void Allocate();
	void Deallocate();
	void GetGlobalAllocator();

protected:
	long fField4; // Offset: 4
};

#endif
