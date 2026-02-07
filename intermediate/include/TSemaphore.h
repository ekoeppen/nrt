#ifndef __INFERRED_TSEMAPHORE_H
#define __INFERRED_TSEMAPHORE_H

class TSemaphore {
public:
	void BlockOnInc();
	void BlockOnZero();
	void Remove();
	TSemaphore();
	void WakeTasksOnInc();
	void WakeTasksOnZero();
	~TSemaphore();

protected:
	long fField16; // Offset: 16
};

#endif
