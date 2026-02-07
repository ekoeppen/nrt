#include "include/UnionIndexData.h"

/**
 * Symbol: UnionIndexData::__ct(void)
 * Address: 002e875c
 */
UnionIndexData::UnionIndexData(void) {
    /*
        2e875c:	e1a0c00d 	mov	ip, sp
        2e8760:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e8764:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8768:	e3300000 	teq	r0, #0	; 0x0
        2e876c:	1a000003 	bne	2e8780 <UnionIndexData::__ct(void)+0x24>
        2e8770:	e3a00084 	mov	r0, #132	; 0x84
        2e8774:	eb6397ef 	bl	1bce738 <$__nw(unsigned int)>
        2e8778:	e3300000 	teq	r0, #0	; 0x0
        2e877c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2e8780:	e3a01000 	mov	r1, #0	; 0x0
        2e8784:	e5801004 	str	r1, [r0, #4]	; fField4
        2e8788:	e2802018 	add	r2, r0, #24	; 0x18
        2e878c:	e5801080 	str	r1, [r0, #128]	; fField128
        2e8790:	e580207c 	str	r2, [r0, #124]	; fField124
        2e8794:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: UnionIndexData::__dt(void)
 * Address: 002e8798
 */
UnionIndexData::~UnionIndexData(void) {
    /*
        2e8798:	e3110001 	tst	r1, #1	; 0x1
        2e879c:	1a6393cf 	bne	1bcd6e0 <$__dl(void *)>
        2e87a0:	e1a0f00e 	mov	pc, lr
    */
}

