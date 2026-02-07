#include "include/TCPServiceInfoResponseTuple.h"

/**
 * Symbol: TCPServiceInfoResponseTuple::__ct(void)
 * Address: 00049c0c
 */
TCPServiceInfoResponseTuple::TCPServiceInfoResponseTuple(void) {
    /*
         49c0c:	e1a0c00d 	mov	ip, sp
         49c10:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         49c14:	e24cb004 	sub	fp, ip, #4	; 0x4
         49c18:	e3300000 	teq	r0, #0	; 0x0
         49c1c:	1a000003 	bne	49c30 <TCPServiceInfoResponseTuple::__ct(void)+0x24>
         49c20:	e3a00014 	mov	r0, #20	; 0x14
         49c24:	eb6e12c3 	bl	1bce738 <$__nw(unsigned int)>
         49c28:	e3300000 	teq	r0, #0	; 0x0
         49c2c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         49c30:	e59f100c 	ldr	r1, [pc, #c]	; 49c44 <TCPServiceInfoResponseTuple::__ct(void)+0x38>
         49c34:	e5801000 	str	r1, [r0]
         49c38:	e3a0100c 	mov	r1, #12	; 0xc
         49c3c:	e5801004 	str	r1, [r0, #4]	; fField4
         49c40:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         49c44:	73697270 	cmnvc	r9, #7	; 0x7
    */
}

