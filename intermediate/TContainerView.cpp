#include "include/TContainerView.h"

/**
 * Symbol: TContainerView::ClassID( const(void))
 * Address: 000731e4
 */
TContainerView::ClassID( const(void)) {
    /*
         731e4:	e3a0004e 	mov	r0, #78	; 0x4e
         731e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TContainerView::DerivedFrom( const(long))
 * Address: 000731ec
 */
TContainerView::DerivedFrom( const(long)) {
    /*
         731ec:	e1a0c00d 	mov	ip, sp
         731f0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         731f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         731f8:	e331004e 	teq	r1, #78	; 0x4e
         731fc:	0a000002 	beq	7320c <TContainerView::DerivedFrom( const(long))+0x20>
         73200:	eb00bf70 	bl	a2fc8 <TDataView::DerivedFrom( const(long))>
         73204:	e3300000 	teq	r0, #0	; 0x0
         73208:	0a000001 	beq	73214 <TContainerView::DerivedFrom( const(long))+0x28>
         7320c:	e3a00001 	mov	r0, #1	; 0x1
         73210:	ea000000 	b	73218 <TContainerView::DerivedFrom( const(long))+0x2c>
         73214:	e3a00000 	mov	r0, #0	; 0x0
         73218:	e20000ff 	and	r0, r0, #255	; 0xff
         7321c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::HiliteAll(void)
 * Address: 00073220
 */
TContainerView::HiliteAll(void) {
    /*
         73220:	e1a0c00d 	mov	ip, sp
         73224:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         73228:	e24cb004 	sub	fp, ip, #4	; 0x4
         7322c:	e1a04000 	mov	r4, r0
         73230:	e5901000 	ldr	r1, [r0]
         73234:	e1a0e00f 	mov	lr, pc
         73238:	e281f0ac 	add	pc, r1, #172	; 0xac
         7323c:	e1a00004 	mov	r0, r4
         73240:	e3a02000 	mov	r2, #0	; 0x0
         73244:	e3a01000 	mov	r1, #0	; 0x0
         73248:	e5943000 	ldr	r3, [r4]
         7324c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         73250:	e283fe16 	add	pc, r3, #352	; 0x160
    */
}

/**
 * Symbol: TContainerView::RemoveAllHilites(void)
 * Address: 00073254
 */
TContainerView::RemoveAllHilites(void) {
    /*
         73254:	ea691680 	b	1ab8c5c <TView::$RemoveAllHilites(void)>
    */
}

/**
 * Symbol: TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)
 * Address: 00073258
 */
TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char) {
    /*
         73258:	e1a0c00d 	mov	ip, sp
         7325c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         73260:	e24cb004 	sub	fp, ip, #4	; 0x4
         73264:	e1a05000 	mov	r5, r0
         73268:	e1a06001 	mov	r6, r1
         7326c:	e1a04002 	mov	r4, r2
         73270:	e1a07003 	mov	r7, r3
         73274:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         73278:	e24dd004 	sub	sp, sp, #4	; 0x4
         7327c:	e20080ff 	and	r8, r0, #255	; 0xff
         73280:	e2850010 	add	r0, r5, #16	; 0x10
         73284:	eb68a6f3 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         73288:	e3a01000 	mov	r1, #0	; 0x0
         7328c:	e3300000 	teq	r0, #0	; 0x0
         73290:	01a00001 	moveq	r0, r1
         73294:	0a000009 	beq	732c0 <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x68>
         73298:	e1a03008 	mov	r3, r8
         7329c:	e92d0008 	stmdb	sp!, {r3}
         732a0:	e1a03007 	mov	r3, r7
         732a4:	e1a02004 	mov	r2, r4
         732a8:	e1a01006 	mov	r1, r6
         732ac:	e1a00005 	mov	r0, r5
         732b0:	eb697979 	bl	1ad189c <TView::$HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)>
         732b4:	e28dd004 	add	sp, sp, #4	; 0x4
         732b8:	e3300000 	teq	r0, #0	; 0x0
         732bc:	0a000000 	beq	732c4 <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x6c>
         732c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         732c4:	e3380000 	teq	r8, #0	; 0x0
         732c8:	1a00001c 	bne	73340 <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0xe8>
         732cc:	e24dd00c 	sub	sp, sp, #12	; 0xc
         732d0:	e3a08000 	mov	r8, #0	; 0x0
         732d4:	e1a0000d 	mov	r0, sp
         732d8:	e5b51020 	ldr	r1, [r5, #32]!	; fField32
         732dc:	eb685454 	bl	1a88434 <TListLoop::$__ct(CList *)>
         732e0:	e1a0000d 	mov	r0, sp
         732e4:	eb68a6cd 	bl	1a9ce20 <TListLoop::$Next(void)>
         732e8:	e3300000 	teq	r0, #0	; 0x0
         732ec:	0a000011 	beq	73338 <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0xe0>
         732f0:	e3a03000 	mov	r3, #0	; 0x0
         732f4:	e92d0008 	stmdb	sp!, {r3}
         732f8:	e1a03007 	mov	r3, r7
         732fc:	e1a02004 	mov	r2, r4
         73300:	e1a01006 	mov	r1, r6
         73304:	e590c000 	ldr	ip, [r0]
         73308:	e1a0e00f 	mov	lr, pc
         7330c:	e28cf090 	add	pc, ip, #144	; 0x90
         73310:	e28dd004 	add	sp, sp, #4	; 0x4
         73314:	e1580000 	cmp	r8, r0
         73318:	c1a00008 	movgt	r0, r8
         7331c:	e1a08000 	mov	r8, r0
         73320:	e1a0000d 	mov	r0, sp
         73324:	eb68a6bd 	bl	1a9ce20 <TListLoop::$Next(void)>
         73328:	e3300000 	teq	r0, #0	; 0x0
         7332c:	1affffef 	bne	732f0 <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x98>
         73330:	e3380005 	teq	r8, #5	; 0x5
         73334:	03a08004 	moveq	r8, #4	; 0x4
         73338:	e1a00008 	mov	r0, r8
         7333c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         73340:	e3340004 	teq	r4, #4	; 0x4
         73344:	e5959020 	ldr	r9, [r5, #32]	; fField32
         73348:	03a04005 	moveq	r4, #5	; 0x5
         7334c:	e24dd008 	sub	sp, sp, #8	; 0x8
         73350:	e2540005 	subs	r0, r4, #5	; 0x5
         73354:	13a00001 	movne	r0, #1	; 0x1
         73358:	e20030ff 	and	r3, r0, #255	; 0xff
         7335c:	e3a01000 	mov	r1, #0	; 0x0
         73360:	e3a08000 	mov	r8, #0	; 0x0
         73364:	e88d000a 	stmia	sp, {r1, r3}
         73368:	e5990000 	ldr	r0, [r9]
         7336c:	e3500000 	cmp	r0, #0	; 0x0
         73370:	da000034 	ble	73448 <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x1f0>
         73374:	e59f00c8 	ldr	r0, [pc, #c8]	; 73444 <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x1ec>
         73378:	e58d0008 	str	r0, [sp, #8]	; fField8
         7337c:	e1a01808 	mov	r1, r8, lsl #16
         73380:	e1a01841 	mov	r1, r1, asr #16
         73384:	e1a00009 	mov	r0, r9
         73388:	eb6dcbed 	bl	1be6344 <CList::$At(long)>
         7338c:	e1a0a000 	mov	sl, r0
         73390:	e59d3004 	ldr	r3, [sp, #4]	; fField4
         73394:	e92d0008 	stmdb	sp!, {r3}
         73398:	e1a03007 	mov	r3, r7
         7339c:	e1a02004 	mov	r2, r4
         733a0:	e1a01006 	mov	r1, r6
         733a4:	e590c000 	ldr	ip, [r0]
         733a8:	e1a0e00f 	mov	lr, pc
         733ac:	e28cf090 	add	pc, ip, #144	; 0x90
         733b0:	e28dd004 	add	sp, sp, #4	; 0x4
         733b4:	e3300000 	teq	r0, #0	; 0x0
         733b8:	0a000013 	beq	7340c <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x1b4>
         733bc:	e3a01001 	mov	r1, #1	; 0x1
         733c0:	e3300005 	teq	r0, #5	; 0x5
         733c4:	e58d1000 	str	r1, [sp]
         733c8:	1a00000f 	bne	7340c <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x1b4>
         733cc:	e5ba2004 	ldr	r2, [sl, #4]!	; fField4
         733d0:	e24dd004 	sub	sp, sp, #4	; 0x4
         733d4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         733d8:	e1a01005 	mov	r1, r5
         733dc:	e590a000 	ldr	sl, [r0]
         733e0:	e3a0003f 	mov	r0, #63	; 0x3f
         733e4:	eb68cbd5 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         733e8:	eb6d3b57 	bl	1bc214c <$AllocateRefHandle(long)>
         733ec:	e58d0000 	str	r0, [sp]
         733f0:	e1a0100d 	mov	r1, sp
         733f4:	e1a0000a 	mov	r0, sl
         733f8:	eb68750e 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         733fc:	e59d0000 	ldr	r0, [sp]
         73400:	eb6d3f6d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         73404:	e28dd004 	add	sp, sp, #4	; 0x4
         73408:	e2488001 	sub	r8, r8, #1	; 0x1
         7340c:	e2888001 	add	r8, r8, #1	; 0x1
         73410:	e5990000 	ldr	r0, [r9]
         73414:	e1500008 	cmp	r0, r8
         73418:	caffffd7 	bgt	7337c <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x124>
         7341c:	e59d1000 	ldr	r1, [sp]
         73420:	e3310000 	teq	r1, #0	; 0x0
         73424:	0a000007 	beq	73448 <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x1f0>
         73428:	e5990000 	ldr	r0, [r9]
         7342c:	e3300000 	teq	r0, #0	; 0x0
         73430:	03a04005 	moveq	r4, #5	; 0x5
         73434:	0a000004 	beq	7344c <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x1f4>
         73438:	e3340005 	teq	r4, #5	; 0x5
         7343c:	03a04004 	moveq	r4, #4	; 0x4
         73440:	ea000001 	b	7344c <TContainerView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x1f4>
         73444:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         73448:	e3a04000 	mov	r4, #0	; 0x0
         7344c:	e1a00004 	mov	r0, r4
         73450:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::HandleCaret(unsigned long, long, TPoint &, TPoint &, TPoint &, TPoint &)
 * Address: 00073454
 */
TContainerView::HandleCaret(unsigned long, long, TPoint &, TPoint &, TPoint &, TPoint &) {
    /*
         73454:	e1a0c00d 	mov	ip, sp
         73458:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         7345c:	e24cb004 	sub	fp, ip, #4	; 0x4
         73460:	e1a06001 	mov	r6, r1
         73464:	e1a05002 	mov	r5, r2
         73468:	e1a04003 	mov	r4, r3
         7346c:	e3a07000 	mov	r7, #0	; 0x0
         73470:	e59b800c 	ldr	r8, [fp, #12]	; fField12
         73474:	e59b9008 	ldr	r9, [fp, #8]	; fField8
         73478:	e59ba004 	ldr	sl, [fp, #4]	; fField4
         7347c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         73480:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         73484:	e1a0000d 	mov	r0, sp
         73488:	eb6853e9 	bl	1a88434 <TListLoop::$__ct(CList *)>
         7348c:	e1a0000d 	mov	r0, sp
         73490:	eb68a662 	bl	1a9ce20 <TListLoop::$Next(void)>
         73494:	e1b0c000 	movs	ip, r0
         73498:	0a000015 	beq	734f4 <TContainerView::HandleCaret(unsigned long, long, TPoint &, TPoint &, TPoint &, TPoint &)+0xa0>
         7349c:	e59c0008 	ldr	r0, [ip, #8]	; fField8
         734a0:	e3100001 	tst	r0, #1	; 0x1
         734a4:	0a00000e 	beq	734e4 <TContainerView::HandleCaret(unsigned long, long, TPoint &, TPoint &, TPoint &, TPoint &)+0x90>
         734a8:	e1a03008 	mov	r3, r8
         734ac:	e1a02009 	mov	r2, r9
         734b0:	e1a0100a 	mov	r1, sl
         734b4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         734b8:	e1a03004 	mov	r3, r4
         734bc:	e1a02005 	mov	r2, r5
         734c0:	e1a01006 	mov	r1, r6
         734c4:	e1a0000c 	mov	r0, ip
         734c8:	e59cc000 	ldr	ip, [ip]
         734cc:	e1a0e00f 	mov	lr, pc
         734d0:	e28cfe12 	add	pc, ip, #288	; 0x120
         734d4:	e28dd00c 	add	sp, sp, #12	; 0xc
         734d8:	e3300000 	teq	r0, #0	; 0x0
         734dc:	13a07001 	movne	r7, #1	; 0x1
         734e0:	1a000003 	bne	734f4 <TContainerView::HandleCaret(unsigned long, long, TPoint &, TPoint &, TPoint &, TPoint &)+0xa0>
         734e4:	e1a0000d 	mov	r0, sp
         734e8:	eb68a64c 	bl	1a9ce20 <TListLoop::$Next(void)>
         734ec:	e1b0c000 	movs	ip, r0
         734f0:	1affffe9 	bne	7349c <TContainerView::HandleCaret(unsigned long, long, TPoint &, TPoint &, TPoint &, TPoint &)+0x48>
         734f4:	e1a00007 	mov	r0, r7
         734f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::HandleLineGesture(long, TPoint &, TPoint &)
 * Address: 000734fc
 */
TContainerView::HandleLineGesture(long, TPoint &, TPoint &) {
    /*
         734fc:	e1a0c00d 	mov	ip, sp
         73500:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         73504:	e24cb004 	sub	fp, ip, #4	; 0x4
         73508:	e1a06001 	mov	r6, r1
         7350c:	e1a05002 	mov	r5, r2
         73510:	e1a04003 	mov	r4, r3
         73514:	e3a07000 	mov	r7, #0	; 0x0
         73518:	e24dd00c 	sub	sp, sp, #12	; 0xc
         7351c:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         73520:	e1a0000d 	mov	r0, sp
         73524:	eb6853c2 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73528:	e1a0000d 	mov	r0, sp
         7352c:	eb68a63b 	bl	1a9ce20 <TListLoop::$Next(void)>
         73530:	e1b0c000 	movs	ip, r0
         73534:	0a000010 	beq	7357c <TContainerView::HandleLineGesture(long, TPoint &, TPoint &)+0x80>
         73538:	e59c0008 	ldr	r0, [ip, #8]	; fField8
         7353c:	e3100001 	tst	r0, #1	; 0x1
         73540:	0a000009 	beq	7356c <TContainerView::HandleLineGesture(long, TPoint &, TPoint &)+0x70>
         73544:	e1a03004 	mov	r3, r4
         73548:	e1a02005 	mov	r2, r5
         7354c:	e1a01006 	mov	r1, r6
         73550:	e1a0000c 	mov	r0, ip
         73554:	e59cc000 	ldr	ip, [ip]
         73558:	e1a0e00f 	mov	lr, pc
         7355c:	e28cff49 	add	pc, ip, #292	; 0x124
         73560:	e3300000 	teq	r0, #0	; 0x0
         73564:	13a07001 	movne	r7, #1	; 0x1
         73568:	1a000003 	bne	7357c <TContainerView::HandleLineGesture(long, TPoint &, TPoint &)+0x80>
         7356c:	e1a0000d 	mov	r0, sp
         73570:	eb68a62a 	bl	1a9ce20 <TListLoop::$Next(void)>
         73574:	e1b0c000 	movs	ip, r0
         73578:	1affffee 	bne	73538 <TContainerView::HandleLineGesture(long, TPoint &, TPoint &)+0x3c>
         7357c:	e1a00007 	mov	r0, r7
         73580:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::HandleInkWord(RefVar const &, unsigned char)
 * Address: 00073584
 */
TContainerView::HandleInkWord(RefVar const &, unsigned char) {
    /*
         73584:	e1a0c00d 	mov	ip, sp
         73588:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         7358c:	e24cb004 	sub	fp, ip, #4	; 0x4
         73590:	e1a05000 	mov	r5, r0
         73594:	e1a04001 	mov	r4, r1
         73598:	e20290ff 	and	r9, r2, #255	; 0xff
         7359c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         735a0:	e3a07000 	mov	r7, #0	; 0x0
         735a4:	e3a08000 	mov	r8, #0	; 0x0
         735a8:	e1a00001 	mov	r0, r1
         735ac:	eb68cb6b 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
         735b0:	eb6d3ae5 	bl	1bc214c <$AllocateRefHandle(long)>
         735b4:	e1a06000 	mov	r6, r0
         735b8:	e59f0050 	ldr	r0, [pc, #50]	; 73610 <TContainerView::HandleInkWord(RefVar const &, unsigned char)+0x8c>
         735bc:	e5900000 	ldr	r0, [r0]
         735c0:	e5901000 	ldr	r1, [r0]
         735c4:	e5960000 	ldr	r0, [r6]
         735c8:	eb6d4324 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         735cc:	eb6d3ade 	bl	1bc214c <$AllocateRefHandle(long)>
         735d0:	e58d0000 	str	r0, [sp]
         735d4:	e1a0000d 	mov	r0, sp
         735d8:	e28d1004 	add	r1, sp, #4	; 0x4
         735dc:	eb688525 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         735e0:	e59d0000 	ldr	r0, [sp]
         735e4:	eb6d3ef4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         735e8:	e3a0a000 	mov	sl, #0	; 0x0
         735ec:	e2850010 	add	r0, r5, #16	; 0x10
         735f0:	e28d1004 	add	r1, sp, #4	; 0x4
         735f4:	eb68a617 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         735f8:	e3300000 	teq	r0, #0	; 0x0
         735fc:	1a000004 	bne	73614 <TContainerView::HandleInkWord(RefVar const &, unsigned char)+0x90>
         73600:	e1a00006 	mov	r0, r6
         73604:	eb6d3eec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         73608:	e1a0000a 	mov	r0, sl
         7360c:	ea000034 	b	736e4 <TContainerView::HandleInkWord(RefVar const &, unsigned char)+0x160>
         73610:	00682190 	streqb	r2, [r8], -#16	; fField16
         73614:	e24dd00c 	sub	sp, sp, #12	; 0xc
         73618:	e1a0000d 	mov	r0, sp
         7361c:	e5b51020 	ldr	r1, [r5, #32]!	; fField32
         73620:	eb685383 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73624:	e1a0000d 	mov	r0, sp
         73628:	eb68a5fc 	bl	1a9ce20 <TListLoop::$Next(void)>
         7362c:	e1b05000 	movs	r5, r0
         73630:	0a00001e 	beq	736b0 <TContainerView::HandleInkWord(RefVar const &, unsigned char)+0x12c>
         73634:	e3e0a004 	mvn	sl, #4	; 0x4
         73638:	e5950008 	ldr	r0, [r5, #8]	; fField8
         7363c:	e3100001 	tst	r0, #1	; 0x1
         73640:	0a000016 	beq	736a0 <TContainerView::HandleInkWord(RefVar const &, unsigned char)+0x11c>
         73644:	e24dd008 	sub	sp, sp, #8	; 0x8
         73648:	e2850010 	add	r0, r5, #16	; 0x10
         7364c:	e8905000 	ldmia	r0, {ip, lr}
         73650:	e88d5000 	stmia	sp, {ip, lr}
         73654:	e1a0000d 	mov	r0, sp
         73658:	e1a0100a 	mov	r1, sl
         7365c:	e1a0200a 	mov	r2, sl
         73660:	eb6b7476 	bl	1b50840 <$InsetRect__FP4RectlT2>
         73664:	e28d1018 	add	r1, sp, #24	; 0x18
         73668:	e1a0000d 	mov	r0, sp
         7366c:	eb68a5f9 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         73670:	e3300000 	teq	r0, #0	; 0x0
         73674:	0a000008 	beq	7369c <TContainerView::HandleInkWord(RefVar const &, unsigned char)+0x118>
         73678:	e1a01004 	mov	r1, r4
         7367c:	e1a00005 	mov	r0, r5
         73680:	e3a02000 	mov	r2, #0	; 0x0
         73684:	e5953000 	ldr	r3, [r5]
         73688:	e1a0e00f 	mov	lr, pc
         7368c:	e283ff4b 	add	pc, r3, #300	; 0x12c
         73690:	e1500007 	cmp	r0, r7
         73694:	c1a07000 	movgt	r7, r0
         73698:	c1a08005 	movgt	r8, r5
         7369c:	e28dd008 	add	sp, sp, #8	; 0x8
         736a0:	e1a0000d 	mov	r0, sp
         736a4:	eb68a5dd 	bl	1a9ce20 <TListLoop::$Next(void)>
         736a8:	e1b05000 	movs	r5, r0
         736ac:	1affffe1 	bne	73638 <TContainerView::HandleInkWord(RefVar const &, unsigned char)+0xb4>
         736b0:	e28dd00c 	add	sp, sp, #12	; 0xc
         736b4:	e3390000 	teq	r9, #0	; 0x0
         736b8:	13380000 	teqne	r8, #0	; 0x0
         736bc:	0a000005 	beq	736d8 <TContainerView::HandleInkWord(RefVar const &, unsigned char)+0x154>
         736c0:	e1a01004 	mov	r1, r4
         736c4:	e1a00008 	mov	r0, r8
         736c8:	e3a02001 	mov	r2, #1	; 0x1
         736cc:	e5983000 	ldr	r3, [r8]
         736d0:	e1a0e00f 	mov	lr, pc
         736d4:	e283ff4b 	add	pc, r3, #300	; 0x12c
         736d8:	e1a00006 	mov	r0, r6
         736dc:	eb6d3eb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         736e0:	e1a00007 	mov	r0, r7
         736e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::GlobalHiliteBounds(TRect *)
 * Address: 000736e8
 */
TContainerView::GlobalHiliteBounds(TRect *) {
    /*
         736e8:	e1a0c00d 	mov	ip, sp
         736ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         736f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         736f4:	e1a04000 	mov	r4, r0
         736f8:	e1a05001 	mov	r5, r1
         736fc:	e5901000 	ldr	r1, [r0]
         73700:	e1a0e00f 	mov	lr, pc
         73704:	e281f094 	add	pc, r1, #148	; 0x94
         73708:	e3300000 	teq	r0, #0	; 0x0
         7370c:	0a000029 	beq	737b8 <TContainerView::GlobalHiliteBounds(TRect *)+0xd0>
         73710:	e1a00004 	mov	r0, r4
         73714:	eb68f86f 	bl	1ab18d8 <TView::$FirstHilite(void)>
         73718:	eb68b230 	bl	1a9ffe0 <$RefToAddress(long)>
         7371c:	e5d0100c 	ldrb	r1, [r0, #12]	; fField12
         73720:	e3310000 	teq	r1, #0	; 0x0
         73724:	0a000012 	beq	73774 <TContainerView::GlobalHiliteBounds(TRect *)+0x8c>
         73728:	e24dd008 	sub	sp, sp, #8	; 0x8
         7372c:	e2800004 	add	r0, r0, #4	; 0x4
         73730:	e8905000 	ldmia	r0, {ip, lr}
         73734:	e88d5000 	stmia	sp, {ip, lr}
         73738:	e24dd004 	sub	sp, sp, #4	; 0x4
         7373c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         73740:	e58d0000 	str	r0, [sp]
         73744:	e28d0004 	add	r0, sp, #4	; 0x4
         73748:	e59d1002 	ldr	r1, [sp, #2]
         7374c:	e1a01841 	mov	r1, r1, asr #16
         73750:	e59d2000 	ldr	r2, [sp]
         73754:	e1a02842 	mov	r2, r2, asr #16
         73758:	eb6b7862 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         7375c:	e28dd004 	add	sp, sp, #4	; 0x4
         73760:	e1a0100d 	mov	r1, sp
         73764:	e1a00005 	mov	r0, r5
         73768:	eb68c6c8 	bl	1aa5290 <TRect::$Union(TRect const &)>
         7376c:	e28dd008 	add	sp, sp, #8	; 0x8
         73770:	ea000010 	b	737b8 <TContainerView::GlobalHiliteBounds(TRect *)+0xd0>
         73774:	e24dd00c 	sub	sp, sp, #12	; 0xc
         73778:	e1a0000d 	mov	r0, sp
         7377c:	e5941020 	ldr	r1, [r4, #32]	; fField32
         73780:	eb68532b 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73784:	e1a0000d 	mov	r0, sp
         73788:	eb68a5a4 	bl	1a9ce20 <TListLoop::$Next(void)>
         7378c:	e3300000 	teq	r0, #0	; 0x0
         73790:	0a000007 	beq	737b4 <TContainerView::GlobalHiliteBounds(TRect *)+0xcc>
         73794:	e1a01005 	mov	r1, r5
         73798:	e5902000 	ldr	r2, [r0]
         7379c:	e1a0e00f 	mov	lr, pc
         737a0:	e282f0b0 	add	pc, r2, #176	; 0xb0
         737a4:	e1a0000d 	mov	r0, sp
         737a8:	eb68a59c 	bl	1a9ce20 <TListLoop::$Next(void)>
         737ac:	e3300000 	teq	r0, #0	; 0x0
         737b0:	1afffff7 	bne	73794 <TContainerView::GlobalHiliteBounds(TRect *)+0xac>
         737b4:	e28dd00c 	add	sp, sp, #12	; 0xc
         737b8:	e1a00004 	mov	r0, r4
         737bc:	e5941000 	ldr	r1, [r4]
         737c0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         737c4:	e281f0c0 	add	pc, r1, #192	; 0xc0
    */
}

/**
 * Symbol: TContainerView::DrawHilites(unsigned char)
 * Address: 000737c8
 */
TContainerView::DrawHilites(unsigned char) {
    /*
         737c8:	e1a0c00d 	mov	ip, sp
         737cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         737d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         737d4:	e1a04000 	mov	r4, r0
         737d8:	e20150ff 	and	r5, r1, #255	; 0xff
         737dc:	eb68f83d 	bl	1ab18d8 <TView::$FirstHilite(void)>
         737e0:	eb68b1fe 	bl	1a9ffe0 <$RefToAddress(long)>
         737e4:	e5d0100c 	ldrb	r1, [r0, #12]	; fField12
         737e8:	e3310000 	teq	r1, #0	; 0x0
         737ec:	0a000018 	beq	73854 <TContainerView::DrawHilites(unsigned char)+0x8c>
         737f0:	e3350000 	teq	r5, #0	; 0x0
         737f4:	05941008 	ldreq	r1, [r4, #8]	; fField8
         737f8:	02011102 	andeq	r1, r1, #-2147483648	; 0x80000000
         737fc:	03310000 	teqeq	r1, #0	; 0x0
         73800:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         73804:	e24dd008 	sub	sp, sp, #8	; 0x8
         73808:	e2800004 	add	r0, r0, #4	; 0x4
         7380c:	e8905000 	ldmia	r0, {ip, lr}
         73810:	e88d5000 	stmia	sp, {ip, lr}
         73814:	e24dd004 	sub	sp, sp, #4	; 0x4
         73818:	e5940010 	ldr	r0, [r4, #16]	; fField16
         7381c:	e58d0000 	str	r0, [sp]
         73820:	e28d0004 	add	r0, sp, #4	; 0x4
         73824:	e59d1002 	ldr	r1, [sp, #2]
         73828:	e1a01841 	mov	r1, r1, asr #16
         7382c:	e59d2000 	ldr	r2, [sp]
         73830:	e1a02842 	mov	r2, r2, asr #16
         73834:	eb6b782b 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         73838:	e28dd004 	add	sp, sp, #4	; 0x4
         7383c:	e3a00004 	mov	r0, #4	; 0x4
         73840:	eb6b6fe6 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
         73844:	e1a01000 	mov	r1, r0
         73848:	e1a0000d 	mov	r0, sp
         7384c:	eb6b6bc7 	bl	1b4e770 <$FillRect(Rect *, PixelMap **)>
         73850:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         73854:	e24dd00c 	sub	sp, sp, #12	; 0xc
         73858:	e1a0000d 	mov	r0, sp
         7385c:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
         73860:	eb6852f3 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73864:	e1a0000d 	mov	r0, sp
         73868:	eb68a56c 	bl	1a9ce20 <TListLoop::$Next(void)>
         7386c:	e1b04000 	movs	r4, r0
         73870:	0a000011 	beq	738bc <TContainerView::DrawHilites(unsigned char)+0xf4>
         73874:	e1a00004 	mov	r0, r4
         73878:	e5941000 	ldr	r1, [r4]
         7387c:	e1a0e00f 	mov	lr, pc
         73880:	e281f094 	add	pc, r1, #148	; 0x94
         73884:	e3300000 	teq	r0, #0	; 0x0
         73888:	0a000007 	beq	738ac <TContainerView::DrawHilites(unsigned char)+0xe4>
         7388c:	e5940008 	ldr	r0, [r4, #8]	; fField8
         73890:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         73894:	1a000004 	bne	738ac <TContainerView::DrawHilites(unsigned char)+0xe4>
         73898:	e1a01005 	mov	r1, r5
         7389c:	e1a00004 	mov	r0, r4
         738a0:	e5942000 	ldr	r2, [r4]
         738a4:	e1a0e00f 	mov	lr, pc
         738a8:	e282f098 	add	pc, r2, #152	; 0x98
         738ac:	e1a0000d 	mov	r0, sp
         738b0:	eb68a55a 	bl	1a9ce20 <TListLoop::$Next(void)>
         738b4:	e1b04000 	movs	r4, r0
         738b8:	1affffed 	bne	73874 <TContainerView::DrawHilites(unsigned char)+0xac>
         738bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::DrawHilitedData(void)
 * Address: 000738c0
 */
TContainerView::DrawHilitedData(void) {
    /*
         738c0:	e1a0c00d 	mov	ip, sp
         738c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         738c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         738cc:	e24dd00c 	sub	sp, sp, #12	; 0xc
         738d0:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         738d4:	e1a0000d 	mov	r0, sp
         738d8:	eb6852d5 	bl	1a88434 <TListLoop::$__ct(CList *)>
         738dc:	e1a0000d 	mov	r0, sp
         738e0:	eb68a54e 	bl	1a9ce20 <TListLoop::$Next(void)>
         738e4:	e1b04000 	movs	r4, r0
         738e8:	0a00000d 	beq	73924 <TContainerView::DrawHilitedData(void)+0x64>
         738ec:	e1a00004 	mov	r0, r4
         738f0:	e5941000 	ldr	r1, [r4]
         738f4:	e1a0e00f 	mov	lr, pc
         738f8:	e281f094 	add	pc, r1, #148	; 0x94
         738fc:	e3300000 	teq	r0, #0	; 0x0
         73900:	0a000003 	beq	73914 <TContainerView::DrawHilitedData(void)+0x54>
         73904:	e1a00004 	mov	r0, r4
         73908:	e5941000 	ldr	r1, [r4]
         7390c:	e1a0e00f 	mov	lr, pc
         73910:	e281f088 	add	pc, r1, #136	; 0x88
         73914:	e1a0000d 	mov	r0, sp
         73918:	eb68a540 	bl	1a9ce20 <TListLoop::$Next(void)>
         7391c:	e1b04000 	movs	r4, r0
         73920:	1afffff1 	bne	738ec <TContainerView::DrawHilitedData(void)+0x2c>
         73924:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::ClickOptions(void)
 * Address: 00073928
 */
TContainerView::ClickOptions(void) {
    /*
         73928:	e3a00001 	mov	r0, #1	; 0x1
         7392c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TContainerView::Constructor(RefVar const &, TView *)
 * Address: 00073930
 */
TContainerView::Constructor(RefVar const &, TView *) {
    /*
         73930:	e1a0c00d 	mov	ip, sp
         73934:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         73938:	e24cb004 	sub	fp, ip, #4	; 0x4
         7393c:	e1a04000 	mov	r4, r0
         73940:	eb6d56e4 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
         73944:	e59f0020 	ldr	r0, [pc, #20]	; 7396c <TContainerView::Constructor(RefVar const &, TView *)+0x3c>
         73948:	e5900000 	ldr	r0, [r0]
         7394c:	e5900000 	ldr	r0, [r0]
         73950:	eb6d39fd 	bl	1bc214c <$AllocateRefHandle(long)>
         73954:	e3a01005 	mov	r1, #5	; 0x5
         73958:	e5841030 	str	r1, [r4, #48]	; fField48
         7395c:	e3a01002 	mov	r1, #2	; 0x2
         73960:	e5a41034 	str	r1, [r4, #52]!	; fField52
         73964:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         73968:	ea6d3e13 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7396c:	00681488 	rsbeq	r1, r8, r8, lsl #9
    */
}

/**
 * Symbol: TContainerView::AddHilited(RefVar const &, TEditView *)
 * Address: 00073970
 */
TContainerView::AddHilited(RefVar const &, TEditView *) {
    /*
         73970:	e1a0c00d 	mov	ip, sp
         73974:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         73978:	e24cb004 	sub	fp, ip, #4	; 0x4
         7397c:	e1a04000 	mov	r4, r0
         73980:	e1a05002 	mov	r5, r2
         73984:	e5902000 	ldr	r2, [r0]
         73988:	e1a0e00f 	mov	lr, pc
         7398c:	e282f09c 	add	pc, r2, #156	; 0x9c
         73990:	e3300000 	teq	r0, #0	; 0x0
         73994:	0a000014 	beq	739ec <TContainerView::AddHilited(RefVar const &, TEditView *)+0x7c>
         73998:	e24dd004 	sub	sp, sp, #4	; 0x4
         7399c:	e1a00004 	mov	r0, r4
         739a0:	e5941000 	ldr	r1, [r4]
         739a4:	e1a0e00f 	mov	lr, pc
         739a8:	e281ff59 	add	pc, r1, #356	; 0x164
         739ac:	eb6d39e6 	bl	1bc214c <$AllocateRefHandle(long)>
         739b0:	e58d0000 	str	r0, [sp]
         739b4:	e1a0100d 	mov	r1, sp
         739b8:	e1a00004 	mov	r0, r4
         739bc:	eb6d631d 	bl	1bcc638 <TView::$TransferCopyProtection(RefVar const &)>
         739c0:	e1a0100d 	mov	r1, sp
         739c4:	e1a00005 	mov	r0, r5
         739c8:	eb6856bc 	bl	1a894c0 <TEditView::$AddForm(RefVar const &)>
         739cc:	e1a04000 	mov	r4, r0
         739d0:	e5901000 	ldr	r1, [r0]
         739d4:	e1a0e00f 	mov	lr, pc
         739d8:	e281f0a0 	add	pc, r1, #160	; 0xa0
         739dc:	e59d0000 	ldr	r0, [sp]
         739e0:	eb6d3df5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         739e4:	e1a00004 	mov	r0, r4
         739e8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         739ec:	e24dd00c 	sub	sp, sp, #12	; 0xc
         739f0:	e3a07000 	mov	r7, #0	; 0x0
         739f4:	e1a0000d 	mov	r0, sp
         739f8:	e5941020 	ldr	r1, [r4, #32]	; fField32
         739fc:	eb68528c 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73a00:	e1a0000d 	mov	r0, sp
         73a04:	eb68a505 	bl	1a9ce20 <TListLoop::$Next(void)>
         73a08:	e1b06000 	movs	r6, r0
         73a0c:	0a000020 	beq	73a94 <TContainerView::AddHilited(RefVar const &, TEditView *)+0x124>
         73a10:	e1a00006 	mov	r0, r6
         73a14:	e5961000 	ldr	r1, [r6]
         73a18:	e1a0e00f 	mov	lr, pc
         73a1c:	e281f094 	add	pc, r1, #148	; 0x94
         73a20:	e3300000 	teq	r0, #0	; 0x0
         73a24:	0a000016 	beq	73a84 <TContainerView::AddHilited(RefVar const &, TEditView *)+0x114>
         73a28:	e24dd004 	sub	sp, sp, #4	; 0x4
         73a2c:	e1a00006 	mov	r0, r6
         73a30:	eb68f7a8 	bl	1ab18d8 <TView::$FirstHilite(void)>
         73a34:	eb6d39c4 	bl	1bc214c <$AllocateRefHandle(long)>
         73a38:	e1a02005 	mov	r2, r5
         73a3c:	e58d0000 	str	r0, [sp]
         73a40:	e1a0100d 	mov	r1, sp
         73a44:	e1a00006 	mov	r0, r6
         73a48:	e5963000 	ldr	r3, [r6]
         73a4c:	e1a0e00f 	mov	lr, pc
         73a50:	e283fe13 	add	pc, r3, #304	; 0x130
         73a54:	e1a07000 	mov	r7, r0
         73a58:	e24dd004 	sub	sp, sp, #4	; 0x4
         73a5c:	e1a01004 	mov	r1, r4
         73a60:	e1a0000d 	mov	r0, sp
         73a64:	eb6d5ec7 	bl	1bcb588 <TView::$LocalOrigin( const(void))>
         73a68:	e1a00007 	mov	r0, r7
         73a6c:	e49d1004 	ldr	r1, [sp], #4	; fField4
         73a70:	eb6d56a1 	bl	1bc94fc <TView::$DoMoveCommand(TPoint)>
         73a74:	e59d0000 	ldr	r0, [sp]
         73a78:	eb6d3dcf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         73a7c:	e28dd004 	add	sp, sp, #4	; 0x4
         73a80:	ea000003 	b	73a94 <TContainerView::AddHilited(RefVar const &, TEditView *)+0x124>
         73a84:	e1a0000d 	mov	r0, sp
         73a88:	eb68a4e4 	bl	1a9ce20 <TListLoop::$Next(void)>
         73a8c:	e1b06000 	movs	r6, r0
         73a90:	1affffde 	bne	73a10 <TContainerView::AddHilited(RefVar const &, TEditView *)+0xa0>
         73a94:	e1a00007 	mov	r0, r7
         73a98:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::DeleteHilited(RefVar const &)
 * Address: 00073a9c
 */
TContainerView::DeleteHilited(RefVar const &) {
    /*
         73a9c:	e1a0c00d 	mov	ip, sp
         73aa0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         73aa4:	e24cb004 	sub	fp, ip, #4	; 0x4
         73aa8:	e1a04000 	mov	r4, r0
         73aac:	e1a05001 	mov	r5, r1
         73ab0:	e5900008 	ldr	r0, [r0, #8]	; fField8
         73ab4:	e3100082 	tst	r0, #130	; 0x82
         73ab8:	0a000004 	beq	73ad0 <TContainerView::DeleteHilited(RefVar const &)+0x34>
         73abc:	e1a01005 	mov	r1, r5
         73ac0:	e1a00004 	mov	r0, r4
         73ac4:	e5942000 	ldr	r2, [r4]
         73ac8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         73acc:	e282f0a8 	add	pc, r2, #168	; 0xa8
         73ad0:	e1a01005 	mov	r1, r5
         73ad4:	e1a00004 	mov	r0, r4
         73ad8:	e5942000 	ldr	r2, [r4]
         73adc:	e1a0e00f 	mov	lr, pc
         73ae0:	e282f09c 	add	pc, r2, #156	; 0x9c
         73ae4:	e3300000 	teq	r0, #0	; 0x0
         73ae8:	0a00000f 	beq	73b2c <TContainerView::DeleteHilited(RefVar const &)+0x90>
         73aec:	e5b42004 	ldr	r2, [r4, #4]!	; fField4
         73af0:	e5941018 	ldr	r1, [r4, #24]	; fField24
         73af4:	e24dd004 	sub	sp, sp, #4	; 0x4
         73af8:	e59f0028 	ldr	r0, [pc, #28]	; 73b28 <TContainerView::DeleteHilited(RefVar const &)+0x8c>	; fField28
         73afc:	e5904000 	ldr	r4, [r0]
         73b00:	e3a0003f 	mov	r0, #63	; 0x3f
         73b04:	eb68ca0d 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         73b08:	eb6d398f 	bl	1bc214c <$AllocateRefHandle(long)>
         73b0c:	e58d0000 	str	r0, [sp]
         73b10:	e1a0100d 	mov	r1, sp
         73b14:	e1a00004 	mov	r0, r4
         73b18:	eb687346 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         73b1c:	e59d0000 	ldr	r0, [sp]
         73b20:	eb6d3da5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         73b24:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         73b28:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         73b2c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         73b30:	e1a0000d 	mov	r0, sp
         73b34:	e5941020 	ldr	r1, [r4, #32]	; fField32
         73b38:	eb68523d 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73b3c:	e1a0000d 	mov	r0, sp
         73b40:	eb68a4b6 	bl	1a9ce20 <TListLoop::$Next(void)>
         73b44:	e1b06000 	movs	r6, r0
         73b48:	0a000017 	beq	73bac <TContainerView::DeleteHilited(RefVar const &)+0x110>
         73b4c:	e1a00006 	mov	r0, r6
         73b50:	e5961000 	ldr	r1, [r6]
         73b54:	e1a0e00f 	mov	lr, pc
         73b58:	e281f094 	add	pc, r1, #148	; 0x94
         73b5c:	e3300000 	teq	r0, #0	; 0x0
         73b60:	0a00000d 	beq	73b9c <TContainerView::DeleteHilited(RefVar const &)+0x100>
         73b64:	e24dd004 	sub	sp, sp, #4	; 0x4
         73b68:	e1a00006 	mov	r0, r6
         73b6c:	eb68f759 	bl	1ab18d8 <TView::$FirstHilite(void)>
         73b70:	eb6d3975 	bl	1bc214c <$AllocateRefHandle(long)>
         73b74:	e58d0000 	str	r0, [sp]
         73b78:	e1a0100d 	mov	r1, sp
         73b7c:	e1a00006 	mov	r0, r6
         73b80:	e5962000 	ldr	r2, [r6]
         73b84:	e1a0e00f 	mov	lr, pc
         73b88:	e282f0a4 	add	pc, r2, #164	; 0xa4
         73b8c:	e59d0000 	ldr	r0, [sp]
         73b90:	eb6d3d89 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         73b94:	e28dd004 	add	sp, sp, #4	; 0x4
         73b98:	ea000003 	b	73bac <TContainerView::DeleteHilited(RefVar const &)+0x110>
         73b9c:	e1a0000d 	mov	r0, sp
         73ba0:	eb68a49e 	bl	1a9ce20 <TListLoop::$Next(void)>
         73ba4:	e1b06000 	movs	r6, r0
         73ba8:	1affffe7 	bne	73b4c <TContainerView::DeleteHilited(RefVar const &)+0xb0>
         73bac:	e1a01005 	mov	r1, r5
         73bb0:	e1a00004 	mov	r0, r4
         73bb4:	e5942000 	ldr	r2, [r4]
         73bb8:	e1a0e00f 	mov	lr, pc
         73bbc:	e282f0a8 	add	pc, r2, #168	; 0xa8
         73bc0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::RemoveHilite(RefVar const &)
 * Address: 00073bc4
 */
TContainerView::RemoveHilite(RefVar const &) {
    /*
         73bc4:	e1a0c00d 	mov	ip, sp
         73bc8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         73bcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         73bd0:	e1a04000 	mov	r4, r0
         73bd4:	e1a05001 	mov	r5, r1
         73bd8:	e5902000 	ldr	r2, [r0]
         73bdc:	e1a0e00f 	mov	lr, pc
         73be0:	e282f09c 	add	pc, r2, #156	; 0x9c
         73be4:	e3300000 	teq	r0, #0	; 0x0
         73be8:	1a000016 	bne	73c48 <TContainerView::RemoveHilite(RefVar const &)+0x84>
         73bec:	e24dd00c 	sub	sp, sp, #12	; 0xc
         73bf0:	e1a0000d 	mov	r0, sp
         73bf4:	e5941020 	ldr	r1, [r4, #32]	; fField32
         73bf8:	eb68520d 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73bfc:	e1a0000d 	mov	r0, sp
         73c00:	eb68a486 	bl	1a9ce20 <TListLoop::$Next(void)>
         73c04:	e1b06000 	movs	r6, r0
         73c08:	0a00000d 	beq	73c44 <TContainerView::RemoveHilite(RefVar const &)+0x80>
         73c0c:	e1a00006 	mov	r0, r6
         73c10:	e5961000 	ldr	r1, [r6]
         73c14:	e1a0e00f 	mov	lr, pc
         73c18:	e281f094 	add	pc, r1, #148	; 0x94
         73c1c:	e3300000 	teq	r0, #0	; 0x0
         73c20:	0a000003 	beq	73c34 <TContainerView::RemoveHilite(RefVar const &)+0x70>
         73c24:	e1a00006 	mov	r0, r6
         73c28:	e5961000 	ldr	r1, [r6]
         73c2c:	e1a0e00f 	mov	lr, pc
         73c30:	e281f0ac 	add	pc, r1, #172	; 0xac
         73c34:	e1a0000d 	mov	r0, sp
         73c38:	eb68a478 	bl	1a9ce20 <TListLoop::$Next(void)>
         73c3c:	e1b06000 	movs	r6, r0
         73c40:	1afffff1 	bne	73c0c <TContainerView::RemoveHilite(RefVar const &)+0x48>
         73c44:	e28dd00c 	add	sp, sp, #12	; 0xc
         73c48:	e1a01005 	mov	r1, r5
         73c4c:	e1a00004 	mov	r0, r4
         73c50:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         73c54:	ea69a46c 	b	1adce0c <TView::$RemoveHilite(RefVar const &)>
    */
}

/**
 * Symbol: TContainerView::IsCompletelyHilited(RefVar const &)
 * Address: 00073c58
 */
TContainerView::IsCompletelyHilited(RefVar const &) {
    /*
         73c58:	e1a0c00d 	mov	ip, sp
         73c5c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         73c60:	e24cb004 	sub	fp, ip, #4	; 0x4
         73c64:	e5910000 	ldr	r0, [r1]
         73c68:	e5900000 	ldr	r0, [r0]
         73c6c:	eb68b0db 	bl	1a9ffe0 <$RefToAddress(long)>
         73c70:	e5d0000c 	ldrb	r0, [r0, #12]	; fField12
         73c74:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::GetHiliteView(void)
 * Address: 00073c78
 */
TContainerView::GetHiliteView(void) {
    /*
         73c78:	e1a0c00d 	mov	ip, sp
         73c7c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         73c80:	e24cb004 	sub	fp, ip, #4	; 0x4
         73c84:	e1a04000 	mov	r4, r0
         73c88:	eb68f712 	bl	1ab18d8 <TView::$FirstHilite(void)>
         73c8c:	eb68b0d3 	bl	1a9ffe0 <$RefToAddress(long)>
         73c90:	e5d0000c 	ldrb	r0, [r0, #12]	; fField12
         73c94:	e3300000 	teq	r0, #0	; 0x0
         73c98:	11a00004 	movne	r0, r4
         73c9c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         73ca0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         73ca4:	e3a05000 	mov	r5, #0	; 0x0
         73ca8:	e1a0000d 	mov	r0, sp
         73cac:	e5b41020 	ldr	r1, [r4, #32]!	; fField32
         73cb0:	eb6851df 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73cb4:	e1a0000d 	mov	r0, sp
         73cb8:	eb68a458 	bl	1a9ce20 <TListLoop::$Next(void)>
         73cbc:	e1b04000 	movs	r4, r0
         73cc0:	0a00000a 	beq	73cf0 <TContainerView::GetHiliteView(void)+0x78>
         73cc4:	e1a00004 	mov	r0, r4
         73cc8:	e5941000 	ldr	r1, [r4]
         73ccc:	e1a0e00f 	mov	lr, pc
         73cd0:	e281f094 	add	pc, r1, #148	; 0x94
         73cd4:	e3300000 	teq	r0, #0	; 0x0
         73cd8:	11a05004 	movne	r5, r4
         73cdc:	1a000003 	bne	73cf0 <TContainerView::GetHiliteView(void)+0x78>
         73ce0:	e1a0000d 	mov	r0, sp
         73ce4:	eb68a44d 	bl	1a9ce20 <TListLoop::$Next(void)>
         73ce8:	e1b04000 	movs	r4, r0
         73cec:	1afffff4 	bne	73cc4 <TContainerView::GetHiliteView(void)+0x4c>
         73cf0:	e1a00005 	mov	r0, r5
         73cf4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)
 * Address: 00073cf8
 */
TContainerView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *) {
    /*
         73cf8:	e1a0c00d 	mov	ip, sp
         73cfc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         73d00:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         73d04:	e24cb014 	sub	fp, ip, #20	; 0x14
         73d08:	e1a05000 	mov	r5, r0
         73d0c:	e1a04003 	mov	r4, r3
         73d10:	e59b0024 	ldr	r0, [fp, #36]
         73d14:	e20000ff 	and	r0, r0, #255	; 0xff
         73d18:	e59b801c 	ldr	r8, [fp, #28]	; fField28
         73d1c:	e59b9018 	ldr	r9, [fp, #24]	; fField24
         73d20:	e59ba014 	ldr	sl, [fp, #20]
         73d24:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         73d28:	e2850010 	add	r0, r5, #16	; 0x10
         73d2c:	e1a01003 	mov	r1, r3
         73d30:	eb68a448 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         73d34:	e3300000 	teq	r0, #0	; 0x0
         73d38:	0a000049 	beq	73e64 <TContainerView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x16c>
         73d3c:	e3a07000 	mov	r7, #0	; 0x0
         73d40:	e3a06000 	mov	r6, #0	; 0x0
         73d44:	e24dd00c 	sub	sp, sp, #12	; 0xc
         73d48:	e1a0000d 	mov	r0, sp
         73d4c:	e5b51020 	ldr	r1, [r5, #32]!	; fField32
         73d50:	eb6851b7 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73d54:	e1a0000d 	mov	r0, sp
         73d58:	eb68a430 	bl	1a9ce20 <TListLoop::$Next(void)>
         73d5c:	e1b05000 	movs	r5, r0
         73d60:	0a000029 	beq	73e0c <TContainerView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x114>
         73d64:	e5950008 	ldr	r0, [r5, #8]	; fField8
         73d68:	e3100001 	tst	r0, #1	; 0x1
         73d6c:	0a000022 	beq	73dfc <TContainerView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x104>
         73d70:	e24dd008 	sub	sp, sp, #8	; 0x8
         73d74:	e2850010 	add	r0, r5, #16	; 0x10
         73d78:	e8905000 	ldmia	r0, {ip, lr}
         73d7c:	e88d5000 	stmia	sp, {ip, lr}
         73d80:	e1a0000d 	mov	r0, sp
         73d84:	e3e01004 	mvn	r1, #4	; 0x4
         73d88:	e1a02001 	mov	r2, r1
         73d8c:	eb6b72ab 	bl	1b50840 <$InsetRect__FP4RectlT2>
         73d90:	e1a01004 	mov	r1, r4
         73d94:	e1a0000d 	mov	r0, sp
         73d98:	eb68a42e 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         73d9c:	e3300000 	teq	r0, #0	; 0x0
         73da0:	0a000014 	beq	73df8 <TContainerView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x100>
         73da4:	e1a0c005 	mov	ip, r5
         73da8:	e3a02000 	mov	r2, #0	; 0x0
         73dac:	e3a01000 	mov	r1, #0	; 0x0
         73db0:	e59b0020 	ldr	r0, [fp, #32]	; fField32
         73db4:	e59b302c 	ldr	r3, [fp, #44]
         73db8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         73dbc:	e1a03008 	mov	r3, r8
         73dc0:	e1a02009 	mov	r2, r9
         73dc4:	e1a0100a 	mov	r1, sl
         73dc8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         73dcc:	e1a03004 	mov	r3, r4
         73dd0:	e1a0000c 	mov	r0, ip
         73dd4:	e28b2008 	add	r2, fp, #8	; 0x8
         73dd8:	e8920006 	ldmia	r2, {r1, r2}
         73ddc:	e59cc000 	ldr	ip, [ip]
         73de0:	e1a0e00f 	mov	lr, pc
         73de4:	e28cff52 	add	pc, ip, #328	; 0x148
         73de8:	e28dd01c 	add	sp, sp, #28	; 0x1c
         73dec:	e1500007 	cmp	r0, r7
         73df0:	c1a07000 	movgt	r7, r0
         73df4:	c1a06005 	movgt	r6, r5
         73df8:	e28dd008 	add	sp, sp, #8	; 0x8
         73dfc:	e1a0000d 	mov	r0, sp
         73e00:	eb68a406 	bl	1a9ce20 <TListLoop::$Next(void)>
         73e04:	e1b05000 	movs	r5, r0
         73e08:	1affffd5 	bne	73d64 <TContainerView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x6c>
         73e0c:	e5bd000c 	ldr	r0, [sp, #12]!	; fField12
         73e10:	e3300000 	teq	r0, #0	; 0x0
         73e14:	13360000 	teqne	r6, #0	; 0x0
         73e18:	0a000010 	beq	73e60 <TContainerView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x168>
         73e1c:	e3a01001 	mov	r1, #1	; 0x1
         73e20:	e59b0020 	ldr	r0, [fp, #32]	; fField32
         73e24:	e28b3028 	add	r3, fp, #40	; 0x28
         73e28:	e893000c 	ldmia	r3, {r2, r3}
         73e2c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         73e30:	e1a03008 	mov	r3, r8
         73e34:	e1a02009 	mov	r2, r9
         73e38:	e1a0100a 	mov	r1, sl
         73e3c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         73e40:	e1a03004 	mov	r3, r4
         73e44:	e1a00006 	mov	r0, r6
         73e48:	e28b2008 	add	r2, fp, #8	; 0x8
         73e4c:	e8920006 	ldmia	r2, {r1, r2}
         73e50:	e596c000 	ldr	ip, [r6]
         73e54:	e1a0e00f 	mov	lr, pc
         73e58:	e28cff52 	add	pc, ip, #328	; 0x148
         73e5c:	e28dd01c 	add	sp, sp, #28	; 0x1c
         73e60:	e1a00007 	mov	r0, r7
         73e64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::PointOverText(TPoint &, TPoint *)
 * Address: 00073e68
 */
TContainerView::PointOverText(TPoint &, TPoint *) {
    /*
         73e68:	e1a0c00d 	mov	ip, sp
         73e6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         73e70:	e24cb004 	sub	fp, ip, #4	; 0x4
         73e74:	e1a05001 	mov	r5, r1
         73e78:	e1a04002 	mov	r4, r2
         73e7c:	e3a06000 	mov	r6, #0	; 0x0
         73e80:	e24dd00c 	sub	sp, sp, #12	; 0xc
         73e84:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         73e88:	e1a0000d 	mov	r0, sp
         73e8c:	eb685168 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73e90:	e1a0000d 	mov	r0, sp
         73e94:	eb68a3e1 	bl	1a9ce20 <TListLoop::$Next(void)>
         73e98:	e1b03000 	movs	r3, r0
         73e9c:	0a00000f 	beq	73ee0 <TContainerView::PointOverText(TPoint &, TPoint *)+0x78>
         73ea0:	e5930008 	ldr	r0, [r3, #8]	; fField8
         73ea4:	e3100001 	tst	r0, #1	; 0x1
         73ea8:	0a000008 	beq	73ed0 <TContainerView::PointOverText(TPoint &, TPoint *)+0x68>
         73eac:	e1a02004 	mov	r2, r4
         73eb0:	e1a01005 	mov	r1, r5
         73eb4:	e1a00003 	mov	r0, r3
         73eb8:	e5933000 	ldr	r3, [r3]
         73ebc:	e1a0e00f 	mov	lr, pc
         73ec0:	e283ff4e 	add	pc, r3, #312	; 0x138
         73ec4:	e3300000 	teq	r0, #0	; 0x0
         73ec8:	13a06001 	movne	r6, #1	; 0x1
         73ecc:	1a000003 	bne	73ee0 <TContainerView::PointOverText(TPoint &, TPoint *)+0x78>
         73ed0:	e1a0000d 	mov	r0, sp
         73ed4:	eb68a3d1 	bl	1a9ce20 <TListLoop::$Next(void)>
         73ed8:	e1b03000 	movs	r3, r0
         73edc:	1affffef 	bne	73ea0 <TContainerView::PointOverText(TPoint &, TPoint *)+0x38>
         73ee0:	e1a00006 	mov	r0, r6
         73ee4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::HandleTap(TPoint &)
 * Address: 00073ee8
 */
TContainerView::HandleTap(TPoint &) {
    /*
         73ee8:	e1a0c00d 	mov	ip, sp
         73eec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         73ef0:	e24cb004 	sub	fp, ip, #4	; 0x4
         73ef4:	e1a04001 	mov	r4, r1
         73ef8:	e24dd008 	sub	sp, sp, #8	; 0x8
         73efc:	e2801010 	add	r1, r0, #16	; 0x10
         73f00:	e1a02001 	mov	r2, r1
         73f04:	e5911000 	ldr	r1, [r1]
         73f08:	e1a01821 	mov	r1, r1, lsr #16
         73f0c:	e2411001 	sub	r1, r1, #1	; 0x1
         73f10:	e1a01801 	mov	r1, r1, lsl #16
         73f14:	e1a01841 	mov	r1, r1, asr #16
         73f18:	e5922002 	ldr	r2, [r2, #2]
         73f1c:	e1a02822 	mov	r2, r2, lsr #16
         73f20:	e2422001 	sub	r2, r2, #1	; 0x1
         73f24:	e1a02802 	mov	r2, r2, lsl #16
         73f28:	e1a02842 	mov	r2, r2, asr #16
         73f2c:	e24dd004 	sub	sp, sp, #4	; 0x4
         73f30:	e5cd1003 	strb	r1, [sp, #3]
         73f34:	e1a01441 	mov	r1, r1, asr #8
         73f38:	e5cd1002 	strb	r1, [sp, #2]
         73f3c:	e5cd2001 	strb	r2, [sp, #1]
         73f40:	e1a01442 	mov	r1, r2, asr #8
         73f44:	e5cd1000 	strb	r1, [sp]
         73f48:	e49d1004 	ldr	r1, [sp], #4	; fField4
         73f4c:	e58d1004 	str	r1, [sp, #4]	; fField4
         73f50:	e40d100c 	str	r1, [sp], -#12	; fField12
         73f54:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         73f58:	e1a0000d 	mov	r0, sp
         73f5c:	eb685134 	bl	1a88434 <TListLoop::$__ct(CList *)>
         73f60:	e1a0000d 	mov	r0, sp
         73f64:	eb68a3ad 	bl	1a9ce20 <TListLoop::$Next(void)>
         73f68:	e1b05000 	movs	r5, r0
         73f6c:	0a000017 	beq	73fd0 <TContainerView::HandleTap(TPoint &)+0xe8>
         73f70:	e5950008 	ldr	r0, [r5, #8]	; fField8
         73f74:	e3100001 	tst	r0, #1	; 0x1
         73f78:	0a000010 	beq	73fc0 <TContainerView::HandleTap(TPoint &)+0xd8>
         73f7c:	e28d200c 	add	r2, sp, #12	; 0xc
         73f80:	e1a01004 	mov	r1, r4
         73f84:	e1a00005 	mov	r0, r5
         73f88:	e5953000 	ldr	r3, [r5]
         73f8c:	e1a0e00f 	mov	lr, pc
         73f90:	e283ff4e 	add	pc, r3, #312	; 0x138
         73f94:	e3300000 	teq	r0, #0	; 0x0
         73f98:	028d100c 	addeq	r1, sp, #12	; 0xc
         73f9c:	08910003 	ldmeqia	r1, {r0, r1}
         73fa0:	01300001 	teqeq	r0, r1
         73fa4:	0a000005 	beq	73fc0 <TContainerView::HandleTap(TPoint &)+0xd8>
         73fa8:	e1a01004 	mov	r1, r4
         73fac:	e1a00005 	mov	r0, r5
         73fb0:	e5952000 	ldr	r2, [r5]
         73fb4:	e1a0e00f 	mov	lr, pc
         73fb8:	e282ff47 	add	pc, r2, #284	; 0x11c
         73fbc:	ea000003 	b	73fd0 <TContainerView::HandleTap(TPoint &)+0xe8>
         73fc0:	e1a0000d 	mov	r0, sp
         73fc4:	eb68a395 	bl	1a9ce20 <TListLoop::$Next(void)>
         73fc8:	e1b05000 	movs	r5, r0
         73fcc:	1affffe7 	bne	73f70 <TContainerView::HandleTap(TPoint &)+0x88>
         73fd0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::CopyForm(void)
 * Address: 00073fd4
 */
TContainerView::CopyForm(void) {
    /*
         73fd4:	e1a0c00d 	mov	ip, sp
         73fd8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         73fdc:	e24cb004 	sub	fp, ip, #4	; 0x4
         73fe0:	e24dd004 	sub	sp, sp, #4	; 0x4
         73fe4:	eb6d553f 	bl	1bc94e8 <TView::$DataFrame(void)>
         73fe8:	eb6d3857 	bl	1bc214c <$AllocateRefHandle(long)>
         73fec:	e58d0000 	str	r0, [sp]
         73ff0:	e1a0000d 	mov	r0, sp
         73ff4:	eb6d385c 	bl	1bc216c <$Clone(RefVar const &)>
         73ff8:	eb6d3853 	bl	1bc214c <$AllocateRefHandle(long)>
         73ffc:	e1a04000 	mov	r4, r0
         74000:	e59d0000 	ldr	r0, [sp]
         74004:	eb6d3c6c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         74008:	e5945000 	ldr	r5, [r4]
         7400c:	e1a00004 	mov	r0, r4
         74010:	eb6d3c69 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         74014:	e1a00005 	mov	r0, r5
         74018:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::__dt(void)
 * Address: 00074064
 */
TContainerView::~TContainerView(void) {
    /*
         74064:	e1a0c00d 	mov	ip, sp
         74068:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         7406c:	e24cb004 	sub	fp, ip, #4	; 0x4
         74070:	e1a04000 	mov	r4, r0
         74074:	e1a05001 	mov	r5, r1
         74078:	e59f0020 	ldr	r0, [pc, #20]	; 740a0 <TContainerView::__dt(void)+0x3c>
         7407c:	e5840000 	str	r0, [r4]
         74080:	e1a00004 	mov	r0, r4
         74084:	e3a01000 	mov	r1, #0	; 0x0
         74088:	eb6d54ff 	bl	1bc948c <TView::$__dt(void)>
         7408c:	e3150001 	tst	r5, #1	; 0x1
         74090:	11a00004 	movne	r0, r4
         74094:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         74098:	1a6850e7 	bne	1a8843c <$__dl__8TxObjectSFPv>
         7409c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         740a0:	0001d680 	andeq	sp, r1, r0, lsl #13
    */
}

/**
 * Symbol: TContainerView::RealDoCommand(RefVar const &)
 * Address: 000740cc
 */
TContainerView::RealDoCommand(RefVar const &) {
    /*
         740cc:	e1a0c00d 	mov	ip, sp
         740d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         740d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         740d8:	e1a04000 	mov	r4, r0
         740dc:	e1a05001 	mov	r5, r1
         740e0:	e1a00001 	mov	r0, r1
         740e4:	eb68c897 	bl	1aa6348 <$CommandID(RefVar const &)>
         740e8:	e59f70cc 	ldr	r7, [pc, #cc]	; 741bc <TContainerView::RealDoCommand(RefVar const &)+0xf0>
         740ec:	e330003d 	teq	r0, #61	; 0x3d
         740f0:	0a000032 	beq	741c0 <TContainerView::RealDoCommand(RefVar const &)+0xf4>
         740f4:	e330003f 	teq	r0, #63	; 0x3f
         740f8:	11a01005 	movne	r1, r5
         740fc:	11a00004 	movne	r0, r4
         74100:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
         74104:	1a68ab98 	bne	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
         74108:	e1a00005 	mov	r0, r5
         7410c:	eb68c891 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         74110:	e1a01000 	mov	r1, r0
         74114:	e1a00004 	mov	r0, r4
         74118:	eb6d5901 	bl	1bca524 <TView::$FindID(long)>
         7411c:	e1b05000 	movs	r5, r0
         74120:	0a00001e 	beq	741a0 <TContainerView::RealDoCommand(RefVar const &)+0xd4>
         74124:	e24dd004 	sub	sp, sp, #4	; 0x4
         74128:	e1a00005 	mov	r0, r5
         7412c:	eb6d54ed 	bl	1bc94e8 <TView::$DataFrame(void)>
         74130:	eb6d3805 	bl	1bc214c <$AllocateRefHandle(long)>
         74134:	e58d0000 	str	r0, [sp]
         74138:	e5956004 	ldr	r6, [r5, #4]	; fField4
         7413c:	e1a00005 	mov	r0, r5
         74140:	e5951000 	ldr	r1, [r5]
         74144:	e1a0e00f 	mov	lr, pc
         74148:	e281f0ac 	add	pc, r1, #172	; 0xac
         7414c:	e1a01005 	mov	r1, r5
         74150:	e1a00004 	mov	r0, r4
         74154:	eb6d5d1c 	bl	1bcb5cc <TView::$RemoveFromSoup(TView *)>
         74158:	e24dd004 	sub	sp, sp, #4	; 0x4
         7415c:	e1a02006 	mov	r2, r6
         74160:	e1a01004 	mov	r1, r4
         74164:	e3a0003d 	mov	r0, #61	; 0x3d
         74168:	eb68c874 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         7416c:	eb6d37f6 	bl	1bc214c <$AllocateRefHandle(long)>
         74170:	e58d0000 	str	r0, [sp]
         74174:	e28d1004 	add	r1, sp, #4	; 0x4
         74178:	e1a0000d 	mov	r0, sp
         7417c:	eb68c878 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
         74180:	e1a0100d 	mov	r1, sp
         74184:	e5970000 	ldr	r0, [r7]
         74188:	eb68a75b 	bl	1a9defc <TApplication::$PostUndoCommand(RefVar const &)>
         7418c:	e59d0000 	ldr	r0, [sp]
         74190:	eb6d3c09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         74194:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         74198:	eb6d3c07 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7419c:	e28dd004 	add	sp, sp, #4	; 0x4
         741a0:	e1a00004 	mov	r0, r4
         741a4:	e3a01000 	mov	r1, #0	; 0x0
         741a8:	e5942000 	ldr	r2, [r4]
         741ac:	e1a0e00f 	mov	lr, pc
         741b0:	e282f054 	add	pc, r2, #84	; 0x54
         741b4:	e3a00001 	mov	r0, #1	; 0x1
         741b8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         741bc:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         741c0:	e24dd004 	sub	sp, sp, #4	; 0x4
         741c4:	e1a00005 	mov	r0, r5
         741c8:	eb68c864 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
         741cc:	eb6d37de 	bl	1bc214c <$AllocateRefHandle(long)>
         741d0:	e58d0000 	str	r0, [sp]
         741d4:	e1a0100d 	mov	r1, sp
         741d8:	e1a00004 	mov	r0, r4
         741dc:	eb6d54ad 	bl	1bc9498 <TView::$AddToSoup(RefVar const &)>
         741e0:	e1a06000 	mov	r6, r0
         741e4:	e59d0000 	ldr	r0, [sp]
         741e8:	eb6d3bf3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         741ec:	e1a00006 	mov	r0, r6
         741f0:	eb68c00e 	bl	1aa4230 <$TimeStampTextChange(TView *)>
         741f4:	e1a00005 	mov	r0, r5
         741f8:	eb68c856 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         741fc:	e3300302 	teq	r0, #134217728	; 0x8000000
         74200:	15860004 	strne	r0, [r6, #4]	; fField4
         74204:	e1a01006 	mov	r1, r6
         74208:	e1a00005 	mov	r0, r5
         7420c:	eb68c852 	bl	1aa635c <$CommandSetParameter(RefVar const &, long)>
         74210:	e1a02004 	mov	r2, r4
         74214:	e5b63004 	ldr	r3, [r6, #4]!	; fField4
         74218:	e3a0103f 	mov	r1, #63	; 0x3f
         7421c:	e5970000 	ldr	r0, [r7]
         74220:	eb68ab36 	bl	1a9ef00 <TApplication::$PostUndoCommand(unsigned long, TResponder *, long)>
         74224:	e1a00004 	mov	r0, r4
         74228:	e3a01000 	mov	r1, #0	; 0x0
         7422c:	e5942000 	ldr	r2, [r4]
         74230:	e1a0e00f 	mov	lr, pc
         74234:	e282f054 	add	pc, r2, #84	; 0x54
         74238:	e3a00001 	mov	r0, #1	; 0x1
         7423c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::GetValue(RefVar const &, RefVar const &)
 * Address: 00074240
 */
TContainerView::GetValue(RefVar const &, RefVar const &) {
    /*
         74240:	e1a0c00d 	mov	ip, sp
         74244:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         74248:	e24cb004 	sub	fp, ip, #4	; 0x4
         7424c:	e1a06000 	mov	r6, r0
         74250:	e1a05001 	mov	r5, r1
         74254:	e1a04002 	mov	r4, r2
         74258:	e24dd004 	sub	sp, sp, #4	; 0x4
         7425c:	e3a08002 	mov	r8, #2	; 0x2
         74260:	e1a00008 	mov	r0, r8
         74264:	eb6d37b8 	bl	1bc214c <$AllocateRefHandle(long)>
         74268:	e58d0000 	str	r0, [sp]
         7426c:	e3a00002 	mov	r0, #2	; 0x2
         74270:	eb6d37b5 	bl	1bc214c <$AllocateRefHandle(long)>
         74274:	e1a07000 	mov	r7, r0
         74278:	e59f0100 	ldr	r0, [pc, #100]	; 74380 <TContainerView::GetValue(RefVar const &, RefVar const &)+0x140>
         7427c:	e5900000 	ldr	r0, [r0]
         74280:	e5901000 	ldr	r1, [r0]
         74284:	e5950000 	ldr	r0, [r5]
         74288:	e5900000 	ldr	r0, [r0]
         7428c:	eb6d3fe7 	bl	1bc4230 <$EQRef__FlT1>
         74290:	e3a09000 	mov	r9, #0	; 0x0
         74294:	e3300000 	teq	r0, #0	; 0x0
         74298:	0a00003a 	beq	74388 <TContainerView::GetValue(RefVar const &, RefVar const &)+0x148>
         7429c:	e59f00e0 	ldr	r0, [pc, #e0]	; 74384 <TContainerView::GetValue(RefVar const &, RefVar const &)+0x144>
         742a0:	e5900000 	ldr	r0, [r0]
         742a4:	e5901000 	ldr	r1, [r0]
         742a8:	e5940000 	ldr	r0, [r4]
         742ac:	e5900000 	ldr	r0, [r0]
         742b0:	eb6d3fde 	bl	1bc4230 <$EQRef__FlT1>
         742b4:	e3300000 	teq	r0, #0	; 0x0
         742b8:	0a000032 	beq	74388 <TContainerView::GetValue(RefVar const &, RefVar const &)+0x148>
         742bc:	e1a00006 	mov	r0, r6
         742c0:	e5961000 	ldr	r1, [r6]
         742c4:	e1a0e00f 	mov	lr, pc
         742c8:	e281f094 	add	pc, r1, #148	; 0x94
         742cc:	e3300000 	teq	r0, #0	; 0x0
         742d0:	0a000032 	beq	743a0 <TContainerView::GetValue(RefVar const &, RefVar const &)+0x160>
         742d4:	e3a00000 	mov	r0, #0	; 0x0
         742d8:	eb689eaf 	bl	1a9bd9c <$MakeArray(long)>
         742dc:	e41d100c 	ldr	r1, [sp], -#12	; fField12
         742e0:	e5810000 	str	r0, [r1]
         742e4:	e1a0000d 	mov	r0, sp
         742e8:	e5b61020 	ldr	r1, [r6, #32]!	; fField32
         742ec:	eb685050 	bl	1a88434 <TListLoop::$__ct(CList *)>
         742f0:	e1a0000d 	mov	r0, sp
         742f4:	eb68a2c9 	bl	1a9ce20 <TListLoop::$Next(void)>
         742f8:	e1b03000 	movs	r3, r0
         742fc:	0a000017 	beq	74360 <TContainerView::GetValue(RefVar const &, RefVar const &)+0x120>
         74300:	e1a02004 	mov	r2, r4
         74304:	e1a01005 	mov	r1, r5
         74308:	e1a00003 	mov	r0, r3
         7430c:	e5933000 	ldr	r3, [r3]
         74310:	e1a0e00f 	mov	lr, pc
         74314:	e283f044 	add	pc, r3, #68	; 0x44
         74318:	e5870000 	str	r0, [r7]
         7431c:	e24dd004 	sub	sp, sp, #4	; 0x4
         74320:	e3300002 	teq	r0, #2	; 0x2
         74324:	0a000008 	beq	7434c <TContainerView::GetValue(RefVar const &, RefVar const &)+0x10c>
         74328:	e1a01009 	mov	r1, r9
         7432c:	eb6d3fc8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         74330:	eb6d3785 	bl	1bc214c <$AllocateRefHandle(long)>
         74334:	e58d0000 	str	r0, [sp]
         74338:	e1a0100d 	mov	r1, sp
         7433c:	e28d0010 	add	r0, sp, #16	; 0x10
         74340:	eb6d3778 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         74344:	e59d0000 	ldr	r0, [sp]
         74348:	eb6d3b9b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7434c:	e28dd004 	add	sp, sp, #4	; 0x4
         74350:	e1a0000d 	mov	r0, sp
         74354:	eb68a2b1 	bl	1a9ce20 <TListLoop::$Next(void)>
         74358:	e1b03000 	movs	r3, r0
         7435c:	1affffe7 	bne	74300 <TContainerView::GetValue(RefVar const &, RefVar const &)+0xc0>
         74360:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         74364:	e5900000 	ldr	r0, [r0]
         74368:	eb6d43cf 	bl	1bc52ac <$Length(long)>
         7436c:	e3300000 	teq	r0, #0	; 0x0
         74370:	059d000c 	ldreq	r0, [sp, #12]	; fField12
         74374:	05808000 	streq	r8, [r0]
         74378:	e28dd00c 	add	sp, sp, #12	; 0xc
         7437c:	ea000007 	b	743a0 <TContainerView::GetValue(RefVar const &, RefVar const &)+0x160>
         74380:	00683110 	rsbeq	r3, r8, r0, lsl r1
         74384:	00683b30 	rsbeq	r3, r8, r0, lsr fp
         74388:	e1a02004 	mov	r2, r4
         7438c:	e1a01005 	mov	r1, r5
         74390:	e1a00006 	mov	r0, r6
         74394:	eb6d586e 	bl	1bca554 <TView::$GetValue(RefVar const &, RefVar const &)>
         74398:	e59d1000 	ldr	r1, [sp]
         7439c:	e5810000 	str	r0, [r1]
         743a0:	e59d0000 	ldr	r0, [sp]
         743a4:	e5904000 	ldr	r4, [r0]
         743a8:	e1a00007 	mov	r0, r7
         743ac:	eb6d3b82 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         743b0:	e59d0000 	ldr	r0, [sp]
         743b4:	eb6d3b80 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         743b8:	e1a00004 	mov	r0, r4
         743bc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::ChildBoundsChanged(TView *, TRect &)
 * Address: 000743c0
 */
TContainerView::ChildBoundsChanged(TView *, TRect &) {
    /*
         743c0:	e1a0c00d 	mov	ip, sp
         743c4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         743c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         743cc:	e1a04000 	mov	r4, r0
         743d0:	e1a05002 	mov	r5, r2
         743d4:	e24dd010 	sub	sp, sp, #16	; 0x10
         743d8:	e2810010 	add	r0, r1, #16	; 0x10
         743dc:	e28d2008 	add	r2, sp, #8	; 0x8
         743e0:	e8901008 	ldmia	r0, {r3, ip}
         743e4:	e8821008 	stmia	r2, {r3, ip}
         743e8:	e28d1008 	add	r1, sp, #8	; 0x8
         743ec:	e8911008 	ldmia	r1, {r3, ip}
         743f0:	e88d1008 	stmia	sp, {r3, ip}
         743f4:	e3a08000 	mov	r8, #0	; 0x0
         743f8:	e5cd8003 	strb	r8, [sp, #3]
         743fc:	e5cd8002 	strb	r8, [sp, #2]
         74400:	e3a0a001 	mov	sl, #1	; 0x1
         74404:	e5cda007 	strb	sl, [sp, #7]
         74408:	e5cd8006 	strb	r8, [sp, #6]
         7440c:	e5902002 	ldr	r2, [r0, #2]
         74410:	e1a02842 	mov	r2, r2, asr #16
         74414:	e5951002 	ldr	r1, [r5, #2]
         74418:	e1320841 	teq	r2, r1, asr #16
         7441c:	1a0000b1 	bne	746e8 <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x328>
         74420:	e5900006 	ldr	r0, [r0, #6]
         74424:	e1a00840 	mov	r0, r0, asr #16
         74428:	e5951006 	ldr	r1, [r5, #6]
         7442c:	e0400841 	sub	r0, r0, r1, asr #16
         74430:	e3a06000 	mov	r6, #0	; 0x0
         74434:	e3500000 	cmp	r0, #0	; 0x0
         74438:	da0000a4 	ble	746d0 <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x310>
         7443c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         74440:	e1a0000d 	mov	r0, sp
         74444:	e5941020 	ldr	r1, [r4, #32]	; fField32
         74448:	eb684ff9 	bl	1a88434 <TListLoop::$__ct(CList *)>
         7444c:	e1a0000d 	mov	r0, sp
         74450:	eb68a272 	bl	1a9ce20 <TListLoop::$Next(void)>
         74454:	e3300000 	teq	r0, #0	; 0x0
         74458:	0a000025 	beq	744f4 <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x134>
         7445c:	e2800010 	add	r0, r0, #16	; 0x10
         74460:	e1a07000 	mov	r7, r0
         74464:	e5900002 	ldr	r0, [r0, #2]
         74468:	e1a00840 	mov	r0, r0, asr #16
         7446c:	e5951006 	ldr	r1, [r5, #6]
         74470:	e1500841 	cmp	r0, r1, asr #16
         74474:	ba00001a 	blt	744e4 <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x124>
         74478:	e59d101a 	ldr	r1, [sp, #26]
         7447c:	e5942030 	ldr	r2, [r4, #48]	; fField48
         74480:	e0821841 	add	r1, r2, r1, asr #16
         74484:	e1500001 	cmp	r0, r1
         74488:	aa000015 	bge	744e4 <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x124>
         7448c:	e24dd008 	sub	sp, sp, #8	; 0x8
         74490:	e8975000 	ldmia	r7, {ip, lr}
         74494:	e88d5000 	stmia	sp, {ip, lr}
         74498:	e5cd8003 	strb	r8, [sp, #3]
         7449c:	e5cd8002 	strb	r8, [sp, #2]
         744a0:	e5cda007 	strb	sl, [sp, #7]
         744a4:	e5cd8006 	strb	r8, [sp, #6]
         744a8:	e1a0100d 	mov	r1, sp
         744ac:	e28d0014 	add	r0, sp, #20	; 0x14
         744b0:	eb68a268 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         744b4:	e3300000 	teq	r0, #0	; 0x0
         744b8:	0a000008 	beq	744e0 <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x120>
         744bc:	e5971002 	ldr	r1, [r7, #2]
         744c0:	e59d0022 	ldr	r0, [sp, #34]
         744c4:	e1a00840 	mov	r0, r0, asr #16
         744c8:	e0400841 	sub	r0, r0, r1, asr #16
         744cc:	e5941030 	ldr	r1, [r4, #48]	; fField48
         744d0:	e0800001 	add	r0, r0, r1
         744d4:	e1560000 	cmp	r6, r0
         744d8:	c1a00006 	movgt	r0, r6
         744dc:	e1a06000 	mov	r6, r0
         744e0:	e28dd008 	add	sp, sp, #8	; 0x8
         744e4:	e1a0000d 	mov	r0, sp
         744e8:	eb68a24c 	bl	1a9ce20 <TListLoop::$Next(void)>
         744ec:	e3300000 	teq	r0, #0	; 0x0
         744f0:	1affffd9 	bne	7445c <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x9c>
         744f4:	e28dd00c 	add	sp, sp, #12	; 0xc
         744f8:	e3560000 	cmp	r6, #0	; 0x0
         744fc:	da000079 	ble	746e8 <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x328>
         74500:	e24dd00c 	sub	sp, sp, #12	; 0xc
         74504:	e1a0000d 	mov	r0, sp
         74508:	e5941020 	ldr	r1, [r4, #32]	; fField32
         7450c:	eb684fc8 	bl	1a88434 <TListLoop::$__ct(CList *)>
         74510:	e1a0000d 	mov	r0, sp
         74514:	eb68a241 	bl	1a9ce20 <TListLoop::$Next(void)>
         74518:	e1b07000 	movs	r7, r0
         7451c:	e2849010 	add	r9, r4, #16	; 0x10
         74520:	0a000041 	beq	7462c <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x26c>
         74524:	e1a0a806 	mov	sl, r6, lsl #16
         74528:	e1a0a84a 	mov	sl, sl, asr #16
         7452c:	e2870010 	add	r0, r7, #16	; 0x10
         74530:	e1a08000 	mov	r8, r0
         74534:	e5900002 	ldr	r0, [r0, #2]
         74538:	e1a00840 	mov	r0, r0, asr #16
         7453c:	e5951006 	ldr	r1, [r5, #6]
         74540:	e1500841 	cmp	r0, r1, asr #16
         74544:	ba000034 	blt	7461c <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x25c>
         74548:	e24dd008 	sub	sp, sp, #8	; 0x8
         7454c:	e8985000 	ldmia	r8, {ip, lr}
         74550:	e88d5000 	stmia	sp, {ip, lr}
         74554:	e3a02000 	mov	r2, #0	; 0x0
         74558:	e5cd2003 	strb	r2, [sp, #3]
         7455c:	e5cd2002 	strb	r2, [sp, #2]
         74560:	e3a00001 	mov	r0, #1	; 0x1
         74564:	e5cd0007 	strb	r0, [sp, #7]
         74568:	e5cd2006 	strb	r2, [sp, #6]
         7456c:	e1a0100d 	mov	r1, sp
         74570:	e28d0014 	add	r0, sp, #20	; 0x14
         74574:	eb68a237 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
         74578:	e3300000 	teq	r0, #0	; 0x0
         7457c:	0a000025 	beq	74618 <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x258>
         74580:	e24dd008 	sub	sp, sp, #8	; 0x8
         74584:	e8985000 	ldmia	r8, {ip, lr}
         74588:	e88d5000 	stmia	sp, {ip, lr}
         7458c:	e24dd008 	sub	sp, sp, #8	; 0x8
         74590:	e5990000 	ldr	r0, [r9]
         74594:	e58d0004 	str	r0, [sp, #4]	; fField4
         74598:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         7459c:	e2600000 	rsb	r0, r0, #0	; 0x0
         745a0:	e1a00800 	mov	r0, r0, lsl #16
         745a4:	e1a00840 	mov	r0, r0, asr #16
         745a8:	e59d1006 	ldr	r1, [sp, #6]
         745ac:	e2611000 	rsb	r1, r1, #0	; 0x0
         745b0:	e1a01801 	mov	r1, r1, lsl #16
         745b4:	e1a01841 	mov	r1, r1, asr #16
         745b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         745bc:	e5cd0003 	strb	r0, [sp, #3]
         745c0:	e1a00440 	mov	r0, r0, asr #8
         745c4:	e5cd0002 	strb	r0, [sp, #2]
         745c8:	e5cd1001 	strb	r1, [sp, #1]
         745cc:	e1a00441 	mov	r0, r1, asr #8
         745d0:	e5cd0000 	strb	r0, [sp]
         745d4:	e49d0004 	ldr	r0, [sp], #4	; fField4
         745d8:	e58d0000 	str	r0, [sp]
         745dc:	e28d0008 	add	r0, sp, #8	; 0x8
         745e0:	e59d1002 	ldr	r1, [sp, #2]
         745e4:	e1a01841 	mov	r1, r1, asr #16
         745e8:	e59d2000 	ldr	r2, [sp]
         745ec:	e1a02842 	mov	r2, r2, asr #16
         745f0:	eb6b74bc 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         745f4:	e28dd008 	add	sp, sp, #8	; 0x8
         745f8:	e1a0100a 	mov	r1, sl
         745fc:	e1a0000d 	mov	r0, sp
         74600:	e3a02000 	mov	r2, #0	; 0x0
         74604:	eb6b74b7 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         74608:	e1a0100d 	mov	r1, sp
         7460c:	e1a00007 	mov	r0, r7
         74610:	eb6d600c 	bl	1bcc648 <TView::$WriteBounds(TRect const &)>
         74614:	e28dd008 	add	sp, sp, #8	; 0x8
         74618:	e28dd008 	add	sp, sp, #8	; 0x8
         7461c:	e1a0000d 	mov	r0, sp
         74620:	eb68a1fe 	bl	1a9ce20 <TListLoop::$Next(void)>
         74624:	e1b07000 	movs	r7, r0
         74628:	1affffbf 	bne	7452c <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x16c>
         7462c:	e24dd008 	sub	sp, sp, #8	; 0x8
         74630:	e8995000 	ldmia	r9, {ip, lr}
         74634:	e88d5000 	stmia	sp, {ip, lr}
         74638:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         7463c:	e0800006 	add	r0, r0, r6
         74640:	e5cd0007 	strb	r0, [sp, #7]
         74644:	e1a00440 	mov	r0, r0, asr #8
         74648:	e5cd0006 	strb	r0, [sp, #6]
         7464c:	e24dd008 	sub	sp, sp, #8	; 0x8
         74650:	e28d0004 	add	r0, sp, #4	; 0x4
         74654:	e594101c 	ldr	r1, [r4, #28]	; fField28
         74658:	eb07cba9 	bl	267504 <TView::ContentsOrigin(void)>
         7465c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         74660:	e2600000 	rsb	r0, r0, #0	; 0x0
         74664:	e1a01800 	mov	r1, r0, lsl #16
         74668:	e1a01841 	mov	r1, r1, asr #16
         7466c:	e59d0006 	ldr	r0, [sp, #6]
         74670:	e2600000 	rsb	r0, r0, #0	; 0x0
         74674:	e1a00800 	mov	r0, r0, lsl #16
         74678:	e1a00840 	mov	r0, r0, asr #16
         7467c:	e24dd004 	sub	sp, sp, #4	; 0x4
         74680:	e5cd1003 	strb	r1, [sp, #3]
         74684:	e1a01441 	mov	r1, r1, asr #8
         74688:	e5cd1002 	strb	r1, [sp, #2]
         7468c:	e5cd0001 	strb	r0, [sp, #1]
         74690:	e1a00440 	mov	r0, r0, asr #8
         74694:	e5cd0000 	strb	r0, [sp]
         74698:	e49d0004 	ldr	r0, [sp], #4	; fField4
         7469c:	e58d0000 	str	r0, [sp]
         746a0:	e28d0008 	add	r0, sp, #8	; 0x8
         746a4:	e59d1002 	ldr	r1, [sp, #2]
         746a8:	e1a01841 	mov	r1, r1, asr #16
         746ac:	e59d2000 	ldr	r2, [sp]
         746b0:	e1a02842 	mov	r2, r2, asr #16
         746b4:	eb6b748b 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         746b8:	e28dd008 	add	sp, sp, #8	; 0x8
         746bc:	e1a0100d 	mov	r1, sp
         746c0:	e1a00004 	mov	r0, r4
         746c4:	eb6d5fdf 	bl	1bcc648 <TView::$WriteBounds(TRect const &)>
         746c8:	e28dd014 	add	sp, sp, #20	; 0x14
         746cc:	ea000005 	b	746e8 <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x328>
         746d0:	aa000004 	bge	746e8 <TContainerView::ChildBoundsChanged(TView *, TRect &)+0x328>
         746d4:	e1a00004 	mov	r0, r4
         746d8:	e3a01000 	mov	r1, #0	; 0x0
         746dc:	e5942000 	ldr	r2, [r4]
         746e0:	e1a0e00f 	mov	lr, pc
         746e4:	e282f054 	add	pc, r2, #84	; 0x54
         746e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::PointToCaret(TPoint &, TRect *, TRect *)
 * Address: 000746ec
 */
TContainerView::PointToCaret(TPoint &, TRect *, TRect *) {
    /*
         746ec:	e1a0c00d 	mov	ip, sp
         746f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         746f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         746f8:	e1a06001 	mov	r6, r1
         746fc:	e1a04002 	mov	r4, r2
         74700:	e1a05003 	mov	r5, r3
         74704:	e24dd00c 	sub	sp, sp, #12	; 0xc
         74708:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         7470c:	e1a0000d 	mov	r0, sp
         74710:	eb684f47 	bl	1a88434 <TListLoop::$__ct(CList *)>
         74714:	e1a0000d 	mov	r0, sp
         74718:	eb68a1c0 	bl	1a9ce20 <TListLoop::$Next(void)>
         7471c:	e1b0c000 	movs	ip, r0
         74720:	0a000011 	beq	7476c <TContainerView::PointToCaret(TPoint &, TRect *, TRect *)+0x80>
         74724:	e59c0008 	ldr	r0, [ip, #8]	; fField8
         74728:	e3100001 	tst	r0, #1	; 0x1
         7472c:	0a00000a 	beq	7475c <TContainerView::PointToCaret(TPoint &, TRect *, TRect *)+0x70>
         74730:	e1a03005 	mov	r3, r5
         74734:	e1a02004 	mov	r2, r4
         74738:	e1a01006 	mov	r1, r6
         7473c:	e1a0000c 	mov	r0, ip
         74740:	e59cc000 	ldr	ip, [ip]
         74744:	e1a0e00f 	mov	lr, pc
         74748:	e28cf074 	add	pc, ip, #116	; 0x74
         7474c:	e5940000 	ldr	r0, [r4]
         74750:	e1a00840 	mov	r0, r0, asr #16
         74754:	e3700902 	cmn	r0, #32768	; 0x8000
         74758:	1a000003 	bne	7476c <TContainerView::PointToCaret(TPoint &, TRect *, TRect *)+0x80>
         7475c:	e1a0000d 	mov	r0, sp
         74760:	eb68a1ae 	bl	1a9ce20 <TListLoop::$Next(void)>
         74764:	e1b0c000 	movs	ip, r0
         74768:	1affffed 	bne	74724 <TContainerView::PointToCaret(TPoint &, TRect *, TRect *)+0x38>
         7476c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::HandleHilite(TUnitPublic *, long, unsigned char)
 * Address: 00074770
 */
TContainerView::HandleHilite(TUnitPublic *, long, unsigned char) {
    /*
         74770:	e1a0c00d 	mov	ip, sp
         74774:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         74778:	e24cb004 	sub	fp, ip, #4	; 0x4
         7477c:	e1a05000 	mov	r5, r0
         74780:	e1a06001 	mov	r6, r1
         74784:	e1a04002 	mov	r4, r2
         74788:	e20370ff 	and	r7, r3, #255	; 0xff
         7478c:	e1a03007 	mov	r3, r7
         74790:	eb68fc92 	bl	1ab39e0 <TView::$HandleHilite(TUnitPublic *, long, unsigned char)>
         74794:	e3300000 	teq	r0, #0	; 0x0
         74798:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7479c:	e3370000 	teq	r7, #0	; 0x0
         747a0:	1a000019 	bne	7480c <TContainerView::HandleHilite(TUnitPublic *, long, unsigned char)+0x9c>
         747a4:	e24dd00c 	sub	sp, sp, #12	; 0xc
         747a8:	e3a07000 	mov	r7, #0	; 0x0
         747ac:	e1a0000d 	mov	r0, sp
         747b0:	e5b51020 	ldr	r1, [r5, #32]!	; fField32
         747b4:	eb684f1e 	bl	1a88434 <TListLoop::$__ct(CList *)>
         747b8:	e1a0000d 	mov	r0, sp
         747bc:	eb68a197 	bl	1a9ce20 <TListLoop::$Next(void)>
         747c0:	e3300000 	teq	r0, #0	; 0x0
         747c4:	0a00000e 	beq	74804 <TContainerView::HandleHilite(TUnitPublic *, long, unsigned char)+0x94>
         747c8:	e1a02004 	mov	r2, r4
         747cc:	e1a01006 	mov	r1, r6
         747d0:	e3a03000 	mov	r3, #0	; 0x0
         747d4:	e590c000 	ldr	ip, [r0]
         747d8:	e1a0e00f 	mov	lr, pc
         747dc:	e28cf08c 	add	pc, ip, #140	; 0x8c
         747e0:	e1570000 	cmp	r7, r0
         747e4:	c1a00007 	movgt	r0, r7
         747e8:	e1a07000 	mov	r7, r0
         747ec:	e1a0000d 	mov	r0, sp
         747f0:	eb68a18a 	bl	1a9ce20 <TListLoop::$Next(void)>
         747f4:	e3300000 	teq	r0, #0	; 0x0
         747f8:	1afffff2 	bne	747c8 <TContainerView::HandleHilite(TUnitPublic *, long, unsigned char)+0x58>
         747fc:	e3370001 	teq	r7, #1	; 0x1
         74800:	03a07005 	moveq	r7, #5	; 0x5
         74804:	e1a00007 	mov	r0, r7
         74808:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7480c:	e1a00005 	mov	r0, r5
         74810:	e5951000 	ldr	r1, [r5]
         74814:	e1a0e00f 	mov	lr, pc
         74818:	e281f0ac 	add	pc, r1, #172	; 0xac
         7481c:	e3340000 	teq	r4, #0	; 0x0
         74820:	0a000028 	beq	748c8 <TContainerView::HandleHilite(TUnitPublic *, long, unsigned char)+0x158>
         74824:	e3540005 	cmp	r4, #5	; 0x5
         74828:	13a00000 	movne	r0, #0	; 0x0
         7482c:	03a00001 	moveq	r0, #1	; 0x1
         74830:	e200a0ff 	and	sl, r0, #255	; 0xff
         74834:	e3a08000 	mov	r8, #0	; 0x0
         74838:	03a04001 	moveq	r4, #1	; 0x1
         7483c:	e3a09000 	mov	r9, #0	; 0x0
         74840:	e24dd00c 	sub	sp, sp, #12	; 0xc
         74844:	e1a0000d 	mov	r0, sp
         74848:	e5951020 	ldr	r1, [r5, #32]	; fField32
         7484c:	eb684ef8 	bl	1a88434 <TListLoop::$__ct(CList *)>
         74850:	e1a0000d 	mov	r0, sp
         74854:	eb68a171 	bl	1a9ce20 <TListLoop::$Next(void)>
         74858:	e1b07000 	movs	r7, r0
         7485c:	0a00000e 	beq	7489c <TContainerView::HandleHilite(TUnitPublic *, long, unsigned char)+0x12c>
         74860:	e1a02004 	mov	r2, r4
         74864:	e1a01006 	mov	r1, r6
         74868:	e1a00007 	mov	r0, r7
         7486c:	e3a03001 	mov	r3, #1	; 0x1
         74870:	e597c000 	ldr	ip, [r7]
         74874:	e1a0e00f 	mov	lr, pc
         74878:	e28cf08c 	add	pc, ip, #140	; 0x8c
         7487c:	e1300004 	teq	r0, r4
         74880:	03a08001 	moveq	r8, #1	; 0x1
         74884:	01a09007 	moveq	r9, r7
         74888:	0a000003 	beq	7489c <TContainerView::HandleHilite(TUnitPublic *, long, unsigned char)+0x12c>
         7488c:	e1a0000d 	mov	r0, sp
         74890:	eb68a162 	bl	1a9ce20 <TListLoop::$Next(void)>
         74894:	e1b07000 	movs	r7, r0
         74898:	1afffff0 	bne	74860 <TContainerView::HandleHilite(TUnitPublic *, long, unsigned char)+0xf0>
         7489c:	e28dd00c 	add	sp, sp, #12	; 0xc
         748a0:	e33a0000 	teq	sl, #0	; 0x0
         748a4:	13a04005 	movne	r4, #5	; 0x5
         748a8:	e3380000 	teq	r8, #0	; 0x0
         748ac:	0a000005 	beq	748c8 <TContainerView::HandleHilite(TUnitPublic *, long, unsigned char)+0x158>
         748b0:	e1a02009 	mov	r2, r9
         748b4:	e1a00005 	mov	r0, r5
         748b8:	e3a01001 	mov	r1, #1	; 0x1
         748bc:	e5953000 	ldr	r3, [r5]
         748c0:	e1a0e00f 	mov	lr, pc
         748c4:	e283fe16 	add	pc, r3, #352	; 0x160
         748c8:	e1a00004 	mov	r0, r4
         748cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TContainerView::MakeHilite(long, TView *)
 * Address: 000748d0
 */
TContainerView::MakeHilite(long, TView *) {
    /*
         748d0:	e1a0c00d 	mov	ip, sp
         748d4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         748d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         748dc:	e1a04000 	mov	r4, r0
         748e0:	e1a06001 	mov	r6, r1
         748e4:	e1a05002 	mov	r5, r2
         748e8:	e3a00014 	mov	r0, #20	; 0x14
         748ec:	eb6d6791 	bl	1bce738 <$__nw(unsigned int)>
         748f0:	e1b07000 	movs	r7, r0
         748f4:	0a000003 	beq	74908 <TContainerView::MakeHilite(long, TView *)+0x38>
         748f8:	e1a00007 	mov	r0, r7
         748fc:	eb684ec7 	bl	1a88420 <THilite::$__ct(void)>
         74900:	e59f00d0 	ldr	r0, [pc, #d0]	; 749d8 <TContainerView::MakeHilite(long, TView *)+0x108>
         74904:	e5870000 	str	r0, [r7]
         74908:	e24dd008 	sub	sp, sp, #8	; 0x8
         7490c:	e1a01004 	mov	r1, r4
         74910:	e3a02302 	mov	r2, #134217728	; 0x8000000
         74914:	e3a00047 	mov	r0, #71	; 0x47
         74918:	eb68c688 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         7491c:	eb6d360a 	bl	1bc214c <$AllocateRefHandle(long)>
         74920:	e58d0004 	str	r0, [sp, #4]	; fField4
         74924:	e1a00007 	mov	r0, r7
         74928:	eb6852ef 	bl	1a894ec <$AddressToRef(void *)>
         7492c:	eb6d3606 	bl	1bc214c <$AllocateRefHandle(long)>
         74930:	e58d0000 	str	r0, [sp]
         74934:	e1a0100d 	mov	r1, sp
         74938:	e28d0004 	add	r0, sp, #4	; 0x4
         7493c:	eb68c688 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
         74940:	e59d0000 	ldr	r0, [sp]
         74944:	eb6d3a1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         74948:	e3a08000 	mov	r8, #0	; 0x0
         7494c:	e2849010 	add	r9, r4, #16	; 0x10
         74950:	e3360000 	teq	r6, #0	; 0x0
         74954:	1a000020 	bne	749dc <TContainerView::MakeHilite(long, TView *)+0x10c>
         74958:	e2870004 	add	r0, r7, #4	; 0x4
         7495c:	e8995000 	ldmia	r9, {ip, lr}
         74960:	e8805000 	stmia	r0, {ip, lr}
         74964:	e24dd008 	sub	sp, sp, #8	; 0x8
         74968:	e5991000 	ldr	r1, [r9]
         7496c:	e58d1004 	str	r1, [sp, #4]	; fField4
         74970:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         74974:	e2611000 	rsb	r1, r1, #0	; 0x0
         74978:	e1a01801 	mov	r1, r1, lsl #16
         7497c:	e1a01841 	mov	r1, r1, asr #16
         74980:	e59d2006 	ldr	r2, [sp, #6]
         74984:	e2622000 	rsb	r2, r2, #0	; 0x0
         74988:	e1a02802 	mov	r2, r2, lsl #16
         7498c:	e1a02842 	mov	r2, r2, asr #16
         74990:	e24dd004 	sub	sp, sp, #4	; 0x4
         74994:	e5cd1003 	strb	r1, [sp, #3]
         74998:	e1a01441 	mov	r1, r1, asr #8
         7499c:	e5cd1002 	strb	r1, [sp, #2]
         749a0:	e5cd2001 	strb	r2, [sp, #1]
         749a4:	e1a01442 	mov	r1, r2, asr #8
         749a8:	e5cd1000 	strb	r1, [sp]
         749ac:	e49d1004 	ldr	r1, [sp], #4	; fField4
         749b0:	e58d1000 	str	r1, [sp]
         749b4:	e59d1002 	ldr	r1, [sp, #2]
         749b8:	e1a01841 	mov	r1, r1, asr #16
         749bc:	e59d2000 	ldr	r2, [sp]
         749c0:	e1a02842 	mov	r2, r2, asr #16
         749c4:	eb6b73c7 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         749c8:	e28dd008 	add	sp, sp, #8	; 0x8
         749cc:	e3a00001 	mov	r0, #1	; 0x1
         749d0:	e5c7000c 	strb	r0, [r7, #12]	; fField12
         749d4:	ea00002b 	b	74a88 <TContainerView::MakeHilite(long, TView *)+0x1b8>
         749d8:	0001e48c 	andeq	lr, r1, ip, lsl #9
         749dc:	e24dd008 	sub	sp, sp, #8	; 0x8
         749e0:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
         749e4:	e2411501 	sub	r1, r1, #4194304	; 0x400000
         749e8:	e5cd1005 	strb	r1, [sp, #5]
         749ec:	e3e0007f 	mvn	r0, #127	; 0x7f
         749f0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         749f4:	e5cd1001 	strb	r1, [sp, #1]
         749f8:	e5cd0000 	strb	r0, [sp]
         749fc:	e1a0100d 	mov	r1, sp
         74a00:	e1a00005 	mov	r0, r5
         74a04:	e5952000 	ldr	r2, [r5]
         74a08:	e1a0e00f 	mov	lr, pc
         74a0c:	e282f0b0 	add	pc, r2, #176	; 0xb0
         74a10:	e2870004 	add	r0, r7, #4	; 0x4
         74a14:	e89d5000 	ldmia	sp, {ip, lr}
         74a18:	e8805000 	stmia	r0, {ip, lr}
         74a1c:	e24dd008 	sub	sp, sp, #8	; 0x8
         74a20:	e5991000 	ldr	r1, [r9]
         74a24:	e58d1004 	str	r1, [sp, #4]	; fField4
         74a28:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         74a2c:	e2611000 	rsb	r1, r1, #0	; 0x0
         74a30:	e1a02801 	mov	r2, r1, lsl #16
         74a34:	e1a02842 	mov	r2, r2, asr #16
         74a38:	e59d1006 	ldr	r1, [sp, #6]
         74a3c:	e2611000 	rsb	r1, r1, #0	; 0x0
         74a40:	e1a01801 	mov	r1, r1, lsl #16
         74a44:	e1a01841 	mov	r1, r1, asr #16
         74a48:	e24dd004 	sub	sp, sp, #4	; 0x4
         74a4c:	e5cd2003 	strb	r2, [sp, #3]
         74a50:	e1a02442 	mov	r2, r2, asr #8
         74a54:	e5cd2002 	strb	r2, [sp, #2]
         74a58:	e5cd1001 	strb	r1, [sp, #1]
         74a5c:	e1a01441 	mov	r1, r1, asr #8
         74a60:	e5cd1000 	strb	r1, [sp]
         74a64:	e49d1004 	ldr	r1, [sp], #4	; fField4
         74a68:	e58d1000 	str	r1, [sp]
         74a6c:	e59d1002 	ldr	r1, [sp, #2]
         74a70:	e1a01841 	mov	r1, r1, asr #16
         74a74:	e59d2000 	ldr	r2, [sp]
         74a78:	e1a02842 	mov	r2, r2, asr #16
         74a7c:	eb6b7399 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         74a80:	e5c7800c 	strb	r8, [r7, #12]	; fField12
         74a84:	e28dd010 	add	sp, sp, #16	; 0x10
         74a88:	e5a74010 	str	r4, [r7, #16]!	; fField16
         74a8c:	e59f0014 	ldr	r0, [pc, #14]	; 74aa8 <TContainerView::MakeHilite(long, TView *)+0x1d8>
         74a90:	e5900000 	ldr	r0, [r0]
         74a94:	e28d1004 	add	r1, sp, #4	; 0x4
         74a98:	eb686f66 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         74a9c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         74aa0:	eb6d39c5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         74aa4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         74aa8:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

