#include "include/TObjectReader.h"

/**
 * Symbol: TObjectReader::__ct(CPipe &)
 * Address: 00357368
 */
TObjectReader::TObjectReader(CPipe &) {
    /*
        357368:	e1a0c00d 	mov	ip, sp
        35736c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        357370:	e24cb004 	sub	fp, ip, #4	; 0x4
        357374:	e1b04000 	movs	r4, r0
        357378:	e1a05001 	mov	r5, r1
        35737c:	1a000003 	bne	357390 <TObjectReader::__ct(CPipe &)+0x28>
        357380:	e3a00010 	mov	r0, #16	; 0x10
        357384:	eb61dceb 	bl	1bce738 <$__nw(unsigned int)>
        357388:	e1b04000 	movs	r4, r0
        35738c:	0a000006 	beq	3573ac <TObjectReader::__ct(CPipe &)+0x44>
        357390:	e3a00000 	mov	r0, #0	; 0x0
        357394:	e5840008 	str	r0, [r4, #8]	; fField8
        357398:	e3a00001 	mov	r0, #1	; 0x1
        35739c:	e5845004 	str	r5, [r4, #4]	; fField4
        3573a0:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        3573a4:	e1a00004 	mov	r0, r4
        3573a8:	eb5bdcf2 	bl	1a4e778 <TObjectReader::$SetPrecedentsForReading(void)>
        3573ac:	e1a00004 	mov	r0, r4
        3573b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectReader::__dt(void)
 * Address: 003573b4
 */
TObjectReader::~TObjectReader(void) {
    /*
        3573b4:	e1a0c00d 	mov	ip, sp
        3573b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        3573bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3573c0:	e1a04000 	mov	r4, r0
        3573c4:	e1a05001 	mov	r5, r1
        3573c8:	e5901000 	ldr	r1, [r0]
        3573cc:	e59f001c 	ldr	r0, [pc, #1c]	; 3573f0 <TObjectReader::__dt(void)+0x3c>
        3573d0:	e5902004 	ldr	r2, [r0, #4]	; fField4
        3573d4:	e1310002 	teq	r1, r2
        3573d8:	1a000005 	bne	3573f4 <TObjectReader::__dt(void)+0x40>
        3573dc:	e3a01000 	mov	r1, #0	; 0x0
        3573e0:	e5c0100c 	strb	r1, [r0, #12]	; fField12
        3573e4:	e5940000 	ldr	r0, [r4]
        3573e8:	eb5be51b 	bl	1a5085c <TPrecedentsForReading::$Reset(void)>
        3573ec:	ea000003 	b	357400 <TObjectReader::__dt(void)+0x4c>
        3573f0:	0c105980 	ldceq	9, cr5, [r0], -#512
        3573f4:	e1b00001 	movs	r0, r1
        3573f8:	13a01001 	movne	r1, #1	; 0x1
        3573fc:	1b5bdcd5 	blne	1a4e758 <TPrecedentsForReading::$__dt(void)>
        357400:	e3150001 	tst	r5, #1	; 0x1
        357404:	11a00004 	movne	r0, r4
        357408:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        35740c:	1a61d8b3 	bne	1bcd6e0 <$__dl(void *)>
        357410:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectReader::__ct(CPipe &, RefVar const &)
 * Address: 00357414
 */
TObjectReader::TObjectReader(CPipe &, RefVar const &) {
    /*
        357414:	e1a0c00d 	mov	ip, sp
        357418:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35741c:	e24cb004 	sub	fp, ip, #4	; 0x4
        357420:	e1b04000 	movs	r4, r0
        357424:	e1a06001 	mov	r6, r1
        357428:	e1a05002 	mov	r5, r2
        35742c:	1a000003 	bne	357440 <TObjectReader::__ct(CPipe &, RefVar const &)+0x2c>
        357430:	e3a00010 	mov	r0, #16	; 0x10
        357434:	eb61dcbf 	bl	1bce738 <$__nw(unsigned int)>
        357438:	e1b04000 	movs	r4, r0
        35743c:	0a00001f 	beq	3574c0 <TObjectReader::__ct(CPipe &, RefVar const &)+0xac>
        357440:	e3a00000 	mov	r0, #0	; 0x0
        357444:	e5840008 	str	r0, [r4, #8]	; fField8
        357448:	e3a00001 	mov	r0, #1	; 0x1
        35744c:	e5846004 	str	r6, [r4, #4]	; fField4
        357450:	e5c4000c 	strb	r0, [r4, #12]	; fField12
        357454:	e1a00004 	mov	r0, r4
        357458:	eb5bdcc6 	bl	1a4e778 <TObjectReader::$SetPrecedentsForReading(void)>
        35745c:	e5950000 	ldr	r0, [r5]
        357460:	e5900000 	ldr	r0, [r0]
        357464:	e3300002 	teq	r0, #2	; 0x2
        357468:	0a000014 	beq	3574c0 <TObjectReader::__ct(CPipe &, RefVar const &)+0xac>
        35746c:	e59f6054 	ldr	r6, [pc, #54]	; 3574c8 <TObjectReader::__ct(CPipe &, RefVar const &)+0xb4>
        357470:	e5961000 	ldr	r1, [r6]
        357474:	e5911000 	ldr	r1, [r1]
        357478:	eb61b378 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35747c:	e3300002 	teq	r0, #2	; 0x2
        357480:	1a000007 	bne	3574a4 <TObjectReader::__ct(CPipe &, RefVar const &)+0x90>
        357484:	e5950000 	ldr	r0, [r5]
        357488:	e5900000 	ldr	r0, [r0]
        35748c:	e59f6038 	ldr	r6, [pc, #38]	; 3574cc <TObjectReader::__ct(CPipe &, RefVar const &)+0xb8>
        357490:	e5961000 	ldr	r1, [r6]
        357494:	e5911000 	ldr	r1, [r1]
        357498:	eb61b370 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35749c:	e3300002 	teq	r0, #2	; 0x2
        3574a0:	0a000006 	beq	3574c0 <TObjectReader::__ct(CPipe &, RefVar const &)+0xac>
        3574a4:	e5950000 	ldr	r0, [r5]
        3574a8:	e5900000 	ldr	r0, [r0]
        3574ac:	e5961000 	ldr	r1, [r6]
        3574b0:	e5911000 	ldr	r1, [r1]
        3574b4:	eb61b369 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3574b8:	e590007c 	ldr	r0, [r0, #124]	; fField124
        3574bc:	e5840008 	str	r0, [r4, #8]	; fField8
        3574c0:	e1a00004 	mov	r0, r4
        3574c4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        3574c8:	00684c88 	rsbeq	r4, r8, r8, lsl #25
        3574cc:	00684868 	rsbeq	r4, r8, r8, ror #16
    */
}

/**
 * Symbol: TObjectReader::SetPrecedentsForReading(void)
 * Address: 003574d0
 */
TObjectReader::SetPrecedentsForReading(void) {
    /*
        3574d0:	e1a0c00d 	mov	ip, sp
        3574d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3574d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3574dc:	e1a04000 	mov	r4, r0
        3574e0:	e59f004c 	ldr	r0, [pc, #4c]	; 357534 <TObjectReader::SetPrecedentsForReading(void)+0x64>	; fField4
        3574e4:	e5d0100c 	ldrb	r1, [r0, #12]	; fField12
        3574e8:	e3310000 	teq	r1, #0	; 0x0
        3574ec:	0a00000b 	beq	357520 <TObjectReader::SetPrecedentsForReading(void)+0x50>
        3574f0:	e3a00000 	mov	r0, #0	; 0x0
        3574f4:	eb5bdc96 	bl	1a4e754 <TPrecedentsForReading::$__ct(void)>
        3574f8:	e5840000 	str	r0, [r4]
        3574fc:	e3300000 	teq	r0, #0	; 0x0
        357500:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        357504:	e59f002c 	ldr	r0, [pc, #2c]	; 357538 <TObjectReader::SetPrecedentsForReading(void)+0x68>
        357508:	e5900000 	ldr	r0, [r0]
        35750c:	e3a02000 	mov	r2, #0	; 0x0
        357510:	e3a010e9 	mov	r1, #233	; 0xe9
        357514:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        357518:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        35751c:	ea622f1e 	b	1be319c <$Throw>
        357520:	e5901004 	ldr	r1, [r0, #4]	; fField4
        357524:	e5841000 	str	r1, [r4]
        357528:	e3a01001 	mov	r1, #1	; 0x1
        35752c:	e5c0100c 	strb	r1, [r0, #12]	; fField12
        357530:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        357534:	0c105980 	ldceq	9, cr5, [r0], -#512
        357538:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TObjectReader::SetAllowFunctions(unsigned char)
 * Address: 0035753c
 */
TObjectReader::SetAllowFunctions(unsigned char) {
    /*
        35753c:	e5c0100c 	strb	r1, [r0, #12]	; fField12
        357540:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TObjectReader::Read(void)
 * Address: 00357544
 */
TObjectReader::Read(void) {
    /*
        357544:	e1a0c00d 	mov	ip, sp
        357548:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        35754c:	e24cb004 	sub	fp, ip, #4	; 0x4
        357550:	e1a04000 	mov	r4, r0
        357554:	e24dd004 	sub	sp, sp, #4	; 0x4
        357558:	e5900004 	ldr	r0, [r0, #4]	; fField4
        35755c:	e1a0100d 	mov	r1, sp
        357560:	eb623758 	bl	1be52c8 <CPipe::$__rs(unsigned char &)>
        357564:	e5dd0000 	ldrb	r0, [sp]
        357568:	e3300002 	teq	r0, #2	; 0x2
        35756c:	0a000005 	beq	357588 <TObjectReader::Read(void)+0x44>
        357570:	e3a0107a 	mov	r1, #122	; 0x7a
        357574:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        357578:	e59f0014 	ldr	r0, [pc, #14]	; 357594 <TObjectReader::Read(void)+0x50>
        35757c:	e5900000 	ldr	r0, [r0]
        357580:	e3a02000 	mov	r2, #0	; 0x0
        357584:	eb622f04 	bl	1be319c <$Throw>
        357588:	e1a00004 	mov	r0, r4
        35758c:	eb5baf07 	bl	1a431b0 <TObjectReader::$Scan(void)>
        357590:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        357594:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: TObjectReader::ReadImmediate(void)
 * Address: 00357598
 */
TObjectReader::ReadImmediate(void) {
    /*
        357598:	e1a0c00d 	mov	ip, sp
        35759c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3575a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        3575a4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3575a8:	eb5ba6c2 	bl	1a410b8 <$LongFromPipe(CPipe &)>
        3575ac:	e1a04000 	mov	r4, r0
        3575b0:	e2000003 	and	r0, r0, #3	; 0x3
        3575b4:	e3300001 	teq	r0, #1	; 0x1
        3575b8:	1a000005 	bne	3575d4 <TObjectReader::ReadImmediate(void)+0x3c>
        3575bc:	e59f0018 	ldr	r0, [pc, #18]	; 3575dc <TObjectReader::ReadImmediate(void)+0x44>
        3575c0:	e5900000 	ldr	r0, [r0]
        3575c4:	e3a02000 	mov	r2, #0	; 0x0
        3575c8:	e3a010a1 	mov	r1, #161	; 0xa1
        3575cc:	e2411cbd 	sub	r1, r1, #48384	; 0xbd00
        3575d0:	eb622ef1 	bl	1be319c <$Throw>
        3575d4:	e1a00004 	mov	r0, r4
        3575d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        3575dc:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

/**
 * Symbol: TObjectReader::ReadCharacter(void)
 * Address: 003575e0
 */
TObjectReader::ReadCharacter(void) {
    /*
        3575e0:	e1a0c00d 	mov	ip, sp
        3575e4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        3575e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3575ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        3575f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3575f4:	e1a0100d 	mov	r1, sp
        3575f8:	eb623732 	bl	1be52c8 <CPipe::$__rs(unsigned char &)>
        3575fc:	e4dd0004 	ldrb	r0, [sp], #4	; fField4
        357600:	e3a01001 	mov	r1, #1	; 0x1
        357604:	e1811100 	orr	r1, r1, r0, lsl #2
        357608:	e3a00002 	mov	r0, #2	; 0x2
        35760c:	e1800101 	orr	r0, r0, r1, lsl #2
        357610:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TObjectReader::ReadUnicodeCharacter(void)
 * Address: 00357614
 */
TObjectReader::ReadUnicodeCharacter(void) {
    /*
        357614:	e1a0c00d 	mov	ip, sp
        357618:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        35761c:	e24cb004 	sub	fp, ip, #4	; 0x4
        357620:	e1a04000 	mov	r4, r0
        357624:	e24dd004 	sub	sp, sp, #4	; 0x4
        357628:	e5900004 	ldr	r0, [r0, #4]	; fField4
        35762c:	e1a0100d 	mov	r1, sp
        357630:	eb623724 	bl	1be52c8 <CPipe::$__rs(unsigned char &)>
        357634:	e5dd0000 	ldrb	r0, [sp]
        357638:	e1a00400 	mov	r0, r0, lsl #8
        35763c:	e1a05800 	mov	r5, r0, lsl #16
        357640:	e1a05825 	mov	r5, r5, lsr #16
        357644:	e1a0100d 	mov	r1, sp
        357648:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        35764c:	eb62371d 	bl	1be52c8 <CPipe::$__rs(unsigned char &)>
        357650:	e4dd0004 	ldrb	r0, [sp], #4	; fField4
        357654:	e1850000 	orr	r0, r5, r0
        357658:	e3a01001 	mov	r1, #1	; 0x1
        35765c:	e1810100 	orr	r0, r1, r0, lsl #2
        357660:	e3a01002 	mov	r1, #2	; 0x2
        357664:	e1810100 	orr	r0, r1, r0, lsl #2
        357668:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectReader::ReadBinaryObject(unsigned char)
 * Address: 0035766c
 */
TObjectReader::ReadBinaryObject(unsigned char) {
    /*
        35766c:	e1a0c00d 	mov	ip, sp
        357670:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        357674:	e24cb004 	sub	fp, ip, #4	; 0x4
        357678:	e1a04000 	mov	r4, r0
        35767c:	e20150ff 	and	r5, r1, #255	; 0xff
        357680:	e24dd008 	sub	sp, sp, #8	; 0x8
        357684:	e3a00002 	mov	r0, #2	; 0x2
        357688:	eb61aaaf 	bl	1bc214c <$AllocateRefHandle(long)>
        35768c:	e58d0004 	str	r0, [sp, #4]	; fField4
        357690:	e5940004 	ldr	r0, [r4, #4]	; fField4
        357694:	eb5ba687 	bl	1a410b8 <$LongFromPipe(CPipe &)>
        357698:	e3350008 	teq	r5, #8	; 0x8
        35769c:	e40d0004 	str	r0, [sp], -#4	; fField4
        3576a0:	1a000006 	bne	3576c0 <TObjectReader::ReadBinaryObject(unsigned char)+0x54>
        3576a4:	e1a01000 	mov	r1, r0
        3576a8:	e59f000c 	ldr	r0, [pc, #c]	; 3576bc <TObjectReader::ReadBinaryObject(unsigned char)+0x50>
        3576ac:	eb61aaa2 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        3576b0:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        3576b4:	e5810000 	str	r0, [r1]
        3576b8:	ea00000a 	b	3576e8 <TObjectReader::ReadBinaryObject(unsigned char)+0x7c>
        3576bc:	006848d0 	ldreqd	r4, [r8], -#128
        3576c0:	e3a00002 	mov	r0, #2	; 0x2
        3576c4:	eb61aaa0 	bl	1bc214c <$AllocateRefHandle(long)>
        3576c8:	e58d0000 	str	r0, [sp]
        3576cc:	e1a0000d 	mov	r0, sp
        3576d0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        3576d4:	eb61aa98 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        3576d8:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        3576dc:	e5810000 	str	r0, [r1]
        3576e0:	e59d0000 	ldr	r0, [sp]
        3576e4:	eb61aeb4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3576e8:	e28d1008 	add	r1, sp, #8	; 0x8
        3576ec:	e5940000 	ldr	r0, [r4]
        3576f0:	eb5bdc19 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        3576f4:	e3350003 	teq	r5, #3	; 0x3
        3576f8:	1a00000a 	bne	357728 <TObjectReader::ReadBinaryObject(unsigned char)+0xbc>
        3576fc:	e1a00004 	mov	r0, r4
        357700:	eb5baeaa 	bl	1a431b0 <TObjectReader::$Scan(void)>
        357704:	eb61aa90 	bl	1bc214c <$AllocateRefHandle(long)>
        357708:	e1a05000 	mov	r5, r0
        35770c:	e5906000 	ldr	r6, [r0]
        357710:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        357714:	e5900000 	ldr	r0, [r0]
        357718:	eb61b6f5 	bl	1bc52f4 <$ObjectPtr(long)>
        35771c:	e5a06008 	str	r6, [r0, #8]!	; fField8
        357720:	e1a00005 	mov	r0, r5
        357724:	eb61aea4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357728:	e24dd004 	sub	sp, sp, #4	; 0x4
        35772c:	e5944004 	ldr	r4, [r4, #4]	; fField4
        357730:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        357734:	e5900000 	ldr	r0, [r0]
        357738:	eb61aa87 	bl	1bc215c <$BinaryData(long)>
        35773c:	e1a01000 	mov	r1, r0
        357740:	e1a0300d 	mov	r3, sp
        357744:	e28d2008 	add	r2, sp, #8	; 0x8
        357748:	e1a00004 	mov	r0, r4
        35774c:	e594c000 	ldr	ip, [r4]
        357750:	e1a0e00f 	mov	lr, pc
        357754:	e28cf014 	add	pc, ip, #20	; 0x14
        357758:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        35775c:	e5904000 	ldr	r4, [r0]
        357760:	eb61ae95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357764:	e1a00004 	mov	r0, r4
        357768:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectReader::ReadArray(unsigned char)
 * Address: 0035776c
 */
TObjectReader::ReadArray(unsigned char) {
    /*
        35776c:	e1a0c00d 	mov	ip, sp
        357770:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        357774:	e24cb004 	sub	fp, ip, #4	; 0x4
        357778:	e1a04000 	mov	r4, r0
        35777c:	e20150ff 	and	r5, r1, #255	; 0xff
        357780:	e24dd008 	sub	sp, sp, #8	; 0x8
        357784:	e3a00002 	mov	r0, #2	; 0x2
        357788:	eb61aa6f 	bl	1bc214c <$AllocateRefHandle(long)>
        35778c:	e58d0004 	str	r0, [sp, #4]	; fField4
        357790:	e5940004 	ldr	r0, [r4, #4]	; fField4
        357794:	eb5ba647 	bl	1a410b8 <$LongFromPipe(CPipe &)>
        357798:	e1a06000 	mov	r6, r0
        35779c:	e3a00002 	mov	r0, #2	; 0x2
        3577a0:	eb61aa69 	bl	1bc214c <$AllocateRefHandle(long)>
        3577a4:	e58d0000 	str	r0, [sp]
        3577a8:	e1a0000d 	mov	r0, sp
        3577ac:	e1a01006 	mov	r1, r6
        3577b0:	eb61aa60 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3577b4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        3577b8:	e5810000 	str	r0, [r1]
        3577bc:	e59d0000 	ldr	r0, [sp]
        3577c0:	eb61ae7d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3577c4:	e28d1004 	add	r1, sp, #4	; 0x4
        3577c8:	e5940000 	ldr	r0, [r4]
        3577cc:	eb5bdbe2 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        3577d0:	e3350005 	teq	r5, #5	; 0x5
        3577d4:	1a000008 	bne	3577fc <TObjectReader::ReadArray(unsigned char)+0x90>
        3577d8:	e59f0018 	ldr	r0, [pc, #18]	; 3577f8 <TObjectReader::ReadArray(unsigned char)+0x8c>
        3577dc:	e5900000 	ldr	r0, [r0]
        3577e0:	e5905000 	ldr	r5, [r0]
        3577e4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        3577e8:	e5900000 	ldr	r0, [r0]
        3577ec:	eb61b6c0 	bl	1bc52f4 <$ObjectPtr(long)>
        3577f0:	e5a05008 	str	r5, [r0, #8]!	; fField8
        3577f4:	ea00000b 	b	357828 <TObjectReader::ReadArray(unsigned char)+0xbc>
        3577f8:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        3577fc:	e1a00004 	mov	r0, r4
        357800:	eb5bae6a 	bl	1a431b0 <TObjectReader::$Scan(void)>
        357804:	eb61aa50 	bl	1bc214c <$AllocateRefHandle(long)>
        357808:	e1a05000 	mov	r5, r0
        35780c:	e5907000 	ldr	r7, [r0]
        357810:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        357814:	e5900000 	ldr	r0, [r0]
        357818:	eb61b6b5 	bl	1bc52f4 <$ObjectPtr(long)>
        35781c:	e5a07008 	str	r7, [r0, #8]!	; fField8
        357820:	e1a00005 	mov	r0, r5
        357824:	eb61ae64 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357828:	e3a05000 	mov	r5, #0	; 0x0
        35782c:	e3560000 	cmp	r6, #0	; 0x0
        357830:	da00000d 	ble	35786c <TObjectReader::ReadArray(unsigned char)+0x100>
        357834:	e1a00004 	mov	r0, r4
        357838:	eb5bae5c 	bl	1a431b0 <TObjectReader::$Scan(void)>
        35783c:	eb61aa42 	bl	1bc214c <$AllocateRefHandle(long)>
        357840:	e1a07000 	mov	r7, r0
        357844:	e1a01005 	mov	r1, r5
        357848:	e5902000 	ldr	r2, [r0]
        35784c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        357850:	e5900000 	ldr	r0, [r0]
        357854:	eb61babf 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        357858:	e1a00007 	mov	r0, r7
        35785c:	eb61ae56 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357860:	e2855001 	add	r5, r5, #1	; 0x1
        357864:	e1550006 	cmp	r5, r6
        357868:	bafffff1 	blt	357834 <TObjectReader::ReadArray(unsigned char)+0xc8>
        35786c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        357870:	e5904000 	ldr	r4, [r0]
        357874:	eb61ae50 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357878:	e1a00004 	mov	r0, r4
        35787c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectReader::ReadFrame(void)
 * Address: 00357880
 */
TObjectReader::ReadFrame(void) {
    /*
        357880:	e1a0c00d 	mov	ip, sp
        357884:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        357888:	e24cb004 	sub	fp, ip, #4	; 0x4
        35788c:	e1a04000 	mov	r4, r0
        357890:	e24dd004 	sub	sp, sp, #4	; 0x4
        357894:	e3a00002 	mov	r0, #2	; 0x2
        357898:	eb61aa2b 	bl	1bc214c <$AllocateRefHandle(long)>
        35789c:	e58d0000 	str	r0, [sp]
        3578a0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        3578a4:	eb5ba603 	bl	1a410b8 <$LongFromPipe(CPipe &)>
        3578a8:	e1a05000 	mov	r5, r0
        3578ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        3578b0:	e3a09002 	mov	r9, #2	; 0x2
        3578b4:	e1a00009 	mov	r0, r9
        3578b8:	eb61aa23 	bl	1bc214c <$AllocateRefHandle(long)>
        3578bc:	e58d0000 	str	r0, [sp]
        3578c0:	e1a0100d 	mov	r1, sp
        3578c4:	e5940000 	ldr	r0, [r4]
        3578c8:	eb5bdba3 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        3578cc:	e1a08000 	mov	r8, r0
        3578d0:	e59d0000 	ldr	r0, [sp]
        3578d4:	eb61ae38 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3578d8:	e1a01005 	mov	r1, r5
        3578dc:	e59f00f0 	ldr	r0, [pc, #f0]	; 3579d4 <TObjectReader::ReadFrame(void)+0x154>
        3578e0:	eb61aa14 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        3578e4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        3578e8:	e5810000 	str	r0, [r1]
        3578ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        3578f0:	e3a06000 	mov	r6, #0	; 0x0
        3578f4:	e3550000 	cmp	r5, #0	; 0x0
        3578f8:	da00000d 	ble	357934 <TObjectReader::ReadFrame(void)+0xb4>
        3578fc:	e1a00004 	mov	r0, r4
        357900:	eb5bae2a 	bl	1a431b0 <TObjectReader::$Scan(void)>
        357904:	eb61aa10 	bl	1bc214c <$AllocateRefHandle(long)>
        357908:	e1a07000 	mov	r7, r0
        35790c:	e1a01006 	mov	r1, r6
        357910:	e5902000 	ldr	r2, [r0]
        357914:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        357918:	e5900000 	ldr	r0, [r0]
        35791c:	eb61ba8d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        357920:	e1a00007 	mov	r0, r7
        357924:	eb61ae24 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357928:	e2866001 	add	r6, r6, #1	; 0x1
        35792c:	e1560005 	cmp	r6, r5
        357930:	bafffff1 	blt	3578fc <TObjectReader::ReadFrame(void)+0x7c>
        357934:	e1a00009 	mov	r0, r9
        357938:	eb61aa03 	bl	1bc214c <$AllocateRefHandle(long)>
        35793c:	e58d0000 	str	r0, [sp]
        357940:	e1a0000d 	mov	r0, sp
        357944:	e28d1008 	add	r1, sp, #8	; 0x8
        357948:	eb61a9fe 	bl	1bc2148 <$AllocateMapWithTags__FRC6RefVarT1>
        35794c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        357950:	e5810000 	str	r0, [r1]
        357954:	e59d0000 	ldr	r0, [sp]
        357958:	eb61ae17 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35795c:	e28d0008 	add	r0, sp, #8	; 0x8
        357960:	eb61a9f7 	bl	1bc2144 <$AllocateFrameWithMap(RefVar const &)>
        357964:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        357968:	e28d2008 	add	r2, sp, #8	; 0x8
        35796c:	e5810000 	str	r0, [r1]
        357970:	e1a01008 	mov	r1, r8
        357974:	e5940000 	ldr	r0, [r4]
        357978:	eb5be3b6 	bl	1a50858 <TPrecedentsForReading::$Replace(long, RefVar const &)>
        35797c:	e3a06000 	mov	r6, #0	; 0x0
        357980:	e3550000 	cmp	r5, #0	; 0x0
        357984:	da00000d 	ble	3579c0 <TObjectReader::ReadFrame(void)+0x140>
        357988:	e1a00004 	mov	r0, r4
        35798c:	eb5bae07 	bl	1a431b0 <TObjectReader::$Scan(void)>
        357990:	eb61a9ed 	bl	1bc214c <$AllocateRefHandle(long)>
        357994:	e1a07000 	mov	r7, r0
        357998:	e1a01006 	mov	r1, r6
        35799c:	e5902000 	ldr	r2, [r0]
        3579a0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        3579a4:	e5900000 	ldr	r0, [r0]
        3579a8:	eb61ba6a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        3579ac:	e1a00007 	mov	r0, r7
        3579b0:	eb61ae01 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3579b4:	e2866001 	add	r6, r6, #1	; 0x1
        3579b8:	e1560005 	cmp	r6, r5
        3579bc:	bafffff1 	blt	357988 <TObjectReader::ReadFrame(void)+0x108>
        3579c0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        3579c4:	e5904000 	ldr	r4, [r0]
        3579c8:	eb61adfb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3579cc:	e1a00004 	mov	r0, r4
        3579d0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        3579d4:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: TObjectReader::ReadSymbol(void)
 * Address: 003579d8
 */
TObjectReader::ReadSymbol(void) {
    /*
        3579d8:	e1a0c00d 	mov	ip, sp
        3579dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3579e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        3579e4:	e1a04000 	mov	r4, r0
        3579e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        3579ec:	e3a00002 	mov	r0, #2	; 0x2
        3579f0:	eb61a9d5 	bl	1bc214c <$AllocateRefHandle(long)>
        3579f4:	e58d0004 	str	r0, [sp, #4]	; fField4
        3579f8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        3579fc:	eb5ba5ad 	bl	1a410b8 <$LongFromPipe(CPipe &)>
        357a00:	e58d0000 	str	r0, [sp]
        357a04:	e3500000 	cmp	r0, #0	; 0x0
        357a08:	ba000001 	blt	357a14 <TObjectReader::ReadSymbol(void)+0x3c>
        357a0c:	e35000ff 	cmp	r0, #255	; 0xff
        357a10:	da000005 	ble	357a2c <TObjectReader::ReadSymbol(void)+0x54>
        357a14:	e59f0074 	ldr	r0, [pc, #74]	; 357a90 <TObjectReader::ReadSymbol(void)+0xb8>
        357a18:	e5900000 	ldr	r0, [r0]
        357a1c:	e3a02000 	mov	r2, #0	; 0x0
        357a20:	e3a010a1 	mov	r1, #161	; 0xa1
        357a24:	e2411cbd 	sub	r1, r1, #48384	; 0xbd00
        357a28:	eb622ddb 	bl	1be319c <$Throw>
        357a2c:	e24ddf41 	sub	sp, sp, #260	; 0x104
        357a30:	e1a0300d 	mov	r3, sp
        357a34:	e28d2f41 	add	r2, sp, #260	; 0x104
        357a38:	e28d1004 	add	r1, sp, #4	; 0x4
        357a3c:	e594c004 	ldr	ip, [r4, #4]	; fField4
        357a40:	e1a0000c 	mov	r0, ip
        357a44:	e59cc000 	ldr	ip, [ip]
        357a48:	e1a0e00f 	mov	lr, pc
        357a4c:	e28cf014 	add	pc, ip, #20	; 0x14
        357a50:	e3a00000 	mov	r0, #0	; 0x0
        357a54:	e28d1004 	add	r1, sp, #4	; 0x4
        357a58:	e59d2104 	ldr	r2, [sp, #260]
        357a5c:	e7c10002 	strb	r0, [r1, r2]
        357a60:	e28d0004 	add	r0, sp, #4	; 0x4
        357a64:	eb61b605 	bl	1bc5280 <$Intern(char *)>
        357a68:	e59d1108 	ldr	r1, [sp, #264]
        357a6c:	e5810000 	str	r0, [r1]
        357a70:	e28d1f42 	add	r1, sp, #264	; 0x108
        357a74:	e5940000 	ldr	r0, [r4]
        357a78:	eb5bdb37 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        357a7c:	e59d0108 	ldr	r0, [sp, #264]
        357a80:	e5904000 	ldr	r4, [r0]
        357a84:	eb61adcc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357a88:	e1a00004 	mov	r0, r4
        357a8c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        357a90:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

/**
 * Symbol: TObjectReader::ReadPrecedent(void)
 * Address: 00357a94
 */
TObjectReader::ReadPrecedent(void) {
    /*
        357a94:	e1a0c00d 	mov	ip, sp
        357a98:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        357a9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        357aa0:	e1a04000 	mov	r4, r0
        357aa4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        357aa8:	eb5ba582 	bl	1a410b8 <$LongFromPipe(CPipe &)>
        357aac:	e1a01000 	mov	r1, r0
        357ab0:	e5940000 	ldr	r0, [r4]
        357ab4:	ebfff862 	bl	355c44 <TBucketArray::ElementAt(long)>
        357ab8:	e5900000 	ldr	r0, [r0]
        357abc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectReader::ReadSmallRect(void)
 * Address: 00357ac0
 */
TObjectReader::ReadSmallRect(void) {
    /*
        357ac0:	e1a0c00d 	mov	ip, sp
        357ac4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        357ac8:	e24cb004 	sub	fp, ip, #4	; 0x4
        357acc:	e1a04000 	mov	r4, r0
        357ad0:	e24dd008 	sub	sp, sp, #8	; 0x8
        357ad4:	e3a00002 	mov	r0, #2	; 0x2
        357ad8:	eb61a99b 	bl	1bc214c <$AllocateRefHandle(long)>
        357adc:	e58d0004 	str	r0, [sp, #4]	; fField4
        357ae0:	e1a0100d 	mov	r1, sp
        357ae4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        357ae8:	eb6235f3 	bl	1be52bc <CPipe::$__rs(long &)>
        357aec:	e59d0000 	ldr	r0, [sp]
        357af0:	eb5bb1de 	bl	1a44270 <$UnpackSmallRect(long)>
        357af4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        357af8:	e5810000 	str	r0, [r1]
        357afc:	e28d1004 	add	r1, sp, #4	; 0x4
        357b00:	e5940000 	ldr	r0, [r4]
        357b04:	eb5bdb14 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        357b08:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        357b0c:	e5904000 	ldr	r4, [r0]
        357b10:	eb61ada9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357b14:	e1a00004 	mov	r0, r4
        357b18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectReader::ReadLargeBinary(void)
 * Address: 00357b78
 */
TObjectReader::ReadLargeBinary(void) {
    /*
        357b78:	e1a0c00d 	mov	ip, sp
        357b7c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        357b80:	e24cb004 	sub	fp, ip, #4	; 0x4
        357b84:	e1a04000 	mov	r4, r0
        357b88:	e24dd004 	sub	sp, sp, #4	; 0x4
        357b8c:	e3a00002 	mov	r0, #2	; 0x2
        357b90:	eb61a96d 	bl	1bc214c <$AllocateRefHandle(long)>
        357b94:	e58d0000 	str	r0, [sp]
        357b98:	e5940008 	ldr	r0, [r4, #8]	; fField8
        357b9c:	e3300000 	teq	r0, #0	; 0x0
        357ba0:	1a000004 	bne	357bb8 <TObjectReader::ReadLargeBinary(void)+0x40>
        357ba4:	e59f125c 	ldr	r1, [pc, #25c]	; 357e08 <TObjectReader::ReadLargeBinary(void)+0x290>
        357ba8:	e59f025c 	ldr	r0, [pc, #25c]	; 357e0c <TObjectReader::ReadLargeBinary(void)+0x294>
        357bac:	e5900000 	ldr	r0, [r0]
        357bb0:	e3a02000 	mov	r2, #0	; 0x0
        357bb4:	eb622d78 	bl	1be319c <$Throw>
        357bb8:	e24dd024 	sub	sp, sp, #36	; 0x24
        357bbc:	e3a00002 	mov	r0, #2	; 0x2
        357bc0:	eb61a961 	bl	1bc214c <$AllocateRefHandle(long)>
        357bc4:	e58d0000 	str	r0, [sp]
        357bc8:	e1a0100d 	mov	r1, sp
        357bcc:	e5940000 	ldr	r0, [r4]
        357bd0:	eb5bdae1 	bl	1a4e75c <TPrecedentsForReading::$Append(RefVar const &)>
        357bd4:	e1a09000 	mov	r9, r0
        357bd8:	e59d0000 	ldr	r0, [sp]
        357bdc:	eb61ad76 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357be0:	e3a0a000 	mov	sl, #0	; 0x0
        357be4:	e1a00004 	mov	r0, r4
        357be8:	eb5bad70 	bl	1a431b0 <TObjectReader::$Scan(void)>
        357bec:	eb61a956 	bl	1bc214c <$AllocateRefHandle(long)>
        357bf0:	e58d0020 	str	r0, [sp, #32]
        357bf4:	e28d101c 	add	r1, sp, #28	; 0x1c
        357bf8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        357bfc:	eb6235ad 	bl	1be52b8 <CPipe::$__rs(char &)>
        357c00:	e28d1010 	add	r1, sp, #16	; 0x10
        357c04:	e5940004 	ldr	r0, [r4, #4]	; fField4
        357c08:	eb6235ab 	bl	1be52bc <CPipe::$__rs(long &)>
        357c0c:	e28d1018 	add	r1, sp, #24	; 0x18
        357c10:	e5940004 	ldr	r0, [r4, #4]	; fField4
        357c14:	eb6235a8 	bl	1be52bc <CPipe::$__rs(long &)>
        357c18:	e28d1014 	add	r1, sp, #20	; 0x14
        357c1c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        357c20:	eb6235a5 	bl	1be52bc <CPipe::$__rs(long &)>
        357c24:	e28d100c 	add	r1, sp, #12	; 0xc
        357c28:	e5940004 	ldr	r0, [r4, #4]	; fField4
        357c2c:	eb6235a2 	bl	1be52bc <CPipe::$__rs(long &)>
        357c30:	e3a06000 	mov	r6, #0	; 0x0
        357c34:	e3a07000 	mov	r7, #0	; 0x0
        357c38:	e59d0018 	ldr	r0, [sp, #24]
        357c3c:	e59f81cc 	ldr	r8, [pc, #1cc]	; 357e10 <TObjectReader::ReadLargeBinary(void)+0x298>
        357c40:	e3a050e9 	mov	r5, #233	; 0xe9
        357c44:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        357c48:	e3300000 	teq	r0, #0	; 0x0
        357c4c:	0a000007 	beq	357c70 <TObjectReader::ReadLargeBinary(void)+0xf8>
        357c50:	e2800001 	add	r0, r0, #1	; 0x1
        357c54:	eb61fbc3 	bl	1bd6b68 <$malloc>
        357c58:	e1b06000 	movs	r6, r0
        357c5c:	1a000003 	bne	357c70 <TObjectReader::ReadLargeBinary(void)+0xf8>
        357c60:	e3a02000 	mov	r2, #0	; 0x0
        357c64:	e1a01005 	mov	r1, r5
        357c68:	e5980000 	ldr	r0, [r8]
        357c6c:	eb622d4a 	bl	1be319c <$Throw>
        357c70:	e59d0014 	ldr	r0, [sp, #20]
        357c74:	e3300000 	teq	r0, #0	; 0x0
        357c78:	0a000009 	beq	357ca4 <TObjectReader::ReadLargeBinary(void)+0x12c>
        357c7c:	eb61fbb9 	bl	1bd6b68 <$malloc>
        357c80:	e1b07000 	movs	r7, r0
        357c84:	1a000006 	bne	357ca4 <TObjectReader::ReadLargeBinary(void)+0x12c>
        357c88:	e3360000 	teq	r6, #0	; 0x0
        357c8c:	11a00006 	movne	r0, r6
        357c90:	1b61eb30 	blne	1bd2958 <$free>
        357c94:	e3a02000 	mov	r2, #0	; 0x0
        357c98:	e1a01005 	mov	r1, r5
        357c9c:	e5980000 	ldr	r0, [r8]
        357ca0:	eb622d3d 	bl	1be319c <$Throw>
        357ca4:	e52da06c 	str	sl, [sp, -#108]!
        357ca8:	e28d0008 	add	r0, sp, #8	; 0x8
        357cac:	eb616b30 	bl	1bb2974 <$setjmp>
        357cb0:	e3300000 	teq	r0, #0	; 0x0
        357cb4:	1a000057 	bne	357e18 <TObjectReader::ReadLargeBinary(void)+0x2a0>
        357cb8:	e1a0000d 	mov	r0, sp
        357cbc:	eb6220ee 	bl	1be007c <$AddExceptionHandler>
        357cc0:	e59d0084 	ldr	r0, [sp, #132]
        357cc4:	e3300000 	teq	r0, #0	; 0x0
        357cc8:	0a000009 	beq	357cf4 <TObjectReader::ReadLargeBinary(void)+0x17c>
        357ccc:	e28d3074 	add	r3, sp, #116	; 0x74
        357cd0:	e28d2084 	add	r2, sp, #132	; 0x84
        357cd4:	e1a01006 	mov	r1, r6
        357cd8:	e594c004 	ldr	ip, [r4, #4]	; fField4
        357cdc:	e1a0000c 	mov	r0, ip
        357ce0:	e59cc000 	ldr	ip, [ip]
        357ce4:	e1a0e00f 	mov	lr, pc
        357ce8:	e28cf014 	add	pc, ip, #20	; 0x14
        357cec:	e59d0084 	ldr	r0, [sp, #132]
        357cf0:	e7c6a000 	strb	sl, [r6, r0]
        357cf4:	e59d0080 	ldr	r0, [sp, #128]
        357cf8:	e3300000 	teq	r0, #0	; 0x0
        357cfc:	0a000007 	beq	357d20 <TObjectReader::ReadLargeBinary(void)+0x1a8>
        357d00:	e28d3074 	add	r3, sp, #116	; 0x74
        357d04:	e28d2080 	add	r2, sp, #128	; 0x80
        357d08:	e1a01007 	mov	r1, r7
        357d0c:	e594c004 	ldr	ip, [r4, #4]	; fField4
        357d10:	e1a0000c 	mov	r0, ip
        357d14:	e59cc000 	ldr	ip, [ip]
        357d18:	e1a0e00f 	mov	lr, pc
        357d1c:	e28cf014 	add	pc, ip, #20	; 0x14
        357d20:	e5dd3088 	ldrb	r3, [sp, #136]
        357d24:	e3a02000 	mov	r2, #0	; 0x0
        357d28:	e1a00007 	mov	r0, r7
        357d2c:	e59d1080 	ldr	r1, [sp, #128]
        357d30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        357d34:	e1a03006 	mov	r3, r6
        357d38:	e92d000c 	stmdb	sp!, {r2, r3}
        357d3c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        357d40:	e5942004 	ldr	r2, [r4, #4]	; fField4
        357d44:	e59d3094 	ldr	r3, [sp, #148]
        357d48:	e28d0088 	add	r0, sp, #136	; 0x88
        357d4c:	eb5ece2a 	bl	1b0b5fc <$CreateLargeObject(unsigned long *, TStore *, CPipe *, long, unsigned char, char *, void *, unsigned char, TLOCallback *, char *)>
        357d50:	e28dd018 	add	sp, sp, #24	; 0x18
        357d54:	e1a06000 	mov	r6, r0
        357d58:	e1a0000d 	mov	r0, sp
        357d5c:	eb6224d5 	bl	1be10b8 <$ExitHandler>
        357d60:	e28dd06c 	add	sp, sp, #108	; 0x6c
        357d64:	e59f50a8 	ldr	r5, [pc, #a8]	; 357e14 <TObjectReader::ReadLargeBinary(void)+0x29c>
        357d68:	e3360000 	teq	r6, #0	; 0x0
        357d6c:	0a000003 	beq	357d80 <TObjectReader::ReadLargeBinary(void)+0x208>
        357d70:	e1a01006 	mov	r1, r6
        357d74:	e3a02000 	mov	r2, #0	; 0x0
        357d78:	e5950000 	ldr	r0, [r5]
        357d7c:	eb622d06 	bl	1be319c <$Throw>
        357d80:	e24dd004 	sub	sp, sp, #4	; 0x4
        357d84:	e5941008 	ldr	r1, [r4, #8]	; fField8
        357d88:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        357d8c:	e1a0000d 	mov	r0, sp
        357d90:	e3a03000 	mov	r3, #0	; 0x0
        357d94:	eb5eef17 	bl	1b139f8 <$MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)>
        357d98:	e1b06000 	movs	r6, r0
        357d9c:	0a000006 	beq	357dbc <TObjectReader::ReadLargeBinary(void)+0x244>
        357da0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        357da4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        357da8:	eb5ed217 	bl	1b0c60c <$DeleteLargeObject(TStore *, unsigned long)>
        357dac:	e1a01006 	mov	r1, r6
        357db0:	e3a02000 	mov	r2, #0	; 0x0
        357db4:	e5950000 	ldr	r0, [r5]
        357db8:	eb622cf7 	bl	1be319c <$Throw>
        357dbc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        357dc0:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        357dc4:	e59d3000 	ldr	r3, [sp]
        357dc8:	e28d1024 	add	r1, sp, #36	; 0x24
        357dcc:	eb5bb548 	bl	1a452f4 <$WrapLargeObject>
        357dd0:	e59d1028 	ldr	r1, [sp, #40]
        357dd4:	e28d2028 	add	r2, sp, #40	; 0x28
        357dd8:	e5810000 	str	r0, [r1]
        357ddc:	e1a01009 	mov	r1, r9
        357de0:	e5940000 	ldr	r0, [r4]
        357de4:	eb5be29b 	bl	1a50858 <TPrecedentsForReading::$Replace(long, RefVar const &)>
        357de8:	e59d0028 	ldr	r0, [sp, #40]
        357dec:	e5904000 	ldr	r4, [r0]
        357df0:	e59d0024 	ldr	r0, [sp, #36]
        357df4:	eb61acf0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357df8:	e59d0028 	ldr	r0, [sp, #40]
        357dfc:	eb61acee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357e00:	e1a00004 	mov	r0, r4
        357e04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        357e08:	ffff446f 	swinv	0x00ff446f
        357e0c:	003712fc 	ldreqsh	r1, [r7], -ip
        357e10:	00371318 	eoreqs	r1, r7, r8, lsl r3
        357e14:	00371308 	eoreqs	r1, r7, r8, lsl #6
        357e18:	e3360000 	teq	r6, #0	; 0x0
        357e1c:	11a00006 	movne	r0, r6
        357e20:	1b61eacc 	blne	1bd2958 <$free>
        357e24:	e3370000 	teq	r7, #0	; 0x0
        357e28:	11a00007 	movne	r0, r7
        357e2c:	1b61eac9 	blne	1bd2958 <$free>
        357e30:	e1a0000d 	mov	r0, sp
        357e34:	eb6228c6 	bl	1be2154 <$NextHandler>
        357e38:	eafffff6 	b	357e18 <TObjectReader::ReadLargeBinary(void)+0x2a0>
    */
}

/**
 * Symbol: TObjectReader::Scan(void)
 * Address: 00357e3c
 */
TObjectReader::Scan(void) {
    /*
        357e3c:	e1a0c00d 	mov	ip, sp
        357e40:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        357e44:	e24cb004 	sub	fp, ip, #4	; 0x4
        357e48:	e1a04000 	mov	r4, r0
        357e4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        357e50:	e5900004 	ldr	r0, [r0, #4]	; fField4
        357e54:	e1a0100d 	mov	r1, sp
        357e58:	eb62351a 	bl	1be52c8 <CPipe::$__rs(unsigned char &)>
        357e5c:	e5dd0000 	ldrb	r0, [sp]
        357e60:	e59f6044 	ldr	r6, [pc, #44]	; 357eac <TObjectReader::Scan(void)+0x70>
        357e64:	e350000c 	cmp	r0, #12	; 0xc
        357e68:	908ff100 	addls	pc, pc, r0, lsl #2
        357e6c:	ea00002f 	b	357f30 <TObjectReader::Scan(void)+0xf4>
        357e70:	ea00000e 	b	357eb0 <TObjectReader::Scan(void)+0x74>
        357e74:	ea000010 	b	357ebc <TObjectReader::Scan(void)+0x80>
        357e78:	ea000012 	b	357ec8 <TObjectReader::Scan(void)+0x8c>
        357e7c:	ea000014 	b	357ed4 <TObjectReader::Scan(void)+0x98>
        357e80:	ea000017 	b	357ee4 <TObjectReader::Scan(void)+0xa8>
        357e84:	ea000016 	b	357ee4 <TObjectReader::Scan(void)+0xa8>
        357e88:	ea000019 	b	357ef4 <TObjectReader::Scan(void)+0xb8>
        357e8c:	ea00001b 	b	357f00 <TObjectReader::Scan(void)+0xc4>
        357e90:	ea00000f 	b	357ed4 <TObjectReader::Scan(void)+0x98>
        357e94:	ea00001c 	b	357f0c <TObjectReader::Scan(void)+0xd0>
        357e98:	ea00001e 	b	357f18 <TObjectReader::Scan(void)+0xdc>
        357e9c:	ea00001f 	b	357f20 <TObjectReader::Scan(void)+0xe4>
        357ea0:	e1a00004 	mov	r0, r4
        357ea4:	eb5c289f 	bl	1a62128 <TObjectReader::$ReadLargeBinary(void)>
        357ea8:	ea00001e 	b	357f28 <TObjectReader::Scan(void)+0xec>
        357eac:	00371308 	eoreqs	r1, r7, r8, lsl #6
        357eb0:	e1a00004 	mov	r0, r4
        357eb4:	eb5c2892 	bl	1a62104 <TObjectReader::$ReadImmediate(void)>
        357eb8:	ea00001a 	b	357f28 <TObjectReader::Scan(void)+0xec>
        357ebc:	e1a00004 	mov	r0, r4
        357ec0:	eb5c2890 	bl	1a62108 <TObjectReader::$ReadCharacter(void)>
        357ec4:	ea000017 	b	357f28 <TObjectReader::Scan(void)+0xec>
        357ec8:	e1a00004 	mov	r0, r4
        357ecc:	eb5c288e 	bl	1a6210c <TObjectReader::$ReadUnicodeCharacter(void)>
        357ed0:	ea000014 	b	357f28 <TObjectReader::Scan(void)+0xec>
        357ed4:	e5dd1000 	ldrb	r1, [sp]
        357ed8:	e1a00004 	mov	r0, r4
        357edc:	eb5c288b 	bl	1a62110 <TObjectReader::$ReadBinaryObject(unsigned char)>
        357ee0:	ea000010 	b	357f28 <TObjectReader::Scan(void)+0xec>
        357ee4:	e5dd1000 	ldrb	r1, [sp]
        357ee8:	e1a00004 	mov	r0, r4
        357eec:	eb5c2888 	bl	1a62114 <TObjectReader::$ReadArray(unsigned char)>
        357ef0:	ea00000c 	b	357f28 <TObjectReader::Scan(void)+0xec>
        357ef4:	e1a00004 	mov	r0, r4
        357ef8:	eb5c2886 	bl	1a62118 <TObjectReader::$ReadFrame(void)>
        357efc:	ea000009 	b	357f28 <TObjectReader::Scan(void)+0xec>
        357f00:	e1a00004 	mov	r0, r4
        357f04:	eb5c2884 	bl	1a6211c <TObjectReader::$ReadSymbol(void)>
        357f08:	ea000006 	b	357f28 <TObjectReader::Scan(void)+0xec>
        357f0c:	e1a00004 	mov	r0, r4
        357f10:	eb5c2882 	bl	1a62120 <TObjectReader::$ReadPrecedent(void)>
        357f14:	ea000003 	b	357f28 <TObjectReader::Scan(void)+0xec>
        357f18:	e3a05002 	mov	r5, #2	; 0x2
        357f1c:	ea000008 	b	357f44 <TObjectReader::Scan(void)+0x108>
        357f20:	e1a00004 	mov	r0, r4
        357f24:	eb5c287e 	bl	1a62124 <TObjectReader::$ReadSmallRect(void)>
        357f28:	e1a05000 	mov	r5, r0
        357f2c:	ea000004 	b	357f44 <TObjectReader::Scan(void)+0x108>
        357f30:	e3a02000 	mov	r2, #0	; 0x0
        357f34:	e3a010a1 	mov	r1, #161	; 0xa1
        357f38:	e2411cbd 	sub	r1, r1, #48384	; 0xbd00
        357f3c:	e5960000 	ldr	r0, [r6]
        357f40:	eb622c95 	bl	1be319c <$Throw>
        357f44:	e24dd004 	sub	sp, sp, #4	; 0x4
        357f48:	e3a07000 	mov	r7, #0	; 0x0
        357f4c:	e5d4000c 	ldrb	r0, [r4, #12]	; fField12
        357f50:	e3300000 	teq	r0, #0	; 0x0
        357f54:	1a000008 	bne	357f7c <TObjectReader::Scan(void)+0x140>
        357f58:	e3a07001 	mov	r7, #1	; 0x1
        357f5c:	e1a00005 	mov	r0, r5
        357f60:	eb61a879 	bl	1bc214c <$AllocateRefHandle(long)>
        357f64:	e58d0000 	str	r0, [sp]
        357f68:	e1a0000d 	mov	r0, sp
        357f6c:	eb61b4c6 	bl	1bc528c <$IsFunction(RefVar const &)>
        357f70:	e3300000 	teq	r0, #0	; 0x0
        357f74:	13a04001 	movne	r4, #1	; 0x1
        357f78:	1a000000 	bne	357f80 <TObjectReader::Scan(void)+0x144>
        357f7c:	e3a04000 	mov	r4, #0	; 0x0
        357f80:	e3370000 	teq	r7, #0	; 0x0
        357f84:	159d0000 	ldrne	r0, [sp]
        357f88:	1b61ac8b 	blne	1bc31bc <$DisposeRefHandle(RefHandle *)>
        357f8c:	e3340000 	teq	r4, #0	; 0x0
        357f90:	0a000004 	beq	357fa8 <TObjectReader::Scan(void)+0x16c>
        357f94:	e3a02000 	mov	r2, #0	; 0x0
        357f98:	e3a01e3a 	mov	r1, #928	; 0x3a0
        357f9c:	e2411903 	sub	r1, r1, #49152	; 0xc000
        357fa0:	e5960000 	ldr	r0, [r6]
        357fa4:	eb622c7c 	bl	1be319c <$Throw>
        357fa8:	e1a00005 	mov	r0, r5
        357fac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

