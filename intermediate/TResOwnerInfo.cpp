#include "include/TResOwnerInfo.h"

/**
 * Symbol: TResOwnerInfo::__ct(void)
 * Address: 0012f340
 */
TResOwnerInfo::TResOwnerInfo(void) {
    /*
        12f340:	e1a0c00d 	mov	ip, sp
        12f344:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12f348:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f34c:	e3300000 	teq	r0, #0	; 0x0
        12f350:	1a000003 	bne	12f364 <TResOwnerInfo::__ct(void)+0x24>
        12f354:	e3a00010 	mov	r0, #16	; 0x10
        12f358:	eb6a7cf6 	bl	1bce738 <$__nw(unsigned int)>
        12f35c:	e3300000 	teq	r0, #0	; 0x0
        12f360:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        12f364:	e3a01000 	mov	r1, #0	; 0x0
        12f368:	e5c01004 	strb	r1, [r0, #4]	; fField4
        12f36c:	e5801000 	str	r1, [r0]
        12f370:	e580100c 	str	r1, [r0, #12]	; fField12
        12f374:	e5801008 	str	r1, [r0, #8]	; fField8
        12f378:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TResOwnerInfo::__dt(void)
 * Address: 0012f37c
 */
TResOwnerInfo::~TResOwnerInfo(void) {
    /*
        12f37c:	e1a0c00d 	mov	ip, sp
        12f380:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12f384:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f388:	e1a04000 	mov	r4, r0
        12f38c:	e1a05001 	mov	r5, r1
        12f390:	e5900008 	ldr	r0, [r0, #8]	; fField8
        12f394:	e3300000 	teq	r0, #0	; 0x0
        12f398:	1b6ac745 	blne	1be10b4 <$DisposPtr>
        12f39c:	e1a00004 	mov	r0, r4
        12f3a0:	e3a01000 	mov	r1, #0	; 0x0
        12f3a4:	eb6a7cde 	bl	1bce724 <TUObject::$__dt(void)>
        12f3a8:	e3150001 	tst	r5, #1	; 0x1
        12f3ac:	11a00004 	movne	r0, r4
        12f3b0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        12f3b4:	1a6a78c9 	bne	1bcd6e0 <$__dl(void *)>
        12f3b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

