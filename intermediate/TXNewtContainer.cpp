#include "include/TXNewtContainer.h"

/**
 * Symbol: TXNewtContainer::FocusOnValue(unsigned long)
 * Address: 0023e290
 */
TXNewtContainer::FocusOnValue(unsigned long) {
    /*
        23e290:	e1a0c00d 	mov	ip, sp
        23e294:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23e298:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e29c:	e1a05000 	mov	r5, r0
        23e2a0:	e1a04001 	mov	r4, r1
        23e2a4:	e3e06065 	mvn	r6, #101	; 0x65
        23e2a8:	eb652c92 	bl	1b894f8 <TXContainer::$FocusOnValue(unsigned long)>
        23e2ac:	e285500c 	add	r5, r5, #12	; 0xc
        23e2b0:	e59fc028 	ldr	ip, [pc, #28]	; 23e2e0 <TXNewtContainer::FocusOnValue(unsigned long)+0x50>
        23e2b4:	e134000c 	teq	r4, ip
        23e2b8:	1a00000a 	bne	23e2e8 <TXNewtContainer::FocusOnValue(unsigned long)+0x58>
        23e2bc:	e59f0020 	ldr	r0, [pc, #20]	; 23e2e4 <TXNewtContainer::FocusOnValue(unsigned long)+0x54>
        23e2c0:	e5900000 	ldr	r0, [r0]
        23e2c4:	e5901000 	ldr	r1, [r0]
        23e2c8:	e5950000 	ldr	r0, [r5]
        23e2cc:	e5900000 	ldr	r0, [r0]
        23e2d0:	eb6617e2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e2d4:	e3300002 	teq	r0, #2	; 0x2
        23e2d8:	0a00003a 	beq	23e3c8 <TXNewtContainer::FocusOnValue(unsigned long)+0x138>
        23e2dc:	ea000038 	b	23e3c4 <TXNewtContainer::FocusOnValue(unsigned long)+0x134>
        23e2e0:	54455854 	strplb	r5, [r5], -#2132	; fField2132
        23e2e4:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        23e2e8:	e59fc044 	ldr	ip, [pc, #44]	; 23e334 <TXNewtContainer::FocusOnValue(unsigned long)+0xa4>
        23e2ec:	e134000c 	teq	r4, ip
        23e2f0:	1a000011 	bne	23e33c <TXNewtContainer::FocusOnValue(unsigned long)+0xac>
        23e2f4:	e1a00005 	mov	r0, r5
        23e2f8:	eb660f9a 	bl	1bc2168 <$ClassOf(RefVar const &)>
        23e2fc:	eb660f92 	bl	1bc214c <$AllocateRefHandle(long)>
        23e300:	e1a04000 	mov	r4, r0
        23e304:	e59f002c 	ldr	r0, [pc, #2c]	; 23e338 <TXNewtContainer::FocusOnValue(unsigned long)+0xa8>
        23e308:	e5900000 	ldr	r0, [r0]
        23e30c:	e5901000 	ldr	r1, [r0]
        23e310:	e5940000 	ldr	r0, [r4]
        23e314:	eb6617c5 	bl	1bc4230 <$EQRef__FlT1>
        23e318:	e1b05000 	movs	r5, r0
        23e31c:	13a05001 	movne	r5, #1	; 0x1
        23e320:	e1a00004 	mov	r0, r4
        23e324:	eb6613a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e328:	e3350000 	teq	r5, #0	; 0x0
        23e32c:	0a000025 	beq	23e3c8 <TXNewtContainer::FocusOnValue(unsigned long)+0x138>
        23e330:	ea000023 	b	23e3c4 <TXNewtContainer::FocusOnValue(unsigned long)+0x134>
        23e334:	73686170 	cmnvc	r8, #28	; 0x1c
        23e338:	00683020 	rsbeq	r3, r8, r0, lsr #32
        23e33c:	e59fc048 	ldr	ip, [pc, #48]	; 23e38c <TXNewtContainer::FocusOnValue(unsigned long)+0xfc>
        23e340:	e134000c 	teq	r4, ip
        23e344:	1a000013 	bne	23e398 <TXNewtContainer::FocusOnValue(unsigned long)+0x108>
        23e348:	e59f1040 	ldr	r1, [pc, #40]	; 23e390 <TXNewtContainer::FocusOnValue(unsigned long)+0x100>
        23e34c:	e5911000 	ldr	r1, [r1]
        23e350:	e5911000 	ldr	r1, [r1]
        23e354:	e5950000 	ldr	r0, [r5]
        23e358:	e5900000 	ldr	r0, [r0]
        23e35c:	eb6617bf 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e360:	e3300002 	teq	r0, #2	; 0x2
        23e364:	1a000016 	bne	23e3c4 <TXNewtContainer::FocusOnValue(unsigned long)+0x134>
        23e368:	e59f0024 	ldr	r0, [pc, #24]	; 23e394 <TXNewtContainer::FocusOnValue(unsigned long)+0x104>
        23e36c:	e5900000 	ldr	r0, [r0]
        23e370:	e5901000 	ldr	r1, [r0]
        23e374:	e5950000 	ldr	r0, [r5]
        23e378:	e5900000 	ldr	r0, [r0]
        23e37c:	eb6617b7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e380:	e3300002 	teq	r0, #2	; 0x2
        23e384:	0a00000f 	beq	23e3c8 <TXNewtContainer::FocusOnValue(unsigned long)+0x138>
        23e388:	ea00000d 	b	23e3c4 <TXNewtContainer::FocusOnValue(unsigned long)+0x134>
        23e38c:	7478726e 	ldrvcbt	r7, [r8], -#622
        23e390:	00684930 	rsbeq	r4, r8, r0, lsr r9
        23e394:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        23e398:	e59fc030 	ldr	ip, [pc, #30]	; 23e3d0 <TXNewtContainer::FocusOnValue(unsigned long)+0x140>
        23e39c:	e134000c 	teq	r4, ip
        23e3a0:	1a000008 	bne	23e3c8 <TXNewtContainer::FocusOnValue(unsigned long)+0x138>
        23e3a4:	e59f0028 	ldr	r0, [pc, #28]	; 23e3d4 <TXNewtContainer::FocusOnValue(unsigned long)+0x144>
        23e3a8:	e5900000 	ldr	r0, [r0]
        23e3ac:	e5901000 	ldr	r1, [r0]
        23e3b0:	e5950000 	ldr	r0, [r5]
        23e3b4:	e5900000 	ldr	r0, [r0]
        23e3b8:	eb6617a8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e3bc:	e3300002 	teq	r0, #2	; 0x2
        23e3c0:	0a000000 	beq	23e3c8 <TXNewtContainer::FocusOnValue(unsigned long)+0x138>
        23e3c4:	e3a06000 	mov	r6, #0	; 0x0
        23e3c8:	e1a00006 	mov	r0, r6
        23e3cc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23e3d0:	7478726c 	ldrvcbt	r7, [r8], -#620
        23e3d4:	006843f8 	streqd	r4, [r8], -#56
    */
}

/**
 * Symbol: TXNewtContainer::GetCountObjects(long *)
 * Address: 0023e3d8
 */
TXNewtContainer::GetCountObjects(long *) {
    /*
        23e3d8:	e1a0c00d 	mov	ip, sp
        23e3dc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23e3e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e3e4:	e1a04001 	mov	r4, r1
        23e3e8:	e3a07001 	mov	r7, #1	; 0x1
        23e3ec:	e3a06000 	mov	r6, #0	; 0x0
        23e3f0:	e5901008 	ldr	r1, [r0, #8]	; fField8
        23e3f4:	e59fc058 	ldr	ip, [pc, #58]	; 23e454 <TXNewtContainer::GetCountObjects(long *)+0x7c>
        23e3f8:	e131000c 	teq	r1, ip
        23e3fc:	05847000 	streq	r7, [r4]
        23e400:	0a000024 	beq	23e498 <TXNewtContainer::GetCountObjects(long *)+0xc0>
        23e404:	e280000c 	add	r0, r0, #12	; 0xc
        23e408:	e59fc048 	ldr	ip, [pc, #48]	; 23e458 <TXNewtContainer::GetCountObjects(long *)+0x80>
        23e40c:	e131000c 	teq	r1, ip
        23e410:	1a000016 	bne	23e470 <TXNewtContainer::GetCountObjects(long *)+0x98>
        23e414:	e59f1040 	ldr	r1, [pc, #40]	; 23e45c <TXNewtContainer::GetCountObjects(long *)+0x84>
        23e418:	e5911000 	ldr	r1, [r1]
        23e41c:	e5911000 	ldr	r1, [r1]
        23e420:	e5900000 	ldr	r0, [r0]
        23e424:	e5900000 	ldr	r0, [r0]
        23e428:	eb66178c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e42c:	eb660f46 	bl	1bc214c <$AllocateRefHandle(long)>
        23e430:	e1a05000 	mov	r5, r0
        23e434:	e5900000 	ldr	r0, [r0]
        23e438:	e3300002 	teq	r0, #2	; 0x2
        23e43c:	0a000007 	beq	23e460 <TXNewtContainer::GetCountObjects(long *)+0x88>
        23e440:	eb661b99 	bl	1bc52ac <$Length(long)>
        23e444:	e0800fa0 	add	r0, r0, r0, lsr #31
        23e448:	e1a000c0 	mov	r0, r0, asr #1
        23e44c:	e5840000 	str	r0, [r4]
        23e450:	ea000003 	b	23e464 <TXNewtContainer::GetCountObjects(long *)+0x8c>
        23e454:	73686170 	cmnvc	r8, #28	; 0x1c
        23e458:	7478726e 	ldrvcbt	r7, [r8], -#622
        23e45c:	00684930 	rsbeq	r4, r8, r0, lsr r9
        23e460:	e5847000 	str	r7, [r4]
        23e464:	e1a00005 	mov	r0, r5
        23e468:	eb661353 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e46c:	ea000009 	b	23e498 <TXNewtContainer::GetCountObjects(long *)+0xc0>
        23e470:	e59f1028 	ldr	r1, [pc, #28]	; 23e4a0 <TXNewtContainer::GetCountObjects(long *)+0xc8>
        23e474:	e5911000 	ldr	r1, [r1]
        23e478:	e5911000 	ldr	r1, [r1]
        23e47c:	e5900000 	ldr	r0, [r0]
        23e480:	e5900000 	ldr	r0, [r0]
        23e484:	eb661775 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e488:	eb661b87 	bl	1bc52ac <$Length(long)>
        23e48c:	e0800fa0 	add	r0, r0, r0, lsr #31
        23e490:	e1a000c0 	mov	r0, r0, asr #1
        23e494:	e5840000 	str	r0, [r4]
        23e498:	e1a00006 	mov	r0, r6
        23e49c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23e4a0:	006843f8 	streqd	r4, [r8], -#56
    */
}

/**
 * Symbol: TXNewtContainer::GetCountTextChars(void)
 * Address: 0023e4a4
 */
TXNewtContainer::GetCountTextChars(void) {
    /*
        23e4a4:	e1a0c00d 	mov	ip, sp
        23e4a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23e4ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e4b0:	e59f1038 	ldr	r1, [pc, #38]	; 23e4f0 <TXNewtContainer::GetCountTextChars(void)+0x4c>
        23e4b4:	e5911000 	ldr	r1, [r1]
        23e4b8:	e5911000 	ldr	r1, [r1]
        23e4bc:	e590000c 	ldr	r0, [r0, #12]	; fField12
        23e4c0:	e5900000 	ldr	r0, [r0]
        23e4c4:	eb661765 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e4c8:	eb660f1f 	bl	1bc214c <$AllocateRefHandle(long)>
        23e4cc:	e1a04000 	mov	r4, r0
        23e4d0:	e5900000 	ldr	r0, [r0]
        23e4d4:	eb661b74 	bl	1bc52ac <$Length(long)>
        23e4d8:	e1a000a0 	mov	r0, r0, lsr #1
        23e4dc:	e2405001 	sub	r5, r0, #1	; 0x1
        23e4e0:	e1a00004 	mov	r0, r4
        23e4e4:	eb661334 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e4e8:	e1a00005 	mov	r0, r5
        23e4ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        23e4f0:	00684ac0 	rsbeq	r4, r8, r0, asr #21
    */
}

/**
 * Symbol: TXNewtContainer::GetValueSize(long *)
 * Address: 0023e4f4
 */
TXNewtContainer::GetValueSize(long *) {
    /*
        23e4f4:	e1a0c00d 	mov	ip, sp
        23e4f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23e4fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e500:	e1a04001 	mov	r4, r1
        23e504:	eb655112 	bl	1b92954 <TXNewtContainer::$GetCountTextChars(void)>
        23e508:	e1a00080 	mov	r0, r0, lsl #1
        23e50c:	e5840000 	str	r0, [r4]
        23e510:	e3a00000 	mov	r0, #0	; 0x0
        23e514:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtContainer::AcquireTextDescriptor(TXTextDescriptor *)
 * Address: 0023e518
 */
TXNewtContainer::AcquireTextDescriptor(TXTextDescriptor *) {
    /*
        23e518:	e1a0c00d 	mov	ip, sp
        23e51c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23e520:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e524:	e1a05001 	mov	r5, r1
        23e528:	e59f1054 	ldr	r1, [pc, #54]	; 23e584 <TXNewtContainer::AcquireTextDescriptor(TXTextDescriptor *)+0x6c>
        23e52c:	e5911000 	ldr	r1, [r1]
        23e530:	e5911000 	ldr	r1, [r1]
        23e534:	e590000c 	ldr	r0, [r0, #12]	; fField12
        23e538:	e5900000 	ldr	r0, [r0]
        23e53c:	eb661747 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e540:	eb660f01 	bl	1bc214c <$AllocateRefHandle(long)>
        23e544:	e1a06000 	mov	r6, r0
        23e548:	e5900000 	ldr	r0, [r0]
        23e54c:	eb661b58 	bl	1bc52b4 <$LockRef(long)>
        23e550:	e5960000 	ldr	r0, [r6]
        23e554:	eb661b54 	bl	1bc52ac <$Length(long)>
        23e558:	e1a000a0 	mov	r0, r0, lsr #1
        23e55c:	e2404001 	sub	r4, r0, #1	; 0x1
        23e560:	e5960000 	ldr	r0, [r6]
        23e564:	eb660efc 	bl	1bc215c <$BinaryData(long)>
        23e568:	e1a01000 	mov	r1, r0
        23e56c:	e1a00005 	mov	r0, r5
        23e570:	e1a02004 	mov	r2, r4
        23e574:	eb6527a3 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        23e578:	e1a00006 	mov	r0, r6
        23e57c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        23e580:	ea66130d 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e584:	00684ac0 	rsbeq	r4, r8, r0, asr #21
    */
}

/**
 * Symbol: TXNewtContainer::ReleaseTextDescriptor(TXTextDescriptor *)
 * Address: 0023e588
 */
TXNewtContainer::ReleaseTextDescriptor(TXTextDescriptor *) {
    /*
        23e588:	e1a0c00d 	mov	ip, sp
        23e58c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23e590:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e594:	e59f102c 	ldr	r1, [pc, #2c]	; 23e5c8 <TXNewtContainer::ReleaseTextDescriptor(TXTextDescriptor *)+0x40>
        23e598:	e5911000 	ldr	r1, [r1]
        23e59c:	e5911000 	ldr	r1, [r1]
        23e5a0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        23e5a4:	e5900000 	ldr	r0, [r0]
        23e5a8:	eb66172c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e5ac:	eb660ee6 	bl	1bc214c <$AllocateRefHandle(long)>
        23e5b0:	e1a04000 	mov	r4, r0
        23e5b4:	e5900000 	ldr	r0, [r0]
        23e5b8:	eb6627ac 	bl	1bc8470 <$UnlockRef(long)>
        23e5bc:	e1a00004 	mov	r0, r4
        23e5c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        23e5c4:	ea6612fc 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e5c8:	00684ac0 	rsbeq	r4, r8, r0, asr #21
    */
}

/**
 * Symbol: TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)
 * Address: 0023e5cc
 */
TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *) {
    /*
        23e5cc:	e1a0c00d 	mov	ip, sp
        23e5d0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23e5d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e5d8:	e1a04000 	mov	r4, r0
        23e5dc:	e1a06001 	mov	r6, r1
        23e5e0:	e1a07002 	mov	r7, r2
        23e5e4:	e1a05003 	mov	r5, r3
        23e5e8:	e3a0a001 	mov	sl, #1	; 0x1
        23e5ec:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23e5f0:	e5c0a000 	strb	sl, [r0]
        23e5f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        23e5f8:	e3a00002 	mov	r0, #2	; 0x2
        23e5fc:	eb660ed2 	bl	1bc214c <$AllocateRefHandle(long)>
        23e600:	e58d0000 	str	r0, [sp]
        23e604:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23e608:	e284900c 	add	r9, r4, #12	; 0xc
        23e60c:	e59fc028 	ldr	ip, [pc, #28]	; 23e63c <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x70>
        23e610:	e130000c 	teq	r0, ip
        23e614:	1a000009 	bne	23e640 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x74>
        23e618:	e585a000 	str	sl, [r5]
        23e61c:	e5990000 	ldr	r0, [r9]
        23e620:	e5900000 	ldr	r0, [r0]
        23e624:	e59d1000 	ldr	r1, [sp]
        23e628:	e5810000 	str	r0, [r1]
        23e62c:	e3a00000 	mov	r0, #0	; 0x0
        23e630:	eb654cb0 	bl	1b918f8 <TXNewtGraphicsRun::$__ct(void)>
        23e634:	e1a04000 	mov	r4, r0
        23e638:	ea000059 	b	23e7a4 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x1d8>
        23e63c:	73686170 	cmnvc	r8, #28	; 0x1c
        23e640:	e3a00002 	mov	r0, #2	; 0x2
        23e644:	eb660ec0 	bl	1bc214c <$AllocateRefHandle(long)>
        23e648:	e1a08000 	mov	r8, r0
        23e64c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23e650:	e59f1058 	ldr	r1, [pc, #58]	; 23e6b0 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0xe4>
        23e654:	e1300001 	teq	r0, r1
        23e658:	1a000017 	bne	23e6bc <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0xf0>
        23e65c:	e59f1050 	ldr	r1, [pc, #50]	; 23e6b4 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0xe8>
        23e660:	e5911000 	ldr	r1, [r1]
        23e664:	e5911000 	ldr	r1, [r1]
        23e668:	e5990000 	ldr	r0, [r9]
        23e66c:	e5900000 	ldr	r0, [r0]
        23e670:	eb6616fa 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e674:	e5880000 	str	r0, [r8]
        23e678:	e3300002 	teq	r0, #2	; 0x2
        23e67c:	1a000015 	bne	23e6d8 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x10c>
        23e680:	e1a00004 	mov	r0, r4
        23e684:	eb6550b2 	bl	1b92954 <TXNewtContainer::$GetCountTextChars(void)>
        23e688:	e5850000 	str	r0, [r5]
        23e68c:	e59f0024 	ldr	r0, [pc, #24]	; 23e6b8 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0xec>
        23e690:	e5900000 	ldr	r0, [r0]
        23e694:	e5901000 	ldr	r1, [r0]
        23e698:	e5990000 	ldr	r0, [r9]
        23e69c:	e5900000 	ldr	r0, [r0]
        23e6a0:	eb6616ee 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e6a4:	e59d1000 	ldr	r1, [sp]
        23e6a8:	e5810000 	str	r0, [r1]
        23e6ac:	ea000009 	b	23e6d8 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x10c>
        23e6b0:	7478726e 	ldrvcbt	r7, [r8], -#622
        23e6b4:	00684930 	rsbeq	r4, r8, r0, lsr r9
        23e6b8:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        23e6bc:	e59f00c0 	ldr	r0, [pc, #c0]	; 23e784 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x1b8>
        23e6c0:	e5900000 	ldr	r0, [r0]
        23e6c4:	e5901000 	ldr	r1, [r0]
        23e6c8:	e5990000 	ldr	r0, [r9]
        23e6cc:	e5900000 	ldr	r0, [r0]
        23e6d0:	eb6616e2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e6d4:	e5880000 	str	r0, [r8]
        23e6d8:	e59d0000 	ldr	r0, [sp]
        23e6dc:	e5900000 	ldr	r0, [r0]
        23e6e0:	e3300002 	teq	r0, #2	; 0x2
        23e6e4:	1a00000c 	bne	23e71c <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x150>
        23e6e8:	e1a01086 	mov	r1, r6, lsl #1
        23e6ec:	e5980000 	ldr	r0, [r8]
        23e6f0:	eb6616d7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        23e6f4:	e3100003 	tst	r0, #3	; 0x3
        23e6f8:	01a00140 	moveq	r0, r0, asr #2
        23e6fc:	0a000000 	beq	23e704 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x138>
        23e700:	eb660e85 	bl	1bc211c <$_RINTError(long)>
        23e704:	e08a1086 	add	r1, sl, r6, lsl #1
        23e708:	e5850000 	str	r0, [r5]
        23e70c:	e5980000 	ldr	r0, [r8]
        23e710:	eb6616cf 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        23e714:	e59d1000 	ldr	r1, [sp]
        23e718:	e5810000 	str	r0, [r1]
        23e71c:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        23e720:	e51f4078 	ldr	r4, [pc, #ffffff88]	; 23e6b0 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0xe4>
        23e724:	e1300004 	teq	r0, r4
        23e728:	159f0058 	ldrne	r0, [pc, #58]	; 23e788 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x1bc>
        23e72c:	1a000018 	bne	23e794 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x1c8>
        23e730:	e1a0000d 	mov	r0, sp
        23e734:	eb66d495 	bl	1bf3990 <$IsFrame(RefVar const &)>
        23e738:	e3300000 	teq	r0, #0	; 0x0
        23e73c:	0a000013 	beq	23e790 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x1c4>
        23e740:	e1a0000d 	mov	r0, sp
        23e744:	eb660e87 	bl	1bc2168 <$ClassOf(RefVar const &)>
        23e748:	eb660e7f 	bl	1bc214c <$AllocateRefHandle(long)>
        23e74c:	e1a05000 	mov	r5, r0
        23e750:	e59f0034 	ldr	r0, [pc, #34]	; 23e78c <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x1c0>
        23e754:	e5900000 	ldr	r0, [r0]
        23e758:	e5901000 	ldr	r1, [r0]
        23e75c:	e5950000 	ldr	r0, [r5]
        23e760:	eb6616b2 	bl	1bc4230 <$EQRef__FlT1>
        23e764:	e20060ff 	and	r6, r0, #255	; 0xff
        23e768:	e1a00005 	mov	r0, r5
        23e76c:	eb661292 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e770:	e3360000 	teq	r6, #0	; 0x0
        23e774:	0a000005 	beq	23e790 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x1c4>
        23e778:	e3a00000 	mov	r0, #0	; 0x0
        23e77c:	eb654c5d 	bl	1b918f8 <TXNewtGraphicsRun::$__ct(void)>
        23e780:	ea000004 	b	23e798 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x1cc>
        23e784:	006843f8 	streqd	r4, [r8], -#56
        23e788:	7478726c 	ldrvcbt	r7, [r8], -#620
        23e78c:	00683020 	rsbeq	r3, r8, r0, lsr #32
        23e790:	e1a00004 	mov	r0, r4
        23e794:	eb652b54 	bl	1b894ec <$TXGetNewDefaultObject(unsigned long)>
        23e798:	e1a04000 	mov	r4, r0
        23e79c:	e1a00008 	mov	r0, r8
        23e7a0:	eb661285 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e7a4:	e5874000 	str	r4, [r7]
        23e7a8:	e3340000 	teq	r4, #0	; 0x0
        23e7ac:	0a000008 	beq	23e7d4 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x208>
        23e7b0:	e1a0100d 	mov	r1, sp
        23e7b4:	e1a00004 	mov	r0, r4
        23e7b8:	e5942000 	ldr	r2, [r4]
        23e7bc:	e1a0e00f 	mov	lr, pc
        23e7c0:	e282f038 	add	pc, r2, #56	; 0x38
        23e7c4:	e59d0000 	ldr	r0, [sp]
        23e7c8:	eb66127b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e7cc:	e3a00000 	mov	r0, #0	; 0x0
        23e7d0:	ea000004 	b	23e7e8 <TXNewtContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x21c>
        23e7d4:	e3a040e9 	mov	r4, #233	; 0xe9
        23e7d8:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        23e7dc:	e59d0000 	ldr	r0, [sp]
        23e7e0:	eb661275 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e7e4:	e1a00004 	mov	r0, r4
        23e7e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtContainer::__ct(RefVar const &)
 * Address: 0023f1bc
 */
TXNewtContainer::TXNewtContainer(RefVar const &) {
    /*
        23f1bc:	e1a0c00d 	mov	ip, sp
        23f1c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23f1c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f1c8:	e1b04000 	movs	r4, r0
        23f1cc:	e1a05001 	mov	r5, r1
        23f1d0:	1a000003 	bne	23f1e4 <TXNewtContainer::__ct(RefVar const &)+0x28>
        23f1d4:	e3a00010 	mov	r0, #16	; 0x10
        23f1d8:	eb663d56 	bl	1bce738 <$__nw(unsigned int)>
        23f1dc:	e1b04000 	movs	r4, r0
        23f1e0:	0a00000d 	beq	23f21c <TXNewtContainer::__ct(RefVar const &)+0x60>
        23f1e4:	e1a00004 	mov	r0, r4
        23f1e8:	e3a01000 	mov	r1, #0	; 0x0
        23f1ec:	eb6528bf 	bl	1b894f0 <TXContainer::$__ct(TXStream *)>
        23f1f0:	e3a00002 	mov	r0, #2	; 0x2
        23f1f4:	eb660bd4 	bl	1bc214c <$AllocateRefHandle(long)>
        23f1f8:	e3a01000 	mov	r1, #0	; 0x0
        23f1fc:	e584000c 	str	r0, [r4, #12]	; fField12
        23f200:	e5a01004 	str	r1, [r0, #4]!	; fField4
        23f204:	e59f0018 	ldr	r0, [pc, #18]	; 23f224 <TXNewtContainer::__ct(RefVar const &)+0x68>
        23f208:	e5840000 	str	r0, [r4]
        23f20c:	e5951000 	ldr	r1, [r5]
        23f210:	e5911000 	ldr	r1, [r1]
        23f214:	e594000c 	ldr	r0, [r4, #12]	; fField12
        23f218:	e5801000 	str	r1, [r0]
        23f21c:	e1a00004 	mov	r0, r4
        23f220:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        23f224:	0001e2e4 	andeq	lr, r1, r4, ror #5
    */
}

/**
 * Symbol: TXNewtContainer::__dt(void)
 * Address: 0023f228
 */
TXNewtContainer::~TXNewtContainer(void) {
    /*
        23f228:	e1a0c00d 	mov	ip, sp
        23f22c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23f230:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f234:	e1a04000 	mov	r4, r0
        23f238:	e1a05001 	mov	r5, r1
        23f23c:	e59f001c 	ldr	r0, [pc, #1c]	; 23f260 <TXNewtContainer::__dt(void)+0x38>
        23f240:	e5840000 	str	r0, [r4]
        23f244:	e594000c 	ldr	r0, [r4, #12]	; fField12
        23f248:	eb660fdb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f24c:	e3150001 	tst	r5, #1	; 0x1
        23f250:	11a00004 	movne	r0, r4
        23f254:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        23f258:	1a663920 	bne	1bcd6e0 <$__dl(void *)>
        23f25c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        23f260:	0001e2e4 	andeq	lr, r1, r4, ror #5
    */
}

/**
 * Symbol: TXNewtContainer::AppendNewValue(unsigned long, long)
 * Address: 0023f264
 */
TXNewtContainer::AppendNewValue(unsigned long, long) {
    /*
        23f264:	e1a0c00d 	mov	ip, sp
        23f268:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        23f26c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f270:	e1a04000 	mov	r4, r0
        23f274:	e1a06001 	mov	r6, r1
        23f278:	e1a05002 	mov	r5, r2
        23f27c:	eb65289e 	bl	1b894fc <TXContainer::$AppendNewValue(unsigned long, long)>
        23f280:	e3a08000 	mov	r8, #0	; 0x0
        23f284:	e3a09000 	mov	r9, #0	; 0x0
        23f288:	e52d906c 	str	r9, [sp, -#108]!
        23f28c:	e28d0008 	add	r0, sp, #8	; 0x8
        23f290:	eb65cdb7 	bl	1bb2974 <$setjmp>
        23f294:	e3300000 	teq	r0, #0	; 0x0
        23f298:	e1a0000d 	mov	r0, sp
        23f29c:	1a000060 	bne	23f424 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x1c0>
        23f2a0:	eb668375 	bl	1be007c <$AddExceptionHandler>
        23f2a4:	e284400c 	add	r4, r4, #12	; 0xc
        23f2a8:	e59fc0d8 	ldr	ip, [pc, #d8]	; 23f388 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x124>
        23f2ac:	e136000c 	teq	r6, ip
        23f2b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        23f2b4:	1a000046 	bne	23f3d4 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x170>
        23f2b8:	e2850001 	add	r0, r5, #1	; 0x1
        23f2bc:	e1a07080 	mov	r7, r0, lsl #1
        23f2c0:	e3a00002 	mov	r0, #2	; 0x2
        23f2c4:	eb660ba0 	bl	1bc214c <$AllocateRefHandle(long)>
        23f2c8:	e58d0000 	str	r0, [sp]
        23f2cc:	e1a00005 	mov	r0, r5
        23f2d0:	e59f50b4 	ldr	r5, [pc, #b4]	; 23f38c <TXNewtContainer::AppendNewValue(unsigned long, long)+0x128>
        23f2d4:	e3500b02 	cmp	r0, #2048	; 0x800
        23f2d8:	3a000031 	bcc	23f3a4 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x140>
        23f2dc:	e3a00033 	mov	r0, #51	; 0x33
        23f2e0:	eb6213c7 	bl	1ac4204 <$BusyBoxSend(long)>
        23f2e4:	e24dd010 	sub	sp, sp, #16	; 0x10
        23f2e8:	eb6613df 	bl	1bc426c <$GetStores(void)>
        23f2ec:	eb660b96 	bl	1bc214c <$AllocateRefHandle(long)>
        23f2f0:	e1a06000 	mov	r6, r0
        23f2f4:	e5900000 	ldr	r0, [r0]
        23f2f8:	e1a01009 	mov	r1, r9
        23f2fc:	eb6613d4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        23f300:	eb660b91 	bl	1bc214c <$AllocateRefHandle(long)>
        23f304:	e58d000c 	str	r0, [sp, #12]	; fField12
        23f308:	e1a00006 	mov	r0, r6
        23f30c:	eb660faa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f310:	e28f0f1e 	add	r0, pc, #120	; 0x78
        23f314:	eb6617ed 	bl	1bc52d0 <$MakeString(char const *)>
        23f318:	eb660b8b 	bl	1bc214c <$AllocateRefHandle(long)>
        23f31c:	e58d0008 	str	r0, [sp, #8]	; fField8
        23f320:	e3a00002 	mov	r0, #2	; 0x2
        23f324:	eb660b88 	bl	1bc214c <$AllocateRefHandle(long)>
        23f328:	e58d0000 	str	r0, [sp]
        23f32c:	e1a0300d 	mov	r3, sp
        23f330:	e92d0008 	stmdb	sp!, {r3}
        23f334:	e1a00107 	mov	r0, r7, lsl #2
        23f338:	eb660b83 	bl	1bc214c <$AllocateRefHandle(long)>
        23f33c:	e58d0008 	str	r0, [sp, #8]	; fField8
        23f340:	e28d2008 	add	r2, sp, #8	; 0x8
        23f344:	e28d300c 	add	r3, sp, #12	; 0xc
        23f348:	e1a01005 	mov	r1, r5
        23f34c:	e28d0010 	add	r0, sp, #16	; 0x10
        23f350:	eb6017d7 	bl	1a452b4 <$FLBAllocCompressed>
        23f354:	e28dd004 	add	sp, sp, #4	; 0x4
        23f358:	e59d1010 	ldr	r1, [sp, #16]
        23f35c:	e5810000 	str	r0, [r1]
        23f360:	e59d0000 	ldr	r0, [sp]
        23f364:	eb660f94 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f368:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        23f36c:	eb660f92 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f370:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        23f374:	eb660f90 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f378:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        23f37c:	eb660f8e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f380:	e28dd010 	add	sp, sp, #16	; 0x10
        23f384:	ea00000b 	b	23f3b8 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x154>
        23f388:	54455854 	strplb	r5, [r5], -#2132	; fField2132
        23f38c:	006848d0 	ldreqd	r4, [r8], -#128
        23f390:	544c5a53 	strplb	r5, [ip], -#2643
        23f394:	746f7265 	strvcbt	r7, [pc], #265	; 23f39c <TXNewtContainer::AppendNewValue(unsigned long, long)+0x138>
        23f398:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        23f39c:	616e6465 	cmnvs	lr, r5, ror #8
        23f3a0:	72000000 	andvc	r0, r0, #0	; 0x0
        23f3a4:	e1a01007 	mov	r1, r7
        23f3a8:	e1a00005 	mov	r0, r5
        23f3ac:	eb660b62 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        23f3b0:	e59d1000 	ldr	r1, [sp]
        23f3b4:	e5810000 	str	r0, [r1]
        23f3b8:	e1a00004 	mov	r0, r4
        23f3bc:	e1a0200d 	mov	r2, sp
        23f3c0:	e59f1008 	ldr	r1, [pc, #8]	; 23f3d0 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x16c>	; fField8
        23f3c4:	eb661be7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        23f3c8:	e59d0000 	ldr	r0, [sp]
        23f3cc:	ea00000d 	b	23f408 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x1a4>
        23f3d0:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        23f3d4:	e1a01085 	mov	r1, r5, lsl #1
        23f3d8:	e59f0034 	ldr	r0, [pc, #34]	; 23f414 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x1b0>
        23f3dc:	eb660b55 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        23f3e0:	eb660b59 	bl	1bc214c <$AllocateRefHandle(long)>
        23f3e4:	e58d0000 	str	r0, [sp]
        23f3e8:	e59fc028 	ldr	ip, [pc, #28]	; 23f418 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x1b4>
        23f3ec:	e136000c 	teq	r6, ip
        23f3f0:	e1a00004 	mov	r0, r4
        23f3f4:	e1a0200d 	mov	r2, sp
        23f3f8:	159f101c 	ldrne	r1, [pc, #1c]	; 23f41c <TXNewtContainer::AppendNewValue(unsigned long, long)+0x1b8>
        23f3fc:	059f101c 	ldreq	r1, [pc, #1c]	; 23f420 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x1bc>
        23f400:	eb661bd8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        23f404:	e59d0000 	ldr	r0, [sp]
        23f408:	eb660f6b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f40c:	e28dd004 	add	sp, sp, #4	; 0x4
        23f410:	ea000006 	b	23f430 <TXNewtContainer::AppendNewValue(unsigned long, long)+0x1cc>
        23f414:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        23f418:	7478726e 	ldrvcbt	r7, [r8], -#622
        23f41c:	006843f8 	streqd	r4, [r8], -#56
        23f420:	00684930 	rsbeq	r4, r8, r0, lsr r9
        23f424:	e2800060 	add	r0, r0, #96	; 0x60
        23f428:	eb629393 	bl	1ae427c <$GetExceptionErr(Exception *)>
        23f42c:	e1a08000 	mov	r8, r0
        23f430:	e1a0000d 	mov	r0, sp
        23f434:	eb66871f 	bl	1be10b8 <$ExitHandler>
        23f438:	e1a00008 	mov	r0, r8
        23f43c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtContainer::WriteObject(long, TXAttrObject *, long, unsigned char *)
 * Address: 0023f440
 */
TXNewtContainer::WriteObject(long, TXAttrObject *, long, unsigned char *) {
    /*
        23f440:	e1a0c00d 	mov	ip, sp
        23f444:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23f448:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f44c:	e1a05000 	mov	r5, r0
        23f450:	e1a04001 	mov	r4, r1
        23f454:	e1a07002 	mov	r7, r2
        23f458:	e1a06003 	mov	r6, r3
        23f45c:	e3a0a001 	mov	sl, #1	; 0x1
        23f460:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23f464:	e5c0a000 	strb	sl, [r0]
        23f468:	e3a09000 	mov	r9, #0	; 0x0
        23f46c:	e3a00000 	mov	r0, #0	; 0x0
        23f470:	e52d006c 	str	r0, [sp, -#108]!
        23f474:	e28d0008 	add	r0, sp, #8	; 0x8
        23f478:	eb65cd3d 	bl	1bb2974 <$setjmp>
        23f47c:	e3300000 	teq	r0, #0	; 0x0
        23f480:	e1a0000d 	mov	r0, sp
        23f484:	1a00002d 	bne	23f540 <TXNewtContainer::WriteObject(long, TXAttrObject *, long, unsigned char *)+0x100>
        23f488:	eb6682fb 	bl	1be007c <$AddExceptionHandler>
        23f48c:	e3a00002 	mov	r0, #2	; 0x2
        23f490:	eb660b2d 	bl	1bc214c <$AllocateRefHandle(long)>
        23f494:	e1a08000 	mov	r8, r0
        23f498:	e5950008 	ldr	r0, [r5, #8]	; fField8
        23f49c:	e285100c 	add	r1, r5, #12	; 0xc
        23f4a0:	e59fc08c 	ldr	ip, [pc, #8c]	; 23f534 <TXNewtContainer::WriteObject(long, TXAttrObject *, long, unsigned char *)+0xf4>	; fField8
        23f4a4:	e130000c 	teq	r0, ip
        23f4a8:	e1a00001 	mov	r0, r1
        23f4ac:	159f1084 	ldrne	r1, [pc, #84]	; 23f538 <TXNewtContainer::WriteObject(long, TXAttrObject *, long, unsigned char *)+0xf8>
        23f4b0:	059f1084 	ldreq	r1, [pc, #84]	; 23f53c <TXNewtContainer::WriteObject(long, TXAttrObject *, long, unsigned char *)+0xfc>
        23f4b4:	e5911000 	ldr	r1, [r1]
        23f4b8:	e5911000 	ldr	r1, [r1]
        23f4bc:	e5900000 	ldr	r0, [r0]
        23f4c0:	e5900000 	ldr	r0, [r0]
        23f4c4:	eb661365 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23f4c8:	e1a05084 	mov	r5, r4, lsl #1
        23f4cc:	e5880000 	str	r0, [r8]
        23f4d0:	e1a00106 	mov	r0, r6, lsl #2
        23f4d4:	eb660b1c 	bl	1bc214c <$AllocateRefHandle(long)>
        23f4d8:	e1a06000 	mov	r6, r0
        23f4dc:	e5902000 	ldr	r2, [r0]
        23f4e0:	e1a01005 	mov	r1, r5
        23f4e4:	e5980000 	ldr	r0, [r8]
        23f4e8:	eb661b9a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        23f4ec:	e1a00006 	mov	r0, r6
        23f4f0:	eb660f31 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f4f4:	e08a4084 	add	r4, sl, r4, lsl #1
        23f4f8:	e1a00007 	mov	r0, r7
        23f4fc:	e5971000 	ldr	r1, [r7]
        23f500:	e1a0e00f 	mov	lr, pc
        23f504:	e281f034 	add	pc, r1, #52	; 0x34
        23f508:	eb660b0f 	bl	1bc214c <$AllocateRefHandle(long)>
        23f50c:	e1a05000 	mov	r5, r0
        23f510:	e5902000 	ldr	r2, [r0]
        23f514:	e1a01004 	mov	r1, r4
        23f518:	e5980000 	ldr	r0, [r8]
        23f51c:	eb661b8d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        23f520:	e1a00005 	mov	r0, r5
        23f524:	eb660f24 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f528:	e1a00008 	mov	r0, r8
        23f52c:	eb660f22 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f530:	ea000005 	b	23f54c <TXNewtContainer::WriteObject(long, TXAttrObject *, long, unsigned char *)+0x10c>
        23f534:	7478726e 	ldrvcbt	r7, [r8], -#622
        23f538:	006843f8 	streqd	r4, [r8], -#56
        23f53c:	00684930 	rsbeq	r4, r8, r0, lsr r9
        23f540:	e2800060 	add	r0, r0, #96	; 0x60
        23f544:	eb62934c 	bl	1ae427c <$GetExceptionErr(Exception *)>
        23f548:	e1a09000 	mov	r9, r0
        23f54c:	e1a0000d 	mov	r0, sp
        23f550:	eb6686d8 	bl	1be10b8 <$ExitHandler>
        23f554:	e1a00009 	mov	r0, r9
        23f558:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtContainer::WriteText(TXTextDescriptor *)
 * Address: 0023f55c
 */
TXNewtContainer::WriteText(TXTextDescriptor *) {
    /*
        23f55c:	e1a0c00d 	mov	ip, sp
        23f560:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23f564:	e24cb004 	sub	fp, ip, #4	; 0x4
        23f568:	e1a05000 	mov	r5, r0
        23f56c:	e1a04001 	mov	r4, r1
        23f570:	e24dd004 	sub	sp, sp, #4	; 0x4
        23f574:	e3a00000 	mov	r0, #0	; 0x0
        23f578:	e5916008 	ldr	r6, [r1, #8]	; fField8
        23f57c:	e3a07000 	mov	r7, #0	; 0x0
        23f580:	e40d006c 	str	r0, [sp], -#108
        23f584:	e58d7000 	str	r7, [sp]
        23f588:	e28d0008 	add	r0, sp, #8	; 0x8
        23f58c:	eb65ccf8 	bl	1bb2974 <$setjmp>
        23f590:	e3300000 	teq	r0, #0	; 0x0
        23f594:	e1a0000d 	mov	r0, sp
        23f598:	1a000023 	bne	23f62c <TXNewtContainer::WriteText(TXTextDescriptor *)+0xd0>
        23f59c:	eb6682b6 	bl	1be007c <$AddExceptionHandler>
        23f5a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        23f5a4:	e59f107c 	ldr	r1, [pc, #7c]	; 23f628 <TXNewtContainer::WriteText(TXTextDescriptor *)+0xcc>
        23f5a8:	e5911000 	ldr	r1, [r1]
        23f5ac:	e5911000 	ldr	r1, [r1]
        23f5b0:	e595000c 	ldr	r0, [r5, #12]	; fField12
        23f5b4:	e5900000 	ldr	r0, [r0]
        23f5b8:	eb661328 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23f5bc:	eb660ae2 	bl	1bc214c <$AllocateRefHandle(long)>
        23f5c0:	e40d0018 	str	r0, [sp], -#24
        23f5c4:	e28d1018 	add	r1, sp, #24	; 0x18
        23f5c8:	e28d0014 	add	r0, sp, #20	; 0x14
        23f5cc:	eb6606c1 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        23f5d0:	e28d0014 	add	r0, sp, #20	; 0x14
        23f5d4:	eb660ace 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        23f5d8:	e1a05000 	mov	r5, r0
        23f5dc:	e1a02006 	mov	r2, r6
        23f5e0:	e1a01000 	mov	r1, r0
        23f5e4:	e1a0000d 	mov	r0, sp
        23f5e8:	eb652386 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        23f5ec:	e1a02006 	mov	r2, r6
        23f5f0:	e1a0100d 	mov	r1, sp
        23f5f4:	e1a00004 	mov	r0, r4
        23f5f8:	eb652384 	bl	1b88410 <TXTextDescriptor::$CopyTo(TXTextDescriptor *, long)>
        23f5fc:	e58d0088 	str	r0, [sp, #136]
        23f600:	e0850086 	add	r0, r5, r6, lsl #1
        23f604:	e5c07001 	strb	r7, [r0, #1]
        23f608:	e5c07000 	strb	r7, [r0]
        23f60c:	e28d0014 	add	r0, sp, #20	; 0x14
        23f610:	e3a01000 	mov	r1, #0	; 0x0
        23f614:	eb660ab9 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        23f618:	e5bd0018 	ldr	r0, [sp, #24]!
        23f61c:	eb660ee6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23f620:	e28dd004 	add	sp, sp, #4	; 0x4
        23f624:	ea000003 	b	23f638 <TXNewtContainer::WriteText(TXTextDescriptor *)+0xdc>
        23f628:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        23f62c:	e2800060 	add	r0, r0, #96	; 0x60
        23f630:	eb629311 	bl	1ae427c <$GetExceptionErr(Exception *)>
        23f634:	e58d006c 	str	r0, [sp, #108]
        23f638:	e1a0000d 	mov	r0, sp
        23f63c:	eb66869d 	bl	1be10b8 <$ExitHandler>
        23f640:	e5bd006c 	ldr	r0, [sp, #108]!
        23f644:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

