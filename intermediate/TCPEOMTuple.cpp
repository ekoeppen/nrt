#include "include/TCPEOMTuple.h"

/**
 * Symbol: TCPEOMTuple::__ct(void)
 * Address: 000495e4
 */
TCPEOMTuple::TCPEOMTuple(void) {
    /*
         495e4:	e1a0c00d 	mov	ip, sp
         495e8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         495ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         495f0:	e3300000 	teq	r0, #0	; 0x0
         495f4:	1a000003 	bne	49608 <TCPEOMTuple::__ct(void)+0x24>
         495f8:	e3a00008 	mov	r0, #8	; 0x8
         495fc:	eb6e144d 	bl	1bce738 <$__nw(unsigned int)>
         49600:	e3300000 	teq	r0, #0	; 0x0
         49604:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         49608:	e59f100c 	ldr	r1, [pc, #c]	; 4961c <TCPEOMTuple::__ct(void)+0x38>
         4960c:	e5801000 	str	r1, [r0]
         49610:	e3a01000 	mov	r1, #0	; 0x0
         49614:	e5801004 	str	r1, [r0, #4]	; fField4
         49618:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         4961c:	6e6f666d 	cdpvs	6, 6, cr6, cr15, cr13, {3}
    */
}

