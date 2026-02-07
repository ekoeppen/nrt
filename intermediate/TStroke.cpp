#include "include/TStroke.h"

/**
 * Symbol: Make__7TStrokeSFUl
 * Address: 00222254
 */
void TStroke::Make() {
    /*
        222254:	e1a0c00d 	mov	ip, sp
        222258:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22225c:	e24cb004 	sub	fp, ip, #4	; 0x4
        222260:	e1a04000 	mov	r4, r0
        222264:	e3a0004c 	mov	r0, #76	; 0x4c
        222268:	eb66b132 	bl	1bce738 <$__nw(unsigned int)>
        22226c:	e1b05000 	movs	r5, r0
        222270:	0a000003 	beq	222284 <Make__7TStrokeSFUl+0x30>
        222274:	e1a00005 	mov	r0, r5
        222278:	ebffa939 	bl	20c764 <TDArray::__ct(void)>
        22227c:	e59f003c 	ldr	r0, [pc, #3c]	; 2222c0 <Make__7TStrokeSFUl+0x6c>	; fField3
        222280:	e5850000 	str	r0, [r5]
        222284:	e3350000 	teq	r5, #0	; 0x0
        222288:	0a00000a 	beq	2222b8 <Make__7TStrokeSFUl+0x64>
        22228c:	e3a00000 	mov	r0, #0	; 0x0
        222290:	e1a01004 	mov	r1, r4
        222294:	e585001c 	str	r0, [r5, #28]
        222298:	e1a00005 	mov	r0, r5
        22229c:	eb6528e2 	bl	1b6c62c <TStroke::$IStroke(unsigned long)>
        2222a0:	e3300000 	teq	r0, #0	; 0x0
        2222a4:	0a000003 	beq	2222b8 <Make__7TStrokeSFUl+0x64>
        2222a8:	e1a00005 	mov	r0, r5
        2222ac:	e1a0e00f 	mov	lr, pc
        2222b0:	e595f000 	ldr	pc, [r5]
        2222b4:	e3a05000 	mov	r5, #0	; 0x0
        2222b8:	e1a00005 	mov	r0, r5
        2222bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2222c0:	0001fe6c 	andeq	pc, r1, ip, ror #28
    */
}

/**
 * Symbol: TStroke::IStroke(unsigned long)
 * Address: 002222c4
 */
TStroke::IStroke(unsigned long) {
    /*
        2222c4:	e1a0c00d 	mov	ip, sp
        2222c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2222cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2222d0:	e1a04000 	mov	r4, r0
        2222d4:	e24dd010 	sub	sp, sp, #16	; 0x10
        2222d8:	e1a02001 	mov	r2, r1
        2222dc:	e3a01004 	mov	r1, #4	; 0x4
        2222e0:	eb64f736 	bl	1b5ffc0 <TArray::$IArray(unsigned long, unsigned long)>
        2222e4:	e1b06000 	movs	r6, r0
        2222e8:	1a00001c 	bne	222360 <TStroke::IStroke(unsigned long)+0x9c>
        2222ec:	e3a05000 	mov	r5, #0	; 0x0
        2222f0:	e5845038 	str	r5, [r4, #56]	; fField56
        2222f4:	e5845034 	str	r5, [r4, #52]	; fField52
        2222f8:	e5845040 	str	r5, [r4, #64]	; fField64
        2222fc:	e3a00001 	mov	r0, #1	; 0x1
        222300:	e584503c 	str	r5, [r4, #60]	; fField60
        222304:	e5c40045 	strb	r0, [r4, #69]	; fField69
        222308:	e5c45044 	strb	r5, [r4, #68]	; fField68
        22230c:	e5c45047 	strb	r5, [r4, #71]	; fField71
        222310:	e5c45046 	strb	r5, [r4, #70]	; fField70
        222314:	e1a0000d 	mov	r0, sp
        222318:	eb65039b 	bl	1b6318c <$SetRectangleEmpty>
        22231c:	e2840020 	add	r0, r4, #32	; 0x20
        222320:	e89d500c 	ldmia	sp, {r2, r3, ip, lr}
        222324:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        222328:	e5845004 	str	r5, [r4, #4]	; fField4
        22232c:	e59f0034 	ldr	r0, [pc, #34]	; 222368 <TStroke::IStroke(unsigned long)+0xa4>
        222330:	e5900000 	ldr	r0, [r0]
        222334:	e1a01400 	mov	r1, r0, lsl #8
        222338:	e1a00004 	mov	r0, r4
        22233c:	eb64ff8c 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        222340:	e59f0024 	ldr	r0, [pc, #24]	; 22236c <TStroke::IStroke(unsigned long)+0xa8>
        222344:	e5d00000 	ldrb	r0, [r0]
        222348:	e3300000 	teq	r0, #0	; 0x0
        22234c:	01a00004 	moveq	r0, r4
        222350:	03a01202 	moveq	r1, #536870912	; 0x20000000
        222354:	0b64ff86 	bleq	1b62174 <TRecObject::$SetFlags(unsigned long)>
        222358:	e5845030 	str	r5, [r4, #48]	; fField48
        22235c:	e5a45048 	str	r5, [r4, #72]!	; fField72
        222360:	e1a00006 	mov	r0, r6
        222364:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        222368:	0c1008bc 	ldceq	8, cr0, [r0], -#752
        22236c:	0c101890 	ldceq	8, cr1, [r0], -#576
    */
}

/**
 * Symbol: TStroke::IDispose(void)
 * Address: 00222370
 */
TStroke::IDispose(void) {
    /*
        222370:	e1a0c00d 	mov	ip, sp
        222374:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        222378:	e24cb004 	sub	fp, ip, #4	; 0x4
        22237c:	e1a04000 	mov	r4, r0
        222380:	eb66fb5c 	bl	1be10f8 <$GetPtrSize>
        222384:	e3300058 	teq	r0, #88	; 0x58
        222388:	11a00004 	movne	r0, r4
        22238c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        222390:	1a64f713 	bne	1b5ffe4 <TArray::$IDispose(void)>
        222394:	eb66fb54 	bl	1be10ec <$GetHeap>
        222398:	e1a05000 	mov	r5, r0
        22239c:	e59f0018 	ldr	r0, [pc, #18]	; 2223bc <TStroke::IDispose(void)+0x4c>
        2223a0:	e5900000 	ldr	r0, [r0]
        2223a4:	eb670375 	bl	1be3180 <$SetHeap>
        2223a8:	e1a00004 	mov	r0, r4
        2223ac:	eb64f70c 	bl	1b5ffe4 <TArray::$IDispose(void)>
        2223b0:	e1a00005 	mov	r0, r5
        2223b4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2223b8:	ea670370 	b	1be3180 <$SetHeap>
        2223bc:	0c104d24 	ldceq	13, cr4, [r0], -#144
    */
}

/**
 * Symbol: TStroke::SizeInBytes(void)
 * Address: 002223c0
 */
TStroke::SizeInBytes(void) {
    /*
        2223c0:	ea650379 	b	1b631ac <TArray::$SizeInBytes(void)>
    */
}

/**
 * Symbol: TStroke::Bifurcate(void)
 * Address: 002223f0
 */
TStroke::Bifurcate(void) {
    /*
        2223f0:	e1a0c00d 	mov	ip, sp
        2223f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2223f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2223fc:	e1a04000 	mov	r4, r0
        222400:	e5900044 	ldr	r0, [r0, #68]	; fField68
        222404:	e1a00820 	mov	r0, r0, lsr #16
        222408:	e1a00080 	mov	r0, r0, lsl #1
        22240c:	e5c40045 	strb	r0, [r4, #69]	; fField69
        222410:	e1a00440 	mov	r0, r0, asr #8
        222414:	e5c40044 	strb	r0, [r4, #68]	; fField68
        222418:	e5940044 	ldr	r0, [r4, #68]	; fField68
        22241c:	e1b00820 	movs	r0, r0, lsr #16
        222420:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        222424:	e1a00004 	mov	r0, r4
        222428:	e3a01000 	mov	r1, #0	; 0x0
        22242c:	eb65246d 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        222430:	e1a01000 	mov	r1, r0
        222434:	e3a02000 	mov	r2, #0	; 0x0
        222438:	e3a03000 	mov	r3, #0	; 0x0
        22243c:	e594c00c 	ldr	ip, [r4, #12]	; fField12
        222440:	e35c0000 	cmp	ip, #0	; 0x0
        222444:	9a000005 	bls	222460 <TStroke::Bifurcate(void)+0x70>
        222448:	e491e008 	ldr	lr, [r1], #8
        22244c:	e2833002 	add	r3, r3, #2	; 0x2
        222450:	e2822001 	add	r2, r2, #1	; 0x1
        222454:	e153000c 	cmp	r3, ip
        222458:	e480e004 	str	lr, [r0], #4	; fField4
        22245c:	3afffff9 	bcc	222448 <TStroke::Bifurcate(void)+0x58>
        222460:	e1a01002 	mov	r1, r2
        222464:	e1a00004 	mov	r0, r4
        222468:	e5942000 	ldr	r2, [r4]
        22246c:	e1a0e00f 	mov	lr, pc
        222470:	e282f028 	add	pc, r2, #40	; 0x28
        222474:	e5940030 	ldr	r0, [r4, #48]	; fField48
        222478:	e1a000a0 	mov	r0, r0, lsr #1
        22247c:	e5a40030 	str	r0, [r4, #48]!	; fField48
        222480:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::TryToAddPoint(void)
 * Address: 00222484
 */
TStroke::TryToAddPoint(void) {
    /*
        222484:	e1a0c00d 	mov	ip, sp
        222488:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22248c:	e24cb004 	sub	fp, ip, #4	; 0x4
        222490:	e1a04000 	mov	r4, r0
        222494:	e5901000 	ldr	r1, [r0]
        222498:	e1a0e00f 	mov	lr, pc
        22249c:	e281f018 	add	pc, r1, #24	; 0x18
        2224a0:	e3300000 	teq	r0, #0	; 0x0
        2224a4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2224a8:	e1a00004 	mov	r0, r4
        2224ac:	eb652032 	bl	1b6a57c <TStroke::$Bifurcate(void)>
        2224b0:	e1a00004 	mov	r0, r4
        2224b4:	e5941000 	ldr	r1, [r4]
        2224b8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2224bc:	e281f018 	add	pc, r1, #24	; 0x18
    */
}

/**
 * Symbol: TStroke::AddPoint(TabPt *)
 * Address: 002224c0
 */
TStroke::AddPoint(TabPt *) {
    /*
        2224c0:	e1a0c00d 	mov	ip, sp
        2224c4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2224c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2224cc:	e1a04000 	mov	r4, r0
        2224d0:	e1a05001 	mov	r5, r1
        2224d4:	e3a06000 	mov	r6, #0	; 0x0
        2224d8:	e5900044 	ldr	r0, [r0, #68]	; fField68
        2224dc:	e1b00820 	movs	r0, r0, lsr #16
        2224e0:	0a0000a3 	beq	222774 <TStroke::AddPoint(TabPt *)+0x2b4>
        2224e4:	e5941046 	ldr	r1, [r4, #70]	; fField70
        2224e8:	e1a01821 	mov	r1, r1, lsr #16
        2224ec:	e2811001 	add	r1, r1, #1	; 0x1
        2224f0:	e5c41047 	strb	r1, [r4, #71]	; fField71
        2224f4:	e1a01441 	mov	r1, r1, asr #8
        2224f8:	e5c41046 	strb	r1, [r4, #70]	; fField70
        2224fc:	e5941046 	ldr	r1, [r4, #70]	; fField70
        222500:	e1500821 	cmp	r0, r1, lsr #16
        222504:	ca00009a 	bgt	222774 <TStroke::AddPoint(TabPt *)+0x2b4>
        222508:	e3a08000 	mov	r8, #0	; 0x0
        22250c:	e5c48047 	strb	r8, [r4, #71]	; fField71
        222510:	e5c48046 	strb	r8, [r4, #70]	; fField70
        222514:	e594000c 	ldr	r0, [r4, #12]	; fField12
        222518:	e3500e32 	cmp	r0, #800	; 0x320
        22251c:	81a00004 	movhi	r0, r4
        222520:	8b652015 	blhi	1b6a57c <TStroke::$Bifurcate(void)>
        222524:	e3a0a903 	mov	sl, #49152	; 0xc000
        222528:	e3a09901 	mov	r9, #16384	; 0x4000
        22252c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        222530:	e2847020 	add	r7, r4, #32	; 0x20
        222534:	e3300000 	teq	r0, #0	; 0x0
        222538:	1a000047 	bne	22265c <TStroke::AddPoint(TabPt *)+0x19c>
        22253c:	e1a00004 	mov	r0, r4
        222540:	eb653071 	bl	1b6e70c <TStroke::$TryToAddPoint(void)>
        222544:	e3300000 	teq	r0, #0	; 0x0
        222548:	0a000088 	beq	222770 <TStroke::AddPoint(TabPt *)+0x2b0>
        22254c:	e5951000 	ldr	r1, [r5]
        222550:	e3510000 	cmp	r1, #0	; 0x0
        222554:	d1a01008 	movle	r1, r8
        222558:	e3a02901 	mov	r2, #16384	; 0x4000
        22255c:	e2422001 	sub	r2, r2, #1	; 0x1
        222560:	e00216c1 	and	r1, r2, r1, asr #13
        222564:	e5903000 	ldr	r3, [r0]
        222568:	e1a03823 	mov	r3, r3, lsr #16
        22256c:	e2033903 	and	r3, r3, #49152	; 0xc000
        222570:	e1811003 	orr	r1, r1, r3
        222574:	e5c01001 	strb	r1, [r0, #1]	; fField1
        222578:	e1a01441 	mov	r1, r1, asr #8
        22257c:	e5c01000 	strb	r1, [r0]
        222580:	e5951004 	ldr	r1, [r5, #4]	; fField4
        222584:	e3510000 	cmp	r1, #0	; 0x0
        222588:	d1a01008 	movle	r1, r8
        22258c:	e00216c1 	and	r1, r2, r1, asr #13
        222590:	e5902002 	ldr	r2, [r0, #2]	; fField2
        222594:	e1a02822 	mov	r2, r2, lsr #16
        222598:	e2022903 	and	r2, r2, #49152	; 0xc000
        22259c:	e1811002 	orr	r1, r1, r2
        2225a0:	e5c01003 	strb	r1, [r0, #3]	; fField3
        2225a4:	e1a01441 	mov	r1, r1, asr #8
        2225a8:	e5c01002 	strb	r1, [r0, #2]	; fField2
        2225ac:	e5951008 	ldr	r1, [r5, #8]
        2225b0:	e1a01841 	mov	r1, r1, asr #16
        2225b4:	e3a02007 	mov	r2, #7	; 0x7
        2225b8:	e3510007 	cmp	r1, #7	; 0x7
        2225bc:	a1a01002 	movge	r1, r2
        2225c0:	e00a1681 	and	r1, sl, r1, lsl #13
        2225c4:	e5903000 	ldr	r3, [r0]
        2225c8:	e1a03103 	mov	r3, r3, lsl #2
        2225cc:	e1811923 	orr	r1, r1, r3, lsr #18
        2225d0:	e5c01001 	strb	r1, [r0, #1]	; fField1
        2225d4:	e1a01441 	mov	r1, r1, asr #8
        2225d8:	e5c01000 	strb	r1, [r0]
        2225dc:	e5951008 	ldr	r1, [r5, #8]
        2225e0:	e1a01841 	mov	r1, r1, asr #16
        2225e4:	e3510007 	cmp	r1, #7	; 0x7
        2225e8:	a1a01002 	movge	r1, r2
        2225ec:	e0091701 	and	r1, r9, r1, lsl #14
        2225f0:	e5902002 	ldr	r2, [r0, #2]	; fField2
        2225f4:	e1a02102 	mov	r2, r2, lsl #2
        2225f8:	e1811922 	orr	r1, r1, r2, lsr #18
        2225fc:	e5c01003 	strb	r1, [r0, #3]	; fField3
        222600:	e1a01441 	mov	r1, r1, asr #8
        222604:	e5c01002 	strb	r1, [r0, #2]	; fField2
        222608:	e5901002 	ldr	r1, [r0, #2]	; fField2
        22260c:	e1a02081 	mov	r2, r1, lsl #1
        222610:	e595100a 	ldr	r1, [r5, #10]
        222614:	e1a01821 	mov	r1, r1, lsr #16
        222618:	e3a03902 	mov	r3, #32768	; 0x8000
        22261c:	e0031701 	and	r1, r3, r1, lsl #14
        222620:	e18118a2 	orr	r1, r1, r2, lsr #17
        222624:	e5c01003 	strb	r1, [r0, #3]	; fField3
        222628:	e1a01441 	mov	r1, r1, asr #8
        22262c:	e5c01002 	strb	r1, [r0, #2]	; fField2
        222630:	e1a01007 	mov	r1, r7
        222634:	e1a00005 	mov	r0, r5
        222638:	e3a02001 	mov	r2, #1	; 0x1
        22263c:	eb64e5cf 	bl	1b5bd80 <$AddPtToRect>
        222640:	e5940028 	ldr	r0, [r4, #40]	; fField40
        222644:	e2800001 	add	r0, r0, #1	; 0x1
        222648:	e5840028 	str	r0, [r4, #40]	; fField40
        22264c:	e594002c 	ldr	r0, [r4, #44]	; fField44
        222650:	e2800001 	add	r0, r0, #1	; 0x1
        222654:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        222658:	ea000045 	b	222774 <TStroke::AddPoint(TabPt *)+0x2b4>
        22265c:	e2401001 	sub	r1, r0, #1	; 0x1
        222660:	e1a00004 	mov	r0, r4
        222664:	eb6523df 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        222668:	e1a00004 	mov	r0, r4
        22266c:	eb653026 	bl	1b6e70c <TStroke::$TryToAddPoint(void)>
        222670:	e3300000 	teq	r0, #0	; 0x0
        222674:	0a00003d 	beq	222770 <TStroke::AddPoint(TabPt *)+0x2b0>
        222678:	e5951000 	ldr	r1, [r5]
        22267c:	e3510000 	cmp	r1, #0	; 0x0
        222680:	d1a01008 	movle	r1, r8
        222684:	e3a02901 	mov	r2, #16384	; 0x4000
        222688:	e2422001 	sub	r2, r2, #1	; 0x1
        22268c:	e00216c1 	and	r1, r2, r1, asr #13
        222690:	e5903000 	ldr	r3, [r0]
        222694:	e1a03823 	mov	r3, r3, lsr #16
        222698:	e2033903 	and	r3, r3, #49152	; 0xc000
        22269c:	e1811003 	orr	r1, r1, r3
        2226a0:	e5c01001 	strb	r1, [r0, #1]	; fField1
        2226a4:	e1a01441 	mov	r1, r1, asr #8
        2226a8:	e5c01000 	strb	r1, [r0]
        2226ac:	e5951004 	ldr	r1, [r5, #4]	; fField4
        2226b0:	e3510000 	cmp	r1, #0	; 0x0
        2226b4:	d1a01008 	movle	r1, r8
        2226b8:	e00216c1 	and	r1, r2, r1, asr #13
        2226bc:	e5902002 	ldr	r2, [r0, #2]	; fField2
        2226c0:	e1a02822 	mov	r2, r2, lsr #16
        2226c4:	e2022903 	and	r2, r2, #49152	; 0xc000
        2226c8:	e1811002 	orr	r1, r1, r2
        2226cc:	e5c01003 	strb	r1, [r0, #3]	; fField3
        2226d0:	e1a01441 	mov	r1, r1, asr #8
        2226d4:	e5c01002 	strb	r1, [r0, #2]	; fField2
        2226d8:	e5951008 	ldr	r1, [r5, #8]
        2226dc:	e1a01841 	mov	r1, r1, asr #16
        2226e0:	e3a02007 	mov	r2, #7	; 0x7
        2226e4:	e3510007 	cmp	r1, #7	; 0x7
        2226e8:	a1a01002 	movge	r1, r2
        2226ec:	e00a1681 	and	r1, sl, r1, lsl #13
        2226f0:	e5903000 	ldr	r3, [r0]
        2226f4:	e1a03103 	mov	r3, r3, lsl #2
        2226f8:	e1811923 	orr	r1, r1, r3, lsr #18
        2226fc:	e5c01001 	strb	r1, [r0, #1]	; fField1
        222700:	e1a01441 	mov	r1, r1, asr #8
        222704:	e5c01000 	strb	r1, [r0]
        222708:	e5951008 	ldr	r1, [r5, #8]
        22270c:	e1a01841 	mov	r1, r1, asr #16
        222710:	e3510007 	cmp	r1, #7	; 0x7
        222714:	a1a01002 	movge	r1, r2
        222718:	e0091701 	and	r1, r9, r1, lsl #14
        22271c:	e5902002 	ldr	r2, [r0, #2]	; fField2
        222720:	e1a02102 	mov	r2, r2, lsl #2
        222724:	e1811922 	orr	r1, r1, r2, lsr #18
        222728:	e5c01003 	strb	r1, [r0, #3]	; fField3
        22272c:	e1a01441 	mov	r1, r1, asr #8
        222730:	e5c01002 	strb	r1, [r0, #2]	; fField2
        222734:	e5901002 	ldr	r1, [r0, #2]	; fField2
        222738:	e1a02081 	mov	r2, r1, lsl #1
        22273c:	e595100a 	ldr	r1, [r5, #10]
        222740:	e1a01821 	mov	r1, r1, lsr #16
        222744:	e3a03902 	mov	r3, #32768	; 0x8000
        222748:	e0031701 	and	r1, r3, r1, lsl #14
        22274c:	e18118a2 	orr	r1, r1, r2, lsr #17
        222750:	e5c01003 	strb	r1, [r0, #3]	; fField3
        222754:	e1a01441 	mov	r1, r1, asr #8
        222758:	e5c01002 	strb	r1, [r0, #2]	; fField2
        22275c:	e1a01007 	mov	r1, r7
        222760:	e1a00005 	mov	r0, r5
        222764:	e3a02000 	mov	r2, #0	; 0x0
        222768:	eb64e584 	bl	1b5bd80 <$AddPtToRect>
        22276c:	ea000000 	b	222774 <TStroke::AddPoint(TabPt *)+0x2b4>
        222770:	e3a06001 	mov	r6, #1	; 0x1
        222774:	e1a00006 	mov	r0, r6
        222778:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::EndStroke(void)
 * Address: 0022277c
 */
TStroke::EndStroke(void) {
    /*
        22277c:	e1a0c00d 	mov	ip, sp
        222780:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        222784:	e24cb004 	sub	fp, ip, #4	; 0x4
        222788:	e1a04000 	mov	r4, r0
        22278c:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        222790:	eb64fe77 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        222794:	e1a00004 	mov	r0, r4
        222798:	e5941000 	ldr	r1, [r4]
        22279c:	e1a0e00f 	mov	lr, pc
        2227a0:	e281f024 	add	pc, r1, #36	; 0x24
        2227a4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2227a8:	e2800001 	add	r0, r0, #1	; 0x1
        2227ac:	e5840028 	str	r0, [r4, #40]	; fField40
        2227b0:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2227b4:	e2800001 	add	r0, r0, #1	; 0x1
        2227b8:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        2227bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::GetPoint(long)
 * Address: 002227c0
 */
TStroke::GetPoint(long) {
    /*
        2227c0:	e5902000 	ldr	r2, [r0]
        2227c4:	e282f01c 	add	pc, r2, #28	; 0x1c
    */
}

/**
 * Symbol: TStroke::GetTabPt(long, TabPt *)
 * Address: 002227c8
 */
TStroke::GetTabPt(long, TabPt *) {
    /*
        2227c8:	e1a0c00d 	mov	ip, sp
        2227cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2227d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2227d4:	e1a04002 	mov	r4, r2
        2227d8:	e5902000 	ldr	r2, [r0]
        2227dc:	e1a0e00f 	mov	lr, pc
        2227e0:	e282f01c 	add	pc, r2, #28	; 0x1c
        2227e4:	e5901000 	ldr	r1, [r0]
        2227e8:	e1a01101 	mov	r1, r1, lsl #2
        2227ec:	e1a01921 	mov	r1, r1, lsr #18
        2227f0:	e1a01681 	mov	r1, r1, lsl #13
        2227f4:	e5841000 	str	r1, [r4]
        2227f8:	e5901002 	ldr	r1, [r0, #2]	; fField2
        2227fc:	e1a01101 	mov	r1, r1, lsl #2
        222800:	e1a01921 	mov	r1, r1, lsr #18
        222804:	e1a01681 	mov	r1, r1, lsl #13
        222808:	e5841004 	str	r1, [r4, #4]	; fField4
        22280c:	e5901000 	ldr	r1, [r0]
        222810:	e1a01821 	mov	r1, r1, lsr #16
        222814:	e2011903 	and	r1, r1, #49152	; 0xc000
        222818:	e1a016a1 	mov	r1, r1, lsr #13
        22281c:	e5902002 	ldr	r2, [r0, #2]	; fField2
        222820:	e1a02822 	mov	r2, r2, lsr #16
        222824:	e2022901 	and	r2, r2, #16384	; 0x4000
        222828:	e1811742 	orr	r1, r1, r2, asr #14
        22282c:	e5c41009 	strb	r1, [r4, #9]
        222830:	e1a01441 	mov	r1, r1, asr #8
        222834:	e5c41008 	strb	r1, [r4, #8]
        222838:	e5900002 	ldr	r0, [r0, #2]	; fField2
        22283c:	e1a00820 	mov	r0, r0, lsr #16
        222840:	e2000902 	and	r0, r0, #32768	; 0x8000
        222844:	e1a00720 	mov	r0, r0, lsr #14
        222848:	e5c4000b 	strb	r0, [r4, #11]
        22284c:	e1a00440 	mov	r0, r0, asr #8
        222850:	e5c4000a 	strb	r0, [r4, #10]
        222854:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::GetFPoint(long, FPoint *)
 * Address: 00222858
 */
TStroke::GetFPoint(long, FPoint *) {
    /*
        222858:	e1a0c00d 	mov	ip, sp
        22285c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        222860:	e24cb004 	sub	fp, ip, #4	; 0x4
        222864:	e1a04002 	mov	r4, r2
        222868:	e5902000 	ldr	r2, [r0]
        22286c:	e1a0e00f 	mov	lr, pc
        222870:	e282f01c 	add	pc, r2, #28	; 0x1c
        222874:	e5901000 	ldr	r1, [r0]
        222878:	e1a01101 	mov	r1, r1, lsl #2
        22287c:	e1a01921 	mov	r1, r1, lsr #18
        222880:	e1a01681 	mov	r1, r1, lsl #13
        222884:	e5841000 	str	r1, [r4]
        222888:	e5900002 	ldr	r0, [r0, #2]	; fField2
        22288c:	e1a00100 	mov	r0, r0, lsl #2
        222890:	e1a00920 	mov	r0, r0, lsr #18
        222894:	e1a00680 	mov	r0, r0, lsl #13
        222898:	e5a40004 	str	r0, [r4, #4]!	; fField4
        22289c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::Rotate(long)
 * Address: 002228a0
 */
TStroke::Rotate(long) {
    /*
        2228a0:	e1a0c00d 	mov	ip, sp
        2228a4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2228a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2228ac:	e1a04000 	mov	r4, r0
        2228b0:	e1a05001 	mov	r5, r1
        2228b4:	e24dd034 	sub	sp, sp, #52	; 0x34
        2228b8:	e2800020 	add	r0, r0, #32	; 0x20
        2228bc:	e1a0100d 	mov	r1, sp
        2228c0:	ebfe0618 	bl	1a4128 <RectangleCenter>
        2228c4:	e28d0010 	add	r0, sp, #16	; 0x10
        2228c8:	ebfc0a11 	bl	125114 <SetIdentityMatrix>
        2228cc:	e2651000 	rsb	r1, r5, #0	; 0x0
        2228d0:	e89d000c 	ldmia	sp, {r2, r3}
        2228d4:	e28d0010 	add	r0, sp, #16	; 0x10
        2228d8:	ebfc0a13 	bl	12512c <RotateMatrix>
        2228dc:	e3a06000 	mov	r6, #0	; 0x0
        2228e0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2228e4:	e3500000 	cmp	r0, #0	; 0x0
        2228e8:	9a00002e 	bls	2229a8 <TStroke::Rotate(long)+0x108>
        2228ec:	e3a08000 	mov	r8, #0	; 0x0
        2228f0:	e3a07901 	mov	r7, #16384	; 0x4000
        2228f4:	e2477001 	sub	r7, r7, #1	; 0x1
        2228f8:	e1a01006 	mov	r1, r6
        2228fc:	e1a00004 	mov	r0, r4
        222900:	eb652338 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        222904:	e1a05000 	mov	r5, r0
        222908:	e5900000 	ldr	r0, [r0]
        22290c:	e1a00100 	mov	r0, r0, lsl #2
        222910:	e1a00920 	mov	r0, r0, lsr #18
        222914:	e1a00680 	mov	r0, r0, lsl #13
        222918:	e58d0008 	str	r0, [sp, #8]
        22291c:	e5950002 	ldr	r0, [r5, #2]	; fField2
        222920:	e1a00100 	mov	r0, r0, lsl #2
        222924:	e1a00920 	mov	r0, r0, lsr #18
        222928:	e1a00680 	mov	r0, r0, lsl #13
        22292c:	e58d000c 	str	r0, [sp, #12]	; fField12
        222930:	e28d2008 	add	r2, sp, #8	; 0x8
        222934:	e28d0010 	add	r0, sp, #16	; 0x10
        222938:	e3a01001 	mov	r1, #1	; 0x1
        22293c:	ebfc0b23 	bl	1255d0 <TransformPoints>
        222940:	e59d0008 	ldr	r0, [sp, #8]
        222944:	e3500000 	cmp	r0, #0	; 0x0
        222948:	d1a00008 	movle	r0, r8
        22294c:	e00706c0 	and	r0, r7, r0, asr #13
        222950:	e5951000 	ldr	r1, [r5]
        222954:	e1a01821 	mov	r1, r1, lsr #16
        222958:	e2011903 	and	r1, r1, #49152	; 0xc000
        22295c:	e1800001 	orr	r0, r0, r1
        222960:	e5c50001 	strb	r0, [r5, #1]	; fField1
        222964:	e1a00440 	mov	r0, r0, asr #8
        222968:	e5c50000 	strb	r0, [r5]
        22296c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        222970:	e3500000 	cmp	r0, #0	; 0x0
        222974:	d1a00008 	movle	r0, r8
        222978:	e00706c0 	and	r0, r7, r0, asr #13
        22297c:	e5951002 	ldr	r1, [r5, #2]	; fField2
        222980:	e1a01821 	mov	r1, r1, lsr #16
        222984:	e2011903 	and	r1, r1, #49152	; 0xc000
        222988:	e1800001 	orr	r0, r0, r1
        22298c:	e5c50003 	strb	r0, [r5, #3]	; fField3
        222990:	e1a00440 	mov	r0, r0, asr #8
        222994:	e5c50002 	strb	r0, [r5, #2]	; fField2
        222998:	e2866001 	add	r6, r6, #1	; 0x1
        22299c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2229a0:	e1500006 	cmp	r0, r6
        2229a4:	8affffd3 	bhi	2228f8 <TStroke::Rotate(long)+0x58>
        2229a8:	e1a00004 	mov	r0, r4
        2229ac:	eb652f59 	bl	1b6e718 <TStroke::$UpdateBBox(void)>
        2229b0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::Scale(long, long)
 * Address: 002229b4
 */
TStroke::Scale(long, long) {
    /*
        2229b4:	e1a0c00d 	mov	ip, sp
        2229b8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2229bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2229c0:	e1a04000 	mov	r4, r0
        2229c4:	e1a05001 	mov	r5, r1
        2229c8:	e1a06002 	mov	r6, r2
        2229cc:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        2229d0:	e28d0008 	add	r0, sp, #8	; 0x8
        2229d4:	ebfc09ce 	bl	125114 <SetIdentityMatrix>
        2229d8:	e1a02006 	mov	r2, r6
        2229dc:	e1a01005 	mov	r1, r5
        2229e0:	e28d0008 	add	r0, sp, #8	; 0x8
        2229e4:	ebfc0b54 	bl	12573c <MxScale>
        2229e8:	e3a01000 	mov	r1, #0	; 0x0
        2229ec:	e3a02000 	mov	r2, #0	; 0x0
        2229f0:	e3550000 	cmp	r5, #0	; 0x0
        2229f4:	b5940028 	ldrlt	r0, [r4, #40]	; fField40
        2229f8:	b5941020 	ldrlt	r1, [r4, #32]	; fField32
        2229fc:	b0801001 	addlt	r1, r0, r1
        222a00:	e3560000 	cmp	r6, #0	; 0x0
        222a04:	b594002c 	ldrlt	r0, [r4, #44]	; fField44
        222a08:	b5942024 	ldrlt	r2, [r4, #36]	; fField36
        222a0c:	b0802002 	addlt	r2, r0, r2
        222a10:	e3310000 	teq	r1, #0	; 0x0
        222a14:	03320000 	teqeq	r2, #0	; 0x0
        222a18:	128d0008 	addne	r0, sp, #8	; 0x8
        222a1c:	1bfc0b75 	blne	1257f8 <MxMove>
        222a20:	e3a06000 	mov	r6, #0	; 0x0
        222a24:	e594000c 	ldr	r0, [r4, #12]	; fField12
        222a28:	e3500000 	cmp	r0, #0	; 0x0
        222a2c:	9a00002e 	bls	222aec <TStroke::Scale(long, long)+0x138>
        222a30:	e3a08000 	mov	r8, #0	; 0x0
        222a34:	e3a07901 	mov	r7, #16384	; 0x4000
        222a38:	e2477001 	sub	r7, r7, #1	; 0x1
        222a3c:	e1a01006 	mov	r1, r6
        222a40:	e1a00004 	mov	r0, r4
        222a44:	eb6522e7 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        222a48:	e1a05000 	mov	r5, r0
        222a4c:	e5900000 	ldr	r0, [r0]
        222a50:	e1a00100 	mov	r0, r0, lsl #2
        222a54:	e1a00920 	mov	r0, r0, lsr #18
        222a58:	e1a00680 	mov	r0, r0, lsl #13
        222a5c:	e58d0000 	str	r0, [sp]
        222a60:	e5950002 	ldr	r0, [r5, #2]	; fField2
        222a64:	e1a00100 	mov	r0, r0, lsl #2
        222a68:	e1a00920 	mov	r0, r0, lsr #18
        222a6c:	e1a00680 	mov	r0, r0, lsl #13
        222a70:	e58d0004 	str	r0, [sp, #4]	; fField4
        222a74:	e1a0200d 	mov	r2, sp
        222a78:	e28d0008 	add	r0, sp, #8	; 0x8
        222a7c:	e3a01001 	mov	r1, #1	; 0x1
        222a80:	ebfc0ad2 	bl	1255d0 <TransformPoints>
        222a84:	e59d0000 	ldr	r0, [sp]
        222a88:	e3500000 	cmp	r0, #0	; 0x0
        222a8c:	d1a00008 	movle	r0, r8
        222a90:	e00706c0 	and	r0, r7, r0, asr #13
        222a94:	e5951000 	ldr	r1, [r5]
        222a98:	e1a01821 	mov	r1, r1, lsr #16
        222a9c:	e2011903 	and	r1, r1, #49152	; 0xc000
        222aa0:	e1800001 	orr	r0, r0, r1
        222aa4:	e5c50001 	strb	r0, [r5, #1]	; fField1
        222aa8:	e1a00440 	mov	r0, r0, asr #8
        222aac:	e5c50000 	strb	r0, [r5]
        222ab0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        222ab4:	e3500000 	cmp	r0, #0	; 0x0
        222ab8:	d1a00008 	movle	r0, r8
        222abc:	e00706c0 	and	r0, r7, r0, asr #13
        222ac0:	e5951002 	ldr	r1, [r5, #2]	; fField2
        222ac4:	e1a01821 	mov	r1, r1, lsr #16
        222ac8:	e2011903 	and	r1, r1, #49152	; 0xc000
        222acc:	e1800001 	orr	r0, r0, r1
        222ad0:	e5c50003 	strb	r0, [r5, #3]	; fField3
        222ad4:	e1a00440 	mov	r0, r0, asr #8
        222ad8:	e5c50002 	strb	r0, [r5, #2]	; fField2
        222adc:	e2866001 	add	r6, r6, #1	; 0x1
        222ae0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        222ae4:	e1500006 	cmp	r0, r6
        222ae8:	8affffd3 	bhi	222a3c <TStroke::Scale(long, long)+0x88>
        222aec:	e1a00004 	mov	r0, r4
        222af0:	eb652f08 	bl	1b6e718 <TStroke::$UpdateBBox(void)>
        222af4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::Draw(void)
 * Address: 00222af8
 */
TStroke::Draw(void) {
    /*
        222af8:	e1a0c00d 	mov	ip, sp
        222afc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        222b00:	e24cb004 	sub	fp, ip, #4	; 0x4
        222b04:	e1a04000 	mov	r4, r0
        222b08:	e3a01301 	mov	r1, #67108864	; 0x4000000
        222b0c:	eb64fd98 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        222b10:	e1a00004 	mov	r0, r4
        222b14:	eb6522a3 	bl	1b6b5a8 <TStroke::$Done(void)>
        222b18:	e3300000 	teq	r0, #0	; 0x0
        222b1c:	11a00004 	movne	r0, r4
        222b20:	13a01302 	movne	r1, #134217728	; 0x8000000
        222b24:	1b64fd92 	blne	1b62174 <TRecObject::$SetFlags(unsigned long)>
        222b28:	e1a00004 	mov	r0, r4
        222b2c:	e3a01202 	mov	r1, #536870912	; 0x20000000
        222b30:	eb6501ac 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        222b34:	e3300000 	teq	r0, #0	; 0x0
        222b38:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        222b3c:	e24dd014 	sub	sp, sp, #20	; 0x14
        222b40:	e1a00004 	mov	r0, r4
        222b44:	eb64e083 	bl	1b5ad58 <$AcquireStroke(TStroke *)>
        222b48:	e1a08000 	mov	r8, r0
        222b4c:	e594700c 	ldr	r7, [r4, #12]	; fField12
        222b50:	e3370000 	teq	r7, #0	; 0x0
        222b54:	0a000041 	beq	222c60 <TStroke::Draw(void)+0x168>
        222b58:	e1a00004 	mov	r0, r4
        222b5c:	eb64f542 	bl	1b6006c <TArray::$Lock(void)>
        222b60:	e1a00004 	mov	r0, r4
        222b64:	e3a01000 	mov	r1, #0	; 0x0
        222b68:	eb65229e 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        222b6c:	e1a05000 	mov	r5, r0
        222b70:	eb652ad1 	bl	1b6d6bc <$SampleX(SamplePt *)>
        222b74:	e2800902 	add	r0, r0, #32768	; 0x8000
        222b78:	e1a00840 	mov	r0, r0, asr #16
        222b7c:	e5cd000f 	strb	r0, [sp, #15]
        222b80:	e1a00440 	mov	r0, r0, asr #8
        222b84:	e5cd000e 	strb	r0, [sp, #14]
        222b88:	e1a00005 	mov	r0, r5
        222b8c:	eb652acb 	bl	1b6d6c0 <$SampleY(SamplePt *)>
        222b90:	e2800902 	add	r0, r0, #32768	; 0x8000
        222b94:	e1a00840 	mov	r0, r0, asr #16
        222b98:	e5cd000d 	strb	r0, [sp, #13]
        222b9c:	e1a00440 	mov	r0, r0, asr #8
        222ba0:	e5cd000c 	strb	r0, [sp, #12]	; fField12
        222ba4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        222ba8:	e2000cff 	and	r0, r0, #65280	; 0xff00
        222bac:	e1a00420 	mov	r0, r0, lsr #8
        222bb0:	e1a00800 	mov	r0, r0, lsl #16
        222bb4:	e1a00840 	mov	r0, r0, asr #16
        222bb8:	e5cd0009 	strb	r0, [sp, #9]
        222bbc:	e1a01440 	mov	r1, r0, asr #8
        222bc0:	e5cd1008 	strb	r1, [sp, #8]
        222bc4:	e5cd000b 	strb	r0, [sp, #11]
        222bc8:	e5cd100a 	strb	r1, [sp, #10]
        222bcc:	e2855004 	add	r5, r5, #4	; 0x4
        222bd0:	e3a06001 	mov	r6, #1	; 0x1
        222bd4:	e3570001 	cmp	r7, #1	; 0x1
        222bd8:	9a00001e 	bls	222c58 <TStroke::Draw(void)+0x160>
        222bdc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        222be0:	e58d0010 	str	r0, [sp, #16]
        222be4:	e1a00005 	mov	r0, r5
        222be8:	eb652ab3 	bl	1b6d6bc <$SampleX(SamplePt *)>
        222bec:	e2800902 	add	r0, r0, #32768	; 0x8000
        222bf0:	e1a00840 	mov	r0, r0, asr #16
        222bf4:	e5cd000f 	strb	r0, [sp, #15]
        222bf8:	e1a00440 	mov	r0, r0, asr #8
        222bfc:	e5cd000e 	strb	r0, [sp, #14]
        222c00:	e1a00005 	mov	r0, r5
        222c04:	eb652aad 	bl	1b6d6c0 <$SampleY(SamplePt *)>
        222c08:	e2800902 	add	r0, r0, #32768	; 0x8000
        222c0c:	e1a00840 	mov	r0, r0, asr #16
        222c10:	e5cd000d 	strb	r0, [sp, #13]
        222c14:	e1a00440 	mov	r0, r0, asr #8
        222c18:	e5cd000c 	strb	r0, [sp, #12]	; fField12
        222c1c:	e1a00005 	mov	r0, r5
        222c20:	eb652aa4 	bl	1b6d6b8 <$SampleP(SamplePt *)>
        222c24:	e28d100c 	add	r1, sp, #12	; 0xc
        222c28:	e8910003 	ldmia	r1, {r0, r1}
        222c2c:	e1310000 	teq	r1, r0
        222c30:	0a000004 	beq	222c48 <TStroke::Draw(void)+0x150>
        222c34:	e1a0200d 	mov	r2, sp
        222c38:	e59d0010 	ldr	r0, [sp, #16]
        222c3c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        222c40:	e59d3008 	ldr	r3, [sp, #8]
        222c44:	eb64b6fc 	bl	1b5083c <$InkerLine__FC5PointT1P4RectT1>
        222c48:	e2855004 	add	r5, r5, #4	; 0x4
        222c4c:	e2866001 	add	r6, r6, #1	; 0x1
        222c50:	e1560007 	cmp	r6, r7
        222c54:	3affffe0 	bcc	222bdc <TStroke::Draw(void)+0xe4>
        222c58:	e1a00004 	mov	r0, r4
        222c5c:	eb650568 	bl	1b64204 <TArray::$Unlock(void)>
        222c60:	e3380000 	teq	r8, #0	; 0x0
        222c64:	1b64fd34 	blne	1b6213c <$ReleaseStroke(void)>
        222c68:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::Map(FRect *)
 * Address: 00222c6c
 */
TStroke::Map(FRect *) {
    /*
        222c6c:	e1a0c00d 	mov	ip, sp
        222c70:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        222c74:	e24cb004 	sub	fp, ip, #4	; 0x4
        222c78:	e1a04000 	mov	r4, r0
        222c7c:	e24dd028 	sub	sp, sp, #40	; 0x28
        222c80:	e28d2018 	add	r2, sp, #24	; 0x18
        222c84:	e2800020 	add	r0, r0, #32	; 0x20
        222c88:	e1a07000 	mov	r7, r0
        222c8c:	e8b01008 	ldmia	r0!, {r3, ip}
        222c90:	e8a21008 	stmia	r2!, {r3, ip}
        222c94:	e8901008 	ldmia	r0, {r3, ip}
        222c98:	e8821008 	stmia	r2, {r3, ip}
        222c9c:	e28d0008 	add	r0, sp, #8	; 0x8
        222ca0:	e891500a 	ldmia	r1, {r1, r3, ip, lr}
        222ca4:	e880500a 	stmia	r0, {r1, r3, ip, lr}
        222ca8:	e28d1008 	add	r1, sp, #8	; 0x8
        222cac:	e28d0018 	add	r0, sp, #24	; 0x18
        222cb0:	ebfe055b 	bl	1a4224 <GetMapper>
        222cb4:	e594600c 	ldr	r6, [r4, #12]	; fField12
        222cb8:	e1a00004 	mov	r0, r4
        222cbc:	e3a01000 	mov	r1, #0	; 0x0
        222cc0:	eb652248 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        222cc4:	e1a04000 	mov	r4, r0
        222cc8:	e3a05000 	mov	r5, #0	; 0x0
        222ccc:	e3560000 	cmp	r6, #0	; 0x0
        222cd0:	9a00002a 	bls	222d80 <TStroke::Map(FRect *)+0x114>
        222cd4:	e3a09000 	mov	r9, #0	; 0x0
        222cd8:	e3a08901 	mov	r8, #16384	; 0x4000
        222cdc:	e2488001 	sub	r8, r8, #1	; 0x1
        222ce0:	e5940000 	ldr	r0, [r4]
        222ce4:	e1a00100 	mov	r0, r0, lsl #2
        222ce8:	e1a00920 	mov	r0, r0, lsr #18
        222cec:	e1a00680 	mov	r0, r0, lsl #13
        222cf0:	e58d0000 	str	r0, [sp]
        222cf4:	e5940002 	ldr	r0, [r4, #2]	; fField2
        222cf8:	e1a00100 	mov	r0, r0, lsl #2
        222cfc:	e1a00920 	mov	r0, r0, lsr #18
        222d00:	e1a00680 	mov	r0, r0, lsl #13
        222d04:	e58d0004 	str	r0, [sp, #4]	; fField4
        222d08:	e28d2008 	add	r2, sp, #8	; 0x8
        222d0c:	e28d1018 	add	r1, sp, #24	; 0x18
        222d10:	e1a0000d 	mov	r0, sp
        222d14:	ebfe0572 	bl	1a42e4 <MapPoint>
        222d18:	e59d0000 	ldr	r0, [sp]
        222d1c:	e3500000 	cmp	r0, #0	; 0x0
        222d20:	d1a00009 	movle	r0, r9
        222d24:	e00806c0 	and	r0, r8, r0, asr #13
        222d28:	e5941000 	ldr	r1, [r4]
        222d2c:	e1a01821 	mov	r1, r1, lsr #16
        222d30:	e2011903 	and	r1, r1, #49152	; 0xc000
        222d34:	e1800001 	orr	r0, r0, r1
        222d38:	e5c40001 	strb	r0, [r4, #1]	; fField1
        222d3c:	e1a00440 	mov	r0, r0, asr #8
        222d40:	e5c40000 	strb	r0, [r4]
        222d44:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        222d48:	e3500000 	cmp	r0, #0	; 0x0
        222d4c:	d1a00009 	movle	r0, r9
        222d50:	e00806c0 	and	r0, r8, r0, asr #13
        222d54:	e5941002 	ldr	r1, [r4, #2]	; fField2
        222d58:	e1a01821 	mov	r1, r1, lsr #16
        222d5c:	e2011903 	and	r1, r1, #49152	; 0xc000
        222d60:	e1800001 	orr	r0, r0, r1
        222d64:	e5c40003 	strb	r0, [r4, #3]	; fField3
        222d68:	e1a00440 	mov	r0, r0, asr #8
        222d6c:	e5c40002 	strb	r0, [r4, #2]	; fField2
        222d70:	e2844004 	add	r4, r4, #4	; 0x4
        222d74:	e2855001 	add	r5, r5, #1	; 0x1
        222d78:	e1550006 	cmp	r5, r6
        222d7c:	3affffd7 	bcc	222ce0 <TStroke::Map(FRect *)+0x74>
        222d80:	e28d0008 	add	r0, sp, #8	; 0x8
        222d84:	e8b01008 	ldmia	r0!, {r3, ip}
        222d88:	e8a71008 	stmia	r7!, {r3, ip}
        222d8c:	e8901008 	ldmia	r0, {r3, ip}
        222d90:	e8871008 	stmia	r7, {r3, ip}
        222d94:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::Offset(long, long)
 * Address: 00222d98
 */
TStroke::Offset(long, long) {
    /*
        222d98:	e1a0c00d 	mov	ip, sp
        222d9c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        222da0:	e24cb004 	sub	fp, ip, #4	; 0x4
        222da4:	e1a04000 	mov	r4, r0
        222da8:	e1a06001 	mov	r6, r1
        222dac:	e1a05002 	mov	r5, r2
        222db0:	e3a01000 	mov	r1, #0	; 0x0
        222db4:	e590700c 	ldr	r7, [r0, #12]	; fField12
        222db8:	eb65220a 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        222dbc:	e3a02000 	mov	r2, #0	; 0x0
        222dc0:	e3570000 	cmp	r7, #0	; 0x0
        222dc4:	9a000023 	bls	222e58 <TStroke::Offset(long, long)+0xc0>
        222dc8:	e3a03000 	mov	r3, #0	; 0x0
        222dcc:	e3a01901 	mov	r1, #16384	; 0x4000
        222dd0:	e2411001 	sub	r1, r1, #1	; 0x1
        222dd4:	e590c000 	ldr	ip, [r0]
        222dd8:	e1a0c10c 	mov	ip, ip, lsl #2
        222ddc:	e1a0c92c 	mov	ip, ip, lsr #18
        222de0:	e1a0e68c 	mov	lr, ip, lsl #13
        222de4:	e590c002 	ldr	ip, [r0, #2]	; fField2
        222de8:	e1a0c10c 	mov	ip, ip, lsl #2
        222dec:	e1a0c92c 	mov	ip, ip, lsr #18
        222df0:	e08ee006 	add	lr, lr, r6
        222df4:	e085c68c 	add	ip, r5, ip, lsl #13
        222df8:	e35e0000 	cmp	lr, #0	; 0x0
        222dfc:	d1a0e003 	movle	lr, r3
        222e00:	e001e6ce 	and	lr, r1, lr, asr #13
        222e04:	e5908000 	ldr	r8, [r0]
        222e08:	e1a08828 	mov	r8, r8, lsr #16
        222e0c:	e2088903 	and	r8, r8, #49152	; 0xc000
        222e10:	e18ee008 	orr	lr, lr, r8
        222e14:	e5c0e001 	strb	lr, [r0, #1]	; fField1
        222e18:	e1a0e44e 	mov	lr, lr, asr #8
        222e1c:	e5c0e000 	strb	lr, [r0]
        222e20:	e35c0000 	cmp	ip, #0	; 0x0
        222e24:	d1a0c003 	movle	ip, r3
        222e28:	e001c6cc 	and	ip, r1, ip, asr #13
        222e2c:	e590e002 	ldr	lr, [r0, #2]	; fField2
        222e30:	e1a0e82e 	mov	lr, lr, lsr #16
        222e34:	e20ee903 	and	lr, lr, #49152	; 0xc000
        222e38:	e18cc00e 	orr	ip, ip, lr
        222e3c:	e5c0c003 	strb	ip, [r0, #3]	; fField3
        222e40:	e1a0c44c 	mov	ip, ip, asr #8
        222e44:	e5c0c002 	strb	ip, [r0, #2]	; fField2
        222e48:	e2800004 	add	r0, r0, #4	; 0x4
        222e4c:	e2822001 	add	r2, r2, #1	; 0x1
        222e50:	e1520007 	cmp	r2, r7
        222e54:	3affffde 	bcc	222dd4 <TStroke::Offset(long, long)+0x3c>
        222e58:	e5940024 	ldr	r0, [r4, #36]	; fField36
        222e5c:	e0800005 	add	r0, r0, r5
        222e60:	e5840024 	str	r0, [r4, #36]	; fField36
        222e64:	e594002c 	ldr	r0, [r4, #44]	; fField44
        222e68:	e0800005 	add	r0, r0, r5
        222e6c:	e584002c 	str	r0, [r4, #44]	; fField44
        222e70:	e5940020 	ldr	r0, [r4, #32]	; fField32
        222e74:	e0800006 	add	r0, r0, r6
        222e78:	e5840020 	str	r0, [r4, #32]	; fField32
        222e7c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        222e80:	e0800006 	add	r0, r0, r6
        222e84:	e5a40028 	str	r0, [r4, #40]!	; fField40
        222e88:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::UpdateBBox(void)
 * Address: 00222ec4
 */
TStroke::UpdateBBox(void) {
    /*
        222ec4:	e1a0c00d 	mov	ip, sp
        222ec8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        222ecc:	e24cb004 	sub	fp, ip, #4	; 0x4
        222ed0:	e1a04000 	mov	r4, r0
        222ed4:	e24dd008 	sub	sp, sp, #8	; 0x8
        222ed8:	e3a01000 	mov	r1, #0	; 0x0
        222edc:	e590700c 	ldr	r7, [r0, #12]	; fField12
        222ee0:	eb6521c0 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        222ee4:	e1a05000 	mov	r5, r0
        222ee8:	e3a06000 	mov	r6, #0	; 0x0
        222eec:	e3570000 	cmp	r7, #0	; 0x0
        222ef0:	da000014 	ble	222f48 <TStroke::UpdateBBox(void)+0x84>
        222ef4:	e2848020 	add	r8, r4, #32	; 0x20
        222ef8:	e5950000 	ldr	r0, [r5]
        222efc:	e1a00100 	mov	r0, r0, lsl #2
        222f00:	e1a00920 	mov	r0, r0, lsr #18
        222f04:	e1a00680 	mov	r0, r0, lsl #13
        222f08:	e58d0000 	str	r0, [sp]
        222f0c:	e5950002 	ldr	r0, [r5, #2]	; fField2
        222f10:	e1a00100 	mov	r0, r0, lsl #2
        222f14:	e1a00920 	mov	r0, r0, lsr #18
        222f18:	e1a00680 	mov	r0, r0, lsl #13
        222f1c:	e3360000 	teq	r6, #0	; 0x0
        222f20:	e58d0004 	str	r0, [sp, #4]	; fField4
        222f24:	13a02000 	movne	r2, #0	; 0x0
        222f28:	03a02001 	moveq	r2, #1	; 0x1
        222f2c:	e1a01008 	mov	r1, r8
        222f30:	e1a0000d 	mov	r0, sp
        222f34:	eb64e391 	bl	1b5bd80 <$AddPtToRect>
        222f38:	e2866001 	add	r6, r6, #1	; 0x1
        222f3c:	e2855004 	add	r5, r5, #4	; 0x4
        222f40:	e1560007 	cmp	r6, r7
        222f44:	baffffeb 	blt	222ef8 <TStroke::UpdateBBox(void)+0x34>
        222f48:	e5940028 	ldr	r0, [r4, #40]	; fField40
        222f4c:	e2800001 	add	r0, r0, #1	; 0x1
        222f50:	e5840028 	str	r0, [r4, #40]	; fField40
        222f54:	e594002c 	ldr	r0, [r4, #44]	; fField44
        222f58:	e2800001 	add	r0, r0, #1	; 0x1
        222f5c:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        222f60:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStroke::Done(void)
 * Address: 00222f64
 */
TStroke::Done(void) {
    /*
        222f64:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        222f68:	ea65009e 	b	1b631e8 <TRecObject::$TestFlags(unsigned long)>
    */
}

