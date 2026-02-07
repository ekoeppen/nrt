#include "include/TPrecedentsForReading.h"

/**
 * Symbol: TPrecedentsForReading::__ct(void)
 * Address: 00355dc4
 */
TPrecedentsForReading::TPrecedentsForReading(void) {
    /*
        355dc4:	e1a0c00d 	mov	ip, sp
        355dc8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        355dcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        355dd0:	e1b04000 	movs	r4, r0
        355dd4:	1a000003 	bne	355de8 <TPrecedentsForReading::__ct(void)+0x24>
        355dd8:	e3a00010 	mov	r0, #16	; 0x10
        355ddc:	eb61e255 	bl	1bce738 <$__nw(unsigned int)>
        355de0:	e1b04000 	movs	r4, r0
        355de4:	0a000008 	beq	355e0c <TPrecedentsForReading::__ct(void)+0x48>
        355de8:	e1a00004 	mov	r0, r4
        355dec:	e3a01004 	mov	r1, #4	; 0x4
        355df0:	ebfffe46 	bl	355710 <TBucketArray::__ct(long)>
        355df4:	e1a00004 	mov	r0, r4
        355df8:	eb5bea97 	bl	1a5085c <TPrecedentsForReading::$Reset(void)>
        355dfc:	e59f2010 	ldr	r2, [pc, #10]	; 355e14 <TPrecedentsForReading::__ct(void)+0x50>
        355e00:	e59f1010 	ldr	r1, [pc, #10]	; 355e18 <TPrecedentsForReading::__ct(void)+0x54>
        355e04:	e1a00004 	mov	r0, r4
        355e08:	eb61b4ed 	bl	1bc31c4 <$DIYGCRegister__FPvPFPv_vT2>
        355e0c:	e1a00004 	mov	r0, r4
        355e10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        355e14:	0035600c 	eoreqs	r6, r5, ip
        355e18:	00355fc0 	eoreqs	r5, r5, r0, asr #31
    */
}

/**
 * Symbol: TPrecedentsForReading::__dt(void)
 * Address: 00355e1c
 */
TPrecedentsForReading::~TPrecedentsForReading(void) {
    /*
        355e1c:	e1a0c00d 	mov	ip, sp
        355e20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        355e24:	e24cb004 	sub	fp, ip, #4	; 0x4
        355e28:	e1a04000 	mov	r4, r0
        355e2c:	e1a05001 	mov	r5, r1
        355e30:	eb61b4e4 	bl	1bc31c8 <$DIYGCUnregister(void *)>
        355e34:	e1a00004 	mov	r0, r4
        355e38:	e3a01000 	mov	r1, #0	; 0x0
        355e3c:	eb5be23f 	bl	1a4e740 <TBucketArray::$__dt(void)>
        355e40:	e3150001 	tst	r5, #1	; 0x1
        355e44:	11a00004 	movne	r0, r4
        355e48:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        355e4c:	1a61de23 	bne	1bcd6e0 <$__dl(void *)>
        355e50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPrecedentsForReading::Append(RefVar const &)
 * Address: 00355e54
 */
TPrecedentsForReading::Append(RefVar const &) {
    /*
        355e54:	e1a0c00d 	mov	ip, sp
        355e58:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        355e5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        355e60:	e1a04000 	mov	r4, r0
        355e64:	e1a05001 	mov	r5, r1
        355e68:	e5906004 	ldr	r6, [r0, #4]	; fField4
        355e6c:	e2861001 	add	r1, r6, #1	; 0x1
        355e70:	eb5be23d 	bl	1a4e76c <TBucketArray::$SetNumberOfElements(long)>
        355e74:	e5950000 	ldr	r0, [r5]
        355e78:	e1a01006 	mov	r1, r6
        355e7c:	e5905000 	ldr	r5, [r0]
        355e80:	e1a00004 	mov	r0, r4
        355e84:	ebffff6e 	bl	355c44 <TBucketArray::ElementAt(long)>
        355e88:	e5805000 	str	r5, [r0]
        355e8c:	e1a00006 	mov	r0, r6
        355e90:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPrecedentsForReading::Replace(long, RefVar const &)
 * Address: 00355e94
 */
TPrecedentsForReading::Replace(long, RefVar const &) {
    /*
        355e94:	e1a0c00d 	mov	ip, sp
        355e98:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        355e9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        355ea0:	e5922000 	ldr	r2, [r2]
        355ea4:	e5924000 	ldr	r4, [r2]
        355ea8:	ebffff65 	bl	355c44 <TBucketArray::ElementAt(long)>
        355eac:	e5804000 	str	r4, [r0]
        355eb0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPrecedentsForReading::Reset(void)
 * Address: 00355eb4
 */
TPrecedentsForReading::Reset(void) {
    /*
        355eb4:	e3a01000 	mov	r1, #0	; 0x0
        355eb8:	ea5be22b 	b	1a4e76c <TBucketArray::$SetNumberOfElements(long)>
    */
}

/**
 * Symbol: GCMark__21TPrecedentsForReadingSFPv
 * Address: 00355fc0
 */
void TPrecedentsForReading::GCMark() {
    /*
        355fc0:	ea5be1e6 	b	1a4e760 <TPrecedentsForReading::$MarkAllRefs(void)>
    */
}

/**
 * Symbol: TPrecedentsForReading::MarkAllRefs(void)
 * Address: 00355fc4
 */
TPrecedentsForReading::MarkAllRefs(void) {
    /*
        355fc4:	e1a0c00d 	mov	ip, sp
        355fc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        355fcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        355fd0:	e1a04000 	mov	r4, r0
        355fd4:	e3a05000 	mov	r5, #0	; 0x0
        355fd8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        355fdc:	e3500000 	cmp	r0, #0	; 0x0
        355fe0:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        355fe4:	e1a01005 	mov	r1, r5
        355fe8:	e1a00004 	mov	r0, r4
        355fec:	ebffff14 	bl	355c44 <TBucketArray::ElementAt(long)>
        355ff0:	e5900000 	ldr	r0, [r0]
        355ff4:	eb61b471 	bl	1bc31c0 <$DIYGCMark(long)>
        355ff8:	e2855001 	add	r5, r5, #1	; 0x1
        355ffc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        356000:	e1500005 	cmp	r0, r5
        356004:	cafffff6 	bgt	355fe4 <TPrecedentsForReading::MarkAllRefs(void)+0x20>
        356008:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: GCUpdate__21TPrecedentsForReadingSFPv
 * Address: 0035600c
 */
void TPrecedentsForReading::GCUpdate() {
    /*
        35600c:	ea5be1d4 	b	1a4e764 <TPrecedentsForReading::$UpdateAllRefs(void)>
    */
}

/**
 * Symbol: TPrecedentsForReading::UpdateAllRefs(void)
 * Address: 00356010
 */
TPrecedentsForReading::UpdateAllRefs(void) {
    /*
        356010:	e1a0c00d 	mov	ip, sp
        356014:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        356018:	e24cb004 	sub	fp, ip, #4	; 0x4
        35601c:	e1a04000 	mov	r4, r0
        356020:	e3a05000 	mov	r5, #0	; 0x0
        356024:	e5900004 	ldr	r0, [r0, #4]	; fField4
        356028:	e3500000 	cmp	r0, #0	; 0x0
        35602c:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        356030:	e1a01005 	mov	r1, r5
        356034:	e1a00004 	mov	r0, r4
        356038:	ebffff01 	bl	355c44 <TBucketArray::ElementAt(long)>
        35603c:	e1a06000 	mov	r6, r0
        356040:	e5900000 	ldr	r0, [r0]
        356044:	eb61b460 	bl	1bc31cc <$DIYGCUpdate(long)>
        356048:	e2855001 	add	r5, r5, #1	; 0x1
        35604c:	e5860000 	str	r0, [r6]
        356050:	e5940004 	ldr	r0, [r4, #4]	; fField4
        356054:	e1500005 	cmp	r0, r5
        356058:	cafffff4 	bgt	356030 <TPrecedentsForReading::UpdateAllRefs(void)+0x20>
        35605c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

