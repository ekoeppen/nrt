#include "include/TMonthView.h"

/**
 * Symbol: TMonthView::ClassID( const(void))
 * Address: 00120414
 */
TMonthView::ClassID( const(void)) {
    /*
        120414:	e3a00050 	mov	r0, #80	; 0x50
        120418:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMonthView::DerivedFrom( const(long))
 * Address: 0012041c
 */
TMonthView::DerivedFrom( const(long)) {
    /*
        12041c:	e1a0c00d 	mov	ip, sp
        120420:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        120424:	e24cb004 	sub	fp, ip, #4	; 0x4
        120428:	e3310050 	teq	r1, #80	; 0x50
        12042c:	0a000002 	beq	12043c <TMonthView::DerivedFrom( const(long))+0x20>
        120430:	eb050c62 	bl	2635c0 <TView::DerivedFrom( const(long))>
        120434:	e3300000 	teq	r0, #0	; 0x0
        120438:	0a000001 	beq	120444 <TMonthView::DerivedFrom( const(long))+0x28>
        12043c:	e3a00001 	mov	r0, #1	; 0x1
        120440:	ea000000 	b	120448 <TMonthView::DerivedFrom( const(long))+0x2c>
        120444:	e3a00000 	mov	r0, #0	; 0x0
        120448:	e20000ff 	and	r0, r0, #255	; 0xff
        12044c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMonthView::DrawDates(void)
 * Address: 00120450
 */
TMonthView::DrawDates(void) {
    /*
        120450:	e1a0c00d 	mov	ip, sp
        120454:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        120458:	e24cb004 	sub	fp, ip, #4	; 0x4
        12045c:	e1a04000 	mov	r4, r0
        120460:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        120464:	e1a0000d 	mov	r0, sp
        120468:	e3a0101c 	mov	r1, #28	; 0x1c
        12046c:	eb6afeea 	bl	1be001c <$ZeroBytes>
        120470:	e3a00902 	mov	r0, #32768	; 0x8000
        120474:	e58d0004 	str	r0, [sp, #4]
        120478:	e5940032 	ldr	r0, [r4, #50]	; fField50
        12047c:	e1a00820 	mov	r0, r0, lsr #16
        120480:	e1a00800 	mov	r0, r0, lsl #16
        120484:	e58d0008 	str	r0, [sp, #8]
        120488:	e3a00001 	mov	r0, #1	; 0x1
        12048c:	e58d0010 	str	r0, [sp, #16]
        120490:	e24dd020 	sub	sp, sp, #32	; 0x20
        120494:	e3a00002 	mov	r0, #2	; 0x2
        120498:	eb6a872b 	bl	1bc214c <$AllocateRefHandle(long)>
        12049c:	e58d0000 	str	r0, [sp]
        1204a0:	e3a00000 	mov	r0, #0	; 0x0
        1204a4:	e59d1000 	ldr	r1, [sp]
        1204a8:	e5a10004 	str	r0, [r1, #4]!
        1204ac:	e58d001c 	str	r0, [sp, #28]
        1204b0:	e284008c 	add	r0, r4, #140	; 0x8c
        1204b4:	e5901000 	ldr	r1, [r0]
        1204b8:	e5911000 	ldr	r1, [r1]
        1204bc:	e3310002 	teq	r1, #2	; 0x2
        1204c0:	e1a0100d 	mov	r1, sp
        1204c4:	059f0084 	ldreq	r0, [pc, #84]	; 120550 <TMonthView::DrawDates(void)+0x100>	; fField84
        1204c8:	eb6aa405 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        1204cc:	e24dd010 	sub	sp, sp, #16	; 0x10
        1204d0:	e1a0100d 	mov	r1, sp
        1204d4:	e28d0010 	add	r0, sp, #16	; 0x10
        1204d8:	eb68bcc1 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
        1204dc:	e5941030 	ldr	r1, [r4, #48]	; fField48
        1204e0:	e1a01841 	mov	r1, r1, asr #16
        1204e4:	e59d0000 	ldr	r0, [sp]
        1204e8:	e0412000 	sub	r2, r1, r0
        1204ec:	e0822fa2 	add	r2, r2, r2, lsr #31
        1204f0:	e08000c2 	add	r0, r0, r2, asr #1
        1204f4:	e1a00800 	mov	r0, r0, lsl #16
        1204f8:	e1a00840 	mov	r0, r0, asr #16
        1204fc:	e1510000 	cmp	r1, r0
        120500:	b1a00001 	movlt	r0, r1
        120504:	e1a08800 	mov	r8, r0, lsl #16
        120508:	e1a08848 	mov	r8, r8, asr #16
        12050c:	e24dd004 	sub	sp, sp, #4	; 0x4
        120510:	e28d0014 	add	r0, sp, #20	; 0x14
        120514:	e40d000c 	str	r0, [sp], -#12
        120518:	e2840060 	add	r0, r4, #96	; 0x60
        12051c:	eb6b7a89 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
        120520:	e1a07000 	mov	r7, r0
        120524:	e5940090 	ldr	r0, [r4, #144]	; fField144
        120528:	e5941078 	ldr	r1, [r4, #120]	; fField120
        12052c:	e0410000 	sub	r0, r1, r0
        120530:	e2801007 	add	r1, r0, #7	; 0x7
        120534:	e3a00007 	mov	r0, #7	; 0x7
        120538:	eb6a4900 	bl	1bb2940 <$__rt_sdiv>
        12053c:	e1a06001 	mov	r6, r1
        120540:	e3a05000 	mov	r5, #0	; 0x0
        120544:	e3570000 	cmp	r7, #0	; 0x0
        120548:	da000036 	ble	120628 <TMonthView::DrawDates(void)+0x1d8>
        12054c:	ea000007 	b	120570 <TMonthView::DrawDates(void)+0x120>
        120550:	00680048 	rsbeq	r0, r8, r8, asr #32
        120554:	e3550009 	cmp	r5, #9	; 0x9
        120558:	ba000004 	blt	120570 <TMonthView::DrawDates(void)+0x120>
        12055c:	e2850001 	add	r0, r5, #1	; 0x1
        120560:	eb6a48f7 	bl	1bb2944 <$__rt_sdiv10>
        120564:	e20000ff 	and	r0, r0, #255	; 0xff
        120568:	e2800030 	add	r0, r0, #48	; 0x30
        12056c:	ea000000 	b	120574 <TMonthView::DrawDates(void)+0x124>
        120570:	e3a00020 	mov	r0, #32	; 0x20
        120574:	eb6a135f 	bl	1ba52f8 <$U_CONST_CHAR>
        120578:	e5cd0001 	strb	r0, [sp, #1]
        12057c:	e1a00440 	mov	r0, r0, asr #8
        120580:	e5cd0000 	strb	r0, [sp]
        120584:	e2850001 	add	r0, r5, #1	; 0x1
        120588:	e1a05000 	mov	r5, r0
        12058c:	eb6a48ec 	bl	1bb2944 <$__rt_sdiv10>
        120590:	e20100ff 	and	r0, r1, #255	; 0xff
        120594:	e2800030 	add	r0, r0, #48	; 0x30
        120598:	eb6a1356 	bl	1ba52f8 <$U_CONST_CHAR>
        12059c:	e5cd0003 	strb	r0, [sp, #3]
        1205a0:	e1a00440 	mov	r0, r0, asr #8
        1205a4:	e5cd0002 	strb	r0, [sp, #2]
        1205a8:	e1a01006 	mov	r1, r6
        1205ac:	e3a00007 	mov	r0, #7	; 0x7
        1205b0:	eb6a48e2 	bl	1bb2940 <$__rt_sdiv>
        1205b4:	e5942032 	ldr	r2, [r4, #50]	; fField50
        1205b8:	e1a02822 	mov	r2, r2, lsr #16
        1205bc:	e0010192 	mul	r1, r2, r1
        1205c0:	e594204a 	ldr	r2, [r4, #74]	; fField74
        1205c4:	e1a02822 	mov	r2, r2, lsr #16
        1205c8:	e0811002 	add	r1, r1, r2
        1205cc:	e1a01801 	mov	r1, r1, lsl #16
        1205d0:	e5942030 	ldr	r2, [r4, #48]	; fField48
        1205d4:	e1a02822 	mov	r2, r2, lsr #16
        1205d8:	e0000092 	mul	r0, r2, r0
        1205dc:	e5942048 	ldr	r2, [r4, #72]	; fField72
        1205e0:	e1a02822 	mov	r2, r2, lsr #16
        1205e4:	e0822008 	add	r2, r2, r8
        1205e8:	e0800002 	add	r0, r0, r2
        1205ec:	e1a00800 	mov	r0, r0, lsl #16
        1205f0:	e3a03000 	mov	r3, #0	; 0x0
        1205f4:	e28d2040 	add	r2, sp, #64	; 0x40
        1205f8:	e92d000c 	stmdb	sp!, {r2, r3}
        1205fc:	e24dd008 	sub	sp, sp, #8	; 0x8
        120600:	e58d0004 	str	r0, [sp, #4]
        120604:	e58d1000 	str	r1, [sp]
        120608:	e28d201c 	add	r2, sp, #28	; 0x1c
        12060c:	e28d0010 	add	r0, sp, #16	; 0x10
        120610:	e3a01002 	mov	r1, #2	; 0x2
        120614:	eb68b83e 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        120618:	e28dd010 	add	sp, sp, #16	; 0x10
        12061c:	e2866001 	add	r6, r6, #1	; 0x1
        120620:	e1550007 	cmp	r5, r7
        120624:	baffffca 	blt	120554 <TMonthView::DrawDates(void)+0x104>
        120628:	e28dd020 	add	sp, sp, #32	; 0x20
        12062c:	e59d001c 	ldr	r0, [sp, #28]
        120630:	e3300000 	teq	r0, #0	; 0x0
        120634:	159d001c 	ldrne	r0, [sp, #28]
        120638:	1b68b427 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        12063c:	e59d0000 	ldr	r0, [sp]
        120640:	eb6a8add 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        120644:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TMonthView::RealDoCommand(RefVar const &)
 * Address: 00120648
 */
TMonthView::RealDoCommand(RefVar const &) {
    /*
        120648:	e1a0c00d 	mov	ip, sp
        12064c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        120650:	e24cb004 	sub	fp, ip, #4	; 0x4
        120654:	e1a05000 	mov	r5, r0
        120658:	e1a04001 	mov	r4, r1
        12065c:	e1a00001 	mov	r0, r1
        120660:	eb661738 	bl	1aa6348 <$CommandID(RefVar const &)>
        120664:	e330000b 	teq	r0, #11	; 0xb
        120668:	1a00000b 	bne	12069c <TMonthView::RealDoCommand(RefVar const &)+0x54>
        12066c:	e1a00004 	mov	r0, r4
        120670:	eb661738 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        120674:	eb660add 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        120678:	e1a01000 	mov	r1, r0
        12067c:	e1a00005 	mov	r0, r5
        120680:	eb65dd46 	bl	1a97ba0 <TMonthView::$HandleClick(TStrokePublic *)>
        120684:	e1a06000 	mov	r6, r0
        120688:	e1a00004 	mov	r0, r4
        12068c:	e3a01001 	mov	r1, #1	; 0x1
        120690:	eb66172f 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        120694:	e3360000 	teq	r6, #0	; 0x0
        120698:	1a000003 	bne	1206ac <TMonthView::RealDoCommand(RefVar const &)+0x64>
        12069c:	e1a01004 	mov	r1, r4
        1206a0:	e1a00005 	mov	r0, r5
        1206a4:	eb65fa30 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
        1206a8:	e1a06000 	mov	r6, r0
        1206ac:	e1a00006 	mov	r0, r6
        1206b0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMonthView::HandleClick(TStrokePublic *)
 * Address: 001206b4
 */
TMonthView::HandleClick(TStrokePublic *) {
    /*
        1206b4:	e1a0c00d 	mov	ip, sp
        1206b8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1206bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1206c0:	e1a04000 	mov	r4, r0
        1206c4:	e1a05001 	mov	r5, r1
        1206c8:	e3a0a000 	mov	sl, #0	; 0x0
        1206cc:	e5900030 	ldr	r0, [r0, #48]	; fField48
        1206d0:	e1b00840 	movs	r0, r0, asr #16
        1206d4:	0a0000de 	beq	120a54 <TMonthView::HandleClick(TStrokePublic *)+0x3a0>
        1206d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1206dc:	e5940090 	ldr	r0, [r4, #144]	; fField144
        1206e0:	e5941078 	ldr	r1, [r4, #120]	; fField120
        1206e4:	e0410000 	sub	r0, r1, r0
        1206e8:	e2801007 	add	r1, r0, #7	; 0x7
        1206ec:	e3a00007 	mov	r0, #7	; 0x7
        1206f0:	eb6a4892 	bl	1bb2940 <$__rt_sdiv>
        1206f4:	e58d1000 	str	r1, [sp]
        1206f8:	e59f1164 	ldr	r1, [pc, #164]	; 120864 <TMonthView::HandleClick(TStrokePublic *)+0x1b0>
        1206fc:	e1a00004 	mov	r0, r4
        120700:	eb6aa794 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        120704:	e3300002 	teq	r0, #2	; 0x2
        120708:	13a00001 	movne	r0, #1	; 0x1
        12070c:	03a00000 	moveq	r0, #0	; 0x0
        120710:	e20090ff 	and	r9, r0, #255	; 0xff
        120714:	e1a00005 	mov	r0, r5
        120718:	e3a01001 	mov	r1, #1	; 0x1
        12071c:	eb65e576 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        120720:	e3a00037 	mov	r0, #55	; 0x37
        120724:	eb668eb6 	bl	1ac4204 <$BusyBoxSend(long)>
        120728:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        12072c:	e1a01005 	mov	r1, r5
        120730:	e28d0018 	add	r0, sp, #24	; 0x18
        120734:	eb65d0c1 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        120738:	e28d1018 	add	r1, sp, #24	; 0x18
        12073c:	e1a00004 	mov	r0, r4
        120740:	eb65f5dc 	bl	1a9deb8 <TMonthView::$PointToDate(TPoint &)>
        120744:	e1a06000 	mov	r6, r0
        120748:	e59d001c 	ldr	r0, [sp, #28]
        12074c:	e0800006 	add	r0, r0, r6
        120750:	e2401001 	sub	r1, r0, #1	; 0x1
        120754:	e3a00007 	mov	r0, #7	; 0x7
        120758:	eb6a4878 	bl	1bb2940 <$__rt_sdiv>
        12075c:	e1a08001 	mov	r8, r1
        120760:	e1a01004 	mov	r1, r4
        120764:	e1a0000d 	mov	r0, sp
        120768:	eb6aafa8 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
        12076c:	e1a0100d 	mov	r1, sp
        120770:	e28d0004 	add	r0, sp, #4	; 0x4
        120774:	eb659b18 	bl	1a873dc <TRegionVar::$__ct(TRegion &)>
        120778:	e1a0000d 	mov	r0, sp
        12077c:	e3a01000 	mov	r1, #0	; 0x0
        120780:	eb65a33f 	bl	1a89484 <TRegion::$__dt(void)>
        120784:	e2841048 	add	r1, r4, #72	; 0x48
        120788:	e59d0018 	ldr	r0, [sp, #24]
        12078c:	e50d0004 	str	r0, [sp, -#4]
        120790:	eb68c869 	bl	1b5293c <$PtInRect(Point, Rect *)>
        120794:	e3300000 	teq	r0, #0	; 0x0
        120798:	0a00005c 	beq	120910 <TMonthView::HandleClick(TStrokePublic *)+0x25c>
        12079c:	e5d4003c 	ldrb	r0, [r4, #60]	; fField60
        1207a0:	e3300000 	teq	r0, #0	; 0x0
        1207a4:	01a00004 	moveq	r0, r4
        1207a8:	0b65e964 	bleq	1a9ad40 <TMonthView::$InvertSelection(void)>
        1207ac:	e2841050 	add	r1, r4, #80	; 0x50
        1207b0:	e1a02006 	mov	r2, r6
        1207b4:	e1a00004 	mov	r0, r4
        1207b8:	eb65bc07 	bl	1a8f7dc <TMonthView::$DateRect(TRect &, long)>
        1207bc:	e2840058 	add	r0, r4, #88	; 0x58
        1207c0:	e3a01000 	mov	r1, #0	; 0x0
        1207c4:	e5c01007 	strb	r1, [r0, #7]
        1207c8:	e5c01006 	strb	r1, [r0, #6]
        1207cc:	e5c01005 	strb	r1, [r0, #5]
        1207d0:	e5c01004 	strb	r1, [r0, #4]
        1207d4:	e5c01003 	strb	r1, [r0, #3]
        1207d8:	e5c01002 	strb	r1, [r0, #2]
        1207dc:	e5c01001 	strb	r1, [r0, #1]
        1207e0:	e5c01000 	strb	r1, [r0]
        1207e4:	e1a00004 	mov	r0, r4
        1207e8:	eb65e954 	bl	1a9ad40 <TMonthView::$InvertSelection(void)>
        1207ec:	e1a07006 	mov	r7, r6
        1207f0:	e1a00005 	mov	r0, r5
        1207f4:	eb65c42a 	bl	1a918a4 <TStrokePublic::$Done(void)>
        1207f8:	e3300000 	teq	r0, #0	; 0x0
        1207fc:	1a000041 	bne	120908 <TMonthView::HandleClick(TStrokePublic *)+0x254>
        120800:	e1a01005 	mov	r1, r5
        120804:	e28d0018 	add	r0, sp, #24	; 0x18
        120808:	eb65cc6d 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        12080c:	e28d1018 	add	r1, sp, #24	; 0x18
        120810:	e1a00004 	mov	r0, r4
        120814:	eb65f5a7 	bl	1a9deb8 <TMonthView::$PointToDate(TPoint &)>
        120818:	e1a0a000 	mov	sl, r0
        12081c:	e3390000 	teq	r9, #0	; 0x0
        120820:	1a00001f 	bne	1208a4 <TMonthView::HandleClick(TStrokePublic *)+0x1f0>
        120824:	e59d001c 	ldr	r0, [sp, #28]
        120828:	e080000a 	add	r0, r0, sl
        12082c:	e2401001 	sub	r1, r0, #1	; 0x1
        120830:	e3a00007 	mov	r0, #7	; 0x7
        120834:	eb6a4841 	bl	1bb2940 <$__rt_sdiv>
        120838:	e1380001 	teq	r8, r1
        12083c:	0a000018 	beq	1208a4 <TMonthView::HandleClick(TStrokePublic *)+0x1f0>
        120840:	e15a0006 	cmp	sl, r6
        120844:	c1510008 	cmpgt	r1, r8
        120848:	ca000002 	bgt	120858 <TMonthView::HandleClick(TStrokePublic *)+0x1a4>
        12084c:	e15a0006 	cmp	sl, r6
        120850:	b1510008 	cmplt	r1, r8
        120854:	aa000003 	bge	120868 <TMonthView::HandleClick(TStrokePublic *)+0x1b4>
        120858:	e0410008 	sub	r0, r1, r8
        12085c:	e080a006 	add	sl, r0, r6
        120860:	ea00000f 	b	1208a4 <TMonthView::HandleClick(TStrokePublic *)+0x1f0>
        120864:	006846a0 	rsbeq	r4, r8, r0, lsr #13
        120868:	e04a1006 	sub	r1, sl, r6
        12086c:	e3510006 	cmp	r1, #6	; 0x6
        120870:	da000004 	ble	120888 <TMonthView::HandleClick(TStrokePublic *)+0x1d4>
        120874:	e3a00007 	mov	r0, #7	; 0x7
        120878:	eb6a4830 	bl	1bb2940 <$__rt_sdiv>
        12087c:	e0600180 	rsb	r0, r0, r0, lsl #3
        120880:	e04aa000 	sub	sl, sl, r0
        120884:	ea000006 	b	1208a4 <TMonthView::HandleClick(TStrokePublic *)+0x1f0>
        120888:	e046100a 	sub	r1, r6, sl
        12088c:	e3510006 	cmp	r1, #6	; 0x6
        120890:	da000003 	ble	1208a4 <TMonthView::HandleClick(TStrokePublic *)+0x1f0>
        120894:	e3a00007 	mov	r0, #7	; 0x7
        120898:	eb6a4828 	bl	1bb2940 <$__rt_sdiv>
        12089c:	e0600180 	rsb	r0, r0, r0, lsl #3
        1208a0:	e080a00a 	add	sl, r0, sl
        1208a4:	e13a0007 	teq	sl, r7
        1208a8:	0a000010 	beq	1208f0 <TMonthView::HandleClick(TStrokePublic *)+0x23c>
        1208ac:	e3a01000 	mov	r1, #0	; 0x0
        1208b0:	e3a00000 	mov	r0, #0	; 0x0
        1208b4:	eb68af57 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        1208b8:	e1a00004 	mov	r0, r4
        1208bc:	eb65e91f 	bl	1a9ad40 <TMonthView::$InvertSelection(void)>
        1208c0:	e3390000 	teq	r9, #0	; 0x0
        1208c4:	01a01006 	moveq	r1, r6
        1208c8:	11a0100a 	movne	r1, sl
        1208cc:	e1a0200a 	mov	r2, sl
        1208d0:	e1a00004 	mov	r0, r4
        1208d4:	eb66127a 	bl	1aa52c4 <TMonthView::$UpdateRangeRect(long, long)>
        1208d8:	e1a00004 	mov	r0, r4
        1208dc:	eb65e917 	bl	1a9ad40 <TMonthView::$InvertSelection(void)>
        1208e0:	e3a01000 	mov	r1, #0	; 0x0
        1208e4:	e3a00000 	mov	r0, #0	; 0x0
        1208e8:	eb68af4c 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        1208ec:	e1a0700a 	mov	r7, sl
        1208f0:	e3a00001 	mov	r0, #1	; 0x1
        1208f4:	eb66127f 	bl	1aa52f8 <$Wait(unsigned long)>
        1208f8:	e1a00005 	mov	r0, r5
        1208fc:	eb65c3e8 	bl	1a918a4 <TStrokePublic::$Done(void)>
        120900:	e3300000 	teq	r0, #0	; 0x0
        120904:	0affffbd 	beq	120800 <TMonthView::HandleClick(TStrokePublic *)+0x14c>
        120908:	e3a0a001 	mov	sl, #1	; 0x1
        12090c:	ea00002b 	b	1209c0 <TMonthView::HandleClick(TStrokePublic *)+0x30c>
        120910:	e2841040 	add	r1, r4, #64	; 0x40
        120914:	e59d0018 	ldr	r0, [sp, #24]
        120918:	e50d0004 	str	r0, [sp, -#4]
        12091c:	eb68c806 	bl	1b5293c <$PtInRect(Point, Rect *)>
        120920:	e3300000 	teq	r0, #0	; 0x0
        120924:	0a000025 	beq	1209c0 <TMonthView::HandleClick(TStrokePublic *)+0x30c>
        120928:	e3390000 	teq	r9, #0	; 0x0
        12092c:	1a000004 	bne	120944 <TMonthView::HandleClick(TStrokePublic *)+0x290>
        120930:	e5940088 	ldr	r0, [r4, #136]	; fField136
        120934:	e5900000 	ldr	r0, [r0]
        120938:	e3300002 	teq	r0, #2	; 0x2
        12093c:	13a00001 	movne	r0, #1	; 0x1
        120940:	1a000000 	bne	120948 <TMonthView::HandleClick(TStrokePublic *)+0x294>
        120944:	e3a00000 	mov	r0, #0	; 0x0
        120948:	e210a0ff 	ands	sl, r0, #255	; 0xff
        12094c:	0a00001b 	beq	1209c0 <TMonthView::HandleClick(TStrokePublic *)+0x30c>
        120950:	e5d4003c 	ldrb	r0, [r4, #60]	; fField60
        120954:	e3300000 	teq	r0, #0	; 0x0
        120958:	01a00004 	moveq	r0, r4
        12095c:	0b65e8f7 	bleq	1a9ad40 <TMonthView::$InvertSelection(void)>
        120960:	e59d001a 	ldr	r0, [sp, #26]
        120964:	e1a00840 	mov	r0, r0, asr #16
        120968:	e5941042 	ldr	r1, [r4, #66]	; fField66
        12096c:	e0401841 	sub	r1, r0, r1, asr #16
        120970:	e5940032 	ldr	r0, [r4, #50]	; fField50
        120974:	e1a00840 	mov	r0, r0, asr #16
        120978:	eb6a47f0 	bl	1bb2940 <$__rt_sdiv>
        12097c:	e59d101c 	ldr	r1, [sp, #28]
        120980:	e0400001 	sub	r0, r0, r1
        120984:	e2801007 	add	r1, r0, #7	; 0x7
        120988:	e3a00007 	mov	r0, #7	; 0x7
        12098c:	eb6a47eb 	bl	1bb2940 <$__rt_sdiv>
        120990:	e2816001 	add	r6, r1, #1	; 0x1
        120994:	e286701c 	add	r7, r6, #28	; 0x1c
        120998:	e2840060 	add	r0, r4, #96	; 0x60
        12099c:	eb6b7969 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
        1209a0:	e1500007 	cmp	r0, r7
        1209a4:	32477007 	subcc	r7, r7, #7	; 0x7
        1209a8:	e1a02007 	mov	r2, r7
        1209ac:	e1a01006 	mov	r1, r6
        1209b0:	e1a00004 	mov	r0, r4
        1209b4:	eb661242 	bl	1aa52c4 <TMonthView::$UpdateRangeRect(long, long)>
        1209b8:	e1a00004 	mov	r0, r4
        1209bc:	eb65e8df 	bl	1a9ad40 <TMonthView::$InvertSelection(void)>
        1209c0:	e59d5004 	ldr	r5, [sp, #4]
        1209c4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1209c8:	e1a0000d 	mov	r0, sp
        1209cc:	eb6b3b74 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1209d0:	e49d0004 	ldr	r0, [sp], #4
        1209d4:	e5900024 	ldr	r0, [r0, #36]
        1209d8:	e58d0000 	str	r0, [sp]
        1209dc:	e1a00005 	mov	r0, r5
        1209e0:	e59d1000 	ldr	r1, [sp]
        1209e4:	eb68b332 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        1209e8:	e28dd004 	add	sp, sp, #4	; 0x4
        1209ec:	e33a0000 	teq	sl, #0	; 0x0
        1209f0:	0a000013 	beq	120a44 <TMonthView::HandleClick(TStrokePublic *)+0x390>
        1209f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1209f8:	e3390000 	teq	r9, #0	; 0x0
        1209fc:	01a01006 	moveq	r1, r6
        120a00:	11a01007 	movne	r1, r7
        120a04:	e1a02007 	mov	r2, r7
        120a08:	e1a00004 	mov	r0, r4
        120a0c:	eb661229 	bl	1aa52b8 <TMonthView::$UpdateFrame(long, long)>
        120a10:	e3a03000 	mov	r3, #0	; 0x0
        120a14:	e92d0008 	stmdb	sp!, {r3}
        120a18:	e3a00002 	mov	r0, #2	; 0x2
        120a1c:	eb6a85ca 	bl	1bc214c <$AllocateRefHandle(long)>
        120a20:	e58d0004 	str	r0, [sp, #4]
        120a24:	e28d2004 	add	r2, sp, #4	; 0x4
        120a28:	e59f102c 	ldr	r1, [pc, #2c]	; 120a5c <TMonthView::HandleClick(TStrokePublic *)+0x3a8>
        120a2c:	e1a00004 	mov	r0, r4
        120a30:	e3a03001 	mov	r3, #1	; 0x1
        120a34:	eb6aaae9 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        120a38:	e5bd0004 	ldr	r0, [sp, #4]!
        120a3c:	eb6a89de 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        120a40:	e28dd004 	add	sp, sp, #4	; 0x4
        120a44:	e28d0004 	add	r0, sp, #4	; 0x4
        120a48:	e3a01000 	mov	r1, #0	; 0x0
        120a4c:	eb659e7c 	bl	1a88444 <TRegionVar::$__dt(void)>
        120a50:	e28dd020 	add	sp, sp, #32	; 0x20
        120a54:	e1a0000a 	mov	r0, sl
        120a58:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        120a5c:	00683918 	rsbeq	r3, r8, r8, lsl r9
    */
}

/**
 * Symbol: TMonthView::UpdateFrame(long, long)
 * Address: 00120a60
 */
TMonthView::UpdateFrame(long, long) {
    /*
        120a60:	e1a0c00d 	mov	ip, sp
        120a64:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        120a68:	e24cb004 	sub	fp, ip, #4	; 0x4
        120a6c:	e1a05000 	mov	r5, r0
        120a70:	e1a04001 	mov	r4, r1
        120a74:	e1a06002 	mov	r6, r2
        120a78:	e24dd004 	sub	sp, sp, #4	; 0x4
        120a7c:	e3a00000 	mov	r0, #0	; 0x0
        120a80:	eb65ecc5 	bl	1a9bd9c <$MakeArray(long)>
        120a84:	eb6a85b0 	bl	1bc214c <$AllocateRefHandle(long)>
        120a88:	e58d0000 	str	r0, [sp]
        120a8c:	e2850024 	add	r0, r5, #36	; 0x24
        120a90:	e1a0200d 	mov	r2, sp
        120a94:	e59f10d4 	ldr	r1, [pc, #d4]	; 120b70 <TMonthView::UpdateFrame(long, long)+0x110>
        120a98:	eb6a9634 	bl	1bc6370 <$SetVariable__FRC6RefVarN21>
        120a9c:	e1560004 	cmp	r6, r4
        120aa0:	b1a00006 	movlt	r0, r6
        120aa4:	b1a06004 	movlt	r6, r4
        120aa8:	b1a04000 	movlt	r4, r0
        120aac:	e24dd028 	sub	sp, sp, #40	; 0x28
        120ab0:	e0461004 	sub	r1, r6, r4
        120ab4:	e3a00007 	mov	r0, #7	; 0x7
        120ab8:	eb6a47a0 	bl	1bb2940 <$__rt_sdiv>
        120abc:	e1a08000 	mov	r8, r0
        120ac0:	e1a07001 	mov	r7, r1
        120ac4:	e1a0000d 	mov	r0, sp
        120ac8:	eb6b791b 	bl	1bfef3c <TDate::$__ct(void)>
        120acc:	e5950060 	ldr	r0, [r5, #96]	; fField96
        120ad0:	e58d0000 	str	r0, [sp]
        120ad4:	e5b50064 	ldr	r0, [r5, #100]!	; fField100
        120ad8:	e3a05000 	mov	r5, #0	; 0x0
        120adc:	e3580000 	cmp	r8, #0	; 0x0
        120ae0:	e58d0004 	str	r0, [sp, #4]
        120ae4:	ba000018 	blt	120b4c <TMonthView::UpdateFrame(long, long)+0xec>
        120ae8:	e3a06000 	mov	r6, #0	; 0x0
        120aec:	e3570000 	cmp	r7, #0	; 0x0
        120af0:	ba000012 	blt	120b40 <TMonthView::UpdateFrame(long, long)+0xe0>
        120af4:	e0650185 	rsb	r0, r5, r5, lsl #3
        120af8:	e0809004 	add	r9, r0, r4
        120afc:	e24dd004 	sub	sp, sp, #4	; 0x4
        120b00:	e0890006 	add	r0, r9, r6
        120b04:	e58d000c 	str	r0, [sp, #12]
        120b08:	e28d0004 	add	r0, sp, #4	; 0x4
        120b0c:	eb6b7d1f 	bl	1bfff90 <TDate::$TotalMinutes( const(void))>
        120b10:	e1a00100 	mov	r0, r0, lsl #2
        120b14:	eb6a858c 	bl	1bc214c <$AllocateRefHandle(long)>
        120b18:	e58d0000 	str	r0, [sp]
        120b1c:	e1a0100d 	mov	r1, sp
        120b20:	e28d002c 	add	r0, sp, #44	; 0x2c
        120b24:	eb6a857f 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        120b28:	e59d0000 	ldr	r0, [sp]
        120b2c:	eb6a89a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        120b30:	e28dd004 	add	sp, sp, #4	; 0x4
        120b34:	e2866001 	add	r6, r6, #1	; 0x1
        120b38:	e1560007 	cmp	r6, r7
        120b3c:	daffffee 	ble	120afc <TMonthView::UpdateFrame(long, long)+0x9c>
        120b40:	e2855001 	add	r5, r5, #1	; 0x1
        120b44:	e1550008 	cmp	r5, r8
        120b48:	daffffe6 	ble	120ae8 <TMonthView::UpdateFrame(long, long)+0x88>
        120b4c:	e59d0024 	ldr	r0, [sp, #36]
        120b50:	eb6a8999 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        120b54:	e59d0020 	ldr	r0, [sp, #32]
        120b58:	eb6a8997 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        120b5c:	e59d001c 	ldr	r0, [sp, #28]
        120b60:	eb6a8995 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        120b64:	e5bd0028 	ldr	r0, [sp, #40]!
        120b68:	eb6a8993 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        120b6c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        120b70:	006844f8 	streqd	r4, [r8], -#72	; fField72
    */
}

/**
 * Symbol: TMonthView::UpdateRangeRect(long, long)
 * Address: 00120b74
 */
TMonthView::UpdateRangeRect(long, long) {
    /*
        120b74:	e1a0c00d 	mov	ip, sp
        120b78:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        120b7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        120b80:	e1a04000 	mov	r4, r0
        120b84:	e1a05001 	mov	r5, r1
        120b88:	e1a06002 	mov	r6, r2
        120b8c:	e24dd010 	sub	sp, sp, #16	; 0x10
        120b90:	e5900078 	ldr	r0, [r0, #120]	; fField120
        120b94:	e5941090 	ldr	r1, [r4, #144]	; fField144
        120b98:	e0400001 	sub	r0, r0, r1
        120b9c:	e2801007 	add	r1, r0, #7	; 0x7
        120ba0:	e3a00007 	mov	r0, #7	; 0x7
        120ba4:	eb6a4765 	bl	1bb2940 <$__rt_sdiv>
        120ba8:	e1a08001 	mov	r8, r1
        120bac:	e0810005 	add	r0, r1, r5
        120bb0:	e2401001 	sub	r1, r0, #1	; 0x1
        120bb4:	e3a00007 	mov	r0, #7	; 0x7
        120bb8:	eb6a4760 	bl	1bb2940 <$__rt_sdiv>
        120bbc:	e1a07001 	mov	r7, r1
        120bc0:	e0880006 	add	r0, r8, r6
        120bc4:	e2401001 	sub	r1, r0, #1	; 0x1
        120bc8:	e3a00007 	mov	r0, #7	; 0x7
        120bcc:	eb6a475b 	bl	1bb2940 <$__rt_sdiv>
        120bd0:	e1a0a001 	mov	sl, r1
        120bd4:	e1a02005 	mov	r2, r5
        120bd8:	e28d1008 	add	r1, sp, #8	; 0x8
        120bdc:	e1a00004 	mov	r0, r4
        120be0:	eb65bafd 	bl	1a8f7dc <TMonthView::$DateRect(TRect &, long)>
        120be4:	e1a02006 	mov	r2, r6
        120be8:	e1a0100d 	mov	r1, sp
        120bec:	e1a00004 	mov	r0, r4
        120bf0:	eb65baf9 	bl	1a8f7dc <TMonthView::$DateRect(TRect &, long)>
        120bf4:	e2840058 	add	r0, r4, #88	; 0x58
        120bf8:	e1a09000 	mov	r9, r0
        120bfc:	e3a01000 	mov	r1, #0	; 0x0
        120c00:	e5c01007 	strb	r1, [r0, #7]
        120c04:	e5c01006 	strb	r1, [r0, #6]
        120c08:	e5c01005 	strb	r1, [r0, #5]
        120c0c:	e5c01004 	strb	r1, [r0, #4]
        120c10:	e5c01003 	strb	r1, [r0, #3]
        120c14:	e5c01002 	strb	r1, [r0, #2]
        120c18:	e5c01001 	strb	r1, [r0, #1]
        120c1c:	e5c01000 	strb	r1, [r0]
        120c20:	e2848050 	add	r8, r4, #80	; 0x50
        120c24:	e1560005 	cmp	r6, r5
        120c28:	028d0008 	addeq	r0, sp, #8	; 0x8
        120c2c:	08905000 	ldmeqia	r0, {ip, lr}
        120c30:	08885000 	stmeqia	r8, {ip, lr}
        120c34:	0a000049 	beq	120d60 <TMonthView::UpdateRangeRect(long, long)+0x1ec>
        120c38:	da00000f 	ble	120c7c <TMonthView::UpdateRangeRect(long, long)+0x108>
        120c3c:	e15a0007 	cmp	sl, r7
        120c40:	ba00000d 	blt	120c7c <TMonthView::UpdateRangeRect(long, long)+0x108>
        120c44:	e59d0008 	ldr	r0, [sp, #8]
        120c48:	e5c40053 	strb	r0, [r4, #83]	; fField83
        120c4c:	e1a00440 	mov	r0, r0, asr #8
        120c50:	e5c40052 	strb	r0, [r4, #82]	; fField82
        120c54:	e59d000a 	ldr	r0, [sp, #10]
        120c58:	e5c40051 	strb	r0, [r4, #81]	; fField81
        120c5c:	e1a00440 	mov	r0, r0, asr #8
        120c60:	e5c40050 	strb	r0, [r4, #80]	; fField80
        120c64:	e59d0004 	ldr	r0, [sp, #4]
        120c68:	e5c40057 	strb	r0, [r4, #87]	; fField87
        120c6c:	e1a00440 	mov	r0, r0, asr #8
        120c70:	e5c40056 	strb	r0, [r4, #86]	; fField86
        120c74:	e59d0006 	ldr	r0, [sp, #6]
        120c78:	ea000010 	b	120cc0 <TMonthView::UpdateRangeRect(long, long)+0x14c>
        120c7c:	e1560005 	cmp	r6, r5
        120c80:	aa000012 	bge	120cd0 <TMonthView::UpdateRangeRect(long, long)+0x15c>
        120c84:	e15a0007 	cmp	sl, r7
        120c88:	ca000010 	bgt	120cd0 <TMonthView::UpdateRangeRect(long, long)+0x15c>
        120c8c:	e59d0000 	ldr	r0, [sp]
        120c90:	e5c40053 	strb	r0, [r4, #83]	; fField83
        120c94:	e1a00440 	mov	r0, r0, asr #8
        120c98:	e5c40052 	strb	r0, [r4, #82]	; fField82
        120c9c:	e59d0002 	ldr	r0, [sp, #2]
        120ca0:	e5c40051 	strb	r0, [r4, #81]	; fField81
        120ca4:	e1a00440 	mov	r0, r0, asr #8
        120ca8:	e5c40050 	strb	r0, [r4, #80]	; fField80
        120cac:	e59d000c 	ldr	r0, [sp, #12]
        120cb0:	e5c40057 	strb	r0, [r4, #87]	; fField87
        120cb4:	e1a00440 	mov	r0, r0, asr #8
        120cb8:	e5c40056 	strb	r0, [r4, #86]	; fField86
        120cbc:	e59d000e 	ldr	r0, [sp, #14]
        120cc0:	e5c40055 	strb	r0, [r4, #85]	; fField85
        120cc4:	e1a00440 	mov	r0, r0, asr #8
        120cc8:	e5c40054 	strb	r0, [r4, #84]	; fField84
        120ccc:	ea000023 	b	120d60 <TMonthView::UpdateRangeRect(long, long)+0x1ec>
        120cd0:	e24dd010 	sub	sp, sp, #16	; 0x10
        120cd4:	e0452007 	sub	r2, r5, r7
        120cd8:	e28d1008 	add	r1, sp, #8	; 0x8
        120cdc:	e1a00004 	mov	r0, r4
        120ce0:	eb65babd 	bl	1a8f7dc <TMonthView::$DateRect(TRect &, long)>
        120ce4:	e2670006 	rsb	r0, r7, #6	; 0x6
        120ce8:	e0802005 	add	r2, r0, r5
        120cec:	e1a0100d 	mov	r1, sp
        120cf0:	e1a00004 	mov	r0, r4
        120cf4:	eb65bab8 	bl	1a8f7dc <TMonthView::$DateRect(TRect &, long)>
        120cf8:	e1560005 	cmp	r6, r5
        120cfc:	aa000008 	bge	120d24 <TMonthView::UpdateRangeRect(long, long)+0x1b0>
        120d00:	e28d0010 	add	r0, sp, #16	; 0x10
        120d04:	e8905000 	ldmia	r0, {ip, lr}
        120d08:	e8885000 	stmia	r8, {ip, lr}
        120d0c:	e59d0004 	ldr	r0, [sp, #4]
        120d10:	e5c40057 	strb	r0, [r4, #87]	; fField87
        120d14:	e1a00440 	mov	r0, r0, asr #8
        120d18:	e5c40056 	strb	r0, [r4, #86]	; fField86
        120d1c:	e28d0018 	add	r0, sp, #24	; 0x18
        120d20:	ea000007 	b	120d44 <TMonthView::UpdateRangeRect(long, long)+0x1d0>
        120d24:	e28d0018 	add	r0, sp, #24	; 0x18
        120d28:	e8901008 	ldmia	r0, {r3, ip}
        120d2c:	e8881008 	stmia	r8, {r3, ip}
        120d30:	e59d0004 	ldr	r0, [sp, #4]
        120d34:	e5c40057 	strb	r0, [r4, #87]	; fField87
        120d38:	e1a00440 	mov	r0, r0, asr #8
        120d3c:	e5c40056 	strb	r0, [r4, #86]	; fField86
        120d40:	e28d0010 	add	r0, sp, #16	; 0x10
        120d44:	e8901008 	ldmia	r0, {r3, ip}
        120d48:	e8891008 	stmia	r9, {r3, ip}
        120d4c:	e59d0008 	ldr	r0, [sp, #8]
        120d50:	e5c4005b 	strb	r0, [r4, #91]	; fField91
        120d54:	e1a00440 	mov	r0, r0, asr #8
        120d58:	e5c4005a 	strb	r0, [r4, #90]	; fField90
        120d5c:	e28dd010 	add	sp, sp, #16	; 0x10
        120d60:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TMonthView::DateRect(TRect &, long)
 * Address: 00120d64
 */
TMonthView::DateRect(TRect &, long) {
    /*
        120d64:	e1a0c00d 	mov	ip, sp
        120d68:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        120d6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        120d70:	e1a04000 	mov	r4, r0
        120d74:	e1a05001 	mov	r5, r1
        120d78:	e1a06002 	mov	r6, r2
        120d7c:	e5901078 	ldr	r1, [r0, #120]	; fField120
        120d80:	e5900090 	ldr	r0, [r0, #144]	; fField144
        120d84:	e0410000 	sub	r0, r1, r0
        120d88:	e2801007 	add	r1, r0, #7	; 0x7
        120d8c:	e3a00007 	mov	r0, #7	; 0x7
        120d90:	eb6a46ea 	bl	1bb2940 <$__rt_sdiv>
        120d94:	e0810006 	add	r0, r1, r6
        120d98:	e2401001 	sub	r1, r0, #1	; 0x1
        120d9c:	e3a00007 	mov	r0, #7	; 0x7
        120da0:	eb6a46e6 	bl	1bb2940 <$__rt_sdiv>
        120da4:	e594304a 	ldr	r3, [r4, #74]	; fField74
        120da8:	e1a03823 	mov	r3, r3, lsr #16
        120dac:	e5942032 	ldr	r2, [r4, #50]	; fField50
        120db0:	e1a02822 	mov	r2, r2, lsr #16
        120db4:	e0213192 	mla	r1, r2, r1, r3
        120db8:	e5c51003 	strb	r1, [r5, #3]
        120dbc:	e1a01441 	mov	r1, r1, asr #8
        120dc0:	e5c51002 	strb	r1, [r5, #2]
        120dc4:	e5942048 	ldr	r2, [r4, #72]	; fField72
        120dc8:	e1a02822 	mov	r2, r2, lsr #16
        120dcc:	e5941030 	ldr	r1, [r4, #48]	; fField48
        120dd0:	e1a01821 	mov	r1, r1, lsr #16
        120dd4:	e0202091 	mla	r0, r1, r0, r2
        120dd8:	e2800001 	add	r0, r0, #1	; 0x1
        120ddc:	e5c50001 	strb	r0, [r5, #1]
        120de0:	e1a00440 	mov	r0, r0, asr #8
        120de4:	e5c50000 	strb	r0, [r5]
        120de8:	e5951002 	ldr	r1, [r5, #2]
        120dec:	e1a01821 	mov	r1, r1, lsr #16
        120df0:	e5940032 	ldr	r0, [r4, #50]	; fField50
        120df4:	e1a00820 	mov	r0, r0, lsr #16
        120df8:	e0810000 	add	r0, r1, r0
        120dfc:	e5c50007 	strb	r0, [r5, #7]
        120e00:	e1a00440 	mov	r0, r0, asr #8
        120e04:	e5c50006 	strb	r0, [r5, #6]
        120e08:	e5940030 	ldr	r0, [r4, #48]	; fField48
        120e0c:	e1a00820 	mov	r0, r0, lsr #16
        120e10:	e5951000 	ldr	r1, [r5]
        120e14:	e1a01821 	mov	r1, r1, lsr #16
        120e18:	e0800001 	add	r0, r0, r1
        120e1c:	e5c50005 	strb	r0, [r5, #5]
        120e20:	e1a00440 	mov	r0, r0, asr #8
        120e24:	e5c50004 	strb	r0, [r5, #4]
        120e28:	e5b40038 	ldr	r0, [r4, #56]!	; fField56
        120e2c:	e3300000 	teq	r0, #0	; 0x0
        120e30:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        120e34:	e2850006 	add	r0, r5, #6	; 0x6
        120e38:	e5901000 	ldr	r1, [r0]
        120e3c:	e1a01821 	mov	r1, r1, lsr #16
        120e40:	e2411001 	sub	r1, r1, #1	; 0x1
        120e44:	e5c01001 	strb	r1, [r0, #1]
        120e48:	e1a01441 	mov	r1, r1, asr #8
        120e4c:	e5c01000 	strb	r1, [r0]
        120e50:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMonthView::InvertSelection(void)
 * Address: 00120e54
 */
TMonthView::InvertSelection(void) {
    /*
        120e54:	e1a0c00d 	mov	ip, sp
        120e58:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        120e5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        120e60:	e1a04000 	mov	r4, r0
        120e64:	e2800050 	add	r0, r0, #80	; 0x50
        120e68:	e3a05004 	mov	r5, #4	; 0x4
        120e6c:	e1a01005 	mov	r1, r5
        120e70:	e1a02005 	mov	r2, r5
        120e74:	eb68be7c 	bl	1b5086c <$InvertRoundRect__FP4RectlT2>
        120e78:	e2840058 	add	r0, r4, #88	; 0x58
        120e7c:	e1a04000 	mov	r4, r0
        120e80:	eb68b624 	bl	1b4e718 <$EmptyRect(Rect *)>
        120e84:	e3300000 	teq	r0, #0	; 0x0
        120e88:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        120e8c:	e1a00004 	mov	r0, r4
        120e90:	e1a01005 	mov	r1, r5
        120e94:	e1a02005 	mov	r2, r5
        120e98:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        120e9c:	ea68be72 	b	1b5086c <$InvertRoundRect__FP4RectlT2>
    */
}

/**
 * Symbol: TMonthView::PointToDate(TPoint &)
 * Address: 00120ea0
 */
TMonthView::PointToDate(TPoint &) {
    /*
        120ea0:	e1a0c00d 	mov	ip, sp
        120ea4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        120ea8:	e24cb004 	sub	fp, ip, #4	; 0x4
        120eac:	e1a04000 	mov	r4, r0
        120eb0:	e1a05001 	mov	r5, r1
        120eb4:	e5911002 	ldr	r1, [r1, #2]
        120eb8:	e1a01841 	mov	r1, r1, asr #16
        120ebc:	e590004a 	ldr	r0, [r0, #74]	; fField74
        120ec0:	e0411840 	sub	r1, r1, r0, asr #16
        120ec4:	e5940032 	ldr	r0, [r4, #50]	; fField50
        120ec8:	e1a00840 	mov	r0, r0, asr #16
        120ecc:	eb6a469b 	bl	1bb2940 <$__rt_sdiv>
        120ed0:	e1a06000 	mov	r6, r0
        120ed4:	e5940048 	ldr	r0, [r4, #72]	; fField72
        120ed8:	e5951000 	ldr	r1, [r5]
        120edc:	e1a01841 	mov	r1, r1, asr #16
        120ee0:	e0411840 	sub	r1, r1, r0, asr #16
        120ee4:	e5940030 	ldr	r0, [r4, #48]	; fField48
        120ee8:	e1a00840 	mov	r0, r0, asr #16
        120eec:	eb6a4693 	bl	1bb2940 <$__rt_sdiv>
        120ef0:	e1a05000 	mov	r5, r0
        120ef4:	e5940090 	ldr	r0, [r4, #144]	; fField144
        120ef8:	e5941078 	ldr	r1, [r4, #120]	; fField120
        120efc:	e0410000 	sub	r0, r1, r0
        120f00:	e2801007 	add	r1, r0, #7	; 0x7
        120f04:	e3a00007 	mov	r0, #7	; 0x7
        120f08:	eb6a468c 	bl	1bb2940 <$__rt_sdiv>
        120f0c:	e1a07001 	mov	r7, r1
        120f10:	e2840060 	add	r0, r4, #96	; 0x60
        120f14:	eb6b780b 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
        120f18:	e0800007 	add	r0, r0, r7
        120f1c:	e3500023 	cmp	r0, #35	; 0x23
        120f20:	83a00005 	movhi	r0, #5	; 0x5
        120f24:	93a00004 	movls	r0, #4	; 0x4
        120f28:	e3560000 	cmp	r6, #0	; 0x0
        120f2c:	b3a06000 	movlt	r6, #0	; 0x0
        120f30:	ba000001 	blt	120f3c <TMonthView::PointToDate(TPoint &)+0x9c>
        120f34:	e3560006 	cmp	r6, #6	; 0x6
        120f38:	c3a06006 	movgt	r6, #6	; 0x6
        120f3c:	e3550000 	cmp	r5, #0	; 0x0
        120f40:	b3a05000 	movlt	r5, #0	; 0x0
        120f44:	e1550000 	cmp	r5, r0
        120f48:	c1a05000 	movgt	r5, r0
        120f4c:	e0650185 	rsb	r0, r5, r5, lsl #3
        120f50:	e0800006 	add	r0, r0, r6
        120f54:	e0400007 	sub	r0, r0, r7
        120f58:	e2800001 	add	r0, r0, #1	; 0x1
        120f5c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMonthView::Constructor(RefVar const &, TView *)
 * Address: 00120f88
 */
TMonthView::Constructor(RefVar const &, TView *) {
    /*
        120f88:	e1a0c00d 	mov	ip, sp
        120f8c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        120f90:	e24cb004 	sub	fp, ip, #4	; 0x4
        120f94:	e1a04000 	mov	r4, r0
        120f98:	eb6aa14e 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
        120f9c:	e59f10b0 	ldr	r1, [pc, #b0]	; 121054 <TMonthView::Constructor(RefVar const &, TView *)+0xcc>
        120fa0:	e1a00004 	mov	r0, r4
        120fa4:	eb6aa56b 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        120fa8:	e3300002 	teq	r0, #2	; 0x2
        120fac:	13a00001 	movne	r0, #1	; 0x1
        120fb0:	03a00000 	moveq	r0, #0	; 0x0
        120fb4:	e5c4003c 	strb	r0, [r4, #60]	; fField60
        120fb8:	e3a00002 	mov	r0, #2	; 0x2
        120fbc:	e5c40035 	strb	r0, [r4, #53]	; fField53
        120fc0:	e3a06000 	mov	r6, #0	; 0x0
        120fc4:	e5c46034 	strb	r6, [r4, #52]	; fField52
        120fc8:	e59f1088 	ldr	r1, [pc, #88]	; 121058 <TMonthView::Constructor(RefVar const &, TView *)+0xd0>
        120fcc:	e1a07001 	mov	r7, r1
        120fd0:	e1a00004 	mov	r0, r4
        120fd4:	eb6aa55f 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        120fd8:	eb6a845b 	bl	1bc214c <$AllocateRefHandle(long)>
        120fdc:	e1a05000 	mov	r5, r0
        120fe0:	e5900000 	ldr	r0, [r0]
        120fe4:	e3300002 	teq	r0, #2	; 0x2
        120fe8:	1a000010 	bne	121030 <TMonthView::Constructor(RefVar const &, TView *)+0xa8>
        120fec:	e1a00007 	mov	r0, r7
        120ff0:	eb65d6c3 	bl	1a96b04 <$GetPreference(RefVar const &)>
        120ff4:	e5850000 	str	r0, [r5]
        120ff8:	e24dd004 	sub	sp, sp, #4	; 0x4
        120ffc:	e3300002 	teq	r0, #2	; 0x2
        121000:	1a000009 	bne	12102c <TMonthView::Constructor(RefVar const &, TView *)+0xa4>
        121004:	eb65d2a8 	bl	1a95aac <$GetCurrentLocale(void)>
        121008:	eb6a844f 	bl	1bc214c <$AllocateRefHandle(long)>
        12100c:	e58d0000 	str	r0, [sp]
        121010:	e1a0000d 	mov	r0, sp
        121014:	e1a01007 	mov	r1, r7
        121018:	e3a02000 	mov	r2, #0	; 0x0
        12101c:	eb6a8c91 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        121020:	e5850000 	str	r0, [r5]
        121024:	e59d0000 	ldr	r0, [sp]
        121028:	eb6a8863 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12102c:	e28dd004 	add	sp, sp, #4	; 0x4
        121030:	e5950000 	ldr	r0, [r5]
        121034:	e3300002 	teq	r0, #2	; 0x2
        121038:	0a000007 	beq	12105c <TMonthView::Constructor(RefVar const &, TView *)+0xd4>
        12103c:	e3100003 	tst	r0, #3	; 0x3
        121040:	01a00140 	moveq	r0, r0, asr #2
        121044:	0a000000 	beq	12104c <TMonthView::Constructor(RefVar const &, TView *)+0xc4>
        121048:	eb6a8433 	bl	1bc211c <$_RINTError(long)>
        12104c:	e5840090 	str	r0, [r4, #144]	; fField144
        121050:	ea000002 	b	121060 <TMonthView::Constructor(RefVar const &, TView *)+0xd8>
        121054:	00683a88 	rsbeq	r3, r8, r8, lsl #21
        121058:	00682db0 	streqh	r2, [r8], -#208
        12105c:	e5846090 	str	r6, [r4, #144]	; fField144
        121060:	e59f106c 	ldr	r1, [pc, #6c]	; 1210d4 <TMonthView::Constructor(RefVar const &, TView *)+0x14c>
        121064:	e1a00004 	mov	r0, r4
        121068:	eb6aa536 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        12106c:	e2500002 	subs	r0, r0, #2	; 0x2
        121070:	13a00001 	movne	r0, #1	; 0x1
        121074:	e5840038 	str	r0, [r4, #56]	; fField56
        121078:	e59f1058 	ldr	r1, [pc, #58]	; 1210d8 <TMonthView::Constructor(RefVar const &, TView *)+0x150>
        12107c:	e1a00004 	mov	r0, r4
        121080:	eb6aa534 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        121084:	eb6a8430 	bl	1bc214c <$AllocateRefHandle(long)>
        121088:	e1a07000 	mov	r7, r0
        12108c:	e5900000 	ldr	r0, [r0]
        121090:	e3300002 	teq	r0, #2	; 0x2
        121094:	03a01000 	moveq	r1, #0	; 0x0
        121098:	0a000006 	beq	1210b8 <TMonthView::Constructor(RefVar const &, TView *)+0x130>
        12109c:	e1a01006 	mov	r1, r6
        1210a0:	eb6a8c6b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1210a4:	e3100003 	tst	r0, #3	; 0x3
        1210a8:	01a00140 	moveq	r0, r0, asr #2
        1210ac:	0a000000 	beq	1210b4 <TMonthView::Constructor(RefVar const &, TView *)+0x12c>
        1210b0:	eb6a8419 	bl	1bc211c <$_RINTError(long)>
        1210b4:	e1a01000 	mov	r1, r0
        1210b8:	e2840060 	add	r0, r4, #96	; 0x60
        1210bc:	eb6b77a3 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
        1210c0:	e1a00007 	mov	r0, r7
        1210c4:	eb6a883c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1210c8:	e1a00005 	mov	r0, r5
        1210cc:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1210d0:	ea6a8839 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1210d4:	00683820 	rsbeq	r3, r8, r0, lsr #16
        1210d8:	006844f8 	streqd	r4, [r8], -#72	; fField72
    */
}

/**
 * Symbol: TMonthView::RealDraw(TRect &)
 * Address: 00121834
 */
TMonthView::RealDraw(TRect &) {
    /*
        121834:	e1a0c00d 	mov	ip, sp
        121838:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        12183c:	e24cb004 	sub	fp, ip, #4	; 0x4
        121840:	e1a04000 	mov	r4, r0
        121844:	e24dd014 	sub	sp, sp, #20	; 0x14
        121848:	e2800010 	add	r0, r0, #16	; 0x10
        12184c:	e8901008 	ldmia	r0, {r3, ip}
        121850:	e88d1008 	stmia	sp, {r3, ip}
        121854:	e59d0000 	ldr	r0, [sp]
        121858:	e5c40043 	strb	r0, [r4, #67]	; fField67
        12185c:	e1a00440 	mov	r0, r0, asr #8
        121860:	e5c40042 	strb	r0, [r4, #66]	; fField66
        121864:	e59d0002 	ldr	r0, [sp, #2]
        121868:	e2800001 	add	r0, r0, #1	; 0x1
        12186c:	e5c40041 	strb	r0, [r4, #65]	; fField65
        121870:	e1a00440 	mov	r0, r0, asr #8
        121874:	e5c40040 	strb	r0, [r4, #64]	; fField64
        121878:	e59d0004 	ldr	r0, [sp, #4]
        12187c:	e2400001 	sub	r0, r0, #1	; 0x1
        121880:	e5c40047 	strb	r0, [r4, #71]	; fField71
        121884:	e1a00440 	mov	r0, r0, asr #8
        121888:	e5c40046 	strb	r0, [r4, #70]	; fField70
        12188c:	e59d0002 	ldr	r0, [sp, #2]
        121890:	e280000a 	add	r0, r0, #10	; 0xa
        121894:	e5c40045 	strb	r0, [r4, #69]	; fField69
        121898:	e1a00440 	mov	r0, r0, asr #8
        12189c:	e5c40044 	strb	r0, [r4, #68]	; fField68
        1218a0:	e59d0000 	ldr	r0, [sp]
        1218a4:	e2800001 	add	r0, r0, #1	; 0x1
        1218a8:	e5c4004b 	strb	r0, [r4, #75]	; fField75
        1218ac:	e1a00440 	mov	r0, r0, asr #8
        1218b0:	e5c4004a 	strb	r0, [r4, #74]	; fField74
        1218b4:	e59d0002 	ldr	r0, [sp, #2]
        1218b8:	e280000d 	add	r0, r0, #13	; 0xd
        1218bc:	e5c40049 	strb	r0, [r4, #73]	; fField73
        1218c0:	e1a00440 	mov	r0, r0, asr #8
        1218c4:	e5c40048 	strb	r0, [r4, #72]	; fField72
        1218c8:	e59d0004 	ldr	r0, [sp, #4]
        1218cc:	e2400001 	sub	r0, r0, #1	; 0x1
        1218d0:	e5c4004f 	strb	r0, [r4, #79]	; fField79
        1218d4:	e1a00440 	mov	r0, r0, asr #8
        1218d8:	e5c4004e 	strb	r0, [r4, #78]	; fField78
        1218dc:	e59d0006 	ldr	r0, [sp, #6]
        1218e0:	e2400001 	sub	r0, r0, #1	; 0x1
        1218e4:	e5c4004d 	strb	r0, [r4, #77]	; fField77
        1218e8:	e1a00440 	mov	r0, r0, asr #8
        1218ec:	e5c4004c 	strb	r0, [r4, #76]	; fField76
        1218f0:	e2840048 	add	r0, r4, #72	; 0x48
        1218f4:	e1a09000 	mov	r9, r0
        1218f8:	e5901006 	ldr	r1, [r0, #6]
        1218fc:	e1a01821 	mov	r1, r1, lsr #16
        121900:	e5900002 	ldr	r0, [r0, #2]
        121904:	e1a00820 	mov	r0, r0, lsr #16
        121908:	e0410000 	sub	r0, r1, r0
        12190c:	e1a00800 	mov	r0, r0, lsl #16
        121910:	e1a00840 	mov	r0, r0, asr #16
        121914:	e2801002 	add	r1, r0, #2	; 0x2
        121918:	e3a00007 	mov	r0, #7	; 0x7
        12191c:	eb6a4407 	bl	1bb2940 <$__rt_sdiv>
        121920:	e5c40033 	strb	r0, [r4, #51]	; fField51
        121924:	e1a00440 	mov	r0, r0, asr #8
        121928:	e5c40032 	strb	r0, [r4, #50]	; fField50
        12192c:	e24dd054 	sub	sp, sp, #84	; 0x54
        121930:	e2840024 	add	r0, r4, #36	; 0x24
        121934:	e58d0064 	str	r0, [sp, #100]	; fField100
        121938:	e5900000 	ldr	r0, [r0]
        12193c:	e5900000 	ldr	r0, [r0]
        121940:	eb6a8201 	bl	1bc214c <$AllocateRefHandle(long)>
        121944:	e58d0050 	str	r0, [sp, #80]	; fField80
        121948:	e59f10cc 	ldr	r1, [pc, #cc]	; 121a1c <TMonthView::RealDraw(TRect &)+0x1e8>
        12194c:	e28d0050 	add	r0, sp, #80	; 0x50
        121950:	e3a03000 	mov	r3, #0	; 0x0
        121954:	e3a02000 	mov	r2, #0	; 0x0
        121958:	eb6a8a45 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        12195c:	eb6a81fa 	bl	1bc214c <$AllocateRefHandle(long)>
        121960:	e1a06000 	mov	r6, r0
        121964:	e5900000 	ldr	r0, [r0]
        121968:	eb6a8e4f 	bl	1bc52ac <$Length(long)>
        12196c:	e1a08000 	mov	r8, r0
        121970:	e3a01000 	mov	r1, #0	; 0x0
        121974:	e5960000 	ldr	r0, [r6]
        121978:	eb6a8a35 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        12197c:	e3100003 	tst	r0, #3	; 0x3
        121980:	01a00140 	moveq	r0, r0, asr #2
        121984:	0a000000 	beq	12198c <TMonthView::RealDraw(TRect &)+0x158>
        121988:	eb6a81e3 	bl	1bc211c <$_RINTError(long)>
        12198c:	e1a05000 	mov	r5, r0
        121990:	e28d0028 	add	r0, sp, #40	; 0x28
        121994:	eb6b7568 	bl	1bfef3c <TDate::$__ct(void)>
        121998:	e1a0000d 	mov	r0, sp
        12199c:	eb6b7566 	bl	1bfef3c <TDate::$__ct(void)>
        1219a0:	e1a01005 	mov	r1, r5
        1219a4:	e28d0028 	add	r0, sp, #40	; 0x28
        1219a8:	eb6b7568 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
        1219ac:	e59d502c 	ldr	r5, [sp, #44]
        1219b0:	e59d7028 	ldr	r7, [sp, #40]
        1219b4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1219b8:	e59f1060 	ldr	r1, [pc, #60]	; 121a20 <TMonthView::RealDraw(TRect &)+0x1ec>	; fField60
        1219bc:	e58d1068 	str	r1, [sp, #104]
        1219c0:	e59f105c 	ldr	r1, [pc, #5c]	; 121a24 <TMonthView::RealDraw(TRect &)+0x1f0>
        1219c4:	e3380001 	teq	r8, #1	; 0x1
        1219c8:	e58d1064 	str	r1, [sp, #100]	; fField100
        1219cc:	1a000015 	bne	121a28 <TMonthView::RealDraw(TRect &)+0x1f4>
        1219d0:	e28d0008 	add	r0, sp, #8	; 0x8
        1219d4:	e28de030 	add	lr, sp, #48	; 0x30
        1219d8:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        1219dc:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        1219e0:	e89e100c 	ldmia	lr, {r2, r3, ip}
        1219e4:	e880100c 	stmia	r0, {r2, r3, ip}
        1219e8:	e59d004c 	ldr	r0, [sp, #76]	; fField76
        1219ec:	e5901000 	ldr	r1, [r0]
        1219f0:	e59d0024 	ldr	r0, [sp, #36]
        1219f4:	e5801000 	str	r1, [r0]
        1219f8:	e59d0050 	ldr	r0, [sp, #80]	; fField80
        1219fc:	e5901000 	ldr	r1, [r0]
        121a00:	e59d0028 	ldr	r0, [sp, #40]
        121a04:	e5801000 	str	r1, [r0]
        121a08:	e59d0054 	ldr	r0, [sp, #84]	; fField84
        121a0c:	e5900000 	ldr	r0, [r0]
        121a10:	e59d102c 	ldr	r1, [sp, #44]
        121a14:	e5810000 	str	r0, [r1]
        121a18:	ea000053 	b	121b6c <TMonthView::RealDraw(TRect &)+0x338>
        121a1c:	006844f8 	streqd	r4, [r8], -#72	; fField72
        121a20:	00683910 	rsbeq	r3, r8, r0, lsl r9
        121a24:	00685268 	rsbeq	r5, r8, r8, ror #4
        121a28:	e2481001 	sub	r1, r8, #1	; 0x1
        121a2c:	e5960000 	ldr	r0, [r6]
        121a30:	eb6a8a07 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        121a34:	e3100003 	tst	r0, #3	; 0x3
        121a38:	01a00140 	moveq	r0, r0, asr #2
        121a3c:	0a000000 	beq	121a44 <TMonthView::RealDraw(TRect &)+0x210>
        121a40:	eb6a81b5 	bl	1bc211c <$_RINTError(long)>
        121a44:	e1a01000 	mov	r1, r0
        121a48:	e28d0008 	add	r0, sp, #8	; 0x8
        121a4c:	eb6b753f 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
        121a50:	e59d000c 	ldr	r0, [sp, #12]
        121a54:	e59d1034 	ldr	r1, [sp, #52]	; fField52
        121a58:	e1300001 	teq	r0, r1
        121a5c:	0a000042 	beq	121b6c <TMonthView::RealDraw(TRect &)+0x338>
        121a60:	e59d1068 	ldr	r1, [sp, #104]
        121a64:	e28d0058 	add	r0, sp, #88	; 0x58
        121a68:	e3a03000 	mov	r3, #0	; 0x0
        121a6c:	e3a02000 	mov	r2, #0	; 0x0
        121a70:	eb6a89ff 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        121a74:	eb6a81b4 	bl	1bc214c <$AllocateRefHandle(long)>
        121a78:	e1a08000 	mov	r8, r0
        121a7c:	e5900000 	ldr	r0, [r0]
        121a80:	e3300002 	teq	r0, #2	; 0x2
        121a84:	059d5034 	ldreq	r5, [sp, #52]	; fField52
        121a88:	0a000004 	beq	121aa0 <TMonthView::RealDraw(TRect &)+0x26c>
        121a8c:	e3100003 	tst	r0, #3	; 0x3
        121a90:	01a00140 	moveq	r0, r0, asr #2
        121a94:	0a000000 	beq	121a9c <TMonthView::RealDraw(TRect &)+0x268>
        121a98:	eb6a819f 	bl	1bc211c <$_RINTError(long)>
        121a9c:	e1a05000 	mov	r5, r0
        121aa0:	e59d000c 	ldr	r0, [sp, #12]
        121aa4:	e1300005 	teq	r0, r5
        121aa8:	1a000006 	bne	121ac8 <TMonthView::RealDraw(TRect &)+0x294>
        121aac:	e28d0030 	add	r0, sp, #48	; 0x30
        121ab0:	eb6b7524 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
        121ab4:	e59d1038 	ldr	r1, [sp, #56]	; fField56
        121ab8:	e0410000 	sub	r0, r1, r0
        121abc:	e58d0038 	str	r0, [sp, #56]	; fField56
        121ac0:	e59d7008 	ldr	r7, [sp, #8]
        121ac4:	ea000026 	b	121b64 <TMonthView::RealDraw(TRect &)+0x330>
        121ac8:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        121acc:	e1300005 	teq	r0, r5
        121ad0:	1a000006 	bne	121af0 <TMonthView::RealDraw(TRect &)+0x2bc>
        121ad4:	e28d0030 	add	r0, sp, #48	; 0x30
        121ad8:	eb6b751a 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
        121adc:	e59d1010 	ldr	r1, [sp, #16]
        121ae0:	e0800001 	add	r0, r0, r1
        121ae4:	e58d0010 	str	r0, [sp, #16]
        121ae8:	e59d7030 	ldr	r7, [sp, #48]	; fField48
        121aec:	ea00001c 	b	121b64 <TMonthView::RealDraw(TRect &)+0x330>
        121af0:	e59d1064 	ldr	r1, [sp, #100]	; fField100
        121af4:	e28d0058 	add	r0, sp, #88	; 0x58
        121af8:	e3a03000 	mov	r3, #0	; 0x0
        121afc:	e3a02000 	mov	r2, #0	; 0x0
        121b00:	eb6a89db 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        121b04:	eb6a8190 	bl	1bc214c <$AllocateRefHandle(long)>
        121b08:	e1a0a000 	mov	sl, r0
        121b0c:	e5900000 	ldr	r0, [r0]
        121b10:	e3300002 	teq	r0, #2	; 0x2
        121b14:	059d7030 	ldreq	r7, [sp, #48]	; fField48
        121b18:	0a000004 	beq	121b30 <TMonthView::RealDraw(TRect &)+0x2fc>
        121b1c:	e3100003 	tst	r0, #3	; 0x3
        121b20:	01a00140 	moveq	r0, r0, asr #2
        121b24:	0a000000 	beq	121b2c <TMonthView::RealDraw(TRect &)+0x2f8>
        121b28:	eb6a817b 	bl	1bc211c <$_RINTError(long)>
        121b2c:	e1a07000 	mov	r7, r0
        121b30:	e28d0030 	add	r0, sp, #48	; 0x30
        121b34:	eb6b7503 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
        121b38:	e59d1038 	ldr	r1, [sp, #56]	; fField56
        121b3c:	e0410000 	sub	r0, r1, r0
        121b40:	e58d0038 	str	r0, [sp, #56]	; fField56
        121b44:	e58d500c 	str	r5, [sp, #12]
        121b48:	e28d0008 	add	r0, sp, #8	; 0x8
        121b4c:	eb6b74fd 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
        121b50:	e59d1010 	ldr	r1, [sp, #16]
        121b54:	e0800001 	add	r0, r0, r1
        121b58:	e58d0010 	str	r0, [sp, #16]
        121b5c:	e1a0000a 	mov	r0, sl
        121b60:	eb6a8595 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121b64:	e1a00008 	mov	r0, r8
        121b68:	eb6a8593 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121b6c:	e3a00001 	mov	r0, #1	; 0x1
        121b70:	e5840068 	str	r0, [r4, #104]
        121b74:	e5845064 	str	r5, [r4, #100]	; fField100
        121b78:	e5847060 	str	r7, [r4, #96]	; fField96
        121b7c:	e2840060 	add	r0, r4, #96	; 0x60
        121b80:	e1a05000 	mov	r5, r0
        121b84:	eb6b74ed 	bl	1bfef40 <TDate::$CleanUpFields(void)>
        121b88:	e5940060 	ldr	r0, [r4, #96]	; fField96
        121b8c:	e1a00100 	mov	r0, r0, lsl #2
        121b90:	eb6a816d 	bl	1bc214c <$AllocateRefHandle(long)>
        121b94:	e58d0000 	str	r0, [sp]
        121b98:	e1a0200d 	mov	r2, sp
        121b9c:	e59d006c 	ldr	r0, [sp, #108]
        121ba0:	e59d1064 	ldr	r1, [sp, #100]	; fField100
        121ba4:	eb6a91ef 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        121ba8:	e59d0000 	ldr	r0, [sp]
        121bac:	eb6a8582 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121bb0:	e5940064 	ldr	r0, [r4, #100]	; fField100
        121bb4:	e1a00100 	mov	r0, r0, lsl #2
        121bb8:	eb6a8163 	bl	1bc214c <$AllocateRefHandle(long)>
        121bbc:	e58d0004 	str	r0, [sp, #4]
        121bc0:	e28d2004 	add	r2, sp, #4	; 0x4
        121bc4:	e59d006c 	ldr	r0, [sp, #108]
        121bc8:	e59d1068 	ldr	r1, [sp, #104]
        121bcc:	eb6a91e5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        121bd0:	e59d0004 	ldr	r0, [sp, #4]
        121bd4:	eb6a8578 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121bd8:	e5940078 	ldr	r0, [r4, #120]	; fField120
        121bdc:	e5941090 	ldr	r1, [r4, #144]	; fField144
        121be0:	e0400001 	sub	r0, r0, r1
        121be4:	e2801007 	add	r1, r0, #7	; 0x7
        121be8:	e3a00007 	mov	r0, #7	; 0x7
        121bec:	eb6a4353 	bl	1bb2940 <$__rt_sdiv>
        121bf0:	e1a07001 	mov	r7, r1
        121bf4:	e1a00005 	mov	r0, r5
        121bf8:	eb6b74d2 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
        121bfc:	e0800007 	add	r0, r0, r7
        121c00:	e3500023 	cmp	r0, #35	; 0x23
        121c04:	e5990004 	ldr	r0, [r9, #4]
        121c08:	e1a00820 	mov	r0, r0, lsr #16
        121c0c:	e5991000 	ldr	r1, [r9]
        121c10:	e1a01821 	mov	r1, r1, lsr #16
        121c14:	e0400001 	sub	r0, r0, r1
        121c18:	e1a01800 	mov	r1, r0, lsl #16
        121c1c:	e1a01841 	mov	r1, r1, asr #16
        121c20:	83a00006 	movhi	r0, #6	; 0x6
        121c24:	93a00005 	movls	r0, #5	; 0x5
        121c28:	eb6a4344 	bl	1bb2940 <$__rt_sdiv>
        121c2c:	e5c40031 	strb	r0, [r4, #49]
        121c30:	e1a00440 	mov	r0, r0, asr #8
        121c34:	e5c40030 	strb	r0, [r4, #48]	; fField48
        121c38:	e1a00004 	mov	r0, r4
        121c3c:	e59d1038 	ldr	r1, [sp, #56]	; fField56
        121c40:	e59d2010 	ldr	r2, [sp, #16]
        121c44:	eb660d9e 	bl	1aa52c4 <TMonthView::$UpdateRangeRect(long, long)>
        121c48:	e284508c 	add	r5, r4, #140	; 0x8c
        121c4c:	e59f1044 	ldr	r1, [pc, #44]	; 121c98 <TMonthView::RealDraw(TRect &)+0x464>
        121c50:	e1a00004 	mov	r0, r4
        121c54:	eb6aa23f 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        121c58:	e5951000 	ldr	r1, [r5]
        121c5c:	e2845088 	add	r5, r4, #136	; 0x88
        121c60:	e5810000 	str	r0, [r1]
        121c64:	e59f1030 	ldr	r1, [pc, #30]	; 121c9c <TMonthView::RealDraw(TRect &)+0x468>
        121c68:	e1a00004 	mov	r0, r4
        121c6c:	eb6aa239 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        121c70:	e5951000 	ldr	r1, [r5]
        121c74:	e5810000 	str	r0, [r1]
        121c78:	e1a00004 	mov	r0, r4
        121c7c:	eb65c326 	bl	1a9291c <TMonthView::$DrawLabels(void)>
        121c80:	e5940038 	ldr	r0, [r4, #56]	; fField56
        121c84:	e3300000 	teq	r0, #0	; 0x0
        121c88:	e1a00004 	mov	r0, r4
        121c8c:	0a000003 	beq	121ca0 <TMonthView::RealDraw(TRect &)+0x46c>
        121c90:	eb65c322 	bl	1a92920 <TMonthView::$DrawMonthOverView(void)>
        121c94:	ea000002 	b	121ca4 <TMonthView::RealDraw(TRect &)+0x470>
        121c98:	006827f0 	streqd	r2, [r8], -#112
        121c9c:	00683408 	rsbeq	r3, r8, r8, lsl #8
        121ca0:	eb65bf0e 	bl	1a918e0 <TMonthView::$DrawDates(void)>
        121ca4:	e5d4003c 	ldrb	r0, [r4, #60]	; fField60
        121ca8:	e3300000 	teq	r0, #0	; 0x0
        121cac:	01a00004 	moveq	r0, r4
        121cb0:	0b65e422 	bleq	1a9ad40 <TMonthView::$InvertSelection(void)>
        121cb4:	e28dd008 	add	sp, sp, #8	; 0x8
        121cb8:	e59d0024 	ldr	r0, [sp, #36]
        121cbc:	eb6a853e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121cc0:	e59d0020 	ldr	r0, [sp, #32]
        121cc4:	eb6a853c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121cc8:	e59d001c 	ldr	r0, [sp, #28]
        121ccc:	eb6a853a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121cd0:	e59d004c 	ldr	r0, [sp, #76]	; fField76
        121cd4:	eb6a8538 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121cd8:	e59d0048 	ldr	r0, [sp, #72]	; fField72
        121cdc:	eb6a8536 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121ce0:	e59d0044 	ldr	r0, [sp, #68]	; fField68
        121ce4:	eb6a8534 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121ce8:	e1a00006 	mov	r0, r6
        121cec:	eb6a8532 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121cf0:	e59d0050 	ldr	r0, [sp, #80]	; fField80
        121cf4:	eb6a8530 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121cf8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TMonthView::DrawLabels(void)
 * Address: 00121ff8
 */
TMonthView::DrawLabels(void) {
    /*
        121ff8:	e1a0c00d 	mov	ip, sp
        121ffc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        122000:	e24cb004 	sub	fp, ip, #4	; 0x4
        122004:	e1a04000 	mov	r4, r0
        122008:	e2800088 	add	r0, r0, #136	; 0x88
        12200c:	e1a05000 	mov	r5, r0
        122010:	e5900000 	ldr	r0, [r0]
        122014:	e5900000 	ldr	r0, [r0]
        122018:	e3300002 	teq	r0, #2	; 0x2
        12201c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        122020:	e24dd020 	sub	sp, sp, #32	; 0x20
        122024:	e1a0000d 	mov	r0, sp
        122028:	e3a0101c 	mov	r1, #28	; 0x1c
        12202c:	eb6af7fa 	bl	1be001c <$ZeroBytes>
        122030:	e3a00902 	mov	r0, #32768	; 0x8000
        122034:	e58d0004 	str	r0, [sp, #4]
        122038:	e5940032 	ldr	r0, [r4, #50]	; fField50
        12203c:	e1a00820 	mov	r0, r0, lsr #16
        122040:	e1a00800 	mov	r0, r0, lsl #16
        122044:	e58d0008 	str	r0, [sp, #8]
        122048:	e24dd020 	sub	sp, sp, #32	; 0x20
        12204c:	e3a00002 	mov	r0, #2	; 0x2
        122050:	eb6a803d 	bl	1bc214c <$AllocateRefHandle(long)>
        122054:	e58d0000 	str	r0, [sp]
        122058:	e3a00000 	mov	r0, #0	; 0x0
        12205c:	e59d1000 	ldr	r1, [sp]
        122060:	e5a10004 	str	r0, [r1, #4]!
        122064:	e58d001c 	str	r0, [sp, #28]
        122068:	e1a00005 	mov	r0, r5
        12206c:	e1a0100d 	mov	r1, sp
        122070:	eb6a9d1b 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        122074:	e24dd004 	sub	sp, sp, #4	; 0x4
        122078:	e28d0004 	add	r0, sp, #4	; 0x4
        12207c:	e40d0028 	str	r0, [sp], -#40
        122080:	e1a0000d 	mov	r0, sp
        122084:	eb6b73ac 	bl	1bfef3c <TDate::$__ct(void)>
        122088:	e3a00007 	mov	r0, #7	; 0x7
        12208c:	e5941090 	ldr	r1, [r4, #144]	; fField144
        122090:	eb6a422a 	bl	1bb2940 <$__rt_sdiv>
        122094:	e3a05000 	mov	r5, #0	; 0x0
        122098:	e58d1018 	str	r1, [sp, #24]
        12209c:	e3a03001 	mov	r3, #1	; 0x1
        1220a0:	e3a02001 	mov	r2, #1	; 0x1
        1220a4:	e92d000c 	stmdb	sp!, {r2, r3}
        1220a8:	e28d3070 	add	r3, sp, #112	; 0x70
        1220ac:	e28d0008 	add	r0, sp, #8	; 0x8
        1220b0:	e3a02004 	mov	r2, #4	; 0x4
        1220b4:	e3a01002 	mov	r1, #2	; 0x2
        1220b8:	eb6b73a1 	bl	1bfef44 <TDate::$DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)>
        1220bc:	e28dd008 	add	sp, sp, #8	; 0x8
        1220c0:	e28d0068 	add	r0, sp, #104	; 0x68
        1220c4:	e3a01001 	mov	r1, #1	; 0x1
        1220c8:	eb6b2121 	bl	1bea554 <$LowercaseText(unsigned short *, long)>
        1220cc:	e5941042 	ldr	r1, [r4, #66]	; fField66
        1220d0:	e1a01821 	mov	r1, r1, lsr #16
        1220d4:	e5940032 	ldr	r0, [r4, #50]	; fField50
        1220d8:	e1a00820 	mov	r0, r0, lsr #16
        1220dc:	e0201095 	mla	r0, r5, r0, r1
        1220e0:	e1a01800 	mov	r1, r0, lsl #16
        1220e4:	e5940044 	ldr	r0, [r4, #68]	; fField68
        1220e8:	e1a00820 	mov	r0, r0, lsr #16
        1220ec:	e1a00800 	mov	r0, r0, lsl #16
        1220f0:	e3a03000 	mov	r3, #0	; 0x0
        1220f4:	e28d204c 	add	r2, sp, #76	; 0x4c
        1220f8:	e92d000c 	stmdb	sp!, {r2, r3}
        1220fc:	e24dd008 	sub	sp, sp, #8	; 0x8
        122100:	e58d0004 	str	r0, [sp, #4]
        122104:	e58d1000 	str	r1, [sp]
        122108:	e28d2038 	add	r2, sp, #56	; 0x38
        12210c:	e28d0078 	add	r0, sp, #120	; 0x78
        122110:	e3a01001 	mov	r1, #1	; 0x1
        122114:	eb68b17e 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        122118:	e28dd010 	add	sp, sp, #16	; 0x10
        12211c:	e59d0018 	ldr	r0, [sp, #24]
        122120:	e2801001 	add	r1, r0, #1	; 0x1
        122124:	e3a00007 	mov	r0, #7	; 0x7
        122128:	eb6a4206 	bl	1bb2948 <$__rt_udiv>
        12212c:	e2855001 	add	r5, r5, #1	; 0x1
        122130:	e3550007 	cmp	r5, #7	; 0x7
        122134:	e58d1018 	str	r1, [sp, #24]
        122138:	baffffd7 	blt	12209c <TMonthView::DrawLabels(void)+0xa4>
        12213c:	e59d0024 	ldr	r0, [sp, #36]
        122140:	eb6a841d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122144:	e59d0020 	ldr	r0, [sp, #32]
        122148:	eb6a841b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12214c:	e59d001c 	ldr	r0, [sp, #28]
        122150:	eb6a8419 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122154:	e28dd02c 	add	sp, sp, #44	; 0x2c
        122158:	e59d001c 	ldr	r0, [sp, #28]
        12215c:	e3300000 	teq	r0, #0	; 0x0
        122160:	159d001c 	ldrne	r0, [sp, #28]
        122164:	1b68ad5c 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        122168:	e59d0000 	ldr	r0, [sp]
        12216c:	eb6a8412 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122170:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMonthView::DrawMonthOverView(void)
 * Address: 00122174
 */
TMonthView::DrawMonthOverView(void) {
    /*
        122174:	e1a0c00d 	mov	ip, sp
        122178:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        12217c:	e24cb004 	sub	fp, ip, #4	; 0x4
        122180:	e1a04000 	mov	r4, r0
        122184:	e24dd028 	sub	sp, sp, #40	; 0x28
        122188:	e1a0000d 	mov	r0, sp
        12218c:	e3a0101c 	mov	r1, #28	; 0x1c
        122190:	eb6af7a1 	bl	1be001c <$ZeroBytes>
        122194:	e3a00801 	mov	r0, #65536	; 0x10000
        122198:	e58d0004 	str	r0, [sp, #4]
        12219c:	e5940032 	ldr	r0, [r4, #50]	; fField50
        1221a0:	e1a00820 	mov	r0, r0, lsr #16
        1221a4:	e1a00800 	mov	r0, r0, lsl #16
        1221a8:	e58d0008 	str	r0, [sp, #8]
        1221ac:	e3a00001 	mov	r0, #1	; 0x1
        1221b0:	e58d0010 	str	r0, [sp, #16]
        1221b4:	e24dd020 	sub	sp, sp, #32	; 0x20
        1221b8:	e3a00002 	mov	r0, #2	; 0x2
        1221bc:	eb6a7fe2 	bl	1bc214c <$AllocateRefHandle(long)>
        1221c0:	e3a0a000 	mov	sl, #0	; 0x0
        1221c4:	e58d0000 	str	r0, [sp]
        1221c8:	e5a0a004 	str	sl, [r0, #4]!
        1221cc:	e284008c 	add	r0, r4, #140	; 0x8c
        1221d0:	e58da01c 	str	sl, [sp, #28]
        1221d4:	e5901000 	ldr	r1, [r0]
        1221d8:	e5911000 	ldr	r1, [r1]
        1221dc:	e3310002 	teq	r1, #2	; 0x2
        1221e0:	e1a0100d 	mov	r1, sp
        1221e4:	059f01b4 	ldreq	r0, [pc, #1b4]	; 1223a0 <TMonthView::DrawMonthOverView(void)+0x22c>
        1221e8:	eb6a9cbd 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        1221ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        1221f0:	e28d0004 	add	r0, sp, #4	; 0x4
        1221f4:	e40d0058 	str	r0, [sp], -#88
        1221f8:	e2840060 	add	r0, r4, #96	; 0x60
        1221fc:	e1a05000 	mov	r5, r0
        122200:	eb6b7350 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
        122204:	e58d0040 	str	r0, [sp, #64]	; fField64
        122208:	e5940090 	ldr	r0, [r4, #144]	; fField144
        12220c:	e5941078 	ldr	r1, [r4, #120]	; fField120
        122210:	e0410000 	sub	r0, r1, r0
        122214:	e2801007 	add	r1, r0, #7	; 0x7
        122218:	e3a00007 	mov	r0, #7	; 0x7
        12221c:	eb6a41c7 	bl	1bb2940 <$__rt_sdiv>
        122220:	e1a00005 	mov	r0, r5
        122224:	e58d103c 	str	r1, [sp, #60]	; fField60
        122228:	eb6b7758 	bl	1bfff90 <TDate::$TotalMinutes( const(void))>
        12222c:	e1a06000 	mov	r6, r0
        122230:	e2800e5a 	add	r0, r0, #1440	; 0x5a0
        122234:	e58d0038 	str	r0, [sp, #56]	; fField56
        122238:	e2840024 	add	r0, r4, #36	; 0x24
        12223c:	e1a05000 	mov	r5, r0
        122240:	e59f115c 	ldr	r1, [pc, #15c]	; 1223a4 <TMonthView::DrawMonthOverView(void)+0x230>
        122244:	e3a03000 	mov	r3, #0	; 0x0
        122248:	e3a02000 	mov	r2, #0	; 0x0
        12224c:	eb6a8808 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        122250:	eb6a7fbd 	bl	1bc214c <$AllocateRefHandle(long)>
        122254:	e58d0034 	str	r0, [sp, #52]	; fField52
        122258:	e1a00005 	mov	r0, r5
        12225c:	e59f1144 	ldr	r1, [pc, #144]	; 1223a8 <TMonthView::DrawMonthOverView(void)+0x234>	; fField144
        122260:	e3a03000 	mov	r3, #0	; 0x0
        122264:	e3a02000 	mov	r2, #0	; 0x0
        122268:	eb6a8801 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        12226c:	eb6a7fb6 	bl	1bc214c <$AllocateRefHandle(long)>
        122270:	e58d0030 	str	r0, [sp, #48]	; fField48
        122274:	e1a00005 	mov	r0, r5
        122278:	e59f112c 	ldr	r1, [pc, #12c]	; 1223ac <TMonthView::DrawMonthOverView(void)+0x238>
        12227c:	e3a03000 	mov	r3, #0	; 0x0
        122280:	e3a02000 	mov	r2, #0	; 0x0
        122284:	eb6a87fa 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        122288:	eb6a7faf 	bl	1bc214c <$AllocateRefHandle(long)>
        12228c:	e58d002c 	str	r0, [sp, #44]
        122290:	e1a00005 	mov	r0, r5
        122294:	e59f1114 	ldr	r1, [pc, #114]	; 1223b0 <TMonthView::DrawMonthOverView(void)+0x23c>
        122298:	e3a03000 	mov	r3, #0	; 0x0
        12229c:	e3a02000 	mov	r2, #0	; 0x0
        1222a0:	eb6a87f3 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1222a4:	eb6a7fa8 	bl	1bc214c <$AllocateRefHandle(long)>
        1222a8:	e58d0028 	str	r0, [sp, #40]
        1222ac:	e3a00002 	mov	r0, #2	; 0x2
        1222b0:	eb6a7fa5 	bl	1bc214c <$AllocateRefHandle(long)>
        1222b4:	e58d0024 	str	r0, [sp, #36]
        1222b8:	e3a00002 	mov	r0, #2	; 0x2
        1222bc:	eb6a7fa2 	bl	1bc214c <$AllocateRefHandle(long)>
        1222c0:	e1a05000 	mov	r5, r0
        1222c4:	e3a09000 	mov	r9, #0	; 0x0
        1222c8:	e3a01000 	mov	r1, #0	; 0x0
        1222cc:	e58d101c 	str	r1, [sp, #28]
        1222d0:	e58d9020 	str	r9, [sp, #32]
        1222d4:	e3e0720e 	mvn	r7, #-536870912	; 0xe0000000
        1222d8:	e58d1018 	str	r1, [sp, #24]
        1222dc:	e58d7010 	str	r7, [sp, #16]
        1222e0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        1222e4:	e1a00840 	mov	r0, r0, asr #16
        1222e8:	e3500030 	cmp	r0, #48	; 0x30
        1222ec:	b3a00000 	movlt	r0, #0	; 0x0
        1222f0:	a3a00001 	movge	r0, #1	; 0x1
        1222f4:	e21000ff 	ands	r0, r0, #255	; 0xff
        1222f8:	e58d000c 	str	r0, [sp, #12]
        1222fc:	03a02009 	moveq	r2, #9	; 0x9
        122300:	13a02010 	movne	r2, #16	; 0x10
        122304:	e3a00002 	mov	r0, #2	; 0x2
        122308:	e58d2008 	str	r2, [sp, #8]
        12230c:	eb6a7f8e 	bl	1bc214c <$AllocateRefHandle(long)>
        122310:	e1a08000 	mov	r8, r0
        122314:	e3a00002 	mov	r0, #2	; 0x2
        122318:	eb6a7f8b 	bl	1bc214c <$AllocateRefHandle(long)>
        12231c:	e58d0004 	str	r0, [sp, #4]
        122320:	e3a00001 	mov	r0, #1	; 0x1
        122324:	e3a01000 	mov	r1, #0	; 0x0
        122328:	e40d006c 	str	r0, [sp], -#108
        12232c:	e58d1000 	str	r1, [sp]
        122330:	e28d0008 	add	r0, sp, #8	; 0x8
        122334:	eb6a418e 	bl	1bb2974 <$setjmp>
        122338:	e3300000 	teq	r0, #0	; 0x0
        12233c:	1a00001c 	bne	1223b4 <TMonthView::DrawMonthOverView(void)+0x240>
        122340:	e1a0000d 	mov	r0, sp
        122344:	eb6af74c 	bl	1be007c <$AddExceptionHandler>
        122348:	e3a03000 	mov	r3, #0	; 0x0
        12234c:	e92d0008 	stmdb	sp!, {r3}
        122350:	e59d00b0 	ldr	r0, [sp, #176]
        122354:	e0600200 	rsb	r0, r0, r0, lsl #4
        122358:	e0800080 	add	r0, r0, r0, lsl #1
        12235c:	e0863280 	add	r3, r6, r0, lsl #5
        122360:	e1a0a003 	mov	sl, r3
        122364:	e1a02006 	mov	r2, r6
        122368:	e28d10a0 	add	r1, sp, #160	; 0xa0
        12236c:	e28d00a4 	add	r0, sp, #164	; 0xa4
        122370:	eb65cdc8 	bl	1a95a98 <$GetAllMeetings__FRC6RefVarT1lT3Uc>
        122374:	e28dd004 	add	sp, sp, #4	; 0x4
        122378:	e3a03000 	mov	r3, #0	; 0x0
        12237c:	e5880000 	str	r0, [r8]
        122380:	e92d0008 	stmdb	sp!, {r3}
        122384:	e1a0300a 	mov	r3, sl
        122388:	e1a02006 	mov	r2, r6
        12238c:	e28d1098 	add	r1, sp, #152	; 0x98
        122390:	e28d009c 	add	r0, sp, #156	; 0x9c
        122394:	eb65cdbf 	bl	1a95a98 <$GetAllMeetings__FRC6RefVarT1lT3Uc>
        122398:	e28dd004 	add	sp, sp, #4	; 0x4
        12239c:	ea000008 	b	1223c4 <TMonthView::DrawMonthOverView(void)+0x250>
        1223a0:	00680048 	rsbeq	r0, r8, r8, asr #32
        1223a4:	00683828 	rsbeq	r3, r8, r8, lsr #16
        1223a8:	006842e0 	rsbeq	r4, r8, r0, ror #5
        1223ac:	00683a98 	streqb	r3, [r8], -#168
        1223b0:	006842d8 	ldreqd	r4, [r8], -#40
        1223b4:	e3a00000 	mov	r0, #0	; 0x0
        1223b8:	e58d006c 	str	r0, [sp, #108]
        1223bc:	e3a00002 	mov	r0, #2	; 0x2
        1223c0:	e5880000 	str	r0, [r8]
        1223c4:	e59d1070 	ldr	r1, [sp, #112]
        1223c8:	e5810000 	str	r0, [r1]
        1223cc:	e1a0000d 	mov	r0, sp
        1223d0:	eb6afb38 	bl	1be10b8 <$ExitHandler>
        1223d4:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1223d8:	e2840048 	add	r0, r4, #72	; 0x48
        1223dc:	eb68b0da 	bl	1b4e74c <$EraseRect(Rect *)>
        1223e0:	e5980000 	ldr	r0, [r8]
        1223e4:	e59f20e4 	ldr	r2, [pc, #e4]	; 1224d0 <TMonthView::DrawMonthOverView(void)+0x35c>
        1223e8:	e58d20a0 	str	r2, [sp, #160]
        1223ec:	e59f20e0 	ldr	r2, [pc, #e0]	; 1224d4 <TMonthView::DrawMonthOverView(void)+0x360>
        1223f0:	e3300002 	teq	r0, #2	; 0x2
        1223f4:	e58d209c 	str	r2, [sp, #156]
        1223f8:	0a00003e 	beq	1224f8 <TMonthView::DrawMonthOverView(void)+0x384>
        1223fc:	eb6a8baa 	bl	1bc52ac <$Length(long)>
        122400:	e1a09000 	mov	r9, r0
        122404:	e3a0a000 	mov	sl, #0	; 0x0
        122408:	e3500000 	cmp	r0, #0	; 0x0
        12240c:	da000038 	ble	1224f4 <TMonthView::DrawMonthOverView(void)+0x380>
        122410:	e1a0100a 	mov	r1, sl
        122414:	e5980000 	ldr	r0, [r8]
        122418:	eb6a878d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        12241c:	e59d1024 	ldr	r1, [sp, #36]
        122420:	e5810000 	str	r0, [r1]
        122424:	e59f10ac 	ldr	r1, [pc, #ac]	; 1224d8 <TMonthView::DrawMonthOverView(void)+0x364>
        122428:	e5911000 	ldr	r1, [r1]
        12242c:	e5911000 	ldr	r1, [r1]
        122430:	eb6a878a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        122434:	e5850000 	str	r0, [r5]
        122438:	e59f109c 	ldr	r1, [pc, #9c]	; 1224dc <TMonthView::DrawMonthOverView(void)+0x368>
        12243c:	e5911000 	ldr	r1, [r1]
        122440:	e5911000 	ldr	r1, [r1]
        122444:	eb6a8779 	bl	1bc4230 <$EQRef__FlT1>
        122448:	e3300000 	teq	r0, #0	; 0x0
        12244c:	1a00000d 	bne	122488 <TMonthView::DrawMonthOverView(void)+0x314>
        122450:	e59f0088 	ldr	r0, [pc, #88]	; 1224e0 <TMonthView::DrawMonthOverView(void)+0x36c>
        122454:	e5900000 	ldr	r0, [r0]
        122458:	e5901000 	ldr	r1, [r0]
        12245c:	e5950000 	ldr	r0, [r5]
        122460:	eb6a8772 	bl	1bc4230 <$EQRef__FlT1>
        122464:	e3300000 	teq	r0, #0	; 0x0
        122468:	1a000006 	bne	122488 <TMonthView::DrawMonthOverView(void)+0x314>
        12246c:	e59f0070 	ldr	r0, [pc, #70]	; 1224e4 <TMonthView::DrawMonthOverView(void)+0x370>	; fField70
        122470:	e5900000 	ldr	r0, [r0]
        122474:	e5901000 	ldr	r1, [r0]
        122478:	e5950000 	ldr	r0, [r5]
        12247c:	eb6a876b 	bl	1bc4230 <$EQRef__FlT1>
        122480:	e3300000 	teq	r0, #0	; 0x0
        122484:	0a000017 	beq	1224e8 <TMonthView::DrawMonthOverView(void)+0x374>
        122488:	e59d109c 	ldr	r1, [sp, #156]
        12248c:	e28d0024 	add	r0, sp, #36	; 0x24
        122490:	eb664128 	bl	1ab2938 <$GetMeetingSlot__FRC6RefVarT1>
        122494:	e3100003 	tst	r0, #3	; 0x3
        122498:	01a00140 	moveq	r0, r0, asr #2
        12249c:	0a000000 	beq	1224a4 <TMonthView::DrawMonthOverView(void)+0x330>
        1224a0:	eb6a7f1d 	bl	1bc211c <$_RINTError(long)>
        1224a4:	e1a07000 	mov	r7, r0
        1224a8:	e59d10a0 	ldr	r1, [sp, #160]
        1224ac:	e28d0024 	add	r0, sp, #36	; 0x24
        1224b0:	eb664120 	bl	1ab2938 <$GetMeetingSlot__FRC6RefVarT1>
        1224b4:	e3100003 	tst	r0, #3	; 0x3
        1224b8:	01a00140 	moveq	r0, r0, asr #2
        1224bc:	0a000000 	beq	1224c4 <TMonthView::DrawMonthOverView(void)+0x350>
        1224c0:	eb6a7f15 	bl	1bc211c <$_RINTError(long)>
        1224c4:	e0801007 	add	r1, r0, r7
        1224c8:	e58d1014 	str	r1, [sp, #20]
        1224cc:	ea000008 	b	1224f4 <TMonthView::DrawMonthOverView(void)+0x380>
        1224d0:	00683950 	rsbeq	r3, r8, r0, asr r9
        1224d4:	00683978 	rsbeq	r3, r8, r8, ror r9
        1224d8:	006850d8 	ldreqd	r5, [r8], -#8
        1224dc:	00683810 	rsbeq	r3, r8, r0, lsl r8
        1224e0:	006842d0 	ldreqd	r4, [r8], -#32
        1224e4:	00682ce8 	rsbeq	r2, r8, r8, ror #25
        1224e8:	e28aa001 	add	sl, sl, #1	; 0x1
        1224ec:	e15a0009 	cmp	sl, r9
        1224f0:	baffffc6 	blt	122410 <TMonthView::DrawMonthOverView(void)+0x29c>
        1224f4:	e58da01c 	str	sl, [sp, #28]
        1224f8:	e59d0004 	ldr	r0, [sp, #4]
        1224fc:	e5900000 	ldr	r0, [r0]
        122500:	e3300002 	teq	r0, #2	; 0x2
        122504:	0a000013 	beq	122558 <TMonthView::DrawMonthOverView(void)+0x3e4>
        122508:	e24dd004 	sub	sp, sp, #4	; 0x4
        12250c:	eb6a8b66 	bl	1bc52ac <$Length(long)>
        122510:	e58d0024 	str	r0, [sp, #36]
        122514:	e59d0008 	ldr	r0, [sp, #8]
        122518:	e5900000 	ldr	r0, [r0]
        12251c:	e3a01000 	mov	r1, #0	; 0x0
        122520:	eb6a874b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        122524:	eb6a7f08 	bl	1bc214c <$AllocateRefHandle(long)>
        122528:	e58d0000 	str	r0, [sp]
        12252c:	e1a0000d 	mov	r0, sp
        122530:	e59d10a0 	ldr	r1, [sp, #160]
        122534:	eb6640ff 	bl	1ab2938 <$GetMeetingSlot__FRC6RefVarT1>
        122538:	e3100003 	tst	r0, #3	; 0x3
        12253c:	01a00140 	moveq	r0, r0, asr #2
        122540:	0a000000 	beq	122548 <TMonthView::DrawMonthOverView(void)+0x3d4>
        122544:	eb6a7ef4 	bl	1bc211c <$_RINTError(long)>
        122548:	e58d0014 	str	r0, [sp, #20]
        12254c:	e59d0000 	ldr	r0, [sp]
        122550:	eb6a8319 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122554:	e28dd004 	add	sp, sp, #4	; 0x4
        122558:	e3a0a000 	mov	sl, #0	; 0x0
        12255c:	e52da004 	str	sl, [sp, -#4]!
        122560:	e59d0044 	ldr	r0, [sp, #68]	; fField68
        122564:	e3500000 	cmp	r0, #0	; 0x0
        122568:	da000174 	ble	122b40 <TMonthView::DrawMonthOverView(void)+0x9cc>
        12256c:	e3a00007 	mov	r0, #7	; 0x7
        122570:	e59d1040 	ldr	r1, [sp, #64]	; fField64
        122574:	eb6a40f1 	bl	1bb2940 <$__rt_sdiv>
        122578:	e5942032 	ldr	r2, [r4, #50]	; fField50
        12257c:	e1a02822 	mov	r2, r2, lsr #16
        122580:	e0010192 	mul	r1, r2, r1
        122584:	e594204a 	ldr	r2, [r4, #74]	; fField74
        122588:	e1a02822 	mov	r2, r2, lsr #16
        12258c:	e0811002 	add	r1, r1, r2
        122590:	e5cd104b 	strb	r1, [sp, #75]	; fField75
        122594:	e1a01441 	mov	r1, r1, asr #8
        122598:	e5cd104a 	strb	r1, [sp, #74]	; fField74
        12259c:	e5941030 	ldr	r1, [r4, #48]	; fField48
        1225a0:	e1a01821 	mov	r1, r1, lsr #16
        1225a4:	e0000091 	mul	r0, r1, r0
        1225a8:	e5941048 	ldr	r1, [r4, #72]	; fField72
        1225ac:	e1a01821 	mov	r1, r1, lsr #16
        1225b0:	e0800001 	add	r0, r0, r1
        1225b4:	e5cd0049 	strb	r0, [sp, #73]	; fField73
        1225b8:	e1a00440 	mov	r0, r0, asr #8
        1225bc:	e5cd0048 	strb	r0, [sp, #72]	; fField72
        1225c0:	e59d1048 	ldr	r1, [sp, #72]	; fField72
        1225c4:	e5940032 	ldr	r0, [r4, #50]	; fField50
        1225c8:	e1a00820 	mov	r0, r0, lsr #16
        1225cc:	e0810000 	add	r0, r1, r0
        1225d0:	e2800001 	add	r0, r0, #1	; 0x1
        1225d4:	e5cd004f 	strb	r0, [sp, #79]	; fField79
        1225d8:	e1a00440 	mov	r0, r0, asr #8
        1225dc:	e5cd004e 	strb	r0, [sp, #78]	; fField78
        1225e0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        1225e4:	e1a00820 	mov	r0, r0, lsr #16
        1225e8:	e59d104a 	ldr	r1, [sp, #74]	; fField74
        1225ec:	e0800001 	add	r0, r0, r1
        1225f0:	e2800001 	add	r0, r0, #1	; 0x1
        1225f4:	e5cd004d 	strb	r0, [sp, #77]	; fField77
        1225f8:	e1a00440 	mov	r0, r0, asr #8
        1225fc:	e5cd004c 	strb	r0, [sp, #76]	; fField76
        122600:	eb68b470 	bl	1b4f7c8 <$GetFgPattern(void)>
        122604:	e1a0a000 	mov	sl, r0
        122608:	e3a00002 	mov	r0, #2	; 0x2
        12260c:	eb68b473 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        122610:	eb68c4f6 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        122614:	e28d0048 	add	r0, sp, #72	; 0x48
        122618:	eb68b45f 	bl	1b4f79c <$FrameRect(Rect *)>
        12261c:	e1a0000a 	mov	r0, sl
        122620:	eb68c4f2 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        122624:	e59d1040 	ldr	r1, [sp, #64]	; fField64
        122628:	e2811001 	add	r1, r1, #1	; 0x1
        12262c:	e58d1040 	str	r1, [sp, #64]	; fField64
        122630:	e59d0004 	ldr	r0, [sp, #4]
        122634:	e3300000 	teq	r0, #0	; 0x0
        122638:	0a000096 	beq	122898 <TMonthView::DrawMonthOverView(void)+0x724>
        12263c:	e59d003c 	ldr	r0, [sp, #60]	; fField60
        122640:	e1570000 	cmp	r7, r0
        122644:	aa00004c 	bge	12277c <TMonthView::DrawMonthOverView(void)+0x608>
        122648:	e28d3048 	add	r3, sp, #72	; 0x48
        12264c:	e92d0008 	stmdb	sp!, {r3}
        122650:	e1a02006 	mov	r2, r6
        122654:	e1a00007 	mov	r0, r7
        122658:	e59d101c 	ldr	r1, [sp, #28]
        12265c:	e59d3010 	ldr	r3, [sp, #16]
        122660:	eb662c1b 	bl	1aad6d4 <$DrawMeetingOverviewLine__FlN31RC5TRect>
        122664:	e28dd004 	add	sp, sp, #4	; 0x4
        122668:	e3a00002 	mov	r0, #2	; 0x2
        12266c:	eb6a7eb6 	bl	1bc214c <$AllocateRefHandle(long)>
        122670:	e1a07000 	mov	r7, r0
        122674:	e5902000 	ldr	r2, [r0]
        122678:	e5980000 	ldr	r0, [r8]
        12267c:	e59d1020 	ldr	r1, [sp, #32]
        122680:	eb6a8f34 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        122684:	e1a00007 	mov	r0, r7
        122688:	eb6a82cb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12268c:	e59d1020 	ldr	r1, [sp, #32]
        122690:	e281a001 	add	sl, r1, #1	; 0x1
        122694:	e3e0720e 	mvn	r7, #-536870912	; 0xe0000000
        122698:	e15a0009 	cmp	sl, r9
        12269c:	aa000032 	bge	12276c <TMonthView::DrawMonthOverView(void)+0x5f8>
        1226a0:	e1a0100a 	mov	r1, sl
        1226a4:	e5980000 	ldr	r0, [r8]
        1226a8:	eb6a86e9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1226ac:	e59d1028 	ldr	r1, [sp, #40]
        1226b0:	e5810000 	str	r0, [r1]
        1226b4:	e51f11e4 	ldr	r1, [pc, #fffffe1c]	; 1224d8 <TMonthView::DrawMonthOverView(void)+0x364>
        1226b8:	e5911000 	ldr	r1, [r1]
        1226bc:	e5911000 	ldr	r1, [r1]
        1226c0:	eb6a86e6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1226c4:	e5850000 	str	r0, [r5]
        1226c8:	e51f11f4 	ldr	r1, [pc, #fffffe0c]	; 1224dc <TMonthView::DrawMonthOverView(void)+0x368>
        1226cc:	e5911000 	ldr	r1, [r1]
        1226d0:	e5911000 	ldr	r1, [r1]
        1226d4:	eb6a86d5 	bl	1bc4230 <$EQRef__FlT1>
        1226d8:	e3300000 	teq	r0, #0	; 0x0
        1226dc:	1a00000d 	bne	122718 <TMonthView::DrawMonthOverView(void)+0x5a4>
        1226e0:	e51f0208 	ldr	r0, [pc, #fffffdf8]	; 1224e0 <TMonthView::DrawMonthOverView(void)+0x36c>
        1226e4:	e5900000 	ldr	r0, [r0]
        1226e8:	e5901000 	ldr	r1, [r0]
        1226ec:	e5950000 	ldr	r0, [r5]
        1226f0:	eb6a86ce 	bl	1bc4230 <$EQRef__FlT1>
        1226f4:	e3300000 	teq	r0, #0	; 0x0
        1226f8:	1a000006 	bne	122718 <TMonthView::DrawMonthOverView(void)+0x5a4>
        1226fc:	e51f0220 	ldr	r0, [pc, #fffffde0]	; 1224e4 <TMonthView::DrawMonthOverView(void)+0x370>
        122700:	e5900000 	ldr	r0, [r0]
        122704:	e5901000 	ldr	r1, [r0]
        122708:	e5950000 	ldr	r0, [r5]
        12270c:	eb6a86c7 	bl	1bc4230 <$EQRef__FlT1>
        122710:	e3300000 	teq	r0, #0	; 0x0
        122714:	0a000011 	beq	122760 <TMonthView::DrawMonthOverView(void)+0x5ec>
        122718:	e59d10a0 	ldr	r1, [sp, #160]
        12271c:	e28d0028 	add	r0, sp, #40	; 0x28
        122720:	eb664084 	bl	1ab2938 <$GetMeetingSlot__FRC6RefVarT1>
        122724:	e3100003 	tst	r0, #3	; 0x3
        122728:	01a00140 	moveq	r0, r0, asr #2
        12272c:	0a000000 	beq	122734 <TMonthView::DrawMonthOverView(void)+0x5c0>
        122730:	eb6a7e79 	bl	1bc211c <$_RINTError(long)>
        122734:	e1a07000 	mov	r7, r0
        122738:	e59d10a4 	ldr	r1, [sp, #164]
        12273c:	e28d0028 	add	r0, sp, #40	; 0x28
        122740:	eb66407c 	bl	1ab2938 <$GetMeetingSlot__FRC6RefVarT1>
        122744:	e3100003 	tst	r0, #3	; 0x3
        122748:	01a00140 	moveq	r0, r0, asr #2
        12274c:	0a000000 	beq	122754 <TMonthView::DrawMonthOverView(void)+0x5e0>
        122750:	eb6a7e71 	bl	1bc211c <$_RINTError(long)>
        122754:	e0801007 	add	r1, r0, r7
        122758:	e58d1018 	str	r1, [sp, #24]
        12275c:	ea000002 	b	12276c <TMonthView::DrawMonthOverView(void)+0x5f8>
        122760:	e28aa001 	add	sl, sl, #1	; 0x1
        122764:	e15a0009 	cmp	sl, r9
        122768:	baffffcc 	blt	1226a0 <TMonthView::DrawMonthOverView(void)+0x52c>
        12276c:	e58da020 	str	sl, [sp, #32]
        122770:	e59d003c 	ldr	r0, [sp, #60]	; fField60
        122774:	e1570000 	cmp	r7, r0
        122778:	baffffb2 	blt	122648 <TMonthView::DrawMonthOverView(void)+0x4d4>
        12277c:	e3a0a000 	mov	sl, #0	; 0x0
        122780:	e3a00002 	mov	r0, #2	; 0x2
        122784:	e59d1028 	ldr	r1, [sp, #40]
        122788:	e5810000 	str	r0, [r1]
        12278c:	e59d1014 	ldr	r1, [sp, #20]
        122790:	e59d203c 	ldr	r2, [sp, #60]	; fField60
        122794:	e1510002 	cmp	r1, r2
        122798:	aa000038 	bge	122880 <TMonthView::DrawMonthOverView(void)+0x70c>
        12279c:	e59d0010 	ldr	r0, [sp, #16]
        1227a0:	e3300000 	teq	r0, #0	; 0x0
        1227a4:	0a00001b 	beq	122818 <TMonthView::DrawMonthOverView(void)+0x6a4>
        1227a8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1227ac:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        1227b0:	e5900000 	ldr	r0, [r0]
        1227b4:	e3300002 	teq	r0, #2	; 0x2
        1227b8:	1a000005 	bne	1227d4 <TMonthView::DrawMonthOverView(void)+0x660>
        1227bc:	e59d0010 	ldr	r0, [sp, #16]
        1227c0:	e5900000 	ldr	r0, [r0]
        1227c4:	e59d1024 	ldr	r1, [sp, #36]
        1227c8:	eb6a86a1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1227cc:	e59d1030 	ldr	r1, [sp, #48]	; fField48
        1227d0:	e5810000 	str	r0, [r1]
        1227d4:	e3a00002 	mov	r0, #2	; 0x2
        1227d8:	eb6a7e5b 	bl	1bc214c <$AllocateRefHandle(long)>
        1227dc:	e58d0004 	str	r0, [sp, #4]
        1227e0:	e28d0004 	add	r0, sp, #4	; 0x4
        1227e4:	e28d1030 	add	r1, sp, #48	; 0x30
        1227e8:	eb663402 	bl	1aaf7f8 <$FGetMeetingIcon>
        1227ec:	eb6a7e56 	bl	1bc214c <$AllocateRefHandle(long)>
        1227f0:	e58d0000 	str	r0, [sp]
        1227f4:	e1a0000d 	mov	r0, sp
        1227f8:	e28d2050 	add	r2, sp, #80	; 0x50
        1227fc:	e1a0100a 	mov	r1, sl
        122800:	eb662bae 	bl	1aad6c0 <$DrawDayNoteIcon(RefVar const &, long, TRect const &)>
        122804:	e59d0000 	ldr	r0, [sp]
        122808:	eb6a826b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12280c:	e59d0004 	ldr	r0, [sp, #4]
        122810:	eb6a8269 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122814:	e28dd008 	add	sp, sp, #8	; 0x8
        122818:	e28aa001 	add	sl, sl, #1	; 0x1
        12281c:	e59d101c 	ldr	r1, [sp, #28]
        122820:	e2811001 	add	r1, r1, #1	; 0x1
        122824:	e58d101c 	str	r1, [sp, #28]
        122828:	e59d0024 	ldr	r0, [sp, #36]
        12282c:	e1510000 	cmp	r1, r0
        122830:	a3e0020e 	mvnge	r0, #-536870912	; 0xe0000000
        122834:	aa00000c 	bge	12286c <TMonthView::DrawMonthOverView(void)+0x6f8>
        122838:	e59d0008 	ldr	r0, [sp, #8]
        12283c:	e5900000 	ldr	r0, [r0]
        122840:	e59d101c 	ldr	r1, [sp, #28]
        122844:	eb6a8682 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        122848:	e59d1028 	ldr	r1, [sp, #40]
        12284c:	e5810000 	str	r0, [r1]
        122850:	e59d10a0 	ldr	r1, [sp, #160]
        122854:	e28d0028 	add	r0, sp, #40	; 0x28
        122858:	eb664036 	bl	1ab2938 <$GetMeetingSlot__FRC6RefVarT1>
        12285c:	e3100003 	tst	r0, #3	; 0x3
        122860:	01a00140 	moveq	r0, r0, asr #2
        122864:	0a000000 	beq	12286c <TMonthView::DrawMonthOverView(void)+0x6f8>
        122868:	eb6a7e2b 	bl	1bc211c <$_RINTError(long)>
        12286c:	e58d0014 	str	r0, [sp, #20]
        122870:	e1a01000 	mov	r1, r0
        122874:	e59d003c 	ldr	r0, [sp, #60]	; fField60
        122878:	e1510000 	cmp	r1, r0
        12287c:	baffffc6 	blt	12279c <TMonthView::DrawMonthOverView(void)+0x628>
        122880:	e59d0010 	ldr	r0, [sp, #16]
        122884:	e3300000 	teq	r0, #0	; 0x0
        122888:	1a00007e 	bne	122a88 <TMonthView::DrawMonthOverView(void)+0x914>
        12288c:	e35a0000 	cmp	sl, #0	; 0x0
        122890:	da00007c 	ble	122a88 <TMonthView::DrawMonthOverView(void)+0x914>
        122894:	ea000077 	b	122a78 <TMonthView::DrawMonthOverView(void)+0x904>
        122898:	e3a03000 	mov	r3, #0	; 0x0
        12289c:	e92d0008 	stmdb	sp!, {r3}
        1228a0:	e2863e5a 	add	r3, r6, #1440	; 0x5a0
        1228a4:	e1a02006 	mov	r2, r6
        1228a8:	e58d30a0 	str	r3, [sp, #160]
        1228ac:	e28d1038 	add	r1, sp, #56	; 0x38
        1228b0:	e28d003c 	add	r0, sp, #60	; 0x3c
        1228b4:	eb65cc77 	bl	1a95a98 <$GetAllMeetings__FRC6RefVarT1lT3Uc>
        1228b8:	e28dd004 	add	sp, sp, #4	; 0x4
        1228bc:	e5880000 	str	r0, [r8]
        1228c0:	e1a01000 	mov	r1, r0
        1228c4:	e3300002 	teq	r0, #2	; 0x2
        1228c8:	0a000002 	beq	1228d8 <TMonthView::DrawMonthOverView(void)+0x764>
        1228cc:	e1a00001 	mov	r0, r1
        1228d0:	eb6a8a75 	bl	1bc52ac <$Length(long)>
        1228d4:	ea000000 	b	1228dc <TMonthView::DrawMonthOverView(void)+0x768>
        1228d8:	e3a00000 	mov	r0, #0	; 0x0
        1228dc:	e1a09000 	mov	r9, r0
        1228e0:	e3a0a000 	mov	sl, #0	; 0x0
        1228e4:	e3500000 	cmp	r0, #0	; 0x0
        1228e8:	da000029 	ble	122994 <TMonthView::DrawMonthOverView(void)+0x820>
        1228ec:	e1a0100a 	mov	r1, sl
        1228f0:	e5980000 	ldr	r0, [r8]
        1228f4:	eb6a8656 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1228f8:	e59d1028 	ldr	r1, [sp, #40]
        1228fc:	e5810000 	str	r0, [r1]
        122900:	e51f1430 	ldr	r1, [pc, #fffffbd0]	; 1224d8 <TMonthView::DrawMonthOverView(void)+0x364>
        122904:	e5911000 	ldr	r1, [r1]
        122908:	e5911000 	ldr	r1, [r1]
        12290c:	eb6a8653 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        122910:	e5850000 	str	r0, [r5]
        122914:	e51f1440 	ldr	r1, [pc, #fffffbc0]	; 1224dc <TMonthView::DrawMonthOverView(void)+0x368>
        122918:	e5911000 	ldr	r1, [r1]
        12291c:	e5911000 	ldr	r1, [r1]
        122920:	eb6a8642 	bl	1bc4230 <$EQRef__FlT1>
        122924:	e3300000 	teq	r0, #0	; 0x0
        122928:	1a00000d 	bne	122964 <TMonthView::DrawMonthOverView(void)+0x7f0>
        12292c:	e51f0454 	ldr	r0, [pc, #fffffbac]	; 1224e0 <TMonthView::DrawMonthOverView(void)+0x36c>
        122930:	e5900000 	ldr	r0, [r0]
        122934:	e5901000 	ldr	r1, [r0]
        122938:	e5950000 	ldr	r0, [r5]
        12293c:	eb6a863b 	bl	1bc4230 <$EQRef__FlT1>
        122940:	e3300000 	teq	r0, #0	; 0x0
        122944:	1a000006 	bne	122964 <TMonthView::DrawMonthOverView(void)+0x7f0>
        122948:	e51f046c 	ldr	r0, [pc, #fffffb94]	; 1224e4 <TMonthView::DrawMonthOverView(void)+0x370>
        12294c:	e5900000 	ldr	r0, [r0]
        122950:	e5901000 	ldr	r1, [r0]
        122954:	e5950000 	ldr	r0, [r5]
        122958:	eb6a8634 	bl	1bc4230 <$EQRef__FlT1>
        12295c:	e3300000 	teq	r0, #0	; 0x0
        122960:	0a000007 	beq	122984 <TMonthView::DrawMonthOverView(void)+0x810>
        122964:	e28d3048 	add	r3, sp, #72	; 0x48
        122968:	e92d0008 	stmdb	sp!, {r3}
        12296c:	e1a02006 	mov	r2, r6
        122970:	e1a00007 	mov	r0, r7
        122974:	e59d101c 	ldr	r1, [sp, #28]
        122978:	e59d3010 	ldr	r3, [sp, #16]
        12297c:	eb662b54 	bl	1aad6d4 <$DrawMeetingOverviewLine__FlN31RC5TRect>
        122980:	e28dd004 	add	sp, sp, #4	; 0x4
        122984:	e28a1001 	add	r1, sl, #1	; 0x1
        122988:	e1a0a001 	mov	sl, r1
        12298c:	e1510009 	cmp	r1, r9
        122990:	baffffd5 	blt	1228ec <TMonthView::DrawMonthOverView(void)+0x778>
        122994:	e3a03000 	mov	r3, #0	; 0x0
        122998:	e92d0008 	stmdb	sp!, {r3}
        12299c:	e1a02006 	mov	r2, r6
        1229a0:	e59d30a0 	ldr	r3, [sp, #160]
        1229a4:	e28d1030 	add	r1, sp, #48	; 0x30
        1229a8:	e28d0034 	add	r0, sp, #52	; 0x34
        1229ac:	eb65cc39 	bl	1a95a98 <$GetAllMeetings__FRC6RefVarT1lT3Uc>
        1229b0:	e28dd004 	add	sp, sp, #4	; 0x4
        1229b4:	e59d1008 	ldr	r1, [sp, #8]
        1229b8:	e5810000 	str	r0, [r1]
        1229bc:	e1a01000 	mov	r1, r0
        1229c0:	e3300002 	teq	r0, #2	; 0x2
        1229c4:	0a000002 	beq	1229d4 <TMonthView::DrawMonthOverView(void)+0x860>
        1229c8:	e1a00001 	mov	r0, r1
        1229cc:	eb6a8a36 	bl	1bc52ac <$Length(long)>
        1229d0:	ea000000 	b	1229d8 <TMonthView::DrawMonthOverView(void)+0x864>
        1229d4:	e3a00000 	mov	r0, #0	; 0x0
        1229d8:	e3a0a000 	mov	sl, #0	; 0x0
        1229dc:	e58d0024 	str	r0, [sp, #36]
        1229e0:	e3500000 	cmp	r0, #0	; 0x0
        1229e4:	da00001e 	ble	122a64 <TMonthView::DrawMonthOverView(void)+0x8f0>
        1229e8:	e59d0010 	ldr	r0, [sp, #16]
        1229ec:	e3300000 	teq	r0, #0	; 0x0
        1229f0:	0a000017 	beq	122a54 <TMonthView::DrawMonthOverView(void)+0x8e0>
        1229f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1229f8:	e59d0010 	ldr	r0, [sp, #16]
        1229fc:	e5900000 	ldr	r0, [r0]
        122a00:	e1a0100a 	mov	r1, sl
        122a04:	eb6a8612 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        122a08:	e59d1030 	ldr	r1, [sp, #48]	; fField48
        122a0c:	e5810000 	str	r0, [r1]
        122a10:	e3a00002 	mov	r0, #2	; 0x2
        122a14:	eb6a7dcc 	bl	1bc214c <$AllocateRefHandle(long)>
        122a18:	e58d0004 	str	r0, [sp, #4]
        122a1c:	e28d0004 	add	r0, sp, #4	; 0x4
        122a20:	e28d1030 	add	r1, sp, #48	; 0x30
        122a24:	eb663373 	bl	1aaf7f8 <$FGetMeetingIcon>
        122a28:	eb6a7dc7 	bl	1bc214c <$AllocateRefHandle(long)>
        122a2c:	e58d0000 	str	r0, [sp]
        122a30:	e1a0000d 	mov	r0, sp
        122a34:	e28d2050 	add	r2, sp, #80	; 0x50
        122a38:	e1a0100a 	mov	r1, sl
        122a3c:	eb662b1f 	bl	1aad6c0 <$DrawDayNoteIcon(RefVar const &, long, TRect const &)>
        122a40:	e59d0000 	ldr	r0, [sp]
        122a44:	eb6a81dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122a48:	e59d0004 	ldr	r0, [sp, #4]
        122a4c:	eb6a81da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122a50:	e28dd008 	add	sp, sp, #8	; 0x8
        122a54:	e28aa001 	add	sl, sl, #1	; 0x1
        122a58:	e59d0024 	ldr	r0, [sp, #36]
        122a5c:	e15a0000 	cmp	sl, r0
        122a60:	baffffe0 	blt	1229e8 <TMonthView::DrawMonthOverView(void)+0x874>
        122a64:	e59d0010 	ldr	r0, [sp, #16]
        122a68:	e3300000 	teq	r0, #0	; 0x0
        122a6c:	1a000005 	bne	122a88 <TMonthView::DrawMonthOverView(void)+0x914>
        122a70:	e35a0000 	cmp	sl, #0	; 0x0
        122a74:	da000003 	ble	122a88 <TMonthView::DrawMonthOverView(void)+0x914>
        122a78:	e59d200c 	ldr	r2, [sp, #12]
        122a7c:	e28d1048 	add	r1, sp, #72	; 0x48
        122a80:	e1a0000a 	mov	r0, sl
        122a84:	eb662b0c 	bl	1aad6bc <$DrawDayNoteGlyphs(long, TRect const &, TRect const &)>
        122a88:	e2866e5a 	add	r6, r6, #1440	; 0x5a0
        122a8c:	e59d003c 	ldr	r0, [sp, #60]	; fField60
        122a90:	e2800e5a 	add	r0, r0, #1440	; 0x5a0
        122a94:	e58d003c 	str	r0, [sp, #60]	; fField60
        122a98:	e59da000 	ldr	sl, [sp]
        122a9c:	e35a0009 	cmp	sl, #9	; 0x9
        122aa0:	b3a00020 	movlt	r0, #32	; 0x20
        122aa4:	ba000004 	blt	122abc <TMonthView::DrawMonthOverView(void)+0x948>
        122aa8:	e59da000 	ldr	sl, [sp]
        122aac:	e28a0001 	add	r0, sl, #1	; 0x1
        122ab0:	eb6a3fa3 	bl	1bb2944 <$__rt_sdiv10>
        122ab4:	e20000ff 	and	r0, r0, #255	; 0xff
        122ab8:	e2800030 	add	r0, r0, #48	; 0x30
        122abc:	eb6a0a0d 	bl	1ba52f8 <$U_CONST_CHAR>
        122ac0:	e5cd0051 	strb	r0, [sp, #81]	; fField81
        122ac4:	e1a00440 	mov	r0, r0, asr #8
        122ac8:	e5cd0050 	strb	r0, [sp, #80]	; fField80
        122acc:	e59da000 	ldr	sl, [sp]
        122ad0:	e28a0001 	add	r0, sl, #1	; 0x1
        122ad4:	e1a0a000 	mov	sl, r0
        122ad8:	eb6a3f99 	bl	1bb2944 <$__rt_sdiv10>
        122adc:	e20100ff 	and	r0, r1, #255	; 0xff
        122ae0:	e2800030 	add	r0, r0, #48	; 0x30
        122ae4:	eb6a0a03 	bl	1ba52f8 <$U_CONST_CHAR>
        122ae8:	e5cd0053 	strb	r0, [sp, #83]	; fField83
        122aec:	e1a00440 	mov	r0, r0, asr #8
        122af0:	e5cd0052 	strb	r0, [sp, #82]	; fField82
        122af4:	e59d0048 	ldr	r0, [sp, #72]	; fField72
        122af8:	e1a01800 	mov	r1, r0, lsl #16
        122afc:	e59d004a 	ldr	r0, [sp, #74]	; fField74
        122b00:	e2800009 	add	r0, r0, #9	; 0x9
        122b04:	e1a00800 	mov	r0, r0, lsl #16
        122b08:	e3a03000 	mov	r3, #0	; 0x0
        122b0c:	e28d2080 	add	r2, sp, #128	; 0x80
        122b10:	e92d000c 	stmdb	sp!, {r2, r3}
        122b14:	e24dd008 	sub	sp, sp, #8	; 0x8
        122b18:	e58d0004 	str	r0, [sp, #4]
        122b1c:	e58d1000 	str	r1, [sp]
        122b20:	e28d206c 	add	r2, sp, #108	; 0x6c
        122b24:	e28d0060 	add	r0, sp, #96	; 0x60
        122b28:	e3a01002 	mov	r1, #2	; 0x2
        122b2c:	eb68aef8 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        122b30:	e5ada010 	str	sl, [sp, #16]!
        122b34:	e59d0044 	ldr	r0, [sp, #68]	; fField68
        122b38:	e15a0000 	cmp	sl, r0
        122b3c:	bafffe8a 	blt	12256c <TMonthView::DrawMonthOverView(void)+0x3f8>
        122b40:	e28dd004 	add	sp, sp, #4	; 0x4
        122b44:	e59d0004 	ldr	r0, [sp, #4]
        122b48:	eb6a819b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122b4c:	e1a00008 	mov	r0, r8
        122b50:	eb6a8199 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122b54:	e1a00005 	mov	r0, r5
        122b58:	eb6a8197 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122b5c:	e59d0024 	ldr	r0, [sp, #36]
        122b60:	eb6a8195 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122b64:	e59d0028 	ldr	r0, [sp, #40]
        122b68:	eb6a8193 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122b6c:	e59d002c 	ldr	r0, [sp, #44]
        122b70:	eb6a8191 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122b74:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        122b78:	eb6a818f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122b7c:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        122b80:	eb6a818d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122b84:	e28dd05c 	add	sp, sp, #92	; 0x5c
        122b88:	e59d001c 	ldr	r0, [sp, #28]
        122b8c:	e3300000 	teq	r0, #0	; 0x0
        122b90:	159d001c 	ldrne	r0, [sp, #28]
        122b94:	1b68aad0 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        122b98:	e59d0000 	ldr	r0, [sp]
        122b9c:	eb6a8186 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        122ba0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

