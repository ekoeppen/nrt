#include "include/TATABootParamBlock.h"

/**
 * Symbol: TATABootParamBlock::__ct(void)
 * Address: 0004ac08
 */
TATABootParamBlock::TATABootParamBlock(void) {
    /*
         4ac08:	e1a0c00d 	mov	ip, sp
         4ac0c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4ac10:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ac14:	e3300000 	teq	r0, #0	; 0x0
         4ac18:	1a000003 	bne	4ac2c <TATABootParamBlock::__ct(void)+0x24>
         4ac1c:	e3a00014 	mov	r0, #20	; 0x14
         4ac20:	eb6e0ec4 	bl	1bce738 <$__nw(unsigned int)>
         4ac24:	e3300000 	teq	r0, #0	; 0x0
         4ac28:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         4ac2c:	e3a01000 	mov	r1, #0	; 0x0
         4ac30:	e5801000 	str	r1, [r0]
         4ac34:	e5801004 	str	r1, [r0, #4]	; fField4
         4ac38:	e5801008 	str	r1, [r0, #8]	; fField8
         4ac3c:	e580100c 	str	r1, [r0, #12]	; fField12
         4ac40:	e5801010 	str	r1, [r0, #16]	; fField16
         4ac44:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TATABootParamBlock::__dt(void)
 * Address: 0004ac48
 */
TATABootParamBlock::~TATABootParamBlock(void) {
    /*
         4ac48:	e3110001 	tst	r1, #1	; 0x1
         4ac4c:	1a6e0aa3 	bne	1bcd6e0 <$__dl(void *)>
         4ac50:	e1a0f00e 	mov	pc, lr
    */
}

