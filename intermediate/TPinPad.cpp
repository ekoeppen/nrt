#include "include/TPinPad.h"

/**
 * Symbol: Sizeof__7TPinPadSFv
 * Address: 00189f70
 */
void TPinPad::Sizeof() {
    /*
        189f70:	e3a000b8 	mov	r0, #184	; 0xb8
        189f74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPinPad::Init(Rect *)
 * Address: 00189f78
 */
TPinPad::Init(Rect *) {
    /*
        189f78:	e1a0c00d 	mov	ip, sp
        189f7c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        189f80:	e24cb004 	sub	fp, ip, #4	; 0x4
        189f84:	e1a04000 	mov	r4, r0
        189f88:	e1a05001 	mov	r5, r1
        189f8c:	e5910002 	ldr	r0, [r1, #2]
        189f90:	e1a00840 	mov	r0, r0, asr #16
        189f94:	e5911006 	ldr	r1, [r1, #6]
        189f98:	e1a01841 	mov	r1, r1, asr #16
        189f9c:	e1500001 	cmp	r0, r1
        189fa0:	da000005 	ble	189fbc <TPinPad::Init(Rect *)+0x44>
        189fa4:	e5c51003 	strb	r1, [r5, #3]
        189fa8:	e1a01441 	mov	r1, r1, asr #8
        189fac:	e5c51002 	strb	r1, [r5, #2]
        189fb0:	e5c50007 	strb	r0, [r5, #7]
        189fb4:	e1a00440 	mov	r0, r0, asr #8
        189fb8:	e5c50006 	strb	r0, [r5, #6]
        189fbc:	e5950004 	ldr	r0, [r5, #4]
        189fc0:	e1a00840 	mov	r0, r0, asr #16
        189fc4:	e5951000 	ldr	r1, [r5]
        189fc8:	e1a01841 	mov	r1, r1, asr #16
        189fcc:	e1500001 	cmp	r0, r1
        189fd0:	aa000005 	bge	189fec <TPinPad::Init(Rect *)+0x74>
        189fd4:	e5c50001 	strb	r0, [r5, #1]
        189fd8:	e1a00440 	mov	r0, r0, asr #8
        189fdc:	e5c50000 	strb	r0, [r5]
        189fe0:	e5c51005 	strb	r1, [r5, #5]
        189fe4:	e1a00441 	mov	r0, r1, asr #8
        189fe8:	e5c50004 	strb	r0, [r5, #4]
        189fec:	e59f30e8 	ldr	r3, [pc, #e8]	; 18a0dc <TPinPad::Init(Rect *)+0x164>
        189ff0:	e1a02005 	mov	r2, r5
        189ff4:	e1a00005 	mov	r0, r5
        189ff8:	e3a01002 	mov	r1, #2	; 0x2
        189ffc:	eb672662 	bl	1b5398c <$RSect(Rect *, long, long,...)>
        18a000:	e5953004 	ldr	r3, [r5, #4]
        18a004:	e1a03843 	mov	r3, r3, asr #16
        18a008:	e92d0008 	stmdb	sp!, {r3}
        18a00c:	e5953006 	ldr	r3, [r5, #6]
        18a010:	e1a03843 	mov	r3, r3, asr #16
        18a014:	e5951002 	ldr	r1, [r5, #2]
        18a018:	e1a01841 	mov	r1, r1, asr #16
        18a01c:	e2840010 	add	r0, r4, #16	; 0x10
        18a020:	e1a06000 	mov	r6, r0
        18a024:	e5952000 	ldr	r2, [r5]
        18a028:	e1a02842 	mov	r2, r2, asr #16
        18a02c:	eb672a76 	bl	1b54a0c <$SetRect__FP4RectlN32>
        18a030:	e28dd004 	add	sp, sp, #4	; 0x4
        18a034:	e1a00004 	mov	r0, r4
        18a038:	eb673f23 	bl	1b59ccc <TPinPad::$BeginPolling(void)>
        18a03c:	e1a09000 	mov	r9, r0
        18a040:	e3a00001 	mov	r0, #1	; 0x1
        18a044:	eb66fd25 	bl	1b494e0 <$BlockLCDActivity(unsigned char)>
        18a048:	e1a01006 	mov	r1, r6
        18a04c:	e3a00000 	mov	r0, #0	; 0x0
        18a050:	eb670970 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        18a054:	eb6715d8 	bl	1b4f7bc <$GetCurrentPort(void)>
        18a058:	e584006c 	str	r0, [r4, #108]	; fField108
        18a05c:	e5840070 	str	r0, [r4, #112]	; fField112
        18a060:	e284507c 	add	r5, r4, #124	; 0x7c
        18a064:	e1b08005 	movs	r8, r5
        18a068:	e3a07000 	mov	r7, #0	; 0x0
        18a06c:	0a000003 	beq	18a080 <TPinPad::Init(Rect *)+0x108>
        18a070:	e3a00002 	mov	r0, #2	; 0x2
        18a074:	eb68e034 	bl	1bc214c <$AllocateRefHandle(long)>
        18a078:	e5880000 	str	r0, [r8]
        18a07c:	e5a07004 	str	r7, [r0, #4]!
        18a080:	e1a01005 	mov	r1, r5
        18a084:	e59f0054 	ldr	r0, [pc, #54]	; 18a0e0 <TPinPad::Init(Rect *)+0x168>
        18a088:	eb68fd15 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        18a08c:	e59f0050 	ldr	r0, [pc, #50]	; 18a0e4 <TPinPad::Init(Rect *)+0x16c>
        18a090:	e5900000 	ldr	r0, [r0]
        18a094:	e5901000 	ldr	r1, [r0]
        18a098:	e5950000 	ldr	r0, [r5]
        18a09c:	e5900000 	ldr	r0, [r0]
        18a0a0:	eb68e86e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        18a0a4:	e5840078 	str	r0, [r4, #120]	; fField120
        18a0a8:	e58470ac 	str	r7, [r4, #172]	; fField172
        18a0ac:	e58470a0 	str	r7, [r4, #160]	; fField160
        18a0b0:	e584709c 	str	r7, [r4, #156]	; fField156
        18a0b4:	e58470a4 	str	r7, [r4, #164]	; fField164
        18a0b8:	e58470a8 	str	r7, [r4, #168]	; fField168
        18a0bc:	e58470b0 	str	r7, [r4, #176]	; fField176
        18a0c0:	e58470b4 	str	r7, [r4, #180]	; fField180
        18a0c4:	e2840018 	add	r0, r4, #24	; 0x18
        18a0c8:	eb6995b6 	bl	1bef7a8 <$OpenPort(GrafPort *)>
        18a0cc:	e1a00006 	mov	r0, r6
        18a0d0:	eb670d70 	bl	1b4d698 <$ClipRect(Rect *)>
        18a0d4:	e1a00009 	mov	r0, r9
        18a0d8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        18a0dc:	0c107d94 	ldceq	13, cr7, [r0], -#592
        18a0e0:	00681538 	rsbeq	r1, r8, r8, lsr r5
        18a0e4:	00682120 	rsbeq	r2, r8, r0, lsr #2
    */
}

/**
 * Symbol: TPinPad::Delete(void)
 * Address: 0018a0e8
 */
TPinPad::Delete(void) {
    /*
        18a0e8:	e1a0c00d 	mov	ip, sp
        18a0ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18a0f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a0f4:	e1a04000 	mov	r4, r0
        18a0f8:	eb673ef5 	bl	1b59cd4 <TPinPad::$EndPolling(void)>
        18a0fc:	e2840010 	add	r0, r4, #16	; 0x10
        18a100:	e1a05000 	mov	r5, r0
        18a104:	eb671190 	bl	1b4e74c <$EraseRect(Rect *)>
        18a108:	e1a02005 	mov	r2, r5
        18a10c:	e1a01005 	mov	r1, r5
        18a110:	e3a03000 	mov	r3, #0	; 0x0
        18a114:	e5940070 	ldr	r0, [r4, #112]	; fField112
        18a118:	eb67094d 	bl	1b4c654 <$BlitToScreens__FP8PixelMapP4RectT2l>
        18a11c:	e594006c 	ldr	r0, [r4, #108]	; fField108
        18a120:	eb6995a1 	bl	1bef7ac <$SetPort(GrafPort *)>
        18a124:	e2840018 	add	r0, r4, #24	; 0x18
        18a128:	eb670d5d 	bl	1b4d6a4 <$ClosePort(GrafPort *)>
        18a12c:	e3a00000 	mov	r0, #0	; 0x0
        18a130:	eb66fcea 	bl	1b494e0 <$BlockLCDActivity(unsigned char)>
        18a134:	e1a01005 	mov	r1, r5
        18a138:	e3a00000 	mov	r0, #0	; 0x0
        18a13c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        18a140:	ea670936 	b	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
    */
}

/**
 * Symbol: TPinPad::DrawPict(Picture **, Rect *)
 * Address: 0018a144
 */
TPinPad::DrawPict(Picture **, Rect *) {
    /*
        18a144:	e1a0c00d 	mov	ip, sp
        18a148:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18a14c:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a150:	e1a05000 	mov	r5, r0
        18a154:	e1a00001 	mov	r0, r1
        18a158:	e1a04002 	mov	r4, r2
        18a15c:	e1a01002 	mov	r1, r2
        18a160:	e3a02000 	mov	r2, #0	; 0x0
        18a164:	eb671165 	bl	1b4e700 <$DrawPicture(Picture **, Rect *, unsigned char)>
        18a168:	e5950070 	ldr	r0, [r5, #112]	; fField112
        18a16c:	e2803008 	add	r3, r0, #8	; 0x8
        18a170:	e1a02004 	mov	r2, r4
        18a174:	e1a00004 	mov	r0, r4
        18a178:	e3a01002 	mov	r1, #2	; 0x2
        18a17c:	eb672602 	bl	1b5398c <$RSect(Rect *, long, long,...)>
        18a180:	e3300000 	teq	r0, #0	; 0x0
        18a184:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        18a188:	e1a02004 	mov	r2, r4
        18a18c:	e1a01004 	mov	r1, r4
        18a190:	e3a03000 	mov	r3, #0	; 0x0
        18a194:	e5b50070 	ldr	r0, [r5, #112]!	; fField112
        18a198:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        18a19c:	ea67092c 	b	1b4c654 <$BlitToScreens__FP8PixelMapP4RectT2l>
    */
}

/**
 * Symbol: TPinPad::DefineStyle(RefVar const &, long)
 * Address: 0018a1a0
 */
TPinPad::DefineStyle(RefVar const &, long) {
    /*
        18a1a0:	e1a0c00d 	mov	ip, sp
        18a1a4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        18a1a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a1ac:	e1a04000 	mov	r4, r0
        18a1b0:	e1a05001 	mov	r5, r1
        18a1b4:	e1a06002 	mov	r6, r2
        18a1b8:	e280107c 	add	r1, r0, #124	; 0x7c
        18a1bc:	e1a07001 	mov	r7, r1
        18a1c0:	e1a00005 	mov	r0, r5
        18a1c4:	eb68fcc6 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        18a1c8:	e58460ac 	str	r6, [r4, #172]	; fField172
        18a1cc:	e5950000 	ldr	r0, [r5]
        18a1d0:	e5900000 	ldr	r0, [r0]
        18a1d4:	e2001003 	and	r1, r0, #3	; 0x3
        18a1d8:	e3510000 	cmp	r1, #0	; 0x0
        18a1dc:	1a000008 	bne	18a204 <TPinPad::DefineStyle(RefVar const &, long)+0x64>
        18a1e0:	01a00140 	moveq	r0, r0, asr #2
        18a1e4:	0a000000 	beq	18a1ec <TPinPad::DefineStyle(RefVar const &, long)+0x4c>
        18a1e8:	eb68dfcb 	bl	1bc211c <$_RINTError(long)>
        18a1ec:	e3c00103 	bic	r0, r0, #-1073741824	; 0xc0000000
        18a1f0:	e3c0080f 	bic	r0, r0, #983040	; 0xf0000
        18a1f4:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        18a1f8:	e3c000ff 	bic	r0, r0, #255	; 0xff
        18a1fc:	e1a00a40 	mov	r0, r0, asr #20
        18a200:	ea000007 	b	18a224 <TPinPad::DefineStyle(RefVar const &, long)+0x84>
        18a204:	e59f105c 	ldr	r1, [pc, #5c]	; 18a268 <TPinPad::DefineStyle(RefVar const &, long)+0xc8>
        18a208:	e5911000 	ldr	r1, [r1]
        18a20c:	e5911000 	ldr	r1, [r1]
        18a210:	eb68e812 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        18a214:	e3100003 	tst	r0, #3	; 0x3
        18a218:	01a00140 	moveq	r0, r0, asr #2
        18a21c:	0a000000 	beq	18a224 <TPinPad::DefineStyle(RefVar const &, long)+0x84>
        18a220:	eb68dfbd 	bl	1bc211c <$_RINTError(long)>
        18a224:	e2000003 	and	r0, r0, #3	; 0x3
        18a228:	e3300001 	teq	r0, #1	; 0x1
        18a22c:	059f0038 	ldreq	r0, [pc, #38]	; 18a26c <TPinPad::DefineStyle(RefVar const &, long)+0xcc>
        18a230:	0a000005 	beq	18a24c <TPinPad::DefineStyle(RefVar const &, long)+0xac>
        18a234:	e3300002 	teq	r0, #2	; 0x2
        18a238:	059f0030 	ldreq	r0, [pc, #30]	; 18a270 <TPinPad::DefineStyle(RefVar const &, long)+0xd0>
        18a23c:	0a000002 	beq	18a24c <TPinPad::DefineStyle(RefVar const &, long)+0xac>
        18a240:	e3300003 	teq	r0, #3	; 0x3
        18a244:	059f0028 	ldreq	r0, [pc, #28]	; 18a274 <TPinPad::DefineStyle(RefVar const &, long)+0xd4>
        18a248:	159f0028 	ldrne	r0, [pc, #28]	; 18a278 <TPinPad::DefineStyle(RefVar const &, long)+0xd8>
        18a24c:	e5900000 	ldr	r0, [r0]
        18a250:	e5901000 	ldr	r1, [r0]
        18a254:	e5970000 	ldr	r0, [r7]
        18a258:	e5900000 	ldr	r0, [r0]
        18a25c:	eb68e7ff 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        18a260:	e5a40078 	str	r0, [r4, #120]!	; fField120
        18a264:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        18a268:	00682d28 	rsbeq	r2, r8, r8, lsr #26
        18a26c:	00682120 	rsbeq	r2, r8, r0, lsr #2
        18a270:	00683330 	rsbeq	r3, r8, r0, lsr r3
        18a274:	00682130 	rsbeq	r2, r8, r0, lsr r1
        18a278:	00683ef8 	streqd	r3, [r8], -#232
    */
}

/**
 * Symbol: TPinPad::GetTextWidth(unsigned short *)
 * Address: 0018a27c
 */
TPinPad::GetTextWidth(unsigned short *) {
    /*
        18a27c:	e1a0c00d 	mov	ip, sp
        18a280:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        18a284:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a288:	e1a05000 	mov	r5, r0
        18a28c:	e1a04001 	mov	r4, r1
        18a290:	e24dd034 	sub	sp, sp, #52	; 0x34
        18a294:	e3a06000 	mov	r6, #0	; 0x0
        18a298:	e5900078 	ldr	r0, [r0, #120]	; fField120
        18a29c:	eb68dfaa 	bl	1bc214c <$AllocateRefHandle(long)>
        18a2a0:	e58d0000 	str	r0, [sp]
        18a2a4:	e1a0100d 	mov	r1, sp
        18a2a8:	e28d0004 	add	r0, sp, #4	; 0x4
        18a2ac:	e5b52080 	ldr	r2, [r5, #128]!	; fField128
        18a2b0:	eb672dfb 	bl	1b55aa4 <TAlertGlyph::$__ct(RefVar const &, long)>
        18a2b4:	e59d0000 	ldr	r0, [sp]
        18a2b8:	eb68e3bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18a2bc:	e5940000 	ldr	r0, [r4]
        18a2c0:	e1b00820 	movs	r0, r0, lsr #16
        18a2c4:	0a000007 	beq	18a2e8 <TPinPad::GetTextWidth(unsigned short *)+0x6c>
        18a2c8:	e5941000 	ldr	r1, [r4]
        18a2cc:	e1a01821 	mov	r1, r1, lsr #16
        18a2d0:	e28d0004 	add	r0, sp, #4	; 0x4
        18a2d4:	eb671533 	bl	1b4f7a8 <TAlertGlyph::$GetAlertGlyphWidth(long)>
        18a2d8:	e0806006 	add	r6, r0, r6
        18a2dc:	e5b40002 	ldr	r0, [r4, #2]!
        18a2e0:	e1b00820 	movs	r0, r0, lsr #16
        18a2e4:	1afffff7 	bne	18a2c8 <TPinPad::GetTextWidth(unsigned short *)+0x4c>
        18a2e8:	e1a00006 	mov	r0, r6
        18a2ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPinPad::DrawText(unsigned short *, Point)
 * Address: 0018a2f0
 */
TPinPad::DrawText(unsigned short *, Point) {
    /*
        18a2f0:	e1a0c00d 	mov	ip, sp
        18a2f4:	e92dd837 	stmdb	sp!, {r0, r1, r2, r4, r5, fp, ip, lr, pc}
        18a2f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a2fc:	e1a04000 	mov	r4, r0
        18a300:	e1a05001 	mov	r5, r1
        18a304:	e280007c 	add	r0, r0, #124	; 0x7c
        18a308:	e52d0004 	str	r0, [sp, -#4]!
        18a30c:	e51b0018 	ldr	r0, [fp, -#24]
        18a310:	e1a01800 	mov	r1, r0, lsl #16
        18a314:	e51b0016 	ldr	r0, [fp, -#22]
        18a318:	e1a00800 	mov	r0, r0, lsl #16
        18a31c:	e3a03000 	mov	r3, #0	; 0x0
        18a320:	e284209c 	add	r2, r4, #156	; 0x9c
        18a324:	e92d000c 	stmdb	sp!, {r2, r3}
        18a328:	e24dd008 	sub	sp, sp, #8	; 0x8
        18a32c:	e58d0004 	str	r0, [sp, #4]
        18a330:	e1a00005 	mov	r0, r5
        18a334:	e58d1000 	str	r1, [sp]
        18a338:	eb699108 	bl	1bee760 <$Ustrlen>
        18a33c:	e1a01000 	mov	r1, r0
        18a340:	e28d2010 	add	r2, sp, #16	; 0x10
        18a344:	e1a00005 	mov	r0, r5
        18a348:	e3a03000 	mov	r3, #0	; 0x0
        18a34c:	eb6710f0 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        18a350:	e28dd010 	add	sp, sp, #16	; 0x10
        18a354:	e2842010 	add	r2, r4, #16	; 0x10
        18a358:	e1a01002 	mov	r1, r2
        18a35c:	e3a03000 	mov	r3, #0	; 0x0
        18a360:	e5b40070 	ldr	r0, [r4, #112]!	; fField112
        18a364:	eb6708ba 	bl	1b4c654 <$BlitToScreens__FP8PixelMapP4RectT2l>
        18a368:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPinPad::BeginPolling(void)
 * Address: 0018a36c
 */
TPinPad::BeginPolling(void) {
    /*
        18a36c:	e1a0c00d 	mov	ip, sp
        18a370:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a374:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a378:	e1a04000 	mov	r4, r0
        18a37c:	eb658483 	bl	1aeb590 <$GetTabletPolling(void)>
        18a380:	e5c40074 	strb	r0, [r4, #116]	; fField116
        18a384:	e3a00001 	mov	r0, #1	; 0x1
        18a388:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        18a38c:	ea6588a7 	b	1aec630 <$SetTabletPolling(unsigned char)>
    */
}

/**
 * Symbol: TPinPad::GetPoint(Point *)
 * Address: 0018a390
 */
TPinPad::GetPoint(Point *) {
    /*
        18a390:	e1a0c00d 	mov	ip, sp
        18a394:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a398:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a39c:	e1a04001 	mov	r4, r1
        18a3a0:	e24dd010 	sub	sp, sp, #16	; 0x10
        18a3a4:	e3a00000 	mov	r0, #0	; 0x0
        18a3a8:	e5cd000c 	strb	r0, [sp, #12]
        18a3ac:	e28d300c 	add	r3, sp, #12	; 0xc
        18a3b0:	e1a0200d 	mov	r2, sp
        18a3b4:	e28d1004 	add	r1, sp, #4	; 0x4
        18a3b8:	e28d0008 	add	r0, sp, #8	; 0x8
        18a3bc:	eb658487 	bl	1aeb5e0 <$PollTablet__FPlT1PUlPUc>
        18a3c0:	e3300000 	teq	r0, #0	; 0x0
        18a3c4:	1a00000f 	bne	18a408 <TPinPad::GetPoint(Point *)+0x78>
        18a3c8:	e59d0000 	ldr	r0, [sp]
        18a3cc:	e3500007 	cmp	r0, #7	; 0x7
        18a3d0:	8a00000c 	bhi	18a408 <TPinPad::GetPoint(Point *)+0x78>
        18a3d4:	e59d0004 	ldr	r0, [sp, #4]
        18a3d8:	e2800902 	add	r0, r0, #32768	; 0x8000
        18a3dc:	e1a00840 	mov	r0, r0, asr #16
        18a3e0:	e5c40001 	strb	r0, [r4, #1]
        18a3e4:	e1a00440 	mov	r0, r0, asr #8
        18a3e8:	e5c40000 	strb	r0, [r4]
        18a3ec:	e59d0008 	ldr	r0, [sp, #8]
        18a3f0:	e2800902 	add	r0, r0, #32768	; 0x8000
        18a3f4:	e1a00840 	mov	r0, r0, asr #16
        18a3f8:	e5c40003 	strb	r0, [r4, #3]
        18a3fc:	e1a00440 	mov	r0, r0, asr #8
        18a400:	e5c40002 	strb	r0, [r4, #2]
        18a404:	ea000002 	b	18a414 <TPinPad::GetPoint(Point *)+0x84>
        18a408:	e5dd000c 	ldrb	r0, [sp, #12]
        18a40c:	e3300000 	teq	r0, #0	; 0x0
        18a410:	0affffe5 	beq	18a3ac <TPinPad::GetPoint(Point *)+0x1c>
        18a414:	e5dd000c 	ldrb	r0, [sp, #12]
        18a418:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPinPad::EndPolling(void)
 * Address: 0018a41c
 */
TPinPad::EndPolling(void) {
    /*
        18a41c:	e5d00074 	ldrb	r0, [r0, #116]	; fField116
        18a420:	ea658882 	b	1aec630 <$SetTabletPolling(unsigned char)>
    */
}

/**
 * Symbol: ClassInfo__7TPinPadSFv
 * Address: 00388740
 */
void TPinPad::ClassInfo() {
    /*
        388740:	e24f0044 	sub	r0, pc, #68	; 0x44
        388744:	e1a0f00e 	mov	pc, lr
        388748:	e3a00000 	mov	r0, #0	; 0x0
        38874c:	e1a0f00e 	mov	pc, lr
        388750:	5450696e 	ldrplb	r6, [r0], -#2414	; fField2414
        388754:	50616400 	rsbpl	r6, r1, r0, lsl #8
        388758:	54447261 	strplb	r7, [r4], -#609
        38875c:	77496e74 	undefined
        388760:	65726661 	ldrvsb	r6, [r2, -#1633]!
        388764:	63650000 	cmnvs	r5, #0	; 0x0
        388768:	00000000 	andeq	r0, r0, r0
        38876c:	eafffff3 	b	388740 <ClassInfo__7TPinPadSFv>
        388770:	ea5f4556 	b	1b59cd0 <TPinPad::$Delete(void)>
        388774:	ea5f4553 	b	1b59cc8 <TPinPad::$Init(Rect *)>
        388778:	ea5f4556 	b	1b59cd8 <TPinPad::$DrawPict(Picture **, Rect *)>
        38877c:	ea5f4556 	b	1b59cdc <TPinPad::$DefineStyle(RefVar const &, long)>
        388780:	ea5f4556 	b	1b59ce0 <TPinPad::$GetTextWidth(unsigned short *)>
        388784:	ea5f4556 	b	1b59ce4 <TPinPad::$DrawText(unsigned short *, Point)>
        388788:	ea5f4556 	b	1b59ce8 <TPinPad::$GetPoint(Point *)>
        38878c:	00000000 	andeq	r0, r0, r0
        388790:	00000048 	andeq	r0, r0, r8, asr #32
        388794:	00000055 	andeq	r0, r0, r5, asr r0
        388798:	0000005c 	andeq	r0, r0, ip, asr r0
        38879c:	0000005c 	andeq	r0, r0, ip, asr r0
        3887a0:	00000378 	andeq	r0, r0, r8, ror r3
        3887a4:	eaf83419 	b	195810 <Sizeof__16TQDLibraryDriverSFv>
        3887b0:	eaf83418 	b	195818 <TQDLibraryDriver::New(void)>
        3887b4:	eaf83589 	b	195de0 <TQDLibraryDriver::Delete(void)>
        3887c4:	ea000001 	b	3887d0 <ClassInfo__16TQDLibraryDriverSFv+0x8>
    */
}

