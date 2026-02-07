#include "include/TBackwardViewListLoop.h"

/**
 * Symbol: TBackwardViewListLoop::__ct(CList *)
 * Address: 002601d8
 */
TBackwardViewListLoop::TBackwardViewListLoop(CList *) {
    /*
        2601d8:	e1a0c00d 	mov	ip, sp
        2601dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2601e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2601e4:	e1a04001 	mov	r4, r1
        2601e8:	e3300000 	teq	r0, #0	; 0x0
        2601ec:	1a000003 	bne	260200 <TBackwardViewListLoop::__ct(CList *)+0x28>
        2601f0:	e3a0000c 	mov	r0, #12	; 0xc
        2601f4:	eb65b94f 	bl	1bce738 <$__nw(unsigned int)>
        2601f8:	e3300000 	teq	r0, #0	; 0x0
        2601fc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        260200:	e5804000 	str	r4, [r0]
        260204:	e5941000 	ldr	r1, [r4]
        260208:	e5801008 	str	r1, [r0, #8]	; fField8
        26020c:	e5801004 	str	r1, [r0, #4]	; fField4
        260210:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TBackwardViewListLoop::Next(void)
 * Address: 00260214
 */
TBackwardViewListLoop::Next(void) {
    /*
        260214:	e5901004 	ldr	r1, [r0, #4]	; fField4
        260218:	e2411001 	sub	r1, r1, #1	; 0x1
        26021c:	e5801004 	str	r1, [r0, #4]	; fField4
        260220:	e3710001 	cmn	r1, #1	; 0x1
        260224:	d3a00000 	movle	r0, #0	; 0x0
        260228:	c5900000 	ldrgt	r0, [r0]
        26022c:	ca661844 	bgt	1be6344 <CList::$At(long)>
        260230:	e1a0f00e 	mov	pc, lr
    */
}

