/*
	File:		SingleQ.cpp

	Contains:	Support for singly linked lists.

	Copyright:	 1993-1994 by Apple Computer, Inc., all rights reserved.
*/

#include "SingleQ.h"

/**
 * TSingleQItem Implementation
 */

void TSingleQItem::Init()
{
	fLink = NULL;
}


/**
 * TSingleQContainer Implementation
 */

/**
 * Symbol: TSingleQContainer::__ct(void)
 * Address: 001e2bbc
 */
TSingleQContainer::TSingleQContainer()
{
	// The ROM implementation of the default constructor is a stub that
	// only handles 'operator new' allocation if 'this' is NULL.
	// It does not initialize fields; Init() must be called.
}

/**
 * Convenience constructor (often inlined or not present as a separate symbol)
 */
TSingleQContainer::TSingleQContainer(ULong offsetToSingleQItem)
{
	Init(offsetToSingleQItem);
}

/**
 * Symbol: TSingleQContainer::Init(unsigned long)
 * Address: 001e2bcc
 */
void TSingleQContainer::Init(ULong offsetToSingleQItem)
{
	fOffsetToSingleQItem = offsetToSingleQItem;
	fHead = NULL;
}

/**
 * Symbol: TSingleQContainer::Add(void *)
 * Address: 001e2bdc
 * 
 * Adds an item to the head of the list (LIFO).
 */
void TSingleQContainer::Add(void* item)
{
	TSingleQItem* qItem = (TSingleQItem*)((char*)item + fOffsetToSingleQItem);
	qItem->fLink = fHead;
	fHead = qItem;
}

/**
 * Symbol: TSingleQContainer::Remove(void)
 * Address: 001e2bf4
 * 
 * Removes and returns the item at the head of the list.
 */
void* TSingleQContainer::Remove()
{
	TSingleQItem* qItem = fHead;
	if (qItem != NULL)
	{
		fHead = qItem->fLink;
		return (void*)((char*)qItem - fOffsetToSingleQItem);
	}
	return NULL;
}

/**
 * Symbol: TSingleQContainer::Peek(void)
 * Address: 001e2c18
 * 
 * Returns the item at the head of the list without removing it.
 */
void* TSingleQContainer::Peek()
{
	if (fHead != NULL)
	{
		return (void*)((char*)fHead - fOffsetToSingleQItem);
	}
	return NULL;
}

/**
 * Symbol: TSingleQContainer::GetNext(void *)
 * Address: 001e2c30
 * 
 * Given an item in the list, returns the next item.
 */
void* TSingleQContainer::GetNext(void* item)
{
	if (item != NULL)
	{
		TSingleQItem* qItem = (TSingleQItem*)((char*)item + fOffsetToSingleQItem);
		TSingleQItem* nextQItem = qItem->fLink;
		if (nextQItem != NULL)
		{
			return (void*)((char*)nextQItem - fOffsetToSingleQItem);
		}
	}
	return NULL;
}
