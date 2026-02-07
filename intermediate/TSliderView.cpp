#include "include/TSliderView.h"

/**
 * Symbol: TSliderView::ClassID( const(void))
 * Address: 001c97b8
 */
TSliderView::ClassID( const(void)) {
    /*
        1c97b8:	e3a00060 	mov	r0, #96	; 0x60
        1c97bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSliderView::DerivedFrom( const(long))
 * Address: 001c97c0
 */
TSliderView::DerivedFrom( const(long)) {
    /*
        1c97c0:	e1a0c00d 	mov	ip, sp
        1c97c4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1c97c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c97cc:	e3310060 	teq	r1, #96	; 0x60
        1c97d0:	0a000002 	beq	1c97e0 <TSliderView::DerivedFrom( const(long))+0x20>
        1c97d4:	ebfb65fb 	bl	a2fc8 <TDataView::DerivedFrom( const(long))>
        1c97d8:	e3300000 	teq	r0, #0	; 0x0
        1c97dc:	0a000001 	beq	1c97e8 <TSliderView::DerivedFrom( const(long))+0x28>
        1c97e0:	e3a00001 	mov	r0, #1	; 0x1
        1c97e4:	ea000000 	b	1c97ec <TSliderView::DerivedFrom( const(long))+0x2c>
        1c97e8:	e3a00000 	mov	r0, #0	; 0x0
        1c97ec:	e20000ff 	and	r0, r0, #255	; 0xff
        1c97f0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSliderView::DrawSlider(TRect const &)
 * Address: 001c97f4
 */
TSliderView::DrawSlider(TRect const &) {
    /*
        1c97f4:	e1a0c00d 	mov	ip, sp
        1c97f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1c97fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c9800:	e280003c 	add	r0, r0, #60	; 0x3c
        1c9804:	e5902006 	ldr	r2, [r0, #6]	; fField6
        1c9808:	e1a02822 	mov	r2, r2, lsr #16
        1c980c:	e5901002 	ldr	r1, [r0, #2]	; fField2
        1c9810:	e1a01821 	mov	r1, r1, lsr #16
        1c9814:	e0421001 	sub	r1, r2, r1
        1c9818:	e1a01801 	mov	r1, r1, lsl #16
        1c981c:	e3510000 	cmp	r1, #0	; 0x0
        1c9820:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        1c9824:	eb63c54d 	bl	1abad60 <$TRectToSliderPoly(TRect &)>
        1c9828:	e1b04000 	movs	r4, r0
        1c982c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1c9830:	eb6617e4 	bl	1b4f7c8 <$GetFgPattern(void)>
        1c9834:	e1a05000 	mov	r5, r0
        1c9838:	e3a00004 	mov	r0, #4	; 0x4
        1c983c:	eb6617e7 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        1c9840:	eb66286a 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        1c9844:	e1a00004 	mov	r0, r4
        1c9848:	eb66242f 	bl	1b5290c <$PaintPoly(Polygon **)>
        1c984c:	e1a00004 	mov	r0, r4
        1c9850:	eb661c08 	bl	1b50878 <$KillPoly(Polygon **)>
        1c9854:	e1a00005 	mov	r0, r5
        1c9858:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1c985c:	ea662863 	b	1b539f0 <$SetFgPattern(PixelMap **)>
    */
}

/**
 * Symbol: TSliderView::RealDraw(TRect &)
 * Address: 001c9860
 */
TSliderView::RealDraw(TRect &) {
    /*
        1c9860:	e1a0c00d 	mov	ip, sp
        1c9864:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1c9868:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c986c:	e1a04000 	mov	r4, r0
        1c9870:	e3a07002 	mov	r7, #2	; 0x2
        1c9874:	e280603c 	add	r6, r0, #60	; 0x3c
        1c9878:	e2800010 	add	r0, r0, #16	; 0x10
        1c987c:	e1a05000 	mov	r5, r0
        1c9880:	e8905000 	ldmia	r0, {ip, lr}
        1c9884:	e8865000 	stmia	r6, {ip, lr}
        1c9888:	e1a00004 	mov	r0, r4
        1c988c:	eb6355a1 	bl	1a9ef18 <TView::$Printing(void)>
        1c9890:	e3300000 	teq	r0, #0	; 0x0
        1c9894:	0a000008 	beq	1c98bc <TSliderView::RealDraw(TRect &)+0x5c>
        1c9898:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1c989c:	e59f1038 	ldr	r1, [pc, #38]	; 1c98dc <TSliderView::RealDraw(TRect &)+0x7c>
        1c98a0:	eb680328 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1c98a4:	e3100003 	tst	r0, #3	; 0x3
        1c98a8:	01a00140 	moveq	r0, r0, asr #2
        1c98ac:	0a000000 	beq	1c98b4 <TSliderView::RealDraw(TRect &)+0x54>
        1c98b0:	eb67e219 	bl	1bc211c <$_RINTError(long)>
        1c98b4:	e330004a 	teq	r0, #74	; 0x4a
        1c98b8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1c98bc:	e1a00006 	mov	r0, r6
        1c98c0:	e3a02000 	mov	r2, #0	; 0x0
        1c98c4:	e1a01007 	mov	r1, r7
        1c98c8:	eb661bdc 	bl	1b50840 <$InsetRect__FP4RectlT2>
        1c98cc:	e1a01005 	mov	r1, r5
        1c98d0:	e1a00004 	mov	r0, r4
        1c98d4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1c98d8:	ea632418 	b	1a92940 <TSliderView::$DrawSlider(TRect const &)>
        1c98dc:	00684f30 	rsbeq	r4, r8, r0, lsr pc
    */
}

/**
 * Symbol: TSliderView::RealDoCommand(RefVar const &)
 * Address: 001c98e0
 */
TSliderView::RealDoCommand(RefVar const &) {
    /*
        1c98e0:	e1a0c00d 	mov	ip, sp
        1c98e4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1c98e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c98ec:	e1a05000 	mov	r5, r0
        1c98f0:	e1a04001 	mov	r4, r1
        1c98f4:	e3a06000 	mov	r6, #0	; 0x0
        1c98f8:	e1a00001 	mov	r0, r1
        1c98fc:	eb637291 	bl	1aa6348 <$CommandID(RefVar const &)>
        1c9900:	e330000b 	teq	r0, #11	; 0xb
        1c9904:	0a000053 	beq	1c9a58 <TSliderView::RealDoCommand(RefVar const &)+0x178>
        1c9908:	e59f7140 	ldr	r7, [pc, #140]	; 1c9a50 <TSliderView::RealDoCommand(RefVar const &)+0x170>
        1c990c:	e330000d 	teq	r0, #13	; 0xd
        1c9910:	0a000058 	beq	1c9a78 <TSliderView::RealDoCommand(RefVar const &)+0x198>
        1c9914:	e3300042 	teq	r0, #66	; 0x42
        1c9918:	1a000089 	bne	1c9b44 <TSliderView::RealDoCommand(RefVar const &)+0x264>
        1c991c:	e595601c 	ldr	r6, [r5, #28]	; fField28
        1c9920:	e596101c 	ldr	r1, [r6, #28]	; fField28
        1c9924:	e24dd010 	sub	sp, sp, #16	; 0x10
        1c9928:	e1a0000d 	mov	r0, sp
        1c992c:	eb0276f4 	bl	267504 <TView::ContentsOrigin(void)>
        1c9930:	e59d0000 	ldr	r0, [sp]
        1c9934:	e2600000 	rsb	r0, r0, #0	; 0x0
        1c9938:	e1a01800 	mov	r1, r0, lsl #16
        1c993c:	e1a01841 	mov	r1, r1, asr #16
        1c9940:	e41d0004 	ldr	r0, [sp], -#4
        1c9944:	e1a00820 	mov	r0, r0, lsr #16
        1c9948:	e2600000 	rsb	r0, r0, #0	; 0x0
        1c994c:	e1a00800 	mov	r0, r0, lsl #16
        1c9950:	e1a00840 	mov	r0, r0, asr #16
        1c9954:	e5cd1003 	strb	r1, [sp, #3]
        1c9958:	e1a01441 	mov	r1, r1, asr #8
        1c995c:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        1c9960:	e5cd0001 	strb	r0, [sp, #1]
        1c9964:	e1a00440 	mov	r0, r0, asr #8
        1c9968:	e5cd0000 	strb	r0, [sp]
        1c996c:	e49d0008 	ldr	r0, [sp], #8
        1c9970:	e58d0008 	str	r0, [sp, #8]
        1c9974:	e2860010 	add	r0, r6, #16	; 0x10
        1c9978:	e8905000 	ldmia	r0, {ip, lr}
        1c997c:	e88d5000 	stmia	sp, {ip, lr}
        1c9980:	e24dd004 	sub	sp, sp, #4	; 0x4
        1c9984:	e59d000c 	ldr	r0, [sp, #12]
        1c9988:	e58d0000 	str	r0, [sp]
        1c998c:	e28d0004 	add	r0, sp, #4	; 0x4
        1c9990:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        1c9994:	e1a01841 	mov	r1, r1, asr #16
        1c9998:	e59d2000 	ldr	r2, [sp]
        1c999c:	e1a02842 	mov	r2, r2, asr #16
        1c99a0:	eb661fd0 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1c99a4:	e1a01005 	mov	r1, r5
        1c99a8:	e3a02302 	mov	r2, #134217728	; 0x8000000
        1c99ac:	e3a00042 	mov	r0, #66	; 0x42
        1c99b0:	eb637262 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1c99b4:	eb67e1e4 	bl	1bc214c <$AllocateRefHandle(long)>
        1c99b8:	e58d0000 	str	r0, [sp]
        1c99bc:	e59d2004 	ldr	r2, [sp, #4]
        1c99c0:	e1a0000d 	mov	r0, sp
        1c99c4:	e3a01000 	mov	r1, #0	; 0x0
        1c99c8:	eb637266 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        1c99cc:	e59d2008 	ldr	r2, [sp, #8]
        1c99d0:	e1a0000d 	mov	r0, sp
        1c99d4:	e3a01001 	mov	r1, #1	; 0x1
        1c99d8:	eb637262 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        1c99dc:	e1a0100d 	mov	r1, sp
        1c99e0:	e5970000 	ldr	r0, [r7]
        1c99e4:	eb635144 	bl	1a9defc <TApplication::$PostUndoCommand(RefVar const &)>
        1c99e8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1c99ec:	e1a00004 	mov	r0, r4
        1c99f0:	e3a01000 	mov	r1, #0	; 0x0
        1c99f4:	eb63725c 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        1c99f8:	e58d0004 	str	r0, [sp, #4]
        1c99fc:	e1a00004 	mov	r0, r4
        1c9a00:	e3a01001 	mov	r1, #1	; 0x1
        1c9a04:	eb637258 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        1c9a08:	e58d0008 	str	r0, [sp, #8]
        1c9a0c:	e28d0004 	add	r0, sp, #4	; 0x4
        1c9a10:	eb689761 	bl	1bef79c <$ToObject(TRect const &)>
        1c9a14:	eb67e1cc 	bl	1bc214c <$AllocateRefHandle(long)>
        1c9a18:	e58d0000 	str	r0, [sp]
        1c9a1c:	e1a0200d 	mov	r2, sp
        1c9a20:	e59f102c 	ldr	r1, [pc, #2c]	; 1c9a54 <TSliderView::RealDoCommand(RefVar const &)+0x174>	; fField2
        1c9a24:	e1a00006 	mov	r0, r6
        1c9a28:	e5963000 	ldr	r3, [r6]
        1c9a2c:	e1a0e00f 	mov	lr, pc
        1c9a30:	e283f048 	add	pc, r3, #72	; 0x48
        1c9a34:	e59d0000 	ldr	r0, [sp]
        1c9a38:	eb67e5df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1c9a3c:	e3a06001 	mov	r6, #1	; 0x1
        1c9a40:	e5bd000c 	ldr	r0, [sp, #12]!
        1c9a44:	eb67e5dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1c9a48:	e28dd010 	add	sp, sp, #16	; 0x10
        1c9a4c:	ea000040 	b	1c9b54 <TSliderView::RealDoCommand(RefVar const &)+0x274>
        1c9a50:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        1c9a54:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        1c9a58:	e1a01004 	mov	r1, r4
        1c9a5c:	e1a00005 	mov	r0, r5
        1c9a60:	eb63384f 	bl	1a97ba4 <TSliderView::$HandleClick(RefVar const &)>
        1c9a64:	e1a01000 	mov	r1, r0
        1c9a68:	e1a06000 	mov	r6, r0
        1c9a6c:	e1a00004 	mov	r0, r4
        1c9a70:	eb637237 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        1c9a74:	ea000030 	b	1c9b3c <TSliderView::RealDoCommand(RefVar const &)+0x25c>
        1c9a78:	e24dd008 	sub	sp, sp, #8	; 0x8
        1c9a7c:	e1a00004 	mov	r0, r4
        1c9a80:	eb637234 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1c9a84:	e1a08000 	mov	r8, r0
        1c9a88:	e1a0100d 	mov	r1, sp
        1c9a8c:	eb6302b7 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        1c9a90:	e2850010 	add	r0, r5, #16	; 0x10
        1c9a94:	e1a0100d 	mov	r1, sp
        1c9a98:	eb63449f 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
        1c9a9c:	e3300000 	teq	r0, #0	; 0x0
        1c9aa0:	0a000024 	beq	1c9b38 <TSliderView::RealDoCommand(RefVar const &)+0x258>
        1c9aa4:	e595901c 	ldr	r9, [r5, #28]	; fField28
        1c9aa8:	e1a00008 	mov	r0, r8
        1c9aac:	e599601c 	ldr	r6, [r9, #28]	; fField28
        1c9ab0:	eb6365ce 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        1c9ab4:	e3a01000 	mov	r1, #0	; 0x0
        1c9ab8:	eb63408f 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        1c9abc:	e5b92004 	ldr	r2, [r9, #4]!
        1c9ac0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1c9ac4:	e5977000 	ldr	r7, [r7]
        1c9ac8:	e1a01006 	mov	r1, r6
        1c9acc:	e3a0003f 	mov	r0, #63	; 0x3f
        1c9ad0:	eb63721a 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1c9ad4:	eb67e19c 	bl	1bc214c <$AllocateRefHandle(long)>
        1c9ad8:	e58d0000 	str	r0, [sp]
        1c9adc:	e1a0100d 	mov	r1, sp
        1c9ae0:	e1a00007 	mov	r0, r7
        1c9ae4:	eb631b53 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1c9ae8:	e59d0000 	ldr	r0, [sp]
        1c9aec:	eb67e5b2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1c9af0:	e24dd0b8 	sub	sp, sp, #184	; 0xb8
        1c9af4:	e1a0000d 	mov	r0, sp
        1c9af8:	eb62fa4b 	bl	1a8842c <TAnimate::$__ct(void)>
        1c9afc:	e28d20bc 	add	r2, sp, #188	; 0xbc
        1c9b00:	e1a01006 	mov	r1, r6
        1c9b04:	e1a0000d 	mov	r0, sp
        1c9b08:	eb636197 	bl	1aa216c <TAnimate::$SetupPoofEffect(TView *, TRect const &)>
        1c9b0c:	e59f1048 	ldr	r1, [pc, #48]	; 1c9b5c <TSliderView::RealDoCommand(RefVar const &)+0x27c>
        1c9b10:	e1a0000d 	mov	r0, sp
        1c9b14:	eb631b55 	bl	1a90870 <TAnimate::$DoEffect(RefVar const &)>
        1c9b18:	e1a00004 	mov	r0, r4
        1c9b1c:	e3a01001 	mov	r1, #1	; 0x1
        1c9b20:	eb63720b 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        1c9b24:	e3a06001 	mov	r6, #1	; 0x1
        1c9b28:	e1a0000d 	mov	r0, sp
        1c9b2c:	e3a01000 	mov	r1, #0	; 0x0
        1c9b30:	ebf9e3ff 	bl	42b34 <TAnimate::__dt(void)>
        1c9b34:	e28dd0bc 	add	sp, sp, #188	; 0xbc
        1c9b38:	e28dd008 	add	sp, sp, #8	; 0x8
        1c9b3c:	e3360000 	teq	r6, #0	; 0x0
        1c9b40:	1a000003 	bne	1c9b54 <TSliderView::RealDoCommand(RefVar const &)+0x274>
        1c9b44:	e1a01004 	mov	r1, r4
        1c9b48:	e1a00005 	mov	r0, r5
        1c9b4c:	eb635506 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
        1c9b50:	e1a06000 	mov	r6, r0
        1c9b54:	e1a00006 	mov	r0, r6
        1c9b58:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1c9b5c:	00680628 	rsbeq	r0, r8, r8, lsr #12
    */
}

/**
 * Symbol: TSliderView::DrawHilitedData(void)
 * Address: 001c9b60
 */
TSliderView::DrawHilitedData(void) {
    /*
        1c9b60:	e1a0c00d 	mov	ip, sp
        1c9b64:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1c9b68:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c9b6c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1c9b70:	e590101c 	ldr	r1, [r0, #28]	; fField28
        1c9b74:	e2811010 	add	r1, r1, #16	; 0x10
        1c9b78:	e8915000 	ldmia	r1, {ip, lr}
        1c9b7c:	e88d5000 	stmia	sp, {ip, lr}
        1c9b80:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1c9b84:	e1a0100d 	mov	r1, sp
        1c9b88:	e3a02000 	mov	r2, #0	; 0x0
        1c9b8c:	eb68025c 	bl	1bca504 <TView::$Draw(TRect const &, unsigned char)>
        1c9b90:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSliderView::HandleClick(RefVar const &)
 * Address: 001c9b94
 */
TSliderView::HandleClick(RefVar const &) {
    /*
        1c9b94:	e1a0c00d 	mov	ip, sp
        1c9b98:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1c9b9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c9ba0:	e1a04000 	mov	r4, r0
        1c9ba4:	e1a05001 	mov	r5, r1
        1c9ba8:	e24dd018 	sub	sp, sp, #24	; 0x18
        1c9bac:	e280803c 	add	r8, r0, #60	; 0x3c
        1c9bb0:	e2800010 	add	r0, r0, #16	; 0x10
        1c9bb4:	e58d0014 	str	r0, [sp, #20]
        1c9bb8:	e8905000 	ldmia	r0, {ip, lr}
        1c9bbc:	e8885000 	stmia	r8, {ip, lr}
        1c9bc0:	e1a00008 	mov	r0, r8
        1c9bc4:	e3a06000 	mov	r6, #0	; 0x0
        1c9bc8:	e1a02006 	mov	r2, r6
        1c9bcc:	e3a09002 	mov	r9, #2	; 0x2
        1c9bd0:	e1a01009 	mov	r1, r9
        1c9bd4:	eb661b19 	bl	1b50840 <$InsetRect__FP4RectlT2>
        1c9bd8:	e1a00005 	mov	r0, r5
        1c9bdc:	eb6371dd 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1c9be0:	eb636582 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        1c9be4:	e1a05000 	mov	r5, r0
        1c9be8:	e3a01001 	mov	r1, #1	; 0x1
        1c9bec:	eb634042 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        1c9bf0:	e24dd010 	sub	sp, sp, #16	; 0x10
        1c9bf4:	e1a01005 	mov	r1, r5
        1c9bf8:	e28d000c 	add	r0, sp, #12	; 0xc
        1c9bfc:	eb632b8f 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        1c9c00:	e59d000c 	ldr	r0, [sp, #12]
        1c9c04:	e58d0008 	str	r0, [sp, #8]
        1c9c08:	e3a00000 	mov	r0, #0	; 0x0
        1c9c0c:	e58d0004 	str	r0, [sp, #4]
        1c9c10:	e594701c 	ldr	r7, [r4, #28]	; fField28
        1c9c14:	e597101c 	ldr	r1, [r7, #28]	; fField28
        1c9c18:	e40d1004 	str	r1, [sp], -#4
        1c9c1c:	e59d000c 	ldr	r0, [sp, #12]
        1c9c20:	e59d1028 	ldr	r1, [sp, #40]
        1c9c24:	e48d0004 	str	r0, [sp], #4
        1c9c28:	eb662343 	bl	1b5293c <$PtInRect(Point, Rect *)>
        1c9c2c:	e3300000 	teq	r0, #0	; 0x0
        1c9c30:	01a00006 	moveq	r0, r6
        1c9c34:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1c9c38:	e24dd014 	sub	sp, sp, #20	; 0x14
        1c9c3c:	e1a0000d 	mov	r0, sp
        1c9c40:	eb62f5e6 	bl	1a873e0 <TRegionVar::$__ct(void)>
        1c9c44:	e59d0000 	ldr	r0, [sp]
        1c9c48:	eb6616da 	bl	1b4f7b8 <$GetClip(Region **)>
        1c9c4c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1c9c50:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        1c9c54:	e5b1001c 	ldr	r0, [r1, #28]!	; fField28
        1c9c58:	e2800010 	add	r0, r0, #16	; 0x10
        1c9c5c:	e8905000 	ldmia	r0, {ip, lr}
        1c9c60:	e88d5000 	stmia	sp, {ip, lr}
        1c9c64:	e1a0000d 	mov	r0, sp
        1c9c68:	eb660e8a 	bl	1b4d698 <$ClipRect(Rect *)>
        1c9c6c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1c9c70:	e8985000 	ldmia	r8, {ip, lr}
        1c9c74:	e88d5000 	stmia	sp, {ip, lr}
        1c9c78:	e1a0000d 	mov	r0, sp
        1c9c7c:	e3a02004 	mov	r2, #4	; 0x4
        1c9c80:	e1a01009 	mov	r1, r9
        1c9c84:	eb661aed 	bl	1b50840 <$InsetRect__FP4RectlT2>
        1c9c88:	e1a0000d 	mov	r0, sp
        1c9c8c:	eb63c433 	bl	1abad60 <$TRectToSliderPoly(TRect &)>
        1c9c90:	e1b08000 	movs	r8, r0
        1c9c94:	1a000005 	bne	1c9cb0 <TSliderView::HandleClick(RefVar const &)+0x11c>
        1c9c98:	e3a04001 	mov	r4, #1	; 0x1
        1c9c9c:	e28d0010 	add	r0, sp, #16	; 0x10
        1c9ca0:	e3a01000 	mov	r1, #0	; 0x0
        1c9ca4:	eb62f9e6 	bl	1a88444 <TRegionVar::$__dt(void)>
        1c9ca8:	e1a00004 	mov	r0, r4
        1c9cac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1c9cb0:	e3a00000 	mov	r0, #0	; 0x0
        1c9cb4:	e24dd068 	sub	sp, sp, #104	; 0x68
        1c9cb8:	e92d0041 	stmdb	sp!, {r0, r6}
        1c9cbc:	e28d000c 	add	r0, sp, #12	; 0xc
        1c9cc0:	eb67a32b 	bl	1bb2974 <$setjmp>
        1c9cc4:	e3300000 	teq	r0, #0	; 0x0
        1c9cc8:	1a00010c 	bne	1ca100 <TSliderView::HandleClick(RefVar const &)+0x56c>
        1c9ccc:	e28d0004 	add	r0, sp, #4	; 0x4
        1c9cd0:	eb6858e9 	bl	1be007c <$AddExceptionHandler>
        1c9cd4:	e3a09001 	mov	r9, #1	; 0x1
        1c9cd8:	e1a00008 	mov	r0, r8
        1c9cdc:	eb661adf 	bl	1b50860 <$InvertPoly(Polygon **)>
        1c9ce0:	e1a00005 	mov	r0, r5
        1c9ce4:	eb631eee 	bl	1a918a4 <TStrokePublic::$Done(void)>
        1c9ce8:	e3300000 	teq	r0, #0	; 0x0
        1c9cec:	1a0000fe 	bne	1ca0ec <TSliderView::HandleClick(RefVar const &)+0x558>
        1c9cf0:	e59f01e4 	ldr	r0, [pc, #1e4]	; 1c9edc <TSliderView::HandleClick(RefVar const &)+0x348>
        1c9cf4:	e58d00b4 	str	r0, [sp, #180]
        1c9cf8:	e59f11e0 	ldr	r1, [pc, #1e0]	; 1c9ee0 <TSliderView::HandleClick(RefVar const &)+0x34c>
        1c9cfc:	e2870010 	add	r0, r7, #16	; 0x10
        1c9d00:	e58d00ac 	str	r0, [sp, #172]
        1c9d04:	e58d10b0 	str	r1, [sp, #176]
        1c9d08:	e59f11d4 	ldr	r1, [pc, #1d4]	; 1c9ee4 <TSliderView::HandleClick(RefVar const &)+0x350>
        1c9d0c:	e58d10a8 	str	r1, [sp, #168]
        1c9d10:	e59f01d0 	ldr	r0, [pc, #1d0]	; 1c9ee8 <TSliderView::HandleClick(RefVar const &)+0x354>
        1c9d14:	e58d00a4 	str	r0, [sp, #164]
        1c9d18:	e1a01005 	mov	r1, r5
        1c9d1c:	e28d009c 	add	r0, sp, #156	; 0x9c
        1c9d20:	eb632727 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        1c9d24:	e28d10a0 	add	r1, sp, #160	; 0xa0
        1c9d28:	e28d009c 	add	r0, sp, #156	; 0x9c
        1c9d2c:	ebff3d24 	bl	1991c4 <CheapDistance__FRC6TPointT1>
        1c9d30:	e3500003 	cmp	r0, #3	; 0x3
        1c9d34:	da0000e3 	ble	1ca0c8 <TSliderView::HandleClick(RefVar const &)+0x534>
        1c9d38:	e1a00008 	mov	r0, r8
        1c9d3c:	eb661ac7 	bl	1b50860 <$InvertPoly(Polygon **)>
        1c9d40:	e3a00001 	mov	r0, #1	; 0x1
        1c9d44:	e58d0098 	str	r0, [sp, #152]
        1c9d48:	e24dd018 	sub	sp, sp, #24	; 0x18
        1c9d4c:	e59d00d0 	ldr	r0, [sp, #208]
        1c9d50:	e28d1010 	add	r1, sp, #16	; 0x10
        1c9d54:	e8905000 	ldmia	r0, {ip, lr}
        1c9d58:	e8815000 	stmia	r1, {ip, lr}
        1c9d5c:	e28d1008 	add	r1, sp, #8	; 0x8
        1c9d60:	e28d0010 	add	r0, sp, #16	; 0x10
        1c9d64:	e8905000 	ldmia	r0, {ip, lr}
        1c9d68:	e8815000 	stmia	r1, {ip, lr}
        1c9d6c:	e59d00bc 	ldr	r0, [sp, #188]
        1c9d70:	e5900000 	ldr	r0, [r0]
        1c9d74:	e2800010 	add	r0, r0, #16	; 0x10
        1c9d78:	e8905000 	ldmia	r0, {ip, lr}
        1c9d7c:	e88d5000 	stmia	sp, {ip, lr}
        1c9d80:	e59d0004 	ldr	r0, [sp, #4]
        1c9d84:	e1a00840 	mov	r0, r0, asr #16
        1c9d88:	e5cd0015 	strb	r0, [sp, #21]
        1c9d8c:	e1a00440 	mov	r0, r0, asr #8
        1c9d90:	e5cd0014 	strb	r0, [sp, #20]
        1c9d94:	e59d1006 	ldr	r1, [sp, #6]	; fField6
        1c9d98:	e5cd100d 	strb	r1, [sp, #13]
        1c9d9c:	e5cd000c 	strb	r0, [sp, #12]
        1c9da0:	e594003c 	ldr	r0, [r4, #60]
        1c9da4:	e1a00820 	mov	r0, r0, lsr #16
        1c9da8:	e280000c 	add	r0, r0, #12	; 0xc
        1c9dac:	e1a09800 	mov	r9, r0, lsl #16
        1c9db0:	e1a09849 	mov	r9, r9, asr #16
        1c9db4:	e3a01000 	mov	r1, #0	; 0x0
        1c9db8:	e3a00000 	mov	r0, #0	; 0x0
        1c9dbc:	eb660a15 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        1c9dc0:	e1a00004 	mov	r0, r4
        1c9dc4:	e3a01102 	mov	r1, #-2147483648	; 0x80000000
        1c9dc8:	eb68060b 	bl	1bcb5fc <TView::$SetFlags(unsigned long)>
        1c9dcc:	e1a00004 	mov	r0, r4
        1c9dd0:	e3a01000 	mov	r1, #0	; 0x0
        1c9dd4:	e5942000 	ldr	r2, [r4]
        1c9dd8:	e1a0e00f 	mov	lr, pc
        1c9ddc:	e282f054 	add	pc, r2, #84	; 0x54
        1c9de0:	e59d00bc 	ldr	r0, [sp, #188]
        1c9de4:	e5900000 	ldr	r0, [r0]
        1c9de8:	e3a01000 	mov	r1, #0	; 0x0
        1c9dec:	eb636d2c 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        1c9df0:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        1c9df4:	e1a0000d 	mov	r0, sp
        1c9df8:	eb662f2b 	bl	1b55aac <TSaveScreenBits::$__ct(void)>
        1c9dfc:	e28d103c 	add	r1, sp, #60	; 0x3c
        1c9e00:	e1a0000d 	mov	r0, sp
        1c9e04:	eb660a0d 	bl	1b4c640 <TSaveScreenBits::$AllocateBuffers(Rect *)>
        1c9e08:	e3300000 	teq	r0, #0	; 0x0
        1c9e0c:	1a000005 	bne	1c9e28 <TSliderView::HandleClick(RefVar const &)+0x294>
        1c9e10:	e59d00f8 	ldr	r0, [sp, #248]
        1c9e14:	e5900000 	ldr	r0, [r0]
        1c9e18:	e3a02000 	mov	r2, #0	; 0x0
        1c9e1c:	e3a010e9 	mov	r1, #233	; 0xe9
        1c9e20:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        1c9e24:	eb6864dc 	bl	1be319c <$Throw>
        1c9e28:	e1a0000d 	mov	r0, sp
        1c9e2c:	eb6626df 	bl	1b539b0 <TSaveScreenBits::$SaveScreenBits(void)>
        1c9e30:	e1a00004 	mov	r0, r4
        1c9e34:	e3a01102 	mov	r1, #-2147483648	; 0x80000000
        1c9e38:	eb67fda3 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        1c9e3c:	e28d1034 	add	r1, sp, #52	; 0x34
        1c9e40:	e1a00004 	mov	r0, r4
        1c9e44:	e5942000 	ldr	r2, [r4]
        1c9e48:	e1a0e00f 	mov	lr, pc
        1c9e4c:	e282ff41 	add	pc, r2, #260	; 0x104
        1c9e50:	e3a01000 	mov	r1, #0	; 0x0
        1c9e54:	e3a00000 	mov	r0, #0	; 0x0
        1c9e58:	eb6609f0 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        1c9e5c:	e59d60e0 	ldr	r6, [sp, #224]
        1c9e60:	e1a06846 	mov	r6, r6, asr #16
        1c9e64:	e1a0a006 	mov	sl, r6
        1c9e68:	e1a00005 	mov	r0, r5
        1c9e6c:	eb631e8c 	bl	1a918a4 <TStrokePublic::$Done(void)>
        1c9e70:	e3300000 	teq	r0, #0	; 0x0
        1c9e74:	1a00002a 	bne	1c9f24 <TSliderView::HandleClick(RefVar const &)+0x390>
        1c9e78:	e1a01005 	mov	r1, r5
        1c9e7c:	e28d00e0 	add	r0, sp, #224	; 0xe0
        1c9e80:	eb6326cf 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        1c9e84:	e59d00e0 	ldr	r0, [sp, #224]
        1c9e88:	e1a00840 	mov	r0, r0, asr #16
        1c9e8c:	e1590000 	cmp	r9, r0
        1c9e90:	c1a00009 	movgt	r0, r9
        1c9e94:	e1a06800 	mov	r6, r0, lsl #16
        1c9e98:	e1a06846 	mov	r6, r6, asr #16
        1c9e9c:	e156000a 	cmp	r6, sl
        1c9ea0:	0a000019 	beq	1c9f0c <TSliderView::HandleClick(RefVar const &)+0x378>
        1c9ea4:	aa000010 	bge	1c9eec <TSliderView::HandleClick(RefVar const &)+0x358>
        1c9ea8:	e24dd010 	sub	sp, sp, #16	; 0x10
        1c9eac:	e5cd6045 	strb	r6, [sp, #69]
        1c9eb0:	e1a00446 	mov	r0, r6, asr #8
        1c9eb4:	e5cd0044 	strb	r0, [sp, #68]
        1c9eb8:	e28d1044 	add	r1, sp, #68	; 0x44
        1c9ebc:	e1a0000d 	mov	r0, sp
        1c9ec0:	eb62f952 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
        1c9ec4:	e1a0200d 	mov	r2, sp
        1c9ec8:	e28d104c 	add	r1, sp, #76	; 0x4c
        1c9ecc:	e28d0010 	add	r0, sp, #16	; 0x10
        1c9ed0:	eb6626b2 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
        1c9ed4:	e28dd010 	add	sp, sp, #16	; 0x10
        1c9ed8:	ea000009 	b	1c9f04 <TSliderView::HandleClick(RefVar const &)+0x370>
        1c9edc:	00371318 	eoreqs	r1, r7, r8, lsl r3
        1c9ee0:	00683978 	rsbeq	r3, r8, r8, ror r9
        1c9ee4:	00684588 	rsbeq	r4, r8, r8, lsl #11
        1c9ee8:	0c101934 	ldceq	9, cr1, [r0], -#208
        1c9eec:	e5c46041 	strb	r6, [r4, #65]
        1c9ef0:	e1a00446 	mov	r0, r6, asr #8
        1c9ef4:	e5c40040 	strb	r0, [r4, #64]
        1c9ef8:	e28d1034 	add	r1, sp, #52	; 0x34
        1c9efc:	e1a00004 	mov	r0, r4
        1c9f00:	eb63228e 	bl	1a92940 <TSliderView::$DrawSlider(TRect const &)>
        1c9f04:	e1a0a006 	mov	sl, r6
        1c9f08:	ea000001 	b	1c9f14 <TSliderView::HandleClick(RefVar const &)+0x380>
        1c9f0c:	e3a00001 	mov	r0, #1	; 0x1
        1c9f10:	eb636cf8 	bl	1aa52f8 <$Wait(unsigned long)>
        1c9f14:	e1a00005 	mov	r0, r5
        1c9f18:	eb631e61 	bl	1a918a4 <TStrokePublic::$Done(void)>
        1c9f1c:	e3300000 	teq	r0, #0	; 0x0
        1c9f20:	0affffd4 	beq	1c9e78 <TSliderView::HandleClick(RefVar const &)+0x2e4>
        1c9f24:	e24dd004 	sub	sp, sp, #4	; 0x4
        1c9f28:	e1a00007 	mov	r0, r7
        1c9f2c:	eb67fd6d 	bl	1bc94e8 <TView::$DataFrame(void)>
        1c9f30:	eb67e085 	bl	1bc214c <$AllocateRefHandle(long)>
        1c9f34:	e58d0000 	str	r0, [sp]
        1c9f38:	e59d10f8 	ldr	r1, [sp, #248]
        1c9f3c:	e1a0000d 	mov	r0, sp
        1c9f40:	eb63a27c 	bl	1ab2938 <$GetMeetingSlot__FRC6RefVarT1>
        1c9f44:	e3100003 	tst	r0, #3	; 0x3
        1c9f48:	01a00140 	moveq	r0, r0, asr #2
        1c9f4c:	0a000000 	beq	1c9f54 <TSliderView::HandleClick(RefVar const &)+0x3c0>
        1c9f50:	eb67e071 	bl	1bc211c <$_RINTError(long)>
        1c9f54:	e3300000 	teq	r0, #0	; 0x0
        1c9f58:	0a000052 	beq	1ca0a8 <TSliderView::HandleClick(RefVar const &)+0x514>
        1c9f5c:	e24dd010 	sub	sp, sp, #16	; 0x10
        1c9f60:	e59d0104 	ldr	r0, [sp, #260]
        1c9f64:	e28d1008 	add	r1, sp, #8	; 0x8
        1c9f68:	e8901008 	ldmia	r0, {r3, ip}
        1c9f6c:	e8811008 	stmia	r1, {r3, ip}
        1c9f70:	e28d0008 	add	r0, sp, #8	; 0x8
        1c9f74:	e8905000 	ldmia	r0, {ip, lr}
        1c9f78:	e88d5000 	stmia	sp, {ip, lr}
        1c9f7c:	e5cd6005 	strb	r6, [sp, #5]
        1c9f80:	e1a00446 	mov	r0, r6, asr #8
        1c9f84:	e5cd0004 	strb	r0, [sp, #4]
        1c9f88:	e24dd008 	sub	sp, sp, #8	; 0x8
        1c9f8c:	e59d10f4 	ldr	r1, [sp, #244]
        1c9f90:	e1a0000d 	mov	r0, sp
        1c9f94:	eb02755a 	bl	267504 <TView::ContentsOrigin(void)>
        1c9f98:	e59d0000 	ldr	r0, [sp]
        1c9f9c:	e2600000 	rsb	r0, r0, #0	; 0x0
        1c9fa0:	e1a01800 	mov	r1, r0, lsl #16
        1c9fa4:	e1a01841 	mov	r1, r1, asr #16
        1c9fa8:	e41d0004 	ldr	r0, [sp], -#4
        1c9fac:	e1a00820 	mov	r0, r0, lsr #16
        1c9fb0:	e2600000 	rsb	r0, r0, #0	; 0x0
        1c9fb4:	e1a00800 	mov	r0, r0, lsl #16
        1c9fb8:	e1a00840 	mov	r0, r0, asr #16
        1c9fbc:	e5cd1003 	strb	r1, [sp, #3]
        1c9fc0:	e1a01441 	mov	r1, r1, asr #8
        1c9fc4:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        1c9fc8:	e5cd0001 	strb	r0, [sp, #1]
        1c9fcc:	e1a00440 	mov	r0, r0, asr #8
        1c9fd0:	e5cd0000 	strb	r0, [sp]
        1c9fd4:	e49d0008 	ldr	r0, [sp], #8
        1c9fd8:	e40d0004 	str	r0, [sp], -#4
        1c9fdc:	e59d0004 	ldr	r0, [sp, #4]
        1c9fe0:	e58d0000 	str	r0, [sp]
        1c9fe4:	e28d0008 	add	r0, sp, #8	; 0x8
        1c9fe8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        1c9fec:	e1a01841 	mov	r1, r1, asr #16
        1c9ff0:	e59d2000 	ldr	r2, [sp]
        1c9ff4:	e1a02842 	mov	r2, r2, asr #16
        1c9ff8:	eb661e3a 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1c9ffc:	e59d0004 	ldr	r0, [sp, #4]
        1ca000:	e58d0000 	str	r0, [sp]
        1ca004:	e28d0010 	add	r0, sp, #16	; 0x10
        1ca008:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        1ca00c:	e1a01841 	mov	r1, r1, asr #16
        1ca010:	e59d2000 	ldr	r2, [sp]
        1ca014:	e1a02842 	mov	r2, r2, asr #16
        1ca018:	eb661e32 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1ca01c:	e3a00002 	mov	r0, #2	; 0x2
        1ca020:	eb63475d 	bl	1a9bd9c <$MakeArray(long)>
        1ca024:	eb67e048 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca028:	e58d0000 	str	r0, [sp]
        1ca02c:	e28d0008 	add	r0, sp, #8	; 0x8
        1ca030:	eb6895d9 	bl	1bef79c <$ToObject(TRect const &)>
        1ca034:	eb67e044 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca038:	e1a06000 	mov	r6, r0
        1ca03c:	e5902000 	ldr	r2, [r0]
        1ca040:	e59d0000 	ldr	r0, [sp]
        1ca044:	e5900000 	ldr	r0, [r0]
        1ca048:	e3a01000 	mov	r1, #0	; 0x0
        1ca04c:	eb67f0c1 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ca050:	e1a00006 	mov	r0, r6
        1ca054:	eb67e458 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca058:	e28d0010 	add	r0, sp, #16	; 0x10
        1ca05c:	eb6895ce 	bl	1bef79c <$ToObject(TRect const &)>
        1ca060:	eb67e039 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca064:	e1a06000 	mov	r6, r0
        1ca068:	e5902000 	ldr	r2, [r0]
        1ca06c:	e59d0000 	ldr	r0, [sp]
        1ca070:	e5900000 	ldr	r0, [r0]
        1ca074:	e3a01001 	mov	r1, #1	; 0x1
        1ca078:	eb67f0b6 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ca07c:	e1a00006 	mov	r0, r6
        1ca080:	eb67e44d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca084:	e3a03000 	mov	r3, #0	; 0x0
        1ca088:	e92d0008 	stmdb	sp!, {r3}
        1ca08c:	e28d2004 	add	r2, sp, #4	; 0x4
        1ca090:	e1a00007 	mov	r0, r7
        1ca094:	e59d110c 	ldr	r1, [sp, #268]
        1ca098:	eb680550 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        1ca09c:	e5bd0004 	ldr	r0, [sp, #4]!
        1ca0a0:	eb67e445 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca0a4:	e28dd018 	add	sp, sp, #24	; 0x18
        1ca0a8:	e59d0000 	ldr	r0, [sp]
        1ca0ac:	eb67e442 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca0b0:	e28dd004 	add	sp, sp, #4	; 0x4
        1ca0b4:	e1a0000d 	mov	r0, sp
        1ca0b8:	e3a01000 	mov	r1, #0	; 0x0
        1ca0bc:	eb662e7c 	bl	1b55ab4 <TSaveScreenBits::$__dt(void)>
        1ca0c0:	e28dd044 	add	sp, sp, #68	; 0x44
        1ca0c4:	ea000001 	b	1ca0d0 <TSliderView::HandleClick(RefVar const &)+0x53c>
        1ca0c8:	e3a00001 	mov	r0, #1	; 0x1
        1ca0cc:	eb636c89 	bl	1aa52f8 <$Wait(unsigned long)>
        1ca0d0:	e1a00005 	mov	r0, r5
        1ca0d4:	eb631df2 	bl	1a918a4 <TStrokePublic::$Done(void)>
        1ca0d8:	e3300000 	teq	r0, #0	; 0x0
        1ca0dc:	0affff0d 	beq	1c9d18 <TSliderView::HandleClick(RefVar const &)+0x184>
        1ca0e0:	e59d0098 	ldr	r0, [sp, #152]
        1ca0e4:	e3300000 	teq	r0, #0	; 0x0
        1ca0e8:	1a000001 	bne	1ca0f4 <TSliderView::HandleClick(RefVar const &)+0x560>
        1ca0ec:	e1a00008 	mov	r0, r8
        1ca0f0:	eb6619da 	bl	1b50860 <$InvertPoly(Polygon **)>
        1ca0f4:	e28d0004 	add	r0, sp, #4	; 0x4
        1ca0f8:	eb685bee 	bl	1be10b8 <$ExitHandler>
        1ca0fc:	ea000001 	b	1ca108 <TSliderView::HandleClick(RefVar const &)+0x574>
        1ca100:	e3a00001 	mov	r0, #1	; 0x1
        1ca104:	e58d0000 	str	r0, [sp]
        1ca108:	e59d0080 	ldr	r0, [sp, #128]
        1ca10c:	eb662632 	bl	1b539dc <$SetClip(Region **)>
        1ca110:	e59d0000 	ldr	r0, [sp]
        1ca114:	e3300000 	teq	r0, #0	; 0x0
        1ca118:	128d0004 	addne	r0, sp, #4	; 0x4
        1ca11c:	1b68600c 	blne	1be2154 <$NextHandler>
        1ca120:	e28dd070 	add	sp, sp, #112	; 0x70
        1ca124:	eafffedb 	b	1c9c98 <TSliderView::HandleClick(RefVar const &)+0x104>
    */
}

/**
 * Symbol: TSliderView::Constructor(RefVar const &, TView *)
 * Address: 001cbd54
 */
TSliderView::Constructor(RefVar const &, TView *) {
    /*
        1cbd54:	ea67f5df 	b	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
    */
}

/**
 * Symbol: TSliderView::__dt(void)
 * Address: 001cbd58
 */
TSliderView::~TSliderView(void) {
    /*
        1cbd58:	e1a0c00d 	mov	ip, sp
        1cbd5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1cbd60:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cbd64:	e1a04000 	mov	r4, r0
        1cbd68:	e1a05001 	mov	r5, r1
        1cbd6c:	e59f002c 	ldr	r0, [pc, #2c]	; 1cbda0 <TSliderView::__dt(void)+0x48>	; fField2
        1cbd70:	e5840000 	str	r0, [r4]
        1cbd74:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1cbd78:	e2800024 	add	r0, r0, #36	; 0x24
        1cbd7c:	eb637e1e 	bl	1aab5fc <$DeleteMeetingHilite(RefVar const &)>
        1cbd80:	e1a00004 	mov	r0, r4
        1cbd84:	e3a01000 	mov	r1, #0	; 0x0
        1cbd88:	eb67f5bf 	bl	1bc948c <TView::$__dt(void)>
        1cbd8c:	e3150001 	tst	r5, #1	; 0x1
        1cbd90:	11a00004 	movne	r0, r4
        1cbd94:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1cbd98:	1a62f1a7 	bne	1a8843c <$__dl__8TxObjectSFPv>
        1cbd9c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1cbda0:	0001b52c 	andeq	fp, r1, ip, lsr #10
    */
}

