#include "include/TKeyboardView.h"

/**
 * Symbol: TKeyboardView::ClassID( const(void))
 * Address: 000fb220
 */
TKeyboardView::ClassID( const(void)) {
    /*
         fb220:	e3a0004f 	mov	r0, #79	; 0x4f
         fb224:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TKeyboardView::DerivedFrom( const(long))
 * Address: 000fb228
 */
TKeyboardView::DerivedFrom( const(long)) {
    /*
         fb228:	e1a0c00d 	mov	ip, sp
         fb22c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         fb230:	e24cb004 	sub	fp, ip, #4	; 0x4
         fb234:	e331004f 	teq	r1, #79	; 0x4f
         fb238:	0a000002 	beq	fb248 <TKeyboardView::DerivedFrom( const(long))+0x20>
         fb23c:	eb05a0df 	bl	2635c0 <TView::DerivedFrom( const(long))>
         fb240:	e3300000 	teq	r0, #0	; 0x0
         fb244:	0a000001 	beq	fb250 <TKeyboardView::DerivedFrom( const(long))+0x28>
         fb248:	e3a00001 	mov	r0, #1	; 0x1
         fb24c:	ea000000 	b	fb254 <TKeyboardView::DerivedFrom( const(long))+0x2c>
         fb250:	e3a00000 	mov	r0, #0	; 0x0
         fb254:	e20000ff 	and	r0, r0, #255	; 0xff
         fb258:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardView::Constructor(RefVar const &, TView *)
 * Address: 000fb25c
 */
TKeyboardView::Constructor(RefVar const &, TView *) {
    /*
         fb25c:	e1a0c00d 	mov	ip, sp
         fb260:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         fb264:	e24cb004 	sub	fp, ip, #4	; 0x4
         fb268:	e1a04000 	mov	r4, r0
         fb26c:	eb6b3899 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
         fb270:	e24dd00c 	sub	sp, sp, #12	; 0xc
         fb274:	e5940024 	ldr	r0, [r4, #36]	; fField36
         fb278:	e5900000 	ldr	r0, [r0]
         fb27c:	eb6b1bb2 	bl	1bc214c <$AllocateRefHandle(long)>
         fb280:	e58d0008 	str	r0, [sp, #8]
         fb284:	e3a00002 	mov	r0, #2	; 0x2
         fb288:	eb6b1baf 	bl	1bc214c <$AllocateRefHandle(long)>
         fb28c:	e2845038 	add	r5, r4, #56	; 0x38
         fb290:	e1a07005 	mov	r7, r5
         fb294:	e58d0004 	str	r0, [sp, #4]
         fb298:	e59f1050 	ldr	r1, [pc, #50]	; fb2f0 <TKeyboardView::Constructor(RefVar const &, TView *)+0x94>
         fb29c:	e28d0008 	add	r0, sp, #8	; 0x8
         fb2a0:	e3a02000 	mov	r2, #0	; 0x0
         fb2a4:	eb6b23ef 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         fb2a8:	e5951000 	ldr	r1, [r5]
         fb2ac:	e1a0200d 	mov	r2, sp
         fb2b0:	e5810000 	str	r0, [r1]
         fb2b4:	e59f1038 	ldr	r1, [pc, #38]	; fb2f4 <TKeyboardView::Constructor(RefVar const &, TView *)+0x98>
         fb2b8:	e28d0008 	add	r0, sp, #8	; 0x8
         fb2bc:	eb6b23e9 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         fb2c0:	e59d1004 	ldr	r1, [sp, #4]
         fb2c4:	e5810000 	str	r0, [r1]
         fb2c8:	e3a06000 	mov	r6, #0	; 0x0
         fb2cc:	e59d1000 	ldr	r1, [sp]
         fb2d0:	e3310000 	teq	r1, #0	; 0x0
         fb2d4:	0a000007 	beq	fb2f8 <TKeyboardView::Constructor(RefVar const &, TView *)+0x9c>
         fb2d8:	e3100003 	tst	r0, #3	; 0x3
         fb2dc:	01a00140 	moveq	r0, r0, asr #2
         fb2e0:	0a000000 	beq	fb2e8 <TKeyboardView::Constructor(RefVar const &, TView *)+0x8c>
         fb2e4:	eb6b1b8c 	bl	1bc211c <$_RINTError(long)>
         fb2e8:	e5840030 	str	r0, [r4, #48]	; fField48
         fb2ec:	ea000002 	b	fb2fc <TKeyboardView::Constructor(RefVar const &, TView *)+0xa0>
         fb2f0:	006833a0 	rsbeq	r3, r8, r0, lsr #7
         fb2f4:	00683380 	rsbeq	r3, r8, r0, lsl #7
         fb2f8:	e5846030 	str	r6, [r4, #48]	; fField48
         fb2fc:	e1a0200d 	mov	r2, sp
         fb300:	e59f1028 	ldr	r1, [pc, #28]	; fb330 <TKeyboardView::Constructor(RefVar const &, TView *)+0xd4>
         fb304:	e28d0008 	add	r0, sp, #8	; 0x8
         fb308:	eb6b23d6 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         fb30c:	e59d1004 	ldr	r1, [sp, #4]
         fb310:	e5810000 	str	r0, [r1]
         fb314:	e59d1000 	ldr	r1, [sp]
         fb318:	e3310000 	teq	r1, #0	; 0x0
         fb31c:	0a000004 	beq	fb334 <TKeyboardView::Constructor(RefVar const &, TView *)+0xd8>
         fb320:	e2500002 	subs	r0, r0, #2	; 0x2
         fb324:	13a00001 	movne	r0, #1	; 0x1
         fb328:	e5c40034 	strb	r0, [r4, #52]	; fField52
         fb32c:	ea000001 	b	fb338 <TKeyboardView::Constructor(RefVar const &, TView *)+0xdc>
         fb330:	006833d8 	ldreqd	r3, [r8], -#56	; fField56
         fb334:	e5c46034 	strb	r6, [r4, #52]	; fField52
         fb338:	e1a0200d 	mov	r2, sp
         fb33c:	e59f1028 	ldr	r1, [pc, #28]	; fb36c <TKeyboardView::Constructor(RefVar const &, TView *)+0x110>
         fb340:	e28d0008 	add	r0, sp, #8	; 0x8
         fb344:	eb6b23c7 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         fb348:	e59d1004 	ldr	r1, [sp, #4]
         fb34c:	e5810000 	str	r0, [r1]
         fb350:	e59d1000 	ldr	r1, [sp]
         fb354:	e3310000 	teq	r1, #0	; 0x0
         fb358:	0a000004 	beq	fb370 <TKeyboardView::Constructor(RefVar const &, TView *)+0x114>
         fb35c:	e2500002 	subs	r0, r0, #2	; 0x2
         fb360:	13a00001 	movne	r0, #1	; 0x1
         fb364:	e5c40090 	strb	r0, [r4, #144]	; fField144
         fb368:	ea000001 	b	fb374 <TKeyboardView::Constructor(RefVar const &, TView *)+0x118>
         fb36c:	006833e0 	rsbeq	r3, r8, r0, ror #7
         fb370:	e5c46090 	strb	r6, [r4, #144]	; fField144
         fb374:	e1a0200d 	mov	r2, sp
         fb378:	e59f1268 	ldr	r1, [pc, #268]	; fb5e8 <TKeyboardView::Constructor(RefVar const &, TView *)+0x38c>
         fb37c:	e28d0008 	add	r0, sp, #8	; 0x8
         fb380:	e3a03000 	mov	r3, #0	; 0x0
         fb384:	eb6b23ba 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         fb388:	e59d1004 	ldr	r1, [sp, #4]
         fb38c:	e5810000 	str	r0, [r1]
         fb390:	e2841040 	add	r1, r4, #64	; 0x40
         fb394:	e1a05001 	mov	r5, r1
         fb398:	e28d0004 	add	r0, sp, #4	; 0x4
         fb39c:	eb6b3850 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
         fb3a0:	e5845060 	str	r5, [r4, #96]	; fField96
         fb3a4:	e24dd010 	sub	sp, sp, #16	; 0x10
         fb3a8:	e1a00005 	mov	r0, r5
         fb3ac:	e1a0100d 	mov	r1, sp
         fb3b0:	eb69510b 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
         fb3b4:	e59d0000 	ldr	r0, [sp]
         fb3b8:	e5840080 	str	r0, [r4, #128]	; fField128
         fb3bc:	e59d0004 	ldr	r0, [sp, #4]
         fb3c0:	e5840084 	str	r0, [r4, #132]	; fField132
         fb3c4:	e3a00902 	mov	r0, #32768	; 0x8000
         fb3c8:	e5840068 	str	r0, [r4, #104]	; fField104
         fb3cc:	e5846064 	str	r6, [r4, #100]	; fField100
         fb3d0:	e584606c 	str	r6, [r4, #108]	; fField108
         fb3d4:	e5846078 	str	r6, [r4, #120]	; fField120
         fb3d8:	e3a00001 	mov	r0, #1	; 0x1
         fb3dc:	e5840074 	str	r0, [r4, #116]	; fField116
         fb3e0:	e5846070 	str	r6, [r4, #112]	; fField112
         fb3e4:	e584607c 	str	r6, [r4, #124]	; fField124
         fb3e8:	e284503c 	add	r5, r4, #60	; 0x3c
         fb3ec:	e1a08005 	mov	r8, r5
         fb3f0:	e28d2010 	add	r2, sp, #16	; 0x10
         fb3f4:	e59f11f0 	ldr	r1, [pc, #1f0]	; fb5ec <TKeyboardView::Constructor(RefVar const &, TView *)+0x390>
         fb3f8:	e28d0018 	add	r0, sp, #24	; 0x18
         fb3fc:	eb6b2399 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         fb400:	e5951000 	ldr	r1, [r5]
         fb404:	e5810000 	str	r0, [r1]
         fb408:	e59d0010 	ldr	r0, [sp, #16]
         fb40c:	e3300000 	teq	r0, #0	; 0x0
         fb410:	1a000004 	bne	fb428 <TKeyboardView::Constructor(RefVar const &, TView *)+0x1cc>
         fb414:	e59f01d4 	ldr	r0, [pc, #1d4]	; fb5f0 <TKeyboardView::Constructor(RefVar const &, TView *)+0x394>
         fb418:	e5900000 	ldr	r0, [r0]
         fb41c:	e5900000 	ldr	r0, [r0]
         fb420:	e5981000 	ldr	r1, [r8]
         fb424:	e5810000 	str	r0, [r1]
         fb428:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         fb42c:	e3a09000 	mov	r9, #0	; 0x0
         fb430:	e3a08000 	mov	r8, #0	; 0x0
         fb434:	e1a01007 	mov	r1, r7
         fb438:	e1a0000d 	mov	r0, sp
         fb43c:	eb6633f0 	bl	1a88404 <TRawKeyIterator::$__ct(RefVar const &)>
         fb440:	e3a07000 	mov	r7, #0	; 0x0
         fb444:	e59d0010 	ldr	r0, [sp, #16]
         fb448:	e5900000 	ldr	r0, [r0]
         fb44c:	e3a01000 	mov	r1, #0	; 0x0
         fb450:	eb6b237f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fb454:	e3100003 	tst	r0, #3	; 0x3
         fb458:	01a00140 	moveq	r0, r0, asr #2
         fb45c:	0a000000 	beq	fb464 <TKeyboardView::Constructor(RefVar const &, TView *)+0x208>
         fb460:	eb6b1b2d 	bl	1bc211c <$_RINTError(long)>
         fb464:	e1a06000 	mov	r6, r0
         fb468:	e59d0014 	ldr	r0, [sp, #20]
         fb46c:	e3500000 	cmp	r0, #0	; 0x0
         fb470:	ca00000b 	bgt	fb4a4 <TKeyboardView::Constructor(RefVar const &, TView *)+0x248>
         fb474:	e3a05000 	mov	r5, #0	; 0x0
         fb478:	e3a0a000 	mov	sl, #0	; 0x0
         fb47c:	e59d0010 	ldr	r0, [sp, #16]
         fb480:	e5900000 	ldr	r0, [r0]
         fb484:	e3a01000 	mov	r1, #0	; 0x0
         fb488:	eb6b2371 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fb48c:	e3100003 	tst	r0, #3	; 0x3
         fb490:	01a00140 	moveq	r0, r0, asr #2
         fb494:	0a000000 	beq	fb49c <TKeyboardView::Constructor(RefVar const &, TView *)+0x240>
         fb498:	eb6b1b1f 	bl	1bc211c <$_RINTError(long)>
         fb49c:	e20000ff 	and	r0, r0, #255	; 0xff
         fb4a0:	e0808008 	add	r8, r0, r8
         fb4a4:	e3a010ff 	mov	r1, #255	; 0xff
         fb4a8:	e59d0008 	ldr	r0, [sp, #8]
         fb4ac:	e0011420 	and	r1, r1, r0, lsr #8
         fb4b0:	e0815005 	add	r5, r1, r5
         fb4b4:	e20000ff 	and	r0, r0, #255	; 0xff
         fb4b8:	e150000a 	cmp	r0, sl
         fb4bc:	81a0a000 	movhi	sl, r0
         fb4c0:	e1817007 	orr	r7, r1, r7
         fb4c4:	e1806006 	orr	r6, r0, r6
         fb4c8:	e59d0014 	ldr	r0, [sp, #20]
         fb4cc:	e2801001 	add	r1, r0, #1	; 0x1
         fb4d0:	e59d0020 	ldr	r0, [sp, #32]
         fb4d4:	e1510000 	cmp	r1, r0
         fb4d8:	ba000001 	blt	fb4e4 <TKeyboardView::Constructor(RefVar const &, TView *)+0x288>
         fb4dc:	e1550009 	cmp	r5, r9
         fb4e0:	c1a09005 	movgt	r9, r5
         fb4e4:	e1a0000d 	mov	r0, sp
         fb4e8:	eb66864a 	bl	1a9ce18 <TRawKeyIterator::$Next(void)>
         fb4ec:	e3300000 	teq	r0, #0	; 0x0
         fb4f0:	0affffdc 	beq	fb468 <TKeyboardView::Constructor(RefVar const &, TView *)+0x20c>
         fb4f4:	e24dd008 	sub	sp, sp, #8	; 0x8
         fb4f8:	e2845010 	add	r5, r4, #16	; 0x10
         fb4fc:	e59f10f0 	ldr	r1, [pc, #f0]	; fb5f4 <TKeyboardView::Constructor(RefVar const &, TView *)+0x398>
         fb500:	e8915000 	ldmia	r1, {ip, lr}
         fb504:	e88d5000 	stmia	sp, {ip, lr}
         fb508:	e5950006 	ldr	r0, [r5, #6]
         fb50c:	e1a00820 	mov	r0, r0, lsr #16
         fb510:	e5951002 	ldr	r1, [r5, #2]
         fb514:	e1a01821 	mov	r1, r1, lsr #16
         fb518:	e0400001 	sub	r0, r0, r1
         fb51c:	e1a00800 	mov	r0, r0, lsl #16
         fb520:	e1a00840 	mov	r0, r0, asr #16
         fb524:	e1a01180 	mov	r1, r0, lsl #3
         fb528:	e1a00009 	mov	r0, r9
         fb52c:	eb6add03 	bl	1bb2940 <$__rt_sdiv>
         fb530:	e2071007 	and	r1, r7, #7	; 0x7
         fb534:	e7dd1001 	ldrb	r1, [sp, r1]
         fb538:	e3811b3f 	orr	r1, r1, #64512	; 0xfc00
         fb53c:	e3811ffe 	orr	r1, r1, #1016	; 0x3f8
         fb540:	e0017000 	and	r7, r1, r0
         fb544:	e5950004 	ldr	r0, [r5, #4]
         fb548:	e1a00820 	mov	r0, r0, lsr #16
         fb54c:	e5951000 	ldr	r1, [r5]
         fb550:	e1a01821 	mov	r1, r1, lsr #16
         fb554:	e0400001 	sub	r0, r0, r1
         fb558:	e1a00800 	mov	r0, r0, lsl #16
         fb55c:	e1a00840 	mov	r0, r0, asr #16
         fb560:	e1a01180 	mov	r1, r0, lsl #3
         fb564:	e1a00008 	mov	r0, r8
         fb568:	eb6adcf4 	bl	1bb2940 <$__rt_sdiv>
         fb56c:	e2062007 	and	r2, r6, #7	; 0x7
         fb570:	e7dd1002 	ldrb	r1, [sp, r2]
         fb574:	e3811b3f 	orr	r1, r1, #64512	; 0xfc00
         fb578:	e3811ffe 	orr	r1, r1, #1016	; 0x3f8
         fb57c:	e0010000 	and	r0, r1, r0
         fb580:	e3a01000 	mov	r1, #0	; 0x0
         fb584:	e5c4108b 	strb	r1, [r4, #139]	; fField139
         fb588:	e5c4108a 	strb	r1, [r4, #138]	; fField138
         fb58c:	e5c4708f 	strb	r7, [r4, #143]	; fField143
         fb590:	e1a02447 	mov	r2, r7, asr #8
         fb594:	e5c4208e 	strb	r2, [r4, #142]	; fField142
         fb598:	e5c41089 	strb	r1, [r4, #137]	; fField137
         fb59c:	e5c41088 	strb	r1, [r4, #136]	; fField136
         fb5a0:	e5c4008d 	strb	r0, [r4, #141]	; fField141
         fb5a4:	e1a00440 	mov	r0, r0, asr #8
         fb5a8:	e5c4008c 	strb	r0, [r4, #140]	; fField140
         fb5ac:	e28dd008 	add	sp, sp, #8	; 0x8
         fb5b0:	e59d0010 	ldr	r0, [sp, #16]
         fb5b4:	eb6b1f00 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb5b8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         fb5bc:	eb6b1efe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb5c0:	e59d0004 	ldr	r0, [sp, #4]
         fb5c4:	eb6b1efc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb5c8:	e59d0000 	ldr	r0, [sp]
         fb5cc:	eb6b1efa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb5d0:	e28dd03c 	add	sp, sp, #60	; 0x3c
         fb5d4:	e59d0004 	ldr	r0, [sp, #4]
         fb5d8:	eb6b1ef7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb5dc:	e59d0008 	ldr	r0, [sp, #8]
         fb5e0:	eb6b1ef5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb5e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         fb5e8:	00684fc8 	rsbeq	r4, r8, r8, asr #31
         fb5ec:	006833c0 	rsbeq	r3, r8, r0, asr #7
         fb5f0:	00684fe8 	rsbeq	r4, r8, r8, ror #31
         fb5f4:	00371a44 	eoreqs	r1, r7, r4, asr #20
    */
}

/**
 * Symbol: TKeyboardView::__dt(void)
 * Address: 000fb5f8
 */
TKeyboardView::~TKeyboardView(void) {
    /*
         fb5f8:	e1a0c00d 	mov	ip, sp
         fb5fc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         fb600:	e24cb004 	sub	fp, ip, #4	; 0x4
         fb604:	e1a04000 	mov	r4, r0
         fb608:	e1a05001 	mov	r5, r1
         fb60c:	e59f0048 	ldr	r0, [pc, #48]	; fb65c <TKeyboardView::__dt(void)+0x64>	; fField48
         fb610:	e5840000 	str	r0, [r4]
         fb614:	e2846040 	add	r6, r4, #64	; 0x40
         fb618:	e596001c 	ldr	r0, [r6, #28]
         fb61c:	e3300000 	teq	r0, #0	; 0x0
         fb620:	1b69482d 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
         fb624:	e5960000 	ldr	r0, [r6]
         fb628:	eb6b1ee3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb62c:	e594003c 	ldr	r0, [r4, #60]	; fField60
         fb630:	eb6b1ee1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb634:	e5940038 	ldr	r0, [r4, #56]	; fField56
         fb638:	eb6b1edf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb63c:	e1a00004 	mov	r0, r4
         fb640:	e3a01000 	mov	r1, #0	; 0x0
         fb644:	eb6b3790 	bl	1bc948c <TView::$__dt(void)>
         fb648:	e3150001 	tst	r5, #1	; 0x1
         fb64c:	11a00004 	movne	r0, r4
         fb650:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         fb654:	1a663378 	bne	1a8843c <$__dl__8TxObjectSFPv>
         fb658:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         fb65c:	0001cdac 	andeq	ip, r1, ip, lsr #27
    */
}

/**
 * Symbol: TKeyboardView::GetLegendRef(TRawKeyIterator &)
 * Address: 000fb660
 */
TKeyboardView::GetLegendRef(TRawKeyIterator &) {
    /*
         fb660:	e1a0c00d 	mov	ip, sp
         fb664:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fb668:	e24cb004 	sub	fp, ip, #4	; 0x4
         fb66c:	e1a04000 	mov	r4, r0
         fb670:	e1a05001 	mov	r5, r1
         fb674:	e24dd004 	sub	sp, sp, #4	; 0x4
         fb678:	e5910000 	ldr	r0, [r1]
         fb67c:	e5900000 	ldr	r0, [r0]
         fb680:	eb6b1ab1 	bl	1bc214c <$AllocateRefHandle(long)>
         fb684:	e58d0000 	str	r0, [sp]
         fb688:	e5900000 	ldr	r0, [r0]
         fb68c:	e3300002 	teq	r0, #2	; 0x2
         fb690:	1a000003 	bne	fb6a4 <TKeyboardView::GetLegendRef(TRawKeyIterator &)+0x44>
         fb694:	e5950004 	ldr	r0, [r5, #4]
         fb698:	e5901000 	ldr	r1, [r0]
         fb69c:	e59d0000 	ldr	r0, [sp]
         fb6a0:	e5801000 	str	r1, [r0]
         fb6a4:	e1a0000d 	mov	r0, sp
         fb6a8:	eb6b1aae 	bl	1bc2168 <$ClassOf(RefVar const &)>
         fb6ac:	eb6b1aa6 	bl	1bc214c <$AllocateRefHandle(long)>
         fb6b0:	e1a05000 	mov	r5, r0
         fb6b4:	e59f6040 	ldr	r6, [pc, #40]	; fb6fc <TKeyboardView::GetLegendRef(TRawKeyIterator &)+0x9c>
         fb6b8:	e5960000 	ldr	r0, [r6]
         fb6bc:	e5901000 	ldr	r1, [r0]
         fb6c0:	e5950000 	ldr	r0, [r5]
         fb6c4:	eb6b22d9 	bl	1bc4230 <$EQRef__FlT1>
         fb6c8:	e1b07000 	movs	r7, r0
         fb6cc:	13a07001 	movne	r7, #1	; 0x1
         fb6d0:	e1a00005 	mov	r0, r5
         fb6d4:	eb6b1eb8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb6d8:	e3370000 	teq	r7, #0	; 0x0
         fb6dc:	0a000007 	beq	fb700 <TKeyboardView::GetLegendRef(TRawKeyIterator &)+0xa0>
         fb6e0:	e5b41030 	ldr	r1, [r4, #48]!	; fField48
         fb6e4:	e59d0000 	ldr	r0, [sp]
         fb6e8:	e5900000 	ldr	r0, [r0]
         fb6ec:	eb6b22d8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fb6f0:	e59d1000 	ldr	r1, [sp]
         fb6f4:	e5810000 	str	r0, [r1]
         fb6f8:	ea000025 	b	fb794 <TKeyboardView::GetLegendRef(TRawKeyIterator &)+0x134>
         fb6fc:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         fb700:	e1a0000d 	mov	r0, sp
         fb704:	eb6b26e0 	bl	1bc528c <$IsFunction(RefVar const &)>
         fb708:	e3300000 	teq	r0, #0	; 0x0
         fb70c:	0a000020 	beq	fb794 <TKeyboardView::GetLegendRef(TRawKeyIterator &)+0x134>
         fb710:	e24dd004 	sub	sp, sp, #4	; 0x4
         fb714:	e3a00002 	mov	r0, #2	; 0x2
         fb718:	eb6b1a8b 	bl	1bc214c <$AllocateRefHandle(long)>
         fb71c:	e58d0000 	str	r0, [sp]
         fb720:	e1a0200d 	mov	r2, sp
         fb724:	e2840024 	add	r0, r4, #36	; 0x24
         fb728:	e28d1004 	add	r1, sp, #4	; 0x4
         fb72c:	eb6b1ead 	bl	1bc31e8 <$DoScript__FRC6RefVarN21>
         fb730:	e59d1004 	ldr	r1, [sp, #4]
         fb734:	e5810000 	str	r0, [r1]
         fb738:	e59d0000 	ldr	r0, [sp]
         fb73c:	eb6b1e9e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb740:	e28d0004 	add	r0, sp, #4	; 0x4
         fb744:	eb6b1a87 	bl	1bc2168 <$ClassOf(RefVar const &)>
         fb748:	eb6b1a7f 	bl	1bc214c <$AllocateRefHandle(long)>
         fb74c:	e1a05000 	mov	r5, r0
         fb750:	e5960000 	ldr	r0, [r6]
         fb754:	e5901000 	ldr	r1, [r0]
         fb758:	e5950000 	ldr	r0, [r5]
         fb75c:	eb6b22b3 	bl	1bc4230 <$EQRef__FlT1>
         fb760:	e1b06000 	movs	r6, r0
         fb764:	13a06001 	movne	r6, #1	; 0x1
         fb768:	e1a00005 	mov	r0, r5
         fb76c:	eb6b1e92 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb770:	e3360000 	teq	r6, #0	; 0x0
         fb774:	0a000005 	beq	fb790 <TKeyboardView::GetLegendRef(TRawKeyIterator &)+0x130>
         fb778:	e5b41030 	ldr	r1, [r4, #48]!	; fField48
         fb77c:	e59d0004 	ldr	r0, [sp, #4]
         fb780:	e5900000 	ldr	r0, [r0]
         fb784:	eb6b22b2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fb788:	e59d1004 	ldr	r1, [sp, #4]
         fb78c:	e5810000 	str	r0, [r1]
         fb790:	e28dd004 	add	sp, sp, #4	; 0x4
         fb794:	e59d0000 	ldr	r0, [sp]
         fb798:	e5904000 	ldr	r4, [r0]
         fb79c:	eb6b1e86 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb7a0:	e1a00004 	mov	r0, r4
         fb7a4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardView::GetResultRef(TRawKeyIterator &)
 * Address: 000fb81c
 */
TKeyboardView::GetResultRef(TRawKeyIterator &) {
    /*
         fb81c:	e1a0c00d 	mov	ip, sp
         fb820:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fb824:	e24cb004 	sub	fp, ip, #4	; 0x4
         fb828:	e1a04000 	mov	r4, r0
         fb82c:	e24dd004 	sub	sp, sp, #4	; 0x4
         fb830:	e5910004 	ldr	r0, [r1, #4]
         fb834:	e5900000 	ldr	r0, [r0]
         fb838:	eb6b1a43 	bl	1bc214c <$AllocateRefHandle(long)>
         fb83c:	e58d0000 	str	r0, [sp]
         fb840:	e1a0000d 	mov	r0, sp
         fb844:	eb6b1a47 	bl	1bc2168 <$ClassOf(RefVar const &)>
         fb848:	eb6b1a3f 	bl	1bc214c <$AllocateRefHandle(long)>
         fb84c:	e1a05000 	mov	r5, r0
         fb850:	e59f6040 	ldr	r6, [pc, #40]	; fb898 <TKeyboardView::GetResultRef(TRawKeyIterator &)+0x7c>
         fb854:	e5960000 	ldr	r0, [r6]
         fb858:	e5901000 	ldr	r1, [r0]
         fb85c:	e5950000 	ldr	r0, [r5]
         fb860:	eb6b2272 	bl	1bc4230 <$EQRef__FlT1>
         fb864:	e1b07000 	movs	r7, r0
         fb868:	13a07001 	movne	r7, #1	; 0x1
         fb86c:	e1a00005 	mov	r0, r5
         fb870:	eb6b1e51 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb874:	e3370000 	teq	r7, #0	; 0x0
         fb878:	0a000007 	beq	fb89c <TKeyboardView::GetResultRef(TRawKeyIterator &)+0x80>
         fb87c:	e5b41030 	ldr	r1, [r4, #48]!	; fField48
         fb880:	e59d0000 	ldr	r0, [sp]
         fb884:	e5900000 	ldr	r0, [r0]
         fb888:	eb6b2271 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fb88c:	e59d1000 	ldr	r1, [sp]
         fb890:	e5810000 	str	r0, [r1]
         fb894:	ea000025 	b	fb930 <TKeyboardView::GetResultRef(TRawKeyIterator &)+0x114>
         fb898:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         fb89c:	e1a0000d 	mov	r0, sp
         fb8a0:	eb6b2679 	bl	1bc528c <$IsFunction(RefVar const &)>
         fb8a4:	e3300000 	teq	r0, #0	; 0x0
         fb8a8:	0a000020 	beq	fb930 <TKeyboardView::GetResultRef(TRawKeyIterator &)+0x114>
         fb8ac:	e24dd004 	sub	sp, sp, #4	; 0x4
         fb8b0:	e3a00002 	mov	r0, #2	; 0x2
         fb8b4:	eb6b1a24 	bl	1bc214c <$AllocateRefHandle(long)>
         fb8b8:	e58d0000 	str	r0, [sp]
         fb8bc:	e1a0200d 	mov	r2, sp
         fb8c0:	e2840024 	add	r0, r4, #36	; 0x24
         fb8c4:	e28d1004 	add	r1, sp, #4	; 0x4
         fb8c8:	eb6b1e46 	bl	1bc31e8 <$DoScript__FRC6RefVarN21>
         fb8cc:	e59d1004 	ldr	r1, [sp, #4]
         fb8d0:	e5810000 	str	r0, [r1]
         fb8d4:	e59d0000 	ldr	r0, [sp]
         fb8d8:	eb6b1e37 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb8dc:	e28d0004 	add	r0, sp, #4	; 0x4
         fb8e0:	eb6b1a20 	bl	1bc2168 <$ClassOf(RefVar const &)>
         fb8e4:	eb6b1a18 	bl	1bc214c <$AllocateRefHandle(long)>
         fb8e8:	e1a05000 	mov	r5, r0
         fb8ec:	e5960000 	ldr	r0, [r6]
         fb8f0:	e5901000 	ldr	r1, [r0]
         fb8f4:	e5950000 	ldr	r0, [r5]
         fb8f8:	eb6b224c 	bl	1bc4230 <$EQRef__FlT1>
         fb8fc:	e1b06000 	movs	r6, r0
         fb900:	13a06001 	movne	r6, #1	; 0x1
         fb904:	e1a00005 	mov	r0, r5
         fb908:	eb6b1e2b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb90c:	e3360000 	teq	r6, #0	; 0x0
         fb910:	0a000005 	beq	fb92c <TKeyboardView::GetResultRef(TRawKeyIterator &)+0x110>
         fb914:	e5b41030 	ldr	r1, [r4, #48]!	; fField48
         fb918:	e59d0004 	ldr	r0, [sp, #4]
         fb91c:	e5900000 	ldr	r0, [r0]
         fb920:	eb6b224b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fb924:	e59d1004 	ldr	r1, [sp, #4]
         fb928:	e5810000 	str	r0, [r1]
         fb92c:	e28dd004 	add	sp, sp, #4	; 0x4
         fb930:	e59d0000 	ldr	r0, [sp]
         fb934:	e5904000 	ldr	r4, [r0]
         fb938:	eb6b1e1f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb93c:	e1a00004 	mov	r0, r4
         fb940:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)
 * Address: 000fb944
 */
TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char) {
    /*
         fb944:	e1a0c00d 	mov	ip, sp
         fb948:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         fb94c:	e24cb004 	sub	fp, ip, #4	; 0x4
         fb950:	e1a05000 	mov	r5, r0
         fb954:	e1a04001 	mov	r4, r1
         fb958:	e202a0ff 	and	sl, r2, #255	; 0xff
         fb95c:	e20330ff 	and	r3, r3, #255	; 0xff
         fb960:	e3a00002 	mov	r0, #2	; 0x2
         fb964:	e52d3004 	str	r3, [sp, -#4]!
         fb968:	e24dd058 	sub	sp, sp, #88	; 0x58
         fb96c:	eb6b19f6 	bl	1bc214c <$AllocateRefHandle(long)>
         fb970:	e58d004c 	str	r0, [sp, #76]
         fb974:	e28d0044 	add	r0, sp, #68	; 0x44
         fb978:	eb6b15d8 	bl	1bc10e0 <TObjectPtr::$__ct(void)>
         fb97c:	e3e07000 	mvn	r7, #0	; 0x0
         fb980:	e3a00000 	mov	r0, #0	; 0x0
         fb984:	e3a06000 	mov	r6, #0	; 0x0
         fb988:	e1a01004 	mov	r1, r4
         fb98c:	e58d0000 	str	r0, [sp]
         fb990:	e1a00005 	mov	r0, r5
         fb994:	eb666851 	bl	1a95ae0 <TKeyboardView::$GetLegendRef(TRawKeyIterator &)>
         fb998:	e59d104c 	ldr	r1, [sp, #76]
         fb99c:	e5810000 	str	r0, [r1]
         fb9a0:	e24dd008 	sub	sp, sp, #8	; 0x8
         fb9a4:	e28d0054 	add	r0, sp, #84	; 0x54
         fb9a8:	eb6b19ee 	bl	1bc2168 <$ClassOf(RefVar const &)>
         fb9ac:	eb6b19e6 	bl	1bc214c <$AllocateRefHandle(long)>
         fb9b0:	e58d0004 	str	r0, [sp, #4]
         fb9b4:	e59f008c 	ldr	r0, [pc, #8c]	; fba48 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x104>
         fb9b8:	e5900000 	ldr	r0, [r0]
         fb9bc:	e5901000 	ldr	r1, [r0]
         fb9c0:	e59d0004 	ldr	r0, [sp, #4]
         fb9c4:	e5900000 	ldr	r0, [r0]
         fb9c8:	eb6b2218 	bl	1bc4230 <$EQRef__FlT1>
         fb9cc:	e3300000 	teq	r0, #0	; 0x0
         fb9d0:	13a00001 	movne	r0, #1	; 0x1
         fb9d4:	e58d0000 	str	r0, [sp]
         fb9d8:	e59d0004 	ldr	r0, [sp, #4]
         fb9dc:	eb6b1df6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fb9e0:	e49d0004 	ldr	r0, [sp], #4
         fb9e4:	e3300000 	teq	r0, #0	; 0x0
         fb9e8:	1a000017 	bne	fba4c <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x108>
         fb9ec:	e59d0050 	ldr	r0, [sp, #80]
         fb9f0:	e5900000 	ldr	r0, [r0]
         fb9f4:	e2001003 	and	r1, r0, #3	; 0x3
         fb9f8:	e3310002 	teq	r1, #2	; 0x2
         fb9fc:	03a03003 	moveq	r3, #3	; 0x3
         fba00:	00032140 	andeq	r2, r3, r0, asr #2
         fba04:	03320001 	teqeq	r2, #1	; 0x1
         fba08:	1a000021 	bne	fba94 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x150>
         fba0c:	e3a06001 	mov	r6, #1	; 0x1
         fba10:	e3310002 	teq	r1, #2	; 0x2
         fba14:	03320001 	teqeq	r2, #1	; 0x1
         fba18:	01a00140 	moveq	r0, r0, asr #2
         fba1c:	01a00140 	moveq	r0, r0, asr #2
         fba20:	01a00800 	moveq	r0, r0, lsl #16
         fba24:	01a00820 	moveq	r0, r0, lsr #16
         fba28:	0a000000 	beq	fba30 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0xec>
         fba2c:	eb6b19b9 	bl	1bc2118 <$_RCHARError(long)>
         fba30:	e5cd004d 	strb	r0, [sp, #77]
         fba34:	e1a00440 	mov	r0, r0, asr #8
         fba38:	e5cd004c 	strb	r0, [sp, #76]
         fba3c:	e28d904c 	add	r9, sp, #76	; 0x4c
         fba40:	e3a08001 	mov	r8, #1	; 0x1
         fba44:	ea00005b 	b	fbbb8 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x274>
         fba48:	006848d0 	ldreqd	r4, [r8], -#128	; fField128
         fba4c:	e3a06001 	mov	r6, #1	; 0x1
         fba50:	e24dd004 	sub	sp, sp, #4	; 0x4
         fba54:	e28d1054 	add	r1, sp, #84	; 0x54
         fba58:	e1a0000d 	mov	r0, sp
         fba5c:	eb6b159d 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         fba60:	e1a0000d 	mov	r0, sp
         fba64:	eb6b19aa 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         fba68:	e1a09000 	mov	r9, r0
         fba6c:	e59d0054 	ldr	r0, [sp, #84]
         fba70:	e5900000 	ldr	r0, [r0]
         fba74:	eb6b260c 	bl	1bc52ac <$Length(long)>
         fba78:	e2400002 	sub	r0, r0, #2	; 0x2
         fba7c:	e1a080a0 	mov	r8, r0, lsr #1
         fba80:	e1a0000d 	mov	r0, sp
         fba84:	e3a01000 	mov	r1, #0	; 0x0
         fba88:	eb6b199c 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         fba8c:	e28dd004 	add	sp, sp, #4	; 0x4
         fba90:	ea000048 	b	fbbb8 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x274>
         fba94:	e3310000 	teq	r1, #0	; 0x0
         fba98:	1a00000b 	bne	fbacc <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x188>
         fba9c:	e5d52034 	ldrb	r2, [r5, #52]	; fField52
         fbaa0:	e3320000 	teq	r2, #0	; 0x0
         fbaa4:	0a000008 	beq	fbacc <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x188>
         fbaa8:	e3a06001 	mov	r6, #1	; 0x1
         fbaac:	e3310000 	teq	r1, #0	; 0x0
         fbab0:	01a00140 	moveq	r0, r0, asr #2
         fbab4:	0a000000 	beq	fbabc <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x178>
         fbab8:	eb6b1997 	bl	1bc211c <$_RINTError(long)>
         fbabc:	e1a07000 	mov	r7, r0
         fbac0:	e3a01000 	mov	r1, #0	; 0x0
         fbac4:	eb675b8e 	bl	1ad2904 <$KeyLabel(unsigned long, unsigned char)>
         fbac8:	eaffffd8 	b	fba30 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0xec>
         fbacc:	e3510000 	cmp	r1, #0	; 0x0
         fbad0:	1a00000a 	bne	fbb00 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x1bc>
         fbad4:	e3a06001 	mov	r6, #1	; 0x1
         fbad8:	01a00140 	moveq	r0, r0, asr #2
         fbadc:	0a000000 	beq	fbae4 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x1a0>
         fbae0:	eb6b198d 	bl	1bc211c <$_RINTError(long)>
         fbae4:	e28d1008 	add	r1, sp, #8	; 0x8
         fbae8:	eb6bba89 	bl	1bea514 <$IntegerString(long, unsigned short *)>
         fbaec:	e28d9008 	add	r9, sp, #8	; 0x8
         fbaf0:	e28d0008 	add	r0, sp, #8	; 0x8
         fbaf4:	eb6bcb19 	bl	1bee760 <$Ustrlen>
         fbaf8:	e1a08000 	mov	r8, r0
         fbafc:	ea00002d 	b	fbbb8 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x274>
         fbb00:	e59f01f8 	ldr	r0, [pc, #1f8]	; fbd00 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x3bc>
         fbb04:	e5900000 	ldr	r0, [r0]
         fbb08:	e5901000 	ldr	r1, [r0]
         fbb0c:	e52d1004 	str	r1, [sp, -#4]!
         fbb10:	e28d0054 	add	r0, sp, #84	; 0x54
         fbb14:	eb6b1993 	bl	1bc2168 <$ClassOf(RefVar const &)>
         fbb18:	e49d1004 	ldr	r1, [sp], #4
         fbb1c:	eb6b21c3 	bl	1bc4230 <$EQRef__FlT1>
         fbb20:	e3300000 	teq	r0, #0	; 0x0
         fbb24:	0a000078 	beq	fbd0c <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x3c8>
         fbb28:	e59f01d4 	ldr	r0, [pc, #1d4]	; fbd04 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x3c0>
         fbb2c:	e5900000 	ldr	r0, [r0]
         fbb30:	e5901000 	ldr	r1, [r0]
         fbb34:	e59d0050 	ldr	r0, [sp, #80]
         fbb38:	e5900000 	ldr	r0, [r0]
         fbb3c:	eb6b21c1 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         fbb40:	e3300000 	teq	r0, #0	; 0x0
         fbb44:	0a000070 	beq	fbd0c <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x3c8>
         fbb48:	e24dd008 	sub	sp, sp, #8	; 0x8
         fbb4c:	e3a00001 	mov	r0, #1	; 0x1
         fbb50:	e58d000c 	str	r0, [sp, #12]	; fField12
         fbb54:	e24dd004 	sub	sp, sp, #4	; 0x4
         fbb58:	e59f01a8 	ldr	r0, [pc, #1a8]	; fbd08 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x3c4>
         fbb5c:	e5900000 	ldr	r0, [r0]
         fbb60:	e5901000 	ldr	r1, [r0]
         fbb64:	e59d005c 	ldr	r0, [sp, #92]
         fbb68:	e5900000 	ldr	r0, [r0]
         fbb6c:	eb6b21bb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         fbb70:	eb6b1975 	bl	1bc214c <$AllocateRefHandle(long)>
         fbb74:	e58d0000 	str	r0, [sp]
         fbb78:	e28d1004 	add	r1, sp, #4	; 0x4
         fbb7c:	e1a0000d 	mov	r0, sp
         fbb80:	eb6663bc 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         fbb84:	e59d000a 	ldr	r0, [sp, #10]
         fbb88:	e1a00840 	mov	r0, r0, asr #16
         fbb8c:	e59d1006 	ldr	r1, [sp, #6]
         fbb90:	e0400841 	sub	r0, r0, r1, asr #16
         fbb94:	e58d0064 	str	r0, [sp, #100]	; fField100
         fbb98:	e59d0008 	ldr	r0, [sp, #8]
         fbb9c:	e1a00840 	mov	r0, r0, asr #16
         fbba0:	e59d1004 	ldr	r1, [sp, #4]
         fbba4:	e0400841 	sub	r0, r0, r1, asr #16
         fbba8:	e58d0060 	str	r0, [sp, #96]	; fField96
         fbbac:	e59d0000 	ldr	r0, [sp]
         fbbb0:	eb6b1d81 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fbbb4:	e28dd00c 	add	sp, sp, #12	; 0xc
         fbbb8:	e5d50034 	ldrb	r0, [r5, #52]	; fField52
         fbbbc:	e3300000 	teq	r0, #0	; 0x0
         fbbc0:	0a000019 	beq	fbc2c <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x2e8>
         fbbc4:	e3770001 	cmn	r7, #1	; 0x1
         fbbc8:	1a000010 	bne	fbc10 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x2cc>
         fbbcc:	e24dd004 	sub	sp, sp, #4	; 0x4
         fbbd0:	e1a01004 	mov	r1, r4
         fbbd4:	e1a00005 	mov	r0, r5
         fbbd8:	eb666bce 	bl	1a96b18 <TKeyboardView::$GetResultRef(TRawKeyIterator &)>
         fbbdc:	eb6b195a 	bl	1bc214c <$AllocateRefHandle(long)>
         fbbe0:	e58d0000 	str	r0, [sp]
         fbbe4:	e5900000 	ldr	r0, [r0]
         fbbe8:	e2001003 	and	r1, r0, #3	; 0x3
         fbbec:	e3510000 	cmp	r1, #0	; 0x0
         fbbf0:	1a000003 	bne	fbc04 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x2c0>
         fbbf4:	01a00140 	moveq	r0, r0, asr #2
         fbbf8:	0a000000 	beq	fbc00 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x2bc>
         fbbfc:	eb6b1946 	bl	1bc211c <$_RINTError(long)>
         fbc00:	e1a07000 	mov	r7, r0
         fbc04:	e59d0000 	ldr	r0, [sp]
         fbc08:	eb6b1d6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fbc0c:	e28dd004 	add	sp, sp, #4	; 0x4
         fbc10:	e3770001 	cmn	r7, #1	; 0x1
         fbc14:	0a000004 	beq	fbc2c <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x2e8>
         fbc18:	e1a00007 	mov	r0, r7
         fbc1c:	e3a01000 	mov	r1, #0	; 0x0
         fbc20:	eb675734 	bl	1ad18f8 <$KeyDown(unsigned long, unsigned char)>
         fbc24:	e3300000 	teq	r0, #0	; 0x0
         fbc28:	13a0a001 	movne	sl, #1	; 0x1
         fbc2c:	e1a0200a 	mov	r2, sl
         fbc30:	e1a01004 	mov	r1, r4
         fbc34:	e1a00005 	mov	r0, r5
         fbc38:	e59d305c 	ldr	r3, [sp, #92]
         fbc3c:	eb665b35 	bl	1a92918 <TKeyboardView::$DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)>
         fbc40:	e59d0004 	ldr	r0, [sp, #4]
         fbc44:	e3300000 	teq	r0, #0	; 0x0
         fbc48:	0a000035 	beq	fbd24 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x3e0>
         fbc4c:	e24dd008 	sub	sp, sp, #8	; 0x8
         fbc50:	e33a0000 	teq	sl, #0	; 0x0
         fbc54:	03a02001 	moveq	r2, #1	; 0x1
         fbc58:	13a02003 	movne	r2, #3	; 0x3
         fbc5c:	e594103e 	ldr	r1, [r4, #62]
         fbc60:	e1a01841 	mov	r1, r1, asr #16
         fbc64:	e5940042 	ldr	r0, [r4, #66]
         fbc68:	e0810840 	add	r0, r1, r0, asr #16
         fbc6c:	e59d1060 	ldr	r1, [sp, #96]	; fField96
         fbc70:	e1a01801 	mov	r1, r1, lsl #16
         fbc74:	e1a01841 	mov	r1, r1, asr #16
         fbc78:	e0400001 	sub	r0, r0, r1
         fbc7c:	e0800fa0 	add	r0, r0, r0, lsr #31
         fbc80:	e1a000c0 	mov	r0, r0, asr #1
         fbc84:	e5cd0003 	strb	r0, [sp, #3]
         fbc88:	e1a00440 	mov	r0, r0, asr #8
         fbc8c:	e5cd0002 	strb	r0, [sp, #2]
         fbc90:	e59d0000 	ldr	r0, [sp]
         fbc94:	e0800001 	add	r0, r0, r1
         fbc98:	e5cd0007 	strb	r0, [sp, #7]
         fbc9c:	e1a00440 	mov	r0, r0, asr #8
         fbca0:	e5cd0006 	strb	r0, [sp, #6]
         fbca4:	e594003c 	ldr	r0, [r4, #60]	; fField60
         fbca8:	e1a00840 	mov	r0, r0, asr #16
         fbcac:	e5941040 	ldr	r1, [r4, #64]
         fbcb0:	e0800841 	add	r0, r0, r1, asr #16
         fbcb4:	e59d105c 	ldr	r1, [sp, #92]
         fbcb8:	e1a01801 	mov	r1, r1, lsl #16
         fbcbc:	e1a01841 	mov	r1, r1, asr #16
         fbcc0:	e0400001 	sub	r0, r0, r1
         fbcc4:	e0800fa0 	add	r0, r0, r0, lsr #31
         fbcc8:	e1a000c0 	mov	r0, r0, asr #1
         fbccc:	e5cd0001 	strb	r0, [sp, #1]
         fbcd0:	e1a00440 	mov	r0, r0, asr #8
         fbcd4:	e5cd0000 	strb	r0, [sp]
         fbcd8:	e59d0002 	ldr	r0, [sp, #2]
         fbcdc:	e0800001 	add	r0, r0, r1
         fbce0:	e5cd0005 	strb	r0, [sp, #5]
         fbce4:	e1a00440 	mov	r0, r0, asr #8
         fbce8:	e5cd0004 	strb	r0, [sp, #4]
         fbcec:	e1a0100d 	mov	r1, sp
         fbcf0:	e28d0058 	add	r0, sp, #88	; 0x58
         fbcf4:	eb674a89 	bl	1ace720 <$DrawBitmap(RefVar const &, TRect *, long)>
         fbcf8:	e28dd008 	add	sp, sp, #8	; 0x8
         fbcfc:	ea000030 	b	fbdc4 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x480>
         fbd00:	00682ee8 	rsbeq	r2, r8, r8, ror #29
         fbd04:	006820d8 	ldreqd	r2, [r8], -#8
         fbd08:	00682190 	streqb	r2, [r8], -#16
         fbd0c:	e28d0048 	add	r0, sp, #72	; 0x48
         fbd10:	e3a01000 	mov	r1, #0	; 0x0
         fbd14:	eb6b18f9 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         fbd18:	e59d0050 	ldr	r0, [sp, #80]
         fbd1c:	eb6b1d26 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fbd20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         fbd24:	e3360000 	teq	r6, #0	; 0x0
         fbd28:	0a000025 	beq	fbdc4 <TKeyboardView::DrawKey(TVisKeyIterator &, unsigned char, unsigned char)+0x480>
         fbd2c:	e2851080 	add	r1, r5, #128	; 0x80
         fbd30:	e8910003 	ldmia	r1, {r0, r1}
         fbd34:	e0801001 	add	r1, r0, r1
         fbd38:	e33a0000 	teq	sl, #0	; 0x0
         fbd3c:	03a00001 	moveq	r0, #1	; 0x1
         fbd40:	13a00003 	movne	r0, #3	; 0x3
         fbd44:	e5850074 	str	r0, [r5, #116]	; fField116
         fbd48:	e5940042 	ldr	r0, [r4, #66]
         fbd4c:	e1a00820 	mov	r0, r0, lsr #16
         fbd50:	e594203e 	ldr	r2, [r4, #62]
         fbd54:	e1a02822 	mov	r2, r2, lsr #16
         fbd58:	e0400002 	sub	r0, r0, r2
         fbd5c:	e2800006 	add	r0, r0, #6	; 0x6
         fbd60:	e1a00800 	mov	r0, r0, lsl #16
         fbd64:	e585006c 	str	r0, [r5, #108]	; fField108
         fbd68:	e594003e 	ldr	r0, [r4, #62]
         fbd6c:	e1a00820 	mov	r0, r0, lsr #16
         fbd70:	e2400003 	sub	r0, r0, #3	; 0x3
         fbd74:	e1a00800 	mov	r0, r0, lsl #16
         fbd78:	e594203c 	ldr	r2, [r4, #60]	; fField60
         fbd7c:	e1a02842 	mov	r2, r2, asr #16
         fbd80:	e5943040 	ldr	r3, [r4, #64]
         fbd84:	e0822843 	add	r2, r2, r3, asr #16
         fbd88:	e0422001 	sub	r2, r2, r1
         fbd8c:	e0822fa2 	add	r2, r2, r2, lsr #31
         fbd90:	e5951080 	ldr	r1, [r5, #128]	; fField128
         fbd94:	e08110c2 	add	r1, r1, r2, asr #1
         fbd98:	e1a01801 	mov	r1, r1, lsl #16
         fbd9c:	e3a03000 	mov	r3, #0	; 0x0
         fbda0:	e2852064 	add	r2, r5, #100	; 0x64
         fbda4:	e92d000c 	stmdb	sp!, {r2, r3}
         fbda8:	e24dd008 	sub	sp, sp, #8	; 0x8
         fbdac:	e2852060 	add	r2, r5, #96	; 0x60
         fbdb0:	e88d0003 	stmia	sp, {r0, r1}
         fbdb4:	e1a01008 	mov	r1, r8
         fbdb8:	e1a00009 	mov	r0, r9
         fbdbc:	eb694a54 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
         fbdc0:	e28dd010 	add	sp, sp, #16	; 0x10
         fbdc4:	e28dd004 	add	sp, sp, #4	; 0x4
         fbdc8:	e28d0044 	add	r0, sp, #68	; 0x44
         fbdcc:	e3a01000 	mov	r1, #0	; 0x0
         fbdd0:	eb6b18ca 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         fbdd4:	e59d004c 	ldr	r0, [sp, #76]
         fbdd8:	eb6b1cf7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fbddc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)
 * Address: 000fbde0
 */
TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char) {
    /*
         fbde0:	e1a0c00d 	mov	ip, sp
         fbde4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         fbde8:	e24cb004 	sub	fp, ip, #4	; 0x4
         fbdec:	e1a04000 	mov	r4, r0
         fbdf0:	e20220ff 	and	r2, r2, #255	; 0xff
         fbdf4:	e20370ff 	and	r7, r3, #255	; 0xff
         fbdf8:	e24dd010 	sub	sp, sp, #16	; 0x10
         fbdfc:	e2810034 	add	r0, r1, #52	; 0x34
         fbe00:	e28de008 	add	lr, sp, #8	; 0x8
         fbe04:	e8901008 	ldmia	r0, {r3, ip}
         fbe08:	e88e1008 	stmia	lr, {r3, ip}
         fbe0c:	e3a03007 	mov	r3, #7	; 0x7
         fbe10:	e5910008 	ldr	r0, [r1, #8]
         fbe14:	e0033a20 	and	r3, r3, r0, lsr #20
         fbe18:	e3a0c002 	mov	ip, #2	; 0x2
         fbe1c:	e08c5083 	add	r5, ip, r3, lsl #1
         fbe20:	e3a0300f 	mov	r3, #15	; 0xf
         fbe24:	e0033820 	and	r3, r3, r0, lsr #16
         fbe28:	e21360ff 	ands	r6, r3, #255	; 0xff
         fbe2c:	e3a03003 	mov	r3, #3	; 0x3
         fbe30:	e0030ba0 	and	r0, r3, r0, lsr #23
         fbe34:	0a000022 	beq	fbec4 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0xe4>
         fbe38:	e28de008 	add	lr, sp, #8	; 0x8
         fbe3c:	e89e1100 	ldmia	lr, {r8, ip}
         fbe40:	e88d1100 	stmia	sp, {r8, ip}
         fbe44:	e5913008 	ldr	r3, [r1, #8]
         fbe48:	e3130702 	tst	r3, #524288	; 0x80000
         fbe4c:	0a000004 	beq	fbe64 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0x84>
         fbe50:	e59d3008 	ldr	r3, [sp, #8]
         fbe54:	e2433064 	sub	r3, r3, #100	; 0x64
         fbe58:	e5cd300b 	strb	r3, [sp, #11]
         fbe5c:	e1a03443 	mov	r3, r3, asr #8
         fbe60:	e5cd300a 	strb	r3, [sp, #10]
         fbe64:	e5913008 	ldr	r3, [r1, #8]
         fbe68:	e3130802 	tst	r3, #131072	; 0x20000
         fbe6c:	0a000004 	beq	fbe84 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0xa4>
         fbe70:	e59d300a 	ldr	r3, [sp, #10]
         fbe74:	e2433064 	sub	r3, r3, #100	; 0x64
         fbe78:	e5cd3009 	strb	r3, [sp, #9]
         fbe7c:	e1a03443 	mov	r3, r3, asr #8
         fbe80:	e5cd3008 	strb	r3, [sp, #8]
         fbe84:	e5913008 	ldr	r3, [r1, #8]
         fbe88:	e3130801 	tst	r3, #65536	; 0x10000
         fbe8c:	0a000004 	beq	fbea4 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0xc4>
         fbe90:	e59d300c 	ldr	r3, [sp, #12]	; fField12
         fbe94:	e2833064 	add	r3, r3, #100	; 0x64
         fbe98:	e5cd300f 	strb	r3, [sp, #15]
         fbe9c:	e1a03443 	mov	r3, r3, asr #8
         fbea0:	e5cd300e 	strb	r3, [sp, #14]
         fbea4:	e5911008 	ldr	r1, [r1, #8]
         fbea8:	e3110701 	tst	r1, #262144	; 0x40000
         fbeac:	0a000004 	beq	fbec4 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0xe4>
         fbeb0:	e59d100e 	ldr	r1, [sp, #14]
         fbeb4:	e2811064 	add	r1, r1, #100	; 0x64
         fbeb8:	e5cd100d 	strb	r1, [sp, #13]
         fbebc:	e1a01441 	mov	r1, r1, asr #8
         fbec0:	e5cd100c 	strb	r1, [sp, #12]	; fField12
         fbec4:	e3320000 	teq	r2, #0	; 0x0
         fbec8:	0a00000c 	beq	fbf00 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0x120>
         fbecc:	e3360000 	teq	r6, #0	; 0x0
         fbed0:	11a0000d 	movne	r0, sp
         fbed4:	1b6945ef 	blne	1b4d698 <$ClipRect(Rect *)>
         fbed8:	e3350000 	teq	r5, #0	; 0x0
         fbedc:	0a000004 	beq	fbef4 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0x114>
         fbee0:	e1a02005 	mov	r2, r5
         fbee4:	e1a01005 	mov	r1, r5
         fbee8:	e28d0008 	add	r0, sp, #8	; 0x8
         fbeec:	eb695a89 	bl	1b52918 <$PaintRoundRect__FP4RectlT2>
         fbef0:	ea000022 	b	fbf80 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0x1a0>
         fbef4:	e28d0008 	add	r0, sp, #8	; 0x8
         fbef8:	eb695a84 	bl	1b52910 <$PaintRect(Rect *)>
         fbefc:	ea00001f 	b	fbf80 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0x1a0>
         fbf00:	e3300000 	teq	r0, #0	; 0x0
         fbf04:	0a00001d 	beq	fbf80 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0x1a0>
         fbf08:	e1a01000 	mov	r1, r0
         fbf0c:	eb695a85 	bl	1b52928 <$PenSize__FlT1>
         fbf10:	e3360000 	teq	r6, #0	; 0x0
         fbf14:	11a0000d 	movne	r0, sp
         fbf18:	1b6945de 	blne	1b4d698 <$ClipRect(Rect *)>
         fbf1c:	e3350000 	teq	r5, #0	; 0x0
         fbf20:	0a00000d 	beq	fbf5c <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0x17c>
         fbf24:	e3370000 	teq	r7, #0	; 0x0
         fbf28:	05b4000c 	ldreq	r0, [r4, #12]!	; fField12
         fbf2c:	0200000f 	andeq	r0, r0, #15	; 0xf
         fbf30:	03300001 	teqeq	r0, #1	; 0x1
         fbf34:	0a000003 	beq	fbf48 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0x168>
         fbf38:	e1a02005 	mov	r2, r5
         fbf3c:	e1a01005 	mov	r1, r5
         fbf40:	e28d0008 	add	r0, sp, #8	; 0x8
         fbf44:	eb694a02 	bl	1b4e754 <$EraseRoundRect__FP4RectlT2>
         fbf48:	e1a02005 	mov	r2, r5
         fbf4c:	e1a01005 	mov	r1, r5
         fbf50:	e28d0008 	add	r0, sp, #8	; 0x8
         fbf54:	eb694e12 	bl	1b4f7a4 <$FrameRoundRect__FP4RectlT2>
         fbf58:	ea000007 	b	fbf7c <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0x19c>
         fbf5c:	e3370000 	teq	r7, #0	; 0x0
         fbf60:	05b4000c 	ldreq	r0, [r4, #12]!	; fField12
         fbf64:	0200000f 	andeq	r0, r0, #15	; 0xf
         fbf68:	03300001 	teqeq	r0, #1	; 0x1
         fbf6c:	128d0008 	addne	r0, sp, #8	; 0x8
         fbf70:	1b6949f5 	blne	1b4e74c <$EraseRect(Rect *)>
         fbf74:	e28d0008 	add	r0, sp, #8	; 0x8
         fbf78:	eb694e07 	bl	1b4f79c <$FrameRect(Rect *)>
         fbf7c:	eb695a68 	bl	1b52924 <$PenNormal(void)>
         fbf80:	e3360000 	teq	r6, #0	; 0x0
         fbf84:	0a000011 	beq	fbfd0 <TKeyboardView::DrawKeyFrame(TVisKeyIterator &, unsigned char, unsigned char)+0x1f0>
         fbf88:	e24dd008 	sub	sp, sp, #8	; 0x8
         fbf8c:	e3a00001 	mov	r0, #1	; 0x1
         fbf90:	e2400902 	sub	r0, r0, #32768	; 0x8000
         fbf94:	e3a02902 	mov	r2, #32768	; 0x8000
         fbf98:	e2422002 	sub	r2, r2, #2	; 0x2
         fbf9c:	e5cd0001 	strb	r0, [sp, #1]
         fbfa0:	e3e0107f 	mvn	r1, #127	; 0x7f
         fbfa4:	e5cd1000 	strb	r1, [sp]
         fbfa8:	e5cd0003 	strb	r0, [sp, #3]
         fbfac:	e5cd1002 	strb	r1, [sp, #2]
         fbfb0:	e5cd2005 	strb	r2, [sp, #5]
         fbfb4:	e3a0007f 	mov	r0, #127	; 0x7f
         fbfb8:	e5cd0004 	strb	r0, [sp, #4]
         fbfbc:	e5cd2007 	strb	r2, [sp, #7]
         fbfc0:	e5cd0006 	strb	r0, [sp, #6]
         fbfc4:	e1a0000d 	mov	r0, sp
         fbfc8:	eb6945b2 	bl	1b4d698 <$ClipRect(Rect *)>
         fbfcc:	e28dd008 	add	sp, sp, #8	; 0x8
         fbfd0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardView::RealDraw(TRect &)
 * Address: 000fbfd4
 */
TKeyboardView::RealDraw(TRect &) {
    /*
         fbfd4:	e1a0c00d 	mov	ip, sp
         fbfd8:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         fbfdc:	e24cb004 	sub	fp, ip, #4	; 0x4
         fbfe0:	e1a04000 	mov	r4, r0
         fbfe4:	e24dd00c 	sub	sp, sp, #12	; 0xc
         fbfe8:	e5900024 	ldr	r0, [r0, #36]	; fField36
         fbfec:	e5900000 	ldr	r0, [r0]
         fbff0:	eb6b1855 	bl	1bc214c <$AllocateRefHandle(long)>
         fbff4:	e58d0000 	str	r0, [sp]
         fbff8:	e3a00002 	mov	r0, #2	; 0x2
         fbffc:	eb6b1852 	bl	1bc214c <$AllocateRefHandle(long)>
         fc000:	e1a07000 	mov	r7, r0
         fc004:	e3a00002 	mov	r0, #2	; 0x2
         fc008:	eb6b184f 	bl	1bc214c <$AllocateRefHandle(long)>
         fc00c:	e1a05000 	mov	r5, r0
         fc010:	e3a06000 	mov	r6, #0	; 0x0
         fc014:	e59f10d0 	ldr	r1, [pc, #d0]	; fc0ec <TKeyboardView::RealDraw(TRect &)+0x118>
         fc018:	e1a0000d 	mov	r0, sp
         fc01c:	e3a02000 	mov	r2, #0	; 0x0
         fc020:	eb6b2090 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         fc024:	e5870000 	str	r0, [r7]
         fc028:	e1a01000 	mov	r1, r0
         fc02c:	e3300002 	teq	r0, #2	; 0x2
         fc030:	0a000002 	beq	fc040 <TKeyboardView::RealDraw(TRect &)+0x6c>
         fc034:	e1a00001 	mov	r0, r1
         fc038:	eb6b249b 	bl	1bc52ac <$Length(long)>
         fc03c:	e1a06000 	mov	r6, r0
         fc040:	e59f10a8 	ldr	r1, [pc, #a8]	; fc0f0 <TKeyboardView::RealDraw(TRect &)+0x11c>
         fc044:	e1a0000d 	mov	r0, sp
         fc048:	e3a02000 	mov	r2, #0	; 0x0
         fc04c:	eb6b2085 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         fc050:	e5850000 	str	r0, [r5]
         fc054:	e1a01000 	mov	r1, r0
         fc058:	e3300002 	teq	r0, #2	; 0x2
         fc05c:	03a00000 	moveq	r0, #0	; 0x0
         fc060:	0a000004 	beq	fc078 <TKeyboardView::RealDraw(TRect &)+0xa4>
         fc064:	e1a00001 	mov	r0, r1
         fc068:	e3110003 	tst	r1, #3	; 0x3
         fc06c:	01a00140 	moveq	r0, r0, asr #2
         fc070:	0a000000 	beq	fc078 <TKeyboardView::RealDraw(TRect &)+0xa4>
         fc074:	eb6b1828 	bl	1bc211c <$_RINTError(long)>
         fc078:	e5840030 	str	r0, [r4, #48]	; fField48
         fc07c:	eb695a28 	bl	1b52924 <$PenNormal(void)>
         fc080:	e24dd078 	sub	sp, sp, #120	; 0x78
         fc084:	e5940010 	ldr	r0, [r4, #16]
         fc088:	e2842088 	add	r2, r4, #136	; 0x88
         fc08c:	e2841038 	add	r1, r4, #56	; 0x38
         fc090:	e58d0000 	str	r0, [sp]
         fc094:	e28d0004 	add	r0, sp, #4	; 0x4
         fc098:	e49d3004 	ldr	r3, [sp], #4
         fc09c:	eb6630d9 	bl	1a88408 <TVisKeyIterator::$__ct(RefVar const &, TRect &, TPoint)>
         fc0a0:	e28d1044 	add	r1, sp, #68	; 0x44
         fc0a4:	e58d107c 	str	r1, [sp, #124]	; fField124
         fc0a8:	e28d0034 	add	r0, sp, #52	; 0x34
         fc0ac:	e58d0078 	str	r0, [sp, #120]	; fField120
         fc0b0:	e5dd004c 	ldrb	r0, [sp, #76]
         fc0b4:	e3300000 	teq	r0, #0	; 0x0
         fc0b8:	0a00000d 	beq	fc0f4 <TKeyboardView::RealDraw(TRect &)+0x120>
         fc0bc:	e59d0050 	ldr	r0, [sp, #80]
         fc0c0:	e59d1014 	ldr	r1, [sp, #20]
         fc0c4:	e1310000 	teq	r1, r0
         fc0c8:	1a000009 	bne	fc0f4 <TKeyboardView::RealDraw(TRect &)+0x120>
         fc0cc:	e59d007c 	ldr	r0, [sp, #124]	; fField124
         fc0d0:	e51b102c 	ldr	r1, [fp, -#44]
         fc0d4:	eb667b10 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
         fc0d8:	e3300000 	teq	r0, #0	; 0x0
         fc0dc:	1a000004 	bne	fc0f4 <TKeyboardView::RealDraw(TRect &)+0x120>
         fc0e0:	e1a0000d 	mov	r0, sp
         fc0e4:	eb669c2f 	bl	1aa31a8 <TVisKeyIterator::$SkipToStartOfNextRow(void)>
         fc0e8:	ea00002f 	b	fc1ac <TKeyboardView::RealDraw(TRect &)+0x1d8>
         fc0ec:	006833a8 	rsbeq	r3, r8, r8, lsr #7
         fc0f0:	00683380 	rsbeq	r3, r8, r0, lsl #7
         fc0f4:	e59d0078 	ldr	r0, [sp, #120]	; fField120
         fc0f8:	e51b102c 	ldr	r1, [fp, -#44]
         fc0fc:	eb667b06 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
         fc100:	e3300000 	teq	r0, #0	; 0x0
         fc104:	0a000026 	beq	fc1a4 <TKeyboardView::RealDraw(TRect &)+0x1d0>
         fc108:	e59d0008 	ldr	r0, [sp, #8]
         fc10c:	e3100202 	tst	r0, #536870912	; 0x20000000
         fc110:	1a000023 	bne	fc1a4 <TKeyboardView::RealDraw(TRect &)+0x1d0>
         fc114:	e3a02000 	mov	r2, #0	; 0x0
         fc118:	e3560000 	cmp	r6, #0	; 0x0
         fc11c:	e52d2004 	str	r2, [sp, -#4]!
         fc120:	da000019 	ble	fc18c <TKeyboardView::RealDraw(TRect &)+0x1b8>
         fc124:	e28d1004 	add	r1, sp, #4	; 0x4
         fc128:	e1a00004 	mov	r0, r4
         fc12c:	eb666a79 	bl	1a96b18 <TKeyboardView::$GetResultRef(TRawKeyIterator &)>
         fc130:	e3a08000 	mov	r8, #0	; 0x0
         fc134:	e3560000 	cmp	r6, #0	; 0x0
         fc138:	e5850000 	str	r0, [r5]
         fc13c:	da000012 	ble	fc18c <TKeyboardView::RealDraw(TRect &)+0x1b8>
         fc140:	e1a01008 	mov	r1, r8
         fc144:	e5970000 	ldr	r0, [r7]
         fc148:	eb6b2041 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         fc14c:	eb6b17fe 	bl	1bc214c <$AllocateRefHandle(long)>
         fc150:	e1a09000 	mov	r9, r0
         fc154:	e5951000 	ldr	r1, [r5]
         fc158:	e5900000 	ldr	r0, [r0]
         fc15c:	eb6b2033 	bl	1bc4230 <$EQRef__FlT1>
         fc160:	e1b0a000 	movs	sl, r0
         fc164:	13a0a001 	movne	sl, #1	; 0x1
         fc168:	e1a00009 	mov	r0, r9
         fc16c:	eb6b1c12 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc170:	e33a0000 	teq	sl, #0	; 0x0
         fc174:	13a02001 	movne	r2, #1	; 0x1
         fc178:	158d2000 	strne	r2, [sp]
         fc17c:	1a000002 	bne	fc18c <TKeyboardView::RealDraw(TRect &)+0x1b8>
         fc180:	e2888001 	add	r8, r8, #1	; 0x1
         fc184:	e1580006 	cmp	r8, r6
         fc188:	baffffec 	blt	fc140 <TKeyboardView::RealDraw(TRect &)+0x16c>
         fc18c:	e59d2000 	ldr	r2, [sp]
         fc190:	e28d1004 	add	r1, sp, #4	; 0x4
         fc194:	e1a00004 	mov	r0, r4
         fc198:	e3a03000 	mov	r3, #0	; 0x0
         fc19c:	eb6659dc 	bl	1a92914 <TKeyboardView::$DrawKey(TVisKeyIterator &, unsigned char, unsigned char)>
         fc1a0:	e28dd004 	add	sp, sp, #4	; 0x4
         fc1a4:	e1a0000d 	mov	r0, sp
         fc1a8:	eb66831b 	bl	1a9ce1c <TVisKeyIterator::$Next(void)>
         fc1ac:	e3300000 	teq	r0, #0	; 0x0
         fc1b0:	0affffbe 	beq	fc0b0 <TKeyboardView::RealDraw(TRect &)+0xdc>
         fc1b4:	eb6959da 	bl	1b52924 <$PenNormal(void)>
         fc1b8:	e59d0010 	ldr	r0, [sp, #16]
         fc1bc:	eb6b1bfe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc1c0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         fc1c4:	eb6b1bfc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc1c8:	e59d0004 	ldr	r0, [sp, #4]
         fc1cc:	eb6b1bfa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc1d0:	e59d0000 	ldr	r0, [sp]
         fc1d4:	eb6b1bf8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc1d8:	e28dd074 	add	sp, sp, #116	; 0x74
         fc1dc:	e1a00005 	mov	r0, r5
         fc1e0:	eb6b1bf5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc1e4:	e1a00007 	mov	r0, r7
         fc1e8:	eb6b1bf3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc1ec:	e59d0000 	ldr	r0, [sp]
         fc1f0:	eb6b1bf1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc1f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardView::PostKeypressCommands(RefVar const &)
 * Address: 000fc220
 */
TKeyboardView::PostKeypressCommands(RefVar const &) {
    /*
         fc220:	e1a0c00d 	mov	ip, sp
         fc224:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         fc228:	e24cb004 	sub	fp, ip, #4	; 0x4
         fc22c:	e1a05000 	mov	r5, r0
         fc230:	e1a00001 	mov	r0, r1
         fc234:	e24dd084 	sub	sp, sp, #132	; 0x84
         fc238:	e28d4004 	add	r4, sp, #4	; 0x4
         fc23c:	e1a0200d 	mov	r2, sp
         fc240:	e28d1004 	add	r1, sp, #4	; 0x4
         fc244:	e3a0303f 	mov	r3, #63	; 0x3f
         fc248:	eb669be6 	bl	1aa31e8 <$StringObject(RefVar const &, unsigned short *, long &, long)>
         fc24c:	e59d0004 	ldr	r0, [sp, #4]
         fc250:	e1b00820 	movs	r0, r0, lsr #16
         fc254:	0a000027 	beq	fc2f8 <TKeyboardView::PostKeypressCommands(RefVar const &)+0xd8>
         fc258:	e2859024 	add	r9, r5, #36	; 0x24
         fc25c:	e285703c 	add	r7, r5, #60	; 0x3c
         fc260:	e3a0a020 	mov	sl, #32	; 0x20
         fc264:	e59f5090 	ldr	r5, [pc, #90]	; fc2fc <TKeyboardView::PostKeypressCommands(RefVar const &)+0xdc>
         fc268:	e1a00009 	mov	r0, r9
         fc26c:	e1a01007 	mov	r1, r7
         fc270:	ebffffe0 	bl	fc1f8 <GetKeyReceiver__FRC6RefVarT1>
         fc274:	e1b06000 	movs	r6, r0
         fc278:	0a00001e 	beq	fc2f8 <TKeyboardView::PostKeypressCommands(RefVar const &)+0xd8>
         fc27c:	e5942000 	ldr	r2, [r4]
         fc280:	e1a02822 	mov	r2, r2, lsr #16
         fc284:	e24dd004 	sub	sp, sp, #4	; 0x4
         fc288:	e1a01006 	mov	r1, r6
         fc28c:	e1a0000a 	mov	r0, sl
         fc290:	e5958000 	ldr	r8, [r5]
         fc294:	eb66a829 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         fc298:	eb6b17ab 	bl	1bc214c <$AllocateRefHandle(long)>
         fc29c:	e58d0000 	str	r0, [sp]
         fc2a0:	e1a0100d 	mov	r1, sp
         fc2a4:	e1a00008 	mov	r0, r8
         fc2a8:	eb665162 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         fc2ac:	e59d0000 	ldr	r0, [sp]
         fc2b0:	eb6b1bc1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc2b4:	e5942000 	ldr	r2, [r4]
         fc2b8:	e1a02822 	mov	r2, r2, lsr #16
         fc2bc:	e1a01006 	mov	r1, r6
         fc2c0:	e3a0001f 	mov	r0, #31	; 0x1f
         fc2c4:	e5958000 	ldr	r8, [r5]
         fc2c8:	eb66a81c 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         fc2cc:	eb6b179e 	bl	1bc214c <$AllocateRefHandle(long)>
         fc2d0:	e58d0000 	str	r0, [sp]
         fc2d4:	e1a0100d 	mov	r1, sp
         fc2d8:	e1a00008 	mov	r0, r8
         fc2dc:	eb665155 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         fc2e0:	e59d0000 	ldr	r0, [sp]
         fc2e4:	eb6b1bb4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc2e8:	e28dd004 	add	sp, sp, #4	; 0x4
         fc2ec:	e5b40002 	ldr	r0, [r4, #2]!
         fc2f0:	e1b00820 	movs	r0, r0, lsr #16
         fc2f4:	1affffdb 	bne	fc268 <TKeyboardView::PostKeypressCommands(RefVar const &)+0x48>
         fc2f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         fc2fc:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)
 * Address: 000fc300
 */
TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &) {
    /*
         fc300:	e1a0c00d 	mov	ip, sp
         fc304:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         fc308:	e24cb004 	sub	fp, ip, #4	; 0x4
         fc30c:	e1a04000 	mov	r4, r0
         fc310:	e1a05002 	mov	r5, r2
         fc314:	e24dd00c 	sub	sp, sp, #12	; 0xc
         fc318:	e3a0a000 	mov	sl, #0	; 0x0
         fc31c:	e3a00000 	mov	r0, #0	; 0x0
         fc320:	eb675982 	bl	1ad2930 <$Modifiers(unsigned char)>
         fc324:	e58d0000 	str	r0, [sp]
         fc328:	e5950000 	ldr	r0, [r5]
         fc32c:	e5900000 	ldr	r0, [r0]
         fc330:	e3100003 	tst	r0, #3	; 0x3
         fc334:	e59f10d4 	ldr	r1, [pc, #d4]	; fc410 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x110>
         fc338:	e58d1008 	str	r1, [sp, #8]
         fc33c:	e59f80d0 	ldr	r8, [pc, #d0]	; fc414 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x114>
         fc340:	e2847024 	add	r7, r4, #36	; 0x24
         fc344:	1a0000ee 	bne	fc704 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x404>
         fc348:	e5d40034 	ldrb	r0, [r4, #52]	; fField52
         fc34c:	e3300000 	teq	r0, #0	; 0x0
         fc350:	0a0000eb 	beq	fc704 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x404>
         fc354:	e24dd014 	sub	sp, sp, #20	; 0x14
         fc358:	e3a01000 	mov	r1, #0	; 0x0
         fc35c:	e3a0003a 	mov	r0, #58	; 0x3a
         fc360:	eb675564 	bl	1ad18f8 <$KeyDown(unsigned long, unsigned char)>
         fc364:	e3a01000 	mov	r1, #0	; 0x0
         fc368:	e58d0010 	str	r0, [sp, #16]
         fc36c:	e3a00037 	mov	r0, #55	; 0x37
         fc370:	eb675560 	bl	1ad18f8 <$KeyDown(unsigned long, unsigned char)>
         fc374:	e3a01000 	mov	r1, #0	; 0x0
         fc378:	e58d000c 	str	r0, [sp, #12]	; fField12
         fc37c:	e3a0003b 	mov	r0, #59	; 0x3b
         fc380:	eb67555c 	bl	1ad18f8 <$KeyDown(unsigned long, unsigned char)>
         fc384:	e3a01000 	mov	r1, #0	; 0x0
         fc388:	e58d0008 	str	r0, [sp, #8]
         fc38c:	e3a00038 	mov	r0, #56	; 0x38
         fc390:	eb675558 	bl	1ad18f8 <$KeyDown(unsigned long, unsigned char)>
         fc394:	e1a09000 	mov	r9, r0
         fc398:	e3a01000 	mov	r1, #0	; 0x0
         fc39c:	e3a00039 	mov	r0, #57	; 0x39
         fc3a0:	eb675554 	bl	1ad18f8 <$KeyDown(unsigned long, unsigned char)>
         fc3a4:	e58d0004 	str	r0, [sp, #4]
         fc3a8:	e5950000 	ldr	r0, [r5]
         fc3ac:	e5900000 	ldr	r0, [r0]
         fc3b0:	e3100003 	tst	r0, #3	; 0x3
         fc3b4:	01a00140 	moveq	r0, r0, asr #2
         fc3b8:	0a000000 	beq	fc3c0 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0xc0>
         fc3bc:	eb6b1756 	bl	1bc211c <$_RINTError(long)>
         fc3c0:	e1a06000 	mov	r6, r0
         fc3c4:	e59f004c 	ldr	r0, [pc, #4c]	; fc418 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x118>
         fc3c8:	e58d0018 	str	r0, [sp, #24]
         fc3cc:	e5900000 	ldr	r0, [r0]
         fc3d0:	e3a05000 	mov	r5, #0	; 0x0
         fc3d4:	e58d0000 	str	r0, [sp]
         fc3d8:	e2460037 	sub	r0, r6, #55	; 0x37
         fc3dc:	e3500004 	cmp	r0, #4	; 0x4
         fc3e0:	908ff100 	addls	pc, pc, r0, lsl #2
         fc3e4:	ea000036 	b	fc4c4 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x1c4>
         fc3e8:	ea00002e 	b	fc4a8 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x1a8>
         fc3ec:	ea00000a 	b	fc41c <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x11c>
         fc3f0:	ea000016 	b	fc450 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x150>
         fc3f4:	ea000024 	b	fc48c <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x18c>
         fc3f8:	e59d0008 	ldr	r0, [sp, #8]
         fc3fc:	e3300000 	teq	r0, #0	; 0x0
         fc400:	13a01000 	movne	r1, #0	; 0x0
         fc404:	03a01001 	moveq	r1, #1	; 0x1
         fc408:	e1a02004 	mov	r2, r4
         fc40c:	ea000051 	b	fc558 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x258>
         fc410:	006833e0 	rsbeq	r3, r8, r0, ror #7
         fc414:	0c101934 	ldceq	9, cr1, [r0], -#208
         fc418:	0c1054dc 	ldceq	4, cr5, [r0], -#880
         fc41c:	e3390000 	teq	r9, #0	; 0x0
         fc420:	13a01000 	movne	r1, #0	; 0x0
         fc424:	03a01001 	moveq	r1, #1	; 0x1
         fc428:	e1a02004 	mov	r2, r4
         fc42c:	e3a00038 	mov	r0, #56	; 0x38
         fc430:	eb675531 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
         fc434:	e59d0004 	ldr	r0, [sp, #4]
         fc438:	e3300000 	teq	r0, #0	; 0x0
         fc43c:	11a02004 	movne	r2, r4
         fc440:	13a01000 	movne	r1, #0	; 0x0
         fc444:	13a00039 	movne	r0, #57	; 0x39
         fc448:	1a000043 	bne	fc55c <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x25c>
         fc44c:	ea00000c 	b	fc484 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x184>
         fc450:	e1a02004 	mov	r2, r4
         fc454:	e3a01001 	mov	r1, #1	; 0x1
         fc458:	e3a00039 	mov	r0, #57	; 0x39
         fc45c:	eb675526 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
         fc460:	e1a02004 	mov	r2, r4
         fc464:	e3a01000 	mov	r1, #0	; 0x0
         fc468:	e3a00039 	mov	r0, #57	; 0x39
         fc46c:	eb675522 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
         fc470:	e3390000 	teq	r9, #0	; 0x0
         fc474:	11a02004 	movne	r2, r4
         fc478:	13a01000 	movne	r1, #0	; 0x0
         fc47c:	13a00038 	movne	r0, #56	; 0x38
         fc480:	1a000035 	bne	fc55c <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x25c>
         fc484:	e3a05001 	mov	r5, #1	; 0x1
         fc488:	ea000035 	b	fc564 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x264>
         fc48c:	e59d0010 	ldr	r0, [sp, #16]
         fc490:	e3300000 	teq	r0, #0	; 0x0
         fc494:	13a01000 	movne	r1, #0	; 0x0
         fc498:	03a01001 	moveq	r1, #1	; 0x1
         fc49c:	e1a02004 	mov	r2, r4
         fc4a0:	e3a0003a 	mov	r0, #58	; 0x3a
         fc4a4:	ea00002c 	b	fc55c <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x25c>
         fc4a8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         fc4ac:	e3300000 	teq	r0, #0	; 0x0
         fc4b0:	13a01000 	movne	r1, #0	; 0x0
         fc4b4:	03a01001 	moveq	r1, #1	; 0x1
         fc4b8:	e1a02004 	mov	r2, r4
         fc4bc:	e3a00037 	mov	r0, #55	; 0x37
         fc4c0:	ea000025 	b	fc55c <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x25c>
         fc4c4:	e1a02004 	mov	r2, r4
         fc4c8:	e1a00006 	mov	r0, r6
         fc4cc:	e3a01001 	mov	r1, #1	; 0x1
         fc4d0:	eb675509 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
         fc4d4:	e1a0a000 	mov	sl, r0
         fc4d8:	e1a02004 	mov	r2, r4
         fc4dc:	e1a00006 	mov	r0, r6
         fc4e0:	e3a01000 	mov	r1, #0	; 0x0
         fc4e4:	eb675504 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
         fc4e8:	e3390000 	teq	r9, #0	; 0x0
         fc4ec:	0a000004 	beq	fc504 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x204>
         fc4f0:	e1a02004 	mov	r2, r4
         fc4f4:	e3a01000 	mov	r1, #0	; 0x0
         fc4f8:	e3a00038 	mov	r0, #56	; 0x38
         fc4fc:	eb6754fe 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
         fc500:	e3a05001 	mov	r5, #1	; 0x1
         fc504:	e59d0010 	ldr	r0, [sp, #16]
         fc508:	e3300000 	teq	r0, #0	; 0x0
         fc50c:	0a000004 	beq	fc524 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x224>
         fc510:	e1a02004 	mov	r2, r4
         fc514:	e3a01000 	mov	r1, #0	; 0x0
         fc518:	e3a0003a 	mov	r0, #58	; 0x3a
         fc51c:	eb6754f6 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
         fc520:	e3a05001 	mov	r5, #1	; 0x1
         fc524:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         fc528:	e3300000 	teq	r0, #0	; 0x0
         fc52c:	0a000004 	beq	fc544 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x244>
         fc530:	e1a02004 	mov	r2, r4
         fc534:	e3a01000 	mov	r1, #0	; 0x0
         fc538:	e3a00037 	mov	r0, #55	; 0x37
         fc53c:	eb6754ee 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
         fc540:	e3a05001 	mov	r5, #1	; 0x1
         fc544:	e59d0008 	ldr	r0, [sp, #8]
         fc548:	e3300000 	teq	r0, #0	; 0x0
         fc54c:	0a000004 	beq	fc564 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x264>
         fc550:	e1a02004 	mov	r2, r4
         fc554:	e3a01000 	mov	r1, #0	; 0x0
         fc558:	e3a0003b 	mov	r0, #59	; 0x3b
         fc55c:	eb6754e6 	bl	1ad18fc <$KeyIn(unsigned long, unsigned char, TView *)>
         fc560:	eaffffc7 	b	fc484 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x184>
         fc564:	e59d0018 	ldr	r0, [sp, #24]
         fc568:	e5900000 	ldr	r0, [r0]
         fc56c:	e59d1000 	ldr	r1, [sp]
         fc570:	e1300001 	teq	r0, r1
         fc574:	03350000 	teqeq	r5, #0	; 0x0
         fc578:	0a000007 	beq	fc59c <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x29c>
         fc57c:	e1a00004 	mov	r0, r4
         fc580:	e3a01000 	mov	r1, #0	; 0x0
         fc584:	e5942000 	ldr	r2, [r4]
         fc588:	e1a0e00f 	mov	lr, pc
         fc58c:	e282f054 	add	pc, r2, #84	; 0x54
         fc590:	e3a01000 	mov	r1, #0	; 0x0
         fc594:	e5980000 	ldr	r0, [r8]
         fc598:	eb66a341 	bl	1aa52a4 <TRootView::$Update(TRect *)>
         fc59c:	e33a0000 	teq	sl, #0	; 0x0
         fc5a0:	0a000054 	beq	fc6f8 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x3f8>
         fc5a4:	e24dd004 	sub	sp, sp, #4	; 0x4
         fc5a8:	e5970000 	ldr	r0, [r7]
         fc5ac:	e5900000 	ldr	r0, [r0]
         fc5b0:	eb6b16e5 	bl	1bc214c <$AllocateRefHandle(long)>
         fc5b4:	e284103c 	add	r1, r4, #60	; 0x3c
         fc5b8:	e1a07001 	mov	r7, r1
         fc5bc:	e58d0000 	str	r0, [sp]
         fc5c0:	e1a0000d 	mov	r0, sp
         fc5c4:	ebffff0b 	bl	fc1f8 <GetKeyReceiver__FRC6RefVarT1>
         fc5c8:	e1b05000 	movs	r5, r0
         fc5cc:	e24dd004 	sub	sp, sp, #4	; 0x4
         fc5d0:	0a000039 	beq	fc6bc <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x3bc>
         fc5d4:	e5d40090 	ldrb	r0, [r4, #144]	; fField144
         fc5d8:	e3300000 	teq	r0, #0	; 0x0
         fc5dc:	0a00000a 	beq	fc60c <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x30c>
         fc5e0:	e59d1024 	ldr	r1, [sp, #36]	; fField36
         fc5e4:	e28d0004 	add	r0, sp, #4	; 0x4
         fc5e8:	e3a02000 	mov	r2, #0	; 0x0
         fc5ec:	eb6b1f1d 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         fc5f0:	eb6b16d5 	bl	1bc214c <$AllocateRefHandle(long)>
         fc5f4:	e58d0000 	str	r0, [sp]
         fc5f8:	e1a0100d 	mov	r1, sp
         fc5fc:	e28d0004 	add	r0, sp, #4	; 0x4
         fc600:	eb6bd4b1 	bl	1bf18cc <$FPlaySound__FRC6RefVarT1>
         fc604:	e59d0000 	ldr	r0, [sp]
         fc608:	eb6b1aeb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc60c:	e18a0806 	orr	r0, sl, r6, lsl #16
         fc610:	e59d101c 	ldr	r1, [sp, #28]
         fc614:	e1800c81 	orr	r0, r0, r1, lsl #25
         fc618:	e3802401 	orr	r2, r0, #16777216	; 0x1000000
         fc61c:	e1a09002 	mov	r9, r2
         fc620:	e24dd004 	sub	sp, sp, #4	; 0x4
         fc624:	e59f408c 	ldr	r4, [pc, #8c]	; fc6b8 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x3b8>
         fc628:	e1a01005 	mov	r1, r5
         fc62c:	e3a00020 	mov	r0, #32	; 0x20
         fc630:	e5946000 	ldr	r6, [r4]
         fc634:	eb66a741 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         fc638:	eb6b16c3 	bl	1bc214c <$AllocateRefHandle(long)>
         fc63c:	e58d0000 	str	r0, [sp]
         fc640:	e1a0100d 	mov	r1, sp
         fc644:	e1a00006 	mov	r0, r6
         fc648:	eb66507a 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         fc64c:	e59d0000 	ldr	r0, [sp]
         fc650:	eb6b1ad9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc654:	e28dd004 	add	sp, sp, #4	; 0x4
         fc658:	e28d0004 	add	r0, sp, #4	; 0x4
         fc65c:	eb6b37be 	bl	1bca55c <$GetView(RefVar const &)>
         fc660:	e3300000 	teq	r0, #0	; 0x0
         fc664:	0a000020 	beq	fc6ec <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x3ec>
         fc668:	e1a01007 	mov	r1, r7
         fc66c:	e28d0004 	add	r0, sp, #4	; 0x4
         fc670:	ebfffee0 	bl	fc1f8 <GetKeyReceiver__FRC6RefVarT1>
         fc674:	e3300000 	teq	r0, #0	; 0x0
         fc678:	0a00001b 	beq	fc6ec <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x3ec>
         fc67c:	e24dd004 	sub	sp, sp, #4	; 0x4
         fc680:	e5944000 	ldr	r4, [r4]
         fc684:	e1a02009 	mov	r2, r9
         fc688:	e1a01000 	mov	r1, r0
         fc68c:	e3a0001f 	mov	r0, #31	; 0x1f
         fc690:	eb66a72a 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         fc694:	eb6b16ac 	bl	1bc214c <$AllocateRefHandle(long)>
         fc698:	e58d0000 	str	r0, [sp]
         fc69c:	e1a0100d 	mov	r1, sp
         fc6a0:	e1a00004 	mov	r0, r4
         fc6a4:	eb665063 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
         fc6a8:	e59d0000 	ldr	r0, [sp]
         fc6ac:	eb6b1ac2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc6b0:	e28dd004 	add	sp, sp, #4	; 0x4
         fc6b4:	ea00000c 	b	fc6ec <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x3ec>
         fc6b8:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         fc6bc:	e3a00000 	mov	r0, #0	; 0x0
         fc6c0:	eb667db5 	bl	1a9bd9c <$MakeArray(long)>
         fc6c4:	eb6b16a0 	bl	1bc214c <$AllocateRefHandle(long)>
         fc6c8:	e3a03000 	mov	r3, #0	; 0x0
         fc6cc:	e58d0000 	str	r0, [sp]
         fc6d0:	e92d0008 	stmdb	sp!, {r3}
         fc6d4:	e28d2004 	add	r2, sp, #4	; 0x4
         fc6d8:	e59f1020 	ldr	r1, [pc, #20]	; fc700 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x400>
         fc6dc:	e5980000 	ldr	r0, [r8]
         fc6e0:	eb6b3bbe 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
         fc6e4:	e5bd0004 	ldr	r0, [sp, #4]!
         fc6e8:	eb6b1ab3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc6ec:	e5bd0004 	ldr	r0, [sp, #4]!
         fc6f0:	eb6b1ab1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc6f4:	e28dd004 	add	sp, sp, #4	; 0x4
         fc6f8:	e28dd014 	add	sp, sp, #20	; 0x14
         fc6fc:	ea000013 	b	fc750 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x450>
         fc700:	006849b0 	streqh	r4, [r8], -#144	; fField144
         fc704:	e24dd004 	sub	sp, sp, #4	; 0x4
         fc708:	e5d40090 	ldrb	r0, [r4, #144]	; fField144
         fc70c:	e3300000 	teq	r0, #0	; 0x0
         fc710:	0a00000a 	beq	fc740 <TKeyboardView::HandleKeyPress(TVisKeyIterator &, RefVar const &)+0x440>
         fc714:	e1a00007 	mov	r0, r7
         fc718:	e3a02000 	mov	r2, #0	; 0x0
         fc71c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
         fc720:	eb6b1ed0 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         fc724:	eb6b1688 	bl	1bc214c <$AllocateRefHandle(long)>
         fc728:	e58d0000 	str	r0, [sp]
         fc72c:	e1a0100d 	mov	r1, sp
         fc730:	e1a00007 	mov	r0, r7
         fc734:	eb6bd464 	bl	1bf18cc <$FPlaySound__FRC6RefVarT1>
         fc738:	e59d0000 	ldr	r0, [sp]
         fc73c:	eb6b1a9e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc740:	e1a01005 	mov	r1, r5
         fc744:	e1a00004 	mov	r0, r4
         fc748:	eb6685e9 	bl	1a9def4 <TKeyboardView::$PostKeypressCommands(RefVar const &)>
         fc74c:	e28dd004 	add	sp, sp, #4	; 0x4
         fc750:	e3a01000 	mov	r1, #0	; 0x0
         fc754:	e5980000 	ldr	r0, [r8]
         fc758:	eb66a2d1 	bl	1aa52a4 <TRootView::$Update(TRect *)>
         fc75c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardView::InsideView(TPoint &)
 * Address: 000fc760
 */
TKeyboardView::InsideView(TPoint &) {
    /*
         fc760:	e1a0c00d 	mov	ip, sp
         fc764:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         fc768:	e24cb004 	sub	fp, ip, #4	; 0x4
         fc76c:	e1a04000 	mov	r4, r0
         fc770:	e1a05001 	mov	r5, r1
         fc774:	e2801010 	add	r1, r0, #16	; 0x10
         fc778:	e1a06001 	mov	r6, r1
         fc77c:	e5950000 	ldr	r0, [r5]
         fc780:	e50d0004 	str	r0, [sp, -#4]
         fc784:	eb69586c 	bl	1b5293c <$PtInRect(Point, Rect *)>
         fc788:	e1b01000 	movs	r1, r0
         fc78c:	e3a00000 	mov	r0, #0	; 0x0
         fc790:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         fc794:	e24dd078 	sub	sp, sp, #120	; 0x78
         fc798:	e5960000 	ldr	r0, [r6]
         fc79c:	e2842088 	add	r2, r4, #136	; 0x88
         fc7a0:	e2841038 	add	r1, r4, #56	; 0x38
         fc7a4:	e58d0000 	str	r0, [sp]
         fc7a8:	e28d0004 	add	r0, sp, #4	; 0x4
         fc7ac:	e49d3004 	ldr	r3, [sp], #4
         fc7b0:	eb662f14 	bl	1a88408 <TVisKeyIterator::$__ct(RefVar const &, TRect &, TPoint)>
         fc7b4:	e1a0000d 	mov	r0, sp
         fc7b8:	e5951000 	ldr	r1, [r5]
         fc7bc:	eb665c88 	bl	1a939e4 <TVisKeyIterator::$FindEnclosingKey(TPoint)>
         fc7c0:	e1a04000 	mov	r4, r0
         fc7c4:	e59d0010 	ldr	r0, [sp, #16]
         fc7c8:	eb6b1a7b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc7cc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         fc7d0:	eb6b1a79 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc7d4:	e59d0004 	ldr	r0, [sp, #4]
         fc7d8:	eb6b1a77 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc7dc:	e59d0000 	ldr	r0, [sp]
         fc7e0:	eb6b1a75 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc7e4:	e1a00004 	mov	r0, r4
         fc7e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardView::DoKey(TVisKeyIterator &)
 * Address: 000fc7ec
 */
TKeyboardView::DoKey(TVisKeyIterator &) {
    /*
         fc7ec:	e1a0c00d 	mov	ip, sp
         fc7f0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         fc7f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         fc7f8:	e1a04000 	mov	r4, r0
         fc7fc:	e1a05001 	mov	r5, r1
         fc800:	e24dd008 	sub	sp, sp, #8	; 0x8
         fc804:	eb6668c3 	bl	1a96b18 <TKeyboardView::$GetResultRef(TRawKeyIterator &)>
         fc808:	eb6b164f 	bl	1bc214c <$AllocateRefHandle(long)>
         fc80c:	e58d0004 	str	r0, [sp, #4]
         fc810:	e59f0110 	ldr	r0, [pc, #110]	; fc928 <TKeyboardView::DoKey(TVisKeyIterator &)+0x13c>
         fc814:	e3a01001 	mov	r1, #1	; 0x1
         fc818:	eb6b1646 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         fc81c:	eb6b164a 	bl	1bc214c <$AllocateRefHandle(long)>
         fc820:	e58d0000 	str	r0, [sp]
         fc824:	e59d0004 	ldr	r0, [sp, #4]
         fc828:	e3a07000 	mov	r7, #0	; 0x0
         fc82c:	e1a01007 	mov	r1, r7
         fc830:	e5902000 	ldr	r2, [r0]
         fc834:	e59d0000 	ldr	r0, [sp]
         fc838:	e5900000 	ldr	r0, [r0]
         fc83c:	eb6b26c5 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         fc840:	e24dd008 	sub	sp, sp, #8	; 0x8
         fc844:	e5940024 	ldr	r0, [r4, #36]	; fField36
         fc848:	e5900000 	ldr	r0, [r0]
         fc84c:	eb6b163e 	bl	1bc214c <$AllocateRefHandle(long)>
         fc850:	e58d0004 	str	r0, [sp, #4]
         fc854:	e1a0300d 	mov	r3, sp
         fc858:	e92d0008 	stmdb	sp!, {r3}
         fc85c:	e28d200c 	add	r2, sp, #12	; 0xc
         fc860:	e1a00004 	mov	r0, r4
         fc864:	e3a03001 	mov	r3, #1	; 0x1
         fc868:	e3a01018 	mov	r1, #24	; 0x18
         fc86c:	eb6b3b5a 	bl	1bcb5dc <TView::$RunCacheScript(long, RefVar const &, unsigned char, unsigned char *)>
         fc870:	e28dd004 	add	sp, sp, #4	; 0x4
         fc874:	eb6b1634 	bl	1bc214c <$AllocateRefHandle(long)>
         fc878:	e1a06000 	mov	r6, r0
         fc87c:	e5dd0000 	ldrb	r0, [sp]
         fc880:	e3300000 	teq	r0, #0	; 0x0
         fc884:	0a00000c 	beq	fc8bc <TKeyboardView::DoKey(TVisKeyIterator &)+0xd0>
         fc888:	e59f109c 	ldr	r1, [pc, #9c]	; fc92c <TKeyboardView::DoKey(TVisKeyIterator &)+0x140>
         fc88c:	e28d0004 	add	r0, sp, #4	; 0x4
         fc890:	e3a02000 	mov	r2, #0	; 0x0
         fc894:	eb6b1e73 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         fc898:	e3300002 	teq	r0, #2	; 0x2
         fc89c:	0a000003 	beq	fc8b0 <TKeyboardView::DoKey(TVisKeyIterator &)+0xc4>
         fc8a0:	e5960000 	ldr	r0, [r6]
         fc8a4:	e2500002 	subs	r0, r0, #2	; 0x2
         fc8a8:	13a00001 	movne	r0, #1	; 0x1
         fc8ac:	e5cd0000 	strb	r0, [sp]
         fc8b0:	e5dd0000 	ldrb	r0, [sp]
         fc8b4:	e3300000 	teq	r0, #0	; 0x0
         fc8b8:	1a000003 	bne	fc8cc <TKeyboardView::DoKey(TVisKeyIterator &)+0xe0>
         fc8bc:	e28d200c 	add	r2, sp, #12	; 0xc
         fc8c0:	e1a01005 	mov	r1, r5
         fc8c4:	e1a00004 	mov	r0, r4
         fc8c8:	eb666cbe 	bl	1a97bc8 <TKeyboardView::$HandleKeyPress(TVisKeyIterator &, RefVar const &)>
         fc8cc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         fc8d0:	e5900000 	ldr	r0, [r0]
         fc8d4:	e2101003 	ands	r1, r0, #3	; 0x3
         fc8d8:	1a000014 	bne	fc930 <TKeyboardView::DoKey(TVisKeyIterator &)+0x144>
         fc8dc:	e5d42034 	ldrb	r2, [r4, #52]	; fField52
         fc8e0:	e3320000 	teq	r2, #0	; 0x0
         fc8e4:	0a000011 	beq	fc930 <TKeyboardView::DoKey(TVisKeyIterator &)+0x144>
         fc8e8:	e3310000 	teq	r1, #0	; 0x0
         fc8ec:	01a00140 	moveq	r0, r0, asr #2
         fc8f0:	0a000000 	beq	fc8f8 <TKeyboardView::DoKey(TVisKeyIterator &)+0x10c>
         fc8f4:	eb6b1608 	bl	1bc211c <$_RINTError(long)>
         fc8f8:	eb67aab7 	bl	1ae73dc <$IsModifierKeyCode(unsigned long)>
         fc8fc:	e1a04000 	mov	r4, r0
         fc900:	e1a00006 	mov	r0, r6
         fc904:	eb6b1a2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc908:	e59d0004 	ldr	r0, [sp, #4]
         fc90c:	eb6b1a2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc910:	e59d0008 	ldr	r0, [sp, #8]
         fc914:	eb6b1a28 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc918:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         fc91c:	eb6b1a26 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc920:	e1a00004 	mov	r0, r4
         fc924:	ea00000a 	b	fc954 <TKeyboardView::DoKey(TVisKeyIterator &)+0x168>
         fc928:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         fc92c:	006839f8 	streqd	r3, [r8], -#152
         fc930:	e1a00006 	mov	r0, r6
         fc934:	eb6b1a20 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc938:	e59d0004 	ldr	r0, [sp, #4]
         fc93c:	eb6b1a1e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc940:	e59d0008 	ldr	r0, [sp, #8]
         fc944:	eb6b1a1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc948:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         fc94c:	eb6b1a1a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fc950:	e1a00007 	mov	r0, r7
         fc954:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)
 * Address: 000fc958
 */
TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *) {
    /*
         fc958:	e1a0c00d 	mov	ip, sp
         fc95c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         fc960:	e24cb004 	sub	fp, ip, #4	; 0x4
         fc964:	e1a04000 	mov	r4, r0
         fc968:	e1a05001 	mov	r5, r1
         fc96c:	e24dd0f4 	sub	sp, sp, #244	; 0xf4
         fc970:	e3a00000 	mov	r0, #0	; 0x0
         fc974:	e3a08000 	mov	r8, #0	; 0x0
         fc978:	e58d00f0 	str	r0, [sp, #240]
         fc97c:	e24dd004 	sub	sp, sp, #4	; 0x4
         fc980:	e2840010 	add	r0, r4, #16	; 0x10
         fc984:	e1a09000 	mov	r9, r0
         fc988:	e5900000 	ldr	r0, [r0]
         fc98c:	e2842088 	add	r2, r4, #136	; 0x88
         fc990:	e1a07002 	mov	r7, r2
         fc994:	e2841038 	add	r1, r4, #56	; 0x38
         fc998:	e1a06001 	mov	r6, r1
         fc99c:	e58d0000 	str	r0, [sp]
         fc9a0:	e28d0080 	add	r0, sp, #128	; 0x80
         fc9a4:	e49d3004 	ldr	r3, [sp], #4
         fc9a8:	eb662e96 	bl	1a88408 <TVisKeyIterator::$__ct(RefVar const &, TRect &, TPoint)>
         fc9ac:	e24dd004 	sub	sp, sp, #4	; 0x4
         fc9b0:	e5990000 	ldr	r0, [r9]
         fc9b4:	e1a02007 	mov	r2, r7
         fc9b8:	e1a01006 	mov	r1, r6
         fc9bc:	e58d0000 	str	r0, [sp]
         fc9c0:	e28d000c 	add	r0, sp, #12	; 0xc
         fc9c4:	e49d3004 	ldr	r3, [sp], #4
         fc9c8:	eb662e8e 	bl	1a88408 <TVisKeyIterator::$__ct(RefVar const &, TRect &, TPoint)>
         fc9cc:	e3a00035 	mov	r0, #53	; 0x35
         fc9d0:	eb671e0b 	bl	1ac4204 <$BusyBoxSend(long)>
         fc9d4:	e1a00005 	mov	r0, r5
         fc9d8:	e3a01001 	mov	r1, #1	; 0x1
         fc9dc:	eb6674c6 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
         fc9e0:	e59f0218 	ldr	r0, [pc, #218]	; fcc00 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x2a8>
         fc9e4:	e5900000 	ldr	r0, [r0]
         fc9e8:	e3a01000 	mov	r1, #0	; 0x0
         fc9ec:	eb66a22c 	bl	1aa52a4 <TRootView::$Update(TRect *)>
         fc9f0:	e24dd004 	sub	sp, sp, #4	; 0x4
         fc9f4:	e1a01005 	mov	r1, r5
         fc9f8:	e1a0000d 	mov	r0, sp
         fc9fc:	eb66600f 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
         fca00:	e28d0080 	add	r0, sp, #128	; 0x80
         fca04:	e49d1004 	ldr	r1, [sp], #4
         fca08:	eb665bf5 	bl	1a939e4 <TVisKeyIterator::$FindEnclosingKey(TPoint)>
         fca0c:	e3a0a000 	mov	sl, #0	; 0x0
         fca10:	e3300000 	teq	r0, #0	; 0x0
         fca14:	0a000114 	beq	fce6c <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x514>
         fca18:	e3a00001 	mov	r0, #1	; 0x1
         fca1c:	e58d00f0 	str	r0, [sp, #240]
         fca20:	eb6957bf 	bl	1b52924 <$PenNormal(void)>
         fca24:	e24dd010 	sub	sp, sp, #16	; 0x10
         fca28:	e1a0000d 	mov	r0, sp
         fca2c:	eb6b5be9 	bl	1bd39d8 <$GetGlobalTime>
         fca30:	e59f61cc 	ldr	r6, [pc, #1cc]	; fcc04 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x2ac>
         fca34:	e58d600c 	str	r6, [sp, #12]	; fField12
         fca38:	e58da008 	str	sl, [sp, #8]
         fca3c:	e24dd008 	sub	sp, sp, #8	; 0x8
         fca40:	e28d0010 	add	r0, sp, #16	; 0x10
         fca44:	e8905000 	ldmia	r0, {ip, lr}
         fca48:	e88d5000 	stmia	sp, {ip, lr}
         fca4c:	e1a0100d 	mov	r1, sp
         fca50:	e28d0008 	add	r0, sp, #8	; 0x8
         fca54:	eb6b918a 	bl	1be1084 <$CompAdd>
         fca58:	e28d0018 	add	r0, sp, #24	; 0x18
         fca5c:	e8bd5000 	ldmia	sp!, {ip, lr}
         fca60:	e8805000 	stmia	r0, {ip, lr}
         fca64:	e24dd004 	sub	sp, sp, #4	; 0x4
         fca68:	e3a07000 	mov	r7, #0	; 0x0
         fca6c:	e59f1194 	ldr	r1, [pc, #194]	; fcc08 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x2b0>
         fca70:	e1a00004 	mov	r0, r4
         fca74:	eb6b36b3 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         fca78:	e2500002 	subs	r0, r0, #2	; 0x2
         fca7c:	13a00001 	movne	r0, #1	; 0x1
         fca80:	e20090ff 	and	r9, r0, #255	; 0xff
         fca84:	e40da06c 	str	sl, [sp], -#108	; fField108
         fca88:	e3a0a000 	mov	sl, #0	; 0x0
         fca8c:	e3a00000 	mov	r0, #0	; 0x0
         fca90:	e80d0401 	stmda	sp, {r0, sl}
         fca94:	e24dd004 	sub	sp, sp, #4	; 0x4
         fca98:	e28d000c 	add	r0, sp, #12	; 0xc
         fca9c:	eb6ad7b4 	bl	1bb2974 <$setjmp>
         fcaa0:	e3300000 	teq	r0, #0	; 0x0
         fcaa4:	1a0000d5 	bne	fce00 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x4a8>
         fcaa8:	e28d0004 	add	r0, sp, #4	; 0x4
         fcaac:	eb6b8d72 	bl	1be007c <$AddExceptionHandler>
         fcab0:	e24dd004 	sub	sp, sp, #4	; 0x4
         fcab4:	e5940024 	ldr	r0, [r4, #36]	; fField36
         fcab8:	e5900000 	ldr	r0, [r0]
         fcabc:	eb6b15a2 	bl	1bc214c <$AllocateRefHandle(long)>
         fcac0:	e58d0000 	str	r0, [sp]
         fcac4:	e24dd004 	sub	sp, sp, #4	; 0x4
         fcac8:	e1a01005 	mov	r1, r5
         fcacc:	e1a0000d 	mov	r0, sp
         fcad0:	eb665bbb 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
         fcad4:	e28d0f42 	add	r0, sp, #264	; 0x108
         fcad8:	e49d1004 	ldr	r1, [sp], #4
         fcadc:	eb665bc0 	bl	1a939e4 <TVisKeyIterator::$FindEnclosingKey(TPoint)>
         fcae0:	e1a06000 	mov	r6, r0
         fcae4:	e1380000 	teq	r8, r0
         fcae8:	059d011c 	ldreq	r0, [sp, #284]
         fcaec:	059d10a8 	ldreq	r1, [sp, #168]
         fcaf0:	01300001 	teqeq	r0, r1
         fcaf4:	059d00a4 	ldreq	r0, [sp, #164]
         fcaf8:	059d1118 	ldreq	r1, [sp, #280]
         fcafc:	01310000 	teqeq	r1, r0
         fcb00:	0a000041 	beq	fcc0c <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x2b4>
         fcb04:	e24dd004 	sub	sp, sp, #4	; 0x4
         fcb08:	e59d0078 	ldr	r0, [sp, #120]	; fField120
         fcb0c:	e3300000 	teq	r0, #0	; 0x0
         fcb10:	1a000008 	bne	fcb38 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x1e0>
         fcb14:	e1a01004 	mov	r1, r4
         fcb18:	e1a0000d 	mov	r0, sp
         fcb1c:	eb6b3ebb 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
         fcb20:	e1a0000d 	mov	r0, sp
         fcb24:	eb6699aa 	bl	1aa31d4 <TRegion::$StealRegion(void)>
         fcb28:	e58d0078 	str	r0, [sp, #120]	; fField120
         fcb2c:	e1a0000d 	mov	r0, sp
         fcb30:	e3a01000 	mov	r1, #0	; 0x0
         fcb34:	eb663252 	bl	1a89484 <TRegion::$__dt(void)>
         fcb38:	e3a01000 	mov	r1, #0	; 0x0
         fcb3c:	e3a00000 	mov	r0, #0	; 0x0
         fcb40:	eb693eb4 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         fcb44:	e3380000 	teq	r8, #0	; 0x0
         fcb48:	159d009c 	ldrne	r0, [sp, #156]
         fcb4c:	12000201 	andne	r0, r0, #268435456	; 0x10000000
         fcb50:	13300000 	teqne	r0, #0	; 0x0
         fcb54:	0a000004 	beq	fcb6c <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x214>
         fcb58:	e28d1094 	add	r1, sp, #148	; 0x94
         fcb5c:	e1a00004 	mov	r0, r4
         fcb60:	e3a03001 	mov	r3, #1	; 0x1
         fcb64:	e3a02000 	mov	r2, #0	; 0x0
         fcb68:	eb665769 	bl	1a92914 <TKeyboardView::$DrawKey(TVisKeyIterator &, unsigned char, unsigned char)>
         fcb6c:	e24dd010 	sub	sp, sp, #16	; 0x10
         fcb70:	e3360000 	teq	r6, #0	; 0x0
         fcb74:	159d0120 	ldrne	r0, [sp, #288]
         fcb78:	12000201 	andne	r0, r0, #268435456	; 0x10000000
         fcb7c:	13300000 	teqne	r0, #0	; 0x0
         fcb80:	0a000004 	beq	fcb98 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x240>
         fcb84:	e28d1f46 	add	r1, sp, #280	; 0x118
         fcb88:	e1a00004 	mov	r0, r4
         fcb8c:	e3a03001 	mov	r3, #1	; 0x1
         fcb90:	e3a02001 	mov	r2, #1	; 0x1
         fcb94:	eb66575e 	bl	1a92914 <TKeyboardView::$DrawKey(TVisKeyIterator &, unsigned char, unsigned char)>
         fcb98:	e3a01000 	mov	r1, #0	; 0x0
         fcb9c:	e3a00000 	mov	r0, #0	; 0x0
         fcba0:	eb693e9e 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         fcba4:	e1a08006 	mov	r8, r6
         fcba8:	e1a0000d 	mov	r0, sp
         fcbac:	eb6b5b89 	bl	1bd39d8 <$GetGlobalTime>
         fcbb0:	e59f004c 	ldr	r0, [pc, #4c]	; fcc04 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x2ac>
         fcbb4:	e58d000c 	str	r0, [sp, #12]	; fField12
         fcbb8:	e3a00000 	mov	r0, #0	; 0x0
         fcbbc:	e58d0008 	str	r0, [sp, #8]
         fcbc0:	e24dd008 	sub	sp, sp, #8	; 0x8
         fcbc4:	e28d0010 	add	r0, sp, #16	; 0x10
         fcbc8:	e8905000 	ldmia	r0, {ip, lr}
         fcbcc:	e88d5000 	stmia	sp, {ip, lr}
         fcbd0:	e1a0100d 	mov	r1, sp
         fcbd4:	e28d0008 	add	r0, sp, #8	; 0x8
         fcbd8:	eb6b9129 	bl	1be1084 <$CompAdd>
         fcbdc:	e28d00a4 	add	r0, sp, #164	; 0xa4
         fcbe0:	e8bd5000 	ldmia	sp!, {ip, lr}
         fcbe4:	e8805000 	stmia	r0, {ip, lr}
         fcbe8:	e3a07000 	mov	r7, #0	; 0x0
         fcbec:	e28d10a4 	add	r1, sp, #164	; 0xa4
         fcbf0:	e28d0f46 	add	r0, sp, #280	; 0x118
         fcbf4:	eb6646d8 	bl	1a8e75c <TVisKeyIterator::$CopyInto(TVisKeyIterator *)>
         fcbf8:	e28dd014 	add	sp, sp, #20	; 0x14
         fcbfc:	ea000004 	b	fcc14 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x2bc>
         fcc00:	0c101934 	ldceq	9, cr1, [r0], -#208
         fcc04:	0021bf10 	eoreq	fp, r1, r0, lsl pc
         fcc08:	00685380 	rsbeq	r5, r8, r0, lsl #7
         fcc0c:	e3a00001 	mov	r0, #1	; 0x1
         fcc10:	eb66a1b8 	bl	1aa52f8 <$Wait(unsigned long)>
         fcc14:	e1a0000d 	mov	r0, sp
         fcc18:	eb6b364f 	bl	1bca55c <$GetView(RefVar const &)>
         fcc1c:	e1b0a000 	movs	sl, r0
         fcc20:	0a000070 	beq	fcde8 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x490>
         fcc24:	e1a00005 	mov	r0, r5
         fcc28:	eb66531d 	bl	1a918a4 <TStrokePublic::$Done(void)>
         fcc2c:	e3300000 	teq	r0, #0	; 0x0
         fcc30:	03390000 	teqeq	r9, #0	; 0x0
         fcc34:	1a000035 	bne	fcd10 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x3b8>
         fcc38:	e3360000 	teq	r6, #0	; 0x0
         fcc3c:	0affffa0 	beq	fcac4 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x16c>
         fcc40:	e24dd008 	sub	sp, sp, #8	; 0x8
         fcc44:	e1a0000d 	mov	r0, sp
         fcc48:	eb6b5b62 	bl	1bd39d8 <$GetGlobalTime>
         fcc4c:	e28d1090 	add	r1, sp, #144	; 0x90
         fcc50:	e1a0000d 	mov	r0, sp
         fcc54:	eb6b910b 	bl	1be1088 <$CompCompare>
         fcc58:	e3500000 	cmp	r0, #0	; 0x0
         fcc5c:	da000029 	ble	fcd08 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x3b0>
         fcc60:	e24dd010 	sub	sp, sp, #16	; 0x10
         fcc64:	e59d008c 	ldr	r0, [sp, #140]	; fField140
         fcc68:	e3300000 	teq	r0, #0	; 0x0
         fcc6c:	0a00000e 	beq	fccac <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x354>
         fcc70:	e59d608c 	ldr	r6, [sp, #140]	; fField140
         fcc74:	e24dd008 	sub	sp, sp, #8	; 0x8
         fcc78:	e1a0000d 	mov	r0, sp
         fcc7c:	eb6bcac8 	bl	1bef7a4 <$GetPort(GrafPort **)>
         fcc80:	e49d0004 	ldr	r0, [sp], #4
         fcc84:	e5900024 	ldr	r0, [r0, #36]	; fField36
         fcc88:	e58d0000 	str	r0, [sp]
         fcc8c:	e1a00006 	mov	r0, r6
         fcc90:	e59d1000 	ldr	r1, [sp]
         fcc94:	eb694286 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
         fcc98:	e28dd004 	add	sp, sp, #4	; 0x4
         fcc9c:	e59d008c 	ldr	r0, [sp, #140]	; fField140
         fcca0:	eb664ee5 	bl	1a9083c <$DisposeCachedRgn(Region **)>
         fcca4:	e3a00000 	mov	r0, #0	; 0x0
         fcca8:	e58d008c 	str	r0, [sp, #140]	; fField140
         fccac:	e28d1f47 	add	r1, sp, #284	; 0x11c
         fccb0:	e1a00004 	mov	r0, r4
         fccb4:	eb6652f7 	bl	1a91898 <TKeyboardView::$DoKey(TVisKeyIterator &)>
         fccb8:	e1a09000 	mov	r9, r0
         fccbc:	e1a0000d 	mov	r0, sp
         fccc0:	eb6b5b44 	bl	1bd39d8 <$GetGlobalTime>
         fccc4:	e3a00efb 	mov	r0, #4016	; 0xfb0
         fccc8:	e2800ab3 	add	r0, r0, #733184	; 0xb3000
         fcccc:	e58d000c 	str	r0, [sp, #12]	; fField12
         fccd0:	e3a00000 	mov	r0, #0	; 0x0
         fccd4:	e58d0008 	str	r0, [sp, #8]
         fccd8:	e24dd008 	sub	sp, sp, #8	; 0x8
         fccdc:	e28d0010 	add	r0, sp, #16	; 0x10
         fcce0:	e8905000 	ldmia	r0, {ip, lr}
         fcce4:	e88d5000 	stmia	sp, {ip, lr}
         fcce8:	e1a0100d 	mov	r1, sp
         fccec:	e28d0008 	add	r0, sp, #8	; 0x8
         fccf0:	eb6b90e3 	bl	1be1084 <$CompAdd>
         fccf4:	e28d00a8 	add	r0, sp, #168	; 0xa8
         fccf8:	e8bd5000 	ldmia	sp!, {ip, lr}
         fccfc:	e8805000 	stmia	r0, {ip, lr}
         fcd00:	e3a07001 	mov	r7, #1	; 0x1
         fcd04:	e28dd010 	add	sp, sp, #16	; 0x10
         fcd08:	e28dd008 	add	sp, sp, #8	; 0x8
         fcd0c:	eaffff6c 	b	fcac4 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x16c>
         fcd10:	e33a0000 	teq	sl, #0	; 0x0
         fcd14:	13360000 	teqne	r6, #0	; 0x0
         fcd18:	0a000032 	beq	fcde8 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x490>
         fcd1c:	e3a01000 	mov	r1, #0	; 0x0
         fcd20:	e3a00000 	mov	r0, #0	; 0x0
         fcd24:	eb693e3b 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         fcd28:	e59d010c 	ldr	r0, [sp, #268]
         fcd2c:	e3100201 	tst	r0, #268435456	; 0x10000000
         fcd30:	0a000012 	beq	fcd80 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x428>
         fcd34:	e24dd004 	sub	sp, sp, #4	; 0x4
         fcd38:	e59d0078 	ldr	r0, [sp, #120]	; fField120
         fcd3c:	e3300000 	teq	r0, #0	; 0x0
         fcd40:	1a000008 	bne	fcd68 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x410>
         fcd44:	e1a01004 	mov	r1, r4
         fcd48:	e1a0000d 	mov	r0, sp
         fcd4c:	eb6b3e2f 	bl	1bcc610 <TView::$SetupVisRgn( const(void))>
         fcd50:	e1a0000d 	mov	r0, sp
         fcd54:	eb66991e 	bl	1aa31d4 <TRegion::$StealRegion(void)>
         fcd58:	e58d0078 	str	r0, [sp, #120]	; fField120
         fcd5c:	e1a0000d 	mov	r0, sp
         fcd60:	e3a01000 	mov	r1, #0	; 0x0
         fcd64:	eb6631c6 	bl	1a89484 <TRegion::$__dt(void)>
         fcd68:	e28d1f42 	add	r1, sp, #264	; 0x108
         fcd6c:	e1a00004 	mov	r0, r4
         fcd70:	e3a03001 	mov	r3, #1	; 0x1
         fcd74:	e3a02000 	mov	r2, #0	; 0x0
         fcd78:	eb6656e5 	bl	1a92914 <TKeyboardView::$DrawKey(TVisKeyIterator &, unsigned char, unsigned char)>
         fcd7c:	e28dd004 	add	sp, sp, #4	; 0x4
         fcd80:	e3370000 	teq	r7, #0	; 0x0
         fcd84:	1a000014 	bne	fcddc <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x484>
         fcd88:	e59d0074 	ldr	r0, [sp, #116]	; fField116
         fcd8c:	e3300000 	teq	r0, #0	; 0x0
         fcd90:	0a00000e 	beq	fcdd0 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x478>
         fcd94:	e59d5074 	ldr	r5, [sp, #116]	; fField116
         fcd98:	e24dd008 	sub	sp, sp, #8	; 0x8
         fcd9c:	e1a0000d 	mov	r0, sp
         fcda0:	eb6bca7f 	bl	1bef7a4 <$GetPort(GrafPort **)>
         fcda4:	e49d0004 	ldr	r0, [sp], #4
         fcda8:	e5900024 	ldr	r0, [r0, #36]	; fField36
         fcdac:	e58d0000 	str	r0, [sp]
         fcdb0:	e1a00005 	mov	r0, r5
         fcdb4:	e59d1000 	ldr	r1, [sp]
         fcdb8:	eb69423d 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
         fcdbc:	e28dd004 	add	sp, sp, #4	; 0x4
         fcdc0:	e59d0074 	ldr	r0, [sp, #116]	; fField116
         fcdc4:	eb664e9c 	bl	1a9083c <$DisposeCachedRgn(Region **)>
         fcdc8:	e3a00000 	mov	r0, #0	; 0x0
         fcdcc:	e58d0074 	str	r0, [sp, #116]	; fField116
         fcdd0:	e28d1f41 	add	r1, sp, #260	; 0x104
         fcdd4:	e1a00004 	mov	r0, r4
         fcdd8:	eb6652ae 	bl	1a91898 <TKeyboardView::$DoKey(TVisKeyIterator &)>
         fcddc:	e3a01000 	mov	r1, #0	; 0x0
         fcde0:	e3a00000 	mov	r0, #0	; 0x0
         fcde4:	eb693e0d 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         fcde8:	e59d0000 	ldr	r0, [sp]
         fcdec:	eb6b18f2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fcdf0:	e28dd004 	add	sp, sp, #4	; 0x4
         fcdf4:	e28d0004 	add	r0, sp, #4	; 0x4
         fcdf8:	eb6b90ae 	bl	1be10b8 <$ExitHandler>
         fcdfc:	ea000001 	b	fce08 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x4b0>
         fce00:	e3a00001 	mov	r0, #1	; 0x1
         fce04:	e58d0000 	str	r0, [sp]
         fce08:	e3a00036 	mov	r0, #54	; 0x36
         fce0c:	eb671cfc 	bl	1ac4204 <$BusyBoxSend(long)>
         fce10:	e59d0070 	ldr	r0, [sp, #112]	; fField112
         fce14:	e3300000 	teq	r0, #0	; 0x0
         fce18:	0a00000e 	beq	fce58 <TKeyboardView::TrackStroke(TStrokePublic *, TVisKeyIterator *)+0x500>
         fce1c:	e59d4070 	ldr	r4, [sp, #112]	; fField112
         fce20:	e24dd008 	sub	sp, sp, #8	; 0x8
         fce24:	e1a0000d 	mov	r0, sp
         fce28:	eb6bca5d 	bl	1bef7a4 <$GetPort(GrafPort **)>
         fce2c:	e49d0004 	ldr	r0, [sp], #4
         fce30:	e5900024 	ldr	r0, [r0, #36]	; fField36
         fce34:	e58d0000 	str	r0, [sp]
         fce38:	e1a00004 	mov	r0, r4
         fce3c:	e59d1000 	ldr	r1, [sp]
         fce40:	eb69421b 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
         fce44:	e28dd004 	add	sp, sp, #4	; 0x4
         fce48:	e59d0070 	ldr	r0, [sp, #112]	; fField112
         fce4c:	eb664e7a 	bl	1a9083c <$DisposeCachedRgn(Region **)>
         fce50:	e3a00000 	mov	r0, #0	; 0x0
         fce54:	e58d0070 	str	r0, [sp, #112]	; fField112
         fce58:	e59d0000 	ldr	r0, [sp]
         fce5c:	e3300000 	teq	r0, #0	; 0x0
         fce60:	128d0004 	addne	r0, sp, #4	; 0x4
         fce64:	1b6b94ba 	blne	1be2154 <$NextHandler>
         fce68:	e28dd084 	add	sp, sp, #132	; 0x84
         fce6c:	e59d0018 	ldr	r0, [sp, #24]
         fce70:	e59d40f0 	ldr	r4, [sp, #240]
         fce74:	eb6b18d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fce78:	e59d0014 	ldr	r0, [sp, #20]
         fce7c:	eb6b18ce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fce80:	e59d000c 	ldr	r0, [sp, #12]	; fField12
         fce84:	eb6b18cc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fce88:	e59d0008 	ldr	r0, [sp, #8]
         fce8c:	eb6b18ca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fce90:	e59d008c 	ldr	r0, [sp, #140]	; fField140
         fce94:	eb6b18c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fce98:	e59d0088 	ldr	r0, [sp, #136]	; fField136
         fce9c:	eb6b18c6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fcea0:	e59d0080 	ldr	r0, [sp, #128]	; fField128
         fcea4:	eb6b18c4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fcea8:	e59d007c 	ldr	r0, [sp, #124]	; fField124
         fceac:	eb6b18c2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         fceb0:	e1a00004 	mov	r0, r4
         fceb4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TKeyboardView::RealDoCommand(RefVar const &)
 * Address: 000fcf80
 */
TKeyboardView::RealDoCommand(RefVar const &) {
    /*
         fcf80:	e1a0c00d 	mov	ip, sp
         fcf84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fcf88:	e24cb004 	sub	fp, ip, #4	; 0x4
         fcf8c:	e1a05000 	mov	r5, r0
         fcf90:	e1a04001 	mov	r4, r1
         fcf94:	e1a00001 	mov	r0, r1
         fcf98:	eb66a4ea 	bl	1aa6348 <$CommandID(RefVar const &)>
         fcf9c:	e330000b 	teq	r0, #11	; 0xb
         fcfa0:	1a00000d 	bne	fcfdc <TKeyboardView::RealDoCommand(RefVar const &)+0x5c>
         fcfa4:	e1a00004 	mov	r0, r4
         fcfa8:	eb66a4ea 	bl	1aa6358 <$CommandParameter(RefVar const &)>
         fcfac:	eb66988f 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
         fcfb0:	e1a01000 	mov	r1, r0
         fcfb4:	e1a00005 	mov	r0, r5
         fcfb8:	e3a02000 	mov	r2, #0	; 0x0
         fcfbc:	eb675e99 	bl	1ad4a28 <TKeyboardView::$TrackStroke(TStrokePublic *, TVisKeyIterator *)>
         fcfc0:	e3300000 	teq	r0, #0	; 0x0
         fcfc4:	0a000004 	beq	fcfdc <TKeyboardView::RealDoCommand(RefVar const &)+0x5c>
         fcfc8:	e1a00004 	mov	r0, r4
         fcfcc:	e3a01001 	mov	r1, #1	; 0x1
         fcfd0:	eb66a4df 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
         fcfd4:	e3a00001 	mov	r0, #1	; 0x1
         fcfd8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         fcfdc:	e1a01004 	mov	r1, r4
         fcfe0:	e1a00005 	mov	r0, r5
         fcfe4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         fcfe8:	ea6687df 	b	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
    */
}

