#include "include/TClipboard.h"

/**
 * Symbol: TClipboard::ClassID( const(void))
 * Address: 0009edfc
 */
TClipboard::ClassID( const(void)) {
    /*
         9edfc:	e3a00065 	mov	r0, #101	; 0x65
         9ee00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClipboard::DerivedFrom( const(long))
 * Address: 0009ee04
 */
TClipboard::DerivedFrom( const(long)) {
    /*
         9ee04:	e1a0c00d 	mov	ip, sp
         9ee08:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         9ee0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         9ee10:	e3310065 	teq	r1, #101	; 0x65
         9ee14:	0a000002 	beq	9ee24 <TClipboard::DerivedFrom( const(long))+0x20>
         9ee18:	eb0711e8 	bl	2635c0 <TView::DerivedFrom( const(long))>
         9ee1c:	e3300000 	teq	r0, #0	; 0x0
         9ee20:	0a000001 	beq	9ee2c <TClipboard::DerivedFrom( const(long))+0x28>
         9ee24:	e3a00001 	mov	r0, #1	; 0x1
         9ee28:	ea000000 	b	9ee30 <TClipboard::DerivedFrom( const(long))+0x2c>
         9ee2c:	e3a00000 	mov	r0, #0	; 0x0
         9ee30:	e20000ff 	and	r0, r0, #255	; 0xff
         9ee34:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TClipboard::Constructor(RefVar const &, TView *)
 * Address: 0009ee38
 */
TClipboard::Constructor(RefVar const &, TView *) {
    /*
         9ee38:	e1a0c00d 	mov	ip, sp
         9ee3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9ee40:	e24cb004 	sub	fp, ip, #4	; 0x4
         9ee44:	e1a04000 	mov	r4, r0
         9ee48:	e24dd004 	sub	sp, sp, #4	; 0x4
         9ee4c:	eb6ca9a1 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
         9ee50:	e2845030 	add	r5, r4, #48	; 0x30
         9ee54:	e59f10a0 	ldr	r1, [pc, #a0]	; 9eefc <TClipboard::Constructor(RefVar const &, TView *)+0xc4>
         9ee58:	e1a00004 	mov	r0, r4
         9ee5c:	eb6cadb9 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         9ee60:	e5951000 	ldr	r1, [r5]
         9ee64:	e2845034 	add	r5, r4, #52	; 0x34
         9ee68:	e5810000 	str	r0, [r1]
         9ee6c:	e59f108c 	ldr	r1, [pc, #8c]	; 9ef00 <TClipboard::Constructor(RefVar const &, TView *)+0xc8>
         9ee70:	e1a00004 	mov	r0, r4
         9ee74:	eb6cadb3 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         9ee78:	e5951000 	ldr	r1, [r5]
         9ee7c:	e5810000 	str	r0, [r1]
         9ee80:	e59f107c 	ldr	r1, [pc, #7c]	; 9ef04 <TClipboard::Constructor(RefVar const &, TView *)+0xcc>
         9ee84:	e1a00004 	mov	r0, r4
         9ee88:	eb6cadae 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         9ee8c:	eb6c8cae 	bl	1bc214c <$AllocateRefHandle(long)>
         9ee90:	e58d0000 	str	r0, [sp]
         9ee94:	e1a0000d 	mov	r0, sp
         9ee98:	e2841038 	add	r1, r4, #56	; 0x38
         9ee9c:	e1a05001 	mov	r5, r1
         9eea0:	eb67d6f4 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         9eea4:	e59d0000 	ldr	r0, [sp]
         9eea8:	eb6c90c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9eeac:	e24dd008 	sub	sp, sp, #8	; 0x8
         9eeb0:	e1a0000d 	mov	r0, sp
         9eeb4:	eb691903 	bl	1ae52c8 <$GetAppAreaBounds(TRect *)>
         9eeb8:	e24dd004 	sub	sp, sp, #4	; 0x4
         9eebc:	e1a00005 	mov	r0, r5
         9eec0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9eec4:	e58d1000 	str	r1, [sp]
         9eec8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         9eecc:	e1a01841 	mov	r1, r1, asr #16
         9eed0:	e59d2000 	ldr	r2, [sp]
         9eed4:	e1a02842 	mov	r2, r2, asr #16
         9eed8:	eb6aca82 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         9eedc:	e28dd004 	add	sp, sp, #4	; 0x4
         9eee0:	e2845040 	add	r5, r4, #64	; 0x40
         9eee4:	e59f101c 	ldr	r1, [pc, #1c]	; 9ef08 <TClipboard::Constructor(RefVar const &, TView *)+0xd0>
         9eee8:	e1a00004 	mov	r0, r4
         9eeec:	eb6cad95 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         9eef0:	e5951000 	ldr	r1, [r5]
         9eef4:	e5810000 	str	r0, [r1]
         9eef8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         9eefc:	00684cc0 	rsbeq	r4, r8, r0, asr #25
         9ef00:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         9ef04:	00682190 	streqb	r2, [r8], -#16
         9ef08:	006820d8 	ldreqd	r2, [r8], -#8
    */
}

/**
 * Symbol: TClipboard::__dt(void)
 * Address: 0009ef0c
 */
TClipboard::~TClipboard(void) {
    /*
         9ef0c:	e1a0c00d 	mov	ip, sp
         9ef10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9ef14:	e24cb004 	sub	fp, ip, #4	; 0x4
         9ef18:	e1a04000 	mov	r4, r0
         9ef1c:	e1a05001 	mov	r5, r1
         9ef20:	e59f0038 	ldr	r0, [pc, #38]	; 9ef60 <TClipboard::__dt(void)+0x54>
         9ef24:	e5840000 	str	r0, [r4]
         9ef28:	e5940040 	ldr	r0, [r4, #64]	; fField64
         9ef2c:	eb6c90a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ef30:	e5940034 	ldr	r0, [r4, #52]	; fField52
         9ef34:	eb6c90a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ef38:	e5940030 	ldr	r0, [r4, #48]	; fField48
         9ef3c:	eb6c909e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ef40:	e1a00004 	mov	r0, r4
         9ef44:	e3a01000 	mov	r1, #0	; 0x0
         9ef48:	eb6ca94f 	bl	1bc948c <TView::$__dt(void)>
         9ef4c:	e3150001 	tst	r5, #1	; 0x1
         9ef50:	11a00004 	movne	r0, r4
         9ef54:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         9ef58:	1a67a537 	bne	1a8843c <$__dl__8TxObjectSFPv>
         9ef5c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         9ef60:	0001a714 	andeq	sl, r1, r4, lsl r7
    */
}

/**
 * Symbol: AllocateClipboardBits__10TClipboardSFRC5TRectP8PixelMap
 * Address: 0009f0e0
 */
void TClipboard::AllocateClipboardBits() {
    /*
         9f0e0:	e1a0c00d 	mov	ip, sp
         9f0e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9f0e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         9f0ec:	e1a04001 	mov	r4, r1
         9f0f0:	eb68f33a 	bl	1adbde0 <$InitBitMap__5TBitsSFRC5TRectP8PixelMap>
         9f0f4:	e1a05000 	mov	r5, r0
         9f0f8:	e5940010 	ldr	r0, [r4, #16]
         9f0fc:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         9f100:	e5a40010 	str	r0, [r4, #16]!
         9f104:	e3a00002 	mov	r0, #2	; 0x2
         9f108:	eb6c8c0f 	bl	1bc214c <$AllocateRefHandle(long)>
         9f10c:	e1a04000 	mov	r4, r0
         9f110:	e3a00000 	mov	r0, #0	; 0x0
         9f114:	e52d006c 	str	r0, [sp, -#108]!
         9f118:	e28d0008 	add	r0, sp, #8	; 0x8
         9f11c:	eb6c4e14 	bl	1bb2974 <$setjmp>
         9f120:	e3300000 	teq	r0, #0	; 0x0
         9f124:	1a000007 	bne	9f148 <AllocateClipboardBits__10TClipboardSFRC5TRectP8PixelMap+0x68>
         9f128:	e1a0000d 	mov	r0, sp
         9f12c:	eb6d03d2 	bl	1be007c <$AddExceptionHandler>
         9f130:	e1a01005 	mov	r1, r5
         9f134:	e59f0008 	ldr	r0, [pc, #8]	; 9f144 <AllocateClipboardBits__10TClipboardSFRC5TRectP8PixelMap+0x64>
         9f138:	eb6c8bff 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         9f13c:	e5840000 	str	r0, [r4]
         9f140:	ea000007 	b	9f164 <AllocateClipboardBits__10TClipboardSFRC5TRectP8PixelMap+0x84>
         9f144:	006820d8 	ldreqd	r2, [r8], -#8
         9f148:	e59d0060 	ldr	r0, [sp, #96]
         9f14c:	e59f1030 	ldr	r1, [pc, #30]	; 9f184 <AllocateClipboardBits__10TClipboardSFRC5TRectP8PixelMap+0xa4>
         9f150:	e5911000 	ldr	r1, [r1]
         9f154:	eb6d100e 	bl	1be3194 <$Subexception>
         9f158:	e3300000 	teq	r0, #0	; 0x0
         9f15c:	01a0000d 	moveq	r0, sp
         9f160:	0b6d0bfb 	bleq	1be2154 <$NextHandler>
         9f164:	e1a0000d 	mov	r0, sp
         9f168:	eb6d07d2 	bl	1be10b8 <$ExitHandler>
         9f16c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         9f170:	e5945000 	ldr	r5, [r4]
         9f174:	e1a00004 	mov	r0, r4
         9f178:	eb6c900f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f17c:	e1a00005 	mov	r0, r5
         9f180:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         9f184:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint
 * Address: 0009f188
 */
void TClipboard::NewClipboard() {
    /*
         9f188:	e1a0c00d 	mov	ip, sp
         9f18c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9f190:	e24cb004 	sub	fp, ip, #4	; 0x4
         9f194:	e1a04000 	mov	r4, r0
         9f198:	e1a05002 	mov	r5, r2
         9f19c:	e24dd008 	sub	sp, sp, #8	; 0x8
         9f1a0:	e51b202c 	ldr	r2, [fp, -#44]
         9f1a4:	e59f03a0 	ldr	r0, [pc, #3a0]	; 9f54c <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x3c4>
         9f1a8:	e3a06000 	mov	r6, #0	; 0x0
         9f1ac:	e3320000 	teq	r2, #0	; 0x0
         9f1b0:	e58d0004 	str	r0, [sp, #4]	; fField4
         9f1b4:	1a00000c 	bne	9f1ec <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x64>
         9f1b8:	e50bd02c 	str	sp, [fp, -#44]
         9f1bc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9f1c0:	e5900000 	ldr	r0, [r0]
         9f1c4:	eb691c5b 	bl	1ae6338 <TRootView::$GetClipboardIcon(void)>
         9f1c8:	e3300000 	teq	r0, #0	; 0x0
         9f1cc:	15900010 	ldrne	r0, [r0, #16]
         9f1d0:	158d0000 	strne	r0, [sp]
         9f1d4:	1a000004 	bne	9f1ec <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x64>
         9f1d8:	e5cd6003 	strb	r6, [sp, #3]
         9f1dc:	e5cd6002 	strb	r6, [sp, #2]	; fField2
         9f1e0:	e3a00048 	mov	r0, #72	; 0x48
         9f1e4:	e5cd0001 	strb	r0, [sp, #1]
         9f1e8:	e5cd6000 	strb	r6, [sp]
         9f1ec:	e24dd028 	sub	sp, sp, #40	; 0x28
         9f1f0:	e28d0020 	add	r0, sp, #32	; 0x20
         9f1f4:	e8951008 	ldmia	r5, {r3, ip}
         9f1f8:	e8801008 	stmia	r0, {r3, ip}
         9f1fc:	e28d1020 	add	r1, sp, #32	; 0x20
         9f200:	e51b2034 	ldr	r2, [fp, -#52]	; fField52
         9f204:	e1a00002 	mov	r0, r2
         9f208:	e5922000 	ldr	r2, [r2]
         9f20c:	e1a0e00f 	mov	lr, pc
         9f210:	e282f0dc 	add	pc, r2, #220	; 0xdc
         9f214:	eb6c8bcc 	bl	1bc214c <$AllocateRefHandle(long)>
         9f218:	e58d001c 	str	r0, [sp, #28]
         9f21c:	e5940000 	ldr	r0, [r4]
         9f220:	e5900000 	ldr	r0, [r0]
         9f224:	eb6c9820 	bl	1bc52ac <$Length(long)>
         9f228:	e58d0018 	str	r0, [sp, #24]
         9f22c:	eb67f2da 	bl	1a9bd9c <$MakeArray(long)>
         9f230:	eb6c8bc5 	bl	1bc214c <$AllocateRefHandle(long)>
         9f234:	e58d0014 	str	r0, [sp, #20]
         9f238:	e59d0018 	ldr	r0, [sp, #24]
         9f23c:	eb67f2d6 	bl	1a9bd9c <$MakeArray(long)>
         9f240:	eb6c8bc1 	bl	1bc214c <$AllocateRefHandle(long)>
         9f244:	e58d0010 	str	r0, [sp, #16]
         9f248:	e3a00002 	mov	r0, #2	; 0x2
         9f24c:	eb6c8bbe 	bl	1bc214c <$AllocateRefHandle(long)>
         9f250:	e58d000c 	str	r0, [sp, #12]	; fField12
         9f254:	e3a00002 	mov	r0, #2	; 0x2
         9f258:	eb6c8bbb 	bl	1bc214c <$AllocateRefHandle(long)>
         9f25c:	e1a06000 	mov	r6, r0
         9f260:	e3a00002 	mov	r0, #2	; 0x2
         9f264:	eb6c8bb8 	bl	1bc214c <$AllocateRefHandle(long)>
         9f268:	e58d0008 	str	r0, [sp, #8]
         9f26c:	e3a00002 	mov	r0, #2	; 0x2
         9f270:	eb6c8bb5 	bl	1bc214c <$AllocateRefHandle(long)>
         9f274:	e58d0004 	str	r0, [sp, #4]	; fField4
         9f278:	e3a00002 	mov	r0, #2	; 0x2
         9f27c:	eb6c8bb2 	bl	1bc214c <$AllocateRefHandle(long)>
         9f280:	e3a05000 	mov	r5, #0	; 0x0
         9f284:	e58d0000 	str	r0, [sp]
         9f288:	e59d0018 	ldr	r0, [sp, #24]
         9f28c:	e3500000 	cmp	r0, #0	; 0x0
         9f290:	da000072 	ble	9f460 <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x2d8>
         9f294:	e24dd004 	sub	sp, sp, #4	; 0x4
         9f298:	e1a01005 	mov	r1, r5
         9f29c:	e1a00004 	mov	r0, r4
         9f2a0:	eb68c56a 	bl	1ad0850 <TDragInfo::$GetItemTypes( const(long))>
         9f2a4:	eb6c8ba8 	bl	1bc214c <$AllocateRefHandle(long)>
         9f2a8:	e58d0000 	str	r0, [sp]
         9f2ac:	e1a0000d 	mov	r0, sp
         9f2b0:	eb6c8fcd 	bl	1bc31ec <$EnsureInternal(RefVar const &)>
         9f2b4:	eb6c8ba4 	bl	1bc214c <$AllocateRefHandle(long)>
         9f2b8:	e1a07000 	mov	r7, r0
         9f2bc:	e5902000 	ldr	r2, [r0]
         9f2c0:	e59d0018 	ldr	r0, [sp, #24]
         9f2c4:	e5900000 	ldr	r0, [r0]
         9f2c8:	e1a01005 	mov	r1, r5
         9f2cc:	eb6c9c21 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9f2d0:	e1a00007 	mov	r0, r7
         9f2d4:	eb6c8fb8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f2d8:	e59d0000 	ldr	r0, [sp]
         9f2dc:	eb6c8fb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f2e0:	e1a01005 	mov	r1, r5
         9f2e4:	e1a00004 	mov	r0, r4
         9f2e8:	eb68c553 	bl	1ad083c <TDragInfo::$GetItemDragRef( const(long))>
         9f2ec:	e59d1010 	ldr	r1, [sp, #16]
         9f2f0:	e5810000 	str	r0, [r1]
         9f2f4:	e1a01005 	mov	r1, r5
         9f2f8:	e1a00004 	mov	r0, r4
         9f2fc:	eb68c553 	bl	1ad0850 <TDragInfo::$GetItemTypes( const(long))>
         9f300:	eb6c97e9 	bl	1bc52ac <$Length(long)>
         9f304:	e1a09000 	mov	r9, r0
         9f308:	eb67f2a3 	bl	1a9bd9c <$MakeArray(long)>
         9f30c:	e1a01005 	mov	r1, r5
         9f310:	e5860000 	str	r0, [r6]
         9f314:	e1a00004 	mov	r0, r4
         9f318:	eb68f2a6 	bl	1adbdb8 <TDragInfo::$GetItemView( const(long))>
         9f31c:	e1a08000 	mov	r8, r0
         9f320:	e3a07000 	mov	r7, #0	; 0x0
         9f324:	e3590000 	cmp	r9, #0	; 0x0
         9f328:	da000042 	ble	9f438 <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x2b0>
         9f32c:	e1a02007 	mov	r2, r7
         9f330:	e1a01005 	mov	r1, r5
         9f334:	e1a00004 	mov	r0, r4
         9f338:	eb68c541 	bl	1ad0844 <$GetItemIndType__9TDragInfoCFlT1>
         9f33c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
         9f340:	e5810000 	str	r0, [r1]
         9f344:	e28d2010 	add	r2, sp, #16	; 0x10
         9f348:	e28d100c 	add	r1, sp, #12	; 0xc
         9f34c:	e51b3034 	ldr	r3, [fp, -#52]	; fField52
         9f350:	e1a00003 	mov	r0, r3
         9f354:	e51ba034 	ldr	sl, [fp, -#52]	; fField52
         9f358:	e5933000 	ldr	r3, [r3]
         9f35c:	e1a0e00f 	mov	lr, pc
         9f360:	e283f0cc 	add	pc, r3, #204	; 0xcc
         9f364:	e59d1008 	ldr	r1, [sp, #8]
         9f368:	e5810000 	str	r0, [r1]
         9f36c:	e3300002 	teq	r0, #2	; 0x2
         9f370:	1a00000a 	bne	9f3a0 <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x218>
         9f374:	e3380000 	teq	r8, #0	; 0x0
         9f378:	0a000008 	beq	9f3a0 <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x218>
         9f37c:	e1a0a008 	mov	sl, r8
         9f380:	e28d2010 	add	r2, sp, #16	; 0x10
         9f384:	e28d100c 	add	r1, sp, #12	; 0xc
         9f388:	e1a00008 	mov	r0, r8
         9f38c:	e5983000 	ldr	r3, [r8]
         9f390:	e1a0e00f 	mov	lr, pc
         9f394:	e283f0cc 	add	pc, r3, #204	; 0xcc
         9f398:	e59d1008 	ldr	r1, [sp, #8]
         9f39c:	e5810000 	str	r0, [r1]
         9f3a0:	e28d0008 	add	r0, sp, #8	; 0x8
         9f3a4:	eb6c8f90 	bl	1bc31ec <$EnsureInternal(RefVar const &)>
         9f3a8:	e59d1008 	ldr	r1, [sp, #8]
         9f3ac:	e5810000 	str	r0, [r1]
         9f3b0:	e28d1008 	add	r1, sp, #8	; 0x8
         9f3b4:	e28d000c 	add	r0, sp, #12	; 0xc
         9f3b8:	eb68b8c5 	bl	1acd6d4 <$CheckViewBounds__FRC6RefVarT1>
         9f3bc:	e24dd004 	sub	sp, sp, #4	; 0x4
         9f3c0:	e59a0010 	ldr	r0, [sl, #16]
         9f3c4:	e58d0000 	str	r0, [sp]
         9f3c8:	e1a0100d 	mov	r1, sp
         9f3cc:	e28d000c 	add	r0, sp, #12	; 0xc
         9f3d0:	ebfff5a0 	bl	9ca58 <OffsetBoundsRef(RefVar const &, TPoint const &)>
         9f3d4:	e28dd004 	add	sp, sp, #4	; 0x4
         9f3d8:	e59d0008 	ldr	r0, [sp, #8]
         9f3dc:	e5902000 	ldr	r2, [r0]
         9f3e0:	e1a01007 	mov	r1, r7
         9f3e4:	e5960000 	ldr	r0, [r6]
         9f3e8:	eb6c9bda 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9f3ec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9f3f0:	e5900000 	ldr	r0, [r0]
         9f3f4:	e3300002 	teq	r0, #2	; 0x2
         9f3f8:	1a00000b 	bne	9f42c <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x2a4>
         9f3fc:	e59f014c 	ldr	r0, [pc, #14c]	; 9f550 <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x3c8>
         9f400:	e5900000 	ldr	r0, [r0]
         9f404:	e5901000 	ldr	r1, [r0]
         9f408:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9f40c:	e5900000 	ldr	r0, [r0]
         9f410:	eb6c9386 	bl	1bc4230 <$EQRef__FlT1>
         9f414:	e3300000 	teq	r0, #0	; 0x0
         9f418:	0a000003 	beq	9f42c <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x2a4>
         9f41c:	e59d0008 	ldr	r0, [sp, #8]
         9f420:	e5901000 	ldr	r1, [r0]
         9f424:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9f428:	e5801000 	str	r1, [r0]
         9f42c:	e2877001 	add	r7, r7, #1	; 0x1
         9f430:	e1570009 	cmp	r7, r9
         9f434:	baffffbc 	blt	9f32c <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x1a4>
         9f438:	e5962000 	ldr	r2, [r6]
         9f43c:	e59d0014 	ldr	r0, [sp, #20]
         9f440:	e5900000 	ldr	r0, [r0]
         9f444:	e1a01005 	mov	r1, r5
         9f448:	eb6c9bc2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         9f44c:	e28dd004 	add	sp, sp, #4	; 0x4
         9f450:	e2855001 	add	r5, r5, #1	; 0x1
         9f454:	e59d0018 	ldr	r0, [sp, #24]
         9f458:	e1550000 	cmp	r5, r0
         9f45c:	baffff8c 	blt	9f294 <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x10c>
         9f460:	e24dd00c 	sub	sp, sp, #12	; 0xc
         9f464:	e59f00e8 	ldr	r0, [pc, #e8]	; 9f554 <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x3cc>
         9f468:	eb6c8b3f 	bl	1bc216c <$Clone(RefVar const &)>
         9f46c:	eb6c8b36 	bl	1bc214c <$AllocateRefHandle(long)>
         9f470:	e58d0008 	str	r0, [sp, #8]
         9f474:	e28d2020 	add	r2, sp, #32	; 0x20
         9f478:	e59f10d8 	ldr	r1, [pc, #d8]	; 9f558 <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x3d0>
         9f47c:	e28d0008 	add	r0, sp, #8	; 0x8
         9f480:	eb6c9bb8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9f484:	e28d201c 	add	r2, sp, #28	; 0x1c
         9f488:	e59f10cc 	ldr	r1, [pc, #cc]	; 9f55c <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x3d4>
         9f48c:	e28d0008 	add	r0, sp, #8	; 0x8
         9f490:	eb6c9bb4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9f494:	e28d002c 	add	r0, sp, #44	; 0x2c
         9f498:	eb6d40bf 	bl	1bef79c <$ToObject(TRect const &)>
         9f49c:	eb6c8b2a 	bl	1bc214c <$AllocateRefHandle(long)>
         9f4a0:	e58d0000 	str	r0, [sp]
         9f4a4:	e1a0200d 	mov	r2, sp
         9f4a8:	e59f10b0 	ldr	r1, [pc, #b0]	; 9f560 <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x3d8>
         9f4ac:	e28d0008 	add	r0, sp, #8	; 0x8
         9f4b0:	eb6c9bac 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9f4b4:	e59d0000 	ldr	r0, [sp]
         9f4b8:	eb6c8f3f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f4bc:	e28d2028 	add	r2, sp, #40	; 0x28
         9f4c0:	e59f109c 	ldr	r1, [pc, #9c]	; 9f564 <NewClipboard__10TClipboardSFRC9TDragInfoP5TViewRC5TRectPC6TPoint+0x3dc>
         9f4c4:	e28d0008 	add	r0, sp, #8	; 0x8
         9f4c8:	eb6c9ba6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9f4cc:	e28d100c 	add	r1, sp, #12	; 0xc
         9f4d0:	e1a00004 	mov	r0, r4
         9f4d4:	e51b202c 	ldr	r2, [fp, -#44]
         9f4d8:	eb690f3e 	bl	1ae31d8 <$CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint>
         9f4dc:	eb6c8b1a 	bl	1bc214c <$AllocateRefHandle(long)>
         9f4e0:	e58d0004 	str	r0, [sp, #4]	; fField4
         9f4e4:	e28d2004 	add	r2, sp, #4	; 0x4
         9f4e8:	e28d1008 	add	r1, sp, #8	; 0x8
         9f4ec:	e59d0038 	ldr	r0, [sp, #56]	; fField56
         9f4f0:	e5900000 	ldr	r0, [r0]
         9f4f4:	eb687e90 	bl	1abef3c <TRootView::$AddClipboard(RefVar const &, RefVar const &)>
         9f4f8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9f4fc:	eb6c8f2e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f500:	e59d0008 	ldr	r0, [sp, #8]
         9f504:	eb6c8f2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f508:	e5bd000c 	ldr	r0, [sp, #12]!	; fField12
         9f50c:	eb6c8f2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f510:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9f514:	eb6c8f28 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f518:	e59d0008 	ldr	r0, [sp, #8]
         9f51c:	eb6c8f26 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f520:	e1a00006 	mov	r0, r6
         9f524:	eb6c8f24 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f528:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9f52c:	eb6c8f22 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f530:	e59d0010 	ldr	r0, [sp, #16]
         9f534:	eb6c8f20 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f538:	e59d0014 	ldr	r0, [sp, #20]
         9f53c:	eb6c8f1e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f540:	e59d001c 	ldr	r0, [sp, #28]
         9f544:	eb6c8f1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f548:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         9f54c:	0c101934 	ldceq	9, cr1, [r0], -#208
         9f550:	00684ac0 	rsbeq	r4, r8, r0, asr #21
         9f554:	00681320 	rsbeq	r1, r8, r0, lsr #6
         9f558:	00684cc0 	rsbeq	r4, r8, r0, asr #25
         9f55c:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         9f560:	00682190 	streqb	r2, [r8], -#16
         9f564:	006820d8 	ldreqd	r2, [r8], -#8
    */
}

/**
 * Symbol: TClipboard::MoveIcon(TPoint const &)
 * Address: 0009f568
 */
TClipboard::MoveIcon(TPoint const &) {
    /*
         9f568:	e1a0c00d 	mov	ip, sp
         9f56c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9f570:	e24cb004 	sub	fp, ip, #4	; 0x4
         9f574:	e1a04001 	mov	r4, r1
         9f578:	e1a01000 	mov	r1, r0
         9f57c:	e59f0150 	ldr	r0, [pc, #150]	; 9f6d4 <TClipboard::MoveIcon(TPoint const &)+0x16c>
         9f580:	e5900000 	ldr	r0, [r0]
         9f584:	eb691b6d 	bl	1ae6340 <TRootView::$GetClipboardIcon(TClipboard *)>
         9f588:	e1a05000 	mov	r5, r0
         9f58c:	e24dd008 	sub	sp, sp, #8	; 0x8
         9f590:	e2800010 	add	r0, r0, #16	; 0x10
         9f594:	e1a06000 	mov	r6, r0
         9f598:	e5902004 	ldr	r2, [r0, #4]	; fField4
         9f59c:	e1a02822 	mov	r2, r2, lsr #16
         9f5a0:	e5901000 	ldr	r1, [r0]
         9f5a4:	e1a01821 	mov	r1, r1, lsr #16
         9f5a8:	e0421001 	sub	r1, r2, r1
         9f5ac:	e1a01801 	mov	r1, r1, lsl #16
         9f5b0:	e1a01841 	mov	r1, r1, asr #16
         9f5b4:	e5902006 	ldr	r2, [r0, #6]
         9f5b8:	e1a02822 	mov	r2, r2, lsr #16
         9f5bc:	e5900002 	ldr	r0, [r0, #2]	; fField2
         9f5c0:	e1a00820 	mov	r0, r0, lsr #16
         9f5c4:	e0420000 	sub	r0, r2, r0
         9f5c8:	e1a00800 	mov	r0, r0, lsl #16
         9f5cc:	e1a00840 	mov	r0, r0, asr #16
         9f5d0:	e1a0300d 	mov	r3, sp
         9f5d4:	e1a02004 	mov	r2, r4
         9f5d8:	eb687e51 	bl	1abef24 <$CalcIconBounds__10TClipboardSFsT1RC6TPointP5TRect>
         9f5dc:	e24dd008 	sub	sp, sp, #8	; 0x8
         9f5e0:	e3a04000 	mov	r4, #0	; 0x0
         9f5e4:	e1a0000d 	mov	r0, sp
         9f5e8:	eb691736 	bl	1ae52c8 <$GetAppAreaBounds(TRect *)>
         9f5ec:	e59d000a 	ldr	r0, [sp, #10]
         9f5f0:	e1a00840 	mov	r0, r0, asr #16
         9f5f4:	e3500000 	cmp	r0, #0	; 0x0
         9f5f8:	d3a04001 	movle	r4, #1	; 0x1
         9f5fc:	e59d0008 	ldr	r0, [sp, #8]
         9f600:	e1a00840 	mov	r0, r0, asr #16
         9f604:	e3500000 	cmp	r0, #0	; 0x0
         9f608:	d3844002 	orrle	r4, r4, #2	; 0x2
         9f60c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9f610:	e59d0000 	ldr	r0, [sp]
         9f614:	e0410000 	sub	r0, r1, r0
         9f618:	e1a00800 	mov	r0, r0, lsl #16
         9f61c:	e1a00840 	mov	r0, r0, asr #16
         9f620:	e59d100e 	ldr	r1, [sp, #14]
         9f624:	e1500841 	cmp	r0, r1, asr #16
         9f628:	d3844004 	orrle	r4, r4, #4	; 0x4
         9f62c:	e24dd004 	sub	sp, sp, #4	; 0x4
         9f630:	e59d100a 	ldr	r1, [sp, #10]
         9f634:	e59d0006 	ldr	r0, [sp, #6]
         9f638:	e0410000 	sub	r0, r1, r0
         9f63c:	e1a00800 	mov	r0, r0, lsl #16
         9f640:	e1a00840 	mov	r0, r0, asr #16
         9f644:	e59d1010 	ldr	r1, [sp, #16]
         9f648:	e1500841 	cmp	r0, r1, asr #16
         9f64c:	d3844008 	orrle	r4, r4, #8	; 0x8
         9f650:	e1a00104 	mov	r0, r4, lsl #2
         9f654:	eb6c8abc 	bl	1bc214c <$AllocateRefHandle(long)>
         9f658:	e58d0000 	str	r0, [sp]
         9f65c:	e1a0200d 	mov	r2, sp
         9f660:	e2850024 	add	r0, r5, #36	; 0x24
         9f664:	e59f106c 	ldr	r1, [pc, #6c]	; 9f6d8 <TClipboard::MoveIcon(TPoint const &)+0x170>
         9f668:	eb6c9b3e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9f66c:	e59d0000 	ldr	r0, [sp]
         9f670:	eb6c8ed1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f674:	e24dd004 	sub	sp, sp, #4	; 0x4
         9f678:	e5960000 	ldr	r0, [r6]
         9f67c:	e58d0000 	str	r0, [sp]
         9f680:	e59d0010 	ldr	r0, [sp, #16]
         9f684:	e59d1000 	ldr	r1, [sp]
         9f688:	e0400001 	sub	r0, r0, r1
         9f68c:	e1a00800 	mov	r0, r0, lsl #16
         9f690:	e1a00840 	mov	r0, r0, asr #16
         9f694:	e59d1012 	ldr	r1, [sp, #18]
         9f698:	e41d2004 	ldr	r2, [sp], -#4	; fField4
         9f69c:	e1a02822 	mov	r2, r2, lsr #16
         9f6a0:	e0411002 	sub	r1, r1, r2
         9f6a4:	e1a01801 	mov	r1, r1, lsl #16
         9f6a8:	e1a01841 	mov	r1, r1, asr #16
         9f6ac:	e5cd0003 	strb	r0, [sp, #3]
         9f6b0:	e1a00440 	mov	r0, r0, asr #8
         9f6b4:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9f6b8:	e5cd1001 	strb	r1, [sp, #1]
         9f6bc:	e1a00441 	mov	r0, r1, asr #8
         9f6c0:	e5cd0000 	strb	r0, [sp]
         9f6c4:	e1a00005 	mov	r0, r5
         9f6c8:	e49d1008 	ldr	r1, [sp], #8
         9f6cc:	eb6ca78a 	bl	1bc94fc <TView::$DoMoveCommand(TPoint)>
         9f6d0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         9f6d4:	0c101934 	ldceq	9, cr1, [r0], -#208
         9f6d8:	00683ed0 	ldreqd	r3, [r8], -#224
    */
}

/**
 * Symbol: TClipboard::CalcDataBitsBounds(TRect *)
 * Address: 0009f6dc
 */
TClipboard::CalcDataBitsBounds(TRect *) {
    /*
         9f6dc:	e1a0c00d 	mov	ip, sp
         9f6e0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9f6e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         9f6e8:	e1a05000 	mov	r5, r0
         9f6ec:	e1a04001 	mov	r4, r1
         9f6f0:	e1a06001 	mov	r6, r1
         9f6f4:	e1a01000 	mov	r1, r0
         9f6f8:	e59f0148 	ldr	r0, [pc, #148]	; 9f848 <TClipboard::CalcDataBitsBounds(TRect *)+0x16c>
         9f6fc:	e5900000 	ldr	r0, [r0]
         9f700:	eb691b0e 	bl	1ae6340 <TRootView::$GetClipboardIcon(TClipboard *)>
         9f704:	e2800010 	add	r0, r0, #16	; 0x10
         9f708:	e8905000 	ldmia	r0, {ip, lr}
         9f70c:	e8865000 	stmia	r6, {ip, lr}
         9f710:	e24dd008 	sub	sp, sp, #8	; 0x8
         9f714:	e1a0000d 	mov	r0, sp
         9f718:	eb6916ea 	bl	1ae52c8 <$GetAppAreaBounds(TRect *)>
         9f71c:	e2850038 	add	r0, r5, #56	; 0x38
         9f720:	e1a01000 	mov	r1, r0
         9f724:	e5902006 	ldr	r2, [r0, #6]
         9f728:	e1a02822 	mov	r2, r2, lsr #16
         9f72c:	e5900002 	ldr	r0, [r0, #2]	; fField2
         9f730:	e1a00820 	mov	r0, r0, lsr #16
         9f734:	e0420000 	sub	r0, r2, r0
         9f738:	e1a00800 	mov	r0, r0, lsl #16
         9f73c:	e1a00840 	mov	r0, r0, asr #16
         9f740:	e5942002 	ldr	r2, [r4, #2]	; fField2
         9f744:	e1a02822 	mov	r2, r2, lsr #16
         9f748:	e0822000 	add	r2, r2, r0
         9f74c:	e5c42007 	strb	r2, [r4, #7]
         9f750:	e1a02442 	mov	r2, r2, asr #8
         9f754:	e5c42006 	strb	r2, [r4, #6]
         9f758:	e5942006 	ldr	r2, [r4, #6]
         9f75c:	e1a02842 	mov	r2, r2, asr #16
         9f760:	e59d3006 	ldr	r3, [sp, #6]
         9f764:	e1520843 	cmp	r2, r3, asr #16
         9f768:	da000011 	ble	9f7b4 <TClipboard::CalcDataBitsBounds(TRect *)+0xd8>
         9f76c:	e59d2004 	ldr	r2, [sp, #4]	; fField4
         9f770:	e0420000 	sub	r0, r2, r0
         9f774:	e5c40003 	strb	r0, [r4, #3]
         9f778:	e1a00440 	mov	r0, r0, asr #8
         9f77c:	e5c40002 	strb	r0, [r4, #2]	; fField2
         9f780:	e5942002 	ldr	r2, [r4, #2]	; fField2
         9f784:	e1a02842 	mov	r2, r2, asr #16
         9f788:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         9f78c:	e1520840 	cmp	r2, r0, asr #16
         9f790:	aa000003 	bge	9f7a4 <TClipboard::CalcDataBitsBounds(TRect *)+0xc8>
         9f794:	e59d0000 	ldr	r0, [sp]
         9f798:	e5c40003 	strb	r0, [r4, #3]
         9f79c:	e1a00440 	mov	r0, r0, asr #8
         9f7a0:	e5c40002 	strb	r0, [r4, #2]	; fField2
         9f7a4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9f7a8:	e5c40007 	strb	r0, [r4, #7]
         9f7ac:	e1a00440 	mov	r0, r0, asr #8
         9f7b0:	e5c40006 	strb	r0, [r4, #6]
         9f7b4:	e5910004 	ldr	r0, [r1, #4]	; fField4
         9f7b8:	e1a00820 	mov	r0, r0, lsr #16
         9f7bc:	e5911000 	ldr	r1, [r1]
         9f7c0:	e1a01821 	mov	r1, r1, lsr #16
         9f7c4:	e0400001 	sub	r0, r0, r1
         9f7c8:	e1a00800 	mov	r0, r0, lsl #16
         9f7cc:	e1a00840 	mov	r0, r0, asr #16
         9f7d0:	e5941000 	ldr	r1, [r4]
         9f7d4:	e1a01821 	mov	r1, r1, lsr #16
         9f7d8:	e0811000 	add	r1, r1, r0
         9f7dc:	e5c41005 	strb	r1, [r4, #5]
         9f7e0:	e1a01441 	mov	r1, r1, asr #8
         9f7e4:	e5c41004 	strb	r1, [r4, #4]	; fField4
         9f7e8:	e5942004 	ldr	r2, [r4, #4]	; fField4
         9f7ec:	e1a02842 	mov	r2, r2, asr #16
         9f7f0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9f7f4:	e1520841 	cmp	r2, r1, asr #16
         9f7f8:	da000011 	ble	9f844 <TClipboard::CalcDataBitsBounds(TRect *)+0x168>
         9f7fc:	e59d1006 	ldr	r1, [sp, #6]
         9f800:	e0410000 	sub	r0, r1, r0
         9f804:	e5c40001 	strb	r0, [r4, #1]
         9f808:	e1a00440 	mov	r0, r0, asr #8
         9f80c:	e5c40000 	strb	r0, [r4]
         9f810:	e5941000 	ldr	r1, [r4]
         9f814:	e1a01841 	mov	r1, r1, asr #16
         9f818:	e59d0000 	ldr	r0, [sp]
         9f81c:	e1510840 	cmp	r1, r0, asr #16
         9f820:	aa000003 	bge	9f834 <TClipboard::CalcDataBitsBounds(TRect *)+0x158>
         9f824:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         9f828:	e5c40001 	strb	r0, [r4, #1]
         9f82c:	e1a00440 	mov	r0, r0, asr #8
         9f830:	e5c40000 	strb	r0, [r4]
         9f834:	e59d0006 	ldr	r0, [sp, #6]
         9f838:	e5c40005 	strb	r0, [r4, #5]
         9f83c:	e1a00440 	mov	r0, r0, asr #8
         9f840:	e5c40004 	strb	r0, [r4, #4]	; fField4
         9f844:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         9f848:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TruncateLabel__10TClipboardSFP11TRichStringRC6RefVar
 * Address: 0009f84c
 */
void TClipboard::TruncateLabel() {
    /*
         9f84c:	e1a0c00d 	mov	ip, sp
         9f850:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9f854:	e24cb004 	sub	fp, ip, #4	; 0x4
         9f858:	e1a04000 	mov	r4, r0
         9f85c:	e1a05001 	mov	r5, r1
         9f860:	e24dd044 	sub	sp, sp, #68	; 0x44
         9f864:	e3a0a832 	mov	sl, #3276800	; 0x320000
         9f868:	e3a07000 	mov	r7, #0	; 0x0
         9f86c:	e3a06000 	mov	r6, #0	; 0x0
         9f870:	e590800c 	ldr	r8, [r0, #12]	; fField12
         9f874:	e28d003c 	add	r0, sp, #60	; 0x3c
         9f878:	e59f102c 	ldr	r1, [pc, #2c]	; 9f8ac <TruncateLabel__10TClipboardSFP11TRichStringRC6RefVar+0x60>	; fField2
         9f87c:	e8915000 	ldmia	r1, {ip, lr}
         9f880:	e8805000 	stmia	r0, {ip, lr}
         9f884:	e3a00002 	mov	r0, #2	; 0x2
         9f888:	eb6c8a2f 	bl	1bc214c <$AllocateRefHandle(long)>
         9f88c:	e3a09000 	mov	r9, #0	; 0x0
         9f890:	e58d0000 	str	r0, [sp]
         9f894:	e5a09004 	str	r9, [r0, #4]!	; fField4
         9f898:	e58d901c 	str	r9, [sp, #28]
         9f89c:	e1a0100d 	mov	r1, sp
         9f8a0:	e1a00005 	mov	r0, r5
         9f8a4:	eb6ca70e 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
         9f8a8:	ea000010 	b	9f8f0 <TruncateLabel__10TClipboardSFP11TRichStringRC6RefVar+0xa4>
         9f8ac:	00371290 	mlaeqs	r7, r0, r2, r1
         9f8b0:	e28d3020 	add	r3, sp, #32	; 0x20
         9f8b4:	e3a02000 	mov	r2, #0	; 0x0
         9f8b8:	e92d000c 	stmdb	sp!, {r2, r3}
         9f8bc:	e24dd008 	sub	sp, sp, #8	; 0x8
         9f8c0:	e28d104c 	add	r1, sp, #76	; 0x4c
         9f8c4:	e8915000 	ldmia	r1, {ip, lr}
         9f8c8:	e88d5000 	stmia	sp, {ip, lr}
         9f8cc:	e28d3010 	add	r3, sp, #16	; 0x10
         9f8d0:	e1a01006 	mov	r1, r6
         9f8d4:	e1a00004 	mov	r0, r4
         9f8d8:	e3a02001 	mov	r2, #1	; 0x1
         9f8dc:	eb6ac7f5 	bl	1b518b8 <$MeasureRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)>
         9f8e0:	e28dd010 	add	sp, sp, #16	; 0x10
         9f8e4:	e59d0034 	ldr	r0, [sp, #52]	; fField52
         9f8e8:	e0807007 	add	r7, r0, r7
         9f8ec:	e2866001 	add	r6, r6, #1	; 0x1
         9f8f0:	e157000a 	cmp	r7, sl
         9f8f4:	b1560008 	cmplt	r6, r8
         9f8f8:	baffffec 	blt	9f8b0 <TruncateLabel__10TClipboardSFP11TRichStringRC6RefVar+0x64>
         9f8fc:	e1560008 	cmp	r6, r8
         9f900:	aa000015 	bge	9f95c <TruncateLabel__10TClipboardSFP11TRichStringRC6RefVar+0x110>
         9f904:	e24dd004 	sub	sp, sp, #4	; 0x4
         9f908:	e3a000c9 	mov	r0, #201	; 0xc9
         9f90c:	eb6c1679 	bl	1ba52f8 <$U_CONST_CHAR>
         9f910:	e5cd0001 	strb	r0, [sp, #1]
         9f914:	e1a00440 	mov	r0, r0, asr #8
         9f918:	e44d0028 	strb	r0, [sp], -#40
         9f91c:	e5cd902b 	strb	r9, [sp, #43]
         9f920:	e5cd902a 	strb	r9, [sp, #42]
         9f924:	e28d1028 	add	r1, sp, #40	; 0x28
         9f928:	e1a0000d 	mov	r0, sp
         9f92c:	eb04346d 	bl	1acae8 <TRichString::__ct(unsigned short *)>
         9f930:	e3a03001 	mov	r3, #1	; 0x1
         9f934:	e3a02000 	mov	r2, #0	; 0x0
         9f938:	e92d000c 	stmdb	sp!, {r2, r3}
         9f93c:	e0482006 	sub	r2, r8, r6
         9f940:	e28d3008 	add	r3, sp, #8	; 0x8
         9f944:	e1a01006 	mov	r1, r6
         9f948:	e1a00004 	mov	r0, r4
         9f94c:	eb6c47d1 	bl	1bb1898 <TRichString::$MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)>
         9f950:	e5bd0008 	ldr	r0, [sp, #8]!
         9f954:	eb6c8e18 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f958:	e28dd02c 	add	sp, sp, #44	; 0x2c
         9f95c:	e59d001c 	ldr	r0, [sp, #28]
         9f960:	e3300000 	teq	r0, #0	; 0x0
         9f964:	159d001c 	ldrne	r0, [sp, #28]
         9f968:	1b6ab75b 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
         9f96c:	e59d0000 	ldr	r0, [sp]
         9f970:	eb6c8e11 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9f974:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint
 * Address: 0009fcf0
 */
void TClipboard::CreateLabelForm() {
    /*
         9fcf0:	e1a0c00d 	mov	ip, sp
         9fcf4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         9fcf8:	e24cb004 	sub	fp, ip, #4	; 0x4
         9fcfc:	e1a06000 	mov	r6, r0
         9fd00:	e1a04001 	mov	r4, r1
         9fd04:	e1a07002 	mov	r7, r2
         9fd08:	e24dd00c 	sub	sp, sp, #12	; 0xc
         9fd0c:	e3a00002 	mov	r0, #2	; 0x2
         9fd10:	eb6c890d 	bl	1bc214c <$AllocateRefHandle(long)>
         9fd14:	e58d0008 	str	r0, [sp, #8]
         9fd18:	e3a00002 	mov	r0, #2	; 0x2
         9fd1c:	eb6c890a 	bl	1bc214c <$AllocateRefHandle(long)>
         9fd20:	e58d0004 	str	r0, [sp, #4]	; fField4
         9fd24:	e5970000 	ldr	r0, [r7]
         9fd28:	e1a00840 	mov	r0, r0, asr #16
         9fd2c:	e3a05000 	mov	r5, #0	; 0x0
         9fd30:	e3700902 	cmn	r0, #32768	; 0x8000
         9fd34:	1a000005 	bne	9fd50 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x60>
         9fd38:	e5cd5003 	strb	r5, [sp, #3]
         9fd3c:	e5cd5002 	strb	r5, [sp, #2]	; fField2
         9fd40:	e3a00048 	mov	r0, #72	; 0x48
         9fd44:	e5cd0001 	strb	r0, [sp, #1]
         9fd48:	e5cd5000 	strb	r5, [sp]
         9fd4c:	ea000009 	b	9fd78 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x88>
         9fd50:	e5970002 	ldr	r0, [r7, #2]	; fField2
         9fd54:	e1a00820 	mov	r0, r0, lsr #16
         9fd58:	e5cd0003 	strb	r0, [sp, #3]
         9fd5c:	e1a00440 	mov	r0, r0, asr #8
         9fd60:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         9fd64:	e5970000 	ldr	r0, [r7]
         9fd68:	e1a00820 	mov	r0, r0, lsr #16
         9fd6c:	e5cd0001 	strb	r0, [sp, #1]
         9fd70:	e1a00440 	mov	r0, r0, asr #8
         9fd74:	e5cd0000 	strb	r0, [sp]
         9fd78:	e5960000 	ldr	r0, [r6]
         9fd7c:	e5900000 	ldr	r0, [r0]
         9fd80:	eb6c9549 	bl	1bc52ac <$Length(long)>
         9fd84:	e1a08000 	mov	r8, r0
         9fd88:	e3a07000 	mov	r7, #0	; 0x0
         9fd8c:	e3500000 	cmp	r0, #0	; 0x0
         9fd90:	da000009 	ble	9fdbc <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0xcc>
         9fd94:	e1a01007 	mov	r1, r7
         9fd98:	e1a00006 	mov	r0, r6
         9fd9c:	eb68c2a5 	bl	1ad0838 <TDragInfo::$GetItemDragLabel( const(long))>
         9fda0:	e59d1008 	ldr	r1, [sp, #8]
         9fda4:	e5810000 	str	r0, [r1]
         9fda8:	e3300002 	teq	r0, #2	; 0x2
         9fdac:	1a000002 	bne	9fdbc <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0xcc>
         9fdb0:	e2877001 	add	r7, r7, #1	; 0x1
         9fdb4:	e1570008 	cmp	r7, r8
         9fdb8:	bafffff5 	blt	9fd94 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0xa4>
         9fdbc:	e59d0008 	ldr	r0, [sp, #8]
         9fdc0:	e5900000 	ldr	r0, [r0]
         9fdc4:	e59f7048 	ldr	r7, [pc, #48]	; 9fe14 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x124>	; fField48
         9fdc8:	e59f6048 	ldr	r6, [pc, #48]	; 9fe18 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x128>	; fField48
         9fdcc:	e3300002 	teq	r0, #2	; 0x2
         9fdd0:	1a000016 	bne	9fe30 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x140>
         9fdd4:	e5940000 	ldr	r0, [r4]
         9fdd8:	e5900000 	ldr	r0, [r0]
         9fddc:	e3300002 	teq	r0, #2	; 0x2
         9fde0:	0a00000d 	beq	9fe1c <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x12c>
         9fde4:	e5971000 	ldr	r1, [r7]
         9fde8:	e5911000 	ldr	r1, [r1]
         9fdec:	eb6c911b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9fdf0:	e59d1008 	ldr	r1, [sp, #8]
         9fdf4:	e5810000 	str	r0, [r1]
         9fdf8:	e5960000 	ldr	r0, [r6]
         9fdfc:	e5901000 	ldr	r1, [r0]
         9fe00:	e5940000 	ldr	r0, [r4]
         9fe04:	e5900000 	ldr	r0, [r0]
         9fe08:	eb6c9114 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         9fe0c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         9fe10:	ea000005 	b	9fe2c <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x13c>
         9fe14:	00684ac0 	rsbeq	r4, r8, r0, asr #21
         9fe18:	00684930 	rsbeq	r4, r8, r0, lsr r9
         9fe1c:	e59f046c 	ldr	r0, [pc, #46c]	; a0290 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5a0>
         9fe20:	e5900000 	ldr	r0, [r0]
         9fe24:	e5900000 	ldr	r0, [r0]
         9fe28:	e59d1008 	ldr	r1, [sp, #8]
         9fe2c:	e5810000 	str	r0, [r1]
         9fe30:	e28d1004 	add	r1, sp, #4	; 0x4
         9fe34:	e28d0008 	add	r0, sp, #8	; 0x8
         9fe38:	e3a03010 	mov	r3, #16	; 0x10
         9fe3c:	e3a02000 	mov	r2, #0	; 0x0
         9fe40:	eb68ba42 	bl	1ace750 <$ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3>
         9fe44:	e59d1008 	ldr	r1, [sp, #8]
         9fe48:	e5810000 	str	r0, [r1]
         9fe4c:	e24dd018 	sub	sp, sp, #24	; 0x18
         9fe50:	e59f043c 	ldr	r0, [pc, #43c]	; a0294 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5a4>
         9fe54:	eb6c88c4 	bl	1bc216c <$Clone(RefVar const &)>
         9fe58:	eb6c88bb 	bl	1bc214c <$AllocateRefHandle(long)>
         9fe5c:	e58d0014 	str	r0, [sp, #20]
         9fe60:	e59f0430 	ldr	r0, [pc, #430]	; a0298 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5a8>
         9fe64:	eb67db26 	bl	1a96b04 <$GetPreference(RefVar const &)>
         9fe68:	eb6c88b7 	bl	1bc214c <$AllocateRefHandle(long)>
         9fe6c:	e58d0010 	str	r0, [sp, #16]
         9fe70:	e28d0010 	add	r0, sp, #16	; 0x10
         9fe74:	eb68c266 	bl	1ad0814 <$GetFontFamilySym(RefVar const &)>
         9fe78:	eb6c88b3 	bl	1bc214c <$AllocateRefHandle(long)>
         9fe7c:	e58d0000 	str	r0, [sp]
         9fe80:	e1a0200d 	mov	r2, sp
         9fe84:	e59f1410 	ldr	r1, [pc, #410]	; a029c <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5ac>
         9fe88:	e28d0014 	add	r0, sp, #20	; 0x14
         9fe8c:	eb6c9935 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9fe90:	e59d0000 	ldr	r0, [sp]
         9fe94:	eb6c8cc8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9fe98:	e3a00030 	mov	r0, #48	; 0x30
         9fe9c:	eb6c88aa 	bl	1bc214c <$AllocateRefHandle(long)>
         9fea0:	e58d0004 	str	r0, [sp, #4]	; fField4
         9fea4:	e28d2004 	add	r2, sp, #4	; 0x4
         9fea8:	e59f13f0 	ldr	r1, [pc, #3f0]	; a02a0 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5b0>
         9feac:	e28d0014 	add	r0, sp, #20	; 0x14
         9feb0:	eb6c992c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9feb4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         9feb8:	eb6c8cbf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9febc:	e1a00005 	mov	r0, r5
         9fec0:	eb6c88a1 	bl	1bc214c <$AllocateRefHandle(long)>
         9fec4:	e58d0008 	str	r0, [sp, #8]
         9fec8:	e28d2008 	add	r2, sp, #8	; 0x8
         9fecc:	e59f13d0 	ldr	r1, [pc, #3d0]	; a02a4 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5b4>
         9fed0:	e28d0014 	add	r0, sp, #20	; 0x14
         9fed4:	eb6c9923 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9fed8:	e59d0008 	ldr	r0, [sp, #8]
         9fedc:	eb6c8cb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9fee0:	e3a00008 	mov	r0, #8	; 0x8
         9fee4:	eb6c8898 	bl	1bc214c <$AllocateRefHandle(long)>
         9fee8:	e58d000c 	str	r0, [sp, #12]	; fField12
         9feec:	e28d200c 	add	r2, sp, #12	; 0xc
         9fef0:	e59f13b0 	ldr	r1, [pc, #3b0]	; a02a8 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5b8>
         9fef4:	e28d0014 	add	r0, sp, #20	; 0x14
         9fef8:	eb6c991a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9fefc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9ff00:	eb6c8cad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9ff04:	e24dd028 	sub	sp, sp, #40	; 0x28
         9ff08:	e28d1048 	add	r1, sp, #72	; 0x48
         9ff0c:	e1a0000d 	mov	r0, sp
         9ff10:	eb0432c2 	bl	1aca20 <TRichString::__ct(RefVar const &)>
         9ff14:	e28d103c 	add	r1, sp, #60	; 0x3c
         9ff18:	e1a0000d 	mov	r0, sp
         9ff1c:	eb68d2c3 	bl	1ad4a30 <$TruncateLabel__10TClipboardSFP11TRichStringRC6RefVar>
         9ff20:	e3a00009 	mov	r0, #9	; 0x9
         9ff24:	eb6c14f3 	bl	1ba52f8 <$U_CONST_CHAR>
         9ff28:	e1a09000 	mov	r9, r0
         9ff2c:	e3a0000d 	mov	r0, #13	; 0xd
         9ff30:	eb6c14f0 	bl	1ba52f8 <$U_CONST_CHAR>
         9ff34:	e1a08000 	mov	r8, r0
         9ff38:	e3a00020 	mov	r0, #32	; 0x20
         9ff3c:	eb6c14ed 	bl	1ba52f8 <$U_CONST_CHAR>
         9ff40:	e1a0a000 	mov	sl, r0
         9ff44:	e3a04000 	mov	r4, #0	; 0x0
         9ff48:	e59d500c 	ldr	r5, [sp, #12]	; fField12
         9ff4c:	e3550000 	cmp	r5, #0	; 0x0
         9ff50:	da00000c 	ble	9ff88 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x298>
         9ff54:	e1a01004 	mov	r1, r4
         9ff58:	e1a0000d 	mov	r0, sp
         9ff5c:	eb042ff5 	bl	1abf38 <TRichString::GetChar( const(unsigned long))>
         9ff60:	e1300009 	teq	r0, r9
         9ff64:	11300008 	teqne	r0, r8
         9ff68:	1a000003 	bne	9ff7c <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x28c>
         9ff6c:	e1a0200a 	mov	r2, sl
         9ff70:	e1a01004 	mov	r1, r4
         9ff74:	e1a0000d 	mov	r0, sp
         9ff78:	eb042e5d 	bl	1ab8f4 <TRichString::SetChar(unsigned long, unsigned short)>
         9ff7c:	e2844001 	add	r4, r4, #1	; 0x1
         9ff80:	e1540005 	cmp	r4, r5
         9ff84:	bafffff2 	blt	9ff54 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x264>
         9ff88:	e24dd008 	sub	sp, sp, #8	; 0x8
         9ff8c:	e28d3044 	add	r3, sp, #68	; 0x44
         9ff90:	e1a0200d 	mov	r2, sp
         9ff94:	e28d1004 	add	r1, sp, #4	; 0x4
         9ff98:	e28d0008 	add	r0, sp, #8	; 0x8
         9ff9c:	eb687bdf 	bl	1abef20 <$CalcIconDimensions__10TClipboardSFP11TRichStringPsT2RC6RefVar>
         9ffa0:	e24dd008 	sub	sp, sp, #8	; 0x8
         9ffa4:	e1a0300d 	mov	r3, sp
         9ffa8:	e28d2050 	add	r2, sp, #80	; 0x50
         9ffac:	e59d1008 	ldr	r1, [sp, #8]
         9ffb0:	e1a01841 	mov	r1, r1, asr #16
         9ffb4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         9ffb8:	e1a00840 	mov	r0, r0, asr #16
         9ffbc:	eb687bd8 	bl	1abef24 <$CalcIconBounds__10TClipboardSFsT1RC6TPointP5TRect>
         9ffc0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         9ffc4:	e59f02e0 	ldr	r0, [pc, #2e0]	; a02ac <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5bc>	; fField2
         9ffc8:	eb6c8867 	bl	1bc216c <$Clone(RefVar const &)>
         9ffcc:	eb6c885e 	bl	1bc214c <$AllocateRefHandle(long)>
         9ffd0:	e58d0008 	str	r0, [sp, #8]
         9ffd4:	e28d000c 	add	r0, sp, #12	; 0xc
         9ffd8:	eb6d3def 	bl	1bef79c <$ToObject(TRect const &)>
         9ffdc:	eb6c885a 	bl	1bc214c <$AllocateRefHandle(long)>
         9ffe0:	e58d0000 	str	r0, [sp]
         9ffe4:	e1a0200d 	mov	r2, sp
         9ffe8:	e59f12c0 	ldr	r1, [pc, #2c0]	; a02b0 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5c0>	; fField2
         9ffec:	e28d0008 	add	r0, sp, #8	; 0x8
         9fff0:	eb6c98dc 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         9fff4:	e59d0000 	ldr	r0, [sp]
         9fff8:	eb6c8c6f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9fffc:	e3a08000 	mov	r8, #0	; 0x0
         a0000:	e28d001c 	add	r0, sp, #28	; 0x1c
         a0004:	eb6c4621 	bl	1bb1890 <TRichString::$MakeParagraphTextSlot( const(void))>
         a0008:	eb6c884f 	bl	1bc214c <$AllocateRefHandle(long)>
         a000c:	e58d0004 	str	r0, [sp, #4]	; fField4
         a0010:	e28d2004 	add	r2, sp, #4	; 0x4
         a0014:	e1a01007 	mov	r1, r7
         a0018:	e28d0008 	add	r0, sp, #8	; 0x8
         a001c:	eb6c98d1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a0020:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a0024:	eb6c8c64 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0028:	e24dd004 	sub	sp, sp, #4	; 0x4
         a002c:	e28d105c 	add	r1, sp, #92	; 0x5c
         a0030:	e28d0020 	add	r0, sp, #32	; 0x20
         a0034:	eb6c4614 	bl	1bb188c <TRichString::$MakeParagraphStylesSlot( const(RefVar const &))>
         a0038:	eb6c8843 	bl	1bc214c <$AllocateRefHandle(long)>
         a003c:	e58d0000 	str	r0, [sp]
         a0040:	e5900000 	ldr	r0, [r0]
         a0044:	eb6c9498 	bl	1bc52ac <$Length(long)>
         a0048:	e1a07000 	mov	r7, r0
         a004c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a0050:	e3a04001 	mov	r4, #1	; 0x1
         a0054:	e3500001 	cmp	r0, #1	; 0x1
         a0058:	da000016 	ble	a00b8 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x3c8>
         a005c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a0060:	e5900000 	ldr	r0, [r0]
         a0064:	e1a01004 	mov	r1, r4
         a0068:	eb6c9079 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a006c:	eb6c8836 	bl	1bc214c <$AllocateRefHandle(long)>
         a0070:	e58d0000 	str	r0, [sp]
         a0074:	e1a0000d 	mov	r0, sp
         a0078:	e28d1060 	add	r1, sp, #96	; 0x60
         a007c:	eb68ce4d 	bl	1ad39b8 <$SetFontParms__FRC6RefVarT1>
         a0080:	eb6c8831 	bl	1bc214c <$AllocateRefHandle(long)>
         a0084:	e1a05000 	mov	r5, r0
         a0088:	e5902000 	ldr	r2, [r0]
         a008c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a0090:	e5900000 	ldr	r0, [r0]
         a0094:	e1a01004 	mov	r1, r4
         a0098:	eb6c98ae 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         a009c:	e1a00005 	mov	r0, r5
         a00a0:	eb6c8c45 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a00a4:	e59d0000 	ldr	r0, [sp]
         a00a8:	eb6c8c43 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a00ac:	e2844002 	add	r4, r4, #2	; 0x2
         a00b0:	e1540007 	cmp	r4, r7
         a00b4:	baffffe8 	blt	a005c <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x36c>
         a00b8:	e28d2004 	add	r2, sp, #4	; 0x4
         a00bc:	e1a01006 	mov	r1, r6
         a00c0:	e28d0010 	add	r0, sp, #16	; 0x10
         a00c4:	eb6c98a7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a00c8:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         a00cc:	eb6c8c3a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a00d0:	e24dd014 	sub	sp, sp, #20	; 0x14
         a00d4:	e3a002c1 	mov	r0, #268435468	; 0x1000000c
         a00d8:	e2800c09 	add	r0, r0, #2304	; 0x900
         a00dc:	eb6c881a 	bl	1bc214c <$AllocateRefHandle(long)>
         a00e0:	e58d0000 	str	r0, [sp]
         a00e4:	e1a0200d 	mov	r2, sp
         a00e8:	e59f11c4 	ldr	r1, [pc, #1c4]	; a02b4 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5c4>
         a00ec:	e28d0020 	add	r0, sp, #32	; 0x20
         a00f0:	eb6c989c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a00f4:	e59d0000 	ldr	r0, [sp]
         a00f8:	eb6c8c2f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a00fc:	e1a00008 	mov	r0, r8
         a0100:	eb6c8811 	bl	1bc214c <$AllocateRefHandle(long)>
         a0104:	e58d0004 	str	r0, [sp, #4]	; fField4
         a0108:	e28d2004 	add	r2, sp, #4	; 0x4
         a010c:	e59f11a4 	ldr	r1, [pc, #1a4]	; a02b8 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5c8>
         a0110:	e28d0020 	add	r0, sp, #32	; 0x20
         a0114:	eb6c9893 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a0118:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a011c:	eb6c8c26 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0120:	e3a00038 	mov	r0, #56	; 0x38
         a0124:	eb6c8808 	bl	1bc214c <$AllocateRefHandle(long)>
         a0128:	e58d0008 	str	r0, [sp, #8]
         a012c:	e28d2008 	add	r2, sp, #8	; 0x8
         a0130:	e59f1184 	ldr	r1, [pc, #184]	; a02bc <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5cc>
         a0134:	e28d0020 	add	r0, sp, #32	; 0x20
         a0138:	eb6c988a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a013c:	e59d0008 	ldr	r0, [sp, #8]
         a0140:	eb6c8c1d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0144:	e3a00101 	mov	r0, #1073741824	; 0x40000000
         a0148:	eb6c87ff 	bl	1bc214c <$AllocateRefHandle(long)>
         a014c:	e58d000c 	str	r0, [sp, #12]	; fField12
         a0150:	e28d200c 	add	r2, sp, #12	; 0xc
         a0154:	e59f1164 	ldr	r1, [pc, #164]	; a02c0 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5d0>
         a0158:	e28d0020 	add	r0, sp, #32	; 0x20
         a015c:	eb6c9881 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a0160:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         a0164:	eb6c8c14 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0168:	e3a0000c 	mov	r0, #12	; 0xc
         a016c:	eb6c87f6 	bl	1bc214c <$AllocateRefHandle(long)>
         a0170:	e58d0010 	str	r0, [sp, #16]
         a0174:	e28d2010 	add	r2, sp, #16	; 0x10
         a0178:	e59f1144 	ldr	r1, [pc, #144]	; a02c4 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5d4>
         a017c:	e28d0020 	add	r0, sp, #32	; 0x20
         a0180:	eb6c9878 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a0184:	e59d0010 	ldr	r0, [sp, #16]
         a0188:	eb6c8c0b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a018c:	e59f0134 	ldr	r0, [pc, #134]	; a02c8 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5d8>
         a0190:	e28f2f4d 	add	r2, pc, #308	; 0x134
         a0194:	e3a01000 	mov	r1, #0	; 0x0
         a0198:	eb6c9447 	bl	1bc52bc <$MakeCFunction(long (*)(RefVar const &,...), long, char *)>
         a019c:	eb6c87ea 	bl	1bc214c <$AllocateRefHandle(long)>
         a01a0:	e58d0014 	str	r0, [sp, #20]
         a01a4:	e28d2014 	add	r2, sp, #20	; 0x14
         a01a8:	e59f1120 	ldr	r1, [pc, #120]	; a02d0 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5e0>
         a01ac:	e28d0020 	add	r0, sp, #32	; 0x20
         a01b0:	eb6c986c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a01b4:	e59d0014 	ldr	r0, [sp, #20]
         a01b8:	eb6c8bff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a01bc:	e24dd008 	sub	sp, sp, #8	; 0x8
         a01c0:	e3a04000 	mov	r4, #0	; 0x0
         a01c4:	e1a0000d 	mov	r0, sp
         a01c8:	eb69143e 	bl	1ae52c8 <$GetAppAreaBounds(TRect *)>
         a01cc:	e59d002e 	ldr	r0, [sp, #46]
         a01d0:	e1a00840 	mov	r0, r0, asr #16
         a01d4:	e3500000 	cmp	r0, #0	; 0x0
         a01d8:	d3a04001 	movle	r4, #1	; 0x1
         a01dc:	e59d002c 	ldr	r0, [sp, #44]
         a01e0:	e1a00840 	mov	r0, r0, asr #16
         a01e4:	e3500000 	cmp	r0, #0	; 0x0
         a01e8:	d3844002 	orrle	r4, r4, #2	; 0x2
         a01ec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a01f0:	e59d1000 	ldr	r1, [sp]
         a01f4:	e0400001 	sub	r0, r0, r1
         a01f8:	e1a00800 	mov	r0, r0, lsl #16
         a01fc:	e1a00840 	mov	r0, r0, asr #16
         a0200:	e59d1032 	ldr	r1, [sp, #50]
         a0204:	e1500841 	cmp	r0, r1, asr #16
         a0208:	d3844004 	orrle	r4, r4, #4	; 0x4
         a020c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a0210:	e59d100a 	ldr	r1, [sp, #10]
         a0214:	e59d0006 	ldr	r0, [sp, #6]
         a0218:	e0410000 	sub	r0, r1, r0
         a021c:	e1a00800 	mov	r0, r0, lsl #16
         a0220:	e1a00840 	mov	r0, r0, asr #16
         a0224:	e59d1034 	ldr	r1, [sp, #52]	; fField52
         a0228:	e1500841 	cmp	r0, r1, asr #16
         a022c:	d3844008 	orrle	r4, r4, #8	; 0x8
         a0230:	e1a00104 	mov	r0, r4, lsl #2
         a0234:	eb6c87c4 	bl	1bc214c <$AllocateRefHandle(long)>
         a0238:	e58d0000 	str	r0, [sp]
         a023c:	e1a0200d 	mov	r2, sp
         a0240:	e59f108c 	ldr	r1, [pc, #8c]	; a02d4 <CreateLabelForm__10TClipboardSFRC9TDragInfoRC6RefVarRC6TPoint+0x5e4>
         a0244:	e28d002c 	add	r0, sp, #44	; 0x2c
         a0248:	eb6c9846 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a024c:	e59d0000 	ldr	r0, [sp]
         a0250:	eb6c8bd9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0254:	e59d002c 	ldr	r0, [sp, #44]
         a0258:	e5904000 	ldr	r4, [r0]
         a025c:	eb6c8bd6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0260:	e59d0040 	ldr	r0, [sp, #64]	; fField64
         a0264:	eb6c8bd4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0268:	e59d0078 	ldr	r0, [sp, #120]
         a026c:	eb6c8bd2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0270:	e59d007c 	ldr	r0, [sp, #124]
         a0274:	eb6c8bd0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0278:	e59d0084 	ldr	r0, [sp, #132]
         a027c:	eb6c8bce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0280:	e59d0088 	ldr	r0, [sp, #136]
         a0284:	eb6c8bcc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0288:	e1a00004 	mov	r0, r4
         a028c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a0290:	006818e8 	rsbeq	r1, r8, r8, ror #17
         a0294:	006817d0 	ldreqd	r1, [r8], -#112
         a0298:	00684e48 	rsbeq	r4, r8, r8, asr #28
         a029c:	00682d30 	rsbeq	r2, r8, r0, lsr sp
         a02a0:	006846a8 	rsbeq	r4, r8, r8, lsr #13
         a02a4:	00682d28 	rsbeq	r2, r8, r8, lsr #26
         a02a8:	00683d98 	streqb	r3, [r8], -#216
         a02ac:	006808d8 	ldreqd	r0, [r8], -#136
         a02b0:	00684f08 	rsbeq	r4, r8, r8, lsl #30
         a02b4:	00684fc0 	rsbeq	r4, r8, r0, asr #31
         a02b8:	00684ad8 	ldreqd	r4, [r8], -#168
         a02bc:	00684fd0 	ldreqd	r4, [r8], -#240
         a02c0:	00684fa8 	rsbeq	r4, r8, r8, lsr #31
         a02c4:	006850f8 	streqd	r5, [r8], -#8
         a02c8:	01abef10 	moveq	lr, r0, lsl pc
         a02cc:	00000000 	andeq	r0, r0, r0
         a02d0:	006842c8 	rsbeq	r4, r8, r8, asr #5
         a02d4:	00683ed0 	ldreqd	r3, [r8], -#224
    */
}

/**
 * Symbol: TClipboard::GetClipboardDataInfo(TDragInfo *)
 * Address: 000a02d8
 */
TClipboard::GetClipboardDataInfo(TDragInfo *) {
    /*
         a02d8:	e1a0c00d 	mov	ip, sp
         a02dc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a02e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         a02e4:	e1a04001 	mov	r4, r1
         a02e8:	e2800030 	add	r0, r0, #48	; 0x30
         a02ec:	e1a07000 	mov	r7, r0
         a02f0:	e5900000 	ldr	r0, [r0]
         a02f4:	e5900000 	ldr	r0, [r0]
         a02f8:	eb6c93eb 	bl	1bc52ac <$Length(long)>
         a02fc:	e1a06000 	mov	r6, r0
         a0300:	e3a05000 	mov	r5, #0	; 0x0
         a0304:	e3500000 	cmp	r0, #0	; 0x0
         a0308:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
         a030c:	e24dd008 	sub	sp, sp, #8	; 0x8
         a0310:	e1a00004 	mov	r0, r4
         a0314:	eb682045 	bl	1aa8430 <TDragInfo::$AddDragItem(void)>
         a0318:	e1a00105 	mov	r0, r5, lsl #2
         a031c:	eb6c878a 	bl	1bc214c <$AllocateRefHandle(long)>
         a0320:	e58d0000 	str	r0, [sp]
         a0324:	e1a0200d 	mov	r2, sp
         a0328:	e1a01005 	mov	r1, r5
         a032c:	e1a00004 	mov	r0, r4
         a0330:	eb68cda7 	bl	1ad39d4 <TDragInfo::$SetItemDragRef(long, RefVar const &)>
         a0334:	e59d0000 	ldr	r0, [sp]
         a0338:	eb6c8b9f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a033c:	e5970000 	ldr	r0, [r7]
         a0340:	e5900000 	ldr	r0, [r0]
         a0344:	e1a01005 	mov	r1, r5
         a0348:	eb6c8fc1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a034c:	eb6c877e 	bl	1bc214c <$AllocateRefHandle(long)>
         a0350:	e58d0004 	str	r0, [sp, #4]	; fField4
         a0354:	e28d2004 	add	r2, sp, #4	; 0x4
         a0358:	e1a01005 	mov	r1, r5
         a035c:	e1a00004 	mov	r0, r4
         a0360:	eb68cd9c 	bl	1ad39d8 <TDragInfo::$SetItemDragTypes(long, RefVar const &)>
         a0364:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a0368:	eb6c8b93 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a036c:	e28dd008 	add	sp, sp, #8	; 0x8
         a0370:	e2855001 	add	r5, r5, #1	; 0x1
         a0374:	e1550006 	cmp	r5, r6
         a0378:	baffffe3 	blt	a030c <TClipboard::GetClipboardDataInfo(TDragInfo *)+0x34>
         a037c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TClipboard::DragFromClipboard(TStrokePublic *)
 * Address: 000a0380
 */
TClipboard::DragFromClipboard(TStrokePublic *) {
    /*
         a0380:	e1a0c00d 	mov	ip, sp
         a0384:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a0388:	e24cb004 	sub	fp, ip, #4	; 0x4
         a038c:	e1a04000 	mov	r4, r0
         a0390:	e1a05001 	mov	r5, r1
         a0394:	e24dd004 	sub	sp, sp, #4	; 0x4
         a0398:	e3a00002 	mov	r0, #2	; 0x2
         a039c:	eb6c876a 	bl	1bc214c <$AllocateRefHandle(long)>
         a03a0:	e58d0000 	str	r0, [sp]
         a03a4:	e1a0000d 	mov	r0, sp
         a03a8:	e59f109c 	ldr	r1, [pc, #9c]	; a044c <TClipboard::DragFromClipboard(TStrokePublic *)+0xcc>
         a03ac:	eb6d4546 	bl	1bf18cc <$FPlaySound__FRC6RefVarT1>
         a03b0:	e59d0000 	ldr	r0, [sp]
         a03b4:	eb6c8b80 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a03b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         a03bc:	e1a0000d 	mov	r0, sp
         a03c0:	e3a01000 	mov	r1, #0	; 0x0
         a03c4:	eb68d1a7 	bl	1ad4a68 <TDragInfo::$__ct(long)>
         a03c8:	e1a0100d 	mov	r1, sp
         a03cc:	e1a00004 	mov	r0, r4
         a03d0:	eb690b81 	bl	1ae31dc <TClipboard::$GetClipboardDataInfo(TDragInfo *)>
         a03d4:	e24dd008 	sub	sp, sp, #8	; 0x8
         a03d8:	e1a0100d 	mov	r1, sp
         a03dc:	e1a00004 	mov	r0, r4
         a03e0:	eb687ac9 	bl	1abef0c <TClipboard::$CalcDataBitsBounds(TRect *)>
         a03e4:	eb6d494d 	bl	1bf2920 <$Ticks(void)>
         a03e8:	e1a02000 	mov	r2, r0
         a03ec:	e59f105c 	ldr	r1, [pc, #5c]	; a0450 <TClipboard::DragFromClipboard(TStrokePublic *)+0xd0>
         a03f0:	e5913004 	ldr	r3, [r1, #4]	; fField4
         a03f4:	e0400003 	sub	r0, r0, r3
         a03f8:	e3a03000 	mov	r3, #0	; 0x0
         a03fc:	e5a12004 	str	r2, [r1, #4]!	; fField4
         a0400:	e28d2008 	add	r2, sp, #8	; 0x8
         a0404:	e3500050 	cmp	r0, #80	; 0x50
         a0408:	23a01000 	movcs	r1, #0	; 0x0
         a040c:	33a01001 	movcc	r1, #1	; 0x1
         a0410:	e3a00000 	mov	r0, #0	; 0x0
         a0414:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         a0418:	e28d3010 	add	r3, sp, #16	; 0x10
         a041c:	e28d2010 	add	r2, sp, #16	; 0x10
         a0420:	e1a01005 	mov	r1, r5
         a0424:	e1a00004 	mov	r0, r4
         a0428:	e594c000 	ldr	ip, [r4]
         a042c:	e1a0e00f 	mov	lr, pc
         a0430:	e28cf0d0 	add	pc, ip, #208	; 0xd0
         a0434:	e28dd010 	add	sp, sp, #16	; 0x10
         a0438:	e1a04000 	mov	r4, r0
         a043c:	e59d0008 	ldr	r0, [sp, #8]
         a0440:	eb6c8b5d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0444:	e1a00004 	mov	r0, r4
         a0448:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         a044c:	00680840 	rsbeq	r0, r8, r0, asr #16
         a0450:	0c100cbc 	ldceq	12, cr0, [r0], -#752
    */
}

/**
 * Symbol: TClipboard::DrawDragData(TRect const &)
 * Address: 000a0454
 */
TClipboard::DrawDragData(TRect const &) {
    /*
         a0454:	e1a0c00d 	mov	ip, sp
         a0458:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a045c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0460:	e1a04000 	mov	r4, r0
         a0464:	e1a05001 	mov	r5, r1
         a0468:	e2800024 	add	r0, r0, #36	; 0x24
         a046c:	e59f1048 	ldr	r1, [pc, #48]	; a04bc <TClipboard::DrawDragData(TRect const &)+0x68>	; fField48
         a0470:	e3a02000 	mov	r2, #0	; 0x0
         a0474:	eb6c8f7b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         a0478:	e3300002 	teq	r0, #2	; 0x2
         a047c:	1a00000f 	bne	a04c0 <TClipboard::DrawDragData(TRect const &)+0x6c>
         a0480:	e24dd010 	sub	sp, sp, #16	; 0x10
         a0484:	e1a0000d 	mov	r0, sp
         a0488:	eb6abcd0 	bl	1b4f7d0 <$GetPenState(PenState *)>
         a048c:	eb6ac924 	bl	1b52924 <$PenNormal(void)>
         a0490:	e3a00002 	mov	r0, #2	; 0x2
         a0494:	eb6abcd1 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
         a0498:	eb6acd54 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
         a049c:	e3a01002 	mov	r1, #2	; 0x2
         a04a0:	e3a00002 	mov	r0, #2	; 0x2
         a04a4:	eb6ac91f 	bl	1b52928 <$PenSize__FlT1>
         a04a8:	e1a00005 	mov	r0, r5
         a04ac:	eb6abcba 	bl	1b4f79c <$FrameRect(Rect *)>
         a04b0:	e1a0000d 	mov	r0, sp
         a04b4:	eb6acd4f 	bl	1b539f8 <$SetPenState(PenState *)>
         a04b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         a04bc:	006820d8 	ldreqd	r2, [r8], -#8
         a04c0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         a04c4:	e2840038 	add	r0, r4, #56	; 0x38
         a04c8:	e1a06000 	mov	r6, r0
         a04cc:	e1a0100d 	mov	r1, sp
         a04d0:	eb68ee42 	bl	1adbde0 <$InitBitMap__5TBitsSFRC5TRectP8PixelMap>
         a04d4:	e24dd004 	sub	sp, sp, #4	; 0x4
         a04d8:	e2841040 	add	r1, r4, #64	; 0x40
         a04dc:	e1a0000d 	mov	r0, sp
         a04e0:	eb6c82fd 	bl	1bc10dc <TObjectPtr::$__ct(RefStruct const &)>
         a04e4:	e1a0000d 	mov	r0, sp
         a04e8:	eb6c8709 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         a04ec:	e58d0004 	str	r0, [sp, #4]	; fField4
         a04f0:	e59d0014 	ldr	r0, [sp, #20]
         a04f4:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         a04f8:	e58d0014 	str	r0, [sp, #20]
         a04fc:	e24dd034 	sub	sp, sp, #52	; 0x34
         a0500:	e1a0000d 	mov	r0, sp
         a0504:	eb679fc3 	bl	1a88418 <TBits::$__ct(void)>
         a0508:	e3a00000 	mov	r0, #0	; 0x0
         a050c:	e52d006c 	str	r0, [sp, -#108]!
         a0510:	e28d0008 	add	r0, sp, #8	; 0x8
         a0514:	eb6c4916 	bl	1bb2974 <$setjmp>
         a0518:	e3300000 	teq	r0, #0	; 0x0
         a051c:	1a000017 	bne	a0580 <TClipboard::DrawDragData(TRect const &)+0x12c>
         a0520:	e1a0000d 	mov	r0, sp
         a0524:	eb6cfed4 	bl	1be007c <$AddExceptionHandler>
         a0528:	e28d10a4 	add	r1, sp, #164	; 0xa4
         a052c:	e28d006c 	add	r0, sp, #108	; 0x6c
         a0530:	eb68b46e 	bl	1acd6f0 <TBits::$Constructor(PixelMap const &)>
         a0534:	e3a03000 	mov	r3, #0	; 0x0
         a0538:	e92d0008 	stmdb	sp!, {r3}
         a053c:	e1a01006 	mov	r1, r6
         a0540:	e1a02005 	mov	r2, r5
         a0544:	e28d0070 	add	r0, sp, #112	; 0x70
         a0548:	e3a03002 	mov	r3, #2	; 0x2
         a054c:	eb67c4e2 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         a0550:	e28dd004 	add	sp, sp, #4	; 0x4
         a0554:	e1a0000d 	mov	r0, sp
         a0558:	eb6d02d6 	bl	1be10b8 <$ExitHandler>
         a055c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         a0560:	e1a0000d 	mov	r0, sp
         a0564:	e3a01000 	mov	r1, #0	; 0x0
         a0568:	eb679fc2 	bl	1a88478 <TBits::$__dt(void)>
         a056c:	e28dd034 	add	sp, sp, #52	; 0x34
         a0570:	e1a0000d 	mov	r0, sp
         a0574:	e3a01000 	mov	r1, #0	; 0x0
         a0578:	eb6c86e0 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         a057c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         a0580:	e28d00a0 	add	r0, sp, #160	; 0xa0
         a0584:	e3a01000 	mov	r1, #0	; 0x0
         a0588:	eb6c86dc 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         a058c:	e1a0000d 	mov	r0, sp
         a0590:	eb6d06ef 	bl	1be2154 <$NextHandler>
         a0594:	eafffff9 	b	a0580 <TClipboard::DrawDragData(TRect const &)+0x12c>
         a0598:	e1a0c00d 	mov	ip, sp
         a059c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a05a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         a05a4:	e1a04000 	mov	r4, r0
         a05a8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a05ac:	e59f0074 	ldr	r0, [pc, #74]	; a0628 <TClipboard::DrawDragData(TRect const &)+0x1d4>
         a05b0:	eb6c86ed 	bl	1bc216c <$Clone(RefVar const &)>
         a05b4:	eb6c86e4 	bl	1bc214c <$AllocateRefHandle(long)>
         a05b8:	e58d0008 	str	r0, [sp, #8]
         a05bc:	e5940002 	ldr	r0, [r4, #2]	; fField2
         a05c0:	e1a00840 	mov	r0, r0, asr #16
         a05c4:	e1a00100 	mov	r0, r0, lsl #2
         a05c8:	eb6c86df 	bl	1bc214c <$AllocateRefHandle(long)>
         a05cc:	e58d0000 	str	r0, [sp]
         a05d0:	e1a0200d 	mov	r2, sp
         a05d4:	e59f1050 	ldr	r1, [pc, #50]	; a062c <TClipboard::DrawDragData(TRect const &)+0x1d8>
         a05d8:	e28d0008 	add	r0, sp, #8	; 0x8
         a05dc:	eb6c9761 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a05e0:	e59d0000 	ldr	r0, [sp]
         a05e4:	eb6c8af4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a05e8:	e5940000 	ldr	r0, [r4]
         a05ec:	e1a00840 	mov	r0, r0, asr #16
         a05f0:	e1a00100 	mov	r0, r0, lsl #2
         a05f4:	eb6c86d4 	bl	1bc214c <$AllocateRefHandle(long)>
         a05f8:	e58d0004 	str	r0, [sp, #4]	; fField4
         a05fc:	e28d2004 	add	r2, sp, #4	; 0x4
         a0600:	e59f1028 	ldr	r1, [pc, #28]	; a0630 <TClipboard::DrawDragData(TRect const &)+0x1dc>
         a0604:	e28d0008 	add	r0, sp, #8	; 0x8
         a0608:	eb6c9756 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a060c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a0610:	eb6c8ae9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0614:	e59d0008 	ldr	r0, [sp, #8]
         a0618:	e5904000 	ldr	r4, [r0]
         a061c:	eb6c8ae6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0620:	e1a00004 	mov	r0, r4
         a0624:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         a0628:	00681bf8 	streqd	r1, [r8], -#184
         a062c:	00685220 	rsbeq	r5, r8, r0, lsr #4
         a0630:	00685258 	rsbeq	r5, r8, r8, asr r2
    */
}

/**
 * Symbol: TClipboard::GetDropData(RefVar const &, RefVar const &)
 * Address: 000a0634
 */
TClipboard::GetDropData(RefVar const &, RefVar const &) {
    /*
         a0634:	e1a0c00d 	mov	ip, sp
         a0638:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a063c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0640:	e1a04000 	mov	r4, r0
         a0644:	e1a06001 	mov	r6, r1
         a0648:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a064c:	e5920000 	ldr	r0, [r2]
         a0650:	e5900000 	ldr	r0, [r0]
         a0654:	e3100003 	tst	r0, #3	; 0x3
         a0658:	01a00140 	moveq	r0, r0, asr #2
         a065c:	0a000000 	beq	a0664 <TClipboard::GetDropData(RefVar const &, RefVar const &)+0x30>
         a0660:	eb6c86ad 	bl	1bc211c <$_RINTError(long)>
         a0664:	e1a07000 	mov	r7, r0
         a0668:	e5940030 	ldr	r0, [r4, #48]	; fField48
         a066c:	e5900000 	ldr	r0, [r0]
         a0670:	e1a01007 	mov	r1, r7
         a0674:	eb6c8ef6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a0678:	eb6c86b3 	bl	1bc214c <$AllocateRefHandle(long)>
         a067c:	e58d0000 	str	r0, [sp]
         a0680:	e1a0500d 	mov	r5, sp
         a0684:	e3a00002 	mov	r0, #2	; 0x2
         a0688:	eb6c86af 	bl	1bc214c <$AllocateRefHandle(long)>
         a068c:	e58d0004 	str	r0, [sp, #4]	; fField4
         a0690:	e28d0004 	add	r0, sp, #4	; 0x4
         a0694:	e1a02006 	mov	r2, r6
         a0698:	e1a01005 	mov	r1, r5
         a069c:	eb66f603 	bl	1a5deb0 <$FSetContains>
         a06a0:	eb6c86a9 	bl	1bc214c <$AllocateRefHandle(long)>
         a06a4:	e1a05000 	mov	r5, r0
         a06a8:	e59d0000 	ldr	r0, [sp]
         a06ac:	eb6c8ac2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a06b0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a06b4:	eb6c8ac0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a06b8:	e3a00002 	mov	r0, #2	; 0x2
         a06bc:	eb6c86a2 	bl	1bc214c <$AllocateRefHandle(long)>
         a06c0:	e58d0008 	str	r0, [sp, #8]
         a06c4:	e5950000 	ldr	r0, [r5]
         a06c8:	e3300002 	teq	r0, #2	; 0x2
         a06cc:	0a000015 	beq	a0728 <TClipboard::GetDropData(RefVar const &, RefVar const &)+0xf4>
         a06d0:	e5940034 	ldr	r0, [r4, #52]	; fField52
         a06d4:	e5900000 	ldr	r0, [r0]
         a06d8:	e1a01007 	mov	r1, r7
         a06dc:	eb6c8edc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a06e0:	eb6c8699 	bl	1bc214c <$AllocateRefHandle(long)>
         a06e4:	e1a04000 	mov	r4, r0
         a06e8:	e5950000 	ldr	r0, [r5]
         a06ec:	e3100003 	tst	r0, #3	; 0x3
         a06f0:	01a00140 	moveq	r0, r0, asr #2
         a06f4:	0a000000 	beq	a06fc <TClipboard::GetDropData(RefVar const &, RefVar const &)+0xc8>
         a06f8:	eb6c8687 	bl	1bc211c <$_RINTError(long)>
         a06fc:	e1a01000 	mov	r1, r0
         a0700:	e5940000 	ldr	r0, [r4]
         a0704:	eb6c8ed2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a0708:	e59d1008 	ldr	r1, [sp, #8]
         a070c:	e5810000 	str	r0, [r1]
         a0710:	e1a00004 	mov	r0, r4
         a0714:	eb6c8aa8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0718:	e28d0008 	add	r0, sp, #8	; 0x8
         a071c:	eb6c8aa1 	bl	1bc31a8 <$DeepClone(RefVar const &)>
         a0720:	e59d1008 	ldr	r1, [sp, #8]
         a0724:	e5810000 	str	r0, [r1]
         a0728:	e59d0008 	ldr	r0, [sp, #8]
         a072c:	e5904000 	ldr	r4, [r0]
         a0730:	eb6c8aa1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0734:	e1a00005 	mov	r0, r5
         a0738:	eb6c8a9f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a073c:	e1a00004 	mov	r0, r4
         a0740:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TClipboard::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)
 * Address: 000a0744
 */
TClipboard::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char) {
    /*
         a0744:	e1a0c00d 	mov	ip, sp
         a0748:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a074c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0750:	e1a04000 	mov	r4, r0
         a0754:	e1a07001 	mov	r7, r1
         a0758:	e1a06002 	mov	r6, r2
         a075c:	e1a05003 	mov	r5, r3
         a0760:	e59b000c 	ldr	r0, [fp, #12]	; fField12
         a0764:	e20080ff 	and	r8, r0, #255	; 0xff
         a0768:	e59b9008 	ldr	r9, [fp, #8]
         a076c:	e59ba004 	ldr	sl, [fp, #4]	; fField4
         a0770:	e24dd008 	sub	sp, sp, #8	; 0x8
         a0774:	e1a0100d 	mov	r1, sp
         a0778:	e1a00004 	mov	r0, r4
         a077c:	eb6879e2 	bl	1abef0c <TClipboard::$CalcDataBitsBounds(TRect *)>
         a0780:	e24dd004 	sub	sp, sp, #4	; 0x4
         a0784:	e594003a 	ldr	r0, [r4, #58]	; fField58
         a0788:	e1a00820 	mov	r0, r0, lsr #16
         a078c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a0790:	e0401001 	sub	r1, r0, r1
         a0794:	e5950002 	ldr	r0, [r5, #2]	; fField2
         a0798:	e1a00820 	mov	r0, r0, lsr #16
         a079c:	e0810000 	add	r0, r1, r0
         a07a0:	e5cd0003 	strb	r0, [sp, #3]
         a07a4:	e1a00440 	mov	r0, r0, asr #8
         a07a8:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         a07ac:	e5940038 	ldr	r0, [r4, #56]	; fField56
         a07b0:	e1a00820 	mov	r0, r0, lsr #16
         a07b4:	e59d1006 	ldr	r1, [sp, #6]
         a07b8:	e0400001 	sub	r0, r0, r1
         a07bc:	e5951000 	ldr	r1, [r5]
         a07c0:	e1a01821 	mov	r1, r1, lsr #16
         a07c4:	e0800001 	add	r0, r0, r1
         a07c8:	e5cd0001 	strb	r0, [sp, #1]
         a07cc:	e1a00440 	mov	r0, r0, asr #8
         a07d0:	e5cd0000 	strb	r0, [sp]
         a07d4:	e1a00006 	mov	r0, r6
         a07d8:	e5961000 	ldr	r1, [r6]
         a07dc:	e1a0e00f 	mov	lr, pc
         a07e0:	e281f0ac 	add	pc, r1, #172	; 0xac
         a07e4:	e1a03008 	mov	r3, r8
         a07e8:	e1a02009 	mov	r2, r9
         a07ec:	e1a0100a 	mov	r1, sl
         a07f0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         a07f4:	e28d300c 	add	r3, sp, #12	; 0xc
         a07f8:	e1a02006 	mov	r2, r6
         a07fc:	e1a01007 	mov	r1, r7
         a0800:	e1a00004 	mov	r0, r4
         a0804:	eb6879be 	bl	1abef04 <TView::$EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)>
         a0808:	e28dd00c 	add	sp, sp, #12	; 0xc
         a080c:	e3380000 	teq	r8, #0	; 0x0
         a0810:	1a000020 	bne	a0898 <TClipboard::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x154>
         a0814:	e1a01004 	mov	r1, r4
         a0818:	e59f507c 	ldr	r5, [pc, #7c]	; a089c <TClipboard::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x158>
         a081c:	e5950000 	ldr	r0, [r5]
         a0820:	eb6916c6 	bl	1ae6340 <TRootView::$GetClipboardIcon(TClipboard *)>
         a0824:	e1a06000 	mov	r6, r0
         a0828:	e5951000 	ldr	r1, [r5]
         a082c:	e5b42004 	ldr	r2, [r4, #4]!	; fField4
         a0830:	e24dd004 	sub	sp, sp, #4	; 0x4
         a0834:	e59f8064 	ldr	r8, [pc, #64]	; a08a0 <TClipboard::EndDrag(TDragInfo const &, TView *, TPoint const &, TPoint const &, TPoint const &, unsigned char)+0x15c>	; fField64
         a0838:	e3a0403f 	mov	r4, #63	; 0x3f
         a083c:	e1a00004 	mov	r0, r4
         a0840:	e5987000 	ldr	r7, [r8]
         a0844:	eb6816bd 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a0848:	eb6c863f 	bl	1bc214c <$AllocateRefHandle(long)>
         a084c:	e58d0000 	str	r0, [sp]
         a0850:	e1a0100d 	mov	r1, sp
         a0854:	e1a00007 	mov	r0, r7
         a0858:	eb67bff6 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a085c:	e59d0000 	ldr	r0, [sp]
         a0860:	eb6c8a55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0864:	e5951000 	ldr	r1, [r5]
         a0868:	e5b62004 	ldr	r2, [r6, #4]!	; fField4
         a086c:	e1a00004 	mov	r0, r4
         a0870:	e5985000 	ldr	r5, [r8]
         a0874:	eb6816b1 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         a0878:	eb6c8633 	bl	1bc214c <$AllocateRefHandle(long)>
         a087c:	e58d0000 	str	r0, [sp]
         a0880:	e1a0100d 	mov	r1, sp
         a0884:	e1a00005 	mov	r0, r5
         a0888:	eb67bfea 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         a088c:	e59d0000 	ldr	r0, [sp]
         a0890:	eb6c8a49 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0894:	e28dd004 	add	sp, sp, #4	; 0x4
         a0898:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a089c:	0c101934 	ldceq	9, cr1, [r0], -#208
         a08a0:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: CalcIconDimensions__10TClipboardSFP11TRichStringPsT2RC6RefVar
 * Address: 000a08a4
 */
void TClipboard::CalcIconDimensions() {
    /*
         a08a4:	e1a0c00d 	mov	ip, sp
         a08a8:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         a08ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         a08b0:	e1a04000 	mov	r4, r0
         a08b4:	e1a05001 	mov	r5, r1
         a08b8:	e1a06003 	mov	r6, r3
         a08bc:	e24dd020 	sub	sp, sp, #32	; 0x20
         a08c0:	e3a00002 	mov	r0, #2	; 0x2
         a08c4:	eb6c8620 	bl	1bc214c <$AllocateRefHandle(long)>
         a08c8:	e58d0000 	str	r0, [sp]
         a08cc:	e3a00000 	mov	r0, #0	; 0x0
         a08d0:	e59d1000 	ldr	r1, [sp]
         a08d4:	e5a10004 	str	r0, [r1, #4]!	; fField4
         a08d8:	e58d001c 	str	r0, [sp, #28]
         a08dc:	e1a0100d 	mov	r1, sp
         a08e0:	e1a00006 	mov	r0, r6
         a08e4:	eb6ca2fe 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
         a08e8:	e24dd024 	sub	sp, sp, #36	; 0x24
         a08ec:	e28d001c 	add	r0, sp, #28	; 0x1c
         a08f0:	e59f1154 	ldr	r1, [pc, #154]	; a0a4c <CalcIconDimensions__10TClipboardSFP11TRichStringPsT2RC6RefVar+0x1a8>
         a08f4:	e8915000 	ldmia	r1, {ip, lr}
         a08f8:	e8805000 	stmia	r0, {ip, lr}
         a08fc:	e1a0300d 	mov	r3, sp
         a0900:	e3a02000 	mov	r2, #0	; 0x0
         a0904:	e92d000c 	stmdb	sp!, {r2, r3}
         a0908:	e24dd008 	sub	sp, sp, #8	; 0x8
         a090c:	e28d002c 	add	r0, sp, #44	; 0x2c
         a0910:	e8905000 	ldmia	r0, {ip, lr}
         a0914:	e88d5000 	stmia	sp, {ip, lr}
         a0918:	e28d3034 	add	r3, sp, #52	; 0x34
         a091c:	e594200c 	ldr	r2, [r4, #12]	; fField12
         a0920:	e1a00004 	mov	r0, r4
         a0924:	e3a01000 	mov	r1, #0	; 0x0
         a0928:	eb6ac3e2 	bl	1b518b8 <$MeasureRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)>
         a092c:	e28dd010 	add	sp, sp, #16	; 0x10
         a0930:	e59d0014 	ldr	r0, [sp, #20]
         a0934:	e2800902 	add	r0, r0, #32768	; 0x8000
         a0938:	e1a00840 	mov	r0, r0, asr #16
         a093c:	e5c50001 	strb	r0, [r5, #1]
         a0940:	e1a00440 	mov	r0, r0, asr #8
         a0944:	e5c50000 	strb	r0, [r5]
         a0948:	e24dd010 	sub	sp, sp, #16	; 0x10
         a094c:	e1a0100d 	mov	r1, sp
         a0950:	e28d0034 	add	r0, sp, #52	; 0x34
         a0954:	eb6abba2 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
         a0958:	e59d0000 	ldr	r0, [sp]
         a095c:	e1a06800 	mov	r6, r0, lsl #16
         a0960:	e1a06846 	mov	r6, r6, asr #16
         a0964:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a0968:	e1a05800 	mov	r5, r0, lsl #16
         a096c:	e1a05845 	mov	r5, r5, asr #16
         a0970:	e1a00004 	mov	r0, r4
         a0974:	eb042c65 	bl	1abb10 <TRichString::NumInkWords( const(void))>
         a0978:	e1a08000 	mov	r8, r0
         a097c:	e3a07000 	mov	r7, #0	; 0x0
         a0980:	e3500000 	cmp	r0, #0	; 0x0
         a0984:	e59d903c 	ldr	r9, [sp, #60]
         a0988:	e59da038 	ldr	sl, [sp, #56]	; fField56
         a098c:	9a000021 	bls	a0a18 <CalcIconDimensions__10TClipboardSFP11TRichStringPsT2RC6RefVar+0x174>
         a0990:	e24dd004 	sub	sp, sp, #4	; 0x4
         a0994:	e1a01007 	mov	r1, r7
         a0998:	e1a00004 	mov	r0, r4
         a099c:	eb042d45 	bl	1abeb8 <TRichString::CloneInkWordNo( const(unsigned long))>
         a09a0:	eb6c85e9 	bl	1bc214c <$AllocateRefHandle(long)>
         a09a4:	e58d0000 	str	r0, [sp]
         a09a8:	e28d1038 	add	r1, sp, #56	; 0x38
         a09ac:	e1a0000d 	mov	r0, sp
         a09b0:	eb6ca2cb 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
         a09b4:	e58d9040 	str	r9, [sp, #64]	; fField64
         a09b8:	e58da03c 	str	sl, [sp, #60]
         a09bc:	e28d1004 	add	r1, sp, #4	; 0x4
         a09c0:	e28d0038 	add	r0, sp, #56	; 0x38
         a09c4:	eb6abb86 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
         a09c8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         a09cc:	e1a01800 	mov	r1, r0, lsl #16
         a09d0:	e1a01841 	mov	r1, r1, asr #16
         a09d4:	e59d0008 	ldr	r0, [sp, #8]
         a09d8:	e1a00800 	mov	r0, r0, lsl #16
         a09dc:	e1a00840 	mov	r0, r0, asr #16
         a09e0:	e1510006 	cmp	r1, r6
         a09e4:	d1a01006 	movle	r1, r6
         a09e8:	e1a06801 	mov	r6, r1, lsl #16
         a09ec:	e1a06846 	mov	r6, r6, asr #16
         a09f0:	e1500005 	cmp	r0, r5
         a09f4:	d1a00005 	movle	r0, r5
         a09f8:	e1a05800 	mov	r5, r0, lsl #16
         a09fc:	e1a05845 	mov	r5, r5, asr #16
         a0a00:	e59d0000 	ldr	r0, [sp]
         a0a04:	eb6c89ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0a08:	e28dd004 	add	sp, sp, #4	; 0x4
         a0a0c:	e2877001 	add	r7, r7, #1	; 0x1
         a0a10:	e1570008 	cmp	r7, r8
         a0a14:	3affffdd 	bcc	a0990 <CalcIconDimensions__10TClipboardSFP11TRichStringPsT2RC6RefVar+0xec>
         a0a18:	e0860005 	add	r0, r6, r5
         a0a1c:	e51b2030 	ldr	r2, [fp, -#48]	; fField48
         a0a20:	e5c20001 	strb	r0, [r2, #1]
         a0a24:	e1a00440 	mov	r0, r0, asr #8
         a0a28:	e5c20000 	strb	r0, [r2]
         a0a2c:	e28dd034 	add	sp, sp, #52	; 0x34
         a0a30:	e59d001c 	ldr	r0, [sp, #28]
         a0a34:	e3300000 	teq	r0, #0	; 0x0
         a0a38:	159d001c 	ldrne	r0, [sp, #28]
         a0a3c:	1b6ab326 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
         a0a40:	e59d0000 	ldr	r0, [sp]
         a0a44:	eb6c89dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a0a48:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         a0a4c:	00371298 	mlaeqs	r7, r8, r2, r1
    */
}

/**
 * Symbol: CalcIconBounds__10TClipboardSFsT1RC6TPointP5TRect
 * Address: 000a0a50
 */
void TClipboard::CalcIconBounds() {
    /*
         a0a50:	e1a0c00d 	mov	ip, sp
         a0a54:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a0a58:	e24cb004 	sub	fp, ip, #4	; 0x4
         a0a5c:	e1a04003 	mov	r4, r3
         a0a60:	e1a05800 	mov	r5, r0, lsl #16
         a0a64:	e1a05845 	mov	r5, r5, asr #16
         a0a68:	e1a06801 	mov	r6, r1, lsl #16
         a0a6c:	e1a06846 	mov	r6, r6, asr #16
         a0a70:	e3a07000 	mov	r7, #0	; 0x0
         a0a74:	e5c37003 	strb	r7, [r3, #3]
         a0a78:	e5c37002 	strb	r7, [r3, #2]	; fField2
         a0a7c:	e5c37001 	strb	r7, [r3, #1]
         a0a80:	e5c37000 	strb	r7, [r3]
         a0a84:	e5c35007 	strb	r5, [r3, #7]
         a0a88:	e1a00445 	mov	r0, r5, asr #8
         a0a8c:	e5c40006 	strb	r0, [r4, #6]
         a0a90:	e5c46005 	strb	r6, [r4, #5]
         a0a94:	e1a00446 	mov	r0, r6, asr #8
         a0a98:	e5c40004 	strb	r0, [r4, #4]	; fField4
         a0a9c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a0aa0:	e5920000 	ldr	r0, [r2]
         a0aa4:	e58d0008 	str	r0, [sp, #8]
         a0aa8:	e1a0000d 	mov	r0, sp
         a0aac:	eb691205 	bl	1ae52c8 <$GetAppAreaBounds(TRect *)>
         a0ab0:	e0850fa5 	add	r0, r5, r5, lsr #31
         a0ab4:	e1a000c0 	mov	r0, r0, asr #1
         a0ab8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a0abc:	e0800841 	add	r0, r0, r1, asr #16
         a0ac0:	e59d100a 	ldr	r1, [sp, #10]
         a0ac4:	e1500841 	cmp	r0, r1, asr #16
         a0ac8:	a5cd700b 	strgeb	r7, [sp, #11]
         a0acc:	a5cd700a 	strgeb	r7, [sp, #10]
         a0ad0:	aa00000d 	bge	a0b0c <CalcIconBounds__10TClipboardSFsT1RC6TPointP5TRect+0xbc>
         a0ad4:	e59d200a 	ldr	r2, [sp, #10]
         a0ad8:	e59d1006 	ldr	r1, [sp, #6]
         a0adc:	e0651841 	rsb	r1, r5, r1, asr #16
         a0ae0:	e1510842 	cmp	r1, r2, asr #16
         a0ae4:	c59d1008 	ldrgt	r1, [sp, #8]
         a0ae8:	c0410000 	subgt	r0, r1, r0
         a0aec:	ca000003 	bgt	a0b00 <CalcIconBounds__10TClipboardSFsT1RC6TPointP5TRect+0xb0>
         a0af0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         a0af4:	e59d0000 	ldr	r0, [sp]
         a0af8:	e0410000 	sub	r0, r1, r0
         a0afc:	e0400005 	sub	r0, r0, r5
         a0b00:	e5cd000b 	strb	r0, [sp, #11]
         a0b04:	e1a00440 	mov	r0, r0, asr #8
         a0b08:	e5cd000a 	strb	r0, [sp, #10]
         a0b0c:	e59d1008 	ldr	r1, [sp, #8]
         a0b10:	e1a01841 	mov	r1, r1, asr #16
         a0b14:	e59d0000 	ldr	r0, [sp]
         a0b18:	e1510840 	cmp	r1, r0, asr #16
         a0b1c:	d5cd7009 	strleb	r7, [sp, #9]
         a0b20:	d5cd7008 	strleb	r7, [sp, #8]
         a0b24:	da000009 	ble	a0b50 <CalcIconBounds__10TClipboardSFsT1RC6TPointP5TRect+0x100>
         a0b28:	e59d0006 	ldr	r0, [sp, #6]
         a0b2c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a0b30:	e0400001 	sub	r0, r0, r1
         a0b34:	e1a00800 	mov	r0, r0, lsl #16
         a0b38:	e0660840 	rsb	r0, r6, r0, asr #16
         a0b3c:	e59d1008 	ldr	r1, [sp, #8]
         a0b40:	e1500841 	cmp	r0, r1, asr #16
         a0b44:	d5cd0009 	strleb	r0, [sp, #9]
         a0b48:	d1a00440 	movle	r0, r0, asr #8
         a0b4c:	d5cd0008 	strleb	r0, [sp, #8]
         a0b50:	e24dd004 	sub	sp, sp, #4	; 0x4
         a0b54:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         a0b58:	e58d0000 	str	r0, [sp]
         a0b5c:	e1a00004 	mov	r0, r4
         a0b60:	e59d1002 	ldr	r1, [sp, #2]	; fField2
         a0b64:	e1a01841 	mov	r1, r1, asr #16
         a0b68:	e59d2000 	ldr	r2, [sp]
         a0b6c:	e1a02842 	mov	r2, r2, asr #16
         a0b70:	eb6ac35c 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         a0b74:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

