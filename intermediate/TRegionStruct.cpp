#include "include/TRegionStruct.h"

/**
 * Symbol: TRegionStruct::__ct(void)
 * Address: 00197b3c
 */
TRegionStruct::TRegionStruct(void) {
    /*
        197b3c:	e1a0c00d 	mov	ip, sp
        197b40:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        197b44:	e24cb004 	sub	fp, ip, #4	; 0x4
        197b48:	e1b04000 	movs	r4, r0
        197b4c:	1a000003 	bne	197b60 <TRegionStruct::__ct(void)+0x24>
        197b50:	e3a00004 	mov	r0, #4	; 0x4
        197b54:	eb68daf7 	bl	1bce738 <$__nw(unsigned int)>
        197b58:	e1b04000 	movs	r4, r0
        197b5c:	0a000001 	beq	197b68 <TRegionStruct::__ct(void)+0x2c>
        197b60:	eb6414a9 	bl	1a9ce0c <$NewCachedRgn(void)>
        197b64:	e5840000 	str	r0, [r4]
        197b68:	e1a00004 	mov	r0, r4
        197b6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRegionStruct::__dt(void)
 * Address: 00197b70
 */
TRegionStruct::~TRegionStruct(void) {
    /*
        197b70:	e1a0c00d 	mov	ip, sp
        197b74:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        197b78:	e24cb004 	sub	fp, ip, #4	; 0x4
        197b7c:	e1a04000 	mov	r4, r0
        197b80:	e1a05001 	mov	r5, r1
        197b84:	e5900000 	ldr	r0, [r0]
        197b88:	eb63e32b 	bl	1a9083c <$DisposeCachedRgn(Region **)>
        197b8c:	e3150001 	tst	r5, #1	; 0x1
        197b90:	11a00004 	movne	r0, r4
        197b94:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        197b98:	1a68d6d0 	bne	1bcd6e0 <$__dl(void *)>
        197b9c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRegionStruct::operator=(TRegion &)
 * Address: 00197ba0
 */
TRegionStruct::operator=(TRegion &) {
    /*
        197ba0:	e1a0c00d 	mov	ip, sp
        197ba4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        197ba8:	e24cb004 	sub	fp, ip, #4	; 0x4
        197bac:	e1a04000 	mov	r4, r0
        197bb0:	e1a05001 	mov	r5, r1
        197bb4:	e5900000 	ldr	r0, [r0]
        197bb8:	eb63e31f 	bl	1a9083c <$DisposeCachedRgn(Region **)>
        197bbc:	e1a00005 	mov	r0, r5
        197bc0:	eb642d83 	bl	1aa31d4 <TRegion::$StealRegion(void)>
        197bc4:	e5840000 	str	r0, [r4]
        197bc8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

