#include "include/TNBPHeader.h"

/**
 * Symbol: TNBPHeader::Fill(unsigned char *)
 * Address: 00125cb0
 */
TNBPHeader::Fill(unsigned char *) {
    /*
        125cb0:	e1a0c00d 	mov	ip, sp
        125cb4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        125cb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        125cbc:	e1a02000 	mov	r2, r0
        125cc0:	e1a00001 	mov	r0, r1
        125cc4:	e1a01002 	mov	r1, r2
        125cc8:	e3a02002 	mov	r2, #2	; 0x2
        125ccc:	eb6ae4a0 	bl	1bdef54 <$BlockMove>
        125cd0:	e3a00002 	mov	r0, #2	; 0x2
        125cd4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNBPHeader::SetForLookup(unsigned char, unsigned char)
 * Address: 00127f0c
 */
TNBPHeader::SetForLookup(unsigned char, unsigned char) {
    /*
        127f0c:	e20110ff 	and	r1, r1, #255	; 0xff
        127f10:	e20220ff 	and	r2, r2, #255	; 0xff
        127f14:	e5903000 	ldr	r3, [r0]
        127f18:	e3c3320f 	bic	r3, r3, #-268435456	; 0xf0000000
        127f1c:	e1832e02 	orr	r2, r3, r2, lsl #28
        127f20:	e3c2240f 	bic	r2, r2, #251658240	; 0xf000000
        127f24:	e3c228ff 	bic	r2, r2, #16711680	; 0xff0000
        127f28:	e3822401 	orr	r2, r2, #16777216	; 0x1000000
        127f2c:	e1821801 	orr	r1, r2, r1, lsl #16
        127f30:	e5801000 	str	r1, [r0]
        127f34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPHeader::SetForLookupReply(unsigned char)
 * Address: 00128194
 */
TNBPHeader::SetForLookupReply(unsigned char) {
    /*
        128194:	e20110ff 	and	r1, r1, #255	; 0xff
        128198:	e5902000 	ldr	r2, [r0]
        12819c:	e3c2220f 	bic	r2, r2, #-268435456	; 0xf0000000
        1281a0:	e3c228ff 	bic	r2, r2, #16711680	; 0xff0000
        1281a4:	e3822203 	orr	r2, r2, #805306368	; 0x30000000
        1281a8:	e1821801 	orr	r1, r2, r1, lsl #16
        1281ac:	e5801000 	str	r1, [r0]
        1281b0:	e1a0f00e 	mov	pc, lr
    */
}

