#include "include/CMemoryPipe.h"

/**
 * Symbol: CMemoryPipe::FlushRead(void)
 * Address: 002d8588
 */
CMemoryPipe::FlushRead(void) {
    /*
        2d8588:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CMemoryPipe::FlushWrite(void)
 * Address: 002d858c
 */
CMemoryPipe::FlushWrite(void) {
    /*
        2d858c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CMemoryPipe::Overflow(void)
 * Address: 002d8590
 */
CMemoryPipe::Overflow(void) {
    /*
        2d8590:	e59f000c 	ldr	r0, [pc, #c]	; 2d85a4 <CMemoryPipe::Overflow(void)+0x14>
        2d8594:	e5900000 	ldr	r0, [r0]
        2d8598:	e3a02000 	mov	r2, #0	; 0x0
        2d859c:	e3e01000 	mvn	r1, #0	; 0x0
        2d85a0:	ea642afd 	b	1be319c <$Throw>
        2d85a4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CMemoryPipe::Underflow(long, unsigned char &)
 * Address: 002d85a8
 */
CMemoryPipe::Underflow(long, unsigned char &) {
    /*
        2d85a8:	e3a00001 	mov	r0, #1	; 0x1
        2d85ac:	e5c20000 	strb	r0, [r2]
        2d85b0:	e1a0f00e 	mov	pc, lr
    */
}

