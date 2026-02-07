#include "include/TPkRemoveEvent.h"

/**
 * Symbol: TPkRemoveEvent::__ct(unsigned long, unsigned long, unsigned long)
 * Address: 0015c380
 */
TPkRemoveEvent::TPkRemoveEvent(unsigned long, unsigned long, unsigned long) {
    /*
        15c380:	e1a0c00d 	mov	ip, sp
        15c384:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        15c388:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c38c:	e1b04000 	movs	r4, r0
        15c390:	e1a07001 	mov	r7, r1
        15c394:	e1a06002 	mov	r6, r2
        15c398:	e1a05003 	mov	r5, r3
        15c39c:	1a000003 	bne	15c3b0 <TPkRemoveEvent::__ct(unsigned long, unsigned long, unsigned long)+0x30>
        15c3a0:	e3a0001c 	mov	r0, #28	; 0x1c
        15c3a4:	eb69c8e3 	bl	1bce738 <$__nw(unsigned int)>
        15c3a8:	e1b04000 	movs	r4, r0
        15c3ac:	0a000009 	beq	15c3d8 <TPkRemoveEvent::__ct(unsigned long, unsigned long, unsigned long)+0x58>
        15c3b0:	e1a00004 	mov	r0, r4
        15c3b4:	eb664d09 	bl	1aef7e0 <TPkBaseEvent::$__ct(void)>
        15c3b8:	e59f0020 	ldr	r0, [pc, #20]	; 15c3e0 <TPkRemoveEvent::__ct(unsigned long, unsigned long, unsigned long)+0x60>
        15c3bc:	e5840008 	str	r0, [r4, #8]
        15c3c0:	e3a00000 	mov	r0, #0	; 0x0
        15c3c4:	e284400c 	add	r4, r4, #12	; 0xc
        15c3c8:	e8840081 	stmia	r4, {r0, r7}
        15c3cc:	e584500c 	str	r5, [r4, #12]
        15c3d0:	e5846008 	str	r6, [r4, #8]
        15c3d4:	e244400c 	sub	r4, r4, #12	; 0xc
        15c3d8:	e1a00004 	mov	r0, r4
        15c3dc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        15c3e0:	706b726d 	rsbvc	r7, fp, sp, ror #4
    */
}

