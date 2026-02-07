#include "include/TP3OPassThru.h"

/**
 * Symbol: TP3OPassThru::__ct(unsigned char)
 * Address: 0014eefc
 */
TP3OPassThru::TP3OPassThru(unsigned char) {
    /*
        14eefc:	e1a0c00d 	mov	ip, sp
        14ef00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14ef04:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ef08:	e1b04000 	movs	r4, r0
        14ef0c:	e20150ff 	and	r5, r1, #255	; 0xff
        14ef10:	1a000003 	bne	14ef24 <TP3OPassThru::__ct(unsigned char)+0x28>
        14ef14:	e3a00010 	mov	r0, #16	; 0x10
        14ef18:	eb69fe06 	bl	1bce738 <$__nw(unsigned int)>
        14ef1c:	e1b04000 	movs	r4, r0
        14ef20:	0a000007 	beq	14ef44 <TP3OPassThru::__ct(unsigned char)+0x48>
        14ef24:	e1a00004 	mov	r0, r4
        14ef28:	e3a01303 	mov	r1, #201326592	; 0xc000000
        14ef2c:	eb699efd 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        14ef30:	e59f0014 	ldr	r0, [pc, #14]	; 14ef4c <TP3OPassThru::__ct(unsigned char)+0x50>
        14ef34:	e5840000 	str	r0, [r4]
        14ef38:	e3a00004 	mov	r0, #4	; 0x4
        14ef3c:	e5840004 	str	r0, [r4, #4]
        14ef40:	e5c4500c 	strb	r5, [r4, #12]
        14ef44:	e1a00004 	mov	r0, r4
        14ef48:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14ef4c:	70336e6f 	eorvcs	r6, r3, pc, ror #28
    */
}

