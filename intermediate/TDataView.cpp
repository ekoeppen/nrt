#include "include/TDataView.h"

/**
 * Symbol: TDataView::ClassID( const(void))
 * Address: 000a2fc0
 */
TDataView::ClassID( const(void)) {
    /*
         a2fc0:	e3a00053 	mov	r0, #83	; 0x53
         a2fc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::DerivedFrom( const(long))
 * Address: 000a2fc8
 */
TDataView::DerivedFrom( const(long)) {
    /*
         a2fc8:	e1a0c00d 	mov	ip, sp
         a2fcc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         a2fd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         a2fd4:	e3310053 	teq	r1, #83	; 0x53
         a2fd8:	0a000002 	beq	a2fe8 <TDataView::DerivedFrom( const(long))+0x20>
         a2fdc:	eb070177 	bl	2635c0 <TView::DerivedFrom( const(long))>
         a2fe0:	e3300000 	teq	r0, #0	; 0x0
         a2fe4:	0a000001 	beq	a2ff0 <TDataView::DerivedFrom( const(long))+0x28>
         a2fe8:	e3a00001 	mov	r0, #1	; 0x1
         a2fec:	ea000000 	b	a2ff4 <TDataView::DerivedFrom( const(long))+0x2c>
         a2ff0:	e3a00000 	mov	r0, #0	; 0x0
         a2ff4:	e20000ff 	and	r0, r0, #255	; 0xff
         a2ff8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TDataView::HandleTap(TPoint &)
 * Address: 000a3034
 */
TDataView::HandleTap(TPoint &) {
    /*
         a3034:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::GetEnclosingEditView(void)
 * Address: 000a3038
 */
TDataView::GetEnclosingEditView(void) {
    /*
         a3038:	e1a0c00d 	mov	ip, sp
         a303c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a3040:	e24cb004 	sub	fp, ip, #4	; 0x4
         a3044:	e5b0401c 	ldr	r4, [r0, #28]!	; fField28
         a3048:	e1a00004 	mov	r0, r4
         a304c:	e3a0104d 	mov	r1, #77	; 0x4d
         a3050:	e5942000 	ldr	r2, [r4]
         a3054:	e1a0e00f 	mov	lr, pc
         a3058:	e282f004 	add	pc, r2, #4	; 0x4
         a305c:	e3300000 	teq	r0, #0	; 0x0
         a3060:	e1a00004 	mov	r0, r4
         a3064:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         a3068:	e3a0104e 	mov	r1, #78	; 0x4e
         a306c:	e5902000 	ldr	r2, [r0]
         a3070:	e1a0e00f 	mov	lr, pc
         a3074:	e282f004 	add	pc, r2, #4	; 0x4
         a3078:	e3300000 	teq	r0, #0	; 0x0
         a307c:	15b4001c 	ldrne	r0, [r4, #28]!	; fField28
         a3080:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDataView::DiceHilited(RefVar const &, TEditView *, TPoint &, unsigned char)
 * Address: 000a3084
 */
TDataView::DiceHilited(RefVar const &, TEditView *, TPoint &, unsigned char) {
    /*
         a3084:	e1a0c00d 	mov	ip, sp
         a3088:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a308c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a3090:	e1a04000 	mov	r4, r0
         a3094:	e1a05001 	mov	r5, r1
         a3098:	e1a07002 	mov	r7, r2
         a309c:	e1a06003 	mov	r6, r3
         a30a0:	e59b0004 	ldr	r0, [fp, #4]
         a30a4:	e20080ff 	and	r8, r0, #255	; 0xff
         a30a8:	e24dd010 	sub	sp, sp, #16	; 0x10
         a30ac:	e1a0000d 	mov	r0, sp
         a30b0:	e594101c 	ldr	r1, [r4, #28]	; fField28
         a30b4:	eb071112 	bl	267504 <TView::ContentsOrigin(void)>
         a30b8:	e5961002 	ldr	r1, [r6, #2]
         a30bc:	e1a01821 	mov	r1, r1, lsr #16
         a30c0:	e59d0000 	ldr	r0, [sp]
         a30c4:	e0810000 	add	r0, r1, r0
         a30c8:	e1a00800 	mov	r0, r0, lsl #16
         a30cc:	e1a00840 	mov	r0, r0, asr #16
         a30d0:	e5962000 	ldr	r2, [r6]
         a30d4:	e1a02822 	mov	r2, r2, lsr #16
         a30d8:	e41d1004 	ldr	r1, [sp], -#4
         a30dc:	e1a01821 	mov	r1, r1, lsr #16
         a30e0:	e0821001 	add	r1, r2, r1
         a30e4:	e1a01801 	mov	r1, r1, lsl #16
         a30e8:	e1a01841 	mov	r1, r1, asr #16
         a30ec:	e5cd0003 	strb	r0, [sp, #3]
         a30f0:	e1a00440 	mov	r0, r0, asr #8
         a30f4:	e5cd0002 	strb	r0, [sp, #2]
         a30f8:	e5cd1001 	strb	r1, [sp, #1]
         a30fc:	e1a00441 	mov	r0, r1, asr #8
         a3100:	e5cd0000 	strb	r0, [sp]
         a3104:	e49d0004 	ldr	r0, [sp], #4
         a3108:	e1a01007 	mov	r1, r7
         a310c:	e58d0004 	str	r0, [sp, #4]
         a3110:	e28d0008 	add	r0, sp, #8	; 0x8
         a3114:	eb0710fa 	bl	267504 <TView::ContentsOrigin(void)>
         a3118:	e59d0004 	ldr	r0, [sp, #4]
         a311c:	e59d1008 	ldr	r1, [sp, #8]
         a3120:	e0400001 	sub	r0, r0, r1
         a3124:	e1a00800 	mov	r0, r0, lsl #16
         a3128:	e1a00840 	mov	r0, r0, asr #16
         a312c:	e59d1006 	ldr	r1, [sp, #6]
         a3130:	e59d200a 	ldr	r2, [sp, #10]
         a3134:	e0411002 	sub	r1, r1, r2
         a3138:	e1a01801 	mov	r1, r1, lsl #16
         a313c:	e1a01841 	mov	r1, r1, asr #16
         a3140:	e24dd004 	sub	sp, sp, #4	; 0x4
         a3144:	e5cd0003 	strb	r0, [sp, #3]
         a3148:	e1a00440 	mov	r0, r0, asr #8
         a314c:	e5cd0002 	strb	r0, [sp, #2]
         a3150:	e5cd1001 	strb	r1, [sp, #1]
         a3154:	e1a00441 	mov	r0, r1, asr #8
         a3158:	e5cd0000 	strb	r0, [sp]
         a315c:	e49d0010 	ldr	r0, [sp], #16
         a3160:	e1a02007 	mov	r2, r7
         a3164:	e1a01005 	mov	r1, r5
         a3168:	e58d0000 	str	r0, [sp]
         a316c:	e1a00004 	mov	r0, r4
         a3170:	e5943000 	ldr	r3, [r4]
         a3174:	e1a0e00f 	mov	lr, pc
         a3178:	e283fe13 	add	pc, r3, #304	; 0x130
         a317c:	e1b06000 	movs	r6, r0
         a3180:	0a00000a 	beq	a31b0 <TDataView::DiceHilited(RefVar const &, TEditView *, TPoint &, unsigned char)+0x12c>
         a3184:	e1a00006 	mov	r0, r6
         a3188:	e59d1000 	ldr	r1, [sp]
         a318c:	eb6c98da 	bl	1bc94fc <TView::$DoMoveCommand(TPoint)>
         a3190:	e3380000 	teq	r8, #0	; 0x0
         a3194:	e1a01005 	mov	r1, r5
         a3198:	e1a00004 	mov	r0, r4
         a319c:	e5942000 	ldr	r2, [r4]
         a31a0:	028220a4 	addeq	r2, r2, #164	; 0xa4
         a31a4:	128220a8 	addne	r2, r2, #168	; 0xa8
         a31a8:	e1a0e00f 	mov	lr, pc
         a31ac:	e1a0f002 	mov	pc, r2
         a31b0:	e1a00006 	mov	r0, r6
         a31b4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TDataView::AddHilited(RefVar const &, TEditView *)
 * Address: 000a31b8
 */
TDataView::AddHilited(RefVar const &, TEditView *) {
    /*
         a31b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::GetHiliteView(void)
 * Address: 000a31bc
 */
TDataView::GetHiliteView(void) {
    /*
         a31bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::GetTextView(void)
 * Address: 000a31c0
 */
TDataView::GetTextView(void) {
    /*
         a31c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::HiliteText(long, long, unsigned char)
 * Address: 000a31c4
 */
TDataView::HiliteText(long, long, unsigned char) {
    /*
         a31c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::PointOverHilitedText(TPoint &)
 * Address: 000a31c8
 */
TDataView::PointOverHilitedText(TPoint &) {
    /*
         a31c8:	e3a00000 	mov	r0, #0	; 0x0
         a31cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::PointOverText(TPoint &, TPoint *)
 * Address: 000a31d0
 */
TDataView::PointOverText(TPoint &, TPoint *) {
    /*
         a31d0:	e3a00000 	mov	r0, #0	; 0x0
         a31d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::DrawHilitedData(void)
 * Address: 000a31d8
 */
TDataView::DrawHilitedData(void) {
    /*
         a31d8:	e1a0c00d 	mov	ip, sp
         a31dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a31e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         a31e4:	e1a04000 	mov	r4, r0
         a31e8:	e24dd008 	sub	sp, sp, #8	; 0x8
         a31ec:	e5901000 	ldr	r1, [r0]
         a31f0:	e1a0e00f 	mov	lr, pc
         a31f4:	e281f094 	add	pc, r1, #148	; 0x94
         a31f8:	e3300000 	teq	r0, #0	; 0x0
         a31fc:	0a000041 	beq	a3308 <TDataView::DrawHilitedData(void)+0x130>
         a3200:	e24dd014 	sub	sp, sp, #20	; 0x14
         a3204:	e1a0000d 	mov	r0, sp
         a3208:	eb679074 	bl	1a873e0 <TRegionVar::$__ct(void)>
         a320c:	e59d0000 	ldr	r0, [sp]
         a3210:	eb6ab168 	bl	1b4f7b8 <$GetClip(Region **)>
         a3214:	e2840010 	add	r0, r4, #16	; 0x10
         a3218:	e28d1014 	add	r1, sp, #20	; 0x14
         a321c:	e5905000 	ldr	r5, [r0]
         a3220:	e8905000 	ldmia	r0, {ip, lr}
         a3224:	e8815000 	stmia	r1, {ip, lr}
         a3228:	e24dd028 	sub	sp, sp, #40	; 0x28
         a322c:	e28d0014 	add	r0, sp, #20	; 0x14
         a3230:	eb67906a 	bl	1a873e0 <TRegionVar::$__ct(void)>
         a3234:	e1a01004 	mov	r1, r4
         a3238:	e1a0000d 	mov	r0, sp
         a323c:	eb679065 	bl	1a873d8 <HiliteLoop::$__ct(TView *)>
         a3240:	e1a0000d 	mov	r0, sp
         a3244:	eb67e6f1 	bl	1a9ce10 <HiliteLoop::$Next(void)>
         a3248:	e3300000 	teq	r0, #0	; 0x0
         a324c:	0a00001f 	beq	a32d0 <TDataView::DrawHilitedData(void)+0xf8>
         a3250:	e24dd004 	sub	sp, sp, #4	; 0x4
         a3254:	e59d1014 	ldr	r1, [sp, #20]
         a3258:	e1a0000d 	mov	r0, sp
         a325c:	e5912000 	ldr	r2, [r1]
         a3260:	e1a0e00f 	mov	lr, pc
         a3264:	e282f014 	add	pc, r2, #20	; 0x14
         a3268:	e1a0100d 	mov	r1, sp
         a326c:	e28d0018 	add	r0, sp, #24	; 0x18
         a3270:	eb679056 	bl	1a873d0 <TRegionVar::$__as(TRegion &)>
         a3274:	e1a0000d 	mov	r0, sp
         a3278:	e3a01000 	mov	r1, #0	; 0x0
         a327c:	eb679880 	bl	1a89484 <TRegion::$__dt(void)>
         a3280:	e52d5004 	str	r5, [sp, -#4]!
         a3284:	e59d1002 	ldr	r1, [sp, #2]
         a3288:	e1a01841 	mov	r1, r1, asr #16
         a328c:	e59d2000 	ldr	r2, [sp]
         a3290:	e1a02842 	mov	r2, r2, asr #16
         a3294:	e59d001c 	ldr	r0, [sp, #28]	; fField28
         a3298:	eb6ab993 	bl	1b518ec <$OffsetRgn__FPP6RegionlT2>
         a329c:	e28dd004 	add	sp, sp, #4	; 0x4
         a32a0:	e59d0018 	ldr	r0, [sp, #24]
         a32a4:	eb6ac1cc 	bl	1b539dc <$SetClip(Region **)>
         a32a8:	e28d1040 	add	r1, sp, #64	; 0x40
         a32ac:	e1a00004 	mov	r0, r4
         a32b0:	e5942000 	ldr	r2, [r4]
         a32b4:	e1a0e00f 	mov	lr, pc
         a32b8:	e282ff41 	add	pc, r2, #260	; 0x104
         a32bc:	e28dd004 	add	sp, sp, #4	; 0x4
         a32c0:	e1a0000d 	mov	r0, sp
         a32c4:	eb67e6d1 	bl	1a9ce10 <HiliteLoop::$Next(void)>
         a32c8:	e3300000 	teq	r0, #0	; 0x0
         a32cc:	1affffdf 	bne	a3250 <TDataView::DrawHilitedData(void)+0x78>
         a32d0:	e59d0028 	ldr	r0, [sp, #40]
         a32d4:	eb6ac1c0 	bl	1b539dc <$SetClip(Region **)>
         a32d8:	e1a0000d 	mov	r0, sp
         a32dc:	e3a01000 	mov	r1, #0	; 0x0
         a32e0:	eb679456 	bl	1a88440 <HiliteLoop::$__dt(void)>
         a32e4:	e28d0014 	add	r0, sp, #20	; 0x14
         a32e8:	e3a01000 	mov	r1, #0	; 0x0
         a32ec:	eb679454 	bl	1a88444 <TRegionVar::$__dt(void)>
         a32f0:	e28dd028 	add	sp, sp, #40	; 0x28
         a32f4:	e1a0000d 	mov	r0, sp
         a32f8:	e3a01000 	mov	r1, #0	; 0x0
         a32fc:	eb679450 	bl	1a88444 <TRegionVar::$__dt(void)>
         a3300:	e28dd014 	add	sp, sp, #20	; 0x14
         a3304:	ea000008 	b	a332c <TDataView::DrawHilitedData(void)+0x154>
         a3308:	e1a0100d 	mov	r1, sp
         a330c:	e1a00004 	mov	r0, r4
         a3310:	e5942000 	ldr	r2, [r4]
         a3314:	e1a0e00f 	mov	lr, pc
         a3318:	e282f024 	add	pc, r2, #36	; 0x24
         a331c:	e1a0100d 	mov	r1, sp
         a3320:	e1a00004 	mov	r0, r4
         a3324:	e3a02000 	mov	r2, #0	; 0x0
         a3328:	eb6c9c75 	bl	1bca504 <TView::$Draw(TRect const &, unsigned char)>
         a332c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDataView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)
 * Address: 000a3458
 */
TDataView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *) {
    /*
         a3458:	e3a00000 	mov	r0, #0	; 0x0
         a345c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::HandleCaret(unsigned long, long, TPoint &, TPoint &, TPoint &, TPoint &)
 * Address: 000a3460
 */
TDataView::HandleCaret(unsigned long, long, TPoint &, TPoint &, TPoint &, TPoint &) {
    /*
         a3460:	e3a00000 	mov	r0, #0	; 0x0
         a3464:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::HandleLineGesture(long, TPoint &, TPoint &)
 * Address: 000a3468
 */
TDataView::HandleLineGesture(long, TPoint &, TPoint &) {
    /*
         a3468:	e3a00000 	mov	r0, #0	; 0x0
         a346c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::HandleInkWord(RefVar const &, unsigned char)
 * Address: 000a3470
 */
TDataView::HandleInkWord(RefVar const &, unsigned char) {
    /*
         a3470:	e3a00000 	mov	r0, #0	; 0x0
         a3474:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::HandleInk(RefVar const &, unsigned char)
 * Address: 000a3478
 */
TDataView::HandleInk(RefVar const &, unsigned char) {
    /*
         a3478:	e3a00000 	mov	r0, #0	; 0x0
         a347c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::SaveAddedUnitBounds(TRect const &, TPoint const &, unsigned long)
 * Address: 000a3480
 */
TDataView::SaveAddedUnitBounds(TRect const &, TPoint const &, unsigned long) {
    /*
         a3480:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::GetContext(void)
 * Address: 000a3484
 */
TDataView::GetContext(void) {
    /*
         a3484:	e3a00002 	mov	r0, #2	; 0x2
         a3488:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::GetProperties(RefVar const &)
 * Address: 000a348c
 */
TDataView::GetProperties(RefVar const &) {
    /*
         a348c:	e3a00002 	mov	r0, #2	; 0x2
         a3490:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDataView::CleanupData(void)
 * Address: 000a3494
 */
TDataView::CleanupData(void) {
    /*
         a3494:	e1a0f00e 	mov	pc, lr
    */
}

