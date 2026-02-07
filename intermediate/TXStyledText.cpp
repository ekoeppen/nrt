#include "include/TXStyledText.h"

/* VTable Layout:
 * [0] 0x1b9ad18
 * [1] 0x1b9ad1c
 * [2] 0x1bee714
 * [3] 0x38b660
 * [4] 0x1bec61c
 * [5] 0x1bec614
 * [6] 0x1bee77c
 * [7] 0x1bee774
 * [8] 0x1bec60c
 * [9] 0x1bee76c
 * [10] 0x1b83194
 * [11] 0x1b83198
 * [12] 0x1b831fc
 * [13] 0x1bae76c
 * [14] 0x1bae774
 * [15] 0x1b831e4
 * [16] 0x1b84228
 * [17] 0x1afad08
 * [18] 0x1af9c94
 * [19] 0x1a73998
 * [20] 0x38b6d0
 * [21] 0x1ba006c
 * [22] 0x1baf7c8
 * [23] 0x1baf7cc
 * [24] 0x1baf7d0
 * [25] 0x1bad6a8
 * [26] 0x1bad698
 * [27] 0x1bad6a0
 * [28] 0x1bae70c
 * [29] 0x1bae708
 * [30] 0x1ba007c
 * [31] 0x1bae704
 * [32] 0x1bae72c
 * [33] 0x1baf7d4
 * [34] 0x1bae724
 * [35] 0x1bad6ac
 * [36] 0x1bae710
 * [37] 0x1be94d4
 * [38] 0x1be94d0
 * [39] 0x1bea518
 * [40] 0x1be52e4
 * [41] 0x1a0a510
 * [42] 0x1a118d4
 * [43] 0x1a1ad6c
 * [44] 0x1a1bd8c
 * [45] 0x1bc10a4
 * [46] 0x1a118f8
 * [47] 0x1a27390
 * [48] 0x1a12950
 * [49] 0x1bbfff8
 * [50] 0x1a273b8
 * [51] 0x1a0f7bc
 * [52] 0x1a1ff84
 * [53] 0x1bbffd4
 * [54] 0x1a11884
 * [55] 0x1bbffd0
 * [56] 0x1bc003c
 * [57] 0x1bc0034
 * [58] 0x1bc002c
 * [59] 0x1bbce68
 * [60] 0x1bbce6c
 * [61] 0x1a0e748
 * [62] 0x1bbde8c
 * [63] 0x1a2000c
 * [64] 0x1bc001c
 * [65] 0x1bbce54
 * [66] 0x1bbce50
 * [67] 0x1bbffc4
 * [68] 0x1bc0064
 * [69] 0x1bc0060
 * [70] TSerTool::BindStart(void)
 * [71] 0x1a231e8
 * [72] TSerTool::UnbindStart(void)
 * [73] 0x1a2c644
 * [74] 0x1bbfff0
 * [75] 0x1bc0038
 * [76] 0x1a28448
 * [77] 0x1a2a538
 * [78] 0x1a2a530
 * [79] 0x1a2a528
 * [80] 0x1a2a520
 * [81] 0x1a294cc
 * [82] 0x1a20050
 * [83] 0x1a294fc
 * [84] 0x1bc0050
 * [85] 0x1a26324
 * [86] 0x1a0b594
 * [87] 0x1a0b584
 * [88] 0x1a2a554
 * [89] 0x1a2a544
 * [90] 0x1a294f0
 * [91] 0x1a294e0
 * [92] 0x1a16b64
 * [93] 0x1a17b94
 * [94] 0x1a16b7c
 * [95] 0x1a14a00
 * [96] 0x1bc0010
 * [97] 0x1a10860
 * [98] 0x1a118a8
 * [99] 0x1a10870
 */

/**
 * Symbol: TXStyledText::__ct(void)
 * Address: 002461bc
 */
TXStyledText::TXStyledText(void) {
    /*
        2461bc:	e1a0c00d 	mov	ip, sp
        2461c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2461c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2461c8:	e3300000 	teq	r0, #0	; 0x0
        2461cc:	1a000003 	bne	2461e0 <TXStyledText::__ct(void)+0x24>
        2461d0:	e3a00010 	mov	r0, #16	; 0x10
        2461d4:	eb662157 	bl	1bce738 <$__nw(unsigned int)>
        2461d8:	e3300000 	teq	r0, #0	; 0x0
        2461dc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2461e0:	e59f1004 	ldr	r1, [pc, #4]	; 2461ec <TXStyledText::__ct(void)+0x30>	; fField4
        2461e4:	e5801000 	str	r1, [r0]
        2461e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2461ec:	0001c830 	andeq	ip, r1, r0, lsr r8
    */
}

/**
 * Symbol: TXStyledText::IStyledText(GrafPort *, TXChars *, char)
 * Address: 002461f0
 */
TXStyledText::IStyledText(GrafPort *, TXChars *, char) {
    /*
        2461f0:	e1a0c00d 	mov	ip, sp
        2461f4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2461f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2461fc:	e1a04000 	mov	r4, r0
        246200:	e1a06001 	mov	r6, r1
        246204:	e1a05002 	mov	r5, r2
        246208:	e20310ff 	and	r1, r3, #255	; 0xff
        24620c:	e3a00000 	mov	r0, #0	; 0x0
        246210:	eb654eaa 	bl	1b99cc0 <TXRunRange::$__ct(char)>
        246214:	e5a46004 	str	r6, [r4, #4]!	; fField4
        246218:	e5845004 	str	r5, [r4, #4]	; fField4
        24621c:	e5840008 	str	r0, [r4, #8]	; fField8
        246220:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXStyledText::__dt(void)
 * Address: 00246224
 */
TXStyledText::~TXStyledText(void) {
    /*
        246224:	e1a0c00d 	mov	ip, sp
        246228:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24622c:	e24cb004 	sub	fp, ip, #4	; 0x4
        246230:	e1a04000 	mov	r4, r0
        246234:	e1a05001 	mov	r5, r1
        246238:	e59f0044 	ldr	r0, [pc, #44]	; 246284 <TXStyledText::__dt(void)+0x60>
        24623c:	e5840000 	str	r0, [r4]
        246240:	e594000c 	ldr	r0, [r4, #12]	; fField12
        246244:	e3300000 	teq	r0, #0	; 0x0
        246248:	0a000002 	beq	246258 <TXStyledText::__dt(void)+0x34>
        24624c:	e3a01001 	mov	r1, #1	; 0x1
        246250:	e1a0e00f 	mov	lr, pc
        246254:	e590f000 	ldr	pc, [r0]
        246258:	e5940008 	ldr	r0, [r4, #8]	; fField8
        24625c:	e3300000 	teq	r0, #0	; 0x0
        246260:	0a000002 	beq	246270 <TXStyledText::__dt(void)+0x4c>
        246264:	e3a01001 	mov	r1, #1	; 0x1
        246268:	e1a0e00f 	mov	lr, pc
        24626c:	e590f000 	ldr	pc, [r0]
        246270:	e3150001 	tst	r5, #1	; 0x1
        246274:	11a00004 	movne	r0, r4
        246278:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        24627c:	1a661d17 	bne	1bcd6e0 <$__dl(void *)>
        246280:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        246284:	0001c830 	andeq	ip, r1, r0, lsr r8
    */
}

/**
 * Symbol: TXStyledText::SetTextPort(GrafPort *)
 * Address: 00246288
 */
TXStyledText::SetTextPort(GrafPort *) {
    /*
        246288:	e5a01004 	str	r1, [r0, #4]!	; fField4
        24628c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXStyledText::GetTextPort( const(void))
 * Address: 00246290
 */
TXStyledText::GetTextPort( const(void)) {
    /*
        246290:	e1a0c00d 	mov	ip, sp
        246294:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        246298:	e24cb004 	sub	fp, ip, #4	; 0x4
        24629c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2462a0:	e3300000 	teq	r0, #0	; 0x0
        2462a4:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        2462a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2462ac:	e1a0000d 	mov	r0, sp
        2462b0:	eb66a53b 	bl	1bef7a4 <$GetPort(GrafPort **)>
        2462b4:	e49d0004 	ldr	r0, [sp], #4	; fField4
        2462b8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXStyledText::IsWordSpace( const(unsigned short))
 * Address: 002462bc
 */
TXStyledText::IsWordSpace( const(unsigned short)) {
    /*
        2462bc:	e1a0c00d 	mov	ip, sp
        2462c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2462c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2462c8:	e1a00801 	mov	r0, r1, lsl #16
        2462cc:	e1a00820 	mov	r0, r0, lsr #16
        2462d0:	e1a04000 	mov	r4, r0
        2462d4:	eb66909a 	bl	1bea544 <$IsSpace(unsigned short)>
        2462d8:	e3300000 	teq	r0, #0	; 0x0
        2462dc:	1a000003 	bne	2462f0 <TXStyledText::IsWordSpace( const(unsigned short))+0x34>
        2462e0:	e1a00004 	mov	r0, r4
        2462e4:	eb669097 	bl	1bea548 <$IsTab(unsigned short)>
        2462e8:	e3300000 	teq	r0, #0	; 0x0
        2462ec:	0a000001 	beq	2462f8 <TXStyledText::IsWordSpace( const(unsigned short))+0x3c>
        2462f0:	e3a00001 	mov	r0, #1	; 0x1
        2462f4:	ea000000 	b	2462fc <TXStyledText::IsWordSpace( const(unsigned short))+0x40>
        2462f8:	e3a00000 	mov	r0, #0	; 0x0
        2462fc:	e20000ff 	and	r0, r0, #255	; 0xff
        246300:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)
 * Address: 00246304
 */
TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char) {
    /*
        246304:	e1a0c00d 	mov	ip, sp
        246308:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        24630c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        246310:	e24cb014 	sub	fp, ip, #20	; 0x14
        246314:	e1a04000 	mov	r4, r0
        246318:	e1a05003 	mov	r5, r3
        24631c:	e59b0014 	ldr	r0, [fp, #20]
        246320:	e200a0ff 	and	sl, r0, #255	; 0xff
        246324:	e24dd004 	sub	sp, sp, #4	; 0x4
        246328:	e5940008 	ldr	r0, [r4, #8]	; fField8
        24632c:	e5901000 	ldr	r1, [r0]
        246330:	e1a0e00f 	mov	lr, pc
        246334:	e281f004 	add	pc, r1, #4	; 0x4
        246338:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        24633c:	e2511040 	subs	r1, r1, #64	; 0x40
        246340:	e3a02000 	mov	r2, #0	; 0x0
        246344:	41a01002 	movmi	r1, r2
        246348:	e1a08001 	mov	r8, r1
        24634c:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        246350:	e2811040 	add	r1, r1, #64	; 0x40
        246354:	e1500001 	cmp	r0, r1
        246358:	a1a00001 	movge	r0, r1
        24635c:	e0406008 	sub	r6, r0, r8
        246360:	e3a00002 	mov	r0, #2	; 0x2
        246364:	eb65ef78 	bl	1bc214c <$AllocateRefHandle(long)>
        246368:	e58d0000 	str	r0, [sp]
        24636c:	e31a0002 	tst	sl, #2	; 0x2
        246370:	059f00e0 	ldreq	r0, [pc, #e0]	; 246458 <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x154>
        246374:	159f00e0 	ldrne	r0, [pc, #e0]	; 24645c <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x158>
        246378:	eb613dda 	bl	1a95ae8 <$GetLocaleSlot(RefVar const &)>
        24637c:	e41d1004 	ldr	r1, [sp], -#4	; fField4
        246380:	e5810000 	str	r0, [r1]
        246384:	e1a0300d 	mov	r3, sp
        246388:	e1a02006 	mov	r2, r6
        24638c:	e1a01008 	mov	r1, r8
        246390:	e594c008 	ldr	ip, [r4, #8]	; fField8
        246394:	e1a0000c 	mov	r0, ip
        246398:	e59cc000 	ldr	ip, [ip]
        24639c:	e1a0e00f 	mov	lr, pc
        2463a0:	e28cf018 	add	pc, ip, #24	; 0x18
        2463a4:	e1b07000 	movs	r7, r0
        2463a8:	e3a09000 	mov	r9, #0	; 0x0
        2463ac:	0a000046 	beq	2464cc <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x1c8>
        2463b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2463b4:	e1a0300d 	mov	r3, sp
        2463b8:	e28d2004 	add	r2, sp, #4	; 0x4
        2463bc:	e28d100c 	add	r1, sp, #12	; 0xc
        2463c0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2463c4:	e59b0008 	ldr	r0, [fp, #8]	; fField8
        2463c8:	e0402008 	sub	r2, r0, r8
        2463cc:	e5db000c 	ldrb	r0, [fp, #12]	; fField12
        2463d0:	e3300000 	teq	r0, #0	; 0x0
        2463d4:	13a03000 	movne	r3, #0	; 0x0
        2463d8:	03a03001 	moveq	r3, #1	; 0x1
        2463dc:	e1a01006 	mov	r1, r6
        2463e0:	e1a00007 	mov	r0, r7
        2463e4:	eb613991 	bl	1a94a30 <$FindWordBreaks__FPUsUlT2Uc6RefVarPUlT6>
        2463e8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2463ec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2463f0:	e59d1000 	ldr	r1, [sp]
        2463f4:	e1300001 	teq	r0, r1
        2463f8:	0a000032 	beq	2464c8 <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x1c4>
        2463fc:	e31a0001 	tst	sl, #1	; 0x1
        246400:	1a000025 	bne	24649c <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x198>
        246404:	e7971080 	ldr	r1, [r7, r0, lsl #1]
        246408:	e1a01821 	mov	r1, r1, lsr #16
        24640c:	e1a00004 	mov	r0, r4
        246410:	eb655243 	bl	1b9ad24 <TXStyledText::$IsWordSpace( const(unsigned short))>
        246414:	e3300000 	teq	r0, #0	; 0x0
        246418:	0a000010 	beq	246460 <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x15c>
        24641c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        246420:	e3300000 	teq	r0, #0	; 0x0
        246424:	0a00001c 	beq	24649c <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x198>
        246428:	e24dd004 	sub	sp, sp, #4	; 0x4
        24642c:	e1a0300d 	mov	r3, sp
        246430:	e28d2008 	add	r2, sp, #8	; 0x8
        246434:	e28d1010 	add	r1, sp, #16	; 0x10
        246438:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        24643c:	e1a02000 	mov	r2, r0
        246440:	e1a01006 	mov	r1, r6
        246444:	e1a00007 	mov	r0, r7
        246448:	e3a03000 	mov	r3, #0	; 0x0
        24644c:	eb613977 	bl	1a94a30 <$FindWordBreaks__FPUsUlT2Uc6RefVarPUlT6>
        246450:	e28dd010 	add	sp, sp, #16	; 0x10
        246454:	ea000010 	b	24649c <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x198>
        246458:	006851e0 	rsbeq	r5, r8, r0, ror #3
        24645c:	00683588 	rsbeq	r3, r8, r8, lsl #11
        246460:	e59d0000 	ldr	r0, [sp]
        246464:	e1500006 	cmp	r0, r6
        246468:	2a00000b 	bcs	24649c <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x198>
        24646c:	e59d0000 	ldr	r0, [sp]
        246470:	e7971080 	ldr	r1, [r7, r0, lsl #1]
        246474:	e1a01821 	mov	r1, r1, lsr #16
        246478:	e1a00004 	mov	r0, r4
        24647c:	eb655228 	bl	1b9ad24 <TXStyledText::$IsWordSpace( const(unsigned short))>
        246480:	e3300000 	teq	r0, #0	; 0x0
        246484:	0a000004 	beq	24649c <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x198>
        246488:	e59d0000 	ldr	r0, [sp]
        24648c:	e2800001 	add	r0, r0, #1	; 0x1
        246490:	e58d0000 	str	r0, [sp]
        246494:	e1500006 	cmp	r0, r6
        246498:	3afffff3 	bcc	24646c <TXStyledText::CharToWord(TXOffset, TXOffsetRange *, char)+0x168>
        24649c:	e3a03001 	mov	r3, #1	; 0x1
        2464a0:	e92d0008 	stmdb	sp!, {r3}
        2464a4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2464a8:	e0802008 	add	r2, r0, r8
        2464ac:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2464b0:	e0801008 	add	r1, r0, r8
        2464b4:	e1a00005 	mov	r0, r5
        2464b8:	e3a03000 	mov	r3, #0	; 0x0
        2464bc:	ebffb6f2 	bl	23408c <TXOffsetRange::Set(long, long, unsigned char, unsigned char)>
        2464c0:	e28dd004 	add	sp, sp, #4	; 0x4
        2464c4:	e3a09001 	mov	r9, #1	; 0x1
        2464c8:	e28dd008 	add	sp, sp, #8	; 0x8
        2464cc:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        2464d0:	e1a00002 	mov	r0, r2
        2464d4:	e59d1000 	ldr	r1, [sp]
        2464d8:	e5922000 	ldr	r2, [r2]
        2464dc:	e1a0e00f 	mov	lr, pc
        2464e0:	e282f014 	add	pc, r2, #20	; 0x14
        2464e4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2464e8:	eb65f333 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2464ec:	e1a00009 	mov	r0, r9
        2464f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXStyledText::AdvanceOffset(long, unsigned char)
 * Address: 002464f4
 */
TXStyledText::AdvanceOffset(long, unsigned char) {
    /*
        2464f4:	e1a0c00d 	mov	ip, sp
        2464f8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2464fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        246500:	e1a05000 	mov	r5, r0
        246504:	e1a04001 	mov	r4, r1
        246508:	e21270ff 	ands	r7, r2, #255	; 0xff
        24650c:	e3a06000 	mov	r6, #0	; 0x0
        246510:	0a000006 	beq	246530 <TXStyledText::AdvanceOffset(long, unsigned char)+0x3c>
        246514:	e5950008 	ldr	r0, [r5, #8]	; fField8
        246518:	e5901000 	ldr	r1, [r0]
        24651c:	e1a0e00f 	mov	lr, pc
        246520:	e281f004 	add	pc, r1, #4	; 0x4
        246524:	e1500004 	cmp	r0, r4
        246528:	ca000004 	bgt	246540 <TXStyledText::AdvanceOffset(long, unsigned char)+0x4c>
        24652c:	ea000001 	b	246538 <TXStyledText::AdvanceOffset(long, unsigned char)+0x44>
        246530:	e2544001 	subs	r4, r4, #1	; 0x1
        246534:	5a000001 	bpl	246540 <TXStyledText::AdvanceOffset(long, unsigned char)+0x4c>
        246538:	e1a00006 	mov	r0, r6
        24653c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        246540:	e24dd008 	sub	sp, sp, #8	; 0x8
        246544:	e3370000 	teq	r7, #0	; 0x0
        246548:	13a00000 	movne	r0, #0	; 0x0
        24654c:	03a00001 	moveq	r0, #1	; 0x1
        246550:	e58d4000 	str	r4, [sp]
        246554:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        246558:	e595000c 	ldr	r0, [r5, #12]	; fField12
        24655c:	e89d0006 	ldmia	sp, {r1, r2}
        246560:	eb64ff72 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        246564:	e1a04000 	mov	r4, r0
        246568:	e1a01004 	mov	r1, r4
        24656c:	e595000c 	ldr	r0, [r5, #12]	; fField12
        246570:	eb653932 	bl	1b94a40 <TXObjectRange::$RangeIndexToObject( const(long))>
        246574:	e5901000 	ldr	r1, [r0]
        246578:	e1a0e00f 	mov	lr, pc
        24657c:	e281f01c 	add	pc, r1, #28	; 0x1c
        246580:	e3100002 	tst	r0, #2	; 0x2
        246584:	03a00001 	moveq	r0, #1	; 0x1
        246588:	0a000002 	beq	246598 <TXStyledText::AdvanceOffset(long, unsigned char)+0xa4>
        24658c:	e1a01004 	mov	r1, r4
        246590:	e5b5000c 	ldr	r0, [r5, #12]!	; fField12
        246594:	eb64ff5f 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        246598:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

