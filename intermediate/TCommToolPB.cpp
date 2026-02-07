#include "include/TCommToolPB.h"

/**
 * Symbol: TCommToolPB::__ct(unsigned long, unsigned long, unsigned char)
 * Address: 001d9970
 */
TCommToolPB::TCommToolPB(unsigned long, unsigned long, unsigned char) {
    /*
        1d9970:	e1a0c00d 	mov	ip, sp
        1d9974:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d9978:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d997c:	e1b04000 	movs	r4, r0
        1d9980:	e1a06001 	mov	r6, r1
        1d9984:	e1a05002 	mov	r5, r2
        1d9988:	e20370ff 	and	r7, r3, #255	; 0xff
        1d998c:	1a000003 	bne	1d99a0 <TCommToolPB::__ct(unsigned long, unsigned long, unsigned char)+0x30>
        1d9990:	e3a0001c 	mov	r0, #28	; 0x1c
        1d9994:	eb67d367 	bl	1bce738 <$__nw(unsigned int)>
        1d9998:	e1b04000 	movs	r4, r0
        1d999c:	0a000007 	beq	1d99c0 <TCommToolPB::__ct(unsigned long, unsigned long, unsigned char)+0x50>
        1d99a0:	e1a00004 	mov	r0, r4
        1d99a4:	eb67cf40 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        1d99a8:	e1a00004 	mov	r0, r4
        1d99ac:	e3a01001 	mov	r1, #1	; 0x1
        1d99b0:	eb67f037 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        1d99b4:	e5845014 	str	r5, [r4, #20]
        1d99b8:	e5846010 	str	r6, [r4, #16]
        1d99bc:	e5c47018 	strb	r7, [r4, #24]
        1d99c0:	e1a00004 	mov	r0, r4
        1d99c4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

