#include "include/TScheduler.h"

/**
 * Symbol: TScheduler::__ct(void)
 * Address: 001cc144
 */
TScheduler::TScheduler(void) {
    /*
        1cc144:	e1a0c00d 	mov	ip, sp
        1cc148:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1cc14c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cc150:	e1b04000 	movs	r4, r0
        1cc154:	1a000003 	bne	1cc168 <TScheduler::__ct(void)+0x24>
        1cc158:	e3a00e12 	mov	r0, #288	; 0x120
        1cc15c:	eb680975 	bl	1bce738 <$__nw(unsigned int)>
        1cc160:	e1b04000 	movs	r4, r0
        1cc164:	0a00000c 	beq	1cc19c <TScheduler::__ct(void)+0x58>
        1cc168:	e59f0034 	ldr	r0, [pc, #34]	; 1cc1a4 <TScheduler::__ct(void)+0x60>
        1cc16c:	e5840010 	str	r0, [r4, #16]
        1cc170:	e2841f47 	add	r1, r4, #284	; 0x11c
        1cc174:	e284001c 	add	r0, r4, #28	; 0x1c
        1cc178:	e59f3028 	ldr	r3, [pc, #28]	; 1cc1a8 <TScheduler::__ct(void)+0x64>
        1cc17c:	e3a02008 	mov	r2, #8	; 0x8
        1cc180:	eb60e43f 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
        1cc184:	e59f0020 	ldr	r0, [pc, #20]	; 1cc1ac <TScheduler::__ct(void)+0x68>	; fField20
        1cc188:	e5840010 	str	r0, [r4, #16]
        1cc18c:	e3a00000 	mov	r0, #0	; 0x0
        1cc190:	e5840014 	str	r0, [r4, #20]	; fField20
        1cc194:	e5840018 	str	r0, [r4, #24]	; fField24
        1cc198:	e584011c 	str	r0, [r4, #284]	; fField284
        1cc19c:	e1a00004 	mov	r0, r4
        1cc1a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1cc1a4:	0001dbc4 	andeq	sp, r1, r4, asr #23
        1cc1a8:	01aef7c4 	moveq	pc, r4, asr #15
        1cc1ac:	0001ae3c 	andeq	sl, r1, ip, lsr lr
    */
}

/**
 * Symbol: TScheduler::UpdateCurrentBucket(void)
 * Address: 001cc1b0
 */
TScheduler::UpdateCurrentBucket(void) {
    /*
        1cc1b0:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1cc1b4:	e2411001 	sub	r1, r1, #1	; 0x1
        1cc1b8:	e3510000 	cmp	r1, #0	; 0x0
        1cc1bc:	da000008 	ble	1cc1e4 <TScheduler::UpdateCurrentBucket(void)+0x34>
        1cc1c0:	e3a03001 	mov	r3, #1	; 0x1
        1cc1c4:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1cc1c8:	e1120113 	tst	r2, r3, lsl r1
        1cc1cc:	0a000001 	beq	1cc1d8 <TScheduler::UpdateCurrentBucket(void)+0x28>
        1cc1d0:	e5a01014 	str	r1, [r0, #20]!	; fField20
        1cc1d4:	e1a0f00e 	mov	pc, lr
        1cc1d8:	e2411001 	sub	r1, r1, #1	; 0x1
        1cc1dc:	e3510000 	cmp	r1, #0	; 0x0
        1cc1e0:	cafffff8 	bgt	1cc1c8 <TScheduler::UpdateCurrentBucket(void)+0x18>
        1cc1e4:	e3a01000 	mov	r1, #0	; 0x0
        1cc1e8:	eafffff8 	b	1cc1d0 <TScheduler::UpdateCurrentBucket(void)+0x20>
    */
}

/**
 * Symbol: TScheduler::Add(TTask *)
 * Address: 001cc564
 */
TScheduler::Add(TTask *) {
    /*
        1cc564:	e1a0c00d 	mov	ip, sp
        1cc568:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1cc56c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cc570:	e1a03000 	mov	r3, r0
        1cc574:	e5914080 	ldr	r4, [r1, #128]
        1cc578:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1cc57c:	e3a05001 	mov	r5, #1	; 0x1
        1cc580:	e1800415 	orr	r0, r0, r5, lsl r4
        1cc584:	e5830018 	str	r0, [r3, #24]	; fField24
        1cc588:	e5930014 	ldr	r0, [r3, #20]	; fField20
        1cc58c:	e1500004 	cmp	r0, r4
        1cc590:	31a00004 	movcc	r0, r4
        1cc594:	e5830014 	str	r0, [r3, #20]	; fField20
        1cc598:	e0830184 	add	r0, r3, r4, lsl #3
        1cc59c:	e280001c 	add	r0, r0, #28	; 0x1c
        1cc5a0:	e3a02802 	mov	r2, #131072	; 0x20000
        1cc5a4:	eb6494c4 	bl	1af18bc <TTaskQueue::$Add(TTask *, KernelObjectState, TTaskContainer *)>
        1cc5a8:	e59f0024 	ldr	r0, [pc, #24]	; 1cc5d4 <TScheduler::Add(TTask *)+0x70>	; fField24
        1cc5ac:	e5900000 	ldr	r0, [r0]
        1cc5b0:	e59f1020 	ldr	r1, [pc, #20]	; 1cc5d8 <TScheduler::Add(TTask *)+0x74>	; fField20
        1cc5b4:	e5911000 	ldr	r1, [r1]
        1cc5b8:	e1300001 	teq	r0, r1
        1cc5bc:	0b64f3c9 	bleq	1b094e8 <$WantSchedule(void)>
        1cc5c0:	e59f0014 	ldr	r0, [pc, #14]	; 1cc5dc <TScheduler::Add(TTask *)+0x78>
        1cc5c4:	e5901000 	ldr	r1, [r0]
        1cc5c8:	e1540001 	cmp	r4, r1
        1cc5cc:	25a050ac 	strcs	r5, [r0, #172]!	; fField172
        1cc5d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1cc5d4:	0c100ff8 	ldceq	15, cr0, [r0], -#992
        1cc5d8:	0c100fc4 	ldceq	15, cr0, [r0], -#784
        1cc5dc:	0c101980 	ldceq	9, cr1, [r0], -#512
    */
}

/**
 * Symbol: TScheduler::AddWhenNotCurrent(TTask *)
 * Address: 001cc5e0
 */
TScheduler::AddWhenNotCurrent(TTask *) {
    /*
        1cc5e0:	e59f200c 	ldr	r2, [pc, #c]	; 1cc5f4 <TScheduler::AddWhenNotCurrent(TTask *)+0x14>
        1cc5e4:	e5922000 	ldr	r2, [r2]
        1cc5e8:	e1310002 	teq	r1, r2
        1cc5ec:	1a6494b1 	bne	1af18b8 <TScheduler::$Add(TTask *)>
        1cc5f0:	e1a0f00e 	mov	pc, lr
        1cc5f4:	0c100ff8 	ldceq	15, cr0, [r0], -#992
    */
}

/**
 * Symbol: TScheduler::Remove(TTask *)
 * Address: 001cc5f8
 */
TScheduler::Remove(TTask *) {
    /*
        1cc5f8:	e3310000 	teq	r1, #0	; 0x0
        1cc5fc:	01a0f00e 	moveq	pc, lr
        1cc600:	e1a0c00d 	mov	ip, sp
        1cc604:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1cc608:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cc60c:	e1a04000 	mov	r4, r0
        1cc610:	e59f0024 	ldr	r0, [pc, #24]	; 1cc63c <TScheduler::Remove(TTask *)+0x44>	; fField24
        1cc614:	e3a07001 	mov	r7, #1	; 0x1
        1cc618:	e5902000 	ldr	r2, [r0]
        1cc61c:	e1320001 	teq	r2, r1
        1cc620:	1a000007 	bne	1cc644 <TScheduler::Remove(TTask *)+0x4c>
        1cc624:	e3a01000 	mov	r1, #0	; 0x0
        1cc628:	e5801000 	str	r1, [r0]
        1cc62c:	eb64f3ad 	bl	1b094e8 <$WantSchedule(void)>
        1cc630:	e59f0008 	ldr	r0, [pc, #8]	; 1cc640 <TScheduler::Remove(TTask *)+0x48>
        1cc634:	e5a070ac 	str	r7, [r0, #172]!	; fField172
        1cc638:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1cc63c:	0c100ff8 	ldceq	15, cr0, [r0], -#992
        1cc640:	0c101980 	ldceq	9, cr1, [r0], -#512
        1cc644:	e5915080 	ldr	r5, [r1, #128]
        1cc648:	e0840185 	add	r0, r4, r5, lsl #3
        1cc64c:	e280001c 	add	r0, r0, #28	; 0x1c
        1cc650:	e1a06000 	mov	r6, r0
        1cc654:	e3a02802 	mov	r2, #131072	; 0x20000
        1cc658:	eb64deea 	bl	1b04208 <TTaskQueue::$RemoveFromQueue(TTask *, KernelObjectState)>
        1cc65c:	e1a00006 	mov	r0, r6
        1cc660:	eb64d28c 	bl	1b01098 <TTaskQueue::$Peek(void)>
        1cc664:	e3300000 	teq	r0, #0	; 0x0
        1cc668:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1cc66c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1cc670:	e1c00517 	bic	r0, r0, r7, lsl r5
        1cc674:	e5840018 	str	r0, [r4, #24]	; fField24
        1cc678:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1cc67c:	e1300005 	teq	r0, r5
        1cc680:	01a00004 	moveq	r0, r4
        1cc684:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1cc688:	0a64f383 	beq	1b0949c <TScheduler::$UpdateCurrentBucket(void)>
        1cc68c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TScheduler::RemoveHighestPriority(void)
 * Address: 001cc690
 */
TScheduler::RemoveHighestPriority(void) {
    /*
        1cc690:	e1a0c00d 	mov	ip, sp
        1cc694:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1cc698:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cc69c:	e1a04000 	mov	r4, r0
        1cc6a0:	e3a07001 	mov	r7, #1	; 0x1
        1cc6a4:	e590511c 	ldr	r5, [r0, #284]	; fField284
        1cc6a8:	e3350000 	teq	r5, #0	; 0x0
        1cc6ac:	0a000017 	beq	1cc710 <TScheduler::RemoveHighestPriority(void)+0x80>
        1cc6b0:	e3a00000 	mov	r0, #0	; 0x0
        1cc6b4:	e584011c 	str	r0, [r4, #284]	; fField284
        1cc6b8:	e5956080 	ldr	r6, [r5, #128]
        1cc6bc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1cc6c0:	e1300006 	teq	r0, r6
        1cc6c4:	1a000011 	bne	1cc710 <TScheduler::RemoveHighestPriority(void)+0x80>
        1cc6c8:	e0840186 	add	r0, r4, r6, lsl #3
        1cc6cc:	e280001c 	add	r0, r0, #28	; 0x1c
        1cc6d0:	e1a08000 	mov	r8, r0
        1cc6d4:	e1a01005 	mov	r1, r5
        1cc6d8:	e3a02802 	mov	r2, #131072	; 0x20000
        1cc6dc:	eb64dec9 	bl	1b04208 <TTaskQueue::$RemoveFromQueue(TTask *, KernelObjectState)>
        1cc6e0:	e3300000 	teq	r0, #0	; 0x0
        1cc6e4:	0a000009 	beq	1cc710 <TScheduler::RemoveHighestPriority(void)+0x80>
        1cc6e8:	e59f001c 	ldr	r0, [pc, #1c]	; 1cc70c <TScheduler::RemoveHighestPriority(void)+0x7c>
        1cc6ec:	e5a070ac 	str	r7, [r0, #172]!	; fField172
        1cc6f0:	e1a00008 	mov	r0, r8
        1cc6f4:	eb64d267 	bl	1b01098 <TTaskQueue::$Peek(void)>
        1cc6f8:	e3300000 	teq	r0, #0	; 0x0
        1cc6fc:	1a00001d 	bne	1cc778 <TScheduler::RemoveHighestPriority(void)+0xe8>
        1cc700:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1cc704:	e1c00617 	bic	r0, r0, r7, lsl r6
        1cc708:	ea000016 	b	1cc768 <TScheduler::RemoveHighestPriority(void)+0xd8>
        1cc70c:	0c101980 	ldceq	9, cr1, [r0], -#512
        1cc710:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1cc714:	e0840180 	add	r0, r4, r0, lsl #3
        1cc718:	e280001c 	add	r0, r0, #28	; 0x1c
        1cc71c:	eb64d25d 	bl	1b01098 <TTaskQueue::$Peek(void)>
        1cc720:	e1b05000 	movs	r5, r0
        1cc724:	0a000013 	beq	1cc778 <TScheduler::RemoveHighestPriority(void)+0xe8>
        1cc728:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1cc72c:	e0840180 	add	r0, r4, r0, lsl #3
        1cc730:	e280001c 	add	r0, r0, #28	; 0x1c
        1cc734:	e1a01005 	mov	r1, r5
        1cc738:	e3a02802 	mov	r2, #131072	; 0x20000
        1cc73c:	eb64deb1 	bl	1b04208 <TTaskQueue::$RemoveFromQueue(TTask *, KernelObjectState)>
        1cc740:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1cc744:	e0840180 	add	r0, r4, r0, lsl #3
        1cc748:	e280001c 	add	r0, r0, #28	; 0x1c
        1cc74c:	eb64d251 	bl	1b01098 <TTaskQueue::$Peek(void)>
        1cc750:	e3300000 	teq	r0, #0	; 0x0
        1cc754:	1a000007 	bne	1cc778 <TScheduler::RemoveHighestPriority(void)+0xe8>
        1cc758:	e2841014 	add	r1, r4, #20	; 0x14
        1cc75c:	e8910003 	ldmia	r1, {r0, r1}
        1cc760:	e1e00017 	mvn	r0, r7, lsl r0
        1cc764:	e0010000 	and	r0, r1, r0
        1cc768:	e5840018 	str	r0, [r4, #24]	; fField24
        1cc76c:	e1a00004 	mov	r0, r4
        1cc770:	eb64f349 	bl	1b0949c <TScheduler::$UpdateCurrentBucket(void)>
        1cc774:	eb64eb1d 	bl	1b073f0 <$StopScheduler(void)>
        1cc778:	e1a00005 	mov	r0, r5
        1cc77c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TScheduler::Schedule(void)
 * Address: 001cc780
 */
TScheduler::Schedule(void) {
    /*
        1cc780:	e1a0c00d 	mov	ip, sp
        1cc784:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1cc788:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cc78c:	e1a04000 	mov	r4, r0
        1cc790:	e59f004c 	ldr	r0, [pc, #4c]	; 1cc7e4 <TScheduler::Schedule(void)+0x64>
        1cc794:	e5901000 	ldr	r1, [r0]
        1cc798:	e59f5048 	ldr	r5, [pc, #48]	; 1cc7e8 <TScheduler::Schedule(void)+0x68>
        1cc79c:	e3310000 	teq	r1, #0	; 0x0
        1cc7a0:	15950000 	ldrne	r0, [r5]
        1cc7a4:	11310000 	teqne	r1, r0
        1cc7a8:	11a00004 	movne	r0, r4
        1cc7ac:	1b649441 	blne	1af18b8 <TScheduler::$Add(TTask *)>
        1cc7b0:	e3a00000 	mov	r0, #0	; 0x0
        1cc7b4:	e59f1030 	ldr	r1, [pc, #30]	; 1cc7ec <TScheduler::Schedule(void)+0x6c>
        1cc7b8:	e5810000 	str	r0, [r1]
        1cc7bc:	e1a00004 	mov	r0, r4
        1cc7c0:	eb64de91 	bl	1b0420c <TScheduler::$RemoveHighestPriority(void)>
        1cc7c4:	e3300000 	teq	r0, #0	; 0x0
        1cc7c8:	1a000001 	bne	1cc7d4 <TScheduler::Schedule(void)+0x54>
        1cc7cc:	eb64eb07 	bl	1b073f0 <$StopScheduler(void)>
        1cc7d0:	e5950000 	ldr	r0, [r5]
        1cc7d4:	e5902080 	ldr	r2, [r0, #128]
        1cc7d8:	e59f1010 	ldr	r1, [pc, #10]	; 1cc7f0 <TScheduler::Schedule(void)+0x70>
        1cc7dc:	e5812000 	str	r2, [r1]
        1cc7e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1cc7e4:	0c100ff8 	ldceq	15, cr0, [r0], -#992
        1cc7e8:	0c100fc4 	ldceq	15, cr0, [r0], -#784
        1cc7ec:	0c100fe4 	ldceq	15, cr0, [r0], -#912
        1cc7f0:	0c101980 	ldceq	9, cr1, [r0], -#512
    */
}

