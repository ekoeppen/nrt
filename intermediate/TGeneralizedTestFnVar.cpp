#include "include/TGeneralizedTestFnVar.h"

/**
 * Symbol: TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)
 * Address: 0031661c
 */
TGeneralizedTestFnVar::TGeneralizedTestFnVar(RefVar const &, RefVar const &, int) {
    /*
        31661c:	e1a0c00d 	mov	ip, sp
        316620:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        316624:	e24cb004 	sub	fp, ip, #4	; 0x4
        316628:	e1b04000 	movs	r4, r0
        31662c:	e1a05001 	mov	r5, r1
        316630:	e1a06002 	mov	r6, r2
        316634:	e1a07003 	mov	r7, r3
        316638:	1a000003 	bne	31664c <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x30>
        31663c:	e3a00024 	mov	r0, #36	; 0x24
        316640:	eb62e03c 	bl	1bce738 <$__nw(unsigned int)>
        316644:	e1b04000 	movs	r4, r0
        316648:	0a0000c2 	beq	316958 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x33c>
        31664c:	e3a00002 	mov	r0, #2	; 0x2
        316650:	eb62aebd 	bl	1bc214c <$AllocateRefHandle(long)>
        316654:	e5840008 	str	r0, [r4, #8]
        316658:	e3a00002 	mov	r0, #2	; 0x2
        31665c:	eb62aeba 	bl	1bc214c <$AllocateRefHandle(long)>
        316660:	e584000c 	str	r0, [r4, #12]
        316664:	e3a00002 	mov	r0, #2	; 0x2
        316668:	eb62aeb7 	bl	1bc214c <$AllocateRefHandle(long)>
        31666c:	e5840010 	str	r0, [r4, #16]
        316670:	e3a00002 	mov	r0, #2	; 0x2
        316674:	eb62aeb4 	bl	1bc214c <$AllocateRefHandle(long)>
        316678:	e5840014 	str	r0, [r4, #20]
        31667c:	e3a00002 	mov	r0, #2	; 0x2
        316680:	eb62aeb1 	bl	1bc214c <$AllocateRefHandle(long)>
        316684:	e5840018 	str	r0, [r4, #24]	; fField24
        316688:	e3a00002 	mov	r0, #2	; 0x2
        31668c:	eb62aeae 	bl	1bc214c <$AllocateRefHandle(long)>
        316690:	e584001c 	str	r0, [r4, #28]
        316694:	e5950000 	ldr	r0, [r5]
        316698:	e5900000 	ldr	r0, [r0]
        31669c:	eb62bb00 	bl	1bc52a4 <$IsSymbol(long)>
        3166a0:	e3a09000 	mov	r9, #0	; 0x0
        3166a4:	e3a08001 	mov	r8, #1	; 0x1
        3166a8:	e3a0a002 	mov	sl, #2	; 0x2
        3166ac:	e3300000 	teq	r0, #0	; 0x0
        3166b0:	0a00007f 	beq	3168b4 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x298>
        3166b4:	e5950000 	ldr	r0, [r5]
        3166b8:	e5900000 	ldr	r0, [r0]
        3166bc:	e59f10bc 	ldr	r1, [pc, #bc]	; 316780 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x164>
        3166c0:	e5911000 	ldr	r1, [r1]
        3166c4:	e5911000 	ldr	r1, [r1]
        3166c8:	eb62b6d8 	bl	1bc4230 <$EQRef__FlT1>
        3166cc:	e3300000 	teq	r0, #0	; 0x0
        3166d0:	159f00ac 	ldrne	r0, [pc, #ac]	; 316784 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x168>
        3166d4:	1a00004b 	bne	316808 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x1ec>
        3166d8:	e5950000 	ldr	r0, [r5]
        3166dc:	e5900000 	ldr	r0, [r0]
        3166e0:	e59f10a0 	ldr	r1, [pc, #a0]	; 316788 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x16c>
        3166e4:	e5911000 	ldr	r1, [r1]
        3166e8:	e5911000 	ldr	r1, [r1]
        3166ec:	eb62b6cf 	bl	1bc4230 <$EQRef__FlT1>
        3166f0:	e3300000 	teq	r0, #0	; 0x0
        3166f4:	159f0088 	ldrne	r0, [pc, #88]	; 316784 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x168>
        3166f8:	1a000053 	bne	31684c <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x230>
        3166fc:	e5950000 	ldr	r0, [r5]
        316700:	e5900000 	ldr	r0, [r0]
        316704:	e59f1080 	ldr	r1, [pc, #80]	; 31678c <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x170>
        316708:	e5911000 	ldr	r1, [r1]
        31670c:	e5911000 	ldr	r1, [r1]
        316710:	eb62b6c6 	bl	1bc4230 <$EQRef__FlT1>
        316714:	e3300000 	teq	r0, #0	; 0x0
        316718:	159f0070 	ldrne	r0, [pc, #70]	; 316790 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x174>
        31671c:	1a000039 	bne	316808 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x1ec>
        316720:	e5950000 	ldr	r0, [r5]
        316724:	e5900000 	ldr	r0, [r0]
        316728:	e59f1064 	ldr	r1, [pc, #64]	; 316794 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x178>
        31672c:	e5911000 	ldr	r1, [r1]
        316730:	e5911000 	ldr	r1, [r1]
        316734:	eb62b6bd 	bl	1bc4230 <$EQRef__FlT1>
        316738:	e3300000 	teq	r0, #0	; 0x0
        31673c:	159f004c 	ldrne	r0, [pc, #4c]	; 316790 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x174>	; fField4
        316740:	1a000041 	bne	31684c <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x230>
        316744:	e5950000 	ldr	r0, [r5]
        316748:	e5900000 	ldr	r0, [r0]
        31674c:	e59f1044 	ldr	r1, [pc, #44]	; 316798 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x17c>
        316750:	e5911000 	ldr	r1, [r1]
        316754:	e5911000 	ldr	r1, [r1]
        316758:	eb62b6b4 	bl	1bc4230 <$EQRef__FlT1>
        31675c:	e3300000 	teq	r0, #0	; 0x0
        316760:	0a00000d 	beq	31679c <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x180>
        316764:	e3370000 	teq	r7, #0	; 0x0
        316768:	01a01005 	moveq	r1, r5
        31676c:	03a000ae 	moveq	r0, #174	; 0xae
        316770:	02400cbd 	subeq	r0, r0, #48384	; 0xbd00
        316774:	0b5cb6ae 	bleq	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        316778:	e59f0010 	ldr	r0, [pc, #10]	; 316790 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x174>
        31677c:	ea000053 	b	3168d0 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x2b4>
        316780:	00681cc8 	rsbeq	r1, r8, r8, asr #25
        316784:	01a58c1c 	moveq	r8, ip, lsl ip
        316788:	00681cf0 	streqd	r1, [r8], -#192
        31678c:	006848b0 	streqh	r4, [r8], -#128
        316790:	01a58c28 	moveq	r8, r8, lsr #24
        316794:	006848c0 	rsbeq	r4, r8, r0, asr #17
        316798:	006848b8 	streqh	r4, [r8], -#136
        31679c:	e5950000 	ldr	r0, [r5]
        3167a0:	e5900000 	ldr	r0, [r0]
        3167a4:	e59f1068 	ldr	r1, [pc, #68]	; 316814 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x1f8>
        3167a8:	e5911000 	ldr	r1, [r1]
        3167ac:	e5911000 	ldr	r1, [r1]
        3167b0:	eb62b69e 	bl	1bc4230 <$EQRef__FlT1>
        3167b4:	e3300000 	teq	r0, #0	; 0x0
        3167b8:	159f0058 	ldrne	r0, [pc, #58]	; 316818 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x1fc>
        3167bc:	1a000011 	bne	316808 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x1ec>
        3167c0:	e5950000 	ldr	r0, [r5]
        3167c4:	e5900000 	ldr	r0, [r0]
        3167c8:	e59f104c 	ldr	r1, [pc, #4c]	; 31681c <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x200>	; fField4
        3167cc:	e5911000 	ldr	r1, [r1]
        3167d0:	e5911000 	ldr	r1, [r1]
        3167d4:	eb62b695 	bl	1bc4230 <$EQRef__FlT1>
        3167d8:	e3300000 	teq	r0, #0	; 0x0
        3167dc:	159f0034 	ldrne	r0, [pc, #34]	; 316818 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x1fc>
        3167e0:	1a000019 	bne	31684c <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x230>
        3167e4:	e5950000 	ldr	r0, [r5]
        3167e8:	e5900000 	ldr	r0, [r0]
        3167ec:	e59f102c 	ldr	r1, [pc, #2c]	; 316820 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x204>
        3167f0:	e5911000 	ldr	r1, [r1]
        3167f4:	e5911000 	ldr	r1, [r1]
        3167f8:	eb62b68c 	bl	1bc4230 <$EQRef__FlT1>
        3167fc:	e3300000 	teq	r0, #0	; 0x0
        316800:	0a000008 	beq	316828 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x20c>
        316804:	e59f0018 	ldr	r0, [pc, #18]	; 316824 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x208>
        316808:	e5840020 	str	r0, [r4, #32]
        31680c:	e5849000 	str	r9, [r4]
        316810:	ea000030 	b	3168d8 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x2bc>
        316814:	006823e0 	rsbeq	r2, r8, r0, ror #7
        316818:	01a610f4 	streqd	r1, [r6, r4]!
        31681c:	006823e8 	rsbeq	r2, r8, r8, ror #7
        316820:	00684960 	rsbeq	r4, r8, r0, ror #18
        316824:	01a58c24 	moveq	r8, r4, lsr #24
        316828:	e5950000 	ldr	r0, [r5]
        31682c:	e5900000 	ldr	r0, [r0]
        316830:	e59f1020 	ldr	r1, [pc, #20]	; 316858 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x23c>
        316834:	e5911000 	ldr	r1, [r1]
        316838:	e5911000 	ldr	r1, [r1]
        31683c:	eb62b67b 	bl	1bc4230 <$EQRef__FlT1>
        316840:	e3300000 	teq	r0, #0	; 0x0
        316844:	0a000004 	beq	31685c <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x240>
        316848:	e51f002c 	ldr	r0, [pc, #ffffffd4]	; 316824 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x208>
        31684c:	e5840020 	str	r0, [r4, #32]
        316850:	e5848000 	str	r8, [r4]
        316854:	ea00001f 	b	3168d8 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x2bc>
        316858:	00684968 	rsbeq	r4, r8, r8, ror #18
        31685c:	e5950000 	ldr	r0, [r5]
        316860:	e5900000 	ldr	r0, [r0]
        316864:	e59f102c 	ldr	r1, [pc, #2c]	; 316898 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x27c>
        316868:	e5911000 	ldr	r1, [r1]
        31686c:	e5911000 	ldr	r1, [r1]
        316870:	eb62b66e 	bl	1bc4230 <$EQRef__FlT1>
        316874:	e3300000 	teq	r0, #0	; 0x0
        316878:	0a000008 	beq	3168a0 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x284>
        31687c:	e3370000 	teq	r7, #0	; 0x0
        316880:	01a01005 	moveq	r1, r5
        316884:	03a000ae 	moveq	r0, #174	; 0xae
        316888:	02400cbd 	subeq	r0, r0, #48384	; 0xbd00
        31688c:	0b5cb668 	bleq	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        316890:	e59f0004 	ldr	r0, [pc, #4]	; 31689c <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x280>	; fField4
        316894:	ea00000d 	b	3168d0 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x2b4>
        316898:	00681ce8 	rsbeq	r1, r8, r8, ror #25
        31689c:	01a58c08 	moveq	r8, r8, lsl #24
        3168a0:	e1a01005 	mov	r1, r5
        3168a4:	e3a000ae 	mov	r0, #174	; 0xae
        3168a8:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        3168ac:	eb5cb660 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        3168b0:	ea000008 	b	3168d8 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x2bc>
        3168b4:	e5951000 	ldr	r1, [r5]
        3168b8:	e5911000 	ldr	r1, [r1]
        3168bc:	e5940008 	ldr	r0, [r4, #8]
        3168c0:	e3370000 	teq	r7, #0	; 0x0
        3168c4:	e5801000 	str	r1, [r0]
        3168c8:	059f0068 	ldreq	r0, [pc, #68]	; 316938 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x31c>
        3168cc:	159f0068 	ldrne	r0, [pc, #68]	; 31693c <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x320>
        3168d0:	e5840020 	str	r0, [r4, #32]
        3168d4:	e584a000 	str	sl, [r4]
        3168d8:	e5960000 	ldr	r0, [r6]
        3168dc:	e5900000 	ldr	r0, [r0]
        3168e0:	e3300002 	teq	r0, #2	; 0x2
        3168e4:	05849004 	streq	r9, [r4, #4]	; fField4
        3168e8:	0a00001a 	beq	316958 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x33c>
        3168ec:	e3100003 	tst	r0, #3	; 0x3
        3168f0:	0a00000a 	beq	316920 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x304>
        3168f4:	eb62ba6a 	bl	1bc52a4 <$IsSymbol(long)>
        3168f8:	e3300000 	teq	r0, #0	; 0x0
        3168fc:	1a000007 	bne	316920 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x304>
        316900:	e1a00006 	mov	r0, r6
        316904:	eb62ae17 	bl	1bc2168 <$ClassOf(RefVar const &)>
        316908:	e59f1030 	ldr	r1, [pc, #30]	; 316940 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x324>
        31690c:	e5911000 	ldr	r1, [r1]
        316910:	e5911000 	ldr	r1, [r1]
        316914:	eb62b645 	bl	1bc4230 <$EQRef__FlT1>
        316918:	e3300000 	teq	r0, #0	; 0x0
        31691c:	0a000008 	beq	316944 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x328>
        316920:	e5961000 	ldr	r1, [r6]
        316924:	e5911000 	ldr	r1, [r1]
        316928:	e5940014 	ldr	r0, [r4, #20]
        31692c:	e5801000 	str	r1, [r0]
        316930:	e5848004 	str	r8, [r4, #4]	; fField4
        316934:	ea000007 	b	316958 <TGeneralizedTestFnVar::__ct(RefVar const &, RefVar const &, int)+0x33c>
        316938:	01a58c00 	moveq	r8, r0, lsl #24
        31693c:	01a58c04 	moveq	r8, r4, lsl #24
        316940:	00683d78 	rsbeq	r3, r8, r8, ror sp
        316944:	e5961000 	ldr	r1, [r6]
        316948:	e5911000 	ldr	r1, [r1]
        31694c:	e5940014 	ldr	r0, [r4, #20]
        316950:	e5801000 	str	r1, [r0]
        316954:	e584a004 	str	sl, [r4, #4]	; fField4
        316958:	e1a00004 	mov	r0, r4
        31695c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralizedTestFnVar::ApplyKey(RefVar const &)
 * Address: 00316960
 */
TGeneralizedTestFnVar::ApplyKey(RefVar const &) {
    /*
        316960:	e5903004 	ldr	r3, [r0, #4]	; fField4
        316964:	e3330000 	teq	r3, #0	; 0x0
        316968:	05910000 	ldreq	r0, [r1]
        31696c:	05900000 	ldreq	r0, [r0]
        316970:	01a0f00e 	moveq	pc, lr
        316974:	e2800014 	add	r0, r0, #20	; 0x14
        316978:	e3330001 	teq	r3, #1	; 0x1
        31697c:	0a000003 	beq	316990 <TGeneralizedTestFnVar::ApplyKey(RefVar const &)+0x30>
        316980:	e3330002 	teq	r3, #2	; 0x2
        316984:	0a63a59e 	beq	1c00004 <$NSCall__FRC6RefVarT1>
        316988:	13a00002 	movne	r0, #2	; 0x2
        31698c:	e1a0f00e 	mov	pc, lr
        316990:	e1a02000 	mov	r2, r0
        316994:	e1a00001 	mov	r0, r1
        316998:	e1a01002 	mov	r1, r2
        31699c:	ea62b62e 	b	1bc425c <$GetFramePath__FRC6RefVarT1>
    */
}

/**
 * Symbol: TGeneralizedTestFnVar::ApplyKey(long *)
 * Address: 003169a0
 */
TGeneralizedTestFnVar::ApplyKey(long *) {
    /*
        3169a0:	e1a0c00d 	mov	ip, sp
        3169a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3169a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3169ac:	e5902004 	ldr	r2, [r0, #4]	; fField4
        3169b0:	e3320000 	teq	r2, #0	; 0x0
        3169b4:	0a00000d 	beq	3169f0 <TGeneralizedTestFnVar::ApplyKey(long *)+0x50>
        3169b8:	e2804014 	add	r4, r0, #20	; 0x14
        3169bc:	e3320001 	teq	r2, #1	; 0x1
        3169c0:	0a00000d 	beq	3169fc <TGeneralizedTestFnVar::ApplyKey(long *)+0x5c>
        3169c4:	e3320002 	teq	r2, #2	; 0x2
        3169c8:	13a00002 	movne	r0, #2	; 0x2
        3169cc:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        3169d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3169d4:	e5911000 	ldr	r1, [r1]
        3169d8:	e5b02018 	ldr	r2, [r0, #24]!	; fField24
        3169dc:	e5821000 	str	r1, [r2]
        3169e0:	e1a01000 	mov	r1, r0
        3169e4:	e1a00004 	mov	r0, r4
        3169e8:	eb63a585 	bl	1c00004 <$NSCall__FRC6RefVarT1>
        3169ec:	ea00000d 	b	316a28 <TGeneralizedTestFnVar::ApplyKey(long *)+0x88>
        3169f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3169f4:	e5910000 	ldr	r0, [r1]
        3169f8:	ea00000a 	b	316a28 <TGeneralizedTestFnVar::ApplyKey(long *)+0x88>
        3169fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        316a00:	e5910000 	ldr	r0, [r1]
        316a04:	eb62add0 	bl	1bc214c <$AllocateRefHandle(long)>
        316a08:	e58d0000 	str	r0, [sp]
        316a0c:	e1a0000d 	mov	r0, sp
        316a10:	e1a01004 	mov	r1, r4
        316a14:	eb62b610 	bl	1bc425c <$GetFramePath__FRC6RefVarT1>
        316a18:	e1a04000 	mov	r4, r0
        316a1c:	e59d0000 	ldr	r0, [sp]
        316a20:	eb62b1e5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        316a24:	e1a00004 	mov	r0, r4
        316a28:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralizedTestFnVar::TestNumsRealUtil(long *, long *)
 * Address: 00316a2c
 */
TGeneralizedTestFnVar::TestNumsRealUtil(long *, long *) {
    /*
        316a2c:	e1a0c00d 	mov	ip, sp
        316a30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        316a34:	e24cb004 	sub	fp, ip, #4	; 0x4
        316a38:	ed6d4206 	sfm	f4, 2, [sp, -#24]!	; fField24
        316a3c:	e1a04002 	mov	r4, r2
        316a40:	e24dd008 	sub	sp, sp, #8	; 0x8
        316a44:	e5910000 	ldr	r0, [r1]
        316a48:	eb62adbf 	bl	1bc214c <$AllocateRefHandle(long)>
        316a4c:	e58d0000 	str	r0, [sp]
        316a50:	e1a0000d 	mov	r0, sp
        316a54:	eb62adc5 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        316a58:	ee00c180 	mvfd	f4, f0
        316a5c:	e59d0000 	ldr	r0, [sp]
        316a60:	eb62b1d5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        316a64:	e3a05000 	mov	r5, #0	; 0x0
        316a68:	e5940000 	ldr	r0, [r4]
        316a6c:	eb62adb6 	bl	1bc214c <$AllocateRefHandle(long)>
        316a70:	e58d0004 	str	r0, [sp, #4]	; fField4
        316a74:	e28d0004 	add	r0, sp, #4	; 0x4
        316a78:	eb62adbc 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
        316a7c:	ee00d180 	mvfd	f5, f0
        316a80:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        316a84:	eb62b1cc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        316a88:	e1a00005 	mov	r0, r5
        316a8c:	eed4f115 	cmfe	f4, f5
        316a90:	c3a00001 	movgt	r0, #1	; 0x1
        316a94:	ca000000 	bgt	316a9c <TGeneralizedTestFnVar::TestNumsRealUtil(long *, long *)+0x70>
        316a98:	b3e00000 	mvnlt	r0, #0	; 0x0
        316a9c:	ed5b420b 	lfm	f4, 2, [fp, -#44]
        316aa0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralizedTestFnVar::TestNumbers(long *, long *)
 * Address: 00316aa4
 */
TGeneralizedTestFnVar::TestNumbers(long *, long *) {
    /*
        316aa4:	e1a0c00d 	mov	ip, sp
        316aa8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        316aac:	e24cb004 	sub	fp, ip, #4	; 0x4
        316ab0:	e1a04000 	mov	r4, r0
        316ab4:	e5910000 	ldr	r0, [r1]
        316ab8:	e2103003 	ands	r3, r0, #3	; 0x3
        316abc:	e5925000 	ldr	r5, [r2]
        316ac0:	02056003 	andeq	r6, r5, #3	; 0x3
        316ac4:	03360000 	teqeq	r6, #0	; 0x0
        316ac8:	1a00000b 	bne	316afc <TGeneralizedTestFnVar::TestNumbers(long *, long *)+0x58>
        316acc:	e3330000 	teq	r3, #0	; 0x0
        316ad0:	01a00140 	moveq	r0, r0, asr #2
        316ad4:	0a000000 	beq	316adc <TGeneralizedTestFnVar::TestNumbers(long *, long *)+0x38>
        316ad8:	eb62ad8f 	bl	1bc211c <$_RINTError(long)>
        316adc:	e1a07000 	mov	r7, r0
        316ae0:	e3360000 	teq	r6, #0	; 0x0
        316ae4:	01a00145 	moveq	r0, r5, asr #2
        316ae8:	0a000001 	beq	316af4 <TGeneralizedTestFnVar::TestNumbers(long *, long *)+0x50>
        316aec:	e1a00005 	mov	r0, r5
        316af0:	eb62ad89 	bl	1bc211c <$_RINTError(long)>
        316af4:	e0470000 	sub	r0, r7, r0
        316af8:	ea000001 	b	316b04 <TGeneralizedTestFnVar::TestNumbers(long *, long *)+0x60>
        316afc:	e1a00004 	mov	r0, r4
        316b00:	eb5d0846 	bl	1a58c20 <TGeneralizedTestFnVar::$TestNumsRealUtil(long *, long *)>
        316b04:	e5941000 	ldr	r1, [r4]
        316b08:	e3310000 	teq	r1, #0	; 0x0
        316b0c:	12600000 	rsbne	r0, r0, #0	; 0x0
        316b10:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralizedTestFnVar::TestUniStrings(long *, long *)
 * Address: 00316b14
 */
TGeneralizedTestFnVar::TestUniStrings(long *, long *) {
    /*
        316b14:	e1a0c00d 	mov	ip, sp
        316b18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        316b1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        316b20:	e1a05000 	mov	r5, r0
        316b24:	e1a04002 	mov	r4, r2
        316b28:	e24dd058 	sub	sp, sp, #88	; 0x58
        316b2c:	e5910000 	ldr	r0, [r1]
        316b30:	eb62ad85 	bl	1bc214c <$AllocateRefHandle(long)>
        316b34:	e58d0000 	str	r0, [sp]
        316b38:	e1a0100d 	mov	r1, sp
        316b3c:	e28d0030 	add	r0, sp, #48	; 0x30
        316b40:	ebfa57b6 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        316b44:	e59d0000 	ldr	r0, [sp]
        316b48:	eb62b19b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        316b4c:	e3a06000 	mov	r6, #0	; 0x0
        316b50:	e5940000 	ldr	r0, [r4]
        316b54:	eb62ad7c 	bl	1bc214c <$AllocateRefHandle(long)>
        316b58:	e58d0004 	str	r0, [sp, #4]	; fField4
        316b5c:	e28d1004 	add	r1, sp, #4	; 0x4
        316b60:	e28d0008 	add	r0, sp, #8	; 0x8
        316b64:	ebfa57ad 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        316b68:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        316b6c:	eb62b192 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        316b70:	e1a02006 	mov	r2, r6
        316b74:	e3a03000 	mov	r3, #0	; 0x0
        316b78:	e92d0008 	stmdb	sp!, {r3}
        316b7c:	e3e03000 	mvn	r3, #0	; 0x0
        316b80:	e28d100c 	add	r1, sp, #12	; 0xc
        316b84:	e28d0034 	add	r0, sp, #52	; 0x34
        316b88:	eb624630 	bl	1ba8450 <TRichString::$CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))>
        316b8c:	e28dd004 	add	sp, sp, #4	; 0x4
        316b90:	e5951000 	ldr	r1, [r5]
        316b94:	e3310000 	teq	r1, #0	; 0x0
        316b98:	12604000 	rsbne	r4, r0, #0	; 0x0
        316b9c:	01a04000 	moveq	r4, r0
        316ba0:	e59d0008 	ldr	r0, [sp, #8]
        316ba4:	eb62b184 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        316ba8:	e59d0030 	ldr	r0, [sp, #48]
        316bac:	eb62b182 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        316bb0:	e1a00004 	mov	r0, r4
        316bb4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralizedTestFnVar::TestUniChars(long *, long *)
 * Address: 00316bb8
 */
TGeneralizedTestFnVar::TestUniChars(long *, long *) {
    /*
        316bb8:	e1a0c00d 	mov	ip, sp
        316bbc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        316bc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        316bc4:	e1a05000 	mov	r5, r0
        316bc8:	e1a04002 	mov	r4, r2
        316bcc:	e5910000 	ldr	r0, [r1]
        316bd0:	e2001003 	and	r1, r0, #3	; 0x3
        316bd4:	e3a06003 	mov	r6, #3	; 0x3
        316bd8:	e3310002 	teq	r1, #2	; 0x2
        316bdc:	00061140 	andeq	r1, r6, r0, asr #2
        316be0:	03310001 	teqeq	r1, #1	; 0x1
        316be4:	01a00140 	moveq	r0, r0, asr #2
        316be8:	01a00140 	moveq	r0, r0, asr #2
        316bec:	01a00800 	moveq	r0, r0, lsl #16
        316bf0:	01a00820 	moveq	r0, r0, lsr #16
        316bf4:	0a000000 	beq	316bfc <TGeneralizedTestFnVar::TestUniChars(long *, long *)+0x44>
        316bf8:	eb62ad46 	bl	1bc2118 <$_RCHARError(long)>
        316bfc:	e1a07800 	mov	r7, r0, lsl #16
        316c00:	e1a07827 	mov	r7, r7, lsr #16
        316c04:	e5940000 	ldr	r0, [r4]
        316c08:	e2001003 	and	r1, r0, #3	; 0x3
        316c0c:	e3310002 	teq	r1, #2	; 0x2
        316c10:	00061140 	andeq	r1, r6, r0, asr #2
        316c14:	03310001 	teqeq	r1, #1	; 0x1
        316c18:	01a00140 	moveq	r0, r0, asr #2
        316c1c:	01a00140 	moveq	r0, r0, asr #2
        316c20:	01a00800 	moveq	r0, r0, lsl #16
        316c24:	01a00820 	moveq	r0, r0, lsr #16
        316c28:	0a000000 	beq	316c30 <TGeneralizedTestFnVar::TestUniChars(long *, long *)+0x78>
        316c2c:	eb62ad39 	bl	1bc2118 <$_RCHARError(long)>
        316c30:	e1a00800 	mov	r0, r0, lsl #16
        316c34:	e0470820 	sub	r0, r7, r0, lsr #16
        316c38:	e5951000 	ldr	r1, [r5]
        316c3c:	e3310000 	teq	r1, #0	; 0x0
        316c40:	12600000 	rsbne	r0, r0, #0	; 0x0
        316c44:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralizedTestFnVar::TestSymbols(long *, long *)
 * Address: 00316c48
 */
TGeneralizedTestFnVar::TestSymbols(long *, long *) {
    /*
        316c48:	e1a0c00d 	mov	ip, sp
        316c4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        316c50:	e24cb004 	sub	fp, ip, #4	; 0x4
        316c54:	e1a04000 	mov	r4, r0
        316c58:	e5910000 	ldr	r0, [r1]
        316c5c:	e5921000 	ldr	r1, [r2]
        316c60:	eb5d03df 	bl	1a57be4 <$SymbolCompareLexRef__FlT1>
        316c64:	e5941000 	ldr	r1, [r4]
        316c68:	e3310000 	teq	r1, #0	; 0x0
        316c6c:	12600000 	rsbne	r0, r0, #0	; 0x0
        316c70:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralizedTestFnVar::TestEQ(long *, long *)
 * Address: 00316f48
 */
TGeneralizedTestFnVar::TestEQ(long *, long *) {
    /*
        316f48:	e1a0c00d 	mov	ip, sp
        316f4c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        316f50:	e24cb004 	sub	fp, ip, #4	; 0x4
        316f54:	e5910000 	ldr	r0, [r1]
        316f58:	e5921000 	ldr	r1, [r2]
        316f5c:	eb62b4b3 	bl	1bc4230 <$EQRef__FlT1>
        316f60:	e3300000 	teq	r0, #0	; 0x0
        316f64:	13a00000 	movne	r0, #0	; 0x0
        316f68:	03a00001 	moveq	r0, #1	; 0x1
        316f6c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralizedTestFnVar::TestClosure(long *, long *)
 * Address: 00316f70
 */
TGeneralizedTestFnVar::TestClosure(long *, long *) {
    /*
        316f70:	e1a0c00d 	mov	ip, sp
        316f74:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        316f78:	e24cb004 	sub	fp, ip, #4	; 0x4
        316f7c:	e280300c 	add	r3, r0, #12	; 0xc
        316f80:	e5911000 	ldr	r1, [r1]
        316f84:	e593c000 	ldr	ip, [r3]
        316f88:	e58c1000 	str	r1, [ip]
        316f8c:	e2801010 	add	r1, r0, #16	; 0x10
        316f90:	e5922000 	ldr	r2, [r2]
        316f94:	e591c000 	ldr	ip, [r1]
        316f98:	e58c2000 	str	r2, [ip]
        316f9c:	e1a02001 	mov	r2, r1
        316fa0:	e1a01003 	mov	r1, r3
        316fa4:	e2800008 	add	r0, r0, #8	; 0x8
        316fa8:	eb63a416 	bl	1c00008 <$NSCall__FRC6RefVarN21>
        316fac:	e3100003 	tst	r0, #3	; 0x3
        316fb0:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        316fb4:	1a62ac58 	bne	1bc211c <$_RINTError(long)>
        316fb8:	01a00140 	moveq	r0, r0, asr #2
        316fbc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TGeneralizedTestFnVar::TestEQClosure(long *, long *)
 * Address: 00316fc0
 */
TGeneralizedTestFnVar::TestEQClosure(long *, long *) {
    /*
        316fc0:	e1a0c00d 	mov	ip, sp
        316fc4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        316fc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        316fcc:	e280300c 	add	r3, r0, #12	; 0xc
        316fd0:	e5911000 	ldr	r1, [r1]
        316fd4:	e593c000 	ldr	ip, [r3]
        316fd8:	e58c1000 	str	r1, [ip]
        316fdc:	e2801010 	add	r1, r0, #16	; 0x10
        316fe0:	e5922000 	ldr	r2, [r2]
        316fe4:	e591c000 	ldr	ip, [r1]
        316fe8:	e58c2000 	str	r2, [ip]
        316fec:	e1a02001 	mov	r2, r1
        316ff0:	e1a01003 	mov	r1, r3
        316ff4:	e2800008 	add	r0, r0, #8	; 0x8
        316ff8:	eb63a402 	bl	1c00008 <$NSCall__FRC6RefVarN21>
        316ffc:	e2001003 	and	r1, r0, #3	; 0x3
        317000:	e3510000 	cmp	r1, #0	; 0x0
        317004:	1a000003 	bne	317018 <TGeneralizedTestFnVar::TestEQClosure(long *, long *)+0x58>
        317008:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        31700c:	1a62ac42 	bne	1bc211c <$_RINTError(long)>
        317010:	01a00140 	moveq	r0, r0, asr #2
        317014:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        317018:	e3300002 	teq	r0, #2	; 0x2
        31701c:	13a00000 	movne	r0, #0	; 0x0
        317020:	03a00001 	moveq	r0, #1	; 0x1
        317024:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

