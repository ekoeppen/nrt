#include "include/CursorSoupInfo.h"

/**
 * Symbol: CursorSoupInfo::__ct(void)
 * Address: 002cdc44
 */
CursorSoupInfo::CursorSoupInfo(void) {
    /*
        2cdc44:	e1a0c00d 	mov	ip, sp
        2cdc48:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2cdc4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cdc50:	e3300000 	teq	r0, #0	; 0x0
        2cdc54:	1a000003 	bne	2cdc68 <CursorSoupInfo::__ct(void)+0x24>
        2cdc58:	e3a00008 	mov	r0, #8	; 0x8
        2cdc5c:	eb6402b5 	bl	1bce738 <$__nw(unsigned int)>
        2cdc60:	e3300000 	teq	r0, #0	; 0x0
        2cdc64:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2cdc68:	e3a01002 	mov	r1, #2	; 0x2
        2cdc6c:	e5801000 	str	r1, [r0]
        2cdc70:	e5801004 	str	r1, [r0, #4]	; fField4
        2cdc74:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

