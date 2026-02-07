#include "include/TICHandler.h"

/**
 * Symbol: TICHandler::Init(unsigned long)
 * Address: 000eb6f0
 */
TICHandler::Init(unsigned long) {
    /*
         eb6f0:	e1a0c00d 	mov	ip, sp
         eb6f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eb6f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb6fc:	e1a04000 	mov	r4, r0
         eb700:	e1a05001 	mov	r5, r1
         eb704:	e280103c 	add	r1, r0, #60	; 0x3c
         eb708:	e3a02000 	mov	r2, #0	; 0x0
         eb70c:	eb6bad10 	bl	1bd6b54 <$LockHeapRange>
         eb710:	e5845014 	str	r5, [r4, #20]	; fField20
         eb714:	e59f0064 	ldr	r0, [pc, #64]	; eb780 <TICHandler::Init(unsigned long)+0x90>
         eb718:	e584001c 	str	r0, [r4, #28]	; fField28
         eb71c:	e59f1060 	ldr	r1, [pc, #60]	; eb784 <TICHandler::Init(unsigned long)+0x94>
         eb720:	e5841020 	str	r1, [r4, #32]	; fField32
         eb724:	e3a01009 	mov	r1, #9	; 0x9
         eb728:	e5840004 	str	r0, [r4, #4]	; fField4
         eb72c:	e5841024 	str	r1, [r4, #36]	; fField36
         eb730:	e59f0050 	ldr	r0, [pc, #50]	; eb788 <TICHandler::Init(unsigned long)+0x98>
         eb734:	e5840008 	str	r0, [r4, #8]	; fField8
         eb738:	e59f004c 	ldr	r0, [pc, #4c]	; eb78c <TICHandler::Init(unsigned long)+0x9c>	; fField4
         eb73c:	e584000c 	str	r0, [r4, #12]	; fField12
         eb740:	e3a00000 	mov	r0, #0	; 0x0
         eb744:	eb6b87d8 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         eb748:	e3a050e9 	mov	r5, #233	; 0xe9
         eb74c:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
         eb750:	e5840000 	str	r0, [r4]
         eb754:	e3300000 	teq	r0, #0	; 0x0
         eb758:	0a000006 	beq	eb778 <TICHandler::Init(unsigned long)+0x88>
         eb75c:	e3a01000 	mov	r1, #0	; 0x0
         eb760:	eb6ba8cb 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         eb764:	e3a00000 	mov	r0, #0	; 0x0
         eb768:	eb6b87cf 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         eb76c:	e5840030 	str	r0, [r4, #48]	; fField48
         eb770:	e3300000 	teq	r0, #0	; 0x0
         eb774:	1a000005 	bne	eb790 <TICHandler::Init(unsigned long)+0xa0>
         eb778:	e1a00005 	mov	r0, r5
         eb77c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         eb780:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         eb784:	636f6d67 	cmnvs	pc, #6592	; 0x19c0
         eb788:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
         eb78c:	69632020 	stmvsdb	r3!, {r5, sp}^
         eb790:	e3a01000 	mov	r1, #0	; 0x0
         eb794:	eb6ba8be 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         eb798:	e3300000 	teq	r0, #0	; 0x0
         eb79c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         eb7a0:	e3a05000 	mov	r5, #0	; 0x0
         eb7a4:	e5845018 	str	r5, [r4, #24]	; fField24
         eb7a8:	eb65fb5f 	bl	1a6a52c <$InitIRQTimerObject(void)>
         eb7ac:	eb65fb5f 	bl	1a6a530 <$GetIRQTimerObject(void)>
         eb7b0:	e1a02004 	mov	r2, r4
         eb7b4:	e59f1064 	ldr	r1, [pc, #64]	; eb820 <TICHandler::Init(unsigned long)+0x130>
         eb7b8:	eb65fb5f 	bl	1a6a53c <TIRQTimer::$AcquireIRQTimer(void (*)(void *, unsigned long), void *)>
         eb7bc:	e5840034 	str	r0, [r4, #52]	; fField52
         eb7c0:	e24dd004 	sub	sp, sp, #4	; 0x4
         eb7c4:	eb65fb52 	bl	1a6a514 <$GetBIOInterfaceObject(void)>
         eb7c8:	e1a0200d 	mov	r2, sp
         eb7cc:	e3a01020 	mov	r1, #32	; 0x20
         eb7d0:	eb6607b9 	bl	1a6d6bc <TBIOInterface::$ReadDIOPins(unsigned char, unsigned long *)>
         eb7d4:	e59d0000 	ldr	r0, [sp]
         eb7d8:	e3300000 	teq	r0, #0	; 0x0
         eb7dc:	13a00006 	movne	r0, #6	; 0x6
         eb7e0:	03a00005 	moveq	r0, #5	; 0x5
         eb7e4:	e3a0300b 	mov	r3, #11	; 0xb
         eb7e8:	e5840018 	str	r0, [r4, #24]	; fField24
         eb7ec:	e92d0008 	stmdb	sp!, {r3}
         eb7f0:	eb65fb47 	bl	1a6a514 <$GetBIOInterfaceObject(void)>
         eb7f4:	e59f3028 	ldr	r3, [pc, #28]	; eb824 <TICHandler::Init(unsigned long)+0x134>	; fField28
         eb7f8:	e1a02004 	mov	r2, r4
         eb7fc:	e3a01020 	mov	r1, #32	; 0x20
         eb800:	eb6607a3 	bl	1a6d694 <TBIOInterface::$RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
         eb804:	e28dd004 	add	sp, sp, #4	; 0x4
         eb808:	e5840038 	str	r0, [r4, #56]	; fField56
         eb80c:	eb65fb40 	bl	1a6a514 <$GetBIOInterfaceObject(void)>
         eb810:	e5b41038 	ldr	r1, [r4, #56]!	; fField56
         eb814:	eb6607a0 	bl	1a6d69c <TBIOInterface::$EnableInterrupt(KeynesIntObject *)>
         eb818:	e1a00005 	mov	r0, r5
         eb81c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         eb820:	01a094cc 	moveq	r9, ip, asr #9
         eb824:	01a094c8 	moveq	r9, r8, asr #9
    */
}

/**
 * Symbol: TICHandler::Send(unsigned long)
 * Address: 000eb828
 */
TICHandler::Send(unsigned long) {
    /*
         eb828:	e1a0c00d 	mov	ip, sp
         eb82c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eb830:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb834:	e3a02000 	mov	r2, #0	; 0x0
         eb838:	e5801010 	str	r1, [r0, #16]	; fField16
         eb83c:	e59f1058 	ldr	r1, [pc, #58]	; eb89c <TICHandler::Send(unsigned long)+0x74>
         eb840:	e591c000 	ldr	ip, [r1]
         eb844:	e33c0000 	teq	ip, #0	; 0x0
         eb848:	0a000011 	beq	eb894 <TICHandler::Send(unsigned long)+0x6c>
         eb84c:	e590e000 	ldr	lr, [r0]
         eb850:	e2804004 	add	r4, r0, #4	; 0x4
         eb854:	e3a02000 	mov	r2, #0	; 0x0
         eb858:	e3a03000 	mov	r3, #0	; 0x0
         eb85c:	e3a05000 	mov	r5, #0	; 0x0
         eb860:	e3a01000 	mov	r1, #0	; 0x0
         eb864:	e3a00001 	mov	r0, #1	; 0x1
         eb868:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         eb86c:	e1a03005 	mov	r3, r5
         eb870:	e3a02010 	mov	r2, #16	; 0x10
         eb874:	e92d000c 	stmdb	sp!, {r2, r3}
         eb878:	e1a03004 	mov	r3, r4
         eb87c:	e1a0000c 	mov	r0, ip
         eb880:	e3a02000 	mov	r2, #0	; 0x0
         eb884:	e59e1000 	ldr	r1, [lr]
         eb888:	eb6bbd2e 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         eb88c:	e28dd018 	add	sp, sp, #24	; 0x18
         eb890:	e1a02000 	mov	r2, r0
         eb894:	e1a00002 	mov	r0, r2
         eb898:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         eb89c:	0c1054a8 	ldceq	4, cr5, [r0], -#672
    */
}

/**
 * Symbol: TICHandler::SendICMessage(unsigned long)
 * Address: 000eb8a0
 */
TICHandler::SendICMessage(unsigned long) {
    /*
         eb8a0:	e1a0c00d 	mov	ip, sp
         eb8a4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         eb8a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb8ac:	e1a0c000 	mov	ip, r0
         eb8b0:	e3a03000 	mov	r3, #0	; 0x0
         eb8b4:	e3a02000 	mov	r2, #0	; 0x0
         eb8b8:	e580102c 	str	r1, [r0, #44]	; fField44
         eb8bc:	e3a01000 	mov	r1, #0	; 0x0
         eb8c0:	e3a00301 	mov	r0, #67108864	; 0x4000000
         eb8c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         eb8c8:	e3a03014 	mov	r3, #20	; 0x14
         eb8cc:	e92d0008 	stmdb	sp!, {r3}
         eb8d0:	e59c0030 	ldr	r0, [ip, #48]	; fField48
         eb8d4:	e28c301c 	add	r3, ip, #28	; 0x1c
         eb8d8:	e5901000 	ldr	r1, [r0]
         eb8dc:	e5bc0014 	ldr	r0, [ip, #20]!	; fField20
         eb8e0:	eb6bbd17 	bl	1bdad44 <$SendForInterrupt__FUlN21PvN31P5TTimeUc>
         eb8e4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TICHandler::SetTimer(unsigned long)
 * Address: 000eb8e8
 */
TICHandler::SetTimer(unsigned long) {
    /*
         eb8e8:	e1a0c00d 	mov	ip, sp
         eb8ec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eb8f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb8f4:	e1a04000 	mov	r4, r0
         eb8f8:	e5801018 	str	r1, [r0, #24]	; fField24
         eb8fc:	eb65fb0b 	bl	1a6a530 <$GetIRQTimerObject(void)>
         eb900:	e5941034 	ldr	r1, [r4, #52]	; fField52
         eb904:	e1a03004 	mov	r3, r4
         eb908:	e3a02ffb 	mov	r2, #1004	; 0x3ec
         eb90c:	e2822bb3 	add	r2, r2, #183296	; 0x2cc00
         eb910:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         eb914:	ea65fb09 	b	1a6a540 <TIRQTimer::$SetIRQTimer(IRQTimer *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TICHandler::ResetTimer(unsigned long)
 * Address: 000eb918
 */
TICHandler::ResetTimer(unsigned long) {
    /*
         eb918:	e1a0c00d 	mov	ip, sp
         eb91c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eb920:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb924:	e1a04000 	mov	r4, r0
         eb928:	e5801018 	str	r1, [r0, #24]	; fField24
         eb92c:	eb65faff 	bl	1a6a530 <$GetIRQTimerObject(void)>
         eb930:	e5b41034 	ldr	r1, [r4, #52]!	; fField52
         eb934:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         eb938:	ea65fb01 	b	1a6a544 <TIRQTimer::$ResetIRQTimer(IRQTimer *)>
    */
}

/**
 * Symbol: TICHandler::SampleInterconnectStateMachine(void)
 * Address: 000eb93c
 */
TICHandler::SampleInterconnectStateMachine(void) {
    /*
         eb93c:	e1a0c00d 	mov	ip, sp
         eb940:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eb944:	e24cb004 	sub	fp, ip, #4	; 0x4
         eb948:	e1a04000 	mov	r4, r0
         eb94c:	e24dd004 	sub	sp, sp, #4	; 0x4
         eb950:	eb65faef 	bl	1a6a514 <$GetBIOInterfaceObject(void)>
         eb954:	e1a0200d 	mov	r2, sp
         eb958:	e3a01020 	mov	r1, #32	; 0x20
         eb95c:	eb660756 	bl	1a6d6bc <TBIOInterface::$ReadDIOPins(unsigned char, unsigned long *)>
         eb960:	e59d0000 	ldr	r0, [sp]
         eb964:	e3300000 	teq	r0, #0	; 0x0
         eb968:	13a00000 	movne	r0, #0	; 0x0
         eb96c:	03a00001 	moveq	r0, #1	; 0x1
         eb970:	e5941018 	ldr	r1, [r4, #24]	; fField24
         eb974:	e3510006 	cmp	r1, #6	; 0x6
         eb978:	908ff101 	addls	pc, pc, r1, lsl #2
         eb97c:	ea00002b 	b	eba30 <TICHandler::SampleInterconnectStateMachine(void)+0xf4>
         eb980:	ea00002a 	b	eba30 <TICHandler::SampleInterconnectStateMachine(void)+0xf4>
         eb984:	ea000013 	b	eb9d8 <TICHandler::SampleInterconnectStateMachine(void)+0x9c>
         eb988:	ea00000d 	b	eb9c4 <TICHandler::SampleInterconnectStateMachine(void)+0x88>
         eb98c:	ea00001f 	b	eba10 <TICHandler::SampleInterconnectStateMachine(void)+0xd4>
         eb990:	ea000016 	b	eb9f0 <TICHandler::SampleInterconnectStateMachine(void)+0xb4>
         eb994:	ea000004 	b	eb9ac <TICHandler::SampleInterconnectStateMachine(void)+0x70>
         eb998:	e3300000 	teq	r0, #0	; 0x0
         eb99c:	0a000023 	beq	eba30 <TICHandler::SampleInterconnectStateMachine(void)+0xf4>
         eb9a0:	e1a00004 	mov	r0, r4
         eb9a4:	e3a01001 	mov	r1, #1	; 0x1
         eb9a8:	ea000003 	b	eb9bc <TICHandler::SampleInterconnectStateMachine(void)+0x80>
         eb9ac:	e3300000 	teq	r0, #0	; 0x0
         eb9b0:	1a00001e 	bne	eba30 <TICHandler::SampleInterconnectStateMachine(void)+0xf4>
         eb9b4:	e1a00004 	mov	r0, r4
         eb9b8:	e3a01002 	mov	r1, #2	; 0x2
         eb9bc:	eb6476be 	bl	1a094bc <TICHandler::$SetTimer(unsigned long)>
         eb9c0:	ea00001a 	b	eba30 <TICHandler::SampleInterconnectStateMachine(void)+0xf4>
         eb9c4:	e3300000 	teq	r0, #0	; 0x0
         eb9c8:	0afffff9 	beq	eb9b4 <TICHandler::SampleInterconnectStateMachine(void)+0x78>
         eb9cc:	e1a00004 	mov	r0, r4
         eb9d0:	e3a01005 	mov	r1, #5	; 0x5
         eb9d4:	ea000003 	b	eb9e8 <TICHandler::SampleInterconnectStateMachine(void)+0xac>
         eb9d8:	e3300000 	teq	r0, #0	; 0x0
         eb9dc:	1affffef 	bne	eb9a0 <TICHandler::SampleInterconnectStateMachine(void)+0x64>
         eb9e0:	e1a00004 	mov	r0, r4
         eb9e4:	e3a01006 	mov	r1, #6	; 0x6
         eb9e8:	eb6476b4 	bl	1a094c0 <TICHandler::$ResetTimer(unsigned long)>
         eb9ec:	ea00000f 	b	eba30 <TICHandler::SampleInterconnectStateMachine(void)+0xf4>
         eb9f0:	e3300000 	teq	r0, #0	; 0x0
         eb9f4:	1affffe9 	bne	eb9a0 <TICHandler::SampleInterconnectStateMachine(void)+0x64>
         eb9f8:	e1a00004 	mov	r0, r4
         eb9fc:	e3a01006 	mov	r1, #6	; 0x6
         eba00:	eb6476ae 	bl	1a094c0 <TICHandler::$ResetTimer(unsigned long)>
         eba04:	e1a00004 	mov	r0, r4
         eba08:	e3a01002 	mov	r1, #2	; 0x2
         eba0c:	ea000006 	b	eba2c <TICHandler::SampleInterconnectStateMachine(void)+0xf0>
         eba10:	e3300000 	teq	r0, #0	; 0x0
         eba14:	0affffe6 	beq	eb9b4 <TICHandler::SampleInterconnectStateMachine(void)+0x78>
         eba18:	e1a00004 	mov	r0, r4
         eba1c:	e3a01005 	mov	r1, #5	; 0x5
         eba20:	eb6476a6 	bl	1a094c0 <TICHandler::$ResetTimer(unsigned long)>
         eba24:	e1a00004 	mov	r0, r4
         eba28:	e3a01001 	mov	r1, #1	; 0x1
         eba2c:	eb6476a1 	bl	1a094b8 <TICHandler::$SendICMessage(unsigned long)>
         eba30:	e3a00000 	mov	r0, #0	; 0x0
         eba34:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TICHandler::IC_InterruptHandler(void)
 * Address: 000eba38
 */
TICHandler::IC_InterruptHandler(void) {
    /*
         eba38:	e5901018 	ldr	r1, [r0, #24]	; fField24
         eba3c:	e3310000 	teq	r1, #0	; 0x0
         eba40:	03a00000 	moveq	r0, #0	; 0x0
         eba44:	1a64769e 	bne	1a094c4 <TICHandler::$SampleInterconnectStateMachine(void)>
         eba48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TICHandler::IC_TimerInterruptHandler(void)
 * Address: 000eba4c
 */
TICHandler::IC_TimerInterruptHandler(void) {
    /*
         eba4c:	e5901018 	ldr	r1, [r0, #24]	; fField24
         eba50:	e3310001 	teq	r1, #1	; 0x1
         eba54:	03a01003 	moveq	r1, #3	; 0x3
         eba58:	0a000002 	beq	eba68 <TICHandler::IC_TimerInterruptHandler(void)+0x1c>
         eba5c:	e3310002 	teq	r1, #2	; 0x2
         eba60:	1a000001 	bne	eba6c <TICHandler::IC_TimerInterruptHandler(void)+0x20>
         eba64:	e3a01004 	mov	r1, #4	; 0x4
         eba68:	e5801018 	str	r1, [r0, #24]	; fField24
         eba6c:	ea647694 	b	1a094c4 <TICHandler::$SampleInterconnectStateMachine(void)>
         eba70:	00200000 	eoreq	r0, r0, r0
         eba74:	00300000 	eoreqs	r0, r0, r0
    */
}

