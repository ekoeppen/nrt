#include "include/XIPParameterBlock.h"

/**
 * Symbol: XIPParameterBlock::__ct(void)
 * Address: 00277d0c
 */
XIPParameterBlock::XIPParameterBlock(void) {
    /*
        277d0c:	e3300000 	teq	r0, #0	; 0x0
        277d10:	03a00008 	moveq	r0, #8	; 0x8
        277d14:	0a655a87 	beq	1bce738 <$__nw(unsigned int)>
        277d18:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: XIPParameterBlock::__ct(unsigned long, unsigned long)
 * Address: 00277d1c
 */
XIPParameterBlock::XIPParameterBlock(unsigned long, unsigned long) {
    /*
        277d1c:	e1a0c00d 	mov	ip, sp
        277d20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        277d24:	e24cb004 	sub	fp, ip, #4	; 0x4
        277d28:	e1a05001 	mov	r5, r1
        277d2c:	e1a04002 	mov	r4, r2
        277d30:	e3300000 	teq	r0, #0	; 0x0
        277d34:	1a000003 	bne	277d48 <XIPParameterBlock::__ct(unsigned long, unsigned long)+0x2c>
        277d38:	e3a00008 	mov	r0, #8	; 0x8
        277d3c:	eb655a7d 	bl	1bce738 <$__nw(unsigned int)>
        277d40:	e3300000 	teq	r0, #0	; 0x0
        277d44:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        277d48:	e5804004 	str	r4, [r0, #4]	; fField4
        277d4c:	e5805000 	str	r5, [r0]
        277d50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

