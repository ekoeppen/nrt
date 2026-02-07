#include "include/TRegionVar.h"

/**
 * Symbol: TRegionVar::__ct(void)
 * Address: 00197a10
 */
TRegionVar::TRegionVar(void) {
    /*
        197a10:	e1a0c00d 	mov	ip, sp
        197a14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        197a18:	e24cb004 	sub	fp, ip, #4	; 0x4
        197a1c:	e1b04000 	movs	r4, r0
        197a20:	1a000003 	bne	197a34 <TRegionVar::__ct(void)+0x24>
        197a24:	e3a00014 	mov	r0, #20	; 0x14
        197a28:	eb68db42 	bl	1bce738 <$__nw(unsigned int)>
        197a2c:	e1b04000 	movs	r4, r0
        197a30:	0a000008 	beq	197a58 <TRegionVar::__ct(void)+0x48>
        197a34:	eb6414f4 	bl	1a9ce0c <$NewCachedRgn(void)>
        197a38:	e5840000 	str	r0, [r4]
        197a3c:	e3a00001 	mov	r0, #1	; 0x1
        197a40:	e5840004 	str	r0, [r4, #4]
        197a44:	e59f0014 	ldr	r0, [pc, #14]	; 197a60 <TRegionVar::__ct(void)+0x50>
        197a48:	e5840010 	str	r0, [r4, #16]
        197a4c:	e584400c 	str	r4, [r4, #12]
        197a50:	e2840004 	add	r0, r4, #4	; 0x4
        197a54:	eb692188 	bl	1be007c <$AddExceptionHandler>
        197a58:	e1a00004 	mov	r0, r4
        197a5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        197a60:	00197a08 	andeqs	r7, r9, r8, lsl #20
    */
}

/**
 * Symbol: TRegionVar::__ct(TRegion &)
 * Address: 00197a64
 */
TRegionVar::TRegionVar(TRegion &) {
    /*
        197a64:	e1a0c00d 	mov	ip, sp
        197a68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        197a6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        197a70:	e1b04000 	movs	r4, r0
        197a74:	e1a05001 	mov	r5, r1
        197a78:	1a000003 	bne	197a8c <TRegionVar::__ct(TRegion &)+0x28>
        197a7c:	e3a00014 	mov	r0, #20	; 0x14
        197a80:	eb68db2c 	bl	1bce738 <$__nw(unsigned int)>
        197a84:	e1b04000 	movs	r4, r0
        197a88:	0a000009 	beq	197ab4 <TRegionVar::__ct(TRegion &)+0x50>
        197a8c:	e1a00005 	mov	r0, r5
        197a90:	eb642dcf 	bl	1aa31d4 <TRegion::$StealRegion(void)>
        197a94:	e5840000 	str	r0, [r4]
        197a98:	e3a00001 	mov	r0, #1	; 0x1
        197a9c:	e5840004 	str	r0, [r4, #4]
        197aa0:	e59f0014 	ldr	r0, [pc, #14]	; 197abc <TRegionVar::__ct(TRegion &)+0x58>
        197aa4:	e5840010 	str	r0, [r4, #16]
        197aa8:	e584400c 	str	r4, [r4, #12]
        197aac:	e2840004 	add	r0, r4, #4	; 0x4
        197ab0:	eb692171 	bl	1be007c <$AddExceptionHandler>
        197ab4:	e1a00004 	mov	r0, r4
        197ab8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        197abc:	00197a08 	andeqs	r7, r9, r8, lsl #20
    */
}

/**
 * Symbol: TRegionVar::__dt(void)
 * Address: 00197ac0
 */
TRegionVar::~TRegionVar(void) {
    /*
        197ac0:	e1a0c00d 	mov	ip, sp
        197ac4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        197ac8:	e24cb004 	sub	fp, ip, #4	; 0x4
        197acc:	e1a04000 	mov	r4, r0
        197ad0:	e1a05001 	mov	r5, r1
        197ad4:	e2800004 	add	r0, r0, #4	; 0x4
        197ad8:	eb6929a1 	bl	1be2164 <$RemoveExceptionHandler>
        197adc:	e5940000 	ldr	r0, [r4]
        197ae0:	e3300000 	teq	r0, #0	; 0x0
        197ae4:	1b63e354 	blne	1a9083c <$DisposeCachedRgn(Region **)>
        197ae8:	e3150001 	tst	r5, #1	; 0x1
        197aec:	11a00004 	movne	r0, r4
        197af0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        197af4:	1a68d6f9 	bne	1bcd6e0 <$__dl(void *)>
        197af8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRegionVar::operator=(TRegion &)
 * Address: 00197afc
 */
TRegionVar::operator=(TRegion &) {
    /*
        197afc:	e1a0c00d 	mov	ip, sp
        197b00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        197b04:	e24cb004 	sub	fp, ip, #4	; 0x4
        197b08:	e1a04000 	mov	r4, r0
        197b0c:	e1a05001 	mov	r5, r1
        197b10:	e5900000 	ldr	r0, [r0]
        197b14:	eb63e348 	bl	1a9083c <$DisposeCachedRgn(Region **)>
        197b18:	e1a00005 	mov	r0, r5
        197b1c:	eb642dac 	bl	1aa31d4 <TRegion::$StealRegion(void)>
        197b20:	e5840000 	str	r0, [r4]
        197b24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRegionVar::StealRegion(void)
 * Address: 00197b28
 */
TRegionVar::StealRegion(void) {
    /*
        197b28:	e3a02000 	mov	r2, #0	; 0x0
        197b2c:	e5901000 	ldr	r1, [r0]
        197b30:	e5802000 	str	r2, [r0]
        197b34:	e1a00001 	mov	r0, r1
        197b38:	e1a0f00e 	mov	pc, lr
    */
}

