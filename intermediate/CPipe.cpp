#include "DDKIncludes/Packages/PartHandler.h"

/* VTable Layout:
 * [0] 0x1be5288
 * [1] 0x1a0427c
 * [2] 0x1a0427c
 * [3] 0x1a0427c
 * [4] 0x1a0427c
 * [5] 0x1a0427c
 * [6] 0x1a0427c
 * [7] 0x1a0427c
 * [8] 0x1a0427c
 * [9] 0x1a0427c
 * [10] 0x1bae770
 * [11] 0x1bae778
 * [12] 0x1a0427c
 * [13] 0x1a0427c
 * [14] 0x1a739e4
 * [15] 0x1be632c
 * [16] 0x1a74a3c
 * [17] 0x1a74a30
 * [18] 0x1be847c
 * [19] 0x1a7bdf0
 * [20] 0x1a7bda8
 * [21] 0x1a78c74
 * [22] 0x1a74a78
 * [23] 0x1a75ac8
 * [24] 0x1a76b18
 * [25] 0x1a75af0
 * [26] 0x1a75aa0
 * [27] 0x1a76b24
 * [28] 0x1a739e8
 * [29] 0x1be632c
 * [30] 0x1be6300
 * [31] 0x1a810a8
 * [32] 0x1be847c
 * [33] 0x1a739ec
 * [34] 0x1be632c
 * [35] 0x1a74a3c
 * [36] 0x1a74a30
 * [37] 0x1be847c
 * [38] 0x1a7bdf8
 * [39] 0x1a7bda8
 * [40] 0x1a78c78
 * [41] 0x1a74a7c
 * [42] 0x1a75acc
 * [43] 0x1a76b1c
 * [44] 0x1a75af4
 * [45] 0x1a75aa4
 * [46] 0x1a76b40
 * [47] 0x1b5de90
 * [48] 0x1b5ded4
 * [49] 0x1b631a8
 * [50] 0x1b5ce54
 * [51] 0x1b5ffe0
 * [52] 0x1b5ce20
 * [53] 0x1b62130
 * [54] 0x1b631dc
 * [55] 0x1b60034
 * [56] 0x1b5ef40
 * [57] 0x1b5def0
 * [58] 0x1b5bddc
 * [59] 0x1b610bc
 * [60] 0x1b60040
 * [61] 0x1b64260
 * [62] 0x1b64248
 * [63] 0x1b65298
 * [64] 0x1b64278
 * [65] 0x1b652f0
 * [66] 0x1b64240
 * [67] 0x1b66324
 * [68] TView::ClassID( const(void))
 * [69] TView::DerivedFrom( const(long))
 * [70] 0x1bc948c
 * [71] 0x1a9ad64
 * [72] 0x1a9085c
 * [73] 0x1bc94d8
 * [74] 0x1ae73a8
 * [75] 0x1a9ef6c
 * [76] 0x1ae73ac
 * [77] 0x1bcb5a0
 * [78] 0x1bcb580
 * [79] 0x1bcb5ec
 * [80] 0x1bc94b8
 * [81] 0x1bcc60c
 * [82] 0x1adce2c
 * [83] 0x1bca574
 * [84] 0x1ae73c0
 * [85] 0x1bca554
 * [86] 0x1bcc614
 * [87] 0x1bc94ac
 * [88] 0x1bc94b0
 * [89] 0x1bc94ec
 * [90] 0x1bca578
 * [91] TView::SetCaretOffset(long *, long *)
 * [92] 0x1ae73b8
 * [93] 0x1ae73b4
 * [94] 0x1ae73bc
 * [95] 0x1ae31cc
 * [96] 0x1bcb59c
 * [97] 0x1bcb5a8
 * [98] 0x1adbdf8
 * [99] 0x1bcb5c4
 */

/**
 * Symbol: CPipe::__ct(void)
 * Address: 0018a424
 */
CPipe::CPipe(void) {
    /*
        18a424:	e1a0c00d 	mov	ip, sp
        18a428:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        18a42c:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a430:	e3300000 	teq	r0, #0	; 0x0
        18a434:	1a000003 	bne	18a448 <CPipe::__ct(void)+0x24>
        18a438:	e3a00004 	mov	r0, #4	; 0x4
        18a43c:	eb6910bd 	bl	1bce738 <$__nw(unsigned int)>
        18a440:	e3300000 	teq	r0, #0	; 0x0
        18a444:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        18a448:	e59f1004 	ldr	r1, [pc, #4]	; 18a454 <CPipe::__ct(void)+0x30>	; CPipe
        18a44c:	e5801000 	str	r1, [r0]
        18a450:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        18a454:	0001f640 	andeq	pc, r1, r0, asr #12
    */
}

/**
 * Symbol: CPipe::__dt(void)
 * Address: 0018a458
 */
CPipe::~CPipe(void) {
    /*
        18a458:	e59f200c 	ldr	r2, [pc, #c]	; 18a46c <CPipe::__dt(void)+0x14>
        18a45c:	e3110001 	tst	r1, #1	; 0x1
        18a460:	e5802000 	str	r2, [r0]
        18a464:	1a690c9d 	bne	1bcd6e0 <$__dl(void *)>
        18a468:	e1a0f00e 	mov	pc, lr
        18a46c:	0001f640 	andeq	pc, r1, r0, asr #12
        18a470:	e1a0c00d 	mov	ip, sp
        18a474:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a478:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a47c:	e1a04000 	mov	r4, r0
        18a480:	e3a00004 	mov	r0, #4	; 0x4
        18a484:	e52d0008 	str	r0, [sp, -#8]!
        18a488:	e08d3000 	add	r3, sp, r0
        18a48c:	e1a0200d 	mov	r2, sp
        18a490:	e1a00004 	mov	r0, r4
        18a494:	e594c000 	ldr	ip, [r4]
        18a498:	e1a0e00f 	mov	lr, pc
        18a49c:	e28cf014 	add	pc, ip, #20	; 0x14
        18a4a0:	e5dd0004 	ldrb	r0, [sp, #4]	; CPipe
        18a4a4:	e3300000 	teq	r0, #0	; 0x0
        18a4a8:	0a000007 	beq	18a4cc <CPipe::operator>>(unsigned long &)+0x5c>
        18a4ac:	e59d0000 	ldr	r0, [sp]
        18a4b0:	e3500004 	cmp	r0, #4	; 0x4
        18a4b4:	2a000004 	bcs	18a4cc <CPipe::operator>>(unsigned long &)+0x5c>
        18a4b8:	e59f0014 	ldr	r0, [pc, #14]	; 18a4d4 <CPipe::operator>>(unsigned long &)+0x64>
        18a4bc:	e5900000 	ldr	r0, [r0]
        18a4c0:	e3a02000 	mov	r2, #0	; 0x0
        18a4c4:	e3e01001 	mvn	r1, #1	; 0x1
        18a4c8:	eb696333 	bl	1be319c <$Throw>
        18a4cc:	e1a00004 	mov	r0, r4
        18a4d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        18a4d4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CPipe::operator<<(char)
 * Address: 0018a4d8
 */
CPipe::operator<<(char) {
    /*
        18a4d8:	e1a0c00d 	mov	ip, sp
        18a4dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a4e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a4e4:	e1a04000 	mov	r4, r0
        18a4e8:	e56d1004 	strb	r1, [sp, -#4]!	; CPipe
        18a4ec:	e1a0100d 	mov	r1, sp
        18a4f0:	e3a03000 	mov	r3, #0	; 0x0
        18a4f4:	e3a02001 	mov	r2, #1	; 0x1
        18a4f8:	e590c000 	ldr	ip, [r0]
        18a4fc:	e1a0e00f 	mov	lr, pc
        18a500:	e28cf018 	add	pc, ip, #24	; 0x18
        18a504:	e1a00004 	mov	r0, r4
        18a508:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CPipe::ResetRead(void)
 * Address: 0018a50c
 */
CPipe::ResetRead(void) {
    /*
        18a50c:	e59f000c 	ldr	r0, [pc, #c]	; 18a520 <CPipe::ResetRead(void)+0x14>
        18a510:	e5900000 	ldr	r0, [r0]
        18a514:	e3a02000 	mov	r2, #0	; 0x0
        18a518:	e59f1004 	ldr	r1, [pc, #4]	; 18a524 <CPipe::ResetRead(void)+0x18>	; CPipe
        18a51c:	ea69631e 	b	1be319c <$Throw>
        18a520:	00371324 	eoreqs	r1, r7, r4, lsr #6
        18a524:	ffffc94f 	swinv	0x00ffc94f
    */
}

/**
 * Symbol: CPipe::operator<<(signed char)
 * Address: 0018a528
 */
CPipe::operator<<(signed char) {
    /*
        18a528:	e1a0c00d 	mov	ip, sp
        18a52c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a530:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a534:	e1a04000 	mov	r4, r0
        18a538:	e56d1004 	strb	r1, [sp, -#4]!	; CPipe
        18a53c:	e1a0100d 	mov	r1, sp
        18a540:	e3a03000 	mov	r3, #0	; 0x0
        18a544:	e3a02001 	mov	r2, #1	; 0x1
        18a548:	e590c000 	ldr	ip, [r0]
        18a54c:	e1a0e00f 	mov	lr, pc
        18a550:	e28cf018 	add	pc, ip, #24	; 0x18
        18a554:	e1a00004 	mov	r0, r4
        18a558:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CPipe::operator<<(unsigned char)
 * Address: 0018a55c
 */
CPipe::operator<<(unsigned char) {
    /*
        18a55c:	e1a0c00d 	mov	ip, sp
        18a560:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a564:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a568:	e1a04000 	mov	r4, r0
        18a56c:	e56d1004 	strb	r1, [sp, -#4]!	; CPipe
        18a570:	e1a0100d 	mov	r1, sp
        18a574:	e3a03000 	mov	r3, #0	; 0x0
        18a578:	e3a02001 	mov	r2, #1	; 0x1
        18a57c:	e590c000 	ldr	ip, [r0]
        18a580:	e1a0e00f 	mov	lr, pc
        18a584:	e28cf018 	add	pc, ip, #24	; 0x18
        18a588:	e1a00004 	mov	r0, r4
        18a58c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CPipe::operator<<(short)
 * Address: 0018a590
 */
CPipe::operator<<(short) {
    /*
        18a590:	e1a0c00d 	mov	ip, sp
        18a594:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a598:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a59c:	e1a04000 	mov	r4, r0
        18a5a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        18a5a4:	e5cd1001 	strb	r1, [sp, #1]
        18a5a8:	e1a00441 	mov	r0, r1, asr #8
        18a5ac:	e5cd0000 	strb	r0, [sp]
        18a5b0:	e1a0100d 	mov	r1, sp
        18a5b4:	e1a00004 	mov	r0, r4
        18a5b8:	e3a03000 	mov	r3, #0	; 0x0
        18a5bc:	e3a02002 	mov	r2, #2	; 0x2
        18a5c0:	e594c000 	ldr	ip, [r4]
        18a5c4:	e1a0e00f 	mov	lr, pc
        18a5c8:	e28cf018 	add	pc, ip, #24	; 0x18
        18a5cc:	e1a00004 	mov	r0, r4
        18a5d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CPipe::operator<<(unsigned short)
 * Address: 0018a5d4
 */
CPipe::operator<<(unsigned short) {
    /*
        18a5d4:	e1a0c00d 	mov	ip, sp
        18a5d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18a5dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a5e0:	e1a04000 	mov	r4, r0
        18a5e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        18a5e8:	e5cd1001 	strb	r1, [sp, #1]
        18a5ec:	e1a00421 	mov	r0, r1, lsr #8
        18a5f0:	e5cd0000 	strb	r0, [sp]
        18a5f4:	e1a0100d 	mov	r1, sp
        18a5f8:	e1a00004 	mov	r0, r4
        18a5fc:	e3a03000 	mov	r3, #0	; 0x0
        18a600:	e3a02002 	mov	r2, #2	; 0x2
        18a604:	e594c000 	ldr	ip, [r4]
        18a608:	e1a0e00f 	mov	lr, pc
        18a60c:	e28cf018 	add	pc, ip, #24	; 0x18
        18a610:	e1a00004 	mov	r0, r4
        18a614:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CPipe::operator<<(long)
 * Address: 0018a618
 */
CPipe::operator<<(long) {
    /*
        18a618:	e1a0c00d 	mov	ip, sp
        18a61c:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        18a620:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a624:	e24b1010 	sub	r1, fp, #16	; 0x10
        18a628:	e3a03000 	mov	r3, #0	; 0x0
        18a62c:	e3a02004 	mov	r2, #4	; 0x4
        18a630:	e51b0014 	ldr	r0, [fp, -#20]
        18a634:	e590c000 	ldr	ip, [r0]
        18a638:	e1a0e00f 	mov	lr, pc
        18a63c:	e28cf018 	add	pc, ip, #24	; 0x18
        18a640:	e51b0014 	ldr	r0, [fp, -#20]
        18a644:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CPipe::operator<<(unsigned long)
 * Address: 0018a648
 */
CPipe::operator<<(unsigned long) {
    /*
        18a648:	e1a0c00d 	mov	ip, sp
        18a64c:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        18a650:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a654:	e24b1010 	sub	r1, fp, #16	; 0x10
        18a658:	e3a03000 	mov	r3, #0	; 0x0
        18a65c:	e3a02004 	mov	r2, #4	; 0x4
        18a660:	e51b0014 	ldr	r0, [fp, -#20]
        18a664:	e590c000 	ldr	ip, [r0]
        18a668:	e1a0e00f 	mov	lr, pc
        18a66c:	e28cf018 	add	pc, ip, #24	; 0x18
        18a670:	e51b0014 	ldr	r0, [fp, -#20]
        18a674:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CPipe::ResetWrite(void)
 * Address: 0018a678
 */
CPipe::ResetWrite(void) {
    /*
        18a678:	e59f000c 	ldr	r0, [pc, #c]	; 18a68c <CPipe::ResetWrite(void)+0x14>
        18a67c:	e5900000 	ldr	r0, [r0]
        18a680:	e3a02000 	mov	r2, #0	; 0x0
        18a684:	e59f1004 	ldr	r1, [pc, #4]	; 18a690 <CPipe::ResetWrite(void)+0x18>	; CPipe
        18a688:	ea6962c3 	b	1be319c <$Throw>
        18a68c:	00371324 	eoreqs	r1, r7, r4, lsr #6
        18a690:	ffffc94f 	swinv	0x00ffc94f
    */
}

