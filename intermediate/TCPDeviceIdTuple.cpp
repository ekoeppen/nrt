#include "include/TCPDeviceIdTuple.h"

/**
 * Symbol: TCPDeviceIdTuple::__ct(void)
 * Address: 00049b80
 */
TCPDeviceIdTuple::TCPDeviceIdTuple(void) {
    /*
         49b80:	e1a0c00d 	mov	ip, sp
         49b84:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         49b88:	e24cb004 	sub	fp, ip, #4	; 0x4
         49b8c:	e3300000 	teq	r0, #0	; 0x0
         49b90:	1a000003 	bne	49ba4 <TCPDeviceIdTuple::__ct(void)+0x24>
         49b94:	e3a00014 	mov	r0, #20	; 0x14
         49b98:	eb6e12e6 	bl	1bce738 <$__nw(unsigned int)>
         49b9c:	e3300000 	teq	r0, #0	; 0x0
         49ba0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         49ba4:	e59f100c 	ldr	r1, [pc, #c]	; 49bb8 <TCPDeviceIdTuple::__ct(void)+0x38>
         49ba8:	e5801000 	str	r1, [r0]
         49bac:	e3a0100c 	mov	r1, #12	; 0xc
         49bb0:	e5801004 	str	r1, [r0, #4]	; fField4
         49bb4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         49bb8:	645f6964 	ldrvsb	r6, [pc], #964	; 49bc0 <TCPServiceInfoRequestTuple::__ct(unsigned long, unsigned long)+0x4>
    */
}

