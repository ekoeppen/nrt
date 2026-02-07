#include "include/TXChunkedChars.h"

/**
 * Symbol: TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)
 * Address: 00231634
 */
TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *) {
    /*
        231634:	e1a0c00d 	mov	ip, sp
        231638:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23163c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        231640:	e24cb014 	sub	fp, ip, #20	; 0x14
        231644:	e1a04000 	mov	r4, r0
        231648:	e1a05001 	mov	r5, r1
        23164c:	e1a06002 	mov	r6, r2
        231650:	e24dd00c 	sub	sp, sp, #12	; 0xc
        231654:	e59b2014 	ldr	r2, [fp, #20]
        231658:	e5b21008 	ldr	r1, [r2, #8]!	; fField8
        23165c:	e58d1008 	str	r1, [sp, #8]	; fField8
        231660:	e5900008 	ldr	r0, [r0, #8]	; fField8
        231664:	e1a0200d 	mov	r2, sp
        231668:	e1a01005 	mov	r1, r5
        23166c:	eb65532a 	bl	1b8631c <TXRanges::$GetRangeBounds( const(long, TXOffsetPair *))>
        231670:	e89d0003 	ldmia	sp, {r0, r1}
        231674:	e041a000 	sub	sl, r1, r0
        231678:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23167c:	e040900a 	sub	r9, r0, sl
        231680:	e1a01006 	mov	r1, r6
        231684:	e5940008 	ldr	r0, [r4, #8]	; fField8
        231688:	eb655322 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        23168c:	e5941004 	ldr	r1, [r4, #4]	; fField4
        231690:	e0417000 	sub	r7, r1, r0
        231694:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        231698:	e0411009 	sub	r1, r1, r9
        23169c:	e1510007 	cmp	r1, r7
        2316a0:	da000001 	ble	2316ac <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x78>
        2316a4:	e3a00000 	mov	r0, #0	; 0x0
        2316a8:	ea0000af 	b	23196c <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x338>
        2316ac:	e1560005 	cmp	r6, r5
        2316b0:	d59b8010 	ldrle	r8, [fp, #16]
        2316b4:	c59b2010 	ldrgt	r2, [fp, #16]
        2316b8:	c04a8002 	subgt	r8, sl, r2
        2316bc:	e3380000 	teq	r8, #0	; 0x0
        2316c0:	0a000030 	beq	231788 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x154>
        2316c4:	e1580007 	cmp	r8, r7
        2316c8:	c1a08007 	movgt	r8, r7
        2316cc:	e1560005 	cmp	r6, r5
        2316d0:	e1a03008 	mov	r3, r8
        2316d4:	da000012 	ble	231724 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0xf0>
        2316d8:	e04a2008 	sub	r2, sl, r8
        2316dc:	e1a01005 	mov	r1, r5
        2316e0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2316e4:	e1a01006 	mov	r1, r6
        2316e8:	e1a00004 	mov	r0, r4
        2316ec:	e3a03000 	mov	r3, #0	; 0x0
        2316f0:	e3a02000 	mov	r2, #0	; 0x0
        2316f4:	eb655735 	bl	1b873d0 <TXChunkedChars::$MungeChunk(long, long, long, long, long, long)>
        2316f8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2316fc:	e2682000 	rsb	r2, r8, #0	; 0x0
        231700:	e1a0a002 	mov	sl, r2
        231704:	e1a01005 	mov	r1, r5
        231708:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23170c:	eb655304 	bl	1b86324 <TXRanges::$AddToRangeEnd(long, long)>
        231710:	e1a0200a 	mov	r2, sl
        231714:	e1a01006 	mov	r1, r6
        231718:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23171c:	eb655300 	bl	1b86324 <TXRanges::$AddToRangeEnd(long, long)>
        231720:	ea000016 	b	231780 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x14c>
        231724:	e3a02000 	mov	r2, #0	; 0x0
        231728:	e1a01005 	mov	r1, r5
        23172c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        231730:	e1a02000 	mov	r2, r0
        231734:	e1a01006 	mov	r1, r6
        231738:	e1a00004 	mov	r0, r4
        23173c:	e3a03000 	mov	r3, #0	; 0x0
        231740:	eb655722 	bl	1b873d0 <TXChunkedChars::$MungeChunk(long, long, long, long, long, long)>
        231744:	e28dd00c 	add	sp, sp, #12	; 0xc
        231748:	e1a02008 	mov	r2, r8
        23174c:	e1a01005 	mov	r1, r5
        231750:	e5940008 	ldr	r0, [r4, #8]	; fField8
        231754:	eb6552f2 	bl	1b86324 <TXRanges::$AddToRangeEnd(long, long)>
        231758:	e3a03000 	mov	r3, #0	; 0x0
        23175c:	e3a02000 	mov	r2, #0	; 0x0
        231760:	e92d000c 	stmdb	sp!, {r2, r3}
        231764:	e1a03008 	mov	r3, r8
        231768:	e1a01005 	mov	r1, r5
        23176c:	e1a00004 	mov	r0, r4
        231770:	e594c000 	ldr	ip, [r4]
        231774:	e1a0e00f 	mov	lr, pc
        231778:	e28cf044 	add	pc, ip, #68	; 0x44
        23177c:	e28dd008 	add	sp, sp, #8	; 0x8
        231780:	e0899008 	add	r9, r9, r8
        231784:	e0477008 	sub	r7, r7, r8
        231788:	e1560005 	cmp	r6, r5
        23178c:	e59da008 	ldr	sl, [sp, #8]	; fField8
        231790:	da000031 	ble	23185c <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x228>
        231794:	e15a0009 	cmp	sl, r9
        231798:	b1a0900a 	movlt	r9, sl
        23179c:	e1a03009 	mov	r3, r9
        2317a0:	e59b2014 	ldr	r2, [fp, #20]
        2317a4:	e92d000c 	stmdb	sp!, {r2, r3}
        2317a8:	e1a01005 	mov	r1, r5
        2317ac:	e1a00004 	mov	r0, r4
        2317b0:	e3a03000 	mov	r3, #0	; 0x0
        2317b4:	e59b2010 	ldr	r2, [fp, #16]
        2317b8:	e594c000 	ldr	ip, [r4]
        2317bc:	e1a0e00f 	mov	lr, pc
        2317c0:	e28cf044 	add	pc, ip, #68	; 0x44
        2317c4:	e28dd008 	add	sp, sp, #8	; 0x8
        2317c8:	e3300000 	teq	r0, #0	; 0x0
        2317cc:	1affffb4 	bne	2316a4 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x70>
        2317d0:	e1a02009 	mov	r2, r9
        2317d4:	e1a01006 	mov	r1, r6
        2317d8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2317dc:	eb6552d0 	bl	1b86324 <TXRanges::$AddToRangeEnd(long, long)>
        2317e0:	e05a3009 	subs	r3, sl, r9
        2317e4:	0a00001a 	beq	231854 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x220>
        2317e8:	e59b2014 	ldr	r2, [fp, #20]
        2317ec:	e92d000c 	stmdb	sp!, {r2, r3}
        2317f0:	e1a01006 	mov	r1, r6
        2317f4:	e1a00004 	mov	r0, r4
        2317f8:	e3a03000 	mov	r3, #0	; 0x0
        2317fc:	e3a02000 	mov	r2, #0	; 0x0
        231800:	e594c000 	ldr	ip, [r4]
        231804:	e1a0e00f 	mov	lr, pc
        231808:	e28cf044 	add	pc, ip, #68	; 0x44
        23180c:	e28dd008 	add	sp, sp, #8	; 0x8
        231810:	e3300000 	teq	r0, #0	; 0x0
        231814:	0a00000e 	beq	231854 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x220>
        231818:	e3a03000 	mov	r3, #0	; 0x0
        23181c:	e3a02000 	mov	r2, #0	; 0x0
        231820:	e92d000c 	stmdb	sp!, {r2, r3}
        231824:	e1a03009 	mov	r3, r9
        231828:	e1a01005 	mov	r1, r5
        23182c:	e1a00004 	mov	r0, r4
        231830:	e59b2010 	ldr	r2, [fp, #16]
        231834:	e594c000 	ldr	ip, [r4]
        231838:	e1a0e00f 	mov	lr, pc
        23183c:	e28cf044 	add	pc, ip, #68	; 0x44
        231840:	e28dd008 	add	sp, sp, #8	; 0x8
        231844:	e2692000 	rsb	r2, r9, #0	; 0x0
        231848:	e1a01006 	mov	r1, r6
        23184c:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        231850:	ea000039 	b	23193c <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x308>
        231854:	e2851002 	add	r1, r5, #2	; 0x2
        231858:	ea00003a 	b	231948 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x314>
        23185c:	e15a0007 	cmp	sl, r7
        231860:	b1a0700a 	movlt	r7, sl
        231864:	e3370000 	teq	r7, #0	; 0x0
        231868:	0a000015 	beq	2318c4 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x290>
        23186c:	e1a01006 	mov	r1, r6
        231870:	e5940008 	ldr	r0, [r4, #8]	; fField8
        231874:	eb6552a7 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        231878:	e1a09000 	mov	r9, r0
        23187c:	e1a03007 	mov	r3, r7
        231880:	e59b2014 	ldr	r2, [fp, #20]
        231884:	e92d000c 	stmdb	sp!, {r2, r3}
        231888:	e1a02000 	mov	r2, r0
        23188c:	e1a01006 	mov	r1, r6
        231890:	e1a00004 	mov	r0, r4
        231894:	e3a03000 	mov	r3, #0	; 0x0
        231898:	e594c000 	ldr	ip, [r4]
        23189c:	e1a0e00f 	mov	lr, pc
        2318a0:	e28cf044 	add	pc, ip, #68	; 0x44
        2318a4:	e28dd008 	add	sp, sp, #8	; 0x8
        2318a8:	e3300000 	teq	r0, #0	; 0x0
        2318ac:	1affff7c 	bne	2316a4 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x70>
        2318b0:	e1a02007 	mov	r2, r7
        2318b4:	e1a01005 	mov	r1, r5
        2318b8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2318bc:	eb655298 	bl	1b86324 <TXRanges::$AddToRangeEnd(long, long)>
        2318c0:	e04aa007 	sub	sl, sl, r7
        2318c4:	e33a0000 	teq	sl, #0	; 0x0
        2318c8:	0a00001d 	beq	231944 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x310>
        2318cc:	e1a0300a 	mov	r3, sl
        2318d0:	e59b2014 	ldr	r2, [fp, #20]
        2318d4:	e92d000c 	stmdb	sp!, {r2, r3}
        2318d8:	e59b2010 	ldr	r2, [fp, #16]
        2318dc:	e0422008 	sub	r2, r2, r8
        2318e0:	e1a01005 	mov	r1, r5
        2318e4:	e1a00004 	mov	r0, r4
        2318e8:	e3a03000 	mov	r3, #0	; 0x0
        2318ec:	e594c000 	ldr	ip, [r4]
        2318f0:	e1a0e00f 	mov	lr, pc
        2318f4:	e28cf044 	add	pc, ip, #68	; 0x44
        2318f8:	e28dd008 	add	sp, sp, #8	; 0x8
        2318fc:	e3300000 	teq	r0, #0	; 0x0
        231900:	0a00000f 	beq	231944 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x310>
        231904:	e3a03000 	mov	r3, #0	; 0x0
        231908:	e3a02000 	mov	r2, #0	; 0x0
        23190c:	e92d000c 	stmdb	sp!, {r2, r3}
        231910:	e1a03007 	mov	r3, r7
        231914:	e1a02009 	mov	r2, r9
        231918:	e1a01006 	mov	r1, r6
        23191c:	e1a00004 	mov	r0, r4
        231920:	e594c000 	ldr	ip, [r4]
        231924:	e1a0e00f 	mov	lr, pc
        231928:	e28cf044 	add	pc, ip, #68	; 0x44
        23192c:	e28dd008 	add	sp, sp, #8	; 0x8
        231930:	e2672000 	rsb	r2, r7, #0	; 0x0
        231934:	e1a01005 	mov	r1, r5
        231938:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        23193c:	eb655278 	bl	1b86324 <TXRanges::$AddToRangeEnd(long, long)>
        231940:	eaffff57 	b	2316a4 <TXChunkedChars::InsertUsingNearChunk(long, long, long, TXTextDescriptor *)+0x70>
        231944:	e2851001 	add	r1, r5, #1	; 0x1
        231948:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23194c:	e3e03000 	mvn	r3, #0	; 0x0
        231950:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        231954:	eb65526a 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        231958:	e594000c 	ldr	r0, [r4, #12]	; fField12
        23195c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        231960:	e0800001 	add	r0, r0, r1
        231964:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        231968:	e3a00001 	mov	r0, #1	; 0x1
        23196c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)
 * Address: 00231970
 */
TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *) {
    /*
        231970:	e1a0c00d 	mov	ip, sp
        231974:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        231978:	e24cb004 	sub	fp, ip, #4	; 0x4
        23197c:	e1a04000 	mov	r4, r0
        231980:	e1a05001 	mov	r5, r1
        231984:	e1a0a002 	mov	sl, r2
        231988:	e24dd008 	sub	sp, sp, #8	; 0x8
        23198c:	e51b002c 	ldr	r0, [fp, -#44]
        231990:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
        231994:	e58d1000 	str	r1, [sp]
        231998:	e3310000 	teq	r1, #0	; 0x0
        23199c:	03a00000 	moveq	r0, #0	; 0x0
        2319a0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2319a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2319a8:	e3550000 	cmp	r5, #0	; 0x0
        2319ac:	aa000005 	bge	2319c8 <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0x58>
        2319b0:	e3a00000 	mov	r0, #0	; 0x0
        2319b4:	e58d0000 	str	r0, [sp]
        2319b8:	e3a06000 	mov	r6, #0	; 0x0
        2319bc:	e3a08000 	mov	r8, #0	; 0x0
        2319c0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2319c4:	ea000009 	b	2319f0 <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0x80>
        2319c8:	e1a0200d 	mov	r2, sp
        2319cc:	e1a01005 	mov	r1, r5
        2319d0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2319d4:	eb655250 	bl	1b8631c <TXRanges::$GetRangeBounds( const(long, TXOffsetPair *))>
        2319d8:	e5942004 	ldr	r2, [r4, #4]	; fField4
        2319dc:	e89d0003 	ldmia	sp, {r0, r1}
        2319e0:	e0410000 	sub	r0, r1, r0
        2319e4:	e0426000 	sub	r6, r2, r0
        2319e8:	e59d0000 	ldr	r0, [sp]
        2319ec:	e04a8000 	sub	r8, sl, r0
        2319f0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2319f4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2319f8:	e040000a 	sub	r0, r0, sl
        2319fc:	e58d0004 	str	r0, [sp, #4]	; fField4
        231a00:	e59d1010 	ldr	r1, [sp, #16]
        231a04:	e0411006 	sub	r1, r1, r6
        231a08:	e5940004 	ldr	r0, [r4, #4]	; fField4
        231a0c:	e58d0014 	str	r0, [sp, #20]
        231a10:	e0811000 	add	r1, r1, r0
        231a14:	e2411001 	sub	r1, r1, #1	; 0x1
        231a18:	eb6603c8 	bl	1bb2940 <$__rt_sdiv>
        231a1c:	e1a07000 	mov	r7, r0
        231a20:	e3550000 	cmp	r5, #0	; 0x0
        231a24:	aa000004 	bge	231a3c <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0xcc>
        231a28:	e3a05000 	mov	r5, #0	; 0x0
        231a2c:	e2479001 	sub	r9, r7, #1	; 0x1
        231a30:	e58d5000 	str	r5, [sp]
        231a34:	e59d6014 	ldr	r6, [sp, #20]
        231a38:	ea000004 	b	231a50 <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0xe0>
        231a3c:	e2851001 	add	r1, r5, #1	; 0x1
        231a40:	e0859007 	add	r9, r5, r7
        231a44:	e58d1000 	str	r1, [sp]
        231a48:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        231a4c:	e0866000 	add	r6, r6, r0
        231a50:	e1a02007 	mov	r2, r7
        231a54:	e1a00004 	mov	r0, r4
        231a58:	e59d1000 	ldr	r1, [sp]
        231a5c:	e5943000 	ldr	r3, [r4]
        231a60:	e1a0e00f 	mov	lr, pc
        231a64:	e283f03c 	add	pc, r3, #60	; 0x3c
        231a68:	e3300000 	teq	r0, #0	; 0x0
        231a6c:	0a000000 	beq	231a74 <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0x104>
        231a70:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        231a74:	e5940008 	ldr	r0, [r4, #8]	; fField8
        231a78:	e1a02007 	mov	r2, r7
        231a7c:	e3a01000 	mov	r1, #0	; 0x0
        231a80:	e59d3000 	ldr	r3, [sp]
        231a84:	eb654e15 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        231a88:	e3300000 	teq	r0, #0	; 0x0
        231a8c:	1a000008 	bne	231ab4 <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0x144>
        231a90:	e1a02007 	mov	r2, r7
        231a94:	e1a00004 	mov	r0, r4
        231a98:	e59d1000 	ldr	r1, [sp]
        231a9c:	e5943000 	ldr	r3, [r4]
        231aa0:	e1a0e00f 	mov	lr, pc
        231aa4:	e283f040 	add	pc, r3, #64	; 0x40
        231aa8:	e3a000e9 	mov	r0, #233	; 0xe9
        231aac:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        231ab0:	eaffffee 	b	231a70 <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0x100>
        231ab4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        231ab8:	e3300000 	teq	r0, #0	; 0x0
        231abc:	0a000026 	beq	231b5c <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0x1ec>
        231ac0:	e24dd004 	sub	sp, sp, #4	; 0x4
        231ac4:	e2471001 	sub	r1, r7, #1	; 0x1
        231ac8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        231acc:	e0000091 	mul	r0, r1, r0
        231ad0:	e59d1014 	ldr	r1, [sp, #20]
        231ad4:	e0411006 	sub	r1, r1, r6
        231ad8:	e0511000 	subs	r1, r1, r0
        231adc:	e58d1000 	str	r1, [sp]
        231ae0:	43a01000 	movmi	r1, #0	; 0x0
        231ae4:	458d1000 	strmi	r1, [sp]
        231ae8:	e24dd004 	sub	sp, sp, #4	; 0x4
        231aec:	e1a01005 	mov	r1, r5
        231af0:	e1a00004 	mov	r0, r4
        231af4:	e3a03001 	mov	r3, #1	; 0x1
        231af8:	e3a02001 	mov	r2, #1	; 0x1
        231afc:	e594c000 	ldr	ip, [r4]
        231b00:	e1a0e00f 	mov	lr, pc
        231b04:	e28cf034 	add	pc, ip, #52	; 0x34
        231b08:	e0800088 	add	r0, r0, r8, lsl #1
        231b0c:	e0851007 	add	r1, r5, r7
        231b10:	e58d0000 	str	r0, [sp]
        231b14:	e1a00004 	mov	r0, r4
        231b18:	e3a03000 	mov	r3, #0	; 0x0
        231b1c:	e3a02000 	mov	r2, #0	; 0x0
        231b20:	e594c000 	ldr	ip, [r4]
        231b24:	e1a0e00f 	mov	lr, pc
        231b28:	e28cf034 	add	pc, ip, #52	; 0x34
        231b2c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        231b30:	e0801081 	add	r1, r0, r1, lsl #1
        231b34:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        231b38:	e1a02080 	mov	r2, r0, lsl #1
        231b3c:	e59d0000 	ldr	r0, [sp]
        231b40:	eb66b503 	bl	1bdef54 <$BlockMove>
        231b44:	e1a01005 	mov	r1, r5
        231b48:	e1a00004 	mov	r0, r4
        231b4c:	e5942000 	ldr	r2, [r4]
        231b50:	e1a0e00f 	mov	lr, pc
        231b54:	e282f038 	add	pc, r2, #56	; 0x38
        231b58:	e28dd008 	add	sp, sp, #8	; 0x8
        231b5c:	e24dd014 	sub	sp, sp, #20	; 0x14
        231b60:	e59d7024 	ldr	r7, [sp, #36]
        231b64:	e1a0000d 	mov	r0, sp
        231b68:	eb655a24 	bl	1b88400 <TXTextDescriptor::$__ct(void)>
        231b6c:	e1550009 	cmp	r5, r9
        231b70:	ca00002a 	bgt	231c20 <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0x2b0>
        231b74:	e1570006 	cmp	r7, r6
        231b78:	b1a06007 	movlt	r6, r7
        231b7c:	e08aa006 	add	sl, sl, r6
        231b80:	e0477006 	sub	r7, r7, r6
        231b84:	e1350009 	teq	r5, r9
        231b88:	059d0018 	ldreq	r0, [sp, #24]
        231b8c:	008aa000 	addeq	sl, sl, r0
        231b90:	e3360000 	teq	r6, #0	; 0x0
        231b94:	0a000015 	beq	231bf0 <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0x280>
        231b98:	e1a01005 	mov	r1, r5
        231b9c:	e1a00004 	mov	r0, r4
        231ba0:	e3a03000 	mov	r3, #0	; 0x0
        231ba4:	e3a02001 	mov	r2, #1	; 0x1
        231ba8:	e594c000 	ldr	ip, [r4]
        231bac:	e1a0e00f 	mov	lr, pc
        231bb0:	e28cf034 	add	pc, ip, #52	; 0x34
        231bb4:	e1a01000 	mov	r1, r0
        231bb8:	e3380000 	teq	r8, #0	; 0x0
        231bbc:	10811088 	addne	r1, r1, r8, lsl #1
        231bc0:	e1a02006 	mov	r2, r6
        231bc4:	e1a0000d 	mov	r0, sp
        231bc8:	eb655a0e 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        231bcc:	e1a02006 	mov	r2, r6
        231bd0:	e1a0100d 	mov	r1, sp
        231bd4:	e51b002c 	ldr	r0, [fp, -#44]
        231bd8:	eb655a0c 	bl	1b88410 <TXTextDescriptor::$CopyTo(TXTextDescriptor *, long)>
        231bdc:	e1a01005 	mov	r1, r5
        231be0:	e1a00004 	mov	r0, r4
        231be4:	e5942000 	ldr	r2, [r4]
        231be8:	e1a0e00f 	mov	lr, pc
        231bec:	e282f038 	add	pc, r2, #56	; 0x38
        231bf0:	e3a08000 	mov	r8, #0	; 0x0
        231bf4:	e1a0200a 	mov	r2, sl
        231bf8:	e1a01005 	mov	r1, r5
        231bfc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        231c00:	eb6551c6 	bl	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        231c04:	e5940004 	ldr	r0, [r4, #4]	; fField4
        231c08:	e1500007 	cmp	r0, r7
        231c0c:	a1a00007 	movge	r0, r7
        231c10:	e1a06000 	mov	r6, r0
        231c14:	e2855001 	add	r5, r5, #1	; 0x1
        231c18:	e1550009 	cmp	r5, r9
        231c1c:	daffffd4 	ble	231b74 <TXChunkedChars::InsertUsingExtraChunks(long, long, TXTextDescriptor *)+0x204>
        231c20:	e2891001 	add	r1, r9, #1	; 0x1
        231c24:	e5940008 	ldr	r0, [r4, #8]	; fField8
        231c28:	e3e03000 	mvn	r3, #0	; 0x0
        231c2c:	e59d2024 	ldr	r2, [sp, #36]
        231c30:	eb6551b3 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        231c34:	e594000c 	ldr	r0, [r4, #12]	; fField12
        231c38:	e59d1024 	ldr	r1, [sp, #36]
        231c3c:	e0800001 	add	r0, r0, r1
        231c40:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        231c44:	e3a00000 	mov	r0, #0	; 0x0
        231c48:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::Remove(long, long)
 * Address: 00231c4c
 */
TXChunkedChars::Remove(long, long) {
    /*
        231c4c:	e1a0c00d 	mov	ip, sp
        231c50:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        231c54:	e24cb004 	sub	fp, ip, #4	; 0x4
        231c58:	e1a04000 	mov	r4, r0
        231c5c:	e1a05002 	mov	r5, r2
        231c60:	e24dd020 	sub	sp, sp, #32	; 0x20
        231c64:	e5900008 	ldr	r0, [r0, #8]	; fField8
        231c68:	e1a0300d 	mov	r3, sp
        231c6c:	eb6551b0 	bl	1b86334 <$SectRanges__8TXRangesCFlT1P12TXSectRanges>
        231c70:	e59d0014 	ldr	r0, [sp, #20]
        231c74:	e2806001 	add	r6, r0, #1	; 0x1
        231c78:	e59d0018 	ldr	r0, [sp, #24]
        231c7c:	e3300000 	teq	r0, #0	; 0x0
        231c80:	0a00001a 	beq	231cf0 <TXChunkedChars::Remove(long, long)+0xa4>
        231c84:	e59d0000 	ldr	r0, [sp]
        231c88:	e59d1014 	ldr	r1, [sp, #20]
        231c8c:	e1310000 	teq	r1, r0
        231c90:	1a000002 	bne	231ca0 <TXChunkedChars::Remove(long, long)+0x54>
        231c94:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        231c98:	e3300000 	teq	r0, #0	; 0x0
        231c9c:	1a000013 	bne	231cf0 <TXChunkedChars::Remove(long, long)+0xa4>
        231ca0:	e3a03000 	mov	r3, #0	; 0x0
        231ca4:	e3a02000 	mov	r2, #0	; 0x0
        231ca8:	e92d000c 	stmdb	sp!, {r2, r3}
        231cac:	e1a00004 	mov	r0, r4
        231cb0:	e59d101c 	ldr	r1, [sp, #28]
        231cb4:	e59d3024 	ldr	r3, [sp, #36]
        231cb8:	e594c000 	ldr	ip, [r4]
        231cbc:	e1a0e00f 	mov	lr, pc
        231cc0:	e28cf044 	add	pc, ip, #68	; 0x44
        231cc4:	e28dd008 	add	sp, sp, #8	; 0x8
        231cc8:	e59d0014 	ldr	r0, [sp, #20]
        231ccc:	e59d1000 	ldr	r1, [sp]
        231cd0:	e1300001 	teq	r0, r1
        231cd4:	0a000005 	beq	231cf0 <TXChunkedChars::Remove(long, long)+0xa4>
        231cd8:	e59d001c 	ldr	r0, [sp, #28]
        231cdc:	e0450000 	sub	r0, r5, r0
        231ce0:	e2602000 	rsb	r2, r0, #0	; 0x0
        231ce4:	e59d1014 	ldr	r1, [sp, #20]
        231ce8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        231cec:	eb65518c 	bl	1b86324 <TXRanges::$AddToRangeEnd(long, long)>
        231cf0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        231cf4:	e3300000 	teq	r0, #0	; 0x0
        231cf8:	0a000009 	beq	231d24 <TXChunkedChars::Remove(long, long)+0xd8>
        231cfc:	e3a03000 	mov	r3, #0	; 0x0
        231d00:	e3a02000 	mov	r2, #0	; 0x0
        231d04:	e92d000c 	stmdb	sp!, {r2, r3}
        231d08:	e1a00004 	mov	r0, r4
        231d0c:	e28d3008 	add	r3, sp, #8	; 0x8
        231d10:	e893000e 	ldmia	r3, {r1, r2, r3}
        231d14:	e594c000 	ldr	ip, [r4]
        231d18:	e1a0e00f 	mov	lr, pc
        231d1c:	e28cf044 	add	pc, ip, #68	; 0x44
        231d20:	e28dd008 	add	sp, sp, #8	; 0x8
        231d24:	e59d0014 	ldr	r0, [sp, #20]
        231d28:	e2801001 	add	r1, r0, #1	; 0x1
        231d2c:	e2652000 	rsb	r2, r5, #0	; 0x0
        231d30:	e3e03000 	mvn	r3, #0	; 0x0
        231d34:	e5940008 	ldr	r0, [r4, #8]	; fField8
        231d38:	eb655171 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        231d3c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        231d40:	e0400005 	sub	r0, r0, r5
        231d44:	e584000c 	str	r0, [r4, #12]	; fField12
        231d48:	e59d0010 	ldr	r0, [sp, #16]
        231d4c:	e3300000 	teq	r0, #0	; 0x0
        231d50:	0a00000e 	beq	231d90 <TXChunkedChars::Remove(long, long)+0x144>
        231d54:	e59d0010 	ldr	r0, [sp, #16]
        231d58:	e0466000 	sub	r6, r6, r0
        231d5c:	e1a02000 	mov	r2, r0
        231d60:	e1a00004 	mov	r0, r4
        231d64:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        231d68:	e5943000 	ldr	r3, [r4]
        231d6c:	e1a0e00f 	mov	lr, pc
        231d70:	e283f040 	add	pc, r3, #64	; 0x40
        231d74:	e5943008 	ldr	r3, [r4, #8]	; fField8
        231d78:	e1a00003 	mov	r0, r3
        231d7c:	e28d200c 	add	r2, sp, #12	; 0xc
        231d80:	e8920006 	ldmia	r2, {r1, r2}
        231d84:	e5933000 	ldr	r3, [r3]
        231d88:	e1a0e00f 	mov	lr, pc
        231d8c:	e283f004 	add	pc, r3, #4	; 0x4
        231d90:	e59d0000 	ldr	r0, [sp]
        231d94:	e2400001 	sub	r0, r0, #1	; 0x1
        231d98:	e3a01000 	mov	r1, #0	; 0x0
        231d9c:	e3500000 	cmp	r0, #0	; 0x0
        231da0:	d1a00001 	movle	r0, r1
        231da4:	e1a05000 	mov	r5, r0
        231da8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        231dac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        231db0:	e2400001 	sub	r0, r0, #1	; 0x1
        231db4:	e1500006 	cmp	r0, r6
        231db8:	a1a00006 	movge	r0, r6
        231dbc:	e1a06000 	mov	r6, r0
        231dc0:	e1550000 	cmp	r5, r0
        231dc4:	aa000018 	bge	231e2c <TXChunkedChars::Remove(long, long)+0x1e0>
        231dc8:	e2852001 	add	r2, r5, #1	; 0x1
        231dcc:	e1a07002 	mov	r7, r2
        231dd0:	e1a01005 	mov	r1, r5
        231dd4:	e1a00004 	mov	r0, r4
        231dd8:	eb65557a 	bl	1b873c8 <TXChunkedChars::$ConcatChunks(long, long)>
        231ddc:	e3300000 	teq	r0, #0	; 0x0
        231de0:	0a00000e 	beq	231e20 <TXChunkedChars::Remove(long, long)+0x1d4>
        231de4:	e1a01007 	mov	r1, r7
        231de8:	e1a00004 	mov	r0, r4
        231dec:	e3a02001 	mov	r2, #1	; 0x1
        231df0:	e5943000 	ldr	r3, [r4]
        231df4:	e1a0e00f 	mov	lr, pc
        231df8:	e283f040 	add	pc, r3, #64	; 0x40
        231dfc:	e1a01007 	mov	r1, r7
        231e00:	e5943008 	ldr	r3, [r4, #8]	; fField8
        231e04:	e1a00003 	mov	r0, r3
        231e08:	e3a02001 	mov	r2, #1	; 0x1
        231e0c:	e5933000 	ldr	r3, [r3]
        231e10:	e1a0e00f 	mov	lr, pc
        231e14:	e283f004 	add	pc, r3, #4	; 0x4
        231e18:	e2466001 	sub	r6, r6, #1	; 0x1
        231e1c:	ea000000 	b	231e24 <TXChunkedChars::Remove(long, long)+0x1d8>
        231e20:	e1a05007 	mov	r5, r7
        231e24:	e1550006 	cmp	r5, r6
        231e28:	baffffe6 	blt	231dc8 <TXChunkedChars::Remove(long, long)+0x17c>
        231e2c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::ConcatChunks(long, long)
 * Address: 00231e30
 */
TXChunkedChars::ConcatChunks(long, long) {
    /*
        231e30:	e1a0c00d 	mov	ip, sp
        231e34:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        231e38:	e24cb004 	sub	fp, ip, #4	; 0x4
        231e3c:	e1a04000 	mov	r4, r0
        231e40:	e1a06001 	mov	r6, r1
        231e44:	e1a05002 	mov	r5, r2
        231e48:	e5900008 	ldr	r0, [r0, #8]	; fField8
        231e4c:	eb655131 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        231e50:	e1a07000 	mov	r7, r0
        231e54:	e1a01005 	mov	r1, r5
        231e58:	e5940008 	ldr	r0, [r4, #8]	; fField8
        231e5c:	eb65512d 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        231e60:	e1a03000 	mov	r3, r0
        231e64:	e0871000 	add	r1, r7, r0
        231e68:	e5940004 	ldr	r0, [r4, #4]	; fField4
        231e6c:	e1510000 	cmp	r1, r0
        231e70:	c3a00000 	movgt	r0, #0	; 0x0
        231e74:	c91ba8f0 	ldmgtdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        231e78:	e1560005 	cmp	r6, r5
        231e7c:	a3a00000 	movge	r0, #0	; 0x0
        231e80:	b1a00007 	movlt	r0, r7
        231e84:	e3a02000 	mov	r2, #0	; 0x0
        231e88:	e1a01005 	mov	r1, r5
        231e8c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        231e90:	e1a02000 	mov	r2, r0
        231e94:	e1a01006 	mov	r1, r6
        231e98:	e1a00004 	mov	r0, r4
        231e9c:	e3a03000 	mov	r3, #0	; 0x0
        231ea0:	eb65554a 	bl	1b873d0 <TXChunkedChars::$MungeChunk(long, long, long, long, long, long)>
        231ea4:	e3a00001 	mov	r0, #1	; 0x1
        231ea8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::MungeChunk(long, long, long, TXTextDescriptor *, long)
 * Address: 00231eac
 */
TXChunkedChars::MungeChunk(long, long, long, TXTextDescriptor *, long) {
    /*
        231eac:	e1a0c00d 	mov	ip, sp
        231eb0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        231eb4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        231eb8:	e24cb014 	sub	fp, ip, #20	; 0x14
        231ebc:	e1a04002 	mov	r4, r2
        231ec0:	e1a05003 	mov	r5, r3
        231ec4:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        231ec8:	e59b9018 	ldr	r9, [fp, #24]
        231ecc:	e5900008 	ldr	r0, [r0, #8]	; fField8
        231ed0:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        231ed4:	eb65510f 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        231ed8:	e0497005 	sub	r7, r9, r5
        231edc:	e3570000 	cmp	r7, #0	; 0x0
        231ee0:	c0405004 	subgt	r5, r0, r4
        231ee4:	c1a08004 	movgt	r8, r4
        231ee8:	c084a007 	addgt	sl, r4, r7
        231eec:	ca000003 	bgt	231f00 <TXChunkedChars::MungeChunk(long, long, long, TXTextDescriptor *, long)+0x54>
        231ef0:	a3a05000 	movge	r5, #0	; 0x0
        231ef4:	b0448007 	sublt	r8, r4, r7
        231ef8:	b0405008 	sublt	r5, r0, r8
        231efc:	b1a0a004 	movlt	sl, r4
        231f00:	e59bc004 	ldr	ip, [fp, #4]	; fField4
        231f04:	e1a0000c 	mov	r0, ip
        231f08:	e3a03000 	mov	r3, #0	; 0x0
        231f0c:	e3a02001 	mov	r2, #1	; 0x1
        231f10:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        231f14:	e59cc000 	ldr	ip, [ip]
        231f18:	e1a0e00f 	mov	lr, pc
        231f1c:	e28cf034 	add	pc, ip, #52	; 0x34
        231f20:	e1a06000 	mov	r6, r0
        231f24:	e3550000 	cmp	r5, #0	; 0x0
        231f28:	da000003 	ble	231f3c <TXChunkedChars::MungeChunk(long, long, long, TXTextDescriptor *, long)+0x90>
        231f2c:	e1a02085 	mov	r2, r5, lsl #1
        231f30:	e086108a 	add	r1, r6, sl, lsl #1
        231f34:	e0860088 	add	r0, r6, r8, lsl #1
        231f38:	eb66b405 	bl	1bdef54 <$BlockMove>
        231f3c:	e3390000 	teq	r9, #0	; 0x0
        231f40:	0a000012 	beq	231f90 <TXChunkedChars::MungeChunk(long, long, long, TXTextDescriptor *, long)+0xe4>
        231f44:	e24dd014 	sub	sp, sp, #20	; 0x14
        231f48:	e0861084 	add	r1, r6, r4, lsl #1
        231f4c:	e1a02009 	mov	r2, r9
        231f50:	e1a0000d 	mov	r0, sp
        231f54:	eb65592b 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        231f58:	e1a02009 	mov	r2, r9
        231f5c:	e1a0100d 	mov	r1, sp
        231f60:	e59b0014 	ldr	r0, [fp, #20]
        231f64:	eb655929 	bl	1b88410 <TXTextDescriptor::$CopyTo(TXTextDescriptor *, long)>
        231f68:	e1b04000 	movs	r4, r0
        231f6c:	0a000005 	beq	231f88 <TXChunkedChars::MungeChunk(long, long, long, TXTextDescriptor *, long)+0xdc>
        231f70:	e3550000 	cmp	r5, #0	; 0x0
        231f74:	da000003 	ble	231f88 <TXChunkedChars::MungeChunk(long, long, long, TXTextDescriptor *, long)+0xdc>
        231f78:	e1a02085 	mov	r2, r5, lsl #1
        231f7c:	e0861088 	add	r1, r6, r8, lsl #1
        231f80:	e086008a 	add	r0, r6, sl, lsl #1
        231f84:	eb66b3f2 	bl	1bdef54 <$BlockMove>
        231f88:	e28dd014 	add	sp, sp, #20	; 0x14
        231f8c:	ea000000 	b	231f94 <TXChunkedChars::MungeChunk(long, long, long, TXTextDescriptor *, long)+0xe8>
        231f90:	e3a04000 	mov	r4, #0	; 0x0
        231f94:	e59b2004 	ldr	r2, [fp, #4]	; fField4
        231f98:	e1a00002 	mov	r0, r2
        231f9c:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        231fa0:	e5922000 	ldr	r2, [r2]
        231fa4:	e1a0e00f 	mov	lr, pc
        231fa8:	e282f038 	add	pc, r2, #56	; 0x38
        231fac:	e3340000 	teq	r4, #0	; 0x0
        231fb0:	1a000006 	bne	231fd0 <TXChunkedChars::MungeChunk(long, long, long, TXTextDescriptor *, long)+0x124>
        231fb4:	e3370000 	teq	r7, #0	; 0x0
        231fb8:	0a000004 	beq	231fd0 <TXChunkedChars::MungeChunk(long, long, long, TXTextDescriptor *, long)+0x124>
        231fbc:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        231fc0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        231fc4:	e1a02007 	mov	r2, r7
        231fc8:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        231fcc:	eb6550d4 	bl	1b86324 <TXRanges::$AddToRangeEnd(long, long)>
        231fd0:	e1a00004 	mov	r0, r4
        231fd4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::MungeChunk(long, long, long, long, long, long)
 * Address: 00231fd8
 */
TXChunkedChars::MungeChunk(long, long, long, long, long, long) {
    /*
        231fd8:	e1a0c00d 	mov	ip, sp
        231fdc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        231fe0:	e24cb004 	sub	fp, ip, #4	; 0x4
        231fe4:	e1a04000 	mov	r4, r0
        231fe8:	e1a07001 	mov	r7, r1
        231fec:	e1a06002 	mov	r6, r2
        231ff0:	e1a05003 	mov	r5, r3
        231ff4:	e59b800c 	ldr	r8, [fp, #12]	; fField12
        231ff8:	e99b0600 	ldmib	fp, {r9, sl}
        231ffc:	e24dd014 	sub	sp, sp, #20	; 0x14
        232000:	e1a01009 	mov	r1, r9
        232004:	e3a03001 	mov	r3, #1	; 0x1
        232008:	e3a02001 	mov	r2, #1	; 0x1
        23200c:	e590c000 	ldr	ip, [r0]
        232010:	e1a0e00f 	mov	lr, pc
        232014:	e28cf034 	add	pc, ip, #52	; 0x34
        232018:	e080108a 	add	r1, r0, sl, lsl #1
        23201c:	e1a02008 	mov	r2, r8
        232020:	e1a0000d 	mov	r0, sp
        232024:	eb6558f7 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        232028:	e1a03008 	mov	r3, r8
        23202c:	e1a0200d 	mov	r2, sp
        232030:	e92d000c 	stmdb	sp!, {r2, r3}
        232034:	e1a03005 	mov	r3, r5
        232038:	e1a02006 	mov	r2, r6
        23203c:	e1a01007 	mov	r1, r7
        232040:	e1a00004 	mov	r0, r4
        232044:	e594c000 	ldr	ip, [r4]
        232048:	e1a0e00f 	mov	lr, pc
        23204c:	e28cf044 	add	pc, ip, #68	; 0x44
        232050:	e28dd008 	add	sp, sp, #8	; 0x8
        232054:	e1a05000 	mov	r5, r0
        232058:	e1a01009 	mov	r1, r9
        23205c:	e1a00004 	mov	r0, r4
        232060:	e5942000 	ldr	r2, [r4]
        232064:	e1a0e00f 	mov	lr, pc
        232068:	e282f038 	add	pc, r2, #56	; 0x38
        23206c:	e1a00005 	mov	r0, r5
        232070:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::CopyTo(TXTextDescriptor *, long, long)
 * Address: 00232074
 */
TXChunkedChars::CopyTo(TXTextDescriptor *, long, long) {
    /*
        232074:	e1a0c00d 	mov	ip, sp
        232078:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23207c:	e24cb004 	sub	fp, ip, #4	; 0x4
        232080:	e1a05000 	mov	r5, r0
        232084:	e1a06001 	mov	r6, r1
        232088:	e1a07002 	mov	r7, r2
        23208c:	e1a04003 	mov	r4, r3
        232090:	e3a0a000 	mov	sl, #0	; 0x0
        232094:	e52d2008 	str	r2, [sp, -#8]!	; fField8
        232098:	e5cda004 	strb	sl, [sp, #4]	; fField4
        23209c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2320a0:	e89d0006 	ldmia	sp, {r1, r2}
        2320a4:	eb6550a1 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        2320a8:	e1b08000 	movs	r8, r0
        2320ac:	4a000027 	bmi	232150 <TXChunkedChars::CopyTo(TXTextDescriptor *, long, long)+0xdc>
        2320b0:	e24dd014 	sub	sp, sp, #20	; 0x14
        2320b4:	e1a0000d 	mov	r0, sp
        2320b8:	eb6558d0 	bl	1b88400 <TXTextDescriptor::$__ct(void)>
        2320bc:	e1a01008 	mov	r1, r8
        2320c0:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2320c4:	eb655092 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        2320c8:	e0479000 	sub	r9, r7, r0
        2320cc:	e3340000 	teq	r4, #0	; 0x0
        2320d0:	0a00001d 	beq	23214c <TXChunkedChars::CopyTo(TXTextDescriptor *, long, long)+0xd8>
        2320d4:	e1a01008 	mov	r1, r8
        2320d8:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2320dc:	eb65508d 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        2320e0:	e1a07000 	mov	r7, r0
        2320e4:	e1a01008 	mov	r1, r8
        2320e8:	e1a00005 	mov	r0, r5
        2320ec:	e3a03001 	mov	r3, #1	; 0x1
        2320f0:	e3a02000 	mov	r2, #0	; 0x0
        2320f4:	e595c000 	ldr	ip, [r5]
        2320f8:	e1a0e00f 	mov	lr, pc
        2320fc:	e28cf034 	add	pc, ip, #52	; 0x34
        232100:	e1a01000 	mov	r1, r0
        232104:	e3390000 	teq	r9, #0	; 0x0
        232108:	10477009 	subne	r7, r7, r9
        23210c:	10811089 	addne	r1, r1, r9, lsl #1
        232110:	13a09000 	movne	r9, #0	; 0x0
        232114:	e1570004 	cmp	r7, r4
        232118:	c1a07004 	movgt	r7, r4
        23211c:	e1a02007 	mov	r2, r7
        232120:	e1a0000d 	mov	r0, sp
        232124:	eb6558b7 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        232128:	e1a02007 	mov	r2, r7
        23212c:	e1a01006 	mov	r1, r6
        232130:	e1a0000d 	mov	r0, sp
        232134:	eb6558b5 	bl	1b88410 <TXTextDescriptor::$CopyTo(TXTextDescriptor *, long)>
        232138:	e3300000 	teq	r0, #0	; 0x0
        23213c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        232140:	e0544007 	subs	r4, r4, r7
        232144:	e2888001 	add	r8, r8, #1	; 0x1
        232148:	1affffe1 	bne	2320d4 <TXChunkedChars::CopyTo(TXTextDescriptor *, long, long)+0x60>
        23214c:	e28dd014 	add	sp, sp, #20	; 0x14
        232150:	e1a0000a 	mov	r0, sl
        232154:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::GetChar(long)
 * Address: 00232158
 */
TXChunkedChars::GetChar(long) {
    /*
        232158:	e1a0c00d 	mov	ip, sp
        23215c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        232160:	e24cb004 	sub	fp, ip, #4	; 0x4
        232164:	e1a04000 	mov	r4, r0
        232168:	e1a05001 	mov	r5, r1
        23216c:	e3a07000 	mov	r7, #0	; 0x0
        232170:	e52d1008 	str	r1, [sp, -#8]!	; fField8
        232174:	e5cd7004 	strb	r7, [sp, #4]	; fField4
        232178:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23217c:	e89d0006 	ldmia	sp, {r1, r2}
        232180:	eb65506a 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        232184:	e1b06000 	movs	r6, r0
        232188:	41a00007 	movmi	r0, r7
        23218c:	4a00000c 	bmi	2321c4 <TXChunkedChars::GetChar(long)+0x6c>
        232190:	e1a01006 	mov	r1, r6
        232194:	e5940008 	ldr	r0, [r4, #8]	; fField8
        232198:	eb65505d 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        23219c:	e0455000 	sub	r5, r5, r0
        2321a0:	e1a01006 	mov	r1, r6
        2321a4:	e1a00004 	mov	r0, r4
        2321a8:	e3a03001 	mov	r3, #1	; 0x1
        2321ac:	e3a02000 	mov	r2, #0	; 0x0
        2321b0:	e594c000 	ldr	ip, [r4]
        2321b4:	e1a0e00f 	mov	lr, pc
        2321b8:	e28cf034 	add	pc, ip, #52	; 0x34
        2321bc:	e7900085 	ldr	r0, [r0, r5, lsl #1]
        2321c0:	e1a00820 	mov	r0, r0, lsr #16
        2321c4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::AcquireCharChunk(long, long *, long *)
 * Address: 002321c8
 */
TXChunkedChars::AcquireCharChunk(long, long *, long *) {
    /*
        2321c8:	e1a0c00d 	mov	ip, sp
        2321cc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2321d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2321d4:	e1a05000 	mov	r5, r0
        2321d8:	e1a04001 	mov	r4, r1
        2321dc:	e1a07002 	mov	r7, r2
        2321e0:	e1a06003 	mov	r6, r3
        2321e4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2321e8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2321ec:	e3a08000 	mov	r8, #0	; 0x0
        2321f0:	e1500001 	cmp	r0, r1
        2321f4:	da000007 	ble	232218 <TXChunkedChars::AcquireCharChunk(long, long *, long *)+0x50>
        2321f8:	e58d4000 	str	r4, [sp]
        2321fc:	e5cd8004 	strb	r8, [sp, #4]	; fField4
        232200:	e5950008 	ldr	r0, [r5, #8]	; fField8
        232204:	e89d0006 	ldmia	sp, {r1, r2}
        232208:	eb655048 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        23220c:	e5870000 	str	r0, [r7]
        232210:	e1b01000 	movs	r1, r0
        232214:	5a000002 	bpl	232224 <TXChunkedChars::AcquireCharChunk(long, long *, long *)+0x5c>
        232218:	e1a00008 	mov	r0, r8
        23221c:	e5868000 	str	r8, [r6]
        232220:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        232224:	e24dd008 	sub	sp, sp, #8	; 0x8
        232228:	e1a0200d 	mov	r2, sp
        23222c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        232230:	eb655039 	bl	1b8631c <TXRanges::$GetRangeBounds( const(long, TXOffsetPair *))>
        232234:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        232238:	e0400004 	sub	r0, r0, r4
        23223c:	e5860000 	str	r0, [r6]
        232240:	e1a00005 	mov	r0, r5
        232244:	e3a03001 	mov	r3, #1	; 0x1
        232248:	e3a02001 	mov	r2, #1	; 0x1
        23224c:	e5971000 	ldr	r1, [r7]
        232250:	e595c000 	ldr	ip, [r5]
        232254:	e1a0e00f 	mov	lr, pc
        232258:	e28cf034 	add	pc, ip, #52	; 0x34
        23225c:	e49d1010 	ldr	r1, [sp], #16
        232260:	e0441001 	sub	r1, r4, r1
        232264:	e0800081 	add	r0, r0, r1, lsl #1
        232268:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::ReleaseCharChunk(long)
 * Address: 0023226c
 */
TXChunkedChars::ReleaseCharChunk(long) {
    /*
        23226c:	e3510000 	cmp	r1, #0	; 0x0
        232270:	b1a0f00e 	movlt	pc, lr
        232274:	e5902000 	ldr	r2, [r0]
        232278:	e282f038 	add	pc, r2, #56	; 0x38
    */
}

/**
 * Symbol: TXChunkedChars::GetLineChars(long, long, long *)
 * Address: 00232280
 */
TXChunkedChars::GetLineChars(long, long, long *) {
    /*
        232280:	e1a0c00d 	mov	ip, sp
        232284:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        232288:	e24cb004 	sub	fp, ip, #4	; 0x4
        23228c:	e1a06000 	mov	r6, r0
        232290:	e1a05001 	mov	r5, r1
        232294:	e1a04002 	mov	r4, r2
        232298:	e1a07003 	mov	r7, r3
        23229c:	e3a00000 	mov	r0, #0	; 0x0
        2322a0:	e3520080 	cmp	r2, #128	; 0x80
        2322a4:	c3a04080 	movgt	r4, #128	; 0x80
        2322a8:	ca000003 	bgt	2322bc <TXChunkedChars::GetLineChars(long, long, long *)+0x3c>
        2322ac:	e3340000 	teq	r4, #0	; 0x0
        2322b0:	03e01000 	mvneq	r1, #0	; 0x0
        2322b4:	05871000 	streq	r1, [r7]
        2322b8:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2322bc:	e52d5008 	str	r5, [sp, -#8]!	; fField8
        2322c0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2322c4:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2322c8:	e89d0006 	ldmia	sp, {r1, r2}
        2322cc:	eb655017 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        2322d0:	e1a08000 	mov	r8, r0
        2322d4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2322d8:	e1a0200d 	mov	r2, sp
        2322dc:	e1a01008 	mov	r1, r8
        2322e0:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2322e4:	eb65500c 	bl	1b8631c <TXRanges::$GetRangeBounds( const(long, TXOffsetPair *))>
        2322e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2322ec:	e0400005 	sub	r0, r0, r5
        2322f0:	e1500004 	cmp	r0, r4
        2322f4:	ba00000a 	blt	232324 <TXChunkedChars::GetLineChars(long, long, long *)+0xa4>
        2322f8:	e1a01008 	mov	r1, r8
        2322fc:	e1a00006 	mov	r0, r6
        232300:	e3a03001 	mov	r3, #1	; 0x1
        232304:	e3a02001 	mov	r2, #1	; 0x1
        232308:	e596c000 	ldr	ip, [r6]
        23230c:	e1a0e00f 	mov	lr, pc
        232310:	e28cf034 	add	pc, ip, #52	; 0x34
        232314:	e59d1000 	ldr	r1, [sp]
        232318:	e0451001 	sub	r1, r5, r1
        23231c:	e0809081 	add	r9, r0, r1, lsl #1
        232320:	ea00000f 	b	232364 <TXChunkedChars::GetLineChars(long, long, long *)+0xe4>
        232324:	e3e08000 	mvn	r8, #0	; 0x0
        232328:	e59f0040 	ldr	r0, [pc, #40]	; 232370 <TXChunkedChars::GetLineChars(long, long, long *)+0xf0>
        23232c:	e5909000 	ldr	r9, [r0]
        232330:	e24dd014 	sub	sp, sp, #20	; 0x14
        232334:	e1a02004 	mov	r2, r4
        232338:	e1a01009 	mov	r1, r9
        23233c:	e1a0000d 	mov	r0, sp
        232340:	eb655830 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        232344:	e1a03004 	mov	r3, r4
        232348:	e1a02005 	mov	r2, r5
        23234c:	e1a0100d 	mov	r1, sp
        232350:	e1a00006 	mov	r0, r6
        232354:	e596c000 	ldr	ip, [r6]
        232358:	e1a0e00f 	mov	lr, pc
        23235c:	e28cf00c 	add	pc, ip, #12	; 0xc
        232360:	e28dd014 	add	sp, sp, #20	; 0x14
        232364:	e1a00009 	mov	r0, r9
        232368:	e5878000 	str	r8, [r7]
        23236c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        232370:	0c104d70 	ldceq	13, cr4, [r0], -#448
    */
}

/**
 * Symbol: TXChunkedChars::SearchChar(unsigned short, long, long)
 * Address: 00232374
 */
TXChunkedChars::SearchChar(unsigned short, long, long) {
    /*
        232374:	e1a0c00d 	mov	ip, sp
        232378:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23237c:	e24cb004 	sub	fp, ip, #4	; 0x4
        232380:	e1a06000 	mov	r6, r0
        232384:	e1a05002 	mov	r5, r2
        232388:	e1a04003 	mov	r4, r3
        23238c:	e1a0a801 	mov	sl, r1, lsl #16
        232390:	e1a0a82a 	mov	sl, sl, lsr #16
        232394:	e3a00000 	mov	r0, #0	; 0x0
        232398:	e52d2008 	str	r2, [sp, -#8]!	; fField8
        23239c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2323a0:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2323a4:	e89d0006 	ldmia	sp, {r1, r2}
        2323a8:	eb654fe0 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        2323ac:	e1b08000 	movs	r8, r0
        2323b0:	4a000023 	bmi	232444 <TXChunkedChars::SearchChar(unsigned short, long, long)+0xd0>
        2323b4:	e1a01008 	mov	r1, r8
        2323b8:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2323bc:	eb654fd4 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        2323c0:	e0459000 	sub	r9, r5, r0
        2323c4:	e3a05000 	mov	r5, #0	; 0x0
        2323c8:	e3340000 	teq	r4, #0	; 0x0
        2323cc:	0a00001c 	beq	232444 <TXChunkedChars::SearchChar(unsigned short, long, long)+0xd0>
        2323d0:	e1a01008 	mov	r1, r8
        2323d4:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2323d8:	eb654fce 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        2323dc:	e1a07000 	mov	r7, r0
        2323e0:	e1a01008 	mov	r1, r8
        2323e4:	e1a00006 	mov	r0, r6
        2323e8:	e3a03001 	mov	r3, #1	; 0x1
        2323ec:	e3a02000 	mov	r2, #0	; 0x0
        2323f0:	e596c000 	ldr	ip, [r6]
        2323f4:	e1a0e00f 	mov	lr, pc
        2323f8:	e28cf034 	add	pc, ip, #52	; 0x34
        2323fc:	e1a01000 	mov	r1, r0
        232400:	e3390000 	teq	r9, #0	; 0x0
        232404:	10477009 	subne	r7, r7, r9
        232408:	10811089 	addne	r1, r1, r9, lsl #1
        23240c:	13a09000 	movne	r9, #0	; 0x0
        232410:	e1570004 	cmp	r7, r4
        232414:	c1a07004 	movgt	r7, r4
        232418:	e0444007 	sub	r4, r4, r7
        23241c:	e1a02007 	mov	r2, r7
        232420:	e1a0000a 	mov	r0, sl
        232424:	eb655c2b 	bl	1b894d8 <$SearchChar(unsigned short, unsigned short const *, long)>
        232428:	e3500000 	cmp	r0, #0	; 0x0
        23242c:	a0800005 	addge	r0, r0, r5
        232430:	aa000004 	bge	232448 <TXChunkedChars::SearchChar(unsigned short, long, long)+0xd4>
        232434:	e0855007 	add	r5, r5, r7
        232438:	e2888001 	add	r8, r8, #1	; 0x1
        23243c:	e3340000 	teq	r4, #0	; 0x0
        232440:	1affffe2 	bne	2323d0 <TXChunkedChars::SearchChar(unsigned short, long, long)+0x5c>
        232444:	e3e00000 	mvn	r0, #0	; 0x0
        232448:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::SearchCharBack(unsigned short, long, long)
 * Address: 0023244c
 */
TXChunkedChars::SearchCharBack(unsigned short, long, long) {
    /*
        23244c:	e1a0c00d 	mov	ip, sp
        232450:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        232454:	e24cb004 	sub	fp, ip, #4	; 0x4
        232458:	e1a06000 	mov	r6, r0
        23245c:	e1a05002 	mov	r5, r2
        232460:	e1a04003 	mov	r4, r3
        232464:	e1a0a801 	mov	sl, r1, lsl #16
        232468:	e1a0a82a 	mov	sl, sl, lsr #16
        23246c:	e3a00001 	mov	r0, #1	; 0x1
        232470:	e52d2008 	str	r2, [sp, -#8]!	; fField8
        232474:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        232478:	e5960008 	ldr	r0, [r6, #8]	; fField8
        23247c:	e89d0006 	ldmia	sp, {r1, r2}
        232480:	eb654faa 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        232484:	e1b08000 	movs	r8, r0
        232488:	4a000023 	bmi	23251c <TXChunkedChars::SearchCharBack(unsigned short, long, long)+0xd0>
        23248c:	e1a01008 	mov	r1, r8
        232490:	e5960008 	ldr	r0, [r6, #8]	; fField8
        232494:	eb654f9d 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        232498:	e0409005 	sub	r9, r0, r5
        23249c:	e3a05000 	mov	r5, #0	; 0x0
        2324a0:	e3340000 	teq	r4, #0	; 0x0
        2324a4:	0a00001c 	beq	23251c <TXChunkedChars::SearchCharBack(unsigned short, long, long)+0xd0>
        2324a8:	e1a01008 	mov	r1, r8
        2324ac:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2324b0:	eb654f98 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        2324b4:	e1a07000 	mov	r7, r0
        2324b8:	e1a01008 	mov	r1, r8
        2324bc:	e1a00006 	mov	r0, r6
        2324c0:	e3a03001 	mov	r3, #1	; 0x1
        2324c4:	e3a02000 	mov	r2, #0	; 0x0
        2324c8:	e596c000 	ldr	ip, [r6]
        2324cc:	e1a0e00f 	mov	lr, pc
        2324d0:	e28cf034 	add	pc, ip, #52	; 0x34
        2324d4:	e0801087 	add	r1, r0, r7, lsl #1
        2324d8:	e3390000 	teq	r9, #0	; 0x0
        2324dc:	10477009 	subne	r7, r7, r9
        2324e0:	10411089 	subne	r1, r1, r9, lsl #1
        2324e4:	13a09000 	movne	r9, #0	; 0x0
        2324e8:	e1570004 	cmp	r7, r4
        2324ec:	c1a07004 	movgt	r7, r4
        2324f0:	e0444007 	sub	r4, r4, r7
        2324f4:	e1a02007 	mov	r2, r7
        2324f8:	e1a0000a 	mov	r0, sl
        2324fc:	eb655bf6 	bl	1b894dc <$SearchCharBack(unsigned short, unsigned short const *, long)>
        232500:	e3500000 	cmp	r0, #0	; 0x0
        232504:	a0800005 	addge	r0, r0, r5
        232508:	aa000004 	bge	232520 <TXChunkedChars::SearchCharBack(unsigned short, long, long)+0xd4>
        23250c:	e0855007 	add	r5, r5, r7
        232510:	e2488001 	sub	r8, r8, #1	; 0x1
        232514:	e3340000 	teq	r4, #0	; 0x0
        232518:	1affffe2 	bne	2324a8 <TXChunkedChars::SearchCharBack(unsigned short, long, long)+0x5c>
        23251c:	e3e00000 	mvn	r0, #0	; 0x0
        232520:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::GetCtrlCharOffset(long, long, unsigned short *)
 * Address: 00232524
 */
TXChunkedChars::GetCtrlCharOffset(long, long, unsigned short *) {
    /*
        232524:	e1a0c00d 	mov	ip, sp
        232528:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23252c:	e24cb004 	sub	fp, ip, #4	; 0x4
        232530:	e1a06000 	mov	r6, r0
        232534:	e1a05001 	mov	r5, r1
        232538:	e1a04002 	mov	r4, r2
        23253c:	e1a07003 	mov	r7, r3
        232540:	e3a00000 	mov	r0, #0	; 0x0
        232544:	e52d1008 	str	r1, [sp, -#8]!	; fField8
        232548:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        23254c:	e5960008 	ldr	r0, [r6, #8]	; fField8
        232550:	e89d0006 	ldmia	sp, {r1, r2}
        232554:	eb654f75 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        232558:	e1b09000 	movs	r9, r0
        23255c:	4a000022 	bmi	2325ec <TXChunkedChars::GetCtrlCharOffset(long, long, unsigned short *)+0xc8>
        232560:	e1a01009 	mov	r1, r9
        232564:	e5960008 	ldr	r0, [r6, #8]	; fField8
        232568:	eb654f69 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        23256c:	e045a000 	sub	sl, r5, r0
        232570:	e3a05000 	mov	r5, #0	; 0x0
        232574:	e3340000 	teq	r4, #0	; 0x0
        232578:	0a00001b 	beq	2325ec <TXChunkedChars::GetCtrlCharOffset(long, long, unsigned short *)+0xc8>
        23257c:	e1a01009 	mov	r1, r9
        232580:	e5960008 	ldr	r0, [r6, #8]	; fField8
        232584:	eb654f63 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        232588:	e1a08000 	mov	r8, r0
        23258c:	e1a01009 	mov	r1, r9
        232590:	e1a00006 	mov	r0, r6
        232594:	e3a03001 	mov	r3, #1	; 0x1
        232598:	e3a02000 	mov	r2, #0	; 0x0
        23259c:	e596c000 	ldr	ip, [r6]
        2325a0:	e1a0e00f 	mov	lr, pc
        2325a4:	e28cf034 	add	pc, ip, #52	; 0x34
        2325a8:	e33a0000 	teq	sl, #0	; 0x0
        2325ac:	1048800a 	subne	r8, r8, sl
        2325b0:	1080008a 	addne	r0, r0, sl, lsl #1
        2325b4:	13a0a000 	movne	sl, #0	; 0x0
        2325b8:	e1580004 	cmp	r8, r4
        2325bc:	c1a08004 	movgt	r8, r4
        2325c0:	e0444008 	sub	r4, r4, r8
        2325c4:	e1a02007 	mov	r2, r7
        2325c8:	e1a01008 	mov	r1, r8
        2325cc:	eb655bc3 	bl	1b894e0 <$GetCtrlCharOffset(unsigned short const *, long, unsigned short *)>
        2325d0:	e3500000 	cmp	r0, #0	; 0x0
        2325d4:	a0800005 	addge	r0, r0, r5
        2325d8:	aa000004 	bge	2325f0 <TXChunkedChars::GetCtrlCharOffset(long, long, unsigned short *)+0xcc>
        2325dc:	e0855008 	add	r5, r5, r8
        2325e0:	e2899001 	add	r9, r9, #1	; 0x1
        2325e4:	e3340000 	teq	r4, #0	; 0x0
        2325e8:	1affffe3 	bne	23257c <TXChunkedChars::GetCtrlCharOffset(long, long, unsigned short *)+0x58>
        2325ec:	e3e00000 	mvn	r0, #0	; 0x0
        2325f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::Compact(void)
 * Address: 002325f4
 */
TXChunkedChars::Compact(void) {
    /*
        2325f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXChunkedChars::WriteChunksRanges(TXStream *)
 * Address: 002325f8
 */
TXChunkedChars::WriteChunksRanges(TXStream *) {
    /*
        2325f8:	e1a0c00d 	mov	ip, sp
        2325fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        232600:	e24cb004 	sub	fp, ip, #4	; 0x4
        232604:	e1a05000 	mov	r5, r0
        232608:	e1a04001 	mov	r4, r1
        23260c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        232610:	e5b07004 	ldr	r7, [r0, #4]!	; fField4
        232614:	e24dd004 	sub	sp, sp, #4	; 0x4
        232618:	e1a00807 	mov	r0, r7, lsl #16
        23261c:	e1a00840 	mov	r0, r0, asr #16
        232620:	e5cd0001 	strb	r0, [sp, #1]
        232624:	e1a00440 	mov	r0, r0, asr #8
        232628:	e5cd0000 	strb	r0, [sp]
        23262c:	e1a0100d 	mov	r1, sp
        232630:	e1a00004 	mov	r0, r4
        232634:	e3a02002 	mov	r2, #2	; 0x2
        232638:	eb659daa 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        23263c:	e28dd004 	add	sp, sp, #4	; 0x4
        232640:	e3300000 	teq	r0, #0	; 0x0
        232644:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        232648:	e3a06000 	mov	r6, #0	; 0x0
        23264c:	e3570000 	cmp	r7, #0	; 0x0
        232650:	da000022 	ble	2326e0 <TXChunkedChars::WriteChunksRanges(TXStream *)+0xe8>
        232654:	e1a01006 	mov	r1, r6
        232658:	e5950008 	ldr	r0, [r5, #8]	; fField8
        23265c:	eb654f2d 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        232660:	e5951004 	ldr	r1, [r5, #4]	; fField4
        232664:	e1310000 	teq	r1, r0
        232668:	0a000019 	beq	2326d4 <TXChunkedChars::WriteChunksRanges(TXStream *)+0xdc>
        23266c:	e24dd004 	sub	sp, sp, #4	; 0x4
        232670:	e1a00800 	mov	r0, r0, lsl #16
        232674:	e1a00840 	mov	r0, r0, asr #16
        232678:	e5cd0001 	strb	r0, [sp, #1]
        23267c:	e1a00440 	mov	r0, r0, asr #8
        232680:	e5cd0000 	strb	r0, [sp]
        232684:	e1a0100d 	mov	r1, sp
        232688:	e1a00004 	mov	r0, r4
        23268c:	e3a02002 	mov	r2, #2	; 0x2
        232690:	eb659d94 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        232694:	e28dd004 	add	sp, sp, #4	; 0x4
        232698:	e3300000 	teq	r0, #0	; 0x0
        23269c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2326a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2326a4:	e1a00806 	mov	r0, r6, lsl #16
        2326a8:	e1a00840 	mov	r0, r0, asr #16
        2326ac:	e5cd0001 	strb	r0, [sp, #1]
        2326b0:	e1a00440 	mov	r0, r0, asr #8
        2326b4:	e5cd0000 	strb	r0, [sp]
        2326b8:	e1a0100d 	mov	r1, sp
        2326bc:	e1a00004 	mov	r0, r4
        2326c0:	e3a02002 	mov	r2, #2	; 0x2
        2326c4:	eb659d87 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        2326c8:	e28dd004 	add	sp, sp, #4	; 0x4
        2326cc:	e3300000 	teq	r0, #0	; 0x0
        2326d0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2326d4:	e2866001 	add	r6, r6, #1	; 0x1
        2326d8:	e1560007 	cmp	r6, r7
        2326dc:	baffffdc 	blt	232654 <TXChunkedChars::WriteChunksRanges(TXStream *)+0x5c>
        2326e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2326e4:	e3a00000 	mov	r0, #0	; 0x0
        2326e8:	e5cd0001 	strb	r0, [sp, #1]
        2326ec:	e5cd0000 	strb	r0, [sp]
        2326f0:	e1a0100d 	mov	r1, sp
        2326f4:	e1a00004 	mov	r0, r4
        2326f8:	e3a02002 	mov	r2, #2	; 0x2
        2326fc:	eb659d79 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        232700:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::ReadChunksRanges(TXStream *)
 * Address: 00232704
 */
TXChunkedChars::ReadChunksRanges(TXStream *) {
    /*
        232704:	e1a0c00d 	mov	ip, sp
        232708:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23270c:	e24cb004 	sub	fp, ip, #4	; 0x4
        232710:	e1a04000 	mov	r4, r0
        232714:	e24dd004 	sub	sp, sp, #4	; 0x4
        232718:	e1a0100d 	mov	r1, sp
        23271c:	e3a02002 	mov	r2, #2	; 0x2
        232720:	e51b002c 	ldr	r0, [fp, -#44]
        232724:	eb659d70 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        232728:	e3300000 	teq	r0, #0	; 0x0
        23272c:	0a000000 	beq	232734 <TXChunkedChars::ReadChunksRanges(TXStream *)+0x30>
        232730:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        232734:	e59d9000 	ldr	r9, [sp]
        232738:	e1a09829 	mov	r9, r9, lsr #16
        23273c:	e28dd004 	add	sp, sp, #4	; 0x4
        232740:	e1a01009 	mov	r1, r9
        232744:	e5940008 	ldr	r0, [r4, #8]	; fField8
        232748:	ebfff867 	bl	2308ec <TXArray::SetCount(long)>
        23274c:	e1b06000 	movs	r6, r0
        232750:	0a000001 	beq	23275c <TXChunkedChars::ReadChunksRanges(TXStream *)+0x58>
        232754:	e1a00006 	mov	r0, r6
        232758:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23275c:	e3a05000 	mov	r5, #0	; 0x0
        232760:	e3a07000 	mov	r7, #0	; 0x0
        232764:	e3590000 	cmp	r9, #0	; 0x0
        232768:	ba00002a 	blt	232818 <TXChunkedChars::ReadChunksRanges(TXStream *)+0x114>
        23276c:	e24dd004 	sub	sp, sp, #4	; 0x4
        232770:	e1a0100d 	mov	r1, sp
        232774:	e3a02002 	mov	r2, #2	; 0x2
        232778:	e51b002c 	ldr	r0, [fp, -#44]
        23277c:	eb659d5a 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        232780:	e1b06000 	movs	r6, r0
        232784:	1a00000a 	bne	2327b4 <TXChunkedChars::ReadChunksRanges(TXStream *)+0xb0>
        232788:	e59da000 	ldr	sl, [sp]
        23278c:	e1b0a82a 	movs	sl, sl, lsr #16
        232790:	0a000009 	beq	2327bc <TXChunkedChars::ReadChunksRanges(TXStream *)+0xb8>
        232794:	e1a0100d 	mov	r1, sp
        232798:	e3a02002 	mov	r2, #2	; 0x2
        23279c:	e51b002c 	ldr	r0, [fp, -#44]
        2327a0:	eb659d51 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        2327a4:	e1b06000 	movs	r6, r0
        2327a8:	059d8000 	ldreq	r8, [sp]
        2327ac:	01a08828 	moveq	r8, r8, lsr #16
        2327b0:	0a000002 	beq	2327c0 <TXChunkedChars::ReadChunksRanges(TXStream *)+0xbc>
        2327b4:	e1a00006 	mov	r0, r6
        2327b8:	eaffffdc 	b	232730 <TXChunkedChars::ReadChunksRanges(TXStream *)+0x2c>
        2327bc:	e1a08009 	mov	r8, r9
        2327c0:	e28dd004 	add	sp, sp, #4	; 0x4
        2327c4:	e1570008 	cmp	r7, r8
        2327c8:	aa000008 	bge	2327f0 <TXChunkedChars::ReadChunksRanges(TXStream *)+0xec>
        2327cc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2327d0:	e0805005 	add	r5, r0, r5
        2327d4:	e1a02005 	mov	r2, r5
        2327d8:	e1a01007 	mov	r1, r7
        2327dc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2327e0:	eb654ece 	bl	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        2327e4:	e2877001 	add	r7, r7, #1	; 0x1
        2327e8:	e1570008 	cmp	r7, r8
        2327ec:	bafffff6 	blt	2327cc <TXChunkedChars::ReadChunksRanges(TXStream *)+0xc8>
        2327f0:	e33a0000 	teq	sl, #0	; 0x0
        2327f4:	0a000004 	beq	23280c <TXChunkedChars::ReadChunksRanges(TXStream *)+0x108>
        2327f8:	e085500a 	add	r5, r5, sl
        2327fc:	e1a02005 	mov	r2, r5
        232800:	e1a01008 	mov	r1, r8
        232804:	e5940008 	ldr	r0, [r4, #8]	; fField8
        232808:	eb654ec4 	bl	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        23280c:	e2877001 	add	r7, r7, #1	; 0x1
        232810:	e1570009 	cmp	r7, r9
        232814:	daffffd4 	ble	23276c <TXChunkedChars::ReadChunksRanges(TXStream *)+0x68>
        232818:	e5a4500c 	str	r5, [r4, #12]!	; fField12
        23281c:	eaffffcc 	b	232754 <TXChunkedChars::ReadChunksRanges(TXStream *)+0x50>
    */
}

/**
 * Symbol: TXChunkedChars::__ct(int)
 * Address: 0023288c
 */
TXChunkedChars::TXChunkedChars(int) {
    /*
        23288c:	e1a0c00d 	mov	ip, sp
        232890:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        232894:	e24cb004 	sub	fp, ip, #4	; 0x4
        232898:	e1b04000 	movs	r4, r0
        23289c:	e1a05001 	mov	r5, r1
        2328a0:	1a000005 	bne	2328bc <TXChunkedChars::__ct(int)+0x30>
        2328a4:	e3a00010 	mov	r0, #16	; 0x10
        2328a8:	eb666fa2 	bl	1bce738 <$__nw(unsigned int)>
        2328ac:	e1b04000 	movs	r4, r0
        2328b0:	1a000001 	bne	2328bc <TXChunkedChars::__ct(int)+0x30>
        2328b4:	e1a00004 	mov	r0, r4
        2328b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2328bc:	e1a00004 	mov	r0, r4
        2328c0:	eb6552b4 	bl	1b87398 <TXChars::$__ct(void)>
        2328c4:	e59f002c 	ldr	r0, [pc, #2c]	; 2328f8 <TXChunkedChars::__ct(int)+0x6c>
        2328c8:	e3550000 	cmp	r5, #0	; 0x0
        2328cc:	e5840000 	str	r0, [r4]
        2328d0:	d3a05c02 	movle	r5, #512	; 0x200
        2328d4:	e3a02001 	mov	r2, #1	; 0x1
        2328d8:	e3a01004 	mov	r1, #4	; 0x4
        2328dc:	e3a00000 	mov	r0, #0	; 0x0
        2328e0:	e5845004 	str	r5, [r4, #4]	; fField4
        2328e4:	eb654e87 	bl	1b86308 <TXRanges::$__ct(unsigned char, int)>
        2328e8:	e5840008 	str	r0, [r4, #8]	; fField8
        2328ec:	e3a00000 	mov	r0, #0	; 0x0
        2328f0:	e584000c 	str	r0, [r4, #12]	; fField12
        2328f4:	eaffffee 	b	2328b4 <TXChunkedChars::__ct(int)+0x28>
        2328f8:	0001dda8 	andeq	sp, r1, r8, lsr #27
    */
}

/**
 * Symbol: TXChunkedChars::__dt(void)
 * Address: 00232a64
 */
TXChunkedChars::~TXChunkedChars(void) {
    /*
        232a64:	e1a0c00d 	mov	ip, sp
        232a68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        232a6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        232a70:	e1a04000 	mov	r4, r0
        232a74:	e1a05001 	mov	r5, r1
        232a78:	e59f0038 	ldr	r0, [pc, #38]	; 232ab8 <TXChunkedChars::__dt(void)+0x54>
        232a7c:	e5840000 	str	r0, [r4]
        232a80:	e5940008 	ldr	r0, [r4, #8]	; fField8
        232a84:	e3300000 	teq	r0, #0	; 0x0
        232a88:	0a000002 	beq	232a98 <TXChunkedChars::__dt(void)+0x34>
        232a8c:	e3a01001 	mov	r1, #1	; 0x1
        232a90:	e1a0e00f 	mov	lr, pc
        232a94:	e590f000 	ldr	pc, [r0]
        232a98:	e1a00004 	mov	r0, r4
        232a9c:	e3a01000 	mov	r1, #0	; 0x0
        232aa0:	eb65523d 	bl	1b8739c <TXChars::$__dt(void)>
        232aa4:	e3150001 	tst	r5, #1	; 0x1
        232aa8:	11a00004 	movne	r0, r4
        232aac:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        232ab0:	1a666b0a 	bne	1bcd6e0 <$__dl(void *)>
        232ab4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        232ab8:	0001dda8 	andeq	sp, r1, r8, lsr #27
    */
}

/**
 * Symbol: TXChunkedChars::Count( const(void))
 * Address: 00232abc
 */
TXChunkedChars::Count( const(void)) {
    /*
        232abc:	e590000c 	ldr	r0, [r0, #12]	; fField12
        232ac0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXChunkedChars::UnlockChunk(long)
 * Address: 00232ac4
 */
TXChunkedChars::UnlockChunk(long) {
    /*
        232ac4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXChunkedChars::Preflight(long)
 * Address: 00232ac8
 */
TXChunkedChars::Preflight(long) {
    /*
        232ac8:	e3a00000 	mov	r0, #0	; 0x0
        232acc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXChunkedChars::Replace(long, long, TXTextDescriptor *)
 * Address: 00232ad0
 */
TXChunkedChars::Replace(long, long, TXTextDescriptor *) {
    /*
        232ad0:	e1a0c00d 	mov	ip, sp
        232ad4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        232ad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        232adc:	e1a04000 	mov	r4, r0
        232ae0:	e1a06001 	mov	r6, r1
        232ae4:	e1a07002 	mov	r7, r2
        232ae8:	e1a05003 	mov	r5, r3
        232aec:	e5938008 	ldr	r8, [r3, #8]	; fField8
        232af0:	e1580002 	cmp	r8, r2
        232af4:	c358000a 	cmpgt	r8, #10	; 0xa
        232af8:	da00000c 	ble	232b30 <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0x60>
        232afc:	e1a09004 	mov	r9, r4
        232b00:	e0481007 	sub	r1, r8, r7
        232b04:	e5940004 	ldr	r0, [r4, #4]	; fField4
        232b08:	e0811000 	add	r1, r1, r0
        232b0c:	e2411001 	sub	r1, r1, #1	; 0x1
        232b10:	eb65ff8a 	bl	1bb2940 <$__rt_sdiv>
        232b14:	e1a01000 	mov	r1, r0
        232b18:	e1a00009 	mov	r0, r9
        232b1c:	e5992000 	ldr	r2, [r9]
        232b20:	e1a0e00f 	mov	lr, pc
        232b24:	e282f030 	add	pc, r2, #48	; 0x30
        232b28:	e3300000 	teq	r0, #0	; 0x0
        232b2c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        232b30:	e3370000 	teq	r7, #0	; 0x0
        232b34:	0a000003 	beq	232b48 <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0x78>
        232b38:	e1a02007 	mov	r2, r7
        232b3c:	e1a01006 	mov	r1, r6
        232b40:	e1a00004 	mov	r0, r4
        232b44:	eb65521e 	bl	1b873c4 <TXChunkedChars::$Remove(long, long)>
        232b48:	e3a00000 	mov	r0, #0	; 0x0
        232b4c:	e3380000 	teq	r8, #0	; 0x0
        232b50:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        232b54:	e1a08000 	mov	r8, r0
        232b58:	e52d6008 	str	r6, [sp, -#8]!	; fField8
        232b5c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        232b60:	e5940008 	ldr	r0, [r4, #8]	; fField8
        232b64:	e89d0006 	ldmia	sp, {r1, r2}
        232b68:	eb654df0 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        232b6c:	e1b07000 	movs	r7, r0
        232b70:	4a000034 	bmi	232c48 <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0x178>
        232b74:	e1a01007 	mov	r1, r7
        232b78:	e5940008 	ldr	r0, [r4, #8]	; fField8
        232b7c:	eb654de4 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        232b80:	e0469000 	sub	r9, r6, r0
        232b84:	e1a03005 	mov	r3, r5
        232b88:	e1a02009 	mov	r2, r9
        232b8c:	e1a01007 	mov	r1, r7
        232b90:	e1a00004 	mov	r0, r4
        232b94:	eb655207 	bl	1b873b8 <TXChunkedChars::$InsertInChunk(long, long, TXTextDescriptor *)>
        232b98:	e3300000 	teq	r0, #0	; 0x0
        232b9c:	0a000001 	beq	232ba8 <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0xd8>
        232ba0:	e1a00008 	mov	r0, r8
        232ba4:	ea00002c 	b	232c5c <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0x18c>
        232ba8:	e3370000 	teq	r7, #0	; 0x0
        232bac:	0a000016 	beq	232c0c <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0x13c>
        232bb0:	e247a001 	sub	sl, r7, #1	; 0x1
        232bb4:	e3390000 	teq	r9, #0	; 0x0
        232bb8:	1a000009 	bne	232be4 <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0x114>
        232bbc:	e1a0100a 	mov	r1, sl
        232bc0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        232bc4:	eb654dd3 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        232bc8:	e1a02000 	mov	r2, r0
        232bcc:	e1a03005 	mov	r3, r5
        232bd0:	e1a0100a 	mov	r1, sl
        232bd4:	e1a00004 	mov	r0, r4
        232bd8:	eb6551f6 	bl	1b873b8 <TXChunkedChars::$InsertInChunk(long, long, TXTextDescriptor *)>
        232bdc:	e3300000 	teq	r0, #0	; 0x0
        232be0:	1affffee 	bne	232ba0 <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0xd0>
        232be4:	e1a03005 	mov	r3, r5
        232be8:	e92d0008 	stmdb	sp!, {r3}
        232bec:	e1a03009 	mov	r3, r9
        232bf0:	e1a0200a 	mov	r2, sl
        232bf4:	e1a01007 	mov	r1, r7
        232bf8:	e1a00004 	mov	r0, r4
        232bfc:	eb6551ee 	bl	1b873bc <TXChunkedChars::$InsertUsingNearChunk(long, long, long, TXTextDescriptor *)>
        232c00:	e28dd004 	add	sp, sp, #4	; 0x4
        232c04:	e3300000 	teq	r0, #0	; 0x0
        232c08:	1affffe4 	bne	232ba0 <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0xd0>
        232c0c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        232c10:	e5900004 	ldr	r0, [r0, #4]	; fField4
        232c14:	e2400001 	sub	r0, r0, #1	; 0x1
        232c18:	e1500007 	cmp	r0, r7
        232c1c:	da000009 	ble	232c48 <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0x178>
        232c20:	e1a03005 	mov	r3, r5
        232c24:	e92d0008 	stmdb	sp!, {r3}
        232c28:	e2872001 	add	r2, r7, #1	; 0x1
        232c2c:	e1a03009 	mov	r3, r9
        232c30:	e1a01007 	mov	r1, r7
        232c34:	e1a00004 	mov	r0, r4
        232c38:	eb6551df 	bl	1b873bc <TXChunkedChars::$InsertUsingNearChunk(long, long, long, TXTextDescriptor *)>
        232c3c:	e28dd004 	add	sp, sp, #4	; 0x4
        232c40:	e3300000 	teq	r0, #0	; 0x0
        232c44:	1affffd5 	bne	232ba0 <TXChunkedChars::Replace(long, long, TXTextDescriptor *)+0xd0>
        232c48:	e1a03005 	mov	r3, r5
        232c4c:	e1a02006 	mov	r2, r6
        232c50:	e1a01007 	mov	r1, r7
        232c54:	e1a00004 	mov	r0, r4
        232c58:	eb6551d8 	bl	1b873c0 <TXChunkedChars::$InsertUsingExtraChunks(long, long, TXTextDescriptor *)>
        232c5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXChunkedChars::InsertInChunk(long, long, TXTextDescriptor *)
 * Address: 00232c60
 */
TXChunkedChars::InsertInChunk(long, long, TXTextDescriptor *) {
    /*
        232c60:	e1a0c00d 	mov	ip, sp
        232c64:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        232c68:	e24cb004 	sub	fp, ip, #4	; 0x4
        232c6c:	e1a04000 	mov	r4, r0
        232c70:	e1a05001 	mov	r5, r1
        232c74:	e1a07002 	mov	r7, r2
        232c78:	e1a06003 	mov	r6, r3
        232c7c:	e5938008 	ldr	r8, [r3, #8]	; fField8
        232c80:	e5900008 	ldr	r0, [r0, #8]	; fField8
        232c84:	eb654da3 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        232c88:	e1570000 	cmp	r7, r0
        232c8c:	ca00001a 	bgt	232cfc <TXChunkedChars::InsertInChunk(long, long, TXTextDescriptor *)+0x9c>
        232c90:	e5941004 	ldr	r1, [r4, #4]	; fField4
        232c94:	e0410000 	sub	r0, r1, r0
        232c98:	e1500008 	cmp	r0, r8
        232c9c:	ba000016 	blt	232cfc <TXChunkedChars::InsertInChunk(long, long, TXTextDescriptor *)+0x9c>
        232ca0:	e1a03008 	mov	r3, r8
        232ca4:	e1a02006 	mov	r2, r6
        232ca8:	e92d000c 	stmdb	sp!, {r2, r3}
        232cac:	e1a02007 	mov	r2, r7
        232cb0:	e1a01005 	mov	r1, r5
        232cb4:	e1a00004 	mov	r0, r4
        232cb8:	e3a03000 	mov	r3, #0	; 0x0
        232cbc:	e594c000 	ldr	ip, [r4]
        232cc0:	e1a0e00f 	mov	lr, pc
        232cc4:	e28cf044 	add	pc, ip, #68	; 0x44
        232cc8:	e28dd008 	add	sp, sp, #8	; 0x8
        232ccc:	e3300000 	teq	r0, #0	; 0x0
        232cd0:	1a000009 	bne	232cfc <TXChunkedChars::InsertInChunk(long, long, TXTextDescriptor *)+0x9c>
        232cd4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        232cd8:	e0800008 	add	r0, r0, r8
        232cdc:	e2851001 	add	r1, r5, #1	; 0x1
        232ce0:	e584000c 	str	r0, [r4, #12]	; fField12
        232ce4:	e1a02008 	mov	r2, r8
        232ce8:	e3e03000 	mvn	r3, #0	; 0x0
        232cec:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        232cf0:	eb654d83 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        232cf4:	e3a00001 	mov	r0, #1	; 0x1
        232cf8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        232cfc:	e3a00000 	mov	r0, #0	; 0x0
        232d00:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

