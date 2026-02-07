#include "include/TXMultiFrameFormatter.h"

/**
 * Symbol: TXMultiFrameFormatter::__ct(void)
 * Address: 002415b0
 */
TXMultiFrameFormatter::TXMultiFrameFormatter(void) {
    /*
        2415b0:	e1a0c00d 	mov	ip, sp
        2415b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2415b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2415bc:	e1b04000 	movs	r4, r0
        2415c0:	1a000003 	bne	2415d4 <TXMultiFrameFormatter::__ct(void)+0x24>
        2415c4:	e3a00030 	mov	r0, #48	; 0x30
        2415c8:	eb66345a 	bl	1bce738 <$__nw(unsigned int)>
        2415cc:	e1b04000 	movs	r4, r0
        2415d0:	0a00000b 	beq	241604 <TXMultiFrameFormatter::__ct(void)+0x54>
        2415d4:	e1a00004 	mov	r0, r4
        2415d8:	eb653047 	bl	1b8d6fc <TXFrameFormatter::$__ct(void)>
        2415dc:	e59f0028 	ldr	r0, [pc, #28]	; 24160c <TXMultiFrameFormatter::__ct(void)+0x5c>	; fField28
        2415e0:	e3a02001 	mov	r2, #1	; 0x1
        2415e4:	e3a01008 	mov	r1, #8	; 0x8
        2415e8:	e5840000 	str	r0, [r4]
        2415ec:	e3a00000 	mov	r0, #0	; 0x0
        2415f0:	eb651344 	bl	1b86308 <TXRanges::$__ct(unsigned char, int)>
        2415f4:	e5840024 	str	r0, [r4, #36]	; fField36
        2415f8:	e3a00000 	mov	r0, #0	; 0x0
        2415fc:	e5840028 	str	r0, [r4, #40]	; fField40
        241600:	e5c4002c 	strb	r0, [r4, #44]	; fField44
        241604:	e1a00004 	mov	r0, r4
        241608:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        24160c:	0001f154 	andeq	pc, r1, r4, asr r1
    */
}

/**
 * Symbol: TXMultiFrameFormatter::__dt(void)
 * Address: 00241610
 */
TXMultiFrameFormatter::~TXMultiFrameFormatter(void) {
    /*
        241610:	e1a0c00d 	mov	ip, sp
        241614:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        241618:	e24cb004 	sub	fp, ip, #4	; 0x4
        24161c:	e1a04000 	mov	r4, r0
        241620:	e1a05001 	mov	r5, r1
        241624:	e59f0050 	ldr	r0, [pc, #50]	; 24167c <TXMultiFrameFormatter::__dt(void)+0x6c>
        241628:	e5840000 	str	r0, [r4]
        24162c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        241630:	e3300000 	teq	r0, #0	; 0x0
        241634:	0a000002 	beq	241644 <TXMultiFrameFormatter::__dt(void)+0x34>
        241638:	e3a01001 	mov	r1, #1	; 0x1
        24163c:	e1a0e00f 	mov	lr, pc
        241640:	e590f000 	ldr	pc, [r0]
        241644:	e5940028 	ldr	r0, [r4, #40]	; fField40
        241648:	e3300000 	teq	r0, #0	; 0x0
        24164c:	0a000002 	beq	24165c <TXMultiFrameFormatter::__dt(void)+0x4c>
        241650:	e3a01001 	mov	r1, #1	; 0x1
        241654:	e1a0e00f 	mov	lr, pc
        241658:	e590f000 	ldr	pc, [r0]
        24165c:	e1a00004 	mov	r0, r4
        241660:	e3a01000 	mov	r1, #0	; 0x0
        241664:	eb650f18 	bl	1b852cc <TXArray::$__dt(void)>
        241668:	e3150001 	tst	r5, #1	; 0x1
        24166c:	11a00004 	movne	r0, r4
        241670:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        241674:	1a663019 	bne	1bcd6e0 <$__dl(void *)>
        241678:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24167c:	0001f154 	andeq	pc, r1, r4, asr r1
    */
}

/**
 * Symbol: TXMultiFrameFormatter::FreeData(void)
 * Address: 00241680
 */
TXMultiFrameFormatter::FreeData(void) {
    /*
        241680:	e1a0c00d 	mov	ip, sp
        241684:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        241688:	e24cb004 	sub	fp, ip, #4	; 0x4
        24168c:	e1a04000 	mov	r4, r0
        241690:	eb653009 	bl	1b8d6bc <TXLinesHeights::$FreeData(void)>
        241694:	e3a01001 	mov	r1, #1	; 0x1
        241698:	e5940024 	ldr	r0, [r4, #36]	; fField36
        24169c:	e5902000 	ldr	r2, [r0]
        2416a0:	e1a0e00f 	mov	lr, pc
        2416a4:	e282f008 	add	pc, r2, #8	; 0x8
        2416a8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2416ac:	e3300000 	teq	r0, #0	; 0x0
        2416b0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2416b4:	e3a01001 	mov	r1, #1	; 0x1
        2416b8:	e1a0e00f 	mov	lr, pc
        2416bc:	e590f000 	ldr	pc, [r0]
        2416c0:	e3a00000 	mov	r0, #0	; 0x0
        2416c4:	e5a40028 	str	r0, [r4, #40]!	; fField40
        2416c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::Compact(void)
 * Address: 002416cc
 */
TXMultiFrameFormatter::Compact(void) {
    /*
        2416cc:	e1a0c00d 	mov	ip, sp
        2416d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2416d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2416d8:	e1a04000 	mov	r4, r0
        2416dc:	eb650f03 	bl	1b852f0 <TXArray::$Compact(void)>
        2416e0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2416e4:	eb650f01 	bl	1b852f0 <TXArray::$Compact(void)>
        2416e8:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        2416ec:	e3300000 	teq	r0, #0	; 0x0
        2416f0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2416f4:	1a650efd 	bne	1b852f0 <TXArray::$Compact(void)>
        2416f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::VariableSizeFrames( const(void))
 * Address: 002416fc
 */
TXMultiFrameFormatter::VariableSizeFrames( const(void)) {
    /*
        2416fc:	e3a00000 	mov	r0, #0	; 0x0
        241700:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMultiFrameFormatter::GetCountFrames( const(void))
 * Address: 00241704
 */
TXMultiFrameFormatter::GetCountFrames( const(void)) {
    /*
        241704:	e5900024 	ldr	r0, [r0, #36]	; fField36
        241708:	e5900004 	ldr	r0, [r0, #4]	; fField4
        24170c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMultiFrameFormatter::GetFrameLineRange( const(long, TXOffsetPair *))
 * Address: 00241710
 */
TXMultiFrameFormatter::GetFrameLineRange( const(long, TXOffsetPair *)) {
    /*
        241710:	e1a0c00d 	mov	ip, sp
        241714:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        241718:	e24cb004 	sub	fp, ip, #4	; 0x4
        24171c:	e1a05000 	mov	r5, r0
        241720:	e1a04001 	mov	r4, r1
        241724:	e1a06002 	mov	r6, r2
        241728:	e5901000 	ldr	r1, [r0]
        24172c:	e1a0e00f 	mov	lr, pc
        241730:	e281f02c 	add	pc, r1, #44	; 0x2c
        241734:	e1500004 	cmp	r0, r4
        241738:	d3a00000 	movle	r0, #0	; 0x0
        24173c:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        241740:	e1a01004 	mov	r1, r4
        241744:	e5950024 	ldr	r0, [r5, #36]	; fField36
        241748:	eb6512f1 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        24174c:	e5860000 	str	r0, [r6]
        241750:	e1a01004 	mov	r1, r4
        241754:	e5b50024 	ldr	r0, [r5, #36]!	; fField36
        241758:	eb6512ec 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        24175c:	e2400001 	sub	r0, r0, #1	; 0x1
        241760:	e5a60004 	str	r0, [r6, #4]!	; fField4
        241764:	e3a00001 	mov	r0, #1	; 0x1
        241768:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::LineToFrame( const(TXOffset))
 * Address: 0024176c
 */
TXMultiFrameFormatter::LineToFrame( const(TXOffset)) {
    /*
        24176c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        241770:	ea6512ee 	b	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
    */
}

/**
 * Symbol: TXMultiFrameFormatter::GetFrameTextHeight( const(long))
 * Address: 0024177c
 */
TXMultiFrameFormatter::GetFrameTextHeight( const(long)) {
    /*
        24177c:	e1a0c00d 	mov	ip, sp
        241780:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        241784:	e24cb004 	sub	fp, ip, #4	; 0x4
        241788:	e5900024 	ldr	r0, [r0, #36]	; fField36
        24178c:	eb650ecf 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241790:	e5900004 	ldr	r0, [r0, #4]	; fField4
        241794:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::MeasureFrame(long, long *, long *, TXOffsetPair *)
 * Address: 00241798
 */
TXMultiFrameFormatter::MeasureFrame(long, long *, long *, TXOffsetPair *) {
    /*
        241798:	e1a0c00d 	mov	ip, sp
        24179c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2417a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2417a4:	e1a04000 	mov	r4, r0
        2417a8:	e1a06001 	mov	r6, r1
        2417ac:	e1a07002 	mov	r7, r2
        2417b0:	e1a05003 	mov	r5, r3
        2417b4:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        2417b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2417bc:	e5902000 	ldr	r2, [r0]
        2417c0:	e1a0e00f 	mov	lr, pc
        2417c4:	e282f01c 	add	pc, r2, #28	; 0x1c
        2417c8:	e58d0000 	str	r0, [sp]
        2417cc:	e1a01006 	mov	r1, r6
        2417d0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2417d4:	eb6512ce 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        2417d8:	e1a08000 	mov	r8, r0
        2417dc:	e3a03000 	mov	r3, #0	; 0x0
        2417e0:	e92d0008 	stmdb	sp!, {r3}
        2417e4:	e1a02000 	mov	r2, r0
        2417e8:	e28d1004 	add	r1, sp, #4	; 0x4
        2417ec:	e1a00004 	mov	r0, r4
        2417f0:	eb652fb4 	bl	1b8d6c8 <$PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1>
        2417f4:	e28dd004 	add	sp, sp, #4	; 0x4
        2417f8:	e5850000 	str	r0, [r5]
        2417fc:	e1300008 	teq	r0, r8
        241800:	1a000008 	bne	241828 <TXMultiFrameFormatter::MeasureFrame(long, long *, long *, TXOffsetPair *)+0x90>
        241804:	e1a01006 	mov	r1, r6
        241808:	e1a00004 	mov	r0, r4
        24180c:	e5942000 	ldr	r2, [r4]
        241810:	e1a0e00f 	mov	lr, pc
        241814:	e282f01c 	add	pc, r2, #28	; 0x1c
        241818:	e58d0000 	str	r0, [sp]
        24181c:	e5950000 	ldr	r0, [r5]
        241820:	e2800001 	add	r0, r0, #1	; 0x1
        241824:	e5850000 	str	r0, [r5]
        241828:	e5940028 	ldr	r0, [r4, #40]	; fField40
        24182c:	e3300000 	teq	r0, #0	; 0x0
        241830:	0a000004 	beq	241848 <TXMultiFrameFormatter::MeasureFrame(long, long *, long *, TXOffsetPair *)+0xb0>
        241834:	e1a0300d 	mov	r3, sp
        241838:	e1a02005 	mov	r2, r5
        24183c:	e1a01008 	mov	r1, r8
        241840:	e1a00004 	mov	r0, r4
        241844:	eb6550ac 	bl	1b95afc <TXMultiFrameFormatter::$CheckFrameBreaks(long, long *, long *)>
        241848:	e1a01006 	mov	r1, r6
        24184c:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        241850:	eb650e9e 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241854:	e5902004 	ldr	r2, [r0, #4]	; fField4
        241858:	e59d1000 	ldr	r1, [sp]
        24185c:	e0521001 	subs	r1, r2, r1
        241860:	e5871000 	str	r1, [r7]
        241864:	03a00000 	moveq	r0, #0	; 0x0
        241868:	0a000009 	beq	241894 <TXMultiFrameFormatter::MeasureFrame(long, long *, long *, TXOffsetPair *)+0xfc>
        24186c:	e5952000 	ldr	r2, [r5]
        241870:	e5901000 	ldr	r1, [r0]
        241874:	e1520001 	cmp	r2, r1
        241878:	d5892000 	strle	r2, [r9]
        24187c:	d5900000 	ldrle	r0, [r0]
        241880:	c5891000 	strgt	r1, [r9]
        241884:	c5950000 	ldrgt	r0, [r5]
        241888:	e2400001 	sub	r0, r0, #1	; 0x1
        24188c:	e5a90004 	str	r0, [r9, #4]!	; fField4
        241890:	e3a00001 	mov	r0, #1	; 0x1
        241894:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::BreakFrame(long, long *, TXOffsetPair *, TXFormatReflowLines *)
 * Address: 00241898
 */
TXMultiFrameFormatter::BreakFrame(long, long *, TXOffsetPair *, TXFormatReflowLines *) {
    /*
        241898:	e1a0c00d 	mov	ip, sp
        24189c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2418a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2418a4:	e1a06000 	mov	r6, r0
        2418a8:	e1a05001 	mov	r5, r1
        2418ac:	e1a04002 	mov	r4, r2
        2418b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2418b4:	e92d0008 	stmdb	sp!, {r3}
        2418b8:	e28d3004 	add	r3, sp, #4	; 0x4
        2418bc:	e590c000 	ldr	ip, [r0]
        2418c0:	e1a0e00f 	mov	lr, pc
        2418c4:	e28cf05c 	add	pc, ip, #92	; 0x5c
        2418c8:	e28dd004 	add	sp, sp, #4	; 0x4
        2418cc:	e3300000 	teq	r0, #0	; 0x0
        2418d0:	0a000009 	beq	2418fc <TXMultiFrameFormatter::BreakFrame(long, long *, TXOffsetPair *, TXFormatReflowLines *)+0x64>
        2418d4:	e1a01005 	mov	r1, r5
        2418d8:	e5b60024 	ldr	r0, [r6, #36]!	; fField36
        2418dc:	eb650e7b 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2418e0:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2418e4:	e5942000 	ldr	r2, [r4]
        2418e8:	e0411002 	sub	r1, r1, r2
        2418ec:	e5801004 	str	r1, [r0, #4]	; fField4
        2418f0:	e59d1000 	ldr	r1, [sp]
        2418f4:	e5801000 	str	r1, [r0]
        2418f8:	e3a00001 	mov	r0, #1	; 0x1
        2418fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)
 * Address: 00241900
 */
TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *) {
    /*
        241900:	e1a0c00d 	mov	ip, sp
        241904:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        241908:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        24190c:	e24cb014 	sub	fp, ip, #20	; 0x14
        241910:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        241914:	e20030ff 	and	r3, r0, #255	; 0xff
        241918:	e3a09000 	mov	r9, #0	; 0x0
        24191c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        241920:	e5c0902c 	strb	r9, [r0, #44]	; fField44
        241924:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        241928:	e5900024 	ldr	r0, [r0, #36]	; fField36
        24192c:	e5908004 	ldr	r8, [r0, #4]	; fField4
        241930:	e3380000 	teq	r8, #0	; 0x0
        241934:	0a000006 	beq	241954 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x54>
        241938:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        24193c:	e1510008 	cmp	r1, r8
        241940:	aa000003 	bge	241954 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x54>
        241944:	e59b200c 	ldr	r2, [fp, #12]
        241948:	e5d22008 	ldrb	r2, [r2, #8]	; fField8
        24194c:	e3320000 	teq	r2, #0	; 0x0
        241950:	1a000001 	bne	24195c <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x5c>
        241954:	e1a00009 	mov	r0, r9
        241958:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        24195c:	e3330000 	teq	r3, #0	; 0x0
        241960:	0a000002 	beq	241970 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x70>
        241964:	e2411001 	sub	r1, r1, #1	; 0x1
        241968:	e3510000 	cmp	r1, #0	; 0x0
        24196c:	d1a01009 	movle	r1, r9
        241970:	e1a05001 	mov	r5, r1
        241974:	e3a01000 	mov	r1, #0	; 0x0
        241978:	ebffbc58 	bl	230ae0 <TXArray::Lock(unsigned char)>
        24197c:	e24dd008 	sub	sp, sp, #8	; 0x8
        241980:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        241984:	e5900024 	ldr	r0, [r0, #36]	; fField36
        241988:	e1a01005 	mov	r1, r5
        24198c:	eb650e4f 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241990:	e1a07000 	mov	r7, r0
        241994:	e59b0018 	ldr	r0, [fp, #24]
        241998:	e3300000 	teq	r0, #0	; 0x0
        24199c:	18905000 	ldmneia	r0, {ip, lr}
        2419a0:	188d5000 	stmneia	sp, {ip, lr}
        2419a4:	e59fa080 	ldr	sl, [pc, #80]	; 241a2c <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x12c>
        2419a8:	e3a04001 	mov	r4, #1	; 0x1
        2419ac:	e2844c01 	add	r4, r4, #256	; 0x100
        2419b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2419b4:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        2419b8:	e3300000 	teq	r0, #0	; 0x0
        2419bc:	1a00000a 	bne	2419ec <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0xec>
        2419c0:	e59b300c 	ldr	r3, [fp, #12]
        2419c4:	e59bc004 	ldr	ip, [fp, #4]	; fField4
        2419c8:	e92d0008 	stmdb	sp!, {r3}
        2419cc:	e28d3008 	add	r3, sp, #8	; 0x8
        2419d0:	e28b2014 	add	r2, fp, #20	; 0x14
        2419d4:	e1a01005 	mov	r1, r5
        2419d8:	e1a0000c 	mov	r0, ip
        2419dc:	e59cc000 	ldr	ip, [ip]
        2419e0:	e1a0e00f 	mov	lr, pc
        2419e4:	e28cf060 	add	pc, ip, #96	; 0x60
        2419e8:	e28dd004 	add	sp, sp, #4	; 0x4
        2419ec:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        2419f0:	e3300000 	teq	r0, #0	; 0x0
        2419f4:	0a00000d 	beq	241a30 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x130>
        2419f8:	e1a0200d 	mov	r2, sp
        2419fc:	e1a01005 	mov	r1, r5
        241a00:	e1a0000a 	mov	r0, sl
        241a04:	e1a03004 	mov	r3, r4
        241a08:	eb653351 	bl	1b8e754 <TXFramesEditInfo::$GetEditInfoPtr( const(long, TXFrameEditInfo **, int))>
        241a0c:	e3300000 	teq	r0, #0	; 0x0
        241a10:	0a000006 	beq	241a30 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x130>
        241a14:	e59b6014 	ldr	r6, [fp, #20]	; fField20
        241a18:	e59d0000 	ldr	r0, [sp]
        241a1c:	e5901014 	ldr	r1, [r0, #20]	; fField20
        241a20:	e0811006 	add	r1, r1, r6
        241a24:	e5a01014 	str	r1, [r0, #20]!	; fField20
        241a28:	ea000001 	b	241a34 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x134>
        241a2c:	0c104d98 	ldceq	13, cr4, [r0], -#608
        241a30:	e3a06000 	mov	r6, #0	; 0x0
        241a34:	e2855001 	add	r5, r5, #1	; 0x1
        241a38:	e1350008 	teq	r5, r8
        241a3c:	0a000017 	beq	241aa0 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x1a0>
        241a40:	e2877008 	add	r7, r7, #8	; 0x8
        241a44:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        241a48:	e3500000 	cmp	r0, #0	; 0x0
        241a4c:	1a000004 	bne	241a64 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x164>
        241a50:	e59b0008 	ldr	r0, [fp, #8]	; fField8
        241a54:	e1550000 	cmp	r5, r0
        241a58:	ca000010 	bgt	241aa0 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x1a0>
        241a5c:	e28dd004 	add	sp, sp, #4	; 0x4
        241a60:	eaffffd2 	b	2419b0 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0xb0>
        241a64:	aa00001f 	bge	241ae8 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x1e8>
        241a68:	e2600000 	rsb	r0, r0, #0	; 0x0
        241a6c:	e5971004 	ldr	r1, [r7, #4]	; fField4
        241a70:	e1510000 	cmp	r1, r0
        241a74:	ca00001b 	bgt	241ae8 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x1e8>
        241a78:	e3a06000 	mov	r6, #0	; 0x0
        241a7c:	e28d3004 	add	r3, sp, #4	; 0x4
        241a80:	e58b0014 	str	r0, [fp, #20]	; fField20
        241a84:	e28b2014 	add	r2, fp, #20	; 0x14
        241a88:	e1a01005 	mov	r1, r5
        241a8c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        241a90:	eb655017 	bl	1b95af4 <TXMultiFrameFormatter::$RemoveFormattedFrames(long, long *, TXOffsetPair *)>
        241a94:	e0488000 	sub	r8, r8, r0
        241a98:	e1350008 	teq	r5, r8
        241a9c:	1a00000e 	bne	241adc <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x1dc>
        241aa0:	e28dd004 	add	sp, sp, #4	; 0x4
        241aa4:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        241aa8:	e5900024 	ldr	r0, [r0, #36]	; fField36
        241aac:	ebffbcab 	bl	230d60 <TXArray::Unlock(void)>
        241ab0:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        241ab4:	e3310000 	teq	r1, #0	; 0x0
        241ab8:	0a000005 	beq	241ad4 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x1d4>
        241abc:	e59b3004 	ldr	r3, [fp, #4]	; fField4
        241ac0:	e1a00003 	mov	r0, r3
        241ac4:	e3e02000 	mvn	r2, #0	; 0x0
        241ac8:	e5933000 	ldr	r3, [r3]
        241acc:	e1a0e00f 	mov	lr, pc
        241ad0:	e283f064 	add	pc, r3, #100	; 0x64
        241ad4:	e1a00009 	mov	r0, r9
        241ad8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        241adc:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        241ae0:	e2600000 	rsb	r0, r0, #0	; 0x0
        241ae4:	e58b0014 	str	r0, [fp, #20]	; fField20
        241ae8:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        241aec:	e3300000 	teq	r0, #0	; 0x0
        241af0:	0a00000c 	beq	241b28 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x228>
        241af4:	e1a0200d 	mov	r2, sp
        241af8:	e1a01005 	mov	r1, r5
        241afc:	e1a0000a 	mov	r0, sl
        241b00:	e1a03004 	mov	r3, r4
        241b04:	eb653312 	bl	1b8e754 <TXFramesEditInfo::$GetEditInfoPtr( const(long, TXFrameEditInfo **, int))>
        241b08:	e3300000 	teq	r0, #0	; 0x0
        241b0c:	0a000005 	beq	241b28 <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x228>
        241b10:	e3360000 	teq	r6, #0	; 0x0
        241b14:	059b6014 	ldreq	r6, [fp, #20]	; fField20
        241b18:	e59d0000 	ldr	r0, [sp]
        241b1c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        241b20:	e0811006 	add	r1, r1, r6
        241b24:	e5a01010 	str	r1, [r0, #16]!	; fField16
        241b28:	e5970004 	ldr	r0, [r7, #4]	; fField4
        241b2c:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        241b30:	e0800001 	add	r0, r0, r1
        241b34:	e5870004 	str	r0, [r7, #4]	; fField4
        241b38:	e3a00000 	mov	r0, #0	; 0x0
        241b3c:	e58b0014 	str	r0, [fp, #20]	; fField20
        241b40:	eaffffc5 	b	241a5c <TXMultiFrameFormatter::CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)+0x15c>
    */
}

/**
 * Symbol: TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)
 * Address: 00241b44
 */
TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long) {
    /*
        241b44:	e1a0c00d 	mov	ip, sp
        241b48:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        241b4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        241b50:	e1a04000 	mov	r4, r0
        241b54:	e1a06001 	mov	r6, r1
        241b58:	e1a07002 	mov	r7, r2
        241b5c:	e1a05003 	mov	r5, r3
        241b60:	eb652edf 	bl	1b8d6e4 <TXLinesHeights::$InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)>
        241b64:	e3300000 	teq	r0, #0	; 0x0
        241b68:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        241b6c:	e24dd008 	sub	sp, sp, #8	; 0x8
        241b70:	e3550000 	cmp	r5, #0	; 0x0
        241b74:	b5940024 	ldrlt	r0, [r4, #36]	; fField36
        241b78:	b5900004 	ldrlt	r0, [r0, #4]	; fField4
        241b7c:	b2408001 	sublt	r8, r0, #1	; 0x1
        241b80:	ba000008 	blt	241ba8 <TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)+0x64>
        241b84:	e3a00001 	mov	r0, #1	; 0x1
        241b88:	e58d5000 	str	r5, [sp]
        241b8c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        241b90:	e1a00004 	mov	r0, r4
        241b94:	e89d0006 	ldmia	sp, {r1, r2}
        241b98:	e5943000 	ldr	r3, [r4]
        241b9c:	e1a0e00f 	mov	lr, pc
        241ba0:	e283f034 	add	pc, r3, #52	; 0x34
        241ba4:	e1a08000 	mov	r8, r0
        241ba8:	e3580000 	cmp	r8, #0	; 0x0
        241bac:	aa000006 	bge	241bcc <TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)+0x88>
        241bb0:	e1a00004 	mov	r0, r4
        241bb4:	e3a02001 	mov	r2, #1	; 0x1
        241bb8:	e5961000 	ldr	r1, [r6]
        241bbc:	e5943000 	ldr	r3, [r4]
        241bc0:	e1a0e00f 	mov	lr, pc
        241bc4:	e283f064 	add	pc, r3, #100	; 0x64
        241bc8:	ea00003c 	b	241cc0 <TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)+0x17c>
        241bcc:	e24dd004 	sub	sp, sp, #4	; 0x4
        241bd0:	e59f00dc 	ldr	r0, [pc, #dc]	; 241cb4 <TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)+0x170>
        241bd4:	e5900000 	ldr	r0, [r0]
        241bd8:	e3300000 	teq	r0, #0	; 0x0
        241bdc:	0a000012 	beq	241c2c <TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)+0xe8>
        241be0:	e1a0200d 	mov	r2, sp
        241be4:	e1a01008 	mov	r1, r8
        241be8:	e59f00c4 	ldr	r0, [pc, #c4]	; 241cb4 <TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)+0x170>
        241bec:	e3a03001 	mov	r3, #1	; 0x1
        241bf0:	e2833c01 	add	r3, r3, #256	; 0x100
        241bf4:	eb6532d6 	bl	1b8e754 <TXFramesEditInfo::$GetEditInfoPtr( const(long, TXFrameEditInfo **, int))>
        241bf8:	e3300000 	teq	r0, #0	; 0x0
        241bfc:	0a00000a 	beq	241c2c <TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)+0xe8>
        241c00:	e24dd008 	sub	sp, sp, #8	; 0x8
        241c04:	e1a0200d 	mov	r2, sp
        241c08:	e1a01005 	mov	r1, r5
        241c0c:	e1a00004 	mov	r0, r4
        241c10:	eb652eae 	bl	1b8d6d0 <TXLinesHeights::$GetLineHeightInfo( const(long, TXLineHeightInfo *))>
        241c14:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        241c18:	e590200c 	ldr	r2, [r0, #12]
        241c1c:	e59d1000 	ldr	r1, [sp]
        241c20:	e0821001 	add	r1, r2, r1
        241c24:	e5a0100c 	str	r1, [r0, #12]!
        241c28:	e28dd008 	add	sp, sp, #8	; 0x8
        241c2c:	e1a01008 	mov	r1, r8
        241c30:	e3e03000 	mvn	r3, #0	; 0x0
        241c34:	e3a02001 	mov	r2, #1	; 0x1
        241c38:	e5940024 	ldr	r0, [r4, #36]	; fField36
        241c3c:	eb6511b0 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        241c40:	e1a01008 	mov	r1, r8
        241c44:	e5940024 	ldr	r0, [r4, #36]	; fField36
        241c48:	eb650da0 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241c4c:	e1a05000 	mov	r5, r0
        241c50:	e5900004 	ldr	r0, [r0, #4]	; fField4
        241c54:	e5961000 	ldr	r1, [r6]
        241c58:	e0800001 	add	r0, r0, r1
        241c5c:	e5850004 	str	r0, [r5, #4]	; fField4
        241c60:	e5d4002c 	ldrb	r0, [r4, #44]	; fField44
        241c64:	e3300000 	teq	r0, #0	; 0x0
        241c68:	05940028 	ldreq	r0, [r4, #40]	; fField40
        241c6c:	03300000 	teqeq	r0, #0	; 0x0
        241c70:	1a000007 	bne	241c94 <TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)+0x150>
        241c74:	e1a01008 	mov	r1, r8
        241c78:	e1a00004 	mov	r0, r4
        241c7c:	e5942000 	ldr	r2, [r4]
        241c80:	e1a0e00f 	mov	lr, pc
        241c84:	e282f01c 	add	pc, r2, #28	; 0x1c
        241c88:	e5b51004 	ldr	r1, [r5, #4]!	; fField4
        241c8c:	e1500001 	cmp	r0, r1
        241c90:	aa000008 	bge	241cb8 <TXMultiFrameFormatter::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)+0x174>
        241c94:	e3a03000 	mov	r3, #0	; 0x0
        241c98:	e3a02000 	mov	r2, #0	; 0x0
        241c9c:	e92d000c 	stmdb	sp!, {r2, r3}
        241ca0:	e1a02007 	mov	r2, r7
        241ca4:	e1a01008 	mov	r1, r8
        241ca8:	e1a00004 	mov	r0, r4
        241cac:	eb654f88 	bl	1b95ad4 <TXMultiFrameFormatter::$CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)>
        241cb0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        241cb4:	0c104d98 	ldceq	13, cr4, [r0], -#608
        241cb8:	e28dd004 	add	sp, sp, #4	; 0x4
        241cbc:	e3a00000 	mov	r0, #0	; 0x0
        241cc0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)
 * Address: 00241cc4
 */
TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *) {
    /*
        241cc4:	e1a0c00d 	mov	ip, sp
        241cc8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        241ccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        241cd0:	e1a04000 	mov	r4, r0
        241cd4:	e1a07001 	mov	r7, r1
        241cd8:	e1a08002 	mov	r8, r2
        241cdc:	e1a05003 	mov	r5, r3
        241ce0:	e24dd008 	sub	sp, sp, #8	; 0x8
        241ce4:	e1a0200d 	mov	r2, sp
        241ce8:	e1a01008 	mov	r1, r8
        241cec:	eb652e77 	bl	1b8d6d0 <TXLinesHeights::$GetLineHeightInfo( const(long, TXLineHeightInfo *))>
        241cf0:	e59d1000 	ldr	r1, [sp]
        241cf4:	e3a06000 	mov	r6, #0	; 0x0
        241cf8:	e5970000 	ldr	r0, [r7]
        241cfc:	e1310000 	teq	r1, r0
        241d00:	059d1004 	ldreq	r1, [sp, #4]	; fField4
        241d04:	05970004 	ldreq	r0, [r7, #4]	; fField4
        241d08:	01310000 	teqeq	r1, r0
        241d0c:	e24dd008 	sub	sp, sp, #8	; 0x8
        241d10:	1a00001b 	bne	241d84 <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0xc0>
        241d14:	e5d4002c 	ldrb	r0, [r4, #44]	; fField44
        241d18:	e3300000 	teq	r0, #0	; 0x0
        241d1c:	05940028 	ldreq	r0, [r4, #40]	; fField40
        241d20:	03300000 	teqeq	r0, #0	; 0x0
        241d24:	1a000005 	bne	241d40 <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x7c>
        241d28:	e1a00004 	mov	r0, r4
        241d2c:	e5941000 	ldr	r1, [r4]
        241d30:	e1a0e00f 	mov	lr, pc
        241d34:	e281f058 	add	pc, r1, #88	; 0x58
        241d38:	e3300000 	teq	r0, #0	; 0x0
        241d3c:	0a00000e 	beq	241d7c <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0xb8>
        241d40:	e3a03000 	mov	r3, #0	; 0x0
        241d44:	e3a02000 	mov	r2, #0	; 0x0
        241d48:	e92d000c 	stmdb	sp!, {r2, r3}
        241d4c:	e58d8008 	str	r8, [sp, #8]	; fField8
        241d50:	e5cd600c 	strb	r6, [sp, #12]
        241d54:	e5940024 	ldr	r0, [r4, #36]	; fField36
        241d58:	e28d2008 	add	r2, sp, #8	; 0x8
        241d5c:	e8920006 	ldmia	r2, {r1, r2}
        241d60:	eb651172 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        241d64:	e1a01000 	mov	r1, r0
        241d68:	e1a02005 	mov	r2, r5
        241d6c:	e1a00004 	mov	r0, r4
        241d70:	e3a03001 	mov	r3, #1	; 0x1
        241d74:	eb654f56 	bl	1b95ad4 <TXMultiFrameFormatter::$CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)>
        241d78:	e28dd008 	add	sp, sp, #8	; 0x8
        241d7c:	e1a00006 	mov	r0, r6
        241d80:	ea00000b 	b	241db4 <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0xf0>
        241d84:	e58d8000 	str	r8, [sp]
        241d88:	e5cd6004 	strb	r6, [sp, #4]	; fField4
        241d8c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        241d90:	e89d0006 	ldmia	sp, {r1, r2}
        241d94:	eb651165 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        241d98:	e1b06000 	movs	r6, r0
        241d9c:	5a000005 	bpl	241db8 <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0xf4>
        241da0:	e1a03005 	mov	r3, r5
        241da4:	e1a02008 	mov	r2, r8
        241da8:	e1a01007 	mov	r1, r7
        241dac:	e1a00004 	mov	r0, r4
        241db0:	eb652e4a 	bl	1b8d6e0 <TXLinesHeights::$SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)>
        241db4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        241db8:	e24dd004 	sub	sp, sp, #4	; 0x4
        241dbc:	e59f0024 	ldr	r0, [pc, #24]	; 241de8 <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x124>
        241dc0:	e5900000 	ldr	r0, [r0]
        241dc4:	e3300000 	teq	r0, #0	; 0x0
        241dc8:	0a000007 	beq	241dec <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x128>
        241dcc:	e1a0200d 	mov	r2, sp
        241dd0:	e1a01006 	mov	r1, r6
        241dd4:	e59f000c 	ldr	r0, [pc, #c]	; 241de8 <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x124>
        241dd8:	e3a03001 	mov	r3, #1	; 0x1
        241ddc:	e2833c01 	add	r3, r3, #256	; 0x100
        241de0:	eb65325b 	bl	1b8e754 <TXFramesEditInfo::$GetEditInfoPtr( const(long, TXFrameEditInfo **, int))>
        241de4:	ea000002 	b	241df4 <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x130>
        241de8:	0c104d98 	ldceq	13, cr4, [r0], -#608
        241dec:	e3a00000 	mov	r0, #0	; 0x0
        241df0:	e58d0000 	str	r0, [sp]
        241df4:	e1a03005 	mov	r3, r5
        241df8:	e1a02008 	mov	r2, r8
        241dfc:	e1a01007 	mov	r1, r7
        241e00:	e1a00004 	mov	r0, r4
        241e04:	eb652e35 	bl	1b8d6e0 <TXLinesHeights::$SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)>
        241e08:	e1b08000 	movs	r8, r0
        241e0c:	1a000029 	bne	241eb8 <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x1f4>
        241e10:	e5971000 	ldr	r1, [r7]
        241e14:	e59d000c 	ldr	r0, [sp, #12]
        241e18:	e0417000 	sub	r7, r1, r0
        241e1c:	e59d0000 	ldr	r0, [sp]
        241e20:	e3300000 	teq	r0, #0	; 0x0
        241e24:	1590100c 	ldrne	r1, [r0, #12]
        241e28:	10811007 	addne	r1, r1, r7
        241e2c:	15a0100c 	strne	r1, [r0, #12]!
        241e30:	e1a01006 	mov	r1, r6
        241e34:	e5940024 	ldr	r0, [r4, #36]	; fField36
        241e38:	eb650d24 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241e3c:	e1a09000 	mov	r9, r0
        241e40:	e5900004 	ldr	r0, [r0, #4]	; fField4
        241e44:	e0800007 	add	r0, r0, r7
        241e48:	e3570000 	cmp	r7, #0	; 0x0
        241e4c:	e5890004 	str	r0, [r9, #4]	; fField4
        241e50:	a3a00000 	movge	r0, #0	; 0x0
        241e54:	b3a00001 	movlt	r0, #1	; 0x1
        241e58:	e21070ff 	ands	r7, r0, #255	; 0xff
        241e5c:	05d4002c 	ldreqb	r0, [r4, #44]	; fField44
        241e60:	03300000 	teqeq	r0, #0	; 0x0
        241e64:	05940028 	ldreq	r0, [r4, #40]	; fField40
        241e68:	03300000 	teqeq	r0, #0	; 0x0
        241e6c:	1a000007 	bne	241e90 <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x1cc>
        241e70:	e1a01006 	mov	r1, r6
        241e74:	e1a00004 	mov	r0, r4
        241e78:	e5942000 	ldr	r2, [r4]
        241e7c:	e1a0e00f 	mov	lr, pc
        241e80:	e282f01c 	add	pc, r2, #28	; 0x1c
        241e84:	e5b91004 	ldr	r1, [r9, #4]!	; fField4
        241e88:	e1500001 	cmp	r0, r1
        241e8c:	aa000009 	bge	241eb8 <TXMultiFrameFormatter::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x1f4>
        241e90:	e3a03000 	mov	r3, #0	; 0x0
        241e94:	e3a02000 	mov	r2, #0	; 0x0
        241e98:	e92d000c 	stmdb	sp!, {r2, r3}
        241e9c:	e1a03007 	mov	r3, r7
        241ea0:	e1a02005 	mov	r2, r5
        241ea4:	e1a01006 	mov	r1, r6
        241ea8:	e1a00004 	mov	r0, r4
        241eac:	eb654f08 	bl	1b95ad4 <TXMultiFrameFormatter::$CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)>
        241eb0:	e28dd008 	add	sp, sp, #8	; 0x8
        241eb4:	e1a08000 	mov	r8, r0
        241eb8:	e1a00008 	mov	r0, r8
        241ebc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)
 * Address: 00241ec0
 */
TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *) {
    /*
        241ec0:	e1a0c00d 	mov	ip, sp
        241ec4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        241ec8:	e24cb004 	sub	fp, ip, #4	; 0x4
        241ecc:	e1a04000 	mov	r4, r0
        241ed0:	e1a05001 	mov	r5, r1
        241ed4:	e1a07002 	mov	r7, r2
        241ed8:	e1a06003 	mov	r6, r3
        241edc:	e24dd020 	sub	sp, sp, #32	; 0x20
        241ee0:	e5900024 	ldr	r0, [r0, #36]	; fField36
        241ee4:	e1a0300d 	mov	r3, sp
        241ee8:	e1a02001 	mov	r2, r1
        241eec:	e1a01007 	mov	r1, r7
        241ef0:	eb65110f 	bl	1b86334 <$SectRanges__8TXRangesCFlT1P12TXSectRanges>
        241ef4:	e3300000 	teq	r0, #0	; 0x0
        241ef8:	1a000005 	bne	241f14 <TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)+0x54>
        241efc:	e1a03006 	mov	r3, r6
        241f00:	e1a02007 	mov	r2, r7
        241f04:	e1a01005 	mov	r1, r5
        241f08:	e1a00004 	mov	r0, r4
        241f0c:	eb652df6 	bl	1b8d6ec <TXLinesHeights::$RemoveLines(long, long, TXFormatReflowLines *)>
        241f10:	ea00004e 	b	242050 <TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)+0x190>
        241f14:	e59d1018 	ldr	r1, [sp, #24]
        241f18:	e3310000 	teq	r1, #0	; 0x0
        241f1c:	0a00000e 	beq	241f5c <TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)+0x9c>
        241f20:	e3500001 	cmp	r0, #1	; 0x1
        241f24:	ca000002 	bgt	241f34 <TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)+0x74>
        241f28:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        241f2c:	e3300000 	teq	r0, #0	; 0x0
        241f30:	1a000009 	bne	241f5c <TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)+0x9c>
        241f34:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        241f38:	e5940024 	ldr	r0, [r4, #36]	; fField36
        241f3c:	eb6510f4 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        241f40:	e1a02000 	mov	r2, r0
        241f44:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        241f48:	e0800002 	add	r0, r0, r2
        241f4c:	e2403001 	sub	r3, r0, #1	; 0x1
        241f50:	e1a00004 	mov	r0, r4
        241f54:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        241f58:	eb654ee2 	bl	1b95ae8 <TXMultiFrameFormatter::$RemoveFrameLines(long, long, long)>
        241f5c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        241f60:	e3300000 	teq	r0, #0	; 0x0
        241f64:	0a000013 	beq	241fb8 <TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)+0xf8>
        241f68:	e5940024 	ldr	r0, [r4, #36]	; fField36
        241f6c:	e59d1000 	ldr	r1, [sp]
        241f70:	eb6510e7 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        241f74:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        241f78:	e0808001 	add	r8, r0, r1
        241f7c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        241f80:	e0800008 	add	r0, r0, r8
        241f84:	e2403001 	sub	r3, r0, #1	; 0x1
        241f88:	e1a02008 	mov	r2, r8
        241f8c:	e1a00004 	mov	r0, r4
        241f90:	e59d1000 	ldr	r1, [sp]
        241f94:	eb654ed3 	bl	1b95ae8 <TXMultiFrameFormatter::$RemoveFrameLines(long, long, long)>
        241f98:	e59d0000 	ldr	r0, [sp]
        241f9c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        241fa0:	e1310000 	teq	r1, r0
        241fa4:	0a000003 	beq	241fb8 <TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)+0xf8>
        241fa8:	e1a02008 	mov	r2, r8
        241fac:	e5940024 	ldr	r0, [r4, #36]	; fField36
        241fb0:	e59d1000 	ldr	r1, [sp]
        241fb4:	eb6510d9 	bl	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        241fb8:	e59d0018 	ldr	r0, [sp, #24]
        241fbc:	e3300000 	teq	r0, #0	; 0x0
        241fc0:	1a000005 	bne	241fdc <TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)+0x11c>
        241fc4:	e59d0000 	ldr	r0, [sp]
        241fc8:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        241fcc:	e1310000 	teq	r1, r0
        241fd0:	159d0014 	ldrne	r0, [sp, #20]	; fField20
        241fd4:	12800001 	addne	r0, r0, #1	; 0x1
        241fd8:	158d0014 	strne	r0, [sp, #20]	; fField20
        241fdc:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        241fe0:	e2652000 	rsb	r2, r5, #0	; 0x0
        241fe4:	e3e03000 	mvn	r3, #0	; 0x0
        241fe8:	e5940024 	ldr	r0, [r4, #36]	; fField36
        241fec:	eb6510c4 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        241ff0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        241ff4:	e3300000 	teq	r0, #0	; 0x0
        241ff8:	0a000003 	beq	24200c <TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)+0x14c>
        241ffc:	e1a00004 	mov	r0, r4
        242000:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        242004:	e59d200c 	ldr	r2, [sp, #12]
        242008:	eb654eb5 	bl	1b95ae4 <TXMultiFrameFormatter::$RemoveFrames(long, long)>
        24200c:	e1a03006 	mov	r3, r6
        242010:	e1a02007 	mov	r2, r7
        242014:	e1a01005 	mov	r1, r5
        242018:	e1a00004 	mov	r0, r4
        24201c:	eb652db2 	bl	1b8d6ec <TXLinesHeights::$RemoveLines(long, long, TXFormatReflowLines *)>
        242020:	e594001c 	ldr	r0, [r4, #28]	; fField28
        242024:	e2900001 	adds	r0, r0, #1	; 0x1
        242028:	0a000008 	beq	242050 <TXMultiFrameFormatter::RemoveLines(long, long, TXFormatReflowLines *)+0x190>
        24202c:	e3a03000 	mov	r3, #0	; 0x0
        242030:	e3a02000 	mov	r2, #0	; 0x0
        242034:	e92d000c 	stmdb	sp!, {r2, r3}
        242038:	e1a02006 	mov	r2, r6
        24203c:	e1a00004 	mov	r0, r4
        242040:	e3a03001 	mov	r3, #1	; 0x1
        242044:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        242048:	eb654ea1 	bl	1b95ad4 <TXMultiFrameFormatter::$CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)>
        24204c:	e28dd008 	add	sp, sp, #8	; 0x8
        242050:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::RemoveFrames(long, long)
 * Address: 00242054
 */
TXMultiFrameFormatter::RemoveFrames(long, long) {
    /*
        242054:	e1a0c00d 	mov	ip, sp
        242058:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24205c:	e24cb004 	sub	fp, ip, #4	; 0x4
        242060:	e1a04002 	mov	r4, r2
        242064:	e1a02001 	mov	r2, r1
        242068:	e1a01004 	mov	r1, r4
        24206c:	e5b03024 	ldr	r3, [r0, #36]!	; fField36
        242070:	e1a00003 	mov	r0, r3
        242074:	e5933000 	ldr	r3, [r3]
        242078:	e1a0e00f 	mov	lr, pc
        24207c:	e283f004 	add	pc, r3, #4	; 0x4
        242080:	e1a02004 	mov	r2, r4
        242084:	e59f0010 	ldr	r0, [pc, #10]	; 24209c <TXMultiFrameFormatter::RemoveFrames(long, long)+0x48>
        242088:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        24208c:	e3a010fe 	mov	r1, #254	; 0xfe
        242090:	e2811c01 	add	r1, r1, #256	; 0x100
        242094:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        242098:	ea6531af 	b	1b8e75c <TXFramesEditInfo::$SetEditFlag(int, long, long)>
        24209c:	0c104d98 	ldceq	13, cr4, [r0], -#608
    */
}

/**
 * Symbol: TXMultiFrameFormatter::RemoveFrameLines(long, long, long)
 * Address: 002420a0
 */
TXMultiFrameFormatter::RemoveFrameLines(long, long, long) {
    /*
        2420a0:	e1a0c00d 	mov	ip, sp
        2420a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2420a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2420ac:	e1a05000 	mov	r5, r0
        2420b0:	e1a04001 	mov	r4, r1
        2420b4:	e1a01002 	mov	r1, r2
        2420b8:	e1a02003 	mov	r2, r3
        2420bc:	eb652d82 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        2420c0:	e1a06000 	mov	r6, r0
        2420c4:	e1a01004 	mov	r1, r4
        2420c8:	e5b50024 	ldr	r0, [r5, #36]!	; fField36
        2420cc:	eb650c7f 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2420d0:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2420d4:	e0411006 	sub	r1, r1, r6
        2420d8:	e5a01004 	str	r1, [r0, #4]!	; fField4
        2420dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2420e0:	e1a0200d 	mov	r2, sp
        2420e4:	e1a01004 	mov	r1, r4
        2420e8:	e59f0024 	ldr	r0, [pc, #24]	; 242114 <TXMultiFrameFormatter::RemoveFrameLines(long, long, long)+0x74>
        2420ec:	e3a03001 	mov	r3, #1	; 0x1
        2420f0:	e2833c01 	add	r3, r3, #256	; 0x100
        2420f4:	eb653196 	bl	1b8e754 <TXFramesEditInfo::$GetEditInfoPtr( const(long, TXFrameEditInfo **, int))>
        2420f8:	e3300000 	teq	r0, #0	; 0x0
        2420fc:	0a000003 	beq	242110 <TXMultiFrameFormatter::RemoveFrameLines(long, long, long)+0x70>
        242100:	e59d0000 	ldr	r0, [sp]
        242104:	e590100c 	ldr	r1, [r0, #12]
        242108:	e0411006 	sub	r1, r1, r6
        24210c:	e5a0100c 	str	r1, [r0, #12]!
        242110:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        242114:	0c104d98 	ldceq	13, cr4, [r0], -#608
    */
}

/**
 * Symbol: TXMultiFrameFormatter::AppendFrame(long, long)
 * Address: 00242118
 */
TXMultiFrameFormatter::AppendFrame(long, long) {
    /*
        242118:	e1a0c00d 	mov	ip, sp
        24211c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        242120:	e24cb004 	sub	fp, ip, #4	; 0x4
        242124:	e1a05000 	mov	r5, r0
        242128:	e1a06001 	mov	r6, r1
        24212c:	e1a04002 	mov	r4, r2
        242130:	e5900024 	ldr	r0, [r0, #36]	; fField36
        242134:	e3e03000 	mvn	r3, #0	; 0x0
        242138:	e3a02001 	mov	r2, #1	; 0x1
        24213c:	e3a01000 	mov	r1, #0	; 0x0
        242140:	eb650c66 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        242144:	e3300000 	teq	r0, #0	; 0x0
        242148:	03a000e9 	moveq	r0, #233	; 0xe9
        24214c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        242150:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        242154:	e3540000 	cmp	r4, #0	; 0x0
        242158:	b5b5101c 	ldrlt	r1, [r5, #28]!	; fField28
        24215c:	b2811001 	addlt	r1, r1, #1	; 0x1
        242160:	a1a01004 	movge	r1, r4
        242164:	e8800042 	stmia	r0, {r1, r6}
        242168:	e3a00000 	mov	r0, #0	; 0x0
        24216c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::ForceOverflow(long)
 * Address: 00242170
 */
TXMultiFrameFormatter::ForceOverflow(long) {
    /*
        242170:	e1a0c00d 	mov	ip, sp
        242174:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        242178:	e24cb004 	sub	fp, ip, #4	; 0x4
        24217c:	e1a04000 	mov	r4, r0
        242180:	e1a05001 	mov	r5, r1
        242184:	e1a03000 	mov	r3, r0
        242188:	e3a00000 	mov	r0, #0	; 0x0
        24218c:	e52d1010 	str	r1, [sp, -#16]!	; fField16
        242190:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        242194:	e1a00003 	mov	r0, r3
        242198:	e89d0006 	ldmia	sp, {r1, r2}
        24219c:	e5933000 	ldr	r3, [r3]
        2421a0:	e1a0e00f 	mov	lr, pc
        2421a4:	e283f034 	add	pc, r3, #52	; 0x34
        2421a8:	e1a07000 	mov	r7, r0
        2421ac:	e1a01007 	mov	r1, r7
        2421b0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2421b4:	eb650c45 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2421b8:	e1a06000 	mov	r6, r0
        2421bc:	e5900000 	ldr	r0, [r0]
        2421c0:	e2400001 	sub	r0, r0, #1	; 0x1
        2421c4:	e58d000c 	str	r0, [sp, #12]
        2421c8:	e1a02000 	mov	r2, r0
        2421cc:	e1a01005 	mov	r1, r5
        2421d0:	e1a00004 	mov	r0, r4
        2421d4:	eb652d3c 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        2421d8:	e1a08000 	mov	r8, r0
        2421dc:	e5960004 	ldr	r0, [r6, #4]	; fField4
        2421e0:	e0400008 	sub	r0, r0, r8
        2421e4:	e5860004 	str	r0, [r6, #4]	; fField4
        2421e8:	e5865000 	str	r5, [r6]
        2421ec:	e1a00004 	mov	r0, r4
        2421f0:	e5941000 	ldr	r1, [r4]
        2421f4:	e1a0e00f 	mov	lr, pc
        2421f8:	e281f02c 	add	pc, r1, #44	; 0x2c
        2421fc:	e2400001 	sub	r0, r0, #1	; 0x1
        242200:	e1300007 	teq	r0, r7
        242204:	1a000006 	bne	242224 <TXMultiFrameFormatter::ForceOverflow(long)+0xb4>
        242208:	e1a01008 	mov	r1, r8
        24220c:	e1a00004 	mov	r0, r4
        242210:	e3e02000 	mvn	r2, #0	; 0x0
        242214:	e5943000 	ldr	r3, [r4]
        242218:	e1a0e00f 	mov	lr, pc
        24221c:	e283f064 	add	pc, r3, #100	; 0x64
        242220:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        242224:	e58d5008 	str	r5, [sp, #8]	; fField8
        242228:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24222c:	e1a0000d 	mov	r0, sp
        242230:	eb652d2e 	bl	1b8d6f0 <TXFormatReflowLines::$Reset(void)>
        242234:	e28d3014 	add	r3, sp, #20	; 0x14
        242238:	e1a02008 	mov	r2, r8
        24223c:	e92d000c 	stmdb	sp!, {r2, r3}
        242240:	e28d2008 	add	r2, sp, #8	; 0x8
        242244:	e1a01007 	mov	r1, r7
        242248:	e1a00004 	mov	r0, r4
        24224c:	e3a03000 	mov	r3, #0	; 0x0
        242250:	eb654e1f 	bl	1b95ad4 <TXMultiFrameFormatter::$CheckReflow(long, TXFormatReflowLines *, unsigned char, long, TXOffsetPair const *)>
        242254:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::RemoveFormattedFrames(long, long *, TXOffsetPair *)
 * Address: 00242258
 */
TXMultiFrameFormatter::RemoveFormattedFrames(long, long *, TXOffsetPair *) {
    /*
        242258:	e1a0c00d 	mov	ip, sp
        24225c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        242260:	e24cb004 	sub	fp, ip, #4	; 0x4
        242264:	e1a06000 	mov	r6, r0
        242268:	e1a05001 	mov	r5, r1
        24226c:	e1a04002 	mov	r4, r2
        242270:	e1a07003 	mov	r7, r3
        242274:	e5900024 	ldr	r0, [r0, #36]	; fField36
        242278:	eb650c14 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        24227c:	e3a09000 	mov	r9, #0	; 0x0
        242280:	e5948000 	ldr	r8, [r4]
        242284:	ea000003 	b	242298 <TXMultiFrameFormatter::RemoveFormattedFrames(long, long *, TXOffsetPair *)+0x40>
        242288:	e0488001 	sub	r8, r8, r1
        24228c:	e4901008 	ldr	r1, [r0], #8	; fField8
        242290:	e2899001 	add	r9, r9, #1	; 0x1
        242294:	e5871000 	str	r1, [r7]
        242298:	e3380000 	teq	r8, #0	; 0x0
        24229c:	0a000002 	beq	2422ac <TXMultiFrameFormatter::RemoveFormattedFrames(long, long *, TXOffsetPair *)+0x54>
        2422a0:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2422a4:	e1510008 	cmp	r1, r8
        2422a8:	dafffff6 	ble	242288 <TXMultiFrameFormatter::RemoveFormattedFrames(long, long *, TXOffsetPair *)+0x30>
        2422ac:	e1a02005 	mov	r2, r5
        2422b0:	e1a01009 	mov	r1, r9
        2422b4:	e1a00006 	mov	r0, r6
        2422b8:	eb654e09 	bl	1b95ae4 <TXMultiFrameFormatter::$RemoveFrames(long, long)>
        2422bc:	e1a00009 	mov	r0, r9
        2422c0:	e5848000 	str	r8, [r4]
        2422c4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)
 * Address: 002422c8
 */
TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long) {
    /*
        2422c8:	e1a0c00d 	mov	ip, sp
        2422cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2422d0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2422d4:	e24cb014 	sub	fp, ip, #20	; 0x14
        2422d8:	e1a04000 	mov	r4, r0
        2422dc:	e1a05002 	mov	r5, r2
        2422e0:	e59b7014 	ldr	r7, [fp, #20]	; fField20
        2422e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2422e8:	e5900028 	ldr	r0, [r0, #40]	; fField40
        2422ec:	e3300000 	teq	r0, #0	; 0x0
        2422f0:	0a00003d 	beq	2423ec <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0x124>
        2422f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2422f8:	e1a0200d 	mov	r2, sp
        2422fc:	e1a01005 	mov	r1, r5
        242300:	eb650bfd 	bl	1b852fc <TXLongTagArray::$Search( const(long, long *))>
        242304:	e1a06000 	mov	r6, r0
        242308:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        24230c:	e3330000 	teq	r3, #0	; 0x0
        242310:	0a00002b 	beq	2423c4 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0xfc>
        242314:	e3a09000 	mov	r9, #0	; 0x0
        242318:	e1a08006 	mov	r8, r6
        24231c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        242320:	e5b0a004 	ldr	sl, [r0, #4]!	; fField4
        242324:	e156000a 	cmp	r6, sl
        242328:	aa000025 	bge	2423c4 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0xfc>
        24232c:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        242330:	e0851003 	add	r1, r5, r3
        242334:	e58d1004 	str	r1, [sp, #4]	; fField4
        242338:	e1a01008 	mov	r1, r8
        24233c:	e2888001 	add	r8, r8, #1	; 0x1
        242340:	e5940028 	ldr	r0, [r4, #40]	; fField40
        242344:	eb650be1 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        242348:	e5900000 	ldr	r0, [r0]
        24234c:	e58d0000 	str	r0, [sp]
        242350:	e1500005 	cmp	r0, r5
        242354:	ba000005 	blt	242370 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0xa8>
        242358:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        24235c:	e1510000 	cmp	r1, r0
        242360:	da000002 	ble	242370 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0xa8>
        242364:	e2899001 	add	r9, r9, #1	; 0x1
        242368:	e158000a 	cmp	r8, sl
        24236c:	bafffff1 	blt	242338 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0x70>
        242370:	e3390000 	teq	r9, #0	; 0x0
        242374:	0a000012 	beq	2423c4 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0xfc>
        242378:	e1a02009 	mov	r2, r9
        24237c:	e1a01006 	mov	r1, r6
        242380:	e5943028 	ldr	r3, [r4, #40]	; fField40
        242384:	e1a00003 	mov	r0, r3
        242388:	e5933000 	ldr	r3, [r3]
        24238c:	e1a0e00f 	mov	lr, pc
        242390:	e283f004 	add	pc, r3, #4	; 0x4
        242394:	e3300000 	teq	r0, #0	; 0x0
        242398:	1a000009 	bne	2423c4 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0xfc>
        24239c:	e3a00001 	mov	r0, #1	; 0x1
        2423a0:	e5c4002c 	strb	r0, [r4, #44]	; fField44
        2423a4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2423a8:	e3300000 	teq	r0, #0	; 0x0
        2423ac:	0a000002 	beq	2423bc <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0xf4>
        2423b0:	e3a01001 	mov	r1, #1	; 0x1
        2423b4:	e1a0e00f 	mov	lr, pc
        2423b8:	e590f000 	ldr	pc, [r0]
        2423bc:	e3a00000 	mov	r0, #0	; 0x0
        2423c0:	e5840028 	str	r0, [r4, #40]	; fField40
        2423c4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2423c8:	e3300000 	teq	r0, #0	; 0x0
        2423cc:	0a000004 	beq	2423e4 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0x11c>
        2423d0:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        2423d4:	e0472003 	sub	r2, r7, r3
        2423d8:	e1a01006 	mov	r1, r6
        2423dc:	e3e03000 	mvn	r3, #0	; 0x0
        2423e0:	eb650fc7 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        2423e4:	e28dd004 	add	sp, sp, #4	; 0x4
        2423e8:	ea000000 	b	2423f0 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0x128>
        2423ec:	e3a06000 	mov	r6, #0	; 0x0
        2423f0:	e59b0018 	ldr	r0, [fp, #24]
        2423f4:	e3100004 	tst	r0, #4	; 0x4
        2423f8:	0a000028 	beq	2424a0 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0x1d8>
        2423fc:	e3570000 	cmp	r7, #0	; 0x0
        242400:	da000026 	ble	2424a0 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0x1d8>
        242404:	e24dd004 	sub	sp, sp, #4	; 0x4
        242408:	e1a03007 	mov	r3, r7
        24240c:	e1a02005 	mov	r2, r5
        242410:	e59bc008 	ldr	ip, [fp, #8]	; fField8
        242414:	e1a0000c 	mov	r0, ip
        242418:	e3a0100a 	mov	r1, #10	; 0xa
        24241c:	e59cc000 	ldr	ip, [ip]
        242420:	e1a0e00f 	mov	lr, pc
        242424:	e28cf020 	add	pc, ip, #32	; 0x20
        242428:	e58d0000 	str	r0, [sp]
        24242c:	e3500000 	cmp	r0, #0	; 0x0
        242430:	b28dd004 	addlt	sp, sp, #4	; 0x4
        242434:	ba000019 	blt	2424a0 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0x1d8>
        242438:	e0800005 	add	r0, r0, r5
        24243c:	e58d0000 	str	r0, [sp]
        242440:	e5940028 	ldr	r0, [r4, #40]	; fField40
        242444:	e3300000 	teq	r0, #0	; 0x0
        242448:	1a000006 	bne	242468 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0x1a0>
        24244c:	e3a02000 	mov	r2, #0	; 0x0
        242450:	e3a01004 	mov	r1, #4	; 0x4
        242454:	e3a00000 	mov	r0, #0	; 0x0
        242458:	eb650ba5 	bl	1b852f4 <TXLongTagArray::$__ct(unsigned char, int)>
        24245c:	e5840028 	str	r0, [r4, #40]	; fField40
        242460:	e3300000 	teq	r0, #0	; 0x0
        242464:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        242468:	e1a03006 	mov	r3, r6
        24246c:	e1a0100d 	mov	r1, sp
        242470:	e3a02001 	mov	r2, #1	; 0x1
        242474:	e5940028 	ldr	r0, [r4, #40]	; fField40
        242478:	eb650b98 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        24247c:	e59d0000 	ldr	r0, [sp]
        242480:	e2800001 	add	r0, r0, #1	; 0x1
        242484:	e48d0004 	str	r0, [sp], #4	; fField4
        242488:	e0401005 	sub	r1, r0, r5
        24248c:	e0477001 	sub	r7, r7, r1
        242490:	e1a05000 	mov	r5, r0
        242494:	e2866001 	add	r6, r6, #1	; 0x1
        242498:	e3570000 	cmp	r7, #0	; 0x0
        24249c:	caffffd8 	bgt	242404 <TXMultiFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)+0x13c>
        2424a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::CheckFrameBreaks(long, long *, long *)
 * Address: 002424a4
 */
TXMultiFrameFormatter::CheckFrameBreaks(long, long *, long *) {
    /*
        2424a4:	e1a0c00d 	mov	ip, sp
        2424a8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2424ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2424b0:	e1a04000 	mov	r4, r0
        2424b4:	e1a06001 	mov	r6, r1
        2424b8:	e1a05002 	mov	r5, r2
        2424bc:	e1a07003 	mov	r7, r3
        2424c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2424c4:	e5900020 	ldr	r0, [r0, #32]	; fField32
        2424c8:	eb650f91 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        2424cc:	e1a08000 	mov	r8, r0
        2424d0:	e1a0200d 	mov	r2, sp
        2424d4:	e1a01008 	mov	r1, r8
        2424d8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2424dc:	eb650b86 	bl	1b852fc <TXLongTagArray::$Search( const(long, long *))>
        2424e0:	e59d0000 	ldr	r0, [sp]
        2424e4:	e2800001 	add	r0, r0, #1	; 0x1
        2424e8:	e58d0000 	str	r0, [sp]
        2424ec:	e1500008 	cmp	r0, r8
        2424f0:	da00001b 	ble	242564 <TXMultiFrameFormatter::CheckFrameBreaks(long, long *, long *)+0xc0>
        2424f4:	e5950000 	ldr	r0, [r5]
        2424f8:	e2401001 	sub	r1, r0, #1	; 0x1
        2424fc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        242500:	eb650f82 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        242504:	e59d1000 	ldr	r1, [sp]
        242508:	e1500001 	cmp	r0, r1
        24250c:	da000014 	ble	242564 <TXMultiFrameFormatter::CheckFrameBreaks(long, long *, long *)+0xc0>
        242510:	e5950000 	ldr	r0, [r5]
        242514:	e2408001 	sub	r8, r0, #1	; 0x1
        242518:	e1580006 	cmp	r8, r6
        24251c:	ba00000a 	blt	24254c <TXMultiFrameFormatter::CheckFrameBreaks(long, long *, long *)+0xa8>
        242520:	e1a01008 	mov	r1, r8
        242524:	e5940020 	ldr	r0, [r4, #32]	; fField32
        242528:	eb650f78 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        24252c:	e59d1000 	ldr	r1, [sp]
        242530:	e1300001 	teq	r0, r1
        242534:	02880001 	addeq	r0, r8, #1	; 0x1
        242538:	05850000 	streq	r0, [r5]
        24253c:	0a000002 	beq	24254c <TXMultiFrameFormatter::CheckFrameBreaks(long, long *, long *)+0xa8>
        242540:	e2488001 	sub	r8, r8, #1	; 0x1
        242544:	e1580006 	cmp	r8, r6
        242548:	aafffff4 	bge	242520 <TXMultiFrameFormatter::CheckFrameBreaks(long, long *, long *)+0x7c>
        24254c:	e5950000 	ldr	r0, [r5]
        242550:	e2402001 	sub	r2, r0, #1	; 0x1
        242554:	e1a01006 	mov	r1, r6
        242558:	e1a00004 	mov	r0, r4
        24255c:	eb652c5a 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        242560:	e5870000 	str	r0, [r7]
        242564:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::WriteToStream(TXStream *)
 * Address: 00242568
 */
TXMultiFrameFormatter::WriteToStream(TXStream *) {
    /*
        242568:	e1a0c00d 	mov	ip, sp
        24256c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        242570:	e24cb004 	sub	fp, ip, #4	; 0x4
        242574:	e1a05000 	mov	r5, r0
        242578:	e1a04001 	mov	r4, r1
        24257c:	e5900028 	ldr	r0, [r0, #40]	; fField40
        242580:	e3300000 	teq	r0, #0	; 0x0
        242584:	0a000006 	beq	2425a4 <TXMultiFrameFormatter::WriteToStream(TXStream *)+0x3c>
        242588:	e5900004 	ldr	r0, [r0, #4]	; fField4
        24258c:	e3a01801 	mov	r1, #65536	; 0x10000
        242590:	e2411001 	sub	r1, r1, #1	; 0x1
        242594:	e1500001 	cmp	r0, r1
        242598:	a1a00001 	movge	r0, r1
        24259c:	e1a06000 	mov	r6, r0
        2425a0:	ea000000 	b	2425a8 <TXMultiFrameFormatter::WriteToStream(TXStream *)+0x40>
        2425a4:	e3a06000 	mov	r6, #0	; 0x0
        2425a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2425ac:	e1a00806 	mov	r0, r6, lsl #16
        2425b0:	e1a00840 	mov	r0, r0, asr #16
        2425b4:	e5cd0001 	strb	r0, [sp, #1]
        2425b8:	e1a00440 	mov	r0, r0, asr #8
        2425bc:	e5cd0000 	strb	r0, [sp]
        2425c0:	e1a0100d 	mov	r1, sp
        2425c4:	e1a00004 	mov	r0, r4
        2425c8:	e3a02002 	mov	r2, #2	; 0x2
        2425cc:	eb655dc5 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        2425d0:	e28dd004 	add	sp, sp, #4	; 0x4
        2425d4:	e3300000 	teq	r0, #0	; 0x0
        2425d8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2425dc:	e3a07000 	mov	r7, #0	; 0x0
        2425e0:	e3560000 	cmp	r6, #0	; 0x0
        2425e4:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2425e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2425ec:	e1a01007 	mov	r1, r7
        2425f0:	e5950028 	ldr	r0, [r5, #40]	; fField40
        2425f4:	eb650b35 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2425f8:	e5900000 	ldr	r0, [r0]
        2425fc:	e58d0000 	str	r0, [sp]
        242600:	e1a0100d 	mov	r1, sp
        242604:	e1a00004 	mov	r0, r4
        242608:	e3a02004 	mov	r2, #4	; 0x4
        24260c:	eb655db5 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        242610:	e28dd004 	add	sp, sp, #4	; 0x4
        242614:	e3300000 	teq	r0, #0	; 0x0
        242618:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        24261c:	e2877001 	add	r7, r7, #1	; 0x1
        242620:	e1570006 	cmp	r7, r6
        242624:	baffffef 	blt	2425e8 <TXMultiFrameFormatter::WriteToStream(TXStream *)+0x80>
        242628:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXMultiFrameFormatter::ReadFromStream(TXStream *)
 * Address: 0024262c
 */
TXMultiFrameFormatter::ReadFromStream(TXStream *) {
    /*
        24262c:	e1a0c00d 	mov	ip, sp
        242630:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        242634:	e24cb004 	sub	fp, ip, #4	; 0x4
        242638:	e1a04000 	mov	r4, r0
        24263c:	e1a05001 	mov	r5, r1
        242640:	e24dd004 	sub	sp, sp, #4	; 0x4
        242644:	e1a0100d 	mov	r1, sp
        242648:	e1a00005 	mov	r0, r5
        24264c:	e3a02002 	mov	r2, #2	; 0x2
        242650:	eb655da5 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        242654:	e3300000 	teq	r0, #0	; 0x0
        242658:	1a000002 	bne	242668 <TXMultiFrameFormatter::ReadFromStream(TXStream *)+0x3c>
        24265c:	e59d1000 	ldr	r1, [sp]
        242660:	e1b01821 	movs	r1, r1, lsr #16
        242664:	1a000000 	bne	24266c <TXMultiFrameFormatter::ReadFromStream(TXStream *)+0x40>
        242668:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        24266c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        242670:	e3300000 	teq	r0, #0	; 0x0
        242674:	1a000004 	bne	24268c <TXMultiFrameFormatter::ReadFromStream(TXStream *)+0x60>
        242678:	e3a02000 	mov	r2, #0	; 0x0
        24267c:	e3a01004 	mov	r1, #4	; 0x4
        242680:	e3a00000 	mov	r0, #0	; 0x0
        242684:	eb650b1a 	bl	1b852f4 <TXLongTagArray::$__ct(unsigned char, int)>
        242688:	e5840028 	str	r0, [r4, #40]	; fField40
        24268c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        242690:	e59d1000 	ldr	r1, [sp]
        242694:	e1a01821 	mov	r1, r1, lsr #16
        242698:	ebffb893 	bl	2308ec <TXArray::SetCount(long)>
        24269c:	e1b07000 	movs	r7, r0
        2426a0:	1a000015 	bne	2426fc <TXMultiFrameFormatter::ReadFromStream(TXStream *)+0xd0>
        2426a4:	e3a06000 	mov	r6, #0	; 0x0
        2426a8:	e59d0000 	ldr	r0, [sp]
        2426ac:	e1a00820 	mov	r0, r0, lsr #16
        2426b0:	e3500000 	cmp	r0, #0	; 0x0
        2426b4:	da000010 	ble	2426fc <TXMultiFrameFormatter::ReadFromStream(TXStream *)+0xd0>
        2426b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2426bc:	e1a0100d 	mov	r1, sp
        2426c0:	e1a00005 	mov	r0, r5
        2426c4:	e3a02004 	mov	r2, #4	; 0x4
        2426c8:	eb655d87 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        2426cc:	e1b07000 	movs	r7, r0
        2426d0:	128dd004 	addne	sp, sp, #4	; 0x4
        2426d4:	1a000008 	bne	2426fc <TXMultiFrameFormatter::ReadFromStream(TXStream *)+0xd0>
        2426d8:	e1a01006 	mov	r1, r6
        2426dc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2426e0:	eb650afa 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2426e4:	e59d1000 	ldr	r1, [sp]
        2426e8:	e2866001 	add	r6, r6, #1	; 0x1
        2426ec:	e5801000 	str	r1, [r0]
        2426f0:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2426f4:	e1560820 	cmp	r6, r0, lsr #16
        2426f8:	baffffee 	blt	2426b8 <TXMultiFrameFormatter::ReadFromStream(TXStream *)+0x8c>
        2426fc:	e1a00007 	mov	r0, r7
        242700:	eaffffd8 	b	242668 <TXMultiFrameFormatter::ReadFromStream(TXStream *)+0x3c>
    */
}

