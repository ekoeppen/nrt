#include "include/TGeneralShapeDomain.h"

/**
 * Symbol: TGeneralShapeDomain::Classify(TUnit *)
 * Address: 002113f0
 */
TGeneralShapeDomain::Classify(TUnit *) {
    /*
        2113f0:	e1a0c00d 	mov	ip, sp
        2113f4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2113f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2113fc:	e1a05000 	mov	r5, r0
        211400:	e1a04001 	mov	r4, r1
        211404:	e24ddfcf 	sub	sp, sp, #828	; 0x33c
        211408:	eb6557de 	bl	1b67388 <$CheckScreenGlobals(void)>
        21140c:	e1a06004 	mov	r6, r4
        211410:	e1a00004 	mov	r0, r4
        211414:	e3a01000 	mov	r1, #0	; 0x0
        211418:	e5942000 	ldr	r2, [r4]
        21141c:	e1a0e00f 	mov	lr, pc
        211420:	e282f08c 	add	pc, r2, #140	; 0x8c
        211424:	e3a08e71 	mov	r8, #1808	; 0x710
        211428:	e2888a02 	add	r8, r8, #8192	; 0x2000
        21142c:	e3a07000 	mov	r7, #0	; 0x0
        211430:	e58d020c 	str	r0, [sp, #524]
        211434:	e58d7210 	str	r7, [sp, #528]
        211438:	e58d8204 	str	r8, [sp, #516]
        21143c:	e28d2f81 	add	r2, sp, #516	; 0x204
        211440:	e28d1f83 	add	r1, sp, #524	; 0x20c
        211444:	e1a00006 	mov	r0, r6
        211448:	eb656024 	bl	1b694e0 <$FindKeyPoints(TGeneralShapeUnit *, GSType *, unsigned long *)>
        21144c:	e59d020c 	ldr	r0, [sp, #524]
        211450:	e3300003 	teq	r0, #3	; 0x3
        211454:	0a000043 	beq	211568 <TGeneralShapeDomain::Classify(TUnit *)+0x178>
        211458:	e330000f 	teq	r0, #15	; 0xf
        21145c:	e58d7008 	str	r7, [sp, #8]	; fField8
        211460:	0a00003e 	beq	211560 <TGeneralShapeDomain::Classify(TUnit *)+0x170>
        211464:	e3300002 	teq	r0, #2	; 0x2
        211468:	0a000024 	beq	211500 <TGeneralShapeDomain::Classify(TUnit *)+0x110>
        21146c:	e3a01000 	mov	r1, #0	; 0x0
        211470:	e59f0084 	ldr	r0, [pc, #84]	; 2114fc <TGeneralShapeDomain::Classify(TUnit *)+0x10c>
        211474:	e5d00000 	ldrb	r0, [r0]
        211478:	e3300000 	teq	r0, #0	; 0x0
        21147c:	0a000009 	beq	2114a8 <TGeneralShapeDomain::Classify(TUnit *)+0xb8>
        211480:	e28d3f7f 	add	r3, sp, #508	; 0x1fc
        211484:	e28d2f81 	add	r2, sp, #516	; 0x204
        211488:	e92d000c 	stmdb	sp!, {r2, r3}
        21148c:	e28d3f85 	add	r3, sp, #532	; 0x214
        211490:	e28d200c 	add	r2, sp, #12	; 0xc
        211494:	e28d1f86 	add	r1, sp, #536	; 0x218
        211498:	e1a00006 	mov	r0, r6
        21149c:	eb656432 	bl	1b6a56c <$FindEquations(TGeneralShapeUnit *, long *, EqSystem *, GSType *, unsigned long *, EqSystem *)>
        2114a0:	e28dd008 	add	sp, sp, #8	; 0x8
        2114a4:	e1a01000 	mov	r1, r0
        2114a8:	e59d020c 	ldr	r0, [sp, #524]
        2114ac:	e330000f 	teq	r0, #15	; 0xf
        2114b0:	0a00002a 	beq	211560 <TGeneralShapeDomain::Classify(TUnit *)+0x170>
        2114b4:	e3300006 	teq	r0, #6	; 0x6
        2114b8:	0a000014 	beq	211510 <TGeneralShapeDomain::Classify(TUnit *)+0x120>
        2114bc:	e3300007 	teq	r0, #7	; 0x7
        2114c0:	0a000026 	beq	211560 <TGeneralShapeDomain::Classify(TUnit *)+0x170>
        2114c4:	e3300002 	teq	r0, #2	; 0x2
        2114c8:	0a00000c 	beq	211500 <TGeneralShapeDomain::Classify(TUnit *)+0x110>
        2114cc:	e3310000 	teq	r1, #0	; 0x0
        2114d0:	0a000022 	beq	211560 <TGeneralShapeDomain::Classify(TUnit *)+0x170>
        2114d4:	e28d1e21 	add	r1, sp, #528	; 0x210
        2114d8:	e28d0004 	add	r0, sp, #4	; 0x4
        2114dc:	eb655bca 	bl	1b6840c <$SolveEquations(EqSystem *, long *)>
        2114e0:	e3300000 	teq	r0, #0	; 0x0
        2114e4:	0a00001d 	beq	211560 <TGeneralShapeDomain::Classify(TUnit *)+0x170>
        2114e8:	e28d2004 	add	r2, sp, #4	; 0x4
        2114ec:	e28d1e21 	add	r1, sp, #528	; 0x210
        2114f0:	e1a00006 	mov	r0, r6
        2114f4:	eb655bde 	bl	1b68474 <$PlugNewVals(TGeneralShapeUnit *, long *, EqSystem *)>
        2114f8:	ea000018 	b	211560 <TGeneralShapeDomain::Classify(TUnit *)+0x170>
        2114fc:	0c1018bc 	ldceq	8, cr1, [r0], -#752
        211500:	e59f012c 	ldr	r0, [pc, #12c]	; 211634 <TGeneralShapeDomain::Classify(TUnit *)+0x244>	; fField12
        211504:	e5900020 	ldr	r0, [r0, #32]
        211508:	e3300000 	teq	r0, #0	; 0x0
        21150c:	0a000013 	beq	211560 <TGeneralShapeDomain::Classify(TUnit *)+0x170>
        211510:	e59f0120 	ldr	r0, [pc, #120]	; 211638 <TGeneralShapeDomain::Classify(TUnit *)+0x248>
        211514:	e5d00000 	ldrb	r0, [r0]
        211518:	e3300000 	teq	r0, #0	; 0x0
        21151c:	0a00000f 	beq	211560 <TGeneralShapeDomain::Classify(TUnit *)+0x170>
        211520:	e28d3f7e 	add	r3, sp, #504	; 0x1f8
        211524:	e28d2c02 	add	r2, sp, #512	; 0x200
        211528:	e28d1f82 	add	r1, sp, #520	; 0x208
        21152c:	e1a00006 	mov	r0, r6
        211530:	eb655fe8 	bl	1b694d8 <$FindEllipses(TGeneralShapeUnit *, GSType *, unsigned long *, long *)>
        211534:	e3300000 	teq	r0, #0	; 0x0
        211538:	0a000008 	beq	211560 <TGeneralShapeDomain::Classify(TUnit *)+0x170>
        21153c:	e59d0208 	ldr	r0, [sp, #520]
        211540:	e58d020c 	str	r0, [sp, #524]
        211544:	e3a01f4b 	mov	r1, #300	; 0x12c
        211548:	e59d0200 	ldr	r0, [sp, #512]
        21154c:	e3500f4b 	cmp	r0, #300	; 0x12c
        211550:	d1a00001 	movle	r0, r1
        211554:	e58d0204 	str	r0, [sp, #516]
        211558:	e59d01f8 	ldr	r0, [sp, #504]
        21155c:	e58d01fc 	str	r0, [sp, #508]
        211560:	e28d0004 	add	r0, sp, #4	; 0x4
        211564:	eb655bc4 	bl	1b6847c <$ReleaseEqs(EqSystem *)>
        211568:	e59d0210 	ldr	r0, [sp, #528]
        21156c:	e3300102 	teq	r0, #-2147483648	; 0x80000000
        211570:	03a0000a 	moveq	r0, #10	; 0xa
        211574:	0a000003 	beq	211588 <TGeneralShapeDomain::Classify(TUnit *)+0x198>
        211578:	e59d0210 	ldr	r0, [sp, #528]
        21157c:	e3300101 	teq	r0, #1073741824	; 0x40000000
        211580:	1a000003 	bne	211594 <TGeneralShapeDomain::Classify(TUnit *)+0x1a4>
        211584:	e3a0000b 	mov	r0, #11	; 0xb
        211588:	e58d020c 	str	r0, [sp, #524]
        21158c:	e3a00000 	mov	r0, #0	; 0x0
        211590:	e58d01fc 	str	r0, [sp, #508]
        211594:	e59d0204 	ldr	r0, [sp, #516]
        211598:	e3500f4b 	cmp	r0, #300	; 0x12c
        21159c:	2a000002 	bcs	2115ac <TGeneralShapeDomain::Classify(TUnit *)+0x1bc>
        2115a0:	e59d020c 	ldr	r0, [sp, #524]
        2115a4:	e3300004 	teq	r0, #4	; 0x4
        2115a8:	158d8204 	strne	r8, [sp, #516]
        2115ac:	e1a00006 	mov	r0, r6
        2115b0:	e3a01000 	mov	r1, #0	; 0x0
        2115b4:	e59d220c 	ldr	r2, [sp, #524]
        2115b8:	e5963000 	ldr	r3, [r6]
        2115bc:	e1a0e00f 	mov	lr, pc
        2115c0:	e283f09c 	add	pc, r3, #156	; 0x9c
        2115c4:	e1a00006 	mov	r0, r6
        2115c8:	e3a01000 	mov	r1, #0	; 0x0
        2115cc:	e59d2204 	ldr	r2, [sp, #516]
        2115d0:	e5963000 	ldr	r3, [r6]
        2115d4:	e1a0e00f 	mov	lr, pc
        2115d8:	e283f0a0 	add	pc, r3, #160	; 0xa0
        2115dc:	e1a00006 	mov	r0, r6
        2115e0:	e3a01000 	mov	r1, #0	; 0x0
        2115e4:	e59d21fc 	ldr	r2, [sp, #508]
        2115e8:	e5963000 	ldr	r3, [r6]
        2115ec:	e1a0e00f 	mov	lr, pc
        2115f0:	e283f0a4 	add	pc, r3, #164	; 0xa4
        2115f4:	e3a00000 	mov	r0, #0	; 0x0
        2115f8:	e58d0000 	str	r0, [sp]
        2115fc:	e59d020c 	ldr	r0, [sp, #524]
        211600:	e330000f 	teq	r0, #15	; 0xf
        211604:	13300003 	teqne	r0, #3	; 0x3
        211608:	13300002 	teqne	r0, #2	; 0x2
        21160c:	0a00000d 	beq	211648 <TGeneralShapeDomain::Classify(TUnit *)+0x258>
        211610:	e5960040 	ldr	r0, [r6, #64]
        211614:	e5900058 	ldr	r0, [r0, #88]	; fField88
        211618:	e3300000 	teq	r0, #0	; 0x0
        21161c:	0a000006 	beq	21163c <TGeneralShapeDomain::Classify(TUnit *)+0x24c>
        211620:	e1a00006 	mov	r0, r6
        211624:	eb6563bc 	bl	1b6a51c <$SnapPtToLC(TGeneralShapeUnit *)>
        211628:	e3a00001 	mov	r0, #1	; 0x1
        21162c:	e58d0000 	str	r0, [sp]
        211630:	ea000004 	b	211648 <TGeneralShapeDomain::Classify(TUnit *)+0x258>
        211634:	0c104c94 	ldceq	12, cr4, [r0], -#592
        211638:	0c1018b8 	ldceq	8, cr1, [r0], -#736
        21163c:	e1a0100d 	mov	r1, sp
        211640:	e1a00006 	mov	r0, r6
        211644:	eb655fa6 	bl	1b694e4 <$GlobalTrends(TGeneralShapeUnit *, long *)>
        211648:	e5960040 	ldr	r0, [r6, #64]
        21164c:	e5c07000 	strb	r7, [r0]
        211650:	e59d0000 	ldr	r0, [sp]
        211654:	e3300000 	teq	r0, #0	; 0x0
        211658:	13a010ff 	movne	r1, #255	; 0xff
        21165c:	15960040 	ldrne	r0, [r6, #64]
        211660:	15c01000 	strneb	r1, [r0]
        211664:	e1a00006 	mov	r0, r6
        211668:	e5961000 	ldr	r1, [r6]
        21166c:	e1a0e00f 	mov	lr, pc
        211670:	e281f0a8 	add	pc, r1, #168	; 0xa8
        211674:	e1a01004 	mov	r1, r4
        211678:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        21167c:	eb653e95 	bl	1b610d8 <TController::$NewClassification(TUnit *)>
        211680:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: Make__19TGeneralShapeDomainSFP11TController
 * Address: 00215f20
 */
void TGeneralShapeDomain::Make() {
    /*
        215f20:	e1a0c00d 	mov	ip, sp
        215f24:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        215f28:	e24cb004 	sub	fp, ip, #4	; 0x4
        215f2c:	e1a04000 	mov	r4, r0
        215f30:	e3a00024 	mov	r0, #36	; 0x24
        215f34:	eb66e1ff 	bl	1bce738 <$__nw(unsigned int)>
        215f38:	e1b05000 	movs	r5, r0
        215f3c:	0a000003 	beq	215f50 <Make__19TGeneralShapeDomainSFP11TController+0x30>
        215f40:	e1a00005 	mov	r0, r5
        215f44:	eb65137f 	bl	1b5ad48 <TDomain::$__ct(void)>
        215f48:	e59f0014 	ldr	r0, [pc, #14]	; 215f64 <Make__19TGeneralShapeDomainSFP11TController+0x44>
        215f4c:	e5850000 	str	r0, [r5]
        215f50:	e1a01004 	mov	r1, r4
        215f54:	e1a00005 	mov	r0, r5
        215f58:	eb654d4a 	bl	1b69488 <TGeneralShapeDomain::$IGeneralShapeDomain(TController *)>
        215f5c:	e1a00005 	mov	r0, r5
        215f60:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        215f64:	0001ee10 	andeq	lr, r1, r0, lsl lr
    */
}

/**
 * Symbol: TGeneralShapeDomain::IGeneralShapeDomain(TController *)
 * Address: 00215f68
 */
TGeneralShapeDomain::IGeneralShapeDomain(TController *) {
    /*
        215f68:	e1a0c00d 	mov	ip, sp
        215f6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        215f70:	e24cb004 	sub	fp, ip, #4	; 0x4
        215f74:	e1a04000 	mov	r4, r0
        215f78:	e1a05001 	mov	r5, r1
        215f7c:	e28f3f0c 	add	r3, pc, #48	; 0x30
        215f80:	e59f2040 	ldr	r2, [pc, #40]	; 215fc8 <TGeneralShapeDomain::IGeneralShapeDomain(TController *)+0x60>
        215f84:	eb65281b 	bl	1b5fff8 <TDomain::$IDomain(TController *, unsigned long, char *)>
        215f88:	e1a00004 	mov	r0, r4
        215f8c:	e59f1038 	ldr	r1, [pc, #38]	; 215fcc <TGeneralShapeDomain::IGeneralShapeDomain(TController *)+0x64>
        215f90:	eb651379 	bl	1b5ad7c <TDomain::$AddPieceType(unsigned long)>
        215f94:	eb6544fb 	bl	1b67388 <$CheckScreenGlobals(void)>
        215f98:	e59f0030 	ldr	r0, [pc, #30]	; 215fd0 <TGeneralShapeDomain::IGeneralShapeDomain(TController *)+0x68>
        215f9c:	e5900000 	ldr	r0, [r0]
        215fa0:	e5840018 	str	r0, [r4, #24]	; fField24
        215fa4:	e1a01004 	mov	r1, r4
        215fa8:	e1a00005 	mov	r0, r5
        215fac:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        215fb0:	ea65305b 	b	1b62124 <TController::$RegisterDomain(TDomain *)>
        215fb4:	47656e65 	strmib	r6, [r5, -r5, ror #28]!
        215fb8:	72616c53 	rsbvc	r6, r1, #21248	; 0x5300
        215fbc:	68617065 	stmvsda	r1!, {r0, r2, r5, r6, ip, sp, lr}^
        215fc0:	20446f6d 	subcs	r6, r4, sp, ror #30
        215fc4:	61696e00 	cmnvs	r9, r0, lsl #28
        215fc8:	47534850 	undefined
        215fcc:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
        215fd0:	0c101850 	ldceq	8, cr1, [r0], -#320
    */
}

/**
 * Symbol: TGeneralShapeDomain::Group(TUnit *, dInfoRec *)
 * Address: 00215fd4
 */
TGeneralShapeDomain::Group(TUnit *, dInfoRec *) {
    /*
        215fd4:	e1a0c00d 	mov	ip, sp
        215fd8:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        215fdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        215fe0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        215fe4:	e3a04000 	mov	r4, #0	; 0x0
        215fe8:	e3a05000 	mov	r5, #0	; 0x0
        215fec:	e3a08000 	mov	r8, #0	; 0x0
        215ff0:	e58d8008 	str	r8, [sp, #8]	; fField8
        215ff4:	e51b7030 	ldr	r7, [fp, -#48]
        215ff8:	e24dd004 	sub	sp, sp, #4	; 0x4
        215ffc:	e1a00007 	mov	r0, r7
        216000:	eb654d24 	bl	1b69498 <$CheckClosed(TStrokeUnit *)>
        216004:	e58d0000 	str	r0, [sp]
        216008:	e51b0034 	ldr	r0, [fp, -#52]
        21600c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        216010:	e51b1034 	ldr	r1, [fp, -#52]
        216014:	e59f2070 	ldr	r2, [pc, #70]	; 21608c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0xb8>
        216018:	eb6523ce 	bl	1b5ef58 <TController::$GetDelayList(TDomain *, unsigned long)>
        21601c:	e1b06000 	movs	r6, r0
        216020:	0a000141 	beq	21652c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x558>
        216024:	e596000c 	ldr	r0, [r6, #12]	; fField12
        216028:	e3300000 	teq	r0, #0	; 0x0
        21602c:	0a00004f 	beq	216170 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x19c>
        216030:	e1a00006 	mov	r0, r6
        216034:	e3a01000 	mov	r1, #0	; 0x0
        216038:	eb6527db 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        21603c:	e1a09000 	mov	r9, r0
        216040:	e59d2000 	ldr	r2, [sp]
        216044:	e3320000 	teq	r2, #0	; 0x0
        216048:	1a00000a 	bne	216078 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0xa4>
        21604c:	e28d2004 	add	r2, sp, #4	; 0x4
        216050:	e1a00007 	mov	r0, r7
        216054:	e3a01000 	mov	r1, #0	; 0x0
        216058:	eb654d1c 	bl	1b694d0 <$ExtractEnds(TStrokeUnit *, TGeneralShapeUnit *, FPoint **)>
        21605c:	e1a03009 	mov	r3, r9
        216060:	e28d1004 	add	r1, sp, #4	; 0x4
        216064:	e3a02000 	mov	r2, #0	; 0x0
        216068:	e3a00001 	mov	r0, #1	; 0x1
        21606c:	eb654d0a 	bl	1b6949c <$CheckConnect__FlPP6FPointP17TGeneralShapeUnitT3>
        216070:	e1b0a000 	movs	sl, r0
        216074:	1a000005 	bne	216090 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0xbc>
        216078:	e1a00009 	mov	r0, r9
        21607c:	e5991000 	ldr	r1, [r9]
        216080:	e1a0e00f 	mov	lr, pc
        216084:	e281f060 	add	pc, r1, #96	; 0x60
        216088:	ea00002a 	b	216138 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x164>
        21608c:	47534850 	undefined
        216090:	e1a04009 	mov	r4, r9
        216094:	e1a01007 	mov	r1, r7
        216098:	e1a00009 	mov	r0, r9
        21609c:	e5992000 	ldr	r2, [r9]
        2160a0:	e1a0e00f 	mov	lr, pc
        2160a4:	e282f054 	add	pc, r2, #84	; 0x54
        2160a8:	e3700001 	cmn	r0, #1	; 0x1
        2160ac:	0a00011e 	beq	21652c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x558>
        2160b0:	e33a0002 	teq	sl, #2	; 0x2
        2160b4:	13a00000 	movne	r0, #0	; 0x0
        2160b8:	03a00001 	moveq	r0, #1	; 0x1
        2160bc:	e20020ff 	and	r2, r0, #255	; 0xff
        2160c0:	e3a09000 	mov	r9, #0	; 0x0
        2160c4:	e3a0a000 	mov	sl, #0	; 0x0
        2160c8:	e58d2000 	str	r2, [sp]
        2160cc:	e5940040 	ldr	r0, [r4, #64]
        2160d0:	e0800209 	add	r0, r0, r9, lsl #4
        2160d4:	e590105c 	ldr	r1, [r0, #92]	; fField92
        2160d8:	e3310000 	teq	r1, #0	; 0x0
        2160dc:	0a000012 	beq	21612c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x158>
        2160e0:	e59d2000 	ldr	r2, [sp]
        2160e4:	e3320000 	teq	r2, #0	; 0x0
        2160e8:	1a000002 	bne	2160f8 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x124>
        2160ec:	e5900064 	ldr	r0, [r0, #100]	; fField100
        2160f0:	e3700002 	cmn	r0, #2	; 0x2
        2160f4:	1a00000c 	bne	21612c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x158>
        2160f8:	e1a00001 	mov	r0, r1
        2160fc:	eb6544a4 	bl	1b67394 <$PurgeDeep(TSIUnit *)>
        216100:	e5940040 	ldr	r0, [r4, #64]
        216104:	e0800209 	add	r0, r0, r9, lsl #4
        216108:	e3e01000 	mvn	r1, #0	; 0x0
        21610c:	e5a0a05c 	str	sl, [r0, #92]!	; fField92
        216110:	e5940040 	ldr	r0, [r4, #64]
        216114:	e0800209 	add	r0, r0, r9, lsl #4
        216118:	e5a01064 	str	r1, [r0, #100]!	; fField100
        21611c:	e5940040 	ldr	r0, [r4, #64]
        216120:	e5b01058 	ldr	r1, [r0, #88]!	; fField88
        216124:	e2411001 	sub	r1, r1, #1	; 0x1
        216128:	e5801000 	str	r1, [r0]
        21612c:	e2899001 	add	r9, r9, #1	; 0x1
        216130:	e3590002 	cmp	r9, #2	; 0x2
        216134:	baffffe4 	blt	2160cc <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0xf8>
        216138:	e3a09001 	mov	r9, #1	; 0x1
        21613c:	e596000c 	ldr	r0, [r6, #12]	; fField12
        216140:	e3500001 	cmp	r0, #1	; 0x1
        216144:	9a000009 	bls	216170 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x19c>
        216148:	e1a01009 	mov	r1, r9
        21614c:	e1a00006 	mov	r0, r6
        216150:	eb652795 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        216154:	e5901000 	ldr	r1, [r0]
        216158:	e1a0e00f 	mov	lr, pc
        21615c:	e281f060 	add	pc, r1, #96	; 0x60
        216160:	e2899001 	add	r9, r9, #1	; 0x1
        216164:	e596000c 	ldr	r0, [r6, #12]	; fField12
        216168:	e1500009 	cmp	r0, r9
        21616c:	8afffff5 	bhi	216148 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x174>
        216170:	e1a00006 	mov	r0, r6
        216174:	e1a0e00f 	mov	lr, pc
        216178:	e596f000 	ldr	pc, [r6]
        21617c:	e3a06000 	mov	r6, #0	; 0x0
        216180:	e59d2000 	ldr	r2, [sp]
        216184:	e3320000 	teq	r2, #0	; 0x0
        216188:	1a000080 	bne	216390 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x3bc>
        21618c:	e1a00007 	mov	r0, r7
        216190:	e3a01000 	mov	r1, #0	; 0x0
        216194:	eb65447c 	bl	1b6738c <$GetContextUnits(TUnit *, long)>
        216198:	e1b08000 	movs	r8, r0
        21619c:	0a00007b 	beq	216390 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x3bc>
        2161a0:	e24dd028 	sub	sp, sp, #40	; 0x28
        2161a4:	e3340000 	teq	r4, #0	; 0x0
        2161a8:	1a00001b 	bne	21621c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x248>
        2161ac:	e51b0030 	ldr	r0, [fp, -#48]
        2161b0:	eb653c33 	bl	1b65284 <TUnit::$GetAreas(void)>
        2161b4:	e1a04000 	mov	r4, r0
        2161b8:	e5d70024 	ldrb	r0, [r7, #36]
        2161bc:	e2801001 	add	r1, r0, #1	; 0x1
        2161c0:	e1a02004 	mov	r2, r4
        2161c4:	e51b0034 	ldr	r0, [fp, -#52]
        2161c8:	eb654484 	bl	1b673e0 <$Make__17TGeneralShapeUnitSFP7TDomainUlP6TArray>
        2161cc:	e1a05000 	mov	r5, r0
        2161d0:	e3340000 	teq	r4, #0	; 0x0
        2161d4:	11a00004 	movne	r0, r4
        2161d8:	11a0e00f 	movne	lr, pc
        2161dc:	1594f000 	ldrne	pc, [r4]
        2161e0:	e3350000 	teq	r5, #0	; 0x0
        2161e4:	0a000006 	beq	216204 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x230>
        2161e8:	e1a01007 	mov	r1, r7
        2161ec:	e1a00005 	mov	r0, r5
        2161f0:	e5952000 	ldr	r2, [r5]
        2161f4:	e1a0e00f 	mov	lr, pc
        2161f8:	e282f054 	add	pc, r2, #84	; 0x54
        2161fc:	e3700001 	cmn	r0, #1	; 0x1
        216200:	1a000001 	bne	21620c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x238>
        216204:	e28dd028 	add	sp, sp, #40	; 0x28
        216208:	ea0000c7 	b	21652c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x558>
        21620c:	e1a00005 	mov	r0, r5
        216210:	e3a01000 	mov	r1, #0	; 0x0
        216214:	eb654472 	bl	1b673e4 <TGeneralShapeUnit::$NewInterpretation(TDArray *)>
        216218:	e1a04005 	mov	r4, r5
        21621c:	e28d202c 	add	r2, sp, #44	; 0x2c
        216220:	e1a01004 	mov	r1, r4
        216224:	e3a00000 	mov	r0, #0	; 0x0
        216228:	eb654ca8 	bl	1b694d0 <$ExtractEnds(TStrokeUnit *, TGeneralShapeUnit *, FPoint **)>
        21622c:	e3e00000 	mvn	r0, #0	; 0x0
        216230:	e58d0024 	str	r0, [sp, #36]
        216234:	e58d0020 	str	r0, [sp, #32]
        216238:	e1a0100d 	mov	r1, sp
        21623c:	e1a00008 	mov	r0, r8
        216240:	eb65234b 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        216244:	e3a0a000 	mov	sl, #0	; 0x0
        216248:	e59d1014 	ldr	r1, [sp, #20]
        21624c:	e3510000 	cmp	r1, #0	; 0x0
        216250:	da00002d 	ble	21630c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x338>
        216254:	e5909000 	ldr	r9, [r0]
        216258:	e1a00009 	mov	r0, r9
        21625c:	e3a01000 	mov	r1, #0	; 0x0
        216260:	e5992000 	ldr	r2, [r9]
        216264:	e1a0e00f 	mov	lr, pc
        216268:	e282f08c 	add	pc, r2, #140	; 0x8c
        21626c:	e3300005 	teq	r0, #5	; 0x5
        216270:	13300007 	teqne	r0, #7	; 0x7
        216274:	13300008 	teqne	r0, #8	; 0x8
        216278:	1330000d 	teqne	r0, #13	; 0xd
        21627c:	1a000009 	bne	2162a8 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x2d4>
        216280:	e1a00009 	mov	r0, r9
        216284:	e3a01000 	mov	r1, #0	; 0x0
        216288:	e5992000 	ldr	r2, [r9]
        21628c:	e1a0e00f 	mov	lr, pc
        216290:	e282f058 	add	pc, r2, #88	; 0x58
        216294:	e1a03009 	mov	r3, r9
        216298:	e1a02004 	mov	r2, r4
        21629c:	e28d102c 	add	r1, sp, #44	; 0x2c
        2162a0:	e3a00002 	mov	r0, #2	; 0x2
        2162a4:	eb654c7c 	bl	1b6949c <$CheckConnect__FlPP6FPointP17TGeneralShapeUnitT3>
        2162a8:	e1a02009 	mov	r2, r9
        2162ac:	e1a01004 	mov	r1, r4
        2162b0:	e28d002c 	add	r0, sp, #44	; 0x2c
        2162b4:	eb654c7a 	bl	1b694a4 <$CheckPtOnShape__FPP6FPointP17TGeneralShapeUnitT2>
        2162b8:	e1a02009 	mov	r2, r9
        2162bc:	e1a01004 	mov	r1, r4
        2162c0:	e28d002c 	add	r0, sp, #44	; 0x2c
        2162c4:	eb654c75 	bl	1b694a0 <$CheckPtOnCircle__FPP6FPointP17TGeneralShapeUnitT2>
        2162c8:	e3a00000 	mov	r0, #0	; 0x0
        2162cc:	e5941040 	ldr	r1, [r4, #64]
        2162d0:	e0811200 	add	r1, r1, r0, lsl #4
        2162d4:	e591105c 	ldr	r1, [r1, #92]	; fField92
        2162d8:	e1310009 	teq	r1, r9
        2162dc:	028d1020 	addeq	r1, sp, #32	; 0x20
        2162e0:	0781a100 	streq	sl, [r1, r0, lsl #2]
        2162e4:	e2800001 	add	r0, r0, #1	; 0x1
        2162e8:	e3500002 	cmp	r0, #2	; 0x2
        2162ec:	bafffff6 	blt	2162cc <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x2f8>
        2162f0:	e1a0000d 	mov	r0, sp
        2162f4:	e1a0e00f 	mov	lr, pc
        2162f8:	e59df018 	ldr	pc, [sp, #24]	; fField24
        2162fc:	e28aa001 	add	sl, sl, #1	; 0x1
        216300:	e59d1014 	ldr	r1, [sp, #20]
        216304:	e151000a 	cmp	r1, sl
        216308:	caffffd1 	bgt	216254 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x280>
        21630c:	e5940040 	ldr	r0, [r4, #64]
        216310:	e5900058 	ldr	r0, [r0, #88]	; fField88
        216314:	e3300000 	teq	r0, #0	; 0x0
        216318:	0a000018 	beq	216380 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x3ac>
        21631c:	e3300002 	teq	r0, #2	; 0x2
        216320:	1a00000a 	bne	216350 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x37c>
        216324:	e28d1020 	add	r1, sp, #32	; 0x20
        216328:	e8910003 	ldmia	r1, {r0, r1}
        21632c:	e1510000 	cmp	r1, r0
        216330:	da000004 	ble	216348 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x374>
        216334:	e59d0024 	ldr	r0, [sp, #36]
        216338:	e59d1020 	ldr	r1, [sp, #32]
        21633c:	e58d0020 	str	r0, [sp, #32]
        216340:	e58d1024 	str	r1, [sp, #36]
        216344:	ea000001 	b	216350 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x37c>
        216348:	03e00000 	mvneq	r0, #0	; 0x0
        21634c:	058d0024 	streq	r0, [sp, #36]
        216350:	e3a09000 	mov	r9, #0	; 0x0
        216354:	e28d0020 	add	r0, sp, #32	; 0x20
        216358:	e7901109 	ldr	r1, [r0, r9, lsl #2]
        21635c:	e3510000 	cmp	r1, #0	; 0x0
        216360:	ba000003 	blt	216374 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x3a0>
        216364:	e1a00008 	mov	r0, r8
        216368:	e5982000 	ldr	r2, [r8]
        21636c:	e1a0e00f 	mov	lr, pc
        216370:	e282f040 	add	pc, r2, #64	; 0x40
        216374:	e2899001 	add	r9, r9, #1	; 0x1
        216378:	e3590002 	cmp	r9, #2	; 0x2
        21637c:	bafffff4 	blt	216354 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x380>
        216380:	e1a00008 	mov	r0, r8
        216384:	eb654403 	bl	1b67398 <$DisposeContextUnits(TUnitList *)>
        216388:	e3a08000 	mov	r8, #0	; 0x0
        21638c:	e28dd028 	add	sp, sp, #40	; 0x28
        216390:	e3340000 	teq	r4, #0	; 0x0
        216394:	1a000019 	bne	216400 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x42c>
        216398:	e51b0030 	ldr	r0, [fp, -#48]
        21639c:	eb653bb8 	bl	1b65284 <TUnit::$GetAreas(void)>
        2163a0:	e1a04000 	mov	r4, r0
        2163a4:	e5d70024 	ldrb	r0, [r7, #36]
        2163a8:	e2801001 	add	r1, r0, #1	; 0x1
        2163ac:	e1a02004 	mov	r2, r4
        2163b0:	e51b0034 	ldr	r0, [fp, -#52]
        2163b4:	eb654409 	bl	1b673e0 <$Make__17TGeneralShapeUnitSFP7TDomainUlP6TArray>
        2163b8:	e1a05000 	mov	r5, r0
        2163bc:	e3340000 	teq	r4, #0	; 0x0
        2163c0:	11a00004 	movne	r0, r4
        2163c4:	11a0e00f 	movne	lr, pc
        2163c8:	1594f000 	ldrne	pc, [r4]
        2163cc:	e3350000 	teq	r5, #0	; 0x0
        2163d0:	0a000055 	beq	21652c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x558>
        2163d4:	e1a01007 	mov	r1, r7
        2163d8:	e1a00005 	mov	r0, r5
        2163dc:	e5952000 	ldr	r2, [r5]
        2163e0:	e1a0e00f 	mov	lr, pc
        2163e4:	e282f054 	add	pc, r2, #84	; 0x54
        2163e8:	e3700001 	cmn	r0, #1	; 0x1
        2163ec:	0a00004e 	beq	21652c <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x558>
        2163f0:	e1a04005 	mov	r4, r5
        2163f4:	e1a00005 	mov	r0, r5
        2163f8:	e3a01000 	mov	r1, #0	; 0x0
        2163fc:	eb6543f8 	bl	1b673e4 <TGeneralShapeUnit::$NewInterpretation(TDArray *)>
        216400:	e3350000 	teq	r5, #0	; 0x0
        216404:	0a000009 	beq	216430 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x45c>
        216408:	e1a00005 	mov	r0, r5
        21640c:	e3a02007 	mov	r2, #7	; 0x7
        216410:	e3a01000 	mov	r1, #0	; 0x0
        216414:	e5953000 	ldr	r3, [r5]
        216418:	e1a0e00f 	mov	lr, pc
        21641c:	e283f09c 	add	pc, r3, #156	; 0x9c
        216420:	e51b0034 	ldr	r0, [fp, -#52]
        216424:	e5900008 	ldr	r0, [r0, #8]	; fField8
        216428:	e1a01005 	mov	r1, r5
        21642c:	eb652b2b 	bl	1b610e0 <TController::$NewGroup(TUnit *)>
        216430:	e1a00004 	mov	r0, r4
        216434:	e5941000 	ldr	r1, [r4]
        216438:	e1a0e00f 	mov	lr, pc
        21643c:	e281f01c 	add	pc, r1, #28	; 0x1c
        216440:	e59d2000 	ldr	r2, [sp]
        216444:	e3320000 	teq	r2, #0	; 0x0
        216448:	1a000005 	bne	216464 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x490>
        21644c:	e5941040 	ldr	r1, [r4, #64]
        216450:	e5911058 	ldr	r1, [r1, #88]	; fField88
        216454:	e3310002 	teq	r1, #2	; 0x2
        216458:	0a000001 	beq	216464 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x490>
        21645c:	e3500008 	cmp	r0, #8	; 0x8
        216460:	3a000012 	bcc	2164b0 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x4dc>
        216464:	e1a00004 	mov	r0, r4
        216468:	e5941000 	ldr	r1, [r4]
        21646c:	e1a0e00f 	mov	lr, pc
        216470:	e281f060 	add	pc, r1, #96	; 0x60
        216474:	e1a00004 	mov	r0, r4
        216478:	e3a02ffa 	mov	r2, #1000	; 0x3e8
        21647c:	e3a01000 	mov	r1, #0	; 0x0
        216480:	e5943000 	ldr	r3, [r4]
        216484:	e1a0e00f 	mov	lr, pc
        216488:	e283f0a0 	add	pc, r3, #160	; 0xa0
        21648c:	e59d0000 	ldr	r0, [sp]
        216490:	e3300000 	teq	r0, #0	; 0x0
        216494:	0a000005 	beq	2164b0 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x4dc>
        216498:	e1a00004 	mov	r0, r4
        21649c:	e3a02006 	mov	r2, #6	; 0x6
        2164a0:	e3a01000 	mov	r1, #0	; 0x0
        2164a4:	e5943000 	ldr	r3, [r4]
        2164a8:	e1a0e00f 	mov	lr, pc
        2164ac:	e283f09c 	add	pc, r3, #156	; 0x9c
        2164b0:	e5940040 	ldr	r0, [r4, #64]
        2164b4:	e5901058 	ldr	r1, [r0, #88]	; fField88
        2164b8:	e3510000 	cmp	r1, #0	; 0x0
        2164bc:	da00000d 	ble	2164f8 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x524>
        2164c0:	e3310002 	teq	r1, #2	; 0x2
        2164c4:	1a000004 	bne	2164dc <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x508>
        2164c8:	e5901068 	ldr	r1, [r0, #104]
        2164cc:	e5900078 	ldr	r0, [r0, #120]
        2164d0:	e1510000 	cmp	r1, r0
        2164d4:	b1a00001 	movlt	r0, r1
        2164d8:	ea000003 	b	2164ec <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x518>
        2164dc:	e590105c 	ldr	r1, [r0, #92]	; fField92
        2164e0:	e3310000 	teq	r1, #0	; 0x0
        2164e4:	05900078 	ldreq	r0, [r0, #120]
        2164e8:	15900068 	ldrne	r0, [r0, #104]
        2164ec:	e3a01001 	mov	r1, #1	; 0x1
        2164f0:	e5a41074 	str	r1, [r4, #116]!
        2164f4:	e5840004 	str	r0, [r4, #4]
        2164f8:	e3360000 	teq	r6, #0	; 0x0
        2164fc:	11a00006 	movne	r0, r6
        216500:	11a0e00f 	movne	lr, pc
        216504:	1596f000 	ldrne	pc, [r6]
        216508:	e3380000 	teq	r8, #0	; 0x0
        21650c:	11a00008 	movne	r0, r8
        216510:	1b6543a0 	blne	1b67398 <$DisposeContextUnits(TUnitList *)>
        216514:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        216518:	e3300000 	teq	r0, #0	; 0x0
        21651c:	13a00000 	movne	r0, #0	; 0x0
        216520:	03a00001 	moveq	r0, #1	; 0x1
        216524:	e20000ff 	and	r0, r0, #255	; 0xff
        216528:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        21652c:	e3a00001 	mov	r0, #1	; 0x1
        216530:	e58d000c 	str	r0, [sp, #12]	; fField12
        216534:	eaffffef 	b	2164f8 <TGeneralShapeDomain::Group(TUnit *, dInfoRec *)+0x524>
    */
}

/**
 * Symbol: TGeneralShapeDomain::PreGroup(TUnit *)
 * Address: 00216538
 */
TGeneralShapeDomain::PreGroup(TUnit *) {
    /*
        216538:	e1a0c00d 	mov	ip, sp
        21653c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        216540:	e24cb004 	sub	fp, ip, #4	; 0x4
        216544:	e1a04000 	mov	r4, r0
        216548:	e24dd008 	sub	sp, sp, #8	; 0x8
        21654c:	e3310000 	teq	r1, #0	; 0x0
        216550:	03a00001 	moveq	r0, #1	; 0x1
        216554:	0a000041 	beq	216660 <TGeneralShapeDomain::PreGroup(TUnit *)+0x128>
        216558:	e3a07000 	mov	r7, #0	; 0x0
        21655c:	e1a05001 	mov	r5, r1
        216560:	e5b10040 	ldr	r0, [r1, #64]!
        216564:	eb6511fb 	bl	1b5ad58 <$AcquireStroke(TStroke *)>
        216568:	e1a06000 	mov	r6, r0
        21656c:	e1a00005 	mov	r0, r5
        216570:	eb654bc8 	bl	1b69498 <$CheckClosed(TStrokeUnit *)>
        216574:	e1a08000 	mov	r8, r0
        216578:	e3360000 	teq	r6, #0	; 0x0
        21657c:	1b652eee 	blne	1b6213c <$ReleaseStroke(void)>
        216580:	e5940008 	ldr	r0, [r4, #8]	; fField8
        216584:	e1a01004 	mov	r1, r4
        216588:	e59f20d4 	ldr	r2, [pc, #d4]	; 216664 <TGeneralShapeDomain::PreGroup(TUnit *)+0x12c>
        21658c:	eb652271 	bl	1b5ef58 <TController::$GetDelayList(TDomain *, unsigned long)>
        216590:	e1b04000 	movs	r4, r0
        216594:	0a000030 	beq	21665c <TGeneralShapeDomain::PreGroup(TUnit *)+0x124>
        216598:	e594000c 	ldr	r0, [r4, #12]	; fField12
        21659c:	e3300000 	teq	r0, #0	; 0x0
        2165a0:	0a000029 	beq	21664c <TGeneralShapeDomain::PreGroup(TUnit *)+0x114>
        2165a4:	e1a00004 	mov	r0, r4
        2165a8:	e3a01000 	mov	r1, #0	; 0x0
        2165ac:	eb65267e 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        2165b0:	e1a06000 	mov	r6, r0
        2165b4:	e3380000 	teq	r8, #0	; 0x0
        2165b8:	1a000010 	bne	216600 <TGeneralShapeDomain::PreGroup(TUnit *)+0xc8>
        2165bc:	e5950040 	ldr	r0, [r5, #64]
        2165c0:	eb6511e4 	bl	1b5ad58 <$AcquireStroke(TStroke *)>
        2165c4:	e1a08000 	mov	r8, r0
        2165c8:	e1a0200d 	mov	r2, sp
        2165cc:	e1a00005 	mov	r0, r5
        2165d0:	e3a01000 	mov	r1, #0	; 0x0
        2165d4:	eb654bbd 	bl	1b694d0 <$ExtractEnds(TStrokeUnit *, TGeneralShapeUnit *, FPoint **)>
        2165d8:	e1a03006 	mov	r3, r6
        2165dc:	e1a0100d 	mov	r1, sp
        2165e0:	e3a02000 	mov	r2, #0	; 0x0
        2165e4:	e3a00000 	mov	r0, #0	; 0x0
        2165e8:	eb654bab 	bl	1b6949c <$CheckConnect__FlPP6FPointP17TGeneralShapeUnitT3>
        2165ec:	e1a05000 	mov	r5, r0
        2165f0:	e3380000 	teq	r8, #0	; 0x0
        2165f4:	1b652ed0 	blne	1b6213c <$ReleaseStroke(void)>
        2165f8:	e3350000 	teq	r5, #0	; 0x0
        2165fc:	1a000004 	bne	216614 <TGeneralShapeDomain::PreGroup(TUnit *)+0xdc>
        216600:	e1a00006 	mov	r0, r6
        216604:	e5961000 	ldr	r1, [r6]
        216608:	e1a0e00f 	mov	lr, pc
        21660c:	e281f060 	add	pc, r1, #96	; 0x60
        216610:	e3a07001 	mov	r7, #1	; 0x1
        216614:	e3a05001 	mov	r5, #1	; 0x1
        216618:	e594000c 	ldr	r0, [r4, #12]	; fField12
        21661c:	e3500001 	cmp	r0, #1	; 0x1
        216620:	9a000009 	bls	21664c <TGeneralShapeDomain::PreGroup(TUnit *)+0x114>
        216624:	e1a01005 	mov	r1, r5
        216628:	e1a00004 	mov	r0, r4
        21662c:	eb65265e 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        216630:	e5901000 	ldr	r1, [r0]
        216634:	e1a0e00f 	mov	lr, pc
        216638:	e281f060 	add	pc, r1, #96	; 0x60
        21663c:	e2855001 	add	r5, r5, #1	; 0x1
        216640:	e594000c 	ldr	r0, [r4, #12]	; fField12
        216644:	e1500005 	cmp	r0, r5
        216648:	8afffff5 	bhi	216624 <TGeneralShapeDomain::PreGroup(TUnit *)+0xec>
        21664c:	e3340000 	teq	r4, #0	; 0x0
        216650:	11a00004 	movne	r0, r4
        216654:	11a0e00f 	movne	lr, pc
        216658:	1594f000 	ldrne	pc, [r4]
        21665c:	e1a00007 	mov	r0, r7
        216660:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        216664:	47534850 	undefined
    */
}

