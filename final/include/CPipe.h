#ifndef __CPIPE_H
#define __CPIPE_H

#include "Newton.h"

class CPipe {
public:
    CPipe() {}
    virtual ~CPipe() {}

    virtual NewtonErr ReadSeek(long offset, int mode) = 0;
    virtual Size ReadPosition() const = 0;
    virtual NewtonErr WriteSeek(long offset, int mode) = 0;
    virtual Size WritePosition() const = 0;

    virtual NewtonErr ReadChunk(void * buf, Size & size, Boolean & eof) = 0;
    virtual NewtonErr WriteChunk(void * buf, Size size, Boolean eof) = 0;

    // Slot 9, 10, 11
    virtual void Reset() = 0;
    virtual void ResetRead() = 0;
    virtual void ResetWrite() = 0;
};

#endif
