#ifndef __CBUFFERSEGMENT_H
#define __CBUFFERSEGMENT_H

#include "CBuffer.h"

// Proxy for TUSharedMem if not defined
class TUSharedMem {
public:
    TObjectId fObjectId; // offset 0 (28 in CBufferSegment)
    // Other fields...
};

class CBufferSegment : public CBuffer {
public:
    CBufferSegment();
    CBufferSegment(const CBufferSegment& other);
    virtual ~CBufferSegment();

    NewtonErr Init(Size len);
    NewtonErr Init(void* buf, Size len, Boolean own = false, long physicalSize = 0, long sharedId = 0);

    // CBuffer Interface Implementation
    virtual int       Get();
    virtual NewtonErr Put(int data);
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

    // Shared Memory
    NewtonErr MakeShared(unsigned long permissions);
    void      UnShare();
    NewtonErr RestoreShared(TObjectId id);

    Size      GetPhysicalSize() const;
    void      SetPhysicalSize(Size size);

protected:
    UByte*   fStart;         // Offset 4
    UByte*   fEnd;           // Offset 8
    Size     fPhysicalSize;  // Offset 12
    UByte*   fMark;          // Offset 16
    UByte*   fPos;           // Offset 20
    UByte*   fActualEnd;     // Offset 24
    
    // TUSharedMem embedded at offset 28
    TObjectId fSharedId;     // Offset 28
    long     fSharedField32; // Offset 32
    
    Boolean  fOwnsBuffer;    // Offset 36
    Boolean  fIsSharedBuf;   // Offset 37
};

#endif
