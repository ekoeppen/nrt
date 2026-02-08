#ifndef __KERNELQUEUE_H
#define __KERNELQUEUE_H

#include "KernelTypes.h"

class TTask;

/**
 * TTaskContainer
 * 
 * An interface for objects that can contain tasks in queues.
 * Used for task removal notifications.
 */
class TTaskContainer
{
public:
	virtual void	Remove(TTask* task);
};

/**
 * TTaskQueue
 * 
 * A simple doubly-linked list of tasks.
 */
class TTaskQueue
{
public:
					TTaskQueue();
	void			Add(TTask* task, SemFlags state, TTaskContainer* container);
	TTask*			Remove(SemFlags state);
	void			RemoveFromQueue(TTask* task, SemFlags state);

private:
	TTask*			fHead;	// Offset 0
	TTask*			fTail;	// Offset 4
};

#endif
