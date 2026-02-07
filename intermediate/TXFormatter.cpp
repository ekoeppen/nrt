#include "include/TXFormatter.h"

/**
 * Symbol: TXFormatter::__ct(void)
 * Address: 00237540
 */
TXFormatter::TXFormatter(void) {
    /*
        237540:	e1a0c00d 	mov	ip, sp
        237544:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        237548:	e24cb004 	sub	fp, ip, #4	; 0x4
        23754c:	e3300000 	teq	r0, #0	; 0x0
        237550:	1a000003 	bne	237564 <TXFormatter::__ct(void)+0x24>
        237554:	e3a00048 	mov	r0, #72	; 0x48
        237558:	eb665c76 	bl	1bce738 <$__nw(unsigned int)>
        23755c:	e3300000 	teq	r0, #0	; 0x0
        237560:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        237564:	e59f101c 	ldr	r1, [pc, #1c]	; 237588 <TXFormatter::__ct(void)+0x48>
        237568:	e5801000 	str	r1, [r0]
        23756c:	e3a01000 	mov	r1, #0	; 0x0
        237570:	e5801020 	str	r1, [r0, #32]	; fField32
        237574:	e5c0101c 	strb	r1, [r0, #28]	; fField28
        237578:	e5801024 	str	r1, [r0, #36]	; fField36
        23757c:	e3e01000 	mvn	r1, #0	; 0x0
        237580:	e580102c 	str	r1, [r0, #44]	; fField44
        237584:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        237588:	0001b7c8 	andeq	fp, r1, r8, asr #15
    */
}

/**
 * Symbol: TXFormatter::__dt(void)
 * Address: 0023758c
 */
TXFormatter::~TXFormatter(void) {
    /*
        23758c:	e1a0c00d 	mov	ip, sp
        237590:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        237594:	e24cb004 	sub	fp, ip, #4	; 0x4
        237598:	e1a04000 	mov	r4, r0
        23759c:	e1a05001 	mov	r5, r1
        2375a0:	e59f002c 	ldr	r0, [pc, #2c]	; 2375d4 <TXFormatter::__dt(void)+0x48>
        2375a4:	e5840000 	str	r0, [r4]
        2375a8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2375ac:	e3300000 	teq	r0, #0	; 0x0
        2375b0:	0a000002 	beq	2375c0 <TXFormatter::__dt(void)+0x34>
        2375b4:	e3a01001 	mov	r1, #1	; 0x1
        2375b8:	e1a0e00f 	mov	lr, pc
        2375bc:	e590f000 	ldr	pc, [r0]
        2375c0:	e3150001 	tst	r5, #1	; 0x1
        2375c4:	11a00004 	movne	r0, r4
        2375c8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2375cc:	1a665843 	bne	1bcd6e0 <$__dl(void *)>
        2375d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2375d4:	0001b7c8 	andeq	fp, r1, r8, asr #15
    */
}

/**
 * Symbol: TXFormatter::RemoveLines(long, long, TXFormatReflowLines *)
 * Address: 002375d8
 */
TXFormatter::RemoveLines(long, long, TXFormatReflowLines *) {
    /*
        2375d8:	e3520000 	cmp	r2, #0	; 0x0
        2375dc:	d1a0f00e 	movle	pc, lr
        2375e0:	e1a0c00d 	mov	ip, sp
        2375e4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2375e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2375ec:	e1a05000 	mov	r5, r0
        2375f0:	e1a06001 	mov	r6, r1
        2375f4:	e1a04002 	mov	r4, r2
        2375f8:	e1a07003 	mov	r7, r3
        2375fc:	e5903014 	ldr	r3, [r0, #20]	; fField20
        237600:	e1a00003 	mov	r0, r3
        237604:	e5933000 	ldr	r3, [r3]
        237608:	e1a0e00f 	mov	lr, pc
        23760c:	e283f004 	add	pc, r3, #4	; 0x4
        237610:	e1a03007 	mov	r3, r7
        237614:	e1a02006 	mov	r2, r6
        237618:	e1a01004 	mov	r1, r4
        23761c:	e595c010 	ldr	ip, [r5, #16]	; fField16
        237620:	e1a0000c 	mov	r0, ip
        237624:	e59cc000 	ldr	ip, [ip]
        237628:	e1a0e00f 	mov	lr, pc
        23762c:	e28cf014 	add	pc, ip, #20	; 0x14
        237630:	e595002c 	ldr	r0, [r5, #44]	; fField44
        237634:	e0400004 	sub	r0, r0, r4
        237638:	e5a5002c 	str	r0, [r5, #44]!	; fField44
        23763c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::RemoveFormattedLines(long, TXFormatReflowLines *)
 * Address: 00237640
 */
TXFormatter::RemoveFormattedLines(long, TXFormatReflowLines *) {
    /*
        237640:	e1a0c00d 	mov	ip, sp
        237644:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        237648:	e24cb004 	sub	fp, ip, #4	; 0x4
        23764c:	e1a04000 	mov	r4, r0
        237650:	e1a06001 	mov	r6, r1
        237654:	e5900014 	ldr	r0, [r0, #20]	; fField20
        237658:	eb653b2c 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        23765c:	e1a09000 	mov	r9, r0
        237660:	e3a05000 	mov	r5, #0	; 0x0
        237664:	e2866001 	add	r6, r6, #1	; 0x1
        237668:	e1a0a006 	mov	sl, r6
        23766c:	e594702c 	ldr	r7, [r4, #44]	; fField44
        237670:	e1560007 	cmp	r6, r7
        237674:	ca000011 	bgt	2376c0 <TXFormatter::RemoveFormattedLines(long, TXFormatReflowLines *)+0x80>
        237678:	e1a01006 	mov	r1, r6
        23767c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        237680:	eb653b22 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        237684:	e1500009 	cmp	r0, r9
        237688:	d2855001 	addle	r5, r5, #1	; 0x1
        23768c:	d1a08000 	movle	r8, r0
        237690:	d2866001 	addle	r6, r6, #1	; 0x1
        237694:	d1560007 	cmple	r6, r7
        237698:	dafffff6 	ble	237678 <TXFormatter::RemoveFormattedLines(long, TXFormatReflowLines *)+0x38>
        23769c:	e3350000 	teq	r5, #0	; 0x0
        2376a0:	0a000006 	beq	2376c0 <TXFormatter::RemoveFormattedLines(long, TXFormatReflowLines *)+0x80>
        2376a4:	e1a0100a 	mov	r1, sl
        2376a8:	e1a02005 	mov	r2, r5
        2376ac:	e1a00004 	mov	r0, r4
        2376b0:	e51b302c 	ldr	r3, [fp, -#44]	; fField44
        2376b4:	eb6553ee 	bl	1b8c674 <TXFormatter::$RemoveLines(long, long, TXFormatReflowLines *)>
        2376b8:	e1a00008 	mov	r0, r8
        2376bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2376c0:	e3e00000 	mvn	r0, #0	; 0x0
        2376c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::IsLineFeed( const(long))
 * Address: 002376c8
 */
TXFormatter::IsLineFeed( const(long)) {
    /*
        2376c8:	e1a0c00d 	mov	ip, sp
        2376cc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2376d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2376d4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2376d8:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
        2376dc:	e1a00002 	mov	r0, r2
        2376e0:	e5922000 	ldr	r2, [r2]
        2376e4:	e1a0e00f 	mov	lr, pc
        2376e8:	e282f01c 	add	pc, r2, #28	; 0x1c
        2376ec:	e1a00800 	mov	r0, r0, lsl #16
        2376f0:	e1a00820 	mov	r0, r0, lsr #16
        2376f4:	e330000a 	teq	r0, #10	; 0xa
        2376f8:	1330000d 	teqne	r0, #13	; 0xd
        2376fc:	03a00001 	moveq	r0, #1	; 0x1
        237700:	13a00000 	movne	r0, #0	; 0x0
        237704:	e20000ff 	and	r0, r0, #255	; 0xff
        237708:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::BreakVisibleChars(unsigned short const *, long, long, long, long *, TXRun *)
 * Address: 0023770c
 */
TXFormatter::BreakVisibleChars(unsigned short const *, long, long, long, long *, TXRun *) {
    /*
        23770c:	e1a0c00d 	mov	ip, sp
        237710:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        237714:	e24cb004 	sub	fp, ip, #4	; 0x4
        237718:	e1a05001 	mov	r5, r1
        23771c:	e0434002 	sub	r4, r3, r2
        237720:	e99b01c0 	ldmib	fp, {r6, r7, r8}
        237724:	e1a00008 	mov	r0, r8
        237728:	e5981000 	ldr	r1, [r8]
        23772c:	e1a0e00f 	mov	lr, pc
        237730:	e281f054 	add	pc, r1, #84	; 0x54
        237734:	e3300000 	teq	r0, #0	; 0x0
        237738:	13a02001 	movne	r2, #1	; 0x1
        23773c:	10866004 	addne	r6, r6, r4
        237740:	1a000003 	bne	237754 <TXFormatter::BreakVisibleChars(unsigned short const *, long, long, long, long *, TXRun *)+0x48>
        237744:	e3340000 	teq	r4, #0	; 0x0
        237748:	13a00000 	movne	r0, #0	; 0x0
        23774c:	03a00001 	moveq	r0, #1	; 0x1
        237750:	e20020ff 	and	r2, r0, #255	; 0xff
        237754:	e24dd004 	sub	sp, sp, #4	; 0x4
        237758:	e1a0300d 	mov	r3, sp
        23775c:	e1a01007 	mov	r1, r7
        237760:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        237764:	e1a03004 	mov	r3, r4
        237768:	e1a02006 	mov	r2, r6
        23776c:	e1a01005 	mov	r1, r5
        237770:	e1a00008 	mov	r0, r8
        237774:	e598c000 	ldr	ip, [r8]
        237778:	e1a0e00f 	mov	lr, pc
        23777c:	e28cf074 	add	pc, ip, #116	; 0x74
        237780:	e28dd00c 	add	sp, sp, #12	; 0xc
        237784:	e3300002 	teq	r0, #2	; 0x2
        237788:	13a00000 	movne	r0, #0	; 0x0
        23778c:	15870000 	strne	r0, [r7]
        237790:	e49d0004 	ldr	r0, [sp], #4	; fField4
        237794:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::BreakCtrlChar(long, long, long *)
 * Address: 00237798
 */
TXFormatter::BreakCtrlChar(long, long, long *) {
    /*
        237798:	e1a0c00d 	mov	ip, sp
        23779c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2377a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2377a4:	e1a04000 	mov	r4, r0
        2377a8:	e1a07001 	mov	r7, r1
        2377ac:	e1a06002 	mov	r6, r2
        2377b0:	e1a05003 	mov	r5, r3
        2377b4:	e59f00b0 	ldr	r0, [pc, #b0]	; 23786c <TXFormatter::BreakCtrlChar(long, long, long *)+0xd4>
        2377b8:	eb657cd8 	bl	1b96b20 <TXParagCtrlChars::$GetCurrCtrlChar(void)>
        2377bc:	e3a0a001 	mov	sl, #1	; 0x1
        2377c0:	e3300009 	teq	r0, #9	; 0x9
        2377c4:	1a000030 	bne	23788c <TXFormatter::BreakCtrlChar(long, long, long *)+0xf4>
        2377c8:	e3a09000 	mov	r9, #0	; 0x0
        2377cc:	e5953000 	ldr	r3, [r5]
        2377d0:	e3530000 	cmp	r3, #0	; 0x0
        2377d4:	d1a00009 	movle	r0, r9
        2377d8:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2377dc:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        2377e0:	e2848030 	add	r8, r4, #48	; 0x30
        2377e4:	e3300000 	teq	r0, #0	; 0x0
        2377e8:	0a000009 	beq	237814 <TXFormatter::BreakCtrlChar(long, long, long *)+0x7c>
        2377ec:	e1a01008 	mov	r1, r8
        2377f0:	e594c024 	ldr	ip, [r4, #36]	; fField36
        2377f4:	e1a0000c 	mov	r0, ip
        2377f8:	e5942040 	ldr	r2, [r4, #64]	; fField64
        2377fc:	e59cc000 	ldr	ip, [ip]
        237800:	e1a0e00f 	mov	lr, pc
        237804:	e28cf064 	add	pc, ip, #100	; 0x64
        237808:	e5951000 	ldr	r1, [r5]
        23780c:	e0410000 	sub	r0, r1, r0
        237810:	e5850000 	str	r0, [r5]
        237814:	e5940044 	ldr	r0, [r4, #68]	; fField68
        237818:	e5941028 	ldr	r1, [r4, #40]	; fField40
        23781c:	e0812000 	add	r2, r1, r0
        237820:	e594c024 	ldr	ip, [r4, #36]	; fField36
        237824:	e5953000 	ldr	r3, [r5]
        237828:	e0411003 	sub	r1, r1, r3
        23782c:	e0811000 	add	r1, r1, r0
        237830:	e1a03008 	mov	r3, r8
        237834:	e1a0000c 	mov	r0, ip
        237838:	e59cc000 	ldr	ip, [ip]
        23783c:	e1a0e00f 	mov	lr, pc
        237840:	e28cf05c 	add	pc, ip, #92	; 0x5c
        237844:	e5d41030 	ldrb	r1, [r4, #48]	; fField48
        237848:	e3310000 	teq	r1, #0	; 0x0
        23784c:	e5951000 	ldr	r1, [r5]
        237850:	0a000006 	beq	237870 <TXFormatter::BreakCtrlChar(long, long, long *)+0xd8>
        237854:	e1500001 	cmp	r0, r1
        237858:	c1a00009 	movgt	r0, r9
        23785c:	c5859000 	strgt	r9, [r5]
        237860:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        237864:	e5a49040 	str	r9, [r4, #64]!	; fField64
        237868:	ea000007 	b	23788c <TXFormatter::BreakCtrlChar(long, long, long *)+0xf4>
        23786c:	0c104de0 	ldceq	13, cr4, [r0], -#896
        237870:	e0510000 	subs	r0, r1, r0
        237874:	e5850000 	str	r0, [r5]
        237878:	5a000003 	bpl	23788c <TXFormatter::BreakCtrlChar(long, long, long *)+0xf4>
        23787c:	e1370006 	teq	r7, r6
        237880:	13a00000 	movne	r0, #0	; 0x0
        237884:	03a00001 	moveq	r0, #1	; 0x1
        237888:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23788c:	e1a0000a 	mov	r0, sl
        237890:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::BreakAlignTabChars(unsigned short const *, long, long, long, long *, TXRun *)
 * Address: 00237894
 */
TXFormatter::BreakAlignTabChars(unsigned short const *, long, long, long, long *, TXRun *) {
    /*
        237894:	e1a0c00d 	mov	ip, sp
        237898:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23789c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2378a0:	e1a04000 	mov	r4, r0
        2378a4:	e1a07001 	mov	r7, r1
        2378a8:	e1a06002 	mov	r6, r2
        2378ac:	e1a05003 	mov	r5, r3
        2378b0:	e99b0508 	ldmib	fp, {r3, r8, sl}
        2378b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2378b8:	e5b0c008 	ldr	ip, [r0, #8]!	; fField8
        2378bc:	e5d41039 	ldrb	r1, [r4, #57]	; fField57
        2378c0:	e1a02005 	mov	r2, r5
        2378c4:	e1a0000c 	mov	r0, ip
        2378c8:	e59cc000 	ldr	ip, [ip]
        2378cc:	e1a0e00f 	mov	lr, pc
        2378d0:	e28cf020 	add	pc, ip, #32	; 0x20
        2378d4:	e3500000 	cmp	r0, #0	; 0x0
        2378d8:	b3a00000 	movlt	r0, #0	; 0x0
        2378dc:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2378e0:	03a05000 	moveq	r5, #0	; 0x0
        2378e4:	0a000012 	beq	237934 <TXFormatter::BreakAlignTabChars(unsigned short const *, long, long, long, long *, TXRun *)+0xa0>
        2378e8:	e1a0300a 	mov	r3, sl
        2378ec:	e5989000 	ldr	r9, [r8]
        2378f0:	e1a02008 	mov	r2, r8
        2378f4:	e1a01000 	mov	r1, r0
        2378f8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2378fc:	e1a03005 	mov	r3, r5
        237900:	e1a02006 	mov	r2, r6
        237904:	e1a01007 	mov	r1, r7
        237908:	e1a00004 	mov	r0, r4
        23790c:	e594c000 	ldr	ip, [r4]
        237910:	e1a0e00f 	mov	lr, pc
        237914:	e28cf010 	add	pc, ip, #16	; 0x10
        237918:	e28dd00c 	add	sp, sp, #12	; 0xc
        23791c:	e1a05000 	mov	r5, r0
        237920:	e5940040 	ldr	r0, [r4, #64]	; fField64
        237924:	e5981000 	ldr	r1, [r8]
        237928:	e0491001 	sub	r1, r9, r1
        23792c:	e0800001 	add	r0, r0, r1
        237930:	e5840040 	str	r0, [r4, #64]	; fField64
        237934:	e5942040 	ldr	r2, [r4, #64]	; fField64
        237938:	e594c024 	ldr	ip, [r4, #36]	; fField36
        23793c:	e2841030 	add	r1, r4, #48	; 0x30
        237940:	e1a0000c 	mov	r0, ip
        237944:	e5983000 	ldr	r3, [r8]
        237948:	e59cc000 	ldr	ip, [ip]
        23794c:	e1a0e00f 	mov	lr, pc
        237950:	e28cf064 	add	pc, ip, #100	; 0x64
        237954:	e5981000 	ldr	r1, [r8]
        237958:	e0410000 	sub	r0, r1, r0
        23795c:	e5880000 	str	r0, [r8]
        237960:	e3a00000 	mov	r0, #0	; 0x0
        237964:	e5c40030 	strb	r0, [r4, #48]	; fField48
        237968:	e1a00005 	mov	r0, r5
        23796c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)
 * Address: 00237970
 */
TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *) {
    /*
        237970:	e1a0c00d 	mov	ip, sp
        237974:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        237978:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23797c:	e24cb014 	sub	fp, ip, #20	; 0x14
        237980:	e1a04000 	mov	r4, r0
        237984:	e1a06002 	mov	r6, r2
        237988:	e1a05003 	mov	r5, r3
        23798c:	e59b8018 	ldr	r8, [fp, #24]	; fField24
        237990:	e24dd004 	sub	sp, sp, #4	; 0x4
        237994:	e59b9014 	ldr	r9, [fp, #20]	; fField20
        237998:	e3390000 	teq	r9, #0	; 0x0
        23799c:	0a00005e 	beq	237b1c <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x1ac>
        2379a0:	e59f0048 	ldr	r0, [pc, #48]	; 2379f0 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x80>	; fField48
        2379a4:	e58d0000 	str	r0, [sp]
        2379a8:	e59d0000 	ldr	r0, [sp]
        2379ac:	eb657c5a 	bl	1b96b1c <TXParagCtrlChars::$GetCurrCtrlOffset(void)>
        2379b0:	e050a005 	subs	sl, r0, r5
        2379b4:	1a000012 	bne	237a04 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x94>
        2379b8:	e1a03008 	mov	r3, r8
        2379bc:	e1a02005 	mov	r2, r5
        2379c0:	e1a01006 	mov	r1, r6
        2379c4:	e1a00004 	mov	r0, r4
        2379c8:	e594c000 	ldr	ip, [r4]
        2379cc:	e1a0e00f 	mov	lr, pc
        2379d0:	e28cf018 	add	pc, ip, #24	; 0x18
        2379d4:	e1b07000 	movs	r7, r0
        2379d8:	0a000005 	beq	2379f4 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x84>
        2379dc:	e59f100c 	ldr	r1, [pc, #c]	; 2379f0 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x80>
        2379e0:	e591008c 	ldr	r0, [r1, #140]
        2379e4:	e2800001 	add	r0, r0, #1	; 0x1
        2379e8:	e5a1008c 	str	r0, [r1, #140]!
        2379ec:	ea000047 	b	237b10 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x1a0>
        2379f0:	0c104de0 	ldceq	13, cr4, [r0], -#896
        2379f4:	e5980000 	ldr	r0, [r8]
        2379f8:	e3500000 	cmp	r0, #0	; 0x0
        2379fc:	da000046 	ble	237b1c <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x1ac>
        237a00:	ea000042 	b	237b10 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x1a0>
        237a04:	e24dd004 	sub	sp, sp, #4	; 0x4
        237a08:	e5981000 	ldr	r1, [r8]
        237a0c:	e58d1000 	str	r1, [sp]
        237a10:	e3510000 	cmp	r1, #0	; 0x0
        237a14:	d28dd004 	addle	sp, sp, #4	; 0x4
        237a18:	da00003f 	ble	237b1c <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x1ac>
        237a1c:	e35a0000 	cmp	sl, #0	; 0x0
        237a20:	c159000a 	cmpgt	r9, sl
        237a24:	d1a0a009 	movle	sl, r9
        237a28:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        237a2c:	e3300000 	teq	r0, #0	; 0x0
        237a30:	0a00001f 	beq	237ab4 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x144>
        237a34:	e5d40038 	ldrb	r0, [r4, #56]	; fField56
        237a38:	e3300002 	teq	r0, #2	; 0x2
        237a3c:	1a00001c 	bne	237ab4 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x144>
        237a40:	e1a02008 	mov	r2, r8
        237a44:	e1a0100a 	mov	r1, sl
        237a48:	e59b301c 	ldr	r3, [fp, #28]	; fField28
        237a4c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        237a50:	e1a03005 	mov	r3, r5
        237a54:	e1a02006 	mov	r2, r6
        237a58:	e1a00004 	mov	r0, r4
        237a5c:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        237a60:	eb655708 	bl	1b8d688 <TXFormatter::$BreakAlignTabChars(unsigned short const *, long, long, long, long *, TXRun *)>
        237a64:	e28dd00c 	add	sp, sp, #12	; 0xc
        237a68:	e1a07000 	mov	r7, r0
        237a6c:	e04a1000 	sub	r1, sl, r0
        237a70:	e3510000 	cmp	r1, #0	; 0x0
        237a74:	c5980000 	ldrgt	r0, [r8]
        237a78:	c3500000 	cmpgt	r0, #0	; 0x0
        237a7c:	da000019 	ble	237ae8 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x178>
        237a80:	e1a02008 	mov	r2, r8
        237a84:	e59b301c 	ldr	r3, [fp, #28]	; fField28
        237a88:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        237a8c:	e0853007 	add	r3, r5, r7
        237a90:	e1a02006 	mov	r2, r6
        237a94:	e1a00004 	mov	r0, r4
        237a98:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        237a9c:	e594c000 	ldr	ip, [r4]
        237aa0:	e1a0e00f 	mov	lr, pc
        237aa4:	e28cf010 	add	pc, ip, #16	; 0x10
        237aa8:	e28dd00c 	add	sp, sp, #12	; 0xc
        237aac:	e0807007 	add	r7, r0, r7
        237ab0:	ea00000c 	b	237ae8 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x178>
        237ab4:	e1a02008 	mov	r2, r8
        237ab8:	e1a0100a 	mov	r1, sl
        237abc:	e59b301c 	ldr	r3, [fp, #28]	; fField28
        237ac0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        237ac4:	e1a03005 	mov	r3, r5
        237ac8:	e1a02006 	mov	r2, r6
        237acc:	e1a00004 	mov	r0, r4
        237ad0:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        237ad4:	e594c000 	ldr	ip, [r4]
        237ad8:	e1a0e00f 	mov	lr, pc
        237adc:	e28cf010 	add	pc, ip, #16	; 0x10
        237ae0:	e28dd00c 	add	sp, sp, #12	; 0xc
        237ae4:	e1a07000 	mov	r7, r0
        237ae8:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        237aec:	e3300000 	teq	r0, #0	; 0x0
        237af0:	0a000005 	beq	237b0c <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x19c>
        237af4:	e5940040 	ldr	r0, [r4, #64]	; fField64
        237af8:	e59d1000 	ldr	r1, [sp]
        237afc:	e5982000 	ldr	r2, [r8]
        237b00:	e0411002 	sub	r1, r1, r2
        237b04:	e0800001 	add	r0, r0, r1
        237b08:	e5840040 	str	r0, [r4, #64]	; fField64
        237b0c:	e28dd004 	add	sp, sp, #4	; 0x4
        237b10:	e0855007 	add	r5, r5, r7
        237b14:	e0599007 	subs	r9, r9, r7
        237b18:	1affffa2 	bne	2379a8 <TXFormatter::BreakRun(unsigned short const *, long, long, long, long *, TXRun *)+0x38>
        237b1c:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        237b20:	e0400009 	sub	r0, r0, r9
        237b24:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::CalcRunsHeight(long, long, TXRunsIterator *, TXLineHeightInfo *)
 * Address: 00237b28
 */
TXFormatter::CalcRunsHeight(long, long, TXRunsIterator *, TXLineHeightInfo *) {
    /*
        237b28:	e1a0c00d 	mov	ip, sp
        237b2c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        237b30:	e24cb004 	sub	fp, ip, #4	; 0x4
        237b34:	e1a05002 	mov	r5, r2
        237b38:	e1a04003 	mov	r4, r3
        237b3c:	e3a06000 	mov	r6, #0	; 0x0
        237b40:	e3a08000 	mov	r8, #0	; 0x0
        237b44:	e3a09000 	mov	r9, #0	; 0x0
        237b48:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        237b4c:	e9930005 	ldmib	r3, {r0, r2}
        237b50:	e0800002 	add	r0, r0, r2
        237b54:	e0407001 	sub	r7, r0, r1
        237b58:	e3570000 	cmp	r7, #0	; 0x0
        237b5c:	ca000002 	bgt	237b6c <TXFormatter::CalcRunsHeight(long, long, TXRunsIterator *, TXLineHeightInfo *)+0x44>
        237b60:	e1a00004 	mov	r0, r4
        237b64:	eb6573c3 	bl	1b94a78 <TXObjectIterator::$Next(void)>
        237b68:	e5947008 	ldr	r7, [r4, #8]	; fField8
        237b6c:	e594c00c 	ldr	ip, [r4, #12]	; fField12
        237b70:	e33c0000 	teq	ip, #0	; 0x0
        237b74:	0a00001b 	beq	237be8 <TXFormatter::CalcRunsHeight(long, long, TXRunsIterator *, TXLineHeightInfo *)+0xc0>
        237b78:	e24dd00c 	sub	sp, sp, #12	; 0xc
        237b7c:	e1a0300d 	mov	r3, sp
        237b80:	e28d2004 	add	r2, sp, #4	; 0x4
        237b84:	e28d1008 	add	r1, sp, #8	; 0x8
        237b88:	e1a0000c 	mov	r0, ip
        237b8c:	e59cc000 	ldr	ip, [ip]
        237b90:	e1a0e00f 	mov	lr, pc
        237b94:	e28cf058 	add	pc, ip, #88	; 0x58
        237b98:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        237b9c:	e1500006 	cmp	r0, r6
        237ba0:	c1a06000 	movgt	r6, r0
        237ba4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        237ba8:	e1500008 	cmp	r0, r8
        237bac:	c1a08000 	movgt	r8, r0
        237bb0:	e59d0000 	ldr	r0, [sp]
        237bb4:	e1500009 	cmp	r0, r9
        237bb8:	c1a09000 	movgt	r9, r0
        237bbc:	e0455007 	sub	r5, r5, r7
        237bc0:	e3550000 	cmp	r5, #0	; 0x0
        237bc4:	d28dd00c 	addle	sp, sp, #12	; 0xc
        237bc8:	da000006 	ble	237be8 <TXFormatter::CalcRunsHeight(long, long, TXRunsIterator *, TXLineHeightInfo *)+0xc0>
        237bcc:	e1a00004 	mov	r0, r4
        237bd0:	eb6573a8 	bl	1b94a78 <TXObjectIterator::$Next(void)>
        237bd4:	e5947008 	ldr	r7, [r4, #8]	; fField8
        237bd8:	e28dd00c 	add	sp, sp, #12	; 0xc
        237bdc:	e594c00c 	ldr	ip, [r4, #12]	; fField12
        237be0:	e33c0000 	teq	ip, #0	; 0x0
        237be4:	1affffe3 	bne	237b78 <TXFormatter::CalcRunsHeight(long, long, TXRunsIterator *, TXLineHeightInfo *)+0x50>
        237be8:	e0860008 	add	r0, r6, r8
        237bec:	e0800009 	add	r0, r0, r9
        237bf0:	e88a0041 	stmia	sl, {r0, r6}
        237bf4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)
 * Address: 00237bf8
 */
TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *) {
    /*
        237bf8:	e1a0c00d 	mov	ip, sp
        237bfc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        237c00:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        237c04:	e24cb014 	sub	fp, ip, #20	; 0x14
        237c08:	e1a04000 	mov	r4, r0
        237c0c:	e1a05001 	mov	r5, r1
        237c10:	e1a08002 	mov	r8, r2
        237c14:	e1a06003 	mov	r6, r3
        237c18:	e24dd004 	sub	sp, sp, #4	; 0x4
        237c1c:	e3520000 	cmp	r2, #0	; 0x0
        237c20:	d3a08902 	movle	r8, #32768	; 0x8000
        237c24:	d2488001 	suble	r8, r8, #1	; 0x1
        237c28:	e59f00b0 	ldr	r0, [pc, #b0]	; 237ce0 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0xe8>
        237c2c:	e5b07004 	ldr	r7, [r0, #4]!	; fField4
        237c30:	e1a09007 	mov	r9, r7
        237c34:	e3a0a000 	mov	sl, #0	; 0x0
        237c38:	e1550007 	cmp	r5, r7
        237c3c:	ba000016 	blt	237c9c <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0xa4>
        237c40:	e24dd008 	sub	sp, sp, #8	; 0x8
        237c44:	e5940004 	ldr	r0, [r4, #4]	; fField4
        237c48:	e5900008 	ldr	r0, [r0, #8]	; fField8
        237c4c:	e5901000 	ldr	r1, [r0]
        237c50:	e1a0e00f 	mov	lr, pc
        237c54:	e281f004 	add	pc, r1, #4	; 0x4
        237c58:	e1a03000 	mov	r3, r0
        237c5c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        237c60:	e1a02005 	mov	r2, r5
        237c64:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
        237c68:	e59f0070 	ldr	r0, [pc, #70]	; 237ce0 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0xe8>
        237c6c:	eb657ba9 	bl	1b96b18 <TXParagCtrlChars::$Define(TXChars *, long, long)>
        237c70:	e1a07000 	mov	r7, r0
        237c74:	e5943008 	ldr	r3, [r4, #8]	; fField8
        237c78:	e58d5000 	str	r5, [sp]
        237c7c:	e5cda004 	strb	sl, [sp, #4]	; fField4
        237c80:	e1a00003 	mov	r0, r3
        237c84:	e89d0006 	ldmia	sp, {r1, r2}
        237c88:	e5933000 	ldr	r3, [r3]
        237c8c:	e1a0e00f 	mov	lr, pc
        237c90:	e283f00c 	add	pc, r3, #12	; 0xc
        237c94:	e5840024 	str	r0, [r4, #36]	; fField36
        237c98:	e28dd008 	add	sp, sp, #8	; 0x8
        237c9c:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
        237ca0:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        237ca4:	e2811004 	add	r1, r1, #4	; 0x4
        237ca8:	e3300000 	teq	r0, #0	; 0x0
        237cac:	e58d1000 	str	r1, [sp]
        237cb0:	0a00000b 	beq	237ce4 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0xec>
        237cb4:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        237cb8:	e5817000 	str	r7, [r1]
        237cbc:	e59d3000 	ldr	r3, [sp]
        237cc0:	e92d0008 	stmdb	sp!, {r3}
        237cc4:	e0472009 	sub	r2, r7, r9
        237cc8:	e1a03006 	mov	r3, r6
        237ccc:	e1a01009 	mov	r1, r9
        237cd0:	e1a00004 	mov	r0, r4
        237cd4:	eb65566d 	bl	1b8d690 <TXFormatter::$CalcRunsHeight(long, long, TXRunsIterator *, TXLineHeightInfo *)>
        237cd8:	e28dd004 	add	sp, sp, #4	; 0x4
        237cdc:	ea0000a4 	b	237f74 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x37c>
        237ce0:	0c104de0 	ldceq	13, cr4, [r0], -#896
        237ce4:	e3350000 	teq	r5, #0	; 0x0
        237ce8:	0a000004 	beq	237d00 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x108>
        237cec:	e2451001 	sub	r1, r5, #1	; 0x1
        237cf0:	e1a00004 	mov	r0, r4
        237cf4:	eb655260 	bl	1b8c67c <TXFormatter::$IsLineFeed( const(long))>
        237cf8:	e3300000 	teq	r0, #0	; 0x0
        237cfc:	0a000001 	beq	237d08 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x110>
        237d00:	e3a00001 	mov	r0, #1	; 0x1
        237d04:	ea000000 	b	237d0c <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x114>
        237d08:	e3a00000 	mov	r0, #0	; 0x0
        237d0c:	e20010ff 	and	r1, r0, #255	; 0xff
        237d10:	e5942024 	ldr	r2, [r4, #36]	; fField36
        237d14:	e1a00002 	mov	r0, r2
        237d18:	e5922000 	ldr	r2, [r2]
        237d1c:	e1a0e00f 	mov	lr, pc
        237d20:	e282f054 	add	pc, r2, #84	; 0x54
        237d24:	e1a09000 	mov	r9, r0
        237d28:	e5940024 	ldr	r0, [r4, #36]	; fField36
        237d2c:	e5901000 	ldr	r1, [r0]
        237d30:	e1a0e00f 	mov	lr, pc
        237d34:	e281f058 	add	pc, r1, #88	; 0x58
        237d38:	e0691808 	rsb	r1, r9, r8, lsl #16
        237d3c:	e0410000 	sub	r0, r1, r0
        237d40:	e5840028 	str	r0, [r4, #40]	; fField40
        237d44:	e5849044 	str	r9, [r4, #68]	; fField68
        237d48:	e24dd00c 	sub	sp, sp, #12	; 0xc
        237d4c:	e1a09005 	mov	r9, r5
        237d50:	e3a00000 	mov	r0, #0	; 0x0
        237d54:	e3a08000 	mov	r8, #0	; 0x0
        237d58:	e58d0008 	str	r0, [sp, #8]	; fField8
        237d5c:	e58d0004 	str	r0, [sp, #4]	; fField4
        237d60:	e40d0004 	str	r0, [sp], -#4	; fField4
        237d64:	e5c4a030 	strb	sl, [r4, #48]	; fField48
        237d68:	e9960003 	ldmib	r6, {r0, r1}
        237d6c:	e0800001 	add	r0, r0, r1
        237d70:	e0401005 	sub	r1, r0, r5
        237d74:	e58d1000 	str	r1, [sp]
        237d78:	e3510000 	cmp	r1, #0	; 0x0
        237d7c:	ca000003 	bgt	237d90 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x198>
        237d80:	e1a00006 	mov	r0, r6
        237d84:	eb65733b 	bl	1b94a78 <TXObjectIterator::$Next(void)>
        237d88:	e5961008 	ldr	r1, [r6, #8]	; fField8
        237d8c:	e58d1000 	str	r1, [sp]
        237d90:	e24dd010 	sub	sp, sp, #16	; 0x10
        237d94:	e5940004 	ldr	r0, [r4, #4]	; fField4
        237d98:	e0472009 	sub	r2, r7, r9
        237d9c:	e28d300c 	add	r3, sp, #12	; 0xc
        237da0:	e1a01009 	mov	r1, r9
        237da4:	e5b0c008 	ldr	ip, [r0, #8]!	; fField8
        237da8:	e1a0000c 	mov	r0, ip
        237dac:	e59cc000 	ldr	ip, [ip]
        237db0:	e1a0e00f 	mov	lr, pc
        237db4:	e28cf018 	add	pc, ip, #24	; 0x18
        237db8:	e3a0a080 	mov	sl, #128	; 0x80
        237dbc:	e58d0008 	str	r0, [sp, #8]	; fField8
        237dc0:	e5940028 	ldr	r0, [r4, #40]	; fField40
        237dc4:	e58d0000 	str	r0, [sp]
        237dc8:	e596300c 	ldr	r3, [r6, #12]	; fField12
        237dcc:	e58d3004 	str	r3, [sp, #4]	; fField4
        237dd0:	e3330000 	teq	r3, #0	; 0x0
        237dd4:	0a000050 	beq	237f1c <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x324>
        237dd8:	e0470005 	sub	r0, r7, r5
        237ddc:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        237de0:	e1500001 	cmp	r0, r1
        237de4:	a59d1010 	ldrge	r1, [sp, #16]	; fField16
        237de8:	b1a01000 	movlt	r1, r0
        237dec:	e151000a 	cmp	r1, sl
        237df0:	c1a0100a 	movgt	r1, sl
        237df4:	e24dd004 	sub	sp, sp, #4	; 0x4
        237df8:	e59d3008 	ldr	r3, [sp, #8]	; fField8
        237dfc:	e28d2004 	add	r2, sp, #4	; 0x4
        237e00:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        237e04:	e1a03005 	mov	r3, r5
        237e08:	e1a02009 	mov	r2, r9
        237e0c:	e1a00004 	mov	r0, r4
        237e10:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        237e14:	e594c000 	ldr	ip, [r4]
        237e18:	e1a0e00f 	mov	lr, pc
        237e1c:	e28cf014 	add	pc, ip, #20	; 0x14
        237e20:	e5ad000c 	str	r0, [sp, #12]!	; fField12
        237e24:	e3500000 	cmp	r0, #0	; 0x0
        237e28:	1a000001 	bne	237e34 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x23c>
        237e2c:	e28dd004 	add	sp, sp, #4	; 0x4
        237e30:	ea000039 	b	237f1c <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x324>
        237e34:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        237e38:	e59d1000 	ldr	r1, [sp]
        237e3c:	e0800001 	add	r0, r0, r1
        237e40:	e58d0020 	str	r0, [sp, #32]	; fField32
        237e44:	aa00000c 	bge	237e7c <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x284>
        237e48:	e1a01009 	mov	r1, r9
        237e4c:	e1a00006 	mov	r0, r6
        237e50:	eb657307 	bl	1b94a74 <TXObjectIterator::$SetOffset(long)>
        237e54:	e59d3024 	ldr	r3, [sp, #36]	; fField36
        237e58:	e92d0008 	stmdb	sp!, {r3}
        237e5c:	e1a03006 	mov	r3, r6
        237e60:	e1a01009 	mov	r1, r9
        237e64:	e1a00004 	mov	r0, r4
        237e68:	e59d2024 	ldr	r2, [sp, #36]	; fField36
        237e6c:	eb655607 	bl	1b8d690 <TXFormatter::$CalcRunsHeight(long, long, TXRunsIterator *, TXLineHeightInfo *)>
        237e70:	e28dd004 	add	sp, sp, #4	; 0x4
        237e74:	e3e08000 	mvn	r8, #0	; 0x0
        237e78:	eaffffeb 	b	237e2c <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x234>
        237e7c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        237e80:	e59dc014 	ldr	ip, [sp, #20]	; fField20
        237e84:	e1a0300d 	mov	r3, sp
        237e88:	e28d2004 	add	r2, sp, #4	; 0x4
        237e8c:	e28d1008 	add	r1, sp, #8	; 0x8
        237e90:	e1a0000c 	mov	r0, ip
        237e94:	e59cc000 	ldr	ip, [ip]
        237e98:	e1a0e00f 	mov	lr, pc
        237e9c:	e28cf058 	add	pc, ip, #88	; 0x58
        237ea0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        237ea4:	e1500008 	cmp	r0, r8
        237ea8:	c1a08000 	movgt	r8, r0
        237eac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        237eb0:	e59d1028 	ldr	r1, [sp, #40]	; fField40
        237eb4:	e1500001 	cmp	r0, r1
        237eb8:	c58d0028 	strgt	r0, [sp, #40]	; fField40
        237ebc:	e59d0000 	ldr	r0, [sp]
        237ec0:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        237ec4:	e1500001 	cmp	r0, r1
        237ec8:	c58d0024 	strgt	r0, [sp, #36]	; fField36
        237ecc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        237ed0:	e0855000 	add	r5, r5, r0
        237ed4:	e04aa000 	sub	sl, sl, r0
        237ed8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        237edc:	e3500000 	cmp	r0, #0	; 0x0
        237ee0:	da000002 	ble	237ef0 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x2f8>
        237ee4:	e1350007 	teq	r5, r7
        237ee8:	133a0000 	teqne	sl, #0	; 0x0
        237eec:	1a000001 	bne	237ef8 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x300>
        237ef0:	e28dd010 	add	sp, sp, #16	; 0x10
        237ef4:	ea000008 	b	237f1c <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x324>
        237ef8:	e1a00006 	mov	r0, r6
        237efc:	eb6572dd 	bl	1b94a78 <TXObjectIterator::$Next(void)>
        237f00:	e5961008 	ldr	r1, [r6, #8]	; fField8
        237f04:	e58d1020 	str	r1, [sp, #32]	; fField32
        237f08:	e28dd010 	add	sp, sp, #16	; 0x10
        237f0c:	e596000c 	ldr	r0, [r6, #12]	; fField12
        237f10:	e58d0004 	str	r0, [sp, #4]	; fField4
        237f14:	e3300000 	teq	r0, #0	; 0x0
        237f18:	1affffae 	bne	237dd8 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x1e0>
        237f1c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        237f20:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
        237f24:	e1a00002 	mov	r0, r2
        237f28:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        237f2c:	e5922000 	ldr	r2, [r2]
        237f30:	e1a0e00f 	mov	lr, pc
        237f34:	e282f014 	add	pc, r2, #20	; 0x14
        237f38:	e3580000 	cmp	r8, #0	; 0x0
        237f3c:	ba000007 	blt	237f60 <TXFormatter::BreakLine(long, long, TXRunsIterator *, TXLineInfo *)+0x368>
        237f40:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        237f44:	e0880000 	add	r0, r8, r0
        237f48:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        237f4c:	e0800001 	add	r0, r0, r1
        237f50:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        237f54:	e5a10004 	str	r0, [r1, #4]!	; fField4
        237f58:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        237f5c:	e5a18008 	str	r8, [r1, #8]!	; fField8
        237f60:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        237f64:	e0890000 	add	r0, r9, r0
        237f68:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        237f6c:	e5810000 	str	r0, [r1]
        237f70:	e28dd020 	add	sp, sp, #32	; 0x20
        237f74:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::AppendEmptyLine(void)
 * Address: 00237f78
 */
TXFormatter::AppendEmptyLine(void) {
    /*
        237f78:	e1a0c00d 	mov	ip, sp
        237f7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        237f80:	e24cb004 	sub	fp, ip, #4	; 0x4
        237f84:	e1a04000 	mov	r4, r0
        237f88:	e3e05000 	mvn	r5, #0	; 0x0
        237f8c:	e52d500c 	str	r5, [sp, -#12]!	; fField12
        237f90:	e58d5004 	str	r5, [sp, #4]	; fField4
        237f94:	e3a06000 	mov	r6, #0	; 0x0
        237f98:	e590102c 	ldr	r1, [r0, #44]	; fField44
        237f9c:	e3510000 	cmp	r1, #0	; 0x0
        237fa0:	b58d6000 	strlt	r6, [sp]
        237fa4:	ba00002c 	blt	23805c <TXFormatter::AppendEmptyLine(void)+0xe4>
        237fa8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        237fac:	eb6538d9 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        237fb0:	e3300000 	teq	r0, #0	; 0x0
        237fb4:	0a000025 	beq	238050 <TXFormatter::AppendEmptyLine(void)+0xd8>
        237fb8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        237fbc:	e594102c 	ldr	r1, [r4, #44]	; fField44
        237fc0:	eb6538d2 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        237fc4:	e58d0000 	str	r0, [sp]
        237fc8:	e2401001 	sub	r1, r0, #1	; 0x1
        237fcc:	e1a00004 	mov	r0, r4
        237fd0:	eb6551a9 	bl	1b8c67c <TXFormatter::$IsLineFeed( const(long))>
        237fd4:	e3300000 	teq	r0, #0	; 0x0
        237fd8:	058d5000 	streq	r5, [sp]
        237fdc:	0a000031 	beq	2380a8 <TXFormatter::AppendEmptyLine(void)+0x130>
        237fe0:	e24dd008 	sub	sp, sp, #8	; 0x8
        237fe4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        237fe8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        237fec:	e5901000 	ldr	r1, [r0]
        237ff0:	e1a0e00f 	mov	lr, pc
        237ff4:	e281f004 	add	pc, r1, #4	; 0x4
        237ff8:	e58d0000 	str	r0, [sp]
        237ffc:	e5cd6004 	strb	r6, [sp, #4]	; fField4
        238000:	e5940018 	ldr	r0, [r4, #24]	; fField24
        238004:	e89d0006 	ldmia	sp, {r1, r2}
        238008:	eb65872f 	bl	1b99ccc <TXRunRange::$CharToTextRun( const(TXOffset))>
        23800c:	e3300000 	teq	r0, #0	; 0x0
        238010:	0a00000d 	beq	23804c <TXFormatter::AppendEmptyLine(void)+0xd4>
        238014:	e24dd00c 	sub	sp, sp, #12	; 0xc
        238018:	e1a0300d 	mov	r3, sp
        23801c:	e28d2004 	add	r2, sp, #4	; 0x4
        238020:	e28d1008 	add	r1, sp, #8	; 0x8
        238024:	e590c000 	ldr	ip, [r0]
        238028:	e1a0e00f 	mov	lr, pc
        23802c:	e28cf058 	add	pc, ip, #88	; 0x58
        238030:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        238034:	e58d001c 	str	r0, [sp, #28]	; fField28
        238038:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        23803c:	e0800001 	add	r0, r0, r1
        238040:	e49d100c 	ldr	r1, [sp], #12	; fField12
        238044:	e0800001 	add	r0, r0, r1
        238048:	e58d000c 	str	r0, [sp, #12]	; fField12
        23804c:	e28dd008 	add	sp, sp, #8	; 0x8
        238050:	e59d0000 	ldr	r0, [sp]
        238054:	e3500000 	cmp	r0, #0	; 0x0
        238058:	ba000012 	blt	2380a8 <TXFormatter::AppendEmptyLine(void)+0x130>
        23805c:	e52d500c 	str	r5, [sp, -#12]!	; fField12
        238060:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        238064:	e3500000 	cmp	r0, #0	; 0x0
        238068:	aa000003 	bge	23807c <TXFormatter::AppendEmptyLine(void)+0x104>
        23806c:	e3a0000c 	mov	r0, #12	; 0xc
        238070:	e58d0010 	str	r0, [sp, #16]	; fField16
        238074:	e3a00009 	mov	r0, #9	; 0x9
        238078:	e58d0014 	str	r0, [sp, #20]	; fField20
        23807c:	e1a0200d 	mov	r2, sp
        238080:	e28d100c 	add	r1, sp, #12	; 0xc
        238084:	e1a00004 	mov	r0, r4
        238088:	e5943000 	ldr	r3, [r4]
        23808c:	e1a0e00f 	mov	lr, pc
        238090:	e283f008 	add	pc, r3, #8	; 0x8
        238094:	e3300000 	teq	r0, #0	; 0x0
        238098:	13a00000 	movne	r0, #0	; 0x0
        23809c:	03a00001 	moveq	r0, #1	; 0x1
        2380a0:	e20000ff 	and	r0, r0, #255	; 0xff
        2380a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2380a8:	e1a00006 	mov	r0, r6
        2380ac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::SetHandlers(TXStyledText *, TXFrames *, TXRulerRange *, char)
 * Address: 002380b0
 */
TXFormatter::SetHandlers(TXStyledText *, TXFrames *, TXRulerRange *, char) {
    /*
        2380b0:	e1a0c00d 	mov	ip, sp
        2380b4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2380b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2380bc:	e1a04000 	mov	r4, r0
        2380c0:	e1a06001 	mov	r6, r1
        2380c4:	e1a05002 	mov	r5, r2
        2380c8:	e1a07003 	mov	r7, r3
        2380cc:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        2380d0:	e20000ff 	and	r0, r0, #255	; 0xff
        2380d4:	e3300002 	teq	r0, #2	; 0x2
        2380d8:	13a02005 	movne	r2, #5	; 0x5
        2380dc:	03a02014 	moveq	r2, #20	; 0x14
        2380e0:	e3a01004 	mov	r1, #4	; 0x4
        2380e4:	e3a00000 	mov	r0, #0	; 0x0
        2380e8:	eb653886 	bl	1b86308 <TXRanges::$__ct(unsigned char, int)>
        2380ec:	e5840014 	str	r0, [r4, #20]	; fField20
        2380f0:	e5846004 	str	r6, [r4, #4]	; fField4
        2380f4:	e5b6100c 	ldr	r1, [r6, #12]!	; fField12
        2380f8:	e5841018 	str	r1, [r4, #24]	; fField24
        2380fc:	e584500c 	str	r5, [r4, #12]	; fField12
        238100:	e5847008 	str	r7, [r4, #8]	; fField8
        238104:	e5b51004 	ldr	r1, [r5, #4]!	; fField4
        238108:	e5841010 	str	r1, [r4, #16]	; fField16
        23810c:	e5a10020 	str	r0, [r1, #32]!	; fField32
        238110:	e1a00004 	mov	r0, r4
        238114:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        238118:	ea65555e 	b	1b8d698 <TXFormatter::$AppendEmptyLine(void)>
    */
}

/**
 * Symbol: TXFormatter::FormatAll(void)
 * Address: 0023811c
 */
TXFormatter::FormatAll(void) {
    /*
        23811c:	e1a0c00d 	mov	ip, sp
        238120:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        238124:	e24cb004 	sub	fp, ip, #4	; 0x4
        238128:	e1a04000 	mov	r4, r0
        23812c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        238130:	e1a0000d 	mov	r0, sp
        238134:	eb65556d 	bl	1b8d6f0 <TXFormatReflowLines::$Reset(void)>
        238138:	e594002c 	ldr	r0, [r4, #44]	; fField44
        23813c:	e2801001 	add	r1, r0, #1	; 0x1
        238140:	e1a0300d 	mov	r3, sp
        238144:	e594c010 	ldr	ip, [r4, #16]	; fField16
        238148:	e1a0000c 	mov	r0, ip
        23814c:	e3a02000 	mov	r2, #0	; 0x0
        238150:	e59cc000 	ldr	ip, [ip]
        238154:	e1a0e00f 	mov	lr, pc
        238158:	e28cf014 	add	pc, ip, #20	; 0x14
        23815c:	e1a00004 	mov	r0, r4
        238160:	e3a01000 	mov	r1, #0	; 0x0
        238164:	eb65513b 	bl	1b8c658 <TXFormatter::$FreeData(unsigned char)>
        238168:	e3a07000 	mov	r7, #0	; 0x0
        23816c:	e52d700c 	str	r7, [sp, -#12]!	; fField12
        238170:	e24dd00c 	sub	sp, sp, #12	; 0xc
        238174:	e5940004 	ldr	r0, [r4, #4]	; fField4
        238178:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23817c:	e5901000 	ldr	r1, [r0]
        238180:	e1a0e00f 	mov	lr, pc
        238184:	e281f004 	add	pc, r1, #4	; 0x4
        238188:	e1a05000 	mov	r5, r0
        23818c:	e40d7018 	str	r7, [sp], -#24	; fField24
        238190:	e1a02007 	mov	r2, r7
        238194:	e1a0000d 	mov	r0, sp
        238198:	e5941018 	ldr	r1, [r4, #24]	; fField24
        23819c:	eb657233 	bl	1b94a70 <TXObjectIterator::$__ct(TXObjectRange const *, long)>
        2381a0:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        2381a4:	e1300005 	teq	r0, r5
        2381a8:	0a000025 	beq	238244 <TXFormatter::FormatAll(void)+0x128>
        2381ac:	e1a06004 	mov	r6, r4
        2381b0:	e28d3024 	add	r3, sp, #36	; 0x24
        2381b4:	e92d0008 	stmdb	sp!, {r3}
        2381b8:	e594200c 	ldr	r2, [r4, #12]	; fField12
        2381bc:	e1a00002 	mov	r0, r2
        2381c0:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        2381c4:	e5922000 	ldr	r2, [r2]
        2381c8:	e1a0e00f 	mov	lr, pc
        2381cc:	e282f028 	add	pc, r2, #40	; 0x28
        2381d0:	e1a02000 	mov	r2, r0
        2381d4:	e28d3004 	add	r3, sp, #4	; 0x4
        2381d8:	e1a00006 	mov	r0, r6
        2381dc:	e59d1028 	ldr	r1, [sp, #40]	; fField40
        2381e0:	e596c000 	ldr	ip, [r6]
        2381e4:	e1a0e00f 	mov	lr, pc
        2381e8:	e28cf00c 	add	pc, ip, #12	; 0xc
        2381ec:	e28dd004 	add	sp, sp, #4	; 0x4
        2381f0:	e28d2018 	add	r2, sp, #24	; 0x18
        2381f4:	e28d1024 	add	r1, sp, #36	; 0x24
        2381f8:	e1a00004 	mov	r0, r4
        2381fc:	e5943000 	ldr	r3, [r4]
        238200:	e1a0e00f 	mov	lr, pc
        238204:	e283f008 	add	pc, r3, #8	; 0x8
        238208:	e1b06000 	movs	r6, r0
        23820c:	0a000006 	beq	23822c <TXFormatter::FormatAll(void)+0x110>
        238210:	e594102c 	ldr	r1, [r4, #44]	; fField44
        238214:	e3510000 	cmp	r1, #0	; 0x0
        238218:	a1a02005 	movge	r2, r5
        23821c:	a5b40014 	ldrge	r0, [r4, #20]!	; fField20
        238220:	ab65383e 	blge	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        238224:	e1a00006 	mov	r0, r6
        238228:	ea00000a 	b	238258 <TXFormatter::FormatAll(void)+0x13c>
        23822c:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        238230:	e2800001 	add	r0, r0, #1	; 0x1
        238234:	e58d0018 	str	r0, [sp, #24]	; fField24
        238238:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        23823c:	e1300005 	teq	r0, r5
        238240:	1affffd9 	bne	2381ac <TXFormatter::FormatAll(void)+0x90>
        238244:	e1a00004 	mov	r0, r4
        238248:	eb655512 	bl	1b8d698 <TXFormatter::$AppendEmptyLine(void)>
        23824c:	e1a00004 	mov	r0, r4
        238250:	eb655101 	bl	1b8c65c <TXFormatter::$Compact(void)>
        238254:	e1a00007 	mov	r0, r7
        238258:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::CheckRulerSettings(void)
 * Address: 0023825c
 */
TXFormatter::CheckRulerSettings(void) {
    /*
        23825c:	e1a0c00d 	mov	ip, sp
        238260:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        238264:	e24cb004 	sub	fp, ip, #4	; 0x4
        238268:	e1a04000 	mov	r4, r0
        23826c:	e24dd014 	sub	sp, sp, #20	; 0x14
        238270:	e5900004 	ldr	r0, [r0, #4]	; fField4
        238274:	e5900008 	ldr	r0, [r0, #8]	; fField8
        238278:	e5901000 	ldr	r1, [r0]
        23827c:	e1a0e00f 	mov	lr, pc
        238280:	e281f004 	add	pc, r1, #4	; 0x4
        238284:	e1a0a000 	mov	sl, r0
        238288:	e3a08000 	mov	r8, #0	; 0x0
        23828c:	e3a01000 	mov	r1, #0	; 0x0
        238290:	e594000c 	ldr	r0, [r4, #12]	; fField12
        238294:	e5902000 	ldr	r2, [r0]
        238298:	e1a0e00f 	mov	lr, pc
        23829c:	e282f028 	add	pc, r2, #40	; 0x28
        2382a0:	e1a07000 	mov	r7, r0
        2382a4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2382a8:	eb657e38 	bl	1b97b90 <TXRulerRange::$NukePendingRuler(void)>
        2382ac:	e35a0000 	cmp	sl, #0	; 0x0
        2382b0:	da000073 	ble	238484 <TXFormatter::CheckRulerSettings(void)+0x228>
        2382b4:	e28d2010 	add	r2, sp, #16	; 0x10
        2382b8:	e1a01008 	mov	r1, r8
        2382bc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2382c0:	eb6571dc 	bl	1b94a38 <TXObjectRange::$GetNextObjectRange( const(long, long *))>
        2382c4:	e1a06000 	mov	r6, r0
        2382c8:	e28d200c 	add	r2, sp, #12	; 0xc
        2382cc:	e59f51b8 	ldr	r5, [pc, #1b8]	; 23848c <TXFormatter::CheckRulerSettings(void)+0x230>
        2382d0:	e1a01005 	mov	r1, r5
        2382d4:	e5903000 	ldr	r3, [r0]
        2382d8:	e1a0e00f 	mov	lr, pc
        2382dc:	e283f02c 	add	pc, r3, #44	; 0x2c
        2382e0:	e28d2008 	add	r2, sp, #8	; 0x8
        2382e4:	e1a00006 	mov	r0, r6
        2382e8:	e59f11a0 	ldr	r1, [pc, #1a0]	; 238490 <TXFormatter::CheckRulerSettings(void)+0x234>
        2382ec:	e5963000 	ldr	r3, [r6]
        2382f0:	e1a0e00f 	mov	lr, pc
        2382f4:	e283f02c 	add	pc, r3, #44	; 0x2c
        2382f8:	e28d2004 	add	r2, sp, #4	; 0x4
        2382fc:	e1a00006 	mov	r0, r6
        238300:	e59f118c 	ldr	r1, [pc, #18c]	; 238494 <TXFormatter::CheckRulerSettings(void)+0x238>
        238304:	e5963000 	ldr	r3, [r6]
        238308:	e1a0e00f 	mov	lr, pc
        23830c:	e283f02c 	add	pc, r3, #44	; 0x2c
        238310:	e1a0200d 	mov	r2, sp
        238314:	e1a00006 	mov	r0, r6
        238318:	e59f1178 	ldr	r1, [pc, #178]	; 238498 <TXFormatter::CheckRulerSettings(void)+0x23c>
        23831c:	e5963000 	ldr	r3, [r6]
        238320:	e1a0e00f 	mov	lr, pc
        238324:	e283f02c 	add	pc, r3, #44	; 0x2c
        238328:	e3a09000 	mov	r9, #0	; 0x0
        23832c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        238330:	e0470000 	sub	r0, r7, r0
        238334:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        238338:	e0400001 	sub	r0, r0, r1
        23833c:	e3500032 	cmp	r0, #50	; 0x32
        238340:	aa000007 	bge	238364 <TXFormatter::CheckRulerSettings(void)+0x108>
        238344:	e3a00000 	mov	r0, #0	; 0x0
        238348:	e58d0004 	str	r0, [sp, #4]	; fField4
        23834c:	e28d2004 	add	r2, sp, #4	; 0x4
        238350:	e1a00006 	mov	r0, r6
        238354:	e59f1138 	ldr	r1, [pc, #138]	; 238494 <TXFormatter::CheckRulerSettings(void)+0x238>
        238358:	e5963000 	ldr	r3, [r6]
        23835c:	e1a0e00f 	mov	lr, pc
        238360:	e283f030 	add	pc, r3, #48	; 0x30
        238364:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        238368:	e0472000 	sub	r2, r7, r0
        23836c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        238370:	e0421001 	sub	r1, r2, r1
        238374:	e3510032 	cmp	r1, #50	; 0x32
        238378:	aa00000a 	bge	2383a8 <TXFormatter::CheckRulerSettings(void)+0x14c>
        23837c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        238380:	e1300001 	teq	r0, r1
        238384:	03a09001 	moveq	r9, #1	; 0x1
        238388:	e3a00000 	mov	r0, #0	; 0x0
        23838c:	e58d0008 	str	r0, [sp, #8]	; fField8
        238390:	e28d2008 	add	r2, sp, #8	; 0x8
        238394:	e1a00006 	mov	r0, r6
        238398:	e59f10f0 	ldr	r1, [pc, #f0]	; 238490 <TXFormatter::CheckRulerSettings(void)+0x234>
        23839c:	e5963000 	ldr	r3, [r6]
        2383a0:	e1a0e00f 	mov	lr, pc
        2383a4:	e283f030 	add	pc, r3, #48	; 0x30
        2383a8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2383ac:	e0470000 	sub	r0, r7, r0
        2383b0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2383b4:	e0400001 	sub	r0, r0, r1
        2383b8:	e3500032 	cmp	r0, #50	; 0x32
        2383bc:	ba000001 	blt	2383c8 <TXFormatter::CheckRulerSettings(void)+0x16c>
        2383c0:	e3390000 	teq	r9, #0	; 0x0
        2383c4:	0a000007 	beq	2383e8 <TXFormatter::CheckRulerSettings(void)+0x18c>
        2383c8:	e3a00000 	mov	r0, #0	; 0x0
        2383cc:	e58d000c 	str	r0, [sp, #12]	; fField12
        2383d0:	e28d200c 	add	r2, sp, #12	; 0xc
        2383d4:	e1a00006 	mov	r0, r6
        2383d8:	e1a01005 	mov	r1, r5
        2383dc:	e5963000 	ldr	r3, [r6]
        2383e0:	e1a0e00f 	mov	lr, pc
        2383e4:	e283f030 	add	pc, r3, #48	; 0x30
        2383e8:	e59d0000 	ldr	r0, [sp]
        2383ec:	e3300000 	teq	r0, #0	; 0x0
        2383f0:	0a00001f 	beq	238474 <TXFormatter::CheckRulerSettings(void)+0x218>
        2383f4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2383f8:	e2505001 	subs	r5, r0, #1	; 0x1
        2383fc:	4a000010 	bmi	238444 <TXFormatter::CheckRulerSettings(void)+0x1e8>
        238400:	e24dd010 	sub	sp, sp, #16	; 0x10
        238404:	e1a02005 	mov	r2, r5
        238408:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        23840c:	e1a0000d 	mov	r0, sp
        238410:	eb6533ab 	bl	1b852c4 <TXTabsArray::$GetIndTab( const(long))>
        238414:	e1a0100d 	mov	r1, sp
        238418:	e28d0008 	add	r0, sp, #8	; 0x8
        23841c:	e3a02006 	mov	r2, #6	; 0x6
        238420:	eb65f18a 	bl	1bb4a50 <$memcpy>
        238424:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        238428:	e1500007 	cmp	r0, r7
        23842c:	c1a01005 	movgt	r1, r5
        238430:	c59d0010 	ldrgt	r0, [sp, #16]	; fField16
        238434:	cb65339e 	blgt	1b852b4 <TXTabsArray::$RemoveTab(long)>
        238438:	e28dd010 	add	sp, sp, #16	; 0x10
        23843c:	e2555001 	subs	r5, r5, #1	; 0x1
        238440:	5affffee 	bpl	238400 <TXFormatter::CheckRulerSettings(void)+0x1a4>
        238444:	e59d0000 	ldr	r0, [sp]
        238448:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23844c:	e3300000 	teq	r0, #0	; 0x0
        238450:	1a000007 	bne	238474 <TXFormatter::CheckRulerSettings(void)+0x218>
        238454:	e3a00000 	mov	r0, #0	; 0x0
        238458:	e58d0000 	str	r0, [sp]
        23845c:	e1a0200d 	mov	r2, sp
        238460:	e1a00006 	mov	r0, r6
        238464:	e59f102c 	ldr	r1, [pc, #2c]	; 238498 <TXFormatter::CheckRulerSettings(void)+0x23c>
        238468:	e5963000 	ldr	r3, [r6]
        23846c:	e1a0e00f 	mov	lr, pc
        238470:	e283f030 	add	pc, r3, #48	; 0x30
        238474:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        238478:	e0888000 	add	r8, r8, r0
        23847c:	e158000a 	cmp	r8, sl
        238480:	baffff8b 	blt	2382b4 <TXFormatter::CheckRulerSettings(void)+0x58>
        238484:	e3a00000 	mov	r0, #0	; 0x0
        238488:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23848c:	6e646e74 	mcrvs	14, 3, r6, cr4, cr4, {3}
        238490:	6c4d7267 	mcrrvs	2, 6, r7, sp, cr7
        238494:	724d7267 	subvc	r7, sp, #1879048198	; 0x70000006
        238498:	74616273 	strvcbt	r6, [r1], -#627
    */
}

/**
 * Symbol: TXFormatter::Format(long, long, long *, long *)
 * Address: 0023849c
 */
TXFormatter::Format(long, long, long *, long *) {
    /*
        23849c:	e1a0c00d 	mov	ip, sp
        2384a0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2384a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2384a8:	e1a04000 	mov	r4, r0
        2384ac:	e1a07001 	mov	r7, r1
        2384b0:	e1a06002 	mov	r6, r2
        2384b4:	e1b05003 	movs	r5, r3
        2384b8:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        2384bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2384c0:	01a0500d 	moveq	r5, sp
        2384c4:	01a0800d 	moveq	r8, sp
        2384c8:	e3a0a000 	mov	sl, #0	; 0x0
        2384cc:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2384d0:	e3500000 	cmp	r0, #0	; 0x0
        2384d4:	aa000008 	bge	2384fc <TXFormatter::Format(long, long, long *, long *)+0x60>
        2384d8:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2384dc:	e3500000 	cmp	r0, #0	; 0x0
        2384e0:	b1a00004 	movlt	r0, r4
        2384e4:	bb65546b 	bllt	1b8d698 <TXFormatter::$AppendEmptyLine(void)>
        2384e8:	e3e00000 	mvn	r0, #0	; 0x0
        2384ec:	e5880000 	str	r0, [r8]
        2384f0:	e5850000 	str	r0, [r5]
        2384f4:	e1a0000a 	mov	r0, sl
        2384f8:	ea00001c 	b	238570 <TXFormatter::Format(long, long, long *, long *)+0xd4>
        2384fc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        238500:	e5900008 	ldr	r0, [r0, #8]	; fField8
        238504:	e5901000 	ldr	r1, [r0]
        238508:	e1a0e00f 	mov	lr, pc
        23850c:	e281f004 	add	pc, r1, #4	; 0x4
        238510:	e1a09000 	mov	r9, r0
        238514:	e3560000 	cmp	r6, #0	; 0x0
        238518:	b1a06009 	movlt	r6, r9
        23851c:	e59f0028 	ldr	r0, [pc, #28]	; 23854c <TXFormatter::Format(long, long, long *, long *)+0xb0>	; fField28
        238520:	eb65797f 	bl	1b96b24 <TXParagCtrlChars::$Invalid(void)>
        238524:	e3370000 	teq	r7, #0	; 0x0
        238528:	e584a024 	str	sl, [r4, #36]	; fField36
        23852c:	01360009 	teqeq	r6, r9
        238530:	1a000006 	bne	238550 <TXFormatter::Format(long, long, long *, long *)+0xb4>
        238534:	e1a00004 	mov	r0, r4
        238538:	eb655457 	bl	1b8d69c <TXFormatter::$FormatAll(void)>
        23853c:	e585a000 	str	sl, [r5]
        238540:	e5b4102c 	ldr	r1, [r4, #44]!	; fField44
        238544:	e5881000 	str	r1, [r8]
        238548:	ea000008 	b	238570 <TXFormatter::Format(long, long, long *, long *)+0xd4>
        23854c:	0c104de0 	ldceq	13, cr4, [r0], -#896
        238550:	e1a03008 	mov	r3, r8
        238554:	e92d0008 	stmdb	sp!, {r3}
        238558:	e1a03005 	mov	r3, r5
        23855c:	e1a02006 	mov	r2, r6
        238560:	e1a01007 	mov	r1, r7
        238564:	e1a00004 	mov	r0, r4
        238568:	eb65544d 	bl	1b8d6a4 <TXFormatter::$FormatRange(long, long, long *, long *)>
        23856c:	e28dd004 	add	sp, sp, #4	; 0x4
        238570:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::FormatRange(long, long, long *, long *)
 * Address: 00238574
 */
TXFormatter::FormatRange(long, long, long *, long *) {
    /*
        238574:	e1a0c00d 	mov	ip, sp
        238578:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23857c:	e24cb004 	sub	fp, ip, #4	; 0x4
        238580:	e1a04000 	mov	r4, r0
        238584:	e1a06001 	mov	r6, r1
        238588:	e1a08002 	mov	r8, r2
        23858c:	e1a05003 	mov	r5, r3
        238590:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        238594:	e5900004 	ldr	r0, [r0, #4]	; fField4
        238598:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23859c:	e5901000 	ldr	r1, [r0]
        2385a0:	e1a0e00f 	mov	lr, pc
        2385a4:	e281f004 	add	pc, r1, #4	; 0x4
        2385a8:	e1a07000 	mov	r7, r0
        2385ac:	e24dd014 	sub	sp, sp, #20	; 0x14
        2385b0:	e58d8010 	str	r8, [sp, #16]	; fField16
        2385b4:	e3a08000 	mov	r8, #0	; 0x0
        2385b8:	e58d6000 	str	r6, [sp]
        2385bc:	e5cd8004 	strb	r8, [sp, #4]	; fField4
        2385c0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2385c4:	e89d0006 	ldmia	sp, {r1, r2}
        2385c8:	eb653758 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        2385cc:	e1560007 	cmp	r6, r7
        2385d0:	e58d0008 	str	r0, [sp, #8]	; fField8
        2385d4:	ba000009 	blt	238600 <TXFormatter::FormatRange(long, long, long *, long *)+0x8c>
        2385d8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2385dc:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2385e0:	eb65374c 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        2385e4:	e3300000 	teq	r0, #0	; 0x0
        2385e8:	1a000004 	bne	238600 <TXFormatter::FormatRange(long, long, long *, long *)+0x8c>
        2385ec:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
        2385f0:	e58a0000 	str	r0, [sl]
        2385f4:	e5850000 	str	r0, [r5]
        2385f8:	e1a00008 	mov	r0, r8
        2385fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        238600:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        238604:	e3300000 	teq	r0, #0	; 0x0
        238608:	0a00000d 	beq	238644 <TXFormatter::FormatRange(long, long, long *, long *)+0xd0>
        23860c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        238610:	e2401001 	sub	r1, r0, #1	; 0x1
        238614:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238618:	eb65373c 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        23861c:	e2401001 	sub	r1, r0, #1	; 0x1
        238620:	e1a00004 	mov	r0, r4
        238624:	eb655014 	bl	1b8c67c <TXFormatter::$IsLineFeed( const(long))>
        238628:	e3300000 	teq	r0, #0	; 0x0
        23862c:	1a000004 	bne	238644 <TXFormatter::FormatRange(long, long, long *, long *)+0xd0>
        238630:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        238634:	e2400001 	sub	r0, r0, #1	; 0x1
        238638:	e3a06001 	mov	r6, #1	; 0x1
        23863c:	e58d0008 	str	r0, [sp, #8]	; fField8
        238640:	ea000000 	b	238648 <TXFormatter::FormatRange(long, long, long *, long *)+0xd4>
        238644:	e3a06000 	mov	r6, #0	; 0x0
        238648:	e3e00000 	mvn	r0, #0	; 0x0
        23864c:	e5850000 	str	r0, [r5]
        238650:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238654:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        238658:	eb65372d 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        23865c:	e58d000c 	str	r0, [sp, #12]	; fField12
        238660:	e24dd00c 	sub	sp, sp, #12	; 0xc
        238664:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        238668:	e40d0018 	str	r0, [sp], -#24	; fField24
        23866c:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        238670:	e2400001 	sub	r0, r0, #1	; 0x1
        238674:	e3a08000 	mov	r8, #0	; 0x0
        238678:	e58d002c 	str	r0, [sp, #44]	; fField44
        23867c:	e5941018 	ldr	r1, [r4, #24]	; fField24
        238680:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        238684:	e1a0000d 	mov	r0, sp
        238688:	eb6570f8 	bl	1b94a70 <TXObjectIterator::$__ct(TXObjectRange const *, long)>
        23868c:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        238690:	e2800001 	add	r0, r0, #1	; 0x1
        238694:	e1a09004 	mov	r9, r4
        238698:	e58d002c 	str	r0, [sp, #44]	; fField44
        23869c:	e28d3018 	add	r3, sp, #24	; 0x18
        2386a0:	e92d0008 	stmdb	sp!, {r3}
        2386a4:	e594200c 	ldr	r2, [r4, #12]	; fField12
        2386a8:	e1a00002 	mov	r0, r2
        2386ac:	e59d1030 	ldr	r1, [sp, #48]	; fField48
        2386b0:	e5922000 	ldr	r2, [r2]
        2386b4:	e1a0e00f 	mov	lr, pc
        2386b8:	e282f028 	add	pc, r2, #40	; 0x28
        2386bc:	e1a02000 	mov	r2, r0
        2386c0:	e28d3004 	add	r3, sp, #4	; 0x4
        2386c4:	e1a00009 	mov	r0, r9
        2386c8:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        2386cc:	e599c000 	ldr	ip, [r9]
        2386d0:	e1a0e00f 	mov	lr, pc
        2386d4:	e28cf00c 	add	pc, ip, #12	; 0xc
        2386d8:	e28dd004 	add	sp, sp, #4	; 0x4
        2386dc:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2386e0:	e59d102c 	ldr	r1, [sp, #44]	; fField44
        2386e4:	e1500001 	cmp	r0, r1
        2386e8:	ba000003 	blt	2386fc <TXFormatter::FormatRange(long, long, long *, long *)+0x188>
        2386ec:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        2386f0:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        2386f4:	e1500001 	cmp	r0, r1
        2386f8:	ba00000c 	blt	238730 <TXFormatter::FormatRange(long, long, long *, long *)+0x1bc>
        2386fc:	e28d202c 	add	r2, sp, #44	; 0x2c
        238700:	e28d1018 	add	r1, sp, #24	; 0x18
        238704:	e1a00004 	mov	r0, r4
        238708:	e5943000 	ldr	r3, [r4]
        23870c:	e1a0e00f 	mov	lr, pc
        238710:	e283f008 	add	pc, r3, #8	; 0x8
        238714:	e1b08000 	movs	r8, r0
        238718:	0a000025 	beq	2387b4 <TXFormatter::FormatRange(long, long, long *, long *)+0x240>
        23871c:	e1a02007 	mov	r2, r7
        238720:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238724:	e594102c 	ldr	r1, [r4, #44]	; fField44
        238728:	eb6536fc 	bl	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        23872c:	ea000033 	b	238800 <TXFormatter::FormatRange(long, long, long *, long *)+0x28c>
        238730:	e3360000 	teq	r6, #0	; 0x0
        238734:	0a000006 	beq	238754 <TXFormatter::FormatRange(long, long, long *, long *)+0x1e0>
        238738:	e5940014 	ldr	r0, [r4, #20]	; fField20
        23873c:	e59d102c 	ldr	r1, [sp, #44]	; fField44
        238740:	eb6536f2 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        238744:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        238748:	e1300001 	teq	r0, r1
        23874c:	03a00001 	moveq	r0, #1	; 0x1
        238750:	0a000000 	beq	238758 <TXFormatter::FormatRange(long, long, long *, long *)+0x1e4>
        238754:	e3a00000 	mov	r0, #0	; 0x0
        238758:	e21090ff 	ands	r9, r0, #255	; 0xff
        23875c:	1a000006 	bne	23877c <TXFormatter::FormatRange(long, long, long *, long *)+0x208>
        238760:	e28d202c 	add	r2, sp, #44	; 0x2c
        238764:	e28d1018 	add	r1, sp, #24	; 0x18
        238768:	e1a00004 	mov	r0, r4
        23876c:	e3a03001 	mov	r3, #1	; 0x1
        238770:	e594c000 	ldr	ip, [r4]
        238774:	e1a0e00f 	mov	lr, pc
        238778:	e28cf004 	add	pc, ip, #4	; 0x4
        23877c:	e5950000 	ldr	r0, [r5]
        238780:	e3500000 	cmp	r0, #0	; 0x0
        238784:	aa000005 	bge	2387a0 <TXFormatter::FormatRange(long, long, long *, long *)+0x22c>
        238788:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        23878c:	e3390000 	teq	r9, #0	; 0x0
        238790:	e5850000 	str	r0, [r5]
        238794:	12800001 	addne	r0, r0, #1	; 0x1
        238798:	1a000004 	bne	2387b0 <TXFormatter::FormatRange(long, long, long *, long *)+0x23c>
        23879c:	ea000004 	b	2387b4 <TXFormatter::FormatRange(long, long, long *, long *)+0x240>
        2387a0:	e59d102c 	ldr	r1, [sp, #44]	; fField44
        2387a4:	e1510000 	cmp	r1, r0
        2387a8:	aa000001 	bge	2387b4 <TXFormatter::FormatRange(long, long, long *, long *)+0x240>
        2387ac:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        2387b0:	e5850000 	str	r0, [r5]
        2387b4:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2387b8:	e1300007 	teq	r0, r7
        2387bc:	0a000009 	beq	2387e8 <TXFormatter::FormatRange(long, long, long *, long *)+0x274>
        2387c0:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2387c4:	e59d1030 	ldr	r1, [sp, #48]	; fField48
        2387c8:	e1310000 	teq	r1, r0
        2387cc:	1a000007 	bne	2387f0 <TXFormatter::FormatRange(long, long, long *, long *)+0x27c>
        2387d0:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2387d4:	e59d1034 	ldr	r1, [sp, #52]
        2387d8:	e1510000 	cmp	r1, r0
        2387dc:	ca000003 	bgt	2387f0 <TXFormatter::FormatRange(long, long, long *, long *)+0x27c>
        2387e0:	e3360000 	teq	r6, #0	; 0x0
        2387e4:	1a000001 	bne	2387f0 <TXFormatter::FormatRange(long, long, long *, long *)+0x27c>
        2387e8:	e3a00001 	mov	r0, #1	; 0x1
        2387ec:	ea000000 	b	2387f4 <TXFormatter::FormatRange(long, long, long *, long *)+0x280>
        2387f0:	e3a00000 	mov	r0, #0	; 0x0
        2387f4:	e31000ff 	tst	r0, #255	; 0xff
        2387f8:	e3a06000 	mov	r6, #0	; 0x0
        2387fc:	0affffa2 	beq	23868c <TXFormatter::FormatRange(long, long, long *, long *)+0x118>
        238800:	e594102c 	ldr	r1, [r4, #44]	; fField44
        238804:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        238808:	e1310000 	teq	r1, r0
        23880c:	13a00000 	movne	r0, #0	; 0x0
        238810:	03a00001 	moveq	r0, #1	; 0x1
        238814:	e20050ff 	and	r5, r0, #255	; 0xff
        238818:	e1a00004 	mov	r0, r4
        23881c:	eb65539d 	bl	1b8d698 <TXFormatter::$AppendEmptyLine(void)>
        238820:	e3300000 	teq	r0, #0	; 0x0
        238824:	13350000 	teqne	r5, #0	; 0x0
        238828:	159d002c 	ldrne	r0, [sp, #44]	; fField44
        23882c:	12800001 	addne	r0, r0, #1	; 0x1
        238830:	158d002c 	strne	r0, [sp, #44]	; fField44
        238834:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        238838:	e58a0000 	str	r0, [sl]
        23883c:	e1a00008 	mov	r0, r8
        238840:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)
 * Address: 00238844
 */
TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *) {
    /*
        238844:	e1a0c00d 	mov	ip, sp
        238848:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23884c:	e24cb004 	sub	fp, ip, #4	; 0x4
        238850:	e1a04000 	mov	r4, r0
        238854:	e1a05001 	mov	r5, r1
        238858:	e1a06002 	mov	r6, r2
        23885c:	e1a07003 	mov	r7, r3
        238860:	e99b0608 	ldmib	fp, {r3, r9, sl}
        238864:	e1a02007 	mov	r2, r7
        238868:	e590c010 	ldr	ip, [r0, #16]	; fField16
        23886c:	e92d000c 	stmdb	sp!, {r2, r3}
        238870:	e5900004 	ldr	r0, [r0, #4]	; fField4
        238874:	e1a03006 	mov	r3, r6
        238878:	e1a02005 	mov	r2, r5
        23887c:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
        238880:	e1a0000c 	mov	r0, ip
        238884:	e59cc000 	ldr	ip, [ip]
        238888:	e1a0e00f 	mov	lr, pc
        23888c:	e28cf038 	add	pc, ip, #56	; 0x38
        238890:	e28dd008 	add	sp, sp, #8	; 0x8
        238894:	e0478006 	sub	r8, r7, r6
        238898:	e0857007 	add	r7, r5, r7
        23889c:	e3360000 	teq	r6, #0	; 0x0
        2388a0:	0a000014 	beq	2388f8 <TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)+0xb4>
        2388a4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2388a8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2388ac:	e5901000 	ldr	r1, [r0]
        2388b0:	e1a0e00f 	mov	lr, pc
        2388b4:	e281f004 	add	pc, r1, #4	; 0x4
        2388b8:	e1300007 	teq	r0, r7
        2388bc:	1a00000d 	bne	2388f8 <TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)+0xb4>
        2388c0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2388c4:	e594102c 	ldr	r1, [r4, #44]	; fField44
        2388c8:	eb653692 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        2388cc:	e3300000 	teq	r0, #0	; 0x0
        2388d0:	1a000008 	bne	2388f8 <TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)+0xb4>
        2388d4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2388d8:	e1a0000d 	mov	r0, sp
        2388dc:	eb655383 	bl	1b8d6f0 <TXFormatReflowLines::$Reset(void)>
        2388e0:	e1a0300d 	mov	r3, sp
        2388e4:	e594102c 	ldr	r1, [r4, #44]	; fField44
        2388e8:	e1a00004 	mov	r0, r4
        2388ec:	e3a02001 	mov	r2, #1	; 0x1
        2388f0:	eb654f5f 	bl	1b8c674 <TXFormatter::$RemoveLines(long, long, TXFormatReflowLines *)>
        2388f4:	e28dd00c 	add	sp, sp, #12	; 0xc
        2388f8:	e3580000 	cmp	r8, #0	; 0x0
        2388fc:	da000016 	ble	23895c <TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)+0x118>
        238900:	e3a00000 	mov	r0, #0	; 0x0
        238904:	e52d5008 	str	r5, [sp, -#8]!	; fField8
        238908:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        23890c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238910:	e89d0006 	ldmia	sp, {r1, r2}
        238914:	eb653685 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        238918:	e1a06000 	mov	r6, r0
        23891c:	e1a01006 	mov	r1, r6
        238920:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238924:	eb65367a 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        238928:	e1a02008 	mov	r2, r8
        23892c:	e1a01006 	mov	r1, r6
        238930:	e3e03000 	mvn	r3, #0	; 0x0
        238934:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238938:	eb653671 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        23893c:	e1a0300a 	mov	r3, sl
        238940:	e92d0008 	stmdb	sp!, {r3}
        238944:	e1a03009 	mov	r3, r9
        238948:	e1a02007 	mov	r2, r7
        23894c:	e1a01005 	mov	r1, r5
        238950:	e1a00004 	mov	r0, r4
        238954:	eb655351 	bl	1b8d6a0 <TXFormatter::$Format(long, long, long *, long *)>
        238958:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23895c:	e24dd020 	sub	sp, sp, #32	; 0x20
        238960:	e1a0300d 	mov	r3, sp
        238964:	e1a02006 	mov	r2, r6
        238968:	e1a01005 	mov	r1, r5
        23896c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238970:	eb65366f 	bl	1b86334 <$SectRanges__8TXRangesCFlT1P12TXSectRanges>
        238974:	e3500001 	cmp	r0, #1	; 0x1
        238978:	da00000b 	ble	2389ac <TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)+0x168>
        23897c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        238980:	e3300000 	teq	r0, #0	; 0x0
        238984:	0a000003 	beq	238998 <TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)+0x154>
        238988:	e1a02005 	mov	r2, r5
        23898c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238990:	e59d1000 	ldr	r1, [sp]
        238994:	eb653661 	bl	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        238998:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        23899c:	e3300000 	teq	r0, #0	; 0x0
        2389a0:	059d0014 	ldreq	r0, [sp, #20]	; fField20
        2389a4:	02800001 	addeq	r0, r0, #1	; 0x1
        2389a8:	058d0014 	streq	r0, [sp, #20]	; fField20
        2389ac:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        2389b0:	e1a02008 	mov	r2, r8
        2389b4:	e3e03000 	mvn	r3, #0	; 0x0
        2389b8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2389bc:	eb653650 	bl	1b86304 <TXLongTagArray::$AddToElements(long, long, long)>
        2389c0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2389c4:	e1a0000d 	mov	r0, sp
        2389c8:	eb655348 	bl	1b8d6f0 <TXFormatReflowLines::$Reset(void)>
        2389cc:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        2389d0:	e3300000 	teq	r0, #0	; 0x0
        2389d4:	0a000004 	beq	2389ec <TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)+0x1a8>
        2389d8:	e28d2018 	add	r2, sp, #24	; 0x18
        2389dc:	e8920006 	ldmia	r2, {r1, r2}
        2389e0:	e1a0300d 	mov	r3, sp
        2389e4:	e1a00004 	mov	r0, r4
        2389e8:	eb654f21 	bl	1b8c674 <TXFormatter::$RemoveLines(long, long, TXFormatReflowLines *)>
        2389ec:	e5dd0009 	ldrb	r0, [sp, #9]
        2389f0:	e3300000 	teq	r0, #0	; 0x0
        2389f4:	0a000017 	beq	238a58 <TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)+0x214>
        2389f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2389fc:	e1a0100d 	mov	r1, sp
        238a00:	e28d0004 	add	r0, sp, #4	; 0x4
        238a04:	eb65533a 	bl	1b8d6f4 <TXFormatReflowLines::$GetFirst( const(long *))>
        238a08:	e3300000 	teq	r0, #0	; 0x0
        238a0c:	0a000005 	beq	238a28 <TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)+0x1e4>
        238a10:	e59d1000 	ldr	r1, [sp]
        238a14:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238a18:	eb65363d 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        238a1c:	e1550000 	cmp	r5, r0
        238a20:	b1a00005 	movlt	r0, r5
        238a24:	e1a05000 	mov	r5, r0
        238a28:	e1a0100d 	mov	r1, sp
        238a2c:	e28d0004 	add	r0, sp, #4	; 0x4
        238a30:	eb655330 	bl	1b8d6f8 <TXFormatReflowLines::$GetLast( const(long *))>
        238a34:	e3300000 	teq	r0, #0	; 0x0
        238a38:	0a000005 	beq	238a54 <TXFormatter::ReplaceRange(long, long, long, unsigned long, long *, long *)+0x210>
        238a3c:	e59d1000 	ldr	r1, [sp]
        238a40:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238a44:	eb653631 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        238a48:	e1570000 	cmp	r7, r0
        238a4c:	c1a00007 	movgt	r0, r7
        238a50:	e1a07000 	mov	r7, r0
        238a54:	e28dd004 	add	sp, sp, #4	; 0x4
        238a58:	e1a0300a 	mov	r3, sl
        238a5c:	e92d0008 	stmdb	sp!, {r3}
        238a60:	e1a03009 	mov	r3, r9
        238a64:	e1a02007 	mov	r2, r7
        238a68:	e1a01005 	mov	r1, r5
        238a6c:	e1a00004 	mov	r0, r4
        238a70:	eb65530a 	bl	1b8d6a0 <TXFormatter::$Format(long, long, long *, long *)>
        238a74:	e28dd004 	add	sp, sp, #4	; 0x4
        238a78:	e5991000 	ldr	r1, [r9]
        238a7c:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        238a80:	e1510002 	cmp	r1, r2
        238a84:	a1a01002 	movge	r1, r2
        238a88:	e5891000 	str	r1, [r9]
        238a8c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::WriteToStream(TXStream *)
 * Address: 00238a90
 */
TXFormatter::WriteToStream(TXStream *) {
    /*
        238a90:	e1a0c00d 	mov	ip, sp
        238a94:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        238a98:	e24cb004 	sub	fp, ip, #4	; 0x4
        238a9c:	e1a05000 	mov	r5, r0
        238aa0:	e1a04001 	mov	r4, r1
        238aa4:	e590002c 	ldr	r0, [r0, #44]	; fField44
        238aa8:	e2807001 	add	r7, r0, #1	; 0x1
        238aac:	e52d7004 	str	r7, [sp, -#4]!	; fField4
        238ab0:	e1a0100d 	mov	r1, sp
        238ab4:	e1a00004 	mov	r0, r4
        238ab8:	e3a02004 	mov	r2, #4	; 0x4
        238abc:	eb658489 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        238ac0:	e28dd004 	add	sp, sp, #4	; 0x4
        238ac4:	e3300000 	teq	r0, #0	; 0x0
        238ac8:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        238acc:	e3a08000 	mov	r8, #0	; 0x0
        238ad0:	e3a06000 	mov	r6, #0	; 0x0
        238ad4:	e3570000 	cmp	r7, #0	; 0x0
        238ad8:	da000010 	ble	238b20 <TXFormatter::WriteToStream(TXStream *)+0x90>
        238adc:	e1a01006 	mov	r1, r6
        238ae0:	e5950014 	ldr	r0, [r5, #20]	; fField20
        238ae4:	eb653609 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        238ae8:	e1a09000 	mov	r9, r0
        238aec:	e0400008 	sub	r0, r0, r8
        238af0:	e56d0004 	strb	r0, [sp, -#4]!	; fField4
        238af4:	e1a0100d 	mov	r1, sp
        238af8:	e1a00004 	mov	r0, r4
        238afc:	e3a02001 	mov	r2, #1	; 0x1
        238b00:	eb658478 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        238b04:	e28dd004 	add	sp, sp, #4	; 0x4
        238b08:	e3300000 	teq	r0, #0	; 0x0
        238b0c:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        238b10:	e1a08009 	mov	r8, r9
        238b14:	e2866001 	add	r6, r6, #1	; 0x1
        238b18:	e1560007 	cmp	r6, r7
        238b1c:	baffffee 	blt	238adc <TXFormatter::WriteToStream(TXStream *)+0x4c>
        238b20:	e1a01004 	mov	r1, r4
        238b24:	e5b52010 	ldr	r2, [r5, #16]!	; fField16
        238b28:	e1a00002 	mov	r0, r2
        238b2c:	e5922000 	ldr	r2, [r2]
        238b30:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        238b34:	e282f04c 	add	pc, r2, #76	; 0x4c
    */
}

/**
 * Symbol: TXFormatter::ReadFromStream(TXStream *)
 * Address: 00238b38
 */
TXFormatter::ReadFromStream(TXStream *) {
    /*
        238b38:	e1a0c00d 	mov	ip, sp
        238b3c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        238b40:	e24cb004 	sub	fp, ip, #4	; 0x4
        238b44:	e1a04000 	mov	r4, r0
        238b48:	e1a05001 	mov	r5, r1
        238b4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        238b50:	e1a0100d 	mov	r1, sp
        238b54:	e1a00005 	mov	r0, r5
        238b58:	e3a02004 	mov	r2, #4	; 0x4
        238b5c:	eb658462 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        238b60:	e3300000 	teq	r0, #0	; 0x0
        238b64:	1a00002b 	bne	238c18 <TXFormatter::ReadFromStream(TXStream *)+0xe0>
        238b68:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238b6c:	e59d1000 	ldr	r1, [sp]
        238b70:	ebffdf5d 	bl	2308ec <TXArray::SetCount(long)>
        238b74:	e3300000 	teq	r0, #0	; 0x0
        238b78:	1a000026 	bne	238c18 <TXFormatter::ReadFromStream(TXStream *)+0xe0>
        238b7c:	e3a07000 	mov	r7, #0	; 0x0
        238b80:	e3a06000 	mov	r6, #0	; 0x0
        238b84:	e59d0000 	ldr	r0, [sp]
        238b88:	e3500000 	cmp	r0, #0	; 0x0
        238b8c:	da000010 	ble	238bd4 <TXFormatter::ReadFromStream(TXStream *)+0x9c>
        238b90:	e24dd004 	sub	sp, sp, #4	; 0x4
        238b94:	e1a0100d 	mov	r1, sp
        238b98:	e1a00005 	mov	r0, r5
        238b9c:	e3a02001 	mov	r2, #1	; 0x1
        238ba0:	eb658451 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        238ba4:	e3300000 	teq	r0, #0	; 0x0
        238ba8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        238bac:	e5dd0000 	ldrb	r0, [sp]
        238bb0:	e0877000 	add	r7, r7, r0
        238bb4:	e1a02007 	mov	r2, r7
        238bb8:	e1a01006 	mov	r1, r6
        238bbc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238bc0:	eb6535d6 	bl	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        238bc4:	e2866001 	add	r6, r6, #1	; 0x1
        238bc8:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        238bcc:	e1560000 	cmp	r6, r0
        238bd0:	baffffee 	blt	238b90 <TXFormatter::ReadFromStream(TXStream *)+0x58>
        238bd4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        238bd8:	e5901000 	ldr	r1, [r0]
        238bdc:	e1a0e00f 	mov	lr, pc
        238be0:	e281f008 	add	pc, r1, #8	; 0x8
        238be4:	e1a01005 	mov	r1, r5
        238be8:	e5942010 	ldr	r2, [r4, #16]	; fField16
        238bec:	e1a00002 	mov	r0, r2
        238bf0:	e5922000 	ldr	r2, [r2]
        238bf4:	e1a0e00f 	mov	lr, pc
        238bf8:	e282f050 	add	pc, r2, #80	; 0x50
        238bfc:	e3300000 	teq	r0, #0	; 0x0
        238c00:	1a000004 	bne	238c18 <TXFormatter::ReadFromStream(TXStream *)+0xe0>
        238c04:	e59d0000 	ldr	r0, [sp]
        238c08:	e2400001 	sub	r0, r0, #1	; 0x1
        238c0c:	e584002c 	str	r0, [r4, #44]	; fField44
        238c10:	e1a00004 	mov	r0, r4
        238c14:	eb6552a6 	bl	1b8d6b4 <TXFormatter::$CalcLinesHeights(void)>
        238c18:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::CalcLinesHeights(void)
 * Address: 00238c1c
 */
TXFormatter::CalcLinesHeights(void) {
    /*
        238c1c:	e1a0c00d 	mov	ip, sp
        238c20:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        238c24:	e24cb004 	sub	fp, ip, #4	; 0x4
        238c28:	e1a04000 	mov	r4, r0
        238c2c:	e24dd018 	sub	sp, sp, #24	; 0x18
        238c30:	e3a06000 	mov	r6, #0	; 0x0
        238c34:	e3a09000 	mov	r9, #0	; 0x0
        238c38:	e1a02009 	mov	r2, r9
        238c3c:	e5901018 	ldr	r1, [r0, #24]	; fField24
        238c40:	e1a0000d 	mov	r0, sp
        238c44:	eb656f89 	bl	1b94a70 <TXObjectIterator::$__ct(TXObjectRange const *, long)>
        238c48:	e3a05000 	mov	r5, #0	; 0x0
        238c4c:	e594802c 	ldr	r8, [r4, #44]	; fField44
        238c50:	e3580000 	cmp	r8, #0	; 0x0
        238c54:	ba000023 	blt	238ce8 <TXFormatter::CalcLinesHeights(void)+0xcc>
        238c58:	e24dd008 	sub	sp, sp, #8	; 0x8
        238c5c:	e1a01005 	mov	r1, r5
        238c60:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238c64:	eb6535ab 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        238c68:	e1a07000 	mov	r7, r0
        238c6c:	e1a0300d 	mov	r3, sp
        238c70:	e92d0008 	stmdb	sp!, {r3}
        238c74:	e28d300c 	add	r3, sp, #12	; 0xc
        238c78:	e1a02000 	mov	r2, r0
        238c7c:	e1a01006 	mov	r1, r6
        238c80:	e1a00004 	mov	r0, r4
        238c84:	eb655281 	bl	1b8d690 <TXFormatter::$CalcRunsHeight(long, long, TXRunsIterator *, TXLineHeightInfo *)>
        238c88:	e24dd004 	sub	sp, sp, #4	; 0x4
        238c8c:	e5943008 	ldr	r3, [r4, #8]	; fField8
        238c90:	e58d6000 	str	r6, [sp]
        238c94:	e5cd9004 	strb	r9, [sp, #4]	; fField4
        238c98:	e1a00003 	mov	r0, r3
        238c9c:	e89d0006 	ldmia	sp, {r1, r2}
        238ca0:	e5933000 	ldr	r3, [r3]
        238ca4:	e1a0e00f 	mov	lr, pc
        238ca8:	e283f00c 	add	pc, r3, #12	; 0xc
        238cac:	e28d1008 	add	r1, sp, #8	; 0x8
        238cb0:	e5902000 	ldr	r2, [r0]
        238cb4:	e1a0e00f 	mov	lr, pc
        238cb8:	e282f060 	add	pc, r2, #96	; 0x60
        238cbc:	e1a02005 	mov	r2, r5
        238cc0:	e28d1008 	add	r1, sp, #8	; 0x8
        238cc4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        238cc8:	eb655286 	bl	1b8d6e8 <TXLinesHeights::$InsertLineHeightInfo(TXLineHeightInfo const &, long)>
        238ccc:	e3300000 	teq	r0, #0	; 0x0
        238cd0:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        238cd4:	e0866007 	add	r6, r6, r7
        238cd8:	e28dd010 	add	sp, sp, #16	; 0x10
        238cdc:	e2855001 	add	r5, r5, #1	; 0x1
        238ce0:	e1550008 	cmp	r5, r8
        238ce4:	daffffdb 	ble	238c58 <TXFormatter::CalcLinesHeights(void)+0x3c>
        238ce8:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        238cec:	e5901000 	ldr	r1, [r0]
        238cf0:	e1a0e00f 	mov	lr, pc
        238cf4:	e281f028 	add	pc, r1, #40	; 0x28
        238cf8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::FreeData(unsigned char)
 * Address: 00238cfc
 */
TXFormatter::FreeData(unsigned char) {
    /*
        238cfc:	e1a0c00d 	mov	ip, sp
        238d00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        238d04:	e24cb004 	sub	fp, ip, #4	; 0x4
        238d08:	e1a04000 	mov	r4, r0
        238d0c:	e20150ff 	and	r5, r1, #255	; 0xff
        238d10:	e5900014 	ldr	r0, [r0, #20]	; fField20
        238d14:	e3a01001 	mov	r1, #1	; 0x1
        238d18:	e5902000 	ldr	r2, [r0]
        238d1c:	e1a0e00f 	mov	lr, pc
        238d20:	e282f008 	add	pc, r2, #8	; 0x8
        238d24:	e3e00000 	mvn	r0, #0	; 0x0
        238d28:	e3350000 	teq	r5, #0	; 0x0
        238d2c:	e584002c 	str	r0, [r4, #44]	; fField44
        238d30:	11a00004 	movne	r0, r4
        238d34:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        238d38:	1a655256 	bne	1b8d698 <TXFormatter::$AppendEmptyLine(void)>
        238d3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::Compact(void)
 * Address: 00238d40
 */
TXFormatter::Compact(void) {
    /*
        238d40:	e1a0c00d 	mov	ip, sp
        238d44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        238d48:	e24cb004 	sub	fp, ip, #4	; 0x4
        238d4c:	e1a04000 	mov	r4, r0
        238d50:	e5900014 	ldr	r0, [r0, #20]	; fField20
        238d54:	eb653165 	bl	1b852f0 <TXArray::$Compact(void)>
        238d58:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        238d5c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        238d60:	ea653162 	b	1b852f0 <TXArray::$Compact(void)>
    */
}

/**
 * Symbol: TXFormatter::ReserveLines(long)
 * Address: 00238d64
 */
TXFormatter::ReserveLines(long) {
    /*
        238d64:	e5900014 	ldr	r0, [r0, #20]	; fField20
        238d68:	ea65315f 	b	1b852ec <TXArray::$Reserve(long)>
    */
}

/**
 * Symbol: TXFormatter::CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *)
 * Address: 00238d6c
 */
TXFormatter::CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *) {
    /*
        238d6c:	e1a0c00d 	mov	ip, sp
        238d70:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        238d74:	e24cb004 	sub	fp, ip, #4	; 0x4
        238d78:	e1a04000 	mov	r4, r0
        238d7c:	e1a06001 	mov	r6, r1
        238d80:	e1a05002 	mov	r5, r2
        238d84:	e1a07003 	mov	r7, r3
        238d88:	e24dd004 	sub	sp, sp, #4	; 0x4
        238d8c:	e1a0100d 	mov	r1, sp
        238d90:	e1a00006 	mov	r0, r6
        238d94:	eb655257 	bl	1b8d6f8 <TXFormatReflowLines::$GetLast( const(long *))>
        238d98:	e3300000 	teq	r0, #0	; 0x0
        238d9c:	0a00000b 	beq	238dd0 <TXFormatter::CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *)+0x64>
        238da0:	e59d0000 	ldr	r0, [sp]
        238da4:	e594102c 	ldr	r1, [r4, #44]	; fField44
        238da8:	e1500001 	cmp	r0, r1
        238dac:	a1a00001 	movge	r0, r1
        238db0:	e58d0000 	str	r0, [sp]
        238db4:	e1a01000 	mov	r1, r0
        238db8:	e5958008 	ldr	r8, [r5, #8]	; fField8
        238dbc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238dc0:	eb653552 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        238dc4:	e1580000 	cmp	r8, r0
        238dc8:	c1a00008 	movgt	r0, r8
        238dcc:	e5850008 	str	r0, [r5, #8]	; fField8
        238dd0:	e1a0100d 	mov	r1, sp
        238dd4:	e1a00006 	mov	r0, r6
        238dd8:	eb655245 	bl	1b8d6f4 <TXFormatReflowLines::$GetFirst( const(long *))>
        238ddc:	e3300000 	teq	r0, #0	; 0x0
        238de0:	0a000003 	beq	238df4 <TXFormatter::CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *)+0x88>
        238de4:	e59d1000 	ldr	r1, [sp]
        238de8:	e5950000 	ldr	r0, [r5]
        238dec:	e1510000 	cmp	r1, r0
        238df0:	da000000 	ble	238df8 <TXFormatter::CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *)+0x8c>
        238df4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        238df8:	e24dd024 	sub	sp, sp, #36	; 0x24
        238dfc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        238e00:	eb653543 	bl	1b86314 <TXRanges::$GetRangeStart( const(long))>
        238e04:	e1a08000 	mov	r8, r0
        238e08:	e1a02000 	mov	r2, r0
        238e0c:	e28d000c 	add	r0, sp, #12	; 0xc
        238e10:	e5941018 	ldr	r1, [r4, #24]	; fField24
        238e14:	eb656f15 	bl	1b94a70 <TXObjectIterator::$__ct(TXObjectRange const *, long)>
        238e18:	e1a09004 	mov	r9, r4
        238e1c:	e1a0300d 	mov	r3, sp
        238e20:	e92d0008 	stmdb	sp!, {r3}
        238e24:	e594200c 	ldr	r2, [r4, #12]	; fField12
        238e28:	e1a00002 	mov	r0, r2
        238e2c:	e59d1028 	ldr	r1, [sp, #40]	; fField40
        238e30:	e5922000 	ldr	r2, [r2]
        238e34:	e1a0e00f 	mov	lr, pc
        238e38:	e282f028 	add	pc, r2, #40	; 0x28
        238e3c:	e1a02000 	mov	r2, r0
        238e40:	e28d3010 	add	r3, sp, #16	; 0x10
        238e44:	e1a01008 	mov	r1, r8
        238e48:	e1a00009 	mov	r0, r9
        238e4c:	e599c000 	ldr	ip, [r9]
        238e50:	e1a0e00f 	mov	lr, pc
        238e54:	e28cf00c 	add	pc, ip, #12	; 0xc
        238e58:	e28dd004 	add	sp, sp, #4	; 0x4
        238e5c:	e5d60009 	ldrb	r0, [r6, #9]
        238e60:	e3300001 	teq	r0, #1	; 0x1
        238e64:	1a00000b 	bne	238e98 <TXFormatter::CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *)+0x12c>
        238e68:	e59d0000 	ldr	r0, [sp]
        238e6c:	e5870000 	str	r0, [r7]
        238e70:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        238e74:	e5850000 	str	r0, [r5]
        238e78:	e1a02005 	mov	r2, r5
        238e7c:	e1a0100d 	mov	r1, sp
        238e80:	e1a00004 	mov	r0, r4
        238e84:	e3a03000 	mov	r3, #0	; 0x0
        238e88:	e594c000 	ldr	ip, [r4]
        238e8c:	e1a0e00f 	mov	lr, pc
        238e90:	e28cf004 	add	pc, ip, #4	; 0x4
        238e94:	ea00000b 	b	238ec8 <TXFormatter::CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *)+0x15c>
        238e98:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        238e9c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        238ea0:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        238ea4:	eb655615 	bl	1b8e700 <TXFrameFormatter::$TestFrameOverflow(long, long)>
        238ea8:	e3300000 	teq	r0, #0	; 0x0
        238eac:	0a000006 	beq	238ecc <TXFormatter::CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *)+0x160>
        238eb0:	e5b42010 	ldr	r2, [r4, #16]!	; fField16
        238eb4:	e1a00002 	mov	r0, r2
        238eb8:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        238ebc:	e5922000 	ldr	r2, [r2]
        238ec0:	e1a0e00f 	mov	lr, pc
        238ec4:	e282f024 	add	pc, r2, #36	; 0x24
        238ec8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        238ecc:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        238ed0:	e5850000 	str	r0, [r5]
        238ed4:	e59d0000 	ldr	r0, [sp]
        238ed8:	e1a02005 	mov	r2, r5
        238edc:	e1a0100d 	mov	r1, sp
        238ee0:	e5870000 	str	r0, [r7]
        238ee4:	e1a00004 	mov	r0, r4
        238ee8:	e3a03001 	mov	r3, #1	; 0x1
        238eec:	e594c000 	ldr	ip, [r4]
        238ef0:	e1a0e00f 	mov	lr, pc
        238ef4:	e28cf004 	add	pc, ip, #4	; 0x4
        238ef8:	e28dd024 	add	sp, sp, #36	; 0x24
        238efc:	eaffffbc 	b	238df4 <TXFormatter::CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *)+0x88>
    */
}

/**
 * Symbol: TXFormatter::GetLineRange( const(long, TXOffsetRange *))
 * Address: 00238f00
 */
TXFormatter::GetLineRange( const(long, TXOffsetRange *)) {
    /*
        238f00:	e1a0c00d 	mov	ip, sp
        238f04:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        238f08:	e24cb004 	sub	fp, ip, #4	; 0x4
        238f0c:	e1a04002 	mov	r4, r2
        238f10:	e24dd008 	sub	sp, sp, #8	; 0x8
        238f14:	e5900014 	ldr	r0, [r0, #20]	; fField20
        238f18:	e1a0200d 	mov	r2, sp
        238f1c:	eb6534fe 	bl	1b8631c <TXRanges::$GetRangeBounds( const(long, TXOffsetPair *))>
        238f20:	e3a03001 	mov	r3, #1	; 0x1
        238f24:	e92d0008 	stmdb	sp!, {r3}
        238f28:	e1a00004 	mov	r0, r4
        238f2c:	e3a03000 	mov	r3, #0	; 0x0
        238f30:	e99d0006 	ldmib	sp, {r1, r2}
        238f34:	ebffec54 	bl	23408c <TXOffsetRange::Set(long, long, unsigned char, unsigned char)>
        238f38:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::InsertLine(TXLineInfo *, TXFormattingInfo *)
 * Address: 00238f3c
 */
TXFormatter::InsertLine(TXLineInfo *, TXFormattingInfo *) {
    /*
        238f3c:	e1a0c00d 	mov	ip, sp
        238f40:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        238f44:	e24cb004 	sub	fp, ip, #4	; 0x4
        238f48:	e1a04000 	mov	r4, r0
        238f4c:	e1a06001 	mov	r6, r1
        238f50:	e1a05002 	mov	r5, r2
        238f54:	e5900014 	ldr	r0, [r0, #20]	; fField20
        238f58:	e5923000 	ldr	r3, [r2]
        238f5c:	e3a02001 	mov	r2, #1	; 0x1
        238f60:	eb6530de 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        238f64:	e3300000 	teq	r0, #0	; 0x0
        238f68:	03a000e9 	moveq	r0, #233	; 0xe9
        238f6c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        238f70:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        238f74:	e2867004 	add	r7, r6, #4	; 0x4
        238f78:	e5942024 	ldr	r2, [r4, #36]	; fField36
        238f7c:	e3320000 	teq	r2, #0	; 0x0
        238f80:	0a000004 	beq	238f98 <TXFormatter::InsertLine(TXLineInfo *, TXFormattingInfo *)+0x5c>
        238f84:	e1a01007 	mov	r1, r7
        238f88:	e1a00002 	mov	r0, r2
        238f8c:	e5922000 	ldr	r2, [r2]
        238f90:	e1a0e00f 	mov	lr, pc
        238f94:	e282f060 	add	pc, r2, #96	; 0x60
        238f98:	e24dd00c 	sub	sp, sp, #12	; 0xc
        238f9c:	e1a0000d 	mov	r0, sp
        238fa0:	eb6551d2 	bl	1b8d6f0 <TXFormatReflowLines::$Reset(void)>
        238fa4:	e1a01007 	mov	r1, r7
        238fa8:	e594c010 	ldr	ip, [r4, #16]	; fField16
        238fac:	e1a0200d 	mov	r2, sp
        238fb0:	e1a0000c 	mov	r0, ip
        238fb4:	e5953000 	ldr	r3, [r5]
        238fb8:	e59cc000 	ldr	ip, [ip]
        238fbc:	e1a0e00f 	mov	lr, pc
        238fc0:	e28cf00c 	add	pc, ip, #12	; 0xc
        238fc4:	e594002c 	ldr	r0, [r4, #44]	; fField44
        238fc8:	e2800001 	add	r0, r0, #1	; 0x1
        238fcc:	e584002c 	str	r0, [r4, #44]	; fField44
        238fd0:	e5dd0009 	ldrb	r0, [sp, #9]
        238fd4:	e3300000 	teq	r0, #0	; 0x0
        238fd8:	0a000004 	beq	238ff0 <TXFormatter::InsertLine(TXLineInfo *, TXFormattingInfo *)+0xb4>
        238fdc:	e1a03006 	mov	r3, r6
        238fe0:	e1a02005 	mov	r2, r5
        238fe4:	e1a0100d 	mov	r1, sp
        238fe8:	e1a00004 	mov	r0, r4
        238fec:	eb654d9c 	bl	1b8c664 <TXFormatter::$CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *)>
        238ff0:	e3a00000 	mov	r0, #0	; 0x0
        238ff4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXFormatter::SetLineInfo(TXLineInfo *, TXFormattingInfo *, unsigned char)
 * Address: 00238ff8
 */
TXFormatter::SetLineInfo(TXLineInfo *, TXFormattingInfo *, unsigned char) {
    /*
        238ff8:	e1a0c00d 	mov	ip, sp
        238ffc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        239000:	e24cb004 	sub	fp, ip, #4	; 0x4
        239004:	e1a05000 	mov	r5, r0
        239008:	e1a06001 	mov	r6, r1
        23900c:	e1a04002 	mov	r4, r2
        239010:	e20380ff 	and	r8, r3, #255	; 0xff
        239014:	e5900014 	ldr	r0, [r0, #20]	; fField20
        239018:	e5921000 	ldr	r1, [r2]
        23901c:	eb6534bb 	bl	1b86310 <TXRanges::$GetRangeEnd( const(long))>
        239020:	e5840004 	str	r0, [r4, #4]	; fField4
        239024:	e5950014 	ldr	r0, [r5, #20]	; fField20
        239028:	e5962000 	ldr	r2, [r6]
        23902c:	e5941000 	ldr	r1, [r4]
        239030:	eb6534ba 	bl	1b86320 <TXRanges::$SetRangeEnd(long, long)>
        239034:	e2867004 	add	r7, r6, #4	; 0x4
        239038:	e5952024 	ldr	r2, [r5, #36]	; fField36
        23903c:	e3320000 	teq	r2, #0	; 0x0
        239040:	0a000004 	beq	239058 <TXFormatter::SetLineInfo(TXLineInfo *, TXFormattingInfo *, unsigned char)+0x60>
        239044:	e1a01007 	mov	r1, r7
        239048:	e1a00002 	mov	r0, r2
        23904c:	e5922000 	ldr	r2, [r2]
        239050:	e1a0e00f 	mov	lr, pc
        239054:	e282f060 	add	pc, r2, #96	; 0x60
        239058:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23905c:	e1a0000d 	mov	r0, sp
        239060:	eb6551a2 	bl	1b8d6f0 <TXFormatReflowLines::$Reset(void)>
        239064:	e5cd8008 	strb	r8, [sp, #8]	; fField8
        239068:	e1a01007 	mov	r1, r7
        23906c:	e1a0300d 	mov	r3, sp
        239070:	e595c010 	ldr	ip, [r5, #16]	; fField16
        239074:	e1a0000c 	mov	r0, ip
        239078:	e5942000 	ldr	r2, [r4]
        23907c:	e59cc000 	ldr	ip, [ip]
        239080:	e1a0e00f 	mov	lr, pc
        239084:	e28cf010 	add	pc, ip, #16	; 0x10
        239088:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23908c:	e5961000 	ldr	r1, [r6]
        239090:	e1300001 	teq	r0, r1
        239094:	0a000005 	beq	2390b0 <TXFormatter::SetLineInfo(TXLineInfo *, TXFormattingInfo *, unsigned char)+0xb8>
        239098:	e1a0200d 	mov	r2, sp
        23909c:	e1a00005 	mov	r0, r5
        2390a0:	e5941000 	ldr	r1, [r4]
        2390a4:	eb654d73 	bl	1b8c678 <TXFormatter::$RemoveFormattedLines(long, TXFormatReflowLines *)>
        2390a8:	e3500000 	cmp	r0, #0	; 0x0
        2390ac:	a5840004 	strge	r0, [r4, #4]	; fField4
        2390b0:	e5dd0009 	ldrb	r0, [sp, #9]
        2390b4:	e3300000 	teq	r0, #0	; 0x0
        2390b8:	0a000004 	beq	2390d0 <TXFormatter::SetLineInfo(TXLineInfo *, TXFormattingInfo *, unsigned char)+0xd8>
        2390bc:	e1a03006 	mov	r3, r6
        2390c0:	e1a02004 	mov	r2, r4
        2390c4:	e1a0100d 	mov	r1, sp
        2390c8:	e1a00005 	mov	r0, r5
        2390cc:	eb654d64 	bl	1b8c664 <TXFormatter::$CheckFramesReflow(TXFormatReflowLines const &, TXFormattingInfo *, long *)>
        2390d0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

