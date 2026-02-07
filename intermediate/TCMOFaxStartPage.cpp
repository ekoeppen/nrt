#include "include/TCMOFaxStartPage.h"

/**
 * Symbol: TCMOFaxStartPage::__ct(void)
 * Address: 000b4cfc
 */
TCMOFaxStartPage::TCMOFaxStartPage(void) {
    /*
         b4cfc:	e1a0c00d 	mov	ip, sp
         b4d00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b4d04:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4d08:	e1b04000 	movs	r4, r0
         b4d0c:	1a000003 	bne	b4d20 <TCMOFaxStartPage::__ct(void)+0x24>
         b4d10:	e3a00014 	mov	r0, #20	; 0x14
         b4d14:	eb6c6687 	bl	1bce738 <$__nw(unsigned int)>
         b4d18:	e1b04000 	movs	r4, r0
         b4d1c:	0a000006 	beq	b4d3c <TCMOFaxStartPage::__ct(void)+0x40>
         b4d20:	e1a00004 	mov	r0, r4
         b4d24:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b4d28:	eb6d4dc6 	bl	1c08448 <TOptionExtended::$__ct(unsigned long)>
         b4d2c:	e59f0010 	ldr	r0, [pc, #10]	; b4d44 <TCMOFaxStartPage::__ct(void)+0x48>
         b4d30:	e5840000 	str	r0, [r4]
         b4d34:	e3a00008 	mov	r0, #8	; 0x8
         b4d38:	e5840004 	str	r0, [r4, #4]
         b4d3c:	e1a00004 	mov	r0, r4
         b4d40:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b4d44:	66737067 	ldrvsbt	r7, [r3], -r7, rrx
    */
}

