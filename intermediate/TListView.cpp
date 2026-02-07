#include "include/TListView.h"

/**
 * Symbol: TListView::ClassID( const(void))
 * Address: 0010eec4
 */
TListView::ClassID( const(void)) {
    /*
        10eec4:	e3a00063 	mov	r0, #99	; 0x63
        10eec8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TListView::DerivedFrom( const(long))
 * Address: 0010eecc
 */
TListView::DerivedFrom( const(long)) {
    /*
        10eecc:	e1a0c00d 	mov	ip, sp
        10eed0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        10eed4:	e24cb004 	sub	fp, ip, #4	; 0x4
        10eed8:	e3310063 	teq	r1, #99	; 0x63
        10eedc:	0a000002 	beq	10eeec <TListView::DerivedFrom( const(long))+0x20>
        10eee0:	ebfe4ae2 	bl	a1a70 <TEditView::DerivedFrom( const(long))>
        10eee4:	e3300000 	teq	r0, #0	; 0x0
        10eee8:	0a000001 	beq	10eef4 <TListView::DerivedFrom( const(long))+0x28>
        10eeec:	e3a00001 	mov	r0, #1	; 0x1
        10eef0:	ea000000 	b	10eef8 <TListView::DerivedFrom( const(long))+0x2c>
        10eef4:	e3a00000 	mov	r0, #0	; 0x0
        10eef8:	e20000ff 	and	r0, r0, #255	; 0xff
        10eefc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TListView::GadgetWidth(void)
 * Address: 0010ef00
 */
TListView::GadgetWidth(void) {
    /*
        10ef00:	e1a0c00d 	mov	ip, sp
        10ef04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10ef08:	e24cb004 	sub	fp, ip, #4	; 0x4
        10ef0c:	e1a04000 	mov	r4, r0
        10ef10:	e59f1028 	ldr	r1, [pc, #28]	; 10ef40 <TListView::GadgetWidth(void)+0x40>	; fField28
        10ef14:	eb6aed8b 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        10ef18:	e1a05000 	mov	r5, r0
        10ef1c:	e59f1020 	ldr	r1, [pc, #20]	; 10ef44 <TListView::GadgetWidth(void)+0x44>
        10ef20:	e1a00004 	mov	r0, r4
        10ef24:	eb6aed87 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        10ef28:	e0850000 	add	r0, r5, r0
        10ef2c:	e3100003 	tst	r0, #3	; 0x3
        10ef30:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        10ef34:	1a6acc78 	bne	1bc211c <$_RINTError(long)>
        10ef38:	01a00140 	moveq	r0, r0, asr #2
        10ef3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        10ef40:	006834f0 	streqd	r3, [r8], -#64
        10ef44:	00684378 	rsbeq	r4, r8, r8, ror r3
    */
}

/**
 * Symbol: TListView::GetDropData(RefVar const &, RefVar const &)
 * Address: 0010ef48
 */
TListView::GetDropData(RefVar const &, RefVar const &) {
    /*
        10ef48:	e1a0c00d 	mov	ip, sp
        10ef4c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10ef50:	e24cb004 	sub	fp, ip, #4	; 0x4
        10ef54:	e1a06000 	mov	r6, r0
        10ef58:	e1a04001 	mov	r4, r1
        10ef5c:	e1a05002 	mov	r5, r2
        10ef60:	e59f00a0 	ldr	r0, [pc, #a0]	; 10f008 <TListView::GetDropData(RefVar const &, RefVar const &)+0xc0>
        10ef64:	e5900000 	ldr	r0, [r0]
        10ef68:	e5901000 	ldr	r1, [r0]
        10ef6c:	e5940000 	ldr	r0, [r4]
        10ef70:	e5900000 	ldr	r0, [r0]
        10ef74:	eb6ad4ad 	bl	1bc4230 <$EQRef__FlT1>
        10ef78:	e3300000 	teq	r0, #0	; 0x0
        10ef7c:	1a000017 	bne	10efe0 <TListView::GetDropData(RefVar const &, RefVar const &)+0x98>
        10ef80:	e59f0084 	ldr	r0, [pc, #84]	; 10f00c <TListView::GetDropData(RefVar const &, RefVar const &)+0xc4>	; fField84
        10ef84:	e5900000 	ldr	r0, [r0]
        10ef88:	e5901000 	ldr	r1, [r0]
        10ef8c:	e5940000 	ldr	r0, [r4]
        10ef90:	e5900000 	ldr	r0, [r0]
        10ef94:	eb6ad4a5 	bl	1bc4230 <$EQRef__FlT1>
        10ef98:	e3300000 	teq	r0, #0	; 0x0
        10ef9c:	1a00000f 	bne	10efe0 <TListView::GetDropData(RefVar const &, RefVar const &)+0x98>
        10efa0:	e59f0068 	ldr	r0, [pc, #68]	; 10f010 <TListView::GetDropData(RefVar const &, RefVar const &)+0xc8>
        10efa4:	e5900000 	ldr	r0, [r0]
        10efa8:	e5901000 	ldr	r1, [r0]
        10efac:	e5940000 	ldr	r0, [r4]
        10efb0:	e5900000 	ldr	r0, [r0]
        10efb4:	eb6ad49d 	bl	1bc4230 <$EQRef__FlT1>
        10efb8:	e3300000 	teq	r0, #0	; 0x0
        10efbc:	0a00000c 	beq	10eff4 <TListView::GetDropData(RefVar const &, RefVar const &)+0xac>
        10efc0:	e1a00005 	mov	r0, r5
        10efc4:	eb6b9271 	bl	1bf3990 <$IsFrame(RefVar const &)>
        10efc8:	e3300000 	teq	r0, #0	; 0x0
        10efcc:	0a000003 	beq	10efe0 <TListView::GetDropData(RefVar const &, RefVar const &)+0x98>
        10efd0:	e1a00005 	mov	r0, r5
        10efd4:	eb6aed60 	bl	1bca55c <$GetView(RefVar const &)>
        10efd8:	e3300000 	teq	r0, #0	; 0x0
        10efdc:	1a000004 	bne	10eff4 <TListView::GetDropData(RefVar const &, RefVar const &)+0xac>
        10efe0:	e1a02005 	mov	r2, r5
        10efe4:	e1a01004 	mov	r1, r4
        10efe8:	e1a00006 	mov	r0, r6
        10efec:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        10eff0:	ea668e46 	b	1ab2910 <TView::$GetDropData(RefVar const &, RefVar const &)>
        10eff4:	e1a02005 	mov	r2, r5
        10eff8:	e1a01004 	mov	r1, r4
        10effc:	e1a00006 	mov	r0, r6
        10f000:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        10f004:	ea668e42 	b	1ab2914 <TEditView::$GetDropData(RefVar const &, RefVar const &)>
        10f008:	00684bd0 	ldreqd	r4, [r8], -#176
        10f00c:	00684a68 	rsbeq	r4, r8, r8, ror #20
        10f010:	00684ac0 	rsbeq	r4, r8, r0, asr #21
    */
}

/**
 * Symbol: TListView::HandlePenDown(RefVar const &)
 * Address: 0010f014
 */
TListView::HandlePenDown(RefVar const &) {
    /*
        10f014:	e1a0c00d 	mov	ip, sp
        10f018:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10f01c:	e24cb004 	sub	fp, ip, #4	; 0x4
        10f020:	e1a04000 	mov	r4, r0
        10f024:	e1a05001 	mov	r5, r1
        10f028:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        10f02c:	e3a07000 	mov	r7, #0	; 0x0
        10f030:	e2800024 	add	r0, r0, #36	; 0x24
        10f034:	eb66f156 	bl	1acb594 <$FListBottom>
        10f038:	e3100003 	tst	r0, #3	; 0x3
        10f03c:	01a00140 	moveq	r0, r0, asr #2
        10f040:	0a000000 	beq	10f048 <TListView::HandlePenDown(RefVar const &)+0x34>
        10f044:	eb6acc34 	bl	1bc211c <$_RINTError(long)>
        10f048:	e1a06000 	mov	r6, r0
        10f04c:	e2840010 	add	r0, r4, #16	; 0x10
        10f050:	e28d1010 	add	r1, sp, #16	; 0x10
        10f054:	e8905000 	ldmia	r0, {ip, lr}
        10f058:	e8815000 	stmia	r1, {ip, lr}
        10f05c:	e1a00005 	mov	r0, r5
        10f060:	eb665cbc 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        10f064:	eb665061 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        10f068:	e1a01000 	mov	r1, r0
        10f06c:	e28d0004 	add	r0, sp, #4	; 0x4
        10f070:	eb661672 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        10f074:	e3a00002 	mov	r0, #2	; 0x2
        10f078:	eb6acc33 	bl	1bc214c <$AllocateRefHandle(long)>
        10f07c:	e1a08000 	mov	r8, r0
        10f080:	e3a00002 	mov	r0, #2	; 0x2
        10f084:	eb6acc30 	bl	1bc214c <$AllocateRefHandle(long)>
        10f088:	e58d0000 	str	r0, [sp]
        10f08c:	e59f1058 	ldr	r1, [pc, #58]	; 10f0ec <TListView::HandlePenDown(RefVar const &)+0xd8>
        10f090:	e1a00004 	mov	r0, r4
        10f094:	eb6aed2b 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        10f098:	e3100003 	tst	r0, #3	; 0x3
        10f09c:	01a00140 	moveq	r0, r0, asr #2
        10f0a0:	0a000000 	beq	10f0a8 <TListView::HandlePenDown(RefVar const &)+0x94>
        10f0a4:	eb6acc1c 	bl	1bc211c <$_RINTError(long)>
        10f0a8:	e1a0a000 	mov	sl, r0
        10f0ac:	e59d0006 	ldr	r0, [sp, #6]
        10f0b0:	e59d1012 	ldr	r1, [sp, #18]
        10f0b4:	e0400001 	sub	r0, r0, r1
        10f0b8:	e5cd0005 	strb	r0, [sp, #5]
        10f0bc:	e1a00440 	mov	r0, r0, asr #8
        10f0c0:	e5cd0004 	strb	r0, [sp, #4]
        10f0c4:	e59d0004 	ldr	r0, [sp, #4]
        10f0c8:	e1560840 	cmp	r6, r0, asr #16
        10f0cc:	aa000007 	bge	10f0f0 <TListView::HandlePenDown(RefVar const &)+0xdc>
        10f0d0:	e59d0000 	ldr	r0, [sp]
        10f0d4:	eb6ad038 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f0d8:	e3a04000 	mov	r4, #0	; 0x0
        10f0dc:	e1a00008 	mov	r0, r8
        10f0e0:	eb6ad035 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f0e4:	e1a00004 	mov	r0, r4
        10f0e8:	ea000091 	b	10f334 <TListView::HandlePenDown(RefVar const &)+0x320>
        10f0ec:	006835d0 	ldreqd	r3, [r8], -#80	; fField80
        10f0f0:	e1a00004 	mov	r0, r4
        10f0f4:	eb66f54f 	bl	1acc638 <TListView::$Topics(void)>
        10f0f8:	e5880000 	str	r0, [r8]
        10f0fc:	eb6ad86a 	bl	1bc52ac <$Length(long)>
        10f100:	e1a09000 	mov	r9, r0
        10f104:	e59f116c 	ldr	r1, [pc, #16c]	; 10f278 <TListView::HandlePenDown(RefVar const &)+0x264>	; fField16
        10f108:	e1a00004 	mov	r0, r4
        10f10c:	eb6aed0d 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        10f110:	e3100003 	tst	r0, #3	; 0x3
        10f114:	01a00140 	moveq	r0, r0, asr #2
        10f118:	0a000000 	beq	10f120 <TListView::HandlePenDown(RefVar const &)+0x10c>
        10f11c:	eb6acbfe 	bl	1bc211c <$_RINTError(long)>
        10f120:	e1a01800 	mov	r1, r0, lsl #16
        10f124:	e1a01841 	mov	r1, r1, asr #16
        10f128:	e59d0004 	ldr	r0, [sp, #4]
        10f12c:	e1510840 	cmp	r1, r0, asr #16
        10f130:	c3590000 	cmpgt	r9, #0	; 0x0
        10f134:	da00000b 	ble	10f168 <TListView::HandlePenDown(RefVar const &)+0x154>
        10f138:	e3a03000 	mov	r3, #0	; 0x0
        10f13c:	e92d0008 	stmdb	sp!, {r3}
        10f140:	e3a01000 	mov	r1, #0	; 0x0
        10f144:	e5940020 	ldr	r0, [r4, #32]	; fField32
        10f148:	eb6b5c7d 	bl	1be6344 <CList::$At(long)>
        10f14c:	e1a01000 	mov	r1, r0
        10f150:	e59f0124 	ldr	r0, [pc, #124]	; 10f27c <TListView::HandlePenDown(RefVar const &)+0x268>
        10f154:	e5900000 	ldr	r0, [r0]
        10f158:	e3a03000 	mov	r3, #0	; 0x0
        10f15c:	e59f211c 	ldr	r2, [pc, #11c]	; 10f280 <TListView::HandlePenDown(RefVar const &)+0x26c>
        10f160:	eb67121f 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
        10f164:	e28dd004 	add	sp, sp, #4	; 0x4
        10f168:	e59d1004 	ldr	r1, [sp, #4]
        10f16c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        10f170:	e0410000 	sub	r0, r1, r0
        10f174:	e5cd0007 	strb	r0, [sp, #7]
        10f178:	e1a00440 	mov	r0, r0, asr #8
        10f17c:	e5cd0006 	strb	r0, [sp, #6]
        10f180:	e59f10fc 	ldr	r1, [pc, #fc]	; 10f284 <TListView::HandlePenDown(RefVar const &)+0x270>
        10f184:	e1a00004 	mov	r0, r4
        10f188:	eb6aecee 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        10f18c:	e3100003 	tst	r0, #3	; 0x3
        10f190:	01a00140 	moveq	r0, r0, asr #2
        10f194:	0a000000 	beq	10f19c <TListView::HandlePenDown(RefVar const &)+0x188>
        10f198:	eb6acbdf 	bl	1bc211c <$_RINTError(long)>
        10f19c:	e1a06000 	mov	r6, r0
        10f1a0:	e1500009 	cmp	r0, r9
        10f1a4:	aa00005d 	bge	10f320 <TListView::HandlePenDown(RefVar const &)+0x30c>
        10f1a8:	e1a0000a 	mov	r0, sl
        10f1ac:	e20aa001 	and	sl, sl, #1	; 0x1
        10f1b0:	e2000002 	and	r0, r0, #2	; 0x2
        10f1b4:	e58d0018 	str	r0, [sp, #24]
        10f1b8:	e1a01006 	mov	r1, r6
        10f1bc:	e5980000 	ldr	r0, [r8]
        10f1c0:	eb6ad423 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10f1c4:	e59d1000 	ldr	r1, [sp]
        10f1c8:	e5810000 	str	r0, [r1]
        10f1cc:	e1a0000d 	mov	r0, sp
        10f1d0:	eb66f516 	bl	1acc630 <$TopicVisible(RefVar const &)>
        10f1d4:	e3300000 	teq	r0, #0	; 0x0
        10f1d8:	0a000048 	beq	10f300 <TListView::HandlePenDown(RefVar const &)+0x2ec>
        10f1dc:	e28d2010 	add	r2, sp, #16	; 0x10
        10f1e0:	e1a01006 	mov	r1, r6
        10f1e4:	e1a00004 	mov	r0, r4
        10f1e8:	eb66f0fc 	bl	1acb5e0 <TListView::$MarkerBounds(long, TRect &)>
        10f1ec:	e33a0000 	teq	sl, #0	; 0x0
        10f1f0:	0a000003 	beq	10f204 <TListView::HandlePenDown(RefVar const &)+0x1f0>
        10f1f4:	e28d0010 	add	r0, sp, #16	; 0x10
        10f1f8:	e3a02000 	mov	r2, #0	; 0x0
        10f1fc:	e3a01014 	mov	r1, #20	; 0x14
        10f200:	eb6909b8 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        10f204:	e28d0010 	add	r0, sp, #16	; 0x10
        10f208:	e3a02002 	mov	r2, #2	; 0x2
        10f20c:	e3a01001 	mov	r1, #1	; 0x1
        10f210:	eb69058a 	bl	1b50840 <$InsetRect__FP4RectlT2>
        10f214:	e59d0014 	ldr	r0, [sp, #20]
        10f218:	e2400002 	sub	r0, r0, #2	; 0x2
        10f21c:	e5cd0017 	strb	r0, [sp, #23]
        10f220:	e1a00440 	mov	r0, r0, asr #8
        10f224:	e5cd0016 	strb	r0, [sp, #22]
        10f228:	e33a0000 	teq	sl, #0	; 0x0
        10f22c:	1a000016 	bne	10f28c <TListView::HandlePenDown(RefVar const &)+0x278>
        10f230:	e59d0004 	ldr	r0, [sp, #4]
        10f234:	e52d0004 	str	r0, [sp, -#4]!
        10f238:	e28d1014 	add	r1, sp, #20	; 0x14
        10f23c:	e28dd004 	add	sp, sp, #4	; 0x4
        10f240:	eb690dbd 	bl	1b5293c <$PtInRect(Point, Rect *)>
        10f244:	e3300000 	teq	r0, #0	; 0x0
        10f248:	0a00000f 	beq	10f28c <TListView::HandlePenDown(RefVar const &)+0x278>
        10f24c:	e59f1034 	ldr	r1, [pc, #34]	; 10f288 <TListView::HandlePenDown(RefVar const &)+0x274>
        10f250:	e1a00004 	mov	r0, r4
        10f254:	eb6aecbb 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        10f258:	e3300002 	teq	r0, #2	; 0x2
        10f25c:	0a00002a 	beq	10f30c <TListView::HandlePenDown(RefVar const &)+0x2f8>
        10f260:	e1a02006 	mov	r2, r6
        10f264:	e1a01005 	mov	r1, r5
        10f268:	e1a00004 	mov	r0, r4
        10f26c:	eb66f4f3 	bl	1acc640 <TListView::$TrackTopic(RefVar const &, long)>
        10f270:	e1a07000 	mov	r7, r0
        10f274:	ea000024 	b	10f30c <TListView::HandlePenDown(RefVar const &)+0x2f8>
        10f278:	00684c08 	rsbeq	r4, r8, r8, lsl #24
        10f27c:	0c101934 	ldceq	9, cr1, [r0], -#208
        10f280:	0001869f 	muleq	r1, pc, r6
        10f284:	00682dd0 	ldreqd	r2, [r8], -#208
        10f288:	00684bd8 	ldreqd	r4, [r8], -#184
        10f28c:	e28d1008 	add	r1, sp, #8	; 0x8
        10f290:	e28d0010 	add	r0, sp, #16	; 0x10
        10f294:	e8901008 	ldmia	r0, {r3, ip}
        10f298:	e8811008 	stmia	r1, {r3, ip}
        10f29c:	e59d0018 	ldr	r0, [sp, #24]
        10f2a0:	e3300000 	teq	r0, #0	; 0x0
        10f2a4:	0a000010 	beq	10f2ec <TListView::HandlePenDown(RefVar const &)+0x2d8>
        10f2a8:	e28d0008 	add	r0, sp, #8	; 0x8
        10f2ac:	e3a02000 	mov	r2, #0	; 0x0
        10f2b0:	e3e0100c 	mvn	r1, #12	; 0xc
        10f2b4:	eb69098b 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        10f2b8:	e59d0004 	ldr	r0, [sp, #4]
        10f2bc:	e52d0004 	str	r0, [sp, -#4]!
        10f2c0:	e28d100c 	add	r1, sp, #12	; 0xc
        10f2c4:	e28dd004 	add	sp, sp, #4	; 0x4
        10f2c8:	eb690d9b 	bl	1b5293c <$PtInRect(Point, Rect *)>
        10f2cc:	e3300000 	teq	r0, #0	; 0x0
        10f2d0:	0a000005 	beq	10f2ec <TListView::HandlePenDown(RefVar const &)+0x2d8>
        10f2d4:	e1a02006 	mov	r2, r6
        10f2d8:	e1a01005 	mov	r1, r5
        10f2dc:	e1a00004 	mov	r0, r4
        10f2e0:	eb66f4d5 	bl	1acc63c <TListView::$TrackCheck(RefVar const &, long)>
        10f2e4:	e3a07001 	mov	r7, #1	; 0x1
        10f2e8:	ea000009 	b	10f314 <TListView::HandlePenDown(RefVar const &)+0x300>
        10f2ec:	e59d1014 	ldr	r1, [sp, #20]
        10f2f0:	e1a01841 	mov	r1, r1, asr #16
        10f2f4:	e59d0004 	ldr	r0, [sp, #4]
        10f2f8:	e1510840 	cmp	r1, r0, asr #16
        10f2fc:	ca000002 	bgt	10f30c <TListView::HandlePenDown(RefVar const &)+0x2f8>
        10f300:	e2866001 	add	r6, r6, #1	; 0x1
        10f304:	e1560009 	cmp	r6, r9
        10f308:	baffffaa 	blt	10f1b8 <TListView::HandlePenDown(RefVar const &)+0x1a4>
        10f30c:	e3370000 	teq	r7, #0	; 0x0
        10f310:	0a000002 	beq	10f320 <TListView::HandlePenDown(RefVar const &)+0x30c>
        10f314:	e1a01007 	mov	r1, r7
        10f318:	e1a00005 	mov	r0, r5
        10f31c:	eb665c0c 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        10f320:	e59d0000 	ldr	r0, [sp]
        10f324:	eb6acfa4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f328:	e1a00008 	mov	r0, r8
        10f32c:	eb6acfa2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f330:	e1a00007 	mov	r0, r7
        10f334:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::HandleTap(TPoint &)
 * Address: 0010f338
 */
TListView::HandleTap(TPoint &) {
    /*
        10f338:	e1a0c00d 	mov	ip, sp
        10f33c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10f340:	e24cb004 	sub	fp, ip, #4	; 0x4
        10f344:	e1a04000 	mov	r4, r0
        10f348:	e1a05001 	mov	r5, r1
        10f34c:	e5901000 	ldr	r1, [r0]
        10f350:	e1a0e00f 	mov	lr, pc
        10f354:	e281f0ac 	add	pc, r1, #172	; 0xac
        10f358:	e1a01005 	mov	r1, r5
        10f35c:	e1a00004 	mov	r0, r4
        10f360:	e3a03000 	mov	r3, #0	; 0x0
        10f364:	e3a02000 	mov	r2, #0	; 0x0
        10f368:	eb6653ad 	bl	1aa4224 <TEditView::$TextContainingPoint(TPoint &, TRect *, long *)>
        10f36c:	e3300000 	teq	r0, #0	; 0x0
        10f370:	0a000006 	beq	10f390 <TListView::HandleTap(TPoint &)+0x58>
        10f374:	e5901008 	ldr	r1, [r0, #8]	; fField8
        10f378:	e3110082 	tst	r1, #130	; 0x82
        10f37c:	1a000003 	bne	10f390 <TListView::HandleTap(TPoint &)+0x58>
        10f380:	e1a01005 	mov	r1, r5
        10f384:	e5902000 	ldr	r2, [r0]
        10f388:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        10f38c:	e282ff47 	add	pc, r2, #284	; 0x11c
        10f390:	e2840024 	add	r0, r4, #36	; 0x24
        10f394:	eb66f07e 	bl	1acb594 <$FListBottom>
        10f398:	e3100003 	tst	r0, #3	; 0x3
        10f39c:	01a00140 	moveq	r0, r0, asr #2
        10f3a0:	0a000000 	beq	10f3a8 <TListView::HandleTap(TPoint &)+0x70>
        10f3a4:	eb6acb5c 	bl	1bc211c <$_RINTError(long)>
        10f3a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        10f3ac:	e5941010 	ldr	r1, [r4, #16]	; fField16
        10f3b0:	e58d1000 	str	r1, [sp]
        10f3b4:	e59d1000 	ldr	r1, [sp]
        10f3b8:	e5952000 	ldr	r2, [r5]
        10f3bc:	e1a02842 	mov	r2, r2, asr #16
        10f3c0:	e0421841 	sub	r1, r2, r1, asr #16
        10f3c4:	e1510000 	cmp	r1, r0
        10f3c8:	e28dd004 	add	sp, sp, #4	; 0x4
        10f3cc:	c1a01005 	movgt	r1, r5
        10f3d0:	c1a00004 	movgt	r0, r4
        10f3d4:	c91b6830 	ldmgtdb	fp, {r4, r5, fp, sp, lr}
        10f3d8:	ca662609 	bgt	1a98c04 <TEditView::$HandleTap(TPoint &)>
        10f3dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::IndexFromY(long)
 * Address: 0010f3e0
 */
TListView::IndexFromY(long) {
    /*
        10f3e0:	e1a0c00d 	mov	ip, sp
        10f3e4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        10f3e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        10f3ec:	e1a04000 	mov	r4, r0
        10f3f0:	e1a05001 	mov	r5, r1
        10f3f4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10f3f8:	e3a00002 	mov	r0, #2	; 0x2
        10f3fc:	eb6acb52 	bl	1bc214c <$AllocateRefHandle(long)>
        10f400:	e58d0000 	str	r0, [sp]
        10f404:	e1a00004 	mov	r0, r4
        10f408:	eb66f48a 	bl	1acc638 <TListView::$Topics(void)>
        10f40c:	eb6acb4e 	bl	1bc214c <$AllocateRefHandle(long)>
        10f410:	e1a07000 	mov	r7, r0
        10f414:	e1a00004 	mov	r0, r4
        10f418:	eb66f072 	bl	1acb5e8 <TListView::$NTopics(void)>
        10f41c:	e1a08000 	mov	r8, r0
        10f420:	e3a06000 	mov	r6, #0	; 0x0
        10f424:	e3500000 	cmp	r0, #0	; 0x0
        10f428:	da00002a 	ble	10f4d8 <TListView::IndexFromY(long)+0xf8>
        10f42c:	e3a09002 	mov	r9, #2	; 0x2
        10f430:	e1a01006 	mov	r1, r6
        10f434:	e1a00004 	mov	r0, r4
        10f438:	eb66f47b 	bl	1acc62c <TListView::$TopicVisible(long)>
        10f43c:	e3300000 	teq	r0, #0	; 0x0
        10f440:	0a000021 	beq	10f4cc <TListView::IndexFromY(long)+0xec>
        10f444:	e24dd004 	sub	sp, sp, #4	; 0x4
        10f448:	e28d2008 	add	r2, sp, #8	; 0x8
        10f44c:	e1a01006 	mov	r1, r6
        10f450:	e1a00004 	mov	r0, r4
        10f454:	eb66f061 	bl	1acb5e0 <TListView::$MarkerBounds(long, TRect &)>
        10f458:	e1a01006 	mov	r1, r6
        10f45c:	e5970000 	ldr	r0, [r7]
        10f460:	eb6ad37b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10f464:	e59d1004 	ldr	r1, [sp, #4]
        10f468:	e5810000 	str	r0, [r1]
        10f46c:	e1a00009 	mov	r0, r9
        10f470:	eb6acb35 	bl	1bc214c <$AllocateRefHandle(long)>
        10f474:	e58d0000 	str	r0, [sp]
        10f478:	e1a0000d 	mov	r0, sp
        10f47c:	e28d1004 	add	r1, sp, #4	; 0x4
        10f480:	eb66f048 	bl	1acb5a8 <$FTopicBottom>
        10f484:	e3100003 	tst	r0, #3	; 0x3
        10f488:	01a00140 	moveq	r0, r0, asr #2
        10f48c:	0a000000 	beq	10f494 <TListView::IndexFromY(long)+0xb4>
        10f490:	eb6acb21 	bl	1bc211c <$_RINTError(long)>
        10f494:	e5cd000d 	strb	r0, [sp, #13]
        10f498:	e1a00440 	mov	r0, r0, asr #8
        10f49c:	e5cd000c 	strb	r0, [sp, #12]
        10f4a0:	e59d0000 	ldr	r0, [sp]
        10f4a4:	eb6acf44 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f4a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        10f4ac:	e28d100c 	add	r1, sp, #12	; 0xc
        10f4b0:	e1a0000d 	mov	r0, sp
        10f4b4:	eb0220f2 	bl	197884 <TRect::MidPoint( const(void))>
        10f4b8:	e59d0000 	ldr	r0, [sp]
        10f4bc:	e1550840 	cmp	r5, r0, asr #16
        10f4c0:	e28dd004 	add	sp, sp, #4	; 0x4
        10f4c4:	ba00000a 	blt	10f4f4 <TListView::IndexFromY(long)+0x114>
        10f4c8:	e28dd004 	add	sp, sp, #4	; 0x4
        10f4cc:	e2866001 	add	r6, r6, #1	; 0x1
        10f4d0:	e1560008 	cmp	r6, r8
        10f4d4:	baffffd5 	blt	10f430 <TListView::IndexFromY(long)+0x50>
        10f4d8:	e2484001 	sub	r4, r8, #1	; 0x1
        10f4dc:	e1a00007 	mov	r0, r7
        10f4e0:	eb6acf35 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f4e4:	e59d0000 	ldr	r0, [sp]
        10f4e8:	eb6acf33 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f4ec:	e1a00004 	mov	r0, r4
        10f4f0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        10f4f4:	e2464001 	sub	r4, r6, #1	; 0x1
        10f4f8:	e1a00007 	mov	r0, r7
        10f4fc:	eb6acf2e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f500:	e59d0004 	ldr	r0, [sp, #4]
        10f504:	eb6acf2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f508:	e1a00004 	mov	r0, r4
        10f50c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::LevelFromX(long, long)
 * Address: 0010f510
 */
TListView::LevelFromX(long, long) {
    /*
        10f510:	e1a0c00d 	mov	ip, sp
        10f514:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        10f518:	e24cb004 	sub	fp, ip, #4	; 0x4
        10f51c:	e1a04000 	mov	r4, r0
        10f520:	e1a06001 	mov	r6, r1
        10f524:	e1a05002 	mov	r5, r2
        10f528:	e24dd004 	sub	sp, sp, #4	; 0x4
        10f52c:	e3a00002 	mov	r0, #2	; 0x2
        10f530:	eb6acb05 	bl	1bc214c <$AllocateRefHandle(long)>
        10f534:	e3a07000 	mov	r7, #0	; 0x0
        10f538:	e356000a 	cmp	r6, #10	; 0xa
        10f53c:	e58d0000 	str	r0, [sp]
        10f540:	aa000004 	bge	10f558 <TListView::LevelFromX(long, long)+0x48>
        10f544:	e3a04001 	mov	r4, #1	; 0x1
        10f548:	e59d0000 	ldr	r0, [sp]
        10f54c:	eb6acf1a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f550:	e1a00004 	mov	r0, r4
        10f554:	ea000021 	b	10f5e0 <TListView::LevelFromX(long, long)+0xd0>
        10f558:	e1a00004 	mov	r0, r4
        10f55c:	eb66f017 	bl	1acb5c0 <TListView::$GadgetWidth(void)>
        10f560:	e0560000 	subs	r0, r6, r0
        10f564:	51a01000 	movpl	r1, r0
        10f568:	41a01007 	movmi	r1, r7
        10f56c:	e3a00014 	mov	r0, #20	; 0x14
        10f570:	eb6a8cf2 	bl	1bb2940 <$__rt_sdiv>
        10f574:	e2806001 	add	r6, r0, #1	; 0x1
        10f578:	e59f1064 	ldr	r1, [pc, #64]	; 10f5e4 <TListView::LevelFromX(long, long)+0xd4>
        10f57c:	e1a00004 	mov	r0, r4
        10f580:	eb6aebf4 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        10f584:	e3100003 	tst	r0, #3	; 0x3
        10f588:	01a00140 	moveq	r0, r0, asr #2
        10f58c:	0a000000 	beq	10f594 <TListView::LevelFromX(long, long)+0x84>
        10f590:	eb6acae1 	bl	1bc211c <$_RINTError(long)>
        10f594:	e1560000 	cmp	r6, r0
        10f598:	b1a00006 	movlt	r0, r6
        10f59c:	e1a06000 	mov	r6, r0
        10f5a0:	e3750002 	cmn	r5, #2	; 0x2
        10f5a4:	0a00000a 	beq	10f5d4 <TListView::LevelFromX(long, long)+0xc4>
        10f5a8:	e1a01005 	mov	r1, r5
        10f5ac:	e1a00004 	mov	r0, r4
        10f5b0:	eb66f41f 	bl	1acc634 <TListView::$Topic(long)>
        10f5b4:	e59d1000 	ldr	r1, [sp]
        10f5b8:	e5810000 	str	r0, [r1]
        10f5bc:	e1a0000d 	mov	r0, sp
        10f5c0:	eb66f417 	bl	1acc624 <$TopicLevel(RefVar const &)>
        10f5c4:	e2800001 	add	r0, r0, #1	; 0x1
        10f5c8:	e1560000 	cmp	r6, r0
        10f5cc:	b1a00006 	movlt	r0, r6
        10f5d0:	e1a06000 	mov	r6, r0
        10f5d4:	e59d0000 	ldr	r0, [sp]
        10f5d8:	eb6acef7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f5dc:	e1a00006 	mov	r0, r6
        10f5e0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        10f5e4:	006837f0 	streqd	r3, [r8], -#112
    */
}

/**
 * Symbol: TListView::MarkerBounds(long, TRect &)
 * Address: 0010f5e8
 */
TListView::MarkerBounds(long, TRect &) {
    /*
        10f5e8:	e1a0c00d 	mov	ip, sp
        10f5ec:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        10f5f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        10f5f4:	e1a05000 	mov	r5, r0
        10f5f8:	e1a04002 	mov	r4, r2
        10f5fc:	eb66f40c 	bl	1acc634 <TListView::$Topic(long)>
        10f600:	eb6acad1 	bl	1bc214c <$AllocateRefHandle(long)>
        10f604:	e1a07000 	mov	r7, r0
        10f608:	e59f00e0 	ldr	r0, [pc, #e0]	; 10f6f0 <TListView::MarkerBounds(long, TRect &)+0x108>
        10f60c:	e5900000 	ldr	r0, [r0]
        10f610:	e5901000 	ldr	r1, [r0]
        10f614:	e5970000 	ldr	r0, [r7]
        10f618:	eb6ad310 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10f61c:	eb6acaca 	bl	1bc214c <$AllocateRefHandle(long)>
        10f620:	e1a06000 	mov	r6, r0
        10f624:	e59f00c8 	ldr	r0, [pc, #c8]	; 10f6f4 <TListView::MarkerBounds(long, TRect &)+0x10c>
        10f628:	e5900000 	ldr	r0, [r0]
        10f62c:	e5901000 	ldr	r1, [r0]
        10f630:	e5960000 	ldr	r0, [r6]
        10f634:	eb6ad309 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10f638:	e3100003 	tst	r0, #3	; 0x3
        10f63c:	01a00140 	moveq	r0, r0, asr #2
        10f640:	0a000000 	beq	10f648 <TListView::MarkerBounds(long, TRect &)+0x60>
        10f644:	eb6acab4 	bl	1bc211c <$_RINTError(long)>
        10f648:	e5c40001 	strb	r0, [r4, #1]
        10f64c:	e1a00440 	mov	r0, r0, asr #8
        10f650:	e5c40000 	strb	r0, [r4]
        10f654:	e5940000 	ldr	r0, [r4]
        10f658:	e1a00820 	mov	r0, r0, lsr #16
        10f65c:	e2800010 	add	r0, r0, #16	; 0x10
        10f660:	e5c40005 	strb	r0, [r4, #5]
        10f664:	e1a00440 	mov	r0, r0, asr #8
        10f668:	e5c40004 	strb	r0, [r4, #4]
        10f66c:	e59f0084 	ldr	r0, [pc, #84]	; 10f6f8 <TListView::MarkerBounds(long, TRect &)+0x110>	; fField84
        10f670:	e5900000 	ldr	r0, [r0]
        10f674:	e5901000 	ldr	r1, [r0]
        10f678:	e5960000 	ldr	r0, [r6]
        10f67c:	eb6ad2f7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10f680:	e3100003 	tst	r0, #3	; 0x3
        10f684:	01a00140 	moveq	r0, r0, asr #2
        10f688:	0a000000 	beq	10f690 <TListView::MarkerBounds(long, TRect &)+0xa8>
        10f68c:	eb6acaa2 	bl	1bc211c <$_RINTError(long)>
        10f690:	e1a08800 	mov	r8, r0, lsl #16
        10f694:	e1a08848 	mov	r8, r8, asr #16
        10f698:	e59f105c 	ldr	r1, [pc, #5c]	; 10f6fc <TListView::MarkerBounds(long, TRect &)+0x114>
        10f69c:	e1a00005 	mov	r0, r5
        10f6a0:	eb6aebac 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        10f6a4:	e3100003 	tst	r0, #3	; 0x3
        10f6a8:	01a00140 	moveq	r0, r0, asr #2
        10f6ac:	0a000000 	beq	10f6b4 <TListView::MarkerBounds(long, TRect &)+0xcc>
        10f6b0:	eb6aca99 	bl	1bc211c <$_RINTError(long)>
        10f6b4:	e0480000 	sub	r0, r8, r0
        10f6b8:	e5c40007 	strb	r0, [r4, #7]
        10f6bc:	e1a00440 	mov	r0, r0, asr #8
        10f6c0:	e5c40006 	strb	r0, [r4, #6]
        10f6c4:	e5940006 	ldr	r0, [r4, #6]
        10f6c8:	e1a00820 	mov	r0, r0, lsr #16
        10f6cc:	e2400014 	sub	r0, r0, #20	; 0x14
        10f6d0:	e5c40003 	strb	r0, [r4, #3]
        10f6d4:	e1a00440 	mov	r0, r0, asr #8
        10f6d8:	e5c40002 	strb	r0, [r4, #2]
        10f6dc:	e1a00006 	mov	r0, r6
        10f6e0:	eb6aceb5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f6e4:	e1a00007 	mov	r0, r7
        10f6e8:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        10f6ec:	ea6aceb2 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f6f0:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        10f6f4:	00684bc8 	rsbeq	r4, r8, r8, asr #23
        10f6f8:	006834e0 	rsbeq	r3, r8, r0, ror #9
        10f6fc:	00684378 	rsbeq	r4, r8, r8, ror r3
    */
}

/**
 * Symbol: TListView::NTopics(void)
 * Address: 0010f700
 */
TListView::NTopics(void) {
    /*
        10f700:	e1a0c00d 	mov	ip, sp
        10f704:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        10f708:	e24cb004 	sub	fp, ip, #4	; 0x4
        10f70c:	eb66f3c9 	bl	1acc638 <TListView::$Topics(void)>
        10f710:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        10f714:	ea6ad6e4 	b	1bc52ac <$Length(long)>
    */
}

/**
 * Symbol: TListView::PointToCaret(TPoint &, TRect *, TRect *)
 * Address: 0010f718
 */
TListView::PointToCaret(TPoint &, TRect *, TRect *) {
    /*
        10f718:	e1a0c00d 	mov	ip, sp
        10f71c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10f720:	e24cb004 	sub	fp, ip, #4	; 0x4
        10f724:	e1a04000 	mov	r4, r0
        10f728:	e1a09001 	mov	r9, r1
        10f72c:	e1a05002 	mov	r5, r2
        10f730:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10f734:	eb6aca81 	bl	1bc2140 <$AllocateFrame(void)>
        10f738:	eb6aca83 	bl	1bc214c <$AllocateRefHandle(long)>
        10f73c:	e58d0008 	str	r0, [sp, #8]	; fField8
        10f740:	e2840010 	add	r0, r4, #16	; 0x10
        10f744:	e1a0a000 	mov	sl, r0
        10f748:	e8905000 	ldmia	r0, {ip, lr}
        10f74c:	e88d5000 	stmia	sp, {ip, lr}
        10f750:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
        10f754:	e2411501 	sub	r1, r1, #4194304	; 0x400000
        10f758:	e5c51005 	strb	r1, [r5, #5]
        10f75c:	e3e0007f 	mvn	r0, #127	; 0x7f
        10f760:	e5c50004 	strb	r0, [r5, #4]
        10f764:	e5c51001 	strb	r1, [r5, #1]
        10f768:	e5c50000 	strb	r0, [r5]
        10f76c:	e5990000 	ldr	r0, [r9]
        10f770:	e1a00840 	mov	r0, r0, asr #16
        10f774:	e59d1000 	ldr	r1, [sp]
        10f778:	e0401841 	sub	r1, r0, r1, asr #16
        10f77c:	e1a00004 	mov	r0, r4
        10f780:	eb66ef93 	bl	1acb5d4 <TListView::$IndexFromY(long)>
        10f784:	e1a06000 	mov	r6, r0
        10f788:	e5840054 	str	r0, [r4, #84]	; fField84
        10f78c:	e59f8054 	ldr	r8, [pc, #54]	; 10f7e8 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0xd0>
        10f790:	e2847024 	add	r7, r4, #36	; 0x24
        10f794:	e3700002 	cmn	r0, #2	; 0x2
        10f798:	1a00001c 	bne	10f810 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0xf8>
        10f79c:	e24dd008 	sub	sp, sp, #8	; 0x8
        10f7a0:	e1a00100 	mov	r0, r0, lsl #2
        10f7a4:	eb6aca68 	bl	1bc214c <$AllocateRefHandle(long)>
        10f7a8:	e58d0000 	str	r0, [sp]
        10f7ac:	e1a0200d 	mov	r2, sp
        10f7b0:	e1a01008 	mov	r1, r8
        10f7b4:	e28d0010 	add	r0, sp, #16	; 0x10
        10f7b8:	eb6adaea 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10f7bc:	e59d0000 	ldr	r0, [sp]
        10f7c0:	eb6ace7d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f7c4:	e3a00004 	mov	r0, #4	; 0x4
        10f7c8:	eb6aca5f 	bl	1bc214c <$AllocateRefHandle(long)>
        10f7cc:	e58d0004 	str	r0, [sp, #4]
        10f7d0:	e28d2004 	add	r2, sp, #4	; 0x4
        10f7d4:	e59f1010 	ldr	r1, [pc, #10]	; 10f7ec <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0xd4>
        10f7d8:	e28d0010 	add	r0, sp, #16	; 0x10
        10f7dc:	eb6adae1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10f7e0:	e59d0004 	ldr	r0, [sp, #4]
        10f7e4:	ea000066 	b	10f984 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x26c>
        10f7e8:	006831c0 	rsbeq	r3, r8, r0, asr #3
        10f7ec:	00683540 	rsbeq	r3, r8, r0, asr #10
        10f7f0:	e1a00007 	mov	r0, r7
        10f7f4:	e28d2010 	add	r2, sp, #16	; 0x10
        10f7f8:	e59f100c 	ldr	r1, [pc, #c]	; 10f80c <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0xf4>
        10f7fc:	eb6adad9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10f800:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        10f804:	eb6ace6c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f808:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10f80c:	00682a88 	rsbeq	r2, r8, r8, lsl #21
        10f810:	e5940050 	ldr	r0, [r4, #80]	; fField80
        10f814:	e1300006 	teq	r0, r6
        10f818:	02466001 	subeq	r6, r6, #1	; 0x1
        10f81c:	05846054 	streq	r6, [r4, #84]	; fField84
        10f820:	e3760001 	cmn	r6, #1	; 0x1
        10f824:	03a00001 	moveq	r0, #1	; 0x1
        10f828:	0a000004 	beq	10f840 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x128>
        10f82c:	e5991002 	ldr	r1, [r9, #2]
        10f830:	e1a01841 	mov	r1, r1, asr #16
        10f834:	e1a02006 	mov	r2, r6
        10f838:	e1a00004 	mov	r0, r4
        10f83c:	eb66ef66 	bl	1acb5dc <TListView::$LevelFromX(long, long)>
        10f840:	e5840058 	str	r0, [r4, #88]	; fField88
        10f844:	e5940050 	ldr	r0, [r4, #80]	; fField80
        10f848:	e3700002 	cmn	r0, #2	; 0x2
        10f84c:	0a000003 	beq	10f860 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x148>
        10f850:	e2400001 	sub	r0, r0, #1	; 0x1
        10f854:	e1300006 	teq	r0, r6
        10f858:	03a00001 	moveq	r0, #1	; 0x1
        10f85c:	0a000000 	beq	10f864 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x14c>
        10f860:	e3a00000 	mov	r0, #0	; 0x0
        10f864:	e21090ff 	ands	r9, r0, #255	; 0xff
        10f868:	1a000022 	bne	10f8f8 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x1e0>
        10f86c:	e3760001 	cmn	r6, #1	; 0x1
        10f870:	0a000020 	beq	10f8f8 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x1e0>
        10f874:	e1a00004 	mov	r0, r4
        10f878:	eb66ef5a 	bl	1acb5e8 <TListView::$NTopics(void)>
        10f87c:	e2400001 	sub	r0, r0, #1	; 0x1
        10f880:	e1500006 	cmp	r0, r6
        10f884:	da00001b 	ble	10f8f8 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x1e0>
        10f888:	e2861001 	add	r1, r6, #1	; 0x1
        10f88c:	e1a00004 	mov	r0, r4
        10f890:	eb66f362 	bl	1acc620 <TListView::$TopicLevel(long)>
        10f894:	e5941058 	ldr	r1, [r4, #88]	; fField88
        10f898:	e1500001 	cmp	r0, r1
        10f89c:	da000015 	ble	10f8f8 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x1e0>
        10f8a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        10f8a4:	e3e00001 	mvn	r0, #1	; 0x1
        10f8a8:	e5840054 	str	r0, [r4, #84]	; fField84
        10f8ac:	e3e00007 	mvn	r0, #7	; 0x7
        10f8b0:	eb6aca25 	bl	1bc214c <$AllocateRefHandle(long)>
        10f8b4:	e58d0000 	str	r0, [sp]
        10f8b8:	e1a0200d 	mov	r2, sp
        10f8bc:	e1a01008 	mov	r1, r8
        10f8c0:	e28d0010 	add	r0, sp, #16	; 0x10
        10f8c4:	eb6adaa7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10f8c8:	e59d0000 	ldr	r0, [sp]
        10f8cc:	eb6ace3a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f8d0:	e5b40058 	ldr	r0, [r4, #88]!	; fField88
        10f8d4:	e1a00100 	mov	r0, r0, lsl #2
        10f8d8:	eb6aca1b 	bl	1bc214c <$AllocateRefHandle(long)>
        10f8dc:	e58d0004 	str	r0, [sp, #4]
        10f8e0:	e28d2004 	add	r2, sp, #4	; 0x4
        10f8e4:	e51f1100 	ldr	r1, [pc, #ffffff00]	; 10f7ec <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0xd4>
        10f8e8:	e28d0010 	add	r0, sp, #16	; 0x10
        10f8ec:	eb6ada9d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10f8f0:	e59d0004 	ldr	r0, [sp, #4]
        10f8f4:	ea000022 	b	10f984 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x26c>
        10f8f8:	e5941050 	ldr	r1, [r4, #80]	; fField80
        10f8fc:	e3710002 	cmn	r1, #2	; 0x2
        10f900:	0a000021 	beq	10f98c <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x274>
        10f904:	e3390000 	teq	r9, #0	; 0x0
        10f908:	1a00001f 	bne	10f98c <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x274>
        10f90c:	e1510006 	cmp	r1, r6
        10f910:	aa00001d 	bge	10f98c <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x274>
        10f914:	e1a00004 	mov	r0, r4
        10f918:	eb66ef25 	bl	1acb5b4 <TListView::$FamilySize(long)>
        10f91c:	e5941050 	ldr	r1, [r4, #80]	; fField80
        10f920:	e0800001 	add	r0, r0, r1
        10f924:	e2400001 	sub	r0, r0, #1	; 0x1
        10f928:	e1500006 	cmp	r0, r6
        10f92c:	ba000016 	blt	10f98c <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x274>
        10f930:	e24dd008 	sub	sp, sp, #8	; 0x8
        10f934:	e3e00001 	mvn	r0, #1	; 0x1
        10f938:	e5840054 	str	r0, [r4, #84]	; fField84
        10f93c:	e3e00007 	mvn	r0, #7	; 0x7
        10f940:	eb6aca01 	bl	1bc214c <$AllocateRefHandle(long)>
        10f944:	e58d0000 	str	r0, [sp]
        10f948:	e1a0200d 	mov	r2, sp
        10f94c:	e1a01008 	mov	r1, r8
        10f950:	e28d0010 	add	r0, sp, #16	; 0x10
        10f954:	eb6ada83 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10f958:	e59d0000 	ldr	r0, [sp]
        10f95c:	eb6ace16 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f960:	e5b40058 	ldr	r0, [r4, #88]!	; fField88
        10f964:	e1a00100 	mov	r0, r0, lsl #2
        10f968:	eb6ac9f7 	bl	1bc214c <$AllocateRefHandle(long)>
        10f96c:	e58d0004 	str	r0, [sp, #4]
        10f970:	e28d2004 	add	r2, sp, #4	; 0x4
        10f974:	e51f1190 	ldr	r1, [pc, #fffffe70]	; 10f7ec <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0xd4>
        10f978:	e28d0010 	add	r0, sp, #16	; 0x10
        10f97c:	eb6ada79 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10f980:	e59d0004 	ldr	r0, [sp, #4]
        10f984:	eb6ace0c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10f988:	eaffff98 	b	10f7f0 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0xd8>
        10f98c:	e1a00004 	mov	r0, r4
        10f990:	eb66ef0a 	bl	1acb5c0 <TListView::$GadgetWidth(void)>
        10f994:	e5941058 	ldr	r1, [r4, #88]	; fField88
        10f998:	e2411001 	sub	r1, r1, #1	; 0x1
        10f99c:	e0811101 	add	r1, r1, r1, lsl #2
        10f9a0:	e0800101 	add	r0, r0, r1, lsl #2
        10f9a4:	e5c50003 	strb	r0, [r5, #3]
        10f9a8:	e1a00440 	mov	r0, r0, asr #8
        10f9ac:	e5c50002 	strb	r0, [r5, #2]
        10f9b0:	e59a1006 	ldr	r1, [sl, #6]
        10f9b4:	e5950002 	ldr	r0, [r5, #2]
        10f9b8:	e1a00840 	mov	r0, r0, asr #16
        10f9bc:	e1300841 	teq	r0, r1, asr #16
        10f9c0:	1a000003 	bne	10f9d4 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x2bc>
        10f9c4:	e2400011 	sub	r0, r0, #17	; 0x11
        10f9c8:	e5c50003 	strb	r0, [r5, #3]
        10f9cc:	e1a00440 	mov	r0, r0, asr #8
        10f9d0:	e5c50002 	strb	r0, [r5, #2]
        10f9d4:	e1a00004 	mov	r0, r4
        10f9d8:	eb66f316 	bl	1acc638 <TListView::$Topics(void)>
        10f9dc:	eb6ac9da 	bl	1bc214c <$AllocateRefHandle(long)>
        10f9e0:	e1a0a000 	mov	sl, r0
        10f9e4:	e24dd008 	sub	sp, sp, #8	; 0x8
        10f9e8:	e3760001 	cmn	r6, #1	; 0x1
        10f9ec:	03a00000 	moveq	r0, #0	; 0x0
        10f9f0:	05c50001 	streqb	r0, [r5, #1]
        10f9f4:	0a00000b 	beq	10fa28 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x310>
        10f9f8:	e59a0000 	ldr	r0, [sl]
        10f9fc:	eb6ad62a 	bl	1bc52ac <$Length(long)>
        10fa00:	e1500006 	cmp	r0, r6
        10fa04:	ca000009 	bgt	10fa30 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x318>
        10fa08:	e1a00007 	mov	r0, r7
        10fa0c:	eb66eee0 	bl	1acb594 <$FListBottom>
        10fa10:	e3100003 	tst	r0, #3	; 0x3
        10fa14:	01a00140 	moveq	r0, r0, asr #2
        10fa18:	0a000000 	beq	10fa20 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x308>
        10fa1c:	eb6ac9be 	bl	1bc211c <$_RINTError(long)>
        10fa20:	e5c50001 	strb	r0, [r5, #1]
        10fa24:	e1a00440 	mov	r0, r0, asr #8
        10fa28:	e5c50000 	strb	r0, [r5]
        10fa2c:	ea000035 	b	10fb08 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x3f0>
        10fa30:	e24dd004 	sub	sp, sp, #4	; 0x4
        10fa34:	e3390000 	teq	r9, #0	; 0x0
        10fa38:	0a00000c 	beq	10fa70 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x358>
        10fa3c:	e5941050 	ldr	r1, [r4, #80]	; fField80
        10fa40:	e59a0000 	ldr	r0, [sl]
        10fa44:	eb6ad202 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10fa48:	eb6ac9bf 	bl	1bc214c <$AllocateRefHandle(long)>
        10fa4c:	e58d0000 	str	r0, [sp]
        10fa50:	e1a0000d 	mov	r0, sp
        10fa54:	eb66f2f3 	bl	1acc628 <$TopicTop(RefVar const &)>
        10fa58:	e5c50001 	strb	r0, [r5, #1]
        10fa5c:	e1a00440 	mov	r0, r0, asr #8
        10fa60:	e5c50000 	strb	r0, [r5]
        10fa64:	e59d0000 	ldr	r0, [sp]
        10fa68:	eb6acdd3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fa6c:	ea000024 	b	10fb04 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x3ec>
        10fa70:	e24dd004 	sub	sp, sp, #4	; 0x4
        10fa74:	e1a01006 	mov	r1, r6
        10fa78:	e59a0000 	ldr	r0, [sl]
        10fa7c:	eb6ad1f4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10fa80:	eb6ac9b1 	bl	1bc214c <$AllocateRefHandle(long)>
        10fa84:	e40d0004 	str	r0, [sp], -#4
        10fa88:	ea000005 	b	10faa4 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x38c>
        10fa8c:	e2466001 	sub	r6, r6, #1	; 0x1
        10fa90:	e1a01006 	mov	r1, r6
        10fa94:	e59a0000 	ldr	r0, [sl]
        10fa98:	eb6ad1ed 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10fa9c:	e59d1004 	ldr	r1, [sp, #4]
        10faa0:	e5810000 	str	r0, [r1]
        10faa4:	e28d0004 	add	r0, sp, #4	; 0x4
        10faa8:	eb66f2e0 	bl	1acc630 <$TopicVisible(RefVar const &)>
        10faac:	e3300000 	teq	r0, #0	; 0x0
        10fab0:	1a000001 	bne	10fabc <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x3a4>
        10fab4:	e3560000 	cmp	r6, #0	; 0x0
        10fab8:	cafffff3 	bgt	10fa8c <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x374>
        10fabc:	e3a00002 	mov	r0, #2	; 0x2
        10fac0:	eb6ac9a1 	bl	1bc214c <$AllocateRefHandle(long)>
        10fac4:	e58d0000 	str	r0, [sp]
        10fac8:	e1a0000d 	mov	r0, sp
        10facc:	e28d1004 	add	r1, sp, #4	; 0x4
        10fad0:	eb66eeb4 	bl	1acb5a8 <$FTopicBottom>
        10fad4:	e3100003 	tst	r0, #3	; 0x3
        10fad8:	01a00140 	moveq	r0, r0, asr #2
        10fadc:	0a000000 	beq	10fae4 <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0x3cc>
        10fae0:	eb6ac98d 	bl	1bc211c <$_RINTError(long)>
        10fae4:	e5c50001 	strb	r0, [r5, #1]
        10fae8:	e1a00440 	mov	r0, r0, asr #8
        10faec:	e5c50000 	strb	r0, [r5]
        10faf0:	e59d0000 	ldr	r0, [sp]
        10faf4:	eb6acdb0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10faf8:	e5bd0004 	ldr	r0, [sp, #4]!
        10fafc:	eb6acdae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fb00:	e28dd004 	add	sp, sp, #4	; 0x4
        10fb04:	e28dd004 	add	sp, sp, #4	; 0x4
        10fb08:	e5951002 	ldr	r1, [r5, #2]
        10fb0c:	e1a01821 	mov	r1, r1, lsr #16
        10fb10:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10fb14:	e0810000 	add	r0, r1, r0
        10fb18:	e5c50003 	strb	r0, [r5, #3]
        10fb1c:	e1a00440 	mov	r0, r0, asr #8
        10fb20:	e5c50002 	strb	r0, [r5, #2]
        10fb24:	e5951000 	ldr	r1, [r5]
        10fb28:	e1a01821 	mov	r1, r1, lsr #16
        10fb2c:	e59d000a 	ldr	r0, [sp, #10]
        10fb30:	e0810000 	add	r0, r1, r0
        10fb34:	e5c50001 	strb	r0, [r5, #1]
        10fb38:	e1a00440 	mov	r0, r0, asr #8
        10fb3c:	e5c50000 	strb	r0, [r5]
        10fb40:	e5950002 	ldr	r0, [r5, #2]
        10fb44:	e1a00820 	mov	r0, r0, lsr #16
        10fb48:	e2800010 	add	r0, r0, #16	; 0x10
        10fb4c:	e5c50007 	strb	r0, [r5, #7]
        10fb50:	e1a00440 	mov	r0, r0, asr #8
        10fb54:	e5c50006 	strb	r0, [r5, #6]
        10fb58:	e5950000 	ldr	r0, [r5]
        10fb5c:	e1a00820 	mov	r0, r0, lsr #16
        10fb60:	e2800002 	add	r0, r0, #2	; 0x2
        10fb64:	e5c50005 	strb	r0, [r5, #5]
        10fb68:	e1a00440 	mov	r0, r0, asr #8
        10fb6c:	e5c50004 	strb	r0, [r5, #4]
        10fb70:	e5940054 	ldr	r0, [r4, #84]	; fField84
        10fb74:	e1a00100 	mov	r0, r0, lsl #2
        10fb78:	eb6ac973 	bl	1bc214c <$AllocateRefHandle(long)>
        10fb7c:	e58d0000 	str	r0, [sp]
        10fb80:	e1a0200d 	mov	r2, sp
        10fb84:	e1a01008 	mov	r1, r8
        10fb88:	e28d0010 	add	r0, sp, #16	; 0x10
        10fb8c:	eb6ad9f5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10fb90:	e59d0000 	ldr	r0, [sp]
        10fb94:	eb6acd88 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fb98:	e5b40058 	ldr	r0, [r4, #88]!	; fField88
        10fb9c:	e1a00100 	mov	r0, r0, lsl #2
        10fba0:	eb6ac969 	bl	1bc214c <$AllocateRefHandle(long)>
        10fba4:	e58d0004 	str	r0, [sp, #4]
        10fba8:	e28d2004 	add	r2, sp, #4	; 0x4
        10fbac:	e51f13c8 	ldr	r1, [pc, #fffffc38]	; 10f7ec <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0xd4>
        10fbb0:	e28d0010 	add	r0, sp, #16	; 0x10
        10fbb4:	eb6ad9eb 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10fbb8:	e59d0004 	ldr	r0, [sp, #4]
        10fbbc:	eb6acd7e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fbc0:	e1a00007 	mov	r0, r7
        10fbc4:	e28d2010 	add	r2, sp, #16	; 0x10
        10fbc8:	e51f13c4 	ldr	r1, [pc, #fffffc3c]	; 10f80c <TListView::PointToCaret(TPoint &, TRect *, TRect *)+0xf4>
        10fbcc:	eb6ad9e5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10fbd0:	e28dd008 	add	sp, sp, #8	; 0x8
        10fbd4:	e1a0000a 	mov	r0, sl
        10fbd8:	eb6acd77 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fbdc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10fbe0:	eb6acd75 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fbe4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::RealDoCommand(RefVar const &)
 * Address: 0010fbe8
 */
TListView::RealDoCommand(RefVar const &) {
    /*
        10fbe8:	e1a0c00d 	mov	ip, sp
        10fbec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10fbf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        10fbf4:	e1a05000 	mov	r5, r0
        10fbf8:	e1a04001 	mov	r4, r1
        10fbfc:	e3a06000 	mov	r6, #0	; 0x0
        10fc00:	e1a00001 	mov	r0, r1
        10fc04:	eb6659cf 	bl	1aa6348 <$CommandID(RefVar const &)>
        10fc08:	e330000b 	teq	r0, #11	; 0xb
        10fc0c:	1a000009 	bne	10fc38 <TListView::RealDoCommand(RefVar const &)+0x50>
        10fc10:	e5950008 	ldr	r0, [r5, #8]	; fField8
        10fc14:	e3100c02 	tst	r0, #512	; 0x200
        10fc18:	0a00000a 	beq	10fc48 <TListView::RealDoCommand(RefVar const &)+0x60>
        10fc1c:	e1a01004 	mov	r1, r4
        10fc20:	e1a00005 	mov	r0, r5
        10fc24:	e5952000 	ldr	r2, [r5]
        10fc28:	e1a0e00f 	mov	lr, pc
        10fc2c:	e282ff4b 	add	pc, r2, #300	; 0x12c
        10fc30:	e1b06000 	movs	r6, r0
        10fc34:	1a000003 	bne	10fc48 <TListView::RealDoCommand(RefVar const &)+0x60>
        10fc38:	e1a01004 	mov	r1, r4
        10fc3c:	e1a00005 	mov	r0, r5
        10fc40:	eb6640d4 	bl	1a9ff98 <TEditView::$RealDoCommand(RefVar const &)>
        10fc44:	e1a06000 	mov	r6, r0
        10fc48:	e1a00006 	mov	r0, r6
        10fc4c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::Constructor(RefVar const &, TView *)
 * Address: 0010fc50
 */
TListView::Constructor(RefVar const &, TView *) {
    /*
        10fc50:	e1a0c00d 	mov	ip, sp
        10fc54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10fc58:	e24cb004 	sub	fp, ip, #4	; 0x4
        10fc5c:	e1a04000 	mov	r4, r0
        10fc60:	eb65f69d 	bl	1a8d6dc <TEditView::$Constructor(RefVar const &, TView *)>
        10fc64:	e3e00001 	mvn	r0, #1	; 0x1
        10fc68:	e5a40050 	str	r0, [r4, #80]!	; fField80
        10fc6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::RealDraw(TRect &)
 * Address: 0010fc70
 */
TListView::RealDraw(TRect &) {
    /*
        10fc70:	e1a0c00d 	mov	ip, sp
        10fc74:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10fc78:	e24cb004 	sub	fp, ip, #4	; 0x4
        10fc7c:	e1a04000 	mov	r4, r0
        10fc80:	e1a05001 	mov	r5, r1
        10fc84:	e24dd020 	sub	sp, sp, #32	; 0x20
        10fc88:	e3a00002 	mov	r0, #2	; 0x2
        10fc8c:	eb6ac92e 	bl	1bc214c <$AllocateRefHandle(long)>
        10fc90:	e58d000c 	str	r0, [sp, #12]
        10fc94:	e1a00004 	mov	r0, r4
        10fc98:	eb66f266 	bl	1acc638 <TListView::$Topics(void)>
        10fc9c:	eb6ac92a 	bl	1bc214c <$AllocateRefHandle(long)>
        10fca0:	e58d0008 	str	r0, [sp, #8]	; fField8
        10fca4:	e59f1178 	ldr	r1, [pc, #178]	; 10fe24 <TListView::RealDraw(TRect &)+0x1b4>
        10fca8:	e1a00004 	mov	r0, r4
        10fcac:	eb6aea25 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        10fcb0:	e3100003 	tst	r0, #3	; 0x3
        10fcb4:	01a00140 	moveq	r0, r0, asr #2
        10fcb8:	0a000000 	beq	10fcc0 <TListView::RealDraw(TRect &)+0x50>
        10fcbc:	eb6ac916 	bl	1bc211c <$_RINTError(long)>
        10fcc0:	e1a07000 	mov	r7, r0
        10fcc4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        10fcc8:	e1a00840 	mov	r0, r0, asr #16
        10fccc:	e5951000 	ldr	r1, [r5]
        10fcd0:	e1a01821 	mov	r1, r1, lsr #16
        10fcd4:	e0411000 	sub	r1, r1, r0
        10fcd8:	e1a01801 	mov	r1, r1, lsl #16
        10fcdc:	e1a01841 	mov	r1, r1, asr #16
        10fce0:	e58d1004 	str	r1, [sp, #4]
        10fce4:	e5951004 	ldr	r1, [r5, #4]
        10fce8:	e1a01821 	mov	r1, r1, lsr #16
        10fcec:	e0410000 	sub	r0, r1, r0
        10fcf0:	e1a01800 	mov	r1, r0, lsl #16
        10fcf4:	e1a01841 	mov	r1, r1, asr #16
        10fcf8:	e3a09000 	mov	r9, #0	; 0x0
        10fcfc:	e3a08000 	mov	r8, #0	; 0x0
        10fd00:	e58d1000 	str	r1, [sp]
        10fd04:	e59f111c 	ldr	r1, [pc, #11c]	; 10fe28 <TListView::RealDraw(TRect &)+0x1b8>
        10fd08:	e1a00004 	mov	r0, r4
        10fd0c:	eb6aea0d 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        10fd10:	eb6ac90d 	bl	1bc214c <$AllocateRefHandle(long)>
        10fd14:	e1a06000 	mov	r6, r0
        10fd18:	e59f110c 	ldr	r1, [pc, #10c]	; 10fe2c <TListView::RealDraw(TRect &)+0x1bc>
        10fd1c:	e1a00004 	mov	r0, r4
        10fd20:	eb6aea08 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        10fd24:	eb6ac908 	bl	1bc214c <$AllocateRefHandle(long)>
        10fd28:	e1a05000 	mov	r5, r0
        10fd2c:	e59f10fc 	ldr	r1, [pc, #fc]	; 10fe30 <TListView::RealDraw(TRect &)+0x1c0>
        10fd30:	e1a00004 	mov	r0, r4
        10fd34:	eb6aea07 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        10fd38:	e3300002 	teq	r0, #2	; 0x2
        10fd3c:	0a000010 	beq	10fd84 <TListView::RealDraw(TRect &)+0x114>
        10fd40:	e3a08001 	mov	r8, #1	; 0x1
        10fd44:	e59f10e8 	ldr	r1, [pc, #e8]	; 10fe34 <TListView::RealDraw(TRect &)+0x1c4>
        10fd48:	e1a00004 	mov	r0, r4
        10fd4c:	eb6aea01 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        10fd50:	eb6ac8fd 	bl	1bc214c <$AllocateRefHandle(long)>
        10fd54:	e1a0a000 	mov	sl, r0
        10fd58:	e59f00d8 	ldr	r0, [pc, #d8]	; 10fe38 <TListView::RealDraw(TRect &)+0x1c8>
        10fd5c:	e5900000 	ldr	r0, [r0]
        10fd60:	e5901000 	ldr	r1, [r0]
        10fd64:	e59a0000 	ldr	r0, [sl]
        10fd68:	eb6ad130 	bl	1bc4230 <$EQRef__FlT1>
        10fd6c:	e3300000 	teq	r0, #0	; 0x0
        10fd70:	13a00000 	movne	r0, #0	; 0x0
        10fd74:	03a00001 	moveq	r0, #1	; 0x1
        10fd78:	e20090ff 	and	r9, r0, #255	; 0xff
        10fd7c:	e1a0000a 	mov	r0, sl
        10fd80:	eb6acd0d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fd84:	e24dd030 	sub	sp, sp, #48	; 0x30
        10fd88:	e28d1038 	add	r1, sp, #56	; 0x38
        10fd8c:	e1a0000d 	mov	r0, sp
        10fd90:	e3a02000 	mov	r2, #0	; 0x0
        10fd94:	eb6ac4d5 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        10fd98:	e1a0000d 	mov	r0, sp
        10fd9c:	eb6acd0e 	bl	1bc31dc <TObjectIterator::$Done(void)>
        10fda0:	e3300000 	teq	r0, #0	; 0x0
        10fda4:	1a000062 	bne	10ff34 <TListView::RealDraw(TRect &)+0x2c4>
        10fda8:	e28d1004 	add	r1, sp, #4	; 0x4
        10fdac:	e58d104c 	str	r1, [sp, #76]
        10fdb0:	e207100c 	and	r1, r7, #12	; 0xc
        10fdb4:	e58d1048 	str	r1, [sp, #72]
        10fdb8:	e2071001 	and	r1, r7, #1	; 0x1
        10fdbc:	e2070002 	and	r0, r7, #2	; 0x2
        10fdc0:	e2844024 	add	r4, r4, #36	; 0x24
        10fdc4:	e58d0040 	str	r0, [sp, #64]
        10fdc8:	e58d1044 	str	r1, [sp, #68]
        10fdcc:	e59d0004 	ldr	r0, [sp, #4]
        10fdd0:	e5900000 	ldr	r0, [r0]
        10fdd4:	e1a01000 	mov	r1, r0
        10fdd8:	e5962000 	ldr	r2, [r6]
        10fddc:	e1500002 	cmp	r0, r2
        10fde0:	ba00004d 	blt	10ff1c <TListView::RealDraw(TRect &)+0x2ac>
        10fde4:	e5950000 	ldr	r0, [r5]
        10fde8:	e3300002 	teq	r0, #2	; 0x2
        10fdec:	0a000001 	beq	10fdf8 <TListView::RealDraw(TRect &)+0x188>
        10fdf0:	e1510000 	cmp	r1, r0
        10fdf4:	ca00004e 	bgt	10ff34 <TListView::RealDraw(TRect &)+0x2c4>
        10fdf8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10fdfc:	e5900000 	ldr	r0, [r0]
        10fe00:	e59d103c 	ldr	r1, [sp, #60]
        10fe04:	e3590000 	cmp	r9, #0	; 0x0
        10fe08:	e5810000 	str	r0, [r1]
        10fe0c:	1a00000a 	bne	10fe3c <TListView::RealDraw(TRect &)+0x1cc>
        10fe10:	e28d003c 	add	r0, sp, #60	; 0x3c
        10fe14:	eb66f205 	bl	1acc630 <$TopicVisible(RefVar const &)>
        10fe18:	e3300000 	teq	r0, #0	; 0x0
        10fe1c:	0a00003e 	beq	10ff1c <TListView::RealDraw(TRect &)+0x2ac>
        10fe20:	ea000006 	b	10fe40 <TListView::RealDraw(TRect &)+0x1d0>
        10fe24:	006835d0 	ldreqd	r3, [r8], -#80	; fField80
        10fe28:	00682dd0 	ldreqd	r2, [r8], -#208
        10fe2c:	006834a8 	rsbeq	r3, r8, r8, lsr #9
        10fe30:	00684208 	rsbeq	r4, r8, r8, lsl #4
        10fe34:	00684218 	rsbeq	r4, r8, r8, lsl r2
        10fe38:	00685118 	rsbeq	r5, r8, r8, lsl r1
        10fe3c:	1a000015 	bne	10fe98 <TListView::RealDraw(TRect &)+0x228>
        10fe40:	e28d003c 	add	r0, sp, #60	; 0x3c
        10fe44:	eb66f1f7 	bl	1acc628 <$TopicTop(RefVar const &)>
        10fe48:	e59d1030 	ldr	r1, [sp, #48]
        10fe4c:	e1500001 	cmp	r0, r1
        10fe50:	da00000c 	ble	10fe88 <TListView::RealDraw(TRect &)+0x218>
        10fe54:	e1a0000d 	mov	r0, sp
        10fe58:	e3a01000 	mov	r1, #0	; 0x0
        10fe5c:	e1a0e00f 	mov	lr, pc
        10fe60:	e59df000 	ldr	pc, [sp]
        10fe64:	e1a00005 	mov	r0, r5
        10fe68:	eb6accd3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fe6c:	e1a00006 	mov	r0, r6
        10fe70:	eb6accd1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fe74:	e59d0038 	ldr	r0, [sp, #56]
        10fe78:	eb6acccf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fe7c:	e59d003c 	ldr	r0, [sp, #60]
        10fe80:	eb6acccd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10fe84:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10fe88:	e2800010 	add	r0, r0, #16	; 0x10
        10fe8c:	e59d1034 	ldr	r1, [sp, #52]
        10fe90:	e1500001 	cmp	r0, r1
        10fe94:	ba000020 	blt	10ff1c <TListView::RealDraw(TRect &)+0x2ac>
        10fe98:	e3a0a001 	mov	sl, #1	; 0x1
        10fe9c:	e3380000 	teq	r8, #0	; 0x0
        10fea0:	1a000004 	bne	10feb8 <TListView::RealDraw(TRect &)+0x248>
        10fea4:	e1a00004 	mov	r0, r4
        10fea8:	e59d104c 	ldr	r1, [sp, #76]
        10feac:	eb66edb7 	bl	1acb590 <$FIsCollapsed>
        10feb0:	e3300002 	teq	r0, #2	; 0x2
        10feb4:	03a0a000 	moveq	sl, #0	; 0x0
        10feb8:	e59d0048 	ldr	r0, [sp, #72]
        10febc:	e3300000 	teq	r0, #0	; 0x0
        10fec0:	0a000005 	beq	10fedc <TListView::RealDraw(TRect &)+0x26c>
        10fec4:	e1a00004 	mov	r0, r4
        10fec8:	e1a02007 	mov	r2, r7
        10fecc:	e28d103c 	add	r1, sp, #60	; 0x3c
        10fed0:	e3a03000 	mov	r3, #0	; 0x0
        10fed4:	eb66e9a3 	bl	1aca568 <$DrawPriority__FRC6RefVarT1ls>
        10fed8:	ea000007 	b	10fefc <TListView::RealDraw(TRect &)+0x28c>
        10fedc:	e59d0044 	ldr	r0, [sp, #68]
        10fee0:	e3300000 	teq	r0, #0	; 0x0
        10fee4:	1a000004 	bne	10fefc <TListView::RealDraw(TRect &)+0x28c>
        10fee8:	e1a00004 	mov	r0, r4
        10feec:	e1a0200a 	mov	r2, sl
        10fef0:	e28d103c 	add	r1, sp, #60	; 0x3c
        10fef4:	e3a03000 	mov	r3, #0	; 0x0
        10fef8:	eb66e99c 	bl	1aca570 <$DrawTopicMarker__FRC6RefVarT1ls>
        10fefc:	e59d0040 	ldr	r0, [sp, #64]
        10ff00:	e3300000 	teq	r0, #0	; 0x0
        10ff04:	0a000004 	beq	10ff1c <TListView::RealDraw(TRect &)+0x2ac>
        10ff08:	e1a00004 	mov	r0, r4
        10ff0c:	e1a02007 	mov	r2, r7
        10ff10:	e28d103c 	add	r1, sp, #60	; 0x3c
        10ff14:	e3e03000 	mvn	r3, #0	; 0x0
        10ff18:	eb66e991 	bl	1aca564 <$DrawCheck__FRC6RefVarT1lT3>
        10ff1c:	e1a0000d 	mov	r0, sp
        10ff20:	eb6ad4f0 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        10ff24:	e1a0000d 	mov	r0, sp
        10ff28:	eb6accab 	bl	1bc31dc <TObjectIterator::$Done(void)>
        10ff2c:	e3300000 	teq	r0, #0	; 0x0
        10ff30:	0affffa5 	beq	10fdcc <TListView::RealDraw(TRect &)+0x15c>
        10ff34:	e1a0000d 	mov	r0, sp
        10ff38:	e3a01000 	mov	r1, #0	; 0x0
        10ff3c:	e1a0e00f 	mov	lr, pc
        10ff40:	e59df000 	ldr	pc, [sp]
        10ff44:	e28dd030 	add	sp, sp, #48	; 0x30
        10ff48:	e1a00005 	mov	r0, r5
        10ff4c:	eb6acc9a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ff50:	e1a00006 	mov	r0, r6
        10ff54:	eb6acc98 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ff58:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10ff5c:	eb6acc96 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ff60:	e59d000c 	ldr	r0, [sp, #12]
        10ff64:	eb6acc94 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10ff68:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::Scrub(TUnitPublic *)
 * Address: 0010ff6c
 */
TListView::Scrub(TUnitPublic *) {
    /*
        10ff6c:	e1a0c00d 	mov	ip, sp
        10ff70:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        10ff74:	e24cb004 	sub	fp, ip, #4	; 0x4
        10ff78:	e1a04000 	mov	r4, r0
        10ff7c:	e1a05001 	mov	r5, r1
        10ff80:	e24dd0c4 	sub	sp, sp, #196	; 0xc4
        10ff84:	e1a0000d 	mov	r0, sp
        10ff88:	eb65e127 	bl	1a8842c <TAnimate::$__ct(void)>
        10ff8c:	e28d10bc 	add	r1, sp, #188	; 0xbc
        10ff90:	e1a00005 	mov	r0, r5
        10ff94:	eb65e975 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        10ff98:	e28d20bc 	add	r2, sp, #188	; 0xbc
        10ff9c:	e1a01004 	mov	r1, r4
        10ffa0:	e1a0000d 	mov	r0, sp
        10ffa4:	eb664870 	bl	1aa216c <TAnimate::$SetupPoofEffect(TView *, TRect const &)>
        10ffa8:	e28d10bc 	add	r1, sp, #188	; 0xbc
        10ffac:	e1a00004 	mov	r0, r4
        10ffb0:	eb66444a 	bl	1aa10e0 <TEditView::$ScrubHilite(TRect const &)>
        10ffb4:	e3a0a001 	mov	sl, #1	; 0x1
        10ffb8:	e3300000 	teq	r0, #0	; 0x0
        10ffbc:	13a06001 	movne	r6, #1	; 0x1
        10ffc0:	13a08001 	movne	r8, #1	; 0x1
        10ffc4:	1a000052 	bne	110114 <TListView::Scrub(TUnitPublic *)+0x1a8>
        10ffc8:	e24dd008 	sub	sp, sp, #8	; 0x8
        10ffcc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        10ffd0:	e58d0004 	str	r0, [sp, #4]
        10ffd4:	e59d0004 	ldr	r0, [sp, #4]
        10ffd8:	e2600000 	rsb	r0, r0, #0	; 0x0
        10ffdc:	e1a00800 	mov	r0, r0, lsl #16
        10ffe0:	e1a00840 	mov	r0, r0, asr #16
        10ffe4:	e59d1006 	ldr	r1, [sp, #6]
        10ffe8:	e2611000 	rsb	r1, r1, #0	; 0x0
        10ffec:	e1a01801 	mov	r1, r1, lsl #16
        10fff0:	e1a01841 	mov	r1, r1, asr #16
        10fff4:	e24dd004 	sub	sp, sp, #4	; 0x4
        10fff8:	e5cd0003 	strb	r0, [sp, #3]
        10fffc:	e1a00440 	mov	r0, r0, asr #8
        110000:	e5cd0002 	strb	r0, [sp, #2]
        110004:	e5cd1001 	strb	r1, [sp, #1]
        110008:	e1a00441 	mov	r0, r1, asr #8
        11000c:	e5cd0000 	strb	r0, [sp]
        110010:	e49d0004 	ldr	r0, [sp], #4
        110014:	e58d0000 	str	r0, [sp]
        110018:	e28d00c4 	add	r0, sp, #196	; 0xc4
        11001c:	e59d1002 	ldr	r1, [sp, #2]
        110020:	e1a01841 	mov	r1, r1, asr #16
        110024:	e59d2000 	ldr	r2, [sp]
        110028:	e1a02842 	mov	r2, r2, asr #16
        11002c:	eb69062d 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        110030:	e28dd004 	add	sp, sp, #4	; 0x4
        110034:	e3a00002 	mov	r0, #2	; 0x2
        110038:	eb662f57 	bl	1a9bd9c <$MakeArray(long)>
        11003c:	eb6ac842 	bl	1bc214c <$AllocateRefHandle(long)>
        110040:	e58d0000 	str	r0, [sp]
        110044:	e28d00c0 	add	r0, sp, #192	; 0xc0
        110048:	eb6b7dd3 	bl	1bef79c <$ToObject(TRect const &)>
        11004c:	eb6ac83e 	bl	1bc214c <$AllocateRefHandle(long)>
        110050:	e1a06000 	mov	r6, r0
        110054:	e5902000 	ldr	r2, [r0]
        110058:	e59d0000 	ldr	r0, [sp]
        11005c:	e5900000 	ldr	r0, [r0]
        110060:	e3a01000 	mov	r1, #0	; 0x0
        110064:	eb6ad8bb 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        110068:	e1a00006 	mov	r0, r6
        11006c:	eb6acc52 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110070:	e1a00005 	mov	r0, r5
        110074:	eb65e51c 	bl	1a894ec <$AddressToRef(void *)>
        110078:	eb6ac833 	bl	1bc214c <$AllocateRefHandle(long)>
        11007c:	e1a06000 	mov	r6, r0
        110080:	e5902000 	ldr	r2, [r0]
        110084:	e59d0000 	ldr	r0, [sp]
        110088:	e5900000 	ldr	r0, [r0]
        11008c:	e1a0100a 	mov	r1, sl
        110090:	eb6ad8b0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        110094:	e1a00006 	mov	r0, r6
        110098:	eb6acc47 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11009c:	e3a03000 	mov	r3, #0	; 0x0
        1100a0:	e92d0008 	stmdb	sp!, {r3}
        1100a4:	e28d2004 	add	r2, sp, #4	; 0x4
        1100a8:	e59f1094 	ldr	r1, [pc, #94]	; 110144 <TListView::Scrub(TUnitPublic *)+0x1d8>
        1100ac:	e1a00004 	mov	r0, r4
        1100b0:	e3a03001 	mov	r3, #1	; 0x1
        1100b4:	eb6aed49 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        1100b8:	e28dd004 	add	sp, sp, #4	; 0x4
        1100bc:	eb6ac822 	bl	1bc214c <$AllocateRefHandle(long)>
        1100c0:	e1a07000 	mov	r7, r0
        1100c4:	e5900000 	ldr	r0, [r0]
        1100c8:	e2500002 	subs	r0, r0, #2	; 0x2
        1100cc:	13a00001 	movne	r0, #1	; 0x1
        1100d0:	e20060ff 	and	r6, r0, #255	; 0xff
        1100d4:	e3a0001a 	mov	r0, #26	; 0x1a
        1100d8:	eb6ac81b 	bl	1bc214c <$AllocateRefHandle(long)>
        1100dc:	e1a09000 	mov	r9, r0
        1100e0:	e5901000 	ldr	r1, [r0]
        1100e4:	e5970000 	ldr	r0, [r7]
        1100e8:	eb6ad050 	bl	1bc4230 <$EQRef__FlT1>
        1100ec:	e20080ff 	and	r8, r0, #255	; 0xff
        1100f0:	e1a00009 	mov	r0, r9
        1100f4:	eb6acc30 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1100f8:	e1a00007 	mov	r0, r7
        1100fc:	eb6acc2e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110100:	e59d0000 	ldr	r0, [sp]
        110104:	eb6acc2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110108:	e28dd004 	add	sp, sp, #4	; 0x4
        11010c:	e3360000 	teq	r6, #0	; 0x0
        110110:	0a00000e 	beq	110150 <TListView::Scrub(TUnitPublic *)+0x1e4>
        110114:	e59f002c 	ldr	r0, [pc, #2c]	; 110148 <TListView::Scrub(TUnitPublic *)+0x1dc>
        110118:	e5900000 	ldr	r0, [r0]
        11011c:	e5c0a05c 	strb	sl, [r0, #92]
        110120:	e1a00005 	mov	r0, r5
        110124:	eb664c31 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        110128:	e3a01000 	mov	r1, #0	; 0x0
        11012c:	eb6626f2 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        110130:	e3380000 	teq	r8, #0	; 0x0
        110134:	159f1010 	ldrne	r1, [pc, #10]	; 11014c <TListView::Scrub(TUnitPublic *)+0x1e0>
        110138:	11a0000d 	movne	r0, sp
        11013c:	1b6601cb 	blne	1a90870 <TAnimate::$DoEffect(RefVar const &)>
        110140:	ea00001e 	b	1101c0 <TListView::Scrub(TUnitPublic *)+0x254>
        110144:	00683078 	rsbeq	r3, r8, r8, ror r0
        110148:	0c101934 	ldceq	9, cr1, [r0], -#208
        11014c:	00680628 	rsbeq	r0, r8, r8, lsr #12
        110150:	e24dd008 	sub	sp, sp, #8	; 0x8
        110154:	e2846024 	add	r6, r4, #36	; 0x24
        110158:	e1a07006 	mov	r7, r6
        11015c:	e3a0001a 	mov	r0, #26	; 0x1a
        110160:	eb6ac7f9 	bl	1bc214c <$AllocateRefHandle(long)>
        110164:	e58d0000 	str	r0, [sp]
        110168:	e1a0200d 	mov	r2, sp
        11016c:	e59f8078 	ldr	r8, [pc, #78]	; 1101ec <TListView::Scrub(TUnitPublic *)+0x280>
        110170:	e1a01008 	mov	r1, r8
        110174:	e1a00006 	mov	r0, r6
        110178:	eb6ad87a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        11017c:	e59d0000 	ldr	r0, [sp]
        110180:	eb6acc0d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110184:	e1a01005 	mov	r1, r5
        110188:	e1a00004 	mov	r0, r4
        11018c:	eb6643d0 	bl	1aa10d4 <TEditView::$Scrub(TUnitPublic *)>
        110190:	e1a06000 	mov	r6, r0
        110194:	e1a05007 	mov	r5, r7
        110198:	e3a00002 	mov	r0, #2	; 0x2
        11019c:	eb6ac7ea 	bl	1bc214c <$AllocateRefHandle(long)>
        1101a0:	e58d0004 	str	r0, [sp, #4]
        1101a4:	e28d2004 	add	r2, sp, #4	; 0x4
        1101a8:	e1a01008 	mov	r1, r8
        1101ac:	e1a00005 	mov	r0, r5
        1101b0:	eb6ad86c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1101b4:	e59d0004 	ldr	r0, [sp, #4]
        1101b8:	eb6acbff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1101bc:	e28dd008 	add	sp, sp, #8	; 0x8
        1101c0:	e28d10bc 	add	r1, sp, #188	; 0xbc
        1101c4:	e5b4201c 	ldr	r2, [r4, #28]!	; fField28
        1101c8:	e1a00002 	mov	r0, r2
        1101cc:	e5922000 	ldr	r2, [r2]
        1101d0:	e1a0e00f 	mov	lr, pc
        1101d4:	e282f054 	add	pc, r2, #84	; 0x54
        1101d8:	e1a0000d 	mov	r0, sp
        1101dc:	e3a01000 	mov	r1, #0	; 0x0
        1101e0:	ebfcca53 	bl	42b34 <TAnimate::__dt(void)>
        1101e4:	e1a00006 	mov	r0, r6
        1101e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1101ec:	00682a30 	rsbeq	r2, r8, r0, lsr sl
    */
}

/**
 * Symbol: TListView::SetupVisibleChildren(long, unsigned char, unsigned char)
 * Address: 001101f0
 */
TListView::SetupVisibleChildren(long, unsigned char, unsigned char) {
    /*
        1101f0:	e1a0c00d 	mov	ip, sp
        1101f4:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1101f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1101fc:	e1a04000 	mov	r4, r0
        110200:	e20200ff 	and	r0, r2, #255	; 0xff
        110204:	e52d0018 	str	r0, [sp, -#24]!
        110208:	e24dd034 	sub	sp, sp, #52	; 0x34
        11020c:	e3a00002 	mov	r0, #2	; 0x2
        110210:	eb6ac7cd 	bl	1bc214c <$AllocateRefHandle(long)>
        110214:	e58d0030 	str	r0, [sp, #48]
        110218:	e1a00004 	mov	r0, r4
        11021c:	eb66f105 	bl	1acc638 <TListView::$Topics(void)>
        110220:	eb6ac7c9 	bl	1bc214c <$AllocateRefHandle(long)>
        110224:	e3a06000 	mov	r6, #0	; 0x0
        110228:	e58d002c 	str	r0, [sp, #44]
        11022c:	e3a00002 	mov	r0, #2	; 0x2
        110230:	eb6ac7c5 	bl	1bc214c <$AllocateRefHandle(long)>
        110234:	e58d0028 	str	r0, [sp, #40]
        110238:	e3a00002 	mov	r0, #2	; 0x2
        11023c:	eb6ac7c2 	bl	1bc214c <$AllocateRefHandle(long)>
        110240:	e58d0024 	str	r0, [sp, #36]	; fField36
        110244:	e59f144c 	ldr	r1, [pc, #44c]	; 110698 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4a8>
        110248:	e1a00004 	mov	r0, r4
        11024c:	eb6ae8c1 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        110250:	e3300002 	teq	r0, #2	; 0x2
        110254:	13a00000 	movne	r0, #0	; 0x0
        110258:	03a00001 	moveq	r0, #1	; 0x1
        11025c:	e20000ff 	and	r0, r0, #255	; 0xff
        110260:	e58d0018 	str	r0, [sp, #24]
        110264:	e59f1430 	ldr	r1, [pc, #430]	; 11069c <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4ac>
        110268:	e1a00004 	mov	r0, r4
        11026c:	eb6ae8b5 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        110270:	e3100003 	tst	r0, #3	; 0x3
        110274:	01a00140 	moveq	r0, r0, asr #2
        110278:	0a000000 	beq	110280 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x90>
        11027c:	eb6ac7a6 	bl	1bc211c <$_RINTError(long)>
        110280:	e1a07000 	mov	r7, r0
        110284:	e3a0a000 	mov	sl, #0	; 0x0
        110288:	e2840010 	add	r0, r4, #16	; 0x10
        11028c:	e1a05000 	mov	r5, r0
        110290:	e5908006 	ldr	r8, [r0, #6]
        110294:	e1a08848 	mov	r8, r8, asr #16
        110298:	e28d9004 	add	r9, sp, #4	; 0x4
        11029c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1102a0:	e1a0000d 	mov	r0, sp
        1102a4:	eb6b7d3e 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1102a8:	e49d0004 	ldr	r0, [sp], #4
        1102ac:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1102b0:	e58d0000 	str	r0, [sp]
        1102b4:	e5900000 	ldr	r0, [r0]
        1102b8:	e2800004 	add	r0, r0, #4	; 0x4
        1102bc:	e8905000 	ldmia	r0, {ip, lr}
        1102c0:	e8895000 	stmia	r9, {ip, lr}
        1102c4:	e1a00005 	mov	r0, r5
        1102c8:	e28d2004 	add	r2, sp, #4	; 0x4
        1102cc:	e28d1004 	add	r1, sp, #4	; 0x4
        1102d0:	eb690dbd 	bl	1b539cc <$SectRect__FP4RectN21>
        1102d4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1102d8:	e5950000 	ldr	r0, [r5]
        1102dc:	e58d0004 	str	r0, [sp, #4]
        1102e0:	e59d0004 	ldr	r0, [sp, #4]
        1102e4:	e2600000 	rsb	r0, r0, #0	; 0x0
        1102e8:	e1a01800 	mov	r1, r0, lsl #16
        1102ec:	e1a01841 	mov	r1, r1, asr #16
        1102f0:	e59d0006 	ldr	r0, [sp, #6]
        1102f4:	e2600000 	rsb	r0, r0, #0	; 0x0
        1102f8:	e1a00800 	mov	r0, r0, lsl #16
        1102fc:	e1a00840 	mov	r0, r0, asr #16
        110300:	e24dd004 	sub	sp, sp, #4	; 0x4
        110304:	e5cd1003 	strb	r1, [sp, #3]
        110308:	e1a01441 	mov	r1, r1, asr #8
        11030c:	e5cd1002 	strb	r1, [sp, #2]
        110310:	e5cd0001 	strb	r0, [sp, #1]
        110314:	e1a00440 	mov	r0, r0, asr #8
        110318:	e5cd0000 	strb	r0, [sp]
        11031c:	e49d0004 	ldr	r0, [sp], #4
        110320:	e58d0000 	str	r0, [sp]
        110324:	e28d000c 	add	r0, sp, #12	; 0xc
        110328:	e59d1002 	ldr	r1, [sp, #2]
        11032c:	e1a01841 	mov	r1, r1, asr #16
        110330:	e59d2000 	ldr	r2, [sp]
        110334:	e1a02842 	mov	r2, r2, asr #16
        110338:	eb69056a 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        11033c:	e28dd008 	add	sp, sp, #8	; 0x8
        110340:	e59f1358 	ldr	r1, [pc, #358]	; 1106a0 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4b0>
        110344:	e1a00004 	mov	r0, r4
        110348:	eb6ae87e 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        11034c:	e3100003 	tst	r0, #3	; 0x3
        110350:	01a00140 	moveq	r0, r0, asr #2
        110354:	0a000000 	beq	11035c <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x16c>
        110358:	eb6ac76f 	bl	1bc211c <$_RINTError(long)>
        11035c:	e0800008 	add	r0, r0, r8
        110360:	e1a03800 	mov	r3, r0, lsl #16
        110364:	e1a03843 	mov	r3, r3, asr #16
        110368:	e58d300c 	str	r3, [sp, #12]
        11036c:	e24dd004 	sub	sp, sp, #4	; 0x4
        110370:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        110374:	e59f1328 	ldr	r1, [pc, #328]	; 1106a4 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4b4>
        110378:	e2845024 	add	r5, r4, #36	; 0x24
        11037c:	e3300000 	teq	r0, #0	; 0x0
        110380:	e58d104c 	str	r1, [sp, #76]
        110384:	1a00000b 	bne	1103b8 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x1c8>
        110388:	e1a00004 	mov	r0, r4
        11038c:	eb66ec95 	bl	1acb5e8 <TListView::$NTopics(void)>
        110390:	e2400001 	sub	r0, r0, #1	; 0x1
        110394:	e1a00100 	mov	r0, r0, lsl #2
        110398:	eb6ac76b 	bl	1bc214c <$AllocateRefHandle(long)>
        11039c:	e58d0000 	str	r0, [sp]
        1103a0:	e1a0200d 	mov	r2, sp
        1103a4:	e1a00005 	mov	r0, r5
        1103a8:	e59d104c 	ldr	r1, [sp, #76]
        1103ac:	eb6ad7ef 	bl	1bc6370 <$SetVariable__FRC6RefVarN21>
        1103b0:	e59d0000 	ldr	r0, [sp]
        1103b4:	eb6acb80 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1103b8:	e3a01000 	mov	r1, #0	; 0x0
        1103bc:	e3a00000 	mov	r0, #0	; 0x0
        1103c0:	eb68f094 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        1103c4:	e1a00004 	mov	r0, r4
        1103c8:	eb66ec86 	bl	1acb5e8 <TListView::$NTopics(void)>
        1103cc:	eb662e72 	bl	1a9bd9c <$MakeArray(long)>
        1103d0:	e59d1028 	ldr	r1, [sp, #40]
        1103d4:	e5810000 	str	r0, [r1]
        1103d8:	e59f12c8 	ldr	r1, [pc, #2c8]	; 1106a8 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4b8>
        1103dc:	e1a00004 	mov	r0, r4
        1103e0:	eb6ae858 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1103e4:	e3100003 	tst	r0, #3	; 0x3
        1103e8:	01a00140 	moveq	r0, r0, asr #2
        1103ec:	0a000000 	beq	1103f4 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x204>
        1103f0:	eb6ac749 	bl	1bc211c <$_RINTError(long)>
        1103f4:	e58d0018 	str	r0, [sp, #24]
        1103f8:	e59f12ac 	ldr	r1, [pc, #2ac]	; 1106ac <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4bc>
        1103fc:	e1a00004 	mov	r0, r4
        110400:	eb6ae850 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        110404:	e3100003 	tst	r0, #3	; 0x3
        110408:	01a00140 	moveq	r0, r0, asr #2
        11040c:	0a000000 	beq	110414 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x224>
        110410:	eb6ac741 	bl	1bc211c <$_RINTError(long)>
        110414:	e58d0014 	str	r0, [sp, #20]
        110418:	e24dd030 	sub	sp, sp, #48	; 0x30
        11041c:	e28d1060 	add	r1, sp, #96	; 0x60
        110420:	e1a0000d 	mov	r0, sp
        110424:	e3a02000 	mov	r2, #0	; 0x0
        110428:	eb6ac330 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        11042c:	e1a0000d 	mov	r0, sp
        110430:	eb6acb69 	bl	1bc31dc <TObjectIterator::$Done(void)>
        110434:	e3300000 	teq	r0, #0	; 0x0
        110438:	1a0000be 	bne	110738 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x548>
        11043c:	e2071001 	and	r1, r7, #1	; 0x1
        110440:	e58d1078 	str	r1, [sp, #120]
        110444:	e207100c 	and	r1, r7, #12	; 0xc
        110448:	e58d1074 	str	r1, [sp, #116]
        11044c:	e59f125c 	ldr	r1, [pc, #25c]	; 1106b0 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4c0>
        110450:	e58d1070 	str	r1, [sp, #112]
        110454:	e28d2004 	add	r2, sp, #4	; 0x4
        110458:	e58d206c 	str	r2, [sp, #108]
        11045c:	e59d0004 	ldr	r0, [sp, #4]
        110460:	e5900000 	ldr	r0, [r0]
        110464:	e3100003 	tst	r0, #3	; 0x3
        110468:	01a00140 	moveq	r0, r0, asr #2
        11046c:	0a000000 	beq	110474 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x284>
        110470:	eb6ac729 	bl	1bc211c <$_RINTError(long)>
        110474:	e51b1034 	ldr	r1, [fp, -#52]
        110478:	e1500001 	cmp	r0, r1
        11047c:	ba0000a7 	blt	110720 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x530>
        110480:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        110484:	e5900000 	ldr	r0, [r0]
        110488:	e59d1064 	ldr	r1, [sp, #100]
        11048c:	e5810000 	str	r0, [r1]
        110490:	e59d0068 	ldr	r0, [sp, #104]
        110494:	e3300000 	teq	r0, #0	; 0x0
        110498:	1a000003 	bne	1104ac <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x2bc>
        11049c:	e28d0064 	add	r0, sp, #100	; 0x64
        1104a0:	eb66f062 	bl	1acc630 <$TopicVisible(RefVar const &)>
        1104a4:	e3300000 	teq	r0, #0	; 0x0
        1104a8:	0a00009c 	beq	110720 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x530>
        1104ac:	e1a00005 	mov	r0, r5
        1104b0:	e28d1064 	add	r1, sp, #100	; 0x64
        1104b4:	eb66ec31 	bl	1acb580 <$FChildTemplateFromTopic>
        1104b8:	e59d105c 	ldr	r1, [sp, #92]
        1104bc:	e5810000 	str	r0, [r1]
        1104c0:	e28d0064 	add	r0, sp, #100	; 0x64
        1104c4:	eb66f056 	bl	1acc624 <$TopicLevel(RefVar const &)>
        1104c8:	e0800100 	add	r0, r0, r0, lsl #2
        1104cc:	e59d1048 	ldr	r1, [sp, #72]
        1104d0:	e0810100 	add	r0, r1, r0, lsl #2
        1104d4:	e59d1044 	ldr	r1, [sp, #68]
        1104d8:	e0800001 	add	r0, r0, r1
        1104dc:	e2400014 	sub	r0, r0, #20	; 0x14
        1104e0:	e1a07800 	mov	r7, r0, lsl #16
        1104e4:	e1a07847 	mov	r7, r7, asr #16
        1104e8:	e24dd010 	sub	sp, sp, #16	; 0x10
        1104ec:	e59d0088 	ldr	r0, [sp, #136]
        1104f0:	e3300000 	teq	r0, #0	; 0x0
        1104f4:	0a000002 	beq	110504 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x314>
        1104f8:	e59d0084 	ldr	r0, [sp, #132]
        1104fc:	e3300000 	teq	r0, #0	; 0x0
        110500:	0a000002 	beq	110510 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x320>
        110504:	e2870014 	add	r0, r7, #20	; 0x14
        110508:	e1a07800 	mov	r7, r0, lsl #16
        11050c:	e1a07847 	mov	r7, r7, asr #16
        110510:	e59f819c 	ldr	r8, [pc, #19c]	; 1106b4 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4c4>
        110514:	e5980000 	ldr	r0, [r8]
        110518:	e5901000 	ldr	r1, [r0]
        11051c:	e59d006c 	ldr	r0, [sp, #108]
        110520:	e5900000 	ldr	r0, [r0]
        110524:	eb6acf4d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        110528:	e3100003 	tst	r0, #3	; 0x3
        11052c:	01a00140 	moveq	r0, r0, asr #2
        110530:	0a000000 	beq	110538 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x348>
        110534:	eb6ac6f8 	bl	1bc211c <$_RINTError(long)>
        110538:	e1a09000 	mov	r9, r0
        11053c:	e3800302 	orr	r0, r0, #134217728	; 0x8000000
        110540:	e1a00100 	mov	r0, r0, lsl #2
        110544:	eb6ac700 	bl	1bc214c <$AllocateRefHandle(long)>
        110548:	e58d0000 	str	r0, [sp]
        11054c:	e1a0200d 	mov	r2, sp
        110550:	e59f115c 	ldr	r1, [pc, #15c]	; 1106b4 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4c4>
        110554:	e28d006c 	add	r0, sp, #108	; 0x6c
        110558:	eb6ad782 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        11055c:	e59d0000 	ldr	r0, [sp]
        110560:	eb6acb15 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110564:	e3e00003 	mvn	r0, #3	; 0x3
        110568:	eb6ac6f7 	bl	1bc214c <$AllocateRefHandle(long)>
        11056c:	e58d0004 	str	r0, [sp, #4]
        110570:	e28d2004 	add	r2, sp, #4	; 0x4
        110574:	e59f113c 	ldr	r1, [pc, #13c]	; 1106b8 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4c8>
        110578:	e28d006c 	add	r0, sp, #108	; 0x6c
        11057c:	eb6ad779 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        110580:	e59d0004 	ldr	r0, [sp, #4]
        110584:	eb6acb0c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110588:	e28d106c 	add	r1, sp, #108	; 0x6c
        11058c:	e1a00004 	mov	r0, r4
        110590:	eb65e3d9 	bl	1a894fc <TView::$AddView(RefVar const &)>
        110594:	e1a08000 	mov	r8, r0
        110598:	e1a00109 	mov	r0, r9, lsl #2
        11059c:	eb6ac6ea 	bl	1bc214c <$AllocateRefHandle(long)>
        1105a0:	e58d0008 	str	r0, [sp, #8]	; fField8
        1105a4:	e28d2008 	add	r2, sp, #8	; 0x8
        1105a8:	e59f1104 	ldr	r1, [pc, #104]	; 1106b4 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4c4>
        1105ac:	e28d006c 	add	r0, sp, #108	; 0x6c
        1105b0:	eb6ad76c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1105b4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1105b8:	eb6acaff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1105bc:	e59d3050 	ldr	r3, [sp, #80]	; fField80
        1105c0:	e92d0008 	stmdb	sp!, {r3}
        1105c4:	e1a00005 	mov	r0, r5
        1105c8:	e1a03007 	mov	r3, r7
        1105cc:	e1a02008 	mov	r2, r8
        1105d0:	e1a0100a 	mov	r1, sl
        1105d4:	eb66f024 	bl	1acc66c <$AdjustParagraph__FRC6RefVarP14TParagraphViewT2lT4>
        1105d8:	e28dd004 	add	sp, sp, #4	; 0x4
        1105dc:	e1a0a008 	mov	sl, r8
        1105e0:	e1a00008 	mov	r0, r8
        1105e4:	e59d1080 	ldr	r1, [sp, #128]
        1105e8:	eb6ae7d6 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1105ec:	eb6ac6d6 	bl	1bc214c <$AllocateRefHandle(long)>
        1105f0:	e58d000c 	str	r0, [sp, #12]
        1105f4:	e28d000c 	add	r0, sp, #12	; 0xc
        1105f8:	e28d1060 	add	r1, sp, #96	; 0x60
        1105fc:	eb66111d 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        110600:	e59d000c 	ldr	r0, [sp, #12]
        110604:	eb6acaec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110608:	e59d005c 	ldr	r0, [sp, #92]
        11060c:	e3300000 	teq	r0, #0	; 0x0
        110610:	1a000008 	bne	110638 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x448>
        110614:	e59d104c 	ldr	r1, [sp, #76]
        110618:	e1a01841 	mov	r1, r1, asr #16
        11061c:	e59d0060 	ldr	r0, [sp, #96]
        110620:	e1510840 	cmp	r1, r0, asr #16
        110624:	a59d1064 	ldrge	r1, [sp, #100]
        110628:	a1a01841 	movge	r1, r1, asr #16
        11062c:	a59d0048 	ldrge	r0, [sp, #72]
        110630:	a1510840 	cmpge	r1, r0, asr #16
        110634:	ba000020 	blt	1106bc <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4cc>
        110638:	e24dd004 	sub	sp, sp, #4	; 0x4
        11063c:	e59d2080 	ldr	r2, [sp, #128]
        110640:	e59f1070 	ldr	r1, [pc, #70]	; 1106b8 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4c8>
        110644:	e28d0070 	add	r0, sp, #112	; 0x70
        110648:	eb6ad746 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        11064c:	e59d0070 	ldr	r0, [sp, #112]
        110650:	e1a01006 	mov	r1, r6
        110654:	e5902000 	ldr	r2, [r0]
        110658:	e59d006c 	ldr	r0, [sp, #108]
        11065c:	e5900000 	ldr	r0, [r0]
        110660:	eb6ad73c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        110664:	e28d0064 	add	r0, sp, #100	; 0x64
        110668:	eb6b7c4b 	bl	1bef79c <$ToObject(TRect const &)>
        11066c:	eb6ac6b6 	bl	1bc214c <$AllocateRefHandle(long)>
        110670:	e58d0000 	str	r0, [sp]
        110674:	e1a0200d 	mov	r2, sp
        110678:	e59f1030 	ldr	r1, [pc, #30]	; 1106b0 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4c0>
        11067c:	e28d0078 	add	r0, sp, #120	; 0x78
        110680:	eb6ad738 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        110684:	e59d0000 	ldr	r0, [sp]
        110688:	eb6acacb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11068c:	e2866001 	add	r6, r6, #1	; 0x1
        110690:	e28dd004 	add	sp, sp, #4	; 0x4
        110694:	ea000020 	b	11071c <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x52c>
        110698:	00683878 	rsbeq	r3, r8, r8, ror r8
        11069c:	006835d0 	ldreqd	r3, [r8], -#80	; fField80
        1106a0:	00684368 	rsbeq	r4, r8, r8, ror #6
        1106a4:	006834a8 	rsbeq	r3, r8, r8, lsr #9
        1106a8:	006834f0 	streqd	r3, [r8], -#64
        1106ac:	00684378 	rsbeq	r4, r8, r8, ror r3
        1106b0:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        1106b4:	00684fc0 	rsbeq	r4, r8, r0, asr #31
        1106b8:	006831c0 	rsbeq	r3, r8, r0, asr #3
        1106bc:	e59d104c 	ldr	r1, [sp, #76]
        1106c0:	e1a01841 	mov	r1, r1, asr #16
        1106c4:	e59d0060 	ldr	r0, [sp, #96]
        1106c8:	e1510840 	cmp	r1, r0, asr #16
        1106cc:	aa000012 	bge	11071c <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x52c>
        1106d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1106d4:	e59d0018 	ldr	r0, [sp, #24]
        1106d8:	e5900000 	ldr	r0, [r0]
        1106dc:	e3100003 	tst	r0, #3	; 0x3
        1106e0:	01a00140 	moveq	r0, r0, asr #2
        1106e4:	0a000000 	beq	1106ec <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x4fc>
        1106e8:	eb6ac68b 	bl	1bc211c <$_RINTError(long)>
        1106ec:	e2400001 	sub	r0, r0, #1	; 0x1
        1106f0:	e1a00100 	mov	r0, r0, lsl #2
        1106f4:	eb6ac694 	bl	1bc214c <$AllocateRefHandle(long)>
        1106f8:	e58d0000 	str	r0, [sp]
        1106fc:	e1a0200d 	mov	r2, sp
        110700:	e1a00005 	mov	r0, r5
        110704:	e59d1090 	ldr	r1, [sp, #144]
        110708:	eb6ad718 	bl	1bc6370 <$SetVariable__FRC6RefVarN21>
        11070c:	e59d0000 	ldr	r0, [sp]
        110710:	eb6acaa9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110714:	e28dd014 	add	sp, sp, #20	; 0x14
        110718:	ea000006 	b	110738 <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x548>
        11071c:	e28dd010 	add	sp, sp, #16	; 0x10
        110720:	e1a0000d 	mov	r0, sp
        110724:	eb6ad2ef 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        110728:	e1a0000d 	mov	r0, sp
        11072c:	eb6acaaa 	bl	1bc31dc <TObjectIterator::$Done(void)>
        110730:	e3300000 	teq	r0, #0	; 0x0
        110734:	0affff48 	beq	11045c <TListView::SetupVisibleChildren(long, unsigned char, unsigned char)+0x26c>
        110738:	e1a00004 	mov	r0, r4
        11073c:	e5941000 	ldr	r1, [r4]
        110740:	e1a0e00f 	mov	lr, pc
        110744:	e281f07c 	add	pc, r1, #124	; 0x7c
        110748:	e3a01000 	mov	r1, #0	; 0x0
        11074c:	e3a00000 	mov	r0, #0	; 0x0
        110750:	eb68efb2 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        110754:	e1a01006 	mov	r1, r6
        110758:	e28d0058 	add	r0, sp, #88	; 0x58
        11075c:	eb6ad702 	bl	1bc636c <$SetLength(RefVar const &, long)>
        110760:	e59d0058 	ldr	r0, [sp, #88]	; fField88
        110764:	e5904000 	ldr	r4, [r0]
        110768:	e1a0000d 	mov	r0, sp
        11076c:	e3a01000 	mov	r1, #0	; 0x0
        110770:	e1a0e00f 	mov	lr, pc
        110774:	e59df000 	ldr	pc, [sp]
        110778:	e59d0058 	ldr	r0, [sp, #88]	; fField88
        11077c:	eb6aca8e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110780:	e59d005c 	ldr	r0, [sp, #92]
        110784:	eb6aca8c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110788:	e59d0060 	ldr	r0, [sp, #96]
        11078c:	eb6aca8a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110790:	e59d0064 	ldr	r0, [sp, #100]
        110794:	eb6aca88 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110798:	e1a00004 	mov	r0, r4
        11079c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::Topic(long)
 * Address: 001107a0
 */
TListView::Topic(long) {
    /*
        1107a0:	e1a0c00d 	mov	ip, sp
        1107a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1107a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1107ac:	e1a04001 	mov	r4, r1
        1107b0:	eb66efa0 	bl	1acc638 <TListView::$Topics(void)>
        1107b4:	eb6ac664 	bl	1bc214c <$AllocateRefHandle(long)>
        1107b8:	e1a05000 	mov	r5, r0
        1107bc:	e1a01004 	mov	r1, r4
        1107c0:	e5900000 	ldr	r0, [r0]
        1107c4:	eb6acea2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1107c8:	e1a04000 	mov	r4, r0
        1107cc:	e1a00005 	mov	r0, r5
        1107d0:	eb6aca79 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1107d4:	e1a00004 	mov	r0, r4
        1107d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::TopicIndexToView(long)
 * Address: 001107dc
 */
TListView::TopicIndexToView(long) {
    /*
        1107dc:	e1a0c00d 	mov	ip, sp
        1107e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1107e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1107e8:	e5b04020 	ldr	r4, [r0, #32]!	; fField32
        1107ec:	e2800004 	add	r0, r0, #4	; 0x4
        1107f0:	eb66ef95 	bl	1acc64c <$VisibleTopicIndex(RefVar const &, long)>
        1107f4:	e1a01000 	mov	r1, r0
        1107f8:	e1a00004 	mov	r0, r4
        1107fc:	eb6b56d0 	bl	1be6344 <CList::$At(long)>
        110800:	e3300000 	teq	r0, #0	; 0x0
        110804:	15900024 	ldrne	r0, [r0, #36]	; fField36
        110808:	15900000 	ldrne	r0, [r0]
        11080c:	03a00002 	moveq	r0, #2	; 0x2
        110810:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::TopicLevel(long)
 * Address: 00110814
 */
TListView::TopicLevel(long) {
    /*
        110814:	e1a0c00d 	mov	ip, sp
        110818:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11081c:	e24cb004 	sub	fp, ip, #4	; 0x4
        110820:	e24dd004 	sub	sp, sp, #4	; 0x4
        110824:	eb66ef82 	bl	1acc634 <TListView::$Topic(long)>
        110828:	eb6ac647 	bl	1bc214c <$AllocateRefHandle(long)>
        11082c:	e58d0000 	str	r0, [sp]
        110830:	e1a0000d 	mov	r0, sp
        110834:	eb66ef7a 	bl	1acc624 <$TopicLevel(RefVar const &)>
        110838:	e1a04000 	mov	r4, r0
        11083c:	e59d0000 	ldr	r0, [sp]
        110840:	eb6aca5d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110844:	e1a00004 	mov	r0, r4
        110848:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::Topics(void)
 * Address: 0011084c
 */
TListView::Topics(void) {
    /*
        11084c:	e59f1000 	ldr	r1, [pc, #0]	; 110854 <TListView::Topics(void)+0x8>
        110850:	ea6ae73c 	b	1bca548 <TView::$GetProto( const(RefVar const &))>
        110854:	00684bf0 	streqd	r4, [r8], -#176
    */
}

/**
 * Symbol: TListView::TopicVisible(long)
 * Address: 00110858
 */
TListView::TopicVisible(long) {
    /*
        110858:	e1a0c00d 	mov	ip, sp
        11085c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        110860:	e24cb004 	sub	fp, ip, #4	; 0x4
        110864:	e24dd004 	sub	sp, sp, #4	; 0x4
        110868:	eb66ef71 	bl	1acc634 <TListView::$Topic(long)>
        11086c:	eb6ac636 	bl	1bc214c <$AllocateRefHandle(long)>
        110870:	e58d0000 	str	r0, [sp]
        110874:	e1a0000d 	mov	r0, sp
        110878:	eb66ef6c 	bl	1acc630 <$TopicVisible(RefVar const &)>
        11087c:	e20040ff 	and	r4, r0, #255	; 0xff
        110880:	e59d0000 	ldr	r0, [sp]
        110884:	eb6aca4c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110888:	e1a00004 	mov	r0, r4
        11088c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::TrackCheck(RefVar const &, long)
 * Address: 00110890
 */
TListView::TrackCheck(RefVar const &, long) {
    /*
        110890:	e1a0c00d 	mov	ip, sp
        110894:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        110898:	e24cb004 	sub	fp, ip, #4	; 0x4
        11089c:	e1a04000 	mov	r4, r0
        1108a0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1108a4:	e1a00001 	mov	r0, r1
        1108a8:	eb6656aa 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1108ac:	eb664a4f 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        1108b0:	e1a0a000 	mov	sl, r0
        1108b4:	e3a01001 	mov	r1, #1	; 0x1
        1108b8:	eb66250f 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        1108bc:	e3a00002 	mov	r0, #2	; 0x2
        1108c0:	eb6ac621 	bl	1bc214c <$AllocateRefHandle(long)>
        1108c4:	e58d0000 	str	r0, [sp]
        1108c8:	e1a0000d 	mov	r0, sp
        1108cc:	eb66d282 	bl	1ac52dc <$FClicker>
        1108d0:	e59d0000 	ldr	r0, [sp]
        1108d4:	eb6aca38 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1108d8:	e3a06000 	mov	r6, #0	; 0x0
        1108dc:	e24dd010 	sub	sp, sp, #16	; 0x10
        1108e0:	e1a00004 	mov	r0, r4
        1108e4:	e51b102c 	ldr	r1, [fp, -#44]
        1108e8:	eb66ef51 	bl	1acc634 <TListView::$Topic(long)>
        1108ec:	eb6ac616 	bl	1bc214c <$AllocateRefHandle(long)>
        1108f0:	e3a08000 	mov	r8, #0	; 0x0
        1108f4:	e58d000c 	str	r0, [sp, #12]
        1108f8:	e59f1144 	ldr	r1, [pc, #144]	; 110a44 <TListView::TrackCheck(RefVar const &, long)+0x1b4>
        1108fc:	e1a00004 	mov	r0, r4
        110900:	eb6ae710 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        110904:	e3100003 	tst	r0, #3	; 0x3
        110908:	01a00140 	moveq	r0, r0, asr #2
        11090c:	0a000000 	beq	110914 <TListView::TrackCheck(RefVar const &, long)+0x84>
        110910:	eb6ac601 	bl	1bc211c <$_RINTError(long)>
        110914:	e1a07000 	mov	r7, r0
        110918:	e59f1128 	ldr	r1, [pc, #128]	; 110a48 <TListView::TrackCheck(RefVar const &, long)+0x1b8>
        11091c:	e28d000c 	add	r0, sp, #12	; 0xc
        110920:	e3a03000 	mov	r3, #0	; 0x0
        110924:	e3a02000 	mov	r2, #0	; 0x0
        110928:	eb6ace51 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        11092c:	eb6ac606 	bl	1bc214c <$AllocateRefHandle(long)>
        110930:	e1a09000 	mov	r9, r0
        110934:	e5900000 	ldr	r0, [r0]
        110938:	e2500002 	subs	r0, r0, #2	; 0x2
        11093c:	13a00001 	movne	r0, #1	; 0x1
        110940:	e20050ff 	and	r5, r0, #255	; 0xff
        110944:	e2840024 	add	r0, r4, #36	; 0x24
        110948:	e58d0018 	str	r0, [sp, #24]
        11094c:	e28d2004 	add	r2, sp, #4	; 0x4
        110950:	e28d100c 	add	r1, sp, #12	; 0xc
        110954:	eb66eb22 	bl	1acb5e4 <$MarkerBounds__FRC6RefVarT1R5TRect>
        110958:	e59d0006 	ldr	r0, [sp, #6]
        11095c:	e2800004 	add	r0, r0, #4	; 0x4
        110960:	e5cd0005 	strb	r0, [sp, #5]
        110964:	e1a00440 	mov	r0, r0, asr #8
        110968:	e5cd0004 	strb	r0, [sp, #4]
        11096c:	e59d0006 	ldr	r0, [sp, #6]
        110970:	e280000b 	add	r0, r0, #11	; 0xb
        110974:	e5cd0009 	strb	r0, [sp, #9]
        110978:	e1a00440 	mov	r0, r0, asr #8
        11097c:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        110980:	e59d0004 	ldr	r0, [sp, #4]
        110984:	e280000d 	add	r0, r0, #13	; 0xd
        110988:	e5cd000b 	strb	r0, [sp, #11]
        11098c:	e1a00440 	mov	r0, r0, asr #8
        110990:	e5cd000a 	strb	r0, [sp, #10]
        110994:	e28d0004 	add	r0, sp, #4	; 0x4
        110998:	e3a02000 	mov	r2, #0	; 0x0
        11099c:	e3e0100c 	mvn	r1, #12	; 0xc
        1109a0:	eb6903d0 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1109a4:	e3170001 	tst	r7, #1	; 0x1
        1109a8:	0a000003 	beq	1109bc <TListView::TrackCheck(RefVar const &, long)+0x12c>
        1109ac:	e28d0004 	add	r0, sp, #4	; 0x4
        1109b0:	e3a02000 	mov	r2, #0	; 0x0
        1109b4:	e3a01014 	mov	r1, #20	; 0x14
        1109b8:	eb6903ca 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1109bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1109c0:	e2840010 	add	r0, r4, #16	; 0x10
        1109c4:	e58d0018 	str	r0, [sp, #24]
        1109c8:	e5900000 	ldr	r0, [r0]
        1109cc:	e58d0000 	str	r0, [sp]
        1109d0:	e28d0008 	add	r0, sp, #8	; 0x8
        1109d4:	e59d1002 	ldr	r1, [sp, #2]
        1109d8:	e1a01841 	mov	r1, r1, asr #16
        1109dc:	e59d2000 	ldr	r2, [sp]
        1109e0:	e1a02842 	mov	r2, r2, asr #16
        1109e4:	eb6903bf 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1109e8:	e28dd004 	add	sp, sp, #4	; 0x4
        1109ec:	e1a0100a 	mov	r1, sl
        1109f0:	e1a0000d 	mov	r0, sp
        1109f4:	eb660bf2 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        1109f8:	e41d0004 	ldr	r0, [sp], -#4
        1109fc:	e48d0004 	str	r0, [sp], #4
        110a00:	e28d1004 	add	r1, sp, #4	; 0x4
        110a04:	eb6907cc 	bl	1b5293c <$PtInRect(Point, Rect *)>
        110a08:	e1a06000 	mov	r6, r0
        110a0c:	e1300008 	teq	r0, r8
        110a10:	0a00000d 	beq	110a4c <TListView::TrackCheck(RefVar const &, long)+0x1bc>
        110a14:	e3350000 	teq	r5, #0	; 0x0
        110a18:	13a00000 	movne	r0, #0	; 0x0
        110a1c:	03a00001 	moveq	r0, #1	; 0x1
        110a20:	e21050ff 	ands	r5, r0, #255	; 0xff
        110a24:	e59d0018 	ldr	r0, [sp, #24]
        110a28:	03a03000 	moveq	r3, #0	; 0x0
        110a2c:	13a03001 	movne	r3, #1	; 0x1
        110a30:	e1a02007 	mov	r2, r7
        110a34:	e28d100c 	add	r1, sp, #12	; 0xc
        110a38:	eb66e6c9 	bl	1aca564 <$DrawCheck__FRC6RefVarT1lT3>
        110a3c:	e1a08006 	mov	r8, r6
        110a40:	ea000003 	b	110a54 <TListView::TrackCheck(RefVar const &, long)+0x1c4>
        110a44:	006835d0 	ldreqd	r3, [r8], -#80	; fField80
        110a48:	00683948 	rsbeq	r3, r8, r8, asr #18
        110a4c:	e3a00001 	mov	r0, #1	; 0x1
        110a50:	eb665228 	bl	1aa52f8 <$Wait(unsigned long)>
        110a54:	e1a0000a 	mov	r0, sl
        110a58:	eb660391 	bl	1a918a4 <TStrokePublic::$Done(void)>
        110a5c:	e3300000 	teq	r0, #0	; 0x0
        110a60:	0affffe1 	beq	1109ec <TListView::TrackCheck(RefVar const &, long)+0x15c>
        110a64:	e3360000 	teq	r6, #0	; 0x0
        110a68:	0a00001f 	beq	110aec <TListView::TrackCheck(RefVar const &, long)+0x25c>
        110a6c:	e24dd004 	sub	sp, sp, #4	; 0x4
        110a70:	e3a00002 	mov	r0, #2	; 0x2
        110a74:	eb662cc8 	bl	1a9bd9c <$MakeArray(long)>
        110a78:	eb6ac5b3 	bl	1bc214c <$AllocateRefHandle(long)>
        110a7c:	e58d0000 	str	r0, [sp]
        110a80:	e51b202c 	ldr	r2, [fp, -#44]
        110a84:	e1a00102 	mov	r0, r2, lsl #2
        110a88:	eb6ac5af 	bl	1bc214c <$AllocateRefHandle(long)>
        110a8c:	e1a05000 	mov	r5, r0
        110a90:	e5902000 	ldr	r2, [r0]
        110a94:	e59d0000 	ldr	r0, [sp]
        110a98:	e5900000 	ldr	r0, [r0]
        110a9c:	e3a01000 	mov	r1, #0	; 0x0
        110aa0:	eb6ad62c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        110aa4:	e1a00005 	mov	r0, r5
        110aa8:	eb6ac9c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110aac:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        110ab0:	e5902000 	ldr	r2, [r0]
        110ab4:	e59d0000 	ldr	r0, [sp]
        110ab8:	e5900000 	ldr	r0, [r0]
        110abc:	e3a01001 	mov	r1, #1	; 0x1
        110ac0:	eb6ad624 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        110ac4:	e3a03000 	mov	r3, #0	; 0x0
        110ac8:	e92d0008 	stmdb	sp!, {r3}
        110acc:	e28d2004 	add	r2, sp, #4	; 0x4
        110ad0:	e59f10b0 	ldr	r1, [pc, #b0]	; 110b88 <TListView::TrackCheck(RefVar const &, long)+0x2f8>
        110ad4:	e1a00004 	mov	r0, r4
        110ad8:	e3a03001 	mov	r3, #1	; 0x1
        110adc:	eb6aeabf 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        110ae0:	e5bd0004 	ldr	r0, [sp, #4]!
        110ae4:	eb6ac9b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110ae8:	e28dd004 	add	sp, sp, #4	; 0x4
        110aec:	e24dd008 	sub	sp, sp, #8	; 0x8
        110af0:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        110af4:	e5900000 	ldr	r0, [r0]
        110af8:	e58d0004 	str	r0, [sp, #4]
        110afc:	e59d0004 	ldr	r0, [sp, #4]
        110b00:	e2600000 	rsb	r0, r0, #0	; 0x0
        110b04:	e1a01800 	mov	r1, r0, lsl #16
        110b08:	e1a01841 	mov	r1, r1, asr #16
        110b0c:	e59d0006 	ldr	r0, [sp, #6]
        110b10:	e2600000 	rsb	r0, r0, #0	; 0x0
        110b14:	e1a00800 	mov	r0, r0, lsl #16
        110b18:	e1a00840 	mov	r0, r0, asr #16
        110b1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        110b20:	e5cd1003 	strb	r1, [sp, #3]
        110b24:	e1a01441 	mov	r1, r1, asr #8
        110b28:	e5cd1002 	strb	r1, [sp, #2]
        110b2c:	e5cd0001 	strb	r0, [sp, #1]
        110b30:	e1a00440 	mov	r0, r0, asr #8
        110b34:	e5cd0000 	strb	r0, [sp]
        110b38:	e49d0004 	ldr	r0, [sp], #4
        110b3c:	e58d0000 	str	r0, [sp]
        110b40:	e28d000c 	add	r0, sp, #12	; 0xc
        110b44:	e59d1002 	ldr	r1, [sp, #2]
        110b48:	e1a01841 	mov	r1, r1, asr #16
        110b4c:	e59d2000 	ldr	r2, [sp]
        110b50:	e1a02842 	mov	r2, r2, asr #16
        110b54:	eb690363 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        110b58:	e28dd008 	add	sp, sp, #8	; 0x8
        110b5c:	e28d1004 	add	r1, sp, #4	; 0x4
        110b60:	e1a00004 	mov	r0, r4
        110b64:	e5942000 	ldr	r2, [r4]
        110b68:	e1a0e00f 	mov	lr, pc
        110b6c:	e282f054 	add	pc, r2, #84	; 0x54
        110b70:	e1a00009 	mov	r0, r9
        110b74:	eb6ac990 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110b78:	e59d000c 	ldr	r0, [sp, #12]
        110b7c:	eb6ac98e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110b80:	e1a00006 	mov	r0, r6
        110b84:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        110b88:	00683068 	rsbeq	r3, r8, r8, rrx
    */
}

/**
 * Symbol: TListView::TrackTopic(RefVar const &, long)
 * Address: 00110b8c
 */
TListView::TrackTopic(RefVar const &, long) {
    /*
        110b8c:	e1a0c00d 	mov	ip, sp
        110b90:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        110b94:	e24cb004 	sub	fp, ip, #4	; 0x4
        110b98:	e1a04000 	mov	r4, r0
        110b9c:	e1a05002 	mov	r5, r2
        110ba0:	e24dd008 	sub	sp, sp, #8	; 0x8
        110ba4:	e51b0030 	ldr	r0, [fp, -#48]
        110ba8:	eb6655ea 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        110bac:	eb66498f 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        110bb0:	e1a06000 	mov	r6, r0
        110bb4:	e3a01001 	mov	r1, #1	; 0x1
        110bb8:	eb66244f 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        110bbc:	e24dd008 	sub	sp, sp, #8	; 0x8
        110bc0:	e1a0200d 	mov	r2, sp
        110bc4:	e1a01005 	mov	r1, r5
        110bc8:	e1a00004 	mov	r0, r4
        110bcc:	eb66ea83 	bl	1acb5e0 <TListView::$MarkerBounds(long, TRect &)>
        110bd0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        110bd4:	e3a0a000 	mov	sl, #0	; 0x0
        110bd8:	e1a01006 	mov	r1, r6
        110bdc:	e28d0008 	add	r0, sp, #8	; 0x8
        110be0:	eb660f96 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        110be4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        110be8:	e58d0004 	str	r0, [sp, #4]
        110bec:	eb6b874b 	bl	1bf2920 <$Ticks(void)>
        110bf0:	e1a01005 	mov	r1, r5
        110bf4:	e1a00004 	mov	r0, r4
        110bf8:	eb66ee8d 	bl	1acc634 <TListView::$Topic(long)>
        110bfc:	eb6ac552 	bl	1bc214c <$AllocateRefHandle(long)>
        110c00:	e58d0000 	str	r0, [sp]
        110c04:	e59f138c 	ldr	r1, [pc, #38c]	; 110f98 <TListView::TrackTopic(RefVar const &, long)+0x40c>
        110c08:	e1a00004 	mov	r0, r4
        110c0c:	eb6ae64d 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        110c10:	e3100003 	tst	r0, #3	; 0x3
        110c14:	01a00140 	moveq	r0, r0, asr #2
        110c18:	0a000000 	beq	110c20 <TListView::TrackTopic(RefVar const &, long)+0x94>
        110c1c:	eb6ac53e 	bl	1bc211c <$_RINTError(long)>
        110c20:	e1a02000 	mov	r2, r0
        110c24:	e24dd004 	sub	sp, sp, #4	; 0x4
        110c28:	e310000c 	tst	r0, #12	; 0xc
        110c2c:	e2848024 	add	r8, r4, #36	; 0x24
        110c30:	0a000003 	beq	110c44 <TListView::TrackTopic(RefVar const &, long)+0xb8>
        110c34:	e1a00008 	mov	r0, r8
        110c38:	e28d1004 	add	r1, sp, #4	; 0x4
        110c3c:	e3a03002 	mov	r3, #2	; 0x2
        110c40:	eb66e648 	bl	1aca568 <$DrawPriority__FRC6RefVarT1ls>
        110c44:	e1a00008 	mov	r0, r8
        110c48:	e28d1004 	add	r1, sp, #4	; 0x4
        110c4c:	e3a03000 	mov	r3, #0	; 0x0
        110c50:	e3a02002 	mov	r2, #2	; 0x2
        110c54:	eb66e645 	bl	1aca570 <$DrawTopicMarker__FRC6RefVarT1ls>
        110c58:	e3a00002 	mov	r0, #2	; 0x2
        110c5c:	eb6ac53a 	bl	1bc214c <$AllocateRefHandle(long)>
        110c60:	e58d0000 	str	r0, [sp]
        110c64:	e1a0000d 	mov	r0, sp
        110c68:	eb66d19b 	bl	1ac52dc <$FClicker>
        110c6c:	e59d0000 	ldr	r0, [sp]
        110c70:	eb6ac951 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110c74:	e1a00006 	mov	r0, r6
        110c78:	eb660309 	bl	1a918a4 <TStrokePublic::$Done(void)>
        110c7c:	e1a09105 	mov	r9, r5, lsl #2
        110c80:	e2847010 	add	r7, r4, #16	; 0x10
        110c84:	e3300000 	teq	r0, #0	; 0x0
        110c88:	1a0000d0 	bne	110fd0 <TListView::TrackTopic(RefVar const &, long)+0x444>
        110c8c:	e59f1308 	ldr	r1, [pc, #308]	; 110f9c <TListView::TrackTopic(RefVar const &, long)+0x410>
        110c90:	e58d101c 	str	r1, [sp, #28]	; fField28
        110c94:	e59f1304 	ldr	r1, [pc, #304]	; 110fa0 <TListView::TrackTopic(RefVar const &, long)+0x414>
        110c98:	e58d1018 	str	r1, [sp, #24]
        110c9c:	e1a01006 	mov	r1, r6
        110ca0:	e28d0008 	add	r0, sp, #8	; 0x8
        110ca4:	eb660b46 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        110ca8:	e28d100c 	add	r1, sp, #12	; 0xc
        110cac:	e28d0008 	add	r0, sp, #8	; 0x8
        110cb0:	eb022143 	bl	1991c4 <CheapDistance__FRC6TPointT1>
        110cb4:	e3500003 	cmp	r0, #3	; 0x3
        110cb8:	da0000bc 	ble	110fb0 <TListView::TrackTopic(RefVar const &, long)+0x424>
        110cbc:	e3a0a001 	mov	sl, #1	; 0x1
        110cc0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        110cc4:	e51b0030 	ldr	r0, [fp, -#48]
        110cc8:	eb6655a2 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        110ccc:	e1a01006 	mov	r1, r6
        110cd0:	e28d0008 	add	r0, sp, #8	; 0x8
        110cd4:	eb660f59 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        110cd8:	e8975000 	ldmia	r7, {ip, lr}
        110cdc:	e88d5000 	stmia	sp, {ip, lr}
        110ce0:	e24dd008 	sub	sp, sp, #8	; 0x8
        110ce4:	e5970000 	ldr	r0, [r7]
        110ce8:	e58d0004 	str	r0, [sp, #4]
        110cec:	e59d0004 	ldr	r0, [sp, #4]
        110cf0:	e2600000 	rsb	r0, r0, #0	; 0x0
        110cf4:	e1a01800 	mov	r1, r0, lsl #16
        110cf8:	e1a01841 	mov	r1, r1, asr #16
        110cfc:	e59d0006 	ldr	r0, [sp, #6]
        110d00:	e2600000 	rsb	r0, r0, #0	; 0x0
        110d04:	e1a00800 	mov	r0, r0, lsl #16
        110d08:	e1a00840 	mov	r0, r0, asr #16
        110d0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        110d10:	e5cd1003 	strb	r1, [sp, #3]
        110d14:	e1a01441 	mov	r1, r1, asr #8
        110d18:	e5cd1002 	strb	r1, [sp, #2]
        110d1c:	e5cd0001 	strb	r0, [sp, #1]
        110d20:	e1a00440 	mov	r0, r0, asr #8
        110d24:	e5cd0000 	strb	r0, [sp]
        110d28:	e49d0004 	ldr	r0, [sp], #4
        110d2c:	e58d0000 	str	r0, [sp]
        110d30:	e28d0008 	add	r0, sp, #8	; 0x8
        110d34:	e59d1002 	ldr	r1, [sp, #2]
        110d38:	e1a01841 	mov	r1, r1, asr #16
        110d3c:	e59d2000 	ldr	r2, [sp]
        110d40:	e1a02842 	mov	r2, r2, asr #16
        110d44:	eb6902e7 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        110d48:	e24dd004 	sub	sp, sp, #4	; 0x4
        110d4c:	e1a00009 	mov	r0, r9
        110d50:	eb6ac4fd 	bl	1bc214c <$AllocateRefHandle(long)>
        110d54:	e58d0000 	str	r0, [sp]
        110d58:	e1a0100d 	mov	r1, sp
        110d5c:	e1a00008 	mov	r0, r8
        110d60:	eb66ea09 	bl	1acb58c <$FFamilyBottom>
        110d64:	e3100003 	tst	r0, #3	; 0x3
        110d68:	01a00140 	moveq	r0, r0, asr #2
        110d6c:	0a000000 	beq	110d74 <TListView::TrackTopic(RefVar const &, long)+0x1e8>
        110d70:	eb6ac4e9 	bl	1bc211c <$_RINTError(long)>
        110d74:	e59d100e 	ldr	r1, [sp, #14]
        110d78:	e0800001 	add	r0, r0, r1
        110d7c:	e5cd0011 	strb	r0, [sp, #17]
        110d80:	e1a00440 	mov	r0, r0, asr #8
        110d84:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        110d88:	e59d0000 	ldr	r0, [sp]
        110d8c:	eb6ac90a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110d90:	e28d001c 	add	r0, sp, #28	; 0x1c
        110d94:	eb66ee23 	bl	1acc628 <$TopicTop(RefVar const &)>
        110d98:	e59d100e 	ldr	r1, [sp, #14]
        110d9c:	e0800001 	add	r0, r0, r1
        110da0:	e5cd000d 	strb	r0, [sp, #13]
        110da4:	e1a00440 	mov	r0, r0, asr #8
        110da8:	e5cd000c 	strb	r0, [sp, #12]
        110dac:	e1a00004 	mov	r0, r4
        110db0:	eb66ea02 	bl	1acb5c0 <TListView::$GadgetWidth(void)>
        110db4:	e1a01800 	mov	r1, r0, lsl #16
        110db8:	e1a01841 	mov	r1, r1, asr #16
        110dbc:	e52d1004 	str	r1, [sp, -#4]!
        110dc0:	e28d0020 	add	r0, sp, #32	; 0x20
        110dc4:	eb66ee16 	bl	1acc624 <$TopicLevel(RefVar const &)>
        110dc8:	e2400001 	sub	r0, r0, #1	; 0x1
        110dcc:	e0800100 	add	r0, r0, r0, lsl #2
        110dd0:	e49d1004 	ldr	r1, [sp], #4
        110dd4:	e0811100 	add	r1, r1, r0, lsl #2
        110dd8:	e59d000c 	ldr	r0, [sp, #12]
        110ddc:	e0810000 	add	r0, r1, r0
        110de0:	e5cd000f 	strb	r0, [sp, #15]
        110de4:	e1a00440 	mov	r0, r0, asr #8
        110de8:	e5cd000e 	strb	r0, [sp, #14]
        110dec:	e1a00008 	mov	r0, r8
        110df0:	e28d101c 	add	r1, sp, #28	; 0x1c
        110df4:	e3a03002 	mov	r3, #2	; 0x2
        110df8:	e3a02002 	mov	r2, #2	; 0x2
        110dfc:	eb66e5db 	bl	1aca570 <$DrawTopicMarker__FRC6RefVarT1ls>
        110e00:	e24dd004 	sub	sp, sp, #4	; 0x4
        110e04:	e1a01005 	mov	r1, r5
        110e08:	e1a00004 	mov	r0, r4
        110e0c:	eb6706c1 	bl	1ad2918 <$MakeDragRef(TListView *, long)>
        110e10:	eb6ac4cd 	bl	1bc214c <$AllocateRefHandle(long)>
        110e14:	e40d0004 	str	r0, [sp], -#4
        110e18:	e5970000 	ldr	r0, [r7]
        110e1c:	e58d0000 	str	r0, [sp]
        110e20:	e28d0014 	add	r0, sp, #20	; 0x14
        110e24:	e59d1002 	ldr	r1, [sp, #2]
        110e28:	e1a01841 	mov	r1, r1, asr #16
        110e2c:	e59d2000 	ldr	r2, [sp]
        110e30:	e1a02842 	mov	r2, r2, asr #16
        110e34:	eb6902ab 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        110e38:	e28dd004 	add	sp, sp, #4	; 0x4
        110e3c:	e28d1008 	add	r1, sp, #8	; 0x8
        110e40:	e28d0010 	add	r0, sp, #16	; 0x10
        110e44:	e8905000 	ldmia	r0, {ip, lr}
        110e48:	e8815000 	stmia	r1, {ip, lr}
        110e4c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        110e50:	e2800014 	add	r0, r0, #20	; 0x14
        110e54:	e5cd000f 	strb	r0, [sp, #15]
        110e58:	e1a00440 	mov	r0, r0, asr #8
        110e5c:	e5cd000e 	strb	r0, [sp, #14]
        110e60:	e5845050 	str	r5, [r4, #80]	; fField80
        110e64:	e24dd008 	sub	sp, sp, #8	; 0x8
        110e68:	e1a00004 	mov	r0, r4
        110e6c:	e59d1040 	ldr	r1, [sp, #64]
        110e70:	eb6ae5b4 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        110e74:	eb6ac4b4 	bl	1bc214c <$AllocateRefHandle(long)>
        110e78:	e58d0000 	str	r0, [sp]
        110e7c:	e1a0000d 	mov	r0, sp
        110e80:	eb6ac4b9 	bl	1bc216c <$Clone(RefVar const &)>
        110e84:	eb6ac4b0 	bl	1bc214c <$AllocateRefHandle(long)>
        110e88:	e58d0004 	str	r0, [sp, #4]
        110e8c:	e59d0000 	ldr	r0, [sp]
        110e90:	eb6ac8c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110e94:	e24dd004 	sub	sp, sp, #4	; 0x4
        110e98:	e59f0104 	ldr	r0, [pc, #104]	; 110fa4 <TListView::TrackTopic(RefVar const &, long)+0x418>
        110e9c:	e5900000 	ldr	r0, [r0]
        110ea0:	e5901000 	ldr	r1, [r0]
        110ea4:	e59d000c 	ldr	r0, [sp, #12]
        110ea8:	e5900000 	ldr	r0, [r0]
        110eac:	eb6acceb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        110eb0:	eb6ad0fd 	bl	1bc52ac <$Length(long)>
        110eb4:	e3500001 	cmp	r0, #1	; 0x1
        110eb8:	da00000a 	ble	110ee8 <TListView::TrackTopic(RefVar const &, long)+0x35c>
        110ebc:	e1a00004 	mov	r0, r4
        110ec0:	e59d1040 	ldr	r1, [sp, #64]
        110ec4:	eb6ae59f 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        110ec8:	eb6ac49f 	bl	1bc214c <$AllocateRefHandle(long)>
        110ecc:	e58d0000 	str	r0, [sp]
        110ed0:	e1a0200d 	mov	r2, sp
        110ed4:	e59f10cc 	ldr	r1, [pc, #cc]	; 110fa8 <TListView::TrackTopic(RefVar const &, long)+0x41c>
        110ed8:	e28d0008 	add	r0, sp, #8	; 0x8
        110edc:	eb6ad521 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        110ee0:	e59d0000 	ldr	r0, [sp]
        110ee4:	eb6ac8b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110ee8:	e28d200c 	add	r2, sp, #12	; 0xc
        110eec:	e59f10b8 	ldr	r1, [pc, #b8]	; 110fac <TListView::TrackTopic(RefVar const &, long)+0x420>
        110ef0:	e28d0008 	add	r0, sp, #8	; 0x8
        110ef4:	eb6ad51b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        110ef8:	e24dd004 	sub	sp, sp, #4	; 0x4
        110efc:	e3a00001 	mov	r0, #1	; 0x1
        110f00:	eb662ba5 	bl	1a9bd9c <$MakeArray(long)>
        110f04:	eb6ac490 	bl	1bc214c <$AllocateRefHandle(long)>
        110f08:	e58d0000 	str	r0, [sp]
        110f0c:	e59d000c 	ldr	r0, [sp, #12]
        110f10:	e3a01000 	mov	r1, #0	; 0x0
        110f14:	e5902000 	ldr	r2, [r0]
        110f18:	e59d0000 	ldr	r0, [sp]
        110f1c:	e5900000 	ldr	r0, [r0]
        110f20:	eb6ad50c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        110f24:	e24dd004 	sub	sp, sp, #4	; 0x4
        110f28:	e28d1004 	add	r1, sp, #4	; 0x4
        110f2c:	e1a0000d 	mov	r0, sp
        110f30:	eb670eca 	bl	1ad4a60 <TDragInfo::$__ct(RefVar const &)>
        110f34:	e3a03000 	mov	r3, #0	; 0x0
        110f38:	e1a0200d 	mov	r2, sp
        110f3c:	e3a01000 	mov	r1, #0	; 0x0
        110f40:	e28d0024 	add	r0, sp, #36	; 0x24
        110f44:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        110f48:	e28d302c 	add	r3, sp, #44	; 0x2c
        110f4c:	e28d2034 	add	r2, sp, #52	; 0x34
        110f50:	e1a01006 	mov	r1, r6
        110f54:	e1a00004 	mov	r0, r4
        110f58:	e594c000 	ldr	ip, [r4]
        110f5c:	e1a0e00f 	mov	lr, pc
        110f60:	e28cf0d0 	add	pc, ip, #208	; 0xd0
        110f64:	e3e00001 	mvn	r0, #1	; 0x1
        110f68:	e5840050 	str	r0, [r4, #80]	; fField80
        110f6c:	e5bd0010 	ldr	r0, [sp, #16]!	; fField16
        110f70:	eb6ac891 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110f74:	e5bd0004 	ldr	r0, [sp, #4]!
        110f78:	eb6ac88f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110f7c:	e28dd008 	add	sp, sp, #8	; 0x8
        110f80:	e59d0004 	ldr	r0, [sp, #4]
        110f84:	eb6ac88c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110f88:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        110f8c:	eb6ac88a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        110f90:	e28dd01c 	add	sp, sp, #28	; 0x1c
        110f94:	ea000007 	b	110fb8 <TListView::TrackTopic(RefVar const &, long)+0x42c>
        110f98:	006835d0 	ldreqd	r3, [r8], -#80	; fField80
        110f9c:	00684bd8 	ldreqd	r4, [r8], -#184
        110fa0:	00684bf8 	streqd	r4, [r8], -#184
        110fa4:	006831c0 	rsbeq	r3, r8, r0, asr #3
        110fa8:	00683400 	rsbeq	r3, r8, r0, lsl #8
        110fac:	00682a80 	rsbeq	r2, r8, r0, lsl #21
        110fb0:	e3a00001 	mov	r0, #1	; 0x1
        110fb4:	eb6650cf 	bl	1aa52f8 <$Wait(unsigned long)>
        110fb8:	e1a00006 	mov	r0, r6
        110fbc:	eb660238 	bl	1a918a4 <TStrokePublic::$Done(void)>
        110fc0:	e3300000 	teq	r0, #0	; 0x0
        110fc4:	0affff34 	beq	110c9c <TListView::TrackTopic(RefVar const &, long)+0x110>
        110fc8:	e33a0000 	teq	sl, #0	; 0x0
        110fcc:	1a00003d 	bne	1110c8 <TListView::TrackTopic(RefVar const &, long)+0x53c>
        110fd0:	e24dd008 	sub	sp, sp, #8	; 0x8
        110fd4:	e8971008 	ldmia	r7, {r3, ip}
        110fd8:	e88d1008 	stmia	sp, {r3, ip}
        110fdc:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        110fe0:	e59d1000 	ldr	r1, [sp]
        110fe4:	e0400001 	sub	r0, r0, r1
        110fe8:	e5cd0013 	strb	r0, [sp, #19]
        110fec:	e1a00440 	mov	r0, r0, asr #8
        110ff0:	e5cd0012 	strb	r0, [sp, #18]
        110ff4:	e59d0012 	ldr	r0, [sp, #18]
        110ff8:	e41d1004 	ldr	r1, [sp], -#4
        110ffc:	e1a01821 	mov	r1, r1, lsr #16
        111000:	e0400001 	sub	r0, r0, r1
        111004:	e5cd0015 	strb	r0, [sp, #21]
        111008:	e1a00440 	mov	r0, r0, asr #8
        11100c:	e5cd0014 	strb	r0, [sp, #20]
        111010:	e59d0014 	ldr	r0, [sp, #20]
        111014:	e48d0004 	str	r0, [sp], #4
        111018:	e28d1018 	add	r1, sp, #24	; 0x18
        11101c:	eb690646 	bl	1b5293c <$PtInRect(Point, Rect *)>
        111020:	e3300000 	teq	r0, #0	; 0x0
        111024:	0a000026 	beq	1110c4 <TListView::TrackTopic(RefVar const &, long)+0x538>
        111028:	e1a01005 	mov	r1, r5
        11102c:	e1a00004 	mov	r0, r4
        111030:	e3a03000 	mov	r3, #0	; 0x0
        111034:	e3a02002 	mov	r2, #2	; 0x2
        111038:	eb66e54b 	bl	1aca56c <TListView::$DrawTopicMarker(long, long, short)>
        11103c:	e24dd008 	sub	sp, sp, #8	; 0x8
        111040:	e3a00001 	mov	r0, #1	; 0x1
        111044:	eb662b54 	bl	1a9bd9c <$MakeArray(long)>
        111048:	eb6ac43f 	bl	1bc214c <$AllocateRefHandle(long)>
        11104c:	e58d0004 	str	r0, [sp, #4]
        111050:	e1a00009 	mov	r0, r9
        111054:	eb6ac43c 	bl	1bc214c <$AllocateRefHandle(long)>
        111058:	e1a05000 	mov	r5, r0
        11105c:	e5902000 	ldr	r2, [r0]
        111060:	e59d0004 	ldr	r0, [sp, #4]
        111064:	e5900000 	ldr	r0, [r0]
        111068:	e3a01000 	mov	r1, #0	; 0x0
        11106c:	eb6ad4b9 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        111070:	e1a00005 	mov	r0, r5
        111074:	eb6ac850 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        111078:	e3a03000 	mov	r3, #0	; 0x0
        11107c:	e92d0008 	stmdb	sp!, {r3}
        111080:	e28d2008 	add	r2, sp, #8	; 0x8
        111084:	e59f108c 	ldr	r1, [pc, #8c]	; 111118 <TListView::TrackTopic(RefVar const &, long)+0x58c>	; fField8
        111088:	e1a00004 	mov	r0, r4
        11108c:	eb6ae953 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        111090:	e28dd004 	add	sp, sp, #4	; 0x4
        111094:	e1a00009 	mov	r0, r9
        111098:	eb6ac42b 	bl	1bc214c <$AllocateRefHandle(long)>
        11109c:	e58d0000 	str	r0, [sp]
        1110a0:	e1a0200d 	mov	r2, sp
        1110a4:	e1a00008 	mov	r0, r8
        1110a8:	e59f106c 	ldr	r1, [pc, #6c]	; 11111c <TListView::TrackTopic(RefVar const &, long)+0x590>
        1110ac:	eb6ad4af 	bl	1bc6370 <$SetVariable__FRC6RefVarN21>
        1110b0:	e59d0000 	ldr	r0, [sp]
        1110b4:	eb6ac840 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1110b8:	e59d0004 	ldr	r0, [sp, #4]
        1110bc:	eb6ac83e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1110c0:	e28dd008 	add	sp, sp, #8	; 0x8
        1110c4:	e28dd008 	add	sp, sp, #8	; 0x8
        1110c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1110cc:	e5970000 	ldr	r0, [r7]
        1110d0:	e58d0000 	str	r0, [sp]
        1110d4:	e28d0014 	add	r0, sp, #20	; 0x14
        1110d8:	e59d1002 	ldr	r1, [sp, #2]
        1110dc:	e1a01841 	mov	r1, r1, asr #16
        1110e0:	e59d2000 	ldr	r2, [sp]
        1110e4:	e1a02842 	mov	r2, r2, asr #16
        1110e8:	eb6901fe 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1110ec:	e28dd004 	add	sp, sp, #4	; 0x4
        1110f0:	e28d1010 	add	r1, sp, #16	; 0x10
        1110f4:	e1a00004 	mov	r0, r4
        1110f8:	e5942000 	ldr	r2, [r4]
        1110fc:	e1a0e00f 	mov	lr, pc
        111100:	e282f054 	add	pc, r2, #84	; 0x54
        111104:	e3a04001 	mov	r4, #1	; 0x1
        111108:	e59d0004 	ldr	r0, [sp, #4]
        11110c:	eb6ac82a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        111110:	e1a00004 	mov	r0, r4
        111114:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        111118:	00684bc0 	rsbeq	r4, r8, r0, asr #23
        11111c:	00682778 	rsbeq	r2, r8, r8, ror r7
    */
}

/**
 * Symbol: TListView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char)
 * Address: 00111120
 */
TListView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char) {
    /*
        111120:	e1a0c00d 	mov	ip, sp
        111124:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        111128:	e24cb004 	sub	fp, ip, #4	; 0x4
        11112c:	e1a06000 	mov	r6, r0
        111130:	e1a05001 	mov	r5, r1
        111134:	e1a04002 	mov	r4, r2
        111138:	e20380ff 	and	r8, r3, #255	; 0xff
        11113c:	e1a00001 	mov	r0, r1
        111140:	e3a02000 	mov	r2, #0	; 0x0
        111144:	e3a01000 	mov	r1, #0	; 0x0
        111148:	eb66fdbd 	bl	1ad0844 <$GetItemIndType__9TDragInfoCFlT1>
        11114c:	eb6ac3fe 	bl	1bc214c <$AllocateRefHandle(long)>
        111150:	e1a07000 	mov	r7, r0
        111154:	e59f007c 	ldr	r0, [pc, #7c]	; 1111d8 <TListView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char)+0xb8>
        111158:	e5900000 	ldr	r0, [r0]
        11115c:	e5901000 	ldr	r1, [r0]
        111160:	e5970000 	ldr	r0, [r7]
        111164:	eb6acc31 	bl	1bc4230 <$EQRef__FlT1>
        111168:	e3300000 	teq	r0, #0	; 0x0
        11116c:	1a000006 	bne	11118c <TListView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char)+0x6c>
        111170:	e59f0064 	ldr	r0, [pc, #64]	; 1111dc <TListView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char)+0xbc>
        111174:	e5900000 	ldr	r0, [r0]
        111178:	e5901000 	ldr	r1, [r0]
        11117c:	e5970000 	ldr	r0, [r7]
        111180:	eb6acc2a 	bl	1bc4230 <$EQRef__FlT1>
        111184:	e3300000 	teq	r0, #0	; 0x0
        111188:	0a000014 	beq	1111e0 <TListView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char)+0xc0>
        11118c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        111190:	e5940000 	ldr	r0, [r4]
        111194:	e58d0000 	str	r0, [sp]
        111198:	e28d2004 	add	r2, sp, #4	; 0x4
        11119c:	e1a0100d 	mov	r1, sp
        1111a0:	e1a00006 	mov	r0, r6
        1111a4:	e3a03000 	mov	r3, #0	; 0x0
        1111a8:	e596c000 	ldr	ip, [r6]
        1111ac:	e1a0e00f 	mov	lr, pc
        1111b0:	e28cf074 	add	pc, ip, #116	; 0x74
        1111b4:	e59d0004 	ldr	r0, [sp, #4]
        1111b8:	e1a00840 	mov	r0, r0, asr #16
        1111bc:	e3700902 	cmn	r0, #32768	; 0x8000
        1111c0:	128d0004 	addne	r0, sp, #4	; 0x4
        1111c4:	1b68fda6 	blne	1b50864 <$InvertRect(Rect *)>
        1111c8:	e1a00007 	mov	r0, r7
        1111cc:	eb6ac7fa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1111d0:	e1a00008 	mov	r0, r8
        1111d4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1111d8:	00684bd0 	ldreqd	r4, [r8], -#176
        1111dc:	00684a68 	rsbeq	r4, r8, r8, ror #20
        1111e0:	e1a03008 	mov	r3, r8
        1111e4:	e1a02004 	mov	r2, r4
        1111e8:	e1a01005 	mov	r1, r5
        1111ec:	e1a00006 	mov	r0, r6
        1111f0:	eb66712e 	bl	1aad6b0 <TView::$DragFeedback(TDragInfo const &, TPoint const &, unsigned char)>
        1111f4:	e1a04000 	mov	r4, r0
        1111f8:	e1a00007 	mov	r0, r7
        1111fc:	eb6ac7ee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        111200:	e1a00004 	mov	r0, r4
        111204:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::DrawHilitedData(void)
 * Address: 001120ac
 */
TListView::DrawHilitedData(void) {
    /*
        1120ac:	e1a0c00d 	mov	ip, sp
        1120b0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1120b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1120b8:	e1a04000 	mov	r4, r0
        1120bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1120c0:	e5900050 	ldr	r0, [r0, #80]	; fField80
        1120c4:	e3700002 	cmn	r0, #2	; 0x2
        1120c8:	1a000002 	bne	1120d8 <TListView::DrawHilitedData(void)+0x2c>
        1120cc:	e1a00004 	mov	r0, r4
        1120d0:	eb65fe07 	bl	1a918f4 <TEditView::$DrawHilitedData(void)>
        1120d4:	ea000060 	b	11225c <TListView::DrawHilitedData(void)+0x1b0>
        1120d8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1120dc:	e59f10c0 	ldr	r1, [pc, #c0]	; 1121a4 <TListView::DrawHilitedData(void)+0xf8>
        1120e0:	e1a00004 	mov	r0, r4
        1120e4:	eb6ae117 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1120e8:	e3100003 	tst	r0, #3	; 0x3
        1120ec:	01a00140 	moveq	r0, r0, asr #2
        1120f0:	0a000000 	beq	1120f8 <TListView::DrawHilitedData(void)+0x4c>
        1120f4:	eb6ac008 	bl	1bc211c <$_RINTError(long)>
        1120f8:	e1a07000 	mov	r7, r0
        1120fc:	e5945050 	ldr	r5, [r4, #80]	; fField80
        112100:	e1a01005 	mov	r1, r5
        112104:	e1a00004 	mov	r0, r4
        112108:	eb66e949 	bl	1acc634 <TListView::$Topic(long)>
        11210c:	eb6ac00e 	bl	1bc214c <$AllocateRefHandle(long)>
        112110:	e58d0000 	str	r0, [sp]
        112114:	e1a0000d 	mov	r0, sp
        112118:	eb66e941 	bl	1acc624 <$TopicLevel(RefVar const &)>
        11211c:	e1a09000 	mov	r9, r0
        112120:	e1a00004 	mov	r0, r4
        112124:	eb66e52f 	bl	1acb5e8 <TListView::$NTopics(void)>
        112128:	e1500005 	cmp	r0, r5
        11212c:	da000047 	ble	112250 <TListView::DrawHilitedData(void)+0x1a4>
        112130:	e207800c 	and	r8, r7, #12	; 0xc
        112134:	e2070002 	and	r0, r7, #2	; 0x2
        112138:	e2846024 	add	r6, r4, #36	; 0x24
        11213c:	e58d000c 	str	r0, [sp, #12]
        112140:	e1a01005 	mov	r1, r5
        112144:	e1a00004 	mov	r0, r4
        112148:	eb66e939 	bl	1acc634 <TListView::$Topic(long)>
        11214c:	e59d1000 	ldr	r1, [sp]
        112150:	e5810000 	str	r0, [r1]
        112154:	e5940050 	ldr	r0, [r4, #80]	; fField80
        112158:	e1300005 	teq	r0, r5
        11215c:	0a000003 	beq	112170 <TListView::DrawHilitedData(void)+0xc4>
        112160:	e1a0000d 	mov	r0, sp
        112164:	eb66e92e 	bl	1acc624 <$TopicLevel(RefVar const &)>
        112168:	e1500009 	cmp	r0, r9
        11216c:	da000037 	ble	112250 <TListView::DrawHilitedData(void)+0x1a4>
        112170:	e1a0000d 	mov	r0, sp
        112174:	eb66e92d 	bl	1acc630 <$TopicVisible(RefVar const &)>
        112178:	e3300000 	teq	r0, #0	; 0x0
        11217c:	0a00002e 	beq	11223c <TListView::DrawHilitedData(void)+0x190>
        112180:	e24dd004 	sub	sp, sp, #4	; 0x4
        112184:	e3380000 	teq	r8, #0	; 0x0
        112188:	0a000006 	beq	1121a8 <TListView::DrawHilitedData(void)+0xfc>
        11218c:	e1a00006 	mov	r0, r6
        112190:	e1a02007 	mov	r2, r7
        112194:	e28d1004 	add	r1, sp, #4	; 0x4
        112198:	e3a03000 	mov	r3, #0	; 0x0
        11219c:	eb66e0f1 	bl	1aca568 <$DrawPriority__FRC6RefVarT1ls>
        1121a0:	ea00000e 	b	1121e0 <TListView::DrawHilitedData(void)+0x134>
        1121a4:	006835d0 	ldreqd	r3, [r8], -#80	; fField80
        1121a8:	e1a00105 	mov	r0, r5, lsl #2
        1121ac:	eb6abfe6 	bl	1bc214c <$AllocateRefHandle(long)>
        1121b0:	e58d0000 	str	r0, [sp]
        1121b4:	e1a0100d 	mov	r1, sp
        1121b8:	e1a00006 	mov	r0, r6
        1121bc:	eb66e4f3 	bl	1acb590 <$FIsCollapsed>
        1121c0:	e2502002 	subs	r2, r0, #2	; 0x2
        1121c4:	13a02001 	movne	r2, #1	; 0x1
        1121c8:	e1a00006 	mov	r0, r6
        1121cc:	e28d1004 	add	r1, sp, #4	; 0x4
        1121d0:	e3a03000 	mov	r3, #0	; 0x0
        1121d4:	eb66e0e5 	bl	1aca570 <$DrawTopicMarker__FRC6RefVarT1ls>
        1121d8:	e59d0000 	ldr	r0, [sp]
        1121dc:	eb6ac3f6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1121e0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        1121e4:	e3300000 	teq	r0, #0	; 0x0
        1121e8:	0a000004 	beq	112200 <TListView::DrawHilitedData(void)+0x154>
        1121ec:	e1a00006 	mov	r0, r6
        1121f0:	e1a02007 	mov	r2, r7
        1121f4:	e28d1004 	add	r1, sp, #4	; 0x4
        1121f8:	e3e03000 	mvn	r3, #0	; 0x0
        1121fc:	eb66e0d8 	bl	1aca564 <$DrawCheck__FRC6RefVarT1lT3>
        112200:	e1a00006 	mov	r0, r6
        112204:	e1a01005 	mov	r1, r5
        112208:	e594a020 	ldr	sl, [r4, #32]	; fField32
        11220c:	eb66e90e 	bl	1acc64c <$VisibleTopicIndex(RefVar const &, long)>
        112210:	e1a01000 	mov	r1, r0
        112214:	e1a0000a 	mov	r0, sl
        112218:	eb6b5049 	bl	1be6344 <CList::$At(long)>
        11221c:	e28d2008 	add	r2, sp, #8	; 0x8
        112220:	e2801010 	add	r1, r0, #16	; 0x10
        112224:	e8915000 	ldmia	r1, {ip, lr}
        112228:	e8825000 	stmia	r2, {ip, lr}
        11222c:	e28d1008 	add	r1, sp, #8	; 0x8
        112230:	e3a02000 	mov	r2, #0	; 0x0
        112234:	eb6ae0b2 	bl	1bca504 <TView::$Draw(TRect const &, unsigned char)>
        112238:	e28dd004 	add	sp, sp, #4	; 0x4
        11223c:	e2855001 	add	r5, r5, #1	; 0x1
        112240:	e1a00004 	mov	r0, r4
        112244:	eb66e4e7 	bl	1acb5e8 <TListView::$NTopics(void)>
        112248:	e1500005 	cmp	r0, r5
        11224c:	caffffbb 	bgt	112140 <TListView::DrawHilitedData(void)+0x94>
        112250:	e59d0000 	ldr	r0, [sp]
        112254:	eb6ac3d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112258:	e28dd00c 	add	sp, sp, #12	; 0xc
        11225c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::DrawTopicMarker(long, long, short)
 * Address: 00112944
 */
TListView::DrawTopicMarker(long, long, short) {
    /*
        112944:	e1a0c00d 	mov	ip, sp
        112948:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11294c:	e24cb004 	sub	fp, ip, #4	; 0x4
        112950:	e1a04000 	mov	r4, r0
        112954:	e1a05002 	mov	r5, r2
        112958:	e1a06803 	mov	r6, r3, lsl #16
        11295c:	e1a06846 	mov	r6, r6, asr #16
        112960:	e24dd004 	sub	sp, sp, #4	; 0x4
        112964:	eb66e732 	bl	1acc634 <TListView::$Topic(long)>
        112968:	eb6abdf7 	bl	1bc214c <$AllocateRefHandle(long)>
        11296c:	e58d0000 	str	r0, [sp]
        112970:	e2840024 	add	r0, r4, #36	; 0x24
        112974:	e1a03006 	mov	r3, r6
        112978:	e1a02005 	mov	r2, r5
        11297c:	e1a0100d 	mov	r1, sp
        112980:	eb66defa 	bl	1aca570 <$DrawTopicMarker__FRC6RefVarT1ls>
        112984:	e59d0000 	ldr	r0, [sp]
        112988:	eb6ac20b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11298c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)
 * Address: 00112c28
 */
TListView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char) {
    /*
        112c28:	e1a0c00d 	mov	ip, sp
        112c2c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        112c30:	e24cb004 	sub	fp, ip, #4	; 0x4
        112c34:	e1a05000 	mov	r5, r0
        112c38:	e1a04001 	mov	r4, r1
        112c3c:	e1a07002 	mov	r7, r2
        112c40:	e1a06003 	mov	r6, r3
        112c44:	e59b0004 	ldr	r0, [fp, #4]
        112c48:	e20090ff 	and	r9, r0, #255	; 0xff
        112c4c:	e1a00001 	mov	r0, r1
        112c50:	eb6b834e 	bl	1bf3990 <$IsFrame(RefVar const &)>
        112c54:	e3300000 	teq	r0, #0	; 0x0
        112c58:	0a00003d 	beq	112d54 <TListView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x12c>
        112c5c:	e1a00004 	mov	r0, r4
        112c60:	eb6ade3d 	bl	1bca55c <$GetView(RefVar const &)>
        112c64:	e1b08000 	movs	r8, r0
        112c68:	0a000039 	beq	112d54 <TListView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x12c>
        112c6c:	e24dd004 	sub	sp, sp, #4	; 0x4
        112c70:	e1a0000d 	mov	r0, sp
        112c74:	e3a01000 	mov	r1, #0	; 0x0
        112c78:	eb67077a 	bl	1ad4a68 <TDragInfo::$__ct(long)>
        112c7c:	e1a0100d 	mov	r1, sp
        112c80:	e1a00008 	mov	r0, r8
        112c84:	e5982000 	ldr	r2, [r8]
        112c88:	e1a0e00f 	mov	lr, pc
        112c8c:	e282f0c8 	add	pc, r2, #200	; 0xc8
        112c90:	e24dd008 	sub	sp, sp, #8	; 0x8
        112c94:	e28d0008 	add	r0, sp, #8	; 0x8
        112c98:	e3a02000 	mov	r2, #0	; 0x0
        112c9c:	e3a01000 	mov	r1, #0	; 0x0
        112ca0:	eb66f6e7 	bl	1ad0844 <$GetItemIndType__9TDragInfoCFlT1>
        112ca4:	eb6abd28 	bl	1bc214c <$AllocateRefHandle(long)>
        112ca8:	e1a02004 	mov	r2, r4
        112cac:	e58d0004 	str	r0, [sp, #4]
        112cb0:	e28d1004 	add	r1, sp, #4	; 0x4
        112cb4:	e1a00005 	mov	r0, r5
        112cb8:	e5953000 	ldr	r3, [r5]
        112cbc:	e1a0e00f 	mov	lr, pc
        112cc0:	e283f0cc 	add	pc, r3, #204	; 0xcc
        112cc4:	eb6abd20 	bl	1bc214c <$AllocateRefHandle(long)>
        112cc8:	e1a01007 	mov	r1, r7
        112ccc:	e58d0000 	str	r0, [sp]
        112cd0:	e1a0000d 	mov	r0, sp
        112cd4:	ebfe275f 	bl	9ca58 <OffsetBoundsRef(RefVar const &, TPoint const &)>
        112cd8:	e24dd004 	sub	sp, sp, #4	; 0x4
        112cdc:	e5960000 	ldr	r0, [r6]
        112ce0:	e58d0000 	str	r0, [sp]
        112ce4:	e1a0300d 	mov	r3, sp
        112ce8:	e28d2004 	add	r2, sp, #4	; 0x4
        112cec:	e28d1008 	add	r1, sp, #8	; 0x8
        112cf0:	e1a00005 	mov	r0, r5
        112cf4:	e595c000 	ldr	ip, [r5]
        112cf8:	e1a0e00f 	mov	lr, pc
        112cfc:	e28cf0e4 	add	pc, ip, #228	; 0xe4
        112d00:	e3390000 	teq	r9, #0	; 0x0
        112d04:	0a000004 	beq	112d1c <TListView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0xf4>
        112d08:	e1a00008 	mov	r0, r8
        112d0c:	e5981000 	ldr	r1, [r8]
        112d10:	e1a0e00f 	mov	lr, pc
        112d14:	e281f0ac 	add	pc, r1, #172	; 0xac
        112d18:	ea000004 	b	112d30 <TListView::DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)+0x108>
        112d1c:	e1a01004 	mov	r1, r4
        112d20:	e1a00008 	mov	r0, r8
        112d24:	e5982000 	ldr	r2, [r8]
        112d28:	e1a0e00f 	mov	lr, pc
        112d2c:	e282f0ec 	add	pc, r2, #236	; 0xec
        112d30:	e3a04001 	mov	r4, #1	; 0x1
        112d34:	e59d0004 	ldr	r0, [sp, #4]
        112d38:	eb6ac11f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112d3c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        112d40:	eb6ac11d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112d44:	e59d000c 	ldr	r0, [sp, #12]
        112d48:	eb6ac11b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112d4c:	e1a00004 	mov	r0, r4
        112d50:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        112d54:	e1a03009 	mov	r3, r9
        112d58:	e92d0008 	stmdb	sp!, {r3}
        112d5c:	e1a03006 	mov	r3, r6
        112d60:	e1a02007 	mov	r2, r7
        112d64:	e1a01004 	mov	r1, r4
        112d68:	e1a00005 	mov	r0, r5
        112d6c:	eb666a5c 	bl	1aad6e4 <TView::$DropMove(RefVar const &, TPoint const &, TPoint const &, unsigned char)>
        112d70:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::DropRemove(RefVar const &)
 * Address: 00112d74
 */
TListView::DropRemove(RefVar const &) {
    /*
        112d74:	e1a0c00d 	mov	ip, sp
        112d78:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        112d7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        112d80:	e1a05000 	mov	r5, r0
        112d84:	e1a04001 	mov	r4, r1
        112d88:	e1a00001 	mov	r0, r1
        112d8c:	eb6b82ff 	bl	1bf3990 <$IsFrame(RefVar const &)>
        112d90:	e3300000 	teq	r0, #0	; 0x0
        112d94:	0a000006 	beq	112db4 <TListView::DropRemove(RefVar const &)+0x40>
        112d98:	e1a00004 	mov	r0, r4
        112d9c:	eb6addee 	bl	1bca55c <$GetView(RefVar const &)>
        112da0:	e3300000 	teq	r0, #0	; 0x0
        112da4:	01a01004 	moveq	r1, r4
        112da8:	01a00005 	moveq	r0, r5
        112dac:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        112db0:	0a666a50 	beq	1aad6f8 <TView::$DropRemove(RefVar const &)>
        112db4:	e1a01004 	mov	r1, r4
        112db8:	e1a00005 	mov	r0, r5
        112dbc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        112dc0:	ea666a4d 	b	1aad6fc <TEditView::$DropRemove(RefVar const &)>
    */
}

/**
 * Symbol: TListView::FamilySize(long)
 * Address: 00112dc4
 */
TListView::FamilySize(long) {
    /*
        112dc4:	e1a0c00d 	mov	ip, sp
        112dc8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        112dcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        112dd0:	e1a05000 	mov	r5, r0
        112dd4:	e1a04001 	mov	r4, r1
        112dd8:	e24dd004 	sub	sp, sp, #4	; 0x4
        112ddc:	eb66e615 	bl	1acc638 <TListView::$Topics(void)>
        112de0:	eb6abcd9 	bl	1bc214c <$AllocateRefHandle(long)>
        112de4:	e1a08000 	mov	r8, r0
        112de8:	e1a01004 	mov	r1, r4
        112dec:	e5900000 	ldr	r0, [r0]
        112df0:	eb6ac517 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        112df4:	eb6abcd4 	bl	1bc214c <$AllocateRefHandle(long)>
        112df8:	e58d0000 	str	r0, [sp]
        112dfc:	e1a0000d 	mov	r0, sp
        112e00:	eb66e607 	bl	1acc624 <$TopicLevel(RefVar const &)>
        112e04:	e1a09000 	mov	r9, r0
        112e08:	e1a00005 	mov	r0, r5
        112e0c:	eb66e1f5 	bl	1acb5e8 <TListView::$NTopics(void)>
        112e10:	e1a07000 	mov	r7, r0
        112e14:	e2846001 	add	r6, r4, #1	; 0x1
        112e18:	e1560000 	cmp	r6, r0
        112e1c:	aa000007 	bge	112e40 <TListView::FamilySize(long)+0x7c>
        112e20:	e1a01006 	mov	r1, r6
        112e24:	e1a00005 	mov	r0, r5
        112e28:	eb66e5fc 	bl	1acc620 <TListView::$TopicLevel(long)>
        112e2c:	e1500009 	cmp	r0, r9
        112e30:	da000002 	ble	112e40 <TListView::FamilySize(long)+0x7c>
        112e34:	e2866001 	add	r6, r6, #1	; 0x1
        112e38:	e1560007 	cmp	r6, r7
        112e3c:	bafffff7 	blt	112e20 <TListView::FamilySize(long)+0x5c>
        112e40:	e0464004 	sub	r4, r6, r4
        112e44:	e59d0000 	ldr	r0, [sp]
        112e48:	eb6ac0db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112e4c:	e1a00008 	mov	r0, r8
        112e50:	eb6ac0d9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112e54:	e1a00004 	mov	r0, r4
        112e58:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TListView::FindDropView(TDragInfo const &, TPoint const &)
 * Address: 00112e5c
 */
TListView::FindDropView(TDragInfo const &, TPoint const &) {
    /*
        112e5c:	e1a0c00d 	mov	ip, sp
        112e60:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        112e64:	e24cb004 	sub	fp, ip, #4	; 0x4
        112e68:	e1a04000 	mov	r4, r0
        112e6c:	e1a06001 	mov	r6, r1
        112e70:	e1a05002 	mov	r5, r2
        112e74:	e1a00001 	mov	r0, r1
        112e78:	e3a02000 	mov	r2, #0	; 0x0
        112e7c:	e3a01000 	mov	r1, #0	; 0x0
        112e80:	eb66f66f 	bl	1ad0844 <$GetItemIndType__9TDragInfoCFlT1>
        112e84:	eb6abcb0 	bl	1bc214c <$AllocateRefHandle(long)>
        112e88:	e1a07000 	mov	r7, r0
        112e8c:	e59f0058 	ldr	r0, [pc, #58]	; 112eec <TListView::FindDropView(TDragInfo const &, TPoint const &)+0x90>
        112e90:	e5900000 	ldr	r0, [r0]
        112e94:	e5901000 	ldr	r1, [r0]
        112e98:	e5970000 	ldr	r0, [r7]
        112e9c:	eb6ac4e3 	bl	1bc4230 <$EQRef__FlT1>
        112ea0:	e3a09000 	mov	r9, #0	; 0x0
        112ea4:	e3300000 	teq	r0, #0	; 0x0
        112ea8:	1a000006 	bne	112ec8 <TListView::FindDropView(TDragInfo const &, TPoint const &)+0x6c>
        112eac:	e59f003c 	ldr	r0, [pc, #3c]	; 112ef0 <TListView::FindDropView(TDragInfo const &, TPoint const &)+0x94>
        112eb0:	e5900000 	ldr	r0, [r0]
        112eb4:	e5901000 	ldr	r1, [r0]
        112eb8:	e5970000 	ldr	r0, [r7]
        112ebc:	eb6ac4db 	bl	1bc4230 <$EQRef__FlT1>
        112ec0:	e3300000 	teq	r0, #0	; 0x0
        112ec4:	0a00000a 	beq	112ef4 <TListView::FindDropView(TDragInfo const &, TPoint const &)+0x98>
        112ec8:	e1a02005 	mov	r2, r5
        112ecc:	e1a01006 	mov	r1, r6
        112ed0:	e1a00004 	mov	r0, r4
        112ed4:	eb667a73 	bl	1ab18a8 <TView::$FindDropView(TDragInfo const &, TPoint const &)>
        112ed8:	e1a04000 	mov	r4, r0
        112edc:	e1a00007 	mov	r0, r7
        112ee0:	eb6ac0b5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112ee4:	e1a00004 	mov	r0, r4
        112ee8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        112eec:	00684bd0 	ldreqd	r4, [r8], -#176
        112ef0:	00684a68 	rsbeq	r4, r8, r8, ror #20
        112ef4:	e24dd008 	sub	sp, sp, #8	; 0x8
        112ef8:	e2840024 	add	r0, r4, #36	; 0x24
        112efc:	eb66e1a4 	bl	1acb594 <$FListBottom>
        112f00:	e3100003 	tst	r0, #3	; 0x3
        112f04:	01a00140 	moveq	r0, r0, asr #2
        112f08:	0a000000 	beq	112f10 <TListView::FindDropView(TDragInfo const &, TPoint const &)+0xb4>
        112f0c:	eb6abc82 	bl	1bc211c <$_RINTError(long)>
        112f10:	e1a08000 	mov	r8, r0
        112f14:	e2840010 	add	r0, r4, #16	; 0x10
        112f18:	e8905000 	ldmia	r0, {ip, lr}
        112f1c:	e88d5000 	stmia	sp, {ip, lr}
        112f20:	e1a02005 	mov	r2, r5
        112f24:	e1a01006 	mov	r1, r6
        112f28:	e1a00004 	mov	r0, r4
        112f2c:	eb667a5e 	bl	1ab18ac <TEditView::$FindDropView(TDragInfo const &, TPoint const &)>
        112f30:	e1300004 	teq	r0, r4
        112f34:	1a000009 	bne	112f60 <TListView::FindDropView(TDragInfo const &, TPoint const &)+0x104>
        112f38:	e5952000 	ldr	r2, [r5]
        112f3c:	e1a02842 	mov	r2, r2, asr #16
        112f40:	e59d1000 	ldr	r1, [sp]
        112f44:	e0421841 	sub	r1, r2, r1, asr #16
        112f48:	e1510008 	cmp	r1, r8
        112f4c:	aa000003 	bge	112f60 <TListView::FindDropView(TDragInfo const &, TPoint const &)+0x104>
        112f50:	e1a00007 	mov	r0, r7
        112f54:	eb6ac098 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112f58:	e1a00009 	mov	r0, r9
        112f5c:	ea000003 	b	112f70 <TListView::FindDropView(TDragInfo const &, TPoint const &)+0x114>
        112f60:	e1a04000 	mov	r4, r0
        112f64:	e1a00007 	mov	r0, r7
        112f68:	eb6ac093 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112f6c:	e1a00004 	mov	r0, r4
        112f70:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

