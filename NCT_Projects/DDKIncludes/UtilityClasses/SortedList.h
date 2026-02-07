#ifndef __SORTEDLIST_H
#define __SORTEDLIST_H

#include "List.h"

class CItemComparer;

/**
 * CSortedList: A list that maintains its items in a sorted order.
 * Size: 28 bytes.
 */
class CSortedList : public CList {
public:
    CSortedList(CItemComparer* comparer);
    virtual ~CSortedList();

    virtual void      Insert(void* item);
    virtual Boolean   InsertUnique(void* item);
    virtual NewtonErr InsertDuplicate(ArrayIndex index, void* item, void* unused = NULL);

    virtual void*     Search(CItemTester* test, ArrayIndex& index);

protected:
    CItemComparer* fComparer;  // Offset 24
};

#endif
