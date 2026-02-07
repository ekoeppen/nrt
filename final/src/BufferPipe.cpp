#include "BufferPipe.h"
#include "Buffer.h"

/**
 * CBufferPipe implementation
 */

CBufferPipe::CBufferPipe() {
    fReadBuffer = NULL;
    fWriteBuffer = NULL;
    fOwnsBuffers = false;
    fIsEOF = false;
}

CBufferPipe::~CBufferPipe() {
    if (fOwnsBuffers) {
        if (fReadBuffer) delete fReadBuffer;
        if (fWriteBuffer) delete fWriteBuffer;
    }
}

NewtonErr CBufferPipe::Init(long readSize, long writeSize) {
    fOwnsBuffers = true;
    fIsEOF = false;
    
    if (readSize > 0) {
        fReadBuffer = new CBufferSegment();
        if (!fReadBuffer) return MemError();
        NewtonErr err = ((CBufferSegment*)fReadBuffer)->Init(readSize);
        if (err != noErr) return err;
        fReadBuffer->Seek(0, 1); // Reset read buffer
    }
    
    if (writeSize > 0) {
        fWriteBuffer = new CBufferSegment();
        if (!fWriteBuffer) return MemError();
        NewtonErr err = ((CBufferSegment*)fWriteBuffer)->Init(writeSize);
        if (err != noErr) return err;
    }
    
    return noErr;
}

NewtonErr CBufferPipe::Init(CBufferSegment * readBuf, CBufferSegment * writeBuf, Boolean own) {
    fReadBuffer = readBuf;
    fWriteBuffer = writeBuf;
    fOwnsBuffers = own;
    return Reset();
}

void CBufferPipe::Reset() {
    ResetRead();
    ResetWrite();
}

void CBufferPipe::ResetRead() {
    if (fReadBuffer) fReadBuffer->Reset();
    fIsEOF = false;
}

void CBufferPipe::ResetWrite() {
    if (fWriteBuffer) fWriteBuffer->Reset();
}

int CBufferPipe::Peek(unsigned char & c) {
    if (fReadBuffer) {
        if (fReadBuffer->Peek(c) == 0) return 0;
    }
    fIsEOF = true;
    return -1;
}

int CBufferPipe::Next() {
    if (fReadBuffer) {
        int res = fReadBuffer->Next();
        if (res != -1) return res;
    }
    fIsEOF = true;
    return -1;
}

int CBufferPipe::Get() {
    if (fReadBuffer) {
        int res = fReadBuffer->Get();
        if (res != -1) return res;
    }
    fIsEOF = true;
    return -1;
}

NewtonErr CBufferPipe::Put(int c) {
    if (fWriteBuffer) {
        return fWriteBuffer->Put(c);
    }
    return -1;
}

NewtonErr CBufferPipe::ReadSeek(long offset, int mode) {
    if (fReadBuffer) {
        fIsEOF = false;
        return fReadBuffer->Seek(offset, mode);
    }
    return -1;
}

Size CBufferPipe::ReadPosition() const {
    if (fReadBuffer) return fReadBuffer->Position();
    return 0;
}

NewtonErr CBufferPipe::WriteSeek(long offset, int mode) {
    if (fWriteBuffer) return fWriteBuffer->Seek(offset, mode);
    return -1;
}

Size CBufferPipe::WritePosition() const {
    if (fWriteBuffer) return fWriteBuffer->Position();
    return 0;
}

NewtonErr CBufferPipe::ReadChunk(void * buf, Size & size, Boolean & eof) {
    if (fReadBuffer) {
        NewtonErr err = fReadBuffer->Getn((unsigned char *)buf, size);
        if (err == noErr) {
            eof = false;
            return noErr;
        }
    }
    eof = true;
    fIsEOF = true;
    return -1;
}

NewtonErr CBufferPipe::WriteChunk(void * buf, Size size, Boolean eof) {
    if (fWriteBuffer) {
        return fWriteBuffer->Putn((unsigned char *)buf, size);
    }
    return -1;
}

void CBufferPipe::Skip() {
    if (fReadBuffer) {
        int res = fReadBuffer->Next();
        if (res != -1) return;
    }
    fIsEOF = true;
}
