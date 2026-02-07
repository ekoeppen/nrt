#ifndef __CITEMTESTER_H
#define __CITEMTESTER_H

#include "Newton.h"

typedef long CompareResult;

class CItemTester {
public:
    virtual CompareResult TestItem(const void* testItem) const = 0;
};

#endif
