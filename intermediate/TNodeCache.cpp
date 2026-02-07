#include "include/TNodeCache.h"

/**
 * Symbol: TNodeCache::__ct(void)
 * Address: 002e9338
 */
TNodeCache::TNodeCache(void) {
    /*
        2e9338:	e1a0c00d 	mov	ip, sp
        2e933c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2e9340:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9344:	e1b04000 	movs	r4, r0
        2e9348:	1a000005 	bne	2e9364 <TNodeCache::__ct(void)+0x2c>
        2e934c:	e3a00010 	mov	r0, #16	; 0x10
        2e9350:	eb6394f8 	bl	1bce738 <$__nw(unsigned int)>
        2e9354:	e1b04000 	movs	r4, r0
        2e9358:	1a000001 	bne	2e9364 <TNodeCache::__ct(void)+0x2c>
        2e935c:	e1a00004 	mov	r0, r4
        2e9360:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2e9364:	e3a00003 	mov	r0, #3	; 0x3
        2e9368:	e5840000 	str	r0, [r4]
        2e936c:	e3a0003c 	mov	r0, #60	; 0x3c
        2e9370:	eb63e36d 	bl	1be212c <$NewHandle>
        2e9374:	e5840004 	str	r0, [r4, #4]	; fField4
        2e9378:	e59f7098 	ldr	r7, [pc, #98]	; 2e9418 <TNodeCache::__ct(void)+0xe0>
        2e937c:	e3a050e9 	mov	r5, #233	; 0xe9
        2e9380:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        2e9384:	e3300000 	teq	r0, #0	; 0x0
        2e9388:	1a000003 	bne	2e939c <TNodeCache::__ct(void)+0x64>
        2e938c:	e3a02000 	mov	r2, #0	; 0x0
        2e9390:	e1a01005 	mov	r1, r5
        2e9394:	e5970000 	ldr	r0, [r7]
        2e9398:	eb63e77f 	bl	1be319c <$Throw>
        2e939c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e93a0:	eb63e359 	bl	1be210c <$HLock>
        2e93a4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e93a8:	e5906000 	ldr	r6, [r0]
        2e93ac:	e5940000 	ldr	r0, [r4]
        2e93b0:	e0800100 	add	r0, r0, r0, lsl #2
        2e93b4:	e0868100 	add	r8, r6, r0, lsl #2
        2e93b8:	e3a09000 	mov	r9, #0	; 0x0
        2e93bc:	e1560008 	cmp	r6, r8
        2e93c0:	2a00000f 	bcs	2e9404 <TNodeCache::__ct(void)+0xcc>
        2e93c4:	e5869000 	str	r9, [r6]
        2e93c8:	e586900c 	str	r9, [r6, #12]	; fField12
        2e93cc:	e5869010 	str	r9, [r6, #16]
        2e93d0:	e5c6900a 	strb	r9, [r6, #10]
        2e93d4:	e3a00c02 	mov	r0, #512	; 0x200
        2e93d8:	eb63e358 	bl	1be2140 <$NewPtr>
        2e93dc:	e5860004 	str	r0, [r6, #4]	; fField4
        2e93e0:	e3300000 	teq	r0, #0	; 0x0
        2e93e4:	1a000003 	bne	2e93f8 <TNodeCache::__ct(void)+0xc0>
        2e93e8:	e3a02000 	mov	r2, #0	; 0x0
        2e93ec:	e1a01005 	mov	r1, r5
        2e93f0:	e5970000 	ldr	r0, [r7]
        2e93f4:	eb63e768 	bl	1be319c <$Throw>
        2e93f8:	e2866014 	add	r6, r6, #20	; 0x14
        2e93fc:	e1560008 	cmp	r6, r8
        2e9400:	3affffef 	bcc	2e93c4 <TNodeCache::__ct(void)+0x8c>
        2e9404:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e9408:	eb63e341 	bl	1be2114 <$HUnlock>
        2e940c:	e5849008 	str	r9, [r4, #8]	; fField8
        2e9410:	e584900c 	str	r9, [r4, #12]	; fField12
        2e9414:	eaffffd0 	b	2e935c <TNodeCache::__ct(void)+0x24>
        2e9418:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TNodeCache::__dt(void)
 * Address: 002e9460
 */
TNodeCache::~TNodeCache(void) {
    /*
        2e9460:	e1a0c00d 	mov	ip, sp
        2e9464:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2e9468:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e946c:	e1a04000 	mov	r4, r0
        2e9470:	e1a05001 	mov	r5, r1
        2e9474:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e9478:	eb63e323 	bl	1be210c <$HLock>
        2e947c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e9480:	e3a06000 	mov	r6, #0	; 0x0
        2e9484:	e5907000 	ldr	r7, [r0]
        2e9488:	e5940000 	ldr	r0, [r4]
        2e948c:	e3500000 	cmp	r0, #0	; 0x0
        2e9490:	da000007 	ble	2e94b4 <TNodeCache::__dt(void)+0x54>
        2e9494:	e0860106 	add	r0, r6, r6, lsl #2
        2e9498:	e0870100 	add	r0, r7, r0, lsl #2
        2e949c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e94a0:	eb63df03 	bl	1be10b4 <$DisposPtr>
        2e94a4:	e2866001 	add	r6, r6, #1	; 0x1
        2e94a8:	e5940000 	ldr	r0, [r4]
        2e94ac:	e1560000 	cmp	r6, r0
        2e94b0:	bafffff7 	blt	2e9494 <TNodeCache::__dt(void)+0x34>
        2e94b4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e94b8:	eb63e315 	bl	1be2114 <$HUnlock>
        2e94bc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e94c0:	eb63defa 	bl	1be10b0 <$DisposHandle>
        2e94c4:	e3150001 	tst	r5, #1	; 0x1
        2e94c8:	11a00004 	movne	r0, r4
        2e94cc:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2e94d0:	1a639082 	bne	1bcd6e0 <$__dl(void *)>
        2e94d4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNodeCache::FindNode(TSoupIndex *, unsigned long)
 * Address: 002e94d8
 */
TNodeCache::FindNode(TSoupIndex *, unsigned long) {
    /*
        2e94d8:	e92d4010 	stmdb	sp!, {r4, lr}
        2e94dc:	e5903004 	ldr	r3, [r0, #4]	; fField4
        2e94e0:	e5933000 	ldr	r3, [r3]
        2e94e4:	e590c000 	ldr	ip, [r0]
        2e94e8:	e08cc10c 	add	ip, ip, ip, lsl #2
        2e94ec:	e083e10c 	add	lr, r3, ip, lsl #2
        2e94f0:	e3a0c000 	mov	ip, #0	; 0x0
        2e94f4:	e153000e 	cmp	r3, lr
        2e94f8:	2a00000e 	bcs	2e9538 <TNodeCache::FindNode(TSoupIndex *, unsigned long)+0x60>
        2e94fc:	e5934000 	ldr	r4, [r3]
        2e9500:	e1340002 	teq	r4, r2
        2e9504:	1a000008 	bne	2e952c <TNodeCache::FindNode(TSoupIndex *, unsigned long)+0x54>
        2e9508:	e5831010 	str	r1, [r3, #16]
        2e950c:	e3a01001 	mov	r1, #1	; 0x1
        2e9510:	e5c3100a 	strb	r1, [r3, #10]
        2e9514:	e5901008 	ldr	r1, [r0, #8]	; fField8
        2e9518:	e2811001 	add	r1, r1, #1	; 0x1
        2e951c:	e5a01008 	str	r1, [r0, #8]!	; fField8
        2e9520:	e583100c 	str	r1, [r3, #12]	; fField12
        2e9524:	e5b3c004 	ldr	ip, [r3, #4]!	; fField4
        2e9528:	ea000002 	b	2e9538 <TNodeCache::FindNode(TSoupIndex *, unsigned long)+0x60>
        2e952c:	e2833014 	add	r3, r3, #20	; 0x14
        2e9530:	e153000e 	cmp	r3, lr
        2e9534:	3afffff0 	bcc	2e94fc <TNodeCache::FindNode(TSoupIndex *, unsigned long)+0x24>
        2e9538:	e1a0000c 	mov	r0, ip
        2e953c:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int)
 * Address: 002e9540
 */
TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int) {
    /*
        2e9540:	e1a0c00d 	mov	ip, sp
        2e9544:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e9548:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e954c:	e24cb014 	sub	fp, ip, #20	; 0x14
        2e9550:	e1a04000 	mov	r4, r0
        2e9554:	e1a05001 	mov	r5, r1
        2e9558:	e59b8018 	ldr	r8, [fp, #24]
        2e955c:	e59b9014 	ldr	r9, [fp, #20]
        2e9560:	e5903004 	ldr	r3, [r0, #4]	; fField4
        2e9564:	e3e00000 	mvn	r0, #0	; 0x0
        2e9568:	e5931000 	ldr	r1, [r3]
        2e956c:	e5942008 	ldr	r2, [r4, #8]	; fField8
        2e9570:	e2826001 	add	r6, r2, #1	; 0x1
        2e9574:	e3a02001 	mov	r2, #1	; 0x1
        2e9578:	e3a0c000 	mov	ip, #0	; 0x0
        2e957c:	e594e000 	ldr	lr, [r4]
        2e9580:	e35e0000 	cmp	lr, #0	; 0x0
        2e9584:	da000012 	ble	2e95d4 <TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int)+0x94>
        2e9588:	e08c710c 	add	r7, ip, ip, lsl #2
        2e958c:	e0817107 	add	r7, r1, r7, lsl #2
        2e9590:	e597a000 	ldr	sl, [r7]
        2e9594:	e33a0000 	teq	sl, #0	; 0x0
        2e9598:	01a0000c 	moveq	r0, ip
        2e959c:	03a02000 	moveq	r2, #0	; 0x0
        2e95a0:	0a000009 	beq	2e95cc <TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int)+0x8c>
        2e95a4:	e5d7a00a 	ldrb	sl, [r7, #10]
        2e95a8:	e33a0000 	teq	sl, #0	; 0x0
        2e95ac:	1a000003 	bne	2e95c0 <TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int)+0x80>
        2e95b0:	e597700c 	ldr	r7, [r7, #12]	; fField12
        2e95b4:	e1570006 	cmp	r7, r6
        2e95b8:	b1a06007 	movlt	r6, r7
        2e95bc:	b1a0000c 	movlt	r0, ip
        2e95c0:	e28cc001 	add	ip, ip, #1	; 0x1
        2e95c4:	e15c000e 	cmp	ip, lr
        2e95c8:	baffffee 	blt	2e9588 <TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int)+0x48>
        2e95cc:	e3700001 	cmn	r0, #1	; 0x1
        2e95d0:	1a000023 	bne	2e9664 <TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int)+0x124>
        2e95d4:	e08e710e 	add	r7, lr, lr, lsl #2
        2e95d8:	e1a07107 	mov	r7, r7, lsl #2
        2e95dc:	e2871014 	add	r1, r7, #20	; 0x14
        2e95e0:	e1a00003 	mov	r0, r3
        2e95e4:	eb63e2e4 	bl	1be217c <$SetHandleSize>
        2e95e8:	eb63e2cc 	bl	1be2120 <$MemError>
        2e95ec:	e59f606c 	ldr	r6, [pc, #6c]	; 2e9660 <TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int)+0x120>
        2e95f0:	e3300000 	teq	r0, #0	; 0x0
        2e95f4:	0a000004 	beq	2e960c <TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int)+0xcc>
        2e95f8:	e3a02000 	mov	r2, #0	; 0x0
        2e95fc:	e3a010e9 	mov	r1, #233	; 0xe9
        2e9600:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2e9604:	e5960000 	ldr	r0, [r6]
        2e9608:	eb63e6e3 	bl	1be319c <$Throw>
        2e960c:	e59b0010 	ldr	r0, [fp, #16]
        2e9610:	eb63e2ca 	bl	1be2140 <$NewPtr>
        2e9614:	e1b0a000 	movs	sl, r0
        2e9618:	1a000007 	bne	2e963c <TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int)+0xfc>
        2e961c:	e1a01007 	mov	r1, r7
        2e9620:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e9624:	eb63e2d4 	bl	1be217c <$SetHandleSize>
        2e9628:	e3a02000 	mov	r2, #0	; 0x0
        2e962c:	e3a010e9 	mov	r1, #233	; 0xe9
        2e9630:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2e9634:	e5960000 	ldr	r0, [r6]
        2e9638:	eb63e6d7 	bl	1be319c <$Throw>
        2e963c:	e5940000 	ldr	r0, [r4]
        2e9640:	e2801001 	add	r1, r0, #1	; 0x1
        2e9644:	e5841000 	str	r1, [r4]
        2e9648:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2e964c:	e5911000 	ldr	r1, [r1]
        2e9650:	e0802100 	add	r2, r0, r0, lsl #2
        2e9654:	e0812102 	add	r2, r1, r2, lsl #2
        2e9658:	e5a2a004 	str	sl, [r2, #4]!	; fField4
        2e965c:	ea000007 	b	2e9680 <TNodeCache::RememberNode(TSoupIndex *, unsigned long, long, int, int)+0x140>
        2e9660:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2e9664:	e0803100 	add	r3, r0, r0, lsl #2
        2e9668:	e0813103 	add	r3, r1, r3, lsl #2
        2e966c:	e3320000 	teq	r2, #0	; 0x0
        2e9670:	e5b3a004 	ldr	sl, [r3, #4]!	; fField4
        2e9674:	1594200c 	ldrne	r2, [r4, #12]	; fField12
        2e9678:	12822001 	addne	r2, r2, #1	; 0x1
        2e967c:	1584200c 	strne	r2, [r4, #12]	; fField12
        2e9680:	e0800100 	add	r0, r0, r0, lsl #2
        2e9684:	e0810100 	add	r0, r1, r0, lsl #2
        2e9688:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        2e968c:	e5802000 	str	r2, [r0]
        2e9690:	e5c09008 	strb	r9, [r0, #8]	; fField8
        2e9694:	e5c08009 	strb	r8, [r0, #9]
        2e9698:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2e969c:	e2811001 	add	r1, r1, #1	; 0x1
        2e96a0:	e5a41008 	str	r1, [r4, #8]!	; fField8
        2e96a4:	e280000c 	add	r0, r0, #12	; 0xc
        2e96a8:	e8800022 	stmia	r0, {r1, r5}
        2e96ac:	e240000c 	sub	r0, r0, #12	; 0xc
        2e96b0:	e3a01001 	mov	r1, #1	; 0x1
        2e96b4:	e5c0100a 	strb	r1, [r0, #10]
        2e96b8:	e1a0000a 	mov	r0, sl
        2e96bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNodeCache::DeleteNode(unsigned long)
 * Address: 002e96fc
 */
TNodeCache::DeleteNode(unsigned long) {
    /*
        2e96fc:	e1a0c00d 	mov	ip, sp
        2e9700:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e9704:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9708:	e1a04000 	mov	r4, r0
        2e970c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e9710:	e5900000 	ldr	r0, [r0]
        2e9714:	e5942000 	ldr	r2, [r4]
        2e9718:	e0822102 	add	r2, r2, r2, lsl #2
        2e971c:	e0802102 	add	r2, r0, r2, lsl #2
        2e9720:	e1500002 	cmp	r0, r2
        2e9724:	291ba810 	ldmcsdb	fp, {r4, fp, sp, pc}
        2e9728:	e5903000 	ldr	r3, [r0]
        2e972c:	e1330001 	teq	r3, r1
        2e9730:	1a00000e 	bne	2e9770 <TNodeCache::DeleteNode(unsigned long)+0x74>
        2e9734:	e3a02000 	mov	r2, #0	; 0x0
        2e9738:	e5903010 	ldr	r3, [r0, #16]
        2e973c:	e5802000 	str	r2, [r0]
        2e9740:	e580200c 	str	r2, [r0, #12]	; fField12
        2e9744:	e5802010 	str	r2, [r0, #16]
        2e9748:	e5c0200a 	strb	r2, [r0, #10]
        2e974c:	e5b30004 	ldr	r0, [r3, #4]!	; fField4
        2e9750:	e590007c 	ldr	r0, [r0, #124]
        2e9754:	eb6034f7 	bl	1af6b38 <TStore::$DeleteObject(unsigned long)>
        2e9758:	e3300000 	teq	r0, #0	; 0x0
        2e975c:	1b5d4db1 	blne	1a3ce28 <$_OSErr(long)>
        2e9760:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e9764:	e2800001 	add	r0, r0, #1	; 0x1
        2e9768:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        2e976c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e9770:	e2800014 	add	r0, r0, #20	; 0x14
        2e9774:	e1500002 	cmp	r0, r2
        2e9778:	3affffea 	bcc	2e9728 <TNodeCache::DeleteNode(unsigned long)+0x2c>
        2e977c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNodeCache::ForgetNode(unsigned long)
 * Address: 002e9780
 */
TNodeCache::ForgetNode(unsigned long) {
    /*
        2e9780:	e5902004 	ldr	r2, [r0, #4]	; fField4
        2e9784:	e5922000 	ldr	r2, [r2]
        2e9788:	e5903000 	ldr	r3, [r0]
        2e978c:	e0833103 	add	r3, r3, r3, lsl #2
        2e9790:	e0823103 	add	r3, r2, r3, lsl #2
        2e9794:	e1520003 	cmp	r2, r3
        2e9798:	21a0f00e 	movcs	pc, lr
        2e979c:	e592c000 	ldr	ip, [r2]
        2e97a0:	e13c0001 	teq	ip, r1
        2e97a4:	1a000008 	bne	2e97cc <TNodeCache::ForgetNode(unsigned long)+0x4c>
        2e97a8:	e3a01000 	mov	r1, #0	; 0x0
        2e97ac:	e5821000 	str	r1, [r2]
        2e97b0:	e582100c 	str	r1, [r2, #12]	; fField12
        2e97b4:	e5821010 	str	r1, [r2, #16]
        2e97b8:	e5c2100a 	strb	r1, [r2, #10]
        2e97bc:	e590100c 	ldr	r1, [r0, #12]	; fField12
        2e97c0:	e2811001 	add	r1, r1, #1	; 0x1
        2e97c4:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        2e97c8:	e1a0f00e 	mov	pc, lr
        2e97cc:	e2822014 	add	r2, r2, #20	; 0x14
        2e97d0:	e1520003 	cmp	r2, r3
        2e97d4:	3afffff0 	bcc	2e979c <TNodeCache::ForgetNode(unsigned long)+0x1c>
        2e97d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNodeCache::DirtyNode(NodeHeader *)
 * Address: 002e97dc
 */
TNodeCache::DirtyNode(NodeHeader *) {
    /*
        2e97dc:	e5902004 	ldr	r2, [r0, #4]	; fField4
        2e97e0:	e5922000 	ldr	r2, [r2]
        2e97e4:	e5903000 	ldr	r3, [r0]
        2e97e8:	e0833103 	add	r3, r3, r3, lsl #2
        2e97ec:	e0823103 	add	r3, r2, r3, lsl #2
        2e97f0:	e1520003 	cmp	r2, r3
        2e97f4:	21a0f00e 	movcs	pc, lr
        2e97f8:	e592c004 	ldr	ip, [r2, #4]	; fField4
        2e97fc:	e13c0001 	teq	ip, r1
        2e9800:	1a000005 	bne	2e981c <TNodeCache::DirtyNode(NodeHeader *)+0x40>
        2e9804:	e3a01001 	mov	r1, #1	; 0x1
        2e9808:	e5c21009 	strb	r1, [r2, #9]
        2e980c:	e590100c 	ldr	r1, [r0, #12]	; fField12
        2e9810:	e2811001 	add	r1, r1, #1	; 0x1
        2e9814:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        2e9818:	e1a0f00e 	mov	pc, lr
        2e981c:	e2822014 	add	r2, r2, #20	; 0x14
        2e9820:	e1520003 	cmp	r2, r3
        2e9824:	3afffff3 	bcc	2e97f8 <TNodeCache::DirtyNode(NodeHeader *)+0x1c>
        2e9828:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNodeCache::Commit(TSoupIndex *)
 * Address: 002e982c
 */
TNodeCache::Commit(TSoupIndex *) {
    /*
        2e982c:	e1a0c00d 	mov	ip, sp
        2e9830:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2e9834:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9838:	e1a04000 	mov	r4, r0
        2e983c:	e1a05001 	mov	r5, r1
        2e9840:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e9844:	eb63e230 	bl	1be210c <$HLock>
        2e9848:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e984c:	e5906000 	ldr	r6, [r0]
        2e9850:	e5940000 	ldr	r0, [r4]
        2e9854:	e0800100 	add	r0, r0, r0, lsl #2
        2e9858:	e0867100 	add	r7, r6, r0, lsl #2
        2e985c:	e3a08000 	mov	r8, #0	; 0x0
        2e9860:	e1560007 	cmp	r6, r7
        2e9864:	2a000019 	bcs	2e98d0 <TNodeCache::Commit(TSoupIndex *)+0xa4>
        2e9868:	e3a09000 	mov	r9, #0	; 0x0
        2e986c:	e5960010 	ldr	r0, [r6, #16]
        2e9870:	e1300005 	teq	r0, r5
        2e9874:	1a00000d 	bne	2e98b0 <TNodeCache::Commit(TSoupIndex *)+0x84>
        2e9878:	e5c6900a 	strb	r9, [r6, #10]
        2e987c:	e5d60009 	ldrb	r0, [r6, #9]
        2e9880:	e3300000 	teq	r0, #0	; 0x0
        2e9884:	0a00000c 	beq	2e98bc <TNodeCache::Commit(TSoupIndex *)+0x90>
        2e9888:	e5d60008 	ldrb	r0, [r6, #8]	; fField8
        2e988c:	e3300000 	teq	r0, #0	; 0x0
        2e9890:	e1a00005 	mov	r0, r5
        2e9894:	e5961004 	ldr	r1, [r6, #4]	; fField4
        2e9898:	0a000001 	beq	2e98a4 <TNodeCache::Commit(TSoupIndex *)+0x78>
        2e989c:	eb5d6a76 	bl	1a4427c <TSoupIndex::$UpdateDupNode(NodeHeader *)>
        2e98a0:	ea000000 	b	2e98a8 <TNodeCache::Commit(TSoupIndex *)+0x7c>
        2e98a4:	eb5d6e75 	bl	1a45280 <TSoupIndex::$UpdateNode(NodeHeader *)>
        2e98a8:	e5c69009 	strb	r9, [r6, #9]
        2e98ac:	ea000002 	b	2e98bc <TNodeCache::Commit(TSoupIndex *)+0x90>
        2e98b0:	e5d6000a 	ldrb	r0, [r6, #10]
        2e98b4:	e3300000 	teq	r0, #0	; 0x0
        2e98b8:	13a08001 	movne	r8, #1	; 0x1
        2e98bc:	e2866014 	add	r6, r6, #20	; 0x14
        2e98c0:	e1560007 	cmp	r6, r7
        2e98c4:	3affffe8 	bcc	2e986c <TNodeCache::Commit(TSoupIndex *)+0x40>
        2e98c8:	e3380000 	teq	r8, #0	; 0x0
        2e98cc:	1a000017 	bne	2e9930 <TNodeCache::Commit(TSoupIndex *)+0x104>
        2e98d0:	e5940000 	ldr	r0, [r4]
        2e98d4:	e3500008 	cmp	r0, #8	; 0x8
        2e98d8:	da000014 	ble	2e9930 <TNodeCache::Commit(TSoupIndex *)+0x104>
        2e98dc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e98e0:	e2800001 	add	r0, r0, #1	; 0x1
        2e98e4:	e584000c 	str	r0, [r4, #12]	; fField12
        2e98e8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e98ec:	e5900000 	ldr	r0, [r0]
        2e98f0:	e28050a0 	add	r5, r0, #160	; 0xa0
        2e98f4:	e1550007 	cmp	r5, r7
        2e98f8:	2a000004 	bcs	2e9910 <TNodeCache::Commit(TSoupIndex *)+0xe4>
        2e98fc:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2e9900:	eb63ddeb 	bl	1be10b4 <$DisposPtr>
        2e9904:	e2855014 	add	r5, r5, #20	; 0x14
        2e9908:	e1550007 	cmp	r5, r7
        2e990c:	3afffffa 	bcc	2e98fc <TNodeCache::Commit(TSoupIndex *)+0xd0>
        2e9910:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e9914:	eb63e1fe 	bl	1be2114 <$HUnlock>
        2e9918:	e3a010a0 	mov	r1, #160	; 0xa0
        2e991c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e9920:	eb63e215 	bl	1be217c <$SetHandleSize>
        2e9924:	e3a00008 	mov	r0, #8	; 0x8
        2e9928:	e5840000 	str	r0, [r4]
        2e992c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2e9930:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        2e9934:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2e9938:	ea63e1f5 	b	1be2114 <$HUnlock>
    */
}

/**
 * Symbol: TNodeCache::Reuse(TSoupIndex *)
 * Address: 002e993c
 */
TNodeCache::Reuse(TSoupIndex *) {
    /*
        2e993c:	e5902004 	ldr	r2, [r0, #4]	; fField4
        2e9940:	e5922000 	ldr	r2, [r2]
        2e9944:	e5900000 	ldr	r0, [r0]
        2e9948:	e0800100 	add	r0, r0, r0, lsl #2
        2e994c:	e0820100 	add	r0, r2, r0, lsl #2
        2e9950:	e1520000 	cmp	r2, r0
        2e9954:	21a0f00e 	movcs	pc, lr
        2e9958:	e3a03001 	mov	r3, #1	; 0x1
        2e995c:	e592c010 	ldr	ip, [r2, #16]
        2e9960:	e13c0001 	teq	ip, r1
        2e9964:	05c2300a 	streqb	r3, [r2, #10]
        2e9968:	e2822014 	add	r2, r2, #20	; 0x14
        2e996c:	e1520000 	cmp	r2, r0
        2e9970:	3afffff9 	bcc	2e995c <TNodeCache::Reuse(TSoupIndex *)+0x20>
        2e9974:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNodeCache::Abort(TSoupIndex *)
 * Address: 002e9978
 */
TNodeCache::Abort(TSoupIndex *) {
    /*
        2e9978:	e92d4000 	stmdb	sp!, {lr}
        2e997c:	e5902004 	ldr	r2, [r0, #4]	; fField4
        2e9980:	e5922000 	ldr	r2, [r2]
        2e9984:	e5903000 	ldr	r3, [r0]
        2e9988:	e0833103 	add	r3, r3, r3, lsl #2
        2e998c:	e082c103 	add	ip, r2, r3, lsl #2
        2e9990:	e152000c 	cmp	r2, ip
        2e9994:	2a00000a 	bcs	2e99c4 <TNodeCache::Abort(TSoupIndex *)+0x4c>
        2e9998:	e3a03000 	mov	r3, #0	; 0x0
        2e999c:	e592e010 	ldr	lr, [r2, #16]
        2e99a0:	e13e0001 	teq	lr, r1
        2e99a4:	1a000003 	bne	2e99b8 <TNodeCache::Abort(TSoupIndex *)+0x40>
        2e99a8:	e5823010 	str	r3, [r2, #16]
        2e99ac:	e5c2300a 	strb	r3, [r2, #10]
        2e99b0:	e5823000 	str	r3, [r2]
        2e99b4:	e5c23009 	strb	r3, [r2, #9]
        2e99b8:	e2822014 	add	r2, r2, #20	; 0x14
        2e99bc:	e152000c 	cmp	r2, ip
        2e99c0:	3afffff5 	bcc	2e999c <TNodeCache::Abort(TSoupIndex *)+0x24>
        2e99c4:	e590100c 	ldr	r1, [r0, #12]	; fField12
        2e99c8:	e2811001 	add	r1, r1, #1	; 0x1
        2e99cc:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        2e99d0:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TNodeCache::Clear(void)
 * Address: 002e99d4
 */
TNodeCache::Clear(void) {
    /*
        2e99d4:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2e99d8:	e5911000 	ldr	r1, [r1]
        2e99dc:	e5902000 	ldr	r2, [r0]
        2e99e0:	e0822102 	add	r2, r2, r2, lsl #2
        2e99e4:	e0812102 	add	r2, r1, r2, lsl #2
        2e99e8:	e3a03000 	mov	r3, #0	; 0x0
        2e99ec:	e1510002 	cmp	r1, r2
        2e99f0:	2a000007 	bcs	2e9a14 <TNodeCache::Clear(void)+0x40>
        2e99f4:	e5813010 	str	r3, [r1, #16]
        2e99f8:	e5c1300a 	strb	r3, [r1, #10]
        2e99fc:	e5813000 	str	r3, [r1]
        2e9a00:	e581300c 	str	r3, [r1, #12]	; fField12
        2e9a04:	e5c13009 	strb	r3, [r1, #9]
        2e9a08:	e2811014 	add	r1, r1, #20	; 0x14
        2e9a0c:	e1510002 	cmp	r1, r2
        2e9a10:	3afffff7 	bcc	2e99f4 <TNodeCache::Clear(void)+0x20>
        2e9a14:	e590100c 	ldr	r1, [r0, #12]	; fField12
        2e9a18:	e2811001 	add	r1, r1, #1	; 0x1
        2e9a1c:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        2e9a20:	e1a0f00e 	mov	pc, lr
    */
}

