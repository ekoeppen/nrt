#include "include/TLittlePhys.h"

/**
 * Symbol: TLittlePhys::__ct(void)
 * Address: 0018348c
 */
TLittlePhys::TLittlePhys(void) {
    /*
        18348c:	e1a0c00d 	mov	ip, sp
        183490:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        183494:	e24cb004 	sub	fp, ip, #4	; 0x4
        183498:	e3300000 	teq	r0, #0	; 0x0
        18349c:	1a000003 	bne	1834b0 <TLittlePhys::__ct(void)+0x24>
        1834a0:	e3a0001c 	mov	r0, #28	; 0x1c
        1834a4:	eb692ca3 	bl	1bce738 <$__nw(unsigned int)>
        1834a8:	e3300000 	teq	r0, #0	; 0x0
        1834ac:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1834b0:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1834b4:	e2011c03 	and	r1, r1, #768	; 0x300
        1834b8:	e3811c02 	orr	r1, r1, #512	; 0x200
        1834bc:	e5801010 	str	r1, [r0, #16]	; fField16
        1834c0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

