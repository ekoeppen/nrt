#include "CListIterator.h"
#include "CList.h"

/**
 * Symbol: CListIterator::__ct(void)
 * Address: 00113100
 */
CListIterator::CListIterator() : CArrayIterator() {
}

/**
 * Symbol: CListIterator::__ct(CDynamicArray *)
 * Address: 0011311c
 */
CListIterator::CListIterator(CDynamicArray* itsList) : CArrayIterator(itsList) {
}

/**
 * Symbol: CListIterator::__ct(CDynamicArray *, unsigned char)
 * Address: 0011313c
 */
CListIterator::CListIterator(CDynamicArray* itsList, Boolean itsForward) : CArrayIterator(itsList, itsForward) {
}

/**
 * Symbol: CListIterator::__ct(CDynamicArray *, long, long, unsigned char)
 * Address: 0011315c
 */
CListIterator::CListIterator(CDynamicArray* itsList, ArrayIndex itsLowBound, ArrayIndex itsHighBound, Boolean itsForward) 
    : CArrayIterator(itsList, itsLowBound, itsHighBound, itsForward) {
}

/**
 * Symbol: CListIterator::CurrentItem(void)
 * Address: 00113180
 */
void* CListIterator::CurrentItem() {
    if (fDynamicArray && fCurrentIndex != -1) {
        return ((CList*)fDynamicArray)->At(fCurrentIndex);
    }
    return NULL;
}

/**
 * Symbol: CListIterator::FirstItem(void)
 * Address: 001131b4
 */
void* CListIterator::FirstItem() {
    this->Reset();
    return this->NextItem();
}

/**
 * Symbol: CListIterator::NextItem(void)
 * Address: 001131e0
 */
void* CListIterator::NextItem() {
    ArrayIndex index = this->NextIndex();
    if (fDynamicArray && index != -1) {
        return ((CList*)fDynamicArray)->At(index);
    }
    return NULL;
}
