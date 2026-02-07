#include "include/TReservedBlockAccessor.h"

/**
 * Symbol: TReservedBlockAccessor::GetBufferForCopy(void)
 * Address: 001a72a8
 */
TReservedBlockAccessor::GetBufferForCopy(void) {
    /*
        1a72a8:	e1a0c00d 	mov	ip, sp
        1a72ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a72b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a72b4:	e1a04000 	mov	r4, r0
        1a72b8:	e5900220 	ldr	r0, [r0, #544]	; fField544
        1a72bc:	e3300000 	teq	r0, #0	; 0x0
        1a72c0:	1a000009 	bne	1a72ec <TReservedBlockAccessor::GetBufferForCopy(void)+0x44>
        1a72c4:	e5940000 	ldr	r0, [r4]
        1a72c8:	e5900010 	ldr	r0, [r0, #16]
        1a72cc:	e3a01c01 	mov	r1, #256	; 0x100
        1a72d0:	e1a0e00f 	mov	lr, pc
        1a72d4:	e590f000 	ldr	pc, [r0]
        1a72d8:	e5840220 	str	r0, [r4, #544]	; fField544
        1a72dc:	e3300000 	teq	r0, #0	; 0x0
        1a72e0:	03a000e9 	moveq	r0, #233	; 0xe9
        1a72e4:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1a72e8:	0b656775 	bleq	1b010c4 <$PowerOffAndReboot(long)>
        1a72ec:	e5b40220 	ldr	r0, [r4, #544]!	; fField544
        1a72f0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::GetBufferForCopy2(void)
 * Address: 001a72f4
 */
TReservedBlockAccessor::GetBufferForCopy2(void) {
    /*
        1a72f4:	e1a0c00d 	mov	ip, sp
        1a72f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a72fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7300:	e1a04000 	mov	r4, r0
        1a7304:	e5900224 	ldr	r0, [r0, #548]	; fField548
        1a7308:	e3300000 	teq	r0, #0	; 0x0
        1a730c:	1a000009 	bne	1a7338 <TReservedBlockAccessor::GetBufferForCopy2(void)+0x44>
        1a7310:	e5940000 	ldr	r0, [r4]
        1a7314:	e5900010 	ldr	r0, [r0, #16]
        1a7318:	e3a01c01 	mov	r1, #256	; 0x100
        1a731c:	e1a0e00f 	mov	lr, pc
        1a7320:	e590f000 	ldr	pc, [r0]
        1a7324:	e5840224 	str	r0, [r4, #548]	; fField548
        1a7328:	e3300000 	teq	r0, #0	; 0x0
        1a732c:	03a000e9 	moveq	r0, #233	; 0xe9
        1a7330:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1a7334:	0b656762 	bleq	1b010c4 <$PowerOffAndReboot(long)>
        1a7338:	e5b40224 	ldr	r0, [r4, #548]!	; fField548
        1a733c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::CopyFlash(unsigned long, unsigned long, unsigned long)
 * Address: 001a7340
 */
TReservedBlockAccessor::CopyFlash(unsigned long, unsigned long, unsigned long) {
    /*
        1a7340:	e1a0c00d 	mov	ip, sp
        1a7344:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a7348:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a734c:	e1a07000 	mov	r7, r0
        1a7350:	e1a06001 	mov	r6, r1
        1a7354:	e1a05002 	mov	r5, r2
        1a7358:	e1a04003 	mov	r4, r3
        1a735c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a7360:	e1a0a001 	mov	sl, r1
        1a7364:	e58d2004 	str	r2, [sp, #4]	; fField4
        1a7368:	e58d3000 	str	r3, [sp]
        1a736c:	eb630010 	bl	1a673b4 <TReservedBlockAccessor::$GetBufferForCopy(void)>
        1a7370:	e1a09000 	mov	r9, r0
        1a7374:	e3540000 	cmp	r4, #0	; 0x0
        1a7378:	9a000015 	bls	1a73d4 <TReservedBlockAccessor::CopyFlash(unsigned long, unsigned long, unsigned long)+0x94>
        1a737c:	e3540c01 	cmp	r4, #256	; 0x100
        1a7380:	91a08004 	movls	r8, r4
        1a7384:	83a08c01 	movhi	r8, #256	; 0x100
        1a7388:	e1a03009 	mov	r3, r9
        1a738c:	e1a02008 	mov	r2, r8
        1a7390:	e1a01006 	mov	r1, r6
        1a7394:	e5970004 	ldr	r0, [r7, #4]	; fField4
        1a7398:	eb62fbde 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a739c:	e3300000 	teq	r0, #0	; 0x0
        1a73a0:	1b656747 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a73a4:	e1a03009 	mov	r3, r9
        1a73a8:	e1a02008 	mov	r2, r8
        1a73ac:	e1a01005 	mov	r1, r5
        1a73b0:	e5970004 	ldr	r0, [r7, #4]	; fField4
        1a73b4:	eb62fbe0 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a73b8:	e3300000 	teq	r0, #0	; 0x0
        1a73bc:	1b656740 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a73c0:	e0866008 	add	r6, r6, r8
        1a73c4:	e0855008 	add	r5, r5, r8
        1a73c8:	e0444008 	sub	r4, r4, r8
        1a73cc:	e3540000 	cmp	r4, #0	; 0x0
        1a73d0:	8affffe9 	bhi	1a737c <TReservedBlockAccessor::CopyFlash(unsigned long, unsigned long, unsigned long)+0x3c>
        1a73d4:	e1a0100a 	mov	r1, sl
        1a73d8:	e1a00007 	mov	r0, r7
        1a73dc:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        1a73e0:	e59d3000 	ldr	r3, [sp]
        1a73e4:	eb62ffef 	bl	1a673a8 <TReservedBlockAccessor::$CompareFlashRebootIfDifferent(unsigned long, unsigned long, long)>
        1a73e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::__ct(TNewInternalFlash *)
 * Address: 001a73ec
 */
TReservedBlockAccessor::TReservedBlockAccessor(TNewInternalFlash *) {
    /*
        1a73ec:	e1a0c00d 	mov	ip, sp
        1a73f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a73f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a73f8:	e1a04001 	mov	r4, r1
        1a73fc:	e3300000 	teq	r0, #0	; 0x0
        1a7400:	1a000003 	bne	1a7414 <TReservedBlockAccessor::__ct(TNewInternalFlash *)+0x28>
        1a7404:	e3a00f8b 	mov	r0, #556	; 0x22c
        1a7408:	eb689cca 	bl	1bce738 <$__nw(unsigned int)>
        1a740c:	e3300000 	teq	r0, #0	; 0x0
        1a7410:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1a7414:	e3a01000 	mov	r1, #0	; 0x0
        1a7418:	e5801004 	str	r1, [r0, #4]	; fField4
        1a741c:	e5804000 	str	r4, [r0]
        1a7420:	e5801220 	str	r1, [r0, #544]	; fField544
        1a7424:	e5801224 	str	r1, [r0, #548]	; fField548
        1a7428:	e5801228 	str	r1, [r0, #552]	; fField552
        1a742c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::CleanUp(void)
 * Address: 001a7430
 */
TReservedBlockAccessor::CleanUp(void) {
    /*
        1a7430:	e1a0c00d 	mov	ip, sp
        1a7434:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a7438:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a743c:	e1a04000 	mov	r4, r0
        1a7440:	e2800f8a 	add	r0, r0, #552	; 0x228
        1a7444:	e3a01000 	mov	r1, #0	; 0x0
        1a7448:	ebfe4ed6 	bl	13afa8 <TULockingSemaphoreGrabber::DoAquire(TULockingSemaphore *)>
        1a744c:	e5940000 	ldr	r0, [r4]
        1a7450:	e3300000 	teq	r0, #0	; 0x0
        1a7454:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1a7458:	e5b05010 	ldr	r5, [r0, #16]!
        1a745c:	e3a06000 	mov	r6, #0	; 0x0
        1a7460:	e5941220 	ldr	r1, [r4, #544]	; fField544
        1a7464:	e3310000 	teq	r1, #0	; 0x0
        1a7468:	0a000004 	beq	1a7480 <TReservedBlockAccessor::CleanUp(void)+0x50>
        1a746c:	e1a00005 	mov	r0, r5
        1a7470:	e5952000 	ldr	r2, [r5]
        1a7474:	e1a0e00f 	mov	lr, pc
        1a7478:	e282f004 	add	pc, r2, #4	; 0x4
        1a747c:	e5846220 	str	r6, [r4, #544]	; fField544
        1a7480:	e5941224 	ldr	r1, [r4, #548]	; fField548
        1a7484:	e3310000 	teq	r1, #0	; 0x0
        1a7488:	0a000004 	beq	1a74a0 <TReservedBlockAccessor::CleanUp(void)+0x70>
        1a748c:	e1a00005 	mov	r0, r5
        1a7490:	e5952000 	ldr	r2, [r5]
        1a7494:	e1a0e00f 	mov	lr, pc
        1a7498:	e282f004 	add	pc, r2, #4	; 0x4
        1a749c:	e5846224 	str	r6, [r4, #548]	; fField548
        1a74a0:	e5942004 	ldr	r2, [r4, #4]	; fField4
        1a74a4:	e3320000 	teq	r2, #0	; 0x0
        1a74a8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1a74ac:	e1a01005 	mov	r1, r5
        1a74b0:	e1a00002 	mov	r0, r2
        1a74b4:	e1a0e00f 	mov	lr, pc
        1a74b8:	e592f000 	ldr	pc, [r2]
        1a74bc:	e3a01000 	mov	r1, #0	; 0x0
        1a74c0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a74c4:	e5902000 	ldr	r2, [r0]
        1a74c8:	e1a0e00f 	mov	lr, pc
        1a74cc:	e282f004 	add	pc, r2, #4	; 0x4
        1a74d0:	e1a00005 	mov	r0, r5
        1a74d4:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1a74d8:	e5952000 	ldr	r2, [r5]
        1a74dc:	e1a0e00f 	mov	lr, pc
        1a74e0:	e282f004 	add	pc, r2, #4	; 0x4
        1a74e4:	e5a46004 	str	r6, [r4, #4]!	; fField4
        1a74e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::PatchSize( const(void))
 * Address: 001a74ec
 */
TReservedBlockAccessor::PatchSize( const(void)) {
    /*
        1a74ec:	e1a0c00d 	mov	ip, sp
        1a74f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a74f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a74f8:	e2801f45 	add	r1, r0, #276	; 0x114
        1a74fc:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        1a7500:	e1a03001 	mov	r3, r1
        1a7504:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1a7508:	e3a02f43 	mov	r2, #268	; 0x10c
        1a750c:	e3a01000 	mov	r1, #0	; 0x0
        1a7510:	eb62fb80 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a7514:	e3a04000 	mov	r4, #0	; 0x0
        1a7518:	e3300000 	teq	r0, #0	; 0x0
        1a751c:	0a000003 	beq	1a7530 <TReservedBlockAccessor::PatchSize( const(void))+0x44>
        1a7520:	e1a0000d 	mov	r0, sp
        1a7524:	eb078d48 	bl	38aa4c <C$$dtorvec$$Limit+0xd8>
        1a7528:	e1a00004 	mov	r0, r4
        1a752c:	ea000004 	b	1a7544 <TReservedBlockAccessor::PatchSize( const(void))+0x58>
        1a7530:	e59d0000 	ldr	r0, [sp]
        1a7534:	e5b0405c 	ldr	r4, [r0, #92]!	; fField92
        1a7538:	e1a0000d 	mov	r0, sp
        1a753c:	eb078d42 	bl	38aa4c <C$$dtorvec$$Limit+0xd8>
        1a7540:	e1a00004 	mov	r0, r4
        1a7544:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::ReadCalibration(OSCalibrationParameters &)
 * Address: 001a7548
 */
TReservedBlockAccessor::ReadCalibration(OSCalibrationParameters &) {
    /*
        1a7548:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1a754c:	e1a03001 	mov	r3, r1
        1a7550:	e3a02f43 	mov	r2, #268	; 0x10c
        1a7554:	e3a01000 	mov	r1, #0	; 0x0
        1a7558:	ea62fb6e 	b	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
    */
}

/**
 * Symbol: TReservedBlockAccessor::ValidateCalibrationFields(OSCalibrationParameters const &)
 * Address: 001a755c
 */
TReservedBlockAccessor::ValidateCalibrationFields(OSCalibrationParameters const &) {
    /*
        1a755c:	e1a0c00d 	mov	ip, sp
        1a7560:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a7564:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7568:	e1a04001 	mov	r4, r1
        1a756c:	e5911000 	ldr	r1, [r1]
        1a7570:	e59f0068 	ldr	r0, [pc, #68]	; 1a75e0 <TReservedBlockAccessor::ValidateCalibrationFields(OSCalibrationParameters const &)+0x84>
        1a7574:	e3e05043 	mvn	r5, #67	; 0x43
        1a7578:	e2455c29 	sub	r5, r5, #10496	; 0x2900
        1a757c:	e1310000 	teq	r1, r0
        1a7580:	05941050 	ldreq	r1, [r4, #80]
        1a7584:	01310000 	teqeq	r1, r0
        1a7588:	05940004 	ldreq	r0, [r4, #4]	; fField4
        1a758c:	059fc050 	ldreq	ip, [pc, #50]	; 1a75e4 <TReservedBlockAccessor::ValidateCalibrationFields(OSCalibrationParameters const &)+0x88>
        1a7590:	0130000c 	teqeq	r0, ip
        1a7594:	05940008 	ldreq	r0, [r4, #8]
        1a7598:	03300f43 	teqeq	r0, #268	; 0x10c
        1a759c:	1a00000d 	bne	1a75d8 <TReservedBlockAccessor::ValidateCalibrationFields(OSCalibrationParameters const &)+0x7c>
        1a75a0:	e1a00004 	mov	r0, r4
        1a75a4:	e3a01054 	mov	r1, #84	; 0x54
        1a75a8:	eb62ff7a 	bl	1a67398 <$Checksum__22TReservedBlockAccessorSFPCvl>
        1a75ac:	e5941054 	ldr	r1, [r4, #84]
        1a75b0:	e1300001 	teq	r0, r1
        1a75b4:	1a000007 	bne	1a75d8 <TReservedBlockAccessor::ValidateCalibrationFields(OSCalibrationParameters const &)+0x7c>
        1a75b8:	e5b40058 	ldr	r0, [r4, #88]!
        1a75bc:	e3700001 	cmn	r0, #1	; 0x1
        1a75c0:	13700002 	cmnne	r0, #2	; 0x2
        1a75c4:	13700004 	cmnne	r0, #4	; 0x4
        1a75c8:	13700008 	cmnne	r0, #8	; 0x8
        1a75cc:	13700010 	cmnne	r0, #16	; 0x10
        1a75d0:	03a00000 	moveq	r0, #0	; 0x0
        1a75d4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1a75d8:	e1a00005 	mov	r0, r5
        1a75dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1a75e0:	444c4453 	strmib	r4, [ip], -#1107
        1a75e4:	4f534344 	swimi	0x00534344
    */
}

/**
 * Symbol: TReservedBlockAccessor::ValidateCalibrationInformation(OSCalibrationParameters const &)
 * Address: 001a75e8
 */
TReservedBlockAccessor::ValidateCalibrationInformation(OSCalibrationParameters const &) {
    /*
        1a75e8:	e1a0c00d 	mov	ip, sp
        1a75ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a75f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a75f4:	e1a05000 	mov	r5, r0
        1a75f8:	e1a04001 	mov	r4, r1
        1a75fc:	eb62ff78 	bl	1a673e4 <TReservedBlockAccessor::$ValidateCalibrationFields(OSCalibrationParameters const &)>
        1a7600:	e3300000 	teq	r0, #0	; 0x0
        1a7604:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1a7608:	e3e00043 	mvn	r0, #67	; 0x43
        1a760c:	e2400c29 	sub	r0, r0, #10496	; 0x2900
        1a7610:	e5941060 	ldr	r1, [r4, #96]
        1a7614:	e3310000 	teq	r1, #0	; 0x0
        1a7618:	1a000003 	bne	1a762c <TReservedBlockAccessor::ValidateCalibrationInformation(OSCalibrationParameters const &)+0x44>
        1a761c:	e5b4105c 	ldr	r1, [r4, #92]!	; fField92
        1a7620:	e3310000 	teq	r1, #0	; 0x0
        1a7624:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1a7628:	ea000005 	b	1a7644 <TReservedBlockAccessor::ValidateCalibrationInformation(OSCalibrationParameters const &)+0x5c>
        1a762c:	e5b51004 	ldr	r1, [r5, #4]!	; fField4
        1a7630:	e591103c 	ldr	r1, [r1, #60]	; fField60
        1a7634:	e2411f43 	sub	r1, r1, #268	; 0x10c
        1a7638:	e5b4205c 	ldr	r2, [r4, #92]!	; fField92
        1a763c:	e1510002 	cmp	r1, r2
        1a7640:	391ba830 	ldmccdb	fp, {r4, r5, fp, sp, pc}
        1a7644:	e3a00000 	mov	r0, #0	; 0x0
        1a7648:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::UpdateBlock0FromBlock1(unsigned char &)
 * Address: 001a764c
 */
TReservedBlockAccessor::UpdateBlock0FromBlock1(unsigned char &) {
    /*
        1a764c:	e1a0c00d 	mov	ip, sp
        1a7650:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1a7654:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7658:	e1a04000 	mov	r4, r0
        1a765c:	e1a05001 	mov	r5, r1
        1a7660:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a7664:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1a7668:	e5b0703c 	ldr	r7, [r0, #60]!	; fField60
        1a766c:	e2840f45 	add	r0, r4, #276	; 0x114
        1a7670:	e58d0000 	str	r0, [sp]
        1a7674:	e1a03000 	mov	r3, r0
        1a7678:	e1a01007 	mov	r1, r7
        1a767c:	e3a02f43 	mov	r2, #268	; 0x10c
        1a7680:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a7684:	eb62fb23 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a7688:	e1a00004 	mov	r0, r4
        1a768c:	e59d1000 	ldr	r1, [sp]
        1a7690:	eb62ff54 	bl	1a673e8 <TReservedBlockAccessor::$ValidateCalibrationInformation(OSCalibrationParameters const &)>
        1a7694:	e1b08000 	movs	r8, r0
        1a7698:	e3a06000 	mov	r6, #0	; 0x0
        1a769c:	0a00002e 	beq	1a775c <TReservedBlockAccessor::UpdateBlock0FromBlock1(unsigned char &)+0x110>
        1a76a0:	e59d3000 	ldr	r3, [sp]
        1a76a4:	e3a02f43 	mov	r2, #268	; 0x10c
        1a76a8:	e3a01000 	mov	r1, #0	; 0x0
        1a76ac:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a76b0:	eb62fb18 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a76b4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a76b8:	e1a01006 	mov	r1, r6
        1a76bc:	e590203c 	ldr	r2, [r0, #60]	; fField60
        1a76c0:	eb62fb1c 	bl	1a66338 <TFlashRange::$SyncErase(unsigned long, unsigned long)>
        1a76c4:	e59d3000 	ldr	r3, [sp]
        1a76c8:	e3a02f43 	mov	r2, #268	; 0x10c
        1a76cc:	e3a01f43 	mov	r1, #268	; 0x10c
        1a76d0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a76d4:	eb62fb18 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a76d8:	e59d3000 	ldr	r3, [sp]
        1a76dc:	e1a01007 	mov	r1, r7
        1a76e0:	e3a02f43 	mov	r2, #268	; 0x10c
        1a76e4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a76e8:	eb62fb0a 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a76ec:	e59d3000 	ldr	r3, [sp]
        1a76f0:	e3a02f43 	mov	r2, #268	; 0x10c
        1a76f4:	e3a01f86 	mov	r1, #536	; 0x218
        1a76f8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a76fc:	eb62fb0e 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7700:	e3380000 	teq	r8, #0	; 0x0
        1a7704:	1a000003 	bne	1a7718 <TReservedBlockAccessor::UpdateBlock0FromBlock1(unsigned char &)+0xcc>
        1a7708:	e59d0000 	ldr	r0, [sp]
        1a770c:	e5900058 	ldr	r0, [r0, #88]
        1a7710:	e3700010 	cmn	r0, #16	; 0x10
        1a7714:	0a000015 	beq	1a7770 <TReservedBlockAccessor::UpdateBlock0FromBlock1(unsigned char &)+0x124>
        1a7718:	e3a00001 	mov	r0, #1	; 0x1
        1a771c:	e5c50000 	strb	r0, [r5]
        1a7720:	e59f0030 	ldr	r0, [pc, #30]	; 1a7758 <TReservedBlockAccessor::UpdateBlock0FromBlock1(unsigned char &)+0x10c>
        1a7724:	e5840094 	str	r0, [r4, #148]	; fField148
        1a7728:	e2843008 	add	r3, r4, #8	; 0x8
        1a772c:	e1a05003 	mov	r5, r3
        1a7730:	e3a02f43 	mov	r2, #268	; 0x10c
        1a7734:	e3a01000 	mov	r1, #0	; 0x0
        1a7738:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a773c:	eb62fafe 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7740:	e1a02005 	mov	r2, r5
        1a7744:	e1a00004 	mov	r0, r4
        1a7748:	e3a03f43 	mov	r3, #268	; 0x10c
        1a774c:	e3a01000 	mov	r1, #0	; 0x0
        1a7750:	eb62ff13 	bl	1a673a4 <TReservedBlockAccessor::$CompareFlashAndMemRebootIfDifferent(unsigned long, void const *, long)>
        1a7754:	ea000035 	b	1a7830 <TReservedBlockAccessor::UpdateBlock0FromBlock1(unsigned char &)+0x1e4>
        1a7758:	686a6372 	stmvsda	sl!, {r1, r4, r5, r6, r8, r9, sp, lr}^
        1a775c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a7760:	e1a01006 	mov	r1, r6
        1a7764:	e590203c 	ldr	r2, [r0, #60]	; fField60
        1a7768:	eb62faf2 	bl	1a66338 <TFlashRange::$SyncErase(unsigned long, unsigned long)>
        1a776c:	eaffffe5 	b	1a7708 <TReservedBlockAccessor::UpdateBlock0FromBlock1(unsigned char &)+0xbc>
        1a7770:	e284006c 	add	r0, r4, #108	; 0x6c
        1a7774:	e1a08000 	mov	r8, r0
        1a7778:	e59d1000 	ldr	r1, [sp]
        1a777c:	e2811064 	add	r1, r1, #100	; 0x64
        1a7780:	eb62ff1b 	bl	1a673f4 <$__eq__FRC16TROMREXCheckSumsT1>
        1a7784:	e3300000 	teq	r0, #0	; 0x0
        1a7788:	13a00000 	movne	r0, #0	; 0x0
        1a778c:	03a00001 	moveq	r0, #1	; 0x1
        1a7790:	e20000ff 	and	r0, r0, #255	; 0xff
        1a7794:	e5c50000 	strb	r0, [r5]
        1a7798:	e59d1000 	ldr	r1, [sp]
        1a779c:	e281e064 	add	lr, r1, #100	; 0x64
        1a77a0:	e8b8100e 	ldmia	r8!, {r1, r2, r3, ip}
        1a77a4:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        1a77a8:	e8b8100e 	ldmia	r8!, {r1, r2, r3, ip}
        1a77ac:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        1a77b0:	e8981008 	ldmia	r8, {r3, ip}
        1a77b4:	e88e1008 	stmia	lr, {r3, ip}
        1a77b8:	e3300000 	teq	r0, #0	; 0x0
        1a77bc:	1a000005 	bne	1a77d8 <TReservedBlockAccessor::UpdateBlock0FromBlock1(unsigned char &)+0x18c>
        1a77c0:	e2473f43 	sub	r3, r7, #268	; 0x10c
        1a77c4:	e2871f43 	add	r1, r7, #268	; 0x10c
        1a77c8:	e1a00004 	mov	r0, r4
        1a77cc:	e3a02f43 	mov	r2, #268	; 0x10c
        1a77d0:	eb62fef5 	bl	1a673ac <TReservedBlockAccessor::$CopyFlash(unsigned long, unsigned long, unsigned long)>
        1a77d4:	ea000003 	b	1a77e8 <TReservedBlockAccessor::UpdateBlock0FromBlock1(unsigned char &)+0x19c>
        1a77d8:	e59d0000 	ldr	r0, [sp]
        1a77dc:	e5a0605c 	str	r6, [r0, #92]!	; fField92
        1a77e0:	e59d0000 	ldr	r0, [sp]
        1a77e4:	e5a06060 	str	r6, [r0, #96]!
        1a77e8:	e3e01000 	mvn	r1, #0	; 0x0
        1a77ec:	e59d0000 	ldr	r0, [sp]
        1a77f0:	e5a01058 	str	r1, [r0, #88]!
        1a77f4:	e59d3000 	ldr	r3, [sp]
        1a77f8:	e3a02f43 	mov	r2, #268	; 0x10c
        1a77fc:	e3a01000 	mov	r1, #0	; 0x0
        1a7800:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a7804:	eb62facc 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7808:	e1a00004 	mov	r0, r4
        1a780c:	e3a03f43 	mov	r3, #268	; 0x10c
        1a7810:	e3a01000 	mov	r1, #0	; 0x0
        1a7814:	e59d2000 	ldr	r2, [sp]
        1a7818:	eb62fee1 	bl	1a673a4 <TReservedBlockAccessor::$CompareFlashAndMemRebootIfDifferent(unsigned long, void const *, long)>
        1a781c:	e1a00004 	mov	r0, r4
        1a7820:	e58d6000 	str	r6, [sp]
        1a7824:	eb62fee6 	bl	1a673c4 <TReservedBlockAccessor::$MarkBlock0AsValidConfig(void)>
        1a7828:	e3300000 	teq	r0, #0	; 0x0
        1a782c:	1b656624 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a7830:	e1a0000d 	mov	r0, sp
        1a7834:	eb078c84 	bl	38aa4c <C$$dtorvec$$Limit+0xd8>
        1a7838:	e1a00006 	mov	r0, r6
        1a783c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::ReadPatch(void *, long, long, long &)
 * Address: 001a78b4
 */
TReservedBlockAccessor::ReadPatch(void *, long, long, long &) {
    /*
        1a78b4:	e1a0c00d 	mov	ip, sp
        1a78b8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1a78bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a78c0:	e1a06000 	mov	r6, r0
        1a78c4:	e1a07001 	mov	r7, r1
        1a78c8:	e1a04002 	mov	r4, r2
        1a78cc:	e1a05003 	mov	r5, r3
        1a78d0:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        1a78d4:	eb62febe 	bl	1a673d4 <TReservedBlockAccessor::$PatchSize( const(void))>
        1a78d8:	e1540000 	cmp	r4, r0
        1a78dc:	a3a000b6 	movge	r0, #182	; 0xb6
        1a78e0:	a2400b0a 	subge	r0, r0, #10240	; 0x2800
        1a78e4:	a91ba9f0 	ldmgedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1a78e8:	e0400004 	sub	r0, r0, r4
        1a78ec:	e1500005 	cmp	r0, r5
        1a78f0:	d1a05000 	movle	r5, r0
        1a78f4:	e2841f43 	add	r1, r4, #268	; 0x10c
        1a78f8:	e1a03007 	mov	r3, r7
        1a78fc:	e1a02005 	mov	r2, r5
        1a7900:	e5b60004 	ldr	r0, [r6, #4]!	; fField4
        1a7904:	eb62fa83 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a7908:	e3300000 	teq	r0, #0	; 0x0
        1a790c:	05885000 	streq	r5, [r8]
        1a7910:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::WritePatch(void const *, long, void *)
 * Address: 001a7914
 */
TReservedBlockAccessor::WritePatch(void const *, long, void *) {
    /*
        1a7914:	e1a0c00d 	mov	ip, sp
        1a7918:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1a791c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7920:	e1a04000 	mov	r4, r0
        1a7924:	e1a06001 	mov	r6, r1
        1a7928:	e1a05002 	mov	r5, r2
        1a792c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1a7930:	e1a08003 	mov	r8, r3
        1a7934:	e590703c 	ldr	r7, [r0, #60]	; fField60
        1a7938:	e1a02007 	mov	r2, r7
        1a793c:	e1a01007 	mov	r1, r7
        1a7940:	eb62fa74 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a7944:	e1b09000 	movs	r9, r0
        1a7948:	1a000059 	bne	1a7ab4 <TReservedBlockAccessor::WritePatch(void const *, long, void *)+0x1a0>
        1a794c:	e1a01007 	mov	r1, r7
        1a7950:	e1a00008 	mov	r0, r8
        1a7954:	eb62fe8f 	bl	1a67398 <$Checksum__22TReservedBlockAccessorSFPCvl>
        1a7958:	e1a09000 	mov	r9, r0
        1a795c:	e1a00004 	mov	r0, r4
        1a7960:	eb62fe99 	bl	1a673cc <TReservedBlockAccessor::$MarkBlock1Invalid(void)>
        1a7964:	e3300000 	teq	r0, #0	; 0x0
        1a7968:	1b6565d5 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a796c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a7970:	e1a01007 	mov	r1, r7
        1a7974:	e590203c 	ldr	r2, [r0, #60]	; fField60
        1a7978:	eb62fa6e 	bl	1a66338 <TFlashRange::$SyncErase(unsigned long, unsigned long)>
        1a797c:	e1a03007 	mov	r3, r7
        1a7980:	e1a02007 	mov	r2, r7
        1a7984:	e1a00004 	mov	r0, r4
        1a7988:	e3a01000 	mov	r1, #0	; 0x0
        1a798c:	eb62fe86 	bl	1a673ac <TReservedBlockAccessor::$CopyFlash(unsigned long, unsigned long, unsigned long)>
        1a7990:	e1a00004 	mov	r0, r4
        1a7994:	eb62fe8b 	bl	1a673c8 <TReservedBlockAccessor::$MarkBlock1AsValidConfig(void)>
        1a7998:	e3300000 	teq	r0, #0	; 0x0
        1a799c:	1b6565c8 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a79a0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a79a4:	e3a01000 	mov	r1, #0	; 0x0
        1a79a8:	e590203c 	ldr	r2, [r0, #60]	; fField60
        1a79ac:	eb62fa61 	bl	1a66338 <TFlashRange::$SyncErase(unsigned long, unsigned long)>
        1a79b0:	e1a03006 	mov	r3, r6
        1a79b4:	e1a02005 	mov	r2, r5
        1a79b8:	e3a01f43 	mov	r1, #268	; 0x10c
        1a79bc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a79c0:	eb62fa5d 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a79c4:	e1a03005 	mov	r3, r5
        1a79c8:	e1a02006 	mov	r2, r6
        1a79cc:	e1a00004 	mov	r0, r4
        1a79d0:	e3a01f43 	mov	r1, #268	; 0x10c
        1a79d4:	eb62fe72 	bl	1a673a4 <TReservedBlockAccessor::$CompareFlashAndMemRebootIfDifferent(unsigned long, void const *, long)>
        1a79d8:	e24ddf43 	sub	sp, sp, #268	; 0x10c
        1a79dc:	e1a01005 	mov	r1, r5
        1a79e0:	e1a00006 	mov	r0, r6
        1a79e4:	eb62fe6b 	bl	1a67398 <$Checksum__22TReservedBlockAccessorSFPCvl>
        1a79e8:	e1a06000 	mov	r6, r0
        1a79ec:	e1a0300d 	mov	r3, sp
        1a79f0:	e1a01007 	mov	r1, r7
        1a79f4:	e3a02f43 	mov	r2, #268	; 0x10c
        1a79f8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a79fc:	eb62fa45 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a7a00:	e3e00000 	mvn	r0, #0	; 0x0
        1a7a04:	e58d0058 	str	r0, [sp, #88]
        1a7a08:	e58d505c 	str	r5, [sp, #92]	; fField92
        1a7a0c:	e58d6060 	str	r6, [sp, #96]
        1a7a10:	e1a0300d 	mov	r3, sp
        1a7a14:	e3a02f43 	mov	r2, #268	; 0x10c
        1a7a18:	e3a01000 	mov	r1, #0	; 0x0
        1a7a1c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a7a20:	eb62fa45 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7a24:	e1a0200d 	mov	r2, sp
        1a7a28:	e1a00004 	mov	r0, r4
        1a7a2c:	e3a03f43 	mov	r3, #268	; 0x10c
        1a7a30:	e3a01000 	mov	r1, #0	; 0x0
        1a7a34:	eb62fe5a 	bl	1a673a4 <TReservedBlockAccessor::$CompareFlashAndMemRebootIfDifferent(unsigned long, void const *, long)>
        1a7a38:	e1a00004 	mov	r0, r4
        1a7a3c:	eb62fe60 	bl	1a673c4 <TReservedBlockAccessor::$MarkBlock0AsValidConfig(void)>
        1a7a40:	e3300000 	teq	r0, #0	; 0x0
        1a7a44:	1b65659e 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a7a48:	e1a01007 	mov	r1, r7
        1a7a4c:	e1a00008 	mov	r0, r8
        1a7a50:	eb62fe50 	bl	1a67398 <$Checksum__22TReservedBlockAccessorSFPCvl>
        1a7a54:	e1300009 	teq	r0, r9
        1a7a58:	13e00043 	mvnne	r0, #67	; 0x43
        1a7a5c:	12400c29 	subne	r0, r0, #10496	; 0x2900
        1a7a60:	1b656597 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a7a64:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a7a68:	e1a01007 	mov	r1, r7
        1a7a6c:	e590203c 	ldr	r2, [r0, #60]	; fField60
        1a7a70:	eb62fa30 	bl	1a66338 <TFlashRange::$SyncErase(unsigned long, unsigned long)>
        1a7a74:	e1a03008 	mov	r3, r8
        1a7a78:	e1a02007 	mov	r2, r7
        1a7a7c:	e1a01007 	mov	r1, r7
        1a7a80:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a7a84:	eb62fa2c 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7a88:	e1a03007 	mov	r3, r7
        1a7a8c:	e1a02008 	mov	r2, r8
        1a7a90:	e1a01007 	mov	r1, r7
        1a7a94:	e1a00004 	mov	r0, r4
        1a7a98:	eb62fe41 	bl	1a673a4 <TReservedBlockAccessor::$CompareFlashAndMemRebootIfDifferent(unsigned long, void const *, long)>
        1a7a9c:	e1a00004 	mov	r0, r4
        1a7aa0:	eb62fe4a 	bl	1a673d0 <TReservedBlockAccessor::$MarkStoreAsValid(void)>
        1a7aa4:	e1b09000 	movs	r9, r0
        1a7aa8:	11a00009 	movne	r0, r9
        1a7aac:	1b656584 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a7ab0:	e28ddf43 	add	sp, sp, #268	; 0x10c
        1a7ab4:	e1a00009 	mov	r0, r9
        1a7ab8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: Checksum__22TReservedBlockAccessorSFPCvl
 * Address: 001a7abc
 */
void TReservedBlockAccessor::Checksum() {
    /*
        1a7abc:	e3a02000 	mov	r2, #0	; 0x0
        1a7ac0:	e1b03001 	movs	r3, r1
        1a7ac4:	42833003 	addmi	r3, r3, #3	; 0x3
        1a7ac8:	e1a03143 	mov	r3, r3, asr #2
        1a7acc:	e2431001 	sub	r1, r3, #1	; 0x1
        1a7ad0:	e3530000 	cmp	r3, #0	; 0x0
        1a7ad4:	da000005 	ble	1a7af0 <Checksum__22TReservedBlockAccessorSFPCvl+0x34>
        1a7ad8:	e4903004 	ldr	r3, [r0], #4	; fField4
        1a7adc:	e0832002 	add	r2, r3, r2
        1a7ae0:	e1a03001 	mov	r3, r1
        1a7ae4:	e2411001 	sub	r1, r1, #1	; 0x1
        1a7ae8:	e3530000 	cmp	r3, #0	; 0x0
        1a7aec:	cafffff9 	bgt	1a7ad8 <Checksum__22TReservedBlockAccessorSFPCvl+0x1c>
        1a7af0:	e1a00002 	mov	r0, r2
        1a7af4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TReservedBlockAccessor::ChecksumFlash(unsigned long, long)
 * Address: 001a7af8
 */
TReservedBlockAccessor::ChecksumFlash(unsigned long, long) {
    /*
        1a7af8:	e1a0c00d 	mov	ip, sp
        1a7afc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1a7b00:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7b04:	e1a06000 	mov	r6, r0
        1a7b08:	e1a05001 	mov	r5, r1
        1a7b0c:	e1a04002 	mov	r4, r2
        1a7b10:	eb62fe27 	bl	1a673b4 <TReservedBlockAccessor::$GetBufferForCopy(void)>
        1a7b14:	e1a09000 	mov	r9, r0
        1a7b18:	e3a08000 	mov	r8, #0	; 0x0
        1a7b1c:	e3340000 	teq	r4, #0	; 0x0
        1a7b20:	0a00000e 	beq	1a7b60 <TReservedBlockAccessor::ChecksumFlash(unsigned long, long)+0x68>
        1a7b24:	e3540c01 	cmp	r4, #256	; 0x100
        1a7b28:	d1a07004 	movle	r7, r4
        1a7b2c:	c3a07c01 	movgt	r7, #256	; 0x100
        1a7b30:	e1a03009 	mov	r3, r9
        1a7b34:	e1a02007 	mov	r2, r7
        1a7b38:	e1a01005 	mov	r1, r5
        1a7b3c:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1a7b40:	eb62f9f4 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a7b44:	e1a01007 	mov	r1, r7
        1a7b48:	e1a00009 	mov	r0, r9
        1a7b4c:	eb62fe11 	bl	1a67398 <$Checksum__22TReservedBlockAccessorSFPCvl>
        1a7b50:	e0808008 	add	r8, r0, r8
        1a7b54:	e0855007 	add	r5, r5, r7
        1a7b58:	e0544007 	subs	r4, r4, r7
        1a7b5c:	1afffff0 	bne	1a7b24 <TReservedBlockAccessor::ChecksumFlash(unsigned long, long)+0x2c>
        1a7b60:	e1a00008 	mov	r0, r8
        1a7b64:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::CompareFlashRebootIfDifferent(unsigned long, unsigned long, long)
 * Address: 001a7b68
 */
TReservedBlockAccessor::CompareFlashRebootIfDifferent(unsigned long, unsigned long, long) {
    /*
        1a7b68:	e1a0c00d 	mov	ip, sp
        1a7b6c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a7b70:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7b74:	e1a05000 	mov	r5, r0
        1a7b78:	e1a07001 	mov	r7, r1
        1a7b7c:	e1a06002 	mov	r6, r2
        1a7b80:	e1a04003 	mov	r4, r3
        1a7b84:	eb62fe0a 	bl	1a673b4 <TReservedBlockAccessor::$GetBufferForCopy(void)>
        1a7b88:	e1a0a000 	mov	sl, r0
        1a7b8c:	e1a00005 	mov	r0, r5
        1a7b90:	eb62fe06 	bl	1a673b0 <TReservedBlockAccessor::$GetBufferForCopy2(void)>
        1a7b94:	e1a09000 	mov	r9, r0
        1a7b98:	e3340000 	teq	r4, #0	; 0x0
        1a7b9c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1a7ba0:	e3540c01 	cmp	r4, #256	; 0x100
        1a7ba4:	d1a08004 	movle	r8, r4
        1a7ba8:	c3a08c01 	movgt	r8, #256	; 0x100
        1a7bac:	e1a0300a 	mov	r3, sl
        1a7bb0:	e1a02008 	mov	r2, r8
        1a7bb4:	e1a01007 	mov	r1, r7
        1a7bb8:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1a7bbc:	eb62f9d5 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a7bc0:	e1a03009 	mov	r3, r9
        1a7bc4:	e1a02008 	mov	r2, r8
        1a7bc8:	e1a01006 	mov	r1, r6
        1a7bcc:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1a7bd0:	eb62f9d0 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a7bd4:	e1a03008 	mov	r3, r8
        1a7bd8:	e1a02009 	mov	r2, r9
        1a7bdc:	e1a0100a 	mov	r1, sl
        1a7be0:	e1a00005 	mov	r0, r5
        1a7be4:	eb62fded 	bl	1a673a0 <$CompareAndRebootIfDifferent__22TReservedBlockAccessorCFPCvT1l>
        1a7be8:	e0877008 	add	r7, r7, r8
        1a7bec:	e0866008 	add	r6, r6, r8
        1a7bf0:	e0544008 	subs	r4, r4, r8
        1a7bf4:	1affffe9 	bne	1a7ba0 <TReservedBlockAccessor::CompareFlashRebootIfDifferent(unsigned long, unsigned long, long)+0x38>
        1a7bf8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::CompareFlashAndMemRebootIfDifferent(unsigned long, void const *, long)
 * Address: 001a7bfc
 */
TReservedBlockAccessor::CompareFlashAndMemRebootIfDifferent(unsigned long, void const *, long) {
    /*
        1a7bfc:	e1a0c00d 	mov	ip, sp
        1a7c00:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1a7c04:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7c08:	e1a06000 	mov	r6, r0
        1a7c0c:	e1a05001 	mov	r5, r1
        1a7c10:	e1a08002 	mov	r8, r2
        1a7c14:	e1a04003 	mov	r4, r3
        1a7c18:	eb62fde5 	bl	1a673b4 <TReservedBlockAccessor::$GetBufferForCopy(void)>
        1a7c1c:	e1a09000 	mov	r9, r0
        1a7c20:	e3340000 	teq	r4, #0	; 0x0
        1a7c24:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1a7c28:	e3540c01 	cmp	r4, #256	; 0x100
        1a7c2c:	d1a07004 	movle	r7, r4
        1a7c30:	c3a07c01 	movgt	r7, #256	; 0x100
        1a7c34:	e1a03009 	mov	r3, r9
        1a7c38:	e1a02007 	mov	r2, r7
        1a7c3c:	e1a01005 	mov	r1, r5
        1a7c40:	e5960004 	ldr	r0, [r6, #4]	; fField4
        1a7c44:	eb62f9b3 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a7c48:	e1a03007 	mov	r3, r7
        1a7c4c:	e1a02008 	mov	r2, r8
        1a7c50:	e1a01009 	mov	r1, r9
        1a7c54:	e1a00006 	mov	r0, r6
        1a7c58:	eb62fdd0 	bl	1a673a0 <$CompareAndRebootIfDifferent__22TReservedBlockAccessorCFPCvT1l>
        1a7c5c:	e0855007 	add	r5, r5, r7
        1a7c60:	e0888007 	add	r8, r8, r7
        1a7c64:	e0544007 	subs	r4, r4, r7
        1a7c68:	1affffee 	bne	1a7c28 <TReservedBlockAccessor::CompareFlashAndMemRebootIfDifferent(unsigned long, void const *, long)+0x2c>
        1a7c6c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: CompareAndRebootIfDifferent__22TReservedBlockAccessorCFPCvT1l
 * Address: 001a7c70
 */
void TReservedBlockAccessor::CompareAndRebootIfDifferent() {
    /*
        1a7c70:	e1a0c00d 	mov	ip, sp
        1a7c74:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a7c78:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7c7c:	e1a06001 	mov	r6, r1
        1a7c80:	e1a07002 	mov	r7, r2
        1a7c84:	e1a04003 	mov	r4, r3
        1a7c88:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1a7c8c:	ebfc6b41 	bl	c2998 <TFlashRange::EarlyPrepareForReadingArray(void)>
        1a7c90:	e1a00004 	mov	r0, r4
        1a7c94:	e2444001 	sub	r4, r4, #1	; 0x1
        1a7c98:	e3500000 	cmp	r0, #0	; 0x0
        1a7c9c:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a7ca0:	e3e05043 	mvn	r5, #67	; 0x43
        1a7ca4:	e2455c29 	sub	r5, r5, #10496	; 0x2900
        1a7ca8:	e4d61001 	ldrb	r1, [r6], #1
        1a7cac:	e4d70001 	ldrb	r0, [r7], #1
        1a7cb0:	e1310000 	teq	r1, r0
        1a7cb4:	11a00005 	movne	r0, r5
        1a7cb8:	1b656501 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a7cbc:	e1a00004 	mov	r0, r4
        1a7cc0:	e2444001 	sub	r4, r4, #1	; 0x1
        1a7cc4:	e3500000 	cmp	r0, #0	; 0x0
        1a7cc8:	cafffff6 	bgt	1a7ca8 <CompareAndRebootIfDifferent__22TReservedBlockAccessorCFPCvT1l+0x38>
        1a7ccc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::MarkBlock1Invalid(void)
 * Address: 001a7cd0
 */
TReservedBlockAccessor::MarkBlock1Invalid(void) {
    /*
        1a7cd0:	e1a0c00d 	mov	ip, sp
        1a7cd4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1a7cd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7cdc:	e3e01007 	mvn	r1, #7	; 0x7
        1a7ce0:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        1a7ce4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1a7ce8:	e1a0300d 	mov	r3, sp
        1a7cec:	e3a02004 	mov	r2, #4	; 0x4
        1a7cf0:	e3a01058 	mov	r1, #88	; 0x58
        1a7cf4:	eb62f990 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7cf8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::MarkBlock1AsValidConfig(void)
 * Address: 001a7cfc
 */
TReservedBlockAccessor::MarkBlock1AsValidConfig(void) {
    /*
        1a7cfc:	e1a0c00d 	mov	ip, sp
        1a7d00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a7d04:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7d08:	e1a04000 	mov	r4, r0
        1a7d0c:	e3e0000f 	mvn	r0, #15	; 0xf
        1a7d10:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1a7d14:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a7d18:	e590103c 	ldr	r1, [r0, #60]	; fField60
        1a7d1c:	e2811058 	add	r1, r1, #88	; 0x58
        1a7d20:	e1a0300d 	mov	r3, sp
        1a7d24:	e3a02004 	mov	r2, #4	; 0x4
        1a7d28:	eb62f983 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7d2c:	e3300000 	teq	r0, #0	; 0x0
        1a7d30:	1a000004 	bne	1a7d48 <TReservedBlockAccessor::MarkBlock1AsValidConfig(void)+0x4c>
        1a7d34:	e1a0300d 	mov	r3, sp
        1a7d38:	e3a02004 	mov	r2, #4	; 0x4
        1a7d3c:	e3a01058 	mov	r1, #88	; 0x58
        1a7d40:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1a7d44:	eb62f97c 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7d48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::MarkBlock0AsValidConfig(void)
 * Address: 001a7d4c
 */
TReservedBlockAccessor::MarkBlock0AsValidConfig(void) {
    /*
        1a7d4c:	e1a0c00d 	mov	ip, sp
        1a7d50:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1a7d54:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7d58:	e3e01001 	mvn	r1, #1	; 0x1
        1a7d5c:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        1a7d60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1a7d64:	e1a0300d 	mov	r3, sp
        1a7d68:	e3a02004 	mov	r2, #4	; 0x4
        1a7d6c:	e3a01058 	mov	r1, #88	; 0x58
        1a7d70:	eb62f971 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7d74:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::MarkStoreAsValid(void)
 * Address: 001a7e60
 */
TReservedBlockAccessor::MarkStoreAsValid(void) {
    /*
        1a7e60:	e1a0c00d 	mov	ip, sp
        1a7e64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a7e68:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7e6c:	e1a04000 	mov	r4, r0
        1a7e70:	e3e00003 	mvn	r0, #3	; 0x3
        1a7e74:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1a7e78:	e1a0300d 	mov	r3, sp
        1a7e7c:	e3a02004 	mov	r2, #4	; 0x4
        1a7e80:	e3a01058 	mov	r1, #88	; 0x58
        1a7e84:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a7e88:	eb62f92b 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7e8c:	e3300000 	teq	r0, #0	; 0x0
        1a7e90:	03a01000 	moveq	r1, #0	; 0x0
        1a7e94:	05b40004 	ldreq	r0, [r4, #4]!	; fField4
        1a7e98:	0b62f91a 	bleq	1a66308 <TFlashRange::$LockBlock(unsigned long)>
        1a7e9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::Init(void)
 * Address: 001a7ea0
 */
TReservedBlockAccessor::Init(void) {
    /*
        1a7ea0:	e1a0c00d 	mov	ip, sp
        1a7ea4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a7ea8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7eac:	e1a04000 	mov	r4, r0
        1a7eb0:	e5900000 	ldr	r0, [r0]
        1a7eb4:	e5b01068 	ldr	r1, [r0, #104]!
        1a7eb8:	e2840f8a 	add	r0, r4, #552	; 0x228
        1a7ebc:	ebfe4c39 	bl	13afa8 <TULockingSemaphoreGrabber::DoAquire(TULockingSemaphore *)>
        1a7ec0:	e2841004 	add	r1, r4, #4	; 0x4
        1a7ec4:	e5940000 	ldr	r0, [r4]
        1a7ec8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1a7ecc:	ea62f0dc 	b	1a64244 <TNewInternalFlash::$AllocateReservedBlockRange(TFlashRange *&)>
    */
}

/**
 * Symbol: CalibrationParameters__22TReservedBlockAccessorSFR23OSCalibrationParameters
 * Address: 001a7ed0
 */
void TReservedBlockAccessor::CalibrationParameters() {
    /*
        1a7ed0:	e1a0c00d 	mov	ip, sp
        1a7ed4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a7ed8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7edc:	e1a04000 	mov	r4, r0
        1a7ee0:	e24dd06c 	sub	sp, sp, #108	; 0x6c
        1a7ee4:	eb682674 	bl	1bb18bc <$GetGlobalAllocator__14THeapAllocatorSFv>
        1a7ee8:	e1a01000 	mov	r1, r0
        1a7eec:	e1a0000d 	mov	r0, sp
        1a7ef0:	e3a02000 	mov	r2, #0	; 0x0
        1a7ef4:	eb62f4e4 	bl	1a6528c <TNewInternalFlash::$InitForReservedBlock(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)>
        1a7ef8:	e24ddf8b 	sub	sp, sp, #556	; 0x22c
        1a7efc:	e28d1f8b 	add	r1, sp, #556	; 0x22c
        1a7f00:	e1a0000d 	mov	r0, sp
        1a7f04:	eb62fd39 	bl	1a673f0 <TReservedBlockAccessor::$__ct(TNewInternalFlash *)>
        1a7f08:	e1a0000d 	mov	r0, sp
        1a7f0c:	eb62fd2a 	bl	1a673bc <TReservedBlockAccessor::$Init(void)>
        1a7f10:	e1b05000 	movs	r5, r0
        1a7f14:	1a000003 	bne	1a7f28 <CalibrationParameters__22TReservedBlockAccessorSFR23OSCalibrationParameters+0x58>
        1a7f18:	e1a01004 	mov	r1, r4
        1a7f1c:	e1a0000d 	mov	r0, sp
        1a7f20:	eb62fd2c 	bl	1a673d8 <TReservedBlockAccessor::$ReadCalibration(OSCalibrationParameters &)>
        1a7f24:	e1a05000 	mov	r5, r0
        1a7f28:	e1a0000d 	mov	r0, sp
        1a7f2c:	eb62fd1a 	bl	1a6739c <TReservedBlockAccessor::$CleanUp(void)>
        1a7f30:	e28d0f8b 	add	r0, sp, #556	; 0x22c
        1a7f34:	eb62f0c7 	bl	1a64258 <TNewInternalFlash::$CleanUp(void)>
        1a7f38:	e59d0228 	ldr	r0, [sp, #552]	; fField552
        1a7f3c:	e3300000 	teq	r0, #0	; 0x0
        1a7f40:	159d0228 	ldrne	r0, [sp, #552]	; fField552
        1a7f44:	1b68c753 	blne	1bd9c98 <TULockingSemaphore::$Release(void)>
        1a7f48:	e1a00005 	mov	r0, r5
        1a7f4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TReservedBlockAccessor::GetEraseRegionSize(void)
 * Address: 001a7f50
 */
TReservedBlockAccessor::GetEraseRegionSize(void) {
    /*
        1a7f50:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1a7f54:	e590003c 	ldr	r0, [r0, #60]	; fField60
        1a7f58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TReservedBlockAccessor::InitializeForWrite(TMemoryAllocator &)
 * Address: 001a7f5c
 */
TReservedBlockAccessor::InitializeForWrite(TMemoryAllocator &) {
    /*
        1a7f5c:	e3a00000 	mov	r0, #0	; 0x0
        1a7f60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TReservedBlockAccessor::ValidatePatchCheckSum(OSCalibrationParameters &)
 * Address: 001a7f64
 */
TReservedBlockAccessor::ValidatePatchCheckSum(OSCalibrationParameters &) {
    /*
        1a7f64:	e1a0c00d 	mov	ip, sp
        1a7f68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a7f6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7f70:	e1a05000 	mov	r5, r0
        1a7f74:	e1a04001 	mov	r4, r1
        1a7f78:	e591205c 	ldr	r2, [r1, #92]	; fField92
        1a7f7c:	e3a01f43 	mov	r1, #268	; 0x10c
        1a7f80:	eb62fd03 	bl	1a67394 <TReservedBlockAccessor::$ChecksumFlash(unsigned long, long)>
        1a7f84:	e5941060 	ldr	r1, [r4, #96]
        1a7f88:	e1310000 	teq	r1, r0
        1a7f8c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1a7f90:	e3a00000 	mov	r0, #0	; 0x0
        1a7f94:	e584005c 	str	r0, [r4, #92]	; fField92
        1a7f98:	e5840060 	str	r0, [r4, #96]
        1a7f9c:	e2843060 	add	r3, r4, #96	; 0x60
        1a7fa0:	e3a02004 	mov	r2, #4	; 0x4
        1a7fa4:	e3a01060 	mov	r1, #96	; 0x60
        1a7fa8:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1a7fac:	eb62f8e2 	bl	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
        1a7fb0:	e284305c 	add	r3, r4, #92	; 0x5c
        1a7fb4:	e3a02004 	mov	r2, #4	; 0x4
        1a7fb8:	e3a0105c 	mov	r1, #92	; 0x5c
        1a7fbc:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        1a7fc0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1a7fc4:	ea62f8dc 	b	1a6633c <TFlashRange::$Write(unsigned long, unsigned long, char *)>
    */
}

/**
 * Symbol: TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)
 * Address: 001a7fc8
 */
TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void) {
    /*
        1a7fc8:	e1a0c00d 	mov	ip, sp
        1a7fcc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a7fd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7fd4:	e1a04000 	mov	r4, r0
        1a7fd8:	e2800008 	add	r0, r0, #8	; 0x8
        1a7fdc:	ebffff65 	bl	1a7d78 <OSCalibrationParameters::SetDefaultValues(void)>
        1a7fe0:	e2840f45 	add	r0, r4, #276	; 0x114
        1a7fe4:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1a7fe8:	e1a03000 	mov	r3, r0
        1a7fec:	e3a02f43 	mov	r2, #268	; 0x10c
        1a7ff0:	e3a01000 	mov	r1, #0	; 0x0
        1a7ff4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a7ff8:	eb62f8c6 	bl	1a66318 <TFlashRange::$Read(unsigned long, unsigned long, char *)>
        1a7ffc:	e1a00004 	mov	r0, r4
        1a8000:	e59d1000 	ldr	r1, [sp]
        1a8004:	eb62fcf7 	bl	1a673e8 <TReservedBlockAccessor::$ValidateCalibrationInformation(OSCalibrationParameters const &)>
        1a8008:	e1a05000 	mov	r5, r0
        1a800c:	e1a00004 	mov	r0, r4
        1a8010:	e59d1000 	ldr	r1, [sp]
        1a8014:	ebffffd2 	bl	1a7f64 <TReservedBlockAccessor::ValidatePatchCheckSum(OSCalibrationParameters &)>
        1a8018:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a801c:	e284006c 	add	r0, r4, #108	; 0x6c
        1a8020:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1a8024:	e2811064 	add	r1, r1, #100	; 0x64
        1a8028:	eb62fcf1 	bl	1a673f4 <$__eq__FRC16TROMREXCheckSumsT1>
        1a802c:	e3300000 	teq	r0, #0	; 0x0
        1a8030:	13a00000 	movne	r0, #0	; 0x0
        1a8034:	03a00001 	moveq	r0, #1	; 0x1
        1a8038:	e5cd0000 	strb	r0, [sp]
        1a803c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1a8040:	e3a07000 	mov	r7, #0	; 0x0
        1a8044:	e5b06058 	ldr	r6, [r0, #88]!
        1a8048:	e3350000 	teq	r5, #0	; 0x0
        1a804c:	e58d7004 	str	r7, [sp, #4]	; fField4
        1a8050:	1a000039 	bne	1a813c <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x174>
        1a8054:	e3760004 	cmn	r6, #4	; 0x4
        1a8058:	05dd0000 	ldreqb	r0, [sp]
        1a805c:	03300000 	teqeq	r0, #0	; 0x0
        1a8060:	1a000003 	bne	1a8074 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0xac>
        1a8064:	e28d0004 	add	r0, sp, #4	; 0x4
        1a8068:	eb078a77 	bl	38aa4c <C$$dtorvec$$Limit+0xd8>
        1a806c:	e1a00007 	mov	r0, r7
        1a8070:	ea000063 	b	1a8204 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x23c>
        1a8074:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8078:	e5900020 	ldr	r0, [r0, #32]
        1a807c:	e3300000 	teq	r0, #0	; 0x0
        1a8080:	13a0001d 	movne	r0, #29	; 0x1d
        1a8084:	1b699dcc 	blne	1c0f7bc <$EarlyIOPowerOn(unsigned long)>
        1a8088:	e3760004 	cmn	r6, #4	; 0x4
        1a808c:	0a00000d 	beq	1a80c8 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x100>
        1a8090:	ca000004 	bgt	1a80a8 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0xe0>
        1a8094:	e3760010 	cmn	r6, #16	; 0x10
        1a8098:	0a00001c 	beq	1a8110 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x148>
        1a809c:	e3760008 	cmn	r6, #8	; 0x8
        1a80a0:	1a000020 	bne	1a8128 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x160>
        1a80a4:	ea00000b 	b	1a80d8 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x110>
        1a80a8:	e3760002 	cmn	r6, #2	; 0x2
        1a80ac:	0a000002 	beq	1a80bc <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0xf4>
        1a80b0:	e3760001 	cmn	r6, #1	; 0x1
        1a80b4:	1a00001b 	bne	1a8128 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x160>
        1a80b8:	ea000014 	b	1a8110 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x148>
        1a80bc:	e5dd0000 	ldrb	r0, [sp]
        1a80c0:	e3300000 	teq	r0, #0	; 0x0
        1a80c4:	0a000017 	beq	1a8128 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x160>
        1a80c8:	e1a00004 	mov	r0, r4
        1a80cc:	eb62fcbe 	bl	1a673cc <TReservedBlockAccessor::$MarkBlock1Invalid(void)>
        1a80d0:	e3300000 	teq	r0, #0	; 0x0
        1a80d4:	1b6563fa 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a80d8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a80dc:	e590203c 	ldr	r2, [r0, #60]	; fField60
        1a80e0:	e1a05002 	mov	r5, r2
        1a80e4:	e1a01002 	mov	r1, r2
        1a80e8:	eb62f892 	bl	1a66338 <TFlashRange::$SyncErase(unsigned long, unsigned long)>
        1a80ec:	e1a03005 	mov	r3, r5
        1a80f0:	e1a02005 	mov	r2, r5
        1a80f4:	e1a00004 	mov	r0, r4
        1a80f8:	e3a01000 	mov	r1, #0	; 0x0
        1a80fc:	eb62fcaa 	bl	1a673ac <TReservedBlockAccessor::$CopyFlash(unsigned long, unsigned long, unsigned long)>
        1a8100:	e1a00004 	mov	r0, r4
        1a8104:	eb62fcaf 	bl	1a673c8 <TReservedBlockAccessor::$MarkBlock1AsValidConfig(void)>
        1a8108:	e3300000 	teq	r0, #0	; 0x0
        1a810c:	1b6563ec 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a8110:	e1a0100d 	mov	r1, sp
        1a8114:	e1a00004 	mov	r0, r4
        1a8118:	eb62fcb0 	bl	1a673e0 <TReservedBlockAccessor::$UpdateBlock0FromBlock1(unsigned char &)>
        1a811c:	e1b05000 	movs	r5, r0
        1a8120:	11a00005 	movne	r0, r5
        1a8124:	1b6563e6 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a8128:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a812c:	e5900020 	ldr	r0, [r0, #32]
        1a8130:	e3300000 	teq	r0, #0	; 0x0
        1a8134:	0a000011 	beq	1a8180 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x1b8>
        1a8138:	ea00000e 	b	1a8178 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x1b0>
        1a813c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8140:	e5900020 	ldr	r0, [r0, #32]
        1a8144:	e3300000 	teq	r0, #0	; 0x0
        1a8148:	13a0001d 	movne	r0, #29	; 0x1d
        1a814c:	1b699d9a 	blne	1c0f7bc <$EarlyIOPowerOn(unsigned long)>
        1a8150:	e1a0100d 	mov	r1, sp
        1a8154:	e1a00004 	mov	r0, r4
        1a8158:	eb62fca0 	bl	1a673e0 <TReservedBlockAccessor::$UpdateBlock0FromBlock1(unsigned char &)>
        1a815c:	e1b05000 	movs	r5, r0
        1a8160:	11a00005 	movne	r0, r5
        1a8164:	1b6563d6 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a8168:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a816c:	e5900020 	ldr	r0, [r0, #32]
        1a8170:	e3300000 	teq	r0, #0	; 0x0
        1a8174:	0a000001 	beq	1a8180 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x1b8>
        1a8178:	e3a0001d 	mov	r0, #29	; 0x1d
        1a817c:	eb699d8f 	bl	1c0f7c0 <$EarlyIOPowerOff(unsigned long)>
        1a8180:	e3350000 	teq	r5, #0	; 0x0
        1a8184:	1a000010 	bne	1a81cc <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x204>
        1a8188:	e5940000 	ldr	r0, [r4]
        1a818c:	eb62f442 	bl	1a6529c <TNewInternalFlash::$InternalClobber(void)>
        1a8190:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1a8194:	e5900020 	ldr	r0, [r0, #32]
        1a8198:	e3300000 	teq	r0, #0	; 0x0
        1a819c:	13a0001d 	movne	r0, #29	; 0x1d
        1a81a0:	1b699d85 	blne	1c0f7bc <$EarlyIOPowerOn(unsigned long)>
        1a81a4:	e1a00004 	mov	r0, r4
        1a81a8:	eb62fc88 	bl	1a673d0 <TReservedBlockAccessor::$MarkStoreAsValid(void)>
        1a81ac:	e1b05000 	movs	r5, r0
        1a81b0:	11a00005 	movne	r0, r5
        1a81b4:	1b6563c2 	blne	1b010c4 <$PowerOffAndReboot(long)>
        1a81b8:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1a81bc:	e5900020 	ldr	r0, [r0, #32]
        1a81c0:	e3300000 	teq	r0, #0	; 0x0
        1a81c4:	13a0001d 	movne	r0, #29	; 0x1d
        1a81c8:	1b699d7c 	blne	1c0f7c0 <$EarlyIOPowerOff(unsigned long)>
        1a81cc:	e3350000 	teq	r5, #0	; 0x0
        1a81d0:	1a000008 	bne	1a81f8 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x230>
        1a81d4:	e5dd0000 	ldrb	r0, [sp]
        1a81d8:	e3300000 	teq	r0, #0	; 0x0
        1a81dc:	0a000005 	beq	1a81f8 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x230>
        1a81e0:	e3a0409c 	mov	r4, #156	; 0x9c
        1a81e4:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        1a81e8:	e28d0004 	add	r0, sp, #4	; 0x4
        1a81ec:	eb078a16 	bl	38aa4c <C$$dtorvec$$Limit+0xd8>
        1a81f0:	e1a00004 	mov	r0, r4
        1a81f4:	ea000002 	b	1a8204 <TReservedBlockAccessor::CheckIfRecoveryIsNeeded(void)+0x23c>
        1a81f8:	e28d0004 	add	r0, sp, #4	; 0x4
        1a81fc:	eb078a12 	bl	38aa4c <C$$dtorvec$$Limit+0xd8>
        1a8200:	e1a00005 	mov	r0, r5
        1a8204:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

