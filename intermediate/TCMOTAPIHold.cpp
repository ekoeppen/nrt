#include "include/TCMOTAPIHold.h"

/**
 * Symbol: TCMOTAPIHold::__ct(void)
 * Address: 00206494
 */
TCMOTAPIHold::TCMOTAPIHold(void) {
    /*
        206494:	e1a0c00d 	mov	ip, sp
        206498:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20649c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2064a0:	e1b04000 	movs	r4, r0
        2064a4:	1a000003 	bne	2064b8 <TCMOTAPIHold::__ct(void)+0x24>
        2064a8:	e3a0000c 	mov	r0, #12	; 0xc
        2064ac:	eb6720a1 	bl	1bce738 <$__nw(unsigned int)>
        2064b0:	e1b04000 	movs	r4, r0
        2064b4:	0a000006 	beq	2064d4 <TCMOTAPIHold::__ct(void)+0x40>
        2064b8:	e1a00004 	mov	r0, r4
        2064bc:	e3a01303 	mov	r1, #201326592	; 0xc000000
        2064c0:	eb66c198 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        2064c4:	e59f0010 	ldr	r0, [pc, #10]	; 2064dc <TCMOTAPIHold::__ct(void)+0x48>
        2064c8:	e5840000 	str	r0, [r4]
        2064cc:	e3a00000 	mov	r0, #0	; 0x0
        2064d0:	e5840004 	str	r0, [r4, #4]
        2064d4:	e1a00004 	mov	r0, r4
        2064d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2064dc:	686f6c64 	stmvsda	pc!, {r2, r5, r6, sl, fp, sp, lr}^
    */
}

