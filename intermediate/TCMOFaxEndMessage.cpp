#include "include/TCMOFaxEndMessage.h"

/**
 * Symbol: TCMOFaxEndMessage::__ct(void)
 * Address: 000b4da4
 */
TCMOFaxEndMessage::TCMOFaxEndMessage(void) {
    /*
         b4da4:	e1a0c00d 	mov	ip, sp
         b4da8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b4dac:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4db0:	e1b04000 	movs	r4, r0
         b4db4:	1a000003 	bne	b4dc8 <TCMOFaxEndMessage::__ct(void)+0x24>
         b4db8:	e3a00018 	mov	r0, #24	; 0x18
         b4dbc:	eb6c665d 	bl	1bce738 <$__nw(unsigned int)>
         b4dc0:	e1b04000 	movs	r4, r0
         b4dc4:	0a00000a 	beq	b4df4 <TCMOFaxEndMessage::__ct(void)+0x50>
         b4dc8:	e1a00004 	mov	r0, r4
         b4dcc:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b4dd0:	eb6d4d9c 	bl	1c08448 <TOptionExtended::$__ct(unsigned long)>
         b4dd4:	e59f0020 	ldr	r0, [pc, #20]	; b4dfc <TCMOFaxEndMessage::__ct(void)+0x58>
         b4dd8:	e5840000 	str	r0, [r4]
         b4ddc:	e3a0000c 	mov	r0, #12	; 0xc
         b4de0:	e5840004 	str	r0, [r4, #4]
         b4de4:	e3a00000 	mov	r0, #0	; 0x0
         b4de8:	e5c40014 	strb	r0, [r4, #20]
         b4dec:	e3a00001 	mov	r0, #1	; 0x1
         b4df0:	e5c40015 	strb	r0, [r4, #21]
         b4df4:	e1a00004 	mov	r0, r4
         b4df8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b4dfc:	66656f6d 	strvsbt	r6, [r5], -sp, ror #30
    */
}

