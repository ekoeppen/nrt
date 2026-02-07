#ifndef __RINGBUFFER_H
#define __RINGBUFFER_H

#include "BaseRingBuffer.h"

/**
 * CRingBuffer: Concrete circular buffer implementation.
 * Size: 36 bytes.
 */
class CRingBuffer : public CBaseRingBuffer {
public:
    CRingBuffer();
    virtual ~CRingBuffer();

    // CMinBuffer Interface
    virtual int       Get();
    virtual int       Put(int data);
    virtual Size      Getn(UByte* dest, Size count);
    virtual Size      Putn(const UByte* src, Size count);
    virtual NewtonErr CopyIn(const UByte* src, Size& count);
    virtual NewtonErr CopyIn(class CPipe* pipe, Size& count);
    virtual NewtonErr CopyOut(UByte* dest, Size& count);
    
    virtual void      Reset();
    virtual Size      GetSize() const;
    virtual Size      Position() const;

    // Ring Buffer Specific Interface
    virtual Size      DataCount() const;
    virtual Size      FreeCount() const;
    virtual Boolean   IsEmpty() const;
    virtual Boolean   IsFull() const;
    virtual Boolean   AtEOF() const;

    // Sequential Access
    virtual int       Peek();
    virtual int       Next();
    virtual void      Skip();

    // Initialization & Management
    NewtonErr Init(Size size);
    NewtonErr Init(void* buf, Size len, Boolean own = false, long physicalSize = 0, long sharedId = 0);
    
    NewtonErr MakeShared(unsigned long permissions);
    void      UnShare();

    // Internal Vector Support
    void      ComputePutVectors(UByte** v1Ptr, long* v1Len, UByte** v2Ptr, long* v2Len) const;
    void      ComputeGetVectors(UByte** v1Ptr, long* v1Len, UByte** v2Ptr, long* v2Len) const;
    void      UpdatePutVector(Size count);
    void      UpdateGetVector(Size count);

    Size      GetnAt(long offset, UByte* dest, Size count);

protected:
    TObjectId fSharedId;     // Offset 24
    long      fSharedField28; // Offset 28
    Boolean   fIsShared;      // Offset 32
    Boolean   fOwnsBuffer;    // Offset 33
};

#endif
