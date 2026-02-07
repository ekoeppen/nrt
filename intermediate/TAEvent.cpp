#include "DDKIncludes/CommAPI/Endpoint.h"

/**
 * Symbol: TAEvent::__ct(void)
 * Address: 00025d1c
 */
TAEvent::TAEvent() {
    /*
         25d1c:	e1a0c00d 	mov	ip, sp
         25d20:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         25d24:	e24cb004 	sub	fp, ip, #4	; 0x4
         25d28:	e3300000 	teq	r0, #0	; 0x0
         25d2c:	1a000003 	bne	25d40 <TAEvent::__ct(void)+0x24>
         25d30:	e3a00008 	mov	r0, #8	; 0x8
         25d34:	eb6ea27f 	bl	1bce738 <$__nw(unsigned int)>
         25d38:	e3300000 	teq	r0, #0	; 0x0
         25d3c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         25d40:	e59f1004 	ldr	r1, [pc, #4]	; 25d4c <TAEvent::__ct(void)+0x30>	; TAEvent
         25d44:	e5801000 	str	r1, [r0]
         25d48:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         25d4c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

