#include "include/TFlashPhysBlock.h"

/**
 * Symbol: TFlashPhysBlock::Init(TFlashStore *, unsigned long)
 * Address: 000c23b0
 */
TFlashPhysBlock::Init(TFlashStore *, unsigned long) {
    /*
         c23b0:	e5801000 	str	r1, [r0]
         c23b4:	e3e01000 	mvn	r1, #0	; 0x0
         c23b8:	e9800006 	stmib	r0, {r1, r2}
         c23bc:	e3a01000 	mov	r1, #0	; 0x0
         c23c0:	e580100c 	str	r1, [r0, #12]	; fField12
         c23c4:	e5c01014 	strb	r1, [r0, #20]	; fField20
         c23c8:	e3a02001 	mov	r2, #1	; 0x1
         c23cc:	e5802010 	str	r2, [r0, #16]	; fField16
         c23d0:	e5c01015 	strb	r1, [r0, #21]	; fField21
         c23d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashPhysBlock::SetInfo(SFlashBlockLogEntry *)
 * Address: 000c23d8
 */
TFlashPhysBlock::SetInfo(SFlashBlockLogEntry *) {
    /*
         c23d8:	e1a0c00d 	mov	ip, sp
         c23dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c23e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c23e4:	e1a04000 	mov	r4, r0
         c23e8:	e1a05001 	mov	r5, r1
         c23ec:	e1a00001 	mov	r0, r1
         c23f0:	eb68fb2d 	bl	1b010ac <SFlashLogEntry::$PhysOffset(void)>
         c23f4:	e584000c 	str	r0, [r4, #12]	; fField12
         c23f8:	e5950024 	ldr	r0, [r5, #36]
         c23fc:	e5840010 	str	r0, [r4, #16]	; fField16
         c2400:	e5b50028 	ldr	r0, [r5, #40]!
         c2404:	e5840004 	str	r0, [r4, #4]	; fField4
         c2408:	e3a00000 	mov	r0, #0	; 0x0
         c240c:	e5c40014 	strb	r0, [r4, #20]	; fField20
         c2410:	e5c40015 	strb	r0, [r4, #21]	; fField21
         c2414:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashPhysBlock::LogEntryOffset(void)
 * Address: 000c2418
 */
TFlashPhysBlock::LogEntryOffset(void) {
    /*
         c2418:	e590000c 	ldr	r0, [r0, #12]	; fField12
         c241c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashPhysBlock::SetInfo(SFlashEraseLogEntry *)
 * Address: 000c2420
 */
TFlashPhysBlock::SetInfo(SFlashEraseLogEntry *) {
    /*
         c2420:	e1a0c00d 	mov	ip, sp
         c2424:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c2428:	e24cb004 	sub	fp, ip, #4	; 0x4
         c242c:	e1a04000 	mov	r4, r0
         c2430:	e1a05001 	mov	r5, r1
         c2434:	e1a00001 	mov	r0, r1
         c2438:	eb68fb1b 	bl	1b010ac <SFlashLogEntry::$PhysOffset(void)>
         c243c:	e584000c 	str	r0, [r4, #12]	; fField12
         c2440:	e5950020 	ldr	r0, [r5, #32]
         c2444:	e5840010 	str	r0, [r4, #16]	; fField16
         c2448:	e5d50024 	ldrb	r0, [r5, #36]
         c244c:	e3300000 	teq	r0, #0	; 0x0
         c2450:	13a00000 	movne	r0, #0	; 0x0
         c2454:	03a00001 	moveq	r0, #1	; 0x1
         c2458:	e5c40014 	strb	r0, [r4, #20]	; fField20
         c245c:	e3e00000 	mvn	r0, #0	; 0x0
         c2460:	e5840004 	str	r0, [r4, #4]	; fField4
         c2464:	e3a00000 	mov	r0, #0	; 0x0
         c2468:	e5c40015 	strb	r0, [r4, #21]	; fField21
         c246c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashPhysBlock::SetInfo(SReservedBlockLogEntry *)
 * Address: 000c2470
 */
TFlashPhysBlock::SetInfo(SReservedBlockLogEntry *) {
    /*
         c2470:	e1a0c00d 	mov	ip, sp
         c2474:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c2478:	e24cb004 	sub	fp, ip, #4	; 0x4
         c247c:	e1a04000 	mov	r4, r0
         c2480:	e1a05001 	mov	r5, r1
         c2484:	e1a00001 	mov	r0, r1
         c2488:	eb68fb07 	bl	1b010ac <SFlashLogEntry::$PhysOffset(void)>
         c248c:	e584000c 	str	r0, [r4, #12]	; fField12
         c2490:	e5950024 	ldr	r0, [r5, #36]
         c2494:	e5840010 	str	r0, [r4, #16]	; fField16
         c2498:	e5b5002c 	ldr	r0, [r5, #44]!
         c249c:	e5840004 	str	r0, [r4, #4]	; fField4
         c24a0:	e3a00000 	mov	r0, #0	; 0x0
         c24a4:	e5c40014 	strb	r0, [r4, #20]	; fField20
         c24a8:	e3a00001 	mov	r0, #1	; 0x1
         c24ac:	e5c40015 	strb	r0, [r4, #21]	; fField21
         c24b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashPhysBlock::EraseCount(void)
 * Address: 000c24b4
 */
TFlashPhysBlock::EraseCount(void) {
    /*
         c24b4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         c24b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashPhysBlock::GetPhysicalOffset(void)
 * Address: 000c24bc
 */
TFlashPhysBlock::GetPhysicalOffset(void) {
    /*
         c24bc:	e5900008 	ldr	r0, [r0, #8]	; fField8
         c24c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashPhysBlock::IsSpare(void)
 * Address: 000c24c4
 */
TFlashPhysBlock::IsSpare(void) {
    /*
         c24c4:	e5900004 	ldr	r0, [r0, #4]	; fField4
         c24c8:	e3700001 	cmn	r0, #1	; 0x1
         c24cc:	13a00000 	movne	r0, #0	; 0x0
         c24d0:	03a00001 	moveq	r0, #1	; 0x1
         c24d4:	e20000ff 	and	r0, r0, #255	; 0xff
         c24d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long)
 * Address: 000c24dc
 */
TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long) {
    /*
         c24dc:	e1a0c00d 	mov	ip, sp
         c24e0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c24e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c24e8:	e1a04000 	mov	r4, r0
         c24ec:	e1a05001 	mov	r5, r1
         c24f0:	e1a06002 	mov	r6, r2
         c24f4:	e1a00001 	mov	r0, r1
         c24f8:	ebffffef 	bl	c24bc <TFlashPhysBlock::GetPhysicalOffset(void)>
         c24fc:	e1a07000 	mov	r7, r0
         c2500:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         c2504:	e3300000 	teq	r0, #0	; 0x0
         c2508:	0a00001f 	beq	c258c <TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long)+0xb0>
         c250c:	e24dd030 	sub	sp, sp, #48	; 0x30
         c2510:	e3a03030 	mov	r3, #48	; 0x30
         c2514:	e1a0200d 	mov	r2, sp
         c2518:	e5940000 	ldr	r0, [r4]
         c251c:	e594100c 	ldr	r1, [r4, #12]	; fField12
         c2520:	eb68c524 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c2524:	e1a00005 	mov	r0, r5
         c2528:	e58d7018 	str	r7, [sp, #24]
         c252c:	eb68d5a3 	bl	1af7bc0 <TFlashPhysBlock::$EraseCount(void)>
         c2530:	e3a03000 	mov	r3, #0	; 0x0
         c2534:	e1a02007 	mov	r2, r7
         c2538:	e58d0024 	str	r0, [sp, #36]
         c253c:	e92d000c 	stmdb	sp!, {r2, r3}
         c2540:	e28d3008 	add	r3, sp, #8	; 0x8
         c2544:	e3a02030 	mov	r2, #48	; 0x30
         c2548:	e5940000 	ldr	r0, [r4]
         c254c:	e59f1034 	ldr	r1, [pc, #34]	; c2588 <TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long)+0xac>
         c2550:	eb68c0ea 	bl	1af2900 <TFlashStore::$AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)>
         c2554:	e28dd008 	add	sp, sp, #8	; 0x8
         c2558:	e3300000 	teq	r0, #0	; 0x0
         c255c:	128dd008 	addne	sp, sp, #8	; 0x8
         c2560:	1a000047 	bne	c2684 <TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long)+0x1a8>
         c2564:	e8940003 	ldmia	r4, {r0, r1}
         c2568:	e590202c 	ldr	r2, [r0, #44]
         c256c:	e5900058 	ldr	r0, [r0, #88]
         c2570:	e1a00031 	mov	r0, r1, lsr r0
         c2574:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         c2578:	e1a0100d 	mov	r1, sp
         c257c:	eb6a1bc1 	bl	1b49488 <TFlashBlock::$SetInfo(SReservedBlockLogEntry *)>
         c2580:	e28dd030 	add	sp, sp, #48	; 0x30
         c2584:	ea000020 	b	c260c <TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long)+0x130>
         c2588:	7a626c6b 	bvc	195d73c <ROM$$Size+0x123daf0>
         c258c:	e24dd04c 	sub	sp, sp, #76	; 0x4c
         c2590:	e3a0304c 	mov	r3, #76	; 0x4c
         c2594:	e1a0200d 	mov	r2, sp
         c2598:	e5940000 	ldr	r0, [r4]
         c259c:	e594100c 	ldr	r1, [r4, #12]	; fField12
         c25a0:	eb68c504 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c25a4:	e1a00005 	mov	r0, r5
         c25a8:	e58d603c 	str	r6, [sp, #60]
         c25ac:	e58d7018 	str	r7, [sp, #24]
         c25b0:	eb68d582 	bl	1af7bc0 <TFlashPhysBlock::$EraseCount(void)>
         c25b4:	e3a03000 	mov	r3, #0	; 0x0
         c25b8:	e1a02007 	mov	r2, r7
         c25bc:	e58d0024 	str	r0, [sp, #36]
         c25c0:	e92d000c 	stmdb	sp!, {r2, r3}
         c25c4:	e28d3008 	add	r3, sp, #8	; 0x8
         c25c8:	e3a0204c 	mov	r2, #76	; 0x4c
         c25cc:	e5940000 	ldr	r0, [r4]
         c25d0:	e59f10b0 	ldr	r1, [pc, #b0]	; c2688 <TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long)+0x1ac>
         c25d4:	eb68c0c9 	bl	1af2900 <TFlashStore::$AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)>
         c25d8:	e28dd008 	add	sp, sp, #8	; 0x8
         c25dc:	e3300000 	teq	r0, #0	; 0x0
         c25e0:	128dd024 	addne	sp, sp, #36	; 0x24
         c25e4:	1a000026 	bne	c2684 <TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long)+0x1a8>
         c25e8:	e8940003 	ldmia	r4, {r0, r1}
         c25ec:	e590202c 	ldr	r2, [r0, #44]
         c25f0:	e5900058 	ldr	r0, [r0, #88]
         c25f4:	e1a00031 	mov	r0, r1, lsr r0
         c25f8:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         c25fc:	e1a0100d 	mov	r1, sp
         c2600:	e3a02000 	mov	r2, #0	; 0x0
         c2604:	eb694901 	bl	1b14a10 <TFlashBlock::$SetInfo(SFlashBlockLogEntry *, unsigned char *)>
         c2608:	e28dd04c 	add	sp, sp, #76	; 0x4c
         c260c:	e5940000 	ldr	r0, [r4]
         c2610:	e594100c 	ldr	r1, [r4, #12]	; fField12
         c2614:	eb691fc5 	bl	1b0a530 <TFlashStore::$ZapLogEntry(unsigned long)>
         c2618:	e3300000 	teq	r0, #0	; 0x0
         c261c:	e24dd028 	sub	sp, sp, #40	; 0x28
         c2620:	1a000017 	bne	c2684 <TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long)+0x1a8>
         c2624:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c2628:	e58d0018 	str	r0, [sp, #24]
         c262c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c2630:	e2800001 	add	r0, r0, #1	; 0x1
         c2634:	e58d0020 	str	r0, [sp, #32]
         c2638:	e3a00001 	mov	r0, #1	; 0x1
         c263c:	e5cd0024 	strb	r0, [sp, #36]
         c2640:	e3a03000 	mov	r3, #0	; 0x0
         c2644:	e1a02007 	mov	r2, r7
         c2648:	e92d000c 	stmdb	sp!, {r2, r3}
         c264c:	e28d3008 	add	r3, sp, #8	; 0x8
         c2650:	e3a02028 	mov	r2, #40	; 0x28
         c2654:	e5940000 	ldr	r0, [r4]
         c2658:	e59f102c 	ldr	r1, [pc, #2c]	; c268c <TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long)+0x1b0>
         c265c:	eb68c0a7 	bl	1af2900 <TFlashStore::$AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)>
         c2660:	e28dd008 	add	sp, sp, #8	; 0x8
         c2664:	e3300000 	teq	r0, #0	; 0x0
         c2668:	1a000005 	bne	c2684 <TFlashPhysBlock::SetSpare(TFlashPhysBlock *, unsigned long)+0x1a8>
         c266c:	e1a0100d 	mov	r1, sp
         c2670:	e1a00004 	mov	r0, r4
         c2674:	eb690f25 	bl	1b06310 <TFlashPhysBlock::$SetInfo(SFlashEraseLogEntry *)>
         c2678:	e4940008 	ldr	r0, [r4], #8	; fField8
         c267c:	e5941000 	ldr	r1, [r4]
         c2680:	eb691764 	bl	1b08418 <TFlashStore::$SyncErase(unsigned long)>
         c2684:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c2688:	66626c6b 	strvsbt	r6, [r2], -fp, ror #24
         c268c:	65626c6b 	strvsb	r6, [r2, -#3179]!
    */
}

