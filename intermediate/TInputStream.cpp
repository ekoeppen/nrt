#include "include/TInputStream.h"

/**
 * Symbol: TInputStream::__ct(void)
 * Address: 000eb360
 */
TInputStream::TInputStream(void) {
    /*
         eb360:	e1a0c00d 	mov	ip, sp
         eb364:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eb368:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb36c:	e1b04000 	movs	r4, r0
         eb370:	1a000003 	bne	eb384 <TInputStream::__ct(void)+0x24>
         eb374:	e3a00f42 	mov	r0, #264	; 0x108
         eb378:	eb6b8cee 	bl	1bce738 <$__nw(unsigned int)>
         eb37c:	e1b04000 	movs	r4, r0
         eb380:	0a000007 	beq	eb3a4 <TInputStream::__ct(void)+0x44>
         eb384:	e3a00001 	mov	r0, #1	; 0x1
         eb388:	e5840004 	str	r0, [r4, #4]
         eb38c:	e59f0018 	ldr	r0, [pc, #18]	; eb3ac <TInputStream::__ct(void)+0x4c>
         eb390:	e5840000 	str	r0, [r4]
         eb394:	e2840008 	add	r0, r4, #8	; 0x8
         eb398:	e28f1f04 	add	r1, pc, #16	; 0x10
         eb39c:	e3a02008 	mov	r2, #8	; 0x8
         eb3a0:	eb6b25aa 	bl	1bb4a50 <$memcpy>
         eb3a4:	e1a00004 	mov	r0, r4
         eb3a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         eb3ac:	0001bb4c 	andeq	fp, r1, ip, asr #22
         eb3b0:	756e6b6e 	strvcb	r6, [lr, -#2926]!
         eb3b4:	6f776e00 	swivs	0x00776e00
    */
}

/**
 * Symbol: TInputStream::__dt(void)
 * Address: 000eb3b8
 */
TInputStream::~TInputStream(void) {
    /*
         eb3b8:	e59f200c 	ldr	r2, [pc, #c]	; eb3cc <TInputStream::__dt(void)+0x14>
         eb3bc:	e3110001 	tst	r1, #1	; 0x1
         eb3c0:	e5802000 	str	r2, [r0]
         eb3c4:	1a6b88c5 	bne	1bcd6e0 <$__dl(void *)>
         eb3c8:	e1a0f00e 	mov	pc, lr
         eb3cc:	0001bb4c 	andeq	fp, r1, ip, asr #22
    */
}

/**
 * Symbol: TInputStream::GetFilename(void)
 * Address: 000eb464
 */
TInputStream::GetFilename(void) {
    /*
         eb464:	e2800008 	add	r0, r0, #8	; 0x8
         eb468:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TInputStream::SetFilename(char *)
 * Address: 000eb46c
 */
TInputStream::SetFilename(char *) {
    /*
         eb46c:	e2800008 	add	r0, r0, #8	; 0x8
         eb470:	e3a020ff 	mov	r2, #255	; 0xff
         eb474:	ea6b2990 	b	1bb5abc <$strncpy>
    */
}

