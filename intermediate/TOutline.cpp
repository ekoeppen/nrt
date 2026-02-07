#include "include/TOutline.h"

/**
 * Symbol: TOutline::ClassID( const(void))
 * Address: 0014c49c
 */
TOutline::ClassID( const(void)) {
    /*
        14c49c:	e3a00069 	mov	r0, #105	; 0x69
        14c4a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOutline::DerivedFrom( const(long))
 * Address: 0014c4a4
 */
TOutline::DerivedFrom( const(long)) {
    /*
        14c4a4:	e1a0c00d 	mov	ip, sp
        14c4a8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        14c4ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        14c4b0:	e3310069 	teq	r1, #105	; 0x69
        14c4b4:	0a000002 	beq	14c4c4 <TOutline::DerivedFrom( const(long))+0x20>
        14c4b8:	eb045c40 	bl	2635c0 <TView::DerivedFrom( const(long))>
        14c4bc:	e3300000 	teq	r0, #0	; 0x0
        14c4c0:	0a000001 	beq	14c4cc <TOutline::DerivedFrom( const(long))+0x28>
        14c4c4:	e3a00001 	mov	r0, #1	; 0x1
        14c4c8:	ea000000 	b	14c4d0 <TOutline::DerivedFrom( const(long))+0x2c>
        14c4cc:	e3a00000 	mov	r0, #0	; 0x0
        14c4d0:	e20000ff 	and	r0, r0, #255	; 0xff
        14c4d4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TOutline::DoClick(TRect &)
 * Address: 0014c4d8
 */
TOutline::DoClick(TRect &) {
    /*
        14c4d8:	e1a0c00d 	mov	ip, sp
        14c4dc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14c4e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        14c4e4:	e1a04000 	mov	r4, r0
        14c4e8:	e1a05000 	mov	r5, r0
        14c4ec:	e24dd014 	sub	sp, sp, #20	; 0x14
        14c4f0:	e1a0000d 	mov	r0, sp
        14c4f4:	eb012ce2 	bl	197884 <TRect::MidPoint( const(void))>
        14c4f8:	e1a00005 	mov	r0, r5
        14c4fc:	e49d1004 	ldr	r1, [sp], #4
        14c500:	e5952000 	ldr	r2, [r5]
        14c504:	e1a0e00f 	mov	lr, pc
        14c508:	e282ff52 	add	pc, r2, #328	; 0x148
        14c50c:	e1a05000 	mov	r5, r0
        14c510:	e3700001 	cmn	r0, #1	; 0x1
        14c514:	0a000073 	beq	14c6e8 <TOutline::DoClick(TRect &)+0x210>
        14c518:	e584503c 	str	r5, [r4, #60]	; fField60
        14c51c:	e2840010 	add	r0, r4, #16	; 0x10
        14c520:	e8905000 	ldmia	r0, {ip, lr}
        14c524:	e88d5000 	stmia	sp, {ip, lr}
        14c528:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14c52c:	e0801185 	add	r1, r0, r5, lsl #3
        14c530:	e1a0300d 	mov	r3, sp
        14c534:	e28d2008 	add	r2, sp, #8	; 0x8
        14c538:	e1a00004 	mov	r0, r4
        14c53c:	e594c000 	ldr	ip, [r4]
        14c540:	e1a0e00f 	mov	lr, pc
        14c544:	e28cff5e 	add	pc, ip, #376	; 0x178
        14c548:	e59f105c 	ldr	r1, [pc, #5c]	; 14c5ac <TOutline::DoClick(TRect &)+0xd4>
        14c54c:	e1a00004 	mov	r0, r4
        14c550:	eb6a0032 	bl	1bcc620 <TView::$SoundEffect(RefVar const &)>
        14c554:	e28d0008 	add	r0, sp, #8	; 0x8
        14c558:	eb6810c1 	bl	1b50864 <$InvertRect(Rect *)>
        14c55c:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14c560:	e0800185 	add	r0, r0, r5, lsl #3
        14c564:	e5b06004 	ldr	r6, [r0, #4]!
        14c568:	e1a00004 	mov	r0, r4
        14c56c:	e3e01000 	mvn	r1, #0	; 0x0
        14c570:	e5942000 	ldr	r2, [r4]
        14c574:	e1a0e00f 	mov	lr, pc
        14c578:	e282ff4a 	add	pc, r2, #296	; 0x128
        14c57c:	e3160502 	tst	r6, #8388608	; 0x800000
        14c580:	0a00004d 	beq	14c6bc <TOutline::DoClick(TRect &)+0x1e4>
        14c584:	e2061602 	and	r1, r6, #2097152	; 0x200000
        14c588:	e3310602 	teq	r1, #2097152	; 0x200000
        14c58c:	1a000007 	bne	14c5b0 <TOutline::DoClick(TRect &)+0xd8>
        14c590:	e1a01005 	mov	r1, r5
        14c594:	e1a00004 	mov	r0, r4
        14c598:	e3a02000 	mov	r2, #0	; 0x0
        14c59c:	e5943000 	ldr	r3, [r4]
        14c5a0:	e1a0e00f 	mov	lr, pc
        14c5a4:	e283fe13 	add	pc, r3, #304	; 0x130
        14c5a8:	ea000043 	b	14c6bc <TOutline::DoClick(TRect &)+0x1e4>
        14c5ac:	00682470 	rsbeq	r2, r8, r0, ror r4
        14c5b0:	e1a01005 	mov	r1, r5
        14c5b4:	e1a00004 	mov	r0, r4
        14c5b8:	e5942000 	ldr	r2, [r4]
        14c5bc:	e1a0e00f 	mov	lr, pc
        14c5c0:	e282ff49 	add	pc, r2, #292	; 0x124
        14c5c4:	e1a00004 	mov	r0, r4
        14c5c8:	e5941000 	ldr	r1, [r4]
        14c5cc:	e1a0e00f 	mov	lr, pc
        14c5d0:	e281ff5a 	add	pc, r1, #360	; 0x168
        14c5d4:	e1a01005 	mov	r1, r5
        14c5d8:	e1a00004 	mov	r0, r4
        14c5dc:	e3a02000 	mov	r2, #0	; 0x0
        14c5e0:	e5943000 	ldr	r3, [r4]
        14c5e4:	e1a0e00f 	mov	lr, pc
        14c5e8:	e283fd05 	add	pc, r3, #320	; 0x140
        14c5ec:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14c5f0:	e0800185 	add	r0, r0, r5, lsl #3
        14c5f4:	e5905002 	ldr	r5, [r0, #2]
        14c5f8:	e1a05845 	mov	r5, r5, asr #16
        14c5fc:	e1a00004 	mov	r0, r4
        14c600:	e5941000 	ldr	r1, [r4]
        14c604:	e1a0e00f 	mov	lr, pc
        14c608:	e281fd06 	add	pc, r1, #384	; 0x180
        14c60c:	e594104e 	ldr	r1, [r4, #78]	; fField78
        14c610:	e1a01841 	mov	r1, r1, asr #16
        14c614:	e1a07001 	mov	r7, r1
        14c618:	e1a02001 	mov	r2, r1
        14c61c:	e0000092 	mul	r0, r2, r0
        14c620:	e1a06800 	mov	r6, r0, lsl #16
        14c624:	e1a06846 	mov	r6, r6, asr #16
        14c628:	e0811005 	add	r1, r1, r5
        14c62c:	e5940044 	ldr	r0, [r4, #68]	; fField68
        14c630:	e0860840 	add	r0, r6, r0, asr #16
        14c634:	e1510000 	cmp	r1, r0
        14c638:	ba00001f 	blt	14c6bc <TOutline::DoClick(TRect &)+0x1e4>
        14c63c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14c640:	e2405001 	sub	r5, r0, #1	; 0x1
        14c644:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14c648:	e0801185 	add	r1, r0, r5, lsl #3
        14c64c:	e5911004 	ldr	r1, [r1, #4]
        14c650:	e3110501 	tst	r1, #4194304	; 0x400000
        14c654:	1a000004 	bne	14c66c <TOutline::DoClick(TRect &)+0x194>
        14c658:	e2455001 	sub	r5, r5, #1	; 0x1
        14c65c:	e0801185 	add	r1, r0, r5, lsl #3
        14c660:	e5911004 	ldr	r1, [r1, #4]
        14c664:	e3110501 	tst	r1, #4194304	; 0x400000
        14c668:	0afffffa 	beq	14c658 <TOutline::DoClick(TRect &)+0x180>
        14c66c:	e1a00004 	mov	r0, r4
        14c670:	e5941000 	ldr	r1, [r4]
        14c674:	e1a0e00f 	mov	lr, pc
        14c678:	e281fd06 	add	pc, r1, #384	; 0x180
        14c67c:	e0800fa0 	add	r0, r0, r0, lsr #31
        14c680:	e1a000c0 	mov	r0, r0, asr #1
        14c684:	e0010790 	mul	r1, r0, r7
        14c688:	e5940044 	ldr	r0, [r4, #68]	; fField68
        14c68c:	e0810840 	add	r0, r1, r0, asr #16
        14c690:	e594104e 	ldr	r1, [r4, #78]	; fField78
        14c694:	e5942038 	ldr	r2, [r4, #56]	; fField56
        14c698:	e0822185 	add	r2, r2, r5, lsl #3
        14c69c:	e5922002 	ldr	r2, [r2, #2]
        14c6a0:	e0662842 	rsb	r2, r6, r2, asr #16
        14c6a4:	e0821841 	add	r1, r2, r1, asr #16
        14c6a8:	e1500001 	cmp	r0, r1
        14c6ac:	a1a00001 	movge	r0, r1
        14c6b0:	e5c40045 	strb	r0, [r4, #69]	; fField69
        14c6b4:	e1a00440 	mov	r0, r0, asr #8
        14c6b8:	e5c40044 	strb	r0, [r4, #68]	; fField68
        14c6bc:	e28d0008 	add	r0, sp, #8	; 0x8
        14c6c0:	eb681067 	bl	1b50864 <$InvertRect(Rect *)>
        14c6c4:	e1a00004 	mov	r0, r4
        14c6c8:	e5941000 	ldr	r1, [r4]
        14c6cc:	e1a0e00f 	mov	lr, pc
        14c6d0:	e281fe16 	add	pc, r1, #352	; 0x160
        14c6d4:	e1a00004 	mov	r0, r4
        14c6d8:	e3a01000 	mov	r1, #0	; 0x0
        14c6dc:	e5942000 	ldr	r2, [r4]
        14c6e0:	e1a0e00f 	mov	lr, pc
        14c6e4:	e282f054 	add	pc, r2, #84	; 0x54
        14c6e8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TOutline::DrawTopic(long, TRect &)
 * Address: 0014c6ec
 */
TOutline::DrawTopic(long, TRect &) {
    /*
        14c6ec:	e1a0c00d 	mov	ip, sp
        14c6f0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14c6f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14c6f8:	e1a05000 	mov	r5, r0
        14c6fc:	e1a06001 	mov	r6, r1
        14c700:	e1a04002 	mov	r4, r2
        14c704:	e24dd0b4 	sub	sp, sp, #180	; 0xb4
        14c708:	e3a00002 	mov	r0, #2	; 0x2
        14c70c:	eb69d68e 	bl	1bc214c <$AllocateRefHandle(long)>
        14c710:	e3a07000 	mov	r7, #0	; 0x0
        14c714:	e58d0004 	str	r0, [sp, #4]
        14c718:	e5a07004 	str	r7, [r0, #4]!
        14c71c:	e3a00020 	mov	r0, #32	; 0x20
        14c720:	e58d7020 	str	r7, [sp, #32]
        14c724:	eb6962f3 	bl	1ba52f8 <$U_CONST_CHAR>
        14c728:	e1a0a000 	mov	sl, r0
        14c72c:	e3a00009 	mov	r0, #9	; 0x9
        14c730:	eb6962f0 	bl	1ba52f8 <$U_CONST_CHAR>
        14c734:	e1a09000 	mov	r9, r0
        14c738:	e3a0000d 	mov	r0, #13	; 0xd
        14c73c:	eb6962ed 	bl	1ba52f8 <$U_CONST_CHAR>
        14c740:	e1a08000 	mov	r8, r0
        14c744:	e5950034 	ldr	r0, [r5, #52]	; fField52
        14c748:	e1500006 	cmp	r0, r6
        14c74c:	aa000005 	bge	14c768 <TOutline::DrawTopic(long, TRect &)+0x7c>
        14c750:	e59d0020 	ldr	r0, [sp, #32]
        14c754:	e3300000 	teq	r0, #0	; 0x0
        14c758:	1a000085 	bne	14c974 <TOutline::DrawTopic(long, TRect &)+0x288>
        14c75c:	e59d0004 	ldr	r0, [sp, #4]
        14c760:	eb69da95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14c764:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        14c768:	e28d302c 	add	r3, sp, #44	; 0x2c
        14c76c:	e28d2030 	add	r2, sp, #48	; 0x30
        14c770:	e1a01006 	mov	r1, r6
        14c774:	e1a00005 	mov	r0, r5
        14c778:	e595c000 	ldr	ip, [r5]
        14c77c:	e1a0e00f 	mov	lr, pc
        14c780:	e28cff5f 	add	pc, ip, #380	; 0x17c
        14c784:	e28d1030 	add	r1, sp, #48	; 0x30
        14c788:	e59d002c 	ldr	r0, [sp, #44]
        14c78c:	e0811080 	add	r1, r1, r0, lsl #1
        14c790:	e5c17001 	strb	r7, [r1, #1]	; fField1
        14c794:	e5c17000 	strb	r7, [r1]
        14c798:	e3300000 	teq	r0, #0	; 0x0
        14c79c:	0a000054 	beq	14c8f4 <TOutline::DrawTopic(long, TRect &)+0x208>
        14c7a0:	e5950038 	ldr	r0, [r5, #56]	; fField56
        14c7a4:	e0800186 	add	r0, r0, r6, lsl #3
        14c7a8:	e58d00b0 	str	r0, [sp, #176]
        14c7ac:	e5941006 	ldr	r1, [r4, #6]
        14c7b0:	e1a01821 	mov	r1, r1, lsr #16
        14c7b4:	e5940002 	ldr	r0, [r4, #2]
        14c7b8:	e1a00820 	mov	r0, r0, lsr #16
        14c7bc:	e0410000 	sub	r0, r1, r0
        14c7c0:	e1a07800 	mov	r7, r0, lsl #16
        14c7c4:	e1a07847 	mov	r7, r7, asr #16
        14c7c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        14c7cc:	e5d5004d 	ldrb	r0, [r5, #77]	; fField77
        14c7d0:	e3300000 	teq	r0, #0	; 0x0
        14c7d4:	0a000006 	beq	14c7f4 <TOutline::DrawTopic(long, TRect &)+0x108>
        14c7d8:	e1a02004 	mov	r2, r4
        14c7dc:	e1a01006 	mov	r1, r6
        14c7e0:	e1a00005 	mov	r0, r5
        14c7e4:	e5953000 	ldr	r3, [r5]
        14c7e8:	e1a0e00f 	mov	lr, pc
        14c7ec:	e283ff4f 	add	pc, r3, #316	; 0x13c
        14c7f0:	e0477000 	sub	r7, r7, r0
        14c7f4:	e5940002 	ldr	r0, [r4, #2]
        14c7f8:	e1a00820 	mov	r0, r0, lsr #16
        14c7fc:	e2800003 	add	r0, r0, #3	; 0x3
        14c800:	e1a00800 	mov	r0, r0, lsl #16
        14c804:	e58d0028 	str	r0, [sp, #40]
        14c808:	e5950050 	ldr	r0, [r5, #80]	; fField80
        14c80c:	e1a00820 	mov	r0, r0, lsr #16
        14c810:	e5941000 	ldr	r1, [r4]
        14c814:	e1a01821 	mov	r1, r1, lsr #16
        14c818:	e0800001 	add	r0, r0, r1
        14c81c:	e1a00800 	mov	r0, r0, lsl #16
        14c820:	e58d002c 	str	r0, [sp, #44]
        14c824:	e5950030 	ldr	r0, [r5, #48]	; fField48
        14c828:	e5900000 	ldr	r0, [r0]
        14c82c:	eb69d646 	bl	1bc214c <$AllocateRefHandle(long)>
        14c830:	e58d0000 	str	r0, [sp]
        14c834:	e1a0000d 	mov	r0, sp
        14c838:	e28d1008 	add	r1, sp, #8	; 0x8
        14c83c:	eb69f328 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        14c840:	e59d0000 	ldr	r0, [sp]
        14c844:	eb69da5c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14c848:	e59d00b4 	ldr	r0, [sp, #180]
        14c84c:	e5900004 	ldr	r0, [r0, #4]
        14c850:	e3100502 	tst	r0, #8388608	; 0x800000
        14c854:	13a00001 	movne	r0, #1	; 0x1
        14c858:	158d0010 	strne	r0, [sp, #16]
        14c85c:	e28d0008 	add	r0, sp, #8	; 0x8
        14c860:	e58d0004 	str	r0, [sp, #4]
        14c864:	e3a00000 	mov	r0, #0	; 0x0
        14c868:	e59d1030 	ldr	r1, [sp, #48]	; fField48
        14c86c:	e3510000 	cmp	r1, #0	; 0x0
        14c870:	da000009 	ble	14c89c <TOutline::DrawTopic(long, TRect &)+0x1b0>
        14c874:	e28d2034 	add	r2, sp, #52	; 0x34
        14c878:	e7922080 	ldr	r2, [r2, r0, lsl #1]	; fField1
        14c87c:	e1a02822 	mov	r2, r2, lsr #16
        14c880:	e132000a 	teq	r2, sl
        14c884:	11320009 	teqne	r2, r9
        14c888:	11320008 	teqne	r2, r8
        14c88c:	1a000002 	bne	14c89c <TOutline::DrawTopic(long, TRect &)+0x1b0>
        14c890:	e2800001 	add	r0, r0, #1	; 0x1
        14c894:	e1500001 	cmp	r0, r1
        14c898:	bafffff5 	blt	14c874 <TOutline::DrawTopic(long, TRect &)+0x188>
        14c89c:	e2472002 	sub	r2, r7, #2	; 0x2
        14c8a0:	e0411000 	sub	r1, r1, r0
        14c8a4:	e28d3034 	add	r3, sp, #52	; 0x34
        14c8a8:	e0830080 	add	r0, r3, r0, lsl #1
        14c8ac:	e1a07000 	mov	r7, r0
        14c8b0:	e28d3008 	add	r3, sp, #8	; 0x8
        14c8b4:	eb655e70 	bl	1aa427c <$TruncateText(unsigned short *, unsigned long, long, StyleRecord *)>
        14c8b8:	e58d0030 	str	r0, [sp, #48]	; fField48
        14c8bc:	e1a01000 	mov	r1, r0
        14c8c0:	e3a03000 	mov	r3, #0	; 0x0
        14c8c4:	e3a02000 	mov	r2, #0	; 0x0
        14c8c8:	e92d000c 	stmdb	sp!, {r2, r3}
        14c8cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        14c8d0:	e59d203c 	ldr	r2, [sp, #60]	; fField60
        14c8d4:	e58d2004 	str	r2, [sp, #4]
        14c8d8:	e59d2038 	ldr	r2, [sp, #56]	; fField56
        14c8dc:	e1a00007 	mov	r0, r7
        14c8e0:	e58d2000 	str	r2, [sp]
        14c8e4:	e28d2014 	add	r2, sp, #20	; 0x14
        14c8e8:	e3a03000 	mov	r3, #0	; 0x0
        14c8ec:	eb680788 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        14c8f0:	e28dd014 	add	sp, sp, #20	; 0x14
        14c8f4:	e5b50048 	ldr	r0, [r5, #72]!	; fField72
        14c8f8:	e1300006 	teq	r0, r6
        14c8fc:	1a000019 	bne	14c968 <TOutline::DrawTopic(long, TRect &)+0x27c>
        14c900:	e5940000 	ldr	r0, [r4]
        14c904:	e1a00840 	mov	r0, r0, asr #16
        14c908:	e2801002 	add	r1, r0, #2	; 0x2
        14c90c:	e5940002 	ldr	r0, [r4, #2]
        14c910:	e1a00840 	mov	r0, r0, asr #16
        14c914:	eb6813e9 	bl	1b518c0 <$MoveTo__FlT1>
        14c918:	e5940004 	ldr	r0, [r4, #4]
        14c91c:	e1a00840 	mov	r0, r0, asr #16
        14c920:	e2401002 	sub	r1, r0, #2	; 0x2
        14c924:	e5940002 	ldr	r0, [r4, #2]
        14c928:	e1a00840 	mov	r0, r0, asr #16
        14c92c:	eb680fd2 	bl	1b5087c <$LineTo__FlT1>
        14c930:	e5940000 	ldr	r0, [r4]
        14c934:	e1a00840 	mov	r0, r0, asr #16
        14c938:	e2801002 	add	r1, r0, #2	; 0x2
        14c93c:	e5940002 	ldr	r0, [r4, #2]
        14c940:	e1a00840 	mov	r0, r0, asr #16
        14c944:	e2800001 	add	r0, r0, #1	; 0x1
        14c948:	eb6813dc 	bl	1b518c0 <$MoveTo__FlT1>
        14c94c:	e5940004 	ldr	r0, [r4, #4]
        14c950:	e1a00840 	mov	r0, r0, asr #16
        14c954:	e2401002 	sub	r1, r0, #2	; 0x2
        14c958:	e5940002 	ldr	r0, [r4, #2]
        14c95c:	e1a00840 	mov	r0, r0, asr #16
        14c960:	e2800001 	add	r0, r0, #1	; 0x1
        14c964:	eb680fc4 	bl	1b5087c <$LineTo__FlT1>
        14c968:	e59d0020 	ldr	r0, [sp, #32]
        14c96c:	e3300000 	teq	r0, #0	; 0x0
        14c970:	0affff79 	beq	14c75c <TOutline::DrawTopic(long, TRect &)+0x70>
        14c974:	e59d0020 	ldr	r0, [sp, #32]
        14c978:	eb680357 	bl	1b4d6dc <$DisposePattern(PixelMap **)>
        14c97c:	eaffff76 	b	14c75c <TOutline::DrawTopic(long, TRect &)+0x70>
    */
}

/**
 * Symbol: TOutline::DrawTopicRefs(long, TRect &)
 * Address: 0014c980
 */
TOutline::DrawTopicRefs(long, TRect &) {
    /*
        14c980:	e3a00000 	mov	r0, #0	; 0x0
        14c984:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOutline::Expand(long, unsigned char)
 * Address: 0014c988
 */
TOutline::Expand(long, unsigned char) {
    /*
        14c988:	e1a0c00d 	mov	ip, sp
        14c98c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        14c990:	e24cb004 	sub	fp, ip, #4	; 0x4
        14c994:	e1a04000 	mov	r4, r0
        14c998:	e1a05001 	mov	r5, r1
        14c99c:	e5901000 	ldr	r1, [r0]
        14c9a0:	e1a0e00f 	mov	lr, pc
        14c9a4:	e281ff57 	add	pc, r1, #348	; 0x15c
        14c9a8:	e1a01005 	mov	r1, r5
        14c9ac:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14c9b0:	e0800185 	add	r0, r0, r5, lsl #3
        14c9b4:	e5903004 	ldr	r3, [r0, #4]
        14c9b8:	e3130602 	tst	r3, #2097152	; 0x200000
        14c9bc:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        14c9c0:	e3130502 	tst	r3, #8388608	; 0x800000
        14c9c4:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        14c9c8:	e5902002 	ldr	r2, [r0, #2]
        14c9cc:	e1a02822 	mov	r2, r2, lsr #16
        14c9d0:	e594c04e 	ldr	ip, [r4, #78]	; fField78
        14c9d4:	e1a0c82c 	mov	ip, ip, lsr #16
        14c9d8:	e082200c 	add	r2, r2, ip
        14c9dc:	e1a02802 	mov	r2, r2, lsl #16
        14c9e0:	e1a02842 	mov	r2, r2, asr #16
        14c9e4:	e1a0e002 	mov	lr, r2
        14c9e8:	e1a07e23 	mov	r7, r3, lsr #28
        14c9ec:	e2811001 	add	r1, r1, #1	; 0x1
        14c9f0:	e2800008 	add	r0, r0, #8	; 0x8
        14c9f4:	e3a03002 	mov	r3, #2	; 0x2
        14c9f8:	ea000023 	b	14ca8c <TOutline::Expand(long, unsigned char)+0x104>
        14c9fc:	e3cc640f 	bic	r6, ip, #251658240	; 0xf000000
        14ca00:	e28cc4ff 	add	ip, ip, #-16777216	; 0xff000000
        14ca04:	e20cc40f 	and	ip, ip, #251658240	; 0xf000000
        14ca08:	e186c00c 	orr	ip, r6, ip
        14ca0c:	e580c004 	str	ip, [r0, #4]
        14ca10:	e31c040f 	tst	ip, #251658240	; 0xf000000
        14ca14:	13a06000 	movne	r6, #0	; 0x0
        14ca18:	03a06001 	moveq	r6, #1	; 0x1
        14ca1c:	e3ccc501 	bic	ip, ip, #4194304	; 0x400000
        14ca20:	e2066001 	and	r6, r6, #1	; 0x1
        14ca24:	e18ccb06 	orr	ip, ip, r6, lsl #22
        14ca28:	e580c004 	str	ip, [r0, #4]
        14ca2c:	e1a0600c 	mov	r6, ip
        14ca30:	e5c02003 	strb	r2, [r0, #3]
        14ca34:	e1a08442 	mov	r8, r2, asr #8
        14ca38:	e5c08002 	strb	r8, [r0, #2]
        14ca3c:	e1a0c70c 	mov	ip, ip, lsl #14
        14ca40:	e1330f2c 	teq	r3, ip, lsr #30
        14ca44:	1a000007 	bne	14ca68 <TOutline::Expand(long, unsigned char)+0xe0>
        14ca48:	e5909002 	ldr	r9, [r0, #2]
        14ca4c:	e1a09829 	mov	r9, r9, lsr #16
        14ca50:	e594804e 	ldr	r8, [r4, #78]	; fField78
        14ca54:	e1a08828 	mov	r8, r8, lsr #16
        14ca58:	e0498008 	sub	r8, r9, r8
        14ca5c:	e5c08003 	strb	r8, [r0, #3]
        14ca60:	e1a08448 	mov	r8, r8, asr #8
        14ca64:	e5c08002 	strb	r8, [r0, #2]
        14ca68:	e3160501 	tst	r6, #4194304	; 0x400000
        14ca6c:	11330f2c 	teqne	r3, ip, lsr #30
        14ca70:	1594c04e 	ldrne	ip, [r4, #78]	; fField78
        14ca74:	11a0c82c 	movne	ip, ip, lsr #16
        14ca78:	108c2002 	addne	r2, ip, r2
        14ca7c:	11a02802 	movne	r2, r2, lsl #16
        14ca80:	11a02842 	movne	r2, r2, asr #16
        14ca84:	e2811001 	add	r1, r1, #1	; 0x1
        14ca88:	e2800008 	add	r0, r0, #8	; 0x8
        14ca8c:	e594c034 	ldr	ip, [r4, #52]	; fField52
        14ca90:	e15c0001 	cmp	ip, r1
        14ca94:	da000002 	ble	14caa4 <TOutline::Expand(long, unsigned char)+0x11c>
        14ca98:	e590c004 	ldr	ip, [r0, #4]
        14ca9c:	e1570e2c 	cmp	r7, ip, lsr #28
        14caa0:	baffffd5 	blt	14c9fc <TOutline::Expand(long, unsigned char)+0x74>
        14caa4:	e04e2002 	sub	r2, lr, r2
        14caa8:	e1a02802 	mov	r2, r2, lsl #16
        14caac:	e1a02842 	mov	r2, r2, asr #16
        14cab0:	e5943034 	ldr	r3, [r4, #52]	; fField52
        14cab4:	e1530001 	cmp	r3, r1
        14cab8:	da00000d 	ble	14caf4 <TOutline::Expand(long, unsigned char)+0x16c>
        14cabc:	e5903004 	ldr	r3, [r0, #4]
        14cac0:	e3130501 	tst	r3, #4194304	; 0x400000
        14cac4:	0a000005 	beq	14cae0 <TOutline::Expand(long, unsigned char)+0x158>
        14cac8:	e5903002 	ldr	r3, [r0, #2]
        14cacc:	e1a03823 	mov	r3, r3, lsr #16
        14cad0:	e0433002 	sub	r3, r3, r2
        14cad4:	e5c03003 	strb	r3, [r0, #3]
        14cad8:	e1a03443 	mov	r3, r3, asr #8
        14cadc:	e5c03002 	strb	r3, [r0, #2]
        14cae0:	e2811001 	add	r1, r1, #1	; 0x1
        14cae4:	e2800008 	add	r0, r0, #8	; 0x8
        14cae8:	e5943034 	ldr	r3, [r4, #52]	; fField52
        14caec:	e1530001 	cmp	r3, r1
        14caf0:	cafffff1 	bgt	14cabc <TOutline::Expand(long, unsigned char)+0x134>
        14caf4:	e5b40038 	ldr	r0, [r4, #56]!	; fField56
        14caf8:	e0800185 	add	r0, r0, r5, lsl #3
        14cafc:	e5901004 	ldr	r1, [r0, #4]
        14cb00:	e3811602 	orr	r1, r1, #2097152	; 0x200000
        14cb04:	e5a01004 	str	r1, [r0, #4]!
        14cb08:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TOutline::FindPageInList(void)
 * Address: 0014cb0c
 */
TOutline::FindPageInList(void) {
    /*
        14cb0c:	e1a0c00d 	mov	ip, sp
        14cb10:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14cb14:	e24cb004 	sub	fp, ip, #4	; 0x4
        14cb18:	e1a04000 	mov	r4, r0
        14cb1c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        14cb20:	e3a05000 	mov	r5, #0	; 0x0
        14cb24:	e3e0a000 	mvn	sl, #0	; 0x0
        14cb28:	e3a00000 	mov	r0, #0	; 0x0
        14cb2c:	e3a01000 	mov	r1, #0	; 0x0
        14cb30:	e58d0014 	str	r0, [sp, #20]
        14cb34:	e3a00002 	mov	r0, #2	; 0x2
        14cb38:	e58d100c 	str	r1, [sp, #12]
        14cb3c:	eb69d582 	bl	1bc214c <$AllocateRefHandle(long)>
        14cb40:	e58d0008 	str	r0, [sp, #8]
        14cb44:	e3a00002 	mov	r0, #2	; 0x2
        14cb48:	eb69d57f 	bl	1bc214c <$AllocateRefHandle(long)>
        14cb4c:	e1a09000 	mov	r9, r0
        14cb50:	e3a00002 	mov	r0, #2	; 0x2
        14cb54:	eb69d57c 	bl	1bc214c <$AllocateRefHandle(long)>
        14cb58:	e58d0004 	str	r0, [sp, #4]
        14cb5c:	e3a00002 	mov	r0, #2	; 0x2
        14cb60:	eb69d579 	bl	1bc214c <$AllocateRefHandle(long)>
        14cb64:	e1a07000 	mov	r7, r0
        14cb68:	e3a00002 	mov	r0, #2	; 0x2
        14cb6c:	eb69d576 	bl	1bc214c <$AllocateRefHandle(long)>
        14cb70:	e1a08000 	mov	r8, r0
        14cb74:	e59f10e8 	ldr	r1, [pc, #e8]	; 14cc64 <TOutline::FindPageInList(void)+0x158>
        14cb78:	e1a00004 	mov	r0, r4
        14cb7c:	eb69f675 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        14cb80:	eb69d571 	bl	1bc214c <$AllocateRefHandle(long)>
        14cb84:	e58d0000 	str	r0, [sp]
        14cb88:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
        14cb8c:	e3300000 	teq	r0, #0	; 0x0
        14cb90:	1a00008a 	bne	14cdc0 <TOutline::FindPageInList(void)+0x2b4>
        14cb94:	e1a0100d 	mov	r1, sp
        14cb98:	e59f00c8 	ldr	r0, [pc, #c8]	; 14cc68 <TOutline::FindPageInList(void)+0x15c>
        14cb9c:	e58d0018 	str	r0, [sp, #24]
        14cba0:	e5900000 	ldr	r0, [r0]
        14cba4:	eb650b08 	bl	1a8f7cc <TLibrarian::$CurrentPage(RefVar const &)>
        14cba8:	e58d0010 	str	r0, [sp, #16]
        14cbac:	e1a0100d 	mov	r1, sp
        14cbb0:	e59d0018 	ldr	r0, [sp, #24]
        14cbb4:	e5900000 	ldr	r0, [r0]
        14cbb8:	eb654d1c 	bl	1aa0030 <TLibrarian::$Rendering(RefVar const &)>
        14cbbc:	eb69d562 	bl	1bc214c <$AllocateRefHandle(long)>
        14cbc0:	e1a06000 	mov	r6, r0
        14cbc4:	e59f00a0 	ldr	r0, [pc, #a0]	; 14cc6c <TOutline::FindPageInList(void)+0x160>
        14cbc8:	e5900000 	ldr	r0, [r0]
        14cbcc:	e5901000 	ldr	r1, [r0]
        14cbd0:	e5960000 	ldr	r0, [r6]
        14cbd4:	eb69dda1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14cbd8:	e5870000 	str	r0, [r7]
        14cbdc:	e1a00006 	mov	r0, r6
        14cbe0:	eb69d975 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cbe4:	e5970000 	ldr	r0, [r7]
        14cbe8:	e3300002 	teq	r0, #2	; 0x2
        14cbec:	0a000073 	beq	14cdc0 <TOutline::FindPageInList(void)+0x2b4>
        14cbf0:	e594105c 	ldr	r1, [r4, #92]	; fField92
        14cbf4:	eb69dd96 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14cbf8:	e5880000 	str	r0, [r8]
        14cbfc:	e3300002 	teq	r0, #2	; 0x2
        14cc00:	0a00006e 	beq	14cdc0 <TOutline::FindPageInList(void)+0x2b4>
        14cc04:	e24dd004 	sub	sp, sp, #4	; 0x4
        14cc08:	e59f1060 	ldr	r1, [pc, #60]	; 14cc70 <TOutline::FindPageInList(void)+0x164>	; fField60
        14cc0c:	e5911000 	ldr	r1, [r1]
        14cc10:	e5911000 	ldr	r1, [r1]
        14cc14:	e5940060 	ldr	r0, [r4, #96]	; fField96
        14cc18:	e5900000 	ldr	r0, [r0]
        14cc1c:	eb69dd8f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14cc20:	eb69d549 	bl	1bc214c <$AllocateRefHandle(long)>
        14cc24:	e58d0000 	str	r0, [sp]
        14cc28:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14cc2c:	e3500000 	cmp	r0, #0	; 0x0
        14cc30:	da000051 	ble	14cd7c <TOutline::FindPageInList(void)+0x270>
        14cc34:	e5970000 	ldr	r0, [r7]
        14cc38:	eb69e19b 	bl	1bc52ac <$Length(long)>
        14cc3c:	e594105c 	ldr	r1, [r4, #92]	; fField92
        14cc40:	e1500001 	cmp	r0, r1
        14cc44:	e1a01005 	mov	r1, r5
        14cc48:	da00000c 	ble	14cc80 <TOutline::FindPageInList(void)+0x174>
        14cc4c:	e5980000 	ldr	r0, [r8]
        14cc50:	eb69dd7f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14cc54:	e3100003 	tst	r0, #3	; 0x3
        14cc58:	1a000005 	bne	14cc74 <TOutline::FindPageInList(void)+0x168>
        14cc5c:	e1a00140 	mov	r0, r0, asr #2
        14cc60:	ea000004 	b	14cc78 <TOutline::FindPageInList(void)+0x16c>
        14cc64:	00682638 	rsbeq	r2, r8, r8, lsr r6
        14cc68:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        14cc6c:	006825f8 	streqd	r2, [r8], -#88
        14cc70:	006835c8 	rsbeq	r3, r8, r8, asr #11
        14cc74:	eb69d528 	bl	1bc211c <$_RINTError(long)>
        14cc78:	e1a06000 	mov	r6, r0
        14cc7c:	ea000027 	b	14cd20 <TOutline::FindPageInList(void)+0x214>
        14cc80:	e59d0000 	ldr	r0, [sp]
        14cc84:	e5900000 	ldr	r0, [r0]
        14cc88:	eb69dd71 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14cc8c:	e5890000 	str	r0, [r9]
        14cc90:	e59f1024 	ldr	r1, [pc, #24]	; 14ccbc <TOutline::FindPageInList(void)+0x1b0>
        14cc94:	e5911000 	ldr	r1, [r1]
        14cc98:	e5911000 	ldr	r1, [r1]
        14cc9c:	eb69dd6f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14cca0:	e59d1008 	ldr	r1, [sp, #8]
        14cca4:	e5810000 	str	r0, [r1]
        14cca8:	e3300002 	teq	r0, #2	; 0x2
        14ccac:	0a000003 	beq	14ccc0 <TOutline::FindPageInList(void)+0x1b4>
        14ccb0:	e3100003 	tst	r0, #3	; 0x3
        14ccb4:	1affffee 	bne	14cc74 <TOutline::FindPageInList(void)+0x168>
        14ccb8:	eaffffe7 	b	14cc5c <TOutline::FindPageInList(void)+0x150>
        14ccbc:	00683c78 	rsbeq	r3, r8, r8, ror ip
        14ccc0:	e24dd004 	sub	sp, sp, #4	; 0x4
        14ccc4:	e59f00f0 	ldr	r0, [pc, #f0]	; 14cdbc <TOutline::FindPageInList(void)+0x2b0>
        14ccc8:	e5900000 	ldr	r0, [r0]
        14cccc:	e5901000 	ldr	r1, [r0]
        14ccd0:	e5990000 	ldr	r0, [r9]
        14ccd4:	eb69dd61 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14ccd8:	e59d1010 	ldr	r1, [sp, #16]
        14ccdc:	e5810000 	str	r0, [r1]
        14cce0:	e3a00002 	mov	r0, #2	; 0x2
        14cce4:	eb69d518 	bl	1bc214c <$AllocateRefHandle(long)>
        14cce8:	e58d0000 	str	r0, [sp]
        14ccec:	e1a0300d 	mov	r3, sp
        14ccf0:	e3a02000 	mov	r2, #0	; 0x0
        14ccf4:	e92d000c 	stmdb	sp!, {r2, r3}
        14ccf8:	e28d2018 	add	r2, sp, #24	; 0x18
        14ccfc:	e28d1010 	add	r1, sp, #16	; 0x10
        14cd00:	e59d0028 	ldr	r0, [sp, #40]
        14cd04:	e5900000 	ldr	r0, [r0]
        14cd08:	e3a03000 	mov	r3, #0	; 0x0
        14cd0c:	eb651f3e 	bl	1a94a0c <TLibrarian::$FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)>
        14cd10:	e1a06000 	mov	r6, r0
        14cd14:	e5bd0008 	ldr	r0, [sp, #8]!
        14cd18:	eb69d927 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cd1c:	e28dd004 	add	sp, sp, #4	; 0x4
        14cd20:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14cd24:	e0800185 	add	r0, r0, r5, lsl #3
        14cd28:	e5900004 	ldr	r0, [r0, #4]
        14cd2c:	e1a00e20 	mov	r0, r0, lsr #28
        14cd30:	e59d1014 	ldr	r1, [sp, #20]
        14cd34:	e1310006 	teq	r1, r6
        14cd38:	1a000005 	bne	14cd54 <TOutline::FindPageInList(void)+0x248>
        14cd3c:	e59d1018 	ldr	r1, [sp, #24]
        14cd40:	e1500001 	cmp	r0, r1
        14cd44:	ca000002 	bgt	14cd54 <TOutline::FindPageInList(void)+0x248>
        14cd48:	e59d1010 	ldr	r1, [sp, #16]
        14cd4c:	e1360001 	teq	r6, r1
        14cd50:	0a000009 	beq	14cd7c <TOutline::FindPageInList(void)+0x270>
        14cd54:	e59d1014 	ldr	r1, [sp, #20]
        14cd58:	e1510006 	cmp	r1, r6
        14cd5c:	ba000006 	blt	14cd7c <TOutline::FindPageInList(void)+0x270>
        14cd60:	e1a0a005 	mov	sl, r5
        14cd64:	e2855001 	add	r5, r5, #1	; 0x1
        14cd68:	e58d0018 	str	r0, [sp, #24]
        14cd6c:	e58d6010 	str	r6, [sp, #16]
        14cd70:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14cd74:	e1500005 	cmp	r0, r5
        14cd78:	caffffad 	bgt	14cc34 <TOutline::FindPageInList(void)+0x128>
        14cd7c:	e59d0000 	ldr	r0, [sp]
        14cd80:	eb69d90d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cd84:	e59d0004 	ldr	r0, [sp, #4]
        14cd88:	eb69d90b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cd8c:	e1a00008 	mov	r0, r8
        14cd90:	eb69d909 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cd94:	e1a00007 	mov	r0, r7
        14cd98:	eb69d907 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cd9c:	e59d0008 	ldr	r0, [sp, #8]
        14cda0:	eb69d905 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cda4:	e1a00009 	mov	r0, r9
        14cda8:	eb69d903 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cdac:	e59d000c 	ldr	r0, [sp, #12]
        14cdb0:	eb69d901 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cdb4:	e1a0000a 	mov	r0, sl
        14cdb8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        14cdbc:	00683338 	rsbeq	r3, r8, r8, lsr r3
        14cdc0:	e59d0000 	ldr	r0, [sp]
        14cdc4:	eb69d8fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cdc8:	e1a00008 	mov	r0, r8
        14cdcc:	eb69d8fa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cdd0:	e1a00007 	mov	r0, r7
        14cdd4:	eb69d8f8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cdd8:	e59d0004 	ldr	r0, [sp, #4]
        14cddc:	eb69d8f6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cde0:	e1a00009 	mov	r0, r9
        14cde4:	eb69d8f4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cde8:	e59d0008 	ldr	r0, [sp, #8]
        14cdec:	eb69d8f2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14cdf0:	e1a0000a 	mov	r0, sl
        14cdf4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TOutline::FindTopic(TPoint)
 * Address: 0014cdf8
 */
TOutline::FindTopic(TPoint) {
    /*
        14cdf8:	e1a0c00d 	mov	ip, sp
        14cdfc:	e92dd9f3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, fp, ip, lr, pc}
        14ce00:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ce04:	e1a04000 	mov	r4, r0
        14ce08:	e24dd008 	sub	sp, sp, #8	; 0x8
        14ce0c:	e5901000 	ldr	r1, [r0]
        14ce10:	e1a0e00f 	mov	lr, pc
        14ce14:	e281ff57 	add	pc, r1, #348	; 0x15c
        14ce18:	e51b1022 	ldr	r1, [fp, -#34]
        14ce1c:	e0800001 	add	r0, r0, r1
        14ce20:	e54b0023 	strb	r0, [fp, -#35]
        14ce24:	e1a00440 	mov	r0, r0, asr #8
        14ce28:	e54b0024 	strb	r0, [fp, -#36]
        14ce2c:	e2840010 	add	r0, r4, #16	; 0x10
        14ce30:	e1a01000 	mov	r1, r0
        14ce34:	e8905000 	ldmia	r0, {ip, lr}
        14ce38:	e88d5000 	stmia	sp, {ip, lr}
        14ce3c:	e51b2022 	ldr	r2, [fp, -#34]
        14ce40:	e59d0002 	ldr	r0, [sp, #2]
        14ce44:	e0420000 	sub	r0, r2, r0
        14ce48:	e54b0023 	strb	r0, [fp, -#35]
        14ce4c:	e1a00440 	mov	r0, r0, asr #8
        14ce50:	e54b0024 	strb	r0, [fp, -#36]
        14ce54:	e51b2024 	ldr	r2, [fp, -#36]
        14ce58:	e59d0000 	ldr	r0, [sp]
        14ce5c:	e0420000 	sub	r0, r2, r0
        14ce60:	e54b0021 	strb	r0, [fp, -#33]
        14ce64:	e1a00440 	mov	r0, r0, asr #8
        14ce68:	e54b0022 	strb	r0, [fp, -#34]
        14ce6c:	e51b0024 	ldr	r0, [fp, -#36]
        14ce70:	e1b00840 	movs	r0, r0, asr #16
        14ce74:	e3e0e000 	mvn	lr, #0	; 0x0
        14ce78:	5a000001 	bpl	14ce84 <TOutline::FindTopic(TPoint)+0x8c>
        14ce7c:	e1a0000e 	mov	r0, lr
        14ce80:	ea000021 	b	14cf0c <TOutline::FindTopic(TPoint)+0x114>
        14ce84:	e3a00000 	mov	r0, #0	; 0x0
        14ce88:	e5942034 	ldr	r2, [r4, #52]	; fField52
        14ce8c:	e1a0c002 	mov	ip, r2
        14ce90:	e3520000 	cmp	r2, #0	; 0x0
        14ce94:	dafffff8 	ble	14ce7c <TOutline::FindTopic(TPoint)+0x84>
        14ce98:	e3a07001 	mov	r7, #1	; 0x1
        14ce9c:	e3e0600b 	mvn	r6, #11	; 0xb
        14cea0:	e5943038 	ldr	r3, [r4, #56]	; fField56
        14cea4:	e0835180 	add	r5, r3, r0, lsl #3
        14cea8:	e5952004 	ldr	r2, [r5, #4]
        14ceac:	e3120501 	tst	r2, #4194304	; 0x400000
        14ceb0:	0a000016 	beq	14cf10 <TOutline::FindTopic(TPoint)+0x118>
        14ceb4:	e5958002 	ldr	r8, [r5, #2]
        14ceb8:	e1a08848 	mov	r8, r8, asr #16
        14cebc:	e594504e 	ldr	r5, [r4, #78]	; fField78
        14cec0:	e0885845 	add	r5, r8, r5, asr #16
        14cec4:	e51b8024 	ldr	r8, [fp, -#36]
        14cec8:	e1550848 	cmp	r5, r8, asr #16
        14cecc:	da00000f 	ble	14cf10 <TOutline::FindTopic(TPoint)+0x118>
        14ced0:	e1a05702 	mov	r5, r2, lsl #14
        14ced4:	e1370f25 	teq	r7, r5, lsr #30
        14ced8:	1a00000b 	bne	14cf0c <TOutline::FindTopic(TPoint)+0x114>
        14cedc:	e1a02e22 	mov	r2, r2, lsr #28
        14cee0:	e0822082 	add	r2, r2, r2, lsl #1
        14cee4:	e0862102 	add	r2, r6, r2, lsl #2
        14cee8:	e1a02802 	mov	r2, r2, lsl #16
        14ceec:	e1a02842 	mov	r2, r2, asr #16
        14cef0:	e5915006 	ldr	r5, [r1, #6]
        14cef4:	e0625845 	rsb	r5, r2, r5, asr #16
        14cef8:	e0855002 	add	r5, r5, r2
        14cefc:	e51b2022 	ldr	r2, [fp, -#34]
        14cf00:	e1a02842 	mov	r2, r2, asr #16
        14cf04:	e15200c5 	cmp	r2, r5, asr #1
        14cf08:	ca000000 	bgt	14cf10 <TOutline::FindTopic(TPoint)+0x118>
        14cf0c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        14cf10:	e2800001 	add	r0, r0, #1	; 0x1
        14cf14:	e15c0000 	cmp	ip, r0
        14cf18:	caffffe1 	bgt	14cea4 <TOutline::FindTopic(TPoint)+0xac>
        14cf1c:	eaffffd6 	b	14ce7c <TOutline::FindTopic(TPoint)+0x84>
    */
}

/**
 * Symbol: TOutline::InitTopics(void)
 * Address: 0014cf20
 */
TOutline::InitTopics(void) {
    /*
        14cf20:	e1a0c00d 	mov	ip, sp
        14cf24:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        14cf28:	e24cb004 	sub	fp, ip, #4	; 0x4
        14cf2c:	e1a04000 	mov	r4, r0
        14cf30:	e24dd008 	sub	sp, sp, #8	; 0x8
        14cf34:	e2800024 	add	r0, r0, #36	; 0x24
        14cf38:	e59f1168 	ldr	r1, [pc, #168]	; 14d0a8 <TOutline::InitTopics(void)+0x188>
        14cf3c:	e3a03000 	mov	r3, #0	; 0x0
        14cf40:	e3a02000 	mov	r2, #0	; 0x0
        14cf44:	eb69dcca 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14cf48:	eb69d47f 	bl	1bc214c <$AllocateRefHandle(long)>
        14cf4c:	e1a07000 	mov	r7, r0
        14cf50:	e5900000 	ldr	r0, [r0]
        14cf54:	e3300002 	teq	r0, #2	; 0x2
        14cf58:	0a000004 	beq	14cf70 <TOutline::InitTopics(void)+0x50>
        14cf5c:	e3100003 	tst	r0, #3	; 0x3
        14cf60:	01a00140 	moveq	r0, r0, asr #2
        14cf64:	0a000000 	beq	14cf6c <TOutline::InitTopics(void)+0x4c>
        14cf68:	eb69d46b 	bl	1bc211c <$_RINTError(long)>
        14cf6c:	e584005c 	str	r0, [r4, #92]	; fField92
        14cf70:	e1a00004 	mov	r0, r4
        14cf74:	e5941000 	ldr	r1, [r4]
        14cf78:	e1a0e00f 	mov	lr, pc
        14cf7c:	e281ff47 	add	pc, r1, #284	; 0x11c
        14cf80:	eb69d471 	bl	1bc214c <$AllocateRefHandle(long)>
        14cf84:	e1a06000 	mov	r6, r0
        14cf88:	e59f011c 	ldr	r0, [pc, #11c]	; 14d0ac <TOutline::InitTopics(void)+0x18c>
        14cf8c:	e5900000 	ldr	r0, [r0]
        14cf90:	e5901000 	ldr	r1, [r0]
        14cf94:	e5960000 	ldr	r0, [r6]
        14cf98:	eb69dcaa 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        14cf9c:	e5c4004c 	strb	r0, [r4, #76]	; fField76
        14cfa0:	e59f0108 	ldr	r0, [pc, #108]	; 14d0b0 <TOutline::InitTopics(void)+0x190>
        14cfa4:	e5900000 	ldr	r0, [r0]
        14cfa8:	e5901000 	ldr	r1, [r0]
        14cfac:	e5960000 	ldr	r0, [r6]
        14cfb0:	eb69dca4 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        14cfb4:	e5c4004d 	strb	r0, [r4, #77]	; fField77
        14cfb8:	e1a00004 	mov	r0, r4
        14cfbc:	e5941000 	ldr	r1, [r4]
        14cfc0:	e1a0e00f 	mov	lr, pc
        14cfc4:	e281ff4b 	add	pc, r1, #300	; 0x12c
        14cfc8:	e5840034 	str	r0, [r4, #52]	; fField52
        14cfcc:	e1a00180 	mov	r0, r0, lsl #3
        14cfd0:	eb6a545a 	bl	1be2140 <$NewPtr>
        14cfd4:	e5840038 	str	r0, [r4, #56]	; fField56
        14cfd8:	e3300000 	teq	r0, #0	; 0x0
        14cfdc:	1a000005 	bne	14cff8 <TOutline::InitTopics(void)+0xd8>
        14cfe0:	e59f00cc 	ldr	r0, [pc, #cc]	; 14d0b4 <TOutline::InitTopics(void)+0x194>
        14cfe4:	e5900000 	ldr	r0, [r0]
        14cfe8:	e3a02000 	mov	r2, #0	; 0x0
        14cfec:	e3a010e9 	mov	r1, #233	; 0xe9
        14cff0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        14cff4:	eb6a5868 	bl	1be319c <$Throw>
        14cff8:	e3a00000 	mov	r0, #0	; 0x0
        14cffc:	e5c40053 	strb	r0, [r4, #83]	; fField83
        14d000:	e5c40052 	strb	r0, [r4, #82]	; fField82
        14d004:	e3a05000 	mov	r5, #0	; 0x0
        14d008:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14d00c:	e3500000 	cmp	r0, #0	; 0x0
        14d010:	da00001f 	ble	14d094 <TOutline::InitTopics(void)+0x174>
        14d014:	e3a08002 	mov	r8, #2	; 0x2
        14d018:	e1a0200d 	mov	r2, sp
        14d01c:	e1a01005 	mov	r1, r5
        14d020:	e1a00004 	mov	r0, r4
        14d024:	e5943000 	ldr	r3, [r4]
        14d028:	e1a0e00f 	mov	lr, pc
        14d02c:	e283fe17 	add	pc, r3, #368	; 0x170
        14d030:	e1a0200d 	mov	r2, sp
        14d034:	e1a01005 	mov	r1, r5
        14d038:	e1a00004 	mov	r0, r4
        14d03c:	e5943000 	ldr	r3, [r4]
        14d040:	e1a0e00f 	mov	lr, pc
        14d044:	e283fe12 	add	pc, r3, #288	; 0x120
        14d048:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14d04c:	e0800185 	add	r0, r0, r5, lsl #3
        14d050:	e5900004 	ldr	r0, [r0, #4]
        14d054:	e3100501 	tst	r0, #4194304	; 0x400000
        14d058:	11a00700 	movne	r0, r0, lsl #14
        14d05c:	11380f20 	teqne	r8, r0, lsr #30
        14d060:	0a000007 	beq	14d084 <TOutline::InitTopics(void)+0x164>
        14d064:	e5940052 	ldr	r0, [r4, #82]	; fField82
        14d068:	e1a00820 	mov	r0, r0, lsr #16
        14d06c:	e594104e 	ldr	r1, [r4, #78]	; fField78
        14d070:	e1a01821 	mov	r1, r1, lsr #16
        14d074:	e0800001 	add	r0, r0, r1
        14d078:	e5c40053 	strb	r0, [r4, #83]	; fField83
        14d07c:	e1a00440 	mov	r0, r0, asr #8
        14d080:	e5c40052 	strb	r0, [r4, #82]	; fField82
        14d084:	e2855001 	add	r5, r5, #1	; 0x1
        14d088:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14d08c:	e1500005 	cmp	r0, r5
        14d090:	caffffe0 	bgt	14d018 <TOutline::InitTopics(void)+0xf8>
        14d094:	e1a00006 	mov	r0, r6
        14d098:	eb69d847 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d09c:	e1a00007 	mov	r0, r7
        14d0a0:	eb69d845 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d0a4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        14d0a8:	00683cb8 	streqh	r3, [r8], -#200
        14d0ac:	00682af8 	streqd	r2, [r8], -#168
        14d0b0:	006830b8 	streqh	r3, [r8], -#8
        14d0b4:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TOutline::List(void)
 * Address: 0014d0b8
 */
TOutline::List(void) {
    /*
        14d0b8:	e1a0c00d 	mov	ip, sp
        14d0bc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14d0c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d0c4:	e1a04000 	mov	r4, r0
        14d0c8:	e2800064 	add	r0, r0, #100	; 0x64
        14d0cc:	e1a05000 	mov	r5, r0
        14d0d0:	e5900000 	ldr	r0, [r0]
        14d0d4:	e5900000 	ldr	r0, [r0]
        14d0d8:	e3300002 	teq	r0, #2	; 0x2
        14d0dc:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        14d0e0:	e1a00004 	mov	r0, r4
        14d0e4:	e5941000 	ldr	r1, [r4]
        14d0e8:	e1a0e00f 	mov	lr, pc
        14d0ec:	e281ff47 	add	pc, r1, #284	; 0x11c
        14d0f0:	eb69d415 	bl	1bc214c <$AllocateRefHandle(long)>
        14d0f4:	e1a06000 	mov	r6, r0
        14d0f8:	e1a07005 	mov	r7, r5
        14d0fc:	e59f0054 	ldr	r0, [pc, #54]	; 14d158 <TOutline::List(void)+0xa0>
        14d100:	e5900000 	ldr	r0, [r0]
        14d104:	e5901000 	ldr	r1, [r0]
        14d108:	e5960000 	ldr	r0, [r6]
        14d10c:	eb69dc53 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14d110:	e5971000 	ldr	r1, [r7]
        14d114:	e5810000 	str	r0, [r1]
        14d118:	e5d4004d 	ldrb	r0, [r4, #77]	; fField77
        14d11c:	e3300000 	teq	r0, #0	; 0x0
        14d120:	0a000006 	beq	14d140 <TOutline::List(void)+0x88>
        14d124:	e1a07005 	mov	r7, r5
        14d128:	e5b41054 	ldr	r1, [r4, #84]!	; fField84
        14d12c:	e5950000 	ldr	r0, [r5]
        14d130:	e5900000 	ldr	r0, [r0]
        14d134:	eb69dc46 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14d138:	e5971000 	ldr	r1, [r7]
        14d13c:	e5810000 	str	r0, [r1]
        14d140:	e5950000 	ldr	r0, [r5]
        14d144:	e5904000 	ldr	r4, [r0]
        14d148:	e1a00006 	mov	r0, r6
        14d14c:	eb69d81a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d150:	e1a00004 	mov	r0, r4
        14d154:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        14d158:	006835c8 	rsbeq	r3, r8, r8, asr #11
    */
}

/**
 * Symbol: TOutline::PageNumber(long, RefVar const &, long)
 * Address: 0014d15c
 */
TOutline::PageNumber(long, RefVar const &, long) {
    /*
        14d15c:	e1a0c00d 	mov	ip, sp
        14d160:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14d164:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d168:	e1a04000 	mov	r4, r0
        14d16c:	e1a05001 	mov	r5, r1
        14d170:	e1a06002 	mov	r6, r2
        14d174:	e24dd004 	sub	sp, sp, #4	; 0x4
        14d178:	e59f10e0 	ldr	r1, [pc, #e0]	; 14d260 <TOutline::PageNumber(long, RefVar const &, long)+0x104>
        14d17c:	eb69f4f5 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        14d180:	eb69d3f1 	bl	1bc214c <$AllocateRefHandle(long)>
        14d184:	e58d0000 	str	r0, [sp]
        14d188:	e5d4004c 	ldrb	r0, [r4, #76]	; fField76
        14d18c:	e59fa0d0 	ldr	sl, [pc, #d0]	; 14d264 <TOutline::PageNumber(long, RefVar const &, long)+0x108>
        14d190:	e3300000 	teq	r0, #0	; 0x0
        14d194:	1a00003a 	bne	14d284 <TOutline::PageNumber(long, RefVar const &, long)+0x128>
        14d198:	e1a0100d 	mov	r1, sp
        14d19c:	e59a0000 	ldr	r0, [sl]
        14d1a0:	eb654ba2 	bl	1aa0030 <TLibrarian::$Rendering(RefVar const &)>
        14d1a4:	eb69d3e8 	bl	1bc214c <$AllocateRefHandle(long)>
        14d1a8:	e1a08000 	mov	r8, r0
        14d1ac:	e59f00b4 	ldr	r0, [pc, #b4]	; 14d268 <TOutline::PageNumber(long, RefVar const &, long)+0x10c>
        14d1b0:	e5900000 	ldr	r0, [r0]
        14d1b4:	e5901000 	ldr	r1, [r0]
        14d1b8:	e5980000 	ldr	r0, [r8]
        14d1bc:	eb69dc27 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14d1c0:	eb69d3e1 	bl	1bc214c <$AllocateRefHandle(long)>
        14d1c4:	e1a07000 	mov	r7, r0
        14d1c8:	e5900000 	ldr	r0, [r0]
        14d1cc:	e3300002 	teq	r0, #2	; 0x2
        14d1d0:	0a000027 	beq	14d274 <TOutline::PageNumber(long, RefVar const &, long)+0x118>
        14d1d4:	eb69e034 	bl	1bc52ac <$Length(long)>
        14d1d8:	e1a01000 	mov	r1, r0
        14d1dc:	e594005c 	ldr	r0, [r4, #92]	; fField92
        14d1e0:	e1510000 	cmp	r1, r0
        14d1e4:	da000022 	ble	14d274 <TOutline::PageNumber(long, RefVar const &, long)+0x118>
        14d1e8:	e1a01000 	mov	r1, r0
        14d1ec:	e5970000 	ldr	r0, [r7]
        14d1f0:	eb69dc17 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14d1f4:	eb69d3d4 	bl	1bc214c <$AllocateRefHandle(long)>
        14d1f8:	e1a09000 	mov	r9, r0
        14d1fc:	e5900000 	ldr	r0, [r0]
        14d200:	e3300002 	teq	r0, #2	; 0x2
        14d204:	0a000018 	beq	14d26c <TOutline::PageNumber(long, RefVar const &, long)+0x110>
        14d208:	e1a01005 	mov	r1, r5
        14d20c:	eb69dc10 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14d210:	eb69d3cd 	bl	1bc214c <$AllocateRefHandle(long)>
        14d214:	e1a04000 	mov	r4, r0
        14d218:	e5900000 	ldr	r0, [r0]
        14d21c:	e3100003 	tst	r0, #3	; 0x3
        14d220:	01a00140 	moveq	r0, r0, asr #2
        14d224:	0a000000 	beq	14d22c <TOutline::PageNumber(long, RefVar const &, long)+0xd0>
        14d228:	eb69d3bb 	bl	1bc211c <$_RINTError(long)>
        14d22c:	e1a05000 	mov	r5, r0
        14d230:	e1a00004 	mov	r0, r4
        14d234:	eb69d7e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d238:	e1a00009 	mov	r0, r9
        14d23c:	eb69d7de 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d240:	e1a00007 	mov	r0, r7
        14d244:	eb69d7dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d248:	e1a00008 	mov	r0, r8
        14d24c:	eb69d7da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d250:	e59d0000 	ldr	r0, [sp]
        14d254:	eb69d7d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d258:	e1a00005 	mov	r0, r5
        14d25c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        14d260:	00682638 	rsbeq	r2, r8, r8, lsr r6
        14d264:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        14d268:	006825f8 	streqd	r2, [r8], -#88
        14d26c:	e1a00009 	mov	r0, r9
        14d270:	eb69d7d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d274:	e1a00007 	mov	r0, r7
        14d278:	eb69d7cf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d27c:	e1a00008 	mov	r0, r8
        14d280:	eb69d7cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d284:	e1a01005 	mov	r1, r5
        14d288:	e1a00004 	mov	r0, r4
        14d28c:	e5942000 	ldr	r2, [r4]
        14d290:	e1a0e00f 	mov	lr, pc
        14d294:	e282ff5b 	add	pc, r2, #364	; 0x16c
        14d298:	eb69d3ab 	bl	1bc214c <$AllocateRefHandle(long)>
        14d29c:	e1a04000 	mov	r4, r0
        14d2a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        14d2a4:	e59f503c 	ldr	r5, [pc, #3c]	; 14d2e8 <TOutline::PageNumber(long, RefVar const &, long)+0x18c>
        14d2a8:	e5950000 	ldr	r0, [r5]
        14d2ac:	e5901000 	ldr	r1, [r0]
        14d2b0:	e5940000 	ldr	r0, [r4]
        14d2b4:	eb69dbe3 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        14d2b8:	e3300000 	teq	r0, #0	; 0x0
        14d2bc:	0a00000e 	beq	14d2fc <TOutline::PageNumber(long, RefVar const &, long)+0x1a0>
        14d2c0:	e5950000 	ldr	r0, [r5]
        14d2c4:	e5901000 	ldr	r1, [r0]
        14d2c8:	e5940000 	ldr	r0, [r4]
        14d2cc:	eb69dbe3 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14d2d0:	e3100003 	tst	r0, #3	; 0x3
        14d2d4:	01a00140 	moveq	r0, r0, asr #2
        14d2d8:	0a000000 	beq	14d2e0 <TOutline::PageNumber(long, RefVar const &, long)+0x184>
        14d2dc:	eb69d38e 	bl	1bc211c <$_RINTError(long)>
        14d2e0:	e1a05000 	mov	r5, r0
        14d2e4:	ea000012 	b	14d334 <TOutline::PageNumber(long, RefVar const &, long)+0x1d8>
        14d2e8:	00683c78 	rsbeq	r3, r8, r8, ror ip
        14d2ec:	e59d0004 	ldr	r0, [sp, #4]
        14d2f0:	eb69d7b1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d2f4:	e1a00005 	mov	r0, r5
        14d2f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        14d2fc:	e3a00002 	mov	r0, #2	; 0x2
        14d300:	eb69d391 	bl	1bc214c <$AllocateRefHandle(long)>
        14d304:	e58d0000 	str	r0, [sp]
        14d308:	e1a0300d 	mov	r3, sp
        14d30c:	e3a02000 	mov	r2, #0	; 0x0
        14d310:	e92d000c 	stmdb	sp!, {r2, r3}
        14d314:	e1a02006 	mov	r2, r6
        14d318:	e28d100c 	add	r1, sp, #12	; 0xc
        14d31c:	e3a03000 	mov	r3, #0	; 0x0
        14d320:	e59a0000 	ldr	r0, [sl]
        14d324:	eb651db8 	bl	1a94a0c <TLibrarian::$FindPageByContent(RefVar const &, RefVar const &, long, long *, RefVar const &)>
        14d328:	e1a05000 	mov	r5, r0
        14d32c:	e5bd0008 	ldr	r0, [sp, #8]!
        14d330:	eb69d7a1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d334:	e1a00004 	mov	r0, r4
        14d338:	eb69d79f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d33c:	eaffffea 	b	14d2ec <TOutline::PageNumber(long, RefVar const &, long)+0x190>
    */
}

/**
 * Symbol: TOutline::PaneIndex(void)
 * Address: 0014d340
 */
TOutline::PaneIndex(void) {
    /*
        14d340:	e1a0c00d 	mov	ip, sp
        14d344:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14d348:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d34c:	e1a04000 	mov	r4, r0
        14d350:	e3a00002 	mov	r0, #2	; 0x2
        14d354:	eb69d37c 	bl	1bc214c <$AllocateRefHandle(long)>
        14d358:	e1a05000 	mov	r5, r0
        14d35c:	e59f1038 	ldr	r1, [pc, #38]	; 14d39c <TOutline::PaneIndex(void)+0x5c>
        14d360:	e1a00004 	mov	r0, r4
        14d364:	eb69f47b 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        14d368:	e5850000 	str	r0, [r5]
        14d36c:	e3300002 	teq	r0, #2	; 0x2
        14d370:	03e04000 	mvneq	r4, #0	; 0x0
        14d374:	0a000004 	beq	14d38c <TOutline::PaneIndex(void)+0x4c>
        14d378:	e3100003 	tst	r0, #3	; 0x3
        14d37c:	01a00140 	moveq	r0, r0, asr #2
        14d380:	0a000000 	beq	14d388 <TOutline::PaneIndex(void)+0x48>
        14d384:	eb69d364 	bl	1bc211c <$_RINTError(long)>
        14d388:	e1a04000 	mov	r4, r0
        14d38c:	e1a00005 	mov	r0, r5
        14d390:	eb69d789 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d394:	e1a00004 	mov	r0, r4
        14d398:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14d39c:	00683cb8 	streqh	r3, [r8], -#200
    */
}

/**
 * Symbol: TOutline::__dt(void)
 * Address: 0014d3a0
 */
TOutline::~TOutline(void) {
    /*
        14d3a0:	e1a0c00d 	mov	ip, sp
        14d3a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14d3a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d3ac:	e1a04000 	mov	r4, r0
        14d3b0:	e1a05001 	mov	r5, r1
        14d3b4:	e59f0040 	ldr	r0, [pc, #40]	; 14d3fc <TOutline::__dt(void)+0x5c>
        14d3b8:	e5840000 	str	r0, [r4]
        14d3bc:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14d3c0:	eb6a4f3b 	bl	1be10b4 <$DisposPtr>
        14d3c4:	e5940064 	ldr	r0, [r4, #100]	; fField100
        14d3c8:	eb69d77b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d3cc:	e5940060 	ldr	r0, [r4, #96]	; fField96
        14d3d0:	eb69d779 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d3d4:	e5940030 	ldr	r0, [r4, #48]	; fField48
        14d3d8:	eb69d777 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14d3dc:	e1a00004 	mov	r0, r4
        14d3e0:	e3a01000 	mov	r1, #0	; 0x0
        14d3e4:	eb69f028 	bl	1bc948c <TView::$__dt(void)>
        14d3e8:	e3150001 	tst	r5, #1	; 0x1
        14d3ec:	11a00004 	movne	r0, r4
        14d3f0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        14d3f4:	1a64ec10 	bne	1a8843c <$__dl__8TxObjectSFPv>
        14d3f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14d3fc:	000201f8 	streqd	r0, [r2], -r8
    */
}

/**
 * Symbol: TOutline::RealDoCommand(RefVar const &)
 * Address: 0014d400
 */
TOutline::RealDoCommand(RefVar const &) {
    /*
        14d400:	e1a0c00d 	mov	ip, sp
        14d404:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14d408:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d40c:	e1a04000 	mov	r4, r0
        14d410:	e1a05001 	mov	r5, r1
        14d414:	e24dd008 	sub	sp, sp, #8	; 0x8
        14d418:	e1a00001 	mov	r0, r1
        14d41c:	eb6563c9 	bl	1aa6348 <$CommandID(RefVar const &)>
        14d420:	e330000b 	teq	r0, #11	; 0xb
        14d424:	0a00000b 	beq	14d458 <TOutline::RealDoCommand(RefVar const &)+0x58>
        14d428:	e330002d 	teq	r0, #45	; 0x2d
        14d42c:	0a00001b 	beq	14d4a0 <TOutline::RealDoCommand(RefVar const &)+0xa0>
        14d430:	e330002e 	teq	r0, #46	; 0x2e
        14d434:	1a00005c 	bne	14d5ac <TOutline::RealDoCommand(RefVar const &)+0x1ac>
        14d438:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14d43c:	e2405001 	sub	r5, r0, #1	; 0x1
        14d440:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14d444:	e0801185 	add	r1, r0, r5, lsl #3
        14d448:	e5911004 	ldr	r1, [r1, #4]
        14d44c:	e3110501 	tst	r1, #4194304	; 0x400000
        14d450:	1a000030 	bne	14d518 <TOutline::RealDoCommand(RefVar const &)+0x118>
        14d454:	ea00002a 	b	14d504 <TOutline::RealDoCommand(RefVar const &)+0x104>
        14d458:	e1a00005 	mov	r0, r5
        14d45c:	eb6563bd 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        14d460:	e1a06000 	mov	r6, r0
        14d464:	eb655761 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        14d468:	e3a01001 	mov	r1, #1	; 0x1
        14d46c:	eb653222 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        14d470:	e1a0100d 	mov	r1, sp
        14d474:	e1a00006 	mov	r0, r6
        14d478:	eb64f43c 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        14d47c:	e1a0100d 	mov	r1, sp
        14d480:	e1a00004 	mov	r0, r4
        14d484:	e5942000 	ldr	r2, [r4]
        14d488:	e1a0e00f 	mov	lr, pc
        14d48c:	e282ff4d 	add	pc, r2, #308	; 0x134
        14d490:	e1a00005 	mov	r0, r5
        14d494:	e3a01001 	mov	r1, #1	; 0x1
        14d498:	eb6563ad 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        14d49c:	ea000040 	b	14d5a4 <TOutline::RealDoCommand(RefVar const &)+0x1a4>
        14d4a0:	e5940044 	ldr	r0, [r4, #68]	; fField68
        14d4a4:	e1a00840 	mov	r0, r0, asr #16
        14d4a8:	e3500000 	cmp	r0, #0	; 0x0
        14d4ac:	da00003c 	ble	14d5a4 <TOutline::RealDoCommand(RefVar const &)+0x1a4>
        14d4b0:	e594504e 	ldr	r5, [r4, #78]	; fField78
        14d4b4:	e1a05845 	mov	r5, r5, asr #16
        14d4b8:	e1a00004 	mov	r0, r4
        14d4bc:	e5941000 	ldr	r1, [r4]
        14d4c0:	e1a0e00f 	mov	lr, pc
        14d4c4:	e281fd06 	add	pc, r1, #384	; 0x180
        14d4c8:	e2400001 	sub	r0, r0, #1	; 0x1
        14d4cc:	e0010590 	mul	r1, r0, r5
        14d4d0:	e5940044 	ldr	r0, [r4, #68]	; fField68
        14d4d4:	e0710840 	rsbs	r0, r1, r0, asr #16
        14d4d8:	e3a01000 	mov	r1, #0	; 0x0
        14d4dc:	41a00001 	movmi	r0, r1
        14d4e0:	e5c40045 	strb	r0, [r4, #69]	; fField69
        14d4e4:	e1a00440 	mov	r0, r0, asr #8
        14d4e8:	e5c40044 	strb	r0, [r4, #68]	; fField68
        14d4ec:	e1a00004 	mov	r0, r4
        14d4f0:	e3a01000 	mov	r1, #0	; 0x0
        14d4f4:	e5942000 	ldr	r2, [r4]
        14d4f8:	e1a0e00f 	mov	lr, pc
        14d4fc:	e282f054 	add	pc, r2, #84	; 0x54
        14d500:	ea000027 	b	14d5a4 <TOutline::RealDoCommand(RefVar const &)+0x1a4>
        14d504:	e2455001 	sub	r5, r5, #1	; 0x1
        14d508:	e0801185 	add	r1, r0, r5, lsl #3
        14d50c:	e5911004 	ldr	r1, [r1, #4]
        14d510:	e3110501 	tst	r1, #4194304	; 0x400000
        14d514:	0afffffa 	beq	14d504 <TOutline::RealDoCommand(RefVar const &)+0x104>
        14d518:	e1a00004 	mov	r0, r4
        14d51c:	e5941000 	ldr	r1, [r4]
        14d520:	e1a0e00f 	mov	lr, pc
        14d524:	e281fd06 	add	pc, r1, #384	; 0x180
        14d528:	e594104e 	ldr	r1, [r4, #78]	; fField78
        14d52c:	e1a01841 	mov	r1, r1, asr #16
        14d530:	e1a07001 	mov	r7, r1
        14d534:	e0000091 	mul	r0, r1, r0
        14d538:	e1a06800 	mov	r6, r0, lsl #16
        14d53c:	e1a06846 	mov	r6, r6, asr #16
        14d540:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14d544:	e0800185 	add	r0, r0, r5, lsl #3
        14d548:	e5901002 	ldr	r1, [r0, #2]
        14d54c:	e5940044 	ldr	r0, [r4, #68]	; fField68
        14d550:	e0860840 	add	r0, r6, r0, asr #16
        14d554:	e1500841 	cmp	r0, r1, asr #16
        14d558:	ca000011 	bgt	14d5a4 <TOutline::RealDoCommand(RefVar const &)+0x1a4>
        14d55c:	e1a00004 	mov	r0, r4
        14d560:	e5941000 	ldr	r1, [r4]
        14d564:	e1a0e00f 	mov	lr, pc
        14d568:	e281fd06 	add	pc, r1, #384	; 0x180
        14d56c:	e2400001 	sub	r0, r0, #1	; 0x1
        14d570:	e0010790 	mul	r1, r0, r7
        14d574:	e5940044 	ldr	r0, [r4, #68]	; fField68
        14d578:	e0810840 	add	r0, r1, r0, asr #16
        14d57c:	e594104e 	ldr	r1, [r4, #78]	; fField78
        14d580:	e5942038 	ldr	r2, [r4, #56]	; fField56
        14d584:	e0822185 	add	r2, r2, r5, lsl #3
        14d588:	e5922002 	ldr	r2, [r2, #2]
        14d58c:	e0662842 	rsb	r2, r6, r2, asr #16
        14d590:	e0821841 	add	r1, r2, r1, asr #16
        14d594:	e1500001 	cmp	r0, r1
        14d598:	baffffd0 	blt	14d4e0 <TOutline::RealDoCommand(RefVar const &)+0xe0>
        14d59c:	e1a00001 	mov	r0, r1
        14d5a0:	eaffffce 	b	14d4e0 <TOutline::RealDoCommand(RefVar const &)+0xe0>
        14d5a4:	e3a00001 	mov	r0, #1	; 0x1
        14d5a8:	ea000002 	b	14d5b8 <TOutline::RealDoCommand(RefVar const &)+0x1b8>
        14d5ac:	e1a01005 	mov	r1, r5
        14d5b0:	e1a00004 	mov	r0, r4
        14d5b4:	eb65466c 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
        14d5b8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TOutline::RealDraw(TRect &)
 * Address: 0014d5bc
 */
TOutline::RealDraw(TRect &) {
    /*
        14d5bc:	e1a0c00d 	mov	ip, sp
        14d5c0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14d5c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d5c8:	e1a04000 	mov	r4, r0
        14d5cc:	e24dd010 	sub	sp, sp, #16	; 0x10
        14d5d0:	e2800010 	add	r0, r0, #16	; 0x10
        14d5d4:	e8901008 	ldmia	r0, {r3, ip}
        14d5d8:	e88d1008 	stmia	sp, {r3, ip}
        14d5dc:	e5d4004d 	ldrb	r0, [r4, #77]	; fField77
        14d5e0:	e3300000 	teq	r0, #0	; 0x0
        14d5e4:	0594005c 	ldreq	r0, [r4, #92]	; fField92
        14d5e8:	03300000 	teqeq	r0, #0	; 0x0
        14d5ec:	13e00000 	mvnne	r0, #0	; 0x0
        14d5f0:	1a000003 	bne	14d604 <TOutline::RealDraw(TRect &)+0x48>
        14d5f4:	e1a00004 	mov	r0, r4
        14d5f8:	e5941000 	ldr	r1, [r4]
        14d5fc:	e1a0e00f 	mov	lr, pc
        14d600:	e281ff62 	add	pc, r1, #392	; 0x188
        14d604:	e5840048 	str	r0, [r4, #72]	; fField72
        14d608:	e1a00004 	mov	r0, r4
        14d60c:	e5941000 	ldr	r1, [r4]
        14d610:	e1a0e00f 	mov	lr, pc
        14d614:	e281fd06 	add	pc, r1, #384	; 0x180
        14d618:	e1a07000 	mov	r7, r0
        14d61c:	e3a05000 	mov	r5, #0	; 0x0
        14d620:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14d624:	e3500000 	cmp	r0, #0	; 0x0
        14d628:	da00001f 	ble	14d6ac <TOutline::RealDraw(TRect &)+0xf0>
        14d62c:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14d630:	e0806185 	add	r6, r0, r5, lsl #3
        14d634:	e1a00004 	mov	r0, r4
        14d638:	e5941000 	ldr	r1, [r4]
        14d63c:	e1a0e00f 	mov	lr, pc
        14d640:	e281ff57 	add	pc, r1, #348	; 0x15c
        14d644:	e5961002 	ldr	r1, [r6, #2]
        14d648:	e1500841 	cmp	r0, r1, asr #16
        14d64c:	ca000012 	bgt	14d69c <TOutline::RealDraw(TRect &)+0xe0>
        14d650:	e5960004 	ldr	r0, [r6, #4]
        14d654:	e3100501 	tst	r0, #4194304	; 0x400000
        14d658:	0a00000f 	beq	14d69c <TOutline::RealDraw(TRect &)+0xe0>
        14d65c:	e1a0300d 	mov	r3, sp
        14d660:	e28d2008 	add	r2, sp, #8	; 0x8
        14d664:	e1a01006 	mov	r1, r6
        14d668:	e1a00004 	mov	r0, r4
        14d66c:	e594c000 	ldr	ip, [r4]
        14d670:	e1a0e00f 	mov	lr, pc
        14d674:	e28cff5e 	add	pc, ip, #376	; 0x178
        14d678:	e28d2008 	add	r2, sp, #8	; 0x8
        14d67c:	e1a01005 	mov	r1, r5
        14d680:	e1a00004 	mov	r0, r4
        14d684:	e5943000 	ldr	r3, [r4]
        14d688:	e1a0e00f 	mov	lr, pc
        14d68c:	e283ff4e 	add	pc, r3, #312	; 0x138
        14d690:	e2477001 	sub	r7, r7, #1	; 0x1
        14d694:	e3570000 	cmp	r7, #0	; 0x0
        14d698:	da000003 	ble	14d6ac <TOutline::RealDraw(TRect &)+0xf0>
        14d69c:	e2855001 	add	r5, r5, #1	; 0x1
        14d6a0:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14d6a4:	e1500005 	cmp	r0, r5
        14d6a8:	caffffdf 	bgt	14d62c <TOutline::RealDraw(TRect &)+0x70>
        14d6ac:	e1a00004 	mov	r0, r4
        14d6b0:	e5941000 	ldr	r1, [r4]
        14d6b4:	e1a0e00f 	mov	lr, pc
        14d6b8:	e281fe16 	add	pc, r1, #352	; 0x160
        14d6bc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TOutline::RefreshTopics(long)
 * Address: 0014d6c0
 */
TOutline::RefreshTopics(long) {
    /*
        14d6c0:	e1a0c00d 	mov	ip, sp
        14d6c4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14d6c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d6cc:	e1a04000 	mov	r4, r0
        14d6d0:	e1a05001 	mov	r5, r1
        14d6d4:	e5900038 	ldr	r0, [r0, #56]	; fField56
        14d6d8:	eb6a4e75 	bl	1be10b4 <$DisposPtr>
        14d6dc:	e3e06000 	mvn	r6, #0	; 0x0
        14d6e0:	e3a01002 	mov	r1, #2	; 0x2
        14d6e4:	e584605c 	str	r6, [r4, #92]	; fField92
        14d6e8:	e5940060 	ldr	r0, [r4, #96]	; fField96
        14d6ec:	e5801000 	str	r1, [r0]
        14d6f0:	e5940064 	ldr	r0, [r4, #100]	; fField100
        14d6f4:	e5801000 	str	r1, [r0]
        14d6f8:	e1a00005 	mov	r0, r5
        14d6fc:	e3a01001 	mov	r1, #1	; 0x1
        14d700:	e5845054 	str	r5, [r4, #84]	; fField84
        14d704:	e3550001 	cmp	r5, #1	; 0x1
        14d708:	a1a00001 	movge	r0, r1
        14d70c:	e5840054 	str	r0, [r4, #84]	; fField84
        14d710:	e1a00004 	mov	r0, r4
        14d714:	e5941000 	ldr	r1, [r4]
        14d718:	e1a0e00f 	mov	lr, pc
        14d71c:	e281ff53 	add	pc, r1, #332	; 0x14c
        14d720:	e3a00000 	mov	r0, #0	; 0x0
        14d724:	e584603c 	str	r6, [r4, #60]	; fField60
        14d728:	e5c40045 	strb	r0, [r4, #69]	; fField69
        14d72c:	e5c40044 	strb	r0, [r4, #68]	; fField68
        14d730:	e5840040 	str	r0, [r4, #64]	; fField64
        14d734:	e594005c 	ldr	r0, [r4, #92]	; fField92
        14d738:	e3300000 	teq	r0, #0	; 0x0
        14d73c:	1a000010 	bne	14d784 <TOutline::RefreshTopics(long)+0xc4>
        14d740:	e1a00004 	mov	r0, r4
        14d744:	e5941000 	ldr	r1, [r4]
        14d748:	e1a0e00f 	mov	lr, pc
        14d74c:	e281ff51 	add	pc, r1, #324	; 0x144
        14d750:	e1a05000 	mov	r5, r0
        14d754:	e3700001 	cmn	r0, #1	; 0x1
        14d758:	0a000009 	beq	14d784 <TOutline::RefreshTopics(long)+0xc4>
        14d75c:	e1a01005 	mov	r1, r5
        14d760:	e1a00004 	mov	r0, r4
        14d764:	e5942000 	ldr	r2, [r4]
        14d768:	e1a0e00f 	mov	lr, pc
        14d76c:	e282ff56 	add	pc, r2, #344	; 0x158
        14d770:	e584503c 	str	r5, [r4, #60]	; fField60
        14d774:	e1a00004 	mov	r0, r4
        14d778:	e5941000 	ldr	r1, [r4]
        14d77c:	e1a0e00f 	mov	lr, pc
        14d780:	e281ff5a 	add	pc, r1, #360	; 0x168
        14d784:	e1a00004 	mov	r0, r4
        14d788:	e3a01000 	mov	r1, #0	; 0x0
        14d78c:	e5942000 	ldr	r2, [r4]
        14d790:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        14d794:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TOutline::RevealTopic(long)
 * Address: 0014d798
 */
TOutline::RevealTopic(long) {
    /*
        14d798:	e1a0c00d 	mov	ip, sp
        14d79c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14d7a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d7a4:	e1a04000 	mov	r4, r0
        14d7a8:	e1a05001 	mov	r5, r1
        14d7ac:	e5900038 	ldr	r0, [r0, #56]	; fField56
        14d7b0:	e0801181 	add	r1, r0, r1, lsl #3
        14d7b4:	e5911004 	ldr	r1, [r1, #4]
        14d7b8:	e3110501 	tst	r1, #4194304	; 0x400000
        14d7bc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        14d7c0:	e7901185 	ldr	r1, [r0, r5, lsl #3]
        14d7c4:	e1a01841 	mov	r1, r1, asr #16
        14d7c8:	e1a00004 	mov	r0, r4
        14d7cc:	e5942000 	ldr	r2, [r4]
        14d7d0:	e1a0e00f 	mov	lr, pc
        14d7d4:	e282ff56 	add	pc, r2, #344	; 0x158
        14d7d8:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14d7dc:	e7901185 	ldr	r1, [r0, r5, lsl #3]
        14d7e0:	e1a01841 	mov	r1, r1, asr #16
        14d7e4:	e1a00004 	mov	r0, r4
        14d7e8:	e3a02000 	mov	r2, #0	; 0x0
        14d7ec:	e5943000 	ldr	r3, [r4]
        14d7f0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        14d7f4:	e283fd05 	add	pc, r3, #320	; 0x140
    */
}

/**
 * Symbol: TOutline::ScrollToCurrent(void)
 * Address: 0014d7f8
 */
TOutline::ScrollToCurrent(void) {
    /*
        14d7f8:	e1a0c00d 	mov	ip, sp
        14d7fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14d800:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d804:	e1a04000 	mov	r4, r0
        14d808:	e590005c 	ldr	r0, [r0, #92]	; fField92
        14d80c:	e3300000 	teq	r0, #0	; 0x0
        14d810:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        14d814:	e1a00004 	mov	r0, r4
        14d818:	e5941000 	ldr	r1, [r4]
        14d81c:	e1a0e00f 	mov	lr, pc
        14d820:	e281ff51 	add	pc, r1, #324	; 0x144
        14d824:	e1a05000 	mov	r5, r0
        14d828:	e3700001 	cmn	r0, #1	; 0x1
        14d82c:	0a00000e 	beq	14d86c <TOutline::ScrollToCurrent(void)+0x74>
        14d830:	e1a01005 	mov	r1, r5
        14d834:	e1a00004 	mov	r0, r4
        14d838:	e5942000 	ldr	r2, [r4]
        14d83c:	e1a0e00f 	mov	lr, pc
        14d840:	e282ff49 	add	pc, r2, #292	; 0x124
        14d844:	e1a01005 	mov	r1, r5
        14d848:	e1a00004 	mov	r0, r4
        14d84c:	e5942000 	ldr	r2, [r4]
        14d850:	e1a0e00f 	mov	lr, pc
        14d854:	e282ff56 	add	pc, r2, #344	; 0x158
        14d858:	e584503c 	str	r5, [r4, #60]	; fField60
        14d85c:	e1a00004 	mov	r0, r4
        14d860:	e5941000 	ldr	r1, [r4]
        14d864:	e1a0e00f 	mov	lr, pc
        14d868:	e281ff5a 	add	pc, r1, #360	; 0x168
        14d86c:	e1a00004 	mov	r0, r4
        14d870:	e3a01000 	mov	r1, #0	; 0x0
        14d874:	e5942000 	ldr	r2, [r4]
        14d878:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        14d87c:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TOutline::ScrollToSelection(void)
 * Address: 0014d880
 */
TOutline::ScrollToSelection(void) {
    /*
        14d880:	e1a0c00d 	mov	ip, sp
        14d884:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14d888:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d88c:	e1a04000 	mov	r4, r0
        14d890:	e5901038 	ldr	r1, [r0, #56]	; fField56
        14d894:	e590003c 	ldr	r0, [r0, #60]	; fField60
        14d898:	e0810180 	add	r0, r1, r0, lsl #3
        14d89c:	e5905002 	ldr	r5, [r0, #2]
        14d8a0:	e1a05845 	mov	r5, r5, asr #16
        14d8a4:	e1a00004 	mov	r0, r4
        14d8a8:	e5941000 	ldr	r1, [r4]
        14d8ac:	e1a0e00f 	mov	lr, pc
        14d8b0:	e281fd06 	add	pc, r1, #384	; 0x180
        14d8b4:	e594104e 	ldr	r1, [r4, #78]	; fField78
        14d8b8:	e1a01821 	mov	r1, r1, lsr #16
        14d8bc:	e0000091 	mul	r0, r1, r0
        14d8c0:	e1a00800 	mov	r0, r0, lsl #16
        14d8c4:	e1a00840 	mov	r0, r0, asr #16
        14d8c8:	e5941044 	ldr	r1, [r4, #68]	; fField68
        14d8cc:	e1a01841 	mov	r1, r1, asr #16
        14d8d0:	e1510005 	cmp	r1, r5
        14d8d4:	da000014 	ble	14d92c <TOutline::ScrollToSelection(void)+0xac>
        14d8d8:	e1a00004 	mov	r0, r4
        14d8dc:	e5941000 	ldr	r1, [r4]
        14d8e0:	e1a0e00f 	mov	lr, pc
        14d8e4:	e281fd06 	add	pc, r1, #384	; 0x180
        14d8e8:	e0800fa0 	add	r0, r0, r0, lsr #31
        14d8ec:	e1a000c0 	mov	r0, r0, asr #1
        14d8f0:	e594104e 	ldr	r1, [r4, #78]	; fField78
        14d8f4:	e1a01821 	mov	r1, r1, lsr #16
        14d8f8:	e0000091 	mul	r0, r1, r0
        14d8fc:	e0450000 	sub	r0, r5, r0
        14d900:	e5c40045 	strb	r0, [r4, #69]	; fField69
        14d904:	e1a00440 	mov	r0, r0, asr #8
        14d908:	e5c40044 	strb	r0, [r4, #68]	; fField68
        14d90c:	e5940044 	ldr	r0, [r4, #68]	; fField68
        14d910:	e1b00840 	movs	r0, r0, asr #16
        14d914:	e3a01000 	mov	r1, #0	; 0x0
        14d918:	41a00001 	movmi	r0, r1
        14d91c:	e5c40045 	strb	r0, [r4, #69]	; fField69
        14d920:	e1a00440 	mov	r0, r0, asr #8
        14d924:	e5c40044 	strb	r0, [r4, #68]	; fField68
        14d928:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14d92c:	e0810000 	add	r0, r1, r0
        14d930:	e1500005 	cmp	r0, r5
        14d934:	c91ba830 	ldmgtdb	fp, {r4, r5, fp, sp, pc}
        14d938:	e1a00004 	mov	r0, r4
        14d93c:	e5941000 	ldr	r1, [r4]
        14d940:	e1a0e00f 	mov	lr, pc
        14d944:	e281fd06 	add	pc, r1, #384	; 0x180
        14d948:	e0800fa0 	add	r0, r0, r0, lsr #31
        14d94c:	e1a010c0 	mov	r1, r0, asr #1
        14d950:	e594004e 	ldr	r0, [r4, #78]	; fField78
        14d954:	e1a00820 	mov	r0, r0, lsr #16
        14d958:	e0010190 	mul	r1, r0, r1
        14d95c:	e0450001 	sub	r0, r5, r1
        14d960:	eaffffed 	b	14d91c <TOutline::ScrollToSelection(void)+0x9c>
    */
}

/**
 * Symbol: TOutline::SetScrollers(void)
 * Address: 0014d964
 */
TOutline::SetScrollers(void) {
    /*
        14d964:	e1a0c00d 	mov	ip, sp
        14d968:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        14d96c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14d970:	e1a04000 	mov	r4, r0
        14d974:	e3a05000 	mov	r5, #0	; 0x0
        14d978:	e3a00000 	mov	r0, #0	; 0x0
        14d97c:	e5941034 	ldr	r1, [r4, #52]	; fField52
        14d980:	e1a02001 	mov	r2, r1
        14d984:	e3a07001 	mov	r7, #1	; 0x1
        14d988:	e3510000 	cmp	r1, #0	; 0x0
        14d98c:	da000008 	ble	14d9b4 <TOutline::SetScrollers(void)+0x50>
        14d990:	e5941038 	ldr	r1, [r4, #56]	; fField56
        14d994:	e0813180 	add	r3, r1, r0, lsl #3
        14d998:	e5933004 	ldr	r3, [r3, #4]
        14d99c:	e1a03483 	mov	r3, r3, lsl #9
        14d9a0:	e1370fa3 	teq	r7, r3, lsr #31
        14d9a4:	02855001 	addeq	r5, r5, #1	; 0x1
        14d9a8:	e2800001 	add	r0, r0, #1	; 0x1
        14d9ac:	e1520000 	cmp	r2, r0
        14d9b0:	cafffff7 	bgt	14d994 <TOutline::SetScrollers(void)+0x30>
        14d9b4:	e59f1108 	ldr	r1, [pc, #108]	; 14dac4 <TOutline::SetScrollers(void)+0x160>
        14d9b8:	e1a06001 	mov	r6, r1
        14d9bc:	e1a00004 	mov	r0, r4
        14d9c0:	eb69f2e0 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        14d9c4:	e3300002 	teq	r0, #2	; 0x2
        14d9c8:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        14d9cc:	e24dd004 	sub	sp, sp, #4	; 0x4
        14d9d0:	e3a00004 	mov	r0, #4	; 0x4
        14d9d4:	eb6538f0 	bl	1a9bd9c <$MakeArray(long)>
        14d9d8:	eb69d1db 	bl	1bc214c <$AllocateRefHandle(long)>
        14d9dc:	e58d0000 	str	r0, [sp]
        14d9e0:	e1a00105 	mov	r0, r5, lsl #2
        14d9e4:	e1a08000 	mov	r8, r0
        14d9e8:	eb69d1d7 	bl	1bc214c <$AllocateRefHandle(long)>
        14d9ec:	e1a05000 	mov	r5, r0
        14d9f0:	e3a01000 	mov	r1, #0	; 0x0
        14d9f4:	e5902000 	ldr	r2, [r0]
        14d9f8:	e59d0000 	ldr	r0, [sp]
        14d9fc:	e5900000 	ldr	r0, [r0]
        14da00:	eb69e254 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        14da04:	e1a00005 	mov	r0, r5
        14da08:	eb69d5eb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14da0c:	e1a00008 	mov	r0, r8
        14da10:	eb69d1cd 	bl	1bc214c <$AllocateRefHandle(long)>
        14da14:	e1a05000 	mov	r5, r0
        14da18:	e1a01007 	mov	r1, r7
        14da1c:	e5902000 	ldr	r2, [r0]
        14da20:	e59d0000 	ldr	r0, [sp]
        14da24:	e5900000 	ldr	r0, [r0]
        14da28:	eb69e24a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        14da2c:	e1a00005 	mov	r0, r5
        14da30:	eb69d5e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14da34:	e1a00004 	mov	r0, r4
        14da38:	e5941000 	ldr	r1, [r4]
        14da3c:	e1a0e00f 	mov	lr, pc
        14da40:	e281fd06 	add	pc, r1, #384	; 0x180
        14da44:	e1a00100 	mov	r0, r0, lsl #2
        14da48:	eb69d1bf 	bl	1bc214c <$AllocateRefHandle(long)>
        14da4c:	e1a05000 	mov	r5, r0
        14da50:	e3a01002 	mov	r1, #2	; 0x2
        14da54:	e5902000 	ldr	r2, [r0]
        14da58:	e59d0000 	ldr	r0, [sp]
        14da5c:	e5900000 	ldr	r0, [r0]
        14da60:	eb69e23c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        14da64:	e1a00005 	mov	r0, r5
        14da68:	eb69d5d3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14da6c:	e594004e 	ldr	r0, [r4, #78]	; fField78
        14da70:	e1a00840 	mov	r0, r0, asr #16
        14da74:	e5941044 	ldr	r1, [r4, #68]	; fField68
        14da78:	e1a01841 	mov	r1, r1, asr #16
        14da7c:	eb6993af 	bl	1bb2940 <$__rt_sdiv>
        14da80:	e1a00100 	mov	r0, r0, lsl #2
        14da84:	eb69d1b0 	bl	1bc214c <$AllocateRefHandle(long)>
        14da88:	e1a05000 	mov	r5, r0
        14da8c:	e3a01003 	mov	r1, #3	; 0x3
        14da90:	e5902000 	ldr	r2, [r0]
        14da94:	e59d0000 	ldr	r0, [sp]
        14da98:	e5900000 	ldr	r0, [r0]
        14da9c:	eb69e22d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        14daa0:	e1a00005 	mov	r0, r5
        14daa4:	eb69d5c4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14daa8:	e2840024 	add	r0, r4, #36	; 0x24
        14daac:	e1a0200d 	mov	r2, sp
        14dab0:	e1a01006 	mov	r1, r6
        14dab4:	eb69d5c6 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        14dab8:	e59d0000 	ldr	r0, [sp]
        14dabc:	eb69d5be 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14dac0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        14dac4:	006845a8 	rsbeq	r4, r8, r8, lsr #11
    */
}

/**
 * Symbol: TOutline::TopicFrame(long)
 * Address: 0014dac8
 */
TOutline::TopicFrame(long) {
    /*
        14dac8:	e1a0c00d 	mov	ip, sp
        14dacc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14dad0:	e24cb004 	sub	fp, ip, #4	; 0x4
        14dad4:	e1a05000 	mov	r5, r0
        14dad8:	e1a04001 	mov	r4, r1
        14dadc:	e3a00002 	mov	r0, #2	; 0x2
        14dae0:	eb69d199 	bl	1bc214c <$AllocateRefHandle(long)>
        14dae4:	e1a07000 	mov	r7, r0
        14dae8:	e3a00002 	mov	r0, #2	; 0x2
        14daec:	eb69d196 	bl	1bc214c <$AllocateRefHandle(long)>
        14daf0:	e1a06000 	mov	r6, r0
        14daf4:	e1a00005 	mov	r0, r5
        14daf8:	eb65349d 	bl	1a9ad74 <TOutline::$List(void)>
        14dafc:	e1a01004 	mov	r1, r4
        14db00:	e5870000 	str	r0, [r7]
        14db04:	eb69d9d2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14db08:	e1a04000 	mov	r4, r0
        14db0c:	e5860000 	str	r0, [r6]
        14db10:	e1a00006 	mov	r0, r6
        14db14:	eb69d5a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14db18:	e1a00007 	mov	r0, r7
        14db1c:	eb69d5a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14db20:	e1a00004 	mov	r0, r4
        14db24:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TOutline::TopicInit(long, Topic *)
 * Address: 0014db28
 */
TOutline::TopicInit(long, Topic *) {
    /*
        14db28:	e1a0c00d 	mov	ip, sp
        14db2c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        14db30:	e24cb004 	sub	fp, ip, #4	; 0x4
        14db34:	e1a05000 	mov	r5, r0
        14db38:	e1a06001 	mov	r6, r1
        14db3c:	e1a04002 	mov	r4, r2
        14db40:	e3a00002 	mov	r0, #2	; 0x2
        14db44:	eb69d180 	bl	1bc214c <$AllocateRefHandle(long)>
        14db48:	e1a08000 	mov	r8, r0
        14db4c:	e3a00002 	mov	r0, #2	; 0x2
        14db50:	eb69d17d 	bl	1bc214c <$AllocateRefHandle(long)>
        14db54:	e1a07000 	mov	r7, r0
        14db58:	e1a00005 	mov	r0, r5
        14db5c:	eb653484 	bl	1a9ad74 <TOutline::$List(void)>
        14db60:	e1a01006 	mov	r1, r6
        14db64:	e5880000 	str	r0, [r8]
        14db68:	eb69d9b9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14db6c:	e5870000 	str	r0, [r7]
        14db70:	e2501002 	subs	r1, r0, #2	; 0x2
        14db74:	13a01001 	movne	r1, #1	; 0x1
        14db78:	e31100ff 	tst	r1, #255	; 0xff
        14db7c:	0a000019 	beq	14dbe8 <TOutline::TopicInit(long, Topic *)+0xc0>
        14db80:	e59f605c 	ldr	r6, [pc, #5c]	; 14dbe4 <TOutline::TopicInit(long, Topic *)+0xbc>
        14db84:	e5961000 	ldr	r1, [r6]
        14db88:	e5911000 	ldr	r1, [r1]
        14db8c:	eb69d9ad 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        14db90:	e3300000 	teq	r0, #0	; 0x0
        14db94:	0a000013 	beq	14dbe8 <TOutline::TopicInit(long, Topic *)+0xc0>
        14db98:	e5960000 	ldr	r0, [r6]
        14db9c:	e5901000 	ldr	r1, [r0]
        14dba0:	e5970000 	ldr	r0, [r7]
        14dba4:	eb69d9ad 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14dba8:	eb69d167 	bl	1bc214c <$AllocateRefHandle(long)>
        14dbac:	e1a06000 	mov	r6, r0
        14dbb0:	e5900000 	ldr	r0, [r0]
        14dbb4:	e3100003 	tst	r0, #3	; 0x3
        14dbb8:	01a00140 	moveq	r0, r0, asr #2
        14dbbc:	0a000000 	beq	14dbc4 <TOutline::TopicInit(long, Topic *)+0x9c>
        14dbc0:	eb69d155 	bl	1bc211c <$_RINTError(long)>
        14dbc4:	e20000ff 	and	r0, r0, #255	; 0xff
        14dbc8:	e5941004 	ldr	r1, [r4, #4]
        14dbcc:	e3c1120f 	bic	r1, r1, #-268435456	; 0xf0000000
        14dbd0:	e1810e00 	orr	r0, r1, r0, lsl #28
        14dbd4:	e5840004 	str	r0, [r4, #4]
        14dbd8:	e1a00006 	mov	r0, r6
        14dbdc:	eb69d576 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14dbe0:	ea000004 	b	14dbf8 <TOutline::TopicInit(long, Topic *)+0xd0>
        14dbe4:	00683540 	rsbeq	r3, r8, r0, asr #10
        14dbe8:	e5940004 	ldr	r0, [r4, #4]
        14dbec:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
        14dbf0:	e3800201 	orr	r0, r0, #268435456	; 0x10000000
        14dbf4:	e5840004 	str	r0, [r4, #4]
        14dbf8:	e3e01000 	mvn	r1, #0	; 0x0
        14dbfc:	e5940004 	ldr	r0, [r4, #4]
        14dc00:	e0811e20 	add	r1, r1, r0, lsr #28
        14dc04:	e3c0040f 	bic	r0, r0, #251658240	; 0xf000000
        14dc08:	e201100f 	and	r1, r1, #15	; 0xf
        14dc0c:	e1800c01 	orr	r0, r0, r1, lsl #24
        14dc10:	e5840004 	str	r0, [r4, #4]
        14dc14:	e5951052 	ldr	r1, [r5, #82]	; fField82
        14dc18:	e1a01821 	mov	r1, r1, lsr #16
        14dc1c:	e5c41003 	strb	r1, [r4, #3]
        14dc20:	e1a01441 	mov	r1, r1, asr #8
        14dc24:	e5c41002 	strb	r1, [r4, #2]
        14dc28:	e3c00883 	bic	r0, r0, #8585216	; 0x830000
        14dc2c:	e5a40004 	str	r0, [r4, #4]!
        14dc30:	e1a00007 	mov	r0, r7
        14dc34:	eb69d560 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14dc38:	e1a00008 	mov	r0, r8
        14dc3c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        14dc40:	ea69d55d 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TOutline::TopicPtr(long const)
 * Address: 0014dc44
 */
TOutline::TopicPtr(long const) {
    /*
        14dc44:	e5900038 	ldr	r0, [r0, #56]	; fField56
        14dc48:	e0800181 	add	r0, r0, r1, lsl #3
        14dc4c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOutline::AddTopic(long, Topic *)
 * Address: 0014dc50
 */
TOutline::AddTopic(long, Topic *) {
    /*
        14dc50:	e92d4010 	stmdb	sp!, {r4, lr}
        14dc54:	e3310000 	teq	r1, #0	; 0x0
        14dc58:	03a04001 	moveq	r4, #1	; 0x1
        14dc5c:	0a000003 	beq	14dc70 <TOutline::AddTopic(long, Topic *)+0x20>
        14dc60:	e5903038 	ldr	r3, [r0, #56]	; fField56
        14dc64:	e0833181 	add	r3, r3, r1, lsl #3
        14dc68:	e5133004 	ldr	r3, [r3, -#4]
        14dc6c:	e1a04e23 	mov	r4, r3, lsr #28
        14dc70:	e5903038 	ldr	r3, [r0, #56]	; fField56
        14dc74:	e083e181 	add	lr, r3, r1, lsl #3
        14dc78:	e8921008 	ldmia	r2, {r3, ip}
        14dc7c:	e88e1008 	stmia	lr, {r3, ip}
        14dc80:	e59e2004 	ldr	r2, [lr, #4]
        14dc84:	e1540e22 	cmp	r4, r2, lsr #28
        14dc88:	aa000004 	bge	14dca0 <TOutline::AddTopic(long, Topic *)+0x50>
        14dc8c:	e5902038 	ldr	r2, [r0, #56]	; fField56
        14dc90:	e0822181 	add	r2, r2, r1, lsl #3
        14dc94:	e5323004 	ldr	r3, [r2, -#4]!
        14dc98:	e3833502 	orr	r3, r3, #8388608	; 0x800000
        14dc9c:	e5823000 	str	r3, [r2]
        14dca0:	e3a03001 	mov	r3, #1	; 0x1
        14dca4:	e59e2004 	ldr	r2, [lr, #4]
        14dca8:	e1330e22 	teq	r3, r2, lsr #28
        14dcac:	1a000004 	bne	14dcc4 <TOutline::AddTopic(long, Topic *)+0x74>
        14dcb0:	e3820501 	orr	r0, r2, #4194304	; 0x400000
        14dcb4:	e58e0004 	str	r0, [lr, #4]
        14dcb8:	e3e00000 	mvn	r0, #0	; 0x0
        14dcbc:	e5ce0001 	strb	r0, [lr, #1]	; fField1
        14dcc0:	ea00000b 	b	14dcf4 <TOutline::AddTopic(long, Topic *)+0xa4>
        14dcc4:	e3c22501 	bic	r2, r2, #4194304	; 0x400000
        14dcc8:	e3510000 	cmp	r1, #0	; 0x0
        14dccc:	e58e2004 	str	r2, [lr, #4]
        14dcd0:	ba00000b 	blt	14dd04 <TOutline::AddTopic(long, Topic *)+0xb4>
        14dcd4:	e5900038 	ldr	r0, [r0, #56]	; fField56
        14dcd8:	e0803181 	add	r3, r0, r1, lsl #3
        14dcdc:	e5933004 	ldr	r3, [r3, #4]
        14dce0:	e1a03e23 	mov	r3, r3, lsr #28
        14dce4:	e1530e22 	cmp	r3, r2, lsr #28
        14dce8:	aa000003 	bge	14dcfc <TOutline::AddTopic(long, Topic *)+0xac>
        14dcec:	e5ce1001 	strb	r1, [lr, #1]	; fField1
        14dcf0:	e1a00441 	mov	r0, r1, asr #8
        14dcf4:	e5ce0000 	strb	r0, [lr]
        14dcf8:	ea000001 	b	14dd04 <TOutline::AddTopic(long, Topic *)+0xb4>
        14dcfc:	e2511001 	subs	r1, r1, #1	; 0x1
        14dd00:	5afffff4 	bpl	14dcd8 <TOutline::AddTopic(long, Topic *)+0x88>
        14dd04:	e59e0004 	ldr	r0, [lr, #4]
        14dd08:	e3c00602 	bic	r0, r0, #2097152	; 0x200000
        14dd0c:	e5ae0004 	str	r0, [lr, #4]!
        14dd10:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TOutline::TopicRect(Topic *, TRect &, TRect &)
 * Address: 0014dd14
 */
TOutline::TopicRect(Topic *, TRect &, TRect &) {
    /*
        14dd14:	e1a0c00d 	mov	ip, sp
        14dd18:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14dd1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14dd20:	e1a07000 	mov	r7, r0
        14dd24:	e1a06001 	mov	r6, r1
        14dd28:	e1a04002 	mov	r4, r2
        14dd2c:	e1a05003 	mov	r5, r3
        14dd30:	e5901000 	ldr	r1, [r0]
        14dd34:	e1a0e00f 	mov	lr, pc
        14dd38:	e281ff57 	add	pc, r1, #348	; 0x15c
        14dd3c:	e5961002 	ldr	r1, [r6, #2]
        14dd40:	e1a01821 	mov	r1, r1, lsr #16
        14dd44:	e5952000 	ldr	r2, [r5]
        14dd48:	e1a02822 	mov	r2, r2, lsr #16
        14dd4c:	e0811002 	add	r1, r1, r2
        14dd50:	e0410000 	sub	r0, r1, r0
        14dd54:	e5c40001 	strb	r0, [r4, #1]	; fField1
        14dd58:	e1a00440 	mov	r0, r0, asr #8
        14dd5c:	e5c40000 	strb	r0, [r4]
        14dd60:	e5950002 	ldr	r0, [r5, #2]
        14dd64:	e1a00820 	mov	r0, r0, lsr #16
        14dd68:	e5961004 	ldr	r1, [r6, #4]
        14dd6c:	e1a01e21 	mov	r1, r1, lsr #28
        14dd70:	e0811081 	add	r1, r1, r1, lsl #1
        14dd74:	e0800101 	add	r0, r0, r1, lsl #2
        14dd78:	e240000c 	sub	r0, r0, #12	; 0xc
        14dd7c:	e5c40003 	strb	r0, [r4, #3]
        14dd80:	e1a00440 	mov	r0, r0, asr #8
        14dd84:	e5c40002 	strb	r0, [r4, #2]
        14dd88:	e597004e 	ldr	r0, [r7, #78]	; fField78
        14dd8c:	e1a00820 	mov	r0, r0, lsr #16
        14dd90:	e5941000 	ldr	r1, [r4]
        14dd94:	e1a01821 	mov	r1, r1, lsr #16
        14dd98:	e0800001 	add	r0, r0, r1
        14dd9c:	e5c40005 	strb	r0, [r4, #5]
        14dda0:	e1a00440 	mov	r0, r0, asr #8
        14dda4:	e5c40004 	strb	r0, [r4, #4]
        14dda8:	e5950006 	ldr	r0, [r5, #6]
        14ddac:	e1a00820 	mov	r0, r0, lsr #16
        14ddb0:	e5c40007 	strb	r0, [r4, #7]
        14ddb4:	e1a00440 	mov	r0, r0, asr #8
        14ddb8:	e5c40006 	strb	r0, [r4, #6]
        14ddbc:	e5b60004 	ldr	r0, [r6, #4]!
        14ddc0:	e1a00700 	mov	r0, r0, lsl #14
        14ddc4:	e3a01001 	mov	r1, #1	; 0x1
        14ddc8:	e1310f20 	teq	r1, r0, lsr #30
        14ddcc:	1a000008 	bne	14ddf4 <TOutline::TopicRect(Topic *, TRect &, TRect &)+0xe0>
        14ddd0:	e2840006 	add	r0, r4, #6	; 0x6
        14ddd4:	e5941006 	ldr	r1, [r4, #6]
        14ddd8:	e1a01841 	mov	r1, r1, asr #16
        14dddc:	e5942002 	ldr	r2, [r4, #2]
        14dde0:	e0412842 	sub	r2, r1, r2, asr #16
        14dde4:	e5901000 	ldr	r1, [r0]
        14dde8:	e1a01821 	mov	r1, r1, lsr #16
        14ddec:	e04110c2 	sub	r1, r1, r2, asr #1
        14ddf0:	ea00000a 	b	14de20 <TOutline::TopicRect(Topic *, TRect &, TRect &)+0x10c>
        14ddf4:	e3a01002 	mov	r1, #2	; 0x2
        14ddf8:	e1310f20 	teq	r1, r0, lsr #30
        14ddfc:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        14de00:	e2840002 	add	r0, r4, #2	; 0x2
        14de04:	e5941006 	ldr	r1, [r4, #6]
        14de08:	e1a01841 	mov	r1, r1, asr #16
        14de0c:	e5942002 	ldr	r2, [r4, #2]
        14de10:	e0412842 	sub	r2, r1, r2, asr #16
        14de14:	e5901000 	ldr	r1, [r0]
        14de18:	e1a01821 	mov	r1, r1, lsr #16
        14de1c:	e08110c2 	add	r1, r1, r2, asr #1
        14de20:	e5c01001 	strb	r1, [r0, #1]	; fField1
        14de24:	e1a01441 	mov	r1, r1, asr #8
        14de28:	e5c01000 	strb	r1, [r0]
        14de2c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TOutline::TopicText(long, unsigned short *, long *)
 * Address: 0014de30
 */
TOutline::TopicText(long, unsigned short *, long *) {
    /*
        14de30:	e1a0c00d 	mov	ip, sp
        14de34:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14de38:	e24cb004 	sub	fp, ip, #4	; 0x4
        14de3c:	e1a04000 	mov	r4, r0
        14de40:	e1a06001 	mov	r6, r1
        14de44:	e1a05002 	mov	r5, r2
        14de48:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14de4c:	e3a00002 	mov	r0, #2	; 0x2
        14de50:	eb69d0bd 	bl	1bc214c <$AllocateRefHandle(long)>
        14de54:	e1a07000 	mov	r7, r0
        14de58:	e3a00002 	mov	r0, #2	; 0x2
        14de5c:	eb69d0ba 	bl	1bc214c <$AllocateRefHandle(long)>
        14de60:	e58d0008 	str	r0, [sp, #8]
        14de64:	e3a00000 	mov	r0, #0	; 0x0
        14de68:	e58d0000 	str	r0, [sp]
        14de6c:	e5d4004d 	ldrb	r0, [r4, #77]	; fField77
        14de70:	e3300000 	teq	r0, #0	; 0x0
        14de74:	0a000042 	beq	14df84 <TOutline::TopicText(long, unsigned short *, long *)+0x154>
        14de78:	e3a00002 	mov	r0, #2	; 0x2
        14de7c:	eb69d0b2 	bl	1bc214c <$AllocateRefHandle(long)>
        14de80:	e1a0a000 	mov	sl, r0
        14de84:	e3a00002 	mov	r0, #2	; 0x2
        14de88:	eb69d0af 	bl	1bc214c <$AllocateRefHandle(long)>
        14de8c:	e1a09000 	mov	r9, r0
        14de90:	e1a00004 	mov	r0, r4
        14de94:	e5941000 	ldr	r1, [r4]
        14de98:	e1a0e00f 	mov	lr, pc
        14de9c:	e281ff47 	add	pc, r1, #284	; 0x11c
        14dea0:	e58a0000 	str	r0, [sl]
        14dea4:	e59f1090 	ldr	r1, [pc, #90]	; 14df3c <TOutline::TopicText(long, unsigned short *, long *)+0x10c>
        14dea8:	e5911000 	ldr	r1, [r1]
        14deac:	e5911000 	ldr	r1, [r1]
        14deb0:	eb69d8ea 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14deb4:	e5890000 	str	r0, [r9]
        14deb8:	e5b41054 	ldr	r1, [r4, #84]!	; fField84
        14debc:	eb69d8e4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14dec0:	e59d1008 	ldr	r1, [sp, #8]
        14dec4:	e5810000 	str	r0, [r1]
        14dec8:	e24dd004 	sub	sp, sp, #4	; 0x4
        14decc:	e28d000c 	add	r0, sp, #12	; 0xc
        14ded0:	eb69d0a4 	bl	1bc2168 <$ClassOf(RefVar const &)>
        14ded4:	eb69d09c 	bl	1bc214c <$AllocateRefHandle(long)>
        14ded8:	e1a04000 	mov	r4, r0
        14dedc:	e59f005c 	ldr	r0, [pc, #5c]	; 14df40 <TOutline::TopicText(long, unsigned short *, long *)+0x110>
        14dee0:	e5900000 	ldr	r0, [r0]
        14dee4:	e5901000 	ldr	r1, [r0]
        14dee8:	e5940000 	ldr	r0, [r4]
        14deec:	eb69d8cf 	bl	1bc4230 <$EQRef__FlT1>
        14def0:	e3300000 	teq	r0, #0	; 0x0
        14def4:	13a00001 	movne	r0, #1	; 0x1
        14def8:	e58d0000 	str	r0, [sp]
        14defc:	e1a00004 	mov	r0, r4
        14df00:	eb69d4ad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14df04:	e59d0000 	ldr	r0, [sp]
        14df08:	e3300000 	teq	r0, #0	; 0x0
        14df0c:	1a00000c 	bne	14df44 <TOutline::TopicText(long, unsigned short *, long *)+0x114>
        14df10:	e28dd004 	add	sp, sp, #4	; 0x4
        14df14:	e1a03006 	mov	r3, r6
        14df18:	e1a0200d 	mov	r2, sp
        14df1c:	e28d1004 	add	r1, sp, #4	; 0x4
        14df20:	e1a00008 	mov	r0, r8
        14df24:	eb00009c 	bl	14e19c <TOutline::WhereAreWe(void)+0x60>
        14df28:	e1a00009 	mov	r0, r9
        14df2c:	eb69d4a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14df30:	e1a0000a 	mov	r0, sl
        14df34:	eb69d4a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14df38:	ea000054 	b	14e090 <TOutline::TopicText(long, unsigned short *, long *)+0x260>
        14df3c:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        14df40:	006848d0 	ldreqd	r4, [r8], -#128
        14df44:	e28d100c 	add	r1, sp, #12	; 0xc
        14df48:	e1a0000d 	mov	r0, sp
        14df4c:	eb69cc61 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        14df50:	e1a0000d 	mov	r0, sp
        14df54:	eb69d06e 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        14df58:	e1a08000 	mov	r8, r0
        14df5c:	e1a0000d 	mov	r0, sp
        14df60:	e3a01000 	mov	r1, #0	; 0x0
        14df64:	eb69d065 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        14df68:	e59d000c 	ldr	r0, [sp, #12]
        14df6c:	e5900000 	ldr	r0, [r0]
        14df70:	eb69dccd 	bl	1bc52ac <$Length(long)>
        14df74:	e2400002 	sub	r0, r0, #2	; 0x2
        14df78:	e1a000a0 	mov	r0, r0, lsr #1
        14df7c:	e58d0008 	str	r0, [sp, #8]
        14df80:	eaffffe2 	b	14df10 <TOutline::TopicText(long, unsigned short *, long *)+0xe0>
        14df84:	e1a01006 	mov	r1, r6
        14df88:	e1a00004 	mov	r0, r4
        14df8c:	e5942000 	ldr	r2, [r4]
        14df90:	e1a0e00f 	mov	lr, pc
        14df94:	e282ff5b 	add	pc, r2, #364	; 0x16c
        14df98:	e5870000 	str	r0, [r7]
        14df9c:	e3300002 	teq	r0, #2	; 0x2
        14dfa0:	03a00000 	moveq	r0, #0	; 0x0
        14dfa4:	05c50001 	streqb	r0, [r5, #1]	; fField1
        14dfa8:	05c50000 	streqb	r0, [r5]
        14dfac:	0a000048 	beq	14e0d4 <TOutline::TopicText(long, unsigned short *, long *)+0x2a4>
        14dfb0:	e5d4104d 	ldrb	r1, [r4, #77]	; fField77
        14dfb4:	e3310000 	teq	r1, #0	; 0x0
        14dfb8:	1a000014 	bne	14e010 <TOutline::TopicText(long, unsigned short *, long *)+0x1e0>
        14dfbc:	e59f4124 	ldr	r4, [pc, #124]	; 14e0e8 <TOutline::TopicText(long, unsigned short *, long *)+0x2b8>
        14dfc0:	e5941000 	ldr	r1, [r4]
        14dfc4:	e5911000 	ldr	r1, [r1]
        14dfc8:	eb69d89e 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        14dfcc:	e3300000 	teq	r0, #0	; 0x0
        14dfd0:	15940000 	ldrne	r0, [r4]
        14dfd4:	15901000 	ldrne	r1, [r0]
        14dfd8:	15970000 	ldrne	r0, [r7]
        14dfdc:	1a000008 	bne	14e004 <TOutline::TopicText(long, unsigned short *, long *)+0x1d4>
        14dfe0:	e59f0104 	ldr	r0, [pc, #104]	; 14e0ec <TOutline::TopicText(long, unsigned short *, long *)+0x2bc>
        14dfe4:	e5900000 	ldr	r0, [r0]
        14dfe8:	e5901000 	ldr	r1, [r0]
        14dfec:	e5970000 	ldr	r0, [r7]
        14dff0:	eb69d89a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14dff4:	e5870000 	str	r0, [r7]
        14dff8:	e59f10f0 	ldr	r1, [pc, #f0]	; 14e0f0 <TOutline::TopicText(long, unsigned short *, long *)+0x2c0>
        14dffc:	e5911000 	ldr	r1, [r1]
        14e000:	e5911000 	ldr	r1, [r1]
        14e004:	eb69d895 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14e008:	e59d1008 	ldr	r1, [sp, #8]
        14e00c:	e5810000 	str	r0, [r1]
        14e010:	e28d0008 	add	r0, sp, #8	; 0x8
        14e014:	eb69d053 	bl	1bc2168 <$ClassOf(RefVar const &)>
        14e018:	eb69d04b 	bl	1bc214c <$AllocateRefHandle(long)>
        14e01c:	e1a04000 	mov	r4, r0
        14e020:	e51f00e8 	ldr	r0, [pc, #ffffff18]	; 14df40 <TOutline::TopicText(long, unsigned short *, long *)+0x110>
        14e024:	e5900000 	ldr	r0, [r0]
        14e028:	e5901000 	ldr	r1, [r0]
        14e02c:	e5940000 	ldr	r0, [r4]
        14e030:	eb69d87e 	bl	1bc4230 <$EQRef__FlT1>
        14e034:	e1b06000 	movs	r6, r0
        14e038:	13a06001 	movne	r6, #1	; 0x1
        14e03c:	e1a00004 	mov	r0, r4
        14e040:	eb69d45d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e044:	e3360000 	teq	r6, #0	; 0x0
        14e048:	0a000010 	beq	14e090 <TOutline::TopicText(long, unsigned short *, long *)+0x260>
        14e04c:	e24dd004 	sub	sp, sp, #4	; 0x4
        14e050:	e28d100c 	add	r1, sp, #12	; 0xc
        14e054:	e1a0000d 	mov	r0, sp
        14e058:	eb69cc1e 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        14e05c:	e1a0000d 	mov	r0, sp
        14e060:	eb69d02b 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        14e064:	e1a08000 	mov	r8, r0
        14e068:	e1a0000d 	mov	r0, sp
        14e06c:	e3a01000 	mov	r1, #0	; 0x0
        14e070:	eb69d022 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        14e074:	e59d000c 	ldr	r0, [sp, #12]
        14e078:	e5900000 	ldr	r0, [r0]
        14e07c:	eb69dc8a 	bl	1bc52ac <$Length(long)>
        14e080:	e2400002 	sub	r0, r0, #2	; 0x2
        14e084:	e1a000a0 	mov	r0, r0, lsr #1
        14e088:	e58d0008 	str	r0, [sp, #8]
        14e08c:	e28dd004 	add	sp, sp, #4	; 0x4
        14e090:	e3a0103f 	mov	r1, #63	; 0x3f
        14e094:	e59d0004 	ldr	r0, [sp, #4]
        14e098:	e350003f 	cmp	r0, #63	; 0x3f
        14e09c:	a1a00001 	movge	r0, r1
        14e0a0:	e51b302c 	ldr	r3, [fp, -#44]
        14e0a4:	e5830000 	str	r0, [r3]
        14e0a8:	e1a02080 	mov	r2, r0, lsl #1
        14e0ac:	e59d0000 	ldr	r0, [sp]
        14e0b0:	e0880080 	add	r0, r8, r0, lsl #1
        14e0b4:	e1a01005 	mov	r1, r5
        14e0b8:	eb6a43a5 	bl	1bdef54 <$BlockMove>
        14e0bc:	e3a00000 	mov	r0, #0	; 0x0
        14e0c0:	e51b302c 	ldr	r3, [fp, -#44]
        14e0c4:	e5931000 	ldr	r1, [r3]
        14e0c8:	e0851081 	add	r1, r5, r1, lsl #1
        14e0cc:	e5c10001 	strb	r0, [r1, #1]	; fField1
        14e0d0:	e5c10000 	strb	r0, [r1]
        14e0d4:	e59d0008 	ldr	r0, [sp, #8]
        14e0d8:	eb69d437 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e0dc:	e1a00007 	mov	r0, r7
        14e0e0:	eb69d435 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e0e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        14e0e8:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        14e0ec:	00683338 	rsbeq	r3, r8, r8, lsr r3
        14e0f0:	006827a0 	rsbeq	r2, r8, r0, lsr #15
    */
}

/**
 * Symbol: TOutline::VisibleTopic(long)
 * Address: 0014e0f4
 */
TOutline::VisibleTopic(long) {
    /*
        14e0f4:	e92d4010 	stmdb	sp!, {r4, lr}
        14e0f8:	e1a03000 	mov	r3, r0
        14e0fc:	e3a00000 	mov	r0, #0	; 0x0
        14e100:	e3a02000 	mov	r2, #0	; 0x0
        14e104:	e3510000 	cmp	r1, #0	; 0x0
        14e108:	b8bd8010 	ldmltia	sp!, {r4, pc}
        14e10c:	e3a0e002 	mov	lr, #2	; 0x2
        14e110:	e5b3c038 	ldr	ip, [r3, #56]!	; fField56
        14e114:	e08c3182 	add	r3, ip, r2, lsl #3
        14e118:	e5933004 	ldr	r3, [r3, #4]
        14e11c:	e3130501 	tst	r3, #4194304	; 0x400000
        14e120:	11a03703 	movne	r3, r3, lsl #14
        14e124:	113e0f23 	teqne	lr, r3, lsr #30
        14e128:	12800001 	addne	r0, r0, #1	; 0x1
        14e12c:	e2822001 	add	r2, r2, #1	; 0x1
        14e130:	e1520001 	cmp	r2, r1
        14e134:	dafffff6 	ble	14e114 <TOutline::VisibleTopic(long)+0x20>
        14e138:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TOutline::WhereAreWe(void)
 * Address: 0014e13c
 */
TOutline::WhereAreWe(void) {
    /*
        14e13c:	e1a0c00d 	mov	ip, sp
        14e140:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14e144:	e24cb004 	sub	fp, ip, #4	; 0x4
        14e148:	e1a04000 	mov	r4, r0
        14e14c:	e3e00000 	mvn	r0, #0	; 0x0
        14e150:	e594105c 	ldr	r1, [r4, #92]	; fField92
        14e154:	e3310000 	teq	r1, #0	; 0x0
        14e158:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        14e15c:	e1a00004 	mov	r0, r4
        14e160:	e5941000 	ldr	r1, [r4]
        14e164:	e1a0e00f 	mov	lr, pc
        14e168:	e281ff51 	add	pc, r1, #324	; 0x144
        14e16c:	e3700001 	cmn	r0, #1	; 0x1
        14e170:	15b41038 	ldrne	r1, [r4, #56]!	; fField56
        14e174:	1a000001 	bne	14e180 <TOutline::WhereAreWe(void)+0x44>
        14e178:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        14e17c:	e2400001 	sub	r0, r0, #1	; 0x1
        14e180:	e0812180 	add	r2, r1, r0, lsl #3
        14e184:	e5922004 	ldr	r2, [r2, #4]
        14e188:	e3120501 	tst	r2, #4194304	; 0x400000
        14e18c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        14e190:	e3300000 	teq	r0, #0	; 0x0
        14e194:	1afffff8 	bne	14e17c <TOutline::WhereAreWe(void)+0x40>
        14e198:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        14e19c:	e1a0c00d 	mov	ip, sp
        14e1a0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14e1a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14e1a8:	e1a07000 	mov	r7, r0
        14e1ac:	e1a05001 	mov	r5, r1
        14e1b0:	e1a04002 	mov	r4, r2
        14e1b4:	e1a06003 	mov	r6, r3
        14e1b8:	e3a09000 	mov	r9, #0	; 0x0
        14e1bc:	e5928000 	ldr	r8, [r2]
        14e1c0:	e5910000 	ldr	r0, [r1]
        14e1c4:	e1580000 	cmp	r8, r0
        14e1c8:	aa000010 	bge	14e210 <TOutline::WhereAreWe(void)+0xd4>
        14e1cc:	e797a088 	ldr	sl, [r7, r8, lsl #1]	; fField1
        14e1d0:	e1a0a82a 	mov	sl, sl, lsr #16
        14e1d4:	e3a0000d 	mov	r0, #13	; 0xd
        14e1d8:	eb695c46 	bl	1ba52f8 <$U_CONST_CHAR>
        14e1dc:	e130000a 	teq	r0, sl
        14e1e0:	133a0000 	teqne	sl, #0	; 0x0
        14e1e4:	1a000005 	bne	14e200 <TOutline::WhereAreWe(void)+0xc4>
        14e1e8:	e1a00009 	mov	r0, r9
        14e1ec:	e2899001 	add	r9, r9, #1	; 0x1
        14e1f0:	e1300006 	teq	r0, r6
        14e1f4:	0a000005 	beq	14e210 <TOutline::WhereAreWe(void)+0xd4>
        14e1f8:	e2880001 	add	r0, r8, #1	; 0x1
        14e1fc:	e5840000 	str	r0, [r4]
        14e200:	e2888001 	add	r8, r8, #1	; 0x1
        14e204:	e5950000 	ldr	r0, [r5]
        14e208:	e1580000 	cmp	r8, r0
        14e20c:	baffffee 	blt	14e1cc <TOutline::WhereAreWe(void)+0x90>
        14e210:	e5940000 	ldr	r0, [r4]
        14e214:	e0480000 	sub	r0, r8, r0
        14e218:	e5850000 	str	r0, [r5]
        14e21c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TOutline::AutoCollapse(long)
 * Address: 0014e330
 */
TOutline::AutoCollapse(long) {
    /*
        14e330:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        14e334:	e3e02000 	mvn	r2, #0	; 0x0
        14e338:	e3a03000 	mov	r3, #0	; 0x0
        14e33c:	e590c034 	ldr	ip, [r0, #52]	; fField52
        14e340:	e35c0000 	cmp	ip, #0	; 0x0
        14e344:	da000008 	ble	14e36c <TOutline::AutoCollapse(long)+0x3c>
        14e348:	e590c038 	ldr	ip, [r0, #56]	; fField56
        14e34c:	e08cc183 	add	ip, ip, r3, lsl #3
        14e350:	e5bce004 	ldr	lr, [ip, #4]!
        14e354:	e3cee601 	bic	lr, lr, #1048576	; 0x100000
        14e358:	e2833001 	add	r3, r3, #1	; 0x1
        14e35c:	e58ce000 	str	lr, [ip]
        14e360:	e590c034 	ldr	ip, [r0, #52]	; fField52
        14e364:	e15c0003 	cmp	ip, r3
        14e368:	cafffff6 	bgt	14e348 <TOutline::AutoCollapse(long)+0x18>
        14e36c:	e5903038 	ldr	r3, [r0, #56]	; fField56
        14e370:	e7933181 	ldr	r3, [r3, r1, lsl #3]
        14e374:	e1a03843 	mov	r3, r3, asr #16
        14e378:	e3730001 	cmn	r3, #1	; 0x1
        14e37c:	0a00000b 	beq	14e3b0 <TOutline::AutoCollapse(long)+0x80>
        14e380:	e5903038 	ldr	r3, [r0, #56]	; fField56
        14e384:	e7931181 	ldr	r1, [r3, r1, lsl #3]
        14e388:	e1a01841 	mov	r1, r1, asr #16
        14e38c:	e0833181 	add	r3, r3, r1, lsl #3
        14e390:	e5b3c004 	ldr	ip, [r3, #4]!
        14e394:	e38cc601 	orr	ip, ip, #1048576	; 0x100000
        14e398:	e583c000 	str	ip, [r3]
        14e39c:	e5903038 	ldr	r3, [r0, #56]	; fField56
        14e3a0:	e7933181 	ldr	r3, [r3, r1, lsl #3]
        14e3a4:	e1a03843 	mov	r3, r3, asr #16
        14e3a8:	e3730001 	cmn	r3, #1	; 0x1
        14e3ac:	1afffff3 	bne	14e380 <TOutline::AutoCollapse(long)+0x50>
        14e3b0:	e3a01000 	mov	r1, #0	; 0x0
        14e3b4:	e5903034 	ldr	r3, [r0, #52]	; fField52
        14e3b8:	e1a0e003 	mov	lr, r3
        14e3bc:	e3530000 	cmp	r3, #0	; 0x0
        14e3c0:	da00000e 	ble	14e400 <TOutline::AutoCollapse(long)+0xd0>
        14e3c4:	e3a04001 	mov	r4, #1	; 0x1
        14e3c8:	e590c038 	ldr	ip, [r0, #56]	; fField56
        14e3cc:	e08c3181 	add	r3, ip, r1, lsl #3
        14e3d0:	e5933004 	ldr	r3, [r3, #4]
        14e3d4:	e1a05503 	mov	r5, r3, lsl #10
        14e3d8:	e1340fa5 	teq	r4, r5, lsr #31
        14e3dc:	02035601 	andeq	r5, r3, #1048576	; 0x100000
        14e3e0:	03350000 	teqeq	r5, #0	; 0x0
        14e3e4:	1a000002 	bne	14e3f4 <TOutline::AutoCollapse(long)+0xc4>
        14e3e8:	e3130501 	tst	r3, #4194304	; 0x400000
        14e3ec:	11a02001 	movne	r2, r1
        14e3f0:	1a000002 	bne	14e400 <TOutline::AutoCollapse(long)+0xd0>
        14e3f4:	e2811001 	add	r1, r1, #1	; 0x1
        14e3f8:	e15e0001 	cmp	lr, r1
        14e3fc:	cafffff2 	bgt	14e3cc <TOutline::AutoCollapse(long)+0x9c>
        14e400:	e3720001 	cmn	r2, #1	; 0x1
        14e404:	08bd8030 	ldmeqia	sp!, {r4, r5, pc}
        14e408:	e1a01002 	mov	r1, r2
        14e40c:	e3a02000 	mov	r2, #0	; 0x0
        14e410:	e5903000 	ldr	r3, [r0]
        14e414:	e8bd4030 	ldmia	sp!, {r4, r5, lr}
        14e418:	e283fe13 	add	pc, r3, #304	; 0x130
    */
}

/**
 * Symbol: TOutline::Browser(void)
 * Address: 0014e7dc
 */
TOutline::Browser(void) {
    /*
        14e7dc:	e1a0c00d 	mov	ip, sp
        14e7e0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14e7e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14e7e8:	e1a04000 	mov	r4, r0
        14e7ec:	e2800060 	add	r0, r0, #96	; 0x60
        14e7f0:	e1a06000 	mov	r6, r0
        14e7f4:	e5900000 	ldr	r0, [r0]
        14e7f8:	e5900000 	ldr	r0, [r0]
        14e7fc:	e3300002 	teq	r0, #2	; 0x2
        14e800:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        14e804:	e59f1044 	ldr	r1, [pc, #44]	; 14e850 <TOutline::Browser(void)+0x74>
        14e808:	e1a00004 	mov	r0, r4
        14e80c:	eb69ef51 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        14e810:	eb69ce4d 	bl	1bc214c <$AllocateRefHandle(long)>
        14e814:	e1a05000 	mov	r5, r0
        14e818:	e5b4105c 	ldr	r1, [r4, #92]!	; fField92
        14e81c:	e3710001 	cmn	r1, #1	; 0x1
        14e820:	03a01000 	moveq	r1, #0	; 0x0
        14e824:	e1a04006 	mov	r4, r6
        14e828:	e5950000 	ldr	r0, [r5]
        14e82c:	eb69d688 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14e830:	e5941000 	ldr	r1, [r4]
        14e834:	e5810000 	str	r0, [r1]
        14e838:	e5960000 	ldr	r0, [r6]
        14e83c:	e5904000 	ldr	r4, [r0]
        14e840:	e1a00005 	mov	r0, r5
        14e844:	eb69d25c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e848:	e1a00004 	mov	r0, r4
        14e84c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        14e850:	006821f8 	streqd	r2, [r8], -#24
    */
}

/**
 * Symbol: TOutline::ClickCommand(long)
 * Address: 0014e854
 */
TOutline::ClickCommand(long) {
    /*
        14e854:	e1a0c00d 	mov	ip, sp
        14e858:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14e85c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14e860:	e1a04000 	mov	r4, r0
        14e864:	e1a05001 	mov	r5, r1
        14e868:	e24dd00c 	sub	sp, sp, #12	; 0xc
        14e86c:	e3a00002 	mov	r0, #2	; 0x2
        14e870:	eb69ce35 	bl	1bc214c <$AllocateRefHandle(long)>
        14e874:	e58d0008 	str	r0, [sp, #8]
        14e878:	e3a00002 	mov	r0, #2	; 0x2
        14e87c:	eb69ce32 	bl	1bc214c <$AllocateRefHandle(long)>
        14e880:	e1a06000 	mov	r6, r0
        14e884:	e3a00002 	mov	r0, #2	; 0x2
        14e888:	eb69ce2f 	bl	1bc214c <$AllocateRefHandle(long)>
        14e88c:	e58d0004 	str	r0, [sp, #4]
        14e890:	e3a00002 	mov	r0, #2	; 0x2
        14e894:	eb69ce2c 	bl	1bc214c <$AllocateRefHandle(long)>
        14e898:	e1a08000 	mov	r8, r0
        14e89c:	e59f10e8 	ldr	r1, [pc, #e8]	; 14e98c <TOutline::ClickCommand(long)+0x138>
        14e8a0:	e1a00004 	mov	r0, r4
        14e8a4:	eb69ef2b 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        14e8a8:	eb69ce27 	bl	1bc214c <$AllocateRefHandle(long)>
        14e8ac:	e1a07000 	mov	r7, r0
        14e8b0:	e59f10d8 	ldr	r1, [pc, #d8]	; 14e990 <TOutline::ClickCommand(long)+0x13c>
        14e8b4:	e1a0a001 	mov	sl, r1
        14e8b8:	e1a00004 	mov	r0, r4
        14e8bc:	eb69ef21 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        14e8c0:	e3300002 	teq	r0, #2	; 0x2
        14e8c4:	0a000034 	beq	14e99c <TOutline::ClickCommand(long)+0x148>
        14e8c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        14e8cc:	e3a00002 	mov	r0, #2	; 0x2
        14e8d0:	eb653531 	bl	1a9bd9c <$MakeArray(long)>
        14e8d4:	eb69ce1c 	bl	1bc214c <$AllocateRefHandle(long)>
        14e8d8:	e58d0000 	str	r0, [sp]
        14e8dc:	e594003c 	ldr	r0, [r4, #60]	; fField60
        14e8e0:	e1a00100 	mov	r0, r0, lsl #2
        14e8e4:	eb69ce18 	bl	1bc214c <$AllocateRefHandle(long)>
        14e8e8:	e1a09000 	mov	r9, r0
        14e8ec:	e3a01000 	mov	r1, #0	; 0x0
        14e8f0:	e5902000 	ldr	r2, [r0]
        14e8f4:	e59d0000 	ldr	r0, [sp]
        14e8f8:	e5900000 	ldr	r0, [r0]
        14e8fc:	eb69de95 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        14e900:	e1a00009 	mov	r0, r9
        14e904:	eb69d22c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e908:	e1a00105 	mov	r0, r5, lsl #2
        14e90c:	eb69ce0e 	bl	1bc214c <$AllocateRefHandle(long)>
        14e910:	e1a09000 	mov	r9, r0
        14e914:	e3a01001 	mov	r1, #1	; 0x1
        14e918:	e5902000 	ldr	r2, [r0]
        14e91c:	e59d0000 	ldr	r0, [sp]
        14e920:	e5900000 	ldr	r0, [r0]
        14e924:	eb69de8b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        14e928:	e1a00009 	mov	r0, r9
        14e92c:	eb69d222 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e930:	e28d3004 	add	r3, sp, #4	; 0x4
        14e934:	e92d0008 	stmdb	sp!, {r3}
        14e938:	e28d2004 	add	r2, sp, #4	; 0x4
        14e93c:	e1a0100a 	mov	r1, sl
        14e940:	e1a00004 	mov	r0, r4
        14e944:	e3a03000 	mov	r3, #0	; 0x0
        14e948:	eb69f324 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        14e94c:	e5880000 	str	r0, [r8]
        14e950:	e3300002 	teq	r0, #2	; 0x2
        14e954:	e5bd0004 	ldr	r0, [sp, #4]!
        14e958:	0a00000d 	beq	14e994 <TOutline::ClickCommand(long)+0x140>
        14e95c:	eb69d216 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e960:	e1a00007 	mov	r0, r7
        14e964:	eb69d214 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e968:	e1a00008 	mov	r0, r8
        14e96c:	eb69d212 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e970:	e59d0008 	ldr	r0, [sp, #8]
        14e974:	eb69d210 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e978:	e1a00006 	mov	r0, r6
        14e97c:	eb69d20e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e980:	e59d000c 	ldr	r0, [sp, #12]
        14e984:	eb69d20c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e988:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        14e98c:	00682638 	rsbeq	r2, r8, r8, lsr r6
        14e990:	00683be8 	rsbeq	r3, r8, r8, ror #23
        14e994:	eb69d208 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e998:	e28dd004 	add	sp, sp, #4	; 0x4
        14e99c:	e2841038 	add	r1, r4, #56	; 0x38
        14e9a0:	e8910003 	ldmia	r1, {r0, r1}
        14e9a4:	e0800181 	add	r0, r0, r1, lsl #3
        14e9a8:	e5900004 	ldr	r0, [r0, #4]
        14e9ac:	e3100602 	tst	r0, #2097152	; 0x200000
        14e9b0:	1a000006 	bne	14e9d0 <TOutline::ClickCommand(long)+0x17c>
        14e9b4:	e1a00004 	mov	r0, r4
        14e9b8:	e5942000 	ldr	r2, [r4]
        14e9bc:	e1a0e00f 	mov	lr, pc
        14e9c0:	e282ff5b 	add	pc, r2, #364	; 0x16c
        14e9c4:	e5860000 	str	r0, [r6]
        14e9c8:	e3300002 	teq	r0, #2	; 0x2
        14e9cc:	1a00000a 	bne	14e9fc <TOutline::ClickCommand(long)+0x1a8>
        14e9d0:	e1a00007 	mov	r0, r7
        14e9d4:	eb69d1f8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e9d8:	e1a00008 	mov	r0, r8
        14e9dc:	eb69d1f6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e9e0:	e59d0004 	ldr	r0, [sp, #4]
        14e9e4:	eb69d1f4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e9e8:	e1a00006 	mov	r0, r6
        14e9ec:	eb69d1f2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e9f0:	e59d0008 	ldr	r0, [sp, #8]
        14e9f4:	eb69d1f0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14e9f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        14e9fc:	e59fa038 	ldr	sl, [pc, #38]	; 14ea3c <TOutline::ClickCommand(long)+0x1e8>
        14ea00:	e3750001 	cmn	r5, #1	; 0x1
        14ea04:	1a00000e 	bne	14ea44 <TOutline::ClickCommand(long)+0x1f0>
        14ea08:	e59f9030 	ldr	r9, [pc, #30]	; 14ea40 <TOutline::ClickCommand(long)+0x1ec>
        14ea0c:	e5991000 	ldr	r1, [r9]
        14ea10:	e5911000 	ldr	r1, [r1]
        14ea14:	eb69d60b 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        14ea18:	e3300000 	teq	r0, #0	; 0x0
        14ea1c:	059a0000 	ldreq	r0, [sl]
        14ea20:	15990000 	ldrne	r0, [r9]
        14ea24:	e5901000 	ldr	r1, [r0]
        14ea28:	e5960000 	ldr	r0, [r6]
        14ea2c:	eb69d60b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14ea30:	e59d1004 	ldr	r1, [sp, #4]
        14ea34:	e5810000 	str	r0, [r1]
        14ea38:	ea00000d 	b	14ea74 <TOutline::ClickCommand(long)+0x220>
        14ea3c:	00683338 	rsbeq	r3, r8, r8, lsr r3
        14ea40:	00682bb0 	streqh	r2, [r8], -#176
        14ea44:	e59a1000 	ldr	r1, [sl]
        14ea48:	e5911000 	ldr	r1, [r1]
        14ea4c:	eb69d603 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14ea50:	eb69cdbd 	bl	1bc214c <$AllocateRefHandle(long)>
        14ea54:	e1a09000 	mov	r9, r0
        14ea58:	e5900000 	ldr	r0, [r0]
        14ea5c:	e1a01005 	mov	r1, r5
        14ea60:	eb69d5fb 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14ea64:	e59d1004 	ldr	r1, [sp, #4]
        14ea68:	e5810000 	str	r0, [r1]
        14ea6c:	e1a00009 	mov	r0, r9
        14ea70:	eb69d1d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14ea74:	e28d2004 	add	r2, sp, #4	; 0x4
        14ea78:	e594103c 	ldr	r1, [r4, #60]	; fField60
        14ea7c:	e1a00004 	mov	r0, r4
        14ea80:	e3e03000 	mvn	r3, #0	; 0x0
        14ea84:	e594c000 	ldr	ip, [r4]
        14ea88:	e1a0e00f 	mov	lr, pc
        14ea8c:	e28cfe15 	add	pc, ip, #336	; 0x150
        14ea90:	e1b09000 	movs	r9, r0
        14ea94:	1a000024 	bne	14eb2c <TOutline::ClickCommand(long)+0x2d8>
        14ea98:	e594003c 	ldr	r0, [r4, #60]	; fField60
        14ea9c:	e2801001 	add	r1, r0, #1	; 0x1
        14eaa0:	e5940034 	ldr	r0, [r4, #52]	; fField52
        14eaa4:	e1510000 	cmp	r1, r0
        14eaa8:	aaffffc8 	bge	14e9d0 <TOutline::ClickCommand(long)+0x17c>
        14eaac:	e1a00004 	mov	r0, r4
        14eab0:	e5942000 	ldr	r2, [r4]
        14eab4:	e1a0e00f 	mov	lr, pc
        14eab8:	e282ff5b 	add	pc, r2, #364	; 0x16c
        14eabc:	e3750001 	cmn	r5, #1	; 0x1
        14eac0:	e5860000 	str	r0, [r6]
        14eac4:	e59a1000 	ldr	r1, [sl]
        14eac8:	e5911000 	ldr	r1, [r1]
        14eacc:	1a000003 	bne	14eae0 <TOutline::ClickCommand(long)+0x28c>
        14ead0:	eb69d5e2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14ead4:	e59d1004 	ldr	r1, [sp, #4]
        14ead8:	e5810000 	str	r0, [r1]
        14eadc:	ea000009 	b	14eb08 <TOutline::ClickCommand(long)+0x2b4>
        14eae0:	eb69d5de 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14eae4:	eb69cd98 	bl	1bc214c <$AllocateRefHandle(long)>
        14eae8:	e1a09000 	mov	r9, r0
        14eaec:	e5900000 	ldr	r0, [r0]
        14eaf0:	e1a01005 	mov	r1, r5
        14eaf4:	eb69d5d6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        14eaf8:	e59d1004 	ldr	r1, [sp, #4]
        14eafc:	e5810000 	str	r0, [r1]
        14eb00:	e1a00009 	mov	r0, r9
        14eb04:	eb69d1ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14eb08:	e594003c 	ldr	r0, [r4, #60]	; fField60
        14eb0c:	e2801001 	add	r1, r0, #1	; 0x1
        14eb10:	e28d2004 	add	r2, sp, #4	; 0x4
        14eb14:	e1a00004 	mov	r0, r4
        14eb18:	e3e03000 	mvn	r3, #0	; 0x0
        14eb1c:	e594c000 	ldr	ip, [r4]
        14eb20:	e1a0e00f 	mov	lr, pc
        14eb24:	e28cfe15 	add	pc, ip, #336	; 0x150
        14eb28:	e1a09000 	mov	r9, r0
        14eb2c:	e3390000 	teq	r9, #0	; 0x0
        14eb30:	0affffa6 	beq	14e9d0 <TOutline::ClickCommand(long)+0x17c>
        14eb34:	e59f00f0 	ldr	r0, [pc, #f0]	; 14ec2c <TOutline::ClickCommand(long)+0x3d8>
        14eb38:	e5900000 	ldr	r0, [r0]
        14eb3c:	e5901000 	ldr	r1, [r0]
        14eb40:	e5970000 	ldr	r0, [r7]
        14eb44:	eb69d5c5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        14eb48:	e59d1008 	ldr	r1, [sp, #8]
        14eb4c:	e5810000 	str	r0, [r1]
        14eb50:	e1a01009 	mov	r1, r9
        14eb54:	e28d0008 	add	r0, sp, #8	; 0x8
        14eb58:	eb65f2a6 	bl	1acb5f8 <$PageTurnToSpread(RefVar const &, unsigned long)>
        14eb5c:	e59f10cc 	ldr	r1, [pc, #cc]	; 14ec30 <TOutline::ClickCommand(long)+0x3dc>
        14eb60:	e5911000 	ldr	r1, [r1]
        14eb64:	e5911000 	ldr	r1, [r1]
        14eb68:	e5940060 	ldr	r0, [r4, #96]	; fField96
        14eb6c:	e5900000 	ldr	r0, [r0]
        14eb70:	eb69d5b4 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        14eb74:	e3300000 	teq	r0, #0	; 0x0
        14eb78:	0a000012 	beq	14ebc8 <TOutline::ClickCommand(long)+0x374>
        14eb7c:	e24dd008 	sub	sp, sp, #8	; 0x8
        14eb80:	e3a00ea6 	mov	r0, #2656	; 0xa60
        14eb84:	e2800a0e 	add	r0, r0, #57344	; 0xe000
        14eb88:	eb69cd6f 	bl	1bc214c <$AllocateRefHandle(long)>
        14eb8c:	e58d0000 	str	r0, [sp]
        14eb90:	e1a0500d 	mov	r5, sp
        14eb94:	e3a00000 	mov	r0, #0	; 0x0
        14eb98:	eb69cd6b 	bl	1bc214c <$AllocateRefHandle(long)>
        14eb9c:	e58d0004 	str	r0, [sp, #4]
        14eba0:	e28d2004 	add	r2, sp, #4	; 0x4
        14eba4:	e28d100c 	add	r1, sp, #12	; 0xc
        14eba8:	e28d0010 	add	r0, sp, #16	; 0x10
        14ebac:	e1a03005 	mov	r3, r5
        14ebb0:	eb652821 	bl	1a98c3c <$HiliteBlock>
        14ebb4:	e59d0000 	ldr	r0, [sp]
        14ebb8:	eb69d17f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14ebbc:	e59d0004 	ldr	r0, [sp, #4]
        14ebc0:	eb69d17d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14ebc4:	e28dd008 	add	sp, sp, #8	; 0x8
        14ebc8:	e2840024 	add	r0, r4, #36	; 0x24
        14ebcc:	e1a05000 	mov	r5, r0
        14ebd0:	e59f105c 	ldr	r1, [pc, #5c]	; 14ec34 <TOutline::ClickCommand(long)+0x3e0>
        14ebd4:	e3a03000 	mov	r3, #0	; 0x0
        14ebd8:	e3a02000 	mov	r2, #0	; 0x0
        14ebdc:	eb69d5a4 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14ebe0:	eb69cd59 	bl	1bc214c <$AllocateRefHandle(long)>
        14ebe4:	e1a04000 	mov	r4, r0
        14ebe8:	e5900000 	ldr	r0, [r0]
        14ebec:	e3300002 	teq	r0, #2	; 0x2
        14ebf0:	0a00000a 	beq	14ec20 <TOutline::ClickCommand(long)+0x3cc>
        14ebf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        14ebf8:	e3a00002 	mov	r0, #2	; 0x2
        14ebfc:	eb69cd52 	bl	1bc214c <$AllocateRefHandle(long)>
        14ec00:	e58d0000 	str	r0, [sp]
        14ec04:	e1a0200d 	mov	r2, sp
        14ec08:	e1a00005 	mov	r0, r5
        14ec0c:	e59f1024 	ldr	r1, [pc, #24]	; 14ec38 <TOutline::ClickCommand(long)+0x3e4>
        14ec10:	eb69d16f 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        14ec14:	e59d0000 	ldr	r0, [sp]
        14ec18:	eb69d167 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14ec1c:	e28dd004 	add	sp, sp, #4	; 0x4
        14ec20:	e1a00004 	mov	r0, r4
        14ec24:	eb69d164 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14ec28:	eaffff68 	b	14e9d0 <TOutline::ClickCommand(long)+0x17c>
        14ec2c:	006826e0 	rsbeq	r2, r8, r0, ror #13
        14ec30:	00683100 	rsbeq	r3, r8, r0, lsl #2
        14ec34:	00681f70 	rsbeq	r1, r8, r0, ror pc
        14ec38:	006821f0 	streqd	r2, [r8], -#16
    */
}

/**
 * Symbol: TOutline::Collapse(long, unsigned char)
 * Address: 0014ec3c
 */
TOutline::Collapse(long, unsigned char) {
    /*
        14ec3c:	e1a0c00d 	mov	ip, sp
        14ec40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14ec44:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ec48:	e1a04000 	mov	r4, r0
        14ec4c:	e1a05001 	mov	r5, r1
        14ec50:	e5901000 	ldr	r1, [r0]
        14ec54:	e1a0e00f 	mov	lr, pc
        14ec58:	e281ff57 	add	pc, r1, #348	; 0x15c
        14ec5c:	e1a01005 	mov	r1, r5
        14ec60:	e5940038 	ldr	r0, [r4, #56]	; fField56
        14ec64:	e0800185 	add	r0, r0, r5, lsl #3
        14ec68:	e5902004 	ldr	r2, [r0, #4]
        14ec6c:	e202c602 	and	ip, r2, #2097152	; 0x200000
        14ec70:	e33c0602 	teq	ip, #2097152	; 0x200000
        14ec74:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        14ec78:	e5903002 	ldr	r3, [r0, #2]
        14ec7c:	e1a03823 	mov	r3, r3, lsr #16
        14ec80:	e594c04e 	ldr	ip, [r4, #78]	; fField78
        14ec84:	e1a0c82c 	mov	ip, ip, lsr #16
        14ec88:	e083300c 	add	r3, r3, ip
        14ec8c:	e1a03803 	mov	r3, r3, lsl #16
        14ec90:	e1a03843 	mov	r3, r3, asr #16
        14ec94:	e1a0c003 	mov	ip, r3
        14ec98:	e1a0ee22 	mov	lr, r2, lsr #28
        14ec9c:	ea00000e 	b	14ecdc <TOutline::Collapse(long, unsigned char)+0xa0>
        14eca0:	e3120501 	tst	r2, #4194304	; 0x400000
        14eca4:	0a000006 	beq	14ecc4 <TOutline::Collapse(long, unsigned char)+0x88>
        14eca8:	e5906002 	ldr	r6, [r0, #2]
        14ecac:	e1a06826 	mov	r6, r6, lsr #16
        14ecb0:	e594304e 	ldr	r3, [r4, #78]	; fField78
        14ecb4:	e1a03823 	mov	r3, r3, lsr #16
        14ecb8:	e0863003 	add	r3, r6, r3
        14ecbc:	e1a03803 	mov	r3, r3, lsl #16
        14ecc0:	e1a03843 	mov	r3, r3, asr #16
        14ecc4:	e3c2640f 	bic	r6, r2, #251658240	; 0xf000000
        14ecc8:	e2822401 	add	r2, r2, #16777216	; 0x1000000
        14eccc:	e202240f 	and	r2, r2, #251658240	; 0xf000000
        14ecd0:	e1862002 	orr	r2, r6, r2
        14ecd4:	e3c22501 	bic	r2, r2, #4194304	; 0x400000
        14ecd8:	e5802004 	str	r2, [r0, #4]
        14ecdc:	e2811001 	add	r1, r1, #1	; 0x1
        14ece0:	e2800008 	add	r0, r0, #8	; 0x8
        14ece4:	e5942034 	ldr	r2, [r4, #52]	; fField52
        14ece8:	e1520001 	cmp	r2, r1
        14ecec:	da000002 	ble	14ecfc <TOutline::Collapse(long, unsigned char)+0xc0>
        14ecf0:	e5902004 	ldr	r2, [r0, #4]
        14ecf4:	e15e0e22 	cmp	lr, r2, lsr #28
        14ecf8:	baffffe8 	blt	14eca0 <TOutline::Collapse(long, unsigned char)+0x64>
        14ecfc:	e043200c 	sub	r2, r3, ip
        14ed00:	e1a02802 	mov	r2, r2, lsl #16
        14ed04:	e1a02842 	mov	r2, r2, asr #16
        14ed08:	e5943034 	ldr	r3, [r4, #52]	; fField52
        14ed0c:	e1530001 	cmp	r3, r1
        14ed10:	da00000d 	ble	14ed4c <TOutline::Collapse(long, unsigned char)+0x110>
        14ed14:	e5903004 	ldr	r3, [r0, #4]
        14ed18:	e3130501 	tst	r3, #4194304	; 0x400000
        14ed1c:	0a000005 	beq	14ed38 <TOutline::Collapse(long, unsigned char)+0xfc>
        14ed20:	e5903002 	ldr	r3, [r0, #2]
        14ed24:	e1a03823 	mov	r3, r3, lsr #16
        14ed28:	e0433002 	sub	r3, r3, r2
        14ed2c:	e5c03003 	strb	r3, [r0, #3]
        14ed30:	e1a03443 	mov	r3, r3, asr #8
        14ed34:	e5c03002 	strb	r3, [r0, #2]
        14ed38:	e2811001 	add	r1, r1, #1	; 0x1
        14ed3c:	e2800008 	add	r0, r0, #8	; 0x8
        14ed40:	e5943034 	ldr	r3, [r4, #52]	; fField52
        14ed44:	e1530001 	cmp	r3, r1
        14ed48:	cafffff1 	bgt	14ed14 <TOutline::Collapse(long, unsigned char)+0xd8>
        14ed4c:	e5b40038 	ldr	r0, [r4, #56]!	; fField56
        14ed50:	e0800185 	add	r0, r0, r5, lsl #3
        14ed54:	e5901004 	ldr	r1, [r0, #4]
        14ed58:	e3c11602 	bic	r1, r1, #2097152	; 0x200000
        14ed5c:	e5a01004 	str	r1, [r0, #4]!
        14ed60:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TOutline::Constructor(RefVar const &, TView *)
 * Address: 0014ed64
 */
TOutline::Constructor(RefVar const &, TView *) {
    /*
        14ed64:	e1a0c00d 	mov	ip, sp
        14ed68:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14ed6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ed70:	e1a04000 	mov	r4, r0
        14ed74:	e1a05001 	mov	r5, r1
        14ed78:	e1a06002 	mov	r6, r2
        14ed7c:	e24dd034 	sub	sp, sp, #52	; 0x34
        14ed80:	e3a00002 	mov	r0, #2	; 0x2
        14ed84:	eb69ccf0 	bl	1bc214c <$AllocateRefHandle(long)>
        14ed88:	e58d0004 	str	r0, [sp, #4]
        14ed8c:	e3a00000 	mov	r0, #0	; 0x0
        14ed90:	e59d1004 	ldr	r1, [sp, #4]
        14ed94:	e5a10004 	str	r0, [r1, #4]!
        14ed98:	e1a02006 	mov	r2, r6
        14ed9c:	e1a01005 	mov	r1, r5
        14eda0:	e58d0020 	str	r0, [sp, #32]
        14eda4:	e1a00004 	mov	r0, r4
        14eda8:	eb69e9ca 	bl	1bc94d8 <TView::$Constructor(RefVar const &, TView *)>
        14edac:	e2846030 	add	r6, r4, #48	; 0x30
        14edb0:	e1a07006 	mov	r7, r6
        14edb4:	e2840024 	add	r0, r4, #36	; 0x24
        14edb8:	e1a05000 	mov	r5, r0
        14edbc:	e59f10f0 	ldr	r1, [pc, #f0]	; 14eeb4 <TOutline::Constructor(RefVar const &, TView *)+0x150>
        14edc0:	e3a03000 	mov	r3, #0	; 0x0
        14edc4:	e3a02000 	mov	r2, #0	; 0x0
        14edc8:	eb69d529 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14edcc:	e5971000 	ldr	r1, [r7]
        14edd0:	e5810000 	str	r0, [r1]
        14edd4:	e5960000 	ldr	r0, [r6]
        14edd8:	e5900000 	ldr	r0, [r0]
        14eddc:	eb69ccda 	bl	1bc214c <$AllocateRefHandle(long)>
        14ede0:	e58d0000 	str	r0, [sp]
        14ede4:	e1a0000d 	mov	r0, sp
        14ede8:	e28d1004 	add	r1, sp, #4	; 0x4
        14edec:	eb69e9bc 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        14edf0:	e59d0000 	ldr	r0, [sp]
        14edf4:	eb69d0f0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14edf8:	e28d1024 	add	r1, sp, #36	; 0x24
        14edfc:	e28d0004 	add	r0, sp, #4	; 0x4
        14ee00:	eb680277 	bl	1b4f7e4 <$GetStyleFontInfo(StyleRecord *, FontInfo *)>
        14ee04:	e28d1024 	add	r1, sp, #36	; 0x24
        14ee08:	e8910003 	ldmia	r1, {r0, r1}
        14ee0c:	e0811000 	add	r1, r1, r0
        14ee10:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        14ee14:	e0810000 	add	r0, r1, r0
        14ee18:	e5c4004f 	strb	r0, [r4, #79]
        14ee1c:	e1a00440 	mov	r0, r0, asr #8
        14ee20:	e5c4004e 	strb	r0, [r4, #78]	; fField78
        14ee24:	e59d0024 	ldr	r0, [sp, #36]
        14ee28:	e5c40051 	strb	r0, [r4, #81]
        14ee2c:	e1a00440 	mov	r0, r0, asr #8
        14ee30:	e5c40050 	strb	r0, [r4, #80]	; fField80
        14ee34:	e1a00005 	mov	r0, r5
        14ee38:	e59f1078 	ldr	r1, [pc, #78]	; 14eeb8 <TOutline::Constructor(RefVar const &, TView *)+0x154>	; fField78
        14ee3c:	e3a03000 	mov	r3, #0	; 0x0
        14ee40:	e3a02000 	mov	r2, #0	; 0x0
        14ee44:	eb69d50a 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14ee48:	eb69ccbf 	bl	1bc214c <$AllocateRefHandle(long)>
        14ee4c:	e1a05000 	mov	r5, r0
        14ee50:	e5900000 	ldr	r0, [r0]
        14ee54:	e3300002 	teq	r0, #2	; 0x2
        14ee58:	03a00009 	moveq	r0, #9	; 0x9
        14ee5c:	0a000003 	beq	14ee70 <TOutline::Constructor(RefVar const &, TView *)+0x10c>
        14ee60:	e3100003 	tst	r0, #3	; 0x3
        14ee64:	01a00140 	moveq	r0, r0, asr #2
        14ee68:	0a000000 	beq	14ee70 <TOutline::Constructor(RefVar const &, TView *)+0x10c>
        14ee6c:	eb69ccaa 	bl	1bc211c <$_RINTError(long)>
        14ee70:	e5840058 	str	r0, [r4, #88]
        14ee74:	e1a00004 	mov	r0, r4
        14ee78:	e3a01000 	mov	r1, #0	; 0x0
        14ee7c:	e5942000 	ldr	r2, [r4]
        14ee80:	e1a0e00f 	mov	lr, pc
        14ee84:	e282ff55 	add	pc, r2, #340	; 0x154
        14ee88:	e3e00000 	mvn	r0, #0	; 0x0
        14ee8c:	e5a40048 	str	r0, [r4, #72]!	; fField72
        14ee90:	e1a00005 	mov	r0, r5
        14ee94:	eb69d0c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14ee98:	e59d0020 	ldr	r0, [sp, #32]
        14ee9c:	e3300000 	teq	r0, #0	; 0x0
        14eea0:	159d0020 	ldrne	r0, [sp, #32]
        14eea4:	1b67fa0c 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        14eea8:	e59d0004 	ldr	r0, [sp, #4]
        14eeac:	eb69d0c2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14eeb0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        14eeb4:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        14eeb8:	00684ef0 	streqd	r4, [r8], -#224
    */
}

/**
 * Symbol: TOutline::CountTopics(void)
 * Address: 0014eebc
 */
TOutline::CountTopics(void) {
    /*
        14eebc:	e1a0c00d 	mov	ip, sp
        14eec0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14eec4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14eec8:	e1a04000 	mov	r4, r0
        14eecc:	e3a00002 	mov	r0, #2	; 0x2
        14eed0:	eb69cc9d 	bl	1bc214c <$AllocateRefHandle(long)>
        14eed4:	e1a05000 	mov	r5, r0
        14eed8:	e1a00004 	mov	r0, r4
        14eedc:	eb652fa4 	bl	1a9ad74 <TOutline::$List(void)>
        14eee0:	e5850000 	str	r0, [r5]
        14eee4:	eb69d8f0 	bl	1bc52ac <$Length(long)>
        14eee8:	e1a04000 	mov	r4, r0
        14eeec:	e1a00005 	mov	r0, r5
        14eef0:	eb69d0b1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14eef4:	e1a00004 	mov	r0, r4
        14eef8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

