#ifndef __LISTITERATOR_H
#define __LISTITERATOR_H

#include "CArrayIterator.h"

class CListIterator : public CArrayIterator
{
public:
    CListIterator();
    CListIterator(CDynamicArray* itsList);
    CListIterator(CDynamicArray* itsList, Boolean itsForward);
    CListIterator(CDynamicArray* itsList, ArrayIndex itsLowBound, ArrayIndex itsHighBound, Boolean itsForward);

    void* CurrentItem(void);
    void* FirstItem(void);
    void* NextItem(void);
};

#endif
