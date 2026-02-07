#include "include/TCPChangeSpeedRequestTuple.h"

/**
 * Symbol: TCPChangeSpeedRequestTuple::__ct(unsigned long)
 * Address: 00049c90
 */
TCPChangeSpeedRequestTuple::TCPChangeSpeedRequestTuple(unsigned long) {
    /*
         49c90:	e1a0c00d 	mov	ip, sp
         49c94:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         49c98:	e24cb004 	sub	fp, ip, #4	; 0x4
         49c9c:	e1a04001 	mov	r4, r1
         49ca0:	e3300000 	teq	r0, #0	; 0x0
         49ca4:	1a000003 	bne	49cb8 <TCPChangeSpeedRequestTuple::__ct(unsigned long)+0x28>
         49ca8:	e3a0000c 	mov	r0, #12	; 0xc
         49cac:	eb6e12a1 	bl	1bce738 <$__nw(unsigned int)>
         49cb0:	e3300000 	teq	r0, #0	; 0x0
         49cb4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         49cb8:	e59f100c 	ldr	r1, [pc, #c]	; 49ccc <TCPChangeSpeedRequestTuple::__ct(unsigned long)+0x3c>
         49cbc:	e5801000 	str	r1, [r0]
         49cc0:	e3a01004 	mov	r1, #4	; 0x4
         49cc4:	e9800012 	stmib	r0, {r1, r4}
         49cc8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         49ccc:	63737265 	cmnvs	r3, #1342177286	; 0x50000006
    */
}

