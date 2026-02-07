#include "include/TXGraphicsRun.h"

/**
 * Symbol: TXGraphicsRun::__ct(void)
 * Address: 0023ac54
 */
TXGraphicsRun::TXGraphicsRun(void) {
    /*
        23ac54:	e1a0c00d 	mov	ip, sp
        23ac58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23ac5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ac60:	e1b04000 	movs	r4, r0
        23ac64:	1a000003 	bne	23ac78 <TXGraphicsRun::__ct(void)+0x24>
        23ac68:	e3a00010 	mov	r0, #16	; 0x10
        23ac6c:	eb664eb1 	bl	1bce738 <$__nw(unsigned int)>
        23ac70:	e1b04000 	movs	r4, r0
        23ac74:	0a000006 	beq	23ac94 <TXGraphicsRun::__ct(void)+0x40>
        23ac78:	e1a00004 	mov	r0, r4
        23ac7c:	eb657c08 	bl	1b99ca4 <TXRun::$__ct(void)>
        23ac80:	e59f0014 	ldr	r0, [pc, #14]	; 23ac9c <TXGraphicsRun::__ct(void)+0x48>
        23ac84:	e5840000 	str	r0, [r4]
        23ac88:	e3a00000 	mov	r0, #0	; 0x0
        23ac8c:	e5840008 	str	r0, [r4, #8]	; fField8
        23ac90:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        23ac94:	e1a00004 	mov	r0, r4
        23ac98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        23ac9c:	0001d204 	andeq	sp, r1, r4, lsl #4
    */
}

/**
 * Symbol: TXGraphicsRun::Reference(void)
 * Address: 0023aca0
 */
TXGraphicsRun::Reference(void) {
    /*
        23aca0:	e1a0c00d 	mov	ip, sp
        23aca4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23aca8:	e24cb004 	sub	fp, ip, #4	; 0x4
        23acac:	e1a04000 	mov	r4, r0
        23acb0:	e5901000 	ldr	r1, [r0]
        23acb4:	e1a0e00f 	mov	lr, pc
        23acb8:	e281f00c 	add	pc, r1, #12	; 0xc
        23acbc:	e1b05000 	movs	r5, r0
        23acc0:	0a000004 	beq	23acd8 <TXGraphicsRun::Reference(void)+0x38>
        23acc4:	e1a01004 	mov	r1, r4
        23acc8:	e1a00005 	mov	r0, r5
        23accc:	e5952000 	ldr	r2, [r5]
        23acd0:	e1a0e00f 	mov	lr, pc
        23acd4:	e282f028 	add	pc, r2, #40	; 0x28
        23acd8:	e1a00005 	mov	r0, r5
        23acdc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXGraphicsRun::PixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *)
 * Address: 0023ace0
 */
TXGraphicsRun::PixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *) {
    /*
        23ace0:	e1a00002 	mov	r0, r2
        23ace4:	e1a02003 	mov	r2, r3
        23ace8:	e1a03000 	mov	r3, r0
        23acec:	e1a00001 	mov	r0, r1
        23acf0:	e1a01003 	mov	r1, r3
        23acf4:	ea657be8 	b	1b99c9c <$TXIndivisiblePixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *)>
    */
}

/**
 * Symbol: TXGraphicsRun::CharToPixel(TXLineRunDisplayInfo const &, long)
 * Address: 0023acf8
 */
TXGraphicsRun::CharToPixel(TXLineRunDisplayInfo const &, long) {
    /*
        23acf8:	e1a00001 	mov	r0, r1
        23acfc:	e1a01002 	mov	r1, r2
        23ad00:	ea657be6 	b	1b99ca0 <$TXIndivisibleCharToPixel(TXLineRunDisplayInfo const &, long)>
    */
}

/**
 * Symbol: TXGraphicsRun::SetHilite(char, TXRunPositionInfo const &, unsigned char)
 * Address: 0023ad04
 */
TXGraphicsRun::SetHilite(char, TXRunPositionInfo const &, unsigned char) {
    /*
        23ad04:	e1a0c00d 	mov	ip, sp
        23ad08:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23ad0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ad10:	e1a04000 	mov	r4, r0
        23ad14:	e1a05002 	mov	r5, r2
        23ad18:	e20160ff 	and	r6, r1, #255	; 0xff
        23ad1c:	e31300ff 	tst	r3, #255	; 0xff
        23ad20:	05c4600c 	streqb	r6, [r4, #12]	; fField12
        23ad24:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        23ad28:	e1a01005 	mov	r1, r5
        23ad2c:	e1a00004 	mov	r0, r4
        23ad30:	e5942000 	ldr	r2, [r4]
        23ad34:	e1a0e00f 	mov	lr, pc
        23ad38:	e282f080 	add	pc, r2, #128	; 0x80
        23ad3c:	e5c4600c 	strb	r6, [r4, #12]	; fField12
        23ad40:	e1a01005 	mov	r1, r5
        23ad44:	e1a00004 	mov	r0, r4
        23ad48:	e5942000 	ldr	r2, [r4]
        23ad4c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        23ad50:	e282f080 	add	pc, r2, #128	; 0x80
    */
}

/**
 * Symbol: TXGraphicsRun::MeasureWidth(TXLineRunDisplayInfo const &)
 * Address: 0023ad54
 */
TXGraphicsRun::MeasureWidth(TXLineRunDisplayInfo const &) {
    /*
        23ad54:	e1a0c00d 	mov	ip, sp
        23ad58:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23ad5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ad60:	e24dd008 	sub	sp, sp, #8	; 0x8
        23ad64:	e1a0200d 	mov	r2, sp
        23ad68:	e28d1004 	add	r1, sp, #4	; 0x4
        23ad6c:	eb6556a3 	bl	1b90800 <TXGraphicsRun::$GetTotalDimensions(int *, int *)>
        23ad70:	e49d0008 	ldr	r0, [sp], #8	; fField8
        23ad74:	e1a00800 	mov	r0, r0, lsl #16
        23ad78:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXGraphicsRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)
 * Address: 0023ad7c
 */
TXGraphicsRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *) {
    /*
        23ad7c:	e1a0c00d 	mov	ip, sp
        23ad80:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        23ad84:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ad88:	e1a04000 	mov	r4, r0
        23ad8c:	e1a05002 	mov	r5, r2
        23ad90:	e28b7008 	add	r7, fp, #8	; 0x8
        23ad94:	e8970081 	ldmia	r7, {r0, r7}
        23ad98:	e20090ff 	and	r9, r0, #255	; 0xff
        23ad9c:	e3a08000 	mov	r8, #0	; 0x0
        23ada0:	e59b6004 	ldr	r6, [fp, #4]
        23ada4:	e5848008 	str	r8, [r4, #8]	; fField8
        23ada8:	e24dd008 	sub	sp, sp, #8	; 0x8
        23adac:	e1a0200d 	mov	r2, sp
        23adb0:	e28d1004 	add	r1, sp, #4	; 0x4
        23adb4:	e1a00004 	mov	r0, r4
        23adb8:	eb655690 	bl	1b90800 <TXGraphicsRun::$GetTotalDimensions(int *, int *)>
        23adbc:	e5961000 	ldr	r1, [r6]
        23adc0:	e59d0000 	ldr	r0, [sp]
        23adc4:	e0410800 	sub	r0, r1, r0, lsl #16
        23adc8:	e5860000 	str	r0, [r6]
        23adcc:	e5878000 	str	r8, [r7]
        23add0:	e5960000 	ldr	r0, [r6]
        23add4:	e3500000 	cmp	r0, #0	; 0x0
        23add8:	aa000008 	bge	23ae00 <TXGraphicsRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x84>
        23addc:	e3390000 	teq	r9, #0	; 0x0
        23ade0:	03a00000 	moveq	r0, #0	; 0x0
        23ade4:	0a00000a 	beq	23ae14 <TXGraphicsRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x98>
        23ade8:	e3a00001 	mov	r0, #1	; 0x1
        23adec:	e5875000 	str	r5, [r7]
        23adf0:	e5961000 	ldr	r1, [r6]
        23adf4:	e1a01841 	mov	r1, r1, asr #16
        23adf8:	e5a41008 	str	r1, [r4, #8]!	; fField8
        23adfc:	ea000004 	b	23ae14 <TXGraphicsRun::LineBreak(unsigned short const *, long, long, long *, unsigned char, long *)+0x98>
        23ae00:	e5875000 	str	r5, [r7]
        23ae04:	e5960000 	ldr	r0, [r6]
        23ae08:	e3300000 	teq	r0, #0	; 0x0
        23ae0c:	13a00002 	movne	r0, #2	; 0x2
        23ae10:	e20000ff 	and	r0, r0, #255	; 0xff
        23ae14:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXGraphicsRun::DrawHilite(TXRunPositionInfo const &)
 * Address: 0023ae18
 */
TXGraphicsRun::DrawHilite(TXRunPositionInfo const &) {
    /*
        23ae18:	e1a0c00d 	mov	ip, sp
        23ae1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23ae20:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ae24:	e1a04000 	mov	r4, r0
        23ae28:	e5d0000c 	ldrb	r0, [r0, #12]	; fField12
        23ae2c:	e3300000 	teq	r0, #0	; 0x0
        23ae30:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        23ae34:	e24dd008 	sub	sp, sp, #8	; 0x8
        23ae38:	e1a0200d 	mov	r2, sp
        23ae3c:	e1a00004 	mov	r0, r4
        23ae40:	eb655670 	bl	1b90808 <TXGraphicsRun::$GetRunRect(TXRunPositionInfo const &, Rect *)>
        23ae44:	e1a00004 	mov	r0, r4
        23ae48:	e5941000 	ldr	r1, [r4]
        23ae4c:	e1a0e00f 	mov	lr, pc
        23ae50:	e281f088 	add	pc, r1, #136	; 0x88
        23ae54:	e2602000 	rsb	r2, r0, #0	; 0x0
        23ae58:	e1a01002 	mov	r1, r2
        23ae5c:	e1a0000d 	mov	r0, sp
        23ae60:	eb645676 	bl	1b50840 <$InsetRect__FP4RectlT2>
        23ae64:	e24dd004 	sub	sp, sp, #4	; 0x4
        23ae68:	e1a0000d 	mov	r0, sp
        23ae6c:	eb66d24c 	bl	1bef7a4 <$GetPort(GrafPort **)>
        23ae70:	e59d0000 	ldr	r0, [sp]
        23ae74:	e5900048 	ldr	r0, [r0, #72]
        23ae78:	e3300000 	teq	r0, #0	; 0x0
        23ae7c:	0a000002 	beq	23ae8c <TXGraphicsRun::DrawHilite(TXRunPositionInfo const &)+0x74>
        23ae80:	e28d0004 	add	r0, sp, #4	; 0x4
        23ae84:	eb645244 	bl	1b4f79c <$FrameRect(Rect *)>
        23ae88:	ea000010 	b	23aed0 <TXGraphicsRun::DrawHilite(TXRunPositionInfo const &)+0xb8>
        23ae8c:	e24dd010 	sub	sp, sp, #16	; 0x10
        23ae90:	e1a0000d 	mov	r0, sp
        23ae94:	eb64524d 	bl	1b4f7d0 <$GetPenState(PenState *)>
        23ae98:	eb645ea1 	bl	1b52924 <$PenNormal(void)>
        23ae9c:	e3a0000a 	mov	r0, #10	; 0xa
        23aea0:	eb645e9e 	bl	1b52920 <$PenMode(long)>
        23aea4:	e5d4000c 	ldrb	r0, [r4, #12]	; fField12
        23aea8:	e3300002 	teq	r0, #2	; 0x2
        23aeac:	13a00004 	movne	r0, #4	; 0x4
        23aeb0:	03a00002 	moveq	r0, #2	; 0x2
        23aeb4:	eb645249 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        23aeb8:	eb6462cc 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        23aebc:	e28d0014 	add	r0, sp, #20	; 0x14
        23aec0:	eb645235 	bl	1b4f79c <$FrameRect(Rect *)>
        23aec4:	e1a0000d 	mov	r0, sp
        23aec8:	eb6462ca 	bl	1b539f8 <$SetPenState(PenState *)>
        23aecc:	e28dd010 	add	sp, sp, #16	; 0x10
        23aed0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXGraphicsRun::GetObjFlags( const(void))
 * Address: 0023aed4
 */
TXGraphicsRun::GetObjFlags( const(void)) {
    /*
        23aed4:	e1a0c00d 	mov	ip, sp
        23aed8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23aedc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23aee0:	eb652d18 	bl	1b86348 <TXAttrObject::$GetObjFlags( const(void))>
        23aee4:	e3800007 	orr	r0, r0, #7	; 0x7
        23aee8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXGraphicsRun::IsTextRun( const(void))
 * Address: 0023aeec
 */
TXGraphicsRun::IsTextRun( const(void)) {
    /*
        23aeec:	e3a00000 	mov	r0, #0	; 0x0
        23aef0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXGraphicsRun::GetHiliteInset(void)
 * Address: 0023aef4
 */
TXGraphicsRun::GetHiliteInset(void) {
    /*
        23aef4:	e1a0c00d 	mov	ip, sp
        23aef8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23aefc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23af00:	e5901000 	ldr	r1, [r0]
        23af04:	e1a0e00f 	mov	lr, pc
        23af08:	e281f01c 	add	pc, r1, #28	; 0x1c
        23af0c:	e2100001 	ands	r0, r0, #1	; 0x1
        23af10:	13a00002 	movne	r0, #2	; 0x2
        23af14:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXGraphicsRun::GetTotalDimensions(int *, int *)
 * Address: 0023af18
 */
TXGraphicsRun::GetTotalDimensions(int *, int *) {
    /*
        23af18:	e1a0c00d 	mov	ip, sp
        23af1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23af20:	e24cb004 	sub	fp, ip, #4	; 0x4
        23af24:	e1a06000 	mov	r6, r0
        23af28:	e1a05001 	mov	r5, r1
        23af2c:	e1a04002 	mov	r4, r2
        23af30:	e5903000 	ldr	r3, [r0]
        23af34:	e1a0e00f 	mov	lr, pc
        23af38:	e283f084 	add	pc, r3, #132	; 0x84
        23af3c:	e5960008 	ldr	r0, [r6, #8]	; fField8
        23af40:	e5941000 	ldr	r1, [r4]
        23af44:	e0800001 	add	r0, r0, r1
        23af48:	e5840000 	str	r0, [r4]
        23af4c:	e1a00006 	mov	r0, r6
        23af50:	e5961000 	ldr	r1, [r6]
        23af54:	e1a0e00f 	mov	lr, pc
        23af58:	e281f088 	add	pc, r1, #136	; 0x88
        23af5c:	e5951000 	ldr	r1, [r5]
        23af60:	e0811080 	add	r1, r1, r0, lsl #1
        23af64:	e5851000 	str	r1, [r5]
        23af68:	e5941000 	ldr	r1, [r4]
        23af6c:	e0810080 	add	r0, r1, r0, lsl #1
        23af70:	e5840000 	str	r0, [r4]
        23af74:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXGraphicsRun::GetHeightInfo(int *, int *, int *)
 * Address: 0023af78
 */
TXGraphicsRun::GetHeightInfo(int *, int *, int *) {
    /*
        23af78:	e1a0c00d 	mov	ip, sp
        23af7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23af80:	e24cb004 	sub	fp, ip, #4	; 0x4
        23af84:	e1a06001 	mov	r6, r1
        23af88:	e1a05002 	mov	r5, r2
        23af8c:	e1a04003 	mov	r4, r3
        23af90:	e24dd008 	sub	sp, sp, #8	; 0x8
        23af94:	e1a0200d 	mov	r2, sp
        23af98:	e28d1004 	add	r1, sp, #4	; 0x4
        23af9c:	eb655617 	bl	1b90800 <TXGraphicsRun::$GetTotalDimensions(int *, int *)>
        23afa0:	e59d0004 	ldr	r0, [sp, #4]
        23afa4:	e5860000 	str	r0, [r6]
        23afa8:	e3a00000 	mov	r0, #0	; 0x0
        23afac:	e5850000 	str	r0, [r5]
        23afb0:	e5840000 	str	r0, [r4]
        23afb4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXGraphicsRun::GetRunRect(TXRunPositionInfo const &, Rect *)
 * Address: 0023afb8
 */
TXGraphicsRun::GetRunRect(TXRunPositionInfo const &, Rect *) {
    /*
        23afb8:	e5913000 	ldr	r3, [r1]
        23afbc:	e5c23001 	strb	r3, [r2, #1]
        23afc0:	e1a03443 	mov	r3, r3, asr #8
        23afc4:	e5c23000 	strb	r3, [r2]
        23afc8:	e591c004 	ldr	ip, [r1, #4]
        23afcc:	e5923000 	ldr	r3, [r2]
        23afd0:	e1a03823 	mov	r3, r3, lsr #16
        23afd4:	e08c3003 	add	r3, ip, r3
        23afd8:	e5c23005 	strb	r3, [r2, #5]
        23afdc:	e1a03443 	mov	r3, r3, asr #8
        23afe0:	e5c23004 	strb	r3, [r2, #4]
        23afe4:	e5913008 	ldr	r3, [r1, #8]	; fField8
        23afe8:	e1a03843 	mov	r3, r3, asr #16
        23afec:	e5c23003 	strb	r3, [r2, #3]
        23aff0:	e1a03443 	mov	r3, r3, asr #8
        23aff4:	e5c23002 	strb	r3, [r2, #2]
        23aff8:	e5923002 	ldr	r3, [r2, #2]
        23affc:	e1a03823 	mov	r3, r3, lsr #16
        23b000:	e591100c 	ldr	r1, [r1, #12]	; fField12
        23b004:	e0831841 	add	r1, r3, r1, asr #16
        23b008:	e5c21007 	strb	r1, [r2, #7]
        23b00c:	e1a01441 	mov	r1, r1, asr #8
        23b010:	e5c21006 	strb	r1, [r2, #6]
        23b014:	e1a01002 	mov	r1, r2
        23b018:	ea6555fb 	b	1b9080c <TXGraphicsRun::$AdjustRunRect(Rect *)>
    */
}

/**
 * Symbol: TXGraphicsRun::AdjustRunRect(Rect *)
 * Address: 0023b01c
 */
TXGraphicsRun::AdjustRunRect(Rect *) {
    /*
        23b01c:	e1a0c00d 	mov	ip, sp
        23b020:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23b024:	e24cb004 	sub	fp, ip, #4	; 0x4
        23b028:	e1a05000 	mov	r5, r0
        23b02c:	e1a04001 	mov	r4, r1
        23b030:	e24dd008 	sub	sp, sp, #8	; 0x8
        23b034:	e1a0200d 	mov	r2, sp
        23b038:	e28d1004 	add	r1, sp, #4	; 0x4
        23b03c:	eb6555ef 	bl	1b90800 <TXGraphicsRun::$GetTotalDimensions(int *, int *)>
        23b040:	e5941004 	ldr	r1, [r4, #4]
        23b044:	e5940000 	ldr	r0, [r4]
        23b048:	e1a00840 	mov	r0, r0, asr #16
        23b04c:	e0601841 	rsb	r1, r0, r1, asr #16
        23b050:	e59d2004 	ldr	r2, [sp, #4]
        23b054:	e0411002 	sub	r1, r1, r2
        23b058:	e0800001 	add	r0, r0, r1
        23b05c:	e5c40001 	strb	r0, [r4, #1]
        23b060:	e1a00440 	mov	r0, r0, asr #8
        23b064:	e5c40000 	strb	r0, [r4]
        23b068:	e5940000 	ldr	r0, [r4]
        23b06c:	e1a00820 	mov	r0, r0, lsr #16
        23b070:	e59d1004 	ldr	r1, [sp, #4]
        23b074:	e0800001 	add	r0, r0, r1
        23b078:	e5c40005 	strb	r0, [r4, #5]
        23b07c:	e1a00440 	mov	r0, r0, asr #8
        23b080:	e5c40004 	strb	r0, [r4, #4]
        23b084:	e1a00005 	mov	r0, r5
        23b088:	e5951000 	ldr	r1, [r5]
        23b08c:	e1a0e00f 	mov	lr, pc
        23b090:	e281f088 	add	pc, r1, #136	; 0x88
        23b094:	e1a01000 	mov	r1, r0
        23b098:	e1a00004 	mov	r0, r4
        23b09c:	e1a02001 	mov	r2, r1
        23b0a0:	eb6455e6 	bl	1b50840 <$InsetRect__FP4RectlT2>
        23b0a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXGraphicsRun::Draw(TXLineRunDisplayInfo const &, long, Rect const &, int)
 * Address: 0023b0a8
 */
TXGraphicsRun::Draw(TXLineRunDisplayInfo const &, long, Rect const &, int) {
    /*
        23b0a8:	e1a0c00d 	mov	ip, sp
        23b0ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23b0b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23b0b4:	e1a04000 	mov	r4, r0
        23b0b8:	e1a00003 	mov	r0, r3
        23b0bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        23b0c0:	e8905000 	ldmia	r0, {ip, lr}
        23b0c4:	e88d5000 	stmia	sp, {ip, lr}
        23b0c8:	e2820902 	add	r0, r2, #32768	; 0x8000
        23b0cc:	e1a00840 	mov	r0, r0, asr #16
        23b0d0:	e5cd0003 	strb	r0, [sp, #3]
        23b0d4:	e1a00440 	mov	r0, r0, asr #8
        23b0d8:	e5cd0002 	strb	r0, [sp, #2]
        23b0dc:	e2811008 	add	r1, r1, #8	; 0x8
        23b0e0:	e8910003 	ldmia	r1, {r0, r1}
        23b0e4:	e0800001 	add	r0, r0, r1
        23b0e8:	e2800902 	add	r0, r0, #32768	; 0x8000
        23b0ec:	e59d1000 	ldr	r1, [sp]
        23b0f0:	e0810840 	add	r0, r1, r0, asr #16
        23b0f4:	e5cd0007 	strb	r0, [sp, #7]
        23b0f8:	e1a00440 	mov	r0, r0, asr #8
        23b0fc:	e5cd0006 	strb	r0, [sp, #6]
        23b100:	e1a0100d 	mov	r1, sp
        23b104:	e1a00004 	mov	r0, r4
        23b108:	eb6555bf 	bl	1b9080c <TXGraphicsRun::$AdjustRunRect(Rect *)>
        23b10c:	e1a0100d 	mov	r1, sp
        23b110:	e1a00004 	mov	r0, r4
        23b114:	e5942000 	ldr	r2, [r4]
        23b118:	e1a0e00f 	mov	lr, pc
        23b11c:	e282f08c 	add	pc, r2, #140	; 0x8c
        23b120:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

