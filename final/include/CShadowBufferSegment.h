#ifndef __CSHADOWBUFFERSEGMENT_H
#define __CSHADOWBUFFERSEGMENT_H

#include "CBuffer.h"

/**
 * CShadowBufferSegment: A buffer segment that "shadows" another memory region,
 * likely via a kernel buffer ID.
 * Size: 28 bytes.
 */
class CShadowBufferSegment : public CBuffer {
public:
    CShadowBufferSegment();
    virtual ~CShadowBufferSegment();

    // CBuffer Interface Implementation
    virtual int       Get();
    virtual int       Put(int data);
    virtual Size      Getn(UByte* dest, Size count);
    virtual Size      Putn(const UByte* src, Size count);
    virtual NewtonErr CopyIn(const UByte* src, Size& count);
    virtual NewtonErr CopyOut(UByte* dest, Size& count);
    
    virtual void      Reset();
    virtual NewtonErr Seek(long offset, int mode);
    virtual void      Hide(long offset, int mode);
    virtual Size      GetSize() const;
    virtual Size      Position() const;

    virtual int       Peek();
    virtual int       Next();
    virtual void      Skip();
    virtual Boolean   AtEOF() const;

    // Shadow Buffer Interface
    NewtonErr Init(TObjectId shadowId, Size len, long offset = 0);
    
    TObjectId GetShadowId() const { return fShadowId; }

protected:
    Size      fSize;     // Offset 4
    Size      fPos;      // Offset 8
    Size      fMark;     // Offset 12
    TObjectId fShadowId; // Offset 16
    // Internal object at offset 20
    long      fInternal20; // Offset 20
    Boolean   fInternal24; // Offset 24
};

#endif
