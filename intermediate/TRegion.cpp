#include "include/TRegion.h"

/**
 * Symbol: TRegion::__ct(TRegionVar &)
 * Address: 00197c44
 */
TRegion::TRegion(TRegionVar &) {
    /*
        197c44:	e1a0c00d 	mov	ip, sp
        197c48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        197c4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        197c50:	e1b04000 	movs	r4, r0
        197c54:	e1a05001 	mov	r5, r1
        197c58:	1a000003 	bne	197c6c <TRegion::__ct(TRegionVar &)+0x28>
        197c5c:	e3a00004 	mov	r0, #4	; 0x4
        197c60:	eb68dab4 	bl	1bce738 <$__nw(unsigned int)>
        197c64:	e1b04000 	movs	r4, r0
        197c68:	0a000002 	beq	197c78 <TRegion::__ct(TRegionVar &)+0x34>
        197c6c:	e1a00005 	mov	r0, r5
        197c70:	eb642d56 	bl	1aa31d0 <TRegionVar::$StealRegion(void)>
        197c74:	e5840000 	str	r0, [r4]
        197c78:	e1a00004 	mov	r0, r4
        197c7c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRegion::__dt(void)
 * Address: 00197c80
 */
TRegion::~TRegion(void) {
    /*
        197c80:	e1a0c00d 	mov	ip, sp
        197c84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        197c88:	e24cb004 	sub	fp, ip, #4	; 0x4
        197c8c:	e1a04000 	mov	r4, r0
        197c90:	e1a05001 	mov	r5, r1
        197c94:	e5900000 	ldr	r0, [r0]
        197c98:	e3300000 	teq	r0, #0	; 0x0
        197c9c:	1b63e2e6 	blne	1a9083c <$DisposeCachedRgn(Region **)>
        197ca0:	e3150001 	tst	r5, #1	; 0x1
        197ca4:	11a00004 	movne	r0, r4
        197ca8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        197cac:	1a68d68b 	bne	1bcd6e0 <$__dl(void *)>
        197cb0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRegion::StealRegion(void)
 * Address: 00197cb4
 */
TRegion::StealRegion(void) {
    /*
        197cb4:	e3a02000 	mov	r2, #0	; 0x0
        197cb8:	e5901000 	ldr	r1, [r0]
        197cbc:	e5802000 	str	r2, [r0]
        197cc0:	e1a00001 	mov	r0, r1
        197cc4:	e1a0f00e 	mov	pc, lr
    */
}

