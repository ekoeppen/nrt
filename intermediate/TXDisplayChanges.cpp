#include "include/TXDisplayChanges.h"

/**
 * Symbol: TXDisplayChanges::__ct(void)
 * Address: 0023ab48
 */
TXDisplayChanges::TXDisplayChanges(void) {
    /*
        23ab48:	e1a0c00d 	mov	ip, sp
        23ab4c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23ab50:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ab54:	e3300000 	teq	r0, #0	; 0x0
        23ab58:	1a000003 	bne	23ab6c <TXDisplayChanges::__ct(void)+0x24>
        23ab5c:	e3a0000c 	mov	r0, #12	; 0xc
        23ab60:	eb664ef4 	bl	1bce738 <$__nw(unsigned int)>
        23ab64:	e3300000 	teq	r0, #0	; 0x0
        23ab68:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        23ab6c:	e3a01000 	mov	r1, #0	; 0x0
        23ab70:	e3e02102 	mvn	r2, #-2147483648	; 0x80000000
        23ab74:	e8800006 	stmia	r0, {r1, r2}
        23ab78:	e5801008 	str	r1, [r0, #8]	; fField8
        23ab7c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXDisplayChanges::GetFormatRange( const(TXOffsetPair *))
 * Address: 0023ab80
 */
TXDisplayChanges::GetFormatRange( const(TXOffsetPair *)) {
    /*
        23ab80:	e2800004 	add	r0, r0, #4	; 0x4
        23ab84:	e8901008 	ldmia	r0, {r3, ip}
        23ab88:	e8811008 	stmia	r1, {r3, ip}
        23ab8c:	e1a0f00e 	mov	pc, lr
    */
}

