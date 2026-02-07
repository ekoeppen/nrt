#include "ItemComparer.h"

/**
 * Symbol: CItemComparer::__ct(void const *, void const *)
 * Address: 000f8da4
 */
CItemComparer::CItemComparer(const void* testItem, const void* keyValue) {
    fTestItem = testItem;
    fKeyValue = keyValue;
}

/**
 * Symbol: CItemComparer::TestItem( const(void const *))
 * Address: 000f8de4
 */
CompareResult CItemComparer::TestItem(const void* criteria) const {
    if (fTestItem < criteria) return -1;
    if (fTestItem > criteria) return 1;
    return 0;
}
