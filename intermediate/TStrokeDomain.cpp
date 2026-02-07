#include "include/TStrokeDomain.h"

/**
 * Symbol: Make__13TStrokeDomainSFP11TController
 * Address: 00220e94
 */
void TStrokeDomain::Make() {
    /*
        220e94:	e1a0c00d 	mov	ip, sp
        220e98:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        220e9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        220ea0:	e1a04000 	mov	r4, r0
        220ea4:	e3a00024 	mov	r0, #36	; 0x24
        220ea8:	eb66b622 	bl	1bce738 <$__nw(unsigned int)>
        220eac:	e1b05000 	movs	r5, r0
        220eb0:	0a000003 	beq	220ec4 <Make__13TStrokeDomainSFP11TController+0x30>
        220eb4:	e1a00005 	mov	r0, r5
        220eb8:	eb64e7a2 	bl	1b5ad48 <TDomain::$__ct(void)>
        220ebc:	e59f0014 	ldr	r0, [pc, #14]	; 220ed8 <Make__13TStrokeDomainSFP11TController+0x44>
        220ec0:	e5850000 	str	r0, [r5]
        220ec4:	e1a01004 	mov	r1, r4
        220ec8:	e1a00005 	mov	r0, r5
        220ecc:	eb652dd7 	bl	1b6c630 <TStrokeDomain::$IStrokeDomain(TController *)>
        220ed0:	e1a00005 	mov	r0, r5
        220ed4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        220ed8:	0001d0f4 	streqd	sp, [r1], -r4
    */
}

/**
 * Symbol: TStrokeDomain::IStrokeDomain(TController *)
 * Address: 00220edc
 */
TStrokeDomain::IStrokeDomain(TController *) {
    /*
        220edc:	e1a0c00d 	mov	ip, sp
        220ee0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        220ee4:	e24cb004 	sub	fp, ip, #4	; 0x4
        220ee8:	e1a04000 	mov	r4, r0
        220eec:	e1a05001 	mov	r5, r1
        220ef0:	e28f3f08 	add	r3, pc, #32	; 0x20
        220ef4:	e59f2024 	ldr	r2, [pc, #24]	; 220f20 <TStrokeDomain::IStrokeDomain(TController *)+0x44>
        220ef8:	eb64fc3e 	bl	1b5fff8 <TDomain::$IDomain(TController *, unsigned long, char *)>
        220efc:	e1a00004 	mov	r0, r4
        220f00:	e59f101c 	ldr	r1, [pc, #1c]	; 220f24 <TStrokeDomain::IStrokeDomain(TController *)+0x48>
        220f04:	eb64e79c 	bl	1b5ad7c <TDomain::$AddPieceType(unsigned long)>
        220f08:	e1a01004 	mov	r1, r4
        220f0c:	e1a00005 	mov	r0, r5
        220f10:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        220f14:	ea650482 	b	1b62124 <TController::$RegisterDomain(TDomain *)>
        220f18:	5374726f 	cmnpl	r4, #-268435450	; 0xf0000006
        220f1c:	6b650000 	blvs	1b60f24 <$Make__11TControllerSFv+0xea8>
        220f20:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
        220f24:	434c494b 	cmpmi	ip, #1228800	; 0x12c000
    */
}

/**
 * Symbol: TStrokeDomain::Dispose(void)
 * Address: 0022105c
 */
TStrokeDomain::Dispose(void) {
    /*
        22105c:	ea64f38e 	b	1b5de9c <TDomain::$Dispose(void)>
    */
}

/**
 * Symbol: TStrokeDomain::Group(TUnit *, dInfoRec *)
 * Address: 00221dc0
 */
TStrokeDomain::Group(TUnit *, dInfoRec *) {
    /*
        221dc0:	e1a0c00d 	mov	ip, sp
        221dc4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        221dc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        221dcc:	e1a05000 	mov	r5, r0
        221dd0:	e1a04001 	mov	r4, r1
        221dd4:	e5916030 	ldr	r6, [r1, #48]
        221dd8:	e2861020 	add	r1, r6, #32	; 0x20
        221ddc:	e1a00004 	mov	r0, r4
        221de0:	eb65114e 	bl	1b66320 <TUnit::$SetBBox(FRect *)>
        221de4:	eb652a06 	bl	1b6c604 <$GetTicks(void)>
        221de8:	e594101c 	ldr	r1, [r4, #28]
        221dec:	e0400001 	sub	r0, r0, r1
        221df0:	e5c40021 	strb	r0, [r4, #33]
        221df4:	e1a00420 	mov	r0, r0, lsr #8
        221df8:	e5c40020 	strb	r0, [r4, #32]
        221dfc:	e1a00006 	mov	r0, r6
        221e00:	eb6525e8 	bl	1b6b5a8 <TStroke::$Done(void)>
        221e04:	e3a09000 	mov	r9, #0	; 0x0
        221e08:	e3300000 	teq	r0, #0	; 0x0
        221e0c:	0a000029 	beq	221eb8 <TStrokeDomain::Group(TUnit *, dInfoRec *)+0xf8>
        221e10:	e5960038 	ldr	r0, [r6, #56]
        221e14:	e594101c 	ldr	r1, [r4, #28]
        221e18:	e0400001 	sub	r0, r0, r1
        221e1c:	e5c40021 	strb	r0, [r4, #33]
        221e20:	e1a00420 	mov	r0, r0, lsr #8
        221e24:	e5c40020 	strb	r0, [r4, #32]
        221e28:	e1a00006 	mov	r0, r6
        221e2c:	e3a01201 	mov	r1, #268435456	; 0x10000000
        221e30:	eb6508f5 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        221e34:	e1a00004 	mov	r0, r4
        221e38:	eb650d11 	bl	1b65284 <TUnit::$GetAreas(void)>
        221e3c:	e1a03000 	mov	r3, r0
        221e40:	e1a08000 	mov	r8, r0
        221e44:	e1a02006 	mov	r2, r6
        221e48:	e1a00005 	mov	r0, r5
        221e4c:	e3a01002 	mov	r1, #2	; 0x2
        221e50:	eb6529fb 	bl	1b6c644 <$Make__11TStrokeUnitSFP7TDomainUlP7TStrokeP6TArray>
        221e54:	e1a07000 	mov	r7, r0
        221e58:	e3380000 	teq	r8, #0	; 0x0
        221e5c:	11a00008 	movne	r0, r8
        221e60:	11a0e00f 	movne	lr, pc
        221e64:	1598f000 	ldrne	pc, [r8]
        221e68:	e3370000 	teq	r7, #0	; 0x0
        221e6c:	0a000011 	beq	221eb8 <TStrokeDomain::Group(TUnit *, dInfoRec *)+0xf8>
        221e70:	e1a00006 	mov	r0, r6
        221e74:	eb64ebea 	bl	1b5ce24 <TArray::$Clone(void)>
        221e78:	e1a01004 	mov	r1, r4
        221e7c:	e1a00007 	mov	r0, r7
        221e80:	e5972000 	ldr	r2, [r7]
        221e84:	e1a0e00f 	mov	lr, pc
        221e88:	e282f054 	add	pc, r2, #84	; 0x54
        221e8c:	e1a00007 	mov	r0, r7
        221e90:	e5971000 	ldr	r1, [r7]
        221e94:	e1a0e00f 	mov	lr, pc
        221e98:	e281f060 	add	pc, r1, #96	; 0x60
        221e9c:	e1a01007 	mov	r1, r7
        221ea0:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        221ea4:	eb64fc8d 	bl	1b610e0 <TController::$NewGroup(TUnit *)>
        221ea8:	e1a00006 	mov	r0, r6
        221eac:	eb6504d1 	bl	1b631f8 <$UnbufferStroke(TStroke *)>
        221eb0:	e3a00001 	mov	r0, #1	; 0x1
        221eb4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        221eb8:	e1a00009 	mov	r0, r9
        221ebc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokeDomain::Classify(TUnit *)
 * Address: 00221ec0
 */
TStrokeDomain::Classify(TUnit *) {
    /*
        221ec0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        221ec4:	ea64fc83 	b	1b610d8 <TController::$NewClassification(TUnit *)>
    */
}

