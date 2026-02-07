#include "include/TCardDomains.h"

/**
 * Symbol: TCardDomains::__ct(void)
 * Address: 0004e40c
 */
TCardDomains::TCardDomains(void) {
    /*
         4e40c:	e3300000 	teq	r0, #0	; 0x0
         4e410:	03a00004 	moveq	r0, #4	; 0x4
         4e414:	0a6e00c7 	beq	1bce738 <$__nw(unsigned int)>
         4e418:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardDomains::__dt(void)
 * Address: 0004e41c
 */
TCardDomains::~TCardDomains(void) {
    /*
         4e41c:	e3110001 	tst	r1, #1	; 0x1
         4e420:	1a6dfcae 	bne	1bcd6e0 <$__dl(void *)>
         4e424:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NotifyTaskBlocked__12TCardDomainsSFUl
 * Address: 0004e428
 */
void TCardDomains::NotifyTaskBlocked() {
    /*
         4e428:	e1a0c00d 	mov	ip, sp
         4e42c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4e430:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e434:	e1a02000 	mov	r2, r0
         4e438:	e59f4050 	ldr	r4, [pc, #50]	; 4e490 <NotifyTaskBlocked__12TCardDomainsSFUl+0x68>
         4e43c:	e3a03000 	mov	r3, #0	; 0x0
         4e440:	e3a01035 	mov	r1, #53	; 0x35
         4e444:	e5940020 	ldr	r0, [r4, #32]
         4e448:	eb6e21c7 	bl	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
         4e44c:	e3a02000 	mov	r2, #0	; 0x0
         4e450:	e3a03000 	mov	r3, #0	; 0x0
         4e454:	e2844018 	add	r4, r4, #24	; 0x18
         4e458:	e9b45000 	ldmib	r4!, {ip, lr}
         4e45c:	e3a04000 	mov	r4, #0	; 0x0
         4e460:	e3a01000 	mov	r1, #0	; 0x0
         4e464:	e3a00001 	mov	r0, #1	; 0x1
         4e468:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4e46c:	e1a03004 	mov	r3, r4
         4e470:	e3a020b8 	mov	r2, #184	; 0xb8
         4e474:	e92d000c 	stmdb	sp!, {r2, r3}
         4e478:	e1a0300e 	mov	r3, lr
         4e47c:	e59c1000 	ldr	r1, [ip]
         4e480:	e59f000c 	ldr	r0, [pc, #c]	; 4e494 <NotifyTaskBlocked__12TCardDomainsSFUl+0x6c>
         4e484:	e3a02000 	mov	r2, #0	; 0x0
         4e488:	eb6e322e 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         4e48c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         4e490:	0c100948 	ldceq	9, cr0, [r0], -#288
         4e494:	0c10095c 	ldceq	9, cr0, [r0], -#368
    */
}

/**
 * Symbol: TCardDomains::CardFaultMonProc(long, void *)
 * Address: 0004e498
 */
TCardDomains::CardFaultMonProc(long, void *) {
    /*
         4e498:	e1a0c00d 	mov	ip, sp
         4e49c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4e4a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e4a4:	e3a07000 	mov	r7, #0	; 0x0
         4e4a8:	e59f6080 	ldr	r6, [pc, #80]	; 4e530 <TCardDomains::CardFaultMonProc(long, void *)+0x98>
         4e4ac:	e59f5080 	ldr	r5, [pc, #80]	; 4e534 <TCardDomains::CardFaultMonProc(long, void *)+0x9c>
         4e4b0:	e3710002 	cmn	r1, #2	; 0x2
         4e4b4:	0a00000e 	beq	4e4f4 <TCardDomains::CardFaultMonProc(long, void *)+0x5c>
         4e4b8:	e3310000 	teq	r1, #0	; 0x0
         4e4bc:	13a000ea 	movne	r0, #234	; 0xea
         4e4c0:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         4e4c4:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         4e4c8:	e3a00000 	mov	r0, #0	; 0x0
         4e4cc:	e5961000 	ldr	r1, [r6]
         4e4d0:	e3510000 	cmp	r1, #0	; 0x0
         4e4d4:	9a000003 	bls	4e4e8 <TCardDomains::CardFaultMonProc(long, void *)+0x50>
         4e4d8:	e7c57000 	strb	r7, [r5, r0]
         4e4dc:	e2800001 	add	r0, r0, #1	; 0x1
         4e4e0:	e1500001 	cmp	r0, r1
         4e4e4:	3afffffb 	bcc	4e4d8 <TCardDomains::CardFaultMonProc(long, void *)+0x40>
         4e4e8:	e3a0001a 	mov	r0, #26	; 0x1a
         4e4ec:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         4e4f0:	ea0d7f1f 	b	3ae174 <GenericSWI>
         4e4f4:	e24dd064 	sub	sp, sp, #100	; 0x64
         4e4f8:	e1a0000d 	mov	r0, sp
         4e4fc:	eb6e1533 	bl	1bd39d0 <$GetFaultState(TProcessorState *)>
         4e500:	e1b04000 	movs	r4, r0
         4e504:	1a000057 	bne	4e668 <TCardDomains::CardFaultMonProc(long, void *)+0x1d0>
         4e508:	e59d1048 	ldr	r1, [sp, #72]
         4e50c:	e3110001 	tst	r1, #1	; 0x1
         4e510:	e59d0058 	ldr	r0, [sp, #88]
         4e514:	e59f101c 	ldr	r1, [pc, #1c]	; 4e538 <TCardDomains::CardFaultMonProc(long, void *)+0xa0>
         4e518:	1a000007 	bne	4e53c <TCardDomains::CardFaultMonProc(long, void *)+0xa4>
         4e51c:	e3a02000 	mov	r2, #0	; 0x0
         4e520:	e5910000 	ldr	r0, [r1]
         4e524:	e3a01000 	mov	r1, #0	; 0x0
         4e528:	eb6e531b 	bl	1be319c <$Throw>
         4e52c:	ea00004d 	b	4e668 <TCardDomains::CardFaultMonProc(long, void *)+0x1d0>
         4e530:	0c100ab4 	ldceq	10, cr0, [r0], -#720
         4e534:	0c100948 	ldceq	9, cr0, [r0], -#288
         4e538:	003712b8 	ldreqh	r1, [r7], -r8
         4e53c:	e3a04000 	mov	r4, #0	; 0x0
         4e540:	e59d2044 	ldr	r2, [sp, #68]
         4e544:	e5963000 	ldr	r3, [r6]
         4e548:	e3530000 	cmp	r3, #0	; 0x0
         4e54c:	9a000017 	bls	4e5b0 <TCardDomains::CardFaultMonProc(long, void *)+0x118>
         4e550:	e59f60cc 	ldr	r6, [pc, #cc]	; 4e624 <TCardDomains::CardFaultMonProc(long, void *)+0x18c>
         4e554:	e59fc0cc 	ldr	ip, [pc, #cc]	; 4e628 <TCardDomains::CardFaultMonProc(long, void *)+0x190>
         4e558:	e59fe0cc 	ldr	lr, [pc, #cc]	; 4e62c <TCardDomains::CardFaultMonProc(long, void *)+0x194>
         4e55c:	e7968104 	ldr	r8, [r6, r4, lsl #2]
         4e560:	e1580002 	cmp	r8, r2
         4e564:	8a000002 	bhi	4e574 <TCardDomains::CardFaultMonProc(long, void *)+0xdc>
         4e568:	e2888301 	add	r8, r8, #67108864	; 0x4000000
         4e56c:	e1580002 	cmp	r8, r2
         4e570:	8a00000e 	bhi	4e5b0 <TCardDomains::CardFaultMonProc(long, void *)+0x118>
         4e574:	e79c8104 	ldr	r8, [ip, r4, lsl #2]
         4e578:	e1580002 	cmp	r8, r2
         4e57c:	8a000002 	bhi	4e58c <TCardDomains::CardFaultMonProc(long, void *)+0xf4>
         4e580:	e2888301 	add	r8, r8, #67108864	; 0x4000000
         4e584:	e1580002 	cmp	r8, r2
         4e588:	8a000008 	bhi	4e5b0 <TCardDomains::CardFaultMonProc(long, void *)+0x118>
         4e58c:	e79e8104 	ldr	r8, [lr, r4, lsl #2]
         4e590:	e1580002 	cmp	r8, r2
         4e594:	8a000002 	bhi	4e5a4 <TCardDomains::CardFaultMonProc(long, void *)+0x10c>
         4e598:	e2888303 	add	r8, r8, #201326592	; 0xc000000
         4e59c:	e1580002 	cmp	r8, r2
         4e5a0:	8a000002 	bhi	4e5b0 <TCardDomains::CardFaultMonProc(long, void *)+0x118>
         4e5a4:	e2844001 	add	r4, r4, #1	; 0x1
         4e5a8:	e1540003 	cmp	r4, r3
         4e5ac:	3affffea 	bcc	4e55c <TCardDomains::CardFaultMonProc(long, void *)+0xc4>
         4e5b0:	e1540003 	cmp	r4, r3
         4e5b4:	25910000 	ldrcs	r0, [r1]
         4e5b8:	2a000026 	bcs	4e658 <TCardDomains::CardFaultMonProc(long, void *)+0x1c0>
         4e5bc:	e59f106c 	ldr	r1, [pc, #6c]	; 4e630 <TCardDomains::CardFaultMonProc(long, void *)+0x198>
         4e5c0:	e7911104 	ldr	r1, [r1, r4, lsl #2]
         4e5c4:	e59f2068 	ldr	r2, [pc, #68]	; 4e634 <TCardDomains::CardFaultMonProc(long, void *)+0x19c>
         4e5c8:	e5923000 	ldr	r3, [r2]
         4e5cc:	e1300003 	teq	r0, r3
         4e5d0:	0a00001e 	beq	4e650 <TCardDomains::CardFaultMonProc(long, void *)+0x1b8>
         4e5d4:	e59f205c 	ldr	r2, [pc, #5c]	; 4e638 <TCardDomains::CardFaultMonProc(long, void *)+0x1a0>
         4e5d8:	e5922000 	ldr	r2, [r2]
         4e5dc:	e1300002 	teq	r0, r2
         4e5e0:	13310000 	teqne	r1, #0	; 0x0
         4e5e4:	1a000002 	bne	4e5f4 <TCardDomains::CardFaultMonProc(long, void *)+0x15c>
         4e5e8:	e1300002 	teq	r0, r2
         4e5ec:	03310001 	teqeq	r1, #1	; 0x1
         4e5f0:	1a000016 	bne	4e650 <TCardDomains::CardFaultMonProc(long, void *)+0x1b8>
         4e5f4:	e59fc040 	ldr	ip, [pc, #40]	; 4e63c <TCardDomains::CardFaultMonProc(long, void *)+0x1a4>
         4e5f8:	e59cc000 	ldr	ip, [ip]
         4e5fc:	e33c0000 	teq	ip, #0	; 0x0
         4e600:	11300003 	teqne	r0, r3
         4e604:	11300002 	teqne	r0, r2
         4e608:	0a00000e 	beq	4e648 <TCardDomains::CardFaultMonProc(long, void *)+0x1b0>
         4e60c:	e3310002 	teq	r1, #2	; 0x2
         4e610:	1a00000a 	bne	4e640 <TCardDomains::CardFaultMonProc(long, void *)+0x1a8>
         4e614:	e1a00004 	mov	r0, r4
         4e618:	eb6b0ca4 	bl	1b118b0 <$NotifyTaskBlocked__12TCardDomainsSFUl>
         4e61c:	e7c57004 	strb	r7, [r5, r4]
         4e620:	ea000008 	b	4e648 <TCardDomains::CardFaultMonProc(long, void *)+0x1b0>
         4e624:	0c101198 	ldfeqs	f1, [r0], -#608
         4e628:	0c1011a8 	ldfeqs	f1, [r0], -#672
         4e62c:	0c101188 	ldfeqs	f1, [r0], -#544
         4e630:	0c105f34 	ldceq	15, cr5, [r0], -#208
         4e634:	0c100a80 	ldceq	10, cr0, [r0], -#512
         4e638:	0c100a84 	ldceq	10, cr0, [r0], -#528
         4e63c:	0c10095c 	ldceq	9, cr0, [r0], -#368
         4e640:	e3a00001 	mov	r0, #1	; 0x1
         4e644:	e7c50004 	strb	r0, [r5, r4]
         4e648:	e3a04005 	mov	r4, #5	; 0x5
         4e64c:	ea000005 	b	4e668 <TCardDomains::CardFaultMonProc(long, void *)+0x1d0>
         4e650:	e59f0018 	ldr	r0, [pc, #18]	; 4e670 <TCardDomains::CardFaultMonProc(long, void *)+0x1d8>
         4e654:	e5900000 	ldr	r0, [r0]
         4e658:	e3a02000 	mov	r2, #0	; 0x0
         4e65c:	e3a01000 	mov	r1, #0	; 0x0
         4e660:	eb6e52cd 	bl	1be319c <$Throw>
         4e664:	e3a04000 	mov	r4, #0	; 0x0
         4e668:	e1a00004 	mov	r0, r4
         4e66c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         4e670:	003712c4 	eoreqs	r1, r7, r4, asr #5
    */
}

/**
 * Symbol: TCardDomains::Init(void)
 * Address: 0004e674
 */
TCardDomains::Init(void) {
    /*
         4e674:	e1a0c00d 	mov	ip, sp
         4e678:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         4e67c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e680:	e1a04000 	mov	r4, r0
         4e684:	e59f10c8 	ldr	r1, [pc, #c8]	; 4e754 <TCardDomains::Init(void)+0xe0>
         4e688:	e59f60c8 	ldr	r6, [pc, #c8]	; 4e758 <TCardDomains::Init(void)+0xe4>
         4e68c:	e1a00006 	mov	r0, r6
         4e690:	eb6e109a 	bl	1bd2900 <$FindEnvironmentId__13MemObjManagerSFUlPUl>
         4e694:	e1b05000 	movs	r5, r0
         4e698:	1a000061 	bne	4e824 <TCardDomains::Init(void)+0x1b0>
         4e69c:	e3a03000 	mov	r3, #0	; 0x0
         4e6a0:	e1a02006 	mov	r2, r6
         4e6a4:	e3a01001 	mov	r1, #1	; 0x1
         4e6a8:	e59f80ac 	ldr	r8, [pc, #ac]	; 4e75c <TCardDomains::Init(void)+0xe8>
         4e6ac:	e5980008 	ldr	r0, [r8, #8]
         4e6b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4e6b4:	e1a03004 	mov	r3, r4
         4e6b8:	e59f10a0 	ldr	r1, [pc, #a0]	; 4e760 <TCardDomains::Init(void)+0xec>
         4e6bc:	e59f00a0 	ldr	r0, [pc, #a0]	; 4e764 <TCardDomains::Init(void)+0xf0>
         4e6c0:	e3a02b01 	mov	r2, #1024	; 0x400
         4e6c4:	eb6e1d04 	bl	1bd5adc <$Init__9TUMonitorFPFPvUlT1_vUlPvT2UcT2T5>
         4e6c8:	e28dd010 	add	sp, sp, #16	; 0x10
         4e6cc:	e1b05000 	movs	r5, r0
         4e6d0:	1a000053 	bne	4e824 <TCardDomains::Init(void)+0x1b0>
         4e6d4:	e59f108c 	ldr	r1, [pc, #8c]	; 4e768 <TCardDomains::Init(void)+0xf4>
         4e6d8:	e59f008c 	ldr	r0, [pc, #8c]	; 4e76c <TCardDomains::Init(void)+0xf8>
         4e6dc:	eb6e0c85 	bl	1bd18f8 <$FindDomainId__13MemObjManagerSFUlPUl>
         4e6e0:	e1b05000 	movs	r5, r0
         4e6e4:	1a00004e 	bne	4e824 <TCardDomains::Init(void)+0x1b0>
         4e6e8:	e24dd008 	sub	sp, sp, #8	; 0x8
         4e6ec:	e3a0a000 	mov	sl, #0	; 0x0
         4e6f0:	e5980004 	ldr	r0, [r8, #4]	; fField4
         4e6f4:	e5cda004 	strb	sl, [sp, #4]	; fField4
         4e6f8:	e58d0000 	str	r0, [sp]
         4e6fc:	e59f7060 	ldr	r7, [pc, #60]	; 4e764 <TCardDomains::Init(void)+0xf0>
         4e700:	e1a0000d 	mov	r0, sp
         4e704:	e5971000 	ldr	r1, [r7]
         4e708:	eb6e35ab 	bl	1bdbdbc <TUDomain::$SetFaultMonitor(unsigned long)>
         4e70c:	e1b05000 	movs	r5, r0
         4e710:	1a00000a 	bne	4e740 <TCardDomains::Init(void)+0xcc>
         4e714:	e3a06000 	mov	r6, #0	; 0x0
         4e718:	e59f9050 	ldr	r9, [pc, #50]	; 4e770 <TCardDomains::Init(void)+0xfc>
         4e71c:	e59f4050 	ldr	r4, [pc, #50]	; 4e774 <TCardDomains::Init(void)+0x100>
         4e720:	e59f7050 	ldr	r7, [pc, #50]	; 4e778 <TCardDomains::Init(void)+0x104>
         4e724:	e789a106 	str	sl, [r9, r6, lsl #2]
         4e728:	e787a106 	str	sl, [r7, r6, lsl #2]
         4e72c:	e0871106 	add	r1, r7, r6, lsl #2
         4e730:	e1a00004 	mov	r0, r4
         4e734:	eb6e0c6f 	bl	1bd18f8 <$FindDomainId__13MemObjManagerSFUlPUl>
         4e738:	e1b05000 	movs	r5, r0
         4e73c:	0a00000e 	beq	4e77c <TCardDomains::Init(void)+0x108>
         4e740:	e1a0000d 	mov	r0, sp
         4e744:	e3a01000 	mov	r1, #0	; 0x0
         4e748:	eb6dfff5 	bl	1bce724 <TUObject::$__dt(void)>
         4e74c:	e28dd008 	add	sp, sp, #8	; 0x8
         4e750:	ea000033 	b	4e824 <TCardDomains::Init(void)+0x1b0>
         4e754:	0c100950 	ldceq	9, cr0, [r0], -#320
         4e758:	6364666d 	cmnvs	r4, #114294784	; 0x6d00000
         4e75c:	0c100948 	ldceq	9, cr0, [r0], -#288
         4e760:	01af39fc 	streqd	r3, [pc, ip]!
         4e764:	0c100954 	ldceq	9, cr0, [r0], -#336
         4e768:	0c10094c 	ldceq	9, cr0, [r0], -#304
         4e76c:	63736b30 	cmnvs	r3, #49152	; 0xc000
         4e770:	0c105f34 	ldceq	15, cr5, [r0], -#208
         4e774:	63636c30 	cmnvs	r3, #12288	; 0x3000
         4e778:	0c105f44 	ldceq	15, cr5, [r0], -#272
         4e77c:	e24dd008 	sub	sp, sp, #8	; 0x8
         4e780:	e7970106 	ldr	r0, [r7, r6, lsl #2]
         4e784:	e5cda004 	strb	sl, [sp, #4]	; fField4
         4e788:	e58d0000 	str	r0, [sp]
         4e78c:	e51f0030 	ldr	r0, [pc, #ffffffd0]	; 4e764 <TCardDomains::Init(void)+0xf0>
         4e790:	e5901000 	ldr	r1, [r0]
         4e794:	e1a0000d 	mov	r0, sp
         4e798:	eb6e3587 	bl	1bdbdbc <TUDomain::$SetFaultMonitor(unsigned long)>
         4e79c:	e1b05000 	movs	r5, r0
         4e7a0:	e1a0000d 	mov	r0, sp
         4e7a4:	e3a01000 	mov	r1, #0	; 0x0
         4e7a8:	0a000005 	beq	4e7c4 <TCardDomains::Init(void)+0x150>
         4e7ac:	eb6dffdc 	bl	1bce724 <TUObject::$__dt(void)>
         4e7b0:	e28d0008 	add	r0, sp, #8	; 0x8
         4e7b4:	e3a01000 	mov	r1, #0	; 0x0
         4e7b8:	eb6dffd9 	bl	1bce724 <TUObject::$__dt(void)>
         4e7bc:	e28dd010 	add	sp, sp, #16	; 0x10
         4e7c0:	ea000017 	b	4e824 <TCardDomains::Init(void)+0x1b0>
         4e7c4:	eb6dffd6 	bl	1bce724 <TUObject::$__dt(void)>
         4e7c8:	e28dd008 	add	sp, sp, #8	; 0x8
         4e7cc:	e2866001 	add	r6, r6, #1	; 0x1
         4e7d0:	e3560004 	cmp	r6, #4	; 0x4
         4e7d4:	3affffd2 	bcc	4e724 <TCardDomains::Init(void)+0xb0>
         4e7d8:	e1a0000d 	mov	r0, sp
         4e7dc:	e3a01000 	mov	r1, #0	; 0x0
         4e7e0:	eb6dffcf 	bl	1bce724 <TUObject::$__dt(void)>
         4e7e4:	e1a0100a 	mov	r1, sl
         4e7e8:	e28dd008 	add	sp, sp, #8	; 0x8
         4e7ec:	e59f0038 	ldr	r0, [pc, #38]	; 4e82c <TCardDomains::Init(void)+0x1b8>
         4e7f0:	eb6e0814 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         4e7f4:	e3a00000 	mov	r0, #0	; 0x0
         4e7f8:	eb6dfbab 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         4e7fc:	e588001c 	str	r0, [r8, #28]
         4e800:	e3300000 	teq	r0, #0	; 0x0
         4e804:	0a000006 	beq	4e824 <TCardDomains::Init(void)+0x1b0>
         4e808:	e3a01001 	mov	r1, #1	; 0x1
         4e80c:	eb6e1ca0 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         4e810:	e1b05000 	movs	r5, r0
         4e814:	1a000002 	bne	4e824 <TCardDomains::Init(void)+0x1b0>
         4e818:	e3a00000 	mov	r0, #0	; 0x0
         4e81c:	eb6df794 	bl	1bcc674 <TCardMessage::$__ct(void)>
         4e820:	e5a80020 	str	r0, [r8, #32]!
         4e824:	e1a00005 	mov	r0, r5
         4e828:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         4e82c:	0c10095c 	ldceq	9, cr0, [r0], -#368
    */
}

/**
 * Symbol: SocketDomain__12TCardDomainsSFUl
 * Address: 0004e830
 */
void TCardDomains::SocketDomain() {
    /*
         4e830:	e59f0004 	ldr	r0, [pc, #4]	; 4e83c <SocketDomain__12TCardDomainsSFUl+0xc>	; fField4
         4e834:	e5900004 	ldr	r0, [r0, #4]	; fField4
         4e838:	e1a0f00e 	mov	pc, lr
         4e83c:	0c100948 	ldceq	9, cr0, [r0], -#288
    */
}

/**
 * Symbol: ClientDomain__12TCardDomainsSFUl
 * Address: 0004e840
 */
void TCardDomains::ClientDomain() {
    /*
         4e840:	e59f1004 	ldr	r1, [pc, #4]	; 4e84c <ClientDomain__12TCardDomainsSFUl+0xc>	; fField4
         4e844:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         4e848:	e1a0f00e 	mov	pc, lr
         4e84c:	0c105f44 	ldceq	15, cr5, [r0], -#272
    */
}

/**
 * Symbol: CardFaultMonitor__12TCardDomainsSFv
 * Address: 0004e850
 */
void TCardDomains::CardFaultMonitor() {
    /*
         4e850:	e59f0004 	ldr	r0, [pc, #4]	; 4e85c <CardFaultMonitor__12TCardDomainsSFv+0xc>	; fField4
         4e854:	e5900000 	ldr	r0, [r0]
         4e858:	e1a0f00e 	mov	pc, lr
         4e85c:	0c100954 	ldceq	9, cr0, [r0], -#336
    */
}

/**
 * Symbol: SetCardServerPort__12TCardDomainsSFUl
 * Address: 0004e860
 */
void TCardDomains::SetCardServerPort() {
    /*
         4e860:	e1a01000 	mov	r1, r0
         4e864:	e59f0000 	ldr	r0, [pc, #0]	; 4e86c <SetCardServerPort__12TCardDomainsSFUl+0xc>
         4e868:	ea6e07f6 	b	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         4e86c:	0c10095c 	ldceq	9, cr0, [r0], -#368
    */
}

/**
 * Symbol: SetCardFaultState__12TCardDomainsSFUl16TCardFaultStates
 * Address: 0004e870
 */
void TCardDomains::SetCardFaultState() {
    /*
         4e870:	e1a0c00d 	mov	ip, sp
         4e874:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4e878:	e24cb004 	sub	fp, ip, #4	; 0x4
         4e87c:	e1a04000 	mov	r4, r0
         4e880:	e59f0030 	ldr	r0, [pc, #30]	; 4e8b8 <SetCardFaultState__12TCardDomainsSFUl16TCardFaultStates+0x48>
         4e884:	e7801104 	str	r1, [r0, r4, lsl #2]
         4e888:	e3a06000 	mov	r6, #0	; 0x0
         4e88c:	e3310002 	teq	r1, #2	; 0x2
         4e890:	1a000006 	bne	4e8b0 <SetCardFaultState__12TCardDomainsSFUl16TCardFaultStates+0x40>
         4e894:	e59f5020 	ldr	r5, [pc, #20]	; 4e8bc <SetCardFaultState__12TCardDomainsSFUl16TCardFaultStates+0x4c>
         4e898:	e7d50004 	ldrb	r0, [r5, r4]
         4e89c:	e3300000 	teq	r0, #0	; 0x0
         4e8a0:	0a000002 	beq	4e8b0 <SetCardFaultState__12TCardDomainsSFUl16TCardFaultStates+0x40>
         4e8a4:	e1a00004 	mov	r0, r4
         4e8a8:	eb6b0c00 	bl	1b118b0 <$NotifyTaskBlocked__12TCardDomainsSFUl>
         4e8ac:	e7c56004 	strb	r6, [r5, r4]
         4e8b0:	e1a00006 	mov	r0, r6
         4e8b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         4e8b8:	0c105f34 	ldceq	15, cr5, [r0], -#208
         4e8bc:	0c100948 	ldceq	9, cr0, [r0], -#288
    */
}

/**
 * Symbol: ReleaseBlockedTask__12TCardDomainsSFv
 * Address: 0004e8c0
 */
void TCardDomains::ReleaseBlockedTask() {
    /*
         4e8c0:	e3a01000 	mov	r1, #0	; 0x0
         4e8c4:	e1a02001 	mov	r2, r1
         4e8c8:	e59f0004 	ldr	r0, [pc, #4]	; 4e8d4 <ReleaseBlockedTask__12TCardDomainsSFv+0x14>	; fField4
         4e8cc:	e5900000 	ldr	r0, [r0]
         4e8d0:	ea0d7e92 	b	3ae320 <MonitorDispatchSWI>
         4e8d4:	0c100954 	ldceq	9, cr0, [r0], -#336
    */
}

