#include "include/THelpOutline.h"

/**
 * Symbol: THelpOutline::ClassID( const(void))
 * Address: 0014e2f4
 */
THelpOutline::ClassID( const(void)) {
    /*
        14e2f4:	e3a0006b 	mov	r0, #107	; 0x6b
        14e2f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THelpOutline::DerivedFrom( const(long))
 * Address: 0014e2fc
 */
THelpOutline::DerivedFrom( const(long)) {
    /*
        14e2fc:	e1a0c00d 	mov	ip, sp
        14e300:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        14e304:	e24cb004 	sub	fp, ip, #4	; 0x4
        14e308:	e331006b 	teq	r1, #107	; 0x6b
        14e30c:	0a000002 	beq	14e31c <THelpOutline::DerivedFrom( const(long))+0x20>
        14e310:	eb0454aa 	bl	2635c0 <TView::DerivedFrom( const(long))>
        14e314:	e3300000 	teq	r0, #0	; 0x0
        14e318:	0a000001 	beq	14e324 <THelpOutline::DerivedFrom( const(long))+0x28>
        14e31c:	e3a00001 	mov	r0, #1	; 0x1
        14e320:	ea000000 	b	14e328 <THelpOutline::DerivedFrom( const(long))+0x2c>
        14e324:	e3a00000 	mov	r0, #0	; 0x0
        14e328:	e20000ff 	and	r0, r0, #255	; 0xff
        14e32c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: THelpOutline::Browser(void)
 * Address: 0014e41c
 */
THelpOutline::Browser(void) {
    /*
        14e41c:	e1a0c00d 	mov	ip, sp
        14e420:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14e424:	e24cb004 	sub	fp, ip, #4	; 0x4
        14e428:	e1a04000 	mov	r4, r0
        14e42c:	e3a00002 	mov	r0, #2	; 0x2
        14e430:	eb69cf45 	bl	1bc214c <$AllocateRefHandle(long)>
        14e434:	e1a06000 	mov	r6, r0
        14e438:	e3a00002 	mov	r0, #2	; 0x2
        14e43c:	eb69cf42 	bl	1bc214c <$AllocateRefHandle(long)>
        14e440:	e1a05000 	mov	r5, r0
        14e444:	e59f1040 	ldr	r1, [pc, #40]	; 14e48c <THelpOutline::Browser(void)+0x70>
        14e448:	e1a00004 	mov	r0, r4
        14e44c:	eb69f041 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        14e450:	e5860000 	str	r0, [r6]
        14e454:	e59f1034 	ldr	r1, [pc, #34]	; 14e490 <THelpOutline::Browser(void)+0x74>
        14e458:	e5911000 	ldr	r1, [r1]
        14e45c:	e5911000 	ldr	r1, [r1]
        14e460:	eb69d77e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14e464:	e3a01000 	mov	r1, #0	; 0x0
        14e468:	e5850000 	str	r0, [r5]
        14e46c:	eb69d778 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14e470:	e1a04000 	mov	r4, r0
        14e474:	e1a00005 	mov	r0, r5
        14e478:	eb69d34f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e47c:	e1a00006 	mov	r0, r6
        14e480:	eb69d34d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e484:	e1a00004 	mov	r0, r4
        14e488:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        14e48c:	00682150 	rsbeq	r2, r8, r0, asr r1
        14e490:	006821f8 	streqd	r2, [r8], -#24
    */
}

/**
 * Symbol: THelpOutline::ClickCommand(long)
 * Address: 0014e494
 */
THelpOutline::ClickCommand(long) {
    /*
        14e494:	e1a0c00d 	mov	ip, sp
        14e498:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14e49c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14e4a0:	e1a04000 	mov	r4, r0
        14e4a4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14e4a8:	e3a00002 	mov	r0, #2	; 0x2
        14e4ac:	eb69cf26 	bl	1bc214c <$AllocateRefHandle(long)>
        14e4b0:	e58d0008 	str	r0, [sp, #8]
        14e4b4:	e3a00002 	mov	r0, #2	; 0x2
        14e4b8:	eb69cf23 	bl	1bc214c <$AllocateRefHandle(long)>
        14e4bc:	e1a05000 	mov	r5, r0
        14e4c0:	e3a00002 	mov	r0, #2	; 0x2
        14e4c4:	eb69cf20 	bl	1bc214c <$AllocateRefHandle(long)>
        14e4c8:	e58d0004 	str	r0, [sp, #4]
        14e4cc:	e3a00002 	mov	r0, #2	; 0x2
        14e4d0:	eb69cf1d 	bl	1bc214c <$AllocateRefHandle(long)>
        14e4d4:	e58d0000 	str	r0, [sp]
        14e4d8:	e594103c 	ldr	r1, [r4, #60]	; fField60
        14e4dc:	e1a00004 	mov	r0, r4
        14e4e0:	e5942000 	ldr	r2, [r4]
        14e4e4:	e1a0e00f 	mov	lr, pc
        14e4e8:	e282ff5d 	add	pc, r2, #372	; 0x174
        14e4ec:	e5900004 	ldr	r0, [r0, #4]
        14e4f0:	e3100502 	tst	r0, #8388608	; 0x800000
        14e4f4:	1a000034 	bne	14e5cc <THelpOutline::ClickCommand(long)+0x138>
        14e4f8:	e59f10f0 	ldr	r1, [pc, #f0]	; 14e5f0 <THelpOutline::ClickCommand(long)+0x15c>
        14e4fc:	e1a00004 	mov	r0, r4
        14e500:	eb69f014 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        14e504:	e59d1000 	ldr	r1, [sp]
        14e508:	e5810000 	str	r0, [r1]
        14e50c:	e594103c 	ldr	r1, [r4, #60]	; fField60
        14e510:	e1a00004 	mov	r0, r4
        14e514:	e5942000 	ldr	r2, [r4]
        14e518:	e1a0e00f 	mov	lr, pc
        14e51c:	e282ff5b 	add	pc, r2, #364	; 0x16c
        14e520:	e5850000 	str	r0, [r5]
        14e524:	e59f10c8 	ldr	r1, [pc, #c8]	; 14e5f4 <THelpOutline::ClickCommand(long)+0x160>
        14e528:	e5911000 	ldr	r1, [r1]
        14e52c:	e5911000 	ldr	r1, [r1]
        14e530:	eb69d74a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14e534:	e59d1004 	ldr	r1, [sp, #4]
        14e538:	e1a0300d 	mov	r3, sp
        14e53c:	e3a02000 	mov	r2, #0	; 0x0
        14e540:	e5810000 	str	r0, [r1]
        14e544:	e92d000c 	stmdb	sp!, {r2, r3}
        14e548:	e2841024 	add	r1, r4, #36	; 0x24
        14e54c:	e28d200c 	add	r2, sp, #12	; 0xc
        14e550:	e59f00a0 	ldr	r0, [pc, #a0]	; 14e5f8 <THelpOutline::ClickCommand(long)+0x164>
        14e554:	e5900000 	ldr	r0, [r0]
        14e558:	e3a03000 	mov	r3, #0	; 0x0
        14e55c:	eb65192a 	bl	1a94a0c <TLibrarian::$FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)>
        14e560:	e28dd008 	add	sp, sp, #8	; 0x8
        14e564:	e1b06000 	movs	r6, r0
        14e568:	0a000017 	beq	14e5cc <THelpOutline::ClickCommand(long)+0x138>
        14e56c:	e59f1088 	ldr	r1, [pc, #88]	; 14e5fc <THelpOutline::ClickCommand(long)+0x168>
        14e570:	e1a00004 	mov	r0, r4
        14e574:	eb69eff7 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        14e578:	e59d1008 	ldr	r1, [sp, #8]
        14e57c:	e5810000 	str	r0, [r1]
        14e580:	e1a01006 	mov	r1, r6
        14e584:	e28d0008 	add	r0, sp, #8	; 0x8
        14e588:	e3a02001 	mov	r2, #1	; 0x1
        14e58c:	eb653a38 	bl	1a9ce74 <$PageTurnTo(RefVar const &, unsigned long, unsigned char)>
        14e590:	e24dd004 	sub	sp, sp, #4	; 0x4
        14e594:	e59f0064 	ldr	r0, [pc, #64]	; 14e600 <THelpOutline::ClickCommand(long)+0x16c>
        14e598:	e3a02302 	mov	r2, #134217728	; 0x8000000
        14e59c:	e1a01004 	mov	r1, r4
        14e5a0:	e5906000 	ldr	r6, [r0]
        14e5a4:	e3a0002b 	mov	r0, #43	; 0x2b
        14e5a8:	eb655f64 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        14e5ac:	eb69cee6 	bl	1bc214c <$AllocateRefHandle(long)>
        14e5b0:	e58d0000 	str	r0, [sp]
        14e5b4:	e1a0100d 	mov	r1, sp
        14e5b8:	e1a00006 	mov	r0, r6
        14e5bc:	eb65089d 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        14e5c0:	e59d0000 	ldr	r0, [sp]
        14e5c4:	eb69d2fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e5c8:	e28dd004 	add	sp, sp, #4	; 0x4
        14e5cc:	e59d0000 	ldr	r0, [sp]
        14e5d0:	eb69d2f9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e5d4:	e59d0004 	ldr	r0, [sp, #4]
        14e5d8:	eb69d2f7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e5dc:	e1a00005 	mov	r0, r5
        14e5e0:	eb69d2f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e5e4:	e59d0008 	ldr	r0, [sp, #8]
        14e5e8:	eb69d2f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e5ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        14e5f0:	00682150 	rsbeq	r2, r8, r0, asr r1
        14e5f4:	00683338 	rsbeq	r3, r8, r8, lsr r3
        14e5f8:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        14e5fc:	006826e0 	rsbeq	r2, r8, r0, ror #13
        14e600:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: THelpOutline::TopicByName(RefVar const &)
 * Address: 0014e604
 */
THelpOutline::TopicByName(RefVar const &) {
    /*
        14e604:	e1a0c00d 	mov	ip, sp
        14e608:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14e60c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14e610:	e1a04000 	mov	r4, r0
        14e614:	e1a05001 	mov	r5, r1
        14e618:	e24dd004 	sub	sp, sp, #4	; 0x4
        14e61c:	e3a00002 	mov	r0, #2	; 0x2
        14e620:	eb69cec9 	bl	1bc214c <$AllocateRefHandle(long)>
        14e624:	e1a06000 	mov	r6, r0
        14e628:	e3a00002 	mov	r0, #2	; 0x2
        14e62c:	eb69cec6 	bl	1bc214c <$AllocateRefHandle(long)>
        14e630:	e58d0000 	str	r0, [sp]
        14e634:	e3a00002 	mov	r0, #2	; 0x2
        14e638:	eb69cec3 	bl	1bc214c <$AllocateRefHandle(long)>
        14e63c:	e1a07000 	mov	r7, r0
        14e640:	e59f113c 	ldr	r1, [pc, #13c]	; 14e784 <THelpOutline::TopicByName(RefVar const &)+0x180>
        14e644:	e1a00004 	mov	r0, r4
        14e648:	eb69efc2 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        14e64c:	e59d1000 	ldr	r1, [sp]
        14e650:	e1a0300d 	mov	r3, sp
        14e654:	e5810000 	str	r0, [r1]
        14e658:	e92d0008 	stmdb	sp!, {r3}
        14e65c:	e2841024 	add	r1, r4, #36	; 0x24
        14e660:	e1a03005 	mov	r3, r5
        14e664:	e59f211c 	ldr	r2, [pc, #11c]	; 14e788 <THelpOutline::TopicByName(RefVar const &)+0x184>
        14e668:	e59f011c 	ldr	r0, [pc, #11c]	; 14e78c <THelpOutline::TopicByName(RefVar const &)+0x188>
        14e66c:	e5900000 	ldr	r0, [r0]
        14e670:	eb6514d9 	bl	1a939dc <TLibrarian::$FindContentByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)>
        14e674:	e28dd004 	add	sp, sp, #4	; 0x4
        14e678:	e5860000 	str	r0, [r6]
        14e67c:	eb69db0a 	bl	1bc52ac <$Length(long)>
        14e680:	e3a01000 	mov	r1, #0	; 0x0
        14e684:	e3300000 	teq	r0, #0	; 0x0
        14e688:	0a000047 	beq	14e7ac <THelpOutline::TopicByName(RefVar const &)+0x1a8>
        14e68c:	e3a05000 	mov	r5, #0	; 0x0
        14e690:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14e694:	e3500000 	cmp	r0, #0	; 0x0
        14e698:	da000043 	ble	14e7ac <THelpOutline::TopicByName(RefVar const &)+0x1a8>
        14e69c:	e1a01005 	mov	r1, r5
        14e6a0:	e1a00004 	mov	r0, r4
        14e6a4:	e5942000 	ldr	r2, [r4]
        14e6a8:	e1a0e00f 	mov	lr, pc
        14e6ac:	e282ff5b 	add	pc, r2, #364	; 0x16c
        14e6b0:	e5870000 	str	r0, [r7]
        14e6b4:	e59f10d4 	ldr	r1, [pc, #d4]	; 14e790 <THelpOutline::TopicByName(RefVar const &)+0x18c>
        14e6b8:	e5911000 	ldr	r1, [r1]
        14e6bc:	e5911000 	ldr	r1, [r1]
        14e6c0:	eb69d6e6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14e6c4:	eb69cea0 	bl	1bc214c <$AllocateRefHandle(long)>
        14e6c8:	e1a08000 	mov	r8, r0
        14e6cc:	e3a01000 	mov	r1, #0	; 0x0
        14e6d0:	e5960000 	ldr	r0, [r6]
        14e6d4:	eb69d6de 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14e6d8:	eb69ce9b 	bl	1bc214c <$AllocateRefHandle(long)>
        14e6dc:	e1a09000 	mov	r9, r0
        14e6e0:	e5981000 	ldr	r1, [r8]
        14e6e4:	e5900000 	ldr	r0, [r0]
        14e6e8:	eb69d6d0 	bl	1bc4230 <$EQRef__FlT1>
        14e6ec:	e1b0a000 	movs	sl, r0
        14e6f0:	13a0a001 	movne	sl, #1	; 0x1
        14e6f4:	e1a00009 	mov	r0, r9
        14e6f8:	eb69d2af 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e6fc:	e33a0000 	teq	sl, #0	; 0x0
        14e700:	0a000023 	beq	14e794 <THelpOutline::TopicByName(RefVar const &)+0x190>
        14e704:	e1a01005 	mov	r1, r5
        14e708:	e1a00004 	mov	r0, r4
        14e70c:	e5942000 	ldr	r2, [r4]
        14e710:	e1a0e00f 	mov	lr, pc
        14e714:	e282ff49 	add	pc, r2, #292	; 0x124
        14e718:	e584503c 	str	r5, [r4, #60]	; fField60
        14e71c:	e1a01005 	mov	r1, r5
        14e720:	e1a00004 	mov	r0, r4
        14e724:	e5942000 	ldr	r2, [r4]
        14e728:	e1a0e00f 	mov	lr, pc
        14e72c:	e282ff56 	add	pc, r2, #344	; 0x158
        14e730:	e1a01005 	mov	r1, r5
        14e734:	e1a00004 	mov	r0, r4
        14e738:	e3a02000 	mov	r2, #0	; 0x0
        14e73c:	e5943000 	ldr	r3, [r4]
        14e740:	e1a0e00f 	mov	lr, pc
        14e744:	e283fd05 	add	pc, r3, #320	; 0x140
        14e748:	e1a00004 	mov	r0, r4
        14e74c:	e3a01000 	mov	r1, #0	; 0x0
        14e750:	e5942000 	ldr	r2, [r4]
        14e754:	e1a0e00f 	mov	lr, pc
        14e758:	e282f054 	add	pc, r2, #84	; 0x54
        14e75c:	e1a00008 	mov	r0, r8
        14e760:	eb69d295 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e764:	e1a00007 	mov	r0, r7
        14e768:	eb69d293 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e76c:	e59d0000 	ldr	r0, [sp]
        14e770:	eb69d291 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e774:	e1a00006 	mov	r0, r6
        14e778:	eb69d28f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e77c:	e3a0001a 	mov	r0, #26	; 0x1a
        14e780:	ea000010 	b	14e7c8 <THelpOutline::TopicByName(RefVar const &)+0x1c4>
        14e784:	00682150 	rsbeq	r2, r8, r0, asr r1
        14e788:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        14e78c:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        14e790:	00683338 	rsbeq	r3, r8, r8, lsr r3
        14e794:	e1a00008 	mov	r0, r8
        14e798:	eb69d287 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e79c:	e2855001 	add	r5, r5, #1	; 0x1
        14e7a0:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14e7a4:	e1500005 	cmp	r0, r5
        14e7a8:	caffffbb 	bgt	14e69c <THelpOutline::TopicByName(RefVar const &)+0x98>
        14e7ac:	e1a00007 	mov	r0, r7
        14e7b0:	eb69d281 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e7b4:	e59d0000 	ldr	r0, [sp]
        14e7b8:	eb69d27f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e7bc:	e1a00006 	mov	r0, r6
        14e7c0:	eb69d27d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e7c4:	e3a00002 	mov	r0, #2	; 0x2
        14e7c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: THelpOutline::ViewableTopics(void)
 * Address: 0014e7cc
 */
THelpOutline::ViewableTopics(void) {
    /*
        14e7cc:	e3a0000f 	mov	r0, #15	; 0xf
        14e7d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THelpOutline::WhereAreWe(void)
 * Address: 0014e7d4
 */
THelpOutline::WhereAreWe(void) {
    /*
        14e7d4:	e3e00000 	mvn	r0, #0	; 0x0
        14e7d8:	e1a0f00e 	mov	pc, lr
    */
}

