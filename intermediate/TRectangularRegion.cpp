#include "include/TRectangularRegion.h"

/**
 * Symbol: TRectangularRegion::__ct(TRect const &)
 * Address: 00197cc8
 */
TRectangularRegion::TRectangularRegion(TRect const &) {
    /*
        197cc8:	e1a0c00d 	mov	ip, sp
        197ccc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        197cd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        197cd4:	e1a04001 	mov	r4, r1
        197cd8:	e3300000 	teq	r0, #0	; 0x0
        197cdc:	1a000003 	bne	197cf0 <TRectangularRegion::__ct(TRect const &)+0x28>
        197ce0:	e3a00010 	mov	r0, #16	; 0x10
        197ce4:	eb68da93 	bl	1bce738 <$__nw(unsigned int)>
        197ce8:	e3300000 	teq	r0, #0	; 0x0
        197cec:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        197cf0:	e2801004 	add	r1, r0, #4	; 0x4
        197cf4:	e5801000 	str	r1, [r0]
        197cf8:	e3a0100c 	mov	r1, #12	; 0xc
        197cfc:	e5c01005 	strb	r1, [r0, #5]	; fField5
        197d00:	e3a01000 	mov	r1, #0	; 0x0
        197d04:	e5c01004 	strb	r1, [r0, #4]	; fField4
        197d08:	e2801008 	add	r1, r0, #8	; 0x8
        197d0c:	e8945000 	ldmia	r4, {ip, lr}
        197d10:	e8815000 	stmia	r1, {ip, lr}
        197d14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

