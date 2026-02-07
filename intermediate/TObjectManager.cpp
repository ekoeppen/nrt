#include "include/TObjectManager.h"

/**
 * Symbol: TObjectManager::__ct(void)
 * Address: 001491fc
 */
TObjectManager::TObjectManager(void) {
    /*
        1491fc:	e1a0c00d 	mov	ip, sp
        149200:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        149204:	e24cb004 	sub	fp, ip, #4	; 0x4
        149208:	e3300000 	teq	r0, #0	; 0x0
        14920c:	1a000003 	bne	149220 <TObjectManager::__ct(void)+0x24>
        149210:	e3a00004 	mov	r0, #4	; 0x4
        149214:	eb6a1547 	bl	1bce738 <$__nw(unsigned int)>
        149218:	e3300000 	teq	r0, #0	; 0x0
        14921c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        149220:	e3a01000 	mov	r1, #0	; 0x0
        149224:	e5801000 	str	r1, [r0]
        149228:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TObjectManager::MonitorProc(long, ObjectMessage *)
 * Address: 0014922c
 */
TObjectManager::MonitorProc(long, ObjectMessage *) {
    /*
        14922c:	e1a0c00d 	mov	ip, sp
        149230:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        149234:	e24cb004 	sub	fp, ip, #4	; 0x4
        149238:	e1a05000 	mov	r5, r0
        14923c:	e1a07001 	mov	r7, r1
        149240:	e1a04002 	mov	r4, r2
        149244:	e59f9048 	ldr	r9, [pc, #48]	; 149294 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x68>
        149248:	e5990008 	ldr	r0, [r9, #8]
        14924c:	e5b0a020 	ldr	sl, [r0, #32]!
        149250:	e59a8000 	ldr	r8, [sl]
        149254:	e5951000 	ldr	r1, [r5]
        149258:	e59f6038 	ldr	r6, [pc, #38]	; 149298 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x6c>
        14925c:	e3310000 	teq	r1, #0	; 0x0
        149260:	0a000003 	beq	149274 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x48>
        149264:	e5960000 	ldr	r0, [r6]
        149268:	eb66e7d9 	bl	1b031d4 <TObjectTable::$Remove(unsigned long)>
        14926c:	e3a00000 	mov	r0, #0	; 0x0
        149270:	e5850000 	str	r0, [r5]
        149274:	e33700ff 	teq	r7, #255	; 0xff
        149278:	1a000007 	bne	14929c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x70>
        14927c:	e59a006c 	ldr	r0, [sl, #108]
        149280:	e3800002 	orr	r0, r0, #2	; 0x2
        149284:	e5aa006c 	str	r0, [sl, #108]!
        149288:	e3a00000 	mov	r0, #0	; 0x0
        14928c:	e5858000 	str	r8, [r5]
        149290:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        149294:	0c10169c 	ldceq	6, cr1, [r0], -#624
        149298:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        14929c:	e1a00007 	mov	r0, r7
        1492a0:	e3a050ea 	mov	r5, #234	; 0xea
        1492a4:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        1492a8:	e3a0a001 	mov	sl, #1	; 0x1
        1492ac:	e5941000 	ldr	r1, [r4]
        1492b0:	e59f7050 	ldr	r7, [pc, #50]	; 149308 <TObjectManager::MonitorProc(long, ObjectMessage *)+0xdc>
        1492b4:	e350000c 	cmp	r0, #12	; 0xc
        1492b8:	908ff100 	addls	pc, pc, r0, lsl #2
        1492bc:	ea000096 	b	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        1492c0:	ea000011 	b	14930c <TObjectManager::MonitorProc(long, ObjectMessage *)+0xe0>
        1492c4:	ea000019 	b	149330 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x104>
        1492c8:	ea000093 	b	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        1492cc:	ea00001b 	b	149340 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x114>
        1492d0:	ea00001d 	b	14934c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x120>
        1492d4:	ea000028 	b	14937c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x150>
        1492d8:	ea00001e 	b	149358 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x12c>
        1492dc:	ea000029 	b	149388 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x15c>
        1492e0:	ea000070 	b	1494a8 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x27c>
        1492e4:	ea00004b 	b	149418 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x1ec>
        1492e8:	ea00006a 	b	149498 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x26c>
        1492ec:	ea000071 	b	1494b8 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x28c>
        1492f0:	e5970000 	ldr	r0, [r7]
        1492f4:	e3300000 	teq	r0, #0	; 0x0
        1492f8:	0a000086 	beq	149518 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2ec>
        1492fc:	e5b41008 	ldr	r1, [r4, #8]!
        149300:	eb66b61d 	bl	1af6b7c <TExtPageTrackerMgr::$DisposeTracker(unsigned long)>
        149304:	ea000081 	b	149510 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2e4>
        149308:	0c104f4c 	ldceq	15, cr4, [r0], -#304
        14930c:	e24dd004 	sub	sp, sp, #4	; 0x4
        149310:	e1a0300d 	mov	r3, sp
        149314:	e1a02008 	mov	r2, r8
        149318:	e1a00004 	mov	r0, r4
        14931c:	eb66db4d 	bl	1b00058 <$ObjectAlloc__FP13ObjectMessageUlT2PUl>
        149320:	e1b05000 	movs	r5, r0
        149324:	059d0000 	ldreq	r0, [sp]
        149328:	05840000 	streq	r0, [r4]
        14932c:	ea000010 	b	149374 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x148>
        149330:	e1a02008 	mov	r2, r8
        149334:	e1a00004 	mov	r0, r4
        149338:	eb66db47 	bl	1b0005c <$ObjectDestroy__FP13ObjectMessageUlT2>
        14933c:	ea000073 	b	149510 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2e4>
        149340:	e1a00004 	mov	r0, r4
        149344:	eb66db48 	bl	1b0006c <$ObjectStart(ObjectMessage *, unsigned long)>
        149348:	ea000070 	b	149510 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2e4>
        14934c:	e1a00004 	mov	r0, r4
        149350:	eb66db47 	bl	1b00074 <$ObjectSuspend(ObjectMessage *, unsigned long)>
        149354:	ea00006d 	b	149510 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2e4>
        149358:	e24dd004 	sub	sp, sp, #4	; 0x4
        14935c:	e1a0200d 	mov	r2, sp
        149360:	e1a00004 	mov	r0, r4
        149364:	eb66db3d 	bl	1b00060 <$ObjectGetRegister(ObjectMessage *, unsigned long, unsigned long *)>
        149368:	e1b05000 	movs	r5, r0
        14936c:	059d0000 	ldreq	r0, [sp]
        149370:	05a40004 	streq	r0, [r4, #4]!
        149374:	e28dd004 	add	sp, sp, #4	; 0x4
        149378:	ea000067 	b	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        14937c:	e1a00004 	mov	r0, r4
        149380:	eb66db38 	bl	1b00068 <$ObjectSetRegister(ObjectMessage *, unsigned long)>
        149384:	ea000061 	b	149510 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2e4>
        149388:	e3310014 	teq	r1, #20	; 0x14
        14938c:	1a000062 	bne	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        149390:	e5960000 	ldr	r0, [r6]
        149394:	e594100c 	ldr	r1, [r4, #12]
        149398:	e201200f 	and	r2, r1, #15	; 0xf
        14939c:	e3320005 	teq	r2, #5	; 0x5
        1493a0:	13a02000 	movne	r2, #0	; 0x0
        1493a4:	01a0200a 	moveq	r2, sl
        1493a8:	e3320000 	teq	r2, #0	; 0x0
        1493ac:	0a000001 	beq	1493b8 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x18c>
        1493b0:	eb0742d7 	bl	319f14 <TObjectTable::Get(unsigned long)>
        1493b4:	ea000000 	b	1493bc <TObjectManager::MonitorProc(long, ObjectMessage *)+0x190>
        1493b8:	e3a00000 	mov	r0, #0	; 0x0
        1493bc:	e1b07000 	movs	r7, r0
        1493c0:	0a000055 	beq	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        1493c4:	e5960000 	ldr	r0, [r6]
        1493c8:	e5941008 	ldr	r1, [r4, #8]
        1493cc:	e201200f 	and	r2, r1, #15	; 0xf
        1493d0:	e3320004 	teq	r2, #4	; 0x4
        1493d4:	13a02000 	movne	r2, #0	; 0x0
        1493d8:	01a0200a 	moveq	r2, sl
        1493dc:	e3320000 	teq	r2, #0	; 0x0
        1493e0:	0a000001 	beq	1493ec <TObjectManager::MonitorProc(long, ObjectMessage *)+0x1c0>
        1493e4:	eb0742ca 	bl	319f14 <TObjectTable::Get(unsigned long)>
        1493e8:	ea000000 	b	1493f0 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x1c4>
        1493ec:	e3a00000 	mov	r0, #0	; 0x0
        1493f0:	e3300000 	teq	r0, #0	; 0x0
        1493f4:	0a000048 	beq	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        1493f8:	e5d43012 	ldrb	r3, [r4, #18]
        1493fc:	e92d0008 	stmdb	sp!, {r3}
        149400:	e5d43011 	ldrb	r3, [r4, #17]
        149404:	e5d42010 	ldrb	r2, [r4, #16]
        149408:	e1a01007 	mov	r1, r7
        14940c:	eb66a12c 	bl	1af18c4 <TEnvironment::$Add(TKDomain *, unsigned char, unsigned char, unsigned char)>
        149410:	e28dd004 	add	sp, sp, #4	; 0x4
        149414:	ea00001d 	b	149490 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x264>
        149418:	e3310010 	teq	r1, #16	; 0x10
        14941c:	1a00003e 	bne	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        149420:	e5960000 	ldr	r0, [r6]
        149424:	e594100c 	ldr	r1, [r4, #12]
        149428:	e201200f 	and	r2, r1, #15	; 0xf
        14942c:	e3320005 	teq	r2, #5	; 0x5
        149430:	13a02000 	movne	r2, #0	; 0x0
        149434:	01a0200a 	moveq	r2, sl
        149438:	e3320000 	teq	r2, #0	; 0x0
        14943c:	0a000001 	beq	149448 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x21c>
        149440:	eb0742b3 	bl	319f14 <TObjectTable::Get(unsigned long)>
        149444:	ea000000 	b	14944c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x220>
        149448:	e3a00000 	mov	r0, #0	; 0x0
        14944c:	e1b07000 	movs	r7, r0
        149450:	0a000031 	beq	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        149454:	e5960000 	ldr	r0, [r6]
        149458:	e5b41008 	ldr	r1, [r4, #8]!
        14945c:	e201200f 	and	r2, r1, #15	; 0xf
        149460:	e3320004 	teq	r2, #4	; 0x4
        149464:	13a02000 	movne	r2, #0	; 0x0
        149468:	01a0200a 	moveq	r2, sl
        14946c:	e3320000 	teq	r2, #0	; 0x0
        149470:	0a000001 	beq	14947c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x250>
        149474:	eb0742a6 	bl	319f14 <TObjectTable::Get(unsigned long)>
        149478:	ea000000 	b	149480 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x254>
        14947c:	e3a00000 	mov	r0, #0	; 0x0
        149480:	e3300000 	teq	r0, #0	; 0x0
        149484:	0a000024 	beq	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        149488:	e1a01007 	mov	r1, r7
        14948c:	eb66e74f 	bl	1b031d0 <TEnvironment::$Remove(TKDomain *)>
        149490:	e3a05000 	mov	r5, #0	; 0x0
        149494:	ea000020 	b	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        149498:	e1a02004 	mov	r2, r4
        14949c:	e1a00004 	mov	r0, r4
        1494a0:	eb67318c 	bl	1b15ad8 <$SetDomainFaultMonitor(ObjectMessage *, unsigned long, unsigned long)>
        1494a4:	ea000019 	b	149510 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2e4>
        1494a8:	e1a02004 	mov	r2, r4
        1494ac:	e1a00004 	mov	r0, r4
        1494b0:	eb673189 	bl	1b15adc <$GetObjectContent(ObjectMessage *, unsigned long, unsigned long)>
        1494b4:	ea000015 	b	149510 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2e4>
        1494b8:	e5970000 	ldr	r0, [r7]
        1494bc:	e3300000 	teq	r0, #0	; 0x0
        1494c0:	1a00000a 	bne	1494f0 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2c4>
        1494c4:	e3a00018 	mov	r0, #24	; 0x18
        1494c8:	eb6a149a 	bl	1bce738 <$__nw(unsigned int)>
        1494cc:	e1b05000 	movs	r5, r0
        1494d0:	0a000005 	beq	1494ec <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2c0>
        1494d4:	eb09058c 	bl	38ab0c <C$$dtorvec$$Limit+0x198>
        1494d8:	e1a01000 	mov	r1, r0
        1494dc:	e2850004 	add	r0, r5, #4	; 0x4
        1494e0:	eb6a1075 	bl	1bcd6bc <TDoubleQContainer::$__ct(char *)>
        1494e4:	e3a00000 	mov	r0, #0	; 0x0
        1494e8:	e5c50000 	strb	r0, [r5]
        1494ec:	e5875000 	str	r5, [r7]
        1494f0:	e5970000 	ldr	r0, [r7]
        1494f4:	e3300000 	teq	r0, #0	; 0x0
        1494f8:	0a000003 	beq	14950c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2e0>
        1494fc:	e2844004 	add	r4, r4, #4	; 0x4
        149500:	e9b4000e 	ldmib	r4!, {r1, r2, r3}
        149504:	eb66daa1 	bl	1afff90 <TExtPageTrackerMgr::$MakeNewTracker(unsigned long, unsigned long, unsigned long)>
        149508:	ea000000 	b	149510 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2e4>
        14950c:	eb6a6303 	bl	1be2120 <$MemError>
        149510:	e1a05000 	mov	r5, r0
        149514:	ea000000 	b	14951c <TObjectManager::MonitorProc(long, ObjectMessage *)+0x2f0>
        149518:	e59f5020 	ldr	r5, [pc, #20]	; 149540 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x314>
        14951c:	e5d90000 	ldrb	r0, [r9]
        149520:	e3300000 	teq	r0, #0	; 0x0
        149524:	0a000003 	beq	149538 <TObjectManager::MonitorProc(long, ObjectMessage *)+0x30c>
        149528:	e3a00000 	mov	r0, #0	; 0x0
        14952c:	e5c90000 	strb	r0, [r9]
        149530:	e5960000 	ldr	r0, [r6]
        149534:	eb07418b 	bl	319b68 <TObjectTable::ScavengeAll(void)>
        149538:	e1a00005 	mov	r0, r5
        14953c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        149540:	ffffd8cb 	swinv	0x00ffd8cb
    */
}

