/*
	File:		KernelUtility.h

	Contains:	Kernel-side utility classes for queue management.

	Copyright:	 1993-1994 by Apple Computer, Inc., all rights reserved.
*/

#ifndef __KERNELUTILITY_H
#define __KERNELUTILITY_H

#ifndef __NEWTON_H
#include "Newton.h"
#endif

/*
** TDoubleQItem
** A doubly-linked list item.
*/
class TDoubleQItem
{
public:
	TDoubleQItem();

	TDoubleQItem*	fNext;		// Offset 0
	TDoubleQItem*	fPrev;		// Offset 4
	void*			fOwner;		// Offset 8
};

/*
** TTaskQItem
** A singly-linked list item specifically for tasks.
*/
class TTaskQItem
{
public:
	TTaskQItem();

	TTaskQItem*		fLink;		// Offset 0
	void*			fOwner;		// Offset 4
};

#endif

/*
** TSharedMem
** Kernel-side shared memory object.
*/
class TSharedMem
{
public:
	long	Init(void* environment);

protected:
	ULong	fHeader[1];	// Offset 0
	void*	fEnvironment;	// Offset 4
	ULong	fPadding[2];	// Offset 8, 12
	ULong	fField16;	// Offset 16
	ULong	fField20;	// Offset 20
	ULong	fField24;	// Offset 24
	ULong	fField28;	// Offset 28
	void*	fField32;	// Offset 32 (based on pre-indexed store)
};
