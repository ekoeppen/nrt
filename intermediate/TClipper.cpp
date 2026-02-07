#include "include/TClipper.h"

/**
 * Symbol: TClipper::__ct(void)
 * Address: 00066258
 */
TClipper::TClipper(void) {
    /*
         66258:	e1a0c00d 	mov	ip, sp
         6625c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         66260:	e24cb004 	sub	fp, ip, #4	; 0x4
         66264:	e1b04000 	movs	r4, r0
         66268:	1a000003 	bne	6627c <TClipper::__ct(void)+0x24>
         6626c:	e3a0000c 	mov	r0, #12	; 0xc
         66270:	eb6da130 	bl	1bce738 <$__nw(unsigned int)>
         66274:	e1b04000 	movs	r4, r0
         66278:	0a000005 	beq	66294 <TClipper::__ct(void)+0x3c>
         6627c:	e1a00004 	mov	r0, r4
         66280:	eb68845b 	bl	1a873f4 <TRegionStruct::$__ct(void)>
         66284:	e2840004 	add	r0, r4, #4	; 0x4
         66288:	eb688459 	bl	1a873f4 <TRegionStruct::$__ct(void)>
         6628c:	e3a00000 	mov	r0, #0	; 0x0
         66290:	e5c40008 	strb	r0, [r4, #8]	; fField8
         66294:	e1a00004 	mov	r0, r4
         66298:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClipper::UpdateRegions(TView *)
 * Address: 0006629c
 */
TClipper::UpdateRegions(TView *) {
    /*
         6629c:	e1a0c00d 	mov	ip, sp
         662a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         662a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         662a8:	e1a04000 	mov	r4, r0
         662ac:	e1a05001 	mov	r5, r1
         662b0:	e24dd008 	sub	sp, sp, #8	; 0x8
         662b4:	e1a02001 	mov	r2, r1
         662b8:	e1a0100d 	mov	r1, sp
         662bc:	e1a00002 	mov	r0, r2
         662c0:	e5922000 	ldr	r2, [r2]
         662c4:	e1a0e00f 	mov	lr, pc
         662c8:	e282f024 	add	pc, r2, #36	; 0x24
         662cc:	e5b5000c 	ldr	r0, [r5, #12]!
         662d0:	e200040f 	and	r0, r0, #251658240	; 0xf000000
         662d4:	e1a00c20 	mov	r0, r0, lsr #24
         662d8:	e1b05080 	movs	r5, r0, lsl #1
         662dc:	0a000007 	beq	66300 <TClipper::UpdateRegions(TView *)+0x64>
         662e0:	eb6bad83 	bl	1b518f4 <$OpenRgn(void)>
         662e4:	e1a02005 	mov	r2, r5
         662e8:	e1a01005 	mov	r1, r5
         662ec:	e1a0000d 	mov	r0, sp
         662f0:	eb6ba52b 	bl	1b4f7a4 <$FrameRoundRect__FP4RectlT2>
         662f4:	e5940000 	ldr	r0, [r4]
         662f8:	eb6b9cea 	bl	1b4d6a8 <$CloseRgn(Region **)>
         662fc:	ea000002 	b	6630c <TClipper::UpdateRegions(TView *)+0x70>
         66300:	e1a0100d 	mov	r1, sp
         66304:	e5940000 	ldr	r0, [r4]
         66308:	eb6bb5a3 	bl	1b5399c <$RectRgn(Region **, Rect *)>
         6630c:	e2842004 	add	r2, r4, #4	; 0x4
         66310:	e24dd008 	sub	sp, sp, #8	; 0x8
         66314:	e3a00001 	mov	r0, #1	; 0x1
         66318:	e2400902 	sub	r0, r0, #32768	; 0x8000
         6631c:	e3a03902 	mov	r3, #32768	; 0x8000
         66320:	e2433002 	sub	r3, r3, #2	; 0x2
         66324:	e5cd0001 	strb	r0, [sp, #1]
         66328:	e3e0107f 	mvn	r1, #127	; 0x7f
         6632c:	e5cd1000 	strb	r1, [sp]
         66330:	e5cd0003 	strb	r0, [sp, #3]
         66334:	e5cd1002 	strb	r1, [sp, #2]
         66338:	e5cd3005 	strb	r3, [sp, #5]
         6633c:	e3a0007f 	mov	r0, #127	; 0x7f
         66340:	e5cd0004 	strb	r0, [sp, #4]
         66344:	e5cd3007 	strb	r3, [sp, #7]
         66348:	e5cd0006 	strb	r0, [sp, #6]
         6634c:	e1a0100d 	mov	r1, sp
         66350:	e5920000 	ldr	r0, [r2]
         66354:	eb6bb590 	bl	1b5399c <$RectRgn(Region **, Rect *)>
         66358:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TClipper::Offset(TPoint)
 * Address: 0006635c
 */
TClipper::Offset(TPoint) {
    /*
         6635c:	e1a0c00d 	mov	ip, sp
         66360:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         66364:	e24cb004 	sub	fp, ip, #4	; 0x4
         66368:	e52d1004 	str	r1, [sp, -#4]!
         6636c:	e59d1002 	ldr	r1, [sp, #2]
         66370:	e1a01841 	mov	r1, r1, asr #16
         66374:	e59d2000 	ldr	r2, [sp]
         66378:	e1a02842 	mov	r2, r2, asr #16
         6637c:	e5900000 	ldr	r0, [r0]
         66380:	eb6bad59 	bl	1b518ec <$OffsetRgn__FPP6RegionlT2>
         66384:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TClipper::RecalcVisible(TBaseRegion)
 * Address: 00066388
 */
TClipper::RecalcVisible(TBaseRegion) {
    /*
         66388:	e1a0c00d 	mov	ip, sp
         6638c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         66390:	e24cb004 	sub	fp, ip, #4	; 0x4
         66394:	e1a04000 	mov	r4, r0
         66398:	e2802004 	add	r2, r0, #4	; 0x4
         6639c:	e1a05002 	mov	r5, r2
         663a0:	e5900000 	ldr	r0, [r0]
         663a4:	e5922000 	ldr	r2, [r2]
         663a8:	eb6b9cc7 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
         663ac:	e5950000 	ldr	r0, [r5]
         663b0:	e5941000 	ldr	r1, [r4]
         663b4:	eb6ba0dd 	bl	1b4e730 <$EqualRgn__FPP6RegionT1>
         663b8:	e3300000 	teq	r0, #0	; 0x0
         663bc:	13a00000 	movne	r0, #0	; 0x0
         663c0:	03a00001 	moveq	r0, #1	; 0x1
         663c4:	e5c40008 	strb	r0, [r4, #8]	; fField8
         663c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

