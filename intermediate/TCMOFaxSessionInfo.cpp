#include "include/TCMOFaxSessionInfo.h"

/**
 * Symbol: TCMOFaxSessionInfo::__ct(void)
 * Address: 000b4b94
 */
TCMOFaxSessionInfo::TCMOFaxSessionInfo(void) {
    /*
         b4b94:	e1a0c00d 	mov	ip, sp
         b4b98:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b4b9c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4ba0:	e1b04000 	movs	r4, r0
         b4ba4:	1a000003 	bne	b4bb8 <TCMOFaxSessionInfo::__ct(void)+0x24>
         b4ba8:	e3a00020 	mov	r0, #32	; 0x20
         b4bac:	eb6c66e1 	bl	1bce738 <$__nw(unsigned int)>
         b4bb0:	e1b04000 	movs	r4, r0
         b4bb4:	0a00000e 	beq	b4bf4 <TCMOFaxSessionInfo::__ct(void)+0x60>
         b4bb8:	e1a00004 	mov	r0, r4
         b4bbc:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b4bc0:	eb6c07d8 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b4bc4:	e59f0030 	ldr	r0, [pc, #30]	; b4bfc <TCMOFaxSessionInfo::__ct(void)+0x68>
         b4bc8:	e5840000 	str	r0, [r4]
         b4bcc:	e3a00014 	mov	r0, #20	; 0x14
         b4bd0:	e5840004 	str	r0, [r4, #4]
         b4bd4:	e3a00000 	mov	r0, #0	; 0x0
         b4bd8:	e584000c 	str	r0, [r4, #12]
         b4bdc:	e3a01002 	mov	r1, #2	; 0x2
         b4be0:	e2844010 	add	r4, r4, #16	; 0x10
         b4be4:	e8840003 	stmia	r4, {r0, r1}
         b4be8:	e5840008 	str	r0, [r4, #8]
         b4bec:	e584000c 	str	r0, [r4, #12]
         b4bf0:	e2444010 	sub	r4, r4, #16	; 0x10
         b4bf4:	e1a00004 	mov	r0, r4
         b4bf8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b4bfc:	66736966 	ldrvsbt	r6, [r3], -r6, ror #18
    */
}

