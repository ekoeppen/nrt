#include "include/TInkWordGlyph.h"

/**
 * Symbol: TInkWordGlyph::SetFontParms(RefVar const &)
 * Address: 000dbf14
 */
TInkWordGlyph::SetFontParms(RefVar const &) {
    /*
         dbf14:	e1a0c00d 	mov	ip, sp
         dbf18:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         dbf1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         dbf20:	e1a04000 	mov	r4, r0
         dbf24:	e1a05001 	mov	r5, r1
         dbf28:	e2800004 	add	r0, r0, #4	; 0x4
         dbf2c:	e1a06000 	mov	r6, r0
         dbf30:	eb67d667 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
         dbf34:	e3300000 	teq	r0, #0	; 0x0
         dbf38:	0a00000b 	beq	dbf6c <TInkWordGlyph::SetFontParms(RefVar const &)+0x58>
         dbf3c:	e1a07006 	mov	r7, r6
         dbf40:	e1a00006 	mov	r0, r6
         dbf44:	e1a01005 	mov	r1, r5
         dbf48:	eb67de9c 	bl	1ad39c0 <$SetInkWordFontParms__FRC6RefVarT1>
         dbf4c:	e5971000 	ldr	r1, [r7]
         dbf50:	e5810000 	str	r0, [r1]
         dbf54:	e3e00000 	mvn	r0, #0	; 0x0
         dbf58:	e584000c 	str	r0, [r4, #12]	; fField12
         dbf5c:	e5840008 	str	r0, [r4, #8]	; fField8
         dbf60:	e1a00004 	mov	r0, r4
         dbf64:	e1a0e00f 	mov	lr, pc
         dbf68:	e594f000 	ldr	pc, [r4]
         dbf6c:	e5960000 	ldr	r0, [r6]
         dbf70:	e5900000 	ldr	r0, [r0]
         dbf74:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TInkWordGlyph::__ct(RefVar const &, unsigned long, unsigned long)
 * Address: 000dc314
 */
TInkWordGlyph::TInkWordGlyph(RefVar const &, unsigned long, unsigned long) {
    /*
         dc314:	e1a0c00d 	mov	ip, sp
         dc318:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         dc31c:	e24cb004 	sub	fp, ip, #4	; 0x4
         dc320:	e1b04000 	movs	r4, r0
         dc324:	e1a07001 	mov	r7, r1
         dc328:	e1a06002 	mov	r6, r2
         dc32c:	e1a05003 	mov	r5, r3
         dc330:	1a000003 	bne	dc344 <TInkWordGlyph::__ct(RefVar const &, unsigned long, unsigned long)+0x30>
         dc334:	e3a00064 	mov	r0, #100	; 0x64
         dc338:	eb6bc8fe 	bl	1bce738 <$__nw(unsigned int)>
         dc33c:	e1b04000 	movs	r4, r0
         dc340:	0a000010 	beq	dc388 <TInkWordGlyph::__ct(RefVar const &, unsigned long, unsigned long)+0x74>
         dc344:	e3a00002 	mov	r0, #2	; 0x2
         dc348:	eb6b977f 	bl	1bc214c <$AllocateRefHandle(long)>
         dc34c:	e3a01000 	mov	r1, #0	; 0x0
         dc350:	e5840004 	str	r0, [r4, #4]	; fField4
         dc354:	e5a01004 	str	r1, [r0, #4]!	; fField4
         dc358:	e59f0030 	ldr	r0, [pc, #30]	; dc390 <TInkWordGlyph::__ct(RefVar const &, unsigned long, unsigned long)+0x7c>
         dc35c:	e5840000 	str	r0, [r4]
         dc360:	e5971000 	ldr	r1, [r7]
         dc364:	e5911000 	ldr	r1, [r1]
         dc368:	e5940004 	ldr	r0, [r4, #4]	; fField4
         dc36c:	e5801000 	str	r1, [r0]
         dc370:	e2844008 	add	r4, r4, #8	; 0x8
         dc374:	e8840060 	stmia	r4, {r5, r6}
         dc378:	e2444008 	sub	r4, r4, #8	; 0x8
         dc37c:	e1a00004 	mov	r0, r4
         dc380:	e1a0e00f 	mov	lr, pc
         dc384:	e594f000 	ldr	pc, [r4]
         dc388:	e1a00004 	mov	r0, r4
         dc38c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         dc390:	0001cbec 	andeq	ip, r1, ip, ror #23
    */
}

/**
 * Symbol: TInkWordGlyph::ReadMetrics(void)
 * Address: 000dc394
 */
TInkWordGlyph::ReadMetrics(void) {
    /*
         dc394:	e1a0c00d 	mov	ip, sp
         dc398:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         dc39c:	e24cb004 	sub	fp, ip, #4	; 0x4
         dc3a0:	e1a04000 	mov	r4, r0
         dc3a4:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
         dc3a8:	e5911000 	ldr	r1, [r1]
         dc3ac:	e3110003 	tst	r1, #3	; 0x3
         dc3b0:	e284101c 	add	r1, r4, #28	; 0x1c
         dc3b4:	1a000001 	bne	dc3c0 <TInkWordGlyph::ReadMetrics(void)+0x2c>
         dc3b8:	eb67d11c 	bl	1ad0830 <$GetInkWordAddrInfo(RefVar const &, InkWordInfo *)>
         dc3bc:	ea000000 	b	dc3c4 <TInkWordGlyph::ReadMetrics(void)+0x30>
         dc3c0:	eb67595a 	bl	1ab2930 <$GetInkWordInfo(RefVar const &, InkWordInfo *)>
         dc3c4:	e594000c 	ldr	r0, [r4, #12]	; fField12
         dc3c8:	e3700001 	cmn	r0, #1	; 0x1
         dc3cc:	0594003c 	ldreq	r0, [r4, #60]	; fField60
         dc3d0:	0584000c 	streq	r0, [r4, #12]	; fField12
         dc3d4:	e5940008 	ldr	r0, [r4, #8]	; fField8
         dc3d8:	e3700001 	cmn	r0, #1	; 0x1
         dc3dc:	0594002c 	ldreq	r0, [r4, #44]	; fField44
         dc3e0:	05840008 	streq	r0, [r4, #8]	; fField8
         dc3e4:	e5940008 	ldr	r0, [r4, #8]	; fField8
         dc3e8:	e2100102 	ands	r0, r0, #-2147483648	; 0x80000000
         dc3ec:	13a00001 	movne	r0, #1	; 0x1
         dc3f0:	e20050ff 	and	r5, r0, #255	; 0xff
         dc3f4:	e3a06001 	mov	r6, #1	; 0x1
         dc3f8:	e594000c 	ldr	r0, [r4, #12]	; fField12
         dc3fc:	e594103c 	ldr	r1, [r4, #60]	; fField60
         dc400:	e1300001 	teq	r0, r1
         dc404:	1a000009 	bne	dc430 <TInkWordGlyph::ReadMetrics(void)+0x9c>
         dc408:	e5940030 	ldr	r0, [r4, #48]	; fField48
         dc40c:	e3350000 	teq	r5, #0	; 0x0
         dc410:	e5840060 	str	r0, [r4, #96]	; fField96
         dc414:	05940040 	ldreq	r0, [r4, #64]	; fField64
         dc418:	15940034 	ldrne	r0, [r4, #52]	; fField52
         dc41c:	e5840058 	str	r0, [r4, #88]	; fField88
         dc420:	e594004c 	ldr	r0, [r4, #76]	; fField76
         dc424:	e5840014 	str	r0, [r4, #20]	; fField20
         dc428:	e5940054 	ldr	r0, [r4, #84]	; fField84
         dc42c:	ea00002b 	b	dc4e0 <TInkWordGlyph::ReadMetrics(void)+0x14c>
         dc430:	e5941038 	ldr	r1, [r4, #56]	; fField56
         dc434:	e1a01801 	mov	r1, r1, lsl #16
         dc438:	e1a00800 	mov	r0, r0, lsl #16
         dc43c:	eb6c131f 	bl	1be10c0 <$FixedDivide>
         dc440:	e3350000 	teq	r5, #0	; 0x0
         dc444:	e5840060 	str	r0, [r4, #96]	; fField96
         dc448:	0a000010 	beq	dc490 <TInkWordGlyph::ReadMetrics(void)+0xfc>
         dc44c:	e594003c 	ldr	r0, [r4, #60]	; fField60
         dc450:	e1a01800 	mov	r1, r0, lsl #16
         dc454:	e594000c 	ldr	r0, [r4, #12]	; fField12
         dc458:	e1a00800 	mov	r0, r0, lsl #16
         dc45c:	eb6c1317 	bl	1be10c0 <$FixedDivide>
         dc460:	e1a01000 	mov	r1, r0
         dc464:	e5940034 	ldr	r0, [r4, #52]	; fField52
         dc468:	e1a00800 	mov	r0, r0, lsl #16
         dc46c:	eb6c1314 	bl	1be10c4 <$FixedMultiply>
         dc470:	e2800902 	add	r0, r0, #32768	; 0x8000
         dc474:	e1a00840 	mov	r0, r0, asr #16
         dc478:	e1a00800 	mov	r0, r0, lsl #16
         dc47c:	e1a00840 	mov	r0, r0, asr #16
         dc480:	e5840058 	str	r0, [r4, #88]	; fField88
         dc484:	e3500001 	cmp	r0, #1	; 0x1
         dc488:	35846058 	strcc	r6, [r4, #88]	; fField88
         dc48c:	ea000002 	b	dc49c <TInkWordGlyph::ReadMetrics(void)+0x108>
         dc490:	e594000c 	ldr	r0, [r4, #12]	; fField12
         dc494:	eb67fe4b 	bl	1adbdc8 <$GetStdInkWordPenWidth(unsigned long)>
         dc498:	e5840058 	str	r0, [r4, #88]	; fField88
         dc49c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         dc4a0:	e1a00800 	mov	r0, r0, lsl #16
         dc4a4:	e5941060 	ldr	r1, [r4, #96]	; fField96
         dc4a8:	eb6c1305 	bl	1be10c4 <$FixedMultiply>
         dc4ac:	e2800902 	add	r0, r0, #32768	; 0x8000
         dc4b0:	e1a00840 	mov	r0, r0, asr #16
         dc4b4:	e1a00800 	mov	r0, r0, lsl #16
         dc4b8:	e1a00840 	mov	r0, r0, asr #16
         dc4bc:	e5840014 	str	r0, [r4, #20]	; fField20
         dc4c0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         dc4c4:	e1a00800 	mov	r0, r0, lsl #16
         dc4c8:	e5941060 	ldr	r1, [r4, #96]	; fField96
         dc4cc:	eb6c12fc 	bl	1be10c4 <$FixedMultiply>
         dc4d0:	e2800902 	add	r0, r0, #32768	; 0x8000
         dc4d4:	e1a00840 	mov	r0, r0, asr #16
         dc4d8:	e1a00800 	mov	r0, r0, lsl #16
         dc4dc:	e1a00840 	mov	r0, r0, asr #16
         dc4e0:	e5840018 	str	r0, [r4, #24]	; fField24
         dc4e4:	e5940038 	ldr	r0, [r4, #56]	; fField56
         dc4e8:	e1a00800 	mov	r0, r0, lsl #16
         dc4ec:	e3a0180a 	mov	r1, #655360	; 0xa0000
         dc4f0:	eb6c12f2 	bl	1be10c0 <$FixedDivide>
         dc4f4:	e5941060 	ldr	r1, [r4, #96]	; fField96
         dc4f8:	eb6c12f1 	bl	1be10c4 <$FixedMultiply>
         dc4fc:	e584005c 	str	r0, [r4, #92]	; fField92
         dc500:	e594001c 	ldr	r0, [r4, #28]	; fField28
         dc504:	e1a00800 	mov	r0, r0, lsl #16
         dc508:	e5941060 	ldr	r1, [r4, #96]	; fField96
         dc50c:	eb6c12ec 	bl	1be10c4 <$FixedMultiply>
         dc510:	e1a05000 	mov	r5, r0
         dc514:	e3a01802 	mov	r1, #131072	; 0x20000
         dc518:	e594005c 	ldr	r0, [r4, #92]	; fField92
         dc51c:	eb6c12e8 	bl	1be10c4 <$FixedMultiply>
         dc520:	e0850000 	add	r0, r5, r0
         dc524:	e2800902 	add	r0, r0, #32768	; 0x8000
         dc528:	e1a00840 	mov	r0, r0, asr #16
         dc52c:	e1a00800 	mov	r0, r0, lsl #16
         dc530:	e1a00840 	mov	r0, r0, asr #16
         dc534:	e5840010 	str	r0, [r4, #16]	; fField16
         dc538:	e24dd004 	sub	sp, sp, #4	; 0x4
         dc53c:	e1a0000d 	mov	r0, sp
         dc540:	eb6c4c97 	bl	1bef7a4 <$GetPort(GrafPort **)>
         dc544:	e49d0004 	ldr	r0, [sp], #4	; fField4
         dc548:	e5900010 	ldr	r0, [r0, #16]	; fField16
         dc54c:	e3100c03 	tst	r0, #768	; 0x300
         dc550:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         dc554:	e5940058 	ldr	r0, [r4, #88]	; fField88
         dc558:	e1b000a0 	movs	r0, r0, lsr #1
         dc55c:	e5840058 	str	r0, [r4, #88]	; fField88
         dc560:	05a46058 	streq	r6, [r4, #88]!	; fField88
         dc564:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TInkWordGlyph::DrawAt(unsigned long, unsigned long)
 * Address: 000dc568
 */
TInkWordGlyph::DrawAt(unsigned long, unsigned long) {
    /*
         dc568:	e1a0c00d 	mov	ip, sp
         dc56c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         dc570:	e24cb004 	sub	fp, ip, #4	; 0x4
         dc574:	e1a04000 	mov	r4, r0
         dc578:	e1a06001 	mov	r6, r1
         dc57c:	e1a05002 	mov	r5, r2
         dc580:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
         dc584:	e5911000 	ldr	r1, [r1]
         dc588:	e3110003 	tst	r1, #3	; 0x3
         dc58c:	1a000002 	bne	dc59c <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x34>
         dc590:	eb67d0a5 	bl	1ad082c <$GetInkWordAddrData(RefVar const &)>
         dc594:	e1a07000 	mov	r7, r0
         dc598:	ea000010 	b	dc5e0 <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x78>
         dc59c:	e24dd008 	sub	sp, sp, #8	; 0x8
         dc5a0:	e1a01000 	mov	r1, r0
         dc5a4:	e1a0000d 	mov	r0, sp
         dc5a8:	eb6b92cb 	bl	1bc10dc <TObjectPtr::$__ct(RefStruct const &)>
         dc5ac:	e1a0100d 	mov	r1, sp
         dc5b0:	e28d0004 	add	r0, sp, #4	; 0x4
         dc5b4:	eb6b92c6 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
         dc5b8:	e1a0000d 	mov	r0, sp
         dc5bc:	e3a01000 	mov	r1, #0	; 0x0
         dc5c0:	eb6b96ce 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         dc5c4:	e28d0004 	add	r0, sp, #4	; 0x4
         dc5c8:	eb6b96d1 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         dc5cc:	e1a07000 	mov	r7, r0
         dc5d0:	e28d0004 	add	r0, sp, #4	; 0x4
         dc5d4:	e3a01000 	mov	r1, #0	; 0x0
         dc5d8:	eb6b96c8 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         dc5dc:	e28dd008 	add	sp, sp, #8	; 0x8
         dc5e0:	e24dd004 	sub	sp, sp, #4	; 0x4
         dc5e4:	e1a0000d 	mov	r0, sp
         dc5e8:	eb6c4c6d 	bl	1bef7a4 <$GetPort(GrafPort **)>
         dc5ec:	e24dd008 	sub	sp, sp, #8	; 0x8
         dc5f0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         dc5f4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         dc5f8:	e2009c03 	and	r9, r0, #768	; 0x300
         dc5fc:	e594000c 	ldr	r0, [r4, #12]	; fField12
         dc600:	e5941038 	ldr	r1, [r4, #56]	; fField56
         dc604:	e0500001 	subs	r0, r0, r1
         dc608:	13a00001 	movne	r0, #1	; 0x1
         dc60c:	e20080ff 	and	r8, r0, #255	; 0xff
         dc610:	e594005c 	ldr	r0, [r4, #92]	; fField92
         dc614:	e2800902 	add	r0, r0, #32768	; 0x8000
         dc618:	e0860840 	add	r0, r6, r0, asr #16
         dc61c:	e5cd0003 	strb	r0, [sp, #3]
         dc620:	e1a00440 	mov	r0, r0, asr #8
         dc624:	e5cd0002 	strb	r0, [sp, #2]	; fField2
         dc628:	e5940010 	ldr	r0, [r4, #16]	; fField16
         dc62c:	e0801006 	add	r1, r0, r6
         dc630:	e594005c 	ldr	r0, [r4, #92]	; fField92
         dc634:	e2800902 	add	r0, r0, #32768	; 0x8000
         dc638:	e0410840 	sub	r0, r1, r0, asr #16
         dc63c:	e5941058 	ldr	r1, [r4, #88]	; fField88
         dc640:	e0400001 	sub	r0, r0, r1
         dc644:	e5cd0007 	strb	r0, [sp, #7]
         dc648:	e1a00440 	mov	r0, r0, asr #8
         dc64c:	e5cd0006 	strb	r0, [sp, #6]
         dc650:	e5940014 	ldr	r0, [r4, #20]	; fField20
         dc654:	e0450000 	sub	r0, r5, r0
         dc658:	e5cd0001 	strb	r0, [sp, #1]
         dc65c:	e1a00440 	mov	r0, r0, asr #8
         dc660:	e44d0010 	strb	r0, [sp], -#16	; fField16
         dc664:	e5940018 	ldr	r0, [r4, #24]	; fField24
         dc668:	e0800005 	add	r0, r0, r5
         dc66c:	e5941058 	ldr	r1, [r4, #88]	; fField88
         dc670:	e0400001 	sub	r0, r0, r1
         dc674:	e5cd0015 	strb	r0, [sp, #21]
         dc678:	e1a00440 	mov	r0, r0, asr #8
         dc67c:	e5cd0014 	strb	r0, [sp, #20]	; fField20
         dc680:	e1a0000d 	mov	r0, sp
         dc684:	eb69cc51 	bl	1b4f7d0 <$GetPenState(PenState *)>
         dc688:	eb69d8a5 	bl	1b52924 <$PenNormal(void)>
         dc68c:	e5940058 	ldr	r0, [r4, #88]	; fField88
         dc690:	e1a01800 	mov	r1, r0, lsl #16
         dc694:	e1a01841 	mov	r1, r1, asr #16
         dc698:	e1a00001 	mov	r0, r1
         dc69c:	eb69d8a1 	bl	1b52928 <$PenSize__FlT1>
         dc6a0:	e3390000 	teq	r9, #0	; 0x0
         dc6a4:	0a000027 	beq	dc748 <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x1e0>
         dc6a8:	e3380000 	teq	r8, #0	; 0x0
         dc6ac:	0a00000f 	beq	dc6f0 <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x188>
         dc6b0:	e24dd010 	sub	sp, sp, #16	; 0x10
         dc6b4:	e28d1020 	add	r1, sp, #32	; 0x20
         dc6b8:	e1a0000d 	mov	r0, sp
         dc6bc:	eb6a0a1a 	bl	1b5ef2c <$FixRect>
         dc6c0:	e2841020 	add	r1, r4, #32	; 0x20
         dc6c4:	e8910003 	ldmia	r1, {r0, r1}
         dc6c8:	e0800001 	add	r0, r0, r1
         dc6cc:	e1a02800 	mov	r2, r0, lsl #16
         dc6d0:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
         dc6d4:	e1a01800 	mov	r1, r0, lsl #16
         dc6d8:	e1a0300d 	mov	r3, sp
         dc6dc:	e1a00007 	mov	r0, r7
         dc6e0:	eb66480f 	bl	1a6e724 <$CSMakePathsGroupInRect__FP14CSStrokeHeaderlT2P5FRect>
         dc6e4:	e1a04000 	mov	r4, r0
         dc6e8:	e28dd010 	add	sp, sp, #16	; 0x10
         dc6ec:	ea000006 	b	dc70c <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x1a4>
         dc6f0:	e59d0012 	ldr	r0, [sp, #18]
         dc6f4:	e1a02800 	mov	r2, r0, lsl #16
         dc6f8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         dc6fc:	e1a01800 	mov	r1, r0, lsl #16
         dc700:	e1a00007 	mov	r0, r7
         dc704:	eb664807 	bl	1a6e728 <$CSMakePathsGroup__FP14CSStrokeHeaderlT2>
         dc708:	e1a04000 	mov	r4, r0
         dc70c:	e3a06000 	mov	r6, #0	; 0x0
         dc710:	e5945000 	ldr	r5, [r4]
         dc714:	e3350000 	teq	r5, #0	; 0x0
         dc718:	0a000007 	beq	dc73c <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x1d4>
         dc71c:	e1a00005 	mov	r0, r5
         dc720:	eb69cc1b 	bl	1b4f794 <$FramePaths(paths **)>
         dc724:	e1a00005 	mov	r0, r5
         dc728:	eb69c3ea 	bl	1b4d6d8 <$DisposePaths(paths **)>
         dc72c:	e2866001 	add	r6, r6, #1	; 0x1
         dc730:	e7945106 	ldr	r5, [r4, r6, lsl #2]	; fField2
         dc734:	e3350000 	teq	r5, #0	; 0x0
         dc738:	1afffff7 	bne	dc71c <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x1b4>
         dc73c:	e1a00004 	mov	r0, r4
         dc740:	eb6c125b 	bl	1be10b4 <$DisposPtr>
         dc744:	ea00003a 	b	dc834 <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x2cc>
         dc748:	e3a05000 	mov	r5, #0	; 0x0
         dc74c:	e24dd008 	sub	sp, sp, #8	; 0x8
         dc750:	e1a0000d 	mov	r0, sp
         dc754:	eb6c4c12 	bl	1bef7a4 <$GetPort(GrafPort **)>
         dc758:	e49d0004 	ldr	r0, [sp], #4	; fField4
         dc75c:	e5900024 	ldr	r0, [r0, #36]	; fField36
         dc760:	e58d0000 	str	r0, [sp]
         dc764:	e1a06000 	mov	r6, r0
         dc768:	e5900000 	ldr	r0, [r0]
         dc76c:	e5900000 	ldr	r0, [r0]
         dc770:	e1a00840 	mov	r0, r0, asr #16
         dc774:	e330000c 	teq	r0, #12	; 0xc
         dc778:	1a00000e 	bne	dc7b8 <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x250>
         dc77c:	e24dd004 	sub	sp, sp, #4	; 0x4
         dc780:	e1a0000d 	mov	r0, sp
         dc784:	eb6c4c06 	bl	1bef7a4 <$GetPort(GrafPort **)>
         dc788:	e49d0004 	ldr	r0, [sp], #4	; fField4
         dc78c:	e5900040 	ldr	r0, [r0, #64]	; fField64
         dc790:	e3300000 	teq	r0, #0	; 0x0
         dc794:	1a000007 	bne	dc7b8 <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x250>
         dc798:	eb69c3bc 	bl	1b4d690 <$CheckPic(void)>
         dc79c:	e3300000 	teq	r0, #0	; 0x0
         dc7a0:	1a000004 	bne	dc7b8 <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x250>
         dc7a4:	e5960000 	ldr	r0, [r6]
         dc7a8:	e2800004 	add	r0, r0, #4	; 0x4
         dc7ac:	e28d1014 	add	r1, sp, #20	; 0x14
         dc7b0:	eb66d869 	bl	1a9295c <TRect::$Encloses( const(TRect const &))>
         dc7b4:	e1a05000 	mov	r5, r0
         dc7b8:	e3380000 	teq	r8, #0	; 0x0
         dc7bc:	0a000011 	beq	dc808 <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x2a0>
         dc7c0:	e24dd010 	sub	sp, sp, #16	; 0x10
         dc7c4:	e28d1024 	add	r1, sp, #36	; 0x24
         dc7c8:	e1a0000d 	mov	r0, sp
         dc7cc:	eb6a09d6 	bl	1b5ef2c <$FixRect>
         dc7d0:	e1a03005 	mov	r3, r5
         dc7d4:	e1a0200d 	mov	r2, sp
         dc7d8:	e92d000c 	stmdb	sp!, {r2, r3}
         dc7dc:	e5940024 	ldr	r0, [r4, #36]	; fField36
         dc7e0:	e5941020 	ldr	r1, [r4, #32]	; fField32
         dc7e4:	e0810000 	add	r0, r1, r0
         dc7e8:	e1a03800 	mov	r3, r0, lsl #16
         dc7ec:	e594001c 	ldr	r0, [r4, #28]	; fField28
         dc7f0:	e1a02800 	mov	r2, r0, lsl #16
         dc7f4:	e1a00007 	mov	r0, r7
         dc7f8:	e5b41058 	ldr	r1, [r4, #88]!	; fField88
         dc7fc:	eb6647c5 	bl	1a6e718 <$CSDrawInRect__FP14CSStrokeHeaderUllT3P5FRectUc>
         dc800:	e28dd018 	add	sp, sp, #24	; 0x18
         dc804:	ea000009 	b	dc830 <TInkWordGlyph::DrawAt(unsigned long, unsigned long)+0x2c8>
         dc808:	e1a03005 	mov	r3, r5
         dc80c:	e92d0008 	stmdb	sp!, {r3}
         dc810:	e59d001a 	ldr	r0, [sp, #26]
         dc814:	e1a03800 	mov	r3, r0, lsl #16
         dc818:	e59d0018 	ldr	r0, [sp, #24]	; fField24
         dc81c:	e1a02800 	mov	r2, r0, lsl #16
         dc820:	e1a00007 	mov	r0, r7
         dc824:	e5b41058 	ldr	r1, [r4, #88]!	; fField88
         dc828:	eb6647bb 	bl	1a6e71c <$CSDraw__FP14CSStrokeHeaderUllT3Uc>
         dc82c:	e28dd004 	add	sp, sp, #4	; 0x4
         dc830:	e28dd004 	add	sp, sp, #4	; 0x4
         dc834:	e1a0000d 	mov	r0, sp
         dc838:	eb69dc6e 	bl	1b539f8 <$SetPenState(PenState *)>
         dc83c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

