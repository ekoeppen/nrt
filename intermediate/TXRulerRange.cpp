#include "include/TXRulerRange.h"

/**
 * Symbol: TXRulerRange::__ct(TXChars *, TXRuler *)
 * Address: 00242c68
 */
TXRulerRange::TXRulerRange(TXChars *, TXRuler *) {
    /*
        242c68:	e1a0c00d 	mov	ip, sp
        242c6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        242c70:	e24cb004 	sub	fp, ip, #4	; 0x4
        242c74:	e1b04000 	movs	r4, r0
        242c78:	e1a06001 	mov	r6, r1
        242c7c:	e1a05002 	mov	r5, r2
        242c80:	1a000003 	bne	242c94 <TXRulerRange::__ct(TXChars *, TXRuler *)+0x2c>
        242c84:	e3a0002c 	mov	r0, #44	; 0x2c
        242c88:	eb662eaa 	bl	1bce738 <$__nw(unsigned int)>
        242c8c:	e1b04000 	movs	r4, r0
        242c90:	0a000008 	beq	242cb8 <TXRulerRange::__ct(TXChars *, TXRuler *)+0x50>
        242c94:	e1a00004 	mov	r0, r4
        242c98:	e3a01001 	mov	r1, #1	; 0x1
        242c9c:	eb654760 	bl	1b94a24 <TXObjectRange::$__ct(int)>
        242ca0:	e59f0018 	ldr	r0, [pc, #18]	; 242cc0 <TXRulerRange::__ct(TXChars *, TXRuler *)+0x58>
        242ca4:	e5840000 	str	r0, [r4]
        242ca8:	e3a00001 	mov	r0, #1	; 0x1
        242cac:	e5845024 	str	r5, [r4, #36]	; fField36
        242cb0:	e5846020 	str	r6, [r4, #32]	; fField32
        242cb4:	e5c40028 	strb	r0, [r4, #40]	; fField40
        242cb8:	e1a00004 	mov	r0, r4
        242cbc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        242cc0:	0001c814 	andeq	ip, r1, r4, lsl r8
    */
}

/**
 * Symbol: TXRulerRange::__dt(void)
 * Address: 00242cc4
 */
TXRulerRange::~TXRulerRange(void) {
    /*
        242cc4:	e1a0c00d 	mov	ip, sp
        242cc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        242ccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        242cd0:	e1a04000 	mov	r4, r0
        242cd4:	e1a05001 	mov	r5, r1
        242cd8:	e59f0030 	ldr	r0, [pc, #30]	; 242d10 <TXRulerRange::__dt(void)+0x4c>
        242cdc:	e5840000 	str	r0, [r4]
        242ce0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        242ce4:	e5901000 	ldr	r1, [r0]
        242ce8:	e1a0e00f 	mov	lr, pc
        242cec:	e281f004 	add	pc, r1, #4	; 0x4
        242cf0:	e1a00004 	mov	r0, r4
        242cf4:	e3a01000 	mov	r1, #0	; 0x0
        242cf8:	eb65474a 	bl	1b94a28 <TXObjectRange::$__dt(void)>
        242cfc:	e3150001 	tst	r5, #1	; 0x1
        242d00:	11a00004 	movne	r0, r4
        242d04:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        242d08:	1a662a74 	bne	1bcd6e0 <$__dl(void *)>
        242d0c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        242d10:	0001c814 	andeq	ip, r1, r4, lsl r8
    */
}

/**
 * Symbol: CharRangeToParagRange__12TXRulerRangeCFP8TXOffsetT1
 * Address: 00242d14
 */
void TXRulerRange::CharRangeToParagRange() {
    /*
        242d14:	e1a0c00d 	mov	ip, sp
        242d18:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        242d1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        242d20:	e1a06000 	mov	r6, r0
        242d24:	e1a05001 	mov	r5, r1
        242d28:	e1a04002 	mov	r4, r2
        242d2c:	e5900020 	ldr	r0, [r0, #32]	; fField32
        242d30:	e5911000 	ldr	r1, [r1]
        242d34:	eb654f7b 	bl	1b96b28 <$TXGetParagStartOffset(TXChars *, long)>
        242d38:	e5951000 	ldr	r1, [r5]
        242d3c:	e0410000 	sub	r0, r1, r0
        242d40:	e5850000 	str	r0, [r5]
        242d44:	e5d40004 	ldrb	r0, [r4, #4]	; fField4
        242d48:	e3a08001 	mov	r8, #1	; 0x1
        242d4c:	e3a07000 	mov	r7, #0	; 0x0
        242d50:	e3300000 	teq	r0, #0	; 0x0
        242d54:	0a00000b 	beq	242d88 <CharRangeToParagRange__12TXRulerRangeCFP8TXOffsetT1+0x74>
        242d58:	e5962020 	ldr	r2, [r6, #32]	; fField32
        242d5c:	e5940000 	ldr	r0, [r4]
        242d60:	e2401001 	sub	r1, r0, #1	; 0x1
        242d64:	e1a00002 	mov	r0, r2
        242d68:	e5922000 	ldr	r2, [r2]
        242d6c:	e1a0e00f 	mov	lr, pc
        242d70:	e282f01c 	add	pc, r2, #28	; 0x1c
        242d74:	e1a00800 	mov	r0, r0, lsl #16
        242d78:	e1a00820 	mov	r0, r0, lsr #16
        242d7c:	e330000a 	teq	r0, #10	; 0xa
        242d80:	1330000d 	teqne	r0, #13	; 0xd
        242d84:	0a000005 	beq	242da0 <CharRangeToParagRange__12TXRulerRangeCFP8TXOffsetT1+0x8c>
        242d88:	e5b60020 	ldr	r0, [r6, #32]!	; fField32
        242d8c:	e5941000 	ldr	r1, [r4]
        242d90:	eb654f65 	bl	1b96b2c <$TXGetParagEndOffset(TXChars *, long)>
        242d94:	e5941000 	ldr	r1, [r4]
        242d98:	e0800001 	add	r0, r0, r1
        242d9c:	e5840000 	str	r0, [r4]
        242da0:	e5c57004 	strb	r7, [r5, #4]	; fField4
        242da4:	e5c48004 	strb	r8, [r4, #4]	; fField4
        242da8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerRange::GetReplaceExtraChars(long, long, TXAttrObject **)
 * Address: 00242dac
 */
TXRulerRange::GetReplaceExtraChars(long, long, TXAttrObject **) {
    /*
        242dac:	e1a0c00d 	mov	ip, sp
        242db0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        242db4:	e24cb004 	sub	fp, ip, #4	; 0x4
        242db8:	e1a04000 	mov	r4, r0
        242dbc:	e1a05001 	mov	r5, r1
        242dc0:	e1a06002 	mov	r6, r2
        242dc4:	e1a07003 	mov	r7, r3
        242dc8:	e0422001 	sub	r2, r2, r1
        242dcc:	e1a08002 	mov	r8, r2
        242dd0:	eb65536c 	bl	1b97b88 <TXRulerRange::$GetPendingRuler(long, long)>
        242dd4:	e5870000 	str	r0, [r7]
        242dd8:	e3a07000 	mov	r7, #0	; 0x0
        242ddc:	e3380000 	teq	r8, #0	; 0x0
        242de0:	0a000002 	beq	242df0 <TXRulerRange::GetReplaceExtraChars(long, long, TXAttrObject **)+0x44>
        242de4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        242de8:	e3500001 	cmp	r0, #1	; 0x1
        242dec:	ca000001 	bgt	242df8 <TXRulerRange::GetReplaceExtraChars(long, long, TXAttrObject **)+0x4c>
        242df0:	e1a00007 	mov	r0, r7
        242df4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        242df8:	e24dd020 	sub	sp, sp, #32	; 0x20
        242dfc:	e1a0300d 	mov	r3, sp
        242e00:	e1a02008 	mov	r2, r8
        242e04:	e1a01005 	mov	r1, r5
        242e08:	e1a00004 	mov	r0, r4
        242e0c:	eb650d48 	bl	1b86334 <$SectRanges__8TXRangesCFlT1P12TXSectRanges>
        242e10:	e59d0018 	ldr	r0, [sp, #24]
        242e14:	e3300000 	teq	r0, #0	; 0x0
        242e18:	059d0014 	ldreq	r0, [sp, #20]
        242e1c:	02800001 	addeq	r0, r0, #1	; 0x1
        242e20:	058d0014 	streq	r0, [sp, #20]
        242e24:	e59d0000 	ldr	r0, [sp]
        242e28:	e59d1014 	ldr	r1, [sp, #20]
        242e2c:	e1310000 	teq	r1, r0
        242e30:	01a00007 	moveq	r0, r7
        242e34:	0a000002 	beq	242e44 <TXRulerRange::GetReplaceExtraChars(long, long, TXAttrObject **)+0x98>
        242e38:	e1a01006 	mov	r1, r6
        242e3c:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        242e40:	eb654f39 	bl	1b96b2c <$TXGetParagEndOffset(TXChars *, long)>
        242e44:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerRange::FreeData(unsigned char)
 * Address: 00242e48
 */
TXRulerRange::FreeData(unsigned char) {
    /*
        242e48:	e1a0c00d 	mov	ip, sp
        242e4c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        242e50:	e24cb004 	sub	fp, ip, #4	; 0x4
        242e54:	e1a04000 	mov	r4, r0
        242e58:	e20160ff 	and	r6, r1, #255	; 0xff
        242e5c:	e24dd008 	sub	sp, sp, #8	; 0x8
        242e60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        242e64:	e3300000 	teq	r0, #0	; 0x0
        242e68:	0a00000b 	beq	242e9c <TXRulerRange::FreeData(unsigned char)+0x54>
        242e6c:	e3a00000 	mov	r0, #0	; 0x0
        242e70:	e5945024 	ldr	r5, [r4, #36]	; fField36
        242e74:	e58d0000 	str	r0, [sp]
        242e78:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        242e7c:	e1a00004 	mov	r0, r4
        242e80:	e89d0006 	ldmia	sp, {r1, r2}
        242e84:	eb6546ea 	bl	1b94a34 <TXObjectRange::$OffsetToObject(TXOffset)>
        242e88:	e1a01000 	mov	r1, r0
        242e8c:	e1a00005 	mov	r0, r5
        242e90:	e5952000 	ldr	r2, [r5]
        242e94:	e1a0e00f 	mov	lr, pc
        242e98:	e282f028 	add	pc, r2, #40	; 0x28
        242e9c:	e1a01006 	mov	r1, r6
        242ea0:	e1a00004 	mov	r0, r4
        242ea4:	eb6546e1 	bl	1b94a30 <TXObjectRange::$FreeData(unsigned char)>
        242ea8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerRange::GetPendingRuler(long, long)
 * Address: 00242eac
 */
TXRulerRange::GetPendingRuler(long, long) {
    /*
        242eac:	e1a0c00d 	mov	ip, sp
        242eb0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        242eb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        242eb8:	e1a04000 	mov	r4, r0
        242ebc:	e1a05001 	mov	r5, r1
        242ec0:	e3a06000 	mov	r6, #0	; 0x0
        242ec4:	e3320000 	teq	r2, #0	; 0x0
        242ec8:	1a000035 	bne	242fa4 <TXRulerRange::GetPendingRuler(long, long)+0xf8>
        242ecc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        242ed0:	e5901000 	ldr	r1, [r0]
        242ed4:	e1a0e00f 	mov	lr, pc
        242ed8:	e281f004 	add	pc, r1, #4	; 0x4
        242edc:	e1b07000 	movs	r7, r0
        242ee0:	0a00000f 	beq	242f24 <TXRulerRange::GetPendingRuler(long, long)+0x78>
        242ee4:	e1350007 	teq	r5, r7
        242ee8:	1a00002d 	bne	242fa4 <TXRulerRange::GetPendingRuler(long, long)+0xf8>
        242eec:	e2451001 	sub	r1, r5, #1	; 0x1
        242ef0:	e5942020 	ldr	r2, [r4, #32]	; fField32
        242ef4:	e1a00002 	mov	r0, r2
        242ef8:	e5922000 	ldr	r2, [r2]
        242efc:	e1a0e00f 	mov	lr, pc
        242f00:	e282f01c 	add	pc, r2, #28	; 0x1c
        242f04:	e1a00800 	mov	r0, r0, lsl #16
        242f08:	e1a00820 	mov	r0, r0, lsr #16
        242f0c:	e330000a 	teq	r0, #10	; 0xa
        242f10:	1330000d 	teqne	r0, #13	; 0xd
        242f14:	03a00001 	moveq	r0, #1	; 0x1
        242f18:	13a00000 	movne	r0, #0	; 0x0
        242f1c:	e31000ff 	tst	r0, #255	; 0xff
        242f20:	0a00001f 	beq	242fa4 <TXRulerRange::GetPendingRuler(long, long)+0xf8>
        242f24:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
        242f28:	e3300000 	teq	r0, #0	; 0x0
        242f2c:	0a00001a 	beq	242f9c <TXRulerRange::GetPendingRuler(long, long)+0xf0>
        242f30:	e5c46028 	strb	r6, [r4, #40]	; fField40
        242f34:	e24dd008 	sub	sp, sp, #8	; 0x8
        242f38:	e3370000 	teq	r7, #0	; 0x0
        242f3c:	0a00000b 	beq	242f70 <TXRulerRange::GetPendingRuler(long, long)+0xc4>
        242f40:	e5947024 	ldr	r7, [r4, #36]	; fField36
        242f44:	e58d5000 	str	r5, [sp]
        242f48:	e5cd6004 	strb	r6, [sp, #4]	; fField4
        242f4c:	e1a00004 	mov	r0, r4
        242f50:	e89d0006 	ldmia	sp, {r1, r2}
        242f54:	eb6546b6 	bl	1b94a34 <TXObjectRange::$OffsetToObject(TXOffset)>
        242f58:	e1a01000 	mov	r1, r0
        242f5c:	e1a00007 	mov	r0, r7
        242f60:	e5972000 	ldr	r2, [r7]
        242f64:	e1a0e00f 	mov	lr, pc
        242f68:	e282f028 	add	pc, r2, #40	; 0x28
        242f6c:	ea000009 	b	242f98 <TXRulerRange::GetPendingRuler(long, long)+0xec>
        242f70:	e5940024 	ldr	r0, [r4, #36]	; fField36
        242f74:	e1a05000 	mov	r5, r0
        242f78:	e5901000 	ldr	r1, [r0]
        242f7c:	e1a0e00f 	mov	lr, pc
        242f80:	e281f00c 	add	pc, r1, #12	; 0xc
        242f84:	e5840024 	str	r0, [r4, #36]	; fField36
        242f88:	e1a00005 	mov	r0, r5
        242f8c:	e5951000 	ldr	r1, [r5]
        242f90:	e1a0e00f 	mov	lr, pc
        242f94:	e281f004 	add	pc, r1, #4	; 0x4
        242f98:	e28dd008 	add	sp, sp, #8	; 0x8
        242f9c:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        242fa0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        242fa4:	e1a00006 	mov	r0, r6
        242fa8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerRange::InvalidatePendingRuler(long, long)
 * Address: 00242fac
 */
TXRulerRange::InvalidatePendingRuler(long, long) {
    /*
        242fac:	e1a0c00d 	mov	ip, sp
        242fb0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        242fb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        242fb8:	e1a04000 	mov	r4, r0
        242fbc:	e0815002 	add	r5, r1, r2
        242fc0:	eb650cd9 	bl	1b8632c <TXRanges::$GetLastRangeEnd( const(void))>
        242fc4:	e1300005 	teq	r0, r5
        242fc8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        242fcc:	e1a01005 	mov	r1, r5
        242fd0:	e1a00004 	mov	r0, r4
        242fd4:	e3a02000 	mov	r2, #0	; 0x0
        242fd8:	eb6552ea 	bl	1b97b88 <TXRulerRange::$GetPendingRuler(long, long)>
        242fdc:	e3300000 	teq	r0, #0	; 0x0
        242fe0:	03a00001 	moveq	r0, #1	; 0x1
        242fe4:	05c40028 	streqb	r0, [r4, #40]	; fField40
        242fe8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerRange::NukePendingRuler(void)
 * Address: 00242fec
 */
TXRulerRange::NukePendingRuler(void) {
    /*
        242fec:	e3a01001 	mov	r1, #1	; 0x1
        242ff0:	e5c01028 	strb	r1, [r0, #40]	; fField40
        242ff4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXRulerRange::OffsetToObject(TXOffset)
 * Address: 00242ff8
 */
TXRulerRange::OffsetToObject(TXOffset) {
    /*
        242ff8:	e1a0c00d 	mov	ip, sp
        242ffc:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        243000:	e24cb004 	sub	fp, ip, #4	; 0x4
        243004:	e3a02000 	mov	r2, #0	; 0x0
        243008:	e24b1018 	sub	r1, fp, #24	; 0x18
        24300c:	e8910003 	ldmia	r1, {r0, r1}
        243010:	eb6552dc 	bl	1b97b88 <TXRulerRange::$GetPendingRuler(long, long)>
        243014:	e3300000 	teq	r0, #0	; 0x0
        243018:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        24301c:	e24b2018 	sub	r2, fp, #24	; 0x18
        243020:	e8920007 	ldmia	r2, {r0, r1, r2}
        243024:	eb654682 	bl	1b94a34 <TXObjectRange::$OffsetToObject(TXOffset)>
        243028:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerRange::UpdateRangeObjects(long, long, TXAttrValues const *, long)
 * Address: 0024302c
 */
TXRulerRange::UpdateRangeObjects(long, long, TXAttrValues const *, long) {
    /*
        24302c:	e1a0c00d 	mov	ip, sp
        243030:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        243034:	e24cb004 	sub	fp, ip, #4	; 0x4
        243038:	e1a06000 	mov	r6, r0
        24303c:	e1a05001 	mov	r5, r1
        243040:	e1a04002 	mov	r4, r2
        243044:	e1a07003 	mov	r7, r3
        243048:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        24304c:	eb6552cd 	bl	1b97b88 <TXRulerRange::$GetPendingRuler(long, long)>
        243050:	e3300000 	teq	r0, #0	; 0x0
        243054:	0a000004 	beq	24306c <TXRulerRange::UpdateRangeObjects(long, long, TXAttrValues const *, long)+0x40>
        243058:	e1a02008 	mov	r2, r8
        24305c:	e1a01007 	mov	r1, r7
        243060:	eb650cbe 	bl	1b86360 <TXAttrObject::$Update(TXAttrValues const *, long)>
        243064:	e3a00000 	mov	r0, #0	; 0x0
        243068:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        24306c:	e1a02004 	mov	r2, r4
        243070:	e1a01005 	mov	r1, r5
        243074:	e1a00006 	mov	r0, r6
        243078:	eb6552c3 	bl	1b97b8c <TXRulerRange::$InvalidatePendingRuler(long, long)>
        24307c:	e1a03008 	mov	r3, r8
        243080:	e92d0008 	stmdb	sp!, {r3}
        243084:	e1a03007 	mov	r3, r7
        243088:	e1a02004 	mov	r2, r4
        24308c:	e1a01005 	mov	r1, r5
        243090:	e1a00006 	mov	r0, r6
        243094:	eb654674 	bl	1b94a6c <TXObjectRange::$UpdateRangeObjects(long, long, TXAttrValues const *, long)>
        243098:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerRange::ValidateRuler(long)
 * Address: 0024309c
 */
TXRulerRange::ValidateRuler(long) {
    /*
        24309c:	e1a0c00d 	mov	ip, sp
        2430a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2430a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2430a8:	e1a04000 	mov	r4, r0
        2430ac:	e1b05001 	movs	r5, r1
        2430b0:	e3a07001 	mov	r7, #1	; 0x1
        2430b4:	0a00000e 	beq	2430f4 <TXRulerRange::ValidateRuler(long)+0x58>
        2430b8:	e1a01005 	mov	r1, r5
        2430bc:	e1a00004 	mov	r0, r4
        2430c0:	eb650c93 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        2430c4:	e2406001 	sub	r6, r0, #1	; 0x1
        2430c8:	e1a01006 	mov	r1, r6
        2430cc:	e5942020 	ldr	r2, [r4, #32]	; fField32
        2430d0:	e1a00002 	mov	r0, r2
        2430d4:	e5922000 	ldr	r2, [r2]
        2430d8:	e1a0e00f 	mov	lr, pc
        2430dc:	e282f01c 	add	pc, r2, #28	; 0x1c
        2430e0:	e1a00800 	mov	r0, r0, lsl #16
        2430e4:	e1a00820 	mov	r0, r0, lsr #16
        2430e8:	e330000a 	teq	r0, #10	; 0xa
        2430ec:	1330000d 	teqne	r0, #13	; 0xd
        2430f0:	1a000001 	bne	2430fc <TXRulerRange::ValidateRuler(long)+0x60>
        2430f4:	e1a00007 	mov	r0, r7
        2430f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2430fc:	e3a07000 	mov	r7, #0	; 0x0
        243100:	e1a01005 	mov	r1, r5
        243104:	e1a00004 	mov	r0, r4
        243108:	eb650c82 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        24310c:	e2800001 	add	r0, r0, #1	; 0x1
        243110:	e3a03001 	mov	r3, #1	; 0x1
        243114:	e3a02000 	mov	r2, #0	; 0x0
        243118:	e92d000c 	stmdb	sp!, {r2, r3}
        24311c:	e1a03000 	mov	r3, r0
        243120:	e1a02000 	mov	r2, r0
        243124:	e1a01006 	mov	r1, r6
        243128:	e1a00004 	mov	r0, r4
        24312c:	eb65464c 	bl	1b94a64 <TXObjectRange::$ReplaceRange(long, long, long, TXAttrObject *, unsigned char)>
        243130:	e28dd008 	add	sp, sp, #8	; 0x8
        243134:	eaffffee 	b	2430f4 <TXRulerRange::ValidateRuler(long)+0x58>
    */
}

/**
 * Symbol: TXRulerRange::ValidateRulerRange(long, long)
 * Address: 00243138
 */
TXRulerRange::ValidateRulerRange(long, long) {
    /*
        243138:	e1a0c00d 	mov	ip, sp
        24313c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        243140:	e24cb004 	sub	fp, ip, #4	; 0x4
        243144:	e1a04000 	mov	r4, r0
        243148:	e1a06001 	mov	r6, r1
        24314c:	e1a05002 	mov	r5, r2
        243150:	e3a08000 	mov	r8, #0	; 0x0
        243154:	e5909004 	ldr	r9, [r0, #4]	; fField4
        243158:	e3590001 	cmp	r9, #1	; 0x1
        24315c:	d1a00008 	movle	r0, r8
        243160:	d91babf0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        243164:	e24dd020 	sub	sp, sp, #32	; 0x20
        243168:	e1a0300d 	mov	r3, sp
        24316c:	e1a02005 	mov	r2, r5
        243170:	e1a01006 	mov	r1, r6
        243174:	e1a00004 	mov	r0, r4
        243178:	eb650c6d 	bl	1b86334 <$SectRanges__8TXRangesCFlT1P12TXSectRanges>
        24317c:	e3a07000 	mov	r7, #0	; 0x0
        243180:	e59d0018 	ldr	r0, [sp, #24]
        243184:	e3300000 	teq	r0, #0	; 0x0
        243188:	1a000009 	bne	2431b4 <TXRulerRange::ValidateRulerRange(long, long)+0x7c>
        24318c:	e59d0014 	ldr	r0, [sp, #20]
        243190:	e2800001 	add	r0, r0, #1	; 0x1
        243194:	e58d0014 	str	r0, [sp, #20]
        243198:	e1500009 	cmp	r0, r9
        24319c:	aa000009 	bge	2431c8 <TXRulerRange::ValidateRulerRange(long, long)+0x90>
        2431a0:	e1a00004 	mov	r0, r4
        2431a4:	e59d1014 	ldr	r1, [sp, #20]
        2431a8:	eb650c5a 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        2431ac:	e1a07000 	mov	r7, r0
        2431b0:	ea000004 	b	2431c8 <TXRulerRange::ValidateRulerRange(long, long)+0x90>
        2431b4:	e1a00004 	mov	r0, r4
        2431b8:	e59d1014 	ldr	r1, [sp, #20]
        2431bc:	eb650c55 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        2431c0:	e59d101c 	ldr	r1, [sp, #28]
        2431c4:	e0407001 	sub	r7, r0, r1
        2431c8:	e1a00004 	mov	r0, r4
        2431cc:	e59d1000 	ldr	r1, [sp]
        2431d0:	eb655271 	bl	1b97b9c <TXRulerRange::$ValidateRuler(long)>
        2431d4:	e3300000 	teq	r0, #0	; 0x0
        2431d8:	1a000008 	bne	243200 <TXRulerRange::ValidateRulerRange(long, long)+0xc8>
        2431dc:	e59d0000 	ldr	r0, [sp]
        2431e0:	e59d1014 	ldr	r1, [sp, #20]
        2431e4:	e1310000 	teq	r1, r0
        2431e8:	01a00008 	moveq	r0, r8
        2431ec:	0a000012 	beq	24323c <TXRulerRange::ValidateRulerRange(long, long)+0x104>
        2431f0:	e1a02005 	mov	r2, r5
        2431f4:	e1a01006 	mov	r1, r6
        2431f8:	e1a00004 	mov	r0, r4
        2431fc:	eb655267 	bl	1b97ba0 <TXRulerRange::$ValidateRulerRange(long, long)>
        243200:	e59d0000 	ldr	r0, [sp]
        243204:	e59d1014 	ldr	r1, [sp, #20]
        243208:	e1310000 	teq	r1, r0
        24320c:	0a000008 	beq	243234 <TXRulerRange::ValidateRulerRange(long, long)+0xfc>
        243210:	e5940004 	ldr	r0, [r4, #4]	; fField4
        243214:	e59d1014 	ldr	r1, [sp, #20]
        243218:	e1500001 	cmp	r0, r1
        24321c:	da000004 	ble	243234 <TXRulerRange::ValidateRulerRange(long, long)+0xfc>
        243220:	e1a00004 	mov	r0, r4
        243224:	e59d1014 	ldr	r1, [sp, #20]
        243228:	eb65525b 	bl	1b97b9c <TXRulerRange::$ValidateRuler(long)>
        24322c:	e3300000 	teq	r0, #0	; 0x0
        243230:	0a000000 	beq	243238 <TXRulerRange::ValidateRulerRange(long, long)+0x100>
        243234:	e3a07000 	mov	r7, #0	; 0x0
        243238:	e1a00007 	mov	r0, r7
        24323c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        243240:	e1a0c00d 	mov	ip, sp
        243244:	e92dd813 	stmdb	sp!, {r0, r1, r4, fp, ip, lr, pc}
        243248:	e24cb004 	sub	fp, ip, #4	; 0x4
        24324c:	e1a04001 	mov	r4, r1
        243250:	e51b0018 	ldr	r0, [fp, -#24]
        243254:	eb643db8 	bl	1b5293c <$PtInRect(Point, Rect *)>
        243258:	e3300000 	teq	r0, #0	; 0x0
        24325c:	13a00000 	movne	r0, #0	; 0x0
        243260:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        243264:	e3e00000 	mvn	r0, #0	; 0x0
        243268:	e51b2018 	ldr	r2, [fp, -#24]
        24326c:	e5941002 	ldr	r1, [r4, #2]	; fField2
        243270:	e1a01821 	mov	r1, r1, lsr #16
        243274:	e0421001 	sub	r1, r2, r1
        243278:	e1a01801 	mov	r1, r1, lsl #16
        24327c:	e1b01841 	movs	r1, r1, asr #16
        243280:	42611000 	rsbmi	r1, r1, #0	; 0x0
        243284:	e1a01801 	mov	r1, r1, lsl #16
        243288:	e1a01841 	mov	r1, r1, asr #16
        24328c:	e59f20bc 	ldr	r2, [pc, #bc]	; 243350 <TXRulerRange::ValidateRulerRange(long, long)+0x218>
        243290:	e5922014 	ldr	r2, [r2, #20]
        243294:	e1510002 	cmp	r1, r2
        243298:	da00000a 	ble	2432c8 <TXRulerRange::ValidateRulerRange(long, long)+0x190>
        24329c:	e51b3018 	ldr	r3, [fp, -#24]
        2432a0:	e5941006 	ldr	r1, [r4, #6]	; fField6
        2432a4:	e1a01821 	mov	r1, r1, lsr #16
        2432a8:	e0431001 	sub	r1, r3, r1
        2432ac:	e1a01801 	mov	r1, r1, lsl #16
        2432b0:	e1b01841 	movs	r1, r1, asr #16
        2432b4:	42611000 	rsbmi	r1, r1, #0	; 0x0
        2432b8:	e1a01801 	mov	r1, r1, lsl #16
        2432bc:	e1a01841 	mov	r1, r1, asr #16
        2432c0:	e1510002 	cmp	r1, r2
        2432c4:	ca000000 	bgt	2432cc <TXRulerRange::ValidateRulerRange(long, long)+0x194>
        2432c8:	e1a00001 	mov	r0, r1
        2432cc:	e3e01000 	mvn	r1, #0	; 0x0
        2432d0:	e3500000 	cmp	r0, #0	; 0x0
        2432d4:	da000016 	ble	243334 <TXRulerRange::ValidateRulerRange(long, long)+0x1fc>
        2432d8:	e51bc016 	ldr	ip, [fp, -#22]
        2432dc:	e5943000 	ldr	r3, [r4]
        2432e0:	e1a03823 	mov	r3, r3, lsr #16
        2432e4:	e04c3003 	sub	r3, ip, r3
        2432e8:	e1a03803 	mov	r3, r3, lsl #16
        2432ec:	e1b03843 	movs	r3, r3, asr #16
        2432f0:	42633000 	rsbmi	r3, r3, #0	; 0x0
        2432f4:	e1a03803 	mov	r3, r3, lsl #16
        2432f8:	e1a03843 	mov	r3, r3, asr #16
        2432fc:	e1530002 	cmp	r3, r2
        243300:	da00000a 	ble	243330 <TXRulerRange::ValidateRulerRange(long, long)+0x1f8>
        243304:	e594c004 	ldr	ip, [r4, #4]	; fField4
        243308:	e1a0c82c 	mov	ip, ip, lsr #16
        24330c:	e51b3016 	ldr	r3, [fp, -#22]
        243310:	e043300c 	sub	r3, r3, ip
        243314:	e1a03803 	mov	r3, r3, lsl #16
        243318:	e1b03843 	movs	r3, r3, asr #16
        24331c:	42633000 	rsbmi	r3, r3, #0	; 0x0
        243320:	e1a03803 	mov	r3, r3, lsl #16
        243324:	e1a03843 	mov	r3, r3, asr #16
        243328:	e1530002 	cmp	r3, r2
        24332c:	aa000000 	bge	243334 <TXRulerRange::ValidateRulerRange(long, long)+0x1fc>
        243330:	e1a01003 	mov	r1, r3
        243334:	e3500000 	cmp	r0, #0	; 0x0
        243338:	a3510000 	cmpge	r1, #0	; 0x0
        24333c:	b3e00000 	mvnlt	r0, #0	; 0x0
        243340:	b91ba810 	ldmltdb	fp, {r4, fp, sp, pc}
        243344:	e1500001 	cmp	r0, r1
        243348:	a1a00001 	movge	r0, r1
        24334c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        243350:	0c104e74 	ldceq	14, cr4, [r0], -#464
        243354:	e92d4000 	stmdb	sp!, {lr}
        243358:	e3a03000 	mov	r3, #0	; 0x0
        24335c:	e5902002 	ldr	r2, [r0, #2]	; fField2
        243360:	e1a02842 	mov	r2, r2, asr #16
        243364:	e591c002 	ldr	ip, [r1, #2]	; fField2
        243368:	e1a0c84c 	mov	ip, ip, asr #16
        24336c:	e152000c 	cmp	r2, ip
        243370:	b04c3002 	sublt	r3, ip, r2
        243374:	ba000005 	blt	243390 <TXRulerRange::ValidateRulerRange(long, long)+0x258>
        243378:	e590c006 	ldr	ip, [r0, #6]	; fField6
        24337c:	e1a0c84c 	mov	ip, ip, asr #16
        243380:	e5912006 	ldr	r2, [r1, #6]	; fField6
        243384:	e1a02842 	mov	r2, r2, asr #16
        243388:	e15c0002 	cmp	ip, r2
        24338c:	c042300c 	subgt	r3, r2, ip
        243390:	e3a02000 	mov	r2, #0	; 0x0
        243394:	e590c000 	ldr	ip, [r0]
        243398:	e1a0c84c 	mov	ip, ip, asr #16
        24339c:	e591e000 	ldr	lr, [r1]
        2433a0:	e1a0e84e 	mov	lr, lr, asr #16
        2433a4:	e15c000e 	cmp	ip, lr
        2433a8:	b04e200c 	sublt	r2, lr, ip
        2433ac:	ba000005 	blt	2433c8 <TXRulerRange::ValidateRulerRange(long, long)+0x290>
        2433b0:	e590c004 	ldr	ip, [r0, #4]	; fField4
        2433b4:	e1a0c84c 	mov	ip, ip, asr #16
        2433b8:	e5911004 	ldr	r1, [r1, #4]	; fField4
        2433bc:	e1a01841 	mov	r1, r1, asr #16
        2433c0:	e15c0001 	cmp	ip, r1
        2433c4:	c041200c 	subgt	r2, r1, ip
        2433c8:	e1a01003 	mov	r1, r3
        2433cc:	e8bd4000 	ldmia	sp!, {lr}
        2433d0:	ea643944 	b	1b518e8 <$OffsetRect__FP4RectlT2>
    */
}

