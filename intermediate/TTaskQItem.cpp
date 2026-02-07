#include "include/TTaskQItem.h"

/**
 * Symbol: TTaskQItem::__ct(void)
 * Address: 003599fc
 */
TTaskQItem::TTaskQItem(void) {
    /*
        3599fc:	e1a0c00d 	mov	ip, sp
        359a00:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        359a04:	e24cb004 	sub	fp, ip, #4	; 0x4
        359a08:	e3300000 	teq	r0, #0	; 0x0
        359a0c:	1a000003 	bne	359a20 <TTaskQItem::__ct(void)+0x24>
        359a10:	e3a00008 	mov	r0, #8	; 0x8
        359a14:	eb61d347 	bl	1bce738 <$__nw(unsigned int)>
        359a18:	e3300000 	teq	r0, #0	; 0x0
        359a1c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        359a20:	e3a01000 	mov	r1, #0	; 0x0
        359a24:	e5801000 	str	r1, [r0]
        359a28:	e5801004 	str	r1, [r0, #4]	; fField4
        359a2c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

