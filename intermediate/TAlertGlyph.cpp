#include "include/TAlertGlyph.h"

/**
 * Symbol: TAlertGlyph::__ct(void)
 * Address: 0003033c
 */
TAlertGlyph::TAlertGlyph(void) {
    /*
         3033c:	e1a0c00d 	mov	ip, sp
         30340:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         30344:	e24cb004 	sub	fp, ip, #4	; 0x4
         30348:	e1b04000 	movs	r4, r0
         3034c:	1a000003 	bne	30360 <TAlertGlyph::__ct(void)+0x24>
         30350:	e3a00030 	mov	r0, #48	; 0x30
         30354:	eb6e78f7 	bl	1bce738 <$__nw(unsigned int)>
         30358:	e1b04000 	movs	r4, r0
         3035c:	0a000003 	beq	30370 <TAlertGlyph::__ct(void)+0x34>
         30360:	e59f1010 	ldr	r1, [pc, #10]	; 30378 <TAlertGlyph::__ct(void)+0x3c>
         30364:	e1a00004 	mov	r0, r4
         30368:	e3a02009 	mov	r2, #9	; 0x9
         3036c:	eb6c7d22 	bl	1b4f7fc <TAlertGlyph::$InitGlyph(RefVar const &, long)>
         30370:	e1a00004 	mov	r0, r4
         30374:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         30378:	00680ea8 	rsbeq	r0, r8, r8, lsr #29
    */
}

/**
 * Symbol: TAlertGlyph::__ct(RefVar const &, long)
 * Address: 0003037c
 */
TAlertGlyph::TAlertGlyph(RefVar const &, long) {
    /*
         3037c:	e1a0c00d 	mov	ip, sp
         30380:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         30384:	e24cb004 	sub	fp, ip, #4	; 0x4
         30388:	e1b04000 	movs	r4, r0
         3038c:	e1a05001 	mov	r5, r1
         30390:	e1a06002 	mov	r6, r2
         30394:	1a000003 	bne	303a8 <TAlertGlyph::__ct(RefVar const &, long)+0x2c>
         30398:	e3a00030 	mov	r0, #48	; 0x30
         3039c:	eb6e78e5 	bl	1bce738 <$__nw(unsigned int)>
         303a0:	e1b04000 	movs	r4, r0
         303a4:	0a000003 	beq	303b8 <TAlertGlyph::__ct(RefVar const &, long)+0x3c>
         303a8:	e1a02006 	mov	r2, r6
         303ac:	e1a01005 	mov	r1, r5
         303b0:	e1a00004 	mov	r0, r4
         303b4:	eb6c7d10 	bl	1b4f7fc <TAlertGlyph::$InitGlyph(RefVar const &, long)>
         303b8:	e1a00004 	mov	r0, r4
         303bc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAlertGlyph::InitGlyph(RefVar const &, long)
 * Address: 000303c0
 */
TAlertGlyph::InitGlyph(RefVar const &, long) {
    /*
         303c0:	e1a0c00d 	mov	ip, sp
         303c4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         303c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         303cc:	e1a04000 	mov	r4, r0
         303d0:	e1a05002 	mov	r5, r2
         303d4:	e5910000 	ldr	r0, [r1]
         303d8:	e5900000 	ldr	r0, [r0]
         303dc:	eb6e475e 	bl	1bc215c <$BinaryData(long)>
         303e0:	e1a06000 	mov	r6, r0
         303e4:	e59f10bc 	ldr	r1, [pc, #bc]	; 304a8 <TAlertGlyph::InitGlyph(RefVar const &, long)+0xe8>
         303e8:	eb6c6852 	bl	1b4a538 <$FindFontTable(sfnt_OffsetTable *, unsigned long)>
         303ec:	e5840004 	str	r0, [r4, #4]	; fField4
         303f0:	e5901008 	ldr	r1, [r0, #8]	; fField8
         303f4:	e0800001 	add	r0, r0, r1
         303f8:	e5840004 	str	r0, [r4, #4]	; fField4
         303fc:	e5900000 	ldr	r0, [r0]
         30400:	e1b00820 	movs	r0, r0, lsr #16
         30404:	059f00a0 	ldreq	r0, [pc, #a0]	; 304ac <TAlertGlyph::InitGlyph(RefVar const &, long)+0xec>
         30408:	0a000008 	beq	30430 <TAlertGlyph::InitGlyph(RefVar const &, long)+0x70>
         3040c:	e3300002 	teq	r0, #2	; 0x2
         30410:	059f0098 	ldreq	r0, [pc, #98]	; 304b0 <TAlertGlyph::InitGlyph(RefVar const &, long)+0xf0>
         30414:	0a000005 	beq	30430 <TAlertGlyph::InitGlyph(RefVar const &, long)+0x70>
         30418:	e3300004 	teq	r0, #4	; 0x4
         3041c:	059f0090 	ldreq	r0, [pc, #90]	; 304b4 <TAlertGlyph::InitGlyph(RefVar const &, long)+0xf4>
         30420:	0a000002 	beq	30430 <TAlertGlyph::InitGlyph(RefVar const &, long)+0x70>
         30424:	e3300006 	teq	r0, #6	; 0x6
         30428:	1a000001 	bne	30434 <TAlertGlyph::InitGlyph(RefVar const &, long)+0x74>
         3042c:	e59f0084 	ldr	r0, [pc, #84]	; 304b8 <TAlertGlyph::InitGlyph(RefVar const &, long)+0xf8>
         30430:	e5840000 	str	r0, [r4]
         30434:	e1a00006 	mov	r0, r6
         30438:	e59f107c 	ldr	r1, [pc, #7c]	; 304bc <TAlertGlyph::InitGlyph(RefVar const &, long)+0xfc>
         3043c:	eb6c683d 	bl	1b4a538 <$FindFontTable(sfnt_OffsetTable *, unsigned long)>
         30440:	e1a01000 	mov	r1, r0
         30444:	e1a07000 	mov	r7, r0
         30448:	e1a00005 	mov	r0, r5
         3044c:	eb6c850e 	bl	1b5188c <$LocateEntry(long, sfnt_blocTable *)>
         30450:	e5901028 	ldr	r1, [r0, #40]	; fField40
         30454:	e1a01821 	mov	r1, r1, lsr #16
         30458:	e5841010 	str	r1, [r4, #16]	; fField16
         3045c:	e590102a 	ldr	r1, [r0, #42]
         30460:	e1a01821 	mov	r1, r1, lsr #16
         30464:	e5841014 	str	r1, [r4, #20]	; fField20
         30468:	e5d01018 	ldrb	r1, [r0, #24]	; fField24
         3046c:	e1a01c01 	mov	r1, r1, lsl #24
         30470:	e1a01c41 	mov	r1, r1, asr #24
         30474:	e584101c 	str	r1, [r4, #28]	; fField28
         30478:	e5d01019 	ldrb	r1, [r0, #25]
         3047c:	e1a01c01 	mov	r1, r1, lsl #24
         30480:	e1a01c41 	mov	r1, r1, asr #24
         30484:	e5841018 	str	r1, [r4, #24]	; fField24
         30488:	e5900000 	ldr	r0, [r0]
         3048c:	e0870000 	add	r0, r7, r0
         30490:	e5840008 	str	r0, [r4, #8]	; fField8
         30494:	e1a00006 	mov	r0, r6
         30498:	e59f1020 	ldr	r1, [pc, #20]	; 304c0 <TAlertGlyph::InitGlyph(RefVar const &, long)+0x100>	; fField20
         3049c:	eb6c6825 	bl	1b4a538 <$FindFontTable(sfnt_OffsetTable *, unsigned long)>
         304a0:	e5a4000c 	str	r0, [r4, #12]!	; fField12
         304a4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         304a8:	636d6170 	cmnvs	sp, #28	; 0x1c
         304ac:	000ae5b4 	streqh	lr, [sl], -r4
         304b0:	000ae5cc 	andeq	lr, sl, ip, asr #11
         304b4:	000ae5d4 	ldreqd	lr, [sl], -r4
         304b8:	000ae7c0 	andeq	lr, sl, r0, asr #15
         304bc:	626c6f63 	rsbvs	r6, ip, #396	; 0x18c
         304c0:	62646174 	rsbvs	r6, r4, #29	; 0x1d
    */
}

/**
 * Symbol: TAlertGlyph::GetAlertHeight(void)
 * Address: 000304c4
 */
TAlertGlyph::GetAlertHeight(void) {
    /*
         304c4:	e2801018 	add	r1, r0, #24	; 0x18
         304c8:	e8910003 	ldmia	r1, {r0, r1}
         304cc:	e0410000 	sub	r0, r1, r0
         304d0:	e20000ff 	and	r0, r0, #255	; 0xff
         304d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAlertGlyph::GetAlertGlyphWidth(long)
 * Address: 000304d8
 */
TAlertGlyph::GetAlertGlyphWidth(long) {
    /*
         304d8:	e1a0c00d 	mov	ip, sp
         304dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         304e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         304e4:	e1a04000 	mov	r4, r0
         304e8:	e1a00001 	mov	r0, r1
         304ec:	e5941004 	ldr	r1, [r4, #4]	; fField4
         304f0:	e1a0e00f 	mov	lr, pc
         304f4:	e594f000 	ldr	pc, [r4]
         304f8:	e5941008 	ldr	r1, [r4, #8]	; fField8
         304fc:	e1a02001 	mov	r2, r1
         30500:	e5943010 	ldr	r3, [r4, #16]	; fField16
         30504:	e1530000 	cmp	r3, r0
         30508:	9a000002 	bls	30518 <TAlertGlyph::GetAlertGlyphWidth(long)+0x40>
         3050c:	e5943014 	ldr	r3, [r4, #20]	; fField20
         30510:	e1530000 	cmp	r3, r0
         30514:	33a00000 	movcc	r0, #0	; 0x0
         30518:	e5913002 	ldr	r3, [r1, #2]
         3051c:	e1500823 	cmp	r0, r3, lsr #16
         30520:	9a000003 	bls	30534 <TAlertGlyph::GetAlertGlyphWidth(long)+0x5c>
         30524:	e2811008 	add	r1, r1, #8	; 0x8
         30528:	e5913002 	ldr	r3, [r1, #2]
         3052c:	e1500823 	cmp	r0, r3, lsr #16
         30530:	8afffffb 	bhi	30524 <TAlertGlyph::GetAlertGlyphWidth(long)+0x4c>
         30534:	e5913000 	ldr	r3, [r1]
         30538:	e1a03823 	mov	r3, r3, lsr #16
         3053c:	e1500003 	cmp	r0, r3
         30540:	33a00000 	movcc	r0, #0	; 0x0
         30544:	e0400003 	sub	r0, r0, r3
         30548:	e5911004 	ldr	r1, [r1, #4]	; fField4
         3054c:	e0821001 	add	r1, r2, r1
         30550:	e5913000 	ldr	r3, [r1]
         30554:	e1a03823 	mov	r3, r3, lsr #16
         30558:	e3a02000 	mov	r2, #0	; 0x0
         3055c:	e3330001 	teq	r3, #1	; 0x1
         30560:	00810100 	addeq	r0, r1, r0, lsl #2
         30564:	05900008 	ldreq	r0, [r0, #8]	; fField8
         30568:	0a000004 	beq	30580 <TAlertGlyph::GetAlertGlyphWidth(long)+0xa8>
         3056c:	e3330003 	teq	r3, #3	; 0x3
         30570:	1a000004 	bne	30588 <TAlertGlyph::GetAlertGlyphWidth(long)+0xb0>
         30574:	e0810080 	add	r0, r1, r0, lsl #1
         30578:	e5900008 	ldr	r0, [r0, #8]	; fField8
         3057c:	e1a00820 	mov	r0, r0, lsr #16
         30580:	e584002c 	str	r0, [r4, #44]	; fField44
         30584:	ea000000 	b	3058c <TAlertGlyph::GetAlertGlyphWidth(long)+0xb4>
         30588:	e584202c 	str	r2, [r4, #44]	; fField44
         3058c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         30590:	e594300c 	ldr	r3, [r4, #12]	; fField12
         30594:	e0800003 	add	r0, r0, r3
         30598:	e584002c 	str	r0, [r4, #44]	; fField44
         3059c:	e5913004 	ldr	r3, [r1, #4]	; fField4
         305a0:	e0800003 	add	r0, r0, r3
         305a4:	e584002c 	str	r0, [r4, #44]	; fField44
         305a8:	e5911002 	ldr	r1, [r1, #2]
         305ac:	e1a01821 	mov	r1, r1, lsr #16
         305b0:	e3310001 	teq	r1, #1	; 0x1
         305b4:	0a00000d 	beq	305f0 <TAlertGlyph::GetAlertGlyphWidth(long)+0x118>
         305b8:	e3310006 	teq	r1, #6	; 0x6
         305bc:	1a000017 	bne	30620 <TAlertGlyph::GetAlertGlyphWidth(long)+0x148>
         305c0:	e5d03000 	ldrb	r3, [r0]
         305c4:	e5c43023 	strb	r3, [r4, #35]	; fField35
         305c8:	e5d03001 	ldrb	r3, [r0, #1]
         305cc:	e5c43022 	strb	r3, [r4, #34]	; fField34
         305d0:	e5d03002 	ldrb	r3, [r0, #2]
         305d4:	e5c43024 	strb	r3, [r4, #36]	; fField36
         305d8:	e5d03003 	ldrb	r3, [r0, #3]
         305dc:	e5c43025 	strb	r3, [r4, #37]	; fField37
         305e0:	e5d01004 	ldrb	r1, [r0, #4]	; fField4
         305e4:	e5c41026 	strb	r1, [r4, #38]	; fField38
         305e8:	e2800008 	add	r0, r0, #8	; 0x8
         305ec:	ea00000a 	b	3061c <TAlertGlyph::GetAlertGlyphWidth(long)+0x144>
         305f0:	e5d03000 	ldrb	r3, [r0]
         305f4:	e5c43023 	strb	r3, [r4, #35]	; fField35
         305f8:	e5d03001 	ldrb	r3, [r0, #1]
         305fc:	e5c43022 	strb	r3, [r4, #34]	; fField34
         30600:	e5d03002 	ldrb	r3, [r0, #2]
         30604:	e5c43024 	strb	r3, [r4, #36]	; fField36
         30608:	e5d03003 	ldrb	r3, [r0, #3]
         3060c:	e5c43025 	strb	r3, [r4, #37]	; fField37
         30610:	e5d01004 	ldrb	r1, [r0, #4]	; fField4
         30614:	e5c41026 	strb	r1, [r4, #38]	; fField38
         30618:	e2800005 	add	r0, r0, #5	; 0x5
         3061c:	e584002c 	str	r0, [r4, #44]	; fField44
         30620:	e5d40024 	ldrb	r0, [r4, #36]	; fField36
         30624:	e1a00c00 	mov	r0, r0, lsl #24
         30628:	e1b00c40 	movs	r0, r0, asr #24
         3062c:	45c42024 	strmib	r2, [r4, #36]	; fField36
         30630:	e5d40022 	ldrb	r0, [r4, #34]	; fField34
         30634:	e2800007 	add	r0, r0, #7	; 0x7
         30638:	e1a001c0 	mov	r0, r0, asr #3
         3063c:	e5840028 	str	r0, [r4, #40]	; fField40
         30640:	e594101c 	ldr	r1, [r4, #28]	; fField28
         30644:	e5d40025 	ldrb	r0, [r4, #37]	; fField37
         30648:	e1a00c00 	mov	r0, r0, lsl #24
         3064c:	e1a00c40 	mov	r0, r0, asr #24
         30650:	e0411000 	sub	r1, r1, r0
         30654:	e5c41027 	strb	r1, [r4, #39]	; fField39
         30658:	e5d41023 	ldrb	r1, [r4, #35]	; fField35
         3065c:	e0410000 	sub	r0, r1, r0
         30660:	e5942018 	ldr	r2, [r4, #24]	; fField24
         30664:	e1a02c02 	mov	r2, r2, lsl #24
         30668:	e0800c42 	add	r0, r0, r2, asr #24
         3066c:	e3500000 	cmp	r0, #0	; 0x0
         30670:	c0410000 	subgt	r0, r1, r0
         30674:	c5c40023 	strgtb	r0, [r4, #35]	; fField35
         30678:	e5d40026 	ldrb	r0, [r4, #38]	; fField38
         3067c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAlertGlyph::GetAlertGlyph(long, PixelMap *)
 * Address: 00030680
 */
TAlertGlyph::GetAlertGlyph(long, PixelMap *) {
    /*
         30680:	e1a0c00d 	mov	ip, sp
         30684:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         30688:	e24cb004 	sub	fp, ip, #4	; 0x4
         3068c:	e1a05000 	mov	r5, r0
         30690:	e1a04002 	mov	r4, r2
         30694:	eb6c7c43 	bl	1b4f7a8 <TAlertGlyph::$GetAlertGlyphWidth(long)>
         30698:	e1a06000 	mov	r6, r0
         3069c:	e594100c 	ldr	r1, [r4, #12]	; fField12
         306a0:	e1a01821 	mov	r1, r1, lsr #16
         306a4:	e5940008 	ldr	r0, [r4, #8]	; fField8
         306a8:	e1a00820 	mov	r0, r0, lsr #16
         306ac:	e0410000 	sub	r0, r1, r0
         306b0:	e5c50020 	strb	r0, [r5, #32]	; fField32
         306b4:	e594100e 	ldr	r1, [r4, #14]
         306b8:	e1a01821 	mov	r1, r1, lsr #16
         306bc:	e594000a 	ldr	r0, [r4, #10]
         306c0:	e1a00820 	mov	r0, r0, lsr #16
         306c4:	e0410000 	sub	r0, r1, r0
         306c8:	e5c50021 	strb	r0, [r5, #33]	; fField33
         306cc:	e5941000 	ldr	r1, [r4]
         306d0:	e5d50020 	ldrb	r0, [r5, #32]	; fField32
         306d4:	e5942004 	ldr	r2, [r4, #4]	; fField4
         306d8:	e1a02842 	mov	r2, r2, asr #16
         306dc:	e0100092 	muls	r0, r2, r0
         306e0:	e3a02000 	mov	r2, #0	; 0x0
         306e4:	0a000002 	beq	306f4 <TAlertGlyph::GetAlertGlyph(long, PixelMap *)+0x74>
         306e8:	e4c12001 	strb	r2, [r1], #1
         306ec:	e2500001 	subs	r0, r0, #1	; 0x1
         306f0:	1afffffc 	bne	306e8 <TAlertGlyph::GetAlertGlyph(long, PixelMap *)+0x68>
         306f4:	e1a01004 	mov	r1, r4
         306f8:	e1a00005 	mov	r0, r5
         306fc:	eb6c888c 	bl	1b52934 <TAlertGlyph::$Portrait(PixelMap *)>
         30700:	e1a00006 	mov	r0, r6
         30704:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAlertGlyph::Portrait(PixelMap *)
 * Address: 00030708
 */
TAlertGlyph::Portrait(PixelMap *) {
    /*
         30708:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
         3070c:	e5d02023 	ldrb	r2, [r0, #35]	; fField35
         30710:	e5d0c027 	ldrb	ip, [r0, #39]	; fField39
         30714:	e082300c 	add	r3, r2, ip
         30718:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
         3071c:	e1530002 	cmp	r3, r2
         30720:	c042200c 	subgt	r2, r2, ip
         30724:	c5c02023 	strgtb	r2, [r0, #35]	; fField35
         30728:	e5d03022 	ldrb	r3, [r0, #34]	; fField34
         3072c:	e5d02024 	ldrb	r2, [r0, #36]	; fField36
         30730:	e1a02c02 	mov	r2, r2, lsl #24
         30734:	e1a02c42 	mov	r2, r2, asr #24
         30738:	e083e002 	add	lr, r3, r2
         3073c:	e5d03021 	ldrb	r3, [r0, #33]	; fField33
         30740:	e15e0003 	cmp	lr, r3
         30744:	c0433002 	subgt	r3, r3, r2
         30748:	c1a031c3 	movgt	r3, r3, asr #3
         3074c:	c5803028 	strgt	r3, [r0, #40]	; fField40
         30750:	e33c0000 	teq	ip, #0	; 0x0
         30754:	e5913000 	ldr	r3, [r1]
         30758:	1591e004 	ldrne	lr, [r1, #4]	; fField4
         3075c:	11a0e84e 	movne	lr, lr, asr #16
         30760:	10233e9c 	mlane	r3, ip, lr, r3
         30764:	e08331c2 	add	r3, r3, r2, asr #3
         30768:	e2026007 	and	r6, r2, #7	; 0x7
         3076c:	e2662008 	rsb	r2, r6, #8	; 0x8
         30770:	e20250ff 	and	r5, r2, #255	; 0xff
         30774:	e590402c 	ldr	r4, [r0, #44]	; fField44
         30778:	e5d0e023 	ldrb	lr, [r0, #35]	; fField35
         3077c:	e33e0000 	teq	lr, #0	; 0x0
         30780:	08bd81f0 	ldmeqia	sp!, {r4, r5, r6, r7, r8, pc}
         30784:	e1a02003 	mov	r2, r3
         30788:	e590c028 	ldr	ip, [r0, #40]	; fField40
         3078c:	e33c0000 	teq	ip, #0	; 0x0
         30790:	0a00000a 	beq	307c0 <TAlertGlyph::Portrait(PixelMap *)+0xb8>
         30794:	e5d47000 	ldrb	r7, [r4]
         30798:	e1a08637 	mov	r8, r7, lsr r6
         3079c:	e5d27000 	ldrb	r7, [r2]
         307a0:	e1887007 	orr	r7, r8, r7
         307a4:	e4c27001 	strb	r7, [r2], #1
         307a8:	e4d47001 	ldrb	r7, [r4], #1
         307ac:	e5d28000 	ldrb	r8, [r2]
         307b0:	e1887517 	orr	r7, r8, r7, lsl r5
         307b4:	e5c27000 	strb	r7, [r2]
         307b8:	e25cc001 	subs	ip, ip, #1	; 0x1
         307bc:	1afffff4 	bne	30794 <TAlertGlyph::Portrait(PixelMap *)+0x8c>
         307c0:	e5912004 	ldr	r2, [r1, #4]	; fField4
         307c4:	e0833842 	add	r3, r3, r2, asr #16
         307c8:	e25ee001 	subs	lr, lr, #1	; 0x1
         307cc:	1affffec 	bne	30784 <TAlertGlyph::Portrait(PixelMap *)+0x7c>
         307d0:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

