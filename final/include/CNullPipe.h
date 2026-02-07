#ifndef __CNULLPIPE_H
#define __CNULLPIPE_H

#include "CBufferPipe.h"

/**
 * CNullPipe: A pipe that discards written data and can auto-expand.
 * Size: 20 bytes.
 */
class CNullPipe : public CBufferPipe {
public:
    CNullPipe(long increment = 0);
    virtual ~CNullPipe();

    virtual void      Reset();
    virtual NewtonErr Overflow();
    virtual NewtonErr Underflow(long count, unsigned char& data);
    virtual void      FlushRead();
    virtual void      FlushWrite();

protected:
    long fValue;  // Offset 16: Expansion increment
};

#endif
