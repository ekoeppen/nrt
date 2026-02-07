#include "CNullPipe.h"
#include "CBufferSegment.h"

/**
 * Symbol: CNullPipe::__ct(long)
 * Address: 00147184
 */
CNullPipe::CNullPipe(long increment) : CBufferPipe() {
    fValue = increment;
}

/**
 * Symbol: CNullPipe::__dt(void)
 * Address: 001471cc
 */
CNullPipe::~CNullPipe() {
}

/**
 * Symbol: CNullPipe::FlushRead(void)
 * Address: 0014720c
 */
void CNullPipe::FlushRead() {
    if (fReadBuffer) {
        fReadBuffer->Reset();
        fReadBuffer->Seek(0, 1); // As per assembly offsets
    }
}

/**
 * Symbol: CNullPipe::FlushWrite(void)
 * Address: 0014724c
 */
void CNullPipe::FlushWrite() {
    if (fWriteBuffer) {
        fWriteBuffer->Reset();
    }
}

/**
 * Symbol: CNullPipe::Overflow(void)
 * Address: 00147260
 */
NewtonErr CNullPipe::Overflow() {
    if (!fWriteBuffer) return 0;
    
    if (fValue <= 0) {
        fWriteBuffer->Reset();
        return 0;
    }
    
    Size currentSize = ((CBufferSegment*)fWriteBuffer)->GetPhysicalSize();
    NewtonErr err = ((CBufferSegment*)fWriteBuffer)->SetPhysicalSize(currentSize + fValue);
    if (err != 0) {
        // Assembly throws 0x374A
        return err;
    }
    return 0;
}

/**
 * Symbol: CNullPipe::Underflow(long, unsigned char &)
 * Address: 001472c8
 */
NewtonErr CNullPipe::Underflow(long count, unsigned char& data) {
    data = 0;
    return 0;
}

/**
 * Symbol: CNullPipe::Reset(void)
 * Address: 001472d4
 */
void CNullPipe::Reset() {
    CBufferPipe::Reset();
    if (fReadBuffer) {
        fReadBuffer->Reset();
        fReadBuffer->Seek(0, 1);
    }
    if (fWriteBuffer) {
        fWriteBuffer->Reset();
    }
}
