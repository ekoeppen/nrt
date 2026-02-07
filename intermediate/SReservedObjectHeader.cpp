#include "include/SReservedObjectHeader.h"

/**
 * Symbol: SReservedObjectHeader::__ct(unsigned long, unsigned long, unsigned long)
 * Address: 001a8a68
 */
SReservedObjectHeader::SReservedObjectHeader(unsigned long, unsigned long, unsigned long) {
    /*
        1a8a68:	e1a0c00d 	mov	ip, sp
        1a8a6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a8a70:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a8a74:	e1a06001 	mov	r6, r1
        1a8a78:	e1a05002 	mov	r5, r2
        1a8a7c:	e1a04003 	mov	r4, r3
        1a8a80:	e3300000 	teq	r0, #0	; 0x0
        1a8a84:	1a000003 	bne	1a8a98 <SReservedObjectHeader::__ct(unsigned long, unsigned long, unsigned long)+0x30>
        1a8a88:	e3a00014 	mov	r0, #20	; 0x14
        1a8a8c:	eb689729 	bl	1bce738 <$__nw(unsigned int)>
        1a8a90:	e3300000 	teq	r0, #0	; 0x0
        1a8a94:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1a8a98:	e3e01000 	mvn	r1, #0	; 0x0
        1a8a9c:	e3e02000 	mvn	r2, #0	; 0x0
        1a8aa0:	e5801010 	str	r1, [r0, #16]	; fField16
        1a8aa4:	e2800008 	add	r0, r0, #8	; 0x8
        1a8aa8:	e8800014 	stmia	r0, {r2, r4}
        1a8aac:	e5205004 	str	r5, [r0, -#4]!	; fField4
        1a8ab0:	e5206004 	str	r6, [r0, -#4]!	; fField4
        1a8ab4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

