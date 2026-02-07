#include "include/TPolygonView.h"

/**
 * Symbol: TPolygonView::GlobalHiliteResizeBounds(TRect *)
 * Address: 0018b54c
 */
TPolygonView::GlobalHiliteResizeBounds(TRect *) {
    /*
        18b54c:	e5902000 	ldr	r2, [r0]
        18b550:	e282f0b0 	add	pc, r2, #176	; 0xb0
    */
}

/**
 * Symbol: TPolygonView::ClickOptions(void)
 * Address: 0018b554
 */
TPolygonView::ClickOptions(void) {
    /*
        18b554:	e1a0c00d 	mov	ip, sp
        18b558:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18b55c:	e24cb004 	sub	fp, ip, #4	; 0x4
        18b560:	e1a04000 	mov	r4, r0
        18b564:	e24dd004 	sub	sp, sp, #4	; 0x4
        18b568:	e3a05001 	mov	r5, #1	; 0x1
        18b56c:	eb6498d9 	bl	1ab18d8 <TView::$FirstHilite(void)>
        18b570:	eb68daf5 	bl	1bc214c <$AllocateRefHandle(long)>
        18b574:	e58d0000 	str	r0, [sp]
        18b578:	e5900000 	ldr	r0, [r0]
        18b57c:	e3300002 	teq	r0, #2	; 0x2
        18b580:	0a000006 	beq	18b5a0 <TPolygonView::ClickOptions(void)+0x4c>
        18b584:	e1a0100d 	mov	r1, sp
        18b588:	e1a00004 	mov	r0, r4
        18b58c:	e5942000 	ldr	r2, [r4]
        18b590:	e1a0e00f 	mov	lr, pc
        18b594:	e282f09c 	add	pc, r2, #156	; 0x9c
        18b598:	e3300000 	teq	r0, #0	; 0x0
        18b59c:	13a05003 	movne	r5, #3	; 0x3
        18b5a0:	e1a00004 	mov	r0, r4
        18b5a4:	eb644a3f 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18b5a8:	eb68daeb 	bl	1bc215c <$BinaryData(long)>
        18b5ac:	eb643de8 	bl	1a9ad54 <PolygonShape::$IsCurvy(void)>
        18b5b0:	e3300000 	teq	r0, #0	; 0x0
        18b5b4:	02855004 	addeq	r5, r5, #4	; 0x4
        18b5b8:	e59d0000 	ldr	r0, [sp]
        18b5bc:	eb68defe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18b5c0:	e1a00005 	mov	r0, r5
        18b5c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::IsCompletelyHilited(RefVar const &)
 * Address: 0018b5c8
 */
TPolygonView::IsCompletelyHilited(RefVar const &) {
    /*
        18b5c8:	e1a0c00d 	mov	ip, sp
        18b5cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18b5d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        18b5d4:	e1a04001 	mov	r4, r1
        18b5d8:	e24dd008 	sub	sp, sp, #8	; 0x8
        18b5dc:	eb644a31 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18b5e0:	e1a01000 	mov	r1, r0
        18b5e4:	e1a0000d 	mov	r0, sp
        18b5e8:	eb68d6b8 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18b5ec:	e1a0100d 	mov	r1, sp
        18b5f0:	e28d0004 	add	r0, sp, #4	; 0x4
        18b5f4:	eb68d6b6 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18b5f8:	e1a0000d 	mov	r0, sp
        18b5fc:	e3a01000 	mov	r1, #0	; 0x0
        18b600:	eb68dabe 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18b604:	e28d0004 	add	r0, sp, #4	; 0x4
        18b608:	eb68dac1 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18b60c:	e1a05000 	mov	r5, r0
        18b610:	e5940000 	ldr	r0, [r4]
        18b614:	e5900000 	ldr	r0, [r0]
        18b618:	eb645270 	bl	1a9ffe0 <$RefToAddress(long)>
        18b61c:	e590100c 	ldr	r1, [r0, #12]	; fField12
        18b620:	e3310000 	teq	r1, #0	; 0x0
        18b624:	1a00000d 	bne	18b660 <TPolygonView::IsCompletelyHilited(RefVar const &)+0x98>
        18b628:	e5901010 	ldr	r1, [r0, #16]	; fField16
        18b62c:	e5952002 	ldr	r2, [r5, #2]	; fField2
        18b630:	e1a02842 	mov	r2, r2, asr #16
        18b634:	e2422001 	sub	r2, r2, #1	; 0x1
        18b638:	e1510002 	cmp	r1, r2
        18b63c:	ba000007 	blt	18b660 <TPolygonView::IsCompletelyHilited(RefVar const &)+0x98>
        18b640:	e5901014 	ldr	r1, [r0, #20]
        18b644:	e3310000 	teq	r1, #0	; 0x0
        18b648:	1a000004 	bne	18b660 <TPolygonView::IsCompletelyHilited(RefVar const &)+0x98>
        18b64c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        18b650:	e250ccff 	subs	ip, r0, #65280	; 0xff00
        18b654:	a35c00ff 	cmpge	ip, #255	; 0xff
        18b658:	a3a00001 	movge	r0, #1	; 0x1
        18b65c:	aa000000 	bge	18b664 <TPolygonView::IsCompletelyHilited(RefVar const &)+0x9c>
        18b660:	e3a00000 	mov	r0, #0	; 0x0
        18b664:	e20040ff 	and	r4, r0, #255	; 0xff
        18b668:	e28d0004 	add	r0, sp, #4	; 0x4
        18b66c:	e3a01000 	mov	r1, #0	; 0x0
        18b670:	eb68daa2 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18b674:	e1a00004 	mov	r0, r4
        18b678:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::OuterBounds(TRect *)
 * Address: 0018b67c
 */
TPolygonView::OuterBounds(TRect *) {
    /*
        18b67c:	e1a0c00d 	mov	ip, sp
        18b680:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18b684:	e24cb004 	sub	fp, ip, #4	; 0x4
        18b688:	e1a05000 	mov	r5, r0
        18b68c:	e1a04001 	mov	r4, r1
        18b690:	eb68ffc2 	bl	1bcb5a0 <TView::$OuterBounds(TRect *)>
        18b694:	e1a00005 	mov	r0, r5
        18b698:	eb001685 	bl	1910b4 <TPolygonView::GetPenSize(void)>
        18b69c:	e1a00800 	mov	r0, r0, lsl #16
        18b6a0:	e1a00840 	mov	r0, r0, asr #16
        18b6a4:	e5941006 	ldr	r1, [r4, #6]	; fField6
        18b6a8:	e1a01821 	mov	r1, r1, lsr #16
        18b6ac:	e0811000 	add	r1, r1, r0
        18b6b0:	e5c41007 	strb	r1, [r4, #7]
        18b6b4:	e1a01441 	mov	r1, r1, asr #8
        18b6b8:	e5c41006 	strb	r1, [r4, #6]	; fField6
        18b6bc:	e5941004 	ldr	r1, [r4, #4]	; fField4
        18b6c0:	e1a01821 	mov	r1, r1, lsr #16
        18b6c4:	e0810000 	add	r0, r1, r0
        18b6c8:	e5c40005 	strb	r0, [r4, #5]
        18b6cc:	e1a00440 	mov	r0, r0, asr #8
        18b6d0:	e5c40004 	strb	r0, [r4, #4]	; fField4
        18b6d4:	e1a00005 	mov	r0, r5
        18b6d8:	e5951000 	ldr	r1, [r5]
        18b6dc:	e1a0e00f 	mov	lr, pc
        18b6e0:	e281f094 	add	pc, r1, #148	; 0x94
        18b6e4:	e3300000 	teq	r0, #0	; 0x0
        18b6e8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        18b6ec:	e1a00004 	mov	r0, r4
        18b6f0:	e3e01003 	mvn	r1, #3	; 0x3
        18b6f4:	e1a02001 	mov	r2, r1
        18b6f8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        18b6fc:	ea67144f 	b	1b50840 <$InsetRect__FP4RectlT2>
    */
}

/**
 * Symbol: TPolygonView::AddHilited(RefVar const &, TEditView *)
 * Address: 0018b700
 */
TPolygonView::AddHilited(RefVar const &, TEditView *) {
    /*
        18b700:	e1a0c00d 	mov	ip, sp
        18b704:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        18b708:	e24cb004 	sub	fp, ip, #4	; 0x4
        18b70c:	e1a04000 	mov	r4, r0
        18b710:	e1a05001 	mov	r5, r1
        18b714:	e1a06002 	mov	r6, r2
        18b718:	e24dd010 	sub	sp, sp, #16	; 0x10
        18b71c:	e3a07000 	mov	r7, #0	; 0x0
        18b720:	e5910000 	ldr	r0, [r1]
        18b724:	e5900000 	ldr	r0, [r0]
        18b728:	eb64522c 	bl	1a9ffe0 <$RefToAddress(long)>
        18b72c:	e1a08000 	mov	r8, r0
        18b730:	e1a0000d 	mov	r0, sp
        18b734:	e1a01004 	mov	r1, r4
        18b738:	eb68ff92 	bl	1bcb588 <TView::$LocalOrigin( const(void))>
        18b73c:	e2840010 	add	r0, r4, #16	; 0x10
        18b740:	e1a01000 	mov	r1, r0
        18b744:	e5902006 	ldr	r2, [r0, #6]	; fField6
        18b748:	e1a02822 	mov	r2, r2, lsr #16
        18b74c:	e5900002 	ldr	r0, [r0, #2]	; fField2
        18b750:	e1a00820 	mov	r0, r0, lsr #16
        18b754:	e0420000 	sub	r0, r2, r0
        18b758:	e59d2000 	ldr	r2, [sp]
        18b75c:	e0800002 	add	r0, r0, r2
        18b760:	e5cd0007 	strb	r0, [sp, #7]
        18b764:	e1a00440 	mov	r0, r0, asr #8
        18b768:	e5cd0006 	strb	r0, [sp, #6]	; fField6
        18b76c:	e1a00001 	mov	r0, r1
        18b770:	e5911004 	ldr	r1, [r1, #4]	; fField4
        18b774:	e1a01821 	mov	r1, r1, lsr #16
        18b778:	e5900000 	ldr	r0, [r0]
        18b77c:	e1a00820 	mov	r0, r0, lsr #16
        18b780:	e0410000 	sub	r0, r1, r0
        18b784:	e41d100c 	ldr	r1, [sp], -#12	; fField12
        18b788:	e1a01821 	mov	r1, r1, lsr #16
        18b78c:	e0800001 	add	r0, r0, r1
        18b790:	e5cd0011 	strb	r0, [sp, #17]
        18b794:	e1a00440 	mov	r0, r0, asr #8
        18b798:	e5cd0010 	strb	r0, [sp, #16]	; fField16
        18b79c:	e598301c 	ldr	r3, [r8, #28]	; fField28
        18b7a0:	e92d0008 	stmdb	sp!, {r3}
        18b7a4:	e5b80020 	ldr	r0, [r8, #32]!	; fField32
        18b7a8:	e5902000 	ldr	r2, [r0]
        18b7ac:	e1a02842 	mov	r2, r2, asr #16
        18b7b0:	e5901002 	ldr	r1, [r0, #2]	; fField2
        18b7b4:	e1a01841 	mov	r1, r1, asr #16
        18b7b8:	e2800004 	add	r0, r0, #4	; 0x4
        18b7bc:	e28d3010 	add	r3, sp, #16	; 0x10
        18b7c0:	eb64417d 	bl	1a9bdbc <$MakePolygonForm__FP6TPointlT2RC5TRectT2>
        18b7c4:	e28dd004 	add	sp, sp, #4	; 0x4
        18b7c8:	eb68da5f 	bl	1bc214c <$AllocateRefHandle(long)>
        18b7cc:	e58d0008 	str	r0, [sp, #8]	; fField8
        18b7d0:	e1a00004 	mov	r0, r4
        18b7d4:	eb6449b3 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18b7d8:	e1a01000 	mov	r1, r0
        18b7dc:	e1a0000d 	mov	r0, sp
        18b7e0:	eb68d63a 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18b7e4:	e1a0100d 	mov	r1, sp
        18b7e8:	e28d0004 	add	r0, sp, #4	; 0x4
        18b7ec:	eb68d638 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18b7f0:	e1a0000d 	mov	r0, sp
        18b7f4:	e3a01000 	mov	r1, #0	; 0x0
        18b7f8:	eb68da40 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18b7fc:	e28d0004 	add	r0, sp, #4	; 0x4
        18b800:	eb68da43 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18b804:	e1a08000 	mov	r8, r0
        18b808:	eb643d52 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        18b80c:	e3300000 	teq	r0, #0	; 0x0
        18b810:	0a00000e 	beq	18b850 <TPolygonView::AddHilited(RefVar const &, TEditView *)+0x150>
        18b814:	e5980000 	ldr	r0, [r8]
        18b818:	e1a00840 	mov	r0, r0, asr #16
        18b81c:	e330000d 	teq	r0, #13	; 0xd
        18b820:	0a000006 	beq	18b840 <TPolygonView::AddHilited(RefVar const &, TEditView *)+0x140>
        18b824:	e1a01005 	mov	r1, r5
        18b828:	e1a00004 	mov	r0, r4
        18b82c:	e5942000 	ldr	r2, [r4]
        18b830:	e1a0e00f 	mov	lr, pc
        18b834:	e282f09c 	add	pc, r2, #156	; 0x9c
        18b838:	e3300000 	teq	r0, #0	; 0x0
        18b83c:	1a000003 	bne	18b850 <TPolygonView::AddHilited(RefVar const &, TEditView *)+0x150>
        18b840:	e3a07001 	mov	r7, #1	; 0x1
        18b844:	e28d1014 	add	r1, sp, #20	; 0x14
        18b848:	e1a00004 	mov	r0, r4
        18b84c:	eb646ecc 	bl	1aa7384 <TPolygonView::$GetArcBounds(TRect &)>
        18b850:	e24dd004 	sub	sp, sp, #4	; 0x4
        18b854:	e28d100c 	add	r1, sp, #12	; 0xc
        18b858:	e1a00006 	mov	r0, r6
        18b85c:	eb63f717 	bl	1a894c0 <TEditView::$AddForm(RefVar const &)>
        18b860:	e1a04000 	mov	r4, r0
        18b864:	eb64498f 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18b868:	e1a01000 	mov	r1, r0
        18b86c:	e1a0000d 	mov	r0, sp
        18b870:	eb68d616 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18b874:	e1a0100d 	mov	r1, sp
        18b878:	e28d0008 	add	r0, sp, #8	; 0x8
        18b87c:	eb68d612 	bl	1bc10cc <DataPtr::$__as(DataPtr const &)>
        18b880:	e1a0000d 	mov	r0, sp
        18b884:	e3a01000 	mov	r1, #0	; 0x0
        18b888:	eb68da1c 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18b88c:	e28d0008 	add	r0, sp, #8	; 0x8
        18b890:	eb68da1f 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18b894:	e1a01000 	mov	r1, r0
        18b898:	e1a00004 	mov	r0, r4
        18b89c:	eb646681 	bl	1aa52a8 <TPolygonView::$UpdateBounds(PolygonShape *)>
        18b8a0:	e3370000 	teq	r7, #0	; 0x0
        18b8a4:	128d1018 	addne	r1, sp, #24	; 0x18
        18b8a8:	11a00004 	movne	r0, r4
        18b8ac:	1b646eb5 	blne	1aa7388 <TPolygonView::$SetArcBounds(TRect const &)>
        18b8b0:	e1a00004 	mov	r0, r4
        18b8b4:	e5941000 	ldr	r1, [r4]
        18b8b8:	e1a0e00f 	mov	lr, pc
        18b8bc:	e281f0a0 	add	pc, r1, #160	; 0xa0
        18b8c0:	e28d0008 	add	r0, sp, #8	; 0x8
        18b8c4:	e3a01000 	mov	r1, #0	; 0x0
        18b8c8:	eb68da0c 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18b8cc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        18b8d0:	eb68de39 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18b8d4:	e1a00004 	mov	r0, r4
        18b8d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::AddDragInfo(TDragInfo *)
 * Address: 0018b8dc
 */
TPolygonView::AddDragInfo(TDragInfo *) {
    /*
        18b8dc:	e1a0c00d 	mov	ip, sp
        18b8e0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        18b8e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        18b8e8:	e1a04000 	mov	r4, r0
        18b8ec:	e1a05001 	mov	r5, r1
        18b8f0:	eb6472cc 	bl	1aa8428 <TView::$AddDragInfo(TDragInfo *)>
        18b8f4:	e1b06000 	movs	r6, r0
        18b8f8:	1a000016 	bne	18b958 <TPolygonView::AddDragInfo(TDragInfo *)+0x7c>
        18b8fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        18b900:	e3a00002 	mov	r0, #2	; 0x2
        18b904:	eb68da10 	bl	1bc214c <$AllocateRefHandle(long)>
        18b908:	e58d0000 	str	r0, [sp]
        18b90c:	e59f104c 	ldr	r1, [pc, #4c]	; 18b960 <TPolygonView::AddDragInfo(TDragInfo *)+0x84>	; fField4
        18b910:	e1a00004 	mov	r0, r4
        18b914:	eb68fb0b 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        18b918:	e3300002 	teq	r0, #2	; 0x2
        18b91c:	059f0040 	ldreq	r0, [pc, #40]	; 18b964 <TPolygonView::AddDragInfo(TDragInfo *)+0x88>
        18b920:	159f0038 	ldrne	r0, [pc, #38]	; 18b960 <TPolygonView::AddDragInfo(TDragInfo *)+0x84>
        18b924:	e5900000 	ldr	r0, [r0]
        18b928:	e5901000 	ldr	r1, [r0]
        18b92c:	e59d0000 	ldr	r0, [sp]
        18b930:	e2842024 	add	r2, r4, #36	; 0x24
        18b934:	e5801000 	str	r1, [r0]
        18b938:	e59f3028 	ldr	r3, [pc, #28]	; 18b968 <TPolygonView::AddDragInfo(TDragInfo *)+0x8c>	; fField28
        18b93c:	e1a0100d 	mov	r1, sp
        18b940:	e1a00005 	mov	r0, r5
        18b944:	eb6472b8 	bl	1aa842c <TDragInfo::$AddDragItem(RefVar const &, RefVar const &, RefVar const &)>
        18b948:	e3a06001 	mov	r6, #1	; 0x1
        18b94c:	e59d0000 	ldr	r0, [sp]
        18b950:	eb68de19 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18b954:	e28dd004 	add	sp, sp, #4	; 0x4
        18b958:	e1a00006 	mov	r0, r6
        18b95c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        18b960:	00683220 	rsbeq	r3, r8, r0, lsr #4
        18b964:	00683f28 	rsbeq	r3, r8, r8, lsr #30
        18b968:	006809d0 	ldreqd	r0, [r8], -#144
    */
}

/**
 * Symbol: TPolygonView::GetDropData(RefVar const &, RefVar const &)
 * Address: 0018b96c
 */
TPolygonView::GetDropData(RefVar const &, RefVar const &) {
    /*
        18b96c:	e1a0c00d 	mov	ip, sp
        18b970:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        18b974:	e24cb004 	sub	fp, ip, #4	; 0x4
        18b978:	e1a04000 	mov	r4, r0
        18b97c:	e24dd004 	sub	sp, sp, #4	; 0x4
        18b980:	eb649be2 	bl	1ab2910 <TView::$GetDropData(RefVar const &, RefVar const &)>
        18b984:	eb68d9f0 	bl	1bc214c <$AllocateRefHandle(long)>
        18b988:	e58d0000 	str	r0, [sp]
        18b98c:	e5900000 	ldr	r0, [r0]
        18b990:	e3a08000 	mov	r8, #0	; 0x0
        18b994:	e3300002 	teq	r0, #2	; 0x2
        18b998:	1a000104 	bne	18bdb0 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x444>
        18b99c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        18b9a0:	e1a00004 	mov	r0, r4
        18b9a4:	eb6497cb 	bl	1ab18d8 <TView::$FirstHilite(void)>
        18b9a8:	eb68d9e7 	bl	1bc214c <$AllocateRefHandle(long)>
        18b9ac:	e58d0008 	str	r0, [sp, #8]	; fField8
        18b9b0:	e5900000 	ldr	r0, [r0]
        18b9b4:	e3300002 	teq	r0, #2	; 0x2
        18b9b8:	0a000001 	beq	18b9c4 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x58>
        18b9bc:	eb645187 	bl	1a9ffe0 <$RefToAddress(long)>
        18b9c0:	ea000000 	b	18b9c8 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x5c>
        18b9c4:	e3a00000 	mov	r0, #0	; 0x0
        18b9c8:	e1a05000 	mov	r5, r0
        18b9cc:	e2840010 	add	r0, r4, #16	; 0x10
        18b9d0:	e1a07000 	mov	r7, r0
        18b9d4:	e8901008 	ldmia	r0, {r3, ip}
        18b9d8:	e88d1008 	stmia	sp, {r3, ip}
        18b9dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        18b9e0:	e5900000 	ldr	r0, [r0]
        18b9e4:	e58d0004 	str	r0, [sp, #4]	; fField4
        18b9e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18b9ec:	e2600000 	rsb	r0, r0, #0	; 0x0
        18b9f0:	e1a00800 	mov	r0, r0, lsl #16
        18b9f4:	e1a00840 	mov	r0, r0, asr #16
        18b9f8:	e59d1006 	ldr	r1, [sp, #6]	; fField6
        18b9fc:	e2611000 	rsb	r1, r1, #0	; 0x0
        18ba00:	e1a01801 	mov	r1, r1, lsl #16
        18ba04:	e1a01841 	mov	r1, r1, asr #16
        18ba08:	e24dd004 	sub	sp, sp, #4	; 0x4
        18ba0c:	e5cd0003 	strb	r0, [sp, #3]
        18ba10:	e1a00440 	mov	r0, r0, asr #8
        18ba14:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18ba18:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18ba1c:	e1a00441 	mov	r0, r1, asr #8
        18ba20:	e5cd0000 	strb	r0, [sp]
        18ba24:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18ba28:	e58d0000 	str	r0, [sp]
        18ba2c:	e28d0008 	add	r0, sp, #8	; 0x8
        18ba30:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18ba34:	e1a01841 	mov	r1, r1, asr #16
        18ba38:	e59d2000 	ldr	r2, [sp]
        18ba3c:	e1a02842 	mov	r2, r2, asr #16
        18ba40:	eb6717a8 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18ba44:	e28dd008 	add	sp, sp, #8	; 0x8
        18ba48:	e3350000 	teq	r5, #0	; 0x0
        18ba4c:	0a00000d 	beq	18ba88 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x11c>
        18ba50:	e595301c 	ldr	r3, [r5, #28]	; fField28
        18ba54:	e92d0008 	stmdb	sp!, {r3}
        18ba58:	e5950020 	ldr	r0, [r5, #32]	; fField32
        18ba5c:	e5902000 	ldr	r2, [r0]
        18ba60:	e1a02842 	mov	r2, r2, asr #16
        18ba64:	e5901002 	ldr	r1, [r0, #2]	; fField2
        18ba68:	e1a01841 	mov	r1, r1, asr #16
        18ba6c:	e2800004 	add	r0, r0, #4	; 0x4
        18ba70:	e28d3004 	add	r3, sp, #4	; 0x4
        18ba74:	eb6440d0 	bl	1a9bdbc <$MakePolygonForm__FP6TPointlT2RC5TRectT2>
        18ba78:	e28dd004 	add	sp, sp, #4	; 0x4
        18ba7c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        18ba80:	e5810000 	str	r0, [r1]
        18ba84:	ea000024 	b	18bb1c <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x1b0>
        18ba88:	e24dd004 	sub	sp, sp, #4	; 0x4
        18ba8c:	e1a00004 	mov	r0, r4
        18ba90:	eb644904 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18ba94:	e1a01000 	mov	r1, r0
        18ba98:	e1a0000d 	mov	r0, sp
        18ba9c:	eb68d58b 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18baa0:	e1a0000d 	mov	r0, sp
        18baa4:	eb68d99a 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18baa8:	e1a06000 	mov	r6, r0
        18baac:	e52d806c 	str	r8, [sp, -#108]!
        18bab0:	e28d0008 	add	r0, sp, #8	; 0x8
        18bab4:	eb689bae 	bl	1bb2974 <$setjmp>
        18bab8:	e3300000 	teq	r0, #0	; 0x0
        18babc:	1a000097 	bne	18bd20 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x3b4>
        18bac0:	e1a0000d 	mov	r0, sp
        18bac4:	eb69516c 	bl	1be007c <$AddExceptionHandler>
        18bac8:	e1a00004 	mov	r0, r4
        18bacc:	eb001578 	bl	1910b4 <TPolygonView::GetPenSize(void)>
        18bad0:	e1a03000 	mov	r3, r0
        18bad4:	e92d0008 	stmdb	sp!, {r3}
        18bad8:	e5961002 	ldr	r1, [r6, #2]	; fField2
        18badc:	e1a01841 	mov	r1, r1, asr #16
        18bae0:	e2860004 	add	r0, r6, #4	; 0x4
        18bae4:	e28d3074 	add	r3, sp, #116	; 0x74
        18bae8:	e5962000 	ldr	r2, [r6]
        18baec:	e1a02842 	mov	r2, r2, asr #16
        18baf0:	eb6440b1 	bl	1a9bdbc <$MakePolygonForm__FP6TPointlT2RC5TRectT2>
        18baf4:	e28dd004 	add	sp, sp, #4	; 0x4
        18baf8:	e59d107c 	ldr	r1, [sp, #124]
        18bafc:	e5810000 	str	r0, [r1]
        18bb00:	e1a0000d 	mov	r0, sp
        18bb04:	eb69556b 	bl	1be10b8 <$ExitHandler>
        18bb08:	e28dd06c 	add	sp, sp, #108	; 0x6c
        18bb0c:	e1a0000d 	mov	r0, sp
        18bb10:	e3a01000 	mov	r1, #0	; 0x0
        18bb14:	eb68d979 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18bb18:	e28dd004 	add	sp, sp, #4	; 0x4
        18bb1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        18bb20:	e59f01ec 	ldr	r0, [pc, #1ec]	; 18bd14 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x3a8>	; fField1
        18bb24:	e5900000 	ldr	r0, [r0]
        18bb28:	e5901000 	ldr	r1, [r0]
        18bb2c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        18bb30:	e5900000 	ldr	r0, [r0]
        18bb34:	eb68e1c9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        18bb38:	eb68d983 	bl	1bc214c <$AllocateRefHandle(long)>
        18bb3c:	e58d0000 	str	r0, [sp]
        18bb40:	e5900000 	ldr	r0, [r0]
        18bb44:	e3300002 	teq	r0, #2	; 0x2
        18bb48:	0a00007a 	beq	18bd38 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x3cc>
        18bb4c:	e24dd008 	sub	sp, sp, #8	; 0x8
        18bb50:	e28d1008 	add	r1, sp, #8	; 0x8
        18bb54:	e1a0000d 	mov	r0, sp
        18bb58:	eb68d55e 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        18bb5c:	e1a0100d 	mov	r1, sp
        18bb60:	e28d0004 	add	r0, sp, #4	; 0x4
        18bb64:	eb68d55a 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18bb68:	e1a0000d 	mov	r0, sp
        18bb6c:	e3a01000 	mov	r1, #0	; 0x0
        18bb70:	eb68d962 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18bb74:	e28d0004 	add	r0, sp, #4	; 0x4
        18bb78:	eb68d965 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18bb7c:	e1a06000 	mov	r6, r0
        18bb80:	e3350000 	teq	r5, #0	; 0x0
        18bb84:	0a00001d 	beq	18bc00 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x294>
        18bb88:	e28d1014 	add	r1, sp, #20	; 0x14
        18bb8c:	e1a00004 	mov	r0, r4
        18bb90:	e5942000 	ldr	r2, [r4]
        18bb94:	e1a0e00f 	mov	lr, pc
        18bb98:	e282f09c 	add	pc, r2, #156	; 0x9c
        18bb9c:	e3300000 	teq	r0, #0	; 0x0
        18bba0:	1a000016 	bne	18bc00 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x294>
        18bba4:	e24dd004 	sub	sp, sp, #4	; 0x4
        18bba8:	e28d1010 	add	r1, sp, #16	; 0x10
        18bbac:	e1a00006 	mov	r0, r6
        18bbb0:	eb63fe7a 	bl	1a8b5a0 <PolygonShape::$CalcBounds(TRect *)>
        18bbb4:	e59d0012 	ldr	r0, [sp, #18]
        18bbb8:	e1a00840 	mov	r0, r0, asr #16
        18bbbc:	e2601000 	rsb	r1, r0, #0	; 0x0
        18bbc0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        18bbc4:	e1a00840 	mov	r0, r0, asr #16
        18bbc8:	e2602000 	rsb	r2, r0, #0	; 0x0
        18bbcc:	e1a00006 	mov	r0, r6
        18bbd0:	eb00158e 	bl	191210 <PolygonShape::Offset(long, long)>
        18bbd4:	e28d0010 	add	r0, sp, #16	; 0x10
        18bbd8:	eb698eef 	bl	1bef79c <$ToObject(TRect const &)>
        18bbdc:	eb68d95a 	bl	1bc214c <$AllocateRefHandle(long)>
        18bbe0:	e58d0000 	str	r0, [sp]
        18bbe4:	e1a0200d 	mov	r2, sp
        18bbe8:	e59f1128 	ldr	r1, [pc, #128]	; 18bd18 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x3ac>
        18bbec:	e28d001c 	add	r0, sp, #28	; 0x1c
        18bbf0:	eb68e9dc 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        18bbf4:	e59d0000 	ldr	r0, [sp]
        18bbf8:	eb68dd6f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18bbfc:	e28dd004 	add	sp, sp, #4	; 0x4
        18bc00:	e1a00006 	mov	r0, r6
        18bc04:	eb643c53 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        18bc08:	e3300000 	teq	r0, #0	; 0x0
        18bc0c:	0a00003b 	beq	18bd00 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x394>
        18bc10:	e24dd00c 	sub	sp, sp, #12	; 0xc
        18bc14:	e28d1004 	add	r1, sp, #4	; 0x4
        18bc18:	e1a00004 	mov	r0, r4
        18bc1c:	eb646dd8 	bl	1aa7384 <TPolygonView::$GetArcBounds(TRect &)>
        18bc20:	e24dd00c 	sub	sp, sp, #12	; 0xc
        18bc24:	e5970000 	ldr	r0, [r7]
        18bc28:	e58d0004 	str	r0, [sp, #4]	; fField4
        18bc2c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18bc30:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        18bc34:	e0800001 	add	r0, r0, r1
        18bc38:	e1a00800 	mov	r0, r0, lsl #16
        18bc3c:	e1a00840 	mov	r0, r0, asr #16
        18bc40:	e59d2006 	ldr	r2, [sp, #6]	; fField6
        18bc44:	e59d1026 	ldr	r1, [sp, #38]
        18bc48:	e0821001 	add	r1, r2, r1
        18bc4c:	e1a01801 	mov	r1, r1, lsl #16
        18bc50:	e1a01841 	mov	r1, r1, asr #16
        18bc54:	e24dd004 	sub	sp, sp, #4	; 0x4
        18bc58:	e5cd0003 	strb	r0, [sp, #3]
        18bc5c:	e1a00440 	mov	r0, r0, asr #8
        18bc60:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18bc64:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18bc68:	e1a00441 	mov	r0, r1, asr #8
        18bc6c:	e5cd0000 	strb	r0, [sp]
        18bc70:	e59d0000 	ldr	r0, [sp]
        18bc74:	e58d000c 	str	r0, [sp, #12]	; fField12
        18bc78:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        18bc7c:	e2600000 	rsb	r0, r0, #0	; 0x0
        18bc80:	e1a01800 	mov	r1, r0, lsl #16
        18bc84:	e1a01841 	mov	r1, r1, asr #16
        18bc88:	e59d000e 	ldr	r0, [sp, #14]
        18bc8c:	e2600000 	rsb	r0, r0, #0	; 0x0
        18bc90:	e1a00800 	mov	r0, r0, lsl #16
        18bc94:	e1a00840 	mov	r0, r0, asr #16
        18bc98:	e5cd1003 	strb	r1, [sp, #3]
        18bc9c:	e1a01441 	mov	r1, r1, asr #8
        18bca0:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        18bca4:	e5cd0001 	strb	r0, [sp, #1]	; fField1
        18bca8:	e1a00440 	mov	r0, r0, asr #8
        18bcac:	e5cd0000 	strb	r0, [sp]
        18bcb0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18bcb4:	e58d0000 	str	r0, [sp]
        18bcb8:	e28d0010 	add	r0, sp, #16	; 0x10
        18bcbc:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18bcc0:	e1a01841 	mov	r1, r1, asr #16
        18bcc4:	e59d2000 	ldr	r2, [sp]
        18bcc8:	e1a02842 	mov	r2, r2, asr #16
        18bccc:	eb671705 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18bcd0:	e28dd00c 	add	sp, sp, #12	; 0xc
        18bcd4:	e28d0004 	add	r0, sp, #4	; 0x4
        18bcd8:	eb698eaf 	bl	1bef79c <$ToObject(TRect const &)>
        18bcdc:	eb68d91a 	bl	1bc214c <$AllocateRefHandle(long)>
        18bce0:	e58d0000 	str	r0, [sp]
        18bce4:	e1a0200d 	mov	r2, sp
        18bce8:	e59f102c 	ldr	r1, [pc, #2c]	; 18bd1c <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x3b0>	; fField2
        18bcec:	e28d0024 	add	r0, sp, #36	; 0x24
        18bcf0:	eb68e99c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        18bcf4:	e59d0000 	ldr	r0, [sp]
        18bcf8:	eb68dd2f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18bcfc:	e28dd00c 	add	sp, sp, #12	; 0xc
        18bd00:	e28d0004 	add	r0, sp, #4	; 0x4
        18bd04:	e3a01000 	mov	r1, #0	; 0x0
        18bd08:	eb68d8fc 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18bd0c:	e28dd008 	add	sp, sp, #8	; 0x8
        18bd10:	ea000020 	b	18bd98 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x42c>
        18bd14:	00683f18 	rsbeq	r3, r8, r8, lsl pc
        18bd18:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        18bd1c:	00681ee0 	rsbeq	r1, r8, r0, ror #29
        18bd20:	e28d006c 	add	r0, sp, #108	; 0x6c
        18bd24:	e3a01000 	mov	r1, #0	; 0x0
        18bd28:	eb68d8f4 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18bd2c:	e1a0000d 	mov	r0, sp
        18bd30:	eb695907 	bl	1be2154 <$NextHandler>
        18bd34:	eafffff9 	b	18bd20 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x3b4>
        18bd38:	e24dd004 	sub	sp, sp, #4	; 0x4
        18bd3c:	e59f1080 	ldr	r1, [pc, #80]	; 18bdc4 <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x458>
        18bd40:	e1a05001 	mov	r5, r1
        18bd44:	e1a00004 	mov	r0, r4
        18bd48:	eb68f9fe 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        18bd4c:	eb68d8fe 	bl	1bc214c <$AllocateRefHandle(long)>
        18bd50:	e40d0004 	str	r0, [sp], -#4	; fField4
        18bd54:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18bd58:	e5900000 	ldr	r0, [r0]
        18bd5c:	e3300002 	teq	r0, #2	; 0x2
        18bd60:	0a000009 	beq	18bd8c <TPolygonView::GetDropData(RefVar const &, RefVar const &)+0x420>
        18bd64:	e28d0004 	add	r0, sp, #4	; 0x4
        18bd68:	eb68dd0e 	bl	1bc31a8 <$DeepClone(RefVar const &)>
        18bd6c:	eb68d8f6 	bl	1bc214c <$AllocateRefHandle(long)>
        18bd70:	e58d0000 	str	r0, [sp]
        18bd74:	e1a0200d 	mov	r2, sp
        18bd78:	e1a01005 	mov	r1, r5
        18bd7c:	e28d0018 	add	r0, sp, #24	; 0x18
        18bd80:	eb68e978 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        18bd84:	e59d0000 	ldr	r0, [sp]
        18bd88:	eb68dd0b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18bd8c:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        18bd90:	eb68dd09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18bd94:	e28dd004 	add	sp, sp, #4	; 0x4
        18bd98:	e59d0000 	ldr	r0, [sp]
        18bd9c:	eb68dd06 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18bda0:	e28dd004 	add	sp, sp, #4	; 0x4
        18bda4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        18bda8:	eb68dd03 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18bdac:	e28dd00c 	add	sp, sp, #12	; 0xc
        18bdb0:	e59d0000 	ldr	r0, [sp]
        18bdb4:	e5904000 	ldr	r4, [r0]
        18bdb8:	eb68dcff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18bdbc:	e1a00004 	mov	r0, r4
        18bdc0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        18bdc4:	00683220 	rsbeq	r3, r8, r0, lsr #4
    */
}

/**
 * Symbol: TPolygonView::DropRemove(RefVar const &)
 * Address: 0018bdc8
 */
TPolygonView::DropRemove(RefVar const &) {
    /*
        18bdc8:	e1a0c00d 	mov	ip, sp
        18bdcc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18bdd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        18bdd4:	e1a04000 	mov	r4, r0
        18bdd8:	e24dd004 	sub	sp, sp, #4	; 0x4
        18bddc:	eb648645 	bl	1aad6f8 <TView::$DropRemove(RefVar const &)>
        18bde0:	e3300000 	teq	r0, #0	; 0x0
        18bde4:	1a00000b 	bne	18be18 <TPolygonView::DropRemove(RefVar const &)+0x50>
        18bde8:	e1a05004 	mov	r5, r4
        18bdec:	e1a00004 	mov	r0, r4
        18bdf0:	eb6496b8 	bl	1ab18d8 <TView::$FirstHilite(void)>
        18bdf4:	eb68d8d4 	bl	1bc214c <$AllocateRefHandle(long)>
        18bdf8:	e58d0000 	str	r0, [sp]
        18bdfc:	e1a0100d 	mov	r1, sp
        18be00:	e1a00005 	mov	r0, r5
        18be04:	e5952000 	ldr	r2, [r5]
        18be08:	e1a0e00f 	mov	lr, pc
        18be0c:	e282f0a4 	add	pc, r2, #164	; 0xa4
        18be10:	e59d0000 	ldr	r0, [sp]
        18be14:	eb68dce8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18be18:	e3a00001 	mov	r0, #1	; 0x1
        18be1c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::DeleteHilited(RefVar const &)
 * Address: 0018be20
 */
TPolygonView::DeleteHilited(RefVar const &) {
    /*
        18be20:	e1a0c00d 	mov	ip, sp
        18be24:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18be28:	e24cb004 	sub	fp, ip, #4	; 0x4
        18be2c:	e1a04000 	mov	r4, r0
        18be30:	e1a05001 	mov	r5, r1
        18be34:	e5910000 	ldr	r0, [r1]
        18be38:	e5900000 	ldr	r0, [r0]
        18be3c:	e3300002 	teq	r0, #2	; 0x2
        18be40:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        18be44:	e5941008 	ldr	r1, [r4, #8]	; fField8
        18be48:	e3110082 	tst	r1, #130	; 0x82
        18be4c:	1a00001e 	bne	18becc <TPolygonView::DeleteHilited(RefVar const &)+0xac>
        18be50:	eb645062 	bl	1a9ffe0 <$RefToAddress(long)>
        18be54:	e2803010 	add	r3, r0, #16	; 0x10
        18be58:	e893000e 	ldmia	r3, {r1, r2, r3}
        18be5c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        18be60:	e5901020 	ldr	r1, [r0, #32]	; fField32
        18be64:	e5912002 	ldr	r2, [r1, #2]	; fField2
        18be68:	e1a02842 	mov	r2, r2, asr #16
        18be6c:	e0812102 	add	r2, r1, r2, lsl #2
        18be70:	e2811004 	add	r1, r1, #4	; 0x4
        18be74:	e5b0300c 	ldr	r3, [r0, #12]!	; fField12
        18be78:	e1a00004 	mov	r0, r4
        18be7c:	eb645068 	bl	1aa0024 <TPolygonView::$RemovePoints(TPoint *, TPoint *, long, long, long, long)>
        18be80:	e28dd00c 	add	sp, sp, #12	; 0xc
        18be84:	e3300000 	teq	r0, #0	; 0x0
        18be88:	0a00000f 	beq	18becc <TPolygonView::DeleteHilited(RefVar const &)+0xac>
        18be8c:	e5b42004 	ldr	r2, [r4, #4]!	; fField4
        18be90:	e5941018 	ldr	r1, [r4, #24]	; fField24
        18be94:	e24dd004 	sub	sp, sp, #4	; 0x4
        18be98:	e59f0028 	ldr	r0, [pc, #28]	; 18bec8 <TPolygonView::DeleteHilited(RefVar const &)+0xa8>	; fField28
        18be9c:	e5904000 	ldr	r4, [r0]
        18bea0:	e3a0003f 	mov	r0, #63	; 0x3f
        18bea4:	eb646925 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        18bea8:	eb68d8a7 	bl	1bc214c <$AllocateRefHandle(long)>
        18beac:	e58d0000 	str	r0, [sp]
        18beb0:	e1a0100d 	mov	r1, sp
        18beb4:	e1a00004 	mov	r0, r4
        18beb8:	eb64125e 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        18bebc:	e59d0000 	ldr	r0, [sp]
        18bec0:	eb68dcbd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18bec4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        18bec8:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        18becc:	e1a01005 	mov	r1, r5
        18bed0:	e1a00004 	mov	r0, r4
        18bed4:	e5942000 	ldr	r2, [r4]
        18bed8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        18bedc:	e282f0a8 	add	pc, r2, #168	; 0xa8
    */
}

/**
 * Symbol: TPolygonView::CalcHiliteBounds(PolygonShape *, TRect *)
 * Address: 0018bee0
 */
TPolygonView::CalcHiliteBounds(PolygonShape *, TRect *) {
    /*
        18bee0:	e1a0c00d 	mov	ip, sp
        18bee4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18bee8:	e24cb004 	sub	fp, ip, #4	; 0x4
        18beec:	e1a04002 	mov	r4, r2
        18bef0:	e5912000 	ldr	r2, [r1]
        18bef4:	e1a02842 	mov	r2, r2, asr #16
        18bef8:	e332000e 	teq	r2, #14	; 0xe
        18befc:	1a000018 	bne	18bf64 <TPolygonView::CalcHiliteBounds(PolygonShape *, TRect *)+0x84>
        18bf00:	e3a01000 	mov	r1, #0	; 0x0
        18bf04:	e5c41003 	strb	r1, [r4, #3]
        18bf08:	e5c41002 	strb	r1, [r4, #2]	; fField2
        18bf0c:	e5c41001 	strb	r1, [r4, #1]	; fField1
        18bf10:	e5c41000 	strb	r1, [r4]
        18bf14:	e2800010 	add	r0, r0, #16	; 0x10
        18bf18:	e1a01000 	mov	r1, r0
        18bf1c:	e5902006 	ldr	r2, [r0, #6]	; fField6
        18bf20:	e1a02822 	mov	r2, r2, lsr #16
        18bf24:	e5900002 	ldr	r0, [r0, #2]	; fField2
        18bf28:	e1a00820 	mov	r0, r0, lsr #16
        18bf2c:	e0420000 	sub	r0, r2, r0
        18bf30:	e5c40007 	strb	r0, [r4, #7]
        18bf34:	e1a00440 	mov	r0, r0, asr #8
        18bf38:	e5c40006 	strb	r0, [r4, #6]	; fField6
        18bf3c:	e1a00001 	mov	r0, r1
        18bf40:	e5911004 	ldr	r1, [r1, #4]	; fField4
        18bf44:	e1a01821 	mov	r1, r1, lsr #16
        18bf48:	e5900000 	ldr	r0, [r0]
        18bf4c:	e1a00820 	mov	r0, r0, lsr #16
        18bf50:	e0410000 	sub	r0, r1, r0
        18bf54:	e5c40005 	strb	r0, [r4, #5]
        18bf58:	e1a00440 	mov	r0, r0, asr #8
        18bf5c:	e5c40004 	strb	r0, [r4, #4]	; fField4
        18bf60:	ea000002 	b	18bf70 <TPolygonView::CalcHiliteBounds(PolygonShape *, TRect *)+0x90>
        18bf64:	e1a00001 	mov	r0, r1
        18bf68:	e1a01004 	mov	r1, r4
        18bf6c:	eb63fd8b 	bl	1a8b5a0 <PolygonShape::$CalcBounds(TRect *)>
        18bf70:	e1a00004 	mov	r0, r4
        18bf74:	e3e01003 	mvn	r1, #3	; 0x3
        18bf78:	e1a02001 	mov	r2, r1
        18bf7c:	eb67122f 	bl	1b50840 <$InsetRect__FP4RectlT2>
        18bf80:	e5940006 	ldr	r0, [r4, #6]	; fField6
        18bf84:	e1a00820 	mov	r0, r0, lsr #16
        18bf88:	e2800004 	add	r0, r0, #4	; 0x4
        18bf8c:	e5c40007 	strb	r0, [r4, #7]
        18bf90:	e1a00440 	mov	r0, r0, asr #8
        18bf94:	e5c40006 	strb	r0, [r4, #6]	; fField6
        18bf98:	e5940004 	ldr	r0, [r4, #4]	; fField4
        18bf9c:	e1a00820 	mov	r0, r0, lsr #16
        18bfa0:	e2800004 	add	r0, r0, #4	; 0x4
        18bfa4:	e5c40005 	strb	r0, [r4, #5]
        18bfa8:	e1a00440 	mov	r0, r0, asr #8
        18bfac:	e5c40004 	strb	r0, [r4, #4]	; fField4
        18bfb0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::GetArcBounds(TRect &)
 * Address: 0018bfc4
 */
TPolygonView::GetArcBounds(TRect &) {
    /*
        18bfc4:	e1a0c00d 	mov	ip, sp
        18bfc8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        18bfcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        18bfd0:	e1a05000 	mov	r5, r0
        18bfd4:	e1a04001 	mov	r4, r1
        18bfd8:	e24dd004 	sub	sp, sp, #4	; 0x4
        18bfdc:	eb68f541 	bl	1bc94e8 <TView::$DataFrame(void)>
        18bfe0:	eb68d859 	bl	1bc214c <$AllocateRefHandle(long)>
        18bfe4:	e1a06000 	mov	r6, r0
        18bfe8:	e59f0068 	ldr	r0, [pc, #68]	; 18c058 <TPolygonView::GetArcBounds(TRect &)+0x94>
        18bfec:	e5900000 	ldr	r0, [r0]
        18bff0:	e5901000 	ldr	r1, [r0]
        18bff4:	e5960000 	ldr	r0, [r6]
        18bff8:	eb68e098 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        18bffc:	eb68d852 	bl	1bc214c <$AllocateRefHandle(long)>
        18c000:	e58d0000 	str	r0, [sp]
        18c004:	e1a00006 	mov	r0, r6
        18c008:	eb68dc6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18c00c:	e59d0000 	ldr	r0, [sp]
        18c010:	e5900000 	ldr	r0, [r0]
        18c014:	e2855010 	add	r5, r5, #16	; 0x10
        18c018:	e3300002 	teq	r0, #2	; 0x2
        18c01c:	0a00000e 	beq	18c05c <TPolygonView::GetArcBounds(TRect &)+0x98>
        18c020:	e1a01004 	mov	r1, r4
        18c024:	e1a0000d 	mov	r0, sp
        18c028:	eb642292 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        18c02c:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c030:	e5950000 	ldr	r0, [r5]
        18c034:	e58d0000 	str	r0, [sp]
        18c038:	e1a00004 	mov	r0, r4
        18c03c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18c040:	e1a01841 	mov	r1, r1, asr #16
        18c044:	e59d2000 	ldr	r2, [sp]
        18c048:	e1a02842 	mov	r2, r2, asr #16
        18c04c:	eb671625 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18c050:	e28dd004 	add	sp, sp, #4	; 0x4
        18c054:	ea000002 	b	18c064 <TPolygonView::GetArcBounds(TRect &)+0xa0>
        18c058:	00681ee0 	rsbeq	r1, r8, r0, ror #29
        18c05c:	e8951008 	ldmia	r5, {r3, ip}
        18c060:	e8841008 	stmia	r4, {r3, ip}
        18c064:	e59d0000 	ldr	r0, [sp]
        18c068:	eb68dc53 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18c06c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::SetArcBounds(TRect const &)
 * Address: 0018c070
 */
TPolygonView::SetArcBounds(TRect const &) {
    /*
        18c070:	e1a0c00d 	mov	ip, sp
        18c074:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18c078:	e24cb004 	sub	fp, ip, #4	; 0x4
        18c07c:	e1a04000 	mov	r4, r0
        18c080:	e24dd010 	sub	sp, sp, #16	; 0x10
        18c084:	e28d0008 	add	r0, sp, #8	; 0x8
        18c088:	e8911008 	ldmia	r1, {r3, ip}
        18c08c:	e8801008 	stmia	r0, {r3, ip}
        18c090:	e24dd008 	sub	sp, sp, #8	; 0x8
        18c094:	e5940010 	ldr	r0, [r4, #16]	; fField16
        18c098:	e58d0004 	str	r0, [sp, #4]	; fField4
        18c09c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18c0a0:	e2600000 	rsb	r0, r0, #0	; 0x0
        18c0a4:	e1a01800 	mov	r1, r0, lsl #16
        18c0a8:	e1a01841 	mov	r1, r1, asr #16
        18c0ac:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        18c0b0:	e2600000 	rsb	r0, r0, #0	; 0x0
        18c0b4:	e1a00800 	mov	r0, r0, lsl #16
        18c0b8:	e1a00840 	mov	r0, r0, asr #16
        18c0bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c0c0:	e5cd1003 	strb	r1, [sp, #3]
        18c0c4:	e1a01441 	mov	r1, r1, asr #8
        18c0c8:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        18c0cc:	e5cd0001 	strb	r0, [sp, #1]	; fField1
        18c0d0:	e1a00440 	mov	r0, r0, asr #8
        18c0d4:	e5cd0000 	strb	r0, [sp]
        18c0d8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18c0dc:	e58d0000 	str	r0, [sp]
        18c0e0:	e28d0010 	add	r0, sp, #16	; 0x10
        18c0e4:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18c0e8:	e1a01841 	mov	r1, r1, asr #16
        18c0ec:	e59d2000 	ldr	r2, [sp]
        18c0f0:	e1a02842 	mov	r2, r2, asr #16
        18c0f4:	eb6715fb 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18c0f8:	e28dd008 	add	sp, sp, #8	; 0x8
        18c0fc:	e28d0008 	add	r0, sp, #8	; 0x8
        18c100:	eb698da5 	bl	1bef79c <$ToObject(TRect const &)>
        18c104:	eb68d810 	bl	1bc214c <$AllocateRefHandle(long)>
        18c108:	e58d0000 	str	r0, [sp]
        18c10c:	e1a0500d 	mov	r5, sp
        18c110:	e1a00004 	mov	r0, r4
        18c114:	eb68f4f3 	bl	1bc94e8 <TView::$DataFrame(void)>
        18c118:	eb68d80b 	bl	1bc214c <$AllocateRefHandle(long)>
        18c11c:	e58d0004 	str	r0, [sp, #4]	; fField4
        18c120:	e28d0004 	add	r0, sp, #4	; 0x4
        18c124:	e59f1018 	ldr	r1, [pc, #18]	; 18c144 <TPolygonView::SetArcBounds(TRect const &)+0xd4>
        18c128:	e1a02005 	mov	r2, r5
        18c12c:	eb68e88d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        18c130:	e59d0000 	ldr	r0, [sp]
        18c134:	eb68dc20 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18c138:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18c13c:	eb68dc1e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18c140:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        18c144:	00681ee0 	rsbeq	r1, r8, r0, ror #29
    */
}

/**
 * Symbol: TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)
 * Address: 0018c1ac
 */
TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *) {
    /*
        18c1ac:	e1a0c00d 	mov	ip, sp
        18c1b0:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        18c1b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        18c1b8:	e1a06000 	mov	r6, r0
        18c1bc:	e1a05001 	mov	r5, r1
        18c1c0:	e1a04002 	mov	r4, r2
        18c1c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c1c8:	e2800010 	add	r0, r0, #16	; 0x10
        18c1cc:	e1a07000 	mov	r7, r0
        18c1d0:	e5900000 	ldr	r0, [r0]
        18c1d4:	e58d0000 	str	r0, [sp]
        18c1d8:	e1a00006 	mov	r0, r6
        18c1dc:	eb0013b4 	bl	1910b4 <TPolygonView::GetPenSize(void)>
        18c1e0:	e1a01000 	mov	r1, r0
        18c1e4:	e1a0a000 	mov	sl, r0
        18c1e8:	eb6719ce 	bl	1b52928 <$PenSize__FlT1>
        18c1ec:	e5950000 	ldr	r0, [r5]
        18c1f0:	e1a00840 	mov	r0, r0, asr #16
        18c1f4:	e330000e 	teq	r0, #14	; 0xe
        18c1f8:	1a00004e 	bne	18c338 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x18c>
        18c1fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c200:	e59f1084 	ldr	r1, [pc, #84]	; 18c28c <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0xe0>
        18c204:	e1a00006 	mov	r0, r6
        18c208:	eb68f8ce 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        18c20c:	eb68d7ce 	bl	1bc214c <$AllocateRefHandle(long)>
        18c210:	e40d0004 	str	r0, [sp], -#4	; fField4
        18c214:	e1a0000d 	mov	r0, sp
        18c218:	eb698d61 	bl	1bef7a4 <$GetPort(GrafPort **)>
        18c21c:	e59d0000 	ldr	r0, [sp]
        18c220:	e5900010 	ldr	r0, [r0, #16]	; fField16
        18c224:	e2100c0f 	ands	r0, r0, #3840	; 0xf00
        18c228:	13a00001 	movne	r0, #1	; 0x1
        18c22c:	e31000ff 	tst	r0, #255	; 0xff
        18c230:	0a000016 	beq	18c290 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0xe4>
        18c234:	e5972000 	ldr	r2, [r7]
        18c238:	e1a02842 	mov	r2, r2, asr #16
        18c23c:	e5971002 	ldr	r1, [r7, #2]	; fField2
        18c240:	e1a01841 	mov	r1, r1, asr #16
        18c244:	e28d0004 	add	r0, sp, #4	; 0x4
        18c248:	eb64a20a 	bl	1ab4a78 <$InkMakePaths__FRC6RefVarlT2>
        18c24c:	e1a06000 	mov	r6, r0
        18c250:	e3a04000 	mov	r4, #0	; 0x0
        18c254:	e5905000 	ldr	r5, [r0]
        18c258:	e3350000 	teq	r5, #0	; 0x0
        18c25c:	0a000007 	beq	18c280 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0xd4>
        18c260:	e1a00005 	mov	r0, r5
        18c264:	eb670d4a 	bl	1b4f794 <$FramePaths(paths **)>
        18c268:	e1a00005 	mov	r0, r5
        18c26c:	eb670519 	bl	1b4d6d8 <$DisposePaths(paths **)>
        18c270:	e2844001 	add	r4, r4, #1	; 0x1
        18c274:	e7965104 	ldr	r5, [r6, r4, lsl #2]	; fField2
        18c278:	e3350000 	teq	r5, #0	; 0x0
        18c27c:	1afffff7 	bne	18c260 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0xb4>
        18c280:	e1a00006 	mov	r0, r6
        18c284:	eb69538a 	bl	1be10b4 <$DisposPtr>
        18c288:	ea000026 	b	18c328 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x17c>
        18c28c:	00683220 	rsbeq	r3, r8, r0, lsr #4
        18c290:	e3a05000 	mov	r5, #0	; 0x0
        18c294:	e24dd008 	sub	sp, sp, #8	; 0x8
        18c298:	e1a0000d 	mov	r0, sp
        18c29c:	eb698d40 	bl	1bef7a4 <$GetPort(GrafPort **)>
        18c2a0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18c2a4:	e5900024 	ldr	r0, [r0, #36]	; fField36
        18c2a8:	e58d0000 	str	r0, [sp]
        18c2ac:	e1a04000 	mov	r4, r0
        18c2b0:	e5900000 	ldr	r0, [r0]
        18c2b4:	e5900000 	ldr	r0, [r0]
        18c2b8:	e1a00840 	mov	r0, r0, asr #16
        18c2bc:	e330000c 	teq	r0, #12	; 0xc
        18c2c0:	1a00000e 	bne	18c300 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x154>
        18c2c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c2c8:	e1a0000d 	mov	r0, sp
        18c2cc:	eb698d34 	bl	1bef7a4 <$GetPort(GrafPort **)>
        18c2d0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18c2d4:	e5900040 	ldr	r0, [r0, #64]
        18c2d8:	e3300000 	teq	r0, #0	; 0x0
        18c2dc:	1a000007 	bne	18c300 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x154>
        18c2e0:	eb6704ea 	bl	1b4d690 <$CheckPic(void)>
        18c2e4:	e3300000 	teq	r0, #0	; 0x0
        18c2e8:	1a000004 	bne	18c300 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x154>
        18c2ec:	e1a01007 	mov	r1, r7
        18c2f0:	e5940000 	ldr	r0, [r4]
        18c2f4:	e2800004 	add	r0, r0, #4	; 0x4
        18c2f8:	eb641997 	bl	1a9295c <TRect::$Encloses( const(TRect const &))>
        18c2fc:	e1a05000 	mov	r5, r0
        18c300:	e1a03005 	mov	r3, r5
        18c304:	e92d0008 	stmdb	sp!, {r3}
        18c308:	e5973000 	ldr	r3, [r7]
        18c30c:	e1a03843 	mov	r3, r3, asr #16
        18c310:	e5972002 	ldr	r2, [r7, #2]	; fField2
        18c314:	e1a02842 	mov	r2, r2, asr #16
        18c318:	e1a0100a 	mov	r1, sl
        18c31c:	e28d000c 	add	r0, sp, #12	; 0xc
        18c320:	eb64a1d2 	bl	1ab4a70 <$InkDraw__FRC6RefVarUllT3Uc>
        18c324:	e28dd008 	add	sp, sp, #8	; 0x8
        18c328:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        18c32c:	eb68dba2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18c330:	e28dd004 	add	sp, sp, #4	; 0x4
        18c334:	ea0000d1 	b	18c680 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x4d4>
        18c338:	e1a00005 	mov	r0, r5
        18c33c:	eb643a85 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        18c340:	e2857004 	add	r7, r5, #4	; 0x4
        18c344:	e59f80fc 	ldr	r8, [pc, #fc]	; 18c448 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x29c>
        18c348:	e3300000 	teq	r0, #0	; 0x0
        18c34c:	0a000057 	beq	18c4b0 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x304>
        18c350:	e24dd010 	sub	sp, sp, #16	; 0x10
        18c354:	e1a0100d 	mov	r1, sp
        18c358:	e1a00006 	mov	r0, r6
        18c35c:	eb646c08 	bl	1aa7384 <TPolygonView::$GetArcBounds(TRect &)>
        18c360:	e5950000 	ldr	r0, [r5]
        18c364:	e1a00840 	mov	r0, r0, asr #16
        18c368:	e330000d 	teq	r0, #13	; 0xd
        18c36c:	1a000036 	bne	18c44c <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x2a0>
        18c370:	e28d3008 	add	r3, sp, #8	; 0x8
        18c374:	e92d0008 	stmdb	sp!, {r3}
        18c378:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c37c:	e5950002 	ldr	r0, [r5, #2]	; fField2
        18c380:	e1a00840 	mov	r0, r0, asr #16
        18c384:	e0851100 	add	r1, r5, r0, lsl #2
        18c388:	e5912002 	ldr	r2, [r1, #2]	; fField2
        18c38c:	e1a02822 	mov	r2, r2, lsr #16
        18c390:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        18c394:	e0820000 	add	r0, r2, r0
        18c398:	e1a00800 	mov	r0, r0, lsl #16
        18c39c:	e1a00840 	mov	r0, r0, asr #16
        18c3a0:	e5912000 	ldr	r2, [r1]
        18c3a4:	e1a02822 	mov	r2, r2, lsr #16
        18c3a8:	e59d101a 	ldr	r1, [sp, #26]
        18c3ac:	e0821001 	add	r1, r2, r1
        18c3b0:	e1a01801 	mov	r1, r1, lsl #16
        18c3b4:	e1a01841 	mov	r1, r1, asr #16
        18c3b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c3bc:	e5cd0003 	strb	r0, [sp, #3]
        18c3c0:	e1a00440 	mov	r0, r0, asr #8
        18c3c4:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18c3c8:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18c3cc:	e1a00441 	mov	r0, r1, asr #8
        18c3d0:	e5cd0000 	strb	r0, [sp]
        18c3d4:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18c3d8:	e40d0004 	str	r0, [sp], -#4	; fField4
        18c3dc:	e5970002 	ldr	r0, [r7, #2]	; fField2
        18c3e0:	e1a00820 	mov	r0, r0, lsr #16
        18c3e4:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        18c3e8:	e0800001 	add	r0, r0, r1
        18c3ec:	e1a00800 	mov	r0, r0, lsl #16
        18c3f0:	e1a00840 	mov	r0, r0, asr #16
        18c3f4:	e5972000 	ldr	r2, [r7]
        18c3f8:	e1a02822 	mov	r2, r2, lsr #16
        18c3fc:	e59d101e 	ldr	r1, [sp, #30]
        18c400:	e0821001 	add	r1, r2, r1
        18c404:	e1a01801 	mov	r1, r1, lsl #16
        18c408:	e1a01841 	mov	r1, r1, asr #16
        18c40c:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c410:	e5cd0003 	strb	r0, [sp, #3]
        18c414:	e1a00440 	mov	r0, r0, asr #8
        18c418:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18c41c:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18c420:	e1a00441 	mov	r0, r1, asr #8
        18c424:	e5cd0000 	strb	r0, [sp]
        18c428:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18c42c:	e58d0000 	str	r0, [sp]
        18c430:	e28d3018 	add	r3, sp, #24	; 0x18
        18c434:	e28d000c 	add	r0, sp, #12	; 0xc
        18c438:	e8bd0006 	ldmia	sp!, {r1, r2}
        18c43c:	eb646bd7 	bl	1aa73a0 <$CalcArcAngles__FRC5TRect6TPointT2PlT4>
        18c440:	e28dd004 	add	sp, sp, #4	; 0x4
        18c444:	ea000004 	b	18c45c <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x2b0>
        18c448:	0c100cc4 	ldceq	12, cr0, [r0], -#784
        18c44c:	e3a00000 	mov	r0, #0	; 0x0
        18c450:	e58d000c 	str	r0, [sp, #12]	; fField12
        18c454:	e3a00f5a 	mov	r0, #360	; 0x168
        18c458:	e58d0008 	str	r0, [sp, #8]	; fField8
        18c45c:	e1a01008 	mov	r1, r8
        18c460:	e1a0000d 	mov	r0, sp
        18c464:	eb64530a 	bl	1aa1094 <TRect::$Scale(TTransform const &)>
        18c468:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        18c46c:	e1a0180a 	mov	r1, sl, lsl #16
        18c470:	e1a01841 	mov	r1, r1, asr #16
        18c474:	e0800001 	add	r0, r0, r1
        18c478:	e5cd0005 	strb	r0, [sp, #5]
        18c47c:	e1a00440 	mov	r0, r0, asr #8
        18c480:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        18c484:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18c488:	e0800001 	add	r0, r0, r1
        18c48c:	e5cd0007 	strb	r0, [sp, #7]
        18c490:	e1a00440 	mov	r0, r0, asr #8
        18c494:	e5cd0006 	strb	r0, [sp, #6]	; fField6
        18c498:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        18c49c:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        18c4a0:	e1a0000d 	mov	r0, sp
        18c4a4:	eb670cb7 	bl	1b4f788 <$FrameArc__FP4RectlT2>
        18c4a8:	e28dd010 	add	sp, sp, #16	; 0x10
        18c4ac:	ea000073 	b	18c680 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x4d4>
        18c4b0:	e24dd018 	sub	sp, sp, #24	; 0x18
        18c4b4:	e1a06007 	mov	r6, r7
        18c4b8:	e1a0000d 	mov	r0, sp
        18c4bc:	eb63ebc7 	bl	1a873e0 <TRegionVar::$__ct(void)>
        18c4c0:	e3a09000 	mov	r9, #0	; 0x0
        18c4c4:	e3340000 	teq	r4, #0	; 0x0
        18c4c8:	159d0000 	ldrne	r0, [sp]
        18c4cc:	1b670cb9 	blne	1b4f7b8 <$GetClip(Region **)>
        18c4d0:	e5950002 	ldr	r0, [r5, #2]	; fField2
        18c4d4:	e1a00840 	mov	r0, r0, asr #16
        18c4d8:	e2507001 	subs	r7, r0, #1	; 0x1
        18c4dc:	e3a05000 	mov	r5, #0	; 0x0
        18c4e0:	4a000062 	bmi	18c670 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x4c4>
        18c4e4:	e1a0a80a 	mov	sl, sl, lsl #16
        18c4e8:	e1a0a84a 	mov	sl, sl, asr #16
        18c4ec:	e3340000 	teq	r4, #0	; 0x0
        18c4f0:	0a000031 	beq	18c5bc <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x410>
        18c4f4:	e3350000 	teq	r5, #0	; 0x0
        18c4f8:	05940000 	ldreq	r0, [r4]
        18c4fc:	058d0014 	streq	r0, [sp, #20]
        18c500:	0a000006 	beq	18c520 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x374>
        18c504:	e1350007 	teq	r5, r7
        18c508:	15960000 	ldrne	r0, [r6]
        18c50c:	051b302c 	ldreq	r3, [fp, -#44]
        18c510:	05930000 	ldreq	r0, [r3]
        18c514:	e3350001 	teq	r5, #1	; 0x1
        18c518:	e58d0014 	str	r0, [sp, #20]
        18c51c:	0a000001 	beq	18c528 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x37c>
        18c520:	e1350007 	teq	r5, r7
        18c524:	1a000026 	bne	18c5c4 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x418>
        18c528:	e24dd00c 	sub	sp, sp, #12	; 0xc
        18c52c:	e5960000 	ldr	r0, [r6]
        18c530:	e40d0004 	str	r0, [sp], -#4	; fField4
        18c534:	e5160004 	ldr	r0, [r6, -#4]	; fField4
        18c538:	e58d0000 	str	r0, [sp]
        18c53c:	e28d2008 	add	r2, sp, #8	; 0x8
        18c540:	e5bd1004 	ldr	r1, [sp, #4]!	; fField4
        18c544:	e28dd004 	add	sp, sp, #4	; 0x4
        18c548:	eb6718fa 	bl	1b52938 <$Pt2Rect__F5PointT1P4Rect>
        18c54c:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c550:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        18c554:	e58d0000 	str	r0, [sp]
        18c558:	e28d0004 	add	r0, sp, #4	; 0x4
        18c55c:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18c560:	e1a01841 	mov	r1, r1, asr #16
        18c564:	e59d2000 	ldr	r2, [sp]
        18c568:	e1a02842 	mov	r2, r2, asr #16
        18c56c:	eb6714dd 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18c570:	e28dd004 	add	sp, sp, #4	; 0x4
        18c574:	e1a01008 	mov	r1, r8
        18c578:	e1a0000d 	mov	r0, sp
        18c57c:	eb6452c4 	bl	1aa1094 <TRect::$Scale(TTransform const &)>
        18c580:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        18c584:	e080000a 	add	r0, r0, sl
        18c588:	e5cd0005 	strb	r0, [sp, #5]
        18c58c:	e1a00440 	mov	r0, r0, asr #8
        18c590:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        18c594:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18c598:	e080000a 	add	r0, r0, sl
        18c59c:	e5cd0007 	strb	r0, [sp, #7]
        18c5a0:	e1a00440 	mov	r0, r0, asr #8
        18c5a4:	e5cd0006 	strb	r0, [sp, #6]	; fField6
        18c5a8:	e1a0000d 	mov	r0, sp
        18c5ac:	eb670439 	bl	1b4d698 <$ClipRect(Rect *)>
        18c5b0:	e3a09001 	mov	r9, #1	; 0x1
        18c5b4:	e28dd008 	add	sp, sp, #8	; 0x8
        18c5b8:	ea000001 	b	18c5c4 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x418>
        18c5bc:	e5960000 	ldr	r0, [r6]
        18c5c0:	e58d0014 	str	r0, [sp, #20]
        18c5c4:	e59d1016 	ldr	r1, [sp, #22]
        18c5c8:	e59d001a 	ldr	r0, [sp, #26]
        18c5cc:	e0810000 	add	r0, r1, r0
        18c5d0:	e5cd0015 	strb	r0, [sp, #21]
        18c5d4:	e1a00440 	mov	r0, r0, asr #8
        18c5d8:	e5cd0014 	strb	r0, [sp, #20]
        18c5dc:	e59d1014 	ldr	r1, [sp, #20]
        18c5e0:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        18c5e4:	e0810000 	add	r0, r1, r0
        18c5e8:	e5cd0017 	strb	r0, [sp, #23]
        18c5ec:	e1a00440 	mov	r0, r0, asr #8
        18c5f0:	e5cd0016 	strb	r0, [sp, #22]
        18c5f4:	e1a01008 	mov	r1, r8
        18c5f8:	e28d0014 	add	r0, sp, #20	; 0x14
        18c5fc:	eb6452a5 	bl	1aa1098 <TPoint::$Scale(TTransform const &)>
        18c600:	e3350000 	teq	r5, #0	; 0x0
        18c604:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c608:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        18c60c:	1a000007 	bne	18c630 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x484>
        18c610:	e58d0000 	str	r0, [sp]
        18c614:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        18c618:	e1a00840 	mov	r0, r0, asr #16
        18c61c:	e59d1000 	ldr	r1, [sp]
        18c620:	e1a01841 	mov	r1, r1, asr #16
        18c624:	eb6714a5 	bl	1b518c0 <$MoveTo__FlT1>
        18c628:	e28dd004 	add	sp, sp, #4	; 0x4
        18c62c:	ea00000b 	b	18c660 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x4b4>
        18c630:	e58d0000 	str	r0, [sp]
        18c634:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        18c638:	e1a00840 	mov	r0, r0, asr #16
        18c63c:	e59d1000 	ldr	r1, [sp]
        18c640:	e1a01841 	mov	r1, r1, asr #16
        18c644:	eb67108c 	bl	1b5087c <$LineTo__FlT1>
        18c648:	e28dd004 	add	sp, sp, #4	; 0x4
        18c64c:	e3390000 	teq	r9, #0	; 0x0
        18c650:	0a000002 	beq	18c660 <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x4b4>
        18c654:	e59d0000 	ldr	r0, [sp]
        18c658:	eb671cdf 	bl	1b539dc <$SetClip(Region **)>
        18c65c:	e3a09000 	mov	r9, #0	; 0x0
        18c660:	e2855001 	add	r5, r5, #1	; 0x1
        18c664:	e2866004 	add	r6, r6, #4	; 0x4
        18c668:	e1550007 	cmp	r5, r7
        18c66c:	daffff9e 	ble	18c4ec <TPolygonView::DrawData(PolygonShape *, TPoint *, TPoint *)+0x340>
        18c670:	e1a0000d 	mov	r0, sp
        18c674:	e3a01000 	mov	r1, #0	; 0x0
        18c678:	eb63ef71 	bl	1a88444 <TRegionVar::$__dt(void)>
        18c67c:	e28dd018 	add	sp, sp, #24	; 0x18
        18c680:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::RealDraw(TRect &)
 * Address: 0018c684
 */
TPolygonView::RealDraw(TRect &) {
    /*
        18c684:	e1a0c00d 	mov	ip, sp
        18c688:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18c68c:	e24cb004 	sub	fp, ip, #4	; 0x4
        18c690:	e1a04000 	mov	r4, r0
        18c694:	e24dd008 	sub	sp, sp, #8	; 0x8
        18c698:	eb644602 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18c69c:	e1a01000 	mov	r1, r0
        18c6a0:	e1a0000d 	mov	r0, sp
        18c6a4:	eb68d289 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18c6a8:	e1a0100d 	mov	r1, sp
        18c6ac:	e28d0004 	add	r0, sp, #4	; 0x4
        18c6b0:	eb68d287 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18c6b4:	e1a0000d 	mov	r0, sp
        18c6b8:	e3a01000 	mov	r1, #0	; 0x0
        18c6bc:	eb68d68f 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18c6c0:	e28d0004 	add	r0, sp, #4	; 0x4
        18c6c4:	eb68d692 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18c6c8:	e1a01000 	mov	r1, r0
        18c6cc:	e1a00004 	mov	r0, r4
        18c6d0:	e3a03000 	mov	r3, #0	; 0x0
        18c6d4:	e3a02000 	mov	r2, #0	; 0x0
        18c6d8:	eb646b31 	bl	1aa73a4 <TPolygonView::$DrawData(PolygonShape *, TPoint *, TPoint *)>
        18c6dc:	e28d0004 	add	r0, sp, #4	; 0x4
        18c6e0:	e3a01000 	mov	r1, #0	; 0x0
        18c6e4:	eb68d685 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18c6e8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::DrawHilitedData(void)
 * Address: 0018c6ec
 */
TPolygonView::DrawHilitedData(void) {
    /*
        18c6ec:	e1a0c00d 	mov	ip, sp
        18c6f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        18c6f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        18c6f8:	e1a04000 	mov	r4, r0
        18c6fc:	eb649475 	bl	1ab18d8 <TView::$FirstHilite(void)>
        18c700:	eb68d691 	bl	1bc214c <$AllocateRefHandle(long)>
        18c704:	e1a05000 	mov	r5, r0
        18c708:	e5900000 	ldr	r0, [r0]
        18c70c:	e3300002 	teq	r0, #2	; 0x2
        18c710:	1a000002 	bne	18c720 <TPolygonView::DrawHilitedData(void)+0x34>
        18c714:	e1a00004 	mov	r0, r4
        18c718:	eb641474 	bl	1a918f0 <TDataView::$DrawHilitedData(void)>
        18c71c:	ea000029 	b	18c7c8 <TPolygonView::DrawHilitedData(void)+0xdc>
        18c720:	e24dd008 	sub	sp, sp, #8	; 0x8
        18c724:	e1a00004 	mov	r0, r4
        18c728:	eb6445de 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18c72c:	e1a01000 	mov	r1, r0
        18c730:	e1a0000d 	mov	r0, sp
        18c734:	eb68d265 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18c738:	e1a0100d 	mov	r1, sp
        18c73c:	e28d0004 	add	r0, sp, #4	; 0x4
        18c740:	eb68d263 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18c744:	e1a0000d 	mov	r0, sp
        18c748:	e3a01000 	mov	r1, #0	; 0x0
        18c74c:	eb68d66b 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18c750:	e28d0004 	add	r0, sp, #4	; 0x4
        18c754:	eb68d66e 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18c758:	e1a06000 	mov	r6, r0
        18c75c:	e5950000 	ldr	r0, [r5]
        18c760:	eb644e1e 	bl	1a9ffe0 <$RefToAddress(long)>
        18c764:	e3a02000 	mov	r2, #0	; 0x0
        18c768:	e3a03000 	mov	r3, #0	; 0x0
        18c76c:	e5901014 	ldr	r1, [r0, #20]
        18c770:	e3510000 	cmp	r1, #0	; 0x0
        18c774:	da000001 	ble	18c780 <TPolygonView::DrawHilitedData(void)+0x94>
        18c778:	e3510801 	cmp	r1, #65536	; 0x10000
        18c77c:	ba000004 	blt	18c794 <TPolygonView::DrawHilitedData(void)+0xa8>
        18c780:	e5901018 	ldr	r1, [r0, #24]	; fField24
        18c784:	e3510000 	cmp	r1, #0	; 0x0
        18c788:	da000007 	ble	18c7ac <TPolygonView::DrawHilitedData(void)+0xc0>
        18c78c:	e3510801 	cmp	r1, #65536	; 0x10000
        18c790:	aa000005 	bge	18c7ac <TPolygonView::DrawHilitedData(void)+0xc0>
        18c794:	e590100c 	ldr	r1, [r0, #12]	; fField12
        18c798:	e0861101 	add	r1, r6, r1, lsl #2
        18c79c:	e2812004 	add	r2, r1, #4	; 0x4
        18c7a0:	e5901010 	ldr	r1, [r0, #16]	; fField16
        18c7a4:	e0861101 	add	r1, r6, r1, lsl #2
        18c7a8:	e2813004 	add	r3, r1, #4	; 0x4
        18c7ac:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        18c7b0:	e1a00004 	mov	r0, r4
        18c7b4:	eb646afa 	bl	1aa73a4 <TPolygonView::$DrawData(PolygonShape *, TPoint *, TPoint *)>
        18c7b8:	e28d0004 	add	r0, sp, #4	; 0x4
        18c7bc:	e3a01000 	mov	r1, #0	; 0x0
        18c7c0:	eb68d64e 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18c7c4:	e28dd008 	add	sp, sp, #8	; 0x8
        18c7c8:	e1a00005 	mov	r0, r5
        18c7cc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        18c7d0:	ea68da79 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TPolygonView::DrawHilites(unsigned char)
 * Address: 0018c7d4
 */
TPolygonView::DrawHilites(unsigned char) {
    /*
        18c7d4:	e1a0c00d 	mov	ip, sp
        18c7d8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        18c7dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        18c7e0:	e1a04000 	mov	r4, r0
        18c7e4:	e20160ff 	and	r6, r1, #255	; 0xff
        18c7e8:	eb64943a 	bl	1ab18d8 <TView::$FirstHilite(void)>
        18c7ec:	eb68d656 	bl	1bc214c <$AllocateRefHandle(long)>
        18c7f0:	e1a07000 	mov	r7, r0
        18c7f4:	e5900000 	ldr	r0, [r0]
        18c7f8:	e3300002 	teq	r0, #2	; 0x2
        18c7fc:	1a000002 	bne	18c80c <TPolygonView::DrawHilites(unsigned char)+0x38>
        18c800:	e1a00007 	mov	r0, r7
        18c804:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        18c808:	ea68da6b 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18c80c:	eb644df3 	bl	1a9ffe0 <$RefToAddress(long)>
        18c810:	e5b05020 	ldr	r5, [r0, #32]!	; fField32
        18c814:	e1a00004 	mov	r0, r4
        18c818:	eb001225 	bl	1910b4 <TPolygonView::GetPenSize(void)>
        18c81c:	e1a08000 	mov	r8, r0
        18c820:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c824:	e2840010 	add	r0, r4, #16	; 0x10
        18c828:	e5901000 	ldr	r1, [r0]
        18c82c:	e58d1000 	str	r1, [sp]
        18c830:	e1b01006 	movs	r1, r6
        18c834:	e59f610c 	ldr	r6, [pc, #10c]	; 18c948 <TPolygonView::DrawHilites(unsigned char)+0x174>	; fField10
        18c838:	0a000043 	beq	18c94c <TPolygonView::DrawHilites(unsigned char)+0x178>
        18c83c:	e1a00005 	mov	r0, r5
        18c840:	eb643943 	bl	1a9ad54 <PolygonShape::$IsCurvy(void)>
        18c844:	e3300000 	teq	r0, #0	; 0x0
        18c848:	1a000106 	bne	18cc68 <TPolygonView::DrawHilites(unsigned char)+0x494>
        18c84c:	e2854004 	add	r4, r5, #4	; 0x4
        18c850:	e3a08000 	mov	r8, #0	; 0x0
        18c854:	e5950002 	ldr	r0, [r5, #2]	; fField2
        18c858:	e1a00840 	mov	r0, r0, asr #16
        18c85c:	e3500000 	cmp	r0, #0	; 0x0
        18c860:	da000100 	ble	18cc68 <TPolygonView::DrawHilites(unsigned char)+0x494>
        18c864:	e24dd008 	sub	sp, sp, #8	; 0x8
        18c868:	e5940002 	ldr	r0, [r4, #2]	; fField2
        18c86c:	e1a00820 	mov	r0, r0, lsr #16
        18c870:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        18c874:	e0800001 	add	r0, r0, r1
        18c878:	e1a00800 	mov	r0, r0, lsl #16
        18c87c:	e1a00840 	mov	r0, r0, asr #16
        18c880:	e5942000 	ldr	r2, [r4]
        18c884:	e1a02822 	mov	r2, r2, lsr #16
        18c888:	e59d100a 	ldr	r1, [sp, #10]	; fField10
        18c88c:	e0821001 	add	r1, r2, r1
        18c890:	e1a01801 	mov	r1, r1, lsl #16
        18c894:	e1a01841 	mov	r1, r1, asr #16
        18c898:	e24dd004 	sub	sp, sp, #4	; 0x4
        18c89c:	e5cd0003 	strb	r0, [sp, #3]
        18c8a0:	e1a00440 	mov	r0, r0, asr #8
        18c8a4:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18c8a8:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18c8ac:	e1a00441 	mov	r0, r1, asr #8
        18c8b0:	e5cd0000 	strb	r0, [sp]
        18c8b4:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18c8b8:	e58d0000 	str	r0, [sp]
        18c8bc:	e1a0000d 	mov	r0, sp
        18c8c0:	e1a01006 	mov	r1, r6
        18c8c4:	eb6451f3 	bl	1aa1098 <TPoint::$Scale(TTransform const &)>
        18c8c8:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        18c8cc:	e2400003 	sub	r0, r0, #3	; 0x3
        18c8d0:	e5cd0001 	strb	r0, [sp, #1]	; fField1
        18c8d4:	e1a00440 	mov	r0, r0, asr #8
        18c8d8:	e5cd0000 	strb	r0, [sp]
        18c8dc:	e59d0000 	ldr	r0, [sp]
        18c8e0:	e2400003 	sub	r0, r0, #3	; 0x3
        18c8e4:	e5cd0003 	strb	r0, [sp, #3]
        18c8e8:	e1a00440 	mov	r0, r0, asr #8
        18c8ec:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18c8f0:	e59d0002 	ldr	r0, [sp, #2]	; fField2
        18c8f4:	e2800006 	add	r0, r0, #6	; 0x6
        18c8f8:	e5cd0005 	strb	r0, [sp, #5]
        18c8fc:	e1a00440 	mov	r0, r0, asr #8
        18c900:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        18c904:	e59d0000 	ldr	r0, [sp]
        18c908:	e2800006 	add	r0, r0, #6	; 0x6
        18c90c:	e5cd0007 	strb	r0, [sp, #7]
        18c910:	e1a00440 	mov	r0, r0, asr #8
        18c914:	e5cd0006 	strb	r0, [sp, #6]	; fField6
        18c918:	e3a00000 	mov	r0, #0	; 0x0
        18c91c:	eb670baf 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        18c920:	e1a01000 	mov	r1, r0
        18c924:	e1a0000d 	mov	r0, sp
        18c928:	eb67078d 	bl	1b4e764 <$FillOval(Rect *, PixelMap **)>
        18c92c:	e2844004 	add	r4, r4, #4	; 0x4
        18c930:	e28dd008 	add	sp, sp, #8	; 0x8
        18c934:	e2888001 	add	r8, r8, #1	; 0x1
        18c938:	e5950002 	ldr	r0, [r5, #2]	; fField2
        18c93c:	e1580840 	cmp	r8, r0, asr #16
        18c940:	baffffc7 	blt	18c864 <TPolygonView::DrawHilites(unsigned char)+0x90>
        18c944:	ea0000c7 	b	18cc68 <TPolygonView::DrawHilites(unsigned char)+0x494>
        18c948:	0c100cc4 	ldceq	12, cr0, [r0], -#784
        18c94c:	e5951000 	ldr	r1, [r5]
        18c950:	e1a01841 	mov	r1, r1, asr #16
        18c954:	e331000e 	teq	r1, #14	; 0xe
        18c958:	1a00001d 	bne	18c9d4 <TPolygonView::DrawHilites(unsigned char)+0x200>
        18c95c:	e24dd008 	sub	sp, sp, #8	; 0x8
        18c960:	e8905000 	ldmia	r0, {ip, lr}
        18c964:	e88d5000 	stmia	sp, {ip, lr}
        18c968:	e1a0000d 	mov	r0, sp
        18c96c:	e3e01003 	mvn	r1, #3	; 0x3
        18c970:	e1a02001 	mov	r2, r1
        18c974:	eb670fb1 	bl	1b50840 <$InsetRect__FP4RectlT2>
        18c978:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18c97c:	e1a01808 	mov	r1, r8, lsl #16
        18c980:	e1a01841 	mov	r1, r1, asr #16
        18c984:	e0800001 	add	r0, r0, r1
        18c988:	e5cd0007 	strb	r0, [sp, #7]
        18c98c:	e1a00440 	mov	r0, r0, asr #8
        18c990:	e5cd0006 	strb	r0, [sp, #6]	; fField6
        18c994:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        18c998:	e0800001 	add	r0, r0, r1
        18c99c:	e5cd0005 	strb	r0, [sp, #5]
        18c9a0:	e1a00440 	mov	r0, r0, asr #8
        18c9a4:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        18c9a8:	e1a01006 	mov	r1, r6
        18c9ac:	e1a0000d 	mov	r0, sp
        18c9b0:	eb6451b7 	bl	1aa1094 <TRect::$Scale(TTransform const &)>
        18c9b4:	e3a00004 	mov	r0, #4	; 0x4
        18c9b8:	eb670b88 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        18c9bc:	e1a03000 	mov	r3, r0
        18c9c0:	e3a01008 	mov	r1, #8	; 0x8
        18c9c4:	e1a02001 	mov	r2, r1
        18c9c8:	e1a0000d 	mov	r0, sp
        18c9cc:	eb670769 	bl	1b4e778 <$FillRoundRect__FP4RectlT2PP8PixelMap>
        18c9d0:	ea0000a3 	b	18cc64 <TPolygonView::DrawHilites(unsigned char)+0x490>
        18c9d4:	e1a00005 	mov	r0, r5
        18c9d8:	eb6438de 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        18c9dc:	e3300000 	teq	r0, #0	; 0x0
        18c9e0:	0a00006f 	beq	18cba4 <TPolygonView::DrawHilites(unsigned char)+0x3d0>
        18c9e4:	e24dd010 	sub	sp, sp, #16	; 0x10
        18c9e8:	e1a0100d 	mov	r1, sp
        18c9ec:	e1a00004 	mov	r0, r4
        18c9f0:	eb646a63 	bl	1aa7384 <TPolygonView::$GetArcBounds(TRect &)>
        18c9f4:	e5950000 	ldr	r0, [r5]
        18c9f8:	e1a00840 	mov	r0, r0, asr #16
        18c9fc:	e330000d 	teq	r0, #13	; 0xd
        18ca00:	1a000036 	bne	18cae0 <TPolygonView::DrawHilites(unsigned char)+0x30c>
        18ca04:	e28d3008 	add	r3, sp, #8	; 0x8
        18ca08:	e92d0008 	stmdb	sp!, {r3}
        18ca0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        18ca10:	e5950002 	ldr	r0, [r5, #2]	; fField2
        18ca14:	e1a00840 	mov	r0, r0, asr #16
        18ca18:	e0851100 	add	r1, r5, r0, lsl #2
        18ca1c:	e5912002 	ldr	r2, [r1, #2]	; fField2
        18ca20:	e1a02822 	mov	r2, r2, lsr #16
        18ca24:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        18ca28:	e0820000 	add	r0, r2, r0
        18ca2c:	e1a00800 	mov	r0, r0, lsl #16
        18ca30:	e1a00840 	mov	r0, r0, asr #16
        18ca34:	e5911000 	ldr	r1, [r1]
        18ca38:	e1a01821 	mov	r1, r1, lsr #16
        18ca3c:	e59d201a 	ldr	r2, [sp, #26]
        18ca40:	e0811002 	add	r1, r1, r2
        18ca44:	e1a01801 	mov	r1, r1, lsl #16
        18ca48:	e1a01841 	mov	r1, r1, asr #16
        18ca4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        18ca50:	e5cd0003 	strb	r0, [sp, #3]
        18ca54:	e1a00440 	mov	r0, r0, asr #8
        18ca58:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18ca5c:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18ca60:	e1a00441 	mov	r0, r1, asr #8
        18ca64:	e5cd0000 	strb	r0, [sp]
        18ca68:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18ca6c:	e40d0004 	str	r0, [sp], -#4	; fField4
        18ca70:	e2850004 	add	r0, r5, #4	; 0x4
        18ca74:	e5902002 	ldr	r2, [r0, #2]	; fField2
        18ca78:	e1a02822 	mov	r2, r2, lsr #16
        18ca7c:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        18ca80:	e0821001 	add	r1, r2, r1
        18ca84:	e1a01801 	mov	r1, r1, lsl #16
        18ca88:	e1a01841 	mov	r1, r1, asr #16
        18ca8c:	e5900000 	ldr	r0, [r0]
        18ca90:	e1a00820 	mov	r0, r0, lsr #16
        18ca94:	e59d201e 	ldr	r2, [sp, #30]
        18ca98:	e0800002 	add	r0, r0, r2
        18ca9c:	e1a00800 	mov	r0, r0, lsl #16
        18caa0:	e1a00840 	mov	r0, r0, asr #16
        18caa4:	e24dd004 	sub	sp, sp, #4	; 0x4
        18caa8:	e5cd1003 	strb	r1, [sp, #3]
        18caac:	e1a01441 	mov	r1, r1, asr #8
        18cab0:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        18cab4:	e5cd0001 	strb	r0, [sp, #1]	; fField1
        18cab8:	e1a00440 	mov	r0, r0, asr #8
        18cabc:	e5cd0000 	strb	r0, [sp]
        18cac0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18cac4:	e58d0000 	str	r0, [sp]
        18cac8:	e28d3018 	add	r3, sp, #24	; 0x18
        18cacc:	e28d000c 	add	r0, sp, #12	; 0xc
        18cad0:	e8bd0006 	ldmia	sp!, {r1, r2}
        18cad4:	eb646a31 	bl	1aa73a0 <$CalcArcAngles__FRC5TRect6TPointT2PlT4>
        18cad8:	e28dd004 	add	sp, sp, #4	; 0x4
        18cadc:	ea000003 	b	18caf0 <TPolygonView::DrawHilites(unsigned char)+0x31c>
        18cae0:	e3a00000 	mov	r0, #0	; 0x0
        18cae4:	e58d000c 	str	r0, [sp, #12]	; fField12
        18cae8:	e3a00f5a 	mov	r0, #360	; 0x168
        18caec:	e58d0008 	str	r0, [sp, #8]	; fField8
        18caf0:	e1a01006 	mov	r1, r6
        18caf4:	e1a0000d 	mov	r0, sp
        18caf8:	eb645165 	bl	1aa1094 <TRect::$Scale(TTransform const &)>
        18cafc:	e59d1000 	ldr	r1, [sp]
        18cb00:	e2480008 	sub	r0, r8, #8	; 0x8
        18cb04:	e1a00800 	mov	r0, r0, lsl #16
        18cb08:	e1a00840 	mov	r0, r0, asr #16
        18cb0c:	e0800fa0 	add	r0, r0, r0, lsr #31
        18cb10:	e1a000c0 	mov	r0, r0, asr #1
        18cb14:	e0811000 	add	r1, r1, r0
        18cb18:	e5cd1003 	strb	r1, [sp, #3]
        18cb1c:	e1a01441 	mov	r1, r1, asr #8
        18cb20:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        18cb24:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18cb28:	e0800001 	add	r0, r0, r1
        18cb2c:	e5cd0001 	strb	r0, [sp, #1]	; fField1
        18cb30:	e1a00440 	mov	r0, r0, asr #8
        18cb34:	e5cd0000 	strb	r0, [sp]
        18cb38:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18cb3c:	e2881008 	add	r1, r8, #8	; 0x8
        18cb40:	e1a01801 	mov	r1, r1, lsl #16
        18cb44:	e1a01841 	mov	r1, r1, asr #16
        18cb48:	e0811fa1 	add	r1, r1, r1, lsr #31
        18cb4c:	e1a010c1 	mov	r1, r1, asr #1
        18cb50:	e0800001 	add	r0, r0, r1
        18cb54:	e5cd0007 	strb	r0, [sp, #7]
        18cb58:	e1a00440 	mov	r0, r0, asr #8
        18cb5c:	e5cd0006 	strb	r0, [sp, #6]	; fField6
        18cb60:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        18cb64:	e0800001 	add	r0, r0, r1
        18cb68:	e5cd0005 	strb	r0, [sp, #5]
        18cb6c:	e1a00440 	mov	r0, r0, asr #8
        18cb70:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        18cb74:	e3a01008 	mov	r1, #8	; 0x8
        18cb78:	e3a00008 	mov	r0, #8	; 0x8
        18cb7c:	eb671769 	bl	1b52928 <$PenSize__FlT1>
        18cb80:	e3a00004 	mov	r0, #4	; 0x4
        18cb84:	eb670b15 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        18cb88:	eb671b98 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        18cb8c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        18cb90:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        18cb94:	e1a0000d 	mov	r0, sp
        18cb98:	eb670afa 	bl	1b4f788 <$FrameArc__FP4RectlT2>
        18cb9c:	e28dd010 	add	sp, sp, #16	; 0x10
        18cba0:	ea000030 	b	18cc68 <TPolygonView::DrawHilites(unsigned char)+0x494>
        18cba4:	e24dd008 	sub	sp, sp, #8	; 0x8
        18cba8:	e2858004 	add	r8, r5, #4	; 0x4
        18cbac:	e3a04000 	mov	r4, #0	; 0x0
        18cbb0:	e5950002 	ldr	r0, [r5, #2]	; fField2
        18cbb4:	e1a00840 	mov	r0, r0, asr #16
        18cbb8:	e3500000 	cmp	r0, #0	; 0x0
        18cbbc:	da000028 	ble	18cc64 <TPolygonView::DrawHilites(unsigned char)+0x490>
        18cbc0:	e1a01008 	mov	r1, r8
        18cbc4:	e2888004 	add	r8, r8, #4	; 0x4
        18cbc8:	e5912002 	ldr	r2, [r1, #2]	; fField2
        18cbcc:	e1a02822 	mov	r2, r2, lsr #16
        18cbd0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        18cbd4:	e0820000 	add	r0, r2, r0
        18cbd8:	e1a00800 	mov	r0, r0, lsl #16
        18cbdc:	e1a00840 	mov	r0, r0, asr #16
        18cbe0:	e5912000 	ldr	r2, [r1]
        18cbe4:	e1a02822 	mov	r2, r2, lsr #16
        18cbe8:	e59d100a 	ldr	r1, [sp, #10]	; fField10
        18cbec:	e0821001 	add	r1, r2, r1
        18cbf0:	e1a01801 	mov	r1, r1, lsl #16
        18cbf4:	e1a01841 	mov	r1, r1, asr #16
        18cbf8:	e24dd004 	sub	sp, sp, #4	; 0x4
        18cbfc:	e5cd0003 	strb	r0, [sp, #3]
        18cc00:	e1a00440 	mov	r0, r0, asr #8
        18cc04:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18cc08:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18cc0c:	e1a00441 	mov	r0, r1, asr #8
        18cc10:	e5cd0000 	strb	r0, [sp]
        18cc14:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18cc18:	e1a01006 	mov	r1, r6
        18cc1c:	e58d0004 	str	r0, [sp, #4]	; fField4
        18cc20:	e28d0004 	add	r0, sp, #4	; 0x4
        18cc24:	eb64511b 	bl	1aa1098 <TPoint::$Scale(TTransform const &)>
        18cc28:	e3340000 	teq	r4, #0	; 0x0
        18cc2c:	0a000006 	beq	18cc4c <TPolygonView::DrawHilites(unsigned char)+0x478>
        18cc30:	e3a00004 	mov	r0, #4	; 0x4
        18cc34:	eb670ae9 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        18cc38:	e1a02000 	mov	r2, r0
        18cc3c:	e28d1004 	add	r1, sp, #4	; 0x4
        18cc40:	e1a0000d 	mov	r0, sp
        18cc44:	e3a03000 	mov	r3, #0	; 0x0
        18cc48:	eb64132a 	bl	1a918f8 <$DrawHiliteLine__FRC6TPointT1PP8PixelMapUc>
        18cc4c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18cc50:	e2844001 	add	r4, r4, #1	; 0x1
        18cc54:	e58d0000 	str	r0, [sp]
        18cc58:	e5950002 	ldr	r0, [r5, #2]	; fField2
        18cc5c:	e1540840 	cmp	r4, r0, asr #16
        18cc60:	baffffd6 	blt	18cbc0 <TPolygonView::DrawHilites(unsigned char)+0x3ec>
        18cc64:	e28dd008 	add	sp, sp, #8	; 0x8
        18cc68:	e28dd004 	add	sp, sp, #4	; 0x4
        18cc6c:	eafffee3 	b	18c800 <TPolygonView::DrawHilites(unsigned char)+0x2c>
    */
}

/**
 * Symbol: TPolygonView::DrawScaledData(TRect const &, TRect const &, TRect *)
 * Address: 0018cc70
 */
TPolygonView::DrawScaledData(TRect const &, TRect const &, TRect *) {
    /*
        18cc70:	e1a0c00d 	mov	ip, sp
        18cc74:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        18cc78:	e24cb004 	sub	fp, ip, #4	; 0x4
        18cc7c:	e1a05000 	mov	r5, r0
        18cc80:	e1a07001 	mov	r7, r1
        18cc84:	e1a06002 	mov	r6, r2
        18cc88:	e1a04003 	mov	r4, r3
        18cc8c:	e1a01003 	mov	r1, r3
        18cc90:	e5902000 	ldr	r2, [r0]
        18cc94:	e1a0e00f 	mov	lr, pc
        18cc98:	e282ff41 	add	pc, r2, #260	; 0x104
        18cc9c:	e24dd024 	sub	sp, sp, #36	; 0x24
        18cca0:	e2850010 	add	r0, r5, #16	; 0x10
        18cca4:	e28d101c 	add	r1, sp, #28	; 0x1c
        18cca8:	e8905000 	ldmia	r0, {ip, lr}
        18ccac:	e8815000 	stmia	r1, {ip, lr}
        18ccb0:	e1a02006 	mov	r2, r6
        18ccb4:	e1a01007 	mov	r1, r7
        18ccb8:	e1a0000d 	mov	r0, sp
        18ccbc:	e3a03000 	mov	r3, #0	; 0x0
        18ccc0:	eb645525 	bl	1aa215c <TTransform::$Setup(TRect const *, TRect const *, unsigned char)>
        18ccc4:	e1a0100d 	mov	r1, sp
        18ccc8:	e28d001c 	add	r0, sp, #28	; 0x1c
        18cccc:	eb6450f0 	bl	1aa1094 <TRect::$Scale(TTransform const &)>
        18ccd0:	e28d001c 	add	r0, sp, #28	; 0x1c
        18ccd4:	e3e01003 	mvn	r1, #3	; 0x3
        18ccd8:	e1a02001 	mov	r2, r1
        18ccdc:	eb670ed7 	bl	1b50840 <$InsetRect__FP4RectlT2>
        18cce0:	e28d001c 	add	r0, sp, #28	; 0x1c
        18cce4:	e8905000 	ldmia	r0, {ip, lr}
        18cce8:	e8845000 	stmia	r4, {ip, lr}
        18ccec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::ScrubSegment(TRect const &, unsigned char)
 * Address: 0018cd38
 */
TPolygonView::ScrubSegment(TRect const &, unsigned char) {
    /*
        18cd38:	e1a0c00d 	mov	ip, sp
        18cd3c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        18cd40:	e24cb004 	sub	fp, ip, #4	; 0x4
        18cd44:	e1a04000 	mov	r4, r0
        18cd48:	e202a0ff 	and	sl, r2, #255	; 0xff
        18cd4c:	e24dd008 	sub	sp, sp, #8	; 0x8
        18cd50:	e3a08000 	mov	r8, #0	; 0x0
        18cd54:	e1a0300d 	mov	r3, sp
        18cd58:	e28d2004 	add	r2, sp, #4	; 0x4
        18cd5c:	eb646992 	bl	1aa73ac <TPolygonView::$HitSegment(TRect const &, long *, long *)>
        18cd60:	e3300000 	teq	r0, #0	; 0x0
        18cd64:	0a000053 	beq	18ceb8 <TPolygonView::ScrubSegment(TRect const &, unsigned char)+0x180>
        18cd68:	e24dd008 	sub	sp, sp, #8	; 0x8
        18cd6c:	e1a00004 	mov	r0, r4
        18cd70:	eb64444c 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18cd74:	e1a01000 	mov	r1, r0
        18cd78:	e1a0000d 	mov	r0, sp
        18cd7c:	eb68d0d3 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18cd80:	e1a0100d 	mov	r1, sp
        18cd84:	e28d0004 	add	r0, sp, #4	; 0x4
        18cd88:	eb68d0d1 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18cd8c:	e1a0000d 	mov	r0, sp
        18cd90:	e3a01000 	mov	r1, #0	; 0x0
        18cd94:	eb68d4d9 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18cd98:	e28d0004 	add	r0, sp, #4	; 0x4
        18cd9c:	eb68d4dc 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18cda0:	e1a06000 	mov	r6, r0
        18cda4:	eb6437ea 	bl	1a9ad54 <PolygonShape::$IsCurvy(void)>
        18cda8:	e3300000 	teq	r0, #0	; 0x0
        18cdac:	0a000019 	beq	18ce18 <TPolygonView::ScrubSegment(TRect const &, unsigned char)+0xe0>
        18cdb0:	e3a09000 	mov	r9, #0	; 0x0
        18cdb4:	e3a07000 	mov	r7, #0	; 0x0
        18cdb8:	e28d5008 	add	r5, sp, #8	; 0x8
        18cdbc:	e8950021 	ldmia	r5, {r0, r5}
        18cdc0:	e1350000 	teq	r5, r0
        18cdc4:	0a000011 	beq	18ce10 <TPolygonView::ScrubSegment(TRect const &, unsigned char)+0xd8>
        18cdc8:	e0860105 	add	r0, r6, r5, lsl #2
        18cdcc:	e2800004 	add	r0, r0, #4	; 0x4
        18cdd0:	e2801004 	add	r1, r0, #4	; 0x4
        18cdd4:	eb0030fa 	bl	1991c4 <CheapDistance__FRC6TPointT1>
        18cdd8:	e0807007 	add	r7, r0, r7
        18cddc:	e357001e 	cmp	r7, #30	; 0x1e
        18cde0:	c3a09001 	movgt	r9, #1	; 0x1
        18cde4:	ca000009 	bgt	18ce10 <TPolygonView::ScrubSegment(TRect const &, unsigned char)+0xd8>
        18cde8:	e2855001 	add	r5, r5, #1	; 0x1
        18cdec:	e5960002 	ldr	r0, [r6, #2]	; fField2
        18cdf0:	e1350840 	teq	r5, r0, asr #16
        18cdf4:	1a000002 	bne	18ce04 <TPolygonView::ScrubSegment(TRect const &, unsigned char)+0xcc>
        18cdf8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        18cdfc:	e1350000 	teq	r5, r0
        18ce00:	13a05000 	movne	r5, #0	; 0x0
        18ce04:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        18ce08:	e1350000 	teq	r5, r0
        18ce0c:	1affffed 	bne	18cdc8 <TPolygonView::ScrubSegment(TRect const &, unsigned char)+0x90>
        18ce10:	e3390000 	teq	r9, #0	; 0x0
        18ce14:	0a000023 	beq	18cea8 <TPolygonView::ScrubSegment(TRect const &, unsigned char)+0x170>
        18ce18:	e3a08003 	mov	r8, #3	; 0x3
        18ce1c:	e33a0000 	teq	sl, #0	; 0x0
        18ce20:	0a000020 	beq	18cea8 <TPolygonView::ScrubSegment(TRect const &, unsigned char)+0x170>
        18ce24:	e59dc00c 	ldr	ip, [sp, #12]	; fField12
        18ce28:	e086010c 	add	r0, r6, ip, lsl #2
        18ce2c:	e2800004 	add	r0, r0, #4	; 0x4
        18ce30:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        18ce34:	e0862101 	add	r2, r6, r1, lsl #2
        18ce38:	e282e004 	add	lr, r2, #4	; 0x4
        18ce3c:	e3a03801 	mov	r3, #65536	; 0x10000
        18ce40:	e2433001 	sub	r3, r3, #1	; 0x1
        18ce44:	e3a02000 	mov	r2, #0	; 0x0
        18ce48:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        18ce4c:	e1a0300c 	mov	r3, ip
        18ce50:	e1a0200e 	mov	r2, lr
        18ce54:	e1a01000 	mov	r1, r0
        18ce58:	e1a00004 	mov	r0, r4
        18ce5c:	eb644c70 	bl	1aa0024 <TPolygonView::$RemovePoints(TPoint *, TPoint *, long, long, long, long)>
        18ce60:	e28dd00c 	add	sp, sp, #12	; 0xc
        18ce64:	e3300000 	teq	r0, #0	; 0x0
        18ce68:	0a00000e 	beq	18cea8 <TPolygonView::ScrubSegment(TRect const &, unsigned char)+0x170>
        18ce6c:	e5b42004 	ldr	r2, [r4, #4]!	; fField4
        18ce70:	e5941018 	ldr	r1, [r4, #24]	; fField24
        18ce74:	e24dd004 	sub	sp, sp, #4	; 0x4
        18ce78:	e59f0040 	ldr	r0, [pc, #40]	; 18cec0 <TPolygonView::ScrubSegment(TRect const &, unsigned char)+0x188>
        18ce7c:	e5904000 	ldr	r4, [r0]
        18ce80:	e3a0003f 	mov	r0, #63	; 0x3f
        18ce84:	eb64652d 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        18ce88:	eb68d4af 	bl	1bc214c <$AllocateRefHandle(long)>
        18ce8c:	e58d0000 	str	r0, [sp]
        18ce90:	e1a0100d 	mov	r1, sp
        18ce94:	e1a00004 	mov	r0, r4
        18ce98:	eb640e66 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        18ce9c:	e59d0000 	ldr	r0, [sp]
        18cea0:	eb68d8c5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18cea4:	e28dd004 	add	sp, sp, #4	; 0x4
        18cea8:	e28d0004 	add	r0, sp, #4	; 0x4
        18ceac:	e3a01000 	mov	r1, #0	; 0x0
        18ceb0:	eb68d492 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18ceb4:	e28dd008 	add	sp, sp, #8	; 0x8
        18ceb8:	e20800ff 	and	r0, r8, #255	; 0xff
        18cebc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18cec0:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TPolygonView::HitSegment(TRect const &, long *, long *)
 * Address: 0018cec4
 */
TPolygonView::HitSegment(TRect const &, long *, long *) {
    /*
        18cec4:	e1a0c00d 	mov	ip, sp
        18cec8:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        18cecc:	e24cb004 	sub	fp, ip, #4	; 0x4
        18ced0:	e1a05000 	mov	r5, r0
        18ced4:	e1a04001 	mov	r4, r1
        18ced8:	e2800010 	add	r0, r0, #16	; 0x10
        18cedc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        18cee0:	eb643fdc 	bl	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
        18cee4:	e3300000 	teq	r0, #0	; 0x0
        18cee8:	0a000077 	beq	18d0cc <TPolygonView::HitSegment(TRect const &, long *, long *)+0x208>
        18ceec:	e24dd018 	sub	sp, sp, #24	; 0x18
        18cef0:	e1a00005 	mov	r0, r5
        18cef4:	eb6443eb 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18cef8:	e1a01000 	mov	r1, r0
        18cefc:	e1a0000d 	mov	r0, sp
        18cf00:	eb68d072 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18cf04:	e1a0100d 	mov	r1, sp
        18cf08:	e28d0014 	add	r0, sp, #20	; 0x14
        18cf0c:	eb68d070 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18cf10:	e1a0000d 	mov	r0, sp
        18cf14:	e3a01000 	mov	r1, #0	; 0x0
        18cf18:	eb68d478 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18cf1c:	e28d0014 	add	r0, sp, #20	; 0x14
        18cf20:	eb68d47b 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18cf24:	e1a08000 	mov	r8, r0
        18cf28:	e2809004 	add	r9, r0, #4	; 0x4
        18cf2c:	e3a07000 	mov	r7, #0	; 0x0
        18cf30:	e3a05000 	mov	r5, #0	; 0x0
        18cf34:	e5900000 	ldr	r0, [r0]
        18cf38:	e1a00840 	mov	r0, r0, asr #16
        18cf3c:	eb64691b 	bl	1aa73b0 <$IsClosed(long)>
        18cf40:	e3300000 	teq	r0, #0	; 0x0
        18cf44:	03a0a002 	moveq	sl, #2	; 0x2
        18cf48:	13a0a003 	movne	sl, #3	; 0x3
        18cf4c:	e3a06001 	mov	r6, #1	; 0x1
        18cf50:	e5980002 	ldr	r0, [r8, #2]	; fField2
        18cf54:	e1a00840 	mov	r0, r0, asr #16
        18cf58:	e3500001 	cmp	r0, #1	; 0x1
        18cf5c:	da000048 	ble	18d084 <TPolygonView::HitSegment(TRect const &, long *, long *)+0x1c0>
        18cf60:	e24dd008 	sub	sp, sp, #8	; 0x8
        18cf64:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
        18cf68:	e2411501 	sub	r1, r1, #4194304	; 0x400000
        18cf6c:	e5cd1005 	strb	r1, [sp, #5]
        18cf70:	e3e0007f 	mvn	r0, #127	; 0x7f
        18cf74:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        18cf78:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18cf7c:	e5cd0000 	strb	r0, [sp]
        18cf80:	e1a01009 	mov	r1, r9
        18cf84:	e2899004 	add	r9, r9, #4	; 0x4
        18cf88:	e1a0000d 	mov	r0, sp
        18cf8c:	e5911000 	ldr	r1, [r1]
        18cf90:	eb6460bd 	bl	1aa528c <TRect::$Union(TPoint)>
        18cf94:	e1a0000d 	mov	r0, sp
        18cf98:	e5991000 	ldr	r1, [r9]
        18cf9c:	eb6460ba 	bl	1aa528c <TRect::$Union(TPoint)>
        18cfa0:	e24dd004 	sub	sp, sp, #4	; 0x4
        18cfa4:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        18cfa8:	e5900000 	ldr	r0, [r0]
        18cfac:	e58d0000 	str	r0, [sp]
        18cfb0:	e28d0004 	add	r0, sp, #4	; 0x4
        18cfb4:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18cfb8:	e1a01841 	mov	r1, r1, asr #16
        18cfbc:	e59d2000 	ldr	r2, [sp]
        18cfc0:	e1a02842 	mov	r2, r2, asr #16
        18cfc4:	eb671247 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18cfc8:	e28dd004 	add	sp, sp, #4	; 0x4
        18cfcc:	e1a01004 	mov	r1, r4
        18cfd0:	e1a0000d 	mov	r0, sp
        18cfd4:	eb6409ec 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        18cfd8:	e3500032 	cmp	r0, #50	; 0x32
        18cfdc:	d3a00000 	movle	r0, #0	; 0x0
        18cfe0:	c3a00001 	movgt	r0, #1	; 0x1
        18cfe4:	e1300007 	teq	r0, r7
        18cfe8:	0a00000f 	beq	18d02c <TPolygonView::HitSegment(TRect const &, long *, long *)+0x168>
        18cfec:	e155000a 	cmp	r5, sl
        18cff0:	ba000004 	blt	18d008 <TPolygonView::HitSegment(TRect const &, long *, long *)+0x144>
        18cff4:	e28d001c 	add	r0, sp, #28	; 0x1c
        18cff8:	e3a01000 	mov	r1, #0	; 0x0
        18cffc:	eb68d43f 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d000:	e3a00000 	mov	r0, #0	; 0x0
        18d004:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18d008:	e2462001 	sub	r2, r6, #1	; 0x1
        18d00c:	e1a00005 	mov	r0, r5
        18d010:	e2855001 	add	r5, r5, #1	; 0x1
        18d014:	e28d100c 	add	r1, sp, #12	; 0xc
        18d018:	e7812100 	str	r2, [r1, r0, lsl #2]	; fField2
        18d01c:	e3370000 	teq	r7, #0	; 0x0
        18d020:	13a00000 	movne	r0, #0	; 0x0
        18d024:	03a00001 	moveq	r0, #1	; 0x1
        18d028:	e20070ff 	and	r7, r0, #255	; 0xff
        18d02c:	e28dd008 	add	sp, sp, #8	; 0x8
        18d030:	e2866001 	add	r6, r6, #1	; 0x1
        18d034:	e5980002 	ldr	r0, [r8, #2]	; fField2
        18d038:	e1560840 	cmp	r6, r0, asr #16
        18d03c:	baffffc7 	blt	18cf60 <TPolygonView::HitSegment(TRect const &, long *, long *)+0x9c>
        18d040:	e3370000 	teq	r7, #0	; 0x0
        18d044:	0a000006 	beq	18d064 <TPolygonView::HitSegment(TRect const &, long *, long *)+0x1a0>
        18d048:	e5980002 	ldr	r0, [r8, #2]	; fField2
        18d04c:	e1a00840 	mov	r0, r0, asr #16
        18d050:	e2401001 	sub	r1, r0, #1	; 0x1
        18d054:	e1a00005 	mov	r0, r5
        18d058:	e2855001 	add	r5, r5, #1	; 0x1
        18d05c:	e28d2004 	add	r2, sp, #4	; 0x4
        18d060:	e7821100 	str	r1, [r2, r0, lsl #2]	; fField2
        18d064:	e3350002 	teq	r5, #2	; 0x2
        18d068:	059d0004 	ldreq	r0, [sp, #4]	; fField4
        18d06c:	0a000005 	beq	18d088 <TPolygonView::HitSegment(TRect const &, long *, long *)+0x1c4>
        18d070:	e3350004 	teq	r5, #4	; 0x4
        18d074:	059d0004 	ldreq	r0, [sp, #4]	; fField4
        18d078:	03300000 	teqeq	r0, #0	; 0x0
        18d07c:	059d000c 	ldreq	r0, [sp, #12]	; fField12
        18d080:	0a000000 	beq	18d088 <TPolygonView::HitSegment(TRect const &, long *, long *)+0x1c4>
        18d084:	e3e00000 	mvn	r0, #0	; 0x0
        18d088:	e51b2030 	ldr	r2, [fp, -#48]
        18d08c:	e5820000 	str	r0, [r2]
        18d090:	e3500000 	cmp	r0, #0	; 0x0
        18d094:	ba000008 	blt	18d0bc <TPolygonView::HitSegment(TRect const &, long *, long *)+0x1f8>
        18d098:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        18d09c:	e51b302c 	ldr	r3, [fp, -#44]
        18d0a0:	e3a04001 	mov	r4, #1	; 0x1
        18d0a4:	e5830000 	str	r0, [r3]
        18d0a8:	e28d0014 	add	r0, sp, #20	; 0x14
        18d0ac:	e3a01000 	mov	r1, #0	; 0x0
        18d0b0:	eb68d412 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d0b4:	e1a00004 	mov	r0, r4
        18d0b8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18d0bc:	e28d0014 	add	r0, sp, #20	; 0x14
        18d0c0:	e3a01000 	mov	r1, #0	; 0x0
        18d0c4:	eb68d40d 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d0c8:	e28dd018 	add	sp, sp, #24	; 0x18
        18d0cc:	e3a00000 	mov	r0, #0	; 0x0
        18d0d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::MakePointsCommand(unsigned long, long)
 * Address: 0018d0d4
 */
TPolygonView::MakePointsCommand(unsigned long, long) {
    /*
        18d0d4:	e1a0c00d 	mov	ip, sp
        18d0d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18d0dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        18d0e0:	e1a03001 	mov	r3, r1
        18d0e4:	e1a04002 	mov	r4, r2
        18d0e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        18d0ec:	e1a01000 	mov	r1, r0
        18d0f0:	e1a00003 	mov	r0, r3
        18d0f4:	e3a02302 	mov	r2, #134217728	; 0x8000000
        18d0f8:	eb646490 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        18d0fc:	eb68d412 	bl	1bc214c <$AllocateRefHandle(long)>
        18d100:	e1a01104 	mov	r1, r4, lsl #2
        18d104:	e58d0004 	str	r0, [sp, #4]	; fField4
        18d108:	e59f0030 	ldr	r0, [pc, #30]	; 18d140 <TPolygonView::MakePointsCommand(unsigned long, long)+0x6c>
        18d10c:	eb68d40a 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        18d110:	eb68d40d 	bl	1bc214c <$AllocateRefHandle(long)>
        18d114:	e58d0000 	str	r0, [sp]
        18d118:	e1a0100d 	mov	r1, sp
        18d11c:	e28d0004 	add	r0, sp, #4	; 0x4
        18d120:	eb646495 	bl	1aa637c <$CommandSetPoints__FRC6RefVarT1>
        18d124:	e59d0000 	ldr	r0, [sp]
        18d128:	eb68d823 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18d12c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18d130:	e5904000 	ldr	r4, [r0]
        18d134:	eb68d820 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18d138:	e1a00004 	mov	r0, r4
        18d13c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        18d140:	00683f38 	rsbeq	r3, r8, r8, lsr pc
    */
}

/**
 * Symbol: TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)
 * Address: 0018d144
 */
TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long) {
    /*
        18d144:	e1a0c00d 	mov	ip, sp
        18d148:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        18d14c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        18d150:	e24cb014 	sub	fp, ip, #20	; 0x14
        18d154:	e1a04000 	mov	r4, r0
        18d158:	e59b901c 	ldr	r9, [fp, #28]	; fField28
        18d15c:	e59ba018 	ldr	sl, [fp, #24]	; fField24
        18d160:	e24dd010 	sub	sp, sp, #16	; 0x10
        18d164:	eb64434f 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18d168:	e1a01000 	mov	r1, r0
        18d16c:	e1a0000d 	mov	r0, sp
        18d170:	eb68cfd6 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18d174:	e1a0100d 	mov	r1, sp
        18d178:	e28d0004 	add	r0, sp, #4	; 0x4
        18d17c:	eb68cfd4 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18d180:	e1a0000d 	mov	r0, sp
        18d184:	e3a01000 	mov	r1, #0	; 0x0
        18d188:	eb68d3dc 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d18c:	e28d0004 	add	r0, sp, #4	; 0x4
        18d190:	eb68d3df 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18d194:	e1a05000 	mov	r5, r0
        18d198:	e3a00801 	mov	r0, #65536	; 0x10000
        18d19c:	e2400001 	sub	r0, r0, #1	; 0x1
        18d1a0:	e15a0000 	cmp	sl, r0
        18d1a4:	a3a0a801 	movge	sl, #65536	; 0x10000
        18d1a8:	e1590000 	cmp	r9, r0
        18d1ac:	a3a09801 	movge	r9, #65536	; 0x10000
        18d1b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        18d1b4:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        18d1b8:	e08a0800 	add	r0, sl, r0, lsl #16
        18d1bc:	e59b2014 	ldr	r2, [fp, #20]
        18d1c0:	e2421001 	sub	r1, r2, #1	; 0x1
        18d1c4:	e0891801 	add	r1, r9, r1, lsl #16
        18d1c8:	e5952002 	ldr	r2, [r5, #2]	; fField2
        18d1cc:	e1a02842 	mov	r2, r2, asr #16
        18d1d0:	e2423001 	sub	r3, r2, #1	; 0x1
        18d1d4:	e1a02803 	mov	r2, r3, lsl #16
        18d1d8:	e3500000 	cmp	r0, #0	; 0x0
        18d1dc:	d3a0c000 	movle	ip, #0	; 0x0
        18d1e0:	c3a0c001 	movgt	ip, #1	; 0x1
        18d1e4:	e20c80ff 	and	r8, ip, #255	; 0xff
        18d1e8:	e1510002 	cmp	r1, r2
        18d1ec:	a3a0c000 	movge	ip, #0	; 0x0
        18d1f0:	b3a0c001 	movlt	ip, #1	; 0x1
        18d1f4:	e20cc0ff 	and	ip, ip, #255	; 0xff
        18d1f8:	e58dc004 	str	ip, [sp, #4]	; fField4
        18d1fc:	e240c001 	sub	ip, r0, #1	; 0x1
        18d200:	e28cc801 	add	ip, ip, #65536	; 0x10000
        18d204:	e1a0784c 	mov	r7, ip, asr #16
        18d208:	e1a06841 	mov	r6, r1, asr #16
        18d20c:	e58d3000 	str	r3, [sp]
        18d210:	e5953000 	ldr	r3, [r5]
        18d214:	e1a03843 	mov	r3, r3, asr #16
        18d218:	e333000e 	teq	r3, #14	; 0xe
        18d21c:	0a000002 	beq	18d22c <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0xe8>
        18d220:	e3300000 	teq	r0, #0	; 0x0
        18d224:	01310002 	teqeq	r1, r2
        18d228:	1a000005 	bne	18d244 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x100>
        18d22c:	e3a04001 	mov	r4, #1	; 0x1
        18d230:	e28d000c 	add	r0, sp, #12	; 0xc
        18d234:	e3a01000 	mov	r1, #0	; 0x0
        18d238:	eb68d3b0 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d23c:	e1a00004 	mov	r0, r4
        18d240:	ea000005 	b	18d25c <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x118>
        18d244:	e1300001 	teq	r0, r1
        18d248:	1a000004 	bne	18d260 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x11c>
        18d24c:	e28d000c 	add	r0, sp, #12	; 0xc
        18d250:	e3a01000 	mov	r1, #0	; 0x0
        18d254:	eb68d3a9 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d258:	e3a00000 	mov	r0, #0	; 0x0
        18d25c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18d260:	e24dd010 	sub	sp, sp, #16	; 0x10
        18d264:	e2840010 	add	r0, r4, #16	; 0x10
        18d268:	e58d0024 	str	r0, [sp, #36]	; fField36
        18d26c:	e28d1008 	add	r1, sp, #8	; 0x8
        18d270:	e8905000 	ldmia	r0, {ip, lr}
        18d274:	e8815000 	stmia	r1, {ip, lr}
        18d278:	e1a00005 	mov	r0, r5
        18d27c:	eb6436b5 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        18d280:	e3300000 	teq	r0, #0	; 0x0
        18d284:	11a0100d 	movne	r1, sp
        18d288:	11a00004 	movne	r0, r4
        18d28c:	1b64683c 	blne	1aa7384 <TPolygonView::$GetArcBounds(TRect &)>
        18d290:	e59d0014 	ldr	r0, [sp, #20]
        18d294:	e59f10d4 	ldr	r1, [pc, #d4]	; 18d370 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x22c>
        18d298:	e3300000 	teq	r0, #0	; 0x0
        18d29c:	e58d1020 	str	r1, [sp, #32]	; fField32
        18d2a0:	0a0000ea 	beq	18d650 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x50c>
        18d2a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        18d2a8:	e28d0004 	add	r0, sp, #4	; 0x4
        18d2ac:	e594101c 	ldr	r1, [r4, #28]	; fField28
        18d2b0:	eb036893 	bl	267504 <TView::ContentsOrigin(void)>
        18d2b4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18d2b8:	e2600000 	rsb	r0, r0, #0	; 0x0
        18d2bc:	e1a00800 	mov	r0, r0, lsl #16
        18d2c0:	e1a00840 	mov	r0, r0, asr #16
        18d2c4:	e59d1006 	ldr	r1, [sp, #6]	; fField6
        18d2c8:	e2611000 	rsb	r1, r1, #0	; 0x0
        18d2cc:	e1a01801 	mov	r1, r1, lsl #16
        18d2d0:	e1a01841 	mov	r1, r1, asr #16
        18d2d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        18d2d8:	e5cd0003 	strb	r0, [sp, #3]
        18d2dc:	e1a00440 	mov	r0, r0, asr #8
        18d2e0:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18d2e4:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18d2e8:	e1a00441 	mov	r0, r1, asr #8
        18d2ec:	e5cd0000 	strb	r0, [sp]
        18d2f0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        18d2f4:	e58d0000 	str	r0, [sp]
        18d2f8:	e28d0010 	add	r0, sp, #16	; 0x10
        18d2fc:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18d300:	e1a01841 	mov	r1, r1, asr #16
        18d304:	e59d2000 	ldr	r2, [sp]
        18d308:	e1a02842 	mov	r2, r2, asr #16
        18d30c:	eb671175 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18d310:	e28dd004 	add	sp, sp, #4	; 0x4
        18d314:	e1a00005 	mov	r0, r5
        18d318:	eb64368e 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        18d31c:	e3300000 	teq	r0, #0	; 0x0
        18d320:	13a0200d 	movne	r2, #13	; 0xd
        18d324:	1a000004 	bne	18d33c <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x1f8>
        18d328:	e1a00005 	mov	r0, r5
        18d32c:	eb643688 	bl	1a9ad54 <PolygonShape::$IsCurvy(void)>
        18d330:	e3300000 	teq	r0, #0	; 0x0
        18d334:	03a02005 	moveq	r2, #5	; 0x5
        18d338:	13a02007 	movne	r2, #7	; 0x7
        18d33c:	e3a00000 	mov	r0, #0	; 0x0
        18d340:	e82d0005 	stmda	sp!, {r0, r2}
        18d344:	e3380000 	teq	r8, #0	; 0x0
        18d348:	e40d0004 	str	r0, [sp], -#4	; fField4
        18d34c:	0a000004 	beq	18d364 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x220>
        18d350:	e5950000 	ldr	r0, [r5]
        18d354:	e1a00840 	mov	r0, r0, asr #16
        18d358:	eb646814 	bl	1aa73b0 <$IsClosed(long)>
        18d35c:	e3300000 	teq	r0, #0	; 0x0
        18d360:	1a000003 	bne	18d374 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x230>
        18d364:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        18d368:	e58d0000 	str	r0, [sp]
        18d36c:	ea00000c 	b	18d3a4 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x260>
        18d370:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        18d374:	e3a00001 	mov	r0, #1	; 0x1
        18d378:	e3a08000 	mov	r8, #0	; 0x0
        18d37c:	e1a03009 	mov	r3, r9
        18d380:	e58d0004 	str	r0, [sp, #4]	; fField4
        18d384:	e58d7000 	str	r7, [sp]
        18d388:	e1a0100a 	mov	r1, sl
        18d38c:	e28b2010 	add	r2, fp, #16	; 0x10
        18d390:	e8920005 	ldmia	r2, {r0, r2}
        18d394:	eb646803 	bl	1aa73a8 <$LessOrEq__FlN31>
        18d398:	e3300000 	teq	r0, #0	; 0x0
        18d39c:	13a00001 	movne	r0, #1	; 0x1
        18d3a0:	158d0008 	strne	r0, [sp, #8]	; fField8
        18d3a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        18d3a8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        18d3ac:	e3300000 	teq	r0, #0	; 0x0
        18d3b0:	059d0008 	ldreq	r0, [sp, #8]	; fField8
        18d3b4:	00400006 	subeq	r0, r0, r6
        18d3b8:	159d3028 	ldrne	r3, [sp, #40]
        18d3bc:	10430006 	subne	r0, r3, r6
        18d3c0:	10800007 	addne	r0, r0, r7
        18d3c4:	e280a001 	add	sl, r0, #1	; 0x1
        18d3c8:	e3a02302 	mov	r2, #134217728	; 0x8000000
        18d3cc:	e3a0003d 	mov	r0, #61	; 0x3d
        18d3d0:	e594101c 	ldr	r1, [r4, #28]	; fField28
        18d3d4:	eb6463d9 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        18d3d8:	eb68d35b 	bl	1bc214c <$AllocateRefHandle(long)>
        18d3dc:	e58d0004 	str	r0, [sp, #4]	; fField4
        18d3e0:	e1a00004 	mov	r0, r4
        18d3e4:	eb000f32 	bl	1910b4 <TPolygonView::GetPenSize(void)>
        18d3e8:	e1a03000 	mov	r3, r0
        18d3ec:	e92d0008 	stmdb	sp!, {r3}
        18d3f0:	e2850004 	add	r0, r5, #4	; 0x4
        18d3f4:	e28d3024 	add	r3, sp, #36	; 0x24
        18d3f8:	e1a0100a 	mov	r1, sl
        18d3fc:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        18d400:	eb643a6d 	bl	1a9bdbc <$MakePolygonForm__FP6TPointlT2RC5TRectT2>
        18d404:	e28dd004 	add	sp, sp, #4	; 0x4
        18d408:	eb68d34f 	bl	1bc214c <$AllocateRefHandle(long)>
        18d40c:	e58d0000 	str	r0, [sp]
        18d410:	e1a0100d 	mov	r1, sp
        18d414:	e28d0004 	add	r0, sp, #4	; 0x4
        18d418:	eb6463d1 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        18d41c:	e59d0000 	ldr	r0, [sp]
        18d420:	eb68d765 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18d424:	e24dd008 	sub	sp, sp, #8	; 0x8
        18d428:	e28d000c 	add	r0, sp, #12	; 0xc
        18d42c:	eb6463cb 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        18d430:	eb68d345 	bl	1bc214c <$AllocateRefHandle(long)>
        18d434:	e1a09000 	mov	r9, r0
        18d438:	e59f0098 	ldr	r0, [pc, #98]	; 18d4d8 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x394>
        18d43c:	e5900000 	ldr	r0, [r0]
        18d440:	e5901000 	ldr	r1, [r0]
        18d444:	e5990000 	ldr	r0, [r9]
        18d448:	eb68db84 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        18d44c:	e1a01000 	mov	r1, r0
        18d450:	e1a0000d 	mov	r0, sp
        18d454:	eb68cf1d 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18d458:	e1a0100d 	mov	r1, sp
        18d45c:	e28d0004 	add	r0, sp, #4	; 0x4
        18d460:	eb68cf1b 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18d464:	e1a0000d 	mov	r0, sp
        18d468:	e3a01000 	mov	r1, #0	; 0x0
        18d46c:	eb68d323 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d470:	e1a00009 	mov	r0, r9
        18d474:	eb68d750 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18d478:	e28d0004 	add	r0, sp, #4	; 0x4
        18d47c:	eb68d324 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18d480:	e1a09000 	mov	r9, r0
        18d484:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        18d488:	e3300000 	teq	r0, #0	; 0x0
        18d48c:	0a000012 	beq	18d4dc <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x398>
        18d490:	e24dd004 	sub	sp, sp, #4	; 0x4
        18d494:	e59d3034 	ldr	r3, [sp, #52]
        18d498:	e0430006 	sub	r0, r3, r6
        18d49c:	e2800001 	add	r0, r0, #1	; 0x1
        18d4a0:	e58d0000 	str	r0, [sp]
        18d4a4:	e1a02100 	mov	r2, r0, lsl #2
        18d4a8:	e2891004 	add	r1, r9, #4	; 0x4
        18d4ac:	e0850106 	add	r0, r5, r6, lsl #2
        18d4b0:	e2800004 	add	r0, r0, #4	; 0x4
        18d4b4:	eb6946a6 	bl	1bdef54 <$BlockMove>
        18d4b8:	e1a02107 	mov	r2, r7, lsl #2
        18d4bc:	e59d0000 	ldr	r0, [sp]
        18d4c0:	e0890100 	add	r0, r9, r0, lsl #2
        18d4c4:	e2801004 	add	r1, r0, #4	; 0x4
        18d4c8:	e2850008 	add	r0, r5, #8	; 0x8
        18d4cc:	eb6946a0 	bl	1bdef54 <$BlockMove>
        18d4d0:	e28dd004 	add	sp, sp, #4	; 0x4
        18d4d4:	ea000005 	b	18d4f0 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x3ac>
        18d4d8:	00683f18 	rsbeq	r3, r8, r8, lsl pc
        18d4dc:	e1a0210a 	mov	r2, sl, lsl #2
        18d4e0:	e2891004 	add	r1, r9, #4	; 0x4
        18d4e4:	e0850106 	add	r0, r5, r6, lsl #2
        18d4e8:	e2800004 	add	r0, r0, #4	; 0x4
        18d4ec:	eb694698 	bl	1bdef54 <$BlockMove>
        18d4f0:	e2890004 	add	r0, r9, #4	; 0x4
        18d4f4:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        18d4f8:	e5921000 	ldr	r1, [r2]
        18d4fc:	e5801000 	str	r1, [r0]
        18d500:	e59d0014 	ldr	r0, [sp, #20]
        18d504:	e3300000 	teq	r0, #0	; 0x0
        18d508:	0a000003 	beq	18d51c <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x3d8>
        18d50c:	e089010a 	add	r0, r9, sl, lsl #2
        18d510:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        18d514:	e5911000 	ldr	r1, [r1]
        18d518:	e5801000 	str	r1, [r0]
        18d51c:	e28d1028 	add	r1, sp, #40	; 0x28
        18d520:	e1a00009 	mov	r0, r9
        18d524:	eb63f81d 	bl	1a8b5a0 <PolygonShape::$CalcBounds(TRect *)>
        18d528:	e24dd010 	sub	sp, sp, #16	; 0x10
        18d52c:	e28d0008 	add	r0, sp, #8	; 0x8
        18d530:	e28d1038 	add	r1, sp, #56	; 0x38
        18d534:	e8915000 	ldmia	r1, {ip, lr}
        18d538:	e8805000 	stmia	r0, {ip, lr}
        18d53c:	e24dd004 	sub	sp, sp, #4	; 0x4
        18d540:	e59d0058 	ldr	r0, [sp, #88]
        18d544:	e5900000 	ldr	r0, [r0]
        18d548:	e58d0000 	str	r0, [sp]
        18d54c:	e28d000c 	add	r0, sp, #12	; 0xc
        18d550:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18d554:	e1a01841 	mov	r1, r1, asr #16
        18d558:	e59d2000 	ldr	r2, [sp]
        18d55c:	e1a02842 	mov	r2, r2, asr #16
        18d560:	eb6710e0 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18d564:	e28dd004 	add	sp, sp, #4	; 0x4
        18d568:	e28d1008 	add	r1, sp, #8	; 0x8
        18d56c:	e28d0014 	add	r0, sp, #20	; 0x14
        18d570:	eb646380 	bl	1aa6378 <$ValidatePoly(DataPtr, TRect const &)>
        18d574:	e59d003a 	ldr	r0, [sp, #58]
        18d578:	e1a00840 	mov	r0, r0, asr #16
        18d57c:	e2601000 	rsb	r1, r0, #0	; 0x0
        18d580:	e59d0038 	ldr	r0, [sp, #56]
        18d584:	e1a00840 	mov	r0, r0, asr #16
        18d588:	e2602000 	rsb	r2, r0, #0	; 0x0
        18d58c:	e1a00009 	mov	r0, r9
        18d590:	eb000f1e 	bl	191210 <PolygonShape::Offset(long, long)>
        18d594:	e24dd004 	sub	sp, sp, #4	; 0x4
        18d598:	e1a01004 	mov	r1, r4
        18d59c:	e1a0000d 	mov	r0, sp
        18d5a0:	eb68f7f8 	bl	1bcb588 <TView::$LocalOrigin( const(void))>
        18d5a4:	e28d003c 	add	r0, sp, #60	; 0x3c
        18d5a8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18d5ac:	e1a01841 	mov	r1, r1, asr #16
        18d5b0:	e59d2000 	ldr	r2, [sp]
        18d5b4:	e1a02842 	mov	r2, r2, asr #16
        18d5b8:	eb6710ca 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18d5bc:	e28dd004 	add	sp, sp, #4	; 0x4
        18d5c0:	e28d0038 	add	r0, sp, #56	; 0x38
        18d5c4:	eb698874 	bl	1bef79c <$ToObject(TRect const &)>
        18d5c8:	eb68d2df 	bl	1bc214c <$AllocateRefHandle(long)>
        18d5cc:	e58d0000 	str	r0, [sp]
        18d5d0:	e1a0600d 	mov	r6, sp
        18d5d4:	e28d001c 	add	r0, sp, #28	; 0x1c
        18d5d8:	eb646360 	bl	1aa6360 <$CommandFrameParameter(RefVar const &)>
        18d5dc:	eb68d2da 	bl	1bc214c <$AllocateRefHandle(long)>
        18d5e0:	e58d0004 	str	r0, [sp, #4]	; fField4
        18d5e4:	e28d0004 	add	r0, sp, #4	; 0x4
        18d5e8:	e59f11b4 	ldr	r1, [pc, #1b4]	; 18d7a4 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x660>	; fField1
        18d5ec:	e1a02006 	mov	r2, r6
        18d5f0:	eb68e35c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        18d5f4:	e59d0000 	ldr	r0, [sp]
        18d5f8:	eb68d6ef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18d5fc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18d600:	eb68d6ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18d604:	e59d1050 	ldr	r1, [sp, #80]
        18d608:	e5910000 	ldr	r0, [r1]
        18d60c:	e28d101c 	add	r1, sp, #28	; 0x1c
        18d610:	eb640c88 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        18d614:	e59d202c 	ldr	r2, [sp, #44]
        18d618:	e332000d 	teq	r2, #13	; 0xd
        18d61c:	1a000003 	bne	18d630 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x4ec>
        18d620:	e28d001c 	add	r0, sp, #28	; 0x1c
        18d624:	eb64634b 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        18d628:	e28d1030 	add	r1, sp, #48	; 0x30
        18d62c:	eb646755 	bl	1aa7388 <TPolygonView::$SetArcBounds(TRect const &)>
        18d630:	e28dd010 	add	sp, sp, #16	; 0x10
        18d634:	e28d0004 	add	r0, sp, #4	; 0x4
        18d638:	e3a01000 	mov	r1, #0	; 0x0
        18d63c:	eb68d2af 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d640:	e28dd008 	add	sp, sp, #8	; 0x8
        18d644:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18d648:	eb68d6db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18d64c:	e28dd018 	add	sp, sp, #24	; 0x18
        18d650:	e3380000 	teq	r8, #0	; 0x0
        18d654:	0a000049 	beq	18d780 <TPolygonView::RemovePoints(TPoint *, TPoint *, long, long, long, long)+0x63c>
        18d658:	e24dd004 	sub	sp, sp, #4	; 0x4
        18d65c:	e1a00004 	mov	r0, r4
        18d660:	e3a02001 	mov	r2, #1	; 0x1
        18d664:	e3a01044 	mov	r1, #68	; 0x44
        18d668:	ebfffe99 	bl	18d0d4 <TPolygonView::MakePointsCommand(unsigned long, long)>
        18d66c:	eb68d2b6 	bl	1bc214c <$AllocateRefHandle(long)>
        18d670:	e1a02007 	mov	r2, r7
        18d674:	e58d0000 	str	r0, [sp]
        18d678:	e1a0000d 	mov	r0, sp
        18d67c:	e3a01000 	mov	r1, #0	; 0x0
        18d680:	eb646338 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        18d684:	e5950002 	ldr	r0, [r5, #2]	; fField2
        18d688:	e0672840 	rsb	r2, r7, r0, asr #16
        18d68c:	e1a0000d 	mov	r0, sp
        18d690:	e3a01001 	mov	r1, #1	; 0x1
        18d694:	eb646333 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        18d698:	e1a0000d 	mov	r0, sp
        18d69c:	e3a02001 	mov	r2, #1	; 0x1
        18d6a0:	e3a01002 	mov	r1, #2	; 0x2
        18d6a4:	eb64632f 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        18d6a8:	e1a0000d 	mov	r0, sp
        18d6ac:	e3a02000 	mov	r2, #0	; 0x0
        18d6b0:	e3a01003 	mov	r1, #3	; 0x3
        18d6b4:	eb64632b 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        18d6b8:	e24dd008 	sub	sp, sp, #8	; 0x8
        18d6bc:	e28d0008 	add	r0, sp, #8	; 0x8
        18d6c0:	eb64672e 	bl	1aa7380 <$CommandPoints(RefVar const &)>
        18d6c4:	e1a01000 	mov	r1, r0
        18d6c8:	e1a0000d 	mov	r0, sp
        18d6cc:	eb68ce7f 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18d6d0:	e1a0100d 	mov	r1, sp
        18d6d4:	e28d0004 	add	r0, sp, #4	; 0x4
        18d6d8:	eb68ce7d 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18d6dc:	e1a0000d 	mov	r0, sp
        18d6e0:	e3a01000 	mov	r1, #0	; 0x0
        18d6e4:	eb68d285 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d6e8:	e28d0004 	add	r0, sp, #4	; 0x4
        18d6ec:	eb68d288 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18d6f0:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        18d6f4:	e5911000 	ldr	r1, [r1]
        18d6f8:	e5801000 	str	r1, [r0]
        18d6fc:	e59d102c 	ldr	r1, [sp, #44]
        18d700:	e5910000 	ldr	r0, [r1]
        18d704:	e28d1008 	add	r1, sp, #8	; 0x8
        18d708:	eb640c4a 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        18d70c:	e1a01005 	mov	r1, r5
        18d710:	e1a00004 	mov	r0, r4
        18d714:	eb645ee3 	bl	1aa52a8 <TPolygonView::$UpdateBounds(PolygonShape *)>
        18d718:	e1a00005 	mov	r0, r5
        18d71c:	eb64358d 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        18d720:	e3300000 	teq	r0, #0	; 0x0
        18d724:	128d100c 	addne	r1, sp, #12	; 0xc
        18d728:	11a00004 	movne	r0, r4
        18d72c:	1b646715 	blne	1aa7388 <TPolygonView::$SetArcBounds(TRect const &)>
        18d730:	e24dd004 	sub	sp, sp, #4	; 0x4
        18d734:	e1a00004 	mov	r0, r4
        18d738:	e59d5034 	ldr	r5, [sp, #52]
        18d73c:	eb6441d9 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18d740:	e1a01000 	mov	r1, r0
        18d744:	e1a0000d 	mov	r0, sp
        18d748:	eb68ce60 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18d74c:	e1a0000d 	mov	r0, sp
        18d750:	e1a01005 	mov	r1, r5
        18d754:	eb646307 	bl	1aa6378 <$ValidatePoly(DataPtr, TRect const &)>
        18d758:	e1a0000d 	mov	r0, sp
        18d75c:	e3a01000 	mov	r1, #0	; 0x0
        18d760:	eb68d266 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d764:	e28dd004 	add	sp, sp, #4	; 0x4
        18d768:	e28d0004 	add	r0, sp, #4	; 0x4
        18d76c:	e3a01000 	mov	r1, #0	; 0x0
        18d770:	eb68d262 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d774:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        18d778:	eb68d68f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18d77c:	e28dd004 	add	sp, sp, #4	; 0x4
        18d780:	e3380000 	teq	r8, #0	; 0x0
        18d784:	13a00000 	movne	r0, #0	; 0x0
        18d788:	03a00001 	moveq	r0, #1	; 0x1
        18d78c:	e20040ff 	and	r4, r0, #255	; 0xff
        18d790:	e28d001c 	add	r0, sp, #28	; 0x1c
        18d794:	e3a01000 	mov	r1, #0	; 0x0
        18d798:	eb68d258 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d79c:	e1a00004 	mov	r0, r4
        18d7a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18d7a4:	00684f08 	rsbeq	r4, r8, r8, lsl #30
    */
}

/**
 * Symbol: TPolygonView::Scale(TRect const &, TRect const &)
 * Address: 0018d8cc
 */
TPolygonView::Scale(TRect const &, TRect const &) {
    /*
        18d8cc:	e1a0c00d 	mov	ip, sp
        18d8d0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        18d8d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        18d8d8:	e1a04000 	mov	r4, r0
        18d8dc:	e1a06001 	mov	r6, r1
        18d8e0:	e1a05002 	mov	r5, r2
        18d8e4:	e24dd008 	sub	sp, sp, #8	; 0x8
        18d8e8:	eb64416e 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18d8ec:	e1a01000 	mov	r1, r0
        18d8f0:	e1a0000d 	mov	r0, sp
        18d8f4:	eb68cdf5 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18d8f8:	e1a0100d 	mov	r1, sp
        18d8fc:	e28d0004 	add	r0, sp, #4	; 0x4
        18d900:	eb68cdf3 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18d904:	e1a0000d 	mov	r0, sp
        18d908:	e3a01000 	mov	r1, #0	; 0x0
        18d90c:	eb68d1fb 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18d910:	e28d0004 	add	r0, sp, #4	; 0x4
        18d914:	eb68d1fe 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18d918:	e1a07000 	mov	r7, r0
        18d91c:	e5900000 	ldr	r0, [r0]
        18d920:	e1a00840 	mov	r0, r0, asr #16
        18d924:	e2848010 	add	r8, r4, #16	; 0x10
        18d928:	e330000e 	teq	r0, #14	; 0xe
        18d92c:	e24dd018 	sub	sp, sp, #24	; 0x18
        18d930:	1a000088 	bne	18db58 <TPolygonView::Scale(TRect const &, TRect const &)+0x28c>
        18d934:	e1a0000d 	mov	r0, sp
        18d938:	e594101c 	ldr	r1, [r4, #28]	; fField28
        18d93c:	eb0366f0 	bl	267504 <TView::ContentsOrigin(void)>
        18d940:	e59d0000 	ldr	r0, [sp]
        18d944:	e2600000 	rsb	r0, r0, #0	; 0x0
        18d948:	e1a00800 	mov	r0, r0, lsl #16
        18d94c:	e1a00840 	mov	r0, r0, asr #16
        18d950:	e41d1004 	ldr	r1, [sp], -#4	; fField4
        18d954:	e1a01821 	mov	r1, r1, lsr #16
        18d958:	e2611000 	rsb	r1, r1, #0	; 0x0
        18d95c:	e1a01801 	mov	r1, r1, lsl #16
        18d960:	e1a01841 	mov	r1, r1, asr #16
        18d964:	e5cd0003 	strb	r0, [sp, #3]
        18d968:	e1a00440 	mov	r0, r0, asr #8
        18d96c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18d970:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18d974:	e1a00441 	mov	r0, r1, asr #8
        18d978:	e5cd0000 	strb	r0, [sp]
        18d97c:	e49d0008 	ldr	r0, [sp], #8	; fField8
        18d980:	e58d0010 	str	r0, [sp, #16]	; fField16
        18d984:	e28d0008 	add	r0, sp, #8	; 0x8
        18d988:	e8955000 	ldmia	r5, {ip, lr}
        18d98c:	e8805000 	stmia	r0, {ip, lr}
        18d990:	e8965000 	ldmia	r6, {ip, lr}
        18d994:	e88d5000 	stmia	sp, {ip, lr}
        18d998:	e24dd004 	sub	sp, sp, #4	; 0x4
        18d99c:	e59d0014 	ldr	r0, [sp, #20]
        18d9a0:	e58d0000 	str	r0, [sp]
        18d9a4:	e28d000c 	add	r0, sp, #12	; 0xc
        18d9a8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18d9ac:	e1a01841 	mov	r1, r1, asr #16
        18d9b0:	e59d2000 	ldr	r2, [sp]
        18d9b4:	e1a02842 	mov	r2, r2, asr #16
        18d9b8:	eb670fca 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18d9bc:	e59d0014 	ldr	r0, [sp, #20]
        18d9c0:	e58d0000 	str	r0, [sp]
        18d9c4:	e28d0004 	add	r0, sp, #4	; 0x4
        18d9c8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18d9cc:	e1a01841 	mov	r1, r1, asr #16
        18d9d0:	e59d2000 	ldr	r2, [sp]
        18d9d4:	e1a02842 	mov	r2, r2, asr #16
        18d9d8:	eb670fc2 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18d9dc:	e24dd018 	sub	sp, sp, #24	; 0x18
        18d9e0:	e28d2024 	add	r2, sp, #36	; 0x24
        18d9e4:	e28d101c 	add	r1, sp, #28	; 0x1c
        18d9e8:	e1a0000d 	mov	r0, sp
        18d9ec:	e3a03000 	mov	r3, #0	; 0x0
        18d9f0:	eb6451d9 	bl	1aa215c <TTransform::$Setup(TRect const *, TRect const *, unsigned char)>
        18d9f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        18d9f8:	e8985000 	ldmia	r8, {ip, lr}
        18d9fc:	e88d5000 	stmia	sp, {ip, lr}
        18da00:	e24dd004 	sub	sp, sp, #4	; 0x4
        18da04:	e59d0038 	ldr	r0, [sp, #56]
        18da08:	e58d0000 	str	r0, [sp]
        18da0c:	e28d0004 	add	r0, sp, #4	; 0x4
        18da10:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18da14:	e1a01841 	mov	r1, r1, asr #16
        18da18:	e59d2000 	ldr	r2, [sp]
        18da1c:	e1a02842 	mov	r2, r2, asr #16
        18da20:	eb670fb0 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18da24:	e28dd004 	add	sp, sp, #4	; 0x4
        18da28:	e28d1008 	add	r1, sp, #8	; 0x8
        18da2c:	e1a0000d 	mov	r0, sp
        18da30:	eb644d97 	bl	1aa1094 <TRect::$Scale(TTransform const &)>
        18da34:	e24dd008 	sub	sp, sp, #8	; 0x8
        18da38:	e5960006 	ldr	r0, [r6, #6]	; fField6
        18da3c:	e1a00820 	mov	r0, r0, lsr #16
        18da40:	e5961002 	ldr	r1, [r6, #2]	; fField2
        18da44:	e1a01821 	mov	r1, r1, lsr #16
        18da48:	e0400001 	sub	r0, r0, r1
        18da4c:	e1a01800 	mov	r1, r0, lsl #16
        18da50:	e5950006 	ldr	r0, [r5, #6]	; fField6
        18da54:	e1a00820 	mov	r0, r0, lsr #16
        18da58:	e5952002 	ldr	r2, [r5, #2]	; fField2
        18da5c:	e1a02822 	mov	r2, r2, lsr #16
        18da60:	e0400002 	sub	r0, r0, r2
        18da64:	e1a00800 	mov	r0, r0, lsl #16
        18da68:	eb694d94 	bl	1be10c0 <$FixedDivide>
        18da6c:	e1a07000 	mov	r7, r0
        18da70:	e5960004 	ldr	r0, [r6, #4]	; fField4
        18da74:	e1a00820 	mov	r0, r0, lsr #16
        18da78:	e5961000 	ldr	r1, [r6]
        18da7c:	e1a01821 	mov	r1, r1, lsr #16
        18da80:	e0400001 	sub	r0, r0, r1
        18da84:	e1a01800 	mov	r1, r0, lsl #16
        18da88:	e5950004 	ldr	r0, [r5, #4]	; fField4
        18da8c:	e1a00820 	mov	r0, r0, lsr #16
        18da90:	e5952000 	ldr	r2, [r5]
        18da94:	e1a02822 	mov	r2, r2, lsr #16
        18da98:	e0400002 	sub	r0, r0, r2
        18da9c:	e1a00800 	mov	r0, r0, lsl #16
        18daa0:	eb694d86 	bl	1be10c0 <$FixedDivide>
        18daa4:	e1a06000 	mov	r6, r0
        18daa8:	e59f10a4 	ldr	r1, [pc, #a4]	; 18db54 <TPolygonView::Scale(TRect const &, TRect const &)+0x288>
        18daac:	e1a05001 	mov	r5, r1
        18dab0:	e1a00004 	mov	r0, r4
        18dab4:	eb68f2a3 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        18dab8:	eb68d1a3 	bl	1bc214c <$AllocateRefHandle(long)>
        18dabc:	e1a02006 	mov	r2, r6
        18dac0:	e1a01007 	mov	r1, r7
        18dac4:	e58d0004 	str	r0, [sp, #4]	; fField4
        18dac8:	e28d0004 	add	r0, sp, #4	; 0x4
        18dacc:	eb646638 	bl	1aa73b4 <$ScaleInk__FRC6RefVarlT2>
        18dad0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        18dad4:	e5810000 	str	r0, [r1]
        18dad8:	e1a00004 	mov	r0, r4
        18dadc:	eb68ee81 	bl	1bc94e8 <TView::$DataFrame(void)>
        18dae0:	eb68d199 	bl	1bc214c <$AllocateRefHandle(long)>
        18dae4:	e58d0000 	str	r0, [sp]
        18dae8:	e1a0000d 	mov	r0, sp
        18daec:	e28d2004 	add	r2, sp, #4	; 0x4
        18daf0:	e1a01005 	mov	r1, r5
        18daf4:	eb68e21b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        18daf8:	e59d0000 	ldr	r0, [sp]
        18dafc:	eb68d5ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18db00:	e28d1008 	add	r1, sp, #8	; 0x8
        18db04:	e1a00004 	mov	r0, r4
        18db08:	eb68face 	bl	1bcc648 <TView::$WriteBounds(TRect const &)>
        18db0c:	e1a00004 	mov	r0, r4
        18db10:	eb648f70 	bl	1ab18d8 <TView::$FirstHilite(void)>
        18db14:	eb68d18c 	bl	1bc214c <$AllocateRefHandle(long)>
        18db18:	e1a05000 	mov	r5, r0
        18db1c:	e5900000 	ldr	r0, [r0]
        18db20:	e3300002 	teq	r0, #2	; 0x2
        18db24:	0a000004 	beq	18db3c <TPolygonView::Scale(TRect const &, TRect const &)+0x270>
        18db28:	eb64492c 	bl	1a9ffe0 <$RefToAddress(long)>
        18db2c:	e2802004 	add	r2, r0, #4	; 0x4
        18db30:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        18db34:	e1a00004 	mov	r0, r4
        18db38:	eb646617 	bl	1aa739c <TPolygonView::$CalcHiliteBounds(PolygonShape *, TRect *)>
        18db3c:	e1a00005 	mov	r0, r5
        18db40:	eb68d59d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18db44:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18db48:	eb68d59b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18db4c:	e28dd02c 	add	sp, sp, #44	; 0x2c
        18db50:	ea000057 	b	18dcb4 <TPolygonView::Scale(TRect const &, TRect const &)+0x3e8>
        18db54:	00683220 	rsbeq	r3, r8, r0, lsr #4
        18db58:	e5980000 	ldr	r0, [r8]
        18db5c:	e58d0000 	str	r0, [sp]
        18db60:	e59d0000 	ldr	r0, [sp]
        18db64:	e2600000 	rsb	r0, r0, #0	; 0x0
        18db68:	e1a00800 	mov	r0, r0, lsl #16
        18db6c:	e1a00840 	mov	r0, r0, asr #16
        18db70:	e41d1004 	ldr	r1, [sp], -#4	; fField4
        18db74:	e1a01821 	mov	r1, r1, lsr #16
        18db78:	e2611000 	rsb	r1, r1, #0	; 0x0
        18db7c:	e1a01801 	mov	r1, r1, lsl #16
        18db80:	e1a01841 	mov	r1, r1, asr #16
        18db84:	e5cd0003 	strb	r0, [sp, #3]
        18db88:	e1a00440 	mov	r0, r0, asr #8
        18db8c:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18db90:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18db94:	e1a00441 	mov	r0, r1, asr #8
        18db98:	e5cd0000 	strb	r0, [sp]
        18db9c:	e49d0008 	ldr	r0, [sp], #8	; fField8
        18dba0:	e58d0010 	str	r0, [sp, #16]	; fField16
        18dba4:	e28d0008 	add	r0, sp, #8	; 0x8
        18dba8:	e8951008 	ldmia	r5, {r3, ip}
        18dbac:	e8801008 	stmia	r0, {r3, ip}
        18dbb0:	e8965000 	ldmia	r6, {ip, lr}
        18dbb4:	e88d5000 	stmia	sp, {ip, lr}
        18dbb8:	e24dd004 	sub	sp, sp, #4	; 0x4
        18dbbc:	e59d0014 	ldr	r0, [sp, #20]
        18dbc0:	e58d0000 	str	r0, [sp]
        18dbc4:	e28d000c 	add	r0, sp, #12	; 0xc
        18dbc8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18dbcc:	e1a01841 	mov	r1, r1, asr #16
        18dbd0:	e59d2000 	ldr	r2, [sp]
        18dbd4:	e1a02842 	mov	r2, r2, asr #16
        18dbd8:	eb670f42 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18dbdc:	e59d0014 	ldr	r0, [sp, #20]
        18dbe0:	e58d0000 	str	r0, [sp]
        18dbe4:	e28d0004 	add	r0, sp, #4	; 0x4
        18dbe8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18dbec:	e1a01841 	mov	r1, r1, asr #16
        18dbf0:	e59d2000 	ldr	r2, [sp]
        18dbf4:	e1a02842 	mov	r2, r2, asr #16
        18dbf8:	eb670f3a 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18dbfc:	e24dd004 	sub	sp, sp, #4	; 0x4
        18dc00:	e1a00007 	mov	r0, r7
        18dc04:	eb643453 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        18dc08:	e3300000 	teq	r0, #0	; 0x0
        18dc0c:	0a00000c 	beq	18dc44 <TPolygonView::Scale(TRect const &, TRect const &)+0x378>
        18dc10:	e1a0100d 	mov	r1, sp
        18dc14:	e1a00004 	mov	r0, r4
        18dc18:	eb6465d9 	bl	1aa7384 <TPolygonView::$GetArcBounds(TRect &)>
        18dc1c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        18dc20:	e1a02005 	mov	r2, r5
        18dc24:	e1a01006 	mov	r1, r6
        18dc28:	e1a0000d 	mov	r0, sp
        18dc2c:	e3a03000 	mov	r3, #0	; 0x0
        18dc30:	eb645149 	bl	1aa215c <TTransform::$Setup(TRect const *, TRect const *, unsigned char)>
        18dc34:	e1a0100d 	mov	r1, sp
        18dc38:	e28d001c 	add	r0, sp, #28	; 0x1c
        18dc3c:	eb644d14 	bl	1aa1094 <TRect::$Scale(TTransform const &)>
        18dc40:	e28dd01c 	add	sp, sp, #28	; 0x1c
        18dc44:	e28d2010 	add	r2, sp, #16	; 0x10
        18dc48:	e28d1008 	add	r1, sp, #8	; 0x8
        18dc4c:	e1a00007 	mov	r0, r7
        18dc50:	eb644d0d 	bl	1aa108c <PolygonShape::$Scale(TRect const &, TRect const &)>
        18dc54:	e1a00004 	mov	r0, r4
        18dc58:	eb648f1e 	bl	1ab18d8 <TView::$FirstHilite(void)>
        18dc5c:	eb68d13a 	bl	1bc214c <$AllocateRefHandle(long)>
        18dc60:	e1a05000 	mov	r5, r0
        18dc64:	e5900000 	ldr	r0, [r0]
        18dc68:	e3300002 	teq	r0, #2	; 0x2
        18dc6c:	0a000004 	beq	18dc84 <TPolygonView::Scale(TRect const &, TRect const &)+0x3b8>
        18dc70:	eb6448da 	bl	1a9ffe0 <$RefToAddress(long)>
        18dc74:	e5900020 	ldr	r0, [r0, #32]	; fField32
        18dc78:	e28d2010 	add	r2, sp, #16	; 0x10
        18dc7c:	e28d1008 	add	r1, sp, #8	; 0x8
        18dc80:	eb644d01 	bl	1aa108c <PolygonShape::$Scale(TRect const &, TRect const &)>
        18dc84:	e1a01007 	mov	r1, r7
        18dc88:	e1a00004 	mov	r0, r4
        18dc8c:	eb645d85 	bl	1aa52a8 <TPolygonView::$UpdateBounds(PolygonShape *)>
        18dc90:	e1a00007 	mov	r0, r7
        18dc94:	eb64342f 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        18dc98:	e3300000 	teq	r0, #0	; 0x0
        18dc9c:	11a0100d 	movne	r1, sp
        18dca0:	11a00004 	movne	r0, r4
        18dca4:	1b6465b7 	blne	1aa7388 <TPolygonView::$SetArcBounds(TRect const &)>
        18dca8:	e1a00005 	mov	r0, r5
        18dcac:	eb68d542 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18dcb0:	e28dd008 	add	sp, sp, #8	; 0x8
        18dcb4:	e28dd014 	add	sp, sp, #20	; 0x14
        18dcb8:	e28d0004 	add	r0, sp, #4	; 0x4
        18dcbc:	e3a01000 	mov	r1, #0	; 0x0
        18dcc0:	eb68d10e 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18dcc4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::AddHilite(TPolygonHilite *)
 * Address: 0018dcc8
 */
TPolygonView::AddHilite(TPolygonHilite *) {
    /*
        18dcc8:	e1a0c00d 	mov	ip, sp
        18dccc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18dcd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        18dcd4:	e1a04000 	mov	r4, r0
        18dcd8:	e1a05001 	mov	r5, r1
        18dcdc:	e24dd008 	sub	sp, sp, #8	; 0x8
        18dce0:	e1a01000 	mov	r1, r0
        18dce4:	e3a02302 	mov	r2, #134217728	; 0x8000000
        18dce8:	e3a00047 	mov	r0, #71	; 0x47
        18dcec:	eb646193 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        18dcf0:	eb68d115 	bl	1bc214c <$AllocateRefHandle(long)>
        18dcf4:	e58d0004 	str	r0, [sp, #4]	; fField4
        18dcf8:	e1a00005 	mov	r0, r5
        18dcfc:	eb63edfa 	bl	1a894ec <$AddressToRef(void *)>
        18dd00:	eb68d111 	bl	1bc214c <$AllocateRefHandle(long)>
        18dd04:	e58d0000 	str	r0, [sp]
        18dd08:	e1a0100d 	mov	r1, sp
        18dd0c:	e28d0004 	add	r0, sp, #4	; 0x4
        18dd10:	eb646193 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        18dd14:	e59d0000 	ldr	r0, [sp]
        18dd18:	eb68d527 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18dd1c:	e59f001c 	ldr	r0, [pc, #1c]	; 18dd40 <TPolygonView::AddHilite(TPolygonHilite *)+0x78>	; fField1
        18dd20:	e5900000 	ldr	r0, [r0]
        18dd24:	e28d1004 	add	r1, sp, #4	; 0x4
        18dd28:	eb640ac2 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        18dd2c:	e1a00004 	mov	r0, r4
        18dd30:	eb000024 	bl	18ddc8 <TPolygonView::PolygonHiliteChanged(void)>
        18dd34:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18dd38:	eb68d51f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18dd3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        18dd40:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: TPolygonView::PolygonHiliteChanged(void)
 * Address: 0018ddc8
 */
TPolygonView::PolygonHiliteChanged(void) {
    /*
        18ddc8:	e1a0c00d 	mov	ip, sp
        18ddcc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18ddd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        18ddd4:	e24dd004 	sub	sp, sp, #4	; 0x4
        18ddd8:	e2804024 	add	r4, r0, #36	; 0x24
        18dddc:	e59f0028 	ldr	r0, [pc, #28]	; 18de0c <TPolygonView::PolygonHiliteChanged(void)+0x44>	; fField28
        18dde0:	e5900000 	ldr	r0, [r0]
        18dde4:	eb68d0d8 	bl	1bc214c <$AllocateRefHandle(long)>
        18dde8:	e58d0000 	str	r0, [sp]
        18ddec:	e1a0000d 	mov	r0, sp
        18ddf0:	e59f1018 	ldr	r1, [pc, #18]	; 18de10 <TPolygonView::PolygonHiliteChanged(void)+0x48>
        18ddf4:	e1a02004 	mov	r2, r4
        18ddf8:	eb68e15a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        18ddfc:	e59d0000 	ldr	r0, [sp]
        18de00:	eb68d4ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18de04:	ebffffce 	bl	18dd44 <UpdatePenSizePalette(void)>
        18de08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        18de0c:	0c10180c 	ldceq	8, cr1, [r0], -#48
        18de10:	00683488 	rsbeq	r3, r8, r8, lsl #9
    */
}

/**
 * Symbol: TPolygonView::ClassID( const(void))
 * Address: 0018de14
 */
TPolygonView::ClassID( const(void)) {
    /*
        18de14:	e3a00052 	mov	r0, #82	; 0x52
        18de18:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPolygonView::RemoveHilite(RefVar const &)
 * Address: 0018de1c
 */
TPolygonView::RemoveHilite(RefVar const &) {
    /*
        18de1c:	e1a0c00d 	mov	ip, sp
        18de20:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        18de24:	e24cb004 	sub	fp, ip, #4	; 0x4
        18de28:	eb653bf7 	bl	1adce0c <TView::$RemoveHilite(RefVar const &)>
        18de2c:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        18de30:	eaffffc3 	b	18dd44 <UpdatePenSizePalette(void)>
    */
}

/**
 * Symbol: TPolygonView::DerivedFrom( const(long))
 * Address: 0018e700
 */
TPolygonView::DerivedFrom( const(long)) {
    /*
        18e700:	e1a0c00d 	mov	ip, sp
        18e704:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        18e708:	e24cb004 	sub	fp, ip, #4	; 0x4
        18e70c:	e3310052 	teq	r1, #82	; 0x52
        18e710:	0a000002 	beq	18e720 <TPolygonView::DerivedFrom( const(long))+0x20>
        18e714:	ebfc522b 	bl	a2fc8 <TDataView::DerivedFrom( const(long))>
        18e718:	e3300000 	teq	r0, #0	; 0x0
        18e71c:	0a000001 	beq	18e728 <TPolygonView::DerivedFrom( const(long))+0x28>
        18e720:	e3a00001 	mov	r0, #1	; 0x1
        18e724:	ea000000 	b	18e72c <TPolygonView::DerivedFrom( const(long))+0x2c>
        18e728:	e3a00000 	mov	r0, #0	; 0x0
        18e72c:	e20000ff 	and	r0, r0, #255	; 0xff
        18e730:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)
 * Address: 0018fa3c
 */
TPolygonView::HiliteTraced(TUnitPublic *, unsigned char) {
    /*
        18fa3c:	e1a0c00d 	mov	ip, sp
        18fa40:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        18fa44:	e24cb004 	sub	fp, ip, #4	; 0x4
        18fa48:	e1a04000 	mov	r4, r0
        18fa4c:	e1a05001 	mov	r5, r1
        18fa50:	e20200ff 	and	r0, r2, #255	; 0xff
        18fa54:	e52d0010 	str	r0, [sp, -#16]!	; fField16
        18fa58:	e24dd008 	sub	sp, sp, #8	; 0x8
        18fa5c:	e1a00004 	mov	r0, r4
        18fa60:	eb643910 	bl	1a9dea8 <TPolygonView::$Points(void)>
        18fa64:	e1a01000 	mov	r1, r0
        18fa68:	e1a0000d 	mov	r0, sp
        18fa6c:	eb68c597 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        18fa70:	e1a0100d 	mov	r1, sp
        18fa74:	e28d0004 	add	r0, sp, #4	; 0x4
        18fa78:	eb68c595 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        18fa7c:	e1a0000d 	mov	r0, sp
        18fa80:	e3a01000 	mov	r1, #0	; 0x0
        18fa84:	eb68c99d 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18fa88:	e28d0004 	add	r0, sp, #4	; 0x4
        18fa8c:	eb68c9a0 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        18fa90:	e1a06000 	mov	r6, r0
        18fa94:	e5900000 	ldr	r0, [r0]
        18fa98:	e1a00840 	mov	r0, r0, asr #16
        18fa9c:	e330000e 	teq	r0, #14	; 0xe
        18faa0:	1a000004 	bne	18fab8 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x7c>
        18faa4:	e28d0004 	add	r0, sp, #4	; 0x4
        18faa8:	e3a01000 	mov	r1, #0	; 0x0
        18faac:	eb68c993 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18fab0:	e3a00000 	mov	r0, #0	; 0x0
        18fab4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18fab8:	e24dd008 	sub	sp, sp, #8	; 0x8
        18fabc:	e2840010 	add	r0, r4, #16	; 0x10
        18fac0:	e58d001c 	str	r0, [sp, #28]	; fField28
        18fac4:	e8905000 	ldmia	r0, {ip, lr}
        18fac8:	e88d5000 	stmia	sp, {ip, lr}
        18facc:	e1a00005 	mov	r0, r5
        18fad0:	eb644164 	bl	1aa0068 <TUnitPublic::$RoughShape(void)>
        18fad4:	e3300000 	teq	r0, #0	; 0x0
        18fad8:	1a000004 	bne	18faf0 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0xb4>
        18fadc:	e28d000c 	add	r0, sp, #12	; 0xc
        18fae0:	e3a01000 	mov	r1, #0	; 0x0
        18fae4:	eb68c985 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18fae8:	e3a00000 	mov	r0, #0	; 0x0
        18faec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18faf0:	e24dd008 	sub	sp, sp, #8	; 0x8
        18faf4:	e5908000 	ldr	r8, [r0]
        18faf8:	e288700c 	add	r7, r8, #12	; 0xc
        18fafc:	e1a00008 	mov	r0, r8
        18fb00:	eb63fb1a 	bl	1a8e770 <$Count(Polygon *)>
        18fb04:	e1a09000 	mov	r9, r0
        18fb08:	e24dd004 	sub	sp, sp, #4	; 0x4
        18fb0c:	e5970000 	ldr	r0, [r7]
        18fb10:	e40d0004 	str	r0, [sp], -#4	; fField4
        18fb14:	e5970000 	ldr	r0, [r7]
        18fb18:	e58d0000 	str	r0, [sp]
        18fb1c:	e28d2008 	add	r2, sp, #8	; 0x8
        18fb20:	e5bd1004 	ldr	r1, [sp, #4]!	; fField4
        18fb24:	e28dd004 	add	sp, sp, #4	; 0x4
        18fb28:	eb670b82 	bl	1b52938 <$Pt2Rect__F5PointT1P4Rect>
        18fb2c:	e24dd004 	sub	sp, sp, #4	; 0x4
        18fb30:	e5980004 	ldr	r0, [r8, #4]	; fField4
        18fb34:	e40d0004 	str	r0, [sp], -#4	; fField4
        18fb38:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18fb3c:	e58d0000 	str	r0, [sp]
        18fb40:	e28d0008 	add	r0, sp, #8	; 0x8
        18fb44:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18fb48:	e1a01841 	mov	r1, r1, asr #16
        18fb4c:	e59d2000 	ldr	r2, [sp]
        18fb50:	e1a02842 	mov	r2, r2, asr #16
        18fb54:	eb670763 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        18fb58:	e28dd004 	add	sp, sp, #4	; 0x4
        18fb5c:	e59f003c 	ldr	r0, [pc, #3c]	; 18fba0 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x164>
        18fb60:	e58d0024 	str	r0, [sp, #36]	; fField36
        18fb64:	e5900000 	ldr	r0, [r0]
        18fb68:	e2601000 	rsb	r1, r0, #0	; 0x0
        18fb6c:	e1a02001 	mov	r2, r1
        18fb70:	e28d0004 	add	r0, sp, #4	; 0x4
        18fb74:	eb670331 	bl	1b50840 <$InsetRect__FP4RectlT2>
        18fb78:	e28d1004 	add	r1, sp, #4	; 0x4
        18fb7c:	e28d000c 	add	r0, sp, #12	; 0xc
        18fb80:	eb645e0d 	bl	1aa73bc <$RectRectOverlaps__FRC5TRectT1>
        18fb84:	e3300000 	teq	r0, #0	; 0x0
        18fb88:	1a000005 	bne	18fba4 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x168>
        18fb8c:	e28d0018 	add	r0, sp, #24	; 0x18
        18fb90:	e3a01000 	mov	r1, #0	; 0x0
        18fb94:	eb68c959 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18fb98:	e3a00000 	mov	r0, #0	; 0x0
        18fb9c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18fba0:	0c101768 	ldceq	7, cr1, [r0], -#416
        18fba4:	e24dd004 	sub	sp, sp, #4	; 0x4
        18fba8:	e59d002c 	ldr	r0, [sp, #44]
        18fbac:	e5900000 	ldr	r0, [r0]
        18fbb0:	e58d0000 	str	r0, [sp]
        18fbb4:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        18fbb8:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        18fbbc:	e0400001 	sub	r0, r0, r1
        18fbc0:	e5cd0005 	strb	r0, [sp, #5]
        18fbc4:	e1a00440 	mov	r0, r0, asr #8
        18fbc8:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        18fbcc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        18fbd0:	e59d0000 	ldr	r0, [sp]
        18fbd4:	e0410000 	sub	r0, r1, r0
        18fbd8:	e5cd0007 	strb	r0, [sp, #7]
        18fbdc:	e1a00440 	mov	r0, r0, asr #8
        18fbe0:	e5cd0006 	strb	r0, [sp, #6]	; fField6
        18fbe4:	e24dd010 	sub	sp, sp, #16	; 0x10
        18fbe8:	e5971002 	ldr	r1, [r7, #2]	; fField2
        18fbec:	e1a01821 	mov	r1, r1, lsr #16
        18fbf0:	e59d0014 	ldr	r0, [sp, #20]
        18fbf4:	e0810000 	add	r0, r1, r0
        18fbf8:	e1a00800 	mov	r0, r0, lsl #16
        18fbfc:	e1a00840 	mov	r0, r0, asr #16
        18fc00:	e5972000 	ldr	r2, [r7]
        18fc04:	e1a02822 	mov	r2, r2, lsr #16
        18fc08:	e59d1016 	ldr	r1, [sp, #22]
        18fc0c:	e0821001 	add	r1, r2, r1
        18fc10:	e1a01801 	mov	r1, r1, lsl #16
        18fc14:	e1a01841 	mov	r1, r1, asr #16
        18fc18:	e24dd004 	sub	sp, sp, #4	; 0x4
        18fc1c:	e5cd0003 	strb	r0, [sp, #3]
        18fc20:	e1a00440 	mov	r0, r0, asr #8
        18fc24:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        18fc28:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        18fc2c:	e1a00441 	mov	r0, r1, asr #8
        18fc30:	e5cd0000 	strb	r0, [sp]
        18fc34:	e59d0000 	ldr	r0, [sp]
        18fc38:	e3a0a000 	mov	sl, #0	; 0x0
        18fc3c:	e58d0014 	str	r0, [sp, #20]
        18fc40:	e59d003c 	ldr	r0, [sp, #60]
        18fc44:	e5900004 	ldr	r0, [r0, #4]	; fField4
        18fc48:	e2808001 	add	r8, r0, #1	; 0x1
        18fc4c:	e3a00000 	mov	r0, #0	; 0x0
        18fc50:	e58d0000 	str	r0, [sp]
        18fc54:	e28d3004 	add	r3, sp, #4	; 0x4
        18fc58:	e92d0008 	stmdb	sp!, {r3}
        18fc5c:	e28d3014 	add	r3, sp, #20	; 0x14
        18fc60:	e28d2004 	add	r2, sp, #4	; 0x4
        18fc64:	e28d1018 	add	r1, sp, #24	; 0x18
        18fc68:	e1a00006 	mov	r0, r6
        18fc6c:	eb645ddb 	bl	1aa73e0 <$NextPolySegHit__FP12PolygonShapeR6TPointPlN23>
        18fc70:	e28dd004 	add	sp, sp, #4	; 0x4
        18fc74:	e3300000 	teq	r0, #0	; 0x0
        18fc78:	0a00002f 	beq	18fd3c <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x300>
        18fc7c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18fc80:	e1500008 	cmp	r0, r8
        18fc84:	aa000022 	bge	18fd14 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x2d8>
        18fc88:	e24dd008 	sub	sp, sp, #8	; 0x8
        18fc8c:	e1a0300d 	mov	r3, sp
        18fc90:	e28d2004 	add	r2, sp, #4	; 0x4
        18fc94:	e28d1020 	add	r1, sp, #32	; 0x20
        18fc98:	e1a00009 	mov	r0, r9
        18fc9c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        18fca0:	e59d0028 	ldr	r0, [sp, #40]
        18fca4:	e2401001 	sub	r1, r0, #1	; 0x1
        18fca8:	e1a03007 	mov	r3, r7
        18fcac:	e1a00006 	mov	r0, r6
        18fcb0:	e3a02001 	mov	r2, #1	; 0x1
        18fcb4:	eb645dcd 	bl	1aa73f0 <$HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7>
        18fcb8:	e28dd010 	add	sp, sp, #16	; 0x10
        18fcbc:	e3300000 	teq	r0, #0	; 0x0
        18fcc0:	1a00000c 	bne	18fcf8 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x2bc>
        18fcc4:	e1a0300d 	mov	r3, sp
        18fcc8:	e28d2004 	add	r2, sp, #4	; 0x4
        18fccc:	e28d1020 	add	r1, sp, #32	; 0x20
        18fcd0:	e1a00009 	mov	r0, r9
        18fcd4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        18fcd8:	e1a03007 	mov	r3, r7
        18fcdc:	e1a00006 	mov	r0, r6
        18fce0:	e3e02000 	mvn	r2, #0	; 0x0
        18fce4:	e59d1028 	ldr	r1, [sp, #40]
        18fce8:	eb645dc0 	bl	1aa73f0 <$HiliteTracedFrom__FP12PolygonShapelT2P6TPointT2RC6TPointPlT7>
        18fcec:	e28dd010 	add	sp, sp, #16	; 0x10
        18fcf0:	e3300000 	teq	r0, #0	; 0x0
        18fcf4:	0a000005 	beq	18fd10 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x2d4>
        18fcf8:	e3a0a001 	mov	sl, #1	; 0x1
        18fcfc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        18fd00:	e59d800c 	ldr	r8, [sp, #12]	; fField12
        18fd04:	e58d0014 	str	r0, [sp, #20]
        18fd08:	e59d0000 	ldr	r0, [sp]
        18fd0c:	e58d0010 	str	r0, [sp, #16]	; fField16
        18fd10:	e28dd008 	add	sp, sp, #8	; 0x8
        18fd14:	e28d3004 	add	r3, sp, #4	; 0x4
        18fd18:	e92d0008 	stmdb	sp!, {r3}
        18fd1c:	e28d3014 	add	r3, sp, #20	; 0x14
        18fd20:	e28d2004 	add	r2, sp, #4	; 0x4
        18fd24:	e28d1018 	add	r1, sp, #24	; 0x18
        18fd28:	e1a00006 	mov	r0, r6
        18fd2c:	eb645dab 	bl	1aa73e0 <$NextPolySegHit__FP12PolygonShapeR6TPointPlN23>
        18fd30:	e28dd004 	add	sp, sp, #4	; 0x4
        18fd34:	e3300000 	teq	r0, #0	; 0x0
        18fd38:	1affffcf 	bne	18fc7c <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x240>
        18fd3c:	e33a0000 	teq	sl, #0	; 0x0
        18fd40:	1a000004 	bne	18fd58 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x31c>
        18fd44:	e28d0030 	add	r0, sp, #48	; 0x30
        18fd48:	e3a01000 	mov	r1, #0	; 0x0
        18fd4c:	eb68c8eb 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18fd50:	e3a00000 	mov	r0, #0	; 0x0
        18fd54:	ea000007 	b	18fd78 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x33c>
        18fd58:	e59d0034 	ldr	r0, [sp, #52]
        18fd5c:	e3300000 	teq	r0, #0	; 0x0
        18fd60:	1a000005 	bne	18fd7c <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x340>
        18fd64:	e3a04001 	mov	r4, #1	; 0x1
        18fd68:	e28d0030 	add	r0, sp, #48	; 0x30
        18fd6c:	e3a01000 	mov	r1, #0	; 0x0
        18fd70:	eb68c8e2 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18fd74:	e1a00004 	mov	r0, r4
        18fd78:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18fd7c:	e3a08102 	mov	r8, #-2147483648	; 0x80000000
        18fd80:	e3a07102 	mov	r7, #-2147483648	; 0x80000000
        18fd84:	e1a00004 	mov	r0, r4
        18fd88:	eb6486d2 	bl	1ab18d8 <TView::$FirstHilite(void)>
        18fd8c:	eb68c8ee 	bl	1bc214c <$AllocateRefHandle(long)>
        18fd90:	e1a09000 	mov	r9, r0
        18fd94:	e5900000 	ldr	r0, [r0]
        18fd98:	e3300002 	teq	r0, #2	; 0x2
        18fd9c:	0a000007 	beq	18fdc0 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x384>
        18fda0:	eb64408e 	bl	1a9ffe0 <$RefToAddress(long)>
        18fda4:	e590100c 	ldr	r1, [r0, #12]	; fField12
        18fda8:	e5902014 	ldr	r2, [r0, #20]
        18fdac:	e0828801 	add	r8, r2, r1, lsl #16
        18fdb0:	e5901018 	ldr	r1, [r0, #24]	; fField24
        18fdb4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        18fdb8:	e2400001 	sub	r0, r0, #1	; 0x1
        18fdbc:	e0817800 	add	r7, r1, r0, lsl #16
        18fdc0:	e24dd008 	sub	sp, sp, #8	; 0x8
        18fdc4:	e1a0100d 	mov	r1, sp
        18fdc8:	e1a00005 	mov	r0, r5
        18fdcc:	eb63e9e7 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        18fdd0:	e59d0044 	ldr	r0, [sp, #68]
        18fdd4:	e5900000 	ldr	r0, [r0]
        18fdd8:	e2601000 	rsb	r1, r0, #0	; 0x0
        18fddc:	e1a02001 	mov	r2, r1
        18fde0:	e1a0000d 	mov	r0, sp
        18fde4:	eb670295 	bl	1b50840 <$InsetRect__FP4RectlT2>
        18fde8:	e24dd010 	sub	sp, sp, #16	; 0x10
        18fdec:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        18fdf0:	e1a00800 	mov	r0, r0, lsl #16
        18fdf4:	e58d0000 	str	r0, [sp]
        18fdf8:	e59d0012 	ldr	r0, [sp, #18]
        18fdfc:	e1a00800 	mov	r0, r0, lsl #16
        18fe00:	e58d0004 	str	r0, [sp, #4]	; fField4
        18fe04:	e59d0014 	ldr	r0, [sp, #20]
        18fe08:	e1a00800 	mov	r0, r0, lsl #16
        18fe0c:	e58d0008 	str	r0, [sp, #8]	; fField8
        18fe10:	e59d0016 	ldr	r0, [sp, #22]
        18fe14:	e1a00800 	mov	r0, r0, lsl #16
        18fe18:	e58d000c 	str	r0, [sp, #12]	; fField12
        18fe1c:	e5955000 	ldr	r5, [r5]
        18fe20:	e59f018c 	ldr	r0, [pc, #18c]	; 18ffb4 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x578>
        18fe24:	e1a0100d 	mov	r1, sp
        18fe28:	e5850008 	str	r0, [r5, #8]	; fField8
        18fe2c:	e1a00005 	mov	r0, r5
        18fe30:	eb67593a 	bl	1b66320 <TUnit::$SetBBox(FRect *)>
        18fe34:	e59fa17c 	ldr	sl, [pc, #17c]	; 18ffb8 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x57c>
        18fe38:	e1a00005 	mov	r0, r5
        18fe3c:	e3a01000 	mov	r1, #0	; 0x0
        18fe40:	e58a4000 	str	r4, [sl]
        18fe44:	eb675d50 	bl	1b6738c <$GetContextUnits(TUnit *, long)>
        18fe48:	e1a05000 	mov	r5, r0
        18fe4c:	e3a00000 	mov	r0, #0	; 0x0
        18fe50:	e58a0000 	str	r0, [sl]
        18fe54:	e24dd020 	sub	sp, sp, #32	; 0x20
        18fe58:	e59d0078 	ldr	r0, [sp, #120]
        18fe5c:	e5900000 	ldr	r0, [r0]
        18fe60:	e58d0034 	str	r0, [sp, #52]
        18fe64:	e5960000 	ldr	r0, [r6]
        18fe68:	e1a00840 	mov	r0, r0, asr #16
        18fe6c:	eb645d4f 	bl	1aa73b0 <$IsClosed(long)>
        18fe70:	e1a0a000 	mov	sl, r0
        18fe74:	e3a00000 	mov	r0, #0	; 0x0
        18fe78:	e58d0030 	str	r0, [sp, #48]
        18fe7c:	e28d3044 	add	r3, sp, #68	; 0x44
        18fe80:	e1a02005 	mov	r2, r5
        18fe84:	e92d000c 	stmdb	sp!, {r2, r3}
        18fe88:	e2860004 	add	r0, r6, #4	; 0x4
        18fe8c:	e1a03007 	mov	r3, r7
        18fe90:	e1a02008 	mov	r2, r8
        18fe94:	e58d0078 	str	r0, [sp, #120]
        18fe98:	e28d103c 	add	r1, sp, #60	; 0x3c
        18fe9c:	eb645d4b 	bl	1aa73d0 <$SearchForSnap__FP6TPointR6TPointlT3P9TUnitListPl>
        18fea0:	e28dd008 	add	sp, sp, #8	; 0x8
        18fea4:	e28d3040 	add	r3, sp, #64	; 0x40
        18fea8:	e1a02005 	mov	r2, r5
        18feac:	e92d000c 	stmdb	sp!, {r2, r3}
        18feb0:	e1a03007 	mov	r3, r7
        18feb4:	e1a02008 	mov	r2, r8
        18feb8:	e59d0078 	ldr	r0, [sp, #120]
        18febc:	e28d103c 	add	r1, sp, #60	; 0x3c
        18fec0:	eb645d42 	bl	1aa73d0 <$SearchForSnap__FP6TPointR6TPointlT3P9TUnitListPl>
        18fec4:	e28dd008 	add	sp, sp, #8	; 0x8
        18fec8:	e3350000 	teq	r5, #0	; 0x0
        18fecc:	11a00005 	movne	r0, r5
        18fed0:	1b675d30 	blne	1b67398 <$DisposeContextUnits(TUnitList *)>
        18fed4:	e59d0044 	ldr	r0, [sp, #68]
        18fed8:	e59d1040 	ldr	r1, [sp, #64]
        18fedc:	e1500001 	cmp	r0, r1
        18fee0:	d28d3030 	addle	r3, sp, #48	; 0x30
        18fee4:	d1a0200d 	movle	r2, sp
        18fee8:	da00000c 	ble	18ff20 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x4e4>
        18feec:	e33a0000 	teq	sl, #0	; 0x0
        18fef0:	0a00000b 	beq	18ff24 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x4e8>
        18fef4:	e28d3030 	add	r3, sp, #48	; 0x30
        18fef8:	e1a0200d 	mov	r2, sp
        18fefc:	e3a00000 	mov	r0, #0	; 0x0
        18ff00:	eb645d34 	bl	1aa73d8 <$AddInterval__FlT1PlT3>
        18ff04:	e5960002 	ldr	r0, [r6, #2]	; fField2
        18ff08:	e1a00820 	mov	r0, r0, lsr #16
        18ff0c:	e2400001 	sub	r0, r0, #1	; 0x1
        18ff10:	e1a01800 	mov	r1, r0, lsl #16
        18ff14:	e28d3030 	add	r3, sp, #48	; 0x30
        18ff18:	e1a0200d 	mov	r2, sp
        18ff1c:	e59d0044 	ldr	r0, [sp, #68]
        18ff20:	eb645d2c 	bl	1aa73d8 <$AddInterval__FlT1PlT3>
        18ff24:	e24dd010 	sub	sp, sp, #16	; 0x10
        18ff28:	e1a0300d 	mov	r3, sp
        18ff2c:	e28d2008 	add	r2, sp, #8	; 0x8
        18ff30:	e28d1004 	add	r1, sp, #4	; 0x4
        18ff34:	e28d000c 	add	r0, sp, #12	; 0xc
        18ff38:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        18ff3c:	e1a0300a 	mov	r3, sl
        18ff40:	e5960002 	ldr	r0, [r6, #2]	; fField2
        18ff44:	e1a00820 	mov	r0, r0, lsr #16
        18ff48:	e2400001 	sub	r0, r0, #1	; 0x1
        18ff4c:	e1a02800 	mov	r2, r0, lsl #16
        18ff50:	e92d000c 	stmdb	sp!, {r2, r3}
        18ff54:	e1a03007 	mov	r3, r7
        18ff58:	e1a02008 	mov	r2, r8
        18ff5c:	e28d1058 	add	r1, sp, #88	; 0x58
        18ff60:	e28d0028 	add	r0, sp, #40	; 0x28
        18ff64:	eb645d1c 	bl	1aa73dc <$ExtractHiliteFromIntervals__FPlT1lN23UcN41>
        18ff68:	e28dd018 	add	sp, sp, #24	; 0x18
        18ff6c:	e3300000 	teq	r0, #0	; 0x0
        18ff70:	0a000007 	beq	18ff94 <TPolygonView::HiliteTraced(TUnitPublic *, unsigned char)+0x558>
        18ff74:	e59d3000 	ldr	r3, [sp]
        18ff78:	e92d0008 	stmdb	sp!, {r3}
        18ff7c:	e1a00004 	mov	r0, r4
        18ff80:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        18ff84:	e28d3008 	add	r3, sp, #8	; 0x8
        18ff88:	e893000c 	ldmia	r3, {r2, r3}
        18ff8c:	eb642f85 	bl	1a9bda8 <TPolygonView::$MakeHilite(long, long, long, long)>
        18ff90:	e28dd004 	add	sp, sp, #4	; 0x4
        18ff94:	e3a04001 	mov	r4, #1	; 0x1
        18ff98:	e1a00009 	mov	r0, r9
        18ff9c:	eb68cc86 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18ffa0:	e28d0078 	add	r0, sp, #120	; 0x78
        18ffa4:	e3a01000 	mov	r1, #0	; 0x0
        18ffa8:	eb68c854 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        18ffac:	e1a00004 	mov	r0, r4
        18ffb0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18ffb4:	47534850 	undefined
        18ffb8:	0c100cec 	ldceq	12, cr0, [r0], -#944
    */
}

/**
 * Symbol: TPolygonView::RealDoCommand(RefVar const &)
 * Address: 0018ffbc
 */
TPolygonView::RealDoCommand(RefVar const &) {
    /*
        18ffbc:	e1a0c00d 	mov	ip, sp
        18ffc0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        18ffc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        18ffc8:	e1a04000 	mov	r4, r0
        18ffcc:	e1a05001 	mov	r5, r1
        18ffd0:	e3a08000 	mov	r8, #0	; 0x0
        18ffd4:	e1a00001 	mov	r0, r1
        18ffd8:	eb6458da 	bl	1aa6348 <$CommandID(RefVar const &)>
        18ffdc:	e59f920c 	ldr	r9, [pc, #20c]	; 1901f0 <TPolygonView::RealDoCommand(RefVar const &)+0x234>
        18ffe0:	e2847010 	add	r7, r4, #16	; 0x10
        18ffe4:	e3500044 	cmp	r0, #68	; 0x44
        18ffe8:	0a0000c9 	beq	190314 <TPolygonView::RealDoCommand(RefVar const &)+0x358>
        18ffec:	ca000082 	bgt	1901fc <TPolygonView::RealDoCommand(RefVar const &)+0x240>
        18fff0:	e59f11fc 	ldr	r1, [pc, #1fc]	; 1901f4 <TPolygonView::RealDoCommand(RefVar const &)+0x238>	; fField1
        18fff4:	e59f61fc 	ldr	r6, [pc, #1fc]	; 1901f8 <TPolygonView::RealDoCommand(RefVar const &)+0x23c>	; fField1
        18fff8:	e3300019 	teq	r0, #25	; 0x19
        18fffc:	0a000221 	beq	190888 <TPolygonView::RealDoCommand(RefVar const &)+0x8cc>
        190000:	e3300032 	teq	r0, #50	; 0x32
        190004:	0a0001cc 	beq	19073c <TPolygonView::RealDoCommand(RefVar const &)+0x780>
        190008:	e3300043 	teq	r0, #67	; 0x43
        19000c:	1a00025e 	bne	19098c <TPolygonView::RealDoCommand(RefVar const &)+0x9d0>
        190010:	e24dd008 	sub	sp, sp, #8	; 0x8
        190014:	e1a00005 	mov	r0, r5
        190018:	e3a01000 	mov	r1, #0	; 0x0
        19001c:	eb6458d2 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        190020:	e1a06000 	mov	r6, r0
        190024:	e1a00004 	mov	r0, r4
        190028:	eb64379e 	bl	1a9dea8 <TPolygonView::$Points(void)>
        19002c:	e1a01000 	mov	r1, r0
        190030:	e1a0000d 	mov	r0, sp
        190034:	eb68c425 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        190038:	e1a0100d 	mov	r1, sp
        19003c:	e28d0004 	add	r0, sp, #4	; 0x4
        190040:	eb68c423 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        190044:	e1a0000d 	mov	r0, sp
        190048:	e3a01000 	mov	r1, #0	; 0x0
        19004c:	eb68c82b 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        190050:	e3a0a000 	mov	sl, #0	; 0x0
        190054:	e28d0004 	add	r0, sp, #4	; 0x4
        190058:	eb68c82d 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        19005c:	e1a09000 	mov	r9, r0
        190060:	e5900002 	ldr	r0, [r0, #2]	; fField2
        190064:	e1560840 	cmp	r6, r0, asr #16
        190068:	aa00005b 	bge	1901dc <TPolygonView::RealDoCommand(RefVar const &)+0x220>
        19006c:	e24dd004 	sub	sp, sp, #4	; 0x4
        190070:	e1a00005 	mov	r0, r5
        190074:	e3a01001 	mov	r1, #1	; 0x1
        190078:	eb6458bb 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        19007c:	e40d0004 	str	r0, [sp], -#4	; fField4
        190080:	e0890106 	add	r0, r9, r6, lsl #2
        190084:	e2800004 	add	r0, r0, #4	; 0x4
        190088:	e5971000 	ldr	r1, [r7]
        19008c:	e58d1000 	str	r1, [sp]
        190090:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        190094:	e59d2000 	ldr	r2, [sp]
        190098:	e0411002 	sub	r1, r1, r2
        19009c:	e1a01801 	mov	r1, r1, lsl #16
        1900a0:	e1a01841 	mov	r1, r1, asr #16
        1900a4:	e59d2006 	ldr	r2, [sp, #6]	; fField6
        1900a8:	e41d3004 	ldr	r3, [sp], -#4	; fField4
        1900ac:	e1a03823 	mov	r3, r3, lsr #16
        1900b0:	e0422003 	sub	r2, r2, r3
        1900b4:	e1a02802 	mov	r2, r2, lsl #16
        1900b8:	e1a02842 	mov	r2, r2, asr #16
        1900bc:	e5cd1003 	strb	r1, [sp, #3]
        1900c0:	e1a01441 	mov	r1, r1, asr #8
        1900c4:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        1900c8:	e5cd2001 	strb	r2, [sp, #1]	; fField1
        1900cc:	e1a01442 	mov	r1, r2, asr #8
        1900d0:	e5cd1000 	strb	r1, [sp]
        1900d4:	e59d1000 	ldr	r1, [sp]
        1900d8:	e5801000 	str	r1, [r0]
        1900dc:	e28dd008 	add	sp, sp, #8	; 0x8
        1900e0:	e5990000 	ldr	r0, [r9]
        1900e4:	e1a00840 	mov	r0, r0, asr #16
        1900e8:	e1a05000 	mov	r5, r0
        1900ec:	e330000a 	teq	r0, #10	; 0xa
        1900f0:	1330000b 	teqne	r0, #11	; 0xb
        1900f4:	1330000c 	teqne	r0, #12	; 0xc
        1900f8:	03a05004 	moveq	r5, #4	; 0x4
        1900fc:	05c95001 	streqb	r5, [r9, #1]	; fField1
        190100:	05c9a000 	streqb	sl, [r9]
        190104:	e1a00004 	mov	r0, r4
        190108:	eb6485f2 	bl	1ab18d8 <TView::$FirstHilite(void)>
        19010c:	eb68c80e 	bl	1bc214c <$AllocateRefHandle(long)>
        190110:	e1a0a000 	mov	sl, r0
        190114:	e5900000 	ldr	r0, [r0]
        190118:	e3300002 	teq	r0, #2	; 0x2
        19011c:	0a000022 	beq	1901ac <TPolygonView::RealDoCommand(RefVar const &)+0x1f0>
        190120:	eb643fae 	bl	1a9ffe0 <$RefToAddress(long)>
        190124:	e1a01000 	mov	r1, r0
        190128:	e5900020 	ldr	r0, [r0, #32]	; fField32
        19012c:	e5902002 	ldr	r2, [r0, #2]	; fField2
        190130:	e1560842 	cmp	r6, r2, asr #16
        190134:	aa00001c 	bge	1901ac <TPolygonView::RealDoCommand(RefVar const &)+0x1f0>
        190138:	e24dd004 	sub	sp, sp, #4	; 0x4
        19013c:	e0800106 	add	r0, r0, r6, lsl #2
        190140:	e2800004 	add	r0, r0, #4	; 0x4
        190144:	e5972000 	ldr	r2, [r7]
        190148:	e58d2000 	str	r2, [sp]
        19014c:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        190150:	e59d3000 	ldr	r3, [sp]
        190154:	e0422003 	sub	r2, r2, r3
        190158:	e1a02802 	mov	r2, r2, lsl #16
        19015c:	e1a02842 	mov	r2, r2, asr #16
        190160:	e59d3006 	ldr	r3, [sp, #6]	; fField6
        190164:	e41dc004 	ldr	ip, [sp], -#4	; fField4
        190168:	e1a0c82c 	mov	ip, ip, lsr #16
        19016c:	e043300c 	sub	r3, r3, ip
        190170:	e1a03803 	mov	r3, r3, lsl #16
        190174:	e1a03843 	mov	r3, r3, asr #16
        190178:	e5cd2003 	strb	r2, [sp, #3]
        19017c:	e1a02442 	mov	r2, r2, asr #8
        190180:	e5cd2002 	strb	r2, [sp, #2]	; fField2
        190184:	e5cd3001 	strb	r3, [sp, #1]	; fField1
        190188:	e1a02443 	mov	r2, r3, asr #8
        19018c:	e5cd2000 	strb	r2, [sp]
        190190:	e59d2000 	ldr	r2, [sp]
        190194:	e5802000 	str	r2, [r0]
        190198:	e28dd008 	add	sp, sp, #8	; 0x8
        19019c:	e5b10020 	ldr	r0, [r1, #32]!	; fField32
        1901a0:	e5c05001 	strb	r5, [r0, #1]	; fField1
        1901a4:	e1a01445 	mov	r1, r5, asr #8
        1901a8:	e5c01000 	strb	r1, [r0]
        1901ac:	e1a01009 	mov	r1, r9
        1901b0:	e1a00004 	mov	r0, r4
        1901b4:	eb64543b 	bl	1aa52a8 <TPolygonView::$UpdateBounds(PolygonShape *)>
        1901b8:	e3a01000 	mov	r1, #0	; 0x0
        1901bc:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        1901c0:	e5902000 	ldr	r2, [r0]
        1901c4:	e1a0e00f 	mov	lr, pc
        1901c8:	e282f054 	add	pc, r2, #84	; 0x54
        1901cc:	e3a08001 	mov	r8, #1	; 0x1
        1901d0:	e1a0000a 	mov	r0, sl
        1901d4:	eb68cbf8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1901d8:	e28dd004 	add	sp, sp, #4	; 0x4
        1901dc:	e28d0004 	add	r0, sp, #4	; 0x4
        1901e0:	e3a01000 	mov	r1, #0	; 0x0
        1901e4:	eb68c7c5 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1901e8:	e28dd008 	add	sp, sp, #8	; 0x8
        1901ec:	ea0001ea 	b	19099c <TPolygonView::RealDoCommand(RefVar const &)+0x9e0>
        1901f0:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        1901f4:	00683220 	rsbeq	r3, r8, r0, lsr #4
        1901f8:	00682a28 	rsbeq	r2, r8, r8, lsr #20
        1901fc:	e3300047 	teq	r0, #71	; 0x47
        190200:	0a0001e1 	beq	19098c <TPolygonView::RealDoCommand(RefVar const &)+0x9d0>
        190204:	e330004b 	teq	r0, #75	; 0x4b
        190208:	1a0001df 	bne	19098c <TPolygonView::RealDoCommand(RefVar const &)+0x9d0>
        19020c:	e24dd004 	sub	sp, sp, #4	; 0x4
        190210:	e1a00004 	mov	r0, r4
        190214:	eb6485af 	bl	1ab18d8 <TView::$FirstHilite(void)>
        190218:	eb68c7cb 	bl	1bc214c <$AllocateRefHandle(long)>
        19021c:	e58d0000 	str	r0, [sp]
        190220:	e5900000 	ldr	r0, [r0]
        190224:	e3300002 	teq	r0, #2	; 0x2
        190228:	0a000036 	beq	190308 <TPolygonView::RealDoCommand(RefVar const &)+0x34c>
        19022c:	e1a00005 	mov	r0, r5
        190230:	eb645848 	bl	1aa6358 <$CommandParameter(RefVar const &)>
        190234:	e1a07000 	mov	r7, r0
        190238:	e1a00004 	mov	r0, r4
        19023c:	eb00039c 	bl	1910b4 <TPolygonView::GetPenSize(void)>
        190240:	e1a06000 	mov	r6, r0
        190244:	e3a05000 	mov	r5, #0	; 0x0
        190248:	e1a0100d 	mov	r1, sp
        19024c:	e1a00004 	mov	r0, r4
        190250:	e5942000 	ldr	r2, [r4]
        190254:	e1a0e00f 	mov	lr, pc
        190258:	e282f09c 	add	pc, r2, #156	; 0x9c
        19025c:	e3300000 	teq	r0, #0	; 0x0
        190260:	11a08004 	movne	r8, r4
        190264:	1a00000b 	bne	190298 <TPolygonView::RealDoCommand(RefVar const &)+0x2dc>
        190268:	e3a00000 	mov	r0, #0	; 0x0
        19026c:	e3a03000 	mov	r3, #0	; 0x0
        190270:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        190274:	e92d0008 	stmdb	sp!, {r3}
        190278:	e28d3004 	add	r3, sp, #4	; 0x4
        19027c:	e28d1008 	add	r1, sp, #8	; 0x8
        190280:	e594201c 	ldr	r2, [r4, #28]	; fField28
        190284:	e1a00004 	mov	r0, r4
        190288:	eb640165 	bl	1a90824 <TDataView::$DiceHilited(RefVar const &, TEditView *, TPoint &, unsigned char)>
        19028c:	e1a08000 	mov	r8, r0
        190290:	e3a05001 	mov	r5, #1	; 0x1
        190294:	e28dd008 	add	sp, sp, #8	; 0x8
        190298:	e3380000 	teq	r8, #0	; 0x0
        19029c:	0a000019 	beq	190308 <TPolygonView::RealDoCommand(RefVar const &)+0x34c>
        1902a0:	e1a01007 	mov	r1, r7
        1902a4:	e1a00008 	mov	r0, r8
        1902a8:	eb000385 	bl	1910c4 <TPolygonView::SetPenSize(long)>
        1902ac:	e1a00008 	mov	r0, r8
        1902b0:	e3a01000 	mov	r1, #0	; 0x0
        1902b4:	e5982000 	ldr	r2, [r8]
        1902b8:	e1a0e00f 	mov	lr, pc
        1902bc:	e282f054 	add	pc, r2, #84	; 0x54
        1902c0:	e3350000 	teq	r5, #0	; 0x0
        1902c4:	1a00000f 	bne	190308 <TPolygonView::RealDoCommand(RefVar const &)+0x34c>
        1902c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1902cc:	e1a01004 	mov	r1, r4
        1902d0:	e3a02302 	mov	r2, #134217728	; 0x8000000
        1902d4:	e3a0004b 	mov	r0, #75	; 0x4b
        1902d8:	eb645818 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1902dc:	eb68c79a 	bl	1bc214c <$AllocateRefHandle(long)>
        1902e0:	e1a01006 	mov	r1, r6
        1902e4:	e58d0000 	str	r0, [sp]
        1902e8:	e1a0000d 	mov	r0, sp
        1902ec:	eb64581a 	bl	1aa635c <$CommandSetParameter(RefVar const &, long)>
        1902f0:	e1a0100d 	mov	r1, sp
        1902f4:	e5990000 	ldr	r0, [r9]
        1902f8:	eb6436ff 	bl	1a9defc <TApplication::$PostUndoCommand(RefVar const &)>
        1902fc:	e59d0000 	ldr	r0, [sp]
        190300:	eb68cbad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        190304:	e28dd004 	add	sp, sp, #4	; 0x4
        190308:	e3a08001 	mov	r8, #1	; 0x1
        19030c:	e59d0000 	ldr	r0, [sp]
        190310:	ea000008 	b	190338 <TPolygonView::RealDoCommand(RefVar const &)+0x37c>
        190314:	e24dd004 	sub	sp, sp, #4	; 0x4
        190318:	e1a00004 	mov	r0, r4
        19031c:	eb6436e1 	bl	1a9dea8 <TPolygonView::$Points(void)>
        190320:	eb68c789 	bl	1bc214c <$AllocateRefHandle(long)>
        190324:	e58d0000 	str	r0, [sp]
        190328:	e5900000 	ldr	r0, [r0]
        19032c:	e3300002 	teq	r0, #2	; 0x2
        190330:	1a000002 	bne	190340 <TPolygonView::RealDoCommand(RefVar const &)+0x384>
        190334:	e59d0000 	ldr	r0, [sp]
        190338:	eb68cb9f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        19033c:	ea00018f 	b	190980 <TPolygonView::RealDoCommand(RefVar const &)+0x9c4>
        190340:	e24dd020 	sub	sp, sp, #32	; 0x20
        190344:	e1a00005 	mov	r0, r5
        190348:	e3a01000 	mov	r1, #0	; 0x0
        19034c:	eb645806 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        190350:	e1a0a000 	mov	sl, r0
        190354:	e1a00005 	mov	r0, r5
        190358:	e3a01001 	mov	r1, #1	; 0x1
        19035c:	eb645802 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        190360:	e1a06000 	mov	r6, r0
        190364:	e1a00005 	mov	r0, r5
        190368:	e3a01002 	mov	r1, #2	; 0x2
        19036c:	eb6457fe 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        190370:	e1a08000 	mov	r8, r0
        190374:	e1a00005 	mov	r0, r5
        190378:	e3a01003 	mov	r1, #3	; 0x3
        19037c:	eb6457fa 	bl	1aa636c <$CommandIndexParameter(RefVar const &, long)>
        190380:	e58d001c 	str	r0, [sp, #28]	; fField28
        190384:	e28d1020 	add	r1, sp, #32	; 0x20
        190388:	e1a0000d 	mov	r0, sp
        19038c:	eb68c351 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        190390:	e1a0100d 	mov	r1, sp
        190394:	e28d0018 	add	r0, sp, #24	; 0x18
        190398:	eb68c34d 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        19039c:	e1a0000d 	mov	r0, sp
        1903a0:	e3a01000 	mov	r1, #0	; 0x0
        1903a4:	eb68c755 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1903a8:	e28d0018 	add	r0, sp, #24	; 0x18
        1903ac:	eb68c758 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1903b0:	e58d0014 	str	r0, [sp, #20]
        1903b4:	e2800004 	add	r0, r0, #4	; 0x4
        1903b8:	e58d0010 	str	r0, [sp, #16]	; fField16
        1903bc:	e5970000 	ldr	r0, [r7]
        1903c0:	e58d000c 	str	r0, [sp, #12]	; fField12
        1903c4:	e59d0014 	ldr	r0, [sp, #20]
        1903c8:	eb642a62 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        1903cc:	e3300000 	teq	r0, #0	; 0x0
        1903d0:	128d1004 	addne	r1, sp, #4	; 0x4
        1903d4:	11a00004 	movne	r0, r4
        1903d8:	1b645be9 	blne	1aa7384 <TPolygonView::$GetArcBounds(TRect &)>
        1903dc:	e3a03000 	mov	r3, #0	; 0x0
        1903e0:	e1a00005 	mov	r0, r5
        1903e4:	e52d3004 	str	r3, [sp, -#4]!	; fField4
        1903e8:	eb645be4 	bl	1aa7380 <$CommandPoints(RefVar const &)>
        1903ec:	e3300002 	teq	r0, #2	; 0x2
        1903f0:	0a000010 	beq	190438 <TPolygonView::RealDoCommand(RefVar const &)+0x47c>
        1903f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1903f8:	e1a01000 	mov	r1, r0
        1903fc:	e1a0000d 	mov	r0, sp
        190400:	eb68c332 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        190404:	e1a0100d 	mov	r1, sp
        190408:	e28d0004 	add	r0, sp, #4	; 0x4
        19040c:	eb68c330 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        190410:	e1a0000d 	mov	r0, sp
        190414:	e3a01000 	mov	r1, #0	; 0x0
        190418:	eb68c738 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        19041c:	e28d0004 	add	r0, sp, #4	; 0x4
        190420:	eb68c73b 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        190424:	e58d0008 	str	r0, [sp, #8]	; fField8
        190428:	e28d0004 	add	r0, sp, #4	; 0x4
        19042c:	e3a01000 	mov	r1, #0	; 0x0
        190430:	eb68c732 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        190434:	e28dd008 	add	sp, sp, #8	; 0x8
        190438:	e24dd008 	sub	sp, sp, #8	; 0x8
        19043c:	e1a02006 	mov	r2, r6
        190440:	e1a00004 	mov	r0, r4
        190444:	e3a01044 	mov	r1, #68	; 0x44
        190448:	ebfff321 	bl	18d0d4 <TPolygonView::MakePointsCommand(unsigned long, long)>
        19044c:	eb68c73e 	bl	1bc214c <$AllocateRefHandle(long)>
        190450:	e1a0200a 	mov	r2, sl
        190454:	e58d0004 	str	r0, [sp, #4]	; fField4
        190458:	e28d0004 	add	r0, sp, #4	; 0x4
        19045c:	e3a01000 	mov	r1, #0	; 0x0
        190460:	eb6457c0 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        190464:	e1a02008 	mov	r2, r8
        190468:	e28d0004 	add	r0, sp, #4	; 0x4
        19046c:	e3a01001 	mov	r1, #1	; 0x1
        190470:	eb6457bc 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        190474:	e1a02006 	mov	r2, r6
        190478:	e28d0004 	add	r0, sp, #4	; 0x4
        19047c:	e3a01002 	mov	r1, #2	; 0x2
        190480:	eb6457b8 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        190484:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        190488:	e5900000 	ldr	r0, [r0]
        19048c:	e1a00840 	mov	r0, r0, asr #16
        190490:	e2802001 	add	r2, r0, #1	; 0x1
        190494:	e28d0004 	add	r0, sp, #4	; 0x4
        190498:	e3a01003 	mov	r1, #3	; 0x3
        19049c:	eb6457b1 	bl	1aa6368 <$CommandSetIndexParameter__FRC6RefVarlT2>
        1904a0:	e28d0004 	add	r0, sp, #4	; 0x4
        1904a4:	eb645bb5 	bl	1aa7380 <$CommandPoints(RefVar const &)>
        1904a8:	e1a01000 	mov	r1, r0
        1904ac:	e1a0000d 	mov	r0, sp
        1904b0:	eb68c306 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        1904b4:	e1a0100d 	mov	r1, sp
        1904b8:	e28d0024 	add	r0, sp, #36	; 0x24
        1904bc:	eb68c302 	bl	1bc10cc <DataPtr::$__as(DataPtr const &)>
        1904c0:	e1a0000d 	mov	r0, sp
        1904c4:	e3a01000 	mov	r1, #0	; 0x0
        1904c8:	eb68c70c 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1904cc:	e3a05000 	mov	r5, #0	; 0x0
        1904d0:	e28d0024 	add	r0, sp, #36	; 0x24
        1904d4:	eb68c70e 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1904d8:	e1a01000 	mov	r1, r0
        1904dc:	e3560000 	cmp	r6, #0	; 0x0
        1904e0:	da000003 	ble	1904f4 <TPolygonView::RealDoCommand(RefVar const &)+0x538>
        1904e4:	e1a02106 	mov	r2, r6, lsl #2
        1904e8:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        1904ec:	e080010a 	add	r0, r0, sl, lsl #2
        1904f0:	eb693a97 	bl	1bdef54 <$BlockMove>
        1904f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1904f8:	e1a03108 	mov	r3, r8, lsl #2
        1904fc:	e92d0008 	stmdb	sp!, {r3}
        190500:	e1a02106 	mov	r2, r6, lsl #2
        190504:	e3a00004 	mov	r0, #4	; 0x4
        190508:	e080110a 	add	r1, r0, sl, lsl #2
        19050c:	e59d3014 	ldr	r3, [sp, #20]
        190510:	e28d0038 	add	r0, sp, #56	; 0x38
        190514:	eb642e36 	bl	1a9bdf4 <$Munger__FRC6RefVarlT2PcT2>
        190518:	e28dd004 	add	sp, sp, #4	; 0x4
        19051c:	eb68c70a 	bl	1bc214c <$AllocateRefHandle(long)>
        190520:	e58d0004 	str	r0, [sp, #4]	; fField4
        190524:	e28d1004 	add	r1, sp, #4	; 0x4
        190528:	e1a0000d 	mov	r0, sp
        19052c:	eb68c2e9 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        190530:	e1a0100d 	mov	r1, sp
        190534:	e28d002c 	add	r0, sp, #44	; 0x2c
        190538:	eb68c2e3 	bl	1bc10cc <DataPtr::$__as(DataPtr const &)>
        19053c:	e1a0000d 	mov	r0, sp
        190540:	e3a01000 	mov	r1, #0	; 0x0
        190544:	eb68c6ed 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        190548:	e24dd004 	sub	sp, sp, #4	; 0x4
        19054c:	e28d0030 	add	r0, sp, #48	; 0x30
        190550:	eb68c6ef 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        190554:	e1a0a000 	mov	sl, r0
        190558:	e5900002 	ldr	r0, [r0, #2]	; fField2
        19055c:	e1a00820 	mov	r0, r0, lsr #16
        190560:	e0481006 	sub	r1, r8, r6
        190564:	e0800001 	add	r0, r0, r1
        190568:	e5ca0003 	strb	r0, [sl, #3]
        19056c:	e1a00440 	mov	r0, r0, asr #8
        190570:	e5ca0002 	strb	r0, [sl, #2]	; fField2
        190574:	e1a0100a 	mov	r1, sl
        190578:	e1a00004 	mov	r0, r4
        19057c:	eb645349 	bl	1aa52a8 <TPolygonView::$UpdateBounds(PolygonShape *)>
        190580:	e28d0010 	add	r0, sp, #16	; 0x10
        190584:	eb645b7d 	bl	1aa7380 <$CommandPoints(RefVar const &)>
        190588:	e1a01000 	mov	r1, r0
        19058c:	e1a0000d 	mov	r0, sp
        190590:	eb68c2ce 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        190594:	e1a0100d 	mov	r1, sp
        190598:	e28d0030 	add	r0, sp, #48	; 0x30
        19059c:	eb68c2ca 	bl	1bc10cc <DataPtr::$__as(DataPtr const &)>
        1905a0:	e1a0000d 	mov	r0, sp
        1905a4:	e3a01000 	mov	r1, #0	; 0x0
        1905a8:	eb68c6d4 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1905ac:	e28d0030 	add	r0, sp, #48	; 0x30
        1905b0:	eb68c6d7 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1905b4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1905b8:	e5971000 	ldr	r1, [r7]
        1905bc:	e58d1000 	str	r1, [sp]
        1905c0:	e59d202c 	ldr	r2, [sp, #44]
        1905c4:	e59d1000 	ldr	r1, [sp]
        1905c8:	e0421001 	sub	r1, r2, r1
        1905cc:	e1a01801 	mov	r1, r1, lsl #16
        1905d0:	e1a01841 	mov	r1, r1, asr #16
        1905d4:	e59d302e 	ldr	r3, [sp, #46]
        1905d8:	e41d2004 	ldr	r2, [sp], -#4	; fField4
        1905dc:	e1a02822 	mov	r2, r2, lsr #16
        1905e0:	e0432002 	sub	r2, r3, r2
        1905e4:	e1a02802 	mov	r2, r2, lsl #16
        1905e8:	e1a02842 	mov	r2, r2, asr #16
        1905ec:	e5cd1003 	strb	r1, [sp, #3]
        1905f0:	e1a01441 	mov	r1, r1, asr #8
        1905f4:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        1905f8:	e5cd2001 	strb	r2, [sp, #1]	; fField1
        1905fc:	e1a01442 	mov	r1, r2, asr #8
        190600:	e5cd1000 	strb	r1, [sp]
        190604:	e49d1008 	ldr	r1, [sp], #8	; fField8
        190608:	e3a02000 	mov	r2, #0	; 0x0
        19060c:	e3560000 	cmp	r6, #0	; 0x0
        190610:	e58d1000 	str	r1, [sp]
        190614:	da000011 	ble	190660 <TPolygonView::RealDoCommand(RefVar const &)+0x6a4>
        190618:	e0801102 	add	r1, r0, r2, lsl #2
        19061c:	e5913000 	ldr	r3, [r1]
        190620:	e1a03823 	mov	r3, r3, lsr #16
        190624:	e59dc002 	ldr	ip, [sp, #2]	; fField2
        190628:	e083300c 	add	r3, r3, ip
        19062c:	e5c13001 	strb	r3, [r1, #1]	; fField1
        190630:	e1a03443 	mov	r3, r3, asr #8
        190634:	e5c13000 	strb	r3, [r1]
        190638:	e591c002 	ldr	ip, [r1, #2]	; fField2
        19063c:	e1a0c82c 	mov	ip, ip, lsr #16
        190640:	e59d3000 	ldr	r3, [sp]
        190644:	e08c3003 	add	r3, ip, r3
        190648:	e5c13003 	strb	r3, [r1, #3]
        19064c:	e1a03443 	mov	r3, r3, asr #8
        190650:	e5c13002 	strb	r3, [r1, #2]	; fField2
        190654:	e2822001 	add	r2, r2, #1	; 0x1
        190658:	e1520006 	cmp	r2, r6
        19065c:	baffffed 	blt	190618 <TPolygonView::RealDoCommand(RefVar const &)+0x65c>
        190660:	e1a0000a 	mov	r0, sl
        190664:	eb6429bb 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        190668:	e3300000 	teq	r0, #0	; 0x0
        19066c:	128d1020 	addne	r1, sp, #32	; 0x20
        190670:	11a00004 	movne	r0, r4
        190674:	1b645b43 	blne	1aa7388 <TPolygonView::$SetArcBounds(TRect const &)>
        190678:	e59d0038 	ldr	r0, [sp, #56]
        19067c:	e3300000 	teq	r0, #0	; 0x0
        190680:	0a000005 	beq	19069c <TPolygonView::RealDoCommand(RefVar const &)+0x6e0>
        190684:	e59d0038 	ldr	r0, [sp, #56]
        190688:	e2400001 	sub	r0, r0, #1	; 0x1
        19068c:	e5ca0001 	strb	r0, [sl, #1]	; fField1
        190690:	e1a00440 	mov	r0, r0, asr #8
        190694:	e5ca0000 	strb	r0, [sl]
        190698:	ea00000b 	b	1906cc <TPolygonView::RealDoCommand(RefVar const &)+0x710>
        19069c:	e1a0000a 	mov	r0, sl
        1906a0:	eb6429ac 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        1906a4:	e3300000 	teq	r0, #0	; 0x0
        1906a8:	13a0000d 	movne	r0, #13	; 0xd
        1906ac:	1a000004 	bne	1906c4 <TPolygonView::RealDoCommand(RefVar const &)+0x708>
        1906b0:	e1a0000a 	mov	r0, sl
        1906b4:	eb6429a6 	bl	1a9ad54 <PolygonShape::$IsCurvy(void)>
        1906b8:	e3300000 	teq	r0, #0	; 0x0
        1906bc:	03a00005 	moveq	r0, #5	; 0x5
        1906c0:	13a00007 	movne	r0, #7	; 0x7
        1906c4:	e5ca0001 	strb	r0, [sl, #1]	; fField1
        1906c8:	e5ca5000 	strb	r5, [sl]
        1906cc:	e28d200c 	add	r2, sp, #12	; 0xc
        1906d0:	e59f1060 	ldr	r1, [pc, #60]	; 190738 <TPolygonView::RealDoCommand(RefVar const &)+0x77c>
        1906d4:	e1a00004 	mov	r0, r4
        1906d8:	e5943000 	ldr	r3, [r4]
        1906dc:	e1a0e00f 	mov	lr, pc
        1906e0:	e283f048 	add	pc, r3, #72	; 0x48
        1906e4:	e28d1014 	add	r1, sp, #20	; 0x14
        1906e8:	e5990000 	ldr	r0, [r9]
        1906ec:	eb643602 	bl	1a9defc <TApplication::$PostUndoCommand(RefVar const &)>
        1906f0:	e3a01000 	mov	r1, #0	; 0x0
        1906f4:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        1906f8:	e5902000 	ldr	r2, [r0]
        1906fc:	e1a0e00f 	mov	lr, pc
        190700:	e282f054 	add	pc, r2, #84	; 0x54
        190704:	e3a08001 	mov	r8, #1	; 0x1
        190708:	e28dd008 	add	sp, sp, #8	; 0x8
        19070c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        190710:	eb68caa9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        190714:	e28dd008 	add	sp, sp, #8	; 0x8
        190718:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        19071c:	eb68caa6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        190720:	e28dd00c 	add	sp, sp, #12	; 0xc
        190724:	e28d0018 	add	r0, sp, #24	; 0x18
        190728:	e3a01000 	mov	r1, #0	; 0x0
        19072c:	eb68c673 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        190730:	e28dd020 	add	sp, sp, #32	; 0x20
        190734:	eafffefe 	b	190334 <TPolygonView::RealDoCommand(RefVar const &)+0x378>
        190738:	00683f18 	rsbeq	r3, r8, r8, lsl pc
        19073c:	e1a00004 	mov	r0, r4
        190740:	eb68e780 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        190744:	e3300002 	teq	r0, #2	; 0x2
        190748:	0a000093 	beq	19099c <TPolygonView::RealDoCommand(RefVar const &)+0x9e0>
        19074c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        190750:	eb64ad9e 	bl	1abbdd0 <$ViewAllowsText(TView *)>
        190754:	e3300000 	teq	r0, #0	; 0x0
        190758:	0a000042 	beq	190868 <TPolygonView::RealDoCommand(RefVar const &)+0x8ac>
        19075c:	e3a03000 	mov	r3, #0	; 0x0
        190760:	e92d0008 	stmdb	sp!, {r3}
        190764:	e59fa110 	ldr	sl, [pc, #110]	; 19087c <TPolygonView::RealDoCommand(RefVar const &)+0x8c0>
        190768:	e3a02000 	mov	r2, #0	; 0x0
        19076c:	e3a01000 	mov	r1, #0	; 0x0
        190770:	e59a0000 	ldr	r0, [sl]
        190774:	eb650c9a 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
        190778:	e24dd004 	sub	sp, sp, #4	; 0x4
        19077c:	e59f00fc 	ldr	r0, [pc, #fc]	; 190880 <TPolygonView::RealDoCommand(RefVar const &)+0x8c4>
        190780:	e1a07000 	mov	r7, r0
        190784:	eb6418de 	bl	1a96b04 <$GetPreference(RefVar const &)>
        190788:	eb68c66f 	bl	1bc214c <$AllocateRefHandle(long)>
        19078c:	e58d0004 	str	r0, [sp, #4]	; fField4
        190790:	e28d8004 	add	r8, sp, #4	; 0x4
        190794:	e3a00002 	mov	r0, #2	; 0x2
        190798:	eb68c66b 	bl	1bc214c <$AllocateRefHandle(long)>
        19079c:	e58d0000 	str	r0, [sp]
        1907a0:	e1a0100d 	mov	r1, sp
        1907a4:	e1a00007 	mov	r0, r7
        1907a8:	eb644661 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
        1907ac:	e59d0000 	ldr	r0, [sp]
        1907b0:	eb68ca81 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1907b4:	e1a00004 	mov	r0, r4
        1907b8:	e3a01001 	mov	r1, #1	; 0x1
        1907bc:	e5942000 	ldr	r2, [r4]
        1907c0:	e1a0e00f 	mov	lr, pc
        1907c4:	e282f058 	add	pc, r2, #88	; 0x58
        1907c8:	e3a01000 	mov	r1, #0	; 0x0
        1907cc:	e59a0000 	ldr	r0, [sl]
        1907d0:	eb6452b3 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        1907d4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1907d8:	e5942004 	ldr	r2, [r4, #4]	; fField4
        1907dc:	e1a01004 	mov	r1, r4
        1907e0:	e3a00019 	mov	r0, #25	; 0x19
        1907e4:	eb6456d5 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1907e8:	eb68c657 	bl	1bc214c <$AllocateRefHandle(long)>
        1907ec:	e58d0008 	str	r0, [sp, #8]	; fField8
        1907f0:	e3a0001a 	mov	r0, #26	; 0x1a
        1907f4:	eb68c654 	bl	1bc214c <$AllocateRefHandle(long)>
        1907f8:	e58d0000 	str	r0, [sp]
        1907fc:	e1a0200d 	mov	r2, sp
        190800:	e1a01006 	mov	r1, r6
        190804:	e28d0008 	add	r0, sp, #8	; 0x8
        190808:	eb68d6d6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        19080c:	e59d0000 	ldr	r0, [sp]
        190810:	eb68ca69 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        190814:	e3a00002 	mov	r0, #2	; 0x2
        190818:	eb68c64b 	bl	1bc214c <$AllocateRefHandle(long)>
        19081c:	e58d0004 	str	r0, [sp, #4]	; fField4
        190820:	e28d2004 	add	r2, sp, #4	; 0x4
        190824:	e59f1058 	ldr	r1, [pc, #58]	; 190884 <TPolygonView::RealDoCommand(RefVar const &)+0x8c8>
        190828:	e28d0008 	add	r0, sp, #8	; 0x8
        19082c:	eb68d6cd 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        190830:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        190834:	eb68ca60 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        190838:	e28d1008 	add	r1, sp, #8	; 0x8
        19083c:	e5990000 	ldr	r0, [r9]
        190840:	eb63fffc 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        190844:	e1a01008 	mov	r1, r8
        190848:	e1a00007 	mov	r0, r7
        19084c:	eb644638 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
        190850:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        190854:	eb68ca58 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        190858:	e28dd00c 	add	sp, sp, #12	; 0xc
        19085c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        190860:	eb68ca55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        190864:	e28dd008 	add	sp, sp, #8	; 0x8
        190868:	e1a00005 	mov	r0, r5
        19086c:	e3a01001 	mov	r1, #1	; 0x1
        190870:	eb6456b7 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        190874:	e3a08001 	mov	r8, #1	; 0x1
        190878:	ea000047 	b	19099c <TPolygonView::RealDoCommand(RefVar const &)+0x9e0>
        19087c:	0c101934 	ldceq	9, cr1, [r0], -#208
        190880:	00684270 	rsbeq	r4, r8, r0, ror r2
        190884:	00684138 	rsbeq	r4, r8, r8, lsr r1
        190888:	e1a00004 	mov	r0, r4
        19088c:	eb68e72d 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        190890:	e3300002 	teq	r0, #2	; 0x2
        190894:	0a000040 	beq	19099c <TPolygonView::RealDoCommand(RefVar const &)+0x9e0>
        190898:	e3a0a000 	mov	sl, #0	; 0x0
        19089c:	e56da004 	strb	sl, [sp, -#4]!	; fField4
        1908a0:	e1a0100d 	mov	r1, sp
        1908a4:	e59f80dc 	ldr	r8, [pc, #dc]	; 190988 <TPolygonView::RealDoCommand(RefVar const &)+0x9cc>
        1908a8:	e5980000 	ldr	r0, [r8]
        1908ac:	eb675699 	bl	1b66318 <$SaveRecognitionState(TController *, unsigned char *)>
        1908b0:	e1a09000 	mov	r9, r0
        1908b4:	e5dd0000 	ldrb	r0, [sp]
        1908b8:	e3300000 	teq	r0, #0	; 0x0
        1908bc:	1a000028 	bne	190964 <TPolygonView::RealDoCommand(RefVar const &)+0x9a8>
        1908c0:	e1a00004 	mov	r0, r4
        1908c4:	eb68e2f7 	bl	1bc94a8 <TView::$BringToFront(void)>
        1908c8:	e5960000 	ldr	r0, [r6]
        1908cc:	e5901000 	ldr	r1, [r0]
        1908d0:	e5950000 	ldr	r0, [r5]
        1908d4:	e5900000 	ldr	r0, [r0]
        1908d8:	eb68ce60 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1908dc:	e3300002 	teq	r0, #2	; 0x2
        1908e0:	0a000005 	beq	1908fc <TPolygonView::RealDoCommand(RefVar const &)+0x940>
        1908e4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1908e8:	e8975000 	ldmia	r7, {ip, lr}
        1908ec:	e88d5000 	stmia	sp, {ip, lr}
        1908f0:	e1a0000d 	mov	r0, sp
        1908f4:	eb64f78c 	bl	1ace72c <$DrawCheckmark(TRect &)>
        1908f8:	e28dd008 	add	sp, sp, #8	; 0x8
        1908fc:	e1a00004 	mov	r0, r4
        190900:	e3a01a01 	mov	r1, #4096	; 0x1000
        190904:	eb68e2f0 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        190908:	e24dd004 	sub	sp, sp, #4	; 0x4
        19090c:	e51f1090 	ldr	r1, [pc, #ffffff70]	; 190884 <TPolygonView::RealDoCommand(RefVar const &)+0x8c8>
        190910:	e5910000 	ldr	r0, [r1]
        190914:	e5901000 	ldr	r1, [r0]
        190918:	e5950000 	ldr	r0, [r5]
        19091c:	e5900000 	ldr	r0, [r0]
        190920:	eb68ce4e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        190924:	eb68c608 	bl	1bc214c <$AllocateRefHandle(long)>
        190928:	e58d0000 	str	r0, [sp]
        19092c:	e1a0100d 	mov	r1, sp
        190930:	e5980000 	ldr	r0, [r8]
        190934:	eb64946a 	bl	1ab5ae4 <$MakeRerecognizeArea(TController *, RefVar const &)>
        190938:	e1a01000 	mov	r1, r0
        19093c:	e1a06000 	mov	r6, r0
        190940:	e1a00004 	mov	r0, r4
        190944:	eb64a4d5 	bl	1ab9ca0 <$RerecognizeWord(TPolygonView *, TRecArea *)>
        190948:	e3360000 	teq	r6, #0	; 0x0
        19094c:	11a00006 	movne	r0, r6
        190950:	11a0e00f 	movne	lr, pc
        190954:	1596f000 	ldrne	pc, [r6]
        190958:	e59d0000 	ldr	r0, [sp]
        19095c:	eb68ca16 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        190960:	e28dd004 	add	sp, sp, #4	; 0x4
        190964:	e1a01009 	mov	r1, r9
        190968:	e5980000 	ldr	r0, [r8]
        19096c:	eb675667 	bl	1b66310 <$RestoreRecognitionState(TController *, unsigned long)>
        190970:	e1a00005 	mov	r0, r5
        190974:	e3a01001 	mov	r1, #1	; 0x1
        190978:	eb645675 	bl	1aa6354 <$CommandSetResult(RefVar const &, long)>
        19097c:	e3a08001 	mov	r8, #1	; 0x1
        190980:	e28dd004 	add	sp, sp, #4	; 0x4
        190984:	ea000004 	b	19099c <TPolygonView::RealDoCommand(RefVar const &)+0x9e0>
        190988:	0c10187c 	ldceq	8, cr1, [r0], -#496
        19098c:	e1a01005 	mov	r1, r5
        190990:	e1a00004 	mov	r0, r4
        190994:	eb643974 	bl	1a9ef6c <TView::$RealDoCommand(RefVar const &)>
        190998:	e1a08000 	mov	r8, r0
        19099c:	e1a00008 	mov	r0, r8
        1909a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::MakeHilite(long, long, long, long)
 * Address: 001909a4
 */
TPolygonView::MakeHilite(long, long, long, long) {
    /*
        1909a4:	e1a0c00d 	mov	ip, sp
        1909a8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1909ac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1909b0:	e24cb014 	sub	fp, ip, #20	; 0x14
        1909b4:	e1a04001 	mov	r4, r1
        1909b8:	e1a05002 	mov	r5, r2
        1909bc:	e1a06003 	mov	r6, r3
        1909c0:	e59b9014 	ldr	r9, [fp, #20]
        1909c4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1909c8:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1909cc:	eb643535 	bl	1a9dea8 <TPolygonView::$Points(void)>
        1909d0:	e1a01000 	mov	r1, r0
        1909d4:	e1a0000d 	mov	r0, sp
        1909d8:	eb68c1bc 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        1909dc:	e1a0100d 	mov	r1, sp
        1909e0:	e28d0004 	add	r0, sp, #4	; 0x4
        1909e4:	eb68c1ba 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        1909e8:	e1a0000d 	mov	r0, sp
        1909ec:	e3a01000 	mov	r1, #0	; 0x0
        1909f0:	eb68c5c2 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1909f4:	e28d0004 	add	r0, sp, #4	; 0x4
        1909f8:	eb68c5c5 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1909fc:	e1a08000 	mov	r8, r0
        190a00:	e24dd004 	sub	sp, sp, #4	; 0x4
        190a04:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        190a08:	eb6483b2 	bl	1ab18d8 <TView::$FirstHilite(void)>
        190a0c:	eb68c5ce 	bl	1bc214c <$AllocateRefHandle(long)>
        190a10:	e58d0000 	str	r0, [sp]
        190a14:	e5900000 	ldr	r0, [r0]
        190a18:	e3300002 	teq	r0, #2	; 0x2
        190a1c:	0a000005 	beq	190a38 <TPolygonView::MakeHilite(long, long, long, long)+0x94>
        190a20:	e1a0100d 	mov	r1, sp
        190a24:	e59b2004 	ldr	r2, [fp, #4]	; fField4
        190a28:	e1a00002 	mov	r0, r2
        190a2c:	e5922000 	ldr	r2, [r2]
        190a30:	e1a0e00f 	mov	lr, pc
        190a34:	e282f0a8 	add	pc, r2, #168	; 0xa8
        190a38:	e3550000 	cmp	r5, #0	; 0x0
        190a3c:	d3a05000 	movle	r5, #0	; 0x0
        190a40:	da000009 	ble	190a6c <TPolygonView::MakeHilite(long, long, long, long)+0xc8>
        190a44:	e255ccff 	subs	ip, r5, #65280	; 0xff00
        190a48:	a35c00ff 	cmpge	ip, #255	; 0xff
        190a4c:	ba000006 	blt	190a6c <TPolygonView::MakeHilite(long, long, long, long)+0xc8>
        190a50:	e3a05000 	mov	r5, #0	; 0x0
        190a54:	e2844001 	add	r4, r4, #1	; 0x1
        190a58:	e5980002 	ldr	r0, [r8, #2]	; fField2
        190a5c:	e1a00840 	mov	r0, r0, asr #16
        190a60:	e2400002 	sub	r0, r0, #2	; 0x2
        190a64:	e1500004 	cmp	r0, r4
        190a68:	b3a04000 	movlt	r4, #0	; 0x0
        190a6c:	e3590000 	cmp	r9, #0	; 0x0
        190a70:	ca000005 	bgt	190a8c <TPolygonView::MakeHilite(long, long, long, long)+0xe8>
        190a74:	e3a09801 	mov	r9, #65536	; 0x10000
        190a78:	e2566001 	subs	r6, r6, #1	; 0x1
        190a7c:	45980002 	ldrmi	r0, [r8, #2]	; fField2
        190a80:	41a00840 	movmi	r0, r0, asr #16
        190a84:	42406002 	submi	r6, r0, #2	; 0x2
        190a88:	ea000002 	b	190a98 <TPolygonView::MakeHilite(long, long, long, long)+0xf4>
        190a8c:	e259ccff 	subs	ip, r9, #65280	; 0xff00
        190a90:	a35c00ff 	cmpge	ip, #255	; 0xff
        190a94:	a3a09801 	movge	r9, #65536	; 0x10000
        190a98:	e3a00000 	mov	r0, #0	; 0x0
        190a9c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        190aa0:	e0460004 	sub	r0, r6, r4
        190aa4:	e280a001 	add	sl, r0, #1	; 0x1
        190aa8:	e1a03009 	mov	r3, r9
        190aac:	e1a02006 	mov	r2, r6
        190ab0:	e1a01005 	mov	r1, r5
        190ab4:	e1a00004 	mov	r0, r4
        190ab8:	eb645a3a 	bl	1aa73a8 <$LessOrEq__FlN31>
        190abc:	e3300000 	teq	r0, #0	; 0x0
        190ac0:	1a000004 	bne	190ad8 <TPolygonView::MakeHilite(long, long, long, long)+0x134>
        190ac4:	e5980002 	ldr	r0, [r8, #2]	; fField2
        190ac8:	e08a0840 	add	r0, sl, r0, asr #16
        190acc:	e240a001 	sub	sl, r0, #1	; 0x1
        190ad0:	e3a00001 	mov	r0, #1	; 0x1
        190ad4:	e58d0000 	str	r0, [sp]
        190ad8:	e1a0100a 	mov	r1, sl
        190adc:	e3a00000 	mov	r0, #0	; 0x0
        190ae0:	eb63de46 	bl	1a88400 <TPolygonHilite::$__ct(long)>
        190ae4:	e1b07000 	movs	r7, r0
        190ae8:	1a000005 	bne	190b04 <TPolygonView::MakeHilite(long, long, long, long)+0x160>
        190aec:	e59f0094 	ldr	r0, [pc, #94]	; 190b88 <TPolygonView::MakeHilite(long, long, long, long)+0x1e4>
        190af0:	e5900000 	ldr	r0, [r0]
        190af4:	e3a02000 	mov	r2, #0	; 0x0
        190af8:	e3a010e9 	mov	r1, #233	; 0xe9
        190afc:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        190b00:	eb6949a5 	bl	1be319c <$Throw>
        190b04:	e287700c 	add	r7, r7, #12	; 0xc
        190b08:	e8870050 	stmia	r7, {r4, r6}
        190b0c:	e2877008 	add	r7, r7, #8	; 0x8
        190b10:	e8870220 	stmia	r7, {r5, r9}
        190b14:	e2477014 	sub	r7, r7, #20	; 0x14
        190b18:	e5980000 	ldr	r0, [r8]
        190b1c:	e1a00820 	mov	r0, r0, lsr #16
        190b20:	e5971020 	ldr	r1, [r7, #32]	; fField32
        190b24:	e5c10001 	strb	r0, [r1, #1]	; fField1
        190b28:	e1a00440 	mov	r0, r0, asr #8
        190b2c:	e5c10000 	strb	r0, [r1]
        190b30:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        190b34:	eb00015e 	bl	1910b4 <TPolygonView::GetPenSize(void)>
        190b38:	e587001c 	str	r0, [r7, #28]	; fField28
        190b3c:	e59d0000 	ldr	r0, [sp]
        190b40:	e3300000 	teq	r0, #0	; 0x0
        190b44:	0a000010 	beq	190b8c <TPolygonView::MakeHilite(long, long, long, long)+0x1e8>
        190b48:	e5980002 	ldr	r0, [r8, #2]	; fField2
        190b4c:	e0640840 	rsb	r0, r4, r0, asr #16
        190b50:	e1a02100 	mov	r2, r0, lsl #2
        190b54:	e5970020 	ldr	r0, [r7, #32]	; fField32
        190b58:	e2801004 	add	r1, r0, #4	; 0x4
        190b5c:	e0880104 	add	r0, r8, r4, lsl #2
        190b60:	e2800004 	add	r0, r0, #4	; 0x4
        190b64:	eb6938fa 	bl	1bdef54 <$BlockMove>
        190b68:	e5971020 	ldr	r1, [r7, #32]	; fField32
        190b6c:	e5980002 	ldr	r0, [r8, #2]	; fField2
        190b70:	e0640840 	rsb	r0, r4, r0, asr #16
        190b74:	e0810100 	add	r0, r1, r0, lsl #2
        190b78:	e2801004 	add	r1, r0, #4	; 0x4
        190b7c:	e1a02106 	mov	r2, r6, lsl #2
        190b80:	e2880008 	add	r0, r8, #8	; 0x8
        190b84:	ea000005 	b	190ba0 <TPolygonView::MakeHilite(long, long, long, long)+0x1fc>
        190b88:	00371318 	eoreqs	r1, r7, r8, lsl r3
        190b8c:	e1a0210a 	mov	r2, sl, lsl #2
        190b90:	e5970020 	ldr	r0, [r7, #32]	; fField32
        190b94:	e2801004 	add	r1, r0, #4	; 0x4
        190b98:	e0880104 	add	r0, r8, r4, lsl #2
        190b9c:	e2800004 	add	r0, r0, #4	; 0x4
        190ba0:	eb6938eb 	bl	1bdef54 <$BlockMove>
        190ba4:	e597000c 	ldr	r0, [r7, #12]	; fField12
        190ba8:	e3300000 	teq	r0, #0	; 0x0
        190bac:	1a00000c 	bne	190be4 <TPolygonView::MakeHilite(long, long, long, long)+0x240>
        190bb0:	e5970010 	ldr	r0, [r7, #16]	; fField16
        190bb4:	e5981002 	ldr	r1, [r8, #2]	; fField2
        190bb8:	e1a01841 	mov	r1, r1, asr #16
        190bbc:	e2411001 	sub	r1, r1, #1	; 0x1
        190bc0:	e1500001 	cmp	r0, r1
        190bc4:	ba000006 	blt	190be4 <TPolygonView::MakeHilite(long, long, long, long)+0x240>
        190bc8:	e5970014 	ldr	r0, [r7, #20]
        190bcc:	e3300000 	teq	r0, #0	; 0x0
        190bd0:	1a000003 	bne	190be4 <TPolygonView::MakeHilite(long, long, long, long)+0x240>
        190bd4:	e5970018 	ldr	r0, [r7, #24]	; fField24
        190bd8:	e250ccff 	subs	ip, r0, #65280	; 0xff00
        190bdc:	a35c00ff 	cmpge	ip, #255	; 0xff
        190be0:	aa000013 	bge	190c34 <TPolygonView::MakeHilite(long, long, long, long)+0x290>
        190be4:	e1a00008 	mov	r0, r8
        190be8:	eb64285a 	bl	1a9ad58 <PolygonShape::$IsOval(void)>
        190bec:	e3300000 	teq	r0, #0	; 0x0
        190bf0:	13a0000d 	movne	r0, #13	; 0xd
        190bf4:	1a000004 	bne	190c0c <TPolygonView::MakeHilite(long, long, long, long)+0x268>
        190bf8:	e1a00008 	mov	r0, r8
        190bfc:	eb642854 	bl	1a9ad54 <PolygonShape::$IsCurvy(void)>
        190c00:	e3300000 	teq	r0, #0	; 0x0
        190c04:	0a000005 	beq	190c20 <TPolygonView::MakeHilite(long, long, long, long)+0x27c>
        190c08:	e3a00007 	mov	r0, #7	; 0x7
        190c0c:	e5971020 	ldr	r1, [r7, #32]	; fField32
        190c10:	e5c10001 	strb	r0, [r1, #1]	; fField1
        190c14:	e3a00000 	mov	r0, #0	; 0x0
        190c18:	e5c10000 	strb	r0, [r1]
        190c1c:	ea000004 	b	190c34 <TPolygonView::MakeHilite(long, long, long, long)+0x290>
        190c20:	e3a01005 	mov	r1, #5	; 0x5
        190c24:	e5970020 	ldr	r0, [r7, #32]	; fField32
        190c28:	e5c01001 	strb	r1, [r0, #1]	; fField1
        190c2c:	e3a01000 	mov	r1, #0	; 0x0
        190c30:	e5c01000 	strb	r1, [r0]
        190c34:	e24dd004 	sub	sp, sp, #4	; 0x4
        190c38:	e3350000 	teq	r5, #0	; 0x0
        190c3c:	0a000018 	beq	190ca4 <TPolygonView::MakeHilite(long, long, long, long)+0x300>
        190c40:	e5970020 	ldr	r0, [r7, #32]	; fField32
        190c44:	e5900004 	ldr	r0, [r0, #4]	; fField4
        190c48:	e58d0000 	str	r0, [sp]
        190c4c:	e5970020 	ldr	r0, [r7, #32]	; fField32
        190c50:	e590100a 	ldr	r1, [r0, #10]	; fField10
        190c54:	e1a01841 	mov	r1, r1, asr #16
        190c58:	e5900006 	ldr	r0, [r0, #6]	; fField6
        190c5c:	e0410840 	sub	r0, r1, r0, asr #16
        190c60:	e0000095 	mul	r0, r5, r0
        190c64:	e59d1000 	ldr	r1, [sp]
        190c68:	e0810840 	add	r0, r1, r0, asr #16
        190c6c:	e5cd0003 	strb	r0, [sp, #3]
        190c70:	e1a00440 	mov	r0, r0, asr #8
        190c74:	e5cd0002 	strb	r0, [sp, #2]	; fField2
        190c78:	e5970020 	ldr	r0, [r7, #32]	; fField32
        190c7c:	e5901008 	ldr	r1, [r0, #8]	; fField8
        190c80:	e1a01841 	mov	r1, r1, asr #16
        190c84:	e5900004 	ldr	r0, [r0, #4]	; fField4
        190c88:	e0410840 	sub	r0, r1, r0, asr #16
        190c8c:	e0000095 	mul	r0, r5, r0
        190c90:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        190c94:	e0810840 	add	r0, r1, r0, asr #16
        190c98:	e5cd0001 	strb	r0, [sp, #1]	; fField1
        190c9c:	e1a00440 	mov	r0, r0, asr #8
        190ca0:	e5cd0000 	strb	r0, [sp]
        190ca4:	e3a00801 	mov	r0, #65536	; 0x10000
        190ca8:	e2400001 	sub	r0, r0, #1	; 0x1
        190cac:	e1590000 	cmp	r9, r0
        190cb0:	aa00001a 	bge	190d20 <TPolygonView::MakeHilite(long, long, long, long)+0x37c>
        190cb4:	e5971020 	ldr	r1, [r7, #32]	; fField32
        190cb8:	e081110a 	add	r1, r1, sl, lsl #2
        190cbc:	e2812002 	add	r2, r1, #2	; 0x2
        190cc0:	e5913002 	ldr	r3, [r1, #2]	; fField2
        190cc4:	e1a03843 	mov	r3, r3, asr #16
        190cc8:	e5111002 	ldr	r1, [r1, -#2]	; fField2
        190ccc:	e0431841 	sub	r1, r3, r1, asr #16
        190cd0:	e0400009 	sub	r0, r0, r9
        190cd4:	e0010190 	mul	r1, r0, r1
        190cd8:	e5923000 	ldr	r3, [r2]
        190cdc:	e1a03823 	mov	r3, r3, lsr #16
        190ce0:	e0431841 	sub	r1, r3, r1, asr #16
        190ce4:	e5c21001 	strb	r1, [r2, #1]	; fField1
        190ce8:	e1a01441 	mov	r1, r1, asr #8
        190cec:	e5c21000 	strb	r1, [r2]
        190cf0:	e5971020 	ldr	r1, [r7, #32]	; fField32
        190cf4:	e081110a 	add	r1, r1, sl, lsl #2
        190cf8:	e1a03001 	mov	r3, r1
        190cfc:	e5912000 	ldr	r2, [r1]
        190d00:	e1a02842 	mov	r2, r2, asr #16
        190d04:	e5111004 	ldr	r1, [r1, -#4]	; fField4
        190d08:	e0421841 	sub	r1, r2, r1, asr #16
        190d0c:	e0010190 	mul	r1, r0, r1
        190d10:	e0420841 	sub	r0, r2, r1, asr #16
        190d14:	e5c30001 	strb	r0, [r3, #1]	; fField1
        190d18:	e1a00440 	mov	r0, r0, asr #8
        190d1c:	e5c30000 	strb	r0, [r3]
        190d20:	e3350000 	teq	r5, #0	; 0x0
        190d24:	0a000003 	beq	190d38 <TPolygonView::MakeHilite(long, long, long, long)+0x394>
        190d28:	e5970020 	ldr	r0, [r7, #32]	; fField32
        190d2c:	e2801004 	add	r1, r0, #4	; 0x4
        190d30:	e59d0000 	ldr	r0, [sp]
        190d34:	e5810000 	str	r0, [r1]
        190d38:	e2872004 	add	r2, r7, #4	; 0x4
        190d3c:	e5971020 	ldr	r1, [r7, #32]	; fField32
        190d40:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        190d44:	eb645994 	bl	1aa739c <TPolygonView::$CalcHiliteBounds(PolygonShape *, TRect *)>
        190d48:	e1a01007 	mov	r1, r7
        190d4c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        190d50:	eb63e1db 	bl	1a894c4 <TPolygonView::$AddHilite(TPolygonHilite *)>
        190d54:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        190d58:	eb68c917 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        190d5c:	e28dd004 	add	sp, sp, #4	; 0x4
        190d60:	e28d0004 	add	r0, sp, #4	; 0x4
        190d64:	e3a01000 	mov	r1, #0	; 0x0
        190d68:	eb68c4e4 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        190d6c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::MakeInkHilite(void)
 * Address: 00190d70
 */
TPolygonView::MakeInkHilite(void) {
    /*
        190d70:	e1a0c00d 	mov	ip, sp
        190d74:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        190d78:	e24cb004 	sub	fp, ip, #4	; 0x4
        190d7c:	e1a04000 	mov	r4, r0
        190d80:	e24dd004 	sub	sp, sp, #4	; 0x4
        190d84:	eb6482d3 	bl	1ab18d8 <TView::$FirstHilite(void)>
        190d88:	eb68c4ef 	bl	1bc214c <$AllocateRefHandle(long)>
        190d8c:	e58d0000 	str	r0, [sp]
        190d90:	e5900000 	ldr	r0, [r0]
        190d94:	e3300002 	teq	r0, #2	; 0x2
        190d98:	0a000004 	beq	190db0 <TPolygonView::MakeInkHilite(void)+0x40>
        190d9c:	e1a0100d 	mov	r1, sp
        190da0:	e1a00004 	mov	r0, r4
        190da4:	e5942000 	ldr	r2, [r4]
        190da8:	e1a0e00f 	mov	lr, pc
        190dac:	e282f0a8 	add	pc, r2, #168	; 0xa8
        190db0:	e24dd008 	sub	sp, sp, #8	; 0x8
        190db4:	e1a00004 	mov	r0, r4
        190db8:	eb64343a 	bl	1a9dea8 <TPolygonView::$Points(void)>
        190dbc:	e1a01000 	mov	r1, r0
        190dc0:	e1a0000d 	mov	r0, sp
        190dc4:	eb68c0c1 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        190dc8:	e1a0100d 	mov	r1, sp
        190dcc:	e28d0004 	add	r0, sp, #4	; 0x4
        190dd0:	eb68c0bf 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        190dd4:	e1a0000d 	mov	r0, sp
        190dd8:	e3a01000 	mov	r1, #0	; 0x0
        190ddc:	eb68c4c7 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        190de0:	e3a07000 	mov	r7, #0	; 0x0
        190de4:	e28d0004 	add	r0, sp, #4	; 0x4
        190de8:	eb68c4c9 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        190dec:	e1a06000 	mov	r6, r0
        190df0:	e3a01000 	mov	r1, #0	; 0x0
        190df4:	e3a00000 	mov	r0, #0	; 0x0
        190df8:	eb63dd80 	bl	1a88400 <TPolygonHilite::$__ct(long)>
        190dfc:	e1b05000 	movs	r5, r0
        190e00:	1a000005 	bne	190e1c <TPolygonView::MakeInkHilite(void)+0xac>
        190e04:	e59f0090 	ldr	r0, [pc, #90]	; 190e9c <TPolygonView::MakeInkHilite(void)+0x12c>
        190e08:	e5900000 	ldr	r0, [r0]
        190e0c:	e3a02000 	mov	r2, #0	; 0x0
        190e10:	e3a010e9 	mov	r1, #233	; 0xe9
        190e14:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        190e18:	eb6948df 	bl	1be319c <$Throw>
        190e1c:	e585700c 	str	r7, [r5, #12]	; fField12
        190e20:	e5960002 	ldr	r0, [r6, #2]	; fField2
        190e24:	e1a00840 	mov	r0, r0, asr #16
        190e28:	e2400001 	sub	r0, r0, #1	; 0x1
        190e2c:	e2855010 	add	r5, r5, #16	; 0x10
        190e30:	e8850081 	stmia	r5, {r0, r7}
        190e34:	e2455010 	sub	r5, r5, #16	; 0x10
        190e38:	e3a00801 	mov	r0, #65536	; 0x10000
        190e3c:	e2400001 	sub	r0, r0, #1	; 0x1
        190e40:	e5850018 	str	r0, [r5, #24]	; fField24
        190e44:	e5961000 	ldr	r1, [r6]
        190e48:	e1a01821 	mov	r1, r1, lsr #16
        190e4c:	e5950020 	ldr	r0, [r5, #32]	; fField32
        190e50:	e5c01001 	strb	r1, [r0, #1]	; fField1
        190e54:	e1a01441 	mov	r1, r1, asr #8
        190e58:	e5c01000 	strb	r1, [r0]
        190e5c:	e1a00004 	mov	r0, r4
        190e60:	eb000093 	bl	1910b4 <TPolygonView::GetPenSize(void)>
        190e64:	e585001c 	str	r0, [r5, #28]	; fField28
        190e68:	e2852004 	add	r2, r5, #4	; 0x4
        190e6c:	e1a00004 	mov	r0, r4
        190e70:	e5951020 	ldr	r1, [r5, #32]	; fField32
        190e74:	eb645948 	bl	1aa739c <TPolygonView::$CalcHiliteBounds(PolygonShape *, TRect *)>
        190e78:	e1a01005 	mov	r1, r5
        190e7c:	e1a00004 	mov	r0, r4
        190e80:	eb63e18f 	bl	1a894c4 <TPolygonView::$AddHilite(TPolygonHilite *)>
        190e84:	e28d0004 	add	r0, sp, #4	; 0x4
        190e88:	e3a01000 	mov	r1, #0	; 0x0
        190e8c:	eb68c49b 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        190e90:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        190e94:	eb68c8c8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        190e98:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        190e9c:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TPolygonView::UpdateBounds(PolygonShape *)
 * Address: 00190ea0
 */
TPolygonView::UpdateBounds(PolygonShape *) {
    /*
        190ea0:	e1a0c00d 	mov	ip, sp
        190ea4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        190ea8:	e24cb004 	sub	fp, ip, #4	; 0x4
        190eac:	e1a04000 	mov	r4, r0
        190eb0:	e1a05001 	mov	r5, r1
        190eb4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        190eb8:	e3100008 	tst	r0, #8	; 0x8
        190ebc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        190ec0:	e24dd008 	sub	sp, sp, #8	; 0x8
        190ec4:	e1a00004 	mov	r0, r4
        190ec8:	eb648282 	bl	1ab18d8 <TView::$FirstHilite(void)>
        190ecc:	eb68c49e 	bl	1bc214c <$AllocateRefHandle(long)>
        190ed0:	e1a06000 	mov	r6, r0
        190ed4:	e1a0100d 	mov	r1, sp
        190ed8:	e1a00005 	mov	r0, r5
        190edc:	eb63e9af 	bl	1a8b5a0 <PolygonShape::$CalcBounds(TRect *)>
        190ee0:	e24dd004 	sub	sp, sp, #4	; 0x4
        190ee4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        190ee8:	e2600000 	rsb	r0, r0, #0	; 0x0
        190eec:	e1a01800 	mov	r1, r0, lsl #16
        190ef0:	e1a01841 	mov	r1, r1, asr #16
        190ef4:	e59d0006 	ldr	r0, [sp, #6]	; fField6
        190ef8:	e2600000 	rsb	r0, r0, #0	; 0x0
        190efc:	e1a00800 	mov	r0, r0, lsl #16
        190f00:	e1a00840 	mov	r0, r0, asr #16
        190f04:	e24dd004 	sub	sp, sp, #4	; 0x4
        190f08:	e5cd1003 	strb	r1, [sp, #3]
        190f0c:	e1a01441 	mov	r1, r1, asr #8
        190f10:	e5cd1002 	strb	r1, [sp, #2]	; fField2
        190f14:	e5cd0001 	strb	r0, [sp, #1]	; fField1
        190f18:	e1a00440 	mov	r0, r0, asr #8
        190f1c:	e5cd0000 	strb	r0, [sp]
        190f20:	e49d0004 	ldr	r0, [sp], #4	; fField4
        190f24:	e40d0004 	str	r0, [sp], -#4	; fField4
        190f28:	e3a00000 	mov	r0, #0	; 0x0
        190f2c:	e48d0004 	str	r0, [sp], #4	; fField4
        190f30:	e59d0000 	ldr	r0, [sp]
        190f34:	e3300000 	teq	r0, #0	; 0x0
        190f38:	0a000020 	beq	190fc0 <TPolygonView::UpdateBounds(PolygonShape *)+0x120>
        190f3c:	e24dd008 	sub	sp, sp, #8	; 0x8
        190f40:	e1a00004 	mov	r0, r4
        190f44:	eb6433d7 	bl	1a9dea8 <TPolygonView::$Points(void)>
        190f48:	e1a01000 	mov	r1, r0
        190f4c:	e1a0000d 	mov	r0, sp
        190f50:	eb68c05e 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        190f54:	e1a0100d 	mov	r1, sp
        190f58:	e28d0004 	add	r0, sp, #4	; 0x4
        190f5c:	eb68c05c 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        190f60:	e1a0000d 	mov	r0, sp
        190f64:	e3a01000 	mov	r1, #0	; 0x0
        190f68:	eb68c464 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        190f6c:	e28d0004 	add	r0, sp, #4	; 0x4
        190f70:	eb68c467 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        190f74:	e59d100a 	ldr	r1, [sp, #10]	; fField10
        190f78:	e1a01841 	mov	r1, r1, asr #16
        190f7c:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        190f80:	e1a02842 	mov	r2, r2, asr #16
        190f84:	eb0000a1 	bl	191210 <PolygonShape::Offset(long, long)>
        190f88:	e5960000 	ldr	r0, [r6]
        190f8c:	e3300002 	teq	r0, #2	; 0x2
        190f90:	0a000006 	beq	190fb0 <TPolygonView::UpdateBounds(PolygonShape *)+0x110>
        190f94:	eb643c11 	bl	1a9ffe0 <$RefToAddress(long)>
        190f98:	e59d100a 	ldr	r1, [sp, #10]	; fField10
        190f9c:	e1a01841 	mov	r1, r1, asr #16
        190fa0:	e5900020 	ldr	r0, [r0, #32]	; fField32
        190fa4:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        190fa8:	e1a02842 	mov	r2, r2, asr #16
        190fac:	eb000097 	bl	191210 <PolygonShape::Offset(long, long)>
        190fb0:	e28d0004 	add	r0, sp, #4	; 0x4
        190fb4:	e3a01000 	mov	r1, #0	; 0x0
        190fb8:	eb68c450 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        190fbc:	e28dd008 	add	sp, sp, #8	; 0x8
        190fc0:	e24dd004 	sub	sp, sp, #4	; 0x4
        190fc4:	e1a01004 	mov	r1, r4
        190fc8:	e1a0000d 	mov	r0, sp
        190fcc:	eb68e96d 	bl	1bcb588 <TView::$LocalOrigin( const(void))>
        190fd0:	e28d0008 	add	r0, sp, #8	; 0x8
        190fd4:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        190fd8:	e1a01841 	mov	r1, r1, asr #16
        190fdc:	e59d2000 	ldr	r2, [sp]
        190fe0:	e1a02842 	mov	r2, r2, asr #16
        190fe4:	eb67023f 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        190fe8:	e28dd004 	add	sp, sp, #4	; 0x4
        190fec:	e28d0004 	add	r0, sp, #4	; 0x4
        190ff0:	eb66f5c8 	bl	1b4e718 <$EmptyRect(Rect *)>
        190ff4:	e3300000 	teq	r0, #0	; 0x0
        190ff8:	0a000013 	beq	19104c <TPolygonView::UpdateBounds(PolygonShape *)+0x1ac>
        190ffc:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        191000:	e1a01841 	mov	r1, r1, asr #16
        191004:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        191008:	e1310840 	teq	r1, r0, asr #16
        19100c:	1a000004 	bne	191024 <TPolygonView::UpdateBounds(PolygonShape *)+0x184>
        191010:	e59d000a 	ldr	r0, [sp, #10]	; fField10
        191014:	e2800001 	add	r0, r0, #1	; 0x1
        191018:	e5cd0009 	strb	r0, [sp, #9]
        19101c:	e1a00440 	mov	r0, r0, asr #8
        191020:	e5cd0008 	strb	r0, [sp, #8]	; fField8
        191024:	e59d000a 	ldr	r0, [sp, #10]	; fField10
        191028:	e1a00840 	mov	r0, r0, asr #16
        19102c:	e59d1006 	ldr	r1, [sp, #6]	; fField6
        191030:	e1300841 	teq	r0, r1, asr #16
        191034:	1a000004 	bne	19104c <TPolygonView::UpdateBounds(PolygonShape *)+0x1ac>
        191038:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        19103c:	e2800001 	add	r0, r0, #1	; 0x1
        191040:	e5cd000b 	strb	r0, [sp, #11]
        191044:	e1a00440 	mov	r0, r0, asr #8
        191048:	e5cd000a 	strb	r0, [sp, #10]	; fField10
        19104c:	e28d1004 	add	r1, sp, #4	; 0x4
        191050:	e1a00004 	mov	r0, r4
        191054:	eb68ed7b 	bl	1bcc648 <TView::$WriteBounds(TRect const &)>
        191058:	e5960000 	ldr	r0, [r6]
        19105c:	e3300002 	teq	r0, #2	; 0x2
        191060:	0a000004 	beq	191078 <TPolygonView::UpdateBounds(PolygonShape *)+0x1d8>
        191064:	eb643bdd 	bl	1a9ffe0 <$RefToAddress(long)>
        191068:	e2802004 	add	r2, r0, #4	; 0x4
        19106c:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        191070:	e1a00004 	mov	r0, r4
        191074:	eb6458c8 	bl	1aa739c <TPolygonView::$CalcHiliteBounds(PolygonShape *, TRect *)>
        191078:	e28dd004 	add	sp, sp, #4	; 0x4
        19107c:	e1a00006 	mov	r0, r6
        191080:	eb68c84d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        191084:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::Points(void)
 * Address: 00191088
 */
TPolygonView::Points(void) {
    /*
        191088:	e1a0c00d 	mov	ip, sp
        19108c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        191090:	e24cb004 	sub	fp, ip, #4	; 0x4
        191094:	e59f1014 	ldr	r1, [pc, #14]	; 1910b0 <TPolygonView::Points(void)+0x28>
        191098:	eb68e52a 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        19109c:	eb68c42a 	bl	1bc214c <$AllocateRefHandle(long)>
        1910a0:	e5904000 	ldr	r4, [r0]
        1910a4:	eb68c844 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1910a8:	e1a00004 	mov	r0, r4
        1910ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1910b0:	00683f18 	rsbeq	r3, r8, r8, lsl pc
    */
}

/**
 * Symbol: TPolygonView::GetPenSize(void)
 * Address: 001910b4
 */
TPolygonView::GetPenSize(void) {
    /*
        1910b4:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1910b8:	e2000c0f 	and	r0, r0, #3840	; 0xf00
        1910bc:	e1a00420 	mov	r0, r0, lsr #8
        1910c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPolygonView::SetPenSize(long)
 * Address: 001910c4
 */
TPolygonView::SetPenSize(long) {
    /*
        1910c4:	e1a0c00d 	mov	ip, sp
        1910c8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1910cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1910d0:	e1a04000 	mov	r4, r0
        1910d4:	e1a05001 	mov	r5, r1
        1910d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1910dc:	eb68e101 	bl	1bc94e8 <TView::$DataFrame(void)>
        1910e0:	eb68c419 	bl	1bc214c <$AllocateRefHandle(long)>
        1910e4:	e1a07000 	mov	r7, r0
        1910e8:	e59f003c 	ldr	r0, [pc, #3c]	; 19112c <TPolygonView::SetPenSize(long)+0x68>
        1910ec:	e5900000 	ldr	r0, [r0]
        1910f0:	e5901000 	ldr	r1, [r0]
        1910f4:	e5970000 	ldr	r0, [r7]
        1910f8:	eb68cc58 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1910fc:	eb68c412 	bl	1bc214c <$AllocateRefHandle(long)>
        191100:	e1a06000 	mov	r6, r0
        191104:	e1a00007 	mov	r0, r7
        191108:	eb68c82b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        19110c:	e5960000 	ldr	r0, [r6]
        191110:	e3300002 	teq	r0, #2	; 0x2
        191114:	0a000005 	beq	191130 <TPolygonView::SetPenSize(long)+0x6c>
        191118:	e3100003 	tst	r0, #3	; 0x3
        19111c:	01a00140 	moveq	r0, r0, asr #2
        191120:	0a000003 	beq	191134 <TPolygonView::SetPenSize(long)+0x70>
        191124:	eb68c3fc 	bl	1bc211c <$_RINTError(long)>
        191128:	ea000001 	b	191134 <TPolygonView::SetPenSize(long)+0x70>
        19112c:	00684fd0 	ldreqd	r4, [r8], -#240
        191130:	e3a00000 	mov	r0, #0	; 0x0
        191134:	e3c00c0f 	bic	r0, r0, #3840	; 0xf00
        191138:	e1800405 	orr	r0, r0, r5, lsl #8
        19113c:	e584000c 	str	r0, [r4, #12]	; fField12
        191140:	e1a00100 	mov	r0, r0, lsl #2
        191144:	eb68c400 	bl	1bc214c <$AllocateRefHandle(long)>
        191148:	e58d0000 	str	r0, [sp]
        19114c:	e1a0200d 	mov	r2, sp
        191150:	e51f102c 	ldr	r1, [pc, #ffffffd4]	; 19112c <TPolygonView::SetPenSize(long)+0x68>
        191154:	e1a08001 	mov	r8, r1
        191158:	e1a00004 	mov	r0, r4
        19115c:	eb652f2f 	bl	1adce20 <TView::$SetDataSlot(RefVar const &, RefVar const &)>
        191160:	e59d0000 	ldr	r0, [sp]
        191164:	eb68c814 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        191168:	e1a00004 	mov	r0, r4
        19116c:	eb6481d9 	bl	1ab18d8 <TView::$FirstHilite(void)>
        191170:	eb68c3f5 	bl	1bc214c <$AllocateRefHandle(long)>
        191174:	e1a07000 	mov	r7, r0
        191178:	e5900000 	ldr	r0, [r0]
        19117c:	e3300002 	teq	r0, #2	; 0x2
        191180:	0a000001 	beq	19118c <TPolygonView::SetPenSize(long)+0xc8>
        191184:	eb643b95 	bl	1a9ffe0 <$RefToAddress(long)>
        191188:	e5a0501c 	str	r5, [r0, #28]!	; fField28
        19118c:	e1a01008 	mov	r1, r8
        191190:	e1a00004 	mov	r0, r4
        191194:	e5942000 	ldr	r2, [r4]
        191198:	e1a0e00f 	mov	lr, pc
        19119c:	e282f04c 	add	pc, r2, #76	; 0x4c
        1911a0:	e1a00007 	mov	r0, r7
        1911a4:	eb68c804 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1911a8:	e1a00006 	mov	r0, r6
        1911ac:	eb68c802 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1911b0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonView::HandleHilite(TUnitPublic *, long, unsigned char)
 * Address: 001912ec
 */
TPolygonView::HandleHilite(TUnitPublic *, long, unsigned char) {
    /*
        1912ec:	e1a0c00d 	mov	ip, sp
        1912f0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1912f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1912f8:	e1a06000 	mov	r6, r0
        1912fc:	e1a05001 	mov	r5, r1
        191300:	e1a04002 	mov	r4, r2
        191304:	e20370ff 	and	r7, r3, #255	; 0xff
        191308:	e3320006 	teq	r2, #6	; 0x6
        19130c:	13740001 	cmnne	r4, #1	; 0x1
        191310:	1a000006 	bne	191330 <TPolygonView::HandleHilite(TUnitPublic *, long, unsigned char)+0x44>
        191314:	e1a02007 	mov	r2, r7
        191318:	e1a01005 	mov	r1, r5
        19131c:	e1a00006 	mov	r0, r6
        191320:	eb641e4f 	bl	1a98c64 <TPolygonView::$HiliteTraced(TUnitPublic *, unsigned char)>
        191324:	e3300000 	teq	r0, #0	; 0x0
        191328:	13a00006 	movne	r0, #6	; 0x6
        19132c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        191330:	e1a03007 	mov	r3, r7
        191334:	e1a02004 	mov	r2, r4
        191338:	e1a01005 	mov	r1, r5
        19133c:	e1a00006 	mov	r0, r6
        191340:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        191344:	ea6489a5 	b	1ab39e0 <TView::$HandleHilite(TUnitPublic *, long, unsigned char)>
    */
}

/**
 * Symbol: TPolygonView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)
 * Address: 00191798
 */
TPolygonView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char) {
    /*
        191798:	e1a0c00d 	mov	ip, sp
        19179c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1917a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1917a4:	e1a06000 	mov	r6, r0
        1917a8:	e1a05001 	mov	r5, r1
        1917ac:	e1a04002 	mov	r4, r2
        1917b0:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1917b4:	e20070ff 	and	r7, r0, #255	; 0xff
        1917b8:	e3320005 	teq	r2, #5	; 0x5
        1917bc:	13740001 	cmnne	r4, #1	; 0x1
        1917c0:	1a000005 	bne	1917dc <TPolygonView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x44>
        1917c4:	e2860010 	add	r0, r6, #16	; 0x10
        1917c8:	e1a01005 	mov	r1, r5
        1917cc:	eb63f7ee 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
        1917d0:	e3500032 	cmp	r0, #50	; 0x32
        1917d4:	c3a00005 	movgt	r0, #5	; 0x5
        1917d8:	c91ba8f0 	ldmgtdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1917dc:	e3340003 	teq	r4, #3	; 0x3
        1917e0:	13740001 	cmnne	r4, #1	; 0x1
        1917e4:	13a00000 	movne	r0, #0	; 0x0
        1917e8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1917ec:	e1a02007 	mov	r2, r7
        1917f0:	e1a01005 	mov	r1, r5
        1917f4:	e1a00006 	mov	r0, r6
        1917f8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1917fc:	ea643e39 	b	1aa10e8 <TPolygonView::$ScrubSegment(TRect const &, unsigned char)>
    */
}

/**
 * Symbol: TPolygonView::HiliteAll(void)
 * Address: 0019184c
 */
TPolygonView::HiliteAll(void) {
    /*
        19184c:	e1a0c00d 	mov	ip, sp
        191850:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        191854:	e24cb004 	sub	fp, ip, #4	; 0x4
        191858:	e1a04000 	mov	r4, r0
        19185c:	e24dd008 	sub	sp, sp, #8	; 0x8
        191860:	eb643190 	bl	1a9dea8 <TPolygonView::$Points(void)>
        191864:	e1a01000 	mov	r1, r0
        191868:	e1a0000d 	mov	r0, sp
        19186c:	eb68be17 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        191870:	e1a0100d 	mov	r1, sp
        191874:	e28d0004 	add	r0, sp, #4	; 0x4
        191878:	eb68be15 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        19187c:	e1a0000d 	mov	r0, sp
        191880:	e3a01000 	mov	r1, #0	; 0x0
        191884:	eb68c21d 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        191888:	e28d0004 	add	r0, sp, #4	; 0x4
        19188c:	eb68c220 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        191890:	e5901000 	ldr	r1, [r0]
        191894:	e1a01841 	mov	r1, r1, asr #16
        191898:	e331000e 	teq	r1, #14	; 0xe
        19189c:	1a000002 	bne	1918ac <TPolygonView::HiliteAll(void)+0x60>
        1918a0:	e1a00004 	mov	r0, r4
        1918a4:	eb642941 	bl	1a9bdb0 <TPolygonView::$MakeInkHilite(void)>
        1918a8:	ea00000a 	b	1918d8 <TPolygonView::HiliteAll(void)+0x8c>
        1918ac:	e3a03801 	mov	r3, #65536	; 0x10000
        1918b0:	e2433001 	sub	r3, r3, #1	; 0x1
        1918b4:	e92d0008 	stmdb	sp!, {r3}
        1918b8:	e5900002 	ldr	r0, [r0, #2]	; fField2
        1918bc:	e1a00840 	mov	r0, r0, asr #16
        1918c0:	e2403001 	sub	r3, r0, #1	; 0x1
        1918c4:	e1a00004 	mov	r0, r4
        1918c8:	e3a02000 	mov	r2, #0	; 0x0
        1918cc:	e3a01000 	mov	r1, #0	; 0x0
        1918d0:	eb642934 	bl	1a9bda8 <TPolygonView::$MakeHilite(long, long, long, long)>
        1918d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1918d8:	e28d0004 	add	r0, sp, #4	; 0x4
        1918dc:	e3a01000 	mov	r1, #0	; 0x0
        1918e0:	eb68c206 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1918e4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

