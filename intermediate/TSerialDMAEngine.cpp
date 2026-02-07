#include "include/TSerialDMAEngine.h"

/**
 * Symbol: TSerialDMAEngine::__ct(void)
 * Address: 001d927c
 */
TSerialDMAEngine::TSerialDMAEngine(void) {
    /*
        1d927c:	e1a0c00d 	mov	ip, sp
        1d9280:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1d9284:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9288:	e3300000 	teq	r0, #0	; 0x0
        1d928c:	1a000003 	bne	1d92a0 <TSerialDMAEngine::__ct(void)+0x24>
        1d9290:	e3a00040 	mov	r0, #64	; 0x40
        1d9294:	eb67d527 	bl	1bce738 <$__nw(unsigned int)>
        1d9298:	e3300000 	teq	r0, #0	; 0x0
        1d929c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1d92a0:	e3a01000 	mov	r1, #0	; 0x0
        1d92a4:	e5801000 	str	r1, [r0]
        1d92a8:	e5801004 	str	r1, [r0, #4]	; fField4
        1d92ac:	e5801024 	str	r1, [r0, #36]	; fField36
        1d92b0:	e5801008 	str	r1, [r0, #8]	; fField8
        1d92b4:	e5c0103d 	strb	r1, [r0, #61]	; fField61
        1d92b8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialDMAEngine::__dt(void)
 * Address: 001d92bc
 */
TSerialDMAEngine::~TSerialDMAEngine(void) {
    /*
        1d92bc:	e1a0c00d 	mov	ip, sp
        1d92c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d92c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d92c8:	e1a04000 	mov	r4, r0
        1d92cc:	e1a05001 	mov	r5, r1
        1d92d0:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
        1d92d4:	e3300000 	teq	r0, #0	; 0x0
        1d92d8:	12841040 	addne	r1, r4, #64	; 0x40
        1d92dc:	11a00004 	movne	r0, r4
        1d92e0:	1b6812ee 	blne	1bddea0 <$UnlockHeapRange>
        1d92e4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1d92e8:	e3300000 	teq	r0, #0	; 0x0
        1d92ec:	1b68c082 	blne	1c094fc <$DeregisterInterrupt(InterruptObject *)>
        1d92f0:	e3150001 	tst	r5, #1	; 0x1
        1d92f4:	11a00004 	movne	r0, r4
        1d92f8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1d92fc:	1a67d0f7 	bne	1bcd6e0 <$__dl(void *)>
        1d9300:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialDMAEngine::StopRxDMA(void)
 * Address: 001d9304
 */
TSerialDMAEngine::StopRxDMA(void) {
    /*
        1d9304:	e1a0c00d 	mov	ip, sp
        1d9308:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d930c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9310:	e1a04000 	mov	r4, r0
        1d9314:	e5902000 	ldr	r2, [r0]
        1d9318:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1d931c:	e3a01000 	mov	r1, #0	; 0x0
        1d9320:	e5801000 	str	r1, [r0]
        1d9324:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1d9328:	e59f106c 	ldr	r1, [pc, #6c]	; 1d939c <TSerialDMAEngine::StopRxDMA(void)+0x98>
        1d932c:	e5810000 	str	r0, [r1]
        1d9330:	e2820a01 	add	r0, r2, #4096	; 0x1000
        1d9334:	e5900000 	ldr	r0, [r0]
        1d9338:	e5941038 	ldr	r1, [r4, #56]	; fField56
        1d933c:	e0510000 	subs	r0, r1, r0
        1d9340:	13310000 	teqne	r1, #0	; 0x0
        1d9344:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1d9348:	e5921400 	ldr	r1, [r2, #1024]
        1d934c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d9350:	e594302c 	ldr	r3, [r4, #44]	; fField44
        1d9354:	e0411003 	sub	r1, r1, r3
        1d9358:	e58d1000 	str	r1, [sp]
        1d935c:	e5943010 	ldr	r3, [r4, #16]	; fField16
        1d9360:	e3130002 	tst	r3, #2	; 0x2
        1d9364:	0a00000d 	beq	1d93a0 <TSerialDMAEngine::StopRxDMA(void)+0x9c>
        1d9368:	e1a0100d 	mov	r1, sp
        1d936c:	e3a02000 	mov	r2, #0	; 0x0
        1d9370:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d9374:	e5945038 	ldr	r5, [r4, #56]	; fField56
        1d9378:	eb68b3f5 	bl	1c06354 <TCircleBuf::$DMAPutInfo(unsigned long *, unsigned long *)>
        1d937c:	e59d0000 	ldr	r0, [sp]
        1d9380:	e0800005 	add	r0, r0, r5
        1d9384:	e58d0000 	str	r0, [sp]
        1d9388:	e1a01000 	mov	r1, r0
        1d938c:	e5942030 	ldr	r2, [r4, #48]	; fField48
        1d9390:	e1520000 	cmp	r2, r0
        1d9394:	8a000020 	bhi	1d941c <TSerialDMAEngine::StopRxDMA(void)+0x118>
        1d9398:	ea00001d 	b	1d9414 <TSerialDMAEngine::StopRxDMA(void)+0x110>
        1d939c:	0f098400 	swieq	0x00098400
        1d93a0:	e59f3094 	ldr	r3, [pc, #94]	; 1d943c <TSerialDMAEngine::StopRxDMA(void)+0x138>
        1d93a4:	e5933000 	ldr	r3, [r3]
        1d93a8:	e594c00c 	ldr	ip, [r4, #12]	; fField12
        1d93ac:	e113000c 	tst	r3, ip
        1d93b0:	0a000019 	beq	1d941c <TSerialDMAEngine::StopRxDMA(void)+0x118>
        1d93b4:	e3c11003 	bic	r1, r1, #3	; 0x3
        1d93b8:	e58d1000 	str	r1, [sp]
        1d93bc:	e5943028 	ldr	r3, [r4, #40]	; fField40
        1d93c0:	e0831001 	add	r1, r3, r1
        1d93c4:	e5922800 	ldr	r2, [r2, #2048]
        1d93c8:	e5943034 	ldr	r3, [r4, #52]	; fField52
        1d93cc:	e0830000 	add	r0, r3, r0
        1d93d0:	e2003003 	and	r3, r0, #3	; 0x3
        1d93d4:	e2630004 	rsb	r0, r3, #4	; 0x4
        1d93d8:	e1a0c180 	mov	ip, r0, lsl #3
        1d93dc:	e3e00000 	mvn	r0, #0	; 0x0
        1d93e0:	e1a00c10 	mov	r0, r0, lsl ip
        1d93e4:	e0022000 	and	r2, r2, r0
        1d93e8:	e591c000 	ldr	ip, [r1]
        1d93ec:	e1cc0000 	bic	r0, ip, r0
        1d93f0:	e1800002 	orr	r0, r0, r2
        1d93f4:	e5810000 	str	r0, [r1]
        1d93f8:	e59d0000 	ldr	r0, [sp]
        1d93fc:	e0800003 	add	r0, r0, r3
        1d9400:	e58d0000 	str	r0, [sp]
        1d9404:	e1a01000 	mov	r1, r0
        1d9408:	e5942030 	ldr	r2, [r4, #48]	; fField48
        1d940c:	e1520000 	cmp	r2, r0
        1d9410:	8a000001 	bhi	1d941c <TSerialDMAEngine::StopRxDMA(void)+0x118>
        1d9414:	e0410002 	sub	r0, r1, r2
        1d9418:	e58d0000 	str	r0, [sp]
        1d941c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d9420:	e3a03000 	mov	r3, #0	; 0x0
        1d9424:	e3a02000 	mov	r2, #0	; 0x0
        1d9428:	e59d1000 	ldr	r1, [sp]
        1d942c:	eb68b3c9 	bl	1c06358 <TCircleBuf::$DMAPutUpdate(unsigned long, unsigned char, unsigned long)>
        1d9430:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        1d9434:	eb68b7d2 	bl	1c07384 <TCircleBuf::$PutNextCommit(void)>
        1d9438:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1d943c:	0f098800 	swieq	0x00098800
    */
}

/**
 * Symbol: TSerialDMAEngine::StartTxDMA(void)
 * Address: 001d9440
 */
TSerialDMAEngine::StartTxDMA(void) {
    /*
        1d9440:	e1a0c00d 	mov	ip, sp
        1d9444:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d9448:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d944c:	e1a04000 	mov	r4, r0
        1d9450:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d9454:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d9458:	eb68b3b3 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
        1d945c:	e1a05000 	mov	r5, r0
        1d9460:	e1a0100d 	mov	r1, sp
        1d9464:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d9468:	eb68b3b7 	bl	1c0634c <TCircleBuf::$DMAGetInfo(unsigned long *)>
        1d946c:	e8940003 	ldmia	r4, {r0, r1}
        1d9470:	e2802b03 	add	r2, r0, #3072	; 0xc00
        1d9474:	e3a030c0 	mov	r3, #192	; 0xc0
        1d9478:	e5823000 	str	r3, [r2]
        1d947c:	e2802b01 	add	r2, r0, #1024	; 0x400
        1d9480:	e594302c 	ldr	r3, [r4, #44]	; fField44
        1d9484:	e59dc000 	ldr	ip, [sp]
        1d9488:	e083300c 	add	r3, r3, ip
        1d948c:	e5823000 	str	r3, [r2]
        1d9490:	e2802a01 	add	r2, r0, #4096	; 0x1000
        1d9494:	e5825000 	str	r5, [r2]
        1d9498:	e2800b05 	add	r0, r0, #5120	; 0x1400
        1d949c:	e5942030 	ldr	r2, [r4, #48]	; fField48
        1d94a0:	e59d3000 	ldr	r3, [sp]
        1d94a4:	e0422003 	sub	r2, r2, r3
        1d94a8:	e5802000 	str	r2, [r0]
        1d94ac:	e2810b02 	add	r0, r1, #2048	; 0x800
        1d94b0:	e5912400 	ldr	r2, [r1, #1024]
        1d94b4:	e5802000 	str	r2, [r0]
        1d94b8:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1d94bc:	e5810000 	str	r0, [r1]
        1d94c0:	e3a01926 	mov	r1, #622592	; 0x98000
        1d94c4:	e281140f 	add	r1, r1, #251658240	; 0xf000000
        1d94c8:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        1d94cc:	e5810000 	str	r0, [r1]
        1d94d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialDMAEngine::StopTxDMA(unsigned char)
 * Address: 001d94d4
 */
TSerialDMAEngine::StopTxDMA(unsigned char) {
    /*
        1d94d4:	e1a0c00d 	mov	ip, sp
        1d94d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d94dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d94e0:	e1a04000 	mov	r4, r0
        1d94e4:	e31100ff 	tst	r1, #255	; 0xff
        1d94e8:	e594500c 	ldr	r5, [r4, #12]	; fField12
        1d94ec:	0a00000a 	beq	1d951c <TSerialDMAEngine::StopTxDMA(unsigned char)+0x48>
        1d94f0:	e3a06000 	mov	r6, #0	; 0x0
        1d94f4:	e3a07926 	mov	r7, #622592	; 0x98000
        1d94f8:	e287740f 	add	r7, r7, #251658240	; 0xf000000
        1d94fc:	e5970000 	ldr	r0, [r7]
        1d9500:	e1100005 	tst	r0, r5
        1d9504:	0a000004 	beq	1d951c <TSerialDMAEngine::StopTxDMA(unsigned char)+0x48>
        1d9508:	e3a000b9 	mov	r0, #185	; 0xb9
        1d950c:	eb68926d 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
        1d9510:	e2866001 	add	r6, r6, #1	; 0x1
        1d9514:	e3560064 	cmp	r6, #100	; 0x64
        1d9518:	bafffff7 	blt	1d94fc <TSerialDMAEngine::StopTxDMA(unsigned char)+0x28>
        1d951c:	e3a01000 	mov	r1, #0	; 0x0
        1d9520:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1d9524:	e5801000 	str	r1, [r0]
        1d9528:	e59f001c 	ldr	r0, [pc, #1c]	; 1d954c <TSerialDMAEngine::StopTxDMA(unsigned char)+0x78>
        1d952c:	e5805000 	str	r5, [r0]
        1d9530:	e3a01000 	mov	r1, #0	; 0x0
        1d9534:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d9538:	eb68b383 	bl	1c0634c <TCircleBuf::$DMAGetInfo(unsigned long *)>
        1d953c:	e1a01000 	mov	r1, r0
        1d9540:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        1d9544:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1d9548:	ea68b380 	b	1c06350 <TCircleBuf::$DMAGetUpdate(unsigned long)>
        1d954c:	0f098400 	swieq	0x00098400
    */
}

/**
 * Symbol: TSerialDMAEngine::DMAInterrupt(void)
 * Address: 001d9550
 */
TSerialDMAEngine::DMAInterrupt(void) {
    /*
        1d9550:	e590101c 	ldr	r1, [r0, #28]	; fField28
        1d9554:	e3310000 	teq	r1, #0	; 0x0
        1d9558:	11a00001 	movne	r0, r1
        1d955c:	1a624c45 	bne	1a6c678 <TSerialDMAEngine::$DMAInterrupt(void)>
        1d9560:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1d9564:	e5921400 	ldr	r1, [r2, #1024]
        1d9568:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1d956c:	e1833001 	orr	r3, r3, r1
        1d9570:	e5803010 	str	r3, [r0, #16]	; fField16
        1d9574:	e5a21800 	str	r1, [r2, #2048]!
        1d9578:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1d957c:	e3310000 	teq	r1, #0	; 0x0
        1d9580:	15b02018 	ldrne	r2, [r0, #24]!	; fField24
        1d9584:	13320000 	teqne	r2, #0	; 0x0
        1d9588:	11a00001 	movne	r0, r1
        1d958c:	1282f000 	addne	pc, r2, #0	; 0x0
        1d9590:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialDMAEngine::Init(TDMAChannelDiscriptor *, void *, unsigned char)
 * Address: 001d9594
 */
TSerialDMAEngine::Init(TDMAChannelDiscriptor *, void *, unsigned char) {
    /*
        1d9594:	e1a0c00d 	mov	ip, sp
        1d9598:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1d959c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d95a0:	e1a04000 	mov	r4, r0
        1d95a4:	e1a05001 	mov	r5, r1
        1d95a8:	e20390ff 	and	r9, r3, #255	; 0xff
        1d95ac:	e5910000 	ldr	r0, [r1]
        1d95b0:	e5840000 	str	r0, [r4]
        1d95b4:	e5910004 	ldr	r0, [r1, #4]	; fField4
        1d95b8:	e5840004 	str	r0, [r4, #4]	; fField4
        1d95bc:	e5910008 	ldr	r0, [r1, #8]	; fField8
        1d95c0:	e3a08000 	mov	r8, #0	; 0x0
        1d95c4:	e584000c 	str	r0, [r4, #12]	; fField12
        1d95c8:	e2844014 	add	r4, r4, #20	; 0x14
        1d95cc:	e8840104 	stmia	r4, {r2, r8}
        1d95d0:	e5848018 	str	r8, [r4, #24]	; fField24
        1d95d4:	e5848008 	str	r8, [r4, #8]	; fField8
        1d95d8:	e5248004 	str	r8, [r4, -#4]!	; fField4
        1d95dc:	e2444010 	sub	r4, r4, #16	; 0x10
        1d95e0:	e2841040 	add	r1, r4, #64	; 0x40
        1d95e4:	e1a00004 	mov	r0, r4
        1d95e8:	e3a02001 	mov	r2, #1	; 0x1
        1d95ec:	eb67f558 	bl	1bd6b54 <$LockHeapRange>
        1d95f0:	e1b06000 	movs	r6, r0
        1d95f4:	1a000019 	bne	1d9660 <TSerialDMAEngine::Init(TDMAChannelDiscriptor *, void *, unsigned char)+0xcc>
        1d95f8:	e3a07001 	mov	r7, #1	; 0x1
        1d95fc:	e5c4703d 	strb	r7, [r4, #61]	; fField61
        1d9600:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1d9604:	e5808000 	str	r8, [r0]
        1d9608:	e3390000 	teq	r9, #0	; 0x0
        1d960c:	0a000013 	beq	1d9660 <TSerialDMAEngine::Init(TDMAChannelDiscriptor *, void *, unsigned char)+0xcc>
        1d9610:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1d9614:	e5808000 	str	r8, [r0]
        1d9618:	e5b5000c 	ldr	r0, [r5, #12]!	; fField12
        1d961c:	e59f2044 	ldr	r2, [pc, #44]	; 1d9668 <TSerialDMAEngine::Init(TDMAChannelDiscriptor *, void *, unsigned char)+0xd4>	; fField44
        1d9620:	e1a01004 	mov	r1, r4
        1d9624:	e3a03001 	mov	r3, #1	; 0x1
        1d9628:	eb67fd8f 	bl	1bd8c6c <$RegisterInterrupt(unsigned long, void *, long (*)(void *), void *)>
        1d962c:	e5840008 	str	r0, [r4, #8]	; fField8
        1d9630:	e3300000 	teq	r0, #0	; 0x0
        1d9634:	03a060e9 	moveq	r6, #233	; 0xe9
        1d9638:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        1d963c:	0a000007 	beq	1d9660 <TSerialDMAEngine::Init(TDMAChannelDiscriptor *, void *, unsigned char)+0xcc>
        1d9640:	e1a01007 	mov	r1, r7
        1d9644:	e1a02007 	mov	r2, r7
        1d9648:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1d964c:	eb68bfa9 	bl	1c094f8 <$ChangeInterruptPriority(InterruptObject *, InterruptPriority)>
        1d9650:	e1b06000 	movs	r6, r0
        1d9654:	03a01001 	moveq	r1, #1	; 0x1
        1d9658:	05b40008 	ldreq	r0, [r4, #8]!	; fField8
        1d965c:	0b6889dd 	bleq	1bfbdd8 <$EnableInterrupt>
        1d9660:	e1a00006 	mov	r0, r6
        1d9664:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1d9668:	01a6c678 	moveq	ip, r8, ror r6
    */
}

/**
 * Symbol: TSerialDMAEngine::BindToBuffer(TCircleBuf *, unsigned char)
 * Address: 001d966c
 */
TSerialDMAEngine::BindToBuffer(TCircleBuf *, unsigned char) {
    /*
        1d966c:	e1a0c00d 	mov	ip, sp
        1d9670:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d9674:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9678:	e1a04000 	mov	r4, r0
        1d967c:	e3a05000 	mov	r5, #0	; 0x0
        1d9680:	e5841024 	str	r1, [r4, #36]	; fField36
        1d9684:	e5c0203c 	strb	r2, [r0, #60]
        1d9688:	e3a03000 	mov	r3, #0	; 0x0
        1d968c:	e92d0008 	stmdb	sp!, {r3}
        1d9690:	e280202c 	add	r2, r0, #44	; 0x2c
        1d9694:	e280c030 	add	ip, r0, #48	; 0x30
        1d9698:	e1a00001 	mov	r0, r1
        1d969c:	e1a0100c 	mov	r1, ip
        1d96a0:	eb68b328 	bl	1c06348 <TCircleBuf::$DMABufInfo(unsigned long *, unsigned long *, unsigned char *, unsigned char *)>
        1d96a4:	e28dd004 	add	sp, sp, #4	; 0x4
        1d96a8:	e5840028 	str	r0, [r4, #40]	; fField40
        1d96ac:	e5940030 	ldr	r0, [r4, #48]	; fField48
        1d96b0:	e3100003 	tst	r0, #3	; 0x3
        1d96b4:	13e05033 	mvnne	r5, #51	; 0x33
        1d96b8:	12455c2a 	subne	r5, r5, #10752	; 0x2a00
        1d96bc:	1a00000b 	bne	1d96f0 <TSerialDMAEngine::BindToBuffer(TCircleBuf *, unsigned char)+0x84>
        1d96c0:	e594102c 	ldr	r1, [r4, #44]	; fField44
        1d96c4:	e3310000 	teq	r1, #0	; 0x0
        1d96c8:	03a050e9 	moveq	r5, #233	; 0xe9
        1d96cc:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
        1d96d0:	0a000006 	beq	1d96f0 <TSerialDMAEngine::BindToBuffer(TCircleBuf *, unsigned char)+0x84>
        1d96d4:	e5940000 	ldr	r0, [r4]
        1d96d8:	e5801000 	str	r1, [r0]
        1d96dc:	e5940000 	ldr	r0, [r4]
        1d96e0:	e2801b06 	add	r1, r0, #6144	; 0x1800
        1d96e4:	e3a00000 	mov	r0, #0	; 0x0
        1d96e8:	e5810000 	str	r0, [r1]
        1d96ec:	e5a40020 	str	r0, [r4, #32]!	; fField32
        1d96f0:	e1a00005 	mov	r0, r5
        1d96f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialDMAEngine::ConfigureInterrupts(unsigned long, long (*)(void *))
 * Address: 001d96f8
 */
TSerialDMAEngine::ConfigureInterrupts(unsigned long, long (*)(void *)) {
    /*
        1d96f8:	e5801020 	str	r1, [r0, #32]	; fField32
        1d96fc:	e5802018 	str	r2, [r0, #24]	; fField24
        1d9700:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1d9704:	e5a01c00 	str	r1, [r0, #3072]!	; fField3072
        1d9708:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialDMAEngine::PauseDMA(unsigned char)
 * Address: 001d970c
 */
TSerialDMAEngine::PauseDMA(unsigned char) {
    /*
        1d970c:	e31100ff 	tst	r1, #255	; 0xff
        1d9710:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1d9714:	03a01926 	moveq	r1, #622592	; 0x98000
        1d9718:	0281140f 	addeq	r1, r1, #251658240	; 0xf000000
        1d971c:	159f1004 	ldrne	r1, [pc, #4]	; 1d9728 <TSerialDMAEngine::PauseDMA(unsigned char)+0x1c>	; fField4
        1d9720:	e5810000 	str	r0, [r1]
        1d9724:	e1a0f00e 	mov	pc, lr
        1d9728:	0f098400 	swieq	0x00098400
    */
}

/**
 * Symbol: TSerialDMAEngine::ShareEngine(void *)
 * Address: 001d972c
 */
TSerialDMAEngine::ShareEngine(void *) {
    /*
        1d972c:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        1d9730:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialDMAEngine::StartIn(void)
 * Address: 001d9734
 */
TSerialDMAEngine::StartIn(void) {
    /*
        1d9734:	e1a0c00d 	mov	ip, sp
        1d9738:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d973c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9740:	e1a04000 	mov	r4, r0
        1d9744:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d9748:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d974c:	e1a0200d 	mov	r2, sp
        1d9750:	e3a01000 	mov	r1, #0	; 0x0
        1d9754:	eb68b2fe 	bl	1c06354 <TCircleBuf::$DMAPutInfo(unsigned long *, unsigned long *)>
        1d9758:	e1a02000 	mov	r2, r0
        1d975c:	e594c030 	ldr	ip, [r4, #48]	; fField48
        1d9760:	e59d1000 	ldr	r1, [sp]
        1d9764:	e04c3001 	sub	r3, ip, r1
        1d9768:	e0400001 	sub	r0, r0, r1
        1d976c:	e2400001 	sub	r0, r0, #1	; 0x1
        1d9770:	e1520001 	cmp	r2, r1
        1d9774:	9080000c 	addls	r0, r0, ip
        1d9778:	e3a02080 	mov	r2, #128	; 0x80
        1d977c:	e5941000 	ldr	r1, [r4]
        1d9780:	e5a12c00 	str	r2, [r1, #3072]!	; fField3072
        1d9784:	e5941000 	ldr	r1, [r4]
        1d9788:	e594c02c 	ldr	ip, [r4, #44]	; fField44
        1d978c:	e59d2000 	ldr	r2, [sp]
        1d9790:	e08c2002 	add	r2, ip, r2
        1d9794:	e5a12400 	str	r2, [r1, #1024]!
        1d9798:	e5941000 	ldr	r1, [r4]
        1d979c:	e2811a01 	add	r1, r1, #4096	; 0x1000
        1d97a0:	e5810000 	str	r0, [r1]
        1d97a4:	e5940000 	ldr	r0, [r4]
        1d97a8:	e2800b05 	add	r0, r0, #5120	; 0x1400
        1d97ac:	e5803000 	str	r3, [r0]
        1d97b0:	e3a01926 	mov	r1, #622592	; 0x98000
        1d97b4:	e281140f 	add	r1, r1, #251658240	; 0xf000000
        1d97b8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1d97bc:	e5810000 	str	r0, [r1]
        1d97c0:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1d97c4:	e2810b02 	add	r0, r1, #2048	; 0x800
        1d97c8:	e5911400 	ldr	r1, [r1, #1024]
        1d97cc:	e5801000 	str	r1, [r0]
        1d97d0:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1d97d4:	e5b4101c 	ldr	r1, [r4, #28]!	; fField28
        1d97d8:	e5801000 	str	r1, [r0]
        1d97dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialDMAEngine::StopIn(int)
 * Address: 001d97e0
 */
TSerialDMAEngine::StopIn(int) {
    /*
        1d97e0:	e92d4000 	stmdb	sp!, {lr}
        1d97e4:	e3a03000 	mov	r3, #0	; 0x0
        1d97e8:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1d97ec:	e5823000 	str	r3, [r2]
        1d97f0:	e590200c 	ldr	r2, [r0, #12]	; fField12
        1d97f4:	e59f3078 	ldr	r3, [pc, #78]	; 1d9874 <TSerialDMAEngine::StopIn(int)+0x94>
        1d97f8:	e5832000 	str	r2, [r3]
        1d97fc:	e5903000 	ldr	r3, [r0]
        1d9800:	e5932400 	ldr	r2, [r3, #1024]
        1d9804:	e590c02c 	ldr	ip, [r0, #44]	; fField44
        1d9808:	e042200c 	sub	r2, r2, ip
        1d980c:	e59fc064 	ldr	ip, [pc, #64]	; 1d9878 <TSerialDMAEngine::StopIn(int)+0x98>
        1d9810:	e59cc000 	ldr	ip, [ip]
        1d9814:	e590e00c 	ldr	lr, [r0, #12]	; fField12
        1d9818:	e11c000e 	tst	ip, lr
        1d981c:	0a000008 	beq	1d9844 <TSerialDMAEngine::StopIn(int)+0x64>
        1d9820:	e5933800 	ldr	r3, [r3, #2048]
        1d9824:	e590c028 	ldr	ip, [r0, #40]	; fField40
        1d9828:	e78c3002 	str	r3, [ip, r2]
        1d982c:	e5903000 	ldr	r3, [r0]
        1d9830:	e2833b05 	add	r3, r3, #5120	; 0x1400
        1d9834:	e5933000 	ldr	r3, [r3]
        1d9838:	e203c003 	and	ip, r3, #3	; 0x3
        1d983c:	e26c3004 	rsb	r3, ip, #4	; 0x4
        1d9840:	e0822003 	add	r2, r2, r3
        1d9844:	e3310000 	teq	r1, #0	; 0x0
        1d9848:	0a000003 	beq	1d985c <TSerialDMAEngine::StopIn(int)+0x7c>
        1d984c:	e1520001 	cmp	r2, r1
        1d9850:	35903030 	ldrcc	r3, [r0, #48]	; fField48
        1d9854:	30832002 	addcc	r2, r3, r2
        1d9858:	e0422001 	sub	r2, r2, r1
        1d985c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d9860:	e1a01002 	mov	r1, r2
        1d9864:	e3a03000 	mov	r3, #0	; 0x0
        1d9868:	e3a02000 	mov	r2, #0	; 0x0
        1d986c:	e8bd4000 	ldmia	sp!, {lr}
        1d9870:	ea68b2b8 	b	1c06358 <TCircleBuf::$DMAPutUpdate(unsigned long, unsigned char, unsigned long)>
        1d9874:	0f098400 	swieq	0x00098400
        1d9878:	0f098800 	swieq	0x00098800
    */
}

/**
 * Symbol: TSerialDMAEngine::StartRxDMA(unsigned long)
 * Address: 001d987c
 */
TSerialDMAEngine::StartRxDMA(unsigned long) {
    /*
        1d987c:	e1a0c00d 	mov	ip, sp
        1d9880:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d9884:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9888:	e1a04000 	mov	r4, r0
        1d988c:	e1a05001 	mov	r5, r1
        1d9890:	e24dd004 	sub	sp, sp, #4	; 0x4
        1d9894:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1d9898:	e1a0100d 	mov	r1, sp
        1d989c:	e3a02000 	mov	r2, #0	; 0x0
        1d98a0:	eb68b2ab 	bl	1c06354 <TCircleBuf::$DMAPutInfo(unsigned long *, unsigned long *)>
        1d98a4:	e1a02000 	mov	r2, r0
        1d98a8:	e594e030 	ldr	lr, [r4, #48]	; fField48
        1d98ac:	e59d1000 	ldr	r1, [sp]
        1d98b0:	e1a03001 	mov	r3, r1
        1d98b4:	e04ec001 	sub	ip, lr, r1
        1d98b8:	e0400001 	sub	r0, r0, r1
        1d98bc:	e2400001 	sub	r0, r0, #1	; 0x1
        1d98c0:	e1520001 	cmp	r2, r1
        1d98c4:	9080000e 	addls	r0, r0, lr
        1d98c8:	e3a01000 	mov	r1, #0	; 0x0
        1d98cc:	e5840038 	str	r0, [r4, #56]	; fField56
        1d98d0:	e3300000 	teq	r0, #0	; 0x0
        1d98d4:	e5841010 	str	r1, [r4, #16]	; fField16
        1d98d8:	e5843034 	str	r3, [r4, #52]	; fField52
        1d98dc:	0a00001c 	beq	1d9954 <TSerialDMAEngine::StartRxDMA(unsigned long)+0xd8>
        1d98e0:	e5941000 	ldr	r1, [r4]
        1d98e4:	e2812b03 	add	r2, r1, #3072	; 0xc00
        1d98e8:	e3a03080 	mov	r3, #128	; 0x80
        1d98ec:	e5823000 	str	r3, [r2]
        1d98f0:	e594202c 	ldr	r2, [r4, #44]	; fField44
        1d98f4:	e5812000 	str	r2, [r1]
        1d98f8:	e1550000 	cmp	r5, r0
        1d98fc:	21a050a5 	movcs	r5, r5, lsr #1
        1d9900:	e2812b01 	add	r2, r1, #1024	; 0x400
        1d9904:	e594e02c 	ldr	lr, [r4, #44]	; fField44
        1d9908:	e59d3000 	ldr	r3, [sp]
        1d990c:	e08e3003 	add	r3, lr, r3
        1d9910:	e5823000 	str	r3, [r2]
        1d9914:	e2812a01 	add	r2, r1, #4096	; 0x1000
        1d9918:	e5820000 	str	r0, [r2]
        1d991c:	e2810b05 	add	r0, r1, #5120	; 0x1400
        1d9920:	e580c000 	str	ip, [r0]
        1d9924:	e2810b06 	add	r0, r1, #6144	; 0x1800
        1d9928:	e5805000 	str	r5, [r0]
        1d992c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1d9930:	e2801b02 	add	r1, r0, #2048	; 0x800
        1d9934:	e5902400 	ldr	r2, [r0, #1024]
        1d9938:	e5812000 	str	r2, [r1]
        1d993c:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1d9940:	e5801000 	str	r1, [r0]
        1d9944:	e3a01926 	mov	r1, #622592	; 0x98000
        1d9948:	e281140f 	add	r1, r1, #251658240	; 0xf000000
        1d994c:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        1d9950:	e5810000 	str	r0, [r1]
        1d9954:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1d9958:	31000000 	tstcc	r0, r0
        1d995c:	54536572 	ldrplb	r6, [r3], -#1394
        1d9960:	69616c43 	stmvsdb	r1!, {r0, r1, r6, sl, fp, sp, lr}^
        1d9964:	68697000 	stmvsda	r9!, {ip, sp, lr}^
    */
}

