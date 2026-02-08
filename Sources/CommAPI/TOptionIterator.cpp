/*
	File:		TOptionIterator.cpp

	Contains:	Implementation of TOptionIterator class for CommAPI

	Copyright:	© 1992-1996 by Apple Computer, Inc., all rights reserved.

	Reverse engineered from Newton OS 2.x ROM
*/

#include "CommAPI/OptionArray.h"

/**
 * Default constructor
 * 
 * Creates an uninitialized iterator with no associated array.
 */
TOptionIterator::TOptionIterator()
{
	// Address: 0014aae4
	fOptionArray = NULL;
	fCurrentIndex = -1;
	fLowBound = -1;
	fHighBound = -1;
	fCurrentOption = NULL;
	fPreviousLink = this;
	fNextLink = this;
}

/**
 * Constructor with option array
 * 
 * @param itsOptionArray The TOptionArray to iterate over
 * 
 * Creates an iterator for the entire option array (from 0 to count-1).
 */
TOptionIterator::TOptionIterator(TOptionArray* itsOptionArray)
{
	// Address: 0014ab30
	ArrayIndex highBound = itsOptionArray->fCount - 1;
	Init(itsOptionArray, 0, highBound);
}

/**
 * Constructor with bounds
 * 
 * @param itsOptionArray The TOptionArray to iterate over
 * @param itsLowBound Starting index for iteration
 * @param itsHighBound Ending index for iteration
 * 
 * Creates an iterator for a subset of the option array.
 */
TOptionIterator::TOptionIterator(TOptionArray* itsOptionArray,
                                 ArrayIndex itsLowBound, 
                                 ArrayIndex itsHighBound)
{
	// Address: 0014ab78
	Init(itsOptionArray, itsLowBound, itsHighBound);
}

/**
 * Destructor
 * 
 * Removes this iterator from the option array's linked list.
 */
TOptionIterator::~TOptionIterator()
{
	// Address: 0014abc4
	if (fOptionArray != NULL) {
		TOptionIterator* nextIter = RemoveFromList();
		fOptionArray->fIterator = nextIter;
	}
}

/**
 * Initialize the iterator
 * 
 * @param itsOptionArray The TOptionArray to iterate over
 * @param itsLowBound Starting index for iteration
 * @param itsHighBound Ending index for iteration
 * 
 * Sets up the iterator and adds it to the array's iterator list.
 */
void TOptionIterator::Init(TOptionArray* itsOptionArray,
                           ArrayIndex itsLowBound,
                           ArrayIndex itsHighBound)
{
	// Address: 0014ac08
	fPreviousLink = this;
	fNextLink = this;
	fOptionArray = itsOptionArray;
	fCurrentOption = NULL;
	
	// Add to the array's iterator list
	TOptionIterator* existingIterator = itsOptionArray->fIterator;
	AppendToList(existingIterator);
	itsOptionArray->fIterator = this;
	
	// Set the iteration bounds
	InitBounds(itsLowBound, itsHighBound);
}

/**
 * Initialize iteration bounds
 * 
 * @param itsLowBound Starting index for iteration
 * @param itsHighBound Ending index for iteration
 * 
 * Validates and sets the low/high bounds for iteration.
 */
void TOptionIterator::InitBounds(ArrayIndex itsLowBound, ArrayIndex itsHighBound)
{
	// Address: 0014ac5c
	ArrayIndex count = fOptionArray->fCount;
	
	// Validate high bound
	if (count > 0) {
		ArrayIndex maxIndex = count - 1;
		if (itsHighBound < 0) {
			itsHighBound = 0;
		}
		if (itsHighBound > maxIndex) {
			itsHighBound = maxIndex;
		}
	} else {
		itsHighBound = -1;
	}
	
	fHighBound = itsHighBound;
	
	// Validate low bound
	if (itsHighBound >= 0) {
		if (itsLowBound < 0) {
			itsLowBound = 0;
		}
		if (itsLowBound > itsHighBound) {
			itsLowBound = itsHighBound;
		}
	} else {
		itsLowBound = -1;
	}
	
	fLowBound = itsLowBound;
	
	// Reset to start of iteration
	Reset();
}

/**
 * Reset bounds to cover entire array
 * 
 * Resets the iteration bounds to cover all elements in the array.
 */
void TOptionIterator::ResetBounds()
{
	// Address: 0014acb8
	ArrayIndex count = fOptionArray->fCount;
	
	if (count > 0) {
		fHighBound = count - 1;
		fLowBound = 0;
	} else {
		fHighBound = -1;
		fLowBound = -1;
	}
	
	Reset();
}

/**
 * Check if more elements available
 * 
 * @return TRUE if current index is valid
 */
Boolean TOptionIterator::More()
{
	// Address: 0014ace4
	if (fOptionArray == NULL) {
		return false;
	}
	
	return (fCurrentIndex != -1);
}

/**
 * Reset to beginning of iteration
 * 
 * Sets current index to low bound and updates current option pointer.
 */
void TOptionIterator::Reset()
{
	// Address: 0014ad0c
	fCurrentIndex = fLowBound;
	
	if (fCurrentIndex >= 0) {
		fCurrentOption = fOptionArray->fArrayBlock;
	} else {
		fCurrentOption = NULL;
	}
}

/**
 * Delete the associated array's iterator list
 * 
 * Called when the array is being deleted to clean up all iterators.
 */
void TOptionIterator::DeleteArray()
{
	// Address: 0014ad2c
	TOptionIterator* nextIter = fNextLink;
	TOptionIterator* arrayIter = fOptionArray->fIterator;
	
	if (this != arrayIter) {
		arrayIter->DeleteArray();
	}
	
	fOptionArray = NULL;
	fCurrentOption = NULL;
}

/**
 * Advance to next element
 * 
 * Moves the iterator to the next option in the array.
 */
void TOptionIterator::Advance()
{
	// Address: 0014ad60
	if (fCurrentIndex >= fHighBound) {
		// At or past end of iteration
		fCurrentIndex = -1;
		fCurrentOption = NULL;
	} else {
		// Move to next option
		fCurrentIndex++;
		
		// Calculate next option pointer by adding the current option's
		// aligned size to the current pointer
		Size optionSize = fCurrentOption->fLength;
		Size alignedSize = (optionSize + 15) & ~3;  // Align to 4-byte boundary
		fCurrentOption = (TOption*)((char*)fCurrentOption + alignedSize);
	}
}

/**
 * Handle option removal at given index
 * 
 * @param theIndex Index of option being removed
 * 
 * Called by TOptionArray when an option is removed to update iterator state.
 */
void TOptionIterator::RemoveOptionAt(ArrayIndex theIndex)
{
	// Address: 0014ada0
	
	// Adjust bounds if necessary
	if (fLowBound > theIndex) {
		fLowBound--;
	}
	
	if (fHighBound >= theIndex) {
		fHighBound--;
	}
	
	if (fCurrentIndex >= theIndex) {
		fCurrentIndex--;
	}
	
	// Recalculate current option pointer if we have a valid index
	if (fCurrentIndex >= 0) {
		fCurrentOption = fOptionArray->fArrayBlock;
		
		for (ArrayIndex i = 0; i < fCurrentIndex; i++) {
			Size optionSize = fCurrentOption->fLength;
			Size alignedSize = (optionSize + 15) & ~3;
			fCurrentOption = (TOption*)((char*)fCurrentOption + alignedSize);
		}
	}
	
	// Notify other iterators in the list
	if (fOptionArray != NULL) {
		TOptionIterator* iter = fNextLink;
		TOptionIterator* arrayIter = fOptionArray->fIterator;
		
		if (this != arrayIter) {
			iter->RemoveOptionAt(theIndex);
		}
	}
}

/**
 * Handle option insertion at given index
 * 
 * @param theIndex Index where option is being inserted
 * 
 * Called by TOptionArray when an option is inserted to update iterator state.
 */
void TOptionIterator::InsertOptionAt(ArrayIndex theIndex)
{
	// Address: 0014ae3c
	
	// Adjust bounds if necessary
	if (fLowBound >= theIndex) {
		fLowBound++;
	}
	
	if (fHighBound >= theIndex) {
		fHighBound++;
	}
	
	if (fCurrentIndex >= theIndex) {
		fCurrentIndex++;
	}
	
	// Recalculate current option pointer if we have a valid index
	if (fCurrentIndex >= 0) {
		fCurrentOption = fOptionArray->fArrayBlock;
		
		for (ArrayIndex i = 0; i < fCurrentIndex; i++) {
			Size optionSize = fCurrentOption->fLength;
			Size alignedSize = (optionSize + 15) & ~3;
			fCurrentOption = (TOption*)((char*)fCurrentOption + alignedSize);
		}
	}
	
	// Notify other iterators in the list
	if (fOptionArray != NULL) {
		TOptionIterator* iter = fNextLink;
		TOptionIterator* arrayIter = fOptionArray->fIterator;
		
		if (this != arrayIter) {
			iter->InsertOptionAt(theIndex);
		}
	}
}

/**
 * Get current index
 * 
 * @return Current iteration index, or -1 if invalid
 */
ArrayIndex TOptionIterator::CurrentIndex()
{
	// Address: 0014aed8
	if (fOptionArray == NULL) {
		return -1;
	}
	
	return fCurrentIndex;
}

/**
 * Get first valid index
 * 
 * @return First index in iteration range, or -1 if empty
 */
ArrayIndex TOptionIterator::FirstIndex()
{
	// Address: 0014aeec
	Reset();
	
	if (!More()) {
		return -1;
	}
	
	return fCurrentIndex;
}

/**
 * Get next valid index
 * 
 * @return Next index in iteration, or -1 if at end
 */
ArrayIndex TOptionIterator::NextIndex()
{
	// Address: 0014af18
	Advance();
	
	if (!More()) {
		return -1;
	}
	
	return fCurrentIndex;
}

/**
 * Get current option
 * 
 * @return Pointer to current TOption, or NULL if invalid
 */
TOption* TOptionIterator::CurrentOption()
{
	// Address: 0014af44
	if (fOptionArray == NULL) {
		return NULL;
	}
	
	return fCurrentOption;
}

/**
 * Find option by label
 * 
 * @param label The label to search for
 * @return Pointer to TOption with matching label, or NULL if not found
 * 
 * Searches through the iteration range for an option with the given label.
 */
TOption* TOptionIterator::FindOption(ULong label)
{
	// Address: 0014af58
	TOption* opt = FirstOption();
	
	while (More()) {
		if (opt->fLabel == label) {
			return opt;
		}
		opt = NextOption();
	}
	
	return NULL;
}

/**
 * Get first option
 * 
 * @return Pointer to first TOption in range, or NULL if empty
 */
TOption* TOptionIterator::FirstOption()
{
	// Address: 0014afdc
	FirstIndex();
	return fCurrentOption;
}

/**
 * Get next option
 * 
 * @return Pointer to next TOption, or NULL if at end
 */
TOption* TOptionIterator::NextOption()
{
	// Address: 0014aff8
	NextIndex();
	return fCurrentOption;
}

/**
 * Append this iterator to a list
 * 
 * @param toList The list head to append to (can be NULL)
 * @return The updated list head
 * 
 * Implements circular doubly-linked list insertion.
 */
TOptionIterator* TOptionIterator::AppendToList(TOptionIterator* toList)
{
	// Address: 0014aa8c
	if (toList == NULL) {
		return this;
	}
	
	// Insert before the list head (at end of circular list)
	TOptionIterator* prev = toList->fPreviousLink;
	
	this->fNextLink = toList;
	this->fPreviousLink = prev;
	
	prev->fNextLink = this;
	toList->fPreviousLink = this;
	
	return this;
}

/**
 * Remove this iterator from its list
 * 
 * @return The next iterator in the list, or NULL if this was the only one
 * 
 * Removes this iterator from the circular doubly-linked list.
 */
TOptionIterator* TOptionIterator::RemoveFromList()
{
	// Address: 0014aab0
	TOptionIterator* next = fNextLink;
	TOptionIterator* prev = fPreviousLink;
	
	// Return NULL if we're the only one in the list
	TOptionIterator* result = (next == this) ? NULL : next;
	
	// Unlink from list
	prev->fNextLink = next;
	next->fPreviousLink = prev;
	
	// Point to self
	fPreviousLink = this;
	fNextLink = this;
	
	return result;
}
