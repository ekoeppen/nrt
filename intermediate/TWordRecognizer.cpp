#include "include/TWordRecognizer.h"

/**
 * Symbol: TWordRecognizer::BuildConfig(RefVar const &, TView *, unsigned long)
 * Address: 0016700c
 */
TWordRecognizer::BuildConfig(RefVar const &, TView *, unsigned long) {
    /*
        16700c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)
 * Address: 00167158
 */
TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &) {
    /*
        167158:	e1a0c00d 	mov	ip, sp
        16715c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        167160:	e24cb004 	sub	fp, ip, #4	; 0x4
        167164:	e1a06000 	mov	r6, r0
        167168:	e1a05001 	mov	r5, r1
        16716c:	e1a04002 	mov	r4, r2
        167170:	e5901000 	ldr	r1, [r0]
        167174:	e1a0e00f 	mov	lr, pc
        167178:	e281f00c 	add	pc, r1, #12	; 0xc
        16717c:	e1a01000 	mov	r1, r0
        167180:	e1a00005 	mov	r0, r5
        167184:	eb651942 	bl	1aad694 <$DomainOn(TRecArea *, unsigned long)>
        167188:	e3300000 	teq	r0, #0	; 0x0
        16718c:	0a0000d5 	beq	1674e8 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x390>
        167190:	e24dd004 	sub	sp, sp, #4	; 0x4
        167194:	e59f11b4 	ldr	r1, [pc, #1b4]	; 167350 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x1f8>
        167198:	e1a00004 	mov	r0, r4
        16719c:	e3a03000 	mov	r3, #0	; 0x0
        1671a0:	e3a02000 	mov	r2, #0	; 0x0
        1671a4:	eb697432 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1671a8:	e3100003 	tst	r0, #3	; 0x3
        1671ac:	01a00140 	moveq	r0, r0, asr #2
        1671b0:	0a000000 	beq	1671b8 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x60>
        1671b4:	eb696bd8 	bl	1bc211c <$_RINTError(long)>
        1671b8:	e1a0a000 	mov	sl, r0
        1671bc:	e1a01004 	mov	r1, r4
        1671c0:	e1a00006 	mov	r0, r6
        1671c4:	eb65db47 	bl	1addee8 <TWordRecognizer::$FieldType(RefVar const &)>
        1671c8:	e1a09000 	mov	r9, r0
        1671cc:	e1a00005 	mov	r0, r5
        1671d0:	e3a02001 	mov	r2, #1	; 0x1
        1671d4:	e5968020 	ldr	r8, [r6, #32]
        1671d8:	e59f1174 	ldr	r1, [pc, #174]	; 167354 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x1fc>
        1671dc:	eb67df61 	bl	1b5ef68 <TRecArea::$GetInfoFor(unsigned long, unsigned char)>
        1671e0:	e1a07000 	mov	r7, r0
        1671e4:	e59f116c 	ldr	r1, [pc, #16c]	; 167358 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x200>
        1671e8:	e1a00004 	mov	r0, r4
        1671ec:	e3a02000 	mov	r2, #0	; 0x0
        1671f0:	eb69741c 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1671f4:	eb696bd4 	bl	1bc214c <$AllocateRefHandle(long)>
        1671f8:	e58d0000 	str	r0, [sp]
        1671fc:	e5900000 	ldr	r0, [r0]
        167200:	e3300002 	teq	r0, #2	; 0x2
        167204:	0a000010 	beq	16724c <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0xf4>
        167208:	e24dd008 	sub	sp, sp, #8	; 0x8
        16720c:	e1a0100d 	mov	r1, sp
        167210:	e28d0008 	add	r0, sp, #8	; 0x8
        167214:	eb6529b4 	bl	1ab18ec <$FromObject(RefVar const &, WordBaseInfo *)>
        167218:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        16721c:	e28d101c 	add	r1, sp, #28	; 0x1c
        167220:	e1a0000d 	mov	r0, sp
        167224:	eb65db34 	bl	1addefc <$GetWordGeom(WORD_GEOM *, WordBaseInfo *)>
        167228:	e1a03007 	mov	r3, r7
        16722c:	e1a0200d 	mov	r2, sp
        167230:	e1a00008 	mov	r0, r8
        167234:	e3a0100c 	mov	r1, #12	; 0xc
        167238:	e2811802 	add	r1, r1, #131072	; 0x20000
        16723c:	e598c000 	ldr	ip, [r8]
        167240:	e1a0e00f 	mov	lr, pc
        167244:	e28cf02c 	add	pc, ip, #44	; 0x2c
        167248:	e28dd024 	add	sp, sp, #36	; 0x24
        16724c:	e59f1108 	ldr	r1, [pc, #108]	; 16735c <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x204>
        167250:	e1a00004 	mov	r0, r4
        167254:	e3a02000 	mov	r2, #0	; 0x0
        167258:	eb697402 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        16725c:	e59d1000 	ldr	r1, [sp]
        167260:	e5810000 	str	r0, [r1]
        167264:	e3300002 	teq	r0, #2	; 0x2
        167268:	0a000017 	beq	1672cc <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x174>
        16726c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        167270:	e1a0100d 	mov	r1, sp
        167274:	e28d000c 	add	r0, sp, #12	; 0xc
        167278:	eb65299a 	bl	1ab18e8 <$FromObject(RefVar const &, RecGridInfo *)>
        16727c:	e59d000a 	ldr	r0, [sp, #10]
        167280:	e1b00820 	movs	r0, r0, lsr #16
        167284:	059d0004 	ldreq	r0, [sp, #4]
        167288:	01a00820 	moveq	r0, r0, lsr #16
        16728c:	03300000 	teqeq	r0, #0	; 0x0
        167290:	0a00000c 	beq	1672c8 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x170>
        167294:	e24dd010 	sub	sp, sp, #16	; 0x10
        167298:	e28d1010 	add	r1, sp, #16	; 0x10
        16729c:	e1a0000d 	mov	r0, sp
        1672a0:	eb65db11 	bl	1addeec <$GetGridGeom(WORD_BASELINE *, RecGridInfo *)>
        1672a4:	e1a03007 	mov	r3, r7
        1672a8:	e1a0200d 	mov	r2, sp
        1672ac:	e1a00008 	mov	r0, r8
        1672b0:	e3a0100e 	mov	r1, #14	; 0xe
        1672b4:	e2811802 	add	r1, r1, #131072	; 0x20000
        1672b8:	e598c000 	ldr	ip, [r8]
        1672bc:	e1a0e00f 	mov	lr, pc
        1672c0:	e28cf02c 	add	pc, ip, #44	; 0x2c
        1672c4:	e28dd010 	add	sp, sp, #16	; 0x10
        1672c8:	e28dd00c 	add	sp, sp, #12	; 0xc
        1672cc:	e59f108c 	ldr	r1, [pc, #8c]	; 167360 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x208>
        1672d0:	e1a00004 	mov	r0, r4
        1672d4:	e3a02000 	mov	r2, #0	; 0x0
        1672d8:	eb6973e2 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1672dc:	e3300002 	teq	r0, #2	; 0x2
        1672e0:	13c90008 	bicne	r0, r9, #8	; 0x8
        1672e4:	13809020 	orrne	r9, r0, #32	; 0x20
        1672e8:	e1a03007 	mov	r3, r7
        1672ec:	e1a02009 	mov	r2, r9
        1672f0:	e1a00008 	mov	r0, r8
        1672f4:	e3a01006 	mov	r1, #6	; 0x6
        1672f8:	e2811802 	add	r1, r1, #131072	; 0x20000
        1672fc:	e598c000 	ldr	ip, [r8]
        167300:	e1a0e00f 	mov	lr, pc
        167304:	e28cf02c 	add	pc, ip, #44	; 0x2c
        167308:	e59f1054 	ldr	r1, [pc, #54]	; 167364 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x20c>
        16730c:	e1a00004 	mov	r0, r4
        167310:	e3a03000 	mov	r3, #0	; 0x0
        167314:	e3a02000 	mov	r2, #0	; 0x0
        167318:	eb6973d5 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        16731c:	e59d1000 	ldr	r1, [sp]
        167320:	e5810000 	str	r0, [r1]
        167324:	e3300002 	teq	r0, #2	; 0x2
        167328:	0a000001 	beq	167334 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x1dc>
        16732c:	e31a0c01 	tst	sl, #256	; 0x100
        167330:	0a00000c 	beq	167368 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x210>
        167334:	e1a03007 	mov	r3, r7
        167338:	e1a00008 	mov	r0, r8
        16733c:	e3a02000 	mov	r2, #0	; 0x0
        167340:	e3a01027 	mov	r1, #39	; 0x27
        167344:	e2811802 	add	r1, r1, #131072	; 0x20000
        167348:	e598c000 	ldr	ip, [r8]
        16734c:	ea00001a 	b	1673bc <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x264>
        167350:	00683270 	rsbeq	r3, r8, r0, ror r2
        167354:	53545852 	cmppl	r4, #5373952	; 0x520000
        167358:	006840e8 	rsbeq	r4, r8, r8, ror #1
        16735c:	006840f0 	streqd	r4, [r8]
        167360:	006840f8 	streqd	r4, [r8], -#8
        167364:	00683530 	rsbeq	r3, r8, r0, lsr r5
        167368:	e1a03007 	mov	r3, r7
        16736c:	e1a00008 	mov	r0, r8
        167370:	e3a02000 	mov	r2, #0	; 0x0
        167374:	e3a01028 	mov	r1, #40	; 0x28
        167378:	e2811802 	add	r1, r1, #131072	; 0x20000
        16737c:	e598c000 	ldr	ip, [r8]
        167380:	e1a0e00f 	mov	lr, pc
        167384:	e28cf02c 	add	pc, ip, #44	; 0x2c
        167388:	e1a0a008 	mov	sl, r8
        16738c:	e59d0000 	ldr	r0, [sp]
        167390:	e5900000 	ldr	r0, [r0]
        167394:	e3100003 	tst	r0, #3	; 0x3
        167398:	01a00140 	moveq	r0, r0, asr #2
        16739c:	0a000000 	beq	1673a4 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x24c>
        1673a0:	eb696b5d 	bl	1bc211c <$_RINTError(long)>
        1673a4:	e2602009 	rsb	r2, r0, #9	; 0x9
        1673a8:	e1a03007 	mov	r3, r7
        1673ac:	e1a0000a 	mov	r0, sl
        1673b0:	e3a01025 	mov	r1, #37	; 0x25
        1673b4:	e2811802 	add	r1, r1, #131072	; 0x20000
        1673b8:	e59ac000 	ldr	ip, [sl]
        1673bc:	e1a0e00f 	mov	lr, pc
        1673c0:	e28cf02c 	add	pc, ip, #44	; 0x2c
        1673c4:	e1a03007 	mov	r3, r7
        1673c8:	e59f0120 	ldr	r0, [pc, #120]	; 1674f0 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x398>
        1673cc:	e5902000 	ldr	r2, [r0]
        1673d0:	e1a00008 	mov	r0, r8
        1673d4:	e3a01046 	mov	r1, #70	; 0x46
        1673d8:	e2811802 	add	r1, r1, #131072	; 0x20000
        1673dc:	e598c000 	ldr	ip, [r8]
        1673e0:	e1a0e00f 	mov	lr, pc
        1673e4:	e28cf02c 	add	pc, ip, #44	; 0x2c
        1673e8:	e59f1104 	ldr	r1, [pc, #104]	; 1674f4 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x39c>
        1673ec:	e1a00004 	mov	r0, r4
        1673f0:	e3a03000 	mov	r3, #0	; 0x0
        1673f4:	e3a02000 	mov	r2, #0	; 0x0
        1673f8:	eb69739d 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1673fc:	e59f30f4 	ldr	r3, [pc, #f4]	; 1674f8 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x3a0>
        167400:	e1a02004 	mov	r2, r4
        167404:	e1a01007 	mov	r1, r7
        167408:	e1a00008 	mov	r0, r8
        16740c:	eb65daa7 	bl	1addeb0 <$DoParaCommands__FP7TDomainPPcRC6RefVarT3>
        167410:	e1a00005 	mov	r0, r5
        167414:	e51f10c8 	ldr	r1, [pc, #ffffff38]	; 167354 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x1fc>
        167418:	eb67e736 	bl	1b610f8 <TRecArea::$ParamsAllSet(unsigned long)>
        16741c:	e1a00006 	mov	r0, r6
        167420:	e5961000 	ldr	r1, [r6]
        167424:	e1a0e00f 	mov	lr, pc
        167428:	e281f008 	add	pc, r1, #8	; 0x8
        16742c:	e1a08000 	mov	r8, r0
        167430:	e1a00005 	mov	r0, r5
        167434:	e3a02001 	mov	r2, #1	; 0x1
        167438:	e59f60bc 	ldr	r6, [pc, #bc]	; 1674fc <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x3a4>
        16743c:	e1a01006 	mov	r1, r6
        167440:	eb67dec8 	bl	1b5ef68 <TRecArea::$GetInfoFor(unsigned long, unsigned char)>
        167444:	e1a07000 	mov	r7, r0
        167448:	e59f10b0 	ldr	r1, [pc, #b0]	; 167500 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x3a8>
        16744c:	e1a00004 	mov	r0, r4
        167450:	e3a03000 	mov	r3, #0	; 0x0
        167454:	e3a02000 	mov	r2, #0	; 0x0
        167458:	eb697385 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        16745c:	e3100003 	tst	r0, #3	; 0x3
        167460:	01a00140 	moveq	r0, r0, asr #2
        167464:	0a000000 	beq	16746c <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x314>
        167468:	eb696b2b 	bl	1bc211c <$_RINTError(long)>
        16746c:	e1a02000 	mov	r2, r0
        167470:	e1a03009 	mov	r3, r9
        167474:	e1a01007 	mov	r1, r7
        167478:	e1a00008 	mov	r0, r8
        16747c:	eb65dea5 	bl	1adef18 <$SetupXRD__FP7TDomainPPcUlT3>
        167480:	e24dd00c 	sub	sp, sp, #12	; 0xc
        167484:	e1a01004 	mov	r1, r4
        167488:	e1a0000d 	mov	r0, sp
        16748c:	eb6507fd 	bl	1aa9488 <$BuildChains(TDictChain **, RefVar const &)>
        167490:	e1a0200d 	mov	r2, sp
        167494:	e1a01007 	mov	r1, r7
        167498:	e1a00008 	mov	r0, r8
        16749c:	eb65de9c 	bl	1adef14 <$SetupChains(TDomain *, char **, TDictChain **)>
        1674a0:	e3a00000 	mov	r0, #0	; 0x0
        1674a4:	e79d1100 	ldr	r1, [sp, r0, lsl #2]
        1674a8:	e0852100 	add	r2, r5, r0, lsl #2
        1674ac:	e2800001 	add	r0, r0, #1	; 0x1
        1674b0:	e3500003 	cmp	r0, #3	; 0x3
        1674b4:	e5a21020 	str	r1, [r2, #32]!
        1674b8:	bafffff9 	blt	1674a4 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x34c>
        1674bc:	e59f3040 	ldr	r3, [pc, #40]	; 167504 <TWordRecognizer::ConfigFromFrame(TRecArea *, RefVar const &)+0x3ac>
        1674c0:	e1a02004 	mov	r2, r4
        1674c4:	e1a01007 	mov	r1, r7
        1674c8:	e1a00008 	mov	r0, r8
        1674cc:	eb65da77 	bl	1addeb0 <$DoParaCommands__FP7TDomainPPcRC6RefVarT3>
        1674d0:	e1a00005 	mov	r0, r5
        1674d4:	e1a01006 	mov	r1, r6
        1674d8:	eb67e706 	bl	1b610f8 <TRecArea::$ParamsAllSet(unsigned long)>
        1674dc:	e5bd000c 	ldr	r0, [sp, #12]!
        1674e0:	eb696f35 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1674e4:	e28dd004 	add	sp, sp, #4	; 0x4
        1674e8:	e3a00000 	mov	r0, #0	; 0x0
        1674ec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1674f0:	0c101848 	ldceq	8, cr1, [r0], -#288
        1674f4:	00683d38 	rsbeq	r3, r8, r8, lsr sp
        1674f8:	00684918 	rsbeq	r4, r8, r8, lsl r9
        1674fc:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
        167500:	006847c8 	rsbeq	r4, r8, r8, asr #15
        167504:	00685240 	rsbeq	r5, r8, r0, asr #4
    */
}

/**
 * Symbol: TWordRecognizer::HandleUnit(TUnitPublic *)
 * Address: 001677b0
 */
TWordRecognizer::HandleUnit(TUnitPublic *) {
    /*
        1677b0:	ea65518f 	b	1abbdf4 <$WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)>
    */
}

/**
 * Symbol: TWordRecognizer::FieldType(RefVar const &)
 * Address: 00167844
 */
TWordRecognizer::FieldType(RefVar const &) {
    /*
        167844:	e1a0c00d 	mov	ip, sp
        167848:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        16784c:	e24cb004 	sub	fp, ip, #4	; 0x4
        167850:	e1a04000 	mov	r4, r0
        167854:	e1a00001 	mov	r0, r1
        167858:	e3a05000 	mov	r5, #0	; 0x0
        16785c:	e59f1064 	ldr	r1, [pc, #64]	; 1678c8 <TWordRecognizer::FieldType(RefVar const &)+0x84>
        167860:	e3a03000 	mov	r3, #0	; 0x0
        167864:	e3a02000 	mov	r2, #0	; 0x0
        167868:	eb697281 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        16786c:	e3100003 	tst	r0, #3	; 0x3
        167870:	01a00140 	moveq	r0, r0, asr #2
        167874:	0a000000 	beq	16787c <TWordRecognizer::FieldType(RefVar const &)+0x38>
        167878:	eb696a27 	bl	1bc211c <$_RINTError(long)>
        16787c:	e3c014fe 	bic	r1, r0, #-33554432	; 0xfe000000
        167880:	e3c11897 	bic	r1, r1, #9895936	; 0x970000
        167884:	e3c11cef 	bic	r1, r1, #61184	; 0xef00
        167888:	e3d110ff 	bics	r1, r1, #255	; 0xff
        16788c:	13a05001 	movne	r5, #1	; 0x1
        167890:	e3c014fe 	bic	r1, r0, #-33554432	; 0xfe000000
        167894:	e3c118c3 	bic	r1, r1, #12779520	; 0xc30000
        167898:	e3c11cdf 	bic	r1, r1, #57088	; 0xdf00
        16789c:	e3d110ff 	bics	r1, r1, #255	; 0xff
        1678a0:	13855002 	orrne	r5, r5, #2	; 0x2
        1678a4:	e3100901 	tst	r0, #16384	; 0x4000
        1678a8:	13855004 	orrne	r5, r5, #4	; 0x4
        1678ac:	e3100902 	tst	r0, #32768	; 0x8000
        1678b0:	13855008 	orrne	r5, r5, #8	; 0x8
        1678b4:	e3100802 	tst	r0, #131072	; 0x20000
        1678b8:	13855010 	orrne	r5, r5, #16	; 0x10
        1678bc:	e5a45024 	str	r5, [r4, #36]!	; fField36
        1678c0:	e1a00005 	mov	r0, r5
        1678c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1678c8:	00683270 	rsbeq	r3, r8, r0, ror r2
    */
}

/**
 * Symbol: TWordRecognizer::ConfigureArea(TRecArea *, RefVar const &)
 * Address: 00168000
 */
TWordRecognizer::ConfigureArea(TRecArea *, RefVar const &) {
    /*
        168000:	e1a0c00d 	mov	ip, sp
        168004:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        168008:	e24cb004 	sub	fp, ip, #4	; 0x4
        16800c:	e1a05000 	mov	r5, r0
        168010:	e1a04001 	mov	r4, r1
        168014:	e1a06002 	mov	r6, r2
        168018:	e59f0024 	ldr	r0, [pc, #24]	; 168044 <TWordRecognizer::ConfigureArea(TRecArea *, RefVar const &)+0x44>
        16801c:	eb64bab8 	bl	1a96b04 <$GetPreference(RefVar const &)>
        168020:	e2500002 	subs	r0, r0, #2	; 0x2
        168024:	13a00001 	movne	r0, #1	; 0x1
        168028:	e59f1018 	ldr	r1, [pc, #18]	; 168048 <TWordRecognizer::ConfigureArea(TRecArea *, RefVar const &)+0x48>
        16802c:	e5c10000 	strb	r0, [r1]
        168030:	e1a02006 	mov	r2, r6
        168034:	e1a01004 	mov	r1, r4
        168038:	e1a00005 	mov	r0, r5
        16803c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        168040:	ea65d796 	b	1addea0 <TWordRecognizer::$ConfigFromFrame(TRecArea *, RefVar const &)>
        168044:	00683580 	rsbeq	r3, r8, r0, lsl #11
        168048:	0c104d40 	ldceq	13, cr4, [r0], -#256
    */
}

/**
 * Symbol: TWordRecognizer::UnitConfidence(TUnitPublic *)
 * Address: 00168314
 */
TWordRecognizer::UnitConfidence(TUnitPublic *) {
    /*
        168314:	e3a00000 	mov	r0, #0	; 0x0
        168318:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWordRecognizer::Sleep(void)
 * Address: 001683f8
 */
TWordRecognizer::Sleep(void) {
    /*
        1683f8:	e1a0c00d 	mov	ip, sp
        1683fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        168400:	e24cb004 	sub	fp, ip, #4	; 0x4
        168404:	eb65d6ba 	bl	1addef4 <$GetLetterSet(void)>
        168408:	e1a04000 	mov	r4, r0
        16840c:	e3a00000 	mov	r0, #0	; 0x0
        168410:	eb65dabe 	bl	1adef10 <$SetLetterSet(unsigned long)>
        168414:	e59f0010 	ldr	r0, [pc, #10]	; 16842c <TWordRecognizer::Sleep(void)+0x34>
        168418:	eb6a5eff 	bl	1c0001c <$NSCallGlobalFn(RefVar const &)>
        16841c:	eb66e73c 	bl	1b22114 <$PGFreeAllLearningData(void)>
        168420:	e1a00004 	mov	r0, r4
        168424:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        168428:	ea65dab8 	b	1adef10 <$SetLetterSet(unsigned long)>
        16842c:	00684428 	rsbeq	r4, r8, r8, lsr #8
    */
}

/**
 * Symbol: TWordRecognizer::WakeUp(void)
 * Address: 00168430
 */
TWordRecognizer::WakeUp(void) {
    /*
        168430:	e1a0c00d 	mov	ip, sp
        168434:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        168438:	e24cb004 	sub	fp, ip, #4	; 0x4
        16843c:	eb65d6ac 	bl	1addef4 <$GetLetterSet(void)>
        168440:	e1a04000 	mov	r4, r0
        168444:	e3a00000 	mov	r0, #0	; 0x0
        168448:	eb65dab0 	bl	1adef10 <$SetLetterSet(unsigned long)>
        16844c:	e59f000c 	ldr	r0, [pc, #c]	; 168460 <TWordRecognizer::WakeUp(void)+0x30>
        168450:	eb6a5ef1 	bl	1c0001c <$NSCallGlobalFn(RefVar const &)>
        168454:	e1a00004 	mov	r0, r4
        168458:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        16845c:	ea65daab 	b	1adef10 <$SetLetterSet(unsigned long)>
        168460:	006835e8 	rsbeq	r3, r8, r8, ror #11
    */
}

/**
 * Symbol: TWordRecognizer::GetLearningData(TUnitPublic *)
 * Address: 00168464
 */
TWordRecognizer::GetLearningData(TUnitPublic *) {
    /*
        168464:	e1a0c00d 	mov	ip, sp
        168468:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        16846c:	e24cb004 	sub	fp, ip, #4	; 0x4
        168470:	e1a04001 	mov	r4, r1
        168474:	e24dd004 	sub	sp, sp, #4	; 0x4
        168478:	e3a00002 	mov	r0, #2	; 0x2
        16847c:	eb696732 	bl	1bc214c <$AllocateRefHandle(long)>
        168480:	e58d0000 	str	r0, [sp]
        168484:	e3a01000 	mov	r1, #0	; 0x0
        168488:	e5940000 	ldr	r0, [r4]
        16848c:	e5902000 	ldr	r2, [r0]
        168490:	e1a0e00f 	mov	lr, pc
        168494:	e282f0d4 	add	pc, r2, #212	; 0xd4
        168498:	e1b05000 	movs	r5, r0
        16849c:	0a00001b 	beq	168510 <TWordRecognizer::GetLearningData(TUnitPublic *)+0xac>
        1684a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1684a4:	e1a00005 	mov	r0, r5
        1684a8:	eb69e30e 	bl	1be10e8 <$GetHandleSize>
        1684ac:	e1a06000 	mov	r6, r0
        1684b0:	e1a01000 	mov	r1, r0
        1684b4:	e59f0068 	ldr	r0, [pc, #68]	; 168524 <TWordRecognizer::GetLearningData(TUnitPublic *)+0xc0>
        1684b8:	eb69671f 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1684bc:	e59d1004 	ldr	r1, [sp, #4]
        1684c0:	e5810000 	str	r0, [r1]
        1684c4:	e28d1004 	add	r1, sp, #4	; 0x4
        1684c8:	e1a0000d 	mov	r0, sp
        1684cc:	eb696301 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        1684d0:	e1a0000d 	mov	r0, sp
        1684d4:	eb69670e 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1684d8:	e1a01000 	mov	r1, r0
        1684dc:	e1a02006 	mov	r2, r6
        1684e0:	e5950000 	ldr	r0, [r5]
        1684e4:	eb69da9a 	bl	1bdef54 <$BlockMove>
        1684e8:	e1a0000d 	mov	r0, sp
        1684ec:	e3a01000 	mov	r1, #0	; 0x0
        1684f0:	eb696702 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1684f4:	e1a01005 	mov	r1, r5
        1684f8:	e5942000 	ldr	r2, [r4]
        1684fc:	e1a00002 	mov	r0, r2
        168500:	e5922000 	ldr	r2, [r2]
        168504:	e1a0e00f 	mov	lr, pc
        168508:	e282f0d8 	add	pc, r2, #216	; 0xd8
        16850c:	e28dd004 	add	sp, sp, #4	; 0x4
        168510:	e59d0000 	ldr	r0, [sp]
        168514:	e5904000 	ldr	r4, [r0]
        168518:	eb696b27 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16851c:	e1a00004 	mov	r0, r4
        168520:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        168524:	006834d0 	ldreqd	r3, [r8], -#64
    */
}

/**
 * Symbol: TWordRecognizer::DoLearning(RefVar const &, long)
 * Address: 00168528
 */
TWordRecognizer::DoLearning(RefVar const &, long) {
    /*
        168528:	e1a0c00d 	mov	ip, sp
        16852c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        168530:	e24cb004 	sub	fp, ip, #4	; 0x4
        168534:	e1a04001 	mov	r4, r1
        168538:	e1a05002 	mov	r5, r2
        16853c:	e5910000 	ldr	r0, [r1]
        168540:	e5900000 	ldr	r0, [r0]
        168544:	e3300002 	teq	r0, #2	; 0x2
        168548:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        16854c:	e3550005 	cmp	r5, #5	; 0x5
        168550:	a91ba8f0 	ldmgedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        168554:	e24dd008 	sub	sp, sp, #8	; 0x8
        168558:	e59f106c 	ldr	r1, [pc, #6c]	; 1685cc <TWordRecognizer::DoLearning(RefVar const &, long)+0xa4>
        16855c:	e5911000 	ldr	r1, [r1]
        168560:	e5911000 	ldr	r1, [r1]
        168564:	eb696f3d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        168568:	eb6966f7 	bl	1bc214c <$AllocateRefHandle(long)>
        16856c:	e58d0004 	str	r0, [sp, #4]
        168570:	e59f0058 	ldr	r0, [pc, #58]	; 1685d0 <TWordRecognizer::DoLearning(RefVar const &, long)+0xa8>
        168574:	e5900000 	ldr	r0, [r0]
        168578:	e5901000 	ldr	r1, [r0]
        16857c:	e5940000 	ldr	r0, [r4]
        168580:	e5900000 	ldr	r0, [r0]
        168584:	eb696f35 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        168588:	eb6966ef 	bl	1bc214c <$AllocateRefHandle(long)>
        16858c:	e58d0000 	str	r0, [sp]
        168590:	e5900000 	ldr	r0, [r0]
        168594:	e3300002 	teq	r0, #2	; 0x2
        168598:	159d0004 	ldrne	r0, [sp, #4]
        16859c:	15900000 	ldrne	r0, [r0]
        1685a0:	13300002 	teqne	r0, #2	; 0x2
        1685a4:	0a000003 	beq	1685b8 <TWordRecognizer::DoLearning(RefVar const &, long)+0x90>
        1685a8:	e1a0000d 	mov	r0, sp
        1685ac:	eb6549e9 	bl	1abad58 <$StrokeBundleToTStrokes(RefVar const &)>
        1685b0:	e1b06000 	movs	r6, r0
        1685b4:	1a000006 	bne	1685d4 <TWordRecognizer::DoLearning(RefVar const &, long)+0xac>
        1685b8:	e59d0000 	ldr	r0, [sp]
        1685bc:	eb696afe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1685c0:	e59d0004 	ldr	r0, [sp, #4]
        1685c4:	eb696afc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1685c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1685cc:	00684d18 	rsbeq	r4, r8, r8, lsl sp
        1685d0:	00684900 	rsbeq	r4, r8, r0, lsl #18
        1685d4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1685d8:	e3a00000 	mov	r0, #0	; 0x0
        1685dc:	e58d0008 	str	r0, [sp, #8]
        1685e0:	e1a0300d 	mov	r3, sp
        1685e4:	e28d2004 	add	r2, sp, #4	; 0x4
        1685e8:	e28d1008 	add	r1, sp, #8	; 0x8
        1685ec:	e1a00006 	mov	r0, r6
        1685f0:	eb66fb74 	bl	1b273c8 <$GetTraceFromStrokes__FPP7TStrokePP13PS_point_typePsT3>
        1685f4:	e59d0008 	ldr	r0, [sp, #8]
        1685f8:	e3300000 	teq	r0, #0	; 0x0
        1685fc:	0a000034 	beq	1686d4 <TWordRecognizer::DoLearning(RefVar const &, long)+0x1ac>
        168600:	e59d0010 	ldr	r0, [sp, #16]
        168604:	e5900000 	ldr	r0, [r0]
        168608:	eb697327 	bl	1bc52ac <$Length(long)>
        16860c:	e1a07000 	mov	r7, r0
        168610:	eb69e6c5 	bl	1be212c <$NewHandle>
        168614:	e1b04000 	movs	r4, r0
        168618:	0a00002b 	beq	1686cc <TWordRecognizer::DoLearning(RefVar const &, long)+0x1a4>
        16861c:	e24dd004 	sub	sp, sp, #4	; 0x4
        168620:	e28d1014 	add	r1, sp, #20	; 0x14
        168624:	e1a0000d 	mov	r0, sp
        168628:	eb6962aa 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        16862c:	e1a0000d 	mov	r0, sp
        168630:	eb6966b7 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        168634:	e1a02007 	mov	r2, r7
        168638:	e5941000 	ldr	r1, [r4]
        16863c:	eb69da44 	bl	1bdef54 <$BlockMove>
        168640:	e1a0000d 	mov	r0, sp
        168644:	e3a01000 	mov	r1, #0	; 0x0
        168648:	eb6966ac 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        16864c:	e52d4010 	str	r4, [sp, -#16]!
        168650:	e59d001c 	ldr	r0, [sp, #28]
        168654:	e58d0004 	str	r0, [sp, #4]
        168658:	e59d0014 	ldr	r0, [sp, #20]
        16865c:	e1a00840 	mov	r0, r0, asr #16
        168660:	e58d0008 	str	r0, [sp, #8]
        168664:	e58d500c 	str	r5, [sp, #12]
        168668:	ebfe76a2 	bl	1060f8 <LIBeginWeights(void)>
        16866c:	e1b05000 	movs	r5, r0
        168670:	0a000012 	beq	1686c0 <TWordRecognizer::DoLearning(RefVar const &, long)+0x198>
        168674:	e59f0068 	ldr	r0, [pc, #68]	; 1686e4 <TWordRecognizer::DoLearning(RefVar const &, long)+0x1bc>
        168678:	e5900000 	ldr	r0, [r0]
        16867c:	e59f1064 	ldr	r1, [pc, #64]	; 1686e8 <TWordRecognizer::DoLearning(RefVar const &, long)+0x1c0>
        168680:	eb67de47 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
        168684:	e1a07000 	mov	r7, r0
        168688:	e1a01005 	mov	r1, r5
        16868c:	e3a03000 	mov	r3, #0	; 0x0
        168690:	e3a02000 	mov	r2, #0	; 0x0
        168694:	eb65da1f 	bl	1adef18 <$SetupXRD__FP7TDomainPPcUlT3>
        168698:	e1a03005 	mov	r3, r5
        16869c:	e1a0200d 	mov	r2, sp
        1686a0:	e1a00007 	mov	r0, r7
        1686a4:	e3a01010 	mov	r1, #16	; 0x10
        1686a8:	e2811802 	add	r1, r1, #131072	; 0x20000
        1686ac:	e597c000 	ldr	ip, [r7]
        1686b0:	e1a0e00f 	mov	lr, pc
        1686b4:	e28cf02c 	add	pc, ip, #44	; 0x2c
        1686b8:	e1a00005 	mov	r0, r5
        1686bc:	ebfe7a69 	bl	107068 <LIEndWeights(char **)>
        1686c0:	e1a00004 	mov	r0, r4
        1686c4:	eb69e279 	bl	1be10b0 <$DisposHandle>
        1686c8:	e28dd014 	add	sp, sp, #20	; 0x14
        1686cc:	e59d0008 	ldr	r0, [sp, #8]
        1686d0:	eb641c3a 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        1686d4:	e1a00006 	mov	r0, r6
        1686d8:	eb650fce 	bl	1aac618 <$DisposeTStrokes(TStroke **)>
        1686dc:	e28dd00c 	add	sp, sp, #12	; 0xc
        1686e0:	eaffffb4 	b	1685b8 <TWordRecognizer::DoLearning(RefVar const &, long)+0x90>
        1686e4:	0c10187c 	ldceq	8, cr1, [r0], -#496
        1686e8:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
    */
}

