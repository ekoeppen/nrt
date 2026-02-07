#include "include/TCMOFaxPageSetUp.h"

/**
 * Symbol: TCMOFaxPageSetUp::__ct(void)
 * Address: 000b4a30
 */
TCMOFaxPageSetUp::TCMOFaxPageSetUp(void) {
    /*
         b4a30:	e1a0c00d 	mov	ip, sp
         b4a34:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b4a38:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4a3c:	e1b04000 	movs	r4, r0
         b4a40:	1a000003 	bne	b4a54 <TCMOFaxPageSetUp::__ct(void)+0x24>
         b4a44:	e3a00018 	mov	r0, #24	; 0x18
         b4a48:	eb6c673a 	bl	1bce738 <$__nw(unsigned int)>
         b4a4c:	e1b04000 	movs	r4, r0
         b4a50:	0a00000b 	beq	b4a84 <TCMOFaxPageSetUp::__ct(void)+0x54>
         b4a54:	e1a00004 	mov	r0, r4
         b4a58:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b4a5c:	eb6c0831 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b4a60:	e59f0024 	ldr	r0, [pc, #24]	; b4a8c <TCMOFaxPageSetUp::__ct(void)+0x5c>
         b4a64:	e5840000 	str	r0, [r4]
         b4a68:	e3a0000c 	mov	r0, #12	; 0xc
         b4a6c:	e5840004 	str	r0, [r4, #4]
         b4a70:	e3a00000 	mov	r0, #0	; 0x0
         b4a74:	e584000c 	str	r0, [r4, #12]
         b4a78:	e5840010 	str	r0, [r4, #16]
         b4a7c:	e3a00003 	mov	r0, #3	; 0x3
         b4a80:	e5840014 	str	r0, [r4, #20]
         b4a84:	e1a00004 	mov	r0, r4
         b4a88:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b4a8c:	66707375 	undefined
    */
}

