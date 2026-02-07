#include "include/TCMOFaxRemoteId.h"

/**
 * Symbol: TCMOFaxRemoteId::__ct(void)
 * Address: 000b4c00
 */
TCMOFaxRemoteId::TCMOFaxRemoteId(void) {
    /*
         b4c00:	e1a0c00d 	mov	ip, sp
         b4c04:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b4c08:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4c0c:	e1b04000 	movs	r4, r0
         b4c10:	1a000003 	bne	b4c24 <TCMOFaxRemoteId::__ct(void)+0x24>
         b4c14:	e3a00024 	mov	r0, #36	; 0x24
         b4c18:	eb6c66c6 	bl	1bce738 <$__nw(unsigned int)>
         b4c1c:	e1b04000 	movs	r4, r0
         b4c20:	0a000008 	beq	b4c48 <TCMOFaxRemoteId::__ct(void)+0x48>
         b4c24:	e1a00004 	mov	r0, r4
         b4c28:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b4c2c:	eb6c07bd 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b4c30:	e59f0018 	ldr	r0, [pc, #18]	; b4c50 <TCMOFaxRemoteId::__ct(void)+0x50>
         b4c34:	e5840000 	str	r0, [r4]
         b4c38:	e3a00018 	mov	r0, #24	; 0x18
         b4c3c:	e5840004 	str	r0, [r4, #4]
         b4c40:	e3a00000 	mov	r0, #0	; 0x0
         b4c44:	e5c4000c 	strb	r0, [r4, #12]
         b4c48:	e1a00004 	mov	r0, r4
         b4c4c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b4c50:	66726964 	ldrvsbt	r6, [r2], -r4, ror #18
    */
}

