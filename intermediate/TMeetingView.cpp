#include "include/TMeetingView.h"

/**
 * Symbol: TMeetingView::ClassID( const(void))
 * Address: 001ca394
 */
TMeetingView::ClassID( const(void)) {
    /*
        1ca394:	e3a0005f 	mov	r0, #95	; 0x5f
        1ca398:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMeetingView::DerivedFrom( const(long))
 * Address: 001ca448
 */
TMeetingView::DerivedFrom( const(long)) {
    /*
        1ca448:	e1a0c00d 	mov	ip, sp
        1ca44c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1ca450:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ca454:	e331005f 	teq	r1, #95	; 0x5f
        1ca458:	0a000002 	beq	1ca468 <TMeetingView::DerivedFrom( const(long))+0x20>
        1ca45c:	ebfaa362 	bl	731ec <TContainerView::DerivedFrom( const(long))>
        1ca460:	e3300000 	teq	r0, #0	; 0x0
        1ca464:	0a000001 	beq	1ca470 <TMeetingView::DerivedFrom( const(long))+0x28>
        1ca468:	e3a00001 	mov	r0, #1	; 0x1
        1ca46c:	ea000000 	b	1ca474 <TMeetingView::DerivedFrom( const(long))+0x2c>
        1ca470:	e3a00000 	mov	r0, #0	; 0x0
        1ca474:	e20000ff 	and	r0, r0, #255	; 0xff
        1ca478:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::Constructor(RefVar const &, TView *)
 * Address: 001ca47c
 */
TMeetingView::Constructor(RefVar const &, TView *) {
    /*
        1ca47c:	e1a0c00d 	mov	ip, sp
        1ca480:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ca484:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ca488:	e1a04000 	mov	r4, r0
        1ca48c:	eb630c8d 	bl	1a8d6c8 <TContainerView::$Constructor(RefVar const &, TView *)>
        1ca490:	eb68a122 	bl	1bf2920 <$Ticks(void)>
        1ca494:	e5a40038 	str	r0, [r4, #56]!	; fField56
        1ca498:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::RealDoCommand(RefVar const &)
 * Address: 001ca49c
 */
TMeetingView::RealDoCommand(RefVar const &) {
    /*
        1ca49c:	e1a0c00d 	mov	ip, sp
        1ca4a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1ca4a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ca4a8:	e1a05000 	mov	r5, r0
        1ca4ac:	e1a04001 	mov	r4, r1
        1ca4b0:	e1a00001 	mov	r0, r1
        1ca4b4:	eb636fa3 	bl	1aa6348 <$CommandID(RefVar const &)>
        1ca4b8:	e330000b 	teq	r0, #11	; 0xb
        1ca4bc:	0a000012 	beq	1ca50c <TMeetingView::RealDoCommand(RefVar const &)+0x70>
        1ca4c0:	e3300032 	teq	r0, #50	; 0x32
        1ca4c4:	1a00000a 	bne	1ca4f4 <TMeetingView::RealDoCommand(RefVar const &)+0x58>
        1ca4c8:	e1a00005 	mov	r0, r5
        1ca4cc:	e5951000 	ldr	r1, [r5]
        1ca4d0:	e1a0e00f 	mov	lr, pc
        1ca4d4:	e281ff51 	add	pc, r1, #324	; 0x144
        1ca4d8:	e1a01004 	mov	r1, r4
        1ca4dc:	e5902000 	ldr	r2, [r0]
        1ca4e0:	e1a0e00f 	mov	lr, pc
        1ca4e4:	e282f01c 	add	pc, r2, #28	; 0x1c
        1ca4e8:	e1a06000 	mov	r6, r0
        1ca4ec:	e3360000 	teq	r6, #0	; 0x0
        1ca4f0:	1a000003 	bne	1ca504 <TMeetingView::RealDoCommand(RefVar const &)+0x68>
        1ca4f4:	e1a01004 	mov	r1, r4
        1ca4f8:	e1a00005 	mov	r0, r5
        1ca4fc:	eb6356a2 	bl	1a9ff8c <TContainerView::$RealDoCommand(RefVar const &)>
        1ca500:	e1a06000 	mov	r6, r0
        1ca504:	e1a00006 	mov	r0, r6
        1ca508:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1ca50c:	e1a01004 	mov	r1, r4
        1ca510:	e1a00005 	mov	r0, r5
        1ca514:	eb63a52f 	bl	1ab39d8 <TMeetingView::$HandleClick(RefVar const &)>
        1ca518:	e1a01000 	mov	r1, r0
        1ca51c:	e1a06000 	mov	r6, r0
        1ca520:	e1a00004 	mov	r0, r4
        1ca524:	eb636f8a 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        1ca528:	eaffffef 	b	1ca4ec <TMeetingView::RealDoCommand(RefVar const &)+0x50>
    */
}

/**
 * Symbol: TMeetingView::HandleClick(RefVar const &)
 * Address: 001ca52c
 */
TMeetingView::HandleClick(RefVar const &) {
    /*
        1ca52c:	e1a0c00d 	mov	ip, sp
        1ca530:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ca534:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ca538:	e1a04000 	mov	r4, r0
        1ca53c:	e1a05001 	mov	r5, r1
        1ca540:	e24dd010 	sub	sp, sp, #16	; 0x10
        1ca544:	e1a00001 	mov	r0, r1
        1ca548:	eb636f82 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1ca54c:	eb636327 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        1ca550:	e1a01000 	mov	r1, r0
        1ca554:	e28d000c 	add	r0, sp, #12	; 0xc
        1ca558:	eb632938 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        1ca55c:	e3a08000 	mov	r8, #0	; 0x0
        1ca560:	e1a00004 	mov	r0, r4
        1ca564:	e5941000 	ldr	r1, [r4]
        1ca568:	e1a0e00f 	mov	lr, pc
        1ca56c:	e281ff5a 	add	pc, r1, #360	; 0x168
        1ca570:	e1a07000 	mov	r7, r0
        1ca574:	e59f1118 	ldr	r1, [pc, #118]	; 1ca694 <TMeetingView::HandleClick(RefVar const &)+0x168>
        1ca578:	e1a00004 	mov	r0, r4
        1ca57c:	eb67fff1 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1ca580:	eb67def1 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca584:	e58d0008 	str	r0, [sp, #8]	; fField8
        1ca588:	e1a0100d 	mov	r1, sp
        1ca58c:	e28d0008 	add	r0, sp, #8	; 0x8
        1ca590:	eb642519 	bl	1ad39fc <$ShapeBounds(RefVar const &, TRect *)>
        1ca594:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ca598:	e2840010 	add	r0, r4, #16	; 0x10
        1ca59c:	e1a06000 	mov	r6, r0
        1ca5a0:	e8905000 	ldmia	r0, {ip, lr}
        1ca5a4:	e88d5000 	stmia	sp, {ip, lr}
        1ca5a8:	e2870010 	add	r0, r7, #16	; 0x10
        1ca5ac:	e5901006 	ldr	r1, [r0, #6]
        1ca5b0:	e1a01821 	mov	r1, r1, lsr #16
        1ca5b4:	e5900002 	ldr	r0, [r0, #2]
        1ca5b8:	e1a00820 	mov	r0, r0, lsr #16
        1ca5bc:	e0410000 	sub	r0, r1, r0
        1ca5c0:	e59d1000 	ldr	r1, [sp]
        1ca5c4:	e0800001 	add	r0, r0, r1
        1ca5c8:	e5cd0003 	strb	r0, [sp, #3]
        1ca5cc:	e1a00440 	mov	r0, r0, asr #8
        1ca5d0:	e5cd0002 	strb	r0, [sp, #2]
        1ca5d4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1ca5d8:	e5901016 	ldr	r1, [r0, #22]
        1ca5dc:	e1a01841 	mov	r1, r1, asr #16
        1ca5e0:	e59d0002 	ldr	r0, [sp, #2]
        1ca5e4:	e1a00840 	mov	r0, r0, asr #16
        1ca5e8:	e59d200e 	ldr	r2, [sp, #14]
        1ca5ec:	e0800842 	add	r0, r0, r2, asr #16
        1ca5f0:	e2800002 	add	r0, r0, #2	; 0x2
        1ca5f4:	e1510000 	cmp	r1, r0
        1ca5f8:	b1a00001 	movlt	r0, r1
        1ca5fc:	e5cd0007 	strb	r0, [sp, #7]
        1ca600:	e1a00440 	mov	r0, r0, asr #8
        1ca604:	e5cd0006 	strb	r0, [sp, #6]
        1ca608:	e59d000e 	ldr	r0, [sp, #14]
        1ca60c:	e41d1004 	ldr	r1, [sp], -#4
        1ca610:	e1a01821 	mov	r1, r1, lsr #16
        1ca614:	e0800001 	add	r0, r0, r1
        1ca618:	e2800002 	add	r0, r0, #2	; 0x2
        1ca61c:	e5cd0009 	strb	r0, [sp, #9]
        1ca620:	e1a00440 	mov	r0, r0, asr #8
        1ca624:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        1ca628:	e59f1068 	ldr	r1, [pc, #68]	; 1ca698 <TMeetingView::HandleClick(RefVar const &)+0x16c>
        1ca62c:	e1a00004 	mov	r0, r4
        1ca630:	eb67ffc8 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        1ca634:	eb67dec4 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca638:	e58d0000 	str	r0, [sp]
        1ca63c:	e1a0000d 	mov	r0, sp
        1ca640:	eb67ffc5 	bl	1bca55c <$GetView(RefVar const &)>
        1ca644:	e1a07000 	mov	r7, r0
        1ca648:	e59d0000 	ldr	r0, [sp]
        1ca64c:	eb67e2da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca650:	e3a09000 	mov	r9, #0	; 0x0
        1ca654:	e1b00007 	movs	r0, r7
        1ca658:	e3a07002 	mov	r7, #2	; 0x2
        1ca65c:	0a00000e 	beq	1ca69c <TMeetingView::HandleClick(RefVar const &)+0x170>
        1ca660:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ca664:	e1a00007 	mov	r0, r7
        1ca668:	eb67deb7 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca66c:	e58d0000 	str	r0, [sp]
        1ca670:	e1a0000d 	mov	r0, sp
        1ca674:	eb63eb18 	bl	1ac52dc <$FClicker>
        1ca678:	e59d0000 	ldr	r0, [sp]
        1ca67c:	eb67e2ce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca680:	e3a04002 	mov	r4, #2	; 0x2
        1ca684:	e59d0018 	ldr	r0, [sp, #24]
        1ca688:	eb67e2cb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca68c:	e1a00004 	mov	r0, r4
        1ca690:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1ca694:	00683158 	rsbeq	r3, r8, r8, asr r1
        1ca698:	00683818 	rsbeq	r3, r8, r8, lsl r8
        1ca69c:	e59d0018 	ldr	r0, [sp, #24]
        1ca6a0:	e52d0004 	str	r0, [sp, -#4]!
        1ca6a4:	e28d1008 	add	r1, sp, #8	; 0x8
        1ca6a8:	e28dd004 	add	sp, sp, #4	; 0x4
        1ca6ac:	eb6620a2 	bl	1b5293c <$PtInRect(Point, Rect *)>
        1ca6b0:	e3300000 	teq	r0, #0	; 0x0
        1ca6b4:	0a000133 	beq	1cab88 <TMeetingView::HandleClick(RefVar const &)+0x65c>
        1ca6b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ca6bc:	e28d0008 	add	r0, sp, #8	; 0x8
        1ca6c0:	eb661867 	bl	1b50864 <$InvertRect(Rect *)>
        1ca6c4:	e1a00007 	mov	r0, r7
        1ca6c8:	eb67de9f 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca6cc:	e58d0000 	str	r0, [sp]
        1ca6d0:	e1a0000d 	mov	r0, sp
        1ca6d4:	eb63eb00 	bl	1ac52dc <$FClicker>
        1ca6d8:	e59d0000 	ldr	r0, [sp]
        1ca6dc:	eb67e2b6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca6e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ca6e4:	e1a00005 	mov	r0, r5
        1ca6e8:	eb636f1a 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1ca6ec:	eb6362bf 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        1ca6f0:	e1a0a000 	mov	sl, r0
        1ca6f4:	e3a00002 	mov	r0, #2	; 0x2
        1ca6f8:	eb6345a7 	bl	1a9bd9c <$MakeArray(long)>
        1ca6fc:	eb67de92 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca700:	e58d0000 	str	r0, [sp]
        1ca704:	e59f0084 	ldr	r0, [pc, #84]	; 1ca790 <TMeetingView::HandleClick(RefVar const &)+0x264>
        1ca708:	e5900000 	ldr	r0, [r0]
        1ca70c:	e5902000 	ldr	r2, [r0]
        1ca710:	e59d0000 	ldr	r0, [sp]
        1ca714:	e5900000 	ldr	r0, [r0]
        1ca718:	e1a01009 	mov	r1, r9
        1ca71c:	eb67ef0d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ca720:	e59f006c 	ldr	r0, [pc, #6c]	; 1ca794 <TMeetingView::HandleClick(RefVar const &)+0x268>
        1ca724:	e5900000 	ldr	r0, [r0]
        1ca728:	e5902000 	ldr	r2, [r0]
        1ca72c:	e59d0000 	ldr	r0, [sp]
        1ca730:	e5900000 	ldr	r0, [r0]
        1ca734:	e3a01001 	mov	r1, #1	; 0x1
        1ca738:	eb67ef06 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ca73c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ca740:	e1a00004 	mov	r0, r4
        1ca744:	eb67fb67 	bl	1bc94e8 <TView::$DataFrame(void)>
        1ca748:	eb67de7f 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca74c:	e58d0000 	str	r0, [sp]
        1ca750:	e1a0000d 	mov	r0, sp
        1ca754:	eb63a078 	bl	1ab293c <$GetMeetingText(RefVar const &)>
        1ca758:	eb67de7b 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca75c:	e58d0004 	str	r0, [sp, #4]
        1ca760:	e59d0000 	ldr	r0, [sp]
        1ca764:	eb67e294 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca768:	e59d0004 	ldr	r0, [sp, #4]
        1ca76c:	e5900000 	ldr	r0, [r0]
        1ca770:	e59f9020 	ldr	r9, [pc, #20]	; 1ca798 <TMeetingView::HandleClick(RefVar const &)+0x26c>
        1ca774:	e3300002 	teq	r0, #2	; 0x2
        1ca778:	1a000007 	bne	1ca79c <TMeetingView::HandleClick(RefVar const &)+0x270>
        1ca77c:	e5990000 	ldr	r0, [r9]
        1ca780:	e5901000 	ldr	r1, [r0]
        1ca784:	e59d0004 	ldr	r0, [sp, #4]
        1ca788:	e5801000 	str	r1, [r0]
        1ca78c:	ea00001f 	b	1ca810 <TMeetingView::HandleClick(RefVar const &)+0x2e4>
        1ca790:	00683810 	rsbeq	r3, r8, r0, lsl r8
        1ca794:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        1ca798:	00680f00 	rsbeq	r0, r8, r0, lsl #30
        1ca79c:	e28d0004 	add	r0, sp, #4	; 0x4
        1ca7a0:	eb67837d 	bl	1bab59c <$IsRichString(RefVar const &)>
        1ca7a4:	e3300000 	teq	r0, #0	; 0x0
        1ca7a8:	159d0004 	ldrne	r0, [sp, #4]
        1ca7ac:	15807000 	strne	r7, [r0]
        1ca7b0:	1a000016 	bne	1ca810 <TMeetingView::HandleClick(RefVar const &)+0x2e4>
        1ca7b4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ca7b8:	e28d100c 	add	r1, sp, #12	; 0xc
        1ca7bc:	e1a0000d 	mov	r0, sp
        1ca7c0:	eb67da44 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        1ca7c4:	e1a0100d 	mov	r1, sp
        1ca7c8:	e28d0004 	add	r0, sp, #4	; 0x4
        1ca7cc:	eb67da40 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        1ca7d0:	e1a0000d 	mov	r0, sp
        1ca7d4:	e3a01000 	mov	r1, #0	; 0x0
        1ca7d8:	eb67de48 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1ca7dc:	e28d0004 	add	r0, sp, #4	; 0x4
        1ca7e0:	eb67de4b 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1ca7e4:	eb688fdd 	bl	1bee760 <$Ustrlen>
        1ca7e8:	e3300000 	teq	r0, #0	; 0x0
        1ca7ec:	1a000003 	bne	1ca800 <TMeetingView::HandleClick(RefVar const &)+0x2d4>
        1ca7f0:	e5990000 	ldr	r0, [r9]
        1ca7f4:	e5900000 	ldr	r0, [r0]
        1ca7f8:	e59d100c 	ldr	r1, [sp, #12]
        1ca7fc:	e5810000 	str	r0, [r1]
        1ca800:	e28d0004 	add	r0, sp, #4	; 0x4
        1ca804:	e3a01000 	mov	r1, #0	; 0x0
        1ca808:	eb67de3c 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1ca80c:	e28dd008 	add	sp, sp, #8	; 0x8
        1ca810:	e24dd010 	sub	sp, sp, #16	; 0x10
        1ca814:	e28d0014 	add	r0, sp, #20	; 0x14
        1ca818:	eb67de53 	bl	1bc216c <$Clone(RefVar const &)>
        1ca81c:	eb67de4a 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca820:	e58d0000 	str	r0, [sp]
        1ca824:	e1a0300d 	mov	r3, sp
        1ca828:	e2842024 	add	r2, r4, #36	; 0x24
        1ca82c:	e1a09002 	mov	r9, r2
        1ca830:	e28d1018 	add	r1, sp, #24	; 0x18
        1ca834:	e28d000c 	add	r0, sp, #12	; 0xc
        1ca838:	eb642889 	bl	1ad4a64 <TDragInfo::$__ct(RefVar const &, RefVar const &, RefVar const &)>
        1ca83c:	e59d0000 	ldr	r0, [sp]
        1ca840:	eb67e25d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca844:	e28d1004 	add	r1, sp, #4	; 0x4
        1ca848:	e8965000 	ldmia	r6, {ip, lr}
        1ca84c:	e8815000 	stmia	r1, {ip, lr}
        1ca850:	e59f021c 	ldr	r0, [pc, #21c]	; 1caa74 <TMeetingView::HandleClick(RefVar const &)+0x548>
        1ca854:	e5900000 	ldr	r0, [r0]
        1ca858:	e59d100a 	ldr	r1, [sp, #10]
        1ca85c:	e59d2006 	ldr	r2, [sp, #6]
        1ca860:	e0411002 	sub	r1, r1, r2
        1ca864:	e1a01801 	mov	r1, r1, lsl #16
        1ca868:	e1a01841 	mov	r1, r1, asr #16
        1ca86c:	e1500001 	cmp	r0, r1
        1ca870:	a1a00001 	movge	r0, r1
        1ca874:	e59d1006 	ldr	r1, [sp, #6]
        1ca878:	e0800001 	add	r0, r0, r1
        1ca87c:	e5cd0009 	strb	r0, [sp, #9]
        1ca880:	e1a00440 	mov	r0, r0, asr #8
        1ca884:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        1ca888:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1ca88c:	e5901016 	ldr	r1, [r0, #22]
        1ca890:	e1a01841 	mov	r1, r1, asr #16
        1ca894:	e59d000a 	ldr	r0, [sp, #10]
        1ca898:	e1a00840 	mov	r0, r0, asr #16
        1ca89c:	e1510000 	cmp	r1, r0
        1ca8a0:	b1a00001 	movlt	r0, r1
        1ca8a4:	e5cd000b 	strb	r0, [sp, #11]
        1ca8a8:	e1a00440 	mov	r0, r0, asr #8
        1ca8ac:	e5cd000a 	strb	r0, [sp, #10]
        1ca8b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ca8b4:	e28d100c 	add	r1, sp, #12	; 0xc
        1ca8b8:	e8911008 	ldmia	r1, {r3, ip}
        1ca8bc:	e88d1008 	stmia	sp, {r3, ip}
        1ca8c0:	e59d0006 	ldr	r0, [sp, #6]
        1ca8c4:	e59d1002 	ldr	r1, [sp, #2]
        1ca8c8:	e0400001 	sub	r0, r0, r1
        1ca8cc:	e1a00800 	mov	r0, r0, lsl #16
        1ca8d0:	e1a00840 	mov	r0, r0, asr #16
        1ca8d4:	e3a01020 	mov	r1, #32	; 0x20
        1ca8d8:	e3500020 	cmp	r0, #32	; 0x20
        1ca8dc:	c1a00001 	movgt	r0, r1
        1ca8e0:	e59d2004 	ldr	r2, [sp, #4]
        1ca8e4:	e59d1000 	ldr	r1, [sp]
        1ca8e8:	e0421001 	sub	r1, r2, r1
        1ca8ec:	e1a01801 	mov	r1, r1, lsl #16
        1ca8f0:	e1a01841 	mov	r1, r1, asr #16
        1ca8f4:	e3a0203c 	mov	r2, #60	; 0x3c
        1ca8f8:	e351003c 	cmp	r1, #60	; 0x3c
        1ca8fc:	c1a01002 	movgt	r1, r2
        1ca900:	e41d2008 	ldr	r2, [sp], -#8	; fField8
        1ca904:	e1a02822 	mov	r2, r2, lsr #16
        1ca908:	e0820000 	add	r0, r2, r0
        1ca90c:	e5cd000d 	strb	r0, [sp, #13]
        1ca910:	e1a00440 	mov	r0, r0, asr #8
        1ca914:	e5cd000c 	strb	r0, [sp, #12]
        1ca918:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1ca91c:	e0800001 	add	r0, r0, r1
        1ca920:	e5cd000f 	strb	r0, [sp, #15]
        1ca924:	e1a00440 	mov	r0, r0, asr #8
        1ca928:	e5cd000e 	strb	r0, [sp, #14]
        1ca92c:	e3a00014 	mov	r0, #20	; 0x14
        1ca930:	eb680f80 	bl	1bce738 <$__nw(unsigned int)>
        1ca934:	e1b06000 	movs	r6, r0
        1ca938:	0a000003 	beq	1ca94c <TMeetingView::HandleClick(RefVar const &)+0x420>
        1ca93c:	e1a00006 	mov	r0, r6
        1ca940:	eb62f6b6 	bl	1a88420 <THilite::$__ct(void)>
        1ca944:	e59f012c 	ldr	r0, [pc, #12c]	; 1caa78 <TMeetingView::HandleClick(RefVar const &)+0x54c>
        1ca948:	e5860000 	str	r0, [r6]
        1ca94c:	e3a00000 	mov	r0, #0	; 0x0
        1ca950:	e5cd0001 	strb	r0, [sp, #1]
        1ca954:	e5cd0000 	strb	r0, [sp]
        1ca958:	e5cd0003 	strb	r0, [sp, #3]
        1ca95c:	e5cd0002 	strb	r0, [sp, #2]
        1ca960:	e5cd0005 	strb	r0, [sp, #5]
        1ca964:	e5cd0004 	strb	r0, [sp, #4]
        1ca968:	e5cd0007 	strb	r0, [sp, #7]
        1ca96c:	e5cd0006 	strb	r0, [sp, #6]
        1ca970:	e2861004 	add	r1, r6, #4	; 0x4
        1ca974:	e89d5000 	ldmia	sp, {ip, lr}
        1ca978:	e8815000 	stmia	r1, {ip, lr}
        1ca97c:	e3a01001 	mov	r1, #1	; 0x1
        1ca980:	e5c6100c 	strb	r1, [r6, #12]
        1ca984:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1ca988:	e5990000 	ldr	r0, [r9]
        1ca98c:	e5900000 	ldr	r0, [r0]
        1ca990:	eb67dded 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca994:	e58d0008 	str	r0, [sp, #8]	; fField8
        1ca998:	e59f00dc 	ldr	r0, [pc, #dc]	; 1caa7c <TMeetingView::HandleClick(RefVar const &)+0x550>
        1ca99c:	e5900000 	ldr	r0, [r0]
        1ca9a0:	e5901000 	ldr	r1, [r0]
        1ca9a4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1ca9a8:	e5900000 	ldr	r0, [r0]
        1ca9ac:	eb67e62b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1ca9b0:	e59d1050 	ldr	r1, [sp, #80]
        1ca9b4:	e5810000 	str	r0, [r1]
        1ca9b8:	e1a00007 	mov	r0, r7
        1ca9bc:	eb67dde2 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca9c0:	e58d0000 	str	r0, [sp]
        1ca9c4:	e1a0200d 	mov	r2, sp
        1ca9c8:	e59f10ac 	ldr	r1, [pc, #ac]	; 1caa7c <TMeetingView::HandleClick(RefVar const &)+0x550>
        1ca9cc:	e1a07001 	mov	r7, r1
        1ca9d0:	e28d0008 	add	r0, sp, #8	; 0x8
        1ca9d4:	eb67ee63 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1ca9d8:	e59d0000 	ldr	r0, [sp]
        1ca9dc:	eb67e1f6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ca9e0:	e3a09000 	mov	r9, #0	; 0x0
        1ca9e4:	e1a00006 	mov	r0, r6
        1ca9e8:	eb62fabf 	bl	1a894ec <$AddressToRef(void *)>
        1ca9ec:	eb67ddd6 	bl	1bc214c <$AllocateRefHandle(long)>
        1ca9f0:	e58d0004 	str	r0, [sp, #4]
        1ca9f4:	e28d2004 	add	r2, sp, #4	; 0x4
        1ca9f8:	e1a01007 	mov	r1, r7
        1ca9fc:	e28d0008 	add	r0, sp, #8	; 0x8
        1caa00:	eb62fecf 	bl	1a8a544 <$ArrayAppend__FRC6RefVarN21>
        1caa04:	e59d0004 	ldr	r0, [sp, #4]
        1caa08:	eb67e1eb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1caa0c:	e3a06000 	mov	r6, #0	; 0x0
        1caa10:	e52d906c 	str	r9, [sp, -#108]!
        1caa14:	e28d0008 	add	r0, sp, #8	; 0x8
        1caa18:	eb679fd5 	bl	1bb2974 <$setjmp>
        1caa1c:	e3300000 	teq	r0, #0	; 0x0
        1caa20:	1a000016 	bne	1caa80 <TMeetingView::HandleClick(RefVar const &)+0x554>
        1caa24:	e1a0000d 	mov	r0, sp
        1caa28:	eb685593 	bl	1be007c <$AddExceptionHandler>
        1caa2c:	e3a03000 	mov	r3, #0	; 0x0
        1caa30:	e28d2094 	add	r2, sp, #148	; 0x94
        1caa34:	e3a01000 	mov	r1, #0	; 0x0
        1caa38:	e28d0080 	add	r0, sp, #128	; 0x80
        1caa3c:	e594c01c 	ldr	ip, [r4, #28]	; fField28
        1caa40:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1caa44:	e28d3090 	add	r3, sp, #144	; 0x90
        1caa48:	e28d209c 	add	r2, sp, #156	; 0x9c
        1caa4c:	e1a0100a 	mov	r1, sl
        1caa50:	e1a0000c 	mov	r0, ip
        1caa54:	e59cc000 	ldr	ip, [ip]
        1caa58:	e1a0e00f 	mov	lr, pc
        1caa5c:	e28cf0d0 	add	pc, ip, #208	; 0xd0
        1caa60:	e28dd010 	add	sp, sp, #16	; 0x10
        1caa64:	e1a08000 	mov	r8, r0
        1caa68:	e1a0000d 	mov	r0, sp
        1caa6c:	eb685991 	bl	1be10b8 <$ExitHandler>
        1caa70:	ea000003 	b	1caa84 <TMeetingView::HandleClick(RefVar const &)+0x558>
        1caa74:	0c104c5c 	ldceq	12, cr4, [r0], -#368
        1caa78:	0001e48c 	andeq	lr, r1, ip, lsl #9
        1caa7c:	00683110 	rsbeq	r3, r8, r0, lsl r1
        1caa80:	e3a06001 	mov	r6, #1	; 0x1
        1caa84:	e28d0074 	add	r0, sp, #116	; 0x74
        1caa88:	eb6382db 	bl	1aab5fc <$DeleteMeetingHilite(RefVar const &)>
        1caa8c:	e59d00bc 	ldr	r0, [sp, #188]
        1caa90:	e5900000 	ldr	r0, [r0]
        1caa94:	e3300002 	teq	r0, #2	; 0x2
        1caa98:	0a00000c 	beq	1caad0 <TMeetingView::HandleClick(RefVar const &)+0x5a4>
        1caa9c:	e28d20bc 	add	r2, sp, #188	; 0xbc
        1caaa0:	e1a01007 	mov	r1, r7
        1caaa4:	e28d0074 	add	r0, sp, #116	; 0x74
        1caaa8:	eb67ee2e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1caaac:	e59f00cc 	ldr	r0, [pc, #cc]	; 1cab80 <TMeetingView::HandleClick(RefVar const &)+0x654>
        1caab0:	e5900000 	ldr	r0, [r0]
        1caab4:	e5901000 	ldr	r1, [r0]
        1caab8:	e59d0074 	ldr	r0, [sp, #116]
        1caabc:	e5900000 	ldr	r0, [r0]
        1caac0:	eb67e5e6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1caac4:	e3300002 	teq	r0, #2	; 0x2
        1caac8:	028d0074 	addeq	r0, sp, #116	; 0x74
        1caacc:	0b6382ca 	bleq	1aab5fc <$DeleteMeetingHilite(RefVar const &)>
        1caad0:	e3360000 	teq	r6, #0	; 0x0
        1caad4:	11a0000d 	movne	r0, sp
        1caad8:	1b685d9d 	blne	1be2154 <$NextHandler>
        1caadc:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1caae0:	e3380000 	teq	r8, #0	; 0x0
        1caae4:	1a000018 	bne	1cab4c <TMeetingView::HandleClick(RefVar const &)+0x620>
        1caae8:	e28d0040 	add	r0, sp, #64	; 0x40
        1caaec:	eb66175c 	bl	1b50864 <$InvertRect(Rect *)>
        1caaf0:	e3a00001 	mov	r0, #1	; 0x1
        1caaf4:	eb6344a8 	bl	1a9bd9c <$MakeArray(long)>
        1caaf8:	e59d1050 	ldr	r1, [sp, #80]
        1caafc:	e5810000 	str	r0, [r1]
        1cab00:	e1a00005 	mov	r0, r5
        1cab04:	eb636e13 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        1cab08:	eb62fa77 	bl	1a894ec <$AddressToRef(void *)>
        1cab0c:	eb67dd8e 	bl	1bc214c <$AllocateRefHandle(long)>
        1cab10:	e1a05000 	mov	r5, r0
        1cab14:	e5902000 	ldr	r2, [r0]
        1cab18:	e59d0050 	ldr	r0, [sp, #80]
        1cab1c:	e5900000 	ldr	r0, [r0]
        1cab20:	e1a01009 	mov	r1, r9
        1cab24:	eb67ee0b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1cab28:	e1a00005 	mov	r0, r5
        1cab2c:	eb67e1a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cab30:	e3a03000 	mov	r3, #0	; 0x0
        1cab34:	e92d0008 	stmdb	sp!, {r3}
        1cab38:	e28d2054 	add	r2, sp, #84	; 0x54
        1cab3c:	e59f1040 	ldr	r1, [pc, #40]	; 1cab84 <TMeetingView::HandleClick(RefVar const &)+0x658>
        1cab40:	e1a00004 	mov	r0, r4
        1cab44:	eb6802a5 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        1cab48:	e28dd004 	add	sp, sp, #4	; 0x4
        1cab4c:	e3a04001 	mov	r4, #1	; 0x1
        1cab50:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1cab54:	eb67e198 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cab58:	e59d0028 	ldr	r0, [sp, #40]
        1cab5c:	eb67e196 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cab60:	e59d0030 	ldr	r0, [sp, #48]
        1cab64:	eb67e194 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cab68:	e59d0034 	ldr	r0, [sp, #52]
        1cab6c:	eb67e192 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cab70:	e59d0050 	ldr	r0, [sp, #80]
        1cab74:	eb67e190 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cab78:	e1a00004 	mov	r0, r4
        1cab7c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1cab80:	00684f48 	rsbeq	r4, r8, r8, asr #30
        1cab84:	00684f38 	rsbeq	r4, r8, r8, lsr pc
        1cab88:	e3a04002 	mov	r4, #2	; 0x2
        1cab8c:	e59d0014 	ldr	r0, [sp, #20]
        1cab90:	eb67e189 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cab94:	e1a00004 	mov	r0, r4
        1cab98:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)
 * Address: 001cab9c
 */
TMeetingView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char) {
    /*
        1cab9c:	e1a0c00d 	mov	ip, sp
        1caba0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1caba4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1caba8:	e1a05000 	mov	r5, r0
        1cabac:	e1a06001 	mov	r6, r1
        1cabb0:	e1a04002 	mov	r4, r2
        1cabb4:	e1a07003 	mov	r7, r3
        1cabb8:	e59b0004 	ldr	r0, [fp, #4]
        1cabbc:	e20090ff 	and	r9, r0, #255	; 0xff
        1cabc0:	e2850010 	add	r0, r5, #16	; 0x10
        1cabc4:	e1a08000 	mov	r8, r0
        1cabc8:	eb6348a2 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
        1cabcc:	e3300000 	teq	r0, #0	; 0x0
        1cabd0:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1cabd4:	e3390000 	teq	r9, #0	; 0x0
        1cabd8:	1a000031 	bne	1caca4 <TMeetingView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x108>
        1cabdc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1cabe0:	e8981008 	ldmia	r8, {r3, ip}
        1cabe4:	e88d1008 	stmia	sp, {r3, ip}
        1cabe8:	e1a00005 	mov	r0, r5
        1cabec:	e5951000 	ldr	r1, [r5]
        1cabf0:	e1a0e00f 	mov	lr, pc
        1cabf4:	e281ff5a 	add	pc, r1, #360	; 0x168
        1cabf8:	e2800010 	add	r0, r0, #16	; 0x10
        1cabfc:	e5901006 	ldr	r1, [r0, #6]
        1cac00:	e1a01821 	mov	r1, r1, lsr #16
        1cac04:	e5900002 	ldr	r0, [r0, #2]
        1cac08:	e1a00820 	mov	r0, r0, lsr #16
        1cac0c:	e0410000 	sub	r0, r1, r0
        1cac10:	e59d1000 	ldr	r1, [sp]
        1cac14:	e0800001 	add	r0, r0, r1
        1cac18:	e5cd0003 	strb	r0, [sp, #3]
        1cac1c:	e1a00440 	mov	r0, r0, asr #8
        1cac20:	e5cd0002 	strb	r0, [sp, #2]
        1cac24:	e59d0000 	ldr	r0, [sp]
        1cac28:	e2800018 	add	r0, r0, #24	; 0x18
        1cac2c:	e5cd0007 	strb	r0, [sp, #7]
        1cac30:	e1a00440 	mov	r0, r0, asr #8
        1cac34:	e5cd0006 	strb	r0, [sp, #6]
        1cac38:	e59d0002 	ldr	r0, [sp, #2]
        1cac3c:	e2800010 	add	r0, r0, #16	; 0x10
        1cac40:	e5cd0005 	strb	r0, [sp, #5]
        1cac44:	e1a00440 	mov	r0, r0, asr #8
        1cac48:	e5cd0004 	strb	r0, [sp, #4]
        1cac4c:	e1a01006 	mov	r1, r6
        1cac50:	e1a0000d 	mov	r0, sp
        1cac54:	eb6312cc 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        1cac58:	e3500032 	cmp	r0, #50	; 0x32
        1cac5c:	a3a00005 	movge	r0, #5	; 0x5
        1cac60:	aa00000e 	bge	1caca0 <TMeetingView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x104>
        1cac64:	e1a00005 	mov	r0, r5
        1cac68:	e5951000 	ldr	r1, [r5]
        1cac6c:	e1a0e00f 	mov	lr, pc
        1cac70:	e281ff51 	add	pc, r1, #324	; 0x144
        1cac74:	e3a03000 	mov	r3, #0	; 0x0
        1cac78:	e92d0008 	stmdb	sp!, {r3}
        1cac7c:	e1a03007 	mov	r3, r7
        1cac80:	e1a02004 	mov	r2, r4
        1cac84:	e1a01006 	mov	r1, r6
        1cac88:	e590c000 	ldr	ip, [r0]
        1cac8c:	e1a0e00f 	mov	lr, pc
        1cac90:	e28cf090 	add	pc, ip, #144	; 0x90
        1cac94:	e28dd004 	add	sp, sp, #4	; 0x4
        1cac98:	e3300005 	teq	r0, #5	; 0x5
        1cac9c:	03a00004 	moveq	r0, #4	; 0x4
        1caca0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1caca4:	e3340004 	teq	r4, #4	; 0x4
        1caca8:	03a04005 	moveq	r4, #5	; 0x5
        1cacac:	e1a00005 	mov	r0, r5
        1cacb0:	e5951000 	ldr	r1, [r5]
        1cacb4:	e1a0e00f 	mov	lr, pc
        1cacb8:	e281ff51 	add	pc, r1, #324	; 0x144
        1cacbc:	e3a03001 	mov	r3, #1	; 0x1
        1cacc0:	e92d0008 	stmdb	sp!, {r3}
        1cacc4:	e1a03007 	mov	r3, r7
        1cacc8:	e1a02004 	mov	r2, r4
        1caccc:	e1a01006 	mov	r1, r6
        1cacd0:	e590c000 	ldr	ip, [r0]
        1cacd4:	e1a0e00f 	mov	lr, pc
        1cacd8:	e28cf090 	add	pc, ip, #144	; 0x90
        1cacdc:	e28dd004 	add	sp, sp, #4	; 0x4
        1cace0:	e3340005 	teq	r4, #5	; 0x5
        1cace4:	03a04004 	moveq	r4, #4	; 0x4
        1cace8:	e1a00004 	mov	r0, r4
        1cacec:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::GetTextView(void)
 * Address: 001cacf0
 */
TMeetingView::GetTextView(void) {
    /*
        1cacf0:	e5900020 	ldr	r0, [r0, #32]	; fField32
        1cacf4:	e3a01001 	mov	r1, #1	; 0x1
        1cacf8:	ea686d91 	b	1be6344 <CList::$At(long)>
    */
}

/**
 * Symbol: TMeetingView::GetSliderView(void)
 * Address: 001cacfc
 */
TMeetingView::GetSliderView(void) {
    /*
        1cacfc:	e5900020 	ldr	r0, [r0, #32]	; fField32
        1cad00:	e3a01000 	mov	r1, #0	; 0x0
        1cad04:	ea686d8e 	b	1be6344 <CList::$At(long)>
    */
}

/**
 * Symbol: TMeetingView::AddHilited(RefVar const &, TEditView *)
 * Address: 001cad08
 */
TMeetingView::AddHilited(RefVar const &, TEditView *) {
    /*
        1cad08:	ea62f9ef 	b	1a894cc <TContainerView::$AddHilited(RefVar const &, TEditView *)>
    */
}

/**
 * Symbol: TMeetingView::DrawHilites(unsigned char)
 * Address: 001cad0c
 */
TMeetingView::DrawHilites(unsigned char) {
    /*
        1cad0c:	e1a0c00d 	mov	ip, sp
        1cad10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1cad14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cad18:	e1a04000 	mov	r4, r0
        1cad1c:	e20150ff 	and	r5, r1, #255	; 0xff
        1cad20:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cad24:	eb639aeb 	bl	1ab18d8 <TView::$FirstHilite(void)>
        1cad28:	eb67dd07 	bl	1bc214c <$AllocateRefHandle(long)>
        1cad2c:	e58d0000 	str	r0, [sp]
        1cad30:	e5900000 	ldr	r0, [r0]
        1cad34:	e3300002 	teq	r0, #2	; 0x2
        1cad38:	0a000006 	beq	1cad58 <TMeetingView::DrawHilites(unsigned char)+0x4c>
        1cad3c:	e1a0100d 	mov	r1, sp
        1cad40:	e1a00004 	mov	r0, r4
        1cad44:	e5942000 	ldr	r2, [r4]
        1cad48:	e1a0e00f 	mov	lr, pc
        1cad4c:	e282f09c 	add	pc, r2, #156	; 0x9c
        1cad50:	e3300000 	teq	r0, #0	; 0x0
        1cad54:	1a000011 	bne	1cada0 <TMeetingView::DrawHilites(unsigned char)+0x94>
        1cad58:	e1a00004 	mov	r0, r4
        1cad5c:	e5941000 	ldr	r1, [r4]
        1cad60:	e1a0e00f 	mov	lr, pc
        1cad64:	e281ff51 	add	pc, r1, #324	; 0x144
        1cad68:	e1a04000 	mov	r4, r0
        1cad6c:	e5901000 	ldr	r1, [r0]
        1cad70:	e1a0e00f 	mov	lr, pc
        1cad74:	e281f094 	add	pc, r1, #148	; 0x94
        1cad78:	e3300000 	teq	r0, #0	; 0x0
        1cad7c:	0a000007 	beq	1cada0 <TMeetingView::DrawHilites(unsigned char)+0x94>
        1cad80:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1cad84:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        1cad88:	1a000004 	bne	1cada0 <TMeetingView::DrawHilites(unsigned char)+0x94>
        1cad8c:	e1a01005 	mov	r1, r5
        1cad90:	e1a00004 	mov	r0, r4
        1cad94:	e5942000 	ldr	r2, [r4]
        1cad98:	e1a0e00f 	mov	lr, pc
        1cad9c:	e282f098 	add	pc, r2, #152	; 0x98
        1cada0:	e59d0000 	ldr	r0, [sp]
        1cada4:	eb67e104 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cada8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::DrawHilitedData(void)
 * Address: 001cadac
 */
TMeetingView::DrawHilitedData(void) {
    /*
        1cadac:	e1a0c00d 	mov	ip, sp
        1cadb0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1cadb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cadb8:	e1a04000 	mov	r4, r0
        1cadbc:	e5901000 	ldr	r1, [r0]
        1cadc0:	e1a0e00f 	mov	lr, pc
        1cadc4:	e281f094 	add	pc, r1, #148	; 0x94
        1cadc8:	e3300000 	teq	r0, #0	; 0x0
        1cadcc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1cadd0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cadd4:	e1a05004 	mov	r5, r4
        1cadd8:	e1a00004 	mov	r0, r4
        1caddc:	eb639abd 	bl	1ab18d8 <TView::$FirstHilite(void)>
        1cade0:	eb67dcd9 	bl	1bc214c <$AllocateRefHandle(long)>
        1cade4:	e58d0000 	str	r0, [sp]
        1cade8:	e1a0100d 	mov	r1, sp
        1cadec:	e1a00005 	mov	r0, r5
        1cadf0:	e5952000 	ldr	r2, [r5]
        1cadf4:	e1a0e00f 	mov	lr, pc
        1cadf8:	e282f09c 	add	pc, r2, #156	; 0x9c
        1cadfc:	e1b05000 	movs	r5, r0
        1cae00:	13a05001 	movne	r5, #1	; 0x1
        1cae04:	e59d0000 	ldr	r0, [sp]
        1cae08:	eb67e0eb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cae0c:	e3350000 	teq	r5, #0	; 0x0
        1cae10:	0a000009 	beq	1cae3c <TMeetingView::DrawHilitedData(void)+0x90>
        1cae14:	e24dd008 	sub	sp, sp, #8	; 0x8
        1cae18:	e2840010 	add	r0, r4, #16	; 0x10
        1cae1c:	e8905000 	ldmia	r0, {ip, lr}
        1cae20:	e88d5000 	stmia	sp, {ip, lr}
        1cae24:	e1a0100d 	mov	r1, sp
        1cae28:	e1a00004 	mov	r0, r4
        1cae2c:	e3a02000 	mov	r2, #0	; 0x0
        1cae30:	eb67fdb3 	bl	1bca504 <TView::$Draw(TRect const &, unsigned char)>
        1cae34:	e28dd008 	add	sp, sp, #8	; 0x8
        1cae38:	ea000006 	b	1cae58 <TMeetingView::DrawHilitedData(void)+0xac>
        1cae3c:	e1a00004 	mov	r0, r4
        1cae40:	e5941000 	ldr	r1, [r4]
        1cae44:	e1a0e00f 	mov	lr, pc
        1cae48:	e281ff51 	add	pc, r1, #324	; 0x144
        1cae4c:	e5901000 	ldr	r1, [r0]
        1cae50:	e1a0e00f 	mov	lr, pc
        1cae54:	e281f088 	add	pc, r1, #136	; 0x88
        1cae58:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::Hilited(void)
 * Address: 001caee0
 */
TMeetingView::Hilited(void) {
    /*
        1caee0:	e1a0c00d 	mov	ip, sp
        1caee4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1caee8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1caeec:	e1a04000 	mov	r4, r0
        1caef0:	eb63a6c8 	bl	1ab4a18 <TView::$Hilited(void)>
        1caef4:	e3300000 	teq	r0, #0	; 0x0
        1caef8:	1a000008 	bne	1caf20 <TMeetingView::Hilited(void)+0x40>
        1caefc:	e1a00004 	mov	r0, r4
        1caf00:	e5941000 	ldr	r1, [r4]
        1caf04:	e1a0e00f 	mov	lr, pc
        1caf08:	e281ff51 	add	pc, r1, #324	; 0x144
        1caf0c:	e5901000 	ldr	r1, [r0]
        1caf10:	e1a0e00f 	mov	lr, pc
        1caf14:	e281f094 	add	pc, r1, #148	; 0x94
        1caf18:	e3300000 	teq	r0, #0	; 0x0
        1caf1c:	0a000001 	beq	1caf28 <TMeetingView::Hilited(void)+0x48>
        1caf20:	e3a00001 	mov	r0, #1	; 0x1
        1caf24:	ea000000 	b	1caf2c <TMeetingView::Hilited(void)+0x4c>
        1caf28:	e3a00000 	mov	r0, #0	; 0x0
        1caf2c:	e20000ff 	and	r0, r0, #255	; 0xff
        1caf30:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::GlobalHiliteBounds(TRect *)
 * Address: 001caf34
 */
TMeetingView::GlobalHiliteBounds(TRect *) {
    /*
        1caf34:	e1a0c00d 	mov	ip, sp
        1caf38:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1caf3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1caf40:	e1a04000 	mov	r4, r0
        1caf44:	e1a05001 	mov	r5, r1
        1caf48:	eb639a62 	bl	1ab18d8 <TView::$FirstHilite(void)>
        1caf4c:	eb67dc7e 	bl	1bc214c <$AllocateRefHandle(long)>
        1caf50:	e1a06000 	mov	r6, r0
        1caf54:	e5900000 	ldr	r0, [r0]
        1caf58:	e3300002 	teq	r0, #2	; 0x2
        1caf5c:	0a000003 	beq	1caf70 <TMeetingView::GlobalHiliteBounds(TRect *)+0x3c>
        1caf60:	e1a01005 	mov	r1, r5
        1caf64:	e1a00004 	mov	r0, r4
        1caf68:	eb632efc 	bl	1a96b60 <TContainerView::$GlobalHiliteBounds(TRect *)>
        1caf6c:	ea00000b 	b	1cafa0 <TMeetingView::GlobalHiliteBounds(TRect *)+0x6c>
        1caf70:	e1a00004 	mov	r0, r4
        1caf74:	e5941000 	ldr	r1, [r4]
        1caf78:	e1a0e00f 	mov	lr, pc
        1caf7c:	e281ff51 	add	pc, r1, #324	; 0x144
        1caf80:	e1a01005 	mov	r1, r5
        1caf84:	e5902000 	ldr	r2, [r0]
        1caf88:	e1a0e00f 	mov	lr, pc
        1caf8c:	e282f0b0 	add	pc, r2, #176	; 0xb0
        1caf90:	e1a00004 	mov	r0, r4
        1caf94:	e5941000 	ldr	r1, [r4]
        1caf98:	e1a0e00f 	mov	lr, pc
        1caf9c:	e281f0c0 	add	pc, r1, #192	; 0xc0
        1cafa0:	e1a04000 	mov	r4, r0
        1cafa4:	e1a00006 	mov	r0, r6
        1cafa8:	eb67e083 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cafac:	e1a00004 	mov	r0, r4
        1cafb0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)
 * Address: 001cafb4
 */
TMeetingView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *) {
    /*
        1cafb4:	e1a0c00d 	mov	ip, sp
        1cafb8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1cafbc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1cafc0:	e24cb014 	sub	fp, ip, #20	; 0x14
        1cafc4:	e1a04000 	mov	r4, r0
        1cafc8:	e1a05003 	mov	r5, r3
        1cafcc:	e59b0024 	ldr	r0, [fp, #36]
        1cafd0:	e21070ff 	ands	r7, r0, #255	; 0xff
        1cafd4:	e2840010 	add	r0, r4, #16	; 0x10
        1cafd8:	e28b9018 	add	r9, fp, #24	; 0x18
        1cafdc:	e8990300 	ldmia	r9, {r8, r9}
        1cafe0:	e59ba014 	ldr	sl, [fp, #20]
        1cafe4:	0a000025 	beq	1cb080 <TMeetingView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0xcc>
        1cafe8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1cafec:	e8905000 	ldmia	r0, {ip, lr}
        1caff0:	e88d5000 	stmia	sp, {ip, lr}
        1caff4:	e1a0100d 	mov	r1, sp
        1caff8:	e1a00005 	mov	r0, r5
        1caffc:	eb6311e2 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        1cb000:	e3500019 	cmp	r0, #25	; 0x19
        1cb004:	a8955000 	ldmgeia	r5, {ip, lr}
        1cb008:	a88d5000 	stmgeia	sp, {ip, lr}
        1cb00c:	aa000004 	bge	1cb024 <TMeetingView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x70>
        1cb010:	e59d0004 	ldr	r0, [sp, #4]
        1cb014:	e2400002 	sub	r0, r0, #2	; 0x2
        1cb018:	e5cd0003 	strb	r0, [sp, #3]
        1cb01c:	e1a00440 	mov	r0, r0, asr #8
        1cb020:	e5cd0002 	strb	r0, [sp, #2]
        1cb024:	e5849038 	str	r9, [r4, #56]	; fField56
        1cb028:	e1a00004 	mov	r0, r4
        1cb02c:	e5941000 	ldr	r1, [r4]
        1cb030:	e1a0e00f 	mov	lr, pc
        1cb034:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb038:	e1a0c000 	mov	ip, r0
        1cb03c:	e1a01007 	mov	r1, r7
        1cb040:	e59b0020 	ldr	r0, [fp, #32]	; fField32
        1cb044:	e28b3028 	add	r3, fp, #40	; 0x28
        1cb048:	e893000c 	ldmia	r3, {r2, r3}
        1cb04c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1cb050:	e1a03009 	mov	r3, r9
        1cb054:	e1a02008 	mov	r2, r8
        1cb058:	e1a0100a 	mov	r1, sl
        1cb05c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1cb060:	e28d301c 	add	r3, sp, #28	; 0x1c
        1cb064:	e1a0000c 	mov	r0, ip
        1cb068:	e28b2008 	add	r2, fp, #8	; 0x8
        1cb06c:	e8920006 	ldmia	r2, {r1, r2}
        1cb070:	e59cc000 	ldr	ip, [ip]
        1cb074:	e1a0e00f 	mov	lr, pc
        1cb078:	e28cff52 	add	pc, ip, #328	; 0x148
        1cb07c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1cb080:	e24dd018 	sub	sp, sp, #24	; 0x18
        1cb084:	e3a06000 	mov	r6, #0	; 0x0
        1cb088:	e28d2010 	add	r2, sp, #16	; 0x10
        1cb08c:	e8901008 	ldmia	r0, {r3, ip}
        1cb090:	e8821008 	stmia	r2, {r3, ip}
        1cb094:	e28d2008 	add	r2, sp, #8	; 0x8
        1cb098:	e8901008 	ldmia	r0, {r3, ip}
        1cb09c:	e8821008 	stmia	r2, {r3, ip}
        1cb0a0:	e8901008 	ldmia	r0, {r3, ip}
        1cb0a4:	e88d1008 	stmia	sp, {r3, ip}
        1cb0a8:	e59d000c 	ldr	r0, [sp, #12]
        1cb0ac:	e2800078 	add	r0, r0, #120	; 0x78
        1cb0b0:	e5cd000f 	strb	r0, [sp, #15]
        1cb0b4:	e1a00440 	mov	r0, r0, asr #8
        1cb0b8:	e5cd000e 	strb	r0, [sp, #14]
        1cb0bc:	e59d0006 	ldr	r0, [sp, #6]
        1cb0c0:	e2800014 	add	r0, r0, #20	; 0x14
        1cb0c4:	e5cd0005 	strb	r0, [sp, #5]
        1cb0c8:	e1a00440 	mov	r0, r0, asr #8
        1cb0cc:	e5cd0004 	strb	r0, [sp, #4]
        1cb0d0:	e59d0002 	ldr	r0, [sp, #2]
        1cb0d4:	e240000a 	sub	r0, r0, #10	; 0xa
        1cb0d8:	e5cd0001 	strb	r0, [sp, #1]
        1cb0dc:	e1a00440 	mov	r0, r0, asr #8
        1cb0e0:	e5cd0000 	strb	r0, [sp]
        1cb0e4:	e59d0004 	ldr	r0, [sp, #4]
        1cb0e8:	e2800078 	add	r0, r0, #120	; 0x78
        1cb0ec:	e5cd0007 	strb	r0, [sp, #7]
        1cb0f0:	e1a00440 	mov	r0, r0, asr #8
        1cb0f4:	e5cd0006 	strb	r0, [sp, #6]
        1cb0f8:	e1a0100d 	mov	r1, sp
        1cb0fc:	e1a00005 	mov	r0, r5
        1cb100:	eb633f05 	bl	1a9ad1c <TRect::$Intersects( const(TRect const &))>
        1cb104:	e3300000 	teq	r0, #0	; 0x0
        1cb108:	0a000029 	beq	1cb1b4 <TMeetingView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x200>
        1cb10c:	e1a00004 	mov	r0, r4
        1cb110:	e5941000 	ldr	r1, [r4]
        1cb114:	e1a0e00f 	mov	lr, pc
        1cb118:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb11c:	e1a0c000 	mov	ip, r0
        1cb120:	e1a01007 	mov	r1, r7
        1cb124:	e59b0020 	ldr	r0, [fp, #32]	; fField32
        1cb128:	e28b3028 	add	r3, fp, #40	; 0x28
        1cb12c:	e893000c 	ldmia	r3, {r2, r3}
        1cb130:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1cb134:	e1a03009 	mov	r3, r9
        1cb138:	e1a02008 	mov	r2, r8
        1cb13c:	e1a0100a 	mov	r1, sl
        1cb140:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1cb144:	e1a03005 	mov	r3, r5
        1cb148:	e1a0000c 	mov	r0, ip
        1cb14c:	e28b2008 	add	r2, fp, #8	; 0x8
        1cb150:	e8920006 	ldmia	r2, {r1, r2}
        1cb154:	e59cc000 	ldr	ip, [ip]
        1cb158:	e1a0e00f 	mov	lr, pc
        1cb15c:	e28cff52 	add	pc, ip, #328	; 0x148
        1cb160:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1cb164:	e3300006 	teq	r0, #6	; 0x6
        1cb168:	03a06006 	moveq	r6, #6	; 0x6
        1cb16c:	0a000010 	beq	1cb1b4 <TMeetingView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x200>
        1cb170:	e28d1010 	add	r1, sp, #16	; 0x10
        1cb174:	e1a00005 	mov	r0, r5
        1cb178:	eb631183 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        1cb17c:	e3500019 	cmp	r0, #25	; 0x19
        1cb180:	c3a06005 	movgt	r6, #5	; 0x5
        1cb184:	ca00000a 	bgt	1cb1b4 <TMeetingView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x200>
        1cb188:	e28d1008 	add	r1, sp, #8	; 0x8
        1cb18c:	e1a00005 	mov	r0, r5
        1cb190:	eb63117d 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        1cb194:	e3500019 	cmp	r0, #25	; 0x19
        1cb198:	ca000004 	bgt	1cb1b0 <TMeetingView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x1fc>
        1cb19c:	e3580000 	cmp	r8, #0	; 0x0
        1cb1a0:	85b40038 	ldrhi	r0, [r4, #56]!	; fField56
        1cb1a4:	8280003c 	addhi	r0, r0, #60	; 0x3c
        1cb1a8:	81500008 	cmphi	r0, r8
        1cb1ac:	9a000000 	bls	1cb1b4 <TMeetingView::HandleWord(unsigned short const *, unsigned long, TRect const &, TPoint const &, unsigned long, unsigned long, RefVar const &, unsigned char, long *, TUnitPublic *)+0x200>
        1cb1b0:	e3a06003 	mov	r6, #3	; 0x3
        1cb1b4:	e1a00006 	mov	r0, r6
        1cb1b8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::HandleHilite(TUnitPublic *, long, unsigned char)
 * Address: 001cb1bc
 */
TMeetingView::HandleHilite(TUnitPublic *, long, unsigned char) {
    /*
        1cb1bc:	e1a0c00d 	mov	ip, sp
        1cb1c0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1cb1c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cb1c8:	e1a05000 	mov	r5, r0
        1cb1cc:	e1a06001 	mov	r6, r1
        1cb1d0:	e1a04002 	mov	r4, r2
        1cb1d4:	e20380ff 	and	r8, r3, #255	; 0xff
        1cb1d8:	e3320001 	teq	r2, #1	; 0x1
        1cb1dc:	03a00000 	moveq	r0, #0	; 0x0
        1cb1e0:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1cb1e4:	e1a00005 	mov	r0, r5
        1cb1e8:	e5951000 	ldr	r1, [r5]
        1cb1ec:	e1a0e00f 	mov	lr, pc
        1cb1f0:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb1f4:	e1a07000 	mov	r7, r0
        1cb1f8:	e3380000 	teq	r8, #0	; 0x0
        1cb1fc:	1a000009 	bne	1cb228 <TMeetingView::HandleHilite(TUnitPublic *, long, unsigned char)+0x6c>
        1cb200:	e1a02004 	mov	r2, r4
        1cb204:	e1a01006 	mov	r1, r6
        1cb208:	e1a00007 	mov	r0, r7
        1cb20c:	e3a03000 	mov	r3, #0	; 0x0
        1cb210:	e597c000 	ldr	ip, [r7]
        1cb214:	e1a0e00f 	mov	lr, pc
        1cb218:	e28cf08c 	add	pc, ip, #140	; 0x8c
        1cb21c:	e3300001 	teq	r0, #1	; 0x1
        1cb220:	03a00005 	moveq	r0, #5	; 0x5
        1cb224:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1cb228:	e1a00005 	mov	r0, r5
        1cb22c:	e5951000 	ldr	r1, [r5]
        1cb230:	e1a0e00f 	mov	lr, pc
        1cb234:	e281f0ac 	add	pc, r1, #172	; 0xac
        1cb238:	e3340000 	teq	r4, #0	; 0x0
        1cb23c:	0a000015 	beq	1cb298 <TMeetingView::HandleHilite(TUnitPublic *, long, unsigned char)+0xdc>
        1cb240:	e3540005 	cmp	r4, #5	; 0x5
        1cb244:	13a00000 	movne	r0, #0	; 0x0
        1cb248:	03a00001 	moveq	r0, #1	; 0x1
        1cb24c:	e20080ff 	and	r8, r0, #255	; 0xff
        1cb250:	03a04001 	moveq	r4, #1	; 0x1
        1cb254:	e1a02004 	mov	r2, r4
        1cb258:	e1a01006 	mov	r1, r6
        1cb25c:	e1a00007 	mov	r0, r7
        1cb260:	e3a03001 	mov	r3, #1	; 0x1
        1cb264:	e597c000 	ldr	ip, [r7]
        1cb268:	e1a0e00f 	mov	lr, pc
        1cb26c:	e28cf08c 	add	pc, ip, #140	; 0x8c
        1cb270:	e3380000 	teq	r8, #0	; 0x0
        1cb274:	13a04005 	movne	r4, #5	; 0x5
        1cb278:	e3300000 	teq	r0, #0	; 0x0
        1cb27c:	0a000005 	beq	1cb298 <TMeetingView::HandleHilite(TUnitPublic *, long, unsigned char)+0xdc>
        1cb280:	e1a02007 	mov	r2, r7
        1cb284:	e1a00005 	mov	r0, r5
        1cb288:	e3a01001 	mov	r1, #1	; 0x1
        1cb28c:	e5953000 	ldr	r3, [r5]
        1cb290:	e1a0e00f 	mov	lr, pc
        1cb294:	e283fe16 	add	pc, r3, #352	; 0x160
        1cb298:	e1a00004 	mov	r0, r4
        1cb29c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::MakeHilite(long, TView *)
 * Address: 001cb2a0
 */
TMeetingView::MakeHilite(long, TView *) {
    /*
        1cb2a0:	e3310000 	teq	r1, #0	; 0x0
        1cb2a4:	03a02000 	moveq	r2, #0	; 0x0
        1cb2a8:	0a6342bf 	beq	1a9bdac <TContainerView::$MakeHilite(long, TView *)>
        1cb2ac:	e1a0c00d 	mov	ip, sp
        1cb2b0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1cb2b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cb2b8:	e1a04000 	mov	r4, r0
        1cb2bc:	e1a05002 	mov	r5, r2
        1cb2c0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1cb2c4:	e1a01000 	mov	r1, r0
        1cb2c8:	e3a02302 	mov	r2, #134217728	; 0x8000000
        1cb2cc:	e3a00047 	mov	r0, #71	; 0x47
        1cb2d0:	eb636c1a 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1cb2d4:	eb67db9c 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb2d8:	e58d0008 	str	r0, [sp, #8]	; fField8
        1cb2dc:	e1a00005 	mov	r0, r5
        1cb2e0:	eb63997c 	bl	1ab18d8 <TView::$FirstHilite(void)>
        1cb2e4:	eb67db98 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb2e8:	e1a07000 	mov	r7, r0
        1cb2ec:	e5900000 	ldr	r0, [r0]
        1cb2f0:	eb63533a 	bl	1a9ffe0 <$RefToAddress(long)>
        1cb2f4:	e5901000 	ldr	r1, [r0]
        1cb2f8:	e1a0e00f 	mov	lr, pc
        1cb2fc:	e281f004 	add	pc, r1, #4	; 0x4
        1cb300:	e1a06000 	mov	r6, r0
        1cb304:	e24dd008 	sub	sp, sp, #8	; 0x8
        1cb308:	e5950010 	ldr	r0, [r5, #16]	; fField16
        1cb30c:	e58d0000 	str	r0, [sp]
        1cb310:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1cb314:	e58d0004 	str	r0, [sp, #4]
        1cb318:	e59d0000 	ldr	r0, [sp]
        1cb31c:	e59d1004 	ldr	r1, [sp, #4]
        1cb320:	e0400001 	sub	r0, r0, r1
        1cb324:	e1a00800 	mov	r0, r0, lsl #16
        1cb328:	e1a00840 	mov	r0, r0, asr #16
        1cb32c:	e41d2004 	ldr	r2, [sp], -#4
        1cb330:	e1a02822 	mov	r2, r2, lsr #16
        1cb334:	e59d100a 	ldr	r1, [sp, #10]
        1cb338:	e0421001 	sub	r1, r2, r1
        1cb33c:	e1a01801 	mov	r1, r1, lsl #16
        1cb340:	e1a01841 	mov	r1, r1, asr #16
        1cb344:	e5cd0003 	strb	r0, [sp, #3]
        1cb348:	e1a00440 	mov	r0, r0, asr #8
        1cb34c:	e5cd0002 	strb	r0, [sp, #2]
        1cb350:	e5cd1001 	strb	r1, [sp, #1]
        1cb354:	e1a00441 	mov	r0, r1, asr #8
        1cb358:	e5cd0000 	strb	r0, [sp]
        1cb35c:	e49d0008 	ldr	r0, [sp], #8	; fField8
        1cb360:	e58d0008 	str	r0, [sp, #8]	; fField8
        1cb364:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1cb368:	e58d1000 	str	r1, [sp]
        1cb36c:	e59d1002 	ldr	r1, [sp, #2]
        1cb370:	e1a01841 	mov	r1, r1, asr #16
        1cb374:	e59d2000 	ldr	r2, [sp]
        1cb378:	e1a02842 	mov	r2, r2, asr #16
        1cb37c:	e5960018 	ldr	r0, [r6, #24]
        1cb380:	eb661959 	bl	1b518ec <$OffsetRgn__FPP6RegionlT2>
        1cb384:	e2860004 	add	r0, r6, #4	; 0x4
        1cb388:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1cb38c:	e58d1000 	str	r1, [sp]
        1cb390:	e59d1002 	ldr	r1, [sp, #2]
        1cb394:	e1a01841 	mov	r1, r1, asr #16
        1cb398:	e59d2000 	ldr	r2, [sp]
        1cb39c:	e1a02842 	mov	r2, r2, asr #16
        1cb3a0:	eb661950 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1cb3a4:	e28dd004 	add	sp, sp, #4	; 0x4
        1cb3a8:	e1a00006 	mov	r0, r6
        1cb3ac:	eb62f84e 	bl	1a894ec <$AddressToRef(void *)>
        1cb3b0:	eb67db65 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb3b4:	e58d0000 	str	r0, [sp]
        1cb3b8:	e1a0100d 	mov	r1, sp
        1cb3bc:	e28d0008 	add	r0, sp, #8	; 0x8
        1cb3c0:	eb636be7 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        1cb3c4:	e59d0000 	ldr	r0, [sp]
        1cb3c8:	eb67df7b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb3cc:	e59f001c 	ldr	r0, [pc, #1c]	; 1cb3f0 <TMeetingView::MakeHilite(long, TView *)+0x150>
        1cb3d0:	e5900000 	ldr	r0, [r0]
        1cb3d4:	e28d1008 	add	r1, sp, #8	; 0x8
        1cb3d8:	eb631516 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1cb3dc:	e1a00007 	mov	r0, r7
        1cb3e0:	eb67df75 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb3e4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1cb3e8:	eb67df73 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb3ec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1cb3f0:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TMeetingView::HiliteText(long, long, unsigned char)
 * Address: 001cb3f4
 */
TMeetingView::HiliteText(long, long, unsigned char) {
    /*
        1cb3f4:	e1a0c00d 	mov	ip, sp
        1cb3f8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1cb3fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cb400:	e1a04000 	mov	r4, r0
        1cb404:	e1a06001 	mov	r6, r1
        1cb408:	e1a05002 	mov	r5, r2
        1cb40c:	e20380ff 	and	r8, r3, #255	; 0xff
        1cb410:	e5901000 	ldr	r1, [r0]
        1cb414:	e1a0e00f 	mov	lr, pc
        1cb418:	e281f0ac 	add	pc, r1, #172	; 0xac
        1cb41c:	e1a00004 	mov	r0, r4
        1cb420:	e5941000 	ldr	r1, [r4]
        1cb424:	e1a0e00f 	mov	lr, pc
        1cb428:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb42c:	e1a07000 	mov	r7, r0
        1cb430:	e1a02005 	mov	r2, r5
        1cb434:	e1a01006 	mov	r1, r6
        1cb438:	e3a03000 	mov	r3, #0	; 0x0
        1cb43c:	e590c000 	ldr	ip, [r0]
        1cb440:	e1a0e00f 	mov	lr, pc
        1cb444:	e28cff53 	add	pc, ip, #332	; 0x14c
        1cb448:	e1a02007 	mov	r2, r7
        1cb44c:	e1a00004 	mov	r0, r4
        1cb450:	e3a01001 	mov	r1, #1	; 0x1
        1cb454:	e5943000 	ldr	r3, [r4]
        1cb458:	e1a0e00f 	mov	lr, pc
        1cb45c:	e283fe16 	add	pc, r3, #352	; 0x160
        1cb460:	e3380000 	teq	r8, #0	; 0x0
        1cb464:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1cb468:	e5b4101c 	ldr	r1, [r4, #28]!	; fField28
        1cb46c:	e59f0008 	ldr	r0, [pc, #8]	; 1cb47c <TMeetingView::HiliteText(long, long, unsigned char)+0x88>	; fField8
        1cb470:	e5900000 	ldr	r0, [r0]
        1cb474:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        1cb478:	ea635b27 	b	1aa211c <TRootView::$SetHilitedView(TView *)>
        1cb47c:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TMeetingView::RemoveHilite(RefVar const &)
 * Address: 001cb480
 */
TMeetingView::RemoveHilite(RefVar const &) {
    /*
        1cb480:	e1a0c00d 	mov	ip, sp
        1cb484:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1cb488:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cb48c:	e1a04000 	mov	r4, r0
        1cb490:	e1a05001 	mov	r5, r1
        1cb494:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cb498:	eb63990e 	bl	1ab18d8 <TView::$FirstHilite(void)>
        1cb49c:	eb67db2a 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb4a0:	e58d0000 	str	r0, [sp]
        1cb4a4:	e5950000 	ldr	r0, [r5]
        1cb4a8:	e5900000 	ldr	r0, [r0]
        1cb4ac:	e59d1000 	ldr	r1, [sp]
        1cb4b0:	e5911000 	ldr	r1, [r1]
        1cb4b4:	e1300001 	teq	r0, r1
        1cb4b8:	01a01005 	moveq	r1, r5
        1cb4bc:	0a000011 	beq	1cb508 <TMeetingView::RemoveHilite(RefVar const &)+0x88>
        1cb4c0:	e1a00004 	mov	r0, r4
        1cb4c4:	e5941000 	ldr	r1, [r4]
        1cb4c8:	e1a0e00f 	mov	lr, pc
        1cb4cc:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb4d0:	e1a01005 	mov	r1, r5
        1cb4d4:	e5902000 	ldr	r2, [r0]
        1cb4d8:	e1a0e00f 	mov	lr, pc
        1cb4dc:	e282f0a8 	add	pc, r2, #168	; 0xa8
        1cb4e0:	e1a00004 	mov	r0, r4
        1cb4e4:	e5941000 	ldr	r1, [r4]
        1cb4e8:	e1a0e00f 	mov	lr, pc
        1cb4ec:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb4f0:	e5901000 	ldr	r1, [r0]
        1cb4f4:	e1a0e00f 	mov	lr, pc
        1cb4f8:	e281f094 	add	pc, r1, #148	; 0x94
        1cb4fc:	e3300000 	teq	r0, #0	; 0x0
        1cb500:	1a000002 	bne	1cb510 <TMeetingView::RemoveHilite(RefVar const &)+0x90>
        1cb504:	e1a0100d 	mov	r1, sp
        1cb508:	e1a00004 	mov	r0, r4
        1cb50c:	eb6352c0 	bl	1aa0014 <TContainerView::$RemoveHilite(RefVar const &)>
        1cb510:	e59d0000 	ldr	r0, [sp]
        1cb514:	eb67df28 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb518:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::RemoveAllHilites(void)
 * Address: 001cb51c
 */
TMeetingView::RemoveAllHilites(void) {
    /*
        1cb51c:	e1a0c00d 	mov	ip, sp
        1cb520:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1cb524:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cb528:	e1a04000 	mov	r4, r0
        1cb52c:	eb6398e9 	bl	1ab18d8 <TView::$FirstHilite(void)>
        1cb530:	e3300002 	teq	r0, #2	; 0x2
        1cb534:	e1a00004 	mov	r0, r4
        1cb538:	0a000001 	beq	1cb544 <TMeetingView::RemoveAllHilites(void)+0x28>
        1cb53c:	ebfa9f44 	bl	73254 <TContainerView::RemoveAllHilites(void)>
        1cb540:	ea000005 	b	1cb55c <TMeetingView::RemoveAllHilites(void)+0x40>
        1cb544:	e5941000 	ldr	r1, [r4]
        1cb548:	e1a0e00f 	mov	lr, pc
        1cb54c:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb550:	e5901000 	ldr	r1, [r0]
        1cb554:	e1a0e00f 	mov	lr, pc
        1cb558:	e281f0ac 	add	pc, r1, #172	; 0xac
        1cb55c:	e59f0014 	ldr	r0, [pc, #14]	; 1cb578 <TMeetingView::RemoveAllHilites(void)+0x5c>
        1cb560:	e5900000 	ldr	r0, [r0]
        1cb564:	e5901030 	ldr	r1, [r0, #48]
        1cb568:	e1310004 	teq	r1, r4
        1cb56c:	03a01000 	moveq	r1, #0	; 0x0
        1cb570:	05a01030 	streq	r1, [r0, #48]!
        1cb574:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1cb578:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TMeetingView::DeleteHilited(RefVar const &)
 * Address: 001cb57c
 */
TMeetingView::DeleteHilited(RefVar const &) {
    /*
        1cb57c:	e1a0c00d 	mov	ip, sp
        1cb580:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1cb584:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cb588:	e1a04000 	mov	r4, r0
        1cb58c:	e1a05001 	mov	r5, r1
        1cb590:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cb594:	eb6398cf 	bl	1ab18d8 <TView::$FirstHilite(void)>
        1cb598:	eb67daeb 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb59c:	e58d0000 	str	r0, [sp]
        1cb5a0:	e5950000 	ldr	r0, [r5]
        1cb5a4:	e5900000 	ldr	r0, [r0]
        1cb5a8:	e59d1000 	ldr	r1, [sp]
        1cb5ac:	e5911000 	ldr	r1, [r1]
        1cb5b0:	e1300001 	teq	r0, r1
        1cb5b4:	1a000003 	bne	1cb5c8 <TMeetingView::DeleteHilited(RefVar const &)+0x4c>
        1cb5b8:	e1a01005 	mov	r1, r5
        1cb5bc:	e1a00004 	mov	r0, r4
        1cb5c0:	eb63108d 	bl	1a8f7fc <TContainerView::$DeleteHilited(RefVar const &)>
        1cb5c4:	ea000012 	b	1cb614 <TMeetingView::DeleteHilited(RefVar const &)+0x98>
        1cb5c8:	e1a00004 	mov	r0, r4
        1cb5cc:	e5941000 	ldr	r1, [r4]
        1cb5d0:	e1a0e00f 	mov	lr, pc
        1cb5d4:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb5d8:	e1a01005 	mov	r1, r5
        1cb5dc:	e5902000 	ldr	r2, [r0]
        1cb5e0:	e1a0e00f 	mov	lr, pc
        1cb5e4:	e282f0a4 	add	pc, r2, #164	; 0xa4
        1cb5e8:	e1a00004 	mov	r0, r4
        1cb5ec:	e5941000 	ldr	r1, [r4]
        1cb5f0:	e1a0e00f 	mov	lr, pc
        1cb5f4:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb5f8:	e5901000 	ldr	r1, [r0]
        1cb5fc:	e1a0e00f 	mov	lr, pc
        1cb600:	e281f094 	add	pc, r1, #148	; 0x94
        1cb604:	e3300000 	teq	r0, #0	; 0x0
        1cb608:	01a0100d 	moveq	r1, sp
        1cb60c:	01a00004 	moveq	r0, r4
        1cb610:	0b63527f 	bleq	1aa0014 <TContainerView::$RemoveHilite(RefVar const &)>
        1cb614:	e59d0000 	ldr	r0, [sp]
        1cb618:	eb67dee7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb61c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMeetingView::AddDragInfo(TDragInfo *)
 * Address: 001cb620
 */
TMeetingView::AddDragInfo(TDragInfo *) {
    /*
        1cb620:	e1a0c00d 	mov	ip, sp
        1cb624:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1cb628:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cb62c:	e1a04001 	mov	r4, r1
        1cb630:	e5901000 	ldr	r1, [r0]
        1cb634:	e1a0e00f 	mov	lr, pc
        1cb638:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb63c:	e1a01004 	mov	r1, r4
        1cb640:	e5902000 	ldr	r2, [r0]
        1cb644:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1cb648:	e282f0c8 	add	pc, r2, #200	; 0xc8
    */
}

/**
 * Symbol: TMeetingView::GetSupportedDropTypes(TPoint const &)
 * Address: 001cb6ec
 */
TMeetingView::GetSupportedDropTypes(TPoint const &) {
    /*
        1cb6ec:	e1a0c00d 	mov	ip, sp
        1cb6f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1cb6f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cb6f8:	eb63a0a9 	bl	1ab39a4 <TView::$GetSupportedDropTypes(TPoint const &)>
        1cb6fc:	eb67da92 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb700:	e1a04000 	mov	r4, r0
        1cb704:	e5900000 	ldr	r0, [r0]
        1cb708:	e3a05000 	mov	r5, #0	; 0x0
        1cb70c:	e3300002 	teq	r0, #2	; 0x2
        1cb710:	1a000007 	bne	1cb734 <TMeetingView::GetSupportedDropTypes(TPoint const &)+0x48>
        1cb714:	e3a00001 	mov	r0, #1	; 0x1
        1cb718:	eb63419f 	bl	1a9bd9c <$MakeArray(long)>
        1cb71c:	e5840000 	str	r0, [r4]
        1cb720:	e59f1020 	ldr	r1, [pc, #20]	; 1cb748 <TMeetingView::GetSupportedDropTypes(TPoint const &)+0x5c>
        1cb724:	e5911000 	ldr	r1, [r1]
        1cb728:	e5912000 	ldr	r2, [r1]
        1cb72c:	e1a01005 	mov	r1, r5
        1cb730:	eb67eb08 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1cb734:	e5945000 	ldr	r5, [r4]
        1cb738:	e1a00004 	mov	r0, r4
        1cb73c:	eb67de9e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb740:	e1a00005 	mov	r0, r5
        1cb744:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1cb748:	00684ac0 	rsbeq	r4, r8, r0, asr #21
    */
}

/**
 * Symbol: TMeetingView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char)
 * Address: 001cb74c
 */
TMeetingView::DragFeedback(TDragInfo const &, TPoint const &, unsigned char) {
    /*
        1cb74c:	e1a0c00d 	mov	ip, sp
        1cb750:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1cb754:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cb758:	e1a06000 	mov	r6, r0
        1cb75c:	e1a05001 	mov	r5, r1
        1cb760:	e1a04002 	mov	r4, r2
        1cb764:	e20330ff 	and	r3, r3, #255	; 0xff
        1cb768:	e1a07003 	mov	r7, r3
        1cb76c:	eb6387cf 	bl	1aad6b0 <TView::$DragFeedback(TDragInfo const &, TPoint const &, unsigned char)>
        1cb770:	e3300000 	teq	r0, #0	; 0x0
        1cb774:	13a00001 	movne	r0, #1	; 0x1
        1cb778:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1cb77c:	e1a00006 	mov	r0, r6
        1cb780:	e5961000 	ldr	r1, [r6]
        1cb784:	e1a0e00f 	mov	lr, pc
        1cb788:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb78c:	e1a03007 	mov	r3, r7
        1cb790:	e1a02004 	mov	r2, r4
        1cb794:	e1a01005 	mov	r1, r5
        1cb798:	e590c000 	ldr	ip, [r0]
        1cb79c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1cb7a0:	e28cfe11 	add	pc, ip, #272	; 0x110
    */
}

/**
 * Symbol: TMeetingView::GetDropData(RefVar const &, RefVar const &)
 * Address: 001cb7a4
 */
TMeetingView::GetDropData(RefVar const &, RefVar const &) {
    /*
        1cb7a4:	e1a0c00d 	mov	ip, sp
        1cb7a8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1cb7ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cb7b0:	e1a04000 	mov	r4, r0
        1cb7b4:	e1a05001 	mov	r5, r1
        1cb7b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cb7bc:	eb639c53 	bl	1ab2910 <TView::$GetDropData(RefVar const &, RefVar const &)>
        1cb7c0:	eb67da61 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb7c4:	e58d0000 	str	r0, [sp]
        1cb7c8:	e5900000 	ldr	r0, [r0]
        1cb7cc:	e3a08000 	mov	r8, #0	; 0x0
        1cb7d0:	e3300002 	teq	r0, #2	; 0x2
        1cb7d4:	1a00011c 	bne	1cbc4c <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4a8>
        1cb7d8:	e59f7068 	ldr	r7, [pc, #68]	; 1cb848 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0xa4>
        1cb7dc:	e5970000 	ldr	r0, [r7]
        1cb7e0:	e5901000 	ldr	r1, [r0]
        1cb7e4:	e5950000 	ldr	r0, [r5]
        1cb7e8:	e5900000 	ldr	r0, [r0]
        1cb7ec:	eb67e28f 	bl	1bc4230 <$EQRef__FlT1>
        1cb7f0:	e59f6054 	ldr	r6, [pc, #54]	; 1cb84c <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0xa8>
        1cb7f4:	e3300000 	teq	r0, #0	; 0x0
        1cb7f8:	0a000056 	beq	1cb958 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x1b4>
        1cb7fc:	e1a00004 	mov	r0, r4
        1cb800:	e5941000 	ldr	r1, [r4]
        1cb804:	e1a0e00f 	mov	lr, pc
        1cb808:	e281ff51 	add	pc, r1, #324	; 0x144
        1cb80c:	e1a04000 	mov	r4, r0
        1cb810:	e5901000 	ldr	r1, [r0]
        1cb814:	e1a0e00f 	mov	lr, pc
        1cb818:	e281f094 	add	pc, r1, #148	; 0x94
        1cb81c:	e3300000 	teq	r0, #0	; 0x0
        1cb820:	0a00000a 	beq	1cb850 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0xac>
        1cb824:	e2842024 	add	r2, r4, #36	; 0x24
        1cb828:	e1a01005 	mov	r1, r5
        1cb82c:	e1a00004 	mov	r0, r4
        1cb830:	e5943000 	ldr	r3, [r4]
        1cb834:	e1a0e00f 	mov	lr, pc
        1cb838:	e283f0cc 	add	pc, r3, #204	; 0xcc
        1cb83c:	e59d1000 	ldr	r1, [sp]
        1cb840:	e5810000 	str	r0, [r1]
        1cb844:	ea000100 	b	1cbc4c <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4a8>
        1cb848:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        1cb84c:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        1cb850:	e59f00f4 	ldr	r0, [pc, #f4]	; 1cb94c <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x1a8>
        1cb854:	eb67da44 	bl	1bc216c <$Clone(RefVar const &)>
        1cb858:	e41d1004 	ldr	r1, [sp], -#4
        1cb85c:	e5810000 	str	r0, [r1]
        1cb860:	e51f1020 	ldr	r1, [pc, #ffffffe0]	; 1cb848 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0xa4>
        1cb864:	e1a00004 	mov	r0, r4
        1cb868:	eb67fb36 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1cb86c:	eb67da36 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb870:	e58d0000 	str	r0, [sp]
        1cb874:	e1a0200d 	mov	r2, sp
        1cb878:	e1a01007 	mov	r1, r7
        1cb87c:	e28d0004 	add	r0, sp, #4	; 0x4
        1cb880:	eb67eab8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cb884:	e59f10c4 	ldr	r1, [pc, #c4]	; 1cb950 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x1ac>
        1cb888:	e1a00004 	mov	r0, r4
        1cb88c:	eb67fb2d 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1cb890:	e59d1000 	ldr	r1, [sp]
        1cb894:	e5810000 	str	r0, [r1]
        1cb898:	e3300002 	teq	r0, #2	; 0x2
        1cb89c:	0a000003 	beq	1cb8b0 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x10c>
        1cb8a0:	e1a0200d 	mov	r2, sp
        1cb8a4:	e59f10a4 	ldr	r1, [pc, #a4]	; 1cb950 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x1ac>
        1cb8a8:	e28d0004 	add	r0, sp, #4	; 0x4
        1cb8ac:	eb67eaad 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cb8b0:	e59f109c 	ldr	r1, [pc, #9c]	; 1cb954 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x1b0>
        1cb8b4:	e1a00004 	mov	r0, r4
        1cb8b8:	eb67fb22 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        1cb8bc:	e41d1004 	ldr	r1, [sp], -#4
        1cb8c0:	e5810000 	str	r0, [r1]
        1cb8c4:	e1a01000 	mov	r1, r0
        1cb8c8:	e3300002 	teq	r0, #2	; 0x2
        1cb8cc:	0a00000d 	beq	1cb908 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x164>
        1cb8d0:	e1a00001 	mov	r0, r1
        1cb8d4:	eb67e674 	bl	1bc52ac <$Length(long)>
        1cb8d8:	e3500000 	cmp	r0, #0	; 0x0
        1cb8dc:	da000009 	ble	1cb908 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x164>
        1cb8e0:	e28d0004 	add	r0, sp, #4	; 0x4
        1cb8e4:	eb67da20 	bl	1bc216c <$Clone(RefVar const &)>
        1cb8e8:	eb67da17 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb8ec:	e58d0000 	str	r0, [sp]
        1cb8f0:	e1a0200d 	mov	r2, sp
        1cb8f4:	e59f1058 	ldr	r1, [pc, #58]	; 1cb954 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x1b0>
        1cb8f8:	e28d0008 	add	r0, sp, #8	; 0x8
        1cb8fc:	eb67ea99 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cb900:	e59d0000 	ldr	r0, [sp]
        1cb904:	eb67de2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb908:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1cb90c:	e58d8008 	str	r8, [sp, #8]	; fField8
        1cb910:	e58d8004 	str	r8, [sp, #4]
        1cb914:	e28d0004 	add	r0, sp, #4	; 0x4
        1cb918:	eb688f9f 	bl	1bef79c <$ToObject(TRect const &)>
        1cb91c:	eb67da0a 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb920:	e58d0000 	str	r0, [sp]
        1cb924:	e1a0200d 	mov	r2, sp
        1cb928:	e1a01006 	mov	r1, r6
        1cb92c:	e28d0014 	add	r0, sp, #20	; 0x14
        1cb930:	eb67ea8c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cb934:	e59d0000 	ldr	r0, [sp]
        1cb938:	eb67de1f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb93c:	e5bd0010 	ldr	r0, [sp, #16]!	; fField16
        1cb940:	eb67de1d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb944:	e28dd004 	add	sp, sp, #4	; 0x4
        1cb948:	ea0000bf 	b	1cbc4c <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4a8>
        1cb94c:	006804b0 	streqh	r0, [r8], -#64
        1cb950:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        1cb954:	00684930 	rsbeq	r4, r8, r0, lsr r9
        1cb958:	e59f0300 	ldr	r0, [pc, #300]	; 1cbc60 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4bc>
        1cb95c:	e5900000 	ldr	r0, [r0]
        1cb960:	e5901000 	ldr	r1, [r0]
        1cb964:	e5950000 	ldr	r0, [r5]
        1cb968:	e5900000 	ldr	r0, [r0]
        1cb96c:	eb67e22f 	bl	1bc4230 <$EQRef__FlT1>
        1cb970:	e3300000 	teq	r0, #0	; 0x0
        1cb974:	0a0000b4 	beq	1cbc4c <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4a8>
        1cb978:	e24dd008 	sub	sp, sp, #8	; 0x8
        1cb97c:	e1a00004 	mov	r0, r4
        1cb980:	eb67f6d8 	bl	1bc94e8 <TView::$DataFrame(void)>
        1cb984:	eb67d9f0 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb988:	e58d0004 	str	r0, [sp, #4]
        1cb98c:	e1a00004 	mov	r0, r4
        1cb990:	eb67f6d4 	bl	1bc94e8 <TView::$DataFrame(void)>
        1cb994:	eb67d9ec 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb998:	e58d0000 	str	r0, [sp]
        1cb99c:	e1a0000d 	mov	r0, sp
        1cb9a0:	eb67d9f1 	bl	1bc216c <$Clone(RefVar const &)>
        1cb9a4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1cb9a8:	e5810000 	str	r0, [r1]
        1cb9ac:	e59d0000 	ldr	r0, [sp]
        1cb9b0:	eb67de01 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb9b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cb9b8:	e1a00004 	mov	r0, r4
        1cb9bc:	eb67f6c9 	bl	1bc94e8 <TView::$DataFrame(void)>
        1cb9c0:	eb67d9e1 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb9c4:	e1a05000 	mov	r5, r0
        1cb9c8:	e59f0294 	ldr	r0, [pc, #294]	; 1cbc64 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4c0>
        1cb9cc:	e5900000 	ldr	r0, [r0]
        1cb9d0:	e5901000 	ldr	r1, [r0]
        1cb9d4:	e5950000 	ldr	r0, [r5]
        1cb9d8:	eb67e220 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1cb9dc:	eb67d9da 	bl	1bc214c <$AllocateRefHandle(long)>
        1cb9e0:	e58d0000 	str	r0, [sp]
        1cb9e4:	e1a00005 	mov	r0, r5
        1cb9e8:	eb67ddf3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cb9ec:	e59d0000 	ldr	r0, [sp]
        1cb9f0:	e5900000 	ldr	r0, [r0]
        1cb9f4:	e3300002 	teq	r0, #2	; 0x2
        1cb9f8:	0a000053 	beq	1cbb4c <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x3a8>
        1cb9fc:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1cba00:	e5810000 	str	r0, [r1]
        1cba04:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cba08:	e28d0004 	add	r0, sp, #4	; 0x4
        1cba0c:	eb620728 	bl	1a4d6b4 <$MakeEntryAlias(RefVar const &)>
        1cba10:	eb67d9cd 	bl	1bc214c <$AllocateRefHandle(long)>
        1cba14:	e58d0000 	str	r0, [sp]
        1cba18:	e28d0004 	add	r0, sp, #4	; 0x4
        1cba1c:	eb67d9d2 	bl	1bc216c <$Clone(RefVar const &)>
        1cba20:	e59d1004 	ldr	r1, [sp, #4]
        1cba24:	e5810000 	str	r0, [r1]
        1cba28:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1cba2c:	e3a00001 	mov	r0, #1	; 0x1
        1cba30:	eb6340d9 	bl	1a9bd9c <$MakeArray(long)>
        1cba34:	eb67d9c4 	bl	1bc214c <$AllocateRefHandle(long)>
        1cba38:	e58d0008 	str	r0, [sp, #8]	; fField8
        1cba3c:	e1a00004 	mov	r0, r4
        1cba40:	eb67f6a8 	bl	1bc94e8 <TView::$DataFrame(void)>
        1cba44:	eb67d9c0 	bl	1bc214c <$AllocateRefHandle(long)>
        1cba48:	e1a05000 	mov	r5, r0
        1cba4c:	e1a01008 	mov	r1, r8
        1cba50:	e5902000 	ldr	r2, [r0]
        1cba54:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1cba58:	e5900000 	ldr	r0, [r0]
        1cba5c:	eb67ea3d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1cba60:	e1a00005 	mov	r0, r5
        1cba64:	eb67ddd4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cba68:	e3a03000 	mov	r3, #0	; 0x0
        1cba6c:	e92d0008 	stmdb	sp!, {r3}
        1cba70:	e28d200c 	add	r2, sp, #12	; 0xc
        1cba74:	e59f11ec 	ldr	r1, [pc, #1ec]	; 1cbc68 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4c4>
        1cba78:	e1a00004 	mov	r0, r4
        1cba7c:	e3a03001 	mov	r3, #1	; 0x1
        1cba80:	eb67fed6 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        1cba84:	e28dd004 	add	sp, sp, #4	; 0x4
        1cba88:	eb67d9af 	bl	1bc214c <$AllocateRefHandle(long)>
        1cba8c:	e1a05000 	mov	r5, r0
        1cba90:	e5900000 	ldr	r0, [r0]
        1cba94:	e3a01001 	mov	r1, #1	; 0x1
        1cba98:	eb67e1ed 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1cba9c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1cbaa0:	e5810000 	str	r0, [r1]
        1cbaa4:	e1a00005 	mov	r0, r5
        1cbaa8:	eb67ddc3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbaac:	e28d2008 	add	r2, sp, #8	; 0x8
        1cbab0:	e59f11b4 	ldr	r1, [pc, #1b4]	; 1cbc6c <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4c8>
        1cbab4:	e28d001c 	add	r0, sp, #28	; 0x1c
        1cbab8:	eb67ea2a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cbabc:	e3a05002 	mov	r5, #2	; 0x2
        1cbac0:	e1a00005 	mov	r0, r5
        1cbac4:	eb67d9a0 	bl	1bc214c <$AllocateRefHandle(long)>
        1cbac8:	e58d0000 	str	r0, [sp]
        1cbacc:	e1a0200d 	mov	r2, sp
        1cbad0:	e59f1198 	ldr	r1, [pc, #198]	; 1cbc70 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4cc>
        1cbad4:	e28d0010 	add	r0, sp, #16	; 0x10
        1cbad8:	eb67ea22 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cbadc:	e59d0000 	ldr	r0, [sp]
        1cbae0:	eb67ddb5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbae4:	e1a00005 	mov	r0, r5
        1cbae8:	eb67d997 	bl	1bc214c <$AllocateRefHandle(long)>
        1cbaec:	e58d0004 	str	r0, [sp, #4]
        1cbaf0:	e28d2004 	add	r2, sp, #4	; 0x4
        1cbaf4:	e59f1178 	ldr	r1, [pc, #178]	; 1cbc74 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4d0>
        1cbaf8:	e28d0010 	add	r0, sp, #16	; 0x10
        1cbafc:	eb67ea19 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cbb00:	e59d0004 	ldr	r0, [sp, #4]
        1cbb04:	eb67ddac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbb08:	e28d2010 	add	r2, sp, #16	; 0x10
        1cbb0c:	e59f1150 	ldr	r1, [pc, #150]	; 1cbc64 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4c0>
        1cbb10:	e28d001c 	add	r0, sp, #28	; 0x1c
        1cbb14:	eb67ea13 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cbb18:	e28d200c 	add	r2, sp, #12	; 0xc
        1cbb1c:	e59f1154 	ldr	r1, [pc, #154]	; 1cbc78 <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4d4>
        1cbb20:	e28d001c 	add	r0, sp, #28	; 0x1c
        1cbb24:	eb67ea0f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cbb28:	e28d001c 	add	r0, sp, #28	; 0x1c
        1cbb2c:	eb67dd9d 	bl	1bc31a8 <$DeepClone(RefVar const &)>
        1cbb30:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        1cbb34:	e5810000 	str	r0, [r1]
        1cbb38:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1cbb3c:	eb67dd9e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbb40:	e5bd000c 	ldr	r0, [sp, #12]!
        1cbb44:	eb67dd9c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbb48:	e28dd004 	add	sp, sp, #4	; 0x4
        1cbb4c:	e24dd014 	sub	sp, sp, #20	; 0x14
        1cbb50:	e2840010 	add	r0, r4, #16	; 0x10
        1cbb54:	e28d200c 	add	r2, sp, #12	; 0xc
        1cbb58:	e8901008 	ldmia	r0, {r3, ip}
        1cbb5c:	e8821008 	stmia	r2, {r3, ip}
        1cbb60:	e24dd008 	sub	sp, sp, #8	; 0x8
        1cbb64:	e5900000 	ldr	r0, [r0]
        1cbb68:	e58d0004 	str	r0, [sp, #4]
        1cbb6c:	e59d0004 	ldr	r0, [sp, #4]
        1cbb70:	e2600000 	rsb	r0, r0, #0	; 0x0
        1cbb74:	e1a00800 	mov	r0, r0, lsl #16
        1cbb78:	e1a00840 	mov	r0, r0, asr #16
        1cbb7c:	e59d1006 	ldr	r1, [sp, #6]
        1cbb80:	e2611000 	rsb	r1, r1, #0	; 0x0
        1cbb84:	e1a01801 	mov	r1, r1, lsl #16
        1cbb88:	e1a01841 	mov	r1, r1, asr #16
        1cbb8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cbb90:	e5cd0003 	strb	r0, [sp, #3]
        1cbb94:	e1a00440 	mov	r0, r0, asr #8
        1cbb98:	e5cd0002 	strb	r0, [sp, #2]
        1cbb9c:	e5cd1001 	strb	r1, [sp, #1]
        1cbba0:	e1a00441 	mov	r0, r1, asr #8
        1cbba4:	e5cd0000 	strb	r0, [sp]
        1cbba8:	e49d0004 	ldr	r0, [sp], #4
        1cbbac:	e58d0000 	str	r0, [sp]
        1cbbb0:	e28d0014 	add	r0, sp, #20	; 0x14
        1cbbb4:	e59d1002 	ldr	r1, [sp, #2]
        1cbbb8:	e1a01841 	mov	r1, r1, asr #16
        1cbbbc:	e59d2000 	ldr	r2, [sp]
        1cbbc0:	e1a02842 	mov	r2, r2, asr #16
        1cbbc4:	eb661747 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        1cbbc8:	e28dd008 	add	sp, sp, #8	; 0x8
        1cbbcc:	e28d000c 	add	r0, sp, #12	; 0xc
        1cbbd0:	eb688ef1 	bl	1bef79c <$ToObject(TRect const &)>
        1cbbd4:	eb67d95c 	bl	1bc214c <$AllocateRefHandle(long)>
        1cbbd8:	e58d0000 	str	r0, [sp]
        1cbbdc:	e1a0200d 	mov	r2, sp
        1cbbe0:	e1a01006 	mov	r1, r6
        1cbbe4:	e28d0020 	add	r0, sp, #32	; 0x20
        1cbbe8:	eb67e9de 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cbbec:	e59d0000 	ldr	r0, [sp]
        1cbbf0:	eb67dd71 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbbf4:	e28d001c 	add	r0, sp, #28	; 0x1c
        1cbbf8:	eb67e188 	bl	1bc4220 <$EntryStore(RefVar const &)>
        1cbbfc:	eb67d952 	bl	1bc214c <$AllocateRefHandle(long)>
        1cbc00:	e58d0008 	str	r0, [sp, #8]	; fField8
        1cbc04:	e28d0008 	add	r0, sp, #8	; 0x8
        1cbc08:	eb67edf8 	bl	1bc73f0 <$StoreGetSignature>
        1cbc0c:	eb67d94e 	bl	1bc214c <$AllocateRefHandle(long)>
        1cbc10:	e58d0004 	str	r0, [sp, #4]
        1cbc14:	e28d2004 	add	r2, sp, #4	; 0x4
        1cbc18:	e59f105c 	ldr	r1, [pc, #5c]	; 1cbc7c <TMeetingView::GetDropData(RefVar const &, RefVar const &)+0x4d8>
        1cbc1c:	e28d0020 	add	r0, sp, #32	; 0x20
        1cbc20:	eb67e9d0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cbc24:	e59d0004 	ldr	r0, [sp, #4]
        1cbc28:	eb67dd63 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbc2c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1cbc30:	eb67dd61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbc34:	e5bd0014 	ldr	r0, [sp, #20]!
        1cbc38:	eb67dd5f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbc3c:	e28dd004 	add	sp, sp, #4	; 0x4
        1cbc40:	e59d0004 	ldr	r0, [sp, #4]
        1cbc44:	eb67dd5c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbc48:	e28dd008 	add	sp, sp, #8	; 0x8
        1cbc4c:	e59d0000 	ldr	r0, [sp]
        1cbc50:	e5904000 	ldr	r4, [r0]
        1cbc54:	eb67dd58 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cbc58:	e1a00004 	mov	r0, r4
        1cbc5c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1cbc60:	00683810 	rsbeq	r3, r8, r0, lsl r8
        1cbc64:	006842e8 	rsbeq	r4, r8, r8, ror #5
        1cbc68:	00682fc0 	rsbeq	r2, r8, r0, asr #31
        1cbc6c:	00683aa0 	rsbeq	r3, r8, r0, lsr #21
        1cbc70:	00682cf0 	streqd	r2, [r8], -#192
        1cbc74:	006832a8 	rsbeq	r3, r8, r8, lsr #5
        1cbc78:	006842f0 	streqd	r4, [r8], -#32	; fField32
        1cbc7c:	00684890 	streqb	r4, [r8], -#128
    */
}

/**
 * Symbol: TMeetingView::Drop(RefVar const &, RefVar const &, TPoint *)
 * Address: 001cbc80
 */
TMeetingView::Drop(RefVar const &, RefVar const &, TPoint *) {
    /*
        1cbc80:	e1a0c00d 	mov	ip, sp
        1cbc84:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1cbc88:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cbc8c:	e1a07000 	mov	r7, r0
        1cbc90:	e1a06001 	mov	r6, r1
        1cbc94:	e1a05002 	mov	r5, r2
        1cbc98:	e1a04003 	mov	r4, r3
        1cbc9c:	eb638a9a 	bl	1aae70c <TView::$Drop(RefVar const &, RefVar const &, TPoint *)>
        1cbca0:	e3300000 	teq	r0, #0	; 0x0
        1cbca4:	13a00001 	movne	r0, #1	; 0x1
        1cbca8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1cbcac:	e1a00007 	mov	r0, r7
        1cbcb0:	e5971000 	ldr	r1, [r7]
        1cbcb4:	e1a0e00f 	mov	lr, pc
        1cbcb8:	e281ff51 	add	pc, r1, #324	; 0x144
        1cbcbc:	e1a03004 	mov	r3, r4
        1cbcc0:	e1a02005 	mov	r2, r5
        1cbcc4:	e1a01006 	mov	r1, r6
        1cbcc8:	e590c000 	ldr	ip, [r0]
        1cbccc:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1cbcd0:	e28cf0e4 	add	pc, ip, #228	; 0xe4
    */
}

/**
 * Symbol: TMeetingView::DropRemove(RefVar const &)
 * Address: 001cbcd4
 */
TMeetingView::DropRemove(RefVar const &) {
    /*
        1cbcd4:	e1a0c00d 	mov	ip, sp
        1cbcd8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1cbcdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cbce0:	e1a05000 	mov	r5, r0
        1cbce4:	e1a04001 	mov	r4, r1
        1cbce8:	eb638682 	bl	1aad6f8 <TView::$DropRemove(RefVar const &)>
        1cbcec:	e3300000 	teq	r0, #0	; 0x0
        1cbcf0:	13a00001 	movne	r0, #1	; 0x1
        1cbcf4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1cbcf8:	e1a00005 	mov	r0, r5
        1cbcfc:	e5951000 	ldr	r1, [r5]
        1cbd00:	e1a0e00f 	mov	lr, pc
        1cbd04:	e281ff51 	add	pc, r1, #324	; 0x144
        1cbd08:	e1a01004 	mov	r1, r4
        1cbd0c:	e5902000 	ldr	r2, [r0]
        1cbd10:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1cbd14:	e282f0ec 	add	pc, r2, #236	; 0xec
    */
}

/**
 * Symbol: TMeetingView::DropDone(void)
 * Address: 001cbd18
 */
TMeetingView::DropDone(void) {
    /*
        1cbd18:	e1a0c00d 	mov	ip, sp
        1cbd1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1cbd20:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cbd24:	e1a04000 	mov	r4, r0
        1cbd28:	eb640a86 	bl	1ace748 <TView::$DropDone(void)>
        1cbd2c:	e3300000 	teq	r0, #0	; 0x0
        1cbd30:	13a00001 	movne	r0, #1	; 0x1
        1cbd34:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1cbd38:	e1a00004 	mov	r0, r4
        1cbd3c:	e5941000 	ldr	r1, [r4]
        1cbd40:	e1a0e00f 	mov	lr, pc
        1cbd44:	e281ff51 	add	pc, r1, #324	; 0x144
        1cbd48:	e5901000 	ldr	r1, [r0]
        1cbd4c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1cbd50:	e281f0f0 	add	pc, r1, #240	; 0xf0
    */
}

