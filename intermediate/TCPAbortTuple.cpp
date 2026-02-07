#include "include/TCPAbortTuple.h"

/**
 * Symbol: TCPAbortTuple::__ct(void)
 * Address: 0004965c
 */
TCPAbortTuple::TCPAbortTuple(void) {
    /*
         4965c:	e1a0c00d 	mov	ip, sp
         49660:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         49664:	e24cb004 	sub	fp, ip, #4	; 0x4
         49668:	e3300000 	teq	r0, #0	; 0x0
         4966c:	1a000003 	bne	49680 <TCPAbortTuple::__ct(void)+0x24>
         49670:	e3a0000c 	mov	r0, #12	; 0xc
         49674:	eb6e142f 	bl	1bce738 <$__nw(unsigned int)>
         49678:	e3300000 	teq	r0, #0	; 0x0
         4967c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         49680:	e59f100c 	ldr	r1, [pc, #c]	; 49694 <TCPAbortTuple::__ct(void)+0x38>
         49684:	e5801000 	str	r1, [r0]
         49688:	e3a01004 	mov	r1, #4	; 0x4
         4968c:	e5801004 	str	r1, [r0, #4]	; fField4
         49690:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         49694:	61627274 	cmnvs	r2, r4, ror r2
    */
}

