#include "DDKIncludes/CommAPI/CommOptions.h"

/**
 * Symbol: TCMOEndpointName::__ct(void)
 * Address: 0006cb6c
 */
TCMOEndpointName::TCMOEndpointName() {
    /*
         6cb6c:	e1a0c00d 	mov	ip, sp
         6cb70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6cb74:	e24cb004 	sub	fp, ip, #4	; 0x4
         6cb78:	e1b04000 	movs	r4, r0
         6cb7c:	1a000003 	bne	6cb90 <TCMOEndpointName::__ct(void)+0x24>
         6cb80:	e3a0004c 	mov	r0, #76	; 0x4c
         6cb84:	eb6d86eb 	bl	1bce738 <$__nw(unsigned int)>
         6cb88:	e1b04000 	movs	r4, r0
         6cb8c:	0a00000a 	beq	6cbbc <TCMOEndpointName::__ct(void)+0x50>
         6cb90:	e1a00004 	mov	r0, r4
         6cb94:	e3a01303 	mov	r1, #201326592	; 0xc000000
         6cb98:	eb6d27e2 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         6cb9c:	e59f0020 	ldr	r0, [pc, #20]	; 6cbc4 <TCMOEndpointName::__ct(void)+0x58>
         6cba0:	e5840000 	str	r0, [r4]
         6cba4:	e3a00040 	mov	r0, #64	; 0x40
         6cba8:	e5840004 	str	r0, [r4, #4]
         6cbac:	e284000c 	add	r0, r4, #12	; 0xc
         6cbb0:	e28f1f04 	add	r1, pc, #16	; 0x10
         6cbb4:	e3a02010 	mov	r2, #16	; 0x10
         6cbb8:	eb6d1fa4 	bl	1bb4a50 <$memcpy>
         6cbbc:	e1a00004 	mov	r0, r4
         6cbc0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6cbc4:	656e6470 	strvsb	r6, [lr, -#1136]!
         6cbc8:	54536572 	ldrplb	r6, [r3], -#1394
         6cbcc:	69616c45 	stmvsdb	r1!, {r0, r2, r6, sl, fp, sp, lr}^
         6cbd0:	6e64706f 	cdpvs	0, 6, cr7, cr4, cr15, {3}
         6cbd4:	696e7400 	stmvsdb	lr!, {sl, ip, sp, lr}^
    */
}

