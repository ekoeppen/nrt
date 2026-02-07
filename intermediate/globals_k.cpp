#include "Newton.h"

/**
 * Symbol: KillHAtNewElem(SZD_FEATURES *)
 * Address: 00302ed0
 */
KillHAtNewElem(SZD_FEATURES *) {
    /*
        302ed0:	e1a0c00d 	mov	ip, sp
        302ed4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        302ed8:	e24cb004 	sub	fp, ip, #4	; 0x4
        302edc:	e590000c 	ldr	r0, [r0, #12]
        302ee0:	eb6067d4 	bl	1b1ce38 <$SkipAnglesAfter(SPEC_TYPE *)>
        302ee4:	e3300000 	teq	r0, #0	; 0x0
        302ee8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        302eec:	e5d01001 	ldrb	r1, [r0, #1]
        302ef0:	e3310027 	teq	r1, #39	; 0x27
        302ef4:	091b6800 	ldmeqdb	fp, {fp, sp, lr}
        302ef8:	0a605b6e 	beq	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        302efc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: KeyDown(unsigned long, unsigned char)
 * Address: 0030b3a4
 */
KeyDown(unsigned long, unsigned char) {
    /*
        30b3a4:	e31100ff 	tst	r1, #255	; 0xff
        30b3a8:	059f101c 	ldreq	r1, [pc, #1c]	; 30b3cc <KeyDown(unsigned long, unsigned char)+0x28>
        30b3ac:	159f101c 	ldrne	r1, [pc, #1c]	; 30b3d0 <KeyDown(unsigned long, unsigned char)+0x2c>
        30b3b0:	e1a021a0 	mov	r2, r0, lsr #3
        30b3b4:	e7d11002 	ldrb	r1, [r1, r2]
        30b3b8:	e2000007 	and	r0, r0, #7	; 0x7
        30b3bc:	e3a02001 	mov	r2, #1	; 0x1
        30b3c0:	e0010012 	and	r0, r1, r2, lsl r0
        30b3c4:	e20000ff 	and	r0, r0, #255	; 0xff
        30b3c8:	e1a0f00e 	mov	pc, lr
        30b3cc:	0c1054bc 	ldceq	4, cr5, [r0], -#752
        30b3d0:	0c1054e4 	ldceq	4, cr5, [r0], -#912
    */
}

/**
 * Symbol: KeyLabel(unsigned long, unsigned char)
 * Address: 0030bd18
 */
KeyLabel(unsigned long, unsigned char) {
    /*
        30bd18:	e1a0c00d 	mov	ip, sp
        30bd1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        30bd20:	e24cb004 	sub	fp, ip, #4	; 0x4
        30bd24:	e1a04000 	mov	r4, r0
        30bd28:	e21110ff 	ands	r1, r1, #255	; 0xff
        30bd2c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30bd30:	e59f0028 	ldr	r0, [pc, #28]	; 30bd60 <KeyLabel(unsigned long, unsigned char)+0x48>
        30bd34:	05900034 	ldreq	r0, [r0, #52]
        30bd38:	1590005c 	ldrne	r0, [r0, #92]
        30bd3c:	e58d0000 	str	r0, [sp]
        30bd40:	e1a00001 	mov	r0, r1
        30bd44:	eb5f1af9 	bl	1ad2930 <$Modifiers(unsigned char)>
        30bd48:	e1a02000 	mov	r2, r0
        30bd4c:	e1a0300d 	mov	r3, sp
        30bd50:	e1a00004 	mov	r0, r4
        30bd54:	e3a01001 	mov	r1, #1	; 0x1
        30bd58:	eb5e6145 	bl	1aa4274 <$TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)>
        30bd5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        30bd60:	0c1054a8 	ldceq	4, cr5, [r0], -#672
    */
}

/**
 * Symbol: KeyIn(unsigned long, unsigned char, TView *)
 * Address: 0030bd78
 */
KeyIn(unsigned long, unsigned char, TView *) {
    /*
        30bd78:	e1a0c00d 	mov	ip, sp
        30bd7c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        30bd80:	e24cb004 	sub	fp, ip, #4	; 0x4
        30bd84:	e1a04000 	mov	r4, r0
        30bd88:	e20160ff 	and	r6, r1, #255	; 0xff
        30bd8c:	e3a07000 	mov	r7, #0	; 0x0
        30bd90:	e59f5054 	ldr	r5, [pc, #54]	; 30bdec <KeyIn(unsigned long, unsigned char, TView *)+0x74>
        30bd94:	e3720001 	cmn	r2, #1	; 0x1
        30bd98:	1a000030 	bne	30be60 <KeyIn(unsigned long, unsigned char, TView *)+0xe8>
        30bd9c:	e3a07001 	mov	r7, #1	; 0x1
        30bda0:	e3a00000 	mov	r0, #0	; 0x0
        30bda4:	e3340038 	teq	r4, #56	; 0x38
        30bda8:	0a00001a 	beq	30be18 <KeyIn(unsigned long, unsigned char, TView *)+0xa0>
        30bdac:	e334003a 	teq	r4, #58	; 0x3a
        30bdb0:	0a000021 	beq	30be3c <KeyIn(unsigned long, unsigned char, TView *)+0xc4>
        30bdb4:	e334003c 	teq	r4, #60	; 0x3c
        30bdb8:	0a00000c 	beq	30bdf0 <KeyIn(unsigned long, unsigned char, TView *)+0x78>
        30bdbc:	e334003d 	teq	r4, #61	; 0x3d
        30bdc0:	1a00002c 	bne	30be78 <KeyIn(unsigned long, unsigned char, TView *)+0x100>
        30bdc4:	e3560000 	cmp	r6, #0	; 0x0
        30bdc8:	e5951064 	ldr	r1, [r5, #100]
        30bdcc:	03c11008 	biceq	r1, r1, #8	; 0x8
        30bdd0:	13811008 	orrne	r1, r1, #8	; 0x8
        30bdd4:	e5851064 	str	r1, [r5, #100]
        30bdd8:	1a000001 	bne	30bde4 <KeyIn(unsigned long, unsigned char, TView *)+0x6c>
        30bddc:	e3110004 	tst	r1, #4	; 0x4
        30bde0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        30bde4:	e3a0403a 	mov	r4, #58	; 0x3a
        30bde8:	ea00003b 	b	30bedc <KeyIn(unsigned long, unsigned char, TView *)+0x164>
        30bdec:	0c1054a8 	ldceq	4, cr5, [r0], -#672
        30bdf0:	e3560000 	cmp	r6, #0	; 0x0
        30bdf4:	e5951064 	ldr	r1, [r5, #100]
        30bdf8:	03c11002 	biceq	r1, r1, #2	; 0x2
        30bdfc:	13811002 	orrne	r1, r1, #2	; 0x2
        30be00:	e5851064 	str	r1, [r5, #100]
        30be04:	1a000001 	bne	30be10 <KeyIn(unsigned long, unsigned char, TView *)+0x98>
        30be08:	e3110001 	tst	r1, #1	; 0x1
        30be0c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        30be10:	e3a04038 	mov	r4, #56	; 0x38
        30be14:	ea000030 	b	30bedc <KeyIn(unsigned long, unsigned char, TView *)+0x164>
        30be18:	e3560000 	cmp	r6, #0	; 0x0
        30be1c:	e5951064 	ldr	r1, [r5, #100]
        30be20:	03c11001 	biceq	r1, r1, #1	; 0x1
        30be24:	13811001 	orrne	r1, r1, #1	; 0x1
        30be28:	e5851064 	str	r1, [r5, #100]
        30be2c:	1a00002a 	bne	30bedc <KeyIn(unsigned long, unsigned char, TView *)+0x164>
        30be30:	e3110002 	tst	r1, #2	; 0x2
        30be34:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        30be38:	ea000027 	b	30bedc <KeyIn(unsigned long, unsigned char, TView *)+0x164>
        30be3c:	e3560000 	cmp	r6, #0	; 0x0
        30be40:	e5951064 	ldr	r1, [r5, #100]
        30be44:	03c11004 	biceq	r1, r1, #4	; 0x4
        30be48:	13811004 	orrne	r1, r1, #4	; 0x4
        30be4c:	e5851064 	str	r1, [r5, #100]
        30be50:	1a000021 	bne	30bedc <KeyIn(unsigned long, unsigned char, TView *)+0x164>
        30be54:	e3110008 	tst	r1, #8	; 0x8
        30be58:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        30be5c:	ea00001e 	b	30bedc <KeyIn(unsigned long, unsigned char, TView *)+0x164>
        30be60:	e334003c 	teq	r4, #60	; 0x3c
        30be64:	03a04038 	moveq	r4, #56	; 0x38
        30be68:	0a000015 	beq	30bec4 <KeyIn(unsigned long, unsigned char, TView *)+0x14c>
        30be6c:	e334003d 	teq	r4, #61	; 0x3d
        30be70:	03a0403a 	moveq	r4, #58	; 0x3a
        30be74:	0a000012 	beq	30bec4 <KeyIn(unsigned long, unsigned char, TView *)+0x14c>
        30be78:	e3340039 	teq	r4, #57	; 0x39
        30be7c:	1a00000e 	bne	30bebc <KeyIn(unsigned long, unsigned char, TView *)+0x144>
        30be80:	e59f0028 	ldr	r0, [pc, #28]	; 30beb0 <KeyIn(unsigned long, unsigned char, TView *)+0x138>
        30be84:	e3370000 	teq	r7, #0	; 0x0
        30be88:	159f0024 	ldrne	r0, [pc, #24]	; 30beb4 <KeyIn(unsigned long, unsigned char, TView *)+0x13c>
        30be8c:	e3360000 	teq	r6, #0	; 0x0
        30be90:	0a000008 	beq	30beb8 <KeyIn(unsigned long, unsigned char, TView *)+0x140>
        30be94:	e5d01000 	ldrb	r1, [r0]
        30be98:	e3310000 	teq	r1, #0	; 0x0
        30be9c:	13a01000 	movne	r1, #0	; 0x0
        30bea0:	03a01001 	moveq	r1, #1	; 0x1
        30bea4:	e5c01000 	strb	r1, [r0]
        30bea8:	e20160ff 	and	r6, r1, #255	; 0xff
        30beac:	ea000002 	b	30bebc <KeyIn(unsigned long, unsigned char, TView *)+0x144>
        30beb0:	0c1054e0 	ldceq	4, cr5, [r0], -#896
        30beb4:	0c105508 	ldceq	5, cr5, [r0], -#32
        30beb8:	e3a04000 	mov	r4, #0	; 0x0
        30bebc:	e3370000 	teq	r7, #0	; 0x0
        30bec0:	1a000005 	bne	30bedc <KeyIn(unsigned long, unsigned char, TView *)+0x164>
        30bec4:	e1a03002 	mov	r3, r2
        30bec8:	e1a02006 	mov	r2, r6
        30becc:	e1a01004 	mov	r1, r4
        30bed0:	e59f006c 	ldr	r0, [pc, #6c]	; 30bf44 <KeyIn(unsigned long, unsigned char, TView *)+0x1cc>
        30bed4:	e5900000 	ldr	r0, [r0]
        30bed8:	eb5f166d 	bl	1ad1894 <TRootView::$HandleKeyIn(unsigned long, unsigned char, TView *)>
        30bedc:	e3370000 	teq	r7, #0	; 0x0
        30bee0:	059f0060 	ldreq	r0, [pc, #60]	; 30bf48 <KeyIn(unsigned long, unsigned char, TView *)+0x1d0>
        30bee4:	159f0060 	ldrne	r0, [pc, #60]	; 30bf4c <KeyIn(unsigned long, unsigned char, TView *)+0x1d4>
        30bee8:	e1a011a4 	mov	r1, r4, lsr #3
        30beec:	e2042007 	and	r2, r4, #7	; 0x7
        30bef0:	e3a03001 	mov	r3, #1	; 0x1
        30bef4:	e3360000 	teq	r6, #0	; 0x0
        30bef8:	e7d0c001 	ldrb	ip, [r0, r1]
        30befc:	e1a02213 	mov	r2, r3, lsl r2
        30bf00:	01cc2002 	biceq	r2, ip, r2
        30bf04:	118c2002 	orrne	r2, ip, r2
        30bf08:	e7c02001 	strb	r2, [r0, r1]
        30bf0c:	e3370000 	teq	r7, #0	; 0x0
        30bf10:	0a00000f 	beq	30bf54 <KeyIn(unsigned long, unsigned char, TView *)+0x1dc>
        30bf14:	e3a00001 	mov	r0, #1	; 0x1
        30bf18:	eb5f1a84 	bl	1ad2930 <$Modifiers(unsigned char)>
        30bf1c:	e1a02000 	mov	r2, r0
        30bf20:	e59f3028 	ldr	r3, [pc, #28]	; 30bf50 <KeyIn(unsigned long, unsigned char, TView *)+0x1d8>
        30bf24:	e1a01006 	mov	r1, r6
        30bf28:	e1a00004 	mov	r0, r4
        30bf2c:	eb5e60d0 	bl	1aa4274 <$TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)>
        30bf30:	e3370000 	teq	r7, #0	; 0x0
        30bf34:	1595105c 	ldrne	r1, [r5, #92]
        30bf38:	13310000 	teqne	r1, #0	; 0x0
        30bf3c:	1a00000e 	bne	30bf7c <KeyIn(unsigned long, unsigned char, TView *)+0x204>
        30bf40:	ea00000a 	b	30bf70 <KeyIn(unsigned long, unsigned char, TView *)+0x1f8>
        30bf44:	0c101934 	ldceq	9, cr1, [r0], -#208
        30bf48:	0c1054bc 	ldceq	4, cr5, [r0], -#752
        30bf4c:	0c1054e4 	ldceq	4, cr5, [r0], -#912
        30bf50:	0c105504 	ldceq	5, cr5, [r0], -#16
        30bf54:	e3a00000 	mov	r0, #0	; 0x0
        30bf58:	eb5f1a74 	bl	1ad2930 <$Modifiers(unsigned char)>
        30bf5c:	e1a02000 	mov	r2, r0
        30bf60:	e59f301c 	ldr	r3, [pc, #1c]	; 30bf84 <KeyIn(unsigned long, unsigned char, TView *)+0x20c>
        30bf64:	e1a01006 	mov	r1, r6
        30bf68:	e1a00004 	mov	r0, r4
        30bf6c:	eb5e60c0 	bl	1aa4274 <$TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)>
        30bf70:	e5b51034 	ldr	r1, [r5, #52]!
        30bf74:	e3310000 	teq	r1, #0	; 0x0
        30bf78:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        30bf7c:	e3a00000 	mov	r0, #0	; 0x0
        30bf80:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        30bf84:	0c1054dc 	ldceq	4, cr5, [r0], -#880
    */
}

/**
 * Symbol: KeyCommandModifiers(RefVar const &)
 * Address: 0030f0f4
 */
KeyCommandModifiers(RefVar const &) {
    /*
        30f0f4:	e1a0c00d 	mov	ip, sp
        30f0f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30f0fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        30f100:	e59f104c 	ldr	r1, [pc, #4c]	; 30f154 <KeyCommandModifiers(RefVar const &)+0x60>
        30f104:	e5911000 	ldr	r1, [r1]
        30f108:	e5911000 	ldr	r1, [r1]
        30f10c:	e5900000 	ldr	r0, [r0]
        30f110:	e5900000 	ldr	r0, [r0]
        30f114:	eb62d451 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        30f118:	eb62cc0b 	bl	1bc214c <$AllocateRefHandle(long)>
        30f11c:	e1a04000 	mov	r4, r0
        30f120:	e5900000 	ldr	r0, [r0]
        30f124:	e3300002 	teq	r0, #2	; 0x2
        30f128:	03a05000 	moveq	r5, #0	; 0x0
        30f12c:	0a000004 	beq	30f144 <KeyCommandModifiers(RefVar const &)+0x50>
        30f130:	e3100003 	tst	r0, #3	; 0x3
        30f134:	01a00140 	moveq	r0, r0, asr #2
        30f138:	0a000000 	beq	30f140 <KeyCommandModifiers(RefVar const &)+0x4c>
        30f13c:	eb62cbf6 	bl	1bc211c <$_RINTError(long)>
        30f140:	e200543e 	and	r5, r0, #1040187392	; 0x3e000000
        30f144:	e1a00004 	mov	r0, r4
        30f148:	eb62d01b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30f14c:	e1a00005 	mov	r0, r5
        30f150:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        30f154:	00683900 	rsbeq	r3, r8, r0, lsl #18
    */
}

/**
 * Symbol: KeyIsPrintable(unsigned short, TView *)
 * Address: 00310330
 */
KeyIsPrintable(unsigned short, TView *) {
    /*
        310330:	e1a0c00d 	mov	ip, sp
        310334:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        310338:	e24cb004 	sub	fp, ip, #4	; 0x4
        31033c:	e1b04001 	movs	r4, r1
        310340:	e1a05800 	mov	r5, r0, lsl #16
        310344:	e1a05825 	mov	r5, r5, lsr #16
        310348:	e3a06000 	mov	r6, #0	; 0x0
        31034c:	0a000025 	beq	3103e8 <KeyIsPrintable(unsigned short, TView *)+0xb8>
        310350:	e255ccf7 	subs	ip, r5, #63232	; 0xf700
        310354:	a35c0021 	cmpge	ip, #33	; 0x21
        310358:	ba000002 	blt	310368 <KeyIsPrintable(unsigned short, TView *)+0x38>
        31035c:	e255ccf7 	subs	ip, r5, #63232	; 0xf700
        310360:	a35c002f 	cmpge	ip, #47	; 0x2f
        310364:	da00001f 	ble	3103e8 <KeyIsPrintable(unsigned short, TView *)+0xb8>
        310368:	e335001b 	teq	r5, #27	; 0x1b
        31036c:	0a00001d 	beq	3103e8 <KeyIsPrintable(unsigned short, TView *)+0xb8>
        310370:	e335000d 	teq	r5, #13	; 0xd
        310374:	13350009 	teqne	r5, #9	; 0x9
        310378:	1a000015 	bne	3103d4 <KeyIsPrintable(unsigned short, TView *)+0xa4>
        31037c:	e1a00004 	mov	r0, r4
        310380:	e3a01051 	mov	r1, #81	; 0x51
        310384:	e5942000 	ldr	r2, [r4]
        310388:	e1a0e00f 	mov	lr, pc
        31038c:	e282f004 	add	pc, r2, #4	; 0x4
        310390:	e3300000 	teq	r0, #0	; 0x0
        310394:	0a00000e 	beq	3103d4 <KeyIsPrintable(unsigned short, TView *)+0xa4>
        310398:	e5b4001c 	ldr	r0, [r4, #28]!
        31039c:	e3a0104d 	mov	r1, #77	; 0x4d
        3103a0:	e5902000 	ldr	r2, [r0]
        3103a4:	e590401c 	ldr	r4, [r0, #28]
        3103a8:	e1a0e00f 	mov	lr, pc
        3103ac:	e282f004 	add	pc, r2, #4	; 0x4
        3103b0:	e3300000 	teq	r0, #0	; 0x0
        3103b4:	1a000006 	bne	3103d4 <KeyIsPrintable(unsigned short, TView *)+0xa4>
        3103b8:	e1a00004 	mov	r0, r4
        3103bc:	e3a0104d 	mov	r1, #77	; 0x4d
        3103c0:	e5942000 	ldr	r2, [r4]
        3103c4:	e1a0e00f 	mov	lr, pc
        3103c8:	e282f004 	add	pc, r2, #4	; 0x4
        3103cc:	e3300000 	teq	r0, #0	; 0x0
        3103d0:	0a000004 	beq	3103e8 <KeyIsPrintable(unsigned short, TView *)+0xb8>
        3103d4:	e3550020 	cmp	r5, #32	; 0x20
        3103d8:	aa000004 	bge	3103f0 <KeyIsPrintable(unsigned short, TView *)+0xc0>
        3103dc:	e335000d 	teq	r5, #13	; 0xd
        3103e0:	13350009 	teqne	r5, #9	; 0x9
        3103e4:	0a000001 	beq	3103f0 <KeyIsPrintable(unsigned short, TView *)+0xc0>
        3103e8:	e1a00006 	mov	r0, r6
        3103ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        3103f0:	e3a00001 	mov	r0, #1	; 0x1
        3103f4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: KeyCanBeHandled(unsigned short)
 * Address: 003103f8
 */
KeyCanBeHandled(unsigned short) {
    /*
        3103f8:	e1a00800 	mov	r0, r0, lsl #16
        3103fc:	e1a00820 	mov	r0, r0, lsr #16
        310400:	e350001c 	cmp	r0, #28	; 0x1c
        310404:	aa000005 	bge	310420 <KeyCanBeHandled(unsigned short)+0x28>
        310408:	e3300009 	teq	r0, #9	; 0x9
        31040c:	13300008 	teqne	r0, #8	; 0x8
        310410:	1330000d 	teqne	r0, #13	; 0xd
        310414:	13300003 	teqne	r0, #3	; 0x3
        310418:	13a00000 	movne	r0, #0	; 0x0
        31041c:	11a0f00e 	movne	pc, lr
        310420:	e3a00001 	mov	r0, #1	; 0x1
        310424:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: KillBlock
 * Address: 00312220
 */
void globals::KillBlock() {
    /*
        312220:	e1a0c00d 	mov	ip, sp
        312224:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        312228:	e24cb004 	sub	fp, ip, #4	; 0x4
        31222c:	e1a04000 	mov	r4, r0
        312230:	eb633baa 	bl	1be10e0 <$GetCurrentHeap>
        312234:	e1a06000 	mov	r6, r0
        312238:	e2445010 	sub	r5, r4, #16	; 0x10
        31223c:	e3a07000 	mov	r7, #0	; 0x0
        312240:	e5958004 	ldr	r8, [r5, #4]
        312244:	e0854008 	add	r4, r5, r8
        312248:	e5d50000 	ldrb	r0, [r5]
        31224c:	e2100004 	ands	r0, r0, #4	; 0x4
        312250:	13a00001 	movne	r0, #1	; 0x1
        312254:	e20020ff 	and	r2, r0, #255	; 0xff
        312258:	e5960004 	ldr	r0, [r6, #4]
        31225c:	e1500004 	cmp	r0, r4
        312260:	93a00000 	movls	r0, #0	; 0x0
        312264:	83a00001 	movhi	r0, #1	; 0x1
        312268:	e21010ff 	ands	r1, r0, #255	; 0xff
        31226c:	0a000003 	beq	312280 <KillBlock+0x60>
        312270:	e5940000 	ldr	r0, [r4]
        312274:	e3500000 	cmp	r0, #0	; 0x0
        312278:	a3a00001 	movge	r0, #1	; 0x1
        31227c:	aa000000 	bge	312284 <KillBlock+0x64>
        312280:	e3a00000 	mov	r0, #0	; 0x0
        312284:	e21000ff 	ands	r0, r0, #255	; 0xff
        312288:	e596c068 	ldr	ip, [r6, #104]
        31228c:	e5d53001 	ldrb	r3, [r5, #1]
        312290:	e04c3003 	sub	r3, ip, r3
        312294:	e5863068 	str	r3, [r6, #104]
        312298:	e596c06c 	ldr	ip, [r6, #108]
        31229c:	e5d53001 	ldrb	r3, [r5, #1]
        3122a0:	e3c33003 	bic	r3, r3, #3	; 0x3
        3122a4:	e04c3003 	sub	r3, ip, r3
        3122a8:	e586306c 	str	r3, [r6, #108]
        3122ac:	1a00000b 	bne	3122e0 <KillBlock+0xc0>
        3122b0:	e3310000 	teq	r1, #0	; 0x0
        3122b4:	15d41000 	ldrneb	r1, [r4]
        3122b8:	13811004 	orrne	r1, r1, #4	; 0x4
        3122bc:	15c41000 	strneb	r1, [r4]
        3122c0:	e5964020 	ldr	r4, [r6, #32]
        3122c4:	ea000001 	b	3122d0 <KillBlock+0xb0>
        3122c8:	e1a07004 	mov	r7, r4
        3122cc:	e5944004 	ldr	r4, [r4, #4]
        3122d0:	e3340000 	teq	r4, #0	; 0x0
        3122d4:	0a000001 	beq	3122e0 <KillBlock+0xc0>
        3122d8:	e1540005 	cmp	r4, r5
        3122dc:	3afffff9 	bcc	3122c8 <KillBlock+0xa8>
        3122e0:	e596101c 	ldr	r1, [r6, #28]
        3122e4:	e0811008 	add	r1, r1, r8
        3122e8:	e3320000 	teq	r2, #0	; 0x0
        3122ec:	e586101c 	str	r1, [r6, #28]
        3122f0:	0a000013 	beq	312344 <KillBlock+0x124>
        3122f4:	e3300000 	teq	r0, #0	; 0x0
        3122f8:	0a00000c 	beq	312330 <KillBlock+0x110>
        3122fc:	e5945000 	ldr	r5, [r4]
        312300:	e5947008 	ldr	r7, [r4, #8]
        312304:	e5970000 	ldr	r0, [r7]
        312308:	e0800005 	add	r0, r0, r5
        31230c:	e5870000 	str	r0, [r7]
        312310:	e1a00004 	mov	r0, r4
        312314:	eb619a58 	bl	1b78c7c <$RemoveFreeBlock>
        312318:	e0840005 	add	r0, r4, r5
        31231c:	e5961004 	ldr	r1, [r6, #4]
        312320:	e1510000 	cmp	r1, r0
        312324:	85d01000 	ldrhib	r1, [r0]
        312328:	83811004 	orrhi	r1, r1, #4	; 0x4
        31232c:	85c01000 	strhib	r1, [r0]
        312330:	e5970000 	ldr	r0, [r7]
        312334:	e0800008 	add	r0, r0, r8
        312338:	e5870000 	str	r0, [r7]
        31233c:	e1a05007 	mov	r5, r7
        312340:	ea000011 	b	31238c <KillBlock+0x16c>
        312344:	e3a01000 	mov	r1, #0	; 0x0
        312348:	e3300000 	teq	r0, #0	; 0x0
        31234c:	e585100c 	str	r1, [r5, #12]
        312350:	e5858000 	str	r8, [r5]
        312354:	0a000008 	beq	31237c <KillBlock+0x15c>
        312358:	e1a00005 	mov	r0, r5
        31235c:	e5941008 	ldr	r1, [r4, #8]
        312360:	e5942004 	ldr	r2, [r4, #4]
        312364:	eb619e4d 	bl	1b79ca0 <$SetFreeChain>
        312368:	e5950000 	ldr	r0, [r5]
        31236c:	e5941000 	ldr	r1, [r4]
        312370:	e0800001 	add	r0, r0, r1
        312374:	e5850000 	str	r0, [r5]
        312378:	ea000003 	b	31238c <KillBlock+0x16c>
        31237c:	e1a02004 	mov	r2, r4
        312380:	e1a01007 	mov	r1, r7
        312384:	e1a00005 	mov	r0, r5
        312388:	eb619e44 	bl	1b79ca0 <$SetFreeChain>
        31238c:	e5960048 	ldr	r0, [r6, #72]
        312390:	e3300000 	teq	r0, #0	; 0x0
        312394:	0a000001 	beq	3123a0 <KillBlock+0x180>
        312398:	e1500005 	cmp	r0, r5
        31239c:	991ba9f0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        3123a0:	e5a65048 	str	r5, [r6, #72]!
        3123a4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: KillPicture(Picture **)
 * Address: 00332088
 */
KillPicture(Picture **) {
    /*
        332088:	ea62bc08 	b	1be10b0 <$DisposHandle>
    */
}

/**
 * Symbol: KillPoly(Polygon **)
 * Address: 00335810
 */
KillPoly(Polygon **) {
    /*
        335810:	ea62ae26 	b	1be10b0 <$DisposHandle>
    */
}

/**
 * Symbol: KeyToSKey__FRC6RefVarT1P4SKeyPsPUc
 * Address: 0034ad4c
 */
void globals::KeyToSKey() {
    /*
        34ad4c:	e1a0c00d 	mov	ip, sp
        34ad50:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        34ad54:	e24cb004 	sub	fp, ip, #4	; 0x4
        34ad58:	e1a04000 	mov	r4, r0
        34ad5c:	e1a05001 	mov	r5, r1
        34ad60:	e1a07002 	mov	r7, r2
        34ad64:	e1a06003 	mov	r6, r3
        34ad68:	e3a08000 	mov	r8, #0	; 0x0
        34ad6c:	e1a00001 	mov	r0, r1
        34ad70:	e59ba004 	ldr	sl, [fp, #4]
        34ad74:	eb62a304 	bl	1bf398c <$IsArray(RefVar const &)>
        34ad78:	e3300000 	teq	r0, #0	; 0x0
        34ad7c:	0a000004 	beq	34ad94 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x48>
        34ad80:	e1a02007 	mov	r2, r7
        34ad84:	e1a01005 	mov	r1, r5
        34ad88:	e1a00004 	mov	r0, r4
        34ad8c:	eb5c0629 	bl	1a4c638 <$MultiKeyToSKey__FRC6RefVarT1P4SKey>
        34ad90:	ea000039 	b	34ae7c <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x130>
        34ad94:	e5940000 	ldr	r0, [r4]
        34ad98:	e5900000 	ldr	r0, [r0]
        34ad9c:	e3100003 	tst	r0, #3	; 0x3
        34ada0:	e59f90a8 	ldr	r9, [pc, #a8]	; 34ae50 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x104>
        34ada4:	1a000007 	bne	34adc8 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x7c>
        34ada8:	e5950000 	ldr	r0, [r5]
        34adac:	e5900000 	ldr	r0, [r0]
        34adb0:	e59f109c 	ldr	r1, [pc, #9c]	; 34ae54 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x108>
        34adb4:	e5911000 	ldr	r1, [r1]
        34adb8:	e5911000 	ldr	r1, [r1]
        34adbc:	eb61e51b 	bl	1bc4230 <$EQRef__FlT1>
        34adc0:	e3300000 	teq	r0, #0	; 0x0
        34adc4:	1a000009 	bne	34adf0 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0xa4>
        34adc8:	e1a01005 	mov	r1, r5
        34adcc:	e1a00004 	mov	r0, r4
        34add0:	eb61e92e 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
        34add4:	e3300000 	teq	r0, #0	; 0x0
        34add8:	1a000004 	bne	34adf0 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0xa4>
        34addc:	e3a0106d 	mov	r1, #109	; 0x6d
        34ade0:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        34ade4:	e3a02000 	mov	r2, #0	; 0x0
        34ade8:	e5990000 	ldr	r0, [r9]
        34adec:	eb6260ea 	bl	1be319c <$Throw>
        34adf0:	e5950000 	ldr	r0, [r5]
        34adf4:	e5900000 	ldr	r0, [r0]
        34adf8:	e59f1058 	ldr	r1, [pc, #58]	; 34ae58 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x10c>
        34adfc:	e5911000 	ldr	r1, [r1]
        34ae00:	e5911000 	ldr	r1, [r1]
        34ae04:	eb61e509 	bl	1bc4230 <$EQRef__FlT1>
        34ae08:	e3300000 	teq	r0, #0	; 0x0
        34ae0c:	0a00001c 	beq	34ae84 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x138>
        34ae10:	e1a00004 	mov	r0, r4
        34ae14:	eb6305f9 	bl	1c0c600 <$IsLargeBinary(RefVar const &)>
        34ae18:	e3300000 	teq	r0, #0	; 0x0
        34ae1c:	0a000003 	beq	34ae30 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0xe4>
        34ae20:	e59f1034 	ldr	r1, [pc, #34]	; 34ae5c <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x110>
        34ae24:	e3a02000 	mov	r2, #0	; 0x0
        34ae28:	e5990000 	ldr	r0, [r9]
        34ae2c:	eb6260da 	bl	1be319c <$Throw>
        34ae30:	e1a00004 	mov	r0, r4
        34ae34:	eb6181d8 	bl	1bab59c <$IsRichString(RefVar const &)>
        34ae38:	e3300000 	teq	r0, #0	; 0x0
        34ae3c:	0a000007 	beq	34ae60 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x114>
        34ae40:	e1a01007 	mov	r1, r7
        34ae44:	e1a00004 	mov	r0, r4
        34ae48:	eb5c0603 	bl	1a4c65c <$RichStringToSKey(RefVar const &, SKey *)>
        34ae4c:	ea00000a 	b	34ae7c <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x130>
        34ae50:	003712fc 	ldreqsh	r1, [r7], -ip
        34ae54:	00684118 	rsbeq	r4, r8, r8, lsl r1
        34ae58:	006848d0 	ldreqd	r4, [r8], -#128
        34ae5c:	ffff445f 	swinv	0x00ff445f
        34ae60:	e5940000 	ldr	r0, [r4]
        34ae64:	e5900000 	ldr	r0, [r0]
        34ae68:	eb61dcbb 	bl	1bc215c <$BinaryData(long)>
        34ae6c:	e1a04000 	mov	r4, r0
        34ae70:	eb628e3a 	bl	1bee760 <$Ustrlen>
        34ae74:	e1a01080 	mov	r1, r0, lsl #1
        34ae78:	ea000058 	b	34afe0 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x294>
        34ae7c:	e3a08001 	mov	r8, #1	; 0x1
        34ae80:	ea000060 	b	34b008 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x2bc>
        34ae84:	e5950000 	ldr	r0, [r5]
        34ae88:	e5900000 	ldr	r0, [r0]
        34ae8c:	e59f1044 	ldr	r1, [pc, #44]	; 34aed8 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x18c>
        34ae90:	e5911000 	ldr	r1, [r1]
        34ae94:	e5911000 	ldr	r1, [r1]
        34ae98:	eb61e4e4 	bl	1bc4230 <$EQRef__FlT1>
        34ae9c:	e3300000 	teq	r0, #0	; 0x0
        34aea0:	0a00000d 	beq	34aedc <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x190>
        34aea4:	e5940000 	ldr	r0, [r4]
        34aea8:	e5900000 	ldr	r0, [r0]
        34aeac:	e3100003 	tst	r0, #3	; 0x3
        34aeb0:	01a00140 	moveq	r0, r0, asr #2
        34aeb4:	0a000000 	beq	34aebc <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x170>
        34aeb8:	eb61dc97 	bl	1bc211c <$_RINTError(long)>
        34aebc:	e1a01000 	mov	r1, r0
        34aec0:	e1a00007 	mov	r0, r7
        34aec4:	ebfe79fd 	bl	2e96c0 <SKey::operator=(long)>
        34aec8:	e3360000 	teq	r6, #0	; 0x0
        34aecc:	13a00004 	movne	r0, #4	; 0x4
        34aed0:	1a00002f 	bne	34af94 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x248>
        34aed4:	ea00004b 	b	34b008 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x2bc>
        34aed8:	006832b8 	streqh	r3, [r8], -#40
        34aedc:	e5950000 	ldr	r0, [r5]
        34aee0:	e5900000 	ldr	r0, [r0]
        34aee4:	e51f1098 	ldr	r1, [pc, #ffffff68]	; 34ae54 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x108>
        34aee8:	e5911000 	ldr	r1, [r1]
        34aeec:	e5911000 	ldr	r1, [r1]
        34aef0:	eb61e4ce 	bl	1bc4230 <$EQRef__FlT1>
        34aef4:	e3300000 	teq	r0, #0	; 0x0
        34aef8:	0a000009 	beq	34af24 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x1d8>
        34aefc:	e1a00004 	mov	r0, r4
        34af00:	eb61dc9a 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        34af04:	e1a00007 	mov	r0, r7
        34af08:	ed2d8102 	stfd	f0, [sp, -#8]!
        34af0c:	e8bd0006 	ldmia	sp!, {r1, r2}
        34af10:	ebfe7f22 	bl	2eaba0 <SKey::operator=(double const)>
        34af14:	e3360000 	teq	r6, #0	; 0x0
        34af18:	13a00008 	movne	r0, #8	; 0x8
        34af1c:	1a00001c 	bne	34af94 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x248>
        34af20:	ea000038 	b	34b008 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x2bc>
        34af24:	e5950000 	ldr	r0, [r5]
        34af28:	e5900000 	ldr	r0, [r0]
        34af2c:	e59f1070 	ldr	r1, [pc, #70]	; 34afa4 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x258>
        34af30:	e5911000 	ldr	r1, [r1]
        34af34:	e5911000 	ldr	r1, [r1]
        34af38:	eb61e4bc 	bl	1bc4230 <$EQRef__FlT1>
        34af3c:	e3300000 	teq	r0, #0	; 0x0
        34af40:	0a000018 	beq	34afa8 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x25c>
        34af44:	e5940000 	ldr	r0, [r4]
        34af48:	e5900000 	ldr	r0, [r0]
        34af4c:	e2001003 	and	r1, r0, #3	; 0x3
        34af50:	e3310002 	teq	r1, #2	; 0x2
        34af54:	03a01003 	moveq	r1, #3	; 0x3
        34af58:	00011140 	andeq	r1, r1, r0, asr #2
        34af5c:	03310001 	teqeq	r1, #1	; 0x1
        34af60:	01a00140 	moveq	r0, r0, asr #2
        34af64:	01a00140 	moveq	r0, r0, asr #2
        34af68:	01a00800 	moveq	r0, r0, lsl #16
        34af6c:	01a00820 	moveq	r0, r0, lsr #16
        34af70:	0a000000 	beq	34af78 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x22c>
        34af74:	eb61dc67 	bl	1bc2118 <$_RCHARError(long)>
        34af78:	e1a01800 	mov	r1, r0, lsl #16
        34af7c:	e1a01821 	mov	r1, r1, lsr #16
        34af80:	e1a00007 	mov	r0, r7
        34af84:	ebfe7c32 	bl	2ea054 <SKey::operator=(unsigned short)>
        34af88:	e3360000 	teq	r6, #0	; 0x0
        34af8c:	0a00001d 	beq	34b008 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x2bc>
        34af90:	e3a00002 	mov	r0, #2	; 0x2
        34af94:	e5c60001 	strb	r0, [r6, #1]
        34af98:	e3a00000 	mov	r0, #0	; 0x0
        34af9c:	e5c60000 	strb	r0, [r6]
        34afa0:	ea000018 	b	34b008 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x2bc>
        34afa4:	00682390 	streqb	r2, [r8], -#48
        34afa8:	e5950000 	ldr	r0, [r5]
        34afac:	e5900000 	ldr	r0, [r0]
        34afb0:	e59f1038 	ldr	r1, [pc, #38]	; 34aff0 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x2a4>
        34afb4:	e5911000 	ldr	r1, [r1]
        34afb8:	e5911000 	ldr	r1, [r1]
        34afbc:	eb61e49b 	bl	1bc4230 <$EQRef__FlT1>
        34afc0:	e3300000 	teq	r0, #0	; 0x0
        34afc4:	0a00000a 	beq	34aff4 <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x2a8>
        34afc8:	e5940000 	ldr	r0, [r4]
        34afcc:	e5900000 	ldr	r0, [r0]
        34afd0:	eb61f520 	bl	1bc8458 <$SymbolName(long)>
        34afd4:	e1a04000 	mov	r4, r0
        34afd8:	eb61aab4 	bl	1bb5ab0 <$strlen>
        34afdc:	e1a01000 	mov	r1, r0
        34afe0:	e1a02004 	mov	r2, r4
        34afe4:	e1a00007 	mov	r0, r7
        34afe8:	eb5bfd52 	bl	1a4a538 <SKey::$Set(unsigned int, void *)>
        34afec:	eaffffa2 	b	34ae7c <KeyToSKey__FRC6RefVarT1P4SKeyPsPUc+0x130>
        34aff0:	00684970 	rsbeq	r4, r8, r0, ror r9
        34aff4:	e3a01075 	mov	r1, #117	; 0x75
        34aff8:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        34affc:	e3a02000 	mov	r2, #0	; 0x0
        34b000:	e5990000 	ldr	r0, [r9]
        34b004:	eb626064 	bl	1be319c <$Throw>
        34b008:	e33a0000 	teq	sl, #0	; 0x0
        34b00c:	15ca8000 	strneb	r8, [sl]
        34b010:	e3380000 	teq	r8, #0	; 0x0
        34b014:	13360000 	teqne	r6, #0	; 0x0
        34b018:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        34b01c:	e5970000 	ldr	r0, [r7]
        34b020:	e1a00400 	mov	r0, r0, lsl #8
        34b024:	e1a00c20 	mov	r0, r0, lsr #24
        34b028:	e2800002 	add	r0, r0, #2	; 0x2
        34b02c:	e5c60001 	strb	r0, [r6, #1]
        34b030:	e1a00440 	mov	r0, r0, asr #8
        34b034:	e5c60000 	strb	r0, [r6]
        34b038:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: KillStoreObject(RefVar const &)
 * Address: 00355360
 */
KillStoreObject(RefVar const &) {
    /*
        355360:	e1a0c00d 	mov	ip, sp
        355364:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        355368:	e24cb004 	sub	fp, ip, #4	; 0x4
        35536c:	e1a04000 	mov	r4, r0
        355370:	e24dd004 	sub	sp, sp, #4	; 0x4
        355374:	e3a07002 	mov	r7, #2	; 0x2
        355378:	e1a00007 	mov	r0, r7
        35537c:	eb61b372 	bl	1bc214c <$AllocateRefHandle(long)>
        355380:	e58d0000 	str	r0, [sp]
        355384:	e1a0200d 	mov	r2, sp
        355388:	e59f1160 	ldr	r1, [pc, #160]	; 3554f0 <KillStoreObject(RefVar const &)+0x190>
        35538c:	e1a09001 	mov	r9, r1
        355390:	e1a00004 	mov	r0, r4
        355394:	eb61c3f3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        355398:	e59d0000 	ldr	r0, [sp]
        35539c:	eb61b786 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3553a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3553a4:	e5940000 	ldr	r0, [r4]
        3553a8:	e5900000 	ldr	r0, [r0]
        3553ac:	e59f1140 	ldr	r1, [pc, #140]	; 3554f4 <KillStoreObject(RefVar const &)+0x194>
        3553b0:	e5911000 	ldr	r1, [r1]
        3553b4:	e5911000 	ldr	r1, [r1]
        3553b8:	eb61bba8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3553bc:	eb61b362 	bl	1bc214c <$AllocateRefHandle(long)>
        3553c0:	e1a05000 	mov	r5, r0
        3553c4:	e5900000 	ldr	r0, [r0]
        3553c8:	eb61bfb7 	bl	1bc52ac <$Length(long)>
        3553cc:	e1a08000 	mov	r8, r0
        3553d0:	e3a00002 	mov	r0, #2	; 0x2
        3553d4:	eb61b35c 	bl	1bc214c <$AllocateRefHandle(long)>
        3553d8:	e3a06000 	mov	r6, #0	; 0x0
        3553dc:	e3580000 	cmp	r8, #0	; 0x0
        3553e0:	e58d0000 	str	r0, [sp]
        3553e4:	da000035 	ble	3554c0 <KillStoreObject(RefVar const &)+0x160>
        3553e8:	e59fa108 	ldr	sl, [pc, #108]	; 3554f8 <KillStoreObject(RefVar const &)+0x198>
        3553ec:	e1a01006 	mov	r1, r6
        3553f0:	e5950000 	ldr	r0, [r5]
        3553f4:	eb61bb96 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        3553f8:	e59d1000 	ldr	r1, [sp]
        3553fc:	e5810000 	str	r0, [r1]
        355400:	e1a01000 	mov	r1, r0
        355404:	e3300002 	teq	r0, #2	; 0x2
        355408:	0a000029 	beq	3554b4 <KillStoreObject(RefVar const &)+0x154>
        35540c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        355410:	e1a00001 	mov	r0, r1
        355414:	e59a1000 	ldr	r1, [sl]
        355418:	e5911000 	ldr	r1, [r1]
        35541c:	eb61bb8f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        355420:	eb61b349 	bl	1bc214c <$AllocateRefHandle(long)>
        355424:	e58d0000 	str	r0, [sp]
        355428:	e1a0000d 	mov	r0, sp
        35542c:	e28d100c 	add	r1, sp, #12	; 0xc
        355430:	eb5bb753 	bl	1a43184 <$RemoveFromUnionSoup__FRC6RefVarT1>
        355434:	e59d0000 	ldr	r0, [sp]
        355438:	eb61b75f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35543c:	e1a00007 	mov	r0, r7
        355440:	eb61b341 	bl	1bc214c <$AllocateRefHandle(long)>
        355444:	e58d0004 	str	r0, [sp, #4]
        355448:	e28d2004 	add	r2, sp, #4	; 0x4
        35544c:	e1a01009 	mov	r1, r9
        355450:	e28d000c 	add	r0, sp, #12	; 0xc
        355454:	eb61c3c3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        355458:	e59d0004 	ldr	r0, [sp, #4]
        35545c:	eb61b756 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        355460:	e59d000c 	ldr	r0, [sp, #12]
        355464:	e5900000 	ldr	r0, [r0]
        355468:	e59f108c 	ldr	r1, [pc, #8c]	; 3554fc <KillStoreObject(RefVar const &)+0x19c>
        35546c:	e5911000 	ldr	r1, [r1]
        355470:	e5911000 	ldr	r1, [r1]
        355474:	eb61bb79 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        355478:	eb61b333 	bl	1bc214c <$AllocateRefHandle(long)>
        35547c:	e58d0008 	str	r0, [sp, #8]
        355480:	e28d0008 	add	r0, sp, #8	; 0x8
        355484:	eb5baaea 	bl	1a40034 <$InvalidateCacheEntries(RefVar const &)>
        355488:	e59d0008 	ldr	r0, [sp, #8]
        35548c:	eb61b74a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        355490:	e28d200c 	add	r2, sp, #12	; 0xc
        355494:	e28d000c 	add	r0, sp, #12	; 0xc
        355498:	e3a01001 	mov	r1, #1	; 0x1
        35549c:	ebfde2a1 	bl	2cdf28 <EachSoupCursorDo(RefVar const &, long, long)>
        3554a0:	e1a02007 	mov	r2, r7
        3554a4:	e1a01006 	mov	r1, r6
        3554a8:	e5950000 	ldr	r0, [r5]
        3554ac:	eb61c3a9 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3554b0:	e28dd00c 	add	sp, sp, #12	; 0xc
        3554b4:	e2866001 	add	r6, r6, #1	; 0x1
        3554b8:	e1560008 	cmp	r6, r8
        3554bc:	baffffca 	blt	3553ec <KillStoreObject(RefVar const &)+0x8c>
        3554c0:	e5940000 	ldr	r0, [r4]
        3554c4:	e5900000 	ldr	r0, [r0]
        3554c8:	e59f1030 	ldr	r1, [pc, #30]	; 355500 <KillStoreObject(RefVar const &)+0x1a0>
        3554cc:	e5911000 	ldr	r1, [r1]
        3554d0:	e5911000 	ldr	r1, [r1]
        3554d4:	eb61bb61 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3554d8:	eb5bbf80 	bl	1a452e0 <$LargeBinariesStoreRemoved(TStoreWrapper *)>
        3554dc:	e59d0000 	ldr	r0, [sp]
        3554e0:	eb61b735 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3554e4:	e1a00005 	mov	r0, r5
        3554e8:	eb61b733 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3554ec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3554f0:	00685390 	streqb	r5, [r8], -#48
        3554f4:	00684790 	streqb	r4, [r8], -#112
        3554f8:	00684b10 	rsbeq	r4, r8, r0, lsl fp
        3554fc:	00682268 	rsbeq	r2, r8, r8, ror #4
        355500:	00684868 	rsbeq	r4, r8, r8, ror #16
    */
}

