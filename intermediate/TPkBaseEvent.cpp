#include "include/TPkBaseEvent.h"

/**
 * Symbol: TPkBaseEvent::__ct(void)
 * Address: 0015c13c
 */
TPkBaseEvent::TPkBaseEvent(void) {
    /*
        15c13c:	e1a0c00d 	mov	ip, sp
        15c140:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15c144:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c148:	e1b04000 	movs	r4, r0
        15c14c:	1a000003 	bne	15c160 <TPkBaseEvent::__ct(void)+0x24>
        15c150:	e3a00010 	mov	r0, #16	; 0x10
        15c154:	eb69c977 	bl	1bce738 <$__nw(unsigned int)>
        15c158:	e1b04000 	movs	r4, r0
        15c15c:	0a000003 	beq	15c170 <TPkBaseEvent::__ct(void)+0x34>
        15c160:	e1a00004 	mov	r0, r4
        15c164:	eb6a2033 	bl	1be4238 <TAEvent::$__ct(void)>
        15c168:	e59f0008 	ldr	r0, [pc, #8]	; 15c178 <TPkBaseEvent::__ct(void)+0x3c>
        15c16c:	e5840004 	str	r0, [r4, #4]
        15c170:	e1a00004 	mov	r0, r4
        15c174:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        15c178:	70636b6d 	rsbvc	r6, r3, sp, ror #22
    */
}

