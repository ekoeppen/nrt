/*
	File:		TOptionArray.cpp

	Contains:	Implementation of TOptionArray class for CommAPI

	Copyright:	© 1992-1996 by Apple Computer, Inc., all rights reserved.

	Reverse engineered from Newton OS 2.x ROM
*/

#include "CommAPI/OptionArray.h"
#include "NewtErrors.h"

/**
 * Default constructor
 * 
 * Creates an empty TOptionArray with no allocated storage.
 */
TOptionArray::TOptionArray()
{
	// Address: 0014b06c
	fCount = 0;
	fArrayBlock = NULL;
	fIterator = NULL;
	
	// Initialize shared memory object
	fSharedMemoryObject.CopyObject(0);
	
	fIsShared = false;
	fShadow = false;
}

/**
 * Destructor
 * 
 * Cleans up the option array by deleting iterators and freeing memory.
 */
TOptionArray::~TOptionArray()
{
	// Address: 0014b0c4
	
	// Delete any active iterators
	if (fIterator != NULL) {
		fIterator->DeleteArray();
	}
	
	// Free the array block
	if (fArrayBlock != NULL) {
		DisposPtr(fArrayBlock);
	}
	
	// Destroy shared memory object
	fSharedMemoryObject.~TUObject();
}

/**
 * Initialize with zero size
 * 
 * @return Memory error code, or noErr
 */
NewtonErr TOptionArray::Init()
{
	// Address: 0014b110
	fArrayBlock = NewPtr(0);
	return MemError();
}

/**
 * Initialize with specified size
 * 
 * @param initialSize Initial size in bytes for the array block
 * @return Memory error code, or noErr
 */
NewtonErr TOptionArray::Init(ULong initialSize)
{
	// Address: 0014b134
	fArrayBlock = NewPtr(initialSize);
	return MemError();
}

/**
 * Initialize from shared memory
 * 
 * @param sharedId The shared memory object ID
 * @param optionCount Number of options in the shared memory
 * @return Error code, or noErr
 * 
 * Copies option data from a shared memory object into this array.
 */
NewtonErr TOptionArray::Init(TObjectId sharedId, ULong optionCount)
{
	// Address: 0014b158
	NewtonErr err = CopyFromShared(sharedId, optionCount);
	
	if (err == noErr) {
		fSharedMemoryObject.CopyObject(sharedId);
		fShadow = true;
	}
	
	return err;
}

/**
 * Initialize from a sub-array option
 * 
 * @param array A TSubArrayOption containing nested option data
 * @return Error code, or noErr
 * 
 * Extracts option data from a TSubArrayOption and creates a new array.
 */
NewtonErr TOptionArray::Init(TSubArrayOption* array)
{
	// Address: 0014b194
	NewtonErr err = noErr;
	
	// Get count from the sub-array (at offset 12)
	fCount = *(ArrayIndex*)((char*)array + 12);
	
	// Size is length - 4
	Size dataSize = array->fLength - 4;
	
	// Allocate new block
	fArrayBlock = NewPtr(dataSize);
	
	if (fArrayBlock != NULL) {
		// Copy data from sub-array (starts at offset 16)
		void* srcData = (void*)((char*)array + 16);
		BlockMove(srcData, fArrayBlock, dataSize);
		err = noErr;
	} else {
		err = MemError();
	}
	
	return err;
}

/**
 * Reset all options in the array
 * 
 * Calls Reset() on each option and unshares if necessary.
 */
void TOptionArray::Reset()
{
	// Address: 0014b1ec
	
	// Iterate through all options and reset them
	TOptionIterator iter(this);
	TOption* opt = iter.FirstOption();
	
	while (iter.More()) {
		opt->Reset();
		opt = iter.NextOption();
	}
	
	// If shared, unshare
	if (fIsShared) {
		UnShare();
	}
}

/**
 * Get option at specified index
 * 
 * @param index The index of the option to retrieve
 * @return Pointer to TOption at that index, or NULL if invalid
 * 
 * Walks through the array to find the option at the given index.
 */
TOption* TOptionArray::OptionAt(ArrayIndex index)
{
	// Address: 0014b2bc
	TOption* opt = (TOption*)fArrayBlock;
	
	if (index < 0) {
		return NULL;
	}
	
	// Walk through options to find the one at index
	for (ArrayIndex i = 0; i < index; i++) {
		Size optionSize = opt->fLength;
		Size alignedSize = (optionSize + 15) & ~3;  // 4-byte align
		opt = (TOption*)((char*)opt + alignedSize);
	}
	
	return opt;
}

/**
 * Copy option data at index to destination
 * 
 * @param index The index of the option to copy
 * @param copy Destination TOption to copy into
 * @return Error code (noErr, kOSErrMessageTooBig, kOSErrMessageTooSmall, or opNotFound)
 */
NewtonErr TOptionArray::CopyOptionAt(ArrayIndex index, TOption* copy)
{
	// Address: 0014b268
	TOption* opt = OptionAt(index);
	
	if (opt == NULL) {
		return opNotFound;
	}
	
	NewtonErr err = noErr;
	Size srcLen = opt->fLength;
	Size dstLen = copy->fLength;
	Size copySize;
	
	if (srcLen > dstLen) {
		err = opNotFound;  // -6, but semantically means "too big"
	} else {
		// Update destination length if source is smaller
		copy->fLength = srcLen;
	}
	
	// Copy the option data (header + data)
	copySize = copy->fLength + 12;  // 12 = sizeof(fLabel, fLength, fFlags)
	BlockMove(opt, copy, copySize);
	
	return err;
}

/**
 * Remove option at specified index
 * 
 * @param theIndex The index of the option to remove
 * 
 * Removes an option from the array and compacts the remaining options.
 */
void TOptionArray::RemoveOptionAt(ArrayIndex theIndex)
{
	// Address: 0014b2ec
	
	// Unshare if necessary
	if (fIsShared) {
		UnShare();
	}
	
	if (fCount == 0) {
		return;
	}
	
	// Find the option to remove
	TOption* opt = (TOption*)fArrayBlock;
	
	for (ArrayIndex i = 0; i < theIndex; i++) {
		Size optionSize = opt->fLength;
		Size alignedSize = (optionSize + 15) & ~3;
		opt = (TOption*)((char*)opt + alignedSize);
	}
	
	// Calculate aligned size of option being removed
	Size optionSize = opt->fLength;
	Size alignedSize = (optionSize + 15) & ~3;
	
	// Calculate position of next option
	TOption* nextOpt = (TOption*)((char*)opt + alignedSize);
	
	// Get total size of array block
	Size blockSize = GetPtrSize(fArrayBlock);
	
	// Calculate end of array
	void* endOfArray = (void*)((char*)fArrayBlock + blockSize);
	
	// If there are options after this one, move them down
	if (nextOpt < endOfArray) {
		Size moveSize = (char*)endOfArray - (char*)nextOpt;
		BlockMove(nextOpt, opt, moveSize);
	}
	
	// Resize the block
	Size newSize = blockSize - alignedSize;
	ReallocPtr(fArrayBlock, newSize);
	NewtonErr err = MemError();
	
	if (err == noErr) {
		fArrayBlock = (Ptr)fArrayBlock;  // Update pointer after realloc
		fCount--;
		
		// Notify iterators
		if (fIterator != NULL) {
			fIterator->RemoveOptionAt(theIndex);
		}
	}
}

/**
 * Insert option at specified index
 * 
 * @param index The index where the option should be inserted
 * @param opt The option to insert
 * @return Error code, or noErr
 * 
 * Inserts a copy of the given option into the array at the specified position.
 */
NewtonErr TOptionArray::InsertOptionAt(ArrayIndex index, TOption* opt)
{
	// Address: 0014b3d0
	
	// Unshare if necessary
	if (fIsShared) {
		UnShare();
	}
	
	// Clamp index to valid range
	if (index > fCount) {
		index = fCount;
	}
	
	// Calculate aligned size of new option
	Size optionSize = opt->fLength;
	Size alignedSize = (optionSize + 15) & ~3;
	
	// Get current block size
	Size blockSize = GetPtrSize(fArrayBlock);
	
	// Resize block to accommodate new option
	Size newSize = blockSize + alignedSize;
	ReallocPtr(fArrayBlock, newSize);
	
	NewtonErr err = MemError();
	if (err != noErr) {
		return err;
	}
	
	// Find insertion point
	TOption* insertPos = (TOption*)fArrayBlock;
	
	if (index < fCount) {
		// Find the option at index
		for (ArrayIndex i = 0; i < index; i++) {
			Size sz = insertPos->fLength;
			Size aligned = (sz + 15) & ~3;
			insertPos = (TOption*)((char*)insertPos + aligned);
		}
		
		// Move existing options up to make room
		void* dest = (void*)((char*)insertPos + alignedSize);
		Size moveSize = (char*)fArrayBlock + blockSize - (char*)insertPos;
		BlockMove(insertPos, dest, moveSize);
	} else {
		// Append to end
		insertPos = (TOption*)((char*)fArrayBlock + blockSize);
	}
	
	// Copy the new option in
	Size copySize = alignedSize;
	BlockMove(opt, insertPos, copySize);
	
	fCount++;
	
	// Notify iterators
	if (fIterator != NULL) {
		fIterator->InsertOptionAt(index);
	}
	
	return noErr;
}

/**
 * Merge another option array into this one
 * 
 * @param optionArray The array to merge
 * @return Error code, or noErr
 * 
 * Appends all options from the source array to this array.
 */
NewtonErr TOptionArray::Merge(TOptionArray* optionArray)
{
	// Address: 0014b4cc
	
	// Unshare if necessary
	if (fIsShared) {
		UnShare();
	}
	
	// Get sizes of both arrays
	Size thisSize = GetPtrSize(fArrayBlock);
	Size otherSize = GetPtrSize(optionArray->fArrayBlock);
	
	// Resize this array to accommodate other array
	Size newSize = thisSize + otherSize;
	ReallocPtr(fArrayBlock, newSize);
	
	NewtonErr err = MemError();
	if (err != noErr) {
		return err;
	}
	
	// Copy data from other array
	void* dest = (void*)((char*)fArrayBlock + thisSize);
	BlockMove(optionArray->fArrayBlock, dest, otherSize);
	
	// Update count
	fCount += optionArray->fCount;
	
	return noErr;
}

/**
 * Remove all options from the array
 * 
 * @return Error code, or noErr
 * 
 * Removes all options and shrinks the array block to zero size.
 */
NewtonErr TOptionArray::RemoveAllOptions()
{
	// Address: 0014b558
	NewtonErr err = noErr;
	
	// Unshare if necessary
	if (fIsShared) {
		err = UnShare();
		if (err != noErr) {
			return err;
		}
	}
	
	// Resize to zero
	ReallocPtr(fArrayBlock, 0);
	err = MemError();
	
	if (err == noErr) {
		fCount = 0;
	}
	
	return err;
}

/**
 * Copy from shared memory
 * 
 * @param sharedId The shared memory object ID
 * @param count Number of options (stored in fCount)
 * @return Error code, or noErr
 * 
 * Copies option array data from a shared memory object.
 */
NewtonErr TOptionArray::CopyFromShared(TObjectId sharedId, ULong count)
{
	// Address: 0014b5bc
	fCount = count;
	
	TUSharedMem sharedMem;
	sharedMem.fId = sharedId;
	sharedMem.fSize = 0;
	
	ULong size;
	void* addr;
	
	// Get size of shared memory
	NewtonErr err = sharedMem.GetSize(&size, &addr);
	
	if (err != noErr) {
		return err;
	}
	
	// Resize our array block
	ReallocPtr(fArrayBlock, size);
	
	if (fArrayBlock == NULL) {
		err = MemError();
		return err;
	}
	
	// Copy from shared memory
	err = sharedMem.CopyFromShared(fArrayBlock, size, 0, NULL);
	
	return err;
}

/**
 * Copy to shared memory
 * 
 * @param sharedId The shared memory object ID
 * @return Error code, or noErr
 * 
 * Copies this array's data into a shared memory object.
 */
NewtonErr TOptionArray::CopyToShared(TObjectId sharedId)
{
	// Address: 0014b658
	TUSharedMem sharedMem;
	sharedMem.fId = sharedId;
	
	Size size = GetPtrSize(fArrayBlock);
	
	NewtonErr err = sharedMem.CopyToShared(fArrayBlock, size, 0, NULL);
	
	return err;
}

/**
 * Make this array shared
 * 
 * @param permissions Permissions for the shared memory (default: kSMemReadOnly)
 * @return Error code, or noErr
 * 
 * Creates a shared memory object for this array if not already shared.
 */
NewtonErr TOptionArray::MakeShared(ULong permissions)
{
	// Address: 0014b6b4
	NewtonErr err = noErr;
	
	if (fIsShared) {
		return noErr;
	}
	
	// Initialize shared memory object
	err = fSharedMemoryObject.Init();
	
	if (err == noErr) {
		Size size = GetPtrSize(fArrayBlock);
		err = fSharedMemoryObject.SetBuffer(fArrayBlock, size, permissions);
	}
	
	if (err == noErr) {
		fIsShared = true;
	}
	
	return err;
}

/**
 * Insert variable-length option at index
 * 
 * @param index Index where option should be inserted
 * @param opt The option header
 * @param varData Variable data to append
 * @param varLen Length of variable data
 * @return Error code, or noErr
 * 
 * Inserts an option with additional variable-length data appended.
 */
NewtonErr TOptionArray::InsertVarOptionAt(ArrayIndex index, TOption* opt, 
                                          void* varData, ULong varLen)
{
	// Address: 0014b718
	
	// Unshare if necessary
	if (fIsShared) {
		UnShare();
	}
	
	// Clamp index to valid range
	if (index > fCount) {
		index = fCount;
	}
	
	// Get current block size
	Size blockSize = GetPtrSize(fArrayBlock);
	
	// Calculate aligned size of new option (header + varData)
	Size headerSize = opt->fLength;
	Size totalSize = headerSize + 12;  // +12 for header fields
	Size alignedSize = (totalSize + 15) & ~3;
	
	// Resize block
	Size newSize = blockSize + alignedSize;
	ReallocPtr(fArrayBlock, newSize);
	
	NewtonErr err = MemError();
	if (err != noErr) {
		return err;
	}
	
	// Find insertion point
	TOption* insertPos = (TOption*)fArrayBlock;
	
	if (index < fCount) {
		// Find the option at index
		for (ArrayIndex i = 0; i < index; i++) {
			Size sz = insertPos->fLength;
			Size aligned = (sz + 15) & ~3;
			insertPos = (TOption*)((char*)insertPos + aligned);
		}
		
		// Move existing options up
		void* dest = (void*)((char*)insertPos + alignedSize);
		Size moveSize = (char*)fArrayBlock + blockSize - (char*)insertPos;
		BlockMove(insertPos, dest, moveSize);
	} else {
		// Append to end
		insertPos = (TOption*)((char*)fArrayBlock + blockSize);
	}
	
	// Calculate actual data size in option
	Size optDataSize = headerSize - varLen;
	
	// Copy option header and fixed data
	Size copyHeaderSize = optDataSize + 12;
	BlockMove(opt, insertPos, copyHeaderSize);
	
	// Copy variable data
	void* varDest = (void*)((char*)insertPos + optDataSize + 12);
	BlockMove(varData, varDest, varLen);
	
	fCount++;
	
	// Notify iterators
	if (fIterator != NULL) {
		fIterator->InsertOptionAt(index);
	}
	
	return noErr;
}

/**
 * Insert sub-array at index
 * 
 * @param index Index where sub-array should be inserted
 * @param subArray The TOptionArray to insert as a sub-array
 * @return Error code, or noErr
 * 
 * Creates a TSubArrayOption and inserts it with the sub-array's data.
 */
NewtonErr TOptionArray::InsertSubArrayAt(ArrayIndex index, TOptionArray* subArray)
{
	// Address: 0014b85c
	
	// Unshare if necessary
	if (fIsShared) {
		UnShare();
	}
	
	// Get size of sub-array data
	Size subArraySize = GetPtrSize(subArray->fArrayBlock);
	
	// Create sub-array option
	TSubArrayOption subOpt(subArraySize, subArray->fCount);
	
	// Insert it with the sub-array data
	return InsertVarOptionAt(index, &subOpt, subArray->fArrayBlock, subArraySize);
}

/**
 * Copy back to shared memory if this is a shadow
 * 
 * @return Error code, or noErr
 * 
 * If this array was created from shared memory, copy changes back.
 */
NewtonErr TOptionArray::ShadowCopyBack()
{
	// Address: 0014b8c4
	NewtonErr err = noErr;
	
	if (fShadow) {
		TObjectId sharedId = (TObjectId)fSharedMemoryObject;
		err = CopyToShared(sharedId);
	}
	
	return err;
}

/**
 * Unshare the array
 * 
 * @return Error code, or noErr
 * 
 * Destroys the shared memory object and marks array as not shared.
 */
NewtonErr TOptionArray::UnShare()
{
	// Address: 0014b8f4
	NewtonErr err = noErr;
	
	if (fIsShared) {
		fSharedMemoryObject.DestroyObject();
		fIsShared = false;
	}
	
	return err;
}
