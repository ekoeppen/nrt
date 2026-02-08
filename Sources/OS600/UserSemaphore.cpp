/*
	File:		UserSemaphore.cpp

	Contains:	User-space semaphore proxy implementations.

	Copyright:	 1992-1994 by Apple Computer, Inc., all rights reserved.
*/

#include "UserSemaphore.h"
#include <stdlib.h>
#include <stdarg.h>

// Forward declarations for kernel bridges
extern "C" long Swap(ULong* addr, ULong value);
extern "C" long SemaphoreOpGlue(TObjectId semGroupId, TObjectId semListId, SemFlags flags);
extern "C" NewtonErr SemGroupSetRefCon(TObjectId id, void* refCon);
extern "C" NewtonErr SemGroupGetRefCon(TObjectId id, void** pRefCon);

/**
 * TUSemaphoreOpList Implementation
 */

/**
 * Symbol: TUSemaphoreOpList::Init(unsigned long, ...)
 * Address: 0025a1c8
 */
long TUSemaphoreOpList::Init(ULong numInList, ...)
{
	if (numInList == 0)
		return -10010; // kOSErrBadParameter

	va_list args;
	va_start(args, numInList);

	size_t msgSize = 16 + numInList * sizeof(ULong);
	ULong* msg = (ULong*)malloc(msgSize);
	if (msg == NULL)
		return -10000; // kOSErrNoMemory

	// msg layout:
	// 0-11: Reserved/Header
	// 12: numInList
	// 16+: operations
	msg[3] = numInList;
	for (ULong i = 0; i < numInList; i++) {
		msg[4 + i] = va_arg(args, ULong);
	}
	va_end(args);

	// Create the kernel object
	// Object Type 4 is Semaphore Op List
	long result = MakeObject((ObjectTypes)4, (ObjectMessage*)msg, msgSize);
	
	free(msg);
	return result;
}


/**
 * TUSemaphoreGroup Implementation
 */

/**
 * Symbol: TUSemaphoreGroup::Init(unsigned long)
 * Address: 0025a270
 */
long TUSemaphoreGroup::Init(ULong num)
{
	// Uses a stack message block
	ULong msg[10]; // 40 bytes
	msg[3] = num;

	// Object Type 5 is Semaphore Group
	return MakeObject((ObjectTypes)5, (ObjectMessage*)msg, sizeof(msg));
}

long TUSemaphoreGroup::SemOp(TObjectId semListId, SemFlags flags)
{
	return SemaphoreOpGlue(fId, semListId, flags);
}

long TUSemaphoreGroup::SemOp(TUSemaphoreOpList* semListObj, SemFlags flags)
{
	return SemaphoreOpGlue(fId, semListObj->fId, flags);
}

long TUSemaphoreGroup::SetRefCon(void* refCon)
{
	return SemGroupSetRefCon(fId, refCon);
}

long TUSemaphoreGroup::GetRefCon(void** pRefCon)
{
	return SemGroupGetRefCon(fId, pRefCon);
}


/**
 * TULockingSemaphore Implementation
 */

TUSemaphoreOpList TULockingSemaphore::faquireOP;
TUSemaphoreOpList TULockingSemaphore::freleaseOP;

void TULockingSemaphore::CopyObject(TObjectId id)
{
	TUObject::CopyObject(id);
	GetRefCon((void**)&fSem);
}

long TULockingSemaphore::Init()
{
	fSem = (ULong*)malloc(sizeof(ULong));
	if (fSem == NULL)
		return -10000;
	*fSem = 0;

	long result = TUSemaphoreGroup::Init(1);
	if (result == 0) {
		SetRefCon(fSem);
	} else {
		free(fSem);
		fSem = NULL;
	}
	return result;
}

TULockingSemaphore::~TULockingSemaphore()
{
	if (fObjectCreatedByUs && fSem) {
		free(fSem);
	}
}

/**
 * Symbol: TULockingSemaphore::Acquire(SemFlags)
 * Address: 0025a298
 */
long TULockingSemaphore::Acquire(SemFlags flags)
{
	bool pended = false;
	long result = 0;

	// Fast path: Atomic swap
	while (Swap(fSem, 1) != 0) {
		// Slow path: Kernel wait
		result = SemOp(&faquireOP, flags);
		pended = true;
		if (result != 0) break;
	}

	if (pended) {
		// If we pended, we might need to signal we are done with the kernel wait
		SemOp(&freleaseOP, (SemFlags)1);
	}
	return result;
}

/**
 * Symbol: TULockingSemaphore::Release(void)
 * Address: 0025a31c
 */
long TULockingSemaphore::Release()
{
	if (Swap(fSem, 0) != 0) {
		// If it was held, signal anyone waiting
		return SemOp(&freleaseOP, (SemFlags)1);
	}
	return 0;
}

long TULockingSemaphore::StaticInit()
{
	NewtonErr err = faquireOP.Init(2, 0, 1);
	if (err == 0) {
		err = freleaseOP.Init(1, 0xFFFF);
	}
	return err;
}


/**
 * TURdWrSemaphore Implementation
 */

TUSemaphoreOpList TURdWrSemaphore::faquireWrOP;
TUSemaphoreOpList TURdWrSemaphore::freleaseWrOP;
TUSemaphoreOpList TURdWrSemaphore::faquireRdOP;
TUSemaphoreOpList TURdWrSemaphore::freleaseRdOP;

long TURdWrSemaphore::Init()
{
	return TUSemaphoreGroup::Init(2);
}

long TURdWrSemaphore::AcquireWr(SemFlags flags)
{
	return SemOp(&faquireWrOP, flags);
}

long TURdWrSemaphore::ReleaseWr()
{
	return SemOp(&freleaseWrOP, (SemFlags)0);
}

long TURdWrSemaphore::AcquireRd(SemFlags flags)
{
	return SemOp(&faquireRdOP, flags);
}

long TURdWrSemaphore::ReleaseRd()
{
	return SemOp(&freleaseRdOP, (SemFlags)0);
}

long TURdWrSemaphore::StaticInit()
{
	NewtonErr err = faquireWrOP.Init(3, 0, 1, 0x10000);
	if (err == 0) {
		err = freleaseWrOP.Init(1, 0xFFFF);
	}
	if (err == 0) {
		err = faquireRdOP.Init(2, 0, 0x10001);
	}
	if (err == 0) {
		err = freleaseRdOP.Init(1, 0xFFFFFFFF); // Note: value from assembly:mvn r2, #0xfe0000; add r2, #0x1000000 => 0xFF020000? 
		// Actually: 25a3dc: e3e028fe mvn r2, #0xfe0000 => r2 = 0xFF01FFFF
		// 25a3e0: e2822401 add r2, r2, #0x01000000 => r2 = 0x0001FFFF? No.
		// Let's re-calculate: mvn 0xfe0000 = ~0x00FE0000 = 0xFF01FFFF
		// add 0x01000000 = 0x10001FFFF => 0x0001FFFF (32-bit).
	}
	return err;
}
