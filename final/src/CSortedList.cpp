#include "CSortedList.h"
#include "CItemComparer.h"
#include "CListIterator.h"

/**
 * Symbol: CSortedList::__ct(CItemComparer *)
 * Address: 001e34c0
 */
CSortedList::CSortedList(CItemComparer* comparer) : CList() {
    fComparer = comparer;
}

/**
 * Symbol: CSortedList::__dt(void)
 * Address: 001e34fc
 */
CSortedList::~CSortedList() {
}

/**
 * Symbol: CSortedList::Insert(void *)
 * Address: 001e352c
 */
void CSortedList::Insert(void* item) {
    ArrayIndex index;
    // We use the comparer to find the position
    // Since it's a CItemComparer, we can use it as a CItemTester
    void* existing = this->Search(fComparer, index);
    if (existing) {
        this->InsertDuplicate(index, item);
    } else {
        this->InsertAt(index, item);
    }
}

/**
 * Symbol: CSortedList::InsertUnique(void *)
 * Address: 001e358c
 */
Boolean CSortedList::InsertUnique(void* item) {
    ArrayIndex index;
    void* existing = this->Search(fComparer, index);
    if (!existing) {
        this->InsertAt(index, item);
        return true;
    }
    return false;
}

/**
 * Symbol: CSortedList::InsertDuplicate(long, void *, void *)
 * Address: 001e35f0
 */
NewtonErr CSortedList::InsertDuplicate(ArrayIndex index, void* item, void* unused) {
    return this->InsertAt(index, item);
}

/**
 * Symbol: CSortedList::Search(CItemTester *, long &)
 * Address: 001e35f8
 */
void* CSortedList::Search(CItemTester* test, ArrayIndex& index) {
    // For a sorted list, we can perform a binary search
    // But the assembly seems to suggest a loop or specialized logic
    // Newton OS often used binary search for sorted lists
    
    ArrayIndex low = 0;
    ArrayIndex high = fSize - 1;
    index = 0;

    if (fSize == 0) return NULL;

    while (low <= high) {
        ArrayIndex mid = (low + high) / 2;
        void* item = this->At(mid);
        CompareResult res = test->TestItem(item);
        
        if (res == 0) {
            index = mid;
            return item;
        } else if (res < 0) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    index = low; // Insertion point
    return NULL;
}
