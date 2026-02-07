#include "include/TNewtEventHandler.h"

/**
 * Symbol: TNewtEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0030bba4
 */
TNewtEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        30bba4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewtEventHandler::__ct(void)
 * Address: 0030c0e0
 */
TNewtEventHandler::TNewtEventHandler(void) {
    /*
        30c0e0:	e1a0c00d 	mov	ip, sp
        30c0e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        30c0e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        30c0ec:	e1b04000 	movs	r4, r0
        30c0f0:	1a000003 	bne	30c104 <TNewtEventHandler::__ct(void)+0x24>
        30c0f4:	e3a00014 	mov	r0, #20	; 0x14
        30c0f8:	eb63098e 	bl	1bce738 <$__nw(unsigned int)>
        30c0fc:	e1b04000 	movs	r4, r0
        30c100:	0a000003 	beq	30c114 <TNewtEventHandler::__ct(void)+0x34>
        30c104:	e1a00004 	mov	r0, r4
        30c108:	eb63603e 	bl	1be4208 <TAEventHandler::$__ct(void)>
        30c10c:	e59f0008 	ldr	r0, [pc, #8]	; 30c11c <TNewtEventHandler::__ct(void)+0x3c>
        30c110:	e5840000 	str	r0, [r4]
        30c114:	e1a00004 	mov	r0, r4
        30c118:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        30c11c:	0001e920 	andeq	lr, r1, r0, lsr #18
    */
}

/**
 * Symbol: TNewtEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0030d53c
 */
TNewtEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        30d53c:	e1a0c00d 	mov	ip, sp
        30d540:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        30d544:	e24cb004 	sub	fp, ip, #4	; 0x4
        30d548:	e1a05000 	mov	r5, r0
        30d54c:	e1a07001 	mov	r7, r1
        30d550:	e1a06002 	mov	r6, r2
        30d554:	e1a04003 	mov	r4, r3
        30d558:	eb63ba19 	bl	1bfbdc4 <$IncrementCurrentStackPos(void)>
        30d55c:	e59f0068 	ldr	r0, [pc, #68]	; 30d5cc <TNewtEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x90>
        30d560:	eb638891 	bl	1bef7ac <$SetPort(GrafPort *)>
        30d564:	e1a08000 	mov	r8, r0
        30d568:	e3a00000 	mov	r0, #0	; 0x0
        30d56c:	e52d006c 	str	r0, [sp, -#108]!
        30d570:	e28d0008 	add	r0, sp, #8	; 0x8
        30d574:	eb6294fe 	bl	1bb2974 <$setjmp>
        30d578:	e3300000 	teq	r0, #0	; 0x0
        30d57c:	e1a0000d 	mov	r0, sp
        30d580:	1a000013 	bne	30d5d4 <TNewtEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x98>
        30d584:	eb634abc 	bl	1be007c <$AddExceptionHandler>
        30d588:	e3a00059 	mov	r0, #89	; 0x59
        30d58c:	e2400a02 	sub	r0, r0, #8192	; 0x2000
        30d590:	eb5e4ed8 	bl	1aa10f8 <$SetActionDescription(long)>
        30d594:	e3a00036 	mov	r0, #54	; 0x36
        30d598:	eb5edb19 	bl	1ac4204 <$BusyBoxSend(long)>
        30d59c:	e59f002c 	ldr	r0, [pc, #2c]	; 30d5d0 <TNewtEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x94>
        30d5a0:	e5840008 	str	r0, [r4, #8]
        30d5a4:	e1a03004 	mov	r3, r4
        30d5a8:	e1a02006 	mov	r2, r6
        30d5ac:	e1a01007 	mov	r1, r7
        30d5b0:	e1a00005 	mov	r0, r5
        30d5b4:	e595c000 	ldr	ip, [r5]
        30d5b8:	e1a0e00f 	mov	lr, pc
        30d5bc:	e28cf008 	add	pc, ip, #8	; 0x8
        30d5c0:	eb5f6789 	bl	1ae73ec <$RunDelayedActionProcs(void)>
        30d5c4:	eb60f803 	bl	1b4b5d8 <$ReleaseScreenLock(void)>
        30d5c8:	ea000009 	b	30d5f4 <TNewtEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0xb8>
        30d5cc:	0c1067cc 	ldceq	7, cr6, [r0], -#816
        30d5d0:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        30d5d4:	e2800060 	add	r0, r0, #96	; 0x60
        30d5d8:	e1a04000 	mov	r4, r0
        30d5dc:	eb6398ec 	bl	1bf3994 <$ExceptionNotify(Exception *)>
        30d5e0:	e1a01004 	mov	r1, r4
        30d5e4:	e59f0030 	ldr	r0, [pc, #30]	; 30d61c <TNewtEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe0>
        30d5e8:	e5900000 	ldr	r0, [r0]
        30d5ec:	eb01f240 	bl	389ef4 <POutTranslator::ExceptionNotify(Exception *)>
        30d5f0:	eb5f677c 	bl	1ae73e8 <$CheckForDeferredActions(void)>
        30d5f4:	e1a0000d 	mov	r0, sp
        30d5f8:	eb634eae 	bl	1be10b8 <$ExitHandler>
        30d5fc:	e28dd06c 	add	sp, sp, #108	; 0x6c
        30d600:	e3a00035 	mov	r0, #53	; 0x35
        30d604:	eb5edafe 	bl	1ac4204 <$BusyBoxSend(long)>
        30d608:	e1a00008 	mov	r0, r8
        30d60c:	eb638866 	bl	1bef7ac <$SetPort(GrafPort *)>
        30d610:	eb63b9ec 	bl	1bfbdc8 <$DecrementCurrentStackPos(void)>
        30d614:	eb63b9ec 	bl	1bfbdcc <$ClearRefHandles(void)>
        30d618:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        30d61c:	0c101820 	ldceq	8, cr1, [r0], -#128
    */
}

/**
 * Symbol: TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0030d620
 */
TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        30d620:	e1a0c00d 	mov	ip, sp
        30d624:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        30d628:	e24cb004 	sub	fp, ip, #4	; 0x4
        30d62c:	e1a04000 	mov	r4, r0
        30d630:	e1a05001 	mov	r5, r1
        30d634:	e1a06003 	mov	r6, r3
        30d638:	e1a07003 	mov	r7, r3
        30d63c:	e5930008 	ldr	r0, [r3, #8]
        30d640:	e59fa064 	ldr	sl, [pc, #64]	; 30d6ac <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x8c>
        30d644:	e59fc064 	ldr	ip, [pc, #64]	; 30d6b0 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x90>
        30d648:	e150000c 	cmp	r0, ip
        30d64c:	024dd004 	subeq	sp, sp, #4	; 0x4
        30d650:	0a0000ce 	beq	30d990 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x370>
        30d654:	e59f8058 	ldr	r8, [pc, #58]	; 30d6b4 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x94>
        30d658:	ca00002b 	bgt	30d70c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xec>
        30d65c:	e59fc054 	ldr	ip, [pc, #54]	; 30d6b8 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x98>
        30d660:	e150000c 	cmp	r0, ip
        30d664:	0a0000c6 	beq	30d984 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x364>
        30d668:	ca000017 	bgt	30d6cc <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xac>
        30d66c:	e59fc048 	ldr	ip, [pc, #48]	; 30d6bc <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x9c>
        30d670:	e130000c 	teq	r0, ip
        30d674:	0a000096 	beq	30d8d4 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2b4>
        30d678:	e59fc040 	ldr	ip, [pc, #40]	; 30d6c0 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xa0>
        30d67c:	e130000c 	teq	r0, ip
        30d680:	0a0000bb 	beq	30d974 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x354>
        30d684:	e59fc038 	ldr	ip, [pc, #38]	; 30d6c4 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xa4>
        30d688:	e130000c 	teq	r0, ip
        30d68c:	0a0000b6 	beq	30d96c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x34c>
        30d690:	e59fc030 	ldr	ip, [pc, #30]	; 30d6c8 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xa8>
        30d694:	e130000c 	teq	r0, ip
        30d698:	1a0000bd 	bne	30d994 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x374>
        30d69c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d6a0:	e1a00007 	mov	r0, r7
        30d6a4:	eb5ed298 	bl	1ac210c <$HandleNewCard(TNewCardEvent *)>
        30d6a8:	ea0000b8 	b	30d990 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x370>
        30d6ac:	0c101934 	ldceq	9, cr1, [r0], -#208
        30d6b0:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        30d6b4:	0c100d04 	ldceq	13, cr0, [r0], -#16
        30d6b8:	64656164 	strvsbt	r6, [r5], -#356
        30d6bc:	616c726d 	cmnvs	ip, sp, ror #4
        30d6c0:	62617473 	rsbvs	r7, r1, #1929379840	; 0x73000000
        30d6c4:	626b6c74 	rsbvs	r6, fp, #29696	; 0x7400
        30d6c8:	63617264 	cmnvs	r1, #1073741830	; 0x40000006
        30d6cc:	e59fc02c 	ldr	ip, [pc, #2c]	; 30d700 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe0>
        30d6d0:	e130000c 	teq	r0, ip
        30d6d4:	0a000082 	beq	30d8e4 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2c4>
        30d6d8:	e59fc024 	ldr	ip, [pc, #24]	; 30d704 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe4>
        30d6dc:	e130000c 	teq	r0, ip
        30d6e0:	0a0000a1 	beq	30d96c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x34c>
        30d6e4:	e59fc01c 	ldr	ip, [pc, #1c]	; 30d708 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe8>
        30d6e8:	e130000c 	teq	r0, ip
        30d6ec:	1a0000a8 	bne	30d994 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x374>
        30d6f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d6f4:	e1a00007 	mov	r0, r7
        30d6f8:	eb5f673e 	bl	1ae73f8 <$HandleInterConnect(TInterConnectEvent *)>
        30d6fc:	ea0000a3 	b	30d990 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x370>
        30d700:	64726177 	ldrvsbt	r6, [r2], -#375
        30d704:	65787420 	ldrvsb	r7, [r8, -#1056]!
        30d708:	69632020 	stmvsdb	r3!, {r5, sp}^
        30d70c:	e59fc038 	ldr	ip, [pc, #38]	; 30d74c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x12c>
        30d710:	e150000c 	cmp	r0, ip
        30d714:	0a000076 	beq	30d8f4 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2d4>
        30d718:	ca000010 	bgt	30d760 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x140>
        30d71c:	e59fc02c 	ldr	ip, [pc, #2c]	; 30d750 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x130>
        30d720:	e130000c 	teq	r0, ip
        30d724:	0a000076 	beq	30d904 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2e4>
        30d728:	e59fc024 	ldr	ip, [pc, #24]	; 30d754 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x134>
        30d72c:	e130000c 	teq	r0, ip
        30d730:	0a00001a 	beq	30d7a0 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x180>
        30d734:	e59fc01c 	ldr	ip, [pc, #1c]	; 30d758 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
        30d738:	e130000c 	teq	r0, ip
        30d73c:	1a000094 	bne	30d994 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x374>
        30d740:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d744:	e59f0010 	ldr	r0, [pc, #10]	; 30d75c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x13c>
        30d748:	ea00008f 	b	30d98c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x36c>
        30d74c:	72737472 	rsbvcs	r7, r3, #1912602624	; 0x72000000
        30d750:	69724d43 	ldmvsdb	r2!, {r0, r1, r6, r8, sl, fp, lr}^
        30d754:	6b657962 	blvs	1c6bce4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x5b48c>
        30d758:	70776368 	rsbvcs	r6, r7, r8, ror #6
        30d75c:	006822a0 	rsbeq	r2, r8, r0, lsr #5
        30d760:	e59fc02c 	ldr	ip, [pc, #2c]	; 30d794 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x174>
        30d764:	e130000c 	teq	r0, ip
        30d768:	0a00007b 	beq	30d95c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x33c>
        30d76c:	e59fc024 	ldr	ip, [pc, #24]	; 30d798 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x178>
        30d770:	e130000c 	teq	r0, ip
        30d774:	0a000074 	beq	30d94c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x32c>
        30d778:	e59fc01c 	ldr	ip, [pc, #1c]	; 30d79c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x17c>
        30d77c:	e130000c 	teq	r0, ip
        30d780:	1a000083 	bne	30d994 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x374>
        30d784:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d788:	e1a00007 	mov	r0, r7
        30d78c:	eb5f6f48 	bl	1ae94b4 <$HandleExternalNewtEvent(TExternalNewtEvent *)>
        30d790:	ea00007e 	b	30d990 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x370>
        30d794:	73637021 	cmnvc	r3, #33	; 0x21
        30d798:	73637074 	cmnvc	r3, #116	; 0x74
        30d79c:	786e7774 	stmvcda	lr!, {r2, r4, r5, r6, r8, r9, sl, ip, sp, lr}^
        30d7a0:	e24dd030 	sub	sp, sp, #48	; 0x30
        30d7a4:	e1a0000d 	mov	r0, sp
        30d7a8:	eb635aa2 	bl	1be4238 <TAEvent::$__ct(void)>
        30d7ac:	e28dd02c 	add	sp, sp, #44	; 0x2c
        30d7b0:	e287e02c 	add	lr, r7, #44	; 0x2c
        30d7b4:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        30d7b8:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        30d7bc:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        30d7c0:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        30d7c4:	e93e100c 	ldmdb	lr!, {r2, r3, ip}
        30d7c8:	e92d100c 	stmdb	sp!, {r2, r3, ip}
        30d7cc:	e1a08007 	mov	r8, r7
        30d7d0:	e3a00024 	mov	r0, #36	; 0x24
        30d7d4:	e587000c 	str	r0, [r7, #12]
        30d7d8:	e3a00002 	mov	r0, #2	; 0x2
        30d7dc:	eb62d25a 	bl	1bc214c <$AllocateRefHandle(long)>
        30d7e0:	e1a09000 	mov	r9, r0
        30d7e4:	e59f0020 	ldr	r0, [pc, #20]	; 30d80c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1ec>
        30d7e8:	eb5e24c5 	bl	1a96b04 <$GetPreference(RefVar const &)>
        30d7ec:	e5890000 	str	r0, [r9]
        30d7f0:	e2001003 	and	r1, r0, #3	; 0x3
        30d7f4:	e3510000 	cmp	r1, #0	; 0x0
        30d7f8:	1a000004 	bne	30d810 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f0>
        30d7fc:	01a00140 	moveq	r0, r0, asr #2
        30d800:	0a000003 	beq	30d814 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f4>
        30d804:	eb62d244 	bl	1bc211c <$_RINTError(long)>
        30d808:	ea000001 	b	30d814 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f4>
        30d80c:	006833c8 	rsbeq	r3, r8, r8, asr #7
        30d810:	e3a000c8 	mov	r0, #200	; 0xc8
        30d814:	e5880010 	str	r0, [r8, #16]
        30d818:	e59f0020 	ldr	r0, [pc, #20]	; 30d840 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x220>
        30d81c:	eb5e24b8 	bl	1a96b04 <$GetPreference(RefVar const &)>
        30d820:	e5890000 	str	r0, [r9]
        30d824:	e2001003 	and	r1, r0, #3	; 0x3
        30d828:	e3510000 	cmp	r1, #0	; 0x0
        30d82c:	1a000004 	bne	30d844 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x224>
        30d830:	01a00140 	moveq	r0, r0, asr #2
        30d834:	0a000003 	beq	30d848 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x228>
        30d838:	eb62d237 	bl	1bc211c <$_RINTError(long)>
        30d83c:	ea000001 	b	30d848 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x228>
        30d840:	006833d0 	ldreqd	r3, [r8], -#48
        30d844:	e3a00f96 	mov	r0, #600	; 0x258
        30d848:	e5880014 	str	r0, [r8, #20]
        30d84c:	e59f0028 	ldr	r0, [pc, #28]	; 30d87c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x25c>
        30d850:	eb5e24ab 	bl	1a96b04 <$GetPreference(RefVar const &)>
        30d854:	e5890000 	str	r0, [r9]
        30d858:	e1a01000 	mov	r1, r0
        30d85c:	e2000003 	and	r0, r0, #3	; 0x3
        30d860:	e3500000 	cmp	r0, #0	; 0x0
        30d864:	1a000005 	bne	30d880 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x260>
        30d868:	e1a00001 	mov	r0, r1
        30d86c:	01a00140 	moveq	r0, r0, asr #2
        30d870:	0a000004 	beq	30d888 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x268>
        30d874:	eb62d228 	bl	1bc211c <$_RINTError(long)>
        30d878:	ea000002 	b	30d888 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x268>
        30d87c:	006824a0 	rsbeq	r2, r8, r0, lsr #9
        30d880:	e3a00f71 	mov	r0, #452	; 0x1c4
        30d884:	e2800b02 	add	r0, r0, #2048	; 0x800
        30d888:	e588001c 	str	r0, [r8, #28]
        30d88c:	e3a00010 	mov	r0, #16	; 0x10
        30d890:	e1a02006 	mov	r2, r6
        30d894:	e5a80018 	str	r0, [r8, #24]!
        30d898:	e51b0030 	ldr	r0, [fp, -#48]
        30d89c:	e5901000 	ldr	r1, [r0]
        30d8a0:	e1a00004 	mov	r0, r4
        30d8a4:	eb637f85 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        30d8a8:	e3350000 	teq	r5, #0	; 0x0
        30d8ac:	15950004 	ldrne	r0, [r5, #4]
        30d8b0:	13300000 	teqne	r0, #0	; 0x0
        30d8b4:	11a00004 	movne	r0, r4
        30d8b8:	1b637b64 	blne	1bec650 <TAEventHandler::$ReplyImmed(void)>
        30d8bc:	e1a0000d 	mov	r0, sp
        30d8c0:	eb5e28bf 	bl	1a97bc4 <$HandleKeyEvent(KeyboardEvent *)>
        30d8c4:	e1a00009 	mov	r0, r9
        30d8c8:	eb62d63b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30d8cc:	e28dd030 	add	sp, sp, #48	; 0x30
        30d8d0:	ea00002f 	b	30d994 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x374>
        30d8d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d8d8:	e1a00007 	mov	r0, r7
        30d8dc:	eb5e28a8 	bl	1a97b84 <$HandleAlarmEvent(TAlarmEvent *)>
        30d8e0:	ea00002a 	b	30d990 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x370>
        30d8e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d8e8:	e1a00007 	mov	r0, r7
        30d8ec:	eb5e28bb 	bl	1a97be0 <$HandleRedrawEvent(TRedrawScreenEvent *)>
        30d8f0:	ea000026 	b	30d990 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x370>
        30d8f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d8f8:	e1a00007 	mov	r0, r7
        30d8fc:	eb5e5637 	bl	1aa31e0 <$StorageCardRemoved(TNewStoreEvent *)>
        30d900:	ea000022 	b	30d990 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x370>
        30d904:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d908:	e3a03000 	mov	r3, #0	; 0x0
        30d90c:	e92d0008 	stmdb	sp!, {r3}
        30d910:	e3a00002 	mov	r0, #2	; 0x2
        30d914:	eb62d20c 	bl	1bc214c <$AllocateRefHandle(long)>
        30d918:	e58d0004 	str	r0, [sp, #4]
        30d91c:	e28d2004 	add	r2, sp, #4	; 0x4
        30d920:	e59f1014 	ldr	r1, [pc, #14]	; 30d93c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x31c>
        30d924:	e3a03001 	mov	r3, #1	; 0x1
        30d928:	e59a0000 	ldr	r0, [sl]
        30d92c:	eb62f72b 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        30d930:	e5bd0004 	ldr	r0, [sp, #4]!
        30d934:	eb62d620 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30d938:	ea000014 	b	30d990 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x370>
        30d93c:	006832f8 	streqd	r3, [r8], -#40
        30d940:	e1a00008 	mov	r0, r8
        30d944:	eb631823 	bl	1bd39d8 <$GetGlobalTime>
        30d948:	ea000010 	b	30d990 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x370>
        30d94c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d950:	e1a00007 	mov	r0, r7
        30d954:	eb5f391e 	bl	1adbdd4 <$HandleRunScriptEvent(TRunScriptEvent *)>
        30d958:	eafffff8 	b	30d940 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x320>
        30d95c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d960:	e1a00007 	mov	r0, r7
        30d964:	eb5ee691 	bl	1ac73b0 <$HandleSCPEvent(TSCPEvent *)>
        30d968:	ea000008 	b	30d990 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x370>
        30d96c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d970:	eafffff2 	b	30d940 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x320>
        30d974:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d978:	e59f0000 	ldr	r0, [pc, #0]	; 30d980 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x360>
        30d97c:	ea000002 	b	30d98c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x36c>
        30d980:	00681fb0 	streqh	r1, [r8], -#240
        30d984:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d988:	e59f0140 	ldr	r0, [pc, #140]	; 30dad0 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x4b0>
        30d98c:	eb63c9a2 	bl	1c0001c <$NSCallGlobalFn(RefVar const &)>
        30d990:	e28dd004 	add	sp, sp, #4	; 0x4
        30d994:	e5970008 	ldr	r0, [r7, #8]
        30d998:	e59f8134 	ldr	r8, [pc, #134]	; 30dad4 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x4b4>
        30d99c:	e51fc250 	ldr	ip, [pc, #fffffdb0]	; 30d754 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x134>
        30d9a0:	e130000c 	teq	r0, ip
        30d9a4:	0a000041 	beq	30dab0 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x490>
        30d9a8:	e51fc300 	ldr	ip, [pc, #fffffd00]	; 30d6b0 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x90>
        30d9ac:	e130000c 	teq	r0, ip
        30d9b0:	0a000004 	beq	30d9c8 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x3a8>
        30d9b4:	e1a02006 	mov	r2, r6
        30d9b8:	e51b0030 	ldr	r0, [fp, -#48]
        30d9bc:	e5901000 	ldr	r1, [r0]
        30d9c0:	e1a00004 	mov	r0, r4
        30d9c4:	eb637f3d 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        30d9c8:	e3350000 	teq	r5, #0	; 0x0
        30d9cc:	15b50004 	ldrne	r0, [r5, #4]!
        30d9d0:	13300000 	teqne	r0, #0	; 0x0
        30d9d4:	11a00004 	movne	r0, r4
        30d9d8:	1b637b1c 	blne	1bec650 <TAEventHandler::$ReplyImmed(void)>
        30d9dc:	e5970008 	ldr	r0, [r7, #8]
        30d9e0:	e59fc0f0 	ldr	ip, [pc, #f0]	; 30dad8 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x4b8>
        30d9e4:	e130000c 	teq	r0, ip
        30d9e8:	1a00002b 	bne	30da9c <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x47c>
        30d9ec:	e5d80078 	ldrb	r0, [r8, #120]
        30d9f0:	e3300000 	teq	r0, #0	; 0x0
        30d9f4:	1a00002d 	bne	30dab0 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x490>
        30d9f8:	e24dd018 	sub	sp, sp, #24	; 0x18
        30d9fc:	e28d0008 	add	r0, sp, #8	; 0x8
        30da00:	eb6317f4 	bl	1bd39d8 <$GetGlobalTime>
        30da04:	e24dd008 	sub	sp, sp, #8	; 0x8
        30da08:	e28d0010 	add	r0, sp, #16	; 0x10
        30da0c:	e8905000 	ldmia	r0, {ip, lr}
        30da10:	e88d5000 	stmia	sp, {ip, lr}
        30da14:	e1a0100d 	mov	r1, sp
        30da18:	e59f00bc 	ldr	r0, [pc, #bc]	; 30dadc <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x4bc>
        30da1c:	eb634d9e 	bl	1be109c <$CompSub>
        30da20:	e28d0008 	add	r0, sp, #8	; 0x8
        30da24:	e8bd5000 	ldmia	sp!, {ip, lr}
        30da28:	e8805000 	stmia	r0, {ip, lr}
        30da2c:	e28d0010 	add	r0, sp, #16	; 0x10
        30da30:	e3a029e1 	mov	r2, #3686400	; 0x384000
        30da34:	e3a01001 	mov	r1, #1	; 0x1
        30da38:	eb62ff22 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
        30da3c:	e28d1010 	add	r1, sp, #16	; 0x10
        30da40:	e1a0000d 	mov	r0, sp
        30da44:	eb634d8f 	bl	1be1088 <$CompCompare>
        30da48:	e3500000 	cmp	r0, #0	; 0x0
        30da4c:	da000011 	ble	30da98 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x478>
        30da50:	e24dd004 	sub	sp, sp, #4	; 0x4
        30da54:	e3a00001 	mov	r0, #1	; 0x1
        30da58:	e5c80078 	strb	r0, [r8, #120]
        30da5c:	e3a03000 	mov	r3, #0	; 0x0
        30da60:	e92d0008 	stmdb	sp!, {r3}
        30da64:	e3a00002 	mov	r0, #2	; 0x2
        30da68:	eb62d1b7 	bl	1bc214c <$AllocateRefHandle(long)>
        30da6c:	e58d0004 	str	r0, [sp, #4]
        30da70:	e28d2004 	add	r2, sp, #4	; 0x4
        30da74:	e59f1064 	ldr	r1, [pc, #64]	; 30dae0 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x4c0>
        30da78:	e3a03001 	mov	r3, #1	; 0x1
        30da7c:	e59a0000 	ldr	r0, [sl]
        30da80:	eb62f6d6 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        30da84:	e5bd0004 	ldr	r0, [sp, #4]!
        30da88:	eb62d5cb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30da8c:	e3a00000 	mov	r0, #0	; 0x0
        30da90:	e5c80078 	strb	r0, [r8, #120]
        30da94:	e28dd004 	add	sp, sp, #4	; 0x4
        30da98:	e28dd018 	add	sp, sp, #24	; 0x18
        30da9c:	e5970008 	ldr	r0, [r7, #8]
        30daa0:	e59fc03c 	ldr	ip, [pc, #3c]	; 30dae4 <TNewtEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x4c4>
        30daa4:	e130000c 	teq	r0, ip
        30daa8:	01a00007 	moveq	r0, r7
        30daac:	0b5e55ca 	bleq	1aa31dc <$StorageCardInserted(TNewStoreEvent *)>
        30dab0:	e5b80004 	ldr	r0, [r8, #4]!
        30dab4:	e5901000 	ldr	r1, [r0]
        30dab8:	e1a0e00f 	mov	lr, pc
        30dabc:	e281f018 	add	pc, r1, #24	; 0x18
        30dac0:	e1a00004 	mov	r0, r4
        30dac4:	e3a01000 	mov	r1, #0	; 0x0
        30dac8:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        30dacc:	ea5f664a 	b	1ae73fc <TNewtEventHandler::$SetWakeupTime(unsigned long)>
        30dad0:	00681fa8 	rsbeq	r1, r8, r8, lsr #31
        30dad4:	0c1054a8 	ldceq	4, cr5, [r0], -#672
        30dad8:	706f7772 	rsbvc	r7, pc, r2, ror r7
        30dadc:	0c104c4c 	ldceq	12, cr4, [r0], -#304
        30dae0:	00683018 	rsbeq	r3, r8, r8, lsl r0
        30dae4:	73746f72 	cmnvc	r4, #456	; 0x1c8
    */
}

/**
 * Symbol: TNewtEventHandler::SetWakeupTime(unsigned long)
 * Address: 0030dc50
 */
TNewtEventHandler::SetWakeupTime(unsigned long) {
    /*
        30dc50:	e1a0c00d 	mov	ip, sp
        30dc54:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30dc58:	e24cb004 	sub	fp, ip, #4	; 0x4
        30dc5c:	e1a04000 	mov	r4, r0
        30dc60:	e24dd010 	sub	sp, sp, #16	; 0x10
        30dc64:	e59f50e0 	ldr	r5, [pc, #e0]	; 30dd4c <TNewtEventHandler::SetWakeupTime(unsigned long)+0xfc>
        30dc68:	e5950004 	ldr	r0, [r5, #4]
        30dc6c:	e2800004 	add	r0, r0, #4	; 0x4
        30dc70:	e8901008 	ldmia	r0, {r3, ip}
        30dc74:	e88d1008 	stmia	sp, {r3, ip}
        30dc78:	e28d0008 	add	r0, sp, #8	; 0x8
        30dc7c:	e89d1008 	ldmia	sp, {r3, ip}
        30dc80:	e8801008 	stmia	r0, {r3, ip}
        30dc84:	e3310000 	teq	r1, #0	; 0x0
        30dc88:	0a00000e 	beq	30dcc8 <TNewtEventHandler::SetWakeupTime(unsigned long)+0x78>
        30dc8c:	e24dd010 	sub	sp, sp, #16	; 0x10
        30dc90:	e1a0000d 	mov	r0, sp
        30dc94:	eb63407d 	bl	1bdde90 <$TimeFromNow>
        30dc98:	e28d0008 	add	r0, sp, #8	; 0x8
        30dc9c:	e89d5000 	ldmia	sp, {ip, lr}
        30dca0:	e8805000 	stmia	r0, {ip, lr}
        30dca4:	e28d1018 	add	r1, sp, #24	; 0x18
        30dca8:	e28d0008 	add	r0, sp, #8	; 0x8
        30dcac:	eb634cf5 	bl	1be1088 <$CompCompare>
        30dcb0:	e3500000 	cmp	r0, #0	; 0x0
        30dcb4:	b28d1018 	addlt	r1, sp, #24	; 0x18
        30dcb8:	b28d0008 	addlt	r0, sp, #8	; 0x8
        30dcbc:	b8905000 	ldmltia	r0, {ip, lr}
        30dcc0:	b8815000 	stmltia	r1, {ip, lr}
        30dcc4:	e28dd010 	add	sp, sp, #16	; 0x10
        30dcc8:	e28d2008 	add	r2, sp, #8	; 0x8
        30dccc:	e28d0008 	add	r0, sp, #8	; 0x8
        30dcd0:	e5b51004 	ldr	r1, [r5, #4]!
        30dcd4:	eb5e3c52 	bl	1a9ce24 <TApplication::$NextDelayedActionTime(TTime const &)>
        30dcd8:	e59f1070 	ldr	r1, [pc, #70]	; 30dd50 <TNewtEventHandler::SetWakeupTime(unsigned long)+0x100>
        30dcdc:	e28d0008 	add	r0, sp, #8	; 0x8
        30dce0:	eb634ce8 	bl	1be1088 <$CompCompare>
        30dce4:	e3300000 	teq	r0, #0	; 0x0
        30dce8:	0a000019 	beq	30dd54 <TNewtEventHandler::SetWakeupTime(unsigned long)+0x104>
        30dcec:	e24dd010 	sub	sp, sp, #16	; 0x10
        30dcf0:	e28d0008 	add	r0, sp, #8	; 0x8
        30dcf4:	eb631737 	bl	1bd39d8 <$GetGlobalTime>
        30dcf8:	e24dd008 	sub	sp, sp, #8	; 0x8
        30dcfc:	e28d0020 	add	r0, sp, #32	; 0x20
        30dd00:	e8905000 	ldmia	r0, {ip, lr}
        30dd04:	e88d5000 	stmia	sp, {ip, lr}
        30dd08:	e1a0100d 	mov	r1, sp
        30dd0c:	e28d0010 	add	r0, sp, #16	; 0x10
        30dd10:	eb634ce1 	bl	1be109c <$CompSub>
        30dd14:	e28d0008 	add	r0, sp, #8	; 0x8
        30dd18:	e8bd5000 	ldmia	sp!, {ip, lr}
        30dd1c:	e8805000 	stmia	r0, {ip, lr}
        30dd20:	e1a0000d 	mov	r0, sp
        30dd24:	ebfd39f1 	bl	25c4f0 <TTimeToMilliseconds(TTime)>
        30dd28:	e3500000 	cmp	r0, #0	; 0x0
        30dd2c:	d3a01001 	movle	r1, #1	; 0x1
        30dd30:	c1a01000 	movgt	r1, r0
        30dd34:	e1a00004 	mov	r0, r4
        30dd38:	e3a02066 	mov	r2, #102	; 0x66
        30dd3c:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        30dd40:	eb637e50 	bl	1bed688 <TAEventHandler::$ResetIdle(unsigned long, TimeUnits)>
        30dd44:	e28dd010 	add	sp, sp, #16	; 0x10
        30dd48:	ea000003 	b	30dd5c <TNewtEventHandler::SetWakeupTime(unsigned long)+0x10c>
        30dd4c:	0c1054a8 	ldceq	4, cr5, [r0], -#672
        30dd50:	0c101690 	ldceq	6, cr1, [r0], -#576
        30dd54:	e1a00004 	mov	r0, r4
        30dd58:	eb637e63 	bl	1bed6ec <TAEventHandler::$StopIdle(void)>
        30dd5c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

