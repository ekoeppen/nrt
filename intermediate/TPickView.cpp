#include "include/TPickView.h"

/**
 * Symbol: TPickView::GetGridInfo(RefVar const &, TRect *)
 * Address: 00183660
 */
TPickView::GetGridInfo(RefVar const &, TRect *) {
    /*
        183660:	e1a0c00d 	mov	ip, sp
        183664:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        183668:	e24cb004 	sub	fp, ip, #4	; 0x4
        18366c:	e1a07001 	mov	r7, r1
        183670:	e1a04002 	mov	r4, r2
        183674:	e1a00001 	mov	r0, r1
        183678:	eb69c0c4 	bl	1bf3990 <$IsFrame(RefVar const &)>
        18367c:	e3a01000 	mov	r1, #0	; 0x0
        183680:	e3300000 	teq	r0, #0	; 0x0
        183684:	01a00001 	moveq	r0, r1
        183688:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18368c:	e3a05000 	mov	r5, #0	; 0x0
        183690:	e59f0178 	ldr	r0, [pc, #178]	; 183810 <TPickView::GetGridInfo(RefVar const &, TRect *)+0x1b0>
        183694:	e5900000 	ldr	r0, [r0]
        183698:	e5901000 	ldr	r1, [r0]
        18369c:	e5970000 	ldr	r0, [r7]
        1836a0:	e5900000 	ldr	r0, [r0]
        1836a4:	eb6902ed 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1836a8:	eb68faa7 	bl	1bc214c <$AllocateRefHandle(long)>
        1836ac:	e1a06000 	mov	r6, r0
        1836b0:	e5900000 	ldr	r0, [r0]
        1836b4:	e3300002 	teq	r0, #2	; 0x2
        1836b8:	0a000050 	beq	183800 <TPickView::GetGridInfo(RefVar const &, TRect *)+0x1a0>
        1836bc:	e3a00018 	mov	r0, #24	; 0x18
        1836c0:	eb692c1c 	bl	1bce738 <$__nw(unsigned int)>
        1836c4:	e1b05000 	movs	r5, r0
        1836c8:	1a000005 	bne	1836e4 <TPickView::GetGridInfo(RefVar const &, TRect *)+0x84>
        1836cc:	e59f0140 	ldr	r0, [pc, #140]	; 183814 <TPickView::GetGridInfo(RefVar const &, TRect *)+0x1b4>	; fField140
        1836d0:	e5900000 	ldr	r0, [r0]
        1836d4:	e3a02000 	mov	r2, #0	; 0x0
        1836d8:	e3a010e9 	mov	r1, #233	; 0xe9
        1836dc:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        1836e0:	eb697ead 	bl	1be319c <$Throw>
        1836e4:	e5960000 	ldr	r0, [r6]
        1836e8:	e3100003 	tst	r0, #3	; 0x3
        1836ec:	01a00140 	moveq	r0, r0, asr #2
        1836f0:	0a000000 	beq	1836f8 <TPickView::GetGridInfo(RefVar const &, TRect *)+0x98>
        1836f4:	eb68fa88 	bl	1bc211c <$_RINTError(long)>
        1836f8:	e1a09000 	mov	r9, r0
        1836fc:	e59f0114 	ldr	r0, [pc, #114]	; 183818 <TPickView::GetGridInfo(RefVar const &, TRect *)+0x1b8>
        183700:	e5900000 	ldr	r0, [r0]
        183704:	e5901000 	ldr	r1, [r0]
        183708:	e5970000 	ldr	r0, [r7]
        18370c:	e5900000 	ldr	r0, [r0]
        183710:	eb6902d2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        183714:	e3100003 	tst	r0, #3	; 0x3
        183718:	01a00140 	moveq	r0, r0, asr #2
        18371c:	0a000000 	beq	183724 <TPickView::GetGridInfo(RefVar const &, TRect *)+0xc4>
        183720:	eb68fa7d 	bl	1bc211c <$_RINTError(long)>
        183724:	e1a08000 	mov	r8, r0
        183728:	e59f00ec 	ldr	r0, [pc, #ec]	; 18381c <TPickView::GetGridInfo(RefVar const &, TRect *)+0x1bc>
        18372c:	e5900000 	ldr	r0, [r0]
        183730:	e5901000 	ldr	r1, [r0]
        183734:	e5970000 	ldr	r0, [r7]
        183738:	e5900000 	ldr	r0, [r0]
        18373c:	eb6902c7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        183740:	e5860000 	str	r0, [r6]
        183744:	e3300002 	teq	r0, #2	; 0x2
        183748:	03a00001 	moveq	r0, #1	; 0x1
        18374c:	0a000003 	beq	183760 <TPickView::GetGridInfo(RefVar const &, TRect *)+0x100>
        183750:	e3100003 	tst	r0, #3	; 0x3
        183754:	01a00140 	moveq	r0, r0, asr #2
        183758:	0a000000 	beq	183760 <TPickView::GetGridInfo(RefVar const &, TRect *)+0x100>
        18375c:	eb68fa6e 	bl	1bc211c <$_RINTError(long)>
        183760:	e5850004 	str	r0, [r5, #4]	; fField4
        183764:	e59f00b4 	ldr	r0, [pc, #b4]	; 183820 <TPickView::GetGridInfo(RefVar const &, TRect *)+0x1c0>
        183768:	e5900000 	ldr	r0, [r0]
        18376c:	e5901000 	ldr	r1, [r0]
        183770:	e5970000 	ldr	r0, [r7]
        183774:	e5900000 	ldr	r0, [r0]
        183778:	eb6902b8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        18377c:	e5860000 	str	r0, [r6]
        183780:	e3300002 	teq	r0, #2	; 0x2
        183784:	03a0a002 	moveq	sl, #2	; 0x2
        183788:	0a000004 	beq	1837a0 <TPickView::GetGridInfo(RefVar const &, TRect *)+0x140>
        18378c:	e3100003 	tst	r0, #3	; 0x3
        183790:	01a00140 	moveq	r0, r0, asr #2
        183794:	0a000000 	beq	18379c <TPickView::GetGridInfo(RefVar const &, TRect *)+0x13c>
        183798:	eb68fa5f 	bl	1bc211c <$_RINTError(long)>
        18379c:	e1a0a000 	mov	sl, r0
        1837a0:	e2855008 	add	r5, r5, #8	; 0x8
        1837a4:	e8850300 	stmia	r5, {r8, r9}
        1837a8:	e525a008 	str	sl, [r5, -#8]!
        1837ac:	e5941006 	ldr	r1, [r4, #6]
        1837b0:	e1a01841 	mov	r1, r1, asr #16
        1837b4:	e5940002 	ldr	r0, [r4, #2]	; fField2
        1837b8:	e0410840 	sub	r0, r1, r0, asr #16
        1837bc:	e040008a 	sub	r0, r0, sl, lsl #1
        1837c0:	e5957004 	ldr	r7, [r5, #4]	; fField4
        1837c4:	e0801007 	add	r1, r0, r7
        1837c8:	e1a00009 	mov	r0, r9
        1837cc:	eb68bc5b 	bl	1bb2940 <$__rt_sdiv>
        1837d0:	e0400007 	sub	r0, r0, r7
        1837d4:	e5850010 	str	r0, [r5, #16]	; fField16
        1837d8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1837dc:	e1a00840 	mov	r0, r0, asr #16
        1837e0:	e5941000 	ldr	r1, [r4]
        1837e4:	e0400841 	sub	r0, r0, r1, asr #16
        1837e8:	e040008a 	sub	r0, r0, sl, lsl #1
        1837ec:	e0801007 	add	r1, r0, r7
        1837f0:	e1a00008 	mov	r0, r8
        1837f4:	eb68bc51 	bl	1bb2940 <$__rt_sdiv>
        1837f8:	e0400007 	sub	r0, r0, r7
        1837fc:	e5850014 	str	r0, [r5, #20]	; fField20
        183800:	e1a00006 	mov	r0, r6
        183804:	eb68fe6c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        183808:	e1a00005 	mov	r0, r5
        18380c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        183810:	006851b0 	streqh	r5, [r8], -#16	; fField16
        183814:	00371318 	eoreqs	r1, r7, r8, lsl r3
        183818:	006830c8 	rsbeq	r3, r8, r8, asr #1
        18381c:	00682358 	rsbeq	r2, r8, r8, asr r3
        183820:	00683be0 	rsbeq	r3, r8, r0, ror #23
    */
}

/**
 * Symbol: TPickView::ClassID( const(void))
 * Address: 00183824
 */
TPickView::ClassID( const(void)) {
    /*
        183824:	e3a0005b 	mov	r0, #91	; 0x5b
        183828:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPickView::GetKeyCommandInfo(void)
 * Address: 00184a24
 */
TPickView::GetKeyCommandInfo(void) {
    /*
        184a24:	e1a0c00d 	mov	ip, sp
        184a28:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        184a2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        184a30:	e1a04000 	mov	r4, r0
        184a34:	e28000a4 	add	r0, r0, #164	; 0xa4
        184a38:	e1a06000 	mov	r6, r0
        184a3c:	e3a01002 	mov	r1, #2	; 0x2
        184a40:	e5900000 	ldr	r0, [r0]
        184a44:	e5801000 	str	r1, [r0]
        184a48:	e3a00000 	mov	r0, #0	; 0x0
        184a4c:	e5c400a9 	strb	r0, [r4, #169]	; fField169
        184a50:	e5c400a8 	strb	r0, [r4, #168]	; fField168
        184a54:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        184a58:	e3a00002 	mov	r0, #2	; 0x2
        184a5c:	eb68f5ba 	bl	1bc214c <$AllocateRefHandle(long)>
        184a60:	e58d0008 	str	r0, [sp, #8]
        184a64:	e3a00002 	mov	r0, #2	; 0x2
        184a68:	eb68f5b7 	bl	1bc214c <$AllocateRefHandle(long)>
        184a6c:	e58d0004 	str	r0, [sp, #4]	; fField4
        184a70:	e59f11a0 	ldr	r1, [pc, #1a0]	; 184c18 <TPickView::GetKeyCommandInfo(void)+0x1f4>
        184a74:	e1a00004 	mov	r0, r4
        184a78:	eb6916b2 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        184a7c:	eb68f5b2 	bl	1bc214c <$AllocateRefHandle(long)>
        184a80:	e58d0000 	str	r0, [sp]
        184a84:	e5900000 	ldr	r0, [r0]
        184a88:	e3300002 	teq	r0, #2	; 0x2
        184a8c:	1a000003 	bne	184aa0 <TPickView::GetKeyCommandInfo(void)+0x7c>
        184a90:	e5940024 	ldr	r0, [r4, #36]	; fField36
        184a94:	e5900000 	ldr	r0, [r0]
        184a98:	e59d1000 	ldr	r1, [sp]
        184a9c:	e5810000 	str	r0, [r1]
        184aa0:	e1a0000d 	mov	r0, sp
        184aa4:	eb6916ac 	bl	1bca55c <$GetView(RefVar const &)>
        184aa8:	e1a08000 	mov	r8, r0
        184aac:	e2840034 	add	r0, r4, #52	; 0x34
        184ab0:	e1a09000 	mov	r9, r0
        184ab4:	e5900000 	ldr	r0, [r0]
        184ab8:	e5900000 	ldr	r0, [r0]
        184abc:	eb6901fa 	bl	1bc52ac <$Length(long)>
        184ac0:	e1a07000 	mov	r7, r0
        184ac4:	e3a05000 	mov	r5, #0	; 0x0
        184ac8:	e3500000 	cmp	r0, #0	; 0x0
        184acc:	da00004a 	ble	184bfc <TPickView::GetKeyCommandInfo(void)+0x1d8>
        184ad0:	e59f1144 	ldr	r1, [pc, #144]	; 184c1c <TPickView::GetKeyCommandInfo(void)+0x1f8>	; fField144
        184ad4:	e58d1018 	str	r1, [sp, #24]
        184ad8:	e59f1140 	ldr	r1, [pc, #140]	; 184c20 <TPickView::GetKeyCommandInfo(void)+0x1fc>	; fField140
        184adc:	e58d1014 	str	r1, [sp, #20]	; fField20
        184ae0:	e59f013c 	ldr	r0, [pc, #13c]	; 184c24 <TPickView::GetKeyCommandInfo(void)+0x200>
        184ae4:	e2841054 	add	r1, r4, #84	; 0x54
        184ae8:	e58d0010 	str	r0, [sp, #16]	; fField16
        184aec:	e58d100c 	str	r1, [sp, #12]
        184af0:	e5990000 	ldr	r0, [r9]
        184af4:	e5900000 	ldr	r0, [r0]
        184af8:	e1a01005 	mov	r1, r5
        184afc:	eb68fdd4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        184b00:	e59d1008 	ldr	r1, [sp, #8]
        184b04:	e5810000 	str	r0, [r1]
        184b08:	e28d0008 	add	r0, sp, #8	; 0x8
        184b0c:	eb69bb9f 	bl	1bf3990 <$IsFrame(RefVar const &)>
        184b10:	e3300000 	teq	r0, #0	; 0x0
        184b14:	0a000035 	beq	184bf0 <TPickView::GetKeyCommandInfo(void)+0x1cc>
        184b18:	e59d1018 	ldr	r1, [sp, #24]
        184b1c:	e28d0008 	add	r0, sp, #8	; 0x8
        184b20:	e3a02000 	mov	r2, #0	; 0x0
        184b24:	eb68fdcf 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        184b28:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        184b2c:	e5810000 	str	r0, [r1]
        184b30:	e3300002 	teq	r0, #2	; 0x2
        184b34:	1a00000f 	bne	184b78 <TPickView::GetKeyCommandInfo(void)+0x154>
        184b38:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        184b3c:	e28d0008 	add	r0, sp, #8	; 0x8
        184b40:	e3a02000 	mov	r2, #0	; 0x0
        184b44:	eb68fdc7 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        184b48:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        184b4c:	e5810000 	str	r0, [r1]
        184b50:	eb6901d3 	bl	1bc52a4 <$IsSymbol(long)>
        184b54:	e3300000 	teq	r0, #0	; 0x0
        184b58:	13380000 	teqne	r8, #0	; 0x0
        184b5c:	0a000005 	beq	184b78 <TPickView::GetKeyCommandInfo(void)+0x154>
        184b60:	e28d1004 	add	r1, sp, #4	; 0x4
        184b64:	e1a00008 	mov	r0, r8
        184b68:	e3a02001 	mov	r2, #1	; 0x1
        184b6c:	eb65924f 	bl	1ae94b0 <$MatchKeyMessage(TView *, RefVar const &, unsigned long)>
        184b70:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        184b74:	e5810000 	str	r0, [r1]
        184b78:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        184b7c:	e5900000 	ldr	r0, [r0]
        184b80:	e3300002 	teq	r0, #2	; 0x2
        184b84:	0a000019 	beq	184bf0 <TPickView::GetKeyCommandInfo(void)+0x1cc>
        184b88:	e5960000 	ldr	r0, [r6]
        184b8c:	e5900000 	ldr	r0, [r0]
        184b90:	e3300002 	teq	r0, #2	; 0x2
        184b94:	1a000005 	bne	184bb0 <TPickView::GetKeyCommandInfo(void)+0x18c>
        184b98:	e1a0a006 	mov	sl, r6
        184b9c:	e5941088 	ldr	r1, [r4, #136]	; fField136
        184ba0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        184ba4:	eb68f563 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        184ba8:	e59a1000 	ldr	r1, [sl]
        184bac:	e5810000 	str	r0, [r1]
        184bb0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        184bb4:	e5912000 	ldr	r2, [r1]
        184bb8:	e5960000 	ldr	r0, [r6]
        184bbc:	e5900000 	ldr	r0, [r0]
        184bc0:	e1a01005 	mov	r1, r5
        184bc4:	eb6905e3 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        184bc8:	e59d100c 	ldr	r1, [sp, #12]
        184bcc:	e28d0004 	add	r0, sp, #4	; 0x4
        184bd0:	eb6581bd 	bl	1ae52cc <$GetCommandCharWidth(RefVar const &, StyleRecord *)>
        184bd4:	e1a00800 	mov	r0, r0, lsl #16
        184bd8:	e1a00840 	mov	r0, r0, asr #16
        184bdc:	e59410a8 	ldr	r1, [r4, #168]	; fField168
        184be0:	e1500841 	cmp	r0, r1, asr #16
        184be4:	c5c400a9 	strgtb	r0, [r4, #169]	; fField169
        184be8:	c1a00440 	movgt	r0, r0, asr #8
        184bec:	c5c400a8 	strgtb	r0, [r4, #168]	; fField168
        184bf0:	e2855001 	add	r5, r5, #1	; 0x1
        184bf4:	e1550007 	cmp	r5, r7
        184bf8:	baffffbc 	blt	184af0 <TPickView::GetKeyCommandInfo(void)+0xcc>
        184bfc:	e59d0000 	ldr	r0, [sp]
        184c00:	eb68f96d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        184c04:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        184c08:	eb68f96b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        184c0c:	e59d0008 	ldr	r0, [sp, #8]
        184c10:	eb68f969 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        184c14:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        184c18:	00682290 	streqb	r2, [r8], -#32
        184c1c:	00683390 	streqb	r3, [r8], -#48	; fField48
        184c20:	006833b0 	streqh	r3, [r8], -#48	; fField48
        184c24:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: TPickView::GetKeyCommand(long)
 * Address: 00184c28
 */
TPickView::GetKeyCommand(long) {
    /*
        184c28:	e59000a4 	ldr	r0, [r0, #164]	; fField164
        184c2c:	e5900000 	ldr	r0, [r0]
        184c30:	e3300002 	teq	r0, #2	; 0x2
        184c34:	1a68fd86 	bne	1bc4254 <$GetArraySlotRef__FlT1>
        184c38:	03a00002 	moveq	r0, #2	; 0x2
        184c3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPickView::DerivedFrom( const(long))
 * Address: 00184c40
 */
TPickView::DerivedFrom( const(long)) {
    /*
        184c40:	e1a0c00d 	mov	ip, sp
        184c44:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        184c48:	e24cb004 	sub	fp, ip, #4	; 0x4
        184c4c:	e331005b 	teq	r1, #91	; 0x5b
        184c50:	0a000002 	beq	184c60 <TPickView::DerivedFrom( const(long))+0x20>
        184c54:	eb037a59 	bl	2635c0 <TView::DerivedFrom( const(long))>
        184c58:	e3300000 	teq	r0, #0	; 0x0
        184c5c:	0a000001 	beq	184c68 <TPickView::DerivedFrom( const(long))+0x28>
        184c60:	e3a00001 	mov	r0, #1	; 0x1
        184c64:	ea000000 	b	184c6c <TPickView::DerivedFrom( const(long))+0x2c>
        184c68:	e3a00000 	mov	r0, #0	; 0x0
        184c6c:	e20000ff 	and	r0, r0, #255	; 0xff
        184c70:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::GetKeyCommandModifierWidth(long)
 * Address: 00184c74
 */
TPickView::GetKeyCommandModifierWidth(long) {
    /*
        184c74:	e1a0c00d 	mov	ip, sp
        184c78:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        184c7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        184c80:	e1a05000 	mov	r5, r0
        184c84:	e1a04001 	mov	r4, r1
        184c88:	e59f0028 	ldr	r0, [pc, #28]	; 184cb8 <TPickView::GetKeyCommandModifierWidth(long)+0x44>	; fField28
        184c8c:	e5900000 	ldr	r0, [r0]
        184c90:	eb6585a6 	bl	1ae6330 <TRootView::$CommandKeyboardConnected(void)>
        184c94:	e3a06000 	mov	r6, #0	; 0x0
        184c98:	e3300000 	teq	r0, #0	; 0x0
        184c9c:	0a000003 	beq	184cb0 <TPickView::GetKeyCommandModifierWidth(long)+0x3c>
        184ca0:	e59500a4 	ldr	r0, [r5, #164]	; fField164
        184ca4:	e5900000 	ldr	r0, [r0]
        184ca8:	e3300002 	teq	r0, #2	; 0x2
        184cac:	1a000002 	bne	184cbc <TPickView::GetKeyCommandModifierWidth(long)+0x48>
        184cb0:	e1a00006 	mov	r0, r6
        184cb4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        184cb8:	0c101934 	ldceq	9, cr1, [r0], -#208
        184cbc:	e24dd004 	sub	sp, sp, #4	; 0x4
        184cc0:	e1a01004 	mov	r1, r4
        184cc4:	eb68fd62 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        184cc8:	eb68f51f 	bl	1bc214c <$AllocateRefHandle(long)>
        184ccc:	e58d0000 	str	r0, [sp]
        184cd0:	e5900000 	ldr	r0, [r0]
        184cd4:	e3300002 	teq	r0, #2	; 0x2
        184cd8:	1a000003 	bne	184cec <TPickView::GetKeyCommandModifierWidth(long)+0x78>
        184cdc:	e59d0000 	ldr	r0, [sp]
        184ce0:	eb68f935 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        184ce4:	e1a00006 	mov	r0, r6
        184ce8:	ea000005 	b	184d04 <TPickView::GetKeyCommandModifierWidth(long)+0x90>
        184cec:	e1a0000d 	mov	r0, sp
        184cf0:	eb658176 	bl	1ae52d0 <$GetModifiersWidth(RefVar const &)>
        184cf4:	e1a04000 	mov	r4, r0
        184cf8:	e59d0000 	ldr	r0, [sp]
        184cfc:	eb68f92e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        184d00:	e1a00004 	mov	r0, r4
        184d04:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::GetDisplayIcon(RefVar const &)
 * Address: 00184d08
 */
TPickView::GetDisplayIcon(RefVar const &) {
    /*
        184d08:	e1a0c00d 	mov	ip, sp
        184d0c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        184d10:	e24cb004 	sub	fp, ip, #4	; 0x4
        184d14:	e1a04001 	mov	r4, r1
        184d18:	e1a00001 	mov	r0, r1
        184d1c:	eb69bb1b 	bl	1bf3990 <$IsFrame(RefVar const &)>
        184d20:	e3300000 	teq	r0, #0	; 0x0
        184d24:	03a00002 	moveq	r0, #2	; 0x2
        184d28:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        184d2c:	e59f0014 	ldr	r0, [pc, #14]	; 184d48 <TPickView::GetDisplayIcon(RefVar const &)+0x40>
        184d30:	e5900000 	ldr	r0, [r0]
        184d34:	e5901000 	ldr	r1, [r0]
        184d38:	e5940000 	ldr	r0, [r4]
        184d3c:	e5900000 	ldr	r0, [r0]
        184d40:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        184d44:	ea68fd45 	b	1bc4260 <$GetFrameSlotRef__FlT1>
        184d48:	00683150 	rsbeq	r3, r8, r0, asr r1
    */
}

/**
 * Symbol: TPickView::GetDisplayIndent(RefVar const &)
 * Address: 00184d4c
 */
TPickView::GetDisplayIndent(RefVar const &) {
    /*
        184d4c:	e1a0c00d 	mov	ip, sp
        184d50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        184d54:	e24cb004 	sub	fp, ip, #4	; 0x4
        184d58:	e1a04001 	mov	r4, r1
        184d5c:	e1a00001 	mov	r0, r1
        184d60:	eb69bb0a 	bl	1bf3990 <$IsFrame(RefVar const &)>
        184d64:	e3300000 	teq	r0, #0	; 0x0
        184d68:	0a000016 	beq	184dc8 <TPickView::GetDisplayIndent(RefVar const &)+0x7c>
        184d6c:	e59f0048 	ldr	r0, [pc, #48]	; 184dbc <TPickView::GetDisplayIndent(RefVar const &)+0x70>	; fField48
        184d70:	e5900000 	ldr	r0, [r0]
        184d74:	e5901000 	ldr	r1, [r0]
        184d78:	e5940000 	ldr	r0, [r4]
        184d7c:	e5900000 	ldr	r0, [r0]
        184d80:	eb68fd36 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        184d84:	eb68f4f0 	bl	1bc214c <$AllocateRefHandle(long)>
        184d88:	e1a04000 	mov	r4, r0
        184d8c:	e5900000 	ldr	r0, [r0]
        184d90:	e3300002 	teq	r0, #2	; 0x2
        184d94:	0a000009 	beq	184dc0 <TPickView::GetDisplayIndent(RefVar const &)+0x74>
        184d98:	e3100003 	tst	r0, #3	; 0x3
        184d9c:	01a00140 	moveq	r0, r0, asr #2
        184da0:	0a000000 	beq	184da8 <TPickView::GetDisplayIndent(RefVar const &)+0x5c>
        184da4:	eb68f4dc 	bl	1bc211c <$_RINTError(long)>
        184da8:	e1a05000 	mov	r5, r0
        184dac:	e1a00004 	mov	r0, r4
        184db0:	eb68f901 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        184db4:	e1a00005 	mov	r0, r5
        184db8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        184dbc:	006831b8 	streqh	r3, [r8], -#24
        184dc0:	e1a00004 	mov	r0, r4
        184dc4:	eb68f8fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        184dc8:	e3e00000 	mvn	r0, #0	; 0x0
        184dcc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::GetDisplayFixedHeight(RefVar const &)
 * Address: 00184dd0
 */
TPickView::GetDisplayFixedHeight(RefVar const &) {
    /*
        184dd0:	e1a0c00d 	mov	ip, sp
        184dd4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        184dd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        184ddc:	e1a04001 	mov	r4, r1
        184de0:	e1a00001 	mov	r0, r1
        184de4:	eb69bae9 	bl	1bf3990 <$IsFrame(RefVar const &)>
        184de8:	e3300000 	teq	r0, #0	; 0x0
        184dec:	0a000016 	beq	184e4c <TPickView::GetDisplayFixedHeight(RefVar const &)+0x7c>
        184df0:	e59f0048 	ldr	r0, [pc, #48]	; 184e40 <TPickView::GetDisplayFixedHeight(RefVar const &)+0x70>	; fField48
        184df4:	e5900000 	ldr	r0, [r0]
        184df8:	e5901000 	ldr	r1, [r0]
        184dfc:	e5940000 	ldr	r0, [r4]
        184e00:	e5900000 	ldr	r0, [r0]
        184e04:	eb68fd15 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        184e08:	eb68f4cf 	bl	1bc214c <$AllocateRefHandle(long)>
        184e0c:	e1a04000 	mov	r4, r0
        184e10:	e5900000 	ldr	r0, [r0]
        184e14:	e3300002 	teq	r0, #2	; 0x2
        184e18:	0a000009 	beq	184e44 <TPickView::GetDisplayFixedHeight(RefVar const &)+0x74>
        184e1c:	e3100003 	tst	r0, #3	; 0x3
        184e20:	01a00140 	moveq	r0, r0, asr #2
        184e24:	0a000000 	beq	184e2c <TPickView::GetDisplayFixedHeight(RefVar const &)+0x5c>
        184e28:	eb68f4bb 	bl	1bc211c <$_RINTError(long)>
        184e2c:	e1a05000 	mov	r5, r0
        184e30:	e1a00004 	mov	r0, r4
        184e34:	eb68f8e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        184e38:	e1a00005 	mov	r0, r5
        184e3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        184e40:	00682de8 	rsbeq	r2, r8, r8, ror #27
        184e44:	e1a00004 	mov	r0, r4
        184e48:	eb68f8db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        184e4c:	e3e00000 	mvn	r0, #0	; 0x0
        184e50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::GetOverflows(void)
 * Address: 00185068
 */
TPickView::GetOverflows(void) {
    /*
        185068:	e1a0c00d 	mov	ip, sp
        18506c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        185070:	e24cb004 	sub	fp, ip, #4	; 0x4
        185074:	e1a04000 	mov	r4, r0
        185078:	e24dd004 	sub	sp, sp, #4	; 0x4
        18507c:	e1a0100d 	mov	r1, sp
        185080:	eb69152e 	bl	1bca540 <TView::$GetChildOrigin(TPoint *)>
        185084:	e59f00a0 	ldr	r0, [pc, #a0]	; 18512c <TPickView::GetOverflows(void)+0xc4>
        185088:	e3a01002 	mov	r1, #2	; 0x2
        18508c:	eb68f429 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        185090:	eb68f42d 	bl	1bc214c <$AllocateRefHandle(long)>
        185094:	e1a05000 	mov	r5, r0
        185098:	e59d0000 	ldr	r0, [sp]
        18509c:	e1a00840 	mov	r0, r0, asr #16
        1850a0:	e1a00100 	mov	r0, r0, lsl #2
        1850a4:	eb68f428 	bl	1bc214c <$AllocateRefHandle(long)>
        1850a8:	e1a06000 	mov	r6, r0
        1850ac:	e5902000 	ldr	r2, [r0]
        1850b0:	e3a01000 	mov	r1, #0	; 0x0
        1850b4:	e5950000 	ldr	r0, [r5]
        1850b8:	eb6904a6 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1850bc:	e1a00006 	mov	r0, r6
        1850c0:	eb68f83d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1850c4:	e5940038 	ldr	r0, [r4, #56]	; fField56
        1850c8:	e5901000 	ldr	r1, [r0]
        1850cc:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1850d0:	e0810080 	add	r0, r1, r0, lsl #1
        1850d4:	e5101002 	ldr	r1, [r0, -#2]	; fField2
        1850d8:	e1a01841 	mov	r1, r1, asr #16
        1850dc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1850e0:	e0810840 	add	r0, r1, r0, asr #16
        1850e4:	e59d1000 	ldr	r1, [sp]
        1850e8:	e0800841 	add	r0, r0, r1, asr #16
        1850ec:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1850f0:	e0400841 	sub	r0, r0, r1, asr #16
        1850f4:	e1a00100 	mov	r0, r0, lsl #2
        1850f8:	eb68f413 	bl	1bc214c <$AllocateRefHandle(long)>
        1850fc:	e1a04000 	mov	r4, r0
        185100:	e5902000 	ldr	r2, [r0]
        185104:	e3a01001 	mov	r1, #1	; 0x1
        185108:	e5950000 	ldr	r0, [r5]
        18510c:	eb690491 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        185110:	e1a00004 	mov	r0, r4
        185114:	eb68f828 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        185118:	e5954000 	ldr	r4, [r5]
        18511c:	e1a00005 	mov	r0, r5
        185120:	eb68f825 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        185124:	e1a00004 	mov	r0, r4
        185128:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        18512c:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: TPickView::Scroll(RefVar const &, unsigned char)
 * Address: 0018515c
 */
TPickView::Scroll(RefVar const &, unsigned char) {
    /*
        18515c:	e1a0c00d 	mov	ip, sp
        185160:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        185164:	e24cb004 	sub	fp, ip, #4	; 0x4
        185168:	e1a04000 	mov	r4, r0
        18516c:	e1a05001 	mov	r5, r1
        185170:	e20270ff 	and	r7, r2, #255	; 0xff
        185174:	e24dd004 	sub	sp, sp, #4	; 0x4
        185178:	e1a0100d 	mov	r1, sp
        18517c:	eb6914ef 	bl	1bca540 <TView::$GetChildOrigin(TPoint *)>
        185180:	e5940038 	ldr	r0, [r4, #56]	; fField56
        185184:	e5901000 	ldr	r1, [r0]
        185188:	e5940088 	ldr	r0, [r4, #136]	; fField136
        18518c:	e0810080 	add	r0, r1, r0, lsl #1
        185190:	e5108002 	ldr	r8, [r0, -#2]	; fField2
        185194:	e1a08848 	mov	r8, r8, asr #16
        185198:	e5940014 	ldr	r0, [r4, #20]	; fField20
        18519c:	e1a00840 	mov	r0, r0, asr #16
        1851a0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1851a4:	e0406841 	sub	r6, r0, r1, asr #16
        1851a8:	e59f0058 	ldr	r0, [pc, #58]	; 185208 <TPickView::Scroll(RefVar const &, unsigned char)+0xac>
        1851ac:	e5900000 	ldr	r0, [r0]
        1851b0:	e5901000 	ldr	r1, [r0]
        1851b4:	e5950000 	ldr	r0, [r5]
        1851b8:	e5900000 	ldr	r0, [r0]
        1851bc:	eb68fc1b 	bl	1bc4230 <$EQRef__FlT1>
        1851c0:	e3300000 	teq	r0, #0	; 0x0
        1851c4:	0a000022 	beq	185254 <TPickView::Scroll(RefVar const &, unsigned char)+0xf8>
        1851c8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        1851cc:	e0810006 	add	r0, r1, r6
        1851d0:	e5cd0001 	strb	r0, [sp, #1]
        1851d4:	e1a00440 	mov	r0, r0, asr #8
        1851d8:	e5cd0000 	strb	r0, [sp]
        1851dc:	e59d0000 	ldr	r0, [sp]
        1851e0:	e1a00840 	mov	r0, r0, asr #16
        1851e4:	e3500000 	cmp	r0, #0	; 0x0
        1851e8:	c3a00000 	movgt	r0, #0	; 0x0
        1851ec:	c5cd0001 	strgtb	r0, [sp, #1]
        1851f0:	ca00002a 	bgt	1852a0 <TPickView::Scroll(RefVar const &, unsigned char)+0x144>
        1851f4:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1851f8:	e2400001 	sub	r0, r0, #1	; 0x1
        1851fc:	e5941038 	ldr	r1, [r4, #56]	; fField56
        185200:	e5911000 	ldr	r1, [r1]
        185204:	ea000001 	b	185210 <TPickView::Scroll(RefVar const &, unsigned char)+0xb4>
        185208:	00684d48 	rsbeq	r4, r8, r8, asr #26
        18520c:	e2400001 	sub	r0, r0, #1	; 0x1
        185210:	e3500000 	cmp	r0, #0	; 0x0
        185214:	ba000005 	blt	185230 <TPickView::Scroll(RefVar const &, unsigned char)+0xd4>
        185218:	e7912080 	ldr	r2, [r1, r0, lsl #1]
        18521c:	e1a02842 	mov	r2, r2, asr #16
        185220:	e59d3000 	ldr	r3, [sp]
        185224:	e0822843 	add	r2, r2, r3, asr #16
        185228:	e3520000 	cmp	r2, #0	; 0x0
        18522c:	cafffff6 	bgt	18520c <TPickView::Scroll(RefVar const &, unsigned char)+0xb0>
        185230:	e0812080 	add	r2, r1, r0, lsl #1
        185234:	e5922002 	ldr	r2, [r2, #2]	; fField2
        185238:	e7910080 	ldr	r0, [r1, r0, lsl #1]
        18523c:	e1a00840 	mov	r0, r0, asr #16
        185240:	e0601842 	rsb	r1, r0, r2, asr #16
        185244:	e1510006 	cmp	r1, r6
        185248:	aa00002d 	bge	185304 <TPickView::Scroll(RefVar const &, unsigned char)+0x1a8>
        18524c:	e2600000 	rsb	r0, r0, #0	; 0x0
        185250:	ea000010 	b	185298 <TPickView::Scroll(RefVar const &, unsigned char)+0x13c>
        185254:	e59f004c 	ldr	r0, [pc, #4c]	; 1852a8 <TPickView::Scroll(RefVar const &, unsigned char)+0x14c>	; fField4
        185258:	e5900000 	ldr	r0, [r0]
        18525c:	e5901000 	ldr	r1, [r0]
        185260:	e5950000 	ldr	r0, [r5]
        185264:	e5900000 	ldr	r0, [r0]
        185268:	eb68fbf0 	bl	1bc4230 <$EQRef__FlT1>
        18526c:	e3300000 	teq	r0, #0	; 0x0
        185270:	0a000023 	beq	185304 <TPickView::Scroll(RefVar const &, unsigned char)+0x1a8>
        185274:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        185278:	e0410006 	sub	r0, r1, r6
        18527c:	e5cd0001 	strb	r0, [sp, #1]
        185280:	e1a00440 	mov	r0, r0, asr #8
        185284:	e5cd0000 	strb	r0, [sp]
        185288:	e0460008 	sub	r0, r6, r8
        18528c:	e59d1000 	ldr	r1, [sp]
        185290:	e1500841 	cmp	r0, r1, asr #16
        185294:	ba000004 	blt	1852ac <TPickView::Scroll(RefVar const &, unsigned char)+0x150>
        185298:	e5cd0001 	strb	r0, [sp, #1]
        18529c:	e1a00440 	mov	r0, r0, asr #8
        1852a0:	e5cd0000 	strb	r0, [sp]
        1852a4:	ea000016 	b	185304 <TPickView::Scroll(RefVar const &, unsigned char)+0x1a8>
        1852a8:	00682a70 	rsbeq	r2, r8, r0, ror sl
        1852ac:	e3a00000 	mov	r0, #0	; 0x0
        1852b0:	e5941038 	ldr	r1, [r4, #56]	; fField56
        1852b4:	e5942088 	ldr	r2, [r4, #136]	; fField136
        1852b8:	e5911000 	ldr	r1, [r1]
        1852bc:	ea000000 	b	1852c4 <TPickView::Scroll(RefVar const &, unsigned char)+0x168>
        1852c0:	e2800001 	add	r0, r0, #1	; 0x1
        1852c4:	e1520000 	cmp	r2, r0
        1852c8:	da000004 	ble	1852e0 <TPickView::Scroll(RefVar const &, unsigned char)+0x184>
        1852cc:	e791c080 	ldr	ip, [r1, r0, lsl #1]
        1852d0:	e1a0c84c 	mov	ip, ip, asr #16
        1852d4:	e59d3000 	ldr	r3, [sp]
        1852d8:	e09c3843 	adds	r3, ip, r3, asr #16
        1852dc:	4afffff7 	bmi	1852c0 <TPickView::Scroll(RefVar const &, unsigned char)+0x164>
        1852e0:	e3300000 	teq	r0, #0	; 0x0
        1852e4:	12400001 	subne	r0, r0, #1	; 0x1
        1852e8:	e0812080 	add	r2, r1, r0, lsl #1
        1852ec:	e5922002 	ldr	r2, [r2, #2]	; fField2
        1852f0:	e7910080 	ldr	r0, [r1, r0, lsl #1]
        1852f4:	e1a00840 	mov	r0, r0, asr #16
        1852f8:	e0601842 	rsb	r1, r0, r2, asr #16
        1852fc:	e1510006 	cmp	r1, r6
        185300:	baffffd1 	blt	18524c <TPickView::Scroll(RefVar const &, unsigned char)+0xf0>
        185304:	e3370000 	teq	r7, #0	; 0x0
        185308:	13e00000 	mvnne	r0, #0	; 0x0
        18530c:	15840074 	strne	r0, [r4, #116]	; fField116
        185310:	e1a0100d 	mov	r1, sp
        185314:	e1a00004 	mov	r0, r4
        185318:	eb691cb9 	bl	1bcc604 <TView::$SetOrigin(TPoint &)>
        18531c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::SetupForm(void)
 * Address: 00185320
 */
TPickView::SetupForm(void) {
    /*
        185320:	e1a0c00d 	mov	ip, sp
        185324:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        185328:	e24cb004 	sub	fp, ip, #4	; 0x4
        18532c:	e1a04000 	mov	r4, r0
        185330:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        185334:	e5900024 	ldr	r0, [r0, #36]	; fField36
        185338:	e5900000 	ldr	r0, [r0]
        18533c:	eb68f382 	bl	1bc214c <$AllocateRefHandle(long)>
        185340:	e58d0000 	str	r0, [sp]
        185344:	e3a07000 	mov	r7, #0	; 0x0
        185348:	e5940038 	ldr	r0, [r4, #56]	; fField56
        18534c:	e3300000 	teq	r0, #0	; 0x0
        185350:	0a000001 	beq	18535c <TPickView::SetupForm(void)+0x3c>
        185354:	eb696f55 	bl	1be10b0 <$DisposHandle>
        185358:	e5847038 	str	r7, [r4, #56]	; fField56
        18535c:	e594003c 	ldr	r0, [r4, #60]	; fField60
        185360:	e3300000 	teq	r0, #0	; 0x0
        185364:	0a000001 	beq	185370 <TPickView::SetupForm(void)+0x50>
        185368:	eb696f50 	bl	1be10b0 <$DisposHandle>
        18536c:	e584703c 	str	r7, [r4, #60]	; fField60
        185370:	e24dd004 	sub	sp, sp, #4	; 0x4
        185374:	e5940040 	ldr	r0, [r4, #64]	; fField64
        185378:	e3300000 	teq	r0, #0	; 0x0
        18537c:	0a00000f 	beq	1853c0 <TPickView::SetupForm(void)+0xa0>
        185380:	e3a05000 	mov	r5, #0	; 0x0
        185384:	e5940088 	ldr	r0, [r4, #136]	; fField136
        185388:	e3500000 	cmp	r0, #0	; 0x0
        18538c:	da000008 	ble	1853b4 <TPickView::SetupForm(void)+0x94>
        185390:	e5940040 	ldr	r0, [r4, #64]	; fField64
        185394:	e5900000 	ldr	r0, [r0]
        185398:	e7900105 	ldr	r0, [r0, r5, lsl #2]	; fField2
        18539c:	e3300000 	teq	r0, #0	; 0x0
        1853a0:	1b6920ce 	blne	1bcd6e0 <$__dl(void *)>
        1853a4:	e2855001 	add	r5, r5, #1	; 0x1
        1853a8:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1853ac:	e1500005 	cmp	r0, r5
        1853b0:	cafffff6 	bgt	185390 <TPickView::SetupForm(void)+0x70>
        1853b4:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1853b8:	eb696f3c 	bl	1be10b0 <$DisposHandle>
        1853bc:	e5847040 	str	r7, [r4, #64]	; fField64
        1853c0:	e1a00004 	mov	r0, r4
        1853c4:	eb691c90 	bl	1bcc60c <TView::$SetupForm(void)>
        1853c8:	e59f0624 	ldr	r0, [pc, #624]	; 1859f4 <TPickView::SetupForm(void)+0x6d4>
        1853cc:	eb6445cc 	bl	1a96b04 <$GetPreference(RefVar const &)>
        1853d0:	e3100003 	tst	r0, #3	; 0x3
        1853d4:	01a00140 	moveq	r0, r0, asr #2
        1853d8:	0a000000 	beq	1853e0 <TPickView::SetupForm(void)+0xc0>
        1853dc:	eb68f34e 	bl	1bc211c <$_RINTError(long)>
        1853e0:	e58400b4 	str	r0, [r4, #180]	; fField180
        1853e4:	e2845034 	add	r5, r4, #52	; 0x34
        1853e8:	e58d501c 	str	r5, [sp, #28]	; fField28
        1853ec:	e59f1604 	ldr	r1, [pc, #604]	; 1859f8 <TPickView::SetupForm(void)+0x6d8>
        1853f0:	e28d0004 	add	r0, sp, #4	; 0x4
        1853f4:	e3a02000 	mov	r2, #0	; 0x0
        1853f8:	eb68fb9a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1853fc:	e5951000 	ldr	r1, [r5]
        185400:	e5810000 	str	r0, [r1]
        185404:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        185408:	e5900000 	ldr	r0, [r0]
        18540c:	e5900000 	ldr	r0, [r0]
        185410:	eb68ffa5 	bl	1bc52ac <$Length(long)>
        185414:	e5840088 	str	r0, [r4, #136]	; fField136
        185418:	e59f15dc 	ldr	r1, [pc, #5dc]	; 1859fc <TPickView::SetupForm(void)+0x6dc>
        18541c:	e28d0004 	add	r0, sp, #4	; 0x4
        185420:	e3a02000 	mov	r2, #0	; 0x0
        185424:	eb68fb8f 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        185428:	e3100003 	tst	r0, #3	; 0x3
        18542c:	01a00140 	moveq	r0, r0, asr #2
        185430:	0a000000 	beq	185438 <TPickView::SetupForm(void)+0x118>
        185434:	eb68f338 	bl	1bc211c <$_RINTError(long)>
        185438:	e5840084 	str	r0, [r4, #132]	; fField132
        18543c:	e59f15bc 	ldr	r1, [pc, #5bc]	; 185a00 <TPickView::SetupForm(void)+0x6e0>
        185440:	e58d1018 	str	r1, [sp, #24]
        185444:	e28d0004 	add	r0, sp, #4	; 0x4
        185448:	e3a03000 	mov	r3, #0	; 0x0
        18544c:	e3a02000 	mov	r2, #0	; 0x0
        185450:	eb68fb87 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        185454:	eb68f33c 	bl	1bc214c <$AllocateRefHandle(long)>
        185458:	e58d0000 	str	r0, [sp]
        18545c:	e1a0000d 	mov	r0, sp
        185460:	e2841054 	add	r1, r4, #84	; 0x54
        185464:	e58d1014 	str	r1, [sp, #20]	; fField20
        185468:	eb69101d 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        18546c:	e59d0000 	ldr	r0, [sp]
        185470:	eb68f751 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        185474:	e2841044 	add	r1, r4, #68	; 0x44
        185478:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        18547c:	eb6728d8 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
        185480:	e59f157c 	ldr	r1, [pc, #57c]	; 185a04 <TPickView::SetupForm(void)+0x6e4>
        185484:	e28d0004 	add	r0, sp, #4	; 0x4
        185488:	e3a02000 	mov	r2, #0	; 0x0
        18548c:	eb68fb75 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        185490:	e2500002 	subs	r0, r0, #2	; 0x2
        185494:	13a00001 	movne	r0, #1	; 0x1
        185498:	e5c40030 	strb	r0, [r4, #48]	; fField48
        18549c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1854a0:	e59f1560 	ldr	r1, [pc, #560]	; 185a08 <TPickView::SetupForm(void)+0x6e8>
        1854a4:	e28d0010 	add	r0, sp, #16	; 0x10
        1854a8:	e3a02000 	mov	r2, #0	; 0x0
        1854ac:	eb68fb6d 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1854b0:	e2500002 	subs	r0, r0, #2	; 0x2
        1854b4:	13a00001 	movne	r0, #1	; 0x1
        1854b8:	e20000ff 	and	r0, r0, #255	; 0xff
        1854bc:	e58d0008 	str	r0, [sp, #8]
        1854c0:	e59f1544 	ldr	r1, [pc, #544]	; 185a0c <TPickView::SetupForm(void)+0x6ec>
        1854c4:	e28d0010 	add	r0, sp, #16	; 0x10
        1854c8:	e3a02000 	mov	r2, #0	; 0x0
        1854cc:	eb68fb65 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1854d0:	e3100003 	tst	r0, #3	; 0x3
        1854d4:	01a00140 	moveq	r0, r0, asr #2
        1854d8:	0a000000 	beq	1854e0 <TPickView::SetupForm(void)+0x1c0>
        1854dc:	eb68f30e 	bl	1bc211c <$_RINTError(long)>
        1854e0:	e58d0004 	str	r0, [sp, #4]	; fField4
        1854e4:	e59f1524 	ldr	r1, [pc, #524]	; 185a10 <TPickView::SetupForm(void)+0x6f0>
        1854e8:	e28d0010 	add	r0, sp, #16	; 0x10
        1854ec:	e3a02000 	mov	r2, #0	; 0x0
        1854f0:	eb68fb5c 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1854f4:	e3100003 	tst	r0, #3	; 0x3
        1854f8:	01a00140 	moveq	r0, r0, asr #2
        1854fc:	0a000000 	beq	185504 <TPickView::SetupForm(void)+0x1e4>
        185500:	eb68f305 	bl	1bc211c <$_RINTError(long)>
        185504:	e58d0000 	str	r0, [sp]
        185508:	e59f1504 	ldr	r1, [pc, #504]	; 185a14 <TPickView::SetupForm(void)+0x6f4>
        18550c:	e28d0010 	add	r0, sp, #16	; 0x10
        185510:	e3a02000 	mov	r2, #0	; 0x0
        185514:	eb68fb53 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        185518:	e3100003 	tst	r0, #3	; 0x3
        18551c:	01a00140 	moveq	r0, r0, asr #2
        185520:	0a000000 	beq	185528 <TPickView::SetupForm(void)+0x208>
        185524:	eb68f2fc 	bl	1bc211c <$_RINTError(long)>
        185528:	e5840098 	str	r0, [r4, #152]	; fField152
        18552c:	e59f14e4 	ldr	r1, [pc, #4e4]	; 185a18 <TPickView::SetupForm(void)+0x6f8>	; fField4
        185530:	e28d0010 	add	r0, sp, #16	; 0x10
        185534:	e3a02000 	mov	r2, #0	; 0x0
        185538:	eb68fb4a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        18553c:	e3100003 	tst	r0, #3	; 0x3
        185540:	01a00140 	moveq	r0, r0, asr #2
        185544:	0a000000 	beq	18554c <TPickView::SetupForm(void)+0x22c>
        185548:	eb68f2f3 	bl	1bc211c <$_RINTError(long)>
        18554c:	e584009c 	str	r0, [r4, #156]	; fField156
        185550:	e59f14c4 	ldr	r1, [pc, #4c4]	; 185a1c <TPickView::SetupForm(void)+0x6fc>	; fField4
        185554:	e28d0010 	add	r0, sp, #16	; 0x10
        185558:	e3a02000 	mov	r2, #0	; 0x0
        18555c:	eb68fb41 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        185560:	e3100003 	tst	r0, #3	; 0x3
        185564:	01a00140 	moveq	r0, r0, asr #2
        185568:	0a000000 	beq	185570 <TPickView::SetupForm(void)+0x250>
        18556c:	eb68f2ea 	bl	1bc211c <$_RINTError(long)>
        185570:	e58400a0 	str	r0, [r4, #160]	; fField160
        185574:	e24dd004 	sub	sp, sp, #4	; 0x4
        185578:	e3a08000 	mov	r8, #0	; 0x0
        18557c:	e3a06000 	mov	r6, #0	; 0x0
        185580:	e5940088 	ldr	r0, [r4, #136]	; fField136
        185584:	e1a00080 	mov	r0, r0, lsl #1
        185588:	eb6972e7 	bl	1be212c <$NewHandle>
        18558c:	e5840038 	str	r0, [r4, #56]	; fField56
        185590:	e5940088 	ldr	r0, [r4, #136]	; fField136
        185594:	e1a00100 	mov	r0, r0, lsl #2
        185598:	eb6972e3 	bl	1be212c <$NewHandle>
        18559c:	e584003c 	str	r0, [r4, #60]	; fField60
        1855a0:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1855a4:	e1a00100 	mov	r0, r0, lsl #2
        1855a8:	eb6972e0 	bl	1be2130 <$NewHandleClear>
        1855ac:	e5840040 	str	r0, [r4, #64]	; fField64
        1855b0:	e1a01000 	mov	r1, r0
        1855b4:	e5940038 	ldr	r0, [r4, #56]	; fField56
        1855b8:	e3300000 	teq	r0, #0	; 0x0
        1855bc:	0a000005 	beq	1855d8 <TPickView::SetupForm(void)+0x2b8>
        1855c0:	e594203c 	ldr	r2, [r4, #60]	; fField60
        1855c4:	e3320000 	teq	r2, #0	; 0x0
        1855c8:	13310000 	teqne	r1, #0	; 0x0
        1855cc:	1a00000d 	bne	185608 <TPickView::SetupForm(void)+0x2e8>
        1855d0:	e3300000 	teq	r0, #0	; 0x0
        1855d4:	1b696eb5 	blne	1be10b0 <$DisposHandle>
        1855d8:	e594003c 	ldr	r0, [r4, #60]	; fField60
        1855dc:	e3300000 	teq	r0, #0	; 0x0
        1855e0:	1b696eb2 	blne	1be10b0 <$DisposHandle>
        1855e4:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1855e8:	e3300000 	teq	r0, #0	; 0x0
        1855ec:	1b696eaf 	blne	1be10b0 <$DisposHandle>
        1855f0:	e59f0428 	ldr	r0, [pc, #428]	; 185a20 <TPickView::SetupForm(void)+0x700>
        1855f4:	e5900000 	ldr	r0, [r0]
        1855f8:	e3a02000 	mov	r2, #0	; 0x0
        1855fc:	e3a010e9 	mov	r1, #233	; 0xe9
        185600:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        185604:	eb6976e4 	bl	1be319c <$Throw>
        185608:	e1a00004 	mov	r0, r4
        18560c:	eb657f34 	bl	1ae52e4 <TPickView::$GetKeyCommandInfo(void)>
        185610:	e24dd00c 	sub	sp, sp, #12	; 0xc
        185614:	e59f1408 	ldr	r1, [pc, #408]	; 185a24 <TPickView::SetupForm(void)+0x704>
        185618:	e1a00004 	mov	r0, r4
        18561c:	eb6913c9 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        185620:	e3100003 	tst	r0, #3	; 0x3
        185624:	01a00140 	moveq	r0, r0, asr #2
        185628:	0a000000 	beq	185630 <TPickView::SetupForm(void)+0x310>
        18562c:	eb68f2ba 	bl	1bc211c <$_RINTError(long)>
        185630:	e59410a8 	ldr	r1, [r4, #168]	; fField168
        185634:	e0401841 	sub	r1, r0, r1, asr #16
        185638:	e58d1008 	str	r1, [sp, #8]
        18563c:	e59f03e4 	ldr	r0, [pc, #3e4]	; 185a28 <TPickView::SetupForm(void)+0x708>
        185640:	e58d002c 	str	r0, [sp, #44]
        185644:	e5900000 	ldr	r0, [r0]
        185648:	eb68f2bf 	bl	1bc214c <$AllocateRefHandle(long)>
        18564c:	e1a05000 	mov	r5, r0
        185650:	e59f03d4 	ldr	r0, [pc, #3d4]	; 185a2c <TPickView::SetupForm(void)+0x70c>
        185654:	e5900000 	ldr	r0, [r0]
        185658:	e5901000 	ldr	r1, [r0]
        18565c:	e5950000 	ldr	r0, [r5]
        185660:	eb68fafe 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        185664:	eb68f2b8 	bl	1bc214c <$AllocateRefHandle(long)>
        185668:	e58d0004 	str	r0, [sp, #4]	; fField4
        18566c:	e1a00005 	mov	r0, r5
        185670:	eb68f6d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        185674:	e3a00000 	mov	r0, #0	; 0x0
        185678:	e58d0000 	str	r0, [sp]
        18567c:	e59f03ac 	ldr	r0, [pc, #3ac]	; 185a30 <TPickView::SetupForm(void)+0x710>
        185680:	e58d0028 	str	r0, [sp, #40]
        185684:	e5900000 	ldr	r0, [r0]
        185688:	eb658328 	bl	1ae6330 <TRootView::$CommandKeyboardConnected(void)>
        18568c:	e3300000 	teq	r0, #0	; 0x0
        185690:	159d0004 	ldrne	r0, [sp, #4]	; fField4
        185694:	15900000 	ldrne	r0, [r0]
        185698:	13300002 	teqne	r0, #2	; 0x2
        18569c:	15940088 	ldrne	r0, [r4, #136]	; fField136
        1856a0:	13300000 	teqne	r0, #0	; 0x0
        1856a4:	13a00001 	movne	r0, #1	; 0x1
        1856a8:	158d0000 	strne	r0, [sp]
        1856ac:	e3e00000 	mvn	r0, #0	; 0x0
        1856b0:	e5840074 	str	r0, [r4, #116]	; fField116
        1856b4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1856b8:	e3a00002 	mov	r0, #2	; 0x2
        1856bc:	eb68f2a2 	bl	1bc214c <$AllocateRefHandle(long)>
        1856c0:	e58d0018 	str	r0, [sp, #24]
        1856c4:	e3a00002 	mov	r0, #2	; 0x2
        1856c8:	eb68f29f 	bl	1bc214c <$AllocateRefHandle(long)>
        1856cc:	e3e07000 	mvn	r7, #0	; 0x0
        1856d0:	e3a05000 	mov	r5, #0	; 0x0
        1856d4:	e58d0014 	str	r0, [sp, #20]	; fField20
        1856d8:	e58d7000 	str	r7, [sp]
        1856dc:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1856e0:	e3500000 	cmp	r0, #0	; 0x0
        1856e4:	da0001ad 	ble	185da0 <TPickView::SetupForm(void)+0xa80>
        1856e8:	e59f1344 	ldr	r1, [pc, #344]	; 185a34 <TPickView::SetupForm(void)+0x714>
        1856ec:	e58d1040 	str	r1, [sp, #64]	; fField64
        1856f0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1856f4:	e3a0a000 	mov	sl, #0	; 0x0
        1856f8:	e58d500c 	str	r5, [sp, #12]
        1856fc:	e58da030 	str	sl, [sp, #48]	; fField48
        185700:	e1a01005 	mov	r1, r5
        185704:	e59d005c 	ldr	r0, [sp, #92]
        185708:	e5900000 	ldr	r0, [r0]
        18570c:	e5900000 	ldr	r0, [r0]
        185710:	eb68facf 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        185714:	e59d1020 	ldr	r1, [sp, #32]
        185718:	e5810000 	str	r0, [r1]
        18571c:	e28d1020 	add	r1, sp, #32	; 0x20
        185720:	e1a00004 	mov	r0, r4
        185724:	eb652c36 	bl	1ad0804 <TPickView::$GetDisplayIndent(RefVar const &)>
        185728:	e3500000 	cmp	r0, #0	; 0x0
        18572c:	a1a07000 	movge	r7, r0
        185730:	e28d1020 	add	r1, sp, #32	; 0x20
        185734:	e1a00004 	mov	r0, r4
        185738:	eb65282f 	bl	1acf7fc <TPickView::$GetDisplayFixedHeight(RefVar const &)>
        18573c:	e3500000 	cmp	r0, #0	; 0x0
        185740:	a58d0008 	strge	r0, [sp, #8]
        185744:	e1a0300d 	mov	r3, sp
        185748:	e28d2004 	add	r2, sp, #4	; 0x4
        18574c:	e1a01005 	mov	r1, r5
        185750:	e1a00004 	mov	r0, r4
        185754:	eb657ed5 	bl	1ae52b0 <TPickView::$GetDisplayItem(long, unsigned char *, unsigned short *)>
        185758:	e59d1020 	ldr	r1, [sp, #32]
        18575c:	e5810000 	str	r0, [r1]
        185760:	e59d0000 	ldr	r0, [sp]
        185764:	e1b00820 	movs	r0, r0, lsr #16
        185768:	13a00001 	movne	r0, #1	; 0x1
        18576c:	15c40031 	strneb	r0, [r4, #49]	; fField49
        185770:	e59d3000 	ldr	r3, [sp]
        185774:	e1a03823 	mov	r3, r3, lsr #16
        185778:	e5dd2004 	ldrb	r2, [sp, #4]	; fField4
        18577c:	e28d100c 	add	r1, sp, #12	; 0xc
        185780:	e1a00004 	mov	r0, r4
        185784:	eb653894 	bl	1ad39dc <TPickView::$SetItemFlags(PickStuff *, unsigned char, unsigned short)>
        185788:	e1a01005 	mov	r1, r5
        18578c:	e1a00004 	mov	r0, r4
        185790:	eb657ed5 	bl	1ae52ec <TPickView::$GetKeyCommandModifierWidth(long)>
        185794:	e1a09000 	mov	r9, r0
        185798:	e28d0020 	add	r0, sp, #32	; 0x20
        18579c:	eb68febe 	bl	1bc529c <$IsString(RefVar const &)>
        1857a0:	e3300000 	teq	r0, #0	; 0x0
        1857a4:	0a0000b3 	beq	185a78 <TPickView::SetupForm(void)+0x758>
        1857a8:	e24dd050 	sub	sp, sp, #80	; 0x50
        1857ac:	e28d0048 	add	r0, sp, #72	; 0x48
        1857b0:	e59d1098 	ldr	r1, [sp, #152]	; fField152
        1857b4:	e8915000 	ldmia	r1, {ip, lr}
        1857b8:	e8805000 	stmia	r0, {ip, lr}
        1857bc:	e28d1070 	add	r1, sp, #112	; 0x70
        1857c0:	e28d0004 	add	r0, sp, #4	; 0x4
        1857c4:	eb009c95 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        1857c8:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        1857cc:	e58d2000 	str	r2, [sp]
        1857d0:	e28d302c 	add	r3, sp, #44	; 0x2c
        1857d4:	e3a02000 	mov	r2, #0	; 0x0
        1857d8:	e92d000c 	stmdb	sp!, {r2, r3}
        1857dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1857e0:	e28d1058 	add	r1, sp, #88	; 0x58
        1857e4:	e8915000 	ldmia	r1, {ip, lr}
        1857e8:	e88d5000 	stmia	sp, {ip, lr}
        1857ec:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        1857f0:	e59d30b4 	ldr	r3, [sp, #180]	; fField180
        1857f4:	e28d0014 	add	r0, sp, #20	; 0x14
        1857f8:	e3a01000 	mov	r1, #0	; 0x0
        1857fc:	eb67302d 	bl	1b518b8 <$MeasureRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)>
        185800:	e28dd010 	add	sp, sp, #16	; 0x10
        185804:	e59d0040 	ldr	r0, [sp, #64]	; fField64
        185808:	e2800902 	add	r0, r0, #32768	; 0x8000
        18580c:	e1a00840 	mov	r0, r0, asr #16
        185810:	e1a00800 	mov	r0, r0, lsl #16
        185814:	e0899840 	add	r9, r9, r0, asr #16
        185818:	e1a01005 	mov	r1, r5
        18581c:	e1a00004 	mov	r0, r4
        185820:	eb657eb1 	bl	1ae52ec <TPickView::$GetKeyCommandModifierWidth(long)>
        185824:	e59d107c 	ldr	r1, [sp, #124]	; fField124
        185828:	e041a000 	sub	sl, r1, r0
        18582c:	e24dd004 	sub	sp, sp, #4	; 0x4
        185830:	e159000a 	cmp	r9, sl
        185834:	da000035 	ble	185910 <TPickView::SetupForm(void)+0x5f0>
        185838:	e24dd018 	sub	sp, sp, #24	; 0x18
        18583c:	e1a00004 	mov	r0, r4
        185840:	e59d10c4 	ldr	r1, [sp, #196]
        185844:	eb691343 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        185848:	eb68f23f 	bl	1bc214c <$AllocateRefHandle(long)>
        18584c:	e58d0008 	str	r0, [sp, #8]
        185850:	e28d3008 	add	r3, sp, #8	; 0x8
        185854:	e1a0010a 	mov	r0, sl, lsl #2
        185858:	e52d3004 	str	r3, [sp, -#4]!	; fField4
        18585c:	eb68f23a 	bl	1bc214c <$AllocateRefHandle(long)>
        185860:	e58d0010 	str	r0, [sp, #16]	; fField16
        185864:	e28da010 	add	sl, sp, #16	; 0x10
        185868:	e28d0090 	add	r0, sp, #144	; 0x90
        18586c:	eb68f23e 	bl	1bc216c <$Clone(RefVar const &)>
        185870:	eb68f235 	bl	1bc214c <$AllocateRefHandle(long)>
        185874:	e58d0014 	str	r0, [sp, #20]	; fField20
        185878:	e28d9014 	add	r9, sp, #20	; 0x14
        18587c:	e3a00002 	mov	r0, #2	; 0x2
        185880:	eb68f231 	bl	1bc214c <$AllocateRefHandle(long)>
        185884:	e58d0018 	str	r0, [sp, #24]
        185888:	e28d0018 	add	r0, sp, #24	; 0x18
        18588c:	e1a01009 	mov	r1, r9
        185890:	e1a0200a 	mov	r2, sl
        185894:	e49d3004 	ldr	r3, [sp], #4	; fField4
        185898:	eb64aff8 	bl	1ab1880 <$FStyledStrTruncate__FRC6RefVarN31>
        18589c:	eb68f22a 	bl	1bc214c <$AllocateRefHandle(long)>
        1858a0:	e58d0000 	str	r0, [sp]
        1858a4:	e1a0900d 	mov	r9, sp
        1858a8:	e3a00002 	mov	r0, #2	; 0x2
        1858ac:	eb68f226 	bl	1bc214c <$AllocateRefHandle(long)>
        1858b0:	e58d0004 	str	r0, [sp, #4]	; fField4
        1858b4:	e28d0004 	add	r0, sp, #4	; 0x4
        1858b8:	e1a01009 	mov	r1, r9
        1858bc:	eb655520 	bl	1adad44 <$FStrLen__FRC6RefVarT1>
        1858c0:	e3100003 	tst	r0, #3	; 0x3
        1858c4:	01a00140 	moveq	r0, r0, asr #2
        1858c8:	0a000000 	beq	1858d0 <TPickView::SetupForm(void)+0x5b0>
        1858cc:	eb68f212 	bl	1bc211c <$_RINTError(long)>
        1858d0:	e2602000 	rsb	r2, r0, #0	; 0x0
        1858d4:	e58d201c 	str	r2, [sp, #28]	; fField28
        1858d8:	e59d0000 	ldr	r0, [sp]
        1858dc:	eb68f636 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1858e0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1858e4:	eb68f634 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1858e8:	e59d0008 	ldr	r0, [sp, #8]
        1858ec:	eb68f632 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1858f0:	e59d000c 	ldr	r0, [sp, #12]
        1858f4:	eb68f630 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1858f8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        1858fc:	eb68f62e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        185900:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        185904:	eb68f62c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        185908:	e59d9098 	ldr	r9, [sp, #152]	; fField152
        18590c:	e28dd018 	add	sp, sp, #24	; 0x18
        185910:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        185914:	e28d1060 	add	r1, sp, #96	; 0x60
        185918:	e1a00004 	mov	r0, r4
        18591c:	eb65382f 	bl	1ad39e0 <TPickView::$SetItemLength(PickStuff *, long)>
        185920:	e594a084 	ldr	sl, [r4, #132]	; fField132
        185924:	e1a01005 	mov	r1, r5
        185928:	e59d00b0 	ldr	r0, [sp, #176]
        18592c:	e5900000 	ldr	r0, [r0]
        185930:	e5900000 	ldr	r0, [r0]
        185934:	eb68fa46 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        185938:	eb68f203 	bl	1bc214c <$AllocateRefHandle(long)>
        18593c:	e58d0000 	str	r0, [sp]
        185940:	e1a0100d 	mov	r1, sp
        185944:	e1a00004 	mov	r0, r4
        185948:	eb652bac 	bl	1ad0800 <TPickView::$GetDisplayIcon(RefVar const &)>
        18594c:	e59d1070 	ldr	r1, [sp, #112]
        185950:	e5810000 	str	r0, [r1]
        185954:	e59d0000 	ldr	r0, [sp]
        185958:	eb68f617 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18595c:	e59d0070 	ldr	r0, [sp, #112]
        185960:	e5900000 	ldr	r0, [r0]
        185964:	e3300002 	teq	r0, #2	; 0x2
        185968:	0a00003b 	beq	185a5c <TPickView::SetupForm(void)+0x73c>
        18596c:	e59f10c4 	ldr	r1, [pc, #c4]	; 185a38 <TPickView::SetupForm(void)+0x718>
        185970:	e5911000 	ldr	r1, [r1]
        185974:	e5911000 	ldr	r1, [r1]
        185978:	eb68fa38 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        18597c:	e59d1070 	ldr	r1, [sp, #112]
        185980:	e5810000 	str	r0, [r1]
        185984:	e24dd008 	sub	sp, sp, #8	; 0x8
        185988:	e1a0100d 	mov	r1, sp
        18598c:	e28d0078 	add	r0, sp, #120	; 0x78
        185990:	eb643c38 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        185994:	e3300000 	teq	r0, #0	; 0x0
        185998:	028f0f27 	addeq	r0, pc, #156	; 0x9c
        18599c:	0b6975ff 	bleq	1be31a0 <$ThrowMsg>
        1859a0:	e3570000 	cmp	r7, #0	; 0x0
        1859a4:	a0899007 	addge	r9, r9, r7
        1859a8:	aa000005 	bge	1859c4 <TPickView::SetupForm(void)+0x6a4>
        1859ac:	e59d0006 	ldr	r0, [sp, #6]
        1859b0:	e1a00840 	mov	r0, r0, asr #16
        1859b4:	e2800002 	add	r0, r0, #2	; 0x2
        1859b8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        1859bc:	e0400841 	sub	r0, r0, r1, asr #16
        1859c0:	e0809009 	add	r9, r0, r9
        1859c4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1859c8:	e1a01841 	mov	r1, r1, asr #16
        1859cc:	e59d0000 	ldr	r0, [sp]
        1859d0:	e0411840 	sub	r1, r1, r0, asr #16
        1859d4:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1859d8:	e0811000 	add	r1, r1, r0
        1859dc:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        1859e0:	e0810000 	add	r0, r1, r0
        1859e4:	e15a0000 	cmp	sl, r0
        1859e8:	b1a0a000 	movlt	sl, r0
        1859ec:	e28dd008 	add	sp, sp, #8	; 0x8
        1859f0:	ea00001b 	b	185a64 <TPickView::SetupForm(void)+0x744>
        1859f4:	00684cc8 	rsbeq	r4, r8, r8, asr #25
        1859f8:	00683e68 	rsbeq	r3, r8, r8, ror #28
        1859fc:	00683ea8 	rsbeq	r3, r8, r8, lsr #29
        185a00:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        185a04:	00683e50 	rsbeq	r3, r8, r0, asr lr
        185a08:	00683e70 	rsbeq	r3, r8, r0, ror lr
        185a0c:	00683e78 	rsbeq	r3, r8, r8, ror lr
        185a10:	00683e80 	rsbeq	r3, r8, r0, lsl #29
        185a14:	00683e90 	streqb	r3, [r8], -#224
        185a18:	00683eb0 	streqh	r3, [r8], -#224
        185a1c:	00683e58 	rsbeq	r3, r8, r8, asr lr
        185a20:	00371318 	eoreqs	r1, r7, r8, lsl r3
        185a24:	00683e88 	rsbeq	r3, r8, r8, lsl #29
        185a28:	0c10180c 	ldceq	8, cr1, [r0], -#48	; fField48
        185a2c:	00685320 	rsbeq	r5, r8, r0, lsr #6
        185a30:	0c101934 	ldceq	9, cr1, [r0], -#208
        185a34:	00377388 	eoreqs	r7, r7, r8, lsl #7
        185a38:	00682190 	streqb	r2, [r8], -#16	; fField16
        185a3c:	62616420 	rsbvs	r6, r1, #536870912	; 0x20000000
        185a40:	70696374 	rsbvc	r6, r9, r4, ror r3
        185a44:	426f756e 	rsbmi	r7, pc, #461373440	; 0x1b800000
        185a48:	64732066 	ldrvsbt	r2, [r3], -#102
        185a4c:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        185a50:	20666f72 	rsbcs	r6, r6, r2, ror pc
        185a54:	2069636f 	rsbcs	r6, r9, pc, ror #6
        185a58:	6e000000 	cdpvs	0, 0, cr0, cr0, cr0, {0}
        185a5c:	e3570000 	cmp	r7, #0	; 0x0
        185a60:	a0899007 	addge	r9, r9, r7
        185a64:	e28dd004 	add	sp, sp, #4	; 0x4
        185a68:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        185a6c:	eb68f5d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        185a70:	e28dd050 	add	sp, sp, #80	; 0x50
        185a74:	ea000094 	b	185ccc <TPickView::SetupForm(void)+0x9ac>
        185a78:	e59d0020 	ldr	r0, [sp, #32]
        185a7c:	e5900000 	ldr	r0, [r0]
        185a80:	eb68fe07 	bl	1bc52a4 <$IsSymbol(long)>
        185a84:	e3300000 	teq	r0, #0	; 0x0
        185a88:	0a00001c 	beq	185b00 <TPickView::SetupForm(void)+0x7e0>
        185a8c:	e59f0044 	ldr	r0, [pc, #44]	; 185ad8 <TPickView::SetupForm(void)+0x7b8>
        185a90:	e5900000 	ldr	r0, [r0]
        185a94:	e5901000 	ldr	r1, [r0]
        185a98:	e59d0020 	ldr	r0, [sp, #32]
        185a9c:	e5900000 	ldr	r0, [r0]
        185aa0:	eb68f9e2 	bl	1bc4230 <$EQRef__FlT1>
        185aa4:	e3300000 	teq	r0, #0	; 0x0
        185aa8:	1a000007 	bne	185acc <TPickView::SetupForm(void)+0x7ac>
        185aac:	e59f0028 	ldr	r0, [pc, #28]	; 185adc <TPickView::SetupForm(void)+0x7bc>	; fField28
        185ab0:	e5900000 	ldr	r0, [r0]
        185ab4:	e5901000 	ldr	r1, [r0]
        185ab8:	e59d0020 	ldr	r0, [sp, #32]
        185abc:	e5900000 	ldr	r0, [r0]
        185ac0:	eb68f9da 	bl	1bc4230 <$EQRef__FlT1>
        185ac4:	e3300000 	teq	r0, #0	; 0x0
        185ac8:	0a000004 	beq	185ae0 <TPickView::SetupForm(void)+0x7c0>
        185acc:	e3a09000 	mov	r9, #0	; 0x0
        185ad0:	e3a0a006 	mov	sl, #6	; 0x6
        185ad4:	ea00007c 	b	185ccc <TPickView::SetupForm(void)+0x9ac>
        185ad8:	00683e98 	streqb	r3, [r8], -#232
        185adc:	00683ea0 	rsbeq	r3, r8, r0, lsr #29
        185ae0:	e28f0f01 	add	r0, pc, #4	; 0x4
        185ae4:	eb6975ad 	bl	1be31a0 <$ThrowMsg>
        185ae8:	ea000077 	b	185ccc <TPickView::SetupForm(void)+0x9ac>
        185aec:	756e7375 	strvcb	r7, [lr, -#885]!
        185af0:	70706f72 	rsbvcs	r6, r0, r2, ror pc
        185af4:	74656420 	strvcbt	r6, [r5], -#1056	; fField1056
        185af8:	73796d62 	cmnvc	r9, #6272	; 0x1880
        185afc:	6f6c0000 	swivs	0x006c0000
        185b00:	e28d0020 	add	r0, sp, #32	; 0x20
        185b04:	eb69b7a1 	bl	1bf3990 <$IsFrame(RefVar const &)>
        185b08:	e3300000 	teq	r0, #0	; 0x0
        185b0c:	0a00006e 	beq	185ccc <TPickView::SetupForm(void)+0x9ac>
        185b10:	e59f00dc 	ldr	r0, [pc, #dc]	; 185bf4 <TPickView::SetupForm(void)+0x8d4>
        185b14:	e5900000 	ldr	r0, [r0]
        185b18:	e5901000 	ldr	r1, [r0]
        185b1c:	e59d0020 	ldr	r0, [sp, #32]
        185b20:	e5900000 	ldr	r0, [r0]
        185b24:	eb68f9c7 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        185b28:	e3300000 	teq	r0, #0	; 0x0
        185b2c:	1a00000f 	bne	185b70 <TPickView::SetupForm(void)+0x850>
        185b30:	e59f00c0 	ldr	r0, [pc, #c0]	; 185bf8 <TPickView::SetupForm(void)+0x8d8>
        185b34:	e5900000 	ldr	r0, [r0]
        185b38:	e5901000 	ldr	r1, [r0]
        185b3c:	e59d0020 	ldr	r0, [sp, #32]
        185b40:	e5900000 	ldr	r0, [r0]
        185b44:	eb68f9bf 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        185b48:	e3300000 	teq	r0, #0	; 0x0
        185b4c:	1a000007 	bne	185b70 <TPickView::SetupForm(void)+0x850>
        185b50:	e59f00a4 	ldr	r0, [pc, #a4]	; 185bfc <TPickView::SetupForm(void)+0x8dc>
        185b54:	e5900000 	ldr	r0, [r0]
        185b58:	e5901000 	ldr	r1, [r0]
        185b5c:	e59d0020 	ldr	r0, [sp, #32]
        185b60:	e5900000 	ldr	r0, [r0]
        185b64:	eb68f9b7 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        185b68:	e3300000 	teq	r0, #0	; 0x0
        185b6c:	0a000029 	beq	185c18 <TPickView::SetupForm(void)+0x8f8>
        185b70:	e51f1140 	ldr	r1, [pc, #fffffec0]	; 185a38 <TPickView::SetupForm(void)+0x718>
        185b74:	e5910000 	ldr	r0, [r1]
        185b78:	e5901000 	ldr	r1, [r0]
        185b7c:	e59d0020 	ldr	r0, [sp, #32]
        185b80:	e5900000 	ldr	r0, [r0]
        185b84:	eb68f9b5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        185b88:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        185b8c:	e5810000 	str	r0, [r1]
        185b90:	e24dd008 	sub	sp, sp, #8	; 0x8
        185b94:	e1a0100d 	mov	r1, sp
        185b98:	e28d0024 	add	r0, sp, #36	; 0x24
        185b9c:	eb643bb5 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        185ba0:	e3300000 	teq	r0, #0	; 0x0
        185ba4:	028f0f15 	addeq	r0, pc, #84	; 0x54
        185ba8:	0b69757c 	bleq	1be31a0 <$ThrowMsg>
        185bac:	e59d1006 	ldr	r1, [sp, #6]
        185bb0:	e1a01841 	mov	r1, r1, asr #16
        185bb4:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        185bb8:	e0419840 	sub	r9, r1, r0, asr #16
        185bbc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        185bc0:	e1a00840 	mov	r0, r0, asr #16
        185bc4:	e59d1000 	ldr	r1, [sp]
        185bc8:	e0400841 	sub	r0, r0, r1, asr #16
        185bcc:	e594109c 	ldr	r1, [r4, #156]	; fField156
        185bd0:	e0800001 	add	r0, r0, r1
        185bd4:	e59410a0 	ldr	r1, [r4, #160]	; fField160
        185bd8:	e080a001 	add	sl, r0, r1
        185bdc:	e1a0200d 	mov	r2, sp
        185be0:	e28d1028 	add	r1, sp, #40	; 0x28
        185be4:	e1a00004 	mov	r0, r4
        185be8:	eb652b0b 	bl	1ad081c <TPickView::$GetGridInfo(RefVar const &, TRect *)>
        185bec:	e58d0038 	str	r0, [sp, #56]	; fField56
        185bf0:	ea000034 	b	185cc8 <TPickView::SetupForm(void)+0x9a8>
        185bf4:	006820d8 	ldreqd	r2, [r8], -#8
        185bf8:	00682500 	rsbeq	r2, r8, r0, lsl #10
        185bfc:	00683ec0 	rsbeq	r3, r8, r0, asr #29
        185c00:	62616420 	rsbvs	r6, r1, #536870912	; 0x20000000
        185c04:	70696374 	rsbvc	r6, r9, r4, ror r3
        185c08:	426f756e 	rsbmi	r7, pc, #461373440	; 0x1b800000
        185c0c:	64732066 	ldrvsbt	r2, [r3], -#102
        185c10:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        185c14:	00000000 	andeq	r0, r0, r0
        185c18:	e59f0140 	ldr	r0, [pc, #140]	; 185d60 <TPickView::SetupForm(void)+0xa40>	; fField140
        185c1c:	e5900000 	ldr	r0, [r0]
        185c20:	e5901000 	ldr	r1, [r0]
        185c24:	e59d0020 	ldr	r0, [sp, #32]
        185c28:	e5900000 	ldr	r0, [r0]
        185c2c:	eb68f985 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        185c30:	e3300000 	teq	r0, #0	; 0x0
        185c34:	0a000024 	beq	185ccc <TPickView::SetupForm(void)+0x9ac>
        185c38:	e51f1208 	ldr	r1, [pc, #fffffdf8]	; 185a38 <TPickView::SetupForm(void)+0x718>
        185c3c:	e5910000 	ldr	r0, [r1]
        185c40:	e5901000 	ldr	r1, [r0]
        185c44:	e59d0020 	ldr	r0, [sp, #32]
        185c48:	e5900000 	ldr	r0, [r0]
        185c4c:	eb68f983 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        185c50:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        185c54:	e5810000 	str	r0, [r1]
        185c58:	e24dd008 	sub	sp, sp, #8	; 0x8
        185c5c:	e1a0100d 	mov	r1, sp
        185c60:	e28d0024 	add	r0, sp, #36	; 0x24
        185c64:	eb643b83 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        185c68:	e3300000 	teq	r0, #0	; 0x0
        185c6c:	028f0f3c 	addeq	r0, pc, #240	; 0xf0
        185c70:	0b69754a 	bleq	1be31a0 <$ThrowMsg>
        185c74:	e59d0006 	ldr	r0, [sp, #6]
        185c78:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        185c7c:	e0400001 	sub	r0, r0, r1
        185c80:	e1a00800 	mov	r0, r0, lsl #16
        185c84:	e1a00840 	mov	r0, r0, asr #16
        185c88:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        185c8c:	e59d1000 	ldr	r1, [sp]
        185c90:	e0421001 	sub	r1, r2, r1
        185c94:	e1a09801 	mov	r9, r1, lsl #16
        185c98:	e1a09849 	mov	r9, r9, asr #16
        185c9c:	e350001c 	cmp	r0, #28	; 0x1c
        185ca0:	da000004 	ble	185cb8 <TPickView::SetupForm(void)+0x998>
        185ca4:	e0691189 	rsb	r1, r9, r9, lsl #3
        185ca8:	e1a01101 	mov	r1, r1, lsl #2
        185cac:	eb68b323 	bl	1bb2940 <$__rt_sdiv>
        185cb0:	e1a09000 	mov	r9, r0
        185cb4:	e3a0001c 	mov	r0, #28	; 0x1c
        185cb8:	e59410a0 	ldr	r1, [r4, #160]	; fField160
        185cbc:	e594209c 	ldr	r2, [r4, #156]	; fField156
        185cc0:	e0821001 	add	r1, r2, r1
        185cc4:	e081a000 	add	sl, r1, r0
        185cc8:	e28dd008 	add	sp, sp, #8	; 0x8
        185ccc:	e59d0008 	ldr	r0, [sp, #8]
        185cd0:	e3500000 	cmp	r0, #0	; 0x0
        185cd4:	da000004 	ble	185cec <TPickView::SetupForm(void)+0x9cc>
        185cd8:	e59d0020 	ldr	r0, [sp, #32]
        185cdc:	e5900000 	ldr	r0, [r0]
        185ce0:	eb68fd6f 	bl	1bc52a4 <$IsSymbol(long)>
        185ce4:	e3300000 	teq	r0, #0	; 0x0
        185ce8:	059da008 	ldreq	sl, [sp, #8]
        185cec:	e086000a 	add	r0, r6, sl
        185cf0:	e1a06000 	mov	r6, r0
        185cf4:	e5941038 	ldr	r1, [r4, #56]	; fField56
        185cf8:	e5911000 	ldr	r1, [r1]
        185cfc:	e0811085 	add	r1, r1, r5, lsl #1
        185d00:	e5c10001 	strb	r0, [r1, #1]
        185d04:	e1a00440 	mov	r0, r0, asr #8
        185d08:	e5c10000 	strb	r0, [r1]
        185d0c:	e59d1030 	ldr	r1, [sp, #48]	; fField48
        185d10:	e5940040 	ldr	r0, [r4, #64]	; fField64
        185d14:	e5900000 	ldr	r0, [r0]
        185d18:	e7801105 	str	r1, [r0, r5, lsl #2]	; fField2
        185d1c:	e1590008 	cmp	r9, r8
        185d20:	c1a08009 	movgt	r8, r9
        185d24:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        185d28:	e3300000 	teq	r0, #0	; 0x0
        185d2c:	15dd0004 	ldrneb	r0, [sp, #4]	; fField4
        185d30:	13300000 	teqne	r0, #0	; 0x0
        185d34:	0a000014 	beq	185d8c <TPickView::SetupForm(void)+0xa6c>
        185d38:	e5845074 	str	r5, [r4, #116]	; fField116
        185d3c:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        185d40:	e3300000 	teq	r0, #0	; 0x0
        185d44:	0a00000c 	beq	185d7c <TPickView::SetupForm(void)+0xa5c>
        185d48:	e3a00001 	mov	r0, #1	; 0x1
        185d4c:	e5c40078 	strb	r0, [r4, #120]	; fField120
        185d50:	e3a00000 	mov	r0, #0	; 0x0
        185d54:	e584007c 	str	r0, [r4, #124]	; fField124
        185d58:	e5840080 	str	r0, [r4, #128]	; fField128
        185d5c:	ea000008 	b	185d84 <TPickView::SetupForm(void)+0xa64>
        185d60:	006848f8 	streqd	r4, [r8], -#136	; fField136
        185d64:	62616420 	rsbvs	r6, r1, #536870912	; 0x20000000
        185d68:	7374726f 	cmnvc	r4, #-268435450	; 0xf0000006
        185d6c:	6b65426f 	blvs	1ad6730 <$FDrawDateLabels__FRC6RefVarN21+0xc34>
        185d70:	756e6473 	strvcb	r6, [lr, -#1139]!
        185d74:	20667261 	rsbcs	r7, r6, r1, ror #4
        185d78:	6d650000 	stcvsl	0, cr0, [r5]
        185d7c:	e3a00000 	mov	r0, #0	; 0x0
        185d80:	e5c40078 	strb	r0, [r4, #120]	; fField120
        185d84:	e3a00000 	mov	r0, #0	; 0x0
        185d88:	e58d0024 	str	r0, [sp, #36]	; fField36
        185d8c:	e28dd008 	add	sp, sp, #8	; 0x8
        185d90:	e2855001 	add	r5, r5, #1	; 0x1
        185d94:	e5940088 	ldr	r0, [r4, #136]	; fField136
        185d98:	e1500005 	cmp	r0, r5
        185d9c:	cafffe53 	bgt	1856f0 <TPickView::SetupForm(void)+0x3d0>
        185da0:	e59d0044 	ldr	r0, [sp, #68]	; fField68
        185da4:	e5900000 	ldr	r0, [r0]
        185da8:	eb658160 	bl	1ae6330 <TRootView::$CommandKeyboardConnected(void)>
        185dac:	e3300000 	teq	r0, #0	; 0x0
        185db0:	159400a4 	ldrne	r0, [r4, #164]	; fField164
        185db4:	15900000 	ldrne	r0, [r0]
        185db8:	13300002 	teqne	r0, #2	; 0x2
        185dbc:	159400a8 	ldrne	r0, [r4, #168]	; fField168
        185dc0:	10880840 	addne	r0, r8, r0, asr #16
        185dc4:	12808002 	addne	r8, r0, #2	; 0x2
        185dc8:	e24dd004 	sub	sp, sp, #4	; 0x4
        185dcc:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
        185dd0:	e3300000 	teq	r0, #0	; 0x0
        185dd4:	0a000015 	beq	185e30 <TPickView::SetupForm(void)+0xb10>
        185dd8:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        185ddc:	e3300000 	teq	r0, #0	; 0x0
        185de0:	1a000008 	bne	185e08 <TPickView::SetupForm(void)+0xae8>
        185de4:	e3a0001a 	mov	r0, #26	; 0x1a
        185de8:	eb68f0d7 	bl	1bc214c <$AllocateRefHandle(long)>
        185dec:	e58d0000 	str	r0, [sp]
        185df0:	e1a0200d 	mov	r2, sp
        185df4:	e51f13f4 	ldr	r1, [pc, #fffffc0c]	; 185a08 <TPickView::SetupForm(void)+0x6e8>
        185df8:	e28d0040 	add	r0, sp, #64	; 0x40
        185dfc:	eb690159 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        185e00:	e59d0000 	ldr	r0, [sp]
        185e04:	eb68f4ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        185e08:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
        185e0c:	e3300000 	teq	r0, #0	; 0x0
        185e10:	0a000006 	beq	185e30 <TPickView::SetupForm(void)+0xb10>
        185e14:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        185e18:	e5840090 	str	r0, [r4, #144]	; fField144
        185e1c:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        185e20:	e59d1030 	ldr	r1, [sp, #48]	; fField48
        185e24:	e0800001 	add	r0, r0, r1
        185e28:	e584008c 	str	r0, [r4, #140]	; fField140
        185e2c:	ea000002 	b	185e3c <TPickView::SetupForm(void)+0xb1c>
        185e30:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        185e34:	e584008c 	str	r0, [r4, #140]	; fField140
        185e38:	e5840090 	str	r0, [r4, #144]	; fField144
        185e3c:	e59f1060 	ldr	r1, [pc, #60]	; 185ea4 <TPickView::SetupForm(void)+0xb84>	; fField60
        185e40:	e28d0040 	add	r0, sp, #64	; 0x40
        185e44:	e3a02000 	mov	r2, #0	; 0x0
        185e48:	eb68f906 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        185e4c:	e59d1018 	ldr	r1, [sp, #24]
        185e50:	e5810000 	str	r0, [r1]
        185e54:	e1a01000 	mov	r1, r0
        185e58:	e3a05000 	mov	r5, #0	; 0x0
        185e5c:	e3300002 	teq	r0, #2	; 0x2
        185e60:	0a000019 	beq	185ecc <TPickView::SetupForm(void)+0xbac>
        185e64:	e1a00001 	mov	r0, r1
        185e68:	e3110003 	tst	r1, #3	; 0x3
        185e6c:	01a00140 	moveq	r0, r0, asr #2
        185e70:	0a000000 	beq	185e78 <TPickView::SetupForm(void)+0xb58>
        185e74:	eb68f0a8 	bl	1bc211c <$_RINTError(long)>
        185e78:	e31000f0 	tst	r0, #240	; 0xf0
        185e7c:	0a000009 	beq	185ea8 <TPickView::SetupForm(void)+0xb88>
        185e80:	e59d0018 	ldr	r0, [sp, #24]
        185e84:	e5900000 	ldr	r0, [r0]
        185e88:	e3100003 	tst	r0, #3	; 0x3
        185e8c:	01a00140 	moveq	r0, r0, asr #2
        185e90:	0a000000 	beq	185e98 <TPickView::SetupForm(void)+0xb78>
        185e94:	eb68f0a0 	bl	1bc211c <$_RINTError(long)>
        185e98:	e2000c0f 	and	r0, r0, #3840	; 0xf00
        185e9c:	e1a05440 	mov	r5, r0, asr #8
        185ea0:	ea000001 	b	185eac <TPickView::SetupForm(void)+0xb8c>
        185ea4:	00684fd0 	ldreqd	r4, [r8], -#240
        185ea8:	e3a05000 	mov	r5, #0	; 0x0
        185eac:	e59d0018 	ldr	r0, [sp, #24]
        185eb0:	e5900000 	ldr	r0, [r0]
        185eb4:	e3100003 	tst	r0, #3	; 0x3
        185eb8:	01a00140 	moveq	r0, r0, asr #2
        185ebc:	0a000000 	beq	185ec4 <TPickView::SetupForm(void)+0xba4>
        185ec0:	eb68f095 	bl	1bc211c <$_RINTError(long)>
        185ec4:	e2000803 	and	r0, r0, #196608	; 0x30000
        185ec8:	e0855840 	add	r5, r5, r0, asr #16
        185ecc:	e24dd008 	sub	sp, sp, #8	; 0x8
        185ed0:	e51f14a0 	ldr	r1, [pc, #fffffb60]	; 185a38 <TPickView::SetupForm(void)+0x718>
        185ed4:	e28d0048 	add	r0, sp, #72	; 0x48
        185ed8:	e3a02000 	mov	r2, #0	; 0x0
        185edc:	eb68f8e1 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        185ee0:	e59d1020 	ldr	r1, [sp, #32]
        185ee4:	e5810000 	str	r0, [r1]
        185ee8:	e1a0100d 	mov	r1, sp
        185eec:	e28d0020 	add	r0, sp, #32	; 0x20
        185ef0:	eb643ae0 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        185ef4:	e3300000 	teq	r0, #0	; 0x0
        185ef8:	028f0fab 	addeq	r0, pc, #684	; 0x2ac
        185efc:	0b6974a7 	bleq	1be31a0 <$ThrowMsg>
        185f00:	e24dd010 	sub	sp, sp, #16	; 0x10
        185f04:	e59f02b4 	ldr	r0, [pc, #2b4]	; 1861c0 <TPickView::SetupForm(void)+0xea0>	; fField2
        185f08:	e5900000 	ldr	r0, [r0]
        185f0c:	e1a01800 	mov	r1, r0, lsl #16
        185f10:	e1a01841 	mov	r1, r1, asr #16
        185f14:	e59f02a8 	ldr	r0, [pc, #2a8]	; 1861c4 <TPickView::SetupForm(void)+0xea4>	; fField2
        185f18:	e5900000 	ldr	r0, [r0]
        185f1c:	e1a00800 	mov	r0, r0, lsl #16
        185f20:	e1a00840 	mov	r0, r0, asr #16
        185f24:	e3a02000 	mov	r2, #0	; 0x0
        185f28:	e5cd2009 	strb	r2, [sp, #9]
        185f2c:	e5cd2008 	strb	r2, [sp, #8]
        185f30:	e5cd200b 	strb	r2, [sp, #11]
        185f34:	e5cd200a 	strb	r2, [sp, #10]
        185f38:	e5cd100d 	strb	r1, [sp, #13]
        185f3c:	e1a01441 	mov	r1, r1, asr #8
        185f40:	e5cd100c 	strb	r1, [sp, #12]
        185f44:	e5cd000f 	strb	r0, [sp, #15]
        185f48:	e1a00440 	mov	r0, r0, asr #8
        185f4c:	e5cd000e 	strb	r0, [sp, #14]
        185f50:	e1a0000d 	mov	r0, sp
        185f54:	eb657cdb 	bl	1ae52c8 <$GetAppAreaBounds(TRect *)>
        185f58:	e24dd010 	sub	sp, sp, #16	; 0x10
        185f5c:	e59d0020 	ldr	r0, [sp, #32]
        185f60:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        185f64:	e28d1014 	add	r1, sp, #20	; 0x14
        185f68:	e28dd004 	add	sp, sp, #4	; 0x4
        185f6c:	eb673272 	bl	1b5293c <$PtInRect(Point, Rect *)>
        185f70:	e3300000 	teq	r0, #0	; 0x0
        185f74:	028d0018 	addeq	r0, sp, #24	; 0x18
        185f78:	128d0010 	addne	r0, sp, #16	; 0x10
        185f7c:	e28d1008 	add	r1, sp, #8	; 0x8
        185f80:	e8901008 	ldmia	r0, {r3, ip}
        185f84:	e8811008 	stmia	r1, {r3, ip}
        185f88:	e28d1008 	add	r1, sp, #8	; 0x8
        185f8c:	e8915000 	ldmia	r1, {ip, lr}
        185f90:	e88d5000 	stmia	sp, {ip, lr}
        185f94:	e1a0000d 	mov	r0, sp
        185f98:	e1a02005 	mov	r2, r5
        185f9c:	e1a01005 	mov	r1, r5
        185fa0:	eb672a26 	bl	1b50840 <$InsetRect__FP4RectlT2>
        185fa4:	e59f021c 	ldr	r0, [pc, #21c]	; 1861c8 <TPickView::SetupForm(void)+0xea8>
        185fa8:	e5900000 	ldr	r0, [r0]
        185fac:	e5901000 	ldr	r1, [r0]
        185fb0:	e59d0040 	ldr	r0, [sp, #64]	; fField64
        185fb4:	e5900000 	ldr	r0, [r0]
        185fb8:	eb68f8a8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        185fbc:	e59d1040 	ldr	r1, [sp, #64]	; fField64
        185fc0:	e5810000 	str	r0, [r1]
        185fc4:	e2509002 	subs	r9, r0, #2	; 0x2
        185fc8:	13a09001 	movne	r9, #1	; 0x1
        185fcc:	e59d1006 	ldr	r1, [sp, #6]
        185fd0:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        185fd4:	e0410000 	sub	r0, r1, r0
        185fd8:	e1a00800 	mov	r0, r0, lsl #16
        185fdc:	e1a00840 	mov	r0, r0, asr #16
        185fe0:	e1560000 	cmp	r6, r0
        185fe4:	a1a07000 	movge	r7, r0
        185fe8:	b1a07006 	movlt	r7, r6
        185fec:	e1570006 	cmp	r7, r6
        185ff0:	aa00001a 	bge	186060 <TPickView::SetupForm(void)+0xd40>
        185ff4:	e24dd004 	sub	sp, sp, #4	; 0x4
        185ff8:	e59f11cc 	ldr	r1, [pc, #1cc]	; 1861cc <TPickView::SetupForm(void)+0xeac>
        185ffc:	e28d006c 	add	r0, sp, #108	; 0x6c
        186000:	e3a02000 	mov	r2, #0	; 0x0
        186004:	eb68f897 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        186008:	eb68f04f 	bl	1bc214c <$AllocateRefHandle(long)>
        18600c:	e58d0000 	str	r0, [sp]
        186010:	e5900000 	ldr	r0, [r0]
        186014:	e3300002 	teq	r0, #2	; 0x2
        186018:	0a00000d 	beq	186054 <TPickView::SetupForm(void)+0xd34>
        18601c:	e24dd004 	sub	sp, sp, #4	; 0x4
        186020:	e3a0000c 	mov	r0, #12	; 0xc
        186024:	eb68f048 	bl	1bc214c <$AllocateRefHandle(long)>
        186028:	e58d0000 	str	r0, [sp]
        18602c:	e1a0200d 	mov	r2, sp
        186030:	e59f1198 	ldr	r1, [pc, #198]	; 1861d0 <TPickView::SetupForm(void)+0xeb0>
        186034:	e28d0004 	add	r0, sp, #4	; 0x4
        186038:	eb6900ca 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        18603c:	e59d0000 	ldr	r0, [sp]
        186040:	eb68f45d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186044:	e5940098 	ldr	r0, [r4, #152]	; fField152
        186048:	e2800013 	add	r0, r0, #19	; 0x13
        18604c:	e5840098 	str	r0, [r4, #152]	; fField152
        186050:	e28dd004 	add	sp, sp, #4	; 0x4
        186054:	e59d0000 	ldr	r0, [sp]
        186058:	eb68f457 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18605c:	e28dd004 	add	sp, sp, #4	; 0x4
        186060:	e594008c 	ldr	r0, [r4, #140]	; fField140
        186064:	e0800008 	add	r0, r0, r8
        186068:	e5941098 	ldr	r1, [r4, #152]	; fField152
        18606c:	e0800001 	add	r0, r0, r1
        186070:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        186074:	e59d1000 	ldr	r1, [sp]
        186078:	e0421001 	sub	r1, r2, r1
        18607c:	e1a01801 	mov	r1, r1, lsl #16
        186080:	e1a01841 	mov	r1, r1, asr #16
        186084:	e1500001 	cmp	r0, r1
        186088:	a1a00001 	movge	r0, r1
        18608c:	e1a06000 	mov	r6, r0
        186090:	e3390000 	teq	r9, #0	; 0x0
        186094:	0a00004e 	beq	1861d4 <TPickView::SetupForm(void)+0xeb4>
        186098:	e24dd010 	sub	sp, sp, #16	; 0x10
        18609c:	e28d0008 	add	r0, sp, #8	; 0x8
        1860a0:	e28d1030 	add	r1, sp, #48	; 0x30
        1860a4:	e8915000 	ldmia	r1, {ip, lr}
        1860a8:	e8805000 	stmia	r0, {ip, lr}
        1860ac:	e59d0050 	ldr	r0, [sp, #80]
        1860b0:	e5900000 	ldr	r0, [r0]
        1860b4:	eb6467c9 	bl	1a9ffe0 <$RefToAddress(long)>
        1860b8:	e1b08000 	movs	r8, r0
        1860bc:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
        1860c0:	e2411501 	sub	r1, r1, #4194304	; 0x400000
        1860c4:	e5cd1005 	strb	r1, [sp, #5]
        1860c8:	e3e0007f 	mvn	r0, #127	; 0x7f
        1860cc:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        1860d0:	e5cd1001 	strb	r1, [sp, #1]
        1860d4:	e5cd0000 	strb	r0, [sp]
        1860d8:	0a000023 	beq	18616c <TPickView::SetupForm(void)+0xe4c>
        1860dc:	e598001c 	ldr	r0, [r8, #28]	; fField28
        1860e0:	e59d1080 	ldr	r1, [sp, #128]	; fField128
        1860e4:	e5911000 	ldr	r1, [r1]
        1860e8:	e1300001 	teq	r0, r1
        1860ec:	0a000003 	beq	186100 <TPickView::SetupForm(void)+0xde0>
        1860f0:	e598801c 	ldr	r8, [r8, #28]	; fField28
        1860f4:	e598001c 	ldr	r0, [r8, #28]	; fField28
        1860f8:	e1300001 	teq	r0, r1
        1860fc:	1afffffb 	bne	1860f0 <TPickView::SetupForm(void)+0xdd0>
        186100:	e598000c 	ldr	r0, [r8, #12]
        186104:	e31000f0 	tst	r0, #240	; 0xf0
        186108:	0a000017 	beq	18616c <TPickView::SetupForm(void)+0xe4c>
        18610c:	e2880010 	add	r0, r8, #16	; 0x10
        186110:	e8905000 	ldmia	r0, {ip, lr}
        186114:	e88d5000 	stmia	sp, {ip, lr}
        186118:	e1a0200d 	mov	r2, sp
        18611c:	e1a0100d 	mov	r1, sp
        186120:	e28d0018 	add	r0, sp, #24	; 0x18
        186124:	eb673628 	bl	1b539cc <$SectRect__FP4RectN21>
        186128:	e1a03805 	mov	r3, r5, lsl #16
        18612c:	e1a03843 	mov	r3, r3, asr #16
        186130:	e92d0008 	stmdb	sp!, {r3}
        186134:	e28d3004 	add	r3, sp, #4	; 0x4
        186138:	e1a02007 	mov	r2, r7
        18613c:	e1a01006 	mov	r1, r6
        186140:	e28d0034 	add	r0, sp, #52	; 0x34
        186144:	eb651949 	bl	1acc670 <$AdjustPopupInRect__FR5TRectlT2RC5TRects>
        186148:	e28dd004 	add	sp, sp, #4	; 0x4
        18614c:	e1a09000 	mov	r9, r0
        186150:	e3380000 	teq	r8, #0	; 0x0
        186154:	0a000004 	beq	18616c <TPickView::SetupForm(void)+0xe4c>
        186158:	e28d1030 	add	r1, sp, #48	; 0x30
        18615c:	e1a0000d 	mov	r0, sp
        186160:	eb6431fd 	bl	1a9295c <TRect::$Encloses( const(TRect const &))>
        186164:	e3300000 	teq	r0, #0	; 0x0
        186168:	1a00000d 	bne	1861a4 <TPickView::SetupForm(void)+0xe84>
        18616c:	e28d1030 	add	r1, sp, #48	; 0x30
        186170:	e28d0008 	add	r0, sp, #8	; 0x8
        186174:	e8905000 	ldmia	r0, {ip, lr}
        186178:	e8815000 	stmia	r1, {ip, lr}
        18617c:	e1a03805 	mov	r3, r5, lsl #16
        186180:	e1a03843 	mov	r3, r3, asr #16
        186184:	e92d0008 	stmdb	sp!, {r3}
        186188:	e28d301c 	add	r3, sp, #28	; 0x1c
        18618c:	e1a02007 	mov	r2, r7
        186190:	e1a01006 	mov	r1, r6
        186194:	e28d0034 	add	r0, sp, #52	; 0x34
        186198:	eb651934 	bl	1acc670 <$AdjustPopupInRect__FR5TRectlT2RC5TRects>
        18619c:	e28dd004 	add	sp, sp, #4	; 0x4
        1861a0:	e1a09000 	mov	r9, r0
        1861a4:	e28dd010 	add	sp, sp, #16	; 0x10
        1861a8:	ea000037 	b	18628c <TPickView::SetupForm(void)+0xf6c>
        1861ac:	62616420 	rsbvs	r6, r1, #536870912	; 0x20000000
        1861b0:	626f756e 	rsbvs	r7, pc, #461373440	; 0x1b800000
        1861b4:	64732066 	ldrvsbt	r2, [r3], -#102
        1861b8:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        1861bc:	00000000 	andeq	r0, r0, r0
        1861c0:	0c104c5c 	ldceq	12, cr4, [r0], -#368
        1861c4:	0c104c58 	ldceq	12, cr4, [r0], -#352
        1861c8:	006831f8 	streqd	r3, [r8], -#24
        1861cc:	006844d0 	ldreqd	r4, [r8], -#64	; fField64
        1861d0:	00684fc0 	rsbeq	r4, r8, r0, asr #31
        1861d4:	e59d0020 	ldr	r0, [sp, #32]
        1861d8:	e0870840 	add	r0, r7, r0, asr #16
        1861dc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1861e0:	e1500841 	cmp	r0, r1, asr #16
        1861e4:	da00000a 	ble	186214 <TPickView::SetupForm(void)+0xef4>
        1861e8:	e59d1006 	ldr	r1, [sp, #6]
        1861ec:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        1861f0:	e0410000 	sub	r0, r1, r0
        1861f4:	e1a00800 	mov	r0, r0, lsl #16
        1861f8:	e1a00840 	mov	r0, r0, asr #16
        1861fc:	e0800fa0 	add	r0, r0, r0, lsr #31
        186200:	e1a000c0 	mov	r0, r0, asr #1
        186204:	e59d1020 	ldr	r1, [sp, #32]
        186208:	e1500841 	cmp	r0, r1, asr #16
        18620c:	b3a09001 	movlt	r9, #1	; 0x1
        186210:	ba000000 	blt	186218 <TPickView::SetupForm(void)+0xef8>
        186214:	e3a09000 	mov	r9, #0	; 0x0
        186218:	e59d0022 	ldr	r0, [sp, #34]
        18621c:	e0861840 	add	r1, r6, r0, asr #16
        186220:	e59d0006 	ldr	r0, [sp, #6]
        186224:	e1510840 	cmp	r1, r0, asr #16
        186228:	da000005 	ble	186244 <TPickView::SetupForm(void)+0xf24>
        18622c:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        186230:	e0400006 	sub	r0, r0, r6
        186234:	e5cd0023 	strb	r0, [sp, #35]
        186238:	e1a00440 	mov	r0, r0, asr #8
        18623c:	e5cd0022 	strb	r0, [sp, #34]
        186240:	ea000004 	b	186258 <TPickView::SetupForm(void)+0xf38>
        186244:	e59d0020 	ldr	r0, [sp, #32]
        186248:	e0800006 	add	r0, r0, r6
        18624c:	e5cd0027 	strb	r0, [sp, #39]
        186250:	e1a00440 	mov	r0, r0, asr #8
        186254:	e5cd0026 	strb	r0, [sp, #38]
        186258:	e3390000 	teq	r9, #0	; 0x0
        18625c:	0a000005 	beq	186278 <TPickView::SetupForm(void)+0xf58>
        186260:	e59d0026 	ldr	r0, [sp, #38]
        186264:	e0400007 	sub	r0, r0, r7
        186268:	e5cd0021 	strb	r0, [sp, #33]
        18626c:	e1a00440 	mov	r0, r0, asr #8
        186270:	e5cd0020 	strb	r0, [sp, #32]
        186274:	ea000004 	b	18628c <TPickView::SetupForm(void)+0xf6c>
        186278:	e59d0022 	ldr	r0, [sp, #34]
        18627c:	e0800007 	add	r0, r0, r7
        186280:	e5cd0025 	strb	r0, [sp, #37]
        186284:	e1a00440 	mov	r0, r0, asr #8
        186288:	e5cd0024 	strb	r0, [sp, #36]	; fField36
        18628c:	e3a01000 	mov	r1, #0	; 0x0
        186290:	e3a02000 	mov	r2, #0	; 0x0
        186294:	e59d3024 	ldr	r3, [sp, #36]	; fField36
        186298:	e59d0020 	ldr	r0, [sp, #32]
        18629c:	e0430000 	sub	r0, r3, r0
        1862a0:	e1a00800 	mov	r0, r0, lsl #16
        1862a4:	e1a00840 	mov	r0, r0, asr #16
        1862a8:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        1862ac:	e59dc000 	ldr	ip, [sp]
        1862b0:	e043300c 	sub	r3, r3, ip
        1862b4:	e1a03803 	mov	r3, r3, lsl #16
        1862b8:	e1500843 	cmp	r0, r3, asr #16
        1862bc:	da000008 	ble	1862e4 <TPickView::SetupForm(void)+0xfc4>
        1862c0:	e59d0000 	ldr	r0, [sp]
        1862c4:	e5cd0023 	strb	r0, [sp, #35]
        1862c8:	e1a00440 	mov	r0, r0, asr #8
        1862cc:	e5cd0022 	strb	r0, [sp, #34]
        1862d0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1862d4:	e5cd0027 	strb	r0, [sp, #39]
        1862d8:	e1a00440 	mov	r0, r0, asr #8
        1862dc:	e5cd0026 	strb	r0, [sp, #38]
        1862e0:	ea000012 	b	186330 <TPickView::SetupForm(void)+0x1010>
        1862e4:	e59d3022 	ldr	r3, [sp, #34]
        1862e8:	e1a03843 	mov	r3, r3, asr #16
        1862ec:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        1862f0:	e1530840 	cmp	r3, r0, asr #16
        1862f4:	b59d0002 	ldrlt	r0, [sp, #2]	; fField2
        1862f8:	b1a00840 	movlt	r0, r0, asr #16
        1862fc:	b59d1022 	ldrlt	r1, [sp, #34]
        186300:	b1a01841 	movlt	r1, r1, asr #16
        186304:	ba000008 	blt	18632c <TPickView::SetupForm(void)+0x100c>
        186308:	e59d0026 	ldr	r0, [sp, #38]
        18630c:	e1a00840 	mov	r0, r0, asr #16
        186310:	e59d3006 	ldr	r3, [sp, #6]
        186314:	e1500843 	cmp	r0, r3, asr #16
        186318:	da000004 	ble	186330 <TPickView::SetupForm(void)+0x1010>
        18631c:	e59d0006 	ldr	r0, [sp, #6]
        186320:	e1a00840 	mov	r0, r0, asr #16
        186324:	e59d1026 	ldr	r1, [sp, #38]
        186328:	e1a01841 	mov	r1, r1, asr #16
        18632c:	e0401001 	sub	r1, r0, r1
        186330:	e59d3026 	ldr	r3, [sp, #38]
        186334:	e59d0022 	ldr	r0, [sp, #34]
        186338:	e0430000 	sub	r0, r3, r0
        18633c:	e1a00800 	mov	r0, r0, lsl #16
        186340:	e1a00840 	mov	r0, r0, asr #16
        186344:	e59d3006 	ldr	r3, [sp, #6]
        186348:	e59dc002 	ldr	ip, [sp, #2]	; fField2
        18634c:	e043300c 	sub	r3, r3, ip
        186350:	e1a03803 	mov	r3, r3, lsl #16
        186354:	e1500843 	cmp	r0, r3, asr #16
        186358:	da000008 	ble	186380 <TPickView::SetupForm(void)+0x1060>
        18635c:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        186360:	e5cd0021 	strb	r0, [sp, #33]
        186364:	e1a00440 	mov	r0, r0, asr #8
        186368:	e5cd0020 	strb	r0, [sp, #32]
        18636c:	e59d0006 	ldr	r0, [sp, #6]
        186370:	e5cd0025 	strb	r0, [sp, #37]
        186374:	e1a00440 	mov	r0, r0, asr #8
        186378:	e5cd0024 	strb	r0, [sp, #36]	; fField36
        18637c:	ea000010 	b	1863c4 <TPickView::SetupForm(void)+0x10a4>
        186380:	e59d3020 	ldr	r3, [sp, #32]
        186384:	e1a03843 	mov	r3, r3, asr #16
        186388:	e59d0000 	ldr	r0, [sp]
        18638c:	e1530840 	cmp	r3, r0, asr #16
        186390:	b59d2000 	ldrlt	r2, [sp]
        186394:	b1a02842 	movlt	r2, r2, asr #16
        186398:	b59d0020 	ldrlt	r0, [sp, #32]
        18639c:	b0422840 	sublt	r2, r2, r0, asr #16
        1863a0:	ba000007 	blt	1863c4 <TPickView::SetupForm(void)+0x10a4>
        1863a4:	e59d3024 	ldr	r3, [sp, #36]	; fField36
        1863a8:	e1a03843 	mov	r3, r3, asr #16
        1863ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1863b0:	e1530840 	cmp	r3, r0, asr #16
        1863b4:	c59d0004 	ldrgt	r0, [sp, #4]	; fField4
        1863b8:	c1a00840 	movgt	r0, r0, asr #16
        1863bc:	c59d2024 	ldrgt	r2, [sp, #36]	; fField36
        1863c0:	c0402842 	subgt	r2, r0, r2, asr #16
        1863c4:	e28d0020 	add	r0, sp, #32	; 0x20
        1863c8:	eb672d46 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1863cc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1863d0:	e59d0078 	ldr	r0, [sp, #120]	; fField120
        1863d4:	e5900000 	ldr	r0, [r0]
        1863d8:	eb68ef5b 	bl	1bc214c <$AllocateRefHandle(long)>
        1863dc:	e1a05000 	mov	r5, r0
        1863e0:	e59f0190 	ldr	r0, [pc, #190]	; 186578 <TPickView::SetupForm(void)+0x1258>
        1863e4:	e5900000 	ldr	r0, [r0]
        1863e8:	e5901000 	ldr	r1, [r0]
        1863ec:	e5950000 	ldr	r0, [r5]
        1863f0:	eb68f79a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1863f4:	eb68ef54 	bl	1bc214c <$AllocateRefHandle(long)>
        1863f8:	e58d0000 	str	r0, [sp]
        1863fc:	e1a00005 	mov	r0, r5
        186400:	eb68f36d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186404:	e59f1170 	ldr	r1, [pc, #170]	; 18657c <TPickView::SetupForm(void)+0x125c>
        186408:	e1a0000d 	mov	r0, sp
        18640c:	e3a02000 	mov	r2, #0	; 0x0
        186410:	eb68f794 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        186414:	e3100003 	tst	r0, #3	; 0x3
        186418:	01a00140 	moveq	r0, r0, asr #2
        18641c:	0a000000 	beq	186424 <TPickView::SetupForm(void)+0x1104>
        186420:	eb68ef3d 	bl	1bc211c <$_RINTError(long)>
        186424:	e1a00800 	mov	r0, r0, lsl #16
        186428:	e1a00840 	mov	r0, r0, asr #16
        18642c:	e2605000 	rsb	r5, r0, #0	; 0x0
        186430:	e59f1148 	ldr	r1, [pc, #148]	; 186580 <TPickView::SetupForm(void)+0x1260>
        186434:	e1a0000d 	mov	r0, sp
        186438:	e3a02000 	mov	r2, #0	; 0x0
        18643c:	eb68f789 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        186440:	e3100003 	tst	r0, #3	; 0x3
        186444:	01a00140 	moveq	r0, r0, asr #2
        186448:	0a000000 	beq	186450 <TPickView::SetupForm(void)+0x1130>
        18644c:	eb68ef32 	bl	1bc211c <$_RINTError(long)>
        186450:	e1a00800 	mov	r0, r0, lsl #16
        186454:	e1a00840 	mov	r0, r0, asr #16
        186458:	e2602000 	rsb	r2, r0, #0	; 0x0
        18645c:	e28d0024 	add	r0, sp, #36	; 0x24
        186460:	e1a01005 	mov	r1, r5
        186464:	eb672d1f 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        186468:	e24dd004 	sub	sp, sp, #4	; 0x4
        18646c:	e3390000 	teq	r9, #0	; 0x0
        186470:	0a00000b 	beq	1864a4 <TPickView::SetupForm(void)+0x1184>
        186474:	e24dd004 	sub	sp, sp, #4	; 0x4
        186478:	e3a00a82 	mov	r0, #532480	; 0x82000
        18647c:	e2800601 	add	r0, r0, #1048576	; 0x100000
        186480:	eb68ef31 	bl	1bc214c <$AllocateRefHandle(long)>
        186484:	e58d0000 	str	r0, [sp]
        186488:	e1a0200d 	mov	r2, sp
        18648c:	e59f10f0 	ldr	r1, [pc, #f0]	; 186584 <TPickView::SetupForm(void)+0x1264>
        186490:	e28d0074 	add	r0, sp, #116	; 0x74
        186494:	eb68ffb3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        186498:	e59d0000 	ldr	r0, [sp]
        18649c:	eb68f346 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1864a0:	e28dd004 	add	sp, sp, #4	; 0x4
        1864a4:	e28d0028 	add	r0, sp, #40	; 0x28
        1864a8:	eb69a4bb 	bl	1bef79c <$ToObject(TRect const &)>
        1864ac:	eb68ef26 	bl	1bc214c <$AllocateRefHandle(long)>
        1864b0:	e58d0000 	str	r0, [sp]
        1864b4:	e1a0200d 	mov	r2, sp
        1864b8:	e59f10c8 	ldr	r1, [pc, #c8]	; 186588 <TPickView::SetupForm(void)+0x1268>
        1864bc:	e28d0070 	add	r0, sp, #112	; 0x70
        1864c0:	eb68ffa8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1864c4:	e59d0000 	ldr	r0, [sp]
        1864c8:	eb68f33b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1864cc:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1864d0:	e3700001 	cmn	r0, #1	; 0x1
        1864d4:	0a00001a 	beq	186544 <TPickView::SetupForm(void)+0x1224>
        1864d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1864dc:	e2841074 	add	r1, r4, #116	; 0x74
        1864e0:	e1a05001 	mov	r5, r1
        1864e4:	e1a0200d 	mov	r2, sp
        1864e8:	e1a00004 	mov	r0, r4
        1864ec:	eb6528cb 	bl	1ad0820 <TPickView::$GetGridItemRect(PickStuff *, TRect *)>
        1864f0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1864f4:	e1a00840 	mov	r0, r0, asr #16
        1864f8:	e59d1000 	ldr	r1, [sp]
        1864fc:	e1500841 	cmp	r0, r1, asr #16
        186500:	aa00000e 	bge	186540 <TPickView::SetupForm(void)+0x1220>
        186504:	e59f6080 	ldr	r6, [pc, #80]	; 18658c <TPickView::SetupForm(void)+0x126c>
        186508:	aa00000c 	bge	186540 <TPickView::SetupForm(void)+0x1220>
        18650c:	e1a01006 	mov	r1, r6
        186510:	e1a00004 	mov	r0, r4
        186514:	e3a02000 	mov	r2, #0	; 0x0
        186518:	eb657b77 	bl	1ae52fc <TPickView::$Scroll(RefVar const &, unsigned char)>
        18651c:	e1a01005 	mov	r1, r5
        186520:	e1a0200d 	mov	r2, sp
        186524:	e1a00004 	mov	r0, r4
        186528:	eb6528bc 	bl	1ad0820 <TPickView::$GetGridItemRect(PickStuff *, TRect *)>
        18652c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        186530:	e1a00840 	mov	r0, r0, asr #16
        186534:	e59d1000 	ldr	r1, [sp]
        186538:	e1500841 	cmp	r0, r1, asr #16
        18653c:	bafffff2 	blt	18650c <TPickView::SetupForm(void)+0x11ec>
        186540:	e28dd008 	add	sp, sp, #8	; 0x8
        186544:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        186548:	eb68f31b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18654c:	e28dd030 	add	sp, sp, #48	; 0x30
        186550:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        186554:	eb68f318 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186558:	e59d0018 	ldr	r0, [sp, #24]
        18655c:	eb68f316 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186560:	e28dd01c 	add	sp, sp, #28	; 0x1c
        186564:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        186568:	eb68f313 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18656c:	e5bd0020 	ldr	r0, [sp, #32]!
        186570:	eb68f311 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186574:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        186578:	006829d0 	ldreqd	r2, [r8], -#144	; fField144
        18657c:	00681e88 	rsbeq	r1, r8, r8, lsl #29
        186580:	00681e90 	streqb	r1, [r8], -#224
        186584:	00684fa0 	rsbeq	r4, r8, r0, lsr #31
        186588:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        18658c:	00682a70 	rsbeq	r2, r8, r0, ror sl
    */
}

/**
 * Symbol: TPickView::Constructor(RefVar const &, TView *)
 * Address: 00186590
 */
TPickView::Constructor(RefVar const &, TView *) {
    /*
        186590:	e3a03000 	mov	r3, #0	; 0x0
        186594:	e5803038 	str	r3, [r0, #56]	; fField56
        186598:	e580303c 	str	r3, [r0, #60]	; fField60
        18659c:	e3e0c000 	mvn	ip, #0	; 0x0
        1865a0:	e5803040 	str	r3, [r0, #64]	; fField64
        1865a4:	e580c074 	str	ip, [r0, #116]	; fField116
        1865a8:	e5c030b8 	strb	r3, [r0, #184]	; fField184
        1865ac:	ea690bc9 	b	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
    */
}

/**
 * Symbol: TPickView::RealDraw(TRect &)
 * Address: 001865b0
 */
TPickView::RealDraw(TRect &) {
    /*
        1865b0:	e1a0c00d 	mov	ip, sp
        1865b4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1865b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1865bc:	e1a04000 	mov	r4, r0
        1865c0:	e24dd030 	sub	sp, sp, #48	; 0x30
        1865c4:	e3a00002 	mov	r0, #2	; 0x2
        1865c8:	eb68eedf 	bl	1bc214c <$AllocateRefHandle(long)>
        1865cc:	e58d0010 	str	r0, [sp, #16]	; fField16
        1865d0:	e3a00002 	mov	r0, #2	; 0x2
        1865d4:	eb68eedc 	bl	1bc214c <$AllocateRefHandle(long)>
        1865d8:	e3e08000 	mvn	r8, #0	; 0x0
        1865dc:	e2843054 	add	r3, r4, #84	; 0x54
        1865e0:	e58d000c 	str	r0, [sp, #12]
        1865e4:	e58d302c 	str	r3, [sp, #44]
        1865e8:	e58d3008 	str	r3, [sp, #8]
        1865ec:	e59f022c 	ldr	r0, [pc, #22c]	; 186820 <TPickView::RealDraw(TRect &)+0x270>	; fField22
        1865f0:	e5900000 	ldr	r0, [r0]
        1865f4:	eb657f4d 	bl	1ae6330 <TRootView::$CommandKeyboardConnected(void)>
        1865f8:	e3300000 	teq	r0, #0	; 0x0
        1865fc:	159400a4 	ldrne	r0, [r4, #164]	; fField164
        186600:	15900000 	ldrne	r0, [r0]
        186604:	13300002 	teqne	r0, #2	; 0x2
        186608:	03a00000 	moveq	r0, #0	; 0x0
        18660c:	13a00001 	movne	r0, #1	; 0x1
        186610:	e20000ff 	and	r0, r0, #255	; 0xff
        186614:	e58d0004 	str	r0, [sp, #4]	; fField4
        186618:	e1a0100d 	mov	r1, sp
        18661c:	e1a00004 	mov	r0, r4
        186620:	eb690fc6 	bl	1bca540 <TView::$GetChildOrigin(TPoint *)>
        186624:	e3a05000 	mov	r5, #0	; 0x0
        186628:	e5940088 	ldr	r0, [r4, #136]	; fField136
        18662c:	e3500000 	cmp	r0, #0	; 0x0
        186630:	da00023e 	ble	186f30 <TPickView::RealDraw(TRect &)+0x980>
        186634:	e2840034 	add	r0, r4, #52	; 0x34
        186638:	e58d0028 	str	r0, [sp, #40]
        18663c:	e59f11e0 	ldr	r1, [pc, #1e0]	; 186824 <TPickView::RealDraw(TRect &)+0x274>
        186640:	e58d1024 	str	r1, [sp, #36]	; fField36
        186644:	e59f01dc 	ldr	r0, [pc, #1dc]	; 186828 <TPickView::RealDraw(TRect &)+0x278>
        186648:	e58d0020 	str	r0, [sp, #32]
        18664c:	e59f01d8 	ldr	r0, [pc, #1d8]	; 18682c <TPickView::RealDraw(TRect &)+0x27c>
        186650:	e58d001c 	str	r0, [sp, #28]	; fField28
        186654:	e59f01d4 	ldr	r0, [pc, #1d4]	; 186830 <TPickView::RealDraw(TRect &)+0x280>
        186658:	e58d0018 	str	r0, [sp, #24]
        18665c:	e59f01d0 	ldr	r0, [pc, #1d0]	; 186834 <TPickView::RealDraw(TRect &)+0x284>
        186660:	e58d0014 	str	r0, [sp, #20]	; fField20
        186664:	e24dd008 	sub	sp, sp, #8	; 0x8
        186668:	e3a07000 	mov	r7, #0	; 0x0
        18666c:	e1a01005 	mov	r1, r5
        186670:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        186674:	e5900000 	ldr	r0, [r0]
        186678:	e5900000 	ldr	r0, [r0]
        18667c:	eb68f6f4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        186680:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        186684:	e5810000 	str	r0, [r1]
        186688:	e28d1014 	add	r1, sp, #20	; 0x14
        18668c:	e1a00004 	mov	r0, r4
        186690:	eb65285b 	bl	1ad0804 <TPickView::$GetDisplayIndent(RefVar const &)>
        186694:	e3500000 	cmp	r0, #0	; 0x0
        186698:	a1a08000 	movge	r8, r0
        18669c:	e1a0300d 	mov	r3, sp
        1866a0:	e28d2004 	add	r2, sp, #4	; 0x4
        1866a4:	e1a01005 	mov	r1, r5
        1866a8:	e1a00004 	mov	r0, r4
        1866ac:	eb657aff 	bl	1ae52b0 <TPickView::$GetDisplayItem(long, unsigned char *, unsigned short *)>
        1866b0:	e59d1018 	ldr	r1, [sp, #24]
        1866b4:	e5810000 	str	r0, [r1]
        1866b8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1866bc:	e1a00840 	mov	r0, r0, asr #16
        1866c0:	e59d1008 	ldr	r1, [sp, #8]
        1866c4:	e0806841 	add	r6, r0, r1, asr #16
        1866c8:	e3350000 	teq	r5, #0	; 0x0
        1866cc:	0a000004 	beq	1866e4 <TPickView::RealDraw(TRect &)+0x134>
        1866d0:	e5941038 	ldr	r1, [r4, #56]	; fField56
        1866d4:	e5911000 	ldr	r1, [r1]
        1866d8:	e0811085 	add	r1, r1, r5, lsl #1
        1866dc:	e5111002 	ldr	r1, [r1, -#2]	; fField2
        1866e0:	e0866841 	add	r6, r6, r1, asr #16
        1866e4:	e5941038 	ldr	r1, [r4, #56]	; fField56
        1866e8:	e5911000 	ldr	r1, [r1]
        1866ec:	e7911085 	ldr	r1, [r1, r5, lsl #1]
        1866f0:	e1a01841 	mov	r1, r1, asr #16
        1866f4:	e0811000 	add	r1, r1, r0
        1866f8:	e59d0008 	ldr	r0, [sp, #8]
        1866fc:	e081a840 	add	sl, r1, r0, asr #16
        186700:	e2841044 	add	r1, r4, #68	; 0x44
        186704:	e8910003 	ldmia	r1, {r0, r1}
        186708:	e0801001 	add	r1, r0, r1
        18670c:	e08a2006 	add	r2, sl, r6
        186710:	e0422001 	sub	r2, r2, r1
        186714:	e0822fa2 	add	r2, r2, r2, lsr #31
        186718:	e594109c 	ldr	r1, [r4, #156]	; fField156
        18671c:	e08110c2 	add	r1, r1, r2, asr #1
        186720:	e0810000 	add	r0, r1, r0
        186724:	e2409001 	sub	r9, r0, #1	; 0x1
        186728:	e28d0018 	add	r0, sp, #24	; 0x18
        18672c:	eb68fada 	bl	1bc529c <$IsString(RefVar const &)>
        186730:	e3300000 	teq	r0, #0	; 0x0
        186734:	0a000089 	beq	186960 <TPickView::RealDraw(TRect &)+0x3b0>
        186738:	e24dd004 	sub	sp, sp, #4	; 0x4
        18673c:	e5941012 	ldr	r1, [r4, #18]	; fField18
        186740:	e1a01821 	mov	r1, r1, lsr #16
        186744:	e594008c 	ldr	r0, [r4, #140]	; fField140
        186748:	e0810000 	add	r0, r1, r0
        18674c:	e1a07800 	mov	r7, r0, lsl #16
        186750:	e1a01809 	mov	r1, r9, lsl #16
        186754:	e40d1004 	str	r1, [sp], -#4	; fField4
        186758:	e28d101c 	add	r1, sp, #28	; 0x1c
        18675c:	e1a00004 	mov	r0, r4
        186760:	eb652826 	bl	1ad0800 <TPickView::$GetDisplayIcon(RefVar const &)>
        186764:	eb68ee78 	bl	1bc214c <$AllocateRefHandle(long)>
        186768:	e58d0000 	str	r0, [sp]
        18676c:	e5900000 	ldr	r0, [r0]
        186770:	e3300002 	teq	r0, #2	; 0x2
        186774:	0a000046 	beq	186894 <TPickView::RealDraw(TRect &)+0x2e4>
        186778:	e24dd008 	sub	sp, sp, #8	; 0x8
        18677c:	e5941012 	ldr	r1, [r4, #18]	; fField18
        186780:	e1a01821 	mov	r1, r1, lsr #16
        186784:	e594008c 	ldr	r0, [r4, #140]	; fField140
        186788:	e0810000 	add	r0, r1, r0
        18678c:	e5cd0003 	strb	r0, [sp, #3]
        186790:	e1a00440 	mov	r0, r0, asr #8
        186794:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        186798:	e594009c 	ldr	r0, [r4, #156]	; fField156
        18679c:	e0800006 	add	r0, r0, r6
        1867a0:	e5cd0001 	strb	r0, [sp, #1]
        1867a4:	e1a00440 	mov	r0, r0, asr #8
        1867a8:	e44d000c 	strb	r0, [sp], -#12
        1867ac:	e59f0084 	ldr	r0, [pc, #84]	; 186838 <TPickView::RealDraw(TRect &)+0x288>
        1867b0:	e5900000 	ldr	r0, [r0]
        1867b4:	e5901000 	ldr	r1, [r0]
        1867b8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        1867bc:	e5900000 	ldr	r0, [r0]
        1867c0:	eb68f6a6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1867c4:	eb68ee60 	bl	1bc214c <$AllocateRefHandle(long)>
        1867c8:	e58d0000 	str	r0, [sp]
        1867cc:	e1a0000d 	mov	r0, sp
        1867d0:	e28d1004 	add	r1, sp, #4	; 0x4
        1867d4:	eb6438a7 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        1867d8:	e59d0000 	ldr	r0, [sp]
        1867dc:	eb68f276 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1867e0:	e3580000 	cmp	r8, #0	; 0x0
        1867e4:	ba000014 	blt	18683c <TPickView::RealDraw(TRect &)+0x28c>
        1867e8:	e1a00004 	mov	r0, r4
        1867ec:	e59d1048 	ldr	r1, [sp, #72]
        1867f0:	eb690f54 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1867f4:	e3100003 	tst	r0, #3	; 0x3
        1867f8:	01a00140 	moveq	r0, r0, asr #2
        1867fc:	0a000000 	beq	186804 <TPickView::RealDraw(TRect &)+0x254>
        186800:	eb68ee45 	bl	1bc211c <$_RINTError(long)>
        186804:	e59d100c 	ldr	r1, [sp, #12]
        186808:	e04100c0 	sub	r0, r1, r0, asr #1
        18680c:	e5cd000f 	strb	r0, [sp, #15]
        186810:	e1a00440 	mov	r0, r0, asr #8
        186814:	e5cd000e 	strb	r0, [sp, #14]
        186818:	e1a06008 	mov	r6, r8
        18681c:	ea00000c 	b	186854 <TPickView::RealDraw(TRect &)+0x2a4>
        186820:	0c101934 	ldceq	9, cr1, [r0], -#208
        186824:	00683e78 	rsbeq	r3, r8, r8, ror lr
        186828:	006806c8 	rsbeq	r0, r8, r8, asr #13
        18682c:	00681020 	rsbeq	r1, r8, r0, lsr #32
        186830:	00681898 	streqb	r1, [r8], -#136	; fField136
        186834:	00680738 	rsbeq	r0, r8, r8, lsr r7
        186838:	00682190 	streqb	r2, [r8], -#16	; fField16
        18683c:	e59d1008 	ldr	r1, [sp, #8]
        186840:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        186844:	e0410000 	sub	r0, r1, r0
        186848:	e1a00800 	mov	r0, r0, lsl #16
        18684c:	e1a00840 	mov	r0, r0, asr #16
        186850:	e2806002 	add	r6, r0, #2	; 0x2
        186854:	e59d100c 	ldr	r1, [sp, #12]
        186858:	e0810006 	add	r0, r1, r6
        18685c:	e5cd0013 	strb	r0, [sp, #19]
        186860:	e1a00440 	mov	r0, r0, asr #8
        186864:	e5cd0012 	strb	r0, [sp, #18]	; fField18
        186868:	e5cda011 	strb	sl, [sp, #17]
        18686c:	e1a0044a 	mov	r0, sl, asr #8
        186870:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        186874:	e28d100c 	add	r1, sp, #12	; 0xc
        186878:	e28d0014 	add	r0, sp, #20	; 0x14
        18687c:	e3a03000 	mov	r3, #0	; 0x0
        186880:	e3a02006 	mov	r2, #6	; 0x6
        186884:	eb643026 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        186888:	e0877806 	add	r7, r7, r6, lsl #16
        18688c:	e28dd014 	add	sp, sp, #20	; 0x14
        186890:	ea000001 	b	18689c <TPickView::RealDraw(TRect &)+0x2ec>
        186894:	e3580000 	cmp	r8, #0	; 0x0
        186898:	a0877808 	addge	r7, r7, r8, lsl #16
        18689c:	e24dd044 	sub	sp, sp, #68	; 0x44
        1868a0:	e28d1064 	add	r1, sp, #100	; 0x64
        1868a4:	e28d001c 	add	r0, sp, #28	; 0x1c
        1868a8:	eb00985c 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        1868ac:	e1a01005 	mov	r1, r5
        1868b0:	e1a00004 	mov	r0, r4
        1868b4:	eb6527e3 	bl	1ad0848 <TPickView::$GetItemLength(long)>
        1868b8:	e1b06000 	movs	r6, r0
        1868bc:	e1a0300d 	mov	r3, sp
        1868c0:	e3a02000 	mov	r2, #0	; 0x0
        1868c4:	e92d000c 	stmdb	sp!, {r2, r3}
        1868c8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1868cc:	e59d1058 	ldr	r1, [sp, #88]
        1868d0:	e58d1004 	str	r1, [sp, #4]	; fField4
        1868d4:	e58d7000 	str	r7, [sp]
        1868d8:	51a02006 	movpl	r2, r6
        1868dc:	42662000 	rsbmi	r2, r6, #0	; 0x0
        1868e0:	e59d3090 	ldr	r3, [sp, #144]	; fField144
        1868e4:	e28d002c 	add	r0, sp, #44	; 0x2c
        1868e8:	e3a01000 	mov	r1, #0	; 0x0
        1868ec:	eb671f85 	bl	1b4e708 <$DrawRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)>
        1868f0:	e28dd010 	add	sp, sp, #16	; 0x10
        1868f4:	e3560000 	cmp	r6, #0	; 0x0
        1868f8:	aa000011 	bge	186944 <TPickView::RealDraw(TRect &)+0x394>
        1868fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        186900:	e3a00026 	mov	r0, #38	; 0x26
        186904:	e5cd0001 	strb	r0, [sp, #1]
        186908:	e3a00020 	mov	r0, #32	; 0x20
        18690c:	e5cd0000 	strb	r0, [sp]
        186910:	e59d0018 	ldr	r0, [sp, #24]
        186914:	e0800007 	add	r0, r0, r7
        186918:	e3a03000 	mov	r3, #0	; 0x0
        18691c:	e3a02000 	mov	r2, #0	; 0x0
        186920:	e92d000c 	stmdb	sp!, {r2, r3}
        186924:	e24dd008 	sub	sp, sp, #8	; 0x8
        186928:	e59d205c 	ldr	r2, [sp, #92]
        18692c:	e88d0005 	stmia	sp, {r0, r2}
        186930:	e28d2070 	add	r2, sp, #112	; 0x70
        186934:	e28d0010 	add	r0, sp, #16	; 0x10
        186938:	e3a01001 	mov	r1, #1	; 0x1
        18693c:	eb671f74 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        186940:	e28dd014 	add	sp, sp, #20	; 0x14
        186944:	e1a07009 	mov	r7, r9
        186948:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        18694c:	eb68f21a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186950:	e5bd0044 	ldr	r0, [sp, #68]!	; fField68
        186954:	eb68f218 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186958:	e28dd008 	add	sp, sp, #8	; 0x8
        18695c:	ea0000d4 	b	186cb4 <TPickView::RealDraw(TRect &)+0x704>
        186960:	e59d0018 	ldr	r0, [sp, #24]
        186964:	e5900000 	ldr	r0, [r0]
        186968:	eb68fa4d 	bl	1bc52a4 <$IsSymbol(long)>
        18696c:	e3300000 	teq	r0, #0	; 0x0
        186970:	0a00003b 	beq	186a64 <TPickView::RealDraw(TRect &)+0x4b4>
        186974:	e59f0064 	ldr	r0, [pc, #64]	; 1869e0 <TPickView::RealDraw(TRect &)+0x430>	; fField64
        186978:	e5900000 	ldr	r0, [r0]
        18697c:	e5901000 	ldr	r1, [r0]
        186980:	e59d0018 	ldr	r0, [sp, #24]
        186984:	e5900000 	ldr	r0, [r0]
        186988:	eb68f628 	bl	1bc4230 <$EQRef__FlT1>
        18698c:	e3300000 	teq	r0, #0	; 0x0
        186990:	0a000013 	beq	1869e4 <TPickView::RealDraw(TRect &)+0x434>
        186994:	e2866003 	add	r6, r6, #3	; 0x3
        186998:	eb67238a 	bl	1b4f7c8 <$GetFgPattern(void)>
        18699c:	e1a0a000 	mov	sl, r0
        1869a0:	e3a00002 	mov	r0, #2	; 0x2
        1869a4:	eb67238d 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        1869a8:	eb673410 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        1869ac:	e5940012 	ldr	r0, [r4, #18]	; fField18
        1869b0:	e1a00840 	mov	r0, r0, asr #16
        1869b4:	e2800001 	add	r0, r0, #1	; 0x1
        1869b8:	e1a01006 	mov	r1, r6
        1869bc:	eb672bbf 	bl	1b518c0 <$MoveTo__FlT1>
        1869c0:	e5940016 	ldr	r0, [r4, #22]	; fField22
        1869c4:	e1a00840 	mov	r0, r0, asr #16
        1869c8:	e2400001 	sub	r0, r0, #1	; 0x1
        1869cc:	e1a01006 	mov	r1, r6
        1869d0:	eb6727a9 	bl	1b5087c <$LineTo__FlT1>
        1869d4:	e1a0000a 	mov	r0, sl
        1869d8:	eb673404 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        1869dc:	ea0000b4 	b	186cb4 <TPickView::RealDraw(TRect &)+0x704>
        1869e0:	00683e98 	streqb	r3, [r8], -#232
        1869e4:	e59f0074 	ldr	r0, [pc, #74]	; 186a60 <TPickView::RealDraw(TRect &)+0x4b0>
        1869e8:	e5900000 	ldr	r0, [r0]
        1869ec:	e5901000 	ldr	r1, [r0]
        1869f0:	e59d0018 	ldr	r0, [sp, #24]
        1869f4:	e5900000 	ldr	r0, [r0]
        1869f8:	eb68f60c 	bl	1bc4230 <$EQRef__FlT1>
        1869fc:	e3300000 	teq	r0, #0	; 0x0
        186a00:	0a0000ab 	beq	186cb4 <TPickView::RealDraw(TRect &)+0x704>
        186a04:	e24dd010 	sub	sp, sp, #16	; 0x10
        186a08:	e1a0000d 	mov	r0, sp
        186a0c:	eb67236f 	bl	1b4f7d0 <$GetPenState(PenState *)>
        186a10:	e2866003 	add	r6, r6, #3	; 0x3
        186a14:	e3a00004 	mov	r0, #4	; 0x4
        186a18:	eb672370 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        186a1c:	eb6733f3 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        186a20:	e3a01002 	mov	r1, #2	; 0x2
        186a24:	e3a00001 	mov	r0, #1	; 0x1
        186a28:	eb672fbe 	bl	1b52928 <$PenSize__FlT1>
        186a2c:	e5940012 	ldr	r0, [r4, #18]	; fField18
        186a30:	e1a00840 	mov	r0, r0, asr #16
        186a34:	e1a01006 	mov	r1, r6
        186a38:	eb672ba0 	bl	1b518c0 <$MoveTo__FlT1>
        186a3c:	e5940016 	ldr	r0, [r4, #22]	; fField22
        186a40:	e1a00840 	mov	r0, r0, asr #16
        186a44:	e2400001 	sub	r0, r0, #1	; 0x1
        186a48:	e1a01006 	mov	r1, r6
        186a4c:	eb67278a 	bl	1b5087c <$LineTo__FlT1>
        186a50:	e1a0000d 	mov	r0, sp
        186a54:	eb6733e7 	bl	1b539f8 <$SetPenState(PenState *)>
        186a58:	e28dd010 	add	sp, sp, #16	; 0x10
        186a5c:	ea000094 	b	186cb4 <TPickView::RealDraw(TRect &)+0x704>
        186a60:	00683ea0 	rsbeq	r3, r8, r0, lsr #29
        186a64:	e28d0018 	add	r0, sp, #24	; 0x18
        186a68:	eb69b3c8 	bl	1bf3990 <$IsFrame(RefVar const &)>
        186a6c:	e3300000 	teq	r0, #0	; 0x0
        186a70:	0a00008f 	beq	186cb4 <TPickView::RealDraw(TRect &)+0x704>
        186a74:	e24dd008 	sub	sp, sp, #8	; 0x8
        186a78:	e5941012 	ldr	r1, [r4, #18]	; fField18
        186a7c:	e1a01821 	mov	r1, r1, lsr #16
        186a80:	e594008c 	ldr	r0, [r4, #140]	; fField140
        186a84:	e0810000 	add	r0, r1, r0
        186a88:	e5cd0003 	strb	r0, [sp, #3]
        186a8c:	e1a00440 	mov	r0, r0, asr #8
        186a90:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        186a94:	e594009c 	ldr	r0, [r4, #156]	; fField156
        186a98:	e0800006 	add	r0, r0, r6
        186a9c:	e5cd0001 	strb	r0, [sp, #1]
        186aa0:	e1a00440 	mov	r0, r0, asr #8
        186aa4:	e5cd0000 	strb	r0, [sp]
        186aa8:	e59f0050 	ldr	r0, [pc, #50]	; 186b00 <TPickView::RealDraw(TRect &)+0x550>
        186aac:	e5900000 	ldr	r0, [r0]
        186ab0:	e5901000 	ldr	r1, [r0]
        186ab4:	e59d0020 	ldr	r0, [sp, #32]
        186ab8:	e5900000 	ldr	r0, [r0]
        186abc:	eb68f5e1 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        186ac0:	e3300000 	teq	r0, #0	; 0x0
        186ac4:	1a000007 	bne	186ae8 <TPickView::RealDraw(TRect &)+0x538>
        186ac8:	e59f0034 	ldr	r0, [pc, #34]	; 186b04 <TPickView::RealDraw(TRect &)+0x554>
        186acc:	e5900000 	ldr	r0, [r0]
        186ad0:	e5901000 	ldr	r1, [r0]
        186ad4:	e59d0020 	ldr	r0, [sp, #32]
        186ad8:	e5900000 	ldr	r0, [r0]
        186adc:	eb68f5d9 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        186ae0:	e3300000 	teq	r0, #0	; 0x0
        186ae4:	0a000007 	beq	186b08 <TPickView::RealDraw(TRect &)+0x558>
        186ae8:	e1a0100d 	mov	r1, sp
        186aec:	e28d0020 	add	r0, sp, #32	; 0x20
        186af0:	e3a03000 	mov	r3, #0	; 0x0
        186af4:	e3a02000 	mov	r2, #0	; 0x0
        186af8:	eb642f89 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        186afc:	ea000065 	b	186c98 <TPickView::RealDraw(TRect &)+0x6e8>
        186b00:	006820d8 	ldreqd	r2, [r8], -#8
        186b04:	00682500 	rsbeq	r2, r8, r0, lsl #10
        186b08:	e59f707c 	ldr	r7, [pc, #7c]	; 186b8c <TPickView::RealDraw(TRect &)+0x5dc>
        186b0c:	e5970000 	ldr	r0, [r7]
        186b10:	e5901000 	ldr	r1, [r0]
        186b14:	e59d0020 	ldr	r0, [sp, #32]
        186b18:	e5900000 	ldr	r0, [r0]
        186b1c:	eb68f5c9 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        186b20:	e3300000 	teq	r0, #0	; 0x0
        186b24:	0a000019 	beq	186b90 <TPickView::RealDraw(TRect &)+0x5e0>
        186b28:	e59d0000 	ldr	r0, [sp]
        186b2c:	e5cd0007 	strb	r0, [sp, #7]
        186b30:	e1a00440 	mov	r0, r0, asr #8
        186b34:	e5cd0006 	strb	r0, [sp, #6]
        186b38:	e41d0004 	ldr	r0, [sp], -#4	; fField4
        186b3c:	e1a00820 	mov	r0, r0, lsr #16
        186b40:	e5cd0009 	strb	r0, [sp, #9]
        186b44:	e1a00440 	mov	r0, r0, asr #8
        186b48:	e5cd0008 	strb	r0, [sp, #8]
        186b4c:	e5970000 	ldr	r0, [r7]
        186b50:	e5901000 	ldr	r1, [r0]
        186b54:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        186b58:	e5900000 	ldr	r0, [r0]
        186b5c:	eb68f5bf 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        186b60:	eb68ed79 	bl	1bc214c <$AllocateRefHandle(long)>
        186b64:	e58d0000 	str	r0, [sp]
        186b68:	e28d1004 	add	r1, sp, #4	; 0x4
        186b6c:	e1a0000d 	mov	r0, sp
        186b70:	e3a03000 	mov	r3, #0	; 0x0
        186b74:	e3a02000 	mov	r2, #0	; 0x0
        186b78:	eb642f69 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        186b7c:	e59d0000 	ldr	r0, [sp]
        186b80:	eb68f18d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186b84:	e28dd004 	add	sp, sp, #4	; 0x4
        186b88:	ea000042 	b	186c98 <TPickView::RealDraw(TRect &)+0x6e8>
        186b8c:	00683ec0 	rsbeq	r3, r8, r0, asr #29
        186b90:	e59f73c0 	ldr	r7, [pc, #3c0]	; 186f58 <TPickView::RealDraw(TRect &)+0x9a8>
        186b94:	e5970000 	ldr	r0, [r7]
        186b98:	e5901000 	ldr	r1, [r0]
        186b9c:	e59d0020 	ldr	r0, [sp, #32]
        186ba0:	e5900000 	ldr	r0, [r0]
        186ba4:	eb68f5a7 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        186ba8:	e3300000 	teq	r0, #0	; 0x0
        186bac:	0a000039 	beq	186c98 <TPickView::RealDraw(TRect &)+0x6e8>
        186bb0:	e24dd010 	sub	sp, sp, #16	; 0x10
        186bb4:	e5970000 	ldr	r0, [r7]
        186bb8:	e5901000 	ldr	r1, [r0]
        186bbc:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        186bc0:	e5900000 	ldr	r0, [r0]
        186bc4:	eb68f5a5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        186bc8:	eb68ed5f 	bl	1bc214c <$AllocateRefHandle(long)>
        186bcc:	e58d000c 	str	r0, [sp, #12]
        186bd0:	e51f03a0 	ldr	r0, [pc, #fffffc60]	; 186838 <TPickView::RealDraw(TRect &)+0x288>
        186bd4:	e5900000 	ldr	r0, [r0]
        186bd8:	e5901000 	ldr	r1, [r0]
        186bdc:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        186be0:	e5900000 	ldr	r0, [r0]
        186be4:	eb68f59d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        186be8:	eb68ed57 	bl	1bc214c <$AllocateRefHandle(long)>
        186bec:	e58d0008 	str	r0, [sp, #8]
        186bf0:	e1a0100d 	mov	r1, sp
        186bf4:	e28d0008 	add	r0, sp, #8	; 0x8
        186bf8:	eb64379e 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        186bfc:	e3300000 	teq	r0, #0	; 0x0
        186c00:	028f0fd5 	addeq	r0, pc, #852	; 0x354
        186c04:	0b697165 	bleq	1be31a0 <$ThrowMsg>
        186c08:	e59d0006 	ldr	r0, [sp, #6]
        186c0c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        186c10:	e0400001 	sub	r0, r0, r1
        186c14:	e1a00800 	mov	r0, r0, lsl #16
        186c18:	e1a00840 	mov	r0, r0, asr #16
        186c1c:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        186c20:	e59d1000 	ldr	r1, [sp]
        186c24:	e0421001 	sub	r1, r2, r1
        186c28:	e1a01801 	mov	r1, r1, lsl #16
        186c2c:	e1a01841 	mov	r1, r1, asr #16
        186c30:	e350001c 	cmp	r0, #28	; 0x1c
        186c34:	da000004 	ble	186c4c <TPickView::RealDraw(TRect &)+0x69c>
        186c38:	e0611181 	rsb	r1, r1, r1, lsl #3
        186c3c:	e1a01101 	mov	r1, r1, lsl #2
        186c40:	eb68af3e 	bl	1bb2940 <$__rt_sdiv>
        186c44:	e1a01000 	mov	r1, r0
        186c48:	e3a0001c 	mov	r0, #28	; 0x1c
        186c4c:	e59d2012 	ldr	r2, [sp, #18]	; fField18
        186c50:	e0820000 	add	r0, r2, r0
        186c54:	e5cd0015 	strb	r0, [sp, #21]
        186c58:	e1a00440 	mov	r0, r0, asr #8
        186c5c:	e5cd0014 	strb	r0, [sp, #20]	; fField20
        186c60:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        186c64:	e0800001 	add	r0, r0, r1
        186c68:	e5cd0017 	strb	r0, [sp, #23]
        186c6c:	e1a00440 	mov	r0, r0, asr #8
        186c70:	e5cd0016 	strb	r0, [sp, #22]	; fField22
        186c74:	e28d2010 	add	r2, sp, #16	; 0x10
        186c78:	e1a0100d 	mov	r1, sp
        186c7c:	e28d000c 	add	r0, sp, #12	; 0xc
        186c80:	eb649a94 	bl	1aad6d8 <$DrawStrokeBundle__FRC6RefVarP5TRectT2>
        186c84:	e59d0008 	ldr	r0, [sp, #8]
        186c88:	eb68f14b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186c8c:	e59d000c 	ldr	r0, [sp, #12]
        186c90:	eb68f149 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186c94:	e28dd010 	add	sp, sp, #16	; 0x10
        186c98:	e04a0006 	sub	r0, sl, r6
        186c9c:	e0800fa0 	add	r0, r0, r0, lsr #31
        186ca0:	e08600c0 	add	r0, r6, r0, asr #1
        186ca4:	e5941044 	ldr	r1, [r4, #68]	; fField68
        186ca8:	e0811fa1 	add	r1, r1, r1, lsr #31
        186cac:	e08070c1 	add	r7, r0, r1, asr #1
        186cb0:	e28dd008 	add	sp, sp, #8	; 0x8
        186cb4:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
        186cb8:	e3300000 	teq	r0, #0	; 0x0
        186cbc:	159d0000 	ldrne	r0, [sp]
        186cc0:	11a00820 	movne	r0, r0, lsr #16
        186cc4:	13300000 	teqne	r0, #0	; 0x0
        186cc8:	159d0000 	ldrne	r0, [sp]
        186ccc:	11a00820 	movne	r0, r0, lsr #16
        186cd0:	13300020 	teqne	r0, #32	; 0x20
        186cd4:	0a00000f 	beq	186d18 <TPickView::RealDraw(TRect &)+0x768>
        186cd8:	e5940012 	ldr	r0, [r4, #18]	; fField18
        186cdc:	e1a00820 	mov	r0, r0, lsr #16
        186ce0:	e5941090 	ldr	r1, [r4, #144]	; fField144
        186ce4:	e0800001 	add	r0, r0, r1
        186ce8:	e1a00800 	mov	r0, r0, lsl #16
        186cec:	e1a01807 	mov	r1, r7, lsl #16
        186cf0:	e3a03000 	mov	r3, #0	; 0x0
        186cf4:	e3a02000 	mov	r2, #0	; 0x0
        186cf8:	e92d000c 	stmdb	sp!, {r2, r3}
        186cfc:	e24dd008 	sub	sp, sp, #8	; 0x8
        186d00:	e88d0003 	stmia	sp, {r0, r1}
        186d04:	e28d2020 	add	r2, sp, #32	; 0x20
        186d08:	e28d0010 	add	r0, sp, #16	; 0x10
        186d0c:	e3a01001 	mov	r1, #1	; 0x1
        186d10:	eb671e7f 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        186d14:	e28dd010 	add	sp, sp, #16	; 0x10
        186d18:	e24dd004 	sub	sp, sp, #4	; 0x4
        186d1c:	e1a01005 	mov	r1, r5
        186d20:	e1a00004 	mov	r0, r4
        186d24:	eb65796f 	bl	1ae52e8 <TPickView::$GetKeyCommand(long)>
        186d28:	eb68ed07 	bl	1bc214c <$AllocateRefHandle(long)>
        186d2c:	e58d0000 	str	r0, [sp]
        186d30:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        186d34:	e3300000 	teq	r0, #0	; 0x0
        186d38:	159d0000 	ldrne	r0, [sp]
        186d3c:	15900000 	ldrne	r0, [r0]
        186d40:	13300002 	teqne	r0, #2	; 0x2
        186d44:	0a000072 	beq	186f14 <TPickView::RealDraw(TRect &)+0x964>
        186d48:	e5940016 	ldr	r0, [r4, #22]	; fField22
        186d4c:	e1a00820 	mov	r0, r0, lsr #16
        186d50:	e59410a8 	ldr	r1, [r4, #168]	; fField168
        186d54:	e1a01821 	mov	r1, r1, lsr #16
        186d58:	e0400001 	sub	r0, r0, r1
        186d5c:	e5941098 	ldr	r1, [r4, #152]	; fField152
        186d60:	e0400001 	sub	r0, r0, r1
        186d64:	e1a06800 	mov	r6, r0, lsl #16
        186d68:	e1a07809 	mov	r7, r9, lsl #16
        186d6c:	e24dd004 	sub	sp, sp, #4	; 0x4
        186d70:	e28d0004 	add	r0, sp, #4	; 0x4
        186d74:	eb6589cc 	bl	1ae94ac <$GetDisplayCmdChar(RefVar const &)>
        186d78:	e5cd0001 	strb	r0, [sp, #1]
        186d7c:	e1a01440 	mov	r1, r0, asr #8
        186d80:	e5cd1000 	strb	r1, [sp]
        186d84:	e3300000 	teq	r0, #0	; 0x0
        186d88:	0a000060 	beq	186f10 <TPickView::RealDraw(TRect &)+0x960>
        186d8c:	e1a0000d 	mov	r0, sp
        186d90:	e3a01001 	mov	r1, #1	; 0x1
        186d94:	eb699e6c 	bl	1bee74c <$UppercaseText(unsigned short *, long)>
        186d98:	e3a03000 	mov	r3, #0	; 0x0
        186d9c:	e3a02000 	mov	r2, #0	; 0x0
        186da0:	e92d000c 	stmdb	sp!, {r2, r3}
        186da4:	e24dd008 	sub	sp, sp, #8	; 0x8
        186da8:	e88d00c0 	stmia	sp, {r6, r7}
        186dac:	e28d2028 	add	r2, sp, #40	; 0x28
        186db0:	e28d0010 	add	r0, sp, #16	; 0x10
        186db4:	e3a01001 	mov	r1, #1	; 0x1
        186db8:	eb671e55 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        186dbc:	e28dd008 	add	sp, sp, #8	; 0x8
        186dc0:	e59400a8 	ldr	r0, [r4, #168]	; fField168
        186dc4:	e1a00820 	mov	r0, r0, lsr #16
        186dc8:	e5941098 	ldr	r1, [r4, #152]	; fField152
        186dcc:	e0800001 	add	r0, r0, r1
        186dd0:	e2801002 	add	r1, r0, #2	; 0x2
        186dd4:	e5940016 	ldr	r0, [r4, #22]	; fField22
        186dd8:	e1a00820 	mov	r0, r0, lsr #16
        186ddc:	e0400001 	sub	r0, r0, r1
        186de0:	e1a06800 	mov	r6, r0, lsl #16
        186de4:	e1a06846 	mov	r6, r6, asr #16
        186de8:	e1a00809 	mov	r0, r9, lsl #16
        186dec:	e1a00840 	mov	r0, r0, asr #16
        186df0:	e2401007 	sub	r1, r0, #7	; 0x7
        186df4:	e5cd1001 	strb	r1, [sp, #1]
        186df8:	e1a01441 	mov	r1, r1, asr #8
        186dfc:	e5cd1000 	strb	r1, [sp]
        186e00:	e5cd0005 	strb	r0, [sp, #5]
        186e04:	e1a00440 	mov	r0, r0, asr #8
        186e08:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        186e0c:	e28d000c 	add	r0, sp, #12	; 0xc
        186e10:	eb65857b 	bl	1ae8404 <$KeyCommandModifiers(RefVar const &)>
        186e14:	e1a07000 	mov	r7, r0
        186e18:	e3100402 	tst	r0, #33554432	; 0x2000000
        186e1c:	0a00000d 	beq	186e58 <TPickView::RealDraw(TRect &)+0x8a8>
        186e20:	e5cd6007 	strb	r6, [sp, #7]
        186e24:	e1a00446 	mov	r0, r6, asr #8
        186e28:	e5cd0006 	strb	r0, [sp, #6]
        186e2c:	e2460009 	sub	r0, r6, #9	; 0x9
        186e30:	e5cd0003 	strb	r0, [sp, #3]
        186e34:	e1a00440 	mov	r0, r0, asr #8
        186e38:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        186e3c:	e1a0100d 	mov	r1, sp
        186e40:	e3a02000 	mov	r2, #0	; 0x0
        186e44:	e59d0038 	ldr	r0, [sp, #56]	; fField56
        186e48:	eb651e34 	bl	1ace720 <$DrawBitmap(RefVar const &, TRect *, long)>
        186e4c:	e246000b 	sub	r0, r6, #11	; 0xb
        186e50:	e1a06800 	mov	r6, r0, lsl #16
        186e54:	e1a06846 	mov	r6, r6, asr #16
        186e58:	e3170301 	tst	r7, #67108864	; 0x4000000
        186e5c:	0a00000d 	beq	186e98 <TPickView::RealDraw(TRect &)+0x8e8>
        186e60:	e5cd6007 	strb	r6, [sp, #7]
        186e64:	e1a00446 	mov	r0, r6, asr #8
        186e68:	e5cd0006 	strb	r0, [sp, #6]
        186e6c:	e2460009 	sub	r0, r6, #9	; 0x9
        186e70:	e5cd0003 	strb	r0, [sp, #3]
        186e74:	e1a00440 	mov	r0, r0, asr #8
        186e78:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        186e7c:	e1a0100d 	mov	r1, sp
        186e80:	e3a02000 	mov	r2, #0	; 0x0
        186e84:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        186e88:	eb651e24 	bl	1ace720 <$DrawBitmap(RefVar const &, TRect *, long)>
        186e8c:	e246000b 	sub	r0, r6, #11	; 0xb
        186e90:	e1a06800 	mov	r6, r0, lsl #16
        186e94:	e1a06846 	mov	r6, r6, asr #16
        186e98:	e3170201 	tst	r7, #268435456	; 0x10000000
        186e9c:	0a00000d 	beq	186ed8 <TPickView::RealDraw(TRect &)+0x928>
        186ea0:	e5cd6007 	strb	r6, [sp, #7]
        186ea4:	e1a00446 	mov	r0, r6, asr #8
        186ea8:	e5cd0006 	strb	r0, [sp, #6]
        186eac:	e2460009 	sub	r0, r6, #9	; 0x9
        186eb0:	e5cd0003 	strb	r0, [sp, #3]
        186eb4:	e1a00440 	mov	r0, r0, asr #8
        186eb8:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        186ebc:	e1a0100d 	mov	r1, sp
        186ec0:	e3a02000 	mov	r2, #0	; 0x0
        186ec4:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        186ec8:	eb651e14 	bl	1ace720 <$DrawBitmap(RefVar const &, TRect *, long)>
        186ecc:	e246000c 	sub	r0, r6, #12	; 0xc
        186ed0:	e1a06800 	mov	r6, r0, lsl #16
        186ed4:	e1a06846 	mov	r6, r6, asr #16
        186ed8:	e3170202 	tst	r7, #536870912	; 0x20000000
        186edc:	0a00000a 	beq	186f0c <TPickView::RealDraw(TRect &)+0x95c>
        186ee0:	e5cd6007 	strb	r6, [sp, #7]
        186ee4:	e1a00446 	mov	r0, r6, asr #8
        186ee8:	e5cd0006 	strb	r0, [sp, #6]
        186eec:	e2460005 	sub	r0, r6, #5	; 0x5
        186ef0:	e5cd0003 	strb	r0, [sp, #3]
        186ef4:	e1a00440 	mov	r0, r0, asr #8
        186ef8:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        186efc:	e1a0100d 	mov	r1, sp
        186f00:	e3a02000 	mov	r2, #0	; 0x0
        186f04:	e59d002c 	ldr	r0, [sp, #44]
        186f08:	eb651e04 	bl	1ace720 <$DrawBitmap(RefVar const &, TRect *, long)>
        186f0c:	e28dd008 	add	sp, sp, #8	; 0x8
        186f10:	e28dd004 	add	sp, sp, #4	; 0x4
        186f14:	e59d0000 	ldr	r0, [sp]
        186f18:	eb68f0a7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186f1c:	e28dd00c 	add	sp, sp, #12	; 0xc
        186f20:	e2855001 	add	r5, r5, #1	; 0x1
        186f24:	e5940088 	ldr	r0, [r4, #136]	; fField136
        186f28:	e1500005 	cmp	r0, r5
        186f2c:	cafffdcc 	bgt	186664 <TPickView::RealDraw(TRect &)+0xb4>
        186f30:	e5940074 	ldr	r0, [r4, #116]	; fField116
        186f34:	e3700001 	cmn	r0, #1	; 0x1
        186f38:	12841074 	addne	r1, r4, #116	; 0x74
        186f3c:	11a00004 	movne	r0, r4
        186f40:	1b652a5f 	blne	1ad18c4 <TPickView::$InvertItem(PickStuff *)>
        186f44:	e59d000c 	ldr	r0, [sp, #12]
        186f48:	eb68f09b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186f4c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        186f50:	eb68f099 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186f54:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        186f58:	006848f8 	streqd	r4, [r8], -#136	; fField136
        186f5c:	62616420 	rsbvs	r6, r1, #536870912	; 0x20000000
        186f60:	7374726f 	cmnvc	r4, #-268435450	; 0xf0000006
        186f64:	6b65426f 	blvs	1ad7928 <$FGetPointsArray__FRC6RefVarT1+0xdac>
        186f68:	756e6473 	strvcb	r6, [lr, -#1139]!
        186f6c:	20667261 	rsbcs	r7, r6, r1, ror #4
        186f70:	6d650000 	stcvsl	0, cr0, [r5]
    */
}

/**
 * Symbol: TPickView::Hide(void)
 * Address: 00186f74
 */
TPickView::Hide(void) {
    /*
        186f74:	e1a0c00d 	mov	ip, sp
        186f78:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        186f7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        186f80:	e1a04000 	mov	r4, r0
        186f84:	e24dd004 	sub	sp, sp, #4	; 0x4
        186f88:	e5900008 	ldr	r0, [r0, #8]
        186f8c:	e3100001 	tst	r0, #1	; 0x1
        186f90:	0a000006 	beq	186fb0 <TPickView::Hide(void)+0x3c>
        186f94:	e5d400b8 	ldrb	r0, [r4, #184]	; fField184
        186f98:	e3300000 	teq	r0, #0	; 0x0
        186f9c:	1a000003 	bne	186fb0 <TPickView::Hide(void)+0x3c>
        186fa0:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        186fa4:	e3300000 	teq	r0, #0	; 0x0
        186fa8:	13a00001 	movne	r0, #1	; 0x1
        186fac:	1a000000 	bne	186fb4 <TPickView::Hide(void)+0x40>
        186fb0:	e3a00000 	mov	r0, #0	; 0x0
        186fb4:	e20050ff 	and	r5, r0, #255	; 0xff
        186fb8:	e3a0001a 	mov	r0, #26	; 0x1a
        186fbc:	eb68ec62 	bl	1bc214c <$AllocateRefHandle(long)>
        186fc0:	e58d0000 	str	r0, [sp]
        186fc4:	e1a0200d 	mov	r2, sp
        186fc8:	e2840024 	add	r0, r4, #36	; 0x24
        186fcc:	e59f109c 	ldr	r1, [pc, #9c]	; 187070 <TPickView::Hide(void)+0xfc>
        186fd0:	eb68fce4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        186fd4:	e59d0000 	ldr	r0, [sp]
        186fd8:	eb68f077 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        186fdc:	e1a00004 	mov	r0, r4
        186fe0:	eb690d63 	bl	1bca574 <TView::$Hide(void)>
        186fe4:	e3350000 	teq	r5, #0	; 0x0
        186fe8:	0a000032 	beq	1870b8 <TPickView::Hide(void)+0x144>
        186fec:	e24dd004 	sub	sp, sp, #4	; 0x4
        186ff0:	e59f107c 	ldr	r1, [pc, #7c]	; 187074 <TPickView::Hide(void)+0x100>
        186ff4:	e1a00004 	mov	r0, r4
        186ff8:	eb690d52 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        186ffc:	eb68ec52 	bl	1bc214c <$AllocateRefHandle(long)>
        187000:	e40d0004 	str	r0, [sp], -#4	; fField4
        187004:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        187008:	e5900000 	ldr	r0, [r0]
        18700c:	e3a06002 	mov	r6, #2	; 0x2
        187010:	e59f5060 	ldr	r5, [pc, #60]	; 187078 <TPickView::Hide(void)+0x104>	; fField60
        187014:	e3300002 	teq	r0, #2	; 0x2
        187018:	0a000017 	beq	18707c <TPickView::Hide(void)+0x108>
        18701c:	e24dd004 	sub	sp, sp, #4	; 0x4
        187020:	e1a0200d 	mov	r2, sp
        187024:	e1a01005 	mov	r1, r5
        187028:	e28d0008 	add	r0, sp, #8	; 0x8
        18702c:	e3a03000 	mov	r3, #0	; 0x0
        187030:	eb68f48f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        187034:	e24dd004 	sub	sp, sp, #4	; 0x4
        187038:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18703c:	e3300000 	teq	r0, #0	; 0x0
        187040:	0a000008 	beq	187068 <TPickView::Hide(void)+0xf4>
        187044:	e1a00006 	mov	r0, r6
        187048:	eb68ec3f 	bl	1bc214c <$AllocateRefHandle(long)>
        18704c:	e58d0000 	str	r0, [sp]
        187050:	e1a0200d 	mov	r2, sp
        187054:	e1a01005 	mov	r1, r5
        187058:	e28d000c 	add	r0, sp, #12	; 0xc
        18705c:	eb68f05c 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        187060:	e59d0000 	ldr	r0, [sp]
        187064:	eb68f054 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187068:	e28dd008 	add	sp, sp, #8	; 0x8
        18706c:	ea00000e 	b	1870ac <TPickView::Hide(void)+0x138>
        187070:	00681e38 	rsbeq	r1, r8, r8, lsr lr
        187074:	00682290 	streqb	r2, [r8], -#32
        187078:	00683e60 	rsbeq	r3, r8, r0, ror #28
        18707c:	e3a03000 	mov	r3, #0	; 0x0
        187080:	e92d0008 	stmdb	sp!, {r3}
        187084:	e1a00006 	mov	r0, r6
        187088:	eb68ec2f 	bl	1bc214c <$AllocateRefHandle(long)>
        18708c:	e58d0004 	str	r0, [sp, #4]	; fField4
        187090:	e28d2004 	add	r2, sp, #4	; 0x4
        187094:	e1a01005 	mov	r1, r5
        187098:	e1a00004 	mov	r0, r4
        18709c:	e3a03001 	mov	r3, #1	; 0x1
        1870a0:	eb69114e 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        1870a4:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1870a8:	eb68f043 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1870ac:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1870b0:	eb68f041 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1870b4:	e28dd004 	add	sp, sp, #4	; 0x4
        1870b8:	e3e00000 	mvn	r0, #0	; 0x0
        1870bc:	e5a40074 	str	r0, [r4, #116]!	; fField116
        1870c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::RealDoCommand(RefVar const &)
 * Address: 001870c4
 */
TPickView::RealDoCommand(RefVar const &) {
    /*
        1870c4:	e1a0c00d 	mov	ip, sp
        1870c8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1870cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1870d0:	e1a05000 	mov	r5, r0
        1870d4:	e1a04001 	mov	r4, r1
        1870d8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1870dc:	e3a00002 	mov	r0, #2	; 0x2
        1870e0:	eb68ec19 	bl	1bc214c <$AllocateRefHandle(long)>
        1870e4:	e58d0008 	str	r0, [sp, #8]
        1870e8:	e3a00002 	mov	r0, #2	; 0x2
        1870ec:	eb68ec16 	bl	1bc214c <$AllocateRefHandle(long)>
        1870f0:	e58d0004 	str	r0, [sp, #4]	; fField4
        1870f4:	e1a00004 	mov	r0, r4
        1870f8:	eb647c92 	bl	1aa6348 <$CommandID(RefVar const &)>
        1870fc:	e59f6070 	ldr	r6, [pc, #70]	; 187174 <TPickView::RealDoCommand(RefVar const &)+0xb0>
        187100:	e3a07000 	mov	r7, #0	; 0x0
        187104:	e330000b 	teq	r0, #11	; 0xb
        187108:	0a00001b 	beq	18717c <TPickView::RealDoCommand(RefVar const &)+0xb8>
        18710c:	e3300036 	teq	r0, #54	; 0x36
        187110:	1a00005b 	bne	187284 <TPickView::RealDoCommand(RefVar const &)+0x1c0>
        187114:	e24dd008 	sub	sp, sp, #8	; 0x8
        187118:	e3a00001 	mov	r0, #1	; 0x1
        18711c:	e5c500b8 	strb	r0, [r5, #184]	; fField184
        187120:	e3a0001a 	mov	r0, #26	; 0x1a
        187124:	eb68ec08 	bl	1bc214c <$AllocateRefHandle(long)>
        187128:	e58d0004 	str	r0, [sp, #4]	; fField4
        18712c:	e28d2004 	add	r2, sp, #4	; 0x4
        187130:	e2850024 	add	r0, r5, #36	; 0x24
        187134:	e59f103c 	ldr	r1, [pc, #3c]	; 187178 <TPickView::RealDoCommand(RefVar const &)+0xb4>
        187138:	eb68fc8a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        18713c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        187140:	eb68f01d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187144:	e1a00004 	mov	r0, r4
        187148:	eb647c84 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        18714c:	e59d100c 	ldr	r1, [sp, #12]
        187150:	e5810000 	str	r0, [r1]
        187154:	e3300002 	teq	r0, #2	; 0x2
        187158:	0a00002a 	beq	187208 <TPickView::RealDoCommand(RefVar const &)+0x144>
        18715c:	e28d2008 	add	r2, sp, #8	; 0x8
        187160:	e28d1014 	add	r1, sp, #20	; 0x14
        187164:	e28d000c 	add	r0, sp, #12	; 0xc
        187168:	e3a03010 	mov	r3, #16	; 0x10
        18716c:	ebfe8926 	bl	12960c <FromObject(RefVar const &, char *, long &, long)>
        187170:	ea000028 	b	187218 <TPickView::RealDoCommand(RefVar const &)+0x154>
        187174:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        187178:	00681e38 	rsbeq	r1, r8, r8, lsr lr
        18717c:	e24dd008 	sub	sp, sp, #8	; 0x8
        187180:	e3a00002 	mov	r0, #2	; 0x2
        187184:	eb68ebf0 	bl	1bc214c <$AllocateRefHandle(long)>
        187188:	e58d0000 	str	r0, [sp]
        18718c:	e1a0000d 	mov	r0, sp
        187190:	eb64f851 	bl	1ac52dc <$FClicker>
        187194:	e59d0000 	ldr	r0, [sp]
        187198:	eb68f007 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18719c:	e1a00004 	mov	r0, r4
        1871a0:	eb647c6c 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1871a4:	eb647011 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        1871a8:	e1a01000 	mov	r1, r0
        1871ac:	e28d2014 	add	r2, sp, #20	; 0x14
        1871b0:	e1a00005 	mov	r0, r5
        1871b4:	eb65361c 	bl	1ad4a2c <TPickView::$TrackStroke(TStrokePublic *, PickStuff *)>
        1871b8:	e1a01005 	mov	r1, r5
        1871bc:	e3a00036 	mov	r0, #54	; 0x36
        1871c0:	e59d2014 	ldr	r2, [sp, #20]	; fField20
        1871c4:	eb647c5d 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1871c8:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        1871cc:	e5810000 	str	r0, [r1]
        1871d0:	e28d1014 	add	r1, sp, #20	; 0x14
        1871d4:	e59f0028 	ldr	r0, [pc, #28]	; 187204 <TPickView::RealDoCommand(RefVar const &)+0x140>	; fField28
        1871d8:	e3a02010 	mov	r2, #16	; 0x10
        1871dc:	ebfe87f6 	bl	1291bc <ToObject(RefVar const &, char *, long)>
        1871e0:	e59d100c 	ldr	r1, [sp, #12]
        1871e4:	e5810000 	str	r0, [r1]
        1871e8:	e28d100c 	add	r1, sp, #12	; 0xc
        1871ec:	e28d0010 	add	r0, sp, #16	; 0x10
        1871f0:	eb647c5b 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        1871f4:	e28d1010 	add	r1, sp, #16	; 0x10
        1871f8:	e5960000 	ldr	r0, [r6]
        1871fc:	eb64258d 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        187200:	ea000019 	b	18726c <TPickView::RealDoCommand(RefVar const &)+0x1a8>
        187204:	006848d0 	ldreqd	r4, [r8], -#128	; fField128
        187208:	e1a00004 	mov	r0, r4
        18720c:	eb647c51 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        187210:	e58d0014 	str	r0, [sp, #20]	; fField20
        187214:	e5cd7018 	strb	r7, [sp, #24]
        187218:	e28d1014 	add	r1, sp, #20	; 0x14
        18721c:	e1a00005 	mov	r0, r5
        187220:	eb652dc9 	bl	1ad294c <TPickView::$PickItem(PickStuff *)>
        187224:	e3300000 	teq	r0, #0	; 0x0
        187228:	15d51030 	ldrneb	r1, [r5, #48]	; fField48
        18722c:	13310000 	teqne	r1, #0	; 0x0
        187230:	0a00000d 	beq	18726c <TPickView::RealDoCommand(RefVar const &)+0x1a8>
        187234:	e590101c 	ldr	r1, [r0, #28]	; fField28
        187238:	e1a02000 	mov	r2, r0
        18723c:	e24dd004 	sub	sp, sp, #4	; 0x4
        187240:	e3a0002a 	mov	r0, #42	; 0x2a
        187244:	e5965000 	ldr	r5, [r6]
        187248:	eb647c3c 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        18724c:	eb68ebbe 	bl	1bc214c <$AllocateRefHandle(long)>
        187250:	e58d0000 	str	r0, [sp]
        187254:	e1a0100d 	mov	r1, sp
        187258:	e1a00005 	mov	r0, r5
        18725c:	eb642575 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        187260:	e59d0000 	ldr	r0, [sp]
        187264:	eb68efd4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187268:	e28dd004 	add	sp, sp, #4	; 0x4
        18726c:	e1a00004 	mov	r0, r4
        187270:	e3a01001 	mov	r1, #1	; 0x1
        187274:	eb647c36 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        187278:	e3a00001 	mov	r0, #1	; 0x1
        18727c:	e28dd008 	add	sp, sp, #8	; 0x8
        187280:	ea000002 	b	187290 <TPickView::RealDoCommand(RefVar const &)+0x1cc>
        187284:	e1a01004 	mov	r1, r4
        187288:	e1a00005 	mov	r0, r5
        18728c:	eb645f36 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
        187290:	e1a04000 	mov	r4, r0
        187294:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        187298:	eb68efc7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18729c:	e59d0008 	ldr	r0, [sp, #8]
        1872a0:	eb68efc5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1872a4:	e1a00004 	mov	r0, r4
        1872a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::GetGridItemRect(PickStuff *, TRect *)
 * Address: 001872ac
 */
TPickView::GetGridItemRect(PickStuff *, TRect *) {
    /*
        1872ac:	e1a0c00d 	mov	ip, sp
        1872b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1872b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1872b8:	e1a06000 	mov	r6, r0
        1872bc:	e1a05001 	mov	r5, r1
        1872c0:	e1a04002 	mov	r4, r2
        1872c4:	eb652560 	bl	1ad084c <TPickView::$GetItemRect(PickStuff *, TRect *)>
        1872c8:	e5960040 	ldr	r0, [r6, #64]	; fField64
        1872cc:	e5901000 	ldr	r1, [r0]
        1872d0:	e5950000 	ldr	r0, [r5]
        1872d4:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
        1872d8:	e3300000 	teq	r0, #0	; 0x0
        1872dc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1872e0:	e596109c 	ldr	r1, [r6, #156]	; fField156
        1872e4:	e5903000 	ldr	r3, [r0]
        1872e8:	e0811003 	add	r1, r1, r3
        1872ec:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1872f0:	e590c014 	ldr	ip, [r0, #20]	; fField20
        1872f4:	e08ce002 	add	lr, ip, r2
        1872f8:	e595c00c 	ldr	ip, [r5, #12]
        1872fc:	e0211e9c 	mla	r1, ip, lr, r1
        187300:	e5b6c08c 	ldr	ip, [r6, #140]!	; fField140
        187304:	e08c3003 	add	r3, ip, r3
        187308:	e590c010 	ldr	ip, [r0, #16]	; fField16
        18730c:	e08c2002 	add	r2, ip, r2
        187310:	e5b5c008 	ldr	ip, [r5, #8]!
        187314:	e022329c 	mla	r2, ip, r2, r3
        187318:	e5943002 	ldr	r3, [r4, #2]	; fField2
        18731c:	e1a03823 	mov	r3, r3, lsr #16
        187320:	e0832002 	add	r2, r3, r2
        187324:	e5c42003 	strb	r2, [r4, #3]
        187328:	e1a02442 	mov	r2, r2, asr #8
        18732c:	e5c42002 	strb	r2, [r4, #2]	; fField2
        187330:	e5942000 	ldr	r2, [r4]
        187334:	e1a02822 	mov	r2, r2, lsr #16
        187338:	e0821001 	add	r1, r2, r1
        18733c:	e5c41001 	strb	r1, [r4, #1]
        187340:	e1a01441 	mov	r1, r1, asr #8
        187344:	e5c41000 	strb	r1, [r4]
        187348:	e5942002 	ldr	r2, [r4, #2]	; fField2
        18734c:	e1a02822 	mov	r2, r2, lsr #16
        187350:	e5901010 	ldr	r1, [r0, #16]	; fField16
        187354:	e0821001 	add	r1, r2, r1
        187358:	e5c41007 	strb	r1, [r4, #7]
        18735c:	e1a01441 	mov	r1, r1, asr #8
        187360:	e5c41006 	strb	r1, [r4, #6]
        187364:	e5900014 	ldr	r0, [r0, #20]	; fField20
        187368:	e5941000 	ldr	r1, [r4]
        18736c:	e1a01821 	mov	r1, r1, lsr #16
        187370:	e0800001 	add	r0, r0, r1
        187374:	e5c40005 	strb	r0, [r4, #5]
        187378:	e1a00440 	mov	r0, r0, asr #8
        18737c:	e5c40004 	strb	r0, [r4, #4]	; fField4
        187380:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::GetItemRect(PickStuff *, TRect *)
 * Address: 00187384
 */
TPickView::GetItemRect(PickStuff *, TRect *) {
    /*
        187384:	e1a0c00d 	mov	ip, sp
        187388:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        18738c:	e24cb004 	sub	fp, ip, #4	; 0x4
        187390:	e1a04000 	mov	r4, r0
        187394:	e1a05002 	mov	r5, r2
        187398:	e3a06000 	mov	r6, #0	; 0x0
        18739c:	e5910000 	ldr	r0, [r1]
        1873a0:	e3300000 	teq	r0, #0	; 0x0
        1873a4:	0a000004 	beq	1873bc <TPickView::GetItemRect(PickStuff *, TRect *)+0x38>
        1873a8:	e5941038 	ldr	r1, [r4, #56]	; fField56
        1873ac:	e5911000 	ldr	r1, [r1]
        1873b0:	e0811080 	add	r1, r1, r0, lsl #1
        1873b4:	e5116002 	ldr	r6, [r1, -#2]	; fField2
        1873b8:	e1a06846 	mov	r6, r6, asr #16
        1873bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1873c0:	e5941038 	ldr	r1, [r4, #56]	; fField56
        1873c4:	e5911000 	ldr	r1, [r1]
        1873c8:	e7917080 	ldr	r7, [r1, r0, lsl #1]
        1873cc:	e1a07847 	mov	r7, r7, asr #16
        1873d0:	e1a0100d 	mov	r1, sp
        1873d4:	e1a00004 	mov	r0, r4
        1873d8:	eb690c58 	bl	1bca540 <TView::$GetChildOrigin(TPoint *)>
        1873dc:	e5940012 	ldr	r0, [r4, #18]	; fField18
        1873e0:	e1a00820 	mov	r0, r0, lsr #16
        1873e4:	e5c50003 	strb	r0, [r5, #3]
        1873e8:	e1a00440 	mov	r0, r0, asr #8
        1873ec:	e5c50002 	strb	r0, [r5, #2]	; fField2
        1873f0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1873f4:	e1a00820 	mov	r0, r0, lsr #16
        1873f8:	e0801006 	add	r1, r0, r6
        1873fc:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        187400:	e0810000 	add	r0, r1, r0
        187404:	e5c50001 	strb	r0, [r5, #1]
        187408:	e1a00440 	mov	r0, r0, asr #8
        18740c:	e5c50000 	strb	r0, [r5]
        187410:	e5940016 	ldr	r0, [r4, #22]	; fField22
        187414:	e1a00820 	mov	r0, r0, lsr #16
        187418:	e5c50007 	strb	r0, [r5, #7]
        18741c:	e1a00440 	mov	r0, r0, asr #8
        187420:	e5c50006 	strb	r0, [r5, #6]
        187424:	e5940010 	ldr	r0, [r4, #16]	; fField16
        187428:	e1a00820 	mov	r0, r0, lsr #16
        18742c:	e0800007 	add	r0, r0, r7
        187430:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        187434:	e0800001 	add	r0, r0, r1
        187438:	e5c50005 	strb	r0, [r5, #5]
        18743c:	e1a00440 	mov	r0, r0, asr #8
        187440:	e5c50004 	strb	r0, [r5, #4]	; fField4
        187444:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::InvertItem(PickStuff *)
 * Address: 00187448
 */
TPickView::InvertItem(PickStuff *) {
    /*
        187448:	e1a0c00d 	mov	ip, sp
        18744c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        187450:	e24cb004 	sub	fp, ip, #4	; 0x4
        187454:	e24dd008 	sub	sp, sp, #8	; 0x8
        187458:	e1a0200d 	mov	r2, sp
        18745c:	eb6524ef 	bl	1ad0820 <TPickView::$GetGridItemRect(PickStuff *, TRect *)>
        187460:	e1a0000d 	mov	r0, sp
        187464:	eb6724fe 	bl	1b50864 <$InvertRect(Rect *)>
        187468:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::FlashItem(PickStuff *)
 * Address: 0018746c
 */
TPickView::FlashItem(PickStuff *) {
    /*
        18746c:	e1a0c00d 	mov	ip, sp
        187470:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        187474:	e24cb004 	sub	fp, ip, #4	; 0x4
        187478:	e1a05000 	mov	r5, r0
        18747c:	e1a04001 	mov	r4, r1
        187480:	e5910000 	ldr	r0, [r1]
        187484:	e3700001 	cmn	r0, #1	; 0x1
        187488:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        18748c:	e3a06000 	mov	r6, #0	; 0x0
        187490:	e3a00005 	mov	r0, #5	; 0x5
        187494:	eb647797 	bl	1aa52f8 <$Wait(unsigned long)>
        187498:	e1a01004 	mov	r1, r4
        18749c:	e1a00005 	mov	r0, r5
        1874a0:	eb652907 	bl	1ad18c4 <TPickView::$InvertItem(PickStuff *)>
        1874a4:	e2866001 	add	r6, r6, #1	; 0x1
        1874a8:	e3560003 	cmp	r6, #3	; 0x3
        1874ac:	bafffff7 	blt	187490 <TPickView::FlashItem(PickStuff *)+0x24>
        1874b0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::SubItem(TPoint &, PickStuff *)
 * Address: 001874b4
 */
TPickView::SubItem(TPoint &, PickStuff *) {
    /*
        1874b4:	e1a0c00d 	mov	ip, sp
        1874b8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1874bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1874c0:	e1a05000 	mov	r5, r0
        1874c4:	e1a06001 	mov	r6, r1
        1874c8:	e1a04002 	mov	r4, r2
        1874cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1874d0:	e3a0a000 	mov	sl, #0	; 0x0
        1874d4:	e5900040 	ldr	r0, [r0, #64]	; fField64
        1874d8:	e5900000 	ldr	r0, [r0]
        1874dc:	e5921000 	ldr	r1, [r2]
        1874e0:	e7907101 	ldr	r7, [r0, r1, lsl #2]	; fField2
        1874e4:	e3370000 	teq	r7, #0	; 0x0
        1874e8:	0a000025 	beq	187584 <TPickView::SubItem(TPoint &, PickStuff *)+0xd0>
        1874ec:	e3a00001 	mov	r0, #1	; 0x1
        1874f0:	e5c40004 	strb	r0, [r4, #4]	; fField4
        1874f4:	e3a09000 	mov	r9, #0	; 0x0
        1874f8:	e5970008 	ldr	r0, [r7, #8]
        1874fc:	e3500000 	cmp	r0, #0	; 0x0
        187500:	da00001d 	ble	18757c <TPickView::SubItem(TPoint &, PickStuff *)+0xc8>
        187504:	e3a08000 	mov	r8, #0	; 0x0
        187508:	e584900c 	str	r9, [r4, #12]
        18750c:	e597000c 	ldr	r0, [r7, #12]
        187510:	e3500000 	cmp	r0, #0	; 0x0
        187514:	da00000f 	ble	187558 <TPickView::SubItem(TPoint &, PickStuff *)+0xa4>
        187518:	e1a0200d 	mov	r2, sp
        18751c:	e5848008 	str	r8, [r4, #8]
        187520:	e1a01004 	mov	r1, r4
        187524:	e1a00005 	mov	r0, r5
        187528:	eb6524bc 	bl	1ad0820 <TPickView::$GetGridItemRect(PickStuff *, TRect *)>
        18752c:	e5960000 	ldr	r0, [r6]
        187530:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        187534:	e28d1004 	add	r1, sp, #4	; 0x4
        187538:	e28dd004 	add	sp, sp, #4	; 0x4
        18753c:	eb672cfe 	bl	1b5293c <$PtInRect(Point, Rect *)>
        187540:	e3300000 	teq	r0, #0	; 0x0
        187544:	1a00000e 	bne	187584 <TPickView::SubItem(TPoint &, PickStuff *)+0xd0>
        187548:	e2888001 	add	r8, r8, #1	; 0x1
        18754c:	e597000c 	ldr	r0, [r7, #12]
        187550:	e1500008 	cmp	r0, r8
        187554:	caffffef 	bgt	187518 <TPickView::SubItem(TPoint &, PickStuff *)+0x64>
        187558:	e33a0000 	teq	sl, #0	; 0x0
        18755c:	1a000004 	bne	187574 <TPickView::SubItem(TPoint &, PickStuff *)+0xc0>
        187560:	e2899001 	add	r9, r9, #1	; 0x1
        187564:	e5970008 	ldr	r0, [r7, #8]
        187568:	e1500009 	cmp	r0, r9
        18756c:	caffffe4 	bgt	187504 <TPickView::SubItem(TPoint &, PickStuff *)+0x50>
        187570:	ea000001 	b	18757c <TPickView::SubItem(TPoint &, PickStuff *)+0xc8>
        187574:	e33a0000 	teq	sl, #0	; 0x0
        187578:	1a000001 	bne	187584 <TPickView::SubItem(TPoint &, PickStuff *)+0xd0>
        18757c:	e3e00000 	mvn	r0, #0	; 0x0
        187580:	e5840000 	str	r0, [r4]
        187584:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::Item(TPoint &, PickStuff *)
 * Address: 00187588
 */
TPickView::Item(TPoint &, PickStuff *) {
    /*
        187588:	e1a0c00d 	mov	ip, sp
        18758c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        187590:	e24cb004 	sub	fp, ip, #4	; 0x4
        187594:	e1a05000 	mov	r5, r0
        187598:	e1a06001 	mov	r6, r1
        18759c:	e1a04002 	mov	r4, r2
        1875a0:	e3e00000 	mvn	r0, #0	; 0x0
        1875a4:	e3a07000 	mov	r7, #0	; 0x0
        1875a8:	e5820000 	str	r0, [r2]
        1875ac:	e5c27004 	strb	r7, [r2, #4]	; fField4
        1875b0:	e2851010 	add	r1, r5, #16	; 0x10
        1875b4:	e5960000 	ldr	r0, [r6]
        1875b8:	e50d0004 	str	r0, [sp, -#4]	; fField4
        1875bc:	eb672cde 	bl	1b5293c <$PtInRect(Point, Rect *)>
        1875c0:	e3300000 	teq	r0, #0	; 0x0
        1875c4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1875c8:	e5847000 	str	r7, [r4]
        1875cc:	e5950088 	ldr	r0, [r5, #136]	; fField136
        1875d0:	e3500000 	cmp	r0, #0	; 0x0
        1875d4:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1875d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1875dc:	e1a0200d 	mov	r2, sp
        1875e0:	e1a01004 	mov	r1, r4
        1875e4:	e1a00005 	mov	r0, r5
        1875e8:	eb652497 	bl	1ad084c <TPickView::$GetItemRect(PickStuff *, TRect *)>
        1875ec:	e5960000 	ldr	r0, [r6]
        1875f0:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1875f4:	e28d1004 	add	r1, sp, #4	; 0x4
        1875f8:	e28dd004 	add	sp, sp, #4	; 0x4
        1875fc:	eb672cce 	bl	1b5293c <$PtInRect(Point, Rect *)>
        187600:	e3300000 	teq	r0, #0	; 0x0
        187604:	0a000004 	beq	18761c <TPickView::Item(TPoint &, PickStuff *)+0x94>
        187608:	e1a02004 	mov	r2, r4
        18760c:	e1a01006 	mov	r1, r6
        187610:	e1a00005 	mov	r0, r5
        187614:	eb653500 	bl	1ad4a1c <TPickView::$SubItem(TPoint &, PickStuff *)>
        187618:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        18761c:	e5940000 	ldr	r0, [r4]
        187620:	e2800001 	add	r0, r0, #1	; 0x1
        187624:	e5840000 	str	r0, [r4]
        187628:	e28dd008 	add	sp, sp, #8	; 0x8
        18762c:	e5951088 	ldr	r1, [r5, #136]	; fField136
        187630:	e1510000 	cmp	r1, r0
        187634:	caffffe7 	bgt	1875d8 <TPickView::Item(TPoint &, PickStuff *)+0x50>
        187638:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::PickableItem(TPoint &, PickStuff *)
 * Address: 0018763c
 */
TPickView::PickableItem(TPoint &, PickStuff *) {
    /*
        18763c:	e1a0c00d 	mov	ip, sp
        187640:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        187644:	e24cb004 	sub	fp, ip, #4	; 0x4
        187648:	e1a05000 	mov	r5, r0
        18764c:	e1a06001 	mov	r6, r1
        187650:	e1a04002 	mov	r4, r2
        187654:	eb6551e4 	bl	1adbdec <TPickView::$Item(TPoint &, PickStuff *)>
        187658:	e5940000 	ldr	r0, [r4]
        18765c:	e3700001 	cmn	r0, #1	; 0x1
        187660:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        187664:	e24dd008 	sub	sp, sp, #8	; 0x8
        187668:	e3a07000 	mov	r7, #0	; 0x0
        18766c:	e5cd7004 	strb	r7, [sp, #4]	; fField4
        187670:	e1a0300d 	mov	r3, sp
        187674:	e28d2004 	add	r2, sp, #4	; 0x4
        187678:	e1a01004 	mov	r1, r4
        18767c:	e1a00005 	mov	r0, r5
        187680:	eb65246e 	bl	1ad0840 <TPickView::$GetItemFlags(PickStuff *, unsigned char *, unsigned short *)>
        187684:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        187688:	e3300000 	teq	r0, #0	; 0x0
        18768c:	1a00001a 	bne	1876fc <TPickView::PickableItem(TPoint &, PickStuff *)+0xc0>
        187690:	e24dd00c 	sub	sp, sp, #12	; 0xc
        187694:	e5960000 	ldr	r0, [r6]
        187698:	e58d0008 	str	r0, [sp, #8]
        18769c:	e1a0200d 	mov	r2, sp
        1876a0:	e1a01004 	mov	r1, r4
        1876a4:	e1a00005 	mov	r0, r5
        1876a8:	eb652467 	bl	1ad084c <TPickView::$GetItemRect(PickStuff *, TRect *)>
        1876ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        1876b0:	e28d1004 	add	r1, sp, #4	; 0x4
        1876b4:	e1a0000d 	mov	r0, sp
        1876b8:	eb004071 	bl	197884 <TRect::MidPoint( const(void))>
        1876bc:	e59d1000 	ldr	r1, [sp]
        1876c0:	e59d000c 	ldr	r0, [sp, #12]
        1876c4:	e28dd004 	add	sp, sp, #4	; 0x4
        1876c8:	e59d0006 	ldr	r0, [sp, #6]
        1876cc:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        1876d0:	e0400001 	sub	r0, r0, r1
        1876d4:	e59d100a 	ldr	r1, [sp, #10]
        1876d8:	e0410000 	sub	r0, r1, r0
        1876dc:	e5cd0009 	strb	r0, [sp, #9]
        1876e0:	e1a00440 	mov	r0, r0, asr #8
        1876e4:	e5cd0008 	strb	r0, [sp, #8]
        1876e8:	e1a02004 	mov	r2, r4
        1876ec:	e28d1008 	add	r1, sp, #8	; 0x8
        1876f0:	e1a00005 	mov	r0, r5
        1876f4:	eb6551c0 	bl	1adbdfc <TPickView::$PickableItem(TPoint &, PickStuff *)>
        1876f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1876fc:	e5d40004 	ldrb	r0, [r4, #4]	; fField4
        187700:	e3300000 	teq	r0, #0	; 0x0
        187704:	0a00004d 	beq	187840 <TPickView::PickableItem(TPoint &, PickStuff *)+0x204>
        187708:	e24dd004 	sub	sp, sp, #4	; 0x4
        18770c:	e28d3004 	add	r3, sp, #4	; 0x4
        187710:	e28d2008 	add	r2, sp, #8	; 0x8
        187714:	e1a00005 	mov	r0, r5
        187718:	e5941000 	ldr	r1, [r4]
        18771c:	eb6576e3 	bl	1ae52b0 <TPickView::$GetDisplayItem(long, unsigned char *, unsigned short *)>
        187720:	eb68ea89 	bl	1bc214c <$AllocateRefHandle(long)>
        187724:	e58d0000 	str	r0, [sp]
        187728:	e59f0114 	ldr	r0, [pc, #114]	; 187844 <TPickView::PickableItem(TPoint &, PickStuff *)+0x208>
        18772c:	e5900000 	ldr	r0, [r0]
        187730:	e5901000 	ldr	r1, [r0]
        187734:	e59d0000 	ldr	r0, [sp]
        187738:	e5900000 	ldr	r0, [r0]
        18773c:	eb68f2c1 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        187740:	e3300000 	teq	r0, #0	; 0x0
        187744:	0a00003a 	beq	187834 <TPickView::PickableItem(TPoint &, PickStuff *)+0x1f8>
        187748:	e24dd008 	sub	sp, sp, #8	; 0x8
        18774c:	e2841010 	add	r1, r4, #16	; 0x10
        187750:	e931500c 	ldmdb	r1!, {r2, r3, ip, lr}
        187754:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        187758:	e58d7008 	str	r7, [sp, #8]
        18775c:	e58d700c 	str	r7, [sp, #12]
        187760:	e28d2010 	add	r2, sp, #16	; 0x10
        187764:	e1a0100d 	mov	r1, sp
        187768:	e1a00005 	mov	r0, r5
        18776c:	eb65242b 	bl	1ad0820 <TPickView::$GetGridItemRect(PickStuff *, TRect *)>
        187770:	e5b50040 	ldr	r0, [r5, #64]!	; fField64
        187774:	e5900000 	ldr	r0, [r0]
        187778:	e5941000 	ldr	r1, [r4]
        18777c:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
        187780:	e5962002 	ldr	r2, [r6, #2]	; fField2
        187784:	e1a02822 	mov	r2, r2, lsr #16
        187788:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        18778c:	e5900000 	ldr	r0, [r0]
        187790:	e0411000 	sub	r1, r1, r0
        187794:	e0421001 	sub	r1, r2, r1
        187798:	e1a05801 	mov	r5, r1, lsl #16
        18779c:	e1a05845 	mov	r5, r5, asr #16
        1877a0:	e59d1012 	ldr	r1, [sp, #18]	; fField18
        1877a4:	e0410000 	sub	r0, r1, r0
        1877a8:	e5961000 	ldr	r1, [r6]
        1877ac:	e1a01821 	mov	r1, r1, lsr #16
        1877b0:	e0410000 	sub	r0, r1, r0
        1877b4:	e1a00800 	mov	r0, r0, lsl #16
        1877b8:	e1a00840 	mov	r0, r0, asr #16
        1877bc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1877c0:	e1a00100 	mov	r0, r0, lsl #2
        1877c4:	eb68ea60 	bl	1bc214c <$AllocateRefHandle(long)>
        1877c8:	e58d0000 	str	r0, [sp]
        1877cc:	e1a0600d 	mov	r6, sp
        1877d0:	e1a00105 	mov	r0, r5, lsl #2
        1877d4:	eb68ea5c 	bl	1bc214c <$AllocateRefHandle(long)>
        1877d8:	e58d0004 	str	r0, [sp, #4]	; fField4
        1877dc:	e28d5004 	add	r5, sp, #4	; 0x4
        1877e0:	e3a00002 	mov	r0, #2	; 0x2
        1877e4:	eb68ea58 	bl	1bc214c <$AllocateRefHandle(long)>
        1877e8:	e58d0008 	str	r0, [sp, #8]
        1877ec:	e28d0008 	add	r0, sp, #8	; 0x8
        1877f0:	e28d3024 	add	r3, sp, #36	; 0x24
        1877f4:	e1a01005 	mov	r1, r5
        1877f8:	e1a02006 	mov	r2, r6
        1877fc:	eb65492b 	bl	1ad9cb0 <$FPtInPicture__FRC6RefVarN31>
        187800:	e3300002 	teq	r0, #2	; 0x2
        187804:	13a05000 	movne	r5, #0	; 0x0
        187808:	03a05001 	moveq	r5, #1	; 0x1
        18780c:	e59d0000 	ldr	r0, [sp]
        187810:	eb68ee69 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187814:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        187818:	eb68ee67 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18781c:	e59d0008 	ldr	r0, [sp, #8]
        187820:	eb68ee65 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187824:	e3350000 	teq	r5, #0	; 0x0
        187828:	13e00000 	mvnne	r0, #0	; 0x0
        18782c:	15840000 	strne	r0, [r4]
        187830:	e28dd024 	add	sp, sp, #36	; 0x24
        187834:	e59d0000 	ldr	r0, [sp]
        187838:	eb68ee5f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18783c:	e28dd004 	add	sp, sp, #4	; 0x4
        187840:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        187844:	006837b0 	streqh	r3, [r8], -#112
    */
}

/**
 * Symbol: TPickView::__dt(void)
 * Address: 00187848
 */
TPickView::~TPickView(void) {
    /*
        187848:	e1a0c00d 	mov	ip, sp
        18784c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        187850:	e24cb004 	sub	fp, ip, #4	; 0x4
        187854:	e1a04000 	mov	r4, r0
        187858:	e1a05001 	mov	r5, r1
        18785c:	e59f00b0 	ldr	r0, [pc, #b0]	; 187914 <TPickView::__dt(void)+0xcc>
        187860:	e5840000 	str	r0, [r4]
        187864:	e5940038 	ldr	r0, [r4, #56]	; fField56
        187868:	e3300000 	teq	r0, #0	; 0x0
        18786c:	1b69660f 	blne	1be10b0 <$DisposHandle>
        187870:	e594003c 	ldr	r0, [r4, #60]	; fField60
        187874:	e3300000 	teq	r0, #0	; 0x0
        187878:	1b69660c 	blne	1be10b0 <$DisposHandle>
        18787c:	e5940040 	ldr	r0, [r4, #64]	; fField64
        187880:	e3300000 	teq	r0, #0	; 0x0
        187884:	0a00000e 	beq	1878c4 <TPickView::__dt(void)+0x7c>
        187888:	e3a06000 	mov	r6, #0	; 0x0
        18788c:	e5940088 	ldr	r0, [r4, #136]	; fField136
        187890:	e3500000 	cmp	r0, #0	; 0x0
        187894:	da000008 	ble	1878bc <TPickView::__dt(void)+0x74>
        187898:	e5940040 	ldr	r0, [r4, #64]	; fField64
        18789c:	e5900000 	ldr	r0, [r0]
        1878a0:	e7900106 	ldr	r0, [r0, r6, lsl #2]	; fField2
        1878a4:	e3300000 	teq	r0, #0	; 0x0
        1878a8:	1b69178c 	blne	1bcd6e0 <$__dl(void *)>
        1878ac:	e2866001 	add	r6, r6, #1	; 0x1
        1878b0:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1878b4:	e1500006 	cmp	r0, r6
        1878b8:	cafffff6 	bgt	187898 <TPickView::__dt(void)+0x50>
        1878bc:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1878c0:	eb6965fa 	bl	1be10b0 <$DisposHandle>
        1878c4:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        1878c8:	eb68ee3b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1878cc:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        1878d0:	eb68ee39 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1878d4:	e2846054 	add	r6, r4, #84	; 0x54
        1878d8:	e596001c 	ldr	r0, [r6, #28]	; fField28
        1878dc:	e3300000 	teq	r0, #0	; 0x0
        1878e0:	1b67177d 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        1878e4:	e5960000 	ldr	r0, [r6]
        1878e8:	eb68ee33 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1878ec:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1878f0:	eb68ee31 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1878f4:	e1a00004 	mov	r0, r4
        1878f8:	e3a01000 	mov	r1, #0	; 0x0
        1878fc:	eb6906e2 	bl	1bc948c <TView::$__dt(void)>
        187900:	e3150001 	tst	r5, #1	; 0x1
        187904:	11a00004 	movne	r0, r4
        187908:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        18790c:	1a6402ca 	bne	1a8843c <$__dl__8TxObjectSFPv>
        187910:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        187914:	00020ee0 	andeq	r0, r2, r0, ror #29
    */
}

/**
 * Symbol: TPickView::TrackStroke(TStrokePublic *, PickStuff *)
 * Address: 00187918
 */
TPickView::TrackStroke(TStrokePublic *, PickStuff *) {
    /*
        187918:	e1a0c00d 	mov	ip, sp
        18791c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        187920:	e24cb004 	sub	fp, ip, #4	; 0x4
        187924:	e1a06000 	mov	r6, r0
        187928:	e1a05001 	mov	r5, r1
        18792c:	e1a04002 	mov	r4, r2
        187930:	e1a00001 	mov	r0, r1
        187934:	e3a01001 	mov	r1, #1	; 0x1
        187938:	eb6448ef 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        18793c:	e59f00dc 	ldr	r0, [pc, #dc]	; 187a20 <TPickView::TrackStroke(TStrokePublic *, PickStuff *)+0x108>
        187940:	e5900000 	ldr	r0, [r0]
        187944:	e3a01000 	mov	r1, #0	; 0x0
        187948:	eb647655 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        18794c:	e3a00035 	mov	r0, #53	; 0x35
        187950:	eb64f22b 	bl	1ac4204 <$BusyBoxSend(long)>
        187954:	e24dd004 	sub	sp, sp, #4	; 0x4
        187958:	e1a01005 	mov	r1, r5
        18795c:	e1a0000d 	mov	r0, sp
        187960:	eb643436 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        187964:	e1a02004 	mov	r2, r4
        187968:	e1a0100d 	mov	r1, sp
        18796c:	e1a00006 	mov	r0, r6
        187970:	eb655121 	bl	1adbdfc <TPickView::$PickableItem(TPoint &, PickStuff *)>
        187974:	e5940000 	ldr	r0, [r4]
        187978:	e3700001 	cmn	r0, #1	; 0x1
        18797c:	11a01004 	movne	r1, r4
        187980:	11a00006 	movne	r0, r6
        187984:	1b6527ce 	blne	1ad18c4 <TPickView::$InvertItem(PickStuff *)>
        187988:	e1a00005 	mov	r0, r5
        18798c:	eb6427c4 	bl	1a918a4 <TStrokePublic::$Done(void)>
        187990:	e3300000 	teq	r0, #0	; 0x0
        187994:	1a000029 	bne	187a40 <TPickView::TrackStroke(TStrokePublic *, PickStuff *)+0x128>
        187998:	e24dd014 	sub	sp, sp, #20	; 0x14
        18799c:	e1a01005 	mov	r1, r5
        1879a0:	e28d0010 	add	r0, sp, #16	; 0x10
        1879a4:	eb643006 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        1879a8:	e1a0200d 	mov	r2, sp
        1879ac:	e28d1010 	add	r1, sp, #16	; 0x10
        1879b0:	e1a00006 	mov	r0, r6
        1879b4:	eb655110 	bl	1adbdfc <TPickView::$PickableItem(TPoint &, PickStuff *)>
        1879b8:	e59d1000 	ldr	r1, [sp]
        1879bc:	e5940000 	ldr	r0, [r4]
        1879c0:	e1310000 	teq	r1, r0
        1879c4:	059d1008 	ldreq	r1, [sp, #8]
        1879c8:	05942008 	ldreq	r2, [r4, #8]
        1879cc:	01310002 	teqeq	r1, r2
        1879d0:	059d100c 	ldreq	r1, [sp, #12]
        1879d4:	0594200c 	ldreq	r2, [r4, #12]
        1879d8:	01310002 	teqeq	r1, r2
        1879dc:	0a000010 	beq	187a24 <TPickView::TrackStroke(TStrokePublic *, PickStuff *)+0x10c>
        1879e0:	e3700001 	cmn	r0, #1	; 0x1
        1879e4:	11a01004 	movne	r1, r4
        1879e8:	11a00006 	movne	r0, r6
        1879ec:	1b6527b4 	blne	1ad18c4 <TPickView::$InvertItem(PickStuff *)>
        1879f0:	e59d0000 	ldr	r0, [sp]
        1879f4:	e3700001 	cmn	r0, #1	; 0x1
        1879f8:	11a0100d 	movne	r1, sp
        1879fc:	11a00006 	movne	r0, r6
        187a00:	1b6527af 	blne	1ad18c4 <TPickView::$InvertItem(PickStuff *)>
        187a04:	e1a00004 	mov	r0, r4
        187a08:	e1a0100d 	mov	r1, sp
        187a0c:	e8b11008 	ldmia	r1!, {r3, ip}
        187a10:	e8a01008 	stmia	r0!, {r3, ip}
        187a14:	e8911008 	ldmia	r1, {r3, ip}
        187a18:	e8801008 	stmia	r0, {r3, ip}
        187a1c:	ea000002 	b	187a2c <TPickView::TrackStroke(TStrokePublic *, PickStuff *)+0x114>
        187a20:	0c101934 	ldceq	9, cr1, [r0], -#208
        187a24:	e3a00001 	mov	r0, #1	; 0x1
        187a28:	eb647632 	bl	1aa52f8 <$Wait(unsigned long)>
        187a2c:	e28dd014 	add	sp, sp, #20	; 0x14
        187a30:	e1a00005 	mov	r0, r5
        187a34:	eb64279a 	bl	1a918a4 <TStrokePublic::$Done(void)>
        187a38:	e3300000 	teq	r0, #0	; 0x0
        187a3c:	0affffd5 	beq	187998 <TPickView::TrackStroke(TStrokePublic *, PickStuff *)+0x80>
        187a40:	e3a00036 	mov	r0, #54	; 0x36
        187a44:	eb64f1ee 	bl	1ac4204 <$BusyBoxSend(long)>
        187a48:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::PickItem(PickStuff *)
 * Address: 00187a4c
 */
TPickView::PickItem(PickStuff *) {
    /*
        187a4c:	e1a0c00d 	mov	ip, sp
        187a50:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        187a54:	e24cb004 	sub	fp, ip, #4	; 0x4
        187a58:	e1a04000 	mov	r4, r0
        187a5c:	e1a05001 	mov	r5, r1
        187a60:	e2801074 	add	r1, r0, #116	; 0x74
        187a64:	e1a00005 	mov	r0, r5
        187a68:	e8b01008 	ldmia	r0!, {r3, ip}
        187a6c:	e8a11008 	stmia	r1!, {r3, ip}
        187a70:	e8901008 	ldmia	r0, {r3, ip}
        187a74:	e8811008 	stmia	r1, {r3, ip}
        187a78:	e3a06000 	mov	r6, #0	; 0x0
        187a7c:	e5950000 	ldr	r0, [r5]
        187a80:	e3700001 	cmn	r0, #1	; 0x1
        187a84:	05c460b8 	streqb	r6, [r4, #184]	; fField184
        187a88:	01a00004 	moveq	r0, r4
        187a8c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        187a90:	e24dd00c 	sub	sp, sp, #12	; 0xc
        187a94:	e2840024 	add	r0, r4, #36	; 0x24
        187a98:	e1a0a000 	mov	sl, r0
        187a9c:	e5900000 	ldr	r0, [r0]
        187aa0:	e5900000 	ldr	r0, [r0]
        187aa4:	eb68e9a8 	bl	1bc214c <$AllocateRefHandle(long)>
        187aa8:	e58d0008 	str	r0, [sp, #8]
        187aac:	e59f12ac 	ldr	r1, [pc, #2ac]	; 187d60 <TPickView::PickItem(PickStuff *)+0x314>	; fField2
        187ab0:	e1a07001 	mov	r7, r1
        187ab4:	e28d0008 	add	r0, sp, #8	; 0x8
        187ab8:	e3a02000 	mov	r2, #0	; 0x0
        187abc:	eb68f1e9 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        187ac0:	eb68e9a1 	bl	1bc214c <$AllocateRefHandle(long)>
        187ac4:	e58d0004 	str	r0, [sp, #4]	; fField4
        187ac8:	e3a0001a 	mov	r0, #26	; 0x1a
        187acc:	eb68e99e 	bl	1bc214c <$AllocateRefHandle(long)>
        187ad0:	e58d0000 	str	r0, [sp]
        187ad4:	e1a0200d 	mov	r2, sp
        187ad8:	e1a01007 	mov	r1, r7
        187adc:	e28d0008 	add	r0, sp, #8	; 0x8
        187ae0:	eb68fa20 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        187ae4:	e59d0000 	ldr	r0, [sp]
        187ae8:	eb68edb3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187aec:	e1a01005 	mov	r1, r5
        187af0:	e1a00004 	mov	r0, r4
        187af4:	eb651f36 	bl	1acf7d4 <TPickView::$FlashItem(PickStuff *)>
        187af8:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        187afc:	e3300000 	teq	r0, #0	; 0x0
        187b00:	0a000003 	beq	187b14 <TPickView::PickItem(PickStuff *)+0xc8>
        187b04:	e1a00004 	mov	r0, r4
        187b08:	e5941000 	ldr	r1, [r4]
        187b0c:	e1a0e00f 	mov	lr, pc
        187b10:	e281f03c 	add	pc, r1, #60	; 0x3c
        187b14:	e24dd00c 	sub	sp, sp, #12	; 0xc
        187b18:	e3a09000 	mov	r9, #0	; 0x0
        187b1c:	e59f1240 	ldr	r1, [pc, #240]	; 187d64 <TPickView::PickItem(PickStuff *)+0x318>
        187b20:	e1a00004 	mov	r0, r4
        187b24:	eb690a87 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        187b28:	eb68e987 	bl	1bc214c <$AllocateRefHandle(long)>
        187b2c:	e58d0008 	str	r0, [sp, #8]
        187b30:	e3a00002 	mov	r0, #2	; 0x2
        187b34:	eb68e984 	bl	1bc214c <$AllocateRefHandle(long)>
        187b38:	e1a06000 	mov	r6, r0
        187b3c:	e3a00002 	mov	r0, #2	; 0x2
        187b40:	eb68e981 	bl	1bc214c <$AllocateRefHandle(long)>
        187b44:	e58d0004 	str	r0, [sp, #4]	; fField4
        187b48:	e3a00001 	mov	r0, #1	; 0x1
        187b4c:	eb645092 	bl	1a9bd9c <$MakeArray(long)>
        187b50:	eb68e97d 	bl	1bc214c <$AllocateRefHandle(long)>
        187b54:	e58d0000 	str	r0, [sp]
        187b58:	e59d0008 	ldr	r0, [sp, #8]
        187b5c:	e5900000 	ldr	r0, [r0]
        187b60:	e3300002 	teq	r0, #2	; 0x2
        187b64:	0a000004 	beq	187b7c <TPickView::PickItem(PickStuff *)+0x130>
        187b68:	e59f11f8 	ldr	r1, [pc, #1f8]	; 187d68 <TPickView::PickItem(PickStuff *)+0x31c>
        187b6c:	e28d0008 	add	r0, sp, #8	; 0x8
        187b70:	e3a02000 	mov	r2, #0	; 0x0
        187b74:	eb68f1bb 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        187b78:	e5860000 	str	r0, [r6]
        187b7c:	e5960000 	ldr	r0, [r6]
        187b80:	e3300002 	teq	r0, #2	; 0x2
        187b84:	1a00002f 	bne	187c48 <TPickView::PickItem(PickStuff *)+0x1fc>
        187b88:	e1a00004 	mov	r0, r4
        187b8c:	e5951000 	ldr	r1, [r5]
        187b90:	eb6575d4 	bl	1ae52e8 <TPickView::$GetKeyCommand(long)>
        187b94:	eb68e96c 	bl	1bc214c <$AllocateRefHandle(long)>
        187b98:	e1a08000 	mov	r8, r0
        187b9c:	e5900000 	ldr	r0, [r0]
        187ba0:	e3300002 	teq	r0, #2	; 0x2
        187ba4:	0a000023 	beq	187c38 <TPickView::PickItem(PickStuff *)+0x1ec>
        187ba8:	e24dd004 	sub	sp, sp, #4	; 0x4
        187bac:	e59f11b8 	ldr	r1, [pc, #1b8]	; 187d6c <TPickView::PickItem(PickStuff *)+0x320>
        187bb0:	e5911000 	ldr	r1, [r1]
        187bb4:	e5911000 	ldr	r1, [r1]
        187bb8:	eb68f1a8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        187bbc:	eb68e962 	bl	1bc214c <$AllocateRefHandle(long)>
        187bc0:	e58d0000 	str	r0, [sp]
        187bc4:	e5900000 	ldr	r0, [r0]
        187bc8:	e3300002 	teq	r0, #2	; 0x2
        187bcc:	0a000016 	beq	187c2c <TPickView::PickItem(PickStuff *)+0x1e0>
        187bd0:	e59f0198 	ldr	r0, [pc, #198]	; 187d70 <TPickView::PickItem(PickStuff *)+0x324>
        187bd4:	e5900000 	ldr	r0, [r0]
        187bd8:	e5900068 	ldr	r0, [r0, #104]
        187bdc:	e3300000 	teq	r0, #0	; 0x0
        187be0:	028d000c 	addeq	r0, sp, #12	; 0xc
        187be4:	0b690a5c 	bleq	1bca55c <$GetView(RefVar const &)>
        187be8:	e3300000 	teq	r0, #0	; 0x0
        187bec:	01a00004 	moveq	r0, r4
        187bf0:	e3300000 	teq	r0, #0	; 0x0
        187bf4:	0a00000c 	beq	187c2c <TPickView::PickItem(PickStuff *)+0x1e0>
        187bf8:	e59a1000 	ldr	r1, [sl]
        187bfc:	e5912000 	ldr	r2, [r1]
        187c00:	e59d1008 	ldr	r1, [sp, #8]
        187c04:	e5812000 	str	r2, [r1]
        187c08:	e1a0100d 	mov	r1, sp
        187c0c:	eb658200 	bl	1ae8414 <$SendKeyMessage(TView *, RefVar const &)>
        187c10:	e3a09001 	mov	r9, #1	; 0x1
        187c14:	e28d000c 	add	r0, sp, #12	; 0xc
        187c18:	eb690a4f 	bl	1bca55c <$GetView(RefVar const &)>
        187c1c:	e3300000 	teq	r0, #0	; 0x0
        187c20:	13a02000 	movne	r2, #0	; 0x0
        187c24:	13a01000 	movne	r1, #0	; 0x0
        187c28:	1b690e6d 	blne	1bcb5e4 <TView::$Select(unsigned char, unsigned char)>
        187c2c:	e59d0000 	ldr	r0, [sp]
        187c30:	eb68ed61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187c34:	e28dd004 	add	sp, sp, #4	; 0x4
        187c38:	e1a00008 	mov	r0, r8
        187c3c:	eb68ed5e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187c40:	e3390000 	teq	r9, #0	; 0x0
        187c44:	1a000057 	bne	187da8 <TPickView::PickItem(PickStuff *)+0x35c>
        187c48:	e59f1124 	ldr	r1, [pc, #124]	; 187d74 <TPickView::PickItem(PickStuff *)+0x328>	; fField124
        187c4c:	e1a00004 	mov	r0, r4
        187c50:	eb690a3c 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        187c54:	e3100003 	tst	r0, #3	; 0x3
        187c58:	01a00140 	moveq	r0, r0, asr #2
        187c5c:	0a000000 	beq	187c64 <TPickView::PickItem(PickStuff *)+0x218>
        187c60:	eb68e92d 	bl	1bc211c <$_RINTError(long)>
        187c64:	e5951000 	ldr	r1, [r5]
        187c68:	e0800001 	add	r0, r0, r1
        187c6c:	e1a00100 	mov	r0, r0, lsl #2
        187c70:	e1a08000 	mov	r8, r0
        187c74:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        187c78:	e5810000 	str	r0, [r1]
        187c7c:	e5d50004 	ldrb	r0, [r5, #4]	; fField4
        187c80:	e3300000 	teq	r0, #0	; 0x0
        187c84:	0a000022 	beq	187d14 <TPickView::PickItem(PickStuff *)+0x2c8>
        187c88:	e24dd00c 	sub	sp, sp, #12	; 0xc
        187c8c:	e59f00e4 	ldr	r0, [pc, #e4]	; 187d78 <TPickView::PickItem(PickStuff *)+0x32c>
        187c90:	eb68e935 	bl	1bc216c <$Clone(RefVar const &)>
        187c94:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        187c98:	e5810000 	str	r0, [r1]
        187c9c:	e1a00008 	mov	r0, r8
        187ca0:	eb68e929 	bl	1bc214c <$AllocateRefHandle(long)>
        187ca4:	e58d0000 	str	r0, [sp]
        187ca8:	e1a0200d 	mov	r2, sp
        187cac:	e59f10c8 	ldr	r1, [pc, #c8]	; 187d7c <TPickView::PickItem(PickStuff *)+0x330>
        187cb0:	e28d0010 	add	r0, sp, #16	; 0x10
        187cb4:	eb68f9ab 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        187cb8:	e59d0000 	ldr	r0, [sp]
        187cbc:	eb68ed3e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187cc0:	e5950008 	ldr	r0, [r5, #8]
        187cc4:	e1a00100 	mov	r0, r0, lsl #2
        187cc8:	eb68e91f 	bl	1bc214c <$AllocateRefHandle(long)>
        187ccc:	e58d0004 	str	r0, [sp, #4]	; fField4
        187cd0:	e28d2004 	add	r2, sp, #4	; 0x4
        187cd4:	e59f10a4 	ldr	r1, [pc, #a4]	; 187d80 <TPickView::PickItem(PickStuff *)+0x334>
        187cd8:	e28d0010 	add	r0, sp, #16	; 0x10
        187cdc:	eb68f9a1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        187ce0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        187ce4:	eb68ed34 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187ce8:	e5b5000c 	ldr	r0, [r5, #12]!
        187cec:	e1a00100 	mov	r0, r0, lsl #2
        187cf0:	eb68e915 	bl	1bc214c <$AllocateRefHandle(long)>
        187cf4:	e58d0008 	str	r0, [sp, #8]
        187cf8:	e28d2008 	add	r2, sp, #8	; 0x8
        187cfc:	e59f1080 	ldr	r1, [pc, #80]	; 187d84 <TPickView::PickItem(PickStuff *)+0x338>
        187d00:	e28d0010 	add	r0, sp, #16	; 0x10
        187d04:	eb68f997 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        187d08:	e59d0008 	ldr	r0, [sp, #8]
        187d0c:	eb68ed2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187d10:	e28dd00c 	add	sp, sp, #12	; 0xc
        187d14:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        187d18:	e5902000 	ldr	r2, [r0]
        187d1c:	e59d0000 	ldr	r0, [sp]
        187d20:	e5900000 	ldr	r0, [r0]
        187d24:	e3a01000 	mov	r1, #0	; 0x0
        187d28:	eb68f98a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        187d2c:	e59a0000 	ldr	r0, [sl]
        187d30:	e5900000 	ldr	r0, [r0]
        187d34:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        187d38:	e5810000 	str	r0, [r1]
        187d3c:	e59d0008 	ldr	r0, [sp, #8]
        187d40:	e5900000 	ldr	r0, [r0]
        187d44:	e59f103c 	ldr	r1, [pc, #3c]	; 187d88 <TPickView::PickItem(PickStuff *)+0x33c>
        187d48:	e3300002 	teq	r0, #2	; 0x2
        187d4c:	0a00000e 	beq	187d8c <TPickView::PickItem(PickStuff *)+0x340>
        187d50:	e1a0200d 	mov	r2, sp
        187d54:	e28d0008 	add	r0, sp, #8	; 0x8
        187d58:	eb68ed1d 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        187d5c:	ea000011 	b	187da8 <TPickView::PickItem(PickStuff *)+0x35c>
        187d60:	00681e38 	rsbeq	r1, r8, r8, lsr lr
        187d64:	00682290 	streqb	r2, [r8], -#32
        187d68:	00681e60 	rsbeq	r1, r8, r0, ror #28
        187d6c:	006833b0 	streqh	r3, [r8], -#48	; fField48
        187d70:	0c101934 	ldceq	9, cr1, [r0], -#208
        187d74:	00684c00 	rsbeq	r4, r8, r0, lsl #24
        187d78:	00681038 	rsbeq	r1, r8, r8, lsr r0
        187d7c:	006831c0 	rsbeq	r3, r8, r0, asr #3
        187d80:	00685220 	rsbeq	r5, r8, r0, lsr #4
        187d84:	00685258 	rsbeq	r5, r8, r8, asr r2
        187d88:	00683e48 	rsbeq	r3, r8, r8, asr #28
        187d8c:	e3a03000 	mov	r3, #0	; 0x0
        187d90:	e92d0008 	stmdb	sp!, {r3}
        187d94:	e28d2004 	add	r2, sp, #4	; 0x4
        187d98:	e1a00004 	mov	r0, r4
        187d9c:	e3a03001 	mov	r3, #1	; 0x1
        187da0:	eb690e0e 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        187da4:	e28dd004 	add	sp, sp, #4	; 0x4
        187da8:	e28d0004 	add	r0, sp, #4	; 0x4
        187dac:	eb6909ea 	bl	1bca55c <$GetView(RefVar const &)>
        187db0:	e1b04000 	movs	r4, r0
        187db4:	0a000005 	beq	187dd0 <TPickView::PickItem(PickStuff *)+0x384>
        187db8:	e3e00000 	mvn	r0, #0	; 0x0
        187dbc:	e28d2010 	add	r2, sp, #16	; 0x10
        187dc0:	e1a01007 	mov	r1, r7
        187dc4:	e5840074 	str	r0, [r4, #116]	; fField116
        187dc8:	e28d0004 	add	r0, sp, #4	; 0x4
        187dcc:	eb68f965 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        187dd0:	e59d0000 	ldr	r0, [sp]
        187dd4:	eb68ecf8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187dd8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        187ddc:	eb68ecf6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187de0:	e1a00006 	mov	r0, r6
        187de4:	eb68ecf4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187de8:	e59d0008 	ldr	r0, [sp, #8]
        187dec:	eb68ecf2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187df0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        187df4:	eb68ecf0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187df8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        187dfc:	eb68ecee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        187e00:	e1a00004 	mov	r0, r4
        187e04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::GetItemFlags(PickStuff *, unsigned char *, unsigned short *)
 * Address: 00187e08
 */
TPickView::GetItemFlags(PickStuff *, unsigned char *, unsigned short *) {
    /*
        187e08:	e590003c 	ldr	r0, [r0, #60]	; fField60
        187e0c:	e5900000 	ldr	r0, [r0]
        187e10:	e5911000 	ldr	r1, [r1]
        187e14:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
        187e18:	e5c30001 	strb	r0, [r3, #1]
        187e1c:	e1a01420 	mov	r1, r0, lsr #8
        187e20:	e5c31000 	strb	r1, [r3]
        187e24:	e2000801 	and	r0, r0, #65536	; 0x10000
        187e28:	e1a00820 	mov	r0, r0, lsr #16
        187e2c:	e5c20000 	strb	r0, [r2]
        187e30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPickView::IsItemNoPickable(long)
 * Address: 00187e34
 */
TPickView::IsItemNoPickable(long) {
    /*
        187e34:	e590003c 	ldr	r0, [r0, #60]	; fField60
        187e38:	e5900000 	ldr	r0, [r0]
        187e3c:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
        187e40:	e2000801 	and	r0, r0, #65536	; 0x10000
        187e44:	e1a00820 	mov	r0, r0, lsr #16
        187e48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPickView::SetItemFlags(PickStuff *, unsigned char, unsigned short)
 * Address: 00187e4c
 */
TPickView::SetItemFlags(PickStuff *, unsigned char, unsigned short) {
    /*
        187e4c:	e1a03803 	mov	r3, r3, lsl #16
        187e50:	e1a03823 	mov	r3, r3, lsr #16
        187e54:	e2022001 	and	r2, r2, #1	; 0x1
        187e58:	e0832802 	add	r2, r3, r2, lsl #16
        187e5c:	e590003c 	ldr	r0, [r0, #60]	; fField60
        187e60:	e5900000 	ldr	r0, [r0]
        187e64:	e5911000 	ldr	r1, [r1]
        187e68:	e7802101 	str	r2, [r0, r1, lsl #2]	; fField2
        187e6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPickView::GetItemLength(long)
 * Address: 00187e70
 */
TPickView::GetItemLength(long) {
    /*
        187e70:	e590003c 	ldr	r0, [r0, #60]	; fField60
        187e74:	e5900000 	ldr	r0, [r0]
        187e78:	e7900101 	ldr	r0, [r0, r1, lsl #2]	; fField2
        187e7c:	e1a00a40 	mov	r0, r0, asr #20
        187e80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPickView::SetItemLength(PickStuff *, long)
 * Address: 00187e84
 */
TPickView::SetItemLength(PickStuff *, long) {
    /*
        187e84:	e590003c 	ldr	r0, [r0, #60]	; fField60
        187e88:	e5900000 	ldr	r0, [r0]
        187e8c:	e5911000 	ldr	r1, [r1]
        187e90:	e7903101 	ldr	r3, [r0, r1, lsl #2]	; fField2
        187e94:	e1a03603 	mov	r3, r3, lsl #12
        187e98:	e1a03623 	mov	r3, r3, lsr #12
        187e9c:	e1832a02 	orr	r2, r3, r2, lsl #20
        187ea0:	e7802101 	str	r2, [r0, r1, lsl #2]	; fField2
        187ea4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)
 * Address: 00187ea8
 */
TPickView::GetDisplayItem(long, unsigned char *, unsigned short *) {
    /*
        187ea8:	e1a0c00d 	mov	ip, sp
        187eac:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        187eb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        187eb4:	e1a07000 	mov	r7, r0
        187eb8:	e1a06001 	mov	r6, r1
        187ebc:	e1a04002 	mov	r4, r2
        187ec0:	e1a05003 	mov	r5, r3
        187ec4:	e24dd004 	sub	sp, sp, #4	; 0x4
        187ec8:	e5900034 	ldr	r0, [r0, #52]	; fField52
        187ecc:	e5900000 	ldr	r0, [r0]
        187ed0:	eb68f0df 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        187ed4:	eb68e89c 	bl	1bc214c <$AllocateRefHandle(long)>
        187ed8:	e1a08000 	mov	r8, r0
        187edc:	e5900000 	ldr	r0, [r0]
        187ee0:	eb68e899 	bl	1bc214c <$AllocateRefHandle(long)>
        187ee4:	e3340000 	teq	r4, #0	; 0x0
        187ee8:	e58d0000 	str	r0, [sp]
        187eec:	13a00001 	movne	r0, #1	; 0x1
        187ef0:	15c40000 	strneb	r0, [r4]
        187ef4:	e3a09000 	mov	r9, #0	; 0x0
        187ef8:	e3350000 	teq	r5, #0	; 0x0
        187efc:	15c59001 	strneb	r9, [r5, #1]
        187f00:	15c59000 	strneb	r9, [r5]
        187f04:	e1a0000d 	mov	r0, sp
        187f08:	eb69aea0 	bl	1bf3990 <$IsFrame(RefVar const &)>
        187f0c:	e3300000 	teq	r0, #0	; 0x0
        187f10:	0a000053 	beq	188064 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x1bc>
        187f14:	e59f007c 	ldr	r0, [pc, #7c]	; 187f98 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0xf0>
        187f18:	e5900000 	ldr	r0, [r0]
        187f1c:	e5901000 	ldr	r1, [r0]
        187f20:	e5980000 	ldr	r0, [r8]
        187f24:	eb68f0cd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        187f28:	eb68e887 	bl	1bc214c <$AllocateRefHandle(long)>
        187f2c:	e1a09000 	mov	r9, r0
        187f30:	e5900000 	ldr	r0, [r0]
        187f34:	e3500002 	cmp	r0, #2	; 0x2
        187f38:	1a000019 	bne	187fa4 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0xfc>
        187f3c:	e59700a4 	ldr	r0, [r7, #164]	; fField164
        187f40:	e5900000 	ldr	r0, [r0]
        187f44:	e3300002 	teq	r0, #2	; 0x2
        187f48:	0a000018 	beq	187fb0 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x108>
        187f4c:	e1a01006 	mov	r1, r6
        187f50:	eb68f0bf 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        187f54:	e5890000 	str	r0, [r9]
        187f58:	e3300002 	teq	r0, #2	; 0x2
        187f5c:	0a000005 	beq	187f78 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0xd0>
        187f60:	e59f1034 	ldr	r1, [pc, #34]	; 187f9c <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0xf4>
        187f64:	e5911000 	ldr	r1, [r1]
        187f68:	e5911000 	ldr	r1, [r1]
        187f6c:	eb68f0bb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        187f70:	e59d1000 	ldr	r1, [sp]
        187f74:	e5810000 	str	r0, [r1]
        187f78:	e59d0000 	ldr	r0, [sp]
        187f7c:	e5900000 	ldr	r0, [r0]
        187f80:	e3300002 	teq	r0, #2	; 0x2
        187f84:	059f0014 	ldreq	r0, [pc, #14]	; 187fa0 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0xf8>
        187f88:	05900000 	ldreq	r0, [r0]
        187f8c:	05900000 	ldreq	r0, [r0]
        187f90:	0a000004 	beq	187fa8 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x100>
        187f94:	ea000005 	b	187fb0 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x108>
        187f98:	00683338 	rsbeq	r3, r8, r8, lsr r3
        187f9c:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        187fa0:	006811b8 	streqh	r1, [r8], -#24
        187fa4:	0a000001 	beq	187fb0 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x108>
        187fa8:	e59d1000 	ldr	r1, [sp]
        187fac:	e5810000 	str	r0, [r1]
        187fb0:	e3350000 	teq	r5, #0	; 0x0
        187fb4:	0a000015 	beq	188010 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x168>
        187fb8:	e59f009c 	ldr	r0, [pc, #9c]	; 18805c <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x1b4>
        187fbc:	e5900000 	ldr	r0, [r0]
        187fc0:	e5901000 	ldr	r1, [r0]
        187fc4:	e5980000 	ldr	r0, [r8]
        187fc8:	eb68f0a4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        187fcc:	e5890000 	str	r0, [r9]
        187fd0:	e3300002 	teq	r0, #2	; 0x2
        187fd4:	0a00000d 	beq	188010 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x168>
        187fd8:	e2001003 	and	r1, r0, #3	; 0x3
        187fdc:	e3310002 	teq	r1, #2	; 0x2
        187fe0:	03a01003 	moveq	r1, #3	; 0x3
        187fe4:	00011140 	andeq	r1, r1, r0, asr #2
        187fe8:	03310001 	teqeq	r1, #1	; 0x1
        187fec:	01a00140 	moveq	r0, r0, asr #2
        187ff0:	01a00140 	moveq	r0, r0, asr #2
        187ff4:	01a00800 	moveq	r0, r0, lsl #16
        187ff8:	01a00820 	moveq	r0, r0, lsr #16
        187ffc:	0a000000 	beq	188004 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x15c>
        188000:	eb68e844 	bl	1bc2118 <$_RCHARError(long)>
        188004:	e5c50001 	strb	r0, [r5, #1]
        188008:	e1a00440 	mov	r0, r0, asr #8
        18800c:	e5c50000 	strb	r0, [r5]
        188010:	e3340000 	teq	r4, #0	; 0x0
        188014:	0a00000d 	beq	188050 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x1a8>
        188018:	e59f5040 	ldr	r5, [pc, #40]	; 188060 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x1b8>
        18801c:	e5950000 	ldr	r0, [r5]
        188020:	e5901000 	ldr	r1, [r0]
        188024:	e5980000 	ldr	r0, [r8]
        188028:	eb68f086 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        18802c:	e3300000 	teq	r0, #0	; 0x0
        188030:	0a000006 	beq	188050 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x1a8>
        188034:	e5950000 	ldr	r0, [r5]
        188038:	e5901000 	ldr	r1, [r0]
        18803c:	e5980000 	ldr	r0, [r8]
        188040:	eb68f086 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        188044:	e2500002 	subs	r0, r0, #2	; 0x2
        188048:	13a00001 	movne	r0, #1	; 0x1
        18804c:	e5c40000 	strb	r0, [r4]
        188050:	e1a00009 	mov	r0, r9
        188054:	eb68ec58 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188058:	ea000019 	b	1880c4 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x21c>
        18805c:	00683768 	rsbeq	r3, r8, r8, ror #14
        188060:	00683e40 	rsbeq	r3, r8, r0, asr #28
        188064:	e3340000 	teq	r4, #0	; 0x0
        188068:	0a000015 	beq	1880c4 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x21c>
        18806c:	e59d0000 	ldr	r0, [sp]
        188070:	e5900000 	ldr	r0, [r0]
        188074:	eb68f48a 	bl	1bc52a4 <$IsSymbol(long)>
        188078:	e3300000 	teq	r0, #0	; 0x0
        18807c:	0a000010 	beq	1880c4 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x21c>
        188080:	e59f0058 	ldr	r0, [pc, #58]	; 1880e0 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x238>
        188084:	e5900000 	ldr	r0, [r0]
        188088:	e5901000 	ldr	r1, [r0]
        18808c:	e59d0000 	ldr	r0, [sp]
        188090:	e5900000 	ldr	r0, [r0]
        188094:	eb68f065 	bl	1bc4230 <$EQRef__FlT1>
        188098:	e3300000 	teq	r0, #0	; 0x0
        18809c:	1a000007 	bne	1880c0 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x218>
        1880a0:	e59f003c 	ldr	r0, [pc, #3c]	; 1880e4 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x23c>
        1880a4:	e5900000 	ldr	r0, [r0]
        1880a8:	e5901000 	ldr	r1, [r0]
        1880ac:	e59d0000 	ldr	r0, [sp]
        1880b0:	e5900000 	ldr	r0, [r0]
        1880b4:	eb68f05d 	bl	1bc4230 <$EQRef__FlT1>
        1880b8:	e3300000 	teq	r0, #0	; 0x0
        1880bc:	0a000000 	beq	1880c4 <TPickView::GetDisplayItem(long, unsigned char *, unsigned short *)+0x21c>
        1880c0:	e5c49000 	strb	r9, [r4]
        1880c4:	e59d0000 	ldr	r0, [sp]
        1880c8:	e5904000 	ldr	r4, [r0]
        1880cc:	eb68ec3a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1880d0:	e1a00008 	mov	r0, r8
        1880d4:	eb68ec38 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1880d8:	e1a00004 	mov	r0, r4
        1880dc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1880e0:	00683e98 	streqb	r3, [r8], -#232
        1880e4:	00683ea0 	rsbeq	r3, r8, r0, lsr #29
    */
}

/**
 * Symbol: TPickView::GetItemNoText(long)
 * Address: 001880e8
 */
TPickView::GetItemNoText(long) {
    /*
        1880e8:	e1a0c00d 	mov	ip, sp
        1880ec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1880f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1880f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1880f8:	e28d2004 	add	r2, sp, #4	; 0x4
        1880fc:	e3a03000 	mov	r3, #0	; 0x0
        188100:	eb65746a 	bl	1ae52b0 <TPickView::$GetDisplayItem(long, unsigned char *, unsigned short *)>
        188104:	eb68e810 	bl	1bc214c <$AllocateRefHandle(long)>
        188108:	e58d0000 	str	r0, [sp]
        18810c:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        188110:	e3300000 	teq	r0, #0	; 0x0
        188114:	0a000008 	beq	18813c <TPickView::GetItemNoText(long)+0x54>
        188118:	e1a0000d 	mov	r0, sp
        18811c:	eb68f45e 	bl	1bc529c <$IsString(RefVar const &)>
        188120:	e3300000 	teq	r0, #0	; 0x0
        188124:	0a000004 	beq	18813c <TPickView::GetItemNoText(long)+0x54>
        188128:	e59d0000 	ldr	r0, [sp]
        18812c:	e5904000 	ldr	r4, [r0]
        188130:	eb68ec21 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188134:	e1a00004 	mov	r0, r4
        188138:	ea000002 	b	188148 <TPickView::GetItemNoText(long)+0x60>
        18813c:	e59d0000 	ldr	r0, [sp]
        188140:	eb68ec1d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188144:	e3a00002 	mov	r0, #2	; 0x2
        188148:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::KeyToNextItem(long)
 * Address: 0018814c
 */
TPickView::KeyToNextItem(long) {
    /*
        18814c:	e1a0c00d 	mov	ip, sp
        188150:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        188154:	e24cb004 	sub	fp, ip, #4	; 0x4
        188158:	e1a04000 	mov	r4, r0
        18815c:	e3a05000 	mov	r5, #0	; 0x0
        188160:	e52d1018 	str	r1, [sp, -#24]!
        188164:	ea000002 	b	188174 <TPickView::KeyToNextItem(long)+0x28>
        188168:	e59d0000 	ldr	r0, [sp]
        18816c:	e2800001 	add	r0, r0, #1	; 0x1
        188170:	e58d0000 	str	r0, [sp]
        188174:	e5941088 	ldr	r1, [r4, #136]	; fField136
        188178:	e59d0000 	ldr	r0, [sp]
        18817c:	e1310000 	teq	r1, r0
        188180:	0a000004 	beq	188198 <TPickView::KeyToNextItem(long)+0x4c>
        188184:	e1a00004 	mov	r0, r4
        188188:	e59d1000 	ldr	r1, [sp]
        18818c:	eb65785b 	bl	1ae6300 <TPickView::$IsItemNoPickable(long)>
        188190:	e3300000 	teq	r0, #0	; 0x0
        188194:	0afffff3 	beq	188168 <TPickView::KeyToNextItem(long)+0x1c>
        188198:	e5941088 	ldr	r1, [r4, #136]	; fField136
        18819c:	e3a07001 	mov	r7, #1	; 0x1
        1881a0:	e3a06000 	mov	r6, #0	; 0x0
        1881a4:	e59d0000 	ldr	r0, [sp]
        1881a8:	e1310000 	teq	r1, r0
        1881ac:	0a000033 	beq	188280 <TPickView::KeyToNextItem(long)+0x134>
        1881b0:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1881b4:	e5901000 	ldr	r1, [r0]
        1881b8:	e59d0000 	ldr	r0, [sp]
        1881bc:	e7915100 	ldr	r5, [r1, r0, lsl #2]	; fField2
        1881c0:	e3350000 	teq	r5, #0	; 0x0
        1881c4:	05cd6004 	streqb	r6, [sp, #4]	; fField4
        1881c8:	15cd7004 	strneb	r7, [sp, #4]	; fField4
        1881cc:	158d600c 	strne	r6, [sp, #12]
        1881d0:	158d6008 	strne	r6, [sp, #8]
        1881d4:	ea000025 	b	188270 <TPickView::KeyToNextItem(long)+0x124>
        1881d8:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        1881dc:	e3300000 	teq	r0, #0	; 0x0
        1881e0:	159d100c 	ldrne	r1, [sp, #12]
        1881e4:	15950008 	ldrne	r0, [r5, #8]
        1881e8:	12400001 	subne	r0, r0, #1	; 0x1
        1881ec:	11310000 	teqne	r1, r0
        1881f0:	159d000c 	ldrne	r0, [sp, #12]
        1881f4:	12800001 	addne	r0, r0, #1	; 0x1
        1881f8:	158d000c 	strne	r0, [sp, #12]
        1881fc:	1a000017 	bne	188260 <TPickView::KeyToNextItem(long)+0x114>
        188200:	e59d0000 	ldr	r0, [sp]
        188204:	e2800001 	add	r0, r0, #1	; 0x1
        188208:	e58d0000 	str	r0, [sp]
        18820c:	e5941088 	ldr	r1, [r4, #136]	; fField136
        188210:	e1310000 	teq	r1, r0
        188214:	0a000004 	beq	18822c <TPickView::KeyToNextItem(long)+0xe0>
        188218:	e1a00004 	mov	r0, r4
        18821c:	e59d1000 	ldr	r1, [sp]
        188220:	eb657836 	bl	1ae6300 <TPickView::$IsItemNoPickable(long)>
        188224:	e3300000 	teq	r0, #0	; 0x0
        188228:	0afffff4 	beq	188200 <TPickView::KeyToNextItem(long)+0xb4>
        18822c:	e5941088 	ldr	r1, [r4, #136]	; fField136
        188230:	e59d0000 	ldr	r0, [sp]
        188234:	e1310000 	teq	r1, r0
        188238:	0a000008 	beq	188260 <TPickView::KeyToNextItem(long)+0x114>
        18823c:	e5940040 	ldr	r0, [r4, #64]	; fField64
        188240:	e5901000 	ldr	r1, [r0]
        188244:	e59d0000 	ldr	r0, [sp]
        188248:	e7915100 	ldr	r5, [r1, r0, lsl #2]	; fField2
        18824c:	e3350000 	teq	r5, #0	; 0x0
        188250:	05cd6004 	streqb	r6, [sp, #4]	; fField4
        188254:	15cd7004 	strneb	r7, [sp, #4]	; fField4
        188258:	158d600c 	strne	r6, [sp, #12]
        18825c:	158d6008 	strne	r6, [sp, #8]
        188260:	e5940088 	ldr	r0, [r4, #136]	; fField136
        188264:	e59d1000 	ldr	r1, [sp]
        188268:	e1300001 	teq	r0, r1
        18826c:	0a000003 	beq	188280 <TPickView::KeyToNextItem(long)+0x134>
        188270:	e28d2010 	add	r2, sp, #16	; 0x10
        188274:	e1a0100d 	mov	r1, sp
        188278:	e1a00004 	mov	r0, r4
        18827c:	eb652167 	bl	1ad0820 <TPickView::$GetGridItemRect(PickStuff *, TRect *)>
        188280:	e5940074 	ldr	r0, [r4, #116]	; fField116
        188284:	e3700001 	cmn	r0, #1	; 0x1
        188288:	1a000008 	bne	1882b0 <TPickView::KeyToNextItem(long)+0x164>
        18828c:	e5940088 	ldr	r0, [r4, #136]	; fField136
        188290:	e59d1000 	ldr	r1, [sp]
        188294:	e1300001 	teq	r0, r1
        188298:	0a000004 	beq	1882b0 <TPickView::KeyToNextItem(long)+0x164>
        18829c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1882a0:	e1a01841 	mov	r1, r1, asr #16
        1882a4:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        1882a8:	e1510840 	cmp	r1, r0, asr #16
        1882ac:	caffffc9 	bgt	1881d8 <TPickView::KeyToNextItem(long)+0x8c>
        1882b0:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1882b4:	e59d1000 	ldr	r1, [sp]
        1882b8:	e1300001 	teq	r0, r1
        1882bc:	0a00000a 	beq	1882ec <TPickView::KeyToNextItem(long)+0x1a0>
        1882c0:	e59d0000 	ldr	r0, [sp]
        1882c4:	e5840074 	str	r0, [r4, #116]	; fField116
        1882c8:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        1882cc:	e5c40078 	strb	r0, [r4, #120]	; fField120
        1882d0:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        1882d4:	e3300000 	teq	r0, #0	; 0x0
        1882d8:	0a000003 	beq	1882ec <TPickView::KeyToNextItem(long)+0x1a0>
        1882dc:	e59d0008 	ldr	r0, [sp, #8]
        1882e0:	e584007c 	str	r0, [r4, #124]	; fField124
        1882e4:	e59d000c 	ldr	r0, [sp, #12]
        1882e8:	e5a40080 	str	r0, [r4, #128]!	; fField128
        1882ec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::KeyToPrevItem(long)
 * Address: 001882f0
 */
TPickView::KeyToPrevItem(long) {
    /*
        1882f0:	e1a0c00d 	mov	ip, sp
        1882f4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1882f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1882fc:	e1a04000 	mov	r4, r0
        188300:	e3a06001 	mov	r6, #1	; 0x1
        188304:	e3a05000 	mov	r5, #0	; 0x0
        188308:	e52d1018 	str	r1, [sp, -#24]!
        18830c:	ea000002 	b	18831c <TPickView::KeyToPrevItem(long)+0x2c>
        188310:	e59d0000 	ldr	r0, [sp]
        188314:	e2400001 	sub	r0, r0, #1	; 0x1
        188318:	e58d0000 	str	r0, [sp]
        18831c:	e59d0000 	ldr	r0, [sp]
        188320:	e3700001 	cmn	r0, #1	; 0x1
        188324:	0a00003b 	beq	188418 <TPickView::KeyToPrevItem(long)+0x128>
        188328:	e1a00004 	mov	r0, r4
        18832c:	e59d1000 	ldr	r1, [sp]
        188330:	eb6577f2 	bl	1ae6300 <TPickView::$IsItemNoPickable(long)>
        188334:	e3300000 	teq	r0, #0	; 0x0
        188338:	0afffff4 	beq	188310 <TPickView::KeyToPrevItem(long)+0x20>
        18833c:	e59d0000 	ldr	r0, [sp]
        188340:	e3700001 	cmn	r0, #1	; 0x1
        188344:	0a000033 	beq	188418 <TPickView::KeyToPrevItem(long)+0x128>
        188348:	e5940040 	ldr	r0, [r4, #64]	; fField64
        18834c:	e5901000 	ldr	r1, [r0]
        188350:	e59d0000 	ldr	r0, [sp]
        188354:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
        188358:	e3300000 	teq	r0, #0	; 0x0
        18835c:	05cd5004 	streqb	r5, [sp, #4]	; fField4
        188360:	0a000028 	beq	188408 <TPickView::KeyToPrevItem(long)+0x118>
        188364:	e5cd6004 	strb	r6, [sp, #4]	; fField4
        188368:	e58d5008 	str	r5, [sp, #8]
        18836c:	e5900008 	ldr	r0, [r0, #8]
        188370:	e2400001 	sub	r0, r0, #1	; 0x1
        188374:	e58d000c 	str	r0, [sp, #12]
        188378:	ea000022 	b	188408 <TPickView::KeyToPrevItem(long)+0x118>
        18837c:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        188380:	e3300000 	teq	r0, #0	; 0x0
        188384:	159d000c 	ldrne	r0, [sp, #12]
        188388:	13300000 	teqne	r0, #0	; 0x0
        18838c:	159d000c 	ldrne	r0, [sp, #12]
        188390:	1a000015 	bne	1883ec <TPickView::KeyToPrevItem(long)+0xfc>
        188394:	e59d0000 	ldr	r0, [sp]
        188398:	e2400001 	sub	r0, r0, #1	; 0x1
        18839c:	e58d0000 	str	r0, [sp]
        1883a0:	e3700001 	cmn	r0, #1	; 0x1
        1883a4:	0a00001b 	beq	188418 <TPickView::KeyToPrevItem(long)+0x128>
        1883a8:	e1a00004 	mov	r0, r4
        1883ac:	e59d1000 	ldr	r1, [sp]
        1883b0:	eb6577d2 	bl	1ae6300 <TPickView::$IsItemNoPickable(long)>
        1883b4:	e3300000 	teq	r0, #0	; 0x0
        1883b8:	0afffff5 	beq	188394 <TPickView::KeyToPrevItem(long)+0xa4>
        1883bc:	e59d0000 	ldr	r0, [sp]
        1883c0:	e3700001 	cmn	r0, #1	; 0x1
        1883c4:	0a000013 	beq	188418 <TPickView::KeyToPrevItem(long)+0x128>
        1883c8:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1883cc:	e5901000 	ldr	r1, [r0]
        1883d0:	e59d0000 	ldr	r0, [sp]
        1883d4:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
        1883d8:	e3300000 	teq	r0, #0	; 0x0
        1883dc:	0a000005 	beq	1883f8 <TPickView::KeyToPrevItem(long)+0x108>
        1883e0:	e5cd6004 	strb	r6, [sp, #4]	; fField4
        1883e4:	e58d5008 	str	r5, [sp, #8]
        1883e8:	e5900008 	ldr	r0, [r0, #8]
        1883ec:	e2400001 	sub	r0, r0, #1	; 0x1
        1883f0:	e58d000c 	str	r0, [sp, #12]
        1883f4:	ea000000 	b	1883fc <TPickView::KeyToPrevItem(long)+0x10c>
        1883f8:	e5cd5004 	strb	r5, [sp, #4]	; fField4
        1883fc:	e59d0000 	ldr	r0, [sp]
        188400:	e3700001 	cmn	r0, #1	; 0x1
        188404:	0a000003 	beq	188418 <TPickView::KeyToPrevItem(long)+0x128>
        188408:	e28d2010 	add	r2, sp, #16	; 0x10
        18840c:	e1a0100d 	mov	r1, sp
        188410:	e1a00004 	mov	r0, r4
        188414:	eb652101 	bl	1ad0820 <TPickView::$GetGridItemRect(PickStuff *, TRect *)>
        188418:	e5940074 	ldr	r0, [r4, #116]	; fField116
        18841c:	e3700001 	cmn	r0, #1	; 0x1
        188420:	1a000007 	bne	188444 <TPickView::KeyToPrevItem(long)+0x154>
        188424:	e59d0000 	ldr	r0, [sp]
        188428:	e3700001 	cmn	r0, #1	; 0x1
        18842c:	0a000012 	beq	18847c <TPickView::KeyToPrevItem(long)+0x18c>
        188430:	e5941014 	ldr	r1, [r4, #20]	; fField20
        188434:	e1a01841 	mov	r1, r1, asr #16
        188438:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        18843c:	e1510840 	cmp	r1, r0, asr #16
        188440:	baffffcd 	blt	18837c <TPickView::KeyToPrevItem(long)+0x8c>
        188444:	e59d0000 	ldr	r0, [sp]
        188448:	e3700001 	cmn	r0, #1	; 0x1
        18844c:	0a00000a 	beq	18847c <TPickView::KeyToPrevItem(long)+0x18c>
        188450:	e59d0000 	ldr	r0, [sp]
        188454:	e5840074 	str	r0, [r4, #116]	; fField116
        188458:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        18845c:	e5c40078 	strb	r0, [r4, #120]	; fField120
        188460:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        188464:	e3300000 	teq	r0, #0	; 0x0
        188468:	0a000003 	beq	18847c <TPickView::KeyToPrevItem(long)+0x18c>
        18846c:	e59d0008 	ldr	r0, [sp, #8]
        188470:	e584007c 	str	r0, [r4, #124]	; fField124
        188474:	e59d000c 	ldr	r0, [sp, #12]
        188478:	e5a40080 	str	r0, [r4, #128]!	; fField128
        18847c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPickView::HandleKeyDown(unsigned short, unsigned long)
 * Address: 00188480
 */
TPickView::HandleKeyDown(unsigned short, unsigned long) {
    /*
        188480:	e1a0c00d 	mov	ip, sp
        188484:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        188488:	e24cb004 	sub	fp, ip, #4	; 0x4
        18848c:	e1a04000 	mov	r4, r0
        188490:	e1a01801 	mov	r1, r1, lsl #16
        188494:	e1a01821 	mov	r1, r1, lsr #16
        188498:	e202043e 	and	r0, r2, #1040187392	; 0x3e000000
        18849c:	e1a07802 	mov	r7, r2, lsl #16
        1884a0:	e1a07827 	mov	r7, r7, lsr #16
        1884a4:	e24dd010 	sub	sp, sp, #16	; 0x10
        1884a8:	e92d0003 	stmdb	sp!, {r0, r1}
        1884ac:	e3a01000 	mov	r1, #0	; 0x0
        1884b0:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1884b4:	e3700001 	cmn	r0, #1	; 0x1
        1884b8:	15941040 	ldrne	r1, [r4, #64]	; fField64
        1884bc:	15911000 	ldrne	r1, [r1]
        1884c0:	17911100 	ldrne	r1, [r1, r0, lsl #2]	; fField2
        1884c4:	e3a05000 	mov	r5, #0	; 0x0
        1884c8:	e3a08000 	mov	r8, #0	; 0x0
        1884cc:	e59f20fc 	ldr	r2, [pc, #fc]	; 1885d0 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x150>
        1884d0:	e2849024 	add	r9, r4, #36	; 0x24
        1884d4:	e2846074 	add	r6, r4, #116	; 0x74
        1884d8:	e357001c 	cmp	r7, #28	; 0x1c
        1884dc:	e58d2014 	str	r2, [sp, #20]	; fField20
        1884e0:	0a000060 	beq	188668 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x1e8>
        1884e4:	e59f20e8 	ldr	r2, [pc, #e8]	; 1885d4 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x154>
        1884e8:	e58d2010 	str	r2, [sp, #16]	; fField16
        1884ec:	e59fa0e4 	ldr	sl, [pc, #e4]	; 1885d8 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x158>
        1884f0:	e59f20e4 	ldr	r2, [pc, #e4]	; 1885dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x15c>
        1884f4:	e58d200c 	str	r2, [sp, #12]
        1884f8:	ca000038 	bgt	1885e0 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x160>
        1884fc:	e3370003 	teq	r7, #3	; 0x3
        188500:	0a000003 	beq	188514 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x94>
        188504:	e3370009 	teq	r7, #9	; 0x9
        188508:	0a00003a 	beq	1885f8 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x178>
        18850c:	e337000d 	teq	r7, #13	; 0xd
        188510:	1a000099 	bne	18877c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x2fc>
        188514:	e3a05001 	mov	r5, #1	; 0x1
        188518:	e3700001 	cmn	r0, #1	; 0x1
        18851c:	0a00012e 	beq	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        188520:	e24dd004 	sub	sp, sp, #4	; 0x4
        188524:	e3a00002 	mov	r0, #2	; 0x2
        188528:	eb68e707 	bl	1bc214c <$AllocateRefHandle(long)>
        18852c:	e58d0000 	str	r0, [sp]
        188530:	e1a0000d 	mov	r0, sp
        188534:	eb64f368 	bl	1ac52dc <$FClicker>
        188538:	e59d0000 	ldr	r0, [sp]
        18853c:	eb68eb1e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188540:	e24dd00c 	sub	sp, sp, #12	; 0xc
        188544:	e5942074 	ldr	r2, [r4, #116]	; fField116
        188548:	e1a01004 	mov	r1, r4
        18854c:	e3a00036 	mov	r0, #54	; 0x36
        188550:	eb64777a 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        188554:	eb68e6fc 	bl	1bc214c <$AllocateRefHandle(long)>
        188558:	e1a01006 	mov	r1, r6
        18855c:	e58d0008 	str	r0, [sp, #8]
        188560:	e3a02010 	mov	r2, #16	; 0x10
        188564:	e59d0020 	ldr	r0, [sp, #32]
        188568:	ebfe8313 	bl	1291bc <ToObject(RefVar const &, char *, long)>
        18856c:	eb68e6f6 	bl	1bc214c <$AllocateRefHandle(long)>
        188570:	e58d0004 	str	r0, [sp, #4]	; fField4
        188574:	e28d1004 	add	r1, sp, #4	; 0x4
        188578:	e28d0008 	add	r0, sp, #8	; 0x8
        18857c:	eb647778 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        188580:	e3a0001a 	mov	r0, #26	; 0x1a
        188584:	eb68e6f0 	bl	1bc214c <$AllocateRefHandle(long)>
        188588:	e58d0000 	str	r0, [sp]
        18858c:	e1a0200d 	mov	r2, sp
        188590:	e1a00009 	mov	r0, r9
        188594:	e1a0100a 	mov	r1, sl
        188598:	eb68f772 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        18859c:	e59d0000 	ldr	r0, [sp]
        1885a0:	eb68eb05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1885a4:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        1885a8:	e5900000 	ldr	r0, [r0]
        1885ac:	e28d1008 	add	r1, sp, #8	; 0x8
        1885b0:	eb6420a0 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1885b4:	e3a08001 	mov	r8, #1	; 0x1
        1885b8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1885bc:	eb68eafe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1885c0:	e59d0008 	ldr	r0, [sp, #8]
        1885c4:	eb68eafc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1885c8:	e28dd010 	add	sp, sp, #16	; 0x10
        1885cc:	ea000102 	b	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        1885d0:	0c101934 	ldceq	9, cr1, [r0], -#208
        1885d4:	006848d0 	ldreqd	r4, [r8], -#128	; fField128
        1885d8:	00681e38 	rsbeq	r1, r8, r8, lsr lr
        1885dc:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        1885e0:	e337001d 	teq	r7, #29	; 0x1d
        1885e4:	0a000040 	beq	1886ec <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x26c>
        1885e8:	e337001e 	teq	r7, #30	; 0x1e
        1885ec:	0a00000f 	beq	188630 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x1b0>
        1885f0:	e337001f 	teq	r7, #31	; 0x1f
        1885f4:	1a000060 	bne	18877c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x2fc>
        1885f8:	e3a05001 	mov	r5, #1	; 0x1
        1885fc:	e3310000 	teq	r1, #0	; 0x0
        188600:	15942080 	ldrne	r2, [r4, #128]	; fField128
        188604:	15911008 	ldrne	r1, [r1, #8]
        188608:	12411001 	subne	r1, r1, #1	; 0x1
        18860c:	11320001 	teqne	r2, r1
        188610:	12820001 	addne	r0, r2, #1	; 0x1
        188614:	1a00000b 	bne	188648 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x1c8>
        188618:	e3700001 	cmn	r0, #1	; 0x1
        18861c:	12801001 	addne	r1, r0, #1	; 0x1
        188620:	03a01000 	moveq	r1, #0	; 0x0
        188624:	e1a00004 	mov	r0, r4
        188628:	eb657322 	bl	1ae52b8 <TPickView::$KeyToNextItem(long)>
        18862c:	ea0000ea 	b	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        188630:	e3a05001 	mov	r5, #1	; 0x1
        188634:	e3310000 	teq	r1, #0	; 0x0
        188638:	15941080 	ldrne	r1, [r4, #128]	; fField128
        18863c:	13310000 	teqne	r1, #0	; 0x0
        188640:	0a000002 	beq	188650 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x1d0>
        188644:	e2410001 	sub	r0, r1, #1	; 0x1
        188648:	e5840080 	str	r0, [r4, #128]	; fField128
        18864c:	ea0000e2 	b	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        188650:	e3700001 	cmn	r0, #1	; 0x1
        188654:	05940088 	ldreq	r0, [r4, #136]	; fField136
        188658:	e2401001 	sub	r1, r0, #1	; 0x1
        18865c:	e1a00004 	mov	r0, r4
        188660:	eb657315 	bl	1ae52bc <TPickView::$KeyToPrevItem(long)>
        188664:	ea0000dc 	b	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        188668:	e3a05001 	mov	r5, #1	; 0x1
        18866c:	e3700001 	cmn	r0, #1	; 0x1
        188670:	03a07000 	moveq	r7, #0	; 0x0
        188674:	0a000005 	beq	188690 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x210>
        188678:	e3310000 	teq	r1, #0	; 0x0
        18867c:	1594007c 	ldrne	r0, [r4, #124]	; fField124
        188680:	13300000 	teqne	r0, #0	; 0x0
        188684:	0a0000d4 	beq	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        188688:	ea000015 	b	1886e4 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x264>
        18868c:	e2877001 	add	r7, r7, #1	; 0x1
        188690:	e5940088 	ldr	r0, [r4, #136]	; fField136
        188694:	e1300007 	teq	r0, r7
        188698:	0a000004 	beq	1886b0 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x230>
        18869c:	e1a01007 	mov	r1, r7
        1886a0:	e1a00004 	mov	r0, r4
        1886a4:	eb657715 	bl	1ae6300 <TPickView::$IsItemNoPickable(long)>
        1886a8:	e3300000 	teq	r0, #0	; 0x0
        1886ac:	0afffff6 	beq	18868c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x20c>
        1886b0:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1886b4:	e1300007 	teq	r0, r7
        1886b8:	15940040 	ldrne	r0, [r4, #64]	; fField64
        1886bc:	15900000 	ldrne	r0, [r0]
        1886c0:	17900107 	ldrne	r0, [r0, r7, lsl #2]	; fField2
        1886c4:	13300000 	teqne	r0, #0	; 0x0
        1886c8:	0a0000c3 	beq	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        1886cc:	e3a01001 	mov	r1, #1	; 0x1
        1886d0:	e5847074 	str	r7, [r4, #116]	; fField116
        1886d4:	e5c41078 	strb	r1, [r4, #120]	; fField120
        1886d8:	e3a02000 	mov	r2, #0	; 0x0
        1886dc:	e5842080 	str	r2, [r4, #128]	; fField128
        1886e0:	e590000c 	ldr	r0, [r0, #12]
        1886e4:	e2400001 	sub	r0, r0, #1	; 0x1
        1886e8:	ea00000a 	b	188718 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x298>
        1886ec:	e3a05001 	mov	r5, #1	; 0x1
        1886f0:	e3700001 	cmn	r0, #1	; 0x1
        1886f4:	03a07000 	moveq	r7, #0	; 0x0
        1886f8:	0a000009 	beq	188724 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x2a4>
        1886fc:	e3310000 	teq	r1, #0	; 0x0
        188700:	1594007c 	ldrne	r0, [r4, #124]	; fField124
        188704:	1591100c 	ldrne	r1, [r1, #12]
        188708:	12411001 	subne	r1, r1, #1	; 0x1
        18870c:	11300001 	teqne	r0, r1
        188710:	0a0000b1 	beq	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        188714:	e2800001 	add	r0, r0, #1	; 0x1
        188718:	e584007c 	str	r0, [r4, #124]	; fField124
        18871c:	ea0000ae 	b	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        188720:	e2877001 	add	r7, r7, #1	; 0x1
        188724:	e5940088 	ldr	r0, [r4, #136]	; fField136
        188728:	e1300007 	teq	r0, r7
        18872c:	0a000004 	beq	188744 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x2c4>
        188730:	e1a01007 	mov	r1, r7
        188734:	e1a00004 	mov	r0, r4
        188738:	eb6576f0 	bl	1ae6300 <TPickView::$IsItemNoPickable(long)>
        18873c:	e3300000 	teq	r0, #0	; 0x0
        188740:	0afffff6 	beq	188720 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x2a0>
        188744:	e5940088 	ldr	r0, [r4, #136]	; fField136
        188748:	e1300007 	teq	r0, r7
        18874c:	15940040 	ldrne	r0, [r4, #64]	; fField64
        188750:	15900000 	ldrne	r0, [r0]
        188754:	17900107 	ldrne	r0, [r0, r7, lsl #2]	; fField2
        188758:	13300000 	teqne	r0, #0	; 0x0
        18875c:	0a00009e 	beq	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        188760:	e3a00001 	mov	r0, #1	; 0x1
        188764:	e5847074 	str	r7, [r4, #116]	; fField116
        188768:	e5c40078 	strb	r0, [r4, #120]	; fField120
        18876c:	e3a02000 	mov	r2, #0	; 0x0
        188770:	e5842080 	str	r2, [r4, #128]	; fField128
        188774:	e584207c 	str	r2, [r4, #124]	; fField124
        188778:	ea000097 	b	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        18877c:	e28400a4 	add	r0, r4, #164	; 0xa4
        188780:	e58d0008 	str	r0, [sp, #8]
        188784:	eb69ac80 	bl	1bf398c <$IsArray(RefVar const &)>
        188788:	e3300000 	teq	r0, #0	; 0x0
        18878c:	0a000061 	beq	188918 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x498>
        188790:	e24dd004 	sub	sp, sp, #4	; 0x4
        188794:	e3a03000 	mov	r3, #0	; 0x0
        188798:	e92d0008 	stmdb	sp!, {r3}
        18879c:	e1a01007 	mov	r1, r7
        1887a0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        1887a4:	e59d2008 	ldr	r2, [sp, #8]
        1887a8:	eb657f16 	bl	1ae8408 <$FindKeyCommandInArray(RefVar const &, unsigned short, unsigned long, long *, unsigned char *)>
        1887ac:	e5ad0004 	str	r0, [sp, #4]!	; fField4
        1887b0:	e3700001 	cmn	r0, #1	; 0x1
        1887b4:	0a000054 	beq	18890c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x48c>
        1887b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1887bc:	e3a00002 	mov	r0, #2	; 0x2
        1887c0:	eb68e661 	bl	1bc214c <$AllocateRefHandle(long)>
        1887c4:	e58d0000 	str	r0, [sp]
        1887c8:	e1a0000d 	mov	r0, sp
        1887cc:	eb64f2c2 	bl	1ac52dc <$FClicker>
        1887d0:	e59d0000 	ldr	r0, [sp]
        1887d4:	eb68ea78 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1887d8:	e3a02000 	mov	r2, #0	; 0x0
        1887dc:	e2861010 	add	r1, r6, #16	; 0x10
        1887e0:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        1887e4:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        1887e8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        1887ec:	e5840074 	str	r0, [r4, #116]	; fField116
        1887f0:	e5941040 	ldr	r1, [r4, #64]	; fField64
        1887f4:	e5911000 	ldr	r1, [r1]
        1887f8:	e59d3014 	ldr	r3, [sp, #20]	; fField20
        1887fc:	e7911103 	ldr	r1, [r1, r3, lsl #2]	; fField2
        188800:	e3310000 	teq	r1, #0	; 0x0
        188804:	0a000004 	beq	18881c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x39c>
        188808:	e3a01001 	mov	r1, #1	; 0x1
        18880c:	e5c41078 	strb	r1, [r4, #120]	; fField120
        188810:	e5842080 	str	r2, [r4, #128]	; fField128
        188814:	e584207c 	str	r2, [r4, #124]	; fField124
        188818:	ea000000 	b	188820 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x3a0>
        18881c:	e5c42078 	strb	r2, [r4, #120]	; fField120
        188820:	e59d1000 	ldr	r1, [sp]
        188824:	e1500001 	cmp	r0, r1
        188828:	1a00000a 	bne	188858 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x3d8>
        18882c:	1a000012 	bne	18887c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x3fc>
        188830:	e5d40078 	ldrb	r0, [r4, #120]	; fField120
        188834:	e3300000 	teq	r0, #0	; 0x0
        188838:	0a00000f 	beq	18887c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x3fc>
        18883c:	e594007c 	ldr	r0, [r4, #124]	; fField124
        188840:	e59d1008 	ldr	r1, [sp, #8]
        188844:	e1300001 	teq	r0, r1
        188848:	05941080 	ldreq	r1, [r4, #128]	; fField128
        18884c:	059d000c 	ldreq	r0, [sp, #12]
        188850:	01310000 	teqeq	r1, r0
        188854:	0a000008 	beq	18887c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x3fc>
        188858:	e1a00004 	mov	r0, r4
        18885c:	e3a01000 	mov	r1, #0	; 0x0
        188860:	e5942000 	ldr	r2, [r4]
        188864:	e1a0e00f 	mov	lr, pc
        188868:	e282f054 	add	pc, r2, #84	; 0x54
        18886c:	e59d002c 	ldr	r0, [sp, #44]
        188870:	e5900000 	ldr	r0, [r0]
        188874:	e3a01000 	mov	r1, #0	; 0x0
        188878:	eb647289 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        18887c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        188880:	e5942074 	ldr	r2, [r4, #116]	; fField116
        188884:	e1a01004 	mov	r1, r4
        188888:	e3a00036 	mov	r0, #54	; 0x36
        18888c:	eb6476ab 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        188890:	eb68e62d 	bl	1bc214c <$AllocateRefHandle(long)>
        188894:	e1a01006 	mov	r1, r6
        188898:	e58d0008 	str	r0, [sp, #8]
        18889c:	e3a02010 	mov	r2, #16	; 0x10
        1888a0:	e59d0034 	ldr	r0, [sp, #52]	; fField52
        1888a4:	ebfe8244 	bl	1291bc <ToObject(RefVar const &, char *, long)>
        1888a8:	eb68e627 	bl	1bc214c <$AllocateRefHandle(long)>
        1888ac:	e58d0004 	str	r0, [sp, #4]	; fField4
        1888b0:	e28d1004 	add	r1, sp, #4	; 0x4
        1888b4:	e28d0008 	add	r0, sp, #8	; 0x8
        1888b8:	eb6476a9 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        1888bc:	e3a0001a 	mov	r0, #26	; 0x1a
        1888c0:	eb68e621 	bl	1bc214c <$AllocateRefHandle(long)>
        1888c4:	e58d0000 	str	r0, [sp]
        1888c8:	e1a0200d 	mov	r2, sp
        1888cc:	e1a00009 	mov	r0, r9
        1888d0:	e1a0100a 	mov	r1, sl
        1888d4:	eb68f6a3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1888d8:	e59d0000 	ldr	r0, [sp]
        1888dc:	eb68ea36 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1888e0:	e59d2030 	ldr	r2, [sp, #48]	; fField48
        1888e4:	e28d1008 	add	r1, sp, #8	; 0x8
        1888e8:	e5920000 	ldr	r0, [r2]
        1888ec:	eb641fd1 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1888f0:	e3a05001 	mov	r5, #1	; 0x1
        1888f4:	e1a08005 	mov	r8, r5
        1888f8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1888fc:	eb68ea2e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188900:	e59d0008 	ldr	r0, [sp, #8]
        188904:	eb68ea2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188908:	e28dd020 	add	sp, sp, #32	; 0x20
        18890c:	e28dd004 	add	sp, sp, #4	; 0x4
        188910:	e3380000 	teq	r8, #0	; 0x0
        188914:	1a000030 	bne	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        188918:	e59d2000 	ldr	r2, [sp]
        18891c:	e3120402 	tst	r2, #33554432	; 0x2000000
        188920:	0a000007 	beq	188944 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x4c4>
        188924:	e3a0002e 	mov	r0, #46	; 0x2e
        188928:	eb687272 	bl	1ba52f8 <$U_CONST_CHAR>
        18892c:	e1300007 	teq	r0, r7
        188930:	0a000005 	beq	18894c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x4cc>
        188934:	e3a00077 	mov	r0, #119	; 0x77
        188938:	eb68726e 	bl	1ba52f8 <$U_CONST_CHAR>
        18893c:	e1300007 	teq	r0, r7
        188940:	0a000001 	beq	18894c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x4cc>
        188944:	e337001b 	teq	r7, #27	; 0x1b
        188948:	1a000023 	bne	1889dc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x55c>
        18894c:	e24dd008 	sub	sp, sp, #8	; 0x8
        188950:	e3a00002 	mov	r0, #2	; 0x2
        188954:	eb68e5fc 	bl	1bc214c <$AllocateRefHandle(long)>
        188958:	e58d0000 	str	r0, [sp]
        18895c:	e1a0000d 	mov	r0, sp
        188960:	eb64f25d 	bl	1ac52dc <$FClicker>
        188964:	e59d0000 	ldr	r0, [sp]
        188968:	eb68ea13 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18896c:	e3a0001a 	mov	r0, #26	; 0x1a
        188970:	eb68e5f5 	bl	1bc214c <$AllocateRefHandle(long)>
        188974:	e58d0004 	str	r0, [sp, #4]	; fField4
        188978:	e28d2004 	add	r2, sp, #4	; 0x4
        18897c:	e1a00009 	mov	r0, r9
        188980:	e1a0100a 	mov	r1, sl
        188984:	eb68f677 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        188988:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18898c:	eb68ea0a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188990:	e3a00001 	mov	r0, #1	; 0x1
        188994:	e5c40030 	strb	r0, [r4, #48]	; fField48
        188998:	e594101c 	ldr	r1, [r4, #28]	; fField28
        18899c:	e1a02004 	mov	r2, r4
        1889a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1889a4:	e59d0018 	ldr	r0, [sp, #24]
        1889a8:	e5905000 	ldr	r5, [r0]
        1889ac:	e3a0002a 	mov	r0, #42	; 0x2a
        1889b0:	eb647662 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1889b4:	eb68e5e4 	bl	1bc214c <$AllocateRefHandle(long)>
        1889b8:	e58d0000 	str	r0, [sp]
        1889bc:	e1a0100d 	mov	r1, sp
        1889c0:	e1a00005 	mov	r0, r5
        1889c4:	eb641f9b 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1889c8:	e59d0000 	ldr	r0, [sp]
        1889cc:	eb68e9fa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1889d0:	e3a05001 	mov	r5, #1	; 0x1
        1889d4:	e1a08005 	mov	r8, r5
        1889d8:	e28dd00c 	add	sp, sp, #12	; 0xc
        1889dc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1889e0:	e3310000 	teq	r1, #0	; 0x0
        1889e4:	0a00008d 	beq	188c20 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x7a0>
        1889e8:	e3350000 	teq	r5, #0	; 0x0
        1889ec:	1a00008b 	bne	188c20 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x7a0>
        1889f0:	eb69a7ca 	bl	1bf2920 <$Ticks(void)>
        1889f4:	e1a05000 	mov	r5, r0
        1889f8:	e28400ac 	add	r0, r4, #172	; 0xac
        1889fc:	e1a07000 	mov	r7, r0
        188a00:	e5900000 	ldr	r0, [r0]
        188a04:	e5900000 	ldr	r0, [r0]
        188a08:	e3300002 	teq	r0, #2	; 0x2
        188a0c:	0a000004 	beq	188a24 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x5a4>
        188a10:	e59400b0 	ldr	r0, [r4, #176]
        188a14:	e0450000 	sub	r0, r5, r0
        188a18:	e59410b4 	ldr	r1, [r4, #180]	; fField180
        188a1c:	e1500001 	cmp	r0, r1
        188a20:	9a000004 	bls	188a38 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x5b8>
        188a24:	e1a0a007 	mov	sl, r7
        188a28:	e59f01ac 	ldr	r0, [pc, #1ac]	; 188bdc <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x75c>
        188a2c:	eb68e5ce 	bl	1bc216c <$Clone(RefVar const &)>
        188a30:	e59a1000 	ldr	r1, [sl]
        188a34:	e5810000 	str	r0, [r1]
        188a38:	e58450b0 	str	r5, [r4, #176]
        188a3c:	e5970000 	ldr	r0, [r7]
        188a40:	e5900000 	ldr	r0, [r0]
        188a44:	eb68f218 	bl	1bc52ac <$Length(long)>
        188a48:	e0800fa0 	add	r0, r0, r0, lsr #31
        188a4c:	e1a000c0 	mov	r0, r0, asr #1
        188a50:	e2405001 	sub	r5, r0, #1	; 0x1
        188a54:	e3550014 	cmp	r5, #20	; 0x14
        188a58:	8a00000e 	bhi	188a98 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x618>
        188a5c:	e3a00004 	mov	r0, #4	; 0x4
        188a60:	e0801085 	add	r1, r0, r5, lsl #1
        188a64:	e1a00007 	mov	r0, r7
        188a68:	eb68f63f 	bl	1bc636c <$SetLength(RefVar const &, long)>
        188a6c:	e1a00007 	mov	r0, r7
        188a70:	eb68e9c3 	bl	1bc3184 <$GetCString(RefVar const &)>
        188a74:	e0800085 	add	r0, r0, r5, lsl #1
        188a78:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        188a7c:	e5c01001 	strb	r1, [r0, #1]
        188a80:	e1a01441 	mov	r1, r1, asr #8
        188a84:	e5c01000 	strb	r1, [r0]
        188a88:	e3a02000 	mov	r2, #0	; 0x0
        188a8c:	e5c02003 	strb	r2, [r0, #3]
        188a90:	e5c02002 	strb	r2, [r0, #2]	; fField2
        188a94:	e2855001 	add	r5, r5, #1	; 0x1
        188a98:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        188a9c:	e1a01007 	mov	r1, r7
        188aa0:	e28d0004 	add	r0, sp, #4	; 0x4
        188aa4:	eb008fdd 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        188aa8:	e5940034 	ldr	r0, [r4, #52]	; fField52
        188aac:	e5900000 	ldr	r0, [r0]
        188ab0:	eb68f1fd 	bl	1bc52ac <$Length(long)>
        188ab4:	e3e0a000 	mvn	sl, #0	; 0x0
        188ab8:	e58d0000 	str	r0, [sp]
        188abc:	e5947074 	ldr	r7, [r4, #116]	; fField116
        188ac0:	e3770001 	cmn	r7, #1	; 0x1
        188ac4:	0a000020 	beq	188b4c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x6cc>
        188ac8:	e24dd004 	sub	sp, sp, #4	; 0x4
        188acc:	e1a01007 	mov	r1, r7
        188ad0:	e1a00004 	mov	r0, r4
        188ad4:	eb6571f6 	bl	1ae52b4 <TPickView::$GetItemNoText(long)>
        188ad8:	eb68e59b 	bl	1bc214c <$AllocateRefHandle(long)>
        188adc:	e58d0000 	str	r0, [sp]
        188ae0:	e5900000 	ldr	r0, [r0]
        188ae4:	e3300002 	teq	r0, #2	; 0x2
        188ae8:	0a000012 	beq	188b38 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x6b8>
        188aec:	e24dd028 	sub	sp, sp, #40	; 0x28
        188af0:	e28d1028 	add	r1, sp, #40	; 0x28
        188af4:	e1a0000d 	mov	r0, sp
        188af8:	eb008fc8 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        188afc:	e1a00005 	mov	r0, r5
        188b00:	e59d100c 	ldr	r1, [sp, #12]
        188b04:	e1510005 	cmp	r1, r5
        188b08:	359d000c 	ldrcc	r0, [sp, #12]
        188b0c:	e3a03000 	mov	r3, #0	; 0x0
        188b10:	e92d0008 	stmdb	sp!, {r3}
        188b14:	e1a03000 	mov	r3, r0
        188b18:	e3a02000 	mov	r2, #0	; 0x0
        188b1c:	e28d1034 	add	r1, sp, #52	; 0x34
        188b20:	e28d0004 	add	r0, sp, #4	; 0x4
        188b24:	eb687e49 	bl	1ba8450 <TRichString::$CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))>
        188b28:	e1a0a000 	mov	sl, r0
        188b2c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        188b30:	eb68e9a1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188b34:	e28dd028 	add	sp, sp, #40	; 0x28
        188b38:	e59d0000 	ldr	r0, [sp]
        188b3c:	eb68e99e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188b40:	e28dd004 	add	sp, sp, #4	; 0x4
        188b44:	e33a0000 	teq	sl, #0	; 0x0
        188b48:	0a00002e 	beq	188c08 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x788>
        188b4c:	e3a07000 	mov	r7, #0	; 0x0
        188b50:	e59d0000 	ldr	r0, [sp]
        188b54:	e3500000 	cmp	r0, #0	; 0x0
        188b58:	9a000028 	bls	188c00 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x780>
        188b5c:	e24dd004 	sub	sp, sp, #4	; 0x4
        188b60:	e1a01007 	mov	r1, r7
        188b64:	e1a00004 	mov	r0, r4
        188b68:	eb6571d1 	bl	1ae52b4 <TPickView::$GetItemNoText(long)>
        188b6c:	eb68e576 	bl	1bc214c <$AllocateRefHandle(long)>
        188b70:	e58d0000 	str	r0, [sp]
        188b74:	e5900000 	ldr	r0, [r0]
        188b78:	e3300002 	teq	r0, #2	; 0x2
        188b7c:	0a000019 	beq	188be8 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x768>
        188b80:	e24dd028 	sub	sp, sp, #40	; 0x28
        188b84:	e28d1028 	add	r1, sp, #40	; 0x28
        188b88:	e1a0000d 	mov	r0, sp
        188b8c:	eb008fa3 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        188b90:	e1a00005 	mov	r0, r5
        188b94:	e59d100c 	ldr	r1, [sp, #12]
        188b98:	e1510005 	cmp	r1, r5
        188b9c:	359d000c 	ldrcc	r0, [sp, #12]
        188ba0:	e3a03000 	mov	r3, #0	; 0x0
        188ba4:	e92d0008 	stmdb	sp!, {r3}
        188ba8:	e1a03000 	mov	r3, r0
        188bac:	e3a02000 	mov	r2, #0	; 0x0
        188bb0:	e28d1034 	add	r1, sp, #52	; 0x34
        188bb4:	e28d0004 	add	r0, sp, #4	; 0x4
        188bb8:	eb687e24 	bl	1ba8450 <TRichString::$CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))>
        188bbc:	e1b0a000 	movs	sl, r0
        188bc0:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        188bc4:	1a000005 	bne	188be0 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x760>
        188bc8:	eb68e97b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188bcc:	e59d0028 	ldr	r0, [sp, #40]
        188bd0:	eb68e979 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188bd4:	e28dd02c 	add	sp, sp, #44	; 0x2c
        188bd8:	ea00000a 	b	188c08 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x788>
        188bdc:	006811b8 	streqh	r1, [r8], -#24
        188be0:	eb68e975 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188be4:	e28dd028 	add	sp, sp, #40	; 0x28
        188be8:	e59d0000 	ldr	r0, [sp]
        188bec:	eb68e972 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188bf0:	e2877001 	add	r7, r7, #1	; 0x1
        188bf4:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        188bf8:	e1570000 	cmp	r7, r0
        188bfc:	3affffd6 	bcc	188b5c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x6dc>
        188c00:	e33a0000 	teq	sl, #0	; 0x0
        188c04:	1a000002 	bne	188c14 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x794>
        188c08:	e3a02000 	mov	r2, #0	; 0x0
        188c0c:	e5847074 	str	r7, [r4, #116]	; fField116
        188c10:	e5c42078 	strb	r2, [r4, #120]	; fField120
        188c14:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        188c18:	eb68e967 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        188c1c:	e28dd02c 	add	sp, sp, #44	; 0x2c
        188c20:	e3380000 	teq	r8, #0	; 0x0
        188c24:	1a000040 	bne	188d2c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x8ac>
        188c28:	e5940074 	ldr	r0, [r4, #116]	; fField116
        188c2c:	e3700001 	cmn	r0, #1	; 0x1
        188c30:	0a00003d 	beq	188d2c <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x8ac>
        188c34:	e24dd008 	sub	sp, sp, #8	; 0x8
        188c38:	e1a01006 	mov	r1, r6
        188c3c:	e1a0200d 	mov	r2, sp
        188c40:	e1a00004 	mov	r0, r4
        188c44:	eb651ef5 	bl	1ad0820 <TPickView::$GetGridItemRect(PickStuff *, TRect *)>
        188c48:	e5941014 	ldr	r1, [r4, #20]	; fField20
        188c4c:	e1a01841 	mov	r1, r1, asr #16
        188c50:	e59d0000 	ldr	r0, [sp]
        188c54:	e59f5044 	ldr	r5, [pc, #44]	; 188ca0 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x820>
        188c58:	e1510840 	cmp	r1, r0, asr #16
        188c5c:	aa000011 	bge	188ca8 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x828>
        188c60:	e59f703c 	ldr	r7, [pc, #3c]	; 188ca4 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x824>
        188c64:	aa000023 	bge	188cf8 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x878>
        188c68:	e1a01007 	mov	r1, r7
        188c6c:	e1a00004 	mov	r0, r4
        188c70:	e3a02000 	mov	r2, #0	; 0x0
        188c74:	eb6571a0 	bl	1ae52fc <TPickView::$Scroll(RefVar const &, unsigned char)>
        188c78:	e1a01006 	mov	r1, r6
        188c7c:	e1a0200d 	mov	r2, sp
        188c80:	e1a00004 	mov	r0, r4
        188c84:	eb651ee5 	bl	1ad0820 <TPickView::$GetGridItemRect(PickStuff *, TRect *)>
        188c88:	e5940014 	ldr	r0, [r4, #20]	; fField20
        188c8c:	e1a00840 	mov	r0, r0, asr #16
        188c90:	e59d1000 	ldr	r1, [sp]
        188c94:	e1500841 	cmp	r0, r1, asr #16
        188c98:	bafffff2 	blt	188c68 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x7e8>
        188c9c:	ea000015 	b	188cf8 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x878>
        188ca0:	006845b0 	streqh	r4, [r8], -#80
        188ca4:	00682a70 	rsbeq	r2, r8, r0, ror sl
        188ca8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        188cac:	e1a00840 	mov	r0, r0, asr #16
        188cb0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        188cb4:	e1500841 	cmp	r0, r1, asr #16
        188cb8:	aa000011 	bge	188d04 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x884>
        188cbc:	e59f7070 	ldr	r7, [pc, #70]	; 188d34 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x8b4>
        188cc0:	aa00000c 	bge	188cf8 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x878>
        188cc4:	e1a01007 	mov	r1, r7
        188cc8:	e1a00004 	mov	r0, r4
        188ccc:	e3a02000 	mov	r2, #0	; 0x0
        188cd0:	eb657189 	bl	1ae52fc <TPickView::$Scroll(RefVar const &, unsigned char)>
        188cd4:	e1a01006 	mov	r1, r6
        188cd8:	e1a0200d 	mov	r2, sp
        188cdc:	e1a00004 	mov	r0, r4
        188ce0:	eb651ece 	bl	1ad0820 <TPickView::$GetGridItemRect(PickStuff *, TRect *)>
        188ce4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        188ce8:	e1a01841 	mov	r1, r1, asr #16
        188cec:	e5940010 	ldr	r0, [r4, #16]	; fField16
        188cf0:	e1510840 	cmp	r1, r0, asr #16
        188cf4:	bafffff2 	blt	188cc4 <TPickView::HandleKeyDown(unsigned short, unsigned long)+0x844>
        188cf8:	e1a00009 	mov	r0, r9
        188cfc:	e1a01005 	mov	r1, r5
        188d00:	eb69dcce 	bl	1c00040 <$NSSend__FRC6RefVarT1>
        188d04:	e1a00004 	mov	r0, r4
        188d08:	e3a01000 	mov	r1, #0	; 0x0
        188d0c:	e5942000 	ldr	r2, [r4]
        188d10:	e1a0e00f 	mov	lr, pc
        188d14:	e282f054 	add	pc, r2, #84	; 0x54
        188d18:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        188d1c:	e5900000 	ldr	r0, [r0]
        188d20:	e3a01000 	mov	r1, #0	; 0x0
        188d24:	eb64715e 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        188d28:	e28dd008 	add	sp, sp, #8	; 0x8
        188d2c:	e3a00001 	mov	r0, #1	; 0x1
        188d30:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        188d34:	00684d48 	rsbeq	r4, r8, r8, asr #26
    */
}

