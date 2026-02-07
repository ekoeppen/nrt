#include "include/TPkUnregisterEvent.h"

/**
 * Symbol: TPkUnregisterEvent::__ct(unsigned long)
 * Address: 0015c2a0
 */
TPkUnregisterEvent::TPkUnregisterEvent(unsigned long) {
    /*
        15c2a0:	e1a0c00d 	mov	ip, sp
        15c2a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15c2a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c2ac:	e1b04000 	movs	r4, r0
        15c2b0:	e1a05001 	mov	r5, r1
        15c2b4:	1a000003 	bne	15c2c8 <TPkUnregisterEvent::__ct(unsigned long)+0x28>
        15c2b8:	e3a00014 	mov	r0, #20	; 0x14
        15c2bc:	eb69c91d 	bl	1bce738 <$__nw(unsigned int)>
        15c2c0:	e1b04000 	movs	r4, r0
        15c2c4:	0a000007 	beq	15c2e8 <TPkUnregisterEvent::__ct(unsigned long)+0x48>
        15c2c8:	e1a00004 	mov	r0, r4
        15c2cc:	eb664d43 	bl	1aef7e0 <TPkBaseEvent::$__ct(void)>
        15c2d0:	e59f0018 	ldr	r0, [pc, #18]	; 15c2f0 <TPkUnregisterEvent::__ct(unsigned long)+0x50>
        15c2d4:	e5840008 	str	r0, [r4, #8]
        15c2d8:	e3a00000 	mov	r0, #0	; 0x0
        15c2dc:	e284400c 	add	r4, r4, #12	; 0xc
        15c2e0:	e8840021 	stmia	r4, {r0, r5}
        15c2e4:	e244400c 	sub	r4, r4, #12	; 0xc
        15c2e8:	e1a00004 	mov	r0, r4
        15c2ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15c2f0:	75726772 	ldrvcb	r6, [r2, -#1906]!
    */
}

