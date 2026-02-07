#include "BaseRingBuffer.h"

/**
 * Symbol: CBaseRingBuffer::__ct(void)
 * Address: 0003b348
 */
CBaseRingBuffer::CBaseRingBuffer() {
    fStart = NULL;
    fEnd = NULL;
    fBufferSize = 0;
    fPutPtr = NULL;
    fGetPtr = NULL;
}

/**
 * Symbol: CBaseRingBuffer::__dt(void)
 * Address: 0003b388
 */
CBaseRingBuffer::~CBaseRingBuffer() {
}
