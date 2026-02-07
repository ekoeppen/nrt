#include "include/EventMasterListItem.h"

/**
 * Symbol: EventMasterListItem::__dt(void)
 * Address: 00130f00
 */
EventMasterListItem::~EventMasterListItem(void) {
    /*
        130f00:	e1a0c00d 	mov	ip, sp
        130f04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        130f08:	e24cb004 	sub	fp, ip, #4	; 0x4
        130f0c:	e1a04000 	mov	r4, r0
        130f10:	e1a05001 	mov	r5, r1
        130f14:	e5900010 	ldr	r0, [r0, #16]	; fField16
        130f18:	e3300000 	teq	r0, #0	; 0x0
        130f1c:	13a01001 	movne	r1, #1	; 0x1
        130f20:	1b6acccd 	blne	1be425c <CSortedList::$__dt(void)>
        130f24:	e3150001 	tst	r5, #1	; 0x1
        130f28:	11a00004 	movne	r0, r4
        130f2c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        130f30:	1a6a71ea 	bne	1bcd6e0 <$__dl(void *)>
        130f34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: EventMasterListItem::Init(void)
 * Address: 00130f38
 */
EventMasterListItem::Init(void) {
    /*
        130f38:	e1a0c00d 	mov	ip, sp
        130f3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        130f40:	e24cb004 	sub	fp, ip, #4	; 0x4
        130f44:	e1a04000 	mov	r4, r0
        130f48:	e2801004 	add	r1, r0, #4	; 0x4
        130f4c:	e3a00000 	mov	r0, #0	; 0x0
        130f50:	eb6ac89d 	bl	1be31cc <CSortedList::$__ct(CItemComparer *)>
        130f54:	e5a40010 	str	r0, [r4, #16]!	; fField16
        130f58:	e3300000 	teq	r0, #0	; 0x0
        130f5c:	13a00000 	movne	r0, #0	; 0x0
        130f60:	03a000e9 	moveq	r0, #233	; 0xe9
        130f64:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        130f68:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

