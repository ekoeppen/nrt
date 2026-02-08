#ifndef __KERNELSEMAPHORE_H
#define __KERNELSEMAPHORE_H

#include "KernelQueue.h"

/**
 * TSemaphoreOpList
 * 
 * A list of operations to be performed on a semaphore group.
 */
class TSemaphoreOpList
{
public:
	long			Init(unsigned long num, unsigned long* ops);
					~TSemaphoreOpList();

private:
	unsigned long	fReserved[4];	// Offset 0
	unsigned long*	fOps;			// Offset 16
	unsigned long	fCount;			// Offset 20
};

/**
 * TSemaphore
 * 
 * Kernel-mode semaphore primitive.
 */
class TSemaphore : public TTaskContainer
{
public:
					TSemaphore();
	virtual			~TSemaphore();

	virtual void	Remove(TTask* task);

	void			BlockOnInc(TTask* task, SemFlags flags);
	void			BlockOnZero(TTask* task, SemFlags flags);
	void			WakeTasksOnInc();
	void			WakeTasksOnZero();

	unsigned long	fReserved[4];	// Padding to offset 16
	void*			fVTable;		// Offset 16
	long			fCount;			// Offset 20
	TTaskQueue		fZeroQueue;		// Offset 24
	TTaskQueue		fIncQueue;		// Offset 32
};

/**
 * TSemaphoreGroup
 * 
 * A collection of semaphores.
 */
class TSemaphoreGroup
{
public:
	long			Init(unsigned long num);
					~TSemaphoreGroup();

	long			SemOp(TSemaphoreOpList* semList, SemFlags flags, TTask* task);
	void			UnWindOp(TSemaphoreOpList* semList, long count);

private:
	unsigned long	fReserved[4];	// Offset 0
	TSemaphore*		fSemaphores;	// Offset 16
	unsigned long	fCount;			// Offset 20
	void*			fRefCon;		// Offset 24
};

#endif
