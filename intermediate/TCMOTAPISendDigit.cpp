#include "include/TCMOTAPISendDigit.h"

/**
 * Symbol: TCMOTAPISendDigit::__ct(void)
 * Address: 0020679c
 */
TCMOTAPISendDigit::TCMOTAPISendDigit(void) {
    /*
        20679c:	e1a0c00d 	mov	ip, sp
        2067a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2067a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2067a8:	e1b04000 	movs	r4, r0
        2067ac:	1a000003 	bne	2067c0 <TCMOTAPISendDigit::__ct(void)+0x24>
        2067b0:	e3a0000c 	mov	r0, #12	; 0xc
        2067b4:	eb671fdf 	bl	1bce738 <$__nw(unsigned int)>
        2067b8:	e1b04000 	movs	r4, r0
        2067bc:	0a000006 	beq	2067dc <TCMOTAPISendDigit::__ct(void)+0x40>
        2067c0:	e1a00004 	mov	r0, r4
        2067c4:	e3a01303 	mov	r1, #201326592	; 0xc000000
        2067c8:	eb66c0d6 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        2067cc:	e59f0010 	ldr	r0, [pc, #10]	; 2067e4 <TCMOTAPISendDigit::__ct(void)+0x48>
        2067d0:	e5840000 	str	r0, [r4]
        2067d4:	e3a00000 	mov	r0, #0	; 0x0
        2067d8:	e5840004 	str	r0, [r4, #4]
        2067dc:	e1a00004 	mov	r0, r4
        2067e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2067e4:	73646774 	cmnvc	r4, #30408704	; 0x1d00000
    */
}

