#ifndef __ARRAYITERATOR_H
#define __ARRAYITERATOR_H

#include "Newton.h"

enum IterateDirection { kIterateBackward = 0, kIterateForward = 1 };

class CDynamicArray;

class CArrayIterator : public SingleObject
{
public:
    CArrayIterator();
    CArrayIterator(CDynamicArray* itsDynamicArray);
    CArrayIterator(CDynamicArray* itsDynamicArray, Boolean itsForward);
    CArrayIterator(CDynamicArray* itsDynamicArray, ArrayIndex itsLowBound, ArrayIndex itsHighBound, Boolean itsForward);
    ~CArrayIterator();

    void Init(void);
    void Init(CDynamicArray* itsDynamicArray, ArrayIndex itsLowBound, ArrayIndex itsHighBound, Boolean itsForward);
    void InitBounds(ArrayIndex itsLowBound, ArrayIndex itsHighBound, Boolean itsForward);
    void Reset(void);
    void ResetBounds(Boolean goForward = true);

    void SwitchArray(CDynamicArray* newArray, Boolean itsForward = kIterateForward);

    ArrayIndex FirstIndex(void);
    ArrayIndex NextIndex(void);
    ArrayIndex CurrentIndex(void);

    void RemoveElementsAt(ArrayIndex theIndex, ArrayIndex theCount);
    void InsertElementsBefore(ArrayIndex theIndex, ArrayIndex theCount);
    void DeleteArray(void);

    Boolean More(void);

protected:
    void Advance(void);

    CDynamicArray* fDynamicArray;   // offset 0
    ArrayIndex     fCurrentIndex;   // offset 4
    ArrayIndex     fLowBound;       // offset 8
    ArrayIndex     fHighBound;      // offset 12
    Boolean        fIterateForward; // offset 16

private:
    friend class CDynamicArray;
    CArrayIterator* AppendToList(CArrayIterator* toList);
    CArrayIterator* RemoveFromList(void);

    CArrayIterator* fPreviousLink;  // offset 20
    CArrayIterator* fNextLink;      // offset 24
};

#endif
