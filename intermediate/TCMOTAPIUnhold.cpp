#include "include/TCMOTAPIUnhold.h"

/**
 * Symbol: TCMOTAPIUnhold::__ct(void)
 * Address: 002064e0
 */
TCMOTAPIUnhold::TCMOTAPIUnhold(void) {
    /*
        2064e0:	e1a0c00d 	mov	ip, sp
        2064e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2064e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2064ec:	e1b04000 	movs	r4, r0
        2064f0:	1a000003 	bne	206504 <TCMOTAPIUnhold::__ct(void)+0x24>
        2064f4:	e3a0000c 	mov	r0, #12	; 0xc
        2064f8:	eb67208e 	bl	1bce738 <$__nw(unsigned int)>
        2064fc:	e1b04000 	movs	r4, r0
        206500:	0a000006 	beq	206520 <TCMOTAPIUnhold::__ct(void)+0x40>
        206504:	e1a00004 	mov	r0, r4
        206508:	e3a01303 	mov	r1, #201326592	; 0xc000000
        20650c:	eb66c185 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        206510:	e59f0010 	ldr	r0, [pc, #10]	; 206528 <TCMOTAPIUnhold::__ct(void)+0x48>
        206514:	e5840000 	str	r0, [r4]
        206518:	e3a00000 	mov	r0, #0	; 0x0
        20651c:	e5840004 	str	r0, [r4, #4]
        206520:	e1a00004 	mov	r0, r4
        206524:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        206528:	756e686f 	strvcb	r6, [lr, -#2159]!
    */
}

