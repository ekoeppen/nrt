#include "include/TTestReporter.h"

/**
 * Symbol: TTestReporter::__ct(unsigned long, unsigned long, unsigned long)
 * Address: 0022b414
 */
TTestReporter::TTestReporter(unsigned long, unsigned long, unsigned long) {
    /*
        22b414:	e1a0c00d 	mov	ip, sp
        22b418:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22b41c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b420:	e1a06001 	mov	r6, r1
        22b424:	e1a05002 	mov	r5, r2
        22b428:	e1a04003 	mov	r4, r3
        22b42c:	e3300000 	teq	r0, #0	; 0x0
        22b430:	1a000003 	bne	22b444 <TTestReporter::__ct(unsigned long, unsigned long, unsigned long)+0x30>
        22b434:	e3a00e1a 	mov	r0, #416	; 0x1a0
        22b438:	eb668cbe 	bl	1bce738 <$__nw(unsigned int)>
        22b43c:	e3300000 	teq	r0, #0	; 0x0
        22b440:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        22b444:	e3a01001 	mov	r1, #1	; 0x1
        22b448:	e5801190 	str	r1, [r0, #400]	; fField400
        22b44c:	e3a01000 	mov	r1, #0	; 0x0
        22b450:	e2800f62 	add	r0, r0, #392	; 0x188
        22b454:	e8800060 	stmia	r0, {r5, r6}
        22b458:	e2400f62 	sub	r0, r0, #392	; 0x188
        22b45c:	e5c01060 	strb	r1, [r0, #96]	; fField96
        22b460:	e580119c 	str	r1, [r0, #412]	; fField412
        22b464:	e5804198 	str	r4, [r0, #408]	; fField408
        22b468:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TTestReporter::__dt(void)
 * Address: 0022b46c
 */
TTestReporter::~TTestReporter(void) {
    /*
        22b46c:	e3110001 	tst	r1, #1	; 0x1
        22b470:	1a66889a 	bne	1bcd6e0 <$__dl(void *)>
        22b474:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTestReporter::SendToTestAgent(unsigned long, char *, long)
 * Address: 0022b478
 */
TTestReporter::SendToTestAgent(unsigned long, char *, long) {
    /*
        22b478:	e1a0c00d 	mov	ip, sp
        22b47c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22b480:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b484:	e1a05000 	mov	r5, r0
        22b488:	e1a07001 	mov	r7, r1
        22b48c:	e1a04002 	mov	r4, r2
        22b490:	e1a06003 	mov	r6, r3
        22b494:	e24ddf45 	sub	sp, sp, #276	; 0x114
        22b498:	e28d0008 	add	r0, sp, #8	; 0x8
        22b49c:	eb66e365 	bl	1be4238 <TAEvent::$__ct(void)>
        22b4a0:	e1a0000d 	mov	r0, sp
        22b4a4:	e5951188 	ldr	r1, [r5, #392]	; fField392
        22b4a8:	eb668887 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        22b4ac:	e59f0034 	ldr	r0, [pc, #34]	; 22b4e8 <TTestReporter::SendToTestAgent(unsigned long, char *, long)+0x70>
        22b4b0:	e58d0008 	str	r0, [sp, #8]
        22b4b4:	e59f0030 	ldr	r0, [pc, #30]	; 22b4ec <TTestReporter::SendToTestAgent(unsigned long, char *, long)+0x74>
        22b4b8:	e58d000c 	str	r0, [sp, #12]
        22b4bc:	e58d7010 	str	r7, [sp, #16]
        22b4c0:	e5b5018c 	ldr	r0, [r5, #396]!	; fField396
        22b4c4:	e3a05000 	mov	r5, #0	; 0x0
        22b4c8:	e3340000 	teq	r4, #0	; 0x0
        22b4cc:	e58d0018 	str	r0, [sp, #24]
        22b4d0:	0a000006 	beq	22b4f0 <TTestReporter::SendToTestAgent(unsigned long, char *, long)+0x78>
        22b4d4:	e28d1034 	add	r1, sp, #52	; 0x34
        22b4d8:	e1a00004 	mov	r0, r4
        22b4dc:	e3a020e0 	mov	r2, #224	; 0xe0
        22b4e0:	eb66ce9b 	bl	1bdef54 <$BlockMove>
        22b4e4:	ea000002 	b	22b4f4 <TTestReporter::SendToTestAgent(unsigned long, char *, long)+0x7c>
        22b4e8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        22b4ec:	74737465 	ldrvcbt	r7, [r3], -#1125
        22b4f0:	e5cd5034 	strb	r5, [sp, #52]
        22b4f4:	e3a0c000 	mov	ip, #0	; 0x0
        22b4f8:	e1a01005 	mov	r1, r5
        22b4fc:	e3a03000 	mov	r3, #0	; 0x0
        22b500:	e1a02005 	mov	r2, r5
        22b504:	e3a00000 	mov	r0, #0	; 0x0
        22b508:	e58d6014 	str	r6, [sp, #20]
        22b50c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        22b510:	e1a0300c 	mov	r3, ip
        22b514:	e3a02f43 	mov	r2, #268	; 0x10c
        22b518:	e92d000c 	stmdb	sp!, {r2, r3}
        22b51c:	e28d3020 	add	r3, sp, #32	; 0x20
        22b520:	e28d0018 	add	r0, sp, #24	; 0x18
        22b524:	e3a02000 	mov	r2, #0	; 0x0
        22b528:	e3a01001 	mov	r1, #1	; 0x1
        22b52c:	eb66be05 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        22b530:	e28dd018 	add	sp, sp, #24	; 0x18
        22b534:	e1a0000d 	mov	r0, sp
        22b538:	e3a01000 	mov	r1, #0	; 0x0
        22b53c:	eb668c78 	bl	1bce724 <TUObject::$__dt(void)>
        22b540:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTestReporter::TestReportError(char *, char *, long)
 * Address: 0022b544
 */
TTestReporter::TestReportError(char *, char *, long) {
    /*
        22b544:	e1a0c00d 	mov	ip, sp
        22b548:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22b54c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b550:	e1a06000 	mov	r6, r0
        22b554:	e1a04001 	mov	r4, r1
        22b558:	e1a07002 	mov	r7, r2
        22b55c:	e1a05003 	mov	r5, r3
        22b560:	e24ddc01 	sub	sp, sp, #256	; 0x100
        22b564:	e1a00001 	mov	r0, r1
        22b568:	eb662950 	bl	1bb5ab0 <$strlen>
        22b56c:	e35000c8 	cmp	r0, #200	; 0xc8
        22b570:	83a00000 	movhi	r0, #0	; 0x0
        22b574:	85c400c8 	strhib	r0, [r4, #200]
        22b578:	e596019c 	ldr	r0, [r6, #412]	; fField412
        22b57c:	e2800001 	add	r0, r0, #1	; 0x1
        22b580:	e3370000 	teq	r7, #0	; 0x0
        22b584:	e586019c 	str	r0, [r6, #412]	; fField412
        22b588:	1a000017 	bne	22b5ec <TTestReporter::TestReportError(char *, char *, long)+0xa8>
        22b58c:	e3350000 	teq	r5, #0	; 0x0
        22b590:	0a00000b 	beq	22b5c4 <TTestReporter::TestReportError(char *, char *, long)+0x80>
        22b594:	e1a03004 	mov	r3, r4
        22b598:	e1a02005 	mov	r2, r5
        22b59c:	e1a0000d 	mov	r0, sp
        22b5a0:	e28f1f01 	add	r1, pc, #4	; 0x4
        22b5a4:	eb66293a 	bl	1bb5a94 <$sprintf>
        22b5a8:	ea000017 	b	22b60c <TTestReporter::TestReportError(char *, char *, long)+0xc8>
        22b5ac:	54657374 	strplbt	r7, [r5], -#884	; fField884
        22b5b0:	20436173 	subcs	r6, r3, r3, ror r1
        22b5b4:	65204552 	strvs	r4, [r0, -#1362]!	; fField1362
        22b5b8:	523a2025 	eorpls	r2, sl, #37	; 0x25
        22b5bc:	64092573 	strvs	r2, [r9], -#1395
        22b5c0:	0d000000 	stceq	0, cr0, [r0]
        22b5c4:	e1a02004 	mov	r2, r4
        22b5c8:	e1a0000d 	mov	r0, sp
        22b5cc:	e28f1f01 	add	r1, pc, #4	; 0x4
        22b5d0:	eb66292f 	bl	1bb5a94 <$sprintf>
        22b5d4:	ea00000c 	b	22b60c <TTestReporter::TestReportError(char *, char *, long)+0xc8>
        22b5d8:	54657374 	strplbt	r7, [r5], -#884	; fField884
        22b5dc:	20436173 	subcs	r6, r3, r3, ror r1
        22b5e0:	65204552 	strvs	r4, [r0, -#1362]!	; fField1362
        22b5e4:	523a2009 	eorpls	r2, sl, #9	; 0x9
        22b5e8:	25730d00 	ldrcsb	r0, [r3, -#3328]!
        22b5ec:	e1a03004 	mov	r3, r4
        22b5f0:	e92d0008 	stmdb	sp!, {r3}
        22b5f4:	e1a03007 	mov	r3, r7
        22b5f8:	e1a02005 	mov	r2, r5
        22b5fc:	e28d0004 	add	r0, sp, #4	; 0x4
        22b600:	e28f1f07 	add	r1, pc, #28	; 0x1c
        22b604:	eb662922 	bl	1bb5a94 <$sprintf>
        22b608:	e28dd004 	add	sp, sp, #4	; 0x4
        22b60c:	e1a0200d 	mov	r2, sp
        22b610:	e1a00006 	mov	r0, r6
        22b614:	e3a03000 	mov	r3, #0	; 0x0
        22b618:	e3a01004 	mov	r1, #4	; 0x4
        22b61c:	eb6562f9 	bl	1b84208 <TTestReporter::$SendToTestAgent(unsigned long, char *, long)>
        22b620:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        22b624:	54657374 	strplbt	r7, [r5], -#884	; fField884
        22b628:	20436173 	subcs	r6, r3, r3, ror r1
        22b62c:	65204552 	strvs	r4, [r0, -#1362]!	; fField1362
        22b630:	523a2025 	eorpls	r2, sl, #37	; 0x25
        22b634:	64092573 	strvs	r2, [r9], -#1395
        22b638:	0925730d 	stmeqdb	r5!, {r0, r2, r3, r8, r9, ip, sp, lr}
        22b63c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TTestReporter::TestReportErrorValues(char *, char *, long, long)
 * Address: 0022b640
 */
TTestReporter::TestReportErrorValues(char *, char *, long, long) {
    /*
        22b640:	e1a0c00d 	mov	ip, sp
        22b644:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        22b648:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b64c:	e1a05000 	mov	r5, r0
        22b650:	e1a04001 	mov	r4, r1
        22b654:	e1a07002 	mov	r7, r2
        22b658:	e1a06003 	mov	r6, r3
        22b65c:	e59b8004 	ldr	r8, [fp, #4]
        22b660:	e24ddd06 	sub	sp, sp, #384	; 0x180
        22b664:	e1a00001 	mov	r0, r1
        22b668:	eb662910 	bl	1bb5ab0 <$strlen>
        22b66c:	e35000c8 	cmp	r0, #200	; 0xc8
        22b670:	83a00000 	movhi	r0, #0	; 0x0
        22b674:	85c400c8 	strhib	r0, [r4, #200]
        22b678:	e595019c 	ldr	r0, [r5, #412]	; fField412
        22b67c:	e2800001 	add	r0, r0, #1	; 0x1
        22b680:	e1a03008 	mov	r3, r8
        22b684:	e1a02008 	mov	r2, r8
        22b688:	e585019c 	str	r0, [r5, #412]	; fField412
        22b68c:	e92d000c 	stmdb	sp!, {r2, r3}
        22b690:	e1a03006 	mov	r3, r6
        22b694:	e1a02006 	mov	r2, r6
        22b698:	e28d0008 	add	r0, sp, #8	; 0x8
        22b69c:	e28f1f09 	add	r1, pc, #36	; 0x24
        22b6a0:	eb6628fb 	bl	1bb5a94 <$sprintf>
        22b6a4:	e28dd008 	add	sp, sp, #8	; 0x8
        22b6a8:	e3370000 	teq	r7, #0	; 0x0
        22b6ac:	e1a0300d 	mov	r3, sp
        22b6b0:	1a000016 	bne	22b710 <TTestReporter::TestReportErrorValues(char *, char *, long, long)+0xd0>
        22b6b4:	e1a02004 	mov	r2, r4
        22b6b8:	e28d0080 	add	r0, sp, #128	; 0x80
        22b6bc:	e28f1f0d 	add	r1, pc, #52	; 0x34
        22b6c0:	eb6628f3 	bl	1bb5a94 <$sprintf>
        22b6c4:	ea000018 	b	22b72c <TTestReporter::TestReportErrorValues(char *, char *, long, long)+0xec>
        22b6c8:	20202020 	eorcs	r2, r0, r0, lsr #32
        22b6cc:	20202020 	eorcs	r2, r0, r0, lsr #32
        22b6d0:	20202020 	eorcs	r2, r0, r0, lsr #32
        22b6d4:	20202067 	eorcs	r2, r0, r7, rrx
        22b6d8:	6f743a20 	swivs	0x00743a20
        22b6dc:	25642028 	strcsb	r2, [r4, -#40]!
        22b6e0:	30782578 	rsbccs	r2, r8, r8, ror r5
        22b6e4:	292c2065 	stmcsdb	ip!, {r0, r2, r5, r6, sp}
        22b6e8:	78706563 	ldmvcda	r0!, {r0, r1, r5, r6, r8, sl, sp, lr}^
        22b6ec:	74202564 	strvct	r2, [r0], -#1380
        22b6f0:	20283078 	eorcs	r3, r8, r8, ror r0
        22b6f4:	25782900 	ldrcsb	r2, [r8, -#2304]!
        22b6f8:	54657374 	strplbt	r7, [r5], -#884	; fField884
        22b6fc:	20436173 	subcs	r6, r3, r3, ror r1
        22b700:	65204552 	strvs	r4, [r0, -#1362]!	; fField1362
        22b704:	523a2009 	eorpls	r2, sl, #9	; 0x9
        22b708:	25730d25 	ldrcsb	r0, [r3, -#3365]!
        22b70c:	730d0000 	tstvc	sp, #0	; 0x0
        22b710:	e92d0008 	stmdb	sp!, {r3}
        22b714:	e1a03004 	mov	r3, r4
        22b718:	e1a02007 	mov	r2, r7
        22b71c:	e28d0084 	add	r0, sp, #132	; 0x84
        22b720:	e28f1f07 	add	r1, pc, #28	; 0x1c
        22b724:	eb6628da 	bl	1bb5a94 <$sprintf>
        22b728:	e28dd004 	add	sp, sp, #4	; 0x4
        22b72c:	e28d2080 	add	r2, sp, #128	; 0x80
        22b730:	e1a00005 	mov	r0, r5
        22b734:	e3a03000 	mov	r3, #0	; 0x0
        22b738:	e3a01004 	mov	r1, #4	; 0x4
        22b73c:	eb6562b1 	bl	1b84208 <TTestReporter::$SendToTestAgent(unsigned long, char *, long)>
        22b740:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        22b744:	54657374 	strplbt	r7, [r5], -#884	; fField884
        22b748:	20436173 	subcs	r6, r3, r3, ror r1
        22b74c:	65204552 	strvs	r4, [r0, -#1362]!	; fField1362
        22b750:	523a2025 	eorpls	r2, sl, #37	; 0x25
        22b754:	73092573 	tstvc	r9, #482344960	; 0x1cc00000
        22b758:	0d25730d 	stceq	3, cr7, [r5, -#52]!
        22b75c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TTestReporter::TestReportMessage(char *, char *)
 * Address: 0022b760
 */
TTestReporter::TestReportMessage(char *, char *) {
    /*
        22b760:	e1a0c00d 	mov	ip, sp
        22b764:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        22b768:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b76c:	e1a06000 	mov	r6, r0
        22b770:	e1a04001 	mov	r4, r1
        22b774:	e1a05002 	mov	r5, r2
        22b778:	e24ddc01 	sub	sp, sp, #256	; 0x100
        22b77c:	e1a00001 	mov	r0, r1
        22b780:	eb6628ca 	bl	1bb5ab0 <$strlen>
        22b784:	e35000c8 	cmp	r0, #200	; 0xc8
        22b788:	83a00000 	movhi	r0, #0	; 0x0
        22b78c:	85c400c8 	strhib	r0, [r4, #200]
        22b790:	e3350000 	teq	r5, #0	; 0x0
        22b794:	1a000009 	bne	22b7c0 <TTestReporter::TestReportMessage(char *, char *)+0x60>
        22b798:	e1a02004 	mov	r2, r4
        22b79c:	e1a0000d 	mov	r0, sp
        22b7a0:	e28f1f01 	add	r1, pc, #4	; 0x4
        22b7a4:	eb6628ba 	bl	1bb5a94 <$sprintf>
        22b7a8:	ea000009 	b	22b7d4 <TTestReporter::TestReportMessage(char *, char *)+0x74>
        22b7ac:	54657374 	strplbt	r7, [r5], -#884	; fField884
        22b7b0:	20436173 	subcs	r6, r3, r3, ror r1
        22b7b4:	65204d53 	strvs	r4, [r0, -#3411]!	; fField3411
        22b7b8:	473a2025 	ldrmi	r2, [sl, -r5, lsr #32]!
        22b7bc:	730d0000 	tstvc	sp, #0	; 0x0
        22b7c0:	e1a03004 	mov	r3, r4
        22b7c4:	e1a02005 	mov	r2, r5
        22b7c8:	e1a0000d 	mov	r0, sp
        22b7cc:	e28f1f06 	add	r1, pc, #24	; 0x18
        22b7d0:	eb6628af 	bl	1bb5a94 <$sprintf>
        22b7d4:	e1a0200d 	mov	r2, sp
        22b7d8:	e1a00006 	mov	r0, r6
        22b7dc:	e3a03000 	mov	r3, #0	; 0x0
        22b7e0:	e3a01003 	mov	r1, #3	; 0x3
        22b7e4:	eb656287 	bl	1b84208 <TTestReporter::$SendToTestAgent(unsigned long, char *, long)>
        22b7e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        22b7ec:	54657374 	strplbt	r7, [r5], -#884	; fField884
        22b7f0:	20436173 	subcs	r6, r3, r3, ror r1
        22b7f4:	65204d53 	strvs	r4, [r0, -#3411]!	; fField3411
        22b7f8:	473a2025 	ldrmi	r2, [sl, -r5, lsr #32]!
        22b7fc:	73092573 	tstvc	r9, #482344960	; 0x1cc00000
        22b800:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TTestReporter::TestFPrintf(int, char const *,...)
 * Address: 0022b804
 */
TTestReporter::TestFPrintf(int, char const *,...) {
    /*
        22b804:	e1a0c00d 	mov	ip, sp
        22b808:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        22b80c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        22b810:	e24cb014 	sub	fp, ip, #20	; 0x14
        22b814:	e24ddf41 	sub	sp, sp, #260	; 0x104
        22b818:	e28b0010 	add	r0, fp, #16	; 0x10
        22b81c:	e58d0100 	str	r0, [sp, #256]
        22b820:	e28d2c01 	add	r2, sp, #256	; 0x100
        22b824:	e1a0000d 	mov	r0, sp
        22b828:	e59b100c 	ldr	r1, [fp, #12]
        22b82c:	eb6628ab 	bl	1bb5ae0 <$vsprintf>
        22b830:	e3e000ff 	mvn	r0, #255	; 0xff
        22b834:	e58d0100 	str	r0, [sp, #256]
        22b838:	e59b0008 	ldr	r0, [fp, #8]
        22b83c:	e3300002 	teq	r0, #2	; 0x2
        22b840:	1a000004 	bne	22b858 <TTestReporter::TestFPrintf(int, char const *,...)+0x54>
        22b844:	e1a0200d 	mov	r2, sp
        22b848:	e3a03000 	mov	r3, #0	; 0x0
        22b84c:	e3a01003 	mov	r1, #3	; 0x3
        22b850:	e59b0004 	ldr	r0, [fp, #4]
        22b854:	ea000007 	b	22b878 <TTestReporter::TestFPrintf(int, char const *,...)+0x74>
        22b858:	e59b0004 	ldr	r0, [fp, #4]
        22b85c:	e590119c 	ldr	r1, [r0, #412]	; fField412
        22b860:	e2811001 	add	r1, r1, #1	; 0x1
        22b864:	e1a0200d 	mov	r2, sp
        22b868:	e5a0119c 	str	r1, [r0, #412]!	; fField412
        22b86c:	e3a03000 	mov	r3, #0	; 0x0
        22b870:	e3a01004 	mov	r1, #4	; 0x4
        22b874:	e59b0004 	ldr	r0, [fp, #4]
        22b878:	eb656262 	bl	1b84208 <TTestReporter::$SendToTestAgent(unsigned long, char *, long)>
        22b87c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TTestReporter::TestReadDataFile(char *, long, long *, char **)
 * Address: 0022b880
 */
TTestReporter::TestReadDataFile(char *, long, long *, char **) {
    /*
        22b880:	e1a0c00d 	mov	ip, sp
        22b884:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        22b888:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b88c:	e1a08000 	mov	r8, r0
        22b890:	e1a05001 	mov	r5, r1
        22b894:	e1a06002 	mov	r6, r2
        22b898:	e1a04003 	mov	r4, r3
        22b89c:	e59b9004 	ldr	r9, [fp, #4]
        22b8a0:	e24ddf47 	sub	sp, sp, #284	; 0x11c
        22b8a4:	e3a07000 	mov	r7, #0	; 0x0
        22b8a8:	e28d0010 	add	r0, sp, #16	; 0x10
        22b8ac:	eb66e261 	bl	1be4238 <TAEvent::$__ct(void)>
        22b8b0:	e3760001 	cmn	r6, #1	; 0x1
        22b8b4:	1a00001e 	bne	22b934 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0xb4>
        22b8b8:	eb03b6bb 	bl	3193ac <StdioOn(void)>
        22b8bc:	e1a00005 	mov	r0, r5
        22b8c0:	e28f1f1a 	add	r1, pc, #104	; 0x68
        22b8c4:	eb6713e6 	bl	1bf0864 <$fopen>
        22b8c8:	e1b05000 	movs	r5, r0
        22b8cc:	03e07001 	mvneq	r7, #1	; 0x1
        22b8d0:	0a0000b2 	beq	22bba0 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x320>
        22b8d4:	e1a00005 	mov	r0, r5
        22b8d8:	e3a02002 	mov	r2, #2	; 0x2
        22b8dc:	e3a01000 	mov	r1, #0	; 0x0
        22b8e0:	eb0490c5 	bl	34fbfc <fseek>
        22b8e4:	e1a00005 	mov	r0, r5
        22b8e8:	eb049159 	bl	34fe54 <ftell>
        22b8ec:	e5840000 	str	r0, [r4]
        22b8f0:	e1a00005 	mov	r0, r5
        22b8f4:	e3a02000 	mov	r2, #0	; 0x0
        22b8f8:	e3a01000 	mov	r1, #0	; 0x0
        22b8fc:	eb0490be 	bl	34fbfc <fseek>
        22b900:	e5940000 	ldr	r0, [r4]
        22b904:	e2800004 	add	r0, r0, #4	; 0x4
        22b908:	eb66da0c 	bl	1be2140 <$NewPtr>
        22b90c:	e1a03005 	mov	r3, r5
        22b910:	e5890000 	str	r0, [r9]
        22b914:	e3a01001 	mov	r1, #1	; 0x1
        22b918:	e5942000 	ldr	r2, [r4]
        22b91c:	eb6713d4 	bl	1bf0874 <$fread>
        22b920:	e1a00005 	mov	r0, r5
        22b924:	eb6713ca 	bl	1bf0854 <$fclose>
        22b928:	eb03b5ba 	bl	319018 <StdioOff(void)>
        22b92c:	ea00009b 	b	22bba0 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x320>
        22b930:	72000000 	andvc	r0, r0, #0	; 0x0
        22b934:	e59fa164 	ldr	sl, [pc, #164]	; 22baa0 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x220>
        22b938:	e59a0000 	ldr	r0, [sl]
        22b93c:	e3300000 	teq	r0, #0	; 0x0
        22b940:	0a00005f 	beq	22bac4 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x244>
        22b944:	e59f0158 	ldr	r0, [pc, #158]	; 22baa4 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x224>
        22b948:	e5900000 	ldr	r0, [r0]
        22b94c:	e1380000 	teq	r8, r0
        22b950:	1a00005b 	bne	22bac4 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x244>
        22b954:	e24ddf83 	sub	sp, sp, #524	; 0x20c
        22b958:	e28f0f52 	add	r0, pc, #328	; 0x148
        22b95c:	eb666647 	bl	1bc5280 <$Intern(char *)>
        22b960:	eb6659f9 	bl	1bc214c <$AllocateRefHandle(long)>
        22b964:	e58d0000 	str	r0, [sp]
        22b968:	e1a0000d 	mov	r0, sp
        22b96c:	e3a01003 	mov	r1, #3	; 0x3
        22b970:	eb6659f0 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        22b974:	eb6659f4 	bl	1bc214c <$AllocateRefHandle(long)>
        22b978:	e58d0208 	str	r0, [sp, #520]
        22b97c:	e59d0000 	ldr	r0, [sp]
        22b980:	eb665e0d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22b984:	e3a01000 	mov	r1, #0	; 0x0
        22b988:	e3a00002 	mov	r0, #2	; 0x2
        22b98c:	eb6659ee 	bl	1bc214c <$AllocateRefHandle(long)>
        22b990:	e1a08000 	mov	r8, r0
        22b994:	e28d1008 	add	r1, sp, #8	; 0x8
        22b998:	e1a00005 	mov	r0, r5
        22b99c:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        22b9a0:	e3a02001 	mov	r2, #1	; 0x1
        22b9a4:	eb66ee76 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        22b9a8:	e28d0008 	add	r0, sp, #8	; 0x8
        22b9ac:	eb666648 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        22b9b0:	eb6659e5 	bl	1bc214c <$AllocateRefHandle(long)>
        22b9b4:	e1a05000 	mov	r5, r0
        22b9b8:	e5902000 	ldr	r2, [r0]
        22b9bc:	e59d0208 	ldr	r0, [sp, #520]
        22b9c0:	e5900000 	ldr	r0, [r0]
        22b9c4:	e3a01000 	mov	r1, #0	; 0x0
        22b9c8:	eb666a62 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        22b9cc:	e1a00005 	mov	r0, r5
        22b9d0:	eb665df9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22b9d4:	e1a00106 	mov	r0, r6, lsl #2
        22b9d8:	eb6659db 	bl	1bc214c <$AllocateRefHandle(long)>
        22b9dc:	e1a05000 	mov	r5, r0
        22b9e0:	e5902000 	ldr	r2, [r0]
        22b9e4:	e59d0208 	ldr	r0, [sp, #520]
        22b9e8:	e5900000 	ldr	r0, [r0]
        22b9ec:	e3a01001 	mov	r1, #1	; 0x1
        22b9f0:	eb666a58 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        22b9f4:	e1a00005 	mov	r0, r5
        22b9f8:	eb665def 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22b9fc:	e5940000 	ldr	r0, [r4]
        22ba00:	e1a00100 	mov	r0, r0, lsl #2
        22ba04:	eb6659d0 	bl	1bc214c <$AllocateRefHandle(long)>
        22ba08:	e1a05000 	mov	r5, r0
        22ba0c:	e5902000 	ldr	r2, [r0]
        22ba10:	e59d0208 	ldr	r0, [sp, #520]
        22ba14:	e5900000 	ldr	r0, [r0]
        22ba18:	e3a01002 	mov	r1, #2	; 0x2
        22ba1c:	eb666a4d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        22ba20:	e1a00005 	mov	r0, r5
        22ba24:	eb665de4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22ba28:	e28f0f20 	add	r0, pc, #128	; 0x80
        22ba2c:	eb666613 	bl	1bc5280 <$Intern(char *)>
        22ba30:	eb6659c5 	bl	1bc214c <$AllocateRefHandle(long)>
        22ba34:	e58d0004 	str	r0, [sp, #4]
        22ba38:	e28d1004 	add	r1, sp, #4	; 0x4
        22ba3c:	e28d2f82 	add	r2, sp, #520	; 0x208
        22ba40:	e59a0000 	ldr	r0, [sl]
        22ba44:	eb665de2 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        22ba48:	e5880000 	str	r0, [r8]
        22ba4c:	e59d0004 	ldr	r0, [sp, #4]
        22ba50:	eb665dd9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22ba54:	e5980000 	ldr	r0, [r8]
        22ba58:	eb666613 	bl	1bc52ac <$Length(long)>
        22ba5c:	e5840000 	str	r0, [r4]
        22ba60:	e2800004 	add	r0, r0, #4	; 0x4
        22ba64:	eb66d9b5 	bl	1be2140 <$NewPtr>
        22ba68:	e5890000 	str	r0, [r9]
        22ba6c:	e3300000 	teq	r0, #0	; 0x0
        22ba70:	0a000004 	beq	22ba88 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x208>
        22ba74:	e5980000 	ldr	r0, [r8]
        22ba78:	eb6659b7 	bl	1bc215c <$BinaryData(long)>
        22ba7c:	e5942000 	ldr	r2, [r4]
        22ba80:	e5991000 	ldr	r1, [r9]
        22ba84:	eb66cd32 	bl	1bdef54 <$BlockMove>
        22ba88:	e1a00008 	mov	r0, r8
        22ba8c:	eb665dca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22ba90:	e59d0208 	ldr	r0, [sp, #520]
        22ba94:	eb665dc8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22ba98:	e28ddf83 	add	sp, sp, #524	; 0x20c
        22ba9c:	ea00003f 	b	22bba0 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x320>
        22baa0:	0c104d50 	ldceq	13, cr4, [r0], -#320
        22baa4:	0c104d48 	ldceq	13, cr4, [r0], -#288
        22baa8:	61727261 	cmnvs	r2, r1, ror #4
        22baac:	79000000 	stmvcdb	r0, {}
        22bab0:	74657374 	strvcbt	r7, [r5], -#884	; fField884
        22bab4:	4d677252 	sfmmi	f7, 2, [r7, -#328]!
        22bab8:	65616444 	strvsb	r6, [r1, -#1092]!
        22babc:	61746146 	cmnvs	r4, r6, asr #2
        22bac0:	696c6500 	stmvsdb	ip!, {r8, sl, sp, lr}^
        22bac4:	e59f0044 	ldr	r0, [pc, #44]	; 22bb10 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x290>
        22bac8:	e58d0010 	str	r0, [sp, #16]
        22bacc:	e59f0040 	ldr	r0, [pc, #40]	; 22bb14 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x294>
        22bad0:	e58d0014 	str	r0, [sp, #20]
        22bad4:	e3a00009 	mov	r0, #9	; 0x9
        22bad8:	e58d0018 	str	r0, [sp, #24]
        22badc:	e598018c 	ldr	r0, [r8, #396]	; fField396
        22bae0:	e3a07000 	mov	r7, #0	; 0x0
        22bae4:	e58d0020 	str	r0, [sp, #32]
        22bae8:	e58d6028 	str	r6, [sp, #40]
        22baec:	e58d701c 	str	r7, [sp, #28]
        22baf0:	e5940000 	ldr	r0, [r4]
        22baf4:	e3350000 	teq	r5, #0	; 0x0
        22baf8:	e58d002c 	str	r0, [sp, #44]
        22bafc:	0a000005 	beq	22bb18 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x298>
        22bb00:	e28d003c 	add	r0, sp, #60	; 0x3c
        22bb04:	e1a01005 	mov	r1, r5
        22bb08:	eb6627e7 	bl	1bb5aac <$strcpy>
        22bb0c:	ea000002 	b	22bb1c <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x29c>
        22bb10:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        22bb14:	74737465 	ldrvcbt	r7, [r3], -#1125
        22bb18:	e5cd703c 	strb	r7, [sp, #60]
        22bb1c:	e24dd008 	sub	sp, sp, #8	; 0x8
        22bb20:	e1a0000d 	mov	r0, sp
        22bb24:	e5b81188 	ldr	r1, [r8, #392]!	; fField392
        22bb28:	eb6686e7 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        22bb2c:	e28d0008 	add	r0, sp, #8	; 0x8
        22bb30:	e3a0100c 	mov	r1, #12	; 0xc
        22bb34:	e3a02000 	mov	r2, #0	; 0x0
        22bb38:	e3a0c000 	mov	ip, #0	; 0x0
        22bb3c:	e3a03000 	mov	r3, #0	; 0x0
        22bb40:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        22bb44:	e1a03007 	mov	r3, r7
        22bb48:	e1a0100c 	mov	r1, ip
        22bb4c:	e3a00f43 	mov	r0, #268	; 0x10c
        22bb50:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        22bb54:	e28d3038 	add	r3, sp, #56	; 0x38
        22bb58:	e92d0008 	stmdb	sp!, {r3}
        22bb5c:	e28d3038 	add	r3, sp, #56	; 0x38
        22bb60:	e28d0024 	add	r0, sp, #36	; 0x24
        22bb64:	e3a02002 	mov	r2, #2	; 0x2
        22bb68:	e3a01001 	mov	r1, #1	; 0x1
        22bb6c:	eb66bc76 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        22bb70:	e28dd024 	add	sp, sp, #36	; 0x24
        22bb74:	e1b07000 	movs	r7, r0
        22bb78:	1a000004 	bne	22bb90 <TTestReporter::TestReadDataFile(char *, long, long *, char **)+0x310>
        22bb7c:	e59d000c 	ldr	r0, [sp, #12]
        22bb80:	e59d7008 	ldr	r7, [sp, #8]
        22bb84:	e5840000 	str	r0, [r4]
        22bb88:	e59d0010 	ldr	r0, [sp, #16]
        22bb8c:	e5890000 	str	r0, [r9]
        22bb90:	e1a0000d 	mov	r0, sp
        22bb94:	e3a01000 	mov	r1, #0	; 0x0
        22bb98:	eb668ae1 	bl	1bce724 <TUObject::$__dt(void)>
        22bb9c:	e28dd008 	add	sp, sp, #8	; 0x8
        22bba0:	e1a00007 	mov	r0, r7
        22bba4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTestReporter::TestFlushReportQueue(void)
 * Address: 0022bba8
 */
TTestReporter::TestFlushReportQueue(void) {
    /*
        22bba8:	e3a03000 	mov	r3, #0	; 0x0
        22bbac:	e3a02000 	mov	r2, #0	; 0x0
        22bbb0:	e3a0100a 	mov	r1, #10	; 0xa
        22bbb4:	ea656193 	b	1b84208 <TTestReporter::$SendToTestAgent(unsigned long, char *, long)>
    */
}

