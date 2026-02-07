#include "include/TPictureView.h"

/**
 * Symbol: TPictureView::ClassID( const(void))
 * Address: 00188d38
 */
TPictureView::ClassID( const(void)) {
    /*
        188d38:	e3a0004c 	mov	r0, #76	; 0x4c
        188d3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPictureView::DerivedFrom( const(long))
 * Address: 00188d40
 */
TPictureView::DerivedFrom( const(long)) {
    /*
        188d40:	e1a0c00d 	mov	ip, sp
        188d44:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        188d48:	e24cb004 	sub	fp, ip, #4	; 0x4
        188d4c:	e331004c 	teq	r1, #76	; 0x4c
        188d50:	0a000002 	beq	188d60 <TPictureView::DerivedFrom( const(long))+0x20>
        188d54:	eb036a19 	bl	2635c0 <TView::DerivedFrom( const(long))>
        188d58:	e3300000 	teq	r0, #0	; 0x0
        188d5c:	0a000001 	beq	188d68 <TPictureView::DerivedFrom( const(long))+0x28>
        188d60:	e3a00001 	mov	r0, #1	; 0x1
        188d64:	ea000000 	b	188d6c <TPictureView::DerivedFrom( const(long))+0x2c>
        188d68:	e3a00000 	mov	r0, #0	; 0x0
        188d6c:	e20000ff 	and	r0, r0, #255	; 0xff
        188d70:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPictureView::RealDraw(TRect &)
 * Address: 00189b10
 */
TPictureView::RealDraw(TRect &) {
    /*
        189b10:	e2801010 	add	r1, r0, #16	; 0x10
        189b14:	ea651309 	b	1ace740 <TPictureView::$DrawUsingRect(TRect const &)>
    */
}

/**
 * Symbol: TPictureView::Hilite(unsigned char)
 * Address: 00189b18
 */
TPictureView::Hilite(unsigned char) {
    /*
        189b18:	e1a0c00d 	mov	ip, sp
        189b1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        189b20:	e24cb004 	sub	fp, ip, #4	; 0x4
        189b24:	e1a04000 	mov	r4, r0
        189b28:	e20160ff 	and	r6, r1, #255	; 0xff
        189b2c:	e24dd008 	sub	sp, sp, #8	; 0x8
        189b30:	e1a05000 	mov	r5, r0
        189b34:	e3a00002 	mov	r0, #2	; 0x2
        189b38:	eb68e183 	bl	1bc214c <$AllocateRefHandle(long)>
        189b3c:	e58d0000 	str	r0, [sp]
        189b40:	e1a0200d 	mov	r2, sp
        189b44:	e59f10f8 	ldr	r1, [pc, #f8]	; 189c44 <TPictureView::Hilite(unsigned char)+0x12c>
        189b48:	e1a00005 	mov	r0, r5
        189b4c:	e5953000 	ldr	r3, [r5]
        189b50:	e1a0e00f 	mov	lr, pc
        189b54:	e283f044 	add	pc, r3, #68	; 0x44
        189b58:	eb68e17b 	bl	1bc214c <$AllocateRefHandle(long)>
        189b5c:	e58d0004 	str	r0, [sp, #4]
        189b60:	e59d0000 	ldr	r0, [sp]
        189b64:	eb68e594 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189b68:	e3a05000 	mov	r5, #0	; 0x0
        189b6c:	e59d0004 	ldr	r0, [sp, #4]
        189b70:	e5900000 	ldr	r0, [r0]
        189b74:	e3300002 	teq	r0, #2	; 0x2
        189b78:	0a000048 	beq	189ca0 <TPictureView::Hilite(unsigned char)+0x188>
        189b7c:	e28d0004 	add	r0, sp, #4	; 0x4
        189b80:	eb69a782 	bl	1bf3990 <$IsFrame(RefVar const &)>
        189b84:	e3300000 	teq	r0, #0	; 0x0
        189b88:	0a000044 	beq	189ca0 <TPictureView::Hilite(unsigned char)+0x188>
        189b8c:	e59f00b4 	ldr	r0, [pc, #b4]	; 189c48 <TPictureView::Hilite(unsigned char)+0x130>
        189b90:	e5900000 	ldr	r0, [r0]
        189b94:	e5901000 	ldr	r1, [r0]
        189b98:	e59d0004 	ldr	r0, [sp, #4]
        189b9c:	e5900000 	ldr	r0, [r0]
        189ba0:	eb68e9a8 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        189ba4:	e3300000 	teq	r0, #0	; 0x0
        189ba8:	0a00003c 	beq	189ca0 <TPictureView::Hilite(unsigned char)+0x188>
        189bac:	e1a00004 	mov	r0, r4
        189bb0:	eb690aa3 	bl	1bcc644 <TView::$VisibleDeep( const(void))>
        189bb4:	e3300000 	teq	r0, #0	; 0x0
        189bb8:	0a000038 	beq	189ca0 <TPictureView::Hilite(unsigned char)+0x188>
        189bbc:	e24dd018 	sub	sp, sp, #24	; 0x18
        189bc0:	e1a01004 	mov	r1, r4
        189bc4:	e1a0000d 	mov	r0, sp
        189bc8:	eb690a90 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
        189bcc:	e1a0100d 	mov	r1, sp
        189bd0:	e28d0004 	add	r0, sp, #4	; 0x4
        189bd4:	eb63f600 	bl	1a873dc <TRegionVar::$__ct(TRegion &)>
        189bd8:	e1a0000d 	mov	r0, sp
        189bdc:	e3a01000 	mov	r1, #0	; 0x0
        189be0:	eb63fe27 	bl	1a89484 <TRegion::$__dt(void)>
        189be4:	e3a06000 	mov	r6, #0	; 0x0
        189be8:	e52d506c 	str	r5, [sp, -#108]!
        189bec:	e28d0008 	add	r0, sp, #8	; 0x8
        189bf0:	eb68a35f 	bl	1bb2974 <$setjmp>
        189bf4:	e3300000 	teq	r0, #0	; 0x0
        189bf8:	1a000013 	bne	189c4c <TPictureView::Hilite(unsigned char)+0x134>
        189bfc:	e1a0000d 	mov	r0, sp
        189c00:	eb69591d 	bl	1be007c <$AddExceptionHandler>
        189c04:	e5940028 	ldr	r0, [r4, #40]	; fField40
        189c08:	e3d05103 	bics	r5, r0, #-1073741824	; 0xc0000000
        189c0c:	1a000004 	bne	189c24 <TPictureView::Hilite(unsigned char)+0x10c>
        189c10:	e1a00004 	mov	r0, r4
        189c14:	e3a01009 	mov	r1, #9	; 0x9
        189c18:	eb690246 	bl	1bca538 <TView::$GetCacheProto(long)>
        189c1c:	e3300002 	teq	r0, #2	; 0x2
        189c20:	03a05006 	moveq	r5, #6	; 0x6
        189c24:	e2841010 	add	r1, r4, #16	; 0x10
        189c28:	e1a02005 	mov	r2, r5
        189c2c:	e28d0088 	add	r0, sp, #136	; 0x88
        189c30:	e3e03001 	mvn	r3, #1	; 0x1
        189c34:	eb64233a 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        189c38:	e1a0000d 	mov	r0, sp
        189c3c:	eb695d1d 	bl	1be10b8 <$ExitHandler>
        189c40:	ea000002 	b	189c50 <TPictureView::Hilite(unsigned char)+0x138>
        189c44:	00683150 	rsbeq	r3, r8, r0, asr r1
        189c48:	006837b0 	streqh	r3, [r8], -#112
        189c4c:	e3a06001 	mov	r6, #1	; 0x1
        189c50:	e59d4070 	ldr	r4, [sp, #112]
        189c54:	e24dd008 	sub	sp, sp, #8	; 0x8
        189c58:	e1a0000d 	mov	r0, sp
        189c5c:	eb6996d0 	bl	1bef7a4 <$GetPort(GrafPort **)>
        189c60:	e49d0004 	ldr	r0, [sp], #4
        189c64:	e5900024 	ldr	r0, [r0, #36]
        189c68:	e58d0000 	str	r0, [sp]
        189c6c:	e1a00004 	mov	r0, r4
        189c70:	e59d1000 	ldr	r1, [sp]
        189c74:	eb670e8e 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        189c78:	e28dd004 	add	sp, sp, #4	; 0x4
        189c7c:	e3360000 	teq	r6, #0	; 0x0
        189c80:	11a0000d 	movne	r0, sp
        189c84:	1b696132 	blne	1be2154 <$NextHandler>
        189c88:	e28dd06c 	add	sp, sp, #108	; 0x6c
        189c8c:	e28d0004 	add	r0, sp, #4	; 0x4
        189c90:	e3a01000 	mov	r1, #0	; 0x0
        189c94:	eb63f9ea 	bl	1a88444 <TRegionVar::$__dt(void)>
        189c98:	e28dd018 	add	sp, sp, #24	; 0x18
        189c9c:	ea000002 	b	189cac <TPictureView::Hilite(unsigned char)+0x194>
        189ca0:	e1a01006 	mov	r1, r6
        189ca4:	e1a00004 	mov	r0, r4
        189ca8:	eb690232 	bl	1bca578 <TView::$Hilite(unsigned char)>
        189cac:	e59d0004 	ldr	r0, [sp, #4]
        189cb0:	eb68e541 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189cb4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPictureView::DrawHilites(unsigned char)
 * Address: 00189cb8
 */
TPictureView::DrawHilites(unsigned char) {
    /*
        189cb8:	e31100ff 	tst	r1, #255	; 0xff
        189cbc:	03a01001 	moveq	r1, #1	; 0x1
        189cc0:	0a69022c 	beq	1bca578 <TView::$Hilite(unsigned char)>
        189cc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPictureView::ClickOptions(void)
 * Address: 00189cc8
 */
TPictureView::ClickOptions(void) {
    /*
        189cc8:	e3a00003 	mov	r0, #3	; 0x3
        189ccc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPictureView::DrawUsingRect(TRect const &)
 * Address: 00189cd0
 */
TPictureView::DrawUsingRect(TRect const &) {
    /*
        189cd0:	e1a0c00d 	mov	ip, sp
        189cd4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        189cd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        189cdc:	e1a04000 	mov	r4, r0
        189ce0:	e1a05001 	mov	r5, r1
        189ce4:	e24dd008 	sub	sp, sp, #8	; 0x8
        189ce8:	e1a06000 	mov	r6, r0
        189cec:	e3a00002 	mov	r0, #2	; 0x2
        189cf0:	eb68e115 	bl	1bc214c <$AllocateRefHandle(long)>
        189cf4:	e58d0000 	str	r0, [sp]
        189cf8:	e1a0200d 	mov	r2, sp
        189cfc:	e59f10b8 	ldr	r1, [pc, #b8]	; 189dbc <TPictureView::DrawUsingRect(TRect const &)+0xec>
        189d00:	e1a00006 	mov	r0, r6
        189d04:	e5963000 	ldr	r3, [r6]
        189d08:	e1a0e00f 	mov	lr, pc
        189d0c:	e283f044 	add	pc, r3, #68	; 0x44
        189d10:	eb68e10d 	bl	1bc214c <$AllocateRefHandle(long)>
        189d14:	e58d0004 	str	r0, [sp, #4]
        189d18:	e59d0000 	ldr	r0, [sp]
        189d1c:	eb68e526 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189d20:	e59d0004 	ldr	r0, [sp, #4]
        189d24:	e5900000 	ldr	r0, [r0]
        189d28:	e3300002 	teq	r0, #2	; 0x2
        189d2c:	0a00001f 	beq	189db0 <TPictureView::DrawUsingRect(TRect const &)+0xe0>
        189d30:	e3a00002 	mov	r0, #2	; 0x2
        189d34:	eb68e104 	bl	1bc214c <$AllocateRefHandle(long)>
        189d38:	e1a06000 	mov	r6, r0
        189d3c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        189d40:	e3d07103 	bics	r7, r0, #-1073741824	; 0xc0000000
        189d44:	1a000005 	bne	189d60 <TPictureView::DrawUsingRect(TRect const &)+0x90>
        189d48:	e1a00004 	mov	r0, r4
        189d4c:	e3a01009 	mov	r1, #9	; 0x9
        189d50:	eb6901f8 	bl	1bca538 <TView::$GetCacheProto(long)>
        189d54:	e5860000 	str	r0, [r6]
        189d58:	e3300002 	teq	r0, #2	; 0x2
        189d5c:	03a07006 	moveq	r7, #6	; 0x6
        189d60:	e59f1058 	ldr	r1, [pc, #58]	; 189dc0 <TPictureView::DrawUsingRect(TRect const &)+0xf0>
        189d64:	e1a00004 	mov	r0, r4
        189d68:	eb6901f6 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        189d6c:	e5860000 	str	r0, [r6]
        189d70:	e1a01000 	mov	r1, r0
        189d74:	e3300002 	teq	r0, #2	; 0x2
        189d78:	03a03000 	moveq	r3, #0	; 0x0
        189d7c:	0a000005 	beq	189d98 <TPictureView::DrawUsingRect(TRect const &)+0xc8>
        189d80:	e1a00001 	mov	r0, r1
        189d84:	e3110003 	tst	r1, #3	; 0x3
        189d88:	01a00140 	moveq	r0, r0, asr #2
        189d8c:	0a000000 	beq	189d94 <TPictureView::DrawUsingRect(TRect const &)+0xc4>
        189d90:	eb68e0e1 	bl	1bc211c <$_RINTError(long)>
        189d94:	e1a03000 	mov	r3, r0
        189d98:	e1a02007 	mov	r2, r7
        189d9c:	e1a01005 	mov	r1, r5
        189da0:	e28d0004 	add	r0, sp, #4	; 0x4
        189da4:	eb6422de 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        189da8:	e1a00006 	mov	r0, r6
        189dac:	eb68e502 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189db0:	e59d0004 	ldr	r0, [sp, #4]
        189db4:	eb68e500 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189db8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        189dbc:	00683150 	rsbeq	r3, r8, r0, asr r1
        189dc0:	006850f8 	streqd	r5, [r8], -#8
    */
}

/**
 * Symbol: TPictureView::DrawScaledData(TRect const &, TRect const &, TRect *)
 * Address: 00189dc4
 */
TPictureView::DrawScaledData(TRect const &, TRect const &, TRect *) {
    /*
        189dc4:	e1a0c00d 	mov	ip, sp
        189dc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        189dcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        189dd0:	e1a05000 	mov	r5, r0
        189dd4:	e1a04003 	mov	r4, r3
        189dd8:	eb0361e4 	bl	262570 <TView::DrawScaledData(TRect const &, TRect const &, TRect *)>
        189ddc:	e1a01004 	mov	r1, r4
        189de0:	e1a00005 	mov	r0, r5
        189de4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        189de8:	ea651254 	b	1ace740 <TPictureView::$DrawUsingRect(TRect const &)>
    */
}

/**
 * Symbol: TPictureView::AddDragInfo(TDragInfo *)
 * Address: 00189dec
 */
TPictureView::AddDragInfo(TDragInfo *) {
    /*
        189dec:	e1a0c00d 	mov	ip, sp
        189df0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        189df4:	e24cb004 	sub	fp, ip, #4	; 0x4
        189df8:	e1a05000 	mov	r5, r0
        189dfc:	e1a04001 	mov	r4, r1
        189e00:	eb647988 	bl	1aa8428 <TView::$AddDragInfo(TDragInfo *)>
        189e04:	e3300000 	teq	r0, #0	; 0x0
        189e08:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        189e0c:	e2852024 	add	r2, r5, #36	; 0x24
        189e10:	e59f3010 	ldr	r3, [pc, #10]	; 189e28 <TPictureView::AddDragInfo(TDragInfo *)+0x3c>
        189e14:	e59f1010 	ldr	r1, [pc, #10]	; 189e2c <TPictureView::AddDragInfo(TDragInfo *)+0x40>
        189e18:	e1a00004 	mov	r0, r4
        189e1c:	eb647982 	bl	1aa842c <TDragInfo::$AddDragItem(RefVar const &, RefVar const &, RefVar const &)>
        189e20:	e3a00001 	mov	r0, #1	; 0x1
        189e24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        189e28:	006809d0 	ldreqd	r0, [r8], -#144
        189e2c:	00683ec0 	rsbeq	r3, r8, r0, asr #29
    */
}

/**
 * Symbol: TPictureView::GetDropData(RefVar const &, RefVar const &)
 * Address: 00189e30
 */
TPictureView::GetDropData(RefVar const &, RefVar const &) {
    /*
        189e30:	e1a0c00d 	mov	ip, sp
        189e34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        189e38:	e24cb004 	sub	fp, ip, #4	; 0x4
        189e3c:	e1a04000 	mov	r4, r0
        189e40:	e24dd004 	sub	sp, sp, #4	; 0x4
        189e44:	eb64a2b1 	bl	1ab2910 <TView::$GetDropData(RefVar const &, RefVar const &)>
        189e48:	eb68e0bf 	bl	1bc214c <$AllocateRefHandle(long)>
        189e4c:	e58d0000 	str	r0, [sp]
        189e50:	e5900000 	ldr	r0, [r0]
        189e54:	e3300002 	teq	r0, #2	; 0x2
        189e58:	1a00003d 	bne	189f54 <TPictureView::GetDropData(RefVar const &, RefVar const &)+0x124>
        189e5c:	eb68e0b7 	bl	1bc2140 <$AllocateFrame(void)>
        189e60:	e41d101c 	ldr	r1, [sp], -#28
        189e64:	e5810000 	str	r0, [r1]
        189e68:	e2840010 	add	r0, r4, #16	; 0x10
        189e6c:	e28d2014 	add	r2, sp, #20	; 0x14
        189e70:	e8905000 	ldmia	r0, {ip, lr}
        189e74:	e8825000 	stmia	r2, {ip, lr}
        189e78:	e5900000 	ldr	r0, [r0]
        189e7c:	e58d0004 	str	r0, [sp, #4]
        189e80:	e59d0004 	ldr	r0, [sp, #4]
        189e84:	e2600000 	rsb	r0, r0, #0	; 0x0
        189e88:	e1a00800 	mov	r0, r0, lsl #16
        189e8c:	e1a00840 	mov	r0, r0, asr #16
        189e90:	e59d1006 	ldr	r1, [sp, #6]
        189e94:	e2611000 	rsb	r1, r1, #0	; 0x0
        189e98:	e1a01801 	mov	r1, r1, lsl #16
        189e9c:	e1a01841 	mov	r1, r1, asr #16
        189ea0:	e24dd004 	sub	sp, sp, #4	; 0x4
        189ea4:	e5cd0003 	strb	r0, [sp, #3]
        189ea8:	e1a00440 	mov	r0, r0, asr #8
        189eac:	e5cd0002 	strb	r0, [sp, #2]
        189eb0:	e5cd1001 	strb	r1, [sp, #1]
        189eb4:	e1a00441 	mov	r0, r1, asr #8
        189eb8:	e5cd0000 	strb	r0, [sp]
        189ebc:	e49d0004 	ldr	r0, [sp], #4
        189ec0:	e58d0000 	str	r0, [sp]
        189ec4:	e28d0014 	add	r0, sp, #20	; 0x14
        189ec8:	e59d1002 	ldr	r1, [sp, #2]
        189ecc:	e1a01841 	mov	r1, r1, asr #16
        189ed0:	e59d2000 	ldr	r2, [sp]
        189ed4:	e1a02842 	mov	r2, r2, asr #16
        189ed8:	eb671e82 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        189edc:	e28dd008 	add	sp, sp, #8	; 0x8
        189ee0:	e28d000c 	add	r0, sp, #12	; 0xc
        189ee4:	eb69962c 	bl	1bef79c <$ToObject(TRect const &)>
        189ee8:	eb68e097 	bl	1bc214c <$AllocateRefHandle(long)>
        189eec:	e58d0000 	str	r0, [sp]
        189ef0:	e1a0200d 	mov	r2, sp
        189ef4:	e59f106c 	ldr	r1, [pc, #6c]	; 189f68 <TPictureView::GetDropData(RefVar const &, RefVar const &)+0x138>
        189ef8:	e28d0014 	add	r0, sp, #20	; 0x14
        189efc:	eb68f119 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        189f00:	e59d0000 	ldr	r0, [sp]
        189f04:	eb68e4ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189f08:	e59f105c 	ldr	r1, [pc, #5c]	; 189f6c <TPictureView::GetDropData(RefVar const &, RefVar const &)+0x13c>
        189f0c:	e1a05001 	mov	r5, r1
        189f10:	e1a00004 	mov	r0, r4
        189f14:	eb69018b 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        189f18:	eb68e08b 	bl	1bc214c <$AllocateRefHandle(long)>
        189f1c:	e58d0008 	str	r0, [sp, #8]
        189f20:	e28d0008 	add	r0, sp, #8	; 0x8
        189f24:	eb68e49f 	bl	1bc31a8 <$DeepClone(RefVar const &)>
        189f28:	eb68e087 	bl	1bc214c <$AllocateRefHandle(long)>
        189f2c:	e58d0004 	str	r0, [sp, #4]
        189f30:	e28d2004 	add	r2, sp, #4	; 0x4
        189f34:	e1a01005 	mov	r1, r5
        189f38:	e28d0014 	add	r0, sp, #20	; 0x14
        189f3c:	eb68f109 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        189f40:	e59d0004 	ldr	r0, [sp, #4]
        189f44:	eb68e49c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189f48:	e59d0008 	ldr	r0, [sp, #8]
        189f4c:	eb68e49a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189f50:	e28dd014 	add	sp, sp, #20	; 0x14
        189f54:	e59d0000 	ldr	r0, [sp]
        189f58:	e5904000 	ldr	r4, [r0]
        189f5c:	eb68e496 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        189f60:	e1a00004 	mov	r0, r4
        189f64:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        189f68:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        189f6c:	00683150 	rsbeq	r3, r8, r0, asr r1
    */
}

