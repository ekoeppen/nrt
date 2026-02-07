#include "include/TXFrameFormatter.h"

/**
 * Symbol: TXFrameFormatter::__ct(void)
 * Address: 002396e4
 */
TXFrameFormatter::TXFrameFormatter(void) {
    /*
        2396e4:	e1a0c00d 	mov	ip, sp
        2396e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2396ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2396f0:	e1b04000 	movs	r4, r0
        2396f4:	1a000003 	bne	239708 <TXFrameFormatter::__ct(void)+0x24>
        2396f8:	e3a00024 	mov	r0, #36	; 0x24
        2396fc:	eb66540d 	bl	1bce738 <$__nw(unsigned int)>
        239700:	e1b04000 	movs	r4, r0
        239704:	0a000003 	beq	239718 <TXFrameFormatter::__ct(void)+0x34>
        239708:	e1a00004 	mov	r0, r4
        23970c:	eb654fe9 	bl	1b8d6b8 <TXLinesHeights::$__ct(void)>
        239710:	e59f0008 	ldr	r0, [pc, #8]	; 239720 <TXFrameFormatter::__ct(void)+0x3c>
        239714:	e5840000 	str	r0, [r4]
        239718:	e1a00004 	mov	r0, r4
        23971c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        239720:	0001e604 	andeq	lr, r1, r4, lsl #12
    */
}

/**
 * Symbol: TXFrameFormatter::TestFrameOverflow(long, long)
 * Address: 00239724
 */
TXFrameFormatter::TestFrameOverflow(long, long) {
    /*
        239724:	e1a0c00d 	mov	ip, sp
        239728:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23972c:	e24cb004 	sub	fp, ip, #4	; 0x4
        239730:	e1a04000 	mov	r4, r0
        239734:	e1a05001 	mov	r5, r1
        239738:	e1a06002 	mov	r6, r2
        23973c:	e1a03000 	mov	r3, r0
        239740:	e3a00000 	mov	r0, #0	; 0x0
        239744:	e52d1008 	str	r1, [sp, -#8]!
        239748:	e5cd0004 	strb	r0, [sp, #4]
        23974c:	e1a00003 	mov	r0, r3
        239750:	e89d0006 	ldmia	sp, {r1, r2}
        239754:	e5933000 	ldr	r3, [r3]
        239758:	e1a0e00f 	mov	lr, pc
        23975c:	e283f034 	add	pc, r3, #52	; 0x34
        239760:	e1a07000 	mov	r7, r0
        239764:	e1a01000 	mov	r1, r0
        239768:	e1a00004 	mov	r0, r4
        23976c:	e5942000 	ldr	r2, [r4]
        239770:	e1a0e00f 	mov	lr, pc
        239774:	e282f020 	add	pc, r2, #32	; 0x20
        239778:	e1a08000 	mov	r8, r0
        23977c:	e1a02005 	mov	r2, r5
        239780:	e1a01005 	mov	r1, r5
        239784:	e1a00004 	mov	r0, r4
        239788:	eb654fcf 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        23978c:	e1a05000 	mov	r5, r0
        239790:	e1a01007 	mov	r1, r7
        239794:	e1a00004 	mov	r0, r4
        239798:	e5942000 	ldr	r2, [r4]
        23979c:	e1a0e00f 	mov	lr, pc
        2397a0:	e282f01c 	add	pc, r2, #28	; 0x1c
        2397a4:	e0481005 	sub	r1, r8, r5
        2397a8:	e0811006 	add	r1, r1, r6
        2397ac:	e1500001 	cmp	r0, r1
        2397b0:	a3a00000 	movge	r0, #0	; 0x0
        2397b4:	b3a00001 	movlt	r0, #1	; 0x1
        2397b8:	e20000ff 	and	r0, r0, #255	; 0xff
        2397bc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrameFormatter::CharToFrame( const(TXOffset))
 * Address: 002397c0
 */
TXFrameFormatter::CharToFrame( const(TXOffset)) {
    /*
        2397c0:	e1a0c00d 	mov	ip, sp
        2397c4:	e92dd817 	stmdb	sp!, {r0, r1, r2, r4, fp, ip, lr, pc}
        2397c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2397cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2397d0:	e1a04000 	mov	r4, r0
        2397d4:	e5900020 	ldr	r0, [r0, #32]
        2397d8:	e24b2018 	sub	r2, fp, #24	; 0x18
        2397dc:	e8920006 	ldmia	r2, {r1, r2}
        2397e0:	eb6532d2 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        2397e4:	e3a01000 	mov	r1, #0	; 0x0
        2397e8:	e58d0000 	str	r0, [sp]
        2397ec:	e5cd1004 	strb	r1, [sp, #4]
        2397f0:	e1a00004 	mov	r0, r4
        2397f4:	e89d0006 	ldmia	sp, {r1, r2}
        2397f8:	e5943000 	ldr	r3, [r4]
        2397fc:	e1a0e00f 	mov	lr, pc
        239800:	e283f034 	add	pc, r3, #52	; 0x34
        239804:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long)
 * Address: 00239808
 */
TXFrameFormatter::CharRangeChanged(TXChars *, long, long, long, unsigned long) {
    /*
        239808:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFrameFormatter::Format(void)
 * Address: 0023980c
 */
TXFrameFormatter::Format(void) {
    /*
        23980c:	e3a00000 	mov	r0, #0	; 0x0
        239810:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFrameFormatter::BeginEdit(void)
 * Address: 00239814
 */
TXFrameFormatter::BeginEdit(void) {
    /*
        239814:	e3a00000 	mov	r0, #0	; 0x0
        239818:	e59f1008 	ldr	r1, [pc, #8]	; 239828 <TXFrameFormatter::BeginEdit(void)+0x14>
        23981c:	e5810000 	str	r0, [r1]
        239820:	e5a1003c 	str	r0, [r1, #60]!
        239824:	e1a0f00e 	mov	pc, lr
        239828:	0c104d98 	ldceq	13, cr4, [r0], -#608
    */
}

/**
 * Symbol: TXFrameFormatter::EndEdit(void)
 * Address: 0023982c
 */
TXFrameFormatter::EndEdit(void) {
    /*
        23982c:	e3a01000 	mov	r1, #0	; 0x0
        239830:	e59f0004 	ldr	r0, [pc, #4]	; 23983c <TXFrameFormatter::EndEdit(void)+0x10>
        239834:	e5801000 	str	r1, [r0]
        239838:	e1a0f00e 	mov	pc, lr
        23983c:	0c104d98 	ldceq	13, cr4, [r0], -#608
    */
}

/**
 * Symbol: TXFrameFormatter::CatchFrame(long)
 * Address: 00239840
 */
TXFrameFormatter::CatchFrame(long) {
    /*
        239840:	e59f0000 	ldr	r0, [pc, #0]	; 239848 <TXFrameFormatter::CatchFrame(long)+0x8>
        239844:	ea6553c1 	b	1b8e750 <TXFramesEditInfo::$CatchFrame(long)>
        239848:	0c104d98 	ldceq	13, cr4, [r0], -#608
    */
}

/**
 * Symbol: TXFrameFormatter::GetNextFrameEditInfo(void)
 * Address: 0023984c
 */
TXFrameFormatter::GetNextFrameEditInfo(void) {
    /*
        23984c:	e59f0000 	ldr	r0, [pc, #0]	; 239854 <TXFrameFormatter::GetNextFrameEditInfo(void)+0x8>
        239850:	ea6553c0 	b	1b8e758 <TXFramesEditInfo::$GetNext(void)>
        239854:	0c104d98 	ldceq	13, cr4, [r0], -#608
    */
}

/**
 * Symbol: TXFrameFormatter::WriteToStream(TXStream *)
 * Address: 00239858
 */
TXFrameFormatter::WriteToStream(TXStream *) {
    /*
        239858:	e3a00000 	mov	r0, #0	; 0x0
        23985c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXFrameFormatter::ReadFromStream(TXStream *)
 * Address: 00239860
 */
TXFrameFormatter::ReadFromStream(TXStream *) {
    /*
        239860:	e3a00000 	mov	r0, #0	; 0x0
        239864:	e1a0f00e 	mov	pc, lr
    */
}

