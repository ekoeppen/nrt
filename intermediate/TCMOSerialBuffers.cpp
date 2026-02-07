#include "DDKIncludes/Communications/SerialOptions.h"

/**
 * Symbol: TCMOSerialBuffers::__ct(void)
 * Address: 001de554
 */
TCMOSerialBuffers::TCMOSerialBuffers() {
    /*
        1de554:	e1a0c00d 	mov	ip, sp
        1de558:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1de55c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1de560:	e1b04000 	movs	r4, r0
        1de564:	1a000003 	bne	1de578 <TCMOSerialBuffers::__ct(void)+0x24>
        1de568:	e3a00018 	mov	r0, #24	; 0x18
        1de56c:	eb67c071 	bl	1bce738 <$__nw(unsigned int)>
        1de570:	e1b04000 	movs	r4, r0
        1de574:	0a00000b 	beq	1de5a8 <TCMOSerialBuffers::__ct(void)+0x54>
        1de578:	e1a00004 	mov	r0, r4
        1de57c:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1de580:	eb676168 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1de584:	e59f0024 	ldr	r0, [pc, #24]	; 1de5b0 <TCMOSerialBuffers::__ct(void)+0x5c>
        1de588:	e5840000 	str	r0, [r4]
        1de58c:	e3a0000c 	mov	r0, #12	; 0xc
        1de590:	e5840004 	str	r0, [r4, #4]
        1de594:	e3a00c02 	mov	r0, #512	; 0x200
        1de598:	e584000c 	str	r0, [r4, #12]
        1de59c:	e5840010 	str	r0, [r4, #16]
        1de5a0:	e3a00008 	mov	r0, #8	; 0x8
        1de5a4:	e5840014 	str	r0, [r4, #20]
        1de5a8:	e1a00004 	mov	r0, r4
        1de5ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1de5b0:	73627566 	cmnvc	r2, #427819008	; 0x19800000
    */
}

