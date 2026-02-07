#include "include/TCommToolAbortPB.h"

/**
 * Symbol: TCommToolAbortPB::__ct(unsigned long, unsigned long, unsigned char)
 * Address: 001da1cc
 */
TCommToolAbortPB::TCommToolAbortPB(unsigned long, unsigned long, unsigned char) {
    /*
        1da1cc:	e1a0c00d 	mov	ip, sp
        1da1d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1da1d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da1d8:	e1b04000 	movs	r4, r0
        1da1dc:	e1a06001 	mov	r6, r1
        1da1e0:	e1a05002 	mov	r5, r2
        1da1e4:	e20370ff 	and	r7, r3, #255	; 0xff
        1da1e8:	1a000003 	bne	1da1fc <TCommToolAbortPB::__ct(unsigned long, unsigned long, unsigned char)+0x30>
        1da1ec:	e3a00038 	mov	r0, #56	; 0x38
        1da1f0:	eb67d150 	bl	1bce738 <$__nw(unsigned int)>
        1da1f4:	e1b04000 	movs	r4, r0
        1da1f8:	0a000009 	beq	1da224 <TCommToolAbortPB::__ct(unsigned long, unsigned long, unsigned char)+0x58>
        1da1fc:	e1a03007 	mov	r3, r7
        1da200:	e1a02005 	mov	r2, r5
        1da204:	e1a00004 	mov	r0, r4
        1da208:	e3a01010 	mov	r1, #16	; 0x10
        1da20c:	eb614d1b 	bl	1a2d680 <TCommToolPB::$__ct(unsigned long, unsigned long, unsigned char)>
        1da210:	e284001c 	add	r0, r4, #28	; 0x1c
        1da214:	eb685576 	bl	1bef7f4 <TCommToolKillRequest::$__ct(void)>
        1da218:	e2840028 	add	r0, r4, #40	; 0x28
        1da21c:	eb685564 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        1da220:	e5846024 	str	r6, [r4, #36]
        1da224:	e1a00004 	mov	r0, r4
        1da228:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

