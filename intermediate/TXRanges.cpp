#include "include/TXRanges.h"

/**
 * Symbol: TXRanges::__ct(unsigned char, int)
 * Address: 00230b8c
 */
TXRanges::TXRanges(unsigned char, int) {
    /*
        230b8c:	e1a0c00d 	mov	ip, sp
        230b90:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        230b94:	e24cb004 	sub	fp, ip, #4	; 0x4
        230b98:	e1b04000 	movs	r4, r0
        230b9c:	e1a05002 	mov	r5, r2
        230ba0:	e20160ff 	and	r6, r1, #255	; 0xff
        230ba4:	1a000003 	bne	230bb8 <TXRanges::__ct(unsigned char, int)+0x2c>
        230ba8:	e3a00018 	mov	r0, #24	; 0x18
        230bac:	eb6676e1 	bl	1bce738 <$__nw(unsigned int)>
        230bb0:	e1b04000 	movs	r4, r0
        230bb4:	0a000005 	beq	230bd0 <TXRanges::__ct(unsigned char, int)+0x44>
        230bb8:	e1a02005 	mov	r2, r5
        230bbc:	e1a01006 	mov	r1, r6
        230bc0:	e1a00004 	mov	r0, r4
        230bc4:	eb6551ca 	bl	1b852f4 <TXLongTagArray::$__ct(unsigned char, int)>
        230bc8:	e59f0008 	ldr	r0, [pc, #8]	; 230bd8 <TXRanges::__ct(unsigned char, int)+0x4c>	; fField8
        230bcc:	e5840000 	str	r0, [r4]
        230bd0:	e1a00004 	mov	r0, r4
        230bd4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        230bd8:	0002061c 	andeq	r0, r2, ip, lsl r6
    */
}

/**
 * Symbol: TXRanges::FreeData(unsigned char)
 * Address: 00230bdc
 */
TXRanges::FreeData(unsigned char) {
    /*
        230bdc:	e1a0c00d 	mov	ip, sp
        230be0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        230be4:	e24cb004 	sub	fp, ip, #4	; 0x4
        230be8:	e1a04000 	mov	r4, r0
        230bec:	e20150ff 	and	r5, r1, #255	; 0xff
        230bf0:	e3a01000 	mov	r1, #0	; 0x0
        230bf4:	ebffff3c 	bl	2308ec <TXArray::SetCount(long)>
        230bf8:	e3350000 	teq	r5, #0	; 0x0
        230bfc:	11a00004 	movne	r0, r4
        230c00:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        230c04:	1a6551b9 	bne	1b852f0 <TXArray::$Compact(void)>
        230c08:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXRanges::GetRangeEnd( const(long))
 * Address: 00230c0c
 */
TXRanges::GetRangeEnd( const(long)) {
    /*
        230c0c:	e3510000 	cmp	r1, #0	; 0x0
        230c10:	b3a00000 	movlt	r0, #0	; 0x0
        230c14:	b1a0f00e 	movlt	pc, lr
        230c18:	e1a0c00d 	mov	ip, sp
        230c1c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        230c20:	e24cb004 	sub	fp, ip, #4	; 0x4
        230c24:	eb6551a9 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230c28:	e5900000 	ldr	r0, [r0]
        230c2c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXRanges::GetRangeStart( const(long))
 * Address: 00230c30
 */
TXRanges::GetRangeStart( const(long)) {
    /*
        230c30:	e3510000 	cmp	r1, #0	; 0x0
        230c34:	d3a00000 	movle	r0, #0	; 0x0
        230c38:	d1a0f00e 	movle	pc, lr
        230c3c:	e1a0c00d 	mov	ip, sp
        230c40:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        230c44:	e24cb004 	sub	fp, ip, #4	; 0x4
        230c48:	e2411001 	sub	r1, r1, #1	; 0x1
        230c4c:	eb65519f 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230c50:	e5900000 	ldr	r0, [r0]
        230c54:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXRanges::GetRangeLen( const(long))
 * Address: 00230c58
 */
TXRanges::GetRangeLen( const(long)) {
    /*
        230c58:	e1a0c00d 	mov	ip, sp
        230c5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        230c60:	e24cb004 	sub	fp, ip, #4	; 0x4
        230c64:	e1a05000 	mov	r5, r0
        230c68:	e1a04001 	mov	r4, r1
        230c6c:	eb655197 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230c70:	e1a01000 	mov	r1, r0
        230c74:	e5900000 	ldr	r0, [r0]
        230c78:	e3340000 	teq	r4, #0	; 0x0
        230c7c:	15d52008 	ldrneb	r2, [r5, #8]	; fField8
        230c80:	17111002 	ldrne	r1, [r1, -r2]
        230c84:	10400001 	subne	r0, r0, r1
        230c88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXRanges::GetRangeBounds( const(long, TXOffsetPair *))
 * Address: 00230c8c
 */
TXRanges::GetRangeBounds( const(long, TXOffsetPair *)) {
    /*
        230c8c:	e1a0c00d 	mov	ip, sp
        230c90:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        230c94:	e24cb004 	sub	fp, ip, #4	; 0x4
        230c98:	e1a06000 	mov	r6, r0
        230c9c:	e1a05001 	mov	r5, r1
        230ca0:	e1a04002 	mov	r4, r2
        230ca4:	eb655189 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230ca8:	e5901000 	ldr	r1, [r0]
        230cac:	e3350000 	teq	r5, #0	; 0x0
        230cb0:	e5841004 	str	r1, [r4, #4]	; fField4
        230cb4:	15d61008 	ldrneb	r1, [r6, #8]	; fField8
        230cb8:	17100001 	ldrne	r0, [r0, -r1]
        230cbc:	03a00000 	moveq	r0, #0	; 0x0
        230cc0:	e5840000 	str	r0, [r4]
        230cc4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXRanges::SetRangeEnd(long, long)
 * Address: 00230cc8
 */
TXRanges::SetRangeEnd(long, long) {
    /*
        230cc8:	e1a0c00d 	mov	ip, sp
        230ccc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        230cd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        230cd4:	e1a04002 	mov	r4, r2
        230cd8:	eb65517c 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230cdc:	e5804000 	str	r4, [r0]
        230ce0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXRanges::AddToRangeEnd(long, long)
 * Address: 00230ce4
 */
TXRanges::AddToRangeEnd(long, long) {
    /*
        230ce4:	e1a0c00d 	mov	ip, sp
        230ce8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        230cec:	e24cb004 	sub	fp, ip, #4	; 0x4
        230cf0:	e1a04002 	mov	r4, r2
        230cf4:	eb655175 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230cf8:	e5901000 	ldr	r1, [r0]
        230cfc:	e0811004 	add	r1, r1, r4
        230d00:	e5801000 	str	r1, [r0]
        230d04:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: IsRangeStart__8TXRangesCFlT1
 * Address: 00230d08
 */
void TXRanges::IsRangeStart() {
    /*
        230d08:	e1a0c00d 	mov	ip, sp
        230d0c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        230d10:	e24cb004 	sub	fp, ip, #4	; 0x4
        230d14:	e1a05000 	mov	r5, r0
        230d18:	e1a04001 	mov	r4, r1
        230d1c:	e1b01002 	movs	r1, r2
        230d20:	e24dd008 	sub	sp, sp, #8	; 0x8
        230d24:	5a000006 	bpl	230d44 <IsRangeStart__8TXRangesCFlT1+0x3c>
        230d28:	e3a00000 	mov	r0, #0	; 0x0
        230d2c:	e58d4000 	str	r4, [sp]
        230d30:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        230d34:	e1a00005 	mov	r0, r5
        230d38:	e89d0006 	ldmia	sp, {r1, r2}
        230d3c:	eb65557b 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        230d40:	e1a01000 	mov	r1, r0
        230d44:	e1a00005 	mov	r0, r5
        230d48:	eb655571 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        230d4c:	e1300004 	teq	r0, r4
        230d50:	13a00000 	movne	r0, #0	; 0x0
        230d54:	03a00001 	moveq	r0, #1	; 0x1
        230d58:	e20000ff 	and	r0, r0, #255	; 0xff
        230d5c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXRanges::GetLastRangeEnd( const(void))
 * Address: 00230d84
 */
TXRanges::GetLastRangeEnd( const(void)) {
    /*
        230d84:	e1a0c00d 	mov	ip, sp
        230d88:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        230d8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        230d90:	e5901004 	ldr	r1, [r0, #4]	; fField4
        230d94:	e3310000 	teq	r1, #0	; 0x0
        230d98:	03a00000 	moveq	r0, #0	; 0x0
        230d9c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        230da0:	e2411001 	sub	r1, r1, #1	; 0x1
        230da4:	eb655149 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230da8:	e5900000 	ldr	r0, [r0]
        230dac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXRanges::OffsetToRangeIndex( const(TXOffset))
 * Address: 00230db0
 */
TXRanges::OffsetToRangeIndex( const(TXOffset)) {
    /*
        230db0:	e1a0c00d 	mov	ip, sp
        230db4:	e92dd837 	stmdb	sp!, {r0, r1, r2, r4, r5, fp, ip, lr, pc}
        230db8:	e24cb004 	sub	fp, ip, #4	; 0x4
        230dbc:	e1a04000 	mov	r4, r0
        230dc0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        230dc4:	e2400001 	sub	r0, r0, #1	; 0x1
        230dc8:	e3500000 	cmp	r0, #0	; 0x0
        230dcc:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        230dd0:	e1a00004 	mov	r0, r4
        230dd4:	e51b101c 	ldr	r1, [fp, -#28]
        230dd8:	eb655548 	bl	1b86300 <TXLongTagArray::$SearchBigger( const(long))>
        230ddc:	e1a05000 	mov	r5, r0
        230de0:	e55b0018 	ldrb	r0, [fp, -#24]
        230de4:	e3300000 	teq	r0, #0	; 0x0
        230de8:	0a000007 	beq	230e0c <TXRanges::OffsetToRangeIndex( const(TXOffset))+0x5c>
        230dec:	e3550000 	cmp	r5, #0	; 0x0
        230df0:	da000005 	ble	230e0c <TXRanges::OffsetToRangeIndex( const(TXOffset))+0x5c>
        230df4:	e1a02005 	mov	r2, r5
        230df8:	e1a00004 	mov	r0, r4
        230dfc:	e51b101c 	ldr	r1, [fp, -#28]
        230e00:	eb655548 	bl	1b86328 <$IsRangeStart__8TXRangesCFlT1>
        230e04:	e3300000 	teq	r0, #0	; 0x0
        230e08:	12455001 	subne	r5, r5, #1	; 0x1
        230e0c:	e1a00005 	mov	r0, r5
        230e10:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: SectRanges__8TXRangesCFlT1P12TXSectRanges
 * Address: 00230e14
 */
void TXRanges::SectRanges() {
    /*
        230e14:	e1a0c00d 	mov	ip, sp
        230e18:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        230e1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        230e20:	e1a05000 	mov	r5, r0
        230e24:	e1a06001 	mov	r6, r1
        230e28:	e1a04003 	mov	r4, r3
        230e2c:	e0817002 	add	r7, r1, r2
        230e30:	e3a08000 	mov	r8, #0	; 0x0
        230e34:	e52d1008 	str	r1, [sp, -#8]!	; fField8
        230e38:	e5cd8004 	strb	r8, [sp, #4]	; fField4
        230e3c:	e89d0006 	ldmia	sp, {r1, r2}
        230e40:	eb65553a 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        230e44:	e5840000 	str	r0, [r4]
        230e48:	e1b01000 	movs	r1, r0
        230e4c:	5a000009 	bpl	230e78 <SectRanges__8TXRangesCFlT1P12TXSectRanges+0x64>
        230e50:	e1a00008 	mov	r0, r8
        230e54:	e5848000 	str	r8, [r4]
        230e58:	e5848004 	str	r8, [r4, #4]	; fField4
        230e5c:	e5848008 	str	r8, [r4, #8]	; fField8
        230e60:	e584800c 	str	r8, [r4, #12]
        230e64:	e5848010 	str	r8, [r4, #16]
        230e68:	e5848014 	str	r8, [r4, #20]
        230e6c:	e5848018 	str	r8, [r4, #24]
        230e70:	e5a4801c 	str	r8, [r4, #28]!
        230e74:	ea00003d 	b	230f70 <SectRanges__8TXRangesCFlT1P12TXSectRanges+0x15c>
        230e78:	e1a00005 	mov	r0, r5
        230e7c:	eb655524 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        230e80:	e0460000 	sub	r0, r6, r0
        230e84:	e5840004 	str	r0, [r4, #4]	; fField4
        230e88:	e1a00005 	mov	r0, r5
        230e8c:	e5941000 	ldr	r1, [r4]
        230e90:	eb65551e 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        230e94:	e1a09000 	mov	r9, r0
        230e98:	e1500007 	cmp	r0, r7
        230e9c:	a1a00007 	movge	r0, r7
        230ea0:	b1a00009 	movlt	r0, r9
        230ea4:	e0400006 	sub	r0, r0, r6
        230ea8:	e5840008 	str	r0, [r4, #8]	; fField8
        230eac:	e1a00005 	mov	r0, r5
        230eb0:	e5941000 	ldr	r1, [r4]
        230eb4:	eb655515 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        230eb8:	e1500007 	cmp	r0, r7
        230ebc:	a5940000 	ldrge	r0, [r4]
        230ec0:	a5840014 	strge	r0, [r4, #20]
        230ec4:	aa000007 	bge	230ee8 <SectRanges__8TXRangesCFlT1P12TXSectRanges+0xd4>
        230ec8:	e3a00001 	mov	r0, #1	; 0x1
        230ecc:	e52d7008 	str	r7, [sp, -#8]!	; fField8
        230ed0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        230ed4:	e1a00005 	mov	r0, r5
        230ed8:	e89d0006 	ldmia	sp, {r1, r2}
        230edc:	eb655513 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        230ee0:	e5840014 	str	r0, [r4, #20]
        230ee4:	e28dd008 	add	sp, sp, #8	; 0x8
        230ee8:	e1a00005 	mov	r0, r5
        230eec:	e5941014 	ldr	r1, [r4, #20]
        230ef0:	eb655506 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        230ef4:	e0400007 	sub	r0, r0, r7
        230ef8:	e5840018 	str	r0, [r4, #24]
        230efc:	e1a00005 	mov	r0, r5
        230f00:	e5941014 	ldr	r1, [r4, #20]
        230f04:	eb655503 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        230f08:	e5943018 	ldr	r3, [r4, #24]
        230f0c:	e0400003 	sub	r0, r0, r3
        230f10:	e584001c 	str	r0, [r4, #28]
        230f14:	e5940014 	ldr	r0, [r4, #20]
        230f18:	e5942000 	ldr	r2, [r4]
        230f1c:	e0400002 	sub	r0, r0, r2
        230f20:	e2800001 	add	r0, r0, #1	; 0x1
        230f24:	e5840010 	str	r0, [r4, #16]
        230f28:	e1a01000 	mov	r1, r0
        230f2c:	e584200c 	str	r2, [r4, #12]
        230f30:	e594c004 	ldr	ip, [r4, #4]	; fField4
        230f34:	e33c0000 	teq	ip, #0	; 0x0
        230f38:	1a000001 	bne	230f44 <SectRanges__8TXRangesCFlT1P12TXSectRanges+0x130>
        230f3c:	e1570009 	cmp	r7, r9
        230f40:	aa000003 	bge	230f54 <SectRanges__8TXRangesCFlT1P12TXSectRanges+0x140>
        230f44:	e2822001 	add	r2, r2, #1	; 0x1
        230f48:	e2411001 	sub	r1, r1, #1	; 0x1
        230f4c:	e5841010 	str	r1, [r4, #16]
        230f50:	e584200c 	str	r2, [r4, #12]
        230f54:	e3330000 	teq	r3, #0	; 0x0
        230f58:	15941010 	ldrne	r1, [r4, #16]
        230f5c:	12411001 	subne	r1, r1, #1	; 0x1
        230f60:	15841010 	strne	r1, [r4, #16]
        230f64:	e5941010 	ldr	r1, [r4, #16]
        230f68:	e3510000 	cmp	r1, #0	; 0x0
        230f6c:	b5a48010 	strlt	r8, [r4, #16]!
        230f70:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

