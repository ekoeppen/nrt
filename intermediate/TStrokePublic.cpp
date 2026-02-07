#include "include/TStrokePublic.h"

/**
 * Symbol: Make__13TStrokePublicSFP7TStrokeUc
 * Address: 00145728
 */
void TStrokePublic::Make() {
    /*
        145728:	e20120ff 	and	r2, r1, #255	; 0xff
        14572c:	e1a01000 	mov	r1, r0
        145730:	e3a00000 	mov	r0, #0	; 0x0
        145734:	ea65072f 	b	1a873f8 <TStrokePublic::$__ct(TStroke *, unsigned char)>
    */
}

/**
 * Symbol: TStrokePublic::__ct(TStroke *, unsigned char)
 * Address: 00145738
 */
TStrokePublic::TStrokePublic(TStroke *, unsigned char) {
    /*
        145738:	e1a0c00d 	mov	ip, sp
        14573c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        145740:	e24cb004 	sub	fp, ip, #4	; 0x4
        145744:	e1a04001 	mov	r4, r1
        145748:	e20250ff 	and	r5, r2, #255	; 0xff
        14574c:	e3300000 	teq	r0, #0	; 0x0
        145750:	1a000003 	bne	145764 <TStrokePublic::__ct(TStroke *, unsigned char)+0x2c>
        145754:	e3a00014 	mov	r0, #20	; 0x14
        145758:	eb6a23f6 	bl	1bce738 <$__nw(unsigned int)>
        14575c:	e3300000 	teq	r0, #0	; 0x0
        145760:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        145764:	e3a01000 	mov	r1, #0	; 0x0
        145768:	e8800012 	stmia	r0, {r1, r4}
        14576c:	e280100c 	add	r1, r0, #12	; 0xc
        145770:	e3a039fe 	mov	r3, #4161536	; 0x3f8000
        145774:	e2433501 	sub	r3, r3, #4194304	; 0x400000
        145778:	e5c13005 	strb	r3, [r1, #5]
        14577c:	e3e0207f 	mvn	r2, #127	; 0x7f
        145780:	e5c12004 	strb	r2, [r1, #4]	; fField4
        145784:	e5c13001 	strb	r3, [r1, #1]
        145788:	e5c12000 	strb	r2, [r1]
        14578c:	e5c05008 	strb	r5, [r0, #8]	; fField8
        145790:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokePublic::__dt(void)
 * Address: 00145794
 */
TStrokePublic::~TStrokePublic(void) {
    /*
        145794:	e1a0c00d 	mov	ip, sp
        145798:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14579c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1457a0:	e1a04000 	mov	r4, r0
        1457a4:	e1a05001 	mov	r5, r1
        1457a8:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
        1457ac:	e3300000 	teq	r0, #0	; 0x0
        1457b0:	15940004 	ldrne	r0, [r4, #4]	; fField4
        1457b4:	11a0e00f 	movne	lr, pc
        1457b8:	1590f000 	ldrne	pc, [r0]
        1457bc:	e3150001 	tst	r5, #1	; 0x1
        1457c0:	11a00004 	movne	r0, r4
        1457c4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1457c8:	1a6a1fc4 	bne	1bcd6e0 <$__dl(void *)>
        1457cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokePublic::Done(void)
 * Address: 001457d0
 */
TStrokePublic::Done(void) {
    /*
        1457d0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1457d4:	ea689773 	b	1b6b5a8 <TStroke::$Done(void)>
    */
}

/**
 * Symbol: TStrokePublic::Size(void)
 * Address: 001457d8
 */
TStrokePublic::Size(void) {
    /*
        1457d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1457dc:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1457e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStrokePublic::DownTime(void)
 * Address: 001457e4
 */
TStrokePublic::DownTime(void) {
    /*
        1457e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1457e8:	e5900034 	ldr	r0, [r0, #52]	; fField52
        1457ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStrokePublic::UpTime(void)
 * Address: 001457f0
 */
TStrokePublic::UpTime(void) {
    /*
        1457f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1457f4:	e5900038 	ldr	r0, [r0, #56]	; fField56
        1457f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStrokePublic::Bounds(TRect *)
 * Address: 001458b8
 */
TStrokePublic::Bounds(TRect *) {
    /*
        1458b8:	e1a0c00d 	mov	ip, sp
        1458bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1458c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1458c4:	e1a04001 	mov	r4, r1
        1458c8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1458cc:	e2800020 	add	r0, r0, #32	; 0x20
        1458d0:	eb687649 	bl	1b631fc <$UnfixRect>
        1458d4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1458d8:	e1a00820 	mov	r0, r0, lsr #16
        1458dc:	e2800001 	add	r0, r0, #1	; 0x1
        1458e0:	e5c40005 	strb	r0, [r4, #5]
        1458e4:	e1a00440 	mov	r0, r0, asr #8
        1458e8:	e5c40004 	strb	r0, [r4, #4]	; fField4
        1458ec:	e5940006 	ldr	r0, [r4, #6]
        1458f0:	e1a00820 	mov	r0, r0, lsr #16
        1458f4:	e2800001 	add	r0, r0, #1	; 0x1
        1458f8:	e5c40007 	strb	r0, [r4, #7]
        1458fc:	e1a00440 	mov	r0, r0, asr #8
        145900:	e5c40006 	strb	r0, [r4, #6]
        145904:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokePublic::GetPoint(long)
 * Address: 00145908
 */
TStrokePublic::GetPoint(long) {
    /*
        145908:	e1a0c00d 	mov	ip, sp
        14590c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        145910:	e24cb004 	sub	fp, ip, #4	; 0x4
        145914:	e1a06000 	mov	r6, r0
        145918:	e1a05001 	mov	r5, r1
        14591c:	e1a04002 	mov	r4, r2
        145920:	e5910004 	ldr	r0, [r1, #4]	; fField4
        145924:	eb68550b 	bl	1b5ad58 <$AcquireStroke(TStroke *)>
        145928:	e1a07000 	mov	r7, r0
        14592c:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        145930:	e1a01000 	mov	r1, r0
        145934:	e590000c 	ldr	r0, [r0, #12]	; fField12
        145938:	e1500004 	cmp	r0, r4
        14593c:	92404001 	subls	r4, r0, #1	; 0x1
        145940:	e1a00001 	mov	r0, r1
        145944:	e1a01004 	mov	r1, r4
        145948:	eb689726 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        14594c:	e1a04000 	mov	r4, r0
        145950:	e3370000 	teq	r7, #0	; 0x0
        145954:	1b6871f8 	blne	1b6213c <$ReleaseStroke(void)>
        145958:	e1a00004 	mov	r0, r4
        14595c:	eb689f56 	bl	1b6d6bc <$SampleX(SamplePt *)>
        145960:	e2800902 	add	r0, r0, #32768	; 0x8000
        145964:	e1a00840 	mov	r0, r0, asr #16
        145968:	e1a05800 	mov	r5, r0, lsl #16
        14596c:	e1a05845 	mov	r5, r5, asr #16
        145970:	e1a00004 	mov	r0, r4
        145974:	eb689f51 	bl	1b6d6c0 <$SampleY(SamplePt *)>
        145978:	e2800902 	add	r0, r0, #32768	; 0x8000
        14597c:	e1a00840 	mov	r0, r0, asr #16
        145980:	e1a00800 	mov	r0, r0, lsl #16
        145984:	e1a00840 	mov	r0, r0, asr #16
        145988:	e24dd004 	sub	sp, sp, #4	; 0x4
        14598c:	e5cd5003 	strb	r5, [sp, #3]
        145990:	e1a01445 	mov	r1, r5, asr #8
        145994:	e5cd1002 	strb	r1, [sp, #2]
        145998:	e5cd0001 	strb	r0, [sp, #1]
        14599c:	e1a00440 	mov	r0, r0, asr #8
        1459a0:	e5cd0000 	strb	r0, [sp]
        1459a4:	e59d0000 	ldr	r0, [sp]
        1459a8:	e5860000 	str	r0, [r6]
        1459ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokePublic::FirstPoint(void)
 * Address: 001459b0
 */
TStrokePublic::FirstPoint(void) {
    /*
        1459b0:	e3a02000 	mov	r2, #0	; 0x0
        1459b4:	ea654451 	b	1a96b00 <TStrokePublic::$GetPoint(long)>
    */
}

/**
 * Symbol: TStrokePublic::FinalPoint(void)
 * Address: 001459b8
 */
TStrokePublic::FinalPoint(void) {
    /*
        1459b8:	e1a0c00d 	mov	ip, sp
        1459bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1459c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1459c4:	e1a05000 	mov	r5, r0
        1459c8:	e1a04001 	mov	r4, r1
        1459cc:	e1a00001 	mov	r0, r1
        1459d0:	eb6575f2 	bl	1aa31a0 <TStrokePublic::$Size(void)>
        1459d4:	e2402001 	sub	r2, r0, #1	; 0x1
        1459d8:	e1a01004 	mov	r1, r4
        1459dc:	e1a00005 	mov	r0, r5
        1459e0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1459e4:	ea654445 	b	1a96b00 <TStrokePublic::$GetPoint(long)>
    */
}

/**
 * Symbol: TStrokePublic::InkOn(void)
 * Address: 001459e8
 */
TStrokePublic::InkOn(void) {
    /*
        1459e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStrokePublic::InkOff(unsigned char, unsigned char)
 * Address: 001459ec
 */
TStrokePublic::InkOff(unsigned char, unsigned char) {
    /*
        1459ec:	e1a0c00d 	mov	ip, sp
        1459f0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1459f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1459f8:	e1a04000 	mov	r4, r0
        1459fc:	e20150ff 	and	r5, r1, #255	; 0xff
        145a00:	e20270ff 	and	r7, r2, #255	; 0xff
        145a04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        145a08:	e3a01202 	mov	r1, #536870912	; 0x20000000
        145a0c:	eb6875f5 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        145a10:	e3300000 	teq	r0, #0	; 0x0
        145a14:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        145a18:	e5940004 	ldr	r0, [r4, #4]	; fField4
        145a1c:	eb6854cd 	bl	1b5ad58 <$AcquireStroke(TStroke *)>
        145a20:	e1a06000 	mov	r6, r0
        145a24:	e3a01202 	mov	r1, #536870912	; 0x20000000
        145a28:	e5940004 	ldr	r0, [r4, #4]	; fField4
        145a2c:	eb6871d0 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        145a30:	e3360000 	teq	r6, #0	; 0x0
        145a34:	1b6871c0 	blne	1b6213c <$ReleaseStroke(void)>
        145a38:	e5940004 	ldr	r0, [r4, #4]	; fField4
        145a3c:	eb6896d9 	bl	1b6b5a8 <TStroke::$Done(void)>
        145a40:	e3300000 	teq	r0, #0	; 0x0
        145a44:	1a000005 	bne	145a60 <TStrokePublic::InkOff(unsigned char, unsigned char)+0x74>
        145a48:	e284000c 	add	r0, r4, #12	; 0xc
        145a4c:	e3370000 	teq	r7, #0	; 0x0
        145a50:	0a000001 	beq	145a5c <TStrokePublic::InkOff(unsigned char, unsigned char)+0x70>
        145a54:	eb65c009 	bl	1ab5a80 <$InkerOff(TRect *)>
        145a58:	ea000000 	b	145a60 <TStrokePublic::InkOff(unsigned char, unsigned char)+0x74>
        145a5c:	eb660666 	bl	1ac73fc <$InkerOffUnHobbled(TRect *)>
        145a60:	e24dd008 	sub	sp, sp, #8	; 0x8
        145a64:	e1a0100d 	mov	r1, sp
        145a68:	e1a00004 	mov	r0, r4
        145a6c:	eb654018 	bl	1a95ad4 <TStrokePublic::$GetInkedRect(TRect *)>
        145a70:	e59f6034 	ldr	r6, [pc, #34]	; 145aac <TStrokePublic::InkOff(unsigned char, unsigned char)+0xc0>
        145a74:	e3350000 	teq	r5, #0	; 0x0
        145a78:	0a00000f 	beq	145abc <TStrokePublic::InkOff(unsigned char, unsigned char)+0xd0>
        145a7c:	e3a01301 	mov	r1, #67108864	; 0x4000000
        145a80:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        145a84:	eb6875d7 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        145a88:	e3300000 	teq	r0, #0	; 0x0
        145a8c:	e1a0100d 	mov	r1, sp
        145a90:	1a000006 	bne	145ab0 <TStrokePublic::InkOff(unsigned char, unsigned char)+0xc4>
        145a94:	e3a00000 	mov	r0, #0	; 0x0
        145a98:	eb681ade 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        145a9c:	e1a0100d 	mov	r1, sp
        145aa0:	e3a00000 	mov	r0, #0	; 0x0
        145aa4:	eb681add 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        145aa8:	ea000006 	b	145ac8 <TStrokePublic::InkOff(unsigned char, unsigned char)+0xdc>
        145aac:	0c101934 	ldceq	9, cr1, [r0], -#208
        145ab0:	e5960000 	ldr	r0, [r6]
        145ab4:	eb6575be 	bl	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
        145ab8:	ea000002 	b	145ac8 <TStrokePublic::InkOff(unsigned char, unsigned char)+0xdc>
        145abc:	e1a0100d 	mov	r1, sp
        145ac0:	e5960000 	ldr	r0, [r6]
        145ac4:	eb6575bb 	bl	1aa31b8 <TRootView::$SmartScreenDirty(TRect const &)>
        145ac8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokePublic::InkOff(unsigned char)
 * Address: 00145acc
 */
TStrokePublic::InkOff(unsigned char) {
    /*
        145acc:	e20110ff 	and	r1, r1, #255	; 0xff
        145ad0:	e3a02001 	mov	r2, #1	; 0x1
        145ad4:	ea660646 	b	1ac73f4 <TStrokePublic::$InkOff(unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TStrokePublic::GetInkedRect(TRect *)
 * Address: 00145ad8
 */
TStrokePublic::GetInkedRect(TRect *) {
    /*
        145ad8:	e1a0c00d 	mov	ip, sp
        145adc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        145ae0:	e24cb004 	sub	fp, ip, #4	; 0x4
        145ae4:	e1a04001 	mov	r4, r1
        145ae8:	e280100c 	add	r1, r0, #12	; 0xc
        145aec:	e1a05001 	mov	r5, r1
        145af0:	e5911000 	ldr	r1, [r1]
        145af4:	e1a01841 	mov	r1, r1, asr #16
        145af8:	e3710902 	cmn	r1, #32768	; 0x8000
        145afc:	1a000004 	bne	145b14 <TStrokePublic::GetInkedRect(TRect *)+0x3c>
        145b00:	e1a01005 	mov	r1, r5
        145b04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        145b08:	eb65b7a0 	bl	1ab3990 <$GetStrokeRect(TStroke *, TRect *)>
        145b0c:	e1a00005 	mov	r0, r5
        145b10:	eb03a0c5 	bl	22de2c <AdjustForInk(TRect *)>
        145b14:	e8955000 	ldmia	r5, {ip, lr}
        145b18:	e8845000 	stmia	r4, {ip, lr}
        145b1c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokePublic::Invalidate(void)
 * Address: 00145b20
 */
TStrokePublic::Invalidate(void) {
    /*
        145b20:	e1a0c00d 	mov	ip, sp
        145b24:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        145b28:	e24cb004 	sub	fp, ip, #4	; 0x4
        145b2c:	e1a04000 	mov	r4, r0
        145b30:	e5900004 	ldr	r0, [r0, #4]	; fField4
        145b34:	e3a01202 	mov	r1, #536870912	; 0x20000000
        145b38:	eb6875aa 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        145b3c:	e3300000 	teq	r0, #0	; 0x0
        145b40:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        145b44:	e24dd008 	sub	sp, sp, #8	; 0x8
        145b48:	e1a0100d 	mov	r1, sp
        145b4c:	e1a00004 	mov	r0, r4
        145b50:	eb653fdf 	bl	1a95ad4 <TStrokePublic::$GetInkedRect(TRect *)>
        145b54:	e1a0100d 	mov	r1, sp
        145b58:	e59f0008 	ldr	r0, [pc, #8]	; 145b68 <TStrokePublic::Invalidate(void)+0x48>	; fField8
        145b5c:	e5900000 	ldr	r0, [r0]
        145b60:	eb657593 	bl	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
        145b64:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        145b68:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

