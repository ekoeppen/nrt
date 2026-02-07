#include "include/TWordList.h"

/**
 * Symbol: TWordList::__ct(void)
 * Address: 0022eb28
 */
TWordList::TWordList(void) {
    /*
        22eb28:	e1a0c00d 	mov	ip, sp
        22eb2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22eb30:	e24cb004 	sub	fp, ip, #4	; 0x4
        22eb34:	e1b04000 	movs	r4, r0
        22eb38:	1a000003 	bne	22eb4c <TWordList::__ct(void)+0x24>
        22eb3c:	e3a00048 	mov	r0, #72	; 0x48
        22eb40:	eb6238cd 	bl	1abce7c <$__nw__9TWordListSFUi>
        22eb44:	e1b04000 	movs	r4, r0
        22eb48:	0a00000c 	beq	22eb80 <TWordList::__ct(void)+0x58>
        22eb4c:	e3a05000 	mov	r5, #0	; 0x0
        22eb50:	e5c45040 	strb	r5, [r4, #64]	; fField64
        22eb54:	e3a00002 	mov	r0, #2	; 0x2
        22eb58:	eb66cd73 	bl	1be212c <$NewHandle>
        22eb5c:	e5840044 	str	r0, [r4, #68]	; fField68
        22eb60:	e3300000 	teq	r0, #0	; 0x0
        22eb64:	0a000005 	beq	22eb80 <TWordList::__ct(void)+0x58>
        22eb68:	e59f1018 	ldr	r1, [pc, #18]	; 22eb88 <TWordList::__ct(void)+0x60>
        22eb6c:	eb66c519 	bl	1bdffd8 <$SetHandleName>
        22eb70:	e5940044 	ldr	r0, [r4, #68]	; fField68
        22eb74:	e5900000 	ldr	r0, [r0]
        22eb78:	e5c05001 	strb	r5, [r0, #1]	; fField1
        22eb7c:	e5c05000 	strb	r5, [r0]
        22eb80:	e1a00004 	mov	r0, r4
        22eb84:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22eb88:	776c7374 	undefined
    */
}

/**
 * Symbol: TWordList::__dt(void)
 * Address: 0022eb8c
 */
TWordList::~TWordList(void) {
    /*
        22eb8c:	e1a0c00d 	mov	ip, sp
        22eb90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22eb94:	e24cb004 	sub	fp, ip, #4	; 0x4
        22eb98:	e1a04000 	mov	r4, r0
        22eb9c:	e1a05001 	mov	r5, r1
        22eba0:	e5900044 	ldr	r0, [r0, #68]	; fField68
        22eba4:	e3300000 	teq	r0, #0	; 0x0
        22eba8:	1b66c940 	blne	1be10b0 <$DisposHandle>
        22ebac:	e3150001 	tst	r5, #1	; 0x1
        22ebb0:	11a00004 	movne	r0, r4
        22ebb4:	13a01048 	movne	r1, #72	; 0x48
        22ebb8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        22ebbc:	1a6238a7 	bne	1abce60 <$__dl__9TWordListSFPvUi>
        22ebc0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TWordList::Ith(long, long *, long *)
 * Address: 0022ebc4
 */
TWordList::Ith(long, long *, long *) {
    /*
        22ebc4:	e1a0c00d 	mov	ip, sp
        22ebc8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        22ebcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ebd0:	e1a05000 	mov	r5, r0
        22ebd4:	e1a04001 	mov	r4, r1
        22ebd8:	e1a07002 	mov	r7, r2
        22ebdc:	e1a06003 	mov	r6, r3
        22ebe0:	eb61ddca 	bl	1aa6310 <TWordList::$Word(long)>
        22ebe4:	e1a08000 	mov	r8, r0
        22ebe8:	e59f102c 	ldr	r1, [pc, #2c]	; 22ec1c <TWordList::Ith(long, long *, long *)+0x58>
        22ebec:	eb66c4f9 	bl	1bdffd8 <$SetHandleName>
        22ebf0:	e3370000 	teq	r7, #0	; 0x0
        22ebf4:	17950084 	ldrne	r0, [r5, r4, lsl #1]	; fField1
        22ebf8:	11a00820 	movne	r0, r0, lsr #16
        22ebfc:	15870000 	strne	r0, [r7]
        22ec00:	e3360000 	teq	r6, #0	; 0x0
        22ec04:	10850084 	addne	r0, r5, r4, lsl #1
        22ec08:	15900020 	ldrne	r0, [r0, #32]	; fField32
        22ec0c:	11a00820 	movne	r0, r0, lsr #16
        22ec10:	15860000 	strne	r0, [r6]
        22ec14:	e1a00008 	mov	r0, r8
        22ec18:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        22ec1c:	77726449 	ldrvcb	r6, [r2, -r9, asr #8]!
    */
}

/**
 * Symbol: TWordList::Score(long)
 * Address: 0022ec20
 */
TWordList::Score(long) {
    /*
        22ec20:	e7900081 	ldr	r0, [r0, r1, lsl #1]	; fField1
        22ec24:	e1a00820 	mov	r0, r0, lsr #16
        22ec28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWordList::Label(long)
 * Address: 0022ec2c
 */
TWordList::Label(long) {
    /*
        22ec2c:	e0800081 	add	r0, r0, r1, lsl #1
        22ec30:	e5900020 	ldr	r0, [r0, #32]	; fField32
        22ec34:	e1a00820 	mov	r0, r0, lsr #16
        22ec38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWordList::SwapSingleCharacterGuesses(long, long)
 * Address: 0022ec3c
 */
TWordList::SwapSingleCharacterGuesses(long, long) {
    /*
        22ec3c:	e1a0c00d 	mov	ip, sp
        22ec40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22ec44:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ec48:	e1a04000 	mov	r4, r0
        22ec4c:	e1a05002 	mov	r5, r2
        22ec50:	eb61c91c 	bl	1aa10c8 <TWordList::$ScanTo(long)>
        22ec54:	e1a06000 	mov	r6, r0
        22ec58:	e1a01005 	mov	r1, r5
        22ec5c:	e1a00004 	mov	r0, r4
        22ec60:	eb61c918 	bl	1aa10c8 <TWordList::$ScanTo(long)>
        22ec64:	e5961000 	ldr	r1, [r6]
        22ec68:	e1a01821 	mov	r1, r1, lsr #16
        22ec6c:	e5902000 	ldr	r2, [r0]
        22ec70:	e1a02822 	mov	r2, r2, lsr #16
        22ec74:	e5c62001 	strb	r2, [r6, #1]	; fField1
        22ec78:	e1a02442 	mov	r2, r2, asr #8
        22ec7c:	e5c62000 	strb	r2, [r6]
        22ec80:	e5c01001 	strb	r1, [r0, #1]	; fField1
        22ec84:	e1a01441 	mov	r1, r1, asr #8
        22ec88:	e5c01000 	strb	r1, [r0]
        22ec8c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TWordList::InsertLast(unsigned short **, long, long)
 * Address: 0022ec90
 */
TWordList::InsertLast(unsigned short **, long, long) {
    /*
        22ec90:	e1a0c00d 	mov	ip, sp
        22ec94:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        22ec98:	e24cb004 	sub	fp, ip, #4	; 0x4
        22ec9c:	e1a04000 	mov	r4, r0
        22eca0:	e1a05001 	mov	r5, r1
        22eca4:	e1a07002 	mov	r7, r2
        22eca8:	e1a06003 	mov	r6, r3
        22ecac:	e5d00040 	ldrb	r0, [r0, #64]	; fField64
        22ecb0:	e3500010 	cmp	r0, #16	; 0x10
        22ecb4:	a91babf0 	ldmgedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        22ecb8:	e5950000 	ldr	r0, [r5]
        22ecbc:	eb66fea7 	bl	1bee760 <$Ustrlen>
        22ecc0:	e2809001 	add	r9, r0, #1	; 0x1
        22ecc4:	e3a08000 	mov	r8, #0	; 0x0
        22ecc8:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
        22eccc:	e3300000 	teq	r0, #0	; 0x0
        22ecd0:	0a000009 	beq	22ecfc <TWordList::InsertLast(unsigned short **, long, long)+0x6c>
        22ecd4:	e5940044 	ldr	r0, [r4, #68]	; fField68
        22ecd8:	e5900000 	ldr	r0, [r0]
        22ecdc:	eb66fe9f 	bl	1bee760 <$Ustrlen>
        22ece0:	e2808001 	add	r8, r0, #1	; 0x1
        22ece4:	e3a010ff 	mov	r1, #255	; 0xff
        22ece8:	e5940044 	ldr	r0, [r4, #68]	; fField68
        22ecec:	e5900000 	ldr	r0, [r0]
        22ecf0:	e0800088 	add	r0, r0, r8, lsl #1
        22ecf4:	e5401001 	strb	r1, [r0, -#1]	; fField1
        22ecf8:	e5401002 	strb	r1, [r0, -#2]
        22ecfc:	e0880009 	add	r0, r8, r9
        22ed00:	e2800001 	add	r0, r0, #1	; 0x1
        22ed04:	e1a01080 	mov	r1, r0, lsl #1
        22ed08:	e5940044 	ldr	r0, [r4, #68]	; fField68
        22ed0c:	eb66cd1a 	bl	1be217c <$SetHandleSize>
        22ed10:	e5940044 	ldr	r0, [r4, #68]	; fField68
        22ed14:	e5900000 	ldr	r0, [r0]
        22ed18:	e0801088 	add	r1, r0, r8, lsl #1
        22ed1c:	e1a02089 	mov	r2, r9, lsl #1
        22ed20:	e5950000 	ldr	r0, [r5]
        22ed24:	eb66c08a 	bl	1bdef54 <$BlockMove>
        22ed28:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
        22ed2c:	e0840080 	add	r0, r4, r0, lsl #1
        22ed30:	e5c07001 	strb	r7, [r0, #1]	; fField1
        22ed34:	e1a01427 	mov	r1, r7, lsr #8
        22ed38:	e5c01000 	strb	r1, [r0]
        22ed3c:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
        22ed40:	e0840080 	add	r0, r4, r0, lsl #1
        22ed44:	e5c06021 	strb	r6, [r0, #33]
        22ed48:	e1a01426 	mov	r1, r6, lsr #8
        22ed4c:	e5c01020 	strb	r1, [r0, #32]	; fField32
        22ed50:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
        22ed54:	e2800001 	add	r0, r0, #1	; 0x1
        22ed58:	e5c40040 	strb	r0, [r4, #64]	; fField64
        22ed5c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TWordList::ScanTo(long)
 * Address: 0022ed60
 */
TWordList::ScanTo(long) {
    /*
        22ed60:	e5900044 	ldr	r0, [r0, #68]	; fField68
        22ed64:	e5900000 	ldr	r0, [r0]
        22ed68:	e1b02001 	movs	r2, r1
        22ed6c:	e2411001 	sub	r1, r1, #1	; 0x1
        22ed70:	13a03801 	movne	r3, #65536	; 0x10000
        22ed74:	12433001 	subne	r3, r3, #1	; 0x1
        22ed78:	1a000001 	bne	22ed84 <TWordList::ScanTo(long)+0x24>
        22ed7c:	e1a0f00e 	mov	pc, lr
        22ed80:	e2800002 	add	r0, r0, #2	; 0x2
        22ed84:	e5902000 	ldr	r2, [r0]
        22ed88:	e1b02822 	movs	r2, r2, lsr #16
        22ed8c:	03a00000 	moveq	r0, #0	; 0x0
        22ed90:	0a000002 	beq	22eda0 <TWordList::ScanTo(long)+0x40>
        22ed94:	e1320003 	teq	r2, r3
        22ed98:	1afffff8 	bne	22ed80 <TWordList::ScanTo(long)+0x20>
        22ed9c:	e2800002 	add	r0, r0, #2	; 0x2
        22eda0:	e1b02001 	movs	r2, r1
        22eda4:	e2411001 	sub	r1, r1, #1	; 0x1
        22eda8:	1afffff5 	bne	22ed84 <TWordList::ScanTo(long)+0x24>
        22edac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWordList::BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)
 * Address: 0022efbc
 */
TWordList::BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long) {
    /*
        22efbc:	e1a0c00d 	mov	ip, sp
        22efc0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        22efc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22efc8:	e1a04000 	mov	r4, r0
        22efcc:	e1a05002 	mov	r5, r2
        22efd0:	e1a07003 	mov	r7, r3
        22efd4:	e1a00801 	mov	r0, r1, lsl #16
        22efd8:	e1a00820 	mov	r0, r0, lsr #16
        22efdc:	e24dd004 	sub	sp, sp, #4	; 0x4
        22efe0:	e5cd0001 	strb	r0, [sp, #1]	; fField1
        22efe4:	e1a00420 	mov	r0, r0, lsr #8
        22efe8:	e44d0004 	strb	r0, [sp], -#4
        22efec:	e3a00000 	mov	r0, #0	; 0x0
        22eff0:	e5cd0007 	strb	r0, [sp, #7]
        22eff4:	e5cd0006 	strb	r0, [sp, #6]
        22eff8:	e28d0004 	add	r0, sp, #4	; 0x4
        22effc:	e58d0000 	str	r0, [sp]
        22f000:	e1a0800d 	mov	r8, sp
        22f004:	e1a00004 	mov	r0, r4
        22f008:	eb617dd7 	bl	1a8e76c <TWordList::$Count(void)>
        22f00c:	e1a06000 	mov	r6, r0
        22f010:	e1a01008 	mov	r1, r8
        22f014:	e1a00004 	mov	r0, r4
        22f018:	eb620a2c 	bl	1ab18d0 <TWordList::$Find(unsigned short **)>
        22f01c:	e3500000 	cmp	r0, #0	; 0x0
        22f020:	b91babf0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        22f024:	e3370000 	teq	r7, #0	; 0x0
        22f028:	13e07000 	mvnne	r7, #0	; 0x0
        22f02c:	13e08000 	mvnne	r8, #0	; 0x0
        22f030:	03a07001 	moveq	r7, #1	; 0x1
        22f034:	01a08006 	moveq	r8, r6
        22f038:	e0900007 	adds	r0, r0, r7
        22f03c:	4a000018 	bmi	22f0a4 <TWordList::BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)+0xe8>
        22f040:	e1500006 	cmp	r0, r6
        22f044:	aa000016 	bge	22f0a4 <TWordList::BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)+0xe8>
        22f048:	e1a06000 	mov	r6, r0
        22f04c:	e1300008 	teq	r0, r8
        22f050:	0a000013 	beq	22f0a4 <TWordList::BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)+0xe8>
        22f054:	e1a01006 	mov	r1, r6
        22f058:	e1a00004 	mov	r0, r4
        22f05c:	eb61c819 	bl	1aa10c8 <TWordList::$ScanTo(long)>
        22f060:	e1a09000 	mov	r9, r0
        22f064:	eb61dcb0 	bl	1aa632c <$Wstrlen(unsigned short *)>
        22f068:	e3300001 	teq	r0, #1	; 0x1
        22f06c:	1a00000c 	bne	22f0a4 <TWordList::BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)+0xe8>
        22f070:	e5990000 	ldr	r0, [r9]
        22f074:	e1a00820 	mov	r0, r0, lsr #16
        22f078:	e1a0e00f 	mov	lr, pc
        22f07c:	e1a0f005 	mov	pc, r5
        22f080:	e3300000 	teq	r0, #0	; 0x0
        22f084:	0a000006 	beq	22f0a4 <TWordList::BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)+0xe8>
        22f088:	e0461007 	sub	r1, r6, r7
        22f08c:	e1a02006 	mov	r2, r6
        22f090:	e1a00004 	mov	r0, r4
        22f094:	eb62b767 	bl	1adce38 <TWordList::$SwapSingleCharacterGuesses(long, long)>
        22f098:	e0866007 	add	r6, r6, r7
        22f09c:	e1360008 	teq	r6, r8
        22f0a0:	1affffeb 	bne	22f054 <TWordList::BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)+0x98>
        22f0a4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TWordList::Reorder(void)
 * Address: 0022f0a8
 */
TWordList::Reorder(void) {
    /*
        22f0a8:	e1a0c00d 	mov	ip, sp
        22f0ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22f0b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f0b4:	e1a04000 	mov	r4, r0
        22f0b8:	eb617dab 	bl	1a8e76c <TWordList::$Count(void)>
        22f0bc:	e3500001 	cmp	r0, #1	; 0x1
        22f0c0:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        22f0c4:	e59f0038 	ldr	r0, [pc, #38]	; 22f104 <TWordList::Reorder(void)+0x5c>
        22f0c8:	e5900000 	ldr	r0, [r0]
        22f0cc:	e1a00820 	mov	r0, r0, lsr #16
        22f0d0:	e1a05000 	mov	r5, r0
        22f0d4:	eb66ed10 	bl	1bea51c <$IsAlphabet(unsigned short)>
        22f0d8:	e1a06000 	mov	r6, r0
        22f0dc:	e1a00005 	mov	r0, r5
        22f0e0:	eb66ed11 	bl	1bea52c <$IsDigit(unsigned short)>
        22f0e4:	e3300000 	teq	r0, #0	; 0x0
        22f0e8:	1a000003 	bne	22f0fc <TWordList::Reorder(void)+0x54>
        22f0ec:	e1a00005 	mov	r0, r5
        22f0f0:	ebffff8a 	bl	22ef20 <IsSlash(unsigned short)>
        22f0f4:	e3300000 	teq	r0, #0	; 0x0
        22f0f8:	0a000002 	beq	22f108 <TWordList::Reorder(void)+0x60>
        22f0fc:	e3a00001 	mov	r0, #1	; 0x1
        22f100:	ea000001 	b	22f10c <TWordList::Reorder(void)+0x64>
        22f104:	0c104d64 	ldceq	13, cr4, [r0], -#400
        22f108:	e3a00000 	mov	r0, #0	; 0x0
        22f10c:	e20000ff 	and	r0, r0, #255	; 0xff
        22f110:	e59f2040 	ldr	r2, [pc, #40]	; 22f158 <TWordList::Reorder(void)+0xb0>
        22f114:	e59f5040 	ldr	r5, [pc, #40]	; 22f15c <TWordList::Reorder(void)+0xb4>
        22f118:	e3360000 	teq	r6, #0	; 0x0
        22f11c:	0a00000f 	beq	22f160 <TWordList::Reorder(void)+0xb8>
        22f120:	e1a00004 	mov	r0, r4
        22f124:	e3a03000 	mov	r3, #0	; 0x0
        22f128:	e3a01030 	mov	r1, #48	; 0x30
        22f12c:	eb625433 	bl	1ac4200 <TWordList::$BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)>
        22f130:	e1a02005 	mov	r2, r5
        22f134:	e1a00004 	mov	r0, r4
        22f138:	e3a03000 	mov	r3, #0	; 0x0
        22f13c:	e3a01031 	mov	r1, #49	; 0x31
        22f140:	eb62542e 	bl	1ac4200 <TWordList::$BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)>
        22f144:	e1a02005 	mov	r2, r5
        22f148:	e1a00004 	mov	r0, r4
        22f14c:	e3a03000 	mov	r3, #0	; 0x0
        22f150:	e3a0107c 	mov	r1, #124	; 0x7c
        22f154:	ea00000b 	b	22f188 <TWordList::Reorder(void)+0xe0>
        22f158:	01ad18cc 	moveq	r1, ip, asr #17
        22f15c:	01ac8400 	moveq	r8, r0, lsl #8
        22f160:	e3300000 	teq	r0, #0	; 0x0
        22f164:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        22f168:	e1a00004 	mov	r0, r4
        22f16c:	e3a03001 	mov	r3, #1	; 0x1
        22f170:	e3a01030 	mov	r1, #48	; 0x30
        22f174:	eb625421 	bl	1ac4200 <TWordList::$BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)>
        22f178:	e1a02005 	mov	r2, r5
        22f17c:	e1a00004 	mov	r0, r4
        22f180:	e3a03001 	mov	r3, #1	; 0x1
        22f184:	e3a01031 	mov	r1, #49	; 0x31
        22f188:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        22f18c:	ea62541b 	b	1ac4200 <TWordList::$BubbleGuess(unsigned short, unsigned char (*)(unsigned short), long)>
    */
}

/**
 * Symbol: TWordList::Find(unsigned short **)
 * Address: 0022f1cc
 */
TWordList::Find(unsigned short **) {
    /*
        22f1cc:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        22f1d0:	e1a02000 	mov	r2, r0
        22f1d4:	e3e00000 	mvn	r0, #0	; 0x0
        22f1d8:	e3a03000 	mov	r3, #0	; 0x0
        22f1dc:	e5922044 	ldr	r2, [r2, #68]	; fField68
        22f1e0:	e5922000 	ldr	r2, [r2]
        22f1e4:	e592c000 	ldr	ip, [r2]
        22f1e8:	e1b0c82c 	movs	ip, ip, lsr #16
        22f1ec:	08bd8070 	ldmeqia	sp!, {r4, r5, r6, pc}
        22f1f0:	e3a04801 	mov	r4, #65536	; 0x10000
        22f1f4:	e2444001 	sub	r4, r4, #1	; 0x1
        22f1f8:	e5916000 	ldr	r6, [r1]
        22f1fc:	e1a05006 	mov	r5, r6
        22f200:	e3a0e001 	mov	lr, #1	; 0x1
        22f204:	ea000004 	b	22f21c <TWordList::Find(unsigned short **)+0x50>
        22f208:	e2822002 	add	r2, r2, #2	; 0x2
        22f20c:	e595c000 	ldr	ip, [r5]
        22f210:	e2855002 	add	r5, r5, #2	; 0x2
        22f214:	e131082c 	teq	r1, ip, lsr #16
        22f218:	13a0e000 	movne	lr, #0	; 0x0
        22f21c:	e5921000 	ldr	r1, [r2]
        22f220:	e1b01821 	movs	r1, r1, lsr #16
        22f224:	11310004 	teqne	r1, r4
        22f228:	1afffff6 	bne	22f208 <TWordList::Find(unsigned short **)+0x3c>
        22f22c:	e33e0000 	teq	lr, #0	; 0x0
        22f230:	11a00003 	movne	r0, r3
        22f234:	18bd8070 	ldmneia	sp!, {r4, r5, r6, pc}
        22f238:	e5921000 	ldr	r1, [r2]
        22f23c:	e1340821 	teq	r4, r1, lsr #16
        22f240:	02833001 	addeq	r3, r3, #1	; 0x1
        22f244:	02822002 	addeq	r2, r2, #2	; 0x2
        22f248:	e5921000 	ldr	r1, [r2]
        22f24c:	e1b01821 	movs	r1, r1, lsr #16
        22f250:	1affffe9 	bne	22f1fc <TWordList::Find(unsigned short **)+0x30>
        22f254:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: TWordList::Word(long)
 * Address: 0022f258
 */
TWordList::Word(long) {
    /*
        22f258:	e1a0c00d 	mov	ip, sp
        22f25c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22f260:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f264:	e1a05000 	mov	r5, r0
        22f268:	e1a04001 	mov	r4, r1
        22f26c:	eb61c795 	bl	1aa10c8 <TWordList::$ScanTo(long)>
        22f270:	eb61dc2d 	bl	1aa632c <$Wstrlen(unsigned short *)>
        22f274:	e2800001 	add	r0, r0, #1	; 0x1
        22f278:	e1a00080 	mov	r0, r0, lsl #1
        22f27c:	eb66cbaa 	bl	1be212c <$NewHandle>
        22f280:	e1a06000 	mov	r6, r0
        22f284:	e59f1020 	ldr	r1, [pc, #20]	; 22f2ac <TWordList::Word(long)+0x54>
        22f288:	eb66c352 	bl	1bdffd8 <$SetHandleName>
        22f28c:	e1a01004 	mov	r1, r4
        22f290:	e1a00005 	mov	r0, r5
        22f294:	eb61c78b 	bl	1aa10c8 <TWordList::$ScanTo(long)>
        22f298:	e1a01000 	mov	r1, r0
        22f29c:	e5960000 	ldr	r0, [r6]
        22f2a0:	eb61dc20 	bl	1aa6328 <$Wstrcpy__FPUsT1>
        22f2a4:	e1a00006 	mov	r0, r6
        22f2a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        22f2ac:	77726457 	undefined
    */
}

/**
 * Symbol: TWordList::Count(void)
 * Address: 0022f2b0
 */
TWordList::Count(void) {
    /*
        22f2b0:	e5d00040 	ldrb	r0, [r0, #64]	; fField64
        22f2b4:	e1a0f00e 	mov	pc, lr
    */
}

