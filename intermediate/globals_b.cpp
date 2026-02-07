#include "Newton.h"

/**
 * Symbol: BootOS
 * Address: 00018688
 */
void globals::BootOS() {
    /*
         18688:	e3a000b0 	mov	r0, #176	; 0xb0
         1868c:	e3800a01 	orr	r0, r0, #4096	; 0x1000
         18690:	ee010f11 	mcr	15, 0, r0, cr1, cr1, {0}
         18694:	ee100f10 	mrc	15, 0, r0, cr0, cr0, {0}
         18698:	e3c0000f 	bic	r0, r0, #15	; 0xf
         1869c:	e2200311 	eor	r0, r0, #1140850688	; 0x44000000
         186a0:	e2200801 	eor	r0, r0, #65536	; 0x10000
         186a4:	e2300ca1 	eors	r0, r0, #41216	; 0xa100
         186a8:	0e0f0f51 	mcreq	15, 0, r0, cr15, cr1, {2}
         186ac:	e59f0e24 	ldr	r0, [pc, #e24]	; 194d8 <ResetFromResetSwitch+0x2c>
         186b0:	e3a01505 	mov	r1, #20971520	; 0x1400000
         186b4:	e5801000 	str	r1, [r0]
         186b8:	e59f0e1c 	ldr	r0, [pc, #e1c]	; 194dc <ResetFromResetSwitch+0x30>
         186bc:	e3a01001 	mov	r1, #1	; 0x1
         186c0:	e5801000 	str	r1, [r0]
         186c4:	1a000003 	bne	186d8 <BootOS+0x50>
         186c8:	e51f0088 	ldr	r0, [pc, #ffffff78]	; 18648 <DiagHook+0x178>
         186cc:	e5900000 	ldr	r0, [r0]
         186d0:	e3d004ff 	bics	r0, r0, #-16777216	; 0xff000000
         186d4:	1a0002bd 	bne	191d0 <SaveCPUStateAndStopSystem+0x288>
         186d8:	e59f0e00 	ldr	r0, [pc, #e00]	; 194e0 <ResetFromResetSwitch+0x34>
         186dc:	e3a01531 	mov	r1, #205520896	; 0xc400000
         186e0:	e5801000 	str	r1, [r0]
         186e4:	e59f0df8 	ldr	r0, [pc, #df8]	; 194e4 <ResetFromResetSwitch+0x38>
         186e8:	e3a01535 	mov	r1, #222298112	; 0xd400000
         186ec:	e5801000 	str	r1, [r0]
         186f0:	e59f0df0 	ldr	r0, [pc, #df0]	; 194e8 <ResetFromResetSwitch+0x3c>
         186f4:	e5801000 	str	r1, [r0]
         186f8:	e59f0dec 	ldr	r0, [pc, #dec]	; 194ec <ResetFromResetSwitch+0x40>
         186fc:	e5801000 	str	r1, [r0]
         18700:	e59f0de8 	ldr	r0, [pc, #de8]	; 194f0 <ResetFromResetSwitch+0x44>
         18704:	e5801000 	str	r1, [r0]
         18708:	e59f0de4 	ldr	r0, [pc, #de4]	; 194f4 <ResetFromResetSwitch+0x48>
         1870c:	e3a01001 	mov	r1, #1	; 0x1
         18710:	e5801000 	str	r1, [r0]
         18714:	e329f0d1 	msr	CPSR_fc, #209	; 0xd1
         18718:	e1a00000 	nop			(mov r0,r0)
         1871c:	e1a00000 	nop			(mov r0,r0)
         18720:	eb0beb50 	bl	313468 <GetRebootReason>
         18724:	e1a0b000 	mov	fp, r0
         18728:	eb0beb79 	bl	313514 <GetUnsuccessfulBootCount>
         1872c:	e1a0c000 	mov	ip, r0
         18730:	e3a000d3 	mov	r0, #211	; 0xd3
         18734:	e129f000 	msr	CPSR_fc, r0
         18738:	e1a00000 	nop			(mov r0,r0)
         1873c:	e1a00000 	nop			(mov r0,r0)
         18740:	e59f0db0 	ldr	r0, [pc, #db0]	; 194f8 <ResetFromResetSwitch+0x4c>
         18744:	e59f1db0 	ldr	r1, [pc, #db0]	; 194fc <ResetFromResetSwitch+0x50>
         18748:	e5801000 	str	r1, [r0]
         1874c:	e59f0dac 	ldr	r0, [pc, #dac]	; 19500 <ResetFromResetSwitch+0x54>
         18750:	eb0001ec 	bl	18f08 <SafeShortTimerDelay>
         18754:	e59f0d9c 	ldr	r0, [pc, #d9c]	; 194f8 <ResetFromResetSwitch+0x4c>
         18758:	e3a01000 	mov	r1, #0	; 0x0
         1875c:	e5801000 	str	r1, [r0]
         18760:	eb0def67 	bl	394504 <BasicBusControlRegInit>
         18764:	e59f0d98 	ldr	r0, [pc, #d98]	; 19504 <ResetFromResetSwitch+0x58>
         18768:	eb00037b 	bl	1955c <DiagBootStub>
         1876c:	e329f0d1 	msr	CPSR_fc, #209	; 0xd1
         18770:	e1a00000 	nop			(mov r0,r0)
         18774:	e1a00000 	nop			(mov r0,r0)
         18778:	e1a08000 	mov	r8, r0
         1877c:	e1a09001 	mov	r9, r1
         18780:	e329f0d3 	msr	CPSR_fc, #211	; 0xd3
         18784:	e1a00000 	nop			(mov r0,r0)
         18788:	e1a00000 	nop			(mov r0,r0)
         1878c:	e3530000 	cmp	r3, #0	; 0x0
         18790:	1affff4e 	bne	184d0 <DiagHook>
         18794:	e3a000b0 	mov	r0, #176	; 0xb0
         18798:	e3800a01 	orr	r0, r0, #4096	; 0x1000
         1879c:	ee010f11 	mcr	15, 0, r0, cr1, cr1, {0}
         187a0:	e329f0d1 	msr	CPSR_fc, #209	; 0xd1
         187a4:	e1a00000 	nop			(mov r0,r0)
         187a8:	e1a00000 	nop			(mov r0,r0)
         187ac:	e1a0000b 	mov	r0, fp
         187b0:	eb0bebc1 	bl	3136bc <SetRebootReason>
         187b4:	e1a0000c 	mov	r0, ip
         187b8:	eb0bebe3 	bl	31374c <SetUnsuccessfulBootCount>
         187bc:	e1a05008 	mov	r5, r8
         187c0:	e1a06009 	mov	r6, r9
         187c4:	e3a000d3 	mov	r0, #211	; 0xd3
         187c8:	e129f000 	msr	CPSR_fc, r0
         187cc:	e1a00000 	nop			(mov r0,r0)
         187d0:	e1a00000 	nop			(mov r0,r0)
         187d4:	e3a0b000 	mov	fp, #0	; 0x0
         187d8:	e1a00005 	mov	r0, r5
         187dc:	eb041808 	bl	11e804 <GetSuperStacksPhysBase>
         187e0:	e280db01 	add	sp, r0, #1024	; 0x400
         187e4:	e3e00000 	mvn	r0, #0	; 0x0
         187e8:	eb000108 	bl	18c10 <SetAbortStack>
         187ec:	e1a00005 	mov	r0, r5
         187f0:	e1a04005 	mov	r4, r5
         187f4:	e1a01006 	mov	r1, r6
         187f8:	eb0bec48 	bl	313920 <MemoryTest>
         187fc:	e1a07000 	mov	r7, r0
         18800:	eb0bebab 	bl	3136b4 <GetfBankAddr>
         18804:	e1a04000 	mov	r4, r0
         18808:	e1a00005 	mov	r0, r5
         1880c:	eb0417fc 	bl	11e804 <GetSuperStacksPhysBase>
         18810:	e5804000 	str	r4, [r0]
         18814:	e3a01017 	mov	r1, #23	; 0x17
         18818:	e5801004 	str	r1, [r0, #4]
         1881c:	eb041940 	bl	11ed24 <CopyRAMTableToKernelArea>
         18820:	e3350000 	teq	r5, #0	; 0x0
         18824:	159f2cdc 	ldrne	r2, [pc, #cdc]	; 19508 <ResetFromResetSwitch+0x5c>
         18828:	059f2cdc 	ldreq	r2, [pc, #cdc]	; 1950c <ResetFromResetSwitch+0x60>
         1882c:	e1a05002 	mov	r5, r2
         18830:	e3a00001 	mov	r0, #1	; 0x1
         18834:	e3a01000 	mov	r1, #0	; 0x0
         18838:	e1a03007 	mov	r3, r7
         1883c:	eb00b4b9 	bl	45b28 <InitTheMMUTables>
         18840:	e3a00055 	mov	r0, #85	; 0x55
         18844:	e3800c55 	orr	r0, r0, #21760	; 0x5500
         18848:	e3800855 	orr	r0, r0, #5570560	; 0x550000
         1884c:	e3800455 	orr	r0, r0, #1426063360	; 0x55000000
         18850:	ee030f13 	mcr	15, 0, r0, cr3, cr3, {0}
         18854:	eb0410e4 	bl	11cbec <GetKernelStackVirtualTop>
         18858:	e1a04000 	mov	r4, r0
         1885c:	e1a00007 	mov	r0, r7
         18860:	eb0419d0 	bl	11efa8 <GetPrimaryTablePhysBaseMMUOff>
         18864:	ee020f12 	mcr	15, 0, r0, cr2, cr2, {0}
         18868:	ee100f10 	mrc	15, 0, r0, cr0, cr0, {0}
         1886c:	e200100f 	and	r1, r0, #15	; 0xf
         18870:	e3c0000f 	bic	r0, r0, #15	; 0xf
         18874:	e2200441 	eor	r0, r0, #1090519040	; 0x41000000
         18878:	e2200701 	eor	r0, r0, #262144	; 0x40000
         1887c:	e2300c71 	eors	r0, r0, #28928	; 0x7100
         18880:	13510002 	cmpne	r1, #2	; 0x2
         18884:	e3a000b0 	mov	r0, #176	; 0xb0
         18888:	e3800005 	orr	r0, r0, #5	; 0x5
         1888c:	e3800c11 	orr	r0, r0, #4352	; 0x1100
         18890:	a3800008 	orrge	r0, r0, #8	; 0x8
         18894:	ee010f11 	mcr	15, 0, r0, cr1, cr1, {0}
         18898:	eb000016 	bl	188f8 <FlushTheCache>
         1889c:	e1a0d004 	mov	sp, r4
         188a0:	eb00b4b4 	bl	45b78 <HandleDebugCard>
         188a4:	eb0419c2 	bl	11efb4 <InitSpecialStacks>
         188a8:	eb0000e5 	bl	18c44 <SaveDebuggerCPUInfo>
         188ac:	e59f0c5c 	ldr	r0, [pc, #c5c]	; 19510 <ResetFromResetSwitch+0x64>
         188b0:	eb00b2bf 	bl	453b4 <InitCGlobals>
         188b4:	e1a00005 	mov	r0, r5
         188b8:	eb00b3fe 	bl	458b8 <PersistentRecovery>
         188bc:	e59f0c50 	ldr	r0, [pc, #c50]	; 19514 <ResetFromResetSwitch+0x68>
         188c0:	eb00b29a 	bl	45330 <InitParamBlockFromImagePhysicalPtr>
         188c4:	eb00b29a 	bl	45334 <PostCGlobalsHWInit>
         188c8:	eb0000aa 	bl	18b78 <SetFIQStack+0x20>
         188cc:	e6000010 	undefined
         188d0:	e59f0c40 	ldr	r0, [pc, #c40]	; 19518 <ResetFromResetSwitch+0x6c>
         188d4:	e1a0e00f 	mov	lr, pc
         188d8:	e590f000 	ldr	pc, [r0]
         188dc:	eb6ee3f2 	bl	1bd18ac <$DisableAllInterrupts>
         188e0:	eb00b285 	bl	452fc <AdjustRealTimeClock>
         188e4:	e329f010 	msr	CPSR_fc, #16	; 0x10
         188e8:	e1a00000 	nop			(mov r0,r0)
         188ec:	e1a00000 	nop			(mov r0,r0)
         188f0:	eb6b9de0 	bl	1b00078 <$OsBoot>
         188f4:	e6000110 	undefined
    */
}

/**
 * Symbol: BPNetEvaluate
 * Address: 0001a260
 */
void globals::BPNetEvaluate() {
    /*
         1a260:	e92d4ff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, lr}
         1a264:	e3a09000 	mov	r9, #0	; 0x0
         1a268:	e5c0907d 	strb	r9, [r0, #125]
         1a26c:	e5901038 	ldr	r1, [r0, #56]
         1a270:	e590e02c 	ldr	lr, [r0, #44]
         1a274:	e5903044 	ldr	r3, [r0, #68]
         1a278:	e5900020 	ldr	r0, [r0, #32]
         1a27c:	e2811635 	add	r1, r1, #55574528	; 0x3500000
         1a280:	e09e3823 	adds	r3, lr, r3, lsr #16
         1a284:	e3a040ff 	mov	r4, #255	; 0xff
         1a288:	e28fa0e8 	add	sl, pc, #232	; 0xe8
         1a28c:	e490e004 	ldr	lr, [r0], #4
         1a290:	ea0000d0 	b	1a5d8 <BPNetEvaluate+0x378>
         1a294:	e0049c22 	and	r9, r4, r2, lsr #24
         1a298:	e004ac25 	and	sl, r4, r5, lsr #24
         1a29c:	e02bba99 	mla	fp, r9, sl, fp
         1a2a0:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a2a4:	e0049822 	and	r9, r4, r2, lsr #16
         1a2a8:	e004a825 	and	sl, r4, r5, lsr #16
         1a2ac:	e02bba99 	mla	fp, r9, sl, fp
         1a2b0:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a2b4:	e0049422 	and	r9, r4, r2, lsr #8
         1a2b8:	e004a425 	and	sl, r4, r5, lsr #8
         1a2bc:	e02bba99 	mla	fp, r9, sl, fp
         1a2c0:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a2c4:	e0049002 	and	r9, r4, r2
         1a2c8:	e004a005 	and	sl, r4, r5
         1a2cc:	e02bba99 	mla	fp, r9, sl, fp
         1a2d0:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a2d4:	e29cc004 	adds	ip, ip, #4	; 0x4
         1a2d8:	e49e2004 	ldr	r2, [lr], #4
         1a2dc:	ab000058 	blge	1a444 <BPNetEvaluate+0x1e4>
         1a2e0:	e0049c22 	and	r9, r4, r2, lsr #24
         1a2e4:	e004ac26 	and	sl, r4, r6, lsr #24
         1a2e8:	e02bba99 	mla	fp, r9, sl, fp
         1a2ec:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a2f0:	e0049822 	and	r9, r4, r2, lsr #16
         1a2f4:	e004a826 	and	sl, r4, r6, lsr #16
         1a2f8:	e02bba99 	mla	fp, r9, sl, fp
         1a2fc:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a300:	e0049422 	and	r9, r4, r2, lsr #8
         1a304:	e004a426 	and	sl, r4, r6, lsr #8
         1a308:	e02bba99 	mla	fp, r9, sl, fp
         1a30c:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a310:	e0049002 	and	r9, r4, r2
         1a314:	e004a006 	and	sl, r4, r6
         1a318:	e02bba99 	mla	fp, r9, sl, fp
         1a31c:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a320:	e29cc004 	adds	ip, ip, #4	; 0x4
         1a324:	e49e2004 	ldr	r2, [lr], #4
         1a328:	ab000063 	blge	1a4bc <BPNetEvaluate+0x25c>
         1a32c:	e0049c22 	and	r9, r4, r2, lsr #24
         1a330:	e004ac27 	and	sl, r4, r7, lsr #24
         1a334:	e02bba99 	mla	fp, r9, sl, fp
         1a338:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a33c:	e0049822 	and	r9, r4, r2, lsr #16
         1a340:	e004a827 	and	sl, r4, r7, lsr #16
         1a344:	e02bba99 	mla	fp, r9, sl, fp
         1a348:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a34c:	e0049422 	and	r9, r4, r2, lsr #8
         1a350:	e004a427 	and	sl, r4, r7, lsr #8
         1a354:	e02bba99 	mla	fp, r9, sl, fp
         1a358:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a35c:	e0049002 	and	r9, r4, r2
         1a360:	e004a007 	and	sl, r4, r7
         1a364:	e02bba99 	mla	fp, r9, sl, fp
         1a368:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a36c:	e29cc004 	adds	ip, ip, #4	; 0x4
         1a370:	e49e2004 	ldr	r2, [lr], #4
         1a374:	ab00006e 	blge	1a534 <BPNetEvaluate+0x2d4>
         1a378:	e0049c22 	and	r9, r4, r2, lsr #24
         1a37c:	e004ac28 	and	sl, r4, r8, lsr #24
         1a380:	e02bba99 	mla	fp, r9, sl, fp
         1a384:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a388:	e0049822 	and	r9, r4, r2, lsr #16
         1a38c:	e004a828 	and	sl, r4, r8, lsr #16
         1a390:	e02bba99 	mla	fp, r9, sl, fp
         1a394:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a398:	e0049422 	and	r9, r4, r2, lsr #8
         1a39c:	e004a428 	and	sl, r4, r8, lsr #8
         1a3a0:	e02bba99 	mla	fp, r9, sl, fp
         1a3a4:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a3a8:	e0049002 	and	r9, r4, r2
         1a3ac:	e004a008 	and	sl, r4, r8
         1a3b0:	e02bba99 	mla	fp, r9, sl, fp
         1a3b4:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a3b8:	e29cc004 	adds	ip, ip, #4	; 0x4
         1a3bc:	e49e2004 	ldr	r2, [lr], #4
         1a3c0:	e8b101e0 	ldmia	r1!, {r5, r6, r7, r8}
         1a3c4:	baffffb2 	blt	1a294 <BPNetEvaluate+0x34>
         1a3c8:	e24fef4f 	sub	lr, pc, #316	; 0x13c
         1a3cc:	108ff20c 	addne	pc, pc, ip, lsl #4
         1a3d0:	e1a00000 	nop			(mov r0,r0)
         1a3d4:	e0049002 	and	r9, r4, r2
         1a3d8:	e004a005 	and	sl, r4, r5
         1a3dc:	e02bba99 	mla	fp, r9, sl, fp
         1a3e0:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a3e4:	e0049422 	and	r9, r4, r2, lsr #8
         1a3e8:	e004a425 	and	sl, r4, r5, lsr #8
         1a3ec:	e02bba99 	mla	fp, r9, sl, fp
         1a3f0:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a3f4:	e0049822 	and	r9, r4, r2, lsr #16
         1a3f8:	e004a825 	and	sl, r4, r5, lsr #16
         1a3fc:	e02bba99 	mla	fp, r9, sl, fp
         1a400:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a404:	e0049c22 	and	r9, r4, r2, lsr #24
         1a408:	e004ac25 	and	sl, r4, r5, lsr #24
         1a40c:	e02bba99 	mla	fp, r9, sl, fp
         1a410:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a414:	e1a0a00e 	mov	sl, lr
         1a418:	e490e004 	ldr	lr, [r0], #4
         1a41c:	e1b0c94e 	movs	ip, lr, asr #18
         1a420:	aa000062 	bge	1a5b0 <BPNetEvaluate+0x350>
         1a424:	229aa04c 	addcss	sl, sl, #76	; 0x4c
         1a428:	e1b0e80e 	movs	lr, lr, lsl #16
         1a42c:	e043e82e 	sub	lr, r3, lr, lsr #16
         1a430:	e20e9003 	and	r9, lr, #3	; 0x3
         1a434:	e04cc009 	sub	ip, ip, r9
         1a438:	e3cee003 	bic	lr, lr, #3	; 0x3
         1a43c:	e49e2004 	ldr	r2, [lr], #4
         1a440:	e08af209 	add	pc, sl, r9, lsl #4
         1a444:	108ff20c 	addne	pc, pc, ip, lsl #4
         1a448:	e1a00000 	nop			(mov r0,r0)
         1a44c:	e0049002 	and	r9, r4, r2
         1a450:	e004a006 	and	sl, r4, r6
         1a454:	e02bba99 	mla	fp, r9, sl, fp
         1a458:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a45c:	e0049422 	and	r9, r4, r2, lsr #8
         1a460:	e004a426 	and	sl, r4, r6, lsr #8
         1a464:	e02bba99 	mla	fp, r9, sl, fp
         1a468:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a46c:	e0049822 	and	r9, r4, r2, lsr #16
         1a470:	e004a826 	and	sl, r4, r6, lsr #16
         1a474:	e02bba99 	mla	fp, r9, sl, fp
         1a478:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a47c:	e0049c22 	and	r9, r4, r2, lsr #24
         1a480:	e004ac26 	and	sl, r4, r6, lsr #24
         1a484:	e02bba99 	mla	fp, r9, sl, fp
         1a488:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a48c:	e1a0a00e 	mov	sl, lr
         1a490:	e490e004 	ldr	lr, [r0], #4
         1a494:	e1b0c94e 	movs	ip, lr, asr #18
         1a498:	aa000044 	bge	1a5b0 <BPNetEvaluate+0x350>
         1a49c:	229aa04c 	addcss	sl, sl, #76	; 0x4c
         1a4a0:	e1b0e80e 	movs	lr, lr, lsl #16
         1a4a4:	e043e82e 	sub	lr, r3, lr, lsr #16
         1a4a8:	e20e9003 	and	r9, lr, #3	; 0x3
         1a4ac:	e04cc009 	sub	ip, ip, r9
         1a4b0:	e3cee003 	bic	lr, lr, #3	; 0x3
         1a4b4:	e49e2004 	ldr	r2, [lr], #4
         1a4b8:	e08af209 	add	pc, sl, r9, lsl #4
         1a4bc:	108ff20c 	addne	pc, pc, ip, lsl #4
         1a4c0:	e1a00000 	nop			(mov r0,r0)
         1a4c4:	e0049002 	and	r9, r4, r2
         1a4c8:	e004a007 	and	sl, r4, r7
         1a4cc:	e02bba99 	mla	fp, r9, sl, fp
         1a4d0:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a4d4:	e0049422 	and	r9, r4, r2, lsr #8
         1a4d8:	e004a427 	and	sl, r4, r7, lsr #8
         1a4dc:	e02bba99 	mla	fp, r9, sl, fp
         1a4e0:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a4e4:	e0049822 	and	r9, r4, r2, lsr #16
         1a4e8:	e004a827 	and	sl, r4, r7, lsr #16
         1a4ec:	e02bba99 	mla	fp, r9, sl, fp
         1a4f0:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a4f4:	e0049c22 	and	r9, r4, r2, lsr #24
         1a4f8:	e004ac27 	and	sl, r4, r7, lsr #24
         1a4fc:	e02bba99 	mla	fp, r9, sl, fp
         1a500:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a504:	e1a0a00e 	mov	sl, lr
         1a508:	e490e004 	ldr	lr, [r0], #4
         1a50c:	e1b0c94e 	movs	ip, lr, asr #18
         1a510:	aa000026 	bge	1a5b0 <BPNetEvaluate+0x350>
         1a514:	229aa04c 	addcss	sl, sl, #76	; 0x4c
         1a518:	e1b0e80e 	movs	lr, lr, lsl #16
         1a51c:	e043e82e 	sub	lr, r3, lr, lsr #16
         1a520:	e20e9003 	and	r9, lr, #3	; 0x3
         1a524:	e04cc009 	sub	ip, ip, r9
         1a528:	e3cee003 	bic	lr, lr, #3	; 0x3
         1a52c:	e49e2004 	ldr	r2, [lr], #4
         1a530:	e08af209 	add	pc, sl, r9, lsl #4
         1a534:	108ff20c 	addne	pc, pc, ip, lsl #4
         1a538:	e1a00000 	nop			(mov r0,r0)
         1a53c:	e0049002 	and	r9, r4, r2
         1a540:	e004a008 	and	sl, r4, r8
         1a544:	e02bba99 	mla	fp, r9, sl, fp
         1a548:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a54c:	e0049422 	and	r9, r4, r2, lsr #8
         1a550:	e004a428 	and	sl, r4, r8, lsr #8
         1a554:	e02bba99 	mla	fp, r9, sl, fp
         1a558:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a55c:	e0049822 	and	r9, r4, r2, lsr #16
         1a560:	e004a828 	and	sl, r4, r8, lsr #16
         1a564:	e02bba99 	mla	fp, r9, sl, fp
         1a568:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a56c:	e0049c22 	and	r9, r4, r2, lsr #24
         1a570:	e004ac28 	and	sl, r4, r8, lsr #24
         1a574:	e02bba99 	mla	fp, r9, sl, fp
         1a578:	e04bb389 	sub	fp, fp, r9, lsl #7
         1a57c:	e1a0a00e 	mov	sl, lr
         1a580:	e490e004 	ldr	lr, [r0], #4
         1a584:	e1b0c94e 	movs	ip, lr, asr #18
         1a588:	aa000008 	bge	1a5b0 <BPNetEvaluate+0x350>
         1a58c:	e1b0e80e 	movs	lr, lr, lsl #16
         1a590:	e043e82e 	sub	lr, r3, lr, lsr #16
         1a594:	28b101e0 	ldmcsia	r1!, {r5, r6, r7, r8}
         1a598:	224aa0e4 	subcs	sl, sl, #228	; 0xe4
         1a59c:	e20e9003 	and	r9, lr, #3	; 0x3
         1a5a0:	e04cc009 	sub	ip, ip, r9
         1a5a4:	e3cee003 	bic	lr, lr, #3	; 0x3
         1a5a8:	e49e2004 	ldr	r2, [lr], #4
         1a5ac:	e08af209 	add	pc, sl, r9, lsl #4
         1a5b0:	1a000007 	bne	1a5d4 <BPNetEvaluate+0x374>
         1a5b4:	e1b09fcb 	movs	r9, fp, asr #31
         1a5b8:	b1e0b00b 	mvnlt	fp, fp
         1a5bc:	e35b0c59 	cmp	fp, #22784	; 0x5900
         1a5c0:	a3a0b0ff 	movge	fp, #255	; 0xff
         1a5c4:	b59f2048 	ldrlt	r2, [pc, #48]	; 1a614 <BPNetEvaluate+0x3b4>
         1a5c8:	b7d2b32b 	ldrltb	fp, [r2, fp, lsr #6]
         1a5cc:	e02bbc29 	eor	fp, fp, r9, lsr #24
         1a5d0:	e1b0c94e 	movs	ip, lr, asr #18
         1a5d4:	e4c3b001 	strb	fp, [r3], #1
         1a5d8:	e1a0b80e 	mov	fp, lr, lsl #16
         1a5dc:	e1a0b44b 	mov	fp, fp, asr #8
         1a5e0:	28bd8ff0 	ldmcsia	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, pc}
         1a5e4:	e490e004 	ldr	lr, [r0], #4
         1a5e8:	e1b0c94e 	movs	ip, lr, asr #18
         1a5ec:	229aa04c 	addcss	sl, sl, #76	; 0x4c
         1a5f0:	e1b0e80e 	movs	lr, lr, lsl #16
         1a5f4:	e043e82e 	sub	lr, r3, lr, lsr #16
         1a5f8:	28b101e0 	ldmcsia	r1!, {r5, r6, r7, r8}
         1a5fc:	224aa0e4 	subcs	sl, sl, #228	; 0xe4
         1a600:	e20e9003 	and	r9, lr, #3	; 0x3
         1a604:	e04cc009 	sub	ip, ip, r9
         1a608:	e3cee003 	bic	lr, lr, #3	; 0x3
         1a60c:	e49e2004 	ldr	r2, [lr], #4
         1a610:	e08af209 	add	pc, sl, r9, lsl #4
         1a614:	0036500c 	eoreqs	r5, r6, ip
    */
}

/**
 * Symbol: BuildDictionaryFromHandle
 * Address: 0002d0b0
 */
void globals::BuildDictionaryFromHandle() {
    /*
         2d0b0:	e1a0c00d 	mov	ip, sp
         2d0b4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         2d0b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         2d0bc:	e1a04000 	mov	r4, r0
         2d0c0:	e3a00058 	mov	r0, #88	; 0x58
         2d0c4:	eb6ed418 	bl	1be212c <$NewHandle>
         2d0c8:	e1b05000 	movs	r5, r0
         2d0cc:	e3a00000 	mov	r0, #0	; 0x0
         2d0d0:	e59f60d8 	ldr	r6, [pc, #d8]	; 2d1b0 <BuildDictionaryFromHandle+0x100>
         2d0d4:	03e01001 	mvneq	r1, #1	; 0x1
         2d0d8:	05861000 	streq	r1, [r6]
         2d0dc:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2d0e0:	e5962004 	ldr	r2, [r6, #4]
         2d0e4:	e5951000 	ldr	r1, [r5]
         2d0e8:	e5812000 	str	r2, [r1]
         2d0ec:	e3a02064 	mov	r2, #100	; 0x64
         2d0f0:	e5951000 	ldr	r1, [r5]
         2d0f4:	e1a07000 	mov	r7, r0
         2d0f8:	e5a12018 	str	r2, [r1, #24]!
         2d0fc:	e5950000 	ldr	r0, [r5]
         2d100:	e5a07004 	str	r7, [r0, #4]!
         2d104:	e3a00001 	mov	r0, #1	; 0x1
         2d108:	e5951000 	ldr	r1, [r5]
         2d10c:	e5a1003c 	str	r0, [r1, #60]!
         2d110:	e5951000 	ldr	r1, [r5]
         2d114:	e5a17038 	str	r7, [r1, #56]!
         2d118:	e5951000 	ldr	r1, [r5]
         2d11c:	e5a15040 	str	r5, [r1, #64]!
         2d120:	e5951000 	ldr	r1, [r5]
         2d124:	e5a17044 	str	r7, [r1, #68]!
         2d128:	e5951000 	ldr	r1, [r5]
         2d12c:	e5a1004c 	str	r0, [r1, #76]!
         2d130:	e5951000 	ldr	r1, [r5]
         2d134:	e5a14008 	str	r4, [r1, #8]!
         2d138:	e5951000 	ldr	r1, [r5]
         2d13c:	e5940000 	ldr	r0, [r4]
         2d140:	e5a1000c 	str	r0, [r1, #12]!
         2d144:	e1a00004 	mov	r0, r4
         2d148:	eb6ecfe6 	bl	1be10e8 <$GetHandleSize>
         2d14c:	e5951000 	ldr	r1, [r5]
         2d150:	e5a10014 	str	r0, [r1, #20]!
         2d154:	e1a03000 	mov	r3, r0
         2d158:	e3500002 	cmp	r0, #2	; 0x2
         2d15c:	3a00000d 	bcc	2d198 <BuildDictionaryFromHandle+0xe8>
         2d160:	e5952000 	ldr	r2, [r5]
         2d164:	e592100c 	ldr	r1, [r2, #12]
         2d168:	e5d10000 	ldrb	r0, [r1]
         2d16c:	e3300061 	teq	r0, #97	; 0x61
         2d170:	1a000008 	bne	2d198 <BuildDictionaryFromHandle+0xe8>
         2d174:	e5d10001 	ldrb	r0, [r1, #1]
         2d178:	e2000007 	and	r0, r0, #7	; 0x7
         2d17c:	e3300007 	teq	r0, #7	; 0x7
         2d180:	13300006 	teqne	r0, #6	; 0x6
         2d184:	13300005 	teqne	r0, #5	; 0x5
         2d188:	13300002 	teqne	r0, #2	; 0x2
         2d18c:	13300003 	teqne	r0, #3	; 0x3
         2d190:	13300001 	teqne	r0, #1	; 0x1
         2d194:	0a000006 	beq	2d1b4 <BuildDictionaryFromHandle+0x104>
         2d198:	e1a00005 	mov	r0, r5
         2d19c:	eb6ecfc3 	bl	1be10b0 <$DisposHandle>
         2d1a0:	e3e00002 	mvn	r0, #2	; 0x2
         2d1a4:	e5860000 	str	r0, [r6]
         2d1a8:	e1a00007 	mov	r0, r7
         2d1ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2d1b0:	0c100810 	ldceq	8, cr0, [r0], -#64
         2d1b4:	e0811003 	add	r1, r1, r3
         2d1b8:	e5a21010 	str	r1, [r2, #16]!
         2d1bc:	e5951000 	ldr	r1, [r5]
         2d1c0:	e591200c 	ldr	r2, [r1, #12]
         2d1c4:	e5d22001 	ldrb	r2, [r2, #1]
         2d1c8:	e1a02222 	mov	r2, r2, lsr #4
         2d1cc:	e5a12034 	str	r2, [r1, #52]!
         2d1d0:	e5951000 	ldr	r1, [r5]
         2d1d4:	e5a17024 	str	r7, [r1, #36]!
         2d1d8:	e5951000 	ldr	r1, [r5]
         2d1dc:	e5a17048 	str	r7, [r1, #72]!
         2d1e0:	e5962004 	ldr	r2, [r6, #4]
         2d1e4:	e5951000 	ldr	r1, [r5]
         2d1e8:	e2000007 	and	r0, r0, #7	; 0x7
         2d1ec:	e3300005 	teq	r0, #5	; 0x5
         2d1f0:	e5812000 	str	r2, [r1]
         2d1f4:	13300002 	teqne	r0, #2	; 0x2
         2d1f8:	059f101c 	ldreq	r1, [pc, #1c]	; 2d21c <BuildDictionaryFromHandle+0x16c>
         2d1fc:	05950000 	ldreq	r0, [r5]
         2d200:	05a0101c 	streq	r1, [r0, #28]!
         2d204:	159f0014 	ldrne	r0, [pc, #14]	; 2d220 <BuildDictionaryFromHandle+0x170>
         2d208:	15951000 	ldrne	r1, [r5]
         2d20c:	15a1001c 	strne	r0, [r1, #28]!
         2d210:	e1a00005 	mov	r0, r5
         2d214:	e5867000 	str	r7, [r6]
         2d218:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         2d21c:	0c105bf4 	ldceq	11, cr5, [r0], -#976
         2d220:	0c105af4 	ldceq	10, cr5, [r0], -#976
    */
}

/**
 * Symbol: BuildDictionaryFromPtr
 * Address: 0002d624
 */
void globals::BuildDictionaryFromPtr() {
    /*
         2d624:	e1a0c00d 	mov	ip, sp
         2d628:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         2d62c:	e24cb004 	sub	fp, ip, #4	; 0x4
         2d630:	eb6ed2bc 	bl	1be2128 <$NewFakeHandle>
         2d634:	e3300000 	teq	r0, #0	; 0x0
         2d638:	191b6800 	ldmnedb	fp, {fp, sp, lr}
         2d63c:	1a674ea8 	bne	1a010e4 <$BuildDictionaryFromHandle>
         2d640:	e3e00001 	mvn	r0, #1	; 0x1
         2d644:	e59f1008 	ldr	r1, [pc, #8]	; 2d654 <BuildDictionaryFromPtr+0x30>
         2d648:	e5810000 	str	r0, [r1]
         2d64c:	e3a00000 	mov	r0, #0	; 0x0
         2d650:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         2d654:	0c100810 	ldceq	8, cr0, [r0], -#64
    */
}

/**
 * Symbol: BuildRecConfig(TView *, unsigned long)
 * Address: 00034b70
 */
BuildRecConfig(TView *, unsigned long) {
    /*
         34b70:	e1a0c00d 	mov	ip, sp
         34b74:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         34b78:	e24cb004 	sub	fp, ip, #4	; 0x4
         34b7c:	e1a04000 	mov	r4, r0
         34b80:	e1a05001 	mov	r5, r1
         34b84:	e24dd004 	sub	sp, sp, #4	; 0x4
         34b88:	e3a00002 	mov	r0, #2	; 0x2
         34b8c:	eb6e356e 	bl	1bc214c <$AllocateRefHandle(long)>
         34b90:	e58d0000 	str	r0, [sp]
         34b94:	e5900000 	ldr	r0, [r0]
         34b98:	e3300002 	teq	r0, #2	; 0x2
         34b9c:	1a000037 	bne	34c80 <BuildRecConfig(TView *, unsigned long)+0x110>
         34ba0:	e3c504fe 	bic	r0, r5, #-33554432	; 0xfe000000
         34ba4:	e3c00c01 	bic	r0, r0, #256	; 0x100
         34ba8:	e3c000ff 	bic	r0, r0, #255	; 0xff
         34bac:	e240c77f 	sub	ip, r0, #33292288	; 0x1fc0000
         34bb0:	e24ccbff 	sub	ip, ip, #261120	; 0x3fc00
         34bb4:	e33c0c02 	teq	ip, #512	; 0x200
         34bb8:	1a000019 	bne	34c24 <BuildRecConfig(TView *, unsigned long)+0xb4>
         34bbc:	e59f0054 	ldr	r0, [pc, #54]	; 34c18 <BuildRecConfig(TView *, unsigned long)+0xa8>
         34bc0:	e5900000 	ldr	r0, [r0]
         34bc4:	eb6e3560 	bl	1bc214c <$AllocateRefHandle(long)>
         34bc8:	e1a06000 	mov	r6, r0
         34bcc:	e59f0048 	ldr	r0, [pc, #48]	; 34c1c <BuildRecConfig(TView *, unsigned long)+0xac>
         34bd0:	e5900000 	ldr	r0, [r0]
         34bd4:	e5901000 	ldr	r1, [r0]
         34bd8:	e5960000 	ldr	r0, [r6]
         34bdc:	eb6e3d9f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         34be0:	eb6e3559 	bl	1bc214c <$AllocateRefHandle(long)>
         34be4:	e1a07000 	mov	r7, r0
         34be8:	e1a00006 	mov	r0, r6
         34bec:	eb6e3972 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34bf0:	e59f0028 	ldr	r0, [pc, #28]	; 34c20 <BuildRecConfig(TView *, unsigned long)+0xb0>
         34bf4:	e5900000 	ldr	r0, [r0]
         34bf8:	e5901000 	ldr	r1, [r0]
         34bfc:	e5970000 	ldr	r0, [r7]
         34c00:	eb6e3d96 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         34c04:	e59d1000 	ldr	r1, [sp]
         34c08:	e5810000 	str	r0, [r1]
         34c0c:	e1a00007 	mov	r0, r7
         34c10:	eb6e3969 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34c14:	ea00000a 	b	34c44 <BuildRecConfig(TView *, unsigned long)+0xd4>
         34c18:	0c10180c 	ldceq	8, cr1, [r0], -#48
         34c1c:	00684e28 	rsbeq	r4, r8, r8, lsr #28
         34c20:	00684ab8 	streqh	r4, [r8], -#168
         34c24:	e3340000 	teq	r4, #0	; 0x0
         34c28:	0a000009 	beq	34c54 <BuildRecConfig(TView *, unsigned long)+0xe4>
         34c2c:	e2840024 	add	r0, r4, #36	; 0x24
         34c30:	e59f102c 	ldr	r1, [pc, #2c]	; 34c64 <BuildRecConfig(TView *, unsigned long)+0xf4>
         34c34:	e3a02000 	mov	r2, #0	; 0x0
         34c38:	eb6e3d8a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         34c3c:	e59d1000 	ldr	r1, [sp]
         34c40:	e5810000 	str	r0, [r1]
         34c44:	e59d0000 	ldr	r0, [sp]
         34c48:	e5900000 	ldr	r0, [r0]
         34c4c:	e3300002 	teq	r0, #2	; 0x2
         34c50:	1a000004 	bne	34c68 <BuildRecConfig(TView *, unsigned long)+0xf8>
         34c54:	e1a01005 	mov	r1, r5
         34c58:	e1a00004 	mov	r0, r4
         34c5c:	eb69d20e 	bl	1aa949c <$BuildRCView(TView *, unsigned long)>
         34c60:	ea000004 	b	34c78 <BuildRecConfig(TView *, unsigned long)+0x108>
         34c64:	00684138 	rsbeq	r4, r8, r8, lsr r1
         34c68:	e1a02005 	mov	r2, r5
         34c6c:	e1a01004 	mov	r1, r4
         34c70:	e1a0000d 	mov	r0, sp
         34c74:	eb69d205 	bl	1aa9490 <$BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)>
         34c78:	e59d1000 	ldr	r1, [sp]
         34c7c:	e5810000 	str	r0, [r1]
         34c80:	e59d0000 	ldr	r0, [sp]
         34c84:	e5904000 	ldr	r4, [r0]
         34c88:	eb6e394b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34c8c:	e1a00004 	mov	r0, r4
         34c90:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: BuildRecConfigForDeferred(TView *, unsigned long)
 * Address: 00034cec
 */
BuildRecConfigForDeferred(TView *, unsigned long) {
    /*
         34cec:	e1a0c00d 	mov	ip, sp
         34cf0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         34cf4:	e24cb004 	sub	fp, ip, #4	; 0x4
         34cf8:	e1a05000 	mov	r5, r0
         34cfc:	e1a04001 	mov	r4, r1
         34d00:	e24dd004 	sub	sp, sp, #4	; 0x4
         34d04:	e3a06002 	mov	r6, #2	; 0x2
         34d08:	e1a00006 	mov	r0, r6
         34d0c:	eb6e350e 	bl	1bc214c <$AllocateRefHandle(long)>
         34d10:	e244c77f 	sub	ip, r4, #33292288	; 0x1fc0000
         34d14:	e24ccbff 	sub	ip, ip, #261120	; 0x3fc00
         34d18:	e33c0c02 	teq	ip, #512	; 0x200
         34d1c:	e58d0000 	str	r0, [sp]
         34d20:	0a000056 	beq	34e80 <BuildRecConfigForDeferred(TView *, unsigned long)+0x194>
         34d24:	e3350000 	teq	r5, #0	; 0x0
         34d28:	0a000005 	beq	34d44 <BuildRecConfigForDeferred(TView *, unsigned long)+0x58>
         34d2c:	e2850024 	add	r0, r5, #36	; 0x24
         34d30:	e59f1048 	ldr	r1, [pc, #48]	; 34d80 <BuildRecConfigForDeferred(TView *, unsigned long)+0x94>
         34d34:	e3a02000 	mov	r2, #0	; 0x0
         34d38:	eb6e3d4a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         34d3c:	e59d1000 	ldr	r1, [sp]
         34d40:	e5810000 	str	r0, [r1]
         34d44:	e24dd018 	sub	sp, sp, #24	; 0x18
         34d48:	e59d0018 	ldr	r0, [sp, #24]
         34d4c:	e5900000 	ldr	r0, [r0]
         34d50:	e3300002 	teq	r0, #2	; 0x2
         34d54:	0a000005 	beq	34d70 <BuildRecConfigForDeferred(TView *, unsigned long)+0x84>
         34d58:	e28d2018 	add	r2, sp, #24	; 0x18
         34d5c:	e1a01004 	mov	r1, r4
         34d60:	e1a00005 	mov	r0, r5
         34d64:	eb6a49a3 	bl	1ac73f8 <$InkTextEnabled(TView *, unsigned long, RefVar const &)>
         34d68:	e3300000 	teq	r0, #0	; 0x0
         34d6c:	0a000004 	beq	34d84 <BuildRecConfigForDeferred(TView *, unsigned long)+0x98>
         34d70:	e1a01004 	mov	r1, r4
         34d74:	e1a00005 	mov	r0, r5
         34d78:	eb69d1c7 	bl	1aa949c <$BuildRCView(TView *, unsigned long)>
         34d7c:	ea000003 	b	34d90 <BuildRecConfigForDeferred(TView *, unsigned long)+0xa4>
         34d80:	00684138 	rsbeq	r4, r8, r8, lsr r1
         34d84:	e28d1018 	add	r1, sp, #24	; 0x18
         34d88:	e1a00005 	mov	r0, r5
         34d8c:	eb6a0b84 	bl	1ab7ba4 <$PrepRecConfig(TView *, RefVar const &)>
         34d90:	e59d1018 	ldr	r1, [sp, #24]
         34d94:	e3c44801 	bic	r4, r4, #65536	; 0x10000
         34d98:	e3c44c0e 	bic	r4, r4, #3584	; 0xe00
         34d9c:	e5810000 	str	r0, [r1]
         34da0:	e1a00104 	mov	r0, r4, lsl #2
         34da4:	eb6e34e8 	bl	1bc214c <$AllocateRefHandle(long)>
         34da8:	e58d0000 	str	r0, [sp]
         34dac:	e1a0200d 	mov	r2, sp
         34db0:	e59f10dc 	ldr	r1, [pc, #dc]	; 34e94 <BuildRecConfigForDeferred(TView *, unsigned long)+0x1a8>
         34db4:	e28d0018 	add	r0, sp, #24	; 0x18
         34db8:	eb6e456a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         34dbc:	e59d0000 	ldr	r0, [sp]
         34dc0:	eb6e38fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34dc4:	e3a0401a 	mov	r4, #26	; 0x1a
         34dc8:	e1a00004 	mov	r0, r4
         34dcc:	eb6e34de 	bl	1bc214c <$AllocateRefHandle(long)>
         34dd0:	e58d0004 	str	r0, [sp, #4]
         34dd4:	e28d2004 	add	r2, sp, #4	; 0x4
         34dd8:	e59f10b8 	ldr	r1, [pc, #b8]	; 34e98 <BuildRecConfigForDeferred(TView *, unsigned long)+0x1ac>
         34ddc:	e28d0018 	add	r0, sp, #24	; 0x18
         34de0:	eb6e4560 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         34de4:	e59d0004 	ldr	r0, [sp, #4]
         34de8:	eb6e38f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34dec:	e1a00004 	mov	r0, r4
         34df0:	eb6e34d5 	bl	1bc214c <$AllocateRefHandle(long)>
         34df4:	e58d0008 	str	r0, [sp, #8]
         34df8:	e28d2008 	add	r2, sp, #8	; 0x8
         34dfc:	e59f1098 	ldr	r1, [pc, #98]	; 34e9c <BuildRecConfigForDeferred(TView *, unsigned long)+0x1b0>
         34e00:	e28d0018 	add	r0, sp, #24	; 0x18
         34e04:	eb6e4557 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         34e08:	e59d0008 	ldr	r0, [sp, #8]
         34e0c:	eb6e38ea 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34e10:	e1a00006 	mov	r0, r6
         34e14:	eb6e34cc 	bl	1bc214c <$AllocateRefHandle(long)>
         34e18:	e58d000c 	str	r0, [sp, #12]
         34e1c:	e28d200c 	add	r2, sp, #12	; 0xc
         34e20:	e59f1078 	ldr	r1, [pc, #78]	; 34ea0 <BuildRecConfigForDeferred(TView *, unsigned long)+0x1b4>
         34e24:	e28d0018 	add	r0, sp, #24	; 0x18
         34e28:	eb6e454e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         34e2c:	e59d000c 	ldr	r0, [sp, #12]
         34e30:	eb6e38e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34e34:	e3a00008 	mov	r0, #8	; 0x8
         34e38:	eb6e34c3 	bl	1bc214c <$AllocateRefHandle(long)>
         34e3c:	e58d0010 	str	r0, [sp, #16]
         34e40:	e28d2010 	add	r2, sp, #16	; 0x10
         34e44:	e59f1058 	ldr	r1, [pc, #58]	; 34ea4 <BuildRecConfigForDeferred(TView *, unsigned long)+0x1b8>
         34e48:	e28d0018 	add	r0, sp, #24	; 0x18
         34e4c:	eb6e4545 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         34e50:	e59d0010 	ldr	r0, [sp, #16]
         34e54:	eb6e38d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34e58:	e1a00006 	mov	r0, r6
         34e5c:	eb6e34ba 	bl	1bc214c <$AllocateRefHandle(long)>
         34e60:	e58d0014 	str	r0, [sp, #20]
         34e64:	e28d2014 	add	r2, sp, #20	; 0x14
         34e68:	e59f1038 	ldr	r1, [pc, #38]	; 34ea8 <BuildRecConfigForDeferred(TView *, unsigned long)+0x1bc>
         34e6c:	e28d0018 	add	r0, sp, #24	; 0x18
         34e70:	eb6e453c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         34e74:	e59d0014 	ldr	r0, [sp, #20]
         34e78:	eb6e38cf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34e7c:	e28dd018 	add	sp, sp, #24	; 0x18
         34e80:	e59d0000 	ldr	r0, [sp]
         34e84:	e5904000 	ldr	r4, [r0]
         34e88:	eb6e38cb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34e8c:	e1a00004 	mov	r0, r4
         34e90:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         34e94:	00683270 	rsbeq	r3, r8, r0, ror r2
         34e98:	00681e48 	rsbeq	r1, r8, r8, asr #28
         34e9c:	00682a68 	rsbeq	r2, r8, r8, ror #20
         34ea0:	00682a38 	rsbeq	r2, r8, r8, lsr sl
         34ea4:	006847c8 	rsbeq	r4, r8, r8, asr #15
         34ea8:	00683530 	rsbeq	r3, r8, r0, lsr r5
    */
}

/**
 * Symbol: BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)
 * Address: 00034eac
 */
BuildInkOrTextConfig(RefVar const &, TView *, unsigned long) {
    /*
         34eac:	e1a0c00d 	mov	ip, sp
         34eb0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         34eb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         34eb8:	e1a04001 	mov	r4, r1
         34ebc:	e1a05002 	mov	r5, r2
         34ec0:	e24dd004 	sub	sp, sp, #4	; 0x4
         34ec4:	e5900000 	ldr	r0, [r0]
         34ec8:	e5900000 	ldr	r0, [r0]
         34ecc:	eb6e349e 	bl	1bc214c <$AllocateRefHandle(long)>
         34ed0:	e58d0000 	str	r0, [sp]
         34ed4:	e1a0200d 	mov	r2, sp
         34ed8:	e1a01005 	mov	r1, r5
         34edc:	e1a00004 	mov	r0, r4
         34ee0:	eb6a4944 	bl	1ac73f8 <$InkTextEnabled(TView *, unsigned long, RefVar const &)>
         34ee4:	e3300000 	teq	r0, #0	; 0x0
         34ee8:	0a000036 	beq	34fc8 <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0x11c>
         34eec:	e1a0100d 	mov	r1, sp
         34ef0:	e1a00004 	mov	r0, r4
         34ef4:	eb6a0b2a 	bl	1ab7ba4 <$PrepRecConfig(TView *, RefVar const &)>
         34ef8:	e59d1000 	ldr	r1, [sp]
         34efc:	e5810000 	str	r0, [r1]
         34f00:	e59f10b0 	ldr	r1, [pc, #b0]	; 34fb8 <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0x10c>
         34f04:	e1a0000d 	mov	r0, sp
         34f08:	e3a03000 	mov	r3, #0	; 0x0
         34f0c:	e3a02000 	mov	r2, #0	; 0x0
         34f10:	eb6e3cd7 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         34f14:	e3300002 	teq	r0, #2	; 0x2
         34f18:	0a00002a 	beq	34fc8 <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0x11c>
         34f1c:	e59f1098 	ldr	r1, [pc, #98]	; 34fbc <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0x110>
         34f20:	e1a0000d 	mov	r0, sp
         34f24:	e3a03000 	mov	r3, #0	; 0x0
         34f28:	e3a02000 	mov	r2, #0	; 0x0
         34f2c:	eb6e3cd0 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         34f30:	e3300002 	teq	r0, #2	; 0x2
         34f34:	0a000023 	beq	34fc8 <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0x11c>
         34f38:	e24dd004 	sub	sp, sp, #4	; 0x4
         34f3c:	e1a00105 	mov	r0, r5, lsl #2
         34f40:	eb6e3481 	bl	1bc214c <$AllocateRefHandle(long)>
         34f44:	e58d0000 	str	r0, [sp]
         34f48:	e1a0200d 	mov	r2, sp
         34f4c:	e59f106c 	ldr	r1, [pc, #6c]	; 34fc0 <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0x114>
         34f50:	e28d0004 	add	r0, sp, #4	; 0x4
         34f54:	eb6e4503 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         34f58:	e59d0000 	ldr	r0, [sp]
         34f5c:	eb6e3896 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34f60:	e1a00004 	mov	r0, r4
         34f64:	eb696602 	bl	1a8e774 <$CountCustomDictionaries(TView *)>
         34f68:	e3300000 	teq	r0, #0	; 0x0
         34f6c:	0a00000f 	beq	34fb0 <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0x104>
         34f70:	e24dd004 	sub	sp, sp, #4	; 0x4
         34f74:	e59f1048 	ldr	r1, [pc, #48]	; 34fc4 <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0x118>
         34f78:	e1a00004 	mov	r0, r4
         34f7c:	eb6e5575 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
         34f80:	eb6e3471 	bl	1bc214c <$AllocateRefHandle(long)>
         34f84:	e58d0000 	str	r0, [sp]
         34f88:	e5900000 	ldr	r0, [r0]
         34f8c:	e3300002 	teq	r0, #2	; 0x2
         34f90:	0a000003 	beq	34fa4 <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0xf8>
         34f94:	e1a0200d 	mov	r2, sp
         34f98:	e59f1024 	ldr	r1, [pc, #24]	; 34fc4 <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0x118>
         34f9c:	e28d0008 	add	r0, sp, #8	; 0x8
         34fa0:	eb6e44f0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         34fa4:	e59d0000 	ldr	r0, [sp]
         34fa8:	eb6e3883 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34fac:	e28dd004 	add	sp, sp, #4	; 0x4
         34fb0:	e28dd004 	add	sp, sp, #4	; 0x4
         34fb4:	ea000008 	b	34fdc <BuildInkOrTextConfig(RefVar const &, TView *, unsigned long)+0x130>
         34fb8:	00681e48 	rsbeq	r1, r8, r8, asr #28
         34fbc:	00682a68 	rsbeq	r2, r8, r8, ror #20
         34fc0:	00683270 	rsbeq	r3, r8, r0, ror r2
         34fc4:	00682960 	rsbeq	r2, r8, r0, ror #18
         34fc8:	e1a0100d 	mov	r1, sp
         34fcc:	e1a00004 	mov	r0, r4
         34fd0:	eb69d130 	bl	1aa9498 <$BuildRCProto(TView *, RefVar const &)>
         34fd4:	e59d1000 	ldr	r1, [sp]
         34fd8:	e5810000 	str	r0, [r1]
         34fdc:	e59d0000 	ldr	r0, [sp]
         34fe0:	e5904000 	ldr	r4, [r0]
         34fe4:	eb6e3874 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34fe8:	e1a00004 	mov	r0, r4
         34fec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: BuildRCView(TView *, unsigned long)
 * Address: 00034ff0
 */
BuildRCView(TView *, unsigned long) {
    /*
         34ff0:	e1a0c00d 	mov	ip, sp
         34ff4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         34ff8:	e24cb004 	sub	fp, ip, #4	; 0x4
         34ffc:	e1a04000 	mov	r4, r0
         35000:	e1a05001 	mov	r5, r1
         35004:	e24dd004 	sub	sp, sp, #4	; 0x4
         35008:	e3a07002 	mov	r7, #2	; 0x2
         3500c:	e1a00007 	mov	r0, r7
         35010:	eb6e344d 	bl	1bc214c <$AllocateRefHandle(long)>
         35014:	e58d0000 	str	r0, [sp]
         35018:	e59f0144 	ldr	r0, [pc, #144]	; 35164 <BuildRCView(TView *, unsigned long)+0x174>
         3501c:	e5900000 	ldr	r0, [r0]
         35020:	eb6e3449 	bl	1bc214c <$AllocateRefHandle(long)>
         35024:	e1a06000 	mov	r6, r0
         35028:	e59f0138 	ldr	r0, [pc, #138]	; 35168 <BuildRCView(TView *, unsigned long)+0x178>
         3502c:	e5900000 	ldr	r0, [r0]
         35030:	e5901000 	ldr	r1, [r0]
         35034:	e5960000 	ldr	r0, [r6]
         35038:	eb6e3c88 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         3503c:	eb6e3442 	bl	1bc214c <$AllocateRefHandle(long)>
         35040:	e1a08000 	mov	r8, r0
         35044:	e1a00006 	mov	r0, r6
         35048:	eb6e385b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3504c:	e3c504fe 	bic	r0, r5, #-33554432	; 0xfe000000
         35050:	e3c00c01 	bic	r0, r0, #256	; 0x100
         35054:	e3c000ff 	bic	r0, r0, #255	; 0xff
         35058:	e240c77f 	sub	ip, r0, #33292288	; 0x1fc0000
         3505c:	e24ccbff 	sub	ip, ip, #261120	; 0x3fc00
         35060:	e33c0c02 	teq	ip, #512	; 0x200
         35064:	13a00000 	movne	r0, #0	; 0x0
         35068:	03a00001 	moveq	r0, #1	; 0x1
         3506c:	e21060ff 	ands	r6, r0, #255	; 0xff
         35070:	059f00f4 	ldreq	r0, [pc, #f4]	; 3516c <BuildRCView(TView *, unsigned long)+0x17c>
         35074:	159f00f4 	ldrne	r0, [pc, #f4]	; 35170 <BuildRCView(TView *, unsigned long)+0x180>
         35078:	e5900000 	ldr	r0, [r0]
         3507c:	e5900000 	ldr	r0, [r0]
         35080:	e59d1000 	ldr	r1, [sp]
         35084:	e5810000 	str	r0, [r1]
         35088:	e1a0100d 	mov	r1, sp
         3508c:	e1a00004 	mov	r0, r4
         35090:	eb6a0ac3 	bl	1ab7ba4 <$PrepRecConfig(TView *, RefVar const &)>
         35094:	e41d1004 	ldr	r1, [sp], -#4
         35098:	e3360000 	teq	r6, #0	; 0x0
         3509c:	e5810000 	str	r0, [r1]
         350a0:	0a000004 	beq	350b8 <BuildRCView(TView *, unsigned long)+0xc8>
         350a4:	e28d0004 	add	r0, sp, #4	; 0x4
         350a8:	e3a02001 	mov	r2, #1	; 0x1
         350ac:	e3a01c0a 	mov	r1, #2560	; 0xa00
         350b0:	eb69d0f7 	bl	1aa9494 <$BuildInputMask(RefVar const &, unsigned long, unsigned char)>
         350b4:	e1a05000 	mov	r5, r0
         350b8:	e1a00105 	mov	r0, r5, lsl #2
         350bc:	eb6e3422 	bl	1bc214c <$AllocateRefHandle(long)>
         350c0:	e58d0000 	str	r0, [sp]
         350c4:	e1a0200d 	mov	r2, sp
         350c8:	e59f10a4 	ldr	r1, [pc, #a4]	; 35174 <BuildRCView(TView *, unsigned long)+0x184>
         350cc:	e28d0004 	add	r0, sp, #4	; 0x4
         350d0:	eb6e44a4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         350d4:	e59d0000 	ldr	r0, [sp]
         350d8:	eb6e3837 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         350dc:	e24dd004 	sub	sp, sp, #4	; 0x4
         350e0:	e1a00007 	mov	r0, r7
         350e4:	eb6e3418 	bl	1bc214c <$AllocateRefHandle(long)>
         350e8:	e58d0000 	str	r0, [sp]
         350ec:	e59f5084 	ldr	r5, [pc, #84]	; 35178 <BuildRCView(TView *, unsigned long)+0x188>
         350f0:	e3340000 	teq	r4, #0	; 0x0
         350f4:	0a000008 	beq	3511c <BuildRCView(TView *, unsigned long)+0x12c>
         350f8:	e1a00004 	mov	r0, r4
         350fc:	eb69659c 	bl	1a8e774 <$CountCustomDictionaries(TView *)>
         35100:	e3300000 	teq	r0, #0	; 0x0
         35104:	0a000004 	beq	3511c <BuildRCView(TView *, unsigned long)+0x12c>
         35108:	e1a01005 	mov	r1, r5
         3510c:	e1a00004 	mov	r0, r4
         35110:	eb6e5510 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
         35114:	e59d1000 	ldr	r1, [sp]
         35118:	e5810000 	str	r0, [r1]
         3511c:	e59d0000 	ldr	r0, [sp]
         35120:	e5900000 	ldr	r0, [r0]
         35124:	e3300002 	teq	r0, #2	; 0x2
         35128:	0a000003 	beq	3513c <BuildRCView(TView *, unsigned long)+0x14c>
         3512c:	e1a0200d 	mov	r2, sp
         35130:	e1a01005 	mov	r1, r5
         35134:	e28d0008 	add	r0, sp, #8	; 0x8
         35138:	eb6e448a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         3513c:	e59d0008 	ldr	r0, [sp, #8]
         35140:	e5904000 	ldr	r4, [r0]
         35144:	e59d0000 	ldr	r0, [sp]
         35148:	eb6e381b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3514c:	e1a00008 	mov	r0, r8
         35150:	eb6e3819 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         35154:	e59d0008 	ldr	r0, [sp, #8]
         35158:	eb6e3817 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3515c:	e1a00004 	mov	r0, r4
         35160:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         35164:	0c10180c 	ldceq	8, cr1, [r0], -#48
         35168:	00684e28 	rsbeq	r4, r8, r8, lsr #28
         3516c:	00680cf0 	streqd	r0, [r8], -#192
         35170:	0067fd60 	rsbeq	pc, r7, r0, ror #26
         35174:	00683270 	rsbeq	r3, r8, r0, ror r2
         35178:	00682960 	rsbeq	r2, r8, r0, ror #18
    */
}

/**
 * Symbol: BuildRCProto(TView *, RefVar const &)
 * Address: 0003517c
 */
BuildRCProto(TView *, RefVar const &) {
    /*
         3517c:	e1a0c00d 	mov	ip, sp
         35180:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         35184:	e24cb004 	sub	fp, ip, #4	; 0x4
         35188:	e1a04000 	mov	r4, r0
         3518c:	e1a05001 	mov	r5, r1
         35190:	e24dd008 	sub	sp, sp, #8	; 0x8
         35194:	e3a00002 	mov	r0, #2	; 0x2
         35198:	eb6e33eb 	bl	1bc214c <$AllocateRefHandle(long)>
         3519c:	e1a06000 	mov	r6, r0
         351a0:	e1a01005 	mov	r1, r5
         351a4:	e1a00004 	mov	r0, r4
         351a8:	eb6a0a7d 	bl	1ab7ba4 <$PrepRecConfig(TView *, RefVar const &)>
         351ac:	eb6e33e6 	bl	1bc214c <$AllocateRefHandle(long)>
         351b0:	e58d0004 	str	r0, [sp, #4]
         351b4:	e59f10d0 	ldr	r1, [pc, #d0]	; 3528c <BuildRCProto(TView *, RefVar const &)+0x110>
         351b8:	e1a07001 	mov	r7, r1
         351bc:	e28d0004 	add	r0, sp, #4	; 0x4
         351c0:	e3a02000 	mov	r2, #0	; 0x0
         351c4:	eb6e3c27 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         351c8:	eb6e33df 	bl	1bc214c <$AllocateRefHandle(long)>
         351cc:	e58d0000 	str	r0, [sp]
         351d0:	e5900000 	ldr	r0, [r0]
         351d4:	e3300002 	teq	r0, #2	; 0x2
         351d8:	0a000005 	beq	351f4 <BuildRCProto(TView *, RefVar const &)+0x78>
         351dc:	e59f10ac 	ldr	r1, [pc, #ac]	; 35290 <BuildRCProto(TView *, RefVar const &)+0x114>
         351e0:	e28d0004 	add	r0, sp, #4	; 0x4
         351e4:	e3a02000 	mov	r2, #0	; 0x0
         351e8:	eb6e3c1e 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         351ec:	e3300002 	teq	r0, #2	; 0x2
         351f0:	0a000017 	beq	35254 <BuildRCProto(TView *, RefVar const &)+0xd8>
         351f4:	e3a05c0a 	mov	r5, #2560	; 0xa00
         351f8:	e59f1094 	ldr	r1, [pc, #94]	; 35294 <BuildRCProto(TView *, RefVar const &)+0x118>
         351fc:	e28d0004 	add	r0, sp, #4	; 0x4
         35200:	e3a02000 	mov	r2, #0	; 0x0
         35204:	eb6e3c17 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         35208:	eb6e33cf 	bl	1bc214c <$AllocateRefHandle(long)>
         3520c:	e1a04000 	mov	r4, r0
         35210:	e5900000 	ldr	r0, [r0]
         35214:	e3300002 	teq	r0, #2	; 0x2
         35218:	0a000004 	beq	35230 <BuildRCProto(TView *, RefVar const &)+0xb4>
         3521c:	e3100003 	tst	r0, #3	; 0x3
         35220:	01a00140 	moveq	r0, r0, asr #2
         35224:	0a000000 	beq	3522c <BuildRCProto(TView *, RefVar const &)+0xb0>
         35228:	eb6e33bb 	bl	1bc211c <$_RINTError(long)>
         3522c:	e1a05000 	mov	r5, r0
         35230:	e1a01005 	mov	r1, r5
         35234:	e28d0004 	add	r0, sp, #4	; 0x4
         35238:	e3a02000 	mov	r2, #0	; 0x0
         3523c:	eb69d094 	bl	1aa9494 <$BuildInputMask(RefVar const &, unsigned long, unsigned char)>
         35240:	e1a00100 	mov	r0, r0, lsl #2
         35244:	e59d1000 	ldr	r1, [sp]
         35248:	e5810000 	str	r0, [r1]
         3524c:	e1a00004 	mov	r0, r4
         35250:	eb6e37d9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         35254:	e1a0200d 	mov	r2, sp
         35258:	e1a01007 	mov	r1, r7
         3525c:	e28d0004 	add	r0, sp, #4	; 0x4
         35260:	eb6e4440 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         35264:	e59d0004 	ldr	r0, [sp, #4]
         35268:	e5904000 	ldr	r4, [r0]
         3526c:	e59d0000 	ldr	r0, [sp]
         35270:	eb6e37d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         35274:	e59d0004 	ldr	r0, [sp, #4]
         35278:	eb6e37cf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3527c:	e1a00006 	mov	r0, r6
         35280:	eb6e37cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         35284:	e1a00004 	mov	r0, r4
         35288:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         3528c:	00683270 	rsbeq	r3, r8, r0, ror r2
         35290:	00682210 	rsbeq	r2, r8, r0, lsl r2
         35294:	00681fe0 	rsbeq	r1, r8, r0, ror #31
    */
}

/**
 * Symbol: BulkUnitHandler(TUnit *, unsigned long)
 * Address: 00036398
 */
BulkUnitHandler(TUnit *, unsigned long) {
    /*
         36398:	e1a0c00d 	mov	ip, sp
         3639c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         363a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         363a4:	e1a04000 	mov	r4, r0
         363a8:	e24dd004 	sub	sp, sp, #4	; 0x4
         363ac:	e5910000 	ldr	r0, [r1]
         363b0:	e5900000 	ldr	r0, [r0]
         363b4:	eb6e2f64 	bl	1bc214c <$AllocateRefHandle(long)>
         363b8:	e58d0000 	str	r0, [sp]
         363bc:	e5940008 	ldr	r0, [r4, #8]
         363c0:	e59f1058 	ldr	r1, [pc, #58]	; 36420 <BulkUnitHandler(TUnit *, unsigned long)+0x88>
         363c4:	e5911000 	ldr	r1, [r1]
         363c8:	e3a05000 	mov	r5, #0	; 0x0
         363cc:	e1300001 	teq	r0, r1
         363d0:	1a000013 	bne	36424 <BulkUnitHandler(TUnit *, unsigned long)+0x8c>
         363d4:	e24dd040 	sub	sp, sp, #64	; 0x40
         363d8:	e1a01004 	mov	r1, r4
         363dc:	e28d0004 	add	r0, sp, #4	; 0x4
         363e0:	e3a02000 	mov	r2, #0	; 0x0
         363e4:	eb6943fe 	bl	1a873e4 <TUnitPublic::$__ct(TUnit *, unsigned long)>
         363e8:	e28d0004 	add	r0, sp, #4	; 0x4
         363ec:	eb6a167f 	bl	1abbdf0 <TUnitPublic::$WordInfo(void)>
         363f0:	eb6e2f55 	bl	1bc214c <$AllocateRefHandle(long)>
         363f4:	e58d0000 	str	r0, [sp]
         363f8:	e1a0100d 	mov	r1, sp
         363fc:	e28d0040 	add	r0, sp, #64	; 0x40
         36400:	eb69c816 	bl	1aa8460 <$AddWordInfo__FRC6RefVarT1>
         36404:	e59d0000 	ldr	r0, [sp]
         36408:	eb6e336b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3640c:	e28d0004 	add	r0, sp, #4	; 0x4
         36410:	e3a01000 	mov	r1, #0	; 0x0
         36414:	eb69480c 	bl	1a8844c <TUnitPublic::$__dt(void)>
         36418:	e28dd040 	add	sp, sp, #64	; 0x40
         3641c:	ea000004 	b	36434 <BulkUnitHandler(TUnit *, unsigned long)+0x9c>
         36420:	0c101844 	ldceq	8, cr1, [r0], -#272
         36424:	e1a01004 	mov	r1, r4
         36428:	e59f0014 	ldr	r0, [pc, #14]	; 36444 <BulkUnitHandler(TUnit *, unsigned long)+0xac>
         3642c:	e5900004 	ldr	r0, [r0, #4]
         36430:	eb043a70 	bl	144df8 <StrokeCentral::AddExpiredStroke(TStrokeUnit *)>
         36434:	e59d0000 	ldr	r0, [sp]
         36438:	eb6e335f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3643c:	e1a00005 	mov	r0, r5
         36440:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         36444:	0c1008a0 	ldceq	8, cr0, [r0], -#640
    */
}

/**
 * Symbol: BPNetAllocateNet
 * Address: 0003b14c
 */
void globals::BPNetAllocateNet() {
    /*
         3b14c:	e1a0c00d 	mov	ip, sp
         3b150:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3b154:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b158:	e1a04000 	mov	r4, r0
         3b15c:	e5900048 	ldr	r0, [r0, #72]
         3b160:	e1a00840 	mov	r0, r0, asr #16
         3b164:	e59f1050 	ldr	r1, [pc, #50]	; 3b1bc <BPNetAllocateNet+0x70>
         3b168:	eb6e9bf3 	bl	1be213c <$NewNamedPtr>
         3b16c:	e59f504c 	ldr	r5, [pc, #4c]	; 3b1c0 <BPNetAllocateNet+0x74>
         3b170:	e5850000 	str	r0, [r5]
         3b174:	e3300000 	teq	r0, #0	; 0x0
         3b178:	1a000005 	bne	3b194 <BPNetAllocateNet+0x48>
         3b17c:	e59f0040 	ldr	r0, [pc, #40]	; 3b1c4 <BPNetAllocateNet+0x78>
         3b180:	e5900000 	ldr	r0, [r0]
         3b184:	e28f1f0f 	add	r1, pc, #60	; 0x3c
         3b188:	e3a02000 	mov	r2, #0	; 0x0
         3b18c:	eb6ea002 	bl	1be319c <$Throw>
         3b190:	e5950000 	ldr	r0, [r5]
         3b194:	e584002c 	str	r0, [r4, #44]
         3b198:	e584003c 	str	r0, [r4, #60]
         3b19c:	e5941048 	ldr	r1, [r4, #72]
         3b1a0:	e1a01841 	mov	r1, r1, asr #16
         3b1a4:	e5942046 	ldr	r2, [r4, #70]
         3b1a8:	e0411842 	sub	r1, r1, r2, asr #16
         3b1ac:	e0810000 	add	r0, r1, r0
         3b1b0:	e5a40040 	str	r0, [r4, #64]!
         3b1b4:	e3a00000 	mov	r0, #0	; 0x0
         3b1b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         3b1bc:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
         3b1c0:	0c101950 	ldceq	9, cr1, [r0], -#320
         3b1c4:	003712cc 	eoreqs	r1, r7, ip, asr #5
         3b1c8:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: BPNetCreateNumOut
 * Address: 0003b1cc
 */
void globals::BPNetCreateNumOut() {
    /*
         3b1cc:	e1a0c00d 	mov	ip, sp
         3b1d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3b1d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b1d8:	e59f104c 	ldr	r1, [pc, #4c]	; 3b22c <BPNetCreateNumOut+0x60>
         3b1dc:	e3a00084 	mov	r0, #132	; 0x84
         3b1e0:	eb6e9bd5 	bl	1be213c <$NewNamedPtr>
         3b1e4:	e59f4044 	ldr	r4, [pc, #44]	; 3b230 <BPNetCreateNumOut+0x64>
         3b1e8:	e5840000 	str	r0, [r4]
         3b1ec:	e3300000 	teq	r0, #0	; 0x0
         3b1f0:	1a000005 	bne	3b20c <BPNetCreateNumOut+0x40>
         3b1f4:	e59f0038 	ldr	r0, [pc, #38]	; 3b234 <BPNetCreateNumOut+0x68>
         3b1f8:	e5900000 	ldr	r0, [r0]
         3b1fc:	e28f1f0d 	add	r1, pc, #52	; 0x34
         3b200:	e3a02000 	mov	r2, #0	; 0x0
         3b204:	eb6e9fe4 	bl	1be319c <$Throw>
         3b208:	e5940000 	ldr	r0, [r4]
         3b20c:	e59f4028 	ldr	r4, [pc, #28]	; 3b23c <BPNetCreateNumOut+0x70>
         3b210:	e1a0e000 	mov	lr, r0
         3b214:	e3a0c00b 	mov	ip, #11	; 0xb
         3b218:	e8b4000e 	ldmia	r4!, {r1, r2, r3}
         3b21c:	e8ae000e 	stmia	lr!, {r1, r2, r3}
         3b220:	e25cc001 	subs	ip, ip, #1	; 0x1
         3b224:	1afffffb 	bne	3b218 <BPNetCreateNumOut+0x4c>
         3b228:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         3b22c:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
         3b230:	0c101950 	ldceq	9, cr1, [r0], -#320
         3b234:	003712cc 	eoreqs	r1, r7, ip, asr #5
         3b238:	00000000 	andeq	r0, r0, r0
         3b23c:	0036e618 	eoreqs	lr, r6, r8, lsl r6
    */
}

/**
 * Symbol: BPNetDestroy
 * Address: 0003b240
 */
void globals::BPNetDestroy() {
    /*
         3b240:	e3300000 	teq	r0, #0	; 0x0
         3b244:	01a0f00e 	moveq	pc, lr
         3b248:	e1a0c00d 	mov	ip, sp
         3b24c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3b250:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b254:	e1a04000 	mov	r4, r0
         3b258:	eb6ccd3e 	bl	1b6e758 <$BPNetFree>
         3b25c:	e1a00004 	mov	r0, r4
         3b260:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         3b264:	ea6e5dbb 	b	1bd2958 <$free>
    */
}

/**
 * Symbol: BPNetFree
 * Address: 0003b268
 */
void globals::BPNetFree() {
    /*
         3b268:	e590002c 	ldr	r0, [r0, #44]
         3b26c:	e3300000 	teq	r0, #0	; 0x0
         3b270:	1a6e5db8 	bne	1bd2958 <$free>
         3b274:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: BPNetLearnEnable
 * Address: 0003b278
 */
void globals::BPNetLearnEnable() {
    /*
         3b278:	e5c01080 	strb	r1, [r0, #128]
         3b27c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: BPNetLoad
 * Address: 0003b280
 */
void globals::BPNetLoad() {
    /*
         3b280:	e1a0c00d 	mov	ip, sp
         3b284:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         3b288:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b28c:	eb6ccd2d 	bl	1b6e748 <$BPNetAllocateNet>
         3b290:	e3a00000 	mov	r0, #0	; 0x0
         3b294:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: BatteryWakeUp(void)
 * Address: 0003b430
 */
BatteryWakeUp(void) {
    /*
         3b430:	e59f000c 	ldr	r0, [pc, #c]	; 3b444 <BatteryWakeUp(void)+0x14>
         3b434:	e5900000 	ldr	r0, [r0]
         3b438:	e3300000 	teq	r0, #0	; 0x0
         3b43c:	1a0d2a6a 	bne	385dec <PBatteryDriver::WakeUp(void)>
         3b440:	e1a0f00e 	mov	pc, lr
         3b444:	0c1008d0 	ldceq	8, cr0, [r0], -#832
    */
}

/**
 * Symbol: BatteryShutDown(void)
 * Address: 0003b448
 */
BatteryShutDown(void) {
    /*
         3b448:	e59f000c 	ldr	r0, [pc, #c]	; 3b45c <BatteryShutDown(void)+0x14>
         3b44c:	e5900000 	ldr	r0, [r0]
         3b450:	e3300000 	teq	r0, #0	; 0x0
         3b454:	1a0d2a67 	bne	385df8 <PBatteryDriver::ShutDown(void)>
         3b458:	e1a0f00e 	mov	pc, lr
         3b45c:	0c1008d0 	ldceq	8, cr0, [r0], -#832
    */
}

/**
 * Symbol: BatteryInitialize(void)
 * Address: 0003b470
 */
BatteryInitialize(void) {
    /*
         3b470:	e1a0c00d 	mov	ip, sp
         3b474:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3b478:	e24cb004 	sub	fp, ip, #4	; 0x4
         3b47c:	e28f1f10 	add	r1, pc, #64	; 0x40
         3b480:	e28f0f14 	add	r0, pc, #80	; 0x50
         3b484:	eb6e71c0 	bl	1bd7b8c <$NewByName__FPCcT1>
         3b488:	e59f4058 	ldr	r4, [pc, #58]	; 3b4e8 <BatteryInitialize(void)+0x78>
         3b48c:	e5840000 	str	r0, [r4]
         3b490:	e3300000 	teq	r0, #0	; 0x0
         3b494:	1a000004 	bne	3b4ac <BatteryInitialize(void)+0x3c>
         3b498:	eb6accb7 	bl	1aee77c <$ClassInfo__20PCirrusBatteryDriverSFv>
         3b49c:	eb6e75e6 	bl	1bd8c3c <TClassInfo::$Register( const(void))>
         3b4a0:	e28f0f11 	add	r0, pc, #68	; 0x44
         3b4a4:	eb0d2a3b 	bl	385d98 <New__14PBatteryDriverSFPc>
         3b4a8:	e5840000 	str	r0, [r4]
         3b4ac:	e5940000 	ldr	r0, [r4]
         3b4b0:	e3300000 	teq	r0, #0	; 0x0
         3b4b4:	059f0048 	ldreq	r0, [pc, #48]	; 3b504 <BatteryInitialize(void)+0x94>
         3b4b8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         3b4bc:	1a0d2a47 	bne	385de0 <PBatteryDriver::Init(void)>
         3b4c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         3b4c4:	504d6169 	subpl	r6, sp, r9, ror #2
         3b4c8:	6e426174 	mcrvs	1, 2, r6, cr2, cr4, {3}
         3b4cc:	74657279 	strvcbt	r7, [r5], -#633
         3b4d0:	44726976 	ldrmibt	r6, [r2], -#2422
         3b4d4:	65720000 	ldrvsb	r0, [r2]!
         3b4d8:	50426174 	subpl	r6, r2, r4, ror r1
         3b4dc:	74657279 	strvcbt	r7, [r5], -#633
         3b4e0:	44726976 	ldrmibt	r6, [r2], -#2422
         3b4e4:	65720000 	ldrvsb	r0, [r2]!
         3b4e8:	0c1008d0 	ldceq	8, cr0, [r0], -#832
         3b4ec:	50436972 	subpl	r6, r3, r2, ror r9
         3b4f0:	72757342 	rsbvcs	r7, r5, #134217729	; 0x8000001
         3b4f4:	61747465 	cmnvs	r4, r5, ror #8
         3b4f8:	72794472 	rsbvcs	r4, r9, #1912602624	; 0x72000000
         3b4fc:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
         3b500:	00000000 	andeq	r0, r0, r0
         3b504:	ffff2477 	swinv	0x00ff2477
    */
}

/**
 * Symbol: BiGrammarNew
 * Address: 0003de8c
 */
void globals::BiGrammarNew() {
    /*
         3de8c:	e1a0c00d 	mov	ip, sp
         3de90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3de94:	e24cb004 	sub	fp, ip, #4	; 0x4
         3de98:	e1a04800 	mov	r4, r0, lsl #16
         3de9c:	e1a04844 	mov	r4, r4, asr #16
         3dea0:	e3a00020 	mov	r0, #32	; 0x20
         3dea4:	e0800104 	add	r0, r0, r4, lsl #2
         3dea8:	e59f106c 	ldr	r1, [pc, #6c]	; 3df1c <BiGrammarNew+0x90>
         3deac:	eb6e90a2 	bl	1be213c <$NewNamedPtr>
         3deb0:	e59f5068 	ldr	r5, [pc, #68]	; 3df20 <BiGrammarNew+0x94>
         3deb4:	e5850000 	str	r0, [r5]
         3deb8:	e3300000 	teq	r0, #0	; 0x0
         3debc:	1a000005 	bne	3ded8 <BiGrammarNew+0x4c>
         3dec0:	e59f005c 	ldr	r0, [pc, #5c]	; 3df24 <BiGrammarNew+0x98>
         3dec4:	e5900000 	ldr	r0, [r0]
         3dec8:	e28f1f16 	add	r1, pc, #88	; 0x58
         3decc:	e3a02000 	mov	r2, #0	; 0x0
         3ded0:	eb6e94b1 	bl	1be319c <$Throw>
         3ded4:	e5950000 	ldr	r0, [r5]
         3ded8:	e3a02000 	mov	r2, #0	; 0x0
         3dedc:	e5802000 	str	r2, [r0]
         3dee0:	e5802004 	str	r2, [r0, #4]
         3dee4:	e2800008 	add	r0, r0, #8	; 0x8
         3dee8:	e8800014 	stmia	r0, {r2, r4}
         3deec:	e2400008 	sub	r0, r0, #8	; 0x8
         3def0:	e2801020 	add	r1, r0, #32	; 0x20
         3def4:	e5801010 	str	r1, [r0, #16]
         3def8:	e5c02014 	strb	r2, [r0, #20]
         3defc:	e3a01000 	mov	r1, #0	; 0x0
         3df00:	e0803001 	add	r3, r0, r1
         3df04:	e5c32015 	strb	r2, [r3, #21]
         3df08:	e2811001 	add	r1, r1, #1	; 0x1
         3df0c:	e20110ff 	and	r1, r1, #255	; 0xff
         3df10:	e351000a 	cmp	r1, #10	; 0xa
         3df14:	bafffff9 	blt	3df00 <BiGrammarNew+0x74>
         3df18:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         3df1c:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
         3df20:	0c101950 	ldceq	9, cr1, [r0], -#320
         3df24:	003712cc 	eoreqs	r1, r7, ip, asr #5
         3df28:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: BiGrammarCreate
 * Address: 0003df2c
 */
void globals::BiGrammarCreate() {
    /*
         3df2c:	e1a0c00d 	mov	ip, sp
         3df30:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         3df34:	e24cb004 	sub	fp, ip, #4	; 0x4
         3df38:	e1a00001 	mov	r0, r1
         3df3c:	eb6cc20e 	bl	1b6e77c <$BiGrammarNew>
         3df40:	e3a01000 	mov	r1, #0	; 0x0
         3df44:	e5801000 	str	r1, [r0]
         3df48:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: BiGrammarDestroy
 * Address: 0003df4c
 */
void globals::BiGrammarDestroy() {
    /*
         3df4c:	e3300000 	teq	r0, #0	; 0x0
         3df50:	01a0f00e 	moveq	pc, lr
         3df54:	e1a0c00d 	mov	ip, sp
         3df58:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3df5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3df60:	e1a04000 	mov	r4, r0
         3df64:	e5900010 	ldr	r0, [r0, #16]
         3df68:	e3300000 	teq	r0, #0	; 0x0
         3df6c:	0a00000a 	beq	3df9c <BiGrammarDestroy+0x50>
         3df70:	e3a05000 	mov	r5, #0	; 0x0
         3df74:	e5940008 	ldr	r0, [r4, #8]
         3df78:	e3500000 	cmp	r0, #0	; 0x0
         3df7c:	da000006 	ble	3df9c <BiGrammarDestroy+0x50>
         3df80:	e5940010 	ldr	r0, [r4, #16]
         3df84:	e7900105 	ldr	r0, [r0, r5, lsl #2]
         3df88:	eb6cc1f6 	bl	1b6e768 <$BiGSliceDestroy>
         3df8c:	e2855001 	add	r5, r5, #1	; 0x1
         3df90:	e5940008 	ldr	r0, [r4, #8]
         3df94:	e1500005 	cmp	r0, r5
         3df98:	cafffff8 	bgt	3df80 <BiGrammarDestroy+0x34>
         3df9c:	e1a00004 	mov	r0, r4
         3dfa0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         3dfa4:	ea6e526b 	b	1bd2958 <$free>
    */
}

/**
 * Symbol: BiGSliceDestroy
 * Address: 0003dfa8
 */
void globals::BiGSliceDestroy() {
    /*
         3dfa8:	e3300000 	teq	r0, #0	; 0x0
         3dfac:	1a6e5269 	bne	1bd2958 <$free>
         3dfb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: BiGSliceNew
 * Address: 0003dfb4
 */
void globals::BiGSliceNew() {
    /*
         3dfb4:	e1a0c00d 	mov	ip, sp
         3dfb8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3dfbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         3dfc0:	e1a04800 	mov	r4, r0, lsl #16
         3dfc4:	e1a04844 	mov	r4, r4, asr #16
         3dfc8:	e0841084 	add	r1, r4, r4, lsl #1
         3dfcc:	e3a00030 	mov	r0, #48	; 0x30
         3dfd0:	e0800081 	add	r0, r0, r1, lsl #1
         3dfd4:	e59f105c 	ldr	r1, [pc, #5c]	; 3e038 <BiGSliceNew+0x84>
         3dfd8:	eb6e9057 	bl	1be213c <$NewNamedPtr>
         3dfdc:	e59f5058 	ldr	r5, [pc, #58]	; 3e03c <BiGSliceNew+0x88>
         3dfe0:	e5850000 	str	r0, [r5]
         3dfe4:	e3300000 	teq	r0, #0	; 0x0
         3dfe8:	1a000005 	bne	3e004 <BiGSliceNew+0x50>
         3dfec:	e59f004c 	ldr	r0, [pc, #4c]	; 3e040 <BiGSliceNew+0x8c>
         3dff0:	e5900000 	ldr	r0, [r0]
         3dff4:	e28f1f12 	add	r1, pc, #72	; 0x48
         3dff8:	e3a02000 	mov	r2, #0	; 0x0
         3dffc:	eb6e9466 	bl	1be319c <$Throw>
         3e000:	e5950000 	ldr	r0, [r5]
         3e004:	e3a01000 	mov	r1, #0	; 0x0
         3e008:	e5801000 	str	r1, [r0]
         3e00c:	e280001c 	add	r0, r0, #28	; 0x1c
         3e010:	e8800012 	stmia	r0, {r1, r4}
         3e014:	e240001c 	sub	r0, r0, #28	; 0x1c
         3e018:	e3340000 	teq	r4, #0	; 0x0
         3e01c:	12801030 	addne	r1, r0, #48	; 0x30
         3e020:	e5801024 	str	r1, [r0, #36]
         3e024:	10811104 	addne	r1, r1, r4, lsl #2
         3e028:	e5801028 	str	r1, [r0, #40]
         3e02c:	e3a010ff 	mov	r1, #255	; 0xff
         3e030:	e5c0102c 	strb	r1, [r0, #44]
         3e034:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         3e038:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
         3e03c:	0c101950 	ldceq	9, cr1, [r0], -#320
         3e040:	003712cc 	eoreqs	r1, r7, ip, asr #5
         3e044:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: BiGSliceCreate
 * Address: 0003e048
 */
void globals::BiGSliceCreate() {
    /*
         3e048:	e1a0c00d 	mov	ip, sp
         3e04c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3e050:	e24cb004 	sub	fp, ip, #4	; 0x4
         3e054:	e1a05000 	mov	r5, r0
         3e058:	e1a04001 	mov	r4, r1
         3e05c:	e59b0038 	ldr	r0, [fp, #56]
         3e060:	eb6cc1c1 	bl	1b6e76c <$BiGSliceNew>
         3e064:	e1a06000 	mov	r6, r0
         3e068:	e3a00000 	mov	r0, #0	; 0x0
         3e06c:	e52d006c 	str	r0, [sp, -#108]!
         3e070:	e28d0008 	add	r0, sp, #8	; 0x8
         3e074:	eb6dd23e 	bl	1bb2974 <$setjmp>
         3e078:	e3300000 	teq	r0, #0	; 0x0
         3e07c:	1a000007 	bne	3e0a0 <BiGSliceCreate+0x58>
         3e080:	e1a0000d 	mov	r0, sp
         3e084:	eb6e87fc 	bl	1be007c <$AddExceptionHandler>
         3e088:	e1a0000d 	mov	r0, sp
         3e08c:	e5864004 	str	r4, [r6, #4]
         3e090:	e5865000 	str	r5, [r6]
         3e094:	eb6e8c07 	bl	1be10b8 <$ExitHandler>
         3e098:	e1a00006 	mov	r0, r6
         3e09c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         3e0a0:	e1a00006 	mov	r0, r6
         3e0a4:	eb6cc1af 	bl	1b6e768 <$BiGSliceDestroy>
         3e0a8:	e1a0000d 	mov	r0, sp
         3e0ac:	eb6e9028 	bl	1be2154 <$NextHandler>
         3e0b0:	eafffffa 	b	3e0a0 <BiGSliceCreate+0x58>
    */
}

/**
 * Symbol: BiGrammarsLoad
 * Address: 0003e0b4
 */
void globals::BiGrammarsLoad() {
    /*
         3e0b4:	e59f0000 	ldr	r0, [pc, #0]	; 3e0bc <BiGrammarsLoad+0x8>
         3e0b8:	e1a0f00e 	mov	pc, lr
         3e0bc:	00366e0c 	eoreqs	r6, r6, ip, lsl #28
    */
}

/**
 * Symbol: BiGrammarModifyContext
 * Address: 0003e0c0
 */
void globals::BiGrammarModifyContext() {
    /*
         3e0c0:	e1a0c00d 	mov	ip, sp
         3e0c4:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         3e0c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         3e0cc:	e1a08001 	mov	r8, r1
         3e0d0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         3e0d4:	e3a09000 	mov	r9, #0	; 0x0
         3e0d8:	e3a0a000 	mov	sl, #0	; 0x0
         3e0dc:	e3a05000 	mov	r5, #0	; 0x0
         3e0e0:	e3a07902 	mov	r7, #32768	; 0x8000
         3e0e4:	e2477002 	sub	r7, r7, #2	; 0x2
         3e0e8:	eb6cc1a0 	bl	1b6e770 <$BiGrammarClone>
         3e0ec:	e1b04000 	movs	r4, r0
         3e0f0:	e3a00000 	mov	r0, #0	; 0x0
         3e0f4:	1a000000 	bne	3e0fc <BiGrammarModifyContext+0x3c>
         3e0f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         3e0fc:	e3a00000 	mov	r0, #0	; 0x0
         3e100:	e52d006c 	str	r0, [sp, -#108]!
         3e104:	e28d0008 	add	r0, sp, #8	; 0x8
         3e108:	eb6dd219 	bl	1bb2974 <$setjmp>
         3e10c:	e3300000 	teq	r0, #0	; 0x0
         3e110:	1a0000cc 	bne	3e448 <BiGrammarModifyContext+0x388>
         3e114:	e1a0000d 	mov	r0, sp
         3e118:	eb6e87d7 	bl	1be007c <$AddExceptionHandler>
         3e11c:	e5940008 	ldr	r0, [r4, #8]
         3e120:	e1a00100 	mov	r0, r0, lsl #2
         3e124:	e59f1174 	ldr	r1, [pc, #174]	; 3e2a0 <BiGrammarModifyContext+0x1e0>
         3e128:	eb6e9003 	bl	1be213c <$NewNamedPtr>
         3e12c:	e59f6170 	ldr	r6, [pc, #170]	; 3e2a4 <BiGrammarModifyContext+0x1e4>
         3e130:	e5860000 	str	r0, [r6]
         3e134:	e3300000 	teq	r0, #0	; 0x0
         3e138:	11a06000 	movne	r6, r0
         3e13c:	1a000005 	bne	3e158 <BiGrammarModifyContext+0x98>
         3e140:	e59f0160 	ldr	r0, [pc, #160]	; 3e2a8 <BiGrammarModifyContext+0x1e8>
         3e144:	e5900000 	ldr	r0, [r0]
         3e148:	e28f1f57 	add	r1, pc, #348	; 0x15c
         3e14c:	e3a02000 	mov	r2, #0	; 0x0
         3e150:	eb6e9411 	bl	1be319c <$Throw>
         3e154:	e5966000 	ldr	r6, [r6]
         3e158:	e3a00000 	mov	r0, #0	; 0x0
         3e15c:	e52d0070 	str	r0, [sp, -#112]!
         3e160:	e58d0004 	str	r0, [sp, #4]
         3e164:	e28d000c 	add	r0, sp, #12	; 0xc
         3e168:	eb6dd201 	bl	1bb2974 <$setjmp>
         3e16c:	e3300000 	teq	r0, #0	; 0x0
         3e170:	1a0000a4 	bne	3e408 <BiGrammarModifyContext+0x348>
         3e174:	e28d0004 	add	r0, sp, #4	; 0x4
         3e178:	eb6e87bf 	bl	1be007c <$AddExceptionHandler>
         3e17c:	e3a00000 	mov	r0, #0	; 0x0
         3e180:	e5941008 	ldr	r1, [r4, #8]
         3e184:	e3510000 	cmp	r1, #0	; 0x0
         3e188:	da000018 	ble	3e1f0 <BiGrammarModifyContext+0x130>
         3e18c:	e59f311c 	ldr	r3, [pc, #11c]	; 3e2b0 <BiGrammarModifyContext+0x1f0>
         3e190:	e59f211c 	ldr	r2, [pc, #11c]	; 3e2b4 <BiGrammarModifyContext+0x1f4>
         3e194:	e5941010 	ldr	r1, [r4, #16]
         3e198:	e7911100 	ldr	r1, [r1, r0, lsl #2]
         3e19c:	e5911008 	ldr	r1, [r1, #8]
         3e1a0:	e1a01821 	mov	r1, r1, lsr #16
         3e1a4:	e5831000 	str	r1, [r3]
         3e1a8:	e3510a02 	cmp	r1, #8192	; 0x2000
         3e1ac:	a3a01000 	movge	r1, #0	; 0x0
         3e1b0:	aa000003 	bge	3e1c4 <BiGrammarModifyContext+0x104>
         3e1b4:	e3510000 	cmp	r1, #0	; 0x0
         3e1b8:	c1a011c1 	movgt	r1, r1, asr #3
         3e1bc:	c7921101 	ldrgt	r1, [r2, r1, lsl #2]
         3e1c0:	d3a01801 	movle	r1, #65536	; 0x10000
         3e1c4:	e7861100 	str	r1, [r6, r0, lsl #2]
         3e1c8:	e51bc030 	ldr	ip, [fp, -#48]
         3e1cc:	e79cc109 	ldr	ip, [ip, r9, lsl #2]
         3e1d0:	e13c0000 	teq	ip, r0
         3e1d4:	10815005 	addne	r5, r1, r5
         3e1d8:	02899001 	addeq	r9, r9, #1	; 0x1
         3e1dc:	0081a00a 	addeq	sl, r1, sl
         3e1e0:	e2800001 	add	r0, r0, #1	; 0x1
         3e1e4:	e5941008 	ldr	r1, [r4, #8]
         3e1e8:	e1510000 	cmp	r1, r0
         3e1ec:	caffffe8 	bgt	3e194 <BiGrammarModifyContext+0xd4>
         3e1f0:	e1390008 	teq	r9, r8
         3e1f4:	0a000006 	beq	3e214 <BiGrammarModifyContext+0x154>
         3e1f8:	e24ddc02 	sub	sp, sp, #512	; 0x200
         3e1fc:	e1a03008 	mov	r3, r8
         3e200:	e1a02009 	mov	r2, r9
         3e204:	e1a0000d 	mov	r0, sp
         3e208:	e28f1f2a 	add	r1, pc, #168	; 0xa8
         3e20c:	eb6dd1da 	bl	1bb297c <$_sprintf>
         3e210:	e28ddc02 	add	sp, sp, #512	; 0x200
         3e214:	e1a0100a 	mov	r1, sl
         3e218:	e51b002c 	ldr	r0, [fp, -#44]
         3e21c:	eb6e8ba7 	bl	1be10c0 <$FixedDivide>
         3e220:	e1a0a000 	mov	sl, r0
         3e224:	e51b302c 	ldr	r3, [fp, -#44]
         3e228:	e2630801 	rsb	r0, r3, #65536	; 0x10000
         3e22c:	e1a01005 	mov	r1, r5
         3e230:	eb6e8ba2 	bl	1be10c0 <$FixedDivide>
         3e234:	e1a09000 	mov	r9, r0
         3e238:	e3a08000 	mov	r8, #0	; 0x0
         3e23c:	e3a05000 	mov	r5, #0	; 0x0
         3e240:	e5940008 	ldr	r0, [r4, #8]
         3e244:	e3500000 	cmp	r0, #0	; 0x0
         3e248:	da000056 	ble	3e3a8 <BiGrammarModifyContext+0x2e8>
         3e24c:	e59f10b0 	ldr	r1, [pc, #b0]	; 3e304 <BiGrammarModifyContext+0x244>
         3e250:	e58d10e4 	str	r1, [sp, #228]
         3e254:	e59f10ac 	ldr	r1, [pc, #ac]	; 3e308 <BiGrammarModifyContext+0x248>
         3e258:	e58d10e0 	str	r1, [sp, #224]
         3e25c:	e59f10a8 	ldr	r1, [pc, #a8]	; 3e30c <BiGrammarModifyContext+0x24c>
         3e260:	e58d10dc 	str	r1, [sp, #220]
         3e264:	e51b2030 	ldr	r2, [fp, -#48]
         3e268:	e7920108 	ldr	r0, [r2, r8, lsl #2]
         3e26c:	e1300005 	teq	r0, r5
         3e270:	1a00002c 	bne	3e328 <BiGrammarModifyContext+0x268>
         3e274:	e2888001 	add	r8, r8, #1	; 0x1
         3e278:	e7960105 	ldr	r0, [r6, r5, lsl #2]
         3e27c:	e1a0100a 	mov	r1, sl
         3e280:	eb6e8b8f 	bl	1be10c4 <$FixedMultiply>
         3e284:	e59d10e0 	ldr	r1, [sp, #224]
         3e288:	e5810000 	str	r0, [r1]
         3e28c:	e3500000 	cmp	r0, #0	; 0x0
         3e290:	ca00001e 	bgt	3e310 <BiGrammarModifyContext+0x250>
         3e294:	e3a00902 	mov	r0, #32768	; 0x8000
         3e298:	e2400002 	sub	r0, r0, #2	; 0x2
         3e29c:	ea000032 	b	3e36c <BiGrammarModifyContext+0x2ac>
         3e2a0:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
         3e2a4:	0c101950 	ldceq	9, cr1, [r0], -#320
         3e2a8:	003712cc 	eoreqs	r1, r7, ip, asr #5
         3e2ac:	00000000 	andeq	r0, r0, r0
         3e2b0:	0c100890 	ldceq	8, cr0, [r0], -#576
         3e2b4:	0036400c 	eoreqs	r4, r6, ip
         3e2b8:	6e756d53 	mrcvs	13, 3, r6, cr5, cr3, {2}
         3e2bc:	6c696365 	stcvsl	3, cr6, [r9], -#404
         3e2c0:	4d617463 	stcmil	4, cr7, [r1, -#396]!
         3e2c4:	68657320 	stmvsda	r5!, {r5, r8, r9, ip, sp, lr}^
         3e2c8:	28256429 	stmcsda	r5!, {r0, r3, r5, sl, sp, lr}
         3e2cc:	20213d20 	eorcs	r3, r1, r0, lsr #26
         3e2d0:	72657175 	rsbvc	r7, r5, #1073741853	; 0x4000001d
         3e2d4:	65737465 	ldrvsb	r7, [r3, -#1125]!
         3e2d8:	64206e75 	strvst	r6, [r0], -#3701
         3e2dc:	6d536c69 	ldcvsl	12, cr6, [r3, -#420]
         3e2e0:	63657320 	cmnvs	r5, #-2147483648	; 0x80000000
         3e2e4:	28256429 	stmcsda	r5!, {r0, r3, r5, sl, sp, lr}
         3e2e8:	20696e20 	rsbcs	r6, r9, r0, lsr #28
         3e2ec:	42694772 	rsbmi	r4, r9, #29884416	; 0x1c80000
         3e2f0:	616d6d61 	cmnvs	sp, r1, ror #26
         3e2f4:	724d6f64 	subvc	r6, sp, #400	; 0x190
         3e2f8:	69667943 	stmvsdb	r6!, {r0, r1, r6, r8, fp, ip, sp, lr}^
         3e2fc:	6f6e7465 	swivs	0x006e7465
         3e300:	78740000 	ldmvcda	r4!, {}^
         3e304:	0036380c 	eoreqs	r3, r6, ip, lsl #16
         3e308:	0c100894 	ldceq	8, cr0, [r0], -#592
         3e30c:	0036340c 	eoreqs	r3, r6, ip, lsl #8
         3e310:	e3500b01 	cmp	r0, #1024	; 0x400
         3e314:	ba00000c 	blt	3e34c <BiGrammarModifyContext+0x28c>
         3e318:	e3500801 	cmp	r0, #65536	; 0x10000
         3e31c:	ba00000e 	blt	3e35c <BiGrammarModifyContext+0x29c>
         3e320:	e3a00000 	mov	r0, #0	; 0x0
         3e324:	ea000010 	b	3e36c <BiGrammarModifyContext+0x2ac>
         3e328:	e7960105 	ldr	r0, [r6, r5, lsl #2]
         3e32c:	e1a01009 	mov	r1, r9
         3e330:	eb6e8b63 	bl	1be10c4 <$FixedMultiply>
         3e334:	e59d10e0 	ldr	r1, [sp, #224]
         3e338:	e5810000 	str	r0, [r1]
         3e33c:	e3500000 	cmp	r0, #0	; 0x0
         3e340:	daffffd3 	ble	3e294 <BiGrammarModifyContext+0x1d4>
         3e344:	e3500b01 	cmp	r0, #1024	; 0x400
         3e348:	aa000001 	bge	3e354 <BiGrammarModifyContext+0x294>
         3e34c:	e59d10e4 	ldr	r1, [sp, #228]
         3e350:	ea000003 	b	3e364 <BiGrammarModifyContext+0x2a4>
         3e354:	e3500801 	cmp	r0, #65536	; 0x10000
         3e358:	aafffff0 	bge	3e320 <BiGrammarModifyContext+0x260>
         3e35c:	e1a003c0 	mov	r0, r0, asr #7
         3e360:	e59d10dc 	ldr	r1, [sp, #220]
         3e364:	e7910080 	ldr	r0, [r1, r0, lsl #1]
         3e368:	e1a00840 	mov	r0, r0, asr #16
         3e36c:	e5941010 	ldr	r1, [r4, #16]
         3e370:	e7911105 	ldr	r1, [r1, r5, lsl #2]
         3e374:	e5c10009 	strb	r0, [r1, #9]
         3e378:	e1a00440 	mov	r0, r0, asr #8
         3e37c:	e5c10008 	strb	r0, [r1, #8]
         3e380:	e5940010 	ldr	r0, [r4, #16]
         3e384:	e7900105 	ldr	r0, [r0, r5, lsl #2]
         3e388:	e5900008 	ldr	r0, [r0, #8]
         3e38c:	e1a00820 	mov	r0, r0, lsr #16
         3e390:	e1500007 	cmp	r0, r7
         3e394:	d1a07000 	movle	r7, r0
         3e398:	e2855001 	add	r5, r5, #1	; 0x1
         3e39c:	e5940008 	ldr	r0, [r4, #8]
         3e3a0:	e1500005 	cmp	r0, r5
         3e3a4:	caffffae 	bgt	3e264 <BiGrammarModifyContext+0x1a4>
         3e3a8:	e3a00000 	mov	r0, #0	; 0x0
         3e3ac:	e5941008 	ldr	r1, [r4, #8]
         3e3b0:	e3510000 	cmp	r1, #0	; 0x0
         3e3b4:	da000015 	ble	3e410 <BiGrammarModifyContext+0x350>
         3e3b8:	e3a01902 	mov	r1, #32768	; 0x8000
         3e3bc:	e2411002 	sub	r1, r1, #2	; 0x2
         3e3c0:	e1a03807 	mov	r3, r7, lsl #16
         3e3c4:	e1a03823 	mov	r3, r3, lsr #16
         3e3c8:	e5942010 	ldr	r2, [r4, #16]
         3e3cc:	e7922100 	ldr	r2, [r2, r0, lsl #2]
         3e3d0:	e592e008 	ldr	lr, [r2, #8]
         3e3d4:	e151082e 	cmp	r1, lr, lsr #16
         3e3d8:	da000005 	ble	3e3f4 <BiGrammarModifyContext+0x334>
         3e3dc:	e5b2c008 	ldr	ip, [r2, #8]!
         3e3e0:	e1a0c82c 	mov	ip, ip, lsr #16
         3e3e4:	e04cc003 	sub	ip, ip, r3
         3e3e8:	e5c2c001 	strb	ip, [r2, #1]
         3e3ec:	e1a0c44c 	mov	ip, ip, asr #8
         3e3f0:	e5c2c000 	strb	ip, [r2]
         3e3f4:	e2800001 	add	r0, r0, #1	; 0x1
         3e3f8:	e5942008 	ldr	r2, [r4, #8]
         3e3fc:	e1520000 	cmp	r2, r0
         3e400:	cafffff0 	bgt	3e3c8 <BiGrammarModifyContext+0x308>
         3e404:	ea000001 	b	3e410 <BiGrammarModifyContext+0x350>
         3e408:	e3a00001 	mov	r0, #1	; 0x1
         3e40c:	e58d0000 	str	r0, [sp]
         3e410:	e1a00006 	mov	r0, r6
         3e414:	eb6e514f 	bl	1bd2958 <$free>
         3e418:	e59d0000 	ldr	r0, [sp]
         3e41c:	e3300000 	teq	r0, #0	; 0x0
         3e420:	128d0004 	addne	r0, sp, #4	; 0x4
         3e424:	1b6e8f4a 	blne	1be2154 <$NextHandler>
         3e428:	e28d0004 	add	r0, sp, #4	; 0x4
         3e42c:	eb6e8b21 	bl	1be10b8 <$ExitHandler>
         3e430:	e28dd070 	add	sp, sp, #112	; 0x70
         3e434:	e1a0000d 	mov	r0, sp
         3e438:	eb6e8b1e 	bl	1be10b8 <$ExitHandler>
         3e43c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         3e440:	e1a00004 	mov	r0, r4
         3e444:	eaffff2b 	b	3e0f8 <BiGrammarModifyContext+0x38>
         3e448:	e1a00004 	mov	r0, r4
         3e44c:	ebfffebe 	bl	3df4c <BiGrammarDestroy>
         3e450:	e1a0000d 	mov	r0, sp
         3e454:	eb6e8f3e 	bl	1be2154 <$NextHandler>
         3e458:	eafffffa 	b	3e448 <BiGrammarModifyContext+0x388>
         3e45c:	e1a0c00d 	mov	ip, sp
         3e460:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         3e464:	e24cb004 	sub	fp, ip, #4	; 0x4
         3e468:	e1a04000 	mov	r4, r0
         3e46c:	e1a06001 	mov	r6, r1
         3e470:	e1a05002 	mov	r5, r2
         3e474:	e1a07003 	mov	r7, r3
         3e478:	e3a08000 	mov	r8, #0	; 0x0
         3e47c:	e5900008 	ldr	r0, [r0, #8]
         3e480:	e3500000 	cmp	r0, #0	; 0x0
         3e484:	da000012 	ble	3e4d4 <BiGrammarModifyContext+0x414>
         3e488:	e5940010 	ldr	r0, [r4, #16]
         3e48c:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         3e490:	e5901004 	ldr	r1, [r0, #4]
         3e494:	e1310006 	teq	r1, r6
         3e498:	1a000009 	bne	3e4c4 <BiGrammarModifyContext+0x404>
         3e49c:	e5900000 	ldr	r0, [r0]
         3e4a0:	e1300005 	teq	r0, r5
         3e4a4:	0a000003 	beq	3e4b8 <BiGrammarModifyContext+0x3f8>
         3e4a8:	e1a01005 	mov	r1, r5
         3e4ac:	eb6ddd7d 	bl	1bb5aa8 <$strcmp>
         3e4b0:	e3300000 	teq	r0, #0	; 0x0
         3e4b4:	1a000002 	bne	3e4c4 <BiGrammarModifyContext+0x404>
         3e4b8:	e5b40010 	ldr	r0, [r4, #16]!
         3e4bc:	e7900108 	ldr	r0, [r0, r8, lsl #2]
         3e4c0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         3e4c4:	e2888001 	add	r8, r8, #1	; 0x1
         3e4c8:	e5940008 	ldr	r0, [r4, #8]
         3e4cc:	e1500008 	cmp	r0, r8
         3e4d0:	caffffec 	bgt	3e488 <BiGrammarModifyContext+0x3c8>
         3e4d4:	e1a03007 	mov	r3, r7
         3e4d8:	e92d0008 	stmdb	sp!, {r3}
         3e4dc:	ee008189 	mvfd	f0, #1.0
         3e4e0:	ed2d8102 	stfd	f0, [sp, -#8]!
         3e4e4:	ed2d8102 	stfd	f0, [sp, -#8]!
         3e4e8:	ed2d8102 	stfd	f0, [sp, -#8]!
         3e4ec:	ed2d8102 	stfd	f0, [sp, -#8]!
         3e4f0:	e3a03000 	mov	r3, #0	; 0x0
         3e4f4:	e92d0008 	stmdb	sp!, {r3}
         3e4f8:	ed2d8102 	stfd	f0, [sp, -#8]!
         3e4fc:	ed2d8102 	stfd	f0, [sp, -#8]!
         3e500:	e1a01006 	mov	r1, r6
         3e504:	e1a00005 	mov	r0, r5
         3e508:	e28f2f07 	add	r2, pc, #28	; 0x1c
         3e50c:	e892000c 	ldmia	r2, {r2, r3}
         3e510:	eb6cc093 	bl	1b6e764 <$BiGSliceCreate>
         3e514:	e5942008 	ldr	r2, [r4, #8]
         3e518:	e2821001 	add	r1, r2, #1	; 0x1
         3e51c:	e5841008 	str	r1, [r4, #8]
         3e520:	e5b41010 	ldr	r1, [r4, #16]!
         3e524:	e7810102 	str	r0, [r1, r2, lsl #2]
         3e528:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: BiGrammarClone
 * Address: 0003e534
 */
void globals::BiGrammarClone() {
    /*
         3e534:	e1a0c00d 	mov	ip, sp
         3e538:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         3e53c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3e540:	e1a04000 	mov	r4, r0
         3e544:	e3a00000 	mov	r0, #0	; 0x0
         3e548:	e52d0004 	str	r0, [sp, -#4]!
         3e54c:	e3a00000 	mov	r0, #0	; 0x0
         3e550:	e52d006c 	str	r0, [sp, -#108]!
         3e554:	e28d0008 	add	r0, sp, #8	; 0x8
         3e558:	eb6dd105 	bl	1bb2974 <$setjmp>
         3e55c:	e3300000 	teq	r0, #0	; 0x0
         3e560:	1a00008f 	bne	3e7a4 <BiGrammarClone+0x270>
         3e564:	e1a0000d 	mov	r0, sp
         3e568:	eb6e86c3 	bl	1be007c <$AddExceptionHandler>
         3e56c:	e5940000 	ldr	r0, [r4]
         3e570:	e5941008 	ldr	r1, [r4, #8]
         3e574:	eb6cc07e 	bl	1b6e774 <$BiGrammarCreate>
         3e578:	e58d006c 	str	r0, [sp, #108]
         3e57c:	e5941004 	ldr	r1, [r4, #4]
         3e580:	e59d006c 	ldr	r0, [sp, #108]
         3e584:	e5a01004 	str	r1, [r0, #4]!
         3e588:	e5d41014 	ldrb	r1, [r4, #20]
         3e58c:	e59d006c 	ldr	r0, [sp, #108]
         3e590:	e5c01014 	strb	r1, [r0, #20]
         3e594:	e3a00000 	mov	r0, #0	; 0x0
         3e598:	e0841000 	add	r1, r4, r0
         3e59c:	e5d12015 	ldrb	r2, [r1, #21]
         3e5a0:	e59d106c 	ldr	r1, [sp, #108]
         3e5a4:	e0811000 	add	r1, r1, r0
         3e5a8:	e5c12015 	strb	r2, [r1, #21]
         3e5ac:	e2800001 	add	r0, r0, #1	; 0x1
         3e5b0:	e350000a 	cmp	r0, #10	; 0xa
         3e5b4:	bafffff7 	blt	3e598 <BiGrammarClone+0x64>
         3e5b8:	e3a05000 	mov	r5, #0	; 0x0
         3e5bc:	e5940008 	ldr	r0, [r4, #8]
         3e5c0:	e3500000 	cmp	r0, #0	; 0x0
         3e5c4:	da000043 	ble	3e6d8 <BiGrammarClone+0x1a4>
         3e5c8:	e5940010 	ldr	r0, [r4, #16]
         3e5cc:	e7900105 	ldr	r0, [r0, r5, lsl #2]
         3e5d0:	e4902004 	ldr	r2, [r0], #4
         3e5d4:	e4901018 	ldr	r1, [r0], #24
         3e5d8:	e5903000 	ldr	r3, [r0]
         3e5dc:	e59d006c 	ldr	r0, [sp, #108]
         3e5e0:	ebffff9d 	bl	3e45c <BiGrammarModifyContext+0x39c>
         3e5e4:	e5941010 	ldr	r1, [r4, #16]
         3e5e8:	e7911105 	ldr	r1, [r1, r5, lsl #2]
         3e5ec:	e5911008 	ldr	r1, [r1, #8]
         3e5f0:	e1a01821 	mov	r1, r1, lsr #16
         3e5f4:	e5c01009 	strb	r1, [r0, #9]
         3e5f8:	e1a01441 	mov	r1, r1, asr #8
         3e5fc:	e5c01008 	strb	r1, [r0, #8]
         3e600:	e5941010 	ldr	r1, [r4, #16]
         3e604:	e7911105 	ldr	r1, [r1, r5, lsl #2]
         3e608:	e591100a 	ldr	r1, [r1, #10]
         3e60c:	e1a01821 	mov	r1, r1, lsr #16
         3e610:	e5c0100b 	strb	r1, [r0, #11]
         3e614:	e1a01441 	mov	r1, r1, asr #8
         3e618:	e5c0100a 	strb	r1, [r0, #10]
         3e61c:	e5941010 	ldr	r1, [r4, #16]
         3e620:	e7911105 	ldr	r1, [r1, r5, lsl #2]
         3e624:	e591100c 	ldr	r1, [r1, #12]
         3e628:	e1a01821 	mov	r1, r1, lsr #16
         3e62c:	e5c0100d 	strb	r1, [r0, #13]
         3e630:	e1a01441 	mov	r1, r1, asr #8
         3e634:	e5c0100c 	strb	r1, [r0, #12]
         3e638:	e5941010 	ldr	r1, [r4, #16]
         3e63c:	e7911105 	ldr	r1, [r1, r5, lsl #2]
         3e640:	e5911010 	ldr	r1, [r1, #16]
         3e644:	e5801010 	str	r1, [r0, #16]
         3e648:	e5941010 	ldr	r1, [r4, #16]
         3e64c:	e7911105 	ldr	r1, [r1, r5, lsl #2]
         3e650:	e5911014 	ldr	r1, [r1, #20]
         3e654:	e1a01821 	mov	r1, r1, lsr #16
         3e658:	e5c01015 	strb	r1, [r0, #21]
         3e65c:	e1a01441 	mov	r1, r1, asr #8
         3e660:	e5c01014 	strb	r1, [r0, #20]
         3e664:	e5941010 	ldr	r1, [r4, #16]
         3e668:	e7911105 	ldr	r1, [r1, r5, lsl #2]
         3e66c:	e5911016 	ldr	r1, [r1, #22]
         3e670:	e1a01821 	mov	r1, r1, lsr #16
         3e674:	e5c01017 	strb	r1, [r0, #23]
         3e678:	e1a01441 	mov	r1, r1, asr #8
         3e67c:	e5c01016 	strb	r1, [r0, #22]
         3e680:	e5941010 	ldr	r1, [r4, #16]
         3e684:	e7911105 	ldr	r1, [r1, r5, lsl #2]
         3e688:	e5911018 	ldr	r1, [r1, #24]
         3e68c:	e1a01821 	mov	r1, r1, lsr #16
         3e690:	e5c01019 	strb	r1, [r0, #25]
         3e694:	e1a01441 	mov	r1, r1, asr #8
         3e698:	e5c01018 	strb	r1, [r0, #24]
         3e69c:	e5941010 	ldr	r1, [r4, #16]
         3e6a0:	e7911105 	ldr	r1, [r1, r5, lsl #2]
         3e6a4:	e591101a 	ldr	r1, [r1, #26]
         3e6a8:	e1a01821 	mov	r1, r1, lsr #16
         3e6ac:	e5c0101b 	strb	r1, [r0, #27]
         3e6b0:	e1a01441 	mov	r1, r1, asr #8
         3e6b4:	e5c0101a 	strb	r1, [r0, #26]
         3e6b8:	e5941010 	ldr	r1, [r4, #16]
         3e6bc:	e7911105 	ldr	r1, [r1, r5, lsl #2]
         3e6c0:	e5d1102c 	ldrb	r1, [r1, #44]
         3e6c4:	e5c0102c 	strb	r1, [r0, #44]
         3e6c8:	e2855001 	add	r5, r5, #1	; 0x1
         3e6cc:	e5940008 	ldr	r0, [r4, #8]
         3e6d0:	e1500005 	cmp	r0, r5
         3e6d4:	caffffbb 	bgt	3e5c8 <BiGrammarClone+0x94>
         3e6d8:	e3a05000 	mov	r5, #0	; 0x0
         3e6dc:	e5940008 	ldr	r0, [r4, #8]
         3e6e0:	e3500000 	cmp	r0, #0	; 0x0
         3e6e4:	da00002a 	ble	3e794 <BiGrammarClone+0x260>
         3e6e8:	e59d006c 	ldr	r0, [sp, #108]
         3e6ec:	e5900010 	ldr	r0, [r0, #16]
         3e6f0:	e7907105 	ldr	r7, [r0, r5, lsl #2]
         3e6f4:	e3a06000 	mov	r6, #0	; 0x0
         3e6f8:	e5940010 	ldr	r0, [r4, #16]
         3e6fc:	e7900105 	ldr	r0, [r0, r5, lsl #2]
         3e700:	e590001c 	ldr	r0, [r0, #28]
         3e704:	e3500000 	cmp	r0, #0	; 0x0
         3e708:	da00001d 	ble	3e784 <BiGrammarClone+0x250>
         3e70c:	e5940010 	ldr	r0, [r4, #16]
         3e710:	e7900105 	ldr	r0, [r0, r5, lsl #2]
         3e714:	e5900024 	ldr	r0, [r0, #36]
         3e718:	e7900106 	ldr	r0, [r0, r6, lsl #2]
         3e71c:	e4902004 	ldr	r2, [r0], #4
         3e720:	e4901018 	ldr	r1, [r0], #24
         3e724:	e5903000 	ldr	r3, [r0]
         3e728:	e59d006c 	ldr	r0, [sp, #108]
         3e72c:	ebffff4a 	bl	3e45c <BiGrammarModifyContext+0x39c>
         3e730:	e5971024 	ldr	r1, [r7, #36]
         3e734:	e7810106 	str	r0, [r1, r6, lsl #2]
         3e738:	e597001c 	ldr	r0, [r7, #28]
         3e73c:	e2800001 	add	r0, r0, #1	; 0x1
         3e740:	e587001c 	str	r0, [r7, #28]
         3e744:	e5940010 	ldr	r0, [r4, #16]
         3e748:	e7900105 	ldr	r0, [r0, r5, lsl #2]
         3e74c:	e5900028 	ldr	r0, [r0, #40]
         3e750:	e7901086 	ldr	r1, [r0, r6, lsl #1]
         3e754:	e1a01821 	mov	r1, r1, lsr #16
         3e758:	e5970028 	ldr	r0, [r7, #40]
         3e75c:	e0800086 	add	r0, r0, r6, lsl #1
         3e760:	e5c01001 	strb	r1, [r0, #1]
         3e764:	e1a01441 	mov	r1, r1, asr #8
         3e768:	e5c01000 	strb	r1, [r0]
         3e76c:	e2866001 	add	r6, r6, #1	; 0x1
         3e770:	e5940010 	ldr	r0, [r4, #16]
         3e774:	e7900105 	ldr	r0, [r0, r5, lsl #2]
         3e778:	e590001c 	ldr	r0, [r0, #28]
         3e77c:	e1500006 	cmp	r0, r6
         3e780:	caffffe1 	bgt	3e70c <BiGrammarClone+0x1d8>
         3e784:	e2855001 	add	r5, r5, #1	; 0x1
         3e788:	e5940008 	ldr	r0, [r4, #8]
         3e78c:	e1500005 	cmp	r0, r5
         3e790:	caffffd4 	bgt	3e6e8 <BiGrammarClone+0x1b4>
         3e794:	e1a0000d 	mov	r0, sp
         3e798:	eb6e8a46 	bl	1be10b8 <$ExitHandler>
         3e79c:	e5bd006c 	ldr	r0, [sp, #108]!
         3e7a0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         3e7a4:	e59d006c 	ldr	r0, [sp, #108]
         3e7a8:	ebfffde7 	bl	3df4c <BiGrammarDestroy>
         3e7ac:	e1a0000d 	mov	r0, sp
         3e7b0:	eb6e8e67 	bl	1be2154 <$NextHandler>
         3e7b4:	eafffffa 	b	3e7a4 <BiGrammarClone+0x270>
    */
}

/**
 * Symbol: Bstrcpy__FPUcT1
 * Address: 00086e50
 */
void globals::Bstrcpy() {
    /*
         86e50:	e1a02000 	mov	r2, r0
         86e54:	e4d13001 	ldrb	r3, [r1], #1
         86e58:	e4c03001 	strb	r3, [r0], #1
         86e5c:	e3330000 	teq	r3, #0	; 0x0
         86e60:	1afffffb 	bne	86e54 <Bstrcpy__FPUcT1+0x4>
         86e64:	e1a00002 	mov	r0, r2
         86e68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: BATT_FAULT_InterruptHandler(void *)
 * Address: 000e6cc0
 */
BATT_FAULT_InterruptHandler(void *) {
    /*
         e6cc0:	e1a0c00d 	mov	ip, sp
         e6cc4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e6cc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6ccc:	e3a000aa 	mov	r0, #170	; 0xaa
         e6cd0:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         e6cd4:	eb6868fa 	bl	1b010c4 <$PowerOffAndReboot(long)>
         e6cd8:	e3a00000 	mov	r0, #0	; 0x0
         e6cdc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: BuildDomainsAndHeaps(unsigned long)
 * Address: 000e91f0
 */
BuildDomainsAndHeaps(unsigned long) {
    /*
         e91f0:	e1a0c00d 	mov	ip, sp
         e91f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         e91f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         e91fc:	e1a04000 	mov	r4, r0
         e9200:	e24dd034 	sub	sp, sp, #52	; 0x34
         e9204:	e3a00008 	mov	r0, #8	; 0x8
         e9208:	eb6b954a 	bl	1bce738 <$__nw(unsigned int)>
         e920c:	e3a05000 	mov	r5, #0	; 0x0
         e9210:	e3300000 	teq	r0, #0	; 0x0
         e9214:	15c05004 	strneb	r5, [r0, #4]
         e9218:	15804000 	strne	r4, [r0]
         e921c:	e1a06000 	mov	r6, r0
         e9220:	e3a07000 	mov	r7, #0	; 0x0
         e9224:	e28d2030 	add	r2, sp, #48	; 0x30
         e9228:	e28d1004 	add	r1, sp, #4	; 0x4
         e922c:	e1a00007 	mov	r0, r7
         e9230:	eb6ba9e0 	bl	1bd39b8 <$GetDomainInfo__13MemObjManagerSFUlP10DomainInfoPl>
         e9234:	e59f9050 	ldr	r9, [pc, #50]	; e928c <BuildDomainsAndHeaps(unsigned long)+0x9c>
         e9238:	e3300000 	teq	r0, #0	; 0x0
         e923c:	0a0001bc 	beq	e9934 <BuildDomainsAndHeaps(unsigned long)+0x744>
         e9240:	e59fa048 	ldr	sl, [pc, #48]	; e9290 <BuildDomainsAndHeaps(unsigned long)+0xa0>
         e9244:	e24d8020 	sub	r8, sp, #32	; 0x20
         e9248:	e28d0004 	add	r0, sp, #4	; 0x4
         e924c:	eb685b5b 	bl	1afffc0 <DomainInfo::$Name(void)>
         e9250:	e59fc03c 	ldr	ip, [pc, #3c]	; e9294 <BuildDomainsAndHeaps(unsigned long)+0xa4>
         e9254:	e130000c 	teq	r0, ip
         e9258:	0a0001ae 	beq	e9918 <BuildDomainsAndHeaps(unsigned long)+0x728>
         e925c:	e28d0004 	add	r0, sp, #4	; 0x4
         e9260:	eb6829d2 	bl	1af39b0 <DomainInfo::$Base(void)>
         e9264:	e1b00600 	movs	r0, r0, lsl #12
         e9268:	1a000003 	bne	e927c <BuildDomainsAndHeaps(unsigned long)+0x8c>
         e926c:	e28d0004 	add	r0, sp, #4	; 0x4
         e9270:	eb68743d 	bl	1b0636c <DomainInfo::$Size(void)>
         e9274:	e1b00600 	movs	r0, r0, lsl #12
         e9278:	0a000006 	beq	e9298 <BuildDomainsAndHeaps(unsigned long)+0xa8>
         e927c:	e3a000ea 	mov	r0, #234	; 0xea
         e9280:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         e9284:	e58d0030 	str	r0, [sp, #48]
         e9288:	ea000234 	b	e9b60 <BuildDomainsAndHeaps(unsigned long)+0x970>
         e928c:	0c104f48 	ldceq	15, cr4, [r0], -#288
         e9290:	0c100f78 	ldceq	15, cr0, [r0], -#480
         e9294:	6b726e6c 	blvs	1d84c4c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x1743f4>
         e9298:	e28d0004 	add	r0, sp, #4	; 0x4
         e929c:	eb684ab8 	bl	1afbd84 <DomainInfo::$HasGlobals(void)>
         e92a0:	e3300000 	teq	r0, #0	; 0x0
         e92a4:	1a000007 	bne	e92c8 <BuildDomainsAndHeaps(unsigned long)+0xd8>
         e92a8:	e28d0004 	add	r0, sp, #4	; 0x4
         e92ac:	eb684ab6 	bl	1afbd8c <DomainInfo::$HasHeap(void)>
         e92b0:	e3300000 	teq	r0, #0	; 0x0
         e92b4:	1a000003 	bne	e92c8 <BuildDomainsAndHeaps(unsigned long)+0xd8>
         e92b8:	e28d0004 	add	r0, sp, #4	; 0x4
         e92bc:	eb685b32 	bl	1afff8c <DomainInfo::$MakeHeapDomain(void)>
         e92c0:	e3300000 	teq	r0, #0	; 0x0
         e92c4:	0a000170 	beq	e988c <BuildDomainsAndHeaps(unsigned long)+0x69c>
         e92c8:	e28d0004 	add	r0, sp, #4	; 0x4
         e92cc:	eb687426 	bl	1b0636c <DomainInfo::$Size(void)>
         e92d0:	e1a04a20 	mov	r4, r0, lsr #20
         e92d4:	e28d0004 	add	r0, sp, #4	; 0x4
         e92d8:	eb6829b4 	bl	1af39b0 <DomainInfo::$Base(void)>
         e92dc:	e1a00a20 	mov	r0, r0, lsr #20
         e92e0:	e1a0200d 	mov	r2, sp
         e92e4:	e1a01004 	mov	r1, r4
         e92e8:	eb6bba2b 	bl	1bd7b9c <$NewHeapDomain>
         e92ec:	e58d0030 	str	r0, [sp, #48]
         e92f0:	e3300000 	teq	r0, #0	; 0x0
         e92f4:	1a000219 	bne	e9b60 <BuildDomainsAndHeaps(unsigned long)+0x970>
         e92f8:	e28d0004 	add	r0, sp, #4	; 0x4
         e92fc:	eb6852fd 	bl	1afdef8 <DomainInfo::$IsReadOnly(void)>
         e9300:	e3300000 	teq	r0, #0	; 0x0
         e9304:	e3a03000 	mov	r3, #0	; 0x0
         e9308:	e92d0008 	stmdb	sp!, {r3}
         e930c:	e1a00006 	mov	r0, r6
         e9310:	e59d1004 	ldr	r1, [sp, #4]
         e9314:	03a02000 	moveq	r2, #0	; 0x0
         e9318:	13a02001 	movne	r2, #1	; 0x1
         e931c:	eb6b950f 	bl	1bce760 <TUEnvironment::$Add(unsigned long, unsigned char, unsigned char, unsigned char)>
         e9320:	e28dd004 	add	sp, sp, #4	; 0x4
         e9324:	e58d0030 	str	r0, [sp, #48]
         e9328:	e3300000 	teq	r0, #0	; 0x0
         e932c:	1a00020b 	bne	e9b60 <BuildDomainsAndHeaps(unsigned long)+0x970>
         e9330:	e28d0004 	add	r0, sp, #4	; 0x4
         e9334:	eb684a92 	bl	1afbd84 <DomainInfo::$HasGlobals(void)>
         e9338:	e3300000 	teq	r0, #0	; 0x0
         e933c:	0a000050 	beq	e9484 <BuildDomainsAndHeaps(unsigned long)+0x294>
         e9340:	e24dd008 	sub	sp, sp, #8	; 0x8
         e9344:	e1a0300d 	mov	r3, sp
         e9348:	e28d2004 	add	r2, sp, #4	; 0x4
         e934c:	e92d000c 	stmdb	sp!, {r2, r3}
         e9350:	e28d0014 	add	r0, sp, #20	; 0x14
         e9354:	eb6852e7 	bl	1afdef8 <DomainInfo::$IsReadOnly(void)>
         e9358:	e1b04000 	movs	r4, r0
         e935c:	13a04002 	movne	r4, #2	; 0x2
         e9360:	e28d0014 	add	r0, sp, #20	; 0x14
         e9364:	eb6852db 	bl	1afded8 <DomainInfo::$IsCacheable(void)>
         e9368:	e3300000 	teq	r0, #0	; 0x0
         e936c:	03a00001 	moveq	r0, #1	; 0x1
         e9370:	13a00000 	movne	r0, #0	; 0x0
         e9374:	e0844000 	add	r4, r4, r0
         e9378:	e28d0014 	add	r0, sp, #20	; 0x14
         e937c:	eb683a17 	bl	1af7be0 <DomainInfo::$ExceptOnNoMem(void)>
         e9380:	e3300000 	teq	r0, #0	; 0x0
         e9384:	13a00004 	movne	r0, #4	; 0x4
         e9388:	e0845000 	add	r5, r4, r0
         e938c:	e28d0014 	add	r0, sp, #20	; 0x14
         e9390:	eb684676 	bl	1afad70 <DomainInfo::$GlobalSize(void)>
         e9394:	e1a04000 	mov	r4, r0
         e9398:	e28d0014 	add	r0, sp, #20	; 0x14
         e939c:	eb684670 	bl	1afad64 <DomainInfo::$GlobalBase(void)>
         e93a0:	e1a01000 	mov	r1, r0
         e93a4:	e1a02004 	mov	r2, r4
         e93a8:	e1a03005 	mov	r3, r5
         e93ac:	e59d0010 	ldr	r0, [sp, #16]
         e93b0:	eb6bb9f8 	bl	1bd7b98 <$NewHeapArea>
         e93b4:	e28dd008 	add	sp, sp, #8	; 0x8
         e93b8:	e58d0038 	str	r0, [sp, #56]
         e93bc:	e3300000 	teq	r0, #0	; 0x0
         e93c0:	1a00002c 	bne	e9478 <BuildDomainsAndHeaps(unsigned long)+0x288>
         e93c4:	e28d000c 	add	r0, sp, #12	; 0xc
         e93c8:	eb684665 	bl	1afad64 <DomainInfo::$GlobalBase(void)>
         e93cc:	e59d1004 	ldr	r1, [sp, #4]
         e93d0:	e1300001 	teq	r0, r1
         e93d4:	13a000ea 	movne	r0, #234	; 0xea
         e93d8:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         e93dc:	158d0038 	strne	r0, [sp, #56]
         e93e0:	1a000024 	bne	e9478 <BuildDomainsAndHeaps(unsigned long)+0x288>
         e93e4:	e28d000c 	add	r0, sp, #12	; 0xc
         e93e8:	eb684660 	bl	1afad70 <DomainInfo::$GlobalSize(void)>
         e93ec:	e1a01000 	mov	r1, r0
         e93f0:	e59d0004 	ldr	r0, [sp, #4]
         e93f4:	e0811000 	add	r1, r1, r0
         e93f8:	e2411001 	sub	r1, r1, #1	; 0x1
         e93fc:	e3a02000 	mov	r2, #0	; 0x0
         e9400:	eb6bb5d3 	bl	1bd6b54 <$LockHeapRange>
         e9404:	e58d0038 	str	r0, [sp, #56]
         e9408:	e3300000 	teq	r0, #0	; 0x0
         e940c:	1a000019 	bne	e9478 <BuildDomainsAndHeaps(unsigned long)+0x288>
         e9410:	e28d000c 	add	r0, sp, #12	; 0xc
         e9414:	eb684653 	bl	1afad68 <DomainInfo::$GlobalInitSize(void)>
         e9418:	e1a04000 	mov	r4, r0
         e941c:	e28d000c 	add	r0, sp, #12	; 0xc
         e9420:	eb684651 	bl	1afad6c <DomainInfo::$GlobalROMBase(void)>
         e9424:	e1a02004 	mov	r2, r4
         e9428:	e59d1004 	ldr	r1, [sp, #4]
         e942c:	eb6bd6c8 	bl	1bdef54 <$BlockMove>
         e9430:	e28d000c 	add	r0, sp, #12	; 0xc
         e9434:	eb68464b 	bl	1afad68 <DomainInfo::$GlobalInitSize(void)>
         e9438:	e59d1004 	ldr	r1, [sp, #4]
         e943c:	e0804001 	add	r4, r0, r1
         e9440:	e28d000c 	add	r0, sp, #12	; 0xc
         e9444:	eb68464a 	bl	1afad74 <DomainInfo::$GlobalZeroSize(void)>
         e9448:	e3a05000 	mov	r5, #0	; 0x0
         e944c:	e3500000 	cmp	r0, #0	; 0x0
         e9450:	9a000002 	bls	e9460 <BuildDomainsAndHeaps(unsigned long)+0x270>
         e9454:	e4c45001 	strb	r5, [r4], #1
         e9458:	e3500000 	cmp	r0, #0	; 0x0
         e945c:	8afffffc 	bhi	e9454 <BuildDomainsAndHeaps(unsigned long)+0x264>
         e9460:	e59d0004 	ldr	r0, [sp, #4]
         e9464:	e59d1000 	ldr	r1, [sp]
         e9468:	eb6bd28c 	bl	1bddea0 <$UnlockHeapRange>
         e946c:	e58d0038 	str	r0, [sp, #56]
         e9470:	e3300000 	teq	r0, #0	; 0x0
         e9474:	0a000001 	beq	e9480 <BuildDomainsAndHeaps(unsigned long)+0x290>
         e9478:	e28dd008 	add	sp, sp, #8	; 0x8
         e947c:	ea0001b7 	b	e9b60 <BuildDomainsAndHeaps(unsigned long)+0x970>
         e9480:	e28dd008 	add	sp, sp, #8	; 0x8
         e9484:	e28d0004 	add	r0, sp, #4	; 0x4
         e9488:	eb684a3f 	bl	1afbd8c <DomainInfo::$HasHeap(void)>
         e948c:	e3300000 	teq	r0, #0	; 0x0
         e9490:	0a0000f6 	beq	e9870 <BuildDomainsAndHeaps(unsigned long)+0x680>
         e9494:	e24dd010 	sub	sp, sp, #16	; 0x10
         e9498:	e28d0014 	add	r0, sp, #20	; 0x14
         e949c:	eb685294 	bl	1afdef4 <DomainInfo::$IsPersistent(void)>
         e94a0:	e3300000 	teq	r0, #0	; 0x0
         e94a4:	0a000006 	beq	e94c4 <BuildDomainsAndHeaps(unsigned long)+0x2d4>
         e94a8:	e28d0014 	add	r0, sp, #20	; 0x14
         e94ac:	eb684a34 	bl	1afbd84 <DomainInfo::$HasGlobals(void)>
         e94b0:	e3300000 	teq	r0, #0	; 0x0
         e94b4:	13a000ea 	movne	r0, #234	; 0xea
         e94b8:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         e94bc:	158d0040 	strne	r0, [sp, #64]
         e94c0:	1a0000e7 	bne	e9864 <BuildDomainsAndHeaps(unsigned long)+0x674>
         e94c4:	e28d0014 	add	r0, sp, #20	; 0x14
         e94c8:	eb685289 	bl	1afdef4 <DomainInfo::$IsPersistent(void)>
         e94cc:	e3300000 	teq	r0, #0	; 0x0
         e94d0:	0a0000a4 	beq	e9768 <BuildDomainsAndHeaps(unsigned long)+0x578>
         e94d4:	e24dd024 	sub	sp, sp, #36	; 0x24
         e94d8:	e1a00008 	mov	r0, r8
         e94dc:	eb681cce 	bl	1af081c <TSingleQContainer::$__ct(void)>
         e94e0:	e28d0038 	add	r0, sp, #56	; 0x38
         e94e4:	eb685ab5 	bl	1afffc0 <DomainInfo::$Name(void)>
         e94e8:	e1a0100d 	mov	r1, sp
         e94ec:	eb0a8565 	bl	38aa88 <C$$dtorvec$$Limit+0x114>
         e94f0:	e1a00008 	mov	r0, r8
         e94f4:	eb685ee8 	bl	1b0109c <TSingleQContainer::$Peek(void)>
         e94f8:	e1b04000 	movs	r4, r0
         e94fc:	0a00002f 	beq	e95c0 <BuildDomainsAndHeaps(unsigned long)+0x3d0>
         e9500:	e28d3024 	add	r3, sp, #36	; 0x24
         e9504:	e28d2028 	add	r2, sp, #40	; 0x28
         e9508:	e92d000c 	stmdb	sp!, {r2, r3}
         e950c:	e28d0040 	add	r0, sp, #64	; 0x40
         e9510:	eb685277 	bl	1afdef4 <DomainInfo::$IsPersistent(void)>
         e9514:	e1b05000 	movs	r5, r0
         e9518:	13a05101 	movne	r5, #1073741824	; 0x40000000
         e951c:	e28d0040 	add	r0, sp, #64	; 0x40
         e9520:	eb685274 	bl	1afdef8 <DomainInfo::$IsReadOnly(void)>
         e9524:	e3300000 	teq	r0, #0	; 0x0
         e9528:	13a00002 	movne	r0, #2	; 0x2
         e952c:	e0855000 	add	r5, r5, r0
         e9530:	e28d0040 	add	r0, sp, #64	; 0x40
         e9534:	eb685267 	bl	1afded8 <DomainInfo::$IsCacheable(void)>
         e9538:	e3300000 	teq	r0, #0	; 0x0
         e953c:	03a00001 	moveq	r0, #1	; 0x1
         e9540:	13a00000 	movne	r0, #0	; 0x0
         e9544:	e0853000 	add	r3, r5, r0
         e9548:	e59d003c 	ldr	r0, [sp, #60]
         e954c:	e28d2010 	add	r2, sp, #16	; 0x10
         e9550:	e8920006 	ldmia	r2, {r1, r2}
         e9554:	eb6bb98f 	bl	1bd7b98 <$NewHeapArea>
         e9558:	e28dd008 	add	sp, sp, #8	; 0x8
         e955c:	e5940018 	ldr	r0, [r4, #24]
         e9560:	e3700601 	cmn	r0, #1048576	; 0x100000
         e9564:	0a00000a 	beq	e9594 <BuildDomainsAndHeaps(unsigned long)+0x3a4>
         e9568:	e1a02004 	mov	r2, r4
         e956c:	e28d002c 	add	r0, sp, #44	; 0x2c
         e9570:	e3a01000 	mov	r1, #0	; 0x0
         e9574:	eb685a82 	bl	1afff84 <$Make__12TPageManagerSFRUlUlP11TLittlePhys>
         e9578:	e5941018 	ldr	r1, [r4, #24]
         e957c:	e59d0034 	ldr	r0, [sp, #52]
         e9580:	e59d202c 	ldr	r2, [sp, #44]
         e9584:	eb6824e0 	bl	1af290c <$AddPageMappingToDomain>
         e9588:	e58d0064 	str	r0, [sp, #100]
         e958c:	e3300000 	teq	r0, #0	; 0x0
         e9590:	1a000064 	bne	e9728 <BuildDomainsAndHeaps(unsigned long)+0x538>
         e9594:	e1a00008 	mov	r0, r8
         e9598:	e1a01004 	mov	r1, r4
         e959c:	eb6841cf 	bl	1af9ce0 <TSingleQContainer::$GetNext(void *)>
         e95a0:	e1b04000 	movs	r4, r0
         e95a4:	1affffec 	bne	e955c <BuildDomainsAndHeaps(unsigned long)+0x36c>
         e95a8:	e28d0038 	add	r0, sp, #56	; 0x38
         e95ac:	eb00d1f6 	bl	11dd8c <DomainInfo::IsHunkOMemory(void)>
         e95b0:	e3300000 	teq	r0, #0	; 0x0
         e95b4:	059d0004 	ldreq	r0, [sp, #4]
         e95b8:	0b6be2ec 	bleq	1be2170 <$ResurrectVMHeap>
         e95bc:	ea000063 	b	e9750 <BuildDomainsAndHeaps(unsigned long)+0x560>
         e95c0:	e28d0038 	add	r0, sp, #56	; 0x38
         e95c4:	eb00d1f0 	bl	11dd8c <DomainInfo::IsHunkOMemory(void)>
         e95c8:	e3300000 	teq	r0, #0	; 0x0
         e95cc:	e28d0038 	add	r0, sp, #56	; 0x38
         e95d0:	0a000035 	beq	e96ac <BuildDomainsAndHeaps(unsigned long)+0x4bc>
         e95d4:	eb6849ee 	bl	1afbd94 <DomainInfo::$HeapSize(void)>
         e95d8:	e1a05000 	mov	r5, r0
         e95dc:	e28d0038 	add	r0, sp, #56	; 0x38
         e95e0:	eb685a76 	bl	1afffc0 <DomainInfo::$Name(void)>
         e95e4:	e59fc0bc 	ldr	ip, [pc, #bc]	; e96a8 <BuildDomainsAndHeaps(unsigned long)+0x4b8>
         e95e8:	e130000c 	teq	r0, ip
         e95ec:	1a000003 	bne	e9600 <BuildDomainsAndHeaps(unsigned long)+0x410>
         e95f0:	e3a00001 	mov	r0, #1	; 0x1
         e95f4:	eb6c5ea8 	bl	1c0109c <$InternalStoreInfo>
         e95f8:	e58a0000 	str	r0, [sl]
         e95fc:	e1a05000 	mov	r5, r0
         e9600:	e28d3024 	add	r3, sp, #36	; 0x24
         e9604:	e28d2028 	add	r2, sp, #40	; 0x28
         e9608:	e92d000c 	stmdb	sp!, {r2, r3}
         e960c:	e28d0040 	add	r0, sp, #64	; 0x40
         e9610:	eb685238 	bl	1afdef8 <DomainInfo::$IsReadOnly(void)>
         e9614:	e1b04000 	movs	r4, r0
         e9618:	13a04002 	movne	r4, #2	; 0x2
         e961c:	e28d0040 	add	r0, sp, #64	; 0x40
         e9620:	eb68522c 	bl	1afded8 <DomainInfo::$IsCacheable(void)>
         e9624:	e3300000 	teq	r0, #0	; 0x0
         e9628:	03a00001 	moveq	r0, #1	; 0x1
         e962c:	13a00000 	movne	r0, #0	; 0x0
         e9630:	e0844000 	add	r4, r4, r0
         e9634:	e28d0040 	add	r0, sp, #64	; 0x40
         e9638:	eb6828dc 	bl	1af39b0 <DomainInfo::$Base(void)>
         e963c:	e2801902 	add	r1, r0, #32768	; 0x8000
         e9640:	e1a02005 	mov	r2, r5
         e9644:	e1a03004 	mov	r3, r4
         e9648:	e59d003c 	ldr	r0, [sp, #60]
         e964c:	eb6bb951 	bl	1bd7b98 <$NewHeapArea>
         e9650:	e28dd008 	add	sp, sp, #8	; 0x8
         e9654:	e58d0064 	str	r0, [sp, #100]
         e9658:	e3300000 	teq	r0, #0	; 0x0
         e965c:	1a000031 	bne	e9728 <BuildDomainsAndHeaps(unsigned long)+0x538>
         e9660:	e59d0028 	ldr	r0, [sp, #40]
         e9664:	e58d0030 	str	r0, [sp, #48]
         e9668:	e0801005 	add	r1, r0, r5
         e966c:	e2411001 	sub	r1, r1, #1	; 0x1
         e9670:	eb6bc9d3 	bl	1bdbdc4 <$SetHeapLimits>
         e9674:	e58d0064 	str	r0, [sp, #100]
         e9678:	e59d0028 	ldr	r0, [sp, #40]
         e967c:	e0801005 	add	r1, r0, r5
         e9680:	e2411001 	sub	r1, r1, #1	; 0x1
         e9684:	e3a02000 	mov	r2, #0	; 0x0
         e9688:	eb6bb531 	bl	1bd6b54 <$LockHeapRange>
         e968c:	e58d0064 	str	r0, [sp, #100]
         e9690:	e59d0028 	ldr	r0, [sp, #40]
         e9694:	e0801005 	add	r1, r0, r5
         e9698:	e2411001 	sub	r1, r1, #1	; 0x1
         e969c:	eb6bd1ff 	bl	1bddea0 <$UnlockHeapRange>
         e96a0:	e58d0064 	str	r0, [sp, #100]
         e96a4:	ea000021 	b	e9730 <BuildDomainsAndHeaps(unsigned long)+0x540>
         e96a8:	72616d73 	rsbvc	r6, r1, #7360	; 0x1cc0
         e96ac:	eb685210 	bl	1afdef4 <DomainInfo::$IsPersistent(void)>
         e96b0:	e1b04000 	movs	r4, r0
         e96b4:	13a04101 	movne	r4, #1073741824	; 0x40000000
         e96b8:	e28d0038 	add	r0, sp, #56	; 0x38
         e96bc:	eb68520d 	bl	1afdef8 <DomainInfo::$IsReadOnly(void)>
         e96c0:	e3300000 	teq	r0, #0	; 0x0
         e96c4:	13a00002 	movne	r0, #2	; 0x2
         e96c8:	e0844000 	add	r4, r4, r0
         e96cc:	e28d0038 	add	r0, sp, #56	; 0x38
         e96d0:	eb685200 	bl	1afded8 <DomainInfo::$IsCacheable(void)>
         e96d4:	e3300000 	teq	r0, #0	; 0x0
         e96d8:	03a00001 	moveq	r0, #1	; 0x1
         e96dc:	13a00000 	movne	r0, #0	; 0x0
         e96e0:	e0844000 	add	r4, r4, r0
         e96e4:	e28d0038 	add	r0, sp, #56	; 0x38
         e96e8:	eb6849a9 	bl	1afbd94 <DomainInfo::$HeapSize(void)>
         e96ec:	e1a01000 	mov	r1, r0
         e96f0:	e28d2030 	add	r2, sp, #48	; 0x30
         e96f4:	e1a03004 	mov	r3, r4
         e96f8:	e59d0034 	ldr	r0, [sp, #52]
         e96fc:	eb6be292 	bl	1be214c <$NewVMHeap>
         e9700:	e58d0064 	str	r0, [sp, #100]
         e9704:	e3300000 	teq	r0, #0	; 0x0
         e9708:	1a000006 	bne	e9728 <BuildDomainsAndHeaps(unsigned long)+0x538>
         e970c:	e28d2024 	add	r2, sp, #36	; 0x24
         e9710:	e28d1028 	add	r1, sp, #40	; 0x28
         e9714:	e59d0030 	ldr	r0, [sp, #48]
         e9718:	eb6ba8af 	bl	1bd39dc <$GetHeapAreaInfo>
         e971c:	e58d0064 	str	r0, [sp, #100]
         e9720:	e3300000 	teq	r0, #0	; 0x0
         e9724:	0a000001 	beq	e9730 <BuildDomainsAndHeaps(unsigned long)+0x540>
         e9728:	e28dd034 	add	sp, sp, #52	; 0x34
         e972c:	ea00010b 	b	e9b60 <BuildDomainsAndHeaps(unsigned long)+0x970>
         e9730:	e59d0028 	ldr	r0, [sp, #40]
         e9734:	e1a01000 	mov	r1, r0
         e9738:	e59d3024 	ldr	r3, [sp, #36]
         e973c:	e0430000 	sub	r0, r3, r0
         e9740:	e59d2030 	ldr	r2, [sp, #48]
         e9744:	e58d000c 	str	r0, [sp, #12]
         e9748:	e58d1008 	str	r1, [sp, #8]
         e974c:	e58d2004 	str	r2, [sp, #4]
         e9750:	e28d0038 	add	r0, sp, #56	; 0x38
         e9754:	eb685a19 	bl	1afffc0 <DomainInfo::$Name(void)>
         e9758:	e1a0100d 	mov	r1, sp
         e975c:	eb0a850e 	bl	38ab9c <C$$dtorvec$$Limit+0x228>
         e9760:	e28dd024 	add	sp, sp, #36	; 0x24
         e9764:	ea000040 	b	e986c <BuildDomainsAndHeaps(unsigned long)+0x67c>
         e9768:	e28d0014 	add	r0, sp, #20	; 0x14
         e976c:	eb6855ee 	bl	1afef2c <DomainInfo::$IsSegregated(void)>
         e9770:	e3300000 	teq	r0, #0	; 0x0
         e9774:	e28d0014 	add	r0, sp, #20	; 0x14
         e9778:	0a00001a 	beq	e97e8 <BuildDomainsAndHeaps(unsigned long)+0x5f8>
         e977c:	eb6851dc 	bl	1afdef4 <DomainInfo::$IsPersistent(void)>
         e9780:	e1b04000 	movs	r4, r0
         e9784:	13a04101 	movne	r4, #1073741824	; 0x40000000
         e9788:	e28d0014 	add	r0, sp, #20	; 0x14
         e978c:	eb6851d9 	bl	1afdef8 <DomainInfo::$IsReadOnly(void)>
         e9790:	e3300000 	teq	r0, #0	; 0x0
         e9794:	13a00002 	movne	r0, #2	; 0x2
         e9798:	e0844000 	add	r4, r4, r0
         e979c:	e28d0014 	add	r0, sp, #20	; 0x14
         e97a0:	eb6851cc 	bl	1afded8 <DomainInfo::$IsCacheable(void)>
         e97a4:	e3300000 	teq	r0, #0	; 0x0
         e97a8:	03a00001 	moveq	r0, #1	; 0x1
         e97ac:	13a00000 	movne	r0, #0	; 0x0
         e97b0:	e0843000 	add	r3, r4, r0
         e97b4:	e92d0008 	stmdb	sp!, {r3}
         e97b8:	e28d0018 	add	r0, sp, #24	; 0x18
         e97bc:	eb68456e 	bl	1afad7c <DomainInfo::$HandleHeapSize(void)>
         e97c0:	e1a04000 	mov	r4, r0
         e97c4:	e28d0018 	add	r0, sp, #24	; 0x18
         e97c8:	eb684971 	bl	1afbd94 <DomainInfo::$HeapSize(void)>
         e97cc:	e1a01000 	mov	r1, r0
         e97d0:	e28d3010 	add	r3, sp, #16	; 0x10
         e97d4:	e1a02004 	mov	r2, r4
         e97d8:	e59d0014 	ldr	r0, [sp, #20]
         e97dc:	eb6be259 	bl	1be2148 <$NewSegregatedVMHeap>
         e97e0:	e28dd004 	add	sp, sp, #4	; 0x4
         e97e4:	ea000014 	b	e983c <BuildDomainsAndHeaps(unsigned long)+0x64c>
         e97e8:	eb6851c1 	bl	1afdef4 <DomainInfo::$IsPersistent(void)>
         e97ec:	e1b04000 	movs	r4, r0
         e97f0:	13a04101 	movne	r4, #1073741824	; 0x40000000
         e97f4:	e28d0014 	add	r0, sp, #20	; 0x14
         e97f8:	eb6851be 	bl	1afdef8 <DomainInfo::$IsReadOnly(void)>
         e97fc:	e3300000 	teq	r0, #0	; 0x0
         e9800:	13a00002 	movne	r0, #2	; 0x2
         e9804:	e0844000 	add	r4, r4, r0
         e9808:	e28d0014 	add	r0, sp, #20	; 0x14
         e980c:	eb6851b1 	bl	1afded8 <DomainInfo::$IsCacheable(void)>
         e9810:	e3300000 	teq	r0, #0	; 0x0
         e9814:	03a00001 	moveq	r0, #1	; 0x1
         e9818:	13a00000 	movne	r0, #0	; 0x0
         e981c:	e0844000 	add	r4, r4, r0
         e9820:	e28d0014 	add	r0, sp, #20	; 0x14
         e9824:	eb68495a 	bl	1afbd94 <DomainInfo::$HeapSize(void)>
         e9828:	e1a01000 	mov	r1, r0
         e982c:	e28d200c 	add	r2, sp, #12	; 0xc
         e9830:	e1a03004 	mov	r3, r4
         e9834:	e59d0010 	ldr	r0, [sp, #16]
         e9838:	eb6be243 	bl	1be214c <$NewVMHeap>
         e983c:	e58d0040 	str	r0, [sp, #64]
         e9840:	e3300000 	teq	r0, #0	; 0x0
         e9844:	1a000006 	bne	e9864 <BuildDomainsAndHeaps(unsigned long)+0x674>
         e9848:	e28d0014 	add	r0, sp, #20	; 0x14
         e984c:	eb6859db 	bl	1afffc0 <DomainInfo::$Name(void)>
         e9850:	e59d100c 	ldr	r1, [sp, #12]
         e9854:	eb6bbd03 	bl	1bd8c68 <$RegisterHeapRef__13MemObjManagerSFUlPv>
         e9858:	e58d0040 	str	r0, [sp, #64]
         e985c:	e3300000 	teq	r0, #0	; 0x0
         e9860:	0a000001 	beq	e986c <BuildDomainsAndHeaps(unsigned long)+0x67c>
         e9864:	e28dd010 	add	sp, sp, #16	; 0x10
         e9868:	ea0000bc 	b	e9b60 <BuildDomainsAndHeaps(unsigned long)+0x970>
         e986c:	e28dd010 	add	sp, sp, #16	; 0x10
         e9870:	e1a00006 	mov	r0, r6
         e9874:	e59d1000 	ldr	r1, [sp]
         e9878:	eb6bc112 	bl	1bd9cc8 <TUEnvironment::$Remove(unsigned long)>
         e987c:	e58d0030 	str	r0, [sp, #48]
         e9880:	e3300000 	teq	r0, #0	; 0x0
         e9884:	1a0000b5 	bne	e9b60 <BuildDomainsAndHeaps(unsigned long)+0x970>
         e9888:	ea00001b 	b	e98fc <BuildDomainsAndHeaps(unsigned long)+0x70c>
         e988c:	e24dd008 	sub	sp, sp, #8	; 0x8
         e9890:	e3a05000 	mov	r5, #0	; 0x0
         e9894:	e5cd5004 	strb	r5, [sp, #4]
         e9898:	e58d5000 	str	r5, [sp]
         e989c:	e28d000c 	add	r0, sp, #12	; 0xc
         e98a0:	eb6872b1 	bl	1b0636c <DomainInfo::$Size(void)>
         e98a4:	e1a04000 	mov	r4, r0
         e98a8:	e28d000c 	add	r0, sp, #12	; 0xc
         e98ac:	eb68283f 	bl	1af39b0 <DomainInfo::$Base(void)>
         e98b0:	e1a02000 	mov	r2, r0
         e98b4:	e1a0000d 	mov	r0, sp
         e98b8:	e3a01000 	mov	r1, #0	; 0x0
         e98bc:	e1a03004 	mov	r3, r4
         e98c0:	eb6bb081 	bl	1bd5acc <TUDomain::$Init(unsigned long, unsigned long, unsigned long)>
         e98c4:	e58d0038 	str	r0, [sp, #56]
         e98c8:	e3300000 	teq	r0, #0	; 0x0
         e98cc:	0a000003 	beq	e98e0 <BuildDomainsAndHeaps(unsigned long)+0x6f0>
         e98d0:	e1a0000d 	mov	r0, sp
         e98d4:	e3a01000 	mov	r1, #0	; 0x0
         e98d8:	eb6b9391 	bl	1bce724 <TUObject::$__dt(void)>
         e98dc:	eafffee5 	b	e9478 <BuildDomainsAndHeaps(unsigned long)+0x288>
         e98e0:	e5cd5004 	strb	r5, [sp, #4]
         e98e4:	e59d0000 	ldr	r0, [sp]
         e98e8:	e58d0008 	str	r0, [sp, #8]
         e98ec:	e1a0000d 	mov	r0, sp
         e98f0:	e3a01000 	mov	r1, #0	; 0x0
         e98f4:	eb6b938a 	bl	1bce724 <TUObject::$__dt(void)>
         e98f8:	e28dd008 	add	sp, sp, #8	; 0x8
         e98fc:	e28d0004 	add	r0, sp, #4	; 0x4
         e9900:	eb6859ae 	bl	1afffc0 <DomainInfo::$Name(void)>
         e9904:	e59d1000 	ldr	r1, [sp]
         e9908:	eb6bbcd1 	bl	1bd8c54 <$RegisterDomainId__13MemObjManagerSFUlT1>
         e990c:	e58d0030 	str	r0, [sp, #48]
         e9910:	e3300000 	teq	r0, #0	; 0x0
         e9914:	1a000091 	bne	e9b60 <BuildDomainsAndHeaps(unsigned long)+0x970>
         e9918:	e2877001 	add	r7, r7, #1	; 0x1
         e991c:	e28d2030 	add	r2, sp, #48	; 0x30
         e9920:	e28d1004 	add	r1, sp, #4	; 0x4
         e9924:	e1a00007 	mov	r0, r7
         e9928:	eb6ba822 	bl	1bd39b8 <$GetDomainInfo__13MemObjManagerSFUlP10DomainInfoPl>
         e992c:	e3300000 	teq	r0, #0	; 0x0
         e9930:	1afffe44 	bne	e9248 <BuildDomainsAndHeaps(unsigned long)+0x58>
         e9934:	e24dd018 	sub	sp, sp, #24	; 0x18
         e9938:	e3a00000 	mov	r0, #0	; 0x0
         e993c:	e3a07001 	mov	r7, #1	; 0x1
         e9940:	e28d2048 	add	r2, sp, #72	; 0x48
         e9944:	e28d1014 	add	r1, sp, #20	; 0x14
         e9948:	eb6bac31 	bl	1bd4a14 <$GetPersistentRef__13MemObjManagerSFUlPP17PersistentDBEntryPl>
         e994c:	e3300000 	teq	r0, #0	; 0x0
         e9950:	0a000081 	beq	e9b5c <BuildDomainsAndHeaps(unsigned long)+0x96c>
         e9954:	e59d1014 	ldr	r1, [sp, #20]
         e9958:	e5910020 	ldr	r0, [r1, #32]
         e995c:	e3100040 	tst	r0, #64	; 0x40
         e9960:	1a000076 	bne	e9b40 <BuildDomainsAndHeaps(unsigned long)+0x950>
         e9964:	e5911000 	ldr	r1, [r1]
         e9968:	e59f4150 	ldr	r4, [pc, #150]	; e9ac0 <BuildDomainsAndHeaps(unsigned long)+0x8d0>
         e996c:	e1310004 	teq	r1, r4
         e9970:	0a000072 	beq	e9b40 <BuildDomainsAndHeaps(unsigned long)+0x950>
         e9974:	e1a00800 	mov	r0, r0, lsl #16
         e9978:	e1a00c20 	mov	r0, r0, lsr #24
         e997c:	e28d2048 	add	r2, sp, #72	; 0x48
         e9980:	e28d101c 	add	r1, sp, #28	; 0x1c
         e9984:	eb6ba80b 	bl	1bd39b8 <$GetDomainInfo__13MemObjManagerSFUlP10DomainInfoPl>
         e9988:	e3300000 	teq	r0, #0	; 0x0
         e998c:	0a00005b 	beq	e9b00 <BuildDomainsAndHeaps(unsigned long)+0x910>
         e9990:	e28d001c 	add	r0, sp, #28	; 0x1c
         e9994:	eb685989 	bl	1afffc0 <DomainInfo::$Name(void)>
         e9998:	e59d1014 	ldr	r1, [sp, #20]
         e999c:	e591201c 	ldr	r2, [r1, #28]
         e99a0:	e1300002 	teq	r0, r2
         e99a4:	1a000055 	bne	e9b00 <BuildDomainsAndHeaps(unsigned long)+0x910>
         e99a8:	e2810014 	add	r0, r1, #20	; 0x14
         e99ac:	eb685dba 	bl	1b0109c <TSingleQContainer::$Peek(void)>
         e99b0:	e1a05000 	mov	r5, r0
         e99b4:	e28d001c 	add	r0, sp, #28	; 0x1c
         e99b8:	eb685980 	bl	1afffc0 <DomainInfo::$Name(void)>
         e99bc:	e28d100c 	add	r1, sp, #12	; 0xc
         e99c0:	eb0a8424 	bl	38aa58 <C$$dtorvec$$Limit+0xe4>
         e99c4:	e58d0048 	str	r0, [sp, #72]
         e99c8:	e3300000 	teq	r0, #0	; 0x0
         e99cc:	1a000062 	bne	e9b5c <BuildDomainsAndHeaps(unsigned long)+0x96c>
         e99d0:	e59d1010 	ldr	r1, [sp, #16]
         e99d4:	e3a03000 	mov	r3, #0	; 0x0
         e99d8:	e58d1018 	str	r1, [sp, #24]
         e99dc:	e92d0008 	stmdb	sp!, {r3}
         e99e0:	e1a00006 	mov	r0, r6
         e99e4:	e3a02000 	mov	r2, #0	; 0x0
         e99e8:	eb6b935c 	bl	1bce760 <TUEnvironment::$Add(unsigned long, unsigned char, unsigned char, unsigned char)>
         e99ec:	e28dd004 	add	sp, sp, #4	; 0x4
         e99f0:	e58d0048 	str	r0, [sp, #72]
         e99f4:	e3300000 	teq	r0, #0	; 0x0
         e99f8:	1a000057 	bne	e9b5c <BuildDomainsAndHeaps(unsigned long)+0x96c>
         e99fc:	e1a0300d 	mov	r3, sp
         e9a00:	e28d2004 	add	r2, sp, #4	; 0x4
         e9a04:	e92d000c 	stmdb	sp!, {r2, r3}
         e9a08:	e28d0024 	add	r0, sp, #36	; 0x24
         e9a0c:	eb685139 	bl	1afdef8 <DomainInfo::$IsReadOnly(void)>
         e9a10:	e1b08000 	movs	r8, r0
         e9a14:	13a08002 	movne	r8, #2	; 0x2
         e9a18:	e28d0024 	add	r0, sp, #36	; 0x24
         e9a1c:	eb68512d 	bl	1afded8 <DomainInfo::$IsCacheable(void)>
         e9a20:	e3300000 	teq	r0, #0	; 0x0
         e9a24:	03a00001 	moveq	r0, #1	; 0x1
         e9a28:	13a00000 	movne	r0, #0	; 0x0
         e9a2c:	e0880000 	add	r0, r8, r0
         e9a30:	e2803101 	add	r3, r0, #1073741824	; 0x40000000
         e9a34:	e59d001c 	ldr	r0, [sp, #28]
         e9a38:	e2800004 	add	r0, r0, #4	; 0x4
         e9a3c:	e9b00006 	ldmib	r0!, {r1, r2}
         e9a40:	e59d0020 	ldr	r0, [sp, #32]
         e9a44:	eb6bb853 	bl	1bd7b98 <$NewHeapArea>
         e9a48:	e28dd008 	add	sp, sp, #8	; 0x8
         e9a4c:	e3350000 	teq	r5, #0	; 0x0
         e9a50:	0a00001b 	beq	e9ac4 <BuildDomainsAndHeaps(unsigned long)+0x8d4>
         e9a54:	e5950018 	ldr	r0, [r5, #24]
         e9a58:	e3700601 	cmn	r0, #1048576	; 0x100000
         e9a5c:	0a00000a 	beq	e9a8c <BuildDomainsAndHeaps(unsigned long)+0x89c>
         e9a60:	e1a02005 	mov	r2, r5
         e9a64:	e28d0008 	add	r0, sp, #8	; 0x8
         e9a68:	e3a01000 	mov	r1, #0	; 0x0
         e9a6c:	eb685944 	bl	1afff84 <$Make__12TPageManagerSFRUlUlP11TLittlePhys>
         e9a70:	e5951018 	ldr	r1, [r5, #24]
         e9a74:	e59d0018 	ldr	r0, [sp, #24]
         e9a78:	e59d2008 	ldr	r2, [sp, #8]
         e9a7c:	eb6823a2 	bl	1af290c <$AddPageMappingToDomain>
         e9a80:	e58d0048 	str	r0, [sp, #72]
         e9a84:	e3300000 	teq	r0, #0	; 0x0
         e9a88:	1a000033 	bne	e9b5c <BuildDomainsAndHeaps(unsigned long)+0x96c>
         e9a8c:	e59d0014 	ldr	r0, [sp, #20]
         e9a90:	e2800014 	add	r0, r0, #20	; 0x14
         e9a94:	e1a01005 	mov	r1, r5
         e9a98:	eb684090 	bl	1af9ce0 <TSingleQContainer::$GetNext(void *)>
         e9a9c:	e1b05000 	movs	r5, r0
         e9aa0:	1affffeb 	bne	e9a54 <BuildDomainsAndHeaps(unsigned long)+0x864>
         e9aa4:	e28d001c 	add	r0, sp, #28	; 0x1c
         e9aa8:	eb00d0b7 	bl	11dd8c <DomainInfo::IsHunkOMemory(void)>
         e9aac:	e3300000 	teq	r0, #0	; 0x0
         e9ab0:	059d0014 	ldreq	r0, [sp, #20]
         e9ab4:	05900004 	ldreq	r0, [r0, #4]
         e9ab8:	0b6be1ac 	bleq	1be2170 <$ResurrectVMHeap>
         e9abc:	ea000009 	b	e9ae8 <BuildDomainsAndHeaps(unsigned long)+0x8f8>
         e9ac0:	656d7479 	strvsb	r7, [sp, -#1145]!
         e9ac4:	e3e03000 	mvn	r3, #0	; 0x0
         e9ac8:	e3a02001 	mov	r2, #1	; 0x1
         e9acc:	e1a01004 	mov	r1, r4
         e9ad0:	e59d0014 	ldr	r0, [sp, #20]
         e9ad4:	eb684cce 	bl	1afce14 <PersistentDBEntry::$Init(unsigned long, unsigned char, unsigned long)>
         e9ad8:	e59d0014 	ldr	r0, [sp, #20]
         e9adc:	e5901020 	ldr	r1, [r0, #32]
         e9ae0:	e3c11040 	bic	r1, r1, #64	; 0x40
         e9ae4:	e5a01020 	str	r1, [r0, #32]!
         e9ae8:	e1a00006 	mov	r0, r6
         e9aec:	e59d1018 	ldr	r1, [sp, #24]
         e9af0:	eb6bc074 	bl	1bd9cc8 <TUEnvironment::$Remove(unsigned long)>
         e9af4:	e58d0048 	str	r0, [sp, #72]
         e9af8:	e3300000 	teq	r0, #0	; 0x0
         e9afc:	1a000016 	bne	e9b5c <BuildDomainsAndHeaps(unsigned long)+0x96c>
         e9b00:	e59d0014 	ldr	r0, [sp, #20]
         e9b04:	e2800014 	add	r0, r0, #20	; 0x14
         e9b08:	eb685d63 	bl	1b0109c <TSingleQContainer::$Peek(void)>
         e9b0c:	e1b04000 	movs	r4, r0
         e9b10:	0a00000a 	beq	e9b40 <BuildDomainsAndHeaps(unsigned long)+0x950>
         e9b14:	e5940018 	ldr	r0, [r4, #24]
         e9b18:	e3700601 	cmn	r0, #1048576	; 0x100000
         e9b1c:	01a01004 	moveq	r1, r4
         e9b20:	05990000 	ldreq	r0, [r9]
         e9b24:	0b686175 	bleq	1b02100 <TPageTracker::$Put(TLittlePhys *)>
         e9b28:	e59d0014 	ldr	r0, [sp, #20]
         e9b2c:	e2800014 	add	r0, r0, #20	; 0x14
         e9b30:	e1a01004 	mov	r1, r4
         e9b34:	eb684069 	bl	1af9ce0 <TSingleQContainer::$GetNext(void *)>
         e9b38:	e1b04000 	movs	r4, r0
         e9b3c:	1afffff4 	bne	e9b14 <BuildDomainsAndHeaps(unsigned long)+0x924>
         e9b40:	e1a00007 	mov	r0, r7
         e9b44:	e2877001 	add	r7, r7, #1	; 0x1
         e9b48:	e28d2048 	add	r2, sp, #72	; 0x48
         e9b4c:	e28d1014 	add	r1, sp, #20	; 0x14
         e9b50:	eb6babaf 	bl	1bd4a14 <$GetPersistentRef__13MemObjManagerSFUlPP17PersistentDBEntryPl>
         e9b54:	e3300000 	teq	r0, #0	; 0x0
         e9b58:	1affff7d 	bne	e9954 <BuildDomainsAndHeaps(unsigned long)+0x764>
         e9b5c:	e28dd018 	add	sp, sp, #24	; 0x18
         e9b60:	e3360000 	teq	r6, #0	; 0x0
         e9b64:	0a000004 	beq	e9b7c <BuildDomainsAndHeaps(unsigned long)+0x98c>
         e9b68:	e1a00006 	mov	r0, r6
         e9b6c:	e3a01000 	mov	r1, #0	; 0x0
         e9b70:	eb6b92eb 	bl	1bce724 <TUObject::$__dt(void)>
         e9b74:	e1a00006 	mov	r0, r6
         e9b78:	eb6b8ed8 	bl	1bcd6e0 <$__dl(void *)>
         e9b7c:	e59d0030 	ldr	r0, [sp, #48]
         e9b80:	e3300000 	teq	r0, #0	; 0x0
         e9b84:	0a000004 	beq	e9b9c <BuildDomainsAndHeaps(unsigned long)+0x9ac>
         e9b88:	e3a02000 	mov	r2, #0	; 0x0
         e9b8c:	e59f1090 	ldr	r1, [pc, #90]	; e9c24 <BuildDomainsAndHeaps(unsigned long)+0xa34>
         e9b90:	e3a000a4 	mov	r0, #164	; 0xa4
         e9b94:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         e9b98:	eb6c16fe 	bl	1bef798 <$Reboot(long, unsigned long, unsigned char)>
         e9b9c:	e24dd004 	sub	sp, sp, #4	; 0x4
         e9ba0:	e3a00000 	mov	r0, #0	; 0x0
         e9ba4:	e3a05001 	mov	r5, #1	; 0x1
         e9ba8:	e28d2034 	add	r2, sp, #52	; 0x34
         e9bac:	e1a0100d 	mov	r1, sp
         e9bb0:	eb6bab97 	bl	1bd4a14 <$GetPersistentRef__13MemObjManagerSFUlPP17PersistentDBEntryPl>
         e9bb4:	e3300000 	teq	r0, #0	; 0x0
         e9bb8:	0a000016 	beq	e9c18 <BuildDomainsAndHeaps(unsigned long)+0xa28>
         e9bbc:	e59d0000 	ldr	r0, [sp]
         e9bc0:	e2800014 	add	r0, r0, #20	; 0x14
         e9bc4:	eb685d34 	bl	1b0109c <TSingleQContainer::$Peek(void)>
         e9bc8:	e1b04000 	movs	r4, r0
         e9bcc:	0a00000a 	beq	e9bfc <BuildDomainsAndHeaps(unsigned long)+0xa0c>
         e9bd0:	e5940018 	ldr	r0, [r4, #24]
         e9bd4:	e3700601 	cmn	r0, #1048576	; 0x100000
         e9bd8:	01a01004 	moveq	r1, r4
         e9bdc:	05990000 	ldreq	r0, [r9]
         e9be0:	0b686146 	bleq	1b02100 <TPageTracker::$Put(TLittlePhys *)>
         e9be4:	e59d0000 	ldr	r0, [sp]
         e9be8:	e2800014 	add	r0, r0, #20	; 0x14
         e9bec:	e1a01004 	mov	r1, r4
         e9bf0:	eb68403a 	bl	1af9ce0 <TSingleQContainer::$GetNext(void *)>
         e9bf4:	e1b04000 	movs	r4, r0
         e9bf8:	1afffff4 	bne	e9bd0 <BuildDomainsAndHeaps(unsigned long)+0x9e0>
         e9bfc:	e1a00005 	mov	r0, r5
         e9c00:	e2855001 	add	r5, r5, #1	; 0x1
         e9c04:	e28d2034 	add	r2, sp, #52	; 0x34
         e9c08:	e1a0100d 	mov	r1, sp
         e9c0c:	eb6bab80 	bl	1bd4a14 <$GetPersistentRef__13MemObjManagerSFUlPP17PersistentDBEntryPl>
         e9c10:	e3300000 	teq	r0, #0	; 0x0
         e9c14:	1affffe8 	bne	e9bbc <BuildDomainsAndHeaps(unsigned long)+0x9cc>
         e9c18:	e28dd004 	add	sp, sp, #4	; 0x4
         e9c1c:	e59d0030 	ldr	r0, [sp, #48]
         e9c20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         e9c24:	424c5447 	submi	r5, ip, #1191182336	; 0x47000000
    */
}

/**
 * Symbol: BuildEnvironments(void)
 * Address: 000e9c28
 */
BuildEnvironments(void) {
    /*
         e9c28:	e1a0c00d 	mov	ip, sp
         e9c2c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         e9c30:	e24cb004 	sub	fp, ip, #4	; 0x4
         e9c34:	e24dd018 	sub	sp, sp, #24	; 0x18
         e9c38:	e3a05000 	mov	r5, #0	; 0x0
         e9c3c:	e28d2014 	add	r2, sp, #20	; 0x14
         e9c40:	e1a0100d 	mov	r1, sp
         e9c44:	e1a00005 	mov	r0, r5
         e9c48:	eb6ba75e 	bl	1bd39c8 <$GetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfoPl>
         e9c4c:	e3300000 	teq	r0, #0	; 0x0
         e9c50:	0a000089 	beq	e9e7c <BuildEnvironments(void)+0x254>
         e9c54:	e59f905c 	ldr	r9, [pc, #5c]	; e9cb8 <BuildEnvironments(void)+0x90>
         e9c58:	e3a0a000 	mov	sl, #0	; 0x0
         e9c5c:	e1a0000d 	mov	r0, sp
         e9c60:	eb6858d7 	bl	1afffc4 <EnvironmentInfo::$Name(void)>
         e9c64:	e1a06000 	mov	r6, r0
         e9c68:	e24dd00c 	sub	sp, sp, #12	; 0xc
         e9c6c:	e3a00000 	mov	r0, #0	; 0x0
         e9c70:	e58d0008 	str	r0, [sp, #8]
         e9c74:	e5cda004 	strb	sl, [sp, #4]
         e9c78:	e58da000 	str	sl, [sp]
         e9c7c:	e59f4038 	ldr	r4, [pc, #38]	; e9cbc <BuildEnvironments(void)+0x94>
         e9c80:	e1360004 	teq	r6, r4
         e9c84:	1a000012 	bne	e9cd4 <BuildEnvironments(void)+0xac>
         e9c88:	e24dd004 	sub	sp, sp, #4	; 0x4
         e9c8c:	e1a0100d 	mov	r1, sp
         e9c90:	e1a00006 	mov	r0, r6
         e9c94:	eb6ba319 	bl	1bd2900 <$FindEnvironmentId__13MemObjManagerSFUlPUl>
         e9c98:	e58d0024 	str	r0, [sp, #36]
         e9c9c:	e3300000 	teq	r0, #0	; 0x0
         e9ca0:	0a000006 	beq	e9cc0 <BuildEnvironments(void)+0x98>
         e9ca4:	e28d0004 	add	r0, sp, #4	; 0x4
         e9ca8:	e3a01000 	mov	r1, #0	; 0x0
         e9cac:	eb6b929c 	bl	1bce724 <TUObject::$__dt(void)>
         e9cb0:	e28dd010 	add	sp, sp, #16	; 0x10
         e9cb4:	ea000070 	b	e9e7c <BuildEnvironments(void)+0x254>
         e9cb8:	0c101080 	ldceq	0, cr1, [r0], -#512
         e9cbc:	6b726e6c 	blvs	1d85674 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x174e1c>
         e9cc0:	e59d1000 	ldr	r1, [sp]
         e9cc4:	e28d0004 	add	r0, sp, #4	; 0x4
         e9cc8:	eb6b9ade 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         e9ccc:	e28dd004 	add	sp, sp, #4	; 0x4
         e9cd0:	ea000017 	b	e9d34 <BuildEnvironments(void)+0x10c>
         e9cd4:	e28d000c 	add	r0, sp, #12	; 0xc
         e9cd8:	eb682f82 	bl	1af5ae8 <EnvironmentInfo::$DefaultHeap(void)>
         e9cdc:	e1300004 	teq	r0, r4
         e9ce0:	05990000 	ldreq	r0, [r9]
         e9ce4:	058d0008 	streq	r0, [sp, #8]
         e9ce8:	0a00000a 	beq	e9d18 <BuildEnvironments(void)+0xf0>
         e9cec:	e28d000c 	add	r0, sp, #12	; 0xc
         e9cf0:	eb682f7c 	bl	1af5ae8 <EnvironmentInfo::$DefaultHeap(void)>
         e9cf4:	e3300000 	teq	r0, #0	; 0x0
         e9cf8:	0a000006 	beq	e9d18 <BuildEnvironments(void)+0xf0>
         e9cfc:	e28d000c 	add	r0, sp, #12	; 0xc
         e9d00:	eb682f78 	bl	1af5ae8 <EnvironmentInfo::$DefaultHeap(void)>
         e9d04:	e28d1008 	add	r1, sp, #8	; 0x8
         e9d08:	eb6ba2fd 	bl	1bd2904 <$FindHeapRef__13MemObjManagerSFUlPPv>
         e9d0c:	e58d0020 	str	r0, [sp, #32]
         e9d10:	e3300000 	teq	r0, #0	; 0x0
         e9d14:	1a000048 	bne	e9e3c <BuildEnvironments(void)+0x214>
         e9d18:	e59d1008 	ldr	r1, [sp, #8]
         e9d1c:	e1a0000d 	mov	r0, sp
         e9d20:	eb6baf58 	bl	1bd5a88 <TUEnvironment::$Init(void *)>
         e9d24:	e58d0020 	str	r0, [sp, #32]
         e9d28:	e3300000 	teq	r0, #0	; 0x0
         e9d2c:	1a000042 	bne	e9e3c <BuildEnvironments(void)+0x214>
         e9d30:	e5cda004 	strb	sl, [sp, #4]
         e9d34:	e24dd010 	sub	sp, sp, #16	; 0x10
         e9d38:	e3a04000 	mov	r4, #0	; 0x0
         e9d3c:	e1a0300d 	mov	r3, sp
         e9d40:	e92d0008 	stmdb	sp!, {r3}
         e9d44:	e28d3008 	add	r3, sp, #8	; 0x8
         e9d48:	e28d2010 	add	r2, sp, #16	; 0x10
         e9d4c:	e1a01004 	mov	r1, r4
         e9d50:	e28d0020 	add	r0, sp, #32	; 0x20
         e9d54:	eb68378d 	bl	1af7b90 <EnvironmentInfo::$Domains(unsigned long, unsigned long *, unsigned char *, long *)>
         e9d58:	e28dd004 	add	sp, sp, #4	; 0x4
         e9d5c:	e3300000 	teq	r0, #0	; 0x0
         e9d60:	0a000027 	beq	e9e04 <BuildEnvironments(void)+0x1dc>
         e9d64:	e3a08000 	mov	r8, #0	; 0x0
         e9d68:	e3a07000 	mov	r7, #0	; 0x0
         e9d6c:	e28d1008 	add	r1, sp, #8	; 0x8
         e9d70:	e59d000c 	ldr	r0, [sp, #12]
         e9d74:	eb6b9edf 	bl	1bd18f8 <$FindDomainId__13MemObjManagerSFUlPUl>
         e9d78:	e58d0030 	str	r0, [sp, #48]
         e9d7c:	e3300000 	teq	r0, #0	; 0x0
         e9d80:	1a000022 	bne	e9e10 <BuildEnvironments(void)+0x1e8>
         e9d84:	e28d001c 	add	r0, sp, #28	; 0x1c
         e9d88:	eb682f57 	bl	1af5aec <EnvironmentInfo::$DefaultHeapDomain(void)>
         e9d8c:	e59d100c 	ldr	r1, [sp, #12]
         e9d90:	e1300001 	teq	r0, r1
         e9d94:	03a08001 	moveq	r8, #1	; 0x1
         e9d98:	e28d001c 	add	r0, sp, #28	; 0x1c
         e9d9c:	eb682f53 	bl	1af5af0 <EnvironmentInfo::$DefaultStackDomain(void)>
         e9da0:	e59d100c 	ldr	r1, [sp, #12]
         e9da4:	e1300001 	teq	r0, r1
         e9da8:	03a07001 	moveq	r7, #1	; 0x1
         e9dac:	e1a03008 	mov	r3, r8
         e9db0:	e92d0008 	stmdb	sp!, {r3}
         e9db4:	e1a03007 	mov	r3, r7
         e9db8:	e5dd2008 	ldrb	r2, [sp, #8]
         e9dbc:	e59d100c 	ldr	r1, [sp, #12]
         e9dc0:	e28d0014 	add	r0, sp, #20	; 0x14
         e9dc4:	eb6b9265 	bl	1bce760 <TUEnvironment::$Add(unsigned long, unsigned char, unsigned char, unsigned char)>
         e9dc8:	e28dd004 	add	sp, sp, #4	; 0x4
         e9dcc:	e58d0030 	str	r0, [sp, #48]
         e9dd0:	e3300000 	teq	r0, #0	; 0x0
         e9dd4:	1a00000d 	bne	e9e10 <BuildEnvironments(void)+0x1e8>
         e9dd8:	e2844001 	add	r4, r4, #1	; 0x1
         e9ddc:	e1a0300d 	mov	r3, sp
         e9de0:	e92d0008 	stmdb	sp!, {r3}
         e9de4:	e28d3008 	add	r3, sp, #8	; 0x8
         e9de8:	e28d2010 	add	r2, sp, #16	; 0x10
         e9dec:	e1a01004 	mov	r1, r4
         e9df0:	e28d0020 	add	r0, sp, #32	; 0x20
         e9df4:	eb683765 	bl	1af7b90 <EnvironmentInfo::$Domains(unsigned long, unsigned long *, unsigned char *, long *)>
         e9df8:	e28dd004 	add	sp, sp, #4	; 0x4
         e9dfc:	e3300000 	teq	r0, #0	; 0x0
         e9e00:	1affffd7 	bne	e9d64 <BuildEnvironments(void)+0x13c>
         e9e04:	e59d0000 	ldr	r0, [sp]
         e9e08:	e3300000 	teq	r0, #0	; 0x0
         e9e0c:	0a000004 	beq	e9e24 <BuildEnvironments(void)+0x1fc>
         e9e10:	e28d0010 	add	r0, sp, #16	; 0x10
         e9e14:	e3a01000 	mov	r1, #0	; 0x0
         e9e18:	eb6b9241 	bl	1bce724 <TUObject::$__dt(void)>
         e9e1c:	e28dd01c 	add	sp, sp, #28	; 0x1c
         e9e20:	ea000015 	b	e9e7c <BuildEnvironments(void)+0x254>
         e9e24:	e1a00006 	mov	r0, r6
         e9e28:	e5bd1010 	ldr	r1, [sp, #16]!
         e9e2c:	eb6bbb8a 	bl	1bd8c5c <$RegisterEnvironmentId__13MemObjManagerSFUlT1>
         e9e30:	e58d0020 	str	r0, [sp, #32]
         e9e34:	e3300000 	teq	r0, #0	; 0x0
         e9e38:	0a000004 	beq	e9e50 <BuildEnvironments(void)+0x228>
         e9e3c:	e1a0000d 	mov	r0, sp
         e9e40:	e3a01000 	mov	r1, #0	; 0x0
         e9e44:	eb6b9236 	bl	1bce724 <TUObject::$__dt(void)>
         e9e48:	e28dd00c 	add	sp, sp, #12	; 0xc
         e9e4c:	ea00000a 	b	e9e7c <BuildEnvironments(void)+0x254>
         e9e50:	e1a0000d 	mov	r0, sp
         e9e54:	e3a01000 	mov	r1, #0	; 0x0
         e9e58:	eb6b9231 	bl	1bce724 <TUObject::$__dt(void)>
         e9e5c:	e28dd00c 	add	sp, sp, #12	; 0xc
         e9e60:	e2855001 	add	r5, r5, #1	; 0x1
         e9e64:	e28d2014 	add	r2, sp, #20	; 0x14
         e9e68:	e1a0100d 	mov	r1, sp
         e9e6c:	e1a00005 	mov	r0, r5
         e9e70:	eb6ba6d4 	bl	1bd39c8 <$GetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfoPl>
         e9e74:	e3300000 	teq	r0, #0	; 0x0
         e9e78:	1affff77 	bne	e9c5c <BuildEnvironments(void)+0x34>
         e9e7c:	e59d0014 	ldr	r0, [sp, #20]
         e9e80:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BreakLargeObjectToEntryLink(unsigned long, TStoreWrapper *)
 * Address: 00100b24
 */
BreakLargeObjectToEntryLink(unsigned long, TStoreWrapper *) {
    /*
        100b24:	e1a0c00d 	mov	ip, sp
        100b28:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        100b2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        100b30:	e1a02001 	mov	r2, r1
        100b34:	e1a01000 	mov	r1, r0
        100b38:	e1a00002 	mov	r0, r2
        100b3c:	eb6511df 	bl	1a452c0 <$FindLargeBinaryInCache(TStoreWrapper *, unsigned long)>
        100b40:	eb6b0581 	bl	1bc214c <$AllocateRefHandle(long)>
        100b44:	e1a04000 	mov	r4, r0
        100b48:	e5900000 	ldr	r0, [r0]
        100b4c:	e3300002 	teq	r0, #2	; 0x2
        100b50:	0a000003 	beq	100b64 <BreakLargeObjectToEntryLink(unsigned long, TStoreWrapper *)+0x40>
        100b54:	eb6b11e6 	bl	1bc52f4 <$ObjectPtr(long)>
        100b58:	e2800010 	add	r0, r0, #16	; 0x10
        100b5c:	e3a01002 	mov	r1, #2	; 0x2
        100b60:	e5a01008 	str	r1, [r0, #8]!
        100b64:	e1a00004 	mov	r0, r4
        100b68:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        100b6c:	ea6b0992 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: BookTitle
 * Address: 00108858
 */
void globals::BookTitle() {
    /*
        108858:	e1a0c00d 	mov	ip, sp
        10885c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        108860:	e24cb004 	sub	fp, ip, #4	; 0x4
        108864:	e1a04000 	mov	r4, r0
        108868:	e24dd004 	sub	sp, sp, #4	; 0x4
        10886c:	e3a00002 	mov	r0, #2	; 0x2
        108870:	eb6ae635 	bl	1bc214c <$AllocateRefHandle(long)>
        108874:	e1a05000 	mov	r5, r0
        108878:	e3a00002 	mov	r0, #2	; 0x2
        10887c:	eb6ae632 	bl	1bc214c <$AllocateRefHandle(long)>
        108880:	e58d0000 	str	r0, [sp]
        108884:	e59f1054 	ldr	r1, [pc, #54]	; 1088e0 <BookTitle+0x88>
        108888:	e1a00004 	mov	r0, r4
        10888c:	e3a03000 	mov	r3, #0	; 0x0
        108890:	e3a02000 	mov	r2, #0	; 0x0
        108894:	eb6aee76 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        108898:	e59d1000 	ldr	r1, [sp]
        10889c:	e5810000 	str	r0, [r1]
        1088a0:	e1a0100d 	mov	r1, sp
        1088a4:	e59f0038 	ldr	r0, [pc, #38]	; 1088e4 <BookTitle+0x8c>
        1088a8:	e5900000 	ldr	r0, [r0]
        1088ac:	eb670b44 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        1088b0:	e5850000 	str	r0, [r5]
        1088b4:	e59f102c 	ldr	r1, [pc, #2c]	; 1088e8 <BookTitle+0x90>
        1088b8:	e5911000 	ldr	r1, [r1]
        1088bc:	e5911000 	ldr	r1, [r1]
        1088c0:	eb6aee66 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1088c4:	e1a04000 	mov	r4, r0
        1088c8:	e59d0000 	ldr	r0, [sp]
        1088cc:	eb6aea3a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1088d0:	e1a00005 	mov	r0, r5
        1088d4:	eb6aea38 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1088d8:	e1a00004 	mov	r0, r4
        1088dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1088e0:	00683308 	rsbeq	r3, r8, r8, lsl #6
        1088e4:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        1088e8:	00684b90 	streqb	r4, [r8], -#176
    */
}

/**
 * Symbol: Bookmarks
 * Address: 0010bda8
 */
void globals::Bookmarks() {
    /*
        10bda8:	e1a0c00d 	mov	ip, sp
        10bdac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10bdb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        10bdb4:	e1a04000 	mov	r4, r0
        10bdb8:	e24dd004 	sub	sp, sp, #4	; 0x4
        10bdbc:	e3a00002 	mov	r0, #2	; 0x2
        10bdc0:	eb6ad8e1 	bl	1bc214c <$AllocateRefHandle(long)>
        10bdc4:	e58d0000 	str	r0, [sp]
        10bdc8:	e3a00002 	mov	r0, #2	; 0x2
        10bdcc:	eb6ad8de 	bl	1bc214c <$AllocateRefHandle(long)>
        10bdd0:	e1a06000 	mov	r6, r0
        10bdd4:	e3a00002 	mov	r0, #2	; 0x2
        10bdd8:	eb6ad8db 	bl	1bc214c <$AllocateRefHandle(long)>
        10bddc:	e1a05000 	mov	r5, r0
        10bde0:	e59f1090 	ldr	r1, [pc, #90]	; 10be78 <Bookmarks+0xd0>
        10bde4:	e1a00004 	mov	r0, r4
        10bde8:	e3a03000 	mov	r3, #0	; 0x0
        10bdec:	e3a02000 	mov	r2, #0	; 0x0
        10bdf0:	eb6ae11f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10bdf4:	e59d1000 	ldr	r1, [sp]
        10bdf8:	e5810000 	str	r0, [r1]
        10bdfc:	e59f1078 	ldr	r1, [pc, #78]	; 10be7c <Bookmarks+0xd4>
        10be00:	e1a00004 	mov	r0, r4
        10be04:	e3a03000 	mov	r3, #0	; 0x0
        10be08:	e3a02000 	mov	r2, #0	; 0x0
        10be0c:	eb6ae118 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10be10:	e3100003 	tst	r0, #3	; 0x3
        10be14:	01a00140 	moveq	r0, r0, asr #2
        10be18:	0a000000 	beq	10be20 <Bookmarks+0x78>
        10be1c:	eb6ad8be 	bl	1bc211c <$_RINTError(long)>
        10be20:	e1a04000 	mov	r4, r0
        10be24:	e1a0100d 	mov	r1, sp
        10be28:	e59f0050 	ldr	r0, [pc, #50]	; 10be80 <Bookmarks+0xd8>
        10be2c:	e5900000 	ldr	r0, [r0]
        10be30:	eb66fde3 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        10be34:	e5860000 	str	r0, [r6]
        10be38:	e59f1044 	ldr	r1, [pc, #44]	; 10be84 <Bookmarks+0xdc>
        10be3c:	e5911000 	ldr	r1, [r1]
        10be40:	e5911000 	ldr	r1, [r1]
        10be44:	eb6ae105 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10be48:	e1a01004 	mov	r1, r4
        10be4c:	e5850000 	str	r0, [r5]
        10be50:	eb6ae0ff 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10be54:	e1a04000 	mov	r4, r0
        10be58:	e1a00005 	mov	r0, r5
        10be5c:	eb6adcd6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10be60:	e1a00006 	mov	r0, r6
        10be64:	eb6adcd4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10be68:	e59d0000 	ldr	r0, [sp]
        10be6c:	eb6adcd2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10be70:	e1a00004 	mov	r0, r4
        10be74:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        10be78:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10be7c:	00682728 	rsbeq	r2, r8, r8, lsr #14
        10be80:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        10be84:	00683788 	rsbeq	r3, r8, r8, lsl #15
    */
}

/**
 * Symbol: BookClosed
 * Address: 0010d108
 */
void globals::BookClosed() {
    /*
        10d108:	e1a0c00d 	mov	ip, sp
        10d10c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10d110:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d114:	e1a04000 	mov	r4, r0
        10d118:	e24dd008 	sub	sp, sp, #8	; 0x8
        10d11c:	e3a00002 	mov	r0, #2	; 0x2
        10d120:	eb6ad409 	bl	1bc214c <$AllocateRefHandle(long)>
        10d124:	e58d0004 	str	r0, [sp, #4]
        10d128:	e3a00002 	mov	r0, #2	; 0x2
        10d12c:	eb6ad406 	bl	1bc214c <$AllocateRefHandle(long)>
        10d130:	e58d0000 	str	r0, [sp]
        10d134:	e59f104c 	ldr	r1, [pc, #4c]	; 10d188 <BookClosed+0x80>
        10d138:	e1a00004 	mov	r0, r4
        10d13c:	e3a03000 	mov	r3, #0	; 0x0
        10d140:	e3a02000 	mov	r2, #0	; 0x0
        10d144:	eb6adc4a 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10d148:	e59d1004 	ldr	r1, [sp, #4]
        10d14c:	e5810000 	str	r0, [r1]
        10d150:	e28d1004 	add	r1, sp, #4	; 0x4
        10d154:	e59f0030 	ldr	r0, [pc, #30]	; 10d18c <BookClosed+0x84>
        10d158:	e5900000 	ldr	r0, [r0]
        10d15c:	eb66f918 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        10d160:	e59d1000 	ldr	r1, [sp]
        10d164:	e5810000 	str	r0, [r1]
        10d168:	e1a0000d 	mov	r0, sp
        10d16c:	eb6ad81f 	bl	1bc31f0 <$EntryChange(RefVar const &)>
        10d170:	e59d0000 	ldr	r0, [sp]
        10d174:	eb6ad810 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d178:	e59d0004 	ldr	r0, [sp, #4]
        10d17c:	eb6ad80e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d180:	e3a0001a 	mov	r0, #26	; 0x1a
        10d184:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        10d188:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10d18c:	0c1010d0 	ldceq	0, cr1, [r0], -#832
    */
}

/**
 * Symbol: BuildMemObjDatabase(void)
 * Address: 0011cde4
 */
BuildMemObjDatabase(void) {
    /*
        11cde4:	e1a0c00d 	mov	ip, sp
        11cde8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11cdec:	e24cb004 	sub	fp, ip, #4	; 0x4
        11cdf0:	e3a08001 	mov	r8, #1	; 0x1
        11cdf4:	e59f0218 	ldr	r0, [pc, #218]	; 11d014 <BuildMemObjDatabase(void)+0x230>
        11cdf8:	e5900000 	ldr	r0, [r0]
        11cdfc:	e59f1214 	ldr	r1, [pc, #214]	; 11d018 <BuildMemObjDatabase(void)+0x234>
        11ce00:	e5a10018 	str	r0, [r1, #24]!
        11ce04:	e1a05000 	mov	r5, r0
        11ce08:	e2804030 	add	r4, r0, #48	; 0x30
        11ce0c:	e3a01000 	mov	r1, #0	; 0x0
        11ce10:	e5804000 	str	r4, [r0]
        11ce14:	e3a00000 	mov	r0, #0	; 0x0
        11ce18:	e59f61fc 	ldr	r6, [pc, #1fc]	; 11d01c <BuildMemObjDatabase(void)+0x238>
        11ce1c:	e5962000 	ldr	r2, [r6]
        11ce20:	e5922000 	ldr	r2, [r2]
        11ce24:	e3320000 	teq	r2, #0	; 0x0
        11ce28:	0a00000c 	beq	11ce60 <BuildMemObjDatabase(void)+0x7c>
        11ce2c:	e1a02004 	mov	r2, r4
        11ce30:	e2844008 	add	r4, r4, #8	; 0x8
        11ce34:	e081c081 	add	ip, r1, r1, lsl #1
        11ce38:	e5963000 	ldr	r3, [r6]
        11ce3c:	e793318c 	ldr	r3, [r3, ip, lsl #3]
        11ce40:	e2811001 	add	r1, r1, #1	; 0x1
        11ce44:	e5820004 	str	r0, [r2, #4]
        11ce48:	e5823000 	str	r3, [r2]
        11ce4c:	e0813081 	add	r3, r1, r1, lsl #1
        11ce50:	e5962000 	ldr	r2, [r6]
        11ce54:	e7922183 	ldr	r2, [r2, r3, lsl #3]
        11ce58:	e3320000 	teq	r2, #0	; 0x0
        11ce5c:	1afffff2 	bne	11ce2c <BuildMemObjDatabase(void)+0x48>
        11ce60:	e3a0a008 	mov	sl, #8	; 0x8
        11ce64:	e3a02000 	mov	r2, #0	; 0x0
        11ce68:	e9850402 	stmib	r5, {r1, sl}
        11ce6c:	e3a01000 	mov	r1, #0	; 0x0
        11ce70:	e5854018 	str	r4, [r5, #24]
        11ce74:	e5963000 	ldr	r3, [r6]
        11ce78:	e5933000 	ldr	r3, [r3]
        11ce7c:	e3330000 	teq	r3, #0	; 0x0
        11ce80:	0a000018 	beq	11cee8 <BuildMemObjDatabase(void)+0x104>
        11ce84:	e20870ff 	and	r7, r8, #255	; 0xff
        11ce88:	e082e082 	add	lr, r2, r2, lsl #1
        11ce8c:	e596c000 	ldr	ip, [r6]
        11ce90:	e08c318e 	add	r3, ip, lr, lsl #3
        11ce94:	e593900c 	ldr	r9, [r3, #12]
        11ce98:	e3390000 	teq	r9, #0	; 0x0
        11ce9c:	05939010 	ldreq	r9, [r3, #16]
        11cea0:	03390000 	teqeq	r9, #0	; 0x0
        11cea4:	0a000009 	beq	11ced0 <BuildMemObjDatabase(void)+0xec>
        11cea8:	e5933014 	ldr	r3, [r3, #20]
        11ceac:	e3130001 	tst	r3, #1	; 0x1
        11ceb0:	1a000006 	bne	11ced0 <BuildMemObjDatabase(void)+0xec>
        11ceb4:	e1a03004 	mov	r3, r4
        11ceb8:	e2844008 	add	r4, r4, #8	; 0x8
        11cebc:	e79ce18e 	ldr	lr, [ip, lr, lsl #3]
        11cec0:	e3370000 	teq	r7, #0	; 0x0
        11cec4:	e583e000 	str	lr, [r3]
        11cec8:	15a30004 	strne	r0, [r3, #4]!
        11cecc:	e2811001 	add	r1, r1, #1	; 0x1
        11ced0:	e2822001 	add	r2, r2, #1	; 0x1
        11ced4:	e082c082 	add	ip, r2, r2, lsl #1
        11ced8:	e5963000 	ldr	r3, [r6]
        11cedc:	e793318c 	ldr	r3, [r3, ip, lsl #3]
        11cee0:	e3330000 	teq	r3, #0	; 0x0
        11cee4:	1affffe7 	bne	11ce88 <BuildMemObjDatabase(void)+0xa4>
        11cee8:	e3a07000 	mov	r7, #0	; 0x0
        11ceec:	e3a09000 	mov	r9, #0	; 0x0
        11cef0:	e285501c 	add	r5, r5, #28	; 0x1c
        11cef4:	e8850402 	stmia	r5, {r1, sl}
        11cef8:	e5854008 	str	r4, [r5, #8]
        11cefc:	e245501c 	sub	r5, r5, #28	; 0x1c
        11cf00:	e5960000 	ldr	r0, [r6]
        11cf04:	e5900000 	ldr	r0, [r0]
        11cf08:	e3300000 	teq	r0, #0	; 0x0
        11cf0c:	0a000017 	beq	11cf70 <BuildMemObjDatabase(void)+0x18c>
        11cf10:	e0872087 	add	r2, r7, r7, lsl #1
        11cf14:	e5961000 	ldr	r1, [r6]
        11cf18:	e0810182 	add	r0, r1, r2, lsl #3
        11cf1c:	e590300c 	ldr	r3, [r0, #12]
        11cf20:	e3330000 	teq	r3, #0	; 0x0
        11cf24:	05903010 	ldreq	r3, [r0, #16]
        11cf28:	03330000 	teqeq	r3, #0	; 0x0
        11cf2c:	0a000009 	beq	11cf58 <BuildMemObjDatabase(void)+0x174>
        11cf30:	e5900014 	ldr	r0, [r0, #20]
        11cf34:	e3100001 	tst	r0, #1	; 0x1
        11cf38:	0a000006 	beq	11cf58 <BuildMemObjDatabase(void)+0x174>
        11cf3c:	e1a00004 	mov	r0, r4
        11cf40:	e2844024 	add	r4, r4, #36	; 0x24
        11cf44:	e7911182 	ldr	r1, [r1, r2, lsl #3]
        11cf48:	e1a03007 	mov	r3, r7
        11cf4c:	e1a02008 	mov	r2, r8
        11cf50:	eb677faf 	bl	1afce14 <PersistentDBEntry::$Init(unsigned long, unsigned char, unsigned long)>
        11cf54:	e2899001 	add	r9, r9, #1	; 0x1
        11cf58:	e2877001 	add	r7, r7, #1	; 0x1
        11cf5c:	e0871087 	add	r1, r7, r7, lsl #1
        11cf60:	e5960000 	ldr	r0, [r6]
        11cf64:	e7900181 	ldr	r0, [r0, r1, lsl #3]
        11cf68:	e3300000 	teq	r0, #0	; 0x0
        11cf6c:	1affffe7 	bne	11cf10 <BuildMemObjDatabase(void)+0x12c>
        11cf70:	e3a00024 	mov	r0, #36	; 0x24
        11cf74:	e5859028 	str	r9, [r5, #40]
        11cf78:	e3a09000 	mov	r9, #0	; 0x0
        11cf7c:	e585002c 	str	r0, [r5, #44]
        11cf80:	e59f6098 	ldr	r6, [pc, #98]	; 11d020 <BuildMemObjDatabase(void)+0x23c>
        11cf84:	e1a07004 	mov	r7, r4
        11cf88:	e2844024 	add	r4, r4, #36	; 0x24
        11cf8c:	e1a02008 	mov	r2, r8
        11cf90:	e1a00007 	mov	r0, r7
        11cf94:	e3e03000 	mvn	r3, #0	; 0x0
        11cf98:	e1a01006 	mov	r1, r6
        11cf9c:	eb677f9c 	bl	1afce14 <PersistentDBEntry::$Init(unsigned long, unsigned char, unsigned long)>
        11cfa0:	e5970020 	ldr	r0, [r7, #32]
        11cfa4:	e3c00040 	bic	r0, r0, #64	; 0x40
        11cfa8:	e2899001 	add	r9, r9, #1	; 0x1
        11cfac:	e359000a 	cmp	r9, #10	; 0xa
        11cfb0:	e5a70020 	str	r0, [r7, #32]!
        11cfb4:	3afffff2 	bcc	11cf84 <BuildMemObjDatabase(void)+0x1a0>
        11cfb8:	e5950028 	ldr	r0, [r5, #40]
        11cfbc:	e280000a 	add	r0, r0, #10	; 0xa
        11cfc0:	e5850028 	str	r0, [r5, #40]
        11cfc4:	e3a00000 	mov	r0, #0	; 0x0
        11cfc8:	e3a0c000 	mov	ip, #0	; 0x0
        11cfcc:	e585400c 	str	r4, [r5, #12]
        11cfd0:	e59f104c 	ldr	r1, [pc, #4c]	; 11d024 <BuildMemObjDatabase(void)+0x240>
        11cfd4:	e5912000 	ldr	r2, [r1]
        11cfd8:	e3320000 	teq	r2, #0	; 0x0
        11cfdc:	0a000009 	beq	11d008 <BuildMemObjDatabase(void)+0x224>
        11cfe0:	e1a02004 	mov	r2, r4
        11cfe4:	e2844008 	add	r4, r4, #8	; 0x8
        11cfe8:	e0803080 	add	r3, r0, r0, lsl #1
        11cfec:	e7913183 	ldr	r3, [r1, r3, lsl #3]
        11cff0:	e2800001 	add	r0, r0, #1	; 0x1
        11cff4:	e8821008 	stmia	r2, {r3, ip}
        11cff8:	e0802080 	add	r2, r0, r0, lsl #1
        11cffc:	e7912182 	ldr	r2, [r1, r2, lsl #3]
        11d000:	e3320000 	teq	r2, #0	; 0x0
        11d004:	1afffff5 	bne	11cfe0 <BuildMemObjDatabase(void)+0x1fc>
        11d008:	e285500c 	add	r5, r5, #12	; 0xc
        11d00c:	e9a50401 	stmib	r5!, {r0, sl}
        11d010:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11d014:	0c101174 	ldfeqs	f1, [r0], -#464
        11d018:	0c1061c4 	ldfeqs	f6, [r0], -#784
        11d01c:	0c1011b8 	ldfeqs	f1, [r0], -#736
        11d020:	656d7479 	strvsb	r7, [sp, -#1145]!
        11d024:	0c10143c 	ldceq	4, cr1, [r0], -#240
    */
}

/**
 * Symbol: BlinkRect(Rect *, short)
 * Address: 0013d2d4
 */
BlinkRect(Rect *, short) {
    /*
        13d2d4:	e1a0c00d 	mov	ip, sp
        13d2d8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        13d2dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        13d2e0:	e1a04000 	mov	r4, r0
        13d2e4:	e1a05801 	mov	r5, r1, lsl #16
        13d2e8:	e1a05845 	mov	r5, r5, asr #16
        13d2ec:	e3a06000 	mov	r6, #0	; 0x0
        13d2f0:	e3550000 	cmp	r5, #0	; 0x0
        13d2f4:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        13d2f8:	e1a00004 	mov	r0, r4
        13d2fc:	eb684d58 	bl	1b50864 <$InvertRect(Rect *)>
        13d300:	e3a00f7d 	mov	r0, #500	; 0x1f4
        13d304:	eb655591 	bl	1a92950 <$DumbWait(long)>
        13d308:	e1a00004 	mov	r0, r4
        13d30c:	eb684d54 	bl	1b50864 <$InvertRect(Rect *)>
        13d310:	e3a00f7d 	mov	r0, #500	; 0x1f4
        13d314:	eb65558d 	bl	1a92950 <$DumbWait(long)>
        13d318:	e2860001 	add	r0, r6, #1	; 0x1
        13d31c:	e1a06800 	mov	r6, r0, lsl #16
        13d320:	e1a06846 	mov	r6, r6, asr #16
        13d324:	e1560005 	cmp	r6, r5
        13d328:	bafffff2 	blt	13d2f8 <BlinkRect(Rect *, short)+0x24>
        13d32c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: BuildChains(TDictChain **, RefVar const &)
 * Address: 0013d808
 */
BuildChains(TDictChain **, RefVar const &) {
    /*
        13d808:	e1a0c00d 	mov	ip, sp
        13d80c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13d810:	e24cb004 	sub	fp, ip, #4	; 0x4
        13d814:	e1a04000 	mov	r4, r0
        13d818:	e1a05001 	mov	r5, r1
        13d81c:	e24dd008 	sub	sp, sp, #8	; 0x8
        13d820:	e59f11a4 	ldr	r1, [pc, #1a4]	; 13d9cc <BuildChains(TDictChain **, RefVar const &)+0x1c4>
        13d824:	e1a00005 	mov	r0, r5
        13d828:	e3a03000 	mov	r3, #0	; 0x0
        13d82c:	e3a02000 	mov	r2, #0	; 0x0
        13d830:	eb6a1a8f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        13d834:	e3100003 	tst	r0, #3	; 0x3
        13d838:	01a00140 	moveq	r0, r0, asr #2
        13d83c:	0a000000 	beq	13d844 <BuildChains(TDictChain **, RefVar const &)+0x3c>
        13d840:	eb6a1235 	bl	1bc211c <$_RINTError(long)>
        13d844:	e1a0a000 	mov	sl, r0
        13d848:	e3a00000 	mov	r0, #0	; 0x0
        13d84c:	e3a01000 	mov	r1, #0	; 0x0
        13d850:	e7841100 	str	r1, [r4, r0, lsl #2]
        13d854:	e2800001 	add	r0, r0, #1	; 0x1
        13d858:	e3500003 	cmp	r0, #3	; 0x3
        13d85c:	bafffffb 	blt	13d850 <BuildChains(TDictChain **, RefVar const &)+0x48>
        13d860:	e1a00005 	mov	r0, r5
        13d864:	eb65b75e 	bl	1aab5e4 <$CountCustomDictionaries(RefVar const &)>
        13d868:	e1a07000 	mov	r7, r0
        13d86c:	e3a06000 	mov	r6, #0	; 0x0
        13d870:	e3500000 	cmp	r0, #0	; 0x0
        13d874:	9a00000a 	bls	13d8a4 <BuildChains(TDictChain **, RefVar const &)+0x9c>
        13d878:	e1a01006 	mov	r1, r6
        13d87c:	e1a00005 	mov	r0, r5
        13d880:	eb65d01c 	bl	1ab18f8 <$GetCustomDictionary(RefVar const &, unsigned long)>
        13d884:	eb655855 	bl	1a939e0 <$FindDictionaryEntry(unsigned long)>
        13d888:	e3300000 	teq	r0, #0	; 0x0
        13d88c:	11a01000 	movne	r1, r0
        13d890:	11a00004 	movne	r0, r4
        13d894:	1b65aaee 	blne	1aa8454 <$AddToChain(TDictChain **, dictListEntry *)>
        13d898:	e2866001 	add	r6, r6, #1	; 0x1
        13d89c:	e1560007 	cmp	r6, r7
        13d8a0:	3afffff4 	bcc	13d878 <BuildChains(TDictChain **, RefVar const &)+0x70>
        13d8a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        13d8a8:	e3a00002 	mov	r0, #2	; 0x2
        13d8ac:	eb6a1226 	bl	1bc214c <$AllocateRefHandle(long)>
        13d8b0:	e58d0000 	str	r0, [sp]
        13d8b4:	eb654bdc 	bl	1a9082c <$Dictionaries(void)>
        13d8b8:	eb6a1223 	bl	1bc214c <$AllocateRefHandle(long)>
        13d8bc:	e1a08000 	mov	r8, r0
        13d8c0:	e59f0108 	ldr	r0, [pc, #108]	; 13d9d0 <BuildChains(TDictChain **, RefVar const &)+0x1c8>
        13d8c4:	e58d0008 	str	r0, [sp, #8]
        13d8c8:	e5900004 	ldr	r0, [r0, #4]
        13d8cc:	e3a07000 	mov	r7, #0	; 0x0
        13d8d0:	e5b0900c 	ldr	r9, [r0, #12]!
        13d8d4:	e3590000 	cmp	r9, #0	; 0x0
        13d8d8:	9a000028 	bls	13d980 <BuildChains(TDictChain **, RefVar const &)+0x178>
        13d8dc:	e59f10f0 	ldr	r1, [pc, #f0]	; 13d9d4 <BuildChains(TDictChain **, RefVar const &)+0x1cc>
        13d8e0:	e58d1004 	str	r1, [sp, #4]
        13d8e4:	e59d0008 	ldr	r0, [sp, #8]
        13d8e8:	e1a01007 	mov	r1, r7
        13d8ec:	e5b02004 	ldr	r2, [r0, #4]!
        13d8f0:	e1a00002 	mov	r0, r2
        13d8f4:	e5922000 	ldr	r2, [r2]
        13d8f8:	e1a0e00f 	mov	lr, pc
        13d8fc:	e282f01c 	add	pc, r2, #28	; 0x1c
        13d900:	e1b06000 	movs	r6, r0
        13d904:	15960000 	ldrne	r0, [r6]
        13d908:	13300000 	teqne	r0, #0	; 0x0
        13d90c:	15d60005 	ldrneb	r0, [r6, #5]
        13d910:	13300000 	teqne	r0, #0	; 0x0
        13d914:	0a000016 	beq	13d974 <BuildChains(TDictChain **, RefVar const &)+0x16c>
        13d918:	e5d60006 	ldrb	r0, [r6, #6]
        13d91c:	e3300000 	teq	r0, #0	; 0x0
        13d920:	1a000013 	bne	13d974 <BuildChains(TDictChain **, RefVar const &)+0x16c>
        13d924:	e5d61004 	ldrb	r1, [r6, #4]
        13d928:	e5980000 	ldr	r0, [r8]
        13d92c:	eb6a1a48 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        13d930:	e59d1000 	ldr	r1, [sp]
        13d934:	e5810000 	str	r0, [r1]
        13d938:	e59d1004 	ldr	r1, [sp, #4]
        13d93c:	e1a0000d 	mov	r0, sp
        13d940:	e3a02000 	mov	r2, #0	; 0x0
        13d944:	eb6a1a47 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        13d948:	e3100003 	tst	r0, #3	; 0x3
        13d94c:	01a00140 	moveq	r0, r0, asr #2
        13d950:	0a000000 	beq	13d958 <BuildChains(TDictChain **, RefVar const &)+0x150>
        13d954:	eb6a11f0 	bl	1bc211c <$_RINTError(long)>
        13d958:	e3c004fe 	bic	r0, r0, #-33554432	; 0xfe000000
        13d95c:	e3c00c0f 	bic	r0, r0, #3840	; 0xf00
        13d960:	e3c000ff 	bic	r0, r0, #255	; 0xff
        13d964:	e110000a 	tst	r0, sl
        13d968:	11a01006 	movne	r1, r6
        13d96c:	11a00004 	movne	r0, r4
        13d970:	1b65aab7 	blne	1aa8454 <$AddToChain(TDictChain **, dictListEntry *)>
        13d974:	e2877001 	add	r7, r7, #1	; 0x1
        13d978:	e1570009 	cmp	r7, r9
        13d97c:	3affffd8 	bcc	13d8e4 <BuildChains(TDictChain **, RefVar const &)+0xdc>
        13d980:	e59f1050 	ldr	r1, [pc, #50]	; 13d9d8 <BuildChains(TDictChain **, RefVar const &)+0x1d0>
        13d984:	e1a00005 	mov	r0, r5
        13d988:	e3a02000 	mov	r2, #0	; 0x0
        13d98c:	eb6a1a35 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        13d990:	e3300002 	teq	r0, #2	; 0x2
        13d994:	1a000005 	bne	13d9b0 <BuildChains(TDictChain **, RefVar const &)+0x1a8>
        13d998:	e3a00028 	mov	r0, #40	; 0x28
        13d99c:	eb65580f 	bl	1a939e0 <$FindDictionaryEntry(unsigned long)>
        13d9a0:	e3300000 	teq	r0, #0	; 0x0
        13d9a4:	11a01000 	movne	r1, r0
        13d9a8:	11a00004 	movne	r0, r4
        13d9ac:	1b65aaa8 	blne	1aa8454 <$AddToChain(TDictChain **, dictListEntry *)>
        13d9b0:	e1a00004 	mov	r0, r4
        13d9b4:	eb65b6f8 	bl	1aab59c <$CompactChains(TDictChain **)>
        13d9b8:	e1a00008 	mov	r0, r8
        13d9bc:	eb6a15fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13d9c0:	e59d0000 	ldr	r0, [sp]
        13d9c4:	eb6a15fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13d9c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13d9cc:	00683270 	rsbeq	r3, r8, r0, ror r2
        13d9d0:	0c101628 	ldceq	6, cr1, [r0], -#160
        13d9d4:	00682a40 	rsbeq	r2, r8, r0, asr #20
        13d9d8:	00683210 	rsbeq	r3, r8, r0, lsl r2
    */
}

/**
 * Symbol: BuildChains(TDictChain **)
 * Address: 0013d9dc
 */
BuildChains(TDictChain **) {
    /*
        13d9dc:	e1a0c00d 	mov	ip, sp
        13d9e0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        13d9e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        13d9e8:	e1a04000 	mov	r4, r0
        13d9ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        13d9f0:	e3a00002 	mov	r0, #2	; 0x2
        13d9f4:	eb6a11d4 	bl	1bc214c <$AllocateRefHandle(long)>
        13d9f8:	e3a06000 	mov	r6, #0	; 0x0
        13d9fc:	e3a05000 	mov	r5, #0	; 0x0
        13da00:	e58d0000 	str	r0, [sp]
        13da04:	e59f0150 	ldr	r0, [pc, #150]	; 13db5c <BuildChains(TDictChain **)+0x180>
        13da08:	e5900000 	ldr	r0, [r0]
        13da0c:	e3300000 	teq	r0, #0	; 0x0
        13da10:	15b05068 	ldrne	r5, [r0, #104]!
        13da14:	13350000 	teqne	r5, #0	; 0x0
        13da18:	0a000027 	beq	13dabc <BuildChains(TDictChain **)+0xe0>
        13da1c:	e1a00005 	mov	r0, r5
        13da20:	eb65d3d0 	bl	1ab2968 <$GetRecognitionView(TView *)>
        13da24:	e1b05000 	movs	r5, r0
        13da28:	0a000023 	beq	13dabc <BuildChains(TDictChain **)+0xe0>
        13da2c:	e5950008 	ldr	r0, [r5, #8]
        13da30:	e3c064fe 	bic	r6, r0, #-33554432	; 0xfe000000
        13da34:	e3c660ff 	bic	r6, r6, #255	; 0xff
        13da38:	e2850024 	add	r0, r5, #36	; 0x24
        13da3c:	e59f111c 	ldr	r1, [pc, #11c]	; 13db60 <BuildChains(TDictChain **)+0x184>
        13da40:	e3a02000 	mov	r2, #0	; 0x0
        13da44:	eb6a1a07 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        13da48:	e59d1000 	ldr	r1, [sp]
        13da4c:	e5810000 	str	r0, [r1]
        13da50:	e3300002 	teq	r0, #2	; 0x2
        13da54:	0a00001c 	beq	13dacc <BuildChains(TDictChain **)+0xf0>
        13da58:	e1a0200d 	mov	r2, sp
        13da5c:	e1a01006 	mov	r1, r6
        13da60:	e1a00005 	mov	r0, r5
        13da64:	eb662663 	bl	1ac73f8 <$InkTextEnabled(TView *, unsigned long, RefVar const &)>
        13da68:	e3300000 	teq	r0, #0	; 0x0
        13da6c:	13a01002 	movne	r1, #2	; 0x2
        13da70:	159d0000 	ldrne	r0, [sp]
        13da74:	15801000 	strne	r1, [r0]
        13da78:	1a000013 	bne	13dacc <BuildChains(TDictChain **)+0xf0>
        13da7c:	e24dd004 	sub	sp, sp, #4	; 0x4
        13da80:	e28d1004 	add	r1, sp, #4	; 0x4
        13da84:	e1a00005 	mov	r0, r5
        13da88:	eb65e845 	bl	1ab7ba4 <$PrepRecConfig(TView *, RefVar const &)>
        13da8c:	e59d1004 	ldr	r1, [sp, #4]
        13da90:	e5810000 	str	r0, [r1]
        13da94:	e3a0001a 	mov	r0, #26	; 0x1a
        13da98:	eb6a11ab 	bl	1bc214c <$AllocateRefHandle(long)>
        13da9c:	e58d0000 	str	r0, [sp]
        13daa0:	e1a0200d 	mov	r2, sp
        13daa4:	e59f10b8 	ldr	r1, [pc, #b8]	; 13db64 <BuildChains(TDictChain **)+0x188>
        13daa8:	e28d0004 	add	r0, sp, #4	; 0x4
        13daac:	eb6a222d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        13dab0:	e59d0000 	ldr	r0, [sp]
        13dab4:	eb6a15c0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13dab8:	e28dd004 	add	sp, sp, #4	; 0x4
        13dabc:	e59d0000 	ldr	r0, [sp]
        13dac0:	e5900000 	ldr	r0, [r0]
        13dac4:	e3300002 	teq	r0, #2	; 0x2
        13dac8:	1a00001d 	bne	13db44 <BuildChains(TDictChain **)+0x168>
        13dacc:	e59f0094 	ldr	r0, [pc, #94]	; 13db68 <BuildChains(TDictChain **)+0x18c>
        13dad0:	eb6a11a5 	bl	1bc216c <$Clone(RefVar const &)>
        13dad4:	e59d1000 	ldr	r1, [sp]
        13dad8:	e3350000 	teq	r5, #0	; 0x0
        13dadc:	e5810000 	str	r0, [r1]
        13dae0:	13360000 	teqne	r6, #0	; 0x0
        13dae4:	0a000016 	beq	13db44 <BuildChains(TDictChain **)+0x168>
        13dae8:	e24dd008 	sub	sp, sp, #8	; 0x8
        13daec:	e1a00106 	mov	r0, r6, lsl #2
        13daf0:	eb6a1195 	bl	1bc214c <$AllocateRefHandle(long)>
        13daf4:	e58d0000 	str	r0, [sp]
        13daf8:	e1a0200d 	mov	r2, sp
        13dafc:	e59f1068 	ldr	r1, [pc, #68]	; 13db6c <BuildChains(TDictChain **)+0x190>
        13db00:	e28d0008 	add	r0, sp, #8	; 0x8
        13db04:	eb6a2217 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        13db08:	e59d0000 	ldr	r0, [sp]
        13db0c:	eb6a15aa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13db10:	e59f1058 	ldr	r1, [pc, #58]	; 13db70 <BuildChains(TDictChain **)+0x194>
        13db14:	e1a06001 	mov	r6, r1
        13db18:	e1a00005 	mov	r0, r5
        13db1c:	eb6a328d 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        13db20:	eb6a1189 	bl	1bc214c <$AllocateRefHandle(long)>
        13db24:	e58d0004 	str	r0, [sp, #4]
        13db28:	e28d2004 	add	r2, sp, #4	; 0x4
        13db2c:	e1a01006 	mov	r1, r6
        13db30:	e28d0008 	add	r0, sp, #8	; 0x8
        13db34:	eb6a220b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        13db38:	e59d0004 	ldr	r0, [sp, #4]
        13db3c:	eb6a159e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13db40:	e28dd008 	add	sp, sp, #8	; 0x8
        13db44:	e1a0100d 	mov	r1, sp
        13db48:	e1a00004 	mov	r0, r4
        13db4c:	eb65ae4d 	bl	1aa9488 <$BuildChains(TDictChain **, RefVar const &)>
        13db50:	e59d0000 	ldr	r0, [sp]
        13db54:	eb6a1598 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13db58:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        13db5c:	0c101934 	ldceq	9, cr1, [r0], -#208
        13db60:	00684138 	rsbeq	r4, r8, r8, lsr r1
        13db64:	00683210 	rsbeq	r3, r8, r0, lsl r2
        13db68:	00680168 	rsbeq	r0, r8, r8, ror #2
        13db6c:	00683270 	rsbeq	r3, r8, r0, ror r2
        13db70:	00682960 	rsbeq	r2, r8, r0, ror #18
    */
}

/**
 * Symbol: BuildCaseVariant__FPUsUlT2T1
 * Address: 0013f2fc
 */
void globals::BuildCaseVariant() {
    /*
        13f2fc:	e1a0c00d 	mov	ip, sp
        13f300:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13f304:	e24cb004 	sub	fp, ip, #4	; 0x4
        13f308:	e1a05000 	mov	r5, r0
        13f30c:	e1a04003 	mov	r4, r3
        13f310:	e3a09000 	mov	r9, #0	; 0x0
        13f314:	e3520010 	cmp	r2, #16	; 0x10
        13f318:	8a000042 	bhi	13f428 <BuildCaseVariant__FPUsUlT2T1+0x12c>
        13f31c:	e3a08001 	mov	r8, #1	; 0x1
        13f320:	e3320000 	teq	r2, #0	; 0x0
        13f324:	1a000003 	bne	13f338 <BuildCaseVariant__FPUsUlT2T1+0x3c>
        13f328:	e1a01005 	mov	r1, r5
        13f32c:	e1a00004 	mov	r0, r4
        13f330:	eb6abd09 	bl	1bee75c <$Ustrcpy>
        13f334:	ea000034 	b	13f40c <BuildCaseVariant__FPUsUlT2T1+0x110>
        13f338:	e3110040 	tst	r1, #64	; 0x40
        13f33c:	0a000021 	beq	13f3c8 <BuildCaseVariant__FPUsUlT2T1+0xcc>
        13f340:	e3a06000 	mov	r6, #0	; 0x0
        13f344:	e5947000 	ldr	r7, [r4]
        13f348:	e1b07827 	movs	r7, r7, lsr #16
        13f34c:	0a000017 	beq	13f3b0 <BuildCaseVariant__FPUsUlT2T1+0xb4>
        13f350:	e1a00007 	mov	r0, r7
        13f354:	eb6aac70 	bl	1bea51c <$IsAlphabet(unsigned short)>
        13f358:	e3300000 	teq	r0, #0	; 0x0
        13f35c:	0a00000e 	beq	13f39c <BuildCaseVariant__FPUsUlT2T1+0xa0>
        13f360:	e0840086 	add	r0, r4, r6, lsl #1
        13f364:	e1a0a000 	mov	sl, r0
        13f368:	e3a01001 	mov	r1, #1	; 0x1
        13f36c:	eb6aac78 	bl	1bea554 <$LowercaseText(unsigned short *, long)>
        13f370:	e7940086 	ldr	r0, [r4, r6, lsl #1]
        13f374:	e1a00820 	mov	r0, r0, lsr #16
        13f378:	e1300007 	teq	r0, r7
        13f37c:	1a000006 	bne	13f39c <BuildCaseVariant__FPUsUlT2T1+0xa0>
        13f380:	e1a0000a 	mov	r0, sl
        13f384:	e3a01001 	mov	r1, #1	; 0x1
        13f388:	eb6abcef 	bl	1bee74c <$UppercaseText(unsigned short *, long)>
        13f38c:	e7940086 	ldr	r0, [r4, r6, lsl #1]
        13f390:	e1a00820 	mov	r0, r0, lsr #16
        13f394:	e1300007 	teq	r0, r7
        13f398:	1a000004 	bne	13f3b0 <BuildCaseVariant__FPUsUlT2T1+0xb4>
        13f39c:	e2866001 	add	r6, r6, #1	; 0x1
        13f3a0:	e7947086 	ldr	r7, [r4, r6, lsl #1]
        13f3a4:	e1a07827 	mov	r7, r7, lsr #16
        13f3a8:	e3370000 	teq	r7, #0	; 0x0
        13f3ac:	1affffe7 	bne	13f350 <BuildCaseVariant__FPUsUlT2T1+0x54>
        13f3b0:	e1a01004 	mov	r1, r4
        13f3b4:	e1a00005 	mov	r0, r5
        13f3b8:	eb6abce6 	bl	1bee758 <$Ustrcmp>
        13f3bc:	e3300000 	teq	r0, #0	; 0x0
        13f3c0:	0a000018 	beq	13f428 <BuildCaseVariant__FPUsUlT2T1+0x12c>
        13f3c4:	ea000010 	b	13f40c <BuildCaseVariant__FPUsUlT2T1+0x110>
        13f3c8:	e3110080 	tst	r1, #128	; 0x80
        13f3cc:	0a000015 	beq	13f428 <BuildCaseVariant__FPUsUlT2T1+0x12c>
        13f3d0:	e3320001 	teq	r2, #1	; 0x1
        13f3d4:	1a000013 	bne	13f428 <BuildCaseVariant__FPUsUlT2T1+0x12c>
        13f3d8:	e3a06000 	mov	r6, #0	; 0x0
        13f3dc:	e5940000 	ldr	r0, [r4]
        13f3e0:	e1b00820 	movs	r0, r0, lsr #16
        13f3e4:	0a00000f 	beq	13f428 <BuildCaseVariant__FPUsUlT2T1+0x12c>
        13f3e8:	e0840086 	add	r0, r4, r6, lsl #1
        13f3ec:	e3a01001 	mov	r1, #1	; 0x1
        13f3f0:	eb6aac57 	bl	1bea554 <$LowercaseText(unsigned short *, long)>
        13f3f4:	e7940086 	ldr	r0, [r4, r6, lsl #1]
        13f3f8:	e1a00820 	mov	r0, r0, lsr #16
        13f3fc:	e7951086 	ldr	r1, [r5, r6, lsl #1]
        13f400:	e1a01821 	mov	r1, r1, lsr #16
        13f404:	e1300001 	teq	r0, r1
        13f408:	0a000001 	beq	13f414 <BuildCaseVariant__FPUsUlT2T1+0x118>
        13f40c:	e1a00008 	mov	r0, r8
        13f410:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13f414:	e2866001 	add	r6, r6, #1	; 0x1
        13f418:	e7940086 	ldr	r0, [r4, r6, lsl #1]
        13f41c:	e1a00820 	mov	r0, r0, lsr #16
        13f420:	e3300000 	teq	r0, #0	; 0x0
        13f424:	1affffef 	bne	13f3e8 <BuildCaseVariant__FPUsUlT2T1+0xec>
        13f428:	e1a00009 	mov	r0, r9
        13f42c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BeginStroke(_EXPAND_PARAMS *)
 * Address: 00153d10
 */
BeginStroke(_EXPAND_PARAMS *) {
    /*
        153d10:	e1a0c00d 	mov	ip, sp
        153d14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        153d18:	e24cb004 	sub	fp, ip, #4	; 0x4
        153d1c:	e1a04000 	mov	r4, r0
        153d20:	e5900028 	ldr	r0, [r0, #40]
        153d24:	e3a05000 	mov	r5, #0	; 0x0
        153d28:	e3500064 	cmp	r0, #100	; 0x64
        153d2c:	aa00000f 	bge	153d70 <BeginStroke(_EXPAND_PARAMS *)+0x60>
        153d30:	e5d40020 	ldrb	r0, [r4, #32]
        153d34:	e3300000 	teq	r0, #0	; 0x0
        153d38:	e3a00000 	mov	r0, #0	; 0x0
        153d3c:	0a000007 	beq	153d60 <BeginStroke(_EXPAND_PARAMS *)+0x50>
        153d40:	eb686242 	bl	1b6c650 <$Make__7TStrokeSFUl>
        153d44:	e584001c 	str	r0, [r4, #28]
        153d48:	e3300000 	teq	r0, #0	; 0x0
        153d4c:	12844020 	addne	r4, r4, #32	; 0x20
        153d50:	19b40006 	ldmneib	r4!, {r1, r2}
        153d54:	17810102 	strne	r0, [r1, r2, lsl #2]
        153d58:	1a00000b 	bne	153d8c <BeginStroke(_EXPAND_PARAMS *)+0x7c>
        153d5c:	ea000003 	b	153d70 <BeginStroke(_EXPAND_PARAMS *)+0x60>
        153d60:	eb6a38f1 	bl	1be212c <$NewHandle>
        153d64:	e5840010 	str	r0, [r4, #16]
        153d68:	e3300000 	teq	r0, #0	; 0x0
        153d6c:	1a000001 	bne	153d78 <BeginStroke(_EXPAND_PARAMS *)+0x68>
        153d70:	e1a00005 	mov	r0, r5
        153d74:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        153d78:	e2842024 	add	r2, r4, #36	; 0x24
        153d7c:	e8920006 	ldmia	r2, {r1, r2}
        153d80:	e7810102 	str	r0, [r1, r2, lsl #2]
        153d84:	e5845018 	str	r5, [r4, #24]
        153d88:	e5a45014 	str	r5, [r4, #20]!
        153d8c:	e3a00001 	mov	r0, #1	; 0x1
        153d90:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: BackupPackage(CPipe *, unsigned long)
 * Address: 0016093c
 */
BackupPackage(CPipe *, unsigned long) {
    /*
        16093c:	e1a0c00d 	mov	ip, sp
        160940:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        160944:	e24cb004 	sub	fp, ip, #4	; 0x4
        160948:	e1a06001 	mov	r6, r1
        16094c:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        160950:	e28d0008 	add	r0, sp, #8	; 0x8
        160954:	eb663b9b 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        160958:	e3a00b01 	mov	r0, #1024	; 0x400
        16095c:	eb69b775 	bl	1bce738 <$__nw(unsigned int)>
        160960:	e1a09000 	mov	r9, r0
        160964:	e3a05000 	mov	r5, #0	; 0x0
        160968:	e58d5000 	str	r5, [sp]
        16096c:	eb6a05eb 	bl	1be2120 <$MemError>
        160970:	e1b04000 	movs	r4, r0
        160974:	e24dd004 	sub	sp, sp, #4	; 0x4
        160978:	1a0000cf 	bne	160cbc <BackupPackage(CPipe *, unsigned long)+0x380>
        16097c:	e1a0100d 	mov	r1, sp
        160980:	e1a00006 	mov	r0, r6
        160984:	eb69d039 	bl	1bd4a70 <$IdToVAddr(unsigned long, unsigned long *)>
        160988:	e1b04000 	movs	r4, r0
        16098c:	1a00000e 	bne	1609cc <BackupPackage(CPipe *, unsigned long)+0x90>
        160990:	e24dd028 	sub	sp, sp, #40	; 0x28
        160994:	e59d1028 	ldr	r1, [sp, #40]
        160998:	e1a0000d 	mov	r0, sp
        16099c:	eb69b345 	bl	1bcd6b8 <TPackageIterator::$__ct(void *)>
        1609a0:	e1a0000d 	mov	r0, sp
        1609a4:	eb69d43e 	bl	1bd5aa4 <TPackageIterator::$Init(void)>
        1609a8:	e1b04000 	movs	r4, r0
        1609ac:	1a000002 	bne	1609bc <BackupPackage(CPipe *, unsigned long)+0x80>
        1609b0:	e1a0000d 	mov	r0, sp
        1609b4:	eb69dc88 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        1609b8:	e58d0030 	str	r0, [sp, #48]
        1609bc:	e1a0000d 	mov	r0, sp
        1609c0:	e3a01000 	mov	r1, #0	; 0x0
        1609c4:	eb69b753 	bl	1bce718 <TPackageIterator::$__dt(void)>
        1609c8:	e28dd028 	add	sp, sp, #40	; 0x28
        1609cc:	e3340000 	teq	r4, #0	; 0x0
        1609d0:	1a0000b9 	bne	160cbc <BackupPackage(CPipe *, unsigned long)+0x380>
        1609d4:	e28d2020 	add	r2, sp, #32	; 0x20
        1609d8:	e28d1024 	add	r1, sp, #36	; 0x24
        1609dc:	e1a00006 	mov	r0, r6
        1609e0:	eb69d021 	bl	1bd4a6c <$IdToStore(unsigned long, TStore **, unsigned long *)>
        1609e4:	e1b04000 	movs	r4, r0
        1609e8:	1a0000b3 	bne	160cbc <BackupPackage(CPipe *, unsigned long)+0x380>
        1609ec:	e24dd008 	sub	sp, sp, #8	; 0x8
        1609f0:	e3a03014 	mov	r3, #20	; 0x14
        1609f4:	e92d0008 	stmdb	sp!, {r3}
        1609f8:	e28d3018 	add	r3, sp, #24	; 0x18
        1609fc:	e3a02000 	mov	r2, #0	; 0x0
        160a00:	e59d0030 	ldr	r0, [sp, #48]
        160a04:	e59d102c 	ldr	r1, [sp, #44]
        160a08:	eb6685cc 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        160a0c:	e28dd004 	add	sp, sp, #4	; 0x4
        160a10:	e1b04000 	movs	r4, r0
        160a14:	1a00001b 	bne	160a88 <BackupPackage(CPipe *, unsigned long)+0x14c>
        160a18:	e59d0020 	ldr	r0, [sp, #32]
        160a1c:	e3300001 	teq	r0, #1	; 0x1
        160a20:	13e04e8a 	mvnne	r4, #2208	; 0x8a0
        160a24:	12444a02 	subne	r4, r4, #8192	; 0x2000
        160a28:	1a000016 	bne	160a88 <BackupPackage(CPipe *, unsigned long)+0x14c>
        160a2c:	e59d1018 	ldr	r1, [sp, #24]
        160a30:	e28d2004 	add	r2, sp, #4	; 0x4
        160a34:	e59d002c 	ldr	r0, [sp, #44]
        160a38:	eb6668b0 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        160a3c:	e1b04000 	movs	r4, r0
        160a40:	1a000010 	bne	160a88 <BackupPackage(CPipe *, unsigned long)+0x14c>
        160a44:	e59d0004 	ldr	r0, [sp, #4]
        160a48:	e2800001 	add	r0, r0, #1	; 0x1
        160a4c:	eb69b739 	bl	1bce738 <$__nw(unsigned int)>
        160a50:	e1a05000 	mov	r5, r0
        160a54:	eb6a05b1 	bl	1be2120 <$MemError>
        160a58:	e1b04000 	movs	r4, r0
        160a5c:	1a000009 	bne	160a88 <BackupPackage(CPipe *, unsigned long)+0x14c>
        160a60:	e59d3004 	ldr	r3, [sp, #4]
        160a64:	e92d0008 	stmdb	sp!, {r3}
        160a68:	e1a03005 	mov	r3, r5
        160a6c:	e3a02000 	mov	r2, #0	; 0x0
        160a70:	e59d0030 	ldr	r0, [sp, #48]
        160a74:	e59d101c 	ldr	r1, [sp, #28]
        160a78:	eb6685b0 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        160a7c:	e28dd004 	add	sp, sp, #4	; 0x4
        160a80:	e1b04000 	movs	r4, r0
        160a84:	0a000001 	beq	160a90 <BackupPackage(CPipe *, unsigned long)+0x154>
        160a88:	e28dd008 	add	sp, sp, #8	; 0x8
        160a8c:	ea00008a 	b	160cbc <BackupPackage(CPipe *, unsigned long)+0x380>
        160a90:	e3a0a000 	mov	sl, #0	; 0x0
        160a94:	e59d0004 	ldr	r0, [sp, #4]
        160a98:	e7c5a000 	strb	sl, [r5, r0]
        160a9c:	e1a01005 	mov	r1, r5
        160aa0:	e28f0f19 	add	r0, pc, #100	; 0x64
        160aa4:	eb69dc38 	bl	1bd7b8c <$NewByName__FPCcT1>
        160aa8:	e1b06000 	movs	r6, r0
        160aac:	03a040ea 	moveq	r4, #234	; 0xea
        160ab0:	02444b0a 	subeq	r4, r4, #10240	; 0x2800
        160ab4:	0afffff3 	beq	160a88 <BackupPackage(CPipe *, unsigned long)+0x14c>
        160ab8:	e1a00005 	mov	r0, r5
        160abc:	e28f1f17 	add	r1, pc, #92	; 0x5c
        160ac0:	eb6953f8 	bl	1bb5aa8 <$strcmp>
        160ac4:	e3300000 	teq	r0, #0	; 0x0
        160ac8:	0a000005 	beq	160ae4 <BackupPackage(CPipe *, unsigned long)+0x1a8>
        160acc:	e1a00005 	mov	r0, r5
        160ad0:	e28f1f18 	add	r1, pc, #96	; 0x60
        160ad4:	eb6953f3 	bl	1bb5aa8 <$strcmp>
        160ad8:	e3300000 	teq	r0, #0	; 0x0
        160adc:	159d201c 	ldrne	r2, [sp, #28]
        160ae0:	1a000005 	bne	160afc <BackupPackage(CPipe *, unsigned long)+0x1c0>
        160ae4:	e3a00e52 	mov	r0, #1312	; 0x520
        160ae8:	eb69b712 	bl	1bce738 <$__nw(unsigned int)>
        160aec:	e58d000c 	str	r0, [sp, #12]
        160af0:	e3300000 	teq	r0, #0	; 0x0
        160af4:	0a000016 	beq	160b54 <BackupPackage(CPipe *, unsigned long)+0x218>
        160af8:	e59d200c 	ldr	r2, [sp, #12]
        160afc:	e1a00006 	mov	r0, r6
        160b00:	e59d102c 	ldr	r1, [sp, #44]
        160b04:	eb089a08 	bl	38732c <TStoreDecompressor::Init(TStore *, unsigned long)>
        160b08:	ea000012 	b	160b58 <BackupPackage(CPipe *, unsigned long)+0x21c>
        160b0c:	5453746f 	ldrplb	r7, [r3], -#1135
        160b10:	72654465 	rsbvc	r4, r5, #1694498816	; 0x65000000
        160b14:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        160b18:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        160b1c:	6f720000 	swivs	0x00720000
        160b20:	544c5a53 	strplb	r5, [ip], -#2643
        160b24:	746f7265 	strvcbt	r7, [pc], #265	; 160b2c <BackupPackage(CPipe *, unsigned long)+0x1f0>
        160b28:	4465636f 	strmibt	r6, [r5], -#879
        160b2c:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        160b30:	73736f72 	cmnvc	r3, #456	; 0x1c8
        160b34:	00000000 	andeq	r0, r0, r0
        160b38:	544c5a52 	strplb	r5, [ip], -#2642
        160b3c:	656c6f63 	strvsb	r6, [ip, -#3939]!
        160b40:	53746f72 	cmnpl	r4, #456	; 0x1c8
        160b44:	65446563 	strvsb	r6, [r4, -#1379]
        160b48:	6f6d7072 	swivs	0x006d7072
        160b4c:	6573736f 	ldrvsb	r7, [r3, -#879]!
        160b50:	72000000 	andvc	r0, r0, #0	; 0x0
        160b54:	eb6a0571 	bl	1be2120 <$MemError>
        160b58:	e1b04000 	movs	r4, r0
        160b5c:	1a000052 	bne	160cac <BackupPackage(CPipe *, unsigned long)+0x370>
        160b60:	e1a0200d 	mov	r2, sp
        160b64:	e59d002c 	ldr	r0, [sp, #44]
        160b68:	e59d1014 	ldr	r1, [sp, #20]
        160b6c:	eb666863 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        160b70:	e1b04000 	movs	r4, r0
        160b74:	1a00004c 	bne	160cac <BackupPackage(CPipe *, unsigned long)+0x370>
        160b78:	e59d0000 	ldr	r0, [sp]
        160b7c:	e1a00120 	mov	r0, r0, lsr #2
        160b80:	e3a08000 	mov	r8, #0	; 0x0
        160b84:	e3a07000 	mov	r7, #0	; 0x0
        160b88:	e58d0000 	str	r0, [sp]
        160b8c:	e3500000 	cmp	r0, #0	; 0x0
        160b90:	9a000045 	bls	160cac <BackupPackage(CPipe *, unsigned long)+0x370>
        160b94:	e24d0068 	sub	r0, sp, #104	; 0x68
        160b98:	e58d0034 	str	r0, [sp, #52]
        160b9c:	e59f10b0 	ldr	r1, [pc, #b0]	; 160c54 <BackupPackage(CPipe *, unsigned long)+0x318>
        160ba0:	e58d1030 	str	r1, [sp, #48]
        160ba4:	e24dd004 	sub	sp, sp, #4	; 0x4
        160ba8:	e3a03004 	mov	r3, #4	; 0x4
        160bac:	e92d0008 	stmdb	sp!, {r3}
        160bb0:	e1a02108 	mov	r2, r8, lsl #2
        160bb4:	e08d3003 	add	r3, sp, r3
        160bb8:	e59d0034 	ldr	r0, [sp, #52]
        160bbc:	e59d101c 	ldr	r1, [sp, #28]
        160bc0:	eb66855e 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        160bc4:	e28dd004 	add	sp, sp, #4	; 0x4
        160bc8:	e1b04000 	movs	r4, r0
        160bcc:	1a00002f 	bne	160c90 <BackupPackage(CPipe *, unsigned long)+0x354>
        160bd0:	e3a03000 	mov	r3, #0	; 0x0
        160bd4:	e92d0008 	stmdb	sp!, {r3}
        160bd8:	e1a02009 	mov	r2, r9
        160bdc:	e1a00006 	mov	r0, r6
        160be0:	e3a03b01 	mov	r3, #1024	; 0x400
        160be4:	e59d1004 	ldr	r1, [sp, #4]
        160be8:	eb0899d2 	bl	387338 <TStoreDecompressor::Read(unsigned long, char *, long, unsigned long)>
        160bec:	e28dd004 	add	sp, sp, #4	; 0x4
        160bf0:	e1b04000 	movs	r4, r0
        160bf4:	1a000025 	bne	160c90 <BackupPackage(CPipe *, unsigned long)+0x354>
        160bf8:	e59d0014 	ldr	r0, [sp, #20]
        160bfc:	e0400007 	sub	r0, r0, r7
        160c00:	e3a01b01 	mov	r1, #1024	; 0x400
        160c04:	e3500b01 	cmp	r0, #1024	; 0x400
        160c08:	c1a00001 	movgt	r0, r1
        160c0c:	e1a0a000 	mov	sl, r0
        160c10:	e3a00000 	mov	r0, #0	; 0x0
        160c14:	e52d006c 	str	r0, [sp, -#108]!
        160c18:	e59d00a4 	ldr	r0, [sp, #164]
        160c1c:	eb694754 	bl	1bb2974 <$setjmp>
        160c20:	e3300000 	teq	r0, #0	; 0x0
        160c24:	1a00000b 	bne	160c58 <BackupPackage(CPipe *, unsigned long)+0x31c>
        160c28:	e1a0000d 	mov	r0, sp
        160c2c:	eb69fd12 	bl	1be007c <$AddExceptionHandler>
        160c30:	e1a0200a 	mov	r2, sl
        160c34:	e1a01009 	mov	r1, r9
        160c38:	e51bc030 	ldr	ip, [fp, -#48]
        160c3c:	e1a0000c 	mov	r0, ip
        160c40:	e3a03000 	mov	r3, #0	; 0x0
        160c44:	e59cc000 	ldr	ip, [ip]
        160c48:	e1a0e00f 	mov	lr, pc
        160c4c:	e28cf018 	add	pc, ip, #24	; 0x18
        160c50:	ea000009 	b	160c7c <BackupPackage(CPipe *, unsigned long)+0x340>
        160c54:	00371324 	eoreqs	r1, r7, r4, lsr #6
        160c58:	e59d0060 	ldr	r0, [sp, #96]
        160c5c:	e59d10a0 	ldr	r1, [sp, #160]
        160c60:	e5911000 	ldr	r1, [r1]
        160c64:	eb6a094a 	bl	1be3194 <$Subexception>
        160c68:	e3300000 	teq	r0, #0	; 0x0
        160c6c:	159d4064 	ldrne	r4, [sp, #100]
        160c70:	1a000001 	bne	160c7c <BackupPackage(CPipe *, unsigned long)+0x340>
        160c74:	e1a0000d 	mov	r0, sp
        160c78:	eb6a0535 	bl	1be2154 <$NextHandler>
        160c7c:	e1a0000d 	mov	r0, sp
        160c80:	eb6a010c 	bl	1be10b8 <$ExitHandler>
        160c84:	e28dd06c 	add	sp, sp, #108	; 0x6c
        160c88:	e3340000 	teq	r4, #0	; 0x0
        160c8c:	0a000001 	beq	160c98 <BackupPackage(CPipe *, unsigned long)+0x35c>
        160c90:	e28dd00c 	add	sp, sp, #12	; 0xc
        160c94:	ea000005 	b	160cb0 <BackupPackage(CPipe *, unsigned long)+0x374>
        160c98:	e087700a 	add	r7, r7, sl
        160c9c:	e2888001 	add	r8, r8, #1	; 0x1
        160ca0:	e5bd0004 	ldr	r0, [sp, #4]!
        160ca4:	e1580000 	cmp	r8, r0
        160ca8:	3affffbd 	bcc	160ba4 <BackupPackage(CPipe *, unsigned long)+0x268>
        160cac:	e28dd008 	add	sp, sp, #8	; 0x8
        160cb0:	e3360000 	teq	r6, #0	; 0x0
        160cb4:	11a00006 	movne	r0, r6
        160cb8:	1b089994 	blne	387310 <TStoreDecompressor::Delete(void)>
        160cbc:	e1a00009 	mov	r0, r9
        160cc0:	eb69b286 	bl	1bcd6e0 <$__dl(void *)>
        160cc4:	e1a00005 	mov	r0, r5
        160cc8:	eb69b284 	bl	1bcd6e0 <$__dl(void *)>
        160ccc:	e59d0004 	ldr	r0, [sp, #4]
        160cd0:	eb69b282 	bl	1bcd6e0 <$__dl(void *)>
        160cd4:	e1a00004 	mov	r0, r4
        160cd8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)
 * Address: 00160cdc
 */
BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *) {
    /*
        160cdc:	e1a0c00d 	mov	ip, sp
        160ce0:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        160ce4:	e24cb004 	sub	fp, ip, #4	; 0x4
        160ce8:	e1a04001 	mov	r4, r1
        160cec:	e1a07002 	mov	r7, r2
        160cf0:	e24dd024 	sub	sp, sp, #36	; 0x24
        160cf4:	e28d0008 	add	r0, sp, #8	; 0x8
        160cf8:	eb663ab2 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        160cfc:	e3a00b01 	mov	r0, #1024	; 0x400
        160d00:	eb69b68c 	bl	1bce738 <$__nw(unsigned int)>
        160d04:	e1a0a000 	mov	sl, r0
        160d08:	e3a06000 	mov	r6, #0	; 0x0
        160d0c:	e58d6000 	str	r6, [sp]
        160d10:	eb6a0502 	bl	1be2120 <$MemError>
        160d14:	e1b05000 	movs	r5, r0
        160d18:	e24dd004 	sub	sp, sp, #4	; 0x4
        160d1c:	1a0000d2 	bne	16106c <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x390>
        160d20:	e1a02007 	mov	r2, r7
        160d24:	e1a01004 	mov	r1, r4
        160d28:	e1a0000d 	mov	r0, sp
        160d2c:	eb66cf38 	bl	1b14a14 <$StoreToVAddr(unsigned long *, TStore *, unsigned long)>
        160d30:	e3300000 	teq	r0, #0	; 0x0
        160d34:	0a000006 	beq	160d54 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x78>
        160d38:	e1a02007 	mov	r2, r7
        160d3c:	e1a01004 	mov	r1, r4
        160d40:	e1a0000d 	mov	r0, sp
        160d44:	e3a03000 	mov	r3, #0	; 0x0
        160d48:	eb66cb2a 	bl	1b139f8 <$MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)>
        160d4c:	e1b05000 	movs	r5, r0
        160d50:	1a00000e 	bne	160d90 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0xb4>
        160d54:	e24dd028 	sub	sp, sp, #40	; 0x28
        160d58:	e59d1028 	ldr	r1, [sp, #40]
        160d5c:	e1a0000d 	mov	r0, sp
        160d60:	eb69b254 	bl	1bcd6b8 <TPackageIterator::$__ct(void *)>
        160d64:	e1a0000d 	mov	r0, sp
        160d68:	eb69d34d 	bl	1bd5aa4 <TPackageIterator::$Init(void)>
        160d6c:	e1b05000 	movs	r5, r0
        160d70:	1a000002 	bne	160d80 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0xa4>
        160d74:	e1a0000d 	mov	r0, sp
        160d78:	eb69db97 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        160d7c:	e58d0030 	str	r0, [sp, #48]
        160d80:	e1a0000d 	mov	r0, sp
        160d84:	e3a01000 	mov	r1, #0	; 0x0
        160d88:	eb69b662 	bl	1bce718 <TPackageIterator::$__dt(void)>
        160d8c:	e28dd028 	add	sp, sp, #40	; 0x28
        160d90:	e3350000 	teq	r5, #0	; 0x0
        160d94:	1a0000b4 	bne	16106c <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x390>
        160d98:	e24dd008 	sub	sp, sp, #8	; 0x8
        160d9c:	e3a03014 	mov	r3, #20	; 0x14
        160da0:	e92d0008 	stmdb	sp!, {r3}
        160da4:	e28d3018 	add	r3, sp, #24	; 0x18
        160da8:	e1a01007 	mov	r1, r7
        160dac:	e1a00004 	mov	r0, r4
        160db0:	e3a02000 	mov	r2, #0	; 0x0
        160db4:	eb6684e1 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        160db8:	e28dd004 	add	sp, sp, #4	; 0x4
        160dbc:	e1b05000 	movs	r5, r0
        160dc0:	1a00001b 	bne	160e34 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x158>
        160dc4:	e59d0020 	ldr	r0, [sp, #32]
        160dc8:	e3300001 	teq	r0, #1	; 0x1
        160dcc:	13e05e8a 	mvnne	r5, #2208	; 0x8a0
        160dd0:	12455a02 	subne	r5, r5, #8192	; 0x2000
        160dd4:	1a000016 	bne	160e34 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x158>
        160dd8:	e59d1018 	ldr	r1, [sp, #24]
        160ddc:	e28d2004 	add	r2, sp, #4	; 0x4
        160de0:	e1a00004 	mov	r0, r4
        160de4:	eb6667c5 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        160de8:	e1b05000 	movs	r5, r0
        160dec:	1a000010 	bne	160e34 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x158>
        160df0:	e59d0004 	ldr	r0, [sp, #4]
        160df4:	e2800001 	add	r0, r0, #1	; 0x1
        160df8:	eb69b64e 	bl	1bce738 <$__nw(unsigned int)>
        160dfc:	e1a06000 	mov	r6, r0
        160e00:	eb6a04c6 	bl	1be2120 <$MemError>
        160e04:	e1b05000 	movs	r5, r0
        160e08:	1a000009 	bne	160e34 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x158>
        160e0c:	e59d3004 	ldr	r3, [sp, #4]
        160e10:	e92d0008 	stmdb	sp!, {r3}
        160e14:	e1a03006 	mov	r3, r6
        160e18:	e1a00004 	mov	r0, r4
        160e1c:	e3a02000 	mov	r2, #0	; 0x0
        160e20:	e59d101c 	ldr	r1, [sp, #28]
        160e24:	eb6684c5 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        160e28:	e28dd004 	add	sp, sp, #4	; 0x4
        160e2c:	e1b05000 	movs	r5, r0
        160e30:	0a000001 	beq	160e3c <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x160>
        160e34:	e28dd008 	add	sp, sp, #8	; 0x8
        160e38:	ea00008b 	b	16106c <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x390>
        160e3c:	e3a01000 	mov	r1, #0	; 0x0
        160e40:	e59d0004 	ldr	r0, [sp, #4]
        160e44:	e7c61000 	strb	r1, [r6, r0]
        160e48:	e1a01006 	mov	r1, r6
        160e4c:	e28f0f19 	add	r0, pc, #100	; 0x64
        160e50:	eb69db4d 	bl	1bd7b8c <$NewByName__FPCcT1>
        160e54:	e1b07000 	movs	r7, r0
        160e58:	03a050ea 	moveq	r5, #234	; 0xea
        160e5c:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
        160e60:	0afffff3 	beq	160e34 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x158>
        160e64:	e1a00006 	mov	r0, r6
        160e68:	e28f1f17 	add	r1, pc, #92	; 0x5c
        160e6c:	eb69530d 	bl	1bb5aa8 <$strcmp>
        160e70:	e3300000 	teq	r0, #0	; 0x0
        160e74:	0a000005 	beq	160e90 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x1b4>
        160e78:	e1a00006 	mov	r0, r6
        160e7c:	e28f1f18 	add	r1, pc, #96	; 0x60
        160e80:	eb695308 	bl	1bb5aa8 <$strcmp>
        160e84:	e3300000 	teq	r0, #0	; 0x0
        160e88:	159d201c 	ldrne	r2, [sp, #28]
        160e8c:	1a000005 	bne	160ea8 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x1cc>
        160e90:	e3a00e52 	mov	r0, #1312	; 0x520
        160e94:	eb69b627 	bl	1bce738 <$__nw(unsigned int)>
        160e98:	e58d000c 	str	r0, [sp, #12]
        160e9c:	e3300000 	teq	r0, #0	; 0x0
        160ea0:	0a000016 	beq	160f00 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x224>
        160ea4:	e59d200c 	ldr	r2, [sp, #12]
        160ea8:	e1a01004 	mov	r1, r4
        160eac:	e1a00007 	mov	r0, r7
        160eb0:	eb08991d 	bl	38732c <TStoreDecompressor::Init(TStore *, unsigned long)>
        160eb4:	ea000012 	b	160f04 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x228>
        160eb8:	5453746f 	ldrplb	r7, [r3], -#1135
        160ebc:	72654465 	rsbvc	r4, r5, #1694498816	; 0x65000000
        160ec0:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        160ec4:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        160ec8:	6f720000 	swivs	0x00720000
        160ecc:	544c5a53 	strplb	r5, [ip], -#2643
        160ed0:	746f7265 	strvcbt	r7, [pc], #265	; 160ed8 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x1fc>
        160ed4:	4465636f 	strmibt	r6, [r5], -#879
        160ed8:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        160edc:	73736f72 	cmnvc	r3, #456	; 0x1c8
        160ee0:	00000000 	andeq	r0, r0, r0
        160ee4:	544c5a52 	strplb	r5, [ip], -#2642
        160ee8:	656c6f63 	strvsb	r6, [ip, -#3939]!
        160eec:	53746f72 	cmnpl	r4, #456	; 0x1c8
        160ef0:	65446563 	strvsb	r6, [r4, -#1379]
        160ef4:	6f6d7072 	swivs	0x006d7072
        160ef8:	6573736f 	ldrvsb	r7, [r3, -#879]!
        160efc:	72000000 	andvc	r0, r0, #0	; 0x0
        160f00:	eb6a0486 	bl	1be2120 <$MemError>
        160f04:	e1b05000 	movs	r5, r0
        160f08:	1a000053 	bne	16105c <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x380>
        160f0c:	e1a0200d 	mov	r2, sp
        160f10:	e1a00004 	mov	r0, r4
        160f14:	e59d1014 	ldr	r1, [sp, #20]
        160f18:	eb666778 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        160f1c:	e1b05000 	movs	r5, r0
        160f20:	1a00004d 	bne	16105c <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x380>
        160f24:	e59d0000 	ldr	r0, [sp]
        160f28:	e1a00120 	mov	r0, r0, lsr #2
        160f2c:	e3a09000 	mov	r9, #0	; 0x0
        160f30:	e3a08000 	mov	r8, #0	; 0x0
        160f34:	e58d0000 	str	r0, [sp]
        160f38:	e3500000 	cmp	r0, #0	; 0x0
        160f3c:	9a000046 	bls	16105c <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x380>
        160f40:	e24d006c 	sub	r0, sp, #108	; 0x6c
        160f44:	e58d002c 	str	r0, [sp, #44]
        160f48:	e59f10b0 	ldr	r1, [pc, #b0]	; 161000 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x324>
        160f4c:	e58d1028 	str	r1, [sp, #40]
        160f50:	e24dd008 	sub	sp, sp, #8	; 0x8
        160f54:	e3a03004 	mov	r3, #4	; 0x4
        160f58:	e92d0008 	stmdb	sp!, {r3}
        160f5c:	e1a02109 	mov	r2, r9, lsl #2
        160f60:	e28d3008 	add	r3, sp, #8	; 0x8
        160f64:	e1a00004 	mov	r0, r4
        160f68:	e59d1020 	ldr	r1, [sp, #32]
        160f6c:	eb668473 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        160f70:	e28dd004 	add	sp, sp, #4	; 0x4
        160f74:	e1b05000 	movs	r5, r0
        160f78:	1a00002f 	bne	16103c <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x360>
        160f7c:	e3a03000 	mov	r3, #0	; 0x0
        160f80:	e92d0008 	stmdb	sp!, {r3}
        160f84:	e1a0200a 	mov	r2, sl
        160f88:	e1a00007 	mov	r0, r7
        160f8c:	e3a03b01 	mov	r3, #1024	; 0x400
        160f90:	e59d1008 	ldr	r1, [sp, #8]
        160f94:	eb0898e7 	bl	387338 <TStoreDecompressor::Read(unsigned long, char *, long, unsigned long)>
        160f98:	e28dd004 	add	sp, sp, #4	; 0x4
        160f9c:	e1b05000 	movs	r5, r0
        160fa0:	1a000025 	bne	16103c <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x360>
        160fa4:	e59d0018 	ldr	r0, [sp, #24]
        160fa8:	e0400008 	sub	r0, r0, r8
        160fac:	e3a01b01 	mov	r1, #1024	; 0x400
        160fb0:	e3500b01 	cmp	r0, #1024	; 0x400
        160fb4:	c1a00001 	movgt	r0, r1
        160fb8:	e40d006c 	str	r0, [sp], -#108
        160fbc:	e3a00000 	mov	r0, #0	; 0x0
        160fc0:	e58d0000 	str	r0, [sp]
        160fc4:	e59d00a0 	ldr	r0, [sp, #160]
        160fc8:	eb694669 	bl	1bb2974 <$setjmp>
        160fcc:	e3300000 	teq	r0, #0	; 0x0
        160fd0:	1a00000b 	bne	161004 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x328>
        160fd4:	e1a0000d 	mov	r0, sp
        160fd8:	eb69fc27 	bl	1be007c <$AddExceptionHandler>
        160fdc:	e51bc038 	ldr	ip, [fp, -#56]
        160fe0:	e1a0100a 	mov	r1, sl
        160fe4:	e1a0000c 	mov	r0, ip
        160fe8:	e3a03000 	mov	r3, #0	; 0x0
        160fec:	e59d206c 	ldr	r2, [sp, #108]
        160ff0:	e59cc000 	ldr	ip, [ip]
        160ff4:	e1a0e00f 	mov	lr, pc
        160ff8:	e28cf018 	add	pc, ip, #24	; 0x18
        160ffc:	ea000009 	b	161028 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x34c>
        161000:	00371324 	eoreqs	r1, r7, r4, lsr #6
        161004:	e59d0060 	ldr	r0, [sp, #96]
        161008:	e59d109c 	ldr	r1, [sp, #156]
        16100c:	e5911000 	ldr	r1, [r1]
        161010:	eb6a085f 	bl	1be3194 <$Subexception>
        161014:	e3300000 	teq	r0, #0	; 0x0
        161018:	159d5064 	ldrne	r5, [sp, #100]
        16101c:	1a000001 	bne	161028 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x34c>
        161020:	e1a0000d 	mov	r0, sp
        161024:	eb6a044a 	bl	1be2154 <$NextHandler>
        161028:	e1a0000d 	mov	r0, sp
        16102c:	eb6a0021 	bl	1be10b8 <$ExitHandler>
        161030:	e28dd06c 	add	sp, sp, #108	; 0x6c
        161034:	e3350000 	teq	r5, #0	; 0x0
        161038:	0a000001 	beq	161044 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x368>
        16103c:	e28dd010 	add	sp, sp, #16	; 0x10
        161040:	ea000006 	b	161060 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x384>
        161044:	e49d0008 	ldr	r0, [sp], #8
        161048:	e0888000 	add	r8, r8, r0
        16104c:	e2899001 	add	r9, r9, #1	; 0x1
        161050:	e59d0000 	ldr	r0, [sp]
        161054:	e1590000 	cmp	r9, r0
        161058:	3affffbc 	bcc	160f50 <BackupPackage(CPipe *, TStore *, unsigned long, TLOCallback *)+0x274>
        16105c:	e28dd008 	add	sp, sp, #8	; 0x8
        161060:	e3370000 	teq	r7, #0	; 0x0
        161064:	11a00007 	movne	r0, r7
        161068:	1b0898a8 	blne	387310 <TStoreDecompressor::Delete(void)>
        16106c:	e1a0000a 	mov	r0, sl
        161070:	eb69b19a 	bl	1bcd6e0 <$__dl(void *)>
        161074:	e1a00006 	mov	r0, r6
        161078:	eb69b198 	bl	1bcd6e0 <$__dl(void *)>
        16107c:	e59d0004 	ldr	r0, [sp, #4]
        161080:	eb69b196 	bl	1bcd6e0 <$__dl(void *)>
        161084:	e1a00005 	mov	r0, r5
        161088:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        16108c:	00500061 	subeqs	r0, r0, r1, rrx
        161090:	00740063 	rsbeqs	r0, r4, r3, rrx
        161094:	00680000 	rsbeq	r0, r8, r0
        161098:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: BackupPatches(CPipe *)
 * Address: 00161130
 */
BackupPatches(CPipe *) {
    /*
        161130:	e1a0c00d 	mov	ip, sp
        161134:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        161138:	e24cb004 	sub	fp, ip, #4	; 0x4
        16113c:	e1a04000 	mov	r4, r0
        161140:	e24dd084 	sub	sp, sp, #132	; 0x84
        161144:	e1a0000d 	mov	r0, sp
        161148:	eb66ca17 	bl	1b139ac <$FillInSavedPatchInfoBlock(SSavedPatchInfo *)>
        16114c:	e59d0030 	ldr	r0, [sp, #48]
        161150:	e1a06600 	mov	r6, r0, lsl #12
        161154:	e3a00000 	mov	r0, #0	; 0x0
        161158:	e08d1200 	add	r1, sp, r0, lsl #4
        16115c:	e591104c 	ldr	r1, [r1, #76]
        161160:	e3310000 	teq	r1, #0	; 0x0
        161164:	12866a01 	addne	r6, r6, #4096	; 0x1000
        161168:	e2800001 	add	r0, r0, #1	; 0x1
        16116c:	e3500004 	cmp	r0, #4	; 0x4
        161170:	3afffff8 	bcc	161158 <BackupPatches(CPipe *)+0x28>
        161174:	e1a00006 	mov	r0, r6
        161178:	eb69d67a 	bl	1bd6b68 <$malloc>
        16117c:	e1b07000 	movs	r7, r0
        161180:	1a000001 	bne	16118c <BackupPatches(CPipe *)+0x5c>
        161184:	eb6a03e5 	bl	1be2120 <$MemError>
        161188:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        16118c:	e24dd034 	sub	sp, sp, #52	; 0x34
        161190:	e3a00000 	mov	r0, #0	; 0x0
        161194:	e59f1174 	ldr	r1, [pc, #174]	; 161310 <BackupPatches(CPipe *)+0x1e0>
        161198:	e7d13000 	ldrb	r3, [r1, r0]
        16119c:	e7cd3000 	strb	r3, [sp, r0]
        1611a0:	e2800001 	add	r0, r0, #1	; 0x1
        1611a4:	e3500007 	cmp	r0, #7	; 0x7
        1611a8:	3afffffa 	bcc	161198 <BackupPatches(CPipe *)+0x68>
        1611ac:	e3a00031 	mov	r0, #49	; 0x31
        1611b0:	e5cd0007 	strb	r0, [sp, #7]
        1611b4:	e59fa158 	ldr	sl, [pc, #158]	; 161314 <BackupPatches(CPipe *)+0x1e4>
        1611b8:	e3a00102 	mov	r0, #-2147483648	; 0x80000000
        1611bc:	e58d000c 	str	r0, [sp, #12]
        1611c0:	e58da008 	str	sl, [sp, #8]
        1611c4:	e59d006c 	ldr	r0, [sp, #108]
        1611c8:	e3a05000 	mov	r5, #0	; 0x0
        1611cc:	e58d0010 	str	r0, [sp, #16]
        1611d0:	e58d5014 	str	r5, [sp, #20]
        1611d4:	e59f913c 	ldr	r9, [pc, #13c]	; 161318 <BackupPatches(CPipe *)+0x1e8>
        1611d8:	e5990000 	ldr	r0, [r9]
        1611dc:	eb6a355f 	bl	1bee760 <$Ustrlen>
        1611e0:	e3a01002 	mov	r1, #2	; 0x2
        1611e4:	e0818080 	add	r8, r1, r0, lsl #1
        1611e8:	e1a01808 	mov	r1, r8, lsl #16
        1611ec:	e1a01821 	mov	r1, r1, lsr #16
        1611f0:	e5cd101b 	strb	r1, [sp, #27]
        1611f4:	e1a00421 	mov	r0, r1, lsr #8
        1611f8:	e5cd001a 	strb	r0, [sp, #26]
        1611fc:	e5cd5019 	strb	r5, [sp, #25]
        161200:	e5cd5018 	strb	r5, [sp, #24]
        161204:	e28820d8 	add	r2, r8, #216	; 0xd8
        161208:	e0823006 	add	r3, r2, r6
        16120c:	e58d301c 	str	r3, [sp, #28]
        161210:	e58d5020 	str	r5, [sp, #32]
        161214:	e58d5024 	str	r5, [sp, #36]
        161218:	e58d202c 	str	r2, [sp, #44]
        16121c:	e3a02001 	mov	r2, #1	; 0x1
        161220:	e58d2030 	str	r2, [sp, #48]
        161224:	e58d5028 	str	r5, [sp, #40]
        161228:	e24dd018 	sub	sp, sp, #24	; 0x18
        16122c:	e92d0060 	stmdb	sp!, {r5, r6}
        161230:	e3a020b2 	mov	r2, #178	; 0xb2
        161234:	e2822c01 	add	r2, r2, #256	; 0x100
        161238:	e58d2014 	str	r2, [sp, #20]
        16123c:	e3a02084 	mov	r2, #132	; 0x84
        161240:	e58d6008 	str	r6, [sp, #8]
        161244:	e58da00c 	str	sl, [sp, #12]
        161248:	e5cd201b 	strb	r2, [sp, #27]
        16124c:	e5cd501a 	strb	r5, [sp, #26]
        161250:	e5cd1019 	strb	r1, [sp, #25]
        161254:	e5cd0018 	strb	r0, [sp, #24]
        161258:	e1a00007 	mov	r0, r7
        16125c:	eb69b956 	bl	1bcf7bc <$BackupPatch(unsigned long)>
        161260:	e3a0a000 	mov	sl, #0	; 0x0
        161264:	e52d506c 	str	r5, [sp, -#108]!
        161268:	e28d0008 	add	r0, sp, #8	; 0x8
        16126c:	eb6945c0 	bl	1bb2974 <$setjmp>
        161270:	e3300000 	teq	r0, #0	; 0x0
        161274:	1a000028 	bne	16131c <BackupPatches(CPipe *)+0x1ec>
        161278:	e1a0000d 	mov	r0, sp
        16127c:	eb69fb7e 	bl	1be007c <$AddExceptionHandler>
        161280:	e28d108c 	add	r1, sp, #140	; 0x8c
        161284:	e1a00004 	mov	r0, r4
        161288:	e3a03000 	mov	r3, #0	; 0x0
        16128c:	e3a02034 	mov	r2, #52	; 0x34
        161290:	e594c000 	ldr	ip, [r4]
        161294:	e1a0e00f 	mov	lr, pc
        161298:	e28cf018 	add	pc, ip, #24	; 0x18
        16129c:	e28d106c 	add	r1, sp, #108	; 0x6c
        1612a0:	e1a00004 	mov	r0, r4
        1612a4:	e3a03000 	mov	r3, #0	; 0x0
        1612a8:	e3a02020 	mov	r2, #32	; 0x20
        1612ac:	e594c000 	ldr	ip, [r4]
        1612b0:	e1a0e00f 	mov	lr, pc
        1612b4:	e28cf018 	add	pc, ip, #24	; 0x18
        1612b8:	e1a02008 	mov	r2, r8
        1612bc:	e1a00004 	mov	r0, r4
        1612c0:	e3a03000 	mov	r3, #0	; 0x0
        1612c4:	e5991000 	ldr	r1, [r9]
        1612c8:	e594c000 	ldr	ip, [r4]
        1612cc:	e1a0e00f 	mov	lr, pc
        1612d0:	e28cf018 	add	pc, ip, #24	; 0x18
        1612d4:	e28d10c0 	add	r1, sp, #192	; 0xc0
        1612d8:	e1a00004 	mov	r0, r4
        1612dc:	e3a03000 	mov	r3, #0	; 0x0
        1612e0:	e3a02084 	mov	r2, #132	; 0x84
        1612e4:	e594c000 	ldr	ip, [r4]
        1612e8:	e1a0e00f 	mov	lr, pc
        1612ec:	e28cf018 	add	pc, ip, #24	; 0x18
        1612f0:	e1a02006 	mov	r2, r6
        1612f4:	e1a01007 	mov	r1, r7
        1612f8:	e1a00004 	mov	r0, r4
        1612fc:	e3a03001 	mov	r3, #1	; 0x1
        161300:	e594c000 	ldr	ip, [r4]
        161304:	e1a0e00f 	mov	lr, pc
        161308:	e28cf018 	add	pc, ip, #24	; 0x18
        16130c:	ea00000b 	b	161340 <BackupPatches(CPipe *)+0x210>
        161310:	003773d4 	ldreqsb	r7, [r7], -r4
        161314:	70746368 	rsbvcs	r6, r4, r8, ror #6
        161318:	0c1016e4 	ldceq	6, cr1, [r0], -#912
        16131c:	e59d0060 	ldr	r0, [sp, #96]
        161320:	e59f1034 	ldr	r1, [pc, #34]	; 16135c <BackupPatches(CPipe *)+0x22c>
        161324:	e5911000 	ldr	r1, [r1]
        161328:	eb6a0799 	bl	1be3194 <$Subexception>
        16132c:	e3300000 	teq	r0, #0	; 0x0
        161330:	159da064 	ldrne	sl, [sp, #100]
        161334:	1a000001 	bne	161340 <BackupPatches(CPipe *)+0x210>
        161338:	e1a0000d 	mov	r0, sp
        16133c:	eb6a0384 	bl	1be2154 <$NextHandler>
        161340:	e1a0000d 	mov	r0, sp
        161344:	eb69ff5b 	bl	1be10b8 <$ExitHandler>
        161348:	e28dd06c 	add	sp, sp, #108	; 0x6c
        16134c:	e1a00007 	mov	r0, r7
        161350:	eb69c580 	bl	1bd2958 <$free>
        161354:	e1a0000a 	mov	r0, sl
        161358:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        16135c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: BoxAboveBox__FRC5TRectT1
 * Address: 0017b08c
 */
void globals::BoxAboveBox() {
    /*
        17b08c:	e590c000 	ldr	ip, [r0]
        17b090:	e1a0c84c 	mov	ip, ip, asr #16
        17b094:	e37c0902 	cmn	ip, #32768	; 0x8000
        17b098:	15912000 	ldrne	r2, [r1]
        17b09c:	11a02842 	movne	r2, r2, asr #16
        17b0a0:	13720902 	cmnne	r2, #32768	; 0x8000
        17b0a4:	03a00000 	moveq	r0, #0	; 0x0
        17b0a8:	01a0f00e 	moveq	pc, lr
        17b0ac:	e5903004 	ldr	r3, [r0, #4]
        17b0b0:	e1a03843 	mov	r3, r3, asr #16
        17b0b4:	e043000c 	sub	r0, r3, ip
        17b0b8:	e1a00800 	mov	r0, r0, lsl #16
        17b0bc:	e1a00840 	mov	r0, r0, asr #16
        17b0c0:	e080cfa0 	add	ip, r0, r0, lsr #31
        17b0c4:	e1a0c0cc 	mov	ip, ip, asr #1
        17b0c8:	e5911004 	ldr	r1, [r1, #4]
        17b0cc:	e1a01821 	mov	r1, r1, lsr #16
        17b0d0:	e0411002 	sub	r1, r1, r2
        17b0d4:	e1a01801 	mov	r1, r1, lsl #16
        17b0d8:	e1a01841 	mov	r1, r1, asr #16
        17b0dc:	e1500001 	cmp	r0, r1
        17b0e0:	d1a00001 	movle	r0, r1
        17b0e4:	e280000a 	add	r0, r0, #10	; 0xa
        17b0e8:	e043100c 	sub	r1, r3, ip
        17b0ec:	e1510002 	cmp	r1, r2
        17b0f0:	b0421003 	sublt	r1, r2, r3
        17b0f4:	b1510000 	cmplt	r1, r0
        17b0f8:	a3a00000 	movge	r0, #0	; 0x0
        17b0fc:	b3a00001 	movlt	r0, #1	; 0x1
        17b100:	e20000ff 	and	r0, r0, #255	; 0xff
        17b104:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: BuildPatchTablePageTable(unsigned long, long)
 * Address: 00183230
 */
BuildPatchTablePageTable(unsigned long, long) {
    /*
        183230:	e1a0c00d 	mov	ip, sp
        183234:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        183238:	e24cb004 	sub	fp, ip, #4	; 0x4
        18323c:	e1a05000 	mov	r5, r0
        183240:	e1a04001 	mov	r4, r1
        183244:	ebffff5f 	bl	182fc8 <GetPatchDomainBase>
        183248:	e1a07000 	mov	r7, r0
        18324c:	ebfe6db9 	bl	11e938 <GetPrimaryTablePhysBaseAfterGlobalsInitied>
        183250:	e1a06000 	mov	r6, r0
        183254:	e3740001 	cmn	r4, #1	; 0x1
        183258:	1a000006 	bne	183278 <BuildPatchTablePageTable(unsigned long, long)+0x48>
        18325c:	ebffff5b 	bl	182fd0 <GetPatchDomainSize>
        183260:	e1a02000 	mov	r2, r0
        183264:	e1a01007 	mov	r1, r7
        183268:	e1a00006 	mov	r0, r6
        18326c:	e3a03000 	mov	r3, #0	; 0x0
        183270:	ebff5c40 	bl	15a378 <PrimSetDomainRangeWithPageTable__FUlN31>
        183274:	ea000000 	b	18327c <BuildPatchTablePageTable(unsigned long, long)+0x4c>
        183278:	1a000008 	bne	1832a0 <BuildPatchTablePageTable(unsigned long, long)+0x70>
        18327c:	e3a04000 	mov	r4, #0	; 0x0
        183280:	e0852504 	add	r2, r5, r4, lsl #10
        183284:	e0871a04 	add	r1, r7, r4, lsl #20
        183288:	e1a00006 	mov	r0, r6
        18328c:	ebff5c96 	bl	15a4ec <AddPTableWithPageTable__FUlN21>
        183290:	e2844001 	add	r4, r4, #1	; 0x1
        183294:	e3540004 	cmp	r4, #4	; 0x4
        183298:	3afffff8 	bcc	183280 <BuildPatchTablePageTable(unsigned long, long)+0x50>
        18329c:	ea000005 	b	1832b8 <BuildPatchTablePageTable(unsigned long, long)+0x88>
        1832a0:	e3a00501 	mov	r0, #4194304	; 0x400000
        1832a4:	e0800a04 	add	r0, r0, r4, lsl #20
        1832a8:	e0801007 	add	r1, r0, r7
        1832ac:	e1a02005 	mov	r2, r5
        1832b0:	e1a00006 	mov	r0, r6
        1832b4:	ebff5c8c 	bl	15a4ec <AddPTableWithPageTable__FUlN21>
        1832b8:	e1a00006 	mov	r0, r6
        1832bc:	e3a03000 	mov	r3, #0	; 0x0
        1832c0:	e3a02601 	mov	r2, #1048576	; 0x100000
        1832c4:	e3a01506 	mov	r1, #25165824	; 0x1800000
        1832c8:	ebff5c2a 	bl	15a378 <PrimSetDomainRangeWithPageTable__FUlN31>
        1832cc:	e59f2010 	ldr	r2, [pc, #10]	; 1832e4 <BuildPatchTablePageTable(unsigned long, long)+0xb4>
        1832d0:	e1a00006 	mov	r0, r6
        1832d4:	e3a01506 	mov	r1, #25165824	; 0x1800000
        1832d8:	ebff5c83 	bl	15a4ec <AddPTableWithPageTable__FUlN21>
        1832dc:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1832e0:	eafa5591 	b	1892c <FlushTheMMU>
        1832e4:	00018000 	andeq	r8, r1, r0
    */
}

/**
 * Symbol: BackupPatch(unsigned long)
 * Address: 00183400
 */
BackupPatch(unsigned long) {
    /*
        183400:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: BuildPts__FPC6TPointRC6TPointlP6TPointT4P6FPointT4
 * Address: 0018e484
 */
void globals::BuildPts() {
    /*
        18e484:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        18e488:	e1a04842 	mov	r4, r2, asr #16
        18e48c:	e1a02802 	mov	r2, r2, lsl #16
        18e490:	e1b02822 	movs	r2, r2, lsr #16
        18e494:	e59dc020 	ldr	ip, [sp, #32]
        18e498:	e28de018 	add	lr, sp, #24	; 0x18
        18e49c:	e89e4020 	ldmia	lr, {r5, lr}
        18e4a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        18e4a4:	1a000002 	bne	18e4b4 <BuildPts__FPC6TPointRC6TPointlP6TPointT4P6FPointT4+0x30>
        18e4a8:	e3540000 	cmp	r4, #0	; 0x0
        18e4ac:	c2444001 	subgt	r4, r4, #1	; 0x1
        18e4b0:	c3a02801 	movgt	r2, #65536	; 0x10000
        18e4b4:	e0800104 	add	r0, r0, r4, lsl #2
        18e4b8:	e1a06000 	mov	r6, r0
        18e4bc:	e5907002 	ldr	r7, [r0, #2]
        18e4c0:	e1a07827 	mov	r7, r7, lsr #16
        18e4c4:	e5918002 	ldr	r8, [r1, #2]
        18e4c8:	e1a08828 	mov	r8, r8, lsr #16
        18e4cc:	e0877008 	add	r7, r7, r8
        18e4d0:	e1a07807 	mov	r7, r7, lsl #16
        18e4d4:	e1a07847 	mov	r7, r7, asr #16
        18e4d8:	e5900000 	ldr	r0, [r0]
        18e4dc:	e1a00820 	mov	r0, r0, lsr #16
        18e4e0:	e5918000 	ldr	r8, [r1]
        18e4e4:	e1a08828 	mov	r8, r8, lsr #16
        18e4e8:	e0800008 	add	r0, r0, r8
        18e4ec:	e1a00800 	mov	r0, r0, lsl #16
        18e4f0:	e1a00840 	mov	r0, r0, asr #16
        18e4f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        18e4f8:	e5cd7003 	strb	r7, [sp, #3]
        18e4fc:	e1a07447 	mov	r7, r7, asr #8
        18e500:	e5cd7002 	strb	r7, [sp, #2]
        18e504:	e5cd0001 	strb	r0, [sp, #1]
        18e508:	e1a00440 	mov	r0, r0, asr #8
        18e50c:	e5cd0000 	strb	r0, [sp]
        18e510:	e49d0004 	ldr	r0, [sp], #4
        18e514:	e58d0004 	str	r0, [sp, #4]
        18e518:	e5830000 	str	r0, [r3]
        18e51c:	e2860004 	add	r0, r6, #4	; 0x4
        18e520:	e5906002 	ldr	r6, [r0, #2]
        18e524:	e1a06826 	mov	r6, r6, lsr #16
        18e528:	e5913002 	ldr	r3, [r1, #2]
        18e52c:	e1a03823 	mov	r3, r3, lsr #16
        18e530:	e0863003 	add	r3, r6, r3
        18e534:	e1a03803 	mov	r3, r3, lsl #16
        18e538:	e1a03843 	mov	r3, r3, asr #16
        18e53c:	e5900000 	ldr	r0, [r0]
        18e540:	e1a00820 	mov	r0, r0, lsr #16
        18e544:	e5911000 	ldr	r1, [r1]
        18e548:	e1a01821 	mov	r1, r1, lsr #16
        18e54c:	e0800001 	add	r0, r0, r1
        18e550:	e1a00800 	mov	r0, r0, lsl #16
        18e554:	e1a00840 	mov	r0, r0, asr #16
        18e558:	e24dd004 	sub	sp, sp, #4	; 0x4
        18e55c:	e5cd3003 	strb	r3, [sp, #3]
        18e560:	e1a01443 	mov	r1, r3, asr #8
        18e564:	e5cd1002 	strb	r1, [sp, #2]
        18e568:	e5cd0001 	strb	r0, [sp, #1]
        18e56c:	e1a00440 	mov	r0, r0, asr #8
        18e570:	e5cd0000 	strb	r0, [sp]
        18e574:	e49d0004 	ldr	r0, [sp], #4
        18e578:	e58d0000 	str	r0, [sp]
        18e57c:	e58c0000 	str	r0, [ip]
        18e580:	e252ccff 	subs	ip, r2, #65280	; 0xff00
        18e584:	a35c00ff 	cmpge	ip, #255	; 0xff
        18e588:	ba000008 	blt	18e5b0 <BuildPts__FPC6TPointRC6TPointlP6TPointT4P6FPointT4+0x12c>
        18e58c:	e59d0000 	ldr	r0, [sp]
        18e590:	e5850000 	str	r0, [r5]
        18e594:	e59d0000 	ldr	r0, [sp]
        18e598:	e1a00800 	mov	r0, r0, lsl #16
        18e59c:	e58e0000 	str	r0, [lr]
        18e5a0:	e59d0002 	ldr	r0, [sp, #2]
        18e5a4:	e1a00800 	mov	r0, r0, lsl #16
        18e5a8:	e5ae0004 	str	r0, [lr, #4]!
        18e5ac:	ea000021 	b	18e638 <BuildPts__FPC6TPointRC6TPointlP6TPointT4P6FPointT4+0x1b4>
        18e5b0:	e59d0004 	ldr	r0, [sp, #4]
        18e5b4:	e1a01800 	mov	r1, r0, lsl #16
        18e5b8:	e58e1000 	str	r1, [lr]
        18e5bc:	e59d0006 	ldr	r0, [sp, #6]
        18e5c0:	e1a00800 	mov	r0, r0, lsl #16
        18e5c4:	e3520000 	cmp	r2, #0	; 0x0
        18e5c8:	e58e0004 	str	r0, [lr, #4]
        18e5cc:	da000017 	ble	18e630 <BuildPts__FPC6TPointRC6TPointlP6TPointT4P6FPointT4+0x1ac>
        18e5d0:	e59dc002 	ldr	ip, [sp, #2]
        18e5d4:	e1a0c84c 	mov	ip, ip, asr #16
        18e5d8:	e59d3006 	ldr	r3, [sp, #6]
        18e5dc:	e04c3843 	sub	r3, ip, r3, asr #16
        18e5e0:	e0211392 	mla	r1, r2, r3, r1
        18e5e4:	e58e1000 	str	r1, [lr]
        18e5e8:	e59d3000 	ldr	r3, [sp]
        18e5ec:	e1a03843 	mov	r3, r3, asr #16
        18e5f0:	e59dc004 	ldr	ip, [sp, #4]
        18e5f4:	e043384c 	sub	r3, r3, ip, asr #16
        18e5f8:	e0200392 	mla	r0, r2, r3, r0
        18e5fc:	e58e0004 	str	r0, [lr, #4]
        18e600:	e2810902 	add	r0, r1, #32768	; 0x8000
        18e604:	e1a00840 	mov	r0, r0, asr #16
        18e608:	e5c50003 	strb	r0, [r5, #3]
        18e60c:	e1a00440 	mov	r0, r0, asr #8
        18e610:	e5c50002 	strb	r0, [r5, #2]
        18e614:	e5be0004 	ldr	r0, [lr, #4]!
        18e618:	e2800902 	add	r0, r0, #32768	; 0x8000
        18e61c:	e1a00840 	mov	r0, r0, asr #16
        18e620:	e5c50001 	strb	r0, [r5, #1]
        18e624:	e1a00440 	mov	r0, r0, asr #8
        18e628:	e5c50000 	strb	r0, [r5]
        18e62c:	ea000001 	b	18e638 <BuildPts__FPC6TPointRC6TPointlP6TPointT4P6FPointT4+0x1b4>
        18e630:	e59d0004 	ldr	r0, [sp, #4]
        18e634:	e5850000 	str	r0, [r5]
        18e638:	e1a00004 	mov	r0, r4
        18e63c:	e28dd008 	add	sp, sp, #8	; 0x8
        18e640:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: BeginReturnMessage(void)
 * Address: 00199394
 */
BeginReturnMessage(void) {
    /*
        199394:	e3a01000 	mov	r1, #0	; 0x0
        199398:	e59f0008 	ldr	r0, [pc, #8]	; 1993a8 <BeginReturnMessage(void)+0x14>
        19939c:	e5a01024 	str	r1, [r0, #36]!
        1993a0:	e3a0005f 	mov	r0, #95	; 0x5f
        1993a4:	ea64a787 	b	1ac31c8 <$WriteDebugByte(char)>
        1993a8:	0c1017b4 	ldceq	7, cr1, [r0], -#720
    */
}

/**
 * Symbol: BuildInputMask(RefVar const &, unsigned long, unsigned char)
 * Address: 0019d1f8
 */
BuildInputMask(RefVar const &, unsigned long, unsigned char) {
    /*
        19d1f8:	e1a0c00d 	mov	ip, sp
        19d1fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        19d200:	e24cb004 	sub	fp, ip, #4	; 0x4
        19d204:	e1a05000 	mov	r5, r0
        19d208:	e1a04001 	mov	r4, r1
        19d20c:	e21270ff 	ands	r7, r2, #255	; 0xff
        19d210:	e3a06000 	mov	r6, #0	; 0x0
        19d214:	1a000005 	bne	19d230 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0x38>
        19d218:	e59f10f8 	ldr	r1, [pc, #f8]	; 19d318 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0x120>
        19d21c:	e1a00005 	mov	r0, r5
        19d220:	e3a02000 	mov	r2, #0	; 0x0
        19d224:	eb689c0f 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        19d228:	e3300002 	teq	r0, #2	; 0x2
        19d22c:	0a00002a 	beq	19d2dc <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0xe4>
        19d230:	e59f10e4 	ldr	r1, [pc, #e4]	; 19d31c <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0x124>
        19d234:	e1a00005 	mov	r0, r5
        19d238:	e3a03000 	mov	r3, #0	; 0x0
        19d23c:	e3a02000 	mov	r2, #0	; 0x0
        19d240:	eb689c0b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        19d244:	e3300002 	teq	r0, #2	; 0x2
        19d248:	0a000021 	beq	19d2d4 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0xdc>
        19d24c:	e59f10cc 	ldr	r1, [pc, #cc]	; 19d320 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0x128>
        19d250:	e1a00005 	mov	r0, r5
        19d254:	e3a03000 	mov	r3, #0	; 0x0
        19d258:	e3a02000 	mov	r2, #0	; 0x0
        19d25c:	eb689c04 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        19d260:	e3300002 	teq	r0, #2	; 0x2
        19d264:	13a06001 	movne	r6, #1	; 0x1
        19d268:	13844a01 	orrne	r4, r4, #4096	; 0x1000
        19d26c:	e59f10b0 	ldr	r1, [pc, #b0]	; 19d324 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0x12c>
        19d270:	e1a00005 	mov	r0, r5
        19d274:	e3a03000 	mov	r3, #0	; 0x0
        19d278:	e3a02000 	mov	r2, #0	; 0x0
        19d27c:	eb689bfc 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        19d280:	e3300002 	teq	r0, #2	; 0x2
        19d284:	13a06001 	movne	r6, #1	; 0x1
        19d288:	13844a06 	orrne	r4, r4, #24576	; 0x6000
        19d28c:	e59f1094 	ldr	r1, [pc, #94]	; 19d328 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0x130>
        19d290:	e1a00005 	mov	r0, r5
        19d294:	e3a03000 	mov	r3, #0	; 0x0
        19d298:	e3a02000 	mov	r2, #0	; 0x0
        19d29c:	eb689bf4 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        19d2a0:	e3300002 	teq	r0, #2	; 0x2
        19d2a4:	13844601 	orrne	r4, r4, #1048576	; 0x100000
        19d2a8:	13844ac2 	orrne	r4, r4, #794624	; 0xc2000
        19d2ac:	1a000001 	bne	19d2b8 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0xc0>
        19d2b0:	e3360000 	teq	r6, #0	; 0x0
        19d2b4:	0a000006 	beq	19d2d4 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0xdc>
        19d2b8:	e59f106c 	ldr	r1, [pc, #6c]	; 19d32c <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0x134>
        19d2bc:	e1a00005 	mov	r0, r5
        19d2c0:	e3a03000 	mov	r3, #0	; 0x0
        19d2c4:	e3a02000 	mov	r2, #0	; 0x0
        19d2c8:	eb689be9 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        19d2cc:	e3300002 	teq	r0, #2	; 0x2
        19d2d0:	13844902 	orrne	r4, r4, #32768	; 0x8000
        19d2d4:	e3370000 	teq	r7, #0	; 0x0
        19d2d8:	1a000005 	bne	19d2f4 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0xfc>
        19d2dc:	e59f104c 	ldr	r1, [pc, #4c]	; 19d330 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0x138>
        19d2e0:	e1a00005 	mov	r0, r5
        19d2e4:	e3a02000 	mov	r2, #0	; 0x0
        19d2e8:	eb689bde 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        19d2ec:	e3300002 	teq	r0, #2	; 0x2
        19d2f0:	0a000006 	beq	19d310 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0x118>
        19d2f4:	e59f1038 	ldr	r1, [pc, #38]	; 19d334 <BuildInputMask(RefVar const &, unsigned long, unsigned char)+0x13c>
        19d2f8:	e1a00005 	mov	r0, r5
        19d2fc:	e3a03000 	mov	r3, #0	; 0x0
        19d300:	e3a02000 	mov	r2, #0	; 0x0
        19d304:	eb689bda 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        19d308:	e3300002 	teq	r0, #2	; 0x2
        19d30c:	13844801 	orrne	r4, r4, #65536	; 0x10000
        19d310:	e1a00004 	mov	r0, r4
        19d314:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        19d318:	00681e48 	rsbeq	r1, r8, r8, asr #28
        19d31c:	00682a68 	rsbeq	r2, r8, r8, ror #20
        19d320:	00685210 	rsbeq	r5, r8, r0, lsl r2
        19d324:	00683520 	rsbeq	r3, r8, r0, lsr #10
        19d328:	00683ae8 	rsbeq	r3, r8, r8, ror #21
        19d32c:	006840b0 	streqh	r4, [r8]
        19d330:	00681e40 	rsbeq	r1, r8, r0, asr #28
        19d334:	00682a60 	rsbeq	r2, r8, r0, ror #20
    */
}

/**
 * Symbol: bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)
 * Address: 001c1d04
 */
bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int) {
    /*
        1c1d04:	e1a0c00d 	mov	ip, sp
        1c1d08:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1d0c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1c1d10:	e24cb014 	sub	fp, ip, #20	; 0x14
        1c1d14:	e1a04001 	mov	r4, r1
        1c1d18:	e59b1014 	ldr	r1, [fp, #20]
        1c1d1c:	e20160ff 	and	r6, r1, #255	; 0xff
        1c1d20:	e28b7034 	add	r7, fp, #52	; 0x34
        1c1d24:	e8970081 	ldmia	r7, {r0, r7}
        1c1d28:	e20000ff 	and	r0, r0, #255	; 0xff
        1c1d2c:	e52d0008 	str	r0, [sp, -#8]!
        1c1d30:	e24dd018 	sub	sp, sp, #24	; 0x18
        1c1d34:	e3a00000 	mov	r0, #0	; 0x0
        1c1d38:	e58d0014 	str	r0, [sp, #20]
        1c1d3c:	e59b0004 	ldr	r0, [fp, #4]
        1c1d40:	e5b01004 	ldr	r1, [r0, #4]!
        1c1d44:	e58d1010 	str	r1, [sp, #16]
        1c1d48:	e59b0004 	ldr	r0, [fp, #4]
        1c1d4c:	e5b0800c 	ldr	r8, [r0, #12]!
        1c1d50:	e59b100c 	ldr	r1, [fp, #12]
        1c1d54:	e5915000 	ldr	r5, [r1]
        1c1d58:	e59b0004 	ldr	r0, [fp, #4]
        1c1d5c:	e5900000 	ldr	r0, [r0]
        1c1d60:	e59010e0 	ldr	r1, [r0, #224]
        1c1d64:	e1a01841 	mov	r1, r1, asr #16
        1c1d68:	e58d1004 	str	r1, [sp, #4]
        1c1d6c:	e59000e6 	ldr	r0, [r0, #230]
        1c1d70:	e1a00840 	mov	r0, r0, asr #16
        1c1d74:	e3360003 	teq	r6, #3	; 0x3
        1c1d78:	e58d0000 	str	r0, [sp]
        1c1d7c:	03a09065 	moveq	r9, #101	; 0x65
        1c1d80:	03a01001 	moveq	r1, #1	; 0x1
        1c1d84:	0a000003 	beq	1c1d98 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x94>
        1c1d88:	e3360001 	teq	r6, #1	; 0x1
        1c1d8c:	1a000002 	bne	1c1d9c <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x98>
        1c1d90:	e3a09066 	mov	r9, #102	; 0x66
        1c1d94:	e3a01002 	mov	r1, #2	; 0x2
        1c1d98:	e58d1008 	str	r1, [sp, #8]
        1c1d9c:	e3a00000 	mov	r0, #0	; 0x0
        1c1da0:	e3550000 	cmp	r5, #0	; 0x0
        1c1da4:	da000006 	ble	1c1dc4 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0xc0>
        1c1da8:	e3a01000 	mov	r1, #0	; 0x0
        1c1dac:	e0842200 	add	r2, r4, r0, lsl #4
        1c1db0:	e5c21001 	strb	r1, [r2, #1]
        1c1db4:	e5c21000 	strb	r1, [r2]
        1c1db8:	e2800001 	add	r0, r0, #1	; 0x1
        1c1dbc:	e1500005 	cmp	r0, r5
        1c1dc0:	bafffff9 	blt	1c1dac <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0xa8>
        1c1dc4:	e3550002 	cmp	r5, #2	; 0x2
        1c1dc8:	b3a00000 	movlt	r0, #0	; 0x0
        1c1dcc:	ba000171 	blt	1c2398 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x694>
        1c1dd0:	e3a03000 	mov	r3, #0	; 0x0
        1c1dd4:	e3a02000 	mov	r2, #0	; 0x0
        1c1dd8:	e1a01008 	mov	r1, r8
        1c1ddc:	e1a00007 	mov	r0, r7
        1c1de0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1de4:	e1a01006 	mov	r1, r6
        1c1de8:	e28b3028 	add	r3, fp, #40	; 0x28
        1c1dec:	e893000c 	ldmia	r3, {r2, r3}
        1c1df0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1c1df4:	e1a01005 	mov	r1, r5
        1c1df8:	e1a00004 	mov	r0, r4
        1c1dfc:	e59b2010 	ldr	r2, [fp, #16]
        1c1e00:	e59b301c 	ldr	r3, [fp, #28]
        1c1e04:	eb658d1e 	bl	1b25284 <$find_gaps_in_line__FP4EXTRiN22UcN22PsT8UiUi>
        1c1e08:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1c1e0c:	e3a03000 	mov	r3, #0	; 0x0
        1c1e10:	e3a02000 	mov	r2, #0	; 0x0
        1c1e14:	e1a00008 	mov	r0, r8
        1c1e18:	e59d1008 	ldr	r1, [sp, #8]
        1c1e1c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1e20:	e1a02007 	mov	r2, r7
        1c1e24:	e59d3020 	ldr	r3, [sp, #32]
        1c1e28:	e28b1028 	add	r1, fp, #40	; 0x28
        1c1e2c:	e8910003 	ldmia	r1, {r0, r1}
        1c1e30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c1e34:	e1a03006 	mov	r3, r6
        1c1e38:	e1a01005 	mov	r1, r5
        1c1e3c:	e1a00004 	mov	r0, r4
        1c1e40:	e59b201c 	ldr	r2, [fp, #28]
        1c1e44:	eb658d0f 	bl	1b25288 <$find_glitches_in_line__FP4EXTRiT2UcN22PsN27T2UiUi>
        1c1e48:	e28dd020 	add	sp, sp, #32	; 0x20
        1c1e4c:	e3360003 	teq	r6, #3	; 0x3
        1c1e50:	1a000008 	bne	1c1e78 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x174>
        1c1e54:	e59b3048 	ldr	r3, [fp, #72]
        1c1e58:	e92d0008 	stmdb	sp!, {r3}
        1c1e5c:	e1a02005 	mov	r2, r5
        1c1e60:	e1a01004 	mov	r1, r4
        1c1e64:	e59b0004 	ldr	r0, [fp, #4]
        1c1e68:	e59b3020 	ldr	r3, [fp, #32]
        1c1e6c:	eb658d08 	bl	1b25294 <$glitch_to_sub_max__FP8low_typeP4EXTRiT3Ui>
        1c1e70:	e28dd004 	add	sp, sp, #4	; 0x4
        1c1e74:	ea000039 	b	1c1f60 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x25c>
        1c1e78:	e3360001 	teq	r6, #1	; 0x1
        1c1e7c:	1a000037 	bne	1c1f60 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x25c>
        1c1e80:	e1a02008 	mov	r2, r8
        1c1e84:	e59b3044 	ldr	r3, [fp, #68]
        1c1e88:	e59d1010 	ldr	r1, [sp, #16]
        1c1e8c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1c1e90:	e1a02007 	mov	r2, r7
        1c1e94:	e1a01005 	mov	r1, r5
        1c1e98:	e1a00004 	mov	r0, r4
        1c1e9c:	e59b303c 	ldr	r3, [fp, #60]
        1c1ea0:	eb658cfc 	bl	1b25298 <$glitch_to_super_min(EXTR *, int, short *, short *, short *, short *, unsigned int)>
        1c1ea4:	e28dd00c 	add	sp, sp, #12	; 0xc
        1c1ea8:	e3a00000 	mov	r0, #0	; 0x0
        1c1eac:	e3a0a000 	mov	sl, #0	; 0x0
        1c1eb0:	e3a01000 	mov	r1, #0	; 0x0
        1c1eb4:	e3550000 	cmp	r5, #0	; 0x0
        1c1eb8:	e58d000c 	str	r0, [sp, #12]
        1c1ebc:	da000013 	ble	1c1f10 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x20c>
        1c1ec0:	e7942200 	ldr	r2, [r4, r0, lsl #4]
        1c1ec4:	e1a02842 	mov	r2, r2, asr #16
        1c1ec8:	e1320009 	teq	r2, r9
        1c1ecc:	059d200c 	ldreq	r2, [sp, #12]
        1c1ed0:	02822001 	addeq	r2, r2, #1	; 0x1
        1c1ed4:	058d200c 	streq	r2, [sp, #12]
        1c1ed8:	0a000009 	beq	1c1f04 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x200>
        1c1edc:	e0842200 	add	r2, r4, r0, lsl #4
        1c1ee0:	e5923006 	ldr	r3, [r2, #6]
        1c1ee4:	e1a03843 	mov	r3, r3, asr #16
        1c1ee8:	e7973083 	ldr	r3, [r7, r3, lsl #1]
        1c1eec:	e1a03843 	mov	r3, r3, asr #16
        1c1ef0:	e5922004 	ldr	r2, [r2, #4]
        1c1ef4:	e0432842 	sub	r2, r3, r2, asr #16
        1c1ef8:	e152000a 	cmp	r2, sl
        1c1efc:	a1a0a002 	movge	sl, r2
        1c1f00:	e0821001 	add	r1, r2, r1
        1c1f04:	e2800001 	add	r0, r0, #1	; 0x1
        1c1f08:	e1500005 	cmp	r0, r5
        1c1f0c:	baffffeb 	blt	1c1ec0 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x1bc>
        1c1f10:	e59d000c 	ldr	r0, [sp, #12]
        1c1f14:	e58d001c 	str	r0, [sp, #28]
        1c1f18:	e1500005 	cmp	r0, r5
        1c1f1c:	aa000003 	bge	1c1f30 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x22c>
        1c1f20:	e59d001c 	ldr	r0, [sp, #28]
        1c1f24:	e0450000 	sub	r0, r5, r0
        1c1f28:	eb67c284 	bl	1bb2940 <$__rt_sdiv>
        1c1f2c:	e1a01000 	mov	r1, r0
        1c1f30:	e59d001c 	ldr	r0, [sp, #28]
        1c1f34:	e3500000 	cmp	r0, #0	; 0x0
        1c1f38:	da000008 	ble	1c1f60 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x25c>
        1c1f3c:	e28d300c 	add	r3, sp, #12	; 0xc
        1c1f40:	e1a02001 	mov	r2, r1
        1c1f44:	e92d000c 	stmdb	sp!, {r2, r3}
        1c1f48:	e1a0300a 	mov	r3, sl
        1c1f4c:	e1a02007 	mov	r2, r7
        1c1f50:	e1a01005 	mov	r1, r5
        1c1f54:	e1a00004 	mov	r0, r4
        1c1f58:	eb6590fd 	bl	1b26354 <$super_min_to_line(EXTR *, int, short *, short *, short *, int *)>
        1c1f5c:	e28dd008 	add	sp, sp, #8	; 0x8
        1c1f60:	e59b1020 	ldr	r1, [fp, #32]
        1c1f64:	e28b3028 	add	r3, fp, #40	; 0x28
        1c1f68:	e893000c 	ldmia	r3, {r2, r3}
        1c1f6c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1c1f70:	e1a03008 	mov	r3, r8
        1c1f74:	e1a02006 	mov	r2, r6
        1c1f78:	e1a01005 	mov	r1, r5
        1c1f7c:	e1a00004 	mov	r0, r4
        1c1f80:	eb658cc2 	bl	1b25290 <$glitch_to_inside(EXTR *, int, unsigned char, short *, unsigned char, unsigned char, unsigned char)>
        1c1f84:	e28dd00c 	add	sp, sp, #12	; 0xc
        1c1f88:	e59d0018 	ldr	r0, [sp, #24]
        1c1f8c:	e3300001 	teq	r0, #1	; 0x1
        1c1f90:	1a000008 	bne	1c1fb8 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x2b4>
        1c1f94:	e59b3030 	ldr	r3, [fp, #48]
        1c1f98:	e3330000 	teq	r3, #0	; 0x0
        1c1f9c:	0a000005 	beq	1c1fb8 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x2b4>
        1c1fa0:	e1a02006 	mov	r2, r6
        1c1fa4:	e1a01005 	mov	r1, r5
        1c1fa8:	e1a00004 	mov	r0, r4
        1c1fac:	e59b3030 	ldr	r3, [fp, #48]
        1c1fb0:	eb6590e2 	bl	1b26340 <$spec_neibour_extr(EXTR *, int, unsigned char, unsigned char)>
        1c1fb4:	ea00001b 	b	1c2028 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x324>
        1c1fb8:	e59b1040 	ldr	r1, [fp, #64]
        1c1fbc:	e59d0004 	ldr	r0, [sp, #4]
        1c1fc0:	e0413000 	sub	r3, r1, r0
        1c1fc4:	e1a0a003 	mov	sl, r3
        1c1fc8:	e92d0008 	stmdb	sp!, {r3}
        1c1fcc:	e1a03007 	mov	r3, r7
        1c1fd0:	e1a02006 	mov	r2, r6
        1c1fd4:	e1a01005 	mov	r1, r5
        1c1fd8:	e1a00004 	mov	r0, r4
        1c1fdc:	eb6590c9 	bl	1b26308 <$neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)>
        1c1fe0:	e28dd004 	add	sp, sp, #4	; 0x4
        1c1fe4:	e3300001 	teq	r0, #1	; 0x1
        1c1fe8:	1a00000e 	bne	1c2028 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x324>
        1c1fec:	e1a0300a 	mov	r3, sl
        1c1ff0:	e1a02007 	mov	r2, r7
        1c1ff4:	e59b1024 	ldr	r1, [fp, #36]
        1c1ff8:	e59bc018 	ldr	ip, [fp, #24]
        1c1ffc:	e59d0000 	ldr	r0, [sp]
        1c2000:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c2004:	e1a0300c 	mov	r3, ip
        1c2008:	e1a02008 	mov	r2, r8
        1c200c:	e92d000c 	stmdb	sp!, {r2, r3}
        1c2010:	e1a03006 	mov	r3, r6
        1c2014:	e1a01005 	mov	r1, r5
        1c2018:	e1a00004 	mov	r0, r4
        1c201c:	e59b2010 	ldr	r2, [fp, #16]
        1c2020:	eb65887a 	bl	1b24210 <$all_susp_extr__FP4EXTRiT2UcPsN32T5T2>
        1c2024:	e28dd018 	add	sp, sp, #24	; 0x18
        1c2028:	e3a00000 	mov	r0, #0	; 0x0
        1c202c:	e3550000 	cmp	r5, #0	; 0x0
        1c2030:	e58d000c 	str	r0, [sp, #12]
        1c2034:	da0000b4 	ble	1c230c <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x608>
        1c2038:	e7941200 	ldr	r1, [r4, r0, lsl #4]
        1c203c:	e1a01841 	mov	r1, r1, asr #16
        1c2040:	e1310009 	teq	r1, r9
        1c2044:	059d100c 	ldreq	r1, [sp, #12]
        1c2048:	02811001 	addeq	r1, r1, #1	; 0x1
        1c204c:	058d100c 	streq	r1, [sp, #12]
        1c2050:	e2800001 	add	r0, r0, #1	; 0x1
        1c2054:	e1500005 	cmp	r0, r5
        1c2058:	bafffff6 	blt	1c2038 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x334>
        1c205c:	e59d000c 	ldr	r0, [sp, #12]
        1c2060:	e3500000 	cmp	r0, #0	; 0x0
        1c2064:	da0000a8 	ble	1c230c <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x608>
        1c2068:	e3a00000 	mov	r0, #0	; 0x0
        1c206c:	e3550000 	cmp	r5, #0	; 0x0
        1c2070:	da00000b 	ble	1c20a4 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x3a0>
        1c2074:	e3a01000 	mov	r1, #0	; 0x0
        1c2078:	e7942200 	ldr	r2, [r4, r0, lsl #4]
        1c207c:	e1a02842 	mov	r2, r2, asr #16
        1c2080:	e1320009 	teq	r2, r9
        1c2084:	e0842200 	add	r2, r4, r0, lsl #4
        1c2088:	15c21001 	strneb	r1, [r2, #1]
        1c208c:	15c21000 	strneb	r1, [r2]
        1c2090:	0592200c 	ldreq	r2, [r2, #12]
        1c2094:	05c29001 	streqb	r9, [r2, #1]
        1c2098:	e2800001 	add	r0, r0, #1	; 0x1
        1c209c:	e1500005 	cmp	r0, r5
        1c20a0:	bafffff4 	blt	1c2078 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x374>
        1c20a4:	e1a02009 	mov	r2, r9
        1c20a8:	e1a00004 	mov	r0, r4
        1c20ac:	e59b100c 	ldr	r1, [fp, #12]
        1c20b0:	eb658869 	bl	1b2425c <$delete_line_extr(EXTR *, int *, int)>
        1c20b4:	e58d0014 	str	r0, [sp, #20]
        1c20b8:	e59b100c 	ldr	r1, [fp, #12]
        1c20bc:	e3a03000 	mov	r3, #0	; 0x0
        1c20c0:	e3a02000 	mov	r2, #0	; 0x0
        1c20c4:	e5915000 	ldr	r5, [r1]
        1c20c8:	e1a01008 	mov	r1, r8
        1c20cc:	e1a00007 	mov	r0, r7
        1c20d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c20d4:	e1a01006 	mov	r1, r6
        1c20d8:	e28b3028 	add	r3, fp, #40	; 0x28
        1c20dc:	e893000c 	ldmia	r3, {r2, r3}
        1c20e0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1c20e4:	e1a01005 	mov	r1, r5
        1c20e8:	e1a00004 	mov	r0, r4
        1c20ec:	e59b2010 	ldr	r2, [fp, #16]
        1c20f0:	e59b301c 	ldr	r3, [fp, #28]
        1c20f4:	eb658c62 	bl	1b25284 <$find_gaps_in_line__FP4EXTRiN22UcN22PsT8UiUi>
        1c20f8:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1c20fc:	e3a03000 	mov	r3, #0	; 0x0
        1c2100:	e3a02000 	mov	r2, #0	; 0x0
        1c2104:	e1a00008 	mov	r0, r8
        1c2108:	e59d1008 	ldr	r1, [sp, #8]
        1c210c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c2110:	e1a02007 	mov	r2, r7
        1c2114:	e59d3020 	ldr	r3, [sp, #32]
        1c2118:	e28b1028 	add	r1, fp, #40	; 0x28
        1c211c:	e8910003 	ldmia	r1, {r0, r1}
        1c2120:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c2124:	e1a03006 	mov	r3, r6
        1c2128:	e1a01005 	mov	r1, r5
        1c212c:	e1a00004 	mov	r0, r4
        1c2130:	e59b201c 	ldr	r2, [fp, #28]
        1c2134:	eb658c53 	bl	1b25288 <$find_glitches_in_line__FP4EXTRiT2UcN22PsN27T2UiUi>
        1c2138:	e28dd020 	add	sp, sp, #32	; 0x20
        1c213c:	e3360003 	teq	r6, #3	; 0x3
        1c2140:	1a000008 	bne	1c2168 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x464>
        1c2144:	e59b3048 	ldr	r3, [fp, #72]
        1c2148:	e92d0008 	stmdb	sp!, {r3}
        1c214c:	e1a02005 	mov	r2, r5
        1c2150:	e1a01004 	mov	r1, r4
        1c2154:	e59b0004 	ldr	r0, [fp, #4]
        1c2158:	e59b3020 	ldr	r3, [fp, #32]
        1c215c:	eb658c4c 	bl	1b25294 <$glitch_to_sub_max__FP8low_typeP4EXTRiT3Ui>
        1c2160:	e28dd004 	add	sp, sp, #4	; 0x4
        1c2164:	ea000036 	b	1c2244 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x540>
        1c2168:	e3360001 	teq	r6, #1	; 0x1
        1c216c:	1a000034 	bne	1c2244 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x540>
        1c2170:	e1a02008 	mov	r2, r8
        1c2174:	e59b3044 	ldr	r3, [fp, #68]
        1c2178:	e59d1010 	ldr	r1, [sp, #16]
        1c217c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1c2180:	e1a02007 	mov	r2, r7
        1c2184:	e1a01005 	mov	r1, r5
        1c2188:	e1a00004 	mov	r0, r4
        1c218c:	e59b303c 	ldr	r3, [fp, #60]
        1c2190:	eb658c40 	bl	1b25298 <$glitch_to_super_min(EXTR *, int, short *, short *, short *, short *, unsigned int)>
        1c2194:	e28dd00c 	add	sp, sp, #12	; 0xc
        1c2198:	e3a00000 	mov	r0, #0	; 0x0
        1c219c:	e3a0a000 	mov	sl, #0	; 0x0
        1c21a0:	e3a01000 	mov	r1, #0	; 0x0
        1c21a4:	e3550000 	cmp	r5, #0	; 0x0
        1c21a8:	e58d000c 	str	r0, [sp, #12]
        1c21ac:	da000013 	ble	1c2200 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x4fc>
        1c21b0:	e7942200 	ldr	r2, [r4, r0, lsl #4]
        1c21b4:	e1a02842 	mov	r2, r2, asr #16
        1c21b8:	e1320009 	teq	r2, r9
        1c21bc:	059d200c 	ldreq	r2, [sp, #12]
        1c21c0:	02822001 	addeq	r2, r2, #1	; 0x1
        1c21c4:	058d200c 	streq	r2, [sp, #12]
        1c21c8:	0a000009 	beq	1c21f4 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x4f0>
        1c21cc:	e0842200 	add	r2, r4, r0, lsl #4
        1c21d0:	e5923006 	ldr	r3, [r2, #6]
        1c21d4:	e1a03843 	mov	r3, r3, asr #16
        1c21d8:	e7973083 	ldr	r3, [r7, r3, lsl #1]
        1c21dc:	e1a03843 	mov	r3, r3, asr #16
        1c21e0:	e5922004 	ldr	r2, [r2, #4]
        1c21e4:	e0432842 	sub	r2, r3, r2, asr #16
        1c21e8:	e152000a 	cmp	r2, sl
        1c21ec:	a1a0a002 	movge	sl, r2
        1c21f0:	e0821001 	add	r1, r2, r1
        1c21f4:	e2800001 	add	r0, r0, #1	; 0x1
        1c21f8:	e1500005 	cmp	r0, r5
        1c21fc:	baffffeb 	blt	1c21b0 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x4ac>
        1c2200:	e59d900c 	ldr	r9, [sp, #12]
        1c2204:	e1590005 	cmp	r9, r5
        1c2208:	aa000002 	bge	1c2218 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x514>
        1c220c:	e0450009 	sub	r0, r5, r9
        1c2210:	eb67c1ca 	bl	1bb2940 <$__rt_sdiv>
        1c2214:	e1a01000 	mov	r1, r0
        1c2218:	e3590000 	cmp	r9, #0	; 0x0
        1c221c:	da000008 	ble	1c2244 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x540>
        1c2220:	e28d300c 	add	r3, sp, #12	; 0xc
        1c2224:	e1a02001 	mov	r2, r1
        1c2228:	e92d000c 	stmdb	sp!, {r2, r3}
        1c222c:	e1a0300a 	mov	r3, sl
        1c2230:	e1a02007 	mov	r2, r7
        1c2234:	e1a01005 	mov	r1, r5
        1c2238:	e1a00004 	mov	r0, r4
        1c223c:	eb659044 	bl	1b26354 <$super_min_to_line(EXTR *, int, short *, short *, short *, int *)>
        1c2240:	e28dd008 	add	sp, sp, #8	; 0x8
        1c2244:	e59b1020 	ldr	r1, [fp, #32]
        1c2248:	e28b3028 	add	r3, fp, #40	; 0x28
        1c224c:	e893000c 	ldmia	r3, {r2, r3}
        1c2250:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1c2254:	e1a03008 	mov	r3, r8
        1c2258:	e1a02006 	mov	r2, r6
        1c225c:	e1a01005 	mov	r1, r5
        1c2260:	e1a00004 	mov	r0, r4
        1c2264:	eb658c09 	bl	1b25290 <$glitch_to_inside(EXTR *, int, unsigned char, short *, unsigned char, unsigned char, unsigned char)>
        1c2268:	e28dd00c 	add	sp, sp, #12	; 0xc
        1c226c:	e59d0018 	ldr	r0, [sp, #24]
        1c2270:	e3300001 	teq	r0, #1	; 0x1
        1c2274:	1a000008 	bne	1c229c <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x598>
        1c2278:	e59b3030 	ldr	r3, [fp, #48]
        1c227c:	e3330000 	teq	r3, #0	; 0x0
        1c2280:	0a000005 	beq	1c229c <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x598>
        1c2284:	e1a02006 	mov	r2, r6
        1c2288:	e1a01005 	mov	r1, r5
        1c228c:	e1a00004 	mov	r0, r4
        1c2290:	e59b3030 	ldr	r3, [fp, #48]
        1c2294:	eb659029 	bl	1b26340 <$spec_neibour_extr(EXTR *, int, unsigned char, unsigned char)>
        1c2298:	ea00001b 	b	1c230c <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x608>
        1c229c:	e59b1040 	ldr	r1, [fp, #64]
        1c22a0:	e59d0004 	ldr	r0, [sp, #4]
        1c22a4:	e0413000 	sub	r3, r1, r0
        1c22a8:	e1a09003 	mov	r9, r3
        1c22ac:	e92d0008 	stmdb	sp!, {r3}
        1c22b0:	e1a03007 	mov	r3, r7
        1c22b4:	e1a02006 	mov	r2, r6
        1c22b8:	e1a01005 	mov	r1, r5
        1c22bc:	e1a00004 	mov	r0, r4
        1c22c0:	eb659010 	bl	1b26308 <$neibour_susp_extr(EXTR *, int, unsigned char, short *, unsigned char)>
        1c22c4:	e28dd004 	add	sp, sp, #4	; 0x4
        1c22c8:	e3300001 	teq	r0, #1	; 0x1
        1c22cc:	1a00000e 	bne	1c230c <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x608>
        1c22d0:	e1a03009 	mov	r3, r9
        1c22d4:	e1a02007 	mov	r2, r7
        1c22d8:	e59b1024 	ldr	r1, [fp, #36]
        1c22dc:	e59bc018 	ldr	ip, [fp, #24]
        1c22e0:	e59d0000 	ldr	r0, [sp]
        1c22e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1c22e8:	e1a0300c 	mov	r3, ip
        1c22ec:	e1a02008 	mov	r2, r8
        1c22f0:	e92d000c 	stmdb	sp!, {r2, r3}
        1c22f4:	e1a03006 	mov	r3, r6
        1c22f8:	e1a01005 	mov	r1, r5
        1c22fc:	e1a00004 	mov	r0, r4
        1c2300:	e59b2010 	ldr	r2, [fp, #16]
        1c2304:	eb6587c1 	bl	1b24210 <$all_susp_extr__FP4EXTRiT2UcPsN32T5T2>
        1c2308:	e28dd018 	add	sp, sp, #24	; 0x18
        1c230c:	e3a01000 	mov	r1, #0	; 0x0
        1c2310:	e3a00000 	mov	r0, #0	; 0x0
        1c2314:	e3550000 	cmp	r5, #0	; 0x0
        1c2318:	da00001d 	ble	1c2394 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x690>
        1c231c:	e7942201 	ldr	r2, [r4, r1, lsl #4]
        1c2320:	e1a02842 	mov	r2, r2, asr #16
        1c2324:	e3320067 	teq	r2, #103	; 0x67
        1c2328:	02800001 	addeq	r0, r0, #1	; 0x1
        1c232c:	e2811001 	add	r1, r1, #1	; 0x1
        1c2330:	e1510005 	cmp	r1, r5
        1c2334:	bafffff8 	blt	1c231c <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x618>
        1c2338:	e3500000 	cmp	r0, #0	; 0x0
        1c233c:	da000014 	ble	1c2394 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x690>
        1c2340:	e3a00000 	mov	r0, #0	; 0x0
        1c2344:	e3550000 	cmp	r5, #0	; 0x0
        1c2348:	da00000c 	ble	1c2380 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x67c>
        1c234c:	e3a01067 	mov	r1, #103	; 0x67
        1c2350:	e3a02000 	mov	r2, #0	; 0x0
        1c2354:	e7943200 	ldr	r3, [r4, r0, lsl #4]
        1c2358:	e1a03843 	mov	r3, r3, asr #16
        1c235c:	e3330067 	teq	r3, #103	; 0x67
        1c2360:	e0843200 	add	r3, r4, r0, lsl #4
        1c2364:	15c32001 	strneb	r2, [r3, #1]
        1c2368:	15c32000 	strneb	r2, [r3]
        1c236c:	0593300c 	ldreq	r3, [r3, #12]
        1c2370:	05c31001 	streqb	r1, [r3, #1]
        1c2374:	e2800001 	add	r0, r0, #1	; 0x1
        1c2378:	e1500005 	cmp	r0, r5
        1c237c:	bafffff4 	blt	1c2354 <bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)+0x650>
        1c2380:	e1a00004 	mov	r0, r4
        1c2384:	e3a02067 	mov	r2, #103	; 0x67
        1c2388:	e59b100c 	ldr	r1, [fp, #12]
        1c238c:	eb6587b2 	bl	1b2425c <$delete_line_extr(EXTR *, int *, int)>
        1c2390:	e58d0014 	str	r0, [sp, #20]
        1c2394:	e59d0014 	ldr	r0, [sp, #20]
        1c2398:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BlockLCDActivity(unsigned char)
 * Address: 001ccf34
 */
BlockLCDActivity(unsigned char) {
    /*
        1ccf34:	e31000ff 	tst	r0, #255	; 0xff
        1ccf38:	e59f0010 	ldr	r0, [pc, #10]	; 1ccf50 <BlockLCDActivity(unsigned char)+0x1c>
        1ccf3c:	05901020 	ldreq	r1, [r0, #32]
        1ccf40:	1590101c 	ldrne	r1, [r0, #28]
        1ccf44:	e5900018 	ldr	r0, [r0, #24]
        1ccf48:	e3a02000 	mov	r2, #0	; 0x0
        1ccf4c:	ea68377a 	b	1bdad3c <TUSemaphoreGroup::$SemOp(TUSemaphoreOpList *, SemFlags)>
        1ccf50:	0c101a4c 	ldceq	10, cr1, [r0], -#304
    */
}

/**
 * Symbol: BlitToScreens__FP8PixelMapP4RectT2l
 * Address: 001ccfe4
 */
void globals::BlitToScreens() {
    /*
        1ccfe4:	e1a0c00d 	mov	ip, sp
        1ccfe8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1ccfec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ccff0:	e1a07000 	mov	r7, r0
        1ccff4:	e1a06001 	mov	r6, r1
        1ccff8:	e1a05002 	mov	r5, r2
        1ccffc:	e1a04003 	mov	r4, r3
        1cd000:	e92d0008 	stmdb	sp!, {r3}
        1cd004:	e1a03002 	mov	r3, r2
        1cd008:	e1a02001 	mov	r2, r1
        1cd00c:	e1a01000 	mov	r1, r0
        1cd010:	e59f8030 	ldr	r8, [pc, #30]	; 1cd048 <BlitToScreens__FP8PixelMapP4RectT2l+0x64>
        1cd014:	e5980000 	ldr	r0, [r8]
        1cd018:	eb65fd8e 	bl	1b4c658 <TScreenDriver::$Blit(PixelMap *, Rect *, Rect *, long)>
        1cd01c:	e28dd004 	add	sp, sp, #4	; 0x4
        1cd020:	e5b80004 	ldr	r0, [r8, #4]!
        1cd024:	e3300000 	teq	r0, #0	; 0x0
        1cd028:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1cd02c:	e1a03004 	mov	r3, r4
        1cd030:	e92d0008 	stmdb	sp!, {r3}
        1cd034:	e1a03005 	mov	r3, r5
        1cd038:	e1a02006 	mov	r2, r6
        1cd03c:	e1a01007 	mov	r1, r7
        1cd040:	eb65fd84 	bl	1b4c658 <TScreenDriver::$Blit(PixelMap *, Rect *, Rect *, long)>
        1cd044:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1cd048:	0c101a4c 	ldceq	10, cr1, [r0], -#304
    */
}

/**
 * Symbol: BlockConvertLin16ToStd8(void *, long *, long *, long *)
 * Address: 001e7410
 */
BlockConvertLin16ToStd8(void *, long *, long *, long *) {
    /*
        1e7410:	e92d4010 	stmdb	sp!, {r4, lr}
        1e7414:	e1a0e000 	mov	lr, r0
        1e7418:	e5930000 	ldr	r0, [r3]
        1e741c:	e591c000 	ldr	ip, [r1]
        1e7420:	e150000c 	cmp	r0, ip
        1e7424:	a1a0000c 	movge	r0, ip
        1e7428:	e3a0c000 	mov	ip, #0	; 0x0
        1e742c:	e3500000 	cmp	r0, #0	; 0x0
        1e7430:	da000009 	ble	1e745c <BlockConvertLin16ToStd8(void *, long *, long *, long *)+0x4c>
        1e7434:	e5924000 	ldr	r4, [r2]
        1e7438:	e1b04844 	movs	r4, r4, asr #16
        1e743c:	e2822002 	add	r2, r2, #2	; 0x2
        1e7440:	428440ff 	addmi	r4, r4, #255	; 0xff
        1e7444:	e1a04444 	mov	r4, r4, asr #8
        1e7448:	e2844080 	add	r4, r4, #128	; 0x80
        1e744c:	e4ce4001 	strb	r4, [lr], #1
        1e7450:	e28cc001 	add	ip, ip, #1	; 0x1
        1e7454:	e15c0000 	cmp	ip, r0
        1e7458:	bafffff5 	blt	1e7434 <BlockConvertLin16ToStd8(void *, long *, long *, long *)+0x24>
        1e745c:	e5830000 	str	r0, [r3]
        1e7460:	e5810000 	str	r0, [r1]
        1e7464:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: BlockConvertLin16ToMuLaw(void *, long *, long *, long *)
 * Address: 001e74c8
 */
BlockConvertLin16ToMuLaw(void *, long *, long *, long *) {
    /*
        1e74c8:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
        1e74cc:	e1a08002 	mov	r8, r2
        1e74d0:	e1a05000 	mov	r5, r0
        1e74d4:	e5932000 	ldr	r2, [r3]
        1e74d8:	e5910000 	ldr	r0, [r1]
        1e74dc:	e1520000 	cmp	r2, r0
        1e74e0:	a1a02000 	movge	r2, r0
        1e74e4:	e3a0e000 	mov	lr, #0	; 0x0
        1e74e8:	e3520000 	cmp	r2, #0	; 0x0
        1e74ec:	da000018 	ble	1e7554 <BlockConvertLin16ToMuLaw(void *, long *, long *, long *)+0x8c>
        1e74f0:	e3a06001 	mov	r6, #1	; 0x1
        1e74f4:	e5980000 	ldr	r0, [r8]
        1e74f8:	e1a00840 	mov	r0, r0, asr #16
        1e74fc:	e2888002 	add	r8, r8, #2	; 0x2
        1e7500:	e1b00140 	movs	r0, r0, asr #2
        1e7504:	e3a0c000 	mov	ip, #0	; 0x0
        1e7508:	42600000 	rsbmi	r0, r0, #0	; 0x0
        1e750c:	43a0c080 	movmi	ip, #128	; 0x80
        1e7510:	e2804021 	add	r4, r0, #33	; 0x21
        1e7514:	e1a072c4 	mov	r7, r4, asr #5
        1e7518:	e3a00007 	mov	r0, #7	; 0x7
        1e751c:	e1170016 	tst	r7, r6, lsl r0
        1e7520:	1a000001 	bne	1e752c <BlockConvertLin16ToMuLaw(void *, long *, long *, long *)+0x64>
        1e7524:	e2500001 	subs	r0, r0, #1	; 0x1
        1e7528:	5afffffb 	bpl	1e751c <BlockConvertLin16ToMuLaw(void *, long *, long *, long *)+0x54>
        1e752c:	e1a040c4 	mov	r4, r4, asr #1
        1e7530:	e1a04054 	mov	r4, r4, asr r0
        1e7534:	e204400f 	and	r4, r4, #15	; 0xf
        1e7538:	e1840200 	orr	r0, r4, r0, lsl #4
        1e753c:	e180000c 	orr	r0, r0, ip
        1e7540:	e1e00000 	mvn	r0, r0
        1e7544:	e4c50001 	strb	r0, [r5], #1
        1e7548:	e28ee001 	add	lr, lr, #1	; 0x1
        1e754c:	e15e0002 	cmp	lr, r2
        1e7550:	baffffe7 	blt	1e74f4 <BlockConvertLin16ToMuLaw(void *, long *, long *, long *)+0x2c>
        1e7554:	e5812000 	str	r2, [r1]
        1e7558:	e5832000 	str	r2, [r3]
        1e755c:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
    */
}

/**
 * Symbol: BlockConvertMuLawToLin16(void *, long *, long *, long *)
 * Address: 001e77fc
 */
BlockConvertMuLawToLin16(void *, long *, long *, long *) {
    /*
        1e77fc:	e1a0c00d 	mov	ip, sp
        1e7800:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e7804:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e7808:	e1a05001 	mov	r5, r1
        1e780c:	e1a04003 	mov	r4, r3
        1e7810:	e1a09002 	mov	r9, r2
        1e7814:	e1a0a000 	mov	sl, r0
        1e7818:	e5931000 	ldr	r1, [r3]
        1e781c:	e5950000 	ldr	r0, [r5]
        1e7820:	e1510000 	cmp	r1, r0
        1e7824:	a1a06000 	movge	r6, r0
        1e7828:	b1a06001 	movlt	r6, r1
        1e782c:	e3a08000 	mov	r8, #0	; 0x0
        1e7830:	e3560000 	cmp	r6, #0	; 0x0
        1e7834:	da00001e 	ble	1e78b4 <BlockConvertMuLawToLin16(void *, long *, long *, long *)+0xb8>
        1e7838:	e4d90001 	ldrb	r0, [r9], #1
        1e783c:	e1e00000 	mvn	r0, r0
        1e7840:	e1a00800 	mov	r0, r0, lsl #16
        1e7844:	e1a00820 	mov	r0, r0, lsr #16
        1e7848:	e3a01007 	mov	r1, #7	; 0x7
        1e784c:	e0011240 	and	r1, r1, r0, asr #4
        1e7850:	e1a01801 	mov	r1, r1, lsl #16
        1e7854:	e1a01821 	mov	r1, r1, lsr #16
        1e7858:	e200200f 	and	r2, r0, #15	; 0xf
        1e785c:	e3a03021 	mov	r3, #33	; 0x21
        1e7860:	e1832082 	orr	r2, r3, r2, lsl #1
        1e7864:	e1a02802 	mov	r2, r2, lsl #16
        1e7868:	e1a02822 	mov	r2, r2, lsr #16
        1e786c:	e1a01112 	mov	r1, r2, lsl r1
        1e7870:	e2411021 	sub	r1, r1, #33	; 0x21
        1e7874:	e1a07801 	mov	r7, r1, lsl #16
        1e7878:	e1a07847 	mov	r7, r7, asr #16
        1e787c:	e3100080 	tst	r0, #128	; 0x80
        1e7880:	12670000 	rsbne	r0, r7, #0	; 0x0
        1e7884:	11a07800 	movne	r7, r0, lsl #16
        1e7888:	11a07847 	movne	r7, r7, asr #16
        1e788c:	eb65b03f 	bl	1b53990 <$Random(void)>
        1e7890:	e3a01003 	mov	r1, #3	; 0x3
        1e7894:	e0010440 	and	r0, r1, r0, asr #8
        1e7898:	e1800107 	orr	r0, r0, r7, lsl #2
        1e789c:	e5ca0001 	strb	r0, [sl, #1]
        1e78a0:	e1a00440 	mov	r0, r0, asr #8
        1e78a4:	e4ca0002 	strb	r0, [sl], #2
        1e78a8:	e2888001 	add	r8, r8, #1	; 0x1
        1e78ac:	e1580006 	cmp	r8, r6
        1e78b0:	baffffe0 	blt	1e7838 <BlockConvertMuLawToLin16(void *, long *, long *, long *)+0x3c>
        1e78b4:	e5856000 	str	r6, [r5]
        1e78b8:	e5846000 	str	r6, [r4]
        1e78bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BlockConvertStd8ToLin16(void *, long *, long *, long *)
 * Address: 001e7e48
 */
BlockConvertStd8ToLin16(void *, long *, long *, long *) {
    /*
        1e7e48:	e1a0c00d 	mov	ip, sp
        1e7e4c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e7e50:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e7e54:	e1a05001 	mov	r5, r1
        1e7e58:	e1a04003 	mov	r4, r3
        1e7e5c:	e1a09002 	mov	r9, r2
        1e7e60:	e1a08000 	mov	r8, r0
        1e7e64:	e5931000 	ldr	r1, [r3]
        1e7e68:	e5950000 	ldr	r0, [r5]
        1e7e6c:	e1510000 	cmp	r1, r0
        1e7e70:	a1a06000 	movge	r6, r0
        1e7e74:	b1a06001 	movlt	r6, r1
        1e7e78:	e3a07000 	mov	r7, #0	; 0x0
        1e7e7c:	e3560000 	cmp	r6, #0	; 0x0
        1e7e80:	da00000d 	ble	1e7ebc <BlockConvertStd8ToLin16(void *, long *, long *, long *)+0x74>
        1e7e84:	e3a0a01f 	mov	sl, #31	; 0x1f
        1e7e88:	eb65aec0 	bl	1b53990 <$Random(void)>
        1e7e8c:	e00a1440 	and	r1, sl, r0, asr #8
        1e7e90:	e4d90001 	ldrb	r0, [r9], #1
        1e7e94:	e3a029fe 	mov	r2, #4161536	; 0x3f8000
        1e7e98:	e2422501 	sub	r2, r2, #4194304	; 0x400000
        1e7e9c:	e0820400 	add	r0, r2, r0, lsl #8
        1e7ea0:	e1810000 	orr	r0, r1, r0
        1e7ea4:	e5c80001 	strb	r0, [r8, #1]
        1e7ea8:	e1a00440 	mov	r0, r0, asr #8
        1e7eac:	e4c80002 	strb	r0, [r8], #2
        1e7eb0:	e2877001 	add	r7, r7, #1	; 0x1
        1e7eb4:	e1570006 	cmp	r7, r6
        1e7eb8:	bafffff2 	blt	1e7e88 <BlockConvertStd8ToLin16(void *, long *, long *, long *)+0x40>
        1e7ebc:	e5846000 	str	r6, [r4]
        1e7ec0:	e5856000 	str	r6, [r5]
        1e7ec4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BadWickedNaughtyNoot(long)
 * Address: 001ef4c4
 */
BadWickedNaughtyNoot(long) {
    /*
        1ef4c4:	e1a0c00d 	mov	ip, sp
        1ef4c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ef4cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ef4d0:	e1a05000 	mov	r5, r0
        1ef4d4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ef4d8:	e3a00002 	mov	r0, #2	; 0x2
        1ef4dc:	eb674b1a 	bl	1bc214c <$AllocateRefHandle(long)>
        1ef4e0:	e58d0000 	str	r0, [sp]
        1ef4e4:	e1a0400d 	mov	r4, sp
        1ef4e8:	e1a00105 	mov	r0, r5, lsl #2
        1ef4ec:	eb674b16 	bl	1bc214c <$AllocateRefHandle(long)>
        1ef4f0:	e58d0004 	str	r0, [sp, #4]
        1ef4f4:	e28d1004 	add	r1, sp, #4	; 0x4
        1ef4f8:	e59f0018 	ldr	r0, [pc, #18]	; 1ef518 <BadWickedNaughtyNoot(long)+0x54>
        1ef4fc:	e1a02004 	mov	r2, r4
        1ef500:	eb6842c7 	bl	1c00024 <$NSCallGlobalFn__FRC6RefVarN21>
        1ef504:	e59d0000 	ldr	r0, [sp]
        1ef508:	eb674f2b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ef50c:	e59d0004 	ldr	r0, [sp, #4]
        1ef510:	eb674f29 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ef514:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1ef518:	00681fc8 	rsbeq	r1, r8, r8, asr #31
    */
}

/**
 * Symbol: BumpListState(word_state *)
 * Address: 001f59d0
 */
BumpListState(word_state *) {
    /*
        1f59d0:	e5d01000 	ldrb	r1, [r0]
        1f59d4:	e35100fd 	cmp	r1, #253	; 0xfd
        1f59d8:	aa00000c 	bge	1f5a10 <BumpListState(word_state *)+0x40>
        1f59dc:	e2811001 	add	r1, r1, #1	; 0x1
        1f59e0:	e5c01000 	strb	r1, [r0]
        1f59e4:	e3a01000 	mov	r1, #0	; 0x0
        1f59e8:	e5c01001 	strb	r1, [r0, #1]
        1f59ec:	e5c01002 	strb	r1, [r0, #2]
        1f59f0:	e59f1020 	ldr	r1, [pc, #20]	; 1f5a18 <BumpListState(word_state *)+0x48>
        1f59f4:	e5911000 	ldr	r1, [r1]
        1f59f8:	e5911050 	ldr	r1, [r1, #80]
        1f59fc:	e5d02000 	ldrb	r2, [r0]
        1f5a00:	e7911182 	ldr	r1, [r1, r2, lsl #3]
        1f5a04:	e3310000 	teq	r1, #0	; 0x0
        1f5a08:	03a010ff 	moveq	r1, #255	; 0xff
        1f5a0c:	05c01000 	streqb	r1, [r0]
        1f5a10:	e5d00000 	ldrb	r0, [r0]
        1f5a14:	e1a0f00e 	mov	pc, lr
        1f5a18:	0c101b20 	ldceq	11, cr1, [r0], -#128
    */
}

/**
 * Symbol: BatteryStatusHelper(long, unsigned char)
 * Address: 002038a0
 */
BatteryStatusHelper(long, unsigned char) {
    /*
        2038a0:	e1a0c00d 	mov	ip, sp
        2038a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2038a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2038ac:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        2038b0:	e1a04000 	mov	r4, r0
        2038b4:	e20150ff 	and	r5, r1, #255	; 0xff
        2038b8:	e24dd038 	sub	sp, sp, #56	; 0x38
        2038bc:	eb66fa1f 	bl	1bc2140 <$AllocateFrame(void)>
        2038c0:	eb66fa21 	bl	1bc214c <$AllocateRefHandle(long)>
        2038c4:	e1a02005 	mov	r2, r5
        2038c8:	e58d0034 	str	r0, [sp, #52]
        2038cc:	e1a0100d 	mov	r1, sp
        2038d0:	e1a00004 	mov	r0, r4
        2038d4:	eb638eac 	bl	1ae738c <$GetBatteryStatus(long, PowerPlantStatus *, unsigned char)>
        2038d8:	e3300000 	teq	r0, #0	; 0x0
        2038dc:	1a00012c 	bne	203d94 <BatteryStatusHelper(long, unsigned char)+0x4f4>
        2038e0:	e59f0040 	ldr	r0, [pc, #40]	; 203928 <BatteryStatusHelper(long, unsigned char)+0x88>
        2038e4:	eb66fa20 	bl	1bc216c <$Clone(RefVar const &)>
        2038e8:	e59d1034 	ldr	r1, [sp, #52]
        2038ec:	e5810000 	str	r0, [r1]
        2038f0:	e59d0000 	ldr	r0, [sp]
        2038f4:	e2800001 	add	r0, r0, #1	; 0x1
        2038f8:	e59f402c 	ldr	r4, [pc, #2c]	; 20392c <BatteryStatusHelper(long, unsigned char)+0x8c>
        2038fc:	e3500005 	cmp	r0, #5	; 0x5
        203900:	908ff100 	addls	pc, pc, r0, lsl #2
        203904:	ea00001b 	b	203978 <BatteryStatusHelper(long, unsigned char)+0xd8>
        203908:	ea000009 	b	203934 <BatteryStatusHelper(long, unsigned char)+0x94>
        20390c:	ea000019 	b	203978 <BatteryStatusHelper(long, unsigned char)+0xd8>
        203910:	ea000009 	b	20393c <BatteryStatusHelper(long, unsigned char)+0x9c>
        203914:	ea00000c 	b	20394c <BatteryStatusHelper(long, unsigned char)+0xac>
        203918:	ea00000f 	b	20395c <BatteryStatusHelper(long, unsigned char)+0xbc>
        20391c:	e24dd004 	sub	sp, sp, #4	; 0x4
        203920:	e59f2008 	ldr	r2, [pc, #8]	; 203930 <BatteryStatusHelper(long, unsigned char)+0x90>
        203924:	ea00000e 	b	203964 <BatteryStatusHelper(long, unsigned char)+0xc4>
        203928:	00681330 	rsbeq	r1, r8, r0, lsr r3
        20392c:	00682010 	rsbeq	r2, r8, r0, lsl r0
        203930:	006835e0 	rsbeq	r3, r8, r0, ror #11
        203934:	e24dd004 	sub	sp, sp, #4	; 0x4
        203938:	ea000019 	b	2039a4 <BatteryStatusHelper(long, unsigned char)+0x104>
        20393c:	e24dd004 	sub	sp, sp, #4	; 0x4
        203940:	e59f2000 	ldr	r2, [pc, #0]	; 203948 <BatteryStatusHelper(long, unsigned char)+0xa8>
        203944:	ea000006 	b	203964 <BatteryStatusHelper(long, unsigned char)+0xc4>
        203948:	00681e00 	rsbeq	r1, r8, r0, lsl #28
        20394c:	e24dd004 	sub	sp, sp, #4	; 0x4
        203950:	e59f2000 	ldr	r2, [pc, #0]	; 203958 <BatteryStatusHelper(long, unsigned char)+0xb8>
        203954:	ea000002 	b	203964 <BatteryStatusHelper(long, unsigned char)+0xc4>
        203958:	00683a20 	rsbeq	r3, r8, r0, lsr #20
        20395c:	e24dd004 	sub	sp, sp, #4	; 0x4
        203960:	e59f200c 	ldr	r2, [pc, #c]	; 203974 <BatteryStatusHelper(long, unsigned char)+0xd4>
        203964:	e1a01004 	mov	r1, r4
        203968:	e28d0038 	add	r0, sp, #56	; 0x38
        20396c:	eb670a7d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203970:	ea00000b 	b	2039a4 <BatteryStatusHelper(long, unsigned char)+0x104>
        203974:	00683a28 	rsbeq	r3, r8, r8, lsr #20
        203978:	e24dd004 	sub	sp, sp, #4	; 0x4
        20397c:	e59d0004 	ldr	r0, [sp, #4]
        203980:	e1a00100 	mov	r0, r0, lsl #2
        203984:	eb66f9f0 	bl	1bc214c <$AllocateRefHandle(long)>
        203988:	e58d0000 	str	r0, [sp]
        20398c:	e1a0200d 	mov	r2, sp
        203990:	e1a01004 	mov	r1, r4
        203994:	e28d0038 	add	r0, sp, #56	; 0x38
        203998:	eb670a72 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        20399c:	e59d0000 	ldr	r0, [sp]
        2039a0:	eb66fe05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2039a4:	e59d0008 	ldr	r0, [sp, #8]
        2039a8:	ed9f418e 	ldfs	f4, [pc, #568]
        2039ac:	e3700001 	cmn	r0, #1	; 0x1
        2039b0:	0a00000d 	beq	2039ec <BatteryStatusHelper(long, unsigned char)+0x14c>
        2039b4:	e59d0008 	ldr	r0, [sp, #8]
        2039b8:	ee000110 	flts	f0, r0
        2039bc:	ee400104 	dvfs	f0, f0, f4
        2039c0:	ed2d8102 	stfd	f0, [sp, -#8]!
        2039c4:	e8bd0003 	ldmia	sp!, {r0, r1}
        2039c8:	eb67063f 	bl	1bc52cc <$MakeReal(double)>
        2039cc:	eb66f9de 	bl	1bc214c <$AllocateRefHandle(long)>
        2039d0:	e58d0000 	str	r0, [sp]
        2039d4:	e1a0200d 	mov	r2, sp
        2039d8:	e59f120c 	ldr	r1, [pc, #20c]	; 203bec <BatteryStatusHelper(long, unsigned char)+0x34c>
        2039dc:	e28d0038 	add	r0, sp, #56	; 0x38
        2039e0:	eb670a60 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2039e4:	e59d0000 	ldr	r0, [sp]
        2039e8:	eb66fdf3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2039ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2039f0:	e59d0010 	ldr	r0, [sp, #16]
        2039f4:	e3700001 	cmn	r0, #1	; 0x1
        2039f8:	0a000009 	beq	203a24 <BatteryStatusHelper(long, unsigned char)+0x184>
        2039fc:	e59d0010 	ldr	r0, [sp, #16]
        203a00:	e1a00100 	mov	r0, r0, lsl #2
        203a04:	eb66f9d0 	bl	1bc214c <$AllocateRefHandle(long)>
        203a08:	e58d0000 	str	r0, [sp]
        203a0c:	e1a0200d 	mov	r2, sp
        203a10:	e59f11d8 	ldr	r1, [pc, #1d8]	; 203bf0 <BatteryStatusHelper(long, unsigned char)+0x350>
        203a14:	e28d003c 	add	r0, sp, #60	; 0x3c
        203a18:	eb670a52 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203a1c:	e59d0000 	ldr	r0, [sp]
        203a20:	eb66fde5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203a24:	e24dd004 	sub	sp, sp, #4	; 0x4
        203a28:	e59d0018 	ldr	r0, [sp, #24]
        203a2c:	e3700001 	cmn	r0, #1	; 0x1
        203a30:	0a000009 	beq	203a5c <BatteryStatusHelper(long, unsigned char)+0x1bc>
        203a34:	e59d0018 	ldr	r0, [sp, #24]
        203a38:	e1a00100 	mov	r0, r0, lsl #2
        203a3c:	eb66f9c2 	bl	1bc214c <$AllocateRefHandle(long)>
        203a40:	e58d0000 	str	r0, [sp]
        203a44:	e1a0200d 	mov	r2, sp
        203a48:	e59f11a4 	ldr	r1, [pc, #1a4]	; 203bf4 <BatteryStatusHelper(long, unsigned char)+0x354>
        203a4c:	e28d0040 	add	r0, sp, #64	; 0x40
        203a50:	eb670a44 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203a54:	e59d0000 	ldr	r0, [sp]
        203a58:	eb66fdd7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203a5c:	e24dd004 	sub	sp, sp, #4	; 0x4
        203a60:	e59d0020 	ldr	r0, [sp, #32]
        203a64:	e3700001 	cmn	r0, #1	; 0x1
        203a68:	0a000009 	beq	203a94 <BatteryStatusHelper(long, unsigned char)+0x1f4>
        203a6c:	e59d0020 	ldr	r0, [sp, #32]
        203a70:	e1a00100 	mov	r0, r0, lsl #2
        203a74:	eb66f9b4 	bl	1bc214c <$AllocateRefHandle(long)>
        203a78:	e58d0000 	str	r0, [sp]
        203a7c:	e1a0200d 	mov	r2, sp
        203a80:	e59f1170 	ldr	r1, [pc, #170]	; 203bf8 <BatteryStatusHelper(long, unsigned char)+0x358>
        203a84:	e28d0044 	add	r0, sp, #68	; 0x44
        203a88:	eb670a36 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203a8c:	e59d0000 	ldr	r0, [sp]
        203a90:	eb66fdc9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203a94:	e24dd004 	sub	sp, sp, #4	; 0x4
        203a98:	e59d0028 	ldr	r0, [sp, #40]
        203a9c:	e3700001 	cmn	r0, #1	; 0x1
        203aa0:	0a00000d 	beq	203adc <BatteryStatusHelper(long, unsigned char)+0x23c>
        203aa4:	e59d0028 	ldr	r0, [sp, #40]
        203aa8:	ee000110 	flts	f0, r0
        203aac:	ee400104 	dvfs	f0, f0, f4
        203ab0:	ed2d8102 	stfd	f0, [sp, -#8]!
        203ab4:	e8bd0003 	ldmia	sp!, {r0, r1}
        203ab8:	eb670603 	bl	1bc52cc <$MakeReal(double)>
        203abc:	eb66f9a2 	bl	1bc214c <$AllocateRefHandle(long)>
        203ac0:	e58d0000 	str	r0, [sp]
        203ac4:	e1a0200d 	mov	r2, sp
        203ac8:	e59f112c 	ldr	r1, [pc, #12c]	; 203bfc <BatteryStatusHelper(long, unsigned char)+0x35c>
        203acc:	e28d0048 	add	r0, sp, #72	; 0x48
        203ad0:	eb670a24 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203ad4:	e59d0000 	ldr	r0, [sp]
        203ad8:	eb66fdb7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203adc:	e24dd004 	sub	sp, sp, #4	; 0x4
        203ae0:	e59d0040 	ldr	r0, [sp, #64]
        203ae4:	e3700001 	cmn	r0, #1	; 0x1
        203ae8:	0a00000d 	beq	203b24 <BatteryStatusHelper(long, unsigned char)+0x284>
        203aec:	e59d0040 	ldr	r0, [sp, #64]
        203af0:	ee000110 	flts	f0, r0
        203af4:	ee400104 	dvfs	f0, f0, f4
        203af8:	ed2d8102 	stfd	f0, [sp, -#8]!
        203afc:	e8bd0003 	ldmia	sp!, {r0, r1}
        203b00:	eb6705f1 	bl	1bc52cc <$MakeReal(double)>
        203b04:	eb66f990 	bl	1bc214c <$AllocateRefHandle(long)>
        203b08:	e58d0000 	str	r0, [sp]
        203b0c:	e1a0200d 	mov	r2, sp
        203b10:	e59f10e8 	ldr	r1, [pc, #e8]	; 203c00 <BatteryStatusHelper(long, unsigned char)+0x360>
        203b14:	e28d004c 	add	r0, sp, #76	; 0x4c
        203b18:	eb670a12 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203b1c:	e59d0000 	ldr	r0, [sp]
        203b20:	eb66fda5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203b24:	e59d0030 	ldr	r0, [sp, #48]
        203b28:	e59f40d4 	ldr	r4, [pc, #d4]	; 203c04 <BatteryStatusHelper(long, unsigned char)+0x364>
        203b2c:	e3300000 	teq	r0, #0	; 0x0
        203b30:	1a000003 	bne	203b44 <BatteryStatusHelper(long, unsigned char)+0x2a4>
        203b34:	e59f20cc 	ldr	r2, [pc, #cc]	; 203c08 <BatteryStatusHelper(long, unsigned char)+0x368>
        203b38:	e1a01004 	mov	r1, r4
        203b3c:	e28d004c 	add	r0, sp, #76	; 0x4c
        203b40:	eb670a08 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203b44:	e59d0030 	ldr	r0, [sp, #48]
        203b48:	e3300001 	teq	r0, #1	; 0x1
        203b4c:	1a000003 	bne	203b60 <BatteryStatusHelper(long, unsigned char)+0x2c0>
        203b50:	e59f20b4 	ldr	r2, [pc, #b4]	; 203c0c <BatteryStatusHelper(long, unsigned char)+0x36c>
        203b54:	e1a01004 	mov	r1, r4
        203b58:	e28d004c 	add	r0, sp, #76	; 0x4c
        203b5c:	eb670a01 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203b60:	e24dd004 	sub	sp, sp, #4	; 0x4
        203b64:	e59d0038 	ldr	r0, [sp, #56]
        203b68:	e3700001 	cmn	r0, #1	; 0x1
        203b6c:	0a00000d 	beq	203ba8 <BatteryStatusHelper(long, unsigned char)+0x308>
        203b70:	e59d0038 	ldr	r0, [sp, #56]
        203b74:	ee000110 	flts	f0, r0
        203b78:	ee400104 	dvfs	f0, f0, f4
        203b7c:	ed2d8102 	stfd	f0, [sp, -#8]!
        203b80:	e8bd0003 	ldmia	sp!, {r0, r1}
        203b84:	eb6705d0 	bl	1bc52cc <$MakeReal(double)>
        203b88:	eb66f96f 	bl	1bc214c <$AllocateRefHandle(long)>
        203b8c:	e58d0000 	str	r0, [sp]
        203b90:	e1a0200d 	mov	r2, sp
        203b94:	e59f1074 	ldr	r1, [pc, #74]	; 203c10 <BatteryStatusHelper(long, unsigned char)+0x370>
        203b98:	e28d0050 	add	r0, sp, #80	; 0x50
        203b9c:	eb6709f1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203ba0:	e59d0000 	ldr	r0, [sp]
        203ba4:	eb66fd84 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203ba8:	e59d003c 	ldr	r0, [sp, #60]
        203bac:	e2800001 	add	r0, r0, #1	; 0x1
        203bb0:	e59f405c 	ldr	r4, [pc, #5c]	; 203c14 <BatteryStatusHelper(long, unsigned char)+0x374>
        203bb4:	e3500007 	cmp	r0, #7	; 0x7
        203bb8:	908ff100 	addls	pc, pc, r0, lsl #2
        203bbc:	ea000033 	b	203c90 <BatteryStatusHelper(long, unsigned char)+0x3f0>
        203bc0:	ea000015 	b	203c1c <BatteryStatusHelper(long, unsigned char)+0x37c>
        203bc4:	ea000016 	b	203c24 <BatteryStatusHelper(long, unsigned char)+0x384>
        203bc8:	ea000019 	b	203c34 <BatteryStatusHelper(long, unsigned char)+0x394>
        203bcc:	ea00001c 	b	203c44 <BatteryStatusHelper(long, unsigned char)+0x3a4>
        203bd0:	ea00001f 	b	203c54 <BatteryStatusHelper(long, unsigned char)+0x3b4>
        203bd4:	ea000022 	b	203c64 <BatteryStatusHelper(long, unsigned char)+0x3c4>
        203bd8:	ea000025 	b	203c74 <BatteryStatusHelper(long, unsigned char)+0x3d4>
        203bdc:	e24dd004 	sub	sp, sp, #4	; 0x4
        203be0:	e59f2030 	ldr	r2, [pc, #30]	; 203c18 <BatteryStatusHelper(long, unsigned char)+0x378>
        203be4:	ea000024 	b	203c7c <BatteryStatusHelper(long, unsigned char)+0x3dc>
        203be8:	47800000 	strmi	r0, [r0, r0]
        203bec:	00682018 	rsbeq	r2, r8, r8, lsl r0
        203bf0:	00681fe8 	rsbeq	r1, r8, r8, ror #31
        203bf4:	00682000 	rsbeq	r2, r8, r0
        203bf8:	00681ff8 	streqd	r1, [r8], -#248
        203bfc:	00681ff0 	streqd	r1, [r8], -#240
        203c00:	006823a8 	rsbeq	r2, r8, r8, lsr #7
        203c04:	00681d38 	rsbeq	r1, r8, r8, lsr sp
        203c08:	00683a30 	rsbeq	r3, r8, r0, lsr sl
        203c0c:	00685278 	rsbeq	r5, r8, r8, ror r2
        203c10:	00681d78 	rsbeq	r1, r8, r8, ror sp
        203c14:	006823b8 	streqh	r2, [r8], -#56
        203c18:	00682878 	rsbeq	r2, r8, r8, ror r8
        203c1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        203c20:	ea000025 	b	203cbc <BatteryStatusHelper(long, unsigned char)+0x41c>
        203c24:	e24dd004 	sub	sp, sp, #4	; 0x4
        203c28:	e59f2000 	ldr	r2, [pc, #0]	; 203c30 <BatteryStatusHelper(long, unsigned char)+0x390>
        203c2c:	ea000012 	b	203c7c <BatteryStatusHelper(long, unsigned char)+0x3dc>
        203c30:	006829a0 	rsbeq	r2, r8, r0, lsr #19
        203c34:	e24dd004 	sub	sp, sp, #4	; 0x4
        203c38:	e59f2000 	ldr	r2, [pc, #0]	; 203c40 <BatteryStatusHelper(long, unsigned char)+0x3a0>
        203c3c:	ea00000e 	b	203c7c <BatteryStatusHelper(long, unsigned char)+0x3dc>
        203c40:	00684c78 	rsbeq	r4, r8, r8, ror ip
        203c44:	e24dd004 	sub	sp, sp, #4	; 0x4
        203c48:	e59f2000 	ldr	r2, [pc, #0]	; 203c50 <BatteryStatusHelper(long, unsigned char)+0x3b0>
        203c4c:	ea00000a 	b	203c7c <BatteryStatusHelper(long, unsigned char)+0x3dc>
        203c50:	00682d38 	rsbeq	r2, r8, r8, lsr sp
        203c54:	e24dd004 	sub	sp, sp, #4	; 0x4
        203c58:	e59f2000 	ldr	r2, [pc, #0]	; 203c60 <BatteryStatusHelper(long, unsigned char)+0x3c0>
        203c5c:	ea000006 	b	203c7c <BatteryStatusHelper(long, unsigned char)+0x3dc>
        203c60:	00682f18 	rsbeq	r2, r8, r8, lsl pc
        203c64:	e24dd004 	sub	sp, sp, #4	; 0x4
        203c68:	e59f2000 	ldr	r2, [pc, #0]	; 203c70 <BatteryStatusHelper(long, unsigned char)+0x3d0>
        203c6c:	ea000002 	b	203c7c <BatteryStatusHelper(long, unsigned char)+0x3dc>
        203c70:	00683f90 	streqb	r3, [r8], -#240
        203c74:	e24dd004 	sub	sp, sp, #4	; 0x4
        203c78:	e59f200c 	ldr	r2, [pc, #c]	; 203c8c <BatteryStatusHelper(long, unsigned char)+0x3ec>
        203c7c:	e1a01004 	mov	r1, r4
        203c80:	e28d0054 	add	r0, sp, #84	; 0x54
        203c84:	eb6709b7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203c88:	ea00000b 	b	203cbc <BatteryStatusHelper(long, unsigned char)+0x41c>
        203c8c:	00684c70 	rsbeq	r4, r8, r0, ror ip
        203c90:	e24dd004 	sub	sp, sp, #4	; 0x4
        203c94:	e59d0040 	ldr	r0, [sp, #64]
        203c98:	e1a00100 	mov	r0, r0, lsl #2
        203c9c:	eb66f92a 	bl	1bc214c <$AllocateRefHandle(long)>
        203ca0:	e58d0000 	str	r0, [sp]
        203ca4:	e1a0200d 	mov	r2, sp
        203ca8:	e1a01004 	mov	r1, r4
        203cac:	e28d0054 	add	r0, sp, #84	; 0x54
        203cb0:	eb6709ac 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203cb4:	e59d0000 	ldr	r0, [sp]
        203cb8:	eb66fd3f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203cbc:	e59d0044 	ldr	r0, [sp, #68]
        203cc0:	e3700001 	cmn	r0, #1	; 0x1
        203cc4:	0a00000d 	beq	203d00 <BatteryStatusHelper(long, unsigned char)+0x460>
        203cc8:	e59d0044 	ldr	r0, [sp, #68]
        203ccc:	ee000110 	flts	f0, r0
        203cd0:	ee400104 	dvfs	f0, f0, f4
        203cd4:	ed2d8102 	stfd	f0, [sp, -#8]!
        203cd8:	e8bd0003 	ldmia	sp!, {r0, r1}
        203cdc:	eb67057a 	bl	1bc52cc <$MakeReal(double)>
        203ce0:	eb66f919 	bl	1bc214c <$AllocateRefHandle(long)>
        203ce4:	e58d0000 	str	r0, [sp]
        203ce8:	e1a0200d 	mov	r2, sp
        203cec:	e59f10b8 	ldr	r1, [pc, #b8]	; 203dac <BatteryStatusHelper(long, unsigned char)+0x50c>
        203cf0:	e28d0054 	add	r0, sp, #84	; 0x54
        203cf4:	eb67099b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203cf8:	e59d0000 	ldr	r0, [sp]
        203cfc:	eb66fd2e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203d00:	e24dd004 	sub	sp, sp, #4	; 0x4
        203d04:	e59d0050 	ldr	r0, [sp, #80]
        203d08:	e3700001 	cmn	r0, #1	; 0x1
        203d0c:	0a00000d 	beq	203d48 <BatteryStatusHelper(long, unsigned char)+0x4a8>
        203d10:	e59d0050 	ldr	r0, [sp, #80]
        203d14:	ee000110 	flts	f0, r0
        203d18:	ee400104 	dvfs	f0, f0, f4
        203d1c:	ed2d8102 	stfd	f0, [sp, -#8]!
        203d20:	e8bd0003 	ldmia	sp!, {r0, r1}
        203d24:	eb670568 	bl	1bc52cc <$MakeReal(double)>
        203d28:	eb66f907 	bl	1bc214c <$AllocateRefHandle(long)>
        203d2c:	e58d0000 	str	r0, [sp]
        203d30:	e1a0200d 	mov	r2, sp
        203d34:	e59f1074 	ldr	r1, [pc, #74]	; 203db0 <BatteryStatusHelper(long, unsigned char)+0x510>
        203d38:	e28d0058 	add	r0, sp, #88	; 0x58
        203d3c:	eb670989 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203d40:	e59d0000 	ldr	r0, [sp]
        203d44:	eb66fd1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203d48:	e24dd004 	sub	sp, sp, #4	; 0x4
        203d4c:	e59d0058 	ldr	r0, [sp, #88]
        203d50:	e3700001 	cmn	r0, #1	; 0x1
        203d54:	0a00000d 	beq	203d90 <BatteryStatusHelper(long, unsigned char)+0x4f0>
        203d58:	e59d0058 	ldr	r0, [sp, #88]
        203d5c:	ee000110 	flts	f0, r0
        203d60:	ee400104 	dvfs	f0, f0, f4
        203d64:	ed2d8102 	stfd	f0, [sp, -#8]!
        203d68:	e8bd0003 	ldmia	sp!, {r0, r1}
        203d6c:	eb670556 	bl	1bc52cc <$MakeReal(double)>
        203d70:	eb66f8f5 	bl	1bc214c <$AllocateRefHandle(long)>
        203d74:	e58d0000 	str	r0, [sp]
        203d78:	e1a0200d 	mov	r2, sp
        203d7c:	e59f1030 	ldr	r1, [pc, #30]	; 203db4 <BatteryStatusHelper(long, unsigned char)+0x514>
        203d80:	e28d005c 	add	r0, sp, #92	; 0x5c
        203d84:	eb670977 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        203d88:	e59d0000 	ldr	r0, [sp]
        203d8c:	eb66fd0a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203d90:	e28dd028 	add	sp, sp, #40	; 0x28
        203d94:	e59d0034 	ldr	r0, [sp, #52]
        203d98:	e5904000 	ldr	r4, [r0]
        203d9c:	eb66fd06 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        203da0:	e1a00004 	mov	r0, r4
        203da4:	ed1bc208 	lfm	f4, 1, [fp, -#32]
        203da8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        203dac:	006823b0 	streqh	r2, [r8], -#48
        203db0:	00681e68 	rsbeq	r1, r8, r8, ror #28
        203db4:	00682008 	rsbeq	r2, r8, r8
    */
}

/**
 * Symbol: BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l
 * Address: 002195fc
 */
void globals::BracketMin() {
    /*
        2195fc:	e1a0c00d 	mov	ip, sp
        219600:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        219604:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        219608:	e24cb014 	sub	fp, ip, #20	; 0x14
        21960c:	e1a04001 	mov	r4, r1
        219610:	e1a05002 	mov	r5, r2
        219614:	e28ba014 	add	sl, fp, #20	; 0x14
        219618:	e89a0480 	ldmia	sl, {r7, sl}
        21961c:	e59b8020 	ldr	r8, [fp, #32]
        219620:	e59b901c 	ldr	r9, [fp, #28]
        219624:	e24dd010 	sub	sp, sp, #16	; 0x10
        219628:	e1a0300d 	mov	r3, sp
        21962c:	e59b202c 	ldr	r2, [fp, #44]
        219630:	e92d000c 	stmdb	sp!, {r2, r3}
        219634:	e1a01008 	mov	r1, r8
        219638:	e59b0004 	ldr	r0, [fp, #4]
        21963c:	e28b3024 	add	r3, fp, #36	; 0x24
        219640:	e893000c 	ldmia	r3, {r2, r3}
        219644:	e5900000 	ldr	r0, [r0]
        219648:	e1a0e00f 	mov	lr, pc
        21964c:	e1a0f009 	mov	pc, r9
        219650:	e28dd008 	add	sp, sp, #8	; 0x8
        219654:	e59b3010 	ldr	r3, [fp, #16]
        219658:	e5830000 	str	r0, [r3]
        21965c:	e1a0300d 	mov	r3, sp
        219660:	e59b202c 	ldr	r2, [fp, #44]
        219664:	e92d000c 	stmdb	sp!, {r2, r3}
        219668:	e1a01008 	mov	r1, r8
        21966c:	e28b3024 	add	r3, fp, #36	; 0x24
        219670:	e893000c 	ldmia	r3, {r2, r3}
        219674:	e5940000 	ldr	r0, [r4]
        219678:	e1a0e00f 	mov	lr, pc
        21967c:	e1a0f009 	mov	pc, r9
        219680:	e28dd008 	add	sp, sp, #8	; 0x8
        219684:	e5870000 	str	r0, [r7]
        219688:	e59b3010 	ldr	r3, [fp, #16]
        21968c:	e5931000 	ldr	r1, [r3]
        219690:	e1500001 	cmp	r0, r1
        219694:	da00000b 	ble	2196c8 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0xcc>
        219698:	e59b0004 	ldr	r0, [fp, #4]
        21969c:	e5900000 	ldr	r0, [r0]
        2196a0:	e5941000 	ldr	r1, [r4]
        2196a4:	e59b2004 	ldr	r2, [fp, #4]
        2196a8:	e5821000 	str	r1, [r2]
        2196ac:	e5840000 	str	r0, [r4]
        2196b0:	e5970000 	ldr	r0, [r7]
        2196b4:	e59b3010 	ldr	r3, [fp, #16]
        2196b8:	e5931000 	ldr	r1, [r3]
        2196bc:	e5871000 	str	r1, [r7]
        2196c0:	e59b3010 	ldr	r3, [fp, #16]
        2196c4:	e5830000 	str	r0, [r3]
        2196c8:	e5941000 	ldr	r1, [r4]
        2196cc:	e59b0004 	ldr	r0, [fp, #4]
        2196d0:	e5900000 	ldr	r0, [r0]
        2196d4:	e0411000 	sub	r1, r1, r0
        2196d8:	e59f60b4 	ldr	r6, [pc, #b4]	; 219794 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x198>
        2196dc:	e1a00006 	mov	r0, r6
        2196e0:	eb671e77 	bl	1be10c4 <$FixedMultiply>
        2196e4:	e5941000 	ldr	r1, [r4]
        2196e8:	e0800001 	add	r0, r0, r1
        2196ec:	e1a0300d 	mov	r3, sp
        2196f0:	e5850000 	str	r0, [r5]
        2196f4:	e59b202c 	ldr	r2, [fp, #44]
        2196f8:	e92d000c 	stmdb	sp!, {r2, r3}
        2196fc:	e1a01008 	mov	r1, r8
        219700:	e28b3024 	add	r3, fp, #36	; 0x24
        219704:	e893000c 	ldmia	r3, {r2, r3}
        219708:	e1a0e00f 	mov	lr, pc
        21970c:	e1a0f009 	mov	pc, r9
        219710:	e28dd008 	add	sp, sp, #8	; 0x8
        219714:	e58a0000 	str	r0, [sl]
        219718:	e5971000 	ldr	r1, [r7]
        21971c:	e1510000 	cmp	r1, r0
        219720:	da0000ab 	ble	2199d4 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x3d8>
        219724:	e5970000 	ldr	r0, [r7]
        219728:	e59a1000 	ldr	r1, [sl]
        21972c:	e0401001 	sub	r1, r0, r1
        219730:	e5940000 	ldr	r0, [r4]
        219734:	e59b2004 	ldr	r2, [fp, #4]
        219738:	e5922000 	ldr	r2, [r2]
        21973c:	e0400002 	sub	r0, r0, r2
        219740:	eb671e5f 	bl	1be10c4 <$FixedMultiply>
        219744:	e1a06000 	mov	r6, r0
        219748:	e5971000 	ldr	r1, [r7]
        21974c:	e59b3010 	ldr	r3, [fp, #16]
        219750:	e5930000 	ldr	r0, [r3]
        219754:	e0411000 	sub	r1, r1, r0
        219758:	e5940000 	ldr	r0, [r4]
        21975c:	e5952000 	ldr	r2, [r5]
        219760:	e0400002 	sub	r0, r0, r2
        219764:	eb671e56 	bl	1be10c4 <$FixedMultiply>
        219768:	e1a01000 	mov	r1, r0
        21976c:	e0400006 	sub	r0, r0, r6
        219770:	e3500000 	cmp	r0, #0	; 0x0
        219774:	da000007 	ble	219798 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x19c>
        219778:	b2600000 	rsblt	r0, r0, #0	; 0x0
        21977c:	e3a02001 	mov	r2, #1	; 0x1
        219780:	e3500001 	cmp	r0, #1	; 0x1
        219784:	d1a00002 	movle	r0, r2
        219788:	e3500000 	cmp	r0, #0	; 0x0
        21978c:	aa000008 	bge	2197b4 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x1b8>
        219790:	ea000006 	b	2197b0 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x1b4>
        219794:	00019e37 	andeq	r9, r1, r7, lsr lr
        219798:	b2600000 	rsblt	r0, r0, #0	; 0x0
        21979c:	e3a02001 	mov	r2, #1	; 0x1
        2197a0:	e3500001 	cmp	r0, #1	; 0x1
        2197a4:	d1a00002 	movle	r0, r2
        2197a8:	e3500000 	cmp	r0, #0	; 0x0
        2197ac:	b2600000 	rsblt	r0, r0, #0	; 0x0
        2197b0:	e2600000 	rsb	r0, r0, #0	; 0x0
        2197b4:	e1a00080 	mov	r0, r0, lsl #1
        2197b8:	e52d0004 	str	r0, [sp, -#4]!
        2197bc:	e5940000 	ldr	r0, [r4]
        2197c0:	e5952000 	ldr	r2, [r5]
        2197c4:	e0400002 	sub	r0, r0, r2
        2197c8:	eb671e3d 	bl	1be10c4 <$FixedMultiply>
        2197cc:	e52d0004 	str	r0, [sp, -#4]!
        2197d0:	e5940000 	ldr	r0, [r4]
        2197d4:	e59b1004 	ldr	r1, [fp, #4]
        2197d8:	e5911000 	ldr	r1, [r1]
        2197dc:	e0400001 	sub	r0, r0, r1
        2197e0:	e1a01006 	mov	r1, r6
        2197e4:	eb671e36 	bl	1be10c4 <$FixedMultiply>
        2197e8:	e1a01000 	mov	r1, r0
        2197ec:	e49d0004 	ldr	r0, [sp], #4
        2197f0:	e0400001 	sub	r0, r0, r1
        2197f4:	e49d1004 	ldr	r1, [sp], #4
        2197f8:	eb671e30 	bl	1be10c0 <$FixedDivide>
        2197fc:	e5942000 	ldr	r2, [r4]
        219800:	e0426000 	sub	r6, r2, r0
        219804:	e5950000 	ldr	r0, [r5]
        219808:	e0401002 	sub	r1, r0, r2
        21980c:	e0611201 	rsb	r1, r1, r1, lsl #4
        219810:	e0821081 	add	r1, r2, r1, lsl #1
        219814:	e58d1008 	str	r1, [sp, #8]
        219818:	e0461000 	sub	r1, r6, r0
        21981c:	e0420006 	sub	r0, r2, r6
        219820:	eb671e27 	bl	1be10c4 <$FixedMultiply>
        219824:	e3500000 	cmp	r0, #0	; 0x0
        219828:	da000022 	ble	2198b8 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x2bc>
        21982c:	e1a0300d 	mov	r3, sp
        219830:	e59b202c 	ldr	r2, [fp, #44]
        219834:	e92d000c 	stmdb	sp!, {r2, r3}
        219838:	e1a01008 	mov	r1, r8
        21983c:	e1a00006 	mov	r0, r6
        219840:	e28b3024 	add	r3, fp, #36	; 0x24
        219844:	e893000c 	ldmia	r3, {r2, r3}
        219848:	e1a0e00f 	mov	lr, pc
        21984c:	e1a0f009 	mov	pc, r9
        219850:	e28dd008 	add	sp, sp, #8	; 0x8
        219854:	e59a1000 	ldr	r1, [sl]
        219858:	e1500001 	cmp	r0, r1
        21985c:	aa000008 	bge	219884 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x288>
        219860:	e5941000 	ldr	r1, [r4]
        219864:	e59b2004 	ldr	r2, [fp, #4]
        219868:	e5821000 	str	r1, [r2]
        21986c:	e5846000 	str	r6, [r4]
        219870:	e5971000 	ldr	r1, [r7]
        219874:	e59b3010 	ldr	r3, [fp, #16]
        219878:	e5831000 	str	r1, [r3]
        21987c:	e5870000 	str	r0, [r7]
        219880:	ea000053 	b	2199d4 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x3d8>
        219884:	e5971000 	ldr	r1, [r7]
        219888:	e1500001 	cmp	r0, r1
        21988c:	c5856000 	strgt	r6, [r5]
        219890:	c58a0000 	strgt	r0, [sl]
        219894:	ca00004e 	bgt	2199d4 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x3d8>
        219898:	e5950000 	ldr	r0, [r5]
        21989c:	e5941000 	ldr	r1, [r4]
        2198a0:	e0401001 	sub	r1, r0, r1
        2198a4:	e51f0118 	ldr	r0, [pc, #fffffee8]	; 219794 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x198>
        2198a8:	eb671e05 	bl	1be10c4 <$FixedMultiply>
        2198ac:	e5951000 	ldr	r1, [r5]
        2198b0:	e0806001 	add	r6, r0, r1
        2198b4:	ea00002b 	b	219968 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x36c>
        2198b8:	e59d1008 	ldr	r1, [sp, #8]
        2198bc:	e0461001 	sub	r1, r6, r1
        2198c0:	e58d100c 	str	r1, [sp, #12]
        2198c4:	e5950000 	ldr	r0, [r5]
        2198c8:	e0400006 	sub	r0, r0, r6
        2198cc:	eb671dfc 	bl	1be10c4 <$FixedMultiply>
        2198d0:	e3500000 	cmp	r0, #0	; 0x0
        2198d4:	da00001b 	ble	219948 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x34c>
        2198d8:	e1a0300d 	mov	r3, sp
        2198dc:	e59b202c 	ldr	r2, [fp, #44]
        2198e0:	e92d000c 	stmdb	sp!, {r2, r3}
        2198e4:	e1a01008 	mov	r1, r8
        2198e8:	e1a00006 	mov	r0, r6
        2198ec:	e28b3024 	add	r3, fp, #36	; 0x24
        2198f0:	e893000c 	ldmia	r3, {r2, r3}
        2198f4:	e1a0e00f 	mov	lr, pc
        2198f8:	e1a0f009 	mov	pc, r9
        2198fc:	e28dd008 	add	sp, sp, #8	; 0x8
        219900:	e58d0004 	str	r0, [sp, #4]
        219904:	e59a1000 	ldr	r1, [sl]
        219908:	e1500001 	cmp	r0, r1
        21990c:	aa000020 	bge	219994 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x398>
        219910:	e5950000 	ldr	r0, [r5]
        219914:	e5840000 	str	r0, [r4]
        219918:	e5856000 	str	r6, [r5]
        21991c:	e5941000 	ldr	r1, [r4]
        219920:	e0461001 	sub	r1, r6, r1
        219924:	e51f0198 	ldr	r0, [pc, #fffffe68]	; 219794 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x198>
        219928:	eb671de5 	bl	1be10c4 <$FixedMultiply>
        21992c:	e5951000 	ldr	r1, [r5]
        219930:	e0806001 	add	r6, r0, r1
        219934:	e59a0000 	ldr	r0, [sl]
        219938:	e5870000 	str	r0, [r7]
        21993c:	e59d0004 	ldr	r0, [sp, #4]
        219940:	e58a0000 	str	r0, [sl]
        219944:	ea000007 	b	219968 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x36c>
        219948:	e59d1008 	ldr	r1, [sp, #8]
        21994c:	e5950000 	ldr	r0, [r5]
        219950:	e0411000 	sub	r1, r1, r0
        219954:	e59d000c 	ldr	r0, [sp, #12]
        219958:	eb671dd9 	bl	1be10c4 <$FixedMultiply>
        21995c:	e3500000 	cmp	r0, #0	; 0x0
        219960:	baffffcc 	blt	219898 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x29c>
        219964:	e59d6008 	ldr	r6, [sp, #8]
        219968:	e1a0300d 	mov	r3, sp
        21996c:	e59b202c 	ldr	r2, [fp, #44]
        219970:	e92d000c 	stmdb	sp!, {r2, r3}
        219974:	e1a01008 	mov	r1, r8
        219978:	e1a00006 	mov	r0, r6
        21997c:	e28b3024 	add	r3, fp, #36	; 0x24
        219980:	e893000c 	ldmia	r3, {r2, r3}
        219984:	e1a0e00f 	mov	lr, pc
        219988:	e1a0f009 	mov	pc, r9
        21998c:	e28dd008 	add	sp, sp, #8	; 0x8
        219990:	e58d0004 	str	r0, [sp, #4]
        219994:	e5940000 	ldr	r0, [r4]
        219998:	e59b1004 	ldr	r1, [fp, #4]
        21999c:	e5810000 	str	r0, [r1]
        2199a0:	e5950000 	ldr	r0, [r5]
        2199a4:	e5840000 	str	r0, [r4]
        2199a8:	e5856000 	str	r6, [r5]
        2199ac:	e5970000 	ldr	r0, [r7]
        2199b0:	e59b3010 	ldr	r3, [fp, #16]
        2199b4:	e5830000 	str	r0, [r3]
        2199b8:	e59a0000 	ldr	r0, [sl]
        2199bc:	e5870000 	str	r0, [r7]
        2199c0:	e59d0004 	ldr	r0, [sp, #4]
        2199c4:	e58a0000 	str	r0, [sl]
        2199c8:	e5971000 	ldr	r1, [r7]
        2199cc:	e1510000 	cmp	r1, r0
        2199d0:	caffff53 	bgt	219724 <BracketMin__FPlN51PFlT1PlT3PFlPlT2_lT3_llN21PFlPlT2_l+0x128>
        2199d4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BisectTest__FP10AngClusterlN22
 * Address: 0022632c
 */
void globals::BisectTest() {
    /*
        22632c:	e0811101 	add	r1, r1, r1, lsl #2
        226330:	e080c301 	add	ip, r0, r1, lsl #6
        226334:	e59cc00c 	ldr	ip, [ip, #12]
        226338:	e33c0000 	teq	ip, #0	; 0x0
        22633c:	00833103 	addeq	r3, r3, r3, lsl #2
        226340:	0080c303 	addeq	ip, r0, r3, lsl #6
        226344:	059cc00c 	ldreq	ip, [ip, #12]
        226348:	033c0000 	teqeq	ip, #0	; 0x0
        22634c:	13a00000 	movne	r0, #0	; 0x0
        226350:	11a0f00e 	movne	pc, lr
        226354:	e0822102 	add	r2, r2, r2, lsl #2
        226358:	e7902302 	ldr	r2, [r0, r2, lsl #6]
        22635c:	e7901301 	ldr	r1, [r0, r1, lsl #6]
        226360:	e0421001 	sub	r1, r2, r1
        226364:	e7900303 	ldr	r0, [r0, r3, lsl #6]
        226368:	e0400002 	sub	r0, r0, r2
        22636c:	e0510000 	subs	r0, r1, r0
        226370:	42600000 	rsbmi	r0, r0, #0	; 0x0
        226374:	e3500008 	cmp	r0, #8	; 0x8
        226378:	c3a00000 	movgt	r0, #0	; 0x0
        22637c:	d3a00001 	movle	r0, #1	; 0x1
        226380:	e20000ff 	and	r0, r0, #255	; 0xff
        226384:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: BeforeCluster(Cluster *, long)
 * Address: 0022bdb0
 */
BeforeCluster(Cluster *, long) {
    /*
        22bdb0:	e590000c 	ldr	r0, [r0, #12]
        22bdb4:	e1500001 	cmp	r0, r1
        22bdb8:	d3a00000 	movle	r0, #0	; 0x0
        22bdbc:	c3a00001 	movgt	r0, #1	; 0x1
        22bdc0:	e20000ff 	and	r0, r0, #255	; 0xff
        22bdc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: BTEncode(TCompressVars *, unsigned int)
 * Address: 0025ce5c
 */
BTEncode(TCompressVars *, unsigned int) {
    /*
        25ce5c:	e1a0c00d 	mov	ip, sp
        25ce60:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        25ce64:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ce68:	e1a04000 	mov	r4, r0
        25ce6c:	e1a05001 	mov	r5, r1
        25ce70:	e24dd00c 	sub	sp, sp, #12	; 0xc
        25ce74:	e2806a03 	add	r6, r0, #12288	; 0x3000
        25ce78:	e280ae86 	add	sl, r0, #2144	; 0x860
        25ce7c:	e28aaa01 	add	sl, sl, #4096	; 0x1000
        25ce80:	e241ccff 	sub	ip, r1, #65280	; 0xff00
        25ce84:	e33c00fe 	teq	ip, #254	; 0xfe
        25ce88:	e5967988 	ldr	r7, [r6, #2440]
        25ce8c:	e5968990 	ldr	r8, [r6, #2448]
        25ce90:	0a0000fe 	beq	25d290 <BTEncode(TCompressVars *, unsigned int)+0x434>
        25ce94:	e3370000 	teq	r7, #0	; 0x0
        25ce98:	1a000004 	bne	25ceb0 <BTEncode(TCompressVars *, unsigned int)+0x54>
        25ce9c:	e5940024 	ldr	r0, [r4, #36]
        25cea0:	e0807005 	add	r7, r0, r5
        25cea4:	e3a00001 	mov	r0, #1	; 0x1
        25cea8:	e58609a0 	str	r0, [r6, #2464]
        25ceac:	ea000028 	b	25cf54 <BTEncode(TCompressVars *, unsigned int)+0xf8>
        25ceb0:	e59609a0 	ldr	r0, [r6, #2464]
        25ceb4:	e2800001 	add	r0, r0, #1	; 0x1
        25ceb8:	e1a09007 	mov	r9, r7
        25cebc:	e58609a0 	str	r0, [r6, #2464]
        25cec0:	e58d7004 	str	r7, [sp, #4]
        25cec4:	e79a7087 	ldr	r7, [sl, r7, lsl #1]
        25cec8:	e1a07827 	mov	r7, r7, lsr #16
        25cecc:	e3370000 	teq	r7, #0	; 0x0
        25ced0:	0a000010 	beq	25cf18 <BTEncode(TCompressVars *, unsigned int)+0xbc>
        25ced4:	e0840007 	add	r0, r4, r7
        25ced8:	e5d00060 	ldrb	r0, [r0, #96]
        25cedc:	e1500005 	cmp	r0, r5
        25cee0:	2a000005 	bcs	25cefc <BTEncode(TCompressVars *, unsigned int)+0xa0>
        25cee4:	e58d7004 	str	r7, [sp, #4]
        25cee8:	e0840087 	add	r0, r4, r7, lsl #1
        25ceec:	e5907860 	ldr	r7, [r0, #2144]
        25cef0:	e1b07827 	movs	r7, r7, lsr #16
        25cef4:	1afffff6 	bne	25ced4 <BTEncode(TCompressVars *, unsigned int)+0x78>
        25cef8:	ea000006 	b	25cf18 <BTEncode(TCompressVars *, unsigned int)+0xbc>
        25cefc:	e3370000 	teq	r7, #0	; 0x0
        25cf00:	0a000004 	beq	25cf18 <BTEncode(TCompressVars *, unsigned int)+0xbc>
        25cf04:	e0840007 	add	r0, r4, r7
        25cf08:	e5d00060 	ldrb	r0, [r0, #96]
        25cf0c:	e1300005 	teq	r0, r5
        25cf10:	03a00001 	moveq	r0, #1	; 0x1
        25cf14:	0a000000 	beq	25cf1c <BTEncode(TCompressVars *, unsigned int)+0xc0>
        25cf18:	e3a00000 	mov	r0, #0	; 0x0
        25cf1c:	e21000ff 	ands	r0, r0, #255	; 0xff
        25cf20:	0a000009 	beq	25cf4c <BTEncode(TCompressVars *, unsigned int)+0xf0>
        25cf24:	e5d619b2 	ldrb	r1, [r6, #2482]
        25cf28:	e3310000 	teq	r1, #0	; 0x0
        25cf2c:	1a000002 	bne	25cf3c <BTEncode(TCompressVars *, unsigned int)+0xe0>
        25cf30:	e596198c 	ldr	r1, [r6, #2444]
        25cf34:	e1310007 	teq	r1, r7
        25cf38:	1a000003 	bne	25cf4c <BTEncode(TCompressVars *, unsigned int)+0xf0>
        25cf3c:	e3a01001 	mov	r1, #1	; 0x1
        25cf40:	e3a00000 	mov	r0, #0	; 0x0
        25cf44:	e58d1000 	str	r1, [sp]
        25cf48:	ea000001 	b	25cf54 <BTEncode(TCompressVars *, unsigned int)+0xf8>
        25cf4c:	e3a01000 	mov	r1, #0	; 0x0
        25cf50:	e58d1000 	str	r1, [sp]
        25cf54:	e5961994 	ldr	r1, [r6, #2452]
        25cf58:	e2811001 	add	r1, r1, #1	; 0x1
        25cf5c:	e5861994 	str	r1, [r6, #2452]
        25cf60:	e20510ff 	and	r1, r5, #255	; 0xff
        25cf64:	e3300000 	teq	r0, #0	; 0x0
        25cf68:	e58d1008 	str	r1, [sp, #8]
        25cf6c:	1a0000b1 	bne	25d238 <BTEncode(TCompressVars *, unsigned int)+0x3dc>
        25cf70:	e5d609b2 	ldrb	r0, [r6, #2482]
        25cf74:	e3300000 	teq	r0, #0	; 0x0
        25cf78:	1a00001d 	bne	25cff4 <BTEncode(TCompressVars *, unsigned int)+0x198>
        25cf7c:	e5d609b0 	ldrb	r0, [r6, #2480]
        25cf80:	e3300000 	teq	r0, #0	; 0x0
        25cf84:	1a000016 	bne	25cfe4 <BTEncode(TCompressVars *, unsigned int)+0x188>
        25cf88:	e59619a8 	ldr	r1, [r6, #2472]
        25cf8c:	e5940010 	ldr	r0, [r4, #16]
        25cf90:	e1510000 	cmp	r1, r0
        25cf94:	2a00000e 	bcs	25cfd4 <BTEncode(TCompressVars *, unsigned int)+0x178>
        25cf98:	e59609ac 	ldr	r0, [r6, #2476]
        25cf9c:	e1500009 	cmp	r0, r9
        25cfa0:	8a00000b 	bhi	25cfd4 <BTEncode(TCompressVars *, unsigned int)+0x178>
        25cfa4:	e1a00004 	mov	r0, r4
        25cfa8:	e3a01002 	mov	r1, #2	; 0x2
        25cfac:	e59629a8 	ldr	r2, [r6, #2472]
        25cfb0:	eb5eff93 	bl	1a1ce04 <$xbitpack__FP13TCompressVarsUiT2>
        25cfb4:	e59609a8 	ldr	r0, [r6, #2472]
        25cfb8:	e2800001 	add	r0, r0, #1	; 0x1
        25cfbc:	e58609a8 	str	r0, [r6, #2472]
        25cfc0:	e59609ac 	ldr	r0, [r6, #2476]
        25cfc4:	e1a00080 	mov	r0, r0, lsl #1
        25cfc8:	e58609ac 	str	r0, [r6, #2476]
        25cfcc:	e1500009 	cmp	r0, r9
        25cfd0:	9afffff3 	bls	25cfa4 <BTEncode(TCompressVars *, unsigned int)+0x148>
        25cfd4:	e1a01009 	mov	r1, r9
        25cfd8:	e1a00004 	mov	r0, r4
        25cfdc:	e59629a8 	ldr	r2, [r6, #2472]
        25cfe0:	eb5eff87 	bl	1a1ce04 <$xbitpack__FP13TCompressVarsUiT2>
        25cfe4:	e5960998 	ldr	r0, [r6, #2456]
        25cfe8:	e59619a8 	ldr	r1, [r6, #2472]
        25cfec:	e0800001 	add	r0, r0, r1
        25cff0:	e5860998 	str	r0, [r6, #2456]
        25cff4:	e5960994 	ldr	r0, [r6, #2452]
        25cff8:	e59619a4 	ldr	r1, [r6, #2468]
        25cffc:	e1500001 	cmp	r0, r1
        25d000:	9a000029 	bls	25d0ac <BTEncode(TCompressVars *, unsigned int)+0x250>
        25d004:	e5d619b0 	ldrb	r1, [r6, #2480]
        25d008:	e3310000 	teq	r1, #0	; 0x0
        25d00c:	0a000013 	beq	25d060 <BTEncode(TCompressVars *, unsigned int)+0x204>
        25d010:	e5962998 	ldr	r2, [r6, #2456]
        25d014:	e2822010 	add	r2, r2, #16	; 0x10
        25d018:	e1520180 	cmp	r2, r0, lsl #3
        25d01c:	2a00000d 	bcs	25d058 <BTEncode(TCompressVars *, unsigned int)+0x1fc>
        25d020:	e3a00c01 	mov	r0, #256	; 0x100
        25d024:	e58609a4 	str	r0, [r6, #2468]
        25d028:	e596099c 	ldr	r0, [r6, #2460]
        25d02c:	e20010ff 	and	r1, r0, #255	; 0xff
        25d030:	e59609cc 	ldr	r0, [r6, #2508]
        25d034:	e1a0e00f 	mov	lr, pc
        25d038:	e596f9c4 	ldr	pc, [r6, #2500]
        25d03c:	e3a01000 	mov	r1, #0	; 0x0
        25d040:	e59609cc 	ldr	r0, [r6, #2508]
        25d044:	e1a0e00f 	mov	lr, pc
        25d048:	e596f9c4 	ldr	pc, [r6, #2500]
        25d04c:	e3a01000 	mov	r1, #0	; 0x0
        25d050:	e5c619b0 	strb	r1, [r6, #2480]
        25d054:	ea000011 	b	25d0a0 <BTEncode(TCompressVars *, unsigned int)+0x244>
        25d058:	e3310000 	teq	r1, #0	; 0x0
        25d05c:	1a00000f 	bne	25d0a0 <BTEncode(TCompressVars *, unsigned int)+0x244>
        25d060:	e5961998 	ldr	r1, [r6, #2456]
        25d064:	e2411010 	sub	r1, r1, #16	; 0x10
        25d068:	e1510180 	cmp	r1, r0, lsl #3
        25d06c:	9a00000b 	bls	25d0a0 <BTEncode(TCompressVars *, unsigned int)+0x244>
        25d070:	e3a00040 	mov	r0, #64	; 0x40
        25d074:	e58609a4 	str	r0, [r6, #2468]
        25d078:	e1a00004 	mov	r0, r4
        25d07c:	e3a01000 	mov	r1, #0	; 0x0
        25d080:	e59629a8 	ldr	r2, [r6, #2472]
        25d084:	eb5eff5e 	bl	1a1ce04 <$xbitpack__FP13TCompressVarsUiT2>
        25d088:	e1a00004 	mov	r0, r4
        25d08c:	e3a02000 	mov	r2, #0	; 0x0
        25d090:	e3a01000 	mov	r1, #0	; 0x0
        25d094:	eb5eff5a 	bl	1a1ce04 <$xbitpack__FP13TCompressVarsUiT2>
        25d098:	e3a00001 	mov	r0, #1	; 0x1
        25d09c:	e5c609b0 	strb	r0, [r6, #2480]
        25d0a0:	e3a01000 	mov	r1, #0	; 0x0
        25d0a4:	e5861998 	str	r1, [r6, #2456]
        25d0a8:	e5861994 	str	r1, [r6, #2452]
        25d0ac:	e59609a0 	ldr	r0, [r6, #2464]
        25d0b0:	e5941028 	ldr	r1, [r4, #40]
        25d0b4:	e1500001 	cmp	r0, r1
        25d0b8:	93a00000 	movls	r0, #0	; 0x0
        25d0bc:	83a00001 	movhi	r0, #1	; 0x1
        25d0c0:	e59d1000 	ldr	r1, [sp]
        25d0c4:	e1800001 	orr	r0, r0, r1
        25d0c8:	e31000ff 	tst	r0, #255	; 0xff
        25d0cc:	1a000053 	bne	25d220 <BTEncode(TCompressVars *, unsigned int)+0x3c4>
        25d0d0:	e0841008 	add	r1, r4, r8
        25d0d4:	e59d0008 	ldr	r0, [sp, #8]
        25d0d8:	e5c10060 	strb	r0, [r1, #96]
        25d0dc:	e0840088 	add	r0, r4, r8, lsl #1
        25d0e0:	e2802a02 	add	r2, r0, #8192	; 0x2000
        25d0e4:	e5c29861 	strb	r9, [r2, #2145]
        25d0e8:	e1a01429 	mov	r1, r9, lsr #8
        25d0ec:	e5c21860 	strb	r1, [r2, #2144]
        25d0f0:	e3a01000 	mov	r1, #0	; 0x0
        25d0f4:	e08a2088 	add	r2, sl, r8, lsl #1
        25d0f8:	e5c21001 	strb	r1, [r2, #1]
        25d0fc:	e5c21000 	strb	r1, [r2]
        25d100:	e5c07861 	strb	r7, [r0, #2145]
        25d104:	e1a01427 	mov	r1, r7, lsr #8
        25d108:	e5c01860 	strb	r1, [r0, #2144]
        25d10c:	e59d0004 	ldr	r0, [sp, #4]
        25d110:	e1300009 	teq	r0, r9
        25d114:	e1a00008 	mov	r0, r8
        25d118:	1a000004 	bne	25d130 <BTEncode(TCompressVars *, unsigned int)+0x2d4>
        25d11c:	e08a1089 	add	r1, sl, r9, lsl #1
        25d120:	e5c10001 	strb	r0, [r1, #1]
        25d124:	e1a00420 	mov	r0, r0, lsr #8
        25d128:	e5c10000 	strb	r0, [r1]
        25d12c:	ea000004 	b	25d144 <BTEncode(TCompressVars *, unsigned int)+0x2e8>
        25d130:	e59d1004 	ldr	r1, [sp, #4]
        25d134:	e0841081 	add	r1, r4, r1, lsl #1
        25d138:	e5c10861 	strb	r0, [r1, #2145]
        25d13c:	e1a00420 	mov	r0, r0, lsr #8
        25d140:	e5c10860 	strb	r0, [r1, #2144]
        25d144:	e586898c 	str	r8, [r6, #2444]
        25d148:	e5940014 	ldr	r0, [r4, #20]
        25d14c:	e2400001 	sub	r0, r0, #1	; 0x1
        25d150:	e5d619b1 	ldrb	r1, [r6, #2481]
        25d154:	e3510000 	cmp	r1, #0	; 0x0
        25d158:	1a000005 	bne	25d174 <BTEncode(TCompressVars *, unsigned int)+0x318>
        25d15c:	e2888001 	add	r8, r8, #1	; 0x1
        25d160:	e1580000 	cmp	r8, r0
        25d164:	83a01001 	movhi	r1, #1	; 0x1
        25d168:	85c619b1 	strhib	r1, [r6, #2481]
        25d16c:	8a000001 	bhi	25d178 <BTEncode(TCompressVars *, unsigned int)+0x31c>
        25d170:	ea00002c 	b	25d228 <BTEncode(TCompressVars *, unsigned int)+0x3cc>
        25d174:	0a00002b 	beq	25d228 <BTEncode(TCompressVars *, unsigned int)+0x3cc>
        25d178:	e2888001 	add	r8, r8, #1	; 0x1
        25d17c:	e1580000 	cmp	r8, r0
        25d180:	8594101c 	ldrhi	r1, [r4, #28]
        25d184:	85942024 	ldrhi	r2, [r4, #36]
        25d188:	80818002 	addhi	r8, r1, r2
        25d18c:	e79a1088 	ldr	r1, [sl, r8, lsl #1]
        25d190:	e1a01821 	mov	r1, r1, lsr #16
        25d194:	e3310000 	teq	r1, #0	; 0x0
        25d198:	1afffff6 	bne	25d178 <BTEncode(TCompressVars *, unsigned int)+0x31c>
        25d19c:	e0841088 	add	r1, r4, r8, lsl #1
        25d1a0:	e2810a02 	add	r0, r1, #8192	; 0x2000
        25d1a4:	e5900860 	ldr	r0, [r0, #2144]
        25d1a8:	e1a00820 	mov	r0, r0, lsr #16
        25d1ac:	e79a2080 	ldr	r2, [sl, r0, lsl #1]
        25d1b0:	e1a02822 	mov	r2, r2, lsr #16
        25d1b4:	e1320008 	teq	r2, r8
        25d1b8:	1a000006 	bne	25d1d8 <BTEncode(TCompressVars *, unsigned int)+0x37c>
        25d1bc:	e5911860 	ldr	r1, [r1, #2144]
        25d1c0:	e1a01821 	mov	r1, r1, lsr #16
        25d1c4:	e08a0080 	add	r0, sl, r0, lsl #1
        25d1c8:	e5c01001 	strb	r1, [r0, #1]
        25d1cc:	e1a01441 	mov	r1, r1, asr #8
        25d1d0:	e5c01000 	strb	r1, [r0]
        25d1d4:	ea000013 	b	25d228 <BTEncode(TCompressVars *, unsigned int)+0x3cc>
        25d1d8:	e0840082 	add	r0, r4, r2, lsl #1
        25d1dc:	e5900860 	ldr	r0, [r0, #2144]
        25d1e0:	e1a00820 	mov	r0, r0, lsr #16
        25d1e4:	e1300008 	teq	r0, r8
        25d1e8:	0a000005 	beq	25d204 <BTEncode(TCompressVars *, unsigned int)+0x3a8>
        25d1ec:	e1a02000 	mov	r2, r0
        25d1f0:	e0840080 	add	r0, r4, r0, lsl #1
        25d1f4:	e5900860 	ldr	r0, [r0, #2144]
        25d1f8:	e1a00820 	mov	r0, r0, lsr #16
        25d1fc:	e1300008 	teq	r0, r8
        25d200:	1afffff9 	bne	25d1ec <BTEncode(TCompressVars *, unsigned int)+0x390>
        25d204:	e5910860 	ldr	r0, [r1, #2144]
        25d208:	e1a00820 	mov	r0, r0, lsr #16
        25d20c:	e0841082 	add	r1, r4, r2, lsl #1
        25d210:	e5c10861 	strb	r0, [r1, #2145]
        25d214:	e1a00440 	mov	r0, r0, asr #8
        25d218:	e5c10860 	strb	r0, [r1, #2144]
        25d21c:	ea000001 	b	25d228 <BTEncode(TCompressVars *, unsigned int)+0x3cc>
        25d220:	e3a01000 	mov	r1, #0	; 0x0
        25d224:	e586198c 	str	r1, [r6, #2444]
        25d228:	e5b40024 	ldr	r0, [r4, #36]!
        25d22c:	e0807005 	add	r7, r0, r5
        25d230:	e3a00001 	mov	r0, #1	; 0x1
        25d234:	e58609a0 	str	r0, [r6, #2464]
        25d238:	e5d609b0 	ldrb	r0, [r6, #2480]
        25d23c:	e3300000 	teq	r0, #0	; 0x0
        25d240:	0a00000a 	beq	25d270 <BTEncode(TCompressVars *, unsigned int)+0x414>
        25d244:	e59d1008 	ldr	r1, [sp, #8]
        25d248:	e59609cc 	ldr	r0, [r6, #2508]
        25d24c:	e1a0e00f 	mov	lr, pc
        25d250:	e596f9c4 	ldr	pc, [r6, #2500]
        25d254:	e596099c 	ldr	r0, [r6, #2460]
        25d258:	e1300005 	teq	r0, r5
        25d25c:	1a000003 	bne	25d270 <BTEncode(TCompressVars *, unsigned int)+0x414>
        25d260:	e3a01001 	mov	r1, #1	; 0x1
        25d264:	e59609cc 	ldr	r0, [r6, #2508]
        25d268:	e1a0e00f 	mov	lr, pc
        25d26c:	e596f9c4 	ldr	pc, [r6, #2500]
        25d270:	e596099c 	ldr	r0, [r6, #2460]
        25d274:	e1300005 	teq	r0, r5
        25d278:	02800033 	addeq	r0, r0, #51	; 0x33
        25d27c:	020000ff 	andeq	r0, r0, #255	; 0xff
        25d280:	0586099c 	streq	r0, [r6, #2460]
        25d284:	e3a01000 	mov	r1, #0	; 0x0
        25d288:	e5c619b2 	strb	r1, [r6, #2482]
        25d28c:	ea00002b 	b	25d340 <BTEncode(TCompressVars *, unsigned int)+0x4e4>
        25d290:	e5d609b0 	ldrb	r0, [r6, #2480]
        25d294:	e3300000 	teq	r0, #0	; 0x0
        25d298:	05d609b2 	ldreqb	r0, [r6, #2482]
        25d29c:	03300000 	teqeq	r0, #0	; 0x0
        25d2a0:	1a000026 	bne	25d340 <BTEncode(TCompressVars *, unsigned int)+0x4e4>
        25d2a4:	e3370000 	teq	r7, #0	; 0x0
        25d2a8:	0a00001c 	beq	25d320 <BTEncode(TCompressVars *, unsigned int)+0x4c4>
        25d2ac:	e59609a8 	ldr	r0, [r6, #2472]
        25d2b0:	e5941010 	ldr	r1, [r4, #16]
        25d2b4:	e1500001 	cmp	r0, r1
        25d2b8:	2a00000e 	bcs	25d2f8 <BTEncode(TCompressVars *, unsigned int)+0x49c>
        25d2bc:	e59609ac 	ldr	r0, [r6, #2476]
        25d2c0:	e1500007 	cmp	r0, r7
        25d2c4:	8a00000b 	bhi	25d2f8 <BTEncode(TCompressVars *, unsigned int)+0x49c>
        25d2c8:	e1a00004 	mov	r0, r4
        25d2cc:	e3a01002 	mov	r1, #2	; 0x2
        25d2d0:	e59629a8 	ldr	r2, [r6, #2472]
        25d2d4:	eb5efeca 	bl	1a1ce04 <$xbitpack__FP13TCompressVarsUiT2>
        25d2d8:	e59609a8 	ldr	r0, [r6, #2472]
        25d2dc:	e2800001 	add	r0, r0, #1	; 0x1
        25d2e0:	e58609a8 	str	r0, [r6, #2472]
        25d2e4:	e59609ac 	ldr	r0, [r6, #2476]
        25d2e8:	e1a00080 	mov	r0, r0, lsl #1
        25d2ec:	e58609ac 	str	r0, [r6, #2476]
        25d2f0:	e1500007 	cmp	r0, r7
        25d2f4:	9afffff3 	bls	25d2c8 <BTEncode(TCompressVars *, unsigned int)+0x46c>
        25d2f8:	e3a00001 	mov	r0, #1	; 0x1
        25d2fc:	e5c609b2 	strb	r0, [r6, #2482]
        25d300:	e1a01007 	mov	r1, r7
        25d304:	e1a00004 	mov	r0, r4
        25d308:	e59629a8 	ldr	r2, [r6, #2472]
        25d30c:	eb5efebc 	bl	1a1ce04 <$xbitpack__FP13TCompressVarsUiT2>
        25d310:	e5960998 	ldr	r0, [r6, #2456]
        25d314:	e59619a8 	ldr	r1, [r6, #2472]
        25d318:	e0800001 	add	r0, r0, r1
        25d31c:	e5860998 	str	r0, [r6, #2456]
        25d320:	e1a00004 	mov	r0, r4
        25d324:	e3a01001 	mov	r1, #1	; 0x1
        25d328:	e59629a8 	ldr	r2, [r6, #2472]
        25d32c:	eb5efeb4 	bl	1a1ce04 <$xbitpack__FP13TCompressVarsUiT2>
        25d330:	e1a00004 	mov	r0, r4
        25d334:	e3a02000 	mov	r2, #0	; 0x0
        25d338:	e3a01000 	mov	r1, #0	; 0x0
        25d33c:	eb5efeb0 	bl	1a1ce04 <$xbitpack__FP13TCompressVarsUiT2>
        25d340:	e5a67988 	str	r7, [r6, #2440]!
        25d344:	e5a68008 	str	r8, [r6, #8]!
        25d348:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BTInitEn(TCompressVars *)
 * Address: 0025d34c
 */
BTInitEn(TCompressVars *) {
    /*
        25d34c:	e3a02001 	mov	r2, #1	; 0x1
        25d350:	e2801a03 	add	r1, r0, #12288	; 0x3000
        25d354:	e5c129b0 	strb	r2, [r1, #2480]
        25d358:	e3a02000 	mov	r2, #0	; 0x0
        25d35c:	e5812994 	str	r2, [r1, #2452]
        25d360:	e5812998 	str	r2, [r1, #2456]
        25d364:	e590301c 	ldr	r3, [r0, #28]
        25d368:	e590c024 	ldr	ip, [r0, #36]
        25d36c:	e083300c 	add	r3, r3, ip
        25d370:	e2811e99 	add	r1, r1, #2448	; 0x990
        25d374:	e801000c 	stmda	r1, {r2, r3}
        25d378:	e2411e99 	sub	r1, r1, #2448	; 0x990
        25d37c:	e5903018 	ldr	r3, [r0, #24]
        25d380:	e2833001 	add	r3, r3, #1	; 0x1
        25d384:	e58139a8 	str	r3, [r1, #2472]
        25d388:	e590301c 	ldr	r3, [r0, #28]
        25d38c:	e1a03083 	mov	r3, r3, lsl #1
        25d390:	e58139ac 	str	r3, [r1, #2476]
        25d394:	e3a03040 	mov	r3, #64	; 0x40
        25d398:	e5812988 	str	r2, [r1, #2440]
        25d39c:	e58139a4 	str	r3, [r1, #2468]
        25d3a0:	e5c129b1 	strb	r2, [r1, #2481]
        25d3a4:	e581299c 	str	r2, [r1, #2460]
        25d3a8:	e5c129b2 	strb	r2, [r1, #2482]
        25d3ac:	e3a01000 	mov	r1, #0	; 0x0
        25d3b0:	ea5ec8f7 	b	1a0f794 <$dict_init(TCompressVars *, unsigned int)>
    */
}

/**
 * Symbol: BTFlush(TCompressVars *)
 * Address: 0025d3b4
 */
BTFlush(TCompressVars *) {
    /*
        25d3b4:	e3a01801 	mov	r1, #65536	; 0x10000
        25d3b8:	e2411002 	sub	r1, r1, #2	; 0x2
        25d3bc:	ea5eb887 	b	1a0b5e0 <$BTEncode(TCompressVars *, unsigned int)>
    */
}

/**
 * Symbol: BTInitDe(TCompressVars *)
 * Address: 0025d3c0
 */
BTInitDe(TCompressVars *) {
    /*
        25d3c0:	e92d4000 	stmdb	sp!, {lr}
        25d3c4:	e3a02000 	mov	r2, #0	; 0x0
        25d3c8:	e590300c 	ldr	r3, [r0, #12]
        25d3cc:	e2801a03 	add	r1, r0, #12288	; 0x3000
        25d3d0:	e5c12863 	strb	r2, [r1, #2147]
        25d3d4:	e590c028 	ldr	ip, [r0, #40]
        25d3d8:	e08cc000 	add	ip, ip, r0
        25d3dc:	e28cc083 	add	ip, ip, #131	; 0x83
        25d3e0:	e28ccb0e 	add	ip, ip, #14336	; 0x3800
        25d3e4:	e5812878 	str	r2, [r1, #2168]
        25d3e8:	e581c984 	str	ip, [r1, #2436]
        25d3ec:	e5812874 	str	r2, [r1, #2164]
        25d3f0:	e590c01c 	ldr	ip, [r0, #28]
        25d3f4:	e08cc003 	add	ip, ip, r3
        25d3f8:	e590e024 	ldr	lr, [r0, #36]
        25d3fc:	e08cc00e 	add	ip, ip, lr
        25d400:	e5812880 	str	r2, [r1, #2176]
        25d404:	e581c87c 	str	ip, [r1, #2172]
        25d408:	e590c018 	ldr	ip, [r0, #24]
        25d40c:	e28cc001 	add	ip, ip, #1	; 0x1
        25d410:	e581c870 	str	ip, [r1, #2160]
        25d414:	e3a0c001 	mov	ip, #1	; 0x1
        25d418:	e5c1c860 	strb	ip, [r1, #2144]
        25d41c:	e5c12861 	strb	r2, [r1, #2145]
        25d420:	e5c12862 	strb	r2, [r1, #2146]
        25d424:	e581286c 	str	r2, [r1, #2156]
        25d428:	e5c12864 	strb	r2, [r1, #2148]
        25d42c:	e1a01003 	mov	r1, r3
        25d430:	e8bd4000 	ldmia	sp!, {lr}
        25d434:	ea5ec8d6 	b	1a0f794 <$dict_init(TCompressVars *, unsigned int)>
    */
}

/**
 * Symbol: BTDecode(TCompressVars *, unsigned int)
 * Address: 0025d438
 */
BTDecode(TCompressVars *, unsigned int) {
    /*
        25d438:	e1a0c00d 	mov	ip, sp
        25d43c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        25d440:	e24cb004 	sub	fp, ip, #4	; 0x4
        25d444:	e1a04000 	mov	r4, r0
        25d448:	e1a02001 	mov	r2, r1
        25d44c:	e24dd020 	sub	sp, sp, #32	; 0x20
        25d450:	e3a00000 	mov	r0, #0	; 0x0
        25d454:	e2849e86 	add	r9, r4, #2144	; 0x860
        25d458:	e2899a01 	add	r9, r9, #4096	; 0x1000
        25d45c:	e2845a03 	add	r5, r4, #12288	; 0x3000
        25d460:	e58d0004 	str	r0, [sp, #4]
        25d464:	e5956874 	ldr	r6, [r5, #2164]
        25d468:	e595787c 	ldr	r7, [r5, #2172]
        25d46c:	e594100c 	ldr	r1, [r4, #12]
        25d470:	e1a00002 	mov	r0, r2
        25d474:	e58d100c 	str	r1, [sp, #12]
        25d478:	e3a01000 	mov	r1, #0	; 0x0
        25d47c:	e58d1018 	str	r1, [sp, #24]
        25d480:	e58d1010 	str	r1, [sp, #16]
        25d484:	e5d51860 	ldrb	r1, [r5, #2144]
        25d488:	e3310000 	teq	r1, #0	; 0x0
        25d48c:	0a00006f 	beq	25d650 <BTDecode(TCompressVars *, unsigned int)+0x218>
        25d490:	e5d51863 	ldrb	r1, [r5, #2147]
        25d494:	e3310000 	teq	r1, #0	; 0x0
        25d498:	0a00001f 	beq	25d51c <BTDecode(TCompressVars *, unsigned int)+0xe4>
        25d49c:	e3300000 	teq	r0, #0	; 0x0
        25d4a0:	0a000007 	beq	25d4c4 <BTDecode(TCompressVars *, unsigned int)+0x8c>
        25d4a4:	e3300001 	teq	r0, #1	; 0x1
        25d4a8:	0a00000f 	beq	25d4ec <BTDecode(TCompressVars *, unsigned int)+0xb4>
        25d4ac:	e3300002 	teq	r0, #2	; 0x2
        25d4b0:	13e00003 	mvnne	r0, #3	; 0x3
        25d4b4:	1a00009e 	bne	25d734 <BTDecode(TCompressVars *, unsigned int)+0x2fc>
        25d4b8:	e1a00004 	mov	r0, r4
        25d4bc:	eb5eb849 	bl	1a0b5e8 <$BTInitDe(TCompressVars *)>
        25d4c0:	ea000165 	b	25da5c <BTDecode(TCompressVars *, unsigned int)+0x624>
        25d4c4:	e5950868 	ldr	r0, [r5, #2152]
        25d4c8:	e5b41028 	ldr	r1, [r4, #40]!
        25d4cc:	e1500001 	cmp	r0, r1
        25d4d0:	33a00000 	movcc	r0, #0	; 0x0
        25d4d4:	23a00001 	movcs	r0, #1	; 0x1
        25d4d8:	e5c50861 	strb	r0, [r5, #2145]
        25d4dc:	e3a00000 	mov	r0, #0	; 0x0
        25d4e0:	e5856878 	str	r6, [r5, #2168]
        25d4e4:	e5c50863 	strb	r0, [r5, #2147]
        25d4e8:	ea000155 	b	25da44 <BTDecode(TCompressVars *, unsigned int)+0x60c>
        25d4ec:	e59509cc 	ldr	r0, [r5, #2508]
        25d4f0:	e595186c 	ldr	r1, [r5, #2156]
        25d4f4:	e1a0e00f 	mov	lr, pc
        25d4f8:	e595f9c8 	ldr	pc, [r5, #2504]
        25d4fc:	e595086c 	ldr	r0, [r5, #2156]
        25d500:	e20080ff 	and	r8, r0, #255	; 0xff
        25d504:	e2800033 	add	r0, r0, #51	; 0x33
        25d508:	e20000ff 	and	r0, r0, #255	; 0xff
        25d50c:	e585086c 	str	r0, [r5, #2156]
        25d510:	e3a00000 	mov	r0, #0	; 0x0
        25d514:	e5c50863 	strb	r0, [r5, #2147]
        25d518:	ea000009 	b	25d544 <BTDecode(TCompressVars *, unsigned int)+0x10c>
        25d51c:	e20080ff 	and	r8, r0, #255	; 0xff
        25d520:	e595086c 	ldr	r0, [r5, #2156]
        25d524:	e1300008 	teq	r0, r8
        25d528:	03a02001 	moveq	r2, #1	; 0x1
        25d52c:	05c52863 	streqb	r2, [r5, #2147]
        25d530:	0a00004b 	beq	25d664 <BTDecode(TCompressVars *, unsigned int)+0x22c>
        25d534:	e1a01008 	mov	r1, r8
        25d538:	e59509cc 	ldr	r0, [r5, #2508]
        25d53c:	e1a0e00f 	mov	lr, pc
        25d540:	e595f9c8 	ldr	pc, [r5, #2504]
        25d544:	e3360000 	teq	r6, #0	; 0x0
        25d548:	1a000008 	bne	25d570 <BTDecode(TCompressVars *, unsigned int)+0x138>
        25d54c:	e59d100c 	ldr	r1, [sp, #12]
        25d550:	e0810008 	add	r0, r1, r8
        25d554:	e5b41024 	ldr	r1, [r4, #36]!
        25d558:	e0806001 	add	r6, r0, r1
        25d55c:	e3a00000 	mov	r0, #0	; 0x0
        25d560:	e5c50861 	strb	r0, [r5, #2145]
        25d564:	e3a02001 	mov	r2, #1	; 0x1
        25d568:	e5852868 	str	r2, [r5, #2152]
        25d56c:	ea00013a 	b	25da5c <BTDecode(TCompressVars *, unsigned int)+0x624>
        25d570:	e5950868 	ldr	r0, [r5, #2152]
        25d574:	e2800001 	add	r0, r0, #1	; 0x1
        25d578:	e5850868 	str	r0, [r5, #2152]
        25d57c:	e58d6008 	str	r6, [sp, #8]
        25d580:	e1a0a006 	mov	sl, r6
        25d584:	e7996086 	ldr	r6, [r9, r6, lsl #1]
        25d588:	e1a06826 	mov	r6, r6, lsr #16
        25d58c:	e3360000 	teq	r6, #0	; 0x0
        25d590:	0a000010 	beq	25d5d8 <BTDecode(TCompressVars *, unsigned int)+0x1a0>
        25d594:	e0841006 	add	r1, r4, r6
        25d598:	e5d11060 	ldrb	r1, [r1, #96]
        25d59c:	e1510008 	cmp	r1, r8
        25d5a0:	aa000005 	bge	25d5bc <BTDecode(TCompressVars *, unsigned int)+0x184>
        25d5a4:	e1a0a006 	mov	sl, r6
        25d5a8:	e0841086 	add	r1, r4, r6, lsl #1
        25d5ac:	e5916860 	ldr	r6, [r1, #2144]
        25d5b0:	e1b06826 	movs	r6, r6, lsr #16
        25d5b4:	1afffff6 	bne	25d594 <BTDecode(TCompressVars *, unsigned int)+0x15c>
        25d5b8:	ea000006 	b	25d5d8 <BTDecode(TCompressVars *, unsigned int)+0x1a0>
        25d5bc:	e3360000 	teq	r6, #0	; 0x0
        25d5c0:	0a000004 	beq	25d5d8 <BTDecode(TCompressVars *, unsigned int)+0x1a0>
        25d5c4:	e0841006 	add	r1, r4, r6
        25d5c8:	e5d11060 	ldrb	r1, [r1, #96]
        25d5cc:	e1310008 	teq	r1, r8
        25d5d0:	03a01001 	moveq	r1, #1	; 0x1
        25d5d4:	0a000000 	beq	25d5dc <BTDecode(TCompressVars *, unsigned int)+0x1a4>
        25d5d8:	e3a01000 	mov	r1, #0	; 0x0
        25d5dc:	e20110ff 	and	r1, r1, #255	; 0xff
        25d5e0:	e58d101c 	str	r1, [sp, #28]
        25d5e4:	e5d51864 	ldrb	r1, [r5, #2148]
        25d5e8:	e3310001 	teq	r1, #1	; 0x1
        25d5ec:	1a000008 	bne	25d614 <BTDecode(TCompressVars *, unsigned int)+0x1dc>
        25d5f0:	e59d101c 	ldr	r1, [sp, #28]
        25d5f4:	e3310001 	teq	r1, #1	; 0x1
        25d5f8:	1a000003 	bne	25d60c <BTDecode(TCompressVars *, unsigned int)+0x1d4>
        25d5fc:	e3a01000 	mov	r1, #0	; 0x0
        25d600:	e58d101c 	str	r1, [sp, #28]
        25d604:	e3a01001 	mov	r1, #1	; 0x1
        25d608:	e58d1018 	str	r1, [sp, #24]
        25d60c:	e3a01000 	mov	r1, #0	; 0x0
        25d610:	e5c51864 	strb	r1, [r5, #2148]
        25d614:	e59d101c 	ldr	r1, [sp, #28]
        25d618:	e3310000 	teq	r1, #0	; 0x0
        25d61c:	0a000007 	beq	25d640 <BTDecode(TCompressVars *, unsigned int)+0x208>
        25d620:	e5951880 	ldr	r1, [r5, #2176]
        25d624:	e1310006 	teq	r1, r6
        25d628:	03a01001 	moveq	r1, #1	; 0x1
        25d62c:	058d1018 	streq	r1, [sp, #24]
        25d630:	0a000002 	beq	25d640 <BTDecode(TCompressVars *, unsigned int)+0x208>
        25d634:	e59d101c 	ldr	r1, [sp, #28]
        25d638:	e3310000 	teq	r1, #0	; 0x0
        25d63c:	1a00008b 	bne	25d870 <BTDecode(TCompressVars *, unsigned int)+0x438>
        25d640:	e5941028 	ldr	r1, [r4, #40]
        25d644:	e1500001 	cmp	r0, r1
        25d648:	8a0000ef 	bhi	25da0c <BTDecode(TCompressVars *, unsigned int)+0x5d4>
        25d64c:	ea00008a 	b	25d87c <BTDecode(TCompressVars *, unsigned int)+0x444>
        25d650:	e1a00004 	mov	r0, r4
        25d654:	e5951870 	ldr	r1, [r5, #2160]
        25d658:	eb5ef9de 	bl	1a1bdd8 <$unpack__FP13TCompressVarsUiT2>
        25d65c:	e3500000 	cmp	r0, #0	; 0x0
        25d660:	aa000001 	bge	25d66c <BTDecode(TCompressVars *, unsigned int)+0x234>
        25d664:	e3a00001 	mov	r0, #1	; 0x1
        25d668:	ea000031 	b	25d734 <BTDecode(TCompressVars *, unsigned int)+0x2fc>
        25d66c:	e5941024 	ldr	r1, [r4, #36]
        25d670:	e1510000 	cmp	r1, r0
        25d674:	9a000018 	bls	25d6dc <BTDecode(TCompressVars *, unsigned int)+0x2a4>
        25d678:	e3300000 	teq	r0, #0	; 0x0
        25d67c:	0a00000a 	beq	25d6ac <BTDecode(TCompressVars *, unsigned int)+0x274>
        25d680:	e3300001 	teq	r0, #1	; 0x1
        25d684:	0a00000f 	beq	25d6c8 <BTDecode(TCompressVars *, unsigned int)+0x290>
        25d688:	e3300002 	teq	r0, #2	; 0x2
        25d68c:	1a0000f2 	bne	25da5c <BTDecode(TCompressVars *, unsigned int)+0x624>
        25d690:	e5950870 	ldr	r0, [r5, #2160]
        25d694:	e2800001 	add	r0, r0, #1	; 0x1
        25d698:	e5850870 	str	r0, [r5, #2160]
        25d69c:	e5b41010 	ldr	r1, [r4, #16]!
        25d6a0:	e1500001 	cmp	r0, r1
        25d6a4:	9a0000ec 	bls	25da5c <BTDecode(TCompressVars *, unsigned int)+0x624>
        25d6a8:	ea000020 	b	25d730 <BTDecode(TCompressVars *, unsigned int)+0x2f8>
        25d6ac:	e1a00004 	mov	r0, r4
        25d6b0:	e3a02000 	mov	r2, #0	; 0x0
        25d6b4:	e3a01000 	mov	r1, #0	; 0x0
        25d6b8:	eb5ef9c6 	bl	1a1bdd8 <$unpack__FP13TCompressVarsUiT2>
        25d6bc:	e3a02001 	mov	r2, #1	; 0x1
        25d6c0:	e5c52864 	strb	r2, [r5, #2148]
        25d6c4:	ea0000de 	b	25da44 <BTDecode(TCompressVars *, unsigned int)+0x60c>
        25d6c8:	e1a00004 	mov	r0, r4
        25d6cc:	e3a02000 	mov	r2, #0	; 0x0
        25d6d0:	e3a01000 	mov	r1, #0	; 0x0
        25d6d4:	eb5ef9bf 	bl	1a1bdd8 <$unpack__FP13TCompressVarsUiT2>
        25d6d8:	ea0000df 	b	25da5c <BTDecode(TCompressVars *, unsigned int)+0x624>
        25d6dc:	e5d51861 	ldrb	r1, [r5, #2145]
        25d6e0:	e58d1014 	str	r1, [sp, #20]
        25d6e4:	e5951878 	ldr	r1, [r5, #2168]
        25d6e8:	e58d1008 	str	r1, [sp, #8]
        25d6ec:	e59d100c 	ldr	r1, [sp, #12]
        25d6f0:	e0811000 	add	r1, r1, r0
        25d6f4:	e5851878 	str	r1, [r5, #2168]
        25d6f8:	e5942024 	ldr	r2, [r4, #36]
        25d6fc:	e594301c 	ldr	r3, [r4, #28]
        25d700:	e0832002 	add	r2, r3, r2
        25d704:	e1520000 	cmp	r2, r0
        25d708:	8a000004 	bhi	25d720 <BTDecode(TCompressVars *, unsigned int)+0x2e8>
        25d70c:	e0842081 	add	r2, r4, r1, lsl #1
        25d710:	e2822a02 	add	r2, r2, #8192	; 0x2000
        25d714:	e5922860 	ldr	r2, [r2, #2144]
        25d718:	e1b02822 	movs	r2, r2, lsr #16
        25d71c:	0a000003 	beq	25d730 <BTDecode(TCompressVars *, unsigned int)+0x2f8>
        25d720:	e5942014 	ldr	r2, [r4, #20]
        25d724:	e2422001 	sub	r2, r2, #1	; 0x1
        25d728:	e1520000 	cmp	r2, r0
        25d72c:	2a000002 	bcs	25d73c <BTDecode(TCompressVars *, unsigned int)+0x304>
        25d730:	e3a00004 	mov	r0, #4	; 0x4
        25d734:	e58d0004 	str	r0, [sp, #4]
        25d738:	ea0000c7 	b	25da5c <BTDecode(TCompressVars *, unsigned int)+0x624>
        25d73c:	e3a00000 	mov	r0, #0	; 0x0
        25d740:	e5850868 	str	r0, [r5, #2152]
        25d744:	e2842084 	add	r2, r4, #132	; 0x84
        25d748:	e2822b0e 	add	r2, r2, #14336	; 0x3800
        25d74c:	e5950984 	ldr	r0, [r5, #2436]
        25d750:	e0843001 	add	r3, r4, r1
        25d754:	e5d33060 	ldrb	r3, [r3, #96]
        25d758:	e4403001 	strb	r3, [r0], -#1
        25d75c:	e5953868 	ldr	r3, [r5, #2152]
        25d760:	e2833001 	add	r3, r3, #1	; 0x1
        25d764:	e0841081 	add	r1, r4, r1, lsl #1
        25d768:	e2811a02 	add	r1, r1, #8192	; 0x2000
        25d76c:	e5853868 	str	r3, [r5, #2152]
        25d770:	e5911860 	ldr	r1, [r1, #2144]
        25d774:	e1b01821 	movs	r1, r1, lsr #16
        25d778:	0a000001 	beq	25d784 <BTDecode(TCompressVars *, unsigned int)+0x34c>
        25d77c:	e1520000 	cmp	r2, r0
        25d780:	9afffff2 	bls	25d750 <BTDecode(TCompressVars *, unsigned int)+0x318>
        25d784:	e1520000 	cmp	r2, r0
        25d788:	93a01000 	movls	r1, #0	; 0x0
        25d78c:	83a01001 	movhi	r1, #1	; 0x1
        25d790:	e5c51861 	strb	r1, [r5, #2145]
        25d794:	e2800001 	add	r0, r0, #1	; 0x1
        25d798:	e58d0000 	str	r0, [sp]
        25d79c:	e5d08000 	ldrb	r8, [r0]
        25d7a0:	e595086c 	ldr	r0, [r5, #2156]
        25d7a4:	e59d1000 	ldr	r1, [sp]
        25d7a8:	e5d11000 	ldrb	r1, [r1]
        25d7ac:	e1300001 	teq	r0, r1
        25d7b0:	02800033 	addeq	r0, r0, #51	; 0x33
        25d7b4:	020000ff 	andeq	r0, r0, #255	; 0xff
        25d7b8:	0585086c 	streq	r0, [r5, #2156]
        25d7bc:	e59d0000 	ldr	r0, [sp]
        25d7c0:	e4d01001 	ldrb	r1, [r0], #1
        25d7c4:	e58d0000 	str	r0, [sp]
        25d7c8:	e59509cc 	ldr	r0, [r5, #2508]
        25d7cc:	e1a0e00f 	mov	lr, pc
        25d7d0:	e595f9c8 	ldr	pc, [r5, #2504]
        25d7d4:	e5950984 	ldr	r0, [r5, #2436]
        25d7d8:	e59d1000 	ldr	r1, [sp]
        25d7dc:	e1500001 	cmp	r0, r1
        25d7e0:	2affffee 	bcs	25d7a0 <BTDecode(TCompressVars *, unsigned int)+0x368>
        25d7e4:	e59d0014 	ldr	r0, [sp, #20]
        25d7e8:	e3300000 	teq	r0, #0	; 0x0
        25d7ec:	1a00001d 	bne	25d868 <BTDecode(TCompressVars *, unsigned int)+0x430>
        25d7f0:	e59d0008 	ldr	r0, [sp, #8]
        25d7f4:	e3300000 	teq	r0, #0	; 0x0
        25d7f8:	0a00001a 	beq	25d868 <BTDecode(TCompressVars *, unsigned int)+0x430>
        25d7fc:	e59d0008 	ldr	r0, [sp, #8]
        25d800:	e7996080 	ldr	r6, [r9, r0, lsl #1]
        25d804:	e1a06826 	mov	r6, r6, lsr #16
        25d808:	e1a0a000 	mov	sl, r0
        25d80c:	e3360000 	teq	r6, #0	; 0x0
        25d810:	0a000010 	beq	25d858 <BTDecode(TCompressVars *, unsigned int)+0x420>
        25d814:	e0840006 	add	r0, r4, r6
        25d818:	e5d00060 	ldrb	r0, [r0, #96]
        25d81c:	e1500008 	cmp	r0, r8
        25d820:	aa000005 	bge	25d83c <BTDecode(TCompressVars *, unsigned int)+0x404>
        25d824:	e1a0a006 	mov	sl, r6
        25d828:	e0840086 	add	r0, r4, r6, lsl #1
        25d82c:	e5906860 	ldr	r6, [r0, #2144]
        25d830:	e1b06826 	movs	r6, r6, lsr #16
        25d834:	1afffff6 	bne	25d814 <BTDecode(TCompressVars *, unsigned int)+0x3dc>
        25d838:	ea000006 	b	25d858 <BTDecode(TCompressVars *, unsigned int)+0x420>
        25d83c:	e3360000 	teq	r6, #0	; 0x0
        25d840:	0a000004 	beq	25d858 <BTDecode(TCompressVars *, unsigned int)+0x420>
        25d844:	e0840006 	add	r0, r4, r6
        25d848:	e5d00060 	ldrb	r0, [r0, #96]
        25d84c:	e1300008 	teq	r0, r8
        25d850:	03a00001 	moveq	r0, #1	; 0x1
        25d854:	0a000000 	beq	25d85c <BTDecode(TCompressVars *, unsigned int)+0x424>
        25d858:	e3a00000 	mov	r0, #0	; 0x0
        25d85c:	e20010ff 	and	r1, r0, #255	; 0xff
        25d860:	e58d101c 	str	r1, [sp, #28]
        25d864:	ea000000 	b	25d86c <BTDecode(TCompressVars *, unsigned int)+0x434>
        25d868:	e3a01001 	mov	r1, #1	; 0x1
        25d86c:	e58d1018 	str	r1, [sp, #24]
        25d870:	e59d101c 	ldr	r1, [sp, #28]
        25d874:	e3310000 	teq	r1, #0	; 0x0
        25d878:	1a00006e 	bne	25da38 <BTDecode(TCompressVars *, unsigned int)+0x600>
        25d87c:	e59d1018 	ldr	r1, [sp, #24]
        25d880:	e3310000 	teq	r1, #0	; 0x0
        25d884:	1a000060 	bne	25da0c <BTDecode(TCompressVars *, unsigned int)+0x5d4>
        25d888:	e0840007 	add	r0, r4, r7
        25d88c:	e5c08060 	strb	r8, [r0, #96]
        25d890:	e0840087 	add	r0, r4, r7, lsl #1
        25d894:	e2802a02 	add	r2, r0, #8192	; 0x2000
        25d898:	e59d1008 	ldr	r1, [sp, #8]
        25d89c:	e5c21861 	strb	r1, [r2, #2145]
        25d8a0:	e1a01421 	mov	r1, r1, lsr #8
        25d8a4:	e5c21860 	strb	r1, [r2, #2144]
        25d8a8:	e3a01000 	mov	r1, #0	; 0x0
        25d8ac:	e0892087 	add	r2, r9, r7, lsl #1
        25d8b0:	e5c21001 	strb	r1, [r2, #1]
        25d8b4:	e5c21000 	strb	r1, [r2]
        25d8b8:	e5c06861 	strb	r6, [r0, #2145]
        25d8bc:	e1a02426 	mov	r2, r6, lsr #8
        25d8c0:	e5c02860 	strb	r2, [r0, #2144]
        25d8c4:	e59d0008 	ldr	r0, [sp, #8]
        25d8c8:	e13a0000 	teq	sl, r0
        25d8cc:	e1a00007 	mov	r0, r7
        25d8d0:	1a000005 	bne	25d8ec <BTDecode(TCompressVars *, unsigned int)+0x4b4>
        25d8d4:	e59d2008 	ldr	r2, [sp, #8]
        25d8d8:	e0892082 	add	r2, r9, r2, lsl #1
        25d8dc:	e5c20001 	strb	r0, [r2, #1]
        25d8e0:	e1a00420 	mov	r0, r0, lsr #8
        25d8e4:	e5c20000 	strb	r0, [r2]
        25d8e8:	ea000003 	b	25d8fc <BTDecode(TCompressVars *, unsigned int)+0x4c4>
        25d8ec:	e084208a 	add	r2, r4, sl, lsl #1
        25d8f0:	e5c20861 	strb	r0, [r2, #2145]
        25d8f4:	e1a00420 	mov	r0, r0, lsr #8
        25d8f8:	e5c20860 	strb	r0, [r2, #2144]
        25d8fc:	e5857880 	str	r7, [r5, #2176]
        25d900:	e5940014 	ldr	r0, [r4, #20]
        25d904:	e59d300c 	ldr	r3, [sp, #12]
        25d908:	e0800003 	add	r0, r0, r3
        25d90c:	e2400001 	sub	r0, r0, #1	; 0x1
        25d910:	e5d52862 	ldrb	r2, [r5, #2146]
        25d914:	e3520000 	cmp	r2, #0	; 0x0
        25d918:	1a000005 	bne	25d934 <BTDecode(TCompressVars *, unsigned int)+0x4fc>
        25d91c:	e2877001 	add	r7, r7, #1	; 0x1
        25d920:	e1570000 	cmp	r7, r0
        25d924:	83a02001 	movhi	r2, #1	; 0x1
        25d928:	85c52862 	strhib	r2, [r5, #2146]
        25d92c:	8a000001 	bhi	25d938 <BTDecode(TCompressVars *, unsigned int)+0x500>
        25d930:	ea00002d 	b	25d9ec <BTDecode(TCompressVars *, unsigned int)+0x5b4>
        25d934:	0a00002c 	beq	25d9ec <BTDecode(TCompressVars *, unsigned int)+0x5b4>
        25d938:	e2877001 	add	r7, r7, #1	; 0x1
        25d93c:	e1570000 	cmp	r7, r0
        25d940:	9a000004 	bls	25d958 <BTDecode(TCompressVars *, unsigned int)+0x520>
        25d944:	e594201c 	ldr	r2, [r4, #28]
        25d948:	e59d300c 	ldr	r3, [sp, #12]
        25d94c:	e0822003 	add	r2, r2, r3
        25d950:	e5943024 	ldr	r3, [r4, #36]
        25d954:	e0827003 	add	r7, r2, r3
        25d958:	e7992087 	ldr	r2, [r9, r7, lsl #1]
        25d95c:	e1a02822 	mov	r2, r2, lsr #16
        25d960:	e3320000 	teq	r2, #0	; 0x0
        25d964:	1afffff3 	bne	25d938 <BTDecode(TCompressVars *, unsigned int)+0x500>
        25d968:	e0842087 	add	r2, r4, r7, lsl #1
        25d96c:	e2820a02 	add	r0, r2, #8192	; 0x2000
        25d970:	e5900860 	ldr	r0, [r0, #2144]
        25d974:	e1a00820 	mov	r0, r0, lsr #16
        25d978:	e7993080 	ldr	r3, [r9, r0, lsl #1]
        25d97c:	e1a03823 	mov	r3, r3, lsr #16
        25d980:	e1330007 	teq	r3, r7
        25d984:	1a000006 	bne	25d9a4 <BTDecode(TCompressVars *, unsigned int)+0x56c>
        25d988:	e5922860 	ldr	r2, [r2, #2144]
        25d98c:	e1a02822 	mov	r2, r2, lsr #16
        25d990:	e0890080 	add	r0, r9, r0, lsl #1
        25d994:	e5c02001 	strb	r2, [r0, #1]
        25d998:	e1a02442 	mov	r2, r2, asr #8
        25d99c:	e5c02000 	strb	r2, [r0]
        25d9a0:	ea000011 	b	25d9ec <BTDecode(TCompressVars *, unsigned int)+0x5b4>
        25d9a4:	e1a00003 	mov	r0, r3
        25d9a8:	e0843083 	add	r3, r4, r3, lsl #1
        25d9ac:	e5933860 	ldr	r3, [r3, #2144]
        25d9b0:	e1a03823 	mov	r3, r3, lsr #16
        25d9b4:	e1330007 	teq	r3, r7
        25d9b8:	0a000005 	beq	25d9d4 <BTDecode(TCompressVars *, unsigned int)+0x59c>
        25d9bc:	e1a00003 	mov	r0, r3
        25d9c0:	e0843083 	add	r3, r4, r3, lsl #1
        25d9c4:	e5933860 	ldr	r3, [r3, #2144]
        25d9c8:	e1a03823 	mov	r3, r3, lsr #16
        25d9cc:	e1330007 	teq	r3, r7
        25d9d0:	1afffff9 	bne	25d9bc <BTDecode(TCompressVars *, unsigned int)+0x584>
        25d9d4:	e5922860 	ldr	r2, [r2, #2144]
        25d9d8:	e1a02822 	mov	r2, r2, lsr #16
        25d9dc:	e0840080 	add	r0, r4, r0, lsl #1
        25d9e0:	e5c02861 	strb	r2, [r0, #2145]
        25d9e4:	e1a02442 	mov	r2, r2, asr #8
        25d9e8:	e5c02860 	strb	r2, [r0, #2144]
        25d9ec:	e0890087 	add	r0, r9, r7, lsl #1
        25d9f0:	e5c01001 	strb	r1, [r0, #1]
        25d9f4:	e5c01000 	strb	r1, [r0]
        25d9f8:	e0840087 	add	r0, r4, r7, lsl #1
        25d9fc:	e2800a02 	add	r0, r0, #8192	; 0x2000
        25da00:	e5c01861 	strb	r1, [r0, #2145]
        25da04:	e5c01860 	strb	r1, [r0, #2144]
        25da08:	ea000001 	b	25da14 <BTDecode(TCompressVars *, unsigned int)+0x5dc>
        25da0c:	e3a00000 	mov	r0, #0	; 0x0
        25da10:	e5850880 	str	r0, [r5, #2176]
        25da14:	e5d50860 	ldrb	r0, [r5, #2144]
        25da18:	e3300000 	teq	r0, #0	; 0x0
        25da1c:	0a000005 	beq	25da38 <BTDecode(TCompressVars *, unsigned int)+0x600>
        25da20:	e59d100c 	ldr	r1, [sp, #12]
        25da24:	e0810008 	add	r0, r1, r8
        25da28:	e5b41024 	ldr	r1, [r4, #36]!
        25da2c:	e0806001 	add	r6, r0, r1
        25da30:	e3a02001 	mov	r2, #1	; 0x1
        25da34:	e5852868 	str	r2, [r5, #2152]
        25da38:	e59d1010 	ldr	r1, [sp, #16]
        25da3c:	e3310000 	teq	r1, #0	; 0x0
        25da40:	0a000005 	beq	25da5c <BTDecode(TCompressVars *, unsigned int)+0x624>
        25da44:	e5956878 	ldr	r6, [r5, #2168]
        25da48:	e5d50860 	ldrb	r0, [r5, #2144]
        25da4c:	e3300000 	teq	r0, #0	; 0x0
        25da50:	13a00000 	movne	r0, #0	; 0x0
        25da54:	03a00001 	moveq	r0, #1	; 0x1
        25da58:	e5c50860 	strb	r0, [r5, #2144]
        25da5c:	e5a56874 	str	r6, [r5, #2164]!
        25da60:	e5a57008 	str	r7, [r5, #8]!
        25da64:	e59d0004 	ldr	r0, [sp, #4]
        25da68:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BuildView(TView *, RefVar const &)
 * Address: 0025e950
 */
BuildView(TView *, RefVar const &) {
    /*
        25e950:	e1a0c00d 	mov	ip, sp
        25e954:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        25e958:	e24cb004 	sub	fp, ip, #4	; 0x4
        25e95c:	e1a05000 	mov	r5, r0
        25e960:	e1a04001 	mov	r4, r1
        25e964:	e24dd004 	sub	sp, sp, #4	; 0x4
        25e968:	e59f1120 	ldr	r1, [pc, #120]	; 25ea90 <BuildView(TView *, RefVar const &)+0x140>
        25e96c:	e1a00004 	mov	r0, r4
        25e970:	e3a02000 	mov	r2, #0	; 0x0
        25e974:	eb65963b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25e978:	e3100003 	tst	r0, #3	; 0x3
        25e97c:	01a00140 	moveq	r0, r0, asr #2
        25e980:	0a000000 	beq	25e988 <BuildView(TView *, RefVar const &)+0x38>
        25e984:	eb658de4 	bl	1bc211c <$_RINTError(long)>
        25e988:	e1a00800 	mov	r0, r0, lsl #16
        25e98c:	e1a00820 	mov	r0, r0, lsr #16
        25e990:	e240004a 	sub	r0, r0, #74	; 0x4a
        25e994:	e59f60f8 	ldr	r6, [pc, #f8]	; 25ea94 <BuildView(TView *, RefVar const &)+0x144>
        25e998:	e59f70f8 	ldr	r7, [pc, #f8]	; 25ea98 <BuildView(TView *, RefVar const &)+0x148>
        25e99c:	e59fa0f8 	ldr	sl, [pc, #f8]	; 25ea9c <BuildView(TView *, RefVar const &)+0x14c>
        25e9a0:	e59f80f8 	ldr	r8, [pc, #f8]	; 25eaa0 <BuildView(TView *, RefVar const &)+0x150>
        25e9a4:	e59f90f8 	ldr	r9, [pc, #f8]	; 25eaa4 <BuildView(TView *, RefVar const &)+0x154>
        25e9a8:	e3500022 	cmp	r0, #34	; 0x22
        25e9ac:	908ff100 	addls	pc, pc, r0, lsl #2
        25e9b0:	ea0001f5 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25e9b4:	ea00003c 	b	25eaac <BuildView(TView *, RefVar const &)+0x15c>
        25e9b8:	ea0001f3 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25e9bc:	ea000046 	b	25eadc <BuildView(TView *, RefVar const &)+0x18c>
        25e9c0:	ea000052 	b	25eb10 <BuildView(TView *, RefVar const &)+0x1c0>
        25e9c4:	ea0001f0 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25e9c8:	ea0000b3 	b	25ec9c <BuildView(TView *, RefVar const &)+0x34c>
        25e9cc:	ea0000cd 	b	25ed08 <BuildView(TView *, RefVar const &)+0x3b8>
        25e9d0:	ea000066 	b	25eb70 <BuildView(TView *, RefVar const &)+0x220>
        25e9d4:	ea0000a3 	b	25ec68 <BuildView(TView *, RefVar const &)+0x318>
        25e9d8:	ea0001eb 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25e9dc:	ea0000fb 	b	25edd0 <BuildView(TView *, RefVar const &)+0x480>
        25e9e0:	ea00010e 	b	25ee20 <BuildView(TView *, RefVar const &)+0x4d0>
        25e9e4:	ea00011a 	b	25ee54 <BuildView(TView *, RefVar const &)+0x504>
        25e9e8:	ea0001e7 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25e9ec:	ea000125 	b	25ee88 <BuildView(TView *, RefVar const &)+0x538>
        25e9f0:	ea0001e5 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25e9f4:	ea0001e4 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25e9f8:	ea00012f 	b	25eebc <BuildView(TView *, RefVar const &)+0x56c>
        25e9fc:	ea00014d 	b	25ef38 <BuildView(TView *, RefVar const &)+0x5e8>
        25ea00:	ea0001e1 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25ea04:	ea000199 	b	25f070 <BuildView(TView *, RefVar const &)+0x720>
        25ea08:	ea0000e3 	b	25ed9c <BuildView(TView *, RefVar const &)+0x44c>
        25ea0c:	ea0000d5 	b	25ed68 <BuildView(TView *, RefVar const &)+0x418>
        25ea10:	ea0001bf 	b	25f114 <BuildView(TView *, RefVar const &)+0x7c4>
        25ea14:	ea000049 	b	25eb40 <BuildView(TView *, RefVar const &)+0x1f0>
        25ea18:	ea000187 	b	25f03c <BuildView(TView *, RefVar const &)+0x6ec>
        25ea1c:	ea0001da 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25ea20:	ea0001a1 	b	25f0ac <BuildView(TView *, RefVar const &)+0x75c>
        25ea24:	ea0001d8 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25ea28:	ea0001d7 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25ea2c:	ea0001d6 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25ea30:	ea00014d 	b	25ef6c <BuildView(TView *, RefVar const &)+0x61c>
        25ea34:	ea0001d4 	b	25f18c <BuildView(TView *, RefVar const &)+0x83c>
        25ea38:	ea000165 	b	25efd4 <BuildView(TView *, RefVar const &)+0x684>
        25ea3c:	e3a00060 	mov	r0, #96	; 0x60
        25ea40:	eb60aa98 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ea44:	e1b08000 	movs	r8, r0
        25ea48:	0a0001b0 	beq	25f110 <BuildView(TView *, RefVar const &)+0x7c0>
        25ea4c:	e3a00002 	mov	r0, #2	; 0x2
        25ea50:	e5886000 	str	r6, [r8]
        25ea54:	eb658dbc 	bl	1bc214c <$AllocateRefHandle(long)>
        25ea58:	e3a06000 	mov	r6, #0	; 0x0
        25ea5c:	e5880024 	str	r0, [r8, #36]
        25ea60:	e5a06004 	str	r6, [r0, #4]!
        25ea64:	e3a00002 	mov	r0, #2	; 0x2
        25ea68:	e5887000 	str	r7, [r8]
        25ea6c:	eb658db6 	bl	1bc214c <$AllocateRefHandle(long)>
        25ea70:	e5880054 	str	r0, [r8, #84]
        25ea74:	e5a06004 	str	r6, [r0, #4]!
        25ea78:	e3a00002 	mov	r0, #2	; 0x2
        25ea7c:	eb658db2 	bl	1bc214c <$AllocateRefHandle(long)>
        25ea80:	e5880058 	str	r0, [r8, #88]
        25ea84:	e5a06004 	str	r6, [r0, #4]!
        25ea88:	e59f0018 	ldr	r0, [pc, #18]	; 25eaa8 <BuildView(TView *, RefVar const &)+0x158>
        25ea8c:	ea00019e 	b	25f10c <BuildView(TView *, RefVar const &)+0x7bc>
        25ea90:	00684f30 	rsbeq	r4, r8, r0, lsr pc
        25ea94:	0001add4 	ldreqd	sl, [r1], -r4
        25ea98:	0001f750 	andeq	pc, r1, r0, asr r7
        25ea9c:	00020a98 	muleq	r2, r8, sl
        25eaa0:	00021118 	andeq	r1, r2, r8, lsl r1
        25eaa4:	00020938 	andeq	r0, r2, r8, lsr r9
        25eaa8:	0001fa00 	andeq	pc, r1, r0, lsl #20
        25eaac:	e3a00030 	mov	r0, #48	; 0x30
        25eab0:	eb60aa7c 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25eab4:	e1b08000 	movs	r8, r0
        25eab8:	0a000194 	beq	25f110 <BuildView(TView *, RefVar const &)+0x7c0>
        25eabc:	e3a00002 	mov	r0, #2	; 0x2
        25eac0:	e5886000 	str	r6, [r8]
        25eac4:	eb658da0 	bl	1bc214c <$AllocateRefHandle(long)>
        25eac8:	e3a06000 	mov	r6, #0	; 0x0
        25eacc:	e5880024 	str	r0, [r8, #36]
        25ead0:	e5a06004 	str	r6, [r0, #4]!
        25ead4:	e5887000 	str	r7, [r8]
        25ead8:	ea00018c 	b	25f110 <BuildView(TView *, RefVar const &)+0x7c0>
        25eadc:	e3a00030 	mov	r0, #48	; 0x30
        25eae0:	eb60aa70 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25eae4:	e1b07000 	movs	r7, r0
        25eae8:	0a00016c 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25eaec:	e3a00002 	mov	r0, #2	; 0x2
        25eaf0:	e5876000 	str	r6, [r7]
        25eaf4:	eb658d94 	bl	1bc214c <$AllocateRefHandle(long)>
        25eaf8:	e3a06000 	mov	r6, #0	; 0x0
        25eafc:	e5870024 	str	r0, [r7, #36]
        25eb00:	e5a06004 	str	r6, [r0, #4]!
        25eb04:	e59f0000 	ldr	r0, [pc, #0]	; 25eb0c <BuildView(TView *, RefVar const &)+0x1bc>
        25eb08:	ea000163 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25eb0c:	0001c000 	andeq	ip, r1, r0
        25eb10:	e3a00050 	mov	r0, #80	; 0x50
        25eb14:	eb60aa63 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25eb18:	e1b07000 	movs	r7, r0
        25eb1c:	0a00015f 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25eb20:	e3a00002 	mov	r0, #2	; 0x2
        25eb24:	e5876000 	str	r6, [r7]
        25eb28:	eb658d87 	bl	1bc214c <$AllocateRefHandle(long)>
        25eb2c:	e3a06000 	mov	r6, #0	; 0x0
        25eb30:	e5870024 	str	r0, [r7, #36]
        25eb34:	e5a06004 	str	r6, [r0, #4]!
        25eb38:	e587a000 	str	sl, [r7]
        25eb3c:	ea000157 	b	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25eb40:	e3a00034 	mov	r0, #52	; 0x34
        25eb44:	eb60aa57 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25eb48:	e1b07000 	movs	r7, r0
        25eb4c:	0a000153 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25eb50:	e3a00002 	mov	r0, #2	; 0x2
        25eb54:	e5876000 	str	r6, [r7]
        25eb58:	eb658d7b 	bl	1bc214c <$AllocateRefHandle(long)>
        25eb5c:	e3a06000 	mov	r6, #0	; 0x0
        25eb60:	e5870024 	str	r0, [r7, #36]
        25eb64:	e5a06004 	str	r6, [r0, #4]!
        25eb68:	e5878000 	str	r8, [r7]
        25eb6c:	ea00014b 	b	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25eb70:	e59f1074 	ldr	r1, [pc, #74]	; 25ebec <BuildView(TView *, RefVar const &)+0x29c>
        25eb74:	e1a00004 	mov	r0, r4
        25eb78:	e3a02000 	mov	r2, #0	; 0x0
        25eb7c:	eb6595b9 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25eb80:	e3100003 	tst	r0, #3	; 0x3
        25eb84:	01a00140 	moveq	r0, r0, asr #2
        25eb88:	0a000000 	beq	25eb90 <BuildView(TView *, RefVar const &)+0x240>
        25eb8c:	eb658d62 	bl	1bc211c <$_RINTError(long)>
        25eb90:	e3c004fb 	bic	r0, r0, #-83886080	; 0xfb000000
        25eb94:	e3c008ff 	bic	r0, r0, #16711680	; 0xff0000
        25eb98:	e3c00cf7 	bic	r0, r0, #63232	; 0xf700
        25eb9c:	e3c000f5 	bic	r0, r0, #245	; 0xf5
        25eba0:	e3300002 	teq	r0, #2	; 0x2
        25eba4:	1a000013 	bne	25ebf8 <BuildView(TView *, RefVar const &)+0x2a8>
        25eba8:	e59f1040 	ldr	r1, [pc, #40]	; 25ebf0 <BuildView(TView *, RefVar const &)+0x2a0>
        25ebac:	e1a00004 	mov	r0, r4
        25ebb0:	e3a02000 	mov	r2, #0	; 0x0
        25ebb4:	eb6595ab 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25ebb8:	e3300002 	teq	r0, #2	; 0x2
        25ebbc:	1a00000d 	bne	25ebf8 <BuildView(TView *, RefVar const &)+0x2a8>
        25ebc0:	e59f102c 	ldr	r1, [pc, #2c]	; 25ebf4 <BuildView(TView *, RefVar const &)+0x2a4>
        25ebc4:	e1a00004 	mov	r0, r4
        25ebc8:	e3a02000 	mov	r2, #0	; 0x0
        25ebcc:	eb6595a5 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        25ebd0:	e3300002 	teq	r0, #2	; 0x2
        25ebd4:	1a000007 	bne	25ebf8 <BuildView(TView *, RefVar const &)+0x2a8>
        25ebd8:	e3a00034 	mov	r0, #52	; 0x34
        25ebdc:	eb60aa31 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ebe0:	e1b07000 	movs	r7, r0
        25ebe4:	1affffd9 	bne	25eb50 <BuildView(TView *, RefVar const &)+0x200>
        25ebe8:	ea00012c 	b	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25ebec:	00684fc0 	rsbeq	r4, r8, r0, asr #31
        25ebf0:	00684930 	rsbeq	r4, r8, r0, lsr r9
        25ebf4:	00684a18 	rsbeq	r4, r8, r8, lsl sl
        25ebf8:	e3a000d0 	mov	r0, #208	; 0xd0
        25ebfc:	eb60aa29 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ec00:	e1b07000 	movs	r7, r0
        25ec04:	0a000125 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25ec08:	e3a00002 	mov	r0, #2	; 0x2
        25ec0c:	e5876000 	str	r6, [r7]
        25ec10:	eb658d4d 	bl	1bc214c <$AllocateRefHandle(long)>
        25ec14:	e3a06000 	mov	r6, #0	; 0x0
        25ec18:	e5870024 	str	r0, [r7, #36]
        25ec1c:	e5a06004 	str	r6, [r0, #4]!
        25ec20:	e3a00002 	mov	r0, #2	; 0x2
        25ec24:	e5879000 	str	r9, [r7]
        25ec28:	eb658d47 	bl	1bc214c <$AllocateRefHandle(long)>
        25ec2c:	e5870064 	str	r0, [r7, #100]
        25ec30:	e5a06004 	str	r6, [r0, #4]!
        25ec34:	e3a00002 	mov	r0, #2	; 0x2
        25ec38:	eb658d43 	bl	1bc214c <$AllocateRefHandle(long)>
        25ec3c:	e5870068 	str	r0, [r7, #104]
        25ec40:	e28710c8 	add	r1, r7, #200	; 0xc8
        25ec44:	e5a06004 	str	r6, [r0, #4]!
        25ec48:	e28700a8 	add	r0, r7, #168	; 0xa8
        25ec4c:	e59f300c 	ldr	r3, [pc, #c]	; 25ec60 <BuildView(TView *, RefVar const &)+0x310>
        25ec50:	e3a02020 	mov	r2, #32	; 0x20
        25ec54:	eb5e998a 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
        25ec58:	e59f0004 	ldr	r0, [pc, #4]	; 25ec64 <BuildView(TView *, RefVar const &)+0x314>
        25ec5c:	ea00010e 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25ec60:	0038ac3c 	eoreqs	sl, r8, ip, lsr ip
        25ec64:	0001da48 	andeq	sp, r1, r8, asr #20
        25ec68:	e3a00030 	mov	r0, #48	; 0x30
        25ec6c:	eb60aa0d 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ec70:	e1b07000 	movs	r7, r0
        25ec74:	0a000109 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25ec78:	e3a00002 	mov	r0, #2	; 0x2
        25ec7c:	e5876000 	str	r6, [r7]
        25ec80:	eb658d31 	bl	1bc214c <$AllocateRefHandle(long)>
        25ec84:	e3a06000 	mov	r6, #0	; 0x0
        25ec88:	e5870024 	str	r0, [r7, #36]
        25ec8c:	e5a06004 	str	r6, [r0, #4]!
        25ec90:	e59f0000 	ldr	r0, [pc, #0]	; 25ec98 <BuildView(TView *, RefVar const &)+0x348>
        25ec94:	ea000100 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25ec98:	0001c11c 	andeq	ip, r1, ip, lsl r1
        25ec9c:	e3a00094 	mov	r0, #148	; 0x94
        25eca0:	eb60aa00 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25eca4:	e1b08000 	movs	r8, r0
        25eca8:	0a000118 	beq	25f110 <BuildView(TView *, RefVar const &)+0x7c0>
        25ecac:	e3a00002 	mov	r0, #2	; 0x2
        25ecb0:	e5886000 	str	r6, [r8]
        25ecb4:	eb658d24 	bl	1bc214c <$AllocateRefHandle(long)>
        25ecb8:	e3a06000 	mov	r6, #0	; 0x0
        25ecbc:	e5880024 	str	r0, [r8, #36]
        25ecc0:	e5a06004 	str	r6, [r0, #4]!
        25ecc4:	e3a00002 	mov	r0, #2	; 0x2
        25ecc8:	e5887000 	str	r7, [r8]
        25eccc:	eb658d1e 	bl	1bc214c <$AllocateRefHandle(long)>
        25ecd0:	e5880038 	str	r0, [r8, #56]
        25ecd4:	e5a06004 	str	r6, [r0, #4]!
        25ecd8:	e3a00002 	mov	r0, #2	; 0x2
        25ecdc:	eb658d1a 	bl	1bc214c <$AllocateRefHandle(long)>
        25ece0:	e588003c 	str	r0, [r8, #60]
        25ece4:	e5a06004 	str	r6, [r0, #4]!
        25ece8:	e3a00002 	mov	r0, #2	; 0x2
        25ecec:	eb658d16 	bl	1bc214c <$AllocateRefHandle(long)>
        25ecf0:	e5880040 	str	r0, [r8, #64]
        25ecf4:	e5a06004 	str	r6, [r0, #4]!
        25ecf8:	e588605c 	str	r6, [r8, #92]
        25ecfc:	e59f0000 	ldr	r0, [pc, #0]	; 25ed04 <BuildView(TView *, RefVar const &)+0x3b4>
        25ed00:	ea000101 	b	25f10c <BuildView(TView *, RefVar const &)+0x7bc>
        25ed04:	0001cdac 	andeq	ip, r1, ip, lsr #27
        25ed08:	e3a00094 	mov	r0, #148	; 0x94
        25ed0c:	eb60a9e5 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ed10:	e1b08000 	movs	r8, r0
        25ed14:	0a0000fd 	beq	25f110 <BuildView(TView *, RefVar const &)+0x7c0>
        25ed18:	e3a00002 	mov	r0, #2	; 0x2
        25ed1c:	e5886000 	str	r6, [r8]
        25ed20:	eb658d09 	bl	1bc214c <$AllocateRefHandle(long)>
        25ed24:	e3a06000 	mov	r6, #0	; 0x0
        25ed28:	e5880024 	str	r0, [r8, #36]
        25ed2c:	e5a06004 	str	r6, [r0, #4]!
        25ed30:	e5887000 	str	r7, [r8]
        25ed34:	e2880060 	add	r0, r8, #96	; 0x60
        25ed38:	eb66807f 	bl	1bfef3c <TDate::$__ct(void)>
        25ed3c:	e3a00002 	mov	r0, #2	; 0x2
        25ed40:	eb658d01 	bl	1bc214c <$AllocateRefHandle(long)>
        25ed44:	e5880088 	str	r0, [r8, #136]
        25ed48:	e5a06004 	str	r6, [r0, #4]!
        25ed4c:	e3a00002 	mov	r0, #2	; 0x2
        25ed50:	eb658cfd 	bl	1bc214c <$AllocateRefHandle(long)>
        25ed54:	e588008c 	str	r0, [r8, #140]
        25ed58:	e5a06004 	str	r6, [r0, #4]!
        25ed5c:	e59f0000 	ldr	r0, [pc, #0]	; 25ed64 <BuildView(TView *, RefVar const &)+0x414>
        25ed60:	ea0000e9 	b	25f10c <BuildView(TView *, RefVar const &)+0x7bc>
        25ed64:	0001aa10 	andeq	sl, r1, r0, lsl sl
        25ed68:	e3a0004c 	mov	r0, #76	; 0x4c
        25ed6c:	eb60a9cd 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ed70:	e1b07000 	movs	r7, r0
        25ed74:	0a0000c9 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25ed78:	e3a00002 	mov	r0, #2	; 0x2
        25ed7c:	e5876000 	str	r6, [r7]
        25ed80:	eb658cf1 	bl	1bc214c <$AllocateRefHandle(long)>
        25ed84:	e3a06000 	mov	r6, #0	; 0x0
        25ed88:	e5870024 	str	r0, [r7, #36]
        25ed8c:	e5a06004 	str	r6, [r0, #4]!
        25ed90:	e59f0000 	ldr	r0, [pc, #0]	; 25ed98 <BuildView(TView *, RefVar const &)+0x448>
        25ed94:	ea0000c0 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25ed98:	0001b52c 	andeq	fp, r1, ip, lsr #10
        25ed9c:	e3a0003c 	mov	r0, #60	; 0x3c
        25eda0:	eb60a9c0 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25eda4:	e1b07000 	movs	r7, r0
        25eda8:	0a0000bc 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25edac:	e3a00002 	mov	r0, #2	; 0x2
        25edb0:	e5876000 	str	r6, [r7]
        25edb4:	eb658ce4 	bl	1bc214c <$AllocateRefHandle(long)>
        25edb8:	e3a06000 	mov	r6, #0	; 0x0
        25edbc:	e5870024 	str	r0, [r7, #36]
        25edc0:	e5a06004 	str	r6, [r0, #4]!
        25edc4:	e59f0000 	ldr	r0, [pc, #0]	; 25edcc <BuildView(TView *, RefVar const &)+0x47c>
        25edc8:	ea0000b3 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25edcc:	0001be7c 	andeq	fp, r1, ip, ror lr
        25edd0:	e3a00044 	mov	r0, #68	; 0x44
        25edd4:	eb60a9b3 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25edd8:	e1b07000 	movs	r7, r0
        25eddc:	0a0000af 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25ede0:	e3a00002 	mov	r0, #2	; 0x2
        25ede4:	e5876000 	str	r6, [r7]
        25ede8:	eb658cd7 	bl	1bc214c <$AllocateRefHandle(long)>
        25edec:	e3a06000 	mov	r6, #0	; 0x0
        25edf0:	e5870024 	str	r0, [r7, #36]
        25edf4:	e5a06004 	str	r6, [r0, #4]!
        25edf8:	e59f0018 	ldr	r0, [pc, #18]	; 25ee18 <BuildView(TView *, RefVar const &)+0x4c8>
        25edfc:	e5870000 	str	r0, [r7]
        25ee00:	e3a00002 	mov	r0, #2	; 0x2
        25ee04:	eb658cd0 	bl	1bc214c <$AllocateRefHandle(long)>
        25ee08:	e5870038 	str	r0, [r7, #56]
        25ee0c:	e5a06004 	str	r6, [r0, #4]!
        25ee10:	e59f0004 	ldr	r0, [pc, #4]	; 25ee1c <BuildView(TView *, RefVar const &)+0x4cc>
        25ee14:	ea0000a0 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25ee18:	0001d680 	andeq	sp, r1, r0, lsl #13
        25ee1c:	0001bd14 	andeq	fp, r1, r4, lsl sp
        25ee20:	e3a00034 	mov	r0, #52	; 0x34
        25ee24:	eb60a99f 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ee28:	e1b07000 	movs	r7, r0
        25ee2c:	0a00009b 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25ee30:	e3a00002 	mov	r0, #2	; 0x2
        25ee34:	e5876000 	str	r6, [r7]
        25ee38:	eb658cc3 	bl	1bc214c <$AllocateRefHandle(long)>
        25ee3c:	e3a06000 	mov	r6, #0	; 0x0
        25ee40:	e5870024 	str	r0, [r7, #36]
        25ee44:	e5a06004 	str	r6, [r0, #4]!
        25ee48:	e59f0000 	ldr	r0, [pc, #0]	; 25ee50 <BuildView(TView *, RefVar const &)+0x500>
        25ee4c:	ea000092 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25ee50:	0001b1f4 	streqd	fp, [r1], -r4
        25ee54:	e3a00038 	mov	r0, #56	; 0x38
        25ee58:	eb60a992 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ee5c:	e1b07000 	movs	r7, r0
        25ee60:	0a00008e 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25ee64:	e3a00002 	mov	r0, #2	; 0x2
        25ee68:	e5876000 	str	r6, [r7]
        25ee6c:	eb658cb6 	bl	1bc214c <$AllocateRefHandle(long)>
        25ee70:	e3a06000 	mov	r6, #0	; 0x0
        25ee74:	e5870024 	str	r0, [r7, #36]
        25ee78:	e5a06004 	str	r6, [r0, #4]!
        25ee7c:	e59f0000 	ldr	r0, [pc, #0]	; 25ee84 <BuildView(TView *, RefVar const &)+0x534>
        25ee80:	ea000085 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25ee84:	0001cecc 	andeq	ip, r1, ip, asr #29
        25ee88:	e3a00058 	mov	r0, #88	; 0x58
        25ee8c:	eb60a985 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ee90:	e1b07000 	movs	r7, r0
        25ee94:	0a000081 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25ee98:	e3a00002 	mov	r0, #2	; 0x2
        25ee9c:	e5876000 	str	r6, [r7]
        25eea0:	eb658ca9 	bl	1bc214c <$AllocateRefHandle(long)>
        25eea4:	e3a06000 	mov	r6, #0	; 0x0
        25eea8:	e5870024 	str	r0, [r7, #36]
        25eeac:	e5a06004 	str	r6, [r0, #4]!
        25eeb0:	e59f0000 	ldr	r0, [pc, #0]	; 25eeb8 <BuildView(TView *, RefVar const &)+0x568>
        25eeb4:	ea000078 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25eeb8:	0001b410 	andeq	fp, r1, r0, lsl r4
        25eebc:	e3a000bc 	mov	r0, #188	; 0xbc
        25eec0:	eb60a978 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25eec4:	e1b08000 	movs	r8, r0
        25eec8:	0a000090 	beq	25f110 <BuildView(TView *, RefVar const &)+0x7c0>
        25eecc:	e3a00002 	mov	r0, #2	; 0x2
        25eed0:	e5886000 	str	r6, [r8]
        25eed4:	eb658c9c 	bl	1bc214c <$AllocateRefHandle(long)>
        25eed8:	e3a06000 	mov	r6, #0	; 0x0
        25eedc:	e5880024 	str	r0, [r8, #36]
        25eee0:	e5a06004 	str	r6, [r0, #4]!
        25eee4:	e3a00002 	mov	r0, #2	; 0x2
        25eee8:	e5887000 	str	r7, [r8]
        25eeec:	eb658c96 	bl	1bc214c <$AllocateRefHandle(long)>
        25eef0:	e5880034 	str	r0, [r8, #52]
        25eef4:	e5a06004 	str	r6, [r0, #4]!
        25eef8:	e3a00002 	mov	r0, #2	; 0x2
        25eefc:	eb658c92 	bl	1bc214c <$AllocateRefHandle(long)>
        25ef00:	e5880054 	str	r0, [r8, #84]
        25ef04:	e5a06004 	str	r6, [r0, #4]!
        25ef08:	e3a00002 	mov	r0, #2	; 0x2
        25ef0c:	e5886070 	str	r6, [r8, #112]
        25ef10:	eb658c8d 	bl	1bc214c <$AllocateRefHandle(long)>
        25ef14:	e58800a4 	str	r0, [r8, #164]
        25ef18:	e5a06004 	str	r6, [r0, #4]!
        25ef1c:	e3a00002 	mov	r0, #2	; 0x2
        25ef20:	eb658c89 	bl	1bc214c <$AllocateRefHandle(long)>
        25ef24:	e58800ac 	str	r0, [r8, #172]
        25ef28:	e5a06004 	str	r6, [r0, #4]!
        25ef2c:	e59f0000 	ldr	r0, [pc, #0]	; 25ef34 <BuildView(TView *, RefVar const &)+0x5e4>
        25ef30:	ea000075 	b	25f10c <BuildView(TView *, RefVar const &)+0x7bc>
        25ef34:	00020ee0 	andeq	r0, r2, r0, ror #29
        25ef38:	e3a00038 	mov	r0, #56	; 0x38
        25ef3c:	eb60a959 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ef40:	e1b07000 	movs	r7, r0
        25ef44:	0a000055 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25ef48:	e3a00002 	mov	r0, #2	; 0x2
        25ef4c:	e5876000 	str	r6, [r7]
        25ef50:	eb658c7d 	bl	1bc214c <$AllocateRefHandle(long)>
        25ef54:	e3a06000 	mov	r6, #0	; 0x0
        25ef58:	e5870024 	str	r0, [r7, #36]
        25ef5c:	e5a06004 	str	r6, [r0, #4]!
        25ef60:	e59f0000 	ldr	r0, [pc, #0]	; 25ef68 <BuildView(TView *, RefVar const &)+0x618>
        25ef64:	ea00004c 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25ef68:	0001a8c8 	andeq	sl, r1, r8, asr #17
        25ef6c:	e3a00068 	mov	r0, #104	; 0x68
        25ef70:	eb60a94c 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25ef74:	e1b08000 	movs	r8, r0
        25ef78:	0a000064 	beq	25f110 <BuildView(TView *, RefVar const &)+0x7c0>
        25ef7c:	e3a00002 	mov	r0, #2	; 0x2
        25ef80:	e5886000 	str	r6, [r8]
        25ef84:	eb658c70 	bl	1bc214c <$AllocateRefHandle(long)>
        25ef88:	e3a06000 	mov	r6, #0	; 0x0
        25ef8c:	e5880024 	str	r0, [r8, #36]
        25ef90:	e5a06004 	str	r6, [r0, #4]!
        25ef94:	e3a00002 	mov	r0, #2	; 0x2
        25ef98:	e5887000 	str	r7, [r8]
        25ef9c:	eb658c6a 	bl	1bc214c <$AllocateRefHandle(long)>
        25efa0:	e5880030 	str	r0, [r8, #48]
        25efa4:	e5a06004 	str	r6, [r0, #4]!
        25efa8:	e3a00002 	mov	r0, #2	; 0x2
        25efac:	eb658c66 	bl	1bc214c <$AllocateRefHandle(long)>
        25efb0:	e5880060 	str	r0, [r8, #96]
        25efb4:	e5a06004 	str	r6, [r0, #4]!
        25efb8:	e3a00002 	mov	r0, #2	; 0x2
        25efbc:	eb658c62 	bl	1bc214c <$AllocateRefHandle(long)>
        25efc0:	e5880064 	str	r0, [r8, #100]
        25efc4:	e5a06004 	str	r6, [r0, #4]!
        25efc8:	e59f0000 	ldr	r0, [pc, #0]	; 25efd0 <BuildView(TView *, RefVar const &)+0x680>
        25efcc:	ea00004e 	b	25f10c <BuildView(TView *, RefVar const &)+0x7bc>
        25efd0:	000201f8 	streqd	r0, [r2], -r8
        25efd4:	e3a00068 	mov	r0, #104	; 0x68
        25efd8:	eb60a932 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25efdc:	e1b08000 	movs	r8, r0
        25efe0:	0a00004a 	beq	25f110 <BuildView(TView *, RefVar const &)+0x7c0>
        25efe4:	e3a00002 	mov	r0, #2	; 0x2
        25efe8:	e5886000 	str	r6, [r8]
        25efec:	eb658c56 	bl	1bc214c <$AllocateRefHandle(long)>
        25eff0:	e3a06000 	mov	r6, #0	; 0x0
        25eff4:	e5880024 	str	r0, [r8, #36]
        25eff8:	e5a06004 	str	r6, [r0, #4]!
        25effc:	e3a00002 	mov	r0, #2	; 0x2
        25f000:	e5887000 	str	r7, [r8]
        25f004:	eb658c50 	bl	1bc214c <$AllocateRefHandle(long)>
        25f008:	e5880030 	str	r0, [r8, #48]
        25f00c:	e5a06004 	str	r6, [r0, #4]!
        25f010:	e3a00002 	mov	r0, #2	; 0x2
        25f014:	eb658c4c 	bl	1bc214c <$AllocateRefHandle(long)>
        25f018:	e5880060 	str	r0, [r8, #96]
        25f01c:	e5a06004 	str	r6, [r0, #4]!
        25f020:	e3a00002 	mov	r0, #2	; 0x2
        25f024:	eb658c48 	bl	1bc214c <$AllocateRefHandle(long)>
        25f028:	e5880064 	str	r0, [r8, #100]
        25f02c:	e5a06004 	str	r6, [r0, #4]!
        25f030:	e59f0000 	ldr	r0, [pc, #0]	; 25f038 <BuildView(TView *, RefVar const &)+0x6e8>
        25f034:	ea000034 	b	25f10c <BuildView(TView *, RefVar const &)+0x7bc>
        25f038:	0001b9bc 	streqh	fp, [r1], -ip
        25f03c:	e3a0005c 	mov	r0, #92	; 0x5c
        25f040:	eb60a918 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25f044:	e1b07000 	movs	r7, r0
        25f048:	0a000014 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25f04c:	e3a00002 	mov	r0, #2	; 0x2
        25f050:	e5876000 	str	r6, [r7]
        25f054:	eb658c3c 	bl	1bc214c <$AllocateRefHandle(long)>
        25f058:	e3a06000 	mov	r6, #0	; 0x0
        25f05c:	e5870024 	str	r0, [r7, #36]
        25f060:	e5a06004 	str	r6, [r0, #4]!
        25f064:	e59f0000 	ldr	r0, [pc, #0]	; 25f06c <BuildView(TView *, RefVar const &)+0x71c>
        25f068:	ea00000b 	b	25f09c <BuildView(TView *, RefVar const &)+0x74c>
        25f06c:	00020da8 	andeq	r0, r2, r8, lsr #27
        25f070:	e3a00048 	mov	r0, #72	; 0x48
        25f074:	eb60a90b 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25f078:	e1b07000 	movs	r7, r0
        25f07c:	0a000007 	beq	25f0a0 <BuildView(TView *, RefVar const &)+0x750>
        25f080:	e3a00002 	mov	r0, #2	; 0x2
        25f084:	e5876000 	str	r6, [r7]
        25f088:	eb658c2f 	bl	1bc214c <$AllocateRefHandle(long)>
        25f08c:	e3a06000 	mov	r6, #0	; 0x0
        25f090:	e5870024 	str	r0, [r7, #36]
        25f094:	e5a06004 	str	r6, [r0, #4]!
        25f098:	e59f0008 	ldr	r0, [pc, #8]	; 25f0a8 <BuildView(TView *, RefVar const &)+0x758>
        25f09c:	e5870000 	str	r0, [r7]
        25f0a0:	e58d7000 	str	r7, [sp]
        25f0a4:	ea00001a 	b	25f114 <BuildView(TView *, RefVar const &)+0x7c4>
        25f0a8:	0001aca8 	andeq	sl, r1, r8, lsr #25
        25f0ac:	e3a00044 	mov	r0, #68	; 0x44
        25f0b0:	eb60a8fc 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        25f0b4:	e1b08000 	movs	r8, r0
        25f0b8:	0a000014 	beq	25f110 <BuildView(TView *, RefVar const &)+0x7c0>
        25f0bc:	e3a00002 	mov	r0, #2	; 0x2
        25f0c0:	e5886000 	str	r6, [r8]
        25f0c4:	eb658c20 	bl	1bc214c <$AllocateRefHandle(long)>
        25f0c8:	e3a06000 	mov	r6, #0	; 0x0
        25f0cc:	e5880024 	str	r0, [r8, #36]
        25f0d0:	e5a06004 	str	r6, [r0, #4]!
        25f0d4:	e3a00002 	mov	r0, #2	; 0x2
        25f0d8:	e5887000 	str	r7, [r8]
        25f0dc:	eb658c1a 	bl	1bc214c <$AllocateRefHandle(long)>
        25f0e0:	e5880030 	str	r0, [r8, #48]
        25f0e4:	e5a06004 	str	r6, [r0, #4]!
        25f0e8:	e3a00002 	mov	r0, #2	; 0x2
        25f0ec:	eb658c16 	bl	1bc214c <$AllocateRefHandle(long)>
        25f0f0:	e5880034 	str	r0, [r8, #52]
        25f0f4:	e5a06004 	str	r6, [r0, #4]!
        25f0f8:	e3a00002 	mov	r0, #2	; 0x2
        25f0fc:	eb658c12 	bl	1bc214c <$AllocateRefHandle(long)>
        25f100:	e5880040 	str	r0, [r8, #64]
        25f104:	e5a06004 	str	r6, [r0, #4]!
        25f108:	e59f0074 	ldr	r0, [pc, #74]	; 25f184 <BuildView(TView *, RefVar const &)+0x834>
        25f10c:	e5880000 	str	r0, [r8]
        25f110:	e58d8000 	str	r8, [sp]
        25f114:	e59d0000 	ldr	r0, [sp]
        25f118:	e3300000 	teq	r0, #0	; 0x0
        25f11c:	1a000005 	bne	25f138 <BuildView(TView *, RefVar const &)+0x7e8>
        25f120:	e59f0060 	ldr	r0, [pc, #60]	; 25f188 <BuildView(TView *, RefVar const &)+0x838>
        25f124:	e5900000 	ldr	r0, [r0]
        25f128:	e3a02000 	mov	r2, #0	; 0x0
        25f12c:	e3e01f4d 	mvn	r1, #308	; 0x134
        25f130:	e2411a02 	sub	r1, r1, #8192	; 0x2000
        25f134:	eb661018 	bl	1be319c <$Throw>
        25f138:	e3a06000 	mov	r6, #0	; 0x0
        25f13c:	e52d606c 	str	r6, [sp, -#108]!
        25f140:	e28d0008 	add	r0, sp, #8	; 0x8
        25f144:	eb654e0a 	bl	1bb2974 <$setjmp>
        25f148:	e3300000 	teq	r0, #0	; 0x0
        25f14c:	1a000011 	bne	25f198 <BuildView(TView *, RefVar const &)+0x848>
        25f150:	e1a0000d 	mov	r0, sp
        25f154:	eb6603c8 	bl	1be007c <$AddExceptionHandler>
        25f158:	e1a02005 	mov	r2, r5
        25f15c:	e1a01004 	mov	r1, r4
        25f160:	e59d306c 	ldr	r3, [sp, #108]
        25f164:	e1a00003 	mov	r0, r3
        25f168:	e5933000 	ldr	r3, [r3]
        25f16c:	e1a0e00f 	mov	lr, pc
        25f170:	e283f014 	add	pc, r3, #20	; 0x14
        25f174:	e1a0000d 	mov	r0, sp
        25f178:	eb6607ce 	bl	1be10b8 <$ExitHandler>
        25f17c:	e5bd006c 	ldr	r0, [sp, #108]!
        25f180:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25f184:	0001a714 	andeq	sl, r1, r4, lsl r7
        25f188:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        25f18c:	e3a00000 	mov	r0, #0	; 0x0
        25f190:	e58d0000 	str	r0, [sp]
        25f194:	eaffffe1 	b	25f120 <BuildView(TView *, RefVar const &)+0x7d0>
        25f198:	e59d006c 	ldr	r0, [sp, #108]
        25f19c:	eb65b10c 	bl	1bcb5d4 <TView::$RemoveView(void)>
        25f1a0:	e1a0000d 	mov	r0, sp
        25f1a4:	eb660bea 	bl	1be2154 <$NextHandler>
        25f1a8:	eafffffa 	b	25f198 <BuildView(TView *, RefVar const &)+0x848>
    */
}

/**
 * Symbol: BasicVetHeap
 * Address: 00272178
 */
void globals::BasicVetHeap() {
    /*
        272178:	e1a0c00d 	mov	ip, sp
        27217c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        272180:	e24cb004 	sub	fp, ip, #4	; 0x4
        272184:	e1a04000 	mov	r4, r0
        272188:	e5900008 	ldr	r0, [r0, #8]
        27218c:	e59fc0f0 	ldr	ip, [pc, #f0]	; 272284 <BasicVetHeap+0x10c>
        272190:	e130000c 	teq	r0, ip
        272194:	13e000e3 	mvnne	r0, #227	; 0xe3
        272198:	12400b21 	subne	r0, r0, #33792	; 0x8400
        27219c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2721a0:	e59410a8 	ldr	r1, [r4, #168]
        2721a4:	e3310000 	teq	r1, #0	; 0x0
        2721a8:	0a000004 	beq	2721c0 <BasicVetHeap+0x48>
        2721ac:	e1a00004 	mov	r0, r4
        2721b0:	e3a02001 	mov	r2, #1	; 0x1
        2721b4:	eb641688 	bl	1b77bdc <$CheckPointer>
        2721b8:	e3300000 	teq	r0, #0	; 0x0
        2721bc:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2721c0:	e59410ac 	ldr	r1, [r4, #172]
        2721c4:	e3310000 	teq	r1, #0	; 0x0
        2721c8:	0a000004 	beq	2721e0 <BasicVetHeap+0x68>
        2721cc:	e1a00004 	mov	r0, r4
        2721d0:	e3a02001 	mov	r2, #1	; 0x1
        2721d4:	eb641680 	bl	1b77bdc <$CheckPointer>
        2721d8:	e3300000 	teq	r0, #0	; 0x0
        2721dc:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2721e0:	e59410b0 	ldr	r1, [r4, #176]
        2721e4:	e3310000 	teq	r1, #0	; 0x0
        2721e8:	0a000004 	beq	272200 <BasicVetHeap+0x88>
        2721ec:	e1a00004 	mov	r0, r4
        2721f0:	e3a02001 	mov	r2, #1	; 0x1
        2721f4:	eb641678 	bl	1b77bdc <$CheckPointer>
        2721f8:	e3300000 	teq	r0, #0	; 0x0
        2721fc:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        272200:	e5941020 	ldr	r1, [r4, #32]
        272204:	e3310000 	teq	r1, #0	; 0x0
        272208:	0a000004 	beq	272220 <BasicVetHeap+0xa8>
        27220c:	e1a00004 	mov	r0, r4
        272210:	e3a02001 	mov	r2, #1	; 0x1
        272214:	eb641670 	bl	1b77bdc <$CheckPointer>
        272218:	e3300000 	teq	r0, #0	; 0x0
        27221c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        272220:	e5941024 	ldr	r1, [r4, #36]
        272224:	e3310000 	teq	r1, #0	; 0x0
        272228:	0a000004 	beq	272240 <BasicVetHeap+0xc8>
        27222c:	e1a00004 	mov	r0, r4
        272230:	e3a02001 	mov	r2, #1	; 0x1
        272234:	eb641668 	bl	1b77bdc <$CheckPointer>
        272238:	e3300000 	teq	r0, #0	; 0x0
        27223c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        272240:	e5941048 	ldr	r1, [r4, #72]
        272244:	e3310000 	teq	r1, #0	; 0x0
        272248:	0a000004 	beq	272260 <BasicVetHeap+0xe8>
        27224c:	e1a00004 	mov	r0, r4
        272250:	e3a02001 	mov	r2, #1	; 0x1
        272254:	eb641660 	bl	1b77bdc <$CheckPointer>
        272258:	e3300000 	teq	r0, #0	; 0x0
        27225c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        272260:	e5940004 	ldr	r0, [r4, #4]
        272264:	e594101c 	ldr	r1, [r4, #28]
        272268:	e5942000 	ldr	r2, [r4]
        27226c:	e0400002 	sub	r0, r0, r2
        272270:	e1510000 	cmp	r1, r0
        272274:	d3a00000 	movle	r0, #0	; 0x0
        272278:	c3e000da 	mvngt	r0, #218	; 0xda
        27227c:	c2400b21 	subgt	r0, r0, #33792	; 0x8400
        272280:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        272284:	736b6961 	cmnvc	fp, #1589248	; 0x184000
    */
}

/**
 * Symbol: ByteSwap__FPvlT2
 * Address: 002725fc
 */
void globals::ByteSwap() {
    /*
        2725fc:	e1a0c00d 	mov	ip, sp
        272600:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        272604:	e24cb004 	sub	fp, ip, #4	; 0x4
        272608:	e1a05000 	mov	r5, r0
        27260c:	e1a04002 	mov	r4, r2
        272610:	e24dd044 	sub	sp, sp, #68	; 0x44
        272614:	e1a0a00d 	mov	sl, sp
        272618:	e3510001 	cmp	r1, #1	; 0x1
        27261c:	c3540001 	cmpgt	r4, #1	; 0x1
        272620:	da00003d 	ble	27271c <ByteSwap__FPvlT2+0x120>
        272624:	e0846fa4 	add	r6, r4, r4, lsr #31
        272628:	e1a060c6 	mov	r6, r6, asr #1
        27262c:	e3360001 	teq	r6, #1	; 0x1
        272630:	1a00000c 	bne	272668 <ByteSwap__FPvlT2+0x6c>
        272634:	e1a010c1 	mov	r1, r1, asr #1
        272638:	e1b00001 	movs	r0, r1
        27263c:	e2411001 	sub	r1, r1, #1	; 0x1
        272640:	0a000035 	beq	27271c <ByteSwap__FPvlT2+0x120>
        272644:	e5d50000 	ldrb	r0, [r5]
        272648:	e5d52001 	ldrb	r2, [r5, #1]
        27264c:	e5c52000 	strb	r2, [r5]
        272650:	e5c50001 	strb	r0, [r5, #1]
        272654:	e2855002 	add	r5, r5, #2	; 0x2
        272658:	e1b00001 	movs	r0, r1
        27265c:	e2411001 	sub	r1, r1, #1	; 0x1
        272660:	1afffff7 	bne	272644 <ByteSwap__FPvlT2+0x48>
        272664:	ea00002c 	b	27271c <ByteSwap__FPvlT2+0x120>
        272668:	e3a09000 	mov	r9, #0	; 0x0
        27266c:	e1a00004 	mov	r0, r4
        272670:	eb6500b2 	bl	1bb2940 <$__rt_sdiv>
        272674:	e58d0040 	str	r0, [sp, #64]
        272678:	e3500000 	cmp	r0, #0	; 0x0
        27267c:	da000026 	ble	27271c <ByteSwap__FPvlT2+0x120>
        272680:	e0285994 	mla	r8, r4, r9, r5
        272684:	e0887006 	add	r7, r8, r6
        272688:	e1a02006 	mov	r2, r6
        27268c:	e1a01006 	mov	r1, r6
        272690:	e1a00008 	mov	r0, r8
        272694:	eb64e7db 	bl	1bac608 <$ByteSwap__FPvlT2>
        272698:	e1a02006 	mov	r2, r6
        27269c:	e1a01006 	mov	r1, r6
        2726a0:	e1a00007 	mov	r0, r7
        2726a4:	eb64e7d7 	bl	1bac608 <$ByteSwap__FPvlT2>
        2726a8:	e3360002 	teq	r6, #2	; 0x2
        2726ac:	1a00000a 	bne	2726dc <ByteSwap__FPvlT2+0xe0>
        2726b0:	e5980000 	ldr	r0, [r8]
        2726b4:	e1a00840 	mov	r0, r0, asr #16
        2726b8:	e5971000 	ldr	r1, [r7]
        2726bc:	e1a01821 	mov	r1, r1, lsr #16
        2726c0:	e5c81001 	strb	r1, [r8, #1]
        2726c4:	e1a01441 	mov	r1, r1, asr #8
        2726c8:	e5c81000 	strb	r1, [r8]
        2726cc:	e5c70001 	strb	r0, [r7, #1]
        2726d0:	e1a00440 	mov	r0, r0, asr #8
        2726d4:	e5c70000 	strb	r0, [r7]
        2726d8:	ea00000b 	b	27270c <ByteSwap__FPvlT2+0x110>
        2726dc:	e1a02006 	mov	r2, r6
        2726e0:	e1a01008 	mov	r1, r8
        2726e4:	e1a0000a 	mov	r0, sl
        2726e8:	eb6508d8 	bl	1bb4a50 <$memcpy>
        2726ec:	e1a02006 	mov	r2, r6
        2726f0:	e1a01007 	mov	r1, r7
        2726f4:	e1a00008 	mov	r0, r8
        2726f8:	eb6508d4 	bl	1bb4a50 <$memcpy>
        2726fc:	e1a02006 	mov	r2, r6
        272700:	e1a0100a 	mov	r1, sl
        272704:	e1a00007 	mov	r0, r7
        272708:	eb6508d0 	bl	1bb4a50 <$memcpy>
        27270c:	e2899001 	add	r9, r9, #1	; 0x1
        272710:	e59d0040 	ldr	r0, [sp, #64]
        272714:	e1500009 	cmp	r0, r9
        272718:	caffffd8 	bgt	272680 <ByteSwap__FPvlT2+0x84>
        27271c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272720:	3f3f3f3f 	swicc	0x003f3f3f
        272724:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: BestXIPChunk(TStore *, long, long *)
 * Address: 00278d8c
 */
BestXIPChunk(TStore *, long, long *) {
    /*
        278d8c:	e1a03002 	mov	r3, r2
        278d90:	e3a0208c 	mov	r2, #140	; 0x8c
        278d94:	ea0437a2 	b	386c24 <TStore::CalcXIPObjectSize(long, long, long *)>
    */
}

/**
 * Symbol: BBFastCopy__FPUlT1lT3UlT5N53
 * Address: 002ac0e0
 */
void globals::BBFastCopy() {
    /*
        2ac0e0:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
        2ac0e4:	e59d701c 	ldr	r7, [sp, #28]
        2ac0e8:	e1e04007 	mvn	r4, r7
        2ac0ec:	e59d6020 	ldr	r6, [sp, #32]
        2ac0f0:	e1e0e006 	mvn	lr, r6
        2ac0f4:	e28dc024 	add	ip, sp, #36	; 0x24
        2ac0f8:	e89c1020 	ldmia	ip, {r5, ip}
        2ac0fc:	e24cc002 	sub	ip, ip, #2	; 0x2
        2ac100:	e4908004 	ldr	r8, [r0], #4
        2ac104:	e0089007 	and	r9, r8, r7
        2ac108:	e5918000 	ldr	r8, [r1]
        2ac10c:	e0088004 	and	r8, r8, r4
        2ac110:	e1898008 	orr	r8, r9, r8
        2ac114:	e4818004 	str	r8, [r1], #4
        2ac118:	e1a0800c 	mov	r8, ip
        2ac11c:	e35c0004 	cmp	ip, #4	; 0x4
        2ac120:	ba00000a 	blt	2ac150 <BBFastCopy__FPUlT1lT3UlT5N53+0x70>
        2ac124:	e4909004 	ldr	r9, [r0], #4
        2ac128:	e4819004 	str	r9, [r1], #4
        2ac12c:	e4909004 	ldr	r9, [r0], #4
        2ac130:	e4819004 	str	r9, [r1], #4
        2ac134:	e4909004 	ldr	r9, [r0], #4
        2ac138:	e4819004 	str	r9, [r1], #4
        2ac13c:	e4909004 	ldr	r9, [r0], #4
        2ac140:	e2488004 	sub	r8, r8, #4	; 0x4
        2ac144:	e3580004 	cmp	r8, #4	; 0x4
        2ac148:	e4819004 	str	r9, [r1], #4
        2ac14c:	aafffff4 	bge	2ac124 <BBFastCopy__FPUlT1lT3UlT5N53+0x44>
        2ac150:	e3380001 	teq	r8, #1	; 0x1
        2ac154:	0a000007 	beq	2ac178 <BBFastCopy__FPUlT1lT3UlT5N53+0x98>
        2ac158:	e3380002 	teq	r8, #2	; 0x2
        2ac15c:	0a000003 	beq	2ac170 <BBFastCopy__FPUlT1lT3UlT5N53+0x90>
        2ac160:	e3380003 	teq	r8, #3	; 0x3
        2ac164:	1a000005 	bne	2ac180 <BBFastCopy__FPUlT1lT3UlT5N53+0xa0>
        2ac168:	e4908004 	ldr	r8, [r0], #4
        2ac16c:	e4818004 	str	r8, [r1], #4
        2ac170:	e4908004 	ldr	r8, [r0], #4
        2ac174:	e4818004 	str	r8, [r1], #4
        2ac178:	e4908004 	ldr	r8, [r0], #4
        2ac17c:	e4818004 	str	r8, [r1], #4
        2ac180:	e4908004 	ldr	r8, [r0], #4
        2ac184:	e0089006 	and	r9, r8, r6
        2ac188:	e5918000 	ldr	r8, [r1]
        2ac18c:	e008800e 	and	r8, r8, lr
        2ac190:	e1898008 	orr	r8, r9, r8
        2ac194:	e0800002 	add	r0, r0, r2
        2ac198:	e4818004 	str	r8, [r1], #4
        2ac19c:	e0811003 	add	r1, r1, r3
        2ac1a0:	e2455001 	sub	r5, r5, #1	; 0x1
        2ac1a4:	e3550000 	cmp	r5, #0	; 0x0
        2ac1a8:	caffffd4 	bgt	2ac100 <BBFastCopy__FPUlT1lT3UlT5N53+0x20>
        2ac1ac:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
    */
}

/**
 * Symbol: BBFastBkCopy__FPUlT1lT3UlT5N53
 * Address: 002ac1b0
 */
void globals::BBFastBkCopy() {
    /*
        2ac1b0:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
        2ac1b4:	e59d801c 	ldr	r8, [sp, #28]
        2ac1b8:	e1e05008 	mvn	r5, r8
        2ac1bc:	e59d7020 	ldr	r7, [sp, #32]
        2ac1c0:	e1e04007 	mvn	r4, r7
        2ac1c4:	e28de024 	add	lr, sp, #36	; 0x24
        2ac1c8:	e89e4040 	ldmia	lr, {r6, lr}
        2ac1cc:	e24ee002 	sub	lr, lr, #2	; 0x2
        2ac1d0:	e2800004 	add	r0, r0, #4	; 0x4
        2ac1d4:	e2811004 	add	r1, r1, #4	; 0x4
        2ac1d8:	e530c004 	ldr	ip, [r0, -#4]!
        2ac1dc:	e00c9008 	and	r9, ip, r8
        2ac1e0:	e531c004 	ldr	ip, [r1, -#4]!
        2ac1e4:	e00cc005 	and	ip, ip, r5
        2ac1e8:	e189c00c 	orr	ip, r9, ip
        2ac1ec:	e581c000 	str	ip, [r1]
        2ac1f0:	e1a0c00e 	mov	ip, lr
        2ac1f4:	e35e0002 	cmp	lr, #2	; 0x2
        2ac1f8:	ba000006 	blt	2ac218 <BBFastBkCopy__FPUlT1lT3UlT5N53+0x68>
        2ac1fc:	e5309004 	ldr	r9, [r0, -#4]!
        2ac200:	e5219004 	str	r9, [r1, -#4]!
        2ac204:	e5309004 	ldr	r9, [r0, -#4]!
        2ac208:	e24cc002 	sub	ip, ip, #2	; 0x2
        2ac20c:	e35c0002 	cmp	ip, #2	; 0x2
        2ac210:	e5219004 	str	r9, [r1, -#4]!
        2ac214:	aafffff8 	bge	2ac1fc <BBFastBkCopy__FPUlT1lT3UlT5N53+0x4c>
        2ac218:	e35c0000 	cmp	ip, #0	; 0x0
        2ac21c:	da000001 	ble	2ac228 <BBFastBkCopy__FPUlT1lT3UlT5N53+0x78>
        2ac220:	e530c004 	ldr	ip, [r0, -#4]!
        2ac224:	e521c004 	str	ip, [r1, -#4]!
        2ac228:	e530c004 	ldr	ip, [r0, -#4]!
        2ac22c:	e00c9007 	and	r9, ip, r7
        2ac230:	e531c004 	ldr	ip, [r1, -#4]!
        2ac234:	e00cc004 	and	ip, ip, r4
        2ac238:	e189c00c 	orr	ip, r9, ip
        2ac23c:	e681c003 	str	ip, [r1], r3
        2ac240:	e0800002 	add	r0, r0, r2
        2ac244:	e2466001 	sub	r6, r6, #1	; 0x1
        2ac248:	e3560000 	cmp	r6, #0	; 0x0
        2ac24c:	caffffe1 	bgt	2ac1d8 <BBFastBkCopy__FPUlT1lT3UlT5N53+0x28>
        2ac250:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
    */
}

/**
 * Symbol: BBPatCopy__FPUlT1lT3UlT5N53
 * Address: 002ac254
 */
void globals::BBPatCopy() {
    /*
        2ac254:	e92d47f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, lr}
        2ac258:	e59d9020 	ldr	r9, [sp, #32]
        2ac25c:	e1e06009 	mvn	r6, r9
        2ac260:	e59d8024 	ldr	r8, [sp, #36]
        2ac264:	e1e05008 	mvn	r5, r8
        2ac268:	e59d402c 	ldr	r4, [sp, #44]
        2ac26c:	e2444002 	sub	r4, r4, #2	; 0x2
        2ac270:	e2833004 	add	r3, r3, #4	; 0x4
        2ac274:	e59d7028 	ldr	r7, [sp, #40]
        2ac278:	e790c102 	ldr	ip, [r0, r2, lsl #2]
        2ac27c:	e00ca009 	and	sl, ip, r9
        2ac280:	e591e000 	ldr	lr, [r1]
        2ac284:	e00ee006 	and	lr, lr, r6
        2ac288:	e18ae00e 	orr	lr, sl, lr
        2ac28c:	e481e004 	str	lr, [r1], #4
        2ac290:	e1a0e004 	mov	lr, r4
        2ac294:	e3540004 	cmp	r4, #4	; 0x4
        2ac298:	ba000006 	blt	2ac2b8 <BBPatCopy__FPUlT1lT3UlT5N53+0x64>
        2ac29c:	e481c004 	str	ip, [r1], #4
        2ac2a0:	e481c004 	str	ip, [r1], #4
        2ac2a4:	e481c004 	str	ip, [r1], #4
        2ac2a8:	e24ee004 	sub	lr, lr, #4	; 0x4
        2ac2ac:	e481c004 	str	ip, [r1], #4
        2ac2b0:	e35e0004 	cmp	lr, #4	; 0x4
        2ac2b4:	aafffff8 	bge	2ac29c <BBPatCopy__FPUlT1lT3UlT5N53+0x48>
        2ac2b8:	e33e0001 	teq	lr, #1	; 0x1
        2ac2bc:	0a000005 	beq	2ac2d8 <BBPatCopy__FPUlT1lT3UlT5N53+0x84>
        2ac2c0:	e33e0002 	teq	lr, #2	; 0x2
        2ac2c4:	0a000002 	beq	2ac2d4 <BBPatCopy__FPUlT1lT3UlT5N53+0x80>
        2ac2c8:	e33e0003 	teq	lr, #3	; 0x3
        2ac2cc:	1a000002 	bne	2ac2dc <BBPatCopy__FPUlT1lT3UlT5N53+0x88>
        2ac2d0:	e481c004 	str	ip, [r1], #4
        2ac2d4:	e481c004 	str	ip, [r1], #4
        2ac2d8:	e481c004 	str	ip, [r1], #4
        2ac2dc:	e00ce008 	and	lr, ip, r8
        2ac2e0:	e591c000 	ldr	ip, [r1]
        2ac2e4:	e00cc005 	and	ip, ip, r5
        2ac2e8:	e18ec00c 	orr	ip, lr, ip
        2ac2ec:	e681c003 	str	ip, [r1], r3
        2ac2f0:	e2822001 	add	r2, r2, #1	; 0x1
        2ac2f4:	e202200f 	and	r2, r2, #15	; 0xf
        2ac2f8:	e2477001 	sub	r7, r7, #1	; 0x1
        2ac2fc:	e3570000 	cmp	r7, #0	; 0x0
        2ac300:	caffffdc 	bgt	2ac278 <BBPatCopy__FPUlT1lT3UlT5N53+0x24>
        2ac304:	e8bd87f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
    */
}

/**
 * Symbol: BBFastPatOrBic__FPUlT1lT3UlT5N53
 * Address: 002ac308
 */
void globals::BBFastPatOrBic() {
    /*
        2ac308:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2ac30c:	e28dc014 	add	ip, sp, #20	; 0x14
        2ac310:	e89c1060 	ldmia	ip, {r5, r6, ip}
        2ac314:	e0055006 	and	r5, r5, r6
        2ac318:	e59de028 	ldr	lr, [sp, #40]
        2ac31c:	e083300e 	add	r3, r3, lr
        2ac320:	e59d402c 	ldr	r4, [sp, #44]
        2ac324:	e3a0e001 	mov	lr, #1	; 0x1
        2ac328:	e5906000 	ldr	r6, [r0]
        2ac32c:	e790710e 	ldr	r7, [r0, lr, lsl #2]
        2ac330:	e1370006 	teq	r7, r6
        2ac334:	1a000002 	bne	2ac344 <BBFastPatOrBic__FPUlT1lT3UlT5N53+0x3c>
        2ac338:	e28ee001 	add	lr, lr, #1	; 0x1
        2ac33c:	e35e0010 	cmp	lr, #16	; 0x10
        2ac340:	bafffff9 	blt	2ac32c <BBFastPatOrBic__FPUlT1lT3UlT5N53+0x24>
        2ac344:	e33e0010 	teq	lr, #16	; 0x10
        2ac348:	1a00000a 	bne	2ac378 <BBFastPatOrBic__FPUlT1lT3UlT5N53+0x70>
        2ac34c:	e0060005 	and	r0, r6, r5
        2ac350:	e0044000 	and	r4, r4, r0
        2ac354:	e1e00000 	mvn	r0, r0
        2ac358:	e5912000 	ldr	r2, [r1]
        2ac35c:	e0022000 	and	r2, r2, r0
        2ac360:	e1822004 	orr	r2, r2, r4
        2ac364:	e6812003 	str	r2, [r1], r3
        2ac368:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac36c:	e35c0000 	cmp	ip, #0	; 0x0
        2ac370:	cafffff8 	bgt	2ac358 <BBFastPatOrBic__FPUlT1lT3UlT5N53+0x50>
        2ac374:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        2ac378:	e3750001 	cmn	r5, #1	; 0x1
        2ac37c:	1a00000b 	bne	2ac3b0 <BBFastPatOrBic__FPUlT1lT3UlT5N53+0xa8>
        2ac380:	e790e102 	ldr	lr, [r0, r2, lsl #2]
        2ac384:	e00e6004 	and	r6, lr, r4
        2ac388:	e5915000 	ldr	r5, [r1]
        2ac38c:	e1c5e00e 	bic	lr, r5, lr
        2ac390:	e186e00e 	orr	lr, r6, lr
        2ac394:	e681e003 	str	lr, [r1], r3
        2ac398:	e2822001 	add	r2, r2, #1	; 0x1
        2ac39c:	e202200f 	and	r2, r2, #15	; 0xf
        2ac3a0:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac3a4:	e35c0000 	cmp	ip, #0	; 0x0
        2ac3a8:	cafffff4 	bgt	2ac380 <BBFastPatOrBic__FPUlT1lT3UlT5N53+0x78>
        2ac3ac:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        2ac3b0:	e790e102 	ldr	lr, [r0, r2, lsl #2]
        2ac3b4:	e00ee005 	and	lr, lr, r5
        2ac3b8:	e00e7004 	and	r7, lr, r4
        2ac3bc:	e5916000 	ldr	r6, [r1]
        2ac3c0:	e1c6e00e 	bic	lr, r6, lr
        2ac3c4:	e187e00e 	orr	lr, r7, lr
        2ac3c8:	e681e003 	str	lr, [r1], r3
        2ac3cc:	e2822001 	add	r2, r2, #1	; 0x1
        2ac3d0:	e202200f 	and	r2, r2, #15	; 0xf
        2ac3d4:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac3d8:	e35c0000 	cmp	ip, #0	; 0x0
        2ac3dc:	cafffff3 	bgt	2ac3b0 <BBFastPatOrBic__FPUlT1lT3UlT5N53+0xa8>
        2ac3e0:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: BBFastPatOrBic2__FPUlT1lT3UlT5N53
 * Address: 002ac3e4
 */
void globals::BBFastPatOrBic2() {
    /*
        2ac3e4:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        2ac3e8:	e28de018 	add	lr, sp, #24	; 0x18
        2ac3ec:	e89e4010 	ldmia	lr, {r4, lr}
        2ac3f0:	e004400e 	and	r4, r4, lr
        2ac3f4:	e28d602c 	add	r6, sp, #44	; 0x2c
        2ac3f8:	e8960060 	ldmia	r6, {r5, r6}
        2ac3fc:	e0833005 	add	r3, r3, r5
        2ac400:	e59dc020 	ldr	ip, [sp, #32]
        2ac404:	e3a0e001 	mov	lr, #1	; 0x1
        2ac408:	e5905000 	ldr	r5, [r0]
        2ac40c:	e790710e 	ldr	r7, [r0, lr, lsl #2]
        2ac410:	e1370005 	teq	r7, r5
        2ac414:	1a000002 	bne	2ac424 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0x40>
        2ac418:	e28ee001 	add	lr, lr, #1	; 0x1
        2ac41c:	e35e0010 	cmp	lr, #16	; 0x10
        2ac420:	bafffff9 	blt	2ac40c <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0x28>
        2ac424:	e33e0010 	teq	lr, #16	; 0x10
        2ac428:	1a000010 	bne	2ac470 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0x8c>
        2ac42c:	e0050004 	and	r0, r5, r4
        2ac430:	e0002006 	and	r2, r0, r6
        2ac434:	e3a00103 	mov	r0, #-1073741824	; 0xc0000000
        2ac438:	e1120000 	tst	r2, r0
        2ac43c:	0a000002 	beq	2ac44c <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0x68>
        2ac440:	e591e000 	ldr	lr, [r1]
        2ac444:	e1cee000 	bic	lr, lr, r0
        2ac448:	e581e000 	str	lr, [r1]
        2ac44c:	e1b00120 	movs	r0, r0, lsr #2
        2ac450:	1afffff8 	bne	2ac438 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0x54>
        2ac454:	e5910000 	ldr	r0, [r1]
        2ac458:	e1820000 	orr	r0, r2, r0
        2ac45c:	e6810003 	str	r0, [r1], r3
        2ac460:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac464:	e35c0000 	cmp	ip, #0	; 0x0
        2ac468:	cafffff1 	bgt	2ac434 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0x50>
        2ac46c:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
        2ac470:	e3740001 	cmn	r4, #1	; 0x1
        2ac474:	1a000012 	bne	2ac4c4 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0xe0>
        2ac478:	e790e102 	ldr	lr, [r0, r2, lsl #2]
        2ac47c:	e00e4006 	and	r4, lr, r6
        2ac480:	e3a0e103 	mov	lr, #-1073741824	; 0xc0000000
        2ac484:	e114000e 	tst	r4, lr
        2ac488:	0a000002 	beq	2ac498 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0xb4>
        2ac48c:	e5917000 	ldr	r7, [r1]
        2ac490:	e1c7500e 	bic	r5, r7, lr
        2ac494:	e5815000 	str	r5, [r1]
        2ac498:	e1b0e12e 	movs	lr, lr, lsr #2
        2ac49c:	1afffff8 	bne	2ac484 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0xa0>
        2ac4a0:	e591e000 	ldr	lr, [r1]
        2ac4a4:	e184e00e 	orr	lr, r4, lr
        2ac4a8:	e681e003 	str	lr, [r1], r3
        2ac4ac:	e2822001 	add	r2, r2, #1	; 0x1
        2ac4b0:	e202200f 	and	r2, r2, #15	; 0xf
        2ac4b4:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac4b8:	e35c0000 	cmp	ip, #0	; 0x0
        2ac4bc:	caffffed 	bgt	2ac478 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0x94>
        2ac4c0:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
        2ac4c4:	e790e102 	ldr	lr, [r0, r2, lsl #2]
        2ac4c8:	e00ee004 	and	lr, lr, r4
        2ac4cc:	e00e5006 	and	r5, lr, r6
        2ac4d0:	e3a0e103 	mov	lr, #-1073741824	; 0xc0000000
        2ac4d4:	e115000e 	tst	r5, lr
        2ac4d8:	0a000002 	beq	2ac4e8 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0x104>
        2ac4dc:	e5918000 	ldr	r8, [r1]
        2ac4e0:	e1c8700e 	bic	r7, r8, lr
        2ac4e4:	e5817000 	str	r7, [r1]
        2ac4e8:	e1b0e12e 	movs	lr, lr, lsr #2
        2ac4ec:	1afffff8 	bne	2ac4d4 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0xf0>
        2ac4f0:	e591e000 	ldr	lr, [r1]
        2ac4f4:	e185e00e 	orr	lr, r5, lr
        2ac4f8:	e681e003 	str	lr, [r1], r3
        2ac4fc:	e2822001 	add	r2, r2, #1	; 0x1
        2ac500:	e202200f 	and	r2, r2, #15	; 0xf
        2ac504:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac508:	e35c0000 	cmp	ip, #0	; 0x0
        2ac50c:	caffffec 	bgt	2ac4c4 <BBFastPatOrBic2__FPUlT1lT3UlT5N53+0xe0>
        2ac510:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: BBFastPatOrBic4__FPUlT1lT3UlT5N53
 * Address: 002ac514
 */
void globals::BBFastPatOrBic4() {
    /*
        2ac514:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        2ac518:	e28de018 	add	lr, sp, #24	; 0x18
        2ac51c:	e89e4010 	ldmia	lr, {r4, lr}
        2ac520:	e004400e 	and	r4, r4, lr
        2ac524:	e28d602c 	add	r6, sp, #44	; 0x2c
        2ac528:	e8960060 	ldmia	r6, {r5, r6}
        2ac52c:	e0833005 	add	r3, r3, r5
        2ac530:	e59dc020 	ldr	ip, [sp, #32]
        2ac534:	e3a0e001 	mov	lr, #1	; 0x1
        2ac538:	e5905000 	ldr	r5, [r0]
        2ac53c:	e790710e 	ldr	r7, [r0, lr, lsl #2]
        2ac540:	e1370005 	teq	r7, r5
        2ac544:	1a000002 	bne	2ac554 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0x40>
        2ac548:	e28ee001 	add	lr, lr, #1	; 0x1
        2ac54c:	e35e0010 	cmp	lr, #16	; 0x10
        2ac550:	bafffff9 	blt	2ac53c <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0x28>
        2ac554:	e33e0010 	teq	lr, #16	; 0x10
        2ac558:	1a000010 	bne	2ac5a0 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0x8c>
        2ac55c:	e0050004 	and	r0, r5, r4
        2ac560:	e0002006 	and	r2, r0, r6
        2ac564:	e3a0020f 	mov	r0, #-268435456	; 0xf0000000
        2ac568:	e1120000 	tst	r2, r0
        2ac56c:	0a000002 	beq	2ac57c <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0x68>
        2ac570:	e591e000 	ldr	lr, [r1]
        2ac574:	e1cee000 	bic	lr, lr, r0
        2ac578:	e581e000 	str	lr, [r1]
        2ac57c:	e1b00220 	movs	r0, r0, lsr #4
        2ac580:	1afffff8 	bne	2ac568 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0x54>
        2ac584:	e5910000 	ldr	r0, [r1]
        2ac588:	e1820000 	orr	r0, r2, r0
        2ac58c:	e6810003 	str	r0, [r1], r3
        2ac590:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac594:	e35c0000 	cmp	ip, #0	; 0x0
        2ac598:	cafffff1 	bgt	2ac564 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0x50>
        2ac59c:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
        2ac5a0:	e3740001 	cmn	r4, #1	; 0x1
        2ac5a4:	1a000012 	bne	2ac5f4 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0xe0>
        2ac5a8:	e790e102 	ldr	lr, [r0, r2, lsl #2]
        2ac5ac:	e00e4006 	and	r4, lr, r6
        2ac5b0:	e3a0e20f 	mov	lr, #-268435456	; 0xf0000000
        2ac5b4:	e114000e 	tst	r4, lr
        2ac5b8:	0a000002 	beq	2ac5c8 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0xb4>
        2ac5bc:	e5917000 	ldr	r7, [r1]
        2ac5c0:	e1c7500e 	bic	r5, r7, lr
        2ac5c4:	e5815000 	str	r5, [r1]
        2ac5c8:	e1b0e22e 	movs	lr, lr, lsr #4
        2ac5cc:	1afffff8 	bne	2ac5b4 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0xa0>
        2ac5d0:	e591e000 	ldr	lr, [r1]
        2ac5d4:	e184e00e 	orr	lr, r4, lr
        2ac5d8:	e681e003 	str	lr, [r1], r3
        2ac5dc:	e2822001 	add	r2, r2, #1	; 0x1
        2ac5e0:	e202200f 	and	r2, r2, #15	; 0xf
        2ac5e4:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac5e8:	e35c0000 	cmp	ip, #0	; 0x0
        2ac5ec:	caffffed 	bgt	2ac5a8 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0x94>
        2ac5f0:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
        2ac5f4:	e790e102 	ldr	lr, [r0, r2, lsl #2]
        2ac5f8:	e00ee004 	and	lr, lr, r4
        2ac5fc:	e00e5006 	and	r5, lr, r6
        2ac600:	e3a0e20f 	mov	lr, #-268435456	; 0xf0000000
        2ac604:	e115000e 	tst	r5, lr
        2ac608:	0a000002 	beq	2ac618 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0x104>
        2ac60c:	e5918000 	ldr	r8, [r1]
        2ac610:	e1c8700e 	bic	r7, r8, lr
        2ac614:	e5817000 	str	r7, [r1]
        2ac618:	e1b0e22e 	movs	lr, lr, lsr #4
        2ac61c:	1afffff8 	bne	2ac604 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0xf0>
        2ac620:	e591e000 	ldr	lr, [r1]
        2ac624:	e185e00e 	orr	lr, r5, lr
        2ac628:	e681e003 	str	lr, [r1], r3
        2ac62c:	e2822001 	add	r2, r2, #1	; 0x1
        2ac630:	e202200f 	and	r2, r2, #15	; 0xf
        2ac634:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac638:	e35c0000 	cmp	ip, #0	; 0x0
        2ac63c:	caffffec 	bgt	2ac5f4 <BBFastPatOrBic4__FPUlT1lT3UlT5N53+0xe0>
        2ac640:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: BBPatOrBic__FPUlT1lT3UlT5N53
 * Address: 002ac644
 */
void globals::BBPatOrBic() {
    /*
        2ac644:	e1a0c00d 	mov	ip, sp
        2ac648:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ac64c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ac650:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ac654:	e59b0020 	ldr	r0, [fp, #32]
        2ac658:	e240e001 	sub	lr, r0, #1	; 0x1
        2ac65c:	e59b401c 	ldr	r4, [fp, #28]
        2ac660:	e59b502c 	ldr	r5, [fp, #44]
        2ac664:	e59b6028 	ldr	r6, [fp, #40]
        2ac668:	e59b7018 	ldr	r7, [fp, #24]
        2ac66c:	e59b8014 	ldr	r8, [fp, #20]
        2ac670:	e59b0004 	ldr	r0, [fp, #4]
        2ac674:	e790c102 	ldr	ip, [r0, r2, lsl #2]
        2ac678:	e1a03008 	mov	r3, r8
        2ac67c:	e1b0000e 	movs	r0, lr
        2ac680:	4a00000a 	bmi	2ac6b0 <BBPatOrBic__FPUlT1lT3UlT5N53+0x6c>
        2ac684:	e3300000 	teq	r0, #0	; 0x0
        2ac688:	00033007 	andeq	r3, r3, r7
        2ac68c:	e003300c 	and	r3, r3, ip
        2ac690:	e003a005 	and	sl, r3, r5
        2ac694:	e5919000 	ldr	r9, [r1]
        2ac698:	e1c93003 	bic	r3, r9, r3
        2ac69c:	e18a3003 	orr	r3, sl, r3
        2ac6a0:	e6813006 	str	r3, [r1], r6
        2ac6a4:	e3e03000 	mvn	r3, #0	; 0x0
        2ac6a8:	e0900003 	adds	r0, r0, r3
        2ac6ac:	5afffff4 	bpl	2ac684 <BBPatOrBic__FPUlT1lT3UlT5N53+0x40>
        2ac6b0:	e2820001 	add	r0, r2, #1	; 0x1
        2ac6b4:	e200200f 	and	r2, r0, #15	; 0xf
        2ac6b8:	e59b3010 	ldr	r3, [fp, #16]
        2ac6bc:	e0811003 	add	r1, r1, r3
        2ac6c0:	e2444001 	sub	r4, r4, #1	; 0x1
        2ac6c4:	e3540000 	cmp	r4, #0	; 0x0
        2ac6c8:	caffffe8 	bgt	2ac670 <BBPatOrBic__FPUlT1lT3UlT5N53+0x2c>
        2ac6cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BBPatOrBic2__FPUlT1lT3UlT5N53
 * Address: 002ac6d0
 */
void globals::BBPatOrBic2() {
    /*
        2ac6d0:	e1a0c00d 	mov	ip, sp
        2ac6d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ac6d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ac6dc:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ac6e0:	e59b0020 	ldr	r0, [fp, #32]
        2ac6e4:	e2403001 	sub	r3, r0, #1	; 0x1
        2ac6e8:	e59b401c 	ldr	r4, [fp, #28]
        2ac6ec:	e59b502c 	ldr	r5, [fp, #44]
        2ac6f0:	e59b6028 	ldr	r6, [fp, #40]
        2ac6f4:	e59b7018 	ldr	r7, [fp, #24]
        2ac6f8:	e59b8014 	ldr	r8, [fp, #20]
        2ac6fc:	e52d3004 	str	r3, [sp, -#4]!
        2ac700:	e59b0004 	ldr	r0, [fp, #4]
        2ac704:	e790c102 	ldr	ip, [r0, r2, lsl #2]
        2ac708:	e1a00008 	mov	r0, r8
        2ac70c:	e00ce005 	and	lr, ip, r5
        2ac710:	e59d3000 	ldr	r3, [sp]
        2ac714:	e3530000 	cmp	r3, #0	; 0x0
        2ac718:	ba000010 	blt	2ac760 <BBPatOrBic2__FPUlT1lT3UlT5N53+0x90>
        2ac71c:	e3330000 	teq	r3, #0	; 0x0
        2ac720:	00000007 	andeq	r0, r0, r7
        2ac724:	e00ec000 	and	ip, lr, r0
        2ac728:	e3a00103 	mov	r0, #-1073741824	; 0xc0000000
        2ac72c:	e11c0000 	tst	ip, r0
        2ac730:	0a000002 	beq	2ac740 <BBPatOrBic2__FPUlT1lT3UlT5N53+0x70>
        2ac734:	e591a000 	ldr	sl, [r1]
        2ac738:	e1ca9000 	bic	r9, sl, r0
        2ac73c:	e5819000 	str	r9, [r1]
        2ac740:	e1b00120 	movs	r0, r0, lsr #2
        2ac744:	1afffff8 	bne	2ac72c <BBPatOrBic2__FPUlT1lT3UlT5N53+0x5c>
        2ac748:	e5910000 	ldr	r0, [r1]
        2ac74c:	e18c0000 	orr	r0, ip, r0
        2ac750:	e6810006 	str	r0, [r1], r6
        2ac754:	e3e00000 	mvn	r0, #0	; 0x0
        2ac758:	e0933000 	adds	r3, r3, r0
        2ac75c:	5affffee 	bpl	2ac71c <BBPatOrBic2__FPUlT1lT3UlT5N53+0x4c>
        2ac760:	e2820001 	add	r0, r2, #1	; 0x1
        2ac764:	e200200f 	and	r2, r0, #15	; 0xf
        2ac768:	e59b3010 	ldr	r3, [fp, #16]
        2ac76c:	e0811003 	add	r1, r1, r3
        2ac770:	e2444001 	sub	r4, r4, #1	; 0x1
        2ac774:	e3540000 	cmp	r4, #0	; 0x0
        2ac778:	caffffe0 	bgt	2ac700 <BBPatOrBic2__FPUlT1lT3UlT5N53+0x30>
        2ac77c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BBPatOrBic4__FPUlT1lT3UlT5N53
 * Address: 002ac780
 */
void globals::BBPatOrBic4() {
    /*
        2ac780:	e1a0c00d 	mov	ip, sp
        2ac784:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ac788:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ac78c:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ac790:	e59b0020 	ldr	r0, [fp, #32]
        2ac794:	e2403001 	sub	r3, r0, #1	; 0x1
        2ac798:	e59b401c 	ldr	r4, [fp, #28]
        2ac79c:	e59b502c 	ldr	r5, [fp, #44]
        2ac7a0:	e59b6028 	ldr	r6, [fp, #40]
        2ac7a4:	e59b7018 	ldr	r7, [fp, #24]
        2ac7a8:	e59b8014 	ldr	r8, [fp, #20]
        2ac7ac:	e52d3004 	str	r3, [sp, -#4]!
        2ac7b0:	e59b0004 	ldr	r0, [fp, #4]
        2ac7b4:	e790c102 	ldr	ip, [r0, r2, lsl #2]
        2ac7b8:	e1a00008 	mov	r0, r8
        2ac7bc:	e00ce005 	and	lr, ip, r5
        2ac7c0:	e59d3000 	ldr	r3, [sp]
        2ac7c4:	e3530000 	cmp	r3, #0	; 0x0
        2ac7c8:	ba000010 	blt	2ac810 <BBPatOrBic4__FPUlT1lT3UlT5N53+0x90>
        2ac7cc:	e3330000 	teq	r3, #0	; 0x0
        2ac7d0:	00000007 	andeq	r0, r0, r7
        2ac7d4:	e00ec000 	and	ip, lr, r0
        2ac7d8:	e3a0020f 	mov	r0, #-268435456	; 0xf0000000
        2ac7dc:	e11c0000 	tst	ip, r0
        2ac7e0:	0a000002 	beq	2ac7f0 <BBPatOrBic4__FPUlT1lT3UlT5N53+0x70>
        2ac7e4:	e591a000 	ldr	sl, [r1]
        2ac7e8:	e1ca9000 	bic	r9, sl, r0
        2ac7ec:	e5819000 	str	r9, [r1]
        2ac7f0:	e1b00220 	movs	r0, r0, lsr #4
        2ac7f4:	1afffff8 	bne	2ac7dc <BBPatOrBic4__FPUlT1lT3UlT5N53+0x5c>
        2ac7f8:	e5910000 	ldr	r0, [r1]
        2ac7fc:	e18c0000 	orr	r0, ip, r0
        2ac800:	e6810006 	str	r0, [r1], r6
        2ac804:	e3e00000 	mvn	r0, #0	; 0x0
        2ac808:	e0933000 	adds	r3, r3, r0
        2ac80c:	5affffee 	bpl	2ac7cc <BBPatOrBic4__FPUlT1lT3UlT5N53+0x4c>
        2ac810:	e2820001 	add	r0, r2, #1	; 0x1
        2ac814:	e200200f 	and	r2, r0, #15	; 0xf
        2ac818:	e59b3010 	ldr	r3, [fp, #16]
        2ac81c:	e0811003 	add	r1, r1, r3
        2ac820:	e2444001 	sub	r4, r4, #1	; 0x1
        2ac824:	e3540000 	cmp	r4, #0	; 0x0
        2ac828:	caffffe0 	bgt	2ac7b0 <BBPatOrBic4__FPUlT1lT3UlT5N53+0x30>
        2ac82c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BBFastPatXor__FPUlT1lT3UlT5N53
 * Address: 002ac830
 */
void globals::BBFastPatXor() {
    /*
        2ac830:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        2ac834:	e28dc010 	add	ip, sp, #16	; 0x10
        2ac838:	e89c1030 	ldmia	ip, {r4, r5, ip}
        2ac83c:	e0044005 	and	r4, r4, r5
        2ac840:	e59de024 	ldr	lr, [sp, #36]
        2ac844:	e083300e 	add	r3, r3, lr
        2ac848:	e3a0e001 	mov	lr, #1	; 0x1
        2ac84c:	e5905000 	ldr	r5, [r0]
        2ac850:	e790610e 	ldr	r6, [r0, lr, lsl #2]
        2ac854:	e1360005 	teq	r6, r5
        2ac858:	1a000002 	bne	2ac868 <BBFastPatXor__FPUlT1lT3UlT5N53+0x38>
        2ac85c:	e28ee001 	add	lr, lr, #1	; 0x1
        2ac860:	e35e0010 	cmp	lr, #16	; 0x10
        2ac864:	bafffff9 	blt	2ac850 <BBFastPatXor__FPUlT1lT3UlT5N53+0x20>
        2ac868:	e33e0010 	teq	lr, #16	; 0x10
        2ac86c:	1a000007 	bne	2ac890 <BBFastPatXor__FPUlT1lT3UlT5N53+0x60>
        2ac870:	e0050004 	and	r0, r5, r4
        2ac874:	e5912000 	ldr	r2, [r1]
        2ac878:	e0222000 	eor	r2, r2, r0
        2ac87c:	e6812003 	str	r2, [r1], r3
        2ac880:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac884:	e35c0000 	cmp	ip, #0	; 0x0
        2ac888:	cafffff9 	bgt	2ac874 <BBFastPatXor__FPUlT1lT3UlT5N53+0x44>
        2ac88c:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        2ac890:	e3740001 	cmn	r4, #1	; 0x1
        2ac894:	1a000009 	bne	2ac8c0 <BBFastPatXor__FPUlT1lT3UlT5N53+0x90>
        2ac898:	e790e102 	ldr	lr, [r0, r2, lsl #2]
        2ac89c:	e5914000 	ldr	r4, [r1]
        2ac8a0:	e024e00e 	eor	lr, r4, lr
        2ac8a4:	e681e003 	str	lr, [r1], r3
        2ac8a8:	e2822001 	add	r2, r2, #1	; 0x1
        2ac8ac:	e202200f 	and	r2, r2, #15	; 0xf
        2ac8b0:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac8b4:	e35c0000 	cmp	ip, #0	; 0x0
        2ac8b8:	cafffff6 	bgt	2ac898 <BBFastPatXor__FPUlT1lT3UlT5N53+0x68>
        2ac8bc:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        2ac8c0:	e790e102 	ldr	lr, [r0, r2, lsl #2]
        2ac8c4:	e00ee004 	and	lr, lr, r4
        2ac8c8:	e5915000 	ldr	r5, [r1]
        2ac8cc:	e02ee005 	eor	lr, lr, r5
        2ac8d0:	e681e003 	str	lr, [r1], r3
        2ac8d4:	e2822001 	add	r2, r2, #1	; 0x1
        2ac8d8:	e202200f 	and	r2, r2, #15	; 0xf
        2ac8dc:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ac8e0:	e35c0000 	cmp	ip, #0	; 0x0
        2ac8e4:	cafffff5 	bgt	2ac8c0 <BBFastPatXor__FPUlT1lT3UlT5N53+0x90>
        2ac8e8:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: BBPatXor__FPUlT1lT3UlT5N53
 * Address: 002ac8ec
 */
void globals::BBPatXor() {
    /*
        2ac8ec:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        2ac8f0:	e59d4024 	ldr	r4, [sp, #36]
        2ac8f4:	e2444002 	sub	r4, r4, #2	; 0x2
        2ac8f8:	e2833004 	add	r3, r3, #4	; 0x4
        2ac8fc:	e59d5020 	ldr	r5, [sp, #32]
        2ac900:	e59d601c 	ldr	r6, [sp, #28]
        2ac904:	e59d7018 	ldr	r7, [sp, #24]
        2ac908:	e790c102 	ldr	ip, [r0, r2, lsl #2]
        2ac90c:	e00ce007 	and	lr, ip, r7
        2ac910:	e5918000 	ldr	r8, [r1]
        2ac914:	e02ee008 	eor	lr, lr, r8
        2ac918:	e481e004 	str	lr, [r1], #4
        2ac91c:	e1a0e004 	mov	lr, r4
        2ac920:	e3540004 	cmp	r4, #4	; 0x4
        2ac924:	ba00000e 	blt	2ac964 <BBPatXor__FPUlT1lT3UlT5N53+0x78>
        2ac928:	e5918000 	ldr	r8, [r1]
        2ac92c:	e028800c 	eor	r8, r8, ip
        2ac930:	e4818004 	str	r8, [r1], #4
        2ac934:	e5918000 	ldr	r8, [r1]
        2ac938:	e028800c 	eor	r8, r8, ip
        2ac93c:	e4818004 	str	r8, [r1], #4
        2ac940:	e5918000 	ldr	r8, [r1]
        2ac944:	e028800c 	eor	r8, r8, ip
        2ac948:	e4818004 	str	r8, [r1], #4
        2ac94c:	e5918000 	ldr	r8, [r1]
        2ac950:	e028800c 	eor	r8, r8, ip
        2ac954:	e24ee004 	sub	lr, lr, #4	; 0x4
        2ac958:	e35e0004 	cmp	lr, #4	; 0x4
        2ac95c:	e4818004 	str	r8, [r1], #4
        2ac960:	aafffff0 	bge	2ac928 <BBPatXor__FPUlT1lT3UlT5N53+0x3c>
        2ac964:	e33e0001 	teq	lr, #1	; 0x1
        2ac968:	0a000009 	beq	2ac994 <BBPatXor__FPUlT1lT3UlT5N53+0xa8>
        2ac96c:	e33e0002 	teq	lr, #2	; 0x2
        2ac970:	0a000004 	beq	2ac988 <BBPatXor__FPUlT1lT3UlT5N53+0x9c>
        2ac974:	e33e0003 	teq	lr, #3	; 0x3
        2ac978:	1a000008 	bne	2ac9a0 <BBPatXor__FPUlT1lT3UlT5N53+0xb4>
        2ac97c:	e591e000 	ldr	lr, [r1]
        2ac980:	e02ee00c 	eor	lr, lr, ip
        2ac984:	e481e004 	str	lr, [r1], #4
        2ac988:	e591e000 	ldr	lr, [r1]
        2ac98c:	e02ee00c 	eor	lr, lr, ip
        2ac990:	e481e004 	str	lr, [r1], #4
        2ac994:	e591e000 	ldr	lr, [r1]
        2ac998:	e02ee00c 	eor	lr, lr, ip
        2ac99c:	e481e004 	str	lr, [r1], #4
        2ac9a0:	e00cc006 	and	ip, ip, r6
        2ac9a4:	e591e000 	ldr	lr, [r1]
        2ac9a8:	e02cc00e 	eor	ip, ip, lr
        2ac9ac:	e681c003 	str	ip, [r1], r3
        2ac9b0:	e2822001 	add	r2, r2, #1	; 0x1
        2ac9b4:	e202200f 	and	r2, r2, #15	; 0xf
        2ac9b8:	e2455001 	sub	r5, r5, #1	; 0x1
        2ac9bc:	e3550000 	cmp	r5, #0	; 0x0
        2ac9c0:	caffffd0 	bgt	2ac908 <BBPatXor__FPUlT1lT3UlT5N53+0x1c>
        2ac9c4:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap
 * Address: 002ac9c8
 */
void globals::BitBlt() {
    /*
        2ac9c8:	e1a0c00d 	mov	ip, sp
        2ac9cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ac9d0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ac9d4:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ac9d8:	e1a05000 	mov	r5, r0
        2ac9dc:	e1a04001 	mov	r4, r1
        2ac9e0:	e59ba014 	ldr	sl, [fp, #20]
        2ac9e4:	e24dd040 	sub	sp, sp, #64	; 0x40
        2ac9e8:	e59b3010 	ldr	r3, [fp, #16]
        2ac9ec:	e5930004 	ldr	r0, [r3, #4]
        2ac9f0:	e59b3010 	ldr	r3, [fp, #16]
        2ac9f4:	e5931000 	ldr	r1, [r3]
        2ac9f8:	e1a01841 	mov	r1, r1, asr #16
        2ac9fc:	e0618840 	rsb	r8, r1, r0, asr #16
        2aca00:	e59b3010 	ldr	r3, [fp, #16]
        2aca04:	e5932006 	ldr	r2, [r3, #6]
        2aca08:	e59b3010 	ldr	r3, [fp, #16]
        2aca0c:	e5930002 	ldr	r0, [r3, #2]
        2aca10:	e1a00840 	mov	r0, r0, asr #16
        2aca14:	e0602842 	rsb	r2, r0, r2, asr #16
        2aca18:	e58d2034 	str	r2, [sp, #52]
        2aca1c:	e3520000 	cmp	r2, #0	; 0x0
        2aca20:	c3580000 	cmpgt	r8, #0	; 0x0
        2aca24:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2aca28:	e5942008 	ldr	r2, [r4, #8]
        2aca2c:	e0417842 	sub	r7, r1, r2, asr #16
        2aca30:	e594100a 	ldr	r1, [r4, #10]
        2aca34:	e040e841 	sub	lr, r0, r1, asr #16
        2aca38:	e58de030 	str	lr, [sp, #48]
        2aca3c:	e5940004 	ldr	r0, [r4, #4]
        2aca40:	e1a00840 	mov	r0, r0, asr #16
        2aca44:	e58d002c 	str	r0, [sp, #44]
        2aca48:	e3a02004 	mov	r2, #4	; 0x4
        2aca4c:	e58d2020 	str	r2, [sp, #32]
        2aca50:	e01a3002 	ands	r3, sl, r2
        2aca54:	e58d0024 	str	r0, [sp, #36]
        2aca58:	13e03000 	mvnne	r3, #0	; 0x0
        2aca5c:	e20aa00b 	and	sl, sl, #11	; 0xb
        2aca60:	e21a0008 	ands	r0, sl, #8	; 0x8
        2aca64:	e58d3010 	str	r3, [sp, #16]
        2aca68:	13a00001 	movne	r0, #1	; 0x1
        2aca6c:	e20000ff 	and	r0, r0, #255	; 0xff
        2aca70:	e58d000c 	str	r0, [sp, #12]
        2aca74:	e1a00004 	mov	r0, r4
        2aca78:	eb657ee2 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        2aca7c:	e58d0038 	str	r0, [sp, #56]
        2aca80:	e24dd008 	sub	sp, sp, #8	; 0x8
        2aca84:	e59f107c 	ldr	r1, [pc, #7c]	; 2acb08 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x140>
        2aca88:	e58d1044 	str	r1, [sp, #68]
        2aca8c:	e5940010 	ldr	r0, [r4, #16]
        2aca90:	e20000ff 	and	r0, r0, #255	; 0xff
        2aca94:	e0810000 	add	r0, r1, r0
        2aca98:	e5d01044 	ldrb	r1, [r0, #68]
        2aca9c:	e58d1004 	str	r1, [sp, #4]
        2acaa0:	e5d00088 	ldrb	r0, [r0, #136]
        2acaa4:	e58d0000 	str	r0, [sp]
        2acaa8:	e5950010 	ldr	r0, [r5, #16]
        2acaac:	e20090ff 	and	r9, r0, #255	; 0xff
        2acab0:	e59d0014 	ldr	r0, [sp, #20]
        2acab4:	e3300000 	teq	r0, #0	; 0x0
        2acab8:	0a000013 	beq	2acb0c <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x144>
        2acabc:	e3390008 	teq	r9, #8	; 0x8
        2acac0:	13a00040 	movne	r0, #64	; 0x40
        2acac4:	03a00080 	moveq	r0, #128	; 0x80
        2acac8:	eb627abf 	bl	1b4b5cc <$QDNewTempPtr(long)>
        2acacc:	e58d000c 	str	r0, [sp, #12]
        2acad0:	e3300000 	teq	r0, #0	; 0x0
        2acad4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2acad8:	e594200a 	ldr	r2, [r4, #10]
        2acadc:	e1a02842 	mov	r2, r2, asr #16
        2acae0:	e59d100c 	ldr	r1, [sp, #12]
        2acae4:	e59d3018 	ldr	r3, [sp, #24]
        2acae8:	e59b0018 	ldr	r0, [fp, #24]
        2acaec:	eb62978a 	bl	1b5291c <$PatExpand(PixelMap **, long *, long, unsigned long)>
        2acaf0:	e59b3010 	ldr	r3, [fp, #16]
        2acaf4:	e5930000 	ldr	r0, [r3]
        2acaf8:	e1a00600 	mov	r0, r0, lsl #12
        2acafc:	e1a00e20 	mov	r0, r0, lsr #28
        2acb00:	e58d0020 	str	r0, [sp, #32]
        2acb04:	ea000047 	b	2acc28 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x260>
        2acb08:	00380bcc 	eoreqs	r0, r8, ip, asr #23
        2acb0c:	e28d0008 	add	r0, sp, #8	; 0x8
        2acb10:	e58d000c 	str	r0, [sp, #12]
        2acb14:	e1a00005 	mov	r0, r5
        2acb18:	eb657eba 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        2acb1c:	e1a01000 	mov	r1, r0
        2acb20:	e5950008 	ldr	r0, [r5, #8]
        2acb24:	e59b200c 	ldr	r2, [fp, #12]
        2acb28:	e5922000 	ldr	r2, [r2]
        2acb2c:	e1a02842 	mov	r2, r2, asr #16
        2acb30:	e0520840 	subs	r0, r2, r0, asr #16
        2acb34:	e59b200c 	ldr	r2, [fp, #12]
        2acb38:	e5922002 	ldr	r2, [r2, #2]
        2acb3c:	e1a02842 	mov	r2, r2, asr #16
        2acb40:	e595300a 	ldr	r3, [r5, #10]
        2acb44:	e0422843 	sub	r2, r2, r3, asr #16
        2acb48:	e5953004 	ldr	r3, [r5, #4]
        2acb4c:	e1a03843 	mov	r3, r3, asr #16
        2acb50:	e58d3030 	str	r3, [sp, #48]
        2acb54:	40477000 	submi	r7, r7, r0
        2acb58:	40888000 	addmi	r8, r8, r0
        2acb5c:	43a00000 	movmi	r0, #0	; 0x0
        2acb60:	e59dc040 	ldr	ip, [sp, #64]
        2acb64:	e131000c 	teq	r1, ip
        2acb68:	1a000019 	bne	2acbd4 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x20c>
        2acb6c:	e1500007 	cmp	r0, r7
        2acb70:	aa00000c 	bge	2acba8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x1e0>
        2acb74:	e080c008 	add	ip, r0, r8
        2acb78:	e15c0007 	cmp	ip, r7
        2acb7c:	da000009 	ble	2acba8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x1e0>
        2acb80:	e24c0001 	sub	r0, ip, #1	; 0x1
        2acb84:	e087c008 	add	ip, r7, r8
        2acb88:	e24c7001 	sub	r7, ip, #1	; 0x1
        2acb8c:	e59dc030 	ldr	ip, [sp, #48]
        2acb90:	e26cc000 	rsb	ip, ip, #0	; 0x0
        2acb94:	e58dc030 	str	ip, [sp, #48]
        2acb98:	e59dc02c 	ldr	ip, [sp, #44]
        2acb9c:	e26cc000 	rsb	ip, ip, #0	; 0x0
        2acba0:	e58dc02c 	str	ip, [sp, #44]
        2acba4:	ea00000a 	b	2acbd4 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x20c>
        2acba8:	e1300007 	teq	r0, r7
        2acbac:	1a000008 	bne	2acbd4 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x20c>
        2acbb0:	e59de038 	ldr	lr, [sp, #56]
        2acbb4:	e152000e 	cmp	r2, lr
        2acbb8:	aa000005 	bge	2acbd4 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x20c>
        2acbbc:	e59dc03c 	ldr	ip, [sp, #60]
        2acbc0:	e082c00c 	add	ip, r2, ip
        2acbc4:	e59de038 	ldr	lr, [sp, #56]
        2acbc8:	e15c000e 	cmp	ip, lr
        2acbcc:	c3e0c003 	mvngt	ip, #3	; 0x3
        2acbd0:	c58dc028 	strgt	ip, [sp, #40]
        2acbd4:	e59dc044 	ldr	ip, [sp, #68]
        2acbd8:	e5b5e010 	ldr	lr, [r5, #16]!
        2acbdc:	e20ee0ff 	and	lr, lr, #255	; 0xff
        2acbe0:	e08cc00e 	add	ip, ip, lr
        2acbe4:	e5dcc088 	ldrb	ip, [ip, #136]
        2acbe8:	e59de038 	ldr	lr, [sp, #56]
        2acbec:	e04ee002 	sub	lr, lr, r2
        2acbf0:	e00cc00e 	and	ip, ip, lr
        2acbf4:	e26cc000 	rsb	ip, ip, #0	; 0x0
        2acbf8:	e0201093 	mla	r0, r3, r0, r1
        2acbfc:	e042100c 	sub	r1, r2, ip
        2acc00:	e59d2004 	ldr	r2, [sp, #4]
        2acc04:	e1a01251 	mov	r1, r1, asr r2
        2acc08:	e0800101 	add	r0, r0, r1, lsl #2
        2acc0c:	e58d001c 	str	r0, [sp, #28]
        2acc10:	e0100c99 	muls	r0, r9, ip
        2acc14:	e58d0024 	str	r0, [sp, #36]
        2acc18:	13a00000 	movne	r0, #0	; 0x0
        2acc1c:	03a00001 	moveq	r0, #1	; 0x1
        2acc20:	e20000ff 	and	r0, r0, #255	; 0xff
        2acc24:	e58d0010 	str	r0, [sp, #16]
        2acc28:	e59d0034 	ldr	r0, [sp, #52]
        2acc2c:	e0000097 	mul	r0, r7, r0
        2acc30:	e59dc040 	ldr	ip, [sp, #64]
        2acc34:	e080000c 	add	r0, r0, ip
        2acc38:	e59d1004 	ldr	r1, [sp, #4]
        2acc3c:	e59de038 	ldr	lr, [sp, #56]
        2acc40:	e1a0115e 	mov	r1, lr, asr r1
        2acc44:	e080c101 	add	ip, r0, r1, lsl #2
        2acc48:	e59d0000 	ldr	r0, [sp]
        2acc4c:	e00e0000 	and	r0, lr, r0
        2acc50:	e1a01009 	mov	r1, r9
        2acc54:	e0020091 	mul	r2, r1, r0
        2acc58:	e3e01000 	mvn	r1, #0	; 0x0
        2acc5c:	e1a0e231 	mov	lr, r1, lsr r2
        2acc60:	e59d203c 	ldr	r2, [sp, #60]
        2acc64:	e0800002 	add	r0, r0, r2
        2acc68:	e59d2000 	ldr	r2, [sp]
        2acc6c:	e0103002 	ands	r3, r0, r2
        2acc70:	03e04000 	mvneq	r4, #0	; 0x0
        2acc74:	0a000003 	beq	2acc88 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x2c0>
        2acc78:	e1a02009 	mov	r2, r9
        2acc7c:	e0030392 	mul	r3, r2, r3
        2acc80:	e2632020 	rsb	r2, r3, #32	; 0x20
        2acc84:	e1a04211 	mov	r4, r1, lsl r2
        2acc88:	e2400001 	sub	r0, r0, #1	; 0x1
        2acc8c:	e59d1004 	ldr	r1, [sp, #4]
        2acc90:	e1a00150 	mov	r0, r0, asr r1
        2acc94:	e2800001 	add	r0, r0, #1	; 0x1
        2acc98:	e1a01100 	mov	r1, r0, lsl #2
        2acc9c:	e59d2028 	ldr	r2, [sp, #40]
        2acca0:	e3520000 	cmp	r2, #0	; 0x0
        2acca4:	aa000009 	bge	2accd0 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x308>
        2acca8:	e1a0200e 	mov	r2, lr
        2accac:	e1a0e004 	mov	lr, r4
        2accb0:	e1a04002 	mov	r4, r2
        2accb4:	e2611000 	rsb	r1, r1, #0	; 0x0
        2accb8:	e08c2100 	add	r2, ip, r0, lsl #2
        2accbc:	e242c004 	sub	ip, r2, #4	; 0x4
        2accc0:	e59d201c 	ldr	r2, [sp, #28]
        2accc4:	e0822100 	add	r2, r2, r0, lsl #2
        2accc8:	e2422004 	sub	r2, r2, #4	; 0x4
        2acccc:	e58d201c 	str	r2, [sp, #28]
        2accd0:	e59d3030 	ldr	r3, [sp, #48]
        2accd4:	e0435001 	sub	r5, r3, r1
        2accd8:	e59d202c 	ldr	r2, [sp, #44]
        2accdc:	e0427001 	sub	r7, r2, r1
        2acce0:	e33a0000 	teq	sl, #0	; 0x0
        2acce4:	059d3018 	ldreq	r3, [sp, #24]
        2acce8:	03330000 	teqeq	r3, #0	; 0x0
        2accec:	13a01000 	movne	r1, #0	; 0x0
        2accf0:	03a01001 	moveq	r1, #1	; 0x1
        2accf4:	e20120ff 	and	r2, r1, #255	; 0xff
        2accf8:	e59d1028 	ldr	r1, [sp, #40]
        2accfc:	e3510000 	cmp	r1, #0	; 0x0
        2acd00:	d3a01000 	movle	r1, #0	; 0x0
        2acd04:	c3a01001 	movgt	r1, #1	; 0x1
        2acd08:	e20110ff 	and	r1, r1, #255	; 0xff
        2acd0c:	e3320000 	teq	r2, #0	; 0x0
        2acd10:	0a000002 	beq	2acd20 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x358>
        2acd14:	e3500001 	cmp	r0, #1	; 0x1
        2acd18:	c3a02001 	movgt	r2, #1	; 0x1
        2acd1c:	ca000000 	bgt	2acd24 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x35c>
        2acd20:	e3a02000 	mov	r2, #0	; 0x0
        2acd24:	e21230ff 	ands	r3, r2, #255	; 0xff
        2acd28:	0a000005 	beq	2acd44 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x37c>
        2acd2c:	e59d2010 	ldr	r2, [sp, #16]
        2acd30:	e3320000 	teq	r2, #0	; 0x0
        2acd34:	1a000002 	bne	2acd44 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x37c>
        2acd38:	e3310000 	teq	r1, #0	; 0x0
        2acd3c:	13a02001 	movne	r2, #1	; 0x1
        2acd40:	1a000000 	bne	2acd48 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x380>
        2acd44:	e3a02000 	mov	r2, #0	; 0x0
        2acd48:	e20220ff 	and	r2, r2, #255	; 0xff
        2acd4c:	e3330000 	teq	r3, #0	; 0x0
        2acd50:	159d3010 	ldrne	r3, [sp, #16]
        2acd54:	13330000 	teqne	r3, #0	; 0x0
        2acd58:	03a03000 	moveq	r3, #0	; 0x0
        2acd5c:	13a03001 	movne	r3, #1	; 0x1
        2acd60:	e31300ff 	tst	r3, #255	; 0xff
        2acd64:	0a000005 	beq	2acd80 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x3b8>
        2acd68:	e3310000 	teq	r1, #0	; 0x0
        2acd6c:	059f6004 	ldreq	r6, [pc, #4]	; 2acd78 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x3b0>
        2acd70:	159f6004 	ldrne	r6, [pc, #4]	; 2acd7c <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x3b4>
        2acd74:	ea00004b 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2acd78:	01b494ac 	moveqs	r9, ip, lsr #9
        2acd7c:	01b494b0 	ldreqh	r9, [r4, r0]!
        2acd80:	e3320000 	teq	r2, #0	; 0x0
        2acd84:	159f6050 	ldrne	r6, [pc, #50]	; 2acddc <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x414>
        2acd88:	1a000046 	bne	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2acd8c:	e59f204c 	ldr	r2, [pc, #4c]	; 2acde0 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x418>
        2acd90:	e59f104c 	ldr	r1, [pc, #4c]	; 2acde4 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x41c>
        2acd94:	e35a000b 	cmp	sl, #11	; 0xb
        2acd98:	908ff10a 	addls	pc, pc, sl, lsl #2
        2acd9c:	ea000041 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2acda0:	ea000010 	b	2acde8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x420>
        2acda4:	ea000012 	b	2acdf4 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x42c>
        2acda8:	ea00001d 	b	2ace24 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x45c>
        2acdac:	ea00001f 	b	2ace30 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x468>
        2acdb0:	ea00003c 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2acdb4:	ea00003b 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2acdb8:	ea00003a 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2acdbc:	ea000039 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2acdc0:	ea00001d 	b	2ace3c <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x474>
        2acdc4:	ea000022 	b	2ace54 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x48c>
        2acdc8:	ea000057 	b	2acf2c <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x564>
        2acdcc:	e3300001 	teq	r0, #1	; 0x1
        2acdd0:	1a000033 	bne	2acea4 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4dc>
        2acdd4:	e1a06002 	mov	r6, r2
        2acdd8:	ea000032 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2acddc:	01b494c0 	moveqs	r9, r0, asr #9
        2acde0:	01b494b8 	ldreqh	r9, [r4, r8]!
        2acde4:	01b494c8 	moveqs	r9, r8, asr #9
        2acde8:	e59f6000 	ldr	r6, [pc, #0]	; 2acdf0 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x428>
        2acdec:	ea00002d 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2acdf0:	01b494d4 	ldreqsb	r9, [r4, r4]!
        2acdf4:	e3390001 	teq	r9, #1	; 0x1
        2acdf8:	059f6018 	ldreq	r6, [pc, #18]	; 2ace18 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x450>
        2acdfc:	0a000029 	beq	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2ace00:	e3390002 	teq	r9, #2	; 0x2
        2ace04:	059f6010 	ldreq	r6, [pc, #10]	; 2ace1c <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x454>
        2ace08:	0a000026 	beq	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2ace0c:	e3390004 	teq	r9, #4	; 0x4
        2ace10:	059f6008 	ldreq	r6, [pc, #8]	; 2ace20 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x458>
        2ace14:	ea000023 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2ace18:	01b494d8 	ldreqsb	r9, [r4, r8]!
        2ace1c:	01b56b14 	moveqs	r6, r4, lsl fp
        2ace20:	01b56b18 	moveqs	r6, r8, lsl fp
        2ace24:	e59f6000 	ldr	r6, [pc, #0]	; 2ace2c <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x464>
        2ace28:	ea00001e 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2ace2c:	01b494dc 	ldreqsb	r9, [r4, ip]!
        2ace30:	e59f6000 	ldr	r6, [pc, #0]	; 2ace38 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x470>
        2ace34:	ea00001b 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2ace38:	01b494d0 	ldreqsb	r9, [r4, r0]!
        2ace3c:	e3300001 	teq	r0, #1	; 0x1
        2ace40:	159f6004 	ldrne	r6, [pc, #4]	; 2ace4c <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x484>
        2ace44:	059f6004 	ldreq	r6, [pc, #4]	; 2ace50 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x488>
        2ace48:	ea000016 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2ace4c:	01b494c4 	moveqs	r9, r4, asr #9
        2ace50:	01b494b4 	ldreqh	r9, [r4, r4]!
        2ace54:	e3390001 	teq	r9, #1	; 0x1
        2ace58:	0a00000f 	beq	2ace9c <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4d4>
        2ace5c:	e3390002 	teq	r9, #2	; 0x2
        2ace60:	0a000007 	beq	2ace84 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4bc>
        2ace64:	e3390004 	teq	r9, #4	; 0x4
        2ace68:	1a00000e 	bne	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2ace6c:	e3300001 	teq	r0, #1	; 0x1
        2ace70:	159f6004 	ldrne	r6, [pc, #4]	; 2ace7c <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4b4>
        2ace74:	059f6004 	ldreq	r6, [pc, #4]	; 2ace80 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4b8>
        2ace78:	ea00000a 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2ace7c:	01b56b28 	moveqs	r6, r8, lsr #22
        2ace80:	01b56b20 	moveqs	r6, r0, lsr #22
        2ace84:	e3300001 	teq	r0, #1	; 0x1
        2ace88:	159f6004 	ldrne	r6, [pc, #4]	; 2ace94 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4cc>
        2ace8c:	059f6004 	ldreq	r6, [pc, #4]	; 2ace98 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4d0>
        2ace90:	ea000004 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2ace94:	01b56b24 	moveqs	r6, r4, lsr #22
        2ace98:	01b56b1c 	moveqs	r6, ip, lsl fp
        2ace9c:	e3300001 	teq	r0, #1	; 0x1
        2acea0:	0affffcb 	beq	2acdd4 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x40c>
        2acea4:	e1a06001 	mov	r6, r1
        2acea8:	e59d1014 	ldr	r1, [sp, #20]
        2aceac:	e3310000 	teq	r1, #0	; 0x0
        2aceb0:	0a000009 	beq	2acedc <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x514>
        2aceb4:	e59d100c 	ldr	r1, [sp, #12]
        2aceb8:	e58d101c 	str	r1, [sp, #28]
        2acebc:	e33a0009 	teq	sl, #9	; 0x9
        2acec0:	e59d5020 	ldr	r5, [sp, #32]
        2acec4:	03e03000 	mvneq	r3, #0	; 0x0
        2acec8:	0a000002 	beq	2aced8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x510>
        2acecc:	e33a000a 	teq	sl, #10	; 0xa
        2aced0:	1a000001 	bne	2acedc <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x514>
        2aced4:	e3a03000 	mov	r3, #0	; 0x0
        2aced8:	e58d3018 	str	r3, [sp, #24]
        2acedc:	e28d2024 	add	r2, sp, #36	; 0x24
        2acee0:	e8920006 	ldmia	r2, {r1, r2}
        2acee4:	e59d3018 	ldr	r3, [sp, #24]
        2acee8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2aceec:	e1a03008 	mov	r3, r8
        2acef0:	e1a02004 	mov	r2, r4
        2acef4:	e1a0100e 	mov	r1, lr
        2acef8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2acefc:	e1a03007 	mov	r3, r7
        2acf00:	e1a02005 	mov	r2, r5
        2acf04:	e1a0100c 	mov	r1, ip
        2acf08:	e59d0038 	ldr	r0, [sp, #56]
        2acf0c:	e1a0e00f 	mov	lr, pc
        2acf10:	e1a0f006 	mov	pc, r6
        2acf14:	e28dd01c 	add	sp, sp, #28	; 0x1c
        2acf18:	e59d0014 	ldr	r0, [sp, #20]
        2acf1c:	e3300000 	teq	r0, #0	; 0x0
        2acf20:	159d000c 	ldrne	r0, [sp, #12]
        2acf24:	1b6279a7 	blne	1b4b5c8 <$QDDisposeTempPtr(char *)>
        2acf28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2acf2c:	e3300001 	teq	r0, #1	; 0x1
        2acf30:	159f6004 	ldrne	r6, [pc, #4]	; 2acf3c <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x574>
        2acf34:	059f6004 	ldreq	r6, [pc, #4]	; 2acf40 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x578>
        2acf38:	eaffffda 	b	2acea8 <BitBlt__FP8PixelMapT1P4RectT3lPP8PixelMap+0x4e0>
        2acf3c:	01b494cc 	moveqs	r9, ip, asr #9
        2acf40:	01b494bc 	ldreqh	r9, [r4, ip]!
    */
}

/**
 * Symbol: BBOptSrcCopy__FPUlT1lT3UlT5N53
 * Address: 002acf44
 */
void globals::BBOptSrcCopy() {
    /*
        2acf44:	e1a0c00d 	mov	ip, sp
        2acf48:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2acf4c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2acf50:	e24cb014 	sub	fp, ip, #20	; 0x14
        2acf54:	e59b5014 	ldr	r5, [fp, #20]
        2acf58:	e1e07005 	mvn	r7, r5
        2acf5c:	e28b9018 	add	r9, fp, #24	; 0x18
        2acf60:	e8990210 	ldmia	r9, {r4, r9}
        2acf64:	e1e06004 	mvn	r6, r4
        2acf68:	e59b2024 	ldr	r2, [fp, #36]
        2acf6c:	e59b8020 	ldr	r8, [fp, #32]
        2acf70:	e2488002 	sub	r8, r8, #2	; 0x2
        2acf74:	e282c020 	add	ip, r2, #32	; 0x20
        2acf78:	e2623000 	rsb	r3, r2, #0	; 0x0
        2acf7c:	e52d600c 	str	r6, [sp, -#12]!
        2acf80:	e59b200c 	ldr	r2, [fp, #12]
        2acf84:	e2822004 	add	r2, r2, #4	; 0x4
        2acf88:	e58b200c 	str	r2, [fp, #12]
        2acf8c:	e59b2010 	ldr	r2, [fp, #16]
        2acf90:	e2822004 	add	r2, r2, #4	; 0x4
        2acf94:	e58b2010 	str	r2, [fp, #16]
        2acf98:	e3a02001 	mov	r2, #1	; 0x1
        2acf9c:	e3a0e000 	mov	lr, #0	; 0x0
        2acfa0:	e58d2008 	str	r2, [sp, #8]
        2acfa4:	e1b02005 	movs	r2, r5
        2acfa8:	0a000002 	beq	2acfb8 <BBOptSrcCopy__FPUlT1lT3UlT5N53+0x74>
        2acfac:	e1b02082 	movs	r2, r2, lsl #1
        2acfb0:	e28ee001 	add	lr, lr, #1	; 0x1
        2acfb4:	1afffffc 	bne	2acfac <BBOptSrcCopy__FPUlT1lT3UlT5N53+0x68>
        2acfb8:	e15e000c 	cmp	lr, ip
        2acfbc:	c3a02000 	movgt	r2, #0	; 0x0
        2acfc0:	c58d2008 	strgt	r2, [sp, #8]
        2acfc4:	e3a0e001 	mov	lr, #1	; 0x1
        2acfc8:	e3a02000 	mov	r2, #0	; 0x0
        2acfcc:	e58de004 	str	lr, [sp, #4]
        2acfd0:	e1b0e004 	movs	lr, r4
        2acfd4:	0a000002 	beq	2acfe4 <BBOptSrcCopy__FPUlT1lT3UlT5N53+0xa0>
        2acfd8:	e1b0e08e 	movs	lr, lr, lsl #1
        2acfdc:	e2822001 	add	r2, r2, #1	; 0x1
        2acfe0:	1afffffc 	bne	2acfd8 <BBOptSrcCopy__FPUlT1lT3UlT5N53+0x94>
        2acfe4:	e1520003 	cmp	r2, r3
        2acfe8:	c3a0e000 	movgt	lr, #0	; 0x0
        2acfec:	c58de004 	strgt	lr, [sp, #4]
        2acff0:	e59d2008 	ldr	r2, [sp, #8]
        2acff4:	e3320000 	teq	r2, #0	; 0x0
        2acff8:	14902004 	ldrne	r2, [r0], #4
        2acffc:	11a0e332 	movne	lr, r2, lsr r3
        2ad000:	1a000003 	bne	2ad014 <BBOptSrcCopy__FPUlT1lT3UlT5N53+0xd0>
        2ad004:	e510e004 	ldr	lr, [r0, -#4]
        2ad008:	e4902004 	ldr	r2, [r0], #4
        2ad00c:	e1a0ec1e 	mov	lr, lr, lsl ip
        2ad010:	e18ee332 	orr	lr, lr, r2, lsr r3
        2ad014:	e00e6005 	and	r6, lr, r5
        2ad018:	e591e000 	ldr	lr, [r1]
        2ad01c:	e00ee007 	and	lr, lr, r7
        2ad020:	e186e00e 	orr	lr, r6, lr
        2ad024:	e481e004 	str	lr, [r1], #4
        2ad028:	e1a0e008 	mov	lr, r8
        2ad02c:	e3580004 	cmp	r8, #4	; 0x4
        2ad030:	ba000012 	blt	2ad080 <BBOptSrcCopy__FPUlT1lT3UlT5N53+0x13c>
        2ad034:	e1a02c12 	mov	r2, r2, lsl ip
        2ad038:	e4906004 	ldr	r6, [r0], #4
        2ad03c:	e1822336 	orr	r2, r2, r6, lsr r3
        2ad040:	e4812004 	str	r2, [r1], #4
        2ad044:	e1a06c16 	mov	r6, r6, lsl ip
        2ad048:	e4902004 	ldr	r2, [r0], #4
        2ad04c:	e1866332 	orr	r6, r6, r2, lsr r3
        2ad050:	e4816004 	str	r6, [r1], #4
        2ad054:	e1a02c12 	mov	r2, r2, lsl ip
        2ad058:	e4906004 	ldr	r6, [r0], #4
        2ad05c:	e1822336 	orr	r2, r2, r6, lsr r3
        2ad060:	e4812004 	str	r2, [r1], #4
        2ad064:	e1a06c16 	mov	r6, r6, lsl ip
        2ad068:	e4902004 	ldr	r2, [r0], #4
        2ad06c:	e1866332 	orr	r6, r6, r2, lsr r3
        2ad070:	e24ee004 	sub	lr, lr, #4	; 0x4
        2ad074:	e35e0004 	cmp	lr, #4	; 0x4
        2ad078:	e4816004 	str	r6, [r1], #4
        2ad07c:	aaffffec 	bge	2ad034 <BBOptSrcCopy__FPUlT1lT3UlT5N53+0xf0>
        2ad080:	e33e0001 	teq	lr, #1	; 0x1
        2ad084:	0a00000d 	beq	2ad0c0 <BBOptSrcCopy__FPUlT1lT3UlT5N53+0x17c>
        2ad088:	e33e0002 	teq	lr, #2	; 0x2
        2ad08c:	0a000006 	beq	2ad0ac <BBOptSrcCopy__FPUlT1lT3UlT5N53+0x168>
        2ad090:	e33e0003 	teq	lr, #3	; 0x3
        2ad094:	1a00000e 	bne	2ad0d4 <BBOptSrcCopy__FPUlT1lT3UlT5N53+0x190>
        2ad098:	e1a0e002 	mov	lr, r2
        2ad09c:	e1a0ec1e 	mov	lr, lr, lsl ip
        2ad0a0:	e4902004 	ldr	r2, [r0], #4
        2ad0a4:	e18ee332 	orr	lr, lr, r2, lsr r3
        2ad0a8:	e481e004 	str	lr, [r1], #4
        2ad0ac:	e1a0e002 	mov	lr, r2
        2ad0b0:	e1a0ec1e 	mov	lr, lr, lsl ip
        2ad0b4:	e4902004 	ldr	r2, [r0], #4
        2ad0b8:	e18ee332 	orr	lr, lr, r2, lsr r3
        2ad0bc:	e481e004 	str	lr, [r1], #4
        2ad0c0:	e1a0e002 	mov	lr, r2
        2ad0c4:	e1a0ec1e 	mov	lr, lr, lsl ip
        2ad0c8:	e4902004 	ldr	r2, [r0], #4
        2ad0cc:	e18ee332 	orr	lr, lr, r2, lsr r3
        2ad0d0:	e481e004 	str	lr, [r1], #4
        2ad0d4:	e59de004 	ldr	lr, [sp, #4]
        2ad0d8:	e33e0000 	teq	lr, #0	; 0x0
        2ad0dc:	11a02c12 	movne	r2, r2, lsl ip
        2ad0e0:	1a000002 	bne	2ad0f0 <BBOptSrcCopy__FPUlT1lT3UlT5N53+0x1ac>
        2ad0e4:	e1a02c12 	mov	r2, r2, lsl ip
        2ad0e8:	e590e000 	ldr	lr, [r0]
        2ad0ec:	e182233e 	orr	r2, r2, lr, lsr r3
        2ad0f0:	e002e004 	and	lr, r2, r4
        2ad0f4:	e5912000 	ldr	r2, [r1]
        2ad0f8:	e59d6000 	ldr	r6, [sp]
        2ad0fc:	e0022006 	and	r2, r2, r6
        2ad100:	e18e2002 	orr	r2, lr, r2
        2ad104:	e5812000 	str	r2, [r1]
        2ad108:	e59b200c 	ldr	r2, [fp, #12]
        2ad10c:	e0800002 	add	r0, r0, r2
        2ad110:	e59b2010 	ldr	r2, [fp, #16]
        2ad114:	e0811002 	add	r1, r1, r2
        2ad118:	e2499001 	sub	r9, r9, #1	; 0x1
        2ad11c:	e3590000 	cmp	r9, #0	; 0x0
        2ad120:	caffffb2 	bgt	2acff0 <BBOptSrcCopy__FPUlT1lT3UlT5N53+0xac>
        2ad124:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BBSrcCopy__FPUlT1lT3UlT5N53
 * Address: 002ad128
 */
void globals::BBSrcCopy() {
    /*
        2ad128:	e1a0c00d 	mov	ip, sp
        2ad12c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ad130:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ad134:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ad138:	e28b7020 	add	r7, fp, #32	; 0x20
        2ad13c:	e89700ac 	ldmia	r7, {r2, r3, r5, r7}
        2ad140:	e283e020 	add	lr, r3, #32	; 0x20
        2ad144:	e263c000 	rsb	ip, r3, #0	; 0x0
        2ad148:	e2423001 	sub	r3, r2, #1	; 0x1
        2ad14c:	e59b601c 	ldr	r6, [fp, #28]
        2ad150:	e59b8018 	ldr	r8, [fp, #24]
        2ad154:	e59b9014 	ldr	r9, [fp, #20]
        2ad158:	e52d3004 	str	r3, [sp, -#4]!
        2ad15c:	e1a02009 	mov	r2, r9
        2ad160:	e59d3000 	ldr	r3, [sp]
        2ad164:	e3530000 	cmp	r3, #0	; 0x0
        2ad168:	ba00000e 	blt	2ad1a8 <BBSrcCopy__FPUlT1lT3UlT5N53+0x80>
        2ad16c:	e3330000 	teq	r3, #0	; 0x0
        2ad170:	00022008 	andeq	r2, r2, r8
        2ad174:	e5104004 	ldr	r4, [r0, -#4]
        2ad178:	e690a005 	ldr	sl, [r0], r5
        2ad17c:	e1a0ac3a 	mov	sl, sl, lsr ip
        2ad180:	e18a4e14 	orr	r4, sl, r4, lsl lr
        2ad184:	e0244007 	eor	r4, r4, r7
        2ad188:	e004a002 	and	sl, r4, r2
        2ad18c:	e5914000 	ldr	r4, [r1]
        2ad190:	e1c42002 	bic	r2, r4, r2
        2ad194:	e18a2002 	orr	r2, sl, r2
        2ad198:	e6812005 	str	r2, [r1], r5
        2ad19c:	e3e02000 	mvn	r2, #0	; 0x0
        2ad1a0:	e0933002 	adds	r3, r3, r2
        2ad1a4:	5afffff0 	bpl	2ad16c <BBSrcCopy__FPUlT1lT3UlT5N53+0x44>
        2ad1a8:	e59b200c 	ldr	r2, [fp, #12]
        2ad1ac:	e0800002 	add	r0, r0, r2
        2ad1b0:	e59b3010 	ldr	r3, [fp, #16]
        2ad1b4:	e0811003 	add	r1, r1, r3
        2ad1b8:	e2466001 	sub	r6, r6, #1	; 0x1
        2ad1bc:	e3560000 	cmp	r6, #0	; 0x0
        2ad1c0:	caffffe5 	bgt	2ad15c <BBSrcCopy__FPUlT1lT3UlT5N53+0x34>
        2ad1c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BBSrcOr__FPUlT1lT3UlT5N53
 * Address: 002ad1c8
 */
void globals::BBSrcOr() {
    /*
        2ad1c8:	e1a0c00d 	mov	ip, sp
        2ad1cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ad1d0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ad1d4:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ad1d8:	e28b7020 	add	r7, fp, #32	; 0x20
        2ad1dc:	e897009c 	ldmia	r7, {r2, r3, r4, r7}
        2ad1e0:	e283e020 	add	lr, r3, #32	; 0x20
        2ad1e4:	e263c000 	rsb	ip, r3, #0	; 0x0
        2ad1e8:	e2423001 	sub	r3, r2, #1	; 0x1
        2ad1ec:	e59b601c 	ldr	r6, [fp, #28]
        2ad1f0:	e59b8018 	ldr	r8, [fp, #24]
        2ad1f4:	e59b9014 	ldr	r9, [fp, #20]
        2ad1f8:	e52d3004 	str	r3, [sp, -#4]!
        2ad1fc:	e1a02009 	mov	r2, r9
        2ad200:	e59d3000 	ldr	r3, [sp]
        2ad204:	e3530000 	cmp	r3, #0	; 0x0
        2ad208:	ba00000d 	blt	2ad244 <BBSrcOr__FPUlT1lT3UlT5N53+0x7c>
        2ad20c:	e3330000 	teq	r3, #0	; 0x0
        2ad210:	00022008 	andeq	r2, r2, r8
        2ad214:	e5105004 	ldr	r5, [r0, -#4]
        2ad218:	e690a004 	ldr	sl, [r0], r4
        2ad21c:	e1a0ac3a 	mov	sl, sl, lsr ip
        2ad220:	e18a5e15 	orr	r5, sl, r5, lsl lr
        2ad224:	e0255007 	eor	r5, r5, r7
        2ad228:	e0052002 	and	r2, r5, r2
        2ad22c:	e5915000 	ldr	r5, [r1]
        2ad230:	e1822005 	orr	r2, r2, r5
        2ad234:	e6812004 	str	r2, [r1], r4
        2ad238:	e3e02000 	mvn	r2, #0	; 0x0
        2ad23c:	e0933002 	adds	r3, r3, r2
        2ad240:	5afffff1 	bpl	2ad20c <BBSrcOr__FPUlT1lT3UlT5N53+0x44>
        2ad244:	e59b200c 	ldr	r2, [fp, #12]
        2ad248:	e0800002 	add	r0, r0, r2
        2ad24c:	e59b3010 	ldr	r3, [fp, #16]
        2ad250:	e0811003 	add	r1, r1, r3
        2ad254:	e2466001 	sub	r6, r6, #1	; 0x1
        2ad258:	e3560000 	cmp	r6, #0	; 0x0
        2ad25c:	caffffe6 	bgt	2ad1fc <BBSrcOr__FPUlT1lT3UlT5N53+0x34>
        2ad260:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BBSrcOr2__FPUlT1lT3UlT5N53
 * Address: 002ad264
 */
void globals::BBSrcOr2() {
    /*
        2ad264:	e1a0c00d 	mov	ip, sp
        2ad268:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ad26c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ad270:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ad274:	e28b7020 	add	r7, fp, #32	; 0x20
        2ad278:	e89700ac 	ldmia	r7, {r2, r3, r5, r7}
        2ad27c:	e2834020 	add	r4, r3, #32	; 0x20
        2ad280:	e263e000 	rsb	lr, r3, #0	; 0x0
        2ad284:	e2423001 	sub	r3, r2, #1	; 0x1
        2ad288:	e59b601c 	ldr	r6, [fp, #28]
        2ad28c:	e59b8018 	ldr	r8, [fp, #24]
        2ad290:	e52d3004 	str	r3, [sp, -#4]!
        2ad294:	e59b2014 	ldr	r2, [fp, #20]
        2ad298:	e59d3000 	ldr	r3, [sp]
        2ad29c:	e3530000 	cmp	r3, #0	; 0x0
        2ad2a0:	ba000018 	blt	2ad308 <BBSrcOr2__FPUlT1lT3UlT5N53+0xa4>
        2ad2a4:	e3330000 	teq	r3, #0	; 0x0
        2ad2a8:	00022008 	andeq	r2, r2, r8
        2ad2ac:	e5909000 	ldr	r9, [r0]
        2ad2b0:	e1a09e39 	mov	r9, r9, lsr lr
        2ad2b4:	e510c004 	ldr	ip, [r0, -#4]
        2ad2b8:	e189c41c 	orr	ip, r9, ip, lsl r4
        2ad2bc:	e00c2002 	and	r2, ip, r2
        2ad2c0:	e032c007 	eors	ip, r2, r7
        2ad2c4:	0a000007 	beq	2ad2e8 <BBSrcOr2__FPUlT1lT3UlT5N53+0x84>
        2ad2c8:	e3a02103 	mov	r2, #-1073741824	; 0xc0000000
        2ad2cc:	e11c0002 	tst	ip, r2
        2ad2d0:	0a000002 	beq	2ad2e0 <BBSrcOr2__FPUlT1lT3UlT5N53+0x7c>
        2ad2d4:	e5919000 	ldr	r9, [r1]
        2ad2d8:	e1c99002 	bic	r9, r9, r2
        2ad2dc:	e5819000 	str	r9, [r1]
        2ad2e0:	e1b02122 	movs	r2, r2, lsr #2
        2ad2e4:	1afffff8 	bne	2ad2cc <BBSrcOr2__FPUlT1lT3UlT5N53+0x68>
        2ad2e8:	e5912000 	ldr	r2, [r1]
        2ad2ec:	e182200c 	orr	r2, r2, ip
        2ad2f0:	e0800005 	add	r0, r0, r5
        2ad2f4:	e5812000 	str	r2, [r1]
        2ad2f8:	e0811005 	add	r1, r1, r5
        2ad2fc:	e3e02000 	mvn	r2, #0	; 0x0
        2ad300:	e0933002 	adds	r3, r3, r2
        2ad304:	5affffe6 	bpl	2ad2a4 <BBSrcOr2__FPUlT1lT3UlT5N53+0x40>
        2ad308:	e59b200c 	ldr	r2, [fp, #12]
        2ad30c:	e0800002 	add	r0, r0, r2
        2ad310:	e59b3010 	ldr	r3, [fp, #16]
        2ad314:	e0811003 	add	r1, r1, r3
        2ad318:	e2466001 	sub	r6, r6, #1	; 0x1
        2ad31c:	e3560000 	cmp	r6, #0	; 0x0
        2ad320:	caffffdb 	bgt	2ad294 <BBSrcOr2__FPUlT1lT3UlT5N53+0x30>
        2ad324:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BBSrcOr4__FPUlT1lT3UlT5N53
 * Address: 002ad328
 */
void globals::BBSrcOr4() {
    /*
        2ad328:	e1a0c00d 	mov	ip, sp
        2ad32c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ad330:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ad334:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ad338:	e28b7020 	add	r7, fp, #32	; 0x20
        2ad33c:	e89700ac 	ldmia	r7, {r2, r3, r5, r7}
        2ad340:	e2834020 	add	r4, r3, #32	; 0x20
        2ad344:	e263e000 	rsb	lr, r3, #0	; 0x0
        2ad348:	e2423001 	sub	r3, r2, #1	; 0x1
        2ad34c:	e59b601c 	ldr	r6, [fp, #28]
        2ad350:	e59b8018 	ldr	r8, [fp, #24]
        2ad354:	e52d3004 	str	r3, [sp, -#4]!
        2ad358:	e59b2014 	ldr	r2, [fp, #20]
        2ad35c:	e59d3000 	ldr	r3, [sp]
        2ad360:	e3530000 	cmp	r3, #0	; 0x0
        2ad364:	ba000018 	blt	2ad3cc <BBSrcOr4__FPUlT1lT3UlT5N53+0xa4>
        2ad368:	e3330000 	teq	r3, #0	; 0x0
        2ad36c:	00022008 	andeq	r2, r2, r8
        2ad370:	e5909000 	ldr	r9, [r0]
        2ad374:	e1a09e39 	mov	r9, r9, lsr lr
        2ad378:	e510c004 	ldr	ip, [r0, -#4]
        2ad37c:	e189c41c 	orr	ip, r9, ip, lsl r4
        2ad380:	e00c2002 	and	r2, ip, r2
        2ad384:	e032c007 	eors	ip, r2, r7
        2ad388:	0a000007 	beq	2ad3ac <BBSrcOr4__FPUlT1lT3UlT5N53+0x84>
        2ad38c:	e3a0220f 	mov	r2, #-268435456	; 0xf0000000
        2ad390:	e11c0002 	tst	ip, r2
        2ad394:	0a000002 	beq	2ad3a4 <BBSrcOr4__FPUlT1lT3UlT5N53+0x7c>
        2ad398:	e5919000 	ldr	r9, [r1]
        2ad39c:	e1c99002 	bic	r9, r9, r2
        2ad3a0:	e5819000 	str	r9, [r1]
        2ad3a4:	e1b02222 	movs	r2, r2, lsr #4
        2ad3a8:	1afffff8 	bne	2ad390 <BBSrcOr4__FPUlT1lT3UlT5N53+0x68>
        2ad3ac:	e5912000 	ldr	r2, [r1]
        2ad3b0:	e182200c 	orr	r2, r2, ip
        2ad3b4:	e0800005 	add	r0, r0, r5
        2ad3b8:	e5812000 	str	r2, [r1]
        2ad3bc:	e0811005 	add	r1, r1, r5
        2ad3c0:	e3e02000 	mvn	r2, #0	; 0x0
        2ad3c4:	e0933002 	adds	r3, r3, r2
        2ad3c8:	5affffe6 	bpl	2ad368 <BBSrcOr4__FPUlT1lT3UlT5N53+0x40>
        2ad3cc:	e59b200c 	ldr	r2, [fp, #12]
        2ad3d0:	e0800002 	add	r0, r0, r2
        2ad3d4:	e59b3010 	ldr	r3, [fp, #16]
        2ad3d8:	e0811003 	add	r1, r1, r3
        2ad3dc:	e2466001 	sub	r6, r6, #1	; 0x1
        2ad3e0:	e3560000 	cmp	r6, #0	; 0x0
        2ad3e4:	caffffdb 	bgt	2ad358 <BBSrcOr4__FPUlT1lT3UlT5N53+0x30>
        2ad3e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BBSrcXor__FPUlT1lT3UlT5N53
 * Address: 002ad3ec
 */
void globals::BBSrcXor() {
    /*
        2ad3ec:	e1a0c00d 	mov	ip, sp
        2ad3f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ad3f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ad3f8:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ad3fc:	e28b7020 	add	r7, fp, #32	; 0x20
        2ad400:	e897009c 	ldmia	r7, {r2, r3, r4, r7}
        2ad404:	e283e020 	add	lr, r3, #32	; 0x20
        2ad408:	e263c000 	rsb	ip, r3, #0	; 0x0
        2ad40c:	e2423001 	sub	r3, r2, #1	; 0x1
        2ad410:	e59b601c 	ldr	r6, [fp, #28]
        2ad414:	e59b8018 	ldr	r8, [fp, #24]
        2ad418:	e59b9014 	ldr	r9, [fp, #20]
        2ad41c:	e52d3004 	str	r3, [sp, -#4]!
        2ad420:	e1a02009 	mov	r2, r9
        2ad424:	e59d3000 	ldr	r3, [sp]
        2ad428:	e3530000 	cmp	r3, #0	; 0x0
        2ad42c:	ba00000d 	blt	2ad468 <BBSrcXor__FPUlT1lT3UlT5N53+0x7c>
        2ad430:	e3330000 	teq	r3, #0	; 0x0
        2ad434:	00022008 	andeq	r2, r2, r8
        2ad438:	e5105004 	ldr	r5, [r0, -#4]
        2ad43c:	e690a004 	ldr	sl, [r0], r4
        2ad440:	e1a0ac3a 	mov	sl, sl, lsr ip
        2ad444:	e18a5e15 	orr	r5, sl, r5, lsl lr
        2ad448:	e0255007 	eor	r5, r5, r7
        2ad44c:	e0052002 	and	r2, r5, r2
        2ad450:	e5915000 	ldr	r5, [r1]
        2ad454:	e0222005 	eor	r2, r2, r5
        2ad458:	e6812004 	str	r2, [r1], r4
        2ad45c:	e3e02000 	mvn	r2, #0	; 0x0
        2ad460:	e0933002 	adds	r3, r3, r2
        2ad464:	5afffff1 	bpl	2ad430 <BBSrcXor__FPUlT1lT3UlT5N53+0x44>
        2ad468:	e59b200c 	ldr	r2, [fp, #12]
        2ad46c:	e0800002 	add	r0, r0, r2
        2ad470:	e59b3010 	ldr	r3, [fp, #16]
        2ad474:	e0811003 	add	r1, r1, r3
        2ad478:	e2466001 	sub	r6, r6, #1	; 0x1
        2ad47c:	e3560000 	cmp	r6, #0	; 0x0
        2ad480:	caffffe6 	bgt	2ad420 <BBSrcXor__FPUlT1lT3UlT5N53+0x34>
        2ad484:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BBSrcBic__FPUlT1lT3UlT5N53
 * Address: 002ad488
 */
void globals::BBSrcBic() {
    /*
        2ad488:	e1a0c00d 	mov	ip, sp
        2ad48c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ad490:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ad494:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ad498:	e28b7020 	add	r7, fp, #32	; 0x20
        2ad49c:	e89700ac 	ldmia	r7, {r2, r3, r5, r7}
        2ad4a0:	e283e020 	add	lr, r3, #32	; 0x20
        2ad4a4:	e263c000 	rsb	ip, r3, #0	; 0x0
        2ad4a8:	e2423001 	sub	r3, r2, #1	; 0x1
        2ad4ac:	e59b601c 	ldr	r6, [fp, #28]
        2ad4b0:	e59b8018 	ldr	r8, [fp, #24]
        2ad4b4:	e59b9014 	ldr	r9, [fp, #20]
        2ad4b8:	e52d3004 	str	r3, [sp, -#4]!
        2ad4bc:	e1a02009 	mov	r2, r9
        2ad4c0:	e59d3000 	ldr	r3, [sp]
        2ad4c4:	e3530000 	cmp	r3, #0	; 0x0
        2ad4c8:	ba00000d 	blt	2ad504 <BBSrcBic__FPUlT1lT3UlT5N53+0x7c>
        2ad4cc:	e3330000 	teq	r3, #0	; 0x0
        2ad4d0:	00022008 	andeq	r2, r2, r8
        2ad4d4:	e5104004 	ldr	r4, [r0, -#4]
        2ad4d8:	e690a005 	ldr	sl, [r0], r5
        2ad4dc:	e1a0ac3a 	mov	sl, sl, lsr ip
        2ad4e0:	e18a4e14 	orr	r4, sl, r4, lsl lr
        2ad4e4:	e0244007 	eor	r4, r4, r7
        2ad4e8:	e0042002 	and	r2, r4, r2
        2ad4ec:	e5914000 	ldr	r4, [r1]
        2ad4f0:	e1c42002 	bic	r2, r4, r2
        2ad4f4:	e6812005 	str	r2, [r1], r5
        2ad4f8:	e3e02000 	mvn	r2, #0	; 0x0
        2ad4fc:	e0933002 	adds	r3, r3, r2
        2ad500:	5afffff1 	bpl	2ad4cc <BBSrcBic__FPUlT1lT3UlT5N53+0x44>
        2ad504:	e59b200c 	ldr	r2, [fp, #12]
        2ad508:	e0800002 	add	r0, r0, r2
        2ad50c:	e59b3010 	ldr	r3, [fp, #16]
        2ad510:	e0811003 	add	r1, r1, r3
        2ad514:	e2466001 	sub	r6, r6, #1	; 0x1
        2ad518:	e3560000 	cmp	r6, #0	; 0x0
        2ad51c:	caffffe6 	bgt	2ad4bc <BBSrcBic__FPUlT1lT3UlT5N53+0x34>
        2ad520:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BBFastPatCopy__FPUlT1lT3UlT5N53
 * Address: 002ad524
 */
void globals::BBFastPatCopy() {
    /*
        2ad524:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2ad528:	e28dc018 	add	ip, sp, #24	; 0x18
        2ad52c:	e89c1010 	ldmia	ip, {r4, ip}
        2ad530:	e59d6014 	ldr	r6, [sp, #20]
        2ad534:	e0066004 	and	r6, r6, r4
        2ad538:	e1e04006 	mvn	r4, r6
        2ad53c:	e59de028 	ldr	lr, [sp, #40]
        2ad540:	e083300e 	add	r3, r3, lr
        2ad544:	e3a0e001 	mov	lr, #1	; 0x1
        2ad548:	e5905000 	ldr	r5, [r0]
        2ad54c:	e790710e 	ldr	r7, [r0, lr, lsl #2]
        2ad550:	e1370005 	teq	r7, r5
        2ad554:	1a000002 	bne	2ad564 <BBFastPatCopy__FPUlT1lT3UlT5N53+0x40>
        2ad558:	e28ee001 	add	lr, lr, #1	; 0x1
        2ad55c:	e35e0010 	cmp	lr, #16	; 0x10
        2ad560:	bafffff9 	blt	2ad54c <BBFastPatCopy__FPUlT1lT3UlT5N53+0x28>
        2ad564:	e33e0010 	teq	lr, #16	; 0x10
        2ad568:	1a00000f 	bne	2ad5ac <BBFastPatCopy__FPUlT1lT3UlT5N53+0x88>
        2ad56c:	e3340000 	teq	r4, #0	; 0x0
        2ad570:	1a000004 	bne	2ad588 <BBFastPatCopy__FPUlT1lT3UlT5N53+0x64>
        2ad574:	e6815003 	str	r5, [r1], r3
        2ad578:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ad57c:	e35c0000 	cmp	ip, #0	; 0x0
        2ad580:	cafffffb 	bgt	2ad574 <BBFastPatCopy__FPUlT1lT3UlT5N53+0x50>
        2ad584:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        2ad588:	e0050006 	and	r0, r5, r6
        2ad58c:	e5912000 	ldr	r2, [r1]
        2ad590:	e0022004 	and	r2, r2, r4
        2ad594:	e1822000 	orr	r2, r2, r0
        2ad598:	e6812003 	str	r2, [r1], r3
        2ad59c:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ad5a0:	e35c0000 	cmp	ip, #0	; 0x0
        2ad5a4:	cafffff8 	bgt	2ad58c <BBFastPatCopy__FPUlT1lT3UlT5N53+0x68>
        2ad5a8:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        2ad5ac:	e3340000 	teq	r4, #0	; 0x0
        2ad5b0:	1a000007 	bne	2ad5d4 <BBFastPatCopy__FPUlT1lT3UlT5N53+0xb0>
        2ad5b4:	e790e102 	ldr	lr, [r0, r2, lsl #2]
        2ad5b8:	e681e003 	str	lr, [r1], r3
        2ad5bc:	e2822001 	add	r2, r2, #1	; 0x1
        2ad5c0:	e202200f 	and	r2, r2, #15	; 0xf
        2ad5c4:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ad5c8:	e35c0000 	cmp	ip, #0	; 0x0
        2ad5cc:	cafffff8 	bgt	2ad5b4 <BBFastPatCopy__FPUlT1lT3UlT5N53+0x90>
        2ad5d0:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        2ad5d4:	e790e102 	ldr	lr, [r0, r2, lsl #2]
        2ad5d8:	e00e5006 	and	r5, lr, r6
        2ad5dc:	e591e000 	ldr	lr, [r1]
        2ad5e0:	e00ee004 	and	lr, lr, r4
        2ad5e4:	e185e00e 	orr	lr, r5, lr
        2ad5e8:	e681e003 	str	lr, [r1], r3
        2ad5ec:	e2822001 	add	r2, r2, #1	; 0x1
        2ad5f0:	e202200f 	and	r2, r2, #15	; 0xf
        2ad5f4:	e24cc001 	sub	ip, ip, #1	; 0x1
        2ad5f8:	e35c0000 	cmp	ip, #0	; 0x0
        2ad5fc:	cafffff4 	bgt	2ad5d4 <BBFastPatCopy__FPUlT1lT3UlT5N53+0xb0>
        2ad600:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: BlitModeOr__FPlN21lN24
 * Address: 002ad968
 */
void globals::BlitModeOr() {
    /*
        2ad968:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2ad96c:	e3a0c000 	mov	ip, #0	; 0x0
        2ad970:	e28d7014 	add	r7, sp, #20	; 0x14
        2ad974:	e89700c0 	ldmia	r7, {r6, r7}
        2ad978:	e266e020 	rsb	lr, r6, #32	; 0x20
        2ad97c:	e3530000 	cmp	r3, #0	; 0x0
        2ad980:	b8bd80f0 	ldmltia	sp!, {r4, r5, r6, r7, pc}
        2ad984:	e4914004 	ldr	r4, [r1], #4
        2ad988:	e1a05634 	mov	r5, r4, lsr r6
        2ad98c:	e085ce1c 	add	ip, r5, ip, lsl lr
        2ad990:	e02c5007 	eor	r5, ip, r7
        2ad994:	e1a0c004 	mov	ip, r4
        2ad998:	e4904004 	ldr	r4, [r0], #4
        2ad99c:	e0044005 	and	r4, r4, r5
        2ad9a0:	e5925000 	ldr	r5, [r2]
        2ad9a4:	e1844005 	orr	r4, r4, r5
        2ad9a8:	e2533001 	subs	r3, r3, #1	; 0x1
        2ad9ac:	e4824004 	str	r4, [r2], #4
        2ad9b0:	5afffff3 	bpl	2ad984 <BlitModeOr__FPlN21lN24+0x1c>
        2ad9b4:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: BlitModeXor__FPlN21lN24
 * Address: 002ad9b8
 */
void globals::BlitModeXor() {
    /*
        2ad9b8:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2ad9bc:	e3a0c000 	mov	ip, #0	; 0x0
        2ad9c0:	e28d7014 	add	r7, sp, #20	; 0x14
        2ad9c4:	e89700c0 	ldmia	r7, {r6, r7}
        2ad9c8:	e266e020 	rsb	lr, r6, #32	; 0x20
        2ad9cc:	e3530000 	cmp	r3, #0	; 0x0
        2ad9d0:	b8bd80f0 	ldmltia	sp!, {r4, r5, r6, r7, pc}
        2ad9d4:	e4914004 	ldr	r4, [r1], #4
        2ad9d8:	e1a05634 	mov	r5, r4, lsr r6
        2ad9dc:	e085ce1c 	add	ip, r5, ip, lsl lr
        2ad9e0:	e02c5007 	eor	r5, ip, r7
        2ad9e4:	e1a0c004 	mov	ip, r4
        2ad9e8:	e4904004 	ldr	r4, [r0], #4
        2ad9ec:	e0044005 	and	r4, r4, r5
        2ad9f0:	e5925000 	ldr	r5, [r2]
        2ad9f4:	e0244005 	eor	r4, r4, r5
        2ad9f8:	e2533001 	subs	r3, r3, #1	; 0x1
        2ad9fc:	e4824004 	str	r4, [r2], #4
        2ada00:	5afffff3 	bpl	2ad9d4 <BlitModeXor__FPlN21lN24+0x1c>
        2ada04:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: BlitModeBic__FPlN21lN24
 * Address: 002ada08
 */
void globals::BlitModeBic() {
    /*
        2ada08:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        2ada0c:	e3a0c000 	mov	ip, #0	; 0x0
        2ada10:	e28d7014 	add	r7, sp, #20	; 0x14
        2ada14:	e89700c0 	ldmia	r7, {r6, r7}
        2ada18:	e266e020 	rsb	lr, r6, #32	; 0x20
        2ada1c:	e3530000 	cmp	r3, #0	; 0x0
        2ada20:	b8bd80f0 	ldmltia	sp!, {r4, r5, r6, r7, pc}
        2ada24:	e4914004 	ldr	r4, [r1], #4
        2ada28:	e1a05634 	mov	r5, r4, lsr r6
        2ada2c:	e085ce1c 	add	ip, r5, ip, lsl lr
        2ada30:	e02c5007 	eor	r5, ip, r7
        2ada34:	e1a0c004 	mov	ip, r4
        2ada38:	e4904004 	ldr	r4, [r0], #4
        2ada3c:	e0044005 	and	r4, r4, r5
        2ada40:	e1e05004 	mvn	r5, r4
        2ada44:	e5924000 	ldr	r4, [r2]
        2ada48:	e0054004 	and	r4, r5, r4
        2ada4c:	e2533001 	subs	r3, r3, #1	; 0x1
        2ada50:	e4824004 	str	r4, [r2], #4
        2ada54:	5afffff2 	bpl	2ada24 <BlitModeBic__FPlN21lN24+0x1c>
        2ada58:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: BlitModeCopy__FPlN21lN24
 * Address: 002aed90
 */
void globals::BlitModeCopy() {
    /*
        2aed90:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        2aed94:	e3a0c000 	mov	ip, #0	; 0x0
        2aed98:	e28d6018 	add	r6, sp, #24	; 0x18
        2aed9c:	e8960060 	ldmia	r6, {r5, r6}
        2aeda0:	e265e020 	rsb	lr, r5, #32	; 0x20
        2aeda4:	e3530000 	cmp	r3, #0	; 0x0
        2aeda8:	b8bd81f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, pc}
        2aedac:	e4917004 	ldr	r7, [r1], #4
        2aedb0:	e1a04537 	mov	r4, r7, lsr r5
        2aedb4:	e084ce1c 	add	ip, r4, ip, lsl lr
        2aedb8:	e02c4006 	eor	r4, ip, r6
        2aedbc:	e1a0c007 	mov	ip, r7
        2aedc0:	e4907004 	ldr	r7, [r0], #4
        2aedc4:	e0044007 	and	r4, r4, r7
        2aedc8:	e1e08007 	mvn	r8, r7
        2aedcc:	e5927000 	ldr	r7, [r2]
        2aedd0:	e0087007 	and	r7, r8, r7
        2aedd4:	e1844007 	orr	r4, r4, r7
        2aedd8:	e2533001 	subs	r3, r3, #1	; 0x1
        2aeddc:	e4824004 	str	r4, [r2], #4
        2aede0:	5afffff1 	bpl	2aedac <BlitModeCopy__FPlN21lN24+0x1c>
        2aede4:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: BlitModeOr2__FPlN21lN24
 * Address: 002aede8
 */
void globals::BlitModeOr2() {
    /*
        2aede8:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
        2aedec:	e3a04000 	mov	r4, #0	; 0x0
        2aedf0:	e28d701c 	add	r7, sp, #28	; 0x1c
        2aedf4:	e89700c0 	ldmia	r7, {r6, r7}
        2aedf8:	e2665020 	rsb	r5, r6, #32	; 0x20
        2aedfc:	e3530000 	cmp	r3, #0	; 0x0
        2aee00:	b8bd83f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        2aee04:	e491e004 	ldr	lr, [r1], #4
        2aee08:	e1a0c63e 	mov	ip, lr, lsr r6
        2aee0c:	e08cc514 	add	ip, ip, r4, lsl r5
        2aee10:	e02cc007 	eor	ip, ip, r7
        2aee14:	e1a0400e 	mov	r4, lr
        2aee18:	e490e004 	ldr	lr, [r0], #4
        2aee1c:	e01ee00c 	ands	lr, lr, ip
        2aee20:	0a000007 	beq	2aee44 <BlitModeOr2__FPlN21lN24+0x5c>
        2aee24:	e3a0c103 	mov	ip, #-1073741824	; 0xc0000000
        2aee28:	e11e000c 	tst	lr, ip
        2aee2c:	0a000002 	beq	2aee3c <BlitModeOr2__FPlN21lN24+0x54>
        2aee30:	e5928000 	ldr	r8, [r2]
        2aee34:	e1c8800c 	bic	r8, r8, ip
        2aee38:	e5828000 	str	r8, [r2]
        2aee3c:	e1b0c12c 	movs	ip, ip, lsr #2
        2aee40:	1afffff8 	bne	2aee28 <BlitModeOr2__FPlN21lN24+0x40>
        2aee44:	e592c000 	ldr	ip, [r2]
        2aee48:	e18cc00e 	orr	ip, ip, lr
        2aee4c:	e2533001 	subs	r3, r3, #1	; 0x1
        2aee50:	e482c004 	str	ip, [r2], #4
        2aee54:	5affffea 	bpl	2aee04 <BlitModeOr2__FPlN21lN24+0x1c>
        2aee58:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
    */
}

/**
 * Symbol: BlitModeOr4__FPlN21lN24
 * Address: 002aee5c
 */
void globals::BlitModeOr4() {
    /*
        2aee5c:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
        2aee60:	e3a04000 	mov	r4, #0	; 0x0
        2aee64:	e28d701c 	add	r7, sp, #28	; 0x1c
        2aee68:	e89700c0 	ldmia	r7, {r6, r7}
        2aee6c:	e2665020 	rsb	r5, r6, #32	; 0x20
        2aee70:	e3530000 	cmp	r3, #0	; 0x0
        2aee74:	b8bd83f0 	ldmltia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        2aee78:	e491e004 	ldr	lr, [r1], #4
        2aee7c:	e1a0c63e 	mov	ip, lr, lsr r6
        2aee80:	e08cc514 	add	ip, ip, r4, lsl r5
        2aee84:	e02cc007 	eor	ip, ip, r7
        2aee88:	e1a0400e 	mov	r4, lr
        2aee8c:	e490e004 	ldr	lr, [r0], #4
        2aee90:	e01ee00c 	ands	lr, lr, ip
        2aee94:	0a000007 	beq	2aeeb8 <BlitModeOr4__FPlN21lN24+0x5c>
        2aee98:	e3a0c20f 	mov	ip, #-268435456	; 0xf0000000
        2aee9c:	e11e000c 	tst	lr, ip
        2aeea0:	0a000002 	beq	2aeeb0 <BlitModeOr4__FPlN21lN24+0x54>
        2aeea4:	e5928000 	ldr	r8, [r2]
        2aeea8:	e1c8800c 	bic	r8, r8, ip
        2aeeac:	e5828000 	str	r8, [r2]
        2aeeb0:	e1b0c22c 	movs	ip, ip, lsr #4
        2aeeb4:	1afffff8 	bne	2aee9c <BlitModeOr4__FPlN21lN24+0x40>
        2aeeb8:	e592c000 	ldr	ip, [r2]
        2aeebc:	e18cc00e 	orr	ip, ip, lr
        2aeec0:	e2533001 	subs	r3, r3, #1	; 0x1
        2aeec4:	e482c004 	str	ip, [r2], #4
        2aeec8:	5affffea 	bpl	2aee78 <BlitModeOr4__FPlN21lN24+0x1c>
        2aeecc:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
    */
}

/**
 * Symbol: BreakLoop(void)
 * Address: 002b8050
 */
BreakLoop(void) {
    /*
        2b8050:	e1a0c00d 	mov	ip, sp
        2b8054:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2b8058:	e24cb004 	sub	fp, ip, #4	; 0x4
        2b805c:	e59f4024 	ldr	r4, [pc, #24]	; 2b8088 <BreakLoop(void)+0x38>
        2b8060:	e5940000 	ldr	r0, [r4]
        2b8064:	e5d00000 	ldrb	r0, [r0]
        2b8068:	e3300000 	teq	r0, #0	; 0x0
        2b806c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2b8070:	eb6438af 	bl	1bc6334 <$REPIdle(void)>
        2b8074:	e5940000 	ldr	r0, [r4]
        2b8078:	e5d00000 	ldrb	r0, [r0]
        2b807c:	e3300000 	teq	r0, #0	; 0x0
        2b8080:	0afffffa 	beq	2b8070 <BreakLoop(void)+0x20>
        2b8084:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2b8088:	0c105178 	ldfeqs	f5, [r0], -#480
    */
}

/**
 * Symbol: BigExtr__FP8low_typesN32
 * Address: 002ba858
 */
void globals::BigExtr() {
    /*
        2ba858:	e1a0c00d 	mov	ip, sp
        2ba85c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ba860:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ba864:	e24cb014 	sub	fp, ip, #20	; 0x14
        2ba868:	e1a01801 	mov	r1, r1, lsl #16
        2ba86c:	e1a01841 	mov	r1, r1, asr #16
        2ba870:	e59bc014 	ldr	ip, [fp, #20]
        2ba874:	e1a00802 	mov	r0, r2, lsl #16
        2ba878:	e1a00840 	mov	r0, r0, asr #16
        2ba87c:	e52d000c 	str	r0, [sp, -#12]!
        2ba880:	e52d1004 	str	r1, [sp, -#4]!
        2ba884:	e1a00803 	mov	r0, r3, lsl #16
        2ba888:	e1a00840 	mov	r0, r0, asr #16
        2ba88c:	e1a0180c 	mov	r1, ip, lsl #16
        2ba890:	e1a01841 	mov	r1, r1, asr #16
        2ba894:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        2ba898:	e59b2004 	ldr	r2, [fp, #4]
        2ba89c:	e5922040 	ldr	r2, [r2, #64]
        2ba8a0:	e58d2028 	str	r2, [sp, #40]
        2ba8a4:	e3a02000 	mov	r2, #0	; 0x0
        2ba8a8:	e58d2010 	str	r2, [sp, #16]
        2ba8ac:	e1a0400d 	mov	r4, sp
        2ba8b0:	e59d502c 	ldr	r5, [sp, #44]
        2ba8b4:	e5cd5001 	strb	r5, [sp, #1]
        2ba8b8:	e1a02445 	mov	r2, r5, asr #8
        2ba8bc:	e58d2038 	str	r2, [sp, #56]
        2ba8c0:	e5cd2000 	strb	r2, [sp]
        2ba8c4:	e59d3030 	ldr	r3, [sp, #48]
        2ba8c8:	e5cd3003 	strb	r3, [sp, #3]
        2ba8cc:	e1a02443 	mov	r2, r3, asr #8
        2ba8d0:	e58d2034 	str	r2, [sp, #52]
        2ba8d4:	e5cd2002 	strb	r2, [sp, #2]
        2ba8d8:	e5cd1005 	strb	r1, [sp, #5]
        2ba8dc:	e1a01441 	mov	r1, r1, asr #8
        2ba8e0:	e5cd1004 	strb	r1, [sp, #4]
        2ba8e4:	e3e0a000 	mvn	sl, #0	; 0x0
        2ba8e8:	e3a07001 	mov	r7, #1	; 0x1
        2ba8ec:	e3a06000 	mov	r6, #0	; 0x0
        2ba8f0:	e3300002 	teq	r0, #2	; 0x2
        2ba8f4:	1a000005 	bne	2ba910 <BigExtr__FP8low_typesN32+0xb8>
        2ba8f8:	e3a00003 	mov	r0, #3	; 0x3
        2ba8fc:	e5cd000c 	strb	r0, [sp, #12]
        2ba900:	e5cd6007 	strb	r6, [sp, #7]
        2ba904:	e5cd6006 	strb	r6, [sp, #6]
        2ba908:	e5cd700d 	strb	r7, [sp, #13]
        2ba90c:	ea000011 	b	2ba958 <BigExtr__FP8low_typesN32+0x100>
        2ba910:	e3300001 	teq	r0, #1	; 0x1
        2ba914:	1a000007 	bne	2ba938 <BigExtr__FP8low_typesN32+0xe0>
        2ba918:	e3a00013 	mov	r0, #19	; 0x13
        2ba91c:	e5cd000c 	strb	r0, [sp, #12]
        2ba920:	e5cd7007 	strb	r7, [sp, #7]
        2ba924:	e5cd6006 	strb	r6, [sp, #6]
        2ba928:	e3a00011 	mov	r0, #17	; 0x11
        2ba92c:	e5cd000d 	strb	r0, [sp, #13]
        2ba930:	e5cd6009 	strb	r6, [sp, #9]
        2ba934:	ea000008 	b	2ba95c <BigExtr__FP8low_typesN32+0x104>
        2ba938:	e3300004 	teq	r0, #4	; 0x4
        2ba93c:	1a000039 	bne	2baa28 <BigExtr__FP8low_typesN32+0x1d0>
        2ba940:	e3a00023 	mov	r0, #35	; 0x23
        2ba944:	e5cd000c 	strb	r0, [sp, #12]
        2ba948:	e5cd7007 	strb	r7, [sp, #7]
        2ba94c:	e5cd6006 	strb	r6, [sp, #6]
        2ba950:	e3a00021 	mov	r0, #33	; 0x21
        2ba954:	e5cd000d 	strb	r0, [sp, #13]
        2ba958:	e5cd7009 	strb	r7, [sp, #9]
        2ba95c:	e5cd6008 	strb	r6, [sp, #8]
        2ba960:	e24dd030 	sub	sp, sp, #48	; 0x30
        2ba964:	e59b0004 	ldr	r0, [fp, #4]
        2ba968:	e5b05034 	ldr	r5, [r0, #52]!
        2ba96c:	e59b0004 	ldr	r0, [fp, #4]
        2ba970:	e5b04038 	ldr	r4, [r0, #56]!
        2ba974:	e59d1034 	ldr	r1, [sp, #52]
        2ba978:	e1a01841 	mov	r1, r1, asr #16
        2ba97c:	e58d102c 	str	r1, [sp, #44]
        2ba980:	e59d9036 	ldr	r9, [sp, #54]
        2ba984:	e1a09849 	mov	r9, r9, asr #16
        2ba988:	e59d8038 	ldr	r8, [sp, #56]
        2ba98c:	e1a08848 	mov	r8, r8, asr #16
        2ba990:	e5dd003c 	ldrb	r0, [sp, #60]
        2ba994:	e58d0028 	str	r0, [sp, #40]
        2ba998:	e5dd003d 	ldrb	r0, [sp, #61]
        2ba99c:	e58d0024 	str	r0, [sp, #36]
        2ba9a0:	e28d0044 	add	r0, sp, #68	; 0x44
        2ba9a4:	e58d0020 	str	r0, [sp, #32]
        2ba9a8:	e59d0036 	ldr	r0, [sp, #54]
        2ba9ac:	e1a00840 	mov	r0, r0, asr #16
        2ba9b0:	eb5ed383 	bl	1a6f7c4 <$HWRAbs(int)>
        2ba9b4:	e1a06000 	mov	r6, r0
        2ba9b8:	e59d0038 	ldr	r0, [sp, #56]
        2ba9bc:	e1a00840 	mov	r0, r0, asr #16
        2ba9c0:	eb5ed37f 	bl	1a6f7c4 <$HWRAbs(int)>
        2ba9c4:	e0860000 	add	r0, r6, r0
        2ba9c8:	e5cd003b 	strb	r0, [sp, #59]
        2ba9cc:	e1a00440 	mov	r0, r0, asr #8
        2ba9d0:	e5cd003a 	strb	r0, [sp, #58]
        2ba9d4:	e59d003a 	ldr	r0, [sp, #58]
        2ba9d8:	e1b00840 	movs	r0, r0, asr #16
        2ba9dc:	0a00034b 	beq	2bb710 <BigExtr__FP8low_typesN32+0xeb8>
        2ba9e0:	e59d0020 	ldr	r0, [sp, #32]
        2ba9e4:	eb6199a5 	bl	1b21080 <$InitSpeclElement(SPEC_TYPE *)>
        2ba9e8:	e59d703a 	ldr	r7, [sp, #58]
        2ba9ec:	e1a07847 	mov	r7, r7, asr #16
        2ba9f0:	e59b0004 	ldr	r0, [fp, #4]
        2ba9f4:	e5900040 	ldr	r0, [r0, #64]
        2ba9f8:	e59b1004 	ldr	r1, [fp, #4]
        2ba9fc:	e5911046 	ldr	r1, [r1, #70]
        2baa00:	e1a01841 	mov	r1, r1, asr #16
        2baa04:	e0811101 	add	r1, r1, r1, lsl #2
        2baa08:	e0800101 	add	r0, r0, r1, lsl #2
        2baa0c:	e5500014 	ldrb	r0, [r0, -#20]
        2baa10:	e58d001c 	str	r0, [sp, #28]
        2baa14:	e59d0060 	ldr	r0, [sp, #96]
        2baa18:	e59d605c 	ldr	r6, [sp, #92]
        2baa1c:	e1560000 	cmp	r6, r0
        2baa20:	ca000346 	bgt	2bb740 <BigExtr__FP8low_typesN32+0xee8>
        2baa24:	ea00000d 	b	2baa60 <BigExtr__FP8low_typesN32+0x208>
        2baa28:	e3300008 	teq	r0, #8	; 0x8
        2baa2c:	1a000377 	bne	2bb810 <BigExtr__FP8low_typesN32+0xfb8>
        2baa30:	e3a00033 	mov	r0, #51	; 0x33
        2baa34:	e5cd000c 	strb	r0, [sp, #12]
        2baa38:	e3a00031 	mov	r0, #49	; 0x31
        2baa3c:	e5cd000d 	strb	r0, [sp, #13]
        2baa40:	e5cda009 	strb	sl, [sp, #9]
        2baa44:	e5cda008 	strb	sl, [sp, #8]
        2baa48:	e59d0030 	ldr	r0, [sp, #48]
        2baa4c:	e59d502c 	ldr	r5, [sp, #44]
        2baa50:	e1550000 	cmp	r5, r0
        2baa54:	ca000378 	bgt	2bb83c <BigExtr__FP8low_typesN32+0xfe4>
        2baa58:	e3a08002 	mov	r8, #2	; 0x2
        2baa5c:	ea000339 	b	2bb748 <BigExtr__FP8low_typesN32+0xef0>
        2baa60:	e3590000 	cmp	r9, #0	; 0x0
        2baa64:	03a00000 	moveq	r0, #0	; 0x0
        2baa68:	0a000002 	beq	2baa78 <BigExtr__FP8low_typesN32+0x220>
        2baa6c:	e7950086 	ldr	r0, [r5, r6, lsl #1]
        2baa70:	e1a00840 	mov	r0, r0, asr #16
        2baa74:	d2600000 	rsble	r0, r0, #0	; 0x0
        2baa78:	e3580000 	cmp	r8, #0	; 0x0
        2baa7c:	03a01000 	moveq	r1, #0	; 0x0
        2baa80:	0a000002 	beq	2baa90 <BigExtr__FP8low_typesN32+0x238>
        2baa84:	e7941086 	ldr	r1, [r4, r6, lsl #1]
        2baa88:	e1a01841 	mov	r1, r1, asr #16
        2baa8c:	d2611000 	rsble	r1, r1, #0	; 0x0
        2baa90:	e0801001 	add	r1, r0, r1
        2baa94:	e1a00007 	mov	r0, r7
        2baa98:	eb63dfa8 	bl	1bb2940 <$__rt_sdiv>
        2baa9c:	e1a0a000 	mov	sl, r0
        2baaa0:	e3590000 	cmp	r9, #0	; 0x0
        2baaa4:	03a00000 	moveq	r0, #0	; 0x0
        2baaa8:	0a000003 	beq	2baabc <BigExtr__FP8low_typesN32+0x264>
        2baaac:	e0850086 	add	r0, r5, r6, lsl #1
        2baab0:	e5900002 	ldr	r0, [r0, #2]
        2baab4:	e1a00840 	mov	r0, r0, asr #16
        2baab8:	d2600000 	rsble	r0, r0, #0	; 0x0
        2baabc:	e3580000 	cmp	r8, #0	; 0x0
        2baac0:	03a01000 	moveq	r1, #0	; 0x0
        2baac4:	0a000003 	beq	2baad8 <BigExtr__FP8low_typesN32+0x280>
        2baac8:	e0841086 	add	r1, r4, r6, lsl #1
        2baacc:	e5911002 	ldr	r1, [r1, #2]
        2baad0:	e1a01841 	mov	r1, r1, asr #16
        2baad4:	d2611000 	rsble	r1, r1, #0	; 0x0
        2baad8:	e0801001 	add	r1, r0, r1
        2baadc:	e1a00007 	mov	r0, r7
        2baae0:	eb63df96 	bl	1bb2940 <$__rt_sdiv>
        2baae4:	e15a0000 	cmp	sl, r0
        2baae8:	ba000026 	blt	2bab88 <BigExtr__FP8low_typesN32+0x330>
        2baaec:	e3590000 	cmp	r9, #0	; 0x0
        2baaf0:	03a01000 	moveq	r1, #0	; 0x0
        2baaf4:	0a000004 	beq	2bab0c <BigExtr__FP8low_typesN32+0x2b4>
        2baaf8:	d7950086 	ldrle	r0, [r5, r6, lsl #1]
        2baafc:	d1a00840 	movle	r0, r0, asr #16
        2bab00:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bab04:	c7951086 	ldrgt	r1, [r5, r6, lsl #1]
        2bab08:	c1a01841 	movgt	r1, r1, asr #16
        2bab0c:	e3580000 	cmp	r8, #0	; 0x0
        2bab10:	03a00000 	moveq	r0, #0	; 0x0
        2bab14:	0a000002 	beq	2bab24 <BigExtr__FP8low_typesN32+0x2cc>
        2bab18:	e7940086 	ldr	r0, [r4, r6, lsl #1]
        2bab1c:	e1a00840 	mov	r0, r0, asr #16
        2bab20:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bab24:	e0811000 	add	r1, r1, r0
        2bab28:	e1a00007 	mov	r0, r7
        2bab2c:	eb63df83 	bl	1bb2940 <$__rt_sdiv>
        2bab30:	e1a0a000 	mov	sl, r0
        2bab34:	e3590000 	cmp	r9, #0	; 0x0
        2bab38:	03a01000 	moveq	r1, #0	; 0x0
        2bab3c:	0a000005 	beq	2bab58 <BigExtr__FP8low_typesN32+0x300>
        2bab40:	e0850086 	add	r0, r5, r6, lsl #1
        2bab44:	d5100002 	ldrle	r0, [r0, -#2]
        2bab48:	d1a00840 	movle	r0, r0, asr #16
        2bab4c:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bab50:	c5101002 	ldrgt	r1, [r0, -#2]
        2bab54:	c1a01841 	movgt	r1, r1, asr #16
        2bab58:	e3580000 	cmp	r8, #0	; 0x0
        2bab5c:	03a00000 	moveq	r0, #0	; 0x0
        2bab60:	0a000003 	beq	2bab74 <BigExtr__FP8low_typesN32+0x31c>
        2bab64:	e0840086 	add	r0, r4, r6, lsl #1
        2bab68:	e5100002 	ldr	r0, [r0, -#2]
        2bab6c:	e1a00840 	mov	r0, r0, asr #16
        2bab70:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bab74:	e0811000 	add	r1, r1, r0
        2bab78:	e1a00007 	mov	r0, r7
        2bab7c:	eb63df6f 	bl	1bb2940 <$__rt_sdiv>
        2bab80:	e15a0000 	cmp	sl, r0
        2bab84:	aa00004e 	bge	2bacc4 <BigExtr__FP8low_typesN32+0x46c>
        2bab88:	e3590000 	cmp	r9, #0	; 0x0
        2bab8c:	03a00000 	moveq	r0, #0	; 0x0
        2bab90:	0a000002 	beq	2baba0 <BigExtr__FP8low_typesN32+0x348>
        2bab94:	e7950086 	ldr	r0, [r5, r6, lsl #1]
        2bab98:	e1a00840 	mov	r0, r0, asr #16
        2bab9c:	d2600000 	rsble	r0, r0, #0	; 0x0
        2baba0:	e3580000 	cmp	r8, #0	; 0x0
        2baba4:	03a01000 	moveq	r1, #0	; 0x0
        2baba8:	0a000002 	beq	2babb8 <BigExtr__FP8low_typesN32+0x360>
        2babac:	e7941086 	ldr	r1, [r4, r6, lsl #1]
        2babb0:	e1a01841 	mov	r1, r1, asr #16
        2babb4:	d2611000 	rsble	r1, r1, #0	; 0x0
        2babb8:	e0801001 	add	r1, r0, r1
        2babbc:	e1a00007 	mov	r0, r7
        2babc0:	eb63df5e 	bl	1bb2940 <$__rt_sdiv>
        2babc4:	e1a0a000 	mov	sl, r0
        2babc8:	e3590000 	cmp	r9, #0	; 0x0
        2babcc:	03a01000 	moveq	r1, #0	; 0x0
        2babd0:	0a000005 	beq	2babec <BigExtr__FP8low_typesN32+0x394>
        2babd4:	e0850086 	add	r0, r5, r6, lsl #1
        2babd8:	d5900002 	ldrle	r0, [r0, #2]
        2babdc:	d1a00840 	movle	r0, r0, asr #16
        2babe0:	d2601000 	rsble	r1, r0, #0	; 0x0
        2babe4:	c5901002 	ldrgt	r1, [r0, #2]
        2babe8:	c1a01841 	movgt	r1, r1, asr #16
        2babec:	e3580000 	cmp	r8, #0	; 0x0
        2babf0:	03a00000 	moveq	r0, #0	; 0x0
        2babf4:	0a000003 	beq	2bac08 <BigExtr__FP8low_typesN32+0x3b0>
        2babf8:	e0840086 	add	r0, r4, r6, lsl #1
        2babfc:	e5900002 	ldr	r0, [r0, #2]
        2bac00:	e1a00840 	mov	r0, r0, asr #16
        2bac04:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bac08:	e0811000 	add	r1, r1, r0
        2bac0c:	e1a00007 	mov	r0, r7
        2bac10:	eb63df4a 	bl	1bb2940 <$__rt_sdiv>
        2bac14:	e15a0000 	cmp	sl, r0
        2bac18:	ca000024 	bgt	2bacb0 <BigExtr__FP8low_typesN32+0x458>
        2bac1c:	e3590000 	cmp	r9, #0	; 0x0
        2bac20:	03a00000 	moveq	r0, #0	; 0x0
        2bac24:	0a000002 	beq	2bac34 <BigExtr__FP8low_typesN32+0x3dc>
        2bac28:	e7950086 	ldr	r0, [r5, r6, lsl #1]
        2bac2c:	e1a00840 	mov	r0, r0, asr #16
        2bac30:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bac34:	e3580000 	cmp	r8, #0	; 0x0
        2bac38:	03a01000 	moveq	r1, #0	; 0x0
        2bac3c:	0a000002 	beq	2bac4c <BigExtr__FP8low_typesN32+0x3f4>
        2bac40:	e7941086 	ldr	r1, [r4, r6, lsl #1]
        2bac44:	e1a01841 	mov	r1, r1, asr #16
        2bac48:	d2611000 	rsble	r1, r1, #0	; 0x0
        2bac4c:	e0801001 	add	r1, r0, r1
        2bac50:	e1a00007 	mov	r0, r7
        2bac54:	eb63df39 	bl	1bb2940 <$__rt_sdiv>
        2bac58:	e1a0a000 	mov	sl, r0
        2bac5c:	e3590000 	cmp	r9, #0	; 0x0
        2bac60:	03a01000 	moveq	r1, #0	; 0x0
        2bac64:	0a000005 	beq	2bac80 <BigExtr__FP8low_typesN32+0x428>
        2bac68:	e0850086 	add	r0, r5, r6, lsl #1
        2bac6c:	d5100002 	ldrle	r0, [r0, -#2]
        2bac70:	d1a00840 	movle	r0, r0, asr #16
        2bac74:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bac78:	c5101002 	ldrgt	r1, [r0, -#2]
        2bac7c:	c1a01841 	movgt	r1, r1, asr #16
        2bac80:	e3580000 	cmp	r8, #0	; 0x0
        2bac84:	03a00000 	moveq	r0, #0	; 0x0
        2bac88:	0a000003 	beq	2bac9c <BigExtr__FP8low_typesN32+0x444>
        2bac8c:	e0840086 	add	r0, r4, r6, lsl #1
        2bac90:	e5100002 	ldr	r0, [r0, -#2]
        2bac94:	e1a00840 	mov	r0, r0, asr #16
        2bac98:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bac9c:	e0811000 	add	r1, r1, r0
        2baca0:	e1a00007 	mov	r0, r7
        2baca4:	eb63df25 	bl	1bb2940 <$__rt_sdiv>
        2baca8:	e15a0000 	cmp	sl, r0
        2bacac:	da000004 	ble	2bacc4 <BigExtr__FP8low_typesN32+0x46c>
        2bacb0:	e59d105c 	ldr	r1, [sp, #92]
        2bacb4:	e1360001 	teq	r6, r1
        2bacb8:	159d0060 	ldrne	r0, [sp, #96]
        2bacbc:	11360000 	teqne	r6, r0
        2bacc0:	1a00029a 	bne	2bb730 <BigExtr__FP8low_typesN32+0xed8>
        2bacc4:	e3590000 	cmp	r9, #0	; 0x0
        2bacc8:	03a01000 	moveq	r1, #0	; 0x0
        2baccc:	0a000004 	beq	2bace4 <BigExtr__FP8low_typesN32+0x48c>
        2bacd0:	d7950086 	ldrle	r0, [r5, r6, lsl #1]
        2bacd4:	d1a00840 	movle	r0, r0, asr #16
        2bacd8:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bacdc:	c7951086 	ldrgt	r1, [r5, r6, lsl #1]
        2bace0:	c1a01841 	movgt	r1, r1, asr #16
        2bace4:	e3580000 	cmp	r8, #0	; 0x0
        2bace8:	03a00000 	moveq	r0, #0	; 0x0
        2bacec:	0a000002 	beq	2bacfc <BigExtr__FP8low_typesN32+0x4a4>
        2bacf0:	e7940086 	ldr	r0, [r4, r6, lsl #1]
        2bacf4:	e1a00840 	mov	r0, r0, asr #16
        2bacf8:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bacfc:	e0811000 	add	r1, r1, r0
        2bad00:	e1a00007 	mov	r0, r7
        2bad04:	eb63df0d 	bl	1bb2940 <$__rt_sdiv>
        2bad08:	e1a0a006 	mov	sl, r6
        2bad0c:	e58d0018 	str	r0, [sp, #24]
        2bad10:	ea000000 	b	2bad18 <BigExtr__FP8low_typesN32+0x4c0>
        2bad14:	e24aa001 	sub	sl, sl, #1	; 0x1
        2bad18:	e3590000 	cmp	r9, #0	; 0x0
        2bad1c:	03a00000 	moveq	r0, #0	; 0x0
        2bad20:	0a000002 	beq	2bad30 <BigExtr__FP8low_typesN32+0x4d8>
        2bad24:	e795008a 	ldr	r0, [r5, sl, lsl #1]
        2bad28:	e1a00840 	mov	r0, r0, asr #16
        2bad2c:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bad30:	e3580000 	cmp	r8, #0	; 0x0
        2bad34:	03a01000 	moveq	r1, #0	; 0x0
        2bad38:	0a000002 	beq	2bad48 <BigExtr__FP8low_typesN32+0x4f0>
        2bad3c:	e794108a 	ldr	r1, [r4, sl, lsl #1]
        2bad40:	e1a01841 	mov	r1, r1, asr #16
        2bad44:	d2611000 	rsble	r1, r1, #0	; 0x0
        2bad48:	e0801001 	add	r1, r0, r1
        2bad4c:	e1a00007 	mov	r0, r7
        2bad50:	eb63defa 	bl	1bb2940 <$__rt_sdiv>
        2bad54:	e59d1018 	ldr	r1, [sp, #24]
        2bad58:	e0410000 	sub	r0, r1, r0
        2bad5c:	eb5ed298 	bl	1a6f7c4 <$HWRAbs(int)>
        2bad60:	e59d102c 	ldr	r1, [sp, #44]
        2bad64:	e1500001 	cmp	r0, r1
        2bad68:	aa000002 	bge	2bad78 <BigExtr__FP8low_typesN32+0x520>
        2bad6c:	e59d105c 	ldr	r1, [sp, #92]
        2bad70:	e15a0001 	cmp	sl, r1
        2bad74:	aaffffe6 	bge	2bad14 <BigExtr__FP8low_typesN32+0x4bc>
        2bad78:	e28a0001 	add	r0, sl, #1	; 0x1
        2bad7c:	e1a0a006 	mov	sl, r6
        2bad80:	e58d000c 	str	r0, [sp, #12]
        2bad84:	ea000000 	b	2bad8c <BigExtr__FP8low_typesN32+0x534>
        2bad88:	e28aa001 	add	sl, sl, #1	; 0x1
        2bad8c:	e3590000 	cmp	r9, #0	; 0x0
        2bad90:	03a00000 	moveq	r0, #0	; 0x0
        2bad94:	0a000002 	beq	2bada4 <BigExtr__FP8low_typesN32+0x54c>
        2bad98:	e795008a 	ldr	r0, [r5, sl, lsl #1]
        2bad9c:	e1a00840 	mov	r0, r0, asr #16
        2bada0:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bada4:	e3580000 	cmp	r8, #0	; 0x0
        2bada8:	03a01000 	moveq	r1, #0	; 0x0
        2badac:	0a000002 	beq	2badbc <BigExtr__FP8low_typesN32+0x564>
        2badb0:	e794108a 	ldr	r1, [r4, sl, lsl #1]
        2badb4:	e1a01841 	mov	r1, r1, asr #16
        2badb8:	d2611000 	rsble	r1, r1, #0	; 0x0
        2badbc:	e0801001 	add	r1, r0, r1
        2badc0:	e1a00007 	mov	r0, r7
        2badc4:	eb63dedd 	bl	1bb2940 <$__rt_sdiv>
        2badc8:	e59d1018 	ldr	r1, [sp, #24]
        2badcc:	e0410000 	sub	r0, r1, r0
        2badd0:	eb5ed27b 	bl	1a6f7c4 <$HWRAbs(int)>
        2badd4:	e59d102c 	ldr	r1, [sp, #44]
        2badd8:	e1500001 	cmp	r0, r1
        2baddc:	aa000002 	bge	2badec <BigExtr__FP8low_typesN32+0x594>
        2bade0:	e59d0060 	ldr	r0, [sp, #96]
        2bade4:	e15a0000 	cmp	sl, r0
        2bade8:	daffffe6 	ble	2bad88 <BigExtr__FP8low_typesN32+0x530>
        2badec:	e24aa001 	sub	sl, sl, #1	; 0x1
        2badf0:	e59d000c 	ldr	r0, [sp, #12]
        2badf4:	e59d105c 	ldr	r1, [sp, #92]
        2badf8:	e1300001 	teq	r0, r1
        2badfc:	0a00002c 	beq	2baeb4 <BigExtr__FP8low_typesN32+0x65c>
        2bae00:	e3590000 	cmp	r9, #0	; 0x0
        2bae04:	03a00000 	moveq	r0, #0	; 0x0
        2bae08:	0a000004 	beq	2bae20 <BigExtr__FP8low_typesN32+0x5c8>
        2bae0c:	e59d000c 	ldr	r0, [sp, #12]
        2bae10:	e0850080 	add	r0, r5, r0, lsl #1
        2bae14:	e5100002 	ldr	r0, [r0, -#2]
        2bae18:	e1a00840 	mov	r0, r0, asr #16
        2bae1c:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bae20:	e3580000 	cmp	r8, #0	; 0x0
        2bae24:	03a01000 	moveq	r1, #0	; 0x0
        2bae28:	0a000004 	beq	2bae40 <BigExtr__FP8low_typesN32+0x5e8>
        2bae2c:	e59d100c 	ldr	r1, [sp, #12]
        2bae30:	e0841081 	add	r1, r4, r1, lsl #1
        2bae34:	e5111002 	ldr	r1, [r1, -#2]
        2bae38:	e1a01841 	mov	r1, r1, asr #16
        2bae3c:	d2611000 	rsble	r1, r1, #0	; 0x0
        2bae40:	e0801001 	add	r1, r0, r1
        2bae44:	e1a00007 	mov	r0, r7
        2bae48:	eb63debc 	bl	1bb2940 <$__rt_sdiv>
        2bae4c:	e59d1018 	ldr	r1, [sp, #24]
        2bae50:	e1500001 	cmp	r0, r1
        2bae54:	aa000016 	bge	2baeb4 <BigExtr__FP8low_typesN32+0x65c>
        2bae58:	e3590000 	cmp	r9, #0	; 0x0
        2bae5c:	03a00000 	moveq	r0, #0	; 0x0
        2bae60:	0a000003 	beq	2bae74 <BigExtr__FP8low_typesN32+0x61c>
        2bae64:	e085008a 	add	r0, r5, sl, lsl #1
        2bae68:	e5900002 	ldr	r0, [r0, #2]
        2bae6c:	e1a00840 	mov	r0, r0, asr #16
        2bae70:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bae74:	e3580000 	cmp	r8, #0	; 0x0
        2bae78:	03a01000 	moveq	r1, #0	; 0x0
        2bae7c:	0a000003 	beq	2bae90 <BigExtr__FP8low_typesN32+0x638>
        2bae80:	e084108a 	add	r1, r4, sl, lsl #1
        2bae84:	e5911002 	ldr	r1, [r1, #2]
        2bae88:	e1a01841 	mov	r1, r1, asr #16
        2bae8c:	d2611000 	rsble	r1, r1, #0	; 0x0
        2bae90:	e0801001 	add	r1, r0, r1
        2bae94:	e1a00007 	mov	r0, r7
        2bae98:	eb63dea8 	bl	1bb2940 <$__rt_sdiv>
        2bae9c:	e59d1018 	ldr	r1, [sp, #24]
        2baea0:	e1500001 	cmp	r0, r1
        2baea4:	ba000035 	blt	2baf80 <BigExtr__FP8low_typesN32+0x728>
        2baea8:	e59d0060 	ldr	r0, [sp, #96]
        2baeac:	e13a0000 	teq	sl, r0
        2baeb0:	0a000032 	beq	2baf80 <BigExtr__FP8low_typesN32+0x728>
        2baeb4:	e59d0060 	ldr	r0, [sp, #96]
        2baeb8:	e13a0000 	teq	sl, r0
        2baebc:	0a0000e2 	beq	2bb24c <BigExtr__FP8low_typesN32+0x9f4>
        2baec0:	e3590000 	cmp	r9, #0	; 0x0
        2baec4:	03a00000 	moveq	r0, #0	; 0x0
        2baec8:	0a000003 	beq	2baedc <BigExtr__FP8low_typesN32+0x684>
        2baecc:	e085008a 	add	r0, r5, sl, lsl #1
        2baed0:	e5900002 	ldr	r0, [r0, #2]
        2baed4:	e1a00840 	mov	r0, r0, asr #16
        2baed8:	d2600000 	rsble	r0, r0, #0	; 0x0
        2baedc:	e3580000 	cmp	r8, #0	; 0x0
        2baee0:	03a01000 	moveq	r1, #0	; 0x0
        2baee4:	0a000003 	beq	2baef8 <BigExtr__FP8low_typesN32+0x6a0>
        2baee8:	e084108a 	add	r1, r4, sl, lsl #1
        2baeec:	e5911002 	ldr	r1, [r1, #2]
        2baef0:	e1a01841 	mov	r1, r1, asr #16
        2baef4:	d2611000 	rsble	r1, r1, #0	; 0x0
        2baef8:	e0801001 	add	r1, r0, r1
        2baefc:	e1a00007 	mov	r0, r7
        2baf00:	eb63de8e 	bl	1bb2940 <$__rt_sdiv>
        2baf04:	e59d1018 	ldr	r1, [sp, #24]
        2baf08:	e1500001 	cmp	r0, r1
        2baf0c:	aa0000ce 	bge	2bb24c <BigExtr__FP8low_typesN32+0x9f4>
        2baf10:	e3590000 	cmp	r9, #0	; 0x0
        2baf14:	03a01000 	moveq	r1, #0	; 0x0
        2baf18:	0a000006 	beq	2baf38 <BigExtr__FP8low_typesN32+0x6e0>
        2baf1c:	e59d000c 	ldr	r0, [sp, #12]
        2baf20:	e0850080 	add	r0, r5, r0, lsl #1
        2baf24:	d5100002 	ldrle	r0, [r0, -#2]
        2baf28:	d1a00840 	movle	r0, r0, asr #16
        2baf2c:	d2601000 	rsble	r1, r0, #0	; 0x0
        2baf30:	c5101002 	ldrgt	r1, [r0, -#2]
        2baf34:	c1a01841 	movgt	r1, r1, asr #16
        2baf38:	e3580000 	cmp	r8, #0	; 0x0
        2baf3c:	03a00000 	moveq	r0, #0	; 0x0
        2baf40:	0a000004 	beq	2baf58 <BigExtr__FP8low_typesN32+0x700>
        2baf44:	e59d000c 	ldr	r0, [sp, #12]
        2baf48:	e0840080 	add	r0, r4, r0, lsl #1
        2baf4c:	e5100002 	ldr	r0, [r0, -#2]
        2baf50:	e1a00840 	mov	r0, r0, asr #16
        2baf54:	d2600000 	rsble	r0, r0, #0	; 0x0
        2baf58:	e0811000 	add	r1, r1, r0
        2baf5c:	e1a00007 	mov	r0, r7
        2baf60:	eb63de76 	bl	1bb2940 <$__rt_sdiv>
        2baf64:	e59d1018 	ldr	r1, [sp, #24]
        2baf68:	e1500001 	cmp	r0, r1
        2baf6c:	ba000003 	blt	2baf80 <BigExtr__FP8low_typesN32+0x728>
        2baf70:	e59d000c 	ldr	r0, [sp, #12]
        2baf74:	e59d105c 	ldr	r1, [sp, #92]
        2baf78:	e1300001 	teq	r0, r1
        2baf7c:	1a0000b2 	bne	2bb24c <BigExtr__FP8low_typesN32+0x9f4>
        2baf80:	e59d001c 	ldr	r0, [sp, #28]
        2baf84:	e59d1028 	ldr	r1, [sp, #40]
        2baf88:	e1300001 	teq	r0, r1
        2baf8c:	0a0000ae 	beq	2bb24c <BigExtr__FP8low_typesN32+0x9f4>
        2baf90:	e59d0018 	ldr	r0, [sp, #24]
        2baf94:	e58d0014 	str	r0, [sp, #20]
        2baf98:	e58d6008 	str	r6, [sp, #8]
        2baf9c:	e59d000c 	ldr	r0, [sp, #12]
        2bafa0:	e58d0000 	str	r0, [sp]
        2bafa4:	e150000a 	cmp	r0, sl
        2bafa8:	ca00002c 	bgt	2bb060 <BigExtr__FP8low_typesN32+0x808>
        2bafac:	e3590000 	cmp	r9, #0	; 0x0
        2bafb0:	03a00000 	moveq	r0, #0	; 0x0
        2bafb4:	0a000003 	beq	2bafc8 <BigExtr__FP8low_typesN32+0x770>
        2bafb8:	e59d1000 	ldr	r1, [sp]
        2bafbc:	e7950081 	ldr	r0, [r5, r1, lsl #1]
        2bafc0:	e1a00840 	mov	r0, r0, asr #16
        2bafc4:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bafc8:	e3580000 	cmp	r8, #0	; 0x0
        2bafcc:	03a01000 	moveq	r1, #0	; 0x0
        2bafd0:	0a000003 	beq	2bafe4 <BigExtr__FP8low_typesN32+0x78c>
        2bafd4:	e59d1000 	ldr	r1, [sp]
        2bafd8:	e7941081 	ldr	r1, [r4, r1, lsl #1]
        2bafdc:	e1a01841 	mov	r1, r1, asr #16
        2bafe0:	d2611000 	rsble	r1, r1, #0	; 0x0
        2bafe4:	e0801001 	add	r1, r0, r1
        2bafe8:	e1a00007 	mov	r0, r7
        2bafec:	eb63de53 	bl	1bb2940 <$__rt_sdiv>
        2baff0:	e59d1014 	ldr	r1, [sp, #20]
        2baff4:	e1500001 	cmp	r0, r1
        2baff8:	da000013 	ble	2bb04c <BigExtr__FP8low_typesN32+0x7f4>
        2baffc:	e59d0000 	ldr	r0, [sp]
        2bb000:	e3590000 	cmp	r9, #0	; 0x0
        2bb004:	e58d0008 	str	r0, [sp, #8]
        2bb008:	03a00000 	moveq	r0, #0	; 0x0
        2bb00c:	0a000003 	beq	2bb020 <BigExtr__FP8low_typesN32+0x7c8>
        2bb010:	e59d0000 	ldr	r0, [sp]
        2bb014:	e7950080 	ldr	r0, [r5, r0, lsl #1]
        2bb018:	e1a00840 	mov	r0, r0, asr #16
        2bb01c:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb020:	e3580000 	cmp	r8, #0	; 0x0
        2bb024:	03a01000 	moveq	r1, #0	; 0x0
        2bb028:	0a000003 	beq	2bb03c <BigExtr__FP8low_typesN32+0x7e4>
        2bb02c:	e59d1000 	ldr	r1, [sp]
        2bb030:	e7941081 	ldr	r1, [r4, r1, lsl #1]
        2bb034:	e1a01841 	mov	r1, r1, asr #16
        2bb038:	d2611000 	rsble	r1, r1, #0	; 0x0
        2bb03c:	e0801001 	add	r1, r0, r1
        2bb040:	e1a00007 	mov	r0, r7
        2bb044:	eb63de3d 	bl	1bb2940 <$__rt_sdiv>
        2bb048:	e58d0014 	str	r0, [sp, #20]
        2bb04c:	e59d0000 	ldr	r0, [sp]
        2bb050:	e2801001 	add	r1, r0, #1	; 0x1
        2bb054:	e58d1000 	str	r1, [sp]
        2bb058:	e151000a 	cmp	r1, sl
        2bb05c:	daffffd2 	ble	2bafac <BigExtr__FP8low_typesN32+0x754>
        2bb060:	e59d0008 	ldr	r0, [sp, #8]
        2bb064:	e58d0000 	str	r0, [sp]
        2bb068:	ea000002 	b	2bb078 <BigExtr__FP8low_typesN32+0x820>
        2bb06c:	e59d1000 	ldr	r1, [sp]
        2bb070:	e2811001 	add	r1, r1, #1	; 0x1
        2bb074:	e58d1000 	str	r1, [sp]
        2bb078:	e3590000 	cmp	r9, #0	; 0x0
        2bb07c:	03a00000 	moveq	r0, #0	; 0x0
        2bb080:	0a000003 	beq	2bb094 <BigExtr__FP8low_typesN32+0x83c>
        2bb084:	e59d1000 	ldr	r1, [sp]
        2bb088:	e7950081 	ldr	r0, [r5, r1, lsl #1]
        2bb08c:	e1a00840 	mov	r0, r0, asr #16
        2bb090:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb094:	e3580000 	cmp	r8, #0	; 0x0
        2bb098:	03a01000 	moveq	r1, #0	; 0x0
        2bb09c:	0a000003 	beq	2bb0b0 <BigExtr__FP8low_typesN32+0x858>
        2bb0a0:	e59d1000 	ldr	r1, [sp]
        2bb0a4:	e7941081 	ldr	r1, [r4, r1, lsl #1]
        2bb0a8:	e1a01841 	mov	r1, r1, asr #16
        2bb0ac:	d2611000 	rsble	r1, r1, #0	; 0x0
        2bb0b0:	e0801001 	add	r1, r0, r1
        2bb0b4:	e1a00007 	mov	r0, r7
        2bb0b8:	eb63de20 	bl	1bb2940 <$__rt_sdiv>
        2bb0bc:	e59d1014 	ldr	r1, [sp, #20]
        2bb0c0:	e1300001 	teq	r0, r1
        2bb0c4:	1a000003 	bne	2bb0d8 <BigExtr__FP8low_typesN32+0x880>
        2bb0c8:	e59d0060 	ldr	r0, [sp, #96]
        2bb0cc:	e59d1000 	ldr	r1, [sp]
        2bb0d0:	e1510000 	cmp	r1, r0
        2bb0d4:	daffffe4 	ble	2bb06c <BigExtr__FP8low_typesN32+0x814>
        2bb0d8:	e59d0008 	ldr	r0, [sp, #8]
        2bb0dc:	e59d1000 	ldr	r1, [sp]
        2bb0e0:	e0800001 	add	r0, r0, r1
        2bb0e4:	e2400001 	sub	r0, r0, #1	; 0x1
        2bb0e8:	e1a000c0 	mov	r0, r0, asr #1
        2bb0ec:	e58d0008 	str	r0, [sp, #8]
        2bb0f0:	e1300006 	teq	r0, r6
        2bb0f4:	159da008 	ldrne	sl, [sp, #8]
        2bb0f8:	1a000001 	bne	2bb104 <BigExtr__FP8low_typesN32+0x8ac>
        2bb0fc:	ea000038 	b	2bb1e4 <BigExtr__FP8low_typesN32+0x98c>
        2bb100:	e24aa001 	sub	sl, sl, #1	; 0x1
        2bb104:	e3590000 	cmp	r9, #0	; 0x0
        2bb108:	03a01000 	moveq	r1, #0	; 0x0
        2bb10c:	0a000004 	beq	2bb124 <BigExtr__FP8low_typesN32+0x8cc>
        2bb110:	d795008a 	ldrle	r0, [r5, sl, lsl #1]
        2bb114:	d1a00840 	movle	r0, r0, asr #16
        2bb118:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bb11c:	c795108a 	ldrgt	r1, [r5, sl, lsl #1]
        2bb120:	c1a01841 	movgt	r1, r1, asr #16
        2bb124:	e3580000 	cmp	r8, #0	; 0x0
        2bb128:	03a00000 	moveq	r0, #0	; 0x0
        2bb12c:	0a000002 	beq	2bb13c <BigExtr__FP8low_typesN32+0x8e4>
        2bb130:	e794008a 	ldr	r0, [r4, sl, lsl #1]
        2bb134:	e1a00840 	mov	r0, r0, asr #16
        2bb138:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb13c:	e0811000 	add	r1, r1, r0
        2bb140:	e1a00007 	mov	r0, r7
        2bb144:	eb63ddfd 	bl	1bb2940 <$__rt_sdiv>
        2bb148:	e59d1014 	ldr	r1, [sp, #20]
        2bb14c:	e0410000 	sub	r0, r1, r0
        2bb150:	e59d102c 	ldr	r1, [sp, #44]
        2bb154:	e1500001 	cmp	r0, r1
        2bb158:	aa000002 	bge	2bb168 <BigExtr__FP8low_typesN32+0x910>
        2bb15c:	e59d105c 	ldr	r1, [sp, #92]
        2bb160:	e15a0001 	cmp	sl, r1
        2bb164:	aaffffe5 	bge	2bb100 <BigExtr__FP8low_typesN32+0x8a8>
        2bb168:	e28a0001 	add	r0, sl, #1	; 0x1
        2bb16c:	e58d000c 	str	r0, [sp, #12]
        2bb170:	e59da008 	ldr	sl, [sp, #8]
        2bb174:	ea000000 	b	2bb17c <BigExtr__FP8low_typesN32+0x924>
        2bb178:	e28aa001 	add	sl, sl, #1	; 0x1
        2bb17c:	e3590000 	cmp	r9, #0	; 0x0
        2bb180:	03a01000 	moveq	r1, #0	; 0x0
        2bb184:	0a000004 	beq	2bb19c <BigExtr__FP8low_typesN32+0x944>
        2bb188:	d795008a 	ldrle	r0, [r5, sl, lsl #1]
        2bb18c:	d1a00840 	movle	r0, r0, asr #16
        2bb190:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bb194:	c795108a 	ldrgt	r1, [r5, sl, lsl #1]
        2bb198:	c1a01841 	movgt	r1, r1, asr #16
        2bb19c:	e3580000 	cmp	r8, #0	; 0x0
        2bb1a0:	03a00000 	moveq	r0, #0	; 0x0
        2bb1a4:	0a000002 	beq	2bb1b4 <BigExtr__FP8low_typesN32+0x95c>
        2bb1a8:	e794008a 	ldr	r0, [r4, sl, lsl #1]
        2bb1ac:	e1a00840 	mov	r0, r0, asr #16
        2bb1b0:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb1b4:	e0811000 	add	r1, r1, r0
        2bb1b8:	e1a00007 	mov	r0, r7
        2bb1bc:	eb63dddf 	bl	1bb2940 <$__rt_sdiv>
        2bb1c0:	e59d1014 	ldr	r1, [sp, #20]
        2bb1c4:	e0410000 	sub	r0, r1, r0
        2bb1c8:	e59d102c 	ldr	r1, [sp, #44]
        2bb1cc:	e1500001 	cmp	r0, r1
        2bb1d0:	aa000002 	bge	2bb1e0 <BigExtr__FP8low_typesN32+0x988>
        2bb1d4:	e59d0060 	ldr	r0, [sp, #96]
        2bb1d8:	e15a0000 	cmp	sl, r0
        2bb1dc:	daffffe5 	ble	2bb178 <BigExtr__FP8low_typesN32+0x920>
        2bb1e0:	e24aa001 	sub	sl, sl, #1	; 0x1
        2bb1e4:	e59d0020 	ldr	r0, [sp, #32]
        2bb1e8:	eb6197a4 	bl	1b21080 <$InitSpeclElement(SPEC_TYPE *)>
        2bb1ec:	e59d000c 	ldr	r0, [sp, #12]
        2bb1f0:	e59d1020 	ldr	r1, [sp, #32]
        2bb1f4:	e5c10005 	strb	r0, [r1, #5]
        2bb1f8:	e1a00440 	mov	r0, r0, asr #8
        2bb1fc:	e5c10004 	strb	r0, [r1, #4]
        2bb200:	e59d0020 	ldr	r0, [sp, #32]
        2bb204:	e5c0a007 	strb	sl, [r0, #7]
        2bb208:	e1a0144a 	mov	r1, sl, asr #8
        2bb20c:	e5c01006 	strb	r1, [r0, #6]
        2bb210:	e59d0008 	ldr	r0, [sp, #8]
        2bb214:	e59d1020 	ldr	r1, [sp, #32]
        2bb218:	e5c10009 	strb	r0, [r1, #9]
        2bb21c:	e1a00440 	mov	r0, r0, asr #8
        2bb220:	e5c10008 	strb	r0, [r1, #8]
        2bb224:	e3a010fe 	mov	r1, #254	; 0xfe
        2bb228:	e59d0020 	ldr	r0, [sp, #32]
        2bb22c:	e5c0100b 	strb	r1, [r0, #11]
        2bb230:	e3a0a0ff 	mov	sl, #255	; 0xff
        2bb234:	e5c0a00a 	strb	sl, [r0, #10]
        2bb238:	e59d0020 	ldr	r0, [sp, #32]
        2bb23c:	e59d1028 	ldr	r1, [sp, #40]
        2bb240:	e5c01000 	strb	r1, [r0]
        2bb244:	e59d0028 	ldr	r0, [sp, #40]
        2bb248:	ea000127 	b	2bb6ec <BigExtr__FP8low_typesN32+0xe94>
        2bb24c:	e59d000c 	ldr	r0, [sp, #12]
        2bb250:	e59d105c 	ldr	r1, [sp, #92]
        2bb254:	e1300001 	teq	r0, r1
        2bb258:	0a000030 	beq	2bb320 <BigExtr__FP8low_typesN32+0xac8>
        2bb25c:	e3590000 	cmp	r9, #0	; 0x0
        2bb260:	03a01000 	moveq	r1, #0	; 0x0
        2bb264:	0a000006 	beq	2bb284 <BigExtr__FP8low_typesN32+0xa2c>
        2bb268:	e59d000c 	ldr	r0, [sp, #12]
        2bb26c:	e0850080 	add	r0, r5, r0, lsl #1
        2bb270:	d5100002 	ldrle	r0, [r0, -#2]
        2bb274:	d1a00840 	movle	r0, r0, asr #16
        2bb278:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bb27c:	c5101002 	ldrgt	r1, [r0, -#2]
        2bb280:	c1a01841 	movgt	r1, r1, asr #16
        2bb284:	e3580000 	cmp	r8, #0	; 0x0
        2bb288:	03a00000 	moveq	r0, #0	; 0x0
        2bb28c:	0a000004 	beq	2bb2a4 <BigExtr__FP8low_typesN32+0xa4c>
        2bb290:	e59d000c 	ldr	r0, [sp, #12]
        2bb294:	e0840080 	add	r0, r4, r0, lsl #1
        2bb298:	e5100002 	ldr	r0, [r0, -#2]
        2bb29c:	e1a00840 	mov	r0, r0, asr #16
        2bb2a0:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb2a4:	e0811000 	add	r1, r1, r0
        2bb2a8:	e1a00007 	mov	r0, r7
        2bb2ac:	eb63dda3 	bl	1bb2940 <$__rt_sdiv>
        2bb2b0:	e59d1018 	ldr	r1, [sp, #24]
        2bb2b4:	e1500001 	cmp	r0, r1
        2bb2b8:	da000018 	ble	2bb320 <BigExtr__FP8low_typesN32+0xac8>
        2bb2bc:	e3590000 	cmp	r9, #0	; 0x0
        2bb2c0:	03a01000 	moveq	r1, #0	; 0x0
        2bb2c4:	0a000005 	beq	2bb2e0 <BigExtr__FP8low_typesN32+0xa88>
        2bb2c8:	e085008a 	add	r0, r5, sl, lsl #1
        2bb2cc:	d5900002 	ldrle	r0, [r0, #2]
        2bb2d0:	d1a00840 	movle	r0, r0, asr #16
        2bb2d4:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bb2d8:	c5901002 	ldrgt	r1, [r0, #2]
        2bb2dc:	c1a01841 	movgt	r1, r1, asr #16
        2bb2e0:	e3580000 	cmp	r8, #0	; 0x0
        2bb2e4:	03a00000 	moveq	r0, #0	; 0x0
        2bb2e8:	0a000003 	beq	2bb2fc <BigExtr__FP8low_typesN32+0xaa4>
        2bb2ec:	e084008a 	add	r0, r4, sl, lsl #1
        2bb2f0:	e5900002 	ldr	r0, [r0, #2]
        2bb2f4:	e1a00840 	mov	r0, r0, asr #16
        2bb2f8:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb2fc:	e0811000 	add	r1, r1, r0
        2bb300:	e1a00007 	mov	r0, r7
        2bb304:	eb63dd8d 	bl	1bb2940 <$__rt_sdiv>
        2bb308:	e59d1018 	ldr	r1, [sp, #24]
        2bb30c:	e1500001 	cmp	r0, r1
        2bb310:	ca000037 	bgt	2bb3f4 <BigExtr__FP8low_typesN32+0xb9c>
        2bb314:	e59d0060 	ldr	r0, [sp, #96]
        2bb318:	e13a0000 	teq	sl, r0
        2bb31c:	0a000034 	beq	2bb3f4 <BigExtr__FP8low_typesN32+0xb9c>
        2bb320:	e59d0060 	ldr	r0, [sp, #96]
        2bb324:	e13a0000 	teq	sl, r0
        2bb328:	0a0000f0 	beq	2bb6f0 <BigExtr__FP8low_typesN32+0xe98>
        2bb32c:	e3590000 	cmp	r9, #0	; 0x0
        2bb330:	03a01000 	moveq	r1, #0	; 0x0
        2bb334:	0a000005 	beq	2bb350 <BigExtr__FP8low_typesN32+0xaf8>
        2bb338:	e085008a 	add	r0, r5, sl, lsl #1
        2bb33c:	d5900002 	ldrle	r0, [r0, #2]
        2bb340:	d1a00840 	movle	r0, r0, asr #16
        2bb344:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bb348:	c5901002 	ldrgt	r1, [r0, #2]
        2bb34c:	c1a01841 	movgt	r1, r1, asr #16
        2bb350:	e3580000 	cmp	r8, #0	; 0x0
        2bb354:	03a00000 	moveq	r0, #0	; 0x0
        2bb358:	0a000003 	beq	2bb36c <BigExtr__FP8low_typesN32+0xb14>
        2bb35c:	e084008a 	add	r0, r4, sl, lsl #1
        2bb360:	e5900002 	ldr	r0, [r0, #2]
        2bb364:	e1a00840 	mov	r0, r0, asr #16
        2bb368:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb36c:	e0811000 	add	r1, r1, r0
        2bb370:	e1a00007 	mov	r0, r7
        2bb374:	eb63dd71 	bl	1bb2940 <$__rt_sdiv>
        2bb378:	e59d1018 	ldr	r1, [sp, #24]
        2bb37c:	e1500001 	cmp	r0, r1
        2bb380:	da0000da 	ble	2bb6f0 <BigExtr__FP8low_typesN32+0xe98>
        2bb384:	e3590000 	cmp	r9, #0	; 0x0
        2bb388:	03a01000 	moveq	r1, #0	; 0x0
        2bb38c:	0a000006 	beq	2bb3ac <BigExtr__FP8low_typesN32+0xb54>
        2bb390:	e59d000c 	ldr	r0, [sp, #12]
        2bb394:	e0850080 	add	r0, r5, r0, lsl #1
        2bb398:	d5100002 	ldrle	r0, [r0, -#2]
        2bb39c:	d1a00840 	movle	r0, r0, asr #16
        2bb3a0:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bb3a4:	c5101002 	ldrgt	r1, [r0, -#2]
        2bb3a8:	c1a01841 	movgt	r1, r1, asr #16
        2bb3ac:	e3580000 	cmp	r8, #0	; 0x0
        2bb3b0:	03a00000 	moveq	r0, #0	; 0x0
        2bb3b4:	0a000004 	beq	2bb3cc <BigExtr__FP8low_typesN32+0xb74>
        2bb3b8:	e59d000c 	ldr	r0, [sp, #12]
        2bb3bc:	e0840080 	add	r0, r4, r0, lsl #1
        2bb3c0:	e5100002 	ldr	r0, [r0, -#2]
        2bb3c4:	e1a00840 	mov	r0, r0, asr #16
        2bb3c8:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb3cc:	e0811000 	add	r1, r1, r0
        2bb3d0:	e1a00007 	mov	r0, r7
        2bb3d4:	eb63dd59 	bl	1bb2940 <$__rt_sdiv>
        2bb3d8:	e59d1018 	ldr	r1, [sp, #24]
        2bb3dc:	e1500001 	cmp	r0, r1
        2bb3e0:	ca000003 	bgt	2bb3f4 <BigExtr__FP8low_typesN32+0xb9c>
        2bb3e4:	e59d000c 	ldr	r0, [sp, #12]
        2bb3e8:	e59d105c 	ldr	r1, [sp, #92]
        2bb3ec:	e1300001 	teq	r0, r1
        2bb3f0:	1a0000be 	bne	2bb6f0 <BigExtr__FP8low_typesN32+0xe98>
        2bb3f4:	e59d0024 	ldr	r0, [sp, #36]
        2bb3f8:	e59d101c 	ldr	r1, [sp, #28]
        2bb3fc:	e1310000 	teq	r1, r0
        2bb400:	0a0000ba 	beq	2bb6f0 <BigExtr__FP8low_typesN32+0xe98>
        2bb404:	e59d0018 	ldr	r0, [sp, #24]
        2bb408:	e58d0010 	str	r0, [sp, #16]
        2bb40c:	e58d6004 	str	r6, [sp, #4]
        2bb410:	e59d000c 	ldr	r0, [sp, #12]
        2bb414:	e58d0000 	str	r0, [sp]
        2bb418:	e150000a 	cmp	r0, sl
        2bb41c:	ca000031 	bgt	2bb4e8 <BigExtr__FP8low_typesN32+0xc90>
        2bb420:	e3590000 	cmp	r9, #0	; 0x0
        2bb424:	03a00000 	moveq	r0, #0	; 0x0
        2bb428:	0a000006 	beq	2bb448 <BigExtr__FP8low_typesN32+0xbf0>
        2bb42c:	d59d0000 	ldrle	r0, [sp]
        2bb430:	d7950080 	ldrle	r0, [r5, r0, lsl #1]
        2bb434:	d1a00840 	movle	r0, r0, asr #16
        2bb438:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb43c:	c59d1000 	ldrgt	r1, [sp]
        2bb440:	c7950081 	ldrgt	r0, [r5, r1, lsl #1]
        2bb444:	c1a00840 	movgt	r0, r0, asr #16
        2bb448:	e3580000 	cmp	r8, #0	; 0x0
        2bb44c:	03a01000 	moveq	r1, #0	; 0x0
        2bb450:	0a000003 	beq	2bb464 <BigExtr__FP8low_typesN32+0xc0c>
        2bb454:	e59d1000 	ldr	r1, [sp]
        2bb458:	e7941081 	ldr	r1, [r4, r1, lsl #1]
        2bb45c:	e1a01841 	mov	r1, r1, asr #16
        2bb460:	d2611000 	rsble	r1, r1, #0	; 0x0
        2bb464:	e0801001 	add	r1, r0, r1
        2bb468:	e1a00007 	mov	r0, r7
        2bb46c:	eb63dd33 	bl	1bb2940 <$__rt_sdiv>
        2bb470:	e59d1010 	ldr	r1, [sp, #16]
        2bb474:	e1500001 	cmp	r0, r1
        2bb478:	aa000015 	bge	2bb4d4 <BigExtr__FP8low_typesN32+0xc7c>
        2bb47c:	e59d0000 	ldr	r0, [sp]
        2bb480:	e3590000 	cmp	r9, #0	; 0x0
        2bb484:	e58d0004 	str	r0, [sp, #4]
        2bb488:	03a01000 	moveq	r1, #0	; 0x0
        2bb48c:	0a000005 	beq	2bb4a8 <BigExtr__FP8low_typesN32+0xc50>
        2bb490:	e59d0000 	ldr	r0, [sp]
        2bb494:	d7950080 	ldrle	r0, [r5, r0, lsl #1]
        2bb498:	d1a00840 	movle	r0, r0, asr #16
        2bb49c:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bb4a0:	c7951080 	ldrgt	r1, [r5, r0, lsl #1]
        2bb4a4:	c1a01841 	movgt	r1, r1, asr #16
        2bb4a8:	e3580000 	cmp	r8, #0	; 0x0
        2bb4ac:	03a00000 	moveq	r0, #0	; 0x0
        2bb4b0:	0a000003 	beq	2bb4c4 <BigExtr__FP8low_typesN32+0xc6c>
        2bb4b4:	e59d0000 	ldr	r0, [sp]
        2bb4b8:	e7940080 	ldr	r0, [r4, r0, lsl #1]
        2bb4bc:	e1a00840 	mov	r0, r0, asr #16
        2bb4c0:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb4c4:	e0811000 	add	r1, r1, r0
        2bb4c8:	e1a00007 	mov	r0, r7
        2bb4cc:	eb63dd1b 	bl	1bb2940 <$__rt_sdiv>
        2bb4d0:	e58d0010 	str	r0, [sp, #16]
        2bb4d4:	e59d0000 	ldr	r0, [sp]
        2bb4d8:	e2800001 	add	r0, r0, #1	; 0x1
        2bb4dc:	e58d0000 	str	r0, [sp]
        2bb4e0:	e150000a 	cmp	r0, sl
        2bb4e4:	daffffcd 	ble	2bb420 <BigExtr__FP8low_typesN32+0xbc8>
        2bb4e8:	e59d0004 	ldr	r0, [sp, #4]
        2bb4ec:	ea000001 	b	2bb4f8 <BigExtr__FP8low_typesN32+0xca0>
        2bb4f0:	e59d0000 	ldr	r0, [sp]
        2bb4f4:	e2800001 	add	r0, r0, #1	; 0x1
        2bb4f8:	e3590000 	cmp	r9, #0	; 0x0
        2bb4fc:	e58d0000 	str	r0, [sp]
        2bb500:	03a01000 	moveq	r1, #0	; 0x0
        2bb504:	0a000005 	beq	2bb520 <BigExtr__FP8low_typesN32+0xcc8>
        2bb508:	e59d0000 	ldr	r0, [sp]
        2bb50c:	d7950080 	ldrle	r0, [r5, r0, lsl #1]
        2bb510:	d1a00840 	movle	r0, r0, asr #16
        2bb514:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bb518:	c7951080 	ldrgt	r1, [r5, r0, lsl #1]
        2bb51c:	c1a01841 	movgt	r1, r1, asr #16
        2bb520:	e3580000 	cmp	r8, #0	; 0x0
        2bb524:	03a00000 	moveq	r0, #0	; 0x0
        2bb528:	0a000003 	beq	2bb53c <BigExtr__FP8low_typesN32+0xce4>
        2bb52c:	e59d0000 	ldr	r0, [sp]
        2bb530:	e7940080 	ldr	r0, [r4, r0, lsl #1]
        2bb534:	e1a00840 	mov	r0, r0, asr #16
        2bb538:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb53c:	e0811000 	add	r1, r1, r0
        2bb540:	e1a00007 	mov	r0, r7
        2bb544:	eb63dcfd 	bl	1bb2940 <$__rt_sdiv>
        2bb548:	e59d1010 	ldr	r1, [sp, #16]
        2bb54c:	e1300001 	teq	r0, r1
        2bb550:	1a000003 	bne	2bb564 <BigExtr__FP8low_typesN32+0xd0c>
        2bb554:	e59d0060 	ldr	r0, [sp, #96]
        2bb558:	e59d1000 	ldr	r1, [sp]
        2bb55c:	e1510000 	cmp	r1, r0
        2bb560:	daffffe2 	ble	2bb4f0 <BigExtr__FP8low_typesN32+0xc98>
        2bb564:	e59d0004 	ldr	r0, [sp, #4]
        2bb568:	e59d1000 	ldr	r1, [sp]
        2bb56c:	e0800001 	add	r0, r0, r1
        2bb570:	e2400001 	sub	r0, r0, #1	; 0x1
        2bb574:	e1a000c0 	mov	r0, r0, asr #1
        2bb578:	e58d0004 	str	r0, [sp, #4]
        2bb57c:	e1300006 	teq	r0, r6
        2bb580:	159da004 	ldrne	sl, [sp, #4]
        2bb584:	1a000001 	bne	2bb590 <BigExtr__FP8low_typesN32+0xd38>
        2bb588:	ea00003e 	b	2bb688 <BigExtr__FP8low_typesN32+0xe30>
        2bb58c:	e28aa001 	add	sl, sl, #1	; 0x1
        2bb590:	e3590000 	cmp	r9, #0	; 0x0
        2bb594:	03a01000 	moveq	r1, #0	; 0x0
        2bb598:	0a000004 	beq	2bb5b0 <BigExtr__FP8low_typesN32+0xd58>
        2bb59c:	d795008a 	ldrle	r0, [r5, sl, lsl #1]
        2bb5a0:	d1a00840 	movle	r0, r0, asr #16
        2bb5a4:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bb5a8:	c795108a 	ldrgt	r1, [r5, sl, lsl #1]
        2bb5ac:	c1a01841 	movgt	r1, r1, asr #16
        2bb5b0:	e3580000 	cmp	r8, #0	; 0x0
        2bb5b4:	03a00000 	moveq	r0, #0	; 0x0
        2bb5b8:	0a000002 	beq	2bb5c8 <BigExtr__FP8low_typesN32+0xd70>
        2bb5bc:	e794008a 	ldr	r0, [r4, sl, lsl #1]
        2bb5c0:	e1a00840 	mov	r0, r0, asr #16
        2bb5c4:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb5c8:	e0811000 	add	r1, r1, r0
        2bb5cc:	e1a00007 	mov	r0, r7
        2bb5d0:	eb63dcda 	bl	1bb2940 <$__rt_sdiv>
        2bb5d4:	e59d1010 	ldr	r1, [sp, #16]
        2bb5d8:	e0400001 	sub	r0, r0, r1
        2bb5dc:	e59d102c 	ldr	r1, [sp, #44]
        2bb5e0:	e1500001 	cmp	r0, r1
        2bb5e4:	aa000002 	bge	2bb5f4 <BigExtr__FP8low_typesN32+0xd9c>
        2bb5e8:	e59d0060 	ldr	r0, [sp, #96]
        2bb5ec:	e15a0000 	cmp	sl, r0
        2bb5f0:	daffffe5 	ble	2bb58c <BigExtr__FP8low_typesN32+0xd34>
        2bb5f4:	e24aa001 	sub	sl, sl, #1	; 0x1
        2bb5f8:	e59d0004 	ldr	r0, [sp, #4]
        2bb5fc:	ea000001 	b	2bb608 <BigExtr__FP8low_typesN32+0xdb0>
        2bb600:	e59d0000 	ldr	r0, [sp]
        2bb604:	e2400001 	sub	r0, r0, #1	; 0x1
        2bb608:	e3590000 	cmp	r9, #0	; 0x0
        2bb60c:	e58d0000 	str	r0, [sp]
        2bb610:	03a01000 	moveq	r1, #0	; 0x0
        2bb614:	0a000005 	beq	2bb630 <BigExtr__FP8low_typesN32+0xdd8>
        2bb618:	e59d0000 	ldr	r0, [sp]
        2bb61c:	d7950080 	ldrle	r0, [r5, r0, lsl #1]
        2bb620:	d1a00840 	movle	r0, r0, asr #16
        2bb624:	d2601000 	rsble	r1, r0, #0	; 0x0
        2bb628:	c7951080 	ldrgt	r1, [r5, r0, lsl #1]
        2bb62c:	c1a01841 	movgt	r1, r1, asr #16
        2bb630:	e3580000 	cmp	r8, #0	; 0x0
        2bb634:	03a00000 	moveq	r0, #0	; 0x0
        2bb638:	0a000003 	beq	2bb64c <BigExtr__FP8low_typesN32+0xdf4>
        2bb63c:	e59d0000 	ldr	r0, [sp]
        2bb640:	e7940080 	ldr	r0, [r4, r0, lsl #1]
        2bb644:	e1a00840 	mov	r0, r0, asr #16
        2bb648:	d2600000 	rsble	r0, r0, #0	; 0x0
        2bb64c:	e0811000 	add	r1, r1, r0
        2bb650:	e1a00007 	mov	r0, r7
        2bb654:	eb63dcb9 	bl	1bb2940 <$__rt_sdiv>
        2bb658:	e59d1010 	ldr	r1, [sp, #16]
        2bb65c:	e0400001 	sub	r0, r0, r1
        2bb660:	e59d102c 	ldr	r1, [sp, #44]
        2bb664:	e1500001 	cmp	r0, r1
        2bb668:	aa000003 	bge	2bb67c <BigExtr__FP8low_typesN32+0xe24>
        2bb66c:	e59d0000 	ldr	r0, [sp]
        2bb670:	e59d105c 	ldr	r1, [sp, #92]
        2bb674:	e1500001 	cmp	r0, r1
        2bb678:	aaffffe0 	bge	2bb600 <BigExtr__FP8low_typesN32+0xda8>
        2bb67c:	e59d0000 	ldr	r0, [sp]
        2bb680:	e2800001 	add	r0, r0, #1	; 0x1
        2bb684:	e58d000c 	str	r0, [sp, #12]
        2bb688:	e59d0020 	ldr	r0, [sp, #32]
        2bb68c:	eb61967b 	bl	1b21080 <$InitSpeclElement(SPEC_TYPE *)>
        2bb690:	e59d000c 	ldr	r0, [sp, #12]
        2bb694:	e59d1020 	ldr	r1, [sp, #32]
        2bb698:	e5c10005 	strb	r0, [r1, #5]
        2bb69c:	e1a00440 	mov	r0, r0, asr #8
        2bb6a0:	e5c10004 	strb	r0, [r1, #4]
        2bb6a4:	e59d0020 	ldr	r0, [sp, #32]
        2bb6a8:	e5c0a007 	strb	sl, [r0, #7]
        2bb6ac:	e1a0144a 	mov	r1, sl, asr #8
        2bb6b0:	e5c01006 	strb	r1, [r0, #6]
        2bb6b4:	e59d0004 	ldr	r0, [sp, #4]
        2bb6b8:	e59d1020 	ldr	r1, [sp, #32]
        2bb6bc:	e5c10009 	strb	r0, [r1, #9]
        2bb6c0:	e1a00440 	mov	r0, r0, asr #8
        2bb6c4:	e5c10008 	strb	r0, [r1, #8]
        2bb6c8:	e3a010fe 	mov	r1, #254	; 0xfe
        2bb6cc:	e59d0020 	ldr	r0, [sp, #32]
        2bb6d0:	e5c0100b 	strb	r1, [r0, #11]
        2bb6d4:	e3a0a0ff 	mov	sl, #255	; 0xff
        2bb6d8:	e5c0a00a 	strb	sl, [r0, #10]
        2bb6dc:	e28d1020 	add	r1, sp, #32	; 0x20
        2bb6e0:	e8910003 	ldmia	r1, {r0, r1}
        2bb6e4:	e5c01000 	strb	r1, [r0]
        2bb6e8:	e59d0024 	ldr	r0, [sp, #36]
        2bb6ec:	e58d001c 	str	r0, [sp, #28]
        2bb6f0:	e5dd0044 	ldrb	r0, [sp, #68]
        2bb6f4:	e3300000 	teq	r0, #0	; 0x0
        2bb6f8:	0a00000c 	beq	2bb730 <BigExtr__FP8low_typesN32+0xed8>
        2bb6fc:	e28d1044 	add	r1, sp, #68	; 0x44
        2bb700:	e59b0004 	ldr	r0, [fp, #4]
        2bb704:	eb61967a 	bl	1b210f4 <$MarkSpecl(low_type *, SPEC_TYPE *)>
        2bb708:	e3300001 	teq	r0, #1	; 0x1
        2bb70c:	1a000003 	bne	2bb720 <BigExtr__FP8low_typesN32+0xec8>
        2bb710:	e3a00001 	mov	r0, #1	; 0x1
        2bb714:	e58d0040 	str	r0, [sp, #64]
        2bb718:	e28dd030 	add	sp, sp, #48	; 0x30
        2bb71c:	ea000089 	b	2bb948 <BigExtr__FP8low_typesN32+0x10f0>
        2bb720:	e59d604a 	ldr	r6, [sp, #74]
        2bb724:	e1a06846 	mov	r6, r6, asr #16
        2bb728:	e59d0020 	ldr	r0, [sp, #32]
        2bb72c:	eb619653 	bl	1b21080 <$InitSpeclElement(SPEC_TYPE *)>
        2bb730:	e2866001 	add	r6, r6, #1	; 0x1
        2bb734:	e59d0060 	ldr	r0, [sp, #96]
        2bb738:	e1560000 	cmp	r6, r0
        2bb73c:	dafffcc7 	ble	2baa60 <BigExtr__FP8low_typesN32+0x208>
        2bb740:	e28dd030 	add	sp, sp, #48	; 0x30
        2bb744:	ea00003c 	b	2bb83c <BigExtr__FP8low_typesN32+0xfe4>
        2bb748:	e5cd7007 	strb	r7, [sp, #7]
        2bb74c:	e5cd6006 	strb	r6, [sp, #6]
        2bb750:	e59d0006 	ldr	r0, [sp, #6]
        2bb754:	e1a00840 	mov	r0, r0, asr #16
        2bb758:	eb5ed019 	bl	1a6f7c4 <$HWRAbs(int)>
        2bb75c:	e1a09000 	mov	r9, r0
        2bb760:	e59d0008 	ldr	r0, [sp, #8]
        2bb764:	e1a00840 	mov	r0, r0, asr #16
        2bb768:	eb5ed015 	bl	1a6f7c4 <$HWRAbs(int)>
        2bb76c:	e0890000 	add	r0, r9, r0
        2bb770:	e5cd000b 	strb	r0, [sp, #11]
        2bb774:	e1a00440 	mov	r0, r0, asr #8
        2bb778:	e5cd000a 	strb	r0, [sp, #10]
        2bb77c:	e1a03005 	mov	r3, r5
        2bb780:	e28d2014 	add	r2, sp, #20	; 0x14
        2bb784:	e1a01004 	mov	r1, r4
        2bb788:	e59b0004 	ldr	r0, [fp, #4]
        2bb78c:	eb618ddc 	bl	1b1ef04 <$DirectExtr(low_type *, _ENVIRONS *, SPEC_TYPE *, short)>
        2bb790:	e5dd0014 	ldrb	r0, [sp, #20]
        2bb794:	e3300000 	teq	r0, #0	; 0x0
        2bb798:	1a000011 	bne	2bb7e4 <BigExtr__FP8low_typesN32+0xf8c>
        2bb79c:	e5cd8007 	strb	r8, [sp, #7]
        2bb7a0:	e5cd6006 	strb	r6, [sp, #6]
        2bb7a4:	e59d0006 	ldr	r0, [sp, #6]
        2bb7a8:	e1a00840 	mov	r0, r0, asr #16
        2bb7ac:	eb5ed004 	bl	1a6f7c4 <$HWRAbs(int)>
        2bb7b0:	e1a09000 	mov	r9, r0
        2bb7b4:	e59d0008 	ldr	r0, [sp, #8]
        2bb7b8:	e1a00840 	mov	r0, r0, asr #16
        2bb7bc:	eb5ed000 	bl	1a6f7c4 <$HWRAbs(int)>
        2bb7c0:	e0890000 	add	r0, r9, r0
        2bb7c4:	e5cd000b 	strb	r0, [sp, #11]
        2bb7c8:	e1a00440 	mov	r0, r0, asr #8
        2bb7cc:	e5cd000a 	strb	r0, [sp, #10]
        2bb7d0:	e1a03005 	mov	r3, r5
        2bb7d4:	e28d2014 	add	r2, sp, #20	; 0x14
        2bb7d8:	e1a01004 	mov	r1, r4
        2bb7dc:	e59b0004 	ldr	r0, [fp, #4]
        2bb7e0:	eb618dc7 	bl	1b1ef04 <$DirectExtr(low_type *, _ENVIRONS *, SPEC_TYPE *, short)>
        2bb7e4:	e5dd0014 	ldrb	r0, [sp, #20]
        2bb7e8:	e3300000 	teq	r0, #0	; 0x0
        2bb7ec:	0a00000e 	beq	2bb82c <BigExtr__FP8low_typesN32+0xfd4>
        2bb7f0:	e59d001a 	ldr	r0, [sp, #26]
        2bb7f4:	e1550840 	cmp	r5, r0, asr #16
        2bb7f8:	ca00000b 	bgt	2bb82c <BigExtr__FP8low_typesN32+0xfd4>
        2bb7fc:	e28d1014 	add	r1, sp, #20	; 0x14
        2bb800:	e59b0004 	ldr	r0, [fp, #4]
        2bb804:	eb61963a 	bl	1b210f4 <$MarkSpecl(low_type *, SPEC_TYPE *)>
        2bb808:	e3300001 	teq	r0, #1	; 0x1
        2bb80c:	1a000002 	bne	2bb81c <BigExtr__FP8low_typesN32+0xfc4>
        2bb810:	e3a00001 	mov	r0, #1	; 0x1
        2bb814:	e58d0010 	str	r0, [sp, #16]
        2bb818:	ea00004a 	b	2bb948 <BigExtr__FP8low_typesN32+0x10f0>
        2bb81c:	e59d001a 	ldr	r0, [sp, #26]
        2bb820:	e1550840 	cmp	r5, r0, asr #16
        2bb824:	d59d501a 	ldrle	r5, [sp, #26]
        2bb828:	d1a05845 	movle	r5, r5, asr #16
        2bb82c:	e2855001 	add	r5, r5, #1	; 0x1
        2bb830:	e59d0030 	ldr	r0, [sp, #48]
        2bb834:	e1550000 	cmp	r5, r0
        2bb838:	daffffc2 	ble	2bb748 <BigExtr__FP8low_typesN32+0xef0>
        2bb83c:	e59b0004 	ldr	r0, [fp, #4]
        2bb840:	e5900046 	ldr	r0, [r0, #70]
        2bb844:	e1a00840 	mov	r0, r0, asr #16
        2bb848:	e0800100 	add	r0, r0, r0, lsl #2
        2bb84c:	e59d1028 	ldr	r1, [sp, #40]
        2bb850:	e0810100 	add	r0, r1, r0, lsl #2
        2bb854:	e2404014 	sub	r4, r0, #20	; 0x14
        2bb858:	e5dd100c 	ldrb	r1, [sp, #12]
        2bb85c:	e1a00004 	mov	r0, r4
        2bb860:	eb61961b 	bl	1b210d4 <$LastElemAnyKindFor(SPEC_TYPE *, unsigned char)>
        2bb864:	e1a05000 	mov	r5, r0
        2bb868:	e5dd100d 	ldrb	r1, [sp, #13]
        2bb86c:	e1a00004 	mov	r0, r4
        2bb870:	eb619617 	bl	1b210d4 <$LastElemAnyKindFor(SPEC_TYPE *, unsigned char)>
        2bb874:	e3350000 	teq	r5, #0	; 0x0
        2bb878:	0a000016 	beq	2bb8d8 <BigExtr__FP8low_typesN32+0x1080>
        2bb87c:	e5952006 	ldr	r2, [r5, #6]
        2bb880:	e1a02842 	mov	r2, r2, asr #16
        2bb884:	e59d3030 	ldr	r3, [sp, #48]
        2bb888:	e1520003 	cmp	r2, r3
        2bb88c:	aa000011 	bge	2bb8d8 <BigExtr__FP8low_typesN32+0x1080>
        2bb890:	e3300000 	teq	r0, #0	; 0x0
        2bb894:	0a00000f 	beq	2bb8d8 <BigExtr__FP8low_typesN32+0x1080>
        2bb898:	e5901006 	ldr	r1, [r0, #6]
        2bb89c:	e1a01841 	mov	r1, r1, asr #16
        2bb8a0:	e59d3030 	ldr	r3, [sp, #48]
        2bb8a4:	e1510003 	cmp	r1, r3
        2bb8a8:	aa00000a 	bge	2bb8d8 <BigExtr__FP8low_typesN32+0x1080>
        2bb8ac:	e1520001 	cmp	r2, r1
        2bb8b0:	da000004 	ble	2bb8c8 <BigExtr__FP8low_typesN32+0x1070>
        2bb8b4:	e59d0030 	ldr	r0, [sp, #48]
        2bb8b8:	e5c50007 	strb	r0, [r5, #7]
        2bb8bc:	e59d2034 	ldr	r2, [sp, #52]
        2bb8c0:	e5c52006 	strb	r2, [r5, #6]
        2bb8c4:	ea000003 	b	2bb8d8 <BigExtr__FP8low_typesN32+0x1080>
        2bb8c8:	e59d3030 	ldr	r3, [sp, #48]
        2bb8cc:	e5c03007 	strb	r3, [r0, #7]
        2bb8d0:	e59d2034 	ldr	r2, [sp, #52]
        2bb8d4:	e5c02006 	strb	r2, [r0, #6]
        2bb8d8:	e5dd100c 	ldrb	r1, [sp, #12]
        2bb8dc:	e1a00004 	mov	r0, r4
        2bb8e0:	eb618d9e 	bl	1b1ef60 <$FirstElemAnyKindFor(SPEC_TYPE *, unsigned char)>
        2bb8e4:	e1a05000 	mov	r5, r0
        2bb8e8:	e5dd100d 	ldrb	r1, [sp, #13]
        2bb8ec:	e1a00004 	mov	r0, r4
        2bb8f0:	eb618d9a 	bl	1b1ef60 <$FirstElemAnyKindFor(SPEC_TYPE *, unsigned char)>
        2bb8f4:	e3350000 	teq	r5, #0	; 0x0
        2bb8f8:	0a000012 	beq	2bb948 <BigExtr__FP8low_typesN32+0x10f0>
        2bb8fc:	e5952004 	ldr	r2, [r5, #4]
        2bb900:	e1a02842 	mov	r2, r2, asr #16
        2bb904:	e59d102c 	ldr	r1, [sp, #44]
        2bb908:	e1520001 	cmp	r2, r1
        2bb90c:	da00000d 	ble	2bb948 <BigExtr__FP8low_typesN32+0x10f0>
        2bb910:	e3300000 	teq	r0, #0	; 0x0
        2bb914:	0a00000b 	beq	2bb948 <BigExtr__FP8low_typesN32+0x10f0>
        2bb918:	e5901004 	ldr	r1, [r0, #4]
        2bb91c:	e1a01841 	mov	r1, r1, asr #16
        2bb920:	e59d602c 	ldr	r6, [sp, #44]
        2bb924:	e1510006 	cmp	r1, r6
        2bb928:	da000006 	ble	2bb948 <BigExtr__FP8low_typesN32+0x10f0>
        2bb92c:	e1520001 	cmp	r2, r1
        2bb930:	e59d102c 	ldr	r1, [sp, #44]
        2bb934:	a5c01005 	strgeb	r1, [r0, #5]
        2bb938:	b5c51005 	strltb	r1, [r5, #5]
        2bb93c:	e59d2038 	ldr	r2, [sp, #56]
        2bb940:	a5c02004 	strgeb	r2, [r0, #4]
        2bb944:	b5c52004 	strltb	r2, [r5, #4]
        2bb948:	e59d0010 	ldr	r0, [sp, #16]
        2bb94c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: brk_right__FPsiT2
 * Address: 00305fd4
 */
void globals::brk_right() {
    /*
        305fd4:	ea000000 	b	305fdc <brk_right__FPsiT2+0x8>
        305fd8:	e2811001 	add	r1, r1, #1	; 0x1
        305fdc:	e1510002 	cmp	r1, r2
        305fe0:	ca000003 	bgt	305ff4 <brk_right__FPsiT2+0x20>
        305fe4:	e7903081 	ldr	r3, [r0, r1, lsl #1]
        305fe8:	e1a03843 	mov	r3, r3, asr #16
        305fec:	e3730001 	cmn	r3, #1	; 0x1
        305ff0:	1afffff8 	bne	305fd8 <brk_right__FPsiT2+0x4>
        305ff4:	e1a00001 	mov	r0, r1
        305ff8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: brk_left__FPsiT2
 * Address: 00305ffc
 */
void globals::brk_left() {
    /*
        305ffc:	ea000000 	b	306004 <brk_left__FPsiT2+0x8>
        306000:	e2411001 	sub	r1, r1, #1	; 0x1
        306004:	e1510002 	cmp	r1, r2
        306008:	ba000003 	blt	30601c <brk_left__FPsiT2+0x20>
        30600c:	e7903081 	ldr	r3, [r0, r1, lsl #1]
        306010:	e1a03843 	mov	r3, r3, asr #16
        306014:	e3730001 	cmn	r3, #1	; 0x1
        306018:	1afffff8 	bne	306000 <brk_left__FPsiT2+0x4>
        30601c:	e1a00001 	mov	r0, r1
        306020:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: BlockKeyCommand(TView *, RefVar const &)
 * Address: 0030b3ec
 */
BlockKeyCommand(TView *, RefVar const &) {
    /*
        30b3ec:	e1a0c00d 	mov	ip, sp
        30b3f0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        30b3f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        30b3f8:	e1a05000 	mov	r5, r0
        30b3fc:	e3a02002 	mov	r2, #2	; 0x2
        30b400:	eb5f782a 	bl	1ae94b0 <$MatchKeyMessage(TView *, RefVar const &, unsigned long)>
        30b404:	eb62db50 	bl	1bc214c <$AllocateRefHandle(long)>
        30b408:	e1a04000 	mov	r4, r0
        30b40c:	e5900000 	ldr	r0, [r0]
        30b410:	eb62e7a5 	bl	1bc52ac <$Length(long)>
        30b414:	e1b07000 	movs	r7, r0
        30b418:	1a000002 	bne	30b428 <BlockKeyCommand(TView *, RefVar const &)+0x3c>
        30b41c:	e1a00004 	mov	r0, r4
        30b420:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        30b424:	ea62df64 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b428:	e24dd004 	sub	sp, sp, #4	; 0x4
        30b42c:	e59f102c 	ldr	r1, [pc, #2c]	; 30b460 <BlockKeyCommand(TView *, RefVar const &)+0x74>
        30b430:	e1a06001 	mov	r6, r1
        30b434:	e1a00005 	mov	r0, r5
        30b438:	eb62fc42 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        30b43c:	eb62db42 	bl	1bc214c <$AllocateRefHandle(long)>
        30b440:	e58d0000 	str	r0, [sp]
        30b444:	e5900000 	ldr	r0, [r0]
        30b448:	e3300002 	teq	r0, #2	; 0x2
        30b44c:	1a000005 	bne	30b468 <BlockKeyCommand(TView *, RefVar const &)+0x7c>
        30b450:	e59f000c 	ldr	r0, [pc, #c]	; 30b464 <BlockKeyCommand(TView *, RefVar const &)+0x78>
        30b454:	e3a01000 	mov	r1, #0	; 0x0
        30b458:	eb62db36 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        30b45c:	ea000006 	b	30b47c <BlockKeyCommand(TView *, RefVar const &)+0x90>
        30b460:	00685348 	rsbeq	r5, r8, r8, asr #6
        30b464:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        30b468:	eb62e7a0 	bl	1bc52f0 <$ObjectFlags(long)>
        30b46c:	e3100040 	tst	r0, #64	; 0x40
        30b470:	0a000003 	beq	30b484 <BlockKeyCommand(TView *, RefVar const &)+0x98>
        30b474:	e1a0000d 	mov	r0, sp
        30b478:	eb62db3b 	bl	1bc216c <$Clone(RefVar const &)>
        30b47c:	e59d1000 	ldr	r1, [sp]
        30b480:	e5810000 	str	r0, [r1]
        30b484:	e2850024 	add	r0, r5, #36	; 0x24
        30b488:	e1a0200d 	mov	r2, sp
        30b48c:	e1a01006 	mov	r1, r6
        30b490:	eb62ebb4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        30b494:	e3a00002 	mov	r0, #2	; 0x2
        30b498:	eb62db2b 	bl	1bc214c <$AllocateRefHandle(long)>
        30b49c:	e1a05000 	mov	r5, r0
        30b4a0:	e3a06000 	mov	r6, #0	; 0x0
        30b4a4:	e3570000 	cmp	r7, #0	; 0x0
        30b4a8:	da00002e 	ble	30b568 <BlockKeyCommand(TView *, RefVar const &)+0x17c>
        30b4ac:	e59fa0cc 	ldr	sl, [pc, #cc]	; 30b580 <BlockKeyCommand(TView *, RefVar const &)+0x194>
        30b4b0:	e59f90cc 	ldr	r9, [pc, #cc]	; 30b584 <BlockKeyCommand(TView *, RefVar const &)+0x198>
        30b4b4:	e59f80cc 	ldr	r8, [pc, #cc]	; 30b588 <BlockKeyCommand(TView *, RefVar const &)+0x19c>
        30b4b8:	e1a01006 	mov	r1, r6
        30b4bc:	e5940000 	ldr	r0, [r4]
        30b4c0:	eb62e363 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        30b4c4:	e5850000 	str	r0, [r5]
        30b4c8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        30b4cc:	e59f10b0 	ldr	r1, [pc, #b0]	; 30b584 <BlockKeyCommand(TView *, RefVar const &)+0x198>
        30b4d0:	e5911000 	ldr	r1, [r1]
        30b4d4:	e5911000 	ldr	r1, [r1]
        30b4d8:	eb62e360 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        30b4dc:	eb62db1a 	bl	1bc214c <$AllocateRefHandle(long)>
        30b4e0:	e58d0008 	str	r0, [sp, #8]
        30b4e4:	e59f009c 	ldr	r0, [pc, #9c]	; 30b588 <BlockKeyCommand(TView *, RefVar const &)+0x19c>
        30b4e8:	e5900000 	ldr	r0, [r0]
        30b4ec:	e5901000 	ldr	r1, [r0]
        30b4f0:	e5950000 	ldr	r0, [r5]
        30b4f4:	eb62e359 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        30b4f8:	eb62db13 	bl	1bc214c <$AllocateRefHandle(long)>
        30b4fc:	e58d0004 	str	r0, [sp, #4]
        30b500:	e1a0000a 	mov	r0, sl
        30b504:	eb62db18 	bl	1bc216c <$Clone(RefVar const &)>
        30b508:	eb62db0f 	bl	1bc214c <$AllocateRefHandle(long)>
        30b50c:	e58d0000 	str	r0, [sp]
        30b510:	e28d2008 	add	r2, sp, #8	; 0x8
        30b514:	e1a01009 	mov	r1, r9
        30b518:	e1a0000d 	mov	r0, sp
        30b51c:	eb62eb91 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        30b520:	e28d2004 	add	r2, sp, #4	; 0x4
        30b524:	e1a01008 	mov	r1, r8
        30b528:	e1a0000d 	mov	r0, sp
        30b52c:	eb62eb8d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        30b530:	e1a0100d 	mov	r1, sp
        30b534:	e28d000c 	add	r0, sp, #12	; 0xc
        30b538:	e3a02000 	mov	r2, #0	; 0x0
        30b53c:	eb63f7e6 	bl	1c094dc <$ArrayInsert__FRC6RefVarT1l>
        30b540:	e59d0000 	ldr	r0, [sp]
        30b544:	eb62df1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b548:	e59d0004 	ldr	r0, [sp, #4]
        30b54c:	eb62df1a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b550:	e59d0008 	ldr	r0, [sp, #8]
        30b554:	eb62df18 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b558:	e28dd00c 	add	sp, sp, #12	; 0xc
        30b55c:	e2866001 	add	r6, r6, #1	; 0x1
        30b560:	e1560007 	cmp	r6, r7
        30b564:	baffffd3 	blt	30b4b8 <BlockKeyCommand(TView *, RefVar const &)+0xcc>
        30b568:	e1a00005 	mov	r0, r5
        30b56c:	eb62df12 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b570:	e59d0000 	ldr	r0, [sp]
        30b574:	eb62df10 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30b578:	e28dd004 	add	sp, sp, #4	; 0x4
        30b57c:	eaffffa6 	b	30b41c <BlockKeyCommand(TView *, RefVar const &)+0x30>
        30b580:	00680440 	rsbeq	r0, r8, r0, asr #8
        30b584:	00682390 	streqb	r2, [r8], -#48
        30b588:	00683900 	rsbeq	r3, r8, r0, lsl #18
    */
}

/**
 * Symbol: BusyBoxSend(long)
 * Address: 0030dd60
 */
BusyBoxSend(long) {
    /*
        30dd60:	e1a0c00d 	mov	ip, sp
        30dd64:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30dd68:	e24cb004 	sub	fp, ip, #4	; 0x4
        30dd6c:	e1a04000 	mov	r4, r0
        30dd70:	e59f5068 	ldr	r5, [pc, #68]	; 30dde0 <BusyBoxSend(long)+0x80>
        30dd74:	e5950000 	ldr	r0, [r5]
        30dd78:	e3300000 	teq	r0, #0	; 0x0
        30dd7c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        30dd80:	e24dd010 	sub	sp, sp, #16	; 0x10
        30dd84:	e1a0000d 	mov	r0, sp
        30dd88:	eb63592a 	bl	1be4238 <TAEvent::$__ct(void)>
        30dd8c:	e59f0050 	ldr	r0, [pc, #50]	; 30dde4 <BusyBoxSend(long)+0x84>
        30dd90:	e58d0000 	str	r0, [sp]
        30dd94:	e59f004c 	ldr	r0, [pc, #4c]	; 30dde8 <BusyBoxSend(long)+0x88>
        30dd98:	e98d0011 	stmib	sp, {r0, r4}
        30dd9c:	e3a0e000 	mov	lr, #0	; 0x0
        30dda0:	e3a01000 	mov	r1, #0	; 0x0
        30dda4:	e3a03000 	mov	r3, #0	; 0x0
        30dda8:	e3a029a3 	mov	r2, #2670592	; 0x28c000
        30ddac:	e2822502 	add	r2, r2, #8388608	; 0x800000
        30ddb0:	e3a00000 	mov	r0, #0	; 0x0
        30ddb4:	e595c000 	ldr	ip, [r5]
        30ddb8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        30ddbc:	e1a0300e 	mov	r3, lr
        30ddc0:	e3a02010 	mov	r2, #16	; 0x10
        30ddc4:	e92d000c 	stmdb	sp!, {r2, r3}
        30ddc8:	e28d3018 	add	r3, sp, #24	; 0x18
        30ddcc:	e1a0000c 	mov	r0, ip
        30ddd0:	e3a02000 	mov	r2, #0	; 0x0
        30ddd4:	e3a01001 	mov	r1, #1	; 0x1
        30ddd8:	eb6333da 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        30dddc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        30dde0:	0c101658 	ldceq	6, cr1, [r0], -#352
        30dde4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        30dde8:	696e6b72 	stmvsdb	lr!, {r1, r4, r5, r6, r8, r9, fp, sp, lr}^
    */
}

/**
 * Symbol: BlockMove
 * Address: 00311104
 */
void globals::BlockMove() {
    /*
        311104:	e1a03000 	mov	r3, r0
        311108:	e1a00001 	mov	r0, r1
        31110c:	e1a01003 	mov	r1, r3
        311110:	ea628e4f 	b	1bb4a54 <$memmove>
    */
}

/**
 * Symbol: BoundsCheck(RefVar const &, long, unsigned int)
 * Address: 00315534
 */
BoundsCheck(RefVar const &, long, unsigned int) {
    /*
        315534:	e1a0c00d 	mov	ip, sp
        315538:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31553c:	e24cb004 	sub	fp, ip, #4	; 0x4
        315540:	e1a05000 	mov	r5, r0
        315544:	e1a04001 	mov	r4, r1
        315548:	e1a06002 	mov	r6, r2
        31554c:	e5900000 	ldr	r0, [r0]
        315550:	e5900000 	ldr	r0, [r0]
        315554:	e3100001 	tst	r0, #1	; 0x1
        315558:	0a00000a 	beq	315588 <BoundsCheck(RefVar const &, long, unsigned int)+0x54>
        31555c:	eb62bf63 	bl	1bc52f0 <$ObjectFlags(long)>
        315560:	e3100001 	tst	r0, #1	; 0x1
        315564:	1a000007 	bne	315588 <BoundsCheck(RefVar const &, long, unsigned int)+0x54>
        315568:	e3540000 	cmp	r4, #0	; 0x0
        31556c:	ba000005 	blt	315588 <BoundsCheck(RefVar const &, long, unsigned int)+0x54>
        315570:	e5950000 	ldr	r0, [r5]
        315574:	e5900000 	ldr	r0, [r0]
        315578:	eb62bf4b 	bl	1bc52ac <$Length(long)>
        31557c:	e0841006 	add	r1, r4, r6
        315580:	e1500001 	cmp	r0, r1
        315584:	a91ba870 	ldmgedb	fp, {r4, r5, r6, fp, sp, pc}
        315588:	e59f0014 	ldr	r0, [pc, #14]	; 3155a4 <BoundsCheck(RefVar const &, long, unsigned int)+0x70>
        31558c:	e5900000 	ldr	r0, [r0]
        315590:	e3a02000 	mov	r2, #0	; 0x0
        315594:	e3a010ae 	mov	r1, #174	; 0xae
        315598:	e2411cbd 	sub	r1, r1, #48384	; 0xbd00
        31559c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        3155a0:	ea6336fd 	b	1be319c <$Throw>
        3155a4:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

/**
 * Symbol: BoundsWriteCheck(RefVar const &, long, unsigned int)
 * Address: 003155a8
 */
BoundsWriteCheck(RefVar const &, long, unsigned int) {
    /*
        3155a8:	e1a0c00d 	mov	ip, sp
        3155ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        3155b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        3155b4:	e1a04000 	mov	r4, r0
        3155b8:	e1a05001 	mov	r5, r1
        3155bc:	e1a06002 	mov	r6, r2
        3155c0:	e5900000 	ldr	r0, [r0]
        3155c4:	e5900000 	ldr	r0, [r0]
        3155c8:	eb62bf48 	bl	1bc52f0 <$ObjectFlags(long)>
        3155cc:	e1a07000 	mov	r7, r0
        3155d0:	e5940000 	ldr	r0, [r4]
        3155d4:	e5900000 	ldr	r0, [r0]
        3155d8:	e3100001 	tst	r0, #1	; 0x1
        3155dc:	0a000007 	beq	315600 <BoundsWriteCheck(RefVar const &, long, unsigned int)+0x58>
        3155e0:	e3170001 	tst	r7, #1	; 0x1
        3155e4:	1a000005 	bne	315600 <BoundsWriteCheck(RefVar const &, long, unsigned int)+0x58>
        3155e8:	e3550000 	cmp	r5, #0	; 0x0
        3155ec:	ba000003 	blt	315600 <BoundsWriteCheck(RefVar const &, long, unsigned int)+0x58>
        3155f0:	eb62bf2d 	bl	1bc52ac <$Length(long)>
        3155f4:	e0851006 	add	r1, r5, r6
        3155f8:	e1500001 	cmp	r0, r1
        3155fc:	aa000005 	bge	315618 <BoundsWriteCheck(RefVar const &, long, unsigned int)+0x70>
        315600:	e59f002c 	ldr	r0, [pc, #2c]	; 315634 <BoundsWriteCheck(RefVar const &, long, unsigned int)+0x8c>
        315604:	e5900000 	ldr	r0, [r0]
        315608:	e3a02000 	mov	r2, #0	; 0x0
        31560c:	e3a010ae 	mov	r1, #174	; 0xae
        315610:	e2411cbd 	sub	r1, r1, #48384	; 0xbd00
        315614:	eb6336e0 	bl	1be319c <$Throw>
        315618:	e3170040 	tst	r7, #64	; 0x40
        31561c:	11a01004 	movne	r1, r4
        315620:	13a000aa 	movne	r0, #170	; 0xaa
        315624:	12400cbd 	subne	r0, r0, #48384	; 0xbd00
        315628:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        31562c:	1a5cbb00 	bne	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        315630:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        315634:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

/**
 * Symbol: BinaryMunger__FRC6RefVarlT2T1N22
 * Address: 00316164
 */
void globals::BinaryMunger() {
    /*
        316164:	e1a0c00d 	mov	ip, sp
        316168:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        31616c:	e24cb004 	sub	fp, ip, #4	; 0x4
        316170:	e1a04000 	mov	r4, r0
        316174:	e1a06001 	mov	r6, r1
        316178:	e1a05002 	mov	r5, r2
        31617c:	e1a07003 	mov	r7, r3
        316180:	e59b8008 	ldr	r8, [fp, #8]
        316184:	e59b9004 	ldr	r9, [fp, #4]
        316188:	e24dd004 	sub	sp, sp, #4	; 0x4
        31618c:	e5900000 	ldr	r0, [r0]
        316190:	e5900000 	ldr	r0, [r0]
        316194:	eb62bc55 	bl	1bc52f0 <$ObjectFlags(long)>
        316198:	e3100001 	tst	r0, #1	; 0x1
        31619c:	11a01004 	movne	r1, r4
        3161a0:	13a00fba 	movne	r0, #744	; 0x2e8
        3161a4:	12400903 	subne	r0, r0, #49152	; 0xc000
        3161a8:	1b63c8ab 	blne	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        3161ac:	e5970000 	ldr	r0, [r7]
        3161b0:	e5900000 	ldr	r0, [r0]
        3161b4:	e3300002 	teq	r0, #2	; 0x2
        3161b8:	0a000005 	beq	3161d4 <BinaryMunger__FRC6RefVarlT2T1N22+0x70>
        3161bc:	eb62bc4b 	bl	1bc52f0 <$ObjectFlags(long)>
        3161c0:	e3100001 	tst	r0, #1	; 0x1
        3161c4:	11a01007 	movne	r1, r7
        3161c8:	13a000e1 	movne	r0, #225	; 0xe1
        3161cc:	12400cbe 	subne	r0, r0, #48640	; 0xbe00
        3161d0:	1b63c8a1 	blne	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        3161d4:	e5940000 	ldr	r0, [r4]
        3161d8:	e5900000 	ldr	r0, [r0]
        3161dc:	e5971000 	ldr	r1, [r7]
        3161e0:	e5911000 	ldr	r1, [r1]
        3161e4:	eb62b811 	bl	1bc4230 <$EQRef__FlT1>
        3161e8:	e3300000 	teq	r0, #0	; 0x0
        3161ec:	11a01004 	movne	r1, r4
        3161f0:	13a000b2 	movne	r0, #178	; 0xb2
        3161f4:	12400cbd 	subne	r0, r0, #48384	; 0xbd00
        3161f8:	1b5cb80d 	blne	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        3161fc:	e5940000 	ldr	r0, [r4]
        316200:	e5900000 	ldr	r0, [r0]
        316204:	eb62bc39 	bl	1bc52f0 <$ObjectFlags(long)>
        316208:	e3100040 	tst	r0, #64	; 0x40
        31620c:	11a01004 	movne	r1, r4
        316210:	13a000aa 	movne	r0, #170	; 0xaa
        316214:	12400cbd 	subne	r0, r0, #48384	; 0xbd00
        316218:	1b5cb805 	blne	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        31621c:	e5940000 	ldr	r0, [r4]
        316220:	e5900000 	ldr	r0, [r0]
        316224:	eb62bc20 	bl	1bc52ac <$Length(long)>
        316228:	e1a0a000 	mov	sl, r0
        31622c:	e3750001 	cmn	r5, #1	; 0x1
        316230:	004a5006 	subeq	r5, sl, r6
        316234:	e3a00000 	mov	r0, #0	; 0x0
        316238:	e5971000 	ldr	r1, [r7]
        31623c:	e5911000 	ldr	r1, [r1]
        316240:	e3310002 	teq	r1, #2	; 0x2
        316244:	03a09000 	moveq	r9, #0	; 0x0
        316248:	03a08000 	moveq	r8, #0	; 0x0
        31624c:	0a000003 	beq	316260 <BinaryMunger__FRC6RefVarlT2T1N22+0xfc>
        316250:	e1a00001 	mov	r0, r1
        316254:	eb62bc14 	bl	1bc52ac <$Length(long)>
        316258:	e3780001 	cmn	r8, #1	; 0x1
        31625c:	00408009 	subeq	r8, r0, r9
        316260:	e3560000 	cmp	r6, #0	; 0x0
        316264:	b3a06000 	movlt	r6, #0	; 0x0
        316268:	ba000001 	blt	316274 <BinaryMunger__FRC6RefVarlT2T1N22+0x110>
        31626c:	e156000a 	cmp	r6, sl
        316270:	c1a0600a 	movgt	r6, sl
        316274:	e04a1006 	sub	r1, sl, r6
        316278:	e3550000 	cmp	r5, #0	; 0x0
        31627c:	e58d1000 	str	r1, [sp]
        316280:	b3a05000 	movlt	r5, #0	; 0x0
        316284:	ba000001 	blt	316290 <BinaryMunger__FRC6RefVarlT2T1N22+0x12c>
        316288:	e1550001 	cmp	r5, r1
        31628c:	c1a05001 	movgt	r5, r1
        316290:	e3590000 	cmp	r9, #0	; 0x0
        316294:	b3a09000 	movlt	r9, #0	; 0x0
        316298:	ba000001 	blt	3162a4 <BinaryMunger__FRC6RefVarlT2T1N22+0x140>
        31629c:	e1590000 	cmp	r9, r0
        3162a0:	c1a09000 	movgt	r9, r0
        3162a4:	e0400009 	sub	r0, r0, r9
        3162a8:	e3580000 	cmp	r8, #0	; 0x0
        3162ac:	b3a08000 	movlt	r8, #0	; 0x0
        3162b0:	ba000001 	blt	3162bc <BinaryMunger__FRC6RefVarlT2T1N22+0x158>
        3162b4:	e1580000 	cmp	r8, r0
        3162b8:	c1a08000 	movgt	r8, r0
        3162bc:	e0480005 	sub	r0, r8, r5
        3162c0:	e52d0004 	str	r0, [sp, -#4]!
        3162c4:	e3500000 	cmp	r0, #0	; 0x0
        3162c8:	da000003 	ble	3162dc <BinaryMunger__FRC6RefVarlT2T1N22+0x178>
        3162cc:	e59d0000 	ldr	r0, [sp]
        3162d0:	e08a1000 	add	r1, sl, r0
        3162d4:	e1a00004 	mov	r0, r4
        3162d8:	eb62c023 	bl	1bc636c <$SetLength(RefVar const &, long)>
        3162dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        3162e0:	e5940000 	ldr	r0, [r4]
        3162e4:	e5900000 	ldr	r0, [r0]
        3162e8:	eb62af9b 	bl	1bc215c <$BinaryData(long)>
        3162ec:	e58d0000 	str	r0, [sp]
        3162f0:	e5970000 	ldr	r0, [r7]
        3162f4:	e5900000 	ldr	r0, [r0]
        3162f8:	e3300002 	teq	r0, #2	; 0x2
        3162fc:	03a00000 	moveq	r0, #0	; 0x0
        316300:	0a000000 	beq	316308 <BinaryMunger__FRC6RefVarlT2T1N22+0x1a4>
        316304:	eb62af94 	bl	1bc215c <$BinaryData(long)>
        316308:	e1a07000 	mov	r7, r0
        31630c:	e59d0004 	ldr	r0, [sp, #4]
        316310:	e3300000 	teq	r0, #0	; 0x0
        316314:	0a000006 	beq	316334 <BinaryMunger__FRC6RefVarlT2T1N22+0x1d0>
        316318:	e59d0008 	ldr	r0, [sp, #8]
        31631c:	e0402005 	sub	r2, r0, r5
        316320:	e59d0000 	ldr	r0, [sp]
        316324:	e0800006 	add	r0, r0, r6
        316328:	e0801005 	add	r1, r0, r5
        31632c:	e0800008 	add	r0, r0, r8
        316330:	eb6279c7 	bl	1bb4a54 <$memmove>
        316334:	e3380000 	teq	r8, #0	; 0x0
        316338:	0a000004 	beq	316350 <BinaryMunger__FRC6RefVarlT2T1N22+0x1ec>
        31633c:	e0871009 	add	r1, r7, r9
        316340:	e59d0000 	ldr	r0, [sp]
        316344:	e0800006 	add	r0, r0, r6
        316348:	e1a02008 	mov	r2, r8
        31634c:	eb6279bf 	bl	1bb4a50 <$memcpy>
        316350:	e59d0004 	ldr	r0, [sp, #4]
        316354:	e3500000 	cmp	r0, #0	; 0x0
        316358:	aa000003 	bge	31636c <BinaryMunger__FRC6RefVarlT2T1N22+0x208>
        31635c:	e59d0004 	ldr	r0, [sp, #4]
        316360:	e08a1000 	add	r1, sl, r0
        316364:	e1a00004 	mov	r0, r4
        316368:	eb62bfff 	bl	1bc636c <$SetLength(RefVar const &, long)>
        31636c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BSearchRight__FRC6RefVarT1P21TGeneralizedTestFnVar
 * Address: 0031732c
 */
void globals::BSearchRight() {
    /*
        31732c:	e1a0c00d 	mov	ip, sp
        317330:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        317334:	e24cb004 	sub	fp, ip, #4	; 0x4
        317338:	e1a04000 	mov	r4, r0
        31733c:	e1a05002 	mov	r5, r2
        317340:	eb637191 	bl	1bf398c <$IsArray(RefVar const &)>
        317344:	e3300000 	teq	r0, #0	; 0x0
        317348:	01a01004 	moveq	r1, r4
        31734c:	059f00d0 	ldreq	r0, [pc, #d0]	; 317424 <BSearchRight__FRC6RefVarT1P21TGeneralizedTestFnVar+0xf8>
        317350:	0b63c441 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        317354:	e3a09000 	mov	r9, #0	; 0x0
        317358:	e5940000 	ldr	r0, [r4]
        31735c:	e5900000 	ldr	r0, [r0]
        317360:	eb62b7d1 	bl	1bc52ac <$Length(long)>
        317364:	e2406001 	sub	r6, r0, #1	; 0x1
        317368:	e5940000 	ldr	r0, [r4]
        31736c:	e5900000 	ldr	r0, [r0]
        317370:	eb62b7cf 	bl	1bc52b4 <$LockRef(long)>
        317374:	e3a00000 	mov	r0, #0	; 0x0
        317378:	e3a0a000 	mov	sl, #0	; 0x0
        31737c:	e52d006c 	str	r0, [sp, -#108]!
        317380:	e28d0008 	add	r0, sp, #8	; 0x8
        317384:	eb626d7a 	bl	1bb2974 <$setjmp>
        317388:	e3300000 	teq	r0, #0	; 0x0
        31738c:	1a000025 	bne	317428 <BSearchRight__FRC6RefVarT1P21TGeneralizedTestFnVar+0xfc>
        317390:	e1a0000d 	mov	r0, sp
        317394:	eb632338 	bl	1be007c <$AddExceptionHandler>
        317398:	e24dd004 	sub	sp, sp, #4	; 0x4
        31739c:	e5940000 	ldr	r0, [r4]
        3173a0:	e5900000 	ldr	r0, [r0]
        3173a4:	eb62bbf3 	bl	1bc6378 <$Slots(long)>
        3173a8:	e58d0000 	str	r0, [sp]
        3173ac:	e3a00002 	mov	r0, #2	; 0x2
        3173b0:	eb62ab65 	bl	1bc214c <$AllocateRefHandle(long)>
        3173b4:	e1a08000 	mov	r8, r0
        3173b8:	e3560000 	cmp	r6, #0	; 0x0
        3173bc:	ba000012 	blt	31740c <BSearchRight__FRC6RefVarT1P21TGeneralizedTestFnVar+0xe0>
        3173c0:	e0897006 	add	r7, r9, r6
        3173c4:	e0877fa7 	add	r7, r7, r7, lsr #31
        3173c8:	e1a070c7 	mov	r7, r7, asr #1
        3173cc:	e59d0000 	ldr	r0, [sp]
        3173d0:	e0801107 	add	r1, r0, r7, lsl #2
        3173d4:	e1a00005 	mov	r0, r5
        3173d8:	eb5ce937 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        3173dc:	e5880000 	str	r0, [r8]
        3173e0:	e51b1030 	ldr	r1, [fp, -#48]
        3173e4:	e5911000 	ldr	r1, [r1]
        3173e8:	e1a02008 	mov	r2, r8
        3173ec:	e1a00005 	mov	r0, r5
        3173f0:	e1a0e00f 	mov	lr, pc
        3173f4:	e595f020 	ldr	pc, [r5, #32]
        3173f8:	e3500000 	cmp	r0, #0	; 0x0
        3173fc:	a2879001 	addge	r9, r7, #1	; 0x1
        317400:	b2476001 	sublt	r6, r7, #1	; 0x1
        317404:	e1590006 	cmp	r9, r6
        317408:	daffffec 	ble	3173c0 <BSearchRight__FRC6RefVarT1P21TGeneralizedTestFnVar+0x94>
        31740c:	e1a00008 	mov	r0, r8
        317410:	eb62af69 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        317414:	e28dd004 	add	sp, sp, #4	; 0x4
        317418:	e1a0000d 	mov	r0, sp
        31741c:	eb632725 	bl	1be10b8 <$ExitHandler>
        317420:	ea000001 	b	31742c <BSearchRight__FRC6RefVarT1P21TGeneralizedTestFnVar+0x100>
        317424:	ffff42ef 	swinv	0x00ff42ef
        317428:	e3a0a001 	mov	sl, #1	; 0x1
        31742c:	e5940000 	ldr	r0, [r4]
        317430:	e5900000 	ldr	r0, [r0]
        317434:	eb62c40d 	bl	1bc8470 <$UnlockRef(long)>
        317438:	e33a0000 	teq	sl, #0	; 0x0
        31743c:	11a0000d 	movne	r0, sp
        317440:	1b632b43 	blne	1be2154 <$NextHandler>
        317444:	e1a00006 	mov	r0, r6
        317448:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BSearchLeft__FRC6RefVarT1P21TGeneralizedTestFnVar
 * Address: 003174c4
 */
void globals::BSearchLeft() {
    /*
        3174c4:	e1a0c00d 	mov	ip, sp
        3174c8:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3174cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3174d0:	e1a04000 	mov	r4, r0
        3174d4:	e1a05002 	mov	r5, r2
        3174d8:	eb63712b 	bl	1bf398c <$IsArray(RefVar const &)>
        3174dc:	e3300000 	teq	r0, #0	; 0x0
        3174e0:	01a01004 	moveq	r1, r4
        3174e4:	059f00d0 	ldreq	r0, [pc, #d0]	; 3175bc <BSearchLeft__FRC6RefVarT1P21TGeneralizedTestFnVar+0xf8>
        3174e8:	0b63c3db 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        3174ec:	e3a06000 	mov	r6, #0	; 0x0
        3174f0:	e5940000 	ldr	r0, [r4]
        3174f4:	e5900000 	ldr	r0, [r0]
        3174f8:	eb62b76b 	bl	1bc52ac <$Length(long)>
        3174fc:	e2407001 	sub	r7, r0, #1	; 0x1
        317500:	e5940000 	ldr	r0, [r4]
        317504:	e5900000 	ldr	r0, [r0]
        317508:	eb62b769 	bl	1bc52b4 <$LockRef(long)>
        31750c:	e3a00000 	mov	r0, #0	; 0x0
        317510:	e3a0a000 	mov	sl, #0	; 0x0
        317514:	e52d006c 	str	r0, [sp, -#108]!
        317518:	e28d0008 	add	r0, sp, #8	; 0x8
        31751c:	eb626d14 	bl	1bb2974 <$setjmp>
        317520:	e3300000 	teq	r0, #0	; 0x0
        317524:	1a000025 	bne	3175c0 <BSearchLeft__FRC6RefVarT1P21TGeneralizedTestFnVar+0xfc>
        317528:	e1a0000d 	mov	r0, sp
        31752c:	eb6322d2 	bl	1be007c <$AddExceptionHandler>
        317530:	e24dd004 	sub	sp, sp, #4	; 0x4
        317534:	e5940000 	ldr	r0, [r4]
        317538:	e5900000 	ldr	r0, [r0]
        31753c:	eb62bb8d 	bl	1bc6378 <$Slots(long)>
        317540:	e58d0000 	str	r0, [sp]
        317544:	e3a00002 	mov	r0, #2	; 0x2
        317548:	eb62aaff 	bl	1bc214c <$AllocateRefHandle(long)>
        31754c:	e1a09000 	mov	r9, r0
        317550:	e3570000 	cmp	r7, #0	; 0x0
        317554:	ba000012 	blt	3175a4 <BSearchLeft__FRC6RefVarT1P21TGeneralizedTestFnVar+0xe0>
        317558:	e0868007 	add	r8, r6, r7
        31755c:	e0888fa8 	add	r8, r8, r8, lsr #31
        317560:	e1a080c8 	mov	r8, r8, asr #1
        317564:	e59d0000 	ldr	r0, [sp]
        317568:	e0801108 	add	r1, r0, r8, lsl #2
        31756c:	e1a00005 	mov	r0, r5
        317570:	eb5ce8d1 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        317574:	e5890000 	str	r0, [r9]
        317578:	e51b1030 	ldr	r1, [fp, -#48]
        31757c:	e5911000 	ldr	r1, [r1]
        317580:	e1a02009 	mov	r2, r9
        317584:	e1a00005 	mov	r0, r5
        317588:	e1a0e00f 	mov	lr, pc
        31758c:	e595f020 	ldr	pc, [r5, #32]
        317590:	e3500000 	cmp	r0, #0	; 0x0
        317594:	d2487001 	suble	r7, r8, #1	; 0x1
        317598:	c2886001 	addgt	r6, r8, #1	; 0x1
        31759c:	e1560007 	cmp	r6, r7
        3175a0:	daffffec 	ble	317558 <BSearchLeft__FRC6RefVarT1P21TGeneralizedTestFnVar+0x94>
        3175a4:	e1a00009 	mov	r0, r9
        3175a8:	eb62af03 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3175ac:	e28dd004 	add	sp, sp, #4	; 0x4
        3175b0:	e1a0000d 	mov	r0, sp
        3175b4:	eb6326bf 	bl	1be10b8 <$ExitHandler>
        3175b8:	ea000001 	b	3175c4 <BSearchLeft__FRC6RefVarT1P21TGeneralizedTestFnVar+0x100>
        3175bc:	ffff42ef 	swinv	0x00ff42ef
        3175c0:	e3a0a001 	mov	sl, #1	; 0x1
        3175c4:	e5940000 	ldr	r0, [r4]
        3175c8:	e5900000 	ldr	r0, [r0]
        3175cc:	eb62c3a7 	bl	1bc8470 <$UnlockRef(long)>
        3175d0:	e33a0000 	teq	sl, #0	; 0x0
        3175d4:	11a0000d 	movne	r0, sp
        3175d8:	1b632add 	blne	1be2154 <$NextHandler>
        3175dc:	e1a00006 	mov	r0, r6
        3175e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BinEqual__FRC6RefVarT1
 * Address: 00318468
 */
void globals::BinEqual() {
    /*
        318468:	e1a0c00d 	mov	ip, sp
        31846c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        318470:	e24cb004 	sub	fp, ip, #4	; 0x4
        318474:	e1a05000 	mov	r5, r0
        318478:	e1a04001 	mov	r4, r1
        31847c:	eb63b38f 	bl	1c052c0 <$IsBinary(RefVar const &)>
        318480:	e3a06fba 	mov	r6, #744	; 0x2e8
        318484:	e2466903 	sub	r6, r6, #49152	; 0xc000
        318488:	e3300000 	teq	r0, #0	; 0x0
        31848c:	01a01005 	moveq	r1, r5
        318490:	01a00006 	moveq	r0, r6
        318494:	0b63bff0 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        318498:	e1a00004 	mov	r0, r4
        31849c:	eb63b387 	bl	1c052c0 <$IsBinary(RefVar const &)>
        3184a0:	e3300000 	teq	r0, #0	; 0x0
        3184a4:	01a01004 	moveq	r1, r4
        3184a8:	01a00006 	moveq	r0, r6
        3184ac:	0b63bfea 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        3184b0:	e5950000 	ldr	r0, [r5]
        3184b4:	e5900000 	ldr	r0, [r0]
        3184b8:	eb62b37b 	bl	1bc52ac <$Length(long)>
        3184bc:	e1a06000 	mov	r6, r0
        3184c0:	e5940000 	ldr	r0, [r4]
        3184c4:	e5900000 	ldr	r0, [r0]
        3184c8:	eb62b377 	bl	1bc52ac <$Length(long)>
        3184cc:	e1300006 	teq	r0, r6
        3184d0:	1a00000c 	bne	318508 <BinEqual__FRC6RefVarT1+0xa0>
        3184d4:	e5940000 	ldr	r0, [r4]
        3184d8:	e5900000 	ldr	r0, [r0]
        3184dc:	eb62a71e 	bl	1bc215c <$BinaryData(long)>
        3184e0:	e1a04000 	mov	r4, r0
        3184e4:	e5950000 	ldr	r0, [r5]
        3184e8:	e5900000 	ldr	r0, [r0]
        3184ec:	eb62a71a 	bl	1bc215c <$BinaryData(long)>
        3184f0:	e1a02006 	mov	r2, r6
        3184f4:	e1a01004 	mov	r1, r4
        3184f8:	eb627153 	bl	1bb4a4c <$memcmp>
        3184fc:	e3300000 	teq	r0, #0	; 0x0
        318500:	03a00001 	moveq	r0, #1	; 0x1
        318504:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        318508:	e3a00000 	mov	r0, #0	; 0x0
        31850c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: BlockStatistics(char *, unsigned long *, unsigned char *)
 * Address: 0031c538
 */
BlockStatistics(char *, unsigned long *, unsigned char *) {
    /*
        31c538:	e1a03002 	mov	r3, r2
        31c53c:	e1a02001 	mov	r2, r1
        31c540:	e1a01000 	mov	r1, r0
        31c544:	e59f0004 	ldr	r0, [pc, #4]	; 31c550 <BlockStatistics(char *, unsigned long *, unsigned char *)+0x18>
        31c548:	e5900000 	ldr	r0, [r0]
        31c54c:	ea5cd4e1 	b	1a518d8 <TObjectHeap::$BlockStatistics(ObjHeader *, unsigned long *, unsigned char *)>
        31c550:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: BinaryData(long)
 * Address: 0031e684
 */
BinaryData(long) {
    /*
        31e684:	e1a0c00d 	mov	ip, sp
        31e688:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        31e68c:	e24cb004 	sub	fp, ip, #4	; 0x4
        31e690:	eb629b17 	bl	1bc52f4 <$ObjectPtr(long)>
        31e694:	e5901000 	ldr	r1, [r0]
        31e698:	e2011003 	and	r1, r1, #3	; 0x3
        31e69c:	e3310002 	teq	r1, #2	; 0x2
        31e6a0:	1280000c 	addne	r0, r0, #12	; 0xc
        31e6a4:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        31e6a8:	e1a01000 	mov	r1, r0
        31e6ac:	e2800010 	add	r0, r0, #16	; 0x10
        31e6b0:	e591100c 	ldr	r1, [r1, #12]
        31e6b4:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        31e6b8:	e591f004 	ldr	pc, [r1, #4]
    */
}

/**
 * Symbol: BumpOval(OvalRec *, long)
 * Address: 00320994
 */
BumpOval(OvalRec *, long) {
    /*
        320994:	e1a0c00d 	mov	ip, sp
        320998:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        32099c:	e24cb004 	sub	fp, ip, #4	; 0x4
        3209a0:	e1a04000 	mov	r4, r0
        3209a4:	e24dd020 	sub	sp, sp, #32	; 0x20
        3209a8:	e5900000 	ldr	r0, [r0]
        3209ac:	e1510000 	cmp	r1, r0
        3209b0:	ba000042 	blt	320ac0 <BumpOval(OvalRec *, long)+0x12c>
        3209b4:	e5940004 	ldr	r0, [r4, #4]
        3209b8:	e1500001 	cmp	r0, r1
        3209bc:	da00003f 	ble	320ac0 <BumpOval(OvalRec *, long)+0x12c>
        3209c0:	e5940008 	ldr	r0, [r4, #8]
        3209c4:	e1a0a000 	mov	sl, r0
        3209c8:	e2800002 	add	r0, r0, #2	; 0x2
        3209cc:	e5840008 	str	r0, [r4, #8]
        3209d0:	e28d0010 	add	r0, sp, #16	; 0x10
        3209d4:	e594600c 	ldr	r6, [r4, #12]
        3209d8:	e2849010 	add	r9, r4, #16	; 0x10
        3209dc:	e8991008 	ldmia	r9, {r3, ip}
        3209e0:	e8801008 	stmia	r0, {r3, ip}
        3209e4:	e28d0008 	add	r0, sp, #8	; 0x8
        3209e8:	e2841018 	add	r1, r4, #24	; 0x18
        3209ec:	e58d101c 	str	r1, [sp, #28]
        3209f0:	e8911008 	ldmia	r1, {r3, ip}
        3209f4:	e8801008 	stmia	r0, {r3, ip}
        3209f8:	e2841020 	add	r1, r4, #32	; 0x20
        3209fc:	e58d1018 	str	r1, [sp, #24]
        320a00:	e8911008 	ldmia	r1, {r3, ip}
        320a04:	e88d1008 	stmia	sp, {r3, ip}
        320a08:	e284802c 	add	r8, r4, #44	; 0x2c
        320a0c:	e8980120 	ldmia	r8, {r5, r8}
        320a10:	e5947028 	ldr	r7, [r4, #40]
        320a14:	e59d0010 	ldr	r0, [sp, #16]
        320a18:	e1500006 	cmp	r0, r6
        320a1c:	aa00000a 	bge	320a4c <BumpOval(OvalRec *, long)+0xb8>
        320a20:	e0855008 	add	r5, r5, r8
        320a24:	e0477008 	sub	r7, r7, r8
        320a28:	e28d1010 	add	r1, sp, #16	; 0x10
        320a2c:	e28d0008 	add	r0, sp, #8	; 0x8
        320a30:	eb630193 	bl	1be1084 <$CompAdd>
        320a34:	e28d1008 	add	r1, sp, #8	; 0x8
        320a38:	e1a0000d 	mov	r0, sp
        320a3c:	eb630190 	bl	1be1084 <$CompAdd>
        320a40:	e59d0010 	ldr	r0, [sp, #16]
        320a44:	e1500006 	cmp	r0, r6
        320a48:	bafffff4 	blt	320a20 <BumpOval(OvalRec *, long)+0x8c>
        320a4c:	e59d0010 	ldr	r0, [sp, #16]
        320a50:	e1500006 	cmp	r0, r6
        320a54:	da00000a 	ble	320a84 <BumpOval(OvalRec *, long)+0xf0>
        320a58:	e0455008 	sub	r5, r5, r8
        320a5c:	e0877008 	add	r7, r7, r8
        320a60:	e28d1008 	add	r1, sp, #8	; 0x8
        320a64:	e1a0000d 	mov	r0, sp
        320a68:	eb63018b 	bl	1be109c <$CompSub>
        320a6c:	e28d1010 	add	r1, sp, #16	; 0x10
        320a70:	e28d0008 	add	r0, sp, #8	; 0x8
        320a74:	eb630188 	bl	1be109c <$CompSub>
        320a78:	e59d0010 	ldr	r0, [sp, #16]
        320a7c:	e1500006 	cmp	r0, r6
        320a80:	cafffff4 	bgt	320a58 <BumpOval(OvalRec *, long)+0xc4>
        320a84:	e28a0001 	add	r0, sl, #1	; 0x1
        320a88:	e0460100 	sub	r0, r6, r0, lsl #2
        320a8c:	e584000c 	str	r0, [r4, #12]
        320a90:	e28d0010 	add	r0, sp, #16	; 0x10
        320a94:	e8901008 	ldmia	r0, {r3, ip}
        320a98:	e8891008 	stmia	r9, {r3, ip}
        320a9c:	e59d101c 	ldr	r1, [sp, #28]
        320aa0:	e28d0008 	add	r0, sp, #8	; 0x8
        320aa4:	e8901008 	ldmia	r0, {r3, ip}
        320aa8:	e8811008 	stmia	r1, {r3, ip}
        320aac:	e59d1018 	ldr	r1, [sp, #24]
        320ab0:	e89d1008 	ldmia	sp, {r3, ip}
        320ab4:	e8811008 	stmia	r1, {r3, ip}
        320ab8:	e5a47028 	str	r7, [r4, #40]!
        320abc:	e5845004 	str	r5, [r4, #4]
        320ac0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: BlackOrWhitePat(PixelMap **)
 * Address: 003286e8
 */
BlackOrWhitePat(PixelMap **) {
    /*
        3286e8:	e1a0c00d 	mov	ip, sp
        3286ec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3286f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        3286f4:	e5900000 	ldr	r0, [r0]
        3286f8:	e1a04000 	mov	r4, r0
        3286fc:	eb638fc1 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        328700:	e4d01001 	ldrb	r1, [r0], #1
        328704:	e1a03000 	mov	r3, r0
        328708:	e3a00000 	mov	r0, #0	; 0x0
        32870c:	e3310000 	teq	r1, #0	; 0x0
        328710:	133100ff 	teqne	r1, #255	; 0xff
        328714:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        328718:	e5942004 	ldr	r2, [r4, #4]
        32871c:	e1a02842 	mov	r2, r2, asr #16
        328720:	e594c00c 	ldr	ip, [r4, #12]
        328724:	e1a0c84c 	mov	ip, ip, asr #16
        328728:	e594e008 	ldr	lr, [r4, #8]
        32872c:	e04cc84e 	sub	ip, ip, lr, asr #16
        328730:	e002029c 	mul	r2, ip, r2
        328734:	e2422001 	sub	r2, r2, #1	; 0x1
        328738:	e3520000 	cmp	r2, #0	; 0x0
        32873c:	da000005 	ble	328758 <BlackOrWhitePat(PixelMap **)+0x70>
        328740:	e4d3c001 	ldrb	ip, [r3], #1
        328744:	e13c0001 	teq	ip, r1
        328748:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        32874c:	e2422001 	sub	r2, r2, #1	; 0x1
        328750:	e3520000 	cmp	r2, #0	; 0x0
        328754:	cafffff9 	bgt	328740 <BlackOrWhitePat(PixelMap **)+0x58>
        328758:	e3310000 	teq	r1, #0	; 0x0
        32875c:	13a00001 	movne	r0, #1	; 0x1
        328760:	03a00002 	moveq	r0, #2	; 0x2
        328764:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: Box_Cover__FP8low_typeP12POINTS_GROUPT2
 * Address: 0032cc9c
 */
void globals::Box_Cover() {
    /*
        32cc9c:	e1a0c00d 	mov	ip, sp
        32cca0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        32cca4:	e24cb004 	sub	fp, ip, #4	; 0x4
        32cca8:	e24dd020 	sub	sp, sp, #32	; 0x20
        32ccac:	e5b09034 	ldr	r9, [r0, #52]!
        32ccb0:	e5904004 	ldr	r4, [r0, #4]
        32ccb4:	e5917000 	ldr	r7, [r1]
        32ccb8:	e1a07847 	mov	r7, r7, asr #16
        32ccbc:	e5915002 	ldr	r5, [r1, #2]
        32ccc0:	e1a05845 	mov	r5, r5, asr #16
        32ccc4:	e5928000 	ldr	r8, [r2]
        32ccc8:	e1a08848 	mov	r8, r8, asr #16
        32cccc:	e5926002 	ldr	r6, [r2, #2]
        32ccd0:	e1a06846 	mov	r6, r6, asr #16
        32ccd4:	e28d3018 	add	r3, sp, #24	; 0x18
        32ccd8:	e92d0008 	stmdb	sp!, {r3}
        32ccdc:	e28d3020 	add	r3, sp, #32	; 0x20
        32cce0:	e1a02004 	mov	r2, r4
        32cce4:	e1a01005 	mov	r1, r5
        32cce8:	e1a00007 	mov	r0, r7
        32ccec:	eb5fe59b 	bl	1b26360 <$yMinMax__FiT1PsN23>
        32ccf0:	e28dd004 	add	sp, sp, #4	; 0x4
        32ccf4:	e28d3010 	add	r3, sp, #16	; 0x10
        32ccf8:	e92d0008 	stmdb	sp!, {r3}
        32ccfc:	e28d3018 	add	r3, sp, #24	; 0x18
        32cd00:	e1a02004 	mov	r2, r4
        32cd04:	e1a01006 	mov	r1, r6
        32cd08:	e1a00008 	mov	r0, r8
        32cd0c:	eb5fe593 	bl	1b26360 <$yMinMax__FiT1PsN23>
        32cd10:	e28dd004 	add	sp, sp, #4	; 0x4
        32cd14:	e28d3008 	add	r3, sp, #8	; 0x8
        32cd18:	e28d200c 	add	r2, sp, #12	; 0xc
        32cd1c:	e92d000c 	stmdb	sp!, {r2, r3}
        32cd20:	e1a03004 	mov	r3, r4
        32cd24:	e1a02009 	mov	r2, r9
        32cd28:	e1a01005 	mov	r1, r5
        32cd2c:	e1a00007 	mov	r0, r7
        32cd30:	eb5fe589 	bl	1b2635c <$xMinMax__FiT1PsN33>
        32cd34:	e28dd008 	add	sp, sp, #8	; 0x8
        32cd38:	e1a0300d 	mov	r3, sp
        32cd3c:	e28d2004 	add	r2, sp, #4	; 0x4
        32cd40:	e92d000c 	stmdb	sp!, {r2, r3}
        32cd44:	e1a03004 	mov	r3, r4
        32cd48:	e1a02009 	mov	r2, r9
        32cd4c:	e1a01006 	mov	r1, r6
        32cd50:	e1a00008 	mov	r0, r8
        32cd54:	eb5fe580 	bl	1b2635c <$xMinMax__FiT1PsN33>
        32cd58:	e28dd008 	add	sp, sp, #8	; 0x8
        32cd5c:	e59d000c 	ldr	r0, [sp, #12]
        32cd60:	e1a00840 	mov	r0, r0, asr #16
        32cd64:	e59d1004 	ldr	r1, [sp, #4]
        32cd68:	e1500841 	cmp	r0, r1, asr #16
        32cd6c:	ca00000e 	bgt	32cdac <Box_Cover__FP8low_typeP12POINTS_GROUPT2+0x110>
        32cd70:	e59d0008 	ldr	r0, [sp, #8]
        32cd74:	e1a00840 	mov	r0, r0, asr #16
        32cd78:	e59d1000 	ldr	r1, [sp]
        32cd7c:	e1500841 	cmp	r0, r1, asr #16
        32cd80:	a59d1018 	ldrge	r1, [sp, #24]
        32cd84:	a1a01841 	movge	r1, r1, asr #16
        32cd88:	a59d0010 	ldrge	r0, [sp, #16]
        32cd8c:	a1510840 	cmpge	r1, r0, asr #16
        32cd90:	ba000005 	blt	32cdac <Box_Cover__FP8low_typeP12POINTS_GROUPT2+0x110>
        32cd94:	e59d001c 	ldr	r0, [sp, #28]
        32cd98:	e1a00840 	mov	r0, r0, asr #16
        32cd9c:	e59d1014 	ldr	r1, [sp, #20]
        32cda0:	e1500841 	cmp	r0, r1, asr #16
        32cda4:	d3a00001 	movle	r0, #1	; 0x1
        32cda8:	da000000 	ble	32cdb0 <Box_Cover__FP8low_typeP12POINTS_GROUPT2+0x114>
        32cdac:	e3a00000 	mov	r0, #0	; 0x0
        32cdb0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: BoxSmallOK__FsT1PsT3
 * Address: 0032dcdc
 */
void globals::BoxSmallOK() {
    /*
        32dcdc:	e1a0c00d 	mov	ip, sp
        32dce0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        32dce4:	e24cb004 	sub	fp, ip, #4	; 0x4
        32dce8:	e1a0c003 	mov	ip, r3
        32dcec:	e1a0e800 	mov	lr, r0, lsl #16
        32dcf0:	e1a0e84e 	mov	lr, lr, asr #16
        32dcf4:	e1a00801 	mov	r0, r1, lsl #16
        32dcf8:	e1a00840 	mov	r0, r0, asr #16
        32dcfc:	e24dd008 	sub	sp, sp, #8	; 0x8
        32dd00:	e1a0300d 	mov	r3, sp
        32dd04:	e92d0008 	stmdb	sp!, {r3}
        32dd08:	e1a03000 	mov	r3, r0
        32dd0c:	e1a0100c 	mov	r1, ip
        32dd10:	e1a00002 	mov	r0, r2
        32dd14:	e1a0200e 	mov	r2, lr
        32dd18:	eb5fc8c1 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        32dd1c:	e28dd004 	add	sp, sp, #4	; 0x4
        32dd20:	e59d1004 	ldr	r1, [sp, #4]
        32dd24:	e1a01841 	mov	r1, r1, asr #16
        32dd28:	e59d0000 	ldr	r0, [sp]
        32dd2c:	e0410840 	sub	r0, r1, r0, asr #16
        32dd30:	e350001b 	cmp	r0, #27	; 0x1b
        32dd34:	b59d1006 	ldrlt	r1, [sp, #6]
        32dd38:	b1a01841 	movlt	r1, r1, asr #16
        32dd3c:	b59d0002 	ldrlt	r0, [sp, #2]
        32dd40:	b0410840 	sublt	r0, r1, r0, asr #16
        32dd44:	b350001b 	cmplt	r0, #27	; 0x1b
        32dd48:	a3a00000 	movge	r0, #0	; 0x0
        32dd4c:	b3a00001 	movlt	r0, #1	; 0x1
        32dd50:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: BildHigh__FsT1Ps
 * Address: 0032e65c
 */
void globals::BildHigh() {
    /*
        32e65c:	e1a0c00d 	mov	ip, sp
        32e660:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        32e664:	e24cb004 	sub	fp, ip, #4	; 0x4
        32e668:	e1a04002 	mov	r4, r2
        32e66c:	e1a00800 	mov	r0, r0, lsl #16
        32e670:	e1a00840 	mov	r0, r0, asr #16
        32e674:	e1a01801 	mov	r1, r1, lsl #16
        32e678:	e1a01841 	mov	r1, r1, asr #16
        32e67c:	e3a05001 	mov	r5, #1	; 0x1
        32e680:	e3a02046 	mov	r2, #70	; 0x46
        32e684:	e2822c27 	add	r2, r2, #9984	; 0x2700
        32e688:	e3a06027 	mov	r6, #39	; 0x27
        32e68c:	e1500002 	cmp	r0, r2
        32e690:	c5c42001 	strgtb	r2, [r4, #1]
        32e694:	c5c46000 	strgtb	r6, [r4]
        32e698:	d5c40001 	strleb	r0, [r4, #1]
        32e69c:	d1a00440 	movle	r0, r0, asr #8
        32e6a0:	d5c40000 	strleb	r0, [r4]
        32e6a4:	e3a00036 	mov	r0, #54	; 0x36
        32e6a8:	e2800b0a 	add	r0, r0, #10240	; 0x2800
        32e6ac:	e1510000 	cmp	r1, r0
        32e6b0:	b5c40015 	strltb	r0, [r4, #21]
        32e6b4:	b3a00028 	movlt	r0, #40	; 0x28
        32e6b8:	a5c41015 	strgeb	r1, [r4, #21]
        32e6bc:	a1a00441 	movge	r0, r1, asr #8
        32e6c0:	e5c40014 	strb	r0, [r4, #20]
        32e6c4:	e5941000 	ldr	r1, [r4]
        32e6c8:	e1a01841 	mov	r1, r1, asr #16
        32e6cc:	e241006a 	sub	r0, r1, #106	; 0x6a
        32e6d0:	e2800b0a 	add	r0, r0, #10240	; 0x2800
        32e6d4:	e0800fa0 	add	r0, r0, r0, lsr #31
        32e6d8:	e1a000c0 	mov	r0, r0, asr #1
        32e6dc:	e5c40003 	strb	r0, [r4, #3]
        32e6e0:	e1a00440 	mov	r0, r0, asr #8
        32e6e4:	e5c40002 	strb	r0, [r4, #2]
        32e6e8:	e3a00005 	mov	r0, #5	; 0x5
        32e6ec:	eb621093 	bl	1bb2940 <$__rt_sdiv>
        32e6f0:	e2400055 	sub	r0, r0, #85	; 0x55
        32e6f4:	e2800a02 	add	r0, r0, #8192	; 0x2000
        32e6f8:	e5c40005 	strb	r0, [r4, #5]
        32e6fc:	e1a00440 	mov	r0, r0, asr #8
        32e700:	e5c40004 	strb	r0, [r4, #4]
        32e704:	e3a00096 	mov	r0, #150	; 0x96
        32e708:	e5c40007 	strb	r0, [r4, #7]
        32e70c:	e5c46006 	strb	r6, [r4, #6]
        32e710:	e3a000a9 	mov	r0, #169	; 0xa9
        32e714:	e5c40009 	strb	r0, [r4, #9]
        32e718:	e5c46008 	strb	r6, [r4, #8]
        32e71c:	e3a000be 	mov	r0, #190	; 0xbe
        32e720:	e5c4000b 	strb	r0, [r4, #11]
        32e724:	e5c4600a 	strb	r6, [r4, #10]
        32e728:	e3a000d1 	mov	r0, #209	; 0xd1
        32e72c:	e5c4000d 	strb	r0, [r4, #13]
        32e730:	e5c4600c 	strb	r6, [r4, #12]
        32e734:	e3a000e6 	mov	r0, #230	; 0xe6
        32e738:	e5c4000f 	strb	r0, [r4, #15]
        32e73c:	e5c4600e 	strb	r6, [r4, #14]
        32e740:	e5941014 	ldr	r1, [r4, #20]
        32e744:	e1a01841 	mov	r1, r1, asr #16
        32e748:	e1a06001 	mov	r6, r1
        32e74c:	e3a00005 	mov	r0, #5	; 0x5
        32e750:	eb62107a 	bl	1bb2940 <$__rt_sdiv>
        32e754:	e2400015 	sub	r0, r0, #21	; 0x15
        32e758:	e2800a02 	add	r0, r0, #8192	; 0x2000
        32e75c:	e5c40011 	strb	r0, [r4, #17]
        32e760:	e1a00440 	mov	r0, r0, asr #8
        32e764:	e5c40010 	strb	r0, [r4, #16]
        32e768:	e246001a 	sub	r0, r6, #26	; 0x1a
        32e76c:	e2800b0a 	add	r0, r0, #10240	; 0x2800
        32e770:	e0800fa0 	add	r0, r0, r0, lsr #31
        32e774:	e1a000c0 	mov	r0, r0, asr #1
        32e778:	e5c40013 	strb	r0, [r4, #19]
        32e77c:	e1a00440 	mov	r0, r0, asr #8
        32e780:	e5c40012 	strb	r0, [r4, #18]
        32e784:	e1a00005 	mov	r0, r5
        32e788:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: BitsPicCodes(long, PicPlay *, GrafPort *)
 * Address: 00330aa4
 */
BitsPicCodes(long, PicPlay *, GrafPort *) {
    /*
        330aa4:	e1a0c00d 	mov	ip, sp
        330aa8:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        330aac:	e24cb004 	sub	fp, ip, #4	; 0x4
        330ab0:	e1a04001 	mov	r4, r1
        330ab4:	e1a05002 	mov	r5, r2
        330ab8:	e1a00002 	mov	r0, r2
        330abc:	eb60a478 	bl	1b59ca4 <$ImpossibleToDraw(GrafPort *)>
        330ac0:	e3300000 	teq	r0, #0	; 0x0
        330ac4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        330ac8:	e24dd054 	sub	sp, sp, #84	; 0x54
        330acc:	e28d0038 	add	r0, sp, #56	; 0x38
        330ad0:	e594e110 	ldr	lr, [r4, #272]
        330ad4:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        330ad8:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        330adc:	e89e100c 	ldmia	lr, {r2, r3, ip}
        330ae0:	e880100c 	stmia	r0, {r2, r3, ip}
        330ae4:	e28d0030 	add	r0, sp, #48	; 0x30
        330ae8:	e28410fc 	add	r1, r4, #252	; 0xfc
        330aec:	e8915000 	ldmia	r1, {ip, lr}
        330af0:	e8805000 	stmia	r0, {ip, lr}
        330af4:	e59d0036 	ldr	r0, [sp, #54]
        330af8:	e1a00840 	mov	r0, r0, asr #16
        330afc:	e59d1032 	ldr	r1, [sp, #50]
        330b00:	e040a841 	sub	sl, r0, r1, asr #16
        330b04:	e59d1034 	ldr	r1, [sp, #52]
        330b08:	e1a01841 	mov	r1, r1, asr #16
        330b0c:	e59d0030 	ldr	r0, [sp, #48]
        330b10:	e0419840 	sub	r9, r1, r0, asr #16
        330b14:	e3a00002 	mov	r0, #2	; 0x2
        330b18:	eb62458b 	bl	1bc214c <$AllocateRefHandle(long)>
        330b1c:	e58d0000 	str	r0, [sp]
        330b20:	e1a0800d 	mov	r8, sp
        330b24:	e1a00109 	mov	r0, r9, lsl #2
        330b28:	eb624587 	bl	1bc214c <$AllocateRefHandle(long)>
        330b2c:	e58d0004 	str	r0, [sp, #4]
        330b30:	e28d7004 	add	r7, sp, #4	; 0x4
        330b34:	e1a0010a 	mov	r0, sl, lsl #2
        330b38:	eb624583 	bl	1bc214c <$AllocateRefHandle(long)>
        330b3c:	e58d0008 	str	r0, [sp, #8]
        330b40:	e28d6008 	add	r6, sp, #8	; 0x8
        330b44:	e3a00002 	mov	r0, #2	; 0x2
        330b48:	eb62457f 	bl	1bc214c <$AllocateRefHandle(long)>
        330b4c:	e58d000c 	str	r0, [sp, #12]
        330b50:	e28d000c 	add	r0, sp, #12	; 0xc
        330b54:	e1a01006 	mov	r1, r6
        330b58:	e1a02007 	mov	r2, r7
        330b5c:	e1a03008 	mov	r3, r8
        330b60:	eb5e34d0 	bl	1abdea8 <$FMakeBitmap>
        330b64:	eb624578 	bl	1bc214c <$AllocateRefHandle(long)>
        330b68:	e58d002c 	str	r0, [sp, #44]
        330b6c:	e59d0000 	ldr	r0, [sp]
        330b70:	eb624991 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330b74:	e3a06000 	mov	r6, #0	; 0x0
        330b78:	e59d0004 	ldr	r0, [sp, #4]
        330b7c:	eb62498e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330b80:	e59d0008 	ldr	r0, [sp, #8]
        330b84:	eb62498c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330b88:	e59d000c 	ldr	r0, [sp, #12]
        330b8c:	eb62498a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330b90:	e59f0124 	ldr	r0, [pc, #124]	; 330cbc <BitsPicCodes(long, PicPlay *, GrafPort *)+0x218>
        330b94:	e5900000 	ldr	r0, [r0]
        330b98:	e5901000 	ldr	r1, [r0]
        330b9c:	e59d002c 	ldr	r0, [sp, #44]
        330ba0:	e5900000 	ldr	r0, [r0]
        330ba4:	eb624dad 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        330ba8:	eb624567 	bl	1bc214c <$AllocateRefHandle(long)>
        330bac:	e58d0028 	str	r0, [sp, #40]
        330bb0:	e28d1028 	add	r1, sp, #40	; 0x28
        330bb4:	e28d0024 	add	r0, sp, #36	; 0x24
        330bb8:	eb624146 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        330bbc:	e28d0024 	add	r0, sp, #36	; 0x24
        330bc0:	eb624553 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        330bc4:	e1a01809 	mov	r1, r9, lsl #16
        330bc8:	e1a01841 	mov	r1, r1, asr #16
        330bcc:	e1a0280a 	mov	r2, sl, lsl #16
        330bd0:	e1a02842 	mov	r2, r2, asr #16
        330bd4:	e5cd601d 	strb	r6, [sp, #29]
        330bd8:	e5cd601c 	strb	r6, [sp, #28]
        330bdc:	e5cd601f 	strb	r6, [sp, #31]
        330be0:	e5cd601e 	strb	r6, [sp, #30]
        330be4:	e5cd1021 	strb	r1, [sp, #33]
        330be8:	e1a01441 	mov	r1, r1, asr #8
        330bec:	e5cd1020 	strb	r1, [sp, #32]
        330bf0:	e5cd2023 	strb	r2, [sp, #35]
        330bf4:	e1a01442 	mov	r1, r2, asr #8
        330bf8:	e5cd1022 	strb	r1, [sp, #34]
        330bfc:	e3a03000 	mov	r3, #0	; 0x0
        330c00:	e3a02000 	mov	r2, #0	; 0x0
        330c04:	e92d000c 	stmdb	sp!, {r2, r3}
        330c08:	e28d2048 	add	r2, sp, #72	; 0x48
        330c0c:	e28d3024 	add	r3, sp, #36	; 0x24
        330c10:	e1a01000 	mov	r1, r0
        330c14:	e28d0040 	add	r0, sp, #64	; 0x40
        330c18:	eb62fae0 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
        330c1c:	e28dd008 	add	sp, sp, #8	; 0x8
        330c20:	e59d0030 	ldr	r0, [sp, #48]
        330c24:	e1a00840 	mov	r0, r0, asr #16
        330c28:	e1a00100 	mov	r0, r0, lsl #2
        330c2c:	eb624546 	bl	1bc214c <$AllocateRefHandle(long)>
        330c30:	e58d0010 	str	r0, [sp, #16]
        330c34:	e28d7010 	add	r7, sp, #16	; 0x10
        330c38:	e59d0032 	ldr	r0, [sp, #50]
        330c3c:	e1a00840 	mov	r0, r0, asr #16
        330c40:	e1a00100 	mov	r0, r0, lsl #2
        330c44:	eb624540 	bl	1bc214c <$AllocateRefHandle(long)>
        330c48:	e58d0014 	str	r0, [sp, #20]
        330c4c:	e28d6014 	add	r6, sp, #20	; 0x14
        330c50:	e3a00002 	mov	r0, #2	; 0x2
        330c54:	eb62453c 	bl	1bc214c <$AllocateRefHandle(long)>
        330c58:	e58d0018 	str	r0, [sp, #24]
        330c5c:	e28d0018 	add	r0, sp, #24	; 0x18
        330c60:	e28d102c 	add	r1, sp, #44	; 0x2c
        330c64:	e1a02006 	mov	r2, r6
        330c68:	e1a03007 	mov	r3, r7
        330c6c:	eb5e9ffd 	bl	1ad8c68 <$FOffsetShape>
        330c70:	e59d0010 	ldr	r0, [sp, #16]
        330c74:	eb624950 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330c78:	e59d0014 	ldr	r0, [sp, #20]
        330c7c:	eb62494e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330c80:	e59d0018 	ldr	r0, [sp, #24]
        330c84:	eb62494c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330c88:	e1a03005 	mov	r3, r5
        330c8c:	e1a02004 	mov	r2, r4
        330c90:	e28d102c 	add	r1, sp, #44	; 0x2c
        330c94:	e51b0034 	ldr	r0, [fp, -#52]
        330c98:	eb60a408 	bl	1b59cc0 <$storeShape(long, RefVar const &, PicPlay *, GrafPort *)>
        330c9c:	e28d0024 	add	r0, sp, #36	; 0x24
        330ca0:	e3a01000 	mov	r1, #0	; 0x0
        330ca4:	eb624515 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        330ca8:	e59d0028 	ldr	r0, [sp, #40]
        330cac:	eb624942 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330cb0:	e59d002c 	ldr	r0, [sp, #44]
        330cb4:	eb624940 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        330cb8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        330cbc:	006827a0 	rsbeq	r2, r8, r0, lsr #15
    */
}

/**
 * Symbol: BoxesXOverlapOK__FP11xrdata_typeP13LETTERS_TO_XRP5_RECTsPsT5
 * Address: 00336e0c
 */
void globals::BoxesXOverlapOK() {
    /*
        336e0c:	e1a0c00d 	mov	ip, sp
        336e10:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        336e14:	e24cb004 	sub	fp, ip, #4	; 0x4
        336e18:	e1a04002 	mov	r4, r2
        336e1c:	e1a02803 	mov	r2, r3, lsl #16
        336e20:	e1a02842 	mov	r2, r2, asr #16
        336e24:	e59bc008 	ldr	ip, [fp, #8]
        336e28:	e59be004 	ldr	lr, [fp, #4]
        336e2c:	e24dd008 	sub	sp, sp, #8	; 0x8
        336e30:	e5900008 	ldr	r0, [r0, #8]
        336e34:	e3a05000 	mov	r5, #0	; 0x0
        336e38:	e3520078 	cmp	r2, #120	; 0x78
        336e3c:	aa000003 	bge	336e50 <BoxesXOverlapOK__FP11xrdata_typeP13LETTERS_TO_XRP5_RECTsPsT5+0x44>
        336e40:	e0822082 	add	r2, r2, r2, lsl #1
        336e44:	e7d03182 	ldrb	r3, [r0, r2, lsl #3]
        336e48:	e3330000 	teq	r3, #0	; 0x0
        336e4c:	1a000001 	bne	336e58 <BoxesXOverlapOK__FP11xrdata_typeP13LETTERS_TO_XRP5_RECTsPsT5+0x4c>
        336e50:	e1a00005 	mov	r0, r5
        336e54:	ea00002d 	b	336f10 <BoxesXOverlapOK__FP11xrdata_typeP13LETTERS_TO_XRP5_RECTsPsT5+0x104>
        336e58:	e0800182 	add	r0, r0, r2, lsl #3
        336e5c:	e5d02003 	ldrb	r2, [r0, #3]
        336e60:	e5d1300e 	ldrb	r3, [r1, #14]
        336e64:	e1520003 	cmp	r2, r3
        336e68:	bafffff8 	blt	336e50 <BoxesXOverlapOK__FP11xrdata_typeP13LETTERS_TO_XRP5_RECTsPsT5+0x44>
        336e6c:	e5d1100f 	ldrb	r1, [r1, #15]
        336e70:	e1520001 	cmp	r2, r1
        336e74:	cafffff5 	bgt	336e50 <BoxesXOverlapOK__FP11xrdata_typeP13LETTERS_TO_XRP5_RECTsPsT5+0x44>
        336e78:	e1a0300d 	mov	r3, sp
        336e7c:	e92d0008 	stmdb	sp!, {r3}
        336e80:	e590300c 	ldr	r3, [r0, #12]
        336e84:	e1a03843 	mov	r3, r3, asr #16
        336e88:	e590200a 	ldr	r2, [r0, #10]
        336e8c:	e1a02842 	mov	r2, r2, asr #16
        336e90:	e1a0100c 	mov	r1, ip
        336e94:	e1a0000e 	mov	r0, lr
        336e98:	eb5fa461 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        336e9c:	e28dd004 	add	sp, sp, #4	; 0x4
        336ea0:	e5940004 	ldr	r0, [r4, #4]
        336ea4:	e1a00840 	mov	r0, r0, asr #16
        336ea8:	e59d2004 	ldr	r2, [sp, #4]
        336eac:	e1a02842 	mov	r2, r2, asr #16
        336eb0:	e59d1000 	ldr	r1, [sp]
        336eb4:	e0821841 	add	r1, r2, r1, asr #16
        336eb8:	e15000c1 	cmp	r0, r1, asr #1
        336ebc:	ca000012 	bgt	336f0c <BoxesXOverlapOK__FP11xrdata_typeP13LETTERS_TO_XRP5_RECTsPsT5+0x100>
        336ec0:	e1a010c1 	mov	r1, r1, asr #1
        336ec4:	e5942000 	ldr	r2, [r4]
        336ec8:	e0800842 	add	r0, r0, r2, asr #16
        336ecc:	e04100c0 	sub	r0, r1, r0, asr #1
        336ed0:	eb5ce23b 	bl	1a6f7c4 <$HWRAbs(int)>
        336ed4:	e1a06000 	mov	r6, r0
        336ed8:	e59d1002 	ldr	r1, [sp, #2]
        336edc:	e1a01841 	mov	r1, r1, asr #16
        336ee0:	e59d0006 	ldr	r0, [sp, #6]
        336ee4:	e0810840 	add	r0, r1, r0, asr #16
        336ee8:	e1a010c0 	mov	r1, r0, asr #1
        336eec:	e5940002 	ldr	r0, [r4, #2]
        336ef0:	e1a00840 	mov	r0, r0, asr #16
        336ef4:	e5942006 	ldr	r2, [r4, #6]
        336ef8:	e0800842 	add	r0, r0, r2, asr #16
        336efc:	e04100c0 	sub	r0, r1, r0, asr #1
        336f00:	eb5ce22f 	bl	1a6f7c4 <$HWRAbs(int)>
        336f04:	e15600c0 	cmp	r6, r0, asr #1
        336f08:	aaffffd0 	bge	336e50 <BoxesXOverlapOK__FP11xrdata_typeP13LETTERS_TO_XRP5_RECTsPsT5+0x44>
        336f0c:	e3a00001 	mov	r0, #1	; 0x1
        336f10:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: BaselineAndScale(low_type *)
 * Address: 0034eba0
 */
BaselineAndScale(low_type *) {
    /*
        34eba0:	e1a0c00d 	mov	ip, sp
        34eba4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        34eba8:	e24cb004 	sub	fp, ip, #4	; 0x4
        34ebac:	e1a04000 	mov	r4, r0
        34ebb0:	e3a06000 	mov	r6, #0	; 0x0
        34ebb4:	e5900000 	ldr	r0, [r0]
        34ebb8:	e5c06095 	strb	r6, [r0, #149]
        34ebbc:	e5c06094 	strb	r6, [r0, #148]
        34ebc0:	e594107a 	ldr	r1, [r4, #122]
        34ebc4:	e1a01841 	mov	r1, r1, asr #16
        34ebc8:	e5940076 	ldr	r0, [r4, #118]
        34ebcc:	e0410840 	sub	r0, r1, r0, asr #16
        34ebd0:	e0801100 	add	r1, r0, r0, lsl #2
        34ebd4:	e1a01081 	mov	r1, r1, lsl #1
        34ebd8:	e3a000a0 	mov	r0, #160	; 0xa0
        34ebdc:	eb618f57 	bl	1bb2940 <$__rt_sdiv>
        34ebe0:	e1a05800 	mov	r5, r0, lsl #16
        34ebe4:	e1a05845 	mov	r5, r5, asr #16
        34ebe8:	e3550002 	cmp	r5, #2	; 0x2
        34ebec:	b3a05002 	movlt	r5, #2	; 0x2
        34ebf0:	e1a00004 	mov	r0, r4
        34ebf4:	eb5f2c37 	bl	1b19cd8 <$Errorprov(low_type *)>
        34ebf8:	e59f7150 	ldr	r7, [pc, #150]	; 34ed50 <BaselineAndScale(low_type *)+0x1b0>
        34ebfc:	e5971000 	ldr	r1, [r7]
        34ec00:	e1a01841 	mov	r1, r1, asr #16
        34ec04:	e0000591 	mul	r0, r1, r5
        34ec08:	eb618f4d 	bl	1bb2944 <$__rt_sdiv10>
        34ec0c:	e1a01000 	mov	r1, r0
        34ec10:	e1a00004 	mov	r0, r4
        34ec14:	e3a02000 	mov	r2, #0	; 0x0
        34ec18:	eb5f40c9 	bl	1b1ef44 <$Filt__FP8low_typesT2>
        34ec1c:	e3300000 	teq	r0, #0	; 0x0
        34ec20:	1a000048 	bne	34ed48 <BaselineAndScale(low_type *)+0x1a8>
        34ec24:	e5971008 	ldr	r1, [r7, #8]
        34ec28:	e5940000 	ldr	r0, [r4]
        34ec2c:	e5c010e1 	strb	r1, [r0, #225]
        34ec30:	e1a01441 	mov	r1, r1, asr #8
        34ec34:	e5c010e0 	strb	r1, [r0, #224]
        34ec38:	e5941000 	ldr	r1, [r4]
        34ec3c:	e5910090 	ldr	r0, [r1, #144]
        34ec40:	e1a00780 	mov	r0, r0, lsl #15
        34ec44:	e1b00fa0 	movs	r0, r0, lsr #31
        34ec48:	0a000005 	beq	34ec64 <BaselineAndScale(low_type *)+0xc4>
        34ec4c:	e3a00064 	mov	r0, #100	; 0x64
        34ec50:	e5c100e7 	strb	r0, [r1, #231]
        34ec54:	e5c160e6 	strb	r6, [r1, #230]
        34ec58:	e5941000 	ldr	r1, [r4]
        34ec5c:	e5c100e9 	strb	r0, [r1, #233]
        34ec60:	e5c160e8 	strb	r6, [r1, #232]
        34ec64:	e5940000 	ldr	r0, [r4]
        34ec68:	e5900090 	ldr	r0, [r0, #144]
        34ec6c:	e1a00780 	mov	r0, r0, lsl #15
        34ec70:	e1b00fa0 	movs	r0, r0, lsr #31
        34ec74:	1a000026 	bne	34ed14 <BaselineAndScale(low_type *)+0x174>
        34ec78:	e597700a 	ldr	r7, [r7, #10]
        34ec7c:	e1a07847 	mov	r7, r7, asr #16
        34ec80:	e0000795 	mul	r0, r5, r7
        34ec84:	eb618f2e 	bl	1bb2944 <$__rt_sdiv10>
        34ec88:	e1a00800 	mov	r0, r0, lsl #16
        34ec8c:	e1a00840 	mov	r0, r0, asr #16
        34ec90:	e08000c0 	add	r0, r0, r0, asr #1
        34ec94:	e1a05800 	mov	r5, r0, lsl #16
        34ec98:	e1a05845 	mov	r5, r5, asr #16
        34ec9c:	e3550002 	cmp	r5, #2	; 0x2
        34eca0:	b3a05002 	movlt	r5, #2	; 0x2
        34eca4:	e1370005 	teq	r7, r5
        34eca8:	02470001 	subeq	r0, r7, #1	; 0x1
        34ecac:	01a05800 	moveq	r5, r0, lsl #16
        34ecb0:	01a05845 	moveq	r5, r5, asr #16
        34ecb4:	e1a00004 	mov	r0, r4
        34ecb8:	e3a01000 	mov	r1, #0	; 0x0
        34ecbc:	eb5f61c5 	bl	1b273d8 <$InitGroupsBorder(low_type *, short)>
        34ecc0:	e3300000 	teq	r0, #0	; 0x0
        34ecc4:	1a00001f 	bne	34ed48 <BaselineAndScale(low_type *)+0x1a8>
        34ecc8:	e1a00004 	mov	r0, r4
        34eccc:	e3a01e19 	mov	r1, #400	; 0x190
        34ecd0:	eb5f48eb 	bl	1b21084 <$InitSpecl(low_type *, short)>
        34ecd4:	e3a03002 	mov	r3, #2	; 0x2
        34ecd8:	e3a02000 	mov	r2, #0	; 0x0
        34ecdc:	e3e01001 	mvn	r1, #1	; 0x1
        34ece0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        34ece4:	e1a01005 	mov	r1, r5
        34ece8:	e1a00004 	mov	r0, r4
        34ecec:	e3e03001 	mvn	r3, #1	; 0x1
        34ecf0:	e3e02001 	mvn	r2, #1	; 0x1
        34ecf4:	eb5f408b 	bl	1b1ef28 <$Extr__FP8low_typesN52>
        34ecf8:	e28dd00c 	add	sp, sp, #12	; 0xc
        34ecfc:	e3300000 	teq	r0, #0	; 0x0
        34ed00:	1a000010 	bne	34ed48 <BaselineAndScale(low_type *)+0x1a8>
        34ed04:	e5940000 	ldr	r0, [r4]
        34ed08:	e5c050e1 	strb	r5, [r0, #225]
        34ed0c:	e1a01445 	mov	r1, r5, asr #8
        34ed10:	e5c010e0 	strb	r1, [r0, #224]
        34ed14:	e1a00004 	mov	r0, r4
        34ed18:	eb5f3845 	bl	1b1ce34 <$SetXYToInitial(low_type *)>
        34ed1c:	e5940000 	ldr	r0, [r4]
        34ed20:	e5900096 	ldr	r0, [r0, #150]
        34ed24:	e1a00820 	mov	r0, r0, lsr #16
        34ed28:	e5c4003d 	strb	r0, [r4, #61]
        34ed2c:	e1a00440 	mov	r0, r0, asr #8
        34ed30:	e5c4003c 	strb	r0, [r4, #60]
        34ed34:	e1a00004 	mov	r0, r4
        34ed38:	eb5f3843 	bl	1b1ce4c <$transfrmN(low_type *)>
        34ed3c:	e3300000 	teq	r0, #0	; 0x0
        34ed40:	01a00006 	moveq	r0, r6
        34ed44:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        34ed48:	e3a00001 	mov	r0, #1	; 0x1
        34ed4c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        34ed50:	003745fc 	ldreqsh	r4, [r7], -ip
    */
}

/**
 * Symbol: bsearch
 * Address: 0035042c
 */
void globals::bsearch() {
    /*
        35042c:	e1a0c00d 	mov	ip, sp
        350430:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        350434:	e24cb004 	sub	fp, ip, #4	; 0x4
        350438:	e1a07000 	mov	r7, r0
        35043c:	e1a05001 	mov	r5, r1
        350440:	e1a04002 	mov	r4, r2
        350444:	e1a06003 	mov	r6, r3
        350448:	e59ba004 	ldr	sl, [fp, #4]
        35044c:	e3340000 	teq	r4, #0	; 0x0
        350450:	0a000008 	beq	350478 <bsearch+0x4c>
        350454:	e3340001 	teq	r4, #1	; 0x1
        350458:	1a000008 	bne	350480 <bsearch+0x54>
        35045c:	e1a01005 	mov	r1, r5
        350460:	e1a00007 	mov	r0, r7
        350464:	e1a0e00f 	mov	lr, pc
        350468:	e1a0f00a 	mov	pc, sl
        35046c:	e3300000 	teq	r0, #0	; 0x0
        350470:	01a00005 	moveq	r0, r5
        350474:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        350478:	e3a00000 	mov	r0, #0	; 0x0
        35047c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        350480:	e1a090a4 	mov	r9, r4, lsr #1
        350484:	e0215996 	mla	r1, r6, r9, r5
        350488:	e1a08001 	mov	r8, r1
        35048c:	e1a00007 	mov	r0, r7
        350490:	e1a0e00f 	mov	lr, pc
        350494:	e1a0f00a 	mov	pc, sl
        350498:	e3500000 	cmp	r0, #0	; 0x0
        35049c:	01a00008 	moveq	r0, r8
        3504a0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3504a4:	a0885006 	addge	r5, r8, r6
        3504a8:	a0440009 	subge	r0, r4, r9
        3504ac:	a2404001 	subge	r4, r0, #1	; 0x1
        3504b0:	b1a04009 	movlt	r4, r9
        3504b4:	eaffffe4 	b	35044c <bsearch+0x20>
    */
}

/**
 * Symbol: big
 * Address: 00365e50
 */
void globals::big() {
    /*
        365e50:	42694772 	rsbmi	r4, r9, #29884416	; 0x1c80000
        365e54:	616d6d61 	cmnvs	sp, r1, ror #26
        365e58:	72730000 	rsbvcs	r0, r3, #0	; 0x0
    */
}

/**
 * Symbol: BiSLSharedAttrCommon1
 * Address: 00365e5c
 */
void globals::BiSLSharedAttrCommon1() {
    /*
        365e5c:	00366388 	eoreqs	r6, r6, r8, lsl #7
        365e60:	003663b8 	ldreqh	r6, [r6], -r8
        365e64:	003663e8 	eoreqs	r6, r6, r8, ror #7
        365e68:	00366418 	eoreqs	r6, r6, r8, lsl r4
        365e6c:	00366358 	eoreqs	r6, r6, r8, asr r3
        365e70:	00366448 	eoreqs	r6, r6, r8, asr #8
        365e74:	00366478 	eoreqs	r6, r6, r8, ror r4
        365e78:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        365e7c:	003664d8 	ldreqsb	r6, [r6], -r8
        365e80:	00366508 	eoreqs	r6, r6, r8, lsl #10
        365e84:	00366538 	eoreqs	r6, r6, r8, lsr r5
        365e88:	00366568 	eoreqs	r6, r6, r8, ror #10
        365e8c:	00366598 	mlaeqs	r6, r8, r5, r6
        365e90:	003665c8 	eoreqs	r6, r6, r8, asr #11
    */
}

/**
 * Symbol: BiSPSharedAttrCommon1
 * Address: 00365e94
 */
void globals::BiSPSharedAttrCommon1() {
    /*
        365e94:	00ff0259 	rsceqs	r0, pc, r9, asr r2
        365e98:	02b50324 	adceqs	r0, r5, #-1879048192	; 0x90000000
        365e9c:	040f040f 	streq	r0, [pc], #40f	; 365ea4 <BiSPSharedAttrCommon1+0x10>
        365ea0:	047f047f 	ldreqbt	r0, [pc], #47f	; 365ea8 <BiSPSharedAttrCommon1+0x14>
        365ea4:	050f050f 	streq	r0, [pc, #fffffaf1]	; 36599d <ArSigSlopeLu+0x29d>
        365ea8:	050f050f 	streq	r0, [pc, #fffffaf1]	; 3659a1 <ArSigSlopeLu+0x2a1>
        365eac:	050f05d9 	streq	r0, [pc, #fffffa27]	; 3658db <ArSigSlopeLu+0x1db>
    */
}

/**
 * Symbol: BiSLendpunct1
 * Address: 00365eb0
 */
void globals::BiSLendpunct1() {
    /*
        365eb0:	003663b8 	ldreqh	r6, [r6], -r8
        365eb4:	00366388 	eoreqs	r6, r6, r8, lsl #7
    */
}

/**
 * Symbol: BiSPendpunct1
 * Address: 00365eb8
 */
void globals::BiSPendpunct1() {
    /*
        365eb8:	015a015a 	cmpeq	sl, sl, asr r1
    */
}

/**
 * Symbol: BiSLclosequote1
 * Address: 00365ebc
 */
void globals::BiSLclosequote1() {
    /*
        365ebc:	003663b8 	ldreqh	r6, [r6], -r8
        365ec0:	00366388 	eoreqs	r6, r6, r8, lsl #7
    */
}

/**
 * Symbol: BiSPclosequote1
 * Address: 00365ec4
 */
void globals::BiSPclosequote1() {
    /*
        365ec4:	015a015a 	cmpeq	sl, sl, asr r1
    */
}

/**
 * Symbol: BiSLhyphen1
 * Address: 00365ec8
 */
void globals::BiSLhyphen1() {
    /*
        365ec8:	00366358 	eoreqs	r6, r6, r8, asr r3
        365ecc:	00366448 	eoreqs	r6, r6, r8, asr #8
        365ed0:	00366478 	eoreqs	r6, r6, r8, ror r4
        365ed4:	003665f8 	ldreqsh	r6, [r6], -r8
        365ed8:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        365edc:	003664d8 	ldreqsb	r6, [r6], -r8
        365ee0:	00366508 	eoreqs	r6, r6, r8, lsl #10
        365ee4:	00366538 	eoreqs	r6, r6, r8, lsr r5
        365ee8:	00366568 	eoreqs	r6, r6, r8, ror #10
        365eec:	00366598 	mlaeqs	r6, r8, r5, r6
        365ef0:	00366778 	eoreqs	r6, r6, r8, ror r7
        365ef4:	003665c8 	eoreqs	r6, r6, r8, asr #11
        365ef8:	00366628 	eoreqs	r6, r6, r8, lsr #12
        365efc:	00366718 	eoreqs	r6, r6, r8, lsl r7
    */
}

/**
 * Symbol: BiSPhyphen1
 * Address: 00365f00
 */
void globals::BiSPhyphen1() {
    /*
        365f00:	01ca020c 	biceq	r0, sl, ip, lsl #4
        365f04:	03240259 	teqeq	r4, #-1879048187	; 0x90000005
        365f08:	01ca0259 	biceq	r0, sl, r9, asr r2
        365f0c:	02590259 	subeqs	r0, r9, #-1879048187	; 0x90000005
        365f10:	02590259 	subeqs	r0, r9, #-1879048187	; 0x90000005
        365f14:	03b402b5 	moveqs	r0, #1342177291	; 0x5000000b
        365f18:	0324047f 	teqeq	r4, #2130706432	; 0x7f000000
    */
}

/**
 * Symbol: BiSLSuffixes1
 * Address: 00365f1c
 */
void globals::BiSLSuffixes1() {
    /*
        365f1c:	00366418 	eoreqs	r6, r6, r8, lsl r4
        365f20:	003663b8 	ldreqh	r6, [r6], -r8
        365f24:	00366388 	eoreqs	r6, r6, r8, lsl #7
    */
}

/**
 * Symbol: BiSPSuffixes1
 * Address: 00365f28
 */
void globals::BiSPSuffixes1() {
    /*
        365f28:	03240259 	teqeq	r4, #-1879048187	; 0x90000005
        365f2c:	02590000 	subeqs	r0, r9, #0	; 0x0
    */
}

/**
 * Symbol: BiSLSharedCommons1
 * Address: 00365f30
 */
void globals::BiSLSharedCommons1() {
    /*
        365f30:	00366388 	eoreqs	r6, r6, r8, lsl #7
        365f34:	003663b8 	ldreqh	r6, [r6], -r8
        365f38:	003663e8 	eoreqs	r6, r6, r8, ror #7
        365f3c:	00366418 	eoreqs	r6, r6, r8, lsl r4
        365f40:	00366358 	eoreqs	r6, r6, r8, asr r3
        365f44:	00366448 	eoreqs	r6, r6, r8, asr #8
        365f48:	00366478 	eoreqs	r6, r6, r8, ror r4
        365f4c:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        365f50:	003664d8 	ldreqsb	r6, [r6], -r8
        365f54:	00366508 	eoreqs	r6, r6, r8, lsl #10
        365f58:	00366538 	eoreqs	r6, r6, r8, lsr r5
        365f5c:	00366568 	eoreqs	r6, r6, r8, ror #10
        365f60:	00366598 	mlaeqs	r6, r8, r5, r6
        365f64:	003665c8 	eoreqs	r6, r6, r8, asr #11
    */
}

/**
 * Symbol: BiSPSharedCommons1
 * Address: 00365f68
 */
void globals::BiSPSharedCommons1() {
    /*
        365f68:	00ff0259 	rsceqs	r0, pc, r9, asr r2
        365f6c:	02b502b5 	adceqs	r0, r5, #1342177291	; 0x5000000b
        365f70:	040f040f 	streq	r0, [pc], #40f	; 365f78 <BiSPSharedCommons1+0x10>
        365f74:	047f047f 	ldreqbt	r0, [pc], #47f	; 365f7c <BiSPSharedCommons1+0x14>
        365f78:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365a71 <ArSigSlopeLu+0x371>
        365f7c:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365a75 <ArSigSlopeLu+0x375>
        365f80:	050f05d9 	streq	r0, [pc, #fffffa27]	; 3659af <ArSigSlopeLu+0x2af>
    */
}

/**
 * Symbol: BiSLSpellCheckIgnore1
 * Address: 00365f84
 */
void globals::BiSLSpellCheckIgnore1() {
    /*
        365f84:	00366388 	eoreqs	r6, r6, r8, lsl #7
        365f88:	003663b8 	ldreqh	r6, [r6], -r8
        365f8c:	003663e8 	eoreqs	r6, r6, r8, ror #7
        365f90:	00366418 	eoreqs	r6, r6, r8, lsl r4
        365f94:	00366358 	eoreqs	r6, r6, r8, asr r3
        365f98:	00366448 	eoreqs	r6, r6, r8, asr #8
        365f9c:	00366478 	eoreqs	r6, r6, r8, ror r4
        365fa0:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        365fa4:	003664d8 	ldreqsb	r6, [r6], -r8
        365fa8:	00366508 	eoreqs	r6, r6, r8, lsl #10
        365fac:	00366538 	eoreqs	r6, r6, r8, lsr r5
        365fb0:	00366568 	eoreqs	r6, r6, r8, ror #10
        365fb4:	00366598 	mlaeqs	r6, r8, r5, r6
        365fb8:	003665c8 	eoreqs	r6, r6, r8, asr #11
    */
}

/**
 * Symbol: BiSPSpellCheckIgnore1
 * Address: 00365fbc
 */
void globals::BiSPSpellCheckIgnore1() {
    /*
        365fbc:	00ff0259 	rsceqs	r0, pc, r9, asr r2
        365fc0:	02b502b5 	adceqs	r0, r5, #1342177291	; 0x5000000b
        365fc4:	040f040f 	streq	r0, [pc], #40f	; 365fcc <BiSPSpellCheckIgnore1+0x10>
        365fc8:	047f047f 	ldreqbt	r0, [pc], #47f	; 365fd0 <BiSPSpellCheckIgnore1+0x14>
        365fcc:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365ac5 <ArSigSlopeLu+0x3c5>
        365fd0:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365ac9 <ArSigSlopeLu+0x3c9>
        365fd4:	050f05d9 	streq	r0, [pc, #fffffa27]	; 365a03 <ArSigSlopeLu+0x303>
    */
}

/**
 * Symbol: BiSLuser1
 * Address: 00365fd8
 */
void globals::BiSLuser1() {
    /*
        365fd8:	00366388 	eoreqs	r6, r6, r8, lsl #7
        365fdc:	003663b8 	ldreqh	r6, [r6], -r8
        365fe0:	003663e8 	eoreqs	r6, r6, r8, ror #7
        365fe4:	00366418 	eoreqs	r6, r6, r8, lsl r4
        365fe8:	00366358 	eoreqs	r6, r6, r8, asr r3
        365fec:	00366448 	eoreqs	r6, r6, r8, asr #8
        365ff0:	00366478 	eoreqs	r6, r6, r8, ror r4
        365ff4:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        365ff8:	003664d8 	ldreqsb	r6, [r6], -r8
        365ffc:	00366508 	eoreqs	r6, r6, r8, lsl #10
        366000:	00366538 	eoreqs	r6, r6, r8, lsr r5
        366004:	00366568 	eoreqs	r6, r6, r8, ror #10
        366008:	00366598 	mlaeqs	r6, r8, r5, r6
        36600c:	003665c8 	eoreqs	r6, r6, r8, asr #11
    */
}

/**
 * Symbol: BiSPuser1
 * Address: 00366010
 */
void globals::BiSPuser1() {
    /*
        366010:	00ff0259 	rsceqs	r0, pc, r9, asr r2
        366014:	02b50324 	adceqs	r0, r5, #-1879048192	; 0x90000000
        366018:	040f040f 	streq	r0, [pc], #40f	; 366020 <BiSPuser1+0x10>
        36601c:	047f047f 	ldreqbt	r0, [pc], #47f	; 366024 <BiSPuser1+0x14>
        366020:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365b19 <ArSigSlopeLu+0x419>
        366024:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365b1d <ArSigSlopeLu+0x41d>
        366028:	050f05d9 	streq	r0, [pc, #fffffa27]	; 365a57 <ArSigSlopeLu+0x357>
    */
}

/**
 * Symbol: BiSLnull11
 * Address: 0036602c
 */
void globals::BiSLnull11() {
    /*
        36602c:	00366388 	eoreqs	r6, r6, r8, lsl #7
        366030:	003663b8 	ldreqh	r6, [r6], -r8
        366034:	003663e8 	eoreqs	r6, r6, r8, ror #7
        366038:	00366418 	eoreqs	r6, r6, r8, lsl r4
        36603c:	00366358 	eoreqs	r6, r6, r8, asr r3
        366040:	00366448 	eoreqs	r6, r6, r8, asr #8
        366044:	00366478 	eoreqs	r6, r6, r8, ror r4
        366048:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        36604c:	003664d8 	ldreqsb	r6, [r6], -r8
        366050:	00366508 	eoreqs	r6, r6, r8, lsl #10
        366054:	00366538 	eoreqs	r6, r6, r8, lsr r5
        366058:	00366568 	eoreqs	r6, r6, r8, ror #10
        36605c:	00366598 	mlaeqs	r6, r8, r5, r6
        366060:	003665c8 	eoreqs	r6, r6, r8, asr #11
    */
}

/**
 * Symbol: BiSPnull11
 * Address: 00366064
 */
void globals::BiSPnull11() {
    /*
        366064:	00ff0259 	rsceqs	r0, pc, r9, asr r2
        366068:	02b50324 	adceqs	r0, r5, #-1879048192	; 0x90000000
        36606c:	040f040f 	streq	r0, [pc], #40f	; 366074 <BiSPnull11+0x10>
        366070:	047f047f 	ldreqbt	r0, [pc], #47f	; 366078 <BiSPnull11+0x14>
        366074:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365b6d <ArSigSlopeLu+0x46d>
        366078:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365b71 <ArSigSlopeLu+0x471>
        36607c:	050f05d9 	streq	r0, [pc, #fffffa27]	; 365aab <ArSigSlopeLu+0x3ab>
    */
}

/**
 * Symbol: BiSLnull21
 * Address: 00366080
 */
void globals::BiSLnull21() {
    /*
        366080:	00366388 	eoreqs	r6, r6, r8, lsl #7
        366084:	003663b8 	ldreqh	r6, [r6], -r8
        366088:	003663e8 	eoreqs	r6, r6, r8, ror #7
        36608c:	00366418 	eoreqs	r6, r6, r8, lsl r4
        366090:	00366358 	eoreqs	r6, r6, r8, asr r3
        366094:	00366448 	eoreqs	r6, r6, r8, asr #8
        366098:	00366478 	eoreqs	r6, r6, r8, ror r4
        36609c:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        3660a0:	003664d8 	ldreqsb	r6, [r6], -r8
        3660a4:	00366508 	eoreqs	r6, r6, r8, lsl #10
        3660a8:	00366538 	eoreqs	r6, r6, r8, lsr r5
        3660ac:	00366568 	eoreqs	r6, r6, r8, ror #10
        3660b0:	00366598 	mlaeqs	r6, r8, r5, r6
        3660b4:	003665c8 	eoreqs	r6, r6, r8, asr #11
    */
}

/**
 * Symbol: BiSPnull21
 * Address: 003660b8
 */
void globals::BiSPnull21() {
    /*
        3660b8:	00ff0259 	rsceqs	r0, pc, r9, asr r2
        3660bc:	02b50324 	adceqs	r0, r5, #-1879048192	; 0x90000000
        3660c0:	040f040f 	streq	r0, [pc], #40f	; 3660c8 <BiSPnull21+0x10>
        3660c4:	047f047f 	ldreqbt	r0, [pc], #47f	; 3660cc <BiSPnull21+0x14>
        3660c8:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365bc1 <ArSigSlopeLu+0x4c1>
        3660cc:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365bc5 <ArSigSlopeLu+0x4c5>
        3660d0:	050f05d9 	streq	r0, [pc, #fffffa27]	; 365aff <ArSigSlopeLu+0x3ff>
    */
}

/**
 * Symbol: BiSLnull31
 * Address: 003660d4
 */
void globals::BiSLnull31() {
    /*
        3660d4:	00366388 	eoreqs	r6, r6, r8, lsl #7
        3660d8:	003663b8 	ldreqh	r6, [r6], -r8
        3660dc:	003663e8 	eoreqs	r6, r6, r8, ror #7
        3660e0:	00366418 	eoreqs	r6, r6, r8, lsl r4
        3660e4:	00366358 	eoreqs	r6, r6, r8, asr r3
        3660e8:	00366448 	eoreqs	r6, r6, r8, asr #8
        3660ec:	00366478 	eoreqs	r6, r6, r8, ror r4
        3660f0:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        3660f4:	003664d8 	ldreqsb	r6, [r6], -r8
        3660f8:	00366508 	eoreqs	r6, r6, r8, lsl #10
        3660fc:	00366538 	eoreqs	r6, r6, r8, lsr r5
        366100:	00366568 	eoreqs	r6, r6, r8, ror #10
        366104:	00366598 	mlaeqs	r6, r8, r5, r6
        366108:	003665c8 	eoreqs	r6, r6, r8, asr #11
    */
}

/**
 * Symbol: BiSPnull31
 * Address: 0036610c
 */
void globals::BiSPnull31() {
    /*
        36610c:	00ff0259 	rsceqs	r0, pc, r9, asr r2
        366110:	02b50324 	adceqs	r0, r5, #-1879048192	; 0x90000000
        366114:	040f040f 	streq	r0, [pc], #40f	; 36611c <BiSPnull31+0x10>
        366118:	047f047f 	ldreqbt	r0, [pc], #47f	; 366120 <BiSPnull31+0x14>
        36611c:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365c15 <ArSigSlopeLu+0x515>
        366120:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365c19 <ArSigSlopeLu+0x519>
        366124:	050f05d9 	streq	r0, [pc, #fffffa27]	; 365b53 <ArSigSlopeLu+0x453>
    */
}

/**
 * Symbol: BiSLnull41
 * Address: 00366128
 */
void globals::BiSLnull41() {
    /*
        366128:	00366388 	eoreqs	r6, r6, r8, lsl #7
        36612c:	003663b8 	ldreqh	r6, [r6], -r8
        366130:	003663e8 	eoreqs	r6, r6, r8, ror #7
        366134:	00366418 	eoreqs	r6, r6, r8, lsl r4
        366138:	00366358 	eoreqs	r6, r6, r8, asr r3
        36613c:	00366448 	eoreqs	r6, r6, r8, asr #8
        366140:	00366478 	eoreqs	r6, r6, r8, ror r4
        366144:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        366148:	003664d8 	ldreqsb	r6, [r6], -r8
        36614c:	00366508 	eoreqs	r6, r6, r8, lsl #10
        366150:	00366538 	eoreqs	r6, r6, r8, lsr r5
        366154:	00366568 	eoreqs	r6, r6, r8, ror #10
        366158:	00366598 	mlaeqs	r6, r8, r5, r6
        36615c:	003665c8 	eoreqs	r6, r6, r8, asr #11
    */
}

/**
 * Symbol: BiSPnull41
 * Address: 00366160
 */
void globals::BiSPnull41() {
    /*
        366160:	00ff0259 	rsceqs	r0, pc, r9, asr r2
        366164:	02b50324 	adceqs	r0, r5, #-1879048192	; 0x90000000
        366168:	040f040f 	streq	r0, [pc], #40f	; 366170 <BiSPnull41+0x10>
        36616c:	047f047f 	ldreqbt	r0, [pc], #47f	; 366174 <BiSPnull41+0x14>
        366170:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365c69 <ArSigSlopeLu+0x569>
        366174:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365c6d <ArSigSlopeLu+0x56d>
        366178:	050f05d9 	streq	r0, [pc, #fffffa27]	; 365ba7 <ArSigSlopeLu+0x4a7>
    */
}

/**
 * Symbol: BiSLnull51
 * Address: 0036617c
 */
void globals::BiSLnull51() {
    /*
        36617c:	00366388 	eoreqs	r6, r6, r8, lsl #7
        366180:	003663b8 	ldreqh	r6, [r6], -r8
        366184:	003663e8 	eoreqs	r6, r6, r8, ror #7
        366188:	00366418 	eoreqs	r6, r6, r8, lsl r4
        36618c:	00366358 	eoreqs	r6, r6, r8, asr r3
        366190:	00366448 	eoreqs	r6, r6, r8, asr #8
        366194:	00366478 	eoreqs	r6, r6, r8, ror r4
        366198:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        36619c:	003664d8 	ldreqsb	r6, [r6], -r8
        3661a0:	00366508 	eoreqs	r6, r6, r8, lsl #10
        3661a4:	00366538 	eoreqs	r6, r6, r8, lsr r5
        3661a8:	00366568 	eoreqs	r6, r6, r8, ror #10
        3661ac:	00366598 	mlaeqs	r6, r8, r5, r6
        3661b0:	003665c8 	eoreqs	r6, r6, r8, asr #11
    */
}

/**
 * Symbol: BiSPnull51
 * Address: 003661b4
 */
void globals::BiSPnull51() {
    /*
        3661b4:	00ff0259 	rsceqs	r0, pc, r9, asr r2
        3661b8:	02b50324 	adceqs	r0, r5, #-1879048192	; 0x90000000
        3661bc:	040f040f 	streq	r0, [pc], #40f	; 3661c4 <BiSPnull51+0x10>
        3661c0:	047f047f 	ldreqbt	r0, [pc], #47f	; 3661c8 <BiSPnull51+0x14>
        3661c4:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365cbd <theCirrusBatteryTable+0x31>
        3661c8:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365cc1 <theCirrusBatteryTable+0x35>
        3661cc:	050f05d9 	streq	r0, [pc, #fffffa27]	; 365bfb <ArSigSlopeLu+0x4fb>
    */
}

/**
 * Symbol: BiSLnumbers1
 * Address: 003661d0
 */
void globals::BiSLnumbers1() {
    /*
        3661d0:	00366358 	eoreqs	r6, r6, r8, asr r3
        3661d4:	00366448 	eoreqs	r6, r6, r8, asr #8
        3661d8:	00366478 	eoreqs	r6, r6, r8, ror r4
        3661dc:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        3661e0:	003664d8 	ldreqsb	r6, [r6], -r8
        3661e4:	00366508 	eoreqs	r6, r6, r8, lsl #10
        3661e8:	00366538 	eoreqs	r6, r6, r8, lsr r5
        3661ec:	00366568 	eoreqs	r6, r6, r8, ror #10
        3661f0:	00366598 	mlaeqs	r6, r8, r5, r6
        3661f4:	00366388 	eoreqs	r6, r6, r8, lsl #7
        3661f8:	003663b8 	ldreqh	r6, [r6], -r8
        3661fc:	003663e8 	eoreqs	r6, r6, r8, ror #7
    */
}

/**
 * Symbol: BiSPnumbers1
 * Address: 00366200
 */
void globals::BiSPnumbers1() {
    /*
        366200:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365cf9 <theCirrusBatteryTable+0x6d>
        366204:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365cfd <theCirrusBatteryTable+0x71>
        366208:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365d01 <theCirrusBatteryTable+0x75>
        36620c:	050f050f 	streq	r0, [pc, #fffffaf1]	; 365d05 <theCirrusBatteryTable+0x79>
        366210:	050f01ca 	streq	r0, [pc, #fffffe36]	; 36604e <BiSLnull11+0x22>
        366214:	02590324 	subeqs	r0, r9, #-1879048192	; 0x90000000
    */
}

/**
 * Symbol: BiSLPrefixes1
 * Address: 00366218
 */
void globals::BiSLPrefixes1() {
    /*
        366218:	003663e8 	eoreqs	r6, r6, r8, ror #7
        36621c:	00366418 	eoreqs	r6, r6, r8, lsl r4
        366220:	00366358 	eoreqs	r6, r6, r8, asr r3
        366224:	00366448 	eoreqs	r6, r6, r8, asr #8
        366228:	00366478 	eoreqs	r6, r6, r8, ror r4
        36622c:	003665f8 	ldreqsh	r6, [r6], -r8
        366230:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        366234:	003664d8 	ldreqsb	r6, [r6], -r8
        366238:	00366508 	eoreqs	r6, r6, r8, lsl #10
        36623c:	00366538 	eoreqs	r6, r6, r8, lsr r5
        366240:	00366568 	eoreqs	r6, r6, r8, ror #10
        366244:	00366598 	mlaeqs	r6, r8, r5, r6
        366248:	003665c8 	eoreqs	r6, r6, r8, asr #11
    */
}

/**
 * Symbol: BiSPPrefixes1
 * Address: 0036624c
 */
void globals::BiSPPrefixes1() {
    /*
        36624c:	02b5047f 	adceqs	r0, r5, #2130706432	; 0x7f000000
        366250:	03b402e9 	moveqs	r0, #-1879048178	; 0x9000000e
        366254:	047f03b4 	ldreqbt	r0, [pc], #3b4	; 36625c <BiSPPrefixes1+0x10>
        366258:	025902e9 	subeqs	r0, r9, #-1879048178	; 0x9000000e
        36625c:	02e902e9 	rsceq	r0, r9, #-1879048178	; 0x9000000e
        366260:	02e902e9 	rsceq	r0, r9, #-1879048178	; 0x9000000e
        366264:	05d90000 	ldreqb	r0, [r9]
    */
}

/**
 * Symbol: BiSLmoney1
 * Address: 00366268
 */
void globals::BiSLmoney1() {
    /*
        366268:	00366388 	eoreqs	r6, r6, r8, lsl #7
        36626c:	003663b8 	ldreqh	r6, [r6], -r8
        366270:	003663e8 	eoreqs	r6, r6, r8, ror #7
    */
}

/**
 * Symbol: BiSPmoney1
 * Address: 00366274
 */
void globals::BiSPmoney1() {
    /*
        366274:	02590259 	subeqs	r0, r9, #-1879048187	; 0x90000005
        366278:	03240000 	teqeq	r4, #0	; 0x0
    */
}

/**
 * Symbol: BiSLTimeR_US_B_C_X1
 * Address: 0036627c
 */
void globals::BiSLTimeR_US_B_C_X1() {
    /*
        36627c:	00366388 	eoreqs	r6, r6, r8, lsl #7
        366280:	003663b8 	ldreqh	r6, [r6], -r8
    */
}

/**
 * Symbol: BiSPTimeR_US_B_C_X1
 * Address: 00366284
 */
void globals::BiSPTimeR_US_B_C_X1() {
    /*
        366284:	02590259 	subeqs	r0, r9, #-1879048187	; 0x90000005
    */
}

/**
 * Symbol: BiSLDateR_US1
 * Address: 00366288
 */
void globals::BiSLDateR_US1() {
    /*
        366288:	00366388 	eoreqs	r6, r6, r8, lsl #7
        36628c:	003663b8 	ldreqh	r6, [r6], -r8
    */
}

/**
 * Symbol: BiSPDateR_US1
 * Address: 00366290
 */
void globals::BiSPDateR_US1() {
    /*
        366290:	02590259 	subeqs	r0, r9, #-1879048187	; 0x90000005
    */
}

/**
 * Symbol: BiSLPhoneR_US_C1
 * Address: 00366294
 */
void globals::BiSLPhoneR_US_C1() {
    /*
        366294:	00366388 	eoreqs	r6, r6, r8, lsl #7
        366298:	003663b8 	ldreqh	r6, [r6], -r8
    */
}

/**
 * Symbol: BiSPPhoneR_US_C1
 * Address: 0036629c
 */
void globals::BiSPPhoneR_US_C1() {
    /*
        36629c:	02590259 	subeqs	r0, r9, #-1879048187	; 0x90000005
    */
}

/**
 * Symbol: BiSLPostalCode1
 * Address: 003662a0
 */
void globals::BiSLPostalCode1() {
    /*
        3662a0:	00366388 	eoreqs	r6, r6, r8, lsl #7
        3662a4:	003663b8 	ldreqh	r6, [r6], -r8
    */
}

/**
 * Symbol: BiSPPostalCode1
 * Address: 003662a8
 */
void globals::BiSPPostalCode1() {
    /*
        3662a8:	02590259 	subeqs	r0, r9, #-1879048187	; 0x90000005
    */
}

/**
 * Symbol: BiSLIDNumbers1
 * Address: 003662ac
 */
void globals::BiSLIDNumbers1() {
    /*
        3662ac:	003663e8 	eoreqs	r6, r6, r8, ror #7
        3662b0:	00366388 	eoreqs	r6, r6, r8, lsl #7
        3662b4:	003663b8 	ldreqh	r6, [r6], -r8
    */
}

/**
 * Symbol: BiSPIDNumbers1
 * Address: 003662b8
 */
void globals::BiSPIDNumbers1() {
    /*
        3662b8:	02590259 	subeqs	r0, r9, #-1879048187	; 0x90000005
        3662bc:	02590000 	subeqs	r0, r9, #0	; 0x0
    */
}

/**
 * Symbol: BiSLopenquote1
 * Address: 003662c0
 */
void globals::BiSLopenquote1() {
    /*
        3662c0:	00366358 	eoreqs	r6, r6, r8, asr r3
        3662c4:	00366448 	eoreqs	r6, r6, r8, asr #8
        3662c8:	00366478 	eoreqs	r6, r6, r8, ror r4
        3662cc:	003665f8 	ldreqsh	r6, [r6], -r8
        3662d0:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        3662d4:	003664d8 	ldreqsb	r6, [r6], -r8
        3662d8:	00366508 	eoreqs	r6, r6, r8, lsl #10
        3662dc:	00366538 	eoreqs	r6, r6, r8, lsr r5
        3662e0:	00366568 	eoreqs	r6, r6, r8, ror #10
        3662e4:	00366598 	mlaeqs	r6, r8, r5, r6
        3662e8:	00366778 	eoreqs	r6, r6, r8, ror r7
        3662ec:	003665c8 	eoreqs	r6, r6, r8, asr #11
        3662f0:	00366628 	eoreqs	r6, r6, r8, lsr #12
        3662f4:	00366658 	eoreqs	r6, r6, r8, asr r6
        3662f8:	00366688 	eoreqs	r6, r6, r8, lsl #13
        3662fc:	003666b8 	ldreqh	r6, [r6], -r8
        366300:	003666e8 	eoreqs	r6, r6, r8, ror #13
        366304:	00366718 	eoreqs	r6, r6, r8, lsl r7
        366308:	00366748 	eoreqs	r6, r6, r8, asr #14
    */
}

/**
 * Symbol: BiSPopenquote1
 * Address: 0036630c
 */
void globals::BiSPopenquote1() {
    /*
        36630c:	01ca020c 	biceq	r0, sl, ip, lsl #4
        366310:	03240259 	teqeq	r4, #-1879048187	; 0x90000005
        366314:	01ca0259 	biceq	r0, sl, r9, asr r2
        366318:	02590259 	subeqs	r0, r9, #-1879048187	; 0x90000005
        36631c:	02590259 	subeqs	r0, r9, #-1879048187	; 0x90000005
        366320:	03b402b5 	moveqs	r0, #1342177291	; 0x5000000b
        366324:	03240324 	teqeq	r4, #-1879048192	; 0x90000000
        366328:	03240324 	teqeq	r4, #-1879048192	; 0x90000000
        36632c:	047f047f 	ldreqbt	r0, [pc], #47f	; 366334 <BiSLwordlike1>
        366330:	050f0000 	streq	r0, [pc, #0]	; 366338 <BiSLwordlike1+0x4>
    */
}

/**
 * Symbol: BiSLwordlike1
 * Address: 00366334
 */
void globals::BiSLwordlike1() {
    /*
        366334:	00366388 	eoreqs	r6, r6, r8, lsl #7
        366338:	003663b8 	ldreqh	r6, [r6], -r8
        36633c:	003663e8 	eoreqs	r6, r6, r8, ror #7
    */
}

/**
 * Symbol: BiSPwordlike1
 * Address: 00366340
 */
void globals::BiSPwordlike1() {
    /*
        366340:	00ff0259 	rsceqs	r0, pc, r9, asr r2
        366344:	03b40000 	moveqs	r0, #0	; 0x0
    */
}

/**
 * Symbol: BiSLLexicalSymbols11
 * Address: 00366348
 */
void globals::BiSLLexicalSymbols11() {
    /*
        366348:	003667d8 	ldreqsb	r6, [r6], -r8
    */
}

/**
 * Symbol: BiSPLexicalSymbols11
 * Address: 0036634c
 */
void globals::BiSPLexicalSymbols11() {
    /*
        36634c:	012a0000 	teqeq	sl, r0
    */
}

/**
 * Symbol: BiSLLexicalSymbols21
 * Address: 00366350
 */
void globals::BiSLLexicalSymbols21() {
    /*
        366350:	003667a8 	eoreqs	r6, r6, r8, lsr #15
    */
}

/**
 * Symbol: BiSPLexicalSymbols21
 * Address: 00366354
 */
void globals::BiSPLexicalSymbols21() {
    /*
        366354:	012a0000 	teqeq	sl, r0
    */
}

/**
 * Symbol: BiGSSharedAttrCommon1
 * Address: 00366358
 */
void globals::BiGSSharedAttrCommon1() {
    /*
        366358:	0003dc14 	andeq	sp, r3, r4, lsl ip
        36635c:	00000013 	andeq	r0, r0, r3, lsl r0
        366368:	0000002f 	andeq	r0, r0, pc, lsr #32
        36636c:	00340000 	eoreqs	r0, r4, r0
        366370:	0000015a 	andeq	r0, r0, sl, asr r1
        366374:	0000000e 	andeq	r0, r0, lr
        366378:	0000000e 	andeq	r0, r0, lr
        36637c:	00365e5c 	eoreqs	r5, r6, ip, asr lr
        366380:	00365e94 	mlaeqs	r6, r4, lr, r5
        366384:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSendpunct1
 * Address: 00366388
 */
void globals::BiGSendpunct1() {
    /*
        366388:	0003dc28 	andeq	sp, r3, r8, lsr #24
        36638c:	00000070 	andeq	r0, r0, r0, ror r0
        366390:	7ffe0000 	swivc	0x00fe0000
        366394:	00000000 	andeq	r0, r0, r0
        366398:	00000005 	andeq	r0, r0, r5
        3663a4:	00000002 	andeq	r0, r0, r2
        3663a8:	00000002 	andeq	r0, r0, r2
        3663ac:	00365eb0 	ldreqh	r5, [r6], -r0
        3663b0:	00365eb8 	ldreqh	r5, [r6], -r8
        3663b4:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSclosequote1
 * Address: 003663b8
 */
void globals::BiGSclosequote1() {
    /*
        3663b8:	0003dc34 	andeq	sp, r3, r4, lsr ip
        3663bc:	0000006e 	andeq	r0, r0, lr, rrx
        3663c0:	7ffe0000 	swivc	0x00fe0000
        3663d4:	00000002 	andeq	r0, r0, r2
        3663d8:	00000002 	andeq	r0, r0, r2
        3663dc:	00365ebc 	ldreqh	r5, [r6], -ip
        3663e0:	00365ec4 	eoreqs	r5, r6, r4, asr #29
        3663e4:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGShyphen1
 * Address: 003663e8
 */
void globals::BiGShyphen1() {
    /*
        3663e8:	0003dc40 	andeq	sp, r3, r0, asr #24
        3663ec:	00000071 	andeq	r0, r0, r1, ror r0
        3663f0:	05d905d9 	ldreqb	r0, [r9, #1497]
        366404:	0000000e 	andeq	r0, r0, lr
        366408:	0000000e 	andeq	r0, r0, lr
        36640c:	00365ec8 	eoreqs	r5, r6, r8, asr #29
        366410:	00365f00 	eoreqs	r5, r6, r0, lsl #30
        366414:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSSuffixes1
 * Address: 00366418
 */
void globals::BiGSSuffixes1() {
    /*
        366418:	0003dc48 	andeq	sp, r3, r8, asr #24
        36641c:	0000007a 	andeq	r0, r0, sl, ror r0
        366420:	7ffe0000 	swivc	0x00fe0000
        366424:	00000000 	andeq	r0, r0, r0
        366428:	00000005 	andeq	r0, r0, r5
        36642c:	006f0000 	rsbeq	r0, pc, r0
        366430:	00000000 	andeq	r0, r0, r0
        366434:	00000003 	andeq	r0, r0, r3
        366438:	00000003 	andeq	r0, r0, r3
        36643c:	00365f1c 	eoreqs	r5, r6, ip, lsl pc
        366440:	00365f28 	eoreqs	r5, r6, r8, lsr #30
        366444:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSSharedCommons1
 * Address: 00366448
 */
void globals::BiGSSharedCommons1() {
    /*
        366448:	0003dc54 	andeq	sp, r3, r4, asr ip
        36644c:	00000011 	andeq	r0, r0, r1, lsl r0
        366450:	00510000 	subeqs	r0, r1, r0
        366454:	00000000 	andeq	r0, r0, r0
        366458:	0000002f 	andeq	r0, r0, pc, lsr #32
        36645c:	00340000 	eoreqs	r0, r4, r0
        366460:	0000015a 	andeq	r0, r0, sl, asr r1
        366464:	0000000e 	andeq	r0, r0, lr
        366468:	0000000e 	andeq	r0, r0, lr
        36646c:	00365f30 	eoreqs	r5, r6, r0, lsr pc
        366470:	00365f68 	eoreqs	r5, r6, r8, ror #30
        366474:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSSpellCheckIgnore1
 * Address: 00366478
 */
void globals::BiGSSpellCheckIgnore1() {
    /*
        366478:	0003dc64 	andeq	sp, r3, r4, ror #24
        36647c:	0000007f 	andeq	r0, r0, pc, ror r0
        366480:	00b20000 	adceqs	r0, r2, r0
        366484:	00000000 	andeq	r0, r0, r0
        366488:	0000002f 	andeq	r0, r0, pc, lsr #32
        36648c:	00340000 	eoreqs	r0, r4, r0
        366490:	0000015a 	andeq	r0, r0, sl, asr r1
        366494:	0000000e 	andeq	r0, r0, lr
        366498:	0000000e 	andeq	r0, r0, lr
        36649c:	00365f84 	eoreqs	r5, r6, r4, lsl #31
        3664a0:	00365fbc 	ldreqh	r5, [r6], -ip
        3664a4:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSuser1
 * Address: 003664a8
 */
void globals::BiGSuser1() {
    /*
        3664a8:	0003dc78 	andeq	sp, r3, r8, ror ip
        3664b8:	0000002f 	andeq	r0, r0, pc, lsr #32
        3664bc:	00340000 	eoreqs	r0, r4, r0
        3664c0:	0000015a 	andeq	r0, r0, sl, asr r1
        3664c4:	0000000e 	andeq	r0, r0, lr
        3664c8:	0000000e 	andeq	r0, r0, lr
        3664cc:	00365fd8 	ldreqsb	r5, [r6], -r8
        3664d0:	00366010 	eoreqs	r6, r6, r0, lsl r0
        3664d4:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSnull11
 * Address: 003664d8
 */
void globals::BiGSnull11() {
    /*
        3664d8:	0003dc80 	andeq	sp, r3, r0, lsl #25
        3664dc:	00000000 	andeq	r0, r0, r0
        3664e0:	00510000 	subeqs	r0, r1, r0
        3664e4:	00000000 	andeq	r0, r0, r0
        3664e8:	0000002f 	andeq	r0, r0, pc, lsr #32
        3664ec:	00340000 	eoreqs	r0, r4, r0
        3664f0:	0000015a 	andeq	r0, r0, sl, asr r1
        3664f4:	0000000e 	andeq	r0, r0, lr
        3664f8:	0000000e 	andeq	r0, r0, lr
        3664fc:	0036602c 	eoreqs	r6, r6, ip, lsr #32
        366500:	00366064 	eoreqs	r6, r6, r4, rrx
        366504:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSnull21
 * Address: 00366508
 */
void globals::BiGSnull21() {
    /*
        366508:	0003dc88 	andeq	sp, r3, r8, lsl #25
        36650c:	00000000 	andeq	r0, r0, r0
        366510:	00510000 	subeqs	r0, r1, r0
        366514:	00000000 	andeq	r0, r0, r0
        366518:	0000002f 	andeq	r0, r0, pc, lsr #32
        36651c:	00340000 	eoreqs	r0, r4, r0
        366520:	0000015a 	andeq	r0, r0, sl, asr r1
        366524:	0000000e 	andeq	r0, r0, lr
        366528:	0000000e 	andeq	r0, r0, lr
        36652c:	00366080 	eoreqs	r6, r6, r0, lsl #1
        366530:	003660b8 	ldreqh	r6, [r6], -r8
        366534:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSnull31
 * Address: 00366538
 */
void globals::BiGSnull31() {
    /*
        366538:	0003dc90 	muleq	r3, r0, ip
        36653c:	00000000 	andeq	r0, r0, r0
        366540:	00510000 	subeqs	r0, r1, r0
        366544:	00000000 	andeq	r0, r0, r0
        366548:	0000002f 	andeq	r0, r0, pc, lsr #32
        36654c:	00340000 	eoreqs	r0, r4, r0
        366550:	0000015a 	andeq	r0, r0, sl, asr r1
        366554:	0000000e 	andeq	r0, r0, lr
        366558:	0000000e 	andeq	r0, r0, lr
        36655c:	003660d4 	ldreqsb	r6, [r6], -r4
        366560:	0036610c 	eoreqs	r6, r6, ip, lsl #2
        366564:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSnull41
 * Address: 00366568
 */
void globals::BiGSnull41() {
    /*
        366568:	0003dc98 	muleq	r3, r8, ip
        36656c:	00000000 	andeq	r0, r0, r0
        366570:	00510000 	subeqs	r0, r1, r0
        366574:	00000000 	andeq	r0, r0, r0
        366578:	0000002f 	andeq	r0, r0, pc, lsr #32
        36657c:	00340000 	eoreqs	r0, r4, r0
        366580:	0000015a 	andeq	r0, r0, sl, asr r1
        366584:	0000000e 	andeq	r0, r0, lr
        366588:	0000000e 	andeq	r0, r0, lr
        36658c:	00366128 	eoreqs	r6, r6, r8, lsr #2
        366590:	00366160 	eoreqs	r6, r6, r0, ror #2
        366594:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSnull51
 * Address: 00366598
 */
void globals::BiGSnull51() {
    /*
        366598:	0003dca0 	andeq	sp, r3, r0, lsr #25
        36659c:	00000000 	andeq	r0, r0, r0
        3665a0:	00510000 	subeqs	r0, r1, r0
        3665a4:	00000000 	andeq	r0, r0, r0
        3665a8:	0000002f 	andeq	r0, r0, pc, lsr #32
        3665ac:	00340000 	eoreqs	r0, r4, r0
        3665b0:	0000015a 	andeq	r0, r0, sl, asr r1
        3665b4:	0000000e 	andeq	r0, r0, lr
        3665b8:	0000000e 	andeq	r0, r0, lr
        3665bc:	0036617c 	eoreqs	r6, r6, ip, ror r1
        3665c0:	003661b4 	ldreqh	r6, [r6], -r4
        3665c4:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSnumbers1
 * Address: 003665c8
 */
void globals::BiGSnumbers1() {
    /*
        3665c8:	0003dca8 	andeq	sp, r3, r8, lsr #25
        3665cc:	00000074 	andeq	r0, r0, r4, ror r0
        3665d0:	006f0000 	rsbeq	r0, pc, r0
        3665e4:	0000000c 	andeq	r0, r0, ip
        3665e8:	0000000c 	andeq	r0, r0, ip
        3665ec:	003661d0 	ldreqsb	r6, [r6], -r0
        3665f0:	00366200 	eoreqs	r6, r6, r0, lsl #4
        3665f4:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSPrefixes1
 * Address: 003665f8
 */
void globals::BiGSPrefixes1() {
    /*
        3665f8:	0003dcb0 	streqh	sp, [r3], -r0
        3665fc:	0000007b 	andeq	r0, r0, fp, ror r0
        366600:	008f05d9 	ldreqd	r0, [pc], r9
        366604:	00000000 	andeq	r0, r0, r0
        366608:	0000002f 	andeq	r0, r0, pc, lsr #32
        36660c:	00340000 	eoreqs	r0, r4, r0
        366610:	0000015a 	andeq	r0, r0, sl, asr r1
        366614:	0000000d 	andeq	r0, r0, sp
        366618:	0000000d 	andeq	r0, r0, sp
        36661c:	00366218 	eoreqs	r6, r6, r8, lsl r2
        366620:	0036624c 	eoreqs	r6, r6, ip, asr #4
        366624:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSmoney1
 * Address: 00366628
 */
void globals::BiGSmoney1() {
    /*
        366628:	0003dcbc 	streqh	sp, [r3], -ip
        36662c:	00000073 	andeq	r0, r0, r3, ror r0
        366630:	00d70000 	sbceqs	r0, r7, r0
        366644:	00000003 	andeq	r0, r0, r3
        366648:	00000003 	andeq	r0, r0, r3
        36664c:	00366268 	eoreqs	r6, r6, r8, ror #4
        366650:	00366274 	eoreqs	r6, r6, r4, ror r2
        366654:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSTimeR_US_B_C_X1
 * Address: 00366658
 */
void globals::BiGSTimeR_US_B_C_X1() {
    /*
        366658:	0003dcc4 	andeq	sp, r3, r4, asr #25
        36665c:	00000010 	andeq	r0, r0, r0, lsl r0
        366660:	00d70000 	sbceqs	r0, r7, r0
        366674:	00000002 	andeq	r0, r0, r2
        366678:	00000002 	andeq	r0, r0, r2
        36667c:	0036627c 	eoreqs	r6, r6, ip, ror r2
        366680:	00366284 	eoreqs	r6, r6, r4, lsl #5
        366684:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSDateR_US1
 * Address: 00366688
 */
void globals::BiGSDateR_US1() {
    /*
        366688:	0003dcd4 	ldreqd	sp, [r3], -r4
        36668c:	00000007 	andeq	r0, r0, r7
        366690:	00d70000 	sbceqs	r0, r7, r0
        3666a4:	00000002 	andeq	r0, r0, r2
        3666a8:	00000002 	andeq	r0, r0, r2
        3666ac:	00366288 	eoreqs	r6, r6, r8, lsl #5
        3666b0:	00366290 	mlaeqs	r6, r0, r2, r6
        3666b4:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSPhoneR_US_C1
 * Address: 003666b8
 */
void globals::BiGSPhoneR_US_C1() {
    /*
        3666b8:	0003dce0 	andeq	sp, r3, r0, ror #25
        3666bc:	0000000f 	andeq	r0, r0, pc
        3666c0:	00d70000 	sbceqs	r0, r7, r0
        3666d4:	00000002 	andeq	r0, r0, r2
        3666d8:	00000002 	andeq	r0, r0, r2
        3666dc:	00366294 	mlaeqs	r6, r4, r2, r6
        3666e0:	0036629c 	mlaeqs	r6, ip, r2, r6
        3666e4:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSPostalCode1
 * Address: 003666e8
 */
void globals::BiGSPostalCode1() {
    /*
        3666e8:	0003dcec 	andeq	sp, r3, ip, ror #25
        3666ec:	0000006b 	andeq	r0, r0, fp, rrx
        3666f0:	015a0000 	cmpeq	sl, r0
        3666f4:	00b20000 	adceqs	r0, r2, r0
        366704:	00000002 	andeq	r0, r0, r2
        366708:	00000002 	andeq	r0, r0, r2
        36670c:	003662a0 	eoreqs	r6, r6, r0, lsr #5
        366710:	003662a8 	eoreqs	r6, r6, r8, lsr #5
        366714:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSIDNumbers1
 * Address: 00366718
 */
void globals::BiGSIDNumbers1() {
    /*
        366718:	0003dcf8 	streqd	sp, [r3], -r8
        36671c:	00000072 	andeq	r0, r0, r2, ror r0
        366720:	018f0000 	orreq	r0, pc, r0
        366724:	00c00000 	sbceq	r0, r0, r0
        366728:	00000004 	andeq	r0, r0, r4
        36672c:	0000006f 	andeq	r0, r0, pc, rrx
        366730:	0000006f 	andeq	r0, r0, pc, rrx
        366734:	00000003 	andeq	r0, r0, r3
        366738:	00000003 	andeq	r0, r0, r3
        36673c:	003662ac 	eoreqs	r6, r6, ip, lsr #5
        366740:	003662b8 	ldreqh	r6, [r6], -r8
        366744:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSopenquote1
 * Address: 00366748
 */
void globals::BiGSopenquote1() {
    /*
        366748:	0003dd04 	andeq	sp, r3, r4, lsl #26
        36674c:	00000075 	andeq	r0, r0, r5, ror r0
        366750:	0000047f 	andeq	r0, r0, pc, ror r4
        366764:	00000013 	andeq	r0, r0, r3, lsl r0
        366768:	00000013 	andeq	r0, r0, r3, lsl r0
        36676c:	003662c0 	eoreqs	r6, r6, r0, asr #5
        366770:	0036630c 	eoreqs	r6, r6, ip, lsl #6
        366774:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSwordlike1
 * Address: 00366778
 */
void globals::BiGSwordlike1() {
    /*
        366778:	0003dd10 	andeq	sp, r3, r0, lsl sp
        36677c:	0000006c 	andeq	r0, r0, ip, rrx
        366780:	00ff0000 	rsceqs	r0, pc, r0
        366784:	00d70000 	sbceqs	r0, r7, r0
        366788:	00000015 	andeq	r0, r0, r5, lsl r0
        366794:	00000003 	andeq	r0, r0, r3
        366798:	00000003 	andeq	r0, r0, r3
        36679c:	00366334 	eoreqs	r6, r6, r4, lsr r3
        3667a0:	00366340 	eoreqs	r6, r6, r0, asr #6
        3667a4:	01000000 	tsteq	r0, r0
    */
}

/**
 * Symbol: BiGSLexicalSymbols11
 * Address: 003667a8
 */
void globals::BiGSLexicalSymbols11() {
    /*
        3667a8:	0003dd1c 	andeq	sp, r3, ip, lsl sp
        3667ac:	00000077 	andeq	r0, r0, r7, ror r0
        3667b0:	01b10000 	moveqs	r0, r0
        3667b4:	012a0000 	teqeq	sl, r0
        3667b8:	00000010 	andeq	r0, r0, r0, lsl r0
        3667c4:	00000001 	andeq	r0, r0, r1
        3667c8:	00000001 	andeq	r0, r0, r1
        3667cc:	00366348 	eoreqs	r6, r6, r8, asr #6
        3667d0:	0036634c 	eoreqs	r6, r6, ip, asr #6
        3667d4:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: BiGSLexicalSymbols21
 * Address: 003667d8
 */
void globals::BiGSLexicalSymbols21() {
    /*
        3667d8:	0003dd2c 	andeq	sp, r3, ip, lsr #26
        3667dc:	00000080 	andeq	r0, r0, r0, lsl #1
        3667e0:	01b10000 	moveqs	r0, r0
        3667e4:	012a0000 	teqeq	sl, r0
        3667e8:	00000010 	andeq	r0, r0, r0, lsl r0
        3667f4:	00000001 	andeq	r0, r0, r1
        3667f8:	00000001 	andeq	r0, r0, r1
        3667fc:	00366350 	eoreqs	r6, r6, r0, asr r3
        366800:	00366354 	eoreqs	r6, r6, r4, asr r3
        366804:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: BiGSLGeneral1
 * Address: 00366808
 */
void globals::BiGSLGeneral1() {
    /*
        366808:	00366358 	eoreqs	r6, r6, r8, asr r3
        36680c:	00366388 	eoreqs	r6, r6, r8, lsl #7
        366810:	003663b8 	ldreqh	r6, [r6], -r8
        366814:	003663e8 	eoreqs	r6, r6, r8, ror #7
        366818:	00366418 	eoreqs	r6, r6, r8, lsl r4
        36681c:	00366448 	eoreqs	r6, r6, r8, asr #8
        366820:	00366478 	eoreqs	r6, r6, r8, ror r4
        366824:	003664a8 	eoreqs	r6, r6, r8, lsr #9
        366828:	003664d8 	ldreqsb	r6, [r6], -r8
        36682c:	00366508 	eoreqs	r6, r6, r8, lsl #10
        366830:	00366538 	eoreqs	r6, r6, r8, lsr r5
        366834:	00366568 	eoreqs	r6, r6, r8, ror #10
        366838:	00366598 	mlaeqs	r6, r8, r5, r6
        36683c:	003665c8 	eoreqs	r6, r6, r8, asr #11
        366840:	003665f8 	ldreqsh	r6, [r6], -r8
        366844:	00366628 	eoreqs	r6, r6, r8, lsr #12
        366848:	00366658 	eoreqs	r6, r6, r8, asr r6
        36684c:	00366688 	eoreqs	r6, r6, r8, lsl #13
        366850:	003666b8 	ldreqh	r6, [r6], -r8
        366854:	003666e8 	eoreqs	r6, r6, r8, ror #13
        366858:	00366718 	eoreqs	r6, r6, r8, lsl r7
        36685c:	00366748 	eoreqs	r6, r6, r8, asr #14
        366860:	00366778 	eoreqs	r6, r6, r8, ror r7
        366864:	003667a8 	eoreqs	r6, r6, r8, lsr #15
        366868:	003667d8 	ldreqsb	r6, [r6], -r8
    */
}

/**
 * Symbol: BiGGeneral
 * Address: 0036686c
 */
void globals::BiGGeneral() {
    /*
        36686c:	0003dd3c 	andeq	sp, r3, ip, lsr sp
        366870:	00000003 	andeq	r0, r0, r3
        366874:	00000019 	andeq	r0, r0, r9, lsl r0
        366878:	00000019 	andeq	r0, r0, r9, lsl r0
        36687c:	00366808 	eoreqs	r6, r6, r8, lsl #16
        366880:	02020200 	andeq	r0, r2, #0	; 0x0
    */
}

/**
 * Symbol: BiSLDateR_US2
 * Address: 0036688c
 */
void globals::BiSLDateR_US2() {
    /*
        36688c:	003668cc 	eoreqs	r6, r6, ip, asr #17
    */
}

/**
 * Symbol: BiSPDateR_US2
 * Address: 00366890
 */
void globals::BiSPDateR_US2() {
    /*
        366890:	02590000 	subeqs	r0, r9, #0	; 0x0
    */
}

/**
 * Symbol: BiSLdaymonth2
 * Address: 00366894
 */
void globals::BiSLdaymonth2() {
    /*
        366894:	003668cc 	eoreqs	r6, r6, ip, asr #17
    */
}

/**
 * Symbol: BiSPdaymonth2
 * Address: 00366898
 */
void globals::BiSPdaymonth2() {
    /*
        366898:	00ff0000 	rsceqs	r0, pc, r0
    */
}

/**
 * Symbol: BiGSDateR_US2
 * Address: 0036689c
 */
void globals::BiGSDateR_US2() {
    /*
        36689c:	0003dd44 	andeq	sp, r3, r4, asr #26
        3668a0:	00000007 	andeq	r0, r0, r7
        3668b8:	00000001 	andeq	r0, r0, r1
        3668bc:	00000001 	andeq	r0, r0, r1
        3668c0:	0036688c 	eoreqs	r6, r6, ip, lsl #17
        3668c4:	00366890 	mlaeqs	r6, r0, r8, r6
        3668c8:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSendpunct2
 * Address: 003668cc
 */
void globals::BiGSendpunct2() {
    /*
        3668cc:	0003dd50 	andeq	sp, r3, r0, asr sp
        3668d0:	00000070 	andeq	r0, r0, r0, ror r0
        3668d4:	7ffe0000 	swivc	0x00fe0000
        3668d8:	00000000 	andeq	r0, r0, r0
        3668dc:	00000005 	andeq	r0, r0, r5
        3668f8:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSdaymonth2
 * Address: 003668fc
 */
void globals::BiGSdaymonth2() {
    /*
        3668fc:	0003dd5c 	andeq	sp, r3, ip, asr sp
        366900:	0000006f 	andeq	r0, r0, pc, rrx
        36690c:	0000000f 	andeq	r0, r0, pc
        366910:	000000ff 	streqd	r0, [r0], -pc
        366914:	000000ff 	streqd	r0, [r0], -pc
        366918:	00000001 	andeq	r0, r0, r1
        36691c:	00000001 	andeq	r0, r0, r1
        366920:	00366894 	mlaeqs	r6, r4, r8, r6
        366924:	00366898 	mlaeqs	r6, r8, r8, r6
        366928:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSLexicalSymbols2
 * Address: 0036692c
 */
void globals::BiGSLexicalSymbols2() {
    /*
        36692c:	0003dd68 	andeq	sp, r3, r8, ror #26
        366930:	00000077 	andeq	r0, r0, r7, ror r0
        366934:	05d90000 	ldreqb	r0, [r9]
        366938:	018f0000 	orreq	r0, pc, r0
        36693c:	00000010 	andeq	r0, r0, r0, lsl r0
    */
}

/**
 * Symbol: BiGSLDate2
 * Address: 0036695c
 */
void globals::BiGSLDate2() {
    /*
        36695c:	0036689c 	mlaeqs	r6, ip, r8, r6
        366960:	003668cc 	eoreqs	r6, r6, ip, asr #17
        366964:	003668fc 	ldreqsh	r6, [r6], -ip
        366968:	0036692c 	eoreqs	r6, r6, ip, lsr #18
    */
}

/**
 * Symbol: BiGDate
 * Address: 0036696c
 */
void globals::BiGDate() {
    /*
        36696c:	0003dd78 	andeq	sp, r3, r8, ror sp
        366970:	00000002 	andeq	r0, r0, r2
        366974:	00000004 	andeq	r0, r0, r4
        366978:	00000004 	andeq	r0, r0, r4
        36697c:	0036695c 	eoreqs	r6, r6, ip, asr r9
        366980:	01020000 	tsteq	r2, r0
    */
}

/**
 * Symbol: BiGSnumbers3
 * Address: 0036698c
 */
void globals::BiGSnumbers3() {
    /*
        36698c:	0003dd80 	andeq	sp, r3, r0, lsl #27
        366990:	00000074 	andeq	r0, r0, r4, ror r0
        3669b8:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSmoney3
 * Address: 003669bc
 */
void globals::BiGSmoney3() {
    /*
        3669bc:	0003dd88 	andeq	sp, r3, r8, lsl #27
        3669c0:	00000073 	andeq	r0, r0, r3, ror r0
        3669e8:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSLexicalSymbols3
 * Address: 003669ec
 */
void globals::BiGSLexicalSymbols3() {
    /*
        3669ec:	0003dd90 	muleq	r3, r0, sp
        3669f0:	00000077 	andeq	r0, r0, r7, ror r0
        3669f4:	05d90000 	ldreqb	r0, [r9]
        3669f8:	018f0000 	orreq	r0, pc, r0
        3669fc:	00000010 	andeq	r0, r0, r0, lsl r0
    */
}

/**
 * Symbol: BiGSLNumbersAndMoney3
 * Address: 00366a1c
 */
void globals::BiGSLNumbersAndMoney3() {
    /*
        366a1c:	0036698c 	eoreqs	r6, r6, ip, lsl #19
        366a20:	003669bc 	ldreqh	r6, [r6], -ip
        366a24:	003669ec 	eoreqs	r6, r6, ip, ror #19
    */
}

/**
 * Symbol: BiGNumbersAndMoney
 * Address: 00366a28
 */
void globals::BiGNumbersAndMoney() {
    /*
        366a28:	0003dda0 	andeq	sp, r3, r0, lsr #27
        366a2c:	00000002 	andeq	r0, r0, r2
        366a30:	00000003 	andeq	r0, r0, r3
        366a34:	00000003 	andeq	r0, r0, r3
        366a38:	00366a1c 	eoreqs	r6, r6, ip, lsl sl
        366a3c:	01020000 	tsteq	r2, r0
    */
}

/**
 * Symbol: BiGSnumbers4
 * Address: 00366a48
 */
void globals::BiGSnumbers4() {
    /*
        366a48:	0003ddb0 	streqh	sp, [r3], -r0
        366a4c:	00000074 	andeq	r0, r0, r4, ror r0
        366a74:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSLexicalSymbols4
 * Address: 00366a78
 */
void globals::BiGSLexicalSymbols4() {
    /*
        366a78:	0003ddb8 	streqh	sp, [r3], -r8
        366a7c:	00000077 	andeq	r0, r0, r7, ror r0
        366a80:	05d90000 	ldreqb	r0, [r9]
        366a84:	018f0000 	orreq	r0, pc, r0
        366a88:	00000010 	andeq	r0, r0, r0, lsl r0
    */
}

/**
 * Symbol: BiGSLNumbers4
 * Address: 00366aa8
 */
void globals::BiGSLNumbers4() {
    /*
        366aa8:	00366a48 	eoreqs	r6, r6, r8, asr #20
        366aac:	00366a78 	eoreqs	r6, r6, r8, ror sl
    */
}

/**
 * Symbol: BiGNumbers
 * Address: 00366ab0
 */
void globals::BiGNumbers() {
    /*
        366ab0:	0003ddc8 	andeq	sp, r3, r8, asr #27
        366ab4:	00000002 	andeq	r0, r0, r2
        366ab8:	00000002 	andeq	r0, r0, r2
        366abc:	00000002 	andeq	r0, r0, r2
        366ac0:	00366aa8 	eoreqs	r6, r6, r8, lsr #21
        366ac4:	01020000 	tsteq	r2, r0
    */
}

/**
 * Symbol: BiSLPhoneR_US_C5
 * Address: 00366ad0
 */
void globals::BiSLPhoneR_US_C5() {
    /*
        366ad0:	00366b2c 	eoreqs	r6, r6, ip, lsr #22
    */
}

/**
 * Symbol: BiSPPhoneR_US_C5
 * Address: 00366ad4
 */
void globals::BiSPPhoneR_US_C5() {
    /*
        366ad4:	01ca0000 	biceq	r0, sl, r0
    */
}

/**
 * Symbol: BiSLhyphen5
 * Address: 00366ad8
 */
void globals::BiSLhyphen5() {
    /*
        366ad8:	00366afc 	ldreqsh	r6, [r6], -ip
        366adc:	00366b5c 	eoreqs	r6, r6, ip, asr fp
        366ae0:	00366b8c 	eoreqs	r6, r6, ip, lsl #23
    */
}

/**
 * Symbol: BiSPhyphen5
 * Address: 00366ae4
 */
void globals::BiSPhyphen5() {
    /*
        366ae4:	000001ca 	andeq	r0, r0, sl, asr #3
        366ae8:	03240000 	teqeq	r4, #0	; 0x0
    */
}

/**
 * Symbol: BiSLWorldPhone5
 * Address: 00366aec
 */
void globals::BiSLWorldPhone5() {
    /*
        366aec:	00366b2c 	eoreqs	r6, r6, ip, lsr #22
    */
}

/**
 * Symbol: BiSPWorldPhone5
 * Address: 00366af0
 */
void globals::BiSPWorldPhone5() {
    /*
        366af0:	01ca0000 	biceq	r0, sl, r0
    */
}

/**
 * Symbol: BiSLFunnyPhone5
 * Address: 00366af4
 */
void globals::BiSLFunnyPhone5() {
    /*
        366af4:	00366b2c 	eoreqs	r6, r6, ip, lsr #22
    */
}

/**
 * Symbol: BiSPFunnyPhone5
 * Address: 00366af8
 */
void globals::BiSPFunnyPhone5() {
    /*
        366af8:	01ca0000 	biceq	r0, sl, r0
    */
}

/**
 * Symbol: BiGSPhoneR_US_C5
 * Address: 00366afc
 */
void globals::BiGSPhoneR_US_C5() {
    /*
        366afc:	0003ddd0 	ldreqd	sp, [r3], -r0
        366b00:	0000000f 	andeq	r0, r0, pc
        366b04:	00000019 	andeq	r0, r0, r9, lsl r0
        366b18:	00000001 	andeq	r0, r0, r1
        366b1c:	00000001 	andeq	r0, r0, r1
        366b20:	00366ad0 	ldreqsb	r6, [r6], -r0
        366b24:	00366ad4 	ldreqsb	r6, [r6], -r4
        366b28:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGShyphen5
 * Address: 00366b2c
 */
void globals::BiGShyphen5() {
    /*
        366b2c:	0003dddc 	ldreqd	sp, [r3], -ip
        366b30:	00000071 	andeq	r0, r0, r1, ror r0
        366b34:	047f047f 	ldreqbt	r0, [pc], #47f	; 366b3c <BiGShyphen5+0x10>
        366b48:	00000003 	andeq	r0, r0, r3
        366b4c:	00000003 	andeq	r0, r0, r3
        366b50:	00366ad8 	ldreqsb	r6, [r6], -r8
        366b54:	00366ae4 	eoreqs	r6, r6, r4, ror #21
        366b58:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSWorldPhone5
 * Address: 00366b5c
 */
void globals::BiGSWorldPhone5() {
    /*
        366b5c:	0003dde4 	andeq	sp, r3, r4, ror #27
        366b60:	0000006a 	andeq	r0, r0, sl, rrx
        366b64:	01ca0019 	biceq	r0, sl, r9, lsl r0
        366b78:	00000001 	andeq	r0, r0, r1
        366b7c:	00000001 	andeq	r0, r0, r1
        366b80:	00366aec 	eoreqs	r6, r6, ip, ror #21
        366b84:	00366af0 	ldreqsh	r6, [r6], -r0
        366b88:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSFunnyPhone5
 * Address: 00366b8c
 */
void globals::BiGSFunnyPhone5() {
    /*
        366b8c:	0003ddf0 	streqd	sp, [r3], -r0
        366b90:	00000069 	andeq	r0, r0, r9, rrx
        366b94:	03240019 	teqeq	r4, #25	; 0x19
        366b98:	00000000 	andeq	r0, r0, r0
        366b9c:	00000004 	andeq	r0, r0, r4
        366ba8:	00000001 	andeq	r0, r0, r1
        366bac:	00000001 	andeq	r0, r0, r1
        366bb0:	00366af4 	ldreqsh	r6, [r6], -r4
        366bb4:	00366af8 	ldreqsh	r6, [r6], -r8
        366bb8:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSLexicalSymbols5
 * Address: 00366bbc
 */
void globals::BiGSLexicalSymbols5() {
    /*
        366bbc:	0003ddfc 	streqd	sp, [r3], -ip
        366bc0:	00000077 	andeq	r0, r0, r7, ror r0
        366bc4:	08fe047f 	ldmeqia	lr!, {r0, r1, r2, r3, r4, r5, r6, sl}^
        366bc8:	018f0000 	orreq	r0, pc, r0
        366bcc:	00000010 	andeq	r0, r0, r0, lsl r0
    */
}

/**
 * Symbol: BiGSLPhone5
 * Address: 00366bec
 */
void globals::BiGSLPhone5() {
    /*
        366bec:	00366afc 	ldreqsh	r6, [r6], -ip
        366bf0:	00366b2c 	eoreqs	r6, r6, ip, lsr #22
        366bf4:	00366b5c 	eoreqs	r6, r6, ip, asr fp
        366bf8:	00366b8c 	eoreqs	r6, r6, ip, lsl #23
        366bfc:	00366bbc 	ldreqh	r6, [r6], -ip
    */
}

/**
 * Symbol: BiGPhone
 * Address: 00366c00
 */
void globals::BiGPhone() {
    /*
        366c00:	0003de0c 	andeq	sp, r3, ip, lsl #28
        366c04:	00000002 	andeq	r0, r0, r2
        366c08:	00000005 	andeq	r0, r0, r5
        366c0c:	00000005 	andeq	r0, r0, r5
        366c10:	00366bec 	eoreqs	r6, r6, ip, ror #23
        366c14:	01020000 	tsteq	r2, r0
    */
}

/**
 * Symbol: BiGSTimeR_US_B_C_X6
 * Address: 00366c20
 */
void globals::BiGSTimeR_US_B_C_X6() {
    /*
        366c20:	0003de14 	andeq	sp, r3, r4, lsl lr
        366c24:	00000010 	andeq	r0, r0, r0, lsl r0
        366c4c:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSLexicalSymbols6
 * Address: 00366c50
 */
void globals::BiGSLexicalSymbols6() {
    /*
        366c50:	0003de24 	andeq	sp, r3, r4, lsr #28
        366c54:	00000077 	andeq	r0, r0, r7, ror r0
        366c58:	05d90000 	ldreqb	r0, [r9]
        366c5c:	018f0000 	orreq	r0, pc, r0
        366c60:	00000010 	andeq	r0, r0, r0, lsl r0
    */
}

/**
 * Symbol: BiGSLTime6
 * Address: 00366c80
 */
void globals::BiGSLTime6() {
    /*
        366c80:	00366c20 	eoreqs	r6, r6, r0, lsr #24
        366c84:	00366c50 	eoreqs	r6, r6, r0, asr ip
    */
}

/**
 * Symbol: BiGTime
 * Address: 00366c88
 */
void globals::BiGTime() {
    /*
        366c88:	0003de34 	andeq	sp, r3, r4, lsr lr
        366c8c:	00000002 	andeq	r0, r0, r2
        366c90:	00000002 	andeq	r0, r0, r2
        366c94:	00000002 	andeq	r0, r0, r2
        366c98:	00366c80 	eoreqs	r6, r6, r0, lsl #25
        366c9c:	01020000 	tsteq	r2, r0
    */
}

/**
 * Symbol: BiGSmoney7
 * Address: 00366ca8
 */
void globals::BiGSmoney7() {
    /*
        366ca8:	0003de3c 	andeq	sp, r3, ip, lsr lr
        366cac:	00000073 	andeq	r0, r0, r3, ror r0
        366cd4:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSLexicalSymbols7
 * Address: 00366cd8
 */
void globals::BiGSLexicalSymbols7() {
    /*
        366cd8:	0003de44 	andeq	sp, r3, r4, asr #28
        366cdc:	00000077 	andeq	r0, r0, r7, ror r0
        366ce0:	05d90000 	ldreqb	r0, [r9]
        366ce4:	018f0000 	orreq	r0, pc, r0
        366ce8:	00000010 	andeq	r0, r0, r0, lsl r0
    */
}

/**
 * Symbol: BiGSLMoney7
 * Address: 00366d08
 */
void globals::BiGSLMoney7() {
    /*
        366d08:	00366ca8 	eoreqs	r6, r6, r8, lsr #25
        366d0c:	00366cd8 	ldreqsb	r6, [r6], -r8
    */
}

/**
 * Symbol: BiGMoney
 * Address: 00366d10
 */
void globals::BiGMoney() {
    /*
        366d10:	0003de54 	andeq	sp, r3, r4, asr lr
        366d14:	00000002 	andeq	r0, r0, r2
        366d18:	00000002 	andeq	r0, r0, r2
        366d1c:	00000002 	andeq	r0, r0, r2
        366d20:	00366d08 	eoreqs	r6, r6, r8, lsl #26
        366d24:	01020000 	tsteq	r2, r0
    */
}

/**
 * Symbol: BiGSnumbers8
 * Address: 00366d30
 */
void globals::BiGSnumbers8() {
    /*
        366d30:	0003de5c 	andeq	sp, r3, ip, asr lr
        366d34:	00000074 	andeq	r0, r0, r4, ror r0
        366d38:	006f0000 	rsbeq	r0, pc, r0
        366d5c:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSPostalCode8
 * Address: 00366d60
 */
void globals::BiGSPostalCode8() {
    /*
        366d60:	0003de64 	andeq	sp, r3, r4, ror #28
        366d64:	0000006b 	andeq	r0, r0, fp, rrx
        366d68:	015a0000 	cmpeq	sl, r0
        366d8c:	ff000000 	swinv	0x00000000
    */
}

/**
 * Symbol: BiGSLexicalSymbols8
 * Address: 00366d90
 */
void globals::BiGSLexicalSymbols8() {
    /*
        366d90:	0003de70 	andeq	sp, r3, r0, ror lr
        366d94:	00000077 	andeq	r0, r0, r7, ror r0
        366d98:	08fe047f 	ldmeqia	lr!, {r0, r1, r2, r3, r4, r5, r6, sl}^
        366d9c:	018f0000 	orreq	r0, pc, r0
        366da0:	00000010 	andeq	r0, r0, r0, lsl r0
    */
}

/**
 * Symbol: BiGSLPostalCode8
 * Address: 00366dc0
 */
void globals::BiGSLPostalCode8() {
    /*
        366dc0:	00366d30 	eoreqs	r6, r6, r0, lsr sp
        366dc4:	00366d60 	eoreqs	r6, r6, r0, ror #26
        366dc8:	00366d90 	mlaeqs	r6, r0, sp, r6
    */
}

/**
 * Symbol: BiGPostalCode
 * Address: 00366dcc
 */
void globals::BiGPostalCode() {
    /*
        366dcc:	0003de80 	andeq	sp, r3, r0, lsl #29
        366dd0:	00000002 	andeq	r0, r0, r2
        366dd4:	00000003 	andeq	r0, r0, r3
        366dd8:	00000003 	andeq	r0, r0, r3
        366ddc:	00366dc0 	eoreqs	r6, r6, r0, asr #27
        366de0:	01020000 	tsteq	r2, r0
    */
}

/**
 * Symbol: bpParam
 * Address: 0036e0c0
 */
void globals::bpParam() {
    /*
        36e0c0:	3e4ccccd 	cdpcc	12, 4, cr12, cr12, cr13, {6}
        36e0c4:	3a9d4952 	bcc	feac0614 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfceafdbc>
        36e0d8:	3f800000 	swicc	0x00800000
        36e0dc:	3f800000 	swicc	0x00800000
        36e0e0:	00000000 	andeq	r0, r0, r0
        36e0e4:	3f800000 	swicc	0x00800000
        36e0e8:	3f800000 	swicc	0x00800000
        36e0ec:	42280000 	eormi	r0, r8, #0	; 0x0
        36e0f0:	437a0000 	cmnmi	sl, #0	; 0x0
        36e0f4:	3f800000 	swicc	0x00800000
        36e0f8:	3dcccccd 	stcccl	12, cr12, [ip, #820]
        36e0fc:	3f800000 	swicc	0x00800000
        36e108:	3f4ccccd 	swicc	0x004ccccd
        36e10c:	3f800000 	swicc	0x00800000
        36e110:	00000000 	andeq	r0, r0, r0
        36e114:	40200000 	eormi	r0, r0, r0
        36e118:	3fcccccd 	swicc	0x00cccccd
        36e11c:	00000000 	andeq	r0, r0, r0
        36e120:	3f19999a 	swicc	0x0019999a
        36e124:	3f19999a 	swicc	0x0019999a
        36e128:	3f800000 	swicc	0x00800000
        36e12c:	3dcccccd 	stcccl	12, cr12, [ip, #820]
        36e130:	3dcccccd 	stcccl	12, cr12, [ip, #820]
        36e134:	40700000 	rsbmis	r0, r0, r0
        36e138:	40700000 	rsbmis	r0, r0, r0
        36e13c:	3f800000 	swicc	0x00800000
        36e140:	00000000 	andeq	r0, r0, r0
        36e144:	3f800000 	swicc	0x00800000
        36e148:	3e99999a 	mrccc	9, 4, r9, cr9, cr10, {4}
        36e14c:	3dcccccd 	stcccl	12, cr12, [ip, #820]
        36e150:	00000000 	andeq	r0, r0, r0
        36e154:	3f800000 	swicc	0x00800000
        36e158:	3f800000 	swicc	0x00800000
        36e15c:	3f800000 	swicc	0x00800000
        36e160:	00000000 	andeq	r0, r0, r0
        36e164:	3f800000 	swicc	0x00800000
        36e168:	3f800000 	swicc	0x00800000
        36e16c:	3f800000 	swicc	0x00800000
        36e170:	42c80000 	sbcmi	r0, r8, #0	; 0x0
        36e174:	3f800000 	swicc	0x00800000
        36e178:	3e000000 	cdpcc	0, 0, cr0, cr0, cr0, {0}
        36e17c:	3f000000 	swicc	0x00000000
        36e180:	3f4ccccd 	swicc	0x004ccccd
        36e190:	3f800000 	swicc	0x00800000
        36e194:	40000000 	andmi	r0, r0, r0
        36e198:	40000000 	andmi	r0, r0, r0
        36e19c:	3e99999a 	mrccc	9, 4, r9, cr9, cr10, {4}
        36e1a0:	42480000 	submi	r0, r8, #0	; 0x0
    */
}

/**
 * Symbol: bpNGS
 * Address: 0036e288
 */
void globals::bpNGS() {
    /*
        36e288:	000e000e 	andeq	r0, lr, lr
        36e28c:	00000000 	andeq	r0, r0, r0
        36e290:	00140009 	andeqs	r0, r4, r9
        36e294:	00c40000 	sbceq	r0, r4, r0
        36e298:	00010001 	andeq	r0, r1, r1
        36e29c:	01780000 	cmneq	r8, r0
        36e2a0:	00070001 	andeq	r0, r7, r1
        36e2a4:	01790000 	cmneq	r9, r0
        36e2a8:	00070007 	andeq	r0, r7, r7
        36e2ac:	01800001 	orreq	r0, r0, r1
        36e2b0:	00070002 	andeq	r0, r7, r2
        36e2b4:	01b10001 	moveqs	r0, r1
        36e2b8:	00020007 	andeq	r0, r2, r7
        36e2bc:	01bf0001 	moveqs	r0, r1
        36e2c0:	00070002 	andeq	r0, r7, r2
        36e2c4:	01cd0001 	biceq	r0, sp, r1
        36e2c8:	00020007 	andeq	r0, r2, r7
        36e2cc:	01db0001 	biceqs	r0, fp, r1
        36e2d0:	00050005 	andeq	r0, r5, r5
        36e2d4:	01e90001 	mvneq	r0, r1
        36e2d8:	00010009 	andeq	r0, r1, r9
        36e2dc:	02020001 	andeq	r0, r2, #1	; 0x1
        36e2e0:	00090001 	andeq	r0, r9, r1
        36e2e4:	020b0001 	andeq	r0, fp, #1	; 0x1
        36e2e8:	00500001 	subeqs	r0, r0, r1
        36e2ec:	02140001 	andeqs	r0, r4, #1	; 0x1
        36e2f0:	00880001 	addeq	r0, r8, r1
        36e2f4:	02640001 	rsbeq	r0, r4, #1	; 0x1
        36e2f8:	00780001 	rsbeqs	r0, r8, r1
        36e2fc:	02ec0001 	rsceq	r0, ip, #1	; 0x1
        36e300:	00860001 	addeq	r0, r6, r1
        36e304:	03640001 	cmneq	r4, #1	; 0x1
    */
}

/**
 * Symbol: bpCSS
 * Address: 0036e308
 */
void globals::bpCSS() {
    /*
        36e308:	00000008 	andeq	r0, r0, r8
        36e30c:	00080000 	andeq	r0, r8, r0
        36e310:	00000001 	andeq	r0, r0, r1
        36e314:	00010004 	andeq	r0, r1, r4
        36e318:	00070007 	andeq	r0, r7, r7
        36e31c:	00000000 	andeq	r0, r0, r0
        36e320:	00010001 	andeq	r0, r1, r1
        36e324:	00000000 	andeq	r0, r0, r0
        36e328:	00000008 	andeq	r0, r0, r8
        36e32c:	00070000 	andeq	r0, r7, r0
        36e330:	00000001 	andeq	r0, r0, r1
        36e334:	00070005 	andeq	r0, r7, r5
        36e338:	00070002 	andeq	r0, r7, r2
        36e33c:	00000000 	andeq	r0, r0, r0
        36e340:	00010001 	andeq	r0, r1, r1
        36e344:	00000000 	andeq	r0, r0, r0
        36e348:	00000007 	andeq	r0, r0, r7
        36e34c:	00080000 	andeq	r0, r8, r0
        36e350:	00000007 	andeq	r0, r0, r7
        36e354:	00010006 	andeq	r0, r1, r6
        36e358:	00020007 	andeq	r0, r2, r7
        36e35c:	00000000 	andeq	r0, r0, r0
        36e360:	00010001 	andeq	r0, r1, r1
        36e364:	00000000 	andeq	r0, r0, r0
        36e368:	00000008 	andeq	r0, r0, r8
        36e36c:	00060000 	andeq	r0, r6, r0
        36e370:	00000001 	andeq	r0, r0, r1
        36e374:	00080007 	andeq	r0, r8, r7
        36e378:	00070002 	andeq	r0, r7, r2
        36e37c:	00000000 	andeq	r0, r0, r0
        36e380:	00010001 	andeq	r0, r1, r1
        36e384:	00000000 	andeq	r0, r0, r0
        36e388:	00000006 	andeq	r0, r0, r6
        36e38c:	00080000 	andeq	r0, r8, r0
        36e390:	00000008 	andeq	r0, r0, r8
        36e394:	00010008 	andeq	r0, r1, r8
        36e398:	00020007 	andeq	r0, r2, r7
        36e39c:	00000000 	andeq	r0, r0, r0
        36e3a0:	00010001 	andeq	r0, r1, r1
        36e3a4:	00000000 	andeq	r0, r0, r0
        36e3a8:	0000000a 	andeq	r0, r0, sl
        36e3ac:	000a0000 	andeq	r0, sl, r0
        36e3b0:	00000001 	andeq	r0, r0, r1
        36e3b4:	00010009 	andeq	r0, r1, r9
        36e3b8:	00050005 	andeq	r0, r5, r5
        36e3bc:	00000000 	andeq	r0, r0, r0
        36e3c0:	00010001 	andeq	r0, r1, r1
        36e3c4:	00000000 	andeq	r0, r0, r0
        36e3c8:	0000000e 	andeq	r0, r0, lr
        36e3cc:	00060000 	andeq	r0, r6, r0
        36e3d0:	00000000 	andeq	r0, r0, r0
        36e3d4:	0001000a 	andeq	r0, r1, sl
        36e3d8:	00010009 	andeq	r0, r1, r9
        36e3dc:	00000000 	andeq	r0, r0, r0
        36e3e0:	00010001 	andeq	r0, r1, r1
        36e3e4:	00000000 	andeq	r0, r0, r0
        36e3e8:	00000006 	andeq	r0, r0, r6
        36e3ec:	000e0000 	andeq	r0, lr, r0
        36e3f0:	00000001 	andeq	r0, r0, r1
        36e3f4:	0000000b 	andeq	r0, r0, fp
        36e3f8:	00090001 	andeq	r0, r9, r1
        36e3fc:	00000000 	andeq	r0, r0, r0
        36e400:	00010001 	andeq	r0, r1, r1
        36e404:	00000000 	andeq	r0, r0, r0
        36e408:	00040007 	andeq	r0, r4, r7
        36e40c:	00070000 	andeq	r0, r7, r0
        36e410:	00000000 	andeq	r0, r0, r0
        36e414:	0000000d 	andeq	r0, r0, sp
        36e418:	00880001 	addeq	r0, r8, r1
        36e41c:	00000000 	andeq	r0, r0, r0
        36e420:	00010001 	andeq	r0, r1, r1
        36e424:	00000000 	andeq	r0, r0, r0
        36e428:	00050007 	andeq	r0, r5, r7
        36e42c:	00020000 	andeq	r0, r2, r0
        36e430:	00000000 	andeq	r0, r0, r0
        36e434:	0000000d 	andeq	r0, r0, sp
        36e438:	00880001 	addeq	r0, r8, r1
        36e43c:	00000000 	andeq	r0, r0, r0
        36e440:	00010001 	andeq	r0, r1, r1
        36e444:	00000000 	andeq	r0, r0, r0
        36e448:	00060002 	andeq	r0, r6, r2
        36e44c:	00070000 	andeq	r0, r7, r0
        36e450:	00000000 	andeq	r0, r0, r0
        36e454:	0000000d 	andeq	r0, r0, sp
        36e458:	00880001 	addeq	r0, r8, r1
        36e45c:	00000000 	andeq	r0, r0, r0
        36e460:	00010001 	andeq	r0, r1, r1
        36e464:	00000000 	andeq	r0, r0, r0
        36e468:	00070007 	andeq	r0, r7, r7
        36e46c:	00020000 	andeq	r0, r2, r0
        36e470:	00000000 	andeq	r0, r0, r0
        36e474:	0000000d 	andeq	r0, r0, sp
        36e478:	00880001 	addeq	r0, r8, r1
        36e47c:	00000000 	andeq	r0, r0, r0
        36e480:	00010001 	andeq	r0, r1, r1
        36e484:	00000000 	andeq	r0, r0, r0
        36e488:	00080002 	andeq	r0, r8, r2
        36e48c:	00070000 	andeq	r0, r7, r0
        36e490:	00000000 	andeq	r0, r0, r0
        36e494:	0000000d 	andeq	r0, r0, sp
        36e498:	00880001 	addeq	r0, r8, r1
        36e49c:	00000000 	andeq	r0, r0, r0
        36e4a0:	00010001 	andeq	r0, r1, r1
        36e4a4:	00000000 	andeq	r0, r0, r0
        36e4a8:	00090005 	andeq	r0, r9, r5
        36e4ac:	00050000 	andeq	r0, r5, r0
        36e4b0:	00000000 	andeq	r0, r0, r0
        36e4b4:	0000000d 	andeq	r0, r0, sp
        36e4b8:	00880001 	addeq	r0, r8, r1
        36e4bc:	00000000 	andeq	r0, r0, r0
        36e4c0:	00010001 	andeq	r0, r1, r1
        36e4c4:	00000000 	andeq	r0, r0, r0
        36e4c8:	000a0001 	andeq	r0, sl, r1
        36e4cc:	00090000 	andeq	r0, r9, r0
        36e4d0:	00000000 	andeq	r0, r0, r0
        36e4d4:	0000000d 	andeq	r0, r0, sp
        36e4d8:	00880001 	addeq	r0, r8, r1
        36e4dc:	00000000 	andeq	r0, r0, r0
        36e4e0:	00010001 	andeq	r0, r1, r1
        36e4e4:	00000000 	andeq	r0, r0, r0
        36e4e8:	000b0009 	andeq	r0, fp, r9
        36e4ec:	00010000 	andeq	r0, r1, r0
        36e4f0:	00000000 	andeq	r0, r0, r0
        36e4f4:	0000000d 	andeq	r0, r0, sp
        36e4f8:	00880001 	addeq	r0, r8, r1
        36e4fc:	00000000 	andeq	r0, r0, r0
        36e500:	00010001 	andeq	r0, r1, r1
        36e504:	00000000 	andeq	r0, r0, r0
        36e508:	00010014 	andeq	r0, r1, r4, lsl r0
        36e50c:	00090000 	andeq	r0, r9, r0
        36e510:	00000000 	andeq	r0, r0, r0
        36e514:	0000000c 	andeq	r0, r0, ip
        36e518:	00500001 	subeqs	r0, r0, r1
        36e51c:	00000000 	andeq	r0, r0, r0
        36e520:	00010001 	andeq	r0, r1, r1
        36e524:	00000000 	andeq	r0, r0, r0
        36e528:	000c0050 	andeq	r0, ip, r0, asr r0
        36e52c:	00010000 	andeq	r0, r1, r0
        36e530:	00000000 	andeq	r0, r0, r0
        36e534:	0000000e 	andeq	r0, r0, lr
        36e538:	00780001 	rsbeqs	r0, r8, r1
        36e53c:	00000000 	andeq	r0, r0, r0
        36e540:	00010001 	andeq	r0, r1, r1
        36e544:	00000000 	andeq	r0, r0, r0
        36e548:	00020001 	andeq	r0, r2, r1
        36e54c:	00010000 	andeq	r0, r1, r0
        36e550:	00000000 	andeq	r0, r0, r0
        36e554:	0000000d 	andeq	r0, r0, sp
        36e558:	00880001 	addeq	r0, r8, r1
        36e55c:	00000000 	andeq	r0, r0, r0
        36e560:	00010001 	andeq	r0, r1, r1
        36e564:	00000000 	andeq	r0, r0, r0
        36e568:	00020001 	andeq	r0, r2, r1
        36e56c:	00010000 	andeq	r0, r1, r0
        36e570:	00000000 	andeq	r0, r0, r0
        36e574:	0000000e 	andeq	r0, r0, lr
        36e578:	00780001 	rsbeqs	r0, r8, r1
        36e57c:	00000000 	andeq	r0, r0, r0
        36e580:	00010001 	andeq	r0, r1, r1
        36e584:	00000000 	andeq	r0, r0, r0
        36e588:	00030007 	andeq	r0, r3, r7
        36e58c:	00010000 	andeq	r0, r1, r0
        36e590:	00000000 	andeq	r0, r0, r0
        36e594:	0000000d 	andeq	r0, r0, sp
        36e598:	00880001 	addeq	r0, r8, r1
        36e59c:	00000000 	andeq	r0, r0, r0
        36e5a0:	00010001 	andeq	r0, r1, r1
        36e5a4:	00000000 	andeq	r0, r0, r0
        36e5a8:	00030007 	andeq	r0, r3, r7
        36e5ac:	00010000 	andeq	r0, r1, r0
        36e5b0:	00000000 	andeq	r0, r0, r0
        36e5b4:	0000000e 	andeq	r0, r0, lr
        36e5b8:	00780001 	rsbeqs	r0, r8, r1
        36e5bc:	00000000 	andeq	r0, r0, r0
        36e5c0:	00010001 	andeq	r0, r1, r1
        36e5c4:	00000000 	andeq	r0, r0, r0
        36e5c8:	000d0088 	andeq	r0, sp, r8, lsl #1
        36e5cc:	00010000 	andeq	r0, r1, r0
        36e5d0:	00000000 	andeq	r0, r0, r0
        36e5d4:	0000000f 	andeq	r0, r0, pc
        36e5d8:	00860001 	addeq	r0, r6, r1
        36e5dc:	00000000 	andeq	r0, r0, r0
        36e5e0:	00010001 	andeq	r0, r1, r1
        36e5e4:	00000000 	andeq	r0, r0, r0
        36e5e8:	000e0078 	andeq	r0, lr, r8, ror r0
        36e5ec:	00010000 	andeq	r0, r1, r0
        36e5f0:	00000000 	andeq	r0, r0, r0
        36e5f4:	0000000f 	andeq	r0, r0, pc
        36e5f8:	00860001 	addeq	r0, r6, r1
        36e5fc:	00000000 	andeq	r0, r0, r0
        36e600:	00010001 	andeq	r0, r1, r1
        36e604:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: bpNet
 * Address: 0036e618
 */
void globals::bpNet() {
    /*
        36e618:	00010003 	andeq	r0, r1, r3
        36e61c:	00100004 	andeqs	r0, r0, r4
        36e620:	00010000 	andeq	r0, r1, r0
        36e624:	0036e288 	eoreqs	lr, r6, r8, lsl #5
        36e628:	0036e608 	eoreqs	lr, r6, r8, lsl #12
        36e62c:	00010018 	andeq	r0, r1, r8, lsl r0
        36e630:	0036e308 	eoreqs	lr, r6, r8, lsl #6
        36e634:	0036dbec 	eoreqs	sp, r6, ip, ror #23
        36e638:	003aace4 	eoreqs	sl, sl, r4, ror #25
        36e650:	003948f0 	ldreqsh	r4, [r9], -r0
        36e65c:	01800086 	orreq	r0, r0, r6, lsl #1
        36e660:	03ea026a 	mvneq	r0, #-1610612730	; 0xa0000006
        36e664:	01e40000 	mvneq	r0, r0
        36e668:	000161ac 	andeq	r6, r1, ip, lsr #3
        36e66c:	000163f4 	streqd	r6, [r1], -r4
        36e670:	0086026a 	addeq	r0, r6, sl, ror #4
        36e674:	00000000 	andeq	r0, r0, r0
        36e678:	000161ac 	andeq	r6, r1, ip, lsr #3
        36e684:	00000039 	andeq	r0, r0, r9, lsr r0
        36e688:	0036e0c0 	eoreqs	lr, r6, r0, asr #1
        36e68c:	0036e1a4 	eoreqs	lr, r6, r4, lsr #3
        36e690:	005e0000 	subeqs	r0, lr, r0
        36e694:	01a60e42 	moveq	r0, r2, asr #28
        36e698:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: bit
 * Address: 003742f0
 */
void globals::bit() {
    /*
        3742f0:	00000001 	andeq	r0, r0, r1
        3742f4:	00000002 	andeq	r0, r0, r2
        3742f8:	00000004 	andeq	r0, r0, r4
        3742fc:	00000008 	andeq	r0, r0, r8
        374300:	00000010 	andeq	r0, r0, r0, lsl r0
        374304:	00000020 	andeq	r0, r0, r0, lsr #32
        374308:	00000040 	andeq	r0, r0, r0, asr #32
        37430c:	00000080 	andeq	r0, r0, r0, lsl #1
        374310:	00000100 	andeq	r0, r0, r0, lsl #2
        374314:	00000200 	andeq	r0, r0, r0, lsl #4
        374318:	00000400 	andeq	r0, r0, r0, lsl #8
        37431c:	00000800 	andeq	r0, r0, r0, lsl #16
        374320:	00001000 	andeq	r1, r0, r0
        374324:	00002000 	andeq	r2, r0, r0
        374328:	00004000 	andeq	r4, r0, r0
        37432c:	00008000 	andeq	r8, r0, r0
        374330:	00010000 	andeq	r0, r1, r0
        374334:	00020000 	andeq	r0, r2, r0
        374338:	00040000 	andeq	r0, r4, r0
        37433c:	00080000 	andeq	r0, r8, r0
        374340:	00100000 	andeqs	r0, r0, r0
        374344:	00200000 	eoreq	r0, r0, r0
        374348:	00400000 	subeq	r0, r0, r0
        37434c:	00800000 	addeq	r0, r0, r0
        374350:	01000000 	tsteq	r0, r0
        374354:	02000000 	andeq	r0, r0, #0	; 0x0
        374358:	04000000 	streq	r0, [r0]
        37435c:	08000000 	stmeqda	r0, {}
        374360:	10000000 	andne	r0, r0, r0
        374364:	20000000 	andcs	r0, r0, r0
        374368:	40000000 	andmi	r0, r0, r0
        37436c:	80000000 	andhi	r0, r0, r0
    */
}

/**
 * Symbol: bd_xrws_v
 * Address: 003750a0
 */
void globals::bd_xrws_v() {
    /*
        3750a0:	283c3c46 	ldmcsda	ip!, {r1, r2, r6, sl, fp, ip, sp}
        3750a4:	525a6478 	subpls	r6, sl, #2013265920	; 0x78000000
        3750a8:	8c960000 	ldchi	0, cr0, [r6]
    */
}

/**
 * Symbol: bd_xrlws
 * Address: 003750b8
 */
void globals::bd_xrlws() {
    /*
        3750b8:	1e283c3c 	mcrne	12, 1, r3, cr8, cr12, {1}
        3750bc:	46505a64 	ldrmib	r5, [r0], -r4, ror #20
        3750c0:	78960000 	ldmvcia	r6, {}
    */
}

/**
 * Symbol: bd_xrspl
 * Address: 003750d0
 */
void globals::bd_xrspl() {
    /*
        3750d0:	14283c50 	strnet	r3, [r8], -#3152
        3750d4:	646e7882 	strvsbt	r7, [lr], -#2178
        3750d8:	8c960000 	ldchi	0, cr0, [r6]
    */
}

/**
 * Symbol: bd_xrws_nv
 * Address: 003750e8
 */
void globals::bd_xrws_nv() {
    /*
        3750e8:	14283c50 	strnet	r3, [r8], -#3152
        3750ec:	5a646478 	bpl	1c8e2d4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x7da7c>
        3750f0:	a0c80000 	sbcge	r0, r8, r0
    */
}

/**
 * Symbol: BlockVexMapTable
 * Address: 00375604
 */
void globals::BlockVexMapTable() {
    /*
        375604:	ffffffff 	swinv	0x00ffffff
        375608:	ffffffff 	swinv	0x00ffffff
        37560c:	0102ffff 	streqd	pc, [r2, -pc]
        375610:	ffffffff 	swinv	0x00ffffff
        375614:	00010203 	andeq	r0, r1, r3, lsl #4
        375618:	ffffffff 	swinv	0x00ffffff
        37561c:	ffffffff 	swinv	0x00ffffff
        375620:	ffffffff 	swinv	0x00ffffff
        375624:	0001ffff 	streqd	pc, [r1], -pc
        375628:	ffffffff 	swinv	0x00ffffff
        37562c:	02000503 	andeq	r0, r0, #12582912	; 0xc00000
        375630:	07ffffff 	undefined
        375634:	0001ffff 	streqd	pc, [r1], -pc
        375638:	ffffffff 	swinv	0x00ffffff
        37563c:	0001ffff 	streqd	pc, [r1], -pc
        375640:	ffffffff 	swinv	0x00ffffff
        375644:	0100ffff 	streqd	pc, [r0, -pc]
        375648:	ffffffff 	swinv	0x00ffffff
        37564c:	0100ffff 	streqd	pc, [r0, -pc]
        375650:	ffffffff 	swinv	0x00ffffff
        375654:	ffffffff 	swinv	0x00ffffff
        375658:	ffffffff 	swinv	0x00ffffff
        37565c:	0001ffff 	streqd	pc, [r1], -pc
        375660:	ffffffff 	swinv	0x00ffffff
        375664:	010003ff 	streqd	r0, [r0, -pc]
        375668:	ffffffff 	swinv	0x00ffffff
        37566c:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 375773 <BlockVexMapTable+0x16f>
        375670:	ffffffff 	swinv	0x00ffffff
        375674:	0102ffff 	streqd	pc, [r2, -pc]
        375678:	ffffffff 	swinv	0x00ffffff
        37567c:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 375783 <BlockVexMapTable+0x17f>
        375680:	ffffffff 	swinv	0x00ffffff
        375684:	01000503 	tsteq	r0, r3, lsl #10
        375688:	04ffffff 	ldreqbt	pc, [pc], #fff	; 375690 <BlockVexMapTable+0x8c>
        37568c:	00ff01ff 	ldreqsh	r0, [pc, #1f]	; 3756b3 <BlockVexMapTable+0xaf>
        375690:	ffffffff 	swinv	0x00ffffff
        375694:	00010604 	andeq	r0, r1, r4, lsl #12
        375698:	03ffffff 	mvneqs	pc, #1020	; 0x3fc
        37569c:	0001ff03 	andeq	pc, r1, r3, lsl #30
        3756a0:	ffffffff 	swinv	0x00ffffff
        3756a4:	00020406 	andeq	r0, r2, r6, lsl #8
        3756a8:	05ff0807 	ldreqb	r0, [pc, #807]!	; 375eb7 <Functions+0x2a7>
        3756ac:	04000103 	streq	r0, [r0], -#259
        3756b0:	05ff02ff 	ldreqb	r0, [pc, #2ff]!	; 3759b7 <PalmerVexMapTable+0xb3>
        3756b4:	00060504 	andeq	r0, r6, r4, lsl #10
        3756b8:	0302ffff 	tsteqp	r2, #1020	; 0x3fc
        3756bc:	00030104 	andeq	r0, r3, r4, lsl #2
        3756c0:	05ffffff 	ldreqb	pc, [pc, #fff]!	; 3766c7 <xReject+0x27>
        3756c4:	0004ff06 	andeq	pc, r4, r6, lsl #30
        3756c8:	0502ff08 	streq	pc, [r2, -#3848]
        3756cc:	000201ff 	streqd	r0, [r2], -pc
        3756d0:	0406ffff 	streq	pc, [r6], -#4095
        3756d4:	0100ffff 	streqd	pc, [r0, -pc]
        3756d8:	ffffffff 	swinv	0x00ffffff
        3756dc:	0001ffff 	streqd	pc, [r1], -pc
        3756e0:	ffffffff 	swinv	0x00ffffff
        3756e4:	ffffffff 	swinv	0x00ffffff
        3756e8:	ffffffff 	swinv	0x00ffffff
        3756ec:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 3757f3 <BlockVexMapTable+0x1ef>
        3756f0:	ffffffff 	swinv	0x00ffffff
        3756f4:	ffffffff 	swinv	0x00ffffff
        3756f8:	ffffffff 	swinv	0x00ffffff
        3756fc:	000102ff 	streqd	r0, [r1], -pc
        375700:	ffffffff 	swinv	0x00ffffff
        375704:	0001ffff 	streqd	pc, [r1], -pc
        375708:	ffffffff 	swinv	0x00ffffff
        37570c:	00050201 	andeq	r0, r5, r1, lsl #4
        375710:	04ffffff 	ldreqbt	pc, [pc], #fff	; 375718 <BlockVexMapTable+0x114>
        375714:	01000203 	tsteq	r0, r3, lsl #4
        375718:	ffffffff 	swinv	0x00ffffff
        37571c:	01ffffff 	ldreqsh	pc, [pc, #ff]	; 375823 <BlockVexMapTable+0x21f>
        375720:	ffffffff 	swinv	0x00ffffff
        375724:	01ffffff 	ldreqsh	pc, [pc, #ff]	; 37582b <BlockVexMapTable+0x227>
        375728:	ffffffff 	swinv	0x00ffffff
        37572c:	05030107 	streq	r0, [r3, -#263]
        375730:	0806ffff 	stmeqda	r6, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, sp, lr, pc}
        375734:	03040908 	tsteq	r4, #131072	; 0x20000
        375738:	ffffffff 	swinv	0x00ffffff
        37573c:	05ff03ff 	ldreqb	r0, [pc, #3ff]!	; 375b43 <PalmerVexMapTable+0x23f>
        375740:	ffffffff 	swinv	0x00ffffff
        375744:	000107ff 	streqd	r0, [r1], -pc
        375748:	ffffffff 	swinv	0x00ffffff
        37574c:	03ffffff 	mvneqs	pc, #1020	; 0x3fc
        375750:	ffffffff 	swinv	0x00ffffff
        375754:	000401ff 	streqd	r0, [r4], -pc
        375758:	ffffffff 	swinv	0x00ffffff
        37575c:	0102ffff 	streqd	pc, [r2, -pc]
        375760:	ffffffff 	swinv	0x00ffffff
        375764:	01ffffff 	ldreqsh	pc, [pc, #ff]	; 37586b <BlockVexMapTable+0x267>
        375768:	ffffffff 	swinv	0x00ffffff
        37576c:	0203ffff 	andeq	pc, r3, #1020	; 0x3fc
        375770:	ffffffff 	swinv	0x00ffffff
        375774:	0103ffff 	streqd	pc, [r3, -pc]
        375778:	ffffffff 	swinv	0x00ffffff
        37577c:	0403ffff 	streq	pc, [r3], -#4095
        375780:	ffffffff 	swinv	0x00ffffff
        375784:	01ffff04 	mvneqs	pc, r4, lsl #30
        375788:	ffffffff 	swinv	0x00ffffff
        37578c:	0001ffff 	streqd	pc, [r1], -pc
        375790:	ffffffff 	swinv	0x00ffffff
        375794:	000102ff 	streqd	r0, [r1], -pc
        375798:	ffffffff 	swinv	0x00ffffff
        37579c:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 3758a3 <BlockVexMapTable+0x29f>
        3757a0:	ffffffff 	swinv	0x00ffffff
        3757a4:	0507ffff 	streq	pc, [r7, -#4095]
        3757a8:	ffffffff 	swinv	0x00ffffff
        3757ac:	0102ffff 	streqd	pc, [r2, -pc]
        3757b0:	ffffffff 	swinv	0x00ffffff
        3757b4:	03ffffff 	mvneqs	pc, #1020	; 0x3fc
        3757b8:	ffffffff 	swinv	0x00ffffff
        3757bc:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 3758c3 <BlockVexMapTable+0x2bf>
        3757c0:	ffffffff 	swinv	0x00ffffff
        3757c4:	05010aff 	streq	r0, [r1, -#2815]
        3757c8:	ffffffff 	swinv	0x00ffffff
        3757cc:	0002ffff 	streqd	pc, [r2], -pc
        3757d0:	ffffffff 	swinv	0x00ffffff
        3757d4:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 3758db <BlockVexMapTable+0x2d7>
        3757d8:	ffffffff 	swinv	0x00ffffff
        3757dc:	ffffffff 	swinv	0x00ffffff
        3757e0:	ffffffff 	swinv	0x00ffffff
        3757e4:	ffffffff 	swinv	0x00ffffff
        3757e8:	ffffffff 	swinv	0x00ffffff
        3757ec:	ffffffff 	swinv	0x00ffffff
        3757f0:	ffffffff 	swinv	0x00ffffff
        3757f4:	ffffffff 	swinv	0x00ffffff
        3757f8:	ffffffff 	swinv	0x00ffffff
        3757fc:	ffffffff 	swinv	0x00ffffff
        375800:	ffffffff 	swinv	0x00ffffff
        375804:	ffffffff 	swinv	0x00ffffff
        375808:	ffffffff 	swinv	0x00ffffff
        37580c:	01020605 	tsteq	r2, r5, lsl #12
        375810:	040807ff 	streq	r0, [r8], -#2047
        375814:	00ff0107 	rsceqs	r0, pc, r7, lsl #2
        375818:	050affff 	streq	pc, [sl, -#4095]
        37581c:	0002ffff 	streqd	pc, [r2], -pc
        375820:	ffffffff 	swinv	0x00ffffff
        375824:	ff000206 	swinv	0x00000206
        375828:	070804ff 	undefined
        37582c:	00020104 	andeq	r0, r2, r4, lsl #2
        375830:	03050607 	tsteq	r5, #7340032	; 0x700000
        375834:	0205060b 	andeq	r0, r5, #11534336	; 0xb00000
        375838:	0d0effff 	stceq	15, cr15, [lr, -#1020]
        37583c:	0004ffff 	streqd	pc, [r4], -pc
        375840:	ffffffff 	swinv	0x00ffffff
        375844:	020600ff 	andeq	r0, r6, #255	; 0xff
        375848:	ffffffff 	swinv	0x00ffffff
        37584c:	03ffff05 	mvneqs	pc, #20	; 0x14
        375850:	ffffffff 	swinv	0x00ffffff
        375854:	01050406 	tsteq	r5, r6, lsl #8
        375858:	ffffffff 	swinv	0x00ffffff
        37585c:	01000609 	tsteq	r0, r9, lsl #12
        375860:	ffffffff 	swinv	0x00ffffff
        375864:	010405ff 	streqd	r0, [r4, -pc]
        375868:	ffffffff 	swinv	0x00ffffff
        37586c:	020304ff 	andeq	r0, r3, #-16777216	; 0xff000000
        375870:	ffffffff 	swinv	0x00ffffff
        375874:	01030705 	tsteq	r3, r5, lsl #14
        375878:	ffffffff 	swinv	0x00ffffff
        37587c:	0102ffff 	streqd	pc, [r2, -pc]
        375880:	ffffffff 	swinv	0x00ffffff
        375884:	040301ff 	streq	r0, [r3], -#511
        375888:	ffffffff 	swinv	0x00ffffff
        37588c:	01000207 	tsteq	r0, r7, lsl #4
        375890:	ffffffff 	swinv	0x00ffffff
        375894:	01000407 	tsteq	r0, r7, lsl #8
        375898:	0cffffff 	ldceql	15, cr15, [pc], #1020
        37589c:	0006ffff 	streqd	pc, [r6], -pc
        3758a0:	ffffffff 	swinv	0x00ffffff
        3758a4:	01030eff 	streqd	r0, [r3, -pc]
        3758a8:	ffffffff 	swinv	0x00ffffff
        3758ac:	010304ff 	streqd	r0, [r3, -pc]
        3758b0:	ffffffff 	swinv	0x00ffffff
        3758b4:	0103ffff 	streqd	pc, [r3, -pc]
        3758b8:	ffffffff 	swinv	0x00ffffff
        3758bc:	01ffffff 	ldreqsh	pc, [pc, #ff]	; 3759c3 <PalmerVexMapTable+0xbf>
        3758c0:	ffffffff 	swinv	0x00ffffff
        3758c4:	04ff0507 	ldreqbt	r0, [pc], #507	; 3758cc <BlockVexMapTable+0x2c8>
        3758c8:	08ffffff 	ldmeqia	pc!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, sp, lr, pc}^
        3758cc:	01020403 	tsteq	r2, r3, lsl #8
        3758d0:	05ffffff 	ldreqb	pc, [pc, #fff]!	; 3768d7 <szPtLet+0x7>
        3758d4:	000205ff 	streqd	r0, [r2], -pc
        3758d8:	ffffffff 	swinv	0x00ffffff
        3758dc:	ffffffff 	swinv	0x00ffffff
        3758e0:	ffffffff 	swinv	0x00ffffff
        3758e4:	ffffffff 	swinv	0x00ffffff
        3758e8:	ffffffff 	swinv	0x00ffffff
        3758ec:	ffffffff 	swinv	0x00ffffff
        3758f0:	ffffffff 	swinv	0x00ffffff
        3758f4:	ffffffff 	swinv	0x00ffffff
        3758f8:	ffffffff 	swinv	0x00ffffff
        3758fc:	0201ffff 	andeq	pc, r1, #1020	; 0x3fc
        375900:	ffffffff 	swinv	0x00ffffff
    */
}

/**
 * Symbol: BlockVexMapTableSize
 * Address: 00375c08
 */
void globals::BlockVexMapTableSize() {
    /*
        375c08:	03000000 	tsteq	r0, #0	; 0x0
    */
}

/**
 * Symbol: BlockSmall2Cap
 * Address: 00376fe4
 */
void globals::BlockSmall2Cap() {
    /*
        376fe4:	0f010f00 	swieq	0x00010f00
        376fe8:	020f0f0f 	andeq	r0, pc, #60	; 0x3c
        376fec:	0f000f0f 	swieq	0x00000f0f
        376ff0:	0f0f0f0f 	swieq	0x000f0f0f
        376ff4:	0f0f010f 	swieq	0x000f010f
        376ff8:	0f0f0f0f 	swieq	0x000f0f0f
        376ffc:	0f0f0f00 	swieq	0x000f0f00
        377000:	0f0f0f0f 	swieq	0x000f0f0f
        377004:	0f0f0f0f 	swieq	0x000f0f0f
        377008:	0001020f 	andeq	r0, r1, pc, lsl #4
        37700c:	0f030f0f 	swieq	0x00030f0f
        377010:	0f0f0200 	swieq	0x000f0200
        377014:	0f0f0f01 	swieq	0x000f0f01
        377018:	0f0f0f00 	swieq	0x000f0f00
        37701c:	020f0f0f 	andeq	r0, pc, #60	; 0x3c
        377020:	0f0f0f00 	swieq	0x000f0f00
        377024:	0f0f0f0f 	swieq	0x000f0f0f
        377028:	0f0f0f0f 	swieq	0x000f0f0f
        37702c:	0f000f0f 	swieq	0x00000f0f
        377030:	0f0f0f0f 	swieq	0x000f0f0f
        377034:	0f0f0f01 	swieq	0x000f0f01
        377038:	000f0f0f 	andeq	r0, pc, pc, lsl #30
        37703c:	0f0f0f00 	swieq	0x000f0f00
        377040:	0f020f0f 	swieq	0x00020f0f
        377044:	0f0f0f0f 	swieq	0x000f0f0f
        377048:	0f010f0f 	swieq	0x00010f0f
        37704c:	0f0f0f0f 	swieq	0x000f0f0f
        377050:	0f0f0f0f 	swieq	0x000f0f0f
        377054:	0f0f0f0f 	swieq	0x000f0f0f
        377058:	0f000f0f 	swieq	0x00000f0f
        37705c:	0f0f0f0f 	swieq	0x000f0f0f
        377060:	0f0f0f01 	swieq	0x000f0f01
        377064:	020f0f0f 	andeq	r0, pc, #60	; 0x3c
        377068:	0f0f0f0f 	swieq	0x000f0f0f
        37706c:	0f000f0f 	swieq	0x00000f0f
        377070:	0f0f0f0f 	swieq	0x000f0f0f
        377074:	0f0f0f00 	swieq	0x000f0f00
        377078:	010f0f0f 	tsteq	pc, pc, lsl #30
        37707c:	0f000f0f 	swieq	0x00000f0f
        377080:	0f0f0f0f 	swieq	0x000f0f0f
        377084:	0f0f000f 	swieq	0x000f000f
        377088:	0f0f0f0f 	swieq	0x000f0f0f
        37708c:	0f0f0f0f 	swieq	0x000f0f0f
        377090:	0f0f000f 	swieq	0x000f000f
        377094:	0f0f0f0f 	swieq	0x000f0f0f
        377098:	0f01020f 	swieq	0x0001020f
        37709c:	0f0f0f0f 	swieq	0x000f0f0f
        3770a0:	0f0f000f 	swieq	0x000f000f
        3770a4:	0f0f0f0f 	swieq	0x000f0f0f
        3770a8:	0f0f0f00 	swieq	0x000f0f00
        3770ac:	0f0f0f0f 	swieq	0x000f0f0f
        3770b0:	0f0f0f0f 	swieq	0x000f0f0f
        3770b4:	0f0f0f0f 	swieq	0x000f0f0f
        3770b8:	0f0f0f0f 	swieq	0x000f0f0f
        3770bc:	0f0f0f01 	swieq	0x000f0f01
        3770c0:	0f000f0f 	swieq	0x00000f0f
        3770c4:	0f000f0f 	swieq	0x00000f0f
        3770c8:	0f0f0f0f 	swieq	0x000f0f0f
        3770cc:	0f0f0f0f 	swieq	0x000f0f0f
        3770d0:	0f0f0f0f 	swieq	0x000f0f0f
        3770d4:	0f0f0f0f 	swieq	0x000f0f0f
        3770d8:	0f0f0f0f 	swieq	0x000f0f0f
        3770dc:	0f0f0f0f 	swieq	0x000f0f0f
        3770e0:	0f0f0f0f 	swieq	0x000f0f0f
        3770e4:	0f0f0f0f 	swieq	0x000f0f0f
        3770e8:	0f000000 	swieq	0x00000000
    */
}

/**
 * Symbol: blackCompleteTbl
 * Address: 0037829c
 */
void globals::blackCompleteTbl() {
    /*
        37829c:	000a03b0 	streqh	r0, [sl], -r0
        3782a0:	00030002 	andeq	r0, r3, r2
        3782a4:	00020003 	andeq	r0, r2, r3
        3782a8:	00020001 	andeq	r0, r2, r1
        3782ac:	00030006 	andeq	r0, r3, r6
        3782b0:	0004000c 	andeq	r0, r4, ip
        3782b4:	00040004 	andeq	r0, r4, r4
        3782b8:	00050018 	andeq	r0, r5, r8, lsl r0
        3782bc:	00060028 	andeq	r0, r6, r8, lsr #32
        3782c0:	00060008 	andeq	r0, r6, r8
        3782c4:	00070010 	andeq	r0, r7, r0, lsl r0
        3782c8:	00070050 	andeq	r0, r7, r0, asr r0
        3782cc:	00070070 	andeq	r0, r7, r0, ror r0
        3782d0:	00080020 	andeq	r0, r8, r0, lsr #32
        3782d4:	000800e0 	andeq	r0, r8, r0, ror #1
        3782d8:	00090030 	andeq	r0, r9, r0, lsr r0
        3782dc:	000a03a0 	andeq	r0, sl, r0, lsr #7
        3782e0:	000a0060 	andeq	r0, sl, r0, rrx
        3782e4:	000a0040 	andeq	r0, sl, r0, asr #32
        3782e8:	000b0730 	andeq	r0, fp, r0, lsr r7
        3782ec:	000b00b0 	streqh	r0, [fp], -r0
        3782f0:	000b01b0 	streqh	r0, [fp], -r0
        3782f4:	000b0760 	andeq	r0, fp, r0, ror #14
        3782f8:	000b00a0 	andeq	r0, fp, r0, lsr #1
        3782fc:	000b0740 	andeq	r0, fp, r0, asr #14
        378300:	000b00c0 	andeq	r0, fp, r0, asr #1
        378304:	000c0530 	andeq	r0, ip, r0, lsr r5
        378308:	000c0d30 	andeq	r0, ip, r0, lsr sp
        37830c:	000c0330 	andeq	r0, ip, r0, lsr r3
        378310:	000c0b30 	andeq	r0, ip, r0, lsr fp
        378314:	000c0160 	andeq	r0, ip, r0, ror #2
        378318:	000c0960 	andeq	r0, ip, r0, ror #18
        37831c:	000c0560 	andeq	r0, ip, r0, ror #10
        378320:	000c0d60 	andeq	r0, ip, r0, ror #26
        378324:	000c04b0 	streqh	r0, [ip], -r0
        378328:	000c0cb0 	streqh	r0, [ip], -r0
        37832c:	000c02b0 	streqh	r0, [ip], -r0
        378330:	000c0ab0 	streqh	r0, [ip], -r0
        378334:	000c06b0 	streqh	r0, [ip], -r0
        378338:	000c0eb0 	streqh	r0, [ip], -r0
        37833c:	000c0360 	andeq	r0, ip, r0, ror #6
        378340:	000c0b60 	andeq	r0, ip, r0, ror #22
        378344:	000c05b0 	streqh	r0, [ip], -r0
        378348:	000c0db0 	streqh	r0, [ip], -r0
        37834c:	000c02a0 	andeq	r0, ip, r0, lsr #5
        378350:	000c0aa0 	andeq	r0, ip, r0, lsr #21
        378354:	000c06a0 	andeq	r0, ip, r0, lsr #13
        378358:	000c0ea0 	andeq	r0, ip, r0, lsr #29
        37835c:	000c0260 	andeq	r0, ip, r0, ror #4
        378360:	000c0a60 	andeq	r0, ip, r0, ror #20
        378364:	000c04a0 	andeq	r0, ip, r0, lsr #9
        378368:	000c0ca0 	andeq	r0, ip, r0, lsr #25
        37836c:	000c0240 	andeq	r0, ip, r0, asr #4
        378370:	000c0ec0 	andeq	r0, ip, r0, asr #29
        378374:	000c01c0 	andeq	r0, ip, r0, asr #3
        378378:	000c0e40 	andeq	r0, ip, r0, asr #28
        37837c:	000c0140 	andeq	r0, ip, r0, asr #2
        378380:	000c01a0 	andeq	r0, ip, r0, lsr #3
        378384:	000c09a0 	andeq	r0, ip, r0, lsr #19
        378388:	000c0d40 	andeq	r0, ip, r0, asr #26
        37838c:	000c0340 	andeq	r0, ip, r0, asr #6
        378390:	000c05a0 	andeq	r0, ip, r0, lsr #11
        378394:	000c0660 	andeq	r0, ip, r0, ror #12
        378398:	000c0e60 	andeq	r0, ip, r0, ror #28
    */
}

/**
 * Symbol: blackMakeupTbl
 * Address: 0037839c
 */
void globals::blackMakeupTbl() {
    /*
        37839c:	00000000 	andeq	r0, r0, r0
        3783a0:	000a03c0 	andeq	r0, sl, r0, asr #7
        3783a4:	000c0130 	andeq	r0, ip, r0, lsr r1
        3783a8:	000c0930 	andeq	r0, ip, r0, lsr r9
        3783ac:	000c0da0 	andeq	r0, ip, r0, lsr #27
        3783b0:	000c0cc0 	andeq	r0, ip, r0, asr #25
        3783b4:	000c02c0 	andeq	r0, ip, r0, asr #5
        3783b8:	000c0ac0 	andeq	r0, ip, r0, asr #21
        3783bc:	000d06c0 	andeq	r0, sp, r0, asr #13
        3783c0:	000d16c0 	andeq	r1, sp, r0, asr #13
        3783c4:	000d0a40 	andeq	r0, sp, r0, asr #20
        3783c8:	000d1a40 	andeq	r1, sp, r0, asr #20
        3783cc:	000d0640 	andeq	r0, sp, r0, asr #12
        3783d0:	000d1640 	andeq	r1, sp, r0, asr #12
        3783d4:	000d09c0 	andeq	r0, sp, r0, asr #19
        3783d8:	000d19c0 	andeq	r1, sp, r0, asr #19
        3783dc:	000d05c0 	andeq	r0, sp, r0, asr #11
        3783e0:	000d15c0 	andeq	r1, sp, r0, asr #11
        3783e4:	000d0dc0 	andeq	r0, sp, r0, asr #27
        3783e8:	000d1dc0 	andeq	r1, sp, r0, asr #27
        3783ec:	000d0940 	andeq	r0, sp, r0, asr #18
        3783f0:	000d1940 	andeq	r1, sp, r0, asr #18
        3783f4:	000d0540 	andeq	r0, sp, r0, asr #10
        3783f8:	000d1540 	andeq	r1, sp, r0, asr #10
        3783fc:	000d0b40 	andeq	r0, sp, r0, asr #22
        378400:	000d1b40 	andeq	r1, sp, r0, asr #22
        378404:	000d04c0 	andeq	r0, sp, r0, asr #9
        378408:	000d14c0 	andeq	r1, sp, r0, asr #9
        37840c:	000c0800 	andeq	r0, ip, r0, lsl #16
    */
}

/**
 * Symbol: blast4bits
 * Address: 0037a85c
 */
void globals::blast4bits() {
    /*
        37a86c:	0000ffff 	streqd	pc, [r0], -pc
        37a870:	ffffffff 	swinv	0x00ffffff
        37a874:	ffffffff 	swinv	0x00ffffff
        37a878:	ffff0000 	swinv	0x00ff0000
        37a87c:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 37a983 <blast4bits+0x127>
        37a880:	ffffffff 	swinv	0x00ffffff
        37a884:	ffffffff 	swinv	0x00ffffff
        37a888:	ffffff00 	swinv	0x00ffff00
        37a88c:	00ff0000 	rsceqs	r0, pc, r0
        37a898:	0000ff00 	andeq	pc, r0, r0, lsl #30
        37a89c:	0ff00000 	swieq	0x00f00000	; IMB
        37a8a8:	00000ff0 	streqd	r0, [r0], -r0
        37a8ac:	0ff000ff 	swieq	0x00f000ff
        37a8b0:	ffffffff 	swinv	0x00ffffff
        37a8b4:	ffffffff 	swinv	0x00ffffff
        37a8b8:	ff000ff0 	swinv	0x00000ff0
        37a8bc:	0ff00fff 	swieq	0x00f00fff
        37a8c0:	ffffff0f 	swinv	0x00ffff0f
        37a8c4:	fffffff0 	swinv	0x00fffff0
        37a8c8:	0ff00ff0 	swieq	0x00f00ff0
        37a8cc:	0ff00fff 	swieq	0x00f00fff
        37a8d0:	f00fff00 	andnv	pc, pc, r0, lsl #30
        37a8d4:	ffffff00 	swinv	0x00ffff00
        37a8d8:	fff00ff0 	swinv	0x00f00ff0
        37a8dc:	0ff00fff 	swieq	0x00f00fff
        37a8e0:	f00fffff 	strnvd	pc, [pc], -pc
        37a8e4:	ffffff0f 	swinv	0x00ffff0f
        37a8e8:	fff00ff0 	swinv	0x00f00ff0
        37a8ec:	0ff00fff 	swieq	0x00f00fff
        37a8f0:	ff00ffff 	swinv	0x0000ffff
        37a8f4:	0000ffff 	streqd	pc, [r0], -pc
        37a8f8:	fff00ff0 	swinv	0x00f00ff0
        37a8fc:	0ff00fff 	swieq	0x00f00fff
        37a900:	ffffff00 	swinv	0x00ffff00
        37a904:	00000fff 	streqd	r0, [r0], -pc
        37a908:	00f00ff0 	ldreqsh	r0, [r0], #240
        37a90c:	0ff00f00 	swieq	0x00f00f00
        37a910:	fffff000 	swinv	0x00fff000
        37a914:	ffff00f0 	swinv	0x00ff00f0
        37a918:	00f00ff0 	ldreqsh	r0, [r0], #240
        37a91c:	0ff00f00 	swieq	0x00f00f00
        37a920:	0fff00ff 	swieq	0x00ff00ff
        37a924:	f0ff00f0 	ldrnvsh	r0, [pc, #0]	; 37a92c <blast4bits+0xd0>
        37a928:	fff00ff0 	swinv	0x00f00ff0
        37a92c:	0ff00fff 	swieq	0x00f00fff
        37a930:	f0f00fff 	ldrnvsh	r0, [r0], #255
        37a934:	00f00fff 	ldreqsh	r0, [r0], #255
        37a938:	fff00ff0 	swinv	0x00f00ff0
        37a93c:	0ff00fff 	swieq	0x00f00fff
        37a940:	fff00ff0 	swinv	0x00f00ff0
        37a944:	0000ffff 	streqd	pc, [r0], -pc
        37a948:	fff00ff0 	swinv	0x00f00ff0
        37a94c:	0ff00fff 	swieq	0x00f00fff
        37a950:	fff00f00 	swinv	0x00f00f00
        37a954:	f00fffff 	strnvd	pc, [pc], -pc
        37a958:	fff00ff0 	swinv	0x00f00ff0
        37a95c:	0ff00fff 	swieq	0x00f00fff
        37a960:	ffff00ff 	swinv	0x00ff00ff
        37a964:	ffffffff 	swinv	0x00ffffff
        37a968:	fff00ff0 	swinv	0x00f00ff0
        37a96c:	0ff00fff 	swieq	0x00f00fff
        37a970:	fffff00f 	swinv	0x00fff00f
        37a974:	ffffffff 	swinv	0x00ffffff
        37a978:	fff00ff0 	swinv	0x00f00ff0
        37a97c:	0ff00fff 	swieq	0x00f00fff
        37a980:	ffffff00 	swinv	0x00ffff00
        37a984:	ffffffff 	swinv	0x00ffffff
        37a988:	fff00ff0 	swinv	0x00f00ff0
        37a98c:	0ff00fff 	swieq	0x00f00fff
        37a990:	ffffff00 	swinv	0x00ffff00
        37a994:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 37aa9b <blast2bits+0x3f>
        37a998:	fff00ff0 	swinv	0x00f00ff0
        37a99c:	0ff00fff 	swieq	0x00f00fff
        37a9a0:	ffffff00 	swinv	0x00ffff00
        37a9a4:	0fffffff 	swieq	0x00ffffff
        37a9a8:	fff00ff0 	swinv	0x00f00ff0
        37a9ac:	0ff00fff 	swieq	0x00f00fff
        37a9b0:	fffffff0 	swinv	0x00fffff0
        37a9b4:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 37aabb <blast2bits+0x5f>
        37a9b8:	fff00ff0 	swinv	0x00f00ff0
        37a9bc:	0ff00fff 	swieq	0x00f00fff
        37a9c0:	ffffff00 	swinv	0x00ffff00
        37a9c4:	000fffff 	streqd	pc, [pc], -pc
        37a9c8:	fff00ff0 	swinv	0x00f00ff0
        37a9cc:	0ff00fff 	swieq	0x00f00fff
        37a9d0:	fffffff0 	swinv	0x00fffff0
        37a9d4:	fff0ffff 	swinv	0x00f0ffff
        37a9d8:	fff00ff0 	swinv	0x00f00ff0
        37a9dc:	0ff00fff 	swieq	0x00f00fff
        37a9e0:	ffffffff 	swinv	0x00ffffff
        37a9e4:	ffffffff 	swinv	0x00ffffff
        37a9e8:	fff00ff0 	swinv	0x00f00ff0
        37a9ec:	0ff000ff 	swieq	0x00f000ff
        37a9f0:	ffffffff 	swinv	0x00ffffff
        37a9f4:	ffffffff 	swinv	0x00ffffff
        37a9f8:	ff000ff0 	swinv	0x00000ff0
        37a9fc:	0ff00000 	swieq	0x00f00000	; IMB
        37aa08:	00000ff0 	streqd	r0, [r0], -r0
        37aa0c:	00ff0000 	rsceqs	r0, pc, r0
        37aa18:	0000ff00 	andeq	pc, r0, r0, lsl #30
        37aa1c:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 37ab23 <blast2bits+0xc7>
        37aa20:	ffffffff 	swinv	0x00ffffff
        37aa24:	ffffffff 	swinv	0x00ffffff
        37aa28:	ffffff00 	swinv	0x00ffff00
        37aa2c:	0000ffff 	streqd	pc, [r0], -pc
        37aa30:	ffffffff 	swinv	0x00ffffff
        37aa34:	ffffffff 	swinv	0x00ffffff
        37aa38:	ffff0000 	swinv	0x00ff0000
    */
}

/**
 * Symbol: blast2bits
 * Address: 0037aa5c
 */
void globals::blast2bits() {
    /*
        37aa64:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 37ab6b <blastbits+0xf>
        37aa68:	ffffff00 	swinv	0x00ffff00
        37aa6c:	0fffffff 	swieq	0x00ffffff
        37aa70:	fffffff0 	swinv	0x00fffff0
        37aa74:	0f000000 	swieq	0x00000000
        37aa78:	000000f0 	streqd	r0, [r0], -r0
        37aa7c:	3c000000 	stccc	0, cr0, [r0]
        37aa80:	0000003c 	andeq	r0, r0, ip, lsr r0
        37aa84:	3c0fffff 	stccc	15, cr15, [pc], -#1020
        37aa88:	fffff03c 	swinv	0x00fff03c
        37aa8c:	3c3ffff3 	ldccc	15, cr15, [pc], -#972
        37aa90:	fffc3c3c 	swinv	0x00fc3c3c
        37aa94:	3c3fc3f0 	ldccc	3, cr12, [pc], -#960
        37aa98:	fff0fc3c 	swinv	0x00f0fc3c
        37aa9c:	3c3fc3ff 	ldccc	3, cr12, [pc], -#1020
        37aaa0:	ffc3fc3c 	swinv	0x00c3fc3c
        37aaa4:	3c3ff0ff 	ldccc	0, cr15, [pc], -#1020
        37aaa8:	00fffc3c 	rsceqs	pc, pc, ip, lsr ip
        37aaac:	3c3ffff0 	ldccc	15, cr15, [pc], -#960
        37aab0:	003f0c3c 	eoreqs	r0, pc, ip, lsr ip
        37aab4:	3c30ffc0 	ldccc	15, cr15, [r0], -#768
        37aab8:	ff0c0c3c 	swinv	0x000c0c3c
        37aabc:	3c303f0f 	ldccc	15, cr3, [r0], -#60
        37aac0:	cf0cfc3c 	swigt	0x000cfc3c
        37aac4:	3c3fcc3f 	ldccc	12, cr12, [pc], -#252
        37aac8:	0c3ffc3c 	ldceq	12, cr15, [pc], -#240
        37aacc:	3c3ffc3c 	ldccc	12, cr15, [pc], -#240
        37aad0:	00fffc3c 	rsceqs	pc, pc, ip, lsr ip
        37aad4:	3c3ffc30 	ldccc	12, cr15, [pc], -#192
        37aad8:	c3fffc3c 	mvngts	pc, #15360	; 0x3c00
        37aadc:	3c3fff0f 	ldccc	15, cr15, [pc], -#60
        37aae0:	fffffc3c 	swinv	0x00fffc3c
        37aae4:	3c3fffc3 	ldccc	15, cr15, [pc], -#780
        37aae8:	fffffc3c 	swinv	0x00fffc3c
        37aaec:	3c3ffff0 	ldccc	15, cr15, [pc], -#960
        37aaf0:	fffffc3c 	swinv	0x00fffc3c
        37aaf4:	3c3ffff0 	ldccc	15, cr15, [pc], -#960
        37aaf8:	0ffffc3c 	swieq	0x00fffc3c
        37aafc:	3c3ffff0 	ldccc	15, cr15, [pc], -#960
        37ab00:	3ffffc3c 	swicc	0x00fffc3c
        37ab04:	3c3ffff0 	ldccc	15, cr15, [pc], -#960
        37ab08:	0ffffc3c 	swieq	0x00fffc3c
        37ab0c:	3c3ffff0 	ldccc	15, cr15, [pc], -#960
        37ab10:	03fffc3c 	mvneqs	pc, #15360	; 0x3c00
        37ab14:	3c3ffffc 	ldccc	15, cr15, [pc], -#1008
        37ab18:	3ffffc3c 	swicc	0x00fffc3c
        37ab1c:	3c3fffff 	ldccc	15, cr15, [pc], -#1020
        37ab20:	fffffc3c 	swinv	0x00fffc3c
        37ab24:	3c0fffff 	stccc	15, cr15, [pc], -#1020
        37ab28:	fffff03c 	swinv	0x00fff03c
        37ab2c:	3c000000 	stccc	0, cr0, [r0]
        37ab30:	0000003c 	andeq	r0, r0, ip, lsr r0
        37ab34:	0f000000 	swieq	0x00000000
        37ab38:	000000f0 	streqd	r0, [r0], -r0
        37ab3c:	0fffffff 	swieq	0x00ffffff
        37ab40:	fffffff0 	swinv	0x00fffff0
        37ab44:	00ffffff 	ldreqsh	pc, [pc, #ff]	; 37ac4b <gUnicodeLookupTable+0x33>
        37ab48:	ffffff00 	swinv	0x00ffff00
    */
}

/**
 * Symbol: blastbits
 * Address: 0037ab5c
 */
void globals::blastbits() {
    /*
        37ab5c:	00000000 	andeq	r0, r0, r0
        37ab60:	0ffffff0 	swieq	0x00fffff0
        37ab64:	3ffffffc 	swicc	0x00fffffc
        37ab68:	3000000c 	andcc	r0, r0, ip
        37ab6c:	60000006 	andvs	r0, r0, r6
        37ab70:	63ffffc6 	mvnvss	pc, #792	; 0x318
        37ab74:	67fdfe66 	ldrvsb	pc, [sp, r6, ror #28]!
        37ab78:	679cfce6 	ldrvs	pc, [ip, r6, ror #25]
        37ab7c:	679ffde6 	ldrvs	pc, [pc, r6, ror #27]
        37ab80:	67cf0fe6 	strvsb	r0, [pc, r6, ror #31]
        37ab84:	67fc0726 	ldrvsb	r0, [ip, r6, lsr #14]!
        37ab88:	64f8f226 	ldrvsbt	pc, [r8], #550
        37ab8c:	6473b2e6 	ldrvsbt	fp, [r3], -#742
        37ab90:	67a727e6 	strvs	r2, [r7, r6, ror #15]!
        37ab94:	67e60fe6 	strvsb	r0, [r6, r6, ror #31]!
        37ab98:	67e49fe6 	strvsb	r9, [r4, r6, ror #31]!
        37ab9c:	67f3ffe6 	ldrvsb	pc, [r3, r6, ror #31]!
        37aba0:	67f9ffe6 	ldrvsb	pc, [r9, r6, ror #31]!
        37aba4:	67fcffe6 	ldrvsb	pc, [ip, r6, ror #31]!
        37aba8:	67fc3fe6 	ldrvsb	r3, [ip, r6, ror #31]!
        37abac:	67fc7fe6 	ldrvsb	r7, [ip, r6, ror #31]!
        37abb0:	67fe3fe6 	ldrvsb	r3, [lr, r6, ror #31]!
        37abb4:	67fc1fe6 	ldrvsb	r1, [ip, r6, ror #31]!
        37abb8:	67fe7fe6 	ldrvsb	r7, [lr, r6, ror #31]!
        37abbc:	67ffffe6 	ldrvsb	pc, [pc, r6, ror #31]!
        37abc0:	63ffffc6 	mvnvss	pc, #792	; 0x318
        37abc4:	60000006 	andvs	r0, r0, r6
        37abc8:	3000000c 	andcc	r0, r0, ip
        37abcc:	3ffffffc 	swicc	0x00fffffc
        37abd0:	0ffffff0 	swieq	0x00fffff0
        37abf8:	00210022 	eoreq	r0, r1, r2, lsr #32
        37abfc:	00270028 	eoreq	r0, r7, r8, lsr #32
        37ac00:	0029002c 	eoreq	r0, r9, ip, lsr #32
        37ac04:	002e003a 	eoreq	r0, lr, sl, lsr r0
        37ac08:	003b003f 	eoreqs	r0, fp, pc, lsr r0
        37ac0c:	20182019 	andcss	r2, r8, r9, lsl r0
        37ac10:	201c201d 	andcss	r2, ip, sp, lsl r0
        37ac14:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: blackPatternData
 * Address: 00380ba4
 */
void globals::blackPatternData() {
    /*
        380ba4:	ffffffff 	swinv	0x00ffffff
        380ba8:	ffffffff 	swinv	0x00ffffff
    */
}

/**
 * Symbol: blackPattern
 * Address: 00380bac
 */
void globals::blackPattern() {
    /*
        380bac:	00380ba4 	eoreqs	r0, r8, r4, lsr #23
        380bb0:	00010000 	andeq	r0, r1, r0
        380bb4:	00000000 	andeq	r0, r0, r0
        380bb8:	00080008 	andeq	r0, r8, r8
        380bbc:	40000001 	andmi	r0, r0, r1
    */
}

/**
 * Symbol: blackPatternPtr
 * Address: 00380bc8
 */
void globals::blackPatternPtr() {
    /*
        380bc8:	00380bac 	eoreqs	r0, r8, ip, lsr #23
    */
}

/**
 * Symbol: bitFlip
 * Address: 00380f94
 */
void globals::bitFlip() {
    /*
        380f94:	008040c0 	addeq	r4, r0, r0, asr #1
        380f98:	20a060e0 	adccs	r6, r0, r0, ror #1
        380f9c:	109050d0 	ldrnesb	r5, [r0], r0
        380fa0:	30b070f0 	ldrccsh	r7, [r0], r0
        380fa4:	088848c8 	stmeqia	r8, {r3, r6, r7, fp, lr}
        380fa8:	28a868e8 	stmcsia	r8!, {r3, r5, r6, r7, fp, sp, lr}
        380fac:	189858d8 	ldmneia	r8, {r3, r4, r6, r7, fp, ip, lr}
        380fb0:	38b878f8 	ldmccia	r8!, {r3, r4, r5, r6, r7, fp, ip, sp, lr}
        380fb4:	048444c4 	streq	r4, [r4], #1220
        380fb8:	24a464e4 	strcst	r6, [r4], #1252
        380fbc:	149454d4 	ldrne	r5, [r4], #1236
        380fc0:	34b474f4 	ldrcct	r7, [r4], #1268
        380fc4:	0c8c4ccc 	stceq	12, cr4, [ip], #816
        380fc8:	2cac6cec 	stccs	12, cr6, [ip], #944
        380fcc:	1c9c5cdc 	ldcne	12, cr5, [ip], #880
        380fd0:	3cbc7cfc 	ldccc	12, cr7, [ip], #1008
        380fd4:	028242c2 	addeq	r4, r2, #536870924	; 0x2000000c
        380fd8:	22a262e2 	adccs	r6, r2, #536870926	; 0x2000000e
        380fdc:	129252d2 	addnes	r5, r2, #536870925	; 0x2000000d
        380fe0:	32b272f2 	adcccs	r7, r2, #536870927	; 0x2000000f
        380fe4:	0a8a4aca 	beq	fe613b14 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfca032bc>
        380fe8:	2aaa6aea 	bcs	fee1bb98 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd20b340>
        380fec:	1a9a5ada 	bne	fea17b5c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfce07304>
        380ff0:	3aba7afa 	bcc	ff21fbe0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd60f388>
        380ff4:	068646c6 	streq	r4, [r6], r6, asr #13
        380ff8:	26a666e6 	strcst	r6, [r6], r6, ror #13
        380ffc:	169656d6 	undefined
        381000:	36b676f6 	undefined
        381004:	0e8e4ece 	cdpeq	14, 8, cr4, cr14, cr14, {6}
        381008:	2eae6eee 	cdpcs	14, 10, cr6, cr14, cr14, {7}
        38100c:	1e9e5ede 	mrcne	14, 4, r5, cr14, cr14, {6}
        381010:	3ebe7efe 	mrccc	14, 5, r7, cr14, cr14, {7}
        381014:	018141c1 	orreq	r4, r1, r1, asr #3
        381018:	21a161e1 	movcs	r6, r1, ror #3
        38101c:	119151d1 	ldrnesb	r5, [r1, r1]
        381020:	31b171f1 	ldrccsh	r7, [r1, r1]!
        381024:	098949c9 	stmeqib	r9, {r0, r3, r6, r7, r8, fp, lr}
        381028:	29a969e9 	stmcsib	r9!, {r0, r3, r5, r6, r7, r8, fp, sp, lr}
        38102c:	199959d9 	ldmneib	r9, {r0, r3, r4, r6, r7, r8, fp, ip, lr}
        381030:	39b979f9 	ldmccib	r9!, {r0, r3, r4, r5, r6, r7, r8, fp, ip, sp, lr}
        381034:	058545c5 	streq	r4, [r5, #1477]
        381038:	25a565e5 	strcs	r6, [r5, #1509]!
        38103c:	159555d5 	ldrne	r5, [r5, #1493]
        381040:	35b575f5 	ldrcc	r7, [r5, #1525]!
        381044:	0d8d4dcd 	stceq	13, cr4, [sp, #820]
        381048:	2dad6ded 	stccs	13, cr6, [sp, #948]!
        38104c:	1d9d5ddd 	ldcne	13, cr5, [sp, #884]
        381050:	3dbd7dfd 	ldccc	13, cr7, [sp, #1012]!
        381054:	038343c3 	orreq	r4, r3, #201326595	; 0xc000003
        381058:	23a363e3 	movcs	r6, #-1946157053	; 0x8c000003
        38105c:	139353d3 	orrnes	r5, r3, #1275068419	; 0x4c000003
        381060:	33b373f3 	movccs	r7, #-872415229	; 0xcc000003
        381064:	0b8b4bcb 	bleq	fe653f98 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfca43740>
        381068:	2bab6beb 	blcs	fee5c01c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd24b7c4>
        38106c:	1b9b5bdb 	blne	fea57fe0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfce47788>
        381070:	3bbb7bfb 	blcc	ff260064 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd64f80c>
        381074:	078747c7 	streq	r4, [r7, r7, asr #15]
        381078:	27a767e7 	strcs	r6, [r7, r7, ror #15]!
        38107c:	179757d7 	undefined
        381080:	37b777f7 	undefined
        381084:	0f8f4fcf 	swieq	0x008f4fcf
        381088:	2faf6fef 	swics	0x00af6fef
        38108c:	1f9f5fdf 	swine	0x009f5fdf
        381090:	3fbf7fff 	swicc	0x00bf7fff
    */
}

