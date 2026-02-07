#include "include/DeclawingRange.h"

/**
 * Symbol: DeclawingRange::Next(void)
 * Address: 002e3e38
 */
DeclawingRange::Next(void) {
    /*
        2e3e38:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2e3e3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DeclawingRange::__ct(unsigned long, unsigned long, DeclawingRange *)
 * Address: 002e3e40
 */
DeclawingRange::DeclawingRange(unsigned long, unsigned long, DeclawingRange *) {
    /*
        2e3e40:	e1a0c00d 	mov	ip, sp
        2e3e44:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2e3e48:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e3e4c:	e1a06001 	mov	r6, r1
        2e3e50:	e1a05002 	mov	r5, r2
        2e3e54:	e1a04003 	mov	r4, r3
        2e3e58:	e3300000 	teq	r0, #0	; 0x0
        2e3e5c:	1a000003 	bne	2e3e70 <DeclawingRange::__ct(unsigned long, unsigned long, DeclawingRange *)+0x30>
        2e3e60:	e3a0000c 	mov	r0, #12	; 0xc
        2e3e64:	eb63aa33 	bl	1bce738 <$__nw(unsigned int)>
        2e3e68:	e3300000 	teq	r0, #0	; 0x0
        2e3e6c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2e3e70:	e5804008 	str	r4, [r0, #8]	; fField8
        2e3e74:	e5805004 	str	r5, [r0, #4]	; fField4
        2e3e78:	e5806000 	str	r6, [r0]
        2e3e7c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: DeclawingRange::InRange(long)
 * Address: 002e3e80
 */
DeclawingRange::InRange(long) {
    /*
        2e3e80:	e5902000 	ldr	r2, [r0]
        2e3e84:	e1520001 	cmp	r2, r1
        2e3e88:	8a000003 	bhi	2e3e9c <DeclawingRange::InRange(long)+0x1c>
        2e3e8c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e3e90:	e1500001 	cmp	r0, r1
        2e3e94:	83a00001 	movhi	r0, #1	; 0x1
        2e3e98:	8a000000 	bhi	2e3ea0 <DeclawingRange::InRange(long)+0x20>
        2e3e9c:	e3a00000 	mov	r0, #0	; 0x0
        2e3ea0:	e20000ff 	and	r0, r0, #255	; 0xff
        2e3ea4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DeclawingRange::InAnyRange(long)
 * Address: 002e3ea8
 */
DeclawingRange::InAnyRange(long) {
    /*
        2e3ea8:	e1a0c00d 	mov	ip, sp
        2e3eac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e3eb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e3eb4:	e1a04000 	mov	r4, r0
        2e3eb8:	e1a05001 	mov	r5, r1
        2e3ebc:	eb5df486 	bl	1a610dc <DeclawingRange::$InRange(long)>
        2e3ec0:	e3300000 	teq	r0, #0	; 0x0
        2e3ec4:	13a00001 	movne	r0, #1	; 0x1
        2e3ec8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2e3ecc:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2e3ed0:	e3300000 	teq	r0, #0	; 0x0
        2e3ed4:	11a01005 	movne	r1, r5
        2e3ed8:	1afffff5 	bne	2e3eb4 <DeclawingRange::InAnyRange(long)+0xc>
        2e3edc:	e3a00000 	mov	r0, #0	; 0x0
        2e3ee0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

