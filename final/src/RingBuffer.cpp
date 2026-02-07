#include "RingBuffer.h"
#include <string.h>
#include <stdlib.h>

/**
 * Symbol: CRingBuffer::__ct(void)
 * Address: 001acb78
 */
CRingBuffer::CRingBuffer() {
    fSharedId = 0;
    fSharedField28 = 0;
    fIsShared = false;
    fOwnsBuffer = false;
    fStart = NULL;
    fEnd = NULL;
    fBufferSize = 0;
    fPutPtr = NULL;
    fGetPtr = NULL;
}

/**
 * Symbol: CRingBuffer::__dt(void)
 * Address: 001acbe0
 */
CRingBuffer::~CRingBuffer() {
    this->UnShare();
    if (fStart && fOwnsBuffer) {
        free(fStart);
    }
}

/**
 * Symbol: CRingBuffer::Init(long)
 * Address: 001ad0bc
 */
NewtonErr CRingBuffer::Init(Size size) {
    if (fStart && fOwnsBuffer) {
        free(fStart);
    }
    fStart = (UByte*)malloc(size);
    if (!fStart) return -1;
    
    fEnd = fStart + size;
    fBufferSize = size;
    fPutPtr = fStart;
    fGetPtr = fStart;
    fOwnsBuffer = true;
    fIsShared = false;
    
    return 0;
}

/**
 * Symbol: CRingBuffer::Init(void *, long, unsigned char, long, long)
 */
NewtonErr CRingBuffer::Init(void* buf, Size len, Boolean own, long physicalSize, long sharedId) {
    if (fStart && fOwnsBuffer) {
        free(fStart);
    }
    fStart = (UByte*)buf;
    fEnd = fStart + len;
    fBufferSize = (physicalSize == 0) ? len : physicalSize;
    fPutPtr = fStart;
    fGetPtr = fStart;
    fOwnsBuffer = own;
    fSharedId = sharedId;
    return 0;
}

/**
 * Symbol: CRingBuffer::Put(int)
 * Address: 001acc44
 */
int CRingBuffer::Put(int data) {
    if (this->IsFull()) return -1;
    *fPutPtr++ = (UByte)data;
    if (fPutPtr == fEnd) fPutPtr = fStart;
    return data;
}

/**
 * Symbol: CRingBuffer::Get(void)
 * Address: 001ad394
 */
int CRingBuffer::Get() {
    if (this->IsEmpty()) return -1;
    int data = *fGetPtr++;
    if (fGetPtr == fEnd) fGetPtr = fStart;
    return data;
}

/**
 * Symbol: CRingBuffer::Putn(unsigned char const *, long)
 * Address: 001acc84
 */
Size CRingBuffer::Putn(const UByte* src, Size count) {
    UByte *v1, *v2;
    long l1, l2;
    this->ComputePutVectors(&v1, &l1, &v2, &l2);
    
    Size total = 0;
    Size toCopy = (count < l1) ? count : l1;
    if (toCopy > 0) {
        memcpy(v1, src, toCopy);
        this->UpdatePutVector(toCopy);
        total += toCopy;
    }
    
    if (total < count) {
        toCopy = (count - total < l2) ? (count - total) : l2;
        if (toCopy > 0) {
            memcpy(v2, src + total, toCopy);
            this->UpdatePutVector(toCopy);
            total += toCopy;
        }
    }
    return total;
}

/**
 * Symbol: CRingBuffer::Getn(unsigned char *, long)
 * Address: 001ad3e0
 */
Size CRingBuffer::Getn(UByte* dest, Size count) {
    UByte *v1, *v2;
    long l1, l2;
    this->ComputeGetVectors(&v1, &l1, &v2, &l2);
    
    Size total = 0;
    Size toCopy = (count < l1) ? count : l1;
    if (toCopy > 0) {
        memcpy(dest, v1, toCopy);
        this->UpdateGetVector(toCopy);
        total += toCopy;
    }
    
    if (total < count) {
        toCopy = (count - total < l2) ? (count - total) : l2;
        if (toCopy > 0) {
            memcpy(dest + total, v2, toCopy);
            this->UpdateGetVector(toCopy);
            total += toCopy;
        }
    }
    return total;
}

/**
 * Symbol: CRingBuffer::DataCount( const(void))
 * Address: 001ad158
 */
Size CRingBuffer::DataCount() const {
    long diff = fPutPtr - fGetPtr;
    if (fPutPtr >= fGetPtr) return diff;
    return fBufferSize + diff;
}

/**
 * Symbol: CRingBuffer::FreeCount( const(void))
 * Address: 001ad080
 */
Size CRingBuffer::FreeCount() const {
    return (fBufferSize - 1) - this->DataCount();
}

/**
 * Symbol: CRingBuffer::IsEmpty( const(void))
 * Address: 001ad058
 */
Boolean CRingBuffer::IsEmpty() const {
    return fPutPtr == fGetPtr;
}

/**
 * Symbol: CRingBuffer::IsFull( const(void))
 * Address: 001ad040
 */
Boolean CRingBuffer::IsFull() const {
    UByte* nextPut = fPutPtr + 1;
    if (nextPut == fEnd) nextPut = fStart;
    return nextPut == fGetPtr;
}

/**
 * Symbol: CRingBuffer::Reset(void)
 * Address: 001ad004
 */
void CRingBuffer::Reset() {
    fPutPtr = fStart;
    fGetPtr = fStart;
}

/**
 * Symbol: CRingBuffer::Position(void) const
 */
Size CRingBuffer::Position() const {
    return this->DataCount();
}

/**
 * Symbol: CRingBuffer::GetSize(void) const
 */
Size CRingBuffer::GetSize() const {
    return fBufferSize;
}

/**
 * Symbol: CRingBuffer::AtEOF(void) const
 */
Boolean CRingBuffer::AtEOF() const {
    return this->IsEmpty();
}

/**
 * Symbol: CRingBuffer::Peek(void)
 */
int CRingBuffer::Peek() {
    if (this->IsEmpty()) return -1;
    return *fGetPtr;
}

/**
 * Symbol: CRingBuffer::Next(void)
 */
int CRingBuffer::Next() {
    return this->Get();
}

/**
 * Symbol: CRingBuffer::Skip(void)
 */
void CRingBuffer::Skip() {
    this->Get();
}

// --- Vector Support ---

/**
 * Symbol: ComputePutVectors__11CRingBufferCFRPUcRlT1T2
 * Address: 001ad178
 */
void CRingBuffer::ComputePutVectors(UByte** v1Ptr, long* v1Len, UByte** v2Ptr, long* v2Len) const {
    UByte* limit = fGetPtr - 1;
    if (fGetPtr == fStart) limit = fEnd - 1;
    
    *v1Ptr = fPutPtr;
    if (fPutPtr >= limit) {
        if (fPutPtr == limit) {
            *v1Len = 0;
            *v2Ptr = NULL;
            *v2Len = 0;
        } else {
            *v1Len = fEnd - fPutPtr;
            *v2Ptr = fStart;
            *v2Len = limit - fStart;
        }
    } else {
        *v1Len = limit - fPutPtr;
        *v2Ptr = NULL;
        *v2Len = 0;
    }
}

/**
 * Symbol: ComputeGetVectors__11CRingBufferCFRPUcRlT1T2
 */
void CRingBuffer::ComputeGetVectors(UByte** v1Ptr, long* v1Len, UByte** v2Ptr, long* v2Len) const {
    *v1Ptr = fGetPtr;
    if (fGetPtr <= fPutPtr) {
        *v1Len = fPutPtr - fGetPtr;
        *v2Ptr = NULL;
        *v2Len = 0;
    } else {
        *v1Len = fEnd - fGetPtr;
        *v2Ptr = fStart;
        *v2Len = fPutPtr - fStart;
    }
}

void CRingBuffer::UpdatePutVector(Size count) {
    fPutPtr += count;
    if (fPutPtr >= fEnd) fPutPtr = fStart + (fPutPtr - fEnd);
}

void CRingBuffer::UpdateGetVector(Size count) {
    fGetPtr += count;
    if (fGetPtr >= fEnd) fGetPtr = fStart + (fGetPtr - fEnd);
}

// --- Management ---

NewtonErr CRingBuffer::MakeShared(unsigned long permissions) {
    fIsShared = true;
    return 0;
}

void CRingBuffer::UnShare() {
    fIsShared = false;
}

Size CRingBuffer::GetnAt(long offset, UByte* dest, Size count) {
    // Implementation would involve temporary get pointer
    return 0;
}

NewtonErr CRingBuffer::CopyIn(const UByte* src, Size& count) {
    Size requested = count;
    Size actual = this->Putn(src, requested);
    count = requested - actual;
    return 0;
}

NewtonErr CRingBuffer::CopyOut(UByte* dest, Size& count) {
    Size requested = count;
    Size actual = this->Getn(dest, requested);
    count = requested - actual;
    return 0;
}

#include "Pipe.h"

NewtonErr CRingBuffer::CopyIn(CPipe* pipe, Size& count) {
    UByte *v1, *v2;
    long l1, l2;
    this->ComputePutVectors(&v1, &l1, &v2, &l2);
    
    Size requested = count;
    Size totalRead = 0;
    Boolean eof = false;

    if (l1 > 0) {
        Size actual = (requested < l1) ? requested : l1;
        NewtonErr err = pipe->ReadChunk(v1, actual, eof);
        this->UpdatePutVector(actual);
        totalRead += actual;
        if (err != 0 || eof || totalRead == requested) {
            count = requested - totalRead;
            return err;
        }
    }

    if (l2 > 0 && totalRead < requested) {
        Size actual = (requested - totalRead < l2) ? (requested - totalRead) : l2;
        NewtonErr err = pipe->ReadChunk(v2, actual, eof);
        this->UpdatePutVector(actual);
        totalRead += actual;
        count = requested - totalRead;
        return err;
    }

    count = requested - totalRead;
    return 0;
}
