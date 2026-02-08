#include "DynamicArray.h"
#include "ArrayIterator.h"
#include <string.h>

/**
 * Symbol: CDynamicArray::__ct(void)
 * Address: 000a1668
 */
CDynamicArray::CDynamicArray() {
    fSize = 0;
    fElementSize = 4;
    fChunkSize = 4;
    fAllocatedSize = 0;
    fArrayBlock = NULL;
    fIterator = NULL;
}

/**
 * Symbol: CDynamicArray::__ct(long, long)
 * Address: 000a16ac
 */
CDynamicArray::CDynamicArray(Size elementSize, ArrayIndex chunkSize) {
    fSize = 0;
    fElementSize = elementSize;
    fChunkSize = chunkSize;
    fAllocatedSize = 0;
    fArrayBlock = NULL;
    fIterator = NULL;
}

/**
 * Symbol: CDynamicArray::__dt(void)
 * Address: 000a171c
 */
CDynamicArray::~CDynamicArray() {
    while (fIterator) {
        fIterator->DeleteArray();
    }
    if (fArrayBlock) {
        // DisposPtr(fArrayBlock);
    }
}

/**
 * Symbol: CDynamicArray::SetElementCount(long)
 * Address: 000a16f8
 */
NewtonErr CDynamicArray::SetElementCount(ArrayIndex theSize) {
    NewtonErr err = SetArraySize(theSize);
    if (err == noErr) {
        fSize = theSize;
    }
    return err;
}

/**
 * Symbol: CDynamicArray::SafeElementPtrAt(long)
 * Address: 000a174c
 */
void* CDynamicArray::SafeElementPtrAt(ArrayIndex index) {
    if (index >= 0 && index < fSize) {
        return this->ElementPtrAt(index);
    }
    return NULL;
}

/**
 * Symbol: CDynamicArray::GetElementsAt(long, void *, long)
 * Address: 000a17b8
 */
NewtonErr CDynamicArray::GetElementsAt(ArrayIndex index, void* elemPtr, ArrayIndex count) {
    if (index < 0 || index + count > fSize) return -1;
    void* src = this->ElementPtrAt(index);
    memcpy(elemPtr, src, this->ComputeByteCount(count));
    return noErr;
}

/**
 * Symbol: CDynamicArray::ReplaceElementsAt(long, void *, long)
 * Address: 000a18f4
 */
NewtonErr CDynamicArray::ReplaceElementsAt(ArrayIndex index, void* elemPtr, ArrayIndex count) {
    if (index < 0 || index + count > fSize) return -1;
    void* dest = this->ElementPtrAt(index);
    memcpy(dest, elemPtr, this->ComputeByteCount(count));
    return noErr;
}

/**
 * Symbol: CDynamicArray::InsertElementsBefore(long, void *, long)
 * Address: 000a1828
 */
NewtonErr CDynamicArray::InsertElementsBefore(ArrayIndex startHere, void* elemPtr, ArrayIndex count) {
    if (count <= 0) return noErr;
    NewtonErr err = SetArraySize(fSize + count);
    if (err != noErr) return err;

    void* dest = this->ElementPtrAt(startHere + count);
    void* src = this->ElementPtrAt(startHere);
    Size moveBytes = this->ComputeByteCount(fSize - startHere);
    if (moveBytes > 0) {
        memmove(dest, src, moveBytes);
    }

    if (elemPtr) {
        memcpy(src, elemPtr, this->ComputeByteCount(count));
    } else {
        memset(src, 0, this->ComputeByteCount(count));
    }

    fSize += count;
    
    // Notify iterators
    CArrayIterator* iter = fIterator;
    while (iter) {
        iter->InsertElementsBefore(startHere, count);
        iter = iter->fNextLink;
    }

    return noErr;
}

/**
 * Symbol: CDynamicArray::RemoveElementsAt(long, long)
 * Address: 000a177c
 */
NewtonErr CDynamicArray::RemoveElementsAt(ArrayIndex index, ArrayIndex count) {
    if (index < 0 || index + count > fSize) return -1;
    if (count <= 0) return noErr;

    void* dest = this->ElementPtrAt(index);
    void* src = this->ElementPtrAt(index + count);
    Size moveBytes = this->ComputeByteCount(fSize - (index + count));
    if (moveBytes > 0) {
        memmove(dest, src, moveBytes);
    }

    fSize -= count;
    SetArraySize(fSize);

    // Notify iterators
    CArrayIterator* iter = fIterator;
    while (iter) {
        iter->RemoveElementsAt(index, count);
        iter = iter->fNextLink;
    }

    return noErr;
}

/**
 * Symbol: CDynamicArray::Merge(CDynamicArray *)
 * Address: 000a196c
 */
NewtonErr CDynamicArray::Merge(CDynamicArray* aDynamicArray) {
    if (!aDynamicArray) return noErr;
    return this->InsertElementsBefore(fSize, aDynamicArray->fArrayBlock, aDynamicArray->fSize);
}

/**
 * Symbol: CDynamicArray::SetArraySize(long)
 * Address: 000a19b0
 */
NewtonErr CDynamicArray::SetArraySize(ArrayIndex theSize) {
    if (theSize == 0) {
        if (fArrayBlock) {
            // DisposPtr(fArrayBlock);
            fArrayBlock = NULL;
        }
        fAllocatedSize = 0;
        return noErr;
    }

    if (theSize > fAllocatedSize || (theSize < fAllocatedSize - fChunkSize)) {
        ArrayIndex newAlloc = ((theSize + fChunkSize - 1) / fChunkSize) * fChunkSize;
        if (newAlloc != fAllocatedSize) {
            Size newByteSize = this->ComputeByteCount(newAlloc);
            if (fArrayBlock == NULL) {
                fArrayBlock = malloc(newByteSize); // Use malloc as proxy for NewPtr
            } else {
                fArrayBlock = realloc(fArrayBlock, newByteSize); // Proxy for ReallocPtr
            }
            if (!fArrayBlock) return -1; // MemError
            fAllocatedSize = newAlloc;
        }
    }
    return noErr;
}
