#include "include/TCMOFaxPassThru.h"

/**
 * Symbol: TCMOFaxPassThru::__ct(void)
 * Address: 000b4a90
 */
TCMOFaxPassThru::TCMOFaxPassThru(void) {
    /*
         b4a90:	e1a0c00d 	mov	ip, sp
         b4a94:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b4a98:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4a9c:	e1b04000 	movs	r4, r0
         b4aa0:	1a000003 	bne	b4ab4 <TCMOFaxPassThru::__ct(void)+0x24>
         b4aa4:	e3a00010 	mov	r0, #16	; 0x10
         b4aa8:	eb6c6722 	bl	1bce738 <$__nw(unsigned int)>
         b4aac:	e1b04000 	movs	r4, r0
         b4ab0:	0a000008 	beq	b4ad8 <TCMOFaxPassThru::__ct(void)+0x48>
         b4ab4:	e1a00004 	mov	r0, r4
         b4ab8:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b4abc:	eb6c0819 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b4ac0:	e59f0018 	ldr	r0, [pc, #18]	; b4ae0 <TCMOFaxPassThru::__ct(void)+0x50>
         b4ac4:	e5840000 	str	r0, [r4]
         b4ac8:	e3a00004 	mov	r0, #4	; 0x4
         b4acc:	e5840004 	str	r0, [r4, #4]
         b4ad0:	e3a00000 	mov	r0, #0	; 0x0
         b4ad4:	e5c4000c 	strb	r0, [r4, #12]
         b4ad8:	e1a00004 	mov	r0, r4
         b4adc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b4ae0:	66707420 	ldrvsbt	r7, [r0], -r0, lsr #8	; fField8
    */
}

