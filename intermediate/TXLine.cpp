#include "include/TXLine.h"

/**
 * Symbol: TXLine::__ct(TXStyledText *, TXRulerRange *)
 * Address: 0023cba8
 */
TXLine::TXLine(TXStyledText *, TXRulerRange *) {
    /*
        23cba8:	e1a0c00d 	mov	ip, sp
        23cbac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23cbb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23cbb4:	e1b04000 	movs	r4, r0
        23cbb8:	e1a06001 	mov	r6, r1
        23cbbc:	e1a05002 	mov	r5, r2
        23cbc0:	1a000003 	bne	23cbd4 <TXLine::__ct(TXStyledText *, TXRulerRange *)+0x2c>
        23cbc4:	e3a00030 	mov	r0, #48	; 0x30
        23cbc8:	eb6646da 	bl	1bce738 <$__nw(unsigned int)>
        23cbcc:	e1b04000 	movs	r4, r0
        23cbd0:	0a00000a 	beq	23cc00 <TXLine::__ct(TXStyledText *, TXRulerRange *)+0x58>
        23cbd4:	e59f002c 	ldr	r0, [pc, #2c]	; 23cc08 <TXLine::__ct(TXStyledText *, TXRulerRange *)+0x60>
        23cbd8:	e5840000 	str	r0, [r4]
        23cbdc:	e3e00000 	mvn	r0, #0	; 0x0
        23cbe0:	e3a02000 	mov	r2, #0	; 0x0
        23cbe4:	e3a01018 	mov	r1, #24	; 0x18
        23cbe8:	e5840010 	str	r0, [r4, #16]	; fField16
        23cbec:	e3a00000 	mov	r0, #0	; 0x0
        23cbf0:	e5845008 	str	r5, [r4, #8]	; fField8
        23cbf4:	e5846004 	str	r6, [r4, #4]	; fField4
        23cbf8:	eb6521b2 	bl	1b852c8 <TXArray::$__ct(unsigned char, int)>
        23cbfc:	e5840020 	str	r0, [r4, #32]	; fField32
        23cc00:	e1a00004 	mov	r0, r4
        23cc04:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23cc08:	0001f9fc 	streqd	pc, [r1], -ip
    */
}

/**
 * Symbol: TXLine::__dt(void)
 * Address: 0023cc0c
 */
TXLine::~TXLine(void) {
    /*
        23cc0c:	e1a0c00d 	mov	ip, sp
        23cc10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23cc14:	e24cb004 	sub	fp, ip, #4	; 0x4
        23cc18:	e1a04000 	mov	r4, r0
        23cc1c:	e1a05001 	mov	r5, r1
        23cc20:	e59f002c 	ldr	r0, [pc, #2c]	; 23cc54 <TXLine::__dt(void)+0x48>
        23cc24:	e5840000 	str	r0, [r4]
        23cc28:	e5940020 	ldr	r0, [r4, #32]	; fField32
        23cc2c:	e3300000 	teq	r0, #0	; 0x0
        23cc30:	0a000002 	beq	23cc40 <TXLine::__dt(void)+0x34>
        23cc34:	e3a01001 	mov	r1, #1	; 0x1
        23cc38:	e1a0e00f 	mov	lr, pc
        23cc3c:	e590f000 	ldr	pc, [r0]
        23cc40:	e3150001 	tst	r5, #1	; 0x1
        23cc44:	11a00004 	movne	r0, r4
        23cc48:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        23cc4c:	1a6642a3 	bne	1bcd6e0 <$__dl(void *)>
        23cc50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        23cc54:	0001f9fc 	streqd	pc, [r1], -ip
    */
}

/**
 * Symbol: TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)
 * Address: 0023cc58
 */
TXLine::DefineRunWidths(unsigned short const *, long, unsigned char) {
    /*
        23cc58:	e1a0c00d 	mov	ip, sp
        23cc5c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23cc60:	e24cb004 	sub	fp, ip, #4	; 0x4
        23cc64:	e1a04000 	mov	r4, r0
        23cc68:	e1a05002 	mov	r5, r2
        23cc6c:	e203a0ff 	and	sl, r3, #255	; 0xff
        23cc70:	e5900024 	ldr	r0, [r0, #36]	; fField36
        23cc74:	e3a08000 	mov	r8, #0	; 0x0
        23cc78:	e3500000 	cmp	r0, #0	; 0x0
        23cc7c:	b1a00008 	movlt	r0, r8
        23cc80:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23cc84:	e24dd010 	sub	sp, sp, #16	; 0x10
        23cc88:	e3a01000 	mov	r1, #0	; 0x0
        23cc8c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        23cc90:	eb65218e 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23cc94:	e1a07000 	mov	r7, r0
        23cc98:	e3a06000 	mov	r6, #0	; 0x0
        23cc9c:	e44d6008 	strb	r6, [sp], -#8	; fField8
        23cca0:	e3a09000 	mov	r9, #0	; 0x0
        23cca4:	e3a08000 	mov	r8, #0	; 0x0
        23cca8:	e1a0100a 	mov	r1, sl
        23ccac:	e594200c 	ldr	r2, [r4, #12]	; fField12
        23ccb0:	e1a00002 	mov	r0, r2
        23ccb4:	e5922000 	ldr	r2, [r2]
        23ccb8:	e1a0e00f 	mov	lr, pc
        23ccbc:	e282f054 	add	pc, r2, #84	; 0x54
        23ccc0:	e58d0004 	str	r0, [sp, #4]	; fField4
        23ccc4:	e5940024 	ldr	r0, [r4, #36]	; fField36
        23ccc8:	e3a0a000 	mov	sl, #0	; 0x0
        23cccc:	e58d0000 	str	r0, [sp]
        23ccd0:	e3500000 	cmp	r0, #0	; 0x0
        23ccd4:	ba000042 	blt	23cde4 <TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)+0x18c>
        23ccd8:	e5d70014 	ldrb	r0, [r7, #20]	; fField20
        23ccdc:	e3300000 	teq	r0, #0	; 0x0
        23cce0:	0a000021 	beq	23cd6c <TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)+0x114>
        23cce4:	e3300009 	teq	r0, #9	; 0x9
        23cce8:	13a00000 	movne	r0, #0	; 0x0
        23ccec:	1587000c 	strne	r0, [r7, #12]	; fField12
        23ccf0:	1a000036 	bne	23cdd0 <TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)+0x178>
        23ccf4:	e5dd0008 	ldrb	r0, [sp, #8]	; fField8
        23ccf8:	e3300000 	teq	r0, #0	; 0x0
        23ccfc:	0a000009 	beq	23cd28 <TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)+0xd0>
        23cd00:	e0453006 	sub	r3, r5, r6
        23cd04:	e1a02008 	mov	r2, r8
        23cd08:	e28d1008 	add	r1, sp, #8	; 0x8
        23cd0c:	e594c00c 	ldr	ip, [r4, #12]	; fField12
        23cd10:	e1a0000c 	mov	r0, ip
        23cd14:	e59cc000 	ldr	ip, [ip]
        23cd18:	e1a0e00f 	mov	lr, pc
        23cd1c:	e28cf064 	add	pc, ip, #100	; 0x64
        23cd20:	e589000c 	str	r0, [r9, #12]	; fField12
        23cd24:	e0806006 	add	r6, r0, r6
        23cd28:	e594c00c 	ldr	ip, [r4, #12]	; fField12
        23cd2c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        23cd30:	e0861000 	add	r1, r6, r0
        23cd34:	e28d3008 	add	r3, sp, #8	; 0x8
        23cd38:	e1a02005 	mov	r2, r5
        23cd3c:	e1a0000c 	mov	r0, ip
        23cd40:	e59cc000 	ldr	ip, [ip]
        23cd44:	e1a0e00f 	mov	lr, pc
        23cd48:	e28cf05c 	add	pc, ip, #92	; 0x5c
        23cd4c:	e587000c 	str	r0, [r7, #12]	; fField12
        23cd50:	e5dd0008 	ldrb	r0, [sp, #8]	; fField8
        23cd54:	e3300000 	teq	r0, #0	; 0x0
        23cd58:	0a00001a 	beq	23cdc8 <TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)+0x170>
        23cd5c:	e1a09007 	mov	r9, r7
        23cd60:	e3a08000 	mov	r8, #0	; 0x0
        23cd64:	e587800c 	str	r8, [r7, #12]	; fField12
        23cd68:	ea000016 	b	23cdc8 <TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)+0x170>
        23cd6c:	e1a02007 	mov	r2, r7
        23cd70:	e1a00004 	mov	r0, r4
        23cd74:	e51b1034 	ldr	r1, [fp, -#52]
        23cd78:	eb6552ce 	bl	1b918b8 <TXLine::$RunMeasure(unsigned short const *, TXLineRunInfo const *)>
        23cd7c:	e587000c 	str	r0, [r7, #12]	; fField12
        23cd80:	e5dd0008 	ldrb	r0, [sp, #8]	; fField8
        23cd84:	e3300000 	teq	r0, #0	; 0x0
        23cd88:	0a00000e 	beq	23cdc8 <TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)+0x170>
        23cd8c:	e5dd0010 	ldrb	r0, [sp, #16]	; fField16
        23cd90:	e3300002 	teq	r0, #2	; 0x2
        23cd94:	1a000009 	bne	23cdc0 <TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)+0x168>
        23cd98:	e1a03007 	mov	r3, r7
        23cd9c:	e92d0008 	stmdb	sp!, {r3}
        23cda0:	e1a03008 	mov	r3, r8
        23cda4:	e28d200c 	add	r2, sp, #12	; 0xc
        23cda8:	e1a00004 	mov	r0, r4
        23cdac:	e51b1034 	ldr	r1, [fp, -#52]
        23cdb0:	eb6552c5 	bl	1b918cc <TXLine::$CalcAlignTabWidth(unsigned short const *, TXPendingTab *, long, TXLineRunInfo const &)>
        23cdb4:	e28dd004 	add	sp, sp, #4	; 0x4
        23cdb8:	e589000c 	str	r0, [r9, #12]	; fField12
        23cdbc:	e0806006 	add	r6, r0, r6
        23cdc0:	e597000c 	ldr	r0, [r7, #12]	; fField12
        23cdc4:	e0808008 	add	r8, r0, r8
        23cdc8:	e597000c 	ldr	r0, [r7, #12]	; fField12
        23cdcc:	e0806006 	add	r6, r0, r6
        23cdd0:	e28aa001 	add	sl, sl, #1	; 0x1
        23cdd4:	e2877018 	add	r7, r7, #24	; 0x18
        23cdd8:	e59d0000 	ldr	r0, [sp]
        23cddc:	e15a0000 	cmp	sl, r0
        23cde0:	daffffbc 	ble	23ccd8 <TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)+0x80>
        23cde4:	e5dd0008 	ldrb	r0, [sp, #8]	; fField8
        23cde8:	e3300000 	teq	r0, #0	; 0x0
        23cdec:	0a000009 	beq	23ce18 <TXLine::DefineRunWidths(unsigned short const *, long, unsigned char)+0x1c0>
        23cdf0:	e0453006 	sub	r3, r5, r6
        23cdf4:	e1a02008 	mov	r2, r8
        23cdf8:	e28d1008 	add	r1, sp, #8	; 0x8
        23cdfc:	e5b4c00c 	ldr	ip, [r4, #12]!	; fField12
        23ce00:	e1a0000c 	mov	r0, ip
        23ce04:	e59cc000 	ldr	ip, [ip]
        23ce08:	e1a0e00f 	mov	lr, pc
        23ce0c:	e28cf064 	add	pc, ip, #100	; 0x64
        23ce10:	e5a9000c 	str	r0, [r9, #12]!	; fField12
        23ce14:	e0806006 	add	r6, r0, r6
        23ce18:	e1a00006 	mov	r0, r6
        23ce1c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::CalcFullJustifPortions(unsigned short const *, long *, long *)
 * Address: 0023ce20
 */
TXLine::CalcFullJustifPortions(unsigned short const *, long *, long *) {
    /*
        23ce20:	e1a0c00d 	mov	ip, sp
        23ce24:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23ce28:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ce2c:	e1a04000 	mov	r4, r0
        23ce30:	e1a06002 	mov	r6, r2
        23ce34:	e1a05003 	mov	r5, r3
        23ce38:	e5900020 	ldr	r0, [r0, #32]	; fField32
        23ce3c:	e3a01000 	mov	r1, #0	; 0x0
        23ce40:	ebffcf26 	bl	230ae0 <TXArray::Lock(unsigned char)>
        23ce44:	e2849020 	add	r9, r4, #32	; 0x20
        23ce48:	e8990201 	ldmia	r9, {r0, r9}
        23ce4c:	e1a01009 	mov	r1, r9
        23ce50:	eb65211e 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23ce54:	e1a07000 	mov	r7, r0
        23ce58:	e3a0a000 	mov	sl, #0	; 0x0
        23ce5c:	e3a00000 	mov	r0, #0	; 0x0
        23ce60:	e3a08000 	mov	r8, #0	; 0x0
        23ce64:	e3590000 	cmp	r9, #0	; 0x0
        23ce68:	e5850000 	str	r0, [r5]
        23ce6c:	ba00001f 	blt	23cef0 <TXLine::CalcFullJustifPortions(unsigned short const *, long *, long *)+0xd0>
        23ce70:	e5d70014 	ldrb	r0, [r7, #20]	; fField20
        23ce74:	e3300000 	teq	r0, #0	; 0x0
        23ce78:	0a000004 	beq	23ce90 <TXLine::CalcFullJustifPortions(unsigned short const *, long *, long *)+0x70>
        23ce7c:	e3300009 	teq	r0, #9	; 0x9
        23ce80:	13a00000 	movne	r0, #0	; 0x0
        23ce84:	14860004 	strne	r0, [r6], #4	; fField4
        23ce88:	1a000014 	bne	23cee0 <TXLine::CalcFullJustifPortions(unsigned short const *, long *, long *)+0xc0>
        23ce8c:	ea000017 	b	23cef0 <TXLine::CalcFullJustifPortions(unsigned short const *, long *, long *)+0xd0>
        23ce90:	e24dd004 	sub	sp, sp, #4	; 0x4
        23ce94:	e5972000 	ldr	r2, [r7]
        23ce98:	e40d2010 	str	r2, [sp], -#16	; fField16
        23ce9c:	e5950000 	ldr	r0, [r5]
        23cea0:	e2800001 	add	r0, r0, #1	; 0x1
        23cea4:	e1a0300d 	mov	r3, sp
        23cea8:	e1a02007 	mov	r2, r7
        23ceac:	e5850000 	str	r0, [r5]
        23ceb0:	e1a00004 	mov	r0, r4
        23ceb4:	e51b1034 	ldr	r1, [fp, -#52]
        23ceb8:	eb65527c 	bl	1b918b0 <TXLine::$GetRunDisplayInfo(unsigned short const *, TXLineRunInfo const *, TXLineRunDisplayInfo *)>
        23cebc:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        23cec0:	e1a0100d 	mov	r1, sp
        23cec4:	e1a00002 	mov	r0, r2
        23cec8:	e5922000 	ldr	r2, [r2]
        23cecc:	e1a0e00f 	mov	lr, pc
        23ced0:	e282f068 	add	pc, r2, #104	; 0x68
        23ced4:	e4860004 	str	r0, [r6], #4	; fField4
        23ced8:	e080a00a 	add	sl, r0, sl
        23cedc:	e28dd014 	add	sp, sp, #20	; 0x14
        23cee0:	e2888001 	add	r8, r8, #1	; 0x1
        23cee4:	e2477018 	sub	r7, r7, #24	; 0x18
        23cee8:	e1580009 	cmp	r8, r9
        23ceec:	daffffdf 	ble	23ce70 <TXLine::CalcFullJustifPortions(unsigned short const *, long *, long *)+0x50>
        23cef0:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        23cef4:	ebffcf99 	bl	230d60 <TXArray::Unlock(void)>
        23cef8:	e1a0000a 	mov	r0, sl
        23cefc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::DefineRunsExtraWidths(unsigned short const *, long)
 * Address: 0023cf00
 */
TXLine::DefineRunsExtraWidths(unsigned short const *, long) {
    /*
        23cf00:	e3320000 	teq	r2, #0	; 0x0
        23cf04:	01a0f00e 	moveq	pc, lr
        23cf08:	e1a0c00d 	mov	ip, sp
        23cf0c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23cf10:	e24cb004 	sub	fp, ip, #4	; 0x4
        23cf14:	e1a05000 	mov	r5, r0
        23cf18:	e1a04002 	mov	r4, r2
        23cf1c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        23cf20:	e3500064 	cmp	r0, #100	; 0x64
        23cf24:	a91ba9f0 	ldmgedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23cf28:	e3500000 	cmp	r0, #0	; 0x0
        23cf2c:	b91ba9f0 	ldmltdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23cf30:	1a000004 	bne	23cf48 <TXLine::DefineRunsExtraWidths(unsigned short const *, long)+0x48>
        23cf34:	e3a01000 	mov	r1, #0	; 0x0
        23cf38:	e5b50020 	ldr	r0, [r5, #32]!	; fField32
        23cf3c:	eb6520e3 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23cf40:	e5a04010 	str	r4, [r0, #16]!	; fField16
        23cf44:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23cf48:	e24ddf65 	sub	sp, sp, #404	; 0x194
        23cf4c:	e1a0300d 	mov	r3, sp
        23cf50:	e28d2004 	add	r2, sp, #4	; 0x4
        23cf54:	e1a00005 	mov	r0, r5
        23cf58:	eb65525d 	bl	1b918d4 <TXLine::$CalcFullJustifPortions(unsigned short const *, long *, long *)>
        23cf5c:	e1b07000 	movs	r7, r0
        23cf60:	0a000013 	beq	23cfb4 <TXLine::DefineRunsExtraWidths(unsigned short const *, long)+0xb4>
        23cf64:	e28d8004 	add	r8, sp, #4	; 0x4
        23cf68:	e285501c 	add	r5, r5, #28	; 0x1c
        23cf6c:	e9b50003 	ldmib	r5!, {r0, r1}
        23cf70:	eb6520d6 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23cf74:	e1a06000 	mov	r6, r0
        23cf78:	e3a05000 	mov	r5, #0	; 0x0
        23cf7c:	e59d0000 	ldr	r0, [sp]
        23cf80:	e3500000 	cmp	r0, #0	; 0x0
        23cf84:	da00000a 	ble	23cfb4 <TXLine::DefineRunsExtraWidths(unsigned short const *, long)+0xb4>
        23cf88:	e1a01007 	mov	r1, r7
        23cf8c:	e4980004 	ldr	r0, [r8], #4	; fField4
        23cf90:	eb66904a 	bl	1be10c0 <$FixedDivide>
        23cf94:	e1a01004 	mov	r1, r4
        23cf98:	eb669049 	bl	1be10c4 <$FixedMultiply>
        23cf9c:	e2855001 	add	r5, r5, #1	; 0x1
        23cfa0:	e5860010 	str	r0, [r6, #16]	; fField16
        23cfa4:	e2466018 	sub	r6, r6, #24	; 0x18
        23cfa8:	e59d0000 	ldr	r0, [sp]
        23cfac:	e1550000 	cmp	r5, r0
        23cfb0:	bafffff4 	blt	23cf88 <TXLine::DefineRunsExtraWidths(unsigned short const *, long)+0x88>
        23cfb4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::Draw(Rect const &, int)
 * Address: 0023cfb8
 */
TXLine::Draw(Rect const &, int) {
    /*
        23cfb8:	e1a0c00d 	mov	ip, sp
        23cfbc:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23cfc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23cfc4:	e1a04000 	mov	r4, r0
        23cfc8:	e1a05001 	mov	r5, r1
        23cfcc:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
        23cfd0:	e3300000 	teq	r0, #0	; 0x0
        23cfd4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23cfd8:	e24dd010 	sub	sp, sp, #16	; 0x10
        23cfdc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        23cfe0:	e5951002 	ldr	r1, [r5, #2]
        23cfe4:	e1a01821 	mov	r1, r1, lsr #16
        23cfe8:	e0807801 	add	r7, r0, r1, lsl #16
        23cfec:	e3a01000 	mov	r1, #0	; 0x0
        23cff0:	e5940020 	ldr	r0, [r4, #32]	; fField32
        23cff4:	ebffceb9 	bl	230ae0 <TXArray::Lock(unsigned char)>
        23cff8:	e1a06000 	mov	r6, r0
        23cffc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23d000:	e5b0c008 	ldr	ip, [r0, #8]!	; fField8
        23d004:	e58dc00c 	str	ip, [sp, #12]	; fField12
        23d008:	e28d3008 	add	r3, sp, #8	; 0x8
        23d00c:	e1a0000c 	mov	r0, ip
        23d010:	e2842010 	add	r2, r4, #16	; 0x10
        23d014:	e8920006 	ldmia	r2, {r1, r2}
        23d018:	e59cc000 	ldr	ip, [ip]
        23d01c:	e1a0e00f 	mov	lr, pc
        23d020:	e28cf018 	add	pc, ip, #24	; 0x18
        23d024:	e58d0004 	str	r0, [sp, #4]	; fField4
        23d028:	e5950000 	ldr	r0, [r5]
        23d02c:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        23d030:	e0821840 	add	r1, r2, r0, asr #16
        23d034:	e58d1000 	str	r1, [sp]
        23d038:	e3a08000 	mov	r8, #0	; 0x0
        23d03c:	e5949024 	ldr	r9, [r4, #36]	; fField36
        23d040:	e3590000 	cmp	r9, #0	; 0x0
        23d044:	ba000021 	blt	23d0d0 <TXLine::Draw(Rect const &, int)+0x118>
        23d048:	e5d60014 	ldrb	r0, [r6, #20]	; fField20
        23d04c:	e3300000 	teq	r0, #0	; 0x0
        23d050:	1a000016 	bne	23d0b0 <TXLine::Draw(Rect const &, int)+0xf8>
        23d054:	e2870902 	add	r0, r7, #32768	; 0x8000
        23d058:	e1a00840 	mov	r0, r0, asr #16
        23d05c:	e1a00800 	mov	r0, r0, lsl #16
        23d060:	e1a00840 	mov	r0, r0, asr #16
        23d064:	e596a000 	ldr	sl, [r6]
        23d068:	e59d1000 	ldr	r1, [sp]
        23d06c:	eb645213 	bl	1b518c0 <$MoveTo__FlT1>
        23d070:	e24dd010 	sub	sp, sp, #16	; 0x10
        23d074:	e1a0300d 	mov	r3, sp
        23d078:	e1a02006 	mov	r2, r6
        23d07c:	e1a00004 	mov	r0, r4
        23d080:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        23d084:	eb655209 	bl	1b918b0 <TXLine::$GetRunDisplayInfo(unsigned short const *, TXLineRunInfo const *, TXLineRunDisplayInfo *)>
        23d088:	e51b302c 	ldr	r3, [fp, -#44]	; fField44
        23d08c:	e92d0008 	stmdb	sp!, {r3}
        23d090:	e1a03005 	mov	r3, r5
        23d094:	e1a02007 	mov	r2, r7
        23d098:	e28d1004 	add	r1, sp, #4	; 0x4
        23d09c:	e1a0000a 	mov	r0, sl
        23d0a0:	e59ac000 	ldr	ip, [sl]
        23d0a4:	e1a0e00f 	mov	lr, pc
        23d0a8:	e28cf064 	add	pc, ip, #100	; 0x64
        23d0ac:	e28dd014 	add	sp, sp, #20	; 0x14
        23d0b0:	e286100c 	add	r1, r6, #12	; 0xc
        23d0b4:	e8910003 	ldmia	r1, {r0, r1}
        23d0b8:	e0800001 	add	r0, r0, r1
        23d0bc:	e0807007 	add	r7, r0, r7
        23d0c0:	e2888001 	add	r8, r8, #1	; 0x1
        23d0c4:	e2866018 	add	r6, r6, #24	; 0x18
        23d0c8:	e1580009 	cmp	r8, r9
        23d0cc:	daffffdd 	ble	23d048 <TXLine::Draw(Rect const &, int)+0x90>
        23d0d0:	e28d2008 	add	r2, sp, #8	; 0x8
        23d0d4:	e8920006 	ldmia	r2, {r1, r2}
        23d0d8:	e1a00002 	mov	r0, r2
        23d0dc:	e5922000 	ldr	r2, [r2]
        23d0e0:	e1a0e00f 	mov	lr, pc
        23d0e4:	e282f014 	add	pc, r2, #20	; 0x14
        23d0e8:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        23d0ec:	ebffcf1b 	bl	230d60 <TXArray::Unlock(void)>
        23d0f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::CharToRun(TXOffset, long *)
 * Address: 0023d0f4
 */
TXLine::CharToRun(TXOffset, long *) {
    /*
        23d0f4:	e1a0c00d 	mov	ip, sp
        23d0f8:	e92dd87f 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, fp, ip, lr, pc}
        23d0fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23d100:	e1a04003 	mov	r4, r3
        23d104:	e5906024 	ldr	r6, [r0, #36]	; fField36
        23d108:	e3560000 	cmp	r6, #0	; 0x0
        23d10c:	b3e00000 	mvnlt	r0, #0	; 0x0
        23d110:	b91ba870 	ldmltdb	fp, {r4, r5, r6, fp, sp, pc}
        23d114:	e5902010 	ldr	r2, [r0, #16]	; fField16
        23d118:	e51b1024 	ldr	r1, [fp, -#36]	; fField36
        23d11c:	e0411002 	sub	r1, r1, r2
        23d120:	e50b1024 	str	r1, [fp, -#36]	; fField36
        23d124:	e5905028 	ldr	r5, [r0, #40]	; fField40
        23d128:	e55b1020 	ldrb	r1, [fp, -#32]	; fField32
        23d12c:	e3310000 	teq	r1, #0	; 0x0
        23d130:	151b1024 	ldrne	r1, [fp, -#36]	; fField36
        23d134:	13310000 	teqne	r1, #0	; 0x0
        23d138:	151b1024 	ldrne	r1, [fp, -#36]	; fField36
        23d13c:	12411001 	subne	r1, r1, #1	; 0x1
        23d140:	150b1024 	strne	r1, [fp, -#36]	; fField36
        23d144:	e51b1024 	ldr	r1, [fp, -#36]	; fField36
        23d148:	e5902018 	ldr	r2, [r0, #24]	; fField24
        23d14c:	e2422001 	sub	r2, r2, #1	; 0x1
        23d150:	e1510002 	cmp	r1, r2
        23d154:	a1a01002 	movge	r1, r2
        23d158:	e50b1024 	str	r1, [fp, -#36]	; fField36
        23d15c:	e5900020 	ldr	r0, [r0, #32]	; fField32
        23d160:	e3a01000 	mov	r1, #0	; 0x0
        23d164:	eb652059 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23d168:	e1a01000 	mov	r1, r0
        23d16c:	e3a00000 	mov	r0, #0	; 0x0
        23d170:	e3560000 	cmp	r6, #0	; 0x0
        23d174:	da000010 	ble	23d1bc <TXLine::CharToRun(TXOffset, long *)+0xc8>
        23d178:	e5912004 	ldr	r2, [r1, #4]	; fField4
        23d17c:	e51b3024 	ldr	r3, [fp, -#36]	; fField36
        23d180:	e1520003 	cmp	r2, r3
        23d184:	ca000004 	bgt	23d19c <TXLine::CharToRun(TXOffset, long *)+0xa8>
        23d188:	e5913008 	ldr	r3, [r1, #8]	; fField8
        23d18c:	e0822003 	add	r2, r2, r3
        23d190:	e51b3024 	ldr	r3, [fp, -#36]	; fField36
        23d194:	e1520003 	cmp	r2, r3
        23d198:	ca000007 	bgt	23d1bc <TXLine::CharToRun(TXOffset, long *)+0xc8>
        23d19c:	e5912010 	ldr	r2, [r1, #16]	; fField16
        23d1a0:	e591300c 	ldr	r3, [r1, #12]	; fField12
        23d1a4:	e0832002 	add	r2, r3, r2
        23d1a8:	e0825005 	add	r5, r2, r5
        23d1ac:	e2800001 	add	r0, r0, #1	; 0x1
        23d1b0:	e2811018 	add	r1, r1, #24	; 0x18
        23d1b4:	e1500006 	cmp	r0, r6
        23d1b8:	baffffee 	blt	23d178 <TXLine::CharToRun(TXOffset, long *)+0x84>
        23d1bc:	e3340000 	teq	r4, #0	; 0x0
        23d1c0:	15845000 	strne	r5, [r4]
        23d1c4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::CharacterToPixel(TXOffset)
 * Address: 0023d1c8
 */
TXLine::CharacterToPixel(TXOffset) {
    /*
        23d1c8:	e1a0c00d 	mov	ip, sp
        23d1cc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23d1d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23d1d4:	e1a05001 	mov	r5, r1
        23d1d8:	e1a04000 	mov	r4, r0
        23d1dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        23d1e0:	e1a0300d 	mov	r3, sp
        23d1e4:	eb6551bd 	bl	1b918e0 <TXLine::$CharToRun(TXOffset, long *)>
        23d1e8:	e1b06000 	movs	r6, r0
        23d1ec:	5a000005 	bpl	23d208 <TXLine::CharacterToPixel(TXOffset)+0x40>
        23d1f0:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        23d1f4:	e2800902 	add	r0, r0, #32768	; 0x8000
        23d1f8:	e1a00840 	mov	r0, r0, asr #16
        23d1fc:	e1a00800 	mov	r0, r0, lsl #16
        23d200:	e1a00840 	mov	r0, r0, asr #16
        23d204:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23d208:	e3a01000 	mov	r1, #0	; 0x0
        23d20c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        23d210:	ebffce32 	bl	230ae0 <TXArray::Lock(unsigned char)>
        23d214:	e1a01006 	mov	r1, r6
        23d218:	e5940020 	ldr	r0, [r4, #32]	; fField32
        23d21c:	eb65202b 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23d220:	e1a07000 	mov	r7, r0
        23d224:	e5940010 	ldr	r0, [r4, #16]	; fField16
        23d228:	e5971004 	ldr	r1, [r7, #4]	; fField4
        23d22c:	e0800001 	add	r0, r0, r1
        23d230:	e0455000 	sub	r5, r5, r0
        23d234:	e24dd004 	sub	sp, sp, #4	; 0x4
        23d238:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23d23c:	e5b06008 	ldr	r6, [r0, #8]!	; fField8
        23d240:	e1a0300d 	mov	r3, sp
        23d244:	e1a00006 	mov	r0, r6
        23d248:	e2842010 	add	r2, r4, #16	; 0x10
        23d24c:	e8920006 	ldmia	r2, {r1, r2}
        23d250:	e596c000 	ldr	ip, [r6]
        23d254:	e1a0e00f 	mov	lr, pc
        23d258:	e28cf018 	add	pc, ip, #24	; 0x18
        23d25c:	e1a03005 	mov	r3, r5
        23d260:	e1a02007 	mov	r2, r7
        23d264:	e1a01000 	mov	r1, r0
        23d268:	e1a00004 	mov	r0, r4
        23d26c:	eb655190 	bl	1b918b4 <TXLine::$RunCharToPixel(unsigned short const *, TXLineRunInfo const *, long)>
        23d270:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        23d274:	e0800001 	add	r0, r0, r1
        23d278:	e2800902 	add	r0, r0, #32768	; 0x8000
        23d27c:	e1a00840 	mov	r0, r0, asr #16
        23d280:	e1a05800 	mov	r5, r0, lsl #16
        23d284:	e1a05845 	mov	r5, r5, asr #16
        23d288:	e1a00006 	mov	r0, r6
        23d28c:	e59d1000 	ldr	r1, [sp]
        23d290:	e5962000 	ldr	r2, [r6]
        23d294:	e1a0e00f 	mov	lr, pc
        23d298:	e282f014 	add	pc, r2, #20	; 0x14
        23d29c:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        23d2a0:	ebffceae 	bl	230d60 <TXArray::Unlock(void)>
        23d2a4:	e1a00005 	mov	r0, r5
        23d2a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)
 * Address: 0023d2ac
 */
TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char) {
    /*
        23d2ac:	e1a0c00d 	mov	ip, sp
        23d2b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23d2b4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23d2b8:	e24cb014 	sub	fp, ip, #20	; 0x14
        23d2bc:	e1a06000 	mov	r6, r0
        23d2c0:	e1a04002 	mov	r4, r2
        23d2c4:	e1a05003 	mov	r5, r3
        23d2c8:	e59b0024 	ldr	r0, [fp, #36]	; fField36
        23d2cc:	e20010ff 	and	r1, r0, #255	; 0xff
        23d2d0:	e59b8018 	ldr	r8, [fp, #24]	; fField24
        23d2d4:	e59b9014 	ldr	r9, [fp, #20]	; fField20
        23d2d8:	e59ba020 	ldr	sl, [fp, #32]	; fField32
        23d2dc:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        23d2e0:	e24dd008 	sub	sp, sp, #8	; 0x8
        23d2e4:	e1a01009 	mov	r1, r9
        23d2e8:	e5960020 	ldr	r0, [r6, #32]	; fField32
        23d2ec:	eb651ff7 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23d2f0:	e1a07000 	mov	r7, r0
        23d2f4:	e590000c 	ldr	r0, [r0, #12]	; fField12
        23d2f8:	e5971010 	ldr	r1, [r7, #16]	; fField16
        23d2fc:	e0801001 	add	r1, r0, r1
        23d300:	e58d1004 	str	r1, [sp, #4]	; fField4
        23d304:	e59a0000 	ldr	r0, [sl]
        23d308:	e58d0000 	str	r0, [sp]
        23d30c:	e0800001 	add	r0, r0, r1
        23d310:	e58a0000 	str	r0, [sl]
        23d314:	e5970004 	ldr	r0, [r7, #4]	; fField4
        23d318:	e0444000 	sub	r4, r4, r0
        23d31c:	e0455000 	sub	r5, r5, r0
        23d320:	e3a00000 	mov	r0, #0	; 0x0
        23d324:	e3550000 	cmp	r5, #0	; 0x0
        23d328:	a5971008 	ldrge	r1, [r7, #8]	; fField8
        23d32c:	a1510004 	cmpge	r1, r4
        23d330:	ba000005 	blt	23d34c <TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)+0xa0>
        23d334:	e3540000 	cmp	r4, #0	; 0x0
        23d338:	b3a04000 	movlt	r4, #0	; 0x0
        23d33c:	e1510005 	cmp	r1, r5
        23d340:	b1a05001 	movlt	r5, r1
        23d344:	e1350004 	teq	r5, r4
        23d348:	1a000000 	bne	23d350 <TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)+0xa4>
        23d34c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23d350:	e59d1000 	ldr	r1, [sp]
        23d354:	e3340000 	teq	r4, #0	; 0x0
        23d358:	e5881000 	str	r1, [r8]
        23d35c:	1a000014 	bne	23d3b4 <TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)+0x108>
        23d360:	e3390000 	teq	r9, #0	; 0x0
        23d364:	1a000003 	bne	23d378 <TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)+0xcc>
        23d368:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        23d36c:	e3310000 	teq	r1, #0	; 0x0
        23d370:	0a000000 	beq	23d378 <TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)+0xcc>
        23d374:	e5880000 	str	r0, [r8]
        23d378:	e24dd004 	sub	sp, sp, #4	; 0x4
        23d37c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        23d380:	e58d0000 	str	r0, [sp]
        23d384:	e5971008 	ldr	r1, [r7, #8]	; fField8
        23d388:	e1310005 	teq	r1, r5
        23d38c:	1a000010 	bne	23d3d4 <TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)+0x128>
        23d390:	e5961024 	ldr	r1, [r6, #36]	; fField36
        23d394:	e1310009 	teq	r1, r9
        23d398:	1a000003 	bne	23d3ac <TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)+0x100>
        23d39c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        23d3a0:	e3310000 	teq	r1, #0	; 0x0
        23d3a4:	15b6002c 	ldrne	r0, [r6, #44]!	; fField44
        23d3a8:	1a000010 	bne	23d3f0 <TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)+0x144>
        23d3ac:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        23d3b0:	ea00000d 	b	23d3ec <TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)+0x140>
        23d3b4:	e1a03004 	mov	r3, r4
        23d3b8:	e1a02007 	mov	r2, r7
        23d3bc:	e1a00006 	mov	r0, r6
        23d3c0:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        23d3c4:	eb65513a 	bl	1b918b4 <TXLine::$RunCharToPixel(unsigned short const *, TXLineRunInfo const *, long)>
        23d3c8:	e5981000 	ldr	r1, [r8]
        23d3cc:	e0800001 	add	r0, r0, r1
        23d3d0:	eaffffe7 	b	23d374 <TXLine::CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)+0xc8>
        23d3d4:	e1a03005 	mov	r3, r5
        23d3d8:	e1a02007 	mov	r2, r7
        23d3dc:	e1a00006 	mov	r0, r6
        23d3e0:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        23d3e4:	eb655132 	bl	1b918b4 <TXLine::$RunCharToPixel(unsigned short const *, TXLineRunInfo const *, long)>
        23d3e8:	e59d1000 	ldr	r1, [sp]
        23d3ec:	e0800001 	add	r0, r0, r1
        23d3f0:	e58d0000 	str	r0, [sp]
        23d3f4:	e5981000 	ldr	r1, [r8]
        23d3f8:	e1500001 	cmp	r0, r1
        23d3fc:	b1a0100d 	movlt	r1, sp
        23d400:	b1a00008 	movlt	r0, r8
        23d404:	bbffdb3f 	bllt	234108 <TXSwapLong__FPlT1>
        23d408:	e59d0000 	ldr	r0, [sp]
        23d40c:	e5981000 	ldr	r1, [r8]
        23d410:	e0400001 	sub	r0, r0, r1
        23d414:	e59b101c 	ldr	r1, [fp, #28]	; fField28
        23d418:	e5810000 	str	r0, [r1]
        23d41c:	e0450004 	sub	r0, r5, r4
        23d420:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::GetLineHilite(TXOffsetRange, TXLineHilite *, unsigned char)
 * Address: 0023d424
 */
TXLine::GetLineHilite(TXOffsetRange, TXLineHilite *, unsigned char) {
    /*
        23d424:	e1a0c00d 	mov	ip, sp
        23d428:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23d42c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        23d430:	e24cb014 	sub	fp, ip, #20	; 0x14
        23d434:	e59b001c 	ldr	r0, [fp, #28]	; fField28
        23d438:	e20080ff 	and	r8, r0, #255	; 0xff
        23d43c:	e3a04000 	mov	r4, #0	; 0x0
        23d440:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        23d444:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        23d448:	e1300001 	teq	r0, r1
        23d44c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23d450:	1a000012 	bne	23d4a0 <TXLine::GetLineHilite(TXOffsetRange, TXLineHilite *, unsigned char)+0x7c>
        23d454:	e28b2008 	add	r2, fp, #8	; 0x8
        23d458:	e8920006 	ldmia	r2, {r1, r2}
        23d45c:	eb655120 	bl	1b918e4 <TXLine::$CharacterToPixel(TXOffset)>
        23d460:	e1a01000 	mov	r1, r0
        23d464:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23d468:	e5b0202c 	ldr	r2, [r0, #44]!	; fField44
        23d46c:	e3e00000 	mvn	r0, #0	; 0x0
        23d470:	e0800842 	add	r0, r0, r2, asr #16
        23d474:	e1510000 	cmp	r1, r0
        23d478:	b1a00001 	movlt	r0, r1
        23d47c:	e3500000 	cmp	r0, #0	; 0x0
        23d480:	d1a00004 	movle	r0, r4
        23d484:	e1a01800 	mov	r1, r0, lsl #16
        23d488:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        23d48c:	e5801000 	str	r1, [r0]
        23d490:	e3a01801 	mov	r1, #65536	; 0x10000
        23d494:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        23d498:	e5a01004 	str	r1, [r0, #4]!	; fField4
        23d49c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        23d4a0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23d4a4:	e2601000 	rsb	r1, r0, #0	; 0x0
        23d4a8:	e28b0008 	add	r0, fp, #8	; 0x8
        23d4ac:	ebffdb0e 	bl	2340ec <TXOffsetRange::Offset(long)>
        23d4b0:	e59b0008 	ldr	r0, [fp, #8]	; fField8
        23d4b4:	e3500000 	cmp	r0, #0	; 0x0
        23d4b8:	b58b4008 	strlt	r4, [fp, #8]	; fField8
        23d4bc:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23d4c0:	e59b2010 	ldr	r2, [fp, #16]	; fField16
        23d4c4:	e5901018 	ldr	r1, [r0, #24]	; fField24
        23d4c8:	e1520001 	cmp	r2, r1
        23d4cc:	c58b1010 	strgt	r1, [fp, #16]	; fField16
        23d4d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        23d4d4:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        23d4d8:	e59b2010 	ldr	r2, [fp, #16]	; fField16
        23d4dc:	e0425001 	sub	r5, r2, r1
        23d4e0:	e5900028 	ldr	r0, [r0, #40]	; fField40
        23d4e4:	e58d0004 	str	r0, [sp, #4]	; fField4
        23d4e8:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23d4ec:	e5901004 	ldr	r1, [r0, #4]	; fField4
        23d4f0:	e5b16008 	ldr	r6, [r1, #8]!	; fField8
        23d4f4:	e1a0300d 	mov	r3, sp
        23d4f8:	e280000c 	add	r0, r0, #12	; 0xc
        23d4fc:	e9b00006 	ldmib	r0!, {r1, r2}
        23d500:	e1a00006 	mov	r0, r6
        23d504:	e596c000 	ldr	ip, [r6]
        23d508:	e1a0e00f 	mov	lr, pc
        23d50c:	e28cf018 	add	pc, ip, #24	; 0x18
        23d510:	e1a07000 	mov	r7, r0
        23d514:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23d518:	e5900020 	ldr	r0, [r0, #32]	; fField32
        23d51c:	e3a01000 	mov	r1, #0	; 0x0
        23d520:	ebffcd6e 	bl	230ae0 <TXArray::Lock(unsigned char)>
        23d524:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        23d528:	e5a04004 	str	r4, [r0, #4]!	; fField4
        23d52c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23d530:	e3a04000 	mov	r4, #0	; 0x0
        23d534:	e5b09024 	ldr	r9, [r0, #36]!	; fField36
        23d538:	ea00001b 	b	23d5ac <TXLine::GetLineHilite(TXOffsetRange, TXLineHilite *, unsigned char)+0x188>
        23d53c:	e24dd008 	sub	sp, sp, #8	; 0x8
        23d540:	e1a03008 	mov	r3, r8
        23d544:	e28d200c 	add	r2, sp, #12	; 0xc
        23d548:	e1a0100d 	mov	r1, sp
        23d54c:	e28d0004 	add	r0, sp, #4	; 0x4
        23d550:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23d554:	e1a03004 	mov	r3, r4
        23d558:	e92d0008 	stmdb	sp!, {r3}
        23d55c:	e1a01007 	mov	r1, r7
        23d560:	e99b0005 	ldmib	fp, {r0, r2}
        23d564:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        23d568:	eb6550de 	bl	1b918e8 <TXLine::$CalcRunHilite(unsigned short const *, long, long, long, long *, long *, long *, unsigned char)>
        23d56c:	e28dd014 	add	sp, sp, #20	; 0x14
        23d570:	e1b01000 	movs	r1, r0
        23d574:	0a00000a 	beq	23d5a4 <TXLine::GetLineHilite(TXOffsetRange, TXLineHilite *, unsigned char)+0x180>
        23d578:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        23d57c:	e5902004 	ldr	r2, [r0, #4]	; fField4
        23d580:	e3320000 	teq	r2, #0	; 0x0
        23d584:	059d2004 	ldreq	r2, [sp, #4]	; fField4
        23d588:	05802000 	streq	r2, [r0]
        23d58c:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        23d590:	e5903004 	ldr	r3, [r0, #4]	; fField4
        23d594:	e59d2000 	ldr	r2, [sp]
        23d598:	e0832002 	add	r2, r3, r2
        23d59c:	e0455001 	sub	r5, r5, r1
        23d5a0:	e5a02004 	str	r2, [r0, #4]!	; fField4
        23d5a4:	e28dd008 	add	sp, sp, #8	; 0x8
        23d5a8:	e2844001 	add	r4, r4, #1	; 0x1
        23d5ac:	e1540009 	cmp	r4, r9
        23d5b0:	ca000001 	bgt	23d5bc <TXLine::GetLineHilite(TXOffsetRange, TXLineHilite *, unsigned char)+0x198>
        23d5b4:	e3350000 	teq	r5, #0	; 0x0
        23d5b8:	1affffdf 	bne	23d53c <TXLine::GetLineHilite(TXOffsetRange, TXLineHilite *, unsigned char)+0x118>
        23d5bc:	e1a00006 	mov	r0, r6
        23d5c0:	e59d1000 	ldr	r1, [sp]
        23d5c4:	e5962000 	ldr	r2, [r6]
        23d5c8:	e1a0e00f 	mov	lr, pc
        23d5cc:	e282f014 	add	pc, r2, #20	; 0x14
        23d5d0:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23d5d4:	e5900020 	ldr	r0, [r0, #32]	; fField32
        23d5d8:	ebffcde0 	bl	230d60 <TXArray::Unlock(void)>
        23d5dc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::PixelToRun(long *)
 * Address: 0023d5e0
 */
TXLine::PixelToRun(long *) {
    /*
        23d5e0:	e1a0c00d 	mov	ip, sp
        23d5e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23d5e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        23d5ec:	e1a05000 	mov	r5, r0
        23d5f0:	e1a04001 	mov	r4, r1
        23d5f4:	e5901028 	ldr	r1, [r0, #40]	; fField40
        23d5f8:	e5940000 	ldr	r0, [r4]
        23d5fc:	e0500001 	subs	r0, r0, r1
        23d600:	e5840000 	str	r0, [r4]
        23d604:	43a00000 	movmi	r0, #0	; 0x0
        23d608:	45840000 	strmi	r0, [r4]
        23d60c:	e3a01000 	mov	r1, #0	; 0x0
        23d610:	e5950020 	ldr	r0, [r5, #32]	; fField32
        23d614:	eb651f2d 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23d618:	e1a02000 	mov	r2, r0
        23d61c:	e3a01000 	mov	r1, #0	; 0x0
        23d620:	e3a00000 	mov	r0, #0	; 0x0
        23d624:	e5953024 	ldr	r3, [r5, #36]	; fField36
        23d628:	e3530000 	cmp	r3, #0	; 0x0
        23d62c:	ba00000b 	blt	23d660 <TXLine::PixelToRun(long *)+0x80>
        23d630:	e282c00c 	add	ip, r2, #12	; 0xc
        23d634:	e89c1002 	ldmia	ip, {r1, ip}
        23d638:	e081100c 	add	r1, r1, ip
        23d63c:	e594c000 	ldr	ip, [r4]
        23d640:	e15c0001 	cmp	ip, r1
        23d644:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        23d648:	e04cc001 	sub	ip, ip, r1
        23d64c:	e2800001 	add	r0, r0, #1	; 0x1
        23d650:	e2822018 	add	r2, r2, #24	; 0x18
        23d654:	e1500003 	cmp	r0, r3
        23d658:	e584c000 	str	ip, [r4]
        23d65c:	dafffff3 	ble	23d630 <TXLine::PixelToRun(long *)+0x50>
        23d660:	e5841000 	str	r1, [r4]
        23d664:	e5b50024 	ldr	r0, [r5, #36]!	; fField36
        23d668:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::PixelToCharacter(long, TXOffsetRange *)
 * Address: 0023d66c
 */
TXLine::PixelToCharacter(long, TXOffsetRange *) {
    /*
        23d66c:	e1a0c00d 	mov	ip, sp
        23d670:	e92dd8f7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, fp, ip, lr, pc}
        23d674:	e24cb004 	sub	fp, ip, #4	; 0x4
        23d678:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        23d67c:	e3a04000 	mov	r4, #0	; 0x0
        23d680:	e5901024 	ldr	r1, [r0, #36]	; fField36
        23d684:	e3510000 	cmp	r1, #0	; 0x0
        23d688:	aa000007 	bge	23d6ac <TXLine::PixelToCharacter(long, TXOffsetRange *)+0x40>
        23d68c:	e3a03000 	mov	r3, #0	; 0x0
        23d690:	e92d0008 	stmdb	sp!, {r3}
        23d694:	e5b02010 	ldr	r2, [r0, #16]!	; fField16
        23d698:	e1a01002 	mov	r1, r2
        23d69c:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23d6a0:	ebffda79 	bl	23408c <TXOffsetRange::Set(long, long, unsigned char, unsigned char)>
        23d6a4:	e1a00004 	mov	r0, r4
        23d6a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23d6ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        23d6b0:	e24b1024 	sub	r1, fp, #36	; 0x24
        23d6b4:	eb65508d 	bl	1b918f0 <TXLine::$PixelToRun(long *)>
        23d6b8:	e1a04000 	mov	r4, r0
        23d6bc:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        23d6c0:	e5901004 	ldr	r1, [r0, #4]	; fField4
        23d6c4:	e5b16008 	ldr	r6, [r1, #8]!	; fField8
        23d6c8:	e1a0300d 	mov	r3, sp
        23d6cc:	e280000c 	add	r0, r0, #12	; 0xc
        23d6d0:	e9b00006 	ldmib	r0!, {r1, r2}
        23d6d4:	e1a00006 	mov	r0, r6
        23d6d8:	e596c000 	ldr	ip, [r6]
        23d6dc:	e1a0e00f 	mov	lr, pc
        23d6e0:	e28cf018 	add	pc, ip, #24	; 0x18
        23d6e4:	e1a07000 	mov	r7, r0
        23d6e8:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        23d6ec:	e5900020 	ldr	r0, [r0, #32]	; fField32
        23d6f0:	e3a01000 	mov	r1, #0	; 0x0
        23d6f4:	ebffccf9 	bl	230ae0 <TXArray::Lock(unsigned char)>
        23d6f8:	e24dd010 	sub	sp, sp, #16	; 0x10
        23d6fc:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        23d700:	e5900020 	ldr	r0, [r0, #32]	; fField32
        23d704:	e1a01004 	mov	r1, r4
        23d708:	eb651ef0 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23d70c:	e1a04000 	mov	r4, r0
        23d710:	e1a0300d 	mov	r3, sp
        23d714:	e5905000 	ldr	r5, [r0]
        23d718:	e1a02000 	mov	r2, r0
        23d71c:	e1a01007 	mov	r1, r7
        23d720:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        23d724:	eb655061 	bl	1b918b0 <TXLine::$GetRunDisplayInfo(unsigned short const *, TXLineRunInfo const *, TXLineRunDisplayInfo *)>
        23d728:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
        23d72c:	e3300000 	teq	r0, #0	; 0x0
        23d730:	1a000005 	bne	23d74c <TXLine::PixelToCharacter(long, TXOffsetRange *)+0xe0>
        23d734:	e1a00005 	mov	r0, r5
        23d738:	e5951000 	ldr	r1, [r5]
        23d73c:	e1a0e00f 	mov	lr, pc
        23d740:	e281f01c 	add	pc, r1, #28	; 0x1c
        23d744:	e3100002 	tst	r0, #2	; 0x2
        23d748:	0a000012 	beq	23d798 <TXLine::PixelToCharacter(long, TXOffsetRange *)+0x12c>
        23d74c:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
        23d750:	e1a00800 	mov	r0, r0, lsl #16
        23d754:	e1a00820 	mov	r0, r0, lsr #16
        23d758:	e330000a 	teq	r0, #10	; 0xa
        23d75c:	1330000d 	teqne	r0, #13	; 0xd
        23d760:	1a000007 	bne	23d784 <TXLine::PixelToCharacter(long, TXOffsetRange *)+0x118>
        23d764:	e3a03000 	mov	r3, #0	; 0x0
        23d768:	e92d0008 	stmdb	sp!, {r3}
        23d76c:	e3a02000 	mov	r2, #0	; 0x0
        23d770:	e3a01000 	mov	r1, #0	; 0x0
        23d774:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23d778:	ebffda43 	bl	23408c <TXOffsetRange::Set(long, long, unsigned char, unsigned char)>
        23d77c:	e28dd004 	add	sp, sp, #4	; 0x4
        23d780:	ea00000b 	b	23d7b4 <TXLine::PixelToCharacter(long, TXOffsetRange *)+0x148>
        23d784:	e1a0000d 	mov	r0, sp
        23d788:	e24b2024 	sub	r2, fp, #36	; 0x24
        23d78c:	e8920006 	ldmia	r2, {r1, r2}
        23d790:	eb657141 	bl	1b99c9c <$TXIndivisiblePixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *)>
        23d794:	ea000006 	b	23d7b4 <TXLine::PixelToCharacter(long, TXOffsetRange *)+0x148>
        23d798:	e1a0100d 	mov	r1, sp
        23d79c:	e1a00005 	mov	r0, r5
        23d7a0:	e24b3024 	sub	r3, fp, #36	; 0x24
        23d7a4:	e893000c 	ldmia	r3, {r2, r3}
        23d7a8:	e595c000 	ldr	ip, [r5]
        23d7ac:	e1a0e00f 	mov	lr, pc
        23d7b0:	e28cf05c 	add	pc, ip, #92	; 0x5c
        23d7b4:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        23d7b8:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
        23d7bc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23d7c0:	e0811000 	add	r1, r1, r0
        23d7c4:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23d7c8:	ebffda47 	bl	2340ec <TXOffsetRange::Offset(long)>
        23d7cc:	e1a00006 	mov	r0, r6
        23d7d0:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        23d7d4:	e5962000 	ldr	r2, [r6]
        23d7d8:	e1a0e00f 	mov	lr, pc
        23d7dc:	e282f014 	add	pc, r2, #20	; 0x14
        23d7e0:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        23d7e4:	e5900020 	ldr	r0, [r0, #32]	; fField32
        23d7e8:	ebffcd5c 	bl	230d60 <TXArray::Unlock(void)>
        23d7ec:	e5940000 	ldr	r0, [r4]
        23d7f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::GetRunDisplayInfo(unsigned short const *, TXLineRunInfo const *, TXLineRunDisplayInfo *)
 * Address: 0023d7f4
 */
TXLine::GetRunDisplayInfo(unsigned short const *, TXLineRunInfo const *, TXLineRunDisplayInfo *) {
    /*
        23d7f4:	e5920004 	ldr	r0, [r2, #4]	; fField4
        23d7f8:	e0810080 	add	r0, r1, r0, lsl #1
        23d7fc:	e5830000 	str	r0, [r3]
        23d800:	e5920008 	ldr	r0, [r2, #8]	; fField8
        23d804:	e5830004 	str	r0, [r3, #4]	; fField4
        23d808:	e592000c 	ldr	r0, [r2, #12]	; fField12
        23d80c:	e5830008 	str	r0, [r3, #8]	; fField8
        23d810:	e5b20010 	ldr	r0, [r2, #16]!	; fField16
        23d814:	e5a3000c 	str	r0, [r3, #12]!	; fField12
        23d818:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXLine::RunCharToPixel(unsigned short const *, TXLineRunInfo const *, long)
 * Address: 0023d81c
 */
TXLine::RunCharToPixel(unsigned short const *, TXLineRunInfo const *, long) {
    /*
        23d81c:	e1a0c00d 	mov	ip, sp
        23d820:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23d824:	e24cb004 	sub	fp, ip, #4	; 0x4
        23d828:	e1a04002 	mov	r4, r2
        23d82c:	e1b05003 	movs	r5, r3
        23d830:	15942008 	ldrne	r2, [r4, #8]	; fField8
        23d834:	11320005 	teqne	r2, r5
        23d838:	1a000008 	bne	23d860 <TXLine::RunCharToPixel(unsigned short const *, TXLineRunInfo const *, long)+0x44>
        23d83c:	e3350000 	teq	r5, #0	; 0x0
        23d840:	13a00000 	movne	r0, #0	; 0x0
        23d844:	03a00001 	moveq	r0, #1	; 0x1
        23d848:	e31000ff 	tst	r0, #255	; 0xff
        23d84c:	02844008 	addeq	r4, r4, #8	; 0x8
        23d850:	09b40003 	ldmeqib	r4!, {r0, r1}
        23d854:	00800001 	addeq	r0, r0, r1
        23d858:	13a00000 	movne	r0, #0	; 0x0
        23d85c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23d860:	e24dd010 	sub	sp, sp, #16	; 0x10
        23d864:	e1a0300d 	mov	r3, sp
        23d868:	e1a02004 	mov	r2, r4
        23d86c:	eb65500f 	bl	1b918b0 <TXLine::$GetRunDisplayInfo(unsigned short const *, TXLineRunInfo const *, TXLineRunDisplayInfo *)>
        23d870:	e5946000 	ldr	r6, [r4]
        23d874:	e5d40014 	ldrb	r0, [r4, #20]	; fField20
        23d878:	e3300000 	teq	r0, #0	; 0x0
        23d87c:	1a000005 	bne	23d898 <TXLine::RunCharToPixel(unsigned short const *, TXLineRunInfo const *, long)+0x7c>
        23d880:	e1a00006 	mov	r0, r6
        23d884:	e5961000 	ldr	r1, [r6]
        23d888:	e1a0e00f 	mov	lr, pc
        23d88c:	e281f01c 	add	pc, r1, #28	; 0x1c
        23d890:	e3100002 	tst	r0, #2	; 0x2
        23d894:	0a000003 	beq	23d8a8 <TXLine::RunCharToPixel(unsigned short const *, TXLineRunInfo const *, long)+0x8c>
        23d898:	e1a01005 	mov	r1, r5
        23d89c:	e1a0000d 	mov	r0, sp
        23d8a0:	eb6570fe 	bl	1b99ca0 <$TXIndivisibleCharToPixel(TXLineRunDisplayInfo const &, long)>
        23d8a4:	ea000005 	b	23d8c0 <TXLine::RunCharToPixel(unsigned short const *, TXLineRunInfo const *, long)+0xa4>
        23d8a8:	e1a02005 	mov	r2, r5
        23d8ac:	e1a0100d 	mov	r1, sp
        23d8b0:	e1a00006 	mov	r0, r6
        23d8b4:	e5963000 	ldr	r3, [r6]
        23d8b8:	e1a0e00f 	mov	lr, pc
        23d8bc:	e283f060 	add	pc, r3, #96	; 0x60
        23d8c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::RunMeasure(unsigned short const *, TXLineRunInfo const *)
 * Address: 0023d8c4
 */
TXLine::RunMeasure(unsigned short const *, TXLineRunInfo const *) {
    /*
        23d8c4:	e1a0c00d 	mov	ip, sp
        23d8c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23d8cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23d8d0:	e1a04002 	mov	r4, r2
        23d8d4:	e24dd010 	sub	sp, sp, #16	; 0x10
        23d8d8:	e1a0300d 	mov	r3, sp
        23d8dc:	eb654ff3 	bl	1b918b0 <TXLine::$GetRunDisplayInfo(unsigned short const *, TXLineRunInfo const *, TXLineRunDisplayInfo *)>
        23d8e0:	e1a0100d 	mov	r1, sp
        23d8e4:	e5942000 	ldr	r2, [r4]
        23d8e8:	e1a00002 	mov	r0, r2
        23d8ec:	e5922000 	ldr	r2, [r2]
        23d8f0:	e1a0e00f 	mov	lr, pc
        23d8f4:	e282f070 	add	pc, r2, #112	; 0x70
        23d8f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::DoLineLayout(long, long, long)
 * Address: 0023d8fc
 */
TXLine::DoLineLayout(long, long, long) {
    /*
        23d8fc:	e1a0c00d 	mov	ip, sp
        23d900:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23d904:	e24cb004 	sub	fp, ip, #4	; 0x4
        23d908:	e1a04000 	mov	r4, r0
        23d90c:	e1a05001 	mov	r5, r1
        23d910:	e1a06002 	mov	r6, r2
        23d914:	e1a07003 	mov	r7, r3
        23d918:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23d91c:	e1300001 	teq	r0, r1
        23d920:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23d924:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23d928:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23d92c:	e28d3008 	add	r3, sp, #8	; 0x8
        23d930:	e1a02006 	mov	r2, r6
        23d934:	e1a01005 	mov	r1, r5
        23d938:	e5b0c008 	ldr	ip, [r0, #8]!	; fField8
        23d93c:	e1a0000c 	mov	r0, ip
        23d940:	e59cc000 	ldr	ip, [ip]
        23d944:	e1a0e00f 	mov	lr, pc
        23d948:	e28cf018 	add	pc, ip, #24	; 0x18
        23d94c:	e1a08000 	mov	r8, r0
        23d950:	e1a00807 	mov	r0, r7, lsl #16
        23d954:	e584002c 	str	r0, [r4, #44]	; fField44
        23d958:	e2844010 	add	r4, r4, #16	; 0x10
        23d95c:	e8840060 	stmia	r4, {r5, r6}
        23d960:	e2444010 	sub	r4, r4, #16	; 0x10
        23d964:	e3a00000 	mov	r0, #0	; 0x0
        23d968:	e5943008 	ldr	r3, [r4, #8]	; fField8
        23d96c:	e58d5000 	str	r5, [sp]
        23d970:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        23d974:	e1a00003 	mov	r0, r3
        23d978:	e89d0006 	ldmia	sp, {r1, r2}
        23d97c:	e5933000 	ldr	r3, [r3]
        23d980:	e1a0e00f 	mov	lr, pc
        23d984:	e283f00c 	add	pc, r3, #12	; 0xc
        23d988:	e1a02006 	mov	r2, r6
        23d98c:	e1a01005 	mov	r1, r5
        23d990:	e584000c 	str	r0, [r4, #12]	; fField12
        23d994:	e1a00004 	mov	r0, r4
        23d998:	eb654fca 	bl	1b918c8 <TXLine::$DefineRuns(long, long)>
        23d99c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        23d9a0:	e5901004 	ldr	r1, [r0, #4]	; fField4
        23d9a4:	e2411001 	sub	r1, r1, #1	; 0x1
        23d9a8:	e5841024 	str	r1, [r4, #36]	; fField36
        23d9ac:	e3a01000 	mov	r1, #0	; 0x0
        23d9b0:	ebffcc4a 	bl	230ae0 <TXArray::Lock(unsigned char)>
        23d9b4:	e3a00000 	mov	r0, #0	; 0x0
        23d9b8:	e3360000 	teq	r6, #0	; 0x0
        23d9bc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        23d9c0:	0a000005 	beq	23d9dc <TXLine::DoLineLayout(long, long, long)+0xe0>
        23d9c4:	e1a0300d 	mov	r3, sp
        23d9c8:	e1a02006 	mov	r2, r6
        23d9cc:	e1a01008 	mov	r1, r8
        23d9d0:	e1a00004 	mov	r0, r4
        23d9d4:	eb654fb9 	bl	1b918c0 <TXLine::$CalcVisibleLength(unsigned short const *, long, long *)>
        23d9d8:	ea000000 	b	23d9e0 <TXLine::DoLineLayout(long, long, long)+0xe4>
        23d9dc:	e3a00000 	mov	r0, #0	; 0x0
        23d9e0:	e1b07000 	movs	r7, r0
        23d9e4:	13a00000 	movne	r0, #0	; 0x0
        23d9e8:	03a00001 	moveq	r0, #1	; 0x1
        23d9ec:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        23d9f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        23d9f4:	e1a0200d 	mov	r2, sp
        23d9f8:	e594300c 	ldr	r3, [r4, #12]	; fField12
        23d9fc:	e1a00003 	mov	r0, r3
        23da00:	e59f1030 	ldr	r1, [pc, #30]	; 23da38 <TXLine::DoLineLayout(long, long, long)+0x13c>
        23da04:	e5933000 	ldr	r3, [r3]
        23da08:	e1a0e00f 	mov	lr, pc
        23da0c:	e283f02c 	add	pc, r3, #44	; 0x2c
        23da10:	e5dd0000 	ldrb	r0, [sp]
        23da14:	e3a0a001 	mov	sl, #1	; 0x1
        23da18:	e3300010 	teq	r0, #16	; 0x10
        23da1c:	1a000006 	bne	23da3c <TXLine::DoLineLayout(long, long, long)+0x140>
        23da20:	e3370000 	teq	r7, #0	; 0x0
        23da24:	13a00008 	movne	r0, #8	; 0x8
        23da28:	15cd0000 	strneb	r0, [sp]
        23da2c:	1a000026 	bne	23dacc <TXLine::DoLineLayout(long, long, long)+0x1d0>
        23da30:	e5cda000 	strb	sl, [sp]
        23da34:	ea000037 	b	23db18 <TXLine::DoLineLayout(long, long, long)+0x21c>
        23da38:	6a757374 	bvs	1f9a810 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x389fb8>
        23da3c:	e5dd0000 	ldrb	r0, [sp]
        23da40:	e3300008 	teq	r0, #8	; 0x8
        23da44:	1a00001b 	bne	23dab8 <TXLine::DoLineLayout(long, long, long)+0x1bc>
        23da48:	e0850006 	add	r0, r5, r6
        23da4c:	e2409001 	sub	r9, r0, #1	; 0x1
        23da50:	e3370000 	teq	r7, #0	; 0x0
        23da54:	0a000016 	beq	23dab4 <TXLine::DoLineLayout(long, long, long)+0x1b8>
        23da58:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23da5c:	e1a01009 	mov	r1, r9
        23da60:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
        23da64:	e1a00002 	mov	r0, r2
        23da68:	e5922000 	ldr	r2, [r2]
        23da6c:	e1a0e00f 	mov	lr, pc
        23da70:	e282f01c 	add	pc, r2, #28	; 0x1c
        23da74:	e1a00800 	mov	r0, r0, lsl #16
        23da78:	e1a00820 	mov	r0, r0, lsr #16
        23da7c:	e330000a 	teq	r0, #10	; 0xa
        23da80:	1330000d 	teqne	r0, #13	; 0xd
        23da84:	0a00000a 	beq	23dab4 <TXLine::DoLineLayout(long, long, long)+0x1b8>
        23da88:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23da8c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23da90:	e5901000 	ldr	r1, [r0]
        23da94:	e1a0e00f 	mov	lr, pc
        23da98:	e281f004 	add	pc, r1, #4	; 0x4
        23da9c:	e2400001 	sub	r0, r0, #1	; 0x1
        23daa0:	e1300009 	teq	r0, r9
        23daa4:	13a00000 	movne	r0, #0	; 0x0
        23daa8:	03a00001 	moveq	r0, #1	; 0x1
        23daac:	e31000ff 	tst	r0, #255	; 0xff
        23dab0:	0a000000 	beq	23dab8 <TXLine::DoLineLayout(long, long, long)+0x1bc>
        23dab4:	e5cda000 	strb	sl, [sp]
        23dab8:	e5dd0000 	ldrb	r0, [sp]
        23dabc:	e3300008 	teq	r0, #8	; 0x8
        23dac0:	15dd0000 	ldrneb	r0, [sp]
        23dac4:	13300002 	teqne	r0, #2	; 0x2
        23dac8:	1a000012 	bne	23db18 <TXLine::DoLineLayout(long, long, long)+0x21c>
        23dacc:	e5847018 	str	r7, [r4, #24]	; fField24
        23dad0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        23dad4:	e3300000 	teq	r0, #0	; 0x0
        23dad8:	0a000005 	beq	23daf4 <TXLine::DoLineLayout(long, long, long)+0x1f8>
        23dadc:	e5941024 	ldr	r1, [r4, #36]	; fField36
        23dae0:	e0410000 	sub	r0, r1, r0
        23dae4:	e5840024 	str	r0, [r4, #36]	; fField36
        23dae8:	e2801001 	add	r1, r0, #1	; 0x1
        23daec:	e5940020 	ldr	r0, [r4, #32]	; fField32
        23daf0:	ebffcb7d 	bl	2308ec <TXArray::SetCount(long)>
        23daf4:	e5941024 	ldr	r1, [r4, #36]	; fField36
        23daf8:	e3510000 	cmp	r1, #0	; 0x0
        23dafc:	ba000006 	blt	23db1c <TXLine::DoLineLayout(long, long, long)+0x220>
        23db00:	e5940020 	ldr	r0, [r4, #32]	; fField32
        23db04:	eb651df1 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23db08:	e5901004 	ldr	r1, [r0, #4]	; fField4
        23db0c:	e0471001 	sub	r1, r7, r1
        23db10:	e5a01008 	str	r1, [r0, #8]!	; fField8
        23db14:	ea000000 	b	23db1c <TXLine::DoLineLayout(long, long, long)+0x220>
        23db18:	e5846018 	str	r6, [r4, #24]	; fField24
        23db1c:	e3350000 	teq	r5, #0	; 0x0
        23db20:	0a00000b 	beq	23db54 <TXLine::DoLineLayout(long, long, long)+0x258>
        23db24:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23db28:	e2451001 	sub	r1, r5, #1	; 0x1
        23db2c:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
        23db30:	e1a00002 	mov	r0, r2
        23db34:	e5922000 	ldr	r2, [r2]
        23db38:	e1a0e00f 	mov	lr, pc
        23db3c:	e282f01c 	add	pc, r2, #28	; 0x1c
        23db40:	e1a00800 	mov	r0, r0, lsl #16
        23db44:	e1a00820 	mov	r0, r0, lsr #16
        23db48:	e330000a 	teq	r0, #10	; 0xa
        23db4c:	1330000d 	teqne	r0, #13	; 0xd
        23db50:	1a000001 	bne	23db5c <TXLine::DoLineLayout(long, long, long)+0x260>
        23db54:	e3a00001 	mov	r0, #1	; 0x1
        23db58:	ea000000 	b	23db60 <TXLine::DoLineLayout(long, long, long)+0x264>
        23db5c:	e3a00000 	mov	r0, #0	; 0x0
        23db60:	e20050ff 	and	r5, r0, #255	; 0xff
        23db64:	e1a01005 	mov	r1, r5
        23db68:	e594200c 	ldr	r2, [r4, #12]	; fField12
        23db6c:	e1a00002 	mov	r0, r2
        23db70:	e5922000 	ldr	r2, [r2]
        23db74:	e1a0e00f 	mov	lr, pc
        23db78:	e282f054 	add	pc, r2, #84	; 0x54
        23db7c:	e5840028 	str	r0, [r4, #40]	; fField40
        23db80:	e594000c 	ldr	r0, [r4, #12]	; fField12
        23db84:	e5901000 	ldr	r1, [r0]
        23db88:	e1a0e00f 	mov	lr, pc
        23db8c:	e281f058 	add	pc, r1, #88	; 0x58
        23db90:	e2842028 	add	r2, r4, #40	; 0x28
        23db94:	e8920006 	ldmia	r2, {r1, r2}
        23db98:	e0421001 	sub	r1, r2, r1
        23db9c:	e0416000 	sub	r6, r1, r0
        23dba0:	e1a03005 	mov	r3, r5
        23dba4:	e1a02006 	mov	r2, r6
        23dba8:	e1a01008 	mov	r1, r8
        23dbac:	e1a00004 	mov	r0, r4
        23dbb0:	eb654f46 	bl	1b918d0 <TXLine::$DefineRunWidths(unsigned short const *, long, unsigned char)>
        23dbb4:	e0462000 	sub	r2, r6, r0
        23dbb8:	e5dd0000 	ldrb	r0, [sp]
        23dbbc:	e3300008 	teq	r0, #8	; 0x8
        23dbc0:	1a000003 	bne	23dbd4 <TXLine::DoLineLayout(long, long, long)+0x2d8>
        23dbc4:	e1a01008 	mov	r1, r8
        23dbc8:	e1a00004 	mov	r0, r4
        23dbcc:	eb654f41 	bl	1b918d8 <TXLine::$DefineRunsExtraWidths(unsigned short const *, long)>
        23dbd0:	ea00000d 	b	23dc0c <TXLine::DoLineLayout(long, long, long)+0x310>
        23dbd4:	e5dd0000 	ldrb	r0, [sp]
        23dbd8:	e3300002 	teq	r0, #2	; 0x2
        23dbdc:	05940028 	ldreq	r0, [r4, #40]	; fField40
        23dbe0:	00800002 	addeq	r0, r0, r2
        23dbe4:	0a000007 	beq	23dc08 <TXLine::DoLineLayout(long, long, long)+0x30c>
        23dbe8:	e5dd0000 	ldrb	r0, [sp]
        23dbec:	e3300004 	teq	r0, #4	; 0x4
        23dbf0:	1a000005 	bne	23dc0c <TXLine::DoLineLayout(long, long, long)+0x310>
        23dbf4:	e1a00002 	mov	r0, r2
        23dbf8:	e3a01802 	mov	r1, #131072	; 0x20000
        23dbfc:	eb668d2f 	bl	1be10c0 <$FixedDivide>
        23dc00:	e5941028 	ldr	r1, [r4, #40]	; fField40
        23dc04:	e0800001 	add	r0, r0, r1
        23dc08:	e5840028 	str	r0, [r4, #40]	; fField40
        23dc0c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        23dc10:	ebffcc52 	bl	230d60 <TXArray::Unlock(void)>
        23dc14:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        23dc18:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
        23dc1c:	e1a00002 	mov	r0, r2
        23dc20:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        23dc24:	e5922000 	ldr	r2, [r2]
        23dc28:	e1a0e00f 	mov	lr, pc
        23dc2c:	e282f014 	add	pc, r2, #20	; 0x14
        23dc30:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::CalcVisibleLength(unsigned short const *, long, long *)
 * Address: 0023dc34
 */
TXLine::CalcVisibleLength(unsigned short const *, long, long *) {
    /*
        23dc34:	e1a0c00d 	mov	ip, sp
        23dc38:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23dc3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23dc40:	e1a05000 	mov	r5, r0
        23dc44:	e1a07001 	mov	r7, r1
        23dc48:	e1a06002 	mov	r6, r2
        23dc4c:	e1a04003 	mov	r4, r3
        23dc50:	e5900020 	ldr	r0, [r0, #32]	; fField32
        23dc54:	e3a01000 	mov	r1, #0	; 0x0
        23dc58:	eb651d9c 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23dc5c:	e1a08000 	mov	r8, r0
        23dc60:	e5b50020 	ldr	r0, [r5, #32]!	; fField32
        23dc64:	eb651d9a 	bl	1b852d4 <TXArray::$GetLastElementPtr( const(void))>
        23dc68:	e1a05000 	mov	r5, r0
        23dc6c:	e3a00000 	mov	r0, #0	; 0x0
        23dc70:	e5840000 	str	r0, [r4]
        23dc74:	e9950005 	ldmib	r5, {r0, r2}
        23dc78:	e0871080 	add	r1, r7, r0, lsl #1
        23dc7c:	e5953000 	ldr	r3, [r5]
        23dc80:	e1a00003 	mov	r0, r3
        23dc84:	e5933000 	ldr	r3, [r3]
        23dc88:	e1a0e00f 	mov	lr, pc
        23dc8c:	e283f06c 	add	pc, r3, #108	; 0x6c
        23dc90:	e5951008 	ldr	r1, [r5, #8]	; fField8
        23dc94:	e0411000 	sub	r1, r1, r0
        23dc98:	e0466001 	sub	r6, r6, r1
        23dc9c:	e3500000 	cmp	r0, #0	; 0x0
        23dca0:	05940000 	ldreq	r0, [r4]
        23dca4:	02800001 	addeq	r0, r0, #1	; 0x1
        23dca8:	05840000 	streq	r0, [r4]
        23dcac:	0a000000 	beq	23dcb4 <TXLine::CalcVisibleLength(unsigned short const *, long, long *)+0x80>
        23dcb0:	1a000002 	bne	23dcc0 <TXLine::CalcVisibleLength(unsigned short const *, long, long *)+0x8c>
        23dcb4:	e2455018 	sub	r5, r5, #24	; 0x18
        23dcb8:	e1550008 	cmp	r5, r8
        23dcbc:	2affffec 	bcs	23dc74 <TXLine::CalcVisibleLength(unsigned short const *, long, long *)+0x40>
        23dcc0:	e1a00006 	mov	r0, r6
        23dcc4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::InsertRun(long, long, TXRun *)
 * Address: 0023dcc8
 */
TXLine::InsertRun(long, long, TXRun *) {
    /*
        23dcc8:	e1a0c00d 	mov	ip, sp
        23dccc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23dcd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23dcd4:	e1a05000 	mov	r5, r0
        23dcd8:	e1a04001 	mov	r4, r1
        23dcdc:	e1a06003 	mov	r6, r3
        23dce0:	e1b08002 	movs	r8, r2
        23dce4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23dce8:	e59fa068 	ldr	sl, [pc, #68]	; 23dd58 <TXLine::InsertRun(long, long, TXRun *)+0x90>
        23dcec:	e1a0000a 	mov	r0, sl
        23dcf0:	eb656389 	bl	1b96b1c <TXParagCtrlChars::$GetCurrCtrlOffset(void)>
        23dcf4:	e0409004 	sub	r9, r0, r4
        23dcf8:	e3e03000 	mvn	r3, #0	; 0x0
        23dcfc:	e3a02001 	mov	r2, #1	; 0x1
        23dd00:	e3a01000 	mov	r1, #0	; 0x0
        23dd04:	e5950020 	ldr	r0, [r5, #32]	; fField32
        23dd08:	eb651d74 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        23dd0c:	e1a07000 	mov	r7, r0
        23dd10:	e5806000 	str	r6, [r0]
        23dd14:	e5950010 	ldr	r0, [r5, #16]	; fField16
        23dd18:	e0440000 	sub	r0, r4, r0
        23dd1c:	e5870004 	str	r0, [r7, #4]	; fField4
        23dd20:	e3a00000 	mov	r0, #0	; 0x0
        23dd24:	e3590000 	cmp	r9, #0	; 0x0
        23dd28:	e5870010 	str	r0, [r7, #16]	; fField16
        23dd2c:	1a00000a 	bne	23dd5c <TXLine::InsertRun(long, long, TXRun *)+0x94>
        23dd30:	e3a00001 	mov	r0, #1	; 0x1
        23dd34:	e5870008 	str	r0, [r7, #8]	; fField8
        23dd38:	e1a0000a 	mov	r0, sl
        23dd3c:	eb656377 	bl	1b96b20 <TXParagCtrlChars::$GetCurrCtrlChar(void)>
        23dd40:	e5c70014 	strb	r0, [r7, #20]	; fField20
        23dd44:	e59f100c 	ldr	r1, [pc, #c]	; 23dd58 <TXLine::InsertRun(long, long, TXRun *)+0x90>
        23dd48:	e591008c 	ldr	r0, [r1, #140]
        23dd4c:	e2800001 	add	r0, r0, #1	; 0x1
        23dd50:	e5a1008c 	str	r0, [r1, #140]!
        23dd54:	ea000004 	b	23dd6c <TXLine::InsertRun(long, long, TXRun *)+0xa4>
        23dd58:	0c104de0 	ldceq	13, cr4, [r0], -#896
        23dd5c:	c1580009 	cmpgt	r8, r9
        23dd60:	d5878008 	strle	r8, [r7, #8]	; fField8
        23dd64:	c5879008 	strgt	r9, [r7, #8]	; fField8
        23dd68:	e5c70014 	strb	r0, [r7, #20]	; fField20
        23dd6c:	e5b70008 	ldr	r0, [r7, #8]!	; fField8
        23dd70:	e0804004 	add	r4, r0, r4
        23dd74:	e0588000 	subs	r8, r8, r0
        23dd78:	1affffdb 	bne	23dcec <TXLine::InsertRun(long, long, TXRun *)+0x24>
        23dd7c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXLine::DefineRuns(long, long)
 * Address: 0023dd80
 */
TXLine::DefineRuns(long, long) {
    /*
        23dd80:	e1a0c00d 	mov	ip, sp
        23dd84:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23dd88:	e24cb004 	sub	fp, ip, #4	; 0x4
        23dd8c:	e1a05000 	mov	r5, r0
        23dd90:	e1a06001 	mov	r6, r1
        23dd94:	e1a04002 	mov	r4, r2
        23dd98:	e5900020 	ldr	r0, [r0, #32]	; fField32
        23dd9c:	e3a01000 	mov	r1, #0	; 0x0
        23dda0:	ebffcad1 	bl	2308ec <TXArray::SetCount(long)>
        23dda4:	e3340000 	teq	r4, #0	; 0x0
        23dda8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        23ddac:	e5950004 	ldr	r0, [r5, #4]	; fField4
        23ddb0:	e0863004 	add	r3, r6, r4
        23ddb4:	e1a02006 	mov	r2, r6
        23ddb8:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
        23ddbc:	e59f0060 	ldr	r0, [pc, #60]	; 23de24 <TXLine::DefineRuns(long, long)+0xa4>
        23ddc0:	eb656354 	bl	1b96b18 <TXParagCtrlChars::$Define(TXChars *, long, long)>
        23ddc4:	e24dd018 	sub	sp, sp, #24	; 0x18
        23ddc8:	e5950004 	ldr	r0, [r5, #4]	; fField4
        23ddcc:	e1a02006 	mov	r2, r6
        23ddd0:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
        23ddd4:	e1a0000d 	mov	r0, sp
        23ddd8:	eb655b24 	bl	1b94a70 <TXObjectIterator::$__ct(TXObjectRange const *, long)>
        23dddc:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        23dde0:	e3330000 	teq	r3, #0	; 0x0
        23dde4:	0a00000d 	beq	23de20 <TXLine::DefineRuns(long, long)+0xa0>
        23dde8:	e59d6008 	ldr	r6, [sp, #8]	; fField8
        23ddec:	e1560004 	cmp	r6, r4
        23ddf0:	c1a06004 	movgt	r6, r4
        23ddf4:	e1a02006 	mov	r2, r6
        23ddf8:	e1a00005 	mov	r0, r5
        23ddfc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        23de00:	eb654eaf 	bl	1b918c4 <TXLine::$InsertRun(long, long, TXRun *)>
        23de04:	e0544006 	subs	r4, r4, r6
        23de08:	0a000004 	beq	23de20 <TXLine::DefineRuns(long, long)+0xa0>
        23de0c:	e1a0000d 	mov	r0, sp
        23de10:	eb655b18 	bl	1b94a78 <TXObjectIterator::$Next(void)>
        23de14:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        23de18:	e3330000 	teq	r3, #0	; 0x0
        23de1c:	1afffff1 	bne	23dde8 <TXLine::DefineRuns(long, long)+0x68>
        23de20:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23de24:	0c104de0 	ldceq	13, cr4, [r0], -#896
    */
}

/**
 * Symbol: TXLine::CalcAlignTabWidth(unsigned short const *, TXPendingTab *, long, TXLineRunInfo const &)
 * Address: 0023de28
 */
TXLine::CalcAlignTabWidth(unsigned short const *, TXPendingTab *, long, TXLineRunInfo const &) {
    /*
        23de28:	e1a0c00d 	mov	ip, sp
        23de2c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23de30:	e24cb004 	sub	fp, ip, #4	; 0x4
        23de34:	e1a05000 	mov	r5, r0
        23de38:	e1a07001 	mov	r7, r1
        23de3c:	e1a04002 	mov	r4, r2
        23de40:	e1a06003 	mov	r6, r3
        23de44:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        23de48:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23de4c:	e5b0c008 	ldr	ip, [r0, #8]!	; fField8
        23de50:	e5950010 	ldr	r0, [r5, #16]	; fField16
        23de54:	e5981004 	ldr	r1, [r8, #4]	; fField4
        23de58:	e0802001 	add	r2, r0, r1
        23de5c:	e5983008 	ldr	r3, [r8, #8]	; fField8
        23de60:	e5d41009 	ldrb	r1, [r4, #9]
        23de64:	e1a0000c 	mov	r0, ip
        23de68:	e59cc000 	ldr	ip, [ip]
        23de6c:	e1a0e00f 	mov	lr, pc
        23de70:	e28cf020 	add	pc, ip, #32	; 0x20
        23de74:	e1a01000 	mov	r1, r0
        23de78:	e3a00000 	mov	r0, #0	; 0x0
        23de7c:	e3510000 	cmp	r1, #0	; 0x0
        23de80:	b91ba9f0 	ldmltdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23de84:	e5c40000 	strb	r0, [r4]
        23de88:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        23de8c:	e0404006 	sub	r4, r0, r6
        23de90:	0a00000b 	beq	23dec4 <TXLine::CalcAlignTabWidth(unsigned short const *, TXPendingTab *, long, TXLineRunInfo const &)+0x9c>
        23de94:	e2888018 	add	r8, r8, #24	; 0x18
        23de98:	e938500c 	ldmdb	r8!, {r2, r3, ip, lr}
        23de9c:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        23dea0:	e9385000 	ldmdb	r8!, {ip, lr}
        23dea4:	e92d5000 	stmdb	sp!, {ip, lr}
        23dea8:	e58d1008 	str	r1, [sp, #8]	; fField8
        23deac:	e1a0200d 	mov	r2, sp
        23deb0:	e1a01007 	mov	r1, r7
        23deb4:	e1a00005 	mov	r0, r5
        23deb8:	eb654e7e 	bl	1b918b8 <TXLine::$RunMeasure(unsigned short const *, TXLineRunInfo const *)>
        23debc:	e0444000 	sub	r4, r4, r0
        23dec0:	e28dd018 	add	sp, sp, #24	; 0x18
        23dec4:	e3540000 	cmp	r4, #0	; 0x0
        23dec8:	b3a00000 	movlt	r0, #0	; 0x0
        23decc:	a1a00004 	movge	r0, r4
        23ded0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

