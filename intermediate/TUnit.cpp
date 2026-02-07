#include "include/TUnit.h"

/**
 * Symbol: TUnit::__ct(void)
 * Address: 0022ccb0
 */
TUnit::TUnit(void) {
    /*
        22ccb0:	e1a0c00d 	mov	ip, sp
        22ccb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22ccb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ccbc:	e1b04000 	movs	r4, r0
        22ccc0:	1a000003 	bne	22ccd4 <TUnit::__ct(void)+0x24>
        22ccc4:	e3a00030 	mov	r0, #48	; 0x30
        22ccc8:	eb66869a 	bl	1bce738 <$__nw(unsigned int)>
        22cccc:	e1b04000 	movs	r4, r0
        22ccd0:	0a000003 	beq	22cce4 <TUnit::__ct(void)+0x34>
        22ccd4:	e1a00004 	mov	r0, r4
        22ccd8:	ebffbf29 	bl	21c984 <TRecObject::__ct(void)>
        22ccdc:	e59f0008 	ldr	r0, [pc, #8]	; 22ccec <TUnit::__ct(void)+0x3c>	; fField8
        22cce0:	e5840000 	str	r0, [r4]
        22cce4:	e1a00004 	mov	r0, r4
        22cce8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22ccec:	0001f6fc 	streqd	pc, [r1], -ip
    */
}

/**
 * Symbol: TUnit::__dt(void)
 * Address: 0022dea4
 */
TUnit::~TUnit(void) {
    /*
        22dea4:	e1a0c00d 	mov	ip, sp
        22dea8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22deac:	e24cb004 	sub	fp, ip, #4	; 0x4
        22deb0:	e1a04000 	mov	r4, r0
        22deb4:	e1a05001 	mov	r5, r1
        22deb8:	e59f0020 	ldr	r0, [pc, #20]	; 22dee0 <TUnit::__dt(void)+0x3c>	; fField20
        22debc:	e5840000 	str	r0, [r4]
        22dec0:	e1a00004 	mov	r0, r4
        22dec4:	e3a01000 	mov	r1, #0	; 0x0
        22dec8:	ebffbaba 	bl	21c9b8 <TRecObject::__dt(void)>
        22decc:	e3150001 	tst	r5, #1	; 0x1
        22ded0:	11a00004 	movne	r0, r4
        22ded4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        22ded8:	1a667e00 	bne	1bcd6e0 <$__dl(void *)>
        22dedc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22dee0:	0001f6fc 	streqd	pc, [r1], -ip
    */
}

/**
 * Symbol: TUnit::SubCount(void)
 * Address: 0022dee4
 */
TUnit::SubCount(void) {
    /*
        22dee4:	e3a00000 	mov	r0, #0	; 0x0
        22dee8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnit::InterpretationCount(void)
 * Address: 0022deec
 */
TUnit::InterpretationCount(void) {
    /*
        22deec:	e3a00000 	mov	r0, #0	; 0x0
        22def0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnit::GetBestInterpretation(void)
 * Address: 0022def4
 */
TUnit::GetBestInterpretation(void) {
    /*
        22def4:	e3e00000 	mvn	r0, #0	; 0x0
        22def8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnit::GetAreas(void)
 * Address: 0022defc
 */
TUnit::GetAreas(void) {
    /*
        22defc:	e1a0c00d 	mov	ip, sp
        22df00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22df04:	e24cb004 	sub	fp, ip, #4	; 0x4
        22df08:	e1a04000 	mov	r4, r0
        22df0c:	e3a05000 	mov	r5, #0	; 0x0
        22df10:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22df14:	e3300000 	teq	r0, #0	; 0x0
        22df18:	0a000014 	beq	22df70 <TUnit::GetAreas(void)+0x74>
        22df1c:	e1a00004 	mov	r0, r4
        22df20:	e3a01802 	mov	r1, #131072	; 0x20000
        22df24:	eb64d4af 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        22df28:	e3300000 	teq	r0, #0	; 0x0
        22df2c:	0a000003 	beq	22df40 <TUnit::GetAreas(void)+0x44>
        22df30:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        22df34:	e1a05000 	mov	r5, r0
        22df38:	eb64bbbb 	bl	1b5ce2c <TAreaList::$Clone(void)>
        22df3c:	ea00000b 	b	22df70 <TUnit::GetAreas(void)+0x74>
        22df40:	eb64cc57 	bl	1b610a4 <$Make__9TAreaListSFv>
        22df44:	e1b05000 	movs	r5, r0
        22df48:	0a000008 	beq	22df70 <TUnit::GetAreas(void)+0x74>
        22df4c:	e1a00005 	mov	r0, r5
        22df50:	e5b41018 	ldr	r1, [r4, #24]!	; fField24
        22df54:	eb64b382 	bl	1b5ad64 <TAreaList::$AddArea(TRecArea *)>
        22df58:	e3300000 	teq	r0, #0	; 0x0
        22df5c:	0a000003 	beq	22df70 <TUnit::GetAreas(void)+0x74>
        22df60:	e1a00005 	mov	r0, r5
        22df64:	e1a0e00f 	mov	lr, pc
        22df68:	e595f000 	ldr	pc, [r5]
        22df6c:	e3a05000 	mov	r5, #0	; 0x0
        22df70:	e1a00005 	mov	r0, r5
        22df74:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnit::SetAreas(TAreaList *)
 * Address: 0022df78
 */
TUnit::SetAreas(TAreaList *) {
    /*
        22df78:	e1a0c00d 	mov	ip, sp
        22df7c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22df80:	e24cb004 	sub	fp, ip, #4	; 0x4
        22df84:	e1a04000 	mov	r4, r0
        22df88:	e1a05001 	mov	r5, r1
        22df8c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22df90:	e3300000 	teq	r0, #0	; 0x0
        22df94:	0a000005 	beq	22dfb0 <TUnit::SetAreas(TAreaList *)+0x38>
        22df98:	e1a00004 	mov	r0, r4
        22df9c:	e3a01802 	mov	r1, #131072	; 0x20000
        22dfa0:	eb64d490 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        22dfa4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22dfa8:	e1a0e00f 	mov	lr, pc
        22dfac:	e590f000 	ldr	pc, [r0]
        22dfb0:	e3a00000 	mov	r0, #0	; 0x0
        22dfb4:	e5840018 	str	r0, [r4, #24]	; fField24
        22dfb8:	e1a00004 	mov	r0, r4
        22dfbc:	e3a01802 	mov	r1, #131072	; 0x20000
        22dfc0:	eb64d891 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        22dfc4:	e3350000 	teq	r5, #0	; 0x0
        22dfc8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        22dfcc:	e595000c 	ldr	r0, [r5, #12]
        22dfd0:	e3500001 	cmp	r0, #1	; 0x1
        22dfd4:	9a000006 	bls	22dff4 <TUnit::SetAreas(TAreaList *)+0x7c>
        22dfd8:	e1a00005 	mov	r0, r5
        22dfdc:	eb64bb92 	bl	1b5ce2c <TAreaList::$Clone(void)>
        22dfe0:	e5845018 	str	r5, [r4, #24]	; fField24
        22dfe4:	e1a00004 	mov	r0, r4
        22dfe8:	e3a01802 	mov	r1, #131072	; 0x20000
        22dfec:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        22dff0:	ea64d05f 	b	1b62174 <TRecObject::$SetFlags(unsigned long)>
        22dff4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        22dff8:	e1a00005 	mov	r0, r5
        22dffc:	e3a01000 	mov	r1, #0	; 0x0
        22e000:	eb64c3cc 	bl	1b5ef38 <TAreaList::$GetArea(unsigned long)>
        22e004:	e1a05000 	mov	r5, r0
        22e008:	eb64bb86 	bl	1b5ce28 <TRecArea::$Clone(void)>
        22e00c:	e5a45018 	str	r5, [r4, #24]!	; fField24
        22e010:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnit::GetArea(void)
 * Address: 0022e014
 */
TUnit::GetArea(void) {
    /*
        22e014:	e1a0c00d 	mov	ip, sp
        22e018:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22e01c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e020:	e1a04000 	mov	r4, r0
        22e024:	e3a00000 	mov	r0, #0	; 0x0
        22e028:	e5941018 	ldr	r1, [r4, #24]	; fField24
        22e02c:	e3310000 	teq	r1, #0	; 0x0
        22e030:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        22e034:	e1a00004 	mov	r0, r4
        22e038:	e3a01802 	mov	r1, #131072	; 0x20000
        22e03c:	eb64d469 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        22e040:	e3300000 	teq	r0, #0	; 0x0
        22e044:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        22e048:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        22e04c:	1a64c3ca 	bne	1b5ef7c <TAreaList::$GetMergedArea(void)>
        22e050:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnit::SetDelay(unsigned long)
 * Address: 0022e054
 */
TUnit::SetDelay(unsigned long) {
    /*
        22e054:	e35100ff 	cmp	r1, #255	; 0xff
        22e058:	83a010ff 	movhi	r1, #255	; 0xff
        22e05c:	e5c01027 	strb	r1, [r0, #39]	; fField39
        22e060:	e3310000 	teq	r1, #0	; 0x0
        22e064:	e3a01201 	mov	r1, #268435456	; 0x10000000
        22e068:	0a64d867 	beq	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        22e06c:	1a64d040 	bne	1b62174 <TRecObject::$SetFlags(unsigned long)>
    */
}

/**
 * Symbol: TUnit::DumpName(TMsg *)
 * Address: 0022e070
 */
TUnit::DumpName(TMsg *) {
    /*
        22e070:	e1a0c00d 	mov	ip, sp
        22e074:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22e078:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e07c:	e1a05000 	mov	r5, r0
        22e080:	e1a04001 	mov	r4, r1
        22e084:	e3a07028 	mov	r7, #40	; 0x28
        22e088:	e3a06029 	mov	r6, #41	; 0x29
        22e08c:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        22e090:	eb64d454 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        22e094:	e3300000 	teq	r0, #0	; 0x0
        22e098:	13a0705b 	movne	r7, #91	; 0x5b
        22e09c:	13a0605d 	movne	r6, #93	; 0x5d
        22e0a0:	e1a01007 	mov	r1, r7
        22e0a4:	e1a00004 	mov	r0, r4
        22e0a8:	eb64f96f 	bl	1b6c66c <TMsg::$MsgChar(char)>
        22e0ac:	e1a00004 	mov	r0, r4
        22e0b0:	e5b51008 	ldr	r1, [r5, #8]!	; fField8
        22e0b4:	eb64fd73 	bl	1b6d688 <TMsg::$MsgType(unsigned long)>
        22e0b8:	e1a01006 	mov	r1, r6
        22e0bc:	e1a00004 	mov	r0, r4
        22e0c0:	eb64f969 	bl	1b6c66c <TMsg::$MsgChar(char)>
        22e0c4:	e1a00004 	mov	r0, r4
        22e0c8:	e28f1f01 	add	r1, pc, #4	; 0x4
        22e0cc:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        22e0d0:	ea64fd6b 	b	1b6d684 <TMsg::$MsgStr(char *)>
        22e0d4:	20000000 	andcs	r0, r0, r0
    */
}

/**
 * Symbol: TUnit::Dump(TMsg *)
 * Address: 0022e0d8
 */
TUnit::Dump(TMsg *) {
    /*
        22e0d8:	e1a0c00d 	mov	ip, sp
        22e0dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22e0e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e0e4:	e1a05000 	mov	r5, r0
        22e0e8:	e1a04001 	mov	r4, r1
        22e0ec:	e3a01501 	mov	r1, #4194304	; 0x400000
        22e0f0:	eb64d43c 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        22e0f4:	e3300000 	teq	r0, #0	; 0x0
        22e0f8:	11a00004 	movne	r0, r4
        22e0fc:	128f1f1b 	addne	r1, pc, #108	; 0x6c
        22e100:	1b64fd5f 	blne	1b6d684 <TMsg::$MsgStr(char *)>
        22e104:	e1a01004 	mov	r1, r4
        22e108:	e1a00005 	mov	r0, r5
        22e10c:	e5952000 	ldr	r2, [r5]
        22e110:	e1a0e00f 	mov	lr, pc
        22e114:	e282f028 	add	pc, r2, #40	; 0x28
        22e118:	e1a00004 	mov	r0, r4
        22e11c:	e28f1f16 	add	r1, pc, #88	; 0x58
        22e120:	eb64fd57 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        22e124:	e1a00004 	mov	r0, r4
        22e128:	e28f1f17 	add	r1, pc, #92	; 0x5c
        22e12c:	eb64fd54 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        22e130:	e59f0058 	ldr	r0, [pc, #58]	; 22e190 <TUnit::Dump(TMsg *)+0xb8>
        22e134:	e5900000 	ldr	r0, [r0]
        22e138:	e3300000 	teq	r0, #0	; 0x0
        22e13c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        22e140:	e1a00004 	mov	r0, r4
        22e144:	e28f1f12 	add	r1, pc, #72	; 0x48
        22e148:	eb64fd4d 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        22e14c:	e5952014 	ldr	r2, [r5, #20]	; fField20
        22e150:	e3320000 	teq	r2, #0	; 0x0
        22e154:	0a00000f 	beq	22e198 <TUnit::Dump(TMsg *)+0xc0>
        22e158:	e1a01004 	mov	r1, r4
        22e15c:	e1a00002 	mov	r0, r2
        22e160:	e5922000 	ldr	r2, [r2]
        22e164:	e1a0e00f 	mov	lr, pc
        22e168:	e282f020 	add	pc, r2, #32	; 0x20
        22e16c:	ea00000c 	b	22e1a4 <TUnit::Dump(TMsg *)+0xcc>
        22e170:	20494e56 	subcs	r4, r9, r6, asr lr
        22e174:	414c4944 	cmpmi	ip, r4, asr #18
        22e178:	20000000 	andcs	r0, r0, r0
        22e17c:	20202020 	eorcs	r2, r0, r0, lsr #32
        22e180:	53697a65 	cmnpl	r9, #413696	; 0x65000
        22e184:	3a203078 	bcc	a3a36c <ROM$$Size+0x31a720>
        22e188:	00000000 	andeq	r0, r0, r0
        22e18c:	20200000 	eorcs	r0, r0, r0
        22e190:	0c101160 	ldfeqs	f1, [r0], -#384
        22e194:	0d090000 	stceq	0, cr0, [r9]
        22e198:	e1a00004 	mov	r0, r4
        22e19c:	e28f1f11 	add	r1, pc, #68	; 0x44
        22e1a0:	eb64fd37 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        22e1a4:	e1a00004 	mov	r0, r4
        22e1a8:	e28f1f11 	add	r1, pc, #68	; 0x44
        22e1ac:	eb64fd34 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        22e1b0:	e1a00004 	mov	r0, r4
        22e1b4:	e3a02008 	mov	r2, #8	; 0x8
        22e1b8:	e5951004 	ldr	r1, [r5, #4]	; fField4
        22e1bc:	eb64f92c 	bl	1b6c674 <TMsg::$MsgHex(unsigned long, long)>
        22e1c0:	e1a00004 	mov	r0, r4
        22e1c4:	e28f1f0d 	add	r1, pc, #52	; 0x34
        22e1c8:	eb64fd2d 	bl	1b6d684 <TMsg::$MsgStr(char *)>
        22e1cc:	e5d51026 	ldrb	r1, [r5, #38]	; fField38
        22e1d0:	e1a01c01 	mov	r1, r1, lsl #24
        22e1d4:	e1a01c41 	mov	r1, r1, asr #24
        22e1d8:	e1a00004 	mov	r0, r4
        22e1dc:	e3e02000 	mvn	r2, #0	; 0x0
        22e1e0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        22e1e4:	ea64f924 	b	1b6c67c <TMsg::$MsgNum(unsigned long, long)>
        22e1e8:	4e6f2044 	cdpmi	0, 6, cr2, cr15, cr4, {2}
        22e1ec:	6f6d6169 	swivs	0x006d6169
        22e1f0:	6e000000 	cdpvs	0, 0, cr0, cr0, cr0, {0}
        22e1f4:	0d09466c 	stceq	6, cr4, [r9, -#432]
        22e1f8:	6167733a 	cmnvs	r7, sl, lsr r3
        22e1fc:	20307800 	eorcss	r7, r0, r0, lsl #16
        22e200:	20202020 	eorcs	r2, r0, r0, lsr #32
        22e204:	5072696f 	rsbpls	r6, r2, pc, ror #18
        22e208:	72697479 	rsbvc	r7, r9, #2030043136	; 0x79000000
        22e20c:	3a200000 	bcc	a2e214 <ROM$$Size+0x30e5c8>
    */
}

/**
 * Symbol: TUnit::MarkUnit(TUnitList *, unsigned long)
 * Address: 0022e210
 */
TUnit::MarkUnit(TUnitList *, unsigned long) {
    /*
        22e210:	e1a0c00d 	mov	ip, sp
        22e214:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22e218:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e21c:	e1a04000 	mov	r4, r0
        22e220:	e1a05002 	mov	r5, r2
        22e224:	e1a00001 	mov	r0, r1
        22e228:	e1a01004 	mov	r1, r4
        22e22c:	eb64b6db 	bl	1b5bda0 <TUnitList::$AddUnit(TUnit *)>
        22e230:	e1a06000 	mov	r6, r0
        22e234:	e1a01005 	mov	r1, r5
        22e238:	e1a00004 	mov	r0, r4
        22e23c:	eb64cfcc 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        22e240:	e1a00006 	mov	r0, r6
        22e244:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TUnit::ClaimUnit(TUnitList *)
 * Address: 0022e248
 */
TUnit::ClaimUnit(TUnitList *) {
    /*
        22e248:	e3a02101 	mov	r2, #1073741824	; 0x40000000
        22e24c:	e5903000 	ldr	r3, [r0]
        22e250:	e283f030 	add	pc, r3, #48	; 0x30
    */
}

/**
 * Symbol: TUnit::Invalidate(void)
 * Address: 0022e254
 */
TUnit::Invalidate(void) {
    /*
        22e254:	e3a01302 	mov	r1, #134217728	; 0x8000000
        22e258:	ea64cfc5 	b	1b62174 <TRecObject::$SetFlags(unsigned long)>
    */
}

/**
 * Symbol: TUnit::CountStrokes(void)
 * Address: 0022e25c
 */
TUnit::CountStrokes(void) {
    /*
        22e25c:	e3a00000 	mov	r0, #0	; 0x0
        22e260:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnit::GetStroke(unsigned long)
 * Address: 0022e264
 */
TUnit::GetStroke(unsigned long) {
    /*
        22e264:	e3a00000 	mov	r0, #0	; 0x0
        22e268:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnit::GetAllStrokes(void)
 * Address: 0022e26c
 */
TUnit::GetAllStrokes(void) {
    /*
        22e26c:	e3a00000 	mov	r0, #0	; 0x0
        22e270:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnit::OwnsStroke(void)
 * Address: 0022e274
 */
TUnit::OwnsStroke(void) {
    /*
        22e274:	e3a00000 	mov	r0, #0	; 0x0
        22e278:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnit::ContextID(void)
 * Address: 0022e27c
 */
TUnit::ContextID(void) {
    /*
        22e27c:	e3a00000 	mov	r0, #0	; 0x0
        22e280:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnit::SetContextID(unsigned long)
 * Address: 0022e284
 */
TUnit::SetContextID(unsigned long) {
    /*
        22e284:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnit::SetBBox(FRect *)
 * Address: 0022e288
 */
TUnit::SetBBox(FRect *) {
    /*
        22e288:	e280200c 	add	r2, r0, #12	; 0xc
        22e28c:	e1a00001 	mov	r0, r1
        22e290:	e1a01002 	mov	r1, r2
        22e294:	ea64d3d8 	b	1b631fc <$UnfixRect>
    */
}

/**
 * Symbol: TUnit::GetBBox(FRect *)
 * Address: 0022e298
 */
TUnit::GetBBox(FRect *) {
    /*
        22e298:	e1a0c00d 	mov	ip, sp
        22e29c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22e2a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e2a4:	e1a04001 	mov	r4, r1
        22e2a8:	e280100c 	add	r1, r0, #12	; 0xc
        22e2ac:	e1a00004 	mov	r0, r4
        22e2b0:	eb64c31d 	bl	1b5ef2c <$FixRect>
        22e2b4:	e1a00004 	mov	r0, r4
        22e2b8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnit::IUnit(TDomain *, unsigned long, unsigned long, TArray *)
 * Address: 0022e2bc
 */
TUnit::IUnit(TDomain *, unsigned long, unsigned long, TArray *) {
    /*
        22e2bc:	e1a0c00d 	mov	ip, sp
        22e2c0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        22e2c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e2c8:	e1a04000 	mov	r4, r0
        22e2cc:	e1a05001 	mov	r5, r1
        22e2d0:	e1a06003 	mov	r6, r3
        22e2d4:	e3a07000 	mov	r7, #0	; 0x0
        22e2d8:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        22e2dc:	e5801014 	str	r1, [r0, #20]	; fField20
        22e2e0:	e5802008 	str	r2, [r0, #8]	; fField8
        22e2e4:	e1a01002 	mov	r1, r2
        22e2e8:	e5807004 	str	r7, [r0, #4]	; fField4
        22e2ec:	ebfbb559 	bl	11b858 <NamePtr(char *, unsigned long)>
        22e2f0:	e5c47026 	strb	r7, [r4, #38]	; fField38
        22e2f4:	eb64f8c2 	bl	1b6c604 <$GetTicks(void)>
        22e2f8:	e584001c 	str	r0, [r4, #28]	; fField28
        22e2fc:	e5c47021 	strb	r7, [r4, #33]	; fField33
        22e300:	e5c47020 	strb	r7, [r4, #32]	; fField32
        22e304:	e5c47023 	strb	r7, [r4, #35]	; fField35
        22e308:	e5c47022 	strb	r7, [r4, #34]	; fField34
        22e30c:	e5c46024 	strb	r6, [r4, #36]	; fField36
        22e310:	e3350000 	teq	r5, #0	; 0x0
        22e314:	15b51018 	ldrne	r1, [r5, #24]!	; fField24
        22e318:	e1a00004 	mov	r0, r4
        22e31c:	03a01000 	moveq	r1, #0	; 0x0
        22e320:	eb64cf8f 	bl	1b62164 <TUnit::$SetDelay(unsigned long)>
        22e324:	e5c47025 	strb	r7, [r4, #37]	; fField37
        22e328:	e1a01008 	mov	r1, r8
        22e32c:	e5847018 	str	r7, [r4, #24]	; fField24
        22e330:	e1a00004 	mov	r0, r4
        22e334:	eb64dff8 	bl	1b6631c <TUnit::$SetAreas(TAreaList *)>
        22e338:	e3a000ff 	mov	r0, #255	; 0xff
        22e33c:	e5c40029 	strb	r0, [r4, #41]	; fField41
        22e340:	e5c40028 	strb	r0, [r4, #40]	; fField40
        22e344:	e5c4702b 	strb	r7, [r4, #43]	; fField43
        22e348:	e5c4702a 	strb	r7, [r4, #42]	; fField42
        22e34c:	e5c4702d 	strb	r7, [r4, #45]	; fField45
        22e350:	e5c4702c 	strb	r7, [r4, #44]	; fField44
        22e354:	e24dd010 	sub	sp, sp, #16	; 0x10
        22e358:	e1a0000d 	mov	r0, sp
        22e35c:	eb64d38a 	bl	1b6318c <$SetRectangleEmpty>
        22e360:	e1a0100d 	mov	r1, sp
        22e364:	e1a00004 	mov	r0, r4
        22e368:	eb64dfec 	bl	1b66320 <TUnit::$SetBBox(FRect *)>
        22e36c:	e1a00007 	mov	r0, r7
        22e370:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TUnit::Dispose(void)
 * Address: 0022e52c
 */
TUnit::Dispose(void) {
    /*
        22e52c:	e1a0c00d 	mov	ip, sp
        22e530:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22e534:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e538:	e1a04000 	mov	r4, r0
        22e53c:	e5901000 	ldr	r1, [r0]
        22e540:	e1a0e00f 	mov	lr, pc
        22e544:	e281f018 	add	pc, r1, #24	; 0x18
        22e548:	e3300000 	teq	r0, #0	; 0x0
        22e54c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        22e550:	e1a00004 	mov	r0, r4
        22e554:	e5941000 	ldr	r1, [r4]
        22e558:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        22e55c:	e281f010 	add	pc, r1, #16	; 0x10
    */
}

/**
 * Symbol: TUnit::IDispose(void)
 * Address: 0022e560
 */
TUnit::IDispose(void) {
    /*
        22e560:	e1a0c00d 	mov	ip, sp
        22e564:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22e568:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e56c:	e1a04000 	mov	r4, r0
        22e570:	e3a01000 	mov	r1, #0	; 0x0
        22e574:	eb64df68 	bl	1b6631c <TUnit::$SetAreas(TAreaList *)>
        22e578:	e1b00004 	movs	r0, r4
        22e57c:	13a01001 	movne	r1, #1	; 0x1
        22e580:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        22e584:	1afffe46 	bne	22dea4 <TUnit::__dt(void)>
        22e588:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnit::DoneUsingUnit(void)
 * Address: 0022e58c
 */
TUnit::DoneUsingUnit(void) {
    /*
        22e58c:	e3a01000 	mov	r1, #0	; 0x0
        22e590:	ea64df61 	b	1b6631c <TUnit::$SetAreas(TAreaList *)>
    */
}

/**
 * Symbol: TUnit::SizeInBytes(void)
 * Address: 0022e594
 */
TUnit::SizeInBytes(void) {
    /*
        22e594:	e1a0c00d 	mov	ip, sp
        22e598:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22e59c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e5a0:	e1a04000 	mov	r4, r0
        22e5a4:	e3a05000 	mov	r5, #0	; 0x0
        22e5a8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22e5ac:	e3300000 	teq	r0, #0	; 0x0
        22e5b0:	0a000007 	beq	22e5d4 <TUnit::SizeInBytes(void)+0x40>
        22e5b4:	e1a00004 	mov	r0, r4
        22e5b8:	e3a01802 	mov	r1, #131072	; 0x20000
        22e5bc:	eb64d309 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        22e5c0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22e5c4:	e5901000 	ldr	r1, [r0]
        22e5c8:	e1a0e00f 	mov	lr, pc
        22e5cc:	e281f008 	add	pc, r1, #8	; 0x8
        22e5d0:	e1a05000 	mov	r5, r0
        22e5d4:	e1a00004 	mov	r0, r4
        22e5d8:	eb64d2f0 	bl	1b631a0 <TRecObject::$SizeInBytes(void)>
        22e5dc:	e0800005 	add	r0, r0, r5
        22e5e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnit::Clone(void)
 * Address: 0022e5e4
 */
TUnit::Clone(void) {
    /*
        22e5e4:	e5d01025 	ldrb	r1, [r0, #37]	; fField37
        22e5e8:	e2811001 	add	r1, r1, #1	; 0x1
        22e5ec:	e5c01025 	strb	r1, [r0, #37]	; fField37
        22e5f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnit::Release(void)
 * Address: 0022e5f4
 */
TUnit::Release(void) {
    /*
        22e5f4:	e5d01025 	ldrb	r1, [r0, #37]	; fField37
        22e5f8:	e2411001 	sub	r1, r1, #1	; 0x1
        22e5fc:	e5c01025 	strb	r1, [r0, #37]	; fField37
        22e600:	e5d00025 	ldrb	r0, [r0, #37]	; fField37
        22e604:	e1a00c00 	mov	r0, r0, lsl #24
        22e608:	e1b00c40 	movs	r0, r0, asr #24
        22e60c:	53a00000 	movpl	r0, #0	; 0x0
        22e610:	43a00001 	movmi	r0, #1	; 0x1
        22e614:	e20000ff 	and	r0, r0, #255	; 0xff
        22e618:	e1a0f00e 	mov	pc, lr
    */
}

