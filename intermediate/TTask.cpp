#include "DDKIncludes/OS600/UserTasks.h"

/**
 * Symbol: TTask::__ct(void)
 * Address: 00252190
 */
TTask::TTask(void) {
    /*
        252190:	e1a0c00d 	mov	ip, sp
        252194:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        252198:	e24cb004 	sub	fp, ip, #4	; 0x4
        25219c:	e1b04000 	movs	r4, r0
        2521a0:	1a000003 	bne	2521b4 <TTask::__ct(void)+0x24>
        2521a4:	e3a00f41 	mov	r0, #260	; 0x104
        2521a8:	eb65f162 	bl	1bce738 <$__nw(unsigned int)>
        2521ac:	e1b04000 	movs	r4, r0
        2521b0:	0a000024 	beq	252248 <TTask::__ct(void)+0xb8>
        2521b4:	e2840094 	add	r0, r4, #148	; 0x94
        2521b8:	eb627580 	bl	1aef7c0 <TTaskQItem::$__ct(void)>
        2521bc:	e28400bc 	add	r0, r4, #188	; 0xbc
        2521c0:	eb65e92d 	bl	1bcc67c <TDoubleQItem::$__ct(void)>
        2521c4:	e28400c8 	add	r0, r4, #200	; 0xc8
        2521c8:	eb65e92b 	bl	1bcc67c <TDoubleQItem::$__ct(void)>
        2521cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2521d0:	e3a00000 	mov	r0, #0	; 0x0
        2521d4:	e58400d4 	str	r0, [r4, #212]
        2521d8:	e58400dc 	str	r0, [r4, #220]
        2521dc:	e58400e0 	str	r0, [r4, #224]
        2521e0:	e58400e4 	str	r0, [r4, #228]
        2521e4:	e58400e8 	str	r0, [r4, #232]
        2521e8:	e58400ec 	str	r0, [r4, #236]
        2521ec:	e58400f0 	str	r0, [r4, #240]	; fField240
        2521f0:	e58400f4 	str	r0, [r4, #244]	; fField244
        2521f4:	e58400a0 	str	r0, [r4, #160]	; fField160
        2521f8:	e58d0004 	str	r0, [sp, #4]
        2521fc:	e28420a4 	add	r2, r4, #164	; 0xa4
        252200:	e58d0000 	str	r0, [sp]
        252204:	e89d5000 	ldmia	sp, {ip, lr}
        252208:	e8825000 	stmia	r2, {ip, lr}
        25220c:	e58400ac 	str	r0, [r4, #172]	; fField172
        252210:	e58400b0 	str	r0, [r4, #176]
        252214:	e58400b4 	str	r0, [r4, #180]
        252218:	e58400b8 	str	r0, [r4, #184]
        25221c:	e584008c 	str	r0, [r4, #140]	; fField140
        252220:	e58400d8 	str	r0, [r4, #216]
        252224:	e584006c 	str	r0, [r4, #108]	; fField108
        252228:	e58400f8 	str	r0, [r4, #248]	; fField248
        25222c:	e5840074 	str	r0, [r4, #116]	; fField116
        252230:	e5840078 	str	r0, [r4, #120]
        252234:	e584007c 	str	r0, [r4, #124]
        252238:	e58400fc 	str	r0, [r4, #252]
        25223c:	e5840100 	str	r0, [r4, #256]
        252240:	e5840080 	str	r0, [r4, #128]	; fField128
        252244:	e28dd008 	add	sp, sp, #8	; 0x8
        252248:	e1a00004 	mov	r0, r4
        25224c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TTask::FreeStack(void)
 * Address: 00252250
 */
TTask::FreeStack(void) {
    /*
        252250:	e590108c 	ldr	r1, [r0, #140]	; fField140
        252254:	e3310000 	teq	r1, #0	; 0x0
        252258:	01a0f00e 	moveq	pc, lr
        25225c:	e590206c 	ldr	r2, [r0, #108]	; fField108
        252260:	e3120402 	tst	r2, #33554432	; 0x2000000
        252264:	01a00001 	moveq	r0, r1
        252268:	0a6601ba 	beq	1bd2958 <$free>
        25226c:	15900088 	ldrne	r0, [r0, #136]	; fField136
        252270:	12400001 	subne	r0, r0, #1	; 0x1
        252274:	1a6601ba 	bne	1bd2964 <$FreePagedMem>
    */
}

/**
 * Symbol: TTask::SetBequeathId(unsigned long)
 * Address: 00252278
 */
TTask::SetBequeathId(unsigned long) {
    /*
        252278:	e1a0c00d 	mov	ip, sp
        25227c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        252280:	e24cb004 	sub	fp, ip, #4	; 0x4
        252284:	e1a04000 	mov	r4, r0
        252288:	e58010fc 	str	r1, [r0, #252]
        25228c:	e24dd004 	sub	sp, sp, #4	; 0x4
        252290:	e1a0200d 	mov	r2, sp
        252294:	e3a00003 	mov	r0, #3	; 0x3
        252298:	eb628e06 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        25229c:	e3300000 	teq	r0, #0	; 0x0
        2522a0:	05940000 	ldreq	r0, [r4]
        2522a4:	059d1000 	ldreq	r1, [sp]
        2522a8:	05a10100 	streq	r0, [r1, #256]!
        2522ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment
 * Address: 002522b0
 */
long		TTask::Init(TaskProcPtr pc, ULong stackSize, ULong objectSize, void* theObject, ULong priority = kUserTaskPriority, ULong taskName = 'UNAM') {
    /*
        2522b0:	e1a0c00d 	mov	ip, sp
        2522b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2522b8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2522bc:	e24cb014 	sub	fp, ip, #20	; 0x14
        2522c0:	e1a04000 	mov	r4, r0
        2522c4:	e1a06002 	mov	r6, r2
        2522c8:	e1a07003 	mov	r7, r3
        2522cc:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        2522d0:	e59b5020 	ldr	r5, [fp, #32]	; fField32
        2522d4:	e24ddf59 	sub	sp, sp, #356	; 0x164
        2522d8:	e3a09054 	mov	r9, #84	; 0x54
        2522dc:	e3a08000 	mov	r8, #0	; 0x0
        2522e0:	e5cd8008 	strb	r8, [sp, #8]
        2522e4:	e58d0004 	str	r0, [sp, #4]
        2522e8:	e3300000 	teq	r0, #0	; 0x0
        2522ec:	03a00000 	moveq	r0, #0	; 0x0
        2522f0:	058d0160 	streq	r0, [sp, #352]
        2522f4:	0a00000b 	beq	252328 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x78>
        2522f8:	e28d1e16 	add	r1, sp, #352	; 0x160
        2522fc:	e28d0004 	add	r0, sp, #4	; 0x4
        252300:	e3a02000 	mov	r2, #0	; 0x0
        252304:	eb6609cb 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
        252308:	e3300000 	teq	r0, #0	; 0x0
        25230c:	0a000005 	beq	252328 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x78>
        252310:	e1a04000 	mov	r4, r0
        252314:	e28d0004 	add	r0, sp, #4	; 0x4
        252318:	e3a01000 	mov	r1, #0	; 0x0
        25231c:	eb65f100 	bl	1bce724 <TUObject::$__dt(void)>
        252320:	e1a00004 	mov	r0, r4
        252324:	ea00006b 	b	2524d8 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x228>
        252328:	e5847018 	str	r7, [r4, #24]	; fField24
        25232c:	e59d0160 	ldr	r0, [sp, #352]
        252330:	e5840014 	str	r0, [r4, #20]	; fField20
        252334:	e59d0160 	ldr	r0, [sp, #352]
        252338:	e2800003 	add	r0, r0, #3	; 0x3
        25233c:	e3c00003 	bic	r0, r0, #3	; 0x3
        252340:	e58d0160 	str	r0, [sp, #352]
        252344:	e2860003 	add	r0, r6, #3	; 0x3
        252348:	e3c06003 	bic	r6, r0, #3	; 0x3
        25234c:	e59f008c 	ldr	r0, [pc, #8c]	; 2523e0 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x130>
        252350:	e5d00000 	ldrb	r0, [r0]
        252354:	e59f7088 	ldr	r7, [pc, #88]	; 2523e4 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x134>
        252358:	e3300000 	teq	r0, #0	; 0x0
        25235c:	e594006c 	ldr	r0, [r4, #108]	; fField108
        252360:	0a000020 	beq	2523e8 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x138>
        252364:	e3800402 	orr	r0, r0, #33554432	; 0x2000000
        252368:	e584006c 	str	r0, [r4, #108]	; fField108
        25236c:	e284308c 	add	r3, r4, #140	; 0x8c
        252370:	e92d0008 	stmdb	sp!, {r3}
        252374:	e5942000 	ldr	r2, [r4]
        252378:	e2843088 	add	r3, r4, #136	; 0x88
        25237c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        252380:	e59d1164 	ldr	r1, [sp, #356]
        252384:	e0861001 	add	r1, r6, r1
        252388:	e2811054 	add	r1, r1, #84	; 0x54
        25238c:	eb661604 	bl	1bd7ba4 <$NewStack>
        252390:	e28dd004 	add	sp, sp, #4	; 0x4
        252394:	e3300000 	teq	r0, #0	; 0x0
        252398:	15a4808c 	strne	r8, [r4, #140]!	; fField140
        25239c:	1affffdb 	bne	252310 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x60>
        2523a0:	e5941088 	ldr	r1, [r4, #136]	; fField136
        2523a4:	e59d0160 	ldr	r0, [sp, #352]
        2523a8:	e2800054 	add	r0, r0, #84	; 0x54
        2523ac:	e0410000 	sub	r0, r1, r0
        2523b0:	e3a02000 	mov	r2, #0	; 0x0
        2523b4:	e58400f8 	str	r0, [r4, #248]	; fField248
        2523b8:	eb6611e5 	bl	1bd6b54 <$LockHeapRange>
        2523bc:	e3300000 	teq	r0, #0	; 0x0
        2523c0:	1affffd2 	bne	252310 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x60>
        2523c4:	e59400f8 	ldr	r0, [r4, #248]	; fField248
        2523c8:	e2801030 	add	r1, r0, #48	; 0x30
        2523cc:	e3a02000 	mov	r2, #0	; 0x0
        2523d0:	eb6611df 	bl	1bd6b54 <$LockHeapRange>
        2523d4:	e3300000 	teq	r0, #0	; 0x0
        2523d8:	1affffcc 	bne	252310 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x60>
        2523dc:	ea000010 	b	252424 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x174>
        2523e0:	0c10102c 	ldceq	0, cr1, [r0], -#176
        2523e4:	ffffd8e7 	swinv	0x00ffd8e7
        2523e8:	e3c00402 	bic	r0, r0, #33554432	; 0x2000000
        2523ec:	e584006c 	str	r0, [r4, #108]	; fField108
        2523f0:	e59d0160 	ldr	r0, [sp, #352]
        2523f4:	e0860000 	add	r0, r6, r0
        2523f8:	e2800054 	add	r0, r0, #84	; 0x54
        2523fc:	eb6611d9 	bl	1bd6b68 <$malloc>
        252400:	e584008c 	str	r0, [r4, #140]	; fField140
        252404:	e3300000 	teq	r0, #0	; 0x0
        252408:	0a00002e 	beq	2524c8 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x218>
        25240c:	e0800006 	add	r0, r0, r6
        252410:	e59d1160 	ldr	r1, [sp, #352]
        252414:	e0801001 	add	r1, r0, r1
        252418:	e2811054 	add	r1, r1, #84	; 0x54
        25241c:	e58400f8 	str	r0, [r4, #248]	; fField248
        252420:	e5841088 	str	r1, [r4, #136]	; fField136
        252424:	e3a00024 	mov	r0, #36	; 0x24
        252428:	eb65f0c2 	bl	1bce738 <$__nw(unsigned int)>
        25242c:	e3500000 	cmp	r0, #0	; 0x0
        252430:	e1a06000 	mov	r6, r0
        252434:	0a000007 	beq	252458 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x1a8>
        252438:	e1a01005 	mov	r1, r5
        25243c:	e1a00006 	mov	r0, r6
        252440:	eb62a65b 	bl	1afbdb4 <TSharedMem::$Init(TEnvironment *)>
        252444:	e3300000 	teq	r0, #0	; 0x0
        252448:	0a000002 	beq	252458 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x1a8>
        25244c:	e1a00006 	mov	r0, r6
        252450:	eb65eca2 	bl	1bcd6e0 <$__dl(void *)>
        252454:	e3a06000 	mov	r6, #0	; 0x0
        252458:	e5942000 	ldr	r2, [r4]
        25245c:	e28430f0 	add	r3, r4, #240	; 0xf0
        252460:	e1a00006 	mov	r0, r6
        252464:	e3a01008 	mov	r1, #8	; 0x8
        252468:	eb62c347 	bl	1b0318c <$RegisterObject(TKernelObject *, KernelTypes, unsigned long, unsigned long *)>
        25246c:	e3a00000 	mov	r0, #0	; 0x0
        252470:	eb6274de 	bl	1aef7f0 <TSharedMemMsg::$__ct(void)>
        252474:	e1b06000 	movs	r6, r0
        252478:	0a000008 	beq	2524a0 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x1f0>
        25247c:	e1a01005 	mov	r1, r5
        252480:	e1a00006 	mov	r0, r6
        252484:	eb62a659 	bl	1afbdf0 <TSharedMemMsg::$Init(TEnvironment *)>
        252488:	e3300000 	teq	r0, #0	; 0x0
        25248c:	0a000003 	beq	2524a0 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x1f0>
        252490:	e1a00006 	mov	r0, r6
        252494:	e3a01001 	mov	r1, #1	; 0x1
        252498:	eb6278f3 	bl	1af086c <TSharedMemMsg::$__dt(void)>
        25249c:	e3a06000 	mov	r6, #0	; 0x0
        2524a0:	e5942000 	ldr	r2, [r4]
        2524a4:	e28430f4 	add	r3, r4, #244	; 0xf4
        2524a8:	e1a00006 	mov	r0, r6
        2524ac:	e3a01009 	mov	r1, #9	; 0x9
        2524b0:	eb62c335 	bl	1b0318c <$RegisterObject(TKernelObject *, KernelTypes, unsigned long, unsigned long *)>
        2524b4:	e59400f0 	ldr	r0, [r4, #240]	; fField240
        2524b8:	e3300000 	teq	r0, #0	; 0x0
        2524bc:	159400f4 	ldrne	r0, [r4, #244]	; fField244
        2524c0:	13300000 	teqne	r0, #0	; 0x0
        2524c4:	1a000004 	bne	2524dc <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x22c>
        2524c8:	e28d0004 	add	r0, sp, #4	; 0x4
        2524cc:	e3a01000 	mov	r1, #0	; 0x0
        2524d0:	eb65f093 	bl	1bce724 <TUObject::$__dt(void)>
        2524d4:	e1a00007 	mov	r0, r7
        2524d8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2524dc:	e59400f8 	ldr	r0, [r4, #248]	; fField248
        2524e0:	e2800054 	add	r0, r0, #84	; 0x54
        2524e4:	e58400a0 	str	r0, [r4, #160]	; fField160
        2524e8:	e28d005c 	add	r0, sp, #92	; 0x5c
        2524ec:	eb6536d0 	bl	1ba0034 <$InitializeExceptionGlobals>
        2524f0:	e5940000 	ldr	r0, [r4]
        2524f4:	e3a08000 	mov	r8, #0	; 0x0
        2524f8:	e58d004c 	str	r0, [sp, #76]	; fField76
        2524fc:	e58d803c 	str	r8, [sp, #60]	; fField60
        252500:	e58d8054 	str	r8, [sp, #84]
        252504:	e59b001c 	ldr	r0, [fp, #28]
        252508:	e58d0058 	str	r0, [sp, #88]
        25250c:	e59410f8 	ldr	r1, [r4, #248]	; fField248
        252510:	e59d0160 	ldr	r0, [sp, #352]
        252514:	e0811000 	add	r1, r1, r0
        252518:	e2811054 	add	r1, r1, #84	; 0x54
        25251c:	e58d1044 	str	r1, [sp, #68]	; fField68
        252520:	e594108c 	ldr	r1, [r4, #140]	; fField140
        252524:	e58d1048 	str	r1, [sp, #72]	; fField72
        252528:	e5951014 	ldr	r1, [r5, #20]	; fField20
        25252c:	e58d1050 	str	r1, [sp, #80]	; fField80
        252530:	e595101c 	ldr	r1, [r5, #28]
        252534:	e58d1040 	str	r1, [sp, #64]	; fField64
        252538:	e24dd008 	sub	sp, sp, #8	; 0x8
        25253c:	e59410f0 	ldr	r1, [r4, #240]	; fField240
        252540:	e5cd8004 	strb	r8, [sp, #4]
        252544:	e2802054 	add	r2, r0, #84	; 0x54
        252548:	e58d1000 	str	r1, [sp]
        25254c:	e1a0000d 	mov	r0, sp
        252550:	e3a03000 	mov	r3, #0	; 0x0
        252554:	e59410f8 	ldr	r1, [r4, #248]	; fField248
        252558:	eb662203 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        25255c:	e3300000 	teq	r0, #0	; 0x0
        252560:	1a000008 	bne	252588 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x2d8>
        252564:	e3a03000 	mov	r3, #0	; 0x0
        252568:	e92d0008 	stmdb	sp!, {r3}
        25256c:	e1a02009 	mov	r2, r9
        252570:	e28d1018 	add	r1, sp, #24	; 0x18
        252574:	e28d0004 	add	r0, sp, #4	; 0x4
        252578:	eb65f8b8 	bl	1bd0860 <TUSharedMem::$CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)>
        25257c:	e28dd004 	add	sp, sp, #4	; 0x4
        252580:	e3300000 	teq	r0, #0	; 0x0
        252584:	0a000001 	beq	252590 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x2e0>
        252588:	e1a04000 	mov	r4, r0
        25258c:	ea00004b 	b	2526c0 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x410>
        252590:	e59400f8 	ldr	r0, [r4, #248]	; fField248
        252594:	e2801054 	add	r1, r0, #84	; 0x54
        252598:	e59d0168 	ldr	r0, [sp, #360]
        25259c:	e0817000 	add	r7, r1, r0
        2525a0:	e0476000 	sub	r6, r7, r0
        2525a4:	e1560007 	cmp	r6, r7
        2525a8:	2a00001d 	bcs	252624 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x374>
        2525ac:	e0470006 	sub	r0, r7, r6
        2525b0:	e3500c01 	cmp	r0, #256	; 0x100
        2525b4:	c3a00c01 	movgt	r0, #256	; 0x100
        2525b8:	e1a0a000 	mov	sl, r0
        2525bc:	e59400f8 	ldr	r0, [r4, #248]	; fField248
        2525c0:	e0468000 	sub	r8, r6, r0
        2525c4:	e3a03000 	mov	r3, #0	; 0x0
        2525c8:	e0482009 	sub	r2, r8, r9
        2525cc:	e92d000c 	stmdb	sp!, {r2, r3}
        2525d0:	e1a0300a 	mov	r3, sl
        2525d4:	e28d2070 	add	r2, sp, #112	; 0x70
        2525d8:	e28d1010 	add	r1, sp, #16	; 0x10
        2525dc:	e28d0014 	add	r0, sp, #20	; 0x14
        2525e0:	eb65f895 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        2525e4:	e28dd008 	add	sp, sp, #8	; 0x8
        2525e8:	e3300000 	teq	r0, #0	; 0x0
        2525ec:	1affffe5 	bne	252588 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x2d8>
        2525f0:	e3a03000 	mov	r3, #0	; 0x0
        2525f4:	e92d0008 	stmdb	sp!, {r3}
        2525f8:	e1a03008 	mov	r3, r8
        2525fc:	e1a0200a 	mov	r2, sl
        252600:	e28d106c 	add	r1, sp, #108	; 0x6c
        252604:	e28d0004 	add	r0, sp, #4	; 0x4
        252608:	eb65f894 	bl	1bd0860 <TUSharedMem::$CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)>
        25260c:	e28dd004 	add	sp, sp, #4	; 0x4
        252610:	e3300000 	teq	r0, #0	; 0x0
        252614:	1affffdb 	bne	252588 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x2d8>
        252618:	e2866c01 	add	r6, r6, #256	; 0x100
        25261c:	e1560007 	cmp	r6, r7
        252620:	3affffe1 	bcc	2525ac <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x2fc>
        252624:	e594006c 	ldr	r0, [r4, #108]	; fField108
        252628:	e3100402 	tst	r0, #33554432	; 0x2000000
        25262c:	159400f8 	ldrne	r0, [r4, #248]	; fField248
        252630:	15941088 	ldrne	r1, [r4, #136]	; fField136
        252634:	1b662e19 	blne	1bddea0 <$UnlockHeapRange>
        252638:	e59400f8 	ldr	r0, [r4, #248]	; fField248
        25263c:	e5941088 	ldr	r1, [r4, #136]	; fField136
        252640:	e0411000 	sub	r1, r1, r0
        252644:	e58410ac 	str	r1, [r4, #172]	; fField172
        252648:	e5941000 	ldr	r1, [r4]
        25264c:	e5841068 	str	r1, [r4, #104]	; fField104
        252650:	e59410a0 	ldr	r1, [r4, #160]	; fField160
        252654:	e3a08000 	mov	r8, #0	; 0x0
        252658:	e5840044 	str	r0, [r4, #68]	; fField68
        25265c:	e5841010 	str	r1, [r4, #16]	; fField16
        252660:	e5848090 	str	r8, [r4, #144]	; fField144
        252664:	e59b1008 	ldr	r1, [fp, #8]
        252668:	e3a00010 	mov	r0, #16	; 0x10
        25266c:	e5840050 	str	r0, [r4, #80]	; fField80
        252670:	e584104c 	str	r1, [r4, #76]	; fField76
        252674:	e5848038 	str	r8, [r4, #56]	; fField56
        252678:	e584803c 	str	r8, [r4, #60]	; fField60
        25267c:	e5848040 	str	r8, [r4, #64]	; fField64
        252680:	e5848020 	str	r8, [r4, #32]	; fField32
        252684:	e5848028 	str	r8, [r4, #40]	; fField40
        252688:	e584802c 	str	r8, [r4, #44]	; fField44
        25268c:	e5848030 	str	r8, [r4, #48]	; fField48
        252690:	e5848034 	str	r8, [r4, #52]	; fField52
        252694:	e59f0044 	ldr	r0, [pc, #44]	; 2526e0 <Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment+0x430>	; fField44
        252698:	e5840048 	str	r0, [r4, #72]	; fField72
        25269c:	e5844024 	str	r4, [r4, #36]	; fField36
        2526a0:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        2526a4:	e5840080 	str	r0, [r4, #128]	; fField128
        2526a8:	e59b001c 	ldr	r0, [fp, #28]
        2526ac:	e5a45074 	str	r5, [r4, #116]!	; fField116
        2526b0:	e5840010 	str	r0, [r4, #16]	; fField16
        2526b4:	e1a00005 	mov	r0, r5
        2526b8:	eb62a5bc 	bl	1afbdb0 <TEnvironment::$IncrRefCount(void)>
        2526bc:	e3a04000 	mov	r4, #0	; 0x0
        2526c0:	e1a0000d 	mov	r0, sp
        2526c4:	e3a01000 	mov	r1, #0	; 0x0
        2526c8:	eb65f015 	bl	1bce724 <TUObject::$__dt(void)>
        2526cc:	e28d000c 	add	r0, sp, #12	; 0xc
        2526d0:	e3a01000 	mov	r1, #0	; 0x0
        2526d4:	eb65f012 	bl	1bce724 <TUObject::$__dt(void)>
        2526d8:	e1a00004 	mov	r0, r4
        2526dc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2526e0:	003ae158 	eoreqs	lr, sl, r8, asr r1
    */
}

/**
 * Symbol: TTask::__dt(void)
 * Address: 002526e4
 */
TTask::~TTask(void) {
    /*
        2526e4:	e1a0c00d 	mov	ip, sp
        2526e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2526ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2526f0:	e1a04000 	mov	r4, r0
        2526f4:	e1a05001 	mov	r5, r1
        2526f8:	e59000d0 	ldr	r0, [r0, #208]
        2526fc:	e3300000 	teq	r0, #0	; 0x0
        252700:	11a01004 	movne	r1, r4
        252704:	1b65f85a 	blne	1bd0874 <TDoubleQContainer::$DeleteFromQueue(void *)>
        252708:	e59400c4 	ldr	r0, [r4, #196]	; fField196
        25270c:	e3300000 	teq	r0, #0	; 0x0
        252710:	11a01004 	movne	r1, r4
        252714:	1b65f856 	blne	1bd0874 <TDoubleQContainer::$DeleteFromQueue(void *)>
        252718:	e1a00004 	mov	r0, r4
        25271c:	eb62db5b 	bl	1b09490 <$UnScheduleTask(TTask *)>
        252720:	e1a00004 	mov	r0, r4
        252724:	eb629d5c 	bl	1af9c9c <TTask::$FreeStack(void)>
        252728:	e28400a4 	add	r0, r4, #164	; 0xa4
        25272c:	e24dd008 	sub	sp, sp, #8	; 0x8
        252730:	e8905000 	ldmia	r0, {ip, lr}
        252734:	e88d5000 	stmia	sp, {ip, lr}
        252738:	e1a0100d 	mov	r1, sp
        25273c:	e59f6060 	ldr	r6, [pc, #60]	; 2527a4 <TTask::__dt(void)+0xc0>	; fField60
        252740:	e1a00006 	mov	r0, r6
        252744:	eb663a4e 	bl	1be1084 <$CompAdd>
        252748:	e8bd5000 	ldmia	sp!, {ip, lr}
        25274c:	e8865000 	stmia	r6, {ip, lr}
        252750:	e5940074 	ldr	r0, [r4, #116]	; fField116
        252754:	e3300000 	teq	r0, #0	; 0x0
        252758:	0a000005 	beq	252774 <TTask::__dt(void)+0x90>
        25275c:	eb628cdf 	bl	1af5ae0 <TEnvironment::$DecrRefCount(void)>
        252760:	e3300000 	teq	r0, #0	; 0x0
        252764:	15940074 	ldrne	r0, [r4, #116]	; fField116
        252768:	13300000 	teqne	r0, #0	; 0x0
        25276c:	13a01001 	movne	r1, #1	; 0x1
        252770:	1b62783b 	blne	1af0864 <TEnvironment::$__dt(void)>
        252774:	e59410f0 	ldr	r1, [r4, #240]	; fField240
        252778:	e59f6028 	ldr	r6, [pc, #28]	; 2527a8 <TTask::__dt(void)+0xc4>
        25277c:	e5960000 	ldr	r0, [r6]
        252780:	eb62c293 	bl	1b031d4 <TObjectTable::$Remove(unsigned long)>
        252784:	e59410f4 	ldr	r1, [r4, #244]	; fField244
        252788:	e5960000 	ldr	r0, [r6]
        25278c:	eb62c290 	bl	1b031d4 <TObjectTable::$Remove(unsigned long)>
        252790:	e3150001 	tst	r5, #1	; 0x1
        252794:	11a00004 	movne	r0, r4
        252798:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        25279c:	1a65ebcf 	bne	1bcd6e0 <$__dl(void *)>
        2527a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2527a4:	0c104eb0 	ldceq	14, cr4, [r0], -#704
        2527a8:	0c100fc8 	ldceq	15, cr0, [r0], -#800
    */
}

