#include "include/TXRulerTabsBar.h"

/**
 * Symbol: TXRulerTabsBar::__ct(void)
 * Address: 0024447c
 */
TXRulerTabsBar::TXRulerTabsBar(void) {
    /*
        24447c:	e1a0c00d 	mov	ip, sp
        244480:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        244484:	e24cb004 	sub	fp, ip, #4	; 0x4
        244488:	e1b04000 	movs	r4, r0
        24448c:	1a000003 	bne	2444a0 <TXRulerTabsBar::__ct(void)+0x24>
        244490:	e3a00018 	mov	r0, #24	; 0x18
        244494:	eb6628a7 	bl	1bce738 <$__nw(unsigned int)>
        244498:	e1b04000 	movs	r4, r0
        24449c:	0a000005 	beq	2444b8 <TXRulerTabsBar::__ct(void)+0x3c>
        2444a0:	e1a00004 	mov	r0, r4
        2444a4:	eb654dd1 	bl	1b97bf0 <TXRulerBar::$__ct(void)>
        2444a8:	e59f0010 	ldr	r0, [pc, #10]	; 2444c0 <TXRulerTabsBar::__ct(void)+0x44>
        2444ac:	e5840000 	str	r0, [r4]
        2444b0:	e3e00000 	mvn	r0, #0	; 0x0
        2444b4:	e5840014 	str	r0, [r4, #20]	; fField20
        2444b8:	e1a00004 	mov	r0, r4
        2444bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2444c0:	0001de34 	andeq	sp, r1, r4, lsr lr
    */
}

/**
 * Symbol: TXRulerTabsBar::IRulerTabsBar(Textension *, TXRuler *, int)
 * Address: 002444c4
 */
TXRulerTabsBar::IRulerTabsBar(Textension *, TXRuler *, int) {
    /*
        2444c4:	e1a0c00d 	mov	ip, sp
        2444c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2444cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2444d0:	e1a04000 	mov	r4, r0
        2444d4:	e1a06001 	mov	r6, r1
        2444d8:	e1a05002 	mov	r5, r2
        2444dc:	e1a01003 	mov	r1, r3
        2444e0:	eb6551d4 	bl	1b98c38 <TXRulerTabsBar::$SetRulerMeasure(int)>
        2444e4:	e1a02005 	mov	r2, r5
        2444e8:	e1a01006 	mov	r1, r6
        2444ec:	e1a00004 	mov	r0, r4
        2444f0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2444f4:	ea654dbe 	b	1b97bf4 <TXRulerBar::$IRulerBar(Textension *, TXRuler *)>
    */
}

/**
 * Symbol: TXRulerTabsBar::SetRulerMeasure(int)
 * Address: 002444f8
 */
TXRulerTabsBar::SetRulerMeasure(int) {
    /*
        2444f8:	e5902014 	ldr	r2, [r0, #20]	; fField20
        2444fc:	e1320001 	teq	r2, r1
        244500:	03a00000 	moveq	r0, #0	; 0x0
        244504:	15a01014 	strne	r1, [r0, #20]!	; fField20
        244508:	13a00001 	movne	r0, #1	; 0x1
        24450c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXRulerTabsBar::GetTabBitMapIndex( const(TXTab))
 * Address: 00244600
 */
TXRulerTabsBar::GetTabBitMapIndex( const(TXTab)) {
    /*
        244600:	e1a0c00d 	mov	ip, sp
        244604:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        244608:	e24cb004 	sub	fp, ip, #4	; 0x4
        24460c:	e55b0010 	ldrb	r0, [fp, -#16]	; fField16
        244610:	e3300000 	teq	r0, #0	; 0x0
        244614:	03a00004 	moveq	r0, #4	; 0x4
        244618:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        24461c:	e3300001 	teq	r0, #1	; 0x1
        244620:	03a00005 	moveq	r0, #5	; 0x5
        244624:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        244628:	e33000ff 	teq	r0, #255	; 0xff
        24462c:	03a00006 	moveq	r0, #6	; 0x6
        244630:	13a00007 	movne	r0, #7	; 0x7
        244634:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerTabsBar::GetTabRect( const(TXTab, Rect *))
 * Address: 00244638
 */
TXRulerTabsBar::GetTabRect( const(TXTab, Rect *)) {
    /*
        244638:	e1a0c00d 	mov	ip, sp
        24463c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        244640:	e24cb004 	sub	fp, ip, #4	; 0x4
        244644:	e1a06001 	mov	r6, r1
        244648:	e1a05000 	mov	r5, r0
        24464c:	e1a04003 	mov	r4, r3
        244650:	eb655179 	bl	1b98c3c <TXRulerTabsBar::$GetTabBitMapIndex( const(TXTab))>
        244654:	e0602180 	rsb	r2, r0, r0, lsl #3
        244658:	e59f0048 	ldr	r0, [pc, #48]	; 2446a8 <TXRulerTabsBar::GetTabRect( const(TXTab, Rect *))+0x70>
        24465c:	e5901000 	ldr	r1, [r0]
        244660:	e0811102 	add	r1, r1, r2, lsl #2
        244664:	e2811008 	add	r1, r1, #8	; 0x8
        244668:	e8915000 	ldmia	r1, {ip, lr}
        24466c:	e8845000 	stmia	r4, {ip, lr}
        244670:	e5941006 	ldr	r1, [r4, #6]
        244674:	e1a01841 	mov	r1, r1, asr #16
        244678:	e5942002 	ldr	r2, [r4, #2]
        24467c:	e0411842 	sub	r1, r1, r2, asr #16
        244680:	e0811fa1 	add	r1, r1, r1, lsr #31
        244684:	e595200c 	ldr	r2, [r5, #12]	; fField12
        244688:	e5900010 	ldr	r0, [r0, #16]	; fField16
        24468c:	e0802842 	add	r2, r0, r2, asr #16
        244690:	e595000e 	ldr	r0, [r5, #14]	; fField14
        244694:	e0860840 	add	r0, r6, r0, asr #16
        244698:	e04010c1 	sub	r1, r0, r1, asr #1
        24469c:	e1a00004 	mov	r0, r4
        2446a0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2446a4:	ea64348f 	b	1b518e8 <$OffsetRect__FP4RectlT2>
        2446a8:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerTabsBar::GetBitMapRect( const(TXRuler const *, int, Rect *))
 * Address: 002446ac
 */
TXRulerTabsBar::GetBitMapRect( const(TXRuler const *, int, Rect *)) {
    /*
        2446ac:	e1a0c00d 	mov	ip, sp
        2446b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2446b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2446b8:	e1a05000 	mov	r5, r0
        2446bc:	e1a04003 	mov	r4, r3
        2446c0:	e0620182 	rsb	r0, r2, r2, lsl #3
        2446c4:	e59f3058 	ldr	r3, [pc, #58]	; 244724 <TXRulerTabsBar::GetBitMapRect( const(TXRuler const *, int, Rect *))+0x78>
        2446c8:	e5933000 	ldr	r3, [r3]
        2446cc:	e0830100 	add	r0, r3, r0, lsl #2
        2446d0:	e2800008 	add	r0, r0, #8	; 0x8
        2446d4:	e8901008 	ldmia	r0, {r3, ip}
        2446d8:	e8841008 	stmia	r4, {r3, ip}
        2446dc:	e332000c 	teq	r2, #12	; 0xc
        2446e0:	0a000011 	beq	24472c <TXRulerTabsBar::GetBitMapRect( const(TXRuler const *, int, Rect *))+0x80>
        2446e4:	e332000d 	teq	r2, #13	; 0xd
        2446e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2446ec:	e1a03001 	mov	r3, r1
        2446f0:	1a00001f 	bne	244774 <TXRulerTabsBar::GetBitMapRect( const(TXRuler const *, int, Rect *))+0xc8>
        2446f4:	e1a0200d 	mov	r2, sp
        2446f8:	e1a00003 	mov	r0, r3
        2446fc:	e59f1024 	ldr	r1, [pc, #24]	; 244728 <TXRulerTabsBar::GetBitMapRect( const(TXRuler const *, int, Rect *))+0x7c>
        244700:	e5933000 	ldr	r3, [r3]
        244704:	e1a0e00f 	mov	lr, pc
        244708:	e283f02c 	add	pc, r3, #44	; 0x2c
        24470c:	e595200c 	ldr	r2, [r5, #12]	; fField12
        244710:	e1a02842 	mov	r2, r2, asr #16
        244714:	e595100e 	ldr	r1, [r5, #14]	; fField14
        244718:	e1a01841 	mov	r1, r1, asr #16
        24471c:	e59d0000 	ldr	r0, [sp]
        244720:	ea000010 	b	244768 <TXRulerTabsBar::GetBitMapRect( const(TXRuler const *, int, Rect *))+0xbc>
        244724:	0c104e74 	ldceq	14, cr4, [r0], -#464
        244728:	6e646e74 	mcrvs	14, 3, r6, cr4, cr4, {3}
        24472c:	e24dd004 	sub	sp, sp, #4	; 0x4
        244730:	e1a03001 	mov	r3, r1
        244734:	e1a0200d 	mov	r2, sp
        244738:	e1a00001 	mov	r0, r1
        24473c:	e59f102c 	ldr	r1, [pc, #2c]	; 244770 <TXRulerTabsBar::GetBitMapRect( const(TXRuler const *, int, Rect *))+0xc4>
        244740:	e5933000 	ldr	r3, [r3]
        244744:	e1a0e00f 	mov	lr, pc
        244748:	e283f02c 	add	pc, r3, #44	; 0x2c
        24474c:	e5951010 	ldr	r1, [r5, #16]	; fField16
        244750:	e1a01841 	mov	r1, r1, asr #16
        244754:	e5940004 	ldr	r0, [r4, #4]	; fField4
        244758:	e0412840 	sub	r2, r1, r0, asr #16
        24475c:	e595100e 	ldr	r1, [r5, #14]	; fField14
        244760:	e1a01841 	mov	r1, r1, asr #16
        244764:	e59d0000 	ldr	r0, [sp]
        244768:	e0811000 	add	r1, r1, r0
        24476c:	ea000010 	b	2447b4 <TXRulerTabsBar::GetBitMapRect( const(TXRuler const *, int, Rect *))+0x108>
        244770:	6c4d7267 	mcrrvs	2, 6, r7, sp, cr7
        244774:	e1a0200d 	mov	r2, sp
        244778:	e1a00003 	mov	r0, r3
        24477c:	e59f103c 	ldr	r1, [pc, #3c]	; 2447c0 <TXRulerTabsBar::GetBitMapRect( const(TXRuler const *, int, Rect *))+0x114>
        244780:	e5933000 	ldr	r3, [r3]
        244784:	e1a0e00f 	mov	lr, pc
        244788:	e283f02c 	add	pc, r3, #44	; 0x2c
        24478c:	e5941006 	ldr	r1, [r4, #6]
        244790:	e1a01841 	mov	r1, r1, asr #16
        244794:	e5940002 	ldr	r0, [r4, #2]
        244798:	e0411840 	sub	r1, r1, r0, asr #16
        24479c:	e5952012 	ldr	r2, [r5, #18]	; fField18
        2447a0:	e59d0000 	ldr	r0, [sp]
        2447a4:	e0600842 	rsb	r0, r0, r2, asr #16
        2447a8:	e0401001 	sub	r1, r0, r1
        2447ac:	e595200c 	ldr	r2, [r5, #12]	; fField12
        2447b0:	e1a02842 	mov	r2, r2, asr #16
        2447b4:	e1a00004 	mov	r0, r4
        2447b8:	eb64344a 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        2447bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2447c0:	724d7267 	subvc	r7, sp, #1879048198	; 0x70000006
    */
}

/**
 * Symbol: TXRulerTabsBar::TabRectToTabValue( const(Rect const &))
 * Address: 002447c4
 */
TXRulerTabsBar::TabRectToTabValue( const(Rect const &)) {
    /*
        2447c4:	e5912002 	ldr	r2, [r1, #2]
        2447c8:	e1a02842 	mov	r2, r2, asr #16
        2447cc:	e590000e 	ldr	r0, [r0, #14]	; fField14
        2447d0:	e0420840 	sub	r0, r2, r0, asr #16
        2447d4:	e5911006 	ldr	r1, [r1, #6]
        2447d8:	e0621841 	rsb	r1, r2, r1, asr #16
        2447dc:	e0811fa1 	add	r1, r1, r1, lsr #31
        2447e0:	e08000c1 	add	r0, r0, r1, asr #1
        2447e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXRulerTabsBar::DrawRuler(TXRuler const *)
 * Address: 002447e8
 */
TXRulerTabsBar::DrawRuler(TXRuler const *) {
    /*
        2447e8:	e1a0c00d 	mov	ip, sp
        2447ec:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2447f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2447f4:	e1a04000 	mov	r4, r0
        2447f8:	e1a05001 	mov	r5, r1
        2447fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        244800:	e1a0000d 	mov	r0, sp
        244804:	eb66abe6 	bl	1bef7a4 <$GetPort(GrafPort **)>
        244808:	e284000c 	add	r0, r4, #12	; 0xc
        24480c:	e59d8000 	ldr	r8, [sp]
        244810:	eb6427cd 	bl	1b4e74c <$EraseRect(Rect *)>
        244814:	e1a00004 	mov	r0, r4
        244818:	eb65510c 	bl	1b98c50 <TXRulerTabsBar::$DrawRulerMeasure(void)>
        24481c:	e24dd004 	sub	sp, sp, #4	; 0x4
        244820:	e1a0200d 	mov	r2, sp
        244824:	e1a00005 	mov	r0, r5
        244828:	e59f10fc 	ldr	r1, [pc, #fc]	; 24492c <TXRulerTabsBar::DrawRuler(TXRuler const *)+0x144>
        24482c:	e5953000 	ldr	r3, [r5]
        244830:	e1a0e00f 	mov	lr, pc
        244834:	e283f02c 	add	pc, r3, #44	; 0x2c
        244838:	e59d0000 	ldr	r0, [sp]
        24483c:	e59f70ec 	ldr	r7, [pc, #ec]	; 244930 <TXRulerTabsBar::DrawRuler(TXRuler const *)+0x148>
        244840:	e3300000 	teq	r0, #0	; 0x0
        244844:	0a000022 	beq	2448d4 <TXRulerTabsBar::DrawRuler(TXRuler const *)+0xec>
        244848:	e5900004 	ldr	r0, [r0, #4]	; fField4
        24484c:	e2506001 	subs	r6, r0, #1	; 0x1
        244850:	4a00001f 	bmi	2448d4 <TXRulerTabsBar::DrawRuler(TXRuler const *)+0xec>
        244854:	e24dd018 	sub	sp, sp, #24	; 0x18
        244858:	e1a02006 	mov	r2, r6
        24485c:	e59d1018 	ldr	r1, [sp, #24]
        244860:	e1a0000d 	mov	r0, sp
        244864:	eb650296 	bl	1b852c4 <TXTabsArray::$GetIndTab( const(long))>
        244868:	e1a0100d 	mov	r1, sp
        24486c:	e28d0010 	add	r0, sp, #16	; 0x10
        244870:	e3a02006 	mov	r2, #6	; 0x6
        244874:	eb65c075 	bl	1bb4a50 <$memcpy>
        244878:	e1a00004 	mov	r0, r4
        24487c:	e28d2010 	add	r2, sp, #16	; 0x10
        244880:	e8920006 	ldmia	r2, {r1, r2}
        244884:	eb6550ec 	bl	1b98c3c <TXRulerTabsBar::$GetTabBitMapIndex( const(TXTab))>
        244888:	e0600180 	rsb	r0, r0, r0, lsl #3
        24488c:	e5971000 	ldr	r1, [r7]
        244890:	e0819100 	add	r9, r1, r0, lsl #2
        244894:	e28d3008 	add	r3, sp, #8	; 0x8
        244898:	e1a00004 	mov	r0, r4
        24489c:	e28d2010 	add	r2, sp, #16	; 0x10
        2448a0:	e8920006 	ldmia	r2, {r1, r2}
        2448a4:	eb6550e5 	bl	1b98c40 <TXRulerTabsBar::$GetTabRect( const(TXTab, Rect *))>
        2448a8:	e3a03000 	mov	r3, #0	; 0x0
        2448ac:	e3a02000 	mov	r2, #0	; 0x0
        2448b0:	e92d000c 	stmdb	sp!, {r2, r3}
        2448b4:	e2892008 	add	r2, r9, #8	; 0x8
        2448b8:	e28d3010 	add	r3, sp, #16	; 0x10
        2448bc:	e1a01008 	mov	r1, r8
        2448c0:	e1a00009 	mov	r0, r9
        2448c4:	eb66abb5 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
        2448c8:	e28dd020 	add	sp, sp, #32	; 0x20
        2448cc:	e2566001 	subs	r6, r6, #1	; 0x1
        2448d0:	5affffdf 	bpl	244854 <TXRulerTabsBar::DrawRuler(TXRuler const *)+0x6c>
        2448d4:	e3a0600c 	mov	r6, #12	; 0xc
        2448d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2448dc:	e1a0300d 	mov	r3, sp
        2448e0:	e1a02006 	mov	r2, r6
        2448e4:	e1a01005 	mov	r1, r5
        2448e8:	e1a00004 	mov	r0, r4
        2448ec:	eb6550d4 	bl	1b98c44 <TXRulerTabsBar::$GetBitMapRect( const(TXRuler const *, int, Rect *))>
        2448f0:	e3a03000 	mov	r3, #0	; 0x0
        2448f4:	e3a02000 	mov	r2, #0	; 0x0
        2448f8:	e92d000c 	stmdb	sp!, {r2, r3}
        2448fc:	e0661186 	rsb	r1, r6, r6, lsl #3
        244900:	e5970000 	ldr	r0, [r7]
        244904:	e0800101 	add	r0, r0, r1, lsl #2
        244908:	e2802008 	add	r2, r0, #8	; 0x8
        24490c:	e28d3008 	add	r3, sp, #8	; 0x8
        244910:	e1a01008 	mov	r1, r8
        244914:	eb66aba1 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
        244918:	e28dd010 	add	sp, sp, #16	; 0x10
        24491c:	e2866001 	add	r6, r6, #1	; 0x1
        244920:	e356000e 	cmp	r6, #14	; 0xe
        244924:	daffffeb 	ble	2448d8 <TXRulerTabsBar::DrawRuler(TXRuler const *)+0xf0>
        244928:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        24492c:	74616273 	strvcbt	r6, [r1], -#627
        244930:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerTabsBar::DrawRulerMeasure(void)
 * Address: 00244934
 */
TXRulerTabsBar::DrawRulerMeasure(void) {
    /*
        244934:	e1a0c00d 	mov	ip, sp
        244938:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        24493c:	e24cb004 	sub	fp, ip, #4	; 0x4
        244940:	e1a04000 	mov	r4, r0
        244944:	e24dd008 	sub	sp, sp, #8	; 0x8
        244948:	e3a07712 	mov	r7, #4718592	; 0x480000
        24494c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        244950:	e3300000 	teq	r0, #0	; 0x0
        244954:	03a05801 	moveq	r5, #65536	; 0x10000
        244958:	03a06008 	moveq	r6, #8	; 0x8
        24495c:	0a000004 	beq	244974 <TXRulerTabsBar::DrawRulerMeasure(void)+0x40>
        244960:	e3300001 	teq	r0, #1	; 0x1
        244964:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        244968:	e3a050c9 	mov	r5, #201	; 0xc9
        24496c:	e2855b19 	add	r5, r5, #25600	; 0x6400
        244970:	e3a06002 	mov	r6, #2	; 0x2
        244974:	e24dd024 	sub	sp, sp, #36	; 0x24
        244978:	e3a00002 	mov	r0, #2	; 0x2
        24497c:	eb65f5f2 	bl	1bc214c <$AllocateRefHandle(long)>
        244980:	e58d0004 	str	r0, [sp, #4]	; fField4
        244984:	e3a00000 	mov	r0, #0	; 0x0
        244988:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        24498c:	e5a10004 	str	r0, [r1, #4]!	; fField4
        244990:	e58d0020 	str	r0, [sp, #32]
        244994:	e59f01a0 	ldr	r0, [pc, #1a0]	; 244b3c <TXRulerTabsBar::DrawRulerMeasure(void)+0x208>
        244998:	e5900000 	ldr	r0, [r0]
        24499c:	e5900000 	ldr	r0, [r0]
        2449a0:	eb65f5e9 	bl	1bc214c <$AllocateRefHandle(long)>
        2449a4:	e58d0000 	str	r0, [sp]
        2449a8:	e28d1004 	add	r1, sp, #4	; 0x4
        2449ac:	e1a0000d 	mov	r0, sp
        2449b0:	eb6612cb 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        2449b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2449b8:	e28d0008 	add	r0, sp, #8	; 0x8
        2449bc:	e1a01005 	mov	r1, r5
        2449c0:	e58d0000 	str	r0, [sp]
        2449c4:	e1a00007 	mov	r0, r7
        2449c8:	eb6671bd 	bl	1be10c4 <$FixedMultiply>
        2449cc:	e1a01806 	mov	r1, r6, lsl #16
        2449d0:	eb6671ba 	bl	1be10c0 <$FixedDivide>
        2449d4:	e58d0028 	str	r0, [sp, #40]
        2449d8:	e24dd010 	sub	sp, sp, #16	; 0x10
        2449dc:	e1a0000d 	mov	r0, sp
        2449e0:	eb642b7a 	bl	1b4f7d0 <$GetPenState(PenState *)>
        2449e4:	eb6437ce 	bl	1b52924 <$PenNormal(void)>
        2449e8:	e594900e 	ldr	r9, [r4, #14]	; fField14
        2449ec:	e1a09849 	mov	r9, r9, asr #16
        2449f0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2449f4:	e59f1144 	ldr	r1, [pc, #144]	; 244b40 <TXRulerTabsBar::DrawRulerMeasure(void)+0x20c>
        2449f8:	e5911010 	ldr	r1, [r1, #16]	; fField16
        2449fc:	e0810840 	add	r0, r1, r0, asr #16
        244a00:	e2401001 	sub	r1, r0, #1	; 0x1
        244a04:	e1a08001 	mov	r8, r1
        244a08:	e1a00009 	mov	r0, r9
        244a0c:	eb6433ab 	bl	1b518c0 <$MoveTo__FlT1>
        244a10:	e5940012 	ldr	r0, [r4, #18]	; fField18
        244a14:	e1a00840 	mov	r0, r0, asr #16
        244a18:	e594100e 	ldr	r1, [r4, #14]	; fField14
        244a1c:	e0400841 	sub	r0, r0, r1, asr #16
        244a20:	e3a01000 	mov	r1, #0	; 0x0
        244a24:	eb643395 	bl	1b51880 <$Line__FlT1>
        244a28:	e3a05001 	mov	r5, #1	; 0x1
        244a2c:	e5940012 	ldr	r0, [r4, #18]	; fField18
        244a30:	e1a00840 	mov	r0, r0, asr #16
        244a34:	e3500000 	cmp	r0, #0	; 0x0
        244a38:	da000034 	ble	244b10 <TXRulerTabsBar::DrawRulerMeasure(void)+0x1dc>
        244a3c:	e2480002 	sub	r0, r8, #2	; 0x2
        244a40:	e1a0a800 	mov	sl, r0, lsl #16
        244a44:	e58da03c 	str	sl, [sp, #60]
        244a48:	e1a00805 	mov	r0, r5, lsl #16
        244a4c:	e59d1038 	ldr	r1, [sp, #56]
        244a50:	eb66719b 	bl	1be10c4 <$FixedMultiply>
        244a54:	e0897840 	add	r7, r9, r0, asr #16
        244a58:	e1a00005 	mov	r0, r5
        244a5c:	e3a01000 	mov	r1, #0	; 0x0
        244a60:	e3150001 	tst	r5, #1	; 0x1
        244a64:	1a000003 	bne	244a78 <TXRulerTabsBar::DrawRulerMeasure(void)+0x144>
        244a68:	e1a000c0 	mov	r0, r0, asr #1
        244a6c:	e2811001 	add	r1, r1, #1	; 0x1
        244a70:	e3100001 	tst	r0, #1	; 0x1
        244a74:	0afffffb 	beq	244a68 <TXRulerTabsBar::DrawRulerMeasure(void)+0x134>
        244a78:	e281a002 	add	sl, r1, #2	; 0x2
        244a7c:	e1a01008 	mov	r1, r8
        244a80:	e1a00007 	mov	r0, r7
        244a84:	eb64338d 	bl	1b518c0 <$MoveTo__FlT1>
        244a88:	e26a1000 	rsb	r1, sl, #0	; 0x0
        244a8c:	e3a00000 	mov	r0, #0	; 0x0
        244a90:	eb64337a 	bl	1b51880 <$Line__FlT1>
        244a94:	e1a01005 	mov	r1, r5
        244a98:	e1a00006 	mov	r0, r6
        244a9c:	eb65b7a7 	bl	1bb2940 <$__rt_sdiv>
        244aa0:	e3310000 	teq	r1, #0	; 0x0
        244aa4:	1a000015 	bne	244b00 <TXRulerTabsBar::DrawRulerMeasure(void)+0x1cc>
        244aa8:	e2871002 	add	r1, r7, #2	; 0x2
        244aac:	e1a01801 	mov	r1, r1, lsl #16
        244ab0:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        244ab4:	e59da040 	ldr	sl, [sp, #64]
        244ab8:	e24dd014 	sub	sp, sp, #20	; 0x14
        244abc:	e1a0100d 	mov	r1, sp
        244ac0:	eb669693 	bl	1bea514 <$IntegerString(long, unsigned short *)>
        244ac4:	e3a03000 	mov	r3, #0	; 0x0
        244ac8:	e3a02000 	mov	r2, #0	; 0x0
        244acc:	e92d000c 	stmdb	sp!, {r2, r3}
        244ad0:	e24dd008 	sub	sp, sp, #8	; 0x8
        244ad4:	e58da004 	str	sl, [sp, #4]	; fField4
        244ad8:	e59d1024 	ldr	r1, [sp, #36]
        244adc:	e58d1000 	str	r1, [sp]
        244ae0:	e28d0010 	add	r0, sp, #16	; 0x10
        244ae4:	eb66a71d 	bl	1bee760 <$Ustrlen>
        244ae8:	e1a01000 	mov	r1, r0
        244aec:	e28d2038 	add	r2, sp, #56	; 0x38
        244af0:	e28d0010 	add	r0, sp, #16	; 0x10
        244af4:	e3a03000 	mov	r3, #0	; 0x0
        244af8:	eb642705 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        244afc:	e28dd028 	add	sp, sp, #40	; 0x28
        244b00:	e2855001 	add	r5, r5, #1	; 0x1
        244b04:	e5940012 	ldr	r0, [r4, #18]	; fField18
        244b08:	e1570840 	cmp	r7, r0, asr #16
        244b0c:	baffffcd 	blt	244a48 <TXRulerTabsBar::DrawRulerMeasure(void)+0x114>
        244b10:	e1a0000d 	mov	r0, sp
        244b14:	eb643bb7 	bl	1b539f8 <$SetPenState(PenState *)>
        244b18:	e5bd0014 	ldr	r0, [sp, #20]!	; fField20
        244b1c:	eb65f9a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        244b20:	e59d0020 	ldr	r0, [sp, #32]
        244b24:	e3300000 	teq	r0, #0	; 0x0
        244b28:	159d0020 	ldrne	r0, [sp, #32]
        244b2c:	1b6422ea 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        244b30:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        244b34:	eb65f9a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        244b38:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        244b3c:	00680048 	rsbeq	r0, r8, r8, asr #32
        244b40:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerTabsBar::Draw(void)
 * Address: 00244b44
 */
TXRulerTabsBar::Draw(void) {
    /*
        244b44:	e5901008 	ldr	r1, [r0, #8]	; fField8
        244b48:	ea65503f 	b	1b98c4c <TXRulerTabsBar::$DrawRuler(TXRuler const *)>
    */
}

/**
 * Symbol: TXRulerTabsBar::PointToBitMapIndex( const(Point, TXTab *))
 * Address: 00244b4c
 */
TXRulerTabsBar::PointToBitMapIndex( const(Point, TXTab *)) {
    /*
        244b4c:	e1a0c00d 	mov	ip, sp
        244b50:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        244b54:	e24cb004 	sub	fp, ip, #4	; 0x4
        244b58:	e1a04001 	mov	r4, r1
        244b5c:	e1a06000 	mov	r6, r0
        244b60:	e1a05002 	mov	r5, r2
        244b64:	e24dd008 	sub	sp, sp, #8	; 0x8
        244b68:	e3a07902 	mov	r7, #32768	; 0x8000
        244b6c:	e2477001 	sub	r7, r7, #1	; 0x1
        244b70:	e3e09000 	mvn	r9, #0	; 0x0
        244b74:	e3a0800c 	mov	r8, #12	; 0xc
        244b78:	e1a0300d 	mov	r3, sp
        244b7c:	e1a02008 	mov	r2, r8
        244b80:	e5961008 	ldr	r1, [r6, #8]	; fField8
        244b84:	e1a00006 	mov	r0, r6
        244b88:	eb65502d 	bl	1b98c44 <TXRulerTabsBar::$GetBitMapRect( const(TXRuler const *, int, Rect *))>
        244b8c:	e1a0100d 	mov	r1, sp
        244b90:	e1a00004 	mov	r0, r4
        244b94:	ebfff9a9 	bl	243240 <TXRulerRange::ValidateRulerRange(long, long)+0x108>
        244b98:	e3500000 	cmp	r0, #0	; 0x0
        244b9c:	01a00008 	moveq	r0, r8
        244ba0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        244ba4:	da000002 	ble	244bb4 <TXRulerTabsBar::PointToBitMapIndex( const(Point, TXTab *))+0x68>
        244ba8:	e1500007 	cmp	r0, r7
        244bac:	b1a07000 	movlt	r7, r0
        244bb0:	b1a09008 	movlt	r9, r8
        244bb4:	e2888001 	add	r8, r8, #1	; 0x1
        244bb8:	e358000e 	cmp	r8, #14	; 0xe
        244bbc:	daffffed 	ble	244b78 <TXRulerTabsBar::PointToBitMapIndex( const(Point, TXTab *))+0x2c>
        244bc0:	e24dd004 	sub	sp, sp, #4	; 0x4
        244bc4:	e1a0200d 	mov	r2, sp
        244bc8:	e5963008 	ldr	r3, [r6, #8]	; fField8
        244bcc:	e1a00003 	mov	r0, r3
        244bd0:	e59f109c 	ldr	r1, [pc, #9c]	; 244c74 <TXRulerTabsBar::PointToBitMapIndex( const(Point, TXTab *))+0x128>
        244bd4:	e5933000 	ldr	r3, [r3]
        244bd8:	e1a0e00f 	mov	lr, pc
        244bdc:	e283f02c 	add	pc, r3, #44	; 0x2c
        244be0:	e59d0000 	ldr	r0, [sp]
        244be4:	e3300000 	teq	r0, #0	; 0x0
        244be8:	0a00001f 	beq	244c6c <TXRulerTabsBar::PointToBitMapIndex( const(Point, TXTab *))+0x120>
        244bec:	e24dd008 	sub	sp, sp, #8	; 0x8
        244bf0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        244bf4:	e2508001 	subs	r8, r0, #1	; 0x1
        244bf8:	4a000019 	bmi	244c64 <TXRulerTabsBar::PointToBitMapIndex( const(Point, TXTab *))+0x118>
        244bfc:	e1a02008 	mov	r2, r8
        244c00:	e1a00005 	mov	r0, r5
        244c04:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        244c08:	eb6501ad 	bl	1b852c4 <TXTabsArray::$GetIndTab( const(long))>
        244c0c:	e28d300c 	add	r3, sp, #12	; 0xc
        244c10:	e1a00006 	mov	r0, r6
        244c14:	e8950006 	ldmia	r5, {r1, r2}
        244c18:	eb655008 	bl	1b98c40 <TXRulerTabsBar::$GetTabRect( const(TXTab, Rect *))>
        244c1c:	e28d100c 	add	r1, sp, #12	; 0xc
        244c20:	e1a00004 	mov	r0, r4
        244c24:	ebfff985 	bl	243240 <TXRulerRange::ValidateRulerRange(long, long)+0x108>
        244c28:	e1a0a000 	mov	sl, r0
        244c2c:	e1a00006 	mov	r0, r6
        244c30:	e8950006 	ldmia	r5, {r1, r2}
        244c34:	eb655000 	bl	1b98c3c <TXRulerTabsBar::$GetTabBitMapIndex( const(TXTab))>
        244c38:	e35a0000 	cmp	sl, #0	; 0x0
        244c3c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        244c40:	da000005 	ble	244c5c <TXRulerTabsBar::PointToBitMapIndex( const(Point, TXTab *))+0x110>
        244c44:	e15a0007 	cmp	sl, r7
        244c48:	aa000003 	bge	244c5c <TXRulerTabsBar::PointToBitMapIndex( const(Point, TXTab *))+0x110>
        244c4c:	e1a0700a 	mov	r7, sl
        244c50:	e1a09000 	mov	r9, r0
        244c54:	e8951008 	ldmia	r5, {r3, ip}
        244c58:	e88d1008 	stmia	sp, {r3, ip}
        244c5c:	e2588001 	subs	r8, r8, #1	; 0x1
        244c60:	5affffe5 	bpl	244bfc <TXRulerTabsBar::PointToBitMapIndex( const(Point, TXTab *))+0xb0>
        244c64:	e8bd1008 	ldmia	sp!, {r3, ip}
        244c68:	e8851008 	stmia	r5, {r3, ip}
        244c6c:	e1a00009 	mov	r0, r9
        244c70:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        244c74:	74616273 	strvcbt	r6, [r1], -#627
    */
}

/**
 * Symbol: TXRulerTabsBar::HitTest(Point)
 * Address: 00244c78
 */
TXRulerTabsBar::HitTest(Point) {
    /*
        244c78:	e1a0c00d 	mov	ip, sp
        244c7c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        244c80:	e24cb004 	sub	fp, ip, #4	; 0x4
        244c84:	e24dd008 	sub	sp, sp, #8	; 0x8
        244c88:	e1a0200d 	mov	r2, sp
        244c8c:	eb654ff1 	bl	1b98c58 <TXRulerTabsBar::$PointToBitMapIndex( const(Point, TXTab *))>
        244c90:	e3500000 	cmp	r0, #0	; 0x0
        244c94:	b3a00000 	movlt	r0, #0	; 0x0
        244c98:	a3a00001 	movge	r0, #1	; 0x1
        244c9c:	e20000ff 	and	r0, r0, #255	; 0xff
        244ca0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)
 * Address: 00244ca4
 */
TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *) {
    /*
        244ca4:	e1a0c00d 	mov	ip, sp
        244ca8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        244cac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        244cb0:	e24cb014 	sub	fp, ip, #20	; 0x14
        244cb4:	e1a04000 	mov	r4, r0
        244cb8:	e1a06001 	mov	r6, r1
        244cbc:	e1a05003 	mov	r5, r3
        244cc0:	e3a00000 	mov	r0, #0	; 0x0
        244cc4:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        244cc8:	e58a0000 	str	r0, [sl]
        244ccc:	e24dd008 	sub	sp, sp, #8	; 0x8
        244cd0:	e1a0000d 	mov	r0, sp
        244cd4:	e1a0e00f 	mov	lr, pc
        244cd8:	e591f000 	ldr	pc, [r1]
        244cdc:	e41d1054 	ldr	r1, [sp], -#84
        244ce0:	e1a0200d 	mov	r2, sp
        244ce4:	e1a00004 	mov	r0, r4
        244ce8:	eb654fda 	bl	1b98c58 <TXRulerTabsBar::$PointToBitMapIndex( const(Point, TXTab *))>
        244cec:	e1b07000 	movs	r7, r0
        244cf0:	5a000001 	bpl	244cfc <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x58>
        244cf4:	e3a00000 	mov	r0, #0	; 0x0
        244cf8:	ea000053 	b	244e4c <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x1a8>
        244cfc:	e0670187 	rsb	r0, r7, r7, lsl #3
        244d00:	e59f80d0 	ldr	r8, [pc, #d0]	; 244dd8 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x134>
        244d04:	e5981000 	ldr	r1, [r8]
        244d08:	e0810100 	add	r0, r1, r0, lsl #2
        244d0c:	e58d0008 	str	r0, [sp, #8]	; fField8
        244d10:	e28d0008 	add	r0, sp, #8	; 0x8
        244d14:	e280100c 	add	r1, r0, #12	; 0xc
        244d18:	e2809004 	add	r9, r0, #4	; 0x4
        244d1c:	e3570004 	cmp	r7, #4	; 0x4
        244d20:	e58d1058 	str	r1, [sp, #88]
        244d24:	ba000049 	blt	244e50 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x1ac>
        244d28:	e3570007 	cmp	r7, #7	; 0x7
        244d2c:	ca000047 	bgt	244e50 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x1ac>
        244d30:	e1a03009 	mov	r3, r9
        244d34:	e1a00004 	mov	r0, r4
        244d38:	e89d0006 	ldmia	sp, {r1, r2}
        244d3c:	eb654fbf 	bl	1b98c40 <TXRulerTabsBar::$GetTabRect( const(TXTab, Rect *))>
        244d40:	e284100c 	add	r1, r4, #12	; 0xc
        244d44:	e59d0058 	ldr	r0, [sp, #88]
        244d48:	e8915000 	ldmia	r1, {ip, lr}
        244d4c:	e8805000 	stmia	r0, {ip, lr}
        244d50:	e59d0016 	ldr	r0, [sp, #22]
        244d54:	e5981010 	ldr	r1, [r8, #16]	; fField16
        244d58:	e0800001 	add	r0, r0, r1
        244d5c:	e5cd0015 	strb	r0, [sp, #21]
        244d60:	e1a00440 	mov	r0, r0, asr #8
        244d64:	e5cd0014 	strb	r0, [sp, #20]	; fField20
        244d68:	e59d001a 	ldr	r0, [sp, #26]
        244d6c:	e5b81008 	ldr	r1, [r8, #8]!	; fField8
        244d70:	e0800001 	add	r0, r0, r1
        244d74:	e5cd0019 	strb	r0, [sp, #25]
        244d78:	e1a00440 	mov	r0, r0, asr #8
        244d7c:	e5cd0018 	strb	r0, [sp, #24]
        244d80:	e3a03001 	mov	r3, #1	; 0x1
        244d84:	e92d0008 	stmdb	sp!, {r3}
        244d88:	e28d100c 	add	r1, sp, #12	; 0xc
        244d8c:	e1a00006 	mov	r0, r6
        244d90:	e3a02001 	mov	r2, #1	; 0x1
        244d94:	ebfffaa9 	bl	243840 <TXRulerUI::CheckUpdate(unsigned char)+0xe4>
        244d98:	e28dd004 	add	sp, sp, #4	; 0x4
        244d9c:	e59f1038 	ldr	r1, [pc, #38]	; 244ddc <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x138>
        244da0:	e3300000 	teq	r0, #0	; 0x0
        244da4:	1a00000d 	bne	244de0 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x13c>
        244da8:	e3a00001 	mov	r0, #1	; 0x1
        244dac:	e58a0000 	str	r0, [sl]
        244db0:	e24dd014 	sub	sp, sp, #20	; 0x14
        244db4:	e28d2014 	add	r2, sp, #20	; 0x14
        244db8:	e8925000 	ldmia	r2, {ip, lr}
        244dbc:	e88d5000 	stmia	sp, {ip, lr}
        244dc0:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        244dc4:	e3a03000 	mov	r3, #0	; 0x0
        244dc8:	e58d0010 	str	r0, [sp, #16]	; fField16
        244dcc:	e92d0008 	stmdb	sp!, {r3}
        244dd0:	e28d2004 	add	r2, sp, #4	; 0x4
        244dd4:	ea000017 	b	244e38 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x194>
        244dd8:	0c104e74 	ldceq	14, cr4, [r0], -#464
        244ddc:	74616273 	strvcbt	r6, [r1], -#627
        244de0:	e59d0026 	ldr	r0, [sp, #38]
        244de4:	e1b00840 	movs	r0, r0, asr #16
        244de8:	0affffc1 	beq	244cf4 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x50>
        244dec:	e3a00004 	mov	r0, #4	; 0x4
        244df0:	e58a0000 	str	r0, [sl]
        244df4:	e24dd014 	sub	sp, sp, #20	; 0x14
        244df8:	e28d0014 	add	r0, sp, #20	; 0x14
        244dfc:	e8901008 	ldmia	r0, {r3, ip}
        244e00:	e88d1008 	stmia	sp, {r3, ip}
        244e04:	e28d2008 	add	r2, sp, #8	; 0x8
        244e08:	e28d0014 	add	r0, sp, #20	; 0x14
        244e0c:	e8901008 	ldmia	r0, {r3, ip}
        244e10:	e8821008 	stmia	r2, {r3, ip}
        244e14:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        244e18:	e59d003a 	ldr	r0, [sp, #58]
        244e1c:	e0820840 	add	r0, r2, r0, asr #16
        244e20:	e58d0008 	str	r0, [sp, #8]	; fField8
        244e24:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        244e28:	e3a03000 	mov	r3, #0	; 0x0
        244e2c:	e58d0010 	str	r0, [sp, #16]	; fField16
        244e30:	e92d0008 	stmdb	sp!, {r3}
        244e34:	e28d2004 	add	r2, sp, #4	; 0x4
        244e38:	e1a00005 	mov	r0, r5
        244e3c:	e3a03014 	mov	r3, #20	; 0x14
        244e40:	eb65094f 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        244e44:	e28dd018 	add	sp, sp, #24	; 0x18
        244e48:	e3a00001 	mov	r0, #1	; 0x1
        244e4c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        244e50:	e1a03009 	mov	r3, r9
        244e54:	e1a02007 	mov	r2, r7
        244e58:	e5941008 	ldr	r1, [r4, #8]	; fField8
        244e5c:	e1a00004 	mov	r0, r4
        244e60:	eb654f77 	bl	1b98c44 <TXRulerTabsBar::$GetBitMapRect( const(TXRuler const *, int, Rect *))>
        244e64:	e59d0058 	ldr	r0, [sp, #88]
        244e68:	e8995000 	ldmia	r9, {ip, lr}
        244e6c:	e8805000 	stmia	r0, {ip, lr}
        244e70:	e594000e 	ldr	r0, [r4, #14]	; fField14
        244e74:	e1a00820 	mov	r0, r0, lsr #16
        244e78:	e5cd0017 	strb	r0, [sp, #23]
        244e7c:	e1a00440 	mov	r0, r0, asr #8
        244e80:	e5cd0016 	strb	r0, [sp, #22]
        244e84:	e5940012 	ldr	r0, [r4, #18]	; fField18
        244e88:	e1a00820 	mov	r0, r0, lsr #16
        244e8c:	e5cd001b 	strb	r0, [sp, #27]
        244e90:	e1a00440 	mov	r0, r0, asr #8
        244e94:	e5cd001a 	strb	r0, [sp, #26]
        244e98:	e59fc074 	ldr	ip, [pc, #74]	; 244f14 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x270>
        244e9c:	e28c14fa 	add	r1, ip, #-100663296	; 0xfa000000
        244ea0:	e337000e 	teq	r7, #14	; 0xe
        244ea4:	1a00001c 	bne	244f1c <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x278>
        244ea8:	e1a0900c 	mov	r9, ip
        244eac:	e24dd008 	sub	sp, sp, #8	; 0x8
        244eb0:	e28d2004 	add	r2, sp, #4	; 0x4
        244eb4:	e5943008 	ldr	r3, [r4, #8]	; fField8
        244eb8:	e1a00003 	mov	r0, r3
        244ebc:	e5933000 	ldr	r3, [r3]
        244ec0:	e1a0e00f 	mov	lr, pc
        244ec4:	e283f02c 	add	pc, r3, #44	; 0x2c
        244ec8:	e1a0200d 	mov	r2, sp
        244ecc:	e5943008 	ldr	r3, [r4, #8]	; fField8
        244ed0:	e1a00003 	mov	r0, r3
        244ed4:	e59f103c 	ldr	r1, [pc, #3c]	; 244f18 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x274>
        244ed8:	e5933000 	ldr	r3, [r3]
        244edc:	e1a0e00f 	mov	lr, pc
        244ee0:	e283f02c 	add	pc, r3, #44	; 0x2c
        244ee4:	e59d201e 	ldr	r2, [sp, #30]
        244ee8:	e1a02842 	mov	r2, r2, asr #16
        244eec:	e89d0003 	ldmia	sp, {r0, r1}
        244ef0:	e1510000 	cmp	r1, r0
        244ef4:	c1a00001 	movgt	r0, r1
        244ef8:	e0820000 	add	r0, r2, r0
        244efc:	e2800032 	add	r0, r0, #50	; 0x32
        244f00:	e5cd001f 	strb	r0, [sp, #31]
        244f04:	e1a00440 	mov	r0, r0, asr #8
        244f08:	e5cd001e 	strb	r0, [sp, #30]
        244f0c:	e28dd008 	add	sp, sp, #8	; 0x8
        244f10:	ea000013 	b	244f64 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x2c0>
        244f14:	724d7267 	subvc	r7, sp, #1879048198	; 0x70000006
        244f18:	6e646e74 	mcrvs	14, 3, r6, cr4, cr4, {3}
        244f1c:	e337000c 	teq	r7, #12	; 0xc
        244f20:	151f1010 	ldrne	r1, [pc, #fffffff0]	; 244f18 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x274>
        244f24:	e1a09001 	mov	r9, r1
        244f28:	e24dd004 	sub	sp, sp, #4	; 0x4
        244f2c:	e1a0200d 	mov	r2, sp
        244f30:	e5943008 	ldr	r3, [r4, #8]	; fField8
        244f34:	e1a00003 	mov	r0, r3
        244f38:	e1a0100c 	mov	r1, ip
        244f3c:	e5933000 	ldr	r3, [r3]
        244f40:	e1a0e00f 	mov	lr, pc
        244f44:	e283f02c 	add	pc, r3, #44	; 0x2c
        244f48:	e59d001c 	ldr	r0, [sp, #28]
        244f4c:	e49d1004 	ldr	r1, [sp], #4	; fField4
        244f50:	e2811032 	add	r1, r1, #50	; 0x32
        244f54:	e0400001 	sub	r0, r0, r1
        244f58:	e5cd001b 	strb	r0, [sp, #27]
        244f5c:	e1a00440 	mov	r0, r0, asr #8
        244f60:	e5cd001a 	strb	r0, [sp, #26]
        244f64:	e3a0a001 	mov	sl, #1	; 0x1
        244f68:	e337000c 	teq	r7, #12	; 0xc
        244f6c:	059b200c 	ldreq	r2, [fp, #12]	; fField12
        244f70:	02020008 	andeq	r0, r2, #8	; 0x8
        244f74:	03300000 	teqeq	r0, #0	; 0x0
        244f78:	1a000014 	bne	244fd0 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x32c>
        244f7c:	e5980000 	ldr	r0, [r8]
        244f80:	e2800f5b 	add	r0, r0, #364	; 0x16c
        244f84:	e58d0030 	str	r0, [sp, #48]
        244f88:	e28d3034 	add	r3, sp, #52	; 0x34
        244f8c:	e1a08003 	mov	r8, r3
        244f90:	e5941008 	ldr	r1, [r4, #8]	; fField8
        244f94:	e1a00004 	mov	r0, r4
        244f98:	e3a0200d 	mov	r2, #13	; 0xd
        244f9c:	eb654f28 	bl	1b98c44 <TXRulerTabsBar::$GetBitMapRect( const(TXRuler const *, int, Rect *))>
        244fa0:	e28d003c 	add	r0, sp, #60	; 0x3c
        244fa4:	e8985000 	ldmia	r8, {ip, lr}
        244fa8:	e8805000 	stmia	r0, {ip, lr}
        244fac:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        244fb0:	e5cd003f 	strb	r0, [sp, #63]
        244fb4:	e1a00440 	mov	r0, r0, asr #8
        244fb8:	e5cd003e 	strb	r0, [sp, #62]
        244fbc:	e59d0018 	ldr	r0, [sp, #24]
        244fc0:	e5cd0043 	strb	r0, [sp, #67]
        244fc4:	e1a00440 	mov	r0, r0, asr #8
        244fc8:	e5cd0042 	strb	r0, [sp, #66]
        244fcc:	e3a0a002 	mov	sl, #2	; 0x2
        244fd0:	e3a03000 	mov	r3, #0	; 0x0
        244fd4:	e92d0008 	stmdb	sp!, {r3}
        244fd8:	e1a0200a 	mov	r2, sl
        244fdc:	e28d100c 	add	r1, sp, #12	; 0xc
        244fe0:	e1a00006 	mov	r0, r6
        244fe4:	e3a03001 	mov	r3, #1	; 0x1
        244fe8:	ebfffa14 	bl	243840 <TXRulerUI::CheckUpdate(unsigned char)+0xe4>
        244fec:	e28dd004 	add	sp, sp, #4	; 0x4
        244ff0:	e59d0026 	ldr	r0, [sp, #38]
        244ff4:	e1b00840 	movs	r0, r0, asr #16
        244ff8:	0affff3d 	beq	244cf4 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x50>
        244ffc:	e337000e 	teq	r7, #14	; 0xe
        245000:	1a000004 	bne	245018 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x374>
        245004:	e59d0024 	ldr	r0, [sp, #36]
        245008:	e2600000 	rsb	r0, r0, #0	; 0x0
        24500c:	e5cd0027 	strb	r0, [sp, #39]
        245010:	e1a00440 	mov	r0, r0, asr #8
        245014:	e5cd0026 	strb	r0, [sp, #38]
        245018:	e24dd004 	sub	sp, sp, #4	; 0x4
        24501c:	e1a0200d 	mov	r2, sp
        245020:	e1a01009 	mov	r1, r9
        245024:	e5943008 	ldr	r3, [r4, #8]	; fField8
        245028:	e1a00003 	mov	r0, r3
        24502c:	e5933000 	ldr	r3, [r3]
        245030:	e1a0e00f 	mov	lr, pc
        245034:	e283f02c 	add	pc, r3, #44	; 0x2c
        245038:	e59d102a 	ldr	r1, [sp, #42]
        24503c:	e59d0000 	ldr	r0, [sp]
        245040:	e0800841 	add	r0, r0, r1, asr #16
        245044:	e3a03000 	mov	r3, #0	; 0x0
        245048:	e58d0000 	str	r0, [sp]
        24504c:	e92d0008 	stmdb	sp!, {r3}
        245050:	e28d2004 	add	r2, sp, #4	; 0x4
        245054:	e1a01009 	mov	r1, r9
        245058:	e1a00005 	mov	r0, r5
        24505c:	e3a03004 	mov	r3, #4	; 0x4
        245060:	eb6508c7 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        245064:	e28dd004 	add	sp, sp, #4	; 0x4
        245068:	e33a0002 	teq	sl, #2	; 0x2
        24506c:	1a000013 	bne	2450c0 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x41c>
        245070:	e24dd004 	sub	sp, sp, #4	; 0x4
        245074:	e1a0200d 	mov	r2, sp
        245078:	e5b43008 	ldr	r3, [r4, #8]!	; fField8
        24507c:	e1a00003 	mov	r0, r3
        245080:	e51f1170 	ldr	r1, [pc, #fffffe90]	; 244f18 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x274>
        245084:	e5933000 	ldr	r3, [r3]
        245088:	e1a0e00f 	mov	lr, pc
        24508c:	e283f02c 	add	pc, r3, #44	; 0x2c
        245090:	e59d1056 	ldr	r1, [sp, #86]
        245094:	e59d0000 	ldr	r0, [sp]
        245098:	e0800841 	add	r0, r0, r1, asr #16
        24509c:	e3a03000 	mov	r3, #0	; 0x0
        2450a0:	e58d0000 	str	r0, [sp]
        2450a4:	e92d0008 	stmdb	sp!, {r3}
        2450a8:	e28d2004 	add	r2, sp, #4	; 0x4
        2450ac:	e1a00005 	mov	r0, r5
        2450b0:	e3a03004 	mov	r3, #4	; 0x4
        2450b4:	e51f11a4 	ldr	r1, [pc, #fffffe5c]	; 244f18 <TXRulerTabsBar::Click(TXPointingDevice *, long, TXAttrValues *, long *)+0x274>
        2450b8:	eb6508b1 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        2450bc:	e28dd008 	add	sp, sp, #8	; 0x8
        2450c0:	e3a00001 	mov	r0, #1	; 0x1
        2450c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerTabsBar::CheckUpdate(TXRuler const *)
 * Address: 0024510c
 */
TXRulerTabsBar::CheckUpdate(TXRuler const *) {
    /*
        24510c:	ea654ece 	b	1b98c4c <TXRulerTabsBar::$DrawRuler(TXRuler const *)>
    */
}

