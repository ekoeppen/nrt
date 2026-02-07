#include "include/MemoryPipe.h"

/**
 * Symbol: MemoryPipe::__ct(void)
 * Address: 000cf7e8
 */
MemoryPipe::MemoryPipe(void) {
    /*
         cf7e8:	e1a0c00d 	mov	ip, sp
         cf7ec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         cf7f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         cf7f4:	e1b04000 	movs	r4, r0
         cf7f8:	1a000003 	bne	cf80c <MemoryPipe::__ct(void)+0x24>
         cf7fc:	e3a00010 	mov	r0, #16	; 0x10
         cf800:	eb6bfbcc 	bl	1bce738 <$__nw(unsigned int)>
         cf804:	e1b04000 	movs	r4, r0
         cf808:	0a000003 	beq	cf81c <MemoryPipe::__ct(void)+0x34>
         cf80c:	e1a00004 	mov	r0, r4
         cf810:	eb6c4e6b 	bl	1be31c4 <CBufferPipe::$__ct(void)>
         cf814:	e59f0008 	ldr	r0, [pc, #8]	; cf824 <MemoryPipe::__ct(void)+0x3c>	; fField8
         cf818:	e5840000 	str	r0, [r4]
         cf81c:	e1a00004 	mov	r0, r4
         cf820:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         cf824:	0001a684 	andeq	sl, r1, r4, lsl #13
    */
}

/**
 * Symbol: MemoryPipe::__dt(void)
 * Address: 000cf828
 */
MemoryPipe::~MemoryPipe(void) {
    /*
         cf828:	e1a0c00d 	mov	ip, sp
         cf82c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         cf830:	e24cb004 	sub	fp, ip, #4	; 0x4
         cf834:	e1a04000 	mov	r4, r0
         cf838:	e1a05001 	mov	r5, r1
         cf83c:	e59f0020 	ldr	r0, [pc, #20]	; cf864 <MemoryPipe::__dt(void)+0x3c>
         cf840:	e5840000 	str	r0, [r4]
         cf844:	e1a00004 	mov	r0, r4
         cf848:	e3a01000 	mov	r1, #0	; 0x0
         cf84c:	eb6c5280 	bl	1be4254 <CBufferPipe::$__dt(void)>
         cf850:	e3150001 	tst	r5, #1	; 0x1
         cf854:	11a00004 	movne	r0, r4
         cf858:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         cf85c:	1a6bf79f 	bne	1bcd6e0 <$__dl(void *)>
         cf860:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         cf864:	0001a684 	andeq	sl, r1, r4, lsl #13
    */
}

/**
 * Symbol: MemoryPipe::FlushRead(void)
 * Address: 000cfad0
 */
MemoryPipe::FlushRead(void) {
    /*
         cfad0:	e5900004 	ldr	r0, [r0, #4]	; fField4
         cfad4:	e3300000 	teq	r0, #0	; 0x0
         cfad8:	01a0f00e 	moveq	pc, lr
         cfadc:	e3a02001 	mov	r2, #1	; 0x1
         cfae0:	e3a01000 	mov	r1, #0	; 0x0
         cfae4:	e5903000 	ldr	r3, [r0]
         cfae8:	e283f038 	add	pc, r3, #56	; 0x38
    */
}

/**
 * Symbol: MemoryPipe::FlushWrite(void)
 * Address: 000d0918
 */
MemoryPipe::FlushWrite(void) {
    /*
         d0918:	e5900008 	ldr	r0, [r0, #8]	; fField8
         d091c:	e3300000 	teq	r0, #0	; 0x0
         d0920:	15901000 	ldrne	r1, [r0]
         d0924:	1281f028 	addne	pc, r1, #40	; 0x28
         d0928:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MemoryPipe::Overflow(void)
 * Address: 000d1614
 */
MemoryPipe::Overflow(void) {
    /*
         d1614:	e5900008 	ldr	r0, [r0, #8]	; fField8
         d1618:	e3300000 	teq	r0, #0	; 0x0
         d161c:	15901000 	ldrne	r1, [r0]
         d1620:	1281f028 	addne	pc, r1, #40	; 0x28
         d1624:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MemoryPipe::Underflow(long, unsigned char &)
 * Address: 000d16c4
 */
MemoryPipe::Underflow(long, unsigned char &) {
    /*
         d16c4:	e3a00000 	mov	r0, #0	; 0x0
         d16c8:	e5c20000 	strb	r0, [r2]
         d16cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MemoryPipe::Reset(void)
 * Address: 000d16d0
 */
MemoryPipe::Reset(void) {
    /*
         d16d0:	e1a0c00d 	mov	ip, sp
         d16d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d16d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         d16dc:	e1a04000 	mov	r4, r0
         d16e0:	eb6c6bde 	bl	1bec660 <CBufferPipe::$Reset(void)>
         d16e4:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         d16e8:	e3300000 	teq	r0, #0	; 0x0
         d16ec:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         d16f0:	e3e02000 	mvn	r2, #0	; 0x0
         d16f4:	e3a01000 	mov	r1, #0	; 0x0
         d16f8:	e5903000 	ldr	r3, [r0]
         d16fc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         d1700:	e283f038 	add	pc, r3, #56	; 0x38
    */
}

