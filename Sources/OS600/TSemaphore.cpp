#include "KernelSemaphore.h"

/**
 * Symbol: TSemaphore::TSemaphore(void)
 * Address: 001d5100
 */
TSemaphore::TSemaphore()
{
	fCount = 0;
	// TTaskQueue constructors are called automatically
}

/**
 * Symbol: TSemaphore::~TSemaphore(void)
 * Address: 001d515c
 */
TSemaphore::~TSemaphore()
{
	// No specific logic in destructor other than vtable settings
}

/**
 * Symbol: TSemaphore::Remove(TTask *)
 * Address: 001d5230
 */
void TSemaphore::Remove(TTask* task)
{
	fZeroQueue.RemoveFromQueue(task, kStateBlocked);
	fIncQueue.RemoveFromQueue(task, kStateBlocked);
}

/**
 * Symbol: TSemaphore::BlockOnInc(TTask *, SemFlags)
 * Address: 001d4d98
 */
void TSemaphore::BlockOnInc(TTask* task, SemFlags flags)
{
	if (flags & kNoWaitOnBlock)
		return;

	// In kernel, we use the actual method
	// task->Block();
	fIncQueue.Add(task, kStateBlocked, this);
}

/**
 * Symbol: TSemaphore::BlockOnZero(TTask *, SemFlags)
 * Address: 001d5264
 */
void TSemaphore::BlockOnZero(TTask* task, SemFlags flags)
{
	if (flags & kNoWaitOnBlock)
		return;

	// task->Block();
	fZeroQueue.Add(task, kStateBlocked, this);
}

/**
 * Symbol: TSemaphore::WakeTasksOnInc(void)
 * Address: 001d4e18
 */
void TSemaphore::WakeTasksOnInc()
{
	TTask* task;
	while ((task = fIncQueue.Remove(kStateBlocked)) != NULL)
	{
		// task->Unblock();
	}
}

/**
 * Symbol: TSemaphore::WakeTasksOnZero(void)
 * Address: 001d4dd4
 */
void TSemaphore::WakeTasksOnZero()
{
	TTask* task;
	while ((task = fZeroQueue.Remove(kStateBlocked)) != NULL)
	{
		// task->Unblock();
	}
}

/**
 * TSemaphoreOpList Implementation
 */

/**
 * Symbol: TSemaphoreOpList::Init(unsigned long, unsigned long *)
 * Address: 001d5078
 */
long TSemaphoreOpList::Init(unsigned long num, unsigned long* ops)
{
	fOps = new unsigned long[num];
	if (fOps == NULL) {
		fCount = 0;
		return -1; // Error
	}
	fCount = num;
	for (unsigned long i = 0; i < num; i++) {
		fOps[i] = ops[i];
	}
	return 0;
}

/**
 * Symbol: TSemaphoreOpList::__dt(void)
 * Address: 001d50cc
 */
TSemaphoreOpList::~TSemaphoreOpList()
{
	if (fOps) {
		delete[] fOps;
		fOps = NULL;
	}
}


/**
 * TSemaphoreGroup Implementation
 */

/**
 * Symbol: TSemaphoreGroup::Init(unsigned long)
 * Address: 001d4e5c
 */
long TSemaphoreGroup::Init(unsigned long num)
{
	fRefCon = 0;
	fSemaphores = new TSemaphore[num];
	if (fSemaphores == NULL) {
		fCount = 0;
		return -1;
	}
	fCount = num;
	return 0;
}

/**
 * Symbol: TSemaphoreGroup::__dt(void)
 * Address: 001d4ea8
 */
TSemaphoreGroup::~TSemaphoreGroup()
{
	if (fSemaphores) {
		delete[] fSemaphores;
		fSemaphores = NULL;
	}
}

/**
 * Symbol: TSemaphoreGroup::UnWindOp(TSemaphoreOpList *, long)
 * Address: 001d4ee8
 */
void TSemaphoreGroup::UnWindOp(TSemaphoreOpList* semList, long count)
{
	for (long i = count - 1; i >= 0; i--) {
		unsigned long opItem = semList->fOps[i];
		unsigned short semIndex = opItem >> 16;
		short op = (short)(opItem & 0xFFFF);

		if (semIndex < fCount) {
			TSemaphore* sem = &fSemaphores[semIndex];
			if (op != 0) {
				sem->fCount -= op;
			}
		}
	}
}

/**
 * Symbol: TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)
 * Address: 001d4f38
 */
long TSemaphoreGroup::SemOp(TSemaphoreOpList* semList, SemFlags flags, TTask* task)
{
	for (unsigned long i = 0; i < semList->fCount; i++) {
		unsigned long opItem = semList->fOps[i];
		unsigned short semIndex = opItem >> 16;
		short op = (short)(opItem & 0xFFFF);

		if (semIndex >= fCount) continue;

		TSemaphore* sem = &fSemaphores[semIndex];
		if (op == 0) {
			if (sem->fCount != 0) {
				sem->BlockOnZero(task, flags);
				UnWindOp(semList, i);
				return -1; // Blocked
			}
		} else {
			long nextCount = sem->fCount + op;
			if (nextCount < 0) {
				sem->BlockOnInc(task, flags);
				UnWindOp(semList, i);
				return -1; // Blocked
			}
			sem->fCount = nextCount;
		}
	}

	// Post-op: Wake up tasks
	for (unsigned long i = 0; i < semList->fCount; i++) {
		unsigned long opItem = semList->fOps[i];
		unsigned short semIndex = opItem >> 16;
		short op = (short)(opItem & 0xFFFF);

		if (semIndex >= fCount) continue;

		TSemaphore* sem = &fSemaphores[semIndex];
		if (op != 0) {
			if (sem->fCount == (long)op) {
				sem->WakeTasksOnInc();
			}
			if (sem->fCount == 0) {
				sem->WakeTasksOnZero();
			}
		}
	}

	return 0;
}
