#include "include/TCPRequestIdTuple.h"

/**
 * Symbol: TCPRequestIdTuple::__ct(void)
 * Address: 00049620
 */
TCPRequestIdTuple::TCPRequestIdTuple(void) {
    /*
         49620:	e1a0c00d 	mov	ip, sp
         49624:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         49628:	e24cb004 	sub	fp, ip, #4	; 0x4
         4962c:	e3300000 	teq	r0, #0	; 0x0
         49630:	1a000003 	bne	49644 <TCPRequestIdTuple::__ct(void)+0x24>
         49634:	e3a00008 	mov	r0, #8	; 0x8
         49638:	eb6e143e 	bl	1bce738 <$__nw(unsigned int)>
         4963c:	e3300000 	teq	r0, #0	; 0x0
         49640:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         49644:	e59f100c 	ldr	r1, [pc, #c]	; 49658 <TCPRequestIdTuple::__ct(void)+0x38>
         49648:	e5801000 	str	r1, [r0]
         4964c:	e3a01000 	mov	r1, #0	; 0x0
         49650:	e5801004 	str	r1, [r0, #4]	; fField4
         49654:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         49658:	725f6964 	subvcs	r6, pc, #1638400	; 0x190000
    */
}

