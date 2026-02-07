#include "include/TConnectionEndEntry.h"

/**
 * Symbol: TConnectionEndEntry::__ct(void)
 * Address: 001245b8
 */
TConnectionEndEntry::TConnectionEndEntry(void) {
    /*
        1245b8:	e1a0c00d 	mov	ip, sp
        1245bc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1245c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1245c4:	e3300000 	teq	r0, #0	; 0x0
        1245c8:	1a000003 	bne	1245dc <TConnectionEndEntry::__ct(void)+0x24>
        1245cc:	e3a0000c 	mov	r0, #12	; 0xc
        1245d0:	eb6aa858 	bl	1bce738 <$__nw(unsigned int)>
        1245d4:	e3300000 	teq	r0, #0	; 0x0
        1245d8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1245dc:	e59f1010 	ldr	r1, [pc, #10]	; 1245f4 <TConnectionEndEntry::__ct(void)+0x3c>
        1245e0:	e5801000 	str	r1, [r0]
        1245e4:	e3a01000 	mov	r1, #0	; 0x0
        1245e8:	e5801004 	str	r1, [r0, #4]	; fField4
        1245ec:	e5c01008 	strb	r1, [r0, #8]	; fField8
        1245f0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1245f4:	0001ec50 	andeq	lr, r1, r0, asr ip
    */
}

/**
 * Symbol: TConnectionEndEntry::__dt(void)
 * Address: 001245f8
 */
TConnectionEndEntry::~TConnectionEndEntry(void) {
    /*
        1245f8:	e1a0c00d 	mov	ip, sp
        1245fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        124600:	e24cb004 	sub	fp, ip, #4	; 0x4
        124604:	e1a04000 	mov	r4, r0
        124608:	e1a05001 	mov	r5, r1
        12460c:	e59f0024 	ldr	r0, [pc, #24]	; 124638 <TConnectionEndEntry::__dt(void)+0x40>
        124610:	e5840000 	str	r0, [r4]
        124614:	e5940004 	ldr	r0, [r4, #4]	; fField4
        124618:	e3300000 	teq	r0, #0	; 0x0
        12461c:	13a01001 	movne	r1, #1	; 0x1
        124620:	1b642429 	blne	1a2d6cc <TConnectionEnd::$__dt(void)>
        124624:	e3150001 	tst	r5, #1	; 0x1
        124628:	11a00004 	movne	r0, r4
        12462c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        124630:	1a6aa42a 	bne	1bcd6e0 <$__dl(void *)>
        124634:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        124638:	0001ec50 	andeq	lr, r1, r0, asr ip
    */
}

