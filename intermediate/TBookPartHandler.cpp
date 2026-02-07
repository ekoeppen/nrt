#include "include/TBookPartHandler.h"

/**
 * Symbol: TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)
 * Address: 0010c148
 */
TBookPartHandler::Install(PartId const &, SourceType, PartInfo *) {
    /*
        10c148:	e1a0c00d 	mov	ip, sp
        10c14c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        10c150:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10c154:	e24cb014 	sub	fp, ip, #20	; 0x14
        10c158:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10c15c:	e3a00002 	mov	r0, #2	; 0x2
        10c160:	eb6ad7f9 	bl	1bc214c <$AllocateRefHandle(long)>
        10c164:	e58d0004 	str	r0, [sp, #4]
        10c168:	e3a00000 	mov	r0, #0	; 0x0
        10c16c:	e3a05000 	mov	r5, #0	; 0x0
        10c170:	e40d006c 	str	r0, [sp], -#108
        10c174:	e58d5000 	str	r5, [sp]
        10c178:	e28d0008 	add	r0, sp, #8	; 0x8
        10c17c:	eb6a99fc 	bl	1bb2974 <$setjmp>
        10c180:	e3300000 	teq	r0, #0	; 0x0
        10c184:	e1a0000d 	mov	r0, sp
        10c188:	1a0000bb 	bne	10c47c <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x334>
        10c18c:	eb6b4fba 	bl	1be007c <$AddExceptionHandler>
        10c190:	e24dd008 	sub	sp, sp, #8	; 0x8
        10c194:	e28b000c 	add	r0, fp, #12	; 0xc
        10c198:	e8905000 	ldmia	r0, {ip, lr}
        10c19c:	e88d5000 	stmia	sp, {ip, lr}
        10c1a0:	e4dd0008 	ldrb	r0, [sp], #8
        10c1a4:	e3100001 	tst	r0, #1	; 0x1
        10c1a8:	e3e06e8a 	mvn	r6, #2208	; 0x8a0
        10c1ac:	e2466a02 	sub	r6, r6, #8192	; 0x2000
        10c1b0:	1a000007 	bne	10c1d4 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x8c>
        10c1b4:	e28d1074 	add	r1, sp, #116	; 0x74
        10c1b8:	e59b0004 	ldr	r0, [fp, #4]
        10c1bc:	eb6b119d 	bl	1bd0838 <TPartHandler::$Copy(void *)>
        10c1c0:	e58d006c 	str	r0, [sp, #108]
        10c1c4:	e3300000 	teq	r0, #0	; 0x0
        10c1c8:	158d606c 	strne	r6, [sp, #108]
        10c1cc:	1a0000ad 	bne	10c488 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x340>
        10c1d0:	ea00000e 	b	10c210 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0xc8>
        10c1d4:	e59b0004 	ldr	r0, [fp, #4]
        10c1d8:	eb6b2218 	bl	1bd4a40 <TPartHandler::$GetSourcePtr(void)>
        10c1dc:	e2800001 	add	r0, r0, #1	; 0x1
        10c1e0:	e58d0074 	str	r0, [sp, #116]
        10c1e4:	eb6ad7d8 	bl	1bc214c <$AllocateRefHandle(long)>
        10c1e8:	e1a04000 	mov	r4, r0
        10c1ec:	e5900000 	ldr	r0, [r0]
        10c1f0:	e1a01005 	mov	r1, r5
        10c1f4:	eb6ae016 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10c1f8:	e58d0074 	str	r0, [sp, #116]
        10c1fc:	e1a00004 	mov	r0, r4
        10c200:	eb6adbed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c204:	e59d006c 	ldr	r0, [sp, #108]
        10c208:	e3300000 	teq	r0, #0	; 0x0
        10c20c:	1a00009d 	bne	10c488 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x340>
        10c210:	e24dd008 	sub	sp, sp, #8	; 0x8
        10c214:	e59b0008 	ldr	r0, [fp, #8]
        10c218:	e5900000 	ldr	r0, [r0]
        10c21c:	e1a00100 	mov	r0, r0, lsl #2
        10c220:	eb6ad7c9 	bl	1bc214c <$AllocateRefHandle(long)>
        10c224:	e58d0000 	str	r0, [sp]
        10c228:	e1a0400d 	mov	r4, sp
        10c22c:	e59d007c 	ldr	r0, [sp, #124]
        10c230:	eb6ad7c5 	bl	1bc214c <$AllocateRefHandle(long)>
        10c234:	e58d0004 	str	r0, [sp, #4]
        10c238:	e28d1004 	add	r1, sp, #4	; 0x4
        10c23c:	e28b300c 	add	r3, fp, #12	; 0xc
        10c240:	e59f0220 	ldr	r0, [pc, #220]	; 10c468 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x320>
        10c244:	e5900000 	ldr	r0, [r0]
        10c248:	e1a02004 	mov	r2, r4
        10c24c:	eb66f8c2 	bl	1aca55c <TLibrarian::$BookAvailable(RefVar const &, RefVar const &, SourceType *)>
        10c250:	e59d1078 	ldr	r1, [sp, #120]
        10c254:	e5810000 	str	r0, [r1]
        10c258:	e59d0000 	ldr	r0, [sp]
        10c25c:	eb6adbd6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c260:	e59d0004 	ldr	r0, [sp, #4]
        10c264:	eb6adbd4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c268:	e59d0078 	ldr	r0, [sp, #120]
        10c26c:	e5900000 	ldr	r0, [r0]
        10c270:	e3300002 	teq	r0, #2	; 0x2
        10c274:	058d6074 	streq	r6, [sp, #116]
        10c278:	0a000078 	beq	10c460 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x318>
        10c27c:	e3a0001a 	mov	r0, #26	; 0x1a
        10c280:	eb6ad7b1 	bl	1bc214c <$AllocateRefHandle(long)>
        10c284:	e1a04000 	mov	r4, r0
        10c288:	e5901000 	ldr	r1, [r0]
        10c28c:	e59d0078 	ldr	r0, [sp, #120]
        10c290:	e5900000 	ldr	r0, [r0]
        10c294:	eb6adfe5 	bl	1bc4230 <$EQRef__FlT1>
        10c298:	e1b06000 	movs	r6, r0
        10c29c:	13a06001 	movne	r6, #1	; 0x1
        10c2a0:	e1a00004 	mov	r0, r4
        10c2a4:	eb6adbc4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c2a8:	e3360000 	teq	r6, #0	; 0x0
        10c2ac:	13e000a1 	mvnne	r0, #161	; 0xa1
        10c2b0:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        10c2b4:	158d0074 	strne	r0, [sp, #116]
        10c2b8:	1a000068 	bne	10c460 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x318>
        10c2bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        10c2c0:	e59d0084 	ldr	r0, [sp, #132]
        10c2c4:	eb6ad7a0 	bl	1bc214c <$AllocateRefHandle(long)>
        10c2c8:	e1a06000 	mov	r6, r0
        10c2cc:	e59f0198 	ldr	r0, [pc, #198]	; 10c46c <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x324>
        10c2d0:	e5900000 	ldr	r0, [r0]
        10c2d4:	e5901000 	ldr	r1, [r0]
        10c2d8:	e5960000 	ldr	r0, [r6]
        10c2dc:	eb6adfdf 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10c2e0:	eb6ad799 	bl	1bc214c <$AllocateRefHandle(long)>
        10c2e4:	e1a04000 	mov	r4, r0
        10c2e8:	e1a00006 	mov	r0, r6
        10c2ec:	eb6adbb2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c2f0:	e59f0178 	ldr	r0, [pc, #178]	; 10c470 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x328>
        10c2f4:	e5900000 	ldr	r0, [r0]
        10c2f8:	e5901000 	ldr	r1, [r0]
        10c2fc:	e5940000 	ldr	r0, [r4]
        10c300:	eb6adfd6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10c304:	eb6ad790 	bl	1bc214c <$AllocateRefHandle(long)>
        10c308:	e58d0000 	str	r0, [sp]
        10c30c:	e1a0000d 	mov	r0, sp
        10c310:	eb6af052 	bl	1bc8460 <$TotalClone(RefVar const &)>
        10c314:	eb6ad78c 	bl	1bc214c <$AllocateRefHandle(long)>
        10c318:	e58d0004 	str	r0, [sp, #4]
        10c31c:	e59d0000 	ldr	r0, [sp]
        10c320:	eb6adba5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c324:	e1a06005 	mov	r6, r5
        10c328:	e24dd004 	sub	sp, sp, #4	; 0x4
        10c32c:	e59d0008 	ldr	r0, [sp, #8]
        10c330:	e5900000 	ldr	r0, [r0]
        10c334:	e3300002 	teq	r0, #2	; 0x2
        10c338:	0a00000e 	beq	10c378 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x230>
        10c33c:	e24dd004 	sub	sp, sp, #4	; 0x4
        10c340:	e3a00001 	mov	r0, #1	; 0x1
        10c344:	eb663e94 	bl	1a9bd9c <$MakeArray(long)>
        10c348:	eb6ad77f 	bl	1bc214c <$AllocateRefHandle(long)>
        10c34c:	e58d0000 	str	r0, [sp]
        10c350:	e1a01006 	mov	r1, r6
        10c354:	e5942000 	ldr	r2, [r4]
        10c358:	e5900000 	ldr	r0, [r0]
        10c35c:	eb6ae7fd 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        10c360:	e1a0100d 	mov	r1, sp
        10c364:	e28d000c 	add	r0, sp, #12	; 0xc
        10c368:	eb6adb98 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        10c36c:	e59d0000 	ldr	r0, [sp]
        10c370:	eb6adb91 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c374:	e28dd004 	add	sp, sp, #4	; 0x4
        10c378:	e59f50f4 	ldr	r5, [pc, #f4]	; 10c474 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x32c>
        10c37c:	e5950000 	ldr	r0, [r5]
        10c380:	e5901000 	ldr	r1, [r0]
        10c384:	e5940000 	ldr	r0, [r4]
        10c388:	eb6adfb4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10c38c:	eb6ad76e 	bl	1bc214c <$AllocateRefHandle(long)>
        10c390:	e58d0000 	str	r0, [sp]
        10c394:	e1a0000d 	mov	r0, sp
        10c398:	eb6af030 	bl	1bc8460 <$TotalClone(RefVar const &)>
        10c39c:	e59d1008 	ldr	r1, [sp, #8]
        10c3a0:	e5810000 	str	r0, [r1]
        10c3a4:	e59d0000 	ldr	r0, [sp]
        10c3a8:	eb6adb83 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c3ac:	e59d0008 	ldr	r0, [sp, #8]
        10c3b0:	e5900000 	ldr	r0, [r0]
        10c3b4:	e3300002 	teq	r0, #2	; 0x2
        10c3b8:	0a000003 	beq	10c3cc <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x284>
        10c3bc:	e28d2008 	add	r2, sp, #8	; 0x8
        10c3c0:	e1a01005 	mov	r1, r5
        10c3c4:	e28d0084 	add	r0, sp, #132	; 0x84
        10c3c8:	eb6ae7e6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10c3cc:	e24dd004 	sub	sp, sp, #4	; 0x4
        10c3d0:	e5db000d 	ldrb	r0, [fp, #13]
        10c3d4:	e3300006 	teq	r0, #6	; 0x6
        10c3d8:	1a00000b 	bne	10c40c <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x2c4>
        10c3dc:	e5db000c 	ldrb	r0, [fp, #12]
        10c3e0:	e3100002 	tst	r0, #2	; 0x2
        10c3e4:	0a000008 	beq	10c40c <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x2c4>
        10c3e8:	e3a00008 	mov	r0, #8	; 0x8
        10c3ec:	eb6ad756 	bl	1bc214c <$AllocateRefHandle(long)>
        10c3f0:	e58d0000 	str	r0, [sp]
        10c3f4:	e1a0200d 	mov	r2, sp
        10c3f8:	e59f1078 	ldr	r1, [pc, #78]	; 10c478 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x330>
        10c3fc:	e28d0088 	add	r0, sp, #136	; 0x88
        10c400:	eb6ae7d8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10c404:	e59d0000 	ldr	r0, [sp]
        10c408:	eb6adb6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c40c:	e3a00004 	mov	r0, #4	; 0x4
        10c410:	eb6b08c8 	bl	1bce738 <$__nw(unsigned int)>
        10c414:	e1b05000 	movs	r5, r0
        10c418:	0a000003 	beq	10c42c <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x2e4>
        10c41c:	e3a00002 	mov	r0, #2	; 0x2
        10c420:	eb6ad749 	bl	1bc214c <$AllocateRefHandle(long)>
        10c424:	e5850000 	str	r0, [r5]
        10c428:	e5a06004 	str	r6, [r0, #4]!
        10c42c:	e1a01005 	mov	r1, r5
        10c430:	e59d0088 	ldr	r0, [sp, #136]
        10c434:	e5902000 	ldr	r2, [r0]
        10c438:	e5950000 	ldr	r0, [r5]
        10c43c:	e5802000 	str	r2, [r0]
        10c440:	e59b0004 	ldr	r0, [fp, #4]
        10c444:	eb6b3e69 	bl	1bdbdf0 <TPartHandler::$SetRemoveObjPtr(long)>
        10c448:	e28dd008 	add	sp, sp, #8	; 0x8
        10c44c:	e59d0004 	ldr	r0, [sp, #4]
        10c450:	eb6adb59 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c454:	e1a00004 	mov	r0, r4
        10c458:	eb6adb57 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c45c:	e28dd008 	add	sp, sp, #8	; 0x8
        10c460:	e28dd008 	add	sp, sp, #8	; 0x8
        10c464:	ea000007 	b	10c488 <TBookPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x340>
        10c468:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        10c46c:	00682138 	rsbeq	r2, r8, r8, lsr r1
        10c470:	00682140 	rsbeq	r2, r8, r0, asr #2
        10c474:	00682158 	rsbeq	r2, r8, r8, asr r1
        10c478:	00684cb0 	streqh	r4, [r8], -#192
        10c47c:	e2800060 	add	r0, r0, #96	; 0x60
        10c480:	eb675f72 	bl	1ae4250 <$FramesException(Exception *)>
        10c484:	e58d006c 	str	r0, [sp, #108]
        10c488:	e1a0000d 	mov	r0, sp
        10c48c:	eb6b5309 	bl	1be10b8 <$ExitHandler>
        10c490:	e5bd406c 	ldr	r4, [sp, #108]!
        10c494:	e59d0004 	ldr	r0, [sp, #4]
        10c498:	eb6adb47 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c49c:	e1a00004 	mov	r0, r4
        10c4a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TBookPartHandler::Remove(PartId const &, unsigned long, long)
 * Address: 0010c4a4
 */
TBookPartHandler::Remove(PartId const &, unsigned long, long) {
    /*
        10c4a4:	e1a0c00d 	mov	ip, sp
        10c4a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10c4ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        10c4b0:	e1a05003 	mov	r5, r3
        10c4b4:	e5930000 	ldr	r0, [r3]
        10c4b8:	e5900000 	ldr	r0, [r0]
        10c4bc:	eb6ad722 	bl	1bc214c <$AllocateRefHandle(long)>
        10c4c0:	e1a04000 	mov	r4, r0
        10c4c4:	e3a06000 	mov	r6, #0	; 0x0
        10c4c8:	e3350000 	teq	r5, #0	; 0x0
        10c4cc:	0a000003 	beq	10c4e0 <TBookPartHandler::Remove(PartId const &, unsigned long, long)+0x3c>
        10c4d0:	e5950000 	ldr	r0, [r5]
        10c4d4:	eb6adb38 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c4d8:	e1a00005 	mov	r0, r5
        10c4dc:	eb6b047f 	bl	1bcd6e0 <$__dl(void *)>
        10c4e0:	e52d606c 	str	r6, [sp, -#108]!
        10c4e4:	e28d0008 	add	r0, sp, #8	; 0x8
        10c4e8:	eb6a9921 	bl	1bb2974 <$setjmp>
        10c4ec:	e3300000 	teq	r0, #0	; 0x0
        10c4f0:	e1a0000d 	mov	r0, sp
        10c4f4:	1a00000e 	bne	10c534 <TBookPartHandler::Remove(PartId const &, unsigned long, long)+0x90>
        10c4f8:	eb6b4edf 	bl	1be007c <$AddExceptionHandler>
        10c4fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        10c500:	e5940000 	ldr	r0, [r4]
        10c504:	eb6ad710 	bl	1bc214c <$AllocateRefHandle(long)>
        10c508:	e58d0000 	str	r0, [sp]
        10c50c:	e1a0100d 	mov	r1, sp
        10c510:	e59f0018 	ldr	r0, [pc, #18]	; 10c530 <TBookPartHandler::Remove(PartId const &, unsigned long, long)+0x8c>
        10c514:	e5900000 	ldr	r0, [r0]
        10c518:	eb6b8c9c 	bl	1bef790 <TLibrarian::$BookRemoved(RefVar const &)>
        10c51c:	e1a05000 	mov	r5, r0
        10c520:	e59d0000 	ldr	r0, [sp]
        10c524:	eb6adb24 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c528:	e28dd004 	add	sp, sp, #4	; 0x4
        10c52c:	ea000003 	b	10c540 <TBookPartHandler::Remove(PartId const &, unsigned long, long)+0x9c>
        10c530:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        10c534:	e2800060 	add	r0, r0, #96	; 0x60
        10c538:	eb675f44 	bl	1ae4250 <$FramesException(Exception *)>
        10c53c:	e1a05000 	mov	r5, r0
        10c540:	e1a0000d 	mov	r0, sp
        10c544:	eb6b52db 	bl	1be10b8 <$ExitHandler>
        10c548:	e28dd06c 	add	sp, sp, #108	; 0x6c
        10c54c:	e1a00004 	mov	r0, r4
        10c550:	eb6adb19 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c554:	e1a00005 	mov	r0, r5
        10c558:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TBookPartHandler::Expand(void *, CPipe *, PartInfo *)
 * Address: 0010c55c
 */
TBookPartHandler::Expand(void *, CPipe *, PartInfo *) {
    /*
        10c55c:	e1a0c00d 	mov	ip, sp
        10c560:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10c564:	e24cb004 	sub	fp, ip, #4	; 0x4
        10c568:	e1a04001 	mov	r4, r1
        10c56c:	e1a01002 	mov	r1, r2
        10c570:	e24dd010 	sub	sp, sp, #16	; 0x10
        10c574:	e3a05000 	mov	r5, #0	; 0x0
        10c578:	e1a0000d 	mov	r0, sp
        10c57c:	eb6ad2d9 	bl	1bc10e8 <TObjectReader::$__ct(CPipe &)>
        10c580:	e3a00000 	mov	r0, #0	; 0x0
        10c584:	e52d006c 	str	r0, [sp, -#108]!
        10c588:	e28d0008 	add	r0, sp, #8	; 0x8
        10c58c:	eb6a98f8 	bl	1bb2974 <$setjmp>
        10c590:	e3300000 	teq	r0, #0	; 0x0
        10c594:	1a000005 	bne	10c5b0 <TBookPartHandler::Expand(void *, CPipe *, PartInfo *)+0x54>
        10c598:	e1a0000d 	mov	r0, sp
        10c59c:	eb6b4eb6 	bl	1be007c <$AddExceptionHandler>
        10c5a0:	e28d006c 	add	r0, sp, #108	; 0x6c
        10c5a4:	eb6ae758 	bl	1bc630c <TObjectReader::$Read(void)>
        10c5a8:	e5840000 	str	r0, [r4]
        10c5ac:	ea00000d 	b	10c5e8 <TBookPartHandler::Expand(void *, CPipe *, PartInfo *)+0x8c>
        10c5b0:	e59d0060 	ldr	r0, [sp, #96]
        10c5b4:	e59f1020 	ldr	r1, [pc, #20]	; 10c5dc <TBookPartHandler::Expand(void *, CPipe *, PartInfo *)+0x80>
        10c5b8:	e5911000 	ldr	r1, [r1]
        10c5bc:	eb6b5af4 	bl	1be3194 <$Subexception>
        10c5c0:	e3300000 	teq	r0, #0	; 0x0
        10c5c4:	0a000005 	beq	10c5e0 <TBookPartHandler::Expand(void *, CPipe *, PartInfo *)+0x84>
        10c5c8:	e59d5064 	ldr	r5, [sp, #100]
        10c5cc:	e28d006c 	add	r0, sp, #108	; 0x6c
        10c5d0:	e3a01000 	mov	r1, #0	; 0x0
        10c5d4:	eb650865 	bl	1a4e770 <TObjectReader::$__dt(void)>
        10c5d8:	ea000002 	b	10c5e8 <TBookPartHandler::Expand(void *, CPipe *, PartInfo *)+0x8c>
        10c5dc:	00371324 	eoreqs	r1, r7, r4, lsr #6
        10c5e0:	e1a0000d 	mov	r0, sp
        10c5e4:	eb6b56da 	bl	1be2154 <$NextHandler>
        10c5e8:	e1a0000d 	mov	r0, sp
        10c5ec:	eb6b52b1 	bl	1be10b8 <$ExitHandler>
        10c5f0:	e28dd06c 	add	sp, sp, #108	; 0x6c
        10c5f4:	e1a0000d 	mov	r0, sp
        10c5f8:	e3a01000 	mov	r1, #0	; 0x0
        10c5fc:	eb65085b 	bl	1a4e770 <TObjectReader::$__dt(void)>
        10c600:	e1a00005 	mov	r0, r5
        10c604:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

