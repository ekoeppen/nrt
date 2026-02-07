#include "include/TCPRequestServiceTuple.h"

/**
 * Symbol: TCPRequestServiceTuple::__ct(unsigned long, unsigned long)
 * Address: 00049c48
 */
TCPRequestServiceTuple::TCPRequestServiceTuple(unsigned long, unsigned long) {
    /*
         49c48:	e1a0c00d 	mov	ip, sp
         49c4c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         49c50:	e24cb004 	sub	fp, ip, #4	; 0x4
         49c54:	e1a05001 	mov	r5, r1
         49c58:	e1a04002 	mov	r4, r2
         49c5c:	e3300000 	teq	r0, #0	; 0x0
         49c60:	1a000003 	bne	49c74 <TCPRequestServiceTuple::__ct(unsigned long, unsigned long)+0x2c>
         49c64:	e3a00010 	mov	r0, #16	; 0x10
         49c68:	eb6e12b2 	bl	1bce738 <$__nw(unsigned int)>
         49c6c:	e3300000 	teq	r0, #0	; 0x0
         49c70:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         49c74:	e59f1010 	ldr	r1, [pc, #10]	; 49c8c <TCPRequestServiceTuple::__ct(unsigned long, unsigned long)+0x44>
         49c78:	e5801000 	str	r1, [r0]
         49c7c:	e3a01008 	mov	r1, #8	; 0x8
         49c80:	e9800022 	stmib	r0, {r1, r5}
         49c84:	e580400c 	str	r4, [r0, #12]	; fField12
         49c88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         49c8c:	72657365 	rsbvc	r7, r5, #-1811939327	; 0x94000001
    */
}

