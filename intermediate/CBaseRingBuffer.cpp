#include "include/CBaseRingBuffer.h"

/**
 * Symbol: CBaseRingBuffer::__ct(void)
 * Address: 0003b348
 */
CBaseRingBuffer::CBaseRingBuffer(void) {
    /*
         3b348:	e1a0c00d 	mov	ip, sp
         3b34c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3b350:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b354:	e1b04000 	movs	r4, r0
         3b358:	1a000003 	bne	3b36c <CBaseRingBuffer::__ct(void)+0x24>
         3b35c:	e3a00004 	mov	r0, #4	; 0x4
         3b360:	eb6e4cf4 	bl	1bce738 <$__nw(unsigned int)>
         3b364:	e1b04000 	movs	r4, r0
         3b368:	0a000003 	beq	3b37c <CBaseRingBuffer::__ct(void)+0x34>
         3b36c:	e1a00004 	mov	r0, r4
         3b370:	eb6e9f90 	bl	1be31b8 <CMinBuffer::$__ct(void)>
         3b374:	e59f0008 	ldr	r0, [pc, #8]	; 3b384 <CBaseRingBuffer::__ct(void)+0x3c>
         3b378:	e5840000 	str	r0, [r4]
         3b37c:	e1a00004 	mov	r0, r4
         3b380:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         3b384:	0001de88 	andeq	sp, r1, r8, lsl #29
    */
}

/**
 * Symbol: CBaseRingBuffer::__dt(void)
 * Address: 0003b388
 */
CBaseRingBuffer::~CBaseRingBuffer(void) {
    /*
         3b388:	e1a0c00d 	mov	ip, sp
         3b38c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3b390:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b394:	e1a04000 	mov	r4, r0
         3b398:	e1a05001 	mov	r5, r1
         3b39c:	e59f0020 	ldr	r0, [pc, #20]	; 3b3c4 <CBaseRingBuffer::__dt(void)+0x3c>
         3b3a0:	e5840000 	str	r0, [r4]
         3b3a4:	e1a00004 	mov	r0, r4
         3b3a8:	e3a01000 	mov	r1, #0	; 0x0
         3b3ac:	eb6ea3a6 	bl	1be424c <CMinBuffer::$__dt(void)>
         3b3b0:	e3150001 	tst	r5, #1	; 0x1
         3b3b4:	11a00004 	movne	r0, r4
         3b3b8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         3b3bc:	1a6e48c7 	bne	1bcd6e0 <$__dl(void *)>
         3b3c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         3b3c4:	0001de88 	andeq	sp, r1, r8, lsl #29
    */
}

