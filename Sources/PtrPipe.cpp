#include "PtrPipe.h"
#include <string.h>
#include <stdlib.h>

/**
 * Symbol: CPtrPipe::__ct(void)
 * Address: 00195518
 */
CPtrPipe::CPtrPipe() {
    fBuffer = NULL;
    fPos = 0;
    fSize = 0;
    fCallback = NULL;
    fOwnsBuffer = false;
}

/**
 * Symbol: CPtrPipe::__dt(void)
 * Address: 00195570
 */
CPtrPipe::~CPtrPipe() {
    if (fOwnsBuffer && fBuffer) {
        free(fBuffer);
    }
}

/**
 * Symbol: CPtrPipe::ReadPosition( const(void))
 * Address: 001955c0
 */
Size CPtrPipe::ReadPosition() const {
    return fPos;
}

/**
 * Symbol: CPtrPipe::WritePosition( const(void))
 * Address: 001955c8
 */
Size CPtrPipe::WritePosition() const {
    return fPos;
}

/**
 * Symbol: CPtrPipe::Overflow(void)
 * Address: 001955d0
 */
NewtonErr CPtrPipe::Overflow() {
    // Assembly throws 0x374A (kPipeOverflow?)
    return -14006; 
}

/**
 * Symbol: CPtrPipe::Underflow(long, unsigned char &)
 * Address: 001955ec
 */
NewtonErr CPtrPipe::Underflow(long count, unsigned char& data) {
    // Assembly throws 0x3749 (kPipeUnderflow?)
    return -14007;
}

/**
 * Symbol: CPtrPipe::FlushRead(void)
 * Address: 00195608
 */
void CPtrPipe::FlushRead() {
}

/**
 * Symbol: CPtrPipe::FlushWrite(void)
 * Address: 0019560c
 */
void CPtrPipe::FlushWrite() {
}

/**
 * Symbol: CPtrPipe::Init(long, PipeCallBack *)
 * Address: 00195610
 */
NewtonErr CPtrPipe::Init(Size len, PipeCallBack* callback) {
    if (fOwnsBuffer && fBuffer) {
        free(fBuffer);
    }
    fBuffer = malloc(len);
    if (!fBuffer) return -1; // MemError
    fSize = len;
    fPos = 0;
    fOwnsBuffer = true;
    fCallback = callback;
    return 0;
}

/**
 * Symbol: CPtrPipe::Init(void *, long, unsigned char, PipeCallBack *)
 * Address: 00195688
 */
NewtonErr CPtrPipe::Init(void* buffer, Size len, Boolean ownsBuffer, PipeCallBack* callback) {
    if (fOwnsBuffer && fBuffer) {
        free(fBuffer);
    }
    fBuffer = buffer;
    fSize = len;
    fPos = 0;
    fOwnsBuffer = ownsBuffer;
    fCallback = callback;
    return 0;
}

/**
 * Symbol: CPtrPipe::Reset(void)
 * Address: 001956b0
 */
void CPtrPipe::Reset() {
    fPos = 0;
}

void CPtrPipe::ResetRead() {
    fPos = 0;
}

void CPtrPipe::ResetWrite() {
    fPos = 0;
}

/**
 * Symbol: CPtrPipe::ReadChunk(void *, long &, unsigned char &)
 * Address: 001956bc
 */
NewtonErr CPtrPipe::ReadChunk(void* buf, Size& size, Boolean& eof) {
    Size available = fSize - fPos;
    Size toRead = (size < available) ? size : available;
    if (toRead > 0) {
        memcpy(buf, (UByte*)fBuffer + fPos, toRead);
        fPos += toRead;
    }
    size = toRead;
    eof = (fPos >= fSize);
    return 0;
}

/**
 * Symbol: CPtrPipe::WriteChunk(void *, long, unsigned char)
 * Address: 0019574c
 */
NewtonErr CPtrPipe::WriteChunk(void* buf, Size size, Boolean eof) {
    Size remaining = fSize - fPos;
    if (size > remaining) {
        return this->Overflow();
    }
    if (size > 0) {
        memcpy((UByte*)fBuffer + fPos, buf, size);
        fPos += size;
    }
    return 0;
}

/**
 * Symbol: CPtrPipe::Seek(long, int)
 * Address: 001957bc
 */
NewtonErr CPtrPipe::Seek(long offset, int mode) {
    Size newPos = fPos;
    if (mode == 0) newPos = offset;
    else if (mode == 1) newPos = fPos + offset;
    else if (mode == 2) newPos = fSize - offset;
    
    if (newPos < 0) newPos = 0;
    if (newPos > fSize) newPos = fSize;
    
    fPos = newPos;
    return 0;
}

/**
 * Symbol: CPtrPipe::ReadSeek(long, int)
 * Address: 00195824
 */
NewtonErr CPtrPipe::ReadSeek(long offset, int mode) {
    return this->Seek(offset, mode);
}

/**
 * Symbol: CPtrPipe::WriteSeek(long, int)
 * Address: 0019582c
 */
NewtonErr CPtrPipe::WriteSeek(long offset, int mode) {
    return this->Seek(offset, mode);
}
