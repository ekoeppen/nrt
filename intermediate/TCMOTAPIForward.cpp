#include "include/TCMOTAPIForward.h"

/**
 * Symbol: TCMOTAPIForward::__ct(void)
 * Address: 002066b8
 */
TCMOTAPIForward::TCMOTAPIForward(void) {
    /*
        2066b8:	e1a0c00d 	mov	ip, sp
        2066bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2066c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2066c4:	e1b04000 	movs	r4, r0
        2066c8:	1a000003 	bne	2066dc <TCMOTAPIForward::__ct(void)+0x24>
        2066cc:	e3a0000c 	mov	r0, #12	; 0xc
        2066d0:	eb672018 	bl	1bce738 <$__nw(unsigned int)>
        2066d4:	e1b04000 	movs	r4, r0
        2066d8:	0a000006 	beq	2066f8 <TCMOTAPIForward::__ct(void)+0x40>
        2066dc:	e1a00004 	mov	r0, r4
        2066e0:	e3a01303 	mov	r1, #201326592	; 0xc000000
        2066e4:	eb66c10f 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        2066e8:	e59f0010 	ldr	r0, [pc, #10]	; 206700 <TCMOTAPIForward::__ct(void)+0x48>
        2066ec:	e5840000 	str	r0, [r4]
        2066f0:	e3a00000 	mov	r0, #0	; 0x0
        2066f4:	e5840004 	str	r0, [r4, #4]
        2066f8:	e1a00004 	mov	r0, r4
        2066fc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        206700:	666f7277 	undefined
    */
}

