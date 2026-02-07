#include "include/TEditView.h"

/**
 * Symbol: TEditView::ClassID( const(void))
 * Address: 000a1a68
 */
TEditView::ClassID( const(void)) {
    /*
         a1a68:	e3a0004d 	mov	r0, #77	; 0x4d
         a1a6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEditView::DerivedFrom( const(long))
 * Address: 000a1a70
 */
TEditView::DerivedFrom( const(long)) {
    /*
         a1a70:	e1a0c00d 	mov	ip, sp
         a1a74:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         a1a78:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1a7c:	e331004d 	teq	r1, #77	; 0x4d
         a1a80:	0a000002 	beq	a1a90 <TEditView::DerivedFrom( const(long))+0x20>
         a1a84:	eb0706cd 	bl	2635c0 <TView::DerivedFrom( const(long))>
         a1a88:	e3300000 	teq	r0, #0	; 0x0
         a1a8c:	0a000001 	beq	a1a98 <TEditView::DerivedFrom( const(long))+0x28>
         a1a90:	e3a00001 	mov	r0, #1	; 0x1
         a1a94:	ea000000 	b	a1a9c <TEditView::DerivedFrom( const(long))+0x2c>
         a1a98:	e3a00000 	mov	r0, #0	; 0x0
         a1a9c:	e20000ff 	and	r0, r0, #255	; 0xff
         a1aa0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)
 * Address: 000a1b2c
 */
TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &) {
    /*
         a1b2c:	e1a0c00d 	mov	ip, sp
         a1b30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         a1b34:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a1b38:	e24cb014 	sub	fp, ip, #20	; 0x14
         a1b3c:	e1a04000 	mov	r4, r0
         a1b40:	e1a06001 	mov	r6, r1
         a1b44:	e1a05002 	mov	r5, r2
         a1b48:	e1a07003 	mov	r7, r3
         a1b4c:	e28b9018 	add	r9, fp, #24	; 0x18
         a1b50:	e8990300 	ldmia	r9, {r8, r9}
         a1b54:	e59ba014 	ldr	sl, [fp, #20]
         a1b58:	e24dd018 	sub	sp, sp, #24	; 0x18
         a1b5c:	e3a00000 	mov	r0, #0	; 0x0
         a1b60:	e58d0004 	str	r0, [sp, #4]	; fField4
         a1b64:	e59f0218 	ldr	r0, [pc, #218]	; a1d84 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x258>
         a1b68:	eb67d3e5 	bl	1a96b04 <$GetPreference(RefVar const &)>
         a1b6c:	e59f1214 	ldr	r1, [pc, #214]	; a1d88 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x25c>
         a1b70:	e3300002 	teq	r0, #2	; 0x2
         a1b74:	e58d1014 	str	r1, [sp, #20]
         a1b78:	0a00004a 	beq	a1ca8 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x17c>
         a1b7c:	e59d1014 	ldr	r1, [sp, #20]
         a1b80:	e5910000 	ldr	r0, [r1]
         a1b84:	e5900068 	ldr	r0, [r0, #104]
         a1b88:	e1300004 	teq	r0, r4
         a1b8c:	1a000045 	bne	a1ca8 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x17c>
         a1b90:	e3a00001 	mov	r0, #1	; 0x1
         a1b94:	e58d0004 	str	r0, [sp, #4]	; fField4
         a1b98:	e2840038 	add	r0, r4, #56	; 0x38
         a1b9c:	e5901002 	ldr	r1, [r0, #2]	; fField2
         a1ba0:	e1a01841 	mov	r1, r1, asr #16
         a1ba4:	e5900004 	ldr	r0, [r0, #4]	; fField4
         a1ba8:	e1a00840 	mov	r0, r0, asr #16
         a1bac:	e24dd010 	sub	sp, sp, #16	; 0x10
         a1bb0:	e5cd1003 	strb	r1, [sp, #3]
         a1bb4:	e1a01441 	mov	r1, r1, asr #8
         a1bb8:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         a1bbc:	e5cd0001 	strb	r0, [sp, #1]
         a1bc0:	e1a00440 	mov	r0, r0, asr #8
         a1bc4:	e5cd0000 	strb	r0, [sp]
         a1bc8:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a1bcc:	e1a01004 	mov	r1, r4
         a1bd0:	e58d0000 	str	r0, [sp]
         a1bd4:	e28d0004 	add	r0, sp, #4	; 0x4
         a1bd8:	eb071649 	bl	267504 <TView::ContentsOrigin(void)>
         a1bdc:	e59d0000 	ldr	r0, [sp]
         a1be0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a1be4:	e0800001 	add	r0, r0, r1
         a1be8:	e1a00800 	mov	r0, r0, lsl #16
         a1bec:	e1a00840 	mov	r0, r0, asr #16
         a1bf0:	e41d2004 	ldr	r2, [sp], -#4	; fField4
         a1bf4:	e1a02822 	mov	r2, r2, lsr #16
         a1bf8:	e59d100a 	ldr	r1, [sp, #10]
         a1bfc:	e0821001 	add	r1, r2, r1
         a1c00:	e1a01801 	mov	r1, r1, lsl #16
         a1c04:	e1a01841 	mov	r1, r1, asr #16
         a1c08:	e5cd0003 	strb	r0, [sp, #3]
         a1c0c:	e1a00440 	mov	r0, r0, asr #8
         a1c10:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a1c14:	e5cd1001 	strb	r1, [sp, #1]
         a1c18:	e1a00441 	mov	r0, r1, asr #8
         a1c1c:	e5cd0000 	strb	r0, [sp]
         a1c20:	e49d000c 	ldr	r0, [sp], #12
         a1c24:	e58d0000 	str	r0, [sp]
         a1c28:	e2840010 	add	r0, r4, #16	; 0x10
         a1c2c:	e5902002 	ldr	r2, [r0, #2]	; fField2
         a1c30:	e1a02822 	mov	r2, r2, lsr #16
         a1c34:	e59d1000 	ldr	r1, [sp]
         a1c38:	e0411002 	sub	r1, r1, r2
         a1c3c:	e5cd1007 	strb	r1, [sp, #7]
         a1c40:	e1a01441 	mov	r1, r1, asr #8
         a1c44:	e5cd1006 	strb	r1, [sp, #6]	; fField6
         a1c48:	e5900000 	ldr	r0, [r0]
         a1c4c:	e1a00820 	mov	r0, r0, lsr #16
         a1c50:	e41d1004 	ldr	r1, [sp], -#4	; fField4
         a1c54:	e1a01821 	mov	r1, r1, lsr #16
         a1c58:	e0410000 	sub	r0, r1, r0
         a1c5c:	e5cd0009 	strb	r0, [sp, #9]
         a1c60:	e1a00440 	mov	r0, r0, asr #8
         a1c64:	e5cd0008 	strb	r0, [sp, #8]	; fField8
         a1c68:	e1a0100d 	mov	r1, sp
         a1c6c:	e1a00004 	mov	r0, r4
         a1c70:	eb6ca232 	bl	1bca540 <TView::$GetChildOrigin(TPoint *)>
         a1c74:	e59d000a 	ldr	r0, [sp, #10]
         a1c78:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a1c7c:	e0800001 	add	r0, r0, r1
         a1c80:	e5cd0009 	strb	r0, [sp, #9]
         a1c84:	e1a00440 	mov	r0, r0, asr #8
         a1c88:	e5cd0008 	strb	r0, [sp, #8]	; fField8
         a1c8c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         a1c90:	e59d0000 	ldr	r0, [sp]
         a1c94:	e0810000 	add	r0, r1, r0
         a1c98:	e5cd000b 	strb	r0, [sp, #11]
         a1c9c:	e1a00440 	mov	r0, r0, asr #8
         a1ca0:	e5cd000a 	strb	r0, [sp, #10]
         a1ca4:	e28dd008 	add	sp, sp, #8	; 0x8
         a1ca8:	e24dd010 	sub	sp, sp, #16	; 0x10
         a1cac:	e59b0024 	ldr	r0, [fp, #36]	; fField36
         a1cb0:	e5900000 	ldr	r0, [r0]
         a1cb4:	e5900000 	ldr	r0, [r0]
         a1cb8:	e2500002 	subs	r0, r0, #2	; 0x2
         a1cbc:	13a00001 	movne	r0, #1	; 0x1
         a1cc0:	e20010ff 	and	r1, r0, #255	; 0xff
         a1cc4:	e58d100c 	str	r1, [sp, #12]
         a1cc8:	e5990000 	ldr	r0, [r9]
         a1ccc:	e5900000 	ldr	r0, [r0]
         a1cd0:	eb6c811d 	bl	1bc214c <$AllocateRefHandle(long)>
         a1cd4:	e58d0008 	str	r0, [sp, #8]	; fField8
         a1cd8:	e3a00002 	mov	r0, #2	; 0x2
         a1cdc:	eb6c811a 	bl	1bc214c <$AllocateRefHandle(long)>
         a1ce0:	e58d0004 	str	r0, [sp, #4]	; fField4
         a1ce4:	e59f00a0 	ldr	r0, [pc, #a0]	; a1d8c <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x260>
         a1ce8:	e58d0020 	str	r0, [sp, #32]	; fField32
         a1cec:	e5900000 	ldr	r0, [r0]
         a1cf0:	eb6c8115 	bl	1bc214c <$AllocateRefHandle(long)>
         a1cf4:	e58d0000 	str	r0, [sp]
         a1cf8:	e59f0090 	ldr	r0, [pc, #90]	; a1d90 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x264>
         a1cfc:	e5900000 	ldr	r0, [r0]
         a1d00:	e5901000 	ldr	r1, [r0]
         a1d04:	e59d0000 	ldr	r0, [sp]
         a1d08:	e5900000 	ldr	r0, [r0]
         a1d0c:	eb6c8953 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a1d10:	eb6c810d 	bl	1bc214c <$AllocateRefHandle(long)>
         a1d14:	e1a09000 	mov	r9, r0
         a1d18:	e59d0000 	ldr	r0, [sp]
         a1d1c:	eb6c8526 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1d20:	e24dd008 	sub	sp, sp, #8	; 0x8
         a1d24:	e3a00002 	mov	r0, #2	; 0x2
         a1d28:	e5991000 	ldr	r1, [r9]
         a1d2c:	e3310002 	teq	r1, #2	; 0x2
         a1d30:	0a000017 	beq	a1d94 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x268>
         a1d34:	e59d1014 	ldr	r1, [sp, #20]
         a1d38:	e3310000 	teq	r1, #0	; 0x0
         a1d3c:	1a000014 	bne	a1d94 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x268>
         a1d40:	eb6c8101 	bl	1bc214c <$AllocateRefHandle(long)>
         a1d44:	e40d0004 	str	r0, [sp], -#4	; fField4
         a1d48:	e28d2004 	add	r2, sp, #4	; 0x4
         a1d4c:	e58d2000 	str	r2, [sp]
         a1d50:	e59d002c 	ldr	r0, [sp, #44]
         a1d54:	e5900000 	ldr	r0, [r0]
         a1d58:	eb6c80fb 	bl	1bc214c <$AllocateRefHandle(long)>
         a1d5c:	e58d0008 	str	r0, [sp, #8]	; fField8
         a1d60:	e28d0008 	add	r0, sp, #8	; 0x8
         a1d64:	e59f1024 	ldr	r1, [pc, #24]	; a1d90 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x264>
         a1d68:	e49d2004 	ldr	r2, [sp], #4	; fField4
         a1d6c:	eb6c917d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a1d70:	e59d0000 	ldr	r0, [sp]
         a1d74:	eb6c8510 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1d78:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a1d7c:	eb6c850e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1d80:	ea00000c 	b	a1db8 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x28c>
         a1d84:	00684270 	rsbeq	r4, r8, r0, ror r2
         a1d88:	0c101934 	ldceq	9, cr1, [r0], -#208
         a1d8c:	0c10180c 	ldceq	8, cr1, [r0], -#48	; fField48
         a1d90:	00683a18 	rsbeq	r3, r8, r8, lsl sl
         a1d94:	e59f01b4 	ldr	r0, [pc, #1b4]	; a1f50 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x424>
         a1d98:	eb67d359 	bl	1a96b04 <$GetPreference(RefVar const &)>
         a1d9c:	e5890000 	str	r0, [r9]
         a1da0:	e59d1014 	ldr	r1, [sp, #20]
         a1da4:	e3310000 	teq	r1, #0	; 0x0
         a1da8:	159b0024 	ldrne	r0, [fp, #36]	; fField36
         a1dac:	15900000 	ldrne	r0, [r0]
         a1db0:	15901000 	ldrne	r1, [r0]
         a1db4:	1a000000 	bne	a1dbc <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x290>
         a1db8:	e5991000 	ldr	r1, [r9]
         a1dbc:	e59d000c 	ldr	r0, [sp, #12]
         a1dc0:	e3380000 	teq	r8, #0	; 0x0
         a1dc4:	e5801000 	str	r1, [r0]
         a1dc8:	0a000023 	beq	a1e5c <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x330>
         a1dcc:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a1dd0:	e5900000 	ldr	r0, [r0]
         a1dd4:	e3300002 	teq	r0, #2	; 0x2
         a1dd8:	1a000002 	bne	a1de8 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x2bc>
         a1ddc:	eb6c80d7 	bl	1bc2140 <$AllocateFrame(void)>
         a1de0:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         a1de4:	e5810000 	str	r0, [r1]
         a1de8:	e24dd008 	sub	sp, sp, #8	; 0x8
         a1dec:	e59f0160 	ldr	r0, [pc, #160]	; a1f54 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x428>
         a1df0:	e3a01002 	mov	r1, #2	; 0x2
         a1df4:	e58d002c 	str	r0, [sp, #44]
         a1df8:	eb6c80ce 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         a1dfc:	eb6c80d2 	bl	1bc214c <$AllocateRefHandle(long)>
         a1e00:	e58d0004 	str	r0, [sp, #4]	; fField4
         a1e04:	e28d2004 	add	r2, sp, #4	; 0x4
         a1e08:	e59d102c 	ldr	r1, [sp, #44]
         a1e0c:	e28d0018 	add	r0, sp, #24	; 0x18
         a1e10:	eb6c9154 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a1e14:	e1a00105 	mov	r0, r5, lsl #2
         a1e18:	eb6c80cb 	bl	1bc214c <$AllocateRefHandle(long)>
         a1e1c:	e58d0000 	str	r0, [sp]
         a1e20:	e5902000 	ldr	r2, [r0]
         a1e24:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a1e28:	e5900000 	ldr	r0, [r0]
         a1e2c:	e3a01000 	mov	r1, #0	; 0x0
         a1e30:	eb6c9148 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a1e34:	e59d0000 	ldr	r0, [sp]
         a1e38:	eb6c84df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1e3c:	e5992000 	ldr	r2, [r9]
         a1e40:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a1e44:	e5900000 	ldr	r0, [r0]
         a1e48:	e3a01001 	mov	r1, #1	; 0x1
         a1e4c:	eb6c9141 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a1e50:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a1e54:	eb6c84d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a1e58:	e28dd008 	add	sp, sp, #8	; 0x8
         a1e5c:	e24dd03c 	sub	sp, sp, #60	; 0x3c
         a1e60:	e3a00002 	mov	r0, #2	; 0x2
         a1e64:	eb6c80b8 	bl	1bc214c <$AllocateRefHandle(long)>
         a1e68:	e3a01000 	mov	r1, #0	; 0x0
         a1e6c:	e58d0014 	str	r0, [sp, #20]
         a1e70:	e5a01004 	str	r1, [r0, #4]!	; fField4
         a1e74:	e58d1030 	str	r1, [sp, #48]	; fField48
         a1e78:	e28d1014 	add	r1, sp, #20	; 0x14
         a1e7c:	e28d0048 	add	r0, sp, #72	; 0x48
         a1e80:	eb6c9d97 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
         a1e84:	e28d1004 	add	r1, sp, #4	; 0x4
         a1e88:	e28d0014 	add	r0, sp, #20	; 0x14
         a1e8c:	eb6ab654 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
         a1e90:	e24dd004 	sub	sp, sp, #4	; 0x4
         a1e94:	e3380000 	teq	r8, #0	; 0x0
         a1e98:	059d1054 	ldreq	r1, [sp, #84]
         a1e9c:	03310000 	teqeq	r1, #0	; 0x0
         a1ea0:	13a00001 	movne	r0, #1	; 0x1
         a1ea4:	03a00000 	moveq	r0, #0	; 0x0
         a1ea8:	e21000ff 	ands	r0, r0, #255	; 0xff
         a1eac:	e58d0000 	str	r0, [sp]
         a1eb0:	0a000102 	beq	a22c0 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x794>
         a1eb4:	e3380000 	teq	r8, #0	; 0x0
         a1eb8:	0a000026 	beq	a1f58 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x42c>
         a1ebc:	e24dd008 	sub	sp, sp, #8	; 0x8
         a1ec0:	e5980028 	ldr	r0, [r8, #40]
         a1ec4:	e58d0000 	str	r0, [sp]
         a1ec8:	e598002c 	ldr	r0, [r8, #44]
         a1ecc:	e58d0004 	str	r0, [sp, #4]	; fField4
         a1ed0:	e59d0000 	ldr	r0, [sp]
         a1ed4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a1ed8:	e0800001 	add	r0, r0, r1
         a1edc:	e1a00800 	mov	r0, r0, lsl #16
         a1ee0:	e1a00840 	mov	r0, r0, asr #16
         a1ee4:	e41d2004 	ldr	r2, [sp], -#4	; fField4
         a1ee8:	e1a02822 	mov	r2, r2, lsr #16
         a1eec:	e59d100a 	ldr	r1, [sp, #10]
         a1ef0:	e0821001 	add	r1, r2, r1
         a1ef4:	e1a01801 	mov	r1, r1, lsl #16
         a1ef8:	e1a01841 	mov	r1, r1, asr #16
         a1efc:	e5cd0003 	strb	r0, [sp, #3]
         a1f00:	e1a00440 	mov	r0, r0, asr #8
         a1f04:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a1f08:	e5cd1001 	strb	r1, [sp, #1]
         a1f0c:	e1a00441 	mov	r0, r1, asr #8
         a1f10:	e5cd0000 	strb	r0, [sp]
         a1f14:	e49d000c 	ldr	r0, [sp], #12
         a1f18:	e58d0004 	str	r0, [sp, #4]	; fField4
         a1f1c:	e59d0006 	ldr	r0, [sp, #6]	; fField6
         a1f20:	e1a00840 	mov	r0, r0, asr #16
         a1f24:	e1a000c0 	mov	r0, r0, asr #1
         a1f28:	e5cd0007 	strb	r0, [sp, #7]
         a1f2c:	e1a00440 	mov	r0, r0, asr #8
         a1f30:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         a1f34:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a1f38:	e1a00840 	mov	r0, r0, asr #16
         a1f3c:	e1a000c0 	mov	r0, r0, asr #1
         a1f40:	e5cd0005 	strb	r0, [sp, #5]
         a1f44:	e1a00440 	mov	r0, r0, asr #8
         a1f48:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         a1f4c:	ea000011 	b	a1f98 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x46c>
         a1f50:	00684e48 	rsbeq	r4, r8, r8, asr #28
         a1f54:	00684930 	rsbeq	r4, r8, r0, lsr r9
         a1f58:	e5971000 	ldr	r1, [r7]
         a1f5c:	e1a01821 	mov	r1, r1, lsr #16
         a1f60:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a1f64:	e0810000 	add	r0, r1, r0
         a1f68:	e5cd0005 	strb	r0, [sp, #5]
         a1f6c:	e1a00440 	mov	r0, r0, asr #8
         a1f70:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         a1f74:	e5971002 	ldr	r1, [r7, #2]	; fField2
         a1f78:	e1a01841 	mov	r1, r1, asr #16
         a1f7c:	e5970006 	ldr	r0, [r7, #6]	; fField6
         a1f80:	e0810840 	add	r0, r1, r0, asr #16
         a1f84:	e0800fa0 	add	r0, r0, r0, lsr #31
         a1f88:	e1a000c0 	mov	r0, r0, asr #1
         a1f8c:	e5cd0007 	strb	r0, [sp, #7]
         a1f90:	e1a00440 	mov	r0, r0, asr #8
         a1f94:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         a1f98:	e3a01002 	mov	r1, #2	; 0x2
         a1f9c:	e0812085 	add	r2, r1, r5, lsl #1
         a1fa0:	e59d005c 	ldr	r0, [sp, #92]	; fField92
         a1fa4:	e3300000 	teq	r0, #0	; 0x0
         a1fa8:	e58d2060 	str	r2, [sp, #96]
         a1fac:	0a00004f 	beq	a20f0 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x5c4>
         a1fb0:	e24dd004 	sub	sp, sp, #4	; 0x4
         a1fb4:	e7960085 	ldr	r0, [r6, r5, lsl #1]
         a1fb8:	e1a00820 	mov	r0, r0, lsr #16
         a1fbc:	e3300000 	teq	r0, #0	; 0x0
         a1fc0:	058d6000 	streq	r6, [sp]
         a1fc4:	0a000003 	beq	a1fd8 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x4ac>
         a1fc8:	e1a01005 	mov	r1, r5
         a1fcc:	e1a00006 	mov	r0, r6
         a1fd0:	eb0007a6 	bl	a3e70 <MakeNullTerminatedString(unsigned short *, unsigned long)>
         a1fd4:	e58d0000 	str	r0, [sp]
         a1fd8:	e24dd008 	sub	sp, sp, #8	; 0x8
         a1fdc:	e3a00000 	mov	r0, #0	; 0x0
         a1fe0:	e58d0004 	str	r0, [sp, #4]	; fField4
         a1fe4:	e58d0000 	str	r0, [sp]
         a1fe8:	e59b0024 	ldr	r0, [fp, #36]	; fField36
         a1fec:	e5900000 	ldr	r0, [r0]
         a1ff0:	e5900000 	ldr	r0, [r0]
         a1ff4:	e3300002 	teq	r0, #2	; 0x2
         a1ff8:	0a000011 	beq	a2044 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x518>
         a1ffc:	e24dd03c 	sub	sp, sp, #60	; 0x3c
         a2000:	e1a0100d 	mov	r1, sp
         a2004:	e59b0024 	ldr	r0, [fp, #36]	; fField36
         a2008:	eb684248 	bl	1ab2930 <$GetInkWordInfo(RefVar const &, InkWordInfo *)>
         a200c:	e3a00000 	mov	r0, #0	; 0x0
         a2010:	e58d003c 	str	r0, [sp, #60]
         a2014:	e59d0028 	ldr	r0, [sp, #40]
         a2018:	e5cd0043 	strb	r0, [sp, #67]
         a201c:	e1a00440 	mov	r0, r0, asr #8
         a2020:	e5cd0042 	strb	r0, [sp, #66]
         a2024:	e59d0038 	ldr	r0, [sp, #56]
         a2028:	e59d1030 	ldr	r1, [sp, #48]	; fField48
         a202c:	e0810000 	add	r0, r1, r0
         a2030:	e5cd0041 	strb	r0, [sp, #65]
         a2034:	e1a00440 	mov	r0, r0, asr #8
         a2038:	e5cd0040 	strb	r0, [sp, #64]	; fField64
         a203c:	e28dd03c 	add	sp, sp, #60	; 0x3c
         a2040:	ea00000c 	b	a2078 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x54c>
         a2044:	e24dd028 	sub	sp, sp, #40	; 0x28
         a2048:	e59d1030 	ldr	r1, [sp, #48]	; fField48
         a204c:	e59d2094 	ldr	r2, [sp, #148]
         a2050:	e1a0000d 	mov	r0, sp
         a2054:	eb042a8d 	bl	1aca90 <TRichString::__ct(unsigned short *, unsigned long)>
         a2058:	e28d2028 	add	r2, sp, #40	; 0x28
         a205c:	e28d1080 	add	r1, sp, #128	; 0x80
         a2060:	e1a0000d 	mov	r0, sp
         a2064:	e3a03000 	mov	r3, #0	; 0x0
         a2068:	eb68086b 	bl	1aa421c <$TextBounds(TRichString &, RefVar const &, TRect *, long)>
         a206c:	e59d0000 	ldr	r0, [sp]
         a2070:	eb6c8451 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a2074:	e28dd028 	add	sp, sp, #40	; 0x28
         a2078:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a207c:	e1300006 	teq	r0, r6
         a2080:	159d0008 	ldrne	r0, [sp, #8]	; fField8
         a2084:	1b6cad95 	blne	1bcd6e0 <$__dl(void *)>
         a2088:	e59d0064 	ldr	r0, [sp, #100]
         a208c:	e5cd0047 	strb	r0, [sp, #71]
         a2090:	e1a00440 	mov	r0, r0, asr #8
         a2094:	e5cd0046 	strb	r0, [sp, #70]
         a2098:	e59d1066 	ldr	r1, [sp, #102]
         a209c:	e59d0014 	ldr	r0, [sp, #20]
         a20a0:	e0410000 	sub	r0, r1, r0
         a20a4:	e5cd0045 	strb	r0, [sp, #69]
         a20a8:	e1a00440 	mov	r0, r0, asr #8
         a20ac:	e5cd0044 	strb	r0, [sp, #68]
         a20b0:	e59d0044 	ldr	r0, [sp, #68]
         a20b4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a20b8:	e0800001 	add	r0, r0, r1
         a20bc:	e5cd004b 	strb	r0, [sp, #75]
         a20c0:	e1a00440 	mov	r0, r0, asr #8
         a20c4:	e5cd004a 	strb	r0, [sp, #74]
         a20c8:	e59d0018 	ldr	r0, [sp, #24]
         a20cc:	e59d1066 	ldr	r1, [sp, #102]
         a20d0:	e0801001 	add	r1, r0, r1
         a20d4:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         a20d8:	e0810000 	add	r0, r1, r0
         a20dc:	e5cd0049 	strb	r0, [sp, #73]
         a20e0:	e1a00440 	mov	r0, r0, asr #8
         a20e4:	e5cd0048 	strb	r0, [sp, #72]	; fField72
         a20e8:	e28dd008 	add	sp, sp, #8	; 0x8
         a20ec:	ea0000b9 	b	a23d8 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x8ac>
         a20f0:	e24dd008 	sub	sp, sp, #8	; 0x8
         a20f4:	e59d100e 	ldr	r1, [sp, #14]
         a20f8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a20fc:	e0410000 	sub	r0, r1, r0
         a2100:	e5cd0001 	strb	r0, [sp, #1]
         a2104:	e1a00440 	mov	r0, r0, asr #8
         a2108:	e5cd0000 	strb	r0, [sp]
         a210c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
         a2110:	e59d1014 	ldr	r1, [sp, #20]
         a2114:	e0810000 	add	r0, r1, r0
         a2118:	e59d100e 	ldr	r1, [sp, #14]
         a211c:	e0800001 	add	r0, r0, r1
         a2120:	e5cd0005 	strb	r0, [sp, #5]
         a2124:	e1a00440 	mov	r0, r0, asr #8
         a2128:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         a212c:	e59a0002 	ldr	r0, [sl, #2]	; fField2
         a2130:	e1a00820 	mov	r0, r0, lsr #16
         a2134:	e5cd0003 	strb	r0, [sp, #3]
         a2138:	e1a00440 	mov	r0, r0, asr #8
         a213c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a2140:	e59d0000 	ldr	r0, [sp]
         a2144:	e5cd0007 	strb	r0, [sp, #7]
         a2148:	e1a00440 	mov	r0, r0, asr #8
         a214c:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         a2150:	e24dd004 	sub	sp, sp, #4	; 0x4
         a2154:	e7960085 	ldr	r0, [r6, r5, lsl #1]
         a2158:	e1a00820 	mov	r0, r0, lsr #16
         a215c:	e3300000 	teq	r0, #0	; 0x0
         a2160:	058d6000 	streq	r6, [sp]
         a2164:	0a000003 	beq	a2178 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x64c>
         a2168:	e1a01005 	mov	r1, r5
         a216c:	e1a00006 	mov	r0, r6
         a2170:	eb00073e 	bl	a3e70 <MakeNullTerminatedString(unsigned short *, unsigned long)>
         a2174:	e58d0000 	str	r0, [sp]
         a2178:	e24dd028 	sub	sp, sp, #40	; 0x28
         a217c:	e59d1028 	ldr	r1, [sp, #40]
         a2180:	e59d2094 	ldr	r2, [sp, #148]
         a2184:	e1a0000d 	mov	r0, sp
         a2188:	eb042a40 	bl	1aca90 <TRichString::__ct(unsigned short *, unsigned long)>
         a218c:	e28d202c 	add	r2, sp, #44	; 0x2c
         a2190:	e28d1080 	add	r1, sp, #128	; 0x80
         a2194:	e1a0000d 	mov	r0, sp
         a2198:	e3a03000 	mov	r3, #0	; 0x0
         a219c:	eb68081e 	bl	1aa421c <$TextBounds(TRichString &, RefVar const &, TRect *, long)>
         a21a0:	e59d0028 	ldr	r0, [sp, #40]
         a21a4:	e1300006 	teq	r0, r6
         a21a8:	159d0028 	ldrne	r0, [sp, #40]
         a21ac:	1b6cad4b 	blne	1bcd6e0 <$__dl(void *)>
         a21b0:	e24dd008 	sub	sp, sp, #8	; 0x8
         a21b4:	e89a5000 	ldmia	sl, {ip, lr}
         a21b8:	e88d5000 	stmia	sp, {ip, lr}
         a21bc:	e59d0042 	ldr	r0, [sp, #66]
         a21c0:	e5cd0005 	strb	r0, [sp, #5]
         a21c4:	e1a00440 	mov	r0, r0, asr #8
         a21c8:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         a21cc:	e24dd008 	sub	sp, sp, #8	; 0x8
         a21d0:	e28d307c 	add	r3, sp, #124	; 0x7c
         a21d4:	e28d203c 	add	r2, sp, #60	; 0x3c
         a21d8:	e28d1008 	add	r1, sp, #8	; 0x8
         a21dc:	e1a00004 	mov	r0, r4
         a21e0:	eb67a0d1 	bl	1a8a52c <TEditView::$AlignBounds(TRect &, TRect &, TRect *)>
         a21e4:	e59d007c 	ldr	r0, [sp, #124]
         a21e8:	e1a00840 	mov	r0, r0, asr #16
         a21ec:	e59d103c 	ldr	r1, [sp, #60]
         a21f0:	e1300841 	teq	r0, r1, asr #16
         a21f4:	059d1080 	ldreq	r1, [sp, #128]
         a21f8:	01a01841 	moveq	r1, r1, asr #16
         a21fc:	059d0040 	ldreq	r0, [sp, #64]	; fField64
         a2200:	01310840 	teqeq	r1, r0, asr #16
         a2204:	13a00001 	movne	r0, #1	; 0x1
         a2208:	03a00000 	moveq	r0, #0	; 0x0
         a220c:	e20000ff 	and	r0, r0, #255	; 0xff
         a2210:	e1a01004 	mov	r1, r4
         a2214:	e58d0004 	str	r0, [sp, #4]	; fField4
         a2218:	e1a0000d 	mov	r0, sp
         a221c:	eb0714b8 	bl	267504 <TView::ContentsOrigin(void)>
         a2220:	e24dd004 	sub	sp, sp, #4	; 0x4
         a2224:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a2228:	e2600000 	rsb	r0, r0, #0	; 0x0
         a222c:	e1a01800 	mov	r1, r0, lsl #16
         a2230:	e1a01841 	mov	r1, r1, asr #16
         a2234:	e59d0006 	ldr	r0, [sp, #6]	; fField6
         a2238:	e2600000 	rsb	r0, r0, #0	; 0x0
         a223c:	e1a00800 	mov	r0, r0, lsl #16
         a2240:	e1a00840 	mov	r0, r0, asr #16
         a2244:	e24dd004 	sub	sp, sp, #4	; 0x4
         a2248:	e5cd1003 	strb	r1, [sp, #3]
         a224c:	e1a01441 	mov	r1, r1, asr #8
         a2250:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         a2254:	e5cd0001 	strb	r0, [sp, #1]
         a2258:	e1a00440 	mov	r0, r0, asr #8
         a225c:	e5cd0000 	strb	r0, [sp]
         a2260:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a2264:	e58d0000 	str	r0, [sp]
         a2268:	e28d0080 	add	r0, sp, #128	; 0x80
         a226c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a2270:	e1a01841 	mov	r1, r1, asr #16
         a2274:	e59d2000 	ldr	r2, [sp]
         a2278:	e1a02842 	mov	r2, r2, asr #16
         a227c:	eb6abd99 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a2280:	e28dd004 	add	sp, sp, #4	; 0x4
         a2284:	e59d0048 	ldr	r0, [sp, #72]	; fField72
         a2288:	e1a00840 	mov	r0, r0, asr #16
         a228c:	e59d1000 	ldr	r1, [sp]
         a2290:	e0402841 	sub	r2, r0, r1, asr #16
         a2294:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a2298:	e3300000 	teq	r0, #0	; 0x0
         a229c:	1a000003 	bne	a22b0 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x784>
         a22a0:	e59d304c 	ldr	r3, [sp, #76]	; fField76
         a22a4:	e28d107c 	add	r1, sp, #124	; 0x7c
         a22a8:	e1a00004 	mov	r0, r4
         a22ac:	eb67a09f 	bl	1a8a530 <TEditView::$AlignToLineSpacing(TRect *, long, long)>
         a22b0:	e5bd0010 	ldr	r0, [sp, #16]!	; fField16
         a22b4:	eb6c83c0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a22b8:	e28dd034 	add	sp, sp, #52	; 0x34
         a22bc:	ea000046 	b	a23dc <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x8b0>
         a22c0:	e5970004 	ldr	r0, [r7, #4]	; fField4
         a22c4:	e1a00820 	mov	r0, r0, lsr #16
         a22c8:	e5cd0005 	strb	r0, [sp, #5]
         a22cc:	e1a00440 	mov	r0, r0, asr #8
         a22d0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         a22d4:	e5971002 	ldr	r1, [r7, #2]	; fField2
         a22d8:	e1a01841 	mov	r1, r1, asr #16
         a22dc:	e5970006 	ldr	r0, [r7, #6]	; fField6
         a22e0:	e0810840 	add	r0, r1, r0, asr #16
         a22e4:	e0800fa0 	add	r0, r0, r0, lsr #31
         a22e8:	e1a000c0 	mov	r0, r0, asr #1
         a22ec:	e5cd0007 	strb	r0, [sp, #7]
         a22f0:	e1a00440 	mov	r0, r0, asr #8
         a22f4:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         a22f8:	e28d0038 	add	r0, sp, #56	; 0x38
         a22fc:	e89a5000 	ldmia	sl, {ip, lr}
         a2300:	e8805000 	stmia	r0, {ip, lr}
         a2304:	e24dd008 	sub	sp, sp, #8	; 0x8
         a2308:	e1a01004 	mov	r1, r4
         a230c:	e28d0004 	add	r0, sp, #4	; 0x4
         a2310:	eb07147b 	bl	267504 <TView::ContentsOrigin(void)>
         a2314:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a2318:	e2600000 	rsb	r0, r0, #0	; 0x0
         a231c:	e1a01800 	mov	r1, r0, lsl #16
         a2320:	e1a01841 	mov	r1, r1, asr #16
         a2324:	e59d0006 	ldr	r0, [sp, #6]	; fField6
         a2328:	e2600000 	rsb	r0, r0, #0	; 0x0
         a232c:	e1a00800 	mov	r0, r0, lsl #16
         a2330:	e1a00840 	mov	r0, r0, asr #16
         a2334:	e24dd004 	sub	sp, sp, #4	; 0x4
         a2338:	e5cd1003 	strb	r1, [sp, #3]
         a233c:	e1a01441 	mov	r1, r1, asr #8
         a2340:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         a2344:	e5cd0001 	strb	r0, [sp, #1]
         a2348:	e1a00440 	mov	r0, r0, asr #8
         a234c:	e5cd0000 	strb	r0, [sp]
         a2350:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a2354:	e58d0000 	str	r0, [sp]
         a2358:	e28d0040 	add	r0, sp, #64	; 0x40
         a235c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a2360:	e1a01841 	mov	r1, r1, asr #16
         a2364:	e59d2000 	ldr	r2, [sp]
         a2368:	e1a02842 	mov	r2, r2, asr #16
         a236c:	eb6abd5d 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a2370:	e28dd008 	add	sp, sp, #8	; 0x8
         a2374:	e59d0050 	ldr	r0, [sp, #80]
         a2378:	e5900000 	ldr	r0, [r0]
         a237c:	e3300002 	teq	r0, #2	; 0x2
         a2380:	0a000015 	beq	a23dc <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x8b0>
         a2384:	e24dd004 	sub	sp, sp, #4	; 0x4
         a2388:	e59f120c 	ldr	r1, [pc, #20c]	; a259c <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0xa70>
         a238c:	e5911000 	ldr	r1, [r1]
         a2390:	e5911000 	ldr	r1, [r1]
         a2394:	eb6c87b1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a2398:	eb6c7f6b 	bl	1bc214c <$AllocateRefHandle(long)>
         a239c:	e58d0000 	str	r0, [sp]
         a23a0:	e5900000 	ldr	r0, [r0]
         a23a4:	e3300002 	teq	r0, #2	; 0x2
         a23a8:	0a000008 	beq	a23d0 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x8a4>
         a23ac:	e3100003 	tst	r0, #3	; 0x3
         a23b0:	01a00140 	moveq	r0, r0, asr #2
         a23b4:	0a000000 	beq	a23bc <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0x890>
         a23b8:	eb6c7f57 	bl	1bc211c <$_RINTError(long)>
         a23bc:	e59d103e 	ldr	r1, [sp, #62]
         a23c0:	e0800001 	add	r0, r0, r1
         a23c4:	e5cd003d 	strb	r0, [sp, #61]
         a23c8:	e1a00440 	mov	r0, r0, asr #8
         a23cc:	e5cd003c 	strb	r0, [sp, #60]
         a23d0:	e59d0000 	ldr	r0, [sp]
         a23d4:	eb6c8378 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a23d8:	e28dd004 	add	sp, sp, #4	; 0x4
         a23dc:	e24dd008 	sub	sp, sp, #8	; 0x8
         a23e0:	e3a03000 	mov	r3, #0	; 0x0
         a23e4:	e92d0008 	stmdb	sp!, {r3}
         a23e8:	e28d305c 	add	r3, sp, #92	; 0x5c
         a23ec:	e28d2044 	add	r2, sp, #68	; 0x44
         a23f0:	e1a01005 	mov	r1, r5
         a23f4:	e1a00006 	mov	r0, r6
         a23f8:	eb67e66e 	bl	1a9bdb8 <$MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)>
         a23fc:	e28dd004 	add	sp, sp, #4	; 0x4
         a2400:	eb6c7f51 	bl	1bc214c <$AllocateRefHandle(long)>
         a2404:	e58d0004 	str	r0, [sp, #4]	; fField4
         a2408:	e2840024 	add	r0, r4, #36	; 0x24
         a240c:	e1a0200d 	mov	r2, sp
         a2410:	e59f1188 	ldr	r1, [pc, #188]	; a25a0 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0xa74>
         a2414:	e1a06001 	mov	r6, r1
         a2418:	eb6c8792 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         a241c:	e59d0000 	ldr	r0, [sp]
         a2420:	e3300000 	teq	r0, #0	; 0x0
         a2424:	0a000040 	beq	a252c <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0xa00>
         a2428:	e24dd008 	sub	sp, sp, #8	; 0x8
         a242c:	e89a5000 	ldmia	sl, {ip, lr}
         a2430:	e88d5000 	stmia	sp, {ip, lr}
         a2434:	e24dd008 	sub	sp, sp, #8	; 0x8
         a2438:	e1a01004 	mov	r1, r4
         a243c:	e28d0004 	add	r0, sp, #4	; 0x4
         a2440:	eb07142f 	bl	267504 <TView::ContentsOrigin(void)>
         a2444:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a2448:	e2600000 	rsb	r0, r0, #0	; 0x0
         a244c:	e1a01800 	mov	r1, r0, lsl #16
         a2450:	e1a01841 	mov	r1, r1, asr #16
         a2454:	e59d0006 	ldr	r0, [sp, #6]	; fField6
         a2458:	e2600000 	rsb	r0, r0, #0	; 0x0
         a245c:	e1a00800 	mov	r0, r0, lsl #16
         a2460:	e1a00840 	mov	r0, r0, asr #16
         a2464:	e24dd004 	sub	sp, sp, #4	; 0x4
         a2468:	e5cd1003 	strb	r1, [sp, #3]
         a246c:	e1a01441 	mov	r1, r1, asr #8
         a2470:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         a2474:	e5cd0001 	strb	r0, [sp, #1]
         a2478:	e1a00440 	mov	r0, r0, asr #8
         a247c:	e5cd0000 	strb	r0, [sp]
         a2480:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a2484:	e58d0000 	str	r0, [sp]
         a2488:	e28d0008 	add	r0, sp, #8	; 0x8
         a248c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a2490:	e1a01841 	mov	r1, r1, asr #16
         a2494:	e59d2000 	ldr	r2, [sp]
         a2498:	e1a02842 	mov	r2, r2, asr #16
         a249c:	eb6abd11 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a24a0:	e28dd004 	add	sp, sp, #4	; 0x4
         a24a4:	e3a00002 	mov	r0, #2	; 0x2
         a24a8:	eb67e63b 	bl	1a9bd9c <$MakeArray(long)>
         a24ac:	eb6c7f26 	bl	1bc214c <$AllocateRefHandle(long)>
         a24b0:	e58d0000 	str	r0, [sp]
         a24b4:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a24b8:	e5902000 	ldr	r2, [r0]
         a24bc:	e59d0000 	ldr	r0, [sp]
         a24c0:	e5900000 	ldr	r0, [r0]
         a24c4:	e3a01000 	mov	r1, #0	; 0x0
         a24c8:	eb6c8fa2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a24cc:	e28d0004 	add	r0, sp, #4	; 0x4
         a24d0:	eb6d34b1 	bl	1bef79c <$ToObject(TRect const &)>
         a24d4:	eb6c7f1c 	bl	1bc214c <$AllocateRefHandle(long)>
         a24d8:	e1a0a000 	mov	sl, r0
         a24dc:	e5902000 	ldr	r2, [r0]
         a24e0:	e59d0000 	ldr	r0, [sp]
         a24e4:	e5900000 	ldr	r0, [r0]
         a24e8:	e3a01001 	mov	r1, #1	; 0x1
         a24ec:	eb6c8f99 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a24f0:	e1a0000a 	mov	r0, sl
         a24f4:	eb6c8330 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a24f8:	e3a03000 	mov	r3, #0	; 0x0
         a24fc:	e92d0008 	stmdb	sp!, {r3}
         a2500:	e28d2004 	add	r2, sp, #4	; 0x4
         a2504:	e1a01006 	mov	r1, r6
         a2508:	e1a00004 	mov	r0, r4
         a250c:	e3a03001 	mov	r3, #1	; 0x1
         a2510:	eb6ca432 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         a2514:	e28dd004 	add	sp, sp, #4	; 0x4
         a2518:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         a251c:	e5810000 	str	r0, [r1]
         a2520:	e59d0000 	ldr	r0, [sp]
         a2524:	eb6c8324 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a2528:	e28dd00c 	add	sp, sp, #12	; 0xc
         a252c:	e28d1004 	add	r1, sp, #4	; 0x4
         a2530:	e1a00004 	mov	r0, r4
         a2534:	eb679be1 	bl	1a894c0 <TEditView::$AddForm(RefVar const &)>
         a2538:	e1b04000 	movs	r4, r0
         a253c:	0a00003a 	beq	a262c <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0xb00>
         a2540:	e3a03000 	mov	r3, #0	; 0x0
         a2544:	e92d0008 	stmdb	sp!, {r3}
         a2548:	e1a00004 	mov	r0, r4
         a254c:	e5941000 	ldr	r1, [r4]
         a2550:	e1a0e00f 	mov	lr, pc
         a2554:	e281ff51 	add	pc, r1, #324	; 0x144
         a2558:	e1a01000 	mov	r1, r0
         a255c:	e1a02005 	mov	r2, r5
         a2560:	e59d0078 	ldr	r0, [sp, #120]
         a2564:	e5900000 	ldr	r0, [r0]
         a2568:	e3a03000 	mov	r3, #0	; 0x0
         a256c:	eb68c51c 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a2570:	e28dd004 	add	sp, sp, #4	; 0x4
         a2574:	e59b0020 	ldr	r0, [fp, #32]	; fField32
         a2578:	e3300000 	teq	r0, #0	; 0x0
         a257c:	13a01000 	movne	r1, #0	; 0x0
         a2580:	159b0020 	ldrne	r0, [fp, #32]	; fField32
         a2584:	15801000 	strne	r1, [r0]
         a2588:	e3380000 	teq	r8, #0	; 0x0
         a258c:	0a000004 	beq	a25a4 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0xa78>
         a2590:	e1a00008 	mov	r0, r8
         a2594:	eb67c0f4 	bl	1a9296c <TUnitPublic::$EndTime(void)>
         a2598:	ea000002 	b	a25a8 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0xa7c>
         a259c:	00683b30 	rsbeq	r3, r8, r0, lsr fp
         a25a0:	00682b18 	rsbeq	r2, r8, r8, lsl fp
         a25a4:	eb6d40dd 	bl	1bf2920 <$Ticks(void)>
         a25a8:	e1a06000 	mov	r6, r0
         a25ac:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a25b0:	e3300000 	teq	r0, #0	; 0x0
         a25b4:	0a000009 	beq	a25e0 <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0xab4>
         a25b8:	e1a00004 	mov	r0, r4
         a25bc:	e5941000 	ldr	r1, [r4]
         a25c0:	e1a0e00f 	mov	lr, pc
         a25c4:	e281ff51 	add	pc, r1, #324	; 0x144
         a25c8:	e1a03006 	mov	r3, r6
         a25cc:	e28d200c 	add	r2, sp, #12	; 0xc
         a25d0:	e1a01007 	mov	r1, r7
         a25d4:	e590c000 	ldr	ip, [r0]
         a25d8:	e1a0e00f 	mov	lr, pc
         a25dc:	e28cfe15 	add	pc, ip, #336	; 0x150
         a25e0:	e1a00004 	mov	r0, r4
         a25e4:	e5941000 	ldr	r1, [r4]
         a25e8:	e1a0e00f 	mov	lr, pc
         a25ec:	e281ff51 	add	pc, r1, #324	; 0x144
         a25f0:	eb68070e 	bl	1aa4230 <$TimeStampTextChange(TView *)>
         a25f4:	e3380000 	teq	r8, #0	; 0x0
         a25f8:	159f006c 	ldrne	r0, [pc, #6c]	; a266c <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0xb40>	; fField6
         a25fc:	15d00000 	ldrneb	r0, [r0]
         a2600:	13300000 	teqne	r0, #0	; 0x0
         a2604:	0a000008 	beq	a262c <TEditView::AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)+0xb00>
         a2608:	e1a00004 	mov	r0, r4
         a260c:	e5941000 	ldr	r1, [r4]
         a2610:	e1a0e00f 	mov	lr, pc
         a2614:	e281ff51 	add	pc, r1, #324	; 0x144
         a2618:	e59b1020 	ldr	r1, [fp, #32]	; fField32
         a261c:	e5911000 	ldr	r1, [r1]
         a2620:	e0812005 	add	r2, r1, r5
         a2624:	e1a03008 	mov	r3, r8
         a2628:	eb68178a 	bl	1aa8458 <$AddWordInfo__FP5TViewlT2P11TUnitPublic>
         a262c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a2630:	eb6c82e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a2634:	e59d003c 	ldr	r0, [sp, #60]
         a2638:	e3300000 	teq	r0, #0	; 0x0
         a263c:	159d003c 	ldrne	r0, [sp, #60]
         a2640:	1b6aac25 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
         a2644:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         a2648:	eb6c82db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a264c:	e1a00009 	mov	r0, r9
         a2650:	eb6c82d9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a2654:	e59d0054 	ldr	r0, [sp, #84]
         a2658:	eb6c82d7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a265c:	e59d0058 	ldr	r0, [sp, #88]
         a2660:	eb6c82d5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a2664:	e1a00004 	mov	r0, r4
         a2668:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a266c:	0c101710 	ldceq	7, cr1, [r0], -#64	; fField64
    */
}

/**
 * Symbol: TEditView::AlignBounds(TRect &, TRect &, TRect *)
 * Address: 000a26c4
 */
TEditView::AlignBounds(TRect &, TRect &, TRect *) {
    /*
         a26c4:	e1a0c00d 	mov	ip, sp
         a26c8:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a26cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         a26d0:	e1a05001 	mov	r5, r1
         a26d4:	e1a04002 	mov	r4, r2
         a26d8:	e24dd028 	sub	sp, sp, #40	; 0x28
         a26dc:	e3a0700a 	mov	r7, #10	; 0xa
         a26e0:	e3e0a102 	mvn	sl, #-2147483648	; 0x80000000
         a26e4:	e3a0600a 	mov	r6, #10	; 0xa
         a26e8:	e3e09102 	mvn	r9, #-2147483648	; 0x80000000
         a26ec:	e5911002 	ldr	r1, [r1, #2]	; fField2
         a26f0:	e1a01841 	mov	r1, r1, asr #16
         a26f4:	e5950006 	ldr	r0, [r5, #6]	; fField6
         a26f8:	e0811840 	add	r1, r1, r0, asr #16
         a26fc:	e0811fa1 	add	r1, r1, r1, lsr #31
         a2700:	e1a010c1 	mov	r1, r1, asr #1
         a2704:	e58d1004 	str	r1, [sp, #4]	; fField4
         a2708:	e5950004 	ldr	r0, [r5, #4]	; fField4
         a270c:	e1a00840 	mov	r0, r0, asr #16
         a2710:	e5951000 	ldr	r1, [r5]
         a2714:	e0800841 	add	r0, r0, r1, asr #16
         a2718:	e0800fa0 	add	r0, r0, r0, lsr #31
         a271c:	e1a000c0 	mov	r0, r0, asr #1
         a2720:	e40d000c 	str	r0, [sp], -#12
         a2724:	e51b0038 	ldr	r0, [fp, -#56]
         a2728:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a272c:	e1a0000d 	mov	r0, sp
         a2730:	eb67973f 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a2734:	e1a0000d 	mov	r0, sp
         a2738:	eb67e9b8 	bl	1a9ce20 <TListLoop::$Next(void)>
         a273c:	e3300000 	teq	r0, #0	; 0x0
         a2740:	0a0000d6 	beq	a2aa0 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x3dc>
         a2744:	e2800010 	add	r0, r0, #16	; 0x10
         a2748:	e58d0030 	str	r0, [sp, #48]	; fField48
         a274c:	e58d002c 	str	r0, [sp, #44]
         a2750:	e5901006 	ldr	r1, [r0, #6]	; fField6
         a2754:	e1a01841 	mov	r1, r1, asr #16
         a2758:	e5900002 	ldr	r0, [r0, #2]	; fField2
         a275c:	e1a00840 	mov	r0, r0, asr #16
         a2760:	e5953006 	ldr	r3, [r5, #6]	; fField6
         a2764:	e1a03843 	mov	r3, r3, asr #16
         a2768:	e5952002 	ldr	r2, [r5, #2]	; fField2
         a276c:	e1a02842 	mov	r2, r2, asr #16
         a2770:	eb67f1f2 	bl	1a9ef40 <$RangeDistance__FlN31>
         a2774:	e1a08000 	mov	r8, r0
         a2778:	e59d002c 	ldr	r0, [sp, #44]
         a277c:	e5901004 	ldr	r1, [r0, #4]	; fField4
         a2780:	e1a01841 	mov	r1, r1, asr #16
         a2784:	e5900000 	ldr	r0, [r0]
         a2788:	e1a00840 	mov	r0, r0, asr #16
         a278c:	e5953004 	ldr	r3, [r5, #4]	; fField4
         a2790:	e1a03843 	mov	r3, r3, asr #16
         a2794:	e5952000 	ldr	r2, [r5]
         a2798:	e1a02842 	mov	r2, r2, asr #16
         a279c:	eb67f1e7 	bl	1a9ef40 <$RangeDistance__FlN31>
         a27a0:	e150000a 	cmp	r0, sl
         a27a4:	ca00005d 	bgt	a2920 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x25c>
         a27a8:	e24dd004 	sub	sp, sp, #4	; 0x4
         a27ac:	e59d1034 	ldr	r1, [sp, #52]	; fField52
         a27b0:	e5912002 	ldr	r2, [r1, #2]	; fField2
         a27b4:	e1a02842 	mov	r2, r2, asr #16
         a27b8:	e5911006 	ldr	r1, [r1, #6]	; fField6
         a27bc:	e1a01841 	mov	r1, r1, asr #16
         a27c0:	e0823001 	add	r3, r2, r1
         a27c4:	e0833fa3 	add	r3, r3, r3, lsr #31
         a27c8:	e1a030c3 	mov	r3, r3, asr #1
         a27cc:	e58d3000 	str	r3, [sp]
         a27d0:	e08a3faa 	add	r3, sl, sl, lsr #31
         a27d4:	e15000c3 	cmp	r0, r3, asr #1
         a27d8:	b3a0700a 	movlt	r7, #10	; 0xa
         a27dc:	e5953002 	ldr	r3, [r5, #2]	; fField2
         a27e0:	e1a03843 	mov	r3, r3, asr #16
         a27e4:	e58d302c 	str	r3, [sp, #44]
         a27e8:	e0523003 	subs	r3, r2, r3
         a27ec:	51a0e003 	movpl	lr, r3
         a27f0:	4263e000 	rsbmi	lr, r3, #0	; 0x0
         a27f4:	e3570000 	cmp	r7, #0	; 0x0
         a27f8:	a1a0c007 	movge	ip, r7
         a27fc:	b267c000 	rsblt	ip, r7, #0	; 0x0
         a2800:	e15e000c 	cmp	lr, ip
         a2804:	aa000004 	bge	a281c <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x158>
         a2808:	e1a07003 	mov	r7, r3
         a280c:	e1a0a000 	mov	sl, r0
         a2810:	e5943002 	ldr	r3, [r4, #2]	; fField2
         a2814:	e0423843 	sub	r3, r2, r3, asr #16
         a2818:	e58d301c 	str	r3, [sp, #28]	; fField28
         a281c:	e5953006 	ldr	r3, [r5, #6]	; fField6
         a2820:	e1a03843 	mov	r3, r3, asr #16
         a2824:	e58d3028 	str	r3, [sp, #40]
         a2828:	e0513003 	subs	r3, r1, r3
         a282c:	51a0c003 	movpl	ip, r3
         a2830:	4263c000 	rsbmi	ip, r3, #0	; 0x0
         a2834:	e3570000 	cmp	r7, #0	; 0x0
         a2838:	a1a0e007 	movge	lr, r7
         a283c:	b267e000 	rsblt	lr, r7, #0	; 0x0
         a2840:	e15c000e 	cmp	ip, lr
         a2844:	aa000004 	bge	a285c <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x198>
         a2848:	e1a07003 	mov	r7, r3
         a284c:	e1a0a000 	mov	sl, r0
         a2850:	e5943006 	ldr	r3, [r4, #6]	; fField6
         a2854:	e0413843 	sub	r3, r1, r3, asr #16
         a2858:	e58d301c 	str	r3, [sp, #28]	; fField28
         a285c:	e59d3028 	ldr	r3, [sp, #40]
         a2860:	e0523003 	subs	r3, r2, r3
         a2864:	51a0e003 	movpl	lr, r3
         a2868:	4263e000 	rsbmi	lr, r3, #0	; 0x0
         a286c:	e3570000 	cmp	r7, #0	; 0x0
         a2870:	a1a0c007 	movge	ip, r7
         a2874:	b267c000 	rsblt	ip, r7, #0	; 0x0
         a2878:	e15e000c 	cmp	lr, ip
         a287c:	aa000004 	bge	a2894 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x1d0>
         a2880:	e1a07003 	mov	r7, r3
         a2884:	e1a0a000 	mov	sl, r0
         a2888:	e5943006 	ldr	r3, [r4, #6]	; fField6
         a288c:	e0423843 	sub	r3, r2, r3, asr #16
         a2890:	e58d301c 	str	r3, [sp, #28]	; fField28
         a2894:	e59d302c 	ldr	r3, [sp, #44]
         a2898:	e0512003 	subs	r2, r1, r3
         a289c:	51a03002 	movpl	r3, r2
         a28a0:	42623000 	rsbmi	r3, r2, #0	; 0x0
         a28a4:	e3570000 	cmp	r7, #0	; 0x0
         a28a8:	a1a0c007 	movge	ip, r7
         a28ac:	b267c000 	rsblt	ip, r7, #0	; 0x0
         a28b0:	e153000c 	cmp	r3, ip
         a28b4:	aa000004 	bge	a28cc <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x208>
         a28b8:	e1a07002 	mov	r7, r2
         a28bc:	e1a0a000 	mov	sl, r0
         a28c0:	e5942002 	ldr	r2, [r4, #2]	; fField2
         a28c4:	e0413842 	sub	r3, r1, r2, asr #16
         a28c8:	e58d301c 	str	r3, [sp, #28]	; fField28
         a28cc:	e59d1014 	ldr	r1, [sp, #20]
         a28d0:	e59d3000 	ldr	r3, [sp]
         a28d4:	e0531001 	subs	r1, r3, r1
         a28d8:	51a02001 	movpl	r2, r1
         a28dc:	42612000 	rsbmi	r2, r1, #0	; 0x0
         a28e0:	e3570000 	cmp	r7, #0	; 0x0
         a28e4:	a1a03007 	movge	r3, r7
         a28e8:	b2673000 	rsblt	r3, r7, #0	; 0x0
         a28ec:	e1520003 	cmp	r2, r3
         a28f0:	aa000009 	bge	a291c <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x258>
         a28f4:	e1a07001 	mov	r7, r1
         a28f8:	e1a0a000 	mov	sl, r0
         a28fc:	e5941006 	ldr	r1, [r4, #6]	; fField6
         a2900:	e1a01841 	mov	r1, r1, asr #16
         a2904:	e5940002 	ldr	r0, [r4, #2]	; fField2
         a2908:	e0810840 	add	r0, r1, r0, asr #16
         a290c:	e0800fa0 	add	r0, r0, r0, lsr #31
         a2910:	e59d3000 	ldr	r3, [sp]
         a2914:	e04330c0 	sub	r3, r3, r0, asr #1
         a2918:	e58d301c 	str	r3, [sp, #28]	; fField28
         a291c:	e28dd004 	add	sp, sp, #4	; 0x4
         a2920:	e1580009 	cmp	r8, r9
         a2924:	ca000059 	bgt	a2a90 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x3cc>
         a2928:	e59d0030 	ldr	r0, [sp, #48]	; fField48
         a292c:	e5900000 	ldr	r0, [r0]
         a2930:	e1a00840 	mov	r0, r0, asr #16
         a2934:	e59d1030 	ldr	r1, [sp, #48]	; fField48
         a2938:	e5911004 	ldr	r1, [r1, #4]	; fField4
         a293c:	e1a01841 	mov	r1, r1, asr #16
         a2940:	e0803001 	add	r3, r0, r1
         a2944:	e0833fa3 	add	r3, r3, r3, lsr #31
         a2948:	e1a030c3 	mov	r3, r3, asr #1
         a294c:	e0892fa9 	add	r2, r9, r9, lsr #31
         a2950:	e15800c2 	cmp	r8, r2, asr #1
         a2954:	b3a0600a 	movlt	r6, #10	; 0xa
         a2958:	e5952000 	ldr	r2, [r5]
         a295c:	e1a02842 	mov	r2, r2, asr #16
         a2960:	e58d2020 	str	r2, [sp, #32]	; fField32
         a2964:	e0502002 	subs	r2, r0, r2
         a2968:	51a0e002 	movpl	lr, r2
         a296c:	4262e000 	rsbmi	lr, r2, #0	; 0x0
         a2970:	e3560000 	cmp	r6, #0	; 0x0
         a2974:	a1a0c006 	movge	ip, r6
         a2978:	b266c000 	rsblt	ip, r6, #0	; 0x0
         a297c:	e15e000c 	cmp	lr, ip
         a2980:	aa000004 	bge	a2998 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x2d4>
         a2984:	e1a06002 	mov	r6, r2
         a2988:	e1a09008 	mov	r9, r8
         a298c:	e5942000 	ldr	r2, [r4]
         a2990:	e0402842 	sub	r2, r0, r2, asr #16
         a2994:	e58d2014 	str	r2, [sp, #20]
         a2998:	e5952004 	ldr	r2, [r5, #4]	; fField4
         a299c:	e1a02842 	mov	r2, r2, asr #16
         a29a0:	e58d201c 	str	r2, [sp, #28]	; fField28
         a29a4:	e0512002 	subs	r2, r1, r2
         a29a8:	51a0c002 	movpl	ip, r2
         a29ac:	4262c000 	rsbmi	ip, r2, #0	; 0x0
         a29b0:	e3560000 	cmp	r6, #0	; 0x0
         a29b4:	a1a0e006 	movge	lr, r6
         a29b8:	b266e000 	rsblt	lr, r6, #0	; 0x0
         a29bc:	e15c000e 	cmp	ip, lr
         a29c0:	aa000004 	bge	a29d8 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x314>
         a29c4:	e1a06002 	mov	r6, r2
         a29c8:	e1a09008 	mov	r9, r8
         a29cc:	e5942004 	ldr	r2, [r4, #4]	; fField4
         a29d0:	e0412842 	sub	r2, r1, r2, asr #16
         a29d4:	e58d2014 	str	r2, [sp, #20]
         a29d8:	e59d201c 	ldr	r2, [sp, #28]	; fField28
         a29dc:	e0502002 	subs	r2, r0, r2
         a29e0:	51a0c002 	movpl	ip, r2
         a29e4:	4262c000 	rsbmi	ip, r2, #0	; 0x0
         a29e8:	e3560000 	cmp	r6, #0	; 0x0
         a29ec:	a1a0e006 	movge	lr, r6
         a29f0:	b266e000 	rsblt	lr, r6, #0	; 0x0
         a29f4:	e15c000e 	cmp	ip, lr
         a29f8:	aa000004 	bge	a2a10 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x34c>
         a29fc:	e1a06002 	mov	r6, r2
         a2a00:	e1a09008 	mov	r9, r8
         a2a04:	e5942004 	ldr	r2, [r4, #4]	; fField4
         a2a08:	e0402842 	sub	r2, r0, r2, asr #16
         a2a0c:	e58d2014 	str	r2, [sp, #20]
         a2a10:	e59d2020 	ldr	r2, [sp, #32]	; fField32
         a2a14:	e0510002 	subs	r0, r1, r2
         a2a18:	51a0c000 	movpl	ip, r0
         a2a1c:	4260c000 	rsbmi	ip, r0, #0	; 0x0
         a2a20:	e3560000 	cmp	r6, #0	; 0x0
         a2a24:	a1a02006 	movge	r2, r6
         a2a28:	b2662000 	rsblt	r2, r6, #0	; 0x0
         a2a2c:	e15c0002 	cmp	ip, r2
         a2a30:	aa000004 	bge	a2a48 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x384>
         a2a34:	e1a06000 	mov	r6, r0
         a2a38:	e1a09008 	mov	r9, r8
         a2a3c:	e5940000 	ldr	r0, [r4]
         a2a40:	e0412840 	sub	r2, r1, r0, asr #16
         a2a44:	e58d2014 	str	r2, [sp, #20]
         a2a48:	e59d000c 	ldr	r0, [sp, #12]
         a2a4c:	e0530000 	subs	r0, r3, r0
         a2a50:	51a02000 	movpl	r2, r0
         a2a54:	42602000 	rsbmi	r2, r0, #0	; 0x0
         a2a58:	e3560000 	cmp	r6, #0	; 0x0
         a2a5c:	a1a01006 	movge	r1, r6
         a2a60:	b2661000 	rsblt	r1, r6, #0	; 0x0
         a2a64:	e1520001 	cmp	r2, r1
         a2a68:	aa000008 	bge	a2a90 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x3cc>
         a2a6c:	e1a06000 	mov	r6, r0
         a2a70:	e1a09008 	mov	r9, r8
         a2a74:	e5940004 	ldr	r0, [r4, #4]	; fField4
         a2a78:	e1a00840 	mov	r0, r0, asr #16
         a2a7c:	e5941000 	ldr	r1, [r4]
         a2a80:	e0800841 	add	r0, r0, r1, asr #16
         a2a84:	e0800fa0 	add	r0, r0, r0, lsr #31
         a2a88:	e04320c0 	sub	r2, r3, r0, asr #1
         a2a8c:	e58d2014 	str	r2, [sp, #20]
         a2a90:	e1a0000d 	mov	r0, sp
         a2a94:	eb67e8e1 	bl	1a9ce20 <TListLoop::$Next(void)>
         a2a98:	e3300000 	teq	r0, #0	; 0x0
         a2a9c:	1affff28 	bne	a2744 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x80>
         a2aa0:	e28dd00c 	add	sp, sp, #12	; 0xc
         a2aa4:	e51b002c 	ldr	r0, [fp, -#44]
         a2aa8:	e8941008 	ldmia	r4, {r3, ip}
         a2aac:	e8801008 	stmia	r0, {r3, ip}
         a2ab0:	e3570000 	cmp	r7, #0	; 0x0
         a2ab4:	b2677000 	rsblt	r7, r7, #0	; 0x0
         a2ab8:	e357000a 	cmp	r7, #10	; 0xa
         a2abc:	a3a03000 	movge	r3, #0	; 0x0
         a2ac0:	a58d300c 	strge	r3, [sp, #12]
         a2ac4:	e3560000 	cmp	r6, #0	; 0x0
         a2ac8:	b2666000 	rsblt	r6, r6, #0	; 0x0
         a2acc:	e356000a 	cmp	r6, #10	; 0xa
         a2ad0:	a3a02000 	movge	r2, #0	; 0x0
         a2ad4:	a58d2008 	strge	r2, [sp, #8]	; fField8
         a2ad8:	e24dd004 	sub	sp, sp, #4	; 0x4
         a2adc:	e51b0038 	ldr	r0, [fp, -#56]
         a2ae0:	e2800010 	add	r0, r0, #16	; 0x10
         a2ae4:	e1a04000 	mov	r4, r0
         a2ae8:	e5900000 	ldr	r0, [r0]
         a2aec:	e58d0000 	str	r0, [sp]
         a2af0:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a2af4:	e1a01841 	mov	r1, r1, asr #16
         a2af8:	e5940000 	ldr	r0, [r4]
         a2afc:	e58d0000 	str	r0, [sp]
         a2b00:	e59d0000 	ldr	r0, [sp]
         a2b04:	e1a00840 	mov	r0, r0, asr #16
         a2b08:	e28dd004 	add	sp, sp, #4	; 0x4
         a2b0c:	e51b302c 	ldr	r3, [fp, -#44]
         a2b10:	e5932002 	ldr	r2, [r3, #2]	; fField2
         a2b14:	e1a02842 	mov	r2, r2, asr #16
         a2b18:	e59d300c 	ldr	r3, [sp, #12]
         a2b1c:	e0823003 	add	r3, r2, r3
         a2b20:	e1530001 	cmp	r3, r1
         a2b24:	b0413002 	sublt	r3, r1, r2
         a2b28:	b58d300c 	strlt	r3, [sp, #12]
         a2b2c:	e51b302c 	ldr	r3, [fp, -#44]
         a2b30:	e5931000 	ldr	r1, [r3]
         a2b34:	e1a01841 	mov	r1, r1, asr #16
         a2b38:	e59d2008 	ldr	r2, [sp, #8]	; fField8
         a2b3c:	e0812002 	add	r2, r1, r2
         a2b40:	e1520000 	cmp	r2, r0
         a2b44:	b0402001 	sublt	r2, r0, r1
         a2b48:	b58d2008 	strlt	r2, [sp, #8]	; fField8
         a2b4c:	e59d300c 	ldr	r3, [sp, #12]
         a2b50:	e1a01803 	mov	r1, r3, lsl #16
         a2b54:	e1a01841 	mov	r1, r1, asr #16
         a2b58:	e59d2008 	ldr	r2, [sp, #8]	; fField8
         a2b5c:	e1a02802 	mov	r2, r2, lsl #16
         a2b60:	e1a02842 	mov	r2, r2, asr #16
         a2b64:	e51b002c 	ldr	r0, [fp, -#44]
         a2b68:	eb6abb5e 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a2b6c:	e5940006 	ldr	r0, [r4, #6]	; fField6
         a2b70:	e1a00840 	mov	r0, r0, asr #16
         a2b74:	e51b302c 	ldr	r3, [fp, -#44]
         a2b78:	e5931006 	ldr	r1, [r3, #6]	; fField6
         a2b7c:	e1500841 	cmp	r0, r1, asr #16
         a2b80:	aa000003 	bge	a2b94 <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x4d0>
         a2b84:	e51b302c 	ldr	r3, [fp, -#44]
         a2b88:	e5c30007 	strb	r0, [r3, #7]
         a2b8c:	e1a00440 	mov	r0, r0, asr #8
         a2b90:	e5c30006 	strb	r0, [r3, #6]	; fField6
         a2b94:	e5940004 	ldr	r0, [r4, #4]	; fField4
         a2b98:	e1a00840 	mov	r0, r0, asr #16
         a2b9c:	e51b302c 	ldr	r3, [fp, -#44]
         a2ba0:	e5931004 	ldr	r1, [r3, #4]	; fField4
         a2ba4:	e1500841 	cmp	r0, r1, asr #16
         a2ba8:	aa000003 	bge	a2bbc <TEditView::AlignBounds(TRect &, TRect &, TRect *)+0x4f8>
         a2bac:	e51b302c 	ldr	r3, [fp, -#44]
         a2bb0:	e5c30005 	strb	r0, [r3, #5]
         a2bb4:	e1a00440 	mov	r0, r0, asr #8
         a2bb8:	e5c30004 	strb	r0, [r3, #4]	; fField4
         a2bbc:	e3a00000 	mov	r0, #0	; 0x0
         a2bc0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::AlignToLineSpacing(TRect *, long, long)
 * Address: 000a2bc4
 */
TEditView::AlignToLineSpacing(TRect *, long, long) {
    /*
         a2bc4:	e1a0c00d 	mov	ip, sp
         a2bc8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         a2bcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         a2bd0:	e1a05000 	mov	r5, r0
         a2bd4:	e1a04001 	mov	r4, r1
         a2bd8:	e1a06002 	mov	r6, r2
         a2bdc:	e5900008 	ldr	r0, [r0, #8]	; fField8
         a2be0:	e3100301 	tst	r0, #67108864	; 0x4000000
         a2be4:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         a2be8:	e5948002 	ldr	r8, [r4, #2]	; fField2
         a2bec:	e1a08848 	mov	r8, r8, asr #16
         a2bf0:	e5940000 	ldr	r0, [r4]
         a2bf4:	e0839840 	add	r9, r3, r0, asr #16
         a2bf8:	e59f10fc 	ldr	r1, [pc, #fc]	; a2cfc <TEditView::AlignToLineSpacing(TRect *, long, long)+0x138>
         a2bfc:	e1a00005 	mov	r0, r5
         a2c00:	eb6c9e54 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
         a2c04:	e3100003 	tst	r0, #3	; 0x3
         a2c08:	01a00140 	moveq	r0, r0, asr #2
         a2c0c:	0a000000 	beq	a2c14 <TEditView::AlignToLineSpacing(TRect *, long, long)+0x50>
         a2c10:	eb6c7d41 	bl	1bc211c <$_RINTError(long)>
         a2c14:	e1a07000 	mov	r7, r0
         a2c18:	e3500000 	cmp	r0, #0	; 0x0
         a2c1c:	da00001c 	ble	a2c94 <TEditView::AlignToLineSpacing(TRect *, long, long)+0xd0>
         a2c20:	e24dd004 	sub	sp, sp, #4	; 0x4
         a2c24:	e1a0200d 	mov	r2, sp
         a2c28:	e59f10d0 	ldr	r1, [pc, #d0]	; a2d00 <TEditView::AlignToLineSpacing(TRect *, long, long)+0x13c>
         a2c2c:	e1a00005 	mov	r0, r5
         a2c30:	eb6911e4 	bl	1ae73c8 <TView::$IsGridded(RefVar const &, TPoint *)>
         a2c34:	e3300000 	teq	r0, #0	; 0x0
         a2c38:	0a000009 	beq	a2c64 <TEditView::AlignToLineSpacing(TRect *, long, long)+0xa0>
         a2c3c:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         a2c40:	e1a00840 	mov	r0, r0, asr #16
         a2c44:	e0800fa0 	add	r0, r0, r0, lsr #31
         a2c48:	e08810c0 	add	r1, r8, r0, asr #1
         a2c4c:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         a2c50:	e1a00840 	mov	r0, r0, asr #16
         a2c54:	eb6c3f39 	bl	1bb2940 <$__rt_sdiv>
         a2c58:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a2c5c:	e1a01841 	mov	r1, r1, asr #16
         a2c60:	e0080091 	mul	r8, r1, r0
         a2c64:	e1a01087 	mov	r1, r7, lsl #1
         a2c68:	e3a00003 	mov	r0, #3	; 0x3
         a2c6c:	eb6c3f33 	bl	1bb2940 <$__rt_sdiv>
         a2c70:	e0801006 	add	r1, r0, r6
         a2c74:	e1a00007 	mov	r0, r7
         a2c78:	eb6c3f30 	bl	1bb2940 <$__rt_sdiv>
         a2c7c:	e0000097 	mul	r0, r7, r0
         a2c80:	e3570014 	cmp	r7, #20	; 0x14
         a2c84:	d3a01003 	movle	r1, #3	; 0x3
         a2c88:	c3a01004 	movgt	r1, #4	; 0x4
         a2c8c:	e0406001 	sub	r6, r0, r1
         a2c90:	e28dd004 	add	sp, sp, #4	; 0x4
         a2c94:	e0460009 	sub	r0, r6, r9
         a2c98:	e1a00800 	mov	r0, r0, lsl #16
         a2c9c:	e1b00840 	movs	r0, r0, asr #16
         a2ca0:	e5941002 	ldr	r1, [r4, #2]	; fField2
         a2ca4:	e1a01821 	mov	r1, r1, lsr #16
         a2ca8:	e0481001 	sub	r1, r8, r1
         a2cac:	e1a01801 	mov	r1, r1, lsl #16
         a2cb0:	e1a01841 	mov	r1, r1, asr #16
         a2cb4:	03310000 	teqeq	r1, #0	; 0x0
         a2cb8:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         a2cbc:	e24dd008 	sub	sp, sp, #8	; 0x8
         a2cc0:	e5cd1003 	strb	r1, [sp, #3]
         a2cc4:	e1a01441 	mov	r1, r1, asr #8
         a2cc8:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         a2ccc:	e5cd0001 	strb	r0, [sp, #1]
         a2cd0:	e1a00440 	mov	r0, r0, asr #8
         a2cd4:	e5cd0000 	strb	r0, [sp]
         a2cd8:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a2cdc:	e58d0000 	str	r0, [sp]
         a2ce0:	e1a00004 	mov	r0, r4
         a2ce4:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a2ce8:	e1a01841 	mov	r1, r1, asr #16
         a2cec:	e59d2000 	ldr	r2, [sp]
         a2cf0:	e1a02842 	mov	r2, r2, asr #16
         a2cf4:	eb6abafb 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a2cf8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         a2cfc:	00685058 	rsbeq	r5, r8, r8, asr r0
         a2d00:	006847e8 	rsbeq	r4, r8, r8, ror #15
    */
}

/**
 * Symbol: TEditView::ChildBoundsChanged(TView *, TRect &)
 * Address: 000a2d04
 */
TEditView::ChildBoundsChanged(TView *, TRect &) {
    /*
         a2d04:	e1a0c00d 	mov	ip, sp
         a2d08:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a2d0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a2d10:	e1a05001 	mov	r5, r1
         a2d14:	e1a04002 	mov	r4, r2
         a2d18:	e59f1030 	ldr	r1, [pc, #30]	; a2d50 <TEditView::ChildBoundsChanged(TView *, TRect &)+0x4c>
         a2d1c:	e5d11030 	ldrb	r1, [r1, #48]	; fField48
         a2d20:	e3310000 	teq	r1, #0	; 0x0
         a2d24:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         a2d28:	e24dd008 	sub	sp, sp, #8	; 0x8
         a2d2c:	e2851010 	add	r1, r5, #16	; 0x10
         a2d30:	e8911008 	ldmia	r1, {r3, ip}
         a2d34:	e88d1008 	stmia	sp, {r3, ip}
         a2d38:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a2d3c:	e1a01841 	mov	r1, r1, asr #16
         a2d40:	e5942004 	ldr	r2, [r4, #4]	; fField4
         a2d44:	e1510842 	cmp	r1, r2, asr #16
         a2d48:	ca000001 	bgt	a2d54 <TEditView::ChildBoundsChanged(TView *, TRect &)+0x50>
         a2d4c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         a2d50:	0c100cc4 	ldceq	12, cr0, [r0], -#784
         a2d54:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a2d58:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a2d5c:	e1a0000d 	mov	r0, sp
         a2d60:	eb6795b3 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a2d64:	e1a0000d 	mov	r0, sp
         a2d68:	eb67e82c 	bl	1a9ce20 <TListLoop::$Next(void)>
         a2d6c:	e1b06000 	movs	r6, r0
         a2d70:	0a000029 	beq	a2e1c <TEditView::ChildBoundsChanged(TView *, TRect &)+0x118>
         a2d74:	e3a08000 	mov	r8, #0	; 0x0
         a2d78:	e1360005 	teq	r6, r5
         a2d7c:	0a000022 	beq	a2e0c <TEditView::ChildBoundsChanged(TView *, TRect &)+0x108>
         a2d80:	e1a00006 	mov	r0, r6
         a2d84:	e3a01051 	mov	r1, #81	; 0x51
         a2d88:	e5962000 	ldr	r2, [r6]
         a2d8c:	e1a0e00f 	mov	lr, pc
         a2d90:	e282f004 	add	pc, r2, #4	; 0x4
         a2d94:	e3300000 	teq	r0, #0	; 0x0
         a2d98:	0a00001b 	beq	a2e0c <TEditView::ChildBoundsChanged(TView *, TRect &)+0x108>
         a2d9c:	e2861010 	add	r1, r6, #16	; 0x10
         a2da0:	e1a07001 	mov	r7, r1
         a2da4:	e1a00004 	mov	r0, r4
         a2da8:	eb67e82a 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         a2dac:	e3300000 	teq	r0, #0	; 0x0
         a2db0:	1a000015 	bne	a2e0c <TEditView::ChildBoundsChanged(TView *, TRect &)+0x108>
         a2db4:	e1a01007 	mov	r1, r7
         a2db8:	e28d000c 	add	r0, sp, #12	; 0xc
         a2dbc:	eb67e825 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         a2dc0:	e3300000 	teq	r0, #0	; 0x0
         a2dc4:	0a000010 	beq	a2e0c <TEditView::ChildBoundsChanged(TView *, TRect &)+0x108>
         a2dc8:	e5970000 	ldr	r0, [r7]
         a2dcc:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         a2dd0:	e1a01841 	mov	r1, r1, asr #16
         a2dd4:	e0410840 	sub	r0, r1, r0, asr #16
         a2dd8:	e1a00800 	mov	r0, r0, lsl #16
         a2ddc:	e1a00840 	mov	r0, r0, asr #16
         a2de0:	e24dd008 	sub	sp, sp, #8	; 0x8
         a2de4:	e5cd8003 	strb	r8, [sp, #3]
         a2de8:	e5cd8002 	strb	r8, [sp, #2]	; fField2
         a2dec:	e5cd0001 	strb	r0, [sp, #1]
         a2df0:	e1a00440 	mov	r0, r0, asr #8
         a2df4:	e5cd0000 	strb	r0, [sp]
         a2df8:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a2dfc:	e58d0000 	str	r0, [sp]
         a2e00:	e1a00006 	mov	r0, r6
         a2e04:	e49d1004 	ldr	r1, [sp], #4	; fField4
         a2e08:	eb6c99bb 	bl	1bc94fc <TView::$DoMoveCommand(TPoint)>
         a2e0c:	e1a0000d 	mov	r0, sp
         a2e10:	eb67e802 	bl	1a9ce20 <TListLoop::$Next(void)>
         a2e14:	e1b06000 	movs	r6, r0
         a2e18:	1affffd6 	bne	a2d78 <TEditView::ChildBoundsChanged(TView *, TRect &)+0x74>
         a2e1c:	e28dd00c 	add	sp, sp, #12	; 0xc
         a2e20:	eaffffc9 	b	a2d4c <TEditView::ChildBoundsChanged(TView *, TRect &)+0x48>
    */
}

/**
 * Symbol: TEditView::OffsetToCaret(long, TRect *)
 * Address: 000a2ee4
 */
TEditView::OffsetToCaret(long, TRect *) {
    /*
         a2ee4:	e1a0c00d 	mov	ip, sp
         a2ee8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a2eec:	e24cb004 	sub	fp, ip, #4	; 0x4
         a2ef0:	e1a04002 	mov	r4, r2
         a2ef4:	e2801038 	add	r1, r0, #56	; 0x38
         a2ef8:	e5912000 	ldr	r2, [r1]
         a2efc:	e1a02842 	mov	r2, r2, asr #16
         a2f00:	e3720902 	cmn	r2, #32768	; 0x8000
         a2f04:	1a000007 	bne	a2f28 <TEditView::OffsetToCaret(long, TRect *)+0x44>
         a2f08:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
         a2f0c:	e2411501 	sub	r1, r1, #4194304	; 0x400000
         a2f10:	e5c41005 	strb	r1, [r4, #5]
         a2f14:	e3e0007f 	mvn	r0, #127	; 0x7f
         a2f18:	e5c40004 	strb	r0, [r4, #4]	; fField4
         a2f1c:	e5c41001 	strb	r1, [r4, #1]
         a2f20:	e5c40000 	strb	r0, [r4]
         a2f24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         a2f28:	e8915000 	ldmia	r1, {ip, lr}
         a2f2c:	e8845000 	stmia	r4, {ip, lr}
         a2f30:	e24dd004 	sub	sp, sp, #4	; 0x4
         a2f34:	e1a01000 	mov	r1, r0
         a2f38:	e1a0000d 	mov	r0, sp
         a2f3c:	eb071170 	bl	267504 <TView::ContentsOrigin(void)>
         a2f40:	e1a00004 	mov	r0, r4
         a2f44:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a2f48:	e1a01841 	mov	r1, r1, asr #16
         a2f4c:	e59d2000 	ldr	r2, [sp]
         a2f50:	e1a02842 	mov	r2, r2, asr #16
         a2f54:	eb6aba63 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a2f58:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::PointToCaret(TPoint &, TRect *, TRect *)
 * Address: 000a2f5c
 */
TEditView::PointToCaret(TPoint &, TRect *, TRect *) {
    /*
         a2f5c:	e1a0c00d 	mov	ip, sp
         a2f60:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a2f64:	e24cb004 	sub	fp, ip, #4	; 0x4
         a2f68:	e1a06001 	mov	r6, r1
         a2f6c:	e1a04002 	mov	r4, r2
         a2f70:	e1a05003 	mov	r5, r3
         a2f74:	e1a02003 	mov	r2, r3
         a2f78:	e3a03000 	mov	r3, #0	; 0x0
         a2f7c:	eb6804a8 	bl	1aa4224 <TEditView::$TextContainingPoint(TPoint &, TRect *, long *)>
         a2f80:	e3300000 	teq	r0, #0	; 0x0
         a2f84:	0a000005 	beq	a2fa0 <TEditView::PointToCaret(TPoint &, TRect *, TRect *)+0x44>
         a2f88:	e1a03005 	mov	r3, r5
         a2f8c:	e1a02004 	mov	r2, r4
         a2f90:	e1a01006 	mov	r1, r6
         a2f94:	e590c000 	ldr	ip, [r0]
         a2f98:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         a2f9c:	e28cf074 	add	pc, ip, #116	; 0x74
         a2fa0:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
         a2fa4:	e2411501 	sub	r1, r1, #4194304	; 0x400000
         a2fa8:	e5c41005 	strb	r1, [r4, #5]
         a2fac:	e3e0007f 	mvn	r0, #127	; 0x7f
         a2fb0:	e5c40004 	strb	r0, [r4, #4]	; fField4
         a2fb4:	e5c41001 	strb	r1, [r4, #1]
         a2fb8:	e5c40000 	strb	r0, [r4]
         a2fbc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::HasHilitedChildren(long, TView **)
 * Address: 000a4170
 */
TEditView::HasHilitedChildren(long, TView **) {
    /*
         a4170:	e1a0c00d 	mov	ip, sp
         a4174:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a4178:	e24cb004 	sub	fp, ip, #4	; 0x4
         a417c:	e1a05001 	mov	r5, r1
         a4180:	e1a04002 	mov	r4, r2
         a4184:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a4188:	e3a06000 	mov	r6, #0	; 0x0
         a418c:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a4190:	e1a0000d 	mov	r0, sp
         a4194:	eb6790a6 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a4198:	e1a0000d 	mov	r0, sp
         a419c:	eb67e31f 	bl	1a9ce20 <TListLoop::$Next(void)>
         a41a0:	e1b07000 	movs	r7, r0
         a41a4:	0a00000d 	beq	a41e0 <TEditView::HasHilitedChildren(long, TView **)+0x70>
         a41a8:	e1a00007 	mov	r0, r7
         a41ac:	e5971000 	ldr	r1, [r7]
         a41b0:	e1a0e00f 	mov	lr, pc
         a41b4:	e281f094 	add	pc, r1, #148	; 0x94
         a41b8:	e3300000 	teq	r0, #0	; 0x0
         a41bc:	12866001 	addne	r6, r6, #1	; 0x1
         a41c0:	13340000 	teqne	r4, #0	; 0x0
         a41c4:	15847000 	strne	r7, [r4]
         a41c8:	e1560005 	cmp	r6, r5
         a41cc:	aa000003 	bge	a41e0 <TEditView::HasHilitedChildren(long, TView **)+0x70>
         a41d0:	e1a0000d 	mov	r0, sp
         a41d4:	eb67e311 	bl	1a9ce20 <TListLoop::$Next(void)>
         a41d8:	e1b07000 	movs	r7, r0
         a41dc:	1afffff1 	bne	a41a8 <TEditView::HasHilitedChildren(long, TView **)+0x38>
         a41e0:	e1560005 	cmp	r6, r5
         a41e4:	b3a00000 	movlt	r0, #0	; 0x0
         a41e8:	a3a00001 	movge	r0, #1	; 0x1
         a41ec:	e20000ff 	and	r0, r0, #255	; 0xff
         a41f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::Constructor(RefVar const &, TView *)
 * Address: 000a41f4
 */
TEditView::Constructor(RefVar const &, TView *) {
    /*
         a41f4:	e3a03000 	mov	r3, #0	; 0x0
         a41f8:	e5803048 	str	r3, [r0, #72]	; fField72
         a41fc:	e5c0304c 	strb	r3, [r0, #76]	; fField76
         a4200:	ea6c94b4 	b	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
    */
}

/**
 * Symbol: TEditView::ResetHilitesForNewWord(void)
 * Address: 000a4204
 */
TEditView::ResetHilitesForNewWord(void) {
    /*
         a4204:	e1a0c00d 	mov	ip, sp
         a4208:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a420c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a4210:	e1a04000 	mov	r4, r0
         a4214:	e3a00000 	mov	r0, #0	; 0x0
         a4218:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         a421c:	e1a0200d 	mov	r2, sp
         a4220:	e1a00004 	mov	r0, r4
         a4224:	e3a01002 	mov	r1, #2	; 0x2
         a4228:	eb68b59c 	bl	1ad18a0 <TEditView::$HasHilitedChildren(long, TView **)>
         a422c:	e59f506c 	ldr	r5, [pc, #6c]	; a42a0 <TEditView::ResetHilitesForNewWord(void)+0x9c>	; fField6
         a4230:	e3300000 	teq	r0, #0	; 0x0
         a4234:	0a00001a 	beq	a42a4 <TEditView::ResetHilitesForNewWord(void)+0xa0>
         a4238:	e3a01001 	mov	r1, #1	; 0x1
         a423c:	e5950000 	ldr	r0, [r5]
         a4240:	eb68bde9 	bl	1ad39ec <TRootView::$SetPreserveHilites(unsigned char)>
         a4244:	e3a03000 	mov	r3, #0	; 0x0
         a4248:	e92d0008 	stmdb	sp!, {r3}
         a424c:	e3a02000 	mov	r2, #0	; 0x0
         a4250:	e3a01000 	mov	r1, #0	; 0x0
         a4254:	e5950000 	ldr	r0, [r5]
         a4258:	eb68bde1 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a425c:	e28dd004 	add	sp, sp, #4	; 0x4
         a4260:	e3a01000 	mov	r1, #0	; 0x0
         a4264:	e5950000 	ldr	r0, [r5]
         a4268:	eb68bddf 	bl	1ad39ec <TRootView::$SetPreserveHilites(unsigned char)>
         a426c:	e1a00004 	mov	r0, r4
         a4270:	e5941000 	ldr	r1, [r4]
         a4274:	e1a0e00f 	mov	lr, pc
         a4278:	e281f0ac 	add	pc, r1, #172	; 0xac
         a427c:	e2840038 	add	r0, r4, #56	; 0x38
         a4280:	e3a029fe 	mov	r2, #4161536	; 0x3f8000
         a4284:	e2422501 	sub	r2, r2, #4194304	; 0x400000
         a4288:	e5c02005 	strb	r2, [r0, #5]
         a428c:	e3e0107f 	mvn	r1, #127	; 0x7f
         a4290:	e5c01004 	strb	r1, [r0, #4]	; fField4
         a4294:	e5c02001 	strb	r2, [r0, #1]
         a4298:	e5c01000 	strb	r1, [r0]
         a429c:	ea00002e 	b	a435c <TEditView::ResetHilitesForNewWord(void)+0x158>
         a42a0:	0c101934 	ldceq	9, cr1, [r0], -#208
         a42a4:	e59d0000 	ldr	r0, [sp]
         a42a8:	e3300000 	teq	r0, #0	; 0x0
         a42ac:	0a00002a 	beq	a435c <TEditView::ResetHilitesForNewWord(void)+0x158>
         a42b0:	e3a01051 	mov	r1, #81	; 0x51
         a42b4:	e5902000 	ldr	r2, [r0]
         a42b8:	e1a0e00f 	mov	lr, pc
         a42bc:	e282f004 	add	pc, r2, #4	; 0x4
         a42c0:	e3300000 	teq	r0, #0	; 0x0
         a42c4:	e59d0000 	ldr	r0, [sp]
         a42c8:	0a00000a 	beq	a42f8 <TEditView::ResetHilitesForNewWord(void)+0xf4>
         a42cc:	eb683581 	bl	1ab18d8 <TView::$FirstHilite(void)>
         a42d0:	e3a03000 	mov	r3, #0	; 0x0
         a42d4:	e92d0008 	stmdb	sp!, {r3}
         a42d8:	e5b0200c 	ldr	r2, [r0, #12]!
         a42dc:	e5901004 	ldr	r1, [r0, #4]	; fField4
         a42e0:	e0413002 	sub	r3, r1, r2
         a42e4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a42e8:	e5950000 	ldr	r0, [r5]
         a42ec:	eb68bdbc 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a42f0:	e28dd004 	add	sp, sp, #4	; 0x4
         a42f4:	ea000018 	b	a435c <TEditView::ResetHilitesForNewWord(void)+0x158>
         a42f8:	e3300000 	teq	r0, #0	; 0x0
         a42fc:	0a000016 	beq	a435c <TEditView::ResetHilitesForNewWord(void)+0x158>
         a4300:	e3a01052 	mov	r1, #82	; 0x52
         a4304:	e5902000 	ldr	r2, [r0]
         a4308:	e1a0e00f 	mov	lr, pc
         a430c:	e282f004 	add	pc, r2, #4	; 0x4
         a4310:	e3300000 	teq	r0, #0	; 0x0
         a4314:	0a000010 	beq	a435c <TEditView::ResetHilitesForNewWord(void)+0x158>
         a4318:	e3a01001 	mov	r1, #1	; 0x1
         a431c:	e5950000 	ldr	r0, [r5]
         a4320:	eb68bdb1 	bl	1ad39ec <TRootView::$SetPreserveHilites(unsigned char)>
         a4324:	e3a03000 	mov	r3, #0	; 0x0
         a4328:	e92d0008 	stmdb	sp!, {r3}
         a432c:	e3a02000 	mov	r2, #0	; 0x0
         a4330:	e3a01000 	mov	r1, #0	; 0x0
         a4334:	e5950000 	ldr	r0, [r5]
         a4338:	eb68bda9 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a433c:	e28dd004 	add	sp, sp, #4	; 0x4
         a4340:	e3a01000 	mov	r1, #0	; 0x0
         a4344:	e5950000 	ldr	r0, [r5]
         a4348:	eb68bda7 	bl	1ad39ec <TRootView::$SetPreserveHilites(unsigned char)>
         a434c:	e1a00004 	mov	r0, r4
         a4350:	e5941000 	ldr	r1, [r4]
         a4354:	e1a0e00f 	mov	lr, pc
         a4358:	e281f0ac 	add	pc, r1, #172	; 0xac
         a435c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::RealDoCommand(RefVar const &)
 * Address: 000a4360
 */
TEditView::RealDoCommand(RefVar const &) {
    /*
         a4360:	e1a0c00d 	mov	ip, sp
         a4364:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a4368:	e24cb004 	sub	fp, ip, #4	; 0x4
         a436c:	e1a04000 	mov	r4, r0
         a4370:	e1a05001 	mov	r5, r1
         a4374:	e24dd010 	sub	sp, sp, #16	; 0x10
         a4378:	e3a06000 	mov	r6, #0	; 0x0
         a437c:	e3a08000 	mov	r8, #0	; 0x0
         a4380:	e1a00001 	mov	r0, r1
         a4384:	eb6807ef 	bl	1aa6348 <$CommandID(RefVar const &)>
         a4388:	e5941008 	ldr	r1, [r4, #8]	; fField8
         a438c:	e2111082 	ands	r1, r1, #130	; 0x82
         a4390:	1330000b 	teqne	r0, #11	; 0xb
         a4394:	13300037 	teqne	r0, #55	; 0x37
         a4398:	1330002c 	teqne	r0, #44	; 0x2c
         a439c:	1330002b 	teqne	r0, #43	; 0x2b
         a43a0:	13300031 	teqne	r0, #49	; 0x31
         a43a4:	13300010 	teqne	r0, #16	; 0x10
         a43a8:	13300048 	teqne	r0, #72	; 0x48
         a43ac:	13300034 	teqne	r0, #52	; 0x34
         a43b0:	1330002f 	teqne	r0, #47	; 0x2f
         a43b4:	0a000006 	beq	a43d4 <TEditView::RealDoCommand(RefVar const &)+0x74>
         a43b8:	e3300014 	teq	r0, #20	; 0x14
         a43bc:	e1a00005 	mov	r0, r5
         a43c0:	13a01001 	movne	r1, #1	; 0x1
         a43c4:	03a01000 	moveq	r1, #0	; 0x0
         a43c8:	eb6807e1 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
         a43cc:	e3a00001 	mov	r0, #1	; 0x1
         a43d0:	ea000632 	b	a5ca0 <TEditView::RealDoCommand(RefVar const &)+0x1940>
         a43d4:	e3500022 	cmp	r0, #34	; 0x22
         a43d8:	0a00030c 	beq	a5010 <TEditView::RealDoCommand(RefVar const &)+0xcb0>
         a43dc:	e59f2078 	ldr	r2, [pc, #78]	; a445c <TEditView::RealDoCommand(RefVar const &)+0xfc>
         a43e0:	e58d200c 	str	r2, [sp, #12]
         a43e4:	e59f7074 	ldr	r7, [pc, #74]	; a4460 <TEditView::RealDoCommand(RefVar const &)+0x100>
         a43e8:	e59f2074 	ldr	r2, [pc, #74]	; a4464 <TEditView::RealDoCommand(RefVar const &)+0x104>
         a43ec:	e58d2008 	str	r2, [sp, #8]	; fField8
         a43f0:	ca00001c 	bgt	a4468 <TEditView::RealDoCommand(RefVar const &)+0x108>
         a43f4:	e240100b 	sub	r1, r0, #11	; 0xb
         a43f8:	e3510015 	cmp	r1, #21	; 0x15
         a43fc:	908ff101 	addls	pc, pc, r1, lsl #2
         a4400:	ea00061d 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4404:	ea0000ea 	b	a47b4 <TEditView::RealDoCommand(RefVar const &)+0x454>
         a4408:	ea00061b 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a440c:	ea0004f0 	b	a57d4 <TEditView::RealDoCommand(RefVar const &)+0x1474>
         a4410:	ea000619 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4414:	ea000508 	b	a583c <TEditView::RealDoCommand(RefVar const &)+0x14dc>
         a4418:	ea00051b 	b	a588c <TEditView::RealDoCommand(RefVar const &)+0x152c>
         a441c:	ea0004ab 	b	a56d0 <TEditView::RealDoCommand(RefVar const &)+0x1370>
         a4420:	ea00047b 	b	a5614 <TEditView::RealDoCommand(RefVar const &)+0x12b4>
         a4424:	ea000614 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4428:	ea00052d 	b	a58e4 <TEditView::RealDoCommand(RefVar const &)+0x1584>
         a442c:	ea000321 	b	a50b8 <TEditView::RealDoCommand(RefVar const &)+0xd58>
         a4430:	ea000611 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4434:	ea00049b 	b	a56a8 <TEditView::RealDoCommand(RefVar const &)+0x1348>
         a4438:	ea00035c 	b	a51b0 <TEditView::RealDoCommand(RefVar const &)+0xe50>
         a443c:	ea00060e 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4440:	ea00060d 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4444:	ea00060c 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4448:	ea00060b 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a444c:	ea00060a 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4450:	ea000609 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4454:	ea000608 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4458:	ea0002bb 	b	a4f4c <TEditView::RealDoCommand(RefVar const &)+0xbec>
         a445c:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         a4460:	0c101934 	ldceq	9, cr1, [r0], -#208
         a4464:	0c100cc4 	ldceq	12, cr0, [r0], -#784
         a4468:	e3500037 	cmp	r0, #55	; 0x37
         a446c:	0a0000f1 	beq	a4838 <TEditView::RealDoCommand(RefVar const &)+0x4d8>
         a4470:	ca00004d 	bgt	a45ac <TEditView::RealDoCommand(RefVar const &)+0x24c>
         a4474:	e3500030 	cmp	r0, #48	; 0x30
         a4478:	0a000309 	beq	a50a4 <TEditView::RealDoCommand(RefVar const &)+0xd44>
         a447c:	ca000017 	bgt	a44e0 <TEditView::RealDoCommand(RefVar const &)+0x180>
         a4480:	e3300023 	teq	r0, #35	; 0x23
         a4484:	0a0002b0 	beq	a4f4c <TEditView::RealDoCommand(RefVar const &)+0xbec>
         a4488:	e330002f 	teq	r0, #47	; 0x2f
         a448c:	1a0005fe 	bne	a5c8c <TEditView::RealDoCommand(RefVar const &)+0x192c>
         a4490:	e1a00004 	mov	r0, r4
         a4494:	e5941000 	ldr	r1, [r4]
         a4498:	e1a0e00f 	mov	lr, pc
         a449c:	e281f020 	add	pc, r1, #32	; 0x20
         a44a0:	e3100a02 	tst	r0, #8192	; 0x2000
         a44a4:	0a000005 	beq	a44c0 <TEditView::RealDoCommand(RefVar const &)+0x160>
         a44a8:	e3a08001 	mov	r8, #1	; 0x1
         a44ac:	e1a01005 	mov	r1, r5
         a44b0:	e1a00004 	mov	r0, r4
         a44b4:	eb67eaac 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a44b8:	e3300000 	teq	r0, #0	; 0x0
         a44bc:	1a0004fe 	bne	a58bc <TEditView::RealDoCommand(RefVar const &)+0x155c>
         a44c0:	e1a00005 	mov	r0, r5
         a44c4:	eb6807a3 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a44c8:	e1a01000 	mov	r1, r0
         a44cc:	e1a00004 	mov	r0, r4
         a44d0:	eb679400 	bl	1a894d8 <TEditView::$AddHiliter(TUnitPublic *)>
         a44d4:	e3300000 	teq	r0, #0	; 0x0
         a44d8:	0a0005e7 	beq	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a44dc:	ea0000d0 	b	a4824 <TEditView::RealDoCommand(RefVar const &)+0x4c4>
         a44e0:	e3300031 	teq	r0, #49	; 0x31
         a44e4:	0a0000e1 	beq	a4870 <TEditView::RealDoCommand(RefVar const &)+0x510>
         a44e8:	e3300032 	teq	r0, #50	; 0x32
         a44ec:	1a0005e6 	bne	a5c8c <TEditView::RealDoCommand(RefVar const &)+0x192c>
         a44f0:	e1a00004 	mov	r0, r4
         a44f4:	e5941000 	ldr	r1, [r4]
         a44f8:	e1a0e00f 	mov	lr, pc
         a44fc:	e281f020 	add	pc, r1, #32	; 0x20
         a4500:	e3100a02 	tst	r0, #8192	; 0x2000
         a4504:	0a000005 	beq	a4520 <TEditView::RealDoCommand(RefVar const &)+0x1c0>
         a4508:	e3a08001 	mov	r8, #1	; 0x1
         a450c:	e1a01005 	mov	r1, r5
         a4510:	e1a00004 	mov	r0, r4
         a4514:	eb67ea94 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a4518:	e3300000 	teq	r0, #0	; 0x0
         a451c:	1a0004e6 	bne	a58bc <TEditView::RealDoCommand(RefVar const &)+0x155c>
         a4520:	e3a00000 	mov	r0, #0	; 0x0
         a4524:	e5c40040 	strb	r0, [r4, #64]	; fField64
         a4528:	e24dd008 	sub	sp, sp, #8	; 0x8
         a452c:	e1a00005 	mov	r0, r5
         a4530:	eb680788 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a4534:	eb67fb2d 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
         a4538:	e1a01000 	mov	r1, r0
         a453c:	e28d0004 	add	r0, sp, #4	; 0x4
         a4540:	eb67c13e 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
         a4544:	e28d1004 	add	r1, sp, #4	; 0x4
         a4548:	e1a00004 	mov	r0, r4
         a454c:	e5942000 	ldr	r2, [r4]
         a4550:	e1a0e00f 	mov	lr, pc
         a4554:	e282f0bc 	add	pc, r2, #188	; 0xbc
         a4558:	e1a09000 	mov	r9, r0
         a455c:	e1a00004 	mov	r0, r4
         a4560:	eb685e1a 	bl	1abbdd0 <$ViewAllowsText(TView *)>
         a4564:	e58d0000 	str	r0, [sp]
         a4568:	e3300000 	teq	r0, #0	; 0x0
         a456c:	13390000 	teqne	r9, #0	; 0x0
         a4570:	0a000242 	beq	a4e80 <TEditView::RealDoCommand(RefVar const &)+0xb20>
         a4574:	e24dd008 	sub	sp, sp, #8	; 0x8
         a4578:	e3a00000 	mov	r0, #0	; 0x0
         a457c:	e58d0004 	str	r0, [sp, #4]	; fField4
         a4580:	e3a00002 	mov	r0, #2	; 0x2
         a4584:	eb6c76f0 	bl	1bc214c <$AllocateRefHandle(long)>
         a4588:	e40d000c 	str	r0, [sp], -#12
         a458c:	e1a0000d 	mov	r0, sp
         a4590:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a4594:	eb678fa6 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a4598:	e1a0000d 	mov	r0, sp
         a459c:	eb67e21f 	bl	1a9ce20 <TListLoop::$Next(void)>
         a45a0:	e1b09000 	movs	r9, r0
         a45a4:	0a0000dd 	beq	a4920 <TEditView::RealDoCommand(RefVar const &)+0x5c0>
         a45a8:	ea0000ce 	b	a48e8 <TEditView::RealDoCommand(RefVar const &)+0x588>
         a45ac:	e3500046 	cmp	r0, #70	; 0x46
         a45b0:	0a0005a3 	beq	a5c44 <TEditView::RealDoCommand(RefVar const &)+0x18e4>
         a45b4:	ca00006c 	bgt	a476c <TEditView::RealDoCommand(RefVar const &)+0x40c>
         a45b8:	e59fa1a4 	ldr	sl, [pc, #1a4]	; a4764 <TEditView::RealDoCommand(RefVar const &)+0x404>
         a45bc:	e330003d 	teq	r0, #61	; 0x3d
         a45c0:	0a000548 	beq	a5ae8 <TEditView::RealDoCommand(RefVar const &)+0x1788>
         a45c4:	e330003f 	teq	r0, #63	; 0x3f
         a45c8:	1a0005af 	bne	a5c8c <TEditView::RealDoCommand(RefVar const &)+0x192c>
         a45cc:	e1a00005 	mov	r0, r5
         a45d0:	eb680767 	bl	1aa6374 <$IsUndoCommand(RefVar const &)>
         a45d4:	e3300000 	teq	r0, #0	; 0x0
         a45d8:	0a000003 	beq	a45ec <TEditView::RealDoCommand(RefVar const &)+0x28c>
         a45dc:	e1a00004 	mov	r0, r4
         a45e0:	e5941000 	ldr	r1, [r4]
         a45e4:	e1a0e00f 	mov	lr, pc
         a45e8:	e281f0ac 	add	pc, r1, #172	; 0xac
         a45ec:	e1a00005 	mov	r0, r5
         a45f0:	eb680758 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a45f4:	e1a01000 	mov	r1, r0
         a45f8:	e1a00004 	mov	r0, r4
         a45fc:	eb6c97c8 	bl	1bca524 <TView::$FindID(long)>
         a4600:	e1b06000 	movs	r6, r0
         a4604:	0a000089 	beq	a4830 <TEditView::RealDoCommand(RefVar const &)+0x4d0>
         a4608:	e1a00006 	mov	r0, r6
         a460c:	e5961000 	ldr	r1, [r6]
         a4610:	e1a0e00f 	mov	lr, pc
         a4614:	e281f0ac 	add	pc, r1, #172	; 0xac
         a4618:	e24dd010 	sub	sp, sp, #16	; 0x10
         a461c:	e1a00006 	mov	r0, r6
         a4620:	eb6c93b0 	bl	1bc94e8 <TView::$DataFrame(void)>
         a4624:	eb6c76c8 	bl	1bc214c <$AllocateRefHandle(long)>
         a4628:	e58d000c 	str	r0, [sp, #12]
         a462c:	eb681bea 	bl	1aab5dc <$CorrectInfo(void)>
         a4630:	eb6c76c5 	bl	1bc214c <$AllocateRefHandle(long)>
         a4634:	e58d0000 	str	r0, [sp]
         a4638:	e1a0000d 	mov	r0, sp
         a463c:	e1a01006 	mov	r1, r6
         a4640:	e3e03000 	mvn	r3, #0	; 0x0
         a4644:	e3a02000 	mov	r2, #0	; 0x0
         a4648:	eb68283e 	bl	1aae748 <$ExtractRange__FRC6RefVarP5TViewlT3>
         a464c:	eb6c76be 	bl	1bc214c <$AllocateRefHandle(long)>
         a4650:	e58d0008 	str	r0, [sp, #8]	; fField8
         a4654:	e59d0000 	ldr	r0, [sp]
         a4658:	eb6c7ad7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a465c:	eb681bde 	bl	1aab5dc <$CorrectInfo(void)>
         a4660:	eb6c76b9 	bl	1bc214c <$AllocateRefHandle(long)>
         a4664:	e58d0004 	str	r0, [sp, #4]	; fField4
         a4668:	e28d0004 	add	r0, sp, #4	; 0x4
         a466c:	e1a01006 	mov	r1, r6
         a4670:	eb681fe3 	bl	1aac604 <$DeletedCorrectionInfo(RefVar const &, TView *)>
         a4674:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a4678:	eb6c7acf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a467c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a4680:	e5900000 	ldr	r0, [r0]
         a4684:	e3300002 	teq	r0, #2	; 0x2
         a4688:	0a000003 	beq	a469c <TEditView::RealDoCommand(RefVar const &)+0x33c>
         a468c:	e28d2008 	add	r2, sp, #8	; 0x8
         a4690:	e1a0100a 	mov	r1, sl
         a4694:	e28d000c 	add	r0, sp, #12	; 0xc
         a4698:	eb6c8732 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a469c:	e3a09000 	mov	r9, #0	; 0x0
         a46a0:	e5970000 	ldr	r0, [r7]
         a46a4:	eb68a3fe 	bl	1acd6a4 <TRootView::$CaretEnabled(void)>
         a46a8:	e3300000 	teq	r0, #0	; 0x0
         a46ac:	0a000019 	beq	a4718 <TEditView::RealDoCommand(RefVar const &)+0x3b8>
         a46b0:	e5970000 	ldr	r0, [r7]
         a46b4:	e5901068 	ldr	r1, [r0, #104]
         a46b8:	e1310006 	teq	r1, r6
         a46bc:	1a000015 	bne	a4718 <TEditView::RealDoCommand(RefVar const &)+0x3b8>
         a46c0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a46c4:	e590006c 	ldr	r0, [r0, #108]
         a46c8:	e1a00100 	mov	r0, r0, lsl #2
         a46cc:	eb6c769e 	bl	1bc214c <$AllocateRefHandle(long)>
         a46d0:	e58d0000 	str	r0, [sp]
         a46d4:	e1a0200d 	mov	r2, sp
         a46d8:	e59f1088 	ldr	r1, [pc, #88]	; a4768 <TEditView::RealDoCommand(RefVar const &)+0x408>
         a46dc:	e28d0018 	add	r0, sp, #24	; 0x18
         a46e0:	eb6c8720 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a46e4:	e59d0000 	ldr	r0, [sp]
         a46e8:	eb6c7ab3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a46ec:	e3a09001 	mov	r9, #1	; 0x1
         a46f0:	e28d2004 	add	r2, sp, #4	; 0x4
         a46f4:	e1a00006 	mov	r0, r6
         a46f8:	e3a01000 	mov	r1, #0	; 0x0
         a46fc:	e5963000 	ldr	r3, [r6]
         a4700:	e1a0e00f 	mov	lr, pc
         a4704:	e283f070 	add	pc, r3, #112	; 0x70
         a4708:	e28d1004 	add	r1, sp, #4	; 0x4
         a470c:	e1a00004 	mov	r0, r4
         a4710:	eb68bca2 	bl	1ad39a0 <TEditView::$SetCaretRectGlobal(TRect const &)>
         a4714:	e28dd00c 	add	sp, sp, #12	; 0xc
         a4718:	e1a01005 	mov	r1, r5
         a471c:	e1a00004 	mov	r0, r4
         a4720:	eb67ea11 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a4724:	e1a06000 	mov	r6, r0
         a4728:	e3390000 	teq	r9, #0	; 0x0
         a472c:	0a000006 	beq	a474c <TEditView::RealDoCommand(RefVar const &)+0x3ec>
         a4730:	e3a03000 	mov	r3, #0	; 0x0
         a4734:	e92d0008 	stmdb	sp!, {r3}
         a4738:	e1a01004 	mov	r1, r4
         a473c:	e3a02000 	mov	r2, #0	; 0x0
         a4740:	e5970000 	ldr	r0, [r7]
         a4744:	eb68bca6 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a4748:	e28dd004 	add	sp, sp, #4	; 0x4
         a474c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a4750:	eb6c7a99 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4754:	e59d000c 	ldr	r0, [sp, #12]
         a4758:	eb6c7a97 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a475c:	e28dd010 	add	sp, sp, #16	; 0x10
         a4760:	ea000545 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4764:	00682660 	rsbeq	r2, r8, r0, ror #12
         a4768:	00683290 	streqb	r3, [r8], -#32	; fField32
         a476c:	e330004a 	teq	r0, #74	; 0x4a
         a4770:	0a00054b 	beq	a5ca4 <TEditView::RealDoCommand(RefVar const &)+0x1944>
         a4774:	e330004d 	teq	r0, #77	; 0x4d
         a4778:	03310000 	teqeq	r1, #0	; 0x0
         a477c:	1a000542 	bne	a5c8c <TEditView::RealDoCommand(RefVar const &)+0x192c>
         a4780:	e24dd004 	sub	sp, sp, #4	; 0x4
         a4784:	e1a00005 	mov	r0, r5
         a4788:	eb6806f4 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
         a478c:	eb6c766e 	bl	1bc214c <$AllocateRefHandle(long)>
         a4790:	e58d0000 	str	r0, [sp]
         a4794:	e1a0100d 	mov	r1, sp
         a4798:	e1a00004 	mov	r0, r4
         a479c:	eb68b43b 	bl	1ad1890 <TEditView::$HandleInsertItems(RefVar const &)>
         a47a0:	e1a06000 	mov	r6, r0
         a47a4:	e59d0000 	ldr	r0, [sp]
         a47a8:	eb6c7a83 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a47ac:	e28dd004 	add	sp, sp, #4	; 0x4
         a47b0:	ea000531 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a47b4:	e1a00004 	mov	r0, r4
         a47b8:	e5941000 	ldr	r1, [r4]
         a47bc:	e1a0e00f 	mov	lr, pc
         a47c0:	e281f020 	add	pc, r1, #32	; 0x20
         a47c4:	e3100a02 	tst	r0, #8192	; 0x2000
         a47c8:	0a000005 	beq	a47e4 <TEditView::RealDoCommand(RefVar const &)+0x484>
         a47cc:	e3a08001 	mov	r8, #1	; 0x1
         a47d0:	e1a01005 	mov	r1, r5
         a47d4:	e1a00004 	mov	r0, r4
         a47d8:	eb67e9e3 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a47dc:	e3300000 	teq	r0, #0	; 0x0
         a47e0:	1a000435 	bne	a58bc <TEditView::RealDoCommand(RefVar const &)+0x155c>
         a47e4:	e1a00005 	mov	r0, r5
         a47e8:	eb6806da 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a47ec:	e1a07000 	mov	r7, r0
         a47f0:	eb000b38 	bl	a74d8 <PartOfTapDrag(TUnitPublic *)>
         a47f4:	e3300000 	teq	r0, #0	; 0x0
         a47f8:	1a00051f 	bne	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a47fc:	e3a09000 	mov	r9, #0	; 0x0
         a4800:	e59d2008 	ldr	r2, [sp, #8]	; fField8
         a4804:	e5c29020 	strb	r9, [r2, #32]	; fField32
         a4808:	e1a00007 	mov	r0, r7
         a480c:	eb67fa77 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
         a4810:	e1a01000 	mov	r1, r0
         a4814:	e1a00004 	mov	r0, r4
         a4818:	eb67d109 	bl	1a98c44 <TEditView::$HiliteClick(TStrokePublic *)>
         a481c:	e3300000 	teq	r0, #0	; 0x0
         a4820:	0a000515 	beq	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4824:	e1a00005 	mov	r0, r5
         a4828:	e3a01001 	mov	r1, #1	; 0x1
         a482c:	eb6806c8 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
         a4830:	e3a06001 	mov	r6, #1	; 0x1
         a4834:	ea000510 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4838:	e3a09000 	mov	r9, #0	; 0x0
         a483c:	e5c49040 	strb	r9, [r4, #64]	; fField64
         a4840:	e1a00005 	mov	r0, r5
         a4844:	eb6806c3 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a4848:	e3a01001 	mov	r1, #1	; 0x1
         a484c:	e59d2008 	ldr	r2, [sp, #8]	; fField8
         a4850:	e5c21020 	strb	r1, [r2, #32]	; fField32
         a4854:	eb67fa65 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
         a4858:	e1a01000 	mov	r1, r0
         a485c:	e1a00004 	mov	r0, r4
         a4860:	eb67d0f7 	bl	1a98c44 <TEditView::$HiliteClick(TStrokePublic *)>
         a4864:	e3300000 	teq	r0, #0	; 0x0
         a4868:	1affffed 	bne	a4824 <TEditView::RealDoCommand(RefVar const &)+0x4c4>
         a486c:	ea000502 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a4870:	e1a00004 	mov	r0, r4
         a4874:	e5941000 	ldr	r1, [r4]
         a4878:	e1a0e00f 	mov	lr, pc
         a487c:	e281f020 	add	pc, r1, #32	; 0x20
         a4880:	e3100a02 	tst	r0, #8192	; 0x2000
         a4884:	0a000005 	beq	a48a0 <TEditView::RealDoCommand(RefVar const &)+0x540>
         a4888:	e3a08001 	mov	r8, #1	; 0x1
         a488c:	e1a01005 	mov	r1, r5
         a4890:	e1a00004 	mov	r0, r4
         a4894:	eb67e9b4 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a4898:	e3300000 	teq	r0, #0	; 0x0
         a489c:	1a000406 	bne	a58bc <TEditView::RealDoCommand(RefVar const &)+0x155c>
         a48a0:	e3a00001 	mov	r0, #1	; 0x1
         a48a4:	e5c40040 	strb	r0, [r4, #64]	; fField64
         a48a8:	e1a00005 	mov	r0, r5
         a48ac:	eb6806a9 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a48b0:	eb67fa4e 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
         a48b4:	e1a01000 	mov	r1, r0
         a48b8:	e2840044 	add	r0, r4, #68	; 0x44
         a48bc:	eb67c05f 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
         a48c0:	e59f001c 	ldr	r0, [pc, #1c]	; a48e4 <TEditView::RealDoCommand(RefVar const &)+0x584>
         a48c4:	e5901000 	ldr	r1, [r0]
         a48c8:	e3a00050 	mov	r0, #80	; 0x50
         a48cc:	e0802201 	add	r2, r0, r1, lsl #4
         a48d0:	e1a01004 	mov	r1, r4
         a48d4:	e3a03002 	mov	r3, #2	; 0x2
         a48d8:	e5970000 	ldr	r0, [r7]
         a48dc:	eb6792fe 	bl	1a894dc <TRootView::$AddIdler(TView *, unsigned long, long)>
         a48e0:	ea0004e7 	b	a5c84 <TEditView::RealDoCommand(RefVar const &)+0x1924>
         a48e4:	0c101854 	ldceq	8, cr1, [r0], -#336
         a48e8:	e1a00009 	mov	r0, r9
         a48ec:	eb68b3fc 	bl	1ad18e4 <$IsOldInk(TView *)>
         a48f0:	e3300000 	teq	r0, #0	; 0x0
         a48f4:	1a000003 	bne	a4908 <TEditView::RealDoCommand(RefVar const &)+0x5a8>
         a48f8:	e1a00009 	mov	r0, r9
         a48fc:	eb68a37c 	bl	1acd6f4 <$ContainsHilitedInkWord(TView *)>
         a4900:	e3300000 	teq	r0, #0	; 0x0
         a4904:	0a000001 	beq	a4910 <TEditView::RealDoCommand(RefVar const &)+0x5b0>
         a4908:	e58d9010 	str	r9, [sp, #16]	; fField16
         a490c:	ea000003 	b	a4920 <TEditView::RealDoCommand(RefVar const &)+0x5c0>
         a4910:	e1a0000d 	mov	r0, sp
         a4914:	eb67e141 	bl	1a9ce20 <TListLoop::$Next(void)>
         a4918:	e1b09000 	movs	r9, r0
         a491c:	1afffff1 	bne	a48e8 <TEditView::RealDoCommand(RefVar const &)+0x588>
         a4920:	e28dd008 	add	sp, sp, #8	; 0x8
         a4924:	e3a00000 	mov	r0, #0	; 0x0
         a4928:	eb67dd1b 	bl	1a9bd9c <$MakeArray(long)>
         a492c:	eb6c7606 	bl	1bc214c <$AllocateRefHandle(long)>
         a4930:	e3a0a000 	mov	sl, #0	; 0x0
         a4934:	e58d0000 	str	r0, [sp]
         a4938:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a493c:	e3300000 	teq	r0, #0	; 0x0
         a4940:	0a000147 	beq	a4e64 <TEditView::RealDoCommand(RefVar const &)+0xb04>
         a4944:	e1a00004 	mov	r0, r4
         a4948:	eb67d8f6 	bl	1a9ad28 <TEditView::$InvalAllHilites(void)>
         a494c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a4950:	e1a0000d 	mov	r0, sp
         a4954:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a4958:	eb678eb5 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a495c:	e1a0000d 	mov	r0, sp
         a4960:	eb67e12e 	bl	1a9ce20 <TListLoop::$Next(void)>
         a4964:	e1b09000 	movs	r9, r0
         a4968:	0a000023 	beq	a49fc <TEditView::RealDoCommand(RefVar const &)+0x69c>
         a496c:	e1a00009 	mov	r0, r9
         a4970:	eb6833d8 	bl	1ab18d8 <TView::$FirstHilite(void)>
         a4974:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         a4978:	e5810000 	str	r0, [r1]
         a497c:	e3300002 	teq	r0, #2	; 0x2
         a4980:	0a000019 	beq	a49ec <TEditView::RealDoCommand(RefVar const &)+0x68c>
         a4984:	e24dd004 	sub	sp, sp, #4	; 0x4
         a4988:	e1a00009 	mov	r0, r9
         a498c:	eb68b3d4 	bl	1ad18e4 <$IsOldInk(TView *)>
         a4990:	e3300000 	teq	r0, #0	; 0x0
         a4994:	0a00000a 	beq	a49c4 <TEditView::RealDoCommand(RefVar const &)+0x664>
         a4998:	e1a00009 	mov	r0, r9
         a499c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         a49a0:	eb68b7dd 	bl	1ad291c <$MakeKidForSort(TView *, long)>
         a49a4:	eb6c75e8 	bl	1bc214c <$AllocateRefHandle(long)>
         a49a8:	e58d0000 	str	r0, [sp]
         a49ac:	e1a0100d 	mov	r1, sp
         a49b0:	e28d0010 	add	r0, sp, #16	; 0x10
         a49b4:	eb6c75db 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         a49b8:	e59d0000 	ldr	r0, [sp]
         a49bc:	eb6c79fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a49c0:	ea000008 	b	a49e8 <TEditView::RealDoCommand(RefVar const &)+0x688>
         a49c4:	e1a00009 	mov	r0, r9
         a49c8:	eb68a349 	bl	1acd6f4 <$ContainsHilitedInkWord(TView *)>
         a49cc:	e3300000 	teq	r0, #0	; 0x0
         a49d0:	13a0a001 	movne	sl, #1	; 0x1
         a49d4:	1a000003 	bne	a49e8 <TEditView::RealDoCommand(RefVar const &)+0x688>
         a49d8:	e1a00009 	mov	r0, r9
         a49dc:	e5991000 	ldr	r1, [r9]
         a49e0:	e1a0e00f 	mov	lr, pc
         a49e4:	e281f0ac 	add	pc, r1, #172	; 0xac
         a49e8:	e28dd004 	add	sp, sp, #4	; 0x4
         a49ec:	e1a0000d 	mov	r0, sp
         a49f0:	eb67e10a 	bl	1a9ce20 <TListLoop::$Next(void)>
         a49f4:	e1b09000 	movs	r9, r0
         a49f8:	1affffdb 	bne	a496c <TEditView::RealDoCommand(RefVar const &)+0x60c>
         a49fc:	e3a01000 	mov	r1, #0	; 0x0
         a4a00:	e5970000 	ldr	r0, [r7]
         a4a04:	eb680226 	bl	1aa52a4 <TRootView::$Update(TRect *)>
         a4a08:	e28dd00c 	add	sp, sp, #12	; 0xc
         a4a0c:	e33a0000 	teq	sl, #0	; 0x0
         a4a10:	0a00005a 	beq	a4b80 <TEditView::RealDoCommand(RefVar const &)+0x820>
         a4a14:	e24dd004 	sub	sp, sp, #4	; 0x4
         a4a18:	e3a01001 	mov	r1, #1	; 0x1
         a4a1c:	e5970000 	ldr	r0, [r7]
         a4a20:	eb68bbf1 	bl	1ad39ec <TRootView::$SetPreserveHilites(unsigned char)>
         a4a24:	e58d0000 	str	r0, [sp]
         a4a28:	e1a00004 	mov	r0, r4
         a4a2c:	eb67d8bd 	bl	1a9ad28 <TEditView::$InvalAllHilites(void)>
         a4a30:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a4a34:	e1a0000d 	mov	r0, sp
         a4a38:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a4a3c:	eb678e7c 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a4a40:	e1a0000d 	mov	r0, sp
         a4a44:	eb67e0f5 	bl	1a9ce20 <TListLoop::$Next(void)>
         a4a48:	e1b09000 	movs	r9, r0
         a4a4c:	e59fa318 	ldr	sl, [pc, #318]	; a4d6c <TEditView::RealDoCommand(RefVar const &)+0xa0c>
         a4a50:	0a000046 	beq	a4b70 <TEditView::RealDoCommand(RefVar const &)+0x810>
         a4a54:	e1a00009 	mov	r0, r9
         a4a58:	eb68a325 	bl	1acd6f4 <$ContainsHilitedInkWord(TView *)>
         a4a5c:	e3300000 	teq	r0, #0	; 0x0
         a4a60:	0a00003e 	beq	a4b60 <TEditView::RealDoCommand(RefVar const &)+0x800>
         a4a64:	e1a00009 	mov	r0, r9
         a4a68:	eb68339a 	bl	1ab18d8 <TView::$FirstHilite(void)>
         a4a6c:	e59d1014 	ldr	r1, [sp, #20]
         a4a70:	e5810000 	str	r0, [r1]
         a4a74:	e24dd014 	sub	sp, sp, #20	; 0x14
         a4a78:	eb67ed58 	bl	1a9ffe0 <$RefToAddress(long)>
         a4a7c:	e1a06000 	mov	r6, r0
         a4a80:	e5992004 	ldr	r2, [r9, #4]	; fField4
         a4a84:	e1a01009 	mov	r1, r9
         a4a88:	e3a0001a 	mov	r0, #26	; 0x1a
         a4a8c:	eb68062b 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a4a90:	eb6c75ad 	bl	1bc214c <$AllocateRefHandle(long)>
         a4a94:	e58d0010 	str	r0, [sp, #16]	; fField16
         a4a98:	e596000c 	ldr	r0, [r6, #12]
         a4a9c:	e1a00100 	mov	r0, r0, lsl #2
         a4aa0:	eb6c75a9 	bl	1bc214c <$AllocateRefHandle(long)>
         a4aa4:	e58d0000 	str	r0, [sp]
         a4aa8:	e1a0200d 	mov	r2, sp
         a4aac:	e59f12bc 	ldr	r1, [pc, #2bc]	; a4d70 <TEditView::RealDoCommand(RefVar const &)+0xa10>	; fField2
         a4ab0:	e28d0010 	add	r0, sp, #16	; 0x10
         a4ab4:	eb6c862b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a4ab8:	e59d0000 	ldr	r0, [sp]
         a4abc:	eb6c79be 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4ac0:	e5b60010 	ldr	r0, [r6, #16]!	; fField16
         a4ac4:	e1a00100 	mov	r0, r0, lsl #2
         a4ac8:	eb6c759f 	bl	1bc214c <$AllocateRefHandle(long)>
         a4acc:	e58d0004 	str	r0, [sp, #4]	; fField4
         a4ad0:	e28d2004 	add	r2, sp, #4	; 0x4
         a4ad4:	e59f1298 	ldr	r1, [pc, #298]	; a4d74 <TEditView::RealDoCommand(RefVar const &)+0xa14>
         a4ad8:	e28d0010 	add	r0, sp, #16	; 0x10
         a4adc:	eb6c8621 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a4ae0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a4ae4:	eb6c79b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4ae8:	e3a0001a 	mov	r0, #26	; 0x1a
         a4aec:	eb6c7596 	bl	1bc214c <$AllocateRefHandle(long)>
         a4af0:	e58d0008 	str	r0, [sp, #8]	; fField8
         a4af4:	e28d2008 	add	r2, sp, #8	; 0x8
         a4af8:	e59f1278 	ldr	r1, [pc, #278]	; a4d78 <TEditView::RealDoCommand(RefVar const &)+0xa18>
         a4afc:	e28d0010 	add	r0, sp, #16	; 0x10
         a4b00:	eb6c8618 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a4b04:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a4b08:	eb6c79ab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4b0c:	e3a00002 	mov	r0, #2	; 0x2
         a4b10:	eb6c758d 	bl	1bc214c <$AllocateRefHandle(long)>
         a4b14:	e58d000c 	str	r0, [sp, #12]
         a4b18:	e28d200c 	add	r2, sp, #12	; 0xc
         a4b1c:	e1a0100a 	mov	r1, sl
         a4b20:	e28d0010 	add	r0, sp, #16	; 0x10
         a4b24:	eb6c860f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a4b28:	e59d000c 	ldr	r0, [sp, #12]
         a4b2c:	eb6c79a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4b30:	e59d0044 	ldr	r0, [sp, #68]
         a4b34:	e5900000 	ldr	r0, [r0]
         a4b38:	e28d1010 	add	r1, sp, #16	; 0x10
         a4b3c:	eb67af3d 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a4b40:	e1a00009 	mov	r0, r9
         a4b44:	e5991000 	ldr	r1, [r9]
         a4b48:	e1a0e00f 	mov	lr, pc
         a4b4c:	e281f0ac 	add	pc, r1, #172	; 0xac
         a4b50:	e3a06001 	mov	r6, #1	; 0x1
         a4b54:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a4b58:	eb6c7997 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4b5c:	e28dd014 	add	sp, sp, #20	; 0x14
         a4b60:	e1a0000d 	mov	r0, sp
         a4b64:	eb67e0ad 	bl	1a9ce20 <TListLoop::$Next(void)>
         a4b68:	e1b09000 	movs	r9, r0
         a4b6c:	1affffb8 	bne	a4a54 <TEditView::RealDoCommand(RefVar const &)+0x6f4>
         a4b70:	e59d100c 	ldr	r1, [sp, #12]
         a4b74:	e5970000 	ldr	r0, [r7]
         a4b78:	eb68bb9b 	bl	1ad39ec <TRootView::$SetPreserveHilites(unsigned char)>
         a4b7c:	e28dd010 	add	sp, sp, #16	; 0x10
         a4b80:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a4b84:	e3300000 	teq	r0, #0	; 0x0
         a4b88:	0a0000b5 	beq	a4e64 <TEditView::RealDoCommand(RefVar const &)+0xb04>
         a4b8c:	e59d0000 	ldr	r0, [sp]
         a4b90:	e5900000 	ldr	r0, [r0]
         a4b94:	eb6c81c4 	bl	1bc52ac <$Length(long)>
         a4b98:	e3500000 	cmp	r0, #0	; 0x0
         a4b9c:	da0000b0 	ble	a4e64 <TEditView::RealDoCommand(RefVar const &)+0xb04>
         a4ba0:	e3a00002 	mov	r0, #2	; 0x2
         a4ba4:	eb6c7568 	bl	1bc214c <$AllocateRefHandle(long)>
         a4ba8:	e1a0a000 	mov	sl, r0
         a4bac:	e1a0000d 	mov	r0, sp
         a4bb0:	eb68bf93 	bl	1ad4a04 <$SortTextInk(RefVar const &)>
         a4bb4:	e58a0000 	str	r0, [sl]
         a4bb8:	e24dd004 	sub	sp, sp, #4	; 0x4
         a4bbc:	eb6c81ba 	bl	1bc52ac <$Length(long)>
         a4bc0:	e1a09000 	mov	r9, r0
         a4bc4:	eb0b97e6 	bl	38ab64 <C$$dtorvec$$Limit+0x1f0>
         a4bc8:	e3a01000 	mov	r1, #0	; 0x0
         a4bcc:	e3590000 	cmp	r9, #0	; 0x0
         a4bd0:	e40d0004 	str	r0, [sp], -#4	; fField4
         a4bd4:	e58d1000 	str	r1, [sp]
         a4bd8:	da000016 	ble	a4c38 <TEditView::RealDoCommand(RefVar const &)+0x8d8>
         a4bdc:	e59a0000 	ldr	r0, [sl]
         a4be0:	e59d1000 	ldr	r1, [sp]
         a4be4:	eb6c7d9a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a4be8:	e3100003 	tst	r0, #3	; 0x3
         a4bec:	01a00140 	moveq	r0, r0, asr #2
         a4bf0:	0a000000 	beq	a4bf8 <TEditView::RealDoCommand(RefVar const &)+0x898>
         a4bf4:	eb6c7548 	bl	1bc211c <$_RINTError(long)>
         a4bf8:	e1b01000 	movs	r1, r0
         a4bfc:	5a000002 	bpl	a4c0c <TEditView::RealDoCommand(RefVar const &)+0x8ac>
         a4c00:	e1a00001 	mov	r0, r1
         a4c04:	ebfffd1b 	bl	a4078 <MapIndex(long)>
         a4c08:	e1a01000 	mov	r1, r0
         a4c0c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         a4c10:	eb6d05cb 	bl	1be6344 <CList::$At(long)>
         a4c14:	e1a02000 	mov	r2, r0
         a4c18:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a4c1c:	e5901000 	ldr	r1, [r0]
         a4c20:	eb6d1231 	bl	1be94ec <CList::$InsertAt(long, void *)>
         a4c24:	e59d1000 	ldr	r1, [sp]
         a4c28:	e2811001 	add	r1, r1, #1	; 0x1
         a4c2c:	e58d1000 	str	r1, [sp]
         a4c30:	e1510009 	cmp	r1, r9
         a4c34:	baffffe8 	blt	a4bdc <TEditView::RealDoCommand(RefVar const &)+0x87c>
         a4c38:	e1a00004 	mov	r0, r4
         a4c3c:	eb67d839 	bl	1a9ad28 <TEditView::$InvalAllHilites(void)>
         a4c40:	e3a01000 	mov	r1, #0	; 0x0
         a4c44:	e3590000 	cmp	r9, #0	; 0x0
         a4c48:	e58d1000 	str	r1, [sp]
         a4c4c:	da00000b 	ble	a4c80 <TEditView::RealDoCommand(RefVar const &)+0x920>
         a4c50:	e59a0000 	ldr	r0, [sl]
         a4c54:	e59d1000 	ldr	r1, [sp]
         a4c58:	eb6c7d7d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a4c5c:	e3100003 	tst	r0, #3	; 0x3
         a4c60:	01a00140 	moveq	r0, r0, asr #2
         a4c64:	0a000000 	beq	a4c6c <TEditView::RealDoCommand(RefVar const &)+0x90c>
         a4c68:	eb6c752b 	bl	1bc211c <$_RINTError(long)>
         a4c6c:	e59d1000 	ldr	r1, [sp]
         a4c70:	e2811001 	add	r1, r1, #1	; 0x1
         a4c74:	e58d1000 	str	r1, [sp]
         a4c78:	e1510009 	cmp	r1, r9
         a4c7c:	bafffff3 	blt	a4c50 <TEditView::RealDoCommand(RefVar const &)+0x8f0>
         a4c80:	e3a03000 	mov	r3, #0	; 0x0
         a4c84:	e92d0008 	stmdb	sp!, {r3}
         a4c88:	e3a02000 	mov	r2, #0	; 0x0
         a4c8c:	e3a01000 	mov	r1, #0	; 0x0
         a4c90:	e5970000 	ldr	r0, [r7]
         a4c94:	eb68bb52 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a4c98:	e24dd008 	sub	sp, sp, #8	; 0x8
         a4c9c:	e59f00d8 	ldr	r0, [pc, #d8]	; a4d7c <TEditView::RealDoCommand(RefVar const &)+0xa1c>
         a4ca0:	e58d002c 	str	r0, [sp, #44]
         a4ca4:	eb67c796 	bl	1a96b04 <$GetPreference(RefVar const &)>
         a4ca8:	eb6c7527 	bl	1bc214c <$AllocateRefHandle(long)>
         a4cac:	e58d0008 	str	r0, [sp, #8]	; fField8
         a4cb0:	e28d0008 	add	r0, sp, #8	; 0x8
         a4cb4:	e58d0004 	str	r0, [sp, #4]	; fField4
         a4cb8:	e3a00002 	mov	r0, #2	; 0x2
         a4cbc:	eb6c7522 	bl	1bc214c <$AllocateRefHandle(long)>
         a4cc0:	e58d0000 	str	r0, [sp]
         a4cc4:	e1a0100d 	mov	r1, sp
         a4cc8:	e59d002c 	ldr	r0, [sp, #44]
         a4ccc:	eb67f518 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
         a4cd0:	e59d0000 	ldr	r0, [sp]
         a4cd4:	eb6c7938 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4cd8:	e3a01000 	mov	r1, #0	; 0x0
         a4cdc:	e3590000 	cmp	r9, #0	; 0x0
         a4ce0:	e58d100c 	str	r1, [sp, #12]
         a4ce4:	da00004b 	ble	a4e18 <TEditView::RealDoCommand(RefVar const &)+0xab8>
         a4ce8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a4cec:	e59d100c 	ldr	r1, [sp, #12]
         a4cf0:	eb6d0593 	bl	1be6344 <CList::$At(long)>
         a4cf4:	e1a06000 	mov	r6, r0
         a4cf8:	e5901000 	ldr	r1, [r0]
         a4cfc:	e1a0e00f 	mov	lr, pc
         a4d00:	e281f0ac 	add	pc, r1, #172	; 0xac
         a4d04:	e59a0000 	ldr	r0, [sl]
         a4d08:	e59d100c 	ldr	r1, [sp, #12]
         a4d0c:	eb6c7d50 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a4d10:	e3100003 	tst	r0, #3	; 0x3
         a4d14:	01a00140 	moveq	r0, r0, asr #2
         a4d18:	0a000000 	beq	a4d20 <TEditView::RealDoCommand(RefVar const &)+0x9c0>
         a4d1c:	eb6c74fe 	bl	1bc211c <$_RINTError(long)>
         a4d20:	e3500000 	cmp	r0, #0	; 0x0
         a4d24:	aa000015 	bge	a4d80 <TEditView::RealDoCommand(RefVar const &)+0xa20>
         a4d28:	e5b62004 	ldr	r2, [r6, #4]!	; fField4
         a4d2c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a4d30:	e59d0038 	ldr	r0, [sp, #56]
         a4d34:	e1a01004 	mov	r1, r4
         a4d38:	e5906000 	ldr	r6, [r0]
         a4d3c:	e3a0003f 	mov	r0, #63	; 0x3f
         a4d40:	eb68057e 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a4d44:	eb6c7500 	bl	1bc214c <$AllocateRefHandle(long)>
         a4d48:	e58d0000 	str	r0, [sp]
         a4d4c:	e1a0100d 	mov	r1, sp
         a4d50:	e1a00006 	mov	r0, r6
         a4d54:	eb67aeb7 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a4d58:	e59d0000 	ldr	r0, [sp]
         a4d5c:	eb6c7916 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4d60:	e28dd004 	add	sp, sp, #4	; 0x4
         a4d64:	e3a06001 	mov	r6, #1	; 0x1
         a4d68:	ea000025 	b	a4e04 <TEditView::RealDoCommand(RefVar const &)+0xaa4>
         a4d6c:	00684138 	rsbeq	r4, r8, r8, lsr r1
         a4d70:	00684800 	rsbeq	r4, r8, r0, lsl #16
         a4d74:	00684850 	rsbeq	r4, r8, r0, asr r8
         a4d78:	00682a28 	rsbeq	r2, r8, r8, lsr #20
         a4d7c:	00684270 	rsbeq	r4, r8, r0, ror r2
         a4d80:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a4d84:	e5962004 	ldr	r2, [r6, #4]	; fField4
         a4d88:	e1a01006 	mov	r1, r6
         a4d8c:	e3a00019 	mov	r0, #25	; 0x19
         a4d90:	eb68056a 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a4d94:	eb6c74ec 	bl	1bc214c <$AllocateRefHandle(long)>
         a4d98:	e58d0008 	str	r0, [sp, #8]	; fField8
         a4d9c:	e3a0001a 	mov	r0, #26	; 0x1a
         a4da0:	eb6c74e9 	bl	1bc214c <$AllocateRefHandle(long)>
         a4da4:	e58d0000 	str	r0, [sp]
         a4da8:	e1a0200d 	mov	r2, sp
         a4dac:	e51f103c 	ldr	r1, [pc, #ffffffc4]	; a4d78 <TEditView::RealDoCommand(RefVar const &)+0xa18>
         a4db0:	e28d0008 	add	r0, sp, #8	; 0x8
         a4db4:	eb6c856b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a4db8:	e59d0000 	ldr	r0, [sp]
         a4dbc:	eb6c78fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4dc0:	e3a00002 	mov	r0, #2	; 0x2
         a4dc4:	eb6c74e0 	bl	1bc214c <$AllocateRefHandle(long)>
         a4dc8:	e58d0004 	str	r0, [sp, #4]	; fField4
         a4dcc:	e28d2004 	add	r2, sp, #4	; 0x4
         a4dd0:	e51f106c 	ldr	r1, [pc, #ffffff94]	; a4d6c <TEditView::RealDoCommand(RefVar const &)+0xa0c>
         a4dd4:	e28d0008 	add	r0, sp, #8	; 0x8
         a4dd8:	eb6c8562 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a4ddc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a4de0:	eb6c78f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4de4:	e59d0040 	ldr	r0, [sp, #64]	; fField64
         a4de8:	e5900000 	ldr	r0, [r0]
         a4dec:	e28d1008 	add	r1, sp, #8	; 0x8
         a4df0:	eb67ae90 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a4df4:	e3a06001 	mov	r6, #1	; 0x1
         a4df8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a4dfc:	eb6c78ee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4e00:	e28dd00c 	add	sp, sp, #12	; 0xc
         a4e04:	e59d100c 	ldr	r1, [sp, #12]
         a4e08:	e2811001 	add	r1, r1, #1	; 0x1
         a4e0c:	e58d100c 	str	r1, [sp, #12]
         a4e10:	e1510009 	cmp	r1, r9
         a4e14:	baffffb3 	blt	a4ce8 <TEditView::RealDoCommand(RefVar const &)+0x988>
         a4e18:	e59d002c 	ldr	r0, [sp, #44]
         a4e1c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a4e20:	eb67f4c3 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
         a4e24:	e59d9010 	ldr	r9, [sp, #16]	; fField16
         a4e28:	e3390000 	teq	r9, #0	; 0x0
         a4e2c:	0a000004 	beq	a4e44 <TEditView::RealDoCommand(RefVar const &)+0xae4>
         a4e30:	e1a00009 	mov	r0, r9
         a4e34:	e3a01000 	mov	r1, #0	; 0x0
         a4e38:	eb6d0111 	bl	1be5284 <CList::$__dt(void)>
         a4e3c:	e1a00009 	mov	r0, r9
         a4e40:	eb6ca226 	bl	1bcd6e0 <$__dl(void *)>
         a4e44:	e3a01001 	mov	r1, #1	; 0x1
         a4e48:	e5970000 	ldr	r0, [r7]
         a4e4c:	e5c0105c 	strb	r1, [r0, #92]	; fField92
         a4e50:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a4e54:	eb6c78d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4e58:	e28dd014 	add	sp, sp, #20	; 0x14
         a4e5c:	e1a0000a 	mov	r0, sl
         a4e60:	eb6c78d5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4e64:	e59d0000 	ldr	r0, [sp]
         a4e68:	eb6c78d3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4e6c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         a4e70:	eb6c78d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a4e74:	e28dd008 	add	sp, sp, #8	; 0x8
         a4e78:	e3360000 	teq	r6, #0	; 0x0
         a4e7c:	1a000019 	bne	a4ee8 <TEditView::RealDoCommand(RefVar const &)+0xb88>
         a4e80:	e24dd008 	sub	sp, sp, #8	; 0x8
         a4e84:	e1a0000d 	mov	r0, sp
         a4e88:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a4e8c:	eb678956 	bl	1a873ec <TBackwardLoop::$__ct(CList *)>
         a4e90:	e1a0000d 	mov	r0, sp
         a4e94:	eb67dfde 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
         a4e98:	e1b07000 	movs	r7, r0
         a4e9c:	0a000010 	beq	a4ee4 <TEditView::RealDoCommand(RefVar const &)+0xb84>
         a4ea0:	e2871010 	add	r1, r7, #16	; 0x10
         a4ea4:	e59d000c 	ldr	r0, [sp, #12]
         a4ea8:	e50d0004 	str	r0, [sp, -#4]	; fField4
         a4eac:	eb6ab6a2 	bl	1b5293c <$PtInRect(Point, Rect *)>
         a4eb0:	e3300000 	teq	r0, #0	; 0x0
         a4eb4:	0a000006 	beq	a4ed4 <TEditView::RealDoCommand(RefVar const &)+0xb74>
         a4eb8:	e1a01005 	mov	r1, r5
         a4ebc:	e1a00007 	mov	r0, r7
         a4ec0:	e5972000 	ldr	r2, [r7]
         a4ec4:	e1a0e00f 	mov	lr, pc
         a4ec8:	e282f01c 	add	pc, r2, #28	; 0x1c
         a4ecc:	e1b06000 	movs	r6, r0
         a4ed0:	1a000003 	bne	a4ee4 <TEditView::RealDoCommand(RefVar const &)+0xb84>
         a4ed4:	e1a0000d 	mov	r0, sp
         a4ed8:	eb67dfcd 	bl	1a9ce14 <TBackwardLoop::$Next(void)>
         a4edc:	e1b07000 	movs	r7, r0
         a4ee0:	1affffee 	bne	a4ea0 <TEditView::RealDoCommand(RefVar const &)+0xb40>
         a4ee4:	e28dd008 	add	sp, sp, #8	; 0x8
         a4ee8:	e3560000 	cmp	r6, #0	; 0x0
         a4eec:	1a000011 	bne	a4f38 <TEditView::RealDoCommand(RefVar const &)+0xbd8>
         a4ef0:	e59d0000 	ldr	r0, [sp]
         a4ef4:	e3300000 	teq	r0, #0	; 0x0
         a4ef8:	0a00034c 	beq	a5c30 <TEditView::RealDoCommand(RefVar const &)+0x18d0>
         a4efc:	e3a00001 	mov	r0, #1	; 0x1
         a4f00:	e59d2010 	ldr	r2, [sp, #16]	; fField16
         a4f04:	e5c2002c 	strb	r0, [r2, #44]
         a4f08:	e28d1004 	add	r1, sp, #4	; 0x4
         a4f0c:	e1a00004 	mov	r0, r4
         a4f10:	e5942000 	ldr	r2, [r4]
         a4f14:	e1a0e00f 	mov	lr, pc
         a4f18:	e282ff49 	add	pc, r2, #292	; 0x124
         a4f1c:	e3a00000 	mov	r0, #0	; 0x0
         a4f20:	e59d2010 	ldr	r2, [sp, #16]	; fField16
         a4f24:	e5c2002c 	strb	r0, [r2, #44]
         a4f28:	e1a00004 	mov	r0, r4
         a4f2c:	eb684709 	bl	1ab6b58 <$OpenKeypadFor(TView *)>
         a4f30:	e3a06001 	mov	r6, #1	; 0x1
         a4f34:	ea000000 	b	a4f3c <TEditView::RealDoCommand(RefVar const &)+0xbdc>
         a4f38:	0a00033c 	beq	a5c30 <TEditView::RealDoCommand(RefVar const &)+0x18d0>
         a4f3c:	e1a00005 	mov	r0, r5
         a4f40:	e3a01001 	mov	r1, #1	; 0x1
         a4f44:	eb680502 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
         a4f48:	ea000338 	b	a5c30 <TEditView::RealDoCommand(RefVar const &)+0x18d0>
         a4f4c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a4f50:	e1a0300d 	mov	r3, sp
         a4f54:	e1a02000 	mov	r2, r0
         a4f58:	e1a01005 	mov	r1, r5
         a4f5c:	e1a00004 	mov	r0, r4
         a4f60:	eb69115c 	bl	1ae94d8 <TView::$HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)>
         a4f64:	e1b06000 	movs	r6, r0
         a4f68:	1afffe0f 	bne	a47ac <TEditView::RealDoCommand(RefVar const &)+0x44c>
         a4f6c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         a4f70:	e3100082 	tst	r0, #130	; 0x82
         a4f74:	05dd0000 	ldreqb	r0, [sp]
         a4f78:	03300000 	teqeq	r0, #0	; 0x0
         a4f7c:	0a000001 	beq	a4f88 <TEditView::RealDoCommand(RefVar const &)+0xc28>
         a4f80:	e3a06001 	mov	r6, #1	; 0x1
         a4f84:	ea0001a0 	b	a560c <TEditView::RealDoCommand(RefVar const &)+0x12ac>
         a4f88:	e24dd004 	sub	sp, sp, #4	; 0x4
         a4f8c:	e1a00005 	mov	r0, r5
         a4f90:	eb6804f0 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a4f94:	e1a01800 	mov	r1, r0, lsl #16
         a4f98:	e1a01821 	mov	r1, r1, lsr #16
         a4f9c:	e5cd1001 	strb	r1, [sp, #1]
         a4fa0:	e1a00421 	mov	r0, r1, lsr #8
         a4fa4:	e5cd0000 	strb	r0, [sp]
         a4fa8:	e3310008 	teq	r1, #8	; 0x8
         a4fac:	1a000002 	bne	a4fbc <TEditView::RealDoCommand(RefVar const &)+0xc5c>
         a4fb0:	e1a00004 	mov	r0, r4
         a4fb4:	eb68a5d1 	bl	1ace700 <TEditView::$DeleteHilitedViews(void)>
         a4fb8:	ea000011 	b	a5004 <TEditView::RealDoCommand(RefVar const &)+0xca4>
         a4fbc:	e59d0000 	ldr	r0, [sp]
         a4fc0:	e1a00820 	mov	r0, r0, lsr #16
         a4fc4:	e3300003 	teq	r0, #3	; 0x3
         a4fc8:	1a000003 	bne	a4fdc <TEditView::RealDoCommand(RefVar const &)+0xc7c>
         a4fcc:	e3a0000d 	mov	r0, #13	; 0xd
         a4fd0:	e5cd0001 	strb	r0, [sp, #1]
         a4fd4:	e3a09000 	mov	r9, #0	; 0x0
         a4fd8:	e5cd9000 	strb	r9, [sp]
         a4fdc:	e1a01004 	mov	r1, r4
         a4fe0:	e59d0000 	ldr	r0, [sp]
         a4fe4:	e1a00820 	mov	r0, r0, lsr #16
         a4fe8:	eb68b644 	bl	1ad2900 <$KeyIsPrintable(unsigned short, TView *)>
         a4fec:	e3300000 	teq	r0, #0	; 0x0
         a4ff0:	0a000003 	beq	a5004 <TEditView::RealDoCommand(RefVar const &)+0xca4>
         a4ff4:	e1a0100d 	mov	r1, sp
         a4ff8:	e1a00004 	mov	r0, r4
         a4ffc:	e3a02001 	mov	r2, #1	; 0x1
         a5000:	eb68b23a 	bl	1ad18f0 <TEditView::$JamText(unsigned short *, unsigned long)>
         a5004:	e3a06001 	mov	r6, #1	; 0x1
         a5008:	e28dd008 	add	sp, sp, #8	; 0x8
         a500c:	ea000322 	b	a5c9c <TEditView::RealDoCommand(RefVar const &)+0x193c>
         a5010:	e1a02000 	mov	r2, r0
         a5014:	e1a01005 	mov	r1, r5
         a5018:	e1a00004 	mov	r0, r4
         a501c:	e3a03000 	mov	r3, #0	; 0x0
         a5020:	eb69112c 	bl	1ae94d8 <TView::$HandleKeyEvent(RefVar const &, unsigned long, unsigned char *)>
         a5024:	e1b06000 	movs	r6, r0
         a5028:	1a000313 	bne	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a502c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a5030:	e1a00005 	mov	r0, r5
         a5034:	eb6804c9 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
         a5038:	eb6c7443 	bl	1bc214c <$AllocateRefHandle(long)>
         a503c:	e58d0008 	str	r0, [sp, #8]	; fField8
         a5040:	e28d1008 	add	r1, sp, #8	; 0x8
         a5044:	e1a0000d 	mov	r0, sp
         a5048:	eb6c7022 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         a504c:	e1a0100d 	mov	r1, sp
         a5050:	e28d0004 	add	r0, sp, #4	; 0x4
         a5054:	eb6c701e 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
         a5058:	e1a0000d 	mov	r0, sp
         a505c:	e3a01000 	mov	r1, #0	; 0x0
         a5060:	eb6c7426 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         a5064:	e28d0004 	add	r0, sp, #4	; 0x4
         a5068:	eb6c7429 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         a506c:	e1a05000 	mov	r5, r0
         a5070:	eb6d25ba 	bl	1bee760 <$Ustrlen>
         a5074:	e1a02000 	mov	r2, r0
         a5078:	e1a01005 	mov	r1, r5
         a507c:	e1a00004 	mov	r0, r4
         a5080:	eb68b21a 	bl	1ad18f0 <TEditView::$JamText(unsigned short *, unsigned long)>
         a5084:	e3a06001 	mov	r6, #1	; 0x1
         a5088:	e28d0004 	add	r0, sp, #4	; 0x4
         a508c:	e3a01000 	mov	r1, #0	; 0x0
         a5090:	eb6c741a 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         a5094:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a5098:	eb6c7847 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a509c:	e28dd00c 	add	sp, sp, #12	; 0xc
         a50a0:	ea0002fd 	b	a5c9c <TEditView::RealDoCommand(RefVar const &)+0x193c>
         a50a4:	e1a00004 	mov	r0, r4
         a50a8:	e5941000 	ldr	r1, [r4]
         a50ac:	e1a0e00f 	mov	lr, pc
         a50b0:	e281f0ac 	add	pc, r1, #172	; 0xac
         a50b4:	ea0002f4 	b	a5c8c <TEditView::RealDoCommand(RefVar const &)+0x192c>
         a50b8:	e1a01005 	mov	r1, r5
         a50bc:	e1a00004 	mov	r0, r4
         a50c0:	eb67e7a9 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a50c4:	e1b06000 	movs	r6, r0
         a50c8:	1a0002eb 	bne	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a50cc:	e5940008 	ldr	r0, [r4, #8]	; fField8
         a50d0:	e3100082 	tst	r0, #130	; 0x82
         a50d4:	1a0002ec 	bne	a5c8c <TEditView::RealDoCommand(RefVar const &)+0x192c>
         a50d8:	e24dd010 	sub	sp, sp, #16	; 0x10
         a50dc:	e3a07000 	mov	r7, #0	; 0x0
         a50e0:	e3a06000 	mov	r6, #0	; 0x0
         a50e4:	e1a00005 	mov	r0, r5
         a50e8:	eb68049c 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
         a50ec:	eb6c7416 	bl	1bc214c <$AllocateRefHandle(long)>
         a50f0:	e58d000c 	str	r0, [sp, #12]
         a50f4:	e1a0000d 	mov	r0, sp
         a50f8:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a50fc:	eb678ccc 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a5100:	e1a0000d 	mov	r0, sp
         a5104:	eb67df45 	bl	1a9ce20 <TListLoop::$Next(void)>
         a5108:	e1b05000 	movs	r5, r0
         a510c:	0a00001f 	beq	a5190 <TEditView::RealDoCommand(RefVar const &)+0xe30>
         a5110:	e5950008 	ldr	r0, [r5, #8]	; fField8
         a5114:	e3100001 	tst	r0, #1	; 0x1
         a5118:	0a00000f 	beq	a515c <TEditView::RealDoCommand(RefVar const &)+0xdfc>
         a511c:	e1a00005 	mov	r0, r5
         a5120:	e3a01053 	mov	r1, #83	; 0x53
         a5124:	e5952000 	ldr	r2, [r5]
         a5128:	e1a0e00f 	mov	lr, pc
         a512c:	e282f004 	add	pc, r2, #4	; 0x4
         a5130:	e3300000 	teq	r0, #0	; 0x0
         a5134:	0a000008 	beq	a515c <TEditView::RealDoCommand(RefVar const &)+0xdfc>
         a5138:	e28d100c 	add	r1, sp, #12	; 0xc
         a513c:	e1a00005 	mov	r0, r5
         a5140:	e3a02000 	mov	r2, #0	; 0x0
         a5144:	e5953000 	ldr	r3, [r5]
         a5148:	e1a0e00f 	mov	lr, pc
         a514c:	e283ff4a 	add	pc, r3, #296	; 0x128
         a5150:	e1500006 	cmp	r0, r6
         a5154:	c1a06000 	movgt	r6, r0
         a5158:	c1a07005 	movgt	r7, r5
         a515c:	e1a0000d 	mov	r0, sp
         a5160:	eb67df2e 	bl	1a9ce20 <TListLoop::$Next(void)>
         a5164:	e1b05000 	movs	r5, r0
         a5168:	1affffe8 	bne	a5110 <TEditView::RealDoCommand(RefVar const &)+0xdb0>
         a516c:	e3360000 	teq	r6, #0	; 0x0
         a5170:	0a000006 	beq	a5190 <TEditView::RealDoCommand(RefVar const &)+0xe30>
         a5174:	e28d100c 	add	r1, sp, #12	; 0xc
         a5178:	e1a00007 	mov	r0, r7
         a517c:	e3a02001 	mov	r2, #1	; 0x1
         a5180:	e5973000 	ldr	r3, [r7]
         a5184:	e1a0e00f 	mov	lr, pc
         a5188:	e283ff4a 	add	pc, r3, #296	; 0x128
         a518c:	ea000002 	b	a519c <TEditView::RealDoCommand(RefVar const &)+0xe3c>
         a5190:	e28d100c 	add	r1, sp, #12	; 0xc
         a5194:	e1a00004 	mov	r0, r4
         a5198:	eb026d6d 	bl	140754 <HandleInk(TEditView *, RefVar const &)>
         a519c:	e3a06001 	mov	r6, #1	; 0x1
         a51a0:	e59d000c 	ldr	r0, [sp, #12]
         a51a4:	eb6c7804 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a51a8:	e28dd010 	add	sp, sp, #16	; 0x10
         a51ac:	ea0002ba 	b	a5c9c <TEditView::RealDoCommand(RefVar const &)+0x193c>
         a51b0:	e1a01005 	mov	r1, r5
         a51b4:	e1a00004 	mov	r0, r4
         a51b8:	eb67e76b 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a51bc:	e1b06000 	movs	r6, r0
         a51c0:	1a0002ad 	bne	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a51c4:	e5940008 	ldr	r0, [r4, #8]	; fField8
         a51c8:	e3100082 	tst	r0, #130	; 0x82
         a51cc:	1a0002ae 	bne	a5c8c <TEditView::RealDoCommand(RefVar const &)+0x192c>
         a51d0:	e24dd004 	sub	sp, sp, #4	; 0x4
         a51d4:	e3a0a000 	mov	sl, #0	; 0x0
         a51d8:	e3a09000 	mov	r9, #0	; 0x0
         a51dc:	eb6890bf 	bl	1ac94e0 <$SetRemoteForCorrector(void)>
         a51e0:	e58d0000 	str	r0, [sp]
         a51e4:	eb034573 	bl	1767b8 <CorrectorUp(void)>
         a51e8:	e3300000 	teq	r0, #0	; 0x0
         a51ec:	e1a00004 	mov	r0, r4
         a51f0:	0a000003 	beq	a5204 <TEditView::RealDoCommand(RefVar const &)+0xea4>
         a51f4:	e5901000 	ldr	r1, [r0]
         a51f8:	e1a0e00f 	mov	lr, pc
         a51fc:	e281f0ac 	add	pc, r1, #172	; 0xac
         a5200:	ea000000 	b	a5208 <TEditView::RealDoCommand(RefVar const &)+0xea8>
         a5204:	eb68b9df 	bl	1ad3988 <TEditView::$ResetHilitesForNewWord(void)>
         a5208:	e1a00004 	mov	r0, r4
         a520c:	e3a01001 	mov	r1, #1	; 0x1
         a5210:	eb68be0d 	bl	1ad4a4c <TEditView::$ValidateCaret(unsigned char)>
         a5214:	e24dd004 	sub	sp, sp, #4	; 0x4
         a5218:	e3a00002 	mov	r0, #2	; 0x2
         a521c:	eb6c73ca 	bl	1bc214c <$AllocateRefHandle(long)>
         a5220:	e58d0000 	str	r0, [sp]
         a5224:	e59f01d4 	ldr	r0, [pc, #1d4]	; a5400 <TEditView::RealDoCommand(RefVar const &)+0x10a0>
         a5228:	e5900000 	ldr	r0, [r0]
         a522c:	e5901000 	ldr	r1, [r0]
         a5230:	e5950000 	ldr	r0, [r5]
         a5234:	e5900000 	ldr	r0, [r0]
         a5238:	eb6c7c08 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a523c:	eb6c73c2 	bl	1bc214c <$AllocateRefHandle(long)>
         a5240:	e1a08000 	mov	r8, r0
         a5244:	e5900000 	ldr	r0, [r0]
         a5248:	e3300002 	teq	r0, #2	; 0x2
         a524c:	0a00000b 	beq	a5280 <TEditView::RealDoCommand(RefVar const &)+0xf20>
         a5250:	e3100003 	tst	r0, #3	; 0x3
         a5254:	01a00140 	moveq	r0, r0, asr #2
         a5258:	0a000000 	beq	a5260 <TEditView::RealDoCommand(RefVar const &)+0xf00>
         a525c:	eb6c73ae 	bl	1bc211c <$_RINTError(long)>
         a5260:	e3300000 	teq	r0, #0	; 0x0
         a5264:	0a000005 	beq	a5280 <TEditView::RealDoCommand(RefVar const &)+0xf20>
         a5268:	eb67f7e2 	bl	1aa31f8 <TUnitPublic::$Strokes(void)>
         a526c:	e59d1000 	ldr	r1, [sp]
         a5270:	e5810000 	str	r0, [r1]
         a5274:	e1a0100d 	mov	r1, sp
         a5278:	e1a00005 	mov	r0, r5
         a527c:	eb680438 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
         a5280:	e1a00005 	mov	r0, r5
         a5284:	eb680435 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
         a5288:	e41d100c 	ldr	r1, [sp], -#12
         a528c:	e5810000 	str	r0, [r1]
         a5290:	e1a0000d 	mov	r0, sp
         a5294:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a5298:	eb678c65 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a529c:	e1a0000d 	mov	r0, sp
         a52a0:	eb67dede 	bl	1a9ce20 <TListLoop::$Next(void)>
         a52a4:	e1b06000 	movs	r6, r0
         a52a8:	0a000016 	beq	a5308 <TEditView::RealDoCommand(RefVar const &)+0xfa8>
         a52ac:	e5960008 	ldr	r0, [r6, #8]	; fField8
         a52b0:	e3100001 	tst	r0, #1	; 0x1
         a52b4:	0a00000f 	beq	a52f8 <TEditView::RealDoCommand(RefVar const &)+0xf98>
         a52b8:	e1a00006 	mov	r0, r6
         a52bc:	e3a01053 	mov	r1, #83	; 0x53
         a52c0:	e5962000 	ldr	r2, [r6]
         a52c4:	e1a0e00f 	mov	lr, pc
         a52c8:	e282f004 	add	pc, r2, #4	; 0x4
         a52cc:	e3300000 	teq	r0, #0	; 0x0
         a52d0:	0a000008 	beq	a52f8 <TEditView::RealDoCommand(RefVar const &)+0xf98>
         a52d4:	e1a01005 	mov	r1, r5
         a52d8:	e1a00006 	mov	r0, r6
         a52dc:	e3a02000 	mov	r2, #0	; 0x0
         a52e0:	e5963000 	ldr	r3, [r6]
         a52e4:	e1a0e00f 	mov	lr, pc
         a52e8:	e283ff4b 	add	pc, r3, #300	; 0x12c
         a52ec:	e1500009 	cmp	r0, r9
         a52f0:	c1a09000 	movgt	r9, r0
         a52f4:	c1a0a006 	movgt	sl, r6
         a52f8:	e1a0000d 	mov	r0, sp
         a52fc:	eb67dec7 	bl	1a9ce20 <TListLoop::$Next(void)>
         a5300:	e1b06000 	movs	r6, r0
         a5304:	1affffe8 	bne	a52ac <TEditView::RealDoCommand(RefVar const &)+0xf4c>
         a5308:	e5970000 	ldr	r0, [r7]
         a530c:	e5b06068 	ldr	r6, [r0, #104]!
         a5310:	e3360000 	teq	r6, #0	; 0x0
         a5314:	0a00000e 	beq	a5354 <TEditView::RealDoCommand(RefVar const &)+0xff4>
         a5318:	e596001c 	ldr	r0, [r6, #28]	; fField28
         a531c:	e1300004 	teq	r0, r4
         a5320:	1590001c 	ldrne	r0, [r0, #28]	; fField28
         a5324:	11300004 	teqne	r0, r4
         a5328:	1a000009 	bne	a5354 <TEditView::RealDoCommand(RefVar const &)+0xff4>
         a532c:	e1a00006 	mov	r0, r6
         a5330:	e5961000 	ldr	r1, [r6]
         a5334:	e1a0e00f 	mov	lr, pc
         a5338:	e281f094 	add	pc, r1, #148	; 0x94
         a533c:	e3300000 	teq	r0, #0	; 0x0
         a5340:	0a000003 	beq	a5354 <TEditView::RealDoCommand(RefVar const &)+0xff4>
         a5344:	eb03451b 	bl	1767b8 <CorrectorUp(void)>
         a5348:	e3300000 	teq	r0, #0	; 0x0
         a534c:	03a00001 	moveq	r0, #1	; 0x1
         a5350:	0a000000 	beq	a5358 <TEditView::RealDoCommand(RefVar const &)+0xff8>
         a5354:	e3a00000 	mov	r0, #0	; 0x0
         a5358:	e20070ff 	and	r7, r0, #255	; 0xff
         a535c:	e51f05e8 	ldr	r0, [pc, #fffffa18]	; a4d7c <TEditView::RealDoCommand(RefVar const &)+0xa1c>
         a5360:	eb67c5e7 	bl	1a96b04 <$GetPreference(RefVar const &)>
         a5364:	e3300002 	teq	r0, #2	; 0x2
         a5368:	03370000 	teqeq	r7, #0	; 0x0
         a536c:	0a00008f 	beq	a55b0 <TEditView::RealDoCommand(RefVar const &)+0x1250>
         a5370:	e3a07000 	mov	r7, #0	; 0x0
         a5374:	e3360000 	teq	r6, #0	; 0x0
         a5378:	e52d7004 	str	r7, [sp, -#4]!	; fField4
         a537c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a5380:	0a000004 	beq	a5398 <TEditView::RealDoCommand(RefVar const &)+0x1038>
         a5384:	e596001c 	ldr	r0, [r6, #28]	; fField28
         a5388:	e1300004 	teq	r0, r4
         a538c:	1590001c 	ldrne	r0, [r0, #28]	; fField28
         a5390:	11300004 	teqne	r0, r4
         a5394:	0a00001a 	beq	a5404 <TEditView::RealDoCommand(RefVar const &)+0x10a4>
         a5398:	e1360004 	teq	r6, r4
         a539c:	1a00000c 	bne	a53d4 <TEditView::RealDoCommand(RefVar const &)+0x1074>
         a53a0:	e1a01004 	mov	r1, r4
         a53a4:	e1a0000d 	mov	r0, sp
         a53a8:	eb68a90d 	bl	1acf7e4 <TEditView::$GetCaretGlobalTopLeft(void)>
         a53ac:	e1a0100d 	mov	r1, sp
         a53b0:	e28d3004 	add	r3, sp, #4	; 0x4
         a53b4:	e1a00004 	mov	r0, r4
         a53b8:	e3a02000 	mov	r2, #0	; 0x0
         a53bc:	eb67fb98 	bl	1aa4224 <TEditView::$TextContainingPoint(TPoint &, TRect *, long *)>
         a53c0:	e1b07000 	movs	r7, r0
         a53c4:	0a000002 	beq	a53d4 <TEditView::RealDoCommand(RefVar const &)+0x1074>
         a53c8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a53cc:	e3300002 	teq	r0, #2	; 0x2
         a53d0:	0a00000b 	beq	a5404 <TEditView::RealDoCommand(RefVar const &)+0x10a4>
         a53d4:	e28dd004 	add	sp, sp, #4	; 0x4
         a53d8:	e1360004 	teq	r6, r4
         a53dc:	13390000 	teqne	r9, #0	; 0x0
         a53e0:	e1a01005 	mov	r1, r5
         a53e4:	0a00006d 	beq	a55a0 <TEditView::RealDoCommand(RefVar const &)+0x1240>
         a53e8:	e1a0000a 	mov	r0, sl
         a53ec:	e3a02001 	mov	r2, #1	; 0x1
         a53f0:	e59a3000 	ldr	r3, [sl]
         a53f4:	e1a0e00f 	mov	lr, pc
         a53f8:	e283ff4b 	add	pc, r3, #300	; 0x12c
         a53fc:	ea000069 	b	a55a8 <TEditView::RealDoCommand(RefVar const &)+0x1248>
         a5400:	00683cd0 	ldreqd	r3, [r8], -#192
         a5404:	e28dd004 	add	sp, sp, #4	; 0x4
         a5408:	e1360004 	teq	r6, r4
         a540c:	1a000049 	bne	a5538 <TEditView::RealDoCommand(RefVar const &)+0x11d8>
         a5410:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         a5414:	e3a0000d 	mov	r0, #13	; 0xd
         a5418:	eb6bffb6 	bl	1ba52f8 <$U_CONST_CHAR>
         a541c:	e5cd0019 	strb	r0, [sp, #25]
         a5420:	e1a00440 	mov	r0, r0, asr #8
         a5424:	e5cd0018 	strb	r0, [sp, #24]
         a5428:	e3a09000 	mov	r9, #0	; 0x0
         a542c:	e3a04001 	mov	r4, #1	; 0x1
         a5430:	e5cd9001 	strb	r9, [sp, #1]
         a5434:	e5cd9000 	strb	r9, [sp]
         a5438:	e5cd9003 	strb	r9, [sp, #3]
         a543c:	e5cd9002 	strb	r9, [sp, #2]	; fField2
         a5440:	e5cd4005 	strb	r4, [sp, #5]
         a5444:	e5cd9004 	strb	r9, [sp, #4]	; fField4
         a5448:	e5cd4007 	strb	r4, [sp, #7]
         a544c:	e5cd9006 	strb	r9, [sp, #6]	; fField6
         a5450:	e28d1010 	add	r1, sp, #16	; 0x10
         a5454:	e89d5000 	ldmia	sp, {ip, lr}
         a5458:	e8815000 	stmia	r1, {ip, lr}
         a545c:	e2871014 	add	r1, r7, #20	; 0x14
         a5460:	e28d000c 	add	r0, sp, #12	; 0xc
         a5464:	e3a02004 	mov	r2, #4	; 0x4
         a5468:	eb6c3d78 	bl	1bb4a50 <$memcpy>
         a546c:	e24dd008 	sub	sp, sp, #8	; 0x8
         a5470:	e5cd4003 	strb	r4, [sp, #3]
         a5474:	e5cd9002 	strb	r9, [sp, #2]	; fField2
         a5478:	e5cd4001 	strb	r4, [sp, #1]
         a547c:	e5cd9000 	strb	r9, [sp]
         a5480:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a5484:	e58d0000 	str	r0, [sp]
         a5488:	e59d1012 	ldr	r1, [sp, #18]
         a548c:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         a5490:	e0410000 	sub	r0, r1, r0
         a5494:	e5cd0011 	strb	r0, [sp, #17]
         a5498:	e1a00440 	mov	r0, r0, asr #8
         a549c:	e5cd0010 	strb	r0, [sp, #16]	; fField16
         a54a0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a54a4:	e59d1000 	ldr	r1, [sp]
         a54a8:	e0400001 	sub	r0, r0, r1
         a54ac:	e5cd0013 	strb	r0, [sp, #19]
         a54b0:	e1a00440 	mov	r0, r0, asr #8
         a54b4:	e5cd0012 	strb	r0, [sp, #18]
         a54b8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a54bc:	e58d0000 	str	r0, [sp]
         a54c0:	e28d0014 	add	r0, sp, #20	; 0x14
         a54c4:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a54c8:	e1a01841 	mov	r1, r1, asr #16
         a54cc:	e59d2000 	ldr	r2, [sp]
         a54d0:	e1a02842 	mov	r2, r2, asr #16
         a54d4:	eb6ab103 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a54d8:	e28dd004 	add	sp, sp, #4	; 0x4
         a54dc:	e3a03000 	mov	r3, #0	; 0x0
         a54e0:	e3a02000 	mov	r2, #0	; 0x0
         a54e4:	e3a01001 	mov	r1, #1	; 0x1
         a54e8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         a54ec:	e3a00002 	mov	r0, #2	; 0x2
         a54f0:	eb6c7315 	bl	1bc214c <$AllocateRefHandle(long)>
         a54f4:	e58d0014 	str	r0, [sp, #20]
         a54f8:	e28d3014 	add	r3, sp, #20	; 0x14
         a54fc:	e3a02000 	mov	r2, #0	; 0x0
         a5500:	e3a01000 	mov	r1, #0	; 0x0
         a5504:	e28d0018 	add	r0, sp, #24	; 0x18
         a5508:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         a550c:	e28d302c 	add	r3, sp, #44	; 0x2c
         a5510:	e28d1034 	add	r1, sp, #52	; 0x34
         a5514:	e1a00007 	mov	r0, r7
         a5518:	e3a02001 	mov	r2, #1	; 0x1
         a551c:	e597c000 	ldr	ip, [r7]
         a5520:	e1a0e00f 	mov	lr, pc
         a5524:	e28cff52 	add	pc, ip, #328	; 0x148
         a5528:	e28dd01c 	add	sp, sp, #28	; 0x1c
         a552c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a5530:	eb6c7721 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5534:	e28dd01c 	add	sp, sp, #28	; 0x1c
         a5538:	e24dd008 	sub	sp, sp, #8	; 0x8
         a553c:	eb6c72ff 	bl	1bc2140 <$AllocateFrame(void)>
         a5540:	eb6c7301 	bl	1bc214c <$AllocateRefHandle(long)>
         a5544:	e58d0004 	str	r0, [sp, #4]	; fField4
         a5548:	e28d0018 	add	r0, sp, #24	; 0x18
         a554c:	eb685600 	bl	1abad54 <$StrokeBundleToInkWord(RefVar const &)>
         a5550:	eb6c72fd 	bl	1bc214c <$AllocateRefHandle(long)>
         a5554:	e58d0000 	str	r0, [sp]
         a5558:	e1a00006 	mov	r0, r6
         a555c:	eb68bd3c 	bl	1ad4a54 <$ViewExpectsNumbers(TView *)>
         a5560:	e1a01000 	mov	r1, r0
         a5564:	e1a0000d 	mov	r0, sp
         a5568:	eb689c3e 	bl	1acc668 <$AdjustInkWordXHeight(RefVar const &, unsigned char)>
         a556c:	e1a0200d 	mov	r2, sp
         a5570:	e59f1024 	ldr	r1, [pc, #24]	; a559c <TEditView::RealDoCommand(RefVar const &)+0x123c>
         a5574:	e28d0004 	add	r0, sp, #4	; 0x4
         a5578:	eb6c837a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a557c:	e28d0004 	add	r0, sp, #4	; 0x4
         a5580:	eb68b0cd 	bl	1ad18bc <$InsertItemsAtCaret(RefVar const &)>
         a5584:	e59d0000 	ldr	r0, [sp]
         a5588:	eb6c770b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a558c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a5590:	eb6c7709 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5594:	e28dd008 	add	sp, sp, #8	; 0x8
         a5598:	ea000002 	b	a55a8 <TEditView::RealDoCommand(RefVar const &)+0x1248>
         a559c:	00683288 	rsbeq	r3, r8, r8, lsl #5
         a55a0:	e1a00004 	mov	r0, r4
         a55a4:	eb683911 	bl	1ab39f0 <TEditView::$HandleInkWord(RefVar const &)>
         a55a8:	e28dd004 	add	sp, sp, #4	; 0x4
         a55ac:	ea00000a 	b	a55dc <TEditView::RealDoCommand(RefVar const &)+0x127c>
         a55b0:	e3390000 	teq	r9, #0	; 0x0
         a55b4:	e1a01005 	mov	r1, r5
         a55b8:	0a000005 	beq	a55d4 <TEditView::RealDoCommand(RefVar const &)+0x1274>
         a55bc:	e1a0000a 	mov	r0, sl
         a55c0:	e3a02001 	mov	r2, #1	; 0x1
         a55c4:	e59a3000 	ldr	r3, [sl]
         a55c8:	e1a0e00f 	mov	lr, pc
         a55cc:	e283ff4b 	add	pc, r3, #300	; 0x12c
         a55d0:	ea000001 	b	a55dc <TEditView::RealDoCommand(RefVar const &)+0x127c>
         a55d4:	e1a00004 	mov	r0, r4
         a55d8:	eb683904 	bl	1ab39f0 <TEditView::$HandleInkWord(RefVar const &)>
         a55dc:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a55e0:	eb68b8eb 	bl	1ad3994 <$RestoreRemoteForCorrector(long)>
         a55e4:	e3a01001 	mov	r1, #1	; 0x1
         a55e8:	e1a06001 	mov	r6, r1
         a55ec:	e1a00005 	mov	r0, r5
         a55f0:	eb680357 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
         a55f4:	e28dd00c 	add	sp, sp, #12	; 0xc
         a55f8:	e1a00008 	mov	r0, r8
         a55fc:	eb6c76ee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5600:	e59d0000 	ldr	r0, [sp]
         a5604:	eb6c76ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5608:	e28dd004 	add	sp, sp, #4	; 0x4
         a560c:	e28dd004 	add	sp, sp, #4	; 0x4
         a5610:	ea0001a1 	b	a5c9c <TEditView::RealDoCommand(RefVar const &)+0x193c>
         a5614:	e1a00004 	mov	r0, r4
         a5618:	e5941000 	ldr	r1, [r4]
         a561c:	e1a0e00f 	mov	lr, pc
         a5620:	e281f020 	add	pc, r1, #32	; 0x20
         a5624:	e3100a02 	tst	r0, #8192	; 0x2000
         a5628:	0a000005 	beq	a5644 <TEditView::RealDoCommand(RefVar const &)+0x12e4>
         a562c:	e3a08001 	mov	r8, #1	; 0x1
         a5630:	e1a01005 	mov	r1, r5
         a5634:	e1a00004 	mov	r0, r4
         a5638:	eb67e64b 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a563c:	e3300000 	teq	r0, #0	; 0x0
         a5640:	1a00009d 	bne	a58bc <TEditView::RealDoCommand(RefVar const &)+0x155c>
         a5644:	eb688fa5 	bl	1ac94e0 <$SetRemoteForCorrector(void)>
         a5648:	e1a07000 	mov	r7, r0
         a564c:	eb034459 	bl	1767b8 <CorrectorUp(void)>
         a5650:	e3300000 	teq	r0, #0	; 0x0
         a5654:	e1a00004 	mov	r0, r4
         a5658:	0a000003 	beq	a566c <TEditView::RealDoCommand(RefVar const &)+0x130c>
         a565c:	e5901000 	ldr	r1, [r0]
         a5660:	e1a0e00f 	mov	lr, pc
         a5664:	e281f0ac 	add	pc, r1, #172	; 0xac
         a5668:	ea000000 	b	a5670 <TEditView::RealDoCommand(RefVar const &)+0x1310>
         a566c:	eb68b8c5 	bl	1ad3988 <TEditView::$ResetHilitesForNewWord(void)>
         a5670:	e1a00005 	mov	r0, r5
         a5674:	eb680337 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a5678:	e1a06000 	mov	r6, r0
         a567c:	e5901000 	ldr	r1, [r0]
         a5680:	e1a00004 	mov	r0, r4
         a5684:	eb67ea65 	bl	1aa0020 <$RemoveInk(TEditView *, TUnit *)>
         a5688:	e1a01006 	mov	r1, r6
         a568c:	e1a00004 	mov	r0, r4
         a5690:	eb67cd62 	bl	1a98c20 <TEditView::$HandleWordUnit(TUnitPublic *)>
         a5694:	e1a06000 	mov	r6, r0
         a5698:	e1a00007 	mov	r0, r7
         a569c:	eb68b8bc 	bl	1ad3994 <$RestoreRemoteForCorrector(long)>
         a56a0:	e1a01006 	mov	r1, r6
         a56a4:	ea000046 	b	a57c4 <TEditView::RealDoCommand(RefVar const &)+0x1464>
         a56a8:	e1a00005 	mov	r0, r5
         a56ac:	eb680329 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a56b0:	e1a06000 	mov	r6, r0
         a56b4:	e5901000 	ldr	r1, [r0]
         a56b8:	e1a00004 	mov	r0, r4
         a56bc:	eb67ea57 	bl	1aa0020 <$RemoveInk(TEditView *, TUnit *)>
         a56c0:	e1a01006 	mov	r1, r6
         a56c4:	e1a00004 	mov	r0, r4
         a56c8:	eb67cd54 	bl	1a98c20 <TEditView::$HandleWordUnit(TUnitPublic *)>
         a56cc:	ea00003a 	b	a57bc <TEditView::RealDoCommand(RefVar const &)+0x145c>
         a56d0:	e1a00005 	mov	r0, r5
         a56d4:	eb68031f 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a56d8:	e1a06000 	mov	r6, r0
         a56dc:	e5901000 	ldr	r1, [r0]
         a56e0:	e1a00004 	mov	r0, r4
         a56e4:	eb67ea4d 	bl	1aa0020 <$RemoveInk(TEditView *, TUnit *)>
         a56e8:	e1a00004 	mov	r0, r4
         a56ec:	e5941000 	ldr	r1, [r4]
         a56f0:	e1a0e00f 	mov	lr, pc
         a56f4:	e281f0ac 	add	pc, r1, #172	; 0xac
         a56f8:	e1a00006 	mov	r0, r6
         a56fc:	eb67a400 	bl	1a8e704 <TUnitPublic::$ContextID(void)>
         a5700:	e1b07000 	movs	r7, r0
         a5704:	0a00001c 	beq	a577c <TEditView::RealDoCommand(RefVar const &)+0x141c>
         a5708:	e24dd004 	sub	sp, sp, #4	; 0x4
         a570c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a5710:	e1a02007 	mov	r2, r7
         a5714:	e1a01004 	mov	r1, r4
         a5718:	e3a0a03f 	mov	sl, #63	; 0x3f
         a571c:	e5909000 	ldr	r9, [r0]
         a5720:	e1a0000a 	mov	r0, sl
         a5724:	eb680305 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a5728:	eb6c7287 	bl	1bc214c <$AllocateRefHandle(long)>
         a572c:	e58d0000 	str	r0, [sp]
         a5730:	e1a0100d 	mov	r1, sp
         a5734:	e1a00009 	mov	r0, r9
         a5738:	eb67ac3e 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a573c:	e59d0000 	ldr	r0, [sp]
         a5740:	eb6c769d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5744:	e1a02847 	mov	r2, r7, asr #16
         a5748:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a574c:	e1a01004 	mov	r1, r4
         a5750:	e5907000 	ldr	r7, [r0]
         a5754:	e1a0000a 	mov	r0, sl
         a5758:	eb6802f8 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a575c:	eb6c727a 	bl	1bc214c <$AllocateRefHandle(long)>
         a5760:	e58d0000 	str	r0, [sp]
         a5764:	e1a0100d 	mov	r1, sp
         a5768:	e1a00007 	mov	r0, r7
         a576c:	eb67ac31 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a5770:	e59d0000 	ldr	r0, [sp]
         a5774:	eb6c7690 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5778:	e28dd004 	add	sp, sp, #4	; 0x4
         a577c:	e1a00006 	mov	r0, r6
         a5780:	eb679bb3 	bl	1a8c654 <TUnitPublic::$CleanShape(void)>
         a5784:	e1b07000 	movs	r7, r0
         a5788:	1a000005 	bne	a57a4 <TEditView::RealDoCommand(RefVar const &)+0x1444>
         a578c:	e59f003c 	ldr	r0, [pc, #3c]	; a57d0 <TEditView::RealDoCommand(RefVar const &)+0x1470>
         a5790:	e5900000 	ldr	r0, [r0]
         a5794:	e3a02000 	mov	r2, #0	; 0x0
         a5798:	e3a010e9 	mov	r1, #233	; 0xe9
         a579c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         a57a0:	eb6cf67d 	bl	1be319c <$Throw>
         a57a4:	e1a00006 	mov	r0, r6
         a57a8:	eb67f676 	bl	1aa3188 <TUnitPublic::$ShapeType(void)>
         a57ac:	e1a02000 	mov	r2, r0
         a57b0:	e1a01007 	mov	r1, r7
         a57b4:	e1a00004 	mov	r0, r4
         a57b8:	eb67c90d 	bl	1a97bf4 <TEditView::$HandleShape(Polygon **, long)>
         a57bc:	e1a01000 	mov	r1, r0
         a57c0:	e1a06000 	mov	r6, r0
         a57c4:	e1a00005 	mov	r0, r5
         a57c8:	eb6802e1 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
         a57cc:	ea00012a 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a57d0:	00371318 	eoreqs	r1, r7, r8, lsl r3
         a57d4:	e1a00004 	mov	r0, r4
         a57d8:	e5941000 	ldr	r1, [r4]
         a57dc:	e1a0e00f 	mov	lr, pc
         a57e0:	e281f020 	add	pc, r1, #32	; 0x20
         a57e4:	e3100a02 	tst	r0, #8192	; 0x2000
         a57e8:	0a000005 	beq	a5804 <TEditView::RealDoCommand(RefVar const &)+0x14a4>
         a57ec:	e3a08001 	mov	r8, #1	; 0x1
         a57f0:	e1a01005 	mov	r1, r5
         a57f4:	e1a00004 	mov	r0, r4
         a57f8:	eb67e5db 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a57fc:	e3300000 	teq	r0, #0	; 0x0
         a5800:	1a00002d 	bne	a58bc <TEditView::RealDoCommand(RefVar const &)+0x155c>
         a5804:	e1a07004 	mov	r7, r4
         a5808:	e1a00005 	mov	r0, r5
         a580c:	eb6802d1 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a5810:	e1a01000 	mov	r1, r0
         a5814:	e1a00007 	mov	r0, r7
         a5818:	e5972000 	ldr	r2, [r7]
         a581c:	e1a0e00f 	mov	lr, pc
         a5820:	e282ff4a 	add	pc, r2, #296	; 0x128
         a5824:	e3300000 	teq	r0, #0	; 0x0
         a5828:	0a000115 	beq	a5c84 <TEditView::RealDoCommand(RefVar const &)+0x1924>
         a582c:	e1a00005 	mov	r0, r5
         a5830:	e3a01001 	mov	r1, #1	; 0x1
         a5834:	eb6802c6 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
         a5838:	ea00001f 	b	a58bc <TEditView::RealDoCommand(RefVar const &)+0x155c>
         a583c:	e1a00004 	mov	r0, r4
         a5840:	e5941000 	ldr	r1, [r4]
         a5844:	e1a0e00f 	mov	lr, pc
         a5848:	e281f020 	add	pc, r1, #32	; 0x20
         a584c:	e3100a02 	tst	r0, #8192	; 0x2000
         a5850:	0a000005 	beq	a586c <TEditView::RealDoCommand(RefVar const &)+0x150c>
         a5854:	e3a08001 	mov	r8, #1	; 0x1
         a5858:	e1a01005 	mov	r1, r5
         a585c:	e1a00004 	mov	r0, r4
         a5860:	eb67e5c1 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a5864:	e3300000 	teq	r0, #0	; 0x0
         a5868:	1a000013 	bne	a58bc <TEditView::RealDoCommand(RefVar const &)+0x155c>
         a586c:	e1a00005 	mov	r0, r5
         a5870:	eb6802b8 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a5874:	e1a01000 	mov	r1, r0
         a5878:	e1a00004 	mov	r0, r4
         a587c:	eb67c8c6 	bl	1a97b9c <TEditView::$HandleCaret(TUnitPublic *)>
         a5880:	e3300000 	teq	r0, #0	; 0x0
         a5884:	1affffe8 	bne	a582c <TEditView::RealDoCommand(RefVar const &)+0x14cc>
         a5888:	ea0000fd 	b	a5c84 <TEditView::RealDoCommand(RefVar const &)+0x1924>
         a588c:	e1a00004 	mov	r0, r4
         a5890:	e5941000 	ldr	r1, [r4]
         a5894:	e1a0e00f 	mov	lr, pc
         a5898:	e281f020 	add	pc, r1, #32	; 0x20
         a589c:	e3100a02 	tst	r0, #8192	; 0x2000
         a58a0:	0a000007 	beq	a58c4 <TEditView::RealDoCommand(RefVar const &)+0x1564>
         a58a4:	e3a08001 	mov	r8, #1	; 0x1
         a58a8:	e1a01005 	mov	r1, r5
         a58ac:	e1a00004 	mov	r0, r4
         a58b0:	eb67e5ad 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a58b4:	e3300000 	teq	r0, #0	; 0x0
         a58b8:	0a000001 	beq	a58c4 <TEditView::RealDoCommand(RefVar const &)+0x1564>
         a58bc:	e3a06001 	mov	r6, #1	; 0x1
         a58c0:	ea0000f5 	b	a5c9c <TEditView::RealDoCommand(RefVar const &)+0x193c>
         a58c4:	e1a00005 	mov	r0, r5
         a58c8:	eb6802a2 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a58cc:	e1a01000 	mov	r1, r0
         a58d0:	e1a00004 	mov	r0, r4
         a58d4:	eb67c8bf 	bl	1a97bd8 <TEditView::$HandleLineGesture(TUnitPublic *)>
         a58d8:	e3300000 	teq	r0, #0	; 0x0
         a58dc:	1affffd2 	bne	a582c <TEditView::RealDoCommand(RefVar const &)+0x14cc>
         a58e0:	ea0000e7 	b	a5c84 <TEditView::RealDoCommand(RefVar const &)+0x1924>
         a58e4:	e1a00005 	mov	r0, r5
         a58e8:	eb68029a 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a58ec:	e1a0a000 	mov	sl, r0
         a58f0:	eb67c495 	bl	1a96b4c <TUnitPublic::$GetType(void)>
         a58f4:	eb682ffe 	bl	1ab18f4 <$GetCommand(unsigned long)>
         a58f8:	e1a09000 	mov	r9, r0
         a58fc:	e3300011 	teq	r0, #17	; 0x11
         a5900:	1339000c 	teqne	r9, #12	; 0xc
         a5904:	13390016 	teqne	r9, #22	; 0x16
         a5908:	1a0000db 	bne	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a590c:	e24dd008 	sub	sp, sp, #8	; 0x8
         a5910:	e3a07000 	mov	r7, #0	; 0x0
         a5914:	e1a0100d 	mov	r1, sp
         a5918:	e1a0000a 	mov	r0, sl
         a591c:	eb679313 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
         a5920:	e24dd004 	sub	sp, sp, #4	; 0x4
         a5924:	e1a00005 	mov	r0, r5
         a5928:	e3a01000 	mov	r1, #0	; 0x0
         a592c:	eb68028e 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
         a5930:	e58d0000 	str	r0, [sp]
         a5934:	e3300000 	teq	r0, #0	; 0x0
         a5938:	1a000012 	bne	a5988 <TEditView::RealDoCommand(RefVar const &)+0x1628>
         a593c:	e24dd008 	sub	sp, sp, #8	; 0x8
         a5940:	e1a0100d 	mov	r1, sp
         a5944:	e59f0144 	ldr	r0, [pc, #144]	; a5a90 <TEditView::RealDoCommand(RefVar const &)+0x1730>
         a5948:	eb6af62b 	bl	1b631fc <$UnfixRect>
         a594c:	e59f0140 	ldr	r0, [pc, #140]	; a5a94 <TEditView::RealDoCommand(RefVar const &)+0x1734>
         a5950:	e5900000 	ldr	r0, [r0]
         a5954:	e2601000 	rsb	r1, r0, #0	; 0x0
         a5958:	e1a02001 	mov	r2, r1
         a595c:	e28d000c 	add	r0, sp, #12	; 0xc
         a5960:	eb6aabb6 	bl	1b50840 <$InsetRect__FP4RectlT2>
         a5964:	e28d200c 	add	r2, sp, #12	; 0xc
         a5968:	e28d100c 	add	r1, sp, #12	; 0xc
         a596c:	e1a0000d 	mov	r0, sp
         a5970:	eb6ab815 	bl	1b539cc <$SectRect__FP4RectN21>
         a5974:	e2840010 	add	r0, r4, #16	; 0x10
         a5978:	e28d200c 	add	r2, sp, #12	; 0xc
         a597c:	e28d100c 	add	r1, sp, #12	; 0xc
         a5980:	eb6ab811 	bl	1b539cc <$SectRect__FP4RectN21>
         a5984:	e28dd008 	add	sp, sp, #8	; 0x8
         a5988:	e24dd010 	sub	sp, sp, #16	; 0x10
         a598c:	e3a00002 	mov	r0, #2	; 0x2
         a5990:	eb6c71ed 	bl	1bc214c <$AllocateRefHandle(long)>
         a5994:	e58d000c 	str	r0, [sp, #12]
         a5998:	e1a0000d 	mov	r0, sp
         a599c:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a59a0:	eb678aa3 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a59a4:	e1a0000d 	mov	r0, sp
         a59a8:	eb67dd1c 	bl	1a9ce20 <TListLoop::$Next(void)>
         a59ac:	e1b06000 	movs	r6, r0
         a59b0:	0a000044 	beq	a5ac8 <TEditView::RealDoCommand(RefVar const &)+0x1768>
         a59b4:	e59f10dc 	ldr	r1, [pc, #dc]	; a5a98 <TEditView::RealDoCommand(RefVar const &)+0x1738>
         a59b8:	e58d101c 	str	r1, [sp, #28]	; fField28
         a59bc:	e59d2024 	ldr	r2, [sp, #36]	; fField36
         a59c0:	e5b20028 	ldr	r0, [r2, #40]!
         a59c4:	e1300006 	teq	r0, r6
         a59c8:	0a00003a 	beq	a5ab8 <TEditView::RealDoCommand(RefVar const &)+0x1758>
         a59cc:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a59d0:	e3300000 	teq	r0, #0	; 0x0
         a59d4:	1a000004 	bne	a59ec <TEditView::RealDoCommand(RefVar const &)+0x168c>
         a59d8:	e2861010 	add	r1, r6, #16	; 0x10
         a59dc:	e28d0014 	add	r0, sp, #20	; 0x14
         a59e0:	eb67dd1c 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         a59e4:	e3300000 	teq	r0, #0	; 0x0
         a59e8:	0a000032 	beq	a5ab8 <TEditView::RealDoCommand(RefVar const &)+0x1758>
         a59ec:	e1a00006 	mov	r0, r6
         a59f0:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         a59f4:	eb6c92d3 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         a59f8:	e59d100c 	ldr	r1, [sp, #12]
         a59fc:	e5810000 	str	r0, [r1]
         a5a00:	e3300002 	teq	r0, #2	; 0x2
         a5a04:	0a00002b 	beq	a5ab8 <TEditView::RealDoCommand(RefVar const &)+0x1758>
         a5a08:	e3390011 	teq	r9, #17	; 0x11
         a5a0c:	1339000c 	teqne	r9, #12	; 0xc
         a5a10:	1a000028 	bne	a5ab8 <TEditView::RealDoCommand(RefVar const &)+0x1758>
         a5a14:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a5a18:	e28d1018 	add	r1, sp, #24	; 0x18
         a5a1c:	e1a0000d 	mov	r0, sp
         a5a20:	eb6c6dac 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         a5a24:	e1a0100d 	mov	r1, sp
         a5a28:	e28d0008 	add	r0, sp, #8	; 0x8
         a5a2c:	eb6c6da8 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
         a5a30:	e1a0000d 	mov	r0, sp
         a5a34:	e3a01000 	mov	r1, #0	; 0x0
         a5a38:	eb6c71b0 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         a5a3c:	e28d0008 	add	r0, sp, #8	; 0x8
         a5a40:	eb6c71b3 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         a5a44:	e3370000 	teq	r7, #0	; 0x0
         a5a48:	e58d0004 	str	r0, [sp, #4]	; fField4
         a5a4c:	1a000001 	bne	a5a58 <TEditView::RealDoCommand(RefVar const &)+0x16f8>
         a5a50:	eb67d8e3 	bl	1a9bde4 <$MakeUnitList(void)>
         a5a54:	e1a07000 	mov	r7, r0
         a5a58:	e3370000 	teq	r7, #0	; 0x0
         a5a5c:	0a000006 	beq	a5a7c <TEditView::RealDoCommand(RefVar const &)+0x171c>
         a5a60:	e2862010 	add	r2, r6, #16	; 0x10
         a5a64:	e5b63004 	ldr	r3, [r6, #4]!	; fField4
         a5a68:	e1a0000a 	mov	r0, sl
         a5a6c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a5a70:	eb67d8cb 	bl	1a9bda4 <$MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)>
         a5a74:	e3300000 	teq	r0, #0	; 0x0
         a5a78:	1a000007 	bne	a5a9c <TEditView::RealDoCommand(RefVar const &)+0x173c>
         a5a7c:	e28d0008 	add	r0, sp, #8	; 0x8
         a5a80:	e3a01000 	mov	r1, #0	; 0x0
         a5a84:	eb6c719d 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         a5a88:	e28dd00c 	add	sp, sp, #12	; 0xc
         a5a8c:	ea00000d 	b	a5ac8 <TEditView::RealDoCommand(RefVar const &)+0x1768>
         a5a90:	0c104c94 	ldceq	12, cr4, [r0], -#592
         a5a94:	0c104ca8 	ldceq	12, cr4, [r0], -#672
         a5a98:	00683f18 	rsbeq	r3, r8, r8, lsl pc
         a5a9c:	e1a01000 	mov	r1, r0
         a5aa0:	e1a00007 	mov	r0, r7
         a5aa4:	eb6792a2 	bl	1a8a534 <$Append(TUnitList *, TUnit *)>
         a5aa8:	e28d0008 	add	r0, sp, #8	; 0x8
         a5aac:	e3a01000 	mov	r1, #0	; 0x0
         a5ab0:	eb6c7192 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         a5ab4:	e28dd00c 	add	sp, sp, #12	; 0xc
         a5ab8:	e1a0000d 	mov	r0, sp
         a5abc:	eb67dcd7 	bl	1a9ce20 <TListLoop::$Next(void)>
         a5ac0:	e1b06000 	movs	r6, r0
         a5ac4:	1affffbc 	bne	a59bc <TEditView::RealDoCommand(RefVar const &)+0x165c>
         a5ac8:	e3a06001 	mov	r6, #1	; 0x1
         a5acc:	e1a01007 	mov	r1, r7
         a5ad0:	e1a00005 	mov	r0, r5
         a5ad4:	eb68021e 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
         a5ad8:	e59d000c 	ldr	r0, [sp, #12]
         a5adc:	eb6c75b6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5ae0:	e28dd014 	add	sp, sp, #20	; 0x14
         a5ae4:	ea000051 	b	a5c30 <TEditView::RealDoCommand(RefVar const &)+0x18d0>
         a5ae8:	e1a00005 	mov	r0, r5
         a5aec:	eb680220 	bl	1aa6374 <$IsUndoCommand(RefVar const &)>
         a5af0:	e3300000 	teq	r0, #0	; 0x0
         a5af4:	0a000003 	beq	a5b08 <TEditView::RealDoCommand(RefVar const &)+0x17a8>
         a5af8:	e1a00004 	mov	r0, r4
         a5afc:	e5941000 	ldr	r1, [r4]
         a5b00:	e1a0e00f 	mov	lr, pc
         a5b04:	e281f0ac 	add	pc, r1, #172	; 0xac
         a5b08:	e1a01005 	mov	r1, r5
         a5b0c:	e1a00004 	mov	r0, r4
         a5b10:	eb67e515 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a5b14:	e1a06000 	mov	r6, r0
         a5b18:	e1a00005 	mov	r0, r5
         a5b1c:	eb68020d 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a5b20:	e1b09000 	movs	r9, r0
         a5b24:	0a000054 	beq	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a5b28:	e1a00009 	mov	r0, r9
         a5b2c:	eb67f9bf 	bl	1aa4230 <$TimeStampTextChange(TView *)>
         a5b30:	e24dd008 	sub	sp, sp, #8	; 0x8
         a5b34:	e1a00009 	mov	r0, r9
         a5b38:	eb6c8e6a 	bl	1bc94e8 <TView::$DataFrame(void)>
         a5b3c:	eb6c7182 	bl	1bc214c <$AllocateRefHandle(long)>
         a5b40:	e58d0004 	str	r0, [sp, #4]	; fField4
         a5b44:	e59a0000 	ldr	r0, [sl]
         a5b48:	e5901000 	ldr	r1, [r0]
         a5b4c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a5b50:	e5900000 	ldr	r0, [r0]
         a5b54:	eb6c79c1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a5b58:	eb6c717b 	bl	1bc214c <$AllocateRefHandle(long)>
         a5b5c:	e58d0000 	str	r0, [sp]
         a5b60:	e5900000 	ldr	r0, [r0]
         a5b64:	e3300002 	teq	r0, #2	; 0x2
         a5b68:	0a00000d 	beq	a5ba4 <TEditView::RealDoCommand(RefVar const &)+0x1844>
         a5b6c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a5b70:	eb681699 	bl	1aab5dc <$CorrectInfo(void)>
         a5b74:	eb6c7174 	bl	1bc214c <$AllocateRefHandle(long)>
         a5b78:	e58d0000 	str	r0, [sp]
         a5b7c:	e1a0000d 	mov	r0, sp
         a5b80:	e1a02009 	mov	r2, r9
         a5b84:	e28d1004 	add	r1, sp, #4	; 0x4
         a5b88:	eb683fc0 	bl	1ab5a90 <$InsertRange__FRC6RefVarT1P5TView>
         a5b8c:	e59d0000 	ldr	r0, [sp]
         a5b90:	eb6c7589 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5b94:	e59f109c 	ldr	r1, [pc, #9c]	; a5c38 <TEditView::RealDoCommand(RefVar const &)+0x18d8>
         a5b98:	e28d0008 	add	r0, sp, #8	; 0x8
         a5b9c:	eb6c81e0 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
         a5ba0:	e28dd004 	add	sp, sp, #4	; 0x4
         a5ba4:	e59f1090 	ldr	r1, [pc, #90]	; a5c3c <TEditView::RealDoCommand(RefVar const &)+0x18dc>
         a5ba8:	e5910000 	ldr	r0, [r1]
         a5bac:	e5901000 	ldr	r1, [r0]
         a5bb0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a5bb4:	e5900000 	ldr	r0, [r0]
         a5bb8:	eb6c79a8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a5bbc:	eb6c7162 	bl	1bc214c <$AllocateRefHandle(long)>
         a5bc0:	e1a0a000 	mov	sl, r0
         a5bc4:	e5900000 	ldr	r0, [r0]
         a5bc8:	e3300002 	teq	r0, #2	; 0x2
         a5bcc:	0a00000e 	beq	a5c0c <TEditView::RealDoCommand(RefVar const &)+0x18ac>
         a5bd0:	e3a03000 	mov	r3, #0	; 0x0
         a5bd4:	e92d0008 	stmdb	sp!, {r3}
         a5bd8:	e3100003 	tst	r0, #3	; 0x3
         a5bdc:	01a00140 	moveq	r0, r0, asr #2
         a5be0:	0a000000 	beq	a5be8 <TEditView::RealDoCommand(RefVar const &)+0x1888>
         a5be4:	eb6c714c 	bl	1bc211c <$_RINTError(long)>
         a5be8:	e1a02000 	mov	r2, r0
         a5bec:	e1a01009 	mov	r1, r9
         a5bf0:	e3a03000 	mov	r3, #0	; 0x0
         a5bf4:	e5970000 	ldr	r0, [r7]
         a5bf8:	eb68b779 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a5bfc:	e28dd004 	add	sp, sp, #4	; 0x4
         a5c00:	e59f1034 	ldr	r1, [pc, #34]	; a5c3c <TEditView::RealDoCommand(RefVar const &)+0x18dc>
         a5c04:	e28d0004 	add	r0, sp, #4	; 0x4
         a5c08:	eb6c81c5 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
         a5c0c:	e59f102c 	ldr	r1, [pc, #2c]	; a5c40 <TEditView::RealDoCommand(RefVar const &)+0x18e0>	; fField2
         a5c10:	e28d0004 	add	r0, sp, #4	; 0x4
         a5c14:	eb6c81c2 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
         a5c18:	e1a0000a 	mov	r0, sl
         a5c1c:	eb6c7566 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5c20:	e59d0000 	ldr	r0, [sp]
         a5c24:	eb6c7564 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5c28:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a5c2c:	eb6c7562 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5c30:	e28dd008 	add	sp, sp, #8	; 0x8
         a5c34:	ea000010 	b	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a5c38:	00682660 	rsbeq	r2, r8, r0, ror #12
         a5c3c:	00683290 	streqb	r3, [r8], -#32	; fField32
         a5c40:	00683b30 	rsbeq	r3, r8, r0, lsr fp
         a5c44:	e1a00005 	mov	r0, r5
         a5c48:	eb6801c2 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a5c4c:	e3300302 	teq	r0, #134217728	; 0x8000000
         a5c50:	0a000009 	beq	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a5c54:	e1a01000 	mov	r1, r0
         a5c58:	e1a00004 	mov	r0, r4
         a5c5c:	eb6c9230 	bl	1bca524 <TView::$FindID(long)>
         a5c60:	e3300000 	teq	r0, #0	; 0x0
         a5c64:	0a000004 	beq	a5c7c <TEditView::RealDoCommand(RefVar const &)+0x191c>
         a5c68:	e1a01005 	mov	r1, r5
         a5c6c:	e5902000 	ldr	r2, [r0]
         a5c70:	e1a0e00f 	mov	lr, pc
         a5c74:	e282f01c 	add	pc, r2, #28	; 0x1c
         a5c78:	e1a06000 	mov	r6, r0
         a5c7c:	e3360000 	teq	r6, #0	; 0x0
         a5c80:	1a000005 	bne	a5c9c <TEditView::RealDoCommand(RefVar const &)+0x193c>
         a5c84:	e3380000 	teq	r8, #0	; 0x0
         a5c88:	1a000003 	bne	a5c9c <TEditView::RealDoCommand(RefVar const &)+0x193c>
         a5c8c:	e1a01005 	mov	r1, r5
         a5c90:	e1a00004 	mov	r0, r4
         a5c94:	eb67e4b4 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         a5c98:	e1a06000 	mov	r6, r0
         a5c9c:	e1a00006 	mov	r0, r6
         a5ca0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a5ca4:	e24dd004 	sub	sp, sp, #4	; 0x4
         a5ca8:	e1a00005 	mov	r0, r5
         a5cac:	eb6801a9 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a5cb0:	e1a00100 	mov	r0, r0, lsl #2
         a5cb4:	eb6c7124 	bl	1bc214c <$AllocateRefHandle(long)>
         a5cb8:	e58d0000 	str	r0, [sp]
         a5cbc:	e1a0100d 	mov	r1, sp
         a5cc0:	e1a00004 	mov	r0, r4
         a5cc4:	eb67e06e 	bl	1a9de84 <TEditView::$PlaybackInk(RefVar const &)>
         a5cc8:	e59d0000 	ldr	r0, [sp]
         a5ccc:	eb6c753a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5cd0:	eafffcaa 	b	a4f80 <TEditView::RealDoCommand(RefVar const &)+0xc20>
    */
}

/**
 * Symbol: TEditView::GetValue(RefVar const &, RefVar const &)
 * Address: 000a5cd4
 */
TEditView::GetValue(RefVar const &, RefVar const &) {
    /*
         a5cd4:	e1a0c00d 	mov	ip, sp
         a5cd8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         a5cdc:	e24cb004 	sub	fp, ip, #4	; 0x4
         a5ce0:	e1a06000 	mov	r6, r0
         a5ce4:	e1a05001 	mov	r5, r1
         a5ce8:	e1a04002 	mov	r4, r2
         a5cec:	e24dd004 	sub	sp, sp, #4	; 0x4
         a5cf0:	e3a08002 	mov	r8, #2	; 0x2
         a5cf4:	e1a00008 	mov	r0, r8
         a5cf8:	eb6c7113 	bl	1bc214c <$AllocateRefHandle(long)>
         a5cfc:	e58d0000 	str	r0, [sp]
         a5d00:	e3a00002 	mov	r0, #2	; 0x2
         a5d04:	eb6c7110 	bl	1bc214c <$AllocateRefHandle(long)>
         a5d08:	e1a07000 	mov	r7, r0
         a5d0c:	e59f00f8 	ldr	r0, [pc, #f8]	; a5e0c <TEditView::GetValue(RefVar const &, RefVar const &)+0x138>
         a5d10:	e5900000 	ldr	r0, [r0]
         a5d14:	e5901000 	ldr	r1, [r0]
         a5d18:	e5950000 	ldr	r0, [r5]
         a5d1c:	e5900000 	ldr	r0, [r0]
         a5d20:	eb6c7942 	bl	1bc4230 <$EQRef__FlT1>
         a5d24:	e3a09000 	mov	r9, #0	; 0x0
         a5d28:	e3300000 	teq	r0, #0	; 0x0
         a5d2c:	0a000038 	beq	a5e14 <TEditView::GetValue(RefVar const &, RefVar const &)+0x140>
         a5d30:	e59f00d8 	ldr	r0, [pc, #d8]	; a5e10 <TEditView::GetValue(RefVar const &, RefVar const &)+0x13c>
         a5d34:	e5900000 	ldr	r0, [r0]
         a5d38:	e5901000 	ldr	r1, [r0]
         a5d3c:	e5940000 	ldr	r0, [r4]
         a5d40:	e5900000 	ldr	r0, [r0]
         a5d44:	eb6c7939 	bl	1bc4230 <$EQRef__FlT1>
         a5d48:	e3300000 	teq	r0, #0	; 0x0
         a5d4c:	0a000030 	beq	a5e14 <TEditView::GetValue(RefVar const &, RefVar const &)+0x140>
         a5d50:	e1a00006 	mov	r0, r6
         a5d54:	eb000758 	bl	a7abc <TEditView::CountHilites(void)>
         a5d58:	e3300000 	teq	r0, #0	; 0x0
         a5d5c:	0a000032 	beq	a5e2c <TEditView::GetValue(RefVar const &, RefVar const &)+0x158>
         a5d60:	e3a00000 	mov	r0, #0	; 0x0
         a5d64:	eb67d80c 	bl	1a9bd9c <$MakeArray(long)>
         a5d68:	e41d100c 	ldr	r1, [sp], -#12
         a5d6c:	e5810000 	str	r0, [r1]
         a5d70:	e1a0000d 	mov	r0, sp
         a5d74:	e5b61020 	ldr	r1, [r6, #32]!	; fField32
         a5d78:	eb6789ad 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a5d7c:	e1a0000d 	mov	r0, sp
         a5d80:	eb67dc26 	bl	1a9ce20 <TListLoop::$Next(void)>
         a5d84:	e1b03000 	movs	r3, r0
         a5d88:	0a000017 	beq	a5dec <TEditView::GetValue(RefVar const &, RefVar const &)+0x118>
         a5d8c:	e1a02004 	mov	r2, r4
         a5d90:	e1a01005 	mov	r1, r5
         a5d94:	e1a00003 	mov	r0, r3
         a5d98:	e5933000 	ldr	r3, [r3]
         a5d9c:	e1a0e00f 	mov	lr, pc
         a5da0:	e283f044 	add	pc, r3, #68	; 0x44
         a5da4:	e5870000 	str	r0, [r7]
         a5da8:	e24dd004 	sub	sp, sp, #4	; 0x4
         a5dac:	e3300002 	teq	r0, #2	; 0x2
         a5db0:	0a000008 	beq	a5dd8 <TEditView::GetValue(RefVar const &, RefVar const &)+0x104>
         a5db4:	e1a01009 	mov	r1, r9
         a5db8:	eb6c7925 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a5dbc:	eb6c70e2 	bl	1bc214c <$AllocateRefHandle(long)>
         a5dc0:	e58d0000 	str	r0, [sp]
         a5dc4:	e1a0100d 	mov	r1, sp
         a5dc8:	e28d0010 	add	r0, sp, #16	; 0x10
         a5dcc:	eb6c70d5 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         a5dd0:	e59d0000 	ldr	r0, [sp]
         a5dd4:	eb6c74f8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5dd8:	e28dd004 	add	sp, sp, #4	; 0x4
         a5ddc:	e1a0000d 	mov	r0, sp
         a5de0:	eb67dc0e 	bl	1a9ce20 <TListLoop::$Next(void)>
         a5de4:	e1b03000 	movs	r3, r0
         a5de8:	1affffe7 	bne	a5d8c <TEditView::GetValue(RefVar const &, RefVar const &)+0xb8>
         a5dec:	e59d000c 	ldr	r0, [sp, #12]
         a5df0:	e5900000 	ldr	r0, [r0]
         a5df4:	eb6c7d2c 	bl	1bc52ac <$Length(long)>
         a5df8:	e3300000 	teq	r0, #0	; 0x0
         a5dfc:	059d000c 	ldreq	r0, [sp, #12]
         a5e00:	05808000 	streq	r8, [r0]
         a5e04:	e28dd00c 	add	sp, sp, #12	; 0xc
         a5e08:	ea000007 	b	a5e2c <TEditView::GetValue(RefVar const &, RefVar const &)+0x158>
         a5e0c:	00683110 	rsbeq	r3, r8, r0, lsl r1
         a5e10:	00683b30 	rsbeq	r3, r8, r0, lsr fp
         a5e14:	e1a02004 	mov	r2, r4
         a5e18:	e1a01005 	mov	r1, r5
         a5e1c:	e1a00006 	mov	r0, r6
         a5e20:	eb6c91cb 	bl	1bca554 <TView::$GetValue(RefVar const &, RefVar const &)>
         a5e24:	e59d1000 	ldr	r1, [sp]
         a5e28:	e5810000 	str	r0, [r1]
         a5e2c:	e59d0000 	ldr	r0, [sp]
         a5e30:	e5904000 	ldr	r4, [r0]
         a5e34:	e1a00007 	mov	r0, r7
         a5e38:	eb6c74df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5e3c:	e59d0000 	ldr	r0, [sp]
         a5e40:	eb6c74dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a5e44:	e1a00004 	mov	r0, r4
         a5e48:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::SetValue(RefVar const &, RefVar const &)
 * Address: 000a5e4c
 */
TEditView::SetValue(RefVar const &, RefVar const &) {
    /*
         a5e4c:	e1a0c00d 	mov	ip, sp
         a5e50:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a5e54:	e24cb004 	sub	fp, ip, #4	; 0x4
         a5e58:	e1a04000 	mov	r4, r0
         a5e5c:	e1a05001 	mov	r5, r1
         a5e60:	e1a06002 	mov	r6, r2
         a5e64:	e59f0034 	ldr	r0, [pc, #34]	; a5ea0 <TEditView::SetValue(RefVar const &, RefVar const &)+0x54>
         a5e68:	e5900000 	ldr	r0, [r0]
         a5e6c:	e5901000 	ldr	r1, [r0]
         a5e70:	e5950000 	ldr	r0, [r5]
         a5e74:	e5900000 	ldr	r0, [r0]
         a5e78:	eb6c78ec 	bl	1bc4230 <$EQRef__FlT1>
         a5e7c:	e3300000 	teq	r0, #0	; 0x0
         a5e80:	0a000007 	beq	a5ea4 <TEditView::SetValue(RefVar const &, RefVar const &)+0x58>
         a5e84:	e5945008 	ldr	r5, [r4, #8]	; fField8
         a5e88:	e1a00004 	mov	r0, r4
         a5e8c:	eb690546 	bl	1ae73ac <TView::$TextFlags( const(void))>
         a5e90:	e1a01005 	mov	r1, r5
         a5e94:	eb690d7f 	bl	1ae9498 <$GetInputViewTextFlags__FUlT1>
         a5e98:	e5a40048 	str	r0, [r4, #72]!	; fField72
         a5e9c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         a5ea0:	00684ad8 	ldreqd	r4, [r8], -#168
         a5ea4:	e1a02006 	mov	r2, r6
         a5ea8:	e1a01005 	mov	r1, r5
         a5eac:	e1a00004 	mov	r0, r4
         a5eb0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         a5eb4:	ea6c99d6 	b	1bcc614 <TView::$SetValue(RefVar const &, RefVar const &)>
    */
}

/**
 * Symbol: TEditView::PostDraw(TRect &)
 * Address: 000a5eb8
 */
TEditView::PostDraw(TRect &) {
    /*
         a5eb8:	e1a0c00d 	mov	ip, sp
         a5ebc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a5ec0:	e24cb004 	sub	fp, ip, #4	; 0x4
         a5ec4:	e1a04000 	mov	r4, r0
         a5ec8:	eb6c95b7 	bl	1bcb5ac <TView::$PostDraw(TRect &)>
         a5ecc:	e59f0134 	ldr	r0, [pc, #134]	; a6008 <TEditView::PostDraw(TRect &)+0x150>
         a5ed0:	e5d00000 	ldrb	r0, [r0]
         a5ed4:	e3300000 	teq	r0, #0	; 0x0
         a5ed8:	059f012c 	ldreq	r0, [pc, #12c]	; a600c <TEditView::PostDraw(TRect &)+0x154>
         a5edc:	05900000 	ldreq	r0, [r0]
         a5ee0:	05900030 	ldreq	r0, [r0, #48]	; fField48
         a5ee4:	01300004 	teqeq	r0, r4
         a5ee8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         a5eec:	e1a00004 	mov	r0, r4
         a5ef0:	eb67e408 	bl	1a9ef18 <TView::$Printing(void)>
         a5ef4:	e3300000 	teq	r0, #0	; 0x0
         a5ef8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         a5efc:	e24dd008 	sub	sp, sp, #8	; 0x8
         a5f00:	e3a069fe 	mov	r6, #4161536	; 0x3f8000
         a5f04:	e2466501 	sub	r6, r6, #4194304	; 0x400000
         a5f08:	e5cd6005 	strb	r6, [sp, #5]
         a5f0c:	e3e0507f 	mvn	r5, #127	; 0x7f
         a5f10:	e5cd5004 	strb	r5, [sp, #4]	; fField4
         a5f14:	e5cd6001 	strb	r6, [sp, #1]
         a5f18:	e5cd5000 	strb	r5, [sp]
         a5f1c:	e1a0100d 	mov	r1, sp
         a5f20:	e1a00004 	mov	r0, r4
         a5f24:	e5942000 	ldr	r2, [r4]
         a5f28:	e1a0e00f 	mov	lr, pc
         a5f2c:	e282f0b0 	add	pc, r2, #176	; 0xb0
         a5f30:	e59d1000 	ldr	r1, [sp]
         a5f34:	e1a01841 	mov	r1, r1, asr #16
         a5f38:	e3710902 	cmn	r1, #32768	; 0x8000
         a5f3c:	0a000030 	beq	a6004 <TEditView::PostDraw(TRect &)+0x14c>
         a5f40:	e3100002 	tst	r0, #2	; 0x2
         a5f44:	0a00000b 	beq	a5f78 <TEditView::PostDraw(TRect &)+0xc0>
         a5f48:	e5cd6005 	strb	r6, [sp, #5]
         a5f4c:	e5cd5004 	strb	r5, [sp, #4]	; fField4
         a5f50:	e5cd6001 	strb	r6, [sp, #1]
         a5f54:	e5cd5000 	strb	r5, [sp]
         a5f58:	e1a0100d 	mov	r1, sp
         a5f5c:	e1a00004 	mov	r0, r4
         a5f60:	e5942000 	ldr	r2, [r4]
         a5f64:	e1a0e00f 	mov	lr, pc
         a5f68:	e282f0b4 	add	pc, r2, #180	; 0xb4
         a5f6c:	e2841010 	add	r1, r4, #16	; 0x10
         a5f70:	e1a0000d 	mov	r0, sp
         a5f74:	eb67f8b1 	bl	1aa4240 <$ToOutsideGrayBorder(TRect *, TRect const *)>
         a5f78:	e24dd038 	sub	sp, sp, #56	; 0x38
         a5f7c:	e1a0000d 	mov	r0, sp
         a5f80:	eb6d2607 	bl	1bef7a4 <$GetPort(GrafPort **)>
         a5f84:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a5f88:	e280501c 	add	r5, r0, #28	; 0x1c
         a5f8c:	e1a0000d 	mov	r0, sp
         a5f90:	eb678920 	bl	1a88418 <TBits::$__ct(void)>
         a5f94:	e1a01005 	mov	r1, r5
         a5f98:	e1a0000d 	mov	r0, sp
         a5f9c:	eb679dcb 	bl	1a8d6d0 <TBits::$Constructor(TRect const &)>
         a5fa0:	e3300000 	teq	r0, #0	; 0x0
         a5fa4:	0a000012 	beq	a5ff4 <TEditView::PostDraw(TRect &)+0x13c>
         a5fa8:	e3a00000 	mov	r0, #0	; 0x0
         a5fac:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         a5fb0:	e28d0004 	add	r0, sp, #4	; 0x4
         a5fb4:	e49d1004 	ldr	r1, [sp], #4	; fField4
         a5fb8:	eb679167 	bl	1a8a55c <TBits::$BeginDrawing(TPoint)>
         a5fbc:	e1a00004 	mov	r0, r4
         a5fc0:	e5941000 	ldr	r1, [r4]
         a5fc4:	e1a0e00f 	mov	lr, pc
         a5fc8:	e281f084 	add	pc, r1, #132	; 0x84
         a5fcc:	e1a0000d 	mov	r0, sp
         a5fd0:	eb67b264 	bl	1a92968 <TBits::$EndDrawing(void)>
         a5fd4:	e3a03000 	mov	r3, #0	; 0x0
         a5fd8:	e92d0008 	stmdb	sp!, {r3}
         a5fdc:	e28d2038 	add	r2, sp, #56	; 0x38
         a5fe0:	e28d1038 	add	r1, sp, #56	; 0x38
         a5fe4:	e28d0004 	add	r0, sp, #4	; 0x4
         a5fe8:	e3a03002 	mov	r3, #2	; 0x2
         a5fec:	eb67ae3a 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         a5ff0:	e28dd004 	add	sp, sp, #4	; 0x4
         a5ff4:	e1a0000d 	mov	r0, sp
         a5ff8:	e3a01000 	mov	r1, #0	; 0x0
         a5ffc:	eb67891d 	bl	1a88478 <TBits::$__dt(void)>
         a6000:	e28dd034 	add	sp, sp, #52	; 0x34
         a6004:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         a6008:	0c100cbc 	ldceq	12, cr0, [r0], -#752
         a600c:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TEditView::DirtyBoxHilites(void)
 * Address: 000a6010
 */
TEditView::DirtyBoxHilites(void) {
    /*
         a6010:	e1a0c00d 	mov	ip, sp
         a6014:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a6018:	e24cb004 	sub	fp, ip, #4	; 0x4
         a601c:	e1a04000 	mov	r4, r0
         a6020:	e59f0070 	ldr	r0, [pc, #70]	; a6098 <TEditView::DirtyBoxHilites(void)+0x88>
         a6024:	e5900000 	ldr	r0, [r0]
         a6028:	e5900030 	ldr	r0, [r0, #48]	; fField48
         a602c:	e1300004 	teq	r0, r4
         a6030:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         a6034:	e24dd008 	sub	sp, sp, #8	; 0x8
         a6038:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
         a603c:	e2411501 	sub	r1, r1, #4194304	; 0x400000
         a6040:	e5cd1005 	strb	r1, [sp, #5]
         a6044:	e3e0007f 	mvn	r0, #127	; 0x7f
         a6048:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         a604c:	e5cd1001 	strb	r1, [sp, #1]
         a6050:	e5cd0000 	strb	r0, [sp]
         a6054:	e1a0100d 	mov	r1, sp
         a6058:	e1a00004 	mov	r0, r4
         a605c:	e5942000 	ldr	r2, [r4]
         a6060:	e1a0e00f 	mov	lr, pc
         a6064:	e282f0b0 	add	pc, r2, #176	; 0xb0
         a6068:	e59d1000 	ldr	r1, [sp]
         a606c:	e1a01841 	mov	r1, r1, asr #16
         a6070:	e3710902 	cmn	r1, #32768	; 0x8000
         a6074:	12000002 	andne	r0, r0, #2	; 0x2
         a6078:	13300000 	teqne	r0, #0	; 0x0
         a607c:	0a000004 	beq	a6094 <TEditView::DirtyBoxHilites(void)+0x84>
         a6080:	e1a00004 	mov	r0, r4
         a6084:	e3a01000 	mov	r1, #0	; 0x0
         a6088:	e5942000 	ldr	r2, [r4]
         a608c:	e1a0e00f 	mov	lr, pc
         a6090:	e282f054 	add	pc, r2, #84	; 0x54
         a6094:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         a6098:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TEditView::DrawHiliting(void)
 * Address: 000a609c
 */
TEditView::DrawHiliting(void) {
    /*
         a609c:	e1a0c00d 	mov	ip, sp
         a60a0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         a60a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         a60a8:	e1a04000 	mov	r4, r0
         a60ac:	e5900008 	ldr	r0, [r0, #8]	; fField8
         a60b0:	e3100020 	tst	r0, #32	; 0x20
         a60b4:	e2847010 	add	r7, r4, #16	; 0x10
         a60b8:	11a00007 	movne	r0, r7
         a60bc:	1b6a9d75 	blne	1b4d698 <$ClipRect(Rect *)>
         a60c0:	eb6ab217 	bl	1b52924 <$PenNormal(void)>
         a60c4:	e24dd008 	sub	sp, sp, #8	; 0x8
         a60c8:	e3a089fe 	mov	r8, #4161536	; 0x3f8000
         a60cc:	e2488501 	sub	r8, r8, #4194304	; 0x400000
         a60d0:	e5cd8005 	strb	r8, [sp, #5]
         a60d4:	e3e0607f 	mvn	r6, #127	; 0x7f
         a60d8:	e5cd6004 	strb	r6, [sp, #4]	; fField4
         a60dc:	e5cd8001 	strb	r8, [sp, #1]
         a60e0:	e5cd6000 	strb	r6, [sp]
         a60e4:	e1a0100d 	mov	r1, sp
         a60e8:	e1a00004 	mov	r0, r4
         a60ec:	e5942000 	ldr	r2, [r4]
         a60f0:	e1a0e00f 	mov	lr, pc
         a60f4:	e282f0b0 	add	pc, r2, #176	; 0xb0
         a60f8:	e1a09000 	mov	r9, r0
         a60fc:	e59d0000 	ldr	r0, [sp]
         a6100:	e1a00840 	mov	r0, r0, asr #16
         a6104:	e3700902 	cmn	r0, #32768	; 0x8000
         a6108:	1a000000 	bne	a6110 <TEditView::DrawHiliting(void)+0x74>
         a610c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         a6110:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a6114:	e1a0000d 	mov	r0, sp
         a6118:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a611c:	eb6788c4 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a6120:	e1a0000d 	mov	r0, sp
         a6124:	eb67db3d 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6128:	e1b05000 	movs	r5, r0
         a612c:	0a00000e 	beq	a616c <TEditView::DrawHiliting(void)+0xd0>
         a6130:	e1a00005 	mov	r0, r5
         a6134:	e5951000 	ldr	r1, [r5]
         a6138:	e1a0e00f 	mov	lr, pc
         a613c:	e281f094 	add	pc, r1, #148	; 0x94
         a6140:	e3300000 	teq	r0, #0	; 0x0
         a6144:	0a000004 	beq	a615c <TEditView::DrawHiliting(void)+0xc0>
         a6148:	e1a00005 	mov	r0, r5
         a614c:	e3a01000 	mov	r1, #0	; 0x0
         a6150:	e5952000 	ldr	r2, [r5]
         a6154:	e1a0e00f 	mov	lr, pc
         a6158:	e282f098 	add	pc, r2, #152	; 0x98
         a615c:	e1a0000d 	mov	r0, sp
         a6160:	eb67db2e 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6164:	e1b05000 	movs	r5, r0
         a6168:	1afffff0 	bne	a6130 <TEditView::DrawHiliting(void)+0x94>
         a616c:	e1a0000d 	mov	r0, sp
         a6170:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a6174:	eb6788ae 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a6178:	e1a0000d 	mov	r0, sp
         a617c:	eb67db27 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6180:	e1b05000 	movs	r5, r0
         a6184:	0a00000e 	beq	a61c4 <TEditView::DrawHiliting(void)+0x128>
         a6188:	e1a00005 	mov	r0, r5
         a618c:	e5951000 	ldr	r1, [r5]
         a6190:	e1a0e00f 	mov	lr, pc
         a6194:	e281f094 	add	pc, r1, #148	; 0x94
         a6198:	e3300000 	teq	r0, #0	; 0x0
         a619c:	0a000004 	beq	a61b4 <TEditView::DrawHiliting(void)+0x118>
         a61a0:	e1a00005 	mov	r0, r5
         a61a4:	e3a01001 	mov	r1, #1	; 0x1
         a61a8:	e5952000 	ldr	r2, [r5]
         a61ac:	e1a0e00f 	mov	lr, pc
         a61b0:	e282f098 	add	pc, r2, #152	; 0x98
         a61b4:	e1a0000d 	mov	r0, sp
         a61b8:	eb67db18 	bl	1a9ce20 <TListLoop::$Next(void)>
         a61bc:	e1b05000 	movs	r5, r0
         a61c0:	1afffff0 	bne	a6188 <TEditView::DrawHiliting(void)+0xec>
         a61c4:	e28dd00c 	add	sp, sp, #12	; 0xc
         a61c8:	e3190002 	tst	r9, #2	; 0x2
         a61cc:	0a000010 	beq	a6214 <TEditView::DrawHiliting(void)+0x178>
         a61d0:	e24dd008 	sub	sp, sp, #8	; 0x8
         a61d4:	e5cd8005 	strb	r8, [sp, #5]
         a61d8:	e5cd6004 	strb	r6, [sp, #4]	; fField4
         a61dc:	e5cd8001 	strb	r8, [sp, #1]
         a61e0:	e5cd6000 	strb	r6, [sp]
         a61e4:	e1a0100d 	mov	r1, sp
         a61e8:	e1a00004 	mov	r0, r4
         a61ec:	e5942000 	ldr	r2, [r4]
         a61f0:	e1a0e00f 	mov	lr, pc
         a61f4:	e282f0b4 	add	pc, r2, #180	; 0xb4
         a61f8:	e59f106c 	ldr	r1, [pc, #6c]	; a626c <TEditView::DrawHiliting(void)+0x1d0>	; fField6
         a61fc:	e1a0000d 	mov	r0, sp
         a6200:	eb67eba3 	bl	1aa1094 <TRect::$Scale(TTransform const &)>
         a6204:	e1a01007 	mov	r1, r7
         a6208:	e1a0000d 	mov	r0, sp
         a620c:	eb67b1c5 	bl	1a92928 <$DrawResizeBorder(TRect const &, TRect const *)>
         a6210:	e28dd008 	add	sp, sp, #8	; 0x8
         a6214:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
         a6218:	e3100020 	tst	r0, #32	; 0x20
         a621c:	0a000010 	beq	a6264 <TEditView::DrawHiliting(void)+0x1c8>
         a6220:	e24dd008 	sub	sp, sp, #8	; 0x8
         a6224:	e3a00001 	mov	r0, #1	; 0x1
         a6228:	e2400902 	sub	r0, r0, #32768	; 0x8000
         a622c:	e3a01902 	mov	r1, #32768	; 0x8000
         a6230:	e2411002 	sub	r1, r1, #2	; 0x2
         a6234:	e5cd0001 	strb	r0, [sp, #1]
         a6238:	e5cd6000 	strb	r6, [sp]
         a623c:	e5cd0003 	strb	r0, [sp, #3]
         a6240:	e5cd6002 	strb	r6, [sp, #2]	; fField2
         a6244:	e5cd1005 	strb	r1, [sp, #5]
         a6248:	e3a0007f 	mov	r0, #127	; 0x7f
         a624c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         a6250:	e5cd1007 	strb	r1, [sp, #7]
         a6254:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         a6258:	e1a0000d 	mov	r0, sp
         a625c:	eb6a9d0d 	bl	1b4d698 <$ClipRect(Rect *)>
         a6260:	e28dd008 	add	sp, sp, #8	; 0x8
         a6264:	eb6ab1ae 	bl	1b52924 <$PenNormal(void)>
         a6268:	eaffffa7 	b	a610c <TEditView::DrawHiliting(void)+0x70>
         a626c:	0c100cc4 	ldceq	12, cr0, [r0], -#784
    */
}

/**
 * Symbol: TEditView::InvalAllHilites(void)
 * Address: 000a6270
 */
TEditView::InvalAllHilites(void) {
    /*
         a6270:	e1a0c00d 	mov	ip, sp
         a6274:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a6278:	e24cb004 	sub	fp, ip, #4	; 0x4
         a627c:	e1a04000 	mov	r4, r0
         a6280:	e24dd008 	sub	sp, sp, #8	; 0x8
         a6284:	e3a069fe 	mov	r6, #4161536	; 0x3f8000
         a6288:	e2466501 	sub	r6, r6, #4194304	; 0x400000
         a628c:	e5cd6005 	strb	r6, [sp, #5]
         a6290:	e3e0507f 	mvn	r5, #127	; 0x7f
         a6294:	e5cd5004 	strb	r5, [sp, #4]	; fField4
         a6298:	e5cd6001 	strb	r6, [sp, #1]
         a629c:	e5cd5000 	strb	r5, [sp]
         a62a0:	e1a0100d 	mov	r1, sp
         a62a4:	e5902000 	ldr	r2, [r0]
         a62a8:	e1a0e00f 	mov	lr, pc
         a62ac:	e282f0b0 	add	pc, r2, #176	; 0xb0
         a62b0:	e59d1000 	ldr	r1, [sp]
         a62b4:	e1a01841 	mov	r1, r1, asr #16
         a62b8:	e3710902 	cmn	r1, #32768	; 0x8000
         a62bc:	12000002 	andne	r0, r0, #2	; 0x2
         a62c0:	13300000 	teqne	r0, #0	; 0x0
         a62c4:	0a000010 	beq	a630c <TEditView::InvalAllHilites(void)+0x9c>
         a62c8:	e5cd6005 	strb	r6, [sp, #5]
         a62cc:	e5cd5004 	strb	r5, [sp, #4]	; fField4
         a62d0:	e5cd6001 	strb	r6, [sp, #1]
         a62d4:	e5cd5000 	strb	r5, [sp]
         a62d8:	e1a0100d 	mov	r1, sp
         a62dc:	e1a00004 	mov	r0, r4
         a62e0:	e5942000 	ldr	r2, [r4]
         a62e4:	e1a0e00f 	mov	lr, pc
         a62e8:	e282f0b4 	add	pc, r2, #180	; 0xb4
         a62ec:	e2841010 	add	r1, r4, #16	; 0x10
         a62f0:	e1a0000d 	mov	r0, sp
         a62f4:	eb67f7d1 	bl	1aa4240 <$ToOutsideGrayBorder(TRect *, TRect const *)>
         a62f8:	e1a0100d 	mov	r1, sp
         a62fc:	e1a00004 	mov	r0, r4
         a6300:	e5942000 	ldr	r2, [r4]
         a6304:	e1a0e00f 	mov	lr, pc
         a6308:	e282f054 	add	pc, r2, #84	; 0x54
         a630c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::DrawHilitedData(void)
 * Address: 000a6310
 */
TEditView::DrawHilitedData(void) {
    /*
         a6310:	e1a0c00d 	mov	ip, sp
         a6314:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a6318:	e24cb004 	sub	fp, ip, #4	; 0x4
         a631c:	e1a04000 	mov	r4, r0
         a6320:	eb6ab17f 	bl	1b52924 <$PenNormal(void)>
         a6324:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a6328:	e1a0000d 	mov	r0, sp
         a632c:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
         a6330:	eb67883f 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a6334:	e1a0000d 	mov	r0, sp
         a6338:	eb67dab8 	bl	1a9ce20 <TListLoop::$Next(void)>
         a633c:	e1b04000 	movs	r4, r0
         a6340:	0a00000d 	beq	a637c <TEditView::DrawHilitedData(void)+0x6c>
         a6344:	e1a00004 	mov	r0, r4
         a6348:	e5941000 	ldr	r1, [r4]
         a634c:	e1a0e00f 	mov	lr, pc
         a6350:	e281f094 	add	pc, r1, #148	; 0x94
         a6354:	e3300000 	teq	r0, #0	; 0x0
         a6358:	0a000003 	beq	a636c <TEditView::DrawHilitedData(void)+0x5c>
         a635c:	e1a00004 	mov	r0, r4
         a6360:	e5941000 	ldr	r1, [r4]
         a6364:	e1a0e00f 	mov	lr, pc
         a6368:	e281f088 	add	pc, r1, #136	; 0x88
         a636c:	e1a0000d 	mov	r0, sp
         a6370:	eb67daaa 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6374:	e1b04000 	movs	r4, r0
         a6378:	1afffff1 	bne	a6344 <TEditView::DrawHilitedData(void)+0x34>
         a637c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         a6380:	ea6ab167 	b	1b52924 <$PenNormal(void)>
    */
}

/**
 * Symbol: TEditView::DrawScaledViews(TRect const &, TRect const &)
 * Address: 000a6384
 */
TEditView::DrawScaledViews(TRect const &, TRect const &) {
    /*
         a6384:	e1a0c00d 	mov	ip, sp
         a6388:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a638c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a6390:	e1a04000 	mov	r4, r0
         a6394:	e1a06001 	mov	r6, r1
         a6398:	e1a05002 	mov	r5, r2
         a639c:	eb6ab160 	bl	1b52924 <$PenNormal(void)>
         a63a0:	e24dd008 	sub	sp, sp, #8	; 0x8
         a63a4:	e3a089fe 	mov	r8, #4161536	; 0x3f8000
         a63a8:	e2488501 	sub	r8, r8, #4194304	; 0x400000
         a63ac:	e5cd8005 	strb	r8, [sp, #5]
         a63b0:	e3e0707f 	mvn	r7, #127	; 0x7f
         a63b4:	e5cd7004 	strb	r7, [sp, #4]	; fField4
         a63b8:	e5cd8001 	strb	r8, [sp, #1]
         a63bc:	e5cd7000 	strb	r7, [sp]
         a63c0:	e1a0100d 	mov	r1, sp
         a63c4:	e1a00004 	mov	r0, r4
         a63c8:	e5942000 	ldr	r2, [r4]
         a63cc:	e1a0e00f 	mov	lr, pc
         a63d0:	e282f0b0 	add	pc, r2, #176	; 0xb0
         a63d4:	e59d0000 	ldr	r0, [sp]
         a63d8:	e1a00840 	mov	r0, r0, asr #16
         a63dc:	e3700902 	cmn	r0, #32768	; 0x8000
         a63e0:	1a000000 	bne	a63e8 <TEditView::DrawScaledViews(TRect const &, TRect const &)+0x64>
         a63e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         a63e8:	e24dd008 	sub	sp, sp, #8	; 0x8
         a63ec:	e5cd8005 	strb	r8, [sp, #5]
         a63f0:	e5cd7004 	strb	r7, [sp, #4]	; fField4
         a63f4:	e5cd8001 	strb	r8, [sp, #1]
         a63f8:	e44d700c 	strb	r7, [sp], -#12
         a63fc:	e1a0000d 	mov	r0, sp
         a6400:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a6404:	eb67880a 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a6408:	e1a0000d 	mov	r0, sp
         a640c:	eb67da83 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6410:	e1b07000 	movs	r7, r0
         a6414:	0a000015 	beq	a6470 <TEditView::DrawScaledViews(TRect const &, TRect const &)+0xec>
         a6418:	e1a00007 	mov	r0, r7
         a641c:	e5971000 	ldr	r1, [r7]
         a6420:	e1a0e00f 	mov	lr, pc
         a6424:	e281f094 	add	pc, r1, #148	; 0x94
         a6428:	e3300000 	teq	r0, #0	; 0x0
         a642c:	0a00000b 	beq	a6460 <TEditView::DrawScaledViews(TRect const &, TRect const &)+0xdc>
         a6430:	e24dd008 	sub	sp, sp, #8	; 0x8
         a6434:	e1a0300d 	mov	r3, sp
         a6438:	e1a02005 	mov	r2, r5
         a643c:	e1a01006 	mov	r1, r6
         a6440:	e1a00007 	mov	r0, r7
         a6444:	e597c000 	ldr	ip, [r7]
         a6448:	e1a0e00f 	mov	lr, pc
         a644c:	e28cf0c4 	add	pc, ip, #196	; 0xc4
         a6450:	e1a0100d 	mov	r1, sp
         a6454:	e28d0014 	add	r0, sp, #20	; 0x14
         a6458:	eb67fb8c 	bl	1aa5290 <TRect::$Union(TRect const &)>
         a645c:	e28dd008 	add	sp, sp, #8	; 0x8
         a6460:	e1a0000d 	mov	r0, sp
         a6464:	eb67da6d 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6468:	e1b07000 	movs	r7, r0
         a646c:	1affffe9 	bne	a6418 <TEditView::DrawScaledViews(TRect const &, TRect const &)+0x94>
         a6470:	e28dd00c 	add	sp, sp, #12	; 0xc
         a6474:	e2841010 	add	r1, r4, #16	; 0x10
         a6478:	e1a0000d 	mov	r0, sp
         a647c:	eb67b129 	bl	1a92928 <$DrawResizeBorder(TRect const &, TRect const *)>
         a6480:	eb6ab127 	bl	1b52924 <$PenNormal(void)>
         a6484:	e28dd008 	add	sp, sp, #8	; 0x8
         a6488:	eaffffd5 	b	a63e4 <TEditView::DrawScaledViews(TRect const &, TRect const &)+0x60>
    */
}

/**
 * Symbol: TEditView::SetupDone(void)
 * Address: 000a648c
 */
TEditView::SetupDone(void) {
    /*
         a648c:	e1a0c00d 	mov	ip, sp
         a6490:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a6494:	e24cb004 	sub	fp, ip, #4	; 0x4
         a6498:	e1a04000 	mov	r4, r0
         a649c:	e2800024 	add	r0, r0, #36	; 0x24
         a64a0:	e59f1040 	ldr	r1, [pc, #40]	; a64e8 <TEditView::SetupDone(void)+0x5c>
         a64a4:	e3a03000 	mov	r3, #0	; 0x0
         a64a8:	e3a02000 	mov	r2, #0	; 0x0
         a64ac:	eb6c7770 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         a64b0:	eb6c6f25 	bl	1bc214c <$AllocateRefHandle(long)>
         a64b4:	e1a06000 	mov	r6, r0
         a64b8:	e5900000 	ldr	r0, [r0]
         a64bc:	e3a07000 	mov	r7, #0	; 0x0
         a64c0:	e3300002 	teq	r0, #2	; 0x2
         a64c4:	0a000008 	beq	a64ec <TEditView::SetupDone(void)+0x60>
         a64c8:	e3100003 	tst	r0, #3	; 0x3
         a64cc:	01a00140 	moveq	r0, r0, asr #2
         a64d0:	0a000000 	beq	a64d8 <TEditView::SetupDone(void)+0x4c>
         a64d4:	eb6c6f10 	bl	1bc211c <$_RINTError(long)>
         a64d8:	e5c40031 	strb	r0, [r4, #49]	; fField49
         a64dc:	e1a00440 	mov	r0, r0, asr #8
         a64e0:	e5c40030 	strb	r0, [r4, #48]	; fField48
         a64e4:	ea000002 	b	a64f4 <TEditView::SetupDone(void)+0x68>
         a64e8:	00685058 	rsbeq	r5, r8, r8, asr r0
         a64ec:	e5c47031 	strb	r7, [r4, #49]	; fField49
         a64f0:	e5c47030 	strb	r7, [r4, #48]	; fField48
         a64f4:	e5945008 	ldr	r5, [r4, #8]	; fField8
         a64f8:	e1a00004 	mov	r0, r4
         a64fc:	eb6903aa 	bl	1ae73ac <TView::$TextFlags( const(void))>
         a6500:	e1a01005 	mov	r1, r5
         a6504:	eb690be3 	bl	1ae9498 <$GetInputViewTextFlags__FUlT1>
         a6508:	e5840048 	str	r0, [r4, #72]	; fField72
         a650c:	e3e00002 	mvn	r0, #2	; 0x2
         a6510:	e5840034 	str	r0, [r4, #52]	; fField52
         a6514:	e5c47040 	strb	r7, [r4, #64]	; fField64
         a6518:	e2840038 	add	r0, r4, #56	; 0x38
         a651c:	e3a029fe 	mov	r2, #4161536	; 0x3f8000
         a6520:	e2422501 	sub	r2, r2, #4194304	; 0x400000
         a6524:	e5c02005 	strb	r2, [r0, #5]
         a6528:	e3e0107f 	mvn	r1, #127	; 0x7f
         a652c:	e5c01004 	strb	r1, [r0, #4]	; fField4
         a6530:	e5c02001 	strb	r2, [r0, #1]
         a6534:	e5c01000 	strb	r1, [r0]
         a6538:	e1a00004 	mov	r0, r4
         a653c:	eb68da3a 	bl	1adce2c <TView::$SetupDone(void)>
         a6540:	e1a00006 	mov	r0, r6
         a6544:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         a6548:	ea6c731b 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TEditView::HandleShape(Polygon **, long)
 * Address: 000a654c
 */
TEditView::HandleShape(Polygon **, long) {
    /*
         a654c:	e1a0c00d 	mov	ip, sp
         a6550:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a6554:	e24cb004 	sub	fp, ip, #4	; 0x4
         a6558:	e1a05000 	mov	r5, r0
         a655c:	e1a06001 	mov	r6, r1
         a6560:	e1a04002 	mov	r4, r2
         a6564:	e24dd004 	sub	sp, sp, #4	; 0x4
         a6568:	e59f021c 	ldr	r0, [pc, #21c]	; a678c <TEditView::HandleShape(Polygon **, long)+0x240>
         a656c:	eb67c164 	bl	1a96b04 <$GetPreference(RefVar const &)>
         a6570:	e3100003 	tst	r0, #3	; 0x3
         a6574:	01a00140 	moveq	r0, r0, asr #2
         a6578:	0a000000 	beq	a6580 <TEditView::HandleShape(Polygon **, long)+0x34>
         a657c:	eb6c6ee6 	bl	1bc211c <$_RINTError(long)>
         a6580:	e58d0000 	str	r0, [sp]
         a6584:	e1a00006 	mov	r0, r6
         a6588:	eb6ceedf 	bl	1be210c <$HLock>
         a658c:	e24dd010 	sub	sp, sp, #16	; 0x10
         a6590:	e5967000 	ldr	r7, [r6]
         a6594:	e2870004 	add	r0, r7, #4	; 0x4
         a6598:	e28d1008 	add	r1, sp, #8	; 0x8
         a659c:	e8905000 	ldmia	r0, {ip, lr}
         a65a0:	e8815000 	stmia	r1, {ip, lr}
         a65a4:	e28d0008 	add	r0, sp, #8	; 0x8
         a65a8:	e8905000 	ldmia	r0, {ip, lr}
         a65ac:	e88d5000 	stmia	sp, {ip, lr}
         a65b0:	e24dd008 	sub	sp, sp, #8	; 0x8
         a65b4:	e1a01005 	mov	r1, r5
         a65b8:	e28d0004 	add	r0, sp, #4	; 0x4
         a65bc:	eb0703d0 	bl	267504 <TView::ContentsOrigin(void)>
         a65c0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a65c4:	e2600000 	rsb	r0, r0, #0	; 0x0
         a65c8:	e1a00800 	mov	r0, r0, lsl #16
         a65cc:	e1a00840 	mov	r0, r0, asr #16
         a65d0:	e59d1006 	ldr	r1, [sp, #6]	; fField6
         a65d4:	e2611000 	rsb	r1, r1, #0	; 0x0
         a65d8:	e1a01801 	mov	r1, r1, lsl #16
         a65dc:	e1a01841 	mov	r1, r1, asr #16
         a65e0:	e24dd004 	sub	sp, sp, #4	; 0x4
         a65e4:	e5cd0003 	strb	r0, [sp, #3]
         a65e8:	e1a00440 	mov	r0, r0, asr #8
         a65ec:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a65f0:	e5cd1001 	strb	r1, [sp, #1]
         a65f4:	e1a00441 	mov	r0, r1, asr #8
         a65f8:	e5cd0000 	strb	r0, [sp]
         a65fc:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a6600:	e58d0000 	str	r0, [sp]
         a6604:	e28d0010 	add	r0, sp, #16	; 0x10
         a6608:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a660c:	e1a01841 	mov	r1, r1, asr #16
         a6610:	e59d2000 	ldr	r2, [sp]
         a6614:	e1a02842 	mov	r2, r2, asr #16
         a6618:	eb6aacb2 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a661c:	e28dd004 	add	sp, sp, #4	; 0x4
         a6620:	e1a0200d 	mov	r2, sp
         a6624:	e59f1164 	ldr	r1, [pc, #164]	; a6790 <TEditView::HandleShape(Polygon **, long)+0x244>
         a6628:	e1a00005 	mov	r0, r5
         a662c:	eb690365 	bl	1ae73c8 <TView::$IsGridded(RefVar const &, TPoint *)>
         a6630:	e3300000 	teq	r0, #0	; 0x0
         a6634:	0a00001c 	beq	a66ac <TEditView::HandleShape(Polygon **, long)+0x160>
         a6638:	e3340000 	teq	r4, #0	; 0x0
         a663c:	13340001 	teqne	r4, #1	; 0x1
         a6640:	13340002 	teqne	r4, #2	; 0x2
         a6644:	1334000a 	teqne	r4, #10	; 0xa
         a6648:	1334000b 	teqne	r4, #11	; 0xb
         a664c:	01a0100d 	moveq	r1, sp
         a6650:	028d000c 	addeq	r0, sp, #12	; 0xc
         a6654:	0b689808 	bleq	1acc67c <$AlignRectToGrid(TRect *, TPoint &)>
         a6658:	e3340004 	teq	r4, #4	; 0x4
         a665c:	13340005 	teqne	r4, #5	; 0x5
         a6660:	13340008 	teqne	r4, #8	; 0x8
         a6664:	13340009 	teqne	r4, #9	; 0x9
         a6668:	1a00000f 	bne	a66ac <TEditView::HandleShape(Polygon **, long)+0x160>
         a666c:	e287a00c 	add	sl, r7, #12	; 0xc
         a6670:	e1a00007 	mov	r0, r7
         a6674:	eb67a03d 	bl	1a8e770 <$Count(Polygon *)>
         a6678:	e1a09000 	mov	r9, r0
         a667c:	e3a08000 	mov	r8, #0	; 0x0
         a6680:	e3500000 	cmp	r0, #0	; 0x0
         a6684:	da000005 	ble	a66a0 <TEditView::HandleShape(Polygon **, long)+0x154>
         a6688:	e08a0108 	add	r0, sl, r8, lsl #2
         a668c:	e1a0100d 	mov	r1, sp
         a6690:	eb6897f8 	bl	1acc678 <$AlignPtToGrid(TPoint *, TPoint &)>
         a6694:	e2888001 	add	r8, r8, #1	; 0x1
         a6698:	e1580009 	cmp	r8, r9
         a669c:	bafffff9 	blt	a6688 <TEditView::HandleShape(Polygon **, long)+0x13c>
         a66a0:	e1a0100d 	mov	r1, sp
         a66a4:	e28d000c 	add	r0, sp, #12	; 0xc
         a66a8:	eb6897f3 	bl	1acc67c <$AlignRectToGrid(TRect *, TPoint &)>
         a66ac:	e24dd008 	sub	sp, sp, #8	; 0x8
         a66b0:	e59d301c 	ldr	r3, [sp, #28]	; fField28
         a66b4:	e92d0008 	stmdb	sp!, {r3}
         a66b8:	e1a00007 	mov	r0, r7
         a66bc:	eb67a02b 	bl	1a8e770 <$Count(Polygon *)>
         a66c0:	e1a01000 	mov	r1, r0
         a66c4:	e287000c 	add	r0, r7, #12	; 0xc
         a66c8:	e28d3018 	add	r3, sp, #24	; 0x18
         a66cc:	e1a02004 	mov	r2, r4
         a66d0:	eb67d5b9 	bl	1a9bdbc <$MakePolygonForm__FP6TPointlT2RC5TRectT2>
         a66d4:	e28dd004 	add	sp, sp, #4	; 0x4
         a66d8:	eb6c6e9b 	bl	1bc214c <$AllocateRefHandle(long)>
         a66dc:	e58d0000 	str	r0, [sp]
         a66e0:	e2850024 	add	r0, r5, #36	; 0x24
         a66e4:	e28d2004 	add	r2, sp, #4	; 0x4
         a66e8:	e59f10a4 	ldr	r1, [pc, #a4]	; a6794 <TEditView::HandleShape(Polygon **, long)+0x248>
         a66ec:	e1a04001 	mov	r4, r1
         a66f0:	eb6c76dc 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         a66f4:	e3a07000 	mov	r7, #0	; 0x0
         a66f8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a66fc:	e3300000 	teq	r0, #0	; 0x0
         a6700:	0a000017 	beq	a6764 <TEditView::HandleShape(Polygon **, long)+0x218>
         a6704:	e24dd004 	sub	sp, sp, #4	; 0x4
         a6708:	e3a00001 	mov	r0, #1	; 0x1
         a670c:	eb67d5a2 	bl	1a9bd9c <$MakeArray(long)>
         a6710:	eb6c6e8d 	bl	1bc214c <$AllocateRefHandle(long)>
         a6714:	e58d0000 	str	r0, [sp]
         a6718:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a671c:	e5902000 	ldr	r2, [r0]
         a6720:	e59d0000 	ldr	r0, [sp]
         a6724:	e5900000 	ldr	r0, [r0]
         a6728:	e1a01007 	mov	r1, r7
         a672c:	eb6c7f09 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a6730:	e3a03000 	mov	r3, #0	; 0x0
         a6734:	e92d0008 	stmdb	sp!, {r3}
         a6738:	e28d2004 	add	r2, sp, #4	; 0x4
         a673c:	e1a01004 	mov	r1, r4
         a6740:	e1a00005 	mov	r0, r5
         a6744:	e3a03001 	mov	r3, #1	; 0x1
         a6748:	eb6c93a4 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         a674c:	e28dd004 	add	sp, sp, #4	; 0x4
         a6750:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a6754:	e5810000 	str	r0, [r1]
         a6758:	e59d0000 	ldr	r0, [sp]
         a675c:	eb6c7296 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6760:	e28dd004 	add	sp, sp, #4	; 0x4
         a6764:	e1a0100d 	mov	r1, sp
         a6768:	e1a00005 	mov	r0, r5
         a676c:	eb678b53 	bl	1a894c0 <TEditView::$AddForm(RefVar const &)>
         a6770:	e1a00006 	mov	r0, r6
         a6774:	eb6cee66 	bl	1be2114 <$HUnlock>
         a6778:	e3a04001 	mov	r4, #1	; 0x1
         a677c:	e59d0000 	ldr	r0, [sp]
         a6780:	eb6c728d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6784:	e1a00004 	mov	r0, r4
         a6788:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a678c:	00684e50 	rsbeq	r4, r8, r0, asr lr
         a6790:	006847e8 	rsbeq	r4, r8, r8, ror #15
         a6794:	00682b10 	rsbeq	r2, r8, r0, lsl fp
    */
}

/**
 * Symbol: TEditView::HandleInk(TUnitPublic *)
 * Address: 000a6798
 */
TEditView::HandleInk(TUnitPublic *) {
    /*
         a6798:	e1a0c00d 	mov	ip, sp
         a679c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a67a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         a67a4:	e1a04000 	mov	r4, r0
         a67a8:	e24dd008 	sub	sp, sp, #8	; 0x8
         a67ac:	e5910000 	ldr	r0, [r1]
         a67b0:	eb027d91 	bl	145dfc <GetTStroke(TUnit *)>
         a67b4:	e58d0000 	str	r0, [sp]
         a67b8:	e3a00000 	mov	r0, #0	; 0x0
         a67bc:	e58d0004 	str	r0, [sp, #4]	; fField4
         a67c0:	e1a0100d 	mov	r1, sp
         a67c4:	e1a00004 	mov	r0, r4
         a67c8:	eb683489 	bl	1ab39f4 <$HandleInk(TEditView *, TStroke **)>
         a67cc:	e3a00001 	mov	r0, #1	; 0x1
         a67d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::HandleInk(Polygon **)
 * Address: 000a67d4
 */
TEditView::HandleInk(Polygon **) {
    /*
         a67d4:	e1a0c00d 	mov	ip, sp
         a67d8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a67dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         a67e0:	e1a06000 	mov	r6, r0
         a67e4:	e1a04001 	mov	r4, r1
         a67e8:	e24dd008 	sub	sp, sp, #8	; 0x8
         a67ec:	e1a00001 	mov	r0, r1
         a67f0:	eb6cee45 	bl	1be210c <$HLock>
         a67f4:	e3a08000 	mov	r8, #0	; 0x0
         a67f8:	e1a05008 	mov	r5, r8
         a67fc:	e5947000 	ldr	r7, [r4]
         a6800:	e1a00007 	mov	r0, r7
         a6804:	eb679fd9 	bl	1a8e770 <$Count(Polygon *)>
         a6808:	e1a01000 	mov	r1, r0
         a680c:	e287000c 	add	r0, r7, #12	; 0xc
         a6810:	e1a02005 	mov	r2, r5
         a6814:	eb67d56f 	bl	1a9bdd8 <$MakeStroke(TPoint *, long, TPoint)>
         a6818:	e1b05000 	movs	r5, r0
         a681c:	0a000008 	beq	a6844 <TEditView::HandleInk(Polygon **)+0x70>
         a6820:	e1a00005 	mov	r0, r5
         a6824:	eb67e1b8 	bl	1a9ef0c <$PrepStrokeForRecognition(TStroke *)>
         a6828:	e88d0120 	stmia	sp, {r5, r8}
         a682c:	e1a0100d 	mov	r1, sp
         a6830:	e1a00006 	mov	r0, r6
         a6834:	eb68346e 	bl	1ab39f4 <$HandleInk(TEditView *, TStroke **)>
         a6838:	e1a00005 	mov	r0, r5
         a683c:	e1a0e00f 	mov	lr, pc
         a6840:	e595f000 	ldr	pc, [r5]
         a6844:	e1a00004 	mov	r0, r4
         a6848:	eb6cee31 	bl	1be2114 <$HUnlock>
         a684c:	e3a00001 	mov	r0, #1	; 0x1
         a6850:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::HandleInk(RefVar const &)
 * Address: 000a6854
 */
TEditView::HandleInk(RefVar const &) {
    /*
         a6854:	e1a0c00d 	mov	ip, sp
         a6858:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a685c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a6860:	e1a04000 	mov	r4, r0
         a6864:	e1a00001 	mov	r0, r1
         a6868:	eb68513a 	bl	1abad58 <$StrokeBundleToTStrokes(RefVar const &)>
         a686c:	e1a01000 	mov	r1, r0
         a6870:	e1a05000 	mov	r5, r0
         a6874:	e1a00004 	mov	r0, r4
         a6878:	eb68345d 	bl	1ab39f4 <$HandleInk(TEditView *, TStroke **)>
         a687c:	e1a00005 	mov	r0, r5
         a6880:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         a6884:	ea681763 	b	1aac618 <$DisposeTStrokes(TStroke **)>
    */
}

/**
 * Symbol: TEditView::HandleInkWord(RefVar const &)
 * Address: 000a6888
 */
TEditView::HandleInkWord(RefVar const &) {
    /*
         a6888:	e1a0c00d 	mov	ip, sp
         a688c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a6890:	e24cb004 	sub	fp, ip, #4	; 0x4
         a6894:	e1a04000 	mov	r4, r0
         a6898:	e1a00001 	mov	r0, r1
         a689c:	e24dd010 	sub	sp, sp, #16	; 0x10
         a68a0:	e3a01000 	mov	r1, #0	; 0x0
         a68a4:	e58d1008 	str	r1, [sp, #8]	; fField8
         a68a8:	e3a01001 	mov	r1, #1	; 0x1
         a68ac:	e5cd100d 	strb	r1, [sp, #13]
         a68b0:	e3a010f7 	mov	r1, #247	; 0xf7
         a68b4:	e5cd100c 	strb	r1, [sp, #12]
         a68b8:	e3a07000 	mov	r7, #0	; 0x0
         a68bc:	e5cd700f 	strb	r7, [sp, #15]
         a68c0:	e5cd700e 	strb	r7, [sp, #14]
         a68c4:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a68c8:	eb67fea4 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
         a68cc:	eb6c6e1e 	bl	1bc214c <$AllocateRefHandle(long)>
         a68d0:	e58d0008 	str	r0, [sp, #8]	; fField8
         a68d4:	e28d0008 	add	r0, sp, #8	; 0x8
         a68d8:	eb68511d 	bl	1abad54 <$StrokeBundleToInkWord(RefVar const &)>
         a68dc:	eb6c6e1a 	bl	1bc214c <$AllocateRefHandle(long)>
         a68e0:	e58d0004 	str	r0, [sp, #4]	; fField4
         a68e4:	e1a00004 	mov	r0, r4
         a68e8:	eb68b859 	bl	1ad4a54 <$ViewExpectsNumbers(TView *)>
         a68ec:	e1a01000 	mov	r1, r0
         a68f0:	e28d0004 	add	r0, sp, #4	; 0x4
         a68f4:	eb68975b 	bl	1acc668 <$AdjustInkWordXHeight(RefVar const &, unsigned char)>
         a68f8:	e59f00fc 	ldr	r0, [pc, #fc]	; a69fc <TEditView::HandleInkWord(RefVar const &)+0x174>
         a68fc:	e5900000 	ldr	r0, [r0]
         a6900:	e5901000 	ldr	r1, [r0]
         a6904:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a6908:	e5900000 	ldr	r0, [r0]
         a690c:	eb6c7653 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a6910:	eb6c6e0d 	bl	1bc214c <$AllocateRefHandle(long)>
         a6914:	e58d0000 	str	r0, [sp]
         a6918:	e1a0000d 	mov	r0, sp
         a691c:	e28d100c 	add	r1, sp, #12	; 0xc
         a6920:	eb67b854 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         a6924:	e59d0000 	ldr	r0, [sp]
         a6928:	eb6c7223 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a692c:	e24dd008 	sub	sp, sp, #8	; 0x8
         a6930:	eb6c6e02 	bl	1bc2140 <$AllocateFrame(void)>
         a6934:	eb6c6e04 	bl	1bc214c <$AllocateRefHandle(long)>
         a6938:	e58d0004 	str	r0, [sp, #4]	; fField4
         a693c:	e59f00bc 	ldr	r0, [pc, #bc]	; a6a00 <TEditView::HandleInkWord(RefVar const &)+0x178>
         a6940:	e1a06000 	mov	r6, r0
         a6944:	e3a01002 	mov	r1, #2	; 0x2
         a6948:	eb6c6dfa 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         a694c:	eb6c6dfe 	bl	1bc214c <$AllocateRefHandle(long)>
         a6950:	e58d0000 	str	r0, [sp]
         a6954:	e3a00004 	mov	r0, #4	; 0x4
         a6958:	eb6c6dfb 	bl	1bc214c <$AllocateRefHandle(long)>
         a695c:	e1a05000 	mov	r5, r0
         a6960:	e5902000 	ldr	r2, [r0]
         a6964:	e59d0000 	ldr	r0, [sp]
         a6968:	e5900000 	ldr	r0, [r0]
         a696c:	e1a01007 	mov	r1, r7
         a6970:	eb6c7e78 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a6974:	e1a00005 	mov	r0, r5
         a6978:	eb6c720f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a697c:	e59d000c 	ldr	r0, [sp, #12]
         a6980:	e5902000 	ldr	r2, [r0]
         a6984:	e59d0000 	ldr	r0, [sp]
         a6988:	e5900000 	ldr	r0, [r0]
         a698c:	e3a01001 	mov	r1, #1	; 0x1
         a6990:	eb6c7e70 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a6994:	e1a0200d 	mov	r2, sp
         a6998:	e1a01006 	mov	r1, r6
         a699c:	e28d0004 	add	r0, sp, #4	; 0x4
         a69a0:	eb6c7e70 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a69a4:	e28d300c 	add	r3, sp, #12	; 0xc
         a69a8:	e28d201c 	add	r2, sp, #28	; 0x1c
         a69ac:	e28d1004 	add	r1, sp, #4	; 0x4
         a69b0:	e3a00000 	mov	r0, #0	; 0x0
         a69b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         a69b8:	e28d3024 	add	r3, sp, #36	; 0x24
         a69bc:	e92d0008 	stmdb	sp!, {r3}
         a69c0:	e28d3028 	add	r3, sp, #40	; 0x28
         a69c4:	e28d1034 	add	r1, sp, #52	; 0x34
         a69c8:	e1a00004 	mov	r0, r4
         a69cc:	e3a02001 	mov	r2, #1	; 0x1
         a69d0:	eb689720 	bl	1acc658 <TEditView::$AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)>
         a69d4:	e5bd0014 	ldr	r0, [sp, #20]!
         a69d8:	eb6c71f7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a69dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a69e0:	eb6c71f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a69e4:	e28dd008 	add	sp, sp, #8	; 0x8
         a69e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a69ec:	eb6c71f2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a69f0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a69f4:	eb6c71f0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a69f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         a69fc:	00682190 	streqb	r2, [r8], -#16	; fField16
         a6a00:	00684930 	rsbeq	r4, r8, r0, lsr r9
    */
}

/**
 * Symbol: TEditView::HandleInsertItems(RefVar const &)
 * Address: 000a6a04
 */
TEditView::HandleInsertItems(RefVar const &) {
    /*
         a6a04:	e1a0c00d 	mov	ip, sp
         a6a08:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a6a0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a6a10:	e1a04000 	mov	r4, r0
         a6a14:	e1a05001 	mov	r5, r1
         a6a18:	e3a01001 	mov	r1, #1	; 0x1
         a6a1c:	eb68b80a 	bl	1ad4a4c <TEditView::$ValidateCaret(unsigned char)>
         a6a20:	e59f7104 	ldr	r7, [pc, #104]	; a6b2c <TEditView::HandleInsertItems(RefVar const &)+0x128>
         a6a24:	e5970000 	ldr	r0, [r7]
         a6a28:	e5900068 	ldr	r0, [r0, #104]
         a6a2c:	e1300004 	teq	r0, r4
         a6a30:	13a00000 	movne	r0, #0	; 0x0
         a6a34:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         a6a38:	e24dd010 	sub	sp, sp, #16	; 0x10
         a6a3c:	e3a00000 	mov	r0, #0	; 0x0
         a6a40:	e5cd000d 	strb	r0, [sp, #13]
         a6a44:	e5cd000c 	strb	r0, [sp, #12]
         a6a48:	e58d0008 	str	r0, [sp, #8]	; fField8
         a6a4c:	e2840038 	add	r0, r4, #56	; 0x38
         a6a50:	e1a06000 	mov	r6, r0
         a6a54:	e8905000 	ldmia	r0, {ip, lr}
         a6a58:	e88d5000 	stmia	sp, {ip, lr}
         a6a5c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a6a60:	e1a01004 	mov	r1, r4
         a6a64:	e1a0000d 	mov	r0, sp
         a6a68:	eb0702a5 	bl	267504 <TView::ContentsOrigin(void)>
         a6a6c:	e28d0004 	add	r0, sp, #4	; 0x4
         a6a70:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a6a74:	e1a01841 	mov	r1, r1, asr #16
         a6a78:	e59d2000 	ldr	r2, [sp]
         a6a7c:	e1a02842 	mov	r2, r2, asr #16
         a6a80:	eb6aab98 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a6a84:	e24dd004 	sub	sp, sp, #4	; 0x4
         a6a88:	e3a08002 	mov	r8, #2	; 0x2
         a6a8c:	e1a00008 	mov	r0, r8
         a6a90:	eb6c6dad 	bl	1bc214c <$AllocateRefHandle(long)>
         a6a94:	e58d0000 	str	r0, [sp]
         a6a98:	e1a0300d 	mov	r3, sp
         a6a9c:	e28d2010 	add	r2, sp, #16	; 0x10
         a6aa0:	e92d000c 	stmdb	sp!, {r2, r3}
         a6aa4:	e1a00008 	mov	r0, r8
         a6aa8:	eb6c6da7 	bl	1bc214c <$AllocateRefHandle(long)>
         a6aac:	e58d000c 	str	r0, [sp, #12]
         a6ab0:	e28d300c 	add	r3, sp, #12	; 0xc
         a6ab4:	e3a02000 	mov	r2, #0	; 0x0
         a6ab8:	e28d1010 	add	r1, sp, #16	; 0x10
         a6abc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         a6ac0:	e28d301c 	add	r3, sp, #28	; 0x1c
         a6ac4:	e28d1028 	add	r1, sp, #40	; 0x28
         a6ac8:	e1a00004 	mov	r0, r4
         a6acc:	eb6896e1 	bl	1acc658 <TEditView::$AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)>
         a6ad0:	e1a04000 	mov	r4, r0
         a6ad4:	e5bd0014 	ldr	r0, [sp, #20]!
         a6ad8:	eb6c71b7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6adc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a6ae0:	eb6c71b5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6ae4:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
         a6ae8:	e2411501 	sub	r1, r1, #4194304	; 0x400000
         a6aec:	e5c61005 	strb	r1, [r6, #5]
         a6af0:	e3e0007f 	mvn	r0, #127	; 0x7f
         a6af4:	e5c60004 	strb	r0, [r6, #4]	; fField4
         a6af8:	e5c61001 	strb	r1, [r6, #1]
         a6afc:	e5c60000 	strb	r0, [r6]
         a6b00:	e3a03000 	mov	r3, #0	; 0x0
         a6b04:	e92d0008 	stmdb	sp!, {r3}
         a6b08:	e1a01004 	mov	r1, r4
         a6b0c:	e3a02000 	mov	r2, #0	; 0x0
         a6b10:	e5970000 	ldr	r0, [r7]
         a6b14:	eb68b3b2 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a6b18:	e28dd004 	add	sp, sp, #4	; 0x4
         a6b1c:	e1a01005 	mov	r1, r5
         a6b20:	e1a00004 	mov	r0, r4
         a6b24:	eb68ab58 	bl	1ad188c <TParagraphView::$HandleInsertItems(RefVar const &)>
         a6b28:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         a6b2c:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TEditView::PlaybackInk(RefVar const &)
 * Address: 000a6b30
 */
TEditView::PlaybackInk(RefVar const &) {
    /*
         a6b30:	e1a0c00d 	mov	ip, sp
         a6b34:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a6b38:	e24cb004 	sub	fp, ip, #4	; 0x4
         a6b3c:	e1a04000 	mov	r4, r0
         a6b40:	e1a07001 	mov	r7, r1
         a6b44:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         a6b48:	e59f01d4 	ldr	r0, [pc, #1d4]	; a6d24 <TEditView::PlaybackInk(RefVar const &)+0x1f4>
         a6b4c:	e1a08000 	mov	r8, r0
         a6b50:	eb67bfeb 	bl	1a96b04 <$GetPreference(RefVar const &)>
         a6b54:	eb6c6d7c 	bl	1bc214c <$AllocateRefHandle(long)>
         a6b58:	e58d0018 	str	r0, [sp, #24]
         a6b5c:	e59f01c4 	ldr	r0, [pc, #1c4]	; a6d28 <TEditView::PlaybackInk(RefVar const &)+0x1f8>
         a6b60:	e1a06000 	mov	r6, r0
         a6b64:	eb67bfe6 	bl	1a96b04 <$GetPreference(RefVar const &)>
         a6b68:	eb6c6d77 	bl	1bc214c <$AllocateRefHandle(long)>
         a6b6c:	e58d0014 	str	r0, [sp, #20]
         a6b70:	e59f01b4 	ldr	r0, [pc, #1b4]	; a6d2c <TEditView::PlaybackInk(RefVar const &)+0x1fc>
         a6b74:	e1a05000 	mov	r5, r0
         a6b78:	eb67bfe1 	bl	1a96b04 <$GetPreference(RefVar const &)>
         a6b7c:	eb6c6d72 	bl	1bc214c <$AllocateRefHandle(long)>
         a6b80:	e58d0010 	str	r0, [sp, #16]	; fField16
         a6b84:	e5970000 	ldr	r0, [r7]
         a6b88:	e5900000 	ldr	r0, [r0]
         a6b8c:	e3100003 	tst	r0, #3	; 0x3
         a6b90:	01a00140 	moveq	r0, r0, asr #2
         a6b94:	0a000000 	beq	a6b9c <TEditView::PlaybackInk(RefVar const &)+0x6c>
         a6b98:	eb6c6d5f 	bl	1bc211c <$_RINTError(long)>
         a6b9c:	e1b07000 	movs	r7, r0
         a6ba0:	13370002 	teqne	r7, #2	; 0x2
         a6ba4:	03a0001a 	moveq	r0, #26	; 0x1a
         a6ba8:	13a00002 	movne	r0, #2	; 0x2
         a6bac:	eb6c6d66 	bl	1bc214c <$AllocateRefHandle(long)>
         a6bb0:	e58d0000 	str	r0, [sp]
         a6bb4:	e1a0100d 	mov	r1, sp
         a6bb8:	e1a00008 	mov	r0, r8
         a6bbc:	eb67ed5c 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
         a6bc0:	e59d0000 	ldr	r0, [sp]
         a6bc4:	eb6c717c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6bc8:	e3370001 	teq	r7, #1	; 0x1
         a6bcc:	13370002 	teqne	r7, #2	; 0x2
         a6bd0:	03a0001a 	moveq	r0, #26	; 0x1a
         a6bd4:	13a00002 	movne	r0, #2	; 0x2
         a6bd8:	eb6c6d5b 	bl	1bc214c <$AllocateRefHandle(long)>
         a6bdc:	e58d0004 	str	r0, [sp, #4]	; fField4
         a6be0:	e28d1004 	add	r1, sp, #4	; 0x4
         a6be4:	e1a00006 	mov	r0, r6
         a6be8:	eb67ed51 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
         a6bec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a6bf0:	eb6c7171 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6bf4:	e3a07002 	mov	r7, #2	; 0x2
         a6bf8:	e1a00007 	mov	r0, r7
         a6bfc:	eb6c6d52 	bl	1bc214c <$AllocateRefHandle(long)>
         a6c00:	e58d0008 	str	r0, [sp, #8]	; fField8
         a6c04:	e28d1008 	add	r1, sp, #8	; 0x8
         a6c08:	e1a00005 	mov	r0, r5
         a6c0c:	eb67ed48 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
         a6c10:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a6c14:	eb6c7168 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6c18:	e1a00007 	mov	r0, r7
         a6c1c:	eb6c6d4a 	bl	1bc214c <$AllocateRefHandle(long)>
         a6c20:	e58d000c 	str	r0, [sp, #12]
         a6c24:	e28d000c 	add	r0, sp, #12	; 0xc
         a6c28:	eb67e0c9 	bl	1a9ef54 <$ReadDomainOptions>
         a6c2c:	e59d000c 	ldr	r0, [sp, #12]
         a6c30:	eb6c7161 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6c34:	e24dd010 	sub	sp, sp, #16	; 0x10
         a6c38:	e3a00002 	mov	r0, #2	; 0x2
         a6c3c:	eb6c6d42 	bl	1bc214c <$AllocateRefHandle(long)>
         a6c40:	e58d000c 	str	r0, [sp, #12]
         a6c44:	e1a0000d 	mov	r0, sp
         a6c48:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
         a6c4c:	eb6785f8 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a6c50:	e24dd004 	sub	sp, sp, #4	; 0x4
         a6c54:	e28d0004 	add	r0, sp, #4	; 0x4
         a6c58:	eb67d870 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6c5c:	e1b04000 	movs	r4, r0
         a6c60:	0a000014 	beq	a6cb8 <TEditView::PlaybackInk(RefVar const &)+0x188>
         a6c64:	e59f90c4 	ldr	r9, [pc, #c4]	; a6d30 <TEditView::PlaybackInk(RefVar const &)+0x200>
         a6c68:	e59fa0c4 	ldr	sl, [pc, #c4]	; a6d34 <TEditView::PlaybackInk(RefVar const &)+0x204>
         a6c6c:	e1a01009 	mov	r1, r9
         a6c70:	e1a00004 	mov	r0, r4
         a6c74:	eb6c8e33 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         a6c78:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         a6c7c:	e5810000 	str	r0, [r1]
         a6c80:	e3300002 	teq	r0, #2	; 0x2
         a6c84:	0a000007 	beq	a6ca8 <TEditView::PlaybackInk(RefVar const &)+0x178>
         a6c88:	e2840010 	add	r0, r4, #16	; 0x10
         a6c8c:	e5903000 	ldr	r3, [r0]
         a6c90:	e1a03843 	mov	r3, r3, asr #16
         a6c94:	e5902002 	ldr	r2, [r0, #2]	; fField2
         a6c98:	e1a02842 	mov	r2, r2, asr #16
         a6c9c:	e28d1010 	add	r1, sp, #16	; 0x10
         a6ca0:	e1a0000a 	mov	r0, sl
         a6ca4:	eb678a02 	bl	1a894b4 <StrokeCentral::$AddDeferredStroke(RefVar const &, long, long)>
         a6ca8:	e28d0004 	add	r0, sp, #4	; 0x4
         a6cac:	eb67d85b 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6cb0:	e1b04000 	movs	r4, r0
         a6cb4:	1affffec 	bne	a6c6c <TEditView::PlaybackInk(RefVar const &)+0x13c>
         a6cb8:	e28d102c 	add	r1, sp, #44	; 0x2c
         a6cbc:	e1a00008 	mov	r0, r8
         a6cc0:	eb67ed1b 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
         a6cc4:	e28d1028 	add	r1, sp, #40	; 0x28
         a6cc8:	e1a00006 	mov	r0, r6
         a6ccc:	eb67ed18 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
         a6cd0:	e28d1024 	add	r1, sp, #36	; 0x24
         a6cd4:	e1a00005 	mov	r0, r5
         a6cd8:	eb67ed15 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
         a6cdc:	e1a00007 	mov	r0, r7
         a6ce0:	eb6c6d19 	bl	1bc214c <$AllocateRefHandle(long)>
         a6ce4:	e58d0000 	str	r0, [sp]
         a6ce8:	e1a0000d 	mov	r0, sp
         a6cec:	eb67e098 	bl	1a9ef54 <$ReadDomainOptions>
         a6cf0:	e59d0000 	ldr	r0, [sp]
         a6cf4:	eb6c7130 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6cf8:	e28dd004 	add	sp, sp, #4	; 0x4
         a6cfc:	e59d000c 	ldr	r0, [sp, #12]
         a6d00:	eb6c712d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6d04:	e28dd010 	add	sp, sp, #16	; 0x10
         a6d08:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a6d0c:	eb6c712a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6d10:	e59d0014 	ldr	r0, [sp, #20]
         a6d14:	eb6c7128 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6d18:	e59d0018 	ldr	r0, [sp, #24]
         a6d1c:	eb6c7126 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6d20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a6d24:	00682a68 	rsbeq	r2, r8, r8, ror #20
         a6d28:	00682a60 	rsbeq	r2, r8, r0, ror #20
         a6d2c:	00682a18 	rsbeq	r2, r8, r8, lsl sl
         a6d30:	00683220 	rsbeq	r3, r8, r0, lsr #4
         a6d34:	0c1018cc 	ldceq	8, cr1, [r0], -#816
    */
}

/**
 * Symbol: TEditView::Scrub(TUnitPublic *)
 * Address: 000a6d38
 */
TEditView::Scrub(TUnitPublic *) {
    /*
         a6d38:	e1a0c00d 	mov	ip, sp
         a6d3c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a6d40:	e24cb004 	sub	fp, ip, #4	; 0x4
         a6d44:	e1a04000 	mov	r4, r0
         a6d48:	e1a05001 	mov	r5, r1
         a6d4c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a6d50:	e59f8224 	ldr	r8, [pc, #224]	; a6f7c <TEditView::Scrub(TUnitPublic *)+0x244>
         a6d54:	e3a01001 	mov	r1, #1	; 0x1
         a6d58:	e5980000 	ldr	r0, [r8]
         a6d5c:	eb68b322 	bl	1ad39ec <TRootView::$SetPreserveHilites(unsigned char)>
         a6d60:	e58d0008 	str	r0, [sp, #8]	; fField8
         a6d64:	e1a0100d 	mov	r1, sp
         a6d68:	e1a00005 	mov	r0, r5
         a6d6c:	eb678dff 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
         a6d70:	e1a0100d 	mov	r1, sp
         a6d74:	e1a00004 	mov	r0, r4
         a6d78:	eb67e8d8 	bl	1aa10e0 <TEditView::$ScrubHilite(TRect const &)>
         a6d7c:	e1b09000 	movs	r9, r0
         a6d80:	1a00005a 	bne	a6ef0 <TEditView::Scrub(TUnitPublic *)+0x1b8>
         a6d84:	e3a06000 	mov	r6, #0	; 0x0
         a6d88:	eb0b8f76 	bl	38ab68 <C$$dtorvec$$Limit+0x1f4>
         a6d8c:	e1a07000 	mov	r7, r0
         a6d90:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a6d94:	e1a0000d 	mov	r0, sp
         a6d98:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a6d9c:	eb6785a4 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a6da0:	e1a0000d 	mov	r0, sp
         a6da4:	eb67d81d 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6da8:	e1b0a000 	movs	sl, r0
         a6dac:	0a000015 	beq	a6e08 <TEditView::Scrub(TUnitPublic *)+0xd0>
         a6db0:	e3a03000 	mov	r3, #0	; 0x0
         a6db4:	e92d0008 	stmdb	sp!, {r3}
         a6db8:	e1a03005 	mov	r3, r5
         a6dbc:	e28d1010 	add	r1, sp, #16	; 0x10
         a6dc0:	e1a0000a 	mov	r0, sl
         a6dc4:	e3e02000 	mvn	r2, #0	; 0x0
         a6dc8:	e59ac000 	ldr	ip, [sl]
         a6dcc:	e1a0e00f 	mov	lr, pc
         a6dd0:	e28cf090 	add	pc, ip, #144	; 0x90
         a6dd4:	e28dd004 	add	sp, sp, #4	; 0x4
         a6dd8:	e1560000 	cmp	r6, r0
         a6ddc:	d1a06000 	movle	r6, r0
         a6de0:	e3300000 	teq	r0, #0	; 0x0
         a6de4:	0a000003 	beq	a6df8 <TEditView::Scrub(TUnitPublic *)+0xc0>
         a6de8:	e1a0200a 	mov	r2, sl
         a6dec:	e5971000 	ldr	r1, [r7]
         a6df0:	e1a00007 	mov	r0, r7
         a6df4:	eb6d09bc 	bl	1be94ec <CList::$InsertAt(long, void *)>
         a6df8:	e1a0000d 	mov	r0, sp
         a6dfc:	eb67d807 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6e00:	e1b0a000 	movs	sl, r0
         a6e04:	1affffe9 	bne	a6db0 <TEditView::Scrub(TUnitPublic *)+0x78>
         a6e08:	e28dd00c 	add	sp, sp, #12	; 0xc
         a6e0c:	e3360000 	teq	r6, #0	; 0x0
         a6e10:	0a000036 	beq	a6ef0 <TEditView::Scrub(TUnitPublic *)+0x1b8>
         a6e14:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a6e18:	e2560005 	subs	r0, r6, #5	; 0x5
         a6e1c:	13a00001 	movne	r0, #1	; 0x1
         a6e20:	e20090ff 	and	r9, r0, #255	; 0xff
         a6e24:	e1a01007 	mov	r1, r7
         a6e28:	e1a0000d 	mov	r0, sp
         a6e2c:	eb678580 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a6e30:	e1a0000d 	mov	r0, sp
         a6e34:	eb67d7f9 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6e38:	e1b07000 	movs	r7, r0
         a6e3c:	0a000029 	beq	a6ee8 <TEditView::Scrub(TUnitPublic *)+0x1b0>
         a6e40:	e59fa138 	ldr	sl, [pc, #138]	; a6f80 <TEditView::Scrub(TUnitPublic *)+0x248>
         a6e44:	e1a01007 	mov	r1, r7
         a6e48:	e5940020 	ldr	r0, [r4, #32]	; fField32
         a6e4c:	eb6d0578 	bl	1be8434 <CList::$GetIdentityIndex(void *)>
         a6e50:	e3700001 	cmn	r0, #1	; 0x1
         a6e54:	0a00001f 	beq	a6ed8 <TEditView::Scrub(TUnitPublic *)+0x1a0>
         a6e58:	e1a03009 	mov	r3, r9
         a6e5c:	e92d0008 	stmdb	sp!, {r3}
         a6e60:	e1a03005 	mov	r3, r5
         a6e64:	e1a02006 	mov	r2, r6
         a6e68:	e28d1010 	add	r1, sp, #16	; 0x10
         a6e6c:	e1a00007 	mov	r0, r7
         a6e70:	e597c000 	ldr	ip, [r7]
         a6e74:	e1a0e00f 	mov	lr, pc
         a6e78:	e28cf090 	add	pc, ip, #144	; 0x90
         a6e7c:	e28dd004 	add	sp, sp, #4	; 0x4
         a6e80:	e3300005 	teq	r0, #5	; 0x5
         a6e84:	1a000013 	bne	a6ed8 <TEditView::Scrub(TUnitPublic *)+0x1a0>
         a6e88:	e1a00004 	mov	r0, r4
         a6e8c:	e5941000 	ldr	r1, [r4]
         a6e90:	e1a0e00f 	mov	lr, pc
         a6e94:	e281f020 	add	pc, r1, #32	; 0x20
         a6e98:	e3100080 	tst	r0, #128	; 0x80
         a6e9c:	1a000039 	bne	a6f88 <TEditView::Scrub(TUnitPublic *)+0x250>
         a6ea0:	e5b72004 	ldr	r2, [r7, #4]!	; fField4
         a6ea4:	e24dd004 	sub	sp, sp, #4	; 0x4
         a6ea8:	e1a01004 	mov	r1, r4
         a6eac:	e3a0003f 	mov	r0, #63	; 0x3f
         a6eb0:	e59a7000 	ldr	r7, [sl]
         a6eb4:	eb67fd21 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a6eb8:	eb6c6ca3 	bl	1bc214c <$AllocateRefHandle(long)>
         a6ebc:	e58d0000 	str	r0, [sp]
         a6ec0:	e1a0100d 	mov	r1, sp
         a6ec4:	e1a00007 	mov	r0, r7
         a6ec8:	eb67a65a 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a6ecc:	e59d0000 	ldr	r0, [sp]
         a6ed0:	eb6c70b9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a6ed4:	e28dd004 	add	sp, sp, #4	; 0x4
         a6ed8:	e1a0000d 	mov	r0, sp
         a6edc:	eb67d7cf 	bl	1a9ce20 <TListLoop::$Next(void)>
         a6ee0:	e1b07000 	movs	r7, r0
         a6ee4:	1affffd6 	bne	a6e44 <TEditView::Scrub(TUnitPublic *)+0x10c>
         a6ee8:	e3a09001 	mov	r9, #1	; 0x1
         a6eec:	e28dd00c 	add	sp, sp, #12	; 0xc
         a6ef0:	e3390000 	teq	r9, #0	; 0x0
         a6ef4:	0a00001b 	beq	a6f68 <TEditView::Scrub(TUnitPublic *)+0x230>
         a6ef8:	e3a01001 	mov	r1, #1	; 0x1
         a6efc:	e5980000 	ldr	r0, [r8]
         a6f00:	e5c0105c 	strb	r1, [r0, #92]	; fField92
         a6f04:	e1a00005 	mov	r0, r5
         a6f08:	eb67f0b8 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
         a6f0c:	e3a01000 	mov	r1, #0	; 0x0
         a6f10:	eb67cb79 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
         a6f14:	e24dd0bc 	sub	sp, sp, #188	; 0xbc
         a6f18:	e1a0000d 	mov	r0, sp
         a6f1c:	eb678542 	bl	1a8842c <TAnimate::$__ct(void)>
         a6f20:	e28d00bc 	add	r0, sp, #188	; 0xbc
         a6f24:	eb061bc0 	bl	22de2c <AdjustForInk(TRect *)>
         a6f28:	e28d10bc 	add	r1, sp, #188	; 0xbc
         a6f2c:	e1a00004 	mov	r0, r4
         a6f30:	e5942000 	ldr	r2, [r4]
         a6f34:	e1a0e00f 	mov	lr, pc
         a6f38:	e282f054 	add	pc, r2, #84	; 0x54
         a6f3c:	e28d20bc 	add	r2, sp, #188	; 0xbc
         a6f40:	e1a01004 	mov	r1, r4
         a6f44:	e1a0000d 	mov	r0, sp
         a6f48:	eb67ec87 	bl	1aa216c <TAnimate::$SetupPoofEffect(TView *, TRect const &)>
         a6f4c:	e59f1030 	ldr	r1, [pc, #30]	; a6f84 <TEditView::Scrub(TUnitPublic *)+0x24c>
         a6f50:	e1a0000d 	mov	r0, sp
         a6f54:	eb67a645 	bl	1a90870 <TAnimate::$DoEffect(RefVar const &)>
         a6f58:	e1a0000d 	mov	r0, sp
         a6f5c:	e3a01000 	mov	r1, #0	; 0x0
         a6f60:	ebfe6ef3 	bl	42b34 <TAnimate::__dt(void)>
         a6f64:	e28dd0bc 	add	sp, sp, #188	; 0xbc
         a6f68:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         a6f6c:	e5980000 	ldr	r0, [r8]
         a6f70:	eb68b29d 	bl	1ad39ec <TRootView::$SetPreserveHilites(unsigned char)>
         a6f74:	e1a00009 	mov	r0, r9
         a6f78:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a6f7c:	0c101934 	ldceq	9, cr1, [r0], -#208
         a6f80:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         a6f84:	00680628 	rsbeq	r0, r8, r8, lsr #12
         a6f88:	e3a03001 	mov	r3, #1	; 0x1
         a6f8c:	e92d0008 	stmdb	sp!, {r3}
         a6f90:	e1a03005 	mov	r3, r5
         a6f94:	e28d1010 	add	r1, sp, #16	; 0x10
         a6f98:	e1a00007 	mov	r0, r7
         a6f9c:	e3a02005 	mov	r2, #5	; 0x5
         a6fa0:	e597c000 	ldr	ip, [r7]
         a6fa4:	e1a0e00f 	mov	lr, pc
         a6fa8:	e28cf090 	add	pc, ip, #144	; 0x90
         a6fac:	eaffffc8 	b	a6ed4 <TEditView::Scrub(TUnitPublic *)+0x19c>
    */
}

/**
 * Symbol: TEditView::AddHiliter(TUnitPublic *)
 * Address: 000a6fb0
 */
TEditView::AddHiliter(TUnitPublic *) {
    /*
         a6fb0:	e1a0c00d 	mov	ip, sp
         a6fb4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a6fb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         a6fbc:	e1a04000 	mov	r4, r0
         a6fc0:	e1a05001 	mov	r5, r1
         a6fc4:	e24dd008 	sub	sp, sp, #8	; 0x8
         a6fc8:	e3a06000 	mov	r6, #0	; 0x0
         a6fcc:	e1a0100d 	mov	r1, sp
         a6fd0:	e1a00005 	mov	r0, r5
         a6fd4:	eb678d65 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
         a6fd8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a6fdc:	e59d0000 	ldr	r0, [sp]
         a6fe0:	e0410000 	sub	r0, r1, r0
         a6fe4:	e1a00800 	mov	r0, r0, lsl #16
         a6fe8:	e3500706 	cmp	r0, #1572864	; 0x180000
         a6fec:	da00002d 	ble	a70a8 <TEditView::AddHiliter(TUnitPublic *)+0xf8>
         a6ff0:	e59d0006 	ldr	r0, [sp, #6]	; fField6
         a6ff4:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a6ff8:	e0400001 	sub	r0, r0, r1
         a6ffc:	e1a00800 	mov	r0, r0, lsl #16
         a7000:	e3500601 	cmp	r0, #1048576	; 0x100000
         a7004:	da000027 	ble	a70a8 <TEditView::AddHiliter(TUnitPublic *)+0xf8>
         a7008:	e1a00005 	mov	r0, r5
         a700c:	eb67f077 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
         a7010:	e1a08000 	mov	r8, r0
         a7014:	e3a0900f 	mov	r9, #15	; 0xf
         a7018:	e2899c27 	add	r9, r9, #9984	; 0x2700
         a701c:	e3a0a000 	mov	sl, #0	; 0x0
         a7020:	e3a07004 	mov	r7, #4	; 0x4
         a7024:	eb67f05d 	bl	1aa31a0 <TStrokePublic::$Size(void)>
         a7028:	e3500004 	cmp	r0, #4	; 0x4
         a702c:	9a00001b 	bls	a70a0 <TEditView::AddHiliter(TUnitPublic *)+0xf0>
         a7030:	e24dd008 	sub	sp, sp, #8	; 0x8
         a7034:	e1a02007 	mov	r2, r7
         a7038:	e1a01008 	mov	r1, r8
         a703c:	e28d0004 	add	r0, sp, #4	; 0x4
         a7040:	eb67beae 	bl	1a96b00 <TStrokePublic::$GetPoint(long)>
         a7044:	e28d6004 	add	r6, sp, #4	; 0x4
         a7048:	e1a01008 	mov	r1, r8
         a704c:	e1a0000d 	mov	r0, sp
         a7050:	eb67b67a 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
         a7054:	e1a0000d 	mov	r0, sp
         a7058:	e1a01006 	mov	r1, r6
         a705c:	eb03c858 	bl	1991c4 <CheapDistance__FRC6TPointT1>
         a7060:	e28dd008 	add	sp, sp, #8	; 0x8
         a7064:	e3500014 	cmp	r0, #20	; 0x14
         a7068:	c3a0a001 	movgt	sl, #1	; 0x1
         a706c:	ca000001 	bgt	a7078 <TEditView::AddHiliter(TUnitPublic *)+0xc8>
         a7070:	e33a0000 	teq	sl, #0	; 0x0
         a7074:	0a000001 	beq	a7080 <TEditView::AddHiliter(TUnitPublic *)+0xd0>
         a7078:	e1500009 	cmp	r0, r9
         a707c:	b1a09000 	movlt	r9, r0
         a7080:	e2877001 	add	r7, r7, #1	; 0x1
         a7084:	e1a00008 	mov	r0, r8
         a7088:	eb67f044 	bl	1aa31a0 <TStrokePublic::$Size(void)>
         a708c:	e1500007 	cmp	r0, r7
         a7090:	8affffe6 	bhi	a7030 <TEditView::AddHiliter(TUnitPublic *)+0x80>
         a7094:	e3590014 	cmp	r9, #20	; 0x14
         a7098:	b3a00001 	movlt	r0, #1	; 0x1
         a709c:	ba000000 	blt	a70a4 <TEditView::AddHiliter(TUnitPublic *)+0xf4>
         a70a0:	e3a00000 	mov	r0, #0	; 0x0
         a70a4:	e20060ff 	and	r6, r0, #255	; 0xff
         a70a8:	e24dd004 	sub	sp, sp, #4	; 0x4
         a70ac:	e3a07000 	mov	r7, #0	; 0x0
         a70b0:	e3360000 	teq	r6, #0	; 0x0
         a70b4:	0a000010 	beq	a70fc <TEditView::AddHiliter(TUnitPublic *)+0x14c>
         a70b8:	e3a07001 	mov	r7, #1	; 0x1
         a70bc:	e2840024 	add	r0, r4, #36	; 0x24
         a70c0:	e59f1068 	ldr	r1, [pc, #68]	; a7130 <TEditView::AddHiliter(TUnitPublic *)+0x180>
         a70c4:	e3a03000 	mov	r3, #0	; 0x0
         a70c8:	e3a02000 	mov	r2, #0	; 0x0
         a70cc:	eb6c7468 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         a70d0:	eb6c6c1d 	bl	1bc214c <$AllocateRefHandle(long)>
         a70d4:	e58d0000 	str	r0, [sp]
         a70d8:	e59f0054 	ldr	r0, [pc, #54]	; a7134 <TEditView::AddHiliter(TUnitPublic *)+0x184>
         a70dc:	e5900000 	ldr	r0, [r0]
         a70e0:	e5901000 	ldr	r1, [r0]
         a70e4:	e59d0000 	ldr	r0, [sp]
         a70e8:	e5900000 	ldr	r0, [r0]
         a70ec:	eb6c744f 	bl	1bc4230 <$EQRef__FlT1>
         a70f0:	e3300000 	teq	r0, #0	; 0x0
         a70f4:	13a08001 	movne	r8, #1	; 0x1
         a70f8:	1a000000 	bne	a7100 <TEditView::AddHiliter(TUnitPublic *)+0x150>
         a70fc:	e3a08000 	mov	r8, #0	; 0x0
         a7100:	e3370000 	teq	r7, #0	; 0x0
         a7104:	159d0000 	ldrne	r0, [sp]
         a7108:	1b6c702b 	blne	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a710c:	e3a09001 	mov	r9, #1	; 0x1
         a7110:	e3380000 	teq	r8, #0	; 0x0
         a7114:	0a000007 	beq	a7138 <TEditView::AddHiliter(TUnitPublic *)+0x188>
         a7118:	e1a00004 	mov	r0, r4
         a711c:	e3a01000 	mov	r1, #0	; 0x0
         a7120:	e5942000 	ldr	r2, [r4]
         a7124:	e1a0e00f 	mov	lr, pc
         a7128:	e282f054 	add	pc, r2, #84	; 0x54
         a712c:	ea000093 	b	a7380 <TEditView::AddHiliter(TUnitPublic *)+0x3d0>
         a7130:	00681ed8 	ldreqd	r1, [r8], -#232
         a7134:	00682278 	rsbeq	r2, r8, r8, ror r2
         a7138:	e3a08000 	mov	r8, #0	; 0x0
         a713c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a7140:	e1a0000d 	mov	r0, sp
         a7144:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a7148:	eb6784b9 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a714c:	e1a0000d 	mov	r0, sp
         a7150:	eb67d732 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7154:	e59fa16c 	ldr	sl, [pc, #16c]	; a72c8 <TEditView::AddHiliter(TUnitPublic *)+0x318>	; fField16
         a7158:	e3300000 	teq	r0, #0	; 0x0
         a715c:	0a00000a 	beq	a718c <TEditView::AddHiliter(TUnitPublic *)+0x1dc>
         a7160:	e59a1000 	ldr	r1, [sl]
         a7164:	e5911000 	ldr	r1, [r1]
         a7168:	e5900024 	ldr	r0, [r0, #36]	; fField36
         a716c:	e5900000 	ldr	r0, [r0]
         a7170:	eb6c743a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a7174:	e3300002 	teq	r0, #2	; 0x2
         a7178:	12888001 	addne	r8, r8, #1	; 0x1
         a717c:	e1a0000d 	mov	r0, sp
         a7180:	eb67d726 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7184:	e3300000 	teq	r0, #0	; 0x0
         a7188:	1afffff4 	bne	a7160 <TEditView::AddHiliter(TUnitPublic *)+0x1b0>
         a718c:	e3a07000 	mov	r7, #0	; 0x0
         a7190:	e1a0000d 	mov	r0, sp
         a7194:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a7198:	eb6784a5 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a719c:	e1a0000d 	mov	r0, sp
         a71a0:	eb67d71e 	bl	1a9ce20 <TListLoop::$Next(void)>
         a71a4:	e3300000 	teq	r0, #0	; 0x0
         a71a8:	0a000010 	beq	a71f0 <TEditView::AddHiliter(TUnitPublic *)+0x240>
         a71ac:	e1a0c000 	mov	ip, r0
         a71b0:	e3360000 	teq	r6, #0	; 0x0
         a71b4:	03e02000 	mvneq	r2, #0	; 0x0
         a71b8:	13a02001 	movne	r2, #1	; 0x1
         a71bc:	e1a01005 	mov	r1, r5
         a71c0:	e1a0000c 	mov	r0, ip
         a71c4:	e3a03000 	mov	r3, #0	; 0x0
         a71c8:	e59cc000 	ldr	ip, [ip]
         a71cc:	e1a0e00f 	mov	lr, pc
         a71d0:	e28cf08c 	add	pc, ip, #140	; 0x8c
         a71d4:	e1570000 	cmp	r7, r0
         a71d8:	c1a00007 	movgt	r0, r7
         a71dc:	e1a07000 	mov	r7, r0
         a71e0:	e1a0000d 	mov	r0, sp
         a71e4:	eb67d70d 	bl	1a9ce20 <TListLoop::$Next(void)>
         a71e8:	e3300000 	teq	r0, #0	; 0x0
         a71ec:	1affffee 	bne	a71ac <TEditView::AddHiliter(TUnitPublic *)+0x1fc>
         a71f0:	e28dd00c 	add	sp, sp, #12	; 0xc
         a71f4:	e5c4904c 	strb	r9, [r4, #76]	; fField76
         a71f8:	e3370000 	teq	r7, #0	; 0x0
         a71fc:	0a000012 	beq	a724c <TEditView::AddHiliter(TUnitPublic *)+0x29c>
         a7200:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a7204:	e1a0000d 	mov	r0, sp
         a7208:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a720c:	eb678488 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a7210:	e1a0000d 	mov	r0, sp
         a7214:	eb67d701 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7218:	e3300000 	teq	r0, #0	; 0x0
         a721c:	0a000009 	beq	a7248 <TEditView::AddHiliter(TUnitPublic *)+0x298>
         a7220:	e1a02007 	mov	r2, r7
         a7224:	e1a01005 	mov	r1, r5
         a7228:	e3a03001 	mov	r3, #1	; 0x1
         a722c:	e590c000 	ldr	ip, [r0]
         a7230:	e1a0e00f 	mov	lr, pc
         a7234:	e28cf08c 	add	pc, ip, #140	; 0x8c
         a7238:	e1a0000d 	mov	r0, sp
         a723c:	eb67d6f7 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7240:	e3300000 	teq	r0, #0	; 0x0
         a7244:	1afffff5 	bne	a7220 <TEditView::AddHiliter(TUnitPublic *)+0x270>
         a7248:	e28dd00c 	add	sp, sp, #12	; 0xc
         a724c:	e3a00000 	mov	r0, #0	; 0x0
         a7250:	e5c4004c 	strb	r0, [r4, #76]	; fField76
         a7254:	e1a00004 	mov	r0, r4
         a7258:	eb6814ea 	bl	1aac608 <TEditView::$DetermineKeyView(void)>
         a725c:	e3a05000 	mov	r5, #0	; 0x0
         a7260:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a7264:	e1a0000d 	mov	r0, sp
         a7268:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a726c:	eb678470 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a7270:	e1a0000d 	mov	r0, sp
         a7274:	eb67d6e9 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7278:	e3300000 	teq	r0, #0	; 0x0
         a727c:	0a00000a 	beq	a72ac <TEditView::AddHiliter(TUnitPublic *)+0x2fc>
         a7280:	e59a1000 	ldr	r1, [sl]
         a7284:	e5911000 	ldr	r1, [r1]
         a7288:	e5900024 	ldr	r0, [r0, #36]	; fField36
         a728c:	e5900000 	ldr	r0, [r0]
         a7290:	eb6c73f2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a7294:	e3300002 	teq	r0, #2	; 0x2
         a7298:	12855001 	addne	r5, r5, #1	; 0x1
         a729c:	e1a0000d 	mov	r0, sp
         a72a0:	eb67d6de 	bl	1a9ce20 <TListLoop::$Next(void)>
         a72a4:	e3300000 	teq	r0, #0	; 0x0
         a72a8:	1afffff4 	bne	a7280 <TEditView::AddHiliter(TUnitPublic *)+0x2d0>
         a72ac:	e28dd00c 	add	sp, sp, #12	; 0xc
         a72b0:	e3360000 	teq	r6, #0	; 0x0
         a72b4:	1a000001 	bne	a72c0 <TEditView::AddHiliter(TUnitPublic *)+0x310>
         a72b8:	e3550001 	cmp	r5, #1	; 0x1
         a72bc:	da000002 	ble	a72cc <TEditView::AddHiliter(TUnitPublic *)+0x31c>
         a72c0:	e3a00001 	mov	r0, #1	; 0x1
         a72c4:	ea000001 	b	a72d0 <TEditView::AddHiliter(TUnitPublic *)+0x320>
         a72c8:	00683110 	rsbeq	r3, r8, r0, lsl r1
         a72cc:	e3a00000 	mov	r0, #0	; 0x0
         a72d0:	e31000ff 	tst	r0, #255	; 0xff
         a72d4:	e3e06002 	mvn	r6, #2	; 0x2
         a72d8:	e3a079fe 	mov	r7, #4161536	; 0x3f8000
         a72dc:	e2477501 	sub	r7, r7, #4194304	; 0x400000
         a72e0:	e3e0507f 	mvn	r5, #127	; 0x7f
         a72e4:	0a00000f 	beq	a7328 <TEditView::AddHiliter(TUnitPublic *)+0x378>
         a72e8:	e3e00000 	mvn	r0, #0	; 0x0
         a72ec:	e5840034 	str	r0, [r4, #52]	; fField52
         a72f0:	e24dd008 	sub	sp, sp, #8	; 0x8
         a72f4:	e5cd7005 	strb	r7, [sp, #5]
         a72f8:	e5cd5004 	strb	r5, [sp, #4]	; fField4
         a72fc:	e5cd7001 	strb	r7, [sp, #1]
         a7300:	e5cd5000 	strb	r5, [sp]
         a7304:	e1a0100d 	mov	r1, sp
         a7308:	e1a00004 	mov	r0, r4
         a730c:	e5942000 	ldr	r2, [r4]
         a7310:	e1a0e00f 	mov	lr, pc
         a7314:	e282f0b0 	add	pc, r2, #176	; 0xb0
         a7318:	e3100002 	tst	r0, #2	; 0x2
         a731c:	05846034 	streq	r6, [r4, #52]	; fField52
         a7320:	e28dd008 	add	sp, sp, #8	; 0x8
         a7324:	ea000002 	b	a7334 <TEditView::AddHiliter(TUnitPublic *)+0x384>
         a7328:	e3380000 	teq	r8, #0	; 0x0
         a732c:	e5846034 	str	r6, [r4, #52]	; fField52
         a7330:	0a000012 	beq	a7380 <TEditView::AddHiliter(TUnitPublic *)+0x3d0>
         a7334:	e24dd008 	sub	sp, sp, #8	; 0x8
         a7338:	e5cd7005 	strb	r7, [sp, #5]
         a733c:	e5cd5004 	strb	r5, [sp, #4]	; fField4
         a7340:	e5cd7001 	strb	r7, [sp, #1]
         a7344:	e5cd5000 	strb	r5, [sp]
         a7348:	e1a0100d 	mov	r1, sp
         a734c:	e1a00004 	mov	r0, r4
         a7350:	e5942000 	ldr	r2, [r4]
         a7354:	e1a0e00f 	mov	lr, pc
         a7358:	e282f0b4 	add	pc, r2, #180	; 0xb4
         a735c:	e2841010 	add	r1, r4, #16	; 0x10
         a7360:	e1a0000d 	mov	r0, sp
         a7364:	eb67f3b5 	bl	1aa4240 <$ToOutsideGrayBorder(TRect *, TRect const *)>
         a7368:	e1a0100d 	mov	r1, sp
         a736c:	e1a00004 	mov	r0, r4
         a7370:	e5942000 	ldr	r2, [r4]
         a7374:	e1a0e00f 	mov	lr, pc
         a7378:	e282f054 	add	pc, r2, #84	; 0x54
         a737c:	e28dd008 	add	sp, sp, #8	; 0x8
         a7380:	e1a00009 	mov	r0, r9
         a7384:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::DetermineKeyView(void)
 * Address: 000a7388
 */
TEditView::DetermineKeyView(void) {
    /*
         a7388:	e1a0c00d 	mov	ip, sp
         a738c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a7390:	e24cb004 	sub	fp, ip, #4	; 0x4
         a7394:	e1a04000 	mov	r4, r0
         a7398:	e3a05000 	mov	r5, #0	; 0x0
         a739c:	e3a07000 	mov	r7, #0	; 0x0
         a73a0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a73a4:	e5901020 	ldr	r1, [r0, #32]	; fField32
         a73a8:	e1a0000d 	mov	r0, sp
         a73ac:	eb678420 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a73b0:	e1a0000d 	mov	r0, sp
         a73b4:	eb67d699 	bl	1a9ce20 <TListLoop::$Next(void)>
         a73b8:	e1b06000 	movs	r6, r0
         a73bc:	0a000021 	beq	a7448 <TEditView::DetermineKeyView(void)+0xc0>
         a73c0:	e59f8108 	ldr	r8, [pc, #108]	; a74d0 <TEditView::DetermineKeyView(void)+0x148>
         a73c4:	e5981000 	ldr	r1, [r8]
         a73c8:	e5911000 	ldr	r1, [r1]
         a73cc:	e5960024 	ldr	r0, [r6, #36]	; fField36
         a73d0:	e5900000 	ldr	r0, [r0]
         a73d4:	eb6c73a1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a73d8:	e3300002 	teq	r0, #2	; 0x2
         a73dc:	0a000015 	beq	a7438 <TEditView::DetermineKeyView(void)+0xb0>
         a73e0:	e2877001 	add	r7, r7, #1	; 0x1
         a73e4:	e1a00006 	mov	r0, r6
         a73e8:	e3a01053 	mov	r1, #83	; 0x53
         a73ec:	e5962000 	ldr	r2, [r6]
         a73f0:	e1a0e00f 	mov	lr, pc
         a73f4:	e282f004 	add	pc, r2, #4	; 0x4
         a73f8:	e3300000 	teq	r0, #0	; 0x0
         a73fc:	0a00000d 	beq	a7438 <TEditView::DetermineKeyView(void)+0xb0>
         a7400:	e1a00006 	mov	r0, r6
         a7404:	e5961000 	ldr	r1, [r6]
         a7408:	e1a0e00f 	mov	lr, pc
         a740c:	e281ff51 	add	pc, r1, #324	; 0x144
         a7410:	e1a06000 	mov	r6, r0
         a7414:	e3350000 	teq	r5, #0	; 0x0
         a7418:	1a000006 	bne	a7438 <TEditView::DetermineKeyView(void)+0xb0>
         a741c:	e1a00006 	mov	r0, r6
         a7420:	e3a01051 	mov	r1, #81	; 0x51
         a7424:	e5962000 	ldr	r2, [r6]
         a7428:	e1a0e00f 	mov	lr, pc
         a742c:	e282f004 	add	pc, r2, #4	; 0x4
         a7430:	e3300000 	teq	r0, #0	; 0x0
         a7434:	11a05006 	movne	r5, r6
         a7438:	e1a0000d 	mov	r0, sp
         a743c:	eb67d677 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7440:	e1b06000 	movs	r6, r0
         a7444:	1affffde 	bne	a73c4 <TEditView::DetermineKeyView(void)+0x3c>
         a7448:	e28dd00c 	add	sp, sp, #12	; 0xc
         a744c:	e59f6080 	ldr	r6, [pc, #80]	; a74d4 <TEditView::DetermineKeyView(void)+0x14c>
         a7450:	e3370001 	teq	r7, #1	; 0x1
         a7454:	1a000015 	bne	a74b0 <TEditView::DetermineKeyView(void)+0x128>
         a7458:	e3350000 	teq	r5, #0	; 0x0
         a745c:	0a000013 	beq	a74b0 <TEditView::DetermineKeyView(void)+0x128>
         a7460:	e1a00005 	mov	r0, r5
         a7464:	eb68291b 	bl	1ab18d8 <TView::$FirstHilite(void)>
         a7468:	eb6c6b37 	bl	1bc214c <$AllocateRefHandle(long)>
         a746c:	e1a04000 	mov	r4, r0
         a7470:	e5900000 	ldr	r0, [r0]
         a7474:	e3300002 	teq	r0, #2	; 0x2
         a7478:	0a000009 	beq	a74a4 <TEditView::DetermineKeyView(void)+0x11c>
         a747c:	eb67e2d7 	bl	1a9ffe0 <$RefToAddress(long)>
         a7480:	e3a03000 	mov	r3, #0	; 0x0
         a7484:	e92d0008 	stmdb	sp!, {r3}
         a7488:	e5b0200c 	ldr	r2, [r0, #12]!
         a748c:	e5901004 	ldr	r1, [r0, #4]	; fField4
         a7490:	e0413002 	sub	r3, r1, r2
         a7494:	e1a01005 	mov	r1, r5
         a7498:	e5960000 	ldr	r0, [r6]
         a749c:	eb68b150 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a74a0:	e28dd004 	add	sp, sp, #4	; 0x4
         a74a4:	e1a00004 	mov	r0, r4
         a74a8:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         a74ac:	ea6c6f42 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a74b0:	e3a03000 	mov	r3, #0	; 0x0
         a74b4:	e92d0008 	stmdb	sp!, {r3}
         a74b8:	e1a03007 	mov	r3, r7
         a74bc:	e1a01004 	mov	r1, r4
         a74c0:	e3a02000 	mov	r2, #0	; 0x0
         a74c4:	e5960000 	ldr	r0, [r6]
         a74c8:	eb68b145 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a74cc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         a74d0:	00683110 	rsbeq	r3, r8, r0, lsl r1
         a74d4:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TEditView::HiliteAll(void)
 * Address: 000a751c
 */
TEditView::HiliteAll(void) {
    /*
         a751c:	e1a0c00d 	mov	ip, sp
         a7520:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a7524:	e24cb004 	sub	fp, ip, #4	; 0x4
         a7528:	e1a04000 	mov	r4, r0
         a752c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a7530:	e5901020 	ldr	r1, [r0, #32]	; fField32
         a7534:	e1a0000d 	mov	r0, sp
         a7538:	eb6783bd 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a753c:	e1a0000d 	mov	r0, sp
         a7540:	eb67d636 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7544:	e3300000 	teq	r0, #0	; 0x0
         a7548:	0a000006 	beq	a7568 <TEditView::HiliteAll(void)+0x4c>
         a754c:	e5901000 	ldr	r1, [r0]
         a7550:	e1a0e00f 	mov	lr, pc
         a7554:	e281f0a0 	add	pc, r1, #160	; 0xa0
         a7558:	e1a0000d 	mov	r0, sp
         a755c:	eb67d62f 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7560:	e3300000 	teq	r0, #0	; 0x0
         a7564:	1afffff8 	bne	a754c <TEditView::HiliteAll(void)+0x30>
         a7568:	e1a00004 	mov	r0, r4
         a756c:	eb681425 	bl	1aac608 <TEditView::$DetermineKeyView(void)>
         a7570:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::RemoveAllHilites(void)
 * Address: 000a7574
 */
TEditView::RemoveAllHilites(void) {
    /*
         a7574:	e1a0c00d 	mov	ip, sp
         a7578:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a757c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a7580:	e1a04000 	mov	r4, r0
         a7584:	eb67cde7 	bl	1a9ad28 <TEditView::$InvalAllHilites(void)>
         a7588:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a758c:	e1a0000d 	mov	r0, sp
         a7590:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a7594:	eb6783a6 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a7598:	e1a0000d 	mov	r0, sp
         a759c:	eb67d61f 	bl	1a9ce20 <TListLoop::$Next(void)>
         a75a0:	e3300000 	teq	r0, #0	; 0x0
         a75a4:	0a000006 	beq	a75c4 <TEditView::RemoveAllHilites(void)+0x50>
         a75a8:	e5901000 	ldr	r1, [r0]
         a75ac:	e1a0e00f 	mov	lr, pc
         a75b0:	e281f0ac 	add	pc, r1, #172	; 0xac
         a75b4:	e1a0000d 	mov	r0, sp
         a75b8:	eb67d618 	bl	1a9ce20 <TListLoop::$Next(void)>
         a75bc:	e3300000 	teq	r0, #0	; 0x0
         a75c0:	1afffff8 	bne	a75a8 <TEditView::RemoveAllHilites(void)+0x34>
         a75c4:	e59f0024 	ldr	r0, [pc, #24]	; a75f0 <TEditView::RemoveAllHilites(void)+0x7c>
         a75c8:	e5901000 	ldr	r1, [r0]
         a75cc:	e5911030 	ldr	r1, [r1, #48]	; fField48
         a75d0:	e1310004 	teq	r1, r4
         a75d4:	1a000004 	bne	a75ec <TEditView::RemoveAllHilites(void)+0x78>
         a75d8:	e3e01002 	mvn	r1, #2	; 0x2
         a75dc:	e5a41034 	str	r1, [r4, #52]!	; fField52
         a75e0:	e3a01000 	mov	r1, #0	; 0x0
         a75e4:	e5900000 	ldr	r0, [r0]
         a75e8:	e5a01030 	str	r1, [r0, #48]!	; fField48
         a75ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         a75f0:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TEditView::ScrubHilite(TRect const &)
 * Address: 000a75f4
 */
TEditView::ScrubHilite(TRect const &) {
    /*
         a75f4:	e1a0c00d 	mov	ip, sp
         a75f8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         a75fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         a7600:	e1a04000 	mov	r4, r0
         a7604:	e1a05001 	mov	r5, r1
         a7608:	e3a06000 	mov	r6, #0	; 0x0
         a760c:	e5900034 	ldr	r0, [r0, #52]	; fField52
         a7610:	e3100002 	tst	r0, #2	; 0x2
         a7614:	e3a09000 	mov	r9, #0	; 0x0
         a7618:	e3a08001 	mov	r8, #1	; 0x1
         a761c:	0a000019 	beq	a7688 <TEditView::ScrubHilite(TRect const &)+0x94>
         a7620:	e24dd008 	sub	sp, sp, #8	; 0x8
         a7624:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
         a7628:	e2411501 	sub	r1, r1, #4194304	; 0x400000
         a762c:	e5cd1005 	strb	r1, [sp, #5]
         a7630:	e3e0007f 	mvn	r0, #127	; 0x7f
         a7634:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         a7638:	e5cd1001 	strb	r1, [sp, #1]
         a763c:	e5cd0000 	strb	r0, [sp]
         a7640:	e1a0100d 	mov	r1, sp
         a7644:	e1a00004 	mov	r0, r4
         a7648:	e5942000 	ldr	r2, [r4]
         a764c:	e1a0e00f 	mov	lr, pc
         a7650:	e282f0b4 	add	pc, r2, #180	; 0xb4
         a7654:	e2841010 	add	r1, r4, #16	; 0x10
         a7658:	e1a0000d 	mov	r0, sp
         a765c:	eb67f2f7 	bl	1aa4240 <$ToOutsideGrayBorder(TRect *, TRect const *)>
         a7660:	e1a01005 	mov	r1, r5
         a7664:	e1a0000d 	mov	r0, sp
         a7668:	eb67d5fa 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         a766c:	e3300000 	teq	r0, #0	; 0x0
         a7670:	01a00009 	moveq	r0, r9
         a7674:	0a000002 	beq	a7684 <TEditView::ScrubHilite(TRect const &)+0x90>
         a7678:	e1a00004 	mov	r0, r4
         a767c:	eb689c1f 	bl	1ace700 <TEditView::$DeleteHilitedViews(void)>
         a7680:	e1a00008 	mov	r0, r8
         a7684:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         a7688:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a768c:	e1a0000d 	mov	r0, sp
         a7690:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a7694:	eb678366 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a7698:	e1a0000d 	mov	r0, sp
         a769c:	eb67d5df 	bl	1a9ce20 <TListLoop::$Next(void)>
         a76a0:	e1b07000 	movs	r7, r0
         a76a4:	0a000040 	beq	a77ac <TEditView::ScrubHilite(TRect const &)+0x1b8>
         a76a8:	e24dd008 	sub	sp, sp, #8	; 0x8
         a76ac:	e8951008 	ldmia	r5, {r3, ip}
         a76b0:	e88d1008 	stmia	sp, {r3, ip}
         a76b4:	e24dd008 	sub	sp, sp, #8	; 0x8
         a76b8:	e5970010 	ldr	r0, [r7, #16]	; fField16
         a76bc:	e58d0004 	str	r0, [sp, #4]	; fField4
         a76c0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a76c4:	e2600000 	rsb	r0, r0, #0	; 0x0
         a76c8:	e1a01800 	mov	r1, r0, lsl #16
         a76cc:	e1a01841 	mov	r1, r1, asr #16
         a76d0:	e59d0006 	ldr	r0, [sp, #6]	; fField6
         a76d4:	e2600000 	rsb	r0, r0, #0	; 0x0
         a76d8:	e1a00800 	mov	r0, r0, lsl #16
         a76dc:	e1a00840 	mov	r0, r0, asr #16
         a76e0:	e24dd004 	sub	sp, sp, #4	; 0x4
         a76e4:	e5cd1003 	strb	r1, [sp, #3]
         a76e8:	e1a01441 	mov	r1, r1, asr #8
         a76ec:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         a76f0:	e5cd0001 	strb	r0, [sp, #1]
         a76f4:	e1a00440 	mov	r0, r0, asr #8
         a76f8:	e5cd0000 	strb	r0, [sp]
         a76fc:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a7700:	e58d0000 	str	r0, [sp]
         a7704:	e28d0008 	add	r0, sp, #8	; 0x8
         a7708:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a770c:	e1a01841 	mov	r1, r1, asr #16
         a7710:	e59d2000 	ldr	r2, [sp]
         a7714:	e1a02842 	mov	r2, r2, asr #16
         a7718:	eb6aa872 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a771c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a7720:	e1a01007 	mov	r1, r7
         a7724:	e1a0000d 	mov	r0, sp
         a7728:	eb677f2a 	bl	1a873d8 <HiliteLoop::$__ct(TView *)>
         a772c:	e1a0000d 	mov	r0, sp
         a7730:	eb67d5b6 	bl	1a9ce10 <HiliteLoop::$Next(void)>
         a7734:	e3300000 	teq	r0, #0	; 0x0
         a7738:	0a00000c 	beq	a7770 <TEditView::ScrubHilite(TRect const &)+0x17c>
         a773c:	e59d2010 	ldr	r2, [sp, #16]	; fField16
         a7740:	e28d1014 	add	r1, sp, #20	; 0x14
         a7744:	e1a00002 	mov	r0, r2
         a7748:	e5922000 	ldr	r2, [r2]
         a774c:	e1a0e00f 	mov	lr, pc
         a7750:	e282f00c 	add	pc, r2, #12	; 0xc
         a7754:	e3300000 	teq	r0, #0	; 0x0
         a7758:	13a06001 	movne	r6, #1	; 0x1
         a775c:	1a000005 	bne	a7778 <TEditView::ScrubHilite(TRect const &)+0x184>
         a7760:	e1a0000d 	mov	r0, sp
         a7764:	eb67d5a9 	bl	1a9ce10 <HiliteLoop::$Next(void)>
         a7768:	e3300000 	teq	r0, #0	; 0x0
         a776c:	1afffff2 	bne	a773c <TEditView::ScrubHilite(TRect const &)+0x148>
         a7770:	e3360000 	teq	r6, #0	; 0x0
         a7774:	0a000004 	beq	a778c <TEditView::ScrubHilite(TRect const &)+0x198>
         a7778:	e1a0000d 	mov	r0, sp
         a777c:	e3a01000 	mov	r1, #0	; 0x0
         a7780:	eb67832e 	bl	1a88440 <HiliteLoop::$__dt(void)>
         a7784:	e28dd01c 	add	sp, sp, #28	; 0x1c
         a7788:	ea000007 	b	a77ac <TEditView::ScrubHilite(TRect const &)+0x1b8>
         a778c:	e1a0000d 	mov	r0, sp
         a7790:	e3a01000 	mov	r1, #0	; 0x0
         a7794:	eb678329 	bl	1a88440 <HiliteLoop::$__dt(void)>
         a7798:	e28dd01c 	add	sp, sp, #28	; 0x1c
         a779c:	e1a0000d 	mov	r0, sp
         a77a0:	eb67d59e 	bl	1a9ce20 <TListLoop::$Next(void)>
         a77a4:	e1b07000 	movs	r7, r0
         a77a8:	1affffbe 	bne	a76a8 <TEditView::ScrubHilite(TRect const &)+0xb4>
         a77ac:	e28dd00c 	add	sp, sp, #12	; 0xc
         a77b0:	e3360000 	teq	r6, #0	; 0x0
         a77b4:	01a00009 	moveq	r0, r9
         a77b8:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         a77bc:	e1a00004 	mov	r0, r4
         a77c0:	eb689bce 	bl	1ace700 <TEditView::$DeleteHilitedViews(void)>
         a77c4:	e1a00008 	mov	r0, r8
         a77c8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::GlobalHiliteBounds(TRect *)
 * Address: 000a77cc
 */
TEditView::GlobalHiliteBounds(TRect *) {
    /*
         a77cc:	e1a0c00d 	mov	ip, sp
         a77d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a77d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         a77d8:	e1a05000 	mov	r5, r0
         a77dc:	e1a04001 	mov	r4, r1
         a77e0:	e3e06004 	mvn	r6, #4	; 0x4
         a77e4:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
         a77e8:	e2411501 	sub	r1, r1, #4194304	; 0x400000
         a77ec:	e5c41005 	strb	r1, [r4, #5]
         a77f0:	e3e0007f 	mvn	r0, #127	; 0x7f
         a77f4:	e5c40004 	strb	r0, [r4, #4]	; fField4
         a77f8:	e5c41001 	strb	r1, [r4, #1]
         a77fc:	e5c40000 	strb	r0, [r4]
         a7800:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a7804:	e1a0000d 	mov	r0, sp
         a7808:	e5951020 	ldr	r1, [r5, #32]	; fField32
         a780c:	eb678308 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a7810:	e1a0000d 	mov	r0, sp
         a7814:	eb67d581 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7818:	e1b07000 	movs	r7, r0
         a781c:	0a000012 	beq	a786c <TEditView::GlobalHiliteBounds(TRect *)+0xa0>
         a7820:	e1a00007 	mov	r0, r7
         a7824:	e5971000 	ldr	r1, [r7]
         a7828:	e1a0e00f 	mov	lr, pc
         a782c:	e281f094 	add	pc, r1, #148	; 0x94
         a7830:	e3300000 	teq	r0, #0	; 0x0
         a7834:	0a000008 	beq	a785c <TEditView::GlobalHiliteBounds(TRect *)+0x90>
         a7838:	e1a01004 	mov	r1, r4
         a783c:	e1a00007 	mov	r0, r7
         a7840:	e5972000 	ldr	r2, [r7]
         a7844:	e1a0e00f 	mov	lr, pc
         a7848:	e282f0b0 	add	pc, r2, #176	; 0xb0
         a784c:	e3801004 	orr	r1, r0, #4	; 0x4
         a7850:	e0011006 	and	r1, r1, r6
         a7854:	e2000004 	and	r0, r0, #4	; 0x4
         a7858:	e1806001 	orr	r6, r0, r1
         a785c:	e1a0000d 	mov	r0, sp
         a7860:	eb67d56e 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7864:	e1b07000 	movs	r7, r0
         a7868:	1affffec 	bne	a7820 <TEditView::GlobalHiliteBounds(TRect *)+0x54>
         a786c:	e28dd00c 	add	sp, sp, #12	; 0xc
         a7870:	e5b50034 	ldr	r0, [r5, #52]!	; fField52
         a7874:	e0000006 	and	r0, r0, r6
         a7878:	e5941000 	ldr	r1, [r4]
         a787c:	e1a01841 	mov	r1, r1, asr #16
         a7880:	e3710902 	cmn	r1, #32768	; 0x8000
         a7884:	03a00000 	moveq	r0, #0	; 0x0
         a7888:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::GlobalSelectedBounds(TRect *)
 * Address: 000a788c
 */
TEditView::GlobalSelectedBounds(TRect *) {
    /*
         a788c:	e1a0c00d 	mov	ip, sp
         a7890:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a7894:	e24cb004 	sub	fp, ip, #4	; 0x4
         a7898:	e1a04001 	mov	r4, r1
         a789c:	e3a029fe 	mov	r2, #4161536	; 0x3f8000
         a78a0:	e2422501 	sub	r2, r2, #4194304	; 0x400000
         a78a4:	e5c12005 	strb	r2, [r1, #5]
         a78a8:	e3e0107f 	mvn	r1, #127	; 0x7f
         a78ac:	e5c41004 	strb	r1, [r4, #4]	; fField4
         a78b0:	e5c42001 	strb	r2, [r4, #1]
         a78b4:	e5c41000 	strb	r1, [r4]
         a78b8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a78bc:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a78c0:	e1a0000d 	mov	r0, sp
         a78c4:	eb6782da 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a78c8:	e1a0000d 	mov	r0, sp
         a78cc:	eb67d553 	bl	1a9ce20 <TListLoop::$Next(void)>
         a78d0:	e1b05000 	movs	r5, r0
         a78d4:	0a00002c 	beq	a798c <TEditView::GlobalSelectedBounds(TRect *)+0x100>
         a78d8:	e1a00005 	mov	r0, r5
         a78dc:	e5951000 	ldr	r1, [r5]
         a78e0:	e1a0e00f 	mov	lr, pc
         a78e4:	e281f094 	add	pc, r1, #148	; 0x94
         a78e8:	e3300000 	teq	r0, #0	; 0x0
         a78ec:	0a000022 	beq	a797c <TEditView::GlobalSelectedBounds(TRect *)+0xf0>
         a78f0:	e5940000 	ldr	r0, [r4]
         a78f4:	e1a00840 	mov	r0, r0, asr #16
         a78f8:	e3700902 	cmn	r0, #32768	; 0x8000
         a78fc:	02850010 	addeq	r0, r5, #16	; 0x10
         a7900:	08905000 	ldmeqia	r0, {ip, lr}
         a7904:	08845000 	stmeqia	r4, {ip, lr}
         a7908:	0a00001b 	beq	a797c <TEditView::GlobalSelectedBounds(TRect *)+0xf0>
         a790c:	e2851010 	add	r1, r5, #16	; 0x10
         a7910:	e5912002 	ldr	r2, [r1, #2]	; fField2
         a7914:	e1a02842 	mov	r2, r2, asr #16
         a7918:	e5943002 	ldr	r3, [r4, #2]	; fField2
         a791c:	e1520843 	cmp	r2, r3, asr #16
         a7920:	b5c42003 	strltb	r2, [r4, #3]
         a7924:	b1a02442 	movlt	r2, r2, asr #8
         a7928:	b5c42002 	strltb	r2, [r4, #2]	; fField2
         a792c:	e5912000 	ldr	r2, [r1]
         a7930:	e1a02842 	mov	r2, r2, asr #16
         a7934:	e1520000 	cmp	r2, r0
         a7938:	b5c42001 	strltb	r2, [r4, #1]
         a793c:	b1a00442 	movlt	r0, r2, asr #8
         a7940:	b5c40000 	strltb	r0, [r4]
         a7944:	e5910006 	ldr	r0, [r1, #6]	; fField6
         a7948:	e1a00840 	mov	r0, r0, asr #16
         a794c:	e5942006 	ldr	r2, [r4, #6]	; fField6
         a7950:	e1500842 	cmp	r0, r2, asr #16
         a7954:	c5c40007 	strgtb	r0, [r4, #7]
         a7958:	c1a00440 	movgt	r0, r0, asr #8
         a795c:	c5c40006 	strgtb	r0, [r4, #6]	; fField6
         a7960:	e5910004 	ldr	r0, [r1, #4]	; fField4
         a7964:	e1a00840 	mov	r0, r0, asr #16
         a7968:	e5941004 	ldr	r1, [r4, #4]	; fField4
         a796c:	e1500841 	cmp	r0, r1, asr #16
         a7970:	c5c40005 	strgtb	r0, [r4, #5]
         a7974:	c1a00440 	movgt	r0, r0, asr #8
         a7978:	c5c40004 	strgtb	r0, [r4, #4]	; fField4
         a797c:	e1a0000d 	mov	r0, sp
         a7980:	eb67d526 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7984:	e1b05000 	movs	r5, r0
         a7988:	1affffd2 	bne	a78d8 <TEditView::GlobalSelectedBounds(TRect *)+0x4c>
         a798c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::GlobalHiliteResizeBounds(TRect *)
 * Address: 000a7990
 */
TEditView::GlobalHiliteResizeBounds(TRect *) {
    /*
         a7990:	e1a0c00d 	mov	ip, sp
         a7994:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a7998:	e24cb004 	sub	fp, ip, #4	; 0x4
         a799c:	e1a04001 	mov	r4, r1
         a79a0:	e3a029fe 	mov	r2, #4161536	; 0x3f8000
         a79a4:	e2422501 	sub	r2, r2, #4194304	; 0x400000
         a79a8:	e5c12005 	strb	r2, [r1, #5]
         a79ac:	e3e0107f 	mvn	r1, #127	; 0x7f
         a79b0:	e5c41004 	strb	r1, [r4, #4]	; fField4
         a79b4:	e5c42001 	strb	r2, [r4, #1]
         a79b8:	e5c41000 	strb	r1, [r4]
         a79bc:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a79c0:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a79c4:	e1a0000d 	mov	r0, sp
         a79c8:	eb678299 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a79cc:	e1a0000d 	mov	r0, sp
         a79d0:	eb67d512 	bl	1a9ce20 <TListLoop::$Next(void)>
         a79d4:	e3300000 	teq	r0, #0	; 0x0
         a79d8:	0a000007 	beq	a79fc <TEditView::GlobalHiliteResizeBounds(TRect *)+0x6c>
         a79dc:	e1a01004 	mov	r1, r4
         a79e0:	e5902000 	ldr	r2, [r0]
         a79e4:	e1a0e00f 	mov	lr, pc
         a79e8:	e282f0b4 	add	pc, r2, #180	; 0xb4
         a79ec:	e1a0000d 	mov	r0, sp
         a79f0:	eb67d50a 	bl	1a9ce20 <TListLoop::$Next(void)>
         a79f4:	e3300000 	teq	r0, #0	; 0x0
         a79f8:	1afffff7 	bne	a79dc <TEditView::GlobalHiliteResizeBounds(TRect *)+0x4c>
         a79fc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::GlobalHilitePinnedBounds(TRect *)
 * Address: 000a7a00
 */
TEditView::GlobalHilitePinnedBounds(TRect *) {
    /*
         a7a00:	e1a0c00d 	mov	ip, sp
         a7a04:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a7a08:	e24cb004 	sub	fp, ip, #4	; 0x4
         a7a0c:	e1a04001 	mov	r4, r1
         a7a10:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a7a14:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a7a18:	e1a0000d 	mov	r0, sp
         a7a1c:	eb678284 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a7a20:	e1a0000d 	mov	r0, sp
         a7a24:	eb67d4fd 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7a28:	e3300000 	teq	r0, #0	; 0x0
         a7a2c:	0a000007 	beq	a7a50 <TEditView::GlobalHilitePinnedBounds(TRect *)+0x50>
         a7a30:	e1a01004 	mov	r1, r4
         a7a34:	e5902000 	ldr	r2, [r0]
         a7a38:	e1a0e00f 	mov	lr, pc
         a7a3c:	e282f0b8 	add	pc, r2, #184	; 0xb8
         a7a40:	e1a0000d 	mov	r0, sp
         a7a44:	eb67d4f5 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7a48:	e3300000 	teq	r0, #0	; 0x0
         a7a4c:	1afffff7 	bne	a7a30 <TEditView::GlobalHilitePinnedBounds(TRect *)+0x30>
         a7a50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::PointInHilite(TPoint &)
 * Address: 000a7a54
 */
TEditView::PointInHilite(TPoint &) {
    /*
         a7a54:	e1a0c00d 	mov	ip, sp
         a7a58:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a7a5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a7a60:	e1a04001 	mov	r4, r1
         a7a64:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a7a68:	e3a05000 	mov	r5, #0	; 0x0
         a7a6c:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a7a70:	e1a0000d 	mov	r0, sp
         a7a74:	eb67826e 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a7a78:	e1a0000d 	mov	r0, sp
         a7a7c:	eb67d4e7 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7a80:	e3300000 	teq	r0, #0	; 0x0
         a7a84:	0a00000a 	beq	a7ab4 <TEditView::PointInHilite(TPoint &)+0x60>
         a7a88:	e1a01004 	mov	r1, r4
         a7a8c:	e5902000 	ldr	r2, [r0]
         a7a90:	e1a0e00f 	mov	lr, pc
         a7a94:	e282f0bc 	add	pc, r2, #188	; 0xbc
         a7a98:	e3300000 	teq	r0, #0	; 0x0
         a7a9c:	13a05001 	movne	r5, #1	; 0x1
         a7aa0:	1a000003 	bne	a7ab4 <TEditView::PointInHilite(TPoint &)+0x60>
         a7aa4:	e1a0000d 	mov	r0, sp
         a7aa8:	eb67d4dc 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7aac:	e3300000 	teq	r0, #0	; 0x0
         a7ab0:	1afffff4 	bne	a7a88 <TEditView::PointInHilite(TPoint &)+0x34>
         a7ab4:	e1a00005 	mov	r0, r5
         a7ab8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::CountHilites(void)
 * Address: 000a7abc
 */
TEditView::CountHilites(void) {
    /*
         a7abc:	e1a0c00d 	mov	ip, sp
         a7ac0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a7ac4:	e24cb004 	sub	fp, ip, #4	; 0x4
         a7ac8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a7acc:	e3a04000 	mov	r4, #0	; 0x0
         a7ad0:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a7ad4:	e1a0000d 	mov	r0, sp
         a7ad8:	eb678255 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a7adc:	e1a0000d 	mov	r0, sp
         a7ae0:	eb67d4ce 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7ae4:	e3300000 	teq	r0, #0	; 0x0
         a7ae8:	0a000008 	beq	a7b10 <TEditView::CountHilites(void)+0x54>
         a7aec:	e5901000 	ldr	r1, [r0]
         a7af0:	e1a0e00f 	mov	lr, pc
         a7af4:	e281f094 	add	pc, r1, #148	; 0x94
         a7af8:	e3300000 	teq	r0, #0	; 0x0
         a7afc:	12844001 	addne	r4, r4, #1	; 0x1
         a7b00:	e1a0000d 	mov	r0, sp
         a7b04:	eb67d4c5 	bl	1a9ce20 <TListLoop::$Next(void)>
         a7b08:	e3300000 	teq	r0, #0	; 0x0
         a7b0c:	1afffff6 	bne	a7aec <TEditView::CountHilites(void)+0x30>
         a7b10:	e1a00004 	mov	r0, r4
         a7b14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)
 * Address: 000a7b18
 */
TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &) {
    /*
         a7b18:	e1a0c00d 	mov	ip, sp
         a7b1c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a7b20:	e24cb004 	sub	fp, ip, #4	; 0x4
         a7b24:	e24dd014 	sub	sp, sp, #20	; 0x14
         a7b28:	e51b002c 	ldr	r0, [fp, -#44]
         a7b2c:	e1a01000 	mov	r1, r0
         a7b30:	e5902004 	ldr	r2, [r0, #4]	; fField4
         a7b34:	e1a02822 	mov	r2, r2, lsr #16
         a7b38:	e5900000 	ldr	r0, [r0]
         a7b3c:	e1a00820 	mov	r0, r0, lsr #16
         a7b40:	e0420000 	sub	r0, r2, r0
         a7b44:	e5cd0001 	strb	r0, [sp, #1]
         a7b48:	e1a00440 	mov	r0, r0, asr #8
         a7b4c:	e5cd0000 	strb	r0, [sp]
         a7b50:	e5910006 	ldr	r0, [r1, #6]	; fField6
         a7b54:	e1a00820 	mov	r0, r0, lsr #16
         a7b58:	e5911002 	ldr	r1, [r1, #2]	; fField2
         a7b5c:	e1a01821 	mov	r1, r1, lsr #16
         a7b60:	e0400001 	sub	r0, r0, r1
         a7b64:	e5cd0003 	strb	r0, [sp, #3]
         a7b68:	e1a00440 	mov	r0, r0, asr #8
         a7b6c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a7b70:	e3a00037 	mov	r0, #55	; 0x37
         a7b74:	eb6871a2 	bl	1ac4204 <$BusyBoxSend(long)>
         a7b78:	e3a01001 	mov	r1, #1	; 0x1
         a7b7c:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
         a7b80:	eb67c85d 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
         a7b84:	e24dd008 	sub	sp, sp, #8	; 0x8
         a7b88:	e51b0038 	ldr	r0, [fp, -#56]
         a7b8c:	e1a01000 	mov	r1, r0
         a7b90:	e2800010 	add	r0, r0, #16	; 0x10
         a7b94:	e8905000 	ldmia	r0, {ip, lr}
         a7b98:	e88d5000 	stmia	sp, {ip, lr}
         a7b9c:	e51b002c 	ldr	r0, [fp, -#44]
         a7ba0:	e590e004 	ldr	lr, [r0, #4]	; fField4
         a7ba4:	e1a0e84e 	mov	lr, lr, asr #16
         a7ba8:	e5902000 	ldr	r2, [r0]
         a7bac:	e1a02842 	mov	r2, r2, asr #16
         a7bb0:	e1a03002 	mov	r3, r2
         a7bb4:	e04ec002 	sub	ip, lr, r2
         a7bb8:	e1a0c80c 	mov	ip, ip, lsl #16
         a7bbc:	e08228cc 	add	r2, r2, ip, asr #17
         a7bc0:	e51bc034 	ldr	ip, [fp, -#52]	; fField52
         a7bc4:	e152084c 	cmp	r2, ip, asr #16
         a7bc8:	aa000010 	bge	a7c10 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0xf8>
         a7bcc:	e5cd3011 	strb	r3, [sp, #17]
         a7bd0:	e1a02443 	mov	r2, r3, asr #8
         a7bd4:	e5cd2010 	strb	r2, [sp, #16]	; fField16
         a7bd8:	e59d200a 	ldr	r2, [sp, #10]
         a7bdc:	e5cd200d 	strb	r2, [sp, #13]
         a7be0:	e1a02442 	mov	r2, r2, asr #8
         a7be4:	e5cd200c 	strb	r2, [sp, #12]
         a7be8:	e59d2012 	ldr	r2, [sp, #18]
         a7bec:	e2822010 	add	r2, r2, #16	; 0x10
         a7bf0:	e5cd2015 	strb	r2, [sp, #21]
         a7bf4:	e1a02442 	mov	r2, r2, asr #8
         a7bf8:	e5cd2014 	strb	r2, [sp, #20]
         a7bfc:	e59d2006 	ldr	r2, [sp, #6]	; fField6
         a7c00:	e5cd2019 	strb	r2, [sp, #25]
         a7c04:	e1a02442 	mov	r2, r2, asr #8
         a7c08:	e5cd2018 	strb	r2, [sp, #24]
         a7c0c:	ea000010 	b	a7c54 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x13c>
         a7c10:	e5cde011 	strb	lr, [sp, #17]
         a7c14:	e1a0244e 	mov	r2, lr, asr #8
         a7c18:	e5cd2010 	strb	r2, [sp, #16]	; fField16
         a7c1c:	e59d200a 	ldr	r2, [sp, #10]
         a7c20:	e2622000 	rsb	r2, r2, #0	; 0x0
         a7c24:	e5cd200d 	strb	r2, [sp, #13]
         a7c28:	e1a02442 	mov	r2, r2, asr #8
         a7c2c:	e5cd200c 	strb	r2, [sp, #12]
         a7c30:	e59d2012 	ldr	r2, [sp, #18]
         a7c34:	e2422010 	sub	r2, r2, #16	; 0x10
         a7c38:	e5cd2019 	strb	r2, [sp, #25]
         a7c3c:	e1a02442 	mov	r2, r2, asr #8
         a7c40:	e5cd2018 	strb	r2, [sp, #24]
         a7c44:	e59d2002 	ldr	r2, [sp, #2]	; fField2
         a7c48:	e5cd2015 	strb	r2, [sp, #21]
         a7c4c:	e1a02442 	mov	r2, r2, asr #8
         a7c50:	e5cd2014 	strb	r2, [sp, #20]
         a7c54:	e590e006 	ldr	lr, [r0, #6]	; fField6
         a7c58:	e1a0e84e 	mov	lr, lr, asr #16
         a7c5c:	e5902002 	ldr	r2, [r0, #2]	; fField2
         a7c60:	e1a02842 	mov	r2, r2, asr #16
         a7c64:	e1a03002 	mov	r3, r2
         a7c68:	e04ec002 	sub	ip, lr, r2
         a7c6c:	e1a0c80c 	mov	ip, ip, lsl #16
         a7c70:	e08228cc 	add	r2, r2, ip, asr #17
         a7c74:	e51bc032 	ldr	ip, [fp, -#50]
         a7c78:	e152084c 	cmp	r2, ip, asr #16
         a7c7c:	aa000010 	bge	a7cc4 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x1ac>
         a7c80:	e5cd3013 	strb	r3, [sp, #19]
         a7c84:	e1a02443 	mov	r2, r3, asr #8
         a7c88:	e5cd2012 	strb	r2, [sp, #18]
         a7c8c:	e59d2008 	ldr	r2, [sp, #8]	; fField8
         a7c90:	e5cd200f 	strb	r2, [sp, #15]
         a7c94:	e1a02442 	mov	r2, r2, asr #8
         a7c98:	e5cd200e 	strb	r2, [sp, #14]
         a7c9c:	e59d2010 	ldr	r2, [sp, #16]	; fField16
         a7ca0:	e2822010 	add	r2, r2, #16	; 0x10
         a7ca4:	e5cd2017 	strb	r2, [sp, #23]
         a7ca8:	e1a02442 	mov	r2, r2, asr #8
         a7cac:	e5cd2016 	strb	r2, [sp, #22]
         a7cb0:	e59d2004 	ldr	r2, [sp, #4]	; fField4
         a7cb4:	e5cd201b 	strb	r2, [sp, #27]
         a7cb8:	e1a02442 	mov	r2, r2, asr #8
         a7cbc:	e5cd201a 	strb	r2, [sp, #26]
         a7cc0:	ea000010 	b	a7d08 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x1f0>
         a7cc4:	e5cde013 	strb	lr, [sp, #19]
         a7cc8:	e1a0244e 	mov	r2, lr, asr #8
         a7ccc:	e5cd2012 	strb	r2, [sp, #18]
         a7cd0:	e59d2008 	ldr	r2, [sp, #8]	; fField8
         a7cd4:	e2622000 	rsb	r2, r2, #0	; 0x0
         a7cd8:	e5cd200f 	strb	r2, [sp, #15]
         a7cdc:	e1a02442 	mov	r2, r2, asr #8
         a7ce0:	e5cd200e 	strb	r2, [sp, #14]
         a7ce4:	e59d2010 	ldr	r2, [sp, #16]	; fField16
         a7ce8:	e2422010 	sub	r2, r2, #16	; 0x10
         a7cec:	e5cd201b 	strb	r2, [sp, #27]
         a7cf0:	e1a02442 	mov	r2, r2, asr #8
         a7cf4:	e5cd201a 	strb	r2, [sp, #26]
         a7cf8:	e59d2000 	ldr	r2, [sp]
         a7cfc:	e5cd2017 	strb	r2, [sp, #23]
         a7d00:	e1a02442 	mov	r2, r2, asr #8
         a7d04:	e5cd2016 	strb	r2, [sp, #22]
         a7d08:	e24dd004 	sub	sp, sp, #4	; 0x4
         a7d0c:	e3a02000 	mov	r2, #0	; 0x0
         a7d10:	e5cd2001 	strb	r2, [sp, #1]
         a7d14:	e3a02080 	mov	r2, #128	; 0x80
         a7d18:	e44d20a4 	strb	r2, [sp], -#164
         a7d1c:	e28d209c 	add	r2, sp, #156	; 0x9c
         a7d20:	e8905000 	ldmia	r0, {ip, lr}
         a7d24:	e8825000 	stmia	r2, {ip, lr}
         a7d28:	e3a04000 	mov	r4, #0	; 0x0
         a7d2c:	e28d001c 	add	r0, sp, #28	; 0x1c
         a7d30:	e3a03000 	mov	r3, #0	; 0x0
         a7d34:	e3a02000 	mov	r2, #0	; 0x0
         a7d38:	eb6c85d2 	bl	1bc9488 <DragBits::$__ct(TView *, TRect const *, unsigned char)>
         a7d3c:	e28d2018 	add	r2, sp, #24	; 0x18
         a7d40:	e59f12ac 	ldr	r1, [pc, #2ac]	; a7ff4 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x4dc>	; fField2
         a7d44:	e51b0038 	ldr	r0, [fp, -#56]
         a7d48:	eb68fd9e 	bl	1ae73c8 <TView::$IsGridded(RefVar const &, TPoint *)>
         a7d4c:	e1a0a000 	mov	sl, r0
         a7d50:	e1a0000d 	mov	r0, sp
         a7d54:	e51b1038 	ldr	r1, [fp, -#56]
         a7d58:	eb6c922c 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
         a7d5c:	e1a0100d 	mov	r1, sp
         a7d60:	e28d0004 	add	r0, sp, #4	; 0x4
         a7d64:	eb677d9c 	bl	1a873dc <TRegionVar::$__ct(TRegion &)>
         a7d68:	e1a0000d 	mov	r0, sp
         a7d6c:	e3a01000 	mov	r1, #0	; 0x0
         a7d70:	eb6785c3 	bl	1a89484 <TRegion::$__dt(void)>
         a7d74:	e3a05000 	mov	r5, #0	; 0x0
         a7d78:	e3a08000 	mov	r8, #0	; 0x0
         a7d7c:	e52d506c 	str	r5, [sp, -#108]!
         a7d80:	e28d0008 	add	r0, sp, #8	; 0x8
         a7d84:	eb6c2afa 	bl	1bb2974 <$setjmp>
         a7d88:	e59f6268 	ldr	r6, [pc, #268]	; a7ff8 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x4e0>
         a7d8c:	e3300000 	teq	r0, #0	; 0x0
         a7d90:	1a0000a4 	bne	a8028 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x510>
         a7d94:	e1a0000d 	mov	r0, sp
         a7d98:	eb6ce0b7 	bl	1be007c <$AddExceptionHandler>
         a7d9c:	e3a07001 	mov	r7, #1	; 0x1
         a7da0:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
         a7da4:	eb67a6be 	bl	1a918a4 <TStrokePublic::$Done(void)>
         a7da8:	e3300000 	teq	r0, #0	; 0x0
         a7dac:	1a00009a 	bne	a801c <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x504>
         a7db0:	e28d0088 	add	r0, sp, #136	; 0x88
         a7db4:	e2809038 	add	r9, r0, #56	; 0x38
         a7db8:	e2805004 	add	r5, r0, #4	; 0x4
         a7dbc:	e59f7238 	ldr	r7, [pc, #238]	; a7ffc <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x4e4>
         a7dc0:	e24dd004 	sub	sp, sp, #4	; 0x4
         a7dc4:	e1a0000d 	mov	r0, sp
         a7dc8:	e51b1030 	ldr	r1, [fp, -#48]	; fField48
         a7dcc:	eb67aefc 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
         a7dd0:	e3340000 	teq	r4, #0	; 0x0
         a7dd4:	1a000006 	bne	a7df4 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x2dc>
         a7dd8:	e24b1034 	sub	r1, fp, #52	; 0x34
         a7ddc:	e1a0000d 	mov	r0, sp
         a7de0:	eb03c4f7 	bl	1991c4 <CheapDistance__FRC6TPointT1>
         a7de4:	e3500004 	cmp	r0, #4	; 0x4
         a7de8:	d3a00000 	movle	r0, #0	; 0x0
         a7dec:	c3a00001 	movgt	r0, #1	; 0x1
         a7df0:	e20040ff 	and	r4, r0, #255	; 0xff
         a7df4:	e3340000 	teq	r4, #0	; 0x0
         a7df8:	159d0000 	ldrne	r0, [sp]
         a7dfc:	159d1114 	ldrne	r1, [sp, #276]
         a7e00:	11300001 	teqne	r0, r1
         a7e04:	0a00007d 	beq	a8000 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x4e8>
         a7e08:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a7e0c:	e59d1134 	ldr	r1, [sp, #308]
         a7e10:	e59d0130 	ldr	r0, [sp, #304]
         a7e14:	e0810000 	add	r0, r1, r0
         a7e18:	e1a00800 	mov	r0, r0, lsl #16
         a7e1c:	e1a00840 	mov	r0, r0, asr #16
         a7e20:	e59d2136 	ldr	r2, [sp, #310]
         a7e24:	e59d1132 	ldr	r1, [sp, #306]
         a7e28:	e0821001 	add	r1, r2, r1
         a7e2c:	e1a01801 	mov	r1, r1, lsl #16
         a7e30:	e1a01841 	mov	r1, r1, asr #16
         a7e34:	e24dd004 	sub	sp, sp, #4	; 0x4
         a7e38:	e5cd0003 	strb	r0, [sp, #3]
         a7e3c:	e1a00440 	mov	r0, r0, asr #8
         a7e40:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a7e44:	e5cd1001 	strb	r1, [sp, #1]
         a7e48:	e1a00441 	mov	r0, r1, asr #8
         a7e4c:	e5cd0000 	strb	r0, [sp]
         a7e50:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a7e54:	e58d0000 	str	r0, [sp]
         a7e58:	e59d1000 	ldr	r1, [sp]
         a7e5c:	e59d000c 	ldr	r0, [sp, #12]
         a7e60:	e0810000 	add	r0, r1, r0
         a7e64:	e1a00800 	mov	r0, r0, lsl #16
         a7e68:	e1a00840 	mov	r0, r0, asr #16
         a7e6c:	e41d1004 	ldr	r1, [sp], -#4	; fField4
         a7e70:	e1a01821 	mov	r1, r1, lsr #16
         a7e74:	e59d2012 	ldr	r2, [sp, #18]
         a7e78:	e0811002 	add	r1, r1, r2
         a7e7c:	e1a01801 	mov	r1, r1, lsl #16
         a7e80:	e1a01841 	mov	r1, r1, asr #16
         a7e84:	e5cd0003 	strb	r0, [sp, #3]
         a7e88:	e1a00440 	mov	r0, r0, asr #8
         a7e8c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a7e90:	e5cd1001 	strb	r1, [sp, #1]
         a7e94:	e1a00441 	mov	r0, r1, asr #8
         a7e98:	e5cd0000 	strb	r0, [sp]
         a7e9c:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a7ea0:	e58d0004 	str	r0, [sp, #4]	; fField4
         a7ea4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a7ea8:	e51b1034 	ldr	r1, [fp, -#52]	; fField52
         a7eac:	e0400001 	sub	r0, r0, r1
         a7eb0:	e1a00800 	mov	r0, r0, lsl #16
         a7eb4:	e1a00840 	mov	r0, r0, asr #16
         a7eb8:	e59d1006 	ldr	r1, [sp, #6]	; fField6
         a7ebc:	e51b2032 	ldr	r2, [fp, -#50]
         a7ec0:	e0411002 	sub	r1, r1, r2
         a7ec4:	e1a01801 	mov	r1, r1, lsl #16
         a7ec8:	e1a01841 	mov	r1, r1, asr #16
         a7ecc:	e24dd004 	sub	sp, sp, #4	; 0x4
         a7ed0:	e5cd0003 	strb	r0, [sp, #3]
         a7ed4:	e1a00440 	mov	r0, r0, asr #8
         a7ed8:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a7edc:	e5cd1001 	strb	r1, [sp, #1]
         a7ee0:	e1a00441 	mov	r0, r1, asr #8
         a7ee4:	e5cd0000 	strb	r0, [sp]
         a7ee8:	e49d000c 	ldr	r0, [sp], #12
         a7eec:	e33a0000 	teq	sl, #0	; 0x0
         a7ef0:	e58d0000 	str	r0, [sp]
         a7ef4:	128d108c 	addne	r1, sp, #140	; 0x8c
         a7ef8:	11a0000d 	movne	r0, sp
         a7efc:	1b6891dd 	blne	1acc678 <$AlignPtToGrid(TPoint *, TPoint &)>
         a7f00:	e28d1e13 	add	r1, sp, #304	; 0x130
         a7f04:	e1a0000d 	mov	r0, sp
         a7f08:	eb67d7dc 	bl	1a9de80 <TPoint::$PinTo(TRect const &)>
         a7f0c:	e59d012c 	ldr	r0, [sp, #300]
         a7f10:	e58d0110 	str	r0, [sp, #272]
         a7f14:	e59d0000 	ldr	r0, [sp]
         a7f18:	e58d0114 	str	r0, [sp, #276]
         a7f1c:	e28d0e11 	add	r0, sp, #272	; 0x110
         a7f20:	eb67b2c8 	bl	1a94a48 <TRect::$Flip(void)>
         a7f24:	e28d2e11 	add	r2, sp, #272	; 0x110
         a7f28:	e1a00006 	mov	r0, r6
         a7f2c:	e3a03000 	mov	r3, #0	; 0x0
         a7f30:	e51b102c 	ldr	r1, [fp, -#44]
         a7f34:	eb67e888 	bl	1aa215c <TTransform::$Setup(TRect const *, TRect const *, unsigned char)>
         a7f38:	e24dd008 	sub	sp, sp, #8	; 0x8
         a7f3c:	e51b0038 	ldr	r0, [fp, -#56]
         a7f40:	e2800010 	add	r0, r0, #16	; 0x10
         a7f44:	e8905000 	ldmia	r0, {ip, lr}
         a7f48:	e88d5000 	stmia	sp, {ip, lr}
         a7f4c:	e1a00005 	mov	r0, r5
         a7f50:	eb67e876 	bl	1aa2130 <TBits::$SetPort(void)>
         a7f54:	e1a0000d 	mov	r0, sp
         a7f58:	eb6a99fb 	bl	1b4e74c <$EraseRect(Rect *)>
         a7f5c:	e3a00001 	mov	r0, #1	; 0x1
         a7f60:	e5c70030 	strb	r0, [r7, #48]	; fField48
         a7f64:	e28d2f46 	add	r2, sp, #280	; 0x118
         a7f68:	e51b3038 	ldr	r3, [fp, -#56]
         a7f6c:	e1a00003 	mov	r0, r3
         a7f70:	e51b102c 	ldr	r1, [fp, -#44]
         a7f74:	e5933000 	ldr	r3, [r3]
         a7f78:	e1a0e00f 	mov	lr, pc
         a7f7c:	e283ff47 	add	pc, r3, #284	; 0x11c
         a7f80:	e3a00000 	mov	r0, #0	; 0x0
         a7f84:	e5c70030 	strb	r0, [r7, #48]	; fField48
         a7f88:	e1a00005 	mov	r0, r5
         a7f8c:	eb67e030 	bl	1aa0054 <TBits::$RestorePort(void)>
         a7f90:	e3a01000 	mov	r1, #0	; 0x0
         a7f94:	e3a00000 	mov	r0, #0	; 0x0
         a7f98:	eb6a919e 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         a7f9c:	e3a03000 	mov	r3, #0	; 0x0
         a7fa0:	e92d0008 	stmdb	sp!, {r3}
         a7fa4:	e1a00009 	mov	r0, r9
         a7fa8:	e28d2004 	add	r2, sp, #4	; 0x4
         a7fac:	e28d1004 	add	r1, sp, #4	; 0x4
         a7fb0:	eb67a649 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         a7fb4:	e28dd004 	add	sp, sp, #4	; 0x4
         a7fb8:	e3a03000 	mov	r3, #0	; 0x0
         a7fbc:	e92d0008 	stmdb	sp!, {r3}
         a7fc0:	e1a00005 	mov	r0, r5
         a7fc4:	e28d2004 	add	r2, sp, #4	; 0x4
         a7fc8:	e28d1004 	add	r1, sp, #4	; 0x4
         a7fcc:	e3a03002 	mov	r3, #2	; 0x2
         a7fd0:	eb67a641 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         a7fd4:	e28dd004 	add	sp, sp, #4	; 0x4
         a7fd8:	e3a01000 	mov	r1, #0	; 0x0
         a7fdc:	e3a00000 	mov	r0, #0	; 0x0
         a7fe0:	eb6a918e 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         a7fe4:	e59d000c 	ldr	r0, [sp, #12]
         a7fe8:	e58d0120 	str	r0, [sp, #288]
         a7fec:	e28dd00c 	add	sp, sp, #12	; 0xc
         a7ff0:	ea000004 	b	a8008 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x4f0>
         a7ff4:	006847e8 	rsbeq	r4, r8, r8, ror #15
         a7ff8:	0c100cc4 	ldceq	12, cr0, [r0], -#784
         a7ffc:	0c100cc4 	ldceq	12, cr0, [r0], -#784
         a8000:	e3a00001 	mov	r0, #1	; 0x1
         a8004:	eb67f4bb 	bl	1aa52f8 <$Wait(unsigned long)>
         a8008:	e28dd004 	add	sp, sp, #4	; 0x4
         a800c:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
         a8010:	eb67a623 	bl	1a918a4 <TStrokePublic::$Done(void)>
         a8014:	e3300000 	teq	r0, #0	; 0x0
         a8018:	0affff68 	beq	a7dc0 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x2a8>
         a801c:	e1a0000d 	mov	r0, sp
         a8020:	eb6ce424 	bl	1be10b8 <$ExitHandler>
         a8024:	ea000000 	b	a802c <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x514>
         a8028:	e3a08001 	mov	r8, #1	; 0x1
         a802c:	e59d5070 	ldr	r5, [sp, #112]
         a8030:	e24dd008 	sub	sp, sp, #8	; 0x8
         a8034:	e1a0000d 	mov	r0, sp
         a8038:	eb6d1dd9 	bl	1bef7a4 <$GetPort(GrafPort **)>
         a803c:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a8040:	e5900024 	ldr	r0, [r0, #36]	; fField36
         a8044:	e58d0000 	str	r0, [sp]
         a8048:	e1a00005 	mov	r0, r5
         a804c:	e59d1000 	ldr	r1, [sp]
         a8050:	eb6a9597 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
         a8054:	e28dd004 	add	sp, sp, #4	; 0x4
         a8058:	e3380000 	teq	r8, #0	; 0x0
         a805c:	11a0000d 	movne	r0, sp
         a8060:	1b6ce83b 	blne	1be2154 <$NextHandler>
         a8064:	e28dd06c 	add	sp, sp, #108	; 0x6c
         a8068:	e1a00006 	mov	r0, r6
         a806c:	e3a03000 	mov	r3, #0	; 0x0
         a8070:	e3a02000 	mov	r2, #0	; 0x0
         a8074:	e3a01000 	mov	r1, #0	; 0x0
         a8078:	eb67e837 	bl	1aa215c <TTransform::$Setup(TRect const *, TRect const *, unsigned char)>
         a807c:	eb6aaa28 	bl	1b52924 <$PenNormal(void)>
         a8080:	e3a01000 	mov	r1, #0	; 0x0
         a8084:	e51b0038 	ldr	r0, [fp, -#56]
         a8088:	e5902000 	ldr	r2, [r0]
         a808c:	e1a0e00f 	mov	lr, pc
         a8090:	e282f054 	add	pc, r2, #84	; 0x54
         a8094:	e3340000 	teq	r4, #0	; 0x0
         a8098:	0a000051 	beq	a81e4 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x6cc>
         a809c:	e51b0038 	ldr	r0, [fp, -#56]
         a80a0:	eb67a1e0 	bl	1a90828 <TEditView::$DiceHilited(void)>
         a80a4:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a80a8:	e51b0038 	ldr	r0, [fp, -#56]
         a80ac:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a80b0:	e1a0000d 	mov	r0, sp
         a80b4:	eb6780de 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a80b8:	e1a0000d 	mov	r0, sp
         a80bc:	eb67d357 	bl	1a9ce20 <TListLoop::$Next(void)>
         a80c0:	e1b05000 	movs	r5, r0
         a80c4:	e59f7148 	ldr	r7, [pc, #148]	; a8214 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x6fc>
         a80c8:	e59f6148 	ldr	r6, [pc, #148]	; a8218 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x700>
         a80cc:	0a000043 	beq	a81e0 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x6c8>
         a80d0:	e1a00005 	mov	r0, r5
         a80d4:	e5951000 	ldr	r1, [r5]
         a80d8:	e1a0e00f 	mov	lr, pc
         a80dc:	e281f094 	add	pc, r1, #148	; 0x94
         a80e0:	e3300000 	teq	r0, #0	; 0x0
         a80e4:	0a000039 	beq	a81d0 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x6b8>
         a80e8:	e24dd004 	sub	sp, sp, #4	; 0x4
         a80ec:	e1a01005 	mov	r1, r5
         a80f0:	e3a02302 	mov	r2, #134217728	; 0x8000000
         a80f4:	e3a00042 	mov	r0, #66	; 0x42
         a80f8:	eb67f890 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a80fc:	eb6c6812 	bl	1bc214c <$AllocateRefHandle(long)>
         a8100:	e40d0008 	str	r0, [sp], -#8	; fField8
         a8104:	e51b002c 	ldr	r0, [fp, -#44]
         a8108:	e8905000 	ldmia	r0, {ip, lr}
         a810c:	e88d5000 	stmia	sp, {ip, lr}
         a8110:	e59d2000 	ldr	r2, [sp]
         a8114:	e28d0008 	add	r0, sp, #8	; 0x8
         a8118:	e3a01000 	mov	r1, #0	; 0x0
         a811c:	eb67f891 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
         a8120:	e59d2004 	ldr	r2, [sp, #4]	; fField4
         a8124:	e28d0008 	add	r0, sp, #8	; 0x8
         a8128:	e3a01001 	mov	r1, #1	; 0x1
         a812c:	eb67f88d 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
         a8130:	e59d20b4 	ldr	r2, [sp, #180]
         a8134:	e28d0008 	add	r0, sp, #8	; 0x8
         a8138:	e3a01002 	mov	r1, #2	; 0x2
         a813c:	eb67f889 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
         a8140:	e59d20b8 	ldr	r2, [sp, #184]
         a8144:	e28d0008 	add	r0, sp, #8	; 0x8
         a8148:	e3a01003 	mov	r1, #3	; 0x3
         a814c:	eb67f885 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
         a8150:	e24dd004 	sub	sp, sp, #4	; 0x4
         a8154:	e3a00002 	mov	r0, #2	; 0x2
         a8158:	eb6c67fb 	bl	1bc214c <$AllocateRefHandle(long)>
         a815c:	e58d0000 	str	r0, [sp]
         a8160:	e1a00005 	mov	r0, r5
         a8164:	eb6c84df 	bl	1bc94e8 <TView::$DataFrame(void)>
         a8168:	eb6c67f7 	bl	1bc214c <$AllocateRefHandle(long)>
         a816c:	e1a05000 	mov	r5, r0
         a8170:	e5970000 	ldr	r0, [r7]
         a8174:	e5901000 	ldr	r1, [r0]
         a8178:	e5950000 	ldr	r0, [r5]
         a817c:	eb6c7037 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a8180:	e59d1000 	ldr	r1, [sp]
         a8184:	e5810000 	str	r0, [r1]
         a8188:	e1a00005 	mov	r0, r5
         a818c:	eb6c6c0a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a8190:	e59d0000 	ldr	r0, [sp]
         a8194:	e5900000 	ldr	r0, [r0]
         a8198:	e3300002 	teq	r0, #2	; 0x2
         a819c:	0a000003 	beq	a81b0 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x698>
         a81a0:	e1a0200d 	mov	r2, sp
         a81a4:	e28d000c 	add	r0, sp, #12	; 0xc
         a81a8:	e3a01004 	mov	r1, #4	; 0x4
         a81ac:	ebff2141 	bl	706b8 <CommandSetIndexFrame(RefVar const &, long, long)>
         a81b0:	e28d100c 	add	r1, sp, #12	; 0xc
         a81b4:	e5960000 	ldr	r0, [r6]
         a81b8:	eb67a19e 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a81bc:	e59d0000 	ldr	r0, [sp]
         a81c0:	eb6c6bfd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a81c4:	e5bd000c 	ldr	r0, [sp, #12]!
         a81c8:	eb6c6bfb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a81cc:	e28dd004 	add	sp, sp, #4	; 0x4
         a81d0:	e1a0000d 	mov	r0, sp
         a81d4:	eb67d311 	bl	1a9ce20 <TListLoop::$Next(void)>
         a81d8:	e1b05000 	movs	r5, r0
         a81dc:	1affffbb 	bne	a80d0 <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x5b8>
         a81e0:	e28dd00c 	add	sp, sp, #12	; 0xc
         a81e4:	e59f0030 	ldr	r0, [pc, #30]	; a821c <TEditView::TrackScale(TPoint, TStrokePublic *, TRect const &)+0x704>
         a81e8:	e5900000 	ldr	r0, [r0]
         a81ec:	e3a07001 	mov	r7, #1	; 0x1
         a81f0:	e5c0705c 	strb	r7, [r0, #92]	; fField92
         a81f4:	e28d0004 	add	r0, sp, #4	; 0x4
         a81f8:	e3a01000 	mov	r1, #0	; 0x0
         a81fc:	eb678090 	bl	1a88444 <TRegionVar::$__dt(void)>
         a8200:	e28d001c 	add	r0, sp, #28	; 0x1c
         a8204:	e3a01000 	mov	r1, #0	; 0x0
         a8208:	eb6c84a0 	bl	1bc9490 <DragBits::$__dt(void)>
         a820c:	e1a00004 	mov	r0, r4
         a8210:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a8214:	00681ee0 	rsbeq	r1, r8, r0, ror #29
         a8218:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         a821c:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TEditView::DeleteHilitedViews(void)
 * Address: 000a8750
 */
TEditView::DeleteHilitedViews(void) {
    /*
         a8750:	e1a0c00d 	mov	ip, sp
         a8754:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a8758:	e24cb004 	sub	fp, ip, #4	; 0x4
         a875c:	e1a04000 	mov	r4, r0
         a8760:	e24dd008 	sub	sp, sp, #8	; 0x8
         a8764:	e3a00002 	mov	r0, #2	; 0x2
         a8768:	eb6c6677 	bl	1bc214c <$AllocateRefHandle(long)>
         a876c:	e58d0004 	str	r0, [sp, #4]	; fField4
         a8770:	eb68ac8c 	bl	1ad39a8 <$SetCorrectorBusy(void)>
         a8774:	eb6c6674 	bl	1bc214c <$AllocateRefHandle(long)>
         a8778:	e58d0000 	str	r0, [sp]
         a877c:	e1a00004 	mov	r0, r4
         a8780:	eb67c968 	bl	1a9ad28 <TEditView::$InvalAllHilites(void)>
         a8784:	e3a05000 	mov	r5, #0	; 0x0
         a8788:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a878c:	e1a0000d 	mov	r0, sp
         a8790:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a8794:	eb677f26 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a8798:	e1a0000d 	mov	r0, sp
         a879c:	eb67d19f 	bl	1a9ce20 <TListLoop::$Next(void)>
         a87a0:	e1b06000 	movs	r6, r0
         a87a4:	0a00000a 	beq	a87d4 <TEditView::DeleteHilitedViews(void)+0x84>
         a87a8:	e1a00006 	mov	r0, r6
         a87ac:	eb682449 	bl	1ab18d8 <TView::$FirstHilite(void)>
         a87b0:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         a87b4:	e5810000 	str	r0, [r1]
         a87b8:	e3300002 	teq	r0, #2	; 0x2
         a87bc:	11a05006 	movne	r5, r6
         a87c0:	1a000003 	bne	a87d4 <TEditView::DeleteHilitedViews(void)+0x84>
         a87c4:	e1a0000d 	mov	r0, sp
         a87c8:	eb67d194 	bl	1a9ce20 <TListLoop::$Next(void)>
         a87cc:	e1b06000 	movs	r6, r0
         a87d0:	1afffff4 	bne	a87a8 <TEditView::DeleteHilitedViews(void)+0x58>
         a87d4:	e28dd00c 	add	sp, sp, #12	; 0xc
         a87d8:	e3350000 	teq	r5, #0	; 0x0
         a87dc:	0a000006 	beq	a87fc <TEditView::DeleteHilitedViews(void)+0xac>
         a87e0:	e28d1004 	add	r1, sp, #4	; 0x4
         a87e4:	e1a00005 	mov	r0, r5
         a87e8:	e5952000 	ldr	r2, [r5]
         a87ec:	e1a0e00f 	mov	lr, pc
         a87f0:	e282f0a4 	add	pc, r2, #164	; 0xa4
         a87f4:	e3350000 	teq	r5, #0	; 0x0
         a87f8:	1affffe1 	bne	a8784 <TEditView::DeleteHilitedViews(void)+0x34>
         a87fc:	e1a0000d 	mov	r0, sp
         a8800:	eb68ac62 	bl	1ad3990 <$RestoreCorrectorBusy(RefVar const &)>
         a8804:	e3a03000 	mov	r3, #0	; 0x0
         a8808:	e92d0008 	stmdb	sp!, {r3}
         a880c:	e1a01004 	mov	r1, r4
         a8810:	e59f5028 	ldr	r5, [pc, #28]	; a8840 <TEditView::DeleteHilitedViews(void)+0xf0>	; fField28
         a8814:	e3a02000 	mov	r2, #0	; 0x0
         a8818:	e5950000 	ldr	r0, [r5]
         a881c:	eb68ac70 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         a8820:	e3a01001 	mov	r1, #1	; 0x1
         a8824:	e5950000 	ldr	r0, [r5]
         a8828:	e5c0105c 	strb	r1, [r0, #92]	; fField92
         a882c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         a8830:	eb6c6a61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a8834:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a8838:	eb6c6a5f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a883c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         a8840:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TEditView::TextContainingPoint(TPoint &, TRect *, long *)
 * Address: 000a8844
 */
TEditView::TextContainingPoint(TPoint &, TRect *, long *) {
    /*
         a8844:	e1a0c00d 	mov	ip, sp
         a8848:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a884c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a8850:	e1a08000 	mov	r8, r0
         a8854:	e1a04001 	mov	r4, r1
         a8858:	e1a06002 	mov	r6, r2
         a885c:	e1a05003 	mov	r5, r3
         a8860:	e24dd004 	sub	sp, sp, #4	; 0x4
         a8864:	e3a07000 	mov	r7, #0	; 0x0
         a8868:	e3a00041 	mov	r0, #65	; 0x41
         a886c:	eb6bf2a1 	bl	1ba52f8 <$U_CONST_CHAR>
         a8870:	e5cd0001 	strb	r0, [sp, #1]
         a8874:	e1a00440 	mov	r0, r0, asr #8
         a8878:	e44d0010 	strb	r0, [sp], -#16	; fField16
         a887c:	e3a09000 	mov	r9, #0	; 0x0
         a8880:	e5cd9013 	strb	r9, [sp, #19]
         a8884:	e5cd9012 	strb	r9, [sp, #18]
         a8888:	e3360000 	teq	r6, #0	; 0x0
         a888c:	0a000021 	beq	a8918 <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0xd4>
         a8890:	e24dd008 	sub	sp, sp, #8	; 0x8
         a8894:	e5941000 	ldr	r1, [r4]
         a8898:	e1a01841 	mov	r1, r1, asr #16
         a889c:	e1a03001 	mov	r3, r1
         a88a0:	e5940002 	ldr	r0, [r4, #2]	; fField2
         a88a4:	e1a00840 	mov	r0, r0, asr #16
         a88a8:	e1a02000 	mov	r2, r0
         a88ac:	e2811001 	add	r1, r1, #1	; 0x1
         a88b0:	e1a01801 	mov	r1, r1, lsl #16
         a88b4:	e1a01841 	mov	r1, r1, asr #16
         a88b8:	e596c006 	ldr	ip, [r6, #6]	; fField6
         a88bc:	e1a0c82c 	mov	ip, ip, lsr #16
         a88c0:	e596e002 	ldr	lr, [r6, #2]	; fField2
         a88c4:	e1a0e82e 	mov	lr, lr, lsr #16
         a88c8:	e04cc00e 	sub	ip, ip, lr
         a88cc:	e08c0000 	add	r0, ip, r0
         a88d0:	e1a00800 	mov	r0, r0, lsl #16
         a88d4:	e1a00840 	mov	r0, r0, asr #16
         a88d8:	e5cd3001 	strb	r3, [sp, #1]
         a88dc:	e1a03443 	mov	r3, r3, asr #8
         a88e0:	e5cd3000 	strb	r3, [sp]
         a88e4:	e5cd2003 	strb	r2, [sp, #3]
         a88e8:	e1a02442 	mov	r2, r2, asr #8
         a88ec:	e5cd2002 	strb	r2, [sp, #2]	; fField2
         a88f0:	e5cd1005 	strb	r1, [sp, #5]
         a88f4:	e1a01441 	mov	r1, r1, asr #8
         a88f8:	e5cd1004 	strb	r1, [sp, #4]	; fField4
         a88fc:	e5cd0007 	strb	r0, [sp, #7]
         a8900:	e1a00440 	mov	r0, r0, asr #8
         a8904:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         a8908:	e28d0010 	add	r0, sp, #16	; 0x10
         a890c:	e8bd1008 	ldmia	sp!, {r3, ip}
         a8910:	e8801008 	stmia	r0, {r3, ip}
         a8914:	ea00001a 	b	a8984 <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0x140>
         a8918:	e5941000 	ldr	r1, [r4]
         a891c:	e1a01841 	mov	r1, r1, asr #16
         a8920:	e1a02001 	mov	r2, r1
         a8924:	e5940002 	ldr	r0, [r4, #2]	; fField2
         a8928:	e1a00840 	mov	r0, r0, asr #16
         a892c:	e1a03000 	mov	r3, r0
         a8930:	e2811001 	add	r1, r1, #1	; 0x1
         a8934:	e1a01801 	mov	r1, r1, lsl #16
         a8938:	e1a01841 	mov	r1, r1, asr #16
         a893c:	e2800001 	add	r0, r0, #1	; 0x1
         a8940:	e1a00800 	mov	r0, r0, lsl #16
         a8944:	e1a00840 	mov	r0, r0, asr #16
         a8948:	e5cd2001 	strb	r2, [sp, #1]
         a894c:	e1a02442 	mov	r2, r2, asr #8
         a8950:	e5cd2000 	strb	r2, [sp]
         a8954:	e5cd3003 	strb	r3, [sp, #3]
         a8958:	e1a02443 	mov	r2, r3, asr #8
         a895c:	e5cd2002 	strb	r2, [sp, #2]	; fField2
         a8960:	e5cd1005 	strb	r1, [sp, #5]
         a8964:	e1a01441 	mov	r1, r1, asr #8
         a8968:	e5cd1004 	strb	r1, [sp, #4]	; fField4
         a896c:	e5cd0007 	strb	r0, [sp, #7]
         a8970:	e1a00440 	mov	r0, r0, asr #8
         a8974:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         a8978:	e28d0008 	add	r0, sp, #8	; 0x8
         a897c:	e89d1008 	ldmia	sp, {r3, ip}
         a8980:	e8801008 	stmia	r0, {r3, ip}
         a8984:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a8988:	e1a0000d 	mov	r0, sp
         a898c:	e5b81020 	ldr	r1, [r8, #32]!	; fField32
         a8990:	eb677ea7 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a8994:	e1a0000d 	mov	r0, sp
         a8998:	eb67d120 	bl	1a9ce20 <TListLoop::$Next(void)>
         a899c:	e1b06000 	movs	r6, r0
         a89a0:	0a000029 	beq	a8a4c <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0x208>
         a89a4:	e5960008 	ldr	r0, [r6, #8]	; fField8
         a89a8:	e3100001 	tst	r0, #1	; 0x1
         a89ac:	0a000022 	beq	a8a3c <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0x1f8>
         a89b0:	e1a00006 	mov	r0, r6
         a89b4:	e3a01053 	mov	r1, #83	; 0x53
         a89b8:	e5962000 	ldr	r2, [r6]
         a89bc:	e1a0e00f 	mov	lr, pc
         a89c0:	e282f004 	add	pc, r2, #4	; 0x4
         a89c4:	e3300000 	teq	r0, #0	; 0x0
         a89c8:	0a00001b 	beq	a8a3c <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0x1f8>
         a89cc:	e24dd004 	sub	sp, sp, #4	; 0x4
         a89d0:	e1a08006 	mov	r8, r6
         a89d4:	e3a03000 	mov	r3, #0	; 0x0
         a89d8:	e3a02000 	mov	r2, #0	; 0x0
         a89dc:	e3a01000 	mov	r1, #0	; 0x0
         a89e0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         a89e4:	e3a00002 	mov	r0, #2	; 0x2
         a89e8:	eb6c65d7 	bl	1bc214c <$AllocateRefHandle(long)>
         a89ec:	e58d000c 	str	r0, [sp, #12]
         a89f0:	e28d300c 	add	r3, sp, #12	; 0xc
         a89f4:	e3a02000 	mov	r2, #0	; 0x0
         a89f8:	e3a01000 	mov	r1, #0	; 0x0
         a89fc:	e1a00004 	mov	r0, r4
         a8a00:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         a8a04:	e28d3034 	add	r3, sp, #52	; 0x34
         a8a08:	e28d103c 	add	r1, sp, #60	; 0x3c
         a8a0c:	e1a00008 	mov	r0, r8
         a8a10:	e3a02001 	mov	r2, #1	; 0x1
         a8a14:	e598c000 	ldr	ip, [r8]
         a8a18:	e1a0e00f 	mov	lr, pc
         a8a1c:	e28cff52 	add	pc, ip, #328	; 0x148
         a8a20:	e1a08000 	mov	r8, r0
         a8a24:	e5bd001c 	ldr	r0, [sp, #28]!	; fField28
         a8a28:	eb6c69e3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a8a2c:	e1580007 	cmp	r8, r7
         a8a30:	c1a07008 	movgt	r7, r8
         a8a34:	c1a0a006 	movgt	sl, r6
         a8a38:	e28dd004 	add	sp, sp, #4	; 0x4
         a8a3c:	e1a0000d 	mov	r0, sp
         a8a40:	eb67d0f6 	bl	1a9ce20 <TListLoop::$Next(void)>
         a8a44:	e1b06000 	movs	r6, r0
         a8a48:	1affffd5 	bne	a89a4 <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0x160>
         a8a4c:	e28dd00c 	add	sp, sp, #12	; 0xc
         a8a50:	e3350000 	teq	r5, #0	; 0x0
         a8a54:	15857000 	strne	r7, [r5]
         a8a58:	e59f0020 	ldr	r0, [pc, #20]	; a8a80 <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0x23c>
         a8a5c:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
         a8a60:	e3370000 	teq	r7, #0	; 0x0
         a8a64:	0a000006 	beq	a8a84 <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0x240>
         a8a68:	e3370002 	teq	r7, #2	; 0x2
         a8a6c:	1a000001 	bne	a8a78 <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0x234>
         a8a70:	e3300000 	teq	r0, #0	; 0x0
         a8a74:	1a000002 	bne	a8a84 <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0x240>
         a8a78:	e1a0000a 	mov	r0, sl
         a8a7c:	ea000001 	b	a8a88 <TEditView::TextContainingPoint(TPoint &, TRect *, long *)+0x244>
         a8a80:	0c100cc4 	ldceq	12, cr0, [r0], -#784
         a8a84:	e1a00009 	mov	r0, r9
         a8a88:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::BoundsOverlapsGraphics(TRect &)
 * Address: 000a8a8c
 */
TEditView::BoundsOverlapsGraphics(TRect &) {
    /*
         a8a8c:	e3a00000 	mov	r0, #0	; 0x0
         a8a90:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEditView::GetSupportedDropTypes(TPoint const &)
 * Address: 000a8a94
 */
TEditView::GetSupportedDropTypes(TPoint const &) {
    /*
         a8a94:	e1a0c00d 	mov	ip, sp
         a8a98:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a8a9c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a8aa0:	eb682bbf 	bl	1ab39a4 <TView::$GetSupportedDropTypes(TPoint const &)>
         a8aa4:	eb6c65a8 	bl	1bc214c <$AllocateRefHandle(long)>
         a8aa8:	e1a04000 	mov	r4, r0
         a8aac:	e5900000 	ldr	r0, [r0]
         a8ab0:	e3a05000 	mov	r5, #0	; 0x0
         a8ab4:	e3300002 	teq	r0, #2	; 0x2
         a8ab8:	1a000019 	bne	a8b24 <TEditView::GetSupportedDropTypes(TPoint const &)+0x90>
         a8abc:	e3a00004 	mov	r0, #4	; 0x4
         a8ac0:	eb67ccb5 	bl	1a9bd9c <$MakeArray(long)>
         a8ac4:	e5840000 	str	r0, [r4]
         a8ac8:	e59f1068 	ldr	r1, [pc, #68]	; a8b38 <TEditView::GetSupportedDropTypes(TPoint const &)+0xa4>
         a8acc:	e5911000 	ldr	r1, [r1]
         a8ad0:	e5912000 	ldr	r2, [r1]
         a8ad4:	e1a01005 	mov	r1, r5
         a8ad8:	eb6c761e 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a8adc:	e59f0058 	ldr	r0, [pc, #58]	; a8b3c <TEditView::GetSupportedDropTypes(TPoint const &)+0xa8>
         a8ae0:	e5900000 	ldr	r0, [r0]
         a8ae4:	e5902000 	ldr	r2, [r0]
         a8ae8:	e3a01001 	mov	r1, #1	; 0x1
         a8aec:	e5940000 	ldr	r0, [r4]
         a8af0:	eb6c7618 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a8af4:	e59f0044 	ldr	r0, [pc, #44]	; a8b40 <TEditView::GetSupportedDropTypes(TPoint const &)+0xac>
         a8af8:	e5900000 	ldr	r0, [r0]
         a8afc:	e5902000 	ldr	r2, [r0]
         a8b00:	e3a01002 	mov	r1, #2	; 0x2
         a8b04:	e5940000 	ldr	r0, [r4]
         a8b08:	eb6c7612 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a8b0c:	e59f0030 	ldr	r0, [pc, #30]	; a8b44 <TEditView::GetSupportedDropTypes(TPoint const &)+0xb0>
         a8b10:	e5900000 	ldr	r0, [r0]
         a8b14:	e5902000 	ldr	r2, [r0]
         a8b18:	e3a01003 	mov	r1, #3	; 0x3
         a8b1c:	e5940000 	ldr	r0, [r4]
         a8b20:	eb6c760c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a8b24:	e5945000 	ldr	r5, [r4]
         a8b28:	e1a00004 	mov	r0, r4
         a8b2c:	eb6c69a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a8b30:	e1a00005 	mov	r0, r5
         a8b34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         a8b38:	00684ac0 	rsbeq	r4, r8, r0, asr #21
         a8b3c:	00683f28 	rsbeq	r3, r8, r8, lsr #30
         a8b40:	00683220 	rsbeq	r3, r8, r0, lsr #4
         a8b44:	00683ec0 	rsbeq	r3, r8, r0, asr #29
    */
}

/**
 * Symbol: TEditView::GetDropData(RefVar const &, RefVar const &)
 * Address: 000a8b48
 */
TEditView::GetDropData(RefVar const &, RefVar const &) {
    /*
         a8b48:	e1a0c00d 	mov	ip, sp
         a8b4c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a8b50:	e24cb004 	sub	fp, ip, #4	; 0x4
         a8b54:	e1a06000 	mov	r6, r0
         a8b58:	e1a05001 	mov	r5, r1
         a8b5c:	e1a04002 	mov	r4, r2
         a8b60:	e1a00002 	mov	r0, r2
         a8b64:	eb6d2b89 	bl	1bf3990 <$IsFrame(RefVar const &)>
         a8b68:	e3300000 	teq	r0, #0	; 0x0
         a8b6c:	0a000003 	beq	a8b80 <TEditView::GetDropData(RefVar const &, RefVar const &)+0x38>
         a8b70:	e1a00004 	mov	r0, r4
         a8b74:	eb6c8678 	bl	1bca55c <$GetView(RefVar const &)>
         a8b78:	e1b07000 	movs	r7, r0
         a8b7c:	1a000004 	bne	a8b94 <TEditView::GetDropData(RefVar const &, RefVar const &)+0x4c>
         a8b80:	e1a02004 	mov	r2, r4
         a8b84:	e1a01005 	mov	r1, r5
         a8b88:	e1a00006 	mov	r0, r6
         a8b8c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         a8b90:	ea68275e 	b	1ab2910 <TView::$GetDropData(RefVar const &, RefVar const &)>
         a8b94:	e24dd004 	sub	sp, sp, #4	; 0x4
         a8b98:	e1a02004 	mov	r2, r4
         a8b9c:	e1a01005 	mov	r1, r5
         a8ba0:	e1a00007 	mov	r0, r7
         a8ba4:	e5973000 	ldr	r3, [r7]
         a8ba8:	e1a0e00f 	mov	lr, pc
         a8bac:	e283f0cc 	add	pc, r3, #204	; 0xcc
         a8bb0:	eb6c6565 	bl	1bc214c <$AllocateRefHandle(long)>
         a8bb4:	e40d0004 	str	r0, [sp], -#4	; fField4
         a8bb8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a8bbc:	e5900000 	ldr	r0, [r0]
         a8bc0:	e3300002 	teq	r0, #2	; 0x2
         a8bc4:	1a00000a 	bne	a8bf4 <TEditView::GetDropData(RefVar const &, RefVar const &)+0xac>
         a8bc8:	e1a00007 	mov	r0, r7
         a8bcc:	eb6c8245 	bl	1bc94e8 <TView::$DataFrame(void)>
         a8bd0:	eb6c655d 	bl	1bc214c <$AllocateRefHandle(long)>
         a8bd4:	e58d0000 	str	r0, [sp]
         a8bd8:	e1a0000d 	mov	r0, sp
         a8bdc:	eb6c6971 	bl	1bc31a8 <$DeepClone(RefVar const &)>
         a8be0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a8be4:	e5810000 	str	r0, [r1]
         a8be8:	e59d0000 	ldr	r0, [sp]
         a8bec:	eb6c6972 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a8bf0:	ea00001b 	b	a8c64 <TEditView::GetDropData(RefVar const &, RefVar const &)+0x11c>
         a8bf4:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a8bf8:	e5970010 	ldr	r0, [r7, #16]	; fField16
         a8bfc:	e58d0000 	str	r0, [sp]
         a8c00:	e5960010 	ldr	r0, [r6, #16]	; fField16
         a8c04:	e58d0004 	str	r0, [sp, #4]	; fField4
         a8c08:	e59d0000 	ldr	r0, [sp]
         a8c0c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a8c10:	e0400001 	sub	r0, r0, r1
         a8c14:	e1a00800 	mov	r0, r0, lsl #16
         a8c18:	e1a00840 	mov	r0, r0, asr #16
         a8c1c:	e41d1004 	ldr	r1, [sp], -#4	; fField4
         a8c20:	e1a01821 	mov	r1, r1, lsr #16
         a8c24:	e59d200a 	ldr	r2, [sp, #10]
         a8c28:	e0411002 	sub	r1, r1, r2
         a8c2c:	e1a01801 	mov	r1, r1, lsl #16
         a8c30:	e1a01841 	mov	r1, r1, asr #16
         a8c34:	e5cd0003 	strb	r0, [sp, #3]
         a8c38:	e1a00440 	mov	r0, r0, asr #8
         a8c3c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a8c40:	e5cd1001 	strb	r1, [sp, #1]
         a8c44:	e1a00441 	mov	r0, r1, asr #8
         a8c48:	e5cd0000 	strb	r0, [sp]
         a8c4c:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a8c50:	e58d0008 	str	r0, [sp, #8]	; fField8
         a8c54:	e28d1008 	add	r1, sp, #8	; 0x8
         a8c58:	e28d0010 	add	r0, sp, #16	; 0x10
         a8c5c:	ebffcf7d 	bl	9ca58 <OffsetBoundsRef(RefVar const &, TPoint const &)>
         a8c60:	e28dd00c 	add	sp, sp, #12	; 0xc
         a8c64:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a8c68:	e5904000 	ldr	r4, [r0]
         a8c6c:	eb6c6952 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a8c70:	e1a00004 	mov	r0, r4
         a8c74:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::GetDragInfo(TDragInfo *, unsigned char)
 * Address: 000a8c78
 */
TEditView::GetDragInfo(TDragInfo *, unsigned char) {
    /*
         a8c78:	e1a0c00d 	mov	ip, sp
         a8c7c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         a8c80:	e24cb004 	sub	fp, ip, #4	; 0x4
         a8c84:	e1a05000 	mov	r5, r0
         a8c88:	e1a04001 	mov	r4, r1
         a8c8c:	e20280ff 	and	r8, r2, #255	; 0xff
         a8c90:	eb6858a7 	bl	1abef34 <TEditView::$GetHilitedViewsSorted(void)>
         a8c94:	e1b06000 	movs	r6, r0
         a8c98:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         a8c9c:	e1a00005 	mov	r0, r5
         a8ca0:	ebfffb85 	bl	a7abc <TEditView::CountHilites(void)>
         a8ca4:	e1a09006 	mov	r9, r6
         a8ca8:	e2505001 	subs	r5, r0, #1	; 0x1
         a8cac:	4a00000d 	bmi	a8ce8 <TEditView::GetDragInfo(TDragInfo *, unsigned char)+0x70>
         a8cb0:	e3380000 	teq	r8, #0	; 0x0
         a8cb4:	e4997004 	ldr	r7, [r9], #4	; fField4
         a8cb8:	0a000003 	beq	a8ccc <TEditView::GetDragInfo(TDragInfo *, unsigned char)+0x54>
         a8cbc:	e1a00007 	mov	r0, r7
         a8cc0:	eb6c8205 	bl	1bc94dc <TView::$CopyProtection( const(void))>
         a8cc4:	e3100001 	tst	r0, #1	; 0x1
         a8cc8:	1a000004 	bne	a8ce0 <TEditView::GetDragInfo(TDragInfo *, unsigned char)+0x68>
         a8ccc:	e1a01004 	mov	r1, r4
         a8cd0:	e1a00007 	mov	r0, r7
         a8cd4:	e5972000 	ldr	r2, [r7]
         a8cd8:	e1a0e00f 	mov	lr, pc
         a8cdc:	e282f0c8 	add	pc, r2, #200	; 0xc8
         a8ce0:	e2555001 	subs	r5, r5, #1	; 0x1
         a8ce4:	5afffff1 	bpl	a8cb0 <TEditView::GetDragInfo(TDragInfo *, unsigned char)+0x38>
         a8ce8:	e1a00006 	mov	r0, r6
         a8cec:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         a8cf0:	ea6c927a 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TEditView::AddDragInfo(TDragInfo *)
 * Address: 000a8cf4
 */
TEditView::AddDragInfo(TDragInfo *) {
    /*
         a8cf4:	e1a0c00d 	mov	ip, sp
         a8cf8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a8cfc:	e24cb004 	sub	fp, ip, #4	; 0x4
         a8d00:	e1a05000 	mov	r5, r0
         a8d04:	e1a04001 	mov	r4, r1
         a8d08:	eb67fdc6 	bl	1aa8428 <TView::$AddDragInfo(TDragInfo *)>
         a8d0c:	e1b07000 	movs	r7, r0
         a8d10:	1a000017 	bne	a8d74 <TEditView::AddDragInfo(TDragInfo *)+0x80>
         a8d14:	e1a00005 	mov	r0, r5
         a8d18:	eb685885 	bl	1abef34 <TEditView::$GetHilitedViewsSorted(void)>
         a8d1c:	e1b06000 	movs	r6, r0
         a8d20:	0a000013 	beq	a8d74 <TEditView::AddDragInfo(TDragInfo *)+0x80>
         a8d24:	e1a00005 	mov	r0, r5
         a8d28:	ebfffb63 	bl	a7abc <TEditView::CountHilites(void)>
         a8d2c:	e1a08006 	mov	r8, r6
         a8d30:	e2505001 	subs	r5, r0, #1	; 0x1
         a8d34:	4a00000b 	bmi	a8d68 <TEditView::AddDragInfo(TDragInfo *)+0x74>
         a8d38:	e4980004 	ldr	r0, [r8], #4	; fField4
         a8d3c:	e1a07000 	mov	r7, r0
         a8d40:	eb6c81e5 	bl	1bc94dc <TView::$CopyProtection( const(void))>
         a8d44:	e3100001 	tst	r0, #1	; 0x1
         a8d48:	1a000004 	bne	a8d60 <TEditView::AddDragInfo(TDragInfo *)+0x6c>
         a8d4c:	e1a01004 	mov	r1, r4
         a8d50:	e1a00007 	mov	r0, r7
         a8d54:	e5972000 	ldr	r2, [r7]
         a8d58:	e1a0e00f 	mov	lr, pc
         a8d5c:	e282f0c8 	add	pc, r2, #200	; 0xc8
         a8d60:	e2555001 	subs	r5, r5, #1	; 0x1
         a8d64:	5afffff3 	bpl	a8d38 <TEditView::AddDragInfo(TDragInfo *)+0x44>
         a8d68:	e1a00006 	mov	r0, r6
         a8d6c:	eb6c925b 	bl	1bcd6e0 <$__dl(void *)>
         a8d70:	e3a07001 	mov	r7, #1	; 0x1
         a8d74:	e1a00007 	mov	r0, r7
         a8d78:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::FindDropView(TDragInfo const &, TPoint const &)
 * Address: 000a8d7c
 */
TEditView::FindDropView(TDragInfo const &, TPoint const &) {
    /*
         a8d7c:	e1a0c00d 	mov	ip, sp
         a8d80:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a8d84:	e24cb004 	sub	fp, ip, #4	; 0x4
         a8d88:	e1a05000 	mov	r5, r0
         a8d8c:	e1a06001 	mov	r6, r1
         a8d90:	e1a04002 	mov	r4, r2
         a8d94:	eb6822c3 	bl	1ab18a8 <TView::$FindDropView(TDragInfo const &, TPoint const &)>
         a8d98:	e1a07000 	mov	r7, r0
         a8d9c:	e1300005 	teq	r0, r5
         a8da0:	1a000034 	bne	a8e78 <TEditView::FindDropView(TDragInfo const &, TPoint const &)+0xfc>
         a8da4:	e24dd004 	sub	sp, sp, #4	; 0x4
         a8da8:	e5940000 	ldr	r0, [r4]
         a8dac:	e58d0000 	str	r0, [sp]
         a8db0:	e1a0100d 	mov	r1, sp
         a8db4:	e1a00005 	mov	r0, r5
         a8db8:	e3a03000 	mov	r3, #0	; 0x0
         a8dbc:	e3a02000 	mov	r2, #0	; 0x0
         a8dc0:	eb67ed17 	bl	1aa4224 <TEditView::$TextContainingPoint(TPoint &, TRect *, long *)>
         a8dc4:	e1b05000 	movs	r5, r0
         a8dc8:	0a000029 	beq	a8e74 <TEditView::FindDropView(TDragInfo const &, TPoint const &)+0xf8>
         a8dcc:	e24dd008 	sub	sp, sp, #8	; 0x8
         a8dd0:	e1a0200d 	mov	r2, sp
         a8dd4:	e28d1008 	add	r1, sp, #8	; 0x8
         a8dd8:	e1a00005 	mov	r0, r5
         a8ddc:	e3a03000 	mov	r3, #0	; 0x0
         a8de0:	e595c000 	ldr	ip, [r5]
         a8de4:	e1a0e00f 	mov	lr, pc
         a8de8:	e28cf074 	add	pc, ip, #116	; 0x74
         a8dec:	e59d0000 	ldr	r0, [sp]
         a8df0:	e1a00840 	mov	r0, r0, asr #16
         a8df4:	e3700902 	cmn	r0, #32768	; 0x8000
         a8df8:	03a05000 	moveq	r5, #0	; 0x0
         a8dfc:	e28dd008 	add	sp, sp, #8	; 0x8
         a8e00:	e3350000 	teq	r5, #0	; 0x0
         a8e04:	0a00001a 	beq	a8e74 <TEditView::FindDropView(TDragInfo const &, TPoint const &)+0xf8>
         a8e08:	e1a02004 	mov	r2, r4
         a8e0c:	e1a01006 	mov	r1, r6
         a8e10:	e1a00005 	mov	r0, r5
         a8e14:	e5953000 	ldr	r3, [r5]
         a8e18:	e1a0e00f 	mov	lr, pc
         a8e1c:	e283f0e0 	add	pc, r3, #224	; 0xe0
         a8e20:	e3300000 	teq	r0, #0	; 0x0
         a8e24:	0a000012 	beq	a8e74 <TEditView::FindDropView(TDragInfo const &, TPoint const &)+0xf8>
         a8e28:	e24dd004 	sub	sp, sp, #4	; 0x4
         a8e2c:	e1a00005 	mov	r0, r5
         a8e30:	eb6822a8 	bl	1ab18d8 <TView::$FirstHilite(void)>
         a8e34:	eb6c64c4 	bl	1bc214c <$AllocateRefHandle(long)>
         a8e38:	e58d0000 	str	r0, [sp]
         a8e3c:	e5900000 	ldr	r0, [r0]
         a8e40:	e3300002 	teq	r0, #2	; 0x2
         a8e44:	0a000006 	beq	a8e64 <TEditView::FindDropView(TDragInfo const &, TPoint const &)+0xe8>
         a8e48:	e1a0100d 	mov	r1, sp
         a8e4c:	e1a00005 	mov	r0, r5
         a8e50:	e5952000 	ldr	r2, [r5]
         a8e54:	e1a0e00f 	mov	lr, pc
         a8e58:	e282f09c 	add	pc, r2, #156	; 0x9c
         a8e5c:	e3300000 	teq	r0, #0	; 0x0
         a8e60:	1a000000 	bne	a8e68 <TEditView::FindDropView(TDragInfo const &, TPoint const &)+0xec>
         a8e64:	e1a07005 	mov	r7, r5
         a8e68:	e59d0000 	ldr	r0, [sp]
         a8e6c:	eb6c68d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a8e70:	e28dd004 	add	sp, sp, #4	; 0x4
         a8e74:	e28dd004 	add	sp, sp, #4	; 0x4
         a8e78:	e1a00007 	mov	r0, r7
         a8e7c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::Drop(RefVar const &, RefVar const &, TPoint *)
 * Address: 000a8f34
 */
TEditView::Drop(RefVar const &, RefVar const &, TPoint *) {
    /*
         a8f34:	e1a0c00d 	mov	ip, sp
         a8f38:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a8f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a8f40:	e1a06000 	mov	r6, r0
         a8f44:	e1a05001 	mov	r5, r1
         a8f48:	e1a04002 	mov	r4, r2
         a8f4c:	eb6815ee 	bl	1aae70c <TView::$Drop(RefVar const &, RefVar const &, TPoint *)>
         a8f50:	e3300000 	teq	r0, #0	; 0x0
         a8f54:	1a00009a 	bne	a91c4 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x290>
         a8f58:	e24dd008 	sub	sp, sp, #8	; 0x8
         a8f5c:	e1a01006 	mov	r1, r6
         a8f60:	e3a02302 	mov	r2, #134217728	; 0x8000000
         a8f64:	e3a0003d 	mov	r0, #61	; 0x3d
         a8f68:	eb67f4f4 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a8f6c:	eb6c6476 	bl	1bc214c <$AllocateRefHandle(long)>
         a8f70:	e58d0004 	str	r0, [sp, #4]	; fField4
         a8f74:	e3a00002 	mov	r0, #2	; 0x2
         a8f78:	eb6c6473 	bl	1bc214c <$AllocateRefHandle(long)>
         a8f7c:	e58d0000 	str	r0, [sp]
         a8f80:	e59f00c8 	ldr	r0, [pc, #c8]	; a9050 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x11c>
         a8f84:	e5900000 	ldr	r0, [r0]
         a8f88:	e5901000 	ldr	r1, [r0]
         a8f8c:	e5950000 	ldr	r0, [r5]
         a8f90:	e5900000 	ldr	r0, [r0]
         a8f94:	eb6c6ca5 	bl	1bc4230 <$EQRef__FlT1>
         a8f98:	e2867010 	add	r7, r6, #16	; 0x10
         a8f9c:	e3a08000 	mov	r8, #0	; 0x0
         a8fa0:	e3300000 	teq	r0, #0	; 0x0
         a8fa4:	0a00002d 	beq	a9060 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x12c>
         a8fa8:	e59f00a4 	ldr	r0, [pc, #a4]	; a9054 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x120>
         a8fac:	e5900000 	ldr	r0, [r0]
         a8fb0:	e5900000 	ldr	r0, [r0]
         a8fb4:	e41d1004 	ldr	r1, [sp], -#4	; fField4
         a8fb8:	e5810000 	str	r0, [r1]
         a8fbc:	e59f0094 	ldr	r0, [pc, #94]	; a9058 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x124>
         a8fc0:	e5900000 	ldr	r0, [r0]
         a8fc4:	e5901000 	ldr	r1, [r0]
         a8fc8:	e5940000 	ldr	r0, [r4]
         a8fcc:	e5900000 	ldr	r0, [r0]
         a8fd0:	eb6c6ca2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a8fd4:	eb6c645c 	bl	1bc214c <$AllocateRefHandle(long)>
         a8fd8:	e58d0000 	str	r0, [sp]
         a8fdc:	e59f1078 	ldr	r1, [pc, #78]	; a905c <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x128>
         a8fe0:	e1a00004 	mov	r0, r4
         a8fe4:	eb6c74ce 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
         a8fe8:	e59d0000 	ldr	r0, [sp]
         a8fec:	e5900000 	ldr	r0, [r0]
         a8ff0:	e3300002 	teq	r0, #2	; 0x2
         a8ff4:	0a000011 	beq	a9040 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x10c>
         a8ff8:	e24dd008 	sub	sp, sp, #8	; 0x8
         a8ffc:	e1a0100d 	mov	r1, sp
         a9000:	e28d0008 	add	r0, sp, #8	; 0x8
         a9004:	eb67ae9b 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         a9008:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         a900c:	e1a00840 	mov	r0, r0, asr #16
         a9010:	e59d1006 	ldr	r1, [sp, #6]	; fField6
         a9014:	e1300841 	teq	r0, r1, asr #16
         a9018:	1a000007 	bne	a903c <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x108>
         a901c:	e5970006 	ldr	r0, [r7, #6]	; fField6
         a9020:	e1a00820 	mov	r0, r0, lsr #16
         a9024:	e5cd0007 	strb	r0, [sp, #7]
         a9028:	e1a00440 	mov	r0, r0, asr #8
         a902c:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         a9030:	e1a0100d 	mov	r1, sp
         a9034:	e28d0008 	add	r0, sp, #8	; 0x8
         a9038:	eb68dc03 	bl	1ae004c <$SetBoundsRect(RefVar const &, TRect const &)>
         a903c:	e28dd008 	add	sp, sp, #8	; 0x8
         a9040:	e59d0000 	ldr	r0, [sp]
         a9044:	eb6c685c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a9048:	e28dd004 	add	sp, sp, #4	; 0x4
         a904c:	ea000021 	b	a90d8 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x1a4>
         a9050:	00684ac0 	rsbeq	r4, r8, r0, asr #21
         a9054:	00683cc8 	rsbeq	r3, r8, r8, asr #25
         a9058:	00684f08 	rsbeq	r4, r8, r8, lsl #30
         a905c:	00684ad8 	ldreqd	r4, [r8], -#168
         a9060:	e59f0164 	ldr	r0, [pc, #164]	; a91cc <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x298>
         a9064:	e5900000 	ldr	r0, [r0]
         a9068:	e5901000 	ldr	r1, [r0]
         a906c:	e5950000 	ldr	r0, [r5]
         a9070:	e5900000 	ldr	r0, [r0]
         a9074:	eb6c6c6d 	bl	1bc4230 <$EQRef__FlT1>
         a9078:	e3300000 	teq	r0, #0	; 0x0
         a907c:	159f014c 	ldrne	r0, [pc, #14c]	; a91d0 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x29c>
         a9080:	1a000010 	bne	a90c8 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x194>
         a9084:	e59f0148 	ldr	r0, [pc, #148]	; a91d4 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x2a0>
         a9088:	e5900000 	ldr	r0, [r0]
         a908c:	e5901000 	ldr	r1, [r0]
         a9090:	e5950000 	ldr	r0, [r5]
         a9094:	e5900000 	ldr	r0, [r0]
         a9098:	eb6c6c64 	bl	1bc4230 <$EQRef__FlT1>
         a909c:	e3300000 	teq	r0, #0	; 0x0
         a90a0:	1a000007 	bne	a90c4 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x190>
         a90a4:	e59f012c 	ldr	r0, [pc, #12c]	; a91d8 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x2a4>
         a90a8:	e5900000 	ldr	r0, [r0]
         a90ac:	e5901000 	ldr	r1, [r0]
         a90b0:	e5950000 	ldr	r0, [r5]
         a90b4:	e5900000 	ldr	r0, [r0]
         a90b8:	eb6c6c5c 	bl	1bc4230 <$EQRef__FlT1>
         a90bc:	e3300000 	teq	r0, #0	; 0x0
         a90c0:	0a000004 	beq	a90d8 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x1a4>
         a90c4:	e59f0110 	ldr	r0, [pc, #110]	; a91dc <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x2a8>
         a90c8:	e5900000 	ldr	r0, [r0]
         a90cc:	e5900000 	ldr	r0, [r0]
         a90d0:	e59d1000 	ldr	r1, [sp]
         a90d4:	e5810000 	str	r0, [r1]
         a90d8:	e59d0000 	ldr	r0, [sp]
         a90dc:	e5900000 	ldr	r0, [r0]
         a90e0:	e3300002 	teq	r0, #2	; 0x2
         a90e4:	0a00000a 	beq	a9114 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x1e0>
         a90e8:	e59f10f0 	ldr	r1, [pc, #f0]	; a91e0 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x2ac>
         a90ec:	e1a05001 	mov	r5, r1
         a90f0:	e1a00004 	mov	r0, r4
         a90f4:	e3a02000 	mov	r2, #0	; 0x0
         a90f8:	eb6c6c5a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         a90fc:	e3300002 	teq	r0, #2	; 0x2
         a9100:	1a000003 	bne	a9114 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x1e0>
         a9104:	e1a0200d 	mov	r2, sp
         a9108:	e1a01005 	mov	r1, r5
         a910c:	e1a00004 	mov	r0, r4
         a9110:	eb6c7494 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a9114:	e1a01004 	mov	r1, r4
         a9118:	e28d0004 	add	r0, sp, #4	; 0x4
         a911c:	eb67f490 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
         a9120:	e28d1004 	add	r1, sp, #4	; 0x4
         a9124:	e59f00b8 	ldr	r0, [pc, #b8]	; a91e4 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x2b0>
         a9128:	e5900000 	ldr	r0, [r0]
         a912c:	eb679dc1 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a9130:	e28d0004 	add	r0, sp, #4	; 0x4
         a9134:	eb67f487 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         a9138:	e1b04000 	movs	r4, r0
         a913c:	0a00001b 	beq	a91b0 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x27c>
         a9140:	e1a00004 	mov	r0, r4
         a9144:	e5941000 	ldr	r1, [r4]
         a9148:	e1a0e00f 	mov	lr, pc
         a914c:	e281f0a0 	add	pc, r1, #160	; 0xa0
         a9150:	e59f0090 	ldr	r0, [pc, #90]	; a91e8 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x2b4>
         a9154:	e5900000 	ldr	r0, [r0]
         a9158:	e5a06030 	str	r6, [r0, #48]!	; fField48
         a915c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         a9160:	e1a00840 	mov	r0, r0, asr #16
         a9164:	e5971000 	ldr	r1, [r7]
         a9168:	e1a01841 	mov	r1, r1, asr #16
         a916c:	e1500001 	cmp	r0, r1
         a9170:	aa00000e 	bge	a91b0 <TEditView::Drop(RefVar const &, RefVar const &, TPoint *)+0x27c>
         a9174:	e0410000 	sub	r0, r1, r0
         a9178:	e1a00800 	mov	r0, r0, lsl #16
         a917c:	e1a00840 	mov	r0, r0, asr #16
         a9180:	e24dd008 	sub	sp, sp, #8	; 0x8
         a9184:	e5cd8003 	strb	r8, [sp, #3]
         a9188:	e5cd8002 	strb	r8, [sp, #2]	; fField2
         a918c:	e5cd0001 	strb	r0, [sp, #1]
         a9190:	e1a00440 	mov	r0, r0, asr #8
         a9194:	e5cd0000 	strb	r0, [sp]
         a9198:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a919c:	e58d0000 	str	r0, [sp]
         a91a0:	e1a00004 	mov	r0, r4
         a91a4:	e59d1000 	ldr	r1, [sp]
         a91a8:	eb6c80d3 	bl	1bc94fc <TView::$DoMoveCommand(TPoint)>
         a91ac:	e28dd004 	add	sp, sp, #4	; 0x4
         a91b0:	e59d0000 	ldr	r0, [sp]
         a91b4:	eb6c6800 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a91b8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a91bc:	eb6c67fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a91c0:	e28dd008 	add	sp, sp, #8	; 0x8
         a91c4:	e3a00001 	mov	r0, #1	; 0x1
         a91c8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         a91cc:	00683ec0 	rsbeq	r3, r8, r0, asr #29
         a91d0:	00683eb8 	streqh	r3, [r8], -#232
         a91d4:	00683f28 	rsbeq	r3, r8, r8, lsr #30
         a91d8:	00683220 	rsbeq	r3, r8, r0, lsr #4
         a91dc:	00683f20 	rsbeq	r3, r8, r0, lsr #30
         a91e0:	006850d8 	ldreqd	r5, [r8], -#8	; fField8
         a91e4:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         a91e8:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)
 * Address: 000a91ec
 */
TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char) {
    /*
         a91ec:	e1a0c00d 	mov	ip, sp
         a91f0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a91f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         a91f8:	e1a04000 	mov	r4, r0
         a91fc:	e1a06001 	mov	r6, r1
         a9200:	e1a05002 	mov	r5, r2
         a9204:	e1a07003 	mov	r7, r3
         a9208:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         a920c:	e20030ff 	and	r3, r0, #255	; 0xff
         a9210:	e1a09003 	mov	r9, r3
         a9214:	e92d0008 	stmdb	sp!, {r3}
         a9218:	e1a03007 	mov	r3, r7
         a921c:	e1a00004 	mov	r0, r4
         a9220:	eb68112f 	bl	1aad6e4 <TView::$DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)>
         a9224:	e28dd004 	add	sp, sp, #4	; 0x4
         a9228:	e3300000 	teq	r0, #0	; 0x0
         a922c:	1a00008b 	bne	a9460 <TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x274>
         a9230:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9234:	e1a00006 	mov	r0, r6
         a9238:	eb0511f1 	bl	1eda04 <FailGetView(RefVar const &)>
         a923c:	e1a08000 	mov	r8, r0
         a9240:	e1a0a000 	mov	sl, r0
         a9244:	eb6821a3 	bl	1ab18d8 <TView::$FirstHilite(void)>
         a9248:	eb6c63bf 	bl	1bc214c <$AllocateRefHandle(long)>
         a924c:	e58d0000 	str	r0, [sp]
         a9250:	e1a0100d 	mov	r1, sp
         a9254:	e1a0000a 	mov	r0, sl
         a9258:	e59a2000 	ldr	r2, [sl]
         a925c:	e1a0e00f 	mov	lr, pc
         a9260:	e282f09c 	add	pc, r2, #156	; 0x9c
         a9264:	e1a0a000 	mov	sl, r0
         a9268:	e59d0000 	ldr	r0, [sp]
         a926c:	eb6c67d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a9270:	e33a0000 	teq	sl, #0	; 0x0
         a9274:	0a000003 	beq	a9288 <TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x9c>
         a9278:	e3390000 	teq	r9, #0	; 0x0
         a927c:	0598001c 	ldreq	r0, [r8, #28]	; fField28
         a9280:	01300004 	teqeq	r0, r4
         a9284:	0a000077 	beq	a9468 <TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x27c>
         a9288:	e24dd004 	sub	sp, sp, #4	; 0x4
         a928c:	e1a0000d 	mov	r0, sp
         a9290:	e3a01000 	mov	r1, #0	; 0x0
         a9294:	eb68adf3 	bl	1ad4a68 <TDragInfo::$__ct(long)>
         a9298:	e1a0100d 	mov	r1, sp
         a929c:	e1a00008 	mov	r0, r8
         a92a0:	e5982000 	ldr	r2, [r8]
         a92a4:	e1a0e00f 	mov	lr, pc
         a92a8:	e282f0c8 	add	pc, r2, #200	; 0xc8
         a92ac:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a92b0:	e28d000c 	add	r0, sp, #12	; 0xc
         a92b4:	e3a02000 	mov	r2, #0	; 0x0
         a92b8:	e3a01000 	mov	r1, #0	; 0x0
         a92bc:	eb689d60 	bl	1ad0844 <$GetItemIndType__9TDragInfoCFlT1>
         a92c0:	eb6c63a1 	bl	1bc214c <$AllocateRefHandle(long)>
         a92c4:	e1a02006 	mov	r2, r6
         a92c8:	e58d0008 	str	r0, [sp, #8]	; fField8
         a92cc:	e28d1008 	add	r1, sp, #8	; 0x8
         a92d0:	e1a00004 	mov	r0, r4
         a92d4:	e5943000 	ldr	r3, [r4]
         a92d8:	e1a0e00f 	mov	lr, pc
         a92dc:	e283f0cc 	add	pc, r3, #204	; 0xcc
         a92e0:	eb6c6399 	bl	1bc214c <$AllocateRefHandle(long)>
         a92e4:	e58d0004 	str	r0, [sp, #4]	; fField4
         a92e8:	e1a0100d 	mov	r1, sp
         a92ec:	e1a00004 	mov	r0, r4
         a92f0:	eb6c8492 	bl	1bca540 <TView::$GetChildOrigin(TPoint *)>
         a92f4:	e24dd004 	sub	sp, sp, #4	; 0x4
         a92f8:	e5950002 	ldr	r0, [r5, #2]	; fField2
         a92fc:	e1a00820 	mov	r0, r0, lsr #16
         a9300:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a9304:	e0800001 	add	r0, r0, r1
         a9308:	e1a00800 	mov	r0, r0, lsl #16
         a930c:	e1a00840 	mov	r0, r0, asr #16
         a9310:	e5952000 	ldr	r2, [r5]
         a9314:	e1a02822 	mov	r2, r2, lsr #16
         a9318:	e59d1006 	ldr	r1, [sp, #6]	; fField6
         a931c:	e0821001 	add	r1, r2, r1
         a9320:	e1a01801 	mov	r1, r1, lsl #16
         a9324:	e1a01841 	mov	r1, r1, asr #16
         a9328:	e24dd004 	sub	sp, sp, #4	; 0x4
         a932c:	e5cd0003 	strb	r0, [sp, #3]
         a9330:	e1a00440 	mov	r0, r0, asr #8
         a9334:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a9338:	e5cd1001 	strb	r1, [sp, #1]
         a933c:	e1a00441 	mov	r0, r1, asr #8
         a9340:	e5cd0000 	strb	r0, [sp]
         a9344:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a9348:	e58d0000 	str	r0, [sp]
         a934c:	e1a0100d 	mov	r1, sp
         a9350:	e28d0008 	add	r0, sp, #8	; 0x8
         a9354:	ebffcdbf 	bl	9ca58 <OffsetBoundsRef(RefVar const &, TPoint const &)>
         a9358:	e24dd008 	sub	sp, sp, #8	; 0x8
         a935c:	e59f00c4 	ldr	r0, [pc, #c4]	; a9428 <TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x23c>
         a9360:	e5900000 	ldr	r0, [r0]
         a9364:	e5901000 	ldr	r1, [r0]
         a9368:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         a936c:	e5900000 	ldr	r0, [r0]
         a9370:	eb6c6bba 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         a9374:	eb6c6374 	bl	1bc214c <$AllocateRefHandle(long)>
         a9378:	e58d0000 	str	r0, [sp]
         a937c:	e1a0000d 	mov	r0, sp
         a9380:	e28d1004 	add	r1, sp, #4	; 0x4
         a9384:	eb67adbb 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         a9388:	e59d0000 	ldr	r0, [sp]
         a938c:	eb6c678a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a9390:	e3a00000 	mov	r0, #0	; 0x0
         a9394:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a9398:	e1b01841 	movs	r1, r1, asr #16
         a939c:	5a000010 	bpl	a93e4 <TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x1f8>
         a93a0:	e24dd004 	sub	sp, sp, #4	; 0x4
         a93a4:	e59d100a 	ldr	r1, [sp, #10]
         a93a8:	e2611000 	rsb	r1, r1, #0	; 0x0
         a93ac:	e1a01801 	mov	r1, r1, lsl #16
         a93b0:	e1a01841 	mov	r1, r1, asr #16
         a93b4:	e24dd004 	sub	sp, sp, #4	; 0x4
         a93b8:	e5cd0003 	strb	r0, [sp, #3]
         a93bc:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a93c0:	e5cd1001 	strb	r1, [sp, #1]
         a93c4:	e1a00441 	mov	r0, r1, asr #8
         a93c8:	e5cd0000 	strb	r0, [sp]
         a93cc:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a93d0:	e58d0000 	str	r0, [sp]
         a93d4:	e1a0100d 	mov	r1, sp
         a93d8:	e28d0014 	add	r0, sp, #20	; 0x14
         a93dc:	ebffcd9d 	bl	9ca58 <OffsetBoundsRef(RefVar const &, TPoint const &)>
         a93e0:	e28dd004 	add	sp, sp, #4	; 0x4
         a93e4:	e24dd004 	sub	sp, sp, #4	; 0x4
         a93e8:	e5970000 	ldr	r0, [r7]
         a93ec:	e58d0000 	str	r0, [sp]
         a93f0:	e1a0300d 	mov	r3, sp
         a93f4:	e28d2014 	add	r2, sp, #20	; 0x14
         a93f8:	e28d1018 	add	r1, sp, #24	; 0x18
         a93fc:	e1a00004 	mov	r0, r4
         a9400:	e594c000 	ldr	ip, [r4]
         a9404:	e1a0e00f 	mov	lr, pc
         a9408:	e28cf0e4 	add	pc, ip, #228	; 0xe4
         a940c:	e3390000 	teq	r9, #0	; 0x0
         a9410:	0a000005 	beq	a942c <TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x240>
         a9414:	e1a00008 	mov	r0, r8
         a9418:	e5981000 	ldr	r1, [r8]
         a941c:	e1a0e00f 	mov	lr, pc
         a9420:	e281f0ac 	add	pc, r1, #172	; 0xac
         a9424:	ea000005 	b	a9440 <TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x254>
         a9428:	00684f08 	rsbeq	r4, r8, r8, lsl #30
         a942c:	e1a01006 	mov	r1, r6
         a9430:	e1a00008 	mov	r0, r8
         a9434:	e5982000 	ldr	r2, [r8]
         a9438:	e1a0e00f 	mov	lr, pc
         a943c:	e282f0ec 	add	pc, r2, #236	; 0xec
         a9440:	e28dd010 	add	sp, sp, #16	; 0x10
         a9444:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a9448:	eb6c675b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a944c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a9450:	eb6c6759 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a9454:	e5bd000c 	ldr	r0, [sp, #12]!
         a9458:	eb6c6757 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a945c:	e28dd008 	add	sp, sp, #8	; 0x8
         a9460:	e3a00001 	mov	r0, #1	; 0x1
         a9464:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a9468:	e24dd004 	sub	sp, sp, #4	; 0x4
         a946c:	e5950000 	ldr	r0, [r5]
         a9470:	e58d0000 	str	r0, [sp]
         a9474:	e5980010 	ldr	r0, [r8, #16]	; fField16
         a9478:	e1a00840 	mov	r0, r0, asr #16
         a947c:	e5951000 	ldr	r1, [r5]
         a9480:	e0801841 	add	r1, r0, r1, asr #16
         a9484:	e5942010 	ldr	r2, [r4, #16]	; fField16
         a9488:	e1a02842 	mov	r2, r2, asr #16
         a948c:	e1510002 	cmp	r1, r2
         a9490:	aa000003 	bge	a94a4 <TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x2b8>
         a9494:	e0420000 	sub	r0, r2, r0
         a9498:	e5cd0001 	strb	r0, [sp, #1]
         a949c:	e1a00440 	mov	r0, r0, asr #8
         a94a0:	e5cd0000 	strb	r0, [sp]
         a94a4:	e1a00008 	mov	r0, r8
         a94a8:	e59d1000 	ldr	r1, [sp]
         a94ac:	eb6c8012 	bl	1bc94fc <TView::$DoMoveCommand(TPoint)>
         a94b0:	eaffffe9 	b	a945c <TEditView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x270>
    */
}

/**
 * Symbol: TEditView::DropRemove(RefVar const &)
 * Address: 000a94b4
 */
TEditView::DropRemove(RefVar const &) {
    /*
         a94b4:	e1a0c00d 	mov	ip, sp
         a94b8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a94bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         a94c0:	e1a05000 	mov	r5, r0
         a94c4:	e1a04001 	mov	r4, r1
         a94c8:	eb68108a 	bl	1aad6f8 <TView::$DropRemove(RefVar const &)>
         a94cc:	e3300000 	teq	r0, #0	; 0x0
         a94d0:	1a000017 	bne	a9534 <TEditView::DropRemove(RefVar const &)+0x80>
         a94d4:	e1a00004 	mov	r0, r4
         a94d8:	eb051149 	bl	1eda04 <FailGetView(RefVar const &)>
         a94dc:	e1a06000 	mov	r6, r0
         a94e0:	e1a01004 	mov	r1, r4
         a94e4:	e5902000 	ldr	r2, [r0]
         a94e8:	e1a0e00f 	mov	lr, pc
         a94ec:	e282f0ec 	add	pc, r2, #236	; 0xec
         a94f0:	e3300000 	teq	r0, #0	; 0x0
         a94f4:	1a00000e 	bne	a9534 <TEditView::DropRemove(RefVar const &)+0x80>
         a94f8:	e5b62004 	ldr	r2, [r6, #4]!	; fField4
         a94fc:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9500:	e59f0034 	ldr	r0, [pc, #34]	; a953c <TEditView::DropRemove(RefVar const &)+0x88>
         a9504:	e1a01005 	mov	r1, r5
         a9508:	e5904000 	ldr	r4, [r0]
         a950c:	e3a0003f 	mov	r0, #63	; 0x3f
         a9510:	eb67f38a 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a9514:	eb6c630c 	bl	1bc214c <$AllocateRefHandle(long)>
         a9518:	e58d0000 	str	r0, [sp]
         a951c:	e1a0100d 	mov	r1, sp
         a9520:	e1a00004 	mov	r0, r4
         a9524:	eb679cc3 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a9528:	e59d0000 	ldr	r0, [sp]
         a952c:	eb6c6722 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a9530:	e28dd004 	add	sp, sp, #4	; 0x4
         a9534:	e3a00001 	mov	r0, #1	; 0x1
         a9538:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         a953c:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TEditView::DropDone(void)
 * Address: 000a9540
 */
TEditView::DropDone(void) {
    /*
         a9540:	e1a0c00d 	mov	ip, sp
         a9544:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a9548:	e24cb004 	sub	fp, ip, #4	; 0x4
         a954c:	e1a04000 	mov	r4, r0
         a9550:	eb68947c 	bl	1ace748 <TView::$DropDone(void)>
         a9554:	e1a00004 	mov	r0, r4
         a9558:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         a955c:	ea680c29 	b	1aac608 <TEditView::$DetermineKeyView(void)>
    */
}

/**
 * Symbol: TEditView::DiceHilited(void)
 * Address: 000a9560
 */
TEditView::DiceHilited(void) {
    /*
         a9560:	e1a0c00d 	mov	ip, sp
         a9564:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a9568:	e24cb004 	sub	fp, ip, #4	; 0x4
         a956c:	e1a04000 	mov	r4, r0
         a9570:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9574:	e3a00002 	mov	r0, #2	; 0x2
         a9578:	eb6c62f3 	bl	1bc214c <$AllocateRefHandle(long)>
         a957c:	e3a07000 	mov	r7, #0	; 0x0
         a9580:	e58d0000 	str	r0, [sp]
         a9584:	e3a06000 	mov	r6, #0	; 0x0
         a9588:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a958c:	e1a0000d 	mov	r0, sp
         a9590:	e5941020 	ldr	r1, [r4, #32]	; fField32
         a9594:	eb677ba6 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a9598:	e1a0000d 	mov	r0, sp
         a959c:	eb67ce1f 	bl	1a9ce20 <TListLoop::$Next(void)>
         a95a0:	e1b05000 	movs	r5, r0
         a95a4:	0a000011 	beq	a95f0 <TEditView::DiceHilited(void)+0x90>
         a95a8:	e1a00005 	mov	r0, r5
         a95ac:	eb6820c9 	bl	1ab18d8 <TView::$FirstHilite(void)>
         a95b0:	e59d100c 	ldr	r1, [sp, #12]
         a95b4:	e5810000 	str	r0, [r1]
         a95b8:	e3300002 	teq	r0, #2	; 0x2
         a95bc:	0a000007 	beq	a95e0 <TEditView::DiceHilited(void)+0x80>
         a95c0:	e28d100c 	add	r1, sp, #12	; 0xc
         a95c4:	e1a00005 	mov	r0, r5
         a95c8:	e5952000 	ldr	r2, [r5]
         a95cc:	e1a0e00f 	mov	lr, pc
         a95d0:	e282f09c 	add	pc, r2, #156	; 0x9c
         a95d4:	e3300000 	teq	r0, #0	; 0x0
         a95d8:	01a06005 	moveq	r6, r5
         a95dc:	0a000003 	beq	a95f0 <TEditView::DiceHilited(void)+0x90>
         a95e0:	e1a0000d 	mov	r0, sp
         a95e4:	eb67ce0d 	bl	1a9ce20 <TListLoop::$Next(void)>
         a95e8:	e1b05000 	movs	r5, r0
         a95ec:	1affffed 	bne	a95a8 <TEditView::DiceHilited(void)+0x48>
         a95f0:	e28dd00c 	add	sp, sp, #12	; 0xc
         a95f4:	e3360000 	teq	r6, #0	; 0x0
         a95f8:	0a00000a 	beq	a9628 <TEditView::DiceHilited(void)+0xc8>
         a95fc:	e3a03000 	mov	r3, #0	; 0x0
         a9600:	e52d7004 	str	r7, [sp, -#4]!	; fField4
         a9604:	e92d0008 	stmdb	sp!, {r3}
         a9608:	e28d3004 	add	r3, sp, #4	; 0x4
         a960c:	e1a02004 	mov	r2, r4
         a9610:	e28d1008 	add	r1, sp, #8	; 0x8
         a9614:	e1a00006 	mov	r0, r6
         a9618:	eb679c81 	bl	1a90824 <TDataView::$DiceHilited(RefVar const &, TEditView *, TPoint &, unsigned char)>
         a961c:	e28dd008 	add	sp, sp, #8	; 0x8
         a9620:	e3360000 	teq	r6, #0	; 0x0
         a9624:	1affffd6 	bne	a9584 <TEditView::DiceHilited(void)+0x24>
         a9628:	e59d0000 	ldr	r0, [sp]
         a962c:	eb6c66e2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a9630:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)
 * Address: 000a9634
 */
TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &) {
    /*
         a9634:	e1a0c00d 	mov	ip, sp
         a9638:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a963c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a9640:	e24dd084 	sub	sp, sp, #132	; 0x84
         a9644:	e3a04000 	mov	r4, #0	; 0x0
         a9648:	e51b0038 	ldr	r0, [fp, -#56]
         a964c:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a9650:	e1a0000d 	mov	r0, sp
         a9654:	eb677b76 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a9658:	e1a0000d 	mov	r0, sp
         a965c:	eb67cdef 	bl	1a9ce20 <TListLoop::$Next(void)>
         a9660:	e1b05000 	movs	r5, r0
         a9664:	0a00006f 	beq	a9828 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x1f4>
         a9668:	e24dd014 	sub	sp, sp, #20	; 0x14
         a966c:	e3a09000 	mov	r9, #0	; 0x0
         a9670:	e1a01005 	mov	r1, r5
         a9674:	e1a0000d 	mov	r0, sp
         a9678:	eb677756 	bl	1a873d8 <HiliteLoop::$__ct(TView *)>
         a967c:	e1a0000d 	mov	r0, sp
         a9680:	eb67cde2 	bl	1a9ce10 <HiliteLoop::$Next(void)>
         a9684:	e3300000 	teq	r0, #0	; 0x0
         a9688:	0a00005c 	beq	a9800 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x1cc>
         a968c:	e285a010 	add	sl, r5, #16	; 0x10
         a9690:	e1a00005 	mov	r0, r5
         a9694:	e5951000 	ldr	r1, [r5]
         a9698:	e1a0e00f 	mov	lr, pc
         a969c:	e281f0c0 	add	pc, r1, #192	; 0xc0
         a96a0:	e3100004 	tst	r0, #4	; 0x4
         a96a4:	0a000051 	beq	a97f0 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x1bc>
         a96a8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a96ac:	e59d701c 	ldr	r7, [sp, #28]	; fField28
         a96b0:	e59a0000 	ldr	r0, [sl]
         a96b4:	e58d0008 	str	r0, [sp, #8]	; fField8
         a96b8:	e2870004 	add	r0, r7, #4	; 0x4
         a96bc:	e8905000 	ldmia	r0, {ip, lr}
         a96c0:	e88d5000 	stmia	sp, {ip, lr}
         a96c4:	e24dd004 	sub	sp, sp, #4	; 0x4
         a96c8:	e59d000c 	ldr	r0, [sp, #12]
         a96cc:	e58d0000 	str	r0, [sp]
         a96d0:	e28d0004 	add	r0, sp, #4	; 0x4
         a96d4:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a96d8:	e1a01841 	mov	r1, r1, asr #16
         a96dc:	e59d2000 	ldr	r2, [sp]
         a96e0:	e1a02842 	mov	r2, r2, asr #16
         a96e4:	eb6aa07f 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a96e8:	e28dd004 	add	sp, sp, #4	; 0x4
         a96ec:	e1a0000d 	mov	r0, sp
         a96f0:	e3e01007 	mvn	r1, #7	; 0x7
         a96f4:	e1a02001 	mov	r2, r1
         a96f8:	eb6a9c50 	bl	1b50840 <$InsetRect__FP4RectlT2>
         a96fc:	e51b0034 	ldr	r0, [fp, -#52]	; fField52
         a9700:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         a9704:	e28d1004 	add	r1, sp, #4	; 0x4
         a9708:	e28dd004 	add	sp, sp, #4	; 0x4
         a970c:	eb6aa48a 	bl	1b5293c <$PtInRect(Point, Rect *)>
         a9710:	e3300000 	teq	r0, #0	; 0x0
         a9714:	0a000034 	beq	a97ec <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x1b8>
         a9718:	e5970020 	ldr	r0, [r7, #32]	; fField32
         a971c:	e2806004 	add	r6, r0, #4	; 0x4
         a9720:	e3a08000 	mov	r8, #0	; 0x0
         a9724:	e5900002 	ldr	r0, [r0, #2]	; fField2
         a9728:	e1a00840 	mov	r0, r0, asr #16
         a972c:	e3500000 	cmp	r0, #0	; 0x0
         a9730:	da00002d 	ble	a97ec <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x1b8>
         a9734:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9738:	e5960002 	ldr	r0, [r6, #2]	; fField2
         a973c:	e1a00820 	mov	r0, r0, lsr #16
         a9740:	e59d100c 	ldr	r1, [sp, #12]
         a9744:	e0800001 	add	r0, r0, r1
         a9748:	e1a00800 	mov	r0, r0, lsl #16
         a974c:	e1a00840 	mov	r0, r0, asr #16
         a9750:	e5962000 	ldr	r2, [r6]
         a9754:	e1a02822 	mov	r2, r2, lsr #16
         a9758:	e59d100e 	ldr	r1, [sp, #14]
         a975c:	e0821001 	add	r1, r2, r1
         a9760:	e1a01801 	mov	r1, r1, lsl #16
         a9764:	e1a01841 	mov	r1, r1, asr #16
         a9768:	e24dd004 	sub	sp, sp, #4	; 0x4
         a976c:	e5cd0003 	strb	r0, [sp, #3]
         a9770:	e1a00440 	mov	r0, r0, asr #8
         a9774:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a9778:	e5cd1001 	strb	r1, [sp, #1]
         a977c:	e1a00441 	mov	r0, r1, asr #8
         a9780:	e5cd0000 	strb	r0, [sp]
         a9784:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a9788:	e3540004 	cmp	r4, #4	; 0x4
         a978c:	e58d0000 	str	r0, [sp]
         a9790:	aa00000e 	bge	a97d0 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x19c>
         a9794:	e24b1034 	sub	r1, fp, #52	; 0x34
         a9798:	e1a0000d 	mov	r0, sp
         a979c:	eb03be88 	bl	1991c4 <CheapDistance__FRC6TPointT1>
         a97a0:	e3500008 	cmp	r0, #8	; 0x8
         a97a4:	aa000009 	bge	a97d0 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x19c>
         a97a8:	e1b00009 	movs	r0, r9
         a97ac:	e2899001 	add	r9, r9, #1	; 0x1
         a97b0:	01a00005 	moveq	r0, r5
         a97b4:	13a00000 	movne	r0, #0	; 0x0
         a97b8:	e1a01004 	mov	r1, r4
         a97bc:	e2844001 	add	r4, r4, #1	; 0x1
         a97c0:	e0611181 	rsb	r1, r1, r1, lsl #3
         a97c4:	e28d2030 	add	r2, sp, #48	; 0x30
         a97c8:	e0821101 	add	r1, r2, r1, lsl #2
         a97cc:	e5a10004 	str	r0, [r1, #4]!	; fField4
         a97d0:	e2866004 	add	r6, r6, #4	; 0x4
         a97d4:	e28dd004 	add	sp, sp, #4	; 0x4
         a97d8:	e2888001 	add	r8, r8, #1	; 0x1
         a97dc:	e5970020 	ldr	r0, [r7, #32]	; fField32
         a97e0:	e5900002 	ldr	r0, [r0, #2]	; fField2
         a97e4:	e1580840 	cmp	r8, r0, asr #16
         a97e8:	baffffd1 	blt	a9734 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x100>
         a97ec:	e28dd00c 	add	sp, sp, #12	; 0xc
         a97f0:	e1a0000d 	mov	r0, sp
         a97f4:	eb67cd85 	bl	1a9ce10 <HiliteLoop::$Next(void)>
         a97f8:	e3300000 	teq	r0, #0	; 0x0
         a97fc:	1affffa3 	bne	a9690 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x5c>
         a9800:	e1a0000d 	mov	r0, sp
         a9804:	e3a01000 	mov	r1, #0	; 0x0
         a9808:	eb677b0c 	bl	1a88440 <HiliteLoop::$__dt(void)>
         a980c:	e28dd014 	add	sp, sp, #20	; 0x14
         a9810:	e1a0000d 	mov	r0, sp
         a9814:	eb67cd81 	bl	1a9ce20 <TListLoop::$Next(void)>
         a9818:	e1b05000 	movs	r5, r0
         a981c:	1affff91 	bne	a9668 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x34>
         a9820:	e3340000 	teq	r4, #0	; 0x0
         a9824:	1a000001 	bne	a9830 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x1fc>
         a9828:	e3a00000 	mov	r0, #0	; 0x0
         a982c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a9830:	e3a00037 	mov	r0, #55	; 0x37
         a9834:	eb686a72 	bl	1ac4204 <$BusyBoxSend(long)>
         a9838:	e3a01001 	mov	r1, #1	; 0x1
         a983c:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
         a9840:	eb67c12d 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
         a9844:	e3a00000 	mov	r0, #0	; 0x0
         a9848:	e3a05000 	mov	r5, #0	; 0x0
         a984c:	e3540000 	cmp	r4, #0	; 0x0
         a9850:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         a9854:	da000017 	ble	a98b8 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x284>
         a9858:	e0651185 	rsb	r1, r5, r5, lsl #3
         a985c:	e28d0010 	add	r0, sp, #16	; 0x10
         a9860:	e0800101 	add	r0, r0, r1, lsl #2
         a9864:	e5b06004 	ldr	r6, [r0, #4]!	; fField4
         a9868:	e3360000 	teq	r6, #0	; 0x0
         a986c:	0a00000e 	beq	a98ac <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x278>
         a9870:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9874:	e1a00006 	mov	r0, r6
         a9878:	eb682016 	bl	1ab18d8 <TView::$FirstHilite(void)>
         a987c:	eb6c6232 	bl	1bc214c <$AllocateRefHandle(long)>
         a9880:	e58d0000 	str	r0, [sp]
         a9884:	e1a0100d 	mov	r1, sp
         a9888:	e3a03000 	mov	r3, #0	; 0x0
         a988c:	e92d0008 	stmdb	sp!, {r3}
         a9890:	e28d3008 	add	r3, sp, #8	; 0x8
         a9894:	e1a00006 	mov	r0, r6
         a9898:	e51b2038 	ldr	r2, [fp, -#56]
         a989c:	eb679be0 	bl	1a90824 <TDataView::$DiceHilited(RefVar const &, TEditView *, TPoint &, unsigned char)>
         a98a0:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         a98a4:	eb6c6644 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a98a8:	e28dd004 	add	sp, sp, #4	; 0x4
         a98ac:	e2855001 	add	r5, r5, #1	; 0x1
         a98b0:	e1550004 	cmp	r5, r4
         a98b4:	baffffe7 	blt	a9858 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x224>
         a98b8:	e3a05000 	mov	r5, #0	; 0x0
         a98bc:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a98c0:	e28d401c 	add	r4, sp, #28	; 0x1c
         a98c4:	e51b0038 	ldr	r0, [fp, -#56]
         a98c8:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         a98cc:	e1a0000d 	mov	r0, sp
         a98d0:	eb677ad7 	bl	1a88434 <TListLoop::$__ct(CList *)>
         a98d4:	e1a0000d 	mov	r0, sp
         a98d8:	eb67cd50 	bl	1a9ce20 <TListLoop::$Next(void)>
         a98dc:	e1b07000 	movs	r7, r0
         a98e0:	e24d1008 	sub	r1, sp, #8	; 0x8
         a98e4:	e58d1090 	str	r1, [sp, #144]
         a98e8:	0a000077 	beq	a9acc <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x498>
         a98ec:	e24dd014 	sub	sp, sp, #20	; 0x14
         a98f0:	e1a01007 	mov	r1, r7
         a98f4:	e1a0000d 	mov	r0, sp
         a98f8:	eb6776b6 	bl	1a873d8 <HiliteLoop::$__ct(TView *)>
         a98fc:	e1a0000d 	mov	r0, sp
         a9900:	eb67cd42 	bl	1a9ce10 <HiliteLoop::$Next(void)>
         a9904:	e3300000 	teq	r0, #0	; 0x0
         a9908:	0a000067 	beq	a9aac <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x478>
         a990c:	e287a010 	add	sl, r7, #16	; 0x10
         a9910:	e1a00007 	mov	r0, r7
         a9914:	e5971000 	ldr	r1, [r7]
         a9918:	e1a0e00f 	mov	lr, pc
         a991c:	e281f0c0 	add	pc, r1, #192	; 0xc0
         a9920:	e3100004 	tst	r0, #4	; 0x4
         a9924:	0a00005c 	beq	a9a9c <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x468>
         a9928:	e1a00007 	mov	r0, r7
         a992c:	e59d10a4 	ldr	r1, [sp, #164]
         a9930:	e5972000 	ldr	r2, [r7]
         a9934:	e1a0e00f 	mov	lr, pc
         a9938:	e282f09c 	add	pc, r2, #156	; 0x9c
         a993c:	e3300000 	teq	r0, #0	; 0x0
         a9940:	0a000055 	beq	a9a9c <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x468>
         a9944:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a9948:	e59d801c 	ldr	r8, [sp, #28]	; fField28
         a994c:	e59a0000 	ldr	r0, [sl]
         a9950:	e58d0008 	str	r0, [sp, #8]	; fField8
         a9954:	e2880004 	add	r0, r8, #4	; 0x4
         a9958:	e8905000 	ldmia	r0, {ip, lr}
         a995c:	e88d5000 	stmia	sp, {ip, lr}
         a9960:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9964:	e59d000c 	ldr	r0, [sp, #12]
         a9968:	e58d0000 	str	r0, [sp]
         a996c:	e28d0004 	add	r0, sp, #4	; 0x4
         a9970:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a9974:	e1a01841 	mov	r1, r1, asr #16
         a9978:	e59d2000 	ldr	r2, [sp]
         a997c:	e1a02842 	mov	r2, r2, asr #16
         a9980:	eb6a9fd8 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a9984:	e28dd004 	add	sp, sp, #4	; 0x4
         a9988:	e1a0000d 	mov	r0, sp
         a998c:	e3e01007 	mvn	r1, #7	; 0x7
         a9990:	e1a02001 	mov	r2, r1
         a9994:	eb6a9ba9 	bl	1b50840 <$InsetRect__FP4RectlT2>
         a9998:	e51b0034 	ldr	r0, [fp, -#52]	; fField52
         a999c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         a99a0:	e28d1004 	add	r1, sp, #4	; 0x4
         a99a4:	e28dd004 	add	sp, sp, #4	; 0x4
         a99a8:	eb6aa3e3 	bl	1b5293c <$PtInRect(Point, Rect *)>
         a99ac:	e3300000 	teq	r0, #0	; 0x0
         a99b0:	0a000038 	beq	a9a98 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x464>
         a99b4:	e5980020 	ldr	r0, [r8, #32]	; fField32
         a99b8:	e2806004 	add	r6, r0, #4	; 0x4
         a99bc:	e3a09000 	mov	r9, #0	; 0x0
         a99c0:	e5900002 	ldr	r0, [r0, #2]	; fField2
         a99c4:	e1a00840 	mov	r0, r0, asr #16
         a99c8:	e3500000 	cmp	r0, #0	; 0x0
         a99cc:	da000031 	ble	a9a98 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x464>
         a99d0:	e24dd004 	sub	sp, sp, #4	; 0x4
         a99d4:	e5961002 	ldr	r1, [r6, #2]	; fField2
         a99d8:	e1a01821 	mov	r1, r1, lsr #16
         a99dc:	e59d000c 	ldr	r0, [sp, #12]
         a99e0:	e0810000 	add	r0, r1, r0
         a99e4:	e1a00800 	mov	r0, r0, lsl #16
         a99e8:	e1a00840 	mov	r0, r0, asr #16
         a99ec:	e5961000 	ldr	r1, [r6]
         a99f0:	e1a01821 	mov	r1, r1, lsr #16
         a99f4:	e59d200e 	ldr	r2, [sp, #14]
         a99f8:	e0811002 	add	r1, r1, r2
         a99fc:	e1a01801 	mov	r1, r1, lsl #16
         a9a00:	e1a01841 	mov	r1, r1, asr #16
         a9a04:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9a08:	e5cd0003 	strb	r0, [sp, #3]
         a9a0c:	e1a00440 	mov	r0, r0, asr #8
         a9a10:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a9a14:	e5cd1001 	strb	r1, [sp, #1]
         a9a18:	e1a00441 	mov	r0, r1, asr #8
         a9a1c:	e5cd0000 	strb	r0, [sp]
         a9a20:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a9a24:	e3550004 	cmp	r5, #4	; 0x4
         a9a28:	e58d0000 	str	r0, [sp]
         a9a2c:	aa000012 	bge	a9a7c <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x448>
         a9a30:	e24b1034 	sub	r1, fp, #52	; 0x34
         a9a34:	e1a0000d 	mov	r0, sp
         a9a38:	eb03bde1 	bl	1991c4 <CheapDistance__FRC6TPointT1>
         a9a3c:	e3500008 	cmp	r0, #8	; 0x8
         a9a40:	aa00000d 	bge	a9a7c <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x448>
         a9a44:	e284000c 	add	r0, r4, #12	; 0xc
         a9a48:	e59d100c 	ldr	r1, [sp, #12]
         a9a4c:	e5801000 	str	r1, [r0]
         a9a50:	e2841010 	add	r1, r4, #16	; 0x10
         a9a54:	e5960000 	ldr	r0, [r6]
         a9a58:	e5810000 	str	r0, [r1]
         a9a5c:	e2840014 	add	r0, r4, #20	; 0x14
         a9a60:	e5961000 	ldr	r1, [r6]
         a9a64:	e5801000 	str	r1, [r0]
         a9a68:	e2855001 	add	r5, r5, #1	; 0x1
         a9a6c:	e4848004 	str	r8, [r4], #4	; fField4
         a9a70:	e8a40280 	stmia	r4!, {r7, r9}
         a9a74:	e5a4600c 	str	r6, [r4, #12]!
         a9a78:	e2844004 	add	r4, r4, #4	; 0x4
         a9a7c:	e2866004 	add	r6, r6, #4	; 0x4
         a9a80:	e28dd004 	add	sp, sp, #4	; 0x4
         a9a84:	e2899001 	add	r9, r9, #1	; 0x1
         a9a88:	e5980020 	ldr	r0, [r8, #32]	; fField32
         a9a8c:	e5900002 	ldr	r0, [r0, #2]	; fField2
         a9a90:	e1590840 	cmp	r9, r0, asr #16
         a9a94:	baffffcd 	blt	a99d0 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x39c>
         a9a98:	e28dd00c 	add	sp, sp, #12	; 0xc
         a9a9c:	e1a0000d 	mov	r0, sp
         a9aa0:	eb67ccda 	bl	1a9ce10 <HiliteLoop::$Next(void)>
         a9aa4:	e3300000 	teq	r0, #0	; 0x0
         a9aa8:	1affff98 	bne	a9910 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x2dc>
         a9aac:	e1a0000d 	mov	r0, sp
         a9ab0:	e3a01000 	mov	r1, #0	; 0x0
         a9ab4:	eb677a61 	bl	1a88440 <HiliteLoop::$__dt(void)>
         a9ab8:	e28dd014 	add	sp, sp, #20	; 0x14
         a9abc:	e1a0000d 	mov	r0, sp
         a9ac0:	eb67ccd6 	bl	1a9ce20 <TListLoop::$Next(void)>
         a9ac4:	e1b07000 	movs	r7, r0
         a9ac8:	1affff87 	bne	a98ec <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x2b8>
         a9acc:	e51b0038 	ldr	r0, [fp, -#56]
         a9ad0:	e1a01000 	mov	r1, r0
         a9ad4:	e2800010 	add	r0, r0, #16	; 0x10
         a9ad8:	e28d2004 	add	r2, sp, #4	; 0x4
         a9adc:	e8905000 	ldmia	r0, {ip, lr}
         a9ae0:	e8825000 	stmia	r2, {ip, lr}
         a9ae4:	e3a069fe 	mov	r6, #4161536	; 0x3f8000
         a9ae8:	e2466501 	sub	r6, r6, #4194304	; 0x400000
         a9aec:	e5cd6001 	strb	r6, [sp, #1]
         a9af0:	e3e0407f 	mvn	r4, #127	; 0x7f
         a9af4:	e44d409c 	strb	r4, [sp], -#156
         a9af8:	e28d001c 	add	r0, sp, #28	; 0x1c
         a9afc:	e3a03000 	mov	r3, #0	; 0x0
         a9b00:	e3a02000 	mov	r2, #0	; 0x0
         a9b04:	eb6c7e5f 	bl	1bc9488 <DragBits::$__ct(TView *, TRect const *, unsigned char)>
         a9b08:	e28d2018 	add	r2, sp, #24	; 0x18
         a9b0c:	e59f12c8 	ldr	r1, [pc, #2c8]	; a9ddc <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x7a8>	; fField2
         a9b10:	e51b0038 	ldr	r0, [fp, -#56]
         a9b14:	eb68f62b 	bl	1ae73c8 <TView::$IsGridded(RefVar const &, TPoint *)>
         a9b18:	e1a09000 	mov	r9, r0
         a9b1c:	e1a0000d 	mov	r0, sp
         a9b20:	e51b1038 	ldr	r1, [fp, -#56]
         a9b24:	eb6c8ab9 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
         a9b28:	e1a0100d 	mov	r1, sp
         a9b2c:	e28d0004 	add	r0, sp, #4	; 0x4
         a9b30:	eb677629 	bl	1a873dc <TRegionVar::$__ct(TRegion &)>
         a9b34:	e1a0000d 	mov	r0, sp
         a9b38:	e3a01000 	mov	r1, #0	; 0x0
         a9b3c:	eb677e50 	bl	1a89484 <TRegion::$__dt(void)>
         a9b40:	e3a00000 	mov	r0, #0	; 0x0
         a9b44:	e3a0a000 	mov	sl, #0	; 0x0
         a9b48:	e52d006c 	str	r0, [sp, -#108]!
         a9b4c:	e28d0008 	add	r0, sp, #8	; 0x8
         a9b50:	eb6c2387 	bl	1bb2974 <$setjmp>
         a9b54:	e3300000 	teq	r0, #0	; 0x0
         a9b58:	1a0000aa 	bne	a9e08 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x7d4>
         a9b5c:	e1a0000d 	mov	r0, sp
         a9b60:	eb6cd945 	bl	1be007c <$AddExceptionHandler>
         a9b64:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
         a9b68:	eb679f4d 	bl	1a918a4 <TStrokePublic::$Done(void)>
         a9b6c:	e3300000 	teq	r0, #0	; 0x0
         a9b70:	1a0000a1 	bne	a9dfc <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x7c8>
         a9b74:	e28d0088 	add	r0, sp, #136	; 0x88
         a9b78:	e2801038 	add	r1, r0, #56	; 0x38
         a9b7c:	e2806004 	add	r6, r0, #4	; 0x4
         a9b80:	e58d1194 	str	r1, [sp, #404]
         a9b84:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9b88:	e1a0000d 	mov	r0, sp
         a9b8c:	e51b1030 	ldr	r1, [fp, -#48]	; fField48
         a9b90:	eb67a78b 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
         a9b94:	e3390000 	teq	r9, #0	; 0x0
         a9b98:	128d1088 	addne	r1, sp, #136	; 0x88
         a9b9c:	11a0000d 	movne	r0, sp
         a9ba0:	1b688ab4 	blne	1acc678 <$AlignPtToGrid(TPoint *, TPoint &)>
         a9ba4:	e28d1e11 	add	r1, sp, #272	; 0x110
         a9ba8:	e1a0000d 	mov	r0, sp
         a9bac:	eb67d0b3 	bl	1a9de80 <TPoint::$PinTo(TRect const &)>
         a9bb0:	e59d010c 	ldr	r0, [sp, #268]
         a9bb4:	e59d1000 	ldr	r1, [sp]
         a9bb8:	e1310000 	teq	r1, r0
         a9bbc:	0a000087 	beq	a9de0 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x7ac>
         a9bc0:	e24dd008 	sub	sp, sp, #8	; 0x8
         a9bc4:	e3a009fe 	mov	r0, #4161536	; 0x3f8000
         a9bc8:	e2400501 	sub	r0, r0, #4194304	; 0x400000
         a9bcc:	e5cd0005 	strb	r0, [sp, #5]
         a9bd0:	e3e0407f 	mvn	r4, #127	; 0x7f
         a9bd4:	e5cd4004 	strb	r4, [sp, #4]	; fField4
         a9bd8:	e5cd0001 	strb	r0, [sp, #1]
         a9bdc:	e5cd4000 	strb	r4, [sp]
         a9be0:	e1a0100d 	mov	r1, sp
         a9be4:	e51b0038 	ldr	r0, [fp, -#56]
         a9be8:	e5902000 	ldr	r2, [r0]
         a9bec:	e1a0e00f 	mov	lr, pc
         a9bf0:	e282f0b0 	add	pc, r2, #176	; 0xb0
         a9bf4:	e28d4e13 	add	r4, sp, #304	; 0x130
         a9bf8:	e3a07000 	mov	r7, #0	; 0x0
         a9bfc:	e3550000 	cmp	r5, #0	; 0x0
         a9c00:	da00004e 	ble	a9d40 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x70c>
         a9c04:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9c08:	e2840014 	add	r0, r4, #20	; 0x14
         a9c0c:	e1a08000 	mov	r8, r0
         a9c10:	e2842010 	add	r2, r4, #16	; 0x10
         a9c14:	e5923002 	ldr	r3, [r2, #2]	; fField2
         a9c18:	e1a03823 	mov	r3, r3, lsr #16
         a9c1c:	e59d100c 	ldr	r1, [sp, #12]
         a9c20:	e0831001 	add	r1, r3, r1
         a9c24:	e1a01801 	mov	r1, r1, lsl #16
         a9c28:	e1a01841 	mov	r1, r1, asr #16
         a9c2c:	e5922000 	ldr	r2, [r2]
         a9c30:	e1a02822 	mov	r2, r2, lsr #16
         a9c34:	e59d300e 	ldr	r3, [sp, #14]
         a9c38:	e0822003 	add	r2, r2, r3
         a9c3c:	e1a02802 	mov	r2, r2, lsl #16
         a9c40:	e1a02842 	mov	r2, r2, asr #16
         a9c44:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9c48:	e5cd1003 	strb	r1, [sp, #3]
         a9c4c:	e1a01441 	mov	r1, r1, asr #8
         a9c50:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         a9c54:	e5cd2001 	strb	r2, [sp, #1]
         a9c58:	e1a01442 	mov	r1, r2, asr #8
         a9c5c:	e5cd1000 	strb	r1, [sp]
         a9c60:	e49d1004 	ldr	r1, [sp], #4	; fField4
         a9c64:	e58d1000 	str	r1, [sp]
         a9c68:	e59d2000 	ldr	r2, [sp]
         a9c6c:	e51b1034 	ldr	r1, [fp, -#52]	; fField52
         a9c70:	e0421001 	sub	r1, r2, r1
         a9c74:	e1a01801 	mov	r1, r1, lsl #16
         a9c78:	e1a01841 	mov	r1, r1, asr #16
         a9c7c:	e41d3004 	ldr	r3, [sp], -#4	; fField4
         a9c80:	e1a03823 	mov	r3, r3, lsr #16
         a9c84:	e51b2032 	ldr	r2, [fp, -#50]
         a9c88:	e0432002 	sub	r2, r3, r2
         a9c8c:	e1a02802 	mov	r2, r2, lsl #16
         a9c90:	e1a02842 	mov	r2, r2, asr #16
         a9c94:	e5cd1003 	strb	r1, [sp, #3]
         a9c98:	e1a01441 	mov	r1, r1, asr #8
         a9c9c:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         a9ca0:	e5cd2001 	strb	r2, [sp, #1]
         a9ca4:	e1a01442 	mov	r1, r2, asr #8
         a9ca8:	e5cd1000 	strb	r1, [sp]
         a9cac:	e59d1000 	ldr	r1, [sp]
         a9cb0:	e5801000 	str	r1, [r0]
         a9cb4:	e28dd008 	add	sp, sp, #8	; 0x8
         a9cb8:	e3390000 	teq	r9, #0	; 0x0
         a9cbc:	11a00008 	movne	r0, r8
         a9cc0:	128d1090 	addne	r1, sp, #144	; 0x90
         a9cc4:	1b688a6b 	blne	1acc678 <$AlignPtToGrid(TPoint *, TPoint &)>
         a9cc8:	e5940018 	ldr	r0, [r4, #24]
         a9ccc:	e5981000 	ldr	r1, [r8]
         a9cd0:	e5801000 	str	r1, [r0]
         a9cd4:	e5940000 	ldr	r0, [r4]
         a9cd8:	e5901000 	ldr	r1, [r0]
         a9cdc:	e1a0e00f 	mov	lr, pc
         a9ce0:	e281f008 	add	pc, r1, #8	; 0x8
         a9ce4:	e24dd008 	sub	sp, sp, #8	; 0x8
         a9ce8:	e5940000 	ldr	r0, [r4]
         a9cec:	e2800004 	add	r0, r0, #4	; 0x4
         a9cf0:	e8905000 	ldmia	r0, {ip, lr}
         a9cf4:	e88d5000 	stmia	sp, {ip, lr}
         a9cf8:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9cfc:	e594000c 	ldr	r0, [r4, #12]
         a9d00:	e58d0000 	str	r0, [sp]
         a9d04:	e28d0004 	add	r0, sp, #4	; 0x4
         a9d08:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a9d0c:	e1a01841 	mov	r1, r1, asr #16
         a9d10:	e59d2000 	ldr	r2, [sp]
         a9d14:	e1a02842 	mov	r2, r2, asr #16
         a9d18:	eb6a9ef2 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a9d1c:	e28dd004 	add	sp, sp, #4	; 0x4
         a9d20:	e1a0100d 	mov	r1, sp
         a9d24:	e28d0008 	add	r0, sp, #8	; 0x8
         a9d28:	eb67ed58 	bl	1aa5290 <TRect::$Union(TRect const &)>
         a9d2c:	e284401c 	add	r4, r4, #28	; 0x1c
         a9d30:	e28dd008 	add	sp, sp, #8	; 0x8
         a9d34:	e2877001 	add	r7, r7, #1	; 0x1
         a9d38:	e1570005 	cmp	r7, r5
         a9d3c:	baffffb0 	blt	a9c04 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x5d0>
         a9d40:	e1a0000d 	mov	r0, sp
         a9d44:	e3e01007 	mvn	r1, #7	; 0x7
         a9d48:	e1a02001 	mov	r2, r1
         a9d4c:	eb6a9abb 	bl	1b50840 <$InsetRect__FP4RectlT2>
         a9d50:	e1a00006 	mov	r0, r6
         a9d54:	eb67e0f5 	bl	1aa2130 <TBits::$SetPort(void)>
         a9d58:	e1a0000d 	mov	r0, sp
         a9d5c:	eb6a927a 	bl	1b4e74c <$EraseRect(Rect *)>
         a9d60:	e51b0038 	ldr	r0, [fp, -#56]
         a9d64:	e5901000 	ldr	r1, [r0]
         a9d68:	e1a0e00f 	mov	lr, pc
         a9d6c:	e281f084 	add	pc, r1, #132	; 0x84
         a9d70:	e1a00006 	mov	r0, r6
         a9d74:	eb67d8b6 	bl	1aa0054 <TBits::$RestorePort(void)>
         a9d78:	e3a01000 	mov	r1, #0	; 0x0
         a9d7c:	e3a00000 	mov	r0, #0	; 0x0
         a9d80:	eb6a8a24 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         a9d84:	e3a03000 	mov	r3, #0	; 0x0
         a9d88:	e92d0008 	stmdb	sp!, {r3}
         a9d8c:	e59d01a4 	ldr	r0, [sp, #420]
         a9d90:	e28d2004 	add	r2, sp, #4	; 0x4
         a9d94:	e28d1004 	add	r1, sp, #4	; 0x4
         a9d98:	eb679ecf 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         a9d9c:	e28dd004 	add	sp, sp, #4	; 0x4
         a9da0:	e3a03000 	mov	r3, #0	; 0x0
         a9da4:	e92d0008 	stmdb	sp!, {r3}
         a9da8:	e1a00006 	mov	r0, r6
         a9dac:	e28d2004 	add	r2, sp, #4	; 0x4
         a9db0:	e28d1004 	add	r1, sp, #4	; 0x4
         a9db4:	e3a03002 	mov	r3, #2	; 0x2
         a9db8:	eb679ec7 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         a9dbc:	e28dd004 	add	sp, sp, #4	; 0x4
         a9dc0:	e3a01000 	mov	r1, #0	; 0x0
         a9dc4:	e3a00000 	mov	r0, #0	; 0x0
         a9dc8:	eb6a8a14 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         a9dcc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         a9dd0:	e58d0114 	str	r0, [sp, #276]
         a9dd4:	e28dd008 	add	sp, sp, #8	; 0x8
         a9dd8:	ea000002 	b	a9de8 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x7b4>
         a9ddc:	006847e8 	rsbeq	r4, r8, r8, ror #15
         a9de0:	e3a00001 	mov	r0, #1	; 0x1
         a9de4:	eb67ed43 	bl	1aa52f8 <$Wait(unsigned long)>
         a9de8:	e28dd004 	add	sp, sp, #4	; 0x4
         a9dec:	e51b0030 	ldr	r0, [fp, -#48]	; fField48
         a9df0:	eb679eab 	bl	1a918a4 <TStrokePublic::$Done(void)>
         a9df4:	e3300000 	teq	r0, #0	; 0x0
         a9df8:	0affff61 	beq	a9b84 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x550>
         a9dfc:	e1a0000d 	mov	r0, sp
         a9e00:	eb6cdcac 	bl	1be10b8 <$ExitHandler>
         a9e04:	ea000000 	b	a9e0c <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x7d8>
         a9e08:	e3a0a001 	mov	sl, #1	; 0x1
         a9e0c:	e59d4070 	ldr	r4, [sp, #112]
         a9e10:	e24dd008 	sub	sp, sp, #8	; 0x8
         a9e14:	e1a0000d 	mov	r0, sp
         a9e18:	eb6d1661 	bl	1bef7a4 <$GetPort(GrafPort **)>
         a9e1c:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a9e20:	e5900024 	ldr	r0, [r0, #36]	; fField36
         a9e24:	e58d0000 	str	r0, [sp]
         a9e28:	e1a00004 	mov	r0, r4
         a9e2c:	e59d1000 	ldr	r1, [sp]
         a9e30:	eb6a8e1f 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
         a9e34:	e28dd004 	add	sp, sp, #4	; 0x4
         a9e38:	e33a0000 	teq	sl, #0	; 0x0
         a9e3c:	11a0000d 	movne	r0, sp
         a9e40:	1b6ce0c3 	blne	1be2154 <$NextHandler>
         a9e44:	e28dd06c 	add	sp, sp, #108	; 0x6c
         a9e48:	eb6aa2b5 	bl	1b52924 <$PenNormal(void)>
         a9e4c:	e28d40b8 	add	r4, sp, #184	; 0xb8
         a9e50:	e3a06000 	mov	r6, #0	; 0x0
         a9e54:	e3550000 	cmp	r5, #0	; 0x0
         a9e58:	da000032 	ble	a9f28 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x8f4>
         a9e5c:	e59f70f8 	ldr	r7, [pc, #f8]	; a9f5c <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x928>
         a9e60:	e24dd008 	sub	sp, sp, #8	; 0x8
         a9e64:	e2840014 	add	r0, r4, #20	; 0x14
         a9e68:	e284100c 	add	r1, r4, #12	; 0xc
         a9e6c:	e5902002 	ldr	r2, [r0, #2]	; fField2
         a9e70:	e1a02822 	mov	r2, r2, lsr #16
         a9e74:	e5913002 	ldr	r3, [r1, #2]	; fField2
         a9e78:	e1a03823 	mov	r3, r3, lsr #16
         a9e7c:	e0822003 	add	r2, r2, r3
         a9e80:	e1a02802 	mov	r2, r2, lsl #16
         a9e84:	e1a02842 	mov	r2, r2, asr #16
         a9e88:	e5900000 	ldr	r0, [r0]
         a9e8c:	e1a00820 	mov	r0, r0, lsr #16
         a9e90:	e5911000 	ldr	r1, [r1]
         a9e94:	e1a01821 	mov	r1, r1, lsr #16
         a9e98:	e0800001 	add	r0, r0, r1
         a9e9c:	e1a00800 	mov	r0, r0, lsl #16
         a9ea0:	e1a00840 	mov	r0, r0, asr #16
         a9ea4:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9ea8:	e5cd2003 	strb	r2, [sp, #3]
         a9eac:	e1a01442 	mov	r1, r2, asr #8
         a9eb0:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         a9eb4:	e5cd0001 	strb	r0, [sp, #1]
         a9eb8:	e1a00440 	mov	r0, r0, asr #8
         a9ebc:	e5cd0000 	strb	r0, [sp]
         a9ec0:	e49d0004 	ldr	r0, [sp], #4	; fField4
         a9ec4:	e58d0004 	str	r0, [sp, #4]	; fField4
         a9ec8:	e3a02302 	mov	r2, #134217728	; 0x8000000
         a9ecc:	e3a00043 	mov	r0, #67	; 0x43
         a9ed0:	e5941004 	ldr	r1, [r4, #4]	; fField4
         a9ed4:	eb67f119 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a9ed8:	eb6c609b 	bl	1bc214c <$AllocateRefHandle(long)>
         a9edc:	e58d0000 	str	r0, [sp]
         a9ee0:	e59d2004 	ldr	r2, [sp, #4]	; fField4
         a9ee4:	e1a0000d 	mov	r0, sp
         a9ee8:	e3a01001 	mov	r1, #1	; 0x1
         a9eec:	eb67f11d 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
         a9ef0:	e1a0000d 	mov	r0, sp
         a9ef4:	e3a01000 	mov	r1, #0	; 0x0
         a9ef8:	e5942008 	ldr	r2, [r4, #8]	; fField8
         a9efc:	eb67f119 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
         a9f00:	e1a0100d 	mov	r1, sp
         a9f04:	e5970000 	ldr	r0, [r7]
         a9f08:	eb679a4a 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a9f0c:	e284401c 	add	r4, r4, #28	; 0x1c
         a9f10:	e59d0000 	ldr	r0, [sp]
         a9f14:	eb6c64a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a9f18:	e28dd008 	add	sp, sp, #8	; 0x8
         a9f1c:	e2866001 	add	r6, r6, #1	; 0x1
         a9f20:	e1560005 	cmp	r6, r5
         a9f24:	baffffcd 	blt	a9e60 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x82c>
         a9f28:	e59f0030 	ldr	r0, [pc, #30]	; a9f60 <TEditView::TrackDistort(TPoint, TStrokePublic *, TRect const &)+0x92c>
         a9f2c:	e5900000 	ldr	r0, [r0]
         a9f30:	e3a01001 	mov	r1, #1	; 0x1
         a9f34:	e5c0105c 	strb	r1, [r0, #92]	; fField92
         a9f38:	e3a04001 	mov	r4, #1	; 0x1
         a9f3c:	e28d0004 	add	r0, sp, #4	; 0x4
         a9f40:	e3a01000 	mov	r1, #0	; 0x0
         a9f44:	eb67793e 	bl	1a88444 <TRegionVar::$__dt(void)>
         a9f48:	e28d001c 	add	r0, sp, #28	; 0x1c
         a9f4c:	e3a01000 	mov	r1, #0	; 0x0
         a9f50:	eb6c7d4e 	bl	1bc9490 <DragBits::$__dt(void)>
         a9f54:	e1a00004 	mov	r0, r4
         a9f58:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a9f5c:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         a9f60:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TEditView::Idle(long)
 * Address: 000a9f64
 */
TEditView::Idle(long) {
    /*
         a9f64:	e1a0c00d 	mov	ip, sp
         a9f68:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a9f6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a9f70:	e1a04000 	mov	r4, r0
         a9f74:	e3310002 	teq	r1, #2	; 0x2
         a9f78:	11a00004 	movne	r0, r4
         a9f7c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         a9f80:	1a6c817d 	bne	1bca57c <TView::$Idle(long)>
         a9f84:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         a9f88:	e3300000 	teq	r0, #0	; 0x0
         a9f8c:	0a000004 	beq	a9fa4 <TEditView::Idle(long)+0x40>
         a9f90:	e2841044 	add	r1, r4, #68	; 0x44
         a9f94:	e1a00004 	mov	r0, r4
         a9f98:	e5942000 	ldr	r2, [r4]
         a9f9c:	e1a0e00f 	mov	lr, pc
         a9fa0:	e282ff49 	add	pc, r2, #292	; 0x124
         a9fa4:	e3a00000 	mov	r0, #0	; 0x0
         a9fa8:	e5c40040 	strb	r0, [r4, #64]	; fField64
         a9fac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::PositionCaret(TPoint &, unsigned char)
 * Address: 000a9fb0
 */
TEditView::PositionCaret(TPoint &, unsigned char) {
    /*
         a9fb0:	e1a0c00d 	mov	ip, sp
         a9fb4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a9fb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         a9fbc:	e1a05000 	mov	r5, r0
         a9fc0:	e1a04001 	mov	r4, r1
         a9fc4:	e20290ff 	and	r9, r2, #255	; 0xff
         a9fc8:	e5901000 	ldr	r1, [r0]
         a9fcc:	e1a0e00f 	mov	lr, pc
         a9fd0:	e281f0ac 	add	pc, r1, #172	; 0xac
         a9fd4:	e5950008 	ldr	r0, [r5, #8]	; fField8
         a9fd8:	e3100082 	tst	r0, #130	; 0x82
         a9fdc:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a9fe0:	e24dd004 	sub	sp, sp, #4	; 0x4
         a9fe4:	e1a0300d 	mov	r3, sp
         a9fe8:	e1a01004 	mov	r1, r4
         a9fec:	e1a00005 	mov	r0, r5
         a9ff0:	e3a02000 	mov	r2, #0	; 0x0
         a9ff4:	eb67e88a 	bl	1aa4224 <TEditView::$TextContainingPoint(TPoint &, TRect *, long *)>
         a9ff8:	e3300000 	teq	r0, #0	; 0x0
         a9ffc:	0a000004 	beq	aa014 <TEditView::PositionCaret(TPoint &, unsigned char)+0x64>
         aa000:	e5901000 	ldr	r1, [r0]
         aa004:	e1a0e00f 	mov	lr, pc
         aa008:	e281ff51 	add	pc, r1, #324	; 0x144
         aa00c:	e1a07000 	mov	r7, r0
         aa010:	ea000000 	b	aa018 <TEditView::PositionCaret(TPoint &, unsigned char)+0x68>
         aa014:	e3a07000 	mov	r7, #0	; 0x0
         aa018:	e3a08002 	mov	r8, #2	; 0x2
         aa01c:	e59f60f0 	ldr	r6, [pc, #f0]	; aa114 <TEditView::PositionCaret(TPoint &, unsigned char)+0x164>
         aa020:	e3370000 	teq	r7, #0	; 0x0
         aa024:	0a00003b 	beq	aa118 <TEditView::PositionCaret(TPoint &, unsigned char)+0x168>
         aa028:	e5970008 	ldr	r0, [r7, #8]	; fField8
         aa02c:	e3100082 	tst	r0, #130	; 0x82
         aa030:	1a000038 	bne	aa118 <TEditView::PositionCaret(TPoint &, unsigned char)+0x168>
         aa034:	e59d0000 	ldr	r0, [sp]
         aa038:	e3500000 	cmp	r0, #0	; 0x0
         aa03c:	da000035 	ble	aa118 <TEditView::PositionCaret(TPoint &, unsigned char)+0x168>
         aa040:	e3300002 	teq	r0, #2	; 0x2
         aa044:	0a000036 	beq	aa124 <TEditView::PositionCaret(TPoint &, unsigned char)+0x174>
         aa048:	e1a00007 	mov	r0, r7
         aa04c:	e5971000 	ldr	r1, [r7]
         aa050:	e1a0e00f 	mov	lr, pc
         aa054:	e281f0ac 	add	pc, r1, #172	; 0xac
         aa058:	e3a03000 	mov	r3, #0	; 0x0
         aa05c:	e3a02000 	mov	r2, #0	; 0x0
         aa060:	e3a01000 	mov	r1, #0	; 0x0
         aa064:	e3a00000 	mov	r0, #0	; 0x0
         aa068:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         aa06c:	e1a01004 	mov	r1, r4
         aa070:	e1a00007 	mov	r0, r7
         aa074:	e3a02002 	mov	r2, #2	; 0x2
         aa078:	eb67cf8f 	bl	1a9debc <TParagraphView::$PointToOffset(TPoint const &, MarginSize, unsigned char, TRect *, LineInfo **, long *, unsigned char *)>
         aa07c:	e28dd010 	add	sp, sp, #16	; 0x10
         aa080:	e1b05000 	movs	r5, r0
         aa084:	5a00000f 	bpl	aa0c8 <TEditView::PositionCaret(TPoint &, unsigned char)+0x118>
         aa088:	e5970010 	ldr	r0, [r7, #16]	; fField16
         aa08c:	e1a00840 	mov	r0, r0, asr #16
         aa090:	e5941000 	ldr	r1, [r4]
         aa094:	e1500841 	cmp	r0, r1, asr #16
         aa098:	c3a05000 	movgt	r5, #0	; 0x0
         aa09c:	ca000009 	bgt	aa0c8 <TEditView::PositionCaret(TPoint &, unsigned char)+0x118>
         aa0a0:	e1a00007 	mov	r0, r7
         aa0a4:	eb67e85b 	bl	1aa4218 <TParagraphView::$Text(void)>
         aa0a8:	eb6c6027 	bl	1bc214c <$AllocateRefHandle(long)>
         aa0ac:	e1a04000 	mov	r4, r0
         aa0b0:	e5900000 	ldr	r0, [r0]
         aa0b4:	eb6c6c7c 	bl	1bc52ac <$Length(long)>
         aa0b8:	e2400002 	sub	r0, r0, #2	; 0x2
         aa0bc:	e1a050a0 	mov	r5, r0, lsr #1
         aa0c0:	e1a00004 	mov	r0, r4
         aa0c4:	eb6c643c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa0c8:	e3a03000 	mov	r3, #0	; 0x0
         aa0cc:	e92d0008 	stmdb	sp!, {r3}
         aa0d0:	e1a02005 	mov	r2, r5
         aa0d4:	e1a01007 	mov	r1, r7
         aa0d8:	e5960000 	ldr	r0, [r6]
         aa0dc:	eb68a640 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         aa0e0:	e3390000 	teq	r9, #0	; 0x0
         aa0e4:	0a0000c5 	beq	aa400 <TEditView::PositionCaret(TPoint &, unsigned char)+0x450>
         aa0e8:	e5960000 	ldr	r0, [r6]
         aa0ec:	eb688d6c 	bl	1acd6a4 <TRootView::$CaretEnabled(void)>
         aa0f0:	e3300000 	teq	r0, #0	; 0x0
         aa0f4:	0a0000c1 	beq	aa400 <TEditView::PositionCaret(TPoint &, unsigned char)+0x450>
         aa0f8:	e1a00008 	mov	r0, r8
         aa0fc:	eb6c6012 	bl	1bc214c <$AllocateRefHandle(long)>
         aa100:	e58d0000 	str	r0, [sp]
         aa104:	e1a0000d 	mov	r0, sp
         aa108:	eb686c73 	bl	1ac52dc <$FClicker>
         aa10c:	e59d0000 	ldr	r0, [sp]
         aa110:	ea0000b9 	b	aa3fc <TEditView::PositionCaret(TPoint &, unsigned char)+0x44c>
         aa114:	0c101934 	ldceq	9, cr1, [r0], -#208
         aa118:	e59d0000 	ldr	r0, [sp]
         aa11c:	e3300002 	teq	r0, #2	; 0x2
         aa120:	1a000014 	bne	aa178 <TEditView::PositionCaret(TPoint &, unsigned char)+0x1c8>
         aa124:	e24dd008 	sub	sp, sp, #8	; 0x8
         aa128:	e2870010 	add	r0, r7, #16	; 0x10
         aa12c:	e8901008 	ldmia	r0, {r3, ip}
         aa130:	e88d1008 	stmia	sp, {r3, ip}
         aa134:	e59d0006 	ldr	r0, [sp, #6]	; fField6
         aa138:	e2800005 	add	r0, r0, #5	; 0x5
         aa13c:	e5c40001 	strb	r0, [r4, #1]
         aa140:	e1a00440 	mov	r0, r0, asr #8
         aa144:	e5c40000 	strb	r0, [r4]
         aa148:	e1a0200d 	mov	r2, sp
         aa14c:	e1a01004 	mov	r1, r4
         aa150:	e1a00007 	mov	r0, r7
         aa154:	e3a03000 	mov	r3, #0	; 0x0
         aa158:	e597c000 	ldr	ip, [r7]
         aa15c:	e1a0e00f 	mov	lr, pc
         aa160:	e28cf074 	add	pc, ip, #116	; 0x74
         aa164:	e1a0100d 	mov	r1, sp
         aa168:	e1a00005 	mov	r0, r5
         aa16c:	eb68a60b 	bl	1ad39a0 <TEditView::$SetCaretRectGlobal(TRect const &)>
         aa170:	e28dd008 	add	sp, sp, #8	; 0x8
         aa174:	ea00008d 	b	aa3b0 <TEditView::PositionCaret(TPoint &, unsigned char)+0x400>
         aa178:	e59f00ec 	ldr	r0, [pc, #ec]	; aa26c <TEditView::PositionCaret(TPoint &, unsigned char)+0x2bc>
         aa17c:	e5d0002c 	ldrb	r0, [r0, #44]
         aa180:	e3300000 	teq	r0, #0	; 0x0
         aa184:	1a000007 	bne	aa1a8 <TEditView::PositionCaret(TPoint &, unsigned char)+0x1f8>
         aa188:	e1a00005 	mov	r0, r5
         aa18c:	eb6880e1 	bl	1aca518 <$TextOrInkWordsEnabled(TView *)>
         aa190:	e3300000 	teq	r0, #0	; 0x0
         aa194:	1a000003 	bne	aa1a8 <TEditView::PositionCaret(TPoint &, unsigned char)+0x1f8>
         aa198:	e5960000 	ldr	r0, [r6]
         aa19c:	eb68a1d9 	bl	1ad2908 <TRootView::$KeyboardActive(void)>
         aa1a0:	e3300000 	teq	r0, #0	; 0x0
         aa1a4:	0a000096 	beq	aa404 <TEditView::PositionCaret(TPoint &, unsigned char)+0x454>
         aa1a8:	e5950030 	ldr	r0, [r5, #48]	; fField48
         aa1ac:	e1b00840 	movs	r0, r0, asr #16
         aa1b0:	0a00004f 	beq	aa2f4 <TEditView::PositionCaret(TPoint &, unsigned char)+0x344>
         aa1b4:	e2850010 	add	r0, r5, #16	; 0x10
         aa1b8:	e5901004 	ldr	r1, [r0, #4]	; fField4
         aa1bc:	e1a01821 	mov	r1, r1, lsr #16
         aa1c0:	e5900000 	ldr	r0, [r0]
         aa1c4:	e1a00820 	mov	r0, r0, lsr #16
         aa1c8:	e0410000 	sub	r0, r1, r0
         aa1cc:	e1a07800 	mov	r7, r0, lsl #16
         aa1d0:	e1a07847 	mov	r7, r7, asr #16
         aa1d4:	e24dd004 	sub	sp, sp, #4	; 0x4
         aa1d8:	e1a01005 	mov	r1, r5
         aa1dc:	e1a0000d 	mov	r0, sp
         aa1e0:	eb06f4c7 	bl	267504 <TView::ContentsOrigin(void)>
         aa1e4:	e5940000 	ldr	r0, [r4]
         aa1e8:	e1a00820 	mov	r0, r0, lsr #16
         aa1ec:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         aa1f0:	e0400001 	sub	r0, r0, r1
         aa1f4:	e5c40001 	strb	r0, [r4, #1]
         aa1f8:	e1a00440 	mov	r0, r0, asr #8
         aa1fc:	e5c40000 	strb	r0, [r4]
         aa200:	e5941002 	ldr	r1, [r4, #2]	; fField2
         aa204:	e1a01821 	mov	r1, r1, lsr #16
         aa208:	e59d0000 	ldr	r0, [sp]
         aa20c:	e0410000 	sub	r0, r1, r0
         aa210:	e5c40003 	strb	r0, [r4, #3]
         aa214:	e1a00440 	mov	r0, r0, asr #8
         aa218:	e5c40002 	strb	r0, [r4, #2]	; fField2
         aa21c:	e28dd004 	add	sp, sp, #4	; 0x4
         aa220:	e5940000 	ldr	r0, [r4]
         aa224:	e1a00840 	mov	r0, r0, asr #16
         aa228:	e1a0a000 	mov	sl, r0
         aa22c:	e5951030 	ldr	r1, [r5, #48]	; fField48
         aa230:	e1a01841 	mov	r1, r1, asr #16
         aa234:	eb688d11 	bl	1acd680 <$AlignToGrid__FlT1>
         aa238:	e5c40001 	strb	r0, [r4, #1]
         aa23c:	e1a00440 	mov	r0, r0, asr #8
         aa240:	e5c40000 	strb	r0, [r4]
         aa244:	e5940000 	ldr	r0, [r4]
         aa248:	e1b00840 	movs	r0, r0, asr #16
         aa24c:	1a000007 	bne	aa270 <TEditView::PositionCaret(TPoint &, unsigned char)+0x2c0>
         aa250:	e5950030 	ldr	r0, [r5, #48]	; fField48
         aa254:	e1a00840 	mov	r0, r0, asr #16
         aa258:	e1500007 	cmp	r0, r7
         aa25c:	d5c40001 	strleb	r0, [r4, #1]
         aa260:	d1a00440 	movle	r0, r0, asr #8
         aa264:	da000008 	ble	aa28c <TEditView::PositionCaret(TPoint &, unsigned char)+0x2dc>
         aa268:	ea000005 	b	aa284 <TEditView::PositionCaret(TPoint &, unsigned char)+0x2d4>
         aa26c:	0c100cc4 	ldceq	12, cr0, [r0], -#784
         aa270:	e1500007 	cmp	r0, r7
         aa274:	c5950030 	ldrgt	r0, [r5, #48]	; fField48
         aa278:	c1a00840 	movgt	r0, r0, asr #16
         aa27c:	c1500007 	cmpgt	r0, r7
         aa280:	da000002 	ble	aa290 <TEditView::PositionCaret(TPoint &, unsigned char)+0x2e0>
         aa284:	e5c4a001 	strb	sl, [r4, #1]
         aa288:	e1a0044a 	mov	r0, sl, asr #8
         aa28c:	e5c40000 	strb	r0, [r4]
         aa290:	e5941000 	ldr	r1, [r4]
         aa294:	e1a01821 	mov	r1, r1, lsr #16
         aa298:	e2411004 	sub	r1, r1, #4	; 0x4
         aa29c:	e5c41001 	strb	r1, [r4, #1]
         aa2a0:	e1a01441 	mov	r1, r1, asr #8
         aa2a4:	e5c41000 	strb	r1, [r4]
         aa2a8:	e24dd004 	sub	sp, sp, #4	; 0x4
         aa2ac:	e1a01005 	mov	r1, r5
         aa2b0:	e1a0000d 	mov	r0, sp
         aa2b4:	eb06f492 	bl	267504 <TView::ContentsOrigin(void)>
         aa2b8:	e5941000 	ldr	r1, [r4]
         aa2bc:	e1a01821 	mov	r1, r1, lsr #16
         aa2c0:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         aa2c4:	e0810000 	add	r0, r1, r0
         aa2c8:	e5c40001 	strb	r0, [r4, #1]
         aa2cc:	e1a00440 	mov	r0, r0, asr #8
         aa2d0:	e5c40000 	strb	r0, [r4]
         aa2d4:	e5940002 	ldr	r0, [r4, #2]	; fField2
         aa2d8:	e1a00820 	mov	r0, r0, lsr #16
         aa2dc:	e59d1000 	ldr	r1, [sp]
         aa2e0:	e0800001 	add	r0, r0, r1
         aa2e4:	e5c40003 	strb	r0, [r4, #3]
         aa2e8:	e1a00440 	mov	r0, r0, asr #8
         aa2ec:	e5c40002 	strb	r0, [r4, #2]	; fField2
         aa2f0:	e28dd004 	add	sp, sp, #4	; 0x4
         aa2f4:	e24dd030 	sub	sp, sp, #48	; 0x30
         aa2f8:	e3a00002 	mov	r0, #2	; 0x2
         aa2fc:	eb6c5f92 	bl	1bc214c <$AllocateRefHandle(long)>
         aa300:	e3a07000 	mov	r7, #0	; 0x0
         aa304:	e58d0010 	str	r0, [sp, #16]	; fField16
         aa308:	e5a07004 	str	r7, [r0, #4]!	; fField4
         aa30c:	e58d702c 	str	r7, [sp, #44]
         aa310:	e28d1010 	add	r1, sp, #16	; 0x10
         aa314:	e1a00005 	mov	r0, r5
         aa318:	eb6c808c 	bl	1bca550 <TView::$GetTextStyleRecord(StyleRecord *)>
         aa31c:	e1a0100d 	mov	r1, sp
         aa320:	e28d0010 	add	r0, sp, #16	; 0x10
         aa324:	eb6a952e 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
         aa328:	e24dd008 	sub	sp, sp, #8	; 0x8
         aa32c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         aa330:	e2600000 	rsb	r0, r0, #0	; 0x0
         aa334:	e1a00800 	mov	r0, r0, lsl #16
         aa338:	e1a00840 	mov	r0, r0, asr #16
         aa33c:	e5cd0001 	strb	r0, [sp, #1]
         aa340:	e1a00440 	mov	r0, r0, asr #8
         aa344:	e44d0004 	strb	r0, [sp], -#4	; fField4
         aa348:	e5cd7007 	strb	r7, [sp, #7]
         aa34c:	e5cd7006 	strb	r7, [sp, #6]	; fField6
         aa350:	e5cd7009 	strb	r7, [sp, #9]
         aa354:	e5cd7008 	strb	r7, [sp, #8]	; fField8
         aa358:	e5cd800b 	strb	r8, [sp, #11]
         aa35c:	e5cd700a 	strb	r7, [sp, #10]
         aa360:	e5940000 	ldr	r0, [r4]
         aa364:	e58d0000 	str	r0, [sp]
         aa368:	e28d0004 	add	r0, sp, #4	; 0x4
         aa36c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         aa370:	e1a01841 	mov	r1, r1, asr #16
         aa374:	e59d2000 	ldr	r2, [sp]
         aa378:	e1a02842 	mov	r2, r2, asr #16
         aa37c:	eb6a9d59 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         aa380:	e28dd004 	add	sp, sp, #4	; 0x4
         aa384:	e1a0100d 	mov	r1, sp
         aa388:	e1a00005 	mov	r0, r5
         aa38c:	eb68a583 	bl	1ad39a0 <TEditView::$SetCaretRectGlobal(TRect const &)>
         aa390:	e28dd008 	add	sp, sp, #8	; 0x8
         aa394:	e59d002c 	ldr	r0, [sp, #44]
         aa398:	e3300000 	teq	r0, #0	; 0x0
         aa39c:	159d002c 	ldrne	r0, [sp, #44]
         aa3a0:	1b6a8ccd 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
         aa3a4:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         aa3a8:	eb6c6383 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa3ac:	e28dd030 	add	sp, sp, #48	; 0x30
         aa3b0:	e3a03001 	mov	r3, #1	; 0x1
         aa3b4:	e92d0008 	stmdb	sp!, {r3}
         aa3b8:	e1a01005 	mov	r1, r5
         aa3bc:	e3a03000 	mov	r3, #0	; 0x0
         aa3c0:	e3a02000 	mov	r2, #0	; 0x0
         aa3c4:	e5960000 	ldr	r0, [r6]
         aa3c8:	eb68a585 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         aa3cc:	e3390000 	teq	r9, #0	; 0x0
         aa3d0:	0a00000a 	beq	aa400 <TEditView::PositionCaret(TPoint &, unsigned char)+0x450>
         aa3d4:	e5960000 	ldr	r0, [r6]
         aa3d8:	eb688cb1 	bl	1acd6a4 <TRootView::$CaretEnabled(void)>
         aa3dc:	e3300000 	teq	r0, #0	; 0x0
         aa3e0:	0a000006 	beq	aa400 <TEditView::PositionCaret(TPoint &, unsigned char)+0x450>
         aa3e4:	e1a00008 	mov	r0, r8
         aa3e8:	eb6c5f57 	bl	1bc214c <$AllocateRefHandle(long)>
         aa3ec:	e58d0000 	str	r0, [sp]
         aa3f0:	e1a0000d 	mov	r0, sp
         aa3f4:	eb686bb8 	bl	1ac52dc <$FClicker>
         aa3f8:	e59d0000 	ldr	r0, [sp]
         aa3fc:	eb6c636e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa400:	e28dd004 	add	sp, sp, #4	; 0x4
         aa404:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::SetSelection(RefVar const &, long *, long *)
 * Address: 000aa408
 */
TEditView::SetSelection(RefVar const &, long *, long *) {
    /*
         aa408:	e1a0c00d 	mov	ip, sp
         aa40c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         aa410:	e24cb004 	sub	fp, ip, #4	; 0x4
         aa414:	e1a04000 	mov	r4, r0
         aa418:	e1a05001 	mov	r5, r1
         aa41c:	e3a08000 	mov	r8, #0	; 0x0
         aa420:	e5838000 	str	r8, [r3]
         aa424:	e1a00001 	mov	r0, r1
         aa428:	e5828000 	str	r8, [r2]
         aa42c:	eb6d2557 	bl	1bf3990 <$IsFrame(RefVar const &)>
         aa430:	e3300000 	teq	r0, #0	; 0x0
         aa434:	0a000067 	beq	aa5d8 <TEditView::SetSelection(RefVar const &, long *, long *)+0x1d0>
         aa438:	e59f118c 	ldr	r1, [pc, #18c]	; aa5cc <TEditView::SetSelection(RefVar const &, long *, long *)+0x1c4>
         aa43c:	e1a00005 	mov	r0, r5
         aa440:	eb6c6b92 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
         aa444:	e3300000 	teq	r0, #0	; 0x0
         aa448:	1a000062 	bne	aa5d8 <TEditView::SetSelection(RefVar const &, long *, long *)+0x1d0>
         aa44c:	e3a00002 	mov	r0, #2	; 0x2
         aa450:	eb6c5f3d 	bl	1bc214c <$AllocateRefHandle(long)>
         aa454:	e1a07000 	mov	r7, r0
         aa458:	e3a00002 	mov	r0, #2	; 0x2
         aa45c:	eb6c5f3a 	bl	1bc214c <$AllocateRefHandle(long)>
         aa460:	e1a06000 	mov	r6, r0
         aa464:	e59f1164 	ldr	r1, [pc, #164]	; aa5d0 <TEditView::SetSelection(RefVar const &, long *, long *)+0x1c8>
         aa468:	e1a00005 	mov	r0, r5
         aa46c:	e3a02000 	mov	r2, #0	; 0x0
         aa470:	eb6c677c 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         aa474:	e5870000 	str	r0, [r7]
         aa478:	e59f1154 	ldr	r1, [pc, #154]	; aa5d4 <TEditView::SetSelection(RefVar const &, long *, long *)+0x1cc>
         aa47c:	e1a00005 	mov	r0, r5
         aa480:	e3a02000 	mov	r2, #0	; 0x0
         aa484:	eb6c6777 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         aa488:	e5860000 	str	r0, [r6]
         aa48c:	e24dd004 	sub	sp, sp, #4	; 0x4
         aa490:	e5970000 	ldr	r0, [r7]
         aa494:	e3100003 	tst	r0, #3	; 0x3
         aa498:	01a00140 	moveq	r0, r0, asr #2
         aa49c:	0a000000 	beq	aa4a4 <TEditView::SetSelection(RefVar const &, long *, long *)+0x9c>
         aa4a0:	eb6c5f1d 	bl	1bc211c <$_RINTError(long)>
         aa4a4:	e5cd0003 	strb	r0, [sp, #3]
         aa4a8:	e1a00440 	mov	r0, r0, asr #8
         aa4ac:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         aa4b0:	e5960000 	ldr	r0, [r6]
         aa4b4:	e3100003 	tst	r0, #3	; 0x3
         aa4b8:	01a00140 	moveq	r0, r0, asr #2
         aa4bc:	0a000000 	beq	aa4c4 <TEditView::SetSelection(RefVar const &, long *, long *)+0xbc>
         aa4c0:	eb6c5f15 	bl	1bc211c <$_RINTError(long)>
         aa4c4:	e5cd0001 	strb	r0, [sp, #1]
         aa4c8:	e1a00440 	mov	r0, r0, asr #8
         aa4cc:	e44d0004 	strb	r0, [sp], -#4	; fField4
         aa4d0:	e1a01004 	mov	r1, r4
         aa4d4:	e1a0000d 	mov	r0, sp
         aa4d8:	eb06f409 	bl	267504 <TView::ContentsOrigin(void)>
         aa4dc:	e59d0006 	ldr	r0, [sp, #6]	; fField6
         aa4e0:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         aa4e4:	e0800001 	add	r0, r0, r1
         aa4e8:	e5cd0005 	strb	r0, [sp, #5]
         aa4ec:	e1a00440 	mov	r0, r0, asr #8
         aa4f0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         aa4f4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         aa4f8:	e59d0000 	ldr	r0, [sp]
         aa4fc:	e0810000 	add	r0, r1, r0
         aa500:	e5cd0007 	strb	r0, [sp, #7]
         aa504:	e1a00440 	mov	r0, r0, asr #8
         aa508:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         aa50c:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         aa510:	e3a00002 	mov	r0, #2	; 0x2
         aa514:	eb6c5f0c 	bl	1bc214c <$AllocateRefHandle(long)>
         aa518:	e58d0010 	str	r0, [sp, #16]	; fField16
         aa51c:	e5a08004 	str	r8, [r0, #4]!	; fField4
         aa520:	e58d802c 	str	r8, [sp, #44]
         aa524:	e28d1010 	add	r1, sp, #16	; 0x10
         aa528:	e1a00004 	mov	r0, r4
         aa52c:	eb6c8007 	bl	1bca550 <TView::$GetTextStyleRecord(StyleRecord *)>
         aa530:	e1a0100d 	mov	r1, sp
         aa534:	e28d0010 	add	r0, sp, #16	; 0x10
         aa538:	eb6a94a9 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
         aa53c:	e24dd008 	sub	sp, sp, #8	; 0x8
         aa540:	e59d0038 	ldr	r0, [sp, #56]
         aa544:	e5cd0003 	strb	r0, [sp, #3]
         aa548:	e1a00440 	mov	r0, r0, asr #8
         aa54c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         aa550:	e59d003a 	ldr	r0, [sp, #58]
         aa554:	e2400001 	sub	r0, r0, #1	; 0x1
         aa558:	e5cd0005 	strb	r0, [sp, #5]
         aa55c:	e1a00440 	mov	r0, r0, asr #8
         aa560:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         aa564:	e59d1006 	ldr	r1, [sp, #6]	; fField6
         aa568:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         aa56c:	e0410000 	sub	r0, r1, r0
         aa570:	e5cd0001 	strb	r0, [sp, #1]
         aa574:	e1a00440 	mov	r0, r0, asr #8
         aa578:	e5cd0000 	strb	r0, [sp]
         aa57c:	e59d0000 	ldr	r0, [sp]
         aa580:	e2800002 	add	r0, r0, #2	; 0x2
         aa584:	e5cd0007 	strb	r0, [sp, #7]
         aa588:	e1a00440 	mov	r0, r0, asr #8
         aa58c:	e5cd0006 	strb	r0, [sp, #6]	; fField6
         aa590:	e1a0100d 	mov	r1, sp
         aa594:	e1a00004 	mov	r0, r4
         aa598:	eb68a500 	bl	1ad39a0 <TEditView::$SetCaretRectGlobal(TRect const &)>
         aa59c:	e59d0034 	ldr	r0, [sp, #52]	; fField52
         aa5a0:	e3300000 	teq	r0, #0	; 0x0
         aa5a4:	159d0034 	ldrne	r0, [sp, #52]	; fField52
         aa5a8:	1b6a8c4b 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
         aa5ac:	e59d0018 	ldr	r0, [sp, #24]
         aa5b0:	eb6c6301 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa5b4:	e1a00006 	mov	r0, r6
         aa5b8:	eb6c62ff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa5bc:	e1a00007 	mov	r0, r7
         aa5c0:	eb6c62fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa5c4:	e1a00004 	mov	r0, r4
         aa5c8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         aa5cc:	00683100 	rsbeq	r3, r8, r0, lsl #2
         aa5d0:	00685220 	rsbeq	r5, r8, r0, lsr #4
         aa5d4:	00685258 	rsbeq	r5, r8, r8, asr r2
         aa5d8:	e1a00004 	mov	r0, r4
         aa5dc:	e5941000 	ldr	r1, [r4]
         aa5e0:	e1a0e00f 	mov	lr, pc
         aa5e4:	e281f0ac 	add	pc, r1, #172	; 0xac
         aa5e8:	e1a00008 	mov	r0, r8
         aa5ec:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::GetSelection(void)
 * Address: 000aa5f0
 */
TEditView::GetSelection(void) {
    /*
         aa5f0:	e1a0c00d 	mov	ip, sp
         aa5f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         aa5f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         aa5fc:	e1a04000 	mov	r4, r0
         aa600:	e59f504c 	ldr	r5, [pc, #4c]	; aa654 <TEditView::GetSelection(void)+0x64>	; fField4
         aa604:	e5950000 	ldr	r0, [r5]
         aa608:	e5900068 	ldr	r0, [r0, #104]
         aa60c:	e1300004 	teq	r0, r4
         aa610:	13a00002 	movne	r0, #2	; 0x2
         aa614:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         aa618:	e24dd004 	sub	sp, sp, #4	; 0x4
         aa61c:	e3a00002 	mov	r0, #2	; 0x2
         aa620:	eb6c5ec9 	bl	1bc214c <$AllocateRefHandle(long)>
         aa624:	e58d0000 	str	r0, [sp]
         aa628:	e5950000 	ldr	r0, [r5]
         aa62c:	e5900070 	ldr	r0, [r0, #112]
         aa630:	e3500000 	cmp	r0, #0	; 0x0
         aa634:	9a000008 	bls	aa65c <TEditView::GetSelection(void)+0x6c>
         aa638:	eb6c5ec0 	bl	1bc2140 <$AllocateFrame(void)>
         aa63c:	e59d1000 	ldr	r1, [sp]
         aa640:	e5810000 	str	r0, [r1]
         aa644:	e59f100c 	ldr	r1, [pc, #c]	; aa658 <TEditView::GetSelection(void)+0x68>
         aa648:	e1a0000d 	mov	r0, sp
         aa64c:	eb6c6f42 	bl	1bc635c <$SetClass__FRC6RefVarT1>
         aa650:	ea000030 	b	aa718 <TEditView::GetSelection(void)+0x128>
         aa654:	0c101934 	ldceq	9, cr1, [r0], -#208
         aa658:	00683100 	rsbeq	r3, r8, r0, lsl #2
         aa65c:	e59f00c8 	ldr	r0, [pc, #c8]	; aa72c <TEditView::GetSelection(void)+0x13c>
         aa660:	eb6c5ec1 	bl	1bc216c <$Clone(RefVar const &)>
         aa664:	e41d100c 	ldr	r1, [sp], -#12
         aa668:	e5810000 	str	r0, [r1]
         aa66c:	e28d1008 	add	r1, sp, #8	; 0x8
         aa670:	e5950000 	ldr	r0, [r5]
         aa674:	eb68945c 	bl	1acf7ec <TRootView::$GetCaretPoint(TPoint *)>
         aa678:	e24dd004 	sub	sp, sp, #4	; 0x4
         aa67c:	e1a01004 	mov	r1, r4
         aa680:	e1a0000d 	mov	r0, sp
         aa684:	eb06f39e 	bl	267504 <TView::ContentsOrigin(void)>
         aa688:	e59d000e 	ldr	r0, [sp, #14]
         aa68c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         aa690:	e0400001 	sub	r0, r0, r1
         aa694:	e5cd000d 	strb	r0, [sp, #13]
         aa698:	e1a00440 	mov	r0, r0, asr #8
         aa69c:	e5cd000c 	strb	r0, [sp, #12]
         aa6a0:	e59d100c 	ldr	r1, [sp, #12]
         aa6a4:	e59d0000 	ldr	r0, [sp]
         aa6a8:	e0410000 	sub	r0, r1, r0
         aa6ac:	e5cd000f 	strb	r0, [sp, #15]
         aa6b0:	e1a00440 	mov	r0, r0, asr #8
         aa6b4:	e5cd000e 	strb	r0, [sp, #14]
         aa6b8:	e28dd004 	add	sp, sp, #4	; 0x4
         aa6bc:	e59d000a 	ldr	r0, [sp, #10]
         aa6c0:	e1a00840 	mov	r0, r0, asr #16
         aa6c4:	e1a00100 	mov	r0, r0, lsl #2
         aa6c8:	eb6c5e9f 	bl	1bc214c <$AllocateRefHandle(long)>
         aa6cc:	e58d0000 	str	r0, [sp]
         aa6d0:	e1a0200d 	mov	r2, sp
         aa6d4:	e59f1054 	ldr	r1, [pc, #54]	; aa730 <TEditView::GetSelection(void)+0x140>
         aa6d8:	e28d000c 	add	r0, sp, #12	; 0xc
         aa6dc:	eb6c6f21 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         aa6e0:	e59d0000 	ldr	r0, [sp]
         aa6e4:	eb6c62b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa6e8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         aa6ec:	e1a00840 	mov	r0, r0, asr #16
         aa6f0:	e1a00100 	mov	r0, r0, lsl #2
         aa6f4:	eb6c5e94 	bl	1bc214c <$AllocateRefHandle(long)>
         aa6f8:	e58d0004 	str	r0, [sp, #4]	; fField4
         aa6fc:	e28d2004 	add	r2, sp, #4	; 0x4
         aa700:	e59f102c 	ldr	r1, [pc, #2c]	; aa734 <TEditView::GetSelection(void)+0x144>	; fField2
         aa704:	e28d000c 	add	r0, sp, #12	; 0xc
         aa708:	eb6c6f16 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         aa70c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         aa710:	eb6c62a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa714:	e28dd00c 	add	sp, sp, #12	; 0xc
         aa718:	e59d0000 	ldr	r0, [sp]
         aa71c:	e5904000 	ldr	r4, [r0]
         aa720:	eb6c62a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aa724:	e1a00004 	mov	r0, r4
         aa728:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         aa72c:	00680818 	rsbeq	r0, r8, r8, lsl r8
         aa730:	00685220 	rsbeq	r5, r8, r0, lsr #4
         aa734:	00685258 	rsbeq	r5, r8, r8, asr r2
    */
}

/**
 * Symbol: TEditView::ActivateSelection(unsigned char)
 * Address: 000aa860
 */
TEditView::ActivateSelection(unsigned char) {
    /*
         aa860:	e1a0c00d 	mov	ip, sp
         aa864:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         aa868:	e24cb004 	sub	fp, ip, #4	; 0x4
         aa86c:	e1a04000 	mov	r4, r0
         aa870:	e20110ff 	and	r1, r1, #255	; 0xff
         aa874:	e1a05001 	mov	r5, r1
         aa878:	eb68f2cf 	bl	1ae73bc <TView::$ActivateSelection(unsigned char)>
         aa87c:	e3350000 	teq	r5, #0	; 0x0
         aa880:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         aa884:	e1a00004 	mov	r0, r4
         aa888:	e5941000 	ldr	r1, [r4]
         aa88c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         aa890:	e281f0ac 	add	pc, r1, #172	; 0xac
    */
}

/**
 * Symbol: TEditView::SetCaretRectLocal(TRect const &)
 * Address: 000aa894
 */
TEditView::SetCaretRectLocal(TRect const &) {
    /*
         aa894:	e2800038 	add	r0, r0, #56	; 0x38
         aa898:	e8911008 	ldmia	r1, {r3, ip}
         aa89c:	e8801008 	stmia	r0, {r3, ip}
         aa8a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEditView::SetCaretRectGlobal(TRect const &)
 * Address: 000aa8a4
 */
TEditView::SetCaretRectGlobal(TRect const &) {
    /*
         aa8a4:	e1a0c00d 	mov	ip, sp
         aa8a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         aa8ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         aa8b0:	e2804038 	add	r4, r0, #56	; 0x38
         aa8b4:	e8915000 	ldmia	r1, {ip, lr}
         aa8b8:	e8845000 	stmia	r4, {ip, lr}
         aa8bc:	e24dd008 	sub	sp, sp, #8	; 0x8
         aa8c0:	e1a01000 	mov	r1, r0
         aa8c4:	e28d0004 	add	r0, sp, #4	; 0x4
         aa8c8:	eb06f30d 	bl	267504 <TView::ContentsOrigin(void)>
         aa8cc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         aa8d0:	e2600000 	rsb	r0, r0, #0	; 0x0
         aa8d4:	e1a01800 	mov	r1, r0, lsl #16
         aa8d8:	e1a01841 	mov	r1, r1, asr #16
         aa8dc:	e59d0006 	ldr	r0, [sp, #6]	; fField6
         aa8e0:	e2600000 	rsb	r0, r0, #0	; 0x0
         aa8e4:	e1a00800 	mov	r0, r0, lsl #16
         aa8e8:	e1a00840 	mov	r0, r0, asr #16
         aa8ec:	e24dd004 	sub	sp, sp, #4	; 0x4
         aa8f0:	e5cd1003 	strb	r1, [sp, #3]
         aa8f4:	e1a01441 	mov	r1, r1, asr #8
         aa8f8:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         aa8fc:	e5cd0001 	strb	r0, [sp, #1]
         aa900:	e1a00440 	mov	r0, r0, asr #8
         aa904:	e5cd0000 	strb	r0, [sp]
         aa908:	e49d0004 	ldr	r0, [sp], #4	; fField4
         aa90c:	e58d0000 	str	r0, [sp]
         aa910:	e1a00004 	mov	r0, r4
         aa914:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         aa918:	e1a01841 	mov	r1, r1, asr #16
         aa91c:	e59d2000 	ldr	r2, [sp]
         aa920:	e1a02842 	mov	r2, r2, asr #16
         aa924:	eb6a9bef 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         aa928:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::GetCaretLocalTopLeft(void)
 * Address: 000aa92c
 */
TEditView::GetCaretLocalTopLeft(void) {
    /*
         aa92c:	e5911038 	ldr	r1, [r1, #56]
         aa930:	e5801000 	str	r1, [r0]
         aa934:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEditView::GetCaretGlobalTopLeft(void)
 * Address: 000aa938
 */
TEditView::GetCaretGlobalTopLeft(void) {
    /*
         aa938:	e1a0c00d 	mov	ip, sp
         aa93c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         aa940:	e24cb004 	sub	fp, ip, #4	; 0x4
         aa944:	e1a04000 	mov	r4, r0
         aa948:	e24dd004 	sub	sp, sp, #4	; 0x4
         aa94c:	e2815038 	add	r5, r1, #56	; 0x38
         aa950:	e1a0000d 	mov	r0, sp
         aa954:	eb06f2ea 	bl	267504 <TView::ContentsOrigin(void)>
         aa958:	e5951002 	ldr	r1, [r5, #2]	; fField2
         aa95c:	e1a01821 	mov	r1, r1, lsr #16
         aa960:	e59d0000 	ldr	r0, [sp]
         aa964:	e0810000 	add	r0, r1, r0
         aa968:	e1a00800 	mov	r0, r0, lsl #16
         aa96c:	e1a00840 	mov	r0, r0, asr #16
         aa970:	e5952000 	ldr	r2, [r5]
         aa974:	e1a02822 	mov	r2, r2, lsr #16
         aa978:	e41d1004 	ldr	r1, [sp], -#4	; fField4
         aa97c:	e1a01821 	mov	r1, r1, lsr #16
         aa980:	e0821001 	add	r1, r2, r1
         aa984:	e1a01801 	mov	r1, r1, lsl #16
         aa988:	e1a01841 	mov	r1, r1, asr #16
         aa98c:	e5cd0003 	strb	r0, [sp, #3]
         aa990:	e1a00440 	mov	r0, r0, asr #8
         aa994:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         aa998:	e5cd1001 	strb	r1, [sp, #1]
         aa99c:	e1a00441 	mov	r0, r1, asr #8
         aa9a0:	e5cd0000 	strb	r0, [sp]
         aa9a4:	e59d0000 	ldr	r0, [sp]
         aa9a8:	e5840000 	str	r0, [r4]
         aa9ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::ValidateCaret(unsigned char)
 * Address: 000aa9b0
 */
TEditView::ValidateCaret(unsigned char) {
    /*
         aa9b0:	e1a0c00d 	mov	ip, sp
         aa9b4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         aa9b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         aa9bc:	e1a04000 	mov	r4, r0
         aa9c0:	e20180ff 	and	r8, r1, #255	; 0xff
         aa9c4:	e59f51d0 	ldr	r5, [pc, #1d0]	; aab9c <TEditView::ValidateCaret(unsigned char)+0x1ec>
         aa9c8:	e5950000 	ldr	r0, [r5]
         aa9cc:	e5900068 	ldr	r0, [r0, #104]
         aa9d0:	e1300004 	teq	r0, r4
         aa9d4:	1a000069 	bne	aab80 <TEditView::ValidateCaret(unsigned char)+0x1d0>
         aa9d8:	e59f01c0 	ldr	r0, [pc, #1c0]	; aaba0 <TEditView::ValidateCaret(unsigned char)+0x1f0>
         aa9dc:	eb67b048 	bl	1a96b04 <$GetPreference(RefVar const &)>
         aa9e0:	e3300002 	teq	r0, #2	; 0x2
         aa9e4:	0a000065 	beq	aab80 <TEditView::ValidateCaret(unsigned char)+0x1d0>
         aa9e8:	e24dd008 	sub	sp, sp, #8	; 0x8
         aa9ec:	e2840038 	add	r0, r4, #56	; 0x38
         aa9f0:	e1a06000 	mov	r6, r0
         aa9f4:	e8905000 	ldmia	r0, {ip, lr}
         aa9f8:	e88d5000 	stmia	sp, {ip, lr}
         aa9fc:	e24dd004 	sub	sp, sp, #4	; 0x4
         aaa00:	e1a01004 	mov	r1, r4
         aaa04:	e1a0000d 	mov	r0, sp
         aaa08:	eb06f2bd 	bl	267504 <TView::ContentsOrigin(void)>
         aaa0c:	e28d0004 	add	r0, sp, #4	; 0x4
         aaa10:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         aaa14:	e1a01841 	mov	r1, r1, asr #16
         aaa18:	e59d2000 	ldr	r2, [sp]
         aaa1c:	e1a02842 	mov	r2, r2, asr #16
         aaa20:	eb6a9bb0 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         aaa24:	e24dd034 	sub	sp, sp, #52	; 0x34
         aaa28:	e1a01004 	mov	r1, r4
         aaa2c:	e1a0000d 	mov	r0, sp
         aaa30:	eb6c86f6 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
         aaa34:	e1a0100d 	mov	r1, sp
         aaa38:	e28d0024 	add	r0, sp, #36	; 0x24
         aaa3c:	eb677266 	bl	1a873dc <TRegionVar::$__ct(TRegion &)>
         aaa40:	e1a0000d 	mov	r0, sp
         aaa44:	e3a01000 	mov	r1, #0	; 0x0
         aaa48:	eb677a8d 	bl	1a89484 <TRegion::$__dt(void)>
         aaa4c:	e24dd004 	sub	sp, sp, #4	; 0x4
         aaa50:	e1a0000d 	mov	r0, sp
         aaa54:	eb6d1352 	bl	1bef7a4 <$GetPort(GrafPort **)>
         aaa58:	e49d0004 	ldr	r0, [sp], #4	; fField4
         aaa5c:	e5900024 	ldr	r0, [r0, #36]	; fField36
         aaa60:	e58d0004 	str	r0, [sp, #4]	; fField4
         aaa64:	e1a07000 	mov	r7, r0
         aaa68:	e5900000 	ldr	r0, [r0]
         aaa6c:	e2800004 	add	r0, r0, #4	; 0x4
         aaa70:	e28d101c 	add	r1, sp, #28	; 0x1c
         aaa74:	e8905000 	ldmia	r0, {ip, lr}
         aaa78:	e8815000 	stmia	r1, {ip, lr}
         aaa7c:	e28d0008 	add	r0, sp, #8	; 0x8
         aaa80:	eb677256 	bl	1a873e0 <TRegionVar::$__ct(void)>
         aaa84:	e28d1038 	add	r1, sp, #56	; 0x38
         aaa88:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         aaa8c:	eb6aa3c2 	bl	1b5399c <$RectRgn(Region **, Rect *)>
         aaa90:	e1a01007 	mov	r1, r7
         aaa94:	e59d2008 	ldr	r2, [sp, #8]	; fField8
         aaa98:	e1a00002 	mov	r0, r2
         aaa9c:	eb6aa3cb 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
         aaaa0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         aaaa4:	eb6a8f1c 	bl	1b4e71c <$EmptyRgn(Region **)>
         aaaa8:	e1b02000 	movs	r2, r0
         aaaac:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
         aaab0:	e2411501 	sub	r1, r1, #4194304	; 0x400000
         aaab4:	e3e0007f 	mvn	r0, #127	; 0x7f
         aaab8:	1a000013 	bne	aab0c <TEditView::ValidateCaret(unsigned char)+0x15c>
         aaabc:	e3380000 	teq	r8, #0	; 0x0
         aaac0:	0a00001c 	beq	aab38 <TEditView::ValidateCaret(unsigned char)+0x188>
         aaac4:	e59d303e 	ldr	r3, [sp, #62]
         aaac8:	e59d2022 	ldr	r2, [sp, #34]
         aaacc:	e1a02842 	mov	r2, r2, asr #16
         aaad0:	e2422032 	sub	r2, r2, #50	; 0x32
         aaad4:	e1520843 	cmp	r2, r3, asr #16
         aaad8:	ba00000b 	blt	aab0c <TEditView::ValidateCaret(unsigned char)+0x15c>
         aaadc:	e59d203c 	ldr	r2, [sp, #60]
         aaae0:	e59d301c 	ldr	r3, [sp, #28]	; fField28
         aaae4:	e1a03843 	mov	r3, r3, asr #16
         aaae8:	e283300a 	add	r3, r3, #10	; 0xa
         aaaec:	e1530842 	cmp	r3, r2, asr #16
         aaaf0:	ca000005 	bgt	aab0c <TEditView::ValidateCaret(unsigned char)+0x15c>
         aaaf4:	e59d203c 	ldr	r2, [sp, #60]
         aaaf8:	e59d3020 	ldr	r3, [sp, #32]	; fField32
         aaafc:	e1a03843 	mov	r3, r3, asr #16
         aab00:	e243300a 	sub	r3, r3, #10	; 0xa
         aab04:	e1530842 	cmp	r3, r2, asr #16
         aab08:	aa00000a 	bge	aab38 <TEditView::ValidateCaret(unsigned char)+0x188>
         aab0c:	e5c61005 	strb	r1, [r6, #5]
         aab10:	e5c60004 	strb	r0, [r6, #4]	; fField4
         aab14:	e5c61001 	strb	r1, [r6, #1]
         aab18:	e5c60000 	strb	r0, [r6]
         aab1c:	e3a03000 	mov	r3, #0	; 0x0
         aab20:	e92d0008 	stmdb	sp!, {r3}
         aab24:	e3a02000 	mov	r2, #0	; 0x0
         aab28:	e3a01000 	mov	r1, #0	; 0x0
         aab2c:	e5950000 	ldr	r0, [r5]
         aab30:	eb68a3ab 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         aab34:	e28dd004 	add	sp, sp, #4	; 0x4
         aab38:	e59d6024 	ldr	r6, [sp, #36]	; fField36
         aab3c:	e24dd008 	sub	sp, sp, #8	; 0x8
         aab40:	e1a0000d 	mov	r0, sp
         aab44:	eb6d1316 	bl	1bef7a4 <$GetPort(GrafPort **)>
         aab48:	e49d0004 	ldr	r0, [sp], #4	; fField4
         aab4c:	e5900024 	ldr	r0, [r0, #36]	; fField36
         aab50:	e58d0000 	str	r0, [sp]
         aab54:	e1a00006 	mov	r0, r6
         aab58:	e59d1000 	ldr	r1, [sp]
         aab5c:	eb6a8ad4 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
         aab60:	e28dd004 	add	sp, sp, #4	; 0x4
         aab64:	e28d0008 	add	r0, sp, #8	; 0x8
         aab68:	e3a01000 	mov	r1, #0	; 0x0
         aab6c:	eb677634 	bl	1a88444 <TRegionVar::$__dt(void)>
         aab70:	e28d0024 	add	r0, sp, #36	; 0x24
         aab74:	e3a01000 	mov	r1, #0	; 0x0
         aab78:	eb677631 	bl	1a88444 <TRegionVar::$__dt(void)>
         aab7c:	e28dd040 	add	sp, sp, #64	; 0x40
         aab80:	e5950000 	ldr	r0, [r5]
         aab84:	e5900068 	ldr	r0, [r0, #104]
         aab88:	e1300004 	teq	r0, r4
         aab8c:	13a00000 	movne	r0, #0	; 0x0
         aab90:	03a00001 	moveq	r0, #1	; 0x1
         aab94:	e20000ff 	and	r0, r0, #255	; 0xff
         aab98:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         aab9c:	0c101934 	ldceq	9, cr1, [r0], -#208
         aaba0:	00684270 	rsbeq	r4, r8, r0, ror r2
    */
}

/**
 * Symbol: TEditView::HandleTap(TPoint &)
 * Address: 000aaba4
 */
TEditView::HandleTap(TPoint &) {
    /*
         aaba4:	e3a02001 	mov	r2, #1	; 0x1
         aaba8:	e5903000 	ldr	r3, [r0]
         aabac:	e283fe12 	add	pc, r3, #288	; 0x120
    */
}

/**
 * Symbol: TEditView::HiliteClick(TStrokePublic *)
 * Address: 000aabb0
 */
TEditView::HiliteClick(TStrokePublic *) {
    /*
         aabb0:	e1a0c00d 	mov	ip, sp
         aabb4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         aabb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         aabbc:	e1a04000 	mov	r4, r0
         aabc0:	e1a05001 	mov	r5, r1
         aabc4:	e24dd00c 	sub	sp, sp, #12	; 0xc
         aabc8:	e28d0008 	add	r0, sp, #8	; 0x8
         aabcc:	eb67a79b 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
         aabd0:	e3a0a9fe 	mov	sl, #4161536	; 0x3f8000
         aabd4:	e24aa501 	sub	sl, sl, #4194304	; 0x400000
         aabd8:	e5cda005 	strb	sl, [sp, #5]
         aabdc:	e3e0907f 	mvn	r9, #127	; 0x7f
         aabe0:	e5cd9004 	strb	r9, [sp, #4]	; fField4
         aabe4:	e5cda001 	strb	sl, [sp, #1]
         aabe8:	e5cd9000 	strb	r9, [sp]
         aabec:	e1a0100d 	mov	r1, sp
         aabf0:	e1a00004 	mov	r0, r4
         aabf4:	e5942000 	ldr	r2, [r4]
         aabf8:	e1a0e00f 	mov	lr, pc
         aabfc:	e282f0b0 	add	pc, r2, #176	; 0xb0
         aac00:	e1a07000 	mov	r7, r0
         aac04:	e59d0000 	ldr	r0, [sp]
         aac08:	e1a00840 	mov	r0, r0, asr #16
         aac0c:	e3a06000 	mov	r6, #0	; 0x0
         aac10:	e3700902 	cmn	r0, #32768	; 0x8000
         aac14:	01a00006 	moveq	r0, r6
         aac18:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         aac1c:	e24dd010 	sub	sp, sp, #16	; 0x10
         aac20:	e2178002 	ands	r8, r7, #2	; 0x2
         aac24:	0a00000f 	beq	aac68 <TEditView::HiliteClick(TStrokePublic *)+0xb8>
         aac28:	e5cda00d 	strb	sl, [sp, #13]
         aac2c:	e5cd900c 	strb	r9, [sp, #12]
         aac30:	e5cda009 	strb	sl, [sp, #9]
         aac34:	e5cd9008 	strb	r9, [sp, #8]	; fField8
         aac38:	e28d1008 	add	r1, sp, #8	; 0x8
         aac3c:	e1a00004 	mov	r0, r4
         aac40:	e5942000 	ldr	r2, [r4]
         aac44:	e1a0e00f 	mov	lr, pc
         aac48:	e282f0b4 	add	pc, r2, #180	; 0xb4
         aac4c:	e28d0008 	add	r0, sp, #8	; 0x8
         aac50:	e8905000 	ldmia	r0, {ip, lr}
         aac54:	e88d5000 	stmia	sp, {ip, lr}
         aac58:	e2841010 	add	r1, r4, #16	; 0x10
         aac5c:	e1a0000d 	mov	r0, sp
         aac60:	eb67e576 	bl	1aa4240 <$ToOutsideGrayBorder(TRect *, TRect const *)>
         aac64:	ea000006 	b	aac84 <TEditView::HiliteClick(TStrokePublic *)+0xd4>
         aac68:	e28d0008 	add	r0, sp, #8	; 0x8
         aac6c:	e28d1010 	add	r1, sp, #16	; 0x10
         aac70:	e8911008 	ldmia	r1, {r3, ip}
         aac74:	e8801008 	stmia	r0, {r3, ip}
         aac78:	e28d0010 	add	r0, sp, #16	; 0x10
         aac7c:	e8901008 	ldmia	r0, {r3, ip}
         aac80:	e88d1008 	stmia	sp, {r3, ip}
         aac84:	e59d0018 	ldr	r0, [sp, #24]
         aac88:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         aac8c:	e28d1004 	add	r1, sp, #4	; 0x4
         aac90:	e28dd004 	add	sp, sp, #4	; 0x4
         aac94:	eb6a9f28 	bl	1b5293c <$PtInRect(Point, Rect *)>
         aac98:	e3300000 	teq	r0, #0	; 0x0
         aac9c:	1a000001 	bne	aaca8 <TEditView::HiliteClick(TStrokePublic *)+0xf8>
         aaca0:	e1a00006 	mov	r0, r6
         aaca4:	ea000035 	b	aad80 <TEditView::HiliteClick(TStrokePublic *)+0x1d0>
         aaca8:	e3380000 	teq	r8, #0	; 0x0
         aacac:	0a000026 	beq	aad4c <TEditView::HiliteClick(TStrokePublic *)+0x19c>
         aacb0:	e5940008 	ldr	r0, [r4, #8]	; fField8
         aacb4:	e3100080 	tst	r0, #128	; 0x80
         aacb8:	1a000023 	bne	aad4c <TEditView::HiliteClick(TStrokePublic *)+0x19c>
         aacbc:	e24dd008 	sub	sp, sp, #8	; 0x8
         aacc0:	e28d0008 	add	r0, sp, #8	; 0x8
         aacc4:	e8905000 	ldmia	r0, {ip, lr}
         aacc8:	e88d5000 	stmia	sp, {ip, lr}
         aaccc:	e1a0000d 	mov	r0, sp
         aacd0:	e3a01008 	mov	r1, #8	; 0x8
         aacd4:	e1a02001 	mov	r2, r1
         aacd8:	eb6a96d8 	bl	1b50840 <$InsetRect__FP4RectlT2>
         aacdc:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         aace0:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         aace4:	e28d1004 	add	r1, sp, #4	; 0x4
         aace8:	e28dd004 	add	sp, sp, #4	; 0x4
         aacec:	eb6a9f12 	bl	1b5293c <$PtInRect(Point, Rect *)>
         aacf0:	e3300000 	teq	r0, #0	; 0x0
         aacf4:	1a000013 	bne	aad48 <TEditView::HiliteClick(TStrokePublic *)+0x198>
         aacf8:	e24dd008 	sub	sp, sp, #8	; 0x8
         aacfc:	e1a0100d 	mov	r1, sp
         aad00:	e1a00004 	mov	r0, r4
         aad04:	ebfff2e0 	bl	a788c <TEditView::GlobalSelectedBounds(TRect *)>
         aad08:	e1a00004 	mov	r0, r4
         aad0c:	e5941000 	ldr	r1, [r4]
         aad10:	e1a0e00f 	mov	lr, pc
         aad14:	e281f020 	add	pc, r1, #32	; 0x20
         aad18:	e3100040 	tst	r0, #64	; 0x40
         aad1c:	1a000007 	bne	aad40 <TEditView::HiliteClick(TStrokePublic *)+0x190>
         aad20:	e1a0300d 	mov	r3, sp
         aad24:	e1a02005 	mov	r2, r5
         aad28:	e1a00004 	mov	r0, r4
         aad2c:	e59d1028 	ldr	r1, [sp, #40]
         aad30:	eb67e54c 	bl	1aa4268 <TEditView::$TrackScale(TPoint, TStrokePublic *, TRect const &)>
         aad34:	e3300000 	teq	r0, #0	; 0x0
         aad38:	01a00004 	moveq	r0, r4
         aad3c:	0b678647 	bleq	1a8c660 <TEditView::$CleanupData(void)>
         aad40:	e3a00001 	mov	r0, #1	; 0x1
         aad44:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         aad48:	e28dd008 	add	sp, sp, #8	; 0x8
         aad4c:	e3170004 	tst	r7, #4	; 0x4
         aad50:	0a00000b 	beq	aad84 <TEditView::HiliteClick(TStrokePublic *)+0x1d4>
         aad54:	e5940008 	ldr	r0, [r4, #8]	; fField8
         aad58:	e3100080 	tst	r0, #128	; 0x80
         aad5c:	1a000008 	bne	aad84 <TEditView::HiliteClick(TStrokePublic *)+0x1d4>
         aad60:	e28d3010 	add	r3, sp, #16	; 0x10
         aad64:	e1a02005 	mov	r2, r5
         aad68:	e1a00004 	mov	r0, r4
         aad6c:	e59d1018 	ldr	r1, [sp, #24]
         aad70:	eb67e53b 	bl	1aa4264 <TEditView::$TrackDistort(TPoint, TStrokePublic *, TRect const &)>
         aad74:	e3300000 	teq	r0, #0	; 0x0
         aad78:	0a000001 	beq	aad84 <TEditView::HiliteClick(TStrokePublic *)+0x1d4>
         aad7c:	e3a00001 	mov	r0, #1	; 0x1
         aad80:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         aad84:	e3170001 	tst	r7, #1	; 0x1
         aad88:	0affffc4 	beq	aaca0 <TEditView::HiliteClick(TStrokePublic *)+0xf0>
         aad8c:	e3380000 	teq	r8, #0	; 0x0
         aad90:	1a000006 	bne	aadb0 <TEditView::HiliteClick(TStrokePublic *)+0x200>
         aad94:	e28d1018 	add	r1, sp, #24	; 0x18
         aad98:	e1a00004 	mov	r0, r4
         aad9c:	e5942000 	ldr	r2, [r4]
         aada0:	e1a0e00f 	mov	lr, pc
         aada4:	e282f0bc 	add	pc, r2, #188	; 0xbc
         aada8:	e3300000 	teq	r0, #0	; 0x0
         aadac:	0affffbb 	beq	aaca0 <TEditView::HiliteClick(TStrokePublic *)+0xf0>
         aadb0:	e24dd008 	sub	sp, sp, #8	; 0x8
         aadb4:	e5cda005 	strb	sl, [sp, #5]
         aadb8:	e5cd9004 	strb	r9, [sp, #4]	; fField4
         aadbc:	e5cda001 	strb	sl, [sp, #1]
         aadc0:	e5cd9000 	strb	r9, [sp]
         aadc4:	e1a0100d 	mov	r1, sp
         aadc8:	e1a00004 	mov	r0, r4
         aadcc:	e5942000 	ldr	r2, [r4]
         aadd0:	e1a0e00f 	mov	lr, pc
         aadd4:	e282f0b8 	add	pc, r2, #184	; 0xb8
         aadd8:	e5940034 	ldr	r0, [r4, #52]	; fField52
         aaddc:	e2100002 	ands	r0, r0, #2	; 0x2
         aade0:	13a00001 	movne	r0, #1	; 0x1
         aade4:	e59f7088 	ldr	r7, [pc, #88]	; aae74 <TEditView::HiliteClick(TStrokePublic *)+0x2c4>
         aade8:	e5c7001c 	strb	r0, [r7, #28]	; fField28
         aadec:	e24dd004 	sub	sp, sp, #4	; 0x4
         aadf0:	e1a0000d 	mov	r0, sp
         aadf4:	e3a01000 	mov	r1, #0	; 0x0
         aadf8:	eb68a71a 	bl	1ad4a68 <TDragInfo::$__ct(long)>
         aadfc:	e5d72020 	ldrb	r2, [r7, #32]	; fField32
         aae00:	e1a0100d 	mov	r1, sp
         aae04:	e1a00004 	mov	r0, r4
         aae08:	eb685048 	bl	1abef30 <TEditView::$GetDragInfo(TDragInfo *, unsigned char)>
         aae0c:	e59d0000 	ldr	r0, [sp]
         aae10:	e5900000 	ldr	r0, [r0]
         aae14:	eb6c6924 	bl	1bc52ac <$Length(long)>
         aae18:	e3300000 	teq	r0, #0	; 0x0
         aae1c:	0a000015 	beq	aae78 <TEditView::HiliteClick(TStrokePublic *)+0x2c8>
         aae20:	e1a00005 	mov	r0, r5
         aae24:	eb679a9e 	bl	1a918a4 <TStrokePublic::$Done(void)>
         aae28:	e3300000 	teq	r0, #0	; 0x0
         aae2c:	05d40040 	ldreqb	r0, [r4, #64]	; fField64
         aae30:	03300000 	teqeq	r0, #0	; 0x0
         aae34:	1a00000f 	bne	aae78 <TEditView::HiliteClick(TStrokePublic *)+0x2c8>
         aae38:	e3a03000 	mov	r3, #0	; 0x0
         aae3c:	e1a0200d 	mov	r2, sp
         aae40:	e5d71020 	ldrb	r1, [r7, #32]	; fField32
         aae44:	e28d0004 	add	r0, sp, #4	; 0x4
         aae48:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         aae4c:	e28d3014 	add	r3, sp, #20	; 0x14
         aae50:	e28d201c 	add	r2, sp, #28	; 0x1c
         aae54:	e1a01005 	mov	r1, r5
         aae58:	e1a00004 	mov	r0, r4
         aae5c:	e594c000 	ldr	ip, [r4]
         aae60:	e1a0e00f 	mov	lr, pc
         aae64:	e28cf0d0 	add	pc, ip, #208	; 0xd0
         aae68:	e28dd010 	add	sp, sp, #16	; 0x10
         aae6c:	e3a04001 	mov	r4, #1	; 0x1
         aae70:	ea000001 	b	aae7c <TEditView::HiliteClick(TStrokePublic *)+0x2cc>
         aae74:	0c100cc4 	ldceq	12, cr0, [r0], -#784
         aae78:	e3a04000 	mov	r4, #0	; 0x0
         aae7c:	e5c7601c 	strb	r6, [r7, #28]	; fField28
         aae80:	e59d0000 	ldr	r0, [sp]
         aae84:	eb6c60cc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aae88:	e1a00004 	mov	r0, r4
         aae8c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::GetHilitedViewsSorted(void)
 * Address: 000aae90
 */
TEditView::GetHilitedViewsSorted(void) {
    /*
         aae90:	e1a0c00d 	mov	ip, sp
         aae94:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         aae98:	e24cb004 	sub	fp, ip, #4	; 0x4
         aae9c:	e1a04000 	mov	r4, r0
         aaea0:	ebfff305 	bl	a7abc <TEditView::CountHilites(void)>
         aaea4:	e3300000 	teq	r0, #0	; 0x0
         aaea8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         aaeac:	e1a00100 	mov	r0, r0, lsl #2
         aaeb0:	eb6c8e20 	bl	1bce738 <$__nw(unsigned int)>
         aaeb4:	e1b06000 	movs	r6, r0
         aaeb8:	1a000005 	bne	aaed4 <TEditView::GetHilitedViewsSorted(void)+0x44>
         aaebc:	e59f00d4 	ldr	r0, [pc, #d4]	; aaf98 <TEditView::GetHilitedViewsSorted(void)+0x108>
         aaec0:	e5900000 	ldr	r0, [r0]
         aaec4:	e3a02000 	mov	r2, #0	; 0x0
         aaec8:	e3a010e9 	mov	r1, #233	; 0xe9
         aaecc:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         aaed0:	eb6ce0b1 	bl	1be319c <$Throw>
         aaed4:	e24dd00c 	sub	sp, sp, #12	; 0xc
         aaed8:	e3a05000 	mov	r5, #0	; 0x0
         aaedc:	e1a0000d 	mov	r0, sp
         aaee0:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
         aaee4:	eb677552 	bl	1a88434 <TListLoop::$__ct(CList *)>
         aaee8:	e1a0000d 	mov	r0, sp
         aaeec:	eb67c7cb 	bl	1a9ce20 <TListLoop::$Next(void)>
         aaef0:	e1b04000 	movs	r4, r0
         aaef4:	0a000032 	beq	aafc4 <TEditView::GetHilitedViewsSorted(void)+0x134>
         aaef8:	e1a00004 	mov	r0, r4
         aaefc:	e5941000 	ldr	r1, [r4]
         aaf00:	e1a0e00f 	mov	lr, pc
         aaf04:	e281f094 	add	pc, r1, #148	; 0x94
         aaf08:	e3300000 	teq	r0, #0	; 0x0
         aaf0c:	0a000028 	beq	aafb4 <TEditView::GetHilitedViewsSorted(void)+0x124>
         aaf10:	e1a00006 	mov	r0, r6
         aaf14:	e2841010 	add	r1, r4, #16	; 0x10
         aaf18:	e591e000 	ldr	lr, [r1]
         aaf1c:	e1a0e84e 	mov	lr, lr, asr #16
         aaf20:	e5913002 	ldr	r3, [r1, #2]	; fField2
         aaf24:	e1a03843 	mov	r3, r3, asr #16
         aaf28:	e3a01000 	mov	r1, #0	; 0x0
         aaf2c:	e3550000 	cmp	r5, #0	; 0x0
         aaf30:	da00001d 	ble	aafac <TEditView::GetHilitedViewsSorted(void)+0x11c>
         aaf34:	e5902000 	ldr	r2, [r0]
         aaf38:	e2822010 	add	r2, r2, #16	; 0x10
         aaf3c:	e1a0c002 	mov	ip, r2
         aaf40:	e5922000 	ldr	r2, [r2]
         aaf44:	e1a02822 	mov	r2, r2, lsr #16
         aaf48:	e042200e 	sub	r2, r2, lr
         aaf4c:	e1a02802 	mov	r2, r2, lsl #16
         aaf50:	e1a02842 	mov	r2, r2, asr #16
         aaf54:	e352000c 	cmp	r2, #12	; 0xc
         aaf58:	ca000006 	bgt	aaf78 <TEditView::GetHilitedViewsSorted(void)+0xe8>
         aaf5c:	e3520000 	cmp	r2, #0	; 0x0
         aaf60:	b2622000 	rsblt	r2, r2, #0	; 0x0
         aaf64:	e352000c 	cmp	r2, #12	; 0xc
         aaf68:	ca00000b 	bgt	aaf9c <TEditView::GetHilitedViewsSorted(void)+0x10c>
         aaf6c:	e59c2002 	ldr	r2, [ip, #2]	; fField2
         aaf70:	e1530842 	cmp	r3, r2, asr #16
         aaf74:	aa000008 	bge	aaf9c <TEditView::GetHilitedViewsSorted(void)+0x10c>
         aaf78:	e0861105 	add	r1, r6, r5, lsl #2
         aaf7c:	e1510000 	cmp	r1, r0
         aaf80:	9a000009 	bls	aafac <TEditView::GetHilitedViewsSorted(void)+0x11c>
         aaf84:	e5112004 	ldr	r2, [r1, -#4]	; fField4
         aaf88:	e4012004 	str	r2, [r1], -#4	; fField4
         aaf8c:	e1510000 	cmp	r1, r0
         aaf90:	8afffffb 	bhi	aaf84 <TEditView::GetHilitedViewsSorted(void)+0xf4>
         aaf94:	ea000004 	b	aafac <TEditView::GetHilitedViewsSorted(void)+0x11c>
         aaf98:	00371318 	eoreqs	r1, r7, r8, lsl r3
         aaf9c:	e2811001 	add	r1, r1, #1	; 0x1
         aafa0:	e2800004 	add	r0, r0, #4	; 0x4
         aafa4:	e1510005 	cmp	r1, r5
         aafa8:	baffffe1 	blt	aaf34 <TEditView::GetHilitedViewsSorted(void)+0xa4>
         aafac:	e2855001 	add	r5, r5, #1	; 0x1
         aafb0:	e5804000 	str	r4, [r0]
         aafb4:	e1a0000d 	mov	r0, sp
         aafb8:	eb67c798 	bl	1a9ce20 <TListLoop::$Next(void)>
         aafbc:	e1b04000 	movs	r4, r0
         aafc0:	1affffcc 	bne	aaef8 <TEditView::GetHilitedViewsSorted(void)+0x68>
         aafc4:	e1a00006 	mov	r0, r6
         aafc8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::CleanupData(void)
 * Address: 000aafcc
 */
TEditView::CleanupData(void) {
    /*
         aafcc:	e1a0c00d 	mov	ip, sp
         aafd0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         aafd4:	e24cb004 	sub	fp, ip, #4	; 0x4
         aafd8:	e1a04000 	mov	r4, r0
         aafdc:	e24dd00c 	sub	sp, sp, #12	; 0xc
         aafe0:	eb684fd3 	bl	1abef34 <TEditView::$GetHilitedViewsSorted(void)>
         aafe4:	e58d0000 	str	r0, [sp]
         aafe8:	e3300000 	teq	r0, #0	; 0x0
         aafec:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         aaff0:	e24dd010 	sub	sp, sp, #16	; 0x10
         aaff4:	e1a00004 	mov	r0, r4
         aaff8:	ebfff2af 	bl	a7abc <TEditView::CountHilites(void)>
         aaffc:	e1a09000 	mov	r9, r0
         ab000:	e3a05000 	mov	r5, #0	; 0x0
         ab004:	e3a00002 	mov	r0, #2	; 0x2
         ab008:	e59d7010 	ldr	r7, [sp, #16]	; fField16
         ab00c:	eb6c5c4e 	bl	1bc214c <$AllocateRefHandle(long)>
         ab010:	e58d000c 	str	r0, [sp, #12]
         ab014:	e28d0008 	add	r0, sp, #8	; 0x8
         ab018:	eb6c5830 	bl	1bc10e0 <TObjectPtr::$__ct(void)>
         ab01c:	e3a08000 	mov	r8, #0	; 0x0
         ab020:	e3590000 	cmp	r9, #0	; 0x0
         ab024:	da000070 	ble	ab1ec <TEditView::CleanupData(void)+0x220>
         ab028:	e59f11dc 	ldr	r1, [pc, #1dc]	; ab20c <TEditView::CleanupData(void)+0x240>
         ab02c:	e58d1018 	str	r1, [sp, #24]
         ab030:	e59f01d8 	ldr	r0, [pc, #1d8]	; ab210 <TEditView::CleanupData(void)+0x244>
         ab034:	e58d0014 	str	r0, [sp, #20]
         ab038:	e5976000 	ldr	r6, [r7]
         ab03c:	e1a00006 	mov	r0, r6
         ab040:	e3a01051 	mov	r1, #81	; 0x51
         ab044:	e5962000 	ldr	r2, [r6]
         ab048:	e1a0e00f 	mov	lr, pc
         ab04c:	e282f004 	add	pc, r2, #4	; 0x4
         ab050:	e3300000 	teq	r0, #0	; 0x0
         ab054:	0a000048 	beq	ab17c <TEditView::CleanupData(void)+0x1b0>
         ab058:	e3350000 	teq	r5, #0	; 0x0
         ab05c:	01a05006 	moveq	r5, r6
         ab060:	0a000045 	beq	ab17c <TEditView::CleanupData(void)+0x1b0>
         ab064:	e24dd004 	sub	sp, sp, #4	; 0x4
         ab068:	e1a00006 	mov	r0, r6
         ab06c:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         ab070:	eb6c7d34 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         ab074:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         ab078:	e5810000 	str	r0, [r1]
         ab07c:	e28d1010 	add	r1, sp, #16	; 0x10
         ab080:	e1a0000d 	mov	r0, sp
         ab084:	eb6c5813 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         ab088:	e1a0100d 	mov	r1, sp
         ab08c:	e28d000c 	add	r0, sp, #12	; 0xc
         ab090:	eb6c580d 	bl	1bc10cc <DataPtr::$__as(DataPtr const &)>
         ab094:	e1a0000d 	mov	r0, sp
         ab098:	e3a01000 	mov	r1, #0	; 0x0
         ab09c:	eb6c5c17 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         ab0a0:	e24dd004 	sub	sp, sp, #4	; 0x4
         ab0a4:	e28d0010 	add	r0, sp, #16	; 0x10
         ab0a8:	eb6c5c19 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         ab0ac:	e1a0a000 	mov	sl, r0
         ab0b0:	eb6d0daa 	bl	1bee760 <$Ustrlen>
         ab0b4:	e58d0000 	str	r0, [sp]
         ab0b8:	e3500000 	cmp	r0, #0	; 0x0
         ab0bc:	da00001f 	ble	ab140 <TEditView::CleanupData(void)+0x174>
         ab0c0:	e24dd004 	sub	sp, sp, #4	; 0x4
         ab0c4:	e28d100c 	add	r1, sp, #12	; 0xc
         ab0c8:	e2850010 	add	r0, r5, #16	; 0x10
         ab0cc:	e8905000 	ldmia	r0, {ip, lr}
         ab0d0:	e8815000 	stmia	r1, {ip, lr}
         ab0d4:	e59d0012 	ldr	r0, [sp, #18]
         ab0d8:	e5cd000d 	strb	r0, [sp, #13]
         ab0dc:	e1a00440 	mov	r0, r0, asr #8
         ab0e0:	e5cd000c 	strb	r0, [sp, #12]
         ab0e4:	e59d000e 	ldr	r0, [sp, #14]
         ab0e8:	e2800001 	add	r0, r0, #1	; 0x1
         ab0ec:	e5cd0011 	strb	r0, [sp, #17]
         ab0f0:	e1a00440 	mov	r0, r0, asr #8
         ab0f4:	e5cd0010 	strb	r0, [sp, #16]	; fField16
         ab0f8:	e3a03000 	mov	r3, #0	; 0x0
         ab0fc:	e92d0008 	stmdb	sp!, {r3}
         ab100:	e1a00006 	mov	r0, r6
         ab104:	eb6c78f7 	bl	1bc94e8 <TView::$DataFrame(void)>
         ab108:	eb6c5c0f 	bl	1bc214c <$AllocateRefHandle(long)>
         ab10c:	e58d0004 	str	r0, [sp, #4]	; fField4
         ab110:	e28d3004 	add	r3, sp, #4	; 0x4
         ab114:	e3a02000 	mov	r2, #0	; 0x0
         ab118:	e28d1010 	add	r1, sp, #16	; 0x10
         ab11c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         ab120:	e28d301c 	add	r3, sp, #28	; 0x1c
         ab124:	e1a0100a 	mov	r1, sl
         ab128:	e1a00004 	mov	r0, r4
         ab12c:	e59d2014 	ldr	r2, [sp, #20]
         ab130:	eb67b6b9 	bl	1a98c1c <TEditView::$HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)>
         ab134:	e5bd0010 	ldr	r0, [sp, #16]!	; fField16
         ab138:	eb6c601f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ab13c:	e28dd004 	add	sp, sp, #4	; 0x4
         ab140:	e5b62004 	ldr	r2, [r6, #4]!	; fField4
         ab144:	e24dd004 	sub	sp, sp, #4	; 0x4
         ab148:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         ab14c:	e1a01004 	mov	r1, r4
         ab150:	e5906000 	ldr	r6, [r0]
         ab154:	e3a0003f 	mov	r0, #63	; 0x3f
         ab158:	eb67ec78 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         ab15c:	eb6c5bfa 	bl	1bc214c <$AllocateRefHandle(long)>
         ab160:	e58d0000 	str	r0, [sp]
         ab164:	e1a0100d 	mov	r1, sp
         ab168:	e1a00006 	mov	r0, r6
         ab16c:	eb6795b1 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         ab170:	e59d0000 	ldr	r0, [sp]
         ab174:	eb6c6010 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ab178:	e28dd00c 	add	sp, sp, #12	; 0xc
         ab17c:	e2888001 	add	r8, r8, #1	; 0x1
         ab180:	e2877004 	add	r7, r7, #4	; 0x4
         ab184:	e1580009 	cmp	r8, r9
         ab188:	baffffaa 	blt	ab038 <TEditView::CleanupData(void)+0x6c>
         ab18c:	e3350000 	teq	r5, #0	; 0x0
         ab190:	0a000015 	beq	ab1ec <TEditView::CleanupData(void)+0x220>
         ab194:	e1a00005 	mov	r0, r5
         ab198:	e5951000 	ldr	r1, [r5]
         ab19c:	e1a0e00f 	mov	lr, pc
         ab1a0:	e281ff56 	add	pc, r1, #344	; 0x158
         ab1a4:	e1a00004 	mov	r0, r4
         ab1a8:	e5941000 	ldr	r1, [r4]
         ab1ac:	e1a0e00f 	mov	lr, pc
         ab1b0:	e281f0ac 	add	pc, r1, #172	; 0xac
         ab1b4:	e3a03000 	mov	r3, #0	; 0x0
         ab1b8:	e92d0008 	stmdb	sp!, {r3}
         ab1bc:	e1a00005 	mov	r0, r5
         ab1c0:	eb67e414 	bl	1aa4218 <TParagraphView::$Text(void)>
         ab1c4:	eb6c6838 	bl	1bc52ac <$Length(long)>
         ab1c8:	e0800fa0 	add	r0, r0, r0, lsr #31
         ab1cc:	e1a000c0 	mov	r0, r0, asr #1
         ab1d0:	e2402001 	sub	r2, r0, #1	; 0x1
         ab1d4:	e1a01005 	mov	r1, r5
         ab1d8:	e59f0034 	ldr	r0, [pc, #34]	; ab214 <TEditView::CleanupData(void)+0x248>
         ab1dc:	e5900000 	ldr	r0, [r0]
         ab1e0:	e3a03000 	mov	r3, #0	; 0x0
         ab1e4:	eb68a1fe 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         ab1e8:	e28dd004 	add	sp, sp, #4	; 0x4
         ab1ec:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         ab1f0:	eb6c893a 	bl	1bcd6e0 <$__dl(void *)>
         ab1f4:	e28d0008 	add	r0, sp, #8	; 0x8
         ab1f8:	e3a01000 	mov	r1, #0	; 0x0
         ab1fc:	eb6c5bbf 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         ab200:	e59d000c 	ldr	r0, [sp, #12]
         ab204:	eb6c5fec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ab208:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         ab20c:	00684ac0 	rsbeq	r4, r8, r0, asr #21
         ab210:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         ab214:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TEditView::AddForm(RefVar const &)
 * Address: 000ab28c
 */
TEditView::AddForm(RefVar const &) {
    /*
         ab28c:	e1a0c00d 	mov	ip, sp
         ab290:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ab294:	e24cb004 	sub	fp, ip, #4	; 0x4
         ab298:	e1a04001 	mov	r4, r1
         ab29c:	e24dd004 	sub	sp, sp, #4	; 0x4
         ab2a0:	e1a01000 	mov	r1, r0
         ab2a4:	e3a02302 	mov	r2, #134217728	; 0x8000000
         ab2a8:	e3a0003d 	mov	r0, #61	; 0x3d
         ab2ac:	eb67ec23 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         ab2b0:	eb6c5ba5 	bl	1bc214c <$AllocateRefHandle(long)>
         ab2b4:	e1a01004 	mov	r1, r4
         ab2b8:	e58d0000 	str	r0, [sp]
         ab2bc:	e1a0000d 	mov	r0, sp
         ab2c0:	eb67ec27 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
         ab2c4:	e3a00000 	mov	r0, #0	; 0x0
         ab2c8:	e3a04000 	mov	r4, #0	; 0x0
         ab2cc:	e52d006c 	str	r0, [sp, -#108]!
         ab2d0:	e28d0008 	add	r0, sp, #8	; 0x8
         ab2d4:	eb6c1da6 	bl	1bb2974 <$setjmp>
         ab2d8:	e3300000 	teq	r0, #0	; 0x0
         ab2dc:	1a000009 	bne	ab308 <TEditView::AddForm(RefVar const &)+0x7c>
         ab2e0:	e1a0000d 	mov	r0, sp
         ab2e4:	eb6cd364 	bl	1be007c <$AddExceptionHandler>
         ab2e8:	e28d106c 	add	r1, sp, #108	; 0x6c
         ab2ec:	e59f0010 	ldr	r0, [pc, #10]	; ab304 <TEditView::AddForm(RefVar const &)+0x78>
         ab2f0:	e5900000 	ldr	r0, [r0]
         ab2f4:	eb67954f 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         ab2f8:	e1a0000d 	mov	r0, sp
         ab2fc:	eb6cd76d 	bl	1be10b8 <$ExitHandler>
         ab300:	ea000001 	b	ab30c <TEditView::AddForm(RefVar const &)+0x80>
         ab304:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         ab308:	e3a04001 	mov	r4, #1	; 0x1
         ab30c:	e28d006c 	add	r0, sp, #108	; 0x6c
         ab310:	eb67ec10 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         ab314:	e1a05000 	mov	r5, r0
         ab318:	e3340000 	teq	r4, #0	; 0x0
         ab31c:	11a0000d 	movne	r0, sp
         ab320:	1b6cdb8b 	blne	1be2154 <$NextHandler>
         ab324:	e5bd006c 	ldr	r0, [sp, #108]!
         ab328:	eb6c5fa3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ab32c:	e1a00005 	mov	r0, r5
         ab330:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::HandleCaret(TUnitPublic *)
 * Address: 000ab334
 */
TEditView::HandleCaret(TUnitPublic *) {
    /*
         ab334:	e1a0c00d 	mov	ip, sp
         ab338:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ab33c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ab340:	e1a04000 	mov	r4, r0
         ab344:	e1a05001 	mov	r5, r1
         ab348:	e1a00001 	mov	r0, r1
         ab34c:	eb67e7e3 	bl	1aa52e0 <$ValidTextEditCaret(TUnitPublic *)>
         ab350:	e3300000 	teq	r0, #0	; 0x0
         ab354:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         ab358:	e24dd010 	sub	sp, sp, #16	; 0x10
         ab35c:	e1a00005 	mov	r0, r5
         ab360:	eb678092 	bl	1a8b5b0 <TUnitPublic::$CaretType(void)>
         ab364:	e1a07000 	mov	r7, r0
         ab368:	e1a00005 	mov	r0, r5
         ab36c:	eb67a9c7 	bl	1a95a90 <TUnitPublic::$GestureAngle(void)>
         ab370:	e1a08000 	mov	r8, r0
         ab374:	e1a01005 	mov	r1, r5
         ab378:	e28d000c 	add	r0, sp, #12	; 0xc
         ab37c:	e3a02000 	mov	r2, #0	; 0x0
         ab380:	eb67a9c3 	bl	1a95a94 <TUnitPublic::$GesturePoint(long)>
         ab384:	e1a01005 	mov	r1, r5
         ab388:	e28d0008 	add	r0, sp, #8	; 0x8
         ab38c:	e3a02001 	mov	r2, #1	; 0x1
         ab390:	eb67a9bf 	bl	1a95a94 <TUnitPublic::$GesturePoint(long)>
         ab394:	e1a01005 	mov	r1, r5
         ab398:	e28d0004 	add	r0, sp, #4	; 0x4
         ab39c:	e3a02002 	mov	r2, #2	; 0x2
         ab3a0:	eb67a9bb 	bl	1a95a94 <TUnitPublic::$GesturePoint(long)>
         ab3a4:	e3370003 	teq	r7, #3	; 0x3
         ab3a8:	13370005 	teqne	r7, #5	; 0x5
         ab3ac:	1a000004 	bne	ab3c4 <TEditView::HandleCaret(TUnitPublic *)+0x90>
         ab3b0:	e1a01005 	mov	r1, r5
         ab3b4:	e1a0000d 	mov	r0, sp
         ab3b8:	e3a02003 	mov	r2, #3	; 0x3
         ab3bc:	eb67a9b4 	bl	1a95a94 <TUnitPublic::$GesturePoint(long)>
         ab3c0:	ea000003 	b	ab3d4 <TEditView::HandleCaret(TUnitPublic *)+0xa0>
         ab3c4:	e3a00000 	mov	r0, #0	; 0x0
         ab3c8:	e5cd0001 	strb	r0, [sp, #1]
         ab3cc:	e3a00080 	mov	r0, #128	; 0x80
         ab3d0:	e5cd0000 	strb	r0, [sp]
         ab3d4:	e3a06000 	mov	r6, #0	; 0x0
         ab3d8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         ab3dc:	e1a0000d 	mov	r0, sp
         ab3e0:	e5941020 	ldr	r1, [r4, #32]	; fField32
         ab3e4:	eb677412 	bl	1a88434 <TListLoop::$__ct(CList *)>
         ab3e8:	e1a0000d 	mov	r0, sp
         ab3ec:	eb67c68b 	bl	1a9ce20 <TListLoop::$Next(void)>
         ab3f0:	e1b05000 	movs	r5, r0
         ab3f4:	0a00001c 	beq	ab46c <TEditView::HandleCaret(TUnitPublic *)+0x138>
         ab3f8:	e5950008 	ldr	r0, [r5, #8]	; fField8
         ab3fc:	e3100001 	tst	r0, #1	; 0x1
         ab400:	0a000015 	beq	ab45c <TEditView::HandleCaret(TUnitPublic *)+0x128>
         ab404:	e1a00005 	mov	r0, r5
         ab408:	e3a01053 	mov	r1, #83	; 0x53
         ab40c:	e5952000 	ldr	r2, [r5]
         ab410:	e1a0e00f 	mov	lr, pc
         ab414:	e282f004 	add	pc, r2, #4	; 0x4
         ab418:	e3300000 	teq	r0, #0	; 0x0
         ab41c:	0a00000e 	beq	ab45c <TEditView::HandleCaret(TUnitPublic *)+0x128>
         ab420:	e28d300c 	add	r3, sp, #12	; 0xc
         ab424:	e28d2010 	add	r2, sp, #16	; 0x10
         ab428:	e28d1014 	add	r1, sp, #20	; 0x14
         ab42c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         ab430:	e28d3024 	add	r3, sp, #36	; 0x24
         ab434:	e1a02008 	mov	r2, r8
         ab438:	e1a01007 	mov	r1, r7
         ab43c:	e1a00005 	mov	r0, r5
         ab440:	e595c000 	ldr	ip, [r5]
         ab444:	e1a0e00f 	mov	lr, pc
         ab448:	e28cfe12 	add	pc, ip, #288	; 0x120
         ab44c:	e28dd00c 	add	sp, sp, #12	; 0xc
         ab450:	e3300000 	teq	r0, #0	; 0x0
         ab454:	13a06001 	movne	r6, #1	; 0x1
         ab458:	1a000003 	bne	ab46c <TEditView::HandleCaret(TUnitPublic *)+0x138>
         ab45c:	e1a0000d 	mov	r0, sp
         ab460:	eb67c66e 	bl	1a9ce20 <TListLoop::$Next(void)>
         ab464:	e1b05000 	movs	r5, r0
         ab468:	1affffe2 	bne	ab3f8 <TEditView::HandleCaret(TUnitPublic *)+0xc4>
         ab46c:	e28dd00c 	add	sp, sp, #12	; 0xc
         ab470:	e3360000 	teq	r6, #0	; 0x0
         ab474:	0a000003 	beq	ab488 <TEditView::HandleCaret(TUnitPublic *)+0x154>
         ab478:	e1a00004 	mov	r0, r4
         ab47c:	e5941000 	ldr	r1, [r4]
         ab480:	e1a0e00f 	mov	lr, pc
         ab484:	e281f0ac 	add	pc, r1, #172	; 0xac
         ab488:	e1a00006 	mov	r0, r6
         ab48c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::HandleLineGesture(TUnitPublic *)
 * Address: 000ab528
 */
TEditView::HandleLineGesture(TUnitPublic *) {
    /*
         ab528:	e1a0c00d 	mov	ip, sp
         ab52c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ab530:	e24cb004 	sub	fp, ip, #4	; 0x4
         ab534:	e1a05000 	mov	r5, r0
         ab538:	e1a04001 	mov	r4, r1
         ab53c:	e24dd008 	sub	sp, sp, #8	; 0x8
         ab540:	e1a00001 	mov	r0, r1
         ab544:	eb67a951 	bl	1a95a90 <TUnitPublic::$GestureAngle(void)>
         ab548:	e1a06000 	mov	r6, r0
         ab54c:	e1a01004 	mov	r1, r4
         ab550:	e28d0004 	add	r0, sp, #4	; 0x4
         ab554:	e3a02000 	mov	r2, #0	; 0x0
         ab558:	eb67a94d 	bl	1a95a94 <TUnitPublic::$GesturePoint(long)>
         ab55c:	e1a01004 	mov	r1, r4
         ab560:	e1a0000d 	mov	r0, sp
         ab564:	e3a02001 	mov	r2, #1	; 0x1
         ab568:	eb67a949 	bl	1a95a94 <TUnitPublic::$GesturePoint(long)>
         ab56c:	e1a00004 	mov	r0, r4
         ab570:	eb67e75b 	bl	1aa52e4 <$ValidLineGesture(TUnitPublic *)>
         ab574:	e3300000 	teq	r0, #0	; 0x0
         ab578:	0a000022 	beq	ab608 <TEditView::HandleLineGesture(TUnitPublic *)+0xe0>
         ab57c:	e3a04000 	mov	r4, #0	; 0x0
         ab580:	e24dd00c 	sub	sp, sp, #12	; 0xc
         ab584:	e1a0000d 	mov	r0, sp
         ab588:	e5b51020 	ldr	r1, [r5, #32]!	; fField32
         ab58c:	eb6773a8 	bl	1a88434 <TListLoop::$__ct(CList *)>
         ab590:	e1a0000d 	mov	r0, sp
         ab594:	eb67c621 	bl	1a9ce20 <TListLoop::$Next(void)>
         ab598:	e1b05000 	movs	r5, r0
         ab59c:	0a000017 	beq	ab600 <TEditView::HandleLineGesture(TUnitPublic *)+0xd8>
         ab5a0:	e5950008 	ldr	r0, [r5, #8]	; fField8
         ab5a4:	e3100001 	tst	r0, #1	; 0x1
         ab5a8:	0a000010 	beq	ab5f0 <TEditView::HandleLineGesture(TUnitPublic *)+0xc8>
         ab5ac:	e1a00005 	mov	r0, r5
         ab5b0:	e3a01053 	mov	r1, #83	; 0x53
         ab5b4:	e5952000 	ldr	r2, [r5]
         ab5b8:	e1a0e00f 	mov	lr, pc
         ab5bc:	e282f004 	add	pc, r2, #4	; 0x4
         ab5c0:	e3300000 	teq	r0, #0	; 0x0
         ab5c4:	0a000009 	beq	ab5f0 <TEditView::HandleLineGesture(TUnitPublic *)+0xc8>
         ab5c8:	e28d300c 	add	r3, sp, #12	; 0xc
         ab5cc:	e28d2010 	add	r2, sp, #16	; 0x10
         ab5d0:	e1a01006 	mov	r1, r6
         ab5d4:	e1a00005 	mov	r0, r5
         ab5d8:	e595c000 	ldr	ip, [r5]
         ab5dc:	e1a0e00f 	mov	lr, pc
         ab5e0:	e28cff49 	add	pc, ip, #292	; 0x124
         ab5e4:	e3300000 	teq	r0, #0	; 0x0
         ab5e8:	13a04001 	movne	r4, #1	; 0x1
         ab5ec:	1a000003 	bne	ab600 <TEditView::HandleLineGesture(TUnitPublic *)+0xd8>
         ab5f0:	e1a0000d 	mov	r0, sp
         ab5f4:	eb67c609 	bl	1a9ce20 <TListLoop::$Next(void)>
         ab5f8:	e1b05000 	movs	r5, r0
         ab5fc:	1affffe7 	bne	ab5a0 <TEditView::HandleLineGesture(TUnitPublic *)+0x78>
         ab600:	e28dd00c 	add	sp, sp, #12	; 0xc
         ab604:	e1a00004 	mov	r0, r4
         ab608:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::MoveBetweenParagraphs(long, long)
 * Address: 000ab60c
 */
TEditView::MoveBetweenParagraphs(long, long) {
    /*
         ab60c:	e1a0c00d 	mov	ip, sp
         ab610:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         ab614:	e24cb004 	sub	fp, ip, #4	; 0x4
         ab618:	e1a05001 	mov	r5, r1
         ab61c:	e1a04002 	mov	r4, r2
         ab620:	e3a06000 	mov	r6, #0	; 0x0
         ab624:	e3a08000 	mov	r8, #0	; 0x0
         ab628:	e5b09020 	ldr	r9, [r0, #32]!	; fField32
         ab62c:	e5990000 	ldr	r0, [r9]
         ab630:	e3500000 	cmp	r0, #0	; 0x0
         ab634:	da000026 	ble	ab6d4 <TEditView::MoveBetweenParagraphs(long, long)+0xc8>
         ab638:	e1a01808 	mov	r1, r8, lsl #16
         ab63c:	e1a01841 	mov	r1, r1, asr #16
         ab640:	e1a00009 	mov	r0, r9
         ab644:	eb6ceb3e 	bl	1be6344 <CList::$At(long)>
         ab648:	e1a07000 	mov	r7, r0
         ab64c:	e3a01051 	mov	r1, #81	; 0x51
         ab650:	e5902000 	ldr	r2, [r0]
         ab654:	e1a0e00f 	mov	lr, pc
         ab658:	e282f004 	add	pc, r2, #4	; 0x4
         ab65c:	e3300000 	teq	r0, #0	; 0x0
         ab660:	0a000017 	beq	ab6c4 <TEditView::MoveBetweenParagraphs(long, long)+0xb8>
         ab664:	e3740001 	cmn	r4, #1	; 0x1
         ab668:	1a000009 	bne	ab694 <TEditView::MoveBetweenParagraphs(long, long)+0x88>
         ab66c:	e5971010 	ldr	r1, [r7, #16]	; fField16
         ab670:	e1a01841 	mov	r1, r1, asr #16
         ab674:	e1510005 	cmp	r1, r5
         ab678:	aa000011 	bge	ab6c4 <TEditView::MoveBetweenParagraphs(long, long)+0xb8>
         ab67c:	e3360000 	teq	r6, #0	; 0x0
         ab680:	0a00000e 	beq	ab6c0 <TEditView::MoveBetweenParagraphs(long, long)+0xb4>
         ab684:	e5960010 	ldr	r0, [r6, #16]	; fField16
         ab688:	e1510840 	cmp	r1, r0, asr #16
         ab68c:	da00000c 	ble	ab6c4 <TEditView::MoveBetweenParagraphs(long, long)+0xb8>
         ab690:	ea00000a 	b	ab6c0 <TEditView::MoveBetweenParagraphs(long, long)+0xb4>
         ab694:	e3340001 	teq	r4, #1	; 0x1
         ab698:	1a000009 	bne	ab6c4 <TEditView::MoveBetweenParagraphs(long, long)+0xb8>
         ab69c:	e5971010 	ldr	r1, [r7, #16]	; fField16
         ab6a0:	e1a01841 	mov	r1, r1, asr #16
         ab6a4:	e1510005 	cmp	r1, r5
         ab6a8:	da000005 	ble	ab6c4 <TEditView::MoveBetweenParagraphs(long, long)+0xb8>
         ab6ac:	e3360000 	teq	r6, #0	; 0x0
         ab6b0:	0a000002 	beq	ab6c0 <TEditView::MoveBetweenParagraphs(long, long)+0xb4>
         ab6b4:	e5960010 	ldr	r0, [r6, #16]	; fField16
         ab6b8:	e1510840 	cmp	r1, r0, asr #16
         ab6bc:	aa000000 	bge	ab6c4 <TEditView::MoveBetweenParagraphs(long, long)+0xb8>
         ab6c0:	e1a06007 	mov	r6, r7
         ab6c4:	e2888001 	add	r8, r8, #1	; 0x1
         ab6c8:	e5990000 	ldr	r0, [r9]
         ab6cc:	e1500008 	cmp	r0, r8
         ab6d0:	caffffd8 	bgt	ab638 <TEditView::MoveBetweenParagraphs(long, long)+0x2c>
         ab6d4:	e1a00006 	mov	r0, r6
         ab6d8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::JamText(unsigned short *, unsigned long)
 * Address: 000ab70c
 */
TEditView::JamText(unsigned short *, unsigned long) {
    /*
         ab70c:	e1a0c00d 	mov	ip, sp
         ab710:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         ab714:	e24cb004 	sub	fp, ip, #4	; 0x4
         ab718:	e1a04000 	mov	r4, r0
         ab71c:	e1a05001 	mov	r5, r1
         ab720:	e1a06002 	mov	r6, r2
         ab724:	eb68a097 	bl	1ad3988 <TEditView::$ResetHilitesForNewWord(void)>
         ab728:	e1a00004 	mov	r0, r4
         ab72c:	e3a01001 	mov	r1, #1	; 0x1
         ab730:	eb68a4c5 	bl	1ad4a4c <TEditView::$ValidateCaret(unsigned char)>
         ab734:	e2840038 	add	r0, r4, #56	; 0x38
         ab738:	e1a08000 	mov	r8, r0
         ab73c:	e5900000 	ldr	r0, [r0]
         ab740:	e1a00840 	mov	r0, r0, asr #16
         ab744:	e3a09000 	mov	r9, #0	; 0x0
         ab748:	e3700902 	cmn	r0, #32768	; 0x8000
         ab74c:	1a000045 	bne	ab868 <TEditView::JamText(unsigned short *, unsigned long)+0x15c>
         ab750:	e24dd014 	sub	sp, sp, #20	; 0x14
         ab754:	e59f1034 	ldr	r1, [pc, #34]	; ab790 <TEditView::JamText(unsigned short *, unsigned long)+0x84>
         ab758:	e1a00004 	mov	r0, r4
         ab75c:	eb6c7b7d 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
         ab760:	eb6c5a79 	bl	1bc214c <$AllocateRefHandle(long)>
         ab764:	e1a07000 	mov	r7, r0
         ab768:	e5900000 	ldr	r0, [r0]
         ab76c:	e3300002 	teq	r0, #2	; 0x2
         ab770:	0a000007 	beq	ab794 <TEditView::JamText(unsigned short *, unsigned long)+0x88>
         ab774:	e3100003 	tst	r0, #3	; 0x3
         ab778:	01a00140 	moveq	r0, r0, asr #2
         ab77c:	0a000000 	beq	ab784 <TEditView::JamText(unsigned short *, unsigned long)+0x78>
         ab780:	eb6c5a65 	bl	1bc211c <$_RINTError(long)>
         ab784:	e1a00800 	mov	r0, r0, lsl #16
         ab788:	e1a00840 	mov	r0, r0, asr #16
         ab78c:	ea000001 	b	ab798 <TEditView::JamText(unsigned short *, unsigned long)+0x8c>
         ab790:	00685058 	rsbeq	r5, r8, r8, asr r0
         ab794:	e3a00014 	mov	r0, #20	; 0x14
         ab798:	e1a00800 	mov	r0, r0, lsl #16
         ab79c:	e1a00840 	mov	r0, r0, asr #16
         ab7a0:	e3a0100c 	mov	r1, #12	; 0xc
         ab7a4:	e24dd004 	sub	sp, sp, #4	; 0x4
         ab7a8:	e5cd1003 	strb	r1, [sp, #3]
         ab7ac:	e5cd9002 	strb	r9, [sp, #2]	; fField2
         ab7b0:	e5cd0001 	strb	r0, [sp, #1]
         ab7b4:	e1a00440 	mov	r0, r0, asr #8
         ab7b8:	e5cd0000 	strb	r0, [sp]
         ab7bc:	e49d0004 	ldr	r0, [sp], #4	; fField4
         ab7c0:	e58d0010 	str	r0, [sp, #16]	; fField16
         ab7c4:	e5940010 	ldr	r0, [r4, #16]	; fField16
         ab7c8:	e58d000c 	str	r0, [sp, #12]
         ab7cc:	e1a0000d 	mov	r0, sp
         ab7d0:	e5941020 	ldr	r1, [r4, #32]	; fField32
         ab7d4:	eb677316 	bl	1a88434 <TListLoop::$__ct(CList *)>
         ab7d8:	e1a0000d 	mov	r0, sp
         ab7dc:	eb67c58f 	bl	1a9ce20 <TListLoop::$Next(void)>
         ab7e0:	e3300000 	teq	r0, #0	; 0x0
         ab7e4:	0a00000a 	beq	ab814 <TEditView::JamText(unsigned short *, unsigned long)+0x108>
         ab7e8:	e5900014 	ldr	r0, [r0, #20]
         ab7ec:	e1a00840 	mov	r0, r0, asr #16
         ab7f0:	e59d100c 	ldr	r1, [sp, #12]
         ab7f4:	e1500841 	cmp	r0, r1, asr #16
         ab7f8:	c5cd000d 	strgtb	r0, [sp, #13]
         ab7fc:	c1a00440 	movgt	r0, r0, asr #8
         ab800:	c5cd000c 	strgtb	r0, [sp, #12]
         ab804:	e1a0000d 	mov	r0, sp
         ab808:	eb67c584 	bl	1a9ce20 <TListLoop::$Next(void)>
         ab80c:	e3300000 	teq	r0, #0	; 0x0
         ab810:	1afffff4 	bne	ab7e8 <TEditView::JamText(unsigned short *, unsigned long)+0xdc>
         ab814:	e59d1012 	ldr	r1, [sp, #18]
         ab818:	e59d000e 	ldr	r0, [sp, #14]
         ab81c:	e0810000 	add	r0, r1, r0
         ab820:	e5cd0011 	strb	r0, [sp, #17]
         ab824:	e1a00440 	mov	r0, r0, asr #8
         ab828:	e5cd0010 	strb	r0, [sp, #16]	; fField16
         ab82c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         ab830:	e59d000c 	ldr	r0, [sp, #12]
         ab834:	e0810000 	add	r0, r1, r0
         ab838:	e5cd0013 	strb	r0, [sp, #19]
         ab83c:	e1a00440 	mov	r0, r0, asr #8
         ab840:	e5cd0012 	strb	r0, [sp, #18]
         ab844:	e28d1010 	add	r1, sp, #16	; 0x10
         ab848:	e1a00004 	mov	r0, r4
         ab84c:	e3a02000 	mov	r2, #0	; 0x0
         ab850:	e5943000 	ldr	r3, [r4]
         ab854:	e1a0e00f 	mov	lr, pc
         ab858:	e283fe12 	add	pc, r3, #288	; 0x120
         ab85c:	e1a00007 	mov	r0, r7
         ab860:	eb6c5e55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ab864:	e28dd014 	add	sp, sp, #20	; 0x14
         ab868:	e24dd004 	sub	sp, sp, #4	; 0x4
         ab86c:	e59f1138 	ldr	r1, [pc, #138]	; ab9ac <TEditView::JamText(unsigned short *, unsigned long)+0x2a0>
         ab870:	e1a00004 	mov	r0, r4
         ab874:	eb6c7b33 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         ab878:	eb6c5a33 	bl	1bc214c <$AllocateRefHandle(long)>
         ab87c:	e58d0000 	str	r0, [sp]
         ab880:	e5900000 	ldr	r0, [r0]
         ab884:	e3300002 	teq	r0, #2	; 0x2
         ab888:	1a000003 	bne	ab89c <TEditView::JamText(unsigned short *, unsigned long)+0x190>
         ab88c:	e59f011c 	ldr	r0, [pc, #11c]	; ab9b0 <TEditView::JamText(unsigned short *, unsigned long)+0x2a4>
         ab890:	eb67ac9b 	bl	1a96b04 <$GetPreference(RefVar const &)>
         ab894:	e59d1000 	ldr	r1, [sp]
         ab898:	e5810000 	str	r0, [r1]
         ab89c:	e24dd008 	sub	sp, sp, #8	; 0x8
         ab8a0:	e58d9004 	str	r9, [sp, #4]	; fField4
         ab8a4:	e58d9000 	str	r9, [sp]
         ab8a8:	e7950086 	ldr	r0, [r5, r6, lsl #1]
         ab8ac:	e1a00820 	mov	r0, r0, lsr #16
         ab8b0:	e3300000 	teq	r0, #0	; 0x0
         ab8b4:	01a07005 	moveq	r7, r5
         ab8b8:	0a000003 	beq	ab8cc <TEditView::JamText(unsigned short *, unsigned long)+0x1c0>
         ab8bc:	e1a01006 	mov	r1, r6
         ab8c0:	e1a00005 	mov	r0, r5
         ab8c4:	ebffe169 	bl	a3e70 <MakeNullTerminatedString(unsigned short *, unsigned long)>
         ab8c8:	e1a07000 	mov	r7, r0
         ab8cc:	e24dd028 	sub	sp, sp, #40	; 0x28
         ab8d0:	e3a09002 	mov	r9, #2	; 0x2
         ab8d4:	e0892086 	add	r2, r9, r6, lsl #1
         ab8d8:	e1a01007 	mov	r1, r7
         ab8dc:	e1a0000d 	mov	r0, sp
         ab8e0:	eb04046a 	bl	1aca90 <TRichString::__ct(unsigned short *, unsigned long)>
         ab8e4:	e28d2028 	add	r2, sp, #40	; 0x28
         ab8e8:	e28d1030 	add	r1, sp, #48	; 0x30
         ab8ec:	e1a0000d 	mov	r0, sp
         ab8f0:	e3a03000 	mov	r3, #0	; 0x0
         ab8f4:	eb67e248 	bl	1aa421c <$TextBounds(TRichString &, RefVar const &, TRect *, long)>
         ab8f8:	e24dd004 	sub	sp, sp, #4	; 0x4
         ab8fc:	e1a01004 	mov	r1, r4
         ab900:	e1a0000d 	mov	r0, sp
         ab904:	eb688fb6 	bl	1acf7e4 <TEditView::$GetCaretGlobalTopLeft(void)>
         ab908:	e28d002c 	add	r0, sp, #44	; 0x2c
         ab90c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         ab910:	e1a01841 	mov	r1, r1, asr #16
         ab914:	e59d2000 	ldr	r2, [sp]
         ab918:	e1a02842 	mov	r2, r2, asr #16
         ab91c:	eb6a97f1 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         ab920:	e28dd004 	add	sp, sp, #4	; 0x4
         ab924:	e1370005 	teq	r7, r5
         ab928:	11a00007 	movne	r0, r7
         ab92c:	1b6c876b 	blne	1bcd6e0 <$__dl(void *)>
         ab930:	e24dd008 	sub	sp, sp, #8	; 0x8
         ab934:	e28d3004 	add	r3, sp, #4	; 0x4
         ab938:	e92d0008 	stmdb	sp!, {r3}
         ab93c:	e1a00009 	mov	r0, r9
         ab940:	eb6c5a01 	bl	1bc214c <$AllocateRefHandle(long)>
         ab944:	e58d0004 	str	r0, [sp, #4]	; fField4
         ab948:	e28d3004 	add	r3, sp, #4	; 0x4
         ab94c:	e3a02000 	mov	r2, #0	; 0x0
         ab950:	e28d1034 	add	r1, sp, #52	; 0x34
         ab954:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         ab958:	e28d3040 	add	r3, sp, #64	; 0x40
         ab95c:	e1a02006 	mov	r2, r6
         ab960:	e1a01005 	mov	r1, r5
         ab964:	e1a00004 	mov	r0, r4
         ab968:	eb67b4ab 	bl	1a98c1c <TEditView::$HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)>
         ab96c:	e5bd0010 	ldr	r0, [sp, #16]!	; fField16
         ab970:	eb6c5e11 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ab974:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
         ab978:	e2411501 	sub	r1, r1, #4194304	; 0x400000
         ab97c:	e5c81005 	strb	r1, [r8, #5]
         ab980:	e3e0007f 	mvn	r0, #127	; 0x7f
         ab984:	e5c80004 	strb	r0, [r8, #4]	; fField4
         ab988:	e5c81001 	strb	r1, [r8, #1]
         ab98c:	e5c80000 	strb	r0, [r8]
         ab990:	e3a04001 	mov	r4, #1	; 0x1
         ab994:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         ab998:	eb6c5e07 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ab99c:	e59d0038 	ldr	r0, [sp, #56]
         ab9a0:	eb6c5e05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ab9a4:	e1a00004 	mov	r0, r4
         ab9a8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         ab9ac:	00684fc8 	rsbeq	r4, r8, r8, asr #31
         ab9b0:	00684e48 	rsbeq	r4, r8, r8, asr #28
    */
}

/**
 * Symbol: TEditView::BuildKeyChildList(TViewList *, long, long)
 * Address: 000ab9b4
 */
TEditView::BuildKeyChildList(TViewList *, long, long) {
    /*
         ab9b4:	e1a0c00d 	mov	ip, sp
         ab9b8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ab9bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         ab9c0:	e1a05000 	mov	r5, r0
         ab9c4:	e1a04001 	mov	r4, r1
         ab9c8:	e1a06002 	mov	r6, r2
         ab9cc:	eb688731 	bl	1acd698 <TView::$BuildKeyChildList(TViewList *, long, long)>
         ab9d0:	e3360000 	teq	r6, #0	; 0x0
         ab9d4:	05950008 	ldreq	r0, [r5, #8]	; fField8
         ab9d8:	02000002 	andeq	r0, r0, #2	; 0x2
         ab9dc:	03300000 	teqeq	r0, #0	; 0x0
         ab9e0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         ab9e4:	e1a02005 	mov	r2, r5
         ab9e8:	e5941000 	ldr	r1, [r4]
         ab9ec:	e1a00004 	mov	r0, r4
         ab9f0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ab9f4:	ea6cf6bc 	b	1be94ec <CList::$InsertAt(long, void *)>
    */
}

/**
 * Symbol: TEditView::HandleWordUnit(TUnitPublic *)
 * Address: 000ab9f8
 */
TEditView::HandleWordUnit(TUnitPublic *) {
    /*
         ab9f8:	e1a0c00d 	mov	ip, sp
         ab9fc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         aba00:	e24cb004 	sub	fp, ip, #4	; 0x4
         aba04:	e1a05000 	mov	r5, r0
         aba08:	e1a04001 	mov	r4, r1
         aba0c:	e24dd008 	sub	sp, sp, #8	; 0x8
         aba10:	e1a0100d 	mov	r1, sp
         aba14:	e1a00004 	mov	r0, r4
         aba18:	eb677ad4 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
         aba1c:	e1a00004 	mov	r0, r4
         aba20:	eb67ea39 	bl	1aa630c <TUnitPublic::$Word(void)>
         aba24:	e1a06000 	mov	r6, r0
         aba28:	eb6cd9b7 	bl	1be210c <$HLock>
         aba2c:	e24dd008 	sub	sp, sp, #8	; 0x8
         aba30:	e5960000 	ldr	r0, [r6]
         aba34:	e1a08000 	mov	r8, r0
         aba38:	eb6d0b48 	bl	1bee760 <$Ustrlen>
         aba3c:	e1a07000 	mov	r7, r0
         aba40:	e28d3004 	add	r3, sp, #4	; 0x4
         aba44:	e92d0008 	stmdb	sp!, {r3}
         aba48:	e3a00002 	mov	r0, #2	; 0x2
         aba4c:	eb6c59be 	bl	1bc214c <$AllocateRefHandle(long)>
         aba50:	e58d0004 	str	r0, [sp, #4]	; fField4
         aba54:	e28d3004 	add	r3, sp, #4	; 0x4
         aba58:	e1a02004 	mov	r2, r4
         aba5c:	e28d100c 	add	r1, sp, #12	; 0xc
         aba60:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         aba64:	e28d3018 	add	r3, sp, #24	; 0x18
         aba68:	e1a02007 	mov	r2, r7
         aba6c:	e1a01008 	mov	r1, r8
         aba70:	e1a00005 	mov	r0, r5
         aba74:	eb67b468 	bl	1a98c1c <TEditView::$HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)>
         aba78:	e1a04000 	mov	r4, r0
         aba7c:	e5bd0010 	ldr	r0, [sp, #16]!	; fField16
         aba80:	eb6c5dcd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         aba84:	e1a00006 	mov	r0, r6
         aba88:	eb6cd9a1 	bl	1be2114 <$HUnlock>
         aba8c:	e1a00006 	mov	r0, r6
         aba90:	eb6cd586 	bl	1be10b0 <$DisposHandle>
         aba94:	e1b00004 	movs	r0, r4
         aba98:	13a00001 	movne	r0, #1	; 0x1
         aba9c:	e20000ff 	and	r0, r0, #255	; 0xff
         abaa0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)
 * Address: 000abaa4
 */
TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *) {
    /*
         abaa4:	e1a0c00d 	mov	ip, sp
         abaa8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         abaac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         abab0:	e24cb014 	sub	fp, ip, #20	; 0x14
         abab4:	e1a05000 	mov	r5, r0
         abab8:	e1a04003 	mov	r4, r3
         ababc:	e28ba018 	add	sl, fp, #24	; 0x18
         abac0:	e89a0440 	ldmia	sl, {r6, sl}
         abac4:	e24dd004 	sub	sp, sp, #4	; 0x4
         abac8:	e59f01c4 	ldr	r0, [pc, #1c4]	; abc94 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x1f0>
         abacc:	e5900000 	ldr	r0, [r0]
         abad0:	e5907068 	ldr	r7, [r0, #104]
         abad4:	e1370005 	teq	r7, r5
         abad8:	0a00000d 	beq	abb14 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x70>
         abadc:	e3370000 	teq	r7, #0	; 0x0
         abae0:	0a000004 	beq	abaf8 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x54>
         abae4:	e597101c 	ldr	r1, [r7, #28]	; fField28
         abae8:	e1310005 	teq	r1, r5
         abaec:	1591101c 	ldrne	r1, [r1, #28]	; fField28
         abaf0:	11310005 	teqne	r1, r5
         abaf4:	0a000006 	beq	abb14 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x70>
         abaf8:	e3a03000 	mov	r3, #0	; 0x0
         abafc:	e92d0008 	stmdb	sp!, {r3}
         abb00:	e3a02000 	mov	r2, #0	; 0x0
         abb04:	e3a01000 	mov	r1, #0	; 0x0
         abb08:	eb689fb5 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
         abb0c:	e28dd004 	add	sp, sp, #4	; 0x4
         abb10:	e1a07005 	mov	r7, r5
         abb14:	e1a00005 	mov	r0, r5
         abb18:	e3a01001 	mov	r1, #1	; 0x1
         abb1c:	eb68a3ca 	bl	1ad4a4c <TEditView::$ValidateCaret(unsigned char)>
         abb20:	e24dd010 	sub	sp, sp, #16	; 0x10
         abb24:	e5940002 	ldr	r0, [r4, #2]	; fField2
         abb28:	e1b00840 	movs	r0, r0, asr #16
         abb2c:	05940006 	ldreq	r0, [r4, #6]	; fField6
         abb30:	01a00840 	moveq	r0, r0, asr #16
         abb34:	03300000 	teqeq	r0, #0	; 0x0
         abb38:	05940000 	ldreq	r0, [r4]
         abb3c:	01a00840 	moveq	r0, r0, asr #16
         abb40:	03300000 	teqeq	r0, #0	; 0x0
         abb44:	05940004 	ldreq	r0, [r4, #4]	; fField4
         abb48:	01a00840 	moveq	r0, r0, asr #16
         abb4c:	03300000 	teqeq	r0, #0	; 0x0
         abb50:	13a00000 	movne	r0, #0	; 0x0
         abb54:	03a00001 	moveq	r0, #1	; 0x1
         abb58:	e20090ff 	and	r9, r0, #255	; 0xff
         abb5c:	e3a00000 	mov	r0, #0	; 0x0
         abb60:	e3a01001 	mov	r1, #1	; 0x1
         abb64:	e58d000c 	str	r0, [sp, #12]
         abb68:	e59f0128 	ldr	r0, [pc, #128]	; abc98 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x1f4>
         abb6c:	e58d0010 	str	r0, [sp, #16]	; fField16
         abb70:	e5c01000 	strb	r1, [r0]
         abb74:	e3360000 	teq	r6, #0	; 0x0
         abb78:	0a000047 	beq	abc9c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x1f8>
         abb7c:	e1a00006 	mov	r0, r6
         abb80:	eb67dd91 	bl	1aa31cc <TUnitPublic::$StartTime(void)>
         abb84:	e58d0008 	str	r0, [sp, #8]	; fField8
         abb88:	e1a00006 	mov	r0, r6
         abb8c:	eb679b76 	bl	1a9296c <TUnitPublic::$EndTime(void)>
         abb90:	e58d0004 	str	r0, [sp, #4]	; fField4
         abb94:	e24dd008 	sub	sp, sp, #8	; 0x8
         abb98:	e5960028 	ldr	r0, [r6, #40]
         abb9c:	e58d0000 	str	r0, [sp]
         abba0:	e596002c 	ldr	r0, [r6, #44]
         abba4:	e58d0004 	str	r0, [sp, #4]	; fField4
         abba8:	e59d1000 	ldr	r1, [sp]
         abbac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         abbb0:	e0810000 	add	r0, r1, r0
         abbb4:	e1a00800 	mov	r0, r0, lsl #16
         abbb8:	e1a00840 	mov	r0, r0, asr #16
         abbbc:	e41d1004 	ldr	r1, [sp], -#4	; fField4
         abbc0:	e1a01821 	mov	r1, r1, lsr #16
         abbc4:	e59d200a 	ldr	r2, [sp, #10]
         abbc8:	e0811002 	add	r1, r1, r2
         abbcc:	e1a01801 	mov	r1, r1, lsl #16
         abbd0:	e1a01841 	mov	r1, r1, asr #16
         abbd4:	e5cd0003 	strb	r0, [sp, #3]
         abbd8:	e1a00440 	mov	r0, r0, asr #8
         abbdc:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         abbe0:	e5cd1001 	strb	r1, [sp, #1]
         abbe4:	e1a00441 	mov	r0, r1, asr #8
         abbe8:	e5cd0000 	strb	r0, [sp]
         abbec:	e49d000c 	ldr	r0, [sp], #12
         abbf0:	e58d0000 	str	r0, [sp]
         abbf4:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         abbf8:	e1a00840 	mov	r0, r0, asr #16
         abbfc:	e1a000c0 	mov	r0, r0, asr #1
         abc00:	e5cd0003 	strb	r0, [sp, #3]
         abc04:	e1a00440 	mov	r0, r0, asr #8
         abc08:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         abc0c:	e59d0000 	ldr	r0, [sp]
         abc10:	e1a00840 	mov	r0, r0, asr #16
         abc14:	e1a000c0 	mov	r0, r0, asr #1
         abc18:	e5cd0001 	strb	r0, [sp, #1]
         abc1c:	e1a00440 	mov	r0, r0, asr #8
         abc20:	e5cd0000 	strb	r0, [sp]
         abc24:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         abc28:	e5940002 	ldr	r0, [r4, #2]	; fField2
         abc2c:	e1a00840 	mov	r0, r0, asr #16
         abc30:	e1500841 	cmp	r0, r1, asr #16
         abc34:	ca000004 	bgt	abc4c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x1a8>
         abc38:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         abc3c:	e1a01841 	mov	r1, r1, asr #16
         abc40:	e5942006 	ldr	r2, [r4, #6]	; fField6
         abc44:	e1510842 	cmp	r1, r2, asr #16
         abc48:	da000002 	ble	abc58 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x1b4>
         abc4c:	e5cd0003 	strb	r0, [sp, #3]
         abc50:	e1a00440 	mov	r0, r0, asr #8
         abc54:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         abc58:	e59d0000 	ldr	r0, [sp]
         abc5c:	e1a00840 	mov	r0, r0, asr #16
         abc60:	e5941000 	ldr	r1, [r4]
         abc64:	e1500841 	cmp	r0, r1, asr #16
         abc68:	a5941004 	ldrge	r1, [r4, #4]	; fField4
         abc6c:	a1a01841 	movge	r1, r1, asr #16
         abc70:	a59d0000 	ldrge	r0, [sp]
         abc74:	a1510840 	cmpge	r1, r0, asr #16
         abc78:	aa000017 	bge	abcdc <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x238>
         abc7c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         abc80:	e1a00820 	mov	r0, r0, lsr #16
         abc84:	e5cd0001 	strb	r0, [sp, #1]
         abc88:	e1a00440 	mov	r0, r0, asr #8
         abc8c:	e5cd0000 	strb	r0, [sp]
         abc90:	ea000011 	b	abcdc <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x238>
         abc94:	0c101934 	ldceq	9, cr1, [r0], -#208
         abc98:	0c101710 	ldceq	7, cr1, [r0], -#64	; fField64
         abc9c:	e3a00000 	mov	r0, #0	; 0x0
         abca0:	e58d0008 	str	r0, [sp, #8]	; fField8
         abca4:	e58d0004 	str	r0, [sp, #4]	; fField4
         abca8:	e5941002 	ldr	r1, [r4, #2]	; fField2
         abcac:	e1a01841 	mov	r1, r1, asr #16
         abcb0:	e5940004 	ldr	r0, [r4, #4]	; fField4
         abcb4:	e1a00840 	mov	r0, r0, asr #16
         abcb8:	e24dd004 	sub	sp, sp, #4	; 0x4
         abcbc:	e5cd1003 	strb	r1, [sp, #3]
         abcc0:	e1a01441 	mov	r1, r1, asr #8
         abcc4:	e5cd1002 	strb	r1, [sp, #2]	; fField2
         abcc8:	e5cd0001 	strb	r0, [sp, #1]
         abccc:	e1a00440 	mov	r0, r0, asr #8
         abcd0:	e5cd0000 	strb	r0, [sp]
         abcd4:	e49d0004 	ldr	r0, [sp], #4	; fField4
         abcd8:	e58d0000 	str	r0, [sp]
         abcdc:	e24dd008 	sub	sp, sp, #8	; 0x8
         abce0:	e3a00000 	mov	r0, #0	; 0x0
         abce4:	e3370000 	teq	r7, #0	; 0x0
         abce8:	e58d0004 	str	r0, [sp, #4]	; fField4
         abcec:	0a00000e 	beq	abd2c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x288>
         abcf0:	e597001c 	ldr	r0, [r7, #28]	; fField28
         abcf4:	e1300005 	teq	r0, r5
         abcf8:	1590001c 	ldrne	r0, [r0, #28]	; fField28
         abcfc:	11300005 	teqne	r0, r5
         abd00:	1a000009 	bne	abd2c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x288>
         abd04:	e1a00007 	mov	r0, r7
         abd08:	e5971000 	ldr	r1, [r7]
         abd0c:	e1a0e00f 	mov	lr, pc
         abd10:	e281f094 	add	pc, r1, #148	; 0x94
         abd14:	e3300000 	teq	r0, #0	; 0x0
         abd18:	0a000003 	beq	abd2c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x288>
         abd1c:	eb032aa5 	bl	1767b8 <CorrectorUp(void)>
         abd20:	e3300000 	teq	r0, #0	; 0x0
         abd24:	03a00001 	moveq	r0, #1	; 0x1
         abd28:	0a000000 	beq	abd30 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x28c>
         abd2c:	e3a00000 	mov	r0, #0	; 0x0
         abd30:	e20000ff 	and	r0, r0, #255	; 0xff
         abd34:	e3390000 	teq	r9, #0	; 0x0
         abd38:	e58d0000 	str	r0, [sp]
         abd3c:	1a000134 	bne	ac214 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x770>
         abd40:	e24dd00c 	sub	sp, sp, #12	; 0xc
         abd44:	e1a0000d 	mov	r0, sp
         abd48:	e5951020 	ldr	r1, [r5, #32]	; fField32
         abd4c:	eb6771b8 	bl	1a88434 <TListLoop::$__ct(CList *)>
         abd50:	e1a0000d 	mov	r0, sp
         abd54:	eb67c431 	bl	1a9ce20 <TListLoop::$Next(void)>
         abd58:	e1b09000 	movs	r9, r0
         abd5c:	0a00003a 	beq	abe4c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x3a8>
         abd60:	e5990008 	ldr	r0, [r9, #8]	; fField8
         abd64:	e3100001 	tst	r0, #1	; 0x1
         abd68:	0a000033 	beq	abe3c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x398>
         abd6c:	e24dd008 	sub	sp, sp, #8	; 0x8
         abd70:	e1a00009 	mov	r0, r9
         abd74:	eb6c75db 	bl	1bc94e8 <TView::$DataFrame(void)>
         abd78:	eb6c58f3 	bl	1bc214c <$AllocateRefHandle(long)>
         abd7c:	e58d0004 	str	r0, [sp, #4]	; fField4
         abd80:	e59a0000 	ldr	r0, [sl]
         abd84:	e5901000 	ldr	r1, [r0]
         abd88:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         abd8c:	e5900000 	ldr	r0, [r0]
         abd90:	eb6c6126 	bl	1bc4230 <$EQRef__FlT1>
         abd94:	e3300000 	teq	r0, #0	; 0x0
         abd98:	13a00000 	movne	r0, #0	; 0x0
         abd9c:	03a00001 	moveq	r0, #1	; 0x1
         abda0:	e58d0000 	str	r0, [sp]
         abda4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         abda8:	eb6c5d03 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         abdac:	e49d0004 	ldr	r0, [sp], #4	; fField4
         abdb0:	e3300000 	teq	r0, #0	; 0x0
         abdb4:	0a00001f 	beq	abe38 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x394>
         abdb8:	e1a00009 	mov	r0, r9
         abdbc:	e3a01053 	mov	r1, #83	; 0x53
         abdc0:	e5992000 	ldr	r2, [r9]
         abdc4:	e1a0e00f 	mov	lr, pc
         abdc8:	e282f004 	add	pc, r2, #4	; 0x4
         abdcc:	e3300000 	teq	r0, #0	; 0x0
         abdd0:	0a000018 	beq	abe38 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x394>
         abdd4:	e1a0c009 	mov	ip, r9
         abdd8:	e1a03006 	mov	r3, r6
         abddc:	e3a02000 	mov	r2, #0	; 0x0
         abde0:	e3a01000 	mov	r1, #0	; 0x0
         abde4:	e1a0000a 	mov	r0, sl
         abde8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         abdec:	e59d2030 	ldr	r2, [sp, #48]	; fField48
         abdf0:	e59d302c 	ldr	r3, [sp, #44]
         abdf4:	e28d1028 	add	r1, sp, #40	; 0x28
         abdf8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         abdfc:	e1a03004 	mov	r3, r4
         abe00:	e1a0000c 	mov	r0, ip
         abe04:	e28b2008 	add	r2, fp, #8	; 0x8
         abe08:	e8920006 	ldmia	r2, {r1, r2}
         abe0c:	e59cc000 	ldr	ip, [ip]
         abe10:	e1a0e00f 	mov	lr, pc
         abe14:	e28cff52 	add	pc, ip, #328	; 0x148
         abe18:	e28dd01c 	add	sp, sp, #28	; 0x1c
         abe1c:	e59d1014 	ldr	r1, [sp, #20]
         abe20:	e1500001 	cmp	r0, r1
         abe24:	c1a08009 	movgt	r8, r9
         abe28:	c58d0014 	strgt	r0, [sp, #20]
         abe2c:	e3300006 	teq	r0, #6	; 0x6
         abe30:	028dd004 	addeq	sp, sp, #4	; 0x4
         abe34:	0a000004 	beq	abe4c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x3a8>
         abe38:	e28dd004 	add	sp, sp, #4	; 0x4
         abe3c:	e1a0000d 	mov	r0, sp
         abe40:	eb67c3f6 	bl	1a9ce20 <TListLoop::$Next(void)>
         abe44:	e1b09000 	movs	r9, r0
         abe48:	1affffc4 	bne	abd60 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x2bc>
         abe4c:	e28dd00c 	add	sp, sp, #12	; 0xc
         abe50:	e3360000 	teq	r6, #0	; 0x0
         abe54:	0a0000d4 	beq	ac1ac <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x708>
         abe58:	e59f00fc 	ldr	r0, [pc, #fc]	; abf5c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x4b8>
         abe5c:	eb67ab28 	bl	1a96b04 <$GetPreference(RefVar const &)>
         abe60:	e3300002 	teq	r0, #2	; 0x2
         abe64:	059d0000 	ldreq	r0, [sp]
         abe68:	03300000 	teqeq	r0, #0	; 0x0
         abe6c:	0a0000ce 	beq	ac1ac <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x708>
         abe70:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         abe74:	e3300006 	teq	r0, #6	; 0x6
         abe78:	0a0000e3 	beq	ac20c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x768>
         abe7c:	e3a09000 	mov	r9, #0	; 0x0
         abe80:	e3370000 	teq	r7, #0	; 0x0
         abe84:	e52d9004 	str	r9, [sp, -#4]!	; fField4
         abe88:	0a000037 	beq	abf6c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x4c8>
         abe8c:	e1a00007 	mov	r0, r7
         abe90:	e3a01051 	mov	r1, #81	; 0x51
         abe94:	e5972000 	ldr	r2, [r7]
         abe98:	e1a0e00f 	mov	lr, pc
         abe9c:	e282f004 	add	pc, r2, #4	; 0x4
         abea0:	e3300000 	teq	r0, #0	; 0x0
         abea4:	0a000030 	beq	abf6c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x4c8>
         abea8:	e1a00007 	mov	r0, r7
         abeac:	e5971000 	ldr	r1, [r7]
         abeb0:	e1a0e00f 	mov	lr, pc
         abeb4:	e281fd05 	add	pc, r1, #320	; 0x140
         abeb8:	e1300005 	teq	r0, r5
         abebc:	1a00002a 	bne	abf6c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x4c8>
         abec0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         abec4:	e59f0094 	ldr	r0, [pc, #94]	; abf60 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x4bc>
         abec8:	eb6c58a7 	bl	1bc216c <$Clone(RefVar const &)>
         abecc:	eb6c589e 	bl	1bc214c <$AllocateRefHandle(long)>
         abed0:	e58d0008 	str	r0, [sp, #8]	; fField8
         abed4:	e1a00006 	mov	r0, r6
         abed8:	eb683fc4 	bl	1abbdf0 <TUnitPublic::$WordInfo(void)>
         abedc:	eb6c589a 	bl	1bc214c <$AllocateRefHandle(long)>
         abee0:	e1a01006 	mov	r1, r6
         abee4:	e58d0004 	str	r0, [sp, #4]	; fField4
         abee8:	e1a00007 	mov	r0, r7
         abeec:	eb68967b 	bl	1ad18e0 <$IsMidWordLetterInsertion(TParagraphView *, TUnitPublic *)>
         abef0:	e3300000 	teq	r0, #0	; 0x0
         abef4:	13a00000 	movne	r0, #0	; 0x0
         abef8:	03a00001 	moveq	r0, #1	; 0x1
         abefc:	e20070ff 	and	r7, r0, #255	; 0xff
         abf00:	e28d2004 	add	r2, sp, #4	; 0x4
         abf04:	e59f1058 	ldr	r1, [pc, #58]	; abf64 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x4c0>
         abf08:	e28d0008 	add	r0, sp, #8	; 0x8
         abf0c:	eb6c6915 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         abf10:	e3370000 	teq	r7, #0	; 0x0
         abf14:	03a00002 	moveq	r0, #2	; 0x2
         abf18:	13a0001a 	movne	r0, #26	; 0x1a
         abf1c:	eb6c588a 	bl	1bc214c <$AllocateRefHandle(long)>
         abf20:	e58d0000 	str	r0, [sp]
         abf24:	e1a0200d 	mov	r2, sp
         abf28:	e59f1038 	ldr	r1, [pc, #38]	; abf68 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x4c4>
         abf2c:	e28d0008 	add	r0, sp, #8	; 0x8
         abf30:	eb6c690c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         abf34:	e59d0000 	ldr	r0, [sp]
         abf38:	eb6c5c9f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         abf3c:	e28d0008 	add	r0, sp, #8	; 0x8
         abf40:	eb68965d 	bl	1ad18bc <$InsertItemsAtCaret(RefVar const &)>
         abf44:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         abf48:	eb6c5c9b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         abf4c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         abf50:	eb6c5c99 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         abf54:	e28dd00c 	add	sp, sp, #12	; 0xc
         abf58:	ea000091 	b	ac1a4 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x700>
         abf5c:	00684270 	rsbeq	r4, r8, r0, ror r2
         abf60:	00681a98 	streqb	r1, [r8], -#168
         abf64:	00683288 	rsbeq	r3, r8, r8, lsl #5
         abf68:	00681dc8 	rsbeq	r1, r8, r8, asr #27
         abf6c:	e24dd004 	sub	sp, sp, #4	; 0x4
         abf70:	e1370005 	teq	r7, r5
         abf74:	1a00000c 	bne	abfac <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x508>
         abf78:	e1a01005 	mov	r1, r5
         abf7c:	e1a0000d 	mov	r0, sp
         abf80:	eb688e17 	bl	1acf7e4 <TEditView::$GetCaretGlobalTopLeft(void)>
         abf84:	e1a0100d 	mov	r1, sp
         abf88:	e28d3004 	add	r3, sp, #4	; 0x4
         abf8c:	e1a00005 	mov	r0, r5
         abf90:	e3a02000 	mov	r2, #0	; 0x0
         abf94:	eb67e0a2 	bl	1aa4224 <TEditView::$TextContainingPoint(TPoint &, TRect *, long *)>
         abf98:	e1b09000 	movs	r9, r0
         abf9c:	0a000044 	beq	ac0b4 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x610>
         abfa0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         abfa4:	e3300002 	teq	r0, #2	; 0x2
         abfa8:	1a000041 	bne	ac0b4 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x610>
         abfac:	e28dd004 	add	sp, sp, #4	; 0x4
         abfb0:	e3390000 	teq	r9, #0	; 0x0
         abfb4:	0a000050 	beq	ac0fc <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x658>
         abfb8:	e59d0000 	ldr	r0, [sp]
         abfbc:	e3300002 	teq	r0, #2	; 0x2
         abfc0:	1a00004d 	bne	ac0fc <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x658>
         abfc4:	e24dd008 	sub	sp, sp, #8	; 0x8
         abfc8:	e3a00002 	mov	r0, #2	; 0x2
         abfcc:	e58d9004 	str	r9, [sp, #4]	; fField4
         abfd0:	eb67bf71 	bl	1a9bd9c <$MakeArray(long)>
         abfd4:	eb6c585c 	bl	1bc214c <$AllocateRefHandle(long)>
         abfd8:	e58d0000 	str	r0, [sp]
         abfdc:	e28f0f33 	add	r0, pc, #204	; 0xcc
         abfe0:	eb6c64ba 	bl	1bc52d0 <$MakeString(char const *)>
         abfe4:	eb6c5858 	bl	1bc214c <$AllocateRefHandle(long)>
         abfe8:	e1a07000 	mov	r7, r0
         abfec:	e5902000 	ldr	r2, [r0]
         abff0:	e59d0000 	ldr	r0, [sp]
         abff4:	e5900000 	ldr	r0, [r0]
         abff8:	e3a01000 	mov	r1, #0	; 0x0
         abffc:	eb6c68d5 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         ac000:	e1a00007 	mov	r0, r7
         ac004:	eb6c5c6c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ac008:	e1a00006 	mov	r0, r6
         ac00c:	eb683f77 	bl	1abbdf0 <TUnitPublic::$WordInfo(void)>
         ac010:	eb6c584d 	bl	1bc214c <$AllocateRefHandle(long)>
         ac014:	e1a07000 	mov	r7, r0
         ac018:	e5902000 	ldr	r2, [r0]
         ac01c:	e59d0000 	ldr	r0, [sp]
         ac020:	e5900000 	ldr	r0, [r0]
         ac024:	e3a01001 	mov	r1, #1	; 0x1
         ac028:	eb6c68ca 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         ac02c:	e1a00007 	mov	r0, r7
         ac030:	eb6c5c61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ac034:	e24dd008 	sub	sp, sp, #8	; 0x8
         ac038:	e59d000c 	ldr	r0, [sp, #12]
         ac03c:	eb67e075 	bl	1aa4218 <TParagraphView::$Text(void)>
         ac040:	eb6c5841 	bl	1bc214c <$AllocateRefHandle(long)>
         ac044:	e1a07000 	mov	r7, r0
         ac048:	e5900000 	ldr	r0, [r0]
         ac04c:	eb6c6496 	bl	1bc52ac <$Length(long)>
         ac050:	e2400002 	sub	r0, r0, #2	; 0x2
         ac054:	e1a000a0 	mov	r0, r0, lsr #1
         ac058:	e58d0004 	str	r0, [sp, #4]	; fField4
         ac05c:	e1a00007 	mov	r0, r7
         ac060:	eb6c5c55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ac064:	e3a00002 	mov	r0, #2	; 0x2
         ac068:	eb6c5837 	bl	1bc214c <$AllocateRefHandle(long)>
         ac06c:	e58d0000 	str	r0, [sp]
         ac070:	e1a0300d 	mov	r3, sp
         ac074:	e3a02001 	mov	r2, #1	; 0x1
         ac078:	e3a01000 	mov	r1, #0	; 0x0
         ac07c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         ac080:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac084:	e28d1018 	add	r1, sp, #24	; 0x18
         ac088:	e1a00009 	mov	r0, r9
         ac08c:	e3a03001 	mov	r3, #1	; 0x1
         ac090:	e3a02000 	mov	r2, #0	; 0x0
         ac094:	eb0313b8 	bl	170f7c <DoInsertItems__FP5TViewRC6RefVarUcT3lT5T3T2>
         ac098:	e5bd0010 	ldr	r0, [sp, #16]!	; fField16
         ac09c:	eb6c5c46 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ac0a0:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
         ac0a4:	eb6c5c44 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ac0a8:	e28dd008 	add	sp, sp, #8	; 0x8
         ac0ac:	ea00003c 	b	ac1a4 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x700>
         ac0b0:	0d000000 	stceq	0, cr0, [r0]
         ac0b4:	e3a00002 	mov	r0, #2	; 0x2
         ac0b8:	eb6c5823 	bl	1bc214c <$AllocateRefHandle(long)>
         ac0bc:	e58d0000 	str	r0, [sp]
         ac0c0:	e1a0300d 	mov	r3, sp
         ac0c4:	e1a0100a 	mov	r1, sl
         ac0c8:	e1a00006 	mov	r0, r6
         ac0cc:	e59b2020 	ldr	r2, [fp, #32]	; fField32
         ac0d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac0d4:	e59b3014 	ldr	r3, [fp, #20]
         ac0d8:	e92d0008 	stmdb	sp!, {r3}
         ac0dc:	e1a03004 	mov	r3, r4
         ac0e0:	e1a00005 	mov	r0, r5
         ac0e4:	e28b2008 	add	r2, fp, #8	; 0x8
         ac0e8:	e8920006 	ldmia	r2, {r1, r2}
         ac0ec:	eb688159 	bl	1acc658 <TEditView::$AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)>
         ac0f0:	e1a08000 	mov	r8, r0
         ac0f4:	e5bd0014 	ldr	r0, [sp, #20]!
         ac0f8:	ea000027 	b	ac19c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x6f8>
         ac0fc:	e24dd004 	sub	sp, sp, #4	; 0x4
         ac100:	e59d000c 	ldr	r0, [sp, #12]
         ac104:	e3300000 	teq	r0, #0	; 0x0
         ac108:	0a000012 	beq	ac158 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x6b4>
         ac10c:	e1a0c008 	mov	ip, r8
         ac110:	e1a03006 	mov	r3, r6
         ac114:	e3a01001 	mov	r1, #1	; 0x1
         ac118:	e1a0000a 	mov	r0, sl
         ac11c:	e59b2020 	ldr	r2, [fp, #32]	; fField32
         ac120:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac124:	e59d2028 	ldr	r2, [sp, #40]
         ac128:	e59d3024 	ldr	r3, [sp, #36]	; fField36
         ac12c:	e28d1020 	add	r1, sp, #32	; 0x20
         ac130:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         ac134:	e1a03004 	mov	r3, r4
         ac138:	e1a0000c 	mov	r0, ip
         ac13c:	e28b2008 	add	r2, fp, #8	; 0x8
         ac140:	e8920006 	ldmia	r2, {r1, r2}
         ac144:	e59cc000 	ldr	ip, [ip]
         ac148:	e1a0e00f 	mov	lr, pc
         ac14c:	e28cff52 	add	pc, ip, #328	; 0x148
         ac150:	e28dd01c 	add	sp, sp, #28	; 0x1c
         ac154:	ea000011 	b	ac1a0 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x6fc>
         ac158:	e3a00002 	mov	r0, #2	; 0x2
         ac15c:	eb6c57fa 	bl	1bc214c <$AllocateRefHandle(long)>
         ac160:	e58d0000 	str	r0, [sp]
         ac164:	e1a0300d 	mov	r3, sp
         ac168:	e1a0100a 	mov	r1, sl
         ac16c:	e1a00006 	mov	r0, r6
         ac170:	e59b2020 	ldr	r2, [fp, #32]	; fField32
         ac174:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac178:	e59b3014 	ldr	r3, [fp, #20]
         ac17c:	e92d0008 	stmdb	sp!, {r3}
         ac180:	e1a03004 	mov	r3, r4
         ac184:	e1a00005 	mov	r0, r5
         ac188:	e28b2008 	add	r2, fp, #8	; 0x8
         ac18c:	e8920006 	ldmia	r2, {r1, r2}
         ac190:	eb688130 	bl	1acc658 <TEditView::$AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)>
         ac194:	e1a08000 	mov	r8, r0
         ac198:	e5bd0014 	ldr	r0, [sp, #20]!
         ac19c:	eb6c5c06 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ac1a0:	e28dd004 	add	sp, sp, #4	; 0x4
         ac1a4:	e28dd004 	add	sp, sp, #4	; 0x4
         ac1a8:	ea000017 	b	ac20c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x768>
         ac1ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         ac1b0:	e3300000 	teq	r0, #0	; 0x0
         ac1b4:	0a000016 	beq	ac214 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x770>
         ac1b8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         ac1bc:	e3300006 	teq	r0, #6	; 0x6
         ac1c0:	0a000011 	beq	ac20c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x768>
         ac1c4:	e1a0c008 	mov	ip, r8
         ac1c8:	e1a03006 	mov	r3, r6
         ac1cc:	e3a01001 	mov	r1, #1	; 0x1
         ac1d0:	e1a0000a 	mov	r0, sl
         ac1d4:	e59b2020 	ldr	r2, [fp, #32]	; fField32
         ac1d8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac1dc:	e59d2020 	ldr	r2, [sp, #32]	; fField32
         ac1e0:	e59d301c 	ldr	r3, [sp, #28]	; fField28
         ac1e4:	e28d1018 	add	r1, sp, #24	; 0x18
         ac1e8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         ac1ec:	e1a03004 	mov	r3, r4
         ac1f0:	e1a0000c 	mov	r0, ip
         ac1f4:	e28b2008 	add	r2, fp, #8	; 0x8
         ac1f8:	e8920006 	ldmia	r2, {r1, r2}
         ac1fc:	e59cc000 	ldr	ip, [ip]
         ac200:	e1a0e00f 	mov	lr, pc
         ac204:	e28cff52 	add	pc, ip, #328	; 0x148
         ac208:	e28dd01c 	add	sp, sp, #28	; 0x1c
         ac20c:	e3a00001 	mov	r0, #1	; 0x1
         ac210:	e58d0014 	str	r0, [sp, #20]
         ac214:	e24dd004 	sub	sp, sp, #4	; 0x4
         ac218:	e59d0018 	ldr	r0, [sp, #24]
         ac21c:	e3300000 	teq	r0, #0	; 0x0
         ac220:	1a000012 	bne	ac270 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x7cc>
         ac224:	e3a00002 	mov	r0, #2	; 0x2
         ac228:	eb6c57c7 	bl	1bc214c <$AllocateRefHandle(long)>
         ac22c:	e58d0000 	str	r0, [sp]
         ac230:	e1a0300d 	mov	r3, sp
         ac234:	e1a0100a 	mov	r1, sl
         ac238:	e1a00006 	mov	r0, r6
         ac23c:	e59b2020 	ldr	r2, [fp, #32]	; fField32
         ac240:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac244:	e59b3014 	ldr	r3, [fp, #20]
         ac248:	e92d0008 	stmdb	sp!, {r3}
         ac24c:	e1a03004 	mov	r3, r4
         ac250:	e1a00005 	mov	r0, r5
         ac254:	e28b2008 	add	r2, fp, #8	; 0x8
         ac258:	e8920006 	ldmia	r2, {r1, r2}
         ac25c:	eb6880fd 	bl	1acc658 <TEditView::$AddNewParagraph(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *, RefVar const &)>
         ac260:	e1a08000 	mov	r8, r0
         ac264:	e5bd0014 	ldr	r0, [sp, #20]!
         ac268:	eb6c5bd3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ac26c:	ea000019 	b	ac2d8 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x834>
         ac270:	e51f031c 	ldr	r0, [pc, #fffffce4]	; abf5c <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x4b8>
         ac274:	eb67aa22 	bl	1a96b04 <$GetPreference(RefVar const &)>
         ac278:	e3300002 	teq	r0, #2	; 0x2
         ac27c:	059d0004 	ldreq	r0, [sp, #4]	; fField4
         ac280:	03300000 	teqeq	r0, #0	; 0x0
         ac284:	1a000013 	bne	ac2d8 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x834>
         ac288:	e1a00008 	mov	r0, r8
         ac28c:	e5981000 	ldr	r1, [r8]
         ac290:	e1a0e00f 	mov	lr, pc
         ac294:	e281ff51 	add	pc, r1, #324	; 0x144
         ac298:	eb67dfe4 	bl	1aa4230 <$TimeStampTextChange(TView *)>
         ac29c:	e3360000 	teq	r6, #0	; 0x0
         ac2a0:	159d001c 	ldrne	r0, [sp, #28]	; fField28
         ac2a4:	15d00000 	ldrneb	r0, [r0]
         ac2a8:	13300000 	teqne	r0, #0	; 0x0
         ac2ac:	0a000009 	beq	ac2d8 <TEditView::HandleWord(unsigned short *, unsigned long, TRect &, TRect &, TUnitPublic *, RefVar const &, long *)+0x834>
         ac2b0:	e1a00008 	mov	r0, r8
         ac2b4:	e5981000 	ldr	r1, [r8]
         ac2b8:	e1a0e00f 	mov	lr, pc
         ac2bc:	e281ff51 	add	pc, r1, #324	; 0x144
         ac2c0:	e59b2020 	ldr	r2, [fp, #32]	; fField32
         ac2c4:	e5921000 	ldr	r1, [r2]
         ac2c8:	e59b200c 	ldr	r2, [fp, #12]
         ac2cc:	e0812002 	add	r2, r1, r2
         ac2d0:	e1a03006 	mov	r3, r6
         ac2d4:	eb67f05f 	bl	1aa8458 <$AddWordInfo__FP5TViewlT2P11TUnitPublic>
         ac2d8:	e1a00008 	mov	r0, r8
         ac2dc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

