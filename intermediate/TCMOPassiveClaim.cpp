#include "DDKIncludes/Communications/CommToolOptions.h"

/**
 * Symbol: TCMOPassiveClaim::__ct(void)
 * Address: 0006ce64
 */
TCMOPassiveClaim::TCMOPassiveClaim() {
    /*
         6ce64:	e1a0c00d 	mov	ip, sp
         6ce68:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6ce6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6ce70:	e1b04000 	movs	r4, r0
         6ce74:	1a000003 	bne	6ce88 <TCMOPassiveClaim::__ct(void)+0x24>
         6ce78:	e3a00010 	mov	r0, #16	; 0x10
         6ce7c:	eb6d862d 	bl	1bce738 <$__nw(unsigned int)>
         6ce80:	e1b04000 	movs	r4, r0
         6ce84:	0a000008 	beq	6ceac <TCMOPassiveClaim::__ct(void)+0x48>
         6ce88:	e1a00004 	mov	r0, r4
         6ce8c:	e3a01303 	mov	r1, #201326592	; 0xc000000
         6ce90:	eb6d2724 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         6ce94:	e59f0018 	ldr	r0, [pc, #18]	; 6ceb4 <TCMOPassiveClaim::__ct(void)+0x50>
         6ce98:	e5840000 	str	r0, [r4]
         6ce9c:	e3a00004 	mov	r0, #4	; 0x4
         6cea0:	e5840004 	str	r0, [r4, #4]
         6cea4:	e3a00000 	mov	r0, #0	; 0x0
         6cea8:	e5c4000c 	strb	r0, [r4, #12]
         6ceac:	e1a00004 	mov	r0, r4
         6ceb0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6ceb4:	6370636d 	cmnvs	r0, #-1275068415	; 0xb4000001
    */
}

