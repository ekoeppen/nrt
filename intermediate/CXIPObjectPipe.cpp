#include "include/CXIPObjectPipe.h"

/**
 * Symbol: CXIPObjectPipe::__ct(void)
 * Address: 0027a370
 */
CXIPObjectPipe::CXIPObjectPipe(void) {
    /*
        27a370:	e1a0c00d 	mov	ip, sp
        27a374:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        27a378:	e24cb004 	sub	fp, ip, #4	; 0x4
        27a37c:	e1b04000 	movs	r4, r0
        27a380:	1a000003 	bne	27a394 <CXIPObjectPipe::__ct(void)+0x24>
        27a384:	e3a00030 	mov	r0, #48	; 0x30
        27a388:	eb6550ea 	bl	1bce738 <$__nw(unsigned int)>
        27a38c:	e1b04000 	movs	r4, r0
        27a390:	0a000005 	beq	27a3ac <CXIPObjectPipe::__ct(void)+0x3c>
        27a394:	e1a00004 	mov	r0, r4
        27a398:	eb65a389 	bl	1be31c4 <CBufferPipe::$__ct(void)>
        27a39c:	e59f0010 	ldr	r0, [pc, #10]	; 27a3b4 <CXIPObjectPipe::__ct(void)+0x44>
        27a3a0:	e5840000 	str	r0, [r4]
        27a3a4:	e3a00000 	mov	r0, #0	; 0x0
        27a3a8:	e5840018 	str	r0, [r4, #24]	; fField24
        27a3ac:	e1a00004 	mov	r0, r4
        27a3b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        27a3b4:	0001d3e8 	andeq	sp, r1, r8, ror #7
    */
}

/**
 * Symbol: CXIPObjectPipe::__dt(void)
 * Address: 0027a3b8
 */
CXIPObjectPipe::~CXIPObjectPipe(void) {
    /*
        27a3b8:	e1a0c00d 	mov	ip, sp
        27a3bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        27a3c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        27a3c4:	e1a04000 	mov	r4, r0
        27a3c8:	e1a05001 	mov	r5, r1
        27a3cc:	e59f0028 	ldr	r0, [pc, #28]	; 27a3fc <CXIPObjectPipe::__dt(void)+0x44>	; fField28
        27a3d0:	e5840000 	str	r0, [r4]
        27a3d4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        27a3d8:	eb654cc0 	bl	1bcd6e0 <$__dl(void *)>
        27a3dc:	e1a00004 	mov	r0, r4
        27a3e0:	e3a01000 	mov	r1, #0	; 0x0
        27a3e4:	eb65a79a 	bl	1be4254 <CBufferPipe::$__dt(void)>
        27a3e8:	e3150001 	tst	r5, #1	; 0x1
        27a3ec:	11a00004 	movne	r0, r4
        27a3f0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        27a3f4:	1a654cb9 	bne	1bcd6e0 <$__dl(void *)>
        27a3f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        27a3fc:	0001d3e8 	andeq	sp, r1, r8, ror #7
    */
}

/**
 * Symbol: CXIPObjectPipe::Init(TStore *, unsigned long)
 * Address: 0027a400
 */
CXIPObjectPipe::Init(TStore *, unsigned long) {
    /*
        27a400:	e1a0c00d 	mov	ip, sp
        27a404:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        27a408:	e24cb004 	sub	fp, ip, #4	; 0x4
        27a40c:	e1a04000 	mov	r4, r0
        27a410:	e1a06001 	mov	r6, r1
        27a414:	e1a05002 	mov	r5, r2
        27a418:	e24dd028 	sub	sp, sp, #40	; 0x28
        27a41c:	e28d0008 	add	r0, sp, #8	; 0x8
        27a420:	ebfb9932 	bl	1608f0 <LargeObjectRoot::__ct(void)>
        27a424:	e1a0000d 	mov	r0, sp
        27a428:	eb62614c 	bl	1b12960 <XIPParameterBlock::$__ct(void)>
        27a42c:	e3a07000 	mov	r7, #0	; 0x0
        27a430:	e3a08000 	mov	r8, #0	; 0x0
        27a434:	e3a00000 	mov	r0, #0	; 0x0
        27a438:	e5840020 	str	r0, [r4, #32]	; fField32
        27a43c:	e5840024 	str	r0, [r4, #36]	; fField36
        27a440:	e5840028 	str	r0, [r4, #40]	; fField40
        27a444:	e584001c 	str	r0, [r4, #28]	; fField28
        27a448:	e3a00b01 	mov	r0, #1024	; 0x400
        27a44c:	eb6550b9 	bl	1bce738 <$__nw(unsigned int)>
        27a450:	e5840018 	str	r0, [r4, #24]	; fField24
        27a454:	e3300000 	teq	r0, #0	; 0x0
        27a458:	0a000023 	beq	27a4ec <CXIPObjectPipe::Init(TStore *, unsigned long)+0xec>
        27a45c:	e1a00006 	mov	r0, r6
        27a460:	e3a03020 	mov	r3, #32	; 0x20
        27a464:	e5846010 	str	r6, [r4, #16]	; fField16
        27a468:	e92d0008 	stmdb	sp!, {r3}
        27a46c:	e28d300c 	add	r3, sp, #12	; 0xc
        27a470:	e1a01005 	mov	r1, r5
        27a474:	e3a02000 	mov	r2, #0	; 0x0
        27a478:	eb621f30 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a47c:	e28dd004 	add	sp, sp, #4	; 0x4
        27a480:	e1b05000 	movs	r5, r0
        27a484:	1a000026 	bne	27a524 <CXIPObjectPipe::Init(TStore *, unsigned long)+0x124>
        27a488:	e59d0008 	ldr	r0, [sp, #8]
        27a48c:	e3a03008 	mov	r3, #8	; 0x8
        27a490:	e5840014 	str	r0, [r4, #20]	; fField20
        27a494:	e92d0008 	stmdb	sp!, {r3}
        27a498:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        27a49c:	e28d3004 	add	r3, sp, #4	; 0x4
        27a4a0:	e3a02000 	mov	r2, #0	; 0x0
        27a4a4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27a4a8:	eb621f24 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a4ac:	e28dd004 	add	sp, sp, #4	; 0x4
        27a4b0:	e1b05000 	movs	r5, r0
        27a4b4:	1a00001a 	bne	27a524 <CXIPObjectPipe::Init(TStore *, unsigned long)+0x124>
        27a4b8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        27a4bc:	e584001c 	str	r0, [r4, #28]	; fField28
        27a4c0:	e59d1000 	ldr	r1, [sp]
        27a4c4:	e584102c 	str	r1, [r4, #44]	; fField44
        27a4c8:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        27a4cc:	e0811000 	add	r1, r1, r0
        27a4d0:	e2411001 	sub	r1, r1, #1	; 0x1
        27a4d4:	eb64e11b 	bl	1bb2948 <$__rt_udiv>
        27a4d8:	e5840020 	str	r0, [r4, #32]	; fField32
        27a4dc:	e3a00000 	mov	r0, #0	; 0x0
        27a4e0:	eb65a747 	bl	1be4204 <CBufferSegment::$__ct(void)>
        27a4e4:	e1b07000 	movs	r7, r0
        27a4e8:	1a000002 	bne	27a4f8 <CXIPObjectPipe::Init(TStore *, unsigned long)+0xf8>
        27a4ec:	eb659f0b 	bl	1be2120 <$MemError>
        27a4f0:	e1a05000 	mov	r5, r0
        27a4f4:	ea00000a 	b	27a524 <CXIPObjectPipe::Init(TStore *, unsigned long)+0x124>
        27a4f8:	e1a00007 	mov	r0, r7
        27a4fc:	e3a01b01 	mov	r1, #1024	; 0x400
        27a500:	eb65bbe8 	bl	1be94a8 <CBufferSegment::$Init(long)>
        27a504:	e1b05000 	movs	r5, r0
        27a508:	1a000005 	bne	27a524 <CXIPObjectPipe::Init(TStore *, unsigned long)+0x124>
        27a50c:	e1a02008 	mov	r2, r8
        27a510:	e1a01007 	mov	r1, r7
        27a514:	e1a00004 	mov	r0, r4
        27a518:	e3a03001 	mov	r3, #1	; 0x1
        27a51c:	eb65bbdc 	bl	1be9494 <CBufferPipe::$Init(CBufferSegment *, CBufferSegment *, unsigned char)>
        27a520:	ea00000b 	b	27a554 <CXIPObjectPipe::Init(TStore *, unsigned long)+0x154>
        27a524:	e3350000 	teq	r5, #0	; 0x0
        27a528:	0a000009 	beq	27a554 <CXIPObjectPipe::Init(TStore *, unsigned long)+0x154>
        27a52c:	e1b00007 	movs	r0, r7
        27a530:	0a000002 	beq	27a540 <CXIPObjectPipe::Init(TStore *, unsigned long)+0x140>
        27a534:	e3a01001 	mov	r1, #1	; 0x1
        27a538:	e1a0e00f 	mov	lr, pc
        27a53c:	e590f000 	ldr	pc, [r0]
        27a540:	e1a01005 	mov	r1, r5
        27a544:	e59f000c 	ldr	r0, [pc, #c]	; 27a558 <CXIPObjectPipe::Init(TStore *, unsigned long)+0x158>
        27a548:	e5900000 	ldr	r0, [r0]
        27a54c:	e3a02000 	mov	r2, #0	; 0x0
        27a550:	eb65a311 	bl	1be319c <$Throw>
        27a554:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        27a558:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CXIPObjectPipe::FlushRead(void)
 * Address: 0027a55c
 */
CXIPObjectPipe::FlushRead(void) {
    /*
        27a55c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        27a560:	e3300000 	teq	r0, #0	; 0x0
        27a564:	01a0f00e 	moveq	pc, lr
        27a568:	e3a02001 	mov	r2, #1	; 0x1
        27a56c:	e3a01000 	mov	r1, #0	; 0x0
        27a570:	e5903000 	ldr	r3, [r0]
        27a574:	e283f038 	add	pc, r3, #56	; 0x38
    */
}

/**
 * Symbol: CXIPObjectPipe::FlushWrite(void)
 * Address: 0027a578
 */
CXIPObjectPipe::FlushWrite(void) {
    /*
        27a578:	e5901000 	ldr	r1, [r0]
        27a57c:	e281f030 	add	pc, r1, #48	; 0x30
    */
}

/**
 * Symbol: CXIPObjectPipe::Overflow(void)
 * Address: 0027a580
 */
CXIPObjectPipe::Overflow(void) {
    /*
        27a580:	e59f0010 	ldr	r0, [pc, #10]	; 27a598 <CXIPObjectPipe::Overflow(void)+0x18>
        27a584:	e5900000 	ldr	r0, [r0]
        27a588:	e3a02000 	mov	r2, #0	; 0x0
        27a58c:	e3a010ea 	mov	r1, #234	; 0xea
        27a590:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        27a594:	ea65a300 	b	1be319c <$Throw>
        27a598:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CXIPObjectPipe::Underflow(long, unsigned char &)
 * Address: 0027a59c
 */
CXIPObjectPipe::Underflow(long, unsigned char &) {
    /*
        27a59c:	e1a0c00d 	mov	ip, sp
        27a5a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        27a5a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        27a5a8:	e1a04000 	mov	r4, r0
        27a5ac:	e3a050ea 	mov	r5, #234	; 0xea
        27a5b0:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        27a5b4:	e2801020 	add	r1, r0, #32	; 0x20
        27a5b8:	e8910003 	ldmia	r1, {r0, r1}
        27a5bc:	e1510000 	cmp	r1, r0
        27a5c0:	23a05049 	movcs	r5, #73	; 0x49
        27a5c4:	22455c37 	subcs	r5, r5, #14080	; 0x3700
        27a5c8:	2a00005a 	bcs	27a738 <CXIPObjectPipe::Underflow(long, unsigned char &)+0x19c>
        27a5cc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        27a5d0:	e3300000 	teq	r0, #0	; 0x0
        27a5d4:	0a000057 	beq	27a738 <CXIPObjectPipe::Underflow(long, unsigned char &)+0x19c>
        27a5d8:	e24ddf53 	sub	sp, sp, #332	; 0x14c
        27a5dc:	e28d0004 	add	r0, sp, #4	; 0x4
        27a5e0:	eb6260d9 	bl	1b1294c <TXIPCRelocator::$__ct(void)>
        27a5e4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        27a5e8:	e5901000 	ldr	r1, [r0]
        27a5ec:	e1a0e00f 	mov	lr, pc
        27a5f0:	e281f028 	add	pc, r1, #40	; 0x28
        27a5f4:	e3a03004 	mov	r3, #4	; 0x4
        27a5f8:	e92d0008 	stmdb	sp!, {r3}
        27a5fc:	e5940024 	ldr	r0, [r4, #36]	; fField36
        27a600:	e1a02100 	mov	r2, r0, lsl #2
        27a604:	e28d3f53 	add	r3, sp, #332	; 0x14c
        27a608:	e2841010 	add	r1, r4, #16	; 0x10
        27a60c:	e8910003 	ldmia	r1, {r0, r1}
        27a610:	eb621eca 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a614:	e28dd004 	add	sp, sp, #4	; 0x4
        27a618:	e1b05000 	movs	r5, r0
        27a61c:	1a00003d 	bne	27a718 <CXIPObjectPipe::Underflow(long, unsigned char &)+0x17c>
        27a620:	e28d2f51 	add	r2, sp, #324	; 0x144
        27a624:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27a628:	e59d1148 	ldr	r1, [sp, #328]
        27a62c:	eb6201b3 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        27a630:	e1b05000 	movs	r5, r0
        27a634:	1a000037 	bne	27a718 <CXIPObjectPipe::Underflow(long, unsigned char &)+0x17c>
        27a638:	e1a0300d 	mov	r3, sp
        27a63c:	e59d2144 	ldr	r2, [sp, #324]
        27a640:	e1a00002 	mov	r0, r2
        27a644:	e3520000 	cmp	r2, #0	; 0x0
        27a648:	b2422001 	sublt	r2, r2, #1	; 0x1
        27a64c:	b2822b01 	addlt	r2, r2, #1024	; 0x400
        27a650:	e1a02542 	mov	r2, r2, asr #10
        27a654:	e92d000c 	stmdb	sp!, {r2, r3}
        27a658:	e5941024 	ldr	r1, [r4, #36]	; fField36
        27a65c:	b2400001 	sublt	r0, r0, #1	; 0x1
        27a660:	b2800b01 	addlt	r0, r0, #1024	; 0x400
        27a664:	e1a00540 	mov	r0, r0, asr #10
        27a668:	e0010190 	mul	r1, r0, r1
        27a66c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        27a670:	e0813000 	add	r3, r1, r0
        27a674:	e5941010 	ldr	r1, [r4, #16]	; fField16
        27a678:	e59d2150 	ldr	r2, [sp, #336]
        27a67c:	e28d000c 	add	r0, sp, #12	; 0xc
        27a680:	eb62545c 	bl	1b0f7f8 <TXIPCRelocator::$Init(TStore *, unsigned long, unsigned long, unsigned long, unsigned long *)>
        27a684:	e28dd008 	add	sp, sp, #8	; 0x8
        27a688:	e59d0144 	ldr	r0, [sp, #324]
        27a68c:	e3500000 	cmp	r0, #0	; 0x0
        27a690:	b2400001 	sublt	r0, r0, #1	; 0x1
        27a694:	b2800b01 	addlt	r0, r0, #1024	; 0x400
        27a698:	e1a00540 	mov	r0, r0, asr #10
        27a69c:	e1a00100 	mov	r0, r0, lsl #2
        27a6a0:	e5941028 	ldr	r1, [r4, #40]	; fField40
        27a6a4:	e0800101 	add	r0, r0, r1, lsl #2
        27a6a8:	e280200c 	add	r2, r0, #12	; 0xc
        27a6ac:	e3a03004 	mov	r3, #4	; 0x4
        27a6b0:	e92d0008 	stmdb	sp!, {r3}
        27a6b4:	e28d3f51 	add	r3, sp, #324	; 0x144
        27a6b8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27a6bc:	e59d114c 	ldr	r1, [sp, #332]
        27a6c0:	eb621e9e 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a6c4:	e28dd004 	add	sp, sp, #4	; 0x4
        27a6c8:	e1b05000 	movs	r5, r0
        27a6cc:	1a000011 	bne	27a718 <CXIPObjectPipe::Underflow(long, unsigned char &)+0x17c>
        27a6d0:	e59d0144 	ldr	r0, [sp, #324]
        27a6d4:	e3500000 	cmp	r0, #0	; 0x0
        27a6d8:	b2400001 	sublt	r0, r0, #1	; 0x1
        27a6dc:	b2800b01 	addlt	r0, r0, #1024	; 0x400
        27a6e0:	e1a00540 	mov	r0, r0, asr #10
        27a6e4:	e1a01180 	mov	r1, r0, lsl #3
        27a6e8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        27a6ec:	e0810500 	add	r0, r1, r0, lsl #10
        27a6f0:	e280200c 	add	r2, r0, #12	; 0xc
        27a6f4:	e3a03b01 	mov	r3, #1024	; 0x400
        27a6f8:	e92d0008 	stmdb	sp!, {r3}
        27a6fc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27a700:	e5943018 	ldr	r3, [r4, #24]	; fField24
        27a704:	e59d114c 	ldr	r1, [sp, #332]
        27a708:	eb621e8c 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a70c:	e28dd004 	add	sp, sp, #4	; 0x4
        27a710:	e1b05000 	movs	r5, r0
        27a714:	0a00000d 	beq	27a750 <CXIPObjectPipe::Underflow(long, unsigned char &)+0x1b4>
        27a718:	e28d0004 	add	r0, sp, #4	; 0x4
        27a71c:	e3a01000 	mov	r1, #0	; 0x0
        27a720:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        27a724:	e1a0e00f 	mov	lr, pc
        27a728:	e282f008 	add	pc, r2, #8	; 0x8
        27a72c:	e28ddf53 	add	sp, sp, #332	; 0x14c
        27a730:	e3350000 	teq	r5, #0	; 0x0
        27a734:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        27a738:	e1a01005 	mov	r1, r5
        27a73c:	e59f00d0 	ldr	r0, [pc, #d0]	; 27a814 <CXIPObjectPipe::Underflow(long, unsigned char &)+0x278>
        27a740:	e5900000 	ldr	r0, [r0]
        27a744:	e3a02000 	mov	r2, #0	; 0x0
        27a748:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        27a74c:	ea65a292 	b	1be319c <$Throw>
        27a750:	e28d0004 	add	r0, sp, #4	; 0x4
        27a754:	e594102c 	ldr	r1, [r4, #44]	; fField44
        27a758:	e2612000 	rsb	r2, r1, #0	; 0x0
        27a75c:	e59d1000 	ldr	r1, [sp]
        27a760:	e0822001 	add	r2, r2, r1
        27a764:	e5941018 	ldr	r1, [r4, #24]	; fField24
        27a768:	e1a0e00f 	mov	lr, pc
        27a76c:	e59df004 	ldr	pc, [sp, #4]	; fField4
        27a770:	e594002c 	ldr	r0, [r4, #44]	; fField44
        27a774:	e2600000 	rsb	r0, r0, #0	; 0x0
        27a778:	e59d1000 	ldr	r1, [sp]
        27a77c:	e0802001 	add	r2, r0, r1
        27a780:	e28d3004 	add	r3, sp, #4	; 0x4
        27a784:	e28d0d05 	add	r0, sp, #320	; 0x140
        27a788:	e5941018 	ldr	r1, [r4, #24]	; fField24
        27a78c:	eb5f70f6 	bl	1a56b6c <$RelocateFramesInPage(FrameRelocationHeader *, char *, long, TCRelocator *)>
        27a790:	e5943004 	ldr	r3, [r4, #4]	; fField4
        27a794:	e1a00003 	mov	r0, r3
        27a798:	e3a02b01 	mov	r2, #1024	; 0x400
        27a79c:	e5941018 	ldr	r1, [r4, #24]	; fField24
        27a7a0:	e5933000 	ldr	r3, [r3]
        27a7a4:	e1a0e00f 	mov	lr, pc
        27a7a8:	e283f020 	add	pc, r3, #32	; 0x20
        27a7ac:	e3e02000 	mvn	r2, #0	; 0x0
        27a7b0:	e3a01000 	mov	r1, #0	; 0x0
        27a7b4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        27a7b8:	e5903000 	ldr	r3, [r0]
        27a7bc:	e1a0e00f 	mov	lr, pc
        27a7c0:	e283f038 	add	pc, r3, #56	; 0x38
        27a7c4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        27a7c8:	e2800001 	add	r0, r0, #1	; 0x1
        27a7cc:	e5840028 	str	r0, [r4, #40]	; fField40
        27a7d0:	e59d1144 	ldr	r1, [sp, #324]
        27a7d4:	e3510000 	cmp	r1, #0	; 0x0
        27a7d8:	b2411001 	sublt	r1, r1, #1	; 0x1
        27a7dc:	b2811b01 	addlt	r1, r1, #1024	; 0x400
        27a7e0:	e1500541 	cmp	r0, r1, asr #10
        27a7e4:	3a000004 	bcc	27a7fc <CXIPObjectPipe::Underflow(long, unsigned char &)+0x260>
        27a7e8:	e5940024 	ldr	r0, [r4, #36]	; fField36
        27a7ec:	e2800001 	add	r0, r0, #1	; 0x1
        27a7f0:	e5840024 	str	r0, [r4, #36]	; fField36
        27a7f4:	e3a00000 	mov	r0, #0	; 0x0
        27a7f8:	e5a40028 	str	r0, [r4, #40]!	; fField40
        27a7fc:	e28d0004 	add	r0, sp, #4	; 0x4
        27a800:	e3a01000 	mov	r1, #0	; 0x0
        27a804:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        27a808:	e1a0e00f 	mov	lr, pc
        27a80c:	e282f008 	add	pc, r2, #8	; 0x8
        27a810:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        27a814:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CXIPObjectPipe::Reset(void)
 * Address: 0027a818
 */
CXIPObjectPipe::Reset(void) {
    /*
        27a818:	ea65c790 	b	1bec660 <CBufferPipe::$Reset(void)>
    */
}

