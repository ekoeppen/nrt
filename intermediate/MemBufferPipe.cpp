#include "include/MemBufferPipe.h"

/**
 * Symbol: MemBufferPipe::FlushRead(void)
 * Address: 00226a10
 */
MemBufferPipe::FlushRead(void) {
    /*
        226a10:	e5900004 	ldr	r0, [r0, #4]	; fField4
        226a14:	e3300000 	teq	r0, #0	; 0x0
        226a18:	01a0f00e 	moveq	pc, lr
        226a1c:	e3a02001 	mov	r2, #1	; 0x1
        226a20:	e3a01000 	mov	r1, #0	; 0x0
        226a24:	e5903000 	ldr	r3, [r0]
        226a28:	e283f038 	add	pc, r3, #56	; 0x38
    */
}

/**
 * Symbol: MemBufferPipe::FlushWrite(void)
 * Address: 00226a2c
 */
MemBufferPipe::FlushWrite(void) {
    /*
        226a2c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        226a30:	e3300000 	teq	r0, #0	; 0x0
        226a34:	15901000 	ldrne	r1, [r0]
        226a38:	1281f028 	addne	pc, r1, #40	; 0x28
        226a3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MemBufferPipe::Overflow(void)
 * Address: 00227854
 */
MemBufferPipe::Overflow(void) {
    /*
        227854:	e5900008 	ldr	r0, [r0, #8]	; fField8
        227858:	e3300000 	teq	r0, #0	; 0x0
        22785c:	15901000 	ldrne	r1, [r0]
        227860:	1281f028 	addne	pc, r1, #40	; 0x28
        227864:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MemBufferPipe::Underflow(long, unsigned char &)
 * Address: 00228c50
 */
MemBufferPipe::Underflow(long, unsigned char &) {
    /*
        228c50:	e3a00000 	mov	r0, #0	; 0x0
        228c54:	e5c20000 	strb	r0, [r2]
        228c58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MemBufferPipe::Reset(void)
 * Address: 00228fc8
 */
MemBufferPipe::Reset(void) {
    /*
        228fc8:	e1a0c00d 	mov	ip, sp
        228fcc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        228fd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        228fd4:	e1a04000 	mov	r4, r0
        228fd8:	eb670da0 	bl	1bec660 <CBufferPipe::$Reset(void)>
        228fdc:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        228fe0:	e3300000 	teq	r0, #0	; 0x0
        228fe4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        228fe8:	e3e02000 	mvn	r2, #0	; 0x0
        228fec:	e3a01000 	mov	r1, #0	; 0x0
        228ff0:	e5903000 	ldr	r3, [r0]
        228ff4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        228ff8:	e283f038 	add	pc, r3, #56	; 0x38
    */
}

