#include "include/TNSDebugAPI.h"

/**
 * Symbol: TNSDebugAPI::StackFrameAt(long)
 * Address: 002d2464
 */
TNSDebugAPI::StackFrameAt(long) {
    /*
        2d2464:	e1a0c00d 	mov	ip, sp
        2d2468:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d246c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2470:	e1a05000 	mov	r5, r0
        2d2474:	e1a04001 	mov	r4, r1
        2d2478:	eb64bf29 	bl	1c02124 <TNSDebugAPI::$NumStackFrames(void)>
        2d247c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2480:	e3540000 	cmp	r4, #0	; 0x0
        2d2484:	ba000001 	blt	2d2490 <TNSDebugAPI::StackFrameAt(long)+0x2c>
        2d2488:	e1540000 	cmp	r4, r0
        2d248c:	ba000008 	blt	2d24b4 <TNSDebugAPI::StackFrameAt(long)+0x50>
        2d2490:	e1a00104 	mov	r0, r4, lsl #2
        2d2494:	eb63bf2c 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2498:	e58d0000 	str	r0, [sp]
        2d249c:	e1a0100d 	mov	r1, sp
        2d24a0:	e3a000a5 	mov	r0, #165	; 0xa5
        2d24a4:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        2d24a8:	eb5dc761 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d24ac:	e59d0000 	ldr	r0, [sp]
        2d24b0:	eb63c341 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d24b4:	e2841001 	add	r1, r4, #1	; 0x1
        2d24b8:	e5950000 	ldr	r0, [r5]
        2d24bc:	e2800008 	add	r0, r0, #8	; 0x8
        2d24c0:	eb5e15bd 	bl	1a57bbc <TIntrpStack::$StateAt(long)>
        2d24c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::Function(long)
 * Address: 002d24c8
 */
TNSDebugAPI::Function(long) {
    /*
        2d24c8:	e1a0c00d 	mov	ip, sp
        2d24cc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2d24d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d24d4:	eb5e15b7 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d24d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2d24dc:	e5900000 	ldr	r0, [r0]
        2d24e0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::SetFunction(long, RefVar const &)
 * Address: 002d24e4
 */
TNSDebugAPI::SetFunction(long, RefVar const &) {
    /*
        2d24e4:	e1a0c00d 	mov	ip, sp
        2d24e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d24ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d24f0:	e1a04002 	mov	r4, r2
        2d24f4:	eb5e15af 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d24f8:	e5941000 	ldr	r1, [r4]
        2d24fc:	e5911000 	ldr	r1, [r1]
        2d2500:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2d2504:	e5801000 	str	r1, [r0]
        2d2508:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::PC(long)
 * Address: 002d250c
 */
TNSDebugAPI::PC(long) {
    /*
        2d250c:	e1a0c00d 	mov	ip, sp
        2d2510:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2d2514:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2518:	eb5e15a6 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d251c:	e5900000 	ldr	r0, [r0]
        2d2520:	e5900000 	ldr	r0, [r0]
        2d2524:	e3100003 	tst	r0, #3	; 0x3
        2d2528:	13e00000 	mvnne	r0, #0	; 0x0
        2d252c:	01a00140 	moveq	r0, r0, asr #2
        2d2530:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::SetPC(long, long)
 * Address: 002d2534
 */
TNSDebugAPI::SetPC(long, long) {
    /*
        2d2534:	e1a0c00d 	mov	ip, sp
        2d2538:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d253c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2540:	e1a04002 	mov	r4, r2
        2d2544:	eb5e159b 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d2548:	e1a01104 	mov	r1, r4, lsl #2
        2d254c:	e5900000 	ldr	r0, [r0]
        2d2550:	e5801000 	str	r1, [r0]
        2d2554:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::Receiver(long)
 * Address: 002d2558
 */
TNSDebugAPI::Receiver(long) {
    /*
        2d2558:	e1a0c00d 	mov	ip, sp
        2d255c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2d2560:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2564:	eb5e1593 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d2568:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2d256c:	e5900000 	ldr	r0, [r0]
        2d2570:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::SetReceiver(long, RefVar const &)
 * Address: 002d2574
 */
TNSDebugAPI::SetReceiver(long, RefVar const &) {
    /*
        2d2574:	e1a0c00d 	mov	ip, sp
        2d2578:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d257c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2580:	e1a04002 	mov	r4, r2
        2d2584:	eb5e158b 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d2588:	e5941000 	ldr	r1, [r4]
        2d258c:	e5911000 	ldr	r1, [r1]
        2d2590:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2d2594:	e5801000 	str	r1, [r0]
        2d2598:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::Implementor(long)
 * Address: 002d259c
 */
TNSDebugAPI::Implementor(long) {
    /*
        2d259c:	e1a0c00d 	mov	ip, sp
        2d25a0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2d25a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d25a8:	eb5e1582 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d25ac:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2d25b0:	e5900000 	ldr	r0, [r0]
        2d25b4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::SetImplementor(long, RefVar const &)
 * Address: 002d25b8
 */
TNSDebugAPI::SetImplementor(long, RefVar const &) {
    /*
        2d25b8:	e1a0c00d 	mov	ip, sp
        2d25bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d25c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d25c4:	e1a04002 	mov	r4, r2
        2d25c8:	eb5e157a 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d25cc:	e5941000 	ldr	r1, [r4]
        2d25d0:	e5911000 	ldr	r1, [r1]
        2d25d4:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2d25d8:	e5801000 	str	r1, [r0]
        2d25dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::Locals(long)
 * Address: 002d25e0
 */
TNSDebugAPI::Locals(long) {
    /*
        2d25e0:	e1a0c00d 	mov	ip, sp
        2d25e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d25e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d25ec:	e1a04000 	mov	r4, r0
        2d25f0:	eb5e1570 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d25f4:	e1a09000 	mov	r9, r0
        2d25f8:	e2800004 	add	r0, r0, #4	; 0x4
        2d25fc:	e1a07000 	mov	r7, r0
        2d2600:	eb63bed8 	bl	1bc2168 <$ClassOf(RefVar const &)>
        2d2604:	eb63bed0 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2608:	e1a05000 	mov	r5, r0
        2d260c:	e5990014 	ldr	r0, [r9, #20]
        2d2610:	e5908000 	ldr	r8, [r0]
        2d2614:	e5950000 	ldr	r0, [r5]
        2d2618:	e59f10ac 	ldr	r1, [pc, #ac]	; 2d26cc <TNSDebugAPI::Locals(long)+0xec>
        2d261c:	e5911000 	ldr	r1, [r1]
        2d2620:	e5911000 	ldr	r1, [r1]
        2d2624:	eb63c701 	bl	1bc4230 <$EQRef__FlT1>
        2d2628:	e59f60a0 	ldr	r6, [pc, #a0]	; 2d26d0 <TNSDebugAPI::Locals(long)+0xf0>
        2d262c:	e3300000 	teq	r0, #0	; 0x0
        2d2630:	0a00002b 	beq	2d26e4 <TNSDebugAPI::Locals(long)+0x104>
        2d2634:	e5970000 	ldr	r0, [r7]
        2d2638:	e5900000 	ldr	r0, [r0]
        2d263c:	e3a01004 	mov	r1, #4	; 0x4
        2d2640:	eb63c703 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d2644:	e3100003 	tst	r0, #3	; 0x3
        2d2648:	01a00140 	moveq	r0, r0, asr #2
        2d264c:	0a000000 	beq	2d2654 <TNSDebugAPI::Locals(long)+0x74>
        2d2650:	eb63beb1 	bl	1bc211c <$_RINTError(long)>
        2d2654:	e1a01000 	mov	r1, r0
        2d2658:	e1a00800 	mov	r0, r0, lsl #16
        2d265c:	e1a00820 	mov	r0, r0, lsr #16
        2d2660:	e0801841 	add	r1, r0, r1, asr #16
        2d2664:	e1a0a001 	mov	sl, r1
        2d2668:	e1a09001 	mov	r9, r1
        2d266c:	e1a00006 	mov	r0, r6
        2d2670:	eb63beb0 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2d2674:	eb63beb4 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2678:	e1a07000 	mov	r7, r0
        2d267c:	e3a06000 	mov	r6, #0	; 0x0
        2d2680:	e3590000 	cmp	r9, #0	; 0x0
        2d2684:	da00000d 	ble	2d26c0 <TNSDebugAPI::Locals(long)+0xe0>
        2d2688:	e1a00148 	mov	r0, r8, asr #2
        2d268c:	e1a08340 	mov	r8, r0, asr #6
        2d2690:	e5970000 	ldr	r0, [r7]
        2d2694:	e5941000 	ldr	r1, [r4]
        2d2698:	e2812020 	add	r2, r1, #32	; 0x20
        2d269c:	e0881006 	add	r1, r8, r6
        2d26a0:	e2811003 	add	r1, r1, #3	; 0x3
        2d26a4:	e5922004 	ldr	r2, [r2, #4]	; fField4
        2d26a8:	e7922101 	ldr	r2, [r2, r1, lsl #2]	; fField2
        2d26ac:	e1a01006 	mov	r1, r6
        2d26b0:	eb63cf28 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d26b4:	e2866001 	add	r6, r6, #1	; 0x1
        2d26b8:	e15a0006 	cmp	sl, r6
        2d26bc:	cafffff3 	bgt	2d2690 <TNSDebugAPI::Locals(long)+0xb0>
        2d26c0:	e5974000 	ldr	r4, [r7]
        2d26c4:	e1a00007 	mov	r0, r7
        2d26c8:	ea000047 	b	2d27ec <TNSDebugAPI::Locals(long)+0x20c>
        2d26cc:	00685310 	rsbeq	r5, r8, r0, lsl r3
        2d26d0:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2d26d4:	e1a00005 	mov	r0, r5
        2d26d8:	eb63c2b7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d26dc:	e1a00004 	mov	r0, r4
        2d26e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d26e4:	e1a00007 	mov	r0, r7
        2d26e8:	eb64be8b 	bl	1c0211c <$IsNativeFunction(RefVar const &)>
        2d26ec:	e3300000 	teq	r0, #0	; 0x0
        2d26f0:	0a00001a 	beq	2d2760 <TNSDebugAPI::Locals(long)+0x180>
        2d26f4:	e1a00007 	mov	r0, r7
        2d26f8:	eb64be86 	bl	1c02118 <$GetFunctionArgCount(RefVar const &)>
        2d26fc:	e1a07000 	mov	r7, r0
        2d2700:	e1a01000 	mov	r1, r0
        2d2704:	e1a00006 	mov	r0, r6
        2d2708:	eb63be8a 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2d270c:	eb63be8e 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2710:	e1a09000 	mov	r9, r0
        2d2714:	e3a06000 	mov	r6, #0	; 0x0
        2d2718:	e3570000 	cmp	r7, #0	; 0x0
        2d271c:	da00000c 	ble	2d2754 <TNSDebugAPI::Locals(long)+0x174>
        2d2720:	e1a00148 	mov	r0, r8, asr #2
        2d2724:	e1a08340 	mov	r8, r0, asr #6
        2d2728:	e5990000 	ldr	r0, [r9]
        2d272c:	e5941000 	ldr	r1, [r4]
        2d2730:	e2812020 	add	r2, r1, #32	; 0x20
        2d2734:	e0881006 	add	r1, r8, r6
        2d2738:	e5922004 	ldr	r2, [r2, #4]	; fField4
        2d273c:	e7922101 	ldr	r2, [r2, r1, lsl #2]	; fField2
        2d2740:	e1a01006 	mov	r1, r6
        2d2744:	eb63cf03 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d2748:	e2866001 	add	r6, r6, #1	; 0x1
        2d274c:	e1560007 	cmp	r6, r7
        2d2750:	bafffff4 	blt	2d2728 <TNSDebugAPI::Locals(long)+0x148>
        2d2754:	e5994000 	ldr	r4, [r9]
        2d2758:	e1a00009 	mov	r0, r9
        2d275c:	ea000022 	b	2d27ec <TNSDebugAPI::Locals(long)+0x20c>
        2d2760:	e5950000 	ldr	r0, [r5]
        2d2764:	e59f1088 	ldr	r1, [pc, #88]	; 2d27f4 <TNSDebugAPI::Locals(long)+0x214>
        2d2768:	e5911000 	ldr	r1, [r1]
        2d276c:	e5911000 	ldr	r1, [r1]
        2d2770:	eb63c6ae 	bl	1bc4230 <$EQRef__FlT1>
        2d2774:	e3300000 	teq	r0, #0	; 0x0
        2d2778:	0a00001e 	beq	2d27f8 <TNSDebugAPI::Locals(long)+0x218>
        2d277c:	e2890008 	add	r0, r9, #8	; 0x8
        2d2780:	e1a07000 	mov	r7, r0
        2d2784:	e5900000 	ldr	r0, [r0]
        2d2788:	e5900000 	ldr	r0, [r0]
        2d278c:	eb63cac6 	bl	1bc52ac <$Length(long)>
        2d2790:	e2404003 	sub	r4, r0, #3	; 0x3
        2d2794:	e1a01004 	mov	r1, r4
        2d2798:	e1a00006 	mov	r0, r6
        2d279c:	eb63be65 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2d27a0:	eb63be69 	bl	1bc214c <$AllocateRefHandle(long)>
        2d27a4:	e1a08000 	mov	r8, r0
        2d27a8:	e3a06000 	mov	r6, #0	; 0x0
        2d27ac:	e3540000 	cmp	r4, #0	; 0x0
        2d27b0:	da00000b 	ble	2d27e4 <TNSDebugAPI::Locals(long)+0x204>
        2d27b4:	e5989000 	ldr	r9, [r8]
        2d27b8:	e5970000 	ldr	r0, [r7]
        2d27bc:	e5900000 	ldr	r0, [r0]
        2d27c0:	e2861003 	add	r1, r6, #3	; 0x3
        2d27c4:	eb63c6a2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d27c8:	e1a02000 	mov	r2, r0
        2d27cc:	e1a01006 	mov	r1, r6
        2d27d0:	e1a00009 	mov	r0, r9
        2d27d4:	eb63cedf 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d27d8:	e2866001 	add	r6, r6, #1	; 0x1
        2d27dc:	e1560004 	cmp	r6, r4
        2d27e0:	bafffff3 	blt	2d27b4 <TNSDebugAPI::Locals(long)+0x1d4>
        2d27e4:	e5984000 	ldr	r4, [r8]
        2d27e8:	e1a00008 	mov	r0, r8
        2d27ec:	eb63c272 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d27f0:	eaffffb7 	b	2d26d4 <TNSDebugAPI::Locals(long)+0xf4>
        2d27f4:	006824c8 	rsbeq	r2, r8, r8, asr #9
        2d27f8:	e1a00005 	mov	r0, r5
        2d27fc:	eb63c26e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2800:	e3a00002 	mov	r0, #2	; 0x2
        2d2804:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::GetVar(long, long)
 * Address: 002d290c
 */
TNSDebugAPI::GetVar(long, long) {
    /*
        2d290c:	e1a0c00d 	mov	ip, sp
        2d2910:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d2914:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2918:	e1a05000 	mov	r5, r0
        2d291c:	e1a04002 	mov	r4, r2
        2d2920:	eb5e14a4 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d2924:	e1a09000 	mov	r9, r0
        2d2928:	e2800004 	add	r0, r0, #4	; 0x4
        2d292c:	e1a08000 	mov	r8, r0
        2d2930:	eb63be0c 	bl	1bc2168 <$ClassOf(RefVar const &)>
        2d2934:	eb63be04 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2938:	e1a06000 	mov	r6, r0
        2d293c:	e5990014 	ldr	r0, [r9, #20]
        2d2940:	e590a000 	ldr	sl, [r0]
        2d2944:	e5960000 	ldr	r0, [r6]
        2d2948:	e59f1094 	ldr	r1, [pc, #94]	; 2d29e4 <TNSDebugAPI::GetVar(long, long)+0xd8>
        2d294c:	e5911000 	ldr	r1, [r1]
        2d2950:	e5911000 	ldr	r1, [r1]
        2d2954:	eb63c635 	bl	1bc4230 <$EQRef__FlT1>
        2d2958:	e1a07104 	mov	r7, r4, lsl #2
        2d295c:	e3300000 	teq	r0, #0	; 0x0
        2d2960:	0a000020 	beq	2d29e8 <TNSDebugAPI::GetVar(long, long)+0xdc>
        2d2964:	e5980000 	ldr	r0, [r8]
        2d2968:	e5900000 	ldr	r0, [r0]
        2d296c:	e3a01004 	mov	r1, #4	; 0x4
        2d2970:	eb63c637 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d2974:	e3100003 	tst	r0, #3	; 0x3
        2d2978:	01a00140 	moveq	r0, r0, asr #2
        2d297c:	0a000000 	beq	2d2984 <TNSDebugAPI::GetVar(long, long)+0x78>
        2d2980:	eb63bde5 	bl	1bc211c <$_RINTError(long)>
        2d2984:	e1a01000 	mov	r1, r0
        2d2988:	e1a00800 	mov	r0, r0, lsl #16
        2d298c:	e1a00820 	mov	r0, r0, lsr #16
        2d2990:	e1a01841 	mov	r1, r1, asr #16
        2d2994:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2998:	e3540000 	cmp	r4, #0	; 0x0
        2d299c:	ba000002 	blt	2d29ac <TNSDebugAPI::GetVar(long, long)+0xa0>
        2d29a0:	e0800001 	add	r0, r0, r1
        2d29a4:	e1500004 	cmp	r0, r4
        2d29a8:	ca000008 	bgt	2d29d0 <TNSDebugAPI::GetVar(long, long)+0xc4>
        2d29ac:	e1a00007 	mov	r0, r7
        2d29b0:	eb63bde5 	bl	1bc214c <$AllocateRefHandle(long)>
        2d29b4:	e58d0000 	str	r0, [sp]
        2d29b8:	e1a0100d 	mov	r1, sp
        2d29bc:	e3a000a5 	mov	r0, #165	; 0xa5
        2d29c0:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        2d29c4:	eb5dc61a 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d29c8:	e59d0000 	ldr	r0, [sp]
        2d29cc:	eb63c1fa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d29d0:	e5950000 	ldr	r0, [r5]
        2d29d4:	e2800020 	add	r0, r0, #32	; 0x20
        2d29d8:	e084144a 	add	r1, r4, sl, asr #8
        2d29dc:	e2811003 	add	r1, r1, #3	; 0x3
        2d29e0:	ea000017 	b	2d2a44 <TNSDebugAPI::GetVar(long, long)+0x138>
        2d29e4:	00685310 	rsbeq	r5, r8, r0, lsl r3
        2d29e8:	e1a00008 	mov	r0, r8
        2d29ec:	eb64bdca 	bl	1c0211c <$IsNativeFunction(RefVar const &)>
        2d29f0:	e3300000 	teq	r0, #0	; 0x0
        2d29f4:	0a000018 	beq	2d2a5c <TNSDebugAPI::GetVar(long, long)+0x150>
        2d29f8:	e1a00008 	mov	r0, r8
        2d29fc:	eb64bdc5 	bl	1c02118 <$GetFunctionArgCount(RefVar const &)>
        2d2a00:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2a04:	e3540000 	cmp	r4, #0	; 0x0
        2d2a08:	ba000001 	blt	2d2a14 <TNSDebugAPI::GetVar(long, long)+0x108>
        2d2a0c:	e1540000 	cmp	r4, r0
        2d2a10:	ba000008 	blt	2d2a38 <TNSDebugAPI::GetVar(long, long)+0x12c>
        2d2a14:	e1a00007 	mov	r0, r7
        2d2a18:	eb63bdcb 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2a1c:	e58d0000 	str	r0, [sp]
        2d2a20:	e1a0100d 	mov	r1, sp
        2d2a24:	e3a000a5 	mov	r0, #165	; 0xa5
        2d2a28:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        2d2a2c:	eb5dc600 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d2a30:	e59d0000 	ldr	r0, [sp]
        2d2a34:	eb63c1e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2a38:	e5950000 	ldr	r0, [r5]
        2d2a3c:	e2800020 	add	r0, r0, #32	; 0x20
        2d2a40:	e084144a 	add	r1, r4, sl, asr #8
        2d2a44:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2d2a48:	e7904101 	ldr	r4, [r0, r1, lsl #2]	; fField2
        2d2a4c:	e1a00006 	mov	r0, r6
        2d2a50:	eb63c1d9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2a54:	e1a00004 	mov	r0, r4
        2d2a58:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d2a5c:	e5960000 	ldr	r0, [r6]
        2d2a60:	e59f1078 	ldr	r1, [pc, #78]	; 2d2ae0 <TNSDebugAPI::GetVar(long, long)+0x1d4>
        2d2a64:	e5911000 	ldr	r1, [r1]
        2d2a68:	e5911000 	ldr	r1, [r1]
        2d2a6c:	eb63c5ef 	bl	1bc4230 <$EQRef__FlT1>
        2d2a70:	e3300000 	teq	r0, #0	; 0x0
        2d2a74:	0a00001a 	beq	2d2ae4 <TNSDebugAPI::GetVar(long, long)+0x1d8>
        2d2a78:	e2890008 	add	r0, r9, #8	; 0x8
        2d2a7c:	e1a05000 	mov	r5, r0
        2d2a80:	e5900000 	ldr	r0, [r0]
        2d2a84:	e5900000 	ldr	r0, [r0]
        2d2a88:	eb63ca07 	bl	1bc52ac <$Length(long)>
        2d2a8c:	e2400003 	sub	r0, r0, #3	; 0x3
        2d2a90:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2a94:	e3540000 	cmp	r4, #0	; 0x0
        2d2a98:	ba000001 	blt	2d2aa4 <TNSDebugAPI::GetVar(long, long)+0x198>
        2d2a9c:	e1540000 	cmp	r4, r0
        2d2aa0:	ba000008 	blt	2d2ac8 <TNSDebugAPI::GetVar(long, long)+0x1bc>
        2d2aa4:	e1a00007 	mov	r0, r7
        2d2aa8:	eb63bda7 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2aac:	e58d0000 	str	r0, [sp]
        2d2ab0:	e1a0100d 	mov	r1, sp
        2d2ab4:	e3a000a5 	mov	r0, #165	; 0xa5
        2d2ab8:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        2d2abc:	eb5dc5dc 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d2ac0:	e59d0000 	ldr	r0, [sp]
        2d2ac4:	eb63c1bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2ac8:	e5950000 	ldr	r0, [r5]
        2d2acc:	e5900000 	ldr	r0, [r0]
        2d2ad0:	e2841003 	add	r1, r4, #3	; 0x3
        2d2ad4:	eb63c5de 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d2ad8:	e1a04000 	mov	r4, r0
        2d2adc:	eaffffda 	b	2d2a4c <TNSDebugAPI::GetVar(long, long)+0x140>
        2d2ae0:	006824c8 	rsbeq	r2, r8, r8, asr #9
        2d2ae4:	e1a00006 	mov	r0, r6
        2d2ae8:	eb63c1b3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2aec:	e3a00002 	mov	r0, #2	; 0x2
        2d2af0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::SetVar(long, long, RefVar const &)
 * Address: 002d2af4
 */
TNSDebugAPI::SetVar(long, long, RefVar const &) {
    /*
        2d2af4:	e1a0c00d 	mov	ip, sp
        2d2af8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d2afc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2b00:	e1a06000 	mov	r6, r0
        2d2b04:	e1a04002 	mov	r4, r2
        2d2b08:	e1a05003 	mov	r5, r3
        2d2b0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2b10:	eb5e1428 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d2b14:	e1a0a000 	mov	sl, r0
        2d2b18:	e2800004 	add	r0, r0, #4	; 0x4
        2d2b1c:	e1a09000 	mov	r9, r0
        2d2b20:	eb63bd90 	bl	1bc2168 <$ClassOf(RefVar const &)>
        2d2b24:	eb63bd88 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2b28:	e1a07000 	mov	r7, r0
        2d2b2c:	e59a0014 	ldr	r0, [sl, #20]
        2d2b30:	e5900000 	ldr	r0, [r0]
        2d2b34:	e58d0000 	str	r0, [sp]
        2d2b38:	e5970000 	ldr	r0, [r7]
        2d2b3c:	e59f1094 	ldr	r1, [pc, #94]	; 2d2bd8 <TNSDebugAPI::SetVar(long, long, RefVar const &)+0xe4>
        2d2b40:	e5911000 	ldr	r1, [r1]
        2d2b44:	e5911000 	ldr	r1, [r1]
        2d2b48:	eb63c5b8 	bl	1bc4230 <$EQRef__FlT1>
        2d2b4c:	e1a08104 	mov	r8, r4, lsl #2
        2d2b50:	e3300000 	teq	r0, #0	; 0x0
        2d2b54:	0a000020 	beq	2d2bdc <TNSDebugAPI::SetVar(long, long, RefVar const &)+0xe8>
        2d2b58:	e5990000 	ldr	r0, [r9]
        2d2b5c:	e5900000 	ldr	r0, [r0]
        2d2b60:	e3a01004 	mov	r1, #4	; 0x4
        2d2b64:	eb63c5ba 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d2b68:	e3100003 	tst	r0, #3	; 0x3
        2d2b6c:	01a00140 	moveq	r0, r0, asr #2
        2d2b70:	0a000000 	beq	2d2b78 <TNSDebugAPI::SetVar(long, long, RefVar const &)+0x84>
        2d2b74:	eb63bd68 	bl	1bc211c <$_RINTError(long)>
        2d2b78:	e1a01800 	mov	r1, r0, lsl #16
        2d2b7c:	e1a01821 	mov	r1, r1, lsr #16
        2d2b80:	e1a00840 	mov	r0, r0, asr #16
        2d2b84:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2b88:	e3540000 	cmp	r4, #0	; 0x0
        2d2b8c:	ba000002 	blt	2d2b9c <TNSDebugAPI::SetVar(long, long, RefVar const &)+0xa8>
        2d2b90:	e0810000 	add	r0, r1, r0
        2d2b94:	e1500004 	cmp	r0, r4
        2d2b98:	ca000008 	bgt	2d2bc0 <TNSDebugAPI::SetVar(long, long, RefVar const &)+0xcc>
        2d2b9c:	e1a00008 	mov	r0, r8
        2d2ba0:	eb63bd69 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2ba4:	e58d0000 	str	r0, [sp]
        2d2ba8:	e1a0100d 	mov	r1, sp
        2d2bac:	e3a000a5 	mov	r0, #165	; 0xa5
        2d2bb0:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        2d2bb4:	eb5dc59e 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d2bb8:	e59d0000 	ldr	r0, [sp]
        2d2bbc:	eb63c17e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2bc0:	e5960000 	ldr	r0, [r6]
        2d2bc4:	e2800020 	add	r0, r0, #32	; 0x20
        2d2bc8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2d2bcc:	e0841441 	add	r1, r4, r1, asr #8
        2d2bd0:	e2811003 	add	r1, r1, #3	; 0x3
        2d2bd4:	ea000018 	b	2d2c3c <TNSDebugAPI::SetVar(long, long, RefVar const &)+0x148>
        2d2bd8:	00685310 	rsbeq	r5, r8, r0, lsl r3
        2d2bdc:	e1a00009 	mov	r0, r9
        2d2be0:	eb64bd4d 	bl	1c0211c <$IsNativeFunction(RefVar const &)>
        2d2be4:	e3300000 	teq	r0, #0	; 0x0
        2d2be8:	0a000018 	beq	2d2c50 <TNSDebugAPI::SetVar(long, long, RefVar const &)+0x15c>
        2d2bec:	e1a00009 	mov	r0, r9
        2d2bf0:	eb64bd48 	bl	1c02118 <$GetFunctionArgCount(RefVar const &)>
        2d2bf4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2bf8:	e3540000 	cmp	r4, #0	; 0x0
        2d2bfc:	ba000001 	blt	2d2c08 <TNSDebugAPI::SetVar(long, long, RefVar const &)+0x114>
        2d2c00:	e1540000 	cmp	r4, r0
        2d2c04:	ba000008 	blt	2d2c2c <TNSDebugAPI::SetVar(long, long, RefVar const &)+0x138>
        2d2c08:	e1a00008 	mov	r0, r8
        2d2c0c:	eb63bd4e 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2c10:	e58d0000 	str	r0, [sp]
        2d2c14:	e1a0100d 	mov	r1, sp
        2d2c18:	e3a000a5 	mov	r0, #165	; 0xa5
        2d2c1c:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        2d2c20:	eb5dc583 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d2c24:	e59d0000 	ldr	r0, [sp]
        2d2c28:	eb63c163 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2c2c:	e5960000 	ldr	r0, [r6]
        2d2c30:	e2800020 	add	r0, r0, #32	; 0x20
        2d2c34:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2d2c38:	e0841441 	add	r1, r4, r1, asr #8
        2d2c3c:	e5952000 	ldr	r2, [r5]
        2d2c40:	e5922000 	ldr	r2, [r2]
        2d2c44:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2d2c48:	e7802101 	str	r2, [r0, r1, lsl #2]	; fField2
        2d2c4c:	ea000020 	b	2d2cd4 <TNSDebugAPI::SetVar(long, long, RefVar const &)+0x1e0>
        2d2c50:	e5970000 	ldr	r0, [r7]
        2d2c54:	e59f1088 	ldr	r1, [pc, #88]	; 2d2ce4 <TNSDebugAPI::SetVar(long, long, RefVar const &)+0x1f0>
        2d2c58:	e5911000 	ldr	r1, [r1]
        2d2c5c:	e5911000 	ldr	r1, [r1]
        2d2c60:	eb63c572 	bl	1bc4230 <$EQRef__FlT1>
        2d2c64:	e3300000 	teq	r0, #0	; 0x0
        2d2c68:	0a00001a 	beq	2d2cd8 <TNSDebugAPI::SetVar(long, long, RefVar const &)+0x1e4>
        2d2c6c:	e28a0008 	add	r0, sl, #8	; 0x8
        2d2c70:	e1a06000 	mov	r6, r0
        2d2c74:	e5900000 	ldr	r0, [r0]
        2d2c78:	e5900000 	ldr	r0, [r0]
        2d2c7c:	eb63c98a 	bl	1bc52ac <$Length(long)>
        2d2c80:	e2400003 	sub	r0, r0, #3	; 0x3
        2d2c84:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2c88:	e3540000 	cmp	r4, #0	; 0x0
        2d2c8c:	ba000001 	blt	2d2c98 <TNSDebugAPI::SetVar(long, long, RefVar const &)+0x1a4>
        2d2c90:	e1540000 	cmp	r4, r0
        2d2c94:	ba000008 	blt	2d2cbc <TNSDebugAPI::SetVar(long, long, RefVar const &)+0x1c8>
        2d2c98:	e1a00008 	mov	r0, r8
        2d2c9c:	eb63bd2a 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2ca0:	e58d0000 	str	r0, [sp]
        2d2ca4:	e1a0100d 	mov	r1, sp
        2d2ca8:	e3a000a5 	mov	r0, #165	; 0xa5
        2d2cac:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        2d2cb0:	eb5dc55f 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d2cb4:	e59d0000 	ldr	r0, [sp]
        2d2cb8:	eb63c13f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2cbc:	e5960000 	ldr	r0, [r6]
        2d2cc0:	e5900000 	ldr	r0, [r0]
        2d2cc4:	e2841003 	add	r1, r4, #3	; 0x3
        2d2cc8:	e5952000 	ldr	r2, [r5]
        2d2ccc:	e5922000 	ldr	r2, [r2]
        2d2cd0:	eb63cda0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d2cd4:	e28dd004 	add	sp, sp, #4	; 0x4
        2d2cd8:	e1a00007 	mov	r0, r7
        2d2cdc:	eb63c136 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2ce0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d2ce4:	006824c8 	rsbeq	r2, r8, r8, asr #9
    */
}

/**
 * Symbol: TNSDebugAPI::FindVar(long, RefVar const &)
 * Address: 002d2ce8
 */
TNSDebugAPI::FindVar(long, RefVar const &) {
    /*
        2d2ce8:	e1a0c00d 	mov	ip, sp
        2d2cec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d2cf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2cf4:	e1a04002 	mov	r4, r2
        2d2cf8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2cfc:	eb5e13ad 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d2d00:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
        2d2d04:	e5911000 	ldr	r1, [r1]
        2d2d08:	e3a05059 	mov	r5, #89	; 0x59
        2d2d0c:	e2455cbf 	sub	r5, r5, #48896	; 0xbf00
        2d2d10:	e3a06000 	mov	r6, #0	; 0x0
        2d2d14:	e3310002 	teq	r1, #2	; 0x2
        2d2d18:	0a00000f 	beq	2d2d5c <TNSDebugAPI::FindVar(long, RefVar const &)+0x74>
        2d2d1c:	e1a0200d 	mov	r2, sp
        2d2d20:	e1a01004 	mov	r1, r4
        2d2d24:	e3a03001 	mov	r3, #1	; 0x1
        2d2d28:	eb5e1bda 	bl	1a59c98 <$XGetVariable__FRC6RefVarT1Pli>
        2d2d2c:	eb63bd06 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2d30:	e1a06000 	mov	r6, r0
        2d2d34:	e59d0000 	ldr	r0, [sp]
        2d2d38:	e3300000 	teq	r0, #0	; 0x0
        2d2d3c:	01a01004 	moveq	r1, r4
        2d2d40:	01a00005 	moveq	r0, r5
        2d2d44:	0b5dc53b 	bleq	1a44238 <$ThrowExInterpreterWithSymbol(long, RefVar const &)>
        2d2d48:	e5964000 	ldr	r4, [r6]
        2d2d4c:	e1a00006 	mov	r0, r6
        2d2d50:	eb63c119 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2d54:	e1a00004 	mov	r0, r4
        2d2d58:	ea000003 	b	2d2d6c <TNSDebugAPI::FindVar(long, RefVar const &)+0x84>
        2d2d5c:	e1a01004 	mov	r1, r4
        2d2d60:	e1a00005 	mov	r0, r5
        2d2d64:	eb5dc533 	bl	1a44238 <$ThrowExInterpreterWithSymbol(long, RefVar const &)>
        2d2d68:	e1a00006 	mov	r0, r6
        2d2d6c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::SetFindVar(long, RefVar const &, RefVar const &)
 * Address: 002d2d70
 */
TNSDebugAPI::SetFindVar(long, RefVar const &, RefVar const &) {
    /*
        2d2d70:	e1a0c00d 	mov	ip, sp
        2d2d74:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d2d78:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2d7c:	e1a04002 	mov	r4, r2
        2d2d80:	e1a05003 	mov	r5, r3
        2d2d84:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2d88:	eb5e138a 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d2d8c:	e2800008 	add	r0, r0, #8	; 0x8
        2d2d90:	e1a06000 	mov	r6, r0
        2d2d94:	e5900000 	ldr	r0, [r0]
        2d2d98:	e5900000 	ldr	r0, [r0]
        2d2d9c:	eb63bcea 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2da0:	e58d0000 	str	r0, [sp]
        2d2da4:	e5960000 	ldr	r0, [r6]
        2d2da8:	e5900000 	ldr	r0, [r0]
        2d2dac:	e3300002 	teq	r0, #2	; 0x2
        2d2db0:	0a000006 	beq	2d2dd0 <TNSDebugAPI::SetFindVar(long, RefVar const &, RefVar const &)+0x60>
        2d2db4:	e1a02005 	mov	r2, r5
        2d2db8:	e1a01004 	mov	r1, r4
        2d2dbc:	e1a0000d 	mov	r0, sp
        2d2dc0:	e3a03001 	mov	r3, #1	; 0x1
        2d2dc4:	eb5e1376 	bl	1a57ba4 <$SetVariableOrGlobal__FRC6RefVarN21l>
        2d2dc8:	e3300000 	teq	r0, #0	; 0x0
        2d2dcc:	1a000003 	bne	2d2de0 <TNSDebugAPI::SetFindVar(long, RefVar const &, RefVar const &)+0x70>
        2d2dd0:	e1a01004 	mov	r1, r4
        2d2dd4:	e3a00059 	mov	r0, #89	; 0x59
        2d2dd8:	e2400cbf 	sub	r0, r0, #48896	; 0xbf00
        2d2ddc:	eb5dc515 	bl	1a44238 <$ThrowExInterpreterWithSymbol(long, RefVar const &)>
        2d2de0:	e59d0000 	ldr	r0, [sp]
        2d2de4:	eb63c0f4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2de8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::StackStart(long)
 * Address: 002d2ec4
 */
TNSDebugAPI::StackStart(long) {
    /*
        2d2ec4:	e1a0c00d 	mov	ip, sp
        2d2ec8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d2ecc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2ed0:	e1a04000 	mov	r4, r0
        2d2ed4:	e1a05001 	mov	r5, r1
        2d2ed8:	eb64bc91 	bl	1c02124 <TNSDebugAPI::$NumStackFrames(void)>
        2d2edc:	e1300005 	teq	r0, r5
        2d2ee0:	1a000007 	bne	2d2f04 <TNSDebugAPI::StackStart(long)+0x40>
        2d2ee4:	e5940000 	ldr	r0, [r4]
        2d2ee8:	e2800020 	add	r0, r0, #32	; 0x20
        2d2eec:	e8900003 	ldmia	r0, {r0, r1}
        2d2ef0:	e0500001 	subs	r0, r0, r1
        2d2ef4:	42800003 	addmi	r0, r0, #3	; 0x3
        2d2ef8:	e1a00140 	mov	r0, r0, asr #2
        2d2efc:	e2400001 	sub	r0, r0, #1	; 0x1
        2d2f00:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d2f04:	e1a01005 	mov	r1, r5
        2d2f08:	e1a00004 	mov	r0, r4
        2d2f0c:	eb5e1329 	bl	1a57bb8 <TNSDebugAPI::$StackFrameAt(long)>
        2d2f10:	e5900014 	ldr	r0, [r0, #20]
        2d2f14:	e5900000 	ldr	r0, [r0]
        2d2f18:	e1a00140 	mov	r0, r0, asr #2
        2d2f1c:	e1a00340 	mov	r0, r0, asr #6
        2d2f20:	e2800003 	add	r0, r0, #3	; 0x3
        2d2f24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::NumTemps(long)
 * Address: 002d2f28
 */
TNSDebugAPI::NumTemps(long) {
    /*
        2d2f28:	e1a0c00d 	mov	ip, sp
        2d2f2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d2f30:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2f34:	e1a05000 	mov	r5, r0
        2d2f38:	e1a04001 	mov	r4, r1
        2d2f3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2f40:	e2811001 	add	r1, r1, #1	; 0x1
        2d2f44:	ebffffde 	bl	2d2ec4 <TNSDebugAPI::StackStart(long)>
        2d2f48:	e1a07000 	mov	r7, r0
        2d2f4c:	e1a01004 	mov	r1, r4
        2d2f50:	e1a00005 	mov	r0, r5
        2d2f54:	ebffffda 	bl	2d2ec4 <TNSDebugAPI::StackStart(long)>
        2d2f58:	e1a06000 	mov	r6, r0
        2d2f5c:	e1a01004 	mov	r1, r4
        2d2f60:	e1a00005 	mov	r0, r5
        2d2f64:	eb64bc6f 	bl	1c02128 <TNSDebugAPI::$Function(long)>
        2d2f68:	eb63bc77 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2f6c:	e58d0000 	str	r0, [sp]
        2d2f70:	e1a0000d 	mov	r0, sp
        2d2f74:	eb5e06ba 	bl	1a54a64 <$FunctionStackSize(RefVar const &)>
        2d2f78:	e1a01000 	mov	r1, r0
        2d2f7c:	e0861001 	add	r1, r6, r1
        2d2f80:	e0474001 	sub	r4, r7, r1
        2d2f84:	e59d0000 	ldr	r0, [sp]
        2d2f88:	eb63c08b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2f8c:	e1a00004 	mov	r0, r4
        2d2f90:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::TempValue(long, long)
 * Address: 002d2f94
 */
TNSDebugAPI::TempValue(long, long) {
    /*
        2d2f94:	e1a0c00d 	mov	ip, sp
        2d2f98:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d2f9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d2fa0:	e1a04000 	mov	r4, r0
        2d2fa4:	e1a06001 	mov	r6, r1
        2d2fa8:	e1a05002 	mov	r5, r2
        2d2fac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2fb0:	ebffffc3 	bl	2d2ec4 <TNSDebugAPI::StackStart(long)>
        2d2fb4:	e1a07000 	mov	r7, r0
        2d2fb8:	e1a01006 	mov	r1, r6
        2d2fbc:	e1a00004 	mov	r0, r4
        2d2fc0:	eb64bc58 	bl	1c02128 <TNSDebugAPI::$Function(long)>
        2d2fc4:	eb63bc60 	bl	1bc214c <$AllocateRefHandle(long)>
        2d2fc8:	e58d0000 	str	r0, [sp]
        2d2fcc:	e1a0000d 	mov	r0, sp
        2d2fd0:	eb5e06a3 	bl	1a54a64 <$FunctionStackSize(RefVar const &)>
        2d2fd4:	e0870000 	add	r0, r7, r0
        2d2fd8:	e0807005 	add	r7, r0, r5
        2d2fdc:	e59d0000 	ldr	r0, [sp]
        2d2fe0:	eb63c075 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d2fe4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d2fe8:	e3550000 	cmp	r5, #0	; 0x0
        2d2fec:	ba000004 	blt	2d3004 <TNSDebugAPI::TempValue(long, long)+0x70>
        2d2ff0:	e2861001 	add	r1, r6, #1	; 0x1
        2d2ff4:	e1a00004 	mov	r0, r4
        2d2ff8:	ebffffb1 	bl	2d2ec4 <TNSDebugAPI::StackStart(long)>
        2d2ffc:	e1500007 	cmp	r0, r7
        2d3000:	ca000008 	bgt	2d3028 <TNSDebugAPI::TempValue(long, long)+0x94>
        2d3004:	e1a00105 	mov	r0, r5, lsl #2
        2d3008:	eb63bc4f 	bl	1bc214c <$AllocateRefHandle(long)>
        2d300c:	e58d0000 	str	r0, [sp]
        2d3010:	e1a0100d 	mov	r1, sp
        2d3014:	e3a000a5 	mov	r0, #165	; 0xa5
        2d3018:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        2d301c:	eb5dc484 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d3020:	e59d0000 	ldr	r0, [sp]
        2d3024:	eb63c064 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d3028:	e5940000 	ldr	r0, [r4]
        2d302c:	e5900024 	ldr	r0, [r0, #36]
        2d3030:	e7900107 	ldr	r0, [r0, r7, lsl #2]	; fField2
        2d3034:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::SetTempValue(long, long, RefVar const &)
 * Address: 002d3038
 */
TNSDebugAPI::SetTempValue(long, long, RefVar const &) {
    /*
        2d3038:	e1a0c00d 	mov	ip, sp
        2d303c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2d3040:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d3044:	e1a04000 	mov	r4, r0
        2d3048:	e1a06001 	mov	r6, r1
        2d304c:	e1a05002 	mov	r5, r2
        2d3050:	e1a07003 	mov	r7, r3
        2d3054:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d3058:	ebffff99 	bl	2d2ec4 <TNSDebugAPI::StackStart(long)>
        2d305c:	e1a08000 	mov	r8, r0
        2d3060:	e1a01006 	mov	r1, r6
        2d3064:	e1a00004 	mov	r0, r4
        2d3068:	eb64bc2e 	bl	1c02128 <TNSDebugAPI::$Function(long)>
        2d306c:	eb63bc36 	bl	1bc214c <$AllocateRefHandle(long)>
        2d3070:	e58d0000 	str	r0, [sp]
        2d3074:	e1a0000d 	mov	r0, sp
        2d3078:	eb5e0679 	bl	1a54a64 <$FunctionStackSize(RefVar const &)>
        2d307c:	e0880000 	add	r0, r8, r0
        2d3080:	e0808005 	add	r8, r0, r5
        2d3084:	e59d0000 	ldr	r0, [sp]
        2d3088:	eb63c04b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d308c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d3090:	e3550000 	cmp	r5, #0	; 0x0
        2d3094:	ba000004 	blt	2d30ac <TNSDebugAPI::SetTempValue(long, long, RefVar const &)+0x74>
        2d3098:	e2861001 	add	r1, r6, #1	; 0x1
        2d309c:	e1a00004 	mov	r0, r4
        2d30a0:	ebffff87 	bl	2d2ec4 <TNSDebugAPI::StackStart(long)>
        2d30a4:	e1500008 	cmp	r0, r8
        2d30a8:	ca000008 	bgt	2d30d0 <TNSDebugAPI::SetTempValue(long, long, RefVar const &)+0x98>
        2d30ac:	e1a00105 	mov	r0, r5, lsl #2
        2d30b0:	eb63bc25 	bl	1bc214c <$AllocateRefHandle(long)>
        2d30b4:	e58d0000 	str	r0, [sp]
        2d30b8:	e1a0100d 	mov	r1, sp
        2d30bc:	e3a000a5 	mov	r0, #165	; 0xa5
        2d30c0:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        2d30c4:	eb5dc45a 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d30c8:	e59d0000 	ldr	r0, [sp]
        2d30cc:	eb63c03a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d30d0:	e5940000 	ldr	r0, [r4]
        2d30d4:	e5971000 	ldr	r1, [r7]
        2d30d8:	e5911000 	ldr	r1, [r1]
        2d30dc:	e5900024 	ldr	r0, [r0, #36]
        2d30e0:	e7801108 	str	r1, [r0, r8, lsl #2]	; fField2
        2d30e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::Return(long, RefVar const &)
 * Address: 002d30e8
 */
TNSDebugAPI::Return(long, RefVar const &) {
    /*
        2d30e8:	e59f0010 	ldr	r0, [pc, #10]	; 2d3100 <TNSDebugAPI::Return(long, RefVar const &)+0x18>
        2d30ec:	e5900000 	ldr	r0, [r0]
        2d30f0:	e3a02000 	mov	r2, #0	; 0x0
        2d30f4:	e3a010a9 	mov	r1, #169	; 0xa9
        2d30f8:	e2411cbd 	sub	r1, r1, #48384	; 0xbd00
        2d30fc:	ea644026 	b	1be319c <$Throw>
        2d3100:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

/**
 * Symbol: TNSDebugAPI::__ct(TInterpreter *)
 * Address: 002d42e4
 */
TNSDebugAPI::TNSDebugAPI(TInterpreter *) {
    /*
        2d42e4:	e1a0c00d 	mov	ip, sp
        2d42e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d42ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d42f0:	e1a04001 	mov	r4, r1
        2d42f4:	e3300000 	teq	r0, #0	; 0x0
        2d42f8:	1a000003 	bne	2d430c <TNSDebugAPI::__ct(TInterpreter *)+0x28>
        2d42fc:	e3a00004 	mov	r0, #4	; 0x4
        2d4300:	eb63e90c 	bl	1bce738 <$__nw(unsigned int)>
        2d4304:	e3300000 	teq	r0, #0	; 0x0
        2d4308:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2d430c:	e5804000 	str	r4, [r0]
        2d4310:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNSDebugAPI::__dt(void)
 * Address: 002d4314
 */
TNSDebugAPI::~TNSDebugAPI(void) {
    /*
        2d4314:	e3110001 	tst	r1, #1	; 0x1
        2d4318:	1a63e4f0 	bne	1bcd6e0 <$__dl(void *)>
        2d431c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNSDebugAPI::AccurateStack(void)
 * Address: 002d4320
 */
TNSDebugAPI::AccurateStack(void) {
    /*
        2d4320:	e59f000c 	ldr	r0, [pc, #c]	; 2d4334 <TNSDebugAPI::AccurateStack(void)+0x14>
        2d4324:	e5900000 	ldr	r0, [r0]
        2d4328:	e3300000 	teq	r0, #0	; 0x0
        2d432c:	13a00001 	movne	r0, #1	; 0x1
        2d4330:	e1a0f00e 	mov	pc, lr
        2d4334:	0c105468 	ldceq	4, cr5, [r0], -#416
    */
}

/**
 * Symbol: TNSDebugAPI::NumStackFrames(void)
 * Address: 002d4338
 */
TNSDebugAPI::NumStackFrames(void) {
    /*
        2d4338:	e5900000 	ldr	r0, [r0]
        2d433c:	e2800008 	add	r0, r0, #8	; 0x8
        2d4340:	e8900003 	ldmia	r0, {r0, r1}
        2d4344:	e0500001 	subs	r0, r0, r1
        2d4348:	42800003 	addmi	r0, r0, #3	; 0x3
        2d434c:	e1a00140 	mov	r0, r0, asr #2
        2d4350:	e2401001 	sub	r1, r0, #1	; 0x1
        2d4354:	e3a00006 	mov	r0, #6	; 0x6
        2d4358:	ea637978 	b	1bb2940 <$__rt_sdiv>
        2d435c:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        2d4360:	e5902284 	ldr	r2, [r0, #644]	; fField644
        2d4364:	e1a02842 	mov	r2, r2, asr #16
        2d4368:	e3a0e09f 	mov	lr, #159	; 0x9f
        2d436c:	e3a06901 	mov	r6, #16384	; 0x4000
        2d4370:	e3a05902 	mov	r5, #32768	; 0x8000
        2d4374:	e2455001 	sub	r5, r5, #1	; 0x1
        2d4378:	e3a049fe 	mov	r4, #4161536	; 0x3f8000
        2d437c:	e2444501 	sub	r4, r4, #4194304	; 0x400000
        2d4380:	e082c402 	add	ip, r2, r2, lsl #8
        2d4384:	e08cc502 	add	ip, ip, r2, lsl #10
        2d4388:	e08c2382 	add	r2, ip, r2, lsl #7
        2d438c:	e0822102 	add	r2, r2, r2, lsl #2
        2d4390:	e0862102 	add	r2, r6, r2, lsl #2
        2d4394:	e1a027c2 	mov	r2, r2, asr #15
        2d4398:	e1a02802 	mov	r2, r2, lsl #16
        2d439c:	e5913000 	ldr	r3, [r1]
        2d43a0:	e1a03843 	mov	r3, r3, asr #16
        2d43a4:	e0832842 	add	r2, r3, r2, asr #16
        2d43a8:	e2823902 	add	r3, r2, #32768	; 0x8000
        2d43ac:	e3a07801 	mov	r7, #65536	; 0x10000
        2d43b0:	e2477001 	sub	r7, r7, #1	; 0x1
        2d43b4:	e1530007 	cmp	r3, r7
        2d43b8:	9a000002 	bls	2d43c8 <TNSDebugAPI::NumStackFrames(void)+0x90>
        2d43bc:	e3520000 	cmp	r2, #0	; 0x0
        2d43c0:	d1a02004 	movle	r2, r4
        2d43c4:	c1a02005 	movgt	r2, r5
        2d43c8:	e1a02802 	mov	r2, r2, lsl #16
        2d43cc:	e1a02842 	mov	r2, r2, asr #16
        2d43d0:	e1a03082 	mov	r3, r2, lsl #1
        2d43d4:	e2838902 	add	r8, r3, #32768	; 0x8000
        2d43d8:	e1580007 	cmp	r8, r7
        2d43dc:	9a000002 	bls	2d43ec <TNSDebugAPI::NumStackFrames(void)+0xb4>
        2d43e0:	e3530000 	cmp	r3, #0	; 0x0
        2d43e4:	d1a03004 	movle	r3, r4
        2d43e8:	c1a03005 	movgt	r3, r5
        2d43ec:	e1a03803 	mov	r3, r3, lsl #16
        2d43f0:	e1a03823 	mov	r3, r3, lsr #16
        2d43f4:	e3c33007 	bic	r3, r3, #7	; 0x7
        2d43f8:	e5c13001 	strb	r3, [r1, #1]
        2d43fc:	e1a03443 	mov	r3, r3, asr #8
        2d4400:	e4c13002 	strb	r3, [r1], #2	; fField2
        2d4404:	e1b0300e 	movs	r3, lr
        2d4408:	e24ee001 	sub	lr, lr, #1	; 0x1
        2d440c:	1affffdb 	bne	2d4380 <TNSDebugAPI::NumStackFrames(void)+0x48>
        2d4410:	e5c02285 	strb	r2, [r0, #645]	; fField645
        2d4414:	e1a01442 	mov	r1, r2, asr #8
        2d4418:	e5c01284 	strb	r1, [r0, #644]	; fField644
        2d441c:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

