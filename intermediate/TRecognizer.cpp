#include "include/TRecognizer.h"

/* VTable Layout:
 * [0] 0x1ab4a5c
 * [1] 0x1ab4a58
 * [2] 0x1aad698
 * [3] 0x1ab4a1c
 * [4] 0x1aab598
 * [5] 0x1ab18e0
 * [6] 0x1abad6c
 * [7] 0x1ab9ce4
 * [8] 0x1ab9ce0
 * [9] 0x1abbd98
 * [10] 0x1abad34
 * [11] 0x1abbde4
 * [12] 0x1aa8470
 * [13] 0x1aa948c
 * [14] 0x1aae718
 * [15] 0x1aab5ac
 * [16] 0x1ab39fc
 * [17] 0x1ab2934
 * [18] 0x1aac660
 * [19] TRemoteView::ClassID( const(void))
 * [20] TRemoteView::DerivedFrom( const(long))
 * [21] 0x38b34c
 * [22] 0x1a9ad64
 * [23] 0x1a9085c
 * [24] 0x1a8d6b4
 * [25] 0x1ae73a8
 * [26] 0x1a9ef6c
 * [27] 0x1ae73ac
 * [28] 0x1bcb5a0
 * [29] 0x1bcb580
 * [30] 0x1bcb5ec
 * [31] 0x1bc94b8
 * [32] 0x1bcc60c
 * [33] 0x1adce2c
 * [34] 0x1bca574
 * [35] 0x1ae73c0
 * [36] 0x1bca554
 * [37] 0x1bcc614
 * [38] 0x1bc94ac
 * [39] 0x1bc94b0
 * [40] 0x1bc94ec
 * [41] 0x1bca578
 * [42] TView::SetCaretOffset(long *, long *)
 * [43] 0x1ae73b8
 * [44] 0x1ae73b4
 * [45] 0x1ae73bc
 * [46] 0x1ae31cc
 * [47] 0x1bcb59c
 * [48] 0x1bcb5a8
 * [49] 0x1adbdf8
 * [50] 0x1bcb5c4
 * [51] 0x1bca57c
 * [52] 0x1bca510
 * [53] 0x1bca50c
 * [54] 0x1ab39e0
 * [55] 0x1ad189c
 * [56] 0x1ab4a18
 * [57] 0x1aad6d0
 * [58] 0x1adbde8
 * [59] 0x1adbdd8
 * [60] TView::DeleteHilited(RefVar const &)
 * [61] 0x1adce0c
 * [62] 0x1ab8c5c
 * [63] 0x1ab39c8
 * [64] 0x1ab39d0
 * [65] 0x1ab39cc
 * [66] 0x1adce00
 * [67] TView::ClickOptions(void)
 * [68] TView::DrawScaledData(TRect const &, TRect const &, TRect *)
 * [69] 0x1aa8428
 * [70] 0x1ab2910
 * [71] 0x1aad6a4
 * [72] 0x1ace730
 * [73] 0x1ace734
 * [74] 0x1ae31c8
 * [75] 0x1abef2c
 * [76] 0x1aae70c
 * [77] 0x1aad6e4
 * [78] 0x1aad6f8
 * [79] 0x1ace748
 * [80] 0x1acd698
 * [81] 0x1c010f4
 * [82] 0x1bcb5b0
 * [83] 0x1bcb5ac
 * [84] 0x1a9ffac
 * [85] 0x1adce18
 * [86] 0x1abef04
 * [87] 0x1aad6b0
 * [88] 0x1ab39a4
 * [89] 0x1ab18a8
 * [90] TSliderView::ClassID( const(void))
 * [91] TSliderView::DerivedFrom( const(long))
 * [92] 0x1a88448
 * [93] 0x1a9ad64
 * [94] 0x1a9085c
 * [95] 0x1a8d6b8
 * [96] 0x1ae73a8
 * [97] 0x1a9ef7c
 * [98] 0x1ae73ac
 * [99] 0x1bcb5a0
 */

/**
 * Symbol: TRecognizer::__ct(void)
 * Address: 001437b4
 */
TRecognizer::TRecognizer(void) {
    /*
        1437b4:	e1a0c00d 	mov	ip, sp
        1437b8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1437bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1437c0:	e3300000 	teq	r0, #0	; 0x0
        1437c4:	1a000003 	bne	1437d8 <TRecognizer::__ct(void)+0x24>
        1437c8:	e3a00020 	mov	r0, #32	; 0x20
        1437cc:	eb6a2bd9 	bl	1bce738 <$__nw(unsigned int)>
        1437d0:	e3300000 	teq	r0, #0	; 0x0
        1437d4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1437d8:	e59f1004 	ldr	r1, [pc, #4]	; 1437e4 <TRecognizer::__ct(void)+0x30>	; fField4
        1437dc:	e5801000 	str	r1, [r0]
        1437e0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1437e4:	0001b3c4 	andeq	fp, r1, r4, asr #7
    */
}

/**
 * Symbol: TRecognizer::ServicesEnabled(void)
 * Address: 001437e8
 */
TRecognizer::ServicesEnabled(void) {
    /*
        1437e8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1437ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::UnitConfidence(TUnitPublic *)
 * Address: 001437f0
 */
TRecognizer::UnitConfidence(TUnitPublic *) {
    /*
        1437f0:	e3a00000 	mov	r0, #0	; 0x0
        1437f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::Sleep(void)
 * Address: 001437f8
 */
TRecognizer::Sleep(void) {
    /*
        1437f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::WakeUp(void)
 * Address: 001437fc
 */
TRecognizer::WakeUp(void) {
    /*
        1437fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::ArbitrateTime(void)
 * Address: 00143800
 */
TRecognizer::ArbitrateTime(void) {
    /*
        143800:	e5900014 	ldr	r0, [r0, #20]	; fField20
        143804:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::InitServices(unsigned long, unsigned long)
 * Address: 00143808
 */
TRecognizer::InitServices(unsigned long, unsigned long) {
    /*
        143808:	e2800014 	add	r0, r0, #20	; 0x14
        14380c:	e9a00006 	stmib	r0!, {r1, r2}
        143810:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::BuildConfig(RefVar const &, TView *, unsigned long)
 * Address: 00143814
 */
TRecognizer::BuildConfig(RefVar const &, TView *, unsigned long) {
    /*
        143814:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::EnableArea(TRecArea *, RefVar const &)
 * Address: 00143818
 */
TRecognizer::EnableArea(TRecArea *, RefVar const &) {
    /*
        143818:	e1a0c00d 	mov	ip, sp
        14381c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        143820:	e24cb004 	sub	fp, ip, #4	; 0x4
        143824:	e1a04000 	mov	r4, r0
        143828:	e1a05001 	mov	r5, r1
        14382c:	e1a00002 	mov	r0, r2
        143830:	e59f1084 	ldr	r1, [pc, #84]	; 1438bc <TRecognizer::EnableArea(TRecArea *, RefVar const &)+0xa4>
        143834:	e3a03000 	mov	r3, #0	; 0x0
        143838:	e3a02000 	mov	r2, #0	; 0x0
        14383c:	eb6a028c 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        143840:	e3100003 	tst	r0, #3	; 0x3
        143844:	01a00140 	moveq	r0, r0, asr #2
        143848:	0a000000 	beq	143850 <TRecognizer::EnableArea(TRecArea *, RefVar const &)+0x38>
        14384c:	eb69fa32 	bl	1bc211c <$_RINTError(long)>
        143850:	e1a06000 	mov	r6, r0
        143854:	e1a00004 	mov	r0, r4
        143858:	e5941000 	ldr	r1, [r4]
        14385c:	e1a0e00f 	mov	lr, pc
        143860:	e281f020 	add	pc, r1, #32	; 0x20
        143864:	e1100006 	tst	r0, r6
        143868:	0a000011 	beq	1438b4 <TRecognizer::EnableArea(TRecArea *, RefVar const &)+0x9c>
        14386c:	e3a03000 	mov	r3, #0	; 0x0
        143870:	e92d0008 	stmdb	sp!, {r3}
        143874:	e1a00004 	mov	r0, r4
        143878:	e5941000 	ldr	r1, [r4]
        14387c:	e1a0e00f 	mov	lr, pc
        143880:	e281f030 	add	pc, r1, #48	; 0x30
        143884:	e1a06000 	mov	r6, r0
        143888:	e1a00004 	mov	r0, r4
        14388c:	e5941000 	ldr	r1, [r4]
        143890:	e1a0e00f 	mov	lr, pc
        143894:	e281f00c 	add	pc, r1, #12	; 0xc
        143898:	e1a01000 	mov	r1, r0
        14389c:	e59f001c 	ldr	r0, [pc, #1c]	; 1438c0 <TRecognizer::EnableArea(TRecArea *, RefVar const &)+0xa8>
        1438a0:	e5b02034 	ldr	r2, [r0, #52]!
        1438a4:	e1a00005 	mov	r0, r5
        1438a8:	e1a03006 	mov	r3, r6
        1438ac:	eb685d2e 	bl	1b5ad6c <TRecArea::$AddAType(unsigned long, unsigned long (*)(TArray *), unsigned long, dInfoRec *)>
        1438b0:	e28dd004 	add	sp, sp, #4	; 0x4
        1438b4:	e3a00000 	mov	r0, #0	; 0x0
        1438b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1438bc:	00683270 	rsbeq	r3, r8, r0, ror r2
        1438c0:	0c106e88 	ldceq	14, cr6, [r0], -#544
    */
}

/**
 * Symbol: TRecognizer::ConfigureArea(TRecArea *, RefVar const &)
 * Address: 001438c4
 */
TRecognizer::ConfigureArea(TRecArea *, RefVar const &) {
    /*
        1438c4:	e3a00000 	mov	r0, #0	; 0x0
        1438c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::Init(TDomain *, unsigned long, unsigned long, unsigned char, unsigned long)
 * Address: 00143934
 */
TRecognizer::Init(TDomain *, unsigned long, unsigned long, unsigned char, unsigned long) {
    /*
        143934:	e92d4000 	stmdb	sp!, {lr}
        143938:	e1a0c000 	mov	ip, r0
        14393c:	e99d4001 	ldmib	sp, {r0, lr}
        143940:	e98c000e 	stmib	ip, {r1, r2, r3}
        143944:	e5cc0010 	strb	r0, [ip, #16]	; fField16
        143948:	e58ce014 	str	lr, [ip, #20]	; fField20
        14394c:	e1a0000c 	mov	r0, ip
        143950:	e3a02000 	mov	r2, #0	; 0x0
        143954:	e3a01000 	mov	r1, #0	; 0x0
        143958:	e59c3000 	ldr	r3, [ip]
        14395c:	e8bd4000 	ldmia	sp!, {lr}
        143960:	e283f004 	add	pc, r3, #4	; 0x4
    */
}

/**
 * Symbol: TRecognizer::GetLearningData(TUnitPublic *)
 * Address: 00143964
 */
TRecognizer::GetLearningData(TUnitPublic *) {
    /*
        143964:	e3a00002 	mov	r0, #2	; 0x2
        143968:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::DoLearning(RefVar const &, long)
 * Address: 0014396c
 */
TRecognizer::DoLearning(RefVar const &, long) {
    /*
        14396c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::Domain(void)
 * Address: 00143de4
 */
TRecognizer::Domain(void) {
    /*
        143de4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        143de8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::ID(void)
 * Address: 001443ec
 */
TRecognizer::ID(void) {
    /*
        1443ec:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1443f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::Command(void)
 * Address: 001444f8
 */
TRecognizer::Command(void) {
    /*
        1444f8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1444fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::Flags(void)
 * Address: 00144500
 */
TRecognizer::Flags(void) {
    /*
        144500:	e5d00010 	ldrb	r0, [r0, #16]	; fField16
        144504:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::TestFlags(unsigned char)
 * Address: 00144508
 */
TRecognizer::TestFlags(unsigned char) {
    /*
        144508:	e20110ff 	and	r1, r1, #255	; 0xff
        14450c:	e5d00010 	ldrb	r0, [r0, #16]	; fField16
        144510:	e0100001 	ands	r0, r0, r1
        144514:	13a00001 	movne	r0, #1	; 0x1
        144518:	e20000ff 	and	r0, r0, #255	; 0xff
        14451c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::HandleUnit(TUnitPublic *)
 * Address: 00144520
 */
TRecognizer::HandleUnit(TUnitPublic *) {
    /*
        144520:	e590000c 	ldr	r0, [r0, #12]	; fField12
        144524:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognizer::ServicesPossible(void)
 * Address: 00144528
 */
TRecognizer::ServicesPossible(void) {
    /*
        144528:	e5900018 	ldr	r0, [r0, #24]	; fField24
        14452c:	e1a0f00e 	mov	pc, lr
    */
}

