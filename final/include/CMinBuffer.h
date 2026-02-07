#ifndef __CMINBUFFER_H
#define __CMINBUFFER_H

#include "Newton.h"

class CMinBuffer {
public:
    virtual ~CMinBuffer();

    virtual int Put(int dataByte) = 0;
    virtual Size Putn(const UByte* p, Size n) = 0;
    virtual void Reset(void) = 0;
    virtual Size GetSize(void) const = 0;
    virtual Size Position(void) const = 0;
    // ... other virtual methods ...
};

#endif
