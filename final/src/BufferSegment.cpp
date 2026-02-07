#include "BufferSegment.h"
#include <string.h>
#include <stdlib.h>

/**
 * Symbol: CBufferSegment::__ct(void)
 * Address: 000473f4
 */
CBufferSegment::CBufferSegment() {
    fStart = NULL;
    fEnd = NULL;
    fPhysicalSize = 0;
    fMark = NULL;
    fPos = NULL;
    fActualEnd = NULL;
    fSharedId = 0;
    fSharedField32 = 0;
    fOwnsBuffer = false;
    fIsSharedBuf = false;
}

/**
 * Symbol: CBufferSegment::__dt(void)
 * Address: 00047468
 */
CBufferSegment::~CBufferSegment() {
    this->UnShare();
    if (fStart && fOwnsBuffer) {
        free(fStart);
    }
}

/**
 * Symbol: CBufferSegment::Init(long)
 * Address: 0004776c
 */
NewtonErr CBufferSegment::Init(Size len) {
    if (fStart && fOwnsBuffer) {
        free(fStart);
    }
    fStart = (UByte*)malloc(len);
    if (!fStart) return -1; // MemError
    
    fPhysicalSize = len;
    fEnd = fStart + len;
    fMark = fStart;
    fPos = fStart;
    fActualEnd = fEnd;
    fOwnsBuffer = true;
    
    return this->RestoreShared(0);
}

/**
 * Symbol: CBufferSegment::Init(void *, long, unsigned char, long, long)
 * Address: 000471c0
 */
NewtonErr CBufferSegment::Init(void* buf, Size len, Boolean own, long physicalSize, long sharedId) {
    if (fStart && fOwnsBuffer) {
        free(fStart);
    }
    fStart = (UByte*)buf;
    fEnd = fStart + len;
    fPhysicalSize = (physicalSize == 0) ? len : physicalSize;
    fMark = fStart;
    fPos = fStart;
    fActualEnd = fEnd;
    fOwnsBuffer = own;
    
    return this->RestoreShared(sharedId);
}

// --- CBuffer Interface Implementation ---

/**
 * Symbol: CBufferSegment::Get(void)
 * Address: 00047318
 */
int CBufferSegment::Get() {
    if (fPos >= fActualEnd) {
        return -1;
    }
    return *fPos++;
}

/**
 * Symbol: CBufferSegment::Put(int)
 * Address: 000474cc
 */
int CBufferSegment::Put(int dataByte) {
    if (fPos >= fEnd) {
        return -1;
    }
    *fPos++ = (UByte)dataByte;
    if (fPos > fActualEnd) {
        fActualEnd = fPos;
    }
    return dataByte;
}

/**
 * Symbol: CBufferSegment::Getn(unsigned char *, long)
 * Address: 000472bc
 */
Size CBufferSegment::Getn(UByte* dest, Size count) {
    Size available = fActualEnd - fPos;
    Size toCopy = (available < count) ? available : count;
    if (toCopy > 0) {
        memcpy(dest, fPos, toCopy);
        fPos += toCopy;
    }
    return toCopy;
}

/**
 * Symbol: CBufferSegment::Putn(const UByte*, Size)
 * Address: 00047508
 */
Size CBufferSegment::Putn(const UByte* src, Size count) {
    Size remaining = fEnd - fPos;
    Size toCopy = (remaining < count) ? remaining : count;
    if (toCopy > 0) {
        memcpy(fPos, src, toCopy);
        fPos += toCopy;
        if (fPos > fActualEnd) {
            fActualEnd = fPos;
        }
    }
    return toCopy;
}

/**
 * Symbol: CBufferSegment::CopyIn(const UByte*, Size&)
 * Address: 00047550
 */
NewtonErr CBufferSegment::CopyIn(const UByte* src, Size& count) {
    Size requested = count;
    Size actual = this->Putn(src, requested);
    count = requested - actual;
    if (fPos == fEnd) return -1;
    return 0;
}

/**
 * Symbol: CBufferSegment::CopyOut(UByte*, Size&)
 * Address: 00047360
 */
NewtonErr CBufferSegment::CopyOut(UByte* dest, Size& count) {
    Size requested = count;
    Size actual = this->Getn(dest, requested);
    count = requested - actual;
    if (fPos == fActualEnd) return -1;
    return 0;
}

/**
 * Symbol: CBufferSegment::Reset(void)
 * Address: 00047590
 */
void CBufferSegment::Reset() {
    if (fIsSharedBuf) {
        // Shared buffer reset logic...
    }
    fMark = fStart;
    fPos = fStart;
    fActualEnd = fEnd;
}

/**
 * Symbol: CBufferSegment::Seek(long, int)
 * Address: 0004764c
 */
NewtonErr CBufferSegment::Seek(long offset, int mode) {
    UByte* target = fPos;
    if (mode == 0) target = fStart + offset;
    else if (mode == 1) target = fPos + offset;
    else if (mode == 2) target = fActualEnd - offset;
    
    if (target < fStart) target = fStart;
    if (target > fEnd) target = fEnd;
    
    fPos = target;
    return fPos - fStart;
}

/**
 * Symbol: CBufferSegment::Hide(long, int)
 * Address: 000475c8
 */
void CBufferSegment::Hide(long offset, int mode) {
    if (mode == 0) {
        UByte* target = fStart + offset;
        if (target > fActualEnd) target = fActualEnd;
        fMark = target;
        if (fPos < fMark) fPos = fMark;
    } else if (mode == 2) {
        UByte* target = fEnd - offset;
        if (target < fMark) target = fMark;
        fActualEnd = target;
        if (fPos > fActualEnd) fPos = fActualEnd;
    }
}

/**
 * Symbol: CBufferSegment::GetSize(void) const
 * Address: 000476f8
 */
Size CBufferSegment::GetSize() const {
    return fActualEnd - fStart;
}

/**
 * Symbol: CBufferSegment::Position(void) const
 * Address: 000476b4
 */
Size CBufferSegment::Position() const {
    return fPos - fStart;
}

/**
 * Symbol: CBufferSegment::Peek(void)
 * Address: 0004723c
 */
int CBufferSegment::Peek() {
    if (fPos >= fActualEnd) return -1;
    return *fPos;
}

/**
 * Symbol: CBufferSegment::Next(void)
 * Address: 00047258
 */
int CBufferSegment::Next() {
    if (fPos >= fActualEnd) return -1;
    return *fPos++;
}

/**
 * Symbol: CBufferSegment::Skip(void)
 * Address: 00047278
 */
void CBufferSegment::Skip() {
    if (fPos < fActualEnd) fPos++;
}

/**
 * Symbol: CBufferSegment::AtEOF(void) const
 * Address: 000476e0
 */
Boolean CBufferSegment::AtEOF() const {
    return fPos >= fActualEnd;
}

// --- Shared Memory ---

/**
 * Symbol: CBufferSegment::RestoreShared(unsigned long)
 * Address: 00047720
 */
NewtonErr CBufferSegment::RestoreShared(TObjectId id) {
    fSharedId = id;
    if (id != 0 && !fIsSharedBuf) {
        // TUSharedMem::Init() logic
        fIsSharedBuf = true;
    }
    return 0;
}

/**
 * Symbol: CBufferSegment::MakeShared(unsigned long)
 * Address: 000477dc
 */
NewtonErr CBufferSegment::MakeShared(unsigned long permissions) {
    if (fIsSharedBuf) return 0;
    // TUSharedMem initialization and SetBuffer logic
    fIsSharedBuf = true;
    return 0;
}

/**
 * Symbol: CBufferSegment::UnShare(void)
 * Address: 00047838
 */
void CBufferSegment::UnShare() {
    if (fIsSharedBuf) {
        // TUObject::DestroyObject() logic
        fIsSharedBuf = false;
    }
}

/**
 * Symbol: CBufferSegment::GetPhysicalSize(void)
 * Address: 00047870
 */
Size CBufferSegment::GetPhysicalSize() const {
    return fPhysicalSize;
}

/**
 * Symbol: CBufferSegment::SetPhysicalSize(long)
 * Address: 00047878
 */
void CBufferSegment::SetPhysicalSize(Size size) {
    fPhysicalSize = size;
}
