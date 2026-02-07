#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialBitRate::__ct(void)
 * Address: 001de61c
 */
TCMOSerialBitRate::TCMOSerialBitRate() {
    /*
        1de61c:	e1a0c00d 	mov	ip, sp
        1de620:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1de624:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de628:	e1b04000 	movs	r4, r0
        1de62c:	1a000003 	bne	1de640 <TCMOSerialBitRate::__ct(void)+0x24>
        1de630:	e3a00010 	mov	r0, #16	; 0x10
        1de634:	eb67c03f 	bl	1bce738 <$__nw(unsigned int)>
        1de638:	e1b04000 	movs	r4, r0
        1de63c:	0a000008 	beq	1de664 <TCMOSerialBitRate::__ct(void)+0x48>
        1de640:	e1a00004 	mov	r0, r4
        1de644:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1de648:	eb676136 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1de64c:	e59f0018 	ldr	r0, [pc, #18]	; 1de66c <TCMOSerialBitRate::__ct(void)+0x50>
        1de650:	e5840000 	str	r0, [r4]
        1de654:	e3a00004 	mov	r0, #4	; 0x4
        1de658:	e5840004 	str	r0, [r4, #4]
        1de65c:	e3a00d96 	mov	r0, #9600	; 0x2580
        1de660:	e584000c 	str	r0, [r4, #12]
        1de664:	e1a00004 	mov	r0, r4
        1de668:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1de66c:	73627073 	cmnvc	r2, #115	; 0x73
    */
}

