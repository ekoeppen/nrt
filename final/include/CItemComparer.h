#ifndef __CITEMCOMPARER_H
#define __CITEMCOMPARER_H

#include "CItemTester.h"

class CItemComparer : public CItemTester {
public:
    CItemComparer(const void* testItem, const void* keyValue = NULL);
    virtual CompareResult TestItem(const void* criteria) const;
protected:
    const void* fTestItem; // offset 4
    const void* fKeyValue; // offset 8
};

#endif
