#include "include/TCMOFaxLocalId.h"

/**
 * Symbol: TCMOFaxLocalId::__ct(void)
 * Address: 000b4c54
 */
TCMOFaxLocalId::TCMOFaxLocalId(void) {
    /*
         b4c54:	e1a0c00d 	mov	ip, sp
         b4c58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b4c5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4c60:	e1b04000 	movs	r4, r0
         b4c64:	1a000003 	bne	b4c78 <TCMOFaxLocalId::__ct(void)+0x24>
         b4c68:	e3a00024 	mov	r0, #36	; 0x24
         b4c6c:	eb6c66b1 	bl	1bce738 <$__nw(unsigned int)>
         b4c70:	e1b04000 	movs	r4, r0
         b4c74:	0a000008 	beq	b4c9c <TCMOFaxLocalId::__ct(void)+0x48>
         b4c78:	e1a00004 	mov	r0, r4
         b4c7c:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b4c80:	eb6c07a8 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b4c84:	e59f0018 	ldr	r0, [pc, #18]	; b4ca4 <TCMOFaxLocalId::__ct(void)+0x50>
         b4c88:	e5840000 	str	r0, [r4]
         b4c8c:	e3a00018 	mov	r0, #24	; 0x18
         b4c90:	e5840004 	str	r0, [r4, #4]
         b4c94:	e3a00000 	mov	r0, #0	; 0x0
         b4c98:	e5c4000c 	strb	r0, [r4, #12]
         b4c9c:	e1a00004 	mov	r0, r4
         b4ca0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b4ca4:	666c6964 	strvsbt	r6, [ip], -r4, ror #18
    */
}

