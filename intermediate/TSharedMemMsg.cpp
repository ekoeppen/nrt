#include "DDKIncludes/OS600/UserSharedMem.h"

/**
 * Symbol: TSharedMemMsg::__ct(void)
 * Address: 001e017c
 */
TSharedMemMsg::TSharedMemMsg(void) {
    /*
        1e017c:	e1a0c00d 	mov	ip, sp
        1e0180:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e0184:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0188:	e1b04000 	movs	r4, r0
        1e018c:	1a000003 	bne	1e01a0 <TSharedMemMsg::__ct(void)+0x24>
        1e0190:	e3a000a8 	mov	r0, #168	; 0xa8
        1e0194:	eb67b967 	bl	1bce738 <$__nw(unsigned int)>
        1e0198:	e1b04000 	movs	r4, r0
        1e019c:	0a000006 	beq	1e01bc <TSharedMemMsg::__ct(void)+0x40>
        1e01a0:	e2840030 	add	r0, r4, #48	; 0x30
        1e01a4:	eb67b134 	bl	1bcc67c <TDoubleQItem::$__ct(void)>
        1e01a8:	e2840080 	add	r0, r4, #128	; 0x80
        1e01ac:	eb67b132 	bl	1bcc67c <TDoubleQItem::$__ct(void)>
        1e01b0:	e284008c 	add	r0, r4, #140	; 0x8c
        1e01b4:	e3a01080 	mov	r1, #128	; 0x80
        1e01b8:	eb67b53f 	bl	1bcd6bc <TDoubleQContainer::$__ct(char *)>
        1e01bc:	e1a00004 	mov	r0, r4
        1e01c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSharedMemMsg::Init(TEnvironment *)
 * Address: 001e03f4
 */
long		TSharedMemMsg::Init() {
    /*
        1e03f4:	e1a0c00d 	mov	ip, sp
        1e03f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e03fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0400:	e1a04000 	mov	r4, r0
        1e0404:	e24dd008 	sub	sp, sp, #8	; 0x8
        1e0408:	eb646e69 	bl	1afbdb4 <TSharedMem::$Init(TEnvironment *)>
        1e040c:	e3a00000 	mov	r0, #0	; 0x0
        1e0410:	e5840024 	str	r0, [r4, #36]	; fField36
        1e0414:	e58d0004 	str	r0, [sp, #4]
        1e0418:	e2841028 	add	r1, r4, #40	; 0x28
        1e041c:	e58d0000 	str	r0, [sp]
        1e0420:	e89d5000 	ldmia	sp, {ip, lr}
        1e0424:	e8815000 	stmia	r1, {ip, lr}
        1e0428:	e584003c 	str	r0, [r4, #60]	; fField60
        1e042c:	e5840040 	str	r0, [r4, #64]	; fField64
        1e0430:	e5840044 	str	r0, [r4, #68]	; fField68
        1e0434:	e5840048 	str	r0, [r4, #72]	; fField72
        1e0438:	e584004c 	str	r0, [r4, #76]	; fField76
        1e043c:	e5840050 	str	r0, [r4, #80]	; fField80
        1e0440:	e5840054 	str	r0, [r4, #84]	; fField84
        1e0444:	e5840058 	str	r0, [r4, #88]	; fField88
        1e0448:	e584005c 	str	r0, [r4, #92]	; fField92
        1e044c:	e5840060 	str	r0, [r4, #96]	; fField96
        1e0450:	e5840064 	str	r0, [r4, #100]	; fField100
        1e0454:	e5840068 	str	r0, [r4, #104]	; fField104
        1e0458:	e584006c 	str	r0, [r4, #108]	; fField108
        1e045c:	e5840070 	str	r0, [r4, #112]	; fField112
        1e0460:	e3a01001 	mov	r1, #1	; 0x1
        1e0464:	e2844074 	add	r4, r4, #116	; 0x74
        1e0468:	e8840003 	stmia	r4, {r0, r1}
        1e046c:	e5840008 	str	r0, [r4, #8]	; fField8
        1e0470:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSharedMemMsg::CompleteReceiver(TSharedMemMsg *, long)
 * Address: 001e0474
 */
TSharedMemMsg::CompleteReceiver(TSharedMemMsg *, long) {
    /*
        1e0474:	e1a0c00d 	mov	ip, sp
        1e0478:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e047c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0480:	e1a05000 	mov	r5, r0
        1e0484:	e1a04001 	mov	r4, r1
        1e0488:	e1b06002 	movs	r6, r2
        1e048c:	e3a07000 	mov	r7, #0	; 0x0
        1e0490:	1a000019 	bne	1e04fc <TSharedMemMsg::CompleteReceiver(TSharedMemMsg *, long)+0x88>
        1e0494:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1e0498:	e585005c 	str	r0, [r5, #92]	; fField92
        1e049c:	e5940050 	ldr	r0, [r4, #80]	; fField80
        1e04a0:	e5850060 	str	r0, [r5, #96]	; fField96
        1e04a4:	e5940000 	ldr	r0, [r4]
        1e04a8:	e5850058 	str	r0, [r5, #88]	; fField88
        1e04ac:	e3a00000 	mov	r0, #0	; 0x0
        1e04b0:	e5850064 	str	r0, [r5, #100]	; fField100
        1e04b4:	e5941050 	ldr	r1, [r4, #80]	; fField80
        1e04b8:	e2111403 	ands	r1, r1, #50331648	; 0x3000000
        1e04bc:	13a01001 	movne	r1, #1	; 0x1
        1e04c0:	e21170ff 	ands	r7, r1, #255	; 0xff
        1e04c4:	1a00000b 	bne	1e04f8 <TSharedMemMsg::CompleteReceiver(TSharedMemMsg *, long)+0x84>
        1e04c8:	e285008c 	add	r0, r5, #140	; 0x8c
        1e04cc:	e1a01004 	mov	r1, r4
        1e04d0:	eb67b8a3 	bl	1bce764 <TDoubleQContainer::$Add(void *)>
        1e04d4:	e5940078 	ldr	r0, [r4, #120]
        1e04d8:	e5840074 	str	r0, [r4, #116]	; fField116
        1e04dc:	e5850064 	str	r0, [r5, #100]	; fField100
        1e04e0:	e5940078 	ldr	r0, [r4, #120]
        1e04e4:	e2900001 	adds	r0, r0, #1	; 0x1
        1e04e8:	e5840078 	str	r0, [r4, #120]
        1e04ec:	03a00001 	moveq	r0, #1	; 0x1
        1e04f0:	05a40078 	streq	r0, [r4, #120]!
        1e04f4:	ea000000 	b	1e04fc <TSharedMemMsg::CompleteReceiver(TSharedMemMsg *, long)+0x88>
        1e04f8:	e5a40050 	str	r0, [r4, #80]!	; fField80
        1e04fc:	e1a03006 	mov	r3, r6
        1e0500:	e1a01007 	mov	r1, r7
        1e0504:	e1a00005 	mov	r0, r5
        1e0508:	e3a02401 	mov	r2, #16777216	; 0x1000000
        1e050c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1e0510:	ea645560 	b	1af5a98 <TSharedMemMsg::$CompleteMsg(unsigned char, unsigned long, long)>
    */
}

/**
 * Symbol: TSharedMemMsg::CompleteSender(long)
 * Address: 001e0514
 */
TSharedMemMsg::CompleteSender(long) {
    /*
        1e0514:	e1a03001 	mov	r3, r1
        1e0518:	e3a02402 	mov	r2, #33554432	; 0x2000000
        1e051c:	e3a01000 	mov	r1, #0	; 0x0
        1e0520:	ea64555c 	b	1af5a98 <TSharedMemMsg::$CompleteMsg(unsigned char, unsigned long, long)>
    */
}

/**
 * Symbol: TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)
 * Address: 001e0524
 */
TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long) {
    /*
        1e0524:	e1a0c00d 	mov	ip, sp
        1e0528:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e052c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e0530:	e1a04000 	mov	r4, r0
        1e0534:	e1a06002 	mov	r6, r2
        1e0538:	e1a05003 	mov	r5, r3
        1e053c:	e20180ff 	and	r8, r1, #255	; 0xff
        1e0540:	e24dd008 	sub	sp, sp, #8	; 0x8
        1e0544:	e3a07000 	mov	r7, #0	; 0x0
        1e0548:	e5807050 	str	r7, [r0, #80]	; fField80
        1e054c:	e1a01000 	mov	r1, r0
        1e0550:	e59f0098 	ldr	r0, [pc, #98]	; 1e05f0 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0xcc>
        1e0554:	e5900000 	ldr	r0, [r0]
        1e0558:	eb648b1e 	bl	1b031d8 <TTimerEngine::$Remove(TSharedMemMsg *)>
        1e055c:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1e0560:	e3300000 	teq	r0, #0	; 0x0
        1e0564:	11a01004 	movne	r1, r4
        1e0568:	1b67c0c1 	blne	1bd0874 <TDoubleQContainer::$DeleteFromQueue(void *)>
        1e056c:	e594107c 	ldr	r1, [r4, #124]	; fField124
        1e0570:	e3310000 	teq	r1, #0	; 0x0
        1e0574:	0a00000b 	beq	1e05a8 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0x84>
        1e0578:	e1a0200d 	mov	r2, sp
        1e057c:	e3a00003 	mov	r0, #3	; 0x3
        1e0580:	eb64554c 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        1e0584:	e3300000 	teq	r0, #0	; 0x0
        1e0588:	1a000006 	bne	1e05a8 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0x84>
        1e058c:	e3350000 	teq	r5, #0	; 0x0
        1e0590:	11a00005 	movne	r0, r5
        1e0594:	03a000c4 	moveq	r0, #196	; 0xc4
        1e0598:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1e059c:	e3a02000 	mov	r2, #0	; 0x0
        1e05a0:	e59d1000 	ldr	r1, [sp]
        1e05a4:	eb647a74 	bl	1afef7c <$LowLevelCopyDoneFromKernelGlue>
        1e05a8:	e584707c 	str	r7, [r4, #124]	; fField124
        1e05ac:	e5847074 	str	r7, [r4, #116]	; fField116
        1e05b0:	e594006c 	ldr	r0, [r4, #108]	; fField108
        1e05b4:	e1a01000 	mov	r1, r0
        1e05b8:	e210000f 	ands	r0, r0, #15	; 0xf
        1e05bc:	0a000031 	beq	1e0688 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0x164>
        1e05c0:	e3300002 	teq	r0, #2	; 0x2
        1e05c4:	0a00000b 	beq	1e05f8 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0xd4>
        1e05c8:	e3300003 	teq	r0, #3	; 0x3
        1e05cc:	159f0020 	ldrne	r0, [pc, #20]	; 1e05f4 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0xd0>
        1e05d0:	1a000004 	bne	1e05e8 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0xc4>
        1e05d4:	e1a0200d 	mov	r2, sp
        1e05d8:	e3a00003 	mov	r0, #3	; 0x3
        1e05dc:	eb645535 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        1e05e0:	e3300000 	teq	r0, #0	; 0x0
        1e05e4:	0a000013 	beq	1e0638 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0x114>
        1e05e8:	e5a40044 	str	r0, [r4, #68]!	; fField68
        1e05ec:	ea000026 	b	1e068c <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0x168>
        1e05f0:	0c100fe0 	ldceq	15, cr0, [r0], -#896
        1e05f4:	ffffd8cb 	swinv	0x00ffd8cb
        1e05f8:	e28d2004 	add	r2, sp, #4	; 0x4
        1e05fc:	e3a00002 	mov	r0, #2	; 0x2
        1e0600:	eb64552c 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        1e0604:	e3300000 	teq	r0, #0	; 0x0
        1e0608:	1afffff6 	bne	1e05e8 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0xc4>
        1e060c:	e3380000 	teq	r8, #0	; 0x0
        1e0610:	159f001c 	ldrne	r0, [pc, #1c]	; 1e0634 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0x110>
        1e0614:	1afffff3 	bne	1e05e8 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0xc4>
        1e0618:	e5845044 	str	r5, [r4, #68]	; fField68
        1e061c:	e5846050 	str	r6, [r4, #80]	; fField80
        1e0620:	e1a01004 	mov	r1, r4
        1e0624:	e3a02000 	mov	r2, #0	; 0x0
        1e0628:	e59d0004 	ldr	r0, [sp, #4]
        1e062c:	eb649322 	bl	1b052bc <TPort::$Send(TSharedMemMsg *, unsigned long)>
        1e0630:	ea000015 	b	1e068c <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0x168>
        1e0634:	ffffd8c7 	swinv	0x00ffd8c7
        1e0638:	e59d0000 	ldr	r0, [sp]
        1e063c:	e5a05010 	str	r5, [r0, #16]!
        1e0640:	e5941058 	ldr	r1, [r4, #88]	; fField88
        1e0644:	e59d0000 	ldr	r0, [sp]
        1e0648:	e5a01014 	str	r1, [r0, #20]!
        1e064c:	e594105c 	ldr	r1, [r4, #92]	; fField92
        1e0650:	e59d0000 	ldr	r0, [sp]
        1e0654:	e5a01018 	str	r1, [r0, #24]!
        1e0658:	e5941060 	ldr	r1, [r4, #96]	; fField96
        1e065c:	e59d0000 	ldr	r0, [sp]
        1e0660:	e5a0101c 	str	r1, [r0, #28]!
        1e0664:	e5941064 	ldr	r1, [r4, #100]	; fField100
        1e0668:	e59d0000 	ldr	r0, [sp]
        1e066c:	e5a01020 	str	r1, [r0, #32]!
        1e0670:	e59f0018 	ldr	r0, [pc, #18]	; 1e0690 <TSharedMemMsg::CompleteMsg(unsigned char, unsigned long, long)+0x16c>
        1e0674:	e5900000 	ldr	r0, [r0]
        1e0678:	e59d1000 	ldr	r1, [sp]
        1e067c:	e5a0111c 	str	r1, [r0, #284]!
        1e0680:	e59d0000 	ldr	r0, [sp]
        1e0684:	eb649306 	bl	1b052a4 <$ScheduleTask(TTask *)>
        1e0688:	e5a45044 	str	r5, [r4, #68]!	; fField68
        1e068c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e0690:	0c100fd0 	ldceq	15, cr0, [r0], -#832
    */
}

/**
 * Symbol: TSharedMemMsg::__dt(void)
 * Address: 001e0694
 */
TSharedMemMsg::~TSharedMemMsg(void) {
    /*
        1e0694:	e1a0c00d 	mov	ip, sp
        1e0698:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1e069c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e06a0:	e1a04000 	mov	r4, r0
        1e06a4:	e1a05001 	mov	r5, r1
        1e06a8:	eb06c938 	bl	392b90 <EnterFIQAtomic>
        1e06ac:	e284008c 	add	r0, r4, #140	; 0x8c
        1e06b0:	e1a09000 	mov	r9, r0
        1e06b4:	eb67e584 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1e06b8:	e1b07000 	movs	r7, r0
        1e06bc:	e59f808c 	ldr	r8, [pc, #8c]	; 1e0750 <TSharedMemMsg::__dt(void)+0xbc>	; fField8
        1e06c0:	e3a06d63 	mov	r6, #6336	; 0x18c0
        1e06c4:	e2466901 	sub	r6, r6, #16384	; 0x4000
        1e06c8:	0a00000b 	beq	1e06fc <TSharedMemMsg::__dt(void)+0x68>
        1e06cc:	e1a01007 	mov	r1, r7
        1e06d0:	e5980000 	ldr	r0, [r8]
        1e06d4:	eb648abf 	bl	1b031d8 <TTimerEngine::$Remove(TSharedMemMsg *)>
        1e06d8:	eb06c934 	bl	392bb0 <ExitFIQAtomic>
        1e06dc:	e1a00007 	mov	r0, r7
        1e06e0:	e1a01006 	mov	r1, r6
        1e06e4:	eb6454ed 	bl	1af5aa0 <TSharedMemMsg::$CompleteSender(long)>
        1e06e8:	eb06c928 	bl	392b90 <EnterFIQAtomic>
        1e06ec:	e1a00009 	mov	r0, r9
        1e06f0:	eb67e575 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1e06f4:	e1b07000 	movs	r7, r0
        1e06f8:	1afffff3 	bne	1e06cc <TSharedMemMsg::__dt(void)+0x38>
        1e06fc:	eb06c92b 	bl	392bb0 <ExitFIQAtomic>
        1e0700:	e1a01004 	mov	r1, r4
        1e0704:	e5980000 	ldr	r0, [r8]
        1e0708:	eb648ab2 	bl	1b031d8 <TTimerEngine::$Remove(TSharedMemMsg *)>
        1e070c:	e5940044 	ldr	r0, [r4, #68]	; fField68
        1e0710:	e3300001 	teq	r0, #1	; 0x1
        1e0714:	0a000002 	beq	1e0724 <TSharedMemMsg::__dt(void)+0x90>
        1e0718:	e5940050 	ldr	r0, [r4, #80]	; fField80
        1e071c:	e3100403 	tst	r0, #50331648	; 0x3000000
        1e0720:	0a000005 	beq	1e073c <TSharedMemMsg::__dt(void)+0xa8>
        1e0724:	e1a00004 	mov	r0, r4
        1e0728:	e3a030c6 	mov	r3, #198	; 0xc6
        1e072c:	e2433b0a 	sub	r3, r3, #10240	; 0x2800
        1e0730:	e3a02000 	mov	r2, #0	; 0x0
        1e0734:	e3a01001 	mov	r1, #1	; 0x1
        1e0738:	eb6454d6 	bl	1af5a98 <TSharedMemMsg::$CompleteMsg(unsigned char, unsigned long, long)>
        1e073c:	e3150001 	tst	r5, #1	; 0x1
        1e0740:	11a00004 	movne	r0, r4
        1e0744:	191b6bf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        1e0748:	1a67b3e4 	bne	1bcd6e0 <$__dl(void *)>
        1e074c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1e0750:	0c100fe0 	ldceq	15, cr0, [r0], -#896
    */
}

