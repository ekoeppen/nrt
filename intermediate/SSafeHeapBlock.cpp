#include "include/SSafeHeapBlock.h"

/**
 * Symbol: SSafeHeapBlock::Next(void)
 * Address: 001c5e18
 */
SSafeHeapBlock::Next(void) {
    /*
        1c5e18:	e5901000 	ldr	r1, [r0]
        1c5e1c:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        1c5e20:	e0810000 	add	r0, r1, r0
        1c5e24:	e1a01a00 	mov	r1, r0, lsl #20
        1c5e28:	e1a01a21 	mov	r1, r1, lsr #20
        1c5e2c:	e251ceff 	subs	ip, r1, #4080	; 0xff0
        1c5e30:	235c000c 	cmpcs	ip, #12	; 0xc
        1c5e34:	23a00000 	movcs	r0, #0	; 0x0
        1c5e38:	e1a0f00e 	mov	pc, lr
    */
}

