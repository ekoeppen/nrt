#ifndef __BASERINGBUFFER_H
#define __BASERINGBUFFER_H

#include "MinBuffer.h"

/**
 * CBaseRingBuffer: Abstract base class for circular buffers.
 * Size: 24 bytes (base for CRingBuffer)
 */
class CBaseRingBuffer : public CMinBuffer {
public:
    CBaseRingBuffer();
    virtual ~CBaseRingBuffer();

    // CMinBuffer Interface
    virtual int     Get() = 0;
    virtual int     Put(int data) = 0;
    virtual Size    Getn(UByte* buf, Size n) = 0;
    virtual Size    Putn(const UByte* buf, Size n) = 0;
    virtual void    Reset() = 0;
    virtual Size    GetSize() const = 0;
    virtual Size    Position() const = 0;

    // Ring Buffer Specific Interface
    virtual Size    DataCount() const = 0;
    virtual Size    FreeCount() const = 0;
    virtual Boolean IsEmpty() const = 0;
    virtual Boolean IsFull() const = 0;
    virtual Boolean AtEOF() const = 0;

protected:
    UByte*  fStart;      // Offset 4: Base of the physical buffer
    UByte*  fEnd;        // Offset 8: End of the physical buffer (fStart + fBufferSize)
    Size    fBufferSize; // Offset 12: Total size of the buffer (physical)
    UByte*  fPutPtr;     // Offset 16: Write head
    UByte*  fGetPtr;     // Offset 20: Read tail
};

#endif
