#ifndef __CPTRPIPE_H
#define __CPTRPIPE_H

#include "CPipe.h"

class PipeCallBack;

/**
 * CPtrPipe: A pipe that wraps a raw memory pointer.
 * Size: 24 bytes.
 */
class CPtrPipe : public CPipe {
public:
    CPtrPipe();
    virtual ~CPtrPipe();

    // CPipe Implementation
    virtual NewtonErr ReadSeek(long offset, int mode);
    virtual Size      ReadPosition() const;
    virtual NewtonErr WriteSeek(long offset, int mode);
    virtual Size      WritePosition() const;

    virtual NewtonErr ReadChunk(void* buf, Size& size, Boolean& eof);
    virtual NewtonErr WriteChunk(void* buf, Size size, Boolean eof);

    virtual void      Reset();
    virtual void      ResetRead();
    virtual void      ResetWrite();

    // Internal methods
    virtual NewtonErr Overflow();
    virtual NewtonErr Underflow(long count, unsigned char& data);
    virtual void      FlushRead();
    virtual void      FlushWrite();

    // Initialization
    NewtonErr Init(Size len, PipeCallBack* callback);
    NewtonErr Init(void* buffer, Size len, Boolean ownsBuffer, PipeCallBack* callback);

    NewtonErr Seek(long offset, int mode);

protected:
    void*         fBuffer;      // Offset 4
    Size          fPos;         // Offset 8
    Size          fSize;        // Offset 12
    PipeCallBack* fCallback;    // Offset 16
    Boolean       fOwnsBuffer;  // Offset 20
};

#endif
