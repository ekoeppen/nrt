#include "include/TXRulerUI.h"

/**
 * Symbol: TXRulerUI::Focus(TXRulerUIFocusInfo *)
 * Address: 002433d4
 */
TXRulerUI::Focus(TXRulerUIFocusInfo *) {
    /*
        2433d4:	e1a0c00d 	mov	ip, sp
        2433d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2433dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2433e0:	e1a05000 	mov	r5, r0
        2433e4:	e1a04001 	mov	r4, r1
        2433e8:	e1a00001 	mov	r0, r1
        2433ec:	eb66b0ec 	bl	1bef7a4 <$GetPort(GrafPort **)>
        2433f0:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2433f4:	eb655e49 	bl	1b9ad20 <TXStyledText::$GetTextPort( const(void))>
        2433f8:	eb66b0eb 	bl	1bef7ac <$SetPort(GrafPort *)>
        2433fc:	e59f0028 	ldr	r0, [pc, #28]	; 24342c <TXRulerUI::Focus(TXRulerUIFocusInfo *)+0x58>	; fField28
        243400:	e5900000 	ldr	r0, [r0]
        243404:	eb65182f 	bl	1b894c8 <TXTempReferences::$Get(void)>
        243408:	e5a40004 	str	r0, [r4, #4]!	; fField4
        24340c:	eb6430e9 	bl	1b4f7b8 <$GetClip(Region **)>
        243410:	e24dd008 	sub	sp, sp, #8	; 0x8
        243414:	e1a0100d 	mov	r1, sp
        243418:	e1a00005 	mov	r0, r5
        24341c:	eb6551e8 	bl	1b97bc4 <TXRulerUI::$GetBounds( const(Rect *))>
        243420:	e1a0000d 	mov	r0, sp
        243424:	eb64289b 	bl	1b4d698 <$ClipRect(Rect *)>
        243428:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24342c:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXRulerUI::Unfocus(TXRulerUIFocusInfo const &)
 * Address: 00243430
 */
TXRulerUI::Unfocus(TXRulerUIFocusInfo const &) {
    /*
        243430:	e1a0c00d 	mov	ip, sp
        243434:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        243438:	e24cb004 	sub	fp, ip, #4	; 0x4
        24343c:	e1a04001 	mov	r4, r1
        243440:	e5910004 	ldr	r0, [r1, #4]	; fField4
        243444:	eb644164 	bl	1b539dc <$SetClip(Region **)>
        243448:	e59f0014 	ldr	r0, [pc, #14]	; 243464 <TXRulerUI::Unfocus(TXRulerUIFocusInfo const &)+0x34>
        24344c:	e5900000 	ldr	r0, [r0]
        243450:	e5941004 	ldr	r1, [r4, #4]	; fField4
        243454:	eb65181c 	bl	1b894cc <TXTempReferences::$Done(void *)>
        243458:	e5940000 	ldr	r0, [r4]
        24345c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        243460:	ea66b0d1 	b	1bef7ac <$SetPort(GrafPort *)>
        243464:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXRulerUI::CalcCurrentRulerObject( const(void))
 * Address: 00243468
 */
TXRulerUI::CalcCurrentRulerObject( const(void)) {
    /*
        243468:	e1a0c00d 	mov	ip, sp
        24346c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        243470:	e24cb004 	sub	fp, ip, #4	; 0x4
        243474:	e1a04000 	mov	r4, r0
        243478:	e24dd010 	sub	sp, sp, #16	; 0x10
        24347c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        243480:	e5900014 	ldr	r0, [r0, #20]	; fField20
        243484:	e1a0100d 	mov	r1, sp
        243488:	eb6534fb 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        24348c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        243490:	e89d0006 	ldmia	sp, {r1, r2}
        243494:	e5b03020 	ldr	r3, [r0, #32]!	; fField32
        243498:	e1a00003 	mov	r0, r3
        24349c:	e5933000 	ldr	r3, [r3]
        2434a0:	e1a0e00f 	mov	lr, pc
        2434a4:	e283f00c 	add	pc, r3, #12	; 0xc
        2434a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerUI::GetCurrFrameTextBounds( const(Rect *))
 * Address: 002434ac
 */
TXRulerUI::GetCurrFrameTextBounds( const(Rect *)) {
    /*
        2434ac:	e1a0c00d 	mov	ip, sp
        2434b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2434b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2434b8:	e1a04000 	mov	r4, r0
        2434bc:	e1a05001 	mov	r5, r1
        2434c0:	e24dd010 	sub	sp, sp, #16	; 0x10
        2434c4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2434c8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2434cc:	e1a0100d 	mov	r1, sp
        2434d0:	eb6534e9 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        2434d4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2434d8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        2434dc:	e89d0006 	ldmia	sp, {r1, r2}
        2434e0:	eb652c87 	bl	1b8e704 <TXFrameFormatter::$CharToFrame( const(TXOffset))>
        2434e4:	e1a01000 	mov	r1, r0
        2434e8:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        2434ec:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2434f0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2434f4:	e1a02005 	mov	r2, r5
        2434f8:	eb6530a4 	bl	1b8f790 <TXFrames::$GetTextBounds( const(long, Rect *))>
        2434fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerUI::CheckTextBounds(void)
 * Address: 00243500
 */
TXRulerUI::CheckTextBounds(void) {
    /*
        243500:	e1a0c00d 	mov	ip, sp
        243504:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        243508:	e24cb004 	sub	fp, ip, #4	; 0x4
        24350c:	e1a04000 	mov	r4, r0
        243510:	e24dd008 	sub	sp, sp, #8	; 0x8
        243514:	e1a0100d 	mov	r1, sp
        243518:	eb6551ad 	bl	1b97bd4 <TXRulerUI::$GetCurrFrameTextBounds( const(Rect *))>
        24351c:	e5941016 	ldr	r1, [r4, #22]	; fField22
        243520:	e1a01841 	mov	r1, r1, asr #16
        243524:	e59d0002 	ldr	r0, [sp, #2]
        243528:	e1310840 	teq	r1, r0, asr #16
        24352c:	0594101a 	ldreq	r1, [r4, #26]	; fField26
        243530:	01a01841 	moveq	r1, r1, asr #16
        243534:	059d0006 	ldreq	r0, [sp, #6]	; fField6
        243538:	01310840 	teqeq	r1, r0, asr #16
        24353c:	03a00000 	moveq	r0, #0	; 0x0
        243540:	0a00000d 	beq	24357c <TXRulerUI::CheckTextBounds(void)+0x7c>
        243544:	e59d0000 	ldr	r0, [sp]
        243548:	e5c40017 	strb	r0, [r4, #23]	; fField23
        24354c:	e1a00440 	mov	r0, r0, asr #8
        243550:	e5c40016 	strb	r0, [r4, #22]	; fField22
        243554:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        243558:	e5c4001b 	strb	r0, [r4, #27]	; fField27
        24355c:	e1a00440 	mov	r0, r0, asr #8
        243560:	e5c4001a 	strb	r0, [r4, #26]	; fField26
        243564:	e28420a0 	add	r2, r4, #160	; 0xa0
        243568:	e2841014 	add	r1, r4, #20	; 0x14
        24356c:	e1a00002 	mov	r0, r2
        243570:	e1a0e00f 	mov	lr, pc
        243574:	e592f000 	ldr	pc, [r2]
        243578:	e3a00001 	mov	r0, #1	; 0x1
        24357c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerUI::Draw(void)
 * Address: 00243580
 */
TXRulerUI::Draw(void) {
    /*
        243580:	e1a0c00d 	mov	ip, sp
        243584:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        243588:	e24cb004 	sub	fp, ip, #4	; 0x4
        24358c:	e1a04000 	mov	r4, r0
        243590:	e24dd008 	sub	sp, sp, #8	; 0x8
        243594:	e1a0100d 	mov	r1, sp
        243598:	e5902000 	ldr	r2, [r0]
        24359c:	e1a0e00f 	mov	lr, pc
        2435a0:	e282f004 	add	pc, r2, #4	; 0x4
        2435a4:	e284000c 	add	r0, r4, #12	; 0xc
        2435a8:	eb642c67 	bl	1b4e74c <$EraseRect(Rect *)>
        2435ac:	e28400a0 	add	r0, r4, #160	; 0xa0
        2435b0:	e5901000 	ldr	r1, [r0]
        2435b4:	e1a0e00f 	mov	lr, pc
        2435b8:	e281f008 	add	pc, r1, #8	; 0x8
        2435bc:	e284001c 	add	r0, r4, #28	; 0x1c
        2435c0:	e5901000 	ldr	r1, [r0]
        2435c4:	e1a0e00f 	mov	lr, pc
        2435c8:	e281f008 	add	pc, r1, #8	; 0x8
        2435cc:	e1a0100d 	mov	r1, sp
        2435d0:	e1a00004 	mov	r0, r4
        2435d4:	e5942000 	ldr	r2, [r4]
        2435d8:	e1a0e00f 	mov	lr, pc
        2435dc:	e282f008 	add	pc, r2, #8	; 0x8
        2435e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerUI::HitTest(Point)
 * Address: 002435e4
 */
TXRulerUI::HitTest(Point) {
    /*
        2435e4:	e1a0c00d 	mov	ip, sp
        2435e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2435ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2435f0:	e1a04001 	mov	r4, r1
        2435f4:	e1a05000 	mov	r5, r0
        2435f8:	e280100c 	add	r1, r0, #12	; 0xc
        2435fc:	e1a00004 	mov	r0, r4
        243600:	eb643ccd 	bl	1b5293c <$PtInRect(Point, Rect *)>
        243604:	e3300000 	teq	r0, #0	; 0x0
        243608:	0a000011 	beq	243654 <TXRulerUI::HitTest(Point)+0x70>
        24360c:	e285201c 	add	r2, r5, #28	; 0x1c
        243610:	e1a00002 	mov	r0, r2
        243614:	e1a01004 	mov	r1, r4
        243618:	e5922000 	ldr	r2, [r2]
        24361c:	e1a0e00f 	mov	lr, pc
        243620:	e282f00c 	add	pc, r2, #12	; 0xc
        243624:	e3300000 	teq	r0, #0	; 0x0
        243628:	1a000007 	bne	24364c <TXRulerUI::HitTest(Point)+0x68>
        24362c:	e28520a0 	add	r2, r5, #160	; 0xa0
        243630:	e1a00002 	mov	r0, r2
        243634:	e1a01004 	mov	r1, r4
        243638:	e5922000 	ldr	r2, [r2]
        24363c:	e1a0e00f 	mov	lr, pc
        243640:	e282f00c 	add	pc, r2, #12	; 0xc
        243644:	e3300000 	teq	r0, #0	; 0x0
        243648:	0a000001 	beq	243654 <TXRulerUI::HitTest(Point)+0x70>
        24364c:	e3a00001 	mov	r0, #1	; 0x1
        243650:	ea000000 	b	243658 <TXRulerUI::HitTest(Point)+0x74>
        243654:	e3a00000 	mov	r0, #0	; 0x0
        243658:	e20000ff 	and	r0, r0, #255	; 0xff
        24365c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerUI::Click(TXPointingDevice *, long, TXAttrValues *, long *)
 * Address: 00243660
 */
TXRulerUI::Click(TXPointingDevice *, long, TXAttrValues *, long *) {
    /*
        243660:	e1a0c00d 	mov	ip, sp
        243664:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        243668:	e24cb004 	sub	fp, ip, #4	; 0x4
        24366c:	e1a04000 	mov	r4, r0
        243670:	e1a05001 	mov	r5, r1
        243674:	e1a07002 	mov	r7, r2
        243678:	e1a06003 	mov	r6, r3
        24367c:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        243680:	e24dd004 	sub	sp, sp, #4	; 0x4
        243684:	e1a0000d 	mov	r0, sp
        243688:	e1a0e00f 	mov	lr, pc
        24368c:	e591f000 	ldr	pc, [r1]
        243690:	e284100c 	add	r1, r4, #12	; 0xc
        243694:	e49d8004 	ldr	r8, [sp], #4	; fField4
        243698:	e1a00008 	mov	r0, r8
        24369c:	eb643ca6 	bl	1b5293c <$PtInRect(Point, Rect *)>
        2436a0:	e3300000 	teq	r0, #0	; 0x0
        2436a4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2436a8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2436ac:	e1a0100d 	mov	r1, sp
        2436b0:	e1a00004 	mov	r0, r4
        2436b4:	e5942000 	ldr	r2, [r4]
        2436b8:	e1a0e00f 	mov	lr, pc
        2436bc:	e282f004 	add	pc, r2, #4	; 0x4
        2436c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2436c4:	e284001c 	add	r0, r4, #28	; 0x1c
        2436c8:	e1a0a000 	mov	sl, r0
        2436cc:	e1a0100d 	mov	r1, sp
        2436d0:	eb655149 	bl	1b97bfc <TXRulerBar::$GetBounds( const(Rect *))>
        2436d4:	e1a0100d 	mov	r1, sp
        2436d8:	e1a00008 	mov	r0, r8
        2436dc:	eb643c96 	bl	1b5293c <$PtInRect(Point, Rect *)>
        2436e0:	e3300000 	teq	r0, #0	; 0x0
        2436e4:	1a000008 	bne	24370c <TXRulerUI::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0xac>
        2436e8:	e28400a0 	add	r0, r4, #160	; 0xa0
        2436ec:	e1a0a000 	mov	sl, r0
        2436f0:	e1a0100d 	mov	r1, sp
        2436f4:	eb655140 	bl	1b97bfc <TXRulerBar::$GetBounds( const(Rect *))>
        2436f8:	e1a0100d 	mov	r1, sp
        2436fc:	e1a00008 	mov	r0, r8
        243700:	eb643c8d 	bl	1b5293c <$PtInRect(Point, Rect *)>
        243704:	e3300000 	teq	r0, #0	; 0x0
        243708:	0a00000b 	beq	24373c <TXRulerUI::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0xdc>
        24370c:	e1a03009 	mov	r3, r9
        243710:	e92d0008 	stmdb	sp!, {r3}
        243714:	e1a03006 	mov	r3, r6
        243718:	e1a02007 	mov	r2, r7
        24371c:	e1a01005 	mov	r1, r5
        243720:	e1a0000a 	mov	r0, sl
        243724:	e59ac000 	ldr	ip, [sl]
        243728:	e1a0e00f 	mov	lr, pc
        24372c:	e28cf010 	add	pc, ip, #16	; 0x10
        243730:	e28dd004 	add	sp, sp, #4	; 0x4
        243734:	e1a05000 	mov	r5, r0
        243738:	ea000000 	b	243740 <TXRulerUI::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0xe0>
        24373c:	e3a05000 	mov	r5, #0	; 0x0
        243740:	e28d1008 	add	r1, sp, #8	; 0x8
        243744:	e1a00004 	mov	r0, r4
        243748:	e5942000 	ldr	r2, [r4]
        24374c:	e1a0e00f 	mov	lr, pc
        243750:	e282f008 	add	pc, r2, #8	; 0x8
        243754:	e1a00005 	mov	r0, r5
        243758:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerUI::CheckUpdate(unsigned char)
 * Address: 0024375c
 */
TXRulerUI::CheckUpdate(unsigned char) {
    /*
        24375c:	e1a0c00d 	mov	ip, sp
        243760:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        243764:	e24cb004 	sub	fp, ip, #4	; 0x4
        243768:	e1a04000 	mov	r4, r0
        24376c:	e20170ff 	and	r7, r1, #255	; 0xff
        243770:	eb655116 	bl	1b97bd0 <TXRulerUI::$CalcCurrentRulerObject( const(void))>
        243774:	e1a05000 	mov	r5, r0
        243778:	e1a00004 	mov	r0, r4
        24377c:	eb655115 	bl	1b97bd8 <TXRulerUI::$CheckTextBounds(void)>
        243780:	e1a06000 	mov	r6, r0
        243784:	e1a00005 	mov	r0, r5
        243788:	e5941008 	ldr	r1, [r4, #8]	; fField8
        24378c:	e5952000 	ldr	r2, [r5]
        243790:	e1a0e00f 	mov	lr, pc
        243794:	e282f024 	add	pc, r2, #36	; 0x24
        243798:	e3300000 	teq	r0, #0	; 0x0
        24379c:	0a000001 	beq	2437a8 <TXRulerUI::CheckUpdate(unsigned char)+0x4c>
        2437a0:	e3360000 	teq	r6, #0	; 0x0
        2437a4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2437a8:	e3370000 	teq	r7, #0	; 0x0
        2437ac:	1a000005 	bne	2437c8 <TXRulerUI::CheckUpdate(unsigned char)+0x6c>
        2437b0:	e1a01005 	mov	r1, r5
        2437b4:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        2437b8:	e1a00002 	mov	r0, r2
        2437bc:	e5922000 	ldr	r2, [r2]
        2437c0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2437c4:	e282f028 	add	pc, r2, #40	; 0x28
        2437c8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2437cc:	e1a0100d 	mov	r1, sp
        2437d0:	e1a00004 	mov	r0, r4
        2437d4:	e5942000 	ldr	r2, [r4]
        2437d8:	e1a0e00f 	mov	lr, pc
        2437dc:	e282f004 	add	pc, r2, #4	; 0x4
        2437e0:	e284201c 	add	r2, r4, #28	; 0x1c
        2437e4:	e1a01005 	mov	r1, r5
        2437e8:	e1a00002 	mov	r0, r2
        2437ec:	e5922000 	ldr	r2, [r2]
        2437f0:	e1a0e00f 	mov	lr, pc
        2437f4:	e282f014 	add	pc, r2, #20	; 0x14
        2437f8:	e28420a0 	add	r2, r4, #160	; 0xa0
        2437fc:	e1a01005 	mov	r1, r5
        243800:	e1a00002 	mov	r0, r2
        243804:	e5922000 	ldr	r2, [r2]
        243808:	e1a0e00f 	mov	lr, pc
        24380c:	e282f014 	add	pc, r2, #20	; 0x14
        243810:	e1a01005 	mov	r1, r5
        243814:	e5942008 	ldr	r2, [r4, #8]	; fField8
        243818:	e1a00002 	mov	r0, r2
        24381c:	e5922000 	ldr	r2, [r2]
        243820:	e1a0e00f 	mov	lr, pc
        243824:	e282f028 	add	pc, r2, #40	; 0x28
        243828:	e1a0100d 	mov	r1, sp
        24382c:	e1a00004 	mov	r0, r4
        243830:	e5942000 	ldr	r2, [r4]
        243834:	e1a0e00f 	mov	lr, pc
        243838:	e282f008 	add	pc, r2, #8	; 0x8
        24383c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        243840:	e1a0c00d 	mov	ip, sp
        243844:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        243848:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        24384c:	e24cb014 	sub	fp, ip, #20	; 0x14
        243850:	e1a04001 	mov	r4, r1
        243854:	e20310ff 	and	r1, r3, #255	; 0xff
        243858:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        24385c:	e20030ff 	and	r3, r0, #255	; 0xff
        243860:	e24dd008 	sub	sp, sp, #8	; 0x8
        243864:	e82d000a 	stmda	sp!, {r1, r3}
        243868:	e24dd008 	sub	sp, sp, #8	; 0x8
        24386c:	e1a0000d 	mov	r0, sp
        243870:	e59b1004 	ldr	r1, [fp, #4]	; fField4
        243874:	e1a0e00f 	mov	lr, pc
        243878:	e591f000 	ldr	pc, [r1]
        24387c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        243880:	e3a05000 	mov	r5, #0	; 0x0
        243884:	e58d0004 	str	r0, [sp, #4]	; fField4
        243888:	e1a0000d 	mov	r0, sp
        24388c:	eb66afc4 	bl	1bef7a4 <$GetPort(GrafPort **)>
        243890:	e59d7000 	ldr	r7, [sp]
        243894:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        243898:	e2521001 	subs	r1, r2, #1	; 0x1
        24389c:	4a000011 	bmi	2438e8 <TXRulerUI::CheckUpdate(unsigned char)+0x18c>
        2438a0:	e3a06000 	mov	r6, #0	; 0x0
        2438a4:	e0810101 	add	r0, r1, r1, lsl #2
        2438a8:	e0840180 	add	r0, r4, r0, lsl #3
        2438ac:	e2802014 	add	r2, r0, #20	; 0x14
        2438b0:	e280e004 	add	lr, r0, #4	; 0x4
        2438b4:	e89e1008 	ldmia	lr, {r3, ip}
        2438b8:	e8821008 	stmia	r2, {r3, ip}
        2438bc:	e5c0601d 	strb	r6, [r0, #29]	; fField29
        2438c0:	e5c0601c 	strb	r6, [r0, #28]	; fField28
        2438c4:	e5c0601f 	strb	r6, [r0, #31]	; fField31
        2438c8:	e5c0601e 	strb	r6, [r0, #30]	; fField30
        2438cc:	e59d300c 	ldr	r3, [sp, #12]	; fField12
        2438d0:	e3330000 	teq	r3, #0	; 0x0
        2438d4:	12800020 	addne	r0, r0, #32	; 0x20
        2438d8:	18921008 	ldmneia	r2, {r3, ip}
        2438dc:	18801008 	stmneia	r0, {r3, ip}
        2438e0:	e2511001 	subs	r1, r1, #1	; 0x1
        2438e4:	5affffee 	bpl	2438a4 <TXRulerUI::CheckUpdate(unsigned char)+0x148>
        2438e8:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        2438ec:	e5901000 	ldr	r1, [r0]
        2438f0:	e1a0e00f 	mov	lr, pc
        2438f4:	e281f008 	add	pc, r1, #8	; 0x8
        2438f8:	e59f3254 	ldr	r3, [pc, #254]	; 243b54 <TXRulerUI::CheckUpdate(unsigned char)+0x3f8>
        2438fc:	e3300000 	teq	r0, #0	; 0x0
        243900:	e58d3010 	str	r3, [sp, #16]	; fField16
        243904:	0a00007f 	beq	243b08 <TXRulerUI::CheckUpdate(unsigned char)+0x3ac>
        243908:	e24dd008 	sub	sp, sp, #8	; 0x8
        24390c:	e1a0000d 	mov	r0, sp
        243910:	e59b1004 	ldr	r1, [fp, #4]	; fField4
        243914:	e5912000 	ldr	r2, [r1]
        243918:	e1a0e00f 	mov	lr, pc
        24391c:	e282f004 	add	pc, r2, #4	; 0x4
        243920:	e49d0004 	ldr	r0, [sp], #4	; fField4
        243924:	e58d0000 	str	r0, [sp]
        243928:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        24392c:	eb642b7d 	bl	1b4e728 <$EqualPt__F5PointT1>
        243930:	e3300000 	teq	r0, #0	; 0x0
        243934:	1a00006c 	bne	243aec <TXRulerUI::CheckUpdate(unsigned char)+0x390>
        243938:	e3a06000 	mov	r6, #0	; 0x0
        24393c:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        243940:	e3520000 	cmp	r2, #0	; 0x0
        243944:	da000064 	ble	243adc <TXRulerUI::CheckUpdate(unsigned char)+0x380>
        243948:	e0860106 	add	r0, r6, r6, lsl #2
        24394c:	e0845180 	add	r5, r4, r0, lsl #3
        243950:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        243954:	e3300000 	teq	r0, #0	; 0x0
        243958:	0a000008 	beq	243980 <TXRulerUI::CheckUpdate(unsigned char)+0x224>
        24395c:	e3a03000 	mov	r3, #0	; 0x0
        243960:	e3a02002 	mov	r2, #2	; 0x2
        243964:	e92d000c 	stmdb	sp!, {r2, r3}
        243968:	e2853014 	add	r3, r5, #20	; 0x14
        24396c:	e5950000 	ldr	r0, [r5]
        243970:	e2802008 	add	r2, r0, #8	; 0x8
        243974:	e1a01007 	mov	r1, r7
        243978:	eb66af88 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
        24397c:	e28dd008 	add	sp, sp, #8	; 0x8
        243980:	e59d1000 	ldr	r1, [sp]
        243984:	e1a01841 	mov	r1, r1, asr #16
        243988:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        24398c:	e0419840 	sub	r9, r1, r0, asr #16
        243990:	e59d1002 	ldr	r1, [sp, #2]
        243994:	e1a01841 	mov	r1, r1, asr #16
        243998:	e59d000a 	ldr	r0, [sp, #10]
        24399c:	e0411840 	sub	r1, r1, r0, asr #16
        2439a0:	e2850014 	add	r0, r5, #20	; 0x14
        2439a4:	e1a08000 	mov	r8, r0
        2439a8:	e1a0a000 	mov	sl, r0
        2439ac:	e1a02009 	mov	r2, r9
        2439b0:	eb6437cc 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        2439b4:	e285100c 	add	r1, r5, #12	; 0xc
        2439b8:	e1a0000a 	mov	r0, sl
        2439bc:	ebfffe64 	bl	243354 <TXRulerRange::ValidateRulerRange(long, long)+0x21c>
        2439c0:	e59d3010 	ldr	r3, [sp, #16]	; fField16
        2439c4:	e3330000 	teq	r3, #0	; 0x0
        2439c8:	0a000020 	beq	243a50 <TXRulerUI::CheckUpdate(unsigned char)+0x2f4>
        2439cc:	e2850020 	add	r0, r5, #32	; 0x20
        2439d0:	e1a0a000 	mov	sl, r0
        2439d4:	e1a02009 	mov	r2, r9
        2439d8:	e3a01000 	mov	r1, #0	; 0x0
        2439dc:	eb6437c1 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        2439e0:	e5950020 	ldr	r0, [r5, #32]	; fField32
        2439e4:	e1a00840 	mov	r0, r0, asr #16
        2439e8:	e595100c 	ldr	r1, [r5, #12]	; fField12
        2439ec:	e1500841 	cmp	r0, r1, asr #16
        2439f0:	ba000004 	blt	243a08 <TXRulerUI::CheckUpdate(unsigned char)+0x2ac>
        2439f4:	e5951024 	ldr	r1, [r5, #36]	; fField36
        2439f8:	e1a01841 	mov	r1, r1, asr #16
        2439fc:	e5950010 	ldr	r0, [r5, #16]	; fField16
        243a00:	e1510840 	cmp	r1, r0, asr #16
        243a04:	da000001 	ble	243a10 <TXRulerUI::CheckUpdate(unsigned char)+0x2b4>
        243a08:	e8981008 	ldmia	r8, {r3, ip}
        243a0c:	e88a1008 	stmia	sl, {r3, ip}
        243a10:	e5951020 	ldr	r1, [r5, #32]	; fField32
        243a14:	e1a01841 	mov	r1, r1, asr #16
        243a18:	e595000c 	ldr	r0, [r5, #12]	; fField12
        243a1c:	e1a00840 	mov	r0, r0, asr #16
        243a20:	e0412000 	sub	r2, r1, r0
        243a24:	e59d3014 	ldr	r3, [sp, #20]	; fField20
        243a28:	e5933004 	ldr	r3, [r3, #4]	; fField4
        243a2c:	e0833fa3 	add	r3, r3, r3, lsr #31
        243a30:	e15200c3 	cmp	r2, r3, asr #1
        243a34:	c5950014 	ldrgt	r0, [r5, #20]	; fField20
        243a38:	c0412840 	subgt	r2, r1, r0, asr #16
        243a3c:	d5951014 	ldrle	r1, [r5, #20]	; fField20
        243a40:	d0402841 	suble	r2, r0, r1, asr #16
        243a44:	e1a00008 	mov	r0, r8
        243a48:	e3a01000 	mov	r1, #0	; 0x0
        243a4c:	eb6437a5 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        243a50:	e3a03000 	mov	r3, #0	; 0x0
        243a54:	e3a02002 	mov	r2, #2	; 0x2
        243a58:	e92d000c 	stmdb	sp!, {r2, r3}
        243a5c:	e1a03008 	mov	r3, r8
        243a60:	e5950000 	ldr	r0, [r5]
        243a64:	e2802008 	add	r2, r0, #8	; 0x8
        243a68:	e1a01007 	mov	r1, r7
        243a6c:	eb66af4b 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
        243a70:	e28dd008 	add	sp, sp, #8	; 0x8
        243a74:	e5951016 	ldr	r1, [r5, #22]	; fField22
        243a78:	e1a01821 	mov	r1, r1, lsr #16
        243a7c:	e5950006 	ldr	r0, [r5, #6]	; fField6
        243a80:	e1a00820 	mov	r0, r0, lsr #16
        243a84:	e0410000 	sub	r0, r1, r0
        243a88:	e5c5001f 	strb	r0, [r5, #31]	; fField31
        243a8c:	e1a00440 	mov	r0, r0, asr #8
        243a90:	e5c5001e 	strb	r0, [r5, #30]	; fField30
        243a94:	e5950014 	ldr	r0, [r5, #20]	; fField20
        243a98:	e1a00820 	mov	r0, r0, lsr #16
        243a9c:	e5951004 	ldr	r1, [r5, #4]	; fField4
        243aa0:	e1a01821 	mov	r1, r1, lsr #16
        243aa4:	e0400001 	sub	r0, r0, r1
        243aa8:	e5c5001d 	strb	r0, [r5, #29]	; fField29
        243aac:	e1a00440 	mov	r0, r0, asr #8
        243ab0:	e5c5001c 	strb	r0, [r5, #28]	; fField28
        243ab4:	e595001e 	ldr	r0, [r5, #30]	; fField30
        243ab8:	e1b00840 	movs	r0, r0, asr #16
        243abc:	0595001c 	ldreq	r0, [r5, #28]	; fField28
        243ac0:	01a00840 	moveq	r0, r0, asr #16
        243ac4:	03300000 	teqeq	r0, #0	; 0x0
        243ac8:	0a000003 	beq	243adc <TXRulerUI::CheckUpdate(unsigned char)+0x380>
        243acc:	e2866001 	add	r6, r6, #1	; 0x1
        243ad0:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        243ad4:	e1560002 	cmp	r6, r2
        243ad8:	baffff9a 	blt	243948 <TXRulerUI::CheckUpdate(unsigned char)+0x1ec>
        243adc:	e59d0000 	ldr	r0, [sp]
        243ae0:	e3a05001 	mov	r5, #1	; 0x1
        243ae4:	e58d0008 	str	r0, [sp, #8]	; fField8
        243ae8:	e58d500c 	str	r5, [sp, #12]	; fField12
        243aec:	e28dd004 	add	sp, sp, #4	; 0x4
        243af0:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        243af4:	e5901000 	ldr	r1, [r0]
        243af8:	e1a0e00f 	mov	lr, pc
        243afc:	e281f008 	add	pc, r1, #8	; 0x8
        243b00:	e3300000 	teq	r0, #0	; 0x0
        243b04:	1affff7f 	bne	243908 <TXRulerUI::CheckUpdate(unsigned char)+0x1ac>
        243b08:	e5940014 	ldr	r0, [r4, #20]	; fField20
        243b0c:	e1a00840 	mov	r0, r0, asr #16
        243b10:	e594100c 	ldr	r1, [r4, #12]	; fField12
        243b14:	e1300841 	teq	r0, r1, asr #16
        243b18:	03a00001 	moveq	r0, #1	; 0x1
        243b1c:	0a00000b 	beq	243b50 <TXRulerUI::CheckUpdate(unsigned char)+0x3f4>
        243b20:	e3350000 	teq	r5, #0	; 0x0
        243b24:	0a000008 	beq	243b4c <TXRulerUI::CheckUpdate(unsigned char)+0x3f0>
        243b28:	e3a03000 	mov	r3, #0	; 0x0
        243b2c:	e3a02002 	mov	r2, #2	; 0x2
        243b30:	e92d000c 	stmdb	sp!, {r2, r3}
        243b34:	e2843014 	add	r3, r4, #20	; 0x14
        243b38:	e5940000 	ldr	r0, [r4]
        243b3c:	e2802008 	add	r2, r0, #8	; 0x8
        243b40:	e1a01007 	mov	r1, r7
        243b44:	eb66af15 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
        243b48:	e28dd008 	add	sp, sp, #8	; 0x8
        243b4c:	e3a00000 	mov	r0, #0	; 0x0
        243b50:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        243b54:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerUI::Scrolled(void)
 * Address: 00243b58
 */
TXRulerUI::Scrolled(void) {
    /*
        243b58:	e1a0c00d 	mov	ip, sp
        243b5c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        243b60:	e24cb004 	sub	fp, ip, #4	; 0x4
        243b64:	e1a04000 	mov	r4, r0
        243b68:	eb65501a 	bl	1b97bd8 <TXRulerUI::$CheckTextBounds(void)>
        243b6c:	e3300000 	teq	r0, #0	; 0x0
        243b70:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        243b74:	e24dd008 	sub	sp, sp, #8	; 0x8
        243b78:	e1a0100d 	mov	r1, sp
        243b7c:	e1a00004 	mov	r0, r4
        243b80:	e5942000 	ldr	r2, [r4]
        243b84:	e1a0e00f 	mov	lr, pc
        243b88:	e282f004 	add	pc, r2, #4	; 0x4
        243b8c:	e28400a0 	add	r0, r4, #160	; 0xa0
        243b90:	e5901000 	ldr	r1, [r0]
        243b94:	e1a0e00f 	mov	lr, pc
        243b98:	e281f008 	add	pc, r1, #8	; 0x8
        243b9c:	e1a0100d 	mov	r1, sp
        243ba0:	e1a00004 	mov	r0, r4
        243ba4:	e5942000 	ldr	r2, [r4]
        243ba8:	e1a0e00f 	mov	lr, pc
        243bac:	e282f008 	add	pc, r2, #8	; 0x8
        243bb0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: Start__9TXRulerUISFRC13TXRulerUIData
 * Address: 00243f70
 */
void TXRulerUI::Start() {
    /*
        243f70:	e5902000 	ldr	r2, [r0]
        243f74:	e59f1024 	ldr	r1, [pc, #24]	; 243fa0 <Start__9TXRulerUISFRC13TXRulerUIData+0x30>	; fField24
        243f78:	e5812004 	str	r2, [r1, #4]	; fField4
        243f7c:	e5902004 	ldr	r2, [r0, #4]	; fField4
        243f80:	e5812008 	str	r2, [r1, #8]	; fField8
        243f84:	e5902008 	ldr	r2, [r0, #8]	; fField8
        243f88:	e581200c 	str	r2, [r1, #12]	; fField12
        243f8c:	e590200c 	ldr	r2, [r0, #12]	; fField12
        243f90:	e5812010 	str	r2, [r1, #16]	; fField16
        243f94:	e5900010 	ldr	r0, [r0, #16]	; fField16
        243f98:	e5a10014 	str	r0, [r1, #20]!	; fField20
        243f9c:	e1a0f00e 	mov	pc, lr
        243fa0:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerUI::__ct(Textension *, PixelMap *, RefVar const &)
 * Address: 00244510
 */
TXRulerUI::TXRulerUI(Textension *, PixelMap *, RefVar const &) {
    /*
        244510:	e1a0c00d 	mov	ip, sp
        244514:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        244518:	e24cb004 	sub	fp, ip, #4	; 0x4
        24451c:	e1b04000 	movs	r4, r0
        244520:	e1a05001 	mov	r5, r1
        244524:	e1a07002 	mov	r7, r2
        244528:	e1a06003 	mov	r6, r3
        24452c:	1a000005 	bne	244548 <TXRulerUI::__ct(Textension *, PixelMap *, RefVar const &)+0x38>
        244530:	e3a000b8 	mov	r0, #184	; 0xb8
        244534:	eb66287f 	bl	1bce738 <$__nw(unsigned int)>
        244538:	e1b04000 	movs	r4, r0
        24453c:	1a000001 	bne	244548 <TXRulerUI::__ct(Textension *, PixelMap *, RefVar const &)+0x38>
        244540:	e1a00004 	mov	r0, r4
        244544:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        244548:	e284001c 	add	r0, r4, #28	; 0x1c
        24454c:	e1a09000 	mov	r9, r0
        244550:	eb6551ab 	bl	1b98c04 <TXRulerIconsBar::$__ct(void)>
        244554:	e28400a0 	add	r0, r4, #160	; 0xa0
        244558:	e1a08000 	mov	r8, r0
        24455c:	eb6551b3 	bl	1b98c30 <TXRulerTabsBar::$__ct(void)>
        244560:	e59f0060 	ldr	r0, [pc, #60]	; 2445c8 <TXRulerUI::__ct(Textension *, PixelMap *, RefVar const &)+0xb8>
        244564:	e5840000 	str	r0, [r4]
        244568:	e59f005c 	ldr	r0, [pc, #5c]	; 2445cc <TXRulerUI::__ct(Textension *, PixelMap *, RefVar const &)+0xbc>
        24456c:	e5807000 	str	r7, [r0]
        244570:	e3a00000 	mov	r0, #0	; 0x0
        244574:	e5845004 	str	r5, [r4, #4]	; fField4
        244578:	e5c4000d 	strb	r0, [r4, #13]
        24457c:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        244580:	e5c4000f 	strb	r0, [r4, #15]
        244584:	e5c4000e 	strb	r0, [r4, #14]
        244588:	e5c40011 	strb	r0, [r4, #17]
        24458c:	e5c40010 	strb	r0, [r4, #16]	; fField16
        244590:	e2840014 	add	r0, r4, #20	; 0x14
        244594:	e284100c 	add	r1, r4, #12	; 0xc
        244598:	e8915000 	ldmia	r1, {ip, lr}
        24459c:	e8805000 	stmia	r0, {ip, lr}
        2445a0:	eb656e79 	bl	1b9ff8c <$GetNewRulerObject__10TextensionSFv>
        2445a4:	e5840008 	str	r0, [r4, #8]	; fField8
        2445a8:	e5960000 	ldr	r0, [r6]
        2445ac:	e5900000 	ldr	r0, [r0]
        2445b0:	e3300002 	teq	r0, #2	; 0x2
        2445b4:	0a000005 	beq	2445d0 <TXRulerUI::__ct(Textension *, PixelMap *, RefVar const &)+0xc0>
        2445b8:	e1a01006 	mov	r1, r6
        2445bc:	e1a00004 	mov	r0, r4
        2445c0:	eb654d7e 	bl	1b97bc0 <TXRulerUI::$GetRulerType(RefVar const &)>
        2445c4:	ea000002 	b	2445d4 <TXRulerUI::__ct(Textension *, PixelMap *, RefVar const &)+0xc4>
        2445c8:	000213f4 	streqd	r1, [r2], -r4
        2445cc:	0c104e74 	ldceq	14, cr4, [r0], -#464
        2445d0:	e3a00000 	mov	r0, #0	; 0x0
        2445d4:	e1a03000 	mov	r3, r0
        2445d8:	e1a00008 	mov	r0, r8
        2445dc:	e1a01005 	mov	r1, r5
        2445e0:	e5942008 	ldr	r2, [r4, #8]	; fField8
        2445e4:	eb655192 	bl	1b98c34 <TXRulerTabsBar::$IRulerTabsBar(Textension *, TXRuler *, int)>
        2445e8:	e1a03008 	mov	r3, r8
        2445ec:	e1a00009 	mov	r0, r9
        2445f0:	e1a01005 	mov	r1, r5
        2445f4:	e5942008 	ldr	r2, [r4, #8]	; fField8
        2445f8:	eb655182 	bl	1b98c08 <TXRulerIconsBar::$IRulerIconsBar(Textension *, TXRuler *, TXRulerTabsBar *)>
        2445fc:	eaffffcf 	b	244540 <TXRulerUI::__ct(Textension *, PixelMap *, RefVar const &)+0x30>
    */
}

/**
 * Symbol: TXRulerUI::__dt(void)
 * Address: 002450c8
 */
TXRulerUI::~TXRulerUI(void) {
    /*
        2450c8:	e1a0c00d 	mov	ip, sp
        2450cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2450d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2450d4:	e1a04000 	mov	r4, r0
        2450d8:	e1a05001 	mov	r5, r1
        2450dc:	e59f0024 	ldr	r0, [pc, #24]	; 245108 <TXRulerUI::__dt(void)+0x40>	; fField24
        2450e0:	e5840000 	str	r0, [r4]
        2450e4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2450e8:	e5901000 	ldr	r1, [r0]
        2450ec:	e1a0e00f 	mov	lr, pc
        2450f0:	e281f004 	add	pc, r1, #4	; 0x4
        2450f4:	e3150001 	tst	r5, #1	; 0x1
        2450f8:	11a00004 	movne	r0, r4
        2450fc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        245100:	1a662176 	bne	1bcd6e0 <$__dl(void *)>
        245104:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        245108:	000213f4 	streqd	r1, [r2], -r4
    */
}

/**
 * Symbol: TXRulerUI::SetBounds(Rect const &)
 * Address: 00245474
 */
TXRulerUI::SetBounds(Rect const &) {
    /*
        245474:	e1a0c00d 	mov	ip, sp
        245478:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24547c:	e24cb004 	sub	fp, ip, #4	; 0x4
        245480:	e1a04000 	mov	r4, r0
        245484:	e280000c 	add	r0, r0, #12	; 0xc
        245488:	e8911008 	ldmia	r1, {r3, ip}
        24548c:	e8801008 	stmia	r0, {r3, ip}
        245490:	e24dd008 	sub	sp, sp, #8	; 0x8
        245494:	e8911008 	ldmia	r1, {r3, ip}
        245498:	e88d1008 	stmia	sp, {r3, ip}
        24549c:	e5910000 	ldr	r0, [r1]
        2454a0:	e1a00820 	mov	r0, r0, lsr #16
        2454a4:	e59f5094 	ldr	r5, [pc, #94]	; 245540 <TXRulerUI::SetBounds(Rect const &)+0xcc>
        2454a8:	e5951004 	ldr	r1, [r5, #4]	; fField4
        2454ac:	e0800001 	add	r0, r0, r1
        2454b0:	e5cd0001 	strb	r0, [sp, #1]
        2454b4:	e1a00440 	mov	r0, r0, asr #8
        2454b8:	e5cd0000 	strb	r0, [sp]
        2454bc:	e59d0002 	ldr	r0, [sp, #2]
        2454c0:	e5951008 	ldr	r1, [r5, #8]	; fField8
        2454c4:	e0800001 	add	r0, r0, r1
        2454c8:	e5cd0005 	strb	r0, [sp, #5]
        2454cc:	e1a00440 	mov	r0, r0, asr #8
        2454d0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2454d4:	e284201c 	add	r2, r4, #28	; 0x1c
        2454d8:	e1a0100d 	mov	r1, sp
        2454dc:	e1a00002 	mov	r0, r2
        2454e0:	e1a0e00f 	mov	lr, pc
        2454e4:	e592f000 	ldr	pc, [r2]
        2454e8:	e2841014 	add	r1, r4, #20	; 0x14
        2454ec:	e1a06001 	mov	r6, r1
        2454f0:	e1a00004 	mov	r0, r4
        2454f4:	eb6549b6 	bl	1b97bd4 <TXRulerUI::$GetCurrFrameTextBounds( const(Rect *))>
        2454f8:	e59d0002 	ldr	r0, [sp, #2]
        2454fc:	e5c40019 	strb	r0, [r4, #25]	; fField25
        245500:	e1a00440 	mov	r0, r0, asr #8
        245504:	e5c40018 	strb	r0, [r4, #24]	; fField24
        245508:	e5940018 	ldr	r0, [r4, #24]	; fField24
        24550c:	e1a00820 	mov	r0, r0, lsr #16
        245510:	e5b51004 	ldr	r1, [r5, #4]!	; fField4
        245514:	e0400001 	sub	r0, r0, r1
        245518:	e2800001 	add	r0, r0, #1	; 0x1
        24551c:	e5c40015 	strb	r0, [r4, #21]	; fField21
        245520:	e1a00440 	mov	r0, r0, asr #8
        245524:	e5c40014 	strb	r0, [r4, #20]	; fField20
        245528:	e28420a0 	add	r2, r4, #160	; 0xa0
        24552c:	e1a01006 	mov	r1, r6
        245530:	e1a00002 	mov	r0, r2
        245534:	e1a0e00f 	mov	lr, pc
        245538:	e592f000 	ldr	pc, [r2]
        24553c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        245540:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerUI::UpdateRulerInfo(RefVar const &)
 * Address: 00245794
 */
TXRulerUI::UpdateRulerInfo(RefVar const &) {
    /*
        245794:	e1a0c00d 	mov	ip, sp
        245798:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24579c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2457a0:	e1a04000 	mov	r4, r0
        2457a4:	eb654905 	bl	1b97bc0 <TXRulerUI::$GetRulerType(RefVar const &)>
        2457a8:	e1a01000 	mov	r1, r0
        2457ac:	e28400a0 	add	r0, r4, #160	; 0xa0
        2457b0:	e1a05000 	mov	r5, r0
        2457b4:	eb654d1f 	bl	1b98c38 <TXRulerTabsBar::$SetRulerMeasure(int)>
        2457b8:	e3300000 	teq	r0, #0	; 0x0
        2457bc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2457c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2457c4:	e1a0100d 	mov	r1, sp
        2457c8:	e1a00004 	mov	r0, r4
        2457cc:	e5942000 	ldr	r2, [r4]
        2457d0:	e1a0e00f 	mov	lr, pc
        2457d4:	e282f004 	add	pc, r2, #4	; 0x4
        2457d8:	e1a00005 	mov	r0, r5
        2457dc:	e5951000 	ldr	r1, [r5]
        2457e0:	e1a0e00f 	mov	lr, pc
        2457e4:	e281f008 	add	pc, r1, #8	; 0x8
        2457e8:	e1a0100d 	mov	r1, sp
        2457ec:	e1a00004 	mov	r0, r4
        2457f0:	e5942000 	ldr	r2, [r4]
        2457f4:	e1a0e00f 	mov	lr, pc
        2457f8:	e282f008 	add	pc, r2, #8	; 0x8
        2457fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerUI::GetRulerType(RefVar const &)
 * Address: 00245800
 */
TXRulerUI::GetRulerType(RefVar const &) {
    /*
        245800:	e1a0c00d 	mov	ip, sp
        245804:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        245808:	e24cb004 	sub	fp, ip, #4	; 0x4
        24580c:	e1a00001 	mov	r0, r1
        245810:	e59f104c 	ldr	r1, [pc, #4c]	; 245864 <TXRulerUI::GetRulerType(RefVar const &)+0x64>	; fField4
        245814:	e5911000 	ldr	r1, [r1]
        245818:	e5911000 	ldr	r1, [r1]
        24581c:	e5900000 	ldr	r0, [r0]
        245820:	e5900000 	ldr	r0, [r0]
        245824:	eb65fa8d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        245828:	eb65f247 	bl	1bc214c <$AllocateRefHandle(long)>
        24582c:	e1a04000 	mov	r4, r0
        245830:	e59f0030 	ldr	r0, [pc, #30]	; 245868 <TXRulerUI::GetRulerType(RefVar const &)+0x68>	; fField30
        245834:	e5900000 	ldr	r0, [r0]
        245838:	e5901000 	ldr	r1, [r0]
        24583c:	e5940000 	ldr	r0, [r4]
        245840:	eb65fa7a 	bl	1bc4230 <$EQRef__FlT1>
        245844:	e1b05000 	movs	r5, r0
        245848:	13a05001 	movne	r5, #1	; 0x1
        24584c:	e1a00004 	mov	r0, r4
        245850:	eb65f659 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        245854:	e3350000 	teq	r5, #0	; 0x0
        245858:	13a00001 	movne	r0, #1	; 0x1
        24585c:	03a00000 	moveq	r0, #0	; 0x0
        245860:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        245864:	00684cb0 	streqh	r4, [r8], -#192
        245868:	00683850 	rsbeq	r3, r8, r0, asr r8
    */
}

/**
 * Symbol: TXRulerUI::GetBounds( const(Rect *))
 * Address: 0024586c
 */
TXRulerUI::GetBounds( const(Rect *)) {
    /*
        24586c:	e280000c 	add	r0, r0, #12	; 0xc
        245870:	e8901008 	ldmia	r0, {r3, ip}
        245874:	e8811008 	stmia	r1, {r3, ip}
        245878:	e1a0f00e 	mov	pc, lr
    */
}

