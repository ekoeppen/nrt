#include "include/TPkSafeToDeactivate.h"

/**
 * Symbol: TPkSafeToDeactivate::__ct(unsigned long)
 * Address: 0015c248
 */
TPkSafeToDeactivate::TPkSafeToDeactivate(unsigned long) {
    /*
        15c248:	e1a0c00d 	mov	ip, sp
        15c24c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15c250:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c254:	e1b04000 	movs	r4, r0
        15c258:	e1a05001 	mov	r5, r1
        15c25c:	1a000003 	bne	15c270 <TPkSafeToDeactivate::__ct(unsigned long)+0x28>
        15c260:	e3a00018 	mov	r0, #24	; 0x18
        15c264:	eb69c933 	bl	1bce738 <$__nw(unsigned int)>
        15c268:	e1b04000 	movs	r4, r0
        15c26c:	0a000008 	beq	15c294 <TPkSafeToDeactivate::__ct(unsigned long)+0x4c>
        15c270:	e1a00004 	mov	r0, r4
        15c274:	eb664d59 	bl	1aef7e0 <TPkBaseEvent::$__ct(void)>
        15c278:	e59f001c 	ldr	r0, [pc, #1c]	; 15c29c <TPkSafeToDeactivate::__ct(unsigned long)+0x54>
        15c27c:	e5840008 	str	r0, [r4, #8]
        15c280:	e3a00000 	mov	r0, #0	; 0x0
        15c284:	e284400c 	add	r4, r4, #12	; 0xc
        15c288:	e8840021 	stmia	r4, {r0, r5}
        15c28c:	e244400c 	sub	r4, r4, #12	; 0xc
        15c290:	e5c40014 	strb	r0, [r4, #20]
        15c294:	e1a00004 	mov	r0, r4
        15c298:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15c29c:	706b7363 	rsbvc	r7, fp, r3, ror #6
    */
}

