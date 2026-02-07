#include "include/TString255.h"

/**
 * Symbol: TString255::__ct(void)
 * Address: 0025c8ac
 */
TString255::TString255(void) {
    /*
        25c8ac:	e1a0c00d 	mov	ip, sp
        25c8b0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25c8b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c8b8:	e3300000 	teq	r0, #0	; 0x0
        25c8bc:	1a000003 	bne	25c8d0 <TString255::__ct(void)+0x24>
        25c8c0:	e3a00c01 	mov	r0, #256	; 0x100
        25c8c4:	eb65c79b 	bl	1bce738 <$__nw(unsigned int)>
        25c8c8:	e3300000 	teq	r0, #0	; 0x0
        25c8cc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        25c8d0:	e3a01000 	mov	r1, #0	; 0x0
        25c8d4:	e5c01000 	strb	r1, [r0]
        25c8d8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

