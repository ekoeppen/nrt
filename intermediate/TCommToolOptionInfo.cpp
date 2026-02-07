#include "DDKIncludes/Communications/CommTool.h"

/**
 * Symbol: TCommToolOptionInfo::__ct(void)
 * Address: 0006e2bc
 */
TCommToolOptionInfo::TCommToolOptionInfo() {
    /*
         6e2bc:	e1a0c00d 	mov	ip, sp
         6e2c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         6e2c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6e2c8:	e3300000 	teq	r0, #0	; 0x0
         6e2cc:	1a000003 	bne	6e2e0 <TCommToolOptionInfo::__ct(void)+0x24>
         6e2d0:	e3a00018 	mov	r0, #24	; 0x18
         6e2d4:	eb6d8117 	bl	1bce738 <$__nw(unsigned int)>
         6e2d8:	e3300000 	teq	r0, #0	; 0x0
         6e2dc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         6e2e0:	e3a01000 	mov	r1, #0	; 0x0
         6e2e4:	e3a02002 	mov	r2, #2	; 0x2
         6e2e8:	e8800006 	stmia	r0, {r1, r2}
         6e2ec:	e580100c 	str	r1, [r0, #12]	; fOptionCount
         6e2f0:	e5801010 	str	r1, [r0, #16]	; fOptions
         6e2f4:	e5801014 	str	r1, [r0, #20]	; fCurOptPtr
         6e2f8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

