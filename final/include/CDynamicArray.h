#ifndef __DYNAMICARRAY_H
#define __DYNAMICARRAY_H

#include "Newton.h"

class CArrayIterator;

class CDynamicArray : public SingleObject
{
public:
    enum Parameters {
        kDefaultElementSize = 4,
        kDefaultChunkSize = 4
    };

    CDynamicArray();
    CDynamicArray(Size elementSize, ArrayIndex chunkSize);
    ~CDynamicArray();

    ArrayIndex GetArraySize(void);
    NewtonErr  SetArraySize(ArrayIndex theSize);
    NewtonErr  SetElementCount(ArrayIndex theSize);

    void*      ElementPtrAt(ArrayIndex index);
    void*      SafeElementPtrAt(ArrayIndex index);
    NewtonErr  GetElementsAt(ArrayIndex index, void* elemPtr, ArrayIndex count);
    NewtonErr  InsertElementsBefore(ArrayIndex startHere, void* elemPtr, ArrayIndex count);
    NewtonErr  ReplaceElementsAt(ArrayIndex index, void* elemPtr, ArrayIndex count);
    NewtonErr  RemoveElementsAt(ArrayIndex index, ArrayIndex count);
    NewtonErr  RemoveAll(void);

    Boolean    IsEmpty(void);
    NewtonErr  Merge(CDynamicArray* aDynamicArray);

    void       NukeIterator(void);

protected:
    Size       ComputeByteCount(ArrayIndex count);

    ArrayIndex fSize;           // logical size of array (offset 0)

private:
    friend class CArrayIterator;

    Size            fElementSize;   // size of a single element (offset 4)
    ArrayIndex      fChunkSize;     // grow/shrink array by this many elements (offset 8)
    ArrayIndex      fAllocatedSize; // physical size of array (offset 12)
    void*           fArrayBlock;    // element storage (offset 16)
    CArrayIterator* fIterator;      // linked list of iterators active on this array (offset 20)
};

inline ArrayIndex CDynamicArray::GetArraySize() { return fSize; }
inline Boolean CDynamicArray::IsEmpty() { return (fSize == 0); }
inline void* CDynamicArray::ElementPtrAt(ArrayIndex index) { return (void*)((long)fArrayBlock + (fElementSize * index)); }
inline Size CDynamicArray::ComputeByteCount(ArrayIndex count) { return (fElementSize * count); }
inline NewtonErr CDynamicArray::RemoveAll() { return RemoveElementsAt(0, fSize); }
inline void CDynamicArray::NukeIterator() { fIterator = NULL; }

#endif
