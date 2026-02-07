#include "ArrayIterator.h"
#include "DynamicArray.h"

/**
 * Symbol: CArrayIterator::__ct(void)
 * Address: 000386a8
 */
CArrayIterator::CArrayIterator() {
    this->Init();
}

/**
 * Symbol: CArrayIterator::__ct(CDynamicArray *)
 * Address: 000386e4
 */
CArrayIterator::CArrayIterator(CDynamicArray* itsDynamicArray) {
    this->Init(itsDynamicArray, 0, itsDynamicArray->GetArraySize() - 1, kIterateForward);
}

/**
 * Symbol: CArrayIterator::__ct(CDynamicArray *, unsigned char)
 * Address: 000386cc
 */
CArrayIterator::CArrayIterator(CDynamicArray* itsDynamicArray, Boolean itsForward) {
    this->Init(itsDynamicArray, 0, itsDynamicArray->GetArraySize() - 1, itsForward);
}

/**
 * Symbol: CArrayIterator::__ct(CDynamicArray *, long, long, unsigned char)
 * Address: 000386bc
 */
CArrayIterator::CArrayIterator(CDynamicArray* itsDynamicArray, ArrayIndex itsLowBound, ArrayIndex itsHighBound, Boolean itsForward) {
    this->Init(itsDynamicArray, itsLowBound, itsHighBound, itsForward);
}

/**
 * Symbol: CArrayIterator::__dt(void)
 * Address: 000386f8
 */
CArrayIterator::~CArrayIterator() {
    this->RemoveFromList();
}

/**
 * Symbol: CArrayIterator::Init(void)
 * Address: 00038734
 */
void CArrayIterator::Init() {
    fDynamicArray = NULL;
    fCurrentIndex = -1;
    fLowBound = -1;
    fHighBound = -1;
    fIterateForward = kIterateForward;
    fPreviousLink = NULL;
    fNextLink = NULL;
}

/**
 * Symbol: CArrayIterator::Init(CDynamicArray *, long, long, unsigned char)
 * Address: 00038770
 */
void CArrayIterator::Init(CDynamicArray* itsDynamicArray, ArrayIndex itsLowBound, ArrayIndex itsHighBound, Boolean itsForward) {
    fDynamicArray = itsDynamicArray;
    fPreviousLink = NULL;
    fNextLink = NULL;
    if (fDynamicArray) {
        this->AppendToList(fDynamicArray->fIterator);
        fDynamicArray->fIterator = this;
    }
    this->InitBounds(itsLowBound, itsHighBound, itsForward);
}

/**
 * Symbol: CArrayIterator::InitBounds(long, long, unsigned char)
 * Address: 000383d8
 */
void CArrayIterator::InitBounds(ArrayIndex itsLowBound, ArrayIndex itsHighBound, Boolean itsForward) {
    ArrayIndex count = fDynamicArray ? fDynamicArray->GetArraySize() : 0;
    if (count > 0) {
        if (itsHighBound < 0) itsHighBound = 0;
        if (itsHighBound >= count) itsHighBound = count - 1;
        fHighBound = itsHighBound;
        
        if (itsLowBound < 0) itsLowBound = 0;
        if (itsLowBound > fHighBound) itsLowBound = fHighBound;
        fLowBound = itsLowBound;
    } else {
        fLowBound = -1;
        fHighBound = -1;
    }
    fIterateForward = itsForward;
    this->Reset();
}

/**
 * Symbol: CArrayIterator::ResetBounds(unsigned char)
 * Address: 00038444
 */
void CArrayIterator::ResetBounds(Boolean goForward) {
    if (fDynamicArray) {
        this->InitBounds(0, fDynamicArray->GetArraySize() - 1, goForward);
    }
}

/**
 * Symbol: CArrayIterator::Reset(void)
 * Address: 00038498
 */
void CArrayIterator::Reset() {
    if (fIterateForward) {
        fCurrentIndex = fLowBound;
    } else {
        fCurrentIndex = fHighBound;
    }
}

/**
 * Symbol: CArrayIterator::More(void)
 * Address: 00038478
 */
Boolean CArrayIterator::More() {
    return fCurrentIndex != -1;
}

/**
 * Symbol: CArrayIterator::Advance(void)
 * Address: 000384e0
 */
void CArrayIterator::Advance() {
    if (fCurrentIndex == -1) return;
    
    if (fIterateForward) {
        if (fCurrentIndex < fHighBound) {
            fCurrentIndex++;
        } else {
            fCurrentIndex = -1;
        }
    } else {
        if (fCurrentIndex > fLowBound) {
            fCurrentIndex--;
        } else {
            fCurrentIndex = -1;
        }
    }
}

/**
 * Symbol: CArrayIterator::NextIndex(void)
 * Address: 00038688
 */
ArrayIndex CArrayIterator::NextIndex() {
    ArrayIndex res = fCurrentIndex;
    this->Advance();
    return res;
}

/**
 * Symbol: CArrayIterator::CurrentIndex(void)
 * Address: 0003861c
 */
ArrayIndex CArrayIterator::CurrentIndex() {
    return fCurrentIndex;
}

/**
 * Symbol: CArrayIterator::FirstIndex(void)
 * Address: 00038624
 */
ArrayIndex CArrayIterator::FirstIndex() {
    this->Reset();
    return this->NextIndex();
}

/**
 * Symbol: CArrayIterator::SwitchArray(CDynamicArray *, unsigned char)
 * Address: 00038354
 */
void CArrayIterator::SwitchArray(CDynamicArray* newArray, Boolean itsForward) {
    if (fDynamicArray) {
        this->RemoveFromList();
    }
    fDynamicArray = newArray;
    if (fDynamicArray) {
        this->AppendToList(fDynamicArray->fIterator);
        fDynamicArray->fIterator = this;
        this->InitBounds(0, fDynamicArray->GetArraySize() - 1, itsForward);
    } else {
        this->Init();
    }
}

/**
 * Symbol: CArrayIterator::DeleteArray(void)
 * Address: 000384b0
 */
void CArrayIterator::DeleteArray() {
    fDynamicArray = NULL;
    fCurrentIndex = -1;
    fLowBound = -1;
    fHighBound = -1;
}

/**
 * Symbol: CArrayIterator::RemoveElementsAt(long, long)
 * Address: 00038530
 */
void CArrayIterator::RemoveElementsAt(ArrayIndex theIndex, ArrayIndex theCount) {
    if (fCurrentIndex == -1) return;
    
    if (fCurrentIndex >= theIndex) {
        if (fCurrentIndex < theIndex + theCount) {
            fCurrentIndex = -1; // Current item was deleted
        } else {
            fCurrentIndex -= theCount;
        }
    }
    
    if (fLowBound >= theIndex) {
        if (fLowBound < theIndex + theCount) fLowBound = theIndex;
        else fLowBound -= theCount;
    }
    
    if (fHighBound >= theIndex) {
        if (fHighBound < theIndex + theCount) fHighBound = theIndex - 1;
        else fHighBound -= theCount;
    }
}

/**
 * Symbol: CArrayIterator::InsertElementsBefore(long, long)
 * Address: 000385cc
 */
void CArrayIterator::InsertElementsBefore(ArrayIndex theIndex, ArrayIndex theCount) {
    if (fCurrentIndex >= theIndex) {
        fCurrentIndex += theCount;
    }
    if (fLowBound >= theIndex) {
        fLowBound += theCount;
    }
    if (fHighBound >= theIndex) {
        fHighBound += theCount;
    }
}

/**
 * Symbol: CArrayIterator::AppendToList(CArrayIterator *)
 * Address: 000383b4
 */
CArrayIterator* CArrayIterator::AppendToList(CArrayIterator* toList) {
    fNextLink = toList;
    if (toList) {
        fPreviousLink = toList->fPreviousLink;
        if (toList->fPreviousLink) toList->fPreviousLink->fNextLink = this;
        toList->fPreviousLink = this;
    }
    return this;
}

/**
 * Symbol: CArrayIterator::RemoveFromList(void)
 * Address: 00038634
 */
CArrayIterator* CArrayIterator::RemoveFromList() {
    if (fPreviousLink) fPreviousLink->fNextLink = fNextLink;
    if (fNextLink) fNextLink->fPreviousLink = fPreviousLink;
    if (fDynamicArray && fDynamicArray->fIterator == this) {
        fDynamicArray->fIterator = fNextLink;
    }
    fPreviousLink = NULL;
    fNextLink = NULL;
    return this;
}
