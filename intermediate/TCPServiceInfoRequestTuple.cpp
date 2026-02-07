#include "include/TCPServiceInfoRequestTuple.h"

/**
 * Symbol: TCPServiceInfoRequestTuple::__ct(unsigned long, unsigned long)
 * Address: 00049bbc
 */
TCPServiceInfoRequestTuple::TCPServiceInfoRequestTuple(unsigned long, unsigned long) {
    /*
         49bbc:	e1a0c00d 	mov	ip, sp
         49bc0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         49bc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         49bc8:	e1a05001 	mov	r5, r1
         49bcc:	e1a04002 	mov	r4, r2
         49bd0:	e3300000 	teq	r0, #0	; 0x0
         49bd4:	1a000003 	bne	49be8 <TCPServiceInfoRequestTuple::__ct(unsigned long, unsigned long)+0x2c>
         49bd8:	e3a00014 	mov	r0, #20	; 0x14
         49bdc:	eb6e12d5 	bl	1bce738 <$__nw(unsigned int)>
         49be0:	e3300000 	teq	r0, #0	; 0x0
         49be4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         49be8:	e59f1018 	ldr	r1, [pc, #18]	; 49c08 <TCPServiceInfoRequestTuple::__ct(unsigned long, unsigned long)+0x4c>
         49bec:	e5801000 	str	r1, [r0]
         49bf0:	e3a0100c 	mov	r1, #12	; 0xc
         49bf4:	e9800022 	stmib	r0, {r1, r5}
         49bf8:	e3a01000 	mov	r1, #0	; 0x0
         49bfc:	e5801010 	str	r1, [r0, #16]	; fField16
         49c00:	e580400c 	str	r4, [r0, #12]	; fField12
         49c04:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         49c08:	73697265 	cmnvc	r9, #1342177286	; 0x50000006
    */
}

