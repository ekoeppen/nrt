#include "include/TTextView.h"

/**
 * Symbol: TTextView::ClassID( const(void))
 * Address: 002527bc
 */
TTextView::ClassID( const(void)) {
    /*
        2527bc:	e3a00062 	mov	r0, #98	; 0x62
        2527c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTextView::DerivedFrom( const(long))
 * Address: 002527c4
 */
TTextView::DerivedFrom( const(long)) {
    /*
        2527c4:	e1a0c00d 	mov	ip, sp
        2527c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2527cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2527d0:	e3310062 	teq	r1, #98	; 0x62
        2527d4:	0a000002 	beq	2527e4 <TTextView::DerivedFrom( const(long))+0x20>
        2527d8:	eb004378 	bl	2635c0 <TView::DerivedFrom( const(long))>
        2527dc:	e3300000 	teq	r0, #0	; 0x0
        2527e0:	0a000001 	beq	2527ec <TTextView::DerivedFrom( const(long))+0x28>
        2527e4:	e3a00001 	mov	r0, #1	; 0x1
        2527e8:	ea000000 	b	2527f0 <TTextView::DerivedFrom( const(long))+0x2c>
        2527ec:	e3a00000 	mov	r0, #0	; 0x0
        2527f0:	e20000ff 	and	r0, r0, #255	; 0xff
        2527f4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TTextView::Constructor(RefVar const &, TView *)
 * Address: 002527f8
 */
TTextView::Constructor(RefVar const &, TView *) {
    /*
        2527f8:	e1a0c00d 	mov	ip, sp
        2527fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        252800:	e24cb004 	sub	fp, ip, #4	; 0x4
        252804:	e1a04000 	mov	r4, r0
        252808:	eb65db32 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
        25280c:	e59f103c 	ldr	r1, [pc, #3c]	; 252850 <TTextView::Constructor(RefVar const &, TView *)+0x58>
        252810:	e1a00004 	mov	r0, r4
        252814:	eb65df4b 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        252818:	eb65be4b 	bl	1bc214c <$AllocateRefHandle(long)>
        25281c:	e1a05000 	mov	r5, r0
        252820:	e5900000 	ldr	r0, [r0]
        252824:	e3300002 	teq	r0, #2	; 0x2
        252828:	03a00001 	moveq	r0, #1	; 0x1
        25282c:	0a000003 	beq	252840 <TTextView::Constructor(RefVar const &, TView *)+0x48>
        252830:	e3100003 	tst	r0, #3	; 0x3
        252834:	01a00140 	moveq	r0, r0, asr #2
        252838:	0a000000 	beq	252840 <TTextView::Constructor(RefVar const &, TView *)+0x48>
        25283c:	eb65be36 	bl	1bc211c <$_RINTError(long)>
        252840:	e5a40030 	str	r0, [r4, #48]!	; fField48
        252844:	e1a00005 	mov	r0, r5
        252848:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        25284c:	ea65c25a 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        252850:	006850f8 	streqd	r5, [r8], -#8
    */
}

/**
 * Symbol: TTextView::RealDraw(TRect &)
 * Address: 00252854
 */
TTextView::RealDraw(TRect &) {
    /*
        252854:	e1a0c00d 	mov	ip, sp
        252858:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25285c:	e24cb004 	sub	fp, ip, #4	; 0x4
        252860:	e1a04000 	mov	r4, r0
        252864:	e24dd004 	sub	sp, sp, #4	; 0x4
        252868:	e59f1048 	ldr	r1, [pc, #48]	; 2528b8 <TTextView::RealDraw(TRect &)+0x64>	; fField48
        25286c:	eb65df39 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        252870:	eb65be35 	bl	1bc214c <$AllocateRefHandle(long)>
        252874:	e58d0000 	str	r0, [sp]
        252878:	e5900000 	ldr	r0, [r0]
        25287c:	e3a05000 	mov	r5, #0	; 0x0
        252880:	e3300002 	teq	r0, #2	; 0x2
        252884:	0a000097 	beq	252ae8 <TTextView::RealDraw(TRect &)+0x294>
        252888:	e24dd028 	sub	sp, sp, #40	; 0x28
        25288c:	e28d1028 	add	r1, sp, #40	; 0x28
        252890:	e1a0000d 	mov	r0, sp
        252894:	ebfd6861 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        252898:	e59d000c 	ldr	r0, [sp, #12]
        25289c:	e3300000 	teq	r0, #0	; 0x0
        2528a0:	1a000005 	bne	2528bc <TTextView::RealDraw(TRect &)+0x68>
        2528a4:	e59d0000 	ldr	r0, [sp]
        2528a8:	eb65c243 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2528ac:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        2528b0:	eb65c241 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2528b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2528b8:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        2528bc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2528c0:	e3c00103 	bic	r0, r0, #-1073741824	; 0xc0000000
        2528c4:	e1a01000 	mov	r1, r0
        2528c8:	e3100502 	tst	r0, #8388608	; 0x800000
        2528cc:	e2840010 	add	r0, r4, #16	; 0x10
        2528d0:	e59f7100 	ldr	r7, [pc, #100]	; 2529d8 <TTextView::RealDraw(TRect &)+0x184>
        2528d4:	0a00006c 	beq	252a8c <TTextView::RealDraw(TRect &)+0x238>
        2528d8:	e24dd024 	sub	sp, sp, #36	; 0x24
        2528dc:	e28de008 	add	lr, sp, #8	; 0x8
        2528e0:	e59f60f4 	ldr	r6, [pc, #f4]	; 2529dc <TTextView::RealDraw(TRect &)+0x188>
        2528e4:	e8b6100e 	ldmia	r6!, {r1, r2, r3, ip}
        2528e8:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        2528ec:	e896100c 	ldmia	r6, {r2, r3, ip}
        2528f0:	e88e100c 	stmia	lr, {r2, r3, ip}
        2528f4:	e8905000 	ldmia	r0, {ip, lr}
        2528f8:	e88d5000 	stmia	sp, {ip, lr}
        2528fc:	e24dd024 	sub	sp, sp, #36	; 0x24
        252900:	e3a00002 	mov	r0, #2	; 0x2
        252904:	eb65be10 	bl	1bc214c <$AllocateRefHandle(long)>
        252908:	e58d0004 	str	r0, [sp, #4]
        25290c:	e5a05004 	str	r5, [r0, #4]!
        252910:	e1a01007 	mov	r1, r7
        252914:	e1a00004 	mov	r0, r4
        252918:	e58d5020 	str	r5, [sp, #32]
        25291c:	eb65df0d 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        252920:	eb65be09 	bl	1bc214c <$AllocateRefHandle(long)>
        252924:	e58d0000 	str	r0, [sp]
        252928:	e1a0000d 	mov	r0, sp
        25292c:	e28d1004 	add	r1, sp, #4	; 0x4
        252930:	eb65daeb 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        252934:	e59d0000 	ldr	r0, [sp]
        252938:	eb65c21f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25293c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        252940:	e3c00103 	bic	r0, r0, #-1073741824	; 0xc0000000
        252944:	e28d102c 	add	r1, sp, #44	; 0x2c
        252948:	eb60ef77 	bl	1a8e72c <$ConvertToQDFlush(unsigned long, long *)>
        25294c:	e58d0030 	str	r0, [sp, #48]	; fField48
        252950:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        252954:	e59d1024 	ldr	r1, [sp, #36]
        252958:	e0400001 	sub	r0, r0, r1
        25295c:	e1a00800 	mov	r0, r0, lsl #16
        252960:	e58d0034 	str	r0, [sp, #52]
        252964:	e5940030 	ldr	r0, [r4, #48]	; fField48
        252968:	e58d003c 	str	r0, [sp, #60]
        25296c:	e24dd010 	sub	sp, sp, #16	; 0x10
        252970:	e1a0100d 	mov	r1, sp
        252974:	e28d0014 	add	r0, sp, #20	; 0x14
        252978:	eb63f399 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
        25297c:	e59d0034 	ldr	r0, [sp, #52]
        252980:	e1a06800 	mov	r6, r0, lsl #16
        252984:	e59d1036 	ldr	r1, [sp, #54]
        252988:	e59d0000 	ldr	r0, [sp]
        25298c:	e0810000 	add	r0, r1, r0
        252990:	e2400001 	sub	r0, r0, #1	; 0x1
        252994:	e1a05800 	mov	r5, r0, lsl #16
        252998:	e59d103a 	ldr	r1, [sp, #58]
        25299c:	e59d0036 	ldr	r0, [sp, #54]
        2529a0:	e0410000 	sub	r0, r1, r0
        2529a4:	e59d1004 	ldr	r1, [sp, #4]
        2529a8:	e59d2000 	ldr	r2, [sp]
        2529ac:	e0811002 	add	r1, r1, r2
        2529b0:	e0400001 	sub	r0, r0, r1
        2529b4:	e1a00800 	mov	r0, r0, lsl #16
        2529b8:	e5941028 	ldr	r1, [r4, #40]	; fField40
        2529bc:	e211100c 	ands	r1, r1, #12	; 0xc
        2529c0:	0a000006 	beq	2529e0 <TTextView::RealDraw(TRect &)+0x18c>
        2529c4:	e3310004 	teq	r1, #4	; 0x4
        2529c8:	0a000017 	beq	252a2c <TTextView::RealDraw(TRect &)+0x1d8>
        2529cc:	e3310008 	teq	r1, #8	; 0x8
        2529d0:	1a000019 	bne	252a3c <TTextView::RealDraw(TRect &)+0x1e8>
        2529d4:	ea000016 	b	252a34 <TTextView::RealDraw(TRect &)+0x1e0>
        2529d8:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        2529dc:	0037abdc 	ldreqsb	sl, [r7], -ip
        2529e0:	e59f1040 	ldr	r1, [pc, #40]	; 252a28 <TTextView::RealDraw(TRect &)+0x1d4>	; fField40
        2529e4:	e1a00004 	mov	r0, r4
        2529e8:	eb65ded6 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        2529ec:	eb65bdd6 	bl	1bc214c <$AllocateRefHandle(long)>
        2529f0:	e1a04000 	mov	r4, r0
        2529f4:	e5900000 	ldr	r0, [r0]
        2529f8:	e3300002 	teq	r0, #2	; 0x2
        2529fc:	0a000006 	beq	252a1c <TTextView::RealDraw(TRect &)+0x1c8>
        252a00:	e3100003 	tst	r0, #3	; 0x3
        252a04:	01a00140 	moveq	r0, r0, asr #2
        252a08:	0a000000 	beq	252a10 <TTextView::RealDraw(TRect &)+0x1bc>
        252a0c:	eb65bdc2 	bl	1bc211c <$_RINTError(long)>
        252a10:	e59d1036 	ldr	r1, [sp, #54]
        252a14:	e0800001 	add	r0, r0, r1
        252a18:	e1a05800 	mov	r5, r0, lsl #16
        252a1c:	e1a00004 	mov	r0, r4
        252a20:	eb65c1e5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        252a24:	ea000004 	b	252a3c <TTextView::RealDraw(TRect &)+0x1e8>
        252a28:	00685058 	rsbeq	r5, r8, r8, asr r0
        252a2c:	e0800fa0 	add	r0, r0, r0, lsr #31
        252a30:	e1a000c0 	mov	r0, r0, asr #1
        252a34:	e0850000 	add	r0, r5, r0
        252a38:	e2805801 	add	r5, r0, #65536	; 0x10000
        252a3c:	e3a03000 	mov	r3, #0	; 0x0
        252a40:	e28d203c 	add	r2, sp, #60	; 0x3c
        252a44:	e92d000c 	stmdb	sp!, {r2, r3}
        252a48:	e24dd008 	sub	sp, sp, #8	; 0x8
        252a4c:	e58d5004 	str	r5, [sp, #4]
        252a50:	e58d6000 	str	r6, [sp]
        252a54:	e59d2074 	ldr	r2, [sp, #116]
        252a58:	e28d3024 	add	r3, sp, #36	; 0x24
        252a5c:	e28d0068 	add	r0, sp, #104	; 0x68
        252a60:	e3a01000 	mov	r1, #0	; 0x0
        252a64:	eb63ef27 	bl	1b4e708 <$DrawRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)>
        252a68:	e28dd020 	add	sp, sp, #32	; 0x20
        252a6c:	e59d0020 	ldr	r0, [sp, #32]
        252a70:	e3300000 	teq	r0, #0	; 0x0
        252a74:	159d0020 	ldrne	r0, [sp, #32]
        252a78:	1b63eb17 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        252a7c:	e59d0004 	ldr	r0, [sp, #4]
        252a80:	eb65c1cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        252a84:	e28dd048 	add	sp, sp, #72	; 0x48
        252a88:	ea000013 	b	252adc <TTextView::RealDraw(TRect &)+0x288>
        252a8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        252a90:	e5943030 	ldr	r3, [r4, #48]	; fField48
        252a94:	e92d0008 	stmdb	sp!, {r3}
        252a98:	e201300c 	and	r3, r1, #12	; 0xc
        252a9c:	e92d0008 	stmdb	sp!, {r3}
        252aa0:	e2016003 	and	r6, r1, #3	; 0x3
        252aa4:	e1a05000 	mov	r5, r0
        252aa8:	e1a01007 	mov	r1, r7
        252aac:	e1a00004 	mov	r0, r4
        252ab0:	eb65dea8 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        252ab4:	eb65bda4 	bl	1bc214c <$AllocateRefHandle(long)>
        252ab8:	e58d0008 	str	r0, [sp, #8]
        252abc:	e28d1008 	add	r1, sp, #8	; 0x8
        252ac0:	e28d000c 	add	r0, sp, #12	; 0xc
        252ac4:	e1a02005 	mov	r2, r5
        252ac8:	e1a03006 	mov	r3, r6
        252acc:	eb6145d3 	bl	1aa4220 <$TextBox__FR11TRichStringRC6RefVarRC5TRectlN24>
        252ad0:	e5bd0008 	ldr	r0, [sp, #8]!
        252ad4:	eb65c1b8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        252ad8:	e28dd004 	add	sp, sp, #4	; 0x4
        252adc:	e59d0000 	ldr	r0, [sp]
        252ae0:	eb65c1b5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        252ae4:	e28dd028 	add	sp, sp, #40	; 0x28
        252ae8:	e59d0000 	ldr	r0, [sp]
        252aec:	eb65c1b2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        252af0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

