#ifndef __CBUFFER_H
#define __CBUFFER_H

#include "CMinBuffer.h"

class CBuffer : public CMinBuffer {
public:
    CBuffer();
    virtual ~CBuffer();

    virtual int Put(int dataByte);
    virtual Size Putn(const UByte* p, Size n);
    virtual void Reset(void);
    virtual Size GetSize(void) const;
    virtual Size Position(void) const;

protected:
    // CBuffer usually delegates to an internal implementation or is a thin base
};

#endif
