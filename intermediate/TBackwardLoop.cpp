#include "include/TBackwardLoop.h"

/**
 * Symbol: TBackwardLoop::__ct(CList *)
 * Address: 00141438
 */
TBackwardLoop::TBackwardLoop(CList *) {
    /*
        141438:	e1a0c00d 	mov	ip, sp
        14143c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        141440:	e24cb004 	sub	fp, ip, #4	; 0x4
        141444:	e1a04001 	mov	r4, r1
        141448:	e3300000 	teq	r0, #0	; 0x0
        14144c:	1a000003 	bne	141460 <TBackwardLoop::__ct(CList *)+0x28>
        141450:	e3a00008 	mov	r0, #8	; 0x8
        141454:	eb6a34b7 	bl	1bce738 <$__nw(unsigned int)>
        141458:	e3300000 	teq	r0, #0	; 0x0
        14145c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        141460:	e5941000 	ldr	r1, [r4]
        141464:	e5801004 	str	r1, [r0, #4]	; fField4
        141468:	e5804000 	str	r4, [r0]
        14146c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TBackwardLoop::Next(void)
 * Address: 00141470
 */
TBackwardLoop::Next(void) {
    /*
        141470:	e5901004 	ldr	r1, [r0, #4]	; fField4
        141474:	e2411001 	sub	r1, r1, #1	; 0x1
        141478:	e5801004 	str	r1, [r0, #4]	; fField4
        14147c:	ea6538cd 	b	1a8f7b8 <TBackwardLoop::$Current(void)>
    */
}

/**
 * Symbol: TBackwardLoop::Current(void)
 * Address: 00141480
 */
TBackwardLoop::Current(void) {
    /*
        141480:	e5901004 	ldr	r1, [r0, #4]	; fField4
        141484:	e3710001 	cmn	r1, #1	; 0x1
        141488:	d3a00000 	movle	r0, #0	; 0x0
        14148c:	c5900000 	ldrgt	r0, [r0]
        141490:	ca6a93ab 	bgt	1be6344 <CList::$At(long)>
        141494:	e1a0f00e 	mov	pc, lr
    */
}

