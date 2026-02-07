#include "List.h"
#include "ListIterator.h"
#include "ItemComparer.h"

/**
 * Symbol: Make__5CListSFl
 * Address: 0010ed2c
 */
CList* CList::Make(ArrayIndex size) {
    return new CList();
}

/**
 * Symbol: Make__5CListSFv
 * Address: 00112f9c
 */
CList* CList::Make() {
    return new CList();
}

/**
 * Symbol: CList::__ct(void)
 * Address: 00113238
 */
CList::CList() : CDynamicArray(4, 4) {
}

/**
 * Symbol: CList::__dt(void)
 * Address: 0011332c
 */
CList::~CList() {
}

/**
 * Symbol: CList::At(long)
 * Address: 0011341c
 */
void* CList::At(ArrayIndex index) {
    void** ptr = (void**)this->SafeElementPtrAt(index);
    if (ptr) {
        return *ptr;
    }
    return NULL;
}

/**
 * Symbol: CList::InsertAt(long, void *)
 * Address: 001134a8
 */
NewtonErr CList::InsertAt(ArrayIndex index, void* item) {
    return this->InsertElementsBefore(index, &item, 1);
}

/**
 * Symbol: CList::Remove(void *)
 * Address: 001134ec
 */
NewtonErr CList::Remove(void* item) {
    ArrayIndex index = this->GetIdentityIndex(item);
    if (index == -1) {
        return -14008; // kItemNotFound
    }
    return this->RemoveElementsAt(index, 1);
}

/**
 * Symbol: CList::ReplaceAt(long, void *)
 * Address: 00113820
 */
NewtonErr CList::ReplaceAt(ArrayIndex index, void* newItem) {
    return this->ReplaceElementsAt(index, &newItem, 1);
}

/**
 * Symbol: CList::Replace(void *, void *)
 * Address: 00113684
 */
NewtonErr CList::Replace(void* oldItem, void* newItem) {
    ArrayIndex index = this->GetIdentityIndex(oldItem);
    if (index == -1) {
        return -14008; // kItemNotFound
    }
    return this->ReplaceAt(index, newItem);
}

/**
 * Symbol: CList::GetIdentityIndex(void *)
 * Address: 00112fd0
 */
ArrayIndex CList::GetIdentityIndex(void* item) {
    CItemComparer comparer(item);
    ArrayIndex index;
    this->Search(&comparer, index);
    return index;
}

/**
 * Symbol: CList::Search(CItemTester *, long &)
 * Address: 00113008
 */
void* CList::Search(CItemTester* test, ArrayIndex& index) {
    CListIterator iter(this);
    index = -1;
    
    void* item = iter.FirstItem();
    while (iter.More()) {
        if (test->TestItem(item) == 0) {
            index = iter.CurrentIndex();
            return item;
        }
        item = iter.NextItem();
    }
    return NULL;
}

/**
 * Symbol: CList::InsertUnique(void *)
 * Address: 00113640
 */
Boolean CList::InsertUnique(void* item) {
    ArrayIndex index = this->GetIdentityIndex(item);
    if (index == -1) {
        this->InsertAt(fSize, item);
        return true;
    }
    return false;
}
