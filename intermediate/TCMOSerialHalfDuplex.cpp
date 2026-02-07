#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialHalfDuplex::__ct(void)
 * Address: 001de6c8
 */
TCMOSerialHalfDuplex::TCMOSerialHalfDuplex() {
    /*
        1de6c8:	e1a0c00d 	mov	ip, sp
        1de6cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1de6d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de6d4:	e1b04000 	movs	r4, r0
        1de6d8:	1a000003 	bne	1de6ec <TCMOSerialHalfDuplex::__ct(void)+0x24>
        1de6dc:	e3a00010 	mov	r0, #16	; 0x10
        1de6e0:	eb67c014 	bl	1bce738 <$__nw(unsigned int)>
        1de6e4:	e1b04000 	movs	r4, r0
        1de6e8:	0a000008 	beq	1de710 <TCMOSerialHalfDuplex::__ct(void)+0x48>
        1de6ec:	e1a00004 	mov	r0, r4
        1de6f0:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1de6f4:	eb67610b 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1de6f8:	e59f0018 	ldr	r0, [pc, #18]	; 1de718 <TCMOSerialHalfDuplex::__ct(void)+0x50>
        1de6fc:	e5840000 	str	r0, [r4]
        1de700:	e3a00004 	mov	r0, #4	; 0x4
        1de704:	e5840004 	str	r0, [r4, #4]
        1de708:	e3a00000 	mov	r0, #0	; 0x0
        1de70c:	e5c4000c 	strb	r0, [r4, #12]
        1de710:	e1a00004 	mov	r0, r4
        1de714:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1de718:	31776179 	cmncc	r7, r9, ror r1
    */
}

