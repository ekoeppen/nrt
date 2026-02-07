#include "include/TCMOTAPIAnswer.h"

/**
 * Symbol: TCMOTAPIAnswer::__ct(void)
 * Address: 00206620
 */
TCMOTAPIAnswer::TCMOTAPIAnswer(void) {
    /*
        206620:	e1a0c00d 	mov	ip, sp
        206624:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        206628:	e24cb004 	sub	fp, ip, #4	; 0x4
        20662c:	e1b04000 	movs	r4, r0
        206630:	1a000003 	bne	206644 <TCMOTAPIAnswer::__ct(void)+0x24>
        206634:	e3a0000c 	mov	r0, #12	; 0xc
        206638:	eb67203e 	bl	1bce738 <$__nw(unsigned int)>
        20663c:	e1b04000 	movs	r4, r0
        206640:	0a000006 	beq	206660 <TCMOTAPIAnswer::__ct(void)+0x40>
        206644:	e1a00004 	mov	r0, r4
        206648:	e3a01303 	mov	r1, #201326592	; 0xc000000
        20664c:	eb66c135 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        206650:	e59f0010 	ldr	r0, [pc, #10]	; 206668 <TCMOTAPIAnswer::__ct(void)+0x48>
        206654:	e5840000 	str	r0, [r4]
        206658:	e3a00000 	mov	r0, #0	; 0x0
        20665c:	e5840004 	str	r0, [r4, #4]
        206660:	e1a00004 	mov	r0, r4
        206664:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        206668:	616e7377 	cmnvs	lr, r7, ror r3
    */
}

