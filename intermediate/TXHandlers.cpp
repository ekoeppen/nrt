#include "include/TXHandlers.h"

/**
 * Symbol: TXHandlers::__ct(void)
 * Address: 00252af4
 */
TXHandlers::TXHandlers(void) {
    /*
        252af4:	e1a0c00d 	mov	ip, sp
        252af8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        252afc:	e24cb004 	sub	fp, ip, #4	; 0x4
        252b00:	e3300000 	teq	r0, #0	; 0x0
        252b04:	1a000003 	bne	252b18 <TXHandlers::__ct(void)+0x24>
        252b08:	e3a00010 	mov	r0, #16	; 0x10
        252b0c:	eb65ef09 	bl	1bce738 <$__nw(unsigned int)>
        252b10:	e3300000 	teq	r0, #0	; 0x0
        252b14:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        252b18:	e3a01000 	mov	r1, #0	; 0x0
        252b1c:	e5801008 	str	r1, [r0, #8]	; fField8
        252b20:	e5801000 	str	r1, [r0]
        252b24:	e5801004 	str	r1, [r0, #4]	; fField4
        252b28:	e580100c 	str	r1, [r0, #12]	; fField12
        252b2c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

