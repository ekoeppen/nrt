#ifndef __BUFFERPIPE_H
#define __BUFFERPIPE_H

#include "Newton.h"
#include "Pipe.h"

class CBuffer;
class CBufferSegment;

class CBufferPipe : public CPipe {
public:
    CBufferPipe();
    virtual ~CBufferPipe();

    NewtonErr Init(long readSize, long writeSize);
    NewtonErr Init(CBufferSegment * readBuf, CBufferSegment * writeBuf, Boolean own);

    virtual void Reset();
    virtual void ResetRead();
    virtual void ResetWrite();

    virtual int Peek(unsigned char & c);
    virtual int Next();
    virtual int Get();
    virtual void Skip();
    virtual NewtonErr Put(int c);

    virtual NewtonErr ReadSeek(long offset, int mode);
    virtual Size ReadPosition() const;
    virtual NewtonErr WriteSeek(long offset, int mode);
    virtual Size WritePosition() const;

    virtual NewtonErr ReadChunk(void * buf, Size & size, Boolean & eof);
    virtual NewtonErr WriteChunk(void * buf, Size size, Boolean eof);

protected:
    CBuffer* fReadBuffer;  // Offset 4
    CBuffer* fWriteBuffer; // Offset 8
    Boolean  fOwnsBuffers; // Offset 12
    Boolean  fIsEOF;       // Offset 13
};

#endif
