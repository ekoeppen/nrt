#include "include/TRPCInfo.h"

/**
 * Symbol: TRPCInfo::__ct(void)
 * Address: 0012f3bc
 */
TRPCInfo::TRPCInfo(void) {
    /*
        12f3bc:	e1a0c00d 	mov	ip, sp
        12f3c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12f3c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f3c8:	e3300000 	teq	r0, #0	; 0x0
        12f3cc:	1a000003 	bne	12f3e0 <TRPCInfo::__ct(void)+0x24>
        12f3d0:	e3a00008 	mov	r0, #8	; 0x8
        12f3d4:	eb6a7cd7 	bl	1bce738 <$__nw(unsigned int)>
        12f3d8:	e3300000 	teq	r0, #0	; 0x0
        12f3dc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        12f3e0:	e3a01000 	mov	r1, #0	; 0x0
        12f3e4:	e5801000 	str	r1, [r0]
        12f3e8:	e5801004 	str	r1, [r0, #4]	; fField4
        12f3ec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

