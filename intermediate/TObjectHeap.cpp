#include "include/TObjectHeap.h"

/**
 * Symbol: TObjectHeap::Mark(long)
 * Address: 002e3318
 */
TObjectHeap::Mark(long) {
    /*
        2e3318:	e1a0c00d 	mov	ip, sp
        2e331c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2e3320:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e3324:	e1a04000 	mov	r4, r0
        2e3328:	e2010003 	and	r0, r1, #3	; 0x3
        2e332c:	e3300001 	teq	r0, #1	; 0x1
        2e3330:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2e3334:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e3338:	e1500001 	cmp	r0, r1
        2e333c:	891ba9f0 	ldmhidb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2e3340:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e3344:	e1500001 	cmp	r0, r1
        2e3348:	991ba9f0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2e334c:	e3a07002 	mov	r7, #2	; 0x2
        2e3350:	e1a06001 	mov	r6, r1
        2e3354:	e3e08007 	mvn	r8, #7	; 0x7
        2e3358:	e2060003 	and	r0, r6, #3	; 0x3
        2e335c:	e3300001 	teq	r0, #1	; 0x1
        2e3360:	1a000014 	bne	2e33b8 <TObjectHeap::Mark(long)+0xa0>
        2e3364:	e2465001 	sub	r5, r6, #1	; 0x1
        2e3368:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e336c:	e1500005 	cmp	r0, r5
        2e3370:	8a000010 	bhi	2e33b8 <TObjectHeap::Mark(long)+0xa0>
        2e3374:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e3378:	e1500005 	cmp	r0, r5
        2e337c:	9a00000d 	bls	2e33b8 <TObjectHeap::Mark(long)+0xa0>
        2e3380:	e5950000 	ldr	r0, [r5]
        2e3384:	e20010ff 	and	r1, r0, #255	; 0xff
        2e3388:	e3100008 	tst	r0, #8	; 0x8
        2e338c:	1a000009 	bne	2e33b8 <TObjectHeap::Mark(long)+0xa0>
        2e3390:	e3c000ff 	bic	r0, r0, #255	; 0xff
        2e3394:	e1800001 	orr	r0, r0, r1
        2e3398:	e3800008 	orr	r0, r0, #8	; 0x8
        2e339c:	e5850000 	str	r0, [r5]
        2e33a0:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2e33a4:	e3300012 	teq	r0, #18	; 0x12
        2e33a8:	1a00001c 	bne	2e3420 <TObjectHeap::Mark(long)+0x108>
        2e33ac:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2e33b0:	e5850008 	str	r0, [r5, #8]	; fField8
        2e33b4:	e5845024 	str	r5, [r4, #36]	; fField36
        2e33b8:	e3370002 	teq	r7, #2	; 0x2
        2e33bc:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2e33c0:	e2470001 	sub	r0, r7, #1	; 0x1
        2e33c4:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2e33c8:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        2e33cc:	e1a02006 	mov	r2, r6
        2e33d0:	e1a06007 	mov	r6, r7
        2e33d4:	e0803101 	add	r3, r0, r1, lsl #2
        2e33d8:	e5937008 	ldr	r7, [r3, #8]	; fField8
        2e33dc:	e5a32008 	str	r2, [r3, #8]!	; fField8
        2e33e0:	e5902000 	ldr	r2, [r0]
        2e33e4:	e3120001 	tst	r2, #1	; 0x1
        2e33e8:	0affffda 	beq	2e3358 <TObjectHeap::Mark(long)+0x40>
        2e33ec:	e2811001 	add	r1, r1, #1	; 0x1
        2e33f0:	e0882422 	add	r2, r8, r2, lsr #8
        2e33f4:	e1510122 	cmp	r1, r2, lsr #2
        2e33f8:	2affffd6 	bcs	2e3358 <TObjectHeap::Mark(long)+0x40>
        2e33fc:	e5d02004 	ldrb	r2, [r0, #4]	; fField4
        2e3400:	e1812c02 	orr	r2, r1, r2, lsl #24
        2e3404:	e5802004 	str	r2, [r0, #4]	; fField4
        2e3408:	e1a02007 	mov	r2, r7
        2e340c:	e1a07006 	mov	r7, r6
        2e3410:	e0800101 	add	r0, r0, r1, lsl #2
        2e3414:	e5906008 	ldr	r6, [r0, #8]	; fField8
        2e3418:	e5a02008 	str	r2, [r0, #8]!	; fField8
        2e341c:	eaffffcd 	b	2e3358 <TObjectHeap::Mark(long)+0x40>
        2e3420:	e5950000 	ldr	r0, [r5]
        2e3424:	e2000003 	and	r0, r0, #3	; 0x3
        2e3428:	e3300002 	teq	r0, #2	; 0x2
        2e342c:	1a000003 	bne	2e3440 <TObjectHeap::Mark(long)+0x128>
        2e3430:	e2850010 	add	r0, r5, #16	; 0x10
        2e3434:	e595100c 	ldr	r1, [r5, #12]	; fField12
        2e3438:	e1a0e00f 	mov	lr, pc
        2e343c:	e591f018 	ldr	pc, [r1, #24]	; fField24
        2e3440:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2e3444:	e20004ff 	and	r0, r0, #-16777216	; 0xff000000
        2e3448:	e5850004 	str	r0, [r5, #4]	; fField4
        2e344c:	e1a00007 	mov	r0, r7
        2e3450:	e1a07006 	mov	r7, r6
        2e3454:	e5956008 	ldr	r6, [r5, #8]	; fField8
        2e3458:	e5a50008 	str	r0, [r5, #8]!	; fField8
        2e345c:	eaffffbd 	b	2e3358 <TObjectHeap::Mark(long)+0x40>
    */
}

/**
 * Symbol: TObjectHeap::CleanUpWeakChain(void)
 * Address: 002e3460
 */
TObjectHeap::CleanUpWeakChain(void) {
    /*
        2e3460:	e5901024 	ldr	r1, [r0, #36]	; fField36
        2e3464:	e3310000 	teq	r1, #0	; 0x0
        2e3468:	01a0f00e 	moveq	pc, lr
        2e346c:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        2e3470:	e3e07007 	mvn	r7, #7	; 0x7
        2e3474:	e3a05002 	mov	r5, #2	; 0x2
        2e3478:	e3a06012 	mov	r6, #18	; 0x12
        2e347c:	e1a03001 	mov	r3, r1
        2e3480:	e5911000 	ldr	r1, [r1]
        2e3484:	e0871421 	add	r1, r7, r1, lsr #8
        2e3488:	e1a0c121 	mov	ip, r1, lsr #2
        2e348c:	e3a02001 	mov	r2, #1	; 0x1
        2e3490:	e35c0001 	cmp	ip, #1	; 0x1
        2e3494:	da000019 	ble	2e3500 <TObjectHeap::CleanUpWeakChain(void)+0xa0>
        2e3498:	e0834102 	add	r4, r3, r2, lsl #2
        2e349c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2e34a0:	ea000000 	b	2e34a8 <TObjectHeap::CleanUpWeakChain(void)+0x48>
        2e34a4:	e5be1008 	ldr	r1, [lr, #8]!	; fField8
        2e34a8:	e201e003 	and	lr, r1, #3	; 0x3
        2e34ac:	e33e0001 	teq	lr, #1	; 0x1
        2e34b0:	1a000003 	bne	2e34c4 <TObjectHeap::CleanUpWeakChain(void)+0x64>
        2e34b4:	e241e001 	sub	lr, r1, #1	; 0x1
        2e34b8:	e59e8000 	ldr	r8, [lr]
        2e34bc:	e3180020 	tst	r8, #32	; 0x20
        2e34c0:	1afffff7 	bne	2e34a4 <TObjectHeap::CleanUpWeakChain(void)+0x44>
        2e34c4:	e201e003 	and	lr, r1, #3	; 0x3
        2e34c8:	e33e0001 	teq	lr, #1	; 0x1
        2e34cc:	1a000008 	bne	2e34f4 <TObjectHeap::CleanUpWeakChain(void)+0x94>
        2e34d0:	e590e008 	ldr	lr, [r0, #8]	; fField8
        2e34d4:	e15e0001 	cmp	lr, r1
        2e34d8:	8a000005 	bhi	2e34f4 <TObjectHeap::CleanUpWeakChain(void)+0x94>
        2e34dc:	e590e00c 	ldr	lr, [r0, #12]	; fField12
        2e34e0:	e15e0001 	cmp	lr, r1
        2e34e4:	9a000002 	bls	2e34f4 <TObjectHeap::CleanUpWeakChain(void)+0x94>
        2e34e8:	e5111001 	ldr	r1, [r1, -#1]
        2e34ec:	e3110008 	tst	r1, #8	; 0x8
        2e34f0:	05a45008 	streq	r5, [r4, #8]!	; fField8
        2e34f4:	e2822001 	add	r2, r2, #1	; 0x1
        2e34f8:	e152000c 	cmp	r2, ip
        2e34fc:	baffffe5 	blt	2e3498 <TObjectHeap::CleanUpWeakChain(void)+0x38>
        2e3500:	e5931008 	ldr	r1, [r3, #8]	; fField8
        2e3504:	e3310000 	teq	r1, #0	; 0x0
        2e3508:	e5a36008 	str	r6, [r3, #8]!	; fField8
        2e350c:	1affffda 	bne	2e347c <TObjectHeap::CleanUpWeakChain(void)+0x1c>
        2e3510:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: TObjectHeap::UpdateRef(long)
 * Address: 002e3514
 */
TObjectHeap::UpdateRef(long) {
    /*
        2e3514:	e1a0c00d 	mov	ip, sp
        2e3518:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e351c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e3520:	e1a04001 	mov	r4, r1
        2e3524:	e5901030 	ldr	r1, [r0, #48]	; fField48
        2e3528:	e3310000 	teq	r1, #0	; 0x0
        2e352c:	0a000006 	beq	2e354c <TObjectHeap::UpdateRef(long)+0x38>
        2e3530:	e590002c 	ldr	r0, [r0, #44]	; fField44
        2e3534:	e1a01004 	mov	r1, r4
        2e3538:	eb5df6e8 	bl	1a610e0 <DeclawingRange::$InAnyRange(long)>
        2e353c:	e3300000 	teq	r0, #0	; 0x0
        2e3540:	13a00042 	movne	r0, #66	; 0x42
        2e3544:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2e3548:	ea000026 	b	2e35e8 <TObjectHeap::UpdateRef(long)+0xd4>
        2e354c:	e2041003 	and	r1, r4, #3	; 0x3
        2e3550:	e3310001 	teq	r1, #1	; 0x1
        2e3554:	1a000023 	bne	2e35e8 <TObjectHeap::UpdateRef(long)+0xd4>
        2e3558:	e5902008 	ldr	r2, [r0, #8]	; fField8
        2e355c:	e1520004 	cmp	r2, r4
        2e3560:	8a000020 	bhi	2e35e8 <TObjectHeap::UpdateRef(long)+0xd4>
        2e3564:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
        2e3568:	e1510004 	cmp	r1, r4
        2e356c:	9a00001d 	bls	2e35e8 <TObjectHeap::UpdateRef(long)+0xd4>
        2e3570:	e2443001 	sub	r3, r4, #1	; 0x1
        2e3574:	e5930000 	ldr	r0, [r3]
        2e3578:	e3100020 	tst	r0, #32	; 0x20
        2e357c:	0a000009 	beq	2e35a8 <TObjectHeap::UpdateRef(long)+0x94>
        2e3580:	e5930008 	ldr	r0, [r3, #8]	; fField8
        2e3584:	e200c003 	and	ip, r0, #3	; 0x3
        2e3588:	e33c0001 	teq	ip, #1	; 0x1
        2e358c:	02403001 	subeq	r3, r0, #1	; 0x1
        2e3590:	0a000001 	beq	2e359c <TObjectHeap::UpdateRef(long)+0x88>
        2e3594:	e5b30008 	ldr	r0, [r3, #8]!	; fField8
        2e3598:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e359c:	e5930000 	ldr	r0, [r3]
        2e35a0:	e3100020 	tst	r0, #32	; 0x20
        2e35a4:	1afffff5 	bne	2e3580 <TObjectHeap::UpdateRef(long)+0x6c>
        2e35a8:	e2830001 	add	r0, r3, #1	; 0x1
        2e35ac:	e593c000 	ldr	ip, [r3]
        2e35b0:	e31c0008 	tst	ip, #8	; 0x8
        2e35b4:	1a000004 	bne	2e35cc <TObjectHeap::UpdateRef(long)+0xb8>
        2e35b8:	e1520000 	cmp	r2, r0
        2e35bc:	8a000002 	bhi	2e35cc <TObjectHeap::UpdateRef(long)+0xb8>
        2e35c0:	e1510000 	cmp	r1, r0
        2e35c4:	83a00002 	movhi	r0, #2	; 0x2
        2e35c8:	891ba810 	ldmhidb	fp, {r4, fp, sp, pc}
        2e35cc:	e31c0010 	tst	ip, #16	; 0x10
        2e35d0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2e35d4:	e1520000 	cmp	r2, r0
        2e35d8:	891ba810 	ldmhidb	fp, {r4, fp, sp, pc}
        2e35dc:	e1510000 	cmp	r1, r0
        2e35e0:	85b30004 	ldrhi	r0, [r3, #4]!	; fField4
        2e35e4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e35e8:	e1a00004 	mov	r0, r4
        2e35ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::SweepAndCompact(void)
 * Address: 002e35f0
 */
TObjectHeap::SweepAndCompact(void) {
    /*
        2e35f0:	e1a0c00d 	mov	ip, sp
        2e35f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e35f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e35fc:	e1a04000 	mov	r4, r0
        2e3600:	e24ddc01 	sub	sp, sp, #256	; 0x100
        2e3604:	e3a05001 	mov	r5, #1	; 0x1
        2e3608:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2e360c:	e3a08000 	mov	r8, #0	; 0x0
        2e3610:	e88d0101 	stmia	sp, {r0, r8}
        2e3614:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e3618:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2e361c:	e1510000 	cmp	r1, r0
        2e3620:	9a000057 	bls	2e3784 <TObjectHeap::SweepAndCompact(void)+0x194>
        2e3624:	e3a08000 	mov	r8, #0	; 0x0
        2e3628:	e5901000 	ldr	r1, [r0]
        2e362c:	e3110008 	tst	r1, #8	; 0x8
        2e3630:	0a000045 	beq	2e374c <TObjectHeap::SweepAndCompact(void)+0x15c>
        2e3634:	e3110020 	tst	r1, #32	; 0x20
        2e3638:	1a000043 	bne	2e374c <TObjectHeap::SweepAndCompact(void)+0x15c>
        2e363c:	e3110010 	tst	r1, #16	; 0x10
        2e3640:	0a000025 	beq	2e36dc <TObjectHeap::SweepAndCompact(void)+0xec>
        2e3644:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2e3648:	e20114ff 	and	r1, r1, #-16777216	; 0xff000000
        2e364c:	e3550020 	cmp	r5, #32	; 0x20
        2e3650:	e5801004 	str	r1, [r0, #4]	; fField4
        2e3654:	aa000005 	bge	2e3670 <TObjectHeap::SweepAndCompact(void)+0x80>
        2e3658:	e1a01005 	mov	r1, r5
        2e365c:	e2855001 	add	r5, r5, #1	; 0x1
        2e3660:	e08d2181 	add	r2, sp, r1, lsl #3
        2e3664:	e89d1008 	ldmia	sp, {r3, ip}
        2e3668:	e8821008 	stmia	r2, {r3, ip}
        2e366c:	ea000013 	b	2e36c0 <TObjectHeap::SweepAndCompact(void)+0xd0>
        2e3670:	e3a01001 	mov	r1, #1	; 0x1
        2e3674:	e3550001 	cmp	r5, #1	; 0x1
        2e3678:	da00000a 	ble	2e36a8 <TObjectHeap::SweepAndCompact(void)+0xb8>
        2e367c:	e08d2181 	add	r2, sp, r1, lsl #3
        2e3680:	e5922004 	ldr	r2, [r2, #4]	; fField4
        2e3684:	e3320000 	teq	r2, #0	; 0x0
        2e3688:	1a000003 	bne	2e369c <TObjectHeap::SweepAndCompact(void)+0xac>
        2e368c:	e08de181 	add	lr, sp, r1, lsl #3
        2e3690:	e89d1008 	ldmia	sp, {r3, ip}
        2e3694:	e88e1008 	stmia	lr, {r3, ip}
        2e3698:	ea000002 	b	2e36a8 <TObjectHeap::SweepAndCompact(void)+0xb8>
        2e369c:	e2811001 	add	r1, r1, #1	; 0x1
        2e36a0:	e1510005 	cmp	r1, r5
        2e36a4:	bafffff4 	blt	2e367c <TObjectHeap::SweepAndCompact(void)+0x8c>
        2e36a8:	e1310005 	teq	r1, r5
        2e36ac:	1a000003 	bne	2e36c0 <TObjectHeap::SweepAndCompact(void)+0xd0>
        2e36b0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2e36b4:	e5d02004 	ldrb	r2, [r0, #4]	; fField4
        2e36b8:	e1811c02 	orr	r1, r1, r2, lsl #24
        2e36bc:	e5801004 	str	r1, [r0, #4]	; fField4
        2e36c0:	e5901000 	ldr	r1, [r0]
        2e36c4:	e1a01421 	mov	r1, r1, lsr #8
        2e36c8:	e2811003 	add	r1, r1, #3	; 0x3
        2e36cc:	e3c11003 	bic	r1, r1, #3	; 0x3
        2e36d0:	e0811000 	add	r1, r1, r0
        2e36d4:	e88d0102 	stmia	sp, {r1, r8}
        2e36d8:	ea000021 	b	2e3764 <TObjectHeap::SweepAndCompact(void)+0x174>
        2e36dc:	e1a01421 	mov	r1, r1, lsr #8
        2e36e0:	e2811003 	add	r1, r1, #3	; 0x3
        2e36e4:	e3c13003 	bic	r3, r1, #3	; 0x3
        2e36e8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2e36ec:	e0811003 	add	r1, r1, r3
        2e36f0:	e58d1004 	str	r1, [sp, #4]	; fField4
        2e36f4:	e1a0100d 	mov	r1, sp
        2e36f8:	e3a02001 	mov	r2, #1	; 0x1
        2e36fc:	e3550001 	cmp	r5, #1	; 0x1
        2e3700:	da000007 	ble	2e3724 <TObjectHeap::SweepAndCompact(void)+0x134>
        2e3704:	e08dc182 	add	ip, sp, r2, lsl #3
        2e3708:	e59cc004 	ldr	ip, [ip, #4]	; fField4
        2e370c:	e15c0003 	cmp	ip, r3
        2e3710:	a08d1182 	addge	r1, sp, r2, lsl #3
        2e3714:	aa000002 	bge	2e3724 <TObjectHeap::SweepAndCompact(void)+0x134>
        2e3718:	e2822001 	add	r2, r2, #1	; 0x1
        2e371c:	e1520005 	cmp	r2, r5
        2e3720:	bafffff7 	blt	2e3704 <TObjectHeap::SweepAndCompact(void)+0x114>
        2e3724:	e5912004 	ldr	r2, [r1, #4]	; fField4
        2e3728:	e0422003 	sub	r2, r2, r3
        2e372c:	e5812004 	str	r2, [r1, #4]	; fField4
        2e3730:	e5912000 	ldr	r2, [r1]
        2e3734:	e2822001 	add	r2, r2, #1	; 0x1
        2e3738:	e5802004 	str	r2, [r0, #4]	; fField4
        2e373c:	e5912000 	ldr	r2, [r1]
        2e3740:	e0822003 	add	r2, r2, r3
        2e3744:	e5812000 	str	r2, [r1]
        2e3748:	ea000005 	b	2e3764 <TObjectHeap::SweepAndCompact(void)+0x174>
        2e374c:	e1a01421 	mov	r1, r1, lsr #8
        2e3750:	e2811003 	add	r1, r1, #3	; 0x3
        2e3754:	e3c11003 	bic	r1, r1, #3	; 0x3
        2e3758:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2e375c:	e0821001 	add	r1, r2, r1
        2e3760:	e58d1004 	str	r1, [sp, #4]	; fField4
        2e3764:	e5901000 	ldr	r1, [r0]
        2e3768:	e1a01421 	mov	r1, r1, lsr #8
        2e376c:	e2811003 	add	r1, r1, #3	; 0x3
        2e3770:	e3c11003 	bic	r1, r1, #3	; 0x3
        2e3774:	e0810000 	add	r0, r1, r0
        2e3778:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2e377c:	e1510000 	cmp	r1, r0
        2e3780:	8affffa8 	bhi	2e3628 <TObjectHeap::SweepAndCompact(void)+0x38>
        2e3784:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e3788:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2e378c:	e5900000 	ldr	r0, [r0]
        2e3790:	e1a00420 	mov	r0, r0, lsr #8
        2e3794:	e2800003 	add	r0, r0, #3	; 0x3
        2e3798:	e3c00003 	bic	r0, r0, #3	; 0x3
        2e379c:	e5941020 	ldr	r1, [r4, #32]	; fField32
        2e37a0:	e0512000 	subs	r2, r1, r0
        2e37a4:	e58d2000 	str	r2, [sp]
        2e37a8:	0a00000f 	beq	2e37ec <TObjectHeap::SweepAndCompact(void)+0x1fc>
        2e37ac:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2e37b0:	e59d2000 	ldr	r2, [sp]
        2e37b4:	e1510002 	cmp	r1, r2
        2e37b8:	ba000004 	blt	2e37d0 <TObjectHeap::SweepAndCompact(void)+0x1e0>
        2e37bc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2e37c0:	e59d2000 	ldr	r2, [sp]
        2e37c4:	e0400002 	sub	r0, r0, r2
        2e37c8:	e58d0008 	str	r0, [sp, #8]	; fField8
        2e37cc:	ea000006 	b	2e37ec <TObjectHeap::SweepAndCompact(void)+0x1fc>
        2e37d0:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2e37d4:	e0810000 	add	r0, r1, r0
        2e37d8:	e5840020 	str	r0, [r4, #32]	; fField32
        2e37dc:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        2e37e0:	e3a08000 	mov	r8, #0	; 0x0
        2e37e4:	e58d2000 	str	r2, [sp]
        2e37e8:	e58d8008 	str	r8, [sp, #8]	; fField8
        2e37ec:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2e37f0:	e2801001 	add	r1, r0, #1	; 0x1
        2e37f4:	e5a01004 	str	r1, [r0, #4]!	; fField4
        2e37f8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e37fc:	e5946008 	ldr	r6, [r4, #8]	; fField8
        2e3800:	e1500006 	cmp	r0, r6
        2e3804:	9a000024 	bls	2e389c <TObjectHeap::SweepAndCompact(void)+0x2ac>
        2e3808:	e5960000 	ldr	r0, [r6]
        2e380c:	e20080ff 	and	r8, r0, #255	; 0xff
        2e3810:	e3180008 	tst	r8, #8	; 0x8
        2e3814:	0a000018 	beq	2e387c <TObjectHeap::SweepAndCompact(void)+0x28c>
        2e3818:	e3180020 	tst	r8, #32	; 0x20
        2e381c:	1a000016 	bne	2e387c <TObjectHeap::SweepAndCompact(void)+0x28c>
        2e3820:	e3180001 	tst	r8, #1	; 0x1
        2e3824:	03a09001 	moveq	r9, #1	; 0x1
        2e3828:	13e01007 	mvnne	r1, #7	; 0x7
        2e382c:	10810420 	addne	r0, r1, r0, lsr #8
        2e3830:	11a09120 	movne	r9, r0, lsr #2
        2e3834:	e3a07000 	mov	r7, #0	; 0x0
        2e3838:	e3590000 	cmp	r9, #0	; 0x0
        2e383c:	da000007 	ble	2e3860 <TObjectHeap::SweepAndCompact(void)+0x270>
        2e3840:	e086a107 	add	sl, r6, r7, lsl #2
        2e3844:	e1a00004 	mov	r0, r4
        2e3848:	e59a1008 	ldr	r1, [sl, #8]	; fField8
        2e384c:	eb5d868c 	bl	1a45284 <TObjectHeap::$UpdateRef(long)>
        2e3850:	e2877001 	add	r7, r7, #1	; 0x1
        2e3854:	e1570009 	cmp	r7, r9
        2e3858:	e5aa0008 	str	r0, [sl, #8]!	; fField8
        2e385c:	bafffff7 	blt	2e3840 <TObjectHeap::SweepAndCompact(void)+0x250>
        2e3860:	e2080003 	and	r0, r8, #3	; 0x3
        2e3864:	e3300002 	teq	r0, #2	; 0x2
        2e3868:	1a000003 	bne	2e387c <TObjectHeap::SweepAndCompact(void)+0x28c>
        2e386c:	e2860010 	add	r0, r6, #16	; 0x10
        2e3870:	e596100c 	ldr	r1, [r6, #12]	; fField12
        2e3874:	e1a0e00f 	mov	lr, pc
        2e3878:	e591f01c 	ldr	pc, [r1, #28]	; fField28
        2e387c:	e5960000 	ldr	r0, [r6]
        2e3880:	e1a00420 	mov	r0, r0, lsr #8
        2e3884:	e2800003 	add	r0, r0, #3	; 0x3
        2e3888:	e3c00003 	bic	r0, r0, #3	; 0x3
        2e388c:	e0806006 	add	r6, r0, r6
        2e3890:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e3894:	e1500006 	cmp	r0, r6
        2e3898:	8affffda 	bhi	2e3808 <TObjectHeap::SweepAndCompact(void)+0x218>
        2e389c:	e59f6110 	ldr	r6, [pc, #110]	; 2e39b4 <TObjectHeap::SweepAndCompact(void)+0x3c4>
        2e38a0:	e5960004 	ldr	r0, [r6, #4]	; fField4
        2e38a4:	e3300000 	teq	r0, #0	; 0x0
        2e38a8:	0a000011 	beq	2e38f4 <TObjectHeap::SweepAndCompact(void)+0x304>
        2e38ac:	eb63f60d 	bl	1be10e8 <$GetHandleSize>
        2e38b0:	e1a08120 	mov	r8, r0, lsr #2
        2e38b4:	e3a07000 	mov	r7, #0	; 0x0
        2e38b8:	e3580000 	cmp	r8, #0	; 0x0
        2e38bc:	da00000c 	ble	2e38f4 <TObjectHeap::SweepAndCompact(void)+0x304>
        2e38c0:	e5960004 	ldr	r0, [r6, #4]	; fField4
        2e38c4:	e5900000 	ldr	r0, [r0]
        2e38c8:	e7900107 	ldr	r0, [r0, r7, lsl #2]
        2e38cc:	e5901000 	ldr	r1, [r0]
        2e38d0:	e1a00004 	mov	r0, r4
        2e38d4:	eb5d866a 	bl	1a45284 <TObjectHeap::$UpdateRef(long)>
        2e38d8:	e5961004 	ldr	r1, [r6, #4]	; fField4
        2e38dc:	e5911000 	ldr	r1, [r1]
        2e38e0:	e7911107 	ldr	r1, [r1, r7, lsl #2]
        2e38e4:	e2877001 	add	r7, r7, #1	; 0x1
        2e38e8:	e1570008 	cmp	r7, r8
        2e38ec:	e5810000 	str	r0, [r1]
        2e38f0:	bafffff2 	blt	2e38c0 <TObjectHeap::SweepAndCompact(void)+0x2d0>
        2e38f4:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2e38f8:	e3300000 	teq	r0, #0	; 0x0
        2e38fc:	0a000011 	beq	2e3948 <TObjectHeap::SweepAndCompact(void)+0x358>
        2e3900:	eb63f5f8 	bl	1be10e8 <$GetHandleSize>
        2e3904:	e1a01000 	mov	r1, r0
        2e3908:	e3a0000c 	mov	r0, #12	; 0xc
        2e390c:	eb633c0d 	bl	1bb2948 <$__rt_udiv>
        2e3910:	e1a08000 	mov	r8, r0
        2e3914:	e3a07000 	mov	r7, #0	; 0x0
        2e3918:	e3500000 	cmp	r0, #0	; 0x0
        2e391c:	da000009 	ble	2e3948 <TObjectHeap::SweepAndCompact(void)+0x358>
        2e3920:	e0872087 	add	r2, r7, r7, lsl #1
        2e3924:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2e3928:	e5901000 	ldr	r1, [r0]
        2e392c:	e7910102 	ldr	r0, [r1, r2, lsl #2]
        2e3930:	e0811102 	add	r1, r1, r2, lsl #2
        2e3934:	e1a0e00f 	mov	lr, pc
        2e3938:	e591f008 	ldr	pc, [r1, #8]	; fField8
        2e393c:	e2877001 	add	r7, r7, #1	; 0x1
        2e3940:	e1570008 	cmp	r7, r8
        2e3944:	bafffff5 	blt	2e3920 <TObjectHeap::SweepAndCompact(void)+0x330>
        2e3948:	e2841008 	add	r1, r4, #8	; 0x8
        2e394c:	e8910003 	ldmia	r1, {r0, r1}
        2e3950:	e1510000 	cmp	r1, r0
        2e3954:	9a00002b 	bls	2e3a08 <TObjectHeap::SweepAndCompact(void)+0x418>
        2e3958:	e3a08000 	mov	r8, #0	; 0x0
        2e395c:	e5901000 	ldr	r1, [r0]
        2e3960:	e1a03421 	mov	r3, r1, lsr #8
        2e3964:	e2833003 	add	r3, r3, #3	; 0x3
        2e3968:	e3c33003 	bic	r3, r3, #3	; 0x3
        2e396c:	e0837000 	add	r7, r3, r0
        2e3970:	e20120ff 	and	r2, r1, #255	; 0xff
        2e3974:	e3120008 	tst	r2, #8	; 0x8
        2e3978:	0a000016 	beq	2e39d8 <TObjectHeap::SweepAndCompact(void)+0x3e8>
        2e397c:	e3120020 	tst	r2, #32	; 0x20
        2e3980:	1a000014 	bne	2e39d8 <TObjectHeap::SweepAndCompact(void)+0x3e8>
        2e3984:	e3c110ff 	bic	r1, r1, #255	; 0xff
        2e3988:	e3c23008 	bic	r3, r2, #8	; 0x8
        2e398c:	e1811003 	orr	r1, r1, r3
        2e3990:	e3120010 	tst	r2, #16	; 0x10
        2e3994:	e5801000 	str	r1, [r0]
        2e3998:	0a000006 	beq	2e39b8 <TObjectHeap::SweepAndCompact(void)+0x3c8>
        2e399c:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2e39a0:	e3d124ff 	bics	r2, r1, #-16777216	; 0xff000000
        2e39a4:	10401002 	subne	r1, r0, r2
        2e39a8:	11a00004 	movne	r0, r4
        2e39ac:	1b5d75c7 	blne	1a410d0 <TObjectHeap::$MakeFreeBlock(ObjHeader *, long)>
        2e39b0:	ea000010 	b	2e39f8 <TObjectHeap::SweepAndCompact(void)+0x408>
        2e39b4:	0c105400 	ldceq	4, cr5, [r0]
        2e39b8:	e5902004 	ldr	r2, [r0, #4]	; fField4
        2e39bc:	e2426001 	sub	r6, r2, #1	; 0x1
        2e39c0:	e1300006 	teq	r0, r6
        2e39c4:	11a02421 	movne	r2, r1, lsr #8
        2e39c8:	11a01006 	movne	r1, r6
        2e39cc:	1b63ed60 	blne	1bdef54 <$BlockMove>
        2e39d0:	e5a68004 	str	r8, [r6, #4]!	; fField4
        2e39d4:	ea000007 	b	2e39f8 <TObjectHeap::SweepAndCompact(void)+0x408>
        2e39d8:	e2021003 	and	r1, r2, #3	; 0x3
        2e39dc:	e3310002 	teq	r1, #2	; 0x2
        2e39e0:	1a000004 	bne	2e39f8 <TObjectHeap::SweepAndCompact(void)+0x408>
        2e39e4:	e1a01000 	mov	r1, r0
        2e39e8:	e2800010 	add	r0, r0, #16	; 0x10
        2e39ec:	e591100c 	ldr	r1, [r1, #12]	; fField12
        2e39f0:	e1a0e00f 	mov	lr, pc
        2e39f4:	e591f010 	ldr	pc, [r1, #16]	; fField16
        2e39f8:	e1a00007 	mov	r0, r7
        2e39fc:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2e3a00:	e1510007 	cmp	r1, r7
        2e3a04:	8affffd4 	bhi	2e395c <TObjectHeap::SweepAndCompact(void)+0x36c>
        2e3a08:	e59d2000 	ldr	r2, [sp]
        2e3a0c:	e3320000 	teq	r2, #0	; 0x0
        2e3a10:	0a000025 	beq	2e3aac <TObjectHeap::SweepAndCompact(void)+0x4bc>
        2e3a14:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2e3a18:	e59d2000 	ldr	r2, [sp]
        2e3a1c:	e0400002 	sub	r0, r0, r2
        2e3a20:	e5840014 	str	r0, [r4, #20]	; fField20
        2e3a24:	e5901000 	ldr	r1, [r0]
        2e3a28:	e20120ff 	and	r2, r1, #255	; 0xff
        2e3a2c:	e5941020 	ldr	r1, [r4, #32]	; fField32
        2e3a30:	e1821401 	orr	r1, r2, r1, lsl #8
        2e3a34:	e5801000 	str	r1, [r0]
        2e3a38:	e1a00001 	mov	r0, r1
        2e3a3c:	e3c000ff 	bic	r0, r0, #255	; 0xff
        2e3a40:	e3800001 	orr	r0, r0, #1	; 0x1
        2e3a44:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2e3a48:	e3a08000 	mov	r8, #0	; 0x0
        2e3a4c:	e5810000 	str	r0, [r1]
        2e3a50:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2e3a54:	e5a08004 	str	r8, [r0, #4]!	; fField4
        2e3a58:	e59d2000 	ldr	r2, [sp]
        2e3a5c:	e1a011a2 	mov	r1, r2, lsr #3
        2e3a60:	e3a00000 	mov	r0, #0	; 0x0
        2e3a64:	e3e03003 	mvn	r3, #3	; 0x3
        2e3a68:	e3510000 	cmp	r1, #0	; 0x0
        2e3a6c:	da00000a 	ble	2e3a9c <TObjectHeap::SweepAndCompact(void)+0x4ac>
        2e3a70:	e2802001 	add	r2, r0, #1	; 0x1
        2e3a74:	e1a0e102 	mov	lr, r2, lsl #2
        2e3a78:	e594c014 	ldr	ip, [r4, #20]	; fField20
        2e3a7c:	e08cc180 	add	ip, ip, r0, lsl #3
        2e3a80:	e5ace008 	str	lr, [ip, #8]!	; fField8
        2e3a84:	e594c014 	ldr	ip, [r4, #20]	; fField20
        2e3a88:	e08c0180 	add	r0, ip, r0, lsl #3
        2e3a8c:	e5a0300c 	str	r3, [r0, #12]!	; fField12
        2e3a90:	e1a00002 	mov	r0, r2
        2e3a94:	e1520001 	cmp	r2, r1
        2e3a98:	bafffff4 	blt	2e3a70 <TObjectHeap::SweepAndCompact(void)+0x480>
        2e3a9c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2e3aa0:	e0800181 	add	r0, r0, r1, lsl #3
        2e3aa4:	e5803000 	str	r3, [r0]
        2e3aa8:	e5848018 	str	r8, [r4, #24]	; fField24
        2e3aac:	e3a06000 	mov	r6, #0	; 0x0
        2e3ab0:	e3550000 	cmp	r5, #0	; 0x0
        2e3ab4:	da00000b 	ble	2e3ae8 <TObjectHeap::SweepAndCompact(void)+0x4f8>
        2e3ab8:	e28d0004 	add	r0, sp, #4	; 0x4
        2e3abc:	e0800186 	add	r0, r0, r6, lsl #3
        2e3ac0:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        2e3ac4:	e3520000 	cmp	r2, #0	; 0x0
        2e3ac8:	da000003 	ble	2e3adc <TObjectHeap::SweepAndCompact(void)+0x4ec>
        2e3acc:	e28d0004 	add	r0, sp, #4	; 0x4
        2e3ad0:	e7901186 	ldr	r1, [r0, r6, lsl #3]
        2e3ad4:	e1a00004 	mov	r0, r4
        2e3ad8:	eb5d757c 	bl	1a410d0 <TObjectHeap::$MakeFreeBlock(ObjHeader *, long)>
        2e3adc:	e2866001 	add	r6, r6, #1	; 0x1
        2e3ae0:	e1560005 	cmp	r6, r5
        2e3ae4:	bafffff3 	blt	2e3ab8 <TObjectHeap::SweepAndCompact(void)+0x4c8>
        2e3ae8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2e3aec:	e5a40010 	str	r0, [r4, #16]!	; fField16
        2e3af0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::GC(void)
 * Address: 002e3af4
 */
TObjectHeap::GC(void) {
    /*
        2e3af4:	e1a0c00d 	mov	ip, sp
        2e3af8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e3afc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e3b00:	e1a04000 	mov	r4, r0
        2e3b04:	e24dd010 	sub	sp, sp, #16	; 0x10
        2e3b08:	e5900028 	ldr	r0, [r0, #40]	; fField40
        2e3b0c:	e3300000 	teq	r0, #0	; 0x0
        2e3b10:	0a000004 	beq	2e3b28 <TObjectHeap::GC(void)+0x34>
        2e3b14:	e59f02c0 	ldr	r0, [pc, #2c0]	; 2e3ddc <TObjectHeap::GC(void)+0x2e8>
        2e3b18:	e5900000 	ldr	r0, [r0]
        2e3b1c:	e3a02000 	mov	r2, #0	; 0x0
        2e3b20:	e59f12b8 	ldr	r1, [pc, #2b8]	; 2e3de0 <TObjectHeap::GC(void)+0x2ec>
        2e3b24:	eb63fd9c 	bl	1be319c <$Throw>
        2e3b28:	e3a00001 	mov	r0, #1	; 0x1
        2e3b2c:	e5840028 	str	r0, [r4, #40]	; fField40
        2e3b30:	e59f02ac 	ldr	r0, [pc, #2ac]	; 2e3de4 <TObjectHeap::GC(void)+0x2f0>
        2e3b34:	e58d000c 	str	r0, [sp, #12]	; fField12
        2e3b38:	e5900000 	ldr	r0, [r0]
        2e3b3c:	e59f82a4 	ldr	r8, [pc, #2a4]	; 2e3de8 <TObjectHeap::GC(void)+0x2f4>
        2e3b40:	e59f12a4 	ldr	r1, [pc, #2a4]	; 2e3dec <TObjectHeap::GC(void)+0x2f8>
        2e3b44:	e58d1008 	str	r1, [sp, #8]	; fField8
        2e3b48:	e59f12a0 	ldr	r1, [pc, #2a0]	; 2e3df0 <TObjectHeap::GC(void)+0x2fc>
        2e3b4c:	e58d1004 	str	r1, [sp, #4]	; fField4
        2e3b50:	e59fc29c 	ldr	ip, [pc, #29c]	; 2e3df4 <TObjectHeap::GC(void)+0x300>
        2e3b54:	e130000c 	teq	r0, ip
        2e3b58:	1a00000f 	bne	2e3b9c <TObjectHeap::GC(void)+0xa8>
        2e3b5c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2e3b60:	e590c000 	ldr	ip, [r0]
        2e3b64:	e33c0000 	teq	ip, #0	; 0x0
        2e3b68:	0a00000b 	beq	2e3b9c <TObjectHeap::GC(void)+0xa8>
        2e3b6c:	e3a02004 	mov	r2, #4	; 0x4
        2e3b70:	e5983000 	ldr	r3, [r8]
        2e3b74:	e92d000c 	stmdb	sp!, {r2, r3}
        2e3b78:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2e3b7c:	e5900000 	ldr	r0, [r0]
        2e3b80:	e1a03840 	mov	r3, r0, asr #16
        2e3b84:	e3a02000 	mov	r2, #0	; 0x0
        2e3b88:	e3a01000 	mov	r1, #0	; 0x0
        2e3b8c:	e3a00000 	mov	r0, #0	; 0x0
        2e3b90:	e1a0e00f 	mov	lr, pc
        2e3b94:	e1a0f00c 	mov	pc, ip
        2e3b98:	e28dd008 	add	sp, sp, #8	; 0x8
        2e3b9c:	e3a06000 	mov	r6, #0	; 0x0
        2e3ba0:	e59f0250 	ldr	r0, [pc, #250]	; 2e3df8 <TObjectHeap::GC(void)+0x304>
        2e3ba4:	e5806000 	str	r6, [r0]
        2e3ba8:	e59f024c 	ldr	r0, [pc, #24c]	; 2e3dfc <TObjectHeap::GC(void)+0x308>	; fField24
        2e3bac:	e5806000 	str	r6, [r0]
        2e3bb0:	eb5d6ce8 	bl	1a3ef58 <$FindOffsetCacheClear(void)>
        2e3bb4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e3bb8:	e59f5240 	ldr	r5, [pc, #240]	; 2e3e00 <TObjectHeap::GC(void)+0x30c>
        2e3bbc:	e5950000 	ldr	r0, [r5]
        2e3bc0:	e59f123c 	ldr	r1, [pc, #23c]	; 2e3e04 <TObjectHeap::GC(void)+0x310>
        2e3bc4:	e3300000 	teq	r0, #0	; 0x0
        2e3bc8:	e58d1008 	str	r1, [sp, #8]	; fField8
        2e3bcc:	0a000009 	beq	2e3bf8 <TObjectHeap::GC(void)+0x104>
        2e3bd0:	e1a0200d 	mov	r2, sp
        2e3bd4:	e28d1004 	add	r1, sp, #4	; 0x4
        2e3bd8:	e1a00004 	mov	r0, r4
        2e3bdc:	eb5d818b 	bl	1a44210 <TObjectHeap::$Statistics(unsigned long *, unsigned long *)>
        2e3be0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2e3be4:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2e3be8:	e59d3000 	ldr	r3, [sp]
        2e3bec:	e5900000 	ldr	r0, [r0]
        2e3bf0:	e28f1f84 	add	r1, pc, #528	; 0x210
        2e3bf4:	eb0298af 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        2e3bf8:	e3a06000 	mov	r6, #0	; 0x0
        2e3bfc:	e3a09000 	mov	r9, #0	; 0x0
        2e3c00:	e5846024 	str	r6, [r4, #36]	; fField36
        2e3c04:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2e3c08:	e2801001 	add	r1, r0, #1	; 0x1
        2e3c0c:	e1a00004 	mov	r0, r4
        2e3c10:	eb5d7531 	bl	1a410dc <TObjectHeap::$Mark(long)>
        2e3c14:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2e3c18:	e59f7200 	ldr	r7, [pc, #200]	; 2e3e20 <TObjectHeap::GC(void)+0x32c>
        2e3c1c:	e3300000 	teq	r0, #0	; 0x0
        2e3c20:	0a000011 	beq	2e3c6c <TObjectHeap::GC(void)+0x178>
        2e3c24:	eb63f52f 	bl	1be10e8 <$GetHandleSize>
        2e3c28:	e1a0a120 	mov	sl, r0, lsr #2
        2e3c2c:	e3a06000 	mov	r6, #0	; 0x0
        2e3c30:	e35a0000 	cmp	sl, #0	; 0x0
        2e3c34:	da00000c 	ble	2e3c6c <TObjectHeap::GC(void)+0x178>
        2e3c38:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2e3c3c:	e5900000 	ldr	r0, [r0]
        2e3c40:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        2e3c44:	e1300007 	teq	r0, r7
        2e3c48:	03a09001 	moveq	r9, #1	; 0x1
        2e3c4c:	0a000003 	beq	2e3c60 <TObjectHeap::GC(void)+0x16c>
        2e3c50:	e3300000 	teq	r0, #0	; 0x0
        2e3c54:	15901000 	ldrne	r1, [r0]
        2e3c58:	11a00004 	movne	r0, r4
        2e3c5c:	1b5d751e 	blne	1a410dc <TObjectHeap::$Mark(long)>
        2e3c60:	e2866001 	add	r6, r6, #1	; 0x1
        2e3c64:	e156000a 	cmp	r6, sl
        2e3c68:	bafffff2 	blt	2e3c38 <TObjectHeap::GC(void)+0x144>
        2e3c6c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2e3c70:	e3300000 	teq	r0, #0	; 0x0
        2e3c74:	0a000011 	beq	2e3cc0 <TObjectHeap::GC(void)+0x1cc>
        2e3c78:	eb63f51a 	bl	1be10e8 <$GetHandleSize>
        2e3c7c:	e1a01000 	mov	r1, r0
        2e3c80:	e3a0000c 	mov	r0, #12	; 0xc
        2e3c84:	eb633b2f 	bl	1bb2948 <$__rt_udiv>
        2e3c88:	e1a0a000 	mov	sl, r0
        2e3c8c:	e3a06000 	mov	r6, #0	; 0x0
        2e3c90:	e3500000 	cmp	r0, #0	; 0x0
        2e3c94:	da000009 	ble	2e3cc0 <TObjectHeap::GC(void)+0x1cc>
        2e3c98:	e0862086 	add	r2, r6, r6, lsl #1
        2e3c9c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2e3ca0:	e5901000 	ldr	r1, [r0]
        2e3ca4:	e7910102 	ldr	r0, [r1, r2, lsl #2]
        2e3ca8:	e0811102 	add	r1, r1, r2, lsl #2
        2e3cac:	e1a0e00f 	mov	lr, pc
        2e3cb0:	e591f004 	ldr	pc, [r1, #4]	; fField4
        2e3cb4:	e2866001 	add	r6, r6, #1	; 0x1
        2e3cb8:	e156000a 	cmp	r6, sl
        2e3cbc:	bafffff5 	blt	2e3c98 <TObjectHeap::GC(void)+0x1a4>
        2e3cc0:	e3390000 	teq	r9, #0	; 0x0
        2e3cc4:	0a000003 	beq	2e3cd8 <TObjectHeap::GC(void)+0x1e4>
        2e3cc8:	eb5d70b6 	bl	1a3ffa8 <$GCTWA(void)>
        2e3ccc:	e1a00004 	mov	r0, r4
        2e3cd0:	e5971000 	ldr	r1, [r7]
        2e3cd4:	eb5d7500 	bl	1a410dc <TObjectHeap::$Mark(long)>
        2e3cd8:	e1a00004 	mov	r0, r4
        2e3cdc:	eb5d686a 	bl	1a3de8c <TObjectHeap::$CleanUpWeakChain(void)>
        2e3ce0:	e1a00004 	mov	r0, r4
        2e3ce4:	eb5d814d 	bl	1a44220 <TObjectHeap::$SweepAndCompact(void)>
        2e3ce8:	e1a00004 	mov	r0, r4
        2e3cec:	eb5df4fd 	bl	1a610e8 <TObjectHeap::$DeclawRefsInRegisteredRanges(void)>
        2e3cf0:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        2e3cf4:	e5900000 	ldr	r0, [r0]
        2e3cf8:	e59fc0f4 	ldr	ip, [pc, #f4]	; 2e3df4 <TObjectHeap::GC(void)+0x300>
        2e3cfc:	e130000c 	teq	r0, ip
        2e3d00:	1a00000f 	bne	2e3d44 <TObjectHeap::GC(void)+0x250>
        2e3d04:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2e3d08:	e590c000 	ldr	ip, [r0]
        2e3d0c:	e33c0000 	teq	ip, #0	; 0x0
        2e3d10:	0a00000b 	beq	2e3d44 <TObjectHeap::GC(void)+0x250>
        2e3d14:	e3a02004 	mov	r2, #4	; 0x4
        2e3d18:	e5983000 	ldr	r3, [r8]
        2e3d1c:	e92d000c 	stmdb	sp!, {r2, r3}
        2e3d20:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        2e3d24:	e5900000 	ldr	r0, [r0]
        2e3d28:	e1a03840 	mov	r3, r0, asr #16
        2e3d2c:	e3a02001 	mov	r2, #1	; 0x1
        2e3d30:	e3a01000 	mov	r1, #0	; 0x0
        2e3d34:	e3a00000 	mov	r0, #0	; 0x0
        2e3d38:	e1a0e00f 	mov	lr, pc
        2e3d3c:	e1a0f00c 	mov	pc, ip
        2e3d40:	e28dd008 	add	sp, sp, #8	; 0x8
        2e3d44:	e3a06000 	mov	r6, #0	; 0x0
        2e3d48:	e5846028 	str	r6, [r4, #40]	; fField40
        2e3d4c:	eb63f4e3 	bl	1be10e0 <$GetCurrentHeap>
        2e3d50:	e3e01000 	mvn	r1, #0	; 0x0
        2e3d54:	eb63f0ad 	bl	1be0010 <$ValidateHeap>
        2e3d58:	e595000c 	ldr	r0, [r5, #12]	; fField12
        2e3d5c:	e3300000 	teq	r0, #0	; 0x0
        2e3d60:	0a00000d 	beq	2e3d9c <TObjectHeap::GC(void)+0x2a8>
        2e3d64:	eb63f4df 	bl	1be10e8 <$GetHandleSize>
        2e3d68:	e1a071a0 	mov	r7, r0, lsr #3
        2e3d6c:	e3a06000 	mov	r6, #0	; 0x0
        2e3d70:	e3570000 	cmp	r7, #0	; 0x0
        2e3d74:	da000008 	ble	2e3d9c <TObjectHeap::GC(void)+0x2a8>
        2e3d78:	e595000c 	ldr	r0, [r5, #12]	; fField12
        2e3d7c:	e5900000 	ldr	r0, [r0]
        2e3d80:	e0801186 	add	r1, r0, r6, lsl #3
        2e3d84:	e5910000 	ldr	r0, [r1]
        2e3d88:	e1a0e00f 	mov	lr, pc
        2e3d8c:	e591f004 	ldr	pc, [r1, #4]	; fField4
        2e3d90:	e2866001 	add	r6, r6, #1	; 0x1
        2e3d94:	e1560007 	cmp	r6, r7
        2e3d98:	bafffff6 	blt	2e3d78 <TObjectHeap::GC(void)+0x284>
        2e3d9c:	e5950000 	ldr	r0, [r5]
        2e3da0:	e3300000 	teq	r0, #0	; 0x0
        2e3da4:	0a00000b 	beq	2e3dd8 <TObjectHeap::GC(void)+0x2e4>
        2e3da8:	e1a0200d 	mov	r2, sp
        2e3dac:	e28d1004 	add	r1, sp, #4	; 0x4
        2e3db0:	e1a00004 	mov	r0, r4
        2e3db4:	eb5d8115 	bl	1a44210 <TObjectHeap::$Statistics(unsigned long *, unsigned long *)>
        2e3db8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2e3dbc:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        2e3dc0:	e59d3000 	ldr	r3, [sp]
        2e3dc4:	e5900000 	ldr	r0, [r0]
        2e3dc8:	e28f1f15 	add	r1, pc, #84	; 0x54
        2e3dcc:	eb029839 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        2e3dd0:	e1a00004 	mov	r0, r4
        2e3dd4:	eb5d852b 	bl	1a45288 <TObjectHeap::$Uriah(void)>
        2e3dd8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e3ddc:	00371308 	eoreqs	r1, r7, r8, lsl #6
        2e3de0:	ffff43af 	swinv	0x00ff43af
        2e3de4:	0c10535c 	ldceq	3, cr5, [r0], -#368
        2e3de8:	0c105364 	ldceq	3, cr5, [r0], -#400
        2e3dec:	0c105560 	ldceq	5, cr5, [r0], -#384
        2e3df0:	0c105360 	ldceq	3, cr5, [r0], -#384
        2e3df4:	66667065 	strvsbt	r7, [r6], -r5, rrx
        2e3df8:	0c10554c 	ldceq	5, cr5, [r0], -#304
        2e3dfc:	0c105554 	ldceq	5, cr5, [r0], -#336
        2e3e00:	0c105400 	ldceq	4, cr5, [r0]
        2e3e04:	0c101820 	ldceq	8, cr1, [r0], -#128
        2e3e08:	5b204743 	blpl	af5b1c <ROM$$Size+0x3d5ed0>
        2e3e0c:	21207374 	teqcs	r0, r4, ror r3
        2e3e10:	61727420 	cmnvs	r2, r0, lsr #8
        2e3e14:	256c642f 	strcsb	r6, [ip, -#1071]!
        2e3e18:	256c642e 	strcsb	r6, [ip, -#1070]!
        2e3e1c:	2e2e0000 	cdpcs	0, 2, cr0, cr14, cr0, {0}
        2e3e20:	0c10599c 	ldceq	9, cr5, [r0], -#624
        2e3e24:	66696e69 	strvsbt	r6, [r9], -r9, ror #28	; fField28
        2e3e28:	73682025 	cmnvc	r8, #37	; 0x25
        2e3e2c:	6c642f25 	stcvsl	15, cr2, [r4], -#148
        2e3e30:	6c64205d 	stcvsl	0, cr2, [r4], -#372
        2e3e34:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TObjectHeap::RegisterRangeForDeclawing(unsigned long, unsigned long)
 * Address: 002e3ee4
 */
TObjectHeap::RegisterRangeForDeclawing(unsigned long, unsigned long) {
    /*
        2e3ee4:	e1a0c00d 	mov	ip, sp
        2e3ee8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e3eec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e3ef0:	e1a04000 	mov	r4, r0
        2e3ef4:	e590302c 	ldr	r3, [r0, #44]	; fField44
        2e3ef8:	e3a00000 	mov	r0, #0	; 0x0
        2e3efc:	eb5df475 	bl	1a610d8 <DeclawingRange::$__ct(unsigned long, unsigned long, DeclawingRange *)>
        2e3f00:	e3300000 	teq	r0, #0	; 0x0
        2e3f04:	03a00000 	moveq	r0, #0	; 0x0
        2e3f08:	15a4002c 	strne	r0, [r4, #44]!	; fField44
        2e3f0c:	13a00001 	movne	r0, #1	; 0x1
        2e3f10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::DeclawRefsInRegisteredRanges(void)
 * Address: 002e3f14
 */
TObjectHeap::DeclawRefsInRegisteredRanges(void) {
    /*
        2e3f14:	e1a0c00d 	mov	ip, sp
        2e3f18:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e3f1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e3f20:	e1a04000 	mov	r4, r0
        2e3f24:	e590002c 	ldr	r0, [r0, #44]	; fField44
        2e3f28:	e3300000 	teq	r0, #0	; 0x0
        2e3f2c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e3f30:	e3a00001 	mov	r0, #1	; 0x1
        2e3f34:	e5840030 	str	r0, [r4, #48]	; fField48
        2e3f38:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e3f3c:	e5945008 	ldr	r5, [r4, #8]	; fField8
        2e3f40:	e1500005 	cmp	r0, r5
        2e3f44:	9a000020 	bls	2e3fcc <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0xb8>
        2e3f48:	e3e0a007 	mvn	sl, #7	; 0x7
        2e3f4c:	e5950000 	ldr	r0, [r5]
        2e3f50:	e20080ff 	and	r8, r0, #255	; 0xff
        2e3f54:	e3180001 	tst	r8, #1	; 0x1
        2e3f58:	03a07001 	moveq	r7, #1	; 0x1
        2e3f5c:	108a0420 	addne	r0, sl, r0, lsr #8
        2e3f60:	11a07120 	movne	r7, r0, lsr #2
        2e3f64:	e3a06000 	mov	r6, #0	; 0x0
        2e3f68:	e3570000 	cmp	r7, #0	; 0x0
        2e3f6c:	da000007 	ble	2e3f90 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x7c>
        2e3f70:	e0859106 	add	r9, r5, r6, lsl #2
        2e3f74:	e1a00004 	mov	r0, r4
        2e3f78:	e5991008 	ldr	r1, [r9, #8]	; fField8
        2e3f7c:	eb5d84c0 	bl	1a45284 <TObjectHeap::$UpdateRef(long)>
        2e3f80:	e2866001 	add	r6, r6, #1	; 0x1
        2e3f84:	e1560007 	cmp	r6, r7
        2e3f88:	e5a90008 	str	r0, [r9, #8]!	; fField8
        2e3f8c:	bafffff7 	blt	2e3f70 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x5c>
        2e3f90:	e2080003 	and	r0, r8, #3	; 0x3
        2e3f94:	e3300002 	teq	r0, #2	; 0x2
        2e3f98:	1a000003 	bne	2e3fac <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x98>
        2e3f9c:	e2850010 	add	r0, r5, #16	; 0x10
        2e3fa0:	e595100c 	ldr	r1, [r5, #12]	; fField12
        2e3fa4:	e1a0e00f 	mov	lr, pc
        2e3fa8:	e591f01c 	ldr	pc, [r1, #28]	; fField28
        2e3fac:	e5950000 	ldr	r0, [r5]
        2e3fb0:	e1a00420 	mov	r0, r0, lsr #8
        2e3fb4:	e2800003 	add	r0, r0, #3	; 0x3
        2e3fb8:	e3c00003 	bic	r0, r0, #3	; 0x3
        2e3fbc:	e0805005 	add	r5, r0, r5
        2e3fc0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e3fc4:	e1500005 	cmp	r0, r5
        2e3fc8:	8affffdf 	bhi	2e3f4c <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x38>
        2e3fcc:	e59f50dc 	ldr	r5, [pc, #dc]	; 2e40b0 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x19c>
        2e3fd0:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2e3fd4:	e3300000 	teq	r0, #0	; 0x0
        2e3fd8:	0a000011 	beq	2e4024 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x110>
        2e3fdc:	eb63f441 	bl	1be10e8 <$GetHandleSize>
        2e3fe0:	e1a07120 	mov	r7, r0, lsr #2
        2e3fe4:	e3a06000 	mov	r6, #0	; 0x0
        2e3fe8:	e3570000 	cmp	r7, #0	; 0x0
        2e3fec:	da00000c 	ble	2e4024 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x110>
        2e3ff0:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2e3ff4:	e5900000 	ldr	r0, [r0]
        2e3ff8:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        2e3ffc:	e5901000 	ldr	r1, [r0]
        2e4000:	e1a00004 	mov	r0, r4
        2e4004:	eb5d849e 	bl	1a45284 <TObjectHeap::$UpdateRef(long)>
        2e4008:	e5951004 	ldr	r1, [r5, #4]	; fField4
        2e400c:	e5911000 	ldr	r1, [r1]
        2e4010:	e7911106 	ldr	r1, [r1, r6, lsl #2]
        2e4014:	e2866001 	add	r6, r6, #1	; 0x1
        2e4018:	e1560007 	cmp	r6, r7
        2e401c:	e5810000 	str	r0, [r1]
        2e4020:	bafffff2 	blt	2e3ff0 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0xdc>
        2e4024:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2e4028:	e3300000 	teq	r0, #0	; 0x0
        2e402c:	0a000011 	beq	2e4078 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x164>
        2e4030:	eb63f42c 	bl	1be10e8 <$GetHandleSize>
        2e4034:	e1a01000 	mov	r1, r0
        2e4038:	e3a0000c 	mov	r0, #12	; 0xc
        2e403c:	eb633a41 	bl	1bb2948 <$__rt_udiv>
        2e4040:	e1a07000 	mov	r7, r0
        2e4044:	e3a06000 	mov	r6, #0	; 0x0
        2e4048:	e3500000 	cmp	r0, #0	; 0x0
        2e404c:	da000009 	ble	2e4078 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x164>
        2e4050:	e0861086 	add	r1, r6, r6, lsl #1
        2e4054:	e5950008 	ldr	r0, [r5, #8]	; fField8
        2e4058:	e5902000 	ldr	r2, [r0]
        2e405c:	e7920101 	ldr	r0, [r2, r1, lsl #2]
        2e4060:	e0821101 	add	r1, r2, r1, lsl #2
        2e4064:	e1a0e00f 	mov	lr, pc
        2e4068:	e591f008 	ldr	pc, [r1, #8]	; fField8
        2e406c:	e2866001 	add	r6, r6, #1	; 0x1
        2e4070:	e1560007 	cmp	r6, r7
        2e4074:	bafffff5 	blt	2e4050 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x13c>
        2e4078:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2e407c:	e3300000 	teq	r0, #0	; 0x0
        2e4080:	0a000007 	beq	2e40a4 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x190>
        2e4084:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2e4088:	eb5df411 	bl	1a610d4 <DeclawingRange::$Next(void)>
        2e408c:	e1a05000 	mov	r5, r0
        2e4090:	e594002c 	ldr	r0, [r4, #44]	; fField44
        2e4094:	eb63a591 	bl	1bcd6e0 <$__dl(void *)>
        2e4098:	e584502c 	str	r5, [r4, #44]	; fField44
        2e409c:	e3350000 	teq	r5, #0	; 0x0
        2e40a0:	1afffff7 	bne	2e4084 <TObjectHeap::DeclawRefsInRegisteredRanges(void)+0x170>
        2e40a4:	e3a00000 	mov	r0, #0	; 0x0
        2e40a8:	e5a40030 	str	r0, [r4, #48]!	; fField48
        2e40ac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e40b0:	0c105400 	ldceq	4, cr5, [r0]
    */
}

/**
 * Symbol: TObjectHeap::Uriah(void)
 * Address: 0031b154
 */
TObjectHeap::Uriah(void) {
    /*
        31b154:	e1a0c00d 	mov	ip, sp
        31b158:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        31b15c:	e24cb004 	sub	fp, ip, #4	; 0x4
        31b160:	e1a04000 	mov	r4, r0
        31b164:	e24dd058 	sub	sp, sp, #88	; 0x58
        31b168:	e3a0a000 	mov	sl, #0	; 0x0
        31b16c:	e3a00000 	mov	r0, #0	; 0x0
        31b170:	e58d004c 	str	r0, [sp, #76]
        31b174:	e58da050 	str	sl, [sp, #80]
        31b178:	e3a02000 	mov	r2, #0	; 0x0
        31b17c:	e58d0048 	str	r0, [sp, #72]
        31b180:	e58d2044 	str	r2, [sp, #68]
        31b184:	e3a01000 	mov	r1, #0	; 0x0
        31b188:	e58d0040 	str	r0, [sp, #64]
        31b18c:	e58d103c 	str	r1, [sp, #60]
        31b190:	e58d0038 	str	r0, [sp, #56]
        31b194:	e58d0034 	str	r0, [sp, #52]
        31b198:	e3a00000 	mov	r0, #0	; 0x0
        31b19c:	e58d002c 	str	r0, [sp, #44]	; fField44
        31b1a0:	e58d1030 	str	r1, [sp, #48]	; fField48
        31b1a4:	e58d0024 	str	r0, [sp, #36]	; fField36
        31b1a8:	e58d1028 	str	r1, [sp, #40]	; fField40
        31b1ac:	e58d0020 	str	r0, [sp, #32]	; fField32
        31b1b0:	e58d001c 	str	r0, [sp, #28]	; fField28
        31b1b4:	e58d0018 	str	r0, [sp, #24]	; fField24
        31b1b8:	e58d0014 	str	r0, [sp, #20]	; fField20
        31b1bc:	e58d0010 	str	r0, [sp, #16]	; fField16
        31b1c0:	e58d000c 	str	r0, [sp, #12]	; fField12
        31b1c4:	e58d0008 	str	r0, [sp, #8]	; fField8
        31b1c8:	e28f0f37 	add	r0, pc, #220	; 0xdc
        31b1cc:	eb62a82b 	bl	1bc5280 <$Intern(char *)>
        31b1d0:	e58d0004 	str	r0, [sp, #4]	; fField4
        31b1d4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        31b1d8:	e5946008 	ldr	r6, [r4, #8]	; fField8
        31b1dc:	e58d0000 	str	r0, [sp]
        31b1e0:	e59f00d0 	ldr	r0, [pc, #d0]	; 31b2b8 <TObjectHeap::Uriah(void)+0x164>
        31b1e4:	e58d0054 	str	r0, [sp, #84]
        31b1e8:	e5900020 	ldr	r0, [r0, #32]	; fField32
        31b1ec:	e3300000 	teq	r0, #0	; 0x0
        31b1f0:	159f60c4 	ldrne	r6, [pc, #c4]	; 31b2bc <TObjectHeap::Uriah(void)+0x168>
        31b1f4:	159f00c4 	ldrne	r0, [pc, #c4]	; 31b2c0 <TObjectHeap::Uriah(void)+0x16c>
        31b1f8:	158d0000 	strne	r0, [sp]
        31b1fc:	e24dd008 	sub	sp, sp, #8	; 0x8
        31b200:	e59f50bc 	ldr	r5, [pc, #bc]	; 31b2c4 <TObjectHeap::Uriah(void)+0x170>
        31b204:	e5950000 	ldr	r0, [r5]
        31b208:	e58d0004 	str	r0, [sp, #4]	; fField4
        31b20c:	e59d005c 	ldr	r0, [sp, #92]
        31b210:	e5900028 	ldr	r0, [r0, #40]	; fField40
        31b214:	e3300000 	teq	r0, #0	; 0x0
        31b218:	0a000011 	beq	31b264 <TObjectHeap::Uriah(void)+0x110>
        31b21c:	eb01a4e1 	bl	3845a8 <ClassInfo__19PStdioOutTranslatorSFv>
        31b220:	e1a01000 	mov	r1, r0
        31b224:	e59f009c 	ldr	r0, [pc, #9c]	; 31b2c8 <TObjectHeap::Uriah(void)+0x174>
        31b228:	e5900000 	ldr	r0, [r0]
        31b22c:	e3a02000 	mov	r2, #0	; 0x0
        31b230:	eb62f685 	bl	1bd8c4c <TClassInfoRegistry::$Register(TClassInfo const *, unsigned long)>
        31b234:	e28f1f24 	add	r1, pc, #144	; 0x90
        31b238:	e28f0f28 	add	r0, pc, #160	; 0xa0
        31b23c:	eb62f252 	bl	1bd7b8c <$NewByName__FPCcT1>
        31b240:	e1a07000 	mov	r7, r0
        31b244:	e28f1f29 	add	r1, pc, #164	; 0xa4
        31b248:	e28f0f29 	add	r0, pc, #164	; 0xa4
        31b24c:	eb635584 	bl	1bf0864 <$fopen>
        31b250:	e58d0000 	str	r0, [sp]
        31b254:	e1a0100d 	mov	r1, sp
        31b258:	e1a00007 	mov	r0, r7
        31b25c:	eb623047 	bl	1ba7380 <POutTranslator::$Init(void *)>
        31b260:	e5857000 	str	r7, [r5]
        31b264:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        31b268:	e1560000 	cmp	r6, r0
        31b26c:	2a000153 	bcs	31b7c0 <TObjectHeap::Uriah(void)+0x66c>
        31b270:	e5960000 	ldr	r0, [r6]
        31b274:	e1a01420 	mov	r1, r0, lsr #8
        31b278:	e2811003 	add	r1, r1, #3	; 0x3
        31b27c:	e3d17003 	bics	r7, r1, #3	; 0x3
        31b280:	0a000003 	beq	31b294 <TObjectHeap::Uriah(void)+0x140>
        31b284:	e594100c 	ldr	r1, [r4, #12]	; fField12
        31b288:	e0411007 	sub	r1, r1, r7
        31b28c:	e1510006 	cmp	r1, r6
        31b290:	2a000021 	bcs	31b31c <TObjectHeap::Uriah(void)+0x1c8>
        31b294:	e1a03007 	mov	r3, r7
        31b298:	e1a02006 	mov	r2, r6
        31b29c:	e5950000 	ldr	r0, [r5]
        31b2a0:	e28f1f17 	add	r1, pc, #92	; 0x5c
        31b2a4:	eb01bb03 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b2a8:	ea000144 	b	31b7c0 <TObjectHeap::Uriah(void)+0x66c>
        31b2ac:	76696577 	undefined
        31b2b0:	636f626a 	cmnvs	pc, #-1610612730	; 0xa0000006
        31b2b4:	65637400 	strvsb	r7, [r3, -#1024]!
        31b2b8:	0c105548 	ldceq	5, cr5, [r0], -#288
        31b2bc:	003afda8 	eoreqs	pc, sl, r8, lsr #27
        31b2c0:	0067fa40 	rsbeq	pc, r7, r0, asr #20
        31b2c4:	0c101820 	ldceq	8, cr1, [r0], -#128
        31b2c8:	0c100b58 	ldceq	11, cr0, [r0], -#352
        31b2cc:	50537464 	subpls	r7, r3, r4, ror #8
        31b2d0:	696f4f75 	stmvsdb	pc!, {r0, r2, r4, r5, r6, r8, r9, sl, fp, lr}^
        31b2d4:	74547261 	ldrvcb	r7, [r4], -#609	; fField609
        31b2d8:	6e736c61 	cdpvs	12, 7, cr6, cr3, cr1, {3}
        31b2dc:	746f7200 	strvcbt	r7, [pc], #200	; 31b2e4 <TObjectHeap::Uriah(void)+0x190>
        31b2e0:	504f7574 	subpl	r7, pc, r4, ror r5
        31b2e4:	5472616e 	ldrplbt	r6, [r2], -#366
        31b2e8:	736c6174 	cmnvc	ip, #29	; 0x1d
        31b2ec:	6f720000 	swivs	0x00720000
        31b2f0:	77000000 	strvc	r0, [r0, -r0]
        31b2f4:	55726961 	ldrplb	r6, [r2, -#2401]!
        31b2f8:	68204f75 	stmvsda	r0!, {r0, r2, r4, r5, r6, r8, r9, sl, fp, lr}
        31b2fc:	74707574 	ldrvcbt	r7, [r0], -#1396
        31b300:	00000000 	andeq	r0, r0, r0
        31b304:	25303858 	ldrcs	r3, [r0, -#2136]!
        31b308:	20776163 	rsbcss	r6, r7, r3, ror #2
        31b30c:	6b6f2073 	blvs	1ee34e0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x2d2c88>
        31b310:	697a6520 	ldmvsdb	sl!, {r5, r8, sl, sp, lr}^
        31b314:	2558210d 	ldrcsb	r2, [r8, -#269]
        31b318:	00000000 	andeq	r0, r0, r0
        31b31c:	e08aa007 	add	sl, sl, r7
        31b320:	e3100004 	tst	r0, #4	; 0x4
        31b324:	0a000006 	beq	31b344 <TObjectHeap::Uriah(void)+0x1f0>
        31b328:	e59d0058 	ldr	r0, [sp, #88]
        31b32c:	e0800007 	add	r0, r0, r7
        31b330:	e58d0058 	str	r0, [sp, #88]
        31b334:	e59d0050 	ldr	r0, [sp, #80]
        31b338:	e1570000 	cmp	r7, r0
        31b33c:	c58d7050 	strgt	r7, [sp, #80]
        31b340:	ea000116 	b	31b7a0 <TObjectHeap::Uriah(void)+0x64c>
        31b344:	e0471420 	sub	r1, r7, r0, lsr #8
        31b348:	e59d204c 	ldr	r2, [sp, #76]
        31b34c:	e0812002 	add	r2, r1, r2
        31b350:	e3100010 	tst	r0, #16	; 0x10
        31b354:	e58d204c 	str	r2, [sp, #76]
        31b358:	0a00001a 	beq	31b3c8 <TObjectHeap::Uriah(void)+0x274>
        31b35c:	e59d0054 	ldr	r0, [sp, #84]
        31b360:	e0800007 	add	r0, r0, r7
        31b364:	e58d0054 	str	r0, [sp, #84]
        31b368:	e5d63004 	ldrb	r3, [r6, #4]	; fField4
        31b36c:	e3330000 	teq	r3, #0	; 0x0
        31b370:	e1a02006 	mov	r2, r6
        31b374:	e5950000 	ldr	r0, [r5]
        31b378:	128f1f03 	addne	r1, pc, #12	; 0xc
        31b37c:	1a000017 	bne	31b3e0 <TObjectHeap::Uriah(void)+0x28c>
        31b380:	e28f1f07 	add	r1, pc, #28	; 0x1c
        31b384:	eb01bacb 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b388:	ea000015 	b	31b3e4 <TObjectHeap::Uriah(void)+0x290>
        31b38c:	25303858 	ldrcs	r3, [r0, -#2136]!
        31b390:	206c6f63 	rsbcs	r6, ip, r3, ror #30
        31b394:	6b656420 	blvs	1c7441c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x63bc4>
        31b398:	28636f75 	stmcsda	r3!, {r0, r2, r4, r5, r6, r8, r9, sl, fp, sp, lr}^
        31b39c:	6e742025 	cdpvs	0, 7, cr2, cr4, cr5, {1}
        31b3a0:	64290d00 	strvst	r0, [r9], -#3328	; fField3328
        31b3a4:	25303858 	ldrcs	r3, [r0, -#2136]!
        31b3a8:	20686173 	rsbcs	r6, r8, r3, ror r1
        31b3ac:	206c6f63 	rsbcs	r6, ip, r3, ror #30
        31b3b0:	6b206269 	blvs	b33d5c <ROM$$Size+0x414110>
        31b3b4:	74207769 	strvct	r7, [r0], -#1897
        31b3b8:	7468207a 	strvcbt	r2, [r8], -#122
        31b3bc:	65726f20 	ldrvsb	r6, [r2, -#3872]!
        31b3c0:	636f756e 	cmnvs	pc, #461373440	; 0x1b800000
        31b3c4:	74210d00 	strvct	r0, [r1], -#3328	; fField3328
        31b3c8:	e5d63004 	ldrb	r3, [r6, #4]	; fField4
        31b3cc:	e3330000 	teq	r3, #0	; 0x0
        31b3d0:	0a000003 	beq	31b3e4 <TObjectHeap::Uriah(void)+0x290>
        31b3d4:	e1a02006 	mov	r2, r6
        31b3d8:	e5950000 	ldr	r0, [r5]
        31b3dc:	e28f1f22 	add	r1, pc, #136	; 0x88
        31b3e0:	eb01bab4 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b3e4:	e2869001 	add	r9, r6, #1	; 0x1
        31b3e8:	e3a08002 	mov	r8, #2	; 0x2
        31b3ec:	e5960000 	ldr	r0, [r6]
        31b3f0:	e3100001 	tst	r0, #1	; 0x1
        31b3f4:	0a000043 	beq	31b508 <TObjectHeap::Uriah(void)+0x3b4>
        31b3f8:	e3100002 	tst	r0, #2	; 0x2
        31b3fc:	0a000024 	beq	31b494 <TObjectHeap::Uriah(void)+0x340>
        31b400:	e1a00009 	mov	r0, r9
        31b404:	eb62a7a8 	bl	1bc52ac <$Length(long)>
        31b408:	e3a01010 	mov	r1, #16	; 0x10
        31b40c:	e0810100 	add	r0, r1, r0, lsl #2
        31b410:	e59d1044 	ldr	r1, [sp, #68]
        31b414:	e0801001 	add	r1, r0, r1
        31b418:	e58d1044 	str	r1, [sp, #68]
        31b41c:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        31b420:	e0800007 	add	r0, r0, r7
        31b424:	e58d0018 	str	r0, [sp, #24]	; fField24
        31b428:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        31b42c:	e2800001 	add	r0, r0, #1	; 0x1
        31b430:	e58d0014 	str	r0, [sp, #20]	; fField20
        31b434:	e5960008 	ldr	r0, [r6, #8]	; fField8
        31b438:	e3300002 	teq	r0, #2	; 0x2
        31b43c:	059f004c 	ldreq	r0, [pc, #4c]	; 31b490 <TObjectHeap::Uriah(void)+0x33c>	; fField4
        31b440:	05900000 	ldreq	r0, [r0]
        31b444:	05908000 	ldreq	r8, [r0]
        31b448:	0a000034 	beq	31b520 <TObjectHeap::Uriah(void)+0x3cc>
        31b44c:	e1a00009 	mov	r0, r9
        31b450:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        31b454:	eb62a37b 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        31b458:	e3300000 	teq	r0, #0	; 0x0
        31b45c:	159d0010 	ldrne	r0, [sp, #16]	; fField16
        31b460:	10800007 	addne	r0, r0, r7
        31b464:	158d0010 	strne	r0, [sp, #16]	; fField16
        31b468:	ea00002c 	b	31b520 <TObjectHeap::Uriah(void)+0x3cc>
        31b46c:	25303858 	ldrcs	r3, [r0, -#2136]!
        31b470:	206c6f63 	rsbcs	r6, ip, r3, ror #30
        31b474:	6b206269 	blvs	b33e20 <ROM$$Size+0x4141d4>
        31b478:	7420636c 	strvct	r6, [r0], -#876
        31b47c:	65617220 	strvsb	r7, [r1, -#544]!
        31b480:	77697468 	strvcb	r7, [r9, -r8, ror #8]!	; fField8
        31b484:	20636f75 	rsbcs	r6, r3, r5, ror pc
        31b488:	6e742025 	cdpvs	0, 7, cr2, cr4, cr5, {1}
        31b48c:	64210d00 	strvst	r0, [r1], -#3328	; fField3328
        31b490:	00682ee8 	rsbeq	r2, r8, r8, ror #29
        31b494:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        31b498:	e0800007 	add	r0, r0, r7
        31b49c:	e58d0020 	str	r0, [sp, #32]	; fField32
        31b4a0:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        31b4a4:	e2800001 	add	r0, r0, #1	; 0x1
        31b4a8:	e58d001c 	str	r0, [sp, #28]	; fField28
        31b4ac:	e59d005c 	ldr	r0, [sp, #92]
        31b4b0:	e5900024 	ldr	r0, [r0, #36]	; fField36
        31b4b4:	e3300000 	teq	r0, #0	; 0x0
        31b4b8:	15960008 	ldrne	r0, [r6, #8]	; fField8
        31b4bc:	12001003 	andne	r1, r0, #3	; 0x3
        31b4c0:	13310000 	teqne	r1, #0	; 0x0
        31b4c4:	13300022 	teqne	r0, #34	; 0x22
        31b4c8:	0a000014 	beq	31b520 <TObjectHeap::Uriah(void)+0x3cc>
        31b4cc:	e24dd004 	sub	sp, sp, #4	; 0x4
        31b4d0:	e1a00009 	mov	r0, r9
        31b4d4:	eb629b1c 	bl	1bc214c <$AllocateRefHandle(long)>
        31b4d8:	e58d0000 	str	r0, [sp]
        31b4dc:	e1a0000d 	mov	r0, sp
        31b4e0:	e3a01000 	mov	r1, #0	; 0x0
        31b4e4:	eb636126 	bl	1bf3984 <$PrintObject(RefVar const &, unsigned long)>
        31b4e8:	e59d0000 	ldr	r0, [sp]
        31b4ec:	eb629f32 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31b4f0:	e5950000 	ldr	r0, [r5]
        31b4f4:	e28f1f02 	add	r1, pc, #8	; 0x8
        31b4f8:	eb01ba6e 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b4fc:	e28dd004 	add	sp, sp, #4	; 0x4
        31b500:	ea000006 	b	31b520 <TObjectHeap::Uriah(void)+0x3cc>
        31b504:	0d000000 	stceq	0, cr0, [r0]
        31b508:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        31b50c:	e0800007 	add	r0, r0, r7
        31b510:	e58d0028 	str	r0, [sp, #40]	; fField40
        31b514:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        31b518:	e2800001 	add	r0, r0, #1	; 0x1
        31b51c:	e58d0024 	str	r0, [sp, #36]	; fField36
        31b520:	e24dd004 	sub	sp, sp, #4	; 0x4
        31b524:	e3380002 	teq	r8, #2	; 0x2
        31b528:	1a000007 	bne	31b54c <TObjectHeap::Uriah(void)+0x3f8>
        31b52c:	e1a00009 	mov	r0, r9
        31b530:	eb629b05 	bl	1bc214c <$AllocateRefHandle(long)>
        31b534:	e58d0000 	str	r0, [sp]
        31b538:	e1a0000d 	mov	r0, sp
        31b53c:	eb629b09 	bl	1bc2168 <$ClassOf(RefVar const &)>
        31b540:	e1a08000 	mov	r8, r0
        31b544:	e59d0000 	ldr	r0, [sp]
        31b548:	eb629f1b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31b54c:	e59f00e4 	ldr	r0, [pc, #e4]	; 31b638 <TObjectHeap::Uriah(void)+0x4e4>
        31b550:	e5900000 	ldr	r0, [r0]
        31b554:	e5900000 	ldr	r0, [r0]
        31b558:	e1300008 	teq	r0, r8
        31b55c:	059d0044 	ldreq	r0, [sp, #68]
        31b560:	00800007 	addeq	r0, r0, r7
        31b564:	058d0044 	streq	r0, [sp, #68]
        31b568:	0a000073 	beq	31b73c <TObjectHeap::Uriah(void)+0x5e8>
        31b56c:	e59f00c8 	ldr	r0, [pc, #c8]	; 31b63c <TObjectHeap::Uriah(void)+0x4e8>
        31b570:	e5900000 	ldr	r0, [r0]
        31b574:	e5901000 	ldr	r1, [r0]
        31b578:	e1a00008 	mov	r0, r8
        31b57c:	eb62a32b 	bl	1bc4230 <$EQRef__FlT1>
        31b580:	e3300000 	teq	r0, #0	; 0x0
        31b584:	1a000006 	bne	31b5a4 <TObjectHeap::Uriah(void)+0x450>
        31b588:	e59f00b0 	ldr	r0, [pc, #b0]	; 31b640 <TObjectHeap::Uriah(void)+0x4ec>
        31b58c:	e5900000 	ldr	r0, [r0]
        31b590:	e5901000 	ldr	r1, [r0]
        31b594:	e1a00008 	mov	r0, r8
        31b598:	eb62a324 	bl	1bc4230 <$EQRef__FlT1>
        31b59c:	e3300000 	teq	r0, #0	; 0x0
        31b5a0:	0a000029 	beq	31b64c <TObjectHeap::Uriah(void)+0x4f8>
        31b5a4:	e59f0098 	ldr	r0, [pc, #98]	; 31b644 <TObjectHeap::Uriah(void)+0x4f0>	; fField98
        31b5a8:	e5900000 	ldr	r0, [r0]
        31b5ac:	e5901000 	ldr	r1, [r0]
        31b5b0:	e1a00009 	mov	r0, r9
        31b5b4:	eb62a329 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        31b5b8:	e1a08000 	mov	r8, r0
        31b5bc:	e59f0084 	ldr	r0, [pc, #84]	; 31b648 <TObjectHeap::Uriah(void)+0x4f4>
        31b5c0:	e5900000 	ldr	r0, [r0]
        31b5c4:	e5901000 	ldr	r1, [r0]
        31b5c8:	e1a00009 	mov	r0, r9
        31b5cc:	eb62a323 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        31b5d0:	e1a09000 	mov	r9, r0
        31b5d4:	e3180001 	tst	r8, #1	; 0x1
        31b5d8:	0a000057 	beq	31b73c <TObjectHeap::Uriah(void)+0x5e8>
        31b5dc:	e59d0040 	ldr	r0, [sp, #64]
        31b5e0:	e2800001 	add	r0, r0, #1	; 0x1
        31b5e4:	e58d0040 	str	r0, [sp, #64]
        31b5e8:	e1a00008 	mov	r0, r8
        31b5ec:	eb62a740 	bl	1bc52f4 <$ObjectPtr(long)>
        31b5f0:	e5900000 	ldr	r0, [r0]
        31b5f4:	e1a00420 	mov	r0, r0, lsr #8
        31b5f8:	e2800003 	add	r0, r0, #3	; 0x3
        31b5fc:	e3c00003 	bic	r0, r0, #3	; 0x3
        31b600:	e59d103c 	ldr	r1, [sp, #60]
        31b604:	e0801001 	add	r1, r0, r1
        31b608:	e3390002 	teq	r9, #2	; 0x2
        31b60c:	e58d103c 	str	r1, [sp, #60]
        31b610:	0a000004 	beq	31b628 <TObjectHeap::Uriah(void)+0x4d4>
        31b614:	e1a00009 	mov	r0, r9
        31b618:	eb62a723 	bl	1bc52ac <$Length(long)>
        31b61c:	e59d1034 	ldr	r1, [sp, #52]
        31b620:	e0811100 	add	r1, r1, r0, lsl #2
        31b624:	e58d1034 	str	r1, [sp, #52]
        31b628:	e59d0030 	ldr	r0, [sp, #48]	; fField48
        31b62c:	e0800007 	add	r0, r0, r7
        31b630:	e58d0030 	str	r0, [sp, #48]	; fField48
        31b634:	ea000040 	b	31b73c <TObjectHeap::Uriah(void)+0x5e8>
        31b638:	00684970 	rsbeq	r4, r8, r0, ror r9
        31b63c:	006824c8 	rsbeq	r2, r8, r8, asr #9
        31b640:	00685310 	rsbeq	r5, r8, r0, lsl r3
        31b644:	006832b0 	streqh	r3, [r8], -#32	; fField32
        31b648:	006835d8 	ldreqd	r3, [r8], -#88
        31b64c:	e3180003 	tst	r8, #3	; 0x3
        31b650:	1a000032 	bne	31b720 <TObjectHeap::Uriah(void)+0x5cc>
        31b654:	e59d004c 	ldr	r0, [sp, #76]
        31b658:	e0800007 	add	r0, r0, r7
        31b65c:	e58d004c 	str	r0, [sp, #76]
        31b660:	e59d0060 	ldr	r0, [sp, #96]
        31b664:	e590001c 	ldr	r0, [r0, #28]	; fField28
        31b668:	e3300000 	teq	r0, #0	; 0x0
        31b66c:	0a000032 	beq	31b73c <TObjectHeap::Uriah(void)+0x5e8>
        31b670:	e1a02006 	mov	r2, r6
        31b674:	e5950000 	ldr	r0, [r5]
        31b678:	e28f1f1f 	add	r1, pc, #124	; 0x7c
        31b67c:	eb01ba0d 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b680:	e3180008 	tst	r8, #8	; 0x8
        31b684:	e5950000 	ldr	r0, [r5]
        31b688:	028f1f1e 	addeq	r1, pc, #120	; 0x78
        31b68c:	128f1f1e 	addne	r1, pc, #120	; 0x78
        31b690:	eb01ba08 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b694:	e596200c 	ldr	r2, [r6, #12]	; fField12
        31b698:	e5950000 	ldr	r0, [r5]
        31b69c:	e28f1f1b 	add	r1, pc, #108	; 0x6c
        31b6a0:	eb01ba04 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b6a4:	e3e0100f 	mvn	r1, #15	; 0xf
        31b6a8:	e5960000 	ldr	r0, [r6]
        31b6ac:	e0918420 	adds	r8, r1, r0, lsr #8
        31b6b0:	42888003 	addmi	r8, r8, #3	; 0x3
        31b6b4:	e1a08148 	mov	r8, r8, asr #2
        31b6b8:	e3a07000 	mov	r7, #0	; 0x0
        31b6bc:	e3580000 	cmp	r8, #0	; 0x0
        31b6c0:	da000009 	ble	31b6ec <TObjectHeap::Uriah(void)+0x598>
        31b6c4:	e0860107 	add	r0, r6, r7, lsl #2
        31b6c8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        31b6cc:	eb629aa2 	bl	1bc215c <$BinaryData(long)>
        31b6d0:	e1a02000 	mov	r2, r0
        31b6d4:	e5950000 	ldr	r0, [r5]
        31b6d8:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        31b6dc:	eb01b9f5 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b6e0:	e2877001 	add	r7, r7, #1	; 0x1
        31b6e4:	e1570008 	cmp	r7, r8
        31b6e8:	bafffff5 	blt	31b6c4 <TObjectHeap::Uriah(void)+0x570>
        31b6ec:	e5950000 	ldr	r0, [r5]
        31b6f0:	e24f1f7d 	sub	r1, pc, #500	; 0x1f4
        31b6f4:	eb01b9ef 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b6f8:	ea00000f 	b	31b73c <TObjectHeap::Uriah(void)+0x5e8>
        31b6fc:	4d415020 	stcmil	0, cr5, [r1, -#128]
        31b700:	23256c58 	teqcs	r5, #22528	; 0x5800
        31b704:	20000000 	andcs	r0, r0, r0
        31b708:	20200000 	eorcs	r0, r0, r0
        31b70c:	2a200000 	bcs	b1b714 <ROM$$Size+0x3fbac8>
        31b710:	73757020 	cmnvc	r5, #32	; 0x20
        31b714:	23256c58 	teqcs	r5, #22528	; 0x5800
        31b718:	20000000 	andcs	r0, r0, r0
        31b71c:	25732000 	ldrcsb	r2, [r3]!
        31b720:	e51f00e0 	ldr	r0, [pc, #ffffff20]	; 31b648 <TObjectHeap::Uriah(void)+0x4f4>
        31b724:	e5900000 	ldr	r0, [r0]
        31b728:	e5900000 	ldr	r0, [r0]
        31b72c:	e1300008 	teq	r0, r8
        31b730:	059d0038 	ldreq	r0, [sp, #56]
        31b734:	00800007 	addeq	r0, r0, r7
        31b738:	058d0038 	streq	r0, [sp, #56]
        31b73c:	e3a00000 	mov	r0, #0	; 0x0
        31b740:	e5962000 	ldr	r2, [r6]
        31b744:	e1a03002 	mov	r3, r2
        31b748:	e2121001 	ands	r1, r2, #1	; 0x1
        31b74c:	0a000004 	beq	31b764 <TObjectHeap::Uriah(void)+0x610>
        31b750:	e3e0c007 	mvn	ip, #7	; 0x7
        31b754:	e09c3423 	adds	r3, ip, r3, lsr #8
        31b758:	42833003 	addmi	r3, r3, #3	; 0x3
        31b75c:	e1a03143 	mov	r3, r3, asr #2
        31b760:	ea000000 	b	31b768 <TObjectHeap::Uriah(void)+0x614>
        31b764:	e3a03001 	mov	r3, #1	; 0x1
        31b768:	e1530000 	cmp	r3, r0
        31b76c:	da00000a 	ble	31b79c <TObjectHeap::Uriah(void)+0x648>
        31b770:	e3e0c007 	mvn	ip, #7	; 0x7
        31b774:	e2800001 	add	r0, r0, #1	; 0x1
        31b778:	e3310000 	teq	r1, #0	; 0x0
        31b77c:	0a000003 	beq	31b790 <TObjectHeap::Uriah(void)+0x63c>
        31b780:	e09c3422 	adds	r3, ip, r2, lsr #8
        31b784:	42833003 	addmi	r3, r3, #3	; 0x3
        31b788:	e1a03143 	mov	r3, r3, asr #2
        31b78c:	ea000000 	b	31b794 <TObjectHeap::Uriah(void)+0x640>
        31b790:	e3a03001 	mov	r3, #1	; 0x1
        31b794:	e1530000 	cmp	r3, r0
        31b798:	cafffff5 	bgt	31b774 <TObjectHeap::Uriah(void)+0x620>
        31b79c:	e28dd004 	add	sp, sp, #4	; 0x4
        31b7a0:	e5960000 	ldr	r0, [r6]
        31b7a4:	e1a00420 	mov	r0, r0, lsr #8
        31b7a8:	e2800003 	add	r0, r0, #3	; 0x3
        31b7ac:	e3c00003 	bic	r0, r0, #3	; 0x3
        31b7b0:	e0806006 	add	r6, r0, r6
        31b7b4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        31b7b8:	e1560000 	cmp	r6, r0
        31b7bc:	3afffeab 	bcc	31b270 <TObjectHeap::Uriah(void)+0x11c>
        31b7c0:	e59d0050 	ldr	r0, [sp, #80]
        31b7c4:	e59d1058 	ldr	r1, [sp, #88]
        31b7c8:	e0410000 	sub	r0, r1, r0
        31b7cc:	e0801080 	add	r1, r0, r0, lsl #1
        31b7d0:	e0611380 	rsb	r1, r1, r0, lsl #7
        31b7d4:	e1a01181 	mov	r1, r1, lsl #3
        31b7d8:	e1a0000a 	mov	r0, sl
        31b7dc:	eb625c57 	bl	1bb2940 <$__rt_sdiv>
        31b7e0:	e1a03000 	mov	r3, r0
        31b7e4:	e92d0008 	stmdb	sp!, {r3}
        31b7e8:	e59d2050 	ldr	r2, [sp, #80]
        31b7ec:	e0821082 	add	r1, r2, r2, lsl #1
        31b7f0:	e0611382 	rsb	r1, r1, r2, lsl #7
        31b7f4:	e1a01181 	mov	r1, r1, lsl #3
        31b7f8:	e1a0000a 	mov	r0, sl
        31b7fc:	eb625c51 	bl	1bb2948 <$__rt_udiv>
        31b800:	e1a03000 	mov	r3, r0
        31b804:	e28d2054 	add	r2, sp, #84	; 0x54
        31b808:	e8920006 	ldmia	r2, {r1, r2}
        31b80c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        31b810:	e1a0200a 	mov	r2, sl
        31b814:	e59d3068 	ldr	r3, [sp, #104]
        31b818:	e5950000 	ldr	r0, [r5]
        31b81c:	e28f1f3e 	add	r1, pc, #248	; 0xf8
        31b820:	eb01b9a4 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b824:	e28dd010 	add	sp, sp, #16	; 0x10
        31b828:	e59d002c 	ldr	r0, [sp, #44]	; fField44
        31b82c:	e59d1038 	ldr	r1, [sp, #56]
        31b830:	e0810000 	add	r0, r1, r0
        31b834:	e59d1034 	ldr	r1, [sp, #52]
        31b838:	e0803001 	add	r3, r0, r1
        31b83c:	e59d2030 	ldr	r2, [sp, #48]	; fField48
        31b840:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        31b844:	e59d2048 	ldr	r2, [sp, #72]
        31b848:	e59d3038 	ldr	r3, [sp, #56]
        31b84c:	e5950000 	ldr	r0, [r5]
        31b850:	e28f1f42 	add	r1, pc, #264	; 0x108
        31b854:	eb01b997 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b858:	e28dd00c 	add	sp, sp, #12	; 0xc
        31b85c:	e59d2048 	ldr	r2, [sp, #72]
        31b860:	e59d3044 	ldr	r3, [sp, #68]
        31b864:	e92d000c 	stmdb	sp!, {r2, r3}
        31b868:	e59d2020 	ldr	r2, [sp, #32]	; fField32
        31b86c:	e59d301c 	ldr	r3, [sp, #28]	; fField28
        31b870:	e5950000 	ldr	r0, [r5]
        31b874:	e28f1f49 	add	r1, pc, #292	; 0x124
        31b878:	eb01b98e 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b87c:	e28dd008 	add	sp, sp, #8	; 0x8
        31b880:	e59d3024 	ldr	r3, [sp, #36]	; fField36
        31b884:	e92d0008 	stmdb	sp!, {r3}
        31b888:	e59d2044 	ldr	r2, [sp, #68]
        31b88c:	e59d302c 	ldr	r3, [sp, #44]	; fField44
        31b890:	e5950000 	ldr	r0, [r5]
        31b894:	e28f1f49 	add	r1, pc, #292	; 0x124
        31b898:	eb01b986 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b89c:	e28dd004 	add	sp, sp, #4	; 0x4
        31b8a0:	e59d3010 	ldr	r3, [sp, #16]	; fField16
        31b8a4:	e92d0008 	stmdb	sp!, {r3}
        31b8a8:	e59d2024 	ldr	r2, [sp, #36]	; fField36
        31b8ac:	e59d3020 	ldr	r3, [sp, #32]	; fField32
        31b8b0:	e5950000 	ldr	r0, [r5]
        31b8b4:	e28f1f49 	add	r1, pc, #292	; 0x124
        31b8b8:	eb01b97e 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b8bc:	e28dd004 	add	sp, sp, #4	; 0x4
        31b8c0:	e2841008 	add	r1, r4, #8	; 0x8
        31b8c4:	e8910003 	ldmia	r1, {r0, r1}
        31b8c8:	e0412000 	sub	r2, r1, r0
        31b8cc:	e132000a 	teq	r2, sl
        31b8d0:	15950000 	ldrne	r0, [r5]
        31b8d4:	128f1f4a 	addne	r1, pc, #296	; 0x128
        31b8d8:	1b01b976 	blne	389eb8 <POutTranslator::Print(char const *,...)>
        31b8dc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        31b8e0:	e5900000 	ldr	r0, [r0]
        31b8e4:	e3e01007 	mvn	r1, #7	; 0x7
        31b8e8:	e0810420 	add	r0, r1, r0, lsr #8
        31b8ec:	e1a071a0 	mov	r7, r0, lsr #3
        31b8f0:	e3a06000 	mov	r6, #0	; 0x0
        31b8f4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        31b8f8:	e3700001 	cmn	r0, #1	; 0x1
        31b8fc:	0a000058 	beq	31ba64 <TObjectHeap::Uriah(void)+0x910>
        31b900:	e2866001 	add	r6, r6, #1	; 0x1
        31b904:	e1560007 	cmp	r6, r7
        31b908:	da00004c 	ble	31ba40 <TObjectHeap::Uriah(void)+0x8ec>
        31b90c:	e5950000 	ldr	r0, [r5]
        31b910:	e28f1f43 	add	r1, pc, #268	; 0x10c
        31b914:	eb01b967 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31b918:	ea000051 	b	31ba64 <TObjectHeap::Uriah(void)+0x910>
        31b91c:	746f7461 	strvcbt	r7, [pc], #461	; 31b924 <TObjectHeap::Uriah(void)+0x7d0>
        31b920:	6c202564 	stcvs	5, cr2, [r0], -#400
        31b924:	2c206672 	stccs	6, cr6, [r0], -#456
        31b928:	65652025 	strvsb	r2, [r5, -#37]!
        31b92c:	642c206c 	strvst	r2, [ip], -#108	; fField108
        31b930:	61726765 	cmnvs	r2, r5, ror #14
        31b934:	73742025 	cmnvc	r4, #37	; 0x25
        31b938:	642c206c 	strvst	r2, [ip], -#108	; fField108
        31b93c:	6f636b65 	swivs	0x00636b65
        31b940:	64202564 	strvst	r2, [r0], -#1380
        31b944:	2c20696e 	stccs	9, cr6, [r0], -#440
        31b948:	74206672 	strvct	r6, [r0], -#1650
        31b94c:	61672025 	cmnvs	r7, r5, lsr #32
        31b950:	642c2065 	strvst	r2, [ip], -#101
        31b954:	78742066 	ldmvcda	r4!, {r1, r2, r5, r6, sp}^
        31b958:	72616720 	rsbvc	r6, r1, #8388608	; 0x800000
        31b95c:	25640d00 	strcsb	r0, [r4, -#3328]!	; fField3328
        31b960:	25642073 	strcsb	r2, [r4, -#115]!	; fField115
        31b964:	63726970 	cmnvs	r2, #1835008	; 0x1c0000
        31b968:	74733a20 	ldrvcbt	r3, [r3], -#2592
        31b96c:	25642062 	strcsb	r2, [r4, -#98]!	; fField98
        31b970:	79746563 	ldmvcdb	r4!, {r0, r1, r5, r6, r8, sl, sp, lr}^
        31b974:	6f64652c 	swivs	0x0064652c
        31b978:	20703a25 	rsbcss	r3, r0, r5, lsr #20
        31b97c:	642f763a 	strvst	r7, [pc], #63a	; 31b984 <TObjectHeap::Uriah(void)+0x830>
        31b980:	2564206c 	strcsb	r2, [r4, -#108]!	; fField108
        31b984:	69746572 	ldmvsdb	r4!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        31b988:	616c732c 	cmnvs	ip, ip, lsr #6
        31b98c:	20677261 	rsbcs	r7, r7, r1, ror #4
        31b990:	6e642074 	mcrvs	0, 3, r2, cr4, cr4, {3}
        31b994:	6f74616c 	swivs	0x0074616c
        31b998:	2025640d 	eorcs	r6, r5, sp, lsl #8
        31b99c:	00000000 	andeq	r0, r0, r0
        31b9a0:	6672616d 	ldrvsbt	r6, [r2], -sp, ror #2
        31b9a4:	65732025 	ldrvsb	r2, [r3, -#37]!
        31b9a8:	64282564 	strvst	r2, [r8], -#1380
        31b9ac:	296d6170 	stmcsdb	sp!, {r4, r5, r6, r8, sp, lr}^
        31b9b0:	7320703a 	teqvc	r0, #58	; 0x3a
        31b9b4:	25642f76 	strcsb	r2, [r4, -#3958]!	; fField3958
        31b9b8:	3a25640d 	bcc	c749f4 <ROM$$Size+0x554da8>
        31b9bc:	00000000 	andeq	r0, r0, r0
        31b9c0:	73796d62 	cmnvc	r9, #6272	; 0x1880
        31b9c4:	6f6c7320 	swivs	0x006c7320
        31b9c8:	25642c20 	strcsb	r2, [r4, -#3104]!	; fField3104
        31b9cc:	62696e61 	rsbvs	r6, r9, #1552	; 0x610
        31b9d0:	72696573 	rsbvc	r6, r9, #482344960	; 0x1cc00000
        31b9d4:	20256428 	eorcs	r6, r5, r8, lsr #8
        31b9d8:	2564290d 	strcsb	r2, [r4, -#2317]!	; fField2317
        31b9dc:	00000000 	andeq	r0, r0, r0
        31b9e0:	61727261 	cmnvs	r2, r1, ror #4
        31b9e4:	79732025 	ldmvcdb	r3!, {r0, r2, r5, sp}^
        31b9e8:	64282564 	strvst	r2, [r8], -#1380
        31b9ec:	292c2063 	stmcsdb	ip!, {r0, r1, r5, r6, sp}
        31b9f0:	6f6e7465 	swivs	0x006e7465
        31b9f4:	78746672 	ldmvcda	r4!, {r1, r4, r5, r6, r9, sl, sp, lr}^
        31b9f8:	616d6573 	cmnvs	sp, r3, ror r5
        31b9fc:	2025640d 	eorcs	r6, r5, sp, lsl #8
        31ba00:	00000000 	andeq	r0, r0, r0
        31ba04:	2a2a2a20 	bcs	da628c <ROM$$Size+0x686640>
        31ba08:	746f7461 	strvcbt	r7, [pc], #461	; 31ba10 <TObjectHeap::Uriah(void)+0x8bc>
        31ba0c:	6c207369 	stcvs	3, cr7, [r0], -#420
        31ba10:	7a652073 	bvc	1c63be4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x5338c>
        31ba14:	686f756c 	stmvsda	pc!, {r2, r3, r5, r6, r8, sl, ip, sp, lr}^
        31ba18:	64206265 	strvst	r6, [r0], -#613
        31ba1c:	2025580d 	eorcs	r5, r5, sp, lsl #16
        31ba20:	00000000 	andeq	r0, r0, r0
        31ba24:	2a2a2a4f 	bcs	da6368 <ROM$$Size+0x68671c>
        31ba28:	54206672 	strplt	r6, [r0], -#1650
        31ba2c:	6565206c 	strvsb	r2, [r5, -#108]!	; fField108
        31ba30:	69737420 	ldmvsdb	r3!, {r5, sl, ip, sp, lr}^
        31ba34:	636f7272 	cmnvs	pc, #536870919	; 0x20000007
        31ba38:	75707465 	ldrvcb	r7, [r0, -#1125]!
        31ba3c:	64000000 	strvs	r0, [r0]
        31ba40:	e5941014 	ldr	r1, [r4, #20]	; fField20
        31ba44:	e0810180 	add	r0, r1, r0, lsl #3
        31ba48:	e5900008 	ldr	r0, [r0, #8]	; fField8
        31ba4c:	e3100003 	tst	r0, #3	; 0x3
        31ba50:	01a00140 	moveq	r0, r0, asr #2
        31ba54:	0a000000 	beq	31ba5c <TObjectHeap::Uriah(void)+0x908>
        31ba58:	eb6299af 	bl	1bc211c <$_RINTError(long)>
        31ba5c:	e3700001 	cmn	r0, #1	; 0x1
        31ba60:	1affffa6 	bne	31b900 <TObjectHeap::Uriah(void)+0x7ac>
        31ba64:	e5950000 	ldr	r0, [r5]
        31ba68:	e28f1f13 	add	r1, pc, #76	; 0x4c
        31ba6c:	eb01b911 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31ba70:	e0472006 	sub	r2, r7, r6
        31ba74:	e1a03007 	mov	r3, r7
        31ba78:	e5950000 	ldr	r0, [r5]
        31ba7c:	e28f1f10 	add	r1, pc, #64	; 0x40
        31ba80:	eb01b90c 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31ba84:	e5950000 	ldr	r0, [r5]
        31ba88:	e28f1f13 	add	r1, pc, #76	; 0x4c
        31ba8c:	eb01b909 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31ba90:	e59d005c 	ldr	r0, [sp, #92]
        31ba94:	e5900028 	ldr	r0, [r0, #40]	; fField40
        31ba98:	e3300000 	teq	r0, #0	; 0x0
        31ba9c:	0a000003 	beq	31bab0 <TObjectHeap::Uriah(void)+0x95c>
        31baa0:	e5950000 	ldr	r0, [r5]
        31baa4:	eb622a2f 	bl	1ba6368 <POutTranslator::$Delete(void)>
        31baa8:	e59d0000 	ldr	r0, [sp]
        31baac:	eb635368 	bl	1bf0854 <$fclose>
        31bab0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        31bab4:	e5850000 	str	r0, [r5]
        31bab8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        31babc:	4f543a20 	swimi	0x00543a20
        31bac0:	00000000 	andeq	r0, r0, r0
        31bac4:	256c6420 	strcsb	r6, [ip, -#1056]!
        31bac8:	75736564 	ldrvcb	r6, [r3, -#1380]!
        31bacc:	2c20256c 	stccs	5, cr2, [r0], -#432
        31bad0:	64206861 	strvst	r6, [r0], -#2145
        31bad4:	6e646c65 	cdpvs	12, 6, cr6, cr4, cr5, {3}
        31bad8:	73000000 	tstvc	r0, #0	; 0x0
        31badc:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TObjectHeap::UriahBinaryObjects(int)
 * Address: 0031bae0
 */
TObjectHeap::UriahBinaryObjects(int) {
    /*
        31bae0:	e1a0c00d 	mov	ip, sp
        31bae4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        31bae8:	e24cb004 	sub	fp, ip, #4	; 0x4
        31baec:	e1a04000 	mov	r4, r0
        31baf0:	e1a07001 	mov	r7, r1
        31baf4:	e24dd008 	sub	sp, sp, #8	; 0x8
        31baf8:	e3a02001 	mov	r2, #1	; 0x1
        31bafc:	e3a01a01 	mov	r1, #4096	; 0x1000
        31bb00:	e3a00000 	mov	r0, #0	; 0x0
        31bb04:	eb5cf866 	bl	1a59ca4 <TObjectHeap::$__ct(long, long)>
        31bb08:	e1a08000 	mov	r8, r0
        31bb0c:	e59f610c 	ldr	r6, [pc, #10c]	; 31bc20 <TObjectHeap::UriahBinaryObjects(int)+0x140>
        31bb10:	e3a00002 	mov	r0, #2	; 0x2
        31bb14:	e596a000 	ldr	sl, [r6]
        31bb18:	eb62998b 	bl	1bc214c <$AllocateRefHandle(long)>
        31bb1c:	e58d0004 	str	r0, [sp, #4]	; fField4
        31bb20:	e3a00002 	mov	r0, #2	; 0x2
        31bb24:	eb629988 	bl	1bc214c <$AllocateRefHandle(long)>
        31bb28:	e3a05000 	mov	r5, #0	; 0x0
        31bb2c:	e3370000 	teq	r7, #0	; 0x0
        31bb30:	e58d0000 	str	r0, [sp]
        31bb34:	0a000003 	beq	31bb48 <TObjectHeap::UriahBinaryObjects(int)+0x68>
        31bb38:	e28f1f39 	add	r1, pc, #228	; 0xe4
        31bb3c:	e28f0f39 	add	r0, pc, #228	; 0xe4
        31bb40:	eb635347 	bl	1bf0864 <$fopen>
        31bb44:	e1a05000 	mov	r5, r0
        31bb48:	e5868000 	str	r8, [r6]
        31bb4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        31bb50:	e1a00008 	mov	r0, r8
        31bb54:	eb5c84bb 	bl	1a3ce48 <TObjectHeap::$AllocateFrame(void)>
        31bb58:	eb62997b 	bl	1bc214c <$AllocateRefHandle(long)>
        31bb5c:	e58d0000 	str	r0, [sp]
        31bb60:	e3a00002 	mov	r0, #2	; 0x2
        31bb64:	eb629978 	bl	1bc214c <$AllocateRefHandle(long)>
        31bb68:	e1a09000 	mov	r9, r0
        31bb6c:	e2844004 	add	r4, r4, #4	; 0x4
        31bb70:	e9b40081 	ldmib	r4!, {r0, r7}
        31bb74:	e5961020 	ldr	r1, [r6, #32]	; fField32
        31bb78:	e3310000 	teq	r1, #0	; 0x0
        31bb7c:	159f00b4 	ldrne	r0, [pc, #b4]	; 31bc38 <TObjectHeap::UriahBinaryObjects(int)+0x158>
        31bb80:	159f70b4 	ldrne	r7, [pc, #b4]	; 31bc3c <TObjectHeap::UriahBinaryObjects(int)+0x15c>
        31bb84:	e1a04000 	mov	r4, r0
        31bb88:	e1500007 	cmp	r0, r7
        31bb8c:	2a00004f 	bcs	31bcd0 <TObjectHeap::UriahBinaryObjects(int)+0x1f0>
        31bb90:	e5940000 	ldr	r0, [r4]
        31bb94:	e20000ff 	and	r0, r0, #255	; 0xff
        31bb98:	e3100001 	tst	r0, #1	; 0x1
        31bb9c:	02001004 	andeq	r1, r0, #4	; 0x4
        31bba0:	03310000 	teqeq	r1, #0	; 0x0
        31bba4:	02000020 	andeq	r0, r0, #32	; 0x20
        31bba8:	03300000 	teqeq	r0, #0	; 0x0
        31bbac:	1a000040 	bne	31bcb4 <TObjectHeap::UriahBinaryObjects(int)+0x1d4>
        31bbb0:	e2840001 	add	r0, r4, #1	; 0x1
        31bbb4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        31bbb8:	e5810000 	str	r0, [r1]
        31bbbc:	e28d0008 	add	r0, sp, #8	; 0x8
        31bbc0:	eb629968 	bl	1bc2168 <$ClassOf(RefVar const &)>
        31bbc4:	e1a01000 	mov	r1, r0
        31bbc8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        31bbcc:	e5801000 	str	r1, [r0]
        31bbd0:	e5940000 	ldr	r0, [r4]
        31bbd4:	e1a00420 	mov	r0, r0, lsr #8
        31bbd8:	e2800003 	add	r0, r0, #3	; 0x3
        31bbdc:	e3c08003 	bic	r8, r0, #3	; 0x3
        31bbe0:	e59d0000 	ldr	r0, [sp]
        31bbe4:	e5900000 	ldr	r0, [r0]
        31bbe8:	eb62a19c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        31bbec:	e5890000 	str	r0, [r9]
        31bbf0:	e24dd008 	sub	sp, sp, #8	; 0x8
        31bbf4:	e3300002 	teq	r0, #2	; 0x2
        31bbf8:	1a000010 	bne	31bc40 <TObjectHeap::UriahBinaryObjects(int)+0x160>
        31bbfc:	e1a00108 	mov	r0, r8, lsl #2
        31bc00:	eb629951 	bl	1bc214c <$AllocateRefHandle(long)>
        31bc04:	e58d0000 	str	r0, [sp]
        31bc08:	e1a0200d 	mov	r2, sp
        31bc0c:	e28d100c 	add	r1, sp, #12	; 0xc
        31bc10:	e28d0008 	add	r0, sp, #8	; 0x8
        31bc14:	eb62a9d3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        31bc18:	e59d0000 	ldr	r0, [sp]
        31bc1c:	ea000014 	b	31bc74 <TObjectHeap::UriahBinaryObjects(int)+0x194>
        31bc20:	0c105548 	ldceq	5, cr5, [r0], -#288
        31bc24:	77000000 	strvc	r0, [r0, -r0]
        31bc28:	55726961 	ldrplb	r6, [r2, -#2401]!
        31bc2c:	68205374 	stmvsda	r0!, {r2, r4, r5, r6, r8, r9, ip, lr}
        31bc30:	72696e67 	rsbvc	r6, r9, #1648	; 0x670
        31bc34:	73000000 	tstvc	r0, #0	; 0x0
        31bc38:	003afda8 	eoreqs	pc, sl, r8, lsr #27
        31bc3c:	0067fa40 	rsbeq	pc, r7, r0, asr #20
        31bc40:	e3100003 	tst	r0, #3	; 0x3
        31bc44:	01a00140 	moveq	r0, r0, asr #2
        31bc48:	0a000000 	beq	31bc50 <TObjectHeap::UriahBinaryObjects(int)+0x170>
        31bc4c:	eb629932 	bl	1bc211c <$_RINTError(long)>
        31bc50:	e0800008 	add	r0, r0, r8
        31bc54:	e1a00100 	mov	r0, r0, lsl #2
        31bc58:	eb62993b 	bl	1bc214c <$AllocateRefHandle(long)>
        31bc5c:	e58d0004 	str	r0, [sp, #4]	; fField4
        31bc60:	e28d2004 	add	r2, sp, #4	; 0x4
        31bc64:	e28d100c 	add	r1, sp, #12	; 0xc
        31bc68:	e28d0008 	add	r0, sp, #8	; 0x8
        31bc6c:	eb62a9bd 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        31bc70:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        31bc74:	eb629d50 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31bc78:	e3350000 	teq	r5, #0	; 0x0
        31bc7c:	0a00000b 	beq	31bcb0 <TObjectHeap::UriahBinaryObjects(int)+0x1d0>
        31bc80:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        31bc84:	e5900000 	ldr	r0, [r0]
        31bc88:	e59f1110 	ldr	r1, [pc, #110]	; 31bda0 <TObjectHeap::UriahBinaryObjects(int)+0x2c0>
        31bc8c:	e5911000 	ldr	r1, [r1]
        31bc90:	e5911000 	ldr	r1, [r1]
        31bc94:	eb62a581 	bl	1bc52a0 <$IsSubclassRef__FlT1>
        31bc98:	e3300000 	teq	r0, #0	; 0x0
        31bc9c:	0a000003 	beq	31bcb0 <TObjectHeap::UriahBinaryObjects(int)+0x1d0>
        31bca0:	e284200c 	add	r2, r4, #12	; 0xc
        31bca4:	e1a00005 	mov	r0, r5
        31bca8:	e28f1f3d 	add	r1, pc, #244	; 0xf4
        31bcac:	eb6352ed 	bl	1bf0868 <$fprintf>
        31bcb0:	e28dd008 	add	sp, sp, #8	; 0x8
        31bcb4:	e5940000 	ldr	r0, [r4]
        31bcb8:	e1a00420 	mov	r0, r0, lsr #8
        31bcbc:	e2800003 	add	r0, r0, #3	; 0x3
        31bcc0:	e3c00003 	bic	r0, r0, #3	; 0x3
        31bcc4:	e0804004 	add	r4, r0, r4
        31bcc8:	e1540007 	cmp	r4, r7
        31bccc:	3affffaf 	bcc	31bb90 <TObjectHeap::UriahBinaryObjects(int)+0xb0>
        31bcd0:	e59f70d0 	ldr	r7, [pc, #d0]	; 31bda8 <TObjectHeap::UriahBinaryObjects(int)+0x2c8>
        31bcd4:	e5970000 	ldr	r0, [r7]
        31bcd8:	e28f1f33 	add	r1, pc, #204	; 0xcc
        31bcdc:	eb01b875 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31bce0:	e24dd030 	sub	sp, sp, #48	; 0x30
        31bce4:	e28d1030 	add	r1, sp, #48	; 0x30
        31bce8:	e1a0000d 	mov	r0, sp
        31bcec:	e3a02000 	mov	r2, #0	; 0x0
        31bcf0:	eb6294fe 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        31bcf4:	e1a0000d 	mov	r0, sp
        31bcf8:	eb629d37 	bl	1bc31dc <TObjectIterator::$Done(void)>
        31bcfc:	e3300000 	teq	r0, #0	; 0x0
        31bd00:	1a000013 	bne	31bd54 <TObjectHeap::UriahBinaryObjects(int)+0x274>
        31bd04:	e28d4004 	add	r4, sp, #4	; 0x4
        31bd08:	e1a00004 	mov	r0, r4
        31bd0c:	e3a01000 	mov	r1, #0	; 0x0
        31bd10:	eb635f1b 	bl	1bf3984 <$PrintObject(RefVar const &, unsigned long)>
        31bd14:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        31bd18:	e5900000 	ldr	r0, [r0]
        31bd1c:	e3100003 	tst	r0, #3	; 0x3
        31bd20:	01a00140 	moveq	r0, r0, asr #2
        31bd24:	0a000000 	beq	31bd2c <TObjectHeap::UriahBinaryObjects(int)+0x24c>
        31bd28:	eb6298fb 	bl	1bc211c <$_RINTError(long)>
        31bd2c:	e1a02000 	mov	r2, r0
        31bd30:	e5970000 	ldr	r0, [r7]
        31bd34:	e28f1f26 	add	r1, pc, #152	; 0x98
        31bd38:	eb01b85e 	bl	389eb8 <POutTranslator::Print(char const *,...)>
        31bd3c:	e1a0000d 	mov	r0, sp
        31bd40:	eb62a568 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        31bd44:	e1a0000d 	mov	r0, sp
        31bd48:	eb629d23 	bl	1bc31dc <TObjectIterator::$Done(void)>
        31bd4c:	e3300000 	teq	r0, #0	; 0x0
        31bd50:	0affffec 	beq	31bd08 <TObjectHeap::UriahBinaryObjects(int)+0x228>
        31bd54:	e1a0000d 	mov	r0, sp
        31bd58:	e3a01000 	mov	r1, #0	; 0x0
        31bd5c:	e1a0e00f 	mov	lr, pc
        31bd60:	e59df000 	ldr	pc, [sp]
        31bd64:	e28dd030 	add	sp, sp, #48	; 0x30
        31bd68:	e1a00009 	mov	r0, r9
        31bd6c:	eb629d12 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31bd70:	e59d0000 	ldr	r0, [sp]
        31bd74:	eb629d10 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31bd78:	e28dd004 	add	sp, sp, #4	; 0x4
        31bd7c:	e3350000 	teq	r5, #0	; 0x0
        31bd80:	e586a000 	str	sl, [r6]
        31bd84:	11a00005 	movne	r0, r5
        31bd88:	1b6352b1 	blne	1bf0854 <$fclose>
        31bd8c:	e59d0000 	ldr	r0, [sp]
        31bd90:	eb629d09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31bd94:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        31bd98:	eb629d07 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31bd9c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        31bda0:	006848d0 	ldreqd	r4, [r8], -#128
        31bda4:	25730d00 	ldrcsb	r0, [r3, -#3328]!	; fField3328
        31bda8:	0c101820 	ldceq	8, cr1, [r0], -#128
        31bdac:	53756d6d 	cmnpl	r5, #6976	; 0x1b40
        31bdb0:	61727920 	cmnvs	r2, r0, lsr #18
        31bdb4:	6f662073 	swivs	0x00662073
        31bdb8:	697a6573 	ldmvsdb	sl!, {r0, r1, r4, r5, r6, r8, sl, sp, lr}^
        31bdbc:	206f6620 	rsbcs	r6, pc, r0, lsr #12
        31bdc0:	62696e61 	rsbvs	r6, r9, #1552	; 0x610
        31bdc4:	7279206f 	rsbvcs	r2, r9, #111	; 0x6f
        31bdc8:	626a6563 	rsbvs	r6, sl, #415236096	; 0x18c00000
        31bdcc:	74733a0d 	ldrvcbt	r3, [r3], -#2573
        31bdd0:	00000000 	andeq	r0, r0, r0
        31bdd4:	3a202564 	bcc	b2536c <ROM$$Size+0x405720>
        31bdd8:	0d000000 	stceq	0, cr0, [r0]
    */
}

/**
 * Symbol: TObjectHeap::InHeap(long)
 * Address: 0031bddc
 */
TObjectHeap::InHeap(long) {
    /*
        31bddc:	e1a0c00d 	mov	ip, sp
        31bde0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        31bde4:	e24cb004 	sub	fp, ip, #4	; 0x4
        31bde8:	e1a04000 	mov	r4, r0
        31bdec:	e2010003 	and	r0, r1, #3	; 0x3
        31bdf0:	e3300001 	teq	r0, #1	; 0x1
        31bdf4:	02410001 	subeq	r0, r1, #1	; 0x1
        31bdf8:	0a000001 	beq	31be04 <TObjectHeap::InHeap(long)+0x28>
        31bdfc:	e1a00001 	mov	r0, r1
        31be00:	eb6298c6 	bl	1bc2120 <$_RPTRError(long)>
        31be04:	e5941008 	ldr	r1, [r4, #8]	; fField8
        31be08:	e1510000 	cmp	r1, r0
        31be0c:	8a000003 	bhi	31be20 <TObjectHeap::InHeap(long)+0x44>
        31be10:	e5b4100c 	ldr	r1, [r4, #12]!	; fField12
        31be14:	e1510000 	cmp	r1, r0
        31be18:	83a00001 	movhi	r0, #1	; 0x1
        31be1c:	891ba810 	ldmhidb	fp, {r4, fp, sp, pc}
        31be20:	e3a00000 	mov	r0, #0	; 0x0
        31be24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::__ct(long, long)
 * Address: 0031cafc
 */
TObjectHeap::TObjectHeap(long, long) {
    /*
        31cafc:	e1a0c00d 	mov	ip, sp
        31cb00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31cb04:	e24cb004 	sub	fp, ip, #4	; 0x4
        31cb08:	e1b04000 	movs	r4, r0
        31cb0c:	e1a05001 	mov	r5, r1
        31cb10:	1a000005 	bne	31cb2c <TObjectHeap::__ct(long, long)+0x30>
        31cb14:	e3a00034 	mov	r0, #52	; 0x34
        31cb18:	eb62c706 	bl	1bce738 <$__nw(unsigned int)>
        31cb1c:	e1b04000 	movs	r4, r0
        31cb20:	1a000001 	bne	31cb2c <TObjectHeap::__ct(long, long)+0x30>
        31cb24:	e1a00004 	mov	r0, r4
        31cb28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31cb2c:	e59f0118 	ldr	r0, [pc, #118]	; 31cc4c <TObjectHeap::__ct(long, long)+0x150>
        31cb30:	e5840000 	str	r0, [r4]
        31cb34:	e2850004 	add	r0, r5, #4	; 0x4
        31cb38:	eb631580 	bl	1be2140 <$NewPtr>
        31cb3c:	e5840004 	str	r0, [r4, #4]	; fField4
        31cb40:	e2800003 	add	r0, r0, #3	; 0x3
        31cb44:	e3c01003 	bic	r1, r0, #3	; 0x3
        31cb48:	e3c50003 	bic	r0, r5, #3	; 0x3
        31cb4c:	e5841008 	str	r1, [r4, #8]	; fField8
        31cb50:	e0810000 	add	r0, r1, r0
        31cb54:	e3a05008 	mov	r5, #8	; 0x8
        31cb58:	e2855b02 	add	r5, r5, #2048	; 0x800
        31cb5c:	e584000c 	str	r0, [r4, #12]	; fField12
        31cb60:	e0402001 	sub	r2, r0, r1
        31cb64:	e1a00004 	mov	r0, r4
        31cb68:	eb5c9158 	bl	1a410d0 <TObjectHeap::$MakeFreeBlock(ObjHeader *, long)>
        31cb6c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        31cb70:	e5910000 	ldr	r0, [r1]
        31cb74:	e0652420 	rsb	r2, r5, r0, lsr #8
        31cb78:	e1a00004 	mov	r0, r4
        31cb7c:	eb5c9da1 	bl	1a44208 <TObjectHeap::$SplitBlock(ObjHeader *, long)>
        31cb80:	e5940008 	ldr	r0, [r4, #8]	; fField8
        31cb84:	e5901000 	ldr	r1, [r0]
        31cb88:	e1a01421 	mov	r1, r1, lsr #8
        31cb8c:	e2811003 	add	r1, r1, #3	; 0x3
        31cb90:	e3c11003 	bic	r1, r1, #3	; 0x3
        31cb94:	e0810000 	add	r0, r1, r0
        31cb98:	e5840014 	str	r0, [r4, #20]	; fField20
        31cb9c:	e5901000 	ldr	r1, [r0]
        31cba0:	e20110ff 	and	r1, r1, #255	; 0xff
        31cba4:	e3811702 	orr	r1, r1, #524288	; 0x80000
        31cba8:	e3811b02 	orr	r1, r1, #2048	; 0x800
        31cbac:	e5801000 	str	r1, [r0]
        31cbb0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        31cbb4:	e5901000 	ldr	r1, [r0]
        31cbb8:	e3c110ff 	bic	r1, r1, #255	; 0xff
        31cbbc:	e3811001 	orr	r1, r1, #1	; 0x1
        31cbc0:	e5801000 	str	r1, [r0]
        31cbc4:	e3a01c01 	mov	r1, #256	; 0x100
        31cbc8:	e3a00000 	mov	r0, #0	; 0x0
        31cbcc:	e3e0c003 	mvn	ip, #3	; 0x3
        31cbd0:	e3a020ff 	mov	r2, #255	; 0xff
        31cbd4:	e5845020 	str	r5, [r4, #32]	; fField32
        31cbd8:	e2803001 	add	r3, r0, #1	; 0x1
        31cbdc:	e1a05103 	mov	r5, r3, lsl #2
        31cbe0:	e594e014 	ldr	lr, [r4, #20]	; fField20
        31cbe4:	e08ee180 	add	lr, lr, r0, lsl #3
        31cbe8:	e5ae5008 	str	r5, [lr, #8]!	; fField8
        31cbec:	e594e014 	ldr	lr, [r4, #20]	; fField20
        31cbf0:	e08e0180 	add	r0, lr, r0, lsl #3
        31cbf4:	e5a0c00c 	str	ip, [r0, #12]!	; fField12
        31cbf8:	e1a00003 	mov	r0, r3
        31cbfc:	e1520003 	cmp	r2, r3
        31cc00:	cafffff4 	bgt	31cbd8 <TObjectHeap::__ct(long, long)+0xdc>
        31cc04:	e5940014 	ldr	r0, [r4, #20]	; fField20
        31cc08:	e0800181 	add	r0, r0, r1, lsl #3
        31cc0c:	e580c000 	str	ip, [r0]
        31cc10:	e5940014 	ldr	r0, [r4, #20]	; fField20
        31cc14:	e0800181 	add	r0, r0, r1, lsl #3
        31cc18:	e3a05000 	mov	r5, #0	; 0x0
        31cc1c:	e5a0c004 	str	ip, [r0, #4]!	; fField4
        31cc20:	e3a00002 	mov	r0, #2	; 0x2
        31cc24:	e584001c 	str	r0, [r4, #28]	; fField28
        31cc28:	e5845018 	str	r5, [r4, #24]	; fField24
        31cc2c:	e284001c 	add	r0, r4, #28	; 0x1c
        31cc30:	eb62953d 	bl	1bc212c <$AddGCRoot(long &)>
        31cc34:	e5940008 	ldr	r0, [r4, #8]	; fField8
        31cc38:	e5840010 	str	r0, [r4, #16]	; fField16
        31cc3c:	e5845028 	str	r5, [r4, #40]	; fField40
        31cc40:	e584502c 	str	r5, [r4, #44]	; fField44
        31cc44:	e5845030 	str	r5, [r4, #48]	; fField48
        31cc48:	eaffffb5 	b	31cb24 <TObjectHeap::__ct(long, long)+0x28>
        31cc4c:	0001b368 	andeq	fp, r1, r8, ror #6
    */
}

/**
 * Symbol: TObjectHeap::DisposeMemory(void)
 * Address: 0031cc50
 */
TObjectHeap::DisposeMemory(void) {
    /*
        31cc50:	e1a0c00d 	mov	ip, sp
        31cc54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        31cc58:	e24cb004 	sub	fp, ip, #4	; 0x4
        31cc5c:	e1a04000 	mov	r4, r0
        31cc60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        31cc64:	e3300000 	teq	r0, #0	; 0x0
        31cc68:	1b631111 	blne	1be10b4 <$DisposPtr>
        31cc6c:	e3a00000 	mov	r0, #0	; 0x0
        31cc70:	e5a40004 	str	r0, [r4, #4]!	; fField4
        31cc74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::__dt(void)
 * Address: 0031cc78
 */
TObjectHeap::~TObjectHeap(void) {
    /*
        31cc78:	e1a0c00d 	mov	ip, sp
        31cc7c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31cc80:	e24cb004 	sub	fp, ip, #4	; 0x4
        31cc84:	e1a04000 	mov	r4, r0
        31cc88:	e1a05001 	mov	r5, r1
        31cc8c:	e59f0028 	ldr	r0, [pc, #28]	; 31ccbc <TObjectHeap::__dt(void)+0x44>	; fField28
        31cc90:	e5840000 	str	r0, [r4]
        31cc94:	e284001c 	add	r0, r4, #28	; 0x1c
        31cc98:	eb62a5a0 	bl	1bc6320 <$RemoveGCRoot(long &)>
        31cc9c:	e1a00004 	mov	r0, r4
        31cca0:	e1a0e00f 	mov	lr, pc
        31cca4:	e594f000 	ldr	pc, [r4]
        31cca8:	e3150001 	tst	r5, #1	; 0x1
        31ccac:	11a00004 	movne	r0, r4
        31ccb0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        31ccb4:	1a62c289 	bne	1bcd6e0 <$__dl(void *)>
        31ccb8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31ccbc:	0001b368 	andeq	fp, r1, r8, ror #6
    */
}

/**
 * Symbol: TObjectHeap::CoalesceFreeBlocks(ObjHeader *, long)
 * Address: 0031ccc0
 */
TObjectHeap::CoalesceFreeBlocks(ObjHeader *, long) {
    /*
        31ccc0:	e92d4010 	stmdb	sp!, {r4, lr}
        31ccc4:	e591c000 	ldr	ip, [r1]
        31ccc8:	e31c0004 	tst	ip, #4	; 0x4
        31cccc:	03a00000 	moveq	r0, #0	; 0x0
        31ccd0:	08bd8010 	ldmeqia	sp!, {r4, pc}
        31ccd4:	e1a0342c 	mov	r3, ip, lsr #8
        31ccd8:	e2833003 	add	r3, r3, #3	; 0x3
        31ccdc:	e3c33003 	bic	r3, r3, #3	; 0x3
        31cce0:	e1530002 	cmp	r3, r2
        31cce4:	b590e00c 	ldrlt	lr, [r0, #12]	; fField12
        31cce8:	ba000000 	blt	31ccf0 <TObjectHeap::CoalesceFreeBlocks(ObjHeader *, long)+0x30>
        31ccec:	ea000013 	b	31cd40 <TObjectHeap::CoalesceFreeBlocks(ObjHeader *, long)+0x80>
        31ccf0:	e0812003 	add	r2, r1, r3
        31ccf4:	e15e0002 	cmp	lr, r2
        31ccf8:	9a000007 	bls	31cd1c <TObjectHeap::CoalesceFreeBlocks(ObjHeader *, long)+0x5c>
        31ccfc:	e5922000 	ldr	r2, [r2]
        31cd00:	e3120004 	tst	r2, #4	; 0x4
        31cd04:	0a000004 	beq	31cd1c <TObjectHeap::CoalesceFreeBlocks(ObjHeader *, long)+0x5c>
        31cd08:	e1a02422 	mov	r2, r2, lsr #8
        31cd0c:	e2822003 	add	r2, r2, #3	; 0x3
        31cd10:	e3c22003 	bic	r2, r2, #3	; 0x3
        31cd14:	e0823003 	add	r3, r2, r3
        31cd18:	eafffff4 	b	31ccf0 <TObjectHeap::CoalesceFreeBlocks(ObjHeader *, long)+0x30>
        31cd1c:	e20c20ff 	and	r2, ip, #255	; 0xff
        31cd20:	e1822403 	orr	r2, r2, r3, lsl #8
        31cd24:	e5812000 	str	r2, [r1]
        31cd28:	e5902010 	ldr	r2, [r0, #16]	; fField16
        31cd2c:	e1520001 	cmp	r2, r1
        31cd30:	9a000002 	bls	31cd40 <TObjectHeap::CoalesceFreeBlocks(ObjHeader *, long)+0x80>
        31cd34:	e081c003 	add	ip, r1, r3
        31cd38:	e152000c 	cmp	r2, ip
        31cd3c:	35a01010 	strcc	r1, [r0, #16]!	; fField16
        31cd40:	e1a00003 	mov	r0, r3
        31cd44:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TObjectHeap::FindFreeBlock(long)
 * Address: 0031cd48
 */
TObjectHeap::FindFreeBlock(long) {
    /*
        31cd48:	e1a0c00d 	mov	ip, sp
        31cd4c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31cd50:	e24cb004 	sub	fp, ip, #4	; 0x4
        31cd54:	e1a04000 	mov	r4, r0
        31cd58:	e1a05001 	mov	r5, r1
        31cd5c:	e5906010 	ldr	r6, [r0, #16]	; fField16
        31cd60:	e1a02005 	mov	r2, r5
        31cd64:	e1a01006 	mov	r1, r6
        31cd68:	e1a00004 	mov	r0, r4
        31cd6c:	eb5c844b 	bl	1a3dea0 <TObjectHeap::$CoalesceFreeBlocks(ObjHeader *, long)>
        31cd70:	e1500005 	cmp	r0, r5
        31cd74:	b5960000 	ldrlt	r0, [r6]
        31cd78:	b1a00420 	movlt	r0, r0, lsr #8
        31cd7c:	b2800003 	addlt	r0, r0, #3	; 0x3
        31cd80:	b3c00003 	biclt	r0, r0, #3	; 0x3
        31cd84:	b0806006 	addlt	r6, r0, r6
        31cd88:	ba000001 	blt	31cd94 <TObjectHeap::FindFreeBlock(long)+0x4c>
        31cd8c:	e1a00006 	mov	r0, r6
        31cd90:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        31cd94:	e594000c 	ldr	r0, [r4, #12]	; fField12
        31cd98:	e1500006 	cmp	r0, r6
        31cd9c:	95946008 	ldrls	r6, [r4, #8]	; fField8
        31cda0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        31cda4:	e1300006 	teq	r0, r6
        31cda8:	1affffec 	bne	31cd60 <TObjectHeap::FindFreeBlock(long)+0x18>
        31cdac:	e3a00000 	mov	r0, #0	; 0x0
        31cdb0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::SplitBlock(ObjHeader *, long)
 * Address: 0031cdb4
 */
TObjectHeap::SplitBlock(ObjHeader *, long) {
    /*
        31cdb4:	e1a0c00d 	mov	ip, sp
        31cdb8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31cdbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        31cdc0:	e1a05000 	mov	r5, r0
        31cdc4:	e1a04001 	mov	r4, r1
        31cdc8:	e1a06002 	mov	r6, r2
        31cdcc:	e5910000 	ldr	r0, [r1]
        31cdd0:	e1a00420 	mov	r0, r0, lsr #8
        31cdd4:	e2800003 	add	r0, r0, #3	; 0x3
        31cdd8:	e3c01003 	bic	r1, r0, #3	; 0x3
        31cddc:	e2820003 	add	r0, r2, #3	; 0x3
        31cde0:	e3c00003 	bic	r0, r0, #3	; 0x3
        31cde4:	e0412000 	sub	r2, r1, r0
        31cde8:	e3520004 	cmp	r2, #4	; 0x4
        31cdec:	a0801004 	addge	r1, r0, r4
        31cdf0:	a1a00005 	movge	r0, r5
        31cdf4:	ab5c90b5 	blge	1a410d0 <TObjectHeap::$MakeFreeBlock(ObjHeader *, long)>
        31cdf8:	e5940000 	ldr	r0, [r4]
        31cdfc:	e20000ff 	and	r0, r0, #255	; 0xff
        31ce00:	e1800406 	orr	r0, r0, r6, lsl #8
        31ce04:	e5840000 	str	r0, [r4]
        31ce08:	e5951010 	ldr	r1, [r5, #16]	; fField16
        31ce0c:	e1310004 	teq	r1, r4
        31ce10:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        31ce14:	e1a00420 	mov	r0, r0, lsr #8
        31ce18:	e2800003 	add	r0, r0, #3	; 0x3
        31ce1c:	e3c00003 	bic	r0, r0, #3	; 0x3
        31ce20:	e0800004 	add	r0, r0, r4
        31ce24:	e5850010 	str	r0, [r5, #16]	; fField16
        31ce28:	e595100c 	ldr	r1, [r5, #12]	; fField12
        31ce2c:	e1500001 	cmp	r0, r1
        31ce30:	25950008 	ldrcs	r0, [r5, #8]	; fField8
        31ce34:	25a50010 	strcs	r0, [r5, #16]!	; fField16
        31ce38:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::MakeFreeBlock(ObjHeader *, long)
 * Address: 0031ce3c
 */
TObjectHeap::MakeFreeBlock(ObjHeader *, long) {
    /*
        31ce3c:	e2820003 	add	r0, r2, #3	; 0x3
        31ce40:	e3c00003 	bic	r0, r0, #3	; 0x3
        31ce44:	e5913000 	ldr	r3, [r1]
        31ce48:	e20330ff 	and	r3, r3, #255	; 0xff
        31ce4c:	e1830400 	orr	r0, r3, r0, lsl #8
        31ce50:	e3c000ff 	bic	r0, r0, #255	; 0xff
        31ce54:	e3800004 	orr	r0, r0, #4	; 0x4
        31ce58:	e3520004 	cmp	r2, #4	; 0x4
        31ce5c:	e5810000 	str	r0, [r1]
        31ce60:	c3a00000 	movgt	r0, #0	; 0x0
        31ce64:	c5a10004 	strgt	r0, [r1, #4]!	; fField4
        31ce68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TObjectHeap::AllocateBlock(long, unsigned long)
 * Address: 0031ce6c
 */
TObjectHeap::AllocateBlock(long, unsigned long) {
    /*
        31ce6c:	e1a0c00d 	mov	ip, sp
        31ce70:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31ce74:	e24cb004 	sub	fp, ip, #4	; 0x4
        31ce78:	e1a04000 	mov	r4, r0
        31ce7c:	e1a05001 	mov	r5, r1
        31ce80:	e1a06002 	mov	r6, r2
        31ce84:	eb5c882c 	bl	1a3ef3c <TObjectHeap::$FindFreeBlock(long)>
        31ce88:	e1b07000 	movs	r7, r0
        31ce8c:	1a00000e 	bne	31cecc <TObjectHeap::AllocateBlock(long, unsigned long)+0x60>
        31ce90:	e1a00004 	mov	r0, r4
        31ce94:	eb5c8c42 	bl	1a3ffa4 <TObjectHeap::$GC(void)>
        31ce98:	e1a01005 	mov	r1, r5
        31ce9c:	e1a00004 	mov	r0, r4
        31cea0:	eb5c8825 	bl	1a3ef3c <TObjectHeap::$FindFreeBlock(long)>
        31cea4:	e1b07000 	movs	r7, r0
        31cea8:	1a000007 	bne	31cecc <TObjectHeap::AllocateBlock(long, unsigned long)+0x60>
        31ceac:	e3a00002 	mov	r0, #2	; 0x2
        31ceb0:	e584001c 	str	r0, [r4, #28]	; fField28
        31ceb4:	e59f0068 	ldr	r0, [pc, #68]	; 31cf24 <TObjectHeap::AllocateBlock(long, unsigned long)+0xb8>
        31ceb8:	e5900000 	ldr	r0, [r0]
        31cebc:	e3a02000 	mov	r2, #0	; 0x0
        31cec0:	e3a01fea 	mov	r1, #936	; 0x3a8
        31cec4:	e2411903 	sub	r1, r1, #49152	; 0xc000
        31cec8:	eb6318b3 	bl	1be319c <$Throw>
        31cecc:	e1a02005 	mov	r2, r5
        31ced0:	e1a01007 	mov	r1, r7
        31ced4:	e1a00004 	mov	r0, r4
        31ced8:	eb5c9cca 	bl	1a44208 <TObjectHeap::$SplitBlock(ObjHeader *, long)>
        31cedc:	e5970000 	ldr	r0, [r7]
        31cee0:	e1a00420 	mov	r0, r0, lsr #8
        31cee4:	e2800003 	add	r0, r0, #3	; 0x3
        31cee8:	e3c00003 	bic	r0, r0, #3	; 0x3
        31ceec:	e0800007 	add	r0, r0, r7
        31cef0:	e5840010 	str	r0, [r4, #16]	; fField16
        31cef4:	e594100c 	ldr	r1, [r4, #12]	; fField12
        31cef8:	e1500001 	cmp	r0, r1
        31cefc:	25940008 	ldrcs	r0, [r4, #8]	; fField8
        31cf00:	25a40010 	strcs	r0, [r4, #16]!	; fField16
        31cf04:	e5970000 	ldr	r0, [r7]
        31cf08:	e3c000ff 	bic	r0, r0, #255	; 0xff
        31cf0c:	e1800006 	orr	r0, r0, r6
        31cf10:	e5870000 	str	r0, [r7]
        31cf14:	e3a00000 	mov	r0, #0	; 0x0
        31cf18:	e5870004 	str	r0, [r7, #4]	; fField4
        31cf1c:	e1a00007 	mov	r0, r7
        31cf20:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31cf24:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TObjectHeap::KillBlock(char *)
 * Address: 0031cf28
 */
TObjectHeap::KillBlock(char *) {
    /*
        31cf28:	e5912000 	ldr	r2, [r1]
        31cf2c:	e1a02422 	mov	r2, r2, lsr #8
        31cf30:	e2822003 	add	r2, r2, #3	; 0x3
        31cf34:	e3c22003 	bic	r2, r2, #3	; 0x3
        31cf38:	ea5c9064 	b	1a410d0 <TObjectHeap::$MakeFreeBlock(ObjHeader *, long)>
    */
}

/**
 * Symbol: TObjectHeap::ResizeBlock(ObjHeader *, long)
 * Address: 0031cf74
 */
TObjectHeap::ResizeBlock(ObjHeader *, long) {
    /*
        31cf74:	e1a0c00d 	mov	ip, sp
        31cf78:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        31cf7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        31cf80:	e1a05000 	mov	r5, r0
        31cf84:	e1a04001 	mov	r4, r1
        31cf88:	e1a06002 	mov	r6, r2
        31cf8c:	e5911000 	ldr	r1, [r1]
        31cf90:	e1a00421 	mov	r0, r1, lsr #8
        31cf94:	e2800003 	add	r0, r0, #3	; 0x3
        31cf98:	e3c00003 	bic	r0, r0, #3	; 0x3
        31cf9c:	e1a08000 	mov	r8, r0
        31cfa0:	e2822003 	add	r2, r2, #3	; 0x3
        31cfa4:	e3c22003 	bic	r2, r2, #3	; 0x3
        31cfa8:	e0429000 	sub	r9, r2, r0
        31cfac:	e3590000 	cmp	r9, #0	; 0x0
        31cfb0:	020100ff 	andeq	r0, r1, #255	; 0xff
        31cfb4:	0a000015 	beq	31d010 <TObjectHeap::ResizeBlock(ObjHeader *, long)+0x9c>
        31cfb8:	aa000004 	bge	31cfd0 <TObjectHeap::ResizeBlock(ObjHeader *, long)+0x5c>
        31cfbc:	e1a02006 	mov	r2, r6
        31cfc0:	e1a01004 	mov	r1, r4
        31cfc4:	e1a00005 	mov	r0, r5
        31cfc8:	eb5c9c8e 	bl	1a44208 <TObjectHeap::$SplitBlock(ObjHeader *, long)>
        31cfcc:	ea000036 	b	31d0ac <TObjectHeap::ResizeBlock(ObjHeader *, long)+0x138>
        31cfd0:	e0807004 	add	r7, r0, r4
        31cfd4:	e595000c 	ldr	r0, [r5, #12]	; fField12
        31cfd8:	e1500007 	cmp	r0, r7
        31cfdc:	9a00000e 	bls	31d01c <TObjectHeap::ResizeBlock(ObjHeader *, long)+0xa8>
        31cfe0:	e1a02006 	mov	r2, r6
        31cfe4:	e1a01007 	mov	r1, r7
        31cfe8:	e1a00005 	mov	r0, r5
        31cfec:	eb5c83ab 	bl	1a3dea0 <TObjectHeap::$CoalesceFreeBlocks(ObjHeader *, long)>
        31cff0:	e1500009 	cmp	r0, r9
        31cff4:	ba000008 	blt	31d01c <TObjectHeap::ResizeBlock(ObjHeader *, long)+0xa8>
        31cff8:	e1a02009 	mov	r2, r9
        31cffc:	e1a01007 	mov	r1, r7
        31d000:	e1a00005 	mov	r0, r5
        31d004:	eb5c9c7f 	bl	1a44208 <TObjectHeap::$SplitBlock(ObjHeader *, long)>
        31d008:	e5940000 	ldr	r0, [r4]
        31d00c:	e20000ff 	and	r0, r0, #255	; 0xff
        31d010:	e1800406 	orr	r0, r0, r6, lsl #8
        31d014:	e5840000 	str	r0, [r4]
        31d018:	ea000023 	b	31d0ac <TObjectHeap::ResizeBlock(ObjHeader *, long)+0x138>
        31d01c:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d020:	e5940000 	ldr	r0, [r4]
        31d024:	e3100010 	tst	r0, #16	; 0x10
        31d028:	e2840001 	add	r0, r4, #1	; 0x1
        31d02c:	1a000015 	bne	31d088 <TObjectHeap::ResizeBlock(ObjHeader *, long)+0x114>
        31d030:	e585001c 	str	r0, [r5, #28]	; fField28
        31d034:	e5940000 	ldr	r0, [r4]
        31d038:	e20020ff 	and	r2, r0, #255	; 0xff
        31d03c:	e1a01006 	mov	r1, r6
        31d040:	e1a00005 	mov	r0, r5
        31d044:	eb5c7f7e 	bl	1a3ce44 <TObjectHeap::$AllocateBlock(long, unsigned long)>
        31d048:	e1a07000 	mov	r7, r0
        31d04c:	e595001c 	ldr	r0, [r5, #28]	; fField28
        31d050:	e2404001 	sub	r4, r0, #1	; 0x1
        31d054:	e3a00002 	mov	r0, #2	; 0x2
        31d058:	e1560008 	cmp	r6, r8
        31d05c:	e585001c 	str	r0, [r5, #28]	; fField28
        31d060:	c1a06008 	movgt	r6, r8
        31d064:	e2462008 	sub	r2, r6, #8	; 0x8
        31d068:	e2871008 	add	r1, r7, #8	; 0x8
        31d06c:	e2840008 	add	r0, r4, #8	; 0x8
        31d070:	eb6307b7 	bl	1bdef54 <$BlockMove>
        31d074:	e1a01004 	mov	r1, r4
        31d078:	e1a00005 	mov	r0, r5
        31d07c:	eb5c9006 	bl	1a4109c <TObjectHeap::$KillBlock(char *)>
        31d080:	e1a04007 	mov	r4, r7
        31d084:	ea000007 	b	31d0a8 <TObjectHeap::ResizeBlock(ObjHeader *, long)+0x134>
        31d088:	eb62942f 	bl	1bc214c <$AllocateRefHandle(long)>
        31d08c:	e58d0000 	str	r0, [sp]
        31d090:	e1a0100d 	mov	r1, sp
        31d094:	e3a00fe9 	mov	r0, #932	; 0x3a4
        31d098:	e2400903 	sub	r0, r0, #49152	; 0xc000
        31d09c:	eb5c9c64 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31d0a0:	e59d0000 	ldr	r0, [sp]
        31d0a4:	eb629844 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d0a8:	e28dd004 	add	sp, sp, #4	; 0x4
        31d0ac:	e1a00004 	mov	r0, r4
        31d0b0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::BlockStatistics(ObjHeader *, unsigned long *, unsigned char *)
 * Address: 0031d0b4
 */
TObjectHeap::BlockStatistics(ObjHeader *, unsigned long *, unsigned char *) {
    /*
        31d0b4:	e3310000 	teq	r1, #0	; 0x0
        31d0b8:	05901008 	ldreq	r1, [r0, #8]	; fField8
        31d0bc:	0a000004 	beq	31d0d4 <TObjectHeap::BlockStatistics(ObjHeader *, unsigned long *, unsigned char *)+0x20>
        31d0c0:	e591c000 	ldr	ip, [r1]
        31d0c4:	e1a0c42c 	mov	ip, ip, lsr #8
        31d0c8:	e28cc003 	add	ip, ip, #3	; 0x3
        31d0cc:	e3ccc003 	bic	ip, ip, #3	; 0x3
        31d0d0:	e08c1001 	add	r1, ip, r1
        31d0d4:	e3310000 	teq	r1, #0	; 0x0
        31d0d8:	0a00000c 	beq	31d110 <TObjectHeap::BlockStatistics(ObjHeader *, unsigned long *, unsigned char *)+0x5c>
        31d0dc:	e590000c 	ldr	r0, [r0, #12]	; fField12
        31d0e0:	e1500001 	cmp	r0, r1
        31d0e4:	9a000009 	bls	31d110 <TObjectHeap::BlockStatistics(ObjHeader *, unsigned long *, unsigned char *)+0x5c>
        31d0e8:	e5910000 	ldr	r0, [r1]
        31d0ec:	e2100004 	ands	r0, r0, #4	; 0x4
        31d0f0:	13a00001 	movne	r0, #1	; 0x1
        31d0f4:	e5c30000 	strb	r0, [r3]
        31d0f8:	e5910000 	ldr	r0, [r1]
        31d0fc:	e1a00420 	mov	r0, r0, lsr #8
        31d100:	e2800003 	add	r0, r0, #3	; 0x3
        31d104:	e3c00003 	bic	r0, r0, #3	; 0x3
        31d108:	e5820000 	str	r0, [r2]
        31d10c:	ea000000 	b	31d114 <TObjectHeap::BlockStatistics(ObjHeader *, unsigned long *, unsigned char *)+0x60>
        31d110:	e3a01000 	mov	r1, #0	; 0x0
        31d114:	e1a00001 	mov	r0, r1
        31d118:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TObjectHeap::Statistics(unsigned long *, unsigned long *)
 * Address: 0031d11c
 */
TObjectHeap::Statistics(unsigned long *, unsigned long *) {
    /*
        31d11c:	e1a0c00d 	mov	ip, sp
        31d120:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31d124:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d128:	e1a06000 	mov	r6, r0
        31d12c:	e1a05001 	mov	r5, r1
        31d130:	e1a04002 	mov	r4, r2
        31d134:	e3a00000 	mov	r0, #0	; 0x0
        31d138:	e5810000 	str	r0, [r1]
        31d13c:	e5820000 	str	r0, [r2]
        31d140:	e24dd008 	sub	sp, sp, #8	; 0x8
        31d144:	e3a01000 	mov	r1, #0	; 0x0
        31d148:	e58d1004 	str	r1, [sp, #4]	; fField4
        31d14c:	e5cd0000 	strb	r0, [sp]
        31d150:	e1a0300d 	mov	r3, sp
        31d154:	e28d2004 	add	r2, sp, #4	; 0x4
        31d158:	e1a00006 	mov	r0, r6
        31d15c:	eb5cd1dd 	bl	1a518d8 <TObjectHeap::$BlockStatistics(ObjHeader *, unsigned long *, unsigned char *)>
        31d160:	e1b01000 	movs	r1, r0
        31d164:	0a000010 	beq	31d1ac <TObjectHeap::Statistics(unsigned long *, unsigned long *)+0x90>
        31d168:	e5dd0000 	ldrb	r0, [sp]
        31d16c:	e3300000 	teq	r0, #0	; 0x0
        31d170:	0a000007 	beq	31d194 <TObjectHeap::Statistics(unsigned long *, unsigned long *)+0x78>
        31d174:	e5950000 	ldr	r0, [r5]
        31d178:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        31d17c:	e0800002 	add	r0, r0, r2
        31d180:	e5850000 	str	r0, [r5]
        31d184:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        31d188:	e5942000 	ldr	r2, [r4]
        31d18c:	e1500002 	cmp	r0, r2
        31d190:	85840000 	strhi	r0, [r4]
        31d194:	e1a0300d 	mov	r3, sp
        31d198:	e28d2004 	add	r2, sp, #4	; 0x4
        31d19c:	e1a00006 	mov	r0, r6
        31d1a0:	eb5cd1cc 	bl	1a518d8 <TObjectHeap::$BlockStatistics(ObjHeader *, unsigned long *, unsigned char *)>
        31d1a4:	e1b01000 	movs	r1, r0
        31d1a8:	1affffee 	bne	31d168 <TObjectHeap::Statistics(unsigned long *, unsigned long *)+0x4c>
        31d1ac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::ClearRefHandles(void)
 * Address: 0031d2f4
 */
TObjectHeap::ClearRefHandles(void) {
    /*
        31d2f4:	e1a0c00d 	mov	ip, sp
        31d2f8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        31d2fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d300:	e1a04000 	mov	r4, r0
        31d304:	e5900014 	ldr	r0, [r0, #20]	; fField20
        31d308:	e5901000 	ldr	r1, [r0]
        31d30c:	e3e00007 	mvn	r0, #7	; 0x7
        31d310:	e0800421 	add	r0, r0, r1, lsr #8
        31d314:	e1a001a0 	mov	r0, r0, lsr #3
        31d318:	e59f1058 	ldr	r1, [pc, #58]	; 31d378 <TObjectHeap::ClearRefHandles(void)+0x84>
        31d31c:	e5911018 	ldr	r1, [r1, #24]	; fField24
        31d320:	e1a08841 	mov	r8, r1, asr #16
        31d324:	e1a07801 	mov	r7, r1, lsl #16
        31d328:	e1a07827 	mov	r7, r7, lsr #16
        31d32c:	e3a05000 	mov	r5, #0	; 0x0
        31d330:	e2406001 	sub	r6, r0, #1	; 0x1
        31d334:	e3560000 	cmp	r6, #0	; 0x0
        31d338:	d91ba9f0 	ldmledb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        31d33c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        31d340:	e0801185 	add	r1, r0, r5, lsl #3
        31d344:	e591000c 	ldr	r0, [r1, #12]	; fField12
        31d348:	e1b00140 	movs	r0, r0, asr #2
        31d34c:	0a000005 	beq	31d368 <TObjectHeap::ClearRefHandles(void)+0x74>
        31d350:	e1380840 	teq	r8, r0, asr #16
        31d354:	1a000003 	bne	31d368 <TObjectHeap::ClearRefHandles(void)+0x74>
        31d358:	e1a00800 	mov	r0, r0, lsl #16
        31d35c:	e1570820 	cmp	r7, r0, lsr #16
        31d360:	b2810008 	addlt	r0, r1, #8	; 0x8
        31d364:	bb629794 	bllt	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d368:	e2855001 	add	r5, r5, #1	; 0x1
        31d36c:	e1560005 	cmp	r6, r5
        31d370:	cafffff1 	bgt	31d33c <TObjectHeap::ClearRefHandles(void)+0x48>
        31d374:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        31d378:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: TObjectHeap::AllocateObject(long, unsigned long)
 * Address: 0031d37c
 */
TObjectHeap::AllocateObject(long, unsigned long) {
    /*
        31d37c:	e1a0c00d 	mov	ip, sp
        31d380:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31d384:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d388:	e1a04001 	mov	r4, r1
        31d38c:	e1a05002 	mov	r5, r2
        31d390:	eb5c7eab 	bl	1a3ce44 <TObjectHeap::$AllocateBlock(long, unsigned long)>
        31d394:	e1a06000 	mov	r6, r0
        31d398:	e3a00002 	mov	r0, #2	; 0x2
        31d39c:	e3150001 	tst	r5, #1	; 0x1
        31d3a0:	e5860008 	str	r0, [r6, #8]	; fField8
        31d3a4:	0a00000b 	beq	31d3d8 <TObjectHeap::AllocateObject(long, unsigned long)+0x5c>
        31d3a8:	e2542008 	subs	r2, r4, #8	; 0x8
        31d3ac:	42822003 	addmi	r2, r2, #3	; 0x3
        31d3b0:	e1a02142 	mov	r2, r2, asr #2
        31d3b4:	e3a01001 	mov	r1, #1	; 0x1
        31d3b8:	e3520001 	cmp	r2, #1	; 0x1
        31d3bc:	da00000b 	ble	31d3f0 <TObjectHeap::AllocateObject(long, unsigned long)+0x74>
        31d3c0:	e0863101 	add	r3, r6, r1, lsl #2
        31d3c4:	e2811001 	add	r1, r1, #1	; 0x1
        31d3c8:	e1510002 	cmp	r1, r2
        31d3cc:	e5a30008 	str	r0, [r3, #8]!	; fField8
        31d3d0:	bafffffa 	blt	31d3c0 <TObjectHeap::AllocateObject(long, unsigned long)+0x44>
        31d3d4:	ea000005 	b	31d3f0 <TObjectHeap::AllocateObject(long, unsigned long)+0x74>
        31d3d8:	e354000c 	cmp	r4, #12	; 0xc
        31d3dc:	da000003 	ble	31d3f0 <TObjectHeap::AllocateObject(long, unsigned long)+0x74>
        31d3e0:	e244200c 	sub	r2, r4, #12	; 0xc
        31d3e4:	e286000c 	add	r0, r6, #12	; 0xc
        31d3e8:	e3a01000 	mov	r1, #0	; 0x0
        31d3ec:	eb625d99 	bl	1bb4a58 <$memset>
        31d3f0:	e2860001 	add	r0, r6, #1	; 0x1
        31d3f4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::ResizeObject(RefVar const &, long)
 * Address: 0031d430
 */
TObjectHeap::ResizeObject(RefVar const &, long) {
    /*
        31d430:	e1a0c00d 	mov	ip, sp
        31d434:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31d438:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d43c:	e1a05000 	mov	r5, r0
        31d440:	e1a04001 	mov	r4, r1
        31d444:	e1a06002 	mov	r6, r2
        31d448:	e5910000 	ldr	r0, [r1]
        31d44c:	e5900000 	ldr	r0, [r0]
        31d450:	eb629fa7 	bl	1bc52f4 <$ObjectPtr(long)>
        31d454:	e1a01000 	mov	r1, r0
        31d458:	e5900000 	ldr	r0, [r0]
        31d45c:	e1360420 	teq	r6, r0, lsr #8
        31d460:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31d464:	e1a02006 	mov	r2, r6
        31d468:	e1a00005 	mov	r0, r5
        31d46c:	eb5c9749 	bl	1a43198 <TObjectHeap::$ResizeBlock(ObjHeader *, long)>
        31d470:	e1a07000 	mov	r7, r0
        31d474:	e5940000 	ldr	r0, [r4]
        31d478:	e5900000 	ldr	r0, [r0]
        31d47c:	eb629f9c 	bl	1bc52f4 <$ObjectPtr(long)>
        31d480:	e1a06000 	mov	r6, r0
        31d484:	e1300007 	teq	r0, r7
        31d488:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31d48c:	e1a01006 	mov	r1, r6
        31d490:	e1a00005 	mov	r0, r5
        31d494:	e3a0200c 	mov	r2, #12	; 0xc
        31d498:	eb5c9b5a 	bl	1a44208 <TObjectHeap::$SplitBlock(ObjHeader *, long)>
        31d49c:	e5960000 	ldr	r0, [r6]
        31d4a0:	e3c000ff 	bic	r0, r0, #255	; 0xff
        31d4a4:	e3800020 	orr	r0, r0, #32	; 0x20
        31d4a8:	e5860000 	str	r0, [r6]
        31d4ac:	e2870001 	add	r0, r7, #1	; 0x1
        31d4b0:	e5a60008 	str	r0, [r6, #8]!	; fField8
        31d4b4:	e5940000 	ldr	r0, [r4]
        31d4b8:	e5901000 	ldr	r1, [r0]
        31d4bc:	e59f000c 	ldr	r0, [pc, #c]	; 31d4d0 <TObjectHeap::ResizeObject(RefVar const &, long)+0xa0>
        31d4c0:	e5902004 	ldr	r2, [r0, #4]	; fField4
        31d4c4:	e1310002 	teq	r1, r2
        31d4c8:	05a07008 	streq	r7, [r0, #8]!	; fField8
        31d4cc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31d4d0:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: TObjectHeap::ReplaceObject(long, long)
 * Address: 0031d548
 */
TObjectHeap::ReplaceObject(long, long) {
    /*
        31d548:	e1a0c00d 	mov	ip, sp
        31d54c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31d550:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d554:	e1a06000 	mov	r6, r0
        31d558:	e1a04001 	mov	r4, r1
        31d55c:	e1a05002 	mov	r5, r2
        31d560:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d564:	e3110001 	tst	r1, #1	; 0x1
        31d568:	e3a070ed 	mov	r7, #237	; 0xed
        31d56c:	e2477cbe 	sub	r7, r7, #48640	; 0xbe00
        31d570:	1a000007 	bne	31d594 <TObjectHeap::ReplaceObject(long, long)+0x4c>
        31d574:	e1a00004 	mov	r0, r4
        31d578:	eb6292f3 	bl	1bc214c <$AllocateRefHandle(long)>
        31d57c:	e58d0000 	str	r0, [sp]
        31d580:	e1a0100d 	mov	r1, sp
        31d584:	e1a00007 	mov	r0, r7
        31d588:	eb63abb3 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        31d58c:	e59d0000 	ldr	r0, [sp]
        31d590:	eb629709 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d594:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d598:	e3150001 	tst	r5, #1	; 0x1
        31d59c:	1a000007 	bne	31d5c0 <TObjectHeap::ReplaceObject(long, long)+0x78>
        31d5a0:	e1a00005 	mov	r0, r5
        31d5a4:	eb6292e8 	bl	1bc214c <$AllocateRefHandle(long)>
        31d5a8:	e58d0000 	str	r0, [sp]
        31d5ac:	e1a0100d 	mov	r1, sp
        31d5b0:	e1a00007 	mov	r0, r7
        31d5b4:	eb63aba8 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        31d5b8:	e59d0000 	ldr	r0, [sp]
        31d5bc:	eb6296fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d5c0:	e1340005 	teq	r4, r5
        31d5c4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31d5c8:	e1a00004 	mov	r0, r4
        31d5cc:	eb5c92cf 	bl	1a42110 <$NoFaultObjectPtr(long)>
        31d5d0:	e1a07000 	mov	r7, r0
        31d5d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d5d8:	e5900000 	ldr	r0, [r0]
        31d5dc:	e2000040 	and	r0, r0, #64	; 0x40
        31d5e0:	e3300040 	teq	r0, #64	; 0x40
        31d5e4:	1a000008 	bne	31d60c <TObjectHeap::ReplaceObject(long, long)+0xc4>
        31d5e8:	e1a00004 	mov	r0, r4
        31d5ec:	eb6292d6 	bl	1bc214c <$AllocateRefHandle(long)>
        31d5f0:	e58d0000 	str	r0, [sp]
        31d5f4:	e1a0100d 	mov	r1, sp
        31d5f8:	e3a000aa 	mov	r0, #170	; 0xaa
        31d5fc:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        31d600:	eb5c9b0b 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31d604:	e59d0000 	ldr	r0, [sp]
        31d608:	eb6296eb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d60c:	e1a01007 	mov	r1, r7
        31d610:	e1a00006 	mov	r0, r6
        31d614:	e3a0200c 	mov	r2, #12	; 0xc
        31d618:	eb5c9afa 	bl	1a44208 <TObjectHeap::$SplitBlock(ObjHeader *, long)>
        31d61c:	e5970000 	ldr	r0, [r7]
        31d620:	e3c000ff 	bic	r0, r0, #255	; 0xff
        31d624:	e3800020 	orr	r0, r0, #32	; 0x20
        31d628:	e4870008 	str	r0, [r7], #8	; fField8
        31d62c:	e5875000 	str	r5, [r7]
        31d630:	e59f0020 	ldr	r0, [pc, #20]	; 31d658 <TObjectHeap::ReplaceObject(long, long)+0x110>	; fField20
        31d634:	e3a01000 	mov	r1, #0	; 0x0
        31d638:	e5902004 	ldr	r2, [r0, #4]	; fField4
        31d63c:	e1340002 	teq	r4, r2
        31d640:	05801004 	streq	r1, [r0, #4]	; fField4
        31d644:	e590200c 	ldr	r2, [r0, #12]	; fField12
        31d648:	e1340002 	teq	r4, r2
        31d64c:	05a0100c 	streq	r1, [r0, #12]!	; fField12
        31d650:	eb5ce110 	bl	1a55a98 <$ICacheClear(void)>
        31d654:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31d658:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: TObjectHeap::AllocateBinary(RefVar const &, long)
 * Address: 0031d65c
 */
TObjectHeap::AllocateBinary(RefVar const &, long) {
    /*
        31d65c:	e1a0c00d 	mov	ip, sp
        31d660:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31d664:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d668:	e1a06000 	mov	r6, r0
        31d66c:	e1a05001 	mov	r5, r1
        31d670:	e1b04002 	movs	r4, r2
        31d674:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d678:	e1a07102 	mov	r7, r2, lsl #2
        31d67c:	5a000008 	bpl	31d6a4 <TObjectHeap::AllocateBinary(RefVar const &, long)+0x48>
        31d680:	e1a00007 	mov	r0, r7
        31d684:	eb6292b0 	bl	1bc214c <$AllocateRefHandle(long)>
        31d688:	e58d0000 	str	r0, [sp]
        31d68c:	e1a0100d 	mov	r1, sp
        31d690:	e3a000a6 	mov	r0, #166	; 0xa6
        31d694:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        31d698:	eb5c9ae5 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31d69c:	e59d0000 	ldr	r0, [sp]
        31d6a0:	eb6296c5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d6a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d6a8:	e254c8ff 	subs	ip, r4, #16711680	; 0xff0000
        31d6ac:	a25cccff 	subges	ip, ip, #65280	; 0xff00
        31d6b0:	a35c00f3 	cmpge	ip, #243	; 0xf3
        31d6b4:	da000008 	ble	31d6dc <TObjectHeap::AllocateBinary(RefVar const &, long)+0x80>
        31d6b8:	e1a00007 	mov	r0, r7
        31d6bc:	eb6292a2 	bl	1bc214c <$AllocateRefHandle(long)>
        31d6c0:	e58d0000 	str	r0, [sp]
        31d6c4:	e1a0100d 	mov	r1, sp
        31d6c8:	e3a000a5 	mov	r0, #165	; 0xa5
        31d6cc:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        31d6d0:	eb5c9ad7 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31d6d4:	e59d0000 	ldr	r0, [sp]
        31d6d8:	eb6296b7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d6dc:	e284100c 	add	r1, r4, #12	; 0xc
        31d6e0:	e1a00006 	mov	r0, r6
        31d6e4:	e3a02000 	mov	r2, #0	; 0x0
        31d6e8:	eb5c7dd9 	bl	1a3ce54 <TObjectHeap::$AllocateObject(long, unsigned long)>
        31d6ec:	e5951000 	ldr	r1, [r5]
        31d6f0:	e5911000 	ldr	r1, [r1]
        31d6f4:	e2402001 	sub	r2, r0, #1	; 0x1
        31d6f8:	e5a21008 	str	r1, [r2, #8]!	; fField8
        31d6fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::AllocateIndirectBinary(RefVar const &, long)
 * Address: 0031d700
 */
TObjectHeap::AllocateIndirectBinary(RefVar const &, long) {
    /*
        31d700:	e1a0c00d 	mov	ip, sp
        31d704:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        31d708:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d70c:	e1a04001 	mov	r4, r1
        31d710:	e2821010 	add	r1, r2, #16	; 0x10
        31d714:	e3a02002 	mov	r2, #2	; 0x2
        31d718:	eb5c7dcd 	bl	1a3ce54 <TObjectHeap::$AllocateObject(long, unsigned long)>
        31d71c:	e5941000 	ldr	r1, [r4]
        31d720:	e5911000 	ldr	r1, [r1]
        31d724:	e2402001 	sub	r2, r0, #1	; 0x1
        31d728:	e5a21008 	str	r1, [r2, #8]!	; fField8
        31d72c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::AllocateArray(RefVar const &, long)
 * Address: 0031d730
 */
TObjectHeap::AllocateArray(RefVar const &, long) {
    /*
        31d730:	e1a0c00d 	mov	ip, sp
        31d734:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31d738:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d73c:	e1a06000 	mov	r6, r0
        31d740:	e1a05001 	mov	r5, r1
        31d744:	e1b04002 	movs	r4, r2
        31d748:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d74c:	e1a07102 	mov	r7, r2, lsl #2
        31d750:	5a000008 	bpl	31d778 <TObjectHeap::AllocateArray(RefVar const &, long)+0x48>
        31d754:	e1a00007 	mov	r0, r7
        31d758:	eb62927b 	bl	1bc214c <$AllocateRefHandle(long)>
        31d75c:	e58d0000 	str	r0, [sp]
        31d760:	e1a0100d 	mov	r1, sp
        31d764:	e3a000a6 	mov	r0, #166	; 0xa6
        31d768:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        31d76c:	eb5c9ab0 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31d770:	e59d0000 	ldr	r0, [sp]
        31d774:	eb629690 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d778:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d77c:	e254c9ff 	subs	ip, r4, #4177920	; 0x3fc000
        31d780:	a25ccdff 	subges	ip, ip, #16320	; 0x3fc0
        31d784:	a35c003c 	cmpge	ip, #60	; 0x3c
        31d788:	da000008 	ble	31d7b0 <TObjectHeap::AllocateArray(RefVar const &, long)+0x80>
        31d78c:	e1a00007 	mov	r0, r7
        31d790:	eb62926d 	bl	1bc214c <$AllocateRefHandle(long)>
        31d794:	e58d0000 	str	r0, [sp]
        31d798:	e1a0100d 	mov	r1, sp
        31d79c:	e3a000a5 	mov	r0, #165	; 0xa5
        31d7a0:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        31d7a4:	eb5c9aa2 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31d7a8:	e59d0000 	ldr	r0, [sp]
        31d7ac:	eb629682 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d7b0:	e3a0000c 	mov	r0, #12	; 0xc
        31d7b4:	e0801104 	add	r1, r0, r4, lsl #2
        31d7b8:	e1a00006 	mov	r0, r6
        31d7bc:	e3a02001 	mov	r2, #1	; 0x1
        31d7c0:	eb5c7da3 	bl	1a3ce54 <TObjectHeap::$AllocateObject(long, unsigned long)>
        31d7c4:	e5951000 	ldr	r1, [r5]
        31d7c8:	e5911000 	ldr	r1, [r1]
        31d7cc:	e2402001 	sub	r2, r0, #1	; 0x1
        31d7d0:	e5a21008 	str	r1, [r2, #8]!	; fField8
        31d7d4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::AllocateFrame(void)
 * Address: 0031d7d8
 */
TObjectHeap::AllocateFrame(void) {
    /*
        31d7d8:	e1a0c00d 	mov	ip, sp
        31d7dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31d7e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d7e4:	e1a04000 	mov	r4, r0
        31d7e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d7ec:	e3a02003 	mov	r2, #3	; 0x3
        31d7f0:	e3a0100c 	mov	r1, #12	; 0xc
        31d7f4:	eb5c7d96 	bl	1a3ce54 <TObjectHeap::$AllocateObject(long, unsigned long)>
        31d7f8:	eb629253 	bl	1bc214c <$AllocateRefHandle(long)>
        31d7fc:	e1a05000 	mov	r5, r0
        31d800:	e3a00002 	mov	r0, #2	; 0x2
        31d804:	eb629250 	bl	1bc214c <$AllocateRefHandle(long)>
        31d808:	e58d0000 	str	r0, [sp]
        31d80c:	e1a0100d 	mov	r1, sp
        31d810:	e1a00004 	mov	r0, r4
        31d814:	e3a02000 	mov	r2, #0	; 0x0
        31d818:	eb5c7d8c 	bl	1a3ce50 <TObjectHeap::$AllocateMap(RefVar const &, long)>
        31d81c:	e1a04000 	mov	r4, r0
        31d820:	e59d0000 	ldr	r0, [sp]
        31d824:	eb629664 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d828:	e5950000 	ldr	r0, [r5]
        31d82c:	e2400001 	sub	r0, r0, #1	; 0x1
        31d830:	e5a04008 	str	r4, [r0, #8]!	; fField8
        31d834:	e5954000 	ldr	r4, [r5]
        31d838:	e1a00005 	mov	r0, r5
        31d83c:	eb62965e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d840:	e1a00004 	mov	r0, r4
        31d844:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::AllocateFrameWithMap(RefVar const &)
 * Address: 0031d848
 */
TObjectHeap::AllocateFrameWithMap(RefVar const &) {
    /*
        31d848:	e1a0c00d 	mov	ip, sp
        31d84c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31d850:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d854:	e1a05000 	mov	r5, r0
        31d858:	e1a04001 	mov	r4, r1
        31d85c:	e1a00001 	mov	r0, r1
        31d860:	eb5c8193 	bl	1a3deb4 <$ComputeMapSize(RefVar const &)>
        31d864:	e3a0100c 	mov	r1, #12	; 0xc
        31d868:	e0811100 	add	r1, r1, r0, lsl #2
        31d86c:	e1a00005 	mov	r0, r5
        31d870:	e3a02003 	mov	r2, #3	; 0x3
        31d874:	eb5c7d76 	bl	1a3ce54 <TObjectHeap::$AllocateObject(long, unsigned long)>
        31d878:	e5941000 	ldr	r1, [r4]
        31d87c:	e5911000 	ldr	r1, [r1]
        31d880:	e2402001 	sub	r2, r0, #1	; 0x1
        31d884:	e5a21008 	str	r1, [r2, #8]!	; fField8
        31d888:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::AllocateMap(RefVar const &, long)
 * Address: 0031d88c
 */
TObjectHeap::AllocateMap(RefVar const &, long) {
    /*
        31d88c:	e1a0c00d 	mov	ip, sp
        31d890:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        31d894:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d898:	e1a04001 	mov	r4, r1
        31d89c:	e3a01010 	mov	r1, #16	; 0x10
        31d8a0:	e0811102 	add	r1, r1, r2, lsl #2
        31d8a4:	e3a02001 	mov	r2, #1	; 0x1
        31d8a8:	eb5c7d69 	bl	1a3ce54 <TObjectHeap::$AllocateObject(long, unsigned long)>
        31d8ac:	e2401001 	sub	r1, r0, #1	; 0x1
        31d8b0:	e3a02000 	mov	r2, #0	; 0x0
        31d8b4:	e5812008 	str	r2, [r1, #8]	; fField8
        31d8b8:	e5942000 	ldr	r2, [r4]
        31d8bc:	e5922000 	ldr	r2, [r2]
        31d8c0:	e5a1200c 	str	r2, [r1, #12]!	; fField12
        31d8c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::SetLength(RefVar const &, long)
 * Address: 0031e378
 */
TObjectHeap::SetLength(RefVar const &, long) {
    /*
        31e378:	e1a0c00d 	mov	ip, sp
        31e37c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        31e380:	e24cb004 	sub	fp, ip, #4	; 0x4
        31e384:	e1a06000 	mov	r6, r0
        31e388:	e1a05001 	mov	r5, r1
        31e38c:	e1a04002 	mov	r4, r2
        31e390:	e1a00001 	mov	r0, r1
        31e394:	eb63557d 	bl	1bf3990 <$IsFrame(RefVar const &)>
        31e398:	e3300000 	teq	r0, #0	; 0x0
        31e39c:	11a01005 	movne	r1, r5
        31e3a0:	13a00e2e 	movne	r0, #736	; 0x2e0
        31e3a4:	12400903 	subne	r0, r0, #49152	; 0xc000
        31e3a8:	1b63a82b 	blne	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        31e3ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        31e3b0:	e1a07104 	mov	r7, r4, lsl #2
        31e3b4:	e3540000 	cmp	r4, #0	; 0x0
        31e3b8:	aa000008 	bge	31e3e0 <TObjectHeap::SetLength(RefVar const &, long)+0x68>
        31e3bc:	e1a00007 	mov	r0, r7
        31e3c0:	eb628f61 	bl	1bc214c <$AllocateRefHandle(long)>
        31e3c4:	e58d0000 	str	r0, [sp]
        31e3c8:	e1a0100d 	mov	r1, sp
        31e3cc:	e3a000a6 	mov	r0, #166	; 0xa6
        31e3d0:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        31e3d4:	eb5c9796 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31e3d8:	e59d0000 	ldr	r0, [sp]
        31e3dc:	eb629376 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31e3e0:	e5950000 	ldr	r0, [r5]
        31e3e4:	e5900000 	ldr	r0, [r0]
        31e3e8:	eb629bc1 	bl	1bc52f4 <$ObjectPtr(long)>
        31e3ec:	e1a09000 	mov	r9, r0
        31e3f0:	e5900000 	ldr	r0, [r0]
        31e3f4:	e20080ff 	and	r8, r0, #255	; 0xff
        31e3f8:	e3180040 	tst	r8, #64	; 0x40
        31e3fc:	11a01005 	movne	r1, r5
        31e400:	13a000aa 	movne	r0, #170	; 0xaa
        31e404:	12400cbd 	subne	r0, r0, #48384	; 0xbd00
        31e408:	1b5c9789 	blne	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31e40c:	e2080003 	and	r0, r8, #3	; 0x3
        31e410:	e3300002 	teq	r0, #2	; 0x2
        31e414:	1a000005 	bne	31e430 <TObjectHeap::SetLength(RefVar const &, long)+0xb8>
        31e418:	e2890010 	add	r0, r9, #16	; 0x10
        31e41c:	e1a01004 	mov	r1, r4
        31e420:	e5b9200c 	ldr	r2, [r9, #12]!	; fField12
        31e424:	e1a0e00f 	mov	lr, pc
        31e428:	e592f008 	ldr	pc, [r2, #8]	; fField8
        31e42c:	ea000026 	b	31e4cc <TObjectHeap::SetLength(RefVar const &, long)+0x154>
        31e430:	e3180001 	tst	r8, #1	; 0x1
        31e434:	e3a080a5 	mov	r8, #165	; 0xa5
        31e438:	e2488cbd 	sub	r8, r8, #48384	; 0xbd00
        31e43c:	e24dd004 	sub	sp, sp, #4	; 0x4
        31e440:	0a000010 	beq	31e488 <TObjectHeap::SetLength(RefVar const &, long)+0x110>
        31e444:	e254c9ff 	subs	ip, r4, #4177920	; 0x3fc000
        31e448:	a25ccdff 	subges	ip, ip, #16320	; 0x3fc0
        31e44c:	a35c003c 	cmpge	ip, #60	; 0x3c
        31e450:	da000007 	ble	31e474 <TObjectHeap::SetLength(RefVar const &, long)+0xfc>
        31e454:	e1a00007 	mov	r0, r7
        31e458:	eb628f3b 	bl	1bc214c <$AllocateRefHandle(long)>
        31e45c:	e58d0000 	str	r0, [sp]
        31e460:	e1a0100d 	mov	r1, sp
        31e464:	e1a00008 	mov	r0, r8
        31e468:	eb5c9771 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31e46c:	e59d0000 	ldr	r0, [sp]
        31e470:	eb629351 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31e474:	e1a02004 	mov	r2, r4
        31e478:	e1a01005 	mov	r1, r5
        31e47c:	e1a00006 	mov	r0, r6
        31e480:	eb5ce9f4 	bl	1a58c58 <TObjectHeap::$UnsafeSetArrayLength(RefVar const &, long)>
        31e484:	ea00000f 	b	31e4c8 <TObjectHeap::SetLength(RefVar const &, long)+0x150>
        31e488:	e254c8ff 	subs	ip, r4, #16711680	; 0xff0000
        31e48c:	a25cccff 	subges	ip, ip, #65280	; 0xff00
        31e490:	a35c00f3 	cmpge	ip, #243	; 0xf3
        31e494:	da000007 	ble	31e4b8 <TObjectHeap::SetLength(RefVar const &, long)+0x140>
        31e498:	e1a00007 	mov	r0, r7
        31e49c:	eb628f2a 	bl	1bc214c <$AllocateRefHandle(long)>
        31e4a0:	e58d0000 	str	r0, [sp]
        31e4a4:	e1a0100d 	mov	r1, sp
        31e4a8:	e1a00008 	mov	r0, r8
        31e4ac:	eb5c9760 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31e4b0:	e59d0000 	ldr	r0, [sp]
        31e4b4:	eb629340 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31e4b8:	e1a02004 	mov	r2, r4
        31e4bc:	e1a01005 	mov	r1, r5
        31e4c0:	e1a00006 	mov	r0, r6
        31e4c4:	eb5ce9e4 	bl	1a58c5c <TObjectHeap::$UnsafeSetBinaryLength(RefVar const &, long)>
        31e4c8:	e28dd004 	add	sp, sp, #4	; 0x4
        31e4cc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectHeap::UnsafeSetArrayLength(RefVar const &, long)
 * Address: 0031e4d0
 */
TObjectHeap::UnsafeSetArrayLength(RefVar const &, long) {
    /*
        31e4d0:	e1a0c00d 	mov	ip, sp
        31e4d4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        31e4d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        31e4dc:	e1a06000 	mov	r6, r0
        31e4e0:	e1a04001 	mov	r4, r1
        31e4e4:	e1a05002 	mov	r5, r2
        31e4e8:	e5910000 	ldr	r0, [r1]
        31e4ec:	e5900000 	ldr	r0, [r0]
        31e4f0:	eb629b7f 	bl	1bc52f4 <$ObjectPtr(long)>
        31e4f4:	e5900000 	ldr	r0, [r0]
        31e4f8:	e1a08420 	mov	r8, r0, lsr #8
        31e4fc:	e3a0000c 	mov	r0, #12	; 0xc
        31e500:	e0807105 	add	r7, r0, r5, lsl #2
        31e504:	e1380007 	teq	r8, r7
        31e508:	0a00001b 	beq	31e57c <TObjectHeap::UnsafeSetArrayLength(RefVar const &, long)+0xac>
        31e50c:	e5940000 	ldr	r0, [r4]
        31e510:	e5900000 	ldr	r0, [r0]
        31e514:	eb629b76 	bl	1bc52f4 <$ObjectPtr(long)>
        31e518:	e5901000 	ldr	r1, [r0]
        31e51c:	e3e0000b 	mvn	r0, #11	; 0xb
        31e520:	e0909421 	adds	r9, r0, r1, lsr #8
        31e524:	42899003 	addmi	r9, r9, #3	; 0x3
        31e528:	e1a09149 	mov	r9, r9, asr #2
        31e52c:	e1a02007 	mov	r2, r7
        31e530:	e1a01004 	mov	r1, r4
        31e534:	e1a00006 	mov	r0, r6
        31e538:	eb5c9317 	bl	1a4319c <TObjectHeap::$ResizeObject(RefVar const &, long)>
        31e53c:	e5940000 	ldr	r0, [r4]
        31e540:	e5900000 	ldr	r0, [r0]
        31e544:	eb629b6a 	bl	1bc52f4 <$ObjectPtr(long)>
        31e548:	e1570008 	cmp	r7, r8
        31e54c:	da000007 	ble	31e570 <TObjectHeap::UnsafeSetArrayLength(RefVar const &, long)+0xa0>
        31e550:	e3a01002 	mov	r1, #2	; 0x2
        31e554:	e1590005 	cmp	r9, r5
        31e558:	aa000004 	bge	31e570 <TObjectHeap::UnsafeSetArrayLength(RefVar const &, long)+0xa0>
        31e55c:	e0802109 	add	r2, r0, r9, lsl #2
        31e560:	e2899001 	add	r9, r9, #1	; 0x1
        31e564:	e1590005 	cmp	r9, r5
        31e568:	e5a2100c 	str	r1, [r2, #12]!	; fField12
        31e56c:	bafffffa 	blt	31e55c <TObjectHeap::UnsafeSetArrayLength(RefVar const &, long)+0x8c>
        31e570:	e5940000 	ldr	r0, [r4]
        31e574:	e5900000 	ldr	r0, [r0]
        31e578:	eb5c7e5e 	bl	1a3def8 <$DirtyObject(long)>
        31e57c:	e3a00000 	mov	r0, #0	; 0x0
        31e580:	e59f1004 	ldr	r1, [pc, #4]	; 31e58c <TObjectHeap::UnsafeSetArrayLength(RefVar const &, long)+0xbc>	; fField4
        31e584:	e5a1000c 	str	r0, [r1, #12]!	; fField12
        31e588:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        31e58c:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: TObjectHeap::UnsafeSetBinaryLength(RefVar const &, long)
 * Address: 0031e590
 */
TObjectHeap::UnsafeSetBinaryLength(RefVar const &, long) {
    /*
        31e590:	e1a0c00d 	mov	ip, sp
        31e594:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31e598:	e24cb004 	sub	fp, ip, #4	; 0x4
        31e59c:	e1a06000 	mov	r6, r0
        31e5a0:	e1a04001 	mov	r4, r1
        31e5a4:	e1a05002 	mov	r5, r2
        31e5a8:	e5910000 	ldr	r0, [r1]
        31e5ac:	e5900000 	ldr	r0, [r0]
        31e5b0:	eb629b4f 	bl	1bc52f4 <$ObjectPtr(long)>
        31e5b4:	e5900000 	ldr	r0, [r0]
        31e5b8:	e1a07420 	mov	r7, r0, lsr #8
        31e5bc:	e285500c 	add	r5, r5, #12	; 0xc
        31e5c0:	e1370005 	teq	r7, r5
        31e5c4:	0a00000f 	beq	31e608 <TObjectHeap::UnsafeSetBinaryLength(RefVar const &, long)+0x78>
        31e5c8:	e1a02005 	mov	r2, r5
        31e5cc:	e1a01004 	mov	r1, r4
        31e5d0:	e1a00006 	mov	r0, r6
        31e5d4:	eb5c92f0 	bl	1a4319c <TObjectHeap::$ResizeObject(RefVar const &, long)>
        31e5d8:	e5940000 	ldr	r0, [r4]
        31e5dc:	e5900000 	ldr	r0, [r0]
        31e5e0:	eb629b43 	bl	1bc52f4 <$ObjectPtr(long)>
        31e5e4:	e1550007 	cmp	r5, r7
        31e5e8:	da000003 	ble	31e5fc <TObjectHeap::UnsafeSetBinaryLength(RefVar const &, long)+0x6c>
        31e5ec:	e0452007 	sub	r2, r5, r7
        31e5f0:	e0800007 	add	r0, r0, r7
        31e5f4:	e3a01000 	mov	r1, #0	; 0x0
        31e5f8:	eb625916 	bl	1bb4a58 <$memset>
        31e5fc:	e5940000 	ldr	r0, [r4]
        31e600:	e5900000 	ldr	r0, [r0]
        31e604:	eb5c7e3b 	bl	1a3def8 <$DirtyObject(long)>
        31e608:	e3a01000 	mov	r1, #0	; 0x0
        31e60c:	e59f0004 	ldr	r0, [pc, #4]	; 31e618 <TObjectHeap::UnsafeSetBinaryLength(RefVar const &, long)+0x88>	; fField4
        31e610:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        31e614:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31e618:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: TObjectHeap::Clone(RefVar const &)
 * Address: 0031f9b4
 */
TObjectHeap::Clone(RefVar const &) {
    /*
        31f9b4:	e1a0c00d 	mov	ip, sp
        31f9b8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31f9bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        31f9c0:	e1a05000 	mov	r5, r0
        31f9c4:	e1a04001 	mov	r4, r1
        31f9c8:	e5910000 	ldr	r0, [r1]
        31f9cc:	e5900000 	ldr	r0, [r0]
        31f9d0:	e3100001 	tst	r0, #1	; 0x1
        31f9d4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31f9d8:	eb629645 	bl	1bc52f4 <$ObjectPtr(long)>
        31f9dc:	e1a01000 	mov	r1, r0
        31f9e0:	e5900000 	ldr	r0, [r0]
        31f9e4:	e2006003 	and	r6, r0, #3	; 0x3
        31f9e8:	e3160001 	tst	r6, #1	; 0x1
        31f9ec:	1a000011 	bne	31fa38 <TObjectHeap::Clone(RefVar const &)+0x84>
        31f9f0:	e3160002 	tst	r6, #2	; 0x2
        31f9f4:	0a000008 	beq	31fa1c <TObjectHeap::Clone(RefVar const &)+0x68>
        31f9f8:	e5940000 	ldr	r0, [r4]
        31f9fc:	e5900000 	ldr	r0, [r0]
        31fa00:	eb62963b 	bl	1bc52f4 <$ObjectPtr(long)>
        31fa04:	e1a02000 	mov	r2, r0
        31fa08:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
        31fa0c:	e2800008 	add	r0, r0, #8	; 0x8
        31fa10:	e592200c 	ldr	r2, [r2, #12]	; fField12
        31fa14:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        31fa18:	e592f00c 	ldr	pc, [r2, #12]	; fField12
        31fa1c:	e5911008 	ldr	r1, [r1, #8]	; fField8
        31fa20:	e241ca55 	sub	ip, r1, #348160	; 0x55000
        31fa24:	e24cce55 	sub	ip, ip, #1360	; 0x550
        31fa28:	e33c0002 	teq	ip, #2	; 0x2
        31fa2c:	05940000 	ldreq	r0, [r4]
        31fa30:	05900000 	ldreq	r0, [r0]
        31fa34:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31fa38:	e1a07420 	mov	r7, r0, lsr #8
        31fa3c:	e1a02006 	mov	r2, r6
        31fa40:	e1a01007 	mov	r1, r7
        31fa44:	e1a00005 	mov	r0, r5
        31fa48:	eb5c74fd 	bl	1a3ce44 <TObjectHeap::$AllocateBlock(long, unsigned long)>
        31fa4c:	e1a05000 	mov	r5, r0
        31fa50:	e5940000 	ldr	r0, [r4]
        31fa54:	e5900000 	ldr	r0, [r0]
        31fa58:	eb629625 	bl	1bc52f4 <$ObjectPtr(long)>
        31fa5c:	e1a04000 	mov	r4, r0
        31fa60:	e2472008 	sub	r2, r7, #8	; 0x8
        31fa64:	e2851008 	add	r1, r5, #8	; 0x8
        31fa68:	e2800008 	add	r0, r0, #8	; 0x8
        31fa6c:	eb62fd38 	bl	1bdef54 <$BlockMove>
        31fa70:	e3360003 	teq	r6, #3	; 0x3
        31fa74:	1a000008 	bne	31fa9c <TObjectHeap::Clone(RefVar const &)+0xe8>
        31fa78:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        31fa7c:	eb62961c 	bl	1bc52f4 <$ObjectPtr(long)>
        31fa80:	e5901008 	ldr	r1, [r0, #8]	; fField8
        31fa84:	e3110008 	tst	r1, #8	; 0x8
        31fa88:	05902000 	ldreq	r2, [r0]
        31fa8c:	02022040 	andeq	r2, r2, #64	; 0x40
        31fa90:	03320000 	teqeq	r2, #0	; 0x0
        31fa94:	03811008 	orreq	r1, r1, #8	; 0x8
        31fa98:	05a01008 	streq	r1, [r0, #8]!	; fField8
        31fa9c:	e2850001 	add	r0, r5, #1	; 0x1
        31faa0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

