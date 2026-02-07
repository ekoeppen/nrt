#include "include/TFlashSeries2.h"

/**
 * Symbol: Sizeof__13TFlashSeries2SFv
 * Address: 000c3328
 */
void TFlashSeries2::Sizeof() {
    /*
         c3328:	e3a00050 	mov	r0, #80	; 0x50
         c332c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::New(void)
 * Address: 000c3330
 */
TFlashSeries2::New(void) {
    /*
         c3330:	e3a01000 	mov	r1, #0	; 0x0
         c3334:	e5801010 	str	r1, [r0, #16]	; fField16
         c3338:	e5801014 	str	r1, [r0, #20]	; fField20
         c333c:	e5801018 	str	r1, [r0, #24]	; fField24
         c3340:	e5801044 	str	r1, [r0, #68]	; fField68
         c3344:	e5801040 	str	r1, [r0, #64]	; fField64
         c3348:	e580101c 	str	r1, [r0, #28]	; fField28
         c334c:	e5801038 	str	r1, [r0, #56]	; fField56
         c3350:	e3a0100d 	mov	r1, #13	; 0xd
         c3354:	e5801020 	str	r1, [r0, #32]	; fField32
         c3358:	e3a01013 	mov	r1, #19	; 0x13
         c335c:	e5801048 	str	r1, [r0, #72]	; fField72
         c3360:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::ResumeErase(unsigned long)
 * Address: 000c3364
 */
TFlashSeries2::ResumeErase(unsigned long) {
    /*
         c3364:	e3a02001 	mov	r2, #1	; 0x1
         c3368:	ea69eac9 	b	1b3de94 <TFlashSeries2::$DoErase(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TFlashSeries2::DoErase(unsigned long, unsigned char)
 * Address: 000c336c
 */
TFlashSeries2::DoErase(unsigned long, unsigned char) {
    /*
         c336c:	e1a0c00d 	mov	ip, sp
         c3370:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c3374:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3378:	e1a04000 	mov	r4, r0
         c337c:	e1a05001 	mov	r5, r1
         c3380:	e20270ff 	and	r7, r2, #255	; 0xff
         c3384:	e3a06000 	mov	r6, #0	; 0x0
         c3388:	e5900034 	ldr	r0, [r0, #52]	; fField52
         c338c:	e1500001 	cmp	r0, r1
         c3390:	93a060ea 	movls	r6, #234	; 0xea
         c3394:	92466b0a 	subls	r6, r6, #10240	; 0x2800
         c3398:	9a000060 	bls	c3520 <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1b4>
         c339c:	e1a00004 	mov	r0, r4
         c33a0:	eb69eab6 	bl	1b3de80 <TFlashSeries2::$CheckWriteProtected(void)>
         c33a4:	e59f8070 	ldr	r8, [pc, #70]	; c341c <TFlashSeries2::DoErase(unsigned long, unsigned char)+0xb0>
         c33a8:	e3300000 	teq	r0, #0	; 0x0
         c33ac:	11a06008 	movne	r6, r8
         c33b0:	1a00005a 	bne	c3520 <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1b4>
         c33b4:	e1a00004 	mov	r0, r4
         c33b8:	eb69eab6 	bl	1b3de98 <TFlashSeries2::$EnterFlashOperation(void)>
         c33bc:	e3a00000 	mov	r0, #0	; 0x0
         c33c0:	e52d006c 	str	r0, [sp, -#108]!
         c33c4:	e28d0008 	add	r0, sp, #8	; 0x8
         c33c8:	eb6bbd69 	bl	1bb2974 <$setjmp>
         c33cc:	e3300000 	teq	r0, #0	; 0x0
         c33d0:	1a000034 	bne	c34a8 <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x13c>
         c33d4:	e1a0000d 	mov	r0, sp
         c33d8:	eb6c7327 	bl	1be007c <$AddExceptionHandler>
         c33dc:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c33e0:	e0801005 	add	r1, r0, r5
         c33e4:	e1a05001 	mov	r5, r1
         c33e8:	e1a00004 	mov	r0, r4
         c33ec:	eb69e6a2 	bl	1b3ce7c <TFlashSeries2::$CheckStatus(unsigned long)>
         c33f0:	e3500000 	cmp	r0, #0	; 0x0
         c33f4:	b1a06000 	movlt	r6, r0
         c33f8:	ba000043 	blt	c350c <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1a0>
         c33fc:	e3370000 	teq	r7, #0	; 0x0
         c3400:	0a000006 	beq	c3420 <TFlashSeries2::DoErase(unsigned long, unsigned char)+0xb4>
         c3404:	e3300004 	teq	r0, #4	; 0x4
         c3408:	13300005 	teqne	r0, #5	; 0x5
         c340c:	13e06f4e 	mvnne	r6, #312	; 0x138
         c3410:	12466b0a 	subne	r6, r6, #10240	; 0x2800
         c3414:	1a00003c 	bne	c350c <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1a0>
         c3418:	ea00000d 	b	c3454 <TFlashSeries2::DoErase(unsigned long, unsigned char)+0xe8>
         c341c:	ffffd8af 	swinv	0x00ffd8af
         c3420:	e3300001 	teq	r0, #1	; 0x1
         c3424:	0a000005 	beq	c3440 <TFlashSeries2::DoErase(unsigned long, unsigned char)+0xd4>
         c3428:	e3300004 	teq	r0, #4	; 0x4
         c342c:	13300005 	teqne	r0, #5	; 0x5
         c3430:	13e06036 	mvnne	r6, #54	; 0x36
         c3434:	12466c29 	subne	r6, r6, #10496	; 0x2900
         c3438:	1a000033 	bne	c350c <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1a0>
         c343c:	ea000004 	b	c3454 <TFlashSeries2::DoErase(unsigned long, unsigned char)+0xe8>
         c3440:	e1a01005 	mov	r1, r5
         c3444:	e1a00004 	mov	r0, r4
         c3448:	e3a02020 	mov	r2, #32	; 0x20
         c344c:	e2822a02 	add	r2, r2, #8192	; 0x2000
         c3450:	eb69ea8c 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c3454:	e1a01005 	mov	r1, r5
         c3458:	e1a00004 	mov	r0, r4
         c345c:	e3a020d0 	mov	r2, #208	; 0xd0
         c3460:	e2822a0d 	add	r2, r2, #53248	; 0xd000
         c3464:	eb69ea87 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c3468:	e1a01005 	mov	r1, r5
         c346c:	e1a00004 	mov	r0, r4
         c3470:	e3a02000 	mov	r2, #0	; 0x0
         c3474:	eb69ea85 	bl	1b3de90 <TFlashSeries2::$ChipWaitReady(unsigned long, unsigned char)>
         c3478:	e1a01005 	mov	r1, r5
         c347c:	e1a00004 	mov	r0, r4
         c3480:	eb69e676 	bl	1b3ce60 <TFlashSeries2::$ChipCheckError(unsigned long)>
         c3484:	e1b06000 	movs	r6, r0
         c3488:	0a00001f 	beq	c350c <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1a0>
         c348c:	e5845044 	str	r5, [r4, #68]	; fField68
         c3490:	e1a01005 	mov	r1, r5
         c3494:	e1a00004 	mov	r0, r4
         c3498:	e3a02801 	mov	r2, #65536	; 0x10000
         c349c:	e2422001 	sub	r2, r2, #1	; 0x1
         c34a0:	eb69ea78 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c34a4:	ea000018 	b	c350c <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1a0>
         c34a8:	e59d0060 	ldr	r0, [sp, #96]
         c34ac:	e59f1074 	ldr	r1, [pc, #74]	; c3528 <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1bc>
         c34b0:	e5911000 	ldr	r1, [r1]
         c34b4:	eb6c7f36 	bl	1be3194 <$Subexception>
         c34b8:	e3300000 	teq	r0, #0	; 0x0
         c34bc:	13a060b4 	movne	r6, #180	; 0xb4
         c34c0:	12466b0a 	subne	r6, r6, #10240	; 0x2800
         c34c4:	1a000010 	bne	c350c <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1a0>
         c34c8:	e59d0060 	ldr	r0, [sp, #96]
         c34cc:	e59f1058 	ldr	r1, [pc, #58]	; c352c <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1c0>
         c34d0:	e5911000 	ldr	r1, [r1]
         c34d4:	eb6c7f2e 	bl	1be3194 <$Subexception>
         c34d8:	e3300000 	teq	r0, #0	; 0x0
         c34dc:	13a060b5 	movne	r6, #181	; 0xb5
         c34e0:	12466b0a 	subne	r6, r6, #10240	; 0x2800
         c34e4:	1a000008 	bne	c350c <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1a0>
         c34e8:	e59d0060 	ldr	r0, [sp, #96]
         c34ec:	e59f103c 	ldr	r1, [pc, #3c]	; c3530 <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1c4>
         c34f0:	e5911000 	ldr	r1, [r1]
         c34f4:	eb6c7f26 	bl	1be3194 <$Subexception>
         c34f8:	e3300000 	teq	r0, #0	; 0x0
         c34fc:	11a06008 	movne	r6, r8
         c3500:	1a000001 	bne	c350c <TFlashSeries2::DoErase(unsigned long, unsigned char)+0x1a0>
         c3504:	e1a0000d 	mov	r0, sp
         c3508:	eb6c7b11 	bl	1be2154 <$NextHandler>
         c350c:	e1a0000d 	mov	r0, sp
         c3510:	eb6c76e8 	bl	1be10b8 <$ExitHandler>
         c3514:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c3518:	e1a00004 	mov	r0, r4
         c351c:	eb69ea5e 	bl	1b3de9c <TFlashSeries2::$ExitFlashOperation(void)>
         c3520:	e1a00006 	mov	r0, r6
         c3524:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         c3528:	003712c4 	eoreqs	r1, r7, r4, asr #5
         c352c:	003712b8 	ldreqh	r1, [r7], -r8
         c3530:	003712c8 	eoreqs	r1, r7, r8, asr #5
    */
}

/**
 * Symbol: TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)
 * Address: 000c3534
 */
TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long) {
    /*
         c3534:	e1a0c00d 	mov	ip, sp
         c3538:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c353c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3540:	e1a04000 	mov	r4, r0
         c3544:	e1a07001 	mov	r7, r1
         c3548:	e1a05002 	mov	r5, r2
         c354c:	e1a06003 	mov	r6, r3
         c3550:	e3a00000 	mov	r0, #0	; 0x0
         c3554:	e52d0004 	str	r0, [sp, -#4]!
         c3558:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c355c:	e1500001 	cmp	r0, r1
         c3560:	93a000ea 	movls	r0, #234	; 0xea
         c3564:	92400b0a 	subls	r0, r0, #10240	; 0x2800
         c3568:	958d0000 	strls	r0, [sp]
         c356c:	9a000071 	bls	c3738 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x204>
         c3570:	e1a00004 	mov	r0, r4
         c3574:	eb69ea41 	bl	1b3de80 <TFlashSeries2::$CheckWriteProtected(void)>
         c3578:	e59f8048 	ldr	r8, [pc, #48]	; c35c8 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x94>
         c357c:	e3300000 	teq	r0, #0	; 0x0
         c3580:	158d8000 	strne	r8, [sp]
         c3584:	1a00006b 	bne	c3738 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x204>
         c3588:	e1a00004 	mov	r0, r4
         c358c:	eb69ea41 	bl	1b3de98 <TFlashSeries2::$EnterFlashOperation(void)>
         c3590:	e3a00000 	mov	r0, #0	; 0x0
         c3594:	e52d006c 	str	r0, [sp, -#108]!
         c3598:	e28d0008 	add	r0, sp, #8	; 0x8
         c359c:	eb6bbcf4 	bl	1bb2974 <$setjmp>
         c35a0:	e3300000 	teq	r0, #0	; 0x0
         c35a4:	1a000041 	bne	c36b0 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x17c>
         c35a8:	e1a0000d 	mov	r0, sp
         c35ac:	eb6c72b2 	bl	1be007c <$AddExceptionHandler>
         c35b0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c35b4:	e0807007 	add	r7, r0, r7
         c35b8:	e080a005 	add	sl, r0, r5
         c35bc:	e3a09000 	mov	r9, #0	; 0x0
         c35c0:	e3a08000 	mov	r8, #0	; 0x0
         c35c4:	ea000034 	b	c369c <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x168>
         c35c8:	ffffd8af 	swinv	0x00ffd8af
         c35cc:	e1a01007 	mov	r1, r7
         c35d0:	e1a00004 	mov	r0, r4
         c35d4:	eb69e628 	bl	1b3ce7c <TFlashSeries2::$CheckStatus(unsigned long)>
         c35d8:	e3500000 	cmp	r0, #0	; 0x0
         c35dc:	ba00002b 	blt	c3690 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x15c>
         c35e0:	e3300003 	teq	r0, #3	; 0x3
         c35e4:	1a000023 	bne	c3678 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x144>
         c35e8:	e1a01007 	mov	r1, r7
         c35ec:	e1a00004 	mov	r0, r4
         c35f0:	e3a020b0 	mov	r2, #176	; 0xb0
         c35f4:	e2822a0b 	add	r2, r2, #45056	; 0xb000
         c35f8:	eb69ea22 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c35fc:	e1a01007 	mov	r1, r7
         c3600:	e1a00004 	mov	r0, r4
         c3604:	e3a02001 	mov	r2, #1	; 0x1
         c3608:	eb69ea20 	bl	1b3de90 <TFlashSeries2::$ChipWaitReady(unsigned long, unsigned char)>
         c360c:	e1a01007 	mov	r1, r7
         c3610:	e1a00004 	mov	r0, r4
         c3614:	e3a02801 	mov	r2, #65536	; 0x10000
         c3618:	e2422001 	sub	r2, r2, #1	; 0x1
         c361c:	eb69ea19 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c3620:	e3750001 	cmn	r5, #1	; 0x1
         c3624:	15940020 	ldrne	r0, [r4, #32]	; fField32
         c3628:	12000004 	andne	r0, r0, #4	; 0x4
         c362c:	13300000 	teqne	r0, #0	; 0x0
         c3630:	159a0000 	ldrne	r0, [sl]
         c3634:	11300006 	teqne	r0, r6
         c3638:	0a000016 	beq	c3698 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x164>
         c363c:	e1a01007 	mov	r1, r7
         c3640:	e1a00004 	mov	r0, r4
         c3644:	e3a020d0 	mov	r2, #208	; 0xd0
         c3648:	e2822a0d 	add	r2, r2, #53248	; 0xd000
         c364c:	eb69ea0d 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c3650:	e1a01007 	mov	r1, r7
         c3654:	e1a00004 	mov	r0, r4
         c3658:	e3a02000 	mov	r2, #0	; 0x0
         c365c:	eb69ea0b 	bl	1b3de90 <TFlashSeries2::$ChipWaitReady(unsigned long, unsigned char)>
         c3660:	e2899001 	add	r9, r9, #1	; 0x1
         c3664:	e3590010 	cmp	r9, #16	; 0x10
         c3668:	23e00039 	mvncs	r0, #57	; 0x39
         c366c:	22400c29 	subcs	r0, r0, #10496	; 0x2900
         c3670:	2a000006 	bcs	c3690 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x15c>
         c3674:	ea000008 	b	c369c <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x168>
         c3678:	e3300004 	teq	r0, #4	; 0x4
         c367c:	13300005 	teqne	r0, #5	; 0x5
         c3680:	13300001 	teqne	r0, #1	; 0x1
         c3684:	0a000003 	beq	c3698 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x164>
         c3688:	e3e00037 	mvn	r0, #55	; 0x37
         c368c:	e2400c29 	sub	r0, r0, #10496	; 0x2900
         c3690:	e58d006c 	str	r0, [sp, #108]
         c3694:	ea000000 	b	c369c <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x168>
         c3698:	e3a08001 	mov	r8, #1	; 0x1
         c369c:	e59d006c 	ldr	r0, [sp, #108]
         c36a0:	e3300000 	teq	r0, #0	; 0x0
         c36a4:	03380000 	teqeq	r8, #0	; 0x0
         c36a8:	0affffc7 	beq	c35cc <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x98>
         c36ac:	ea00001c 	b	c3724 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x1f0>
         c36b0:	e59d0060 	ldr	r0, [sp, #96]
         c36b4:	e59f103c 	ldr	r1, [pc, #3c]	; c36f8 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x1c4>
         c36b8:	e5911000 	ldr	r1, [r1]
         c36bc:	eb6c7eb4 	bl	1be3194 <$Subexception>
         c36c0:	e3300000 	teq	r0, #0	; 0x0
         c36c4:	13a000b4 	movne	r0, #180	; 0xb4
         c36c8:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c36cc:	1a000007 	bne	c36f0 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x1bc>
         c36d0:	e59d0060 	ldr	r0, [sp, #96]
         c36d4:	e59f1020 	ldr	r1, [pc, #20]	; c36fc <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x1c8>	; fField20
         c36d8:	e5911000 	ldr	r1, [r1]
         c36dc:	eb6c7eac 	bl	1be3194 <$Subexception>
         c36e0:	e3300000 	teq	r0, #0	; 0x0
         c36e4:	0a000005 	beq	c3700 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x1cc>
         c36e8:	e3a000b5 	mov	r0, #181	; 0xb5
         c36ec:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         c36f0:	e58d006c 	str	r0, [sp, #108]
         c36f4:	ea00000a 	b	c3724 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x1f0>
         c36f8:	003712c4 	eoreqs	r1, r7, r4, asr #5
         c36fc:	003712b8 	ldreqh	r1, [r7], -r8
         c3700:	e59d0060 	ldr	r0, [sp, #96]
         c3704:	e59f1034 	ldr	r1, [pc, #34]	; c3740 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x20c>
         c3708:	e5911000 	ldr	r1, [r1]
         c370c:	eb6c7ea0 	bl	1be3194 <$Subexception>
         c3710:	e3300000 	teq	r0, #0	; 0x0
         c3714:	158d806c 	strne	r8, [sp, #108]
         c3718:	1a000001 	bne	c3724 <TFlashSeries2::SuspendErase(unsigned long, unsigned long, unsigned long)+0x1f0>
         c371c:	e1a0000d 	mov	r0, sp
         c3720:	eb6c7a8b 	bl	1be2154 <$NextHandler>
         c3724:	e1a0000d 	mov	r0, sp
         c3728:	eb6c7662 	bl	1be10b8 <$ExitHandler>
         c372c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c3730:	e1a00004 	mov	r0, r4
         c3734:	eb69e9d8 	bl	1b3de9c <TFlashSeries2::$ExitFlashOperation(void)>
         c3738:	e49d0004 	ldr	r0, [sp], #4
         c373c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c3740:	003712c8 	eoreqs	r1, r7, r8, asr #5
    */
}

/**
 * Symbol: TFlashSeries2::DeepSleep(unsigned long)
 * Address: 000c3744
 */
TFlashSeries2::DeepSleep(unsigned long) {
    /*
         c3744:	e59f0000 	ldr	r0, [pc, #0]	; c374c <TFlashSeries2::DeepSleep(unsigned long)+0x8>
         c3748:	e1a0f00e 	mov	pc, lr
         c374c:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: TFlashSeries2::Wakeup(unsigned long)
 * Address: 000c3750
 */
TFlashSeries2::Wakeup(unsigned long) {
    /*
         c3750:	e59f0000 	ldr	r0, [pc, #0]	; c3758 <TFlashSeries2::Wakeup(unsigned long)+0x8>
         c3754:	e1a0f00e 	mov	pc, lr
         c3758:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: TFlashSeries2::Status(unsigned long)
 * Address: 000c375c
 */
TFlashSeries2::Status(unsigned long) {
    /*
         c375c:	e1a0c00d 	mov	ip, sp
         c3760:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c3764:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3768:	e1a04000 	mov	r4, r0
         c376c:	e1a05001 	mov	r5, r1
         c3770:	e24dd004 	sub	sp, sp, #4	; 0x4
         c3774:	e5900034 	ldr	r0, [r0, #52]	; fField52
         c3778:	e1500001 	cmp	r0, r1
         c377c:	93a000ea 	movls	r0, #234	; 0xea
         c3780:	92400b0a 	subls	r0, r0, #10240	; 0x2800
         c3784:	958d0000 	strls	r0, [sp]
         c3788:	9a00003b 	bls	c387c <TFlashSeries2::Status(unsigned long)+0x120>
         c378c:	e1a00004 	mov	r0, r4
         c3790:	eb69e9c0 	bl	1b3de98 <TFlashSeries2::$EnterFlashOperation(void)>
         c3794:	e3a00000 	mov	r0, #0	; 0x0
         c3798:	e52d006c 	str	r0, [sp, -#108]!
         c379c:	e28d0008 	add	r0, sp, #8	; 0x8
         c37a0:	eb6bbc73 	bl	1bb2974 <$setjmp>
         c37a4:	e3300000 	teq	r0, #0	; 0x0
         c37a8:	1a00000f 	bne	c37ec <TFlashSeries2::Status(unsigned long)+0x90>
         c37ac:	e1a0000d 	mov	r0, sp
         c37b0:	eb6c7231 	bl	1be007c <$AddExceptionHandler>
         c37b4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c37b8:	e0801005 	add	r1, r0, r5
         c37bc:	e1a05001 	mov	r5, r1
         c37c0:	e1a00004 	mov	r0, r4
         c37c4:	eb69e5ac 	bl	1b3ce7c <TFlashSeries2::$CheckStatus(unsigned long)>
         c37c8:	e58d006c 	str	r0, [sp, #108]
         c37cc:	e3300003 	teq	r0, #3	; 0x3
         c37d0:	0a000024 	beq	c3868 <TFlashSeries2::Status(unsigned long)+0x10c>
         c37d4:	e1a01005 	mov	r1, r5
         c37d8:	e1a00004 	mov	r0, r4
         c37dc:	e3a02801 	mov	r2, #65536	; 0x10000
         c37e0:	e2422001 	sub	r2, r2, #1	; 0x1
         c37e4:	eb69e9a7 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c37e8:	ea00001e 	b	c3868 <TFlashSeries2::Status(unsigned long)+0x10c>
         c37ec:	e59d0060 	ldr	r0, [sp, #96]
         c37f0:	e59f1058 	ldr	r1, [pc, #58]	; c3850 <TFlashSeries2::Status(unsigned long)+0xf4>
         c37f4:	e5911000 	ldr	r1, [r1]
         c37f8:	eb6c7e65 	bl	1be3194 <$Subexception>
         c37fc:	e3300000 	teq	r0, #0	; 0x0
         c3800:	13a000b4 	movne	r0, #180	; 0xb4
         c3804:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c3808:	1a00000e 	bne	c3848 <TFlashSeries2::Status(unsigned long)+0xec>
         c380c:	e59d0060 	ldr	r0, [sp, #96]
         c3810:	e59f103c 	ldr	r1, [pc, #3c]	; c3854 <TFlashSeries2::Status(unsigned long)+0xf8>
         c3814:	e5911000 	ldr	r1, [r1]
         c3818:	eb6c7e5d 	bl	1be3194 <$Subexception>
         c381c:	e3300000 	teq	r0, #0	; 0x0
         c3820:	13a000b5 	movne	r0, #181	; 0xb5
         c3824:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c3828:	1a000006 	bne	c3848 <TFlashSeries2::Status(unsigned long)+0xec>
         c382c:	e59d0060 	ldr	r0, [sp, #96]
         c3830:	e59f1020 	ldr	r1, [pc, #20]	; c3858 <TFlashSeries2::Status(unsigned long)+0xfc>	; fField20
         c3834:	e5911000 	ldr	r1, [r1]
         c3838:	eb6c7e55 	bl	1be3194 <$Subexception>
         c383c:	e3300000 	teq	r0, #0	; 0x0
         c3840:	0a000006 	beq	c3860 <TFlashSeries2::Status(unsigned long)+0x104>
         c3844:	e59f0010 	ldr	r0, [pc, #10]	; c385c <TFlashSeries2::Status(unsigned long)+0x100>
         c3848:	e58d006c 	str	r0, [sp, #108]
         c384c:	ea000005 	b	c3868 <TFlashSeries2::Status(unsigned long)+0x10c>
         c3850:	003712c4 	eoreqs	r1, r7, r4, asr #5
         c3854:	003712b8 	ldreqh	r1, [r7], -r8
         c3858:	003712c8 	eoreqs	r1, r7, r8, asr #5
         c385c:	ffffd8af 	swinv	0x00ffd8af
         c3860:	e1a0000d 	mov	r0, sp
         c3864:	eb6c7a3a 	bl	1be2154 <$NextHandler>
         c3868:	e1a0000d 	mov	r0, sp
         c386c:	eb6c7611 	bl	1be10b8 <$ExitHandler>
         c3870:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c3874:	e1a00004 	mov	r0, r4
         c3878:	eb69e987 	bl	1b3de9c <TFlashSeries2::$ExitFlashOperation(void)>
         c387c:	e49d0004 	ldr	r0, [sp], #4
         c3880:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::GetWriteProtected(unsigned char *)
 * Address: 000c3884
 */
TFlashSeries2::GetWriteProtected(unsigned char *) {
    /*
         c3884:	e1a0c00d 	mov	ip, sp
         c3888:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c388c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3890:	e1a05000 	mov	r5, r0
         c3894:	e1a04001 	mov	r4, r1
         c3898:	e3a00000 	mov	r0, #0	; 0x0
         c389c:	e52d0004 	str	r0, [sp, -#4]!
         c38a0:	e3a00001 	mov	r0, #1	; 0x1
         c38a4:	e5c10000 	strb	r0, [r1]
         c38a8:	e3a00000 	mov	r0, #0	; 0x0
         c38ac:	e52d006c 	str	r0, [sp, -#108]!
         c38b0:	e28d0008 	add	r0, sp, #8	; 0x8
         c38b4:	eb6bbc2e 	bl	1bb2974 <$setjmp>
         c38b8:	e3300000 	teq	r0, #0	; 0x0
         c38bc:	1a000005 	bne	c38d8 <TFlashSeries2::GetWriteProtected(unsigned char *)+0x54>
         c38c0:	e1a0000d 	mov	r0, sp
         c38c4:	eb6c71ec 	bl	1be007c <$AddExceptionHandler>
         c38c8:	e1a00005 	mov	r0, r5
         c38cc:	eb69e96b 	bl	1b3de80 <TFlashSeries2::$CheckWriteProtected(void)>
         c38d0:	e5c40000 	strb	r0, [r4]
         c38d4:	ea00001e 	b	c3954 <TFlashSeries2::GetWriteProtected(unsigned char *)+0xd0>
         c38d8:	e59d0060 	ldr	r0, [sp, #96]
         c38dc:	e59f1058 	ldr	r1, [pc, #58]	; c393c <TFlashSeries2::GetWriteProtected(unsigned char *)+0xb8>
         c38e0:	e5911000 	ldr	r1, [r1]
         c38e4:	eb6c7e2a 	bl	1be3194 <$Subexception>
         c38e8:	e3300000 	teq	r0, #0	; 0x0
         c38ec:	13a000b4 	movne	r0, #180	; 0xb4
         c38f0:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c38f4:	1a00000e 	bne	c3934 <TFlashSeries2::GetWriteProtected(unsigned char *)+0xb0>
         c38f8:	e59d0060 	ldr	r0, [sp, #96]
         c38fc:	e59f103c 	ldr	r1, [pc, #3c]	; c3940 <TFlashSeries2::GetWriteProtected(unsigned char *)+0xbc>
         c3900:	e5911000 	ldr	r1, [r1]
         c3904:	eb6c7e22 	bl	1be3194 <$Subexception>
         c3908:	e3300000 	teq	r0, #0	; 0x0
         c390c:	13a000b5 	movne	r0, #181	; 0xb5
         c3910:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c3914:	1a000006 	bne	c3934 <TFlashSeries2::GetWriteProtected(unsigned char *)+0xb0>
         c3918:	e59d0060 	ldr	r0, [sp, #96]
         c391c:	e59f1020 	ldr	r1, [pc, #20]	; c3944 <TFlashSeries2::GetWriteProtected(unsigned char *)+0xc0>	; fField20
         c3920:	e5911000 	ldr	r1, [r1]
         c3924:	eb6c7e1a 	bl	1be3194 <$Subexception>
         c3928:	e3300000 	teq	r0, #0	; 0x0
         c392c:	0a000006 	beq	c394c <TFlashSeries2::GetWriteProtected(unsigned char *)+0xc8>
         c3930:	e59f0010 	ldr	r0, [pc, #10]	; c3948 <TFlashSeries2::GetWriteProtected(unsigned char *)+0xc4>
         c3934:	e58d006c 	str	r0, [sp, #108]
         c3938:	ea000005 	b	c3954 <TFlashSeries2::GetWriteProtected(unsigned char *)+0xd0>
         c393c:	003712c4 	eoreqs	r1, r7, r4, asr #5
         c3940:	003712b8 	ldreqh	r1, [r7], -r8
         c3944:	003712c8 	eoreqs	r1, r7, r8, asr #5
         c3948:	ffffd8af 	swinv	0x00ffd8af
         c394c:	e1a0000d 	mov	r0, sp
         c3950:	eb6c79ff 	bl	1be2154 <$NextHandler>
         c3954:	e1a0000d 	mov	r0, sp
         c3958:	eb6c75d6 	bl	1be10b8 <$ExitHandler>
         c395c:	e5bd006c 	ldr	r0, [sp, #108]!
         c3960:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::ResetCard(void)
 * Address: 000c3964
 */
TFlashSeries2::ResetCard(void) {
    /*
         c3964:	e1a0c00d 	mov	ip, sp
         c3968:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c396c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3970:	e1a04000 	mov	r4, r0
         c3974:	eb69e947 	bl	1b3de98 <TFlashSeries2::$EnterFlashOperation(void)>
         c3978:	e5940048 	ldr	r0, [r4, #72]	; fField72
         c397c:	e3800003 	orr	r0, r0, #3	; 0x3
         c3980:	e5840048 	str	r0, [r4, #72]	; fField72
         c3984:	e1a00004 	mov	r0, r4
         c3988:	eb69e53a 	bl	1b3ce78 <TFlashSeries2::$CardInit(void)>
         c398c:	e1b05000 	movs	r5, r0
         c3990:	05940048 	ldreq	r0, [r4, #72]	; fField72
         c3994:	03c00001 	biceq	r0, r0, #1	; 0x1
         c3998:	05840048 	streq	r0, [r4, #72]	; fField72
         c399c:	e1a00004 	mov	r0, r4
         c39a0:	eb69e93d 	bl	1b3de9c <TFlashSeries2::$ExitFlashOperation(void)>
         c39a4:	e1a00005 	mov	r0, r5
         c39a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::EnterFlashOperation(void)
 * Address: 000c39ac
 */
TFlashSeries2::EnterFlashOperation(void) {
    /*
         c39ac:	e5901048 	ldr	r1, [r0, #72]	; fField72
         c39b0:	e3811004 	orr	r1, r1, #4	; 0x4
         c39b4:	e5801048 	str	r1, [r0, #72]	; fField72
         c39b8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         c39bc:	e3a01000 	mov	r1, #0	; 0x0
         c39c0:	ea6c60f4 	b	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
    */
}

/**
 * Symbol: TFlashSeries2::ExitFlashOperation(void)
 * Address: 000c39c4
 */
TFlashSeries2::ExitFlashOperation(void) {
    /*
         c39c4:	e1a0c00d 	mov	ip, sp
         c39c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c39cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c39d0:	e1a04000 	mov	r4, r0
         c39d4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         c39d8:	e3a0100a 	mov	r1, #10	; 0xa
         c39dc:	eb6c60ed 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         c39e0:	e5940048 	ldr	r0, [r4, #72]	; fField72
         c39e4:	e3c00004 	bic	r0, r0, #4	; 0x4
         c39e8:	e5a40048 	str	r0, [r4, #72]!	; fField72
         c39ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::Delete(void)
 * Address: 000c39f0
 */
TFlashSeries2::Delete(void) {
    /*
         c39f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::AcknowledgeReset(void)
 * Address: 000c39f4
 */
TFlashSeries2::AcknowledgeReset(void) {
    /*
         c39f4:	e5901048 	ldr	r1, [r0, #72]	; fField72
         c39f8:	e3c11002 	bic	r1, r1, #2	; 0x2
         c39fc:	e5a01048 	str	r1, [r0, #72]!	; fField72
         c3a00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::RegisterClientInfo(unsigned long)
 * Address: 000c3a04
 */
TFlashSeries2::RegisterClientInfo(unsigned long) {
    /*
         c3a04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetPhysResource(void)
 * Address: 000c3a08
 */
TFlashSeries2::GetPhysResource(void) {
    /*
         c3a08:	e3a00000 	mov	r0, #0	; 0x0
         c3a0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetSocketNumber(void)
 * Address: 000c3a10
 */
TFlashSeries2::GetSocketNumber(void) {
    /*
         c3a10:	e5900010 	ldr	r0, [r0, #16]	; fField16
         c3a14:	ea6c6508 	b	1bdce3c <TCardSocket::$SocketNumber(void)>
    */
}

/**
 * Symbol: TFlashSeries2::GetVendorInfo(void)
 * Address: 000c3a18
 */
TFlashSeries2::GetVendorInfo(void) {
    /*
         c3a18:	e590001c 	ldr	r0, [r0, #28]	; fField28
         c3a1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetAttributes(void)
 * Address: 000c3a20
 */
TFlashSeries2::GetAttributes(void) {
    /*
         c3a20:	e5900020 	ldr	r0, [r0, #32]	; fField32
         c3a24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetDataOffset(void)
 * Address: 000c3a28
 */
TFlashSeries2::GetDataOffset(void) {
    /*
         c3a28:	e5900038 	ldr	r0, [r0, #56]	; fField56
         c3a2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetWriteErrorAddress(void)
 * Address: 000c3a30
 */
TFlashSeries2::GetWriteErrorAddress(void) {
    /*
         c3a30:	e5900040 	ldr	r0, [r0, #64]	; fField64
         c3a34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetTotalSize(void)
 * Address: 000c3a38
 */
TFlashSeries2::GetTotalSize(void) {
    /*
         c3a38:	e5900034 	ldr	r0, [r0, #52]	; fField52
         c3a3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetGroupSize(void)
 * Address: 000c3a40
 */
TFlashSeries2::GetGroupSize(void) {
    /*
         c3a40:	e5901024 	ldr	r1, [r0, #36]	; fField36
         c3a44:	e5d0202d 	ldrb	r2, [r0, #45]	; fField45
         c3a48:	e0000192 	mul	r0, r2, r1
         c3a4c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)
 * Address: 000c3a50
 */
TFlashSeries2::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long) {
    /*
         c3a50:	e1a0c00d 	mov	ip, sp
         c3a54:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c3a58:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3a5c:	e1a04000 	mov	r4, r0
         c3a60:	e1a05002 	mov	r5, r2
         c3a64:	e3a00013 	mov	r0, #19	; 0x13
         c3a68:	e59b6004 	ldr	r6, [fp, #4]
         c3a6c:	e3310000 	teq	r1, #0	; 0x0
         c3a70:	e5840048 	str	r0, [r4, #72]	; fField72
         c3a74:	13350000 	teqne	r5, #0	; 0x0
         c3a78:	03a000ea 	moveq	r0, #234	; 0xea
         c3a7c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         c3a80:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         c3a84:	e5841010 	str	r1, [r4, #16]	; fField16
         c3a88:	e1a00001 	mov	r0, r1
         c3a8c:	eb6c2f47 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         c3a90:	e5951010 	ldr	r1, [r5, #16]	; fField16
         c3a94:	e0800001 	add	r0, r0, r1
         c3a98:	e1a02006 	mov	r2, r6
         c3a9c:	e1a01005 	mov	r1, r5
         c3aa0:	e5840014 	str	r0, [r4, #20]	; fField20
         c3aa4:	e1a00004 	mov	r0, r4
         c3aa8:	eb69e4ee 	bl	1b3ce68 <TFlashSeries2::$IdentifyCard(TCardPCMCIA *, unsigned long)>
         c3aac:	e3300000 	teq	r0, #0	; 0x0
         c3ab0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         c3ab4:	e1a00004 	mov	r0, r4
         c3ab8:	eb69e4ee 	bl	1b3ce78 <TFlashSeries2::$CardInit(void)>
         c3abc:	e3300000 	teq	r0, #0	; 0x0
         c3ac0:	05941048 	ldreq	r1, [r4, #72]	; fField72
         c3ac4:	03c11001 	biceq	r1, r1, #1	; 0x1
         c3ac8:	05a41048 	streq	r1, [r4, #72]!	; fField72
         c3acc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::GetEraseRegionSize(void)
 * Address: 000c3ad0
 */
TFlashSeries2::GetEraseRegionSize(void) {
    /*
         c3ad0:	e5901028 	ldr	r1, [r0, #40]	; fField40
         c3ad4:	e5d0202d 	ldrb	r2, [r0, #45]	; fField45
         c3ad8:	e0000192 	mul	r0, r2, r1
         c3adc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetChipsPerGroup(void)
 * Address: 000c3ae0
 */
TFlashSeries2::GetChipsPerGroup(void) {
    /*
         c3ae0:	e5d0002d 	ldrb	r0, [r0, #45]	; fField45
         c3ae4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetBlocksPerPartition(void)
 * Address: 000c3ae8
 */
TFlashSeries2::GetBlocksPerPartition(void) {
    /*
         c3ae8:	e5d0002e 	ldrb	r0, [r0, #46]	; fField46
         c3aec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetMaxConcurrentVppOps(void)
 * Address: 000c3af0
 */
TFlashSeries2::GetMaxConcurrentVppOps(void) {
    /*
         c3af0:	e1a0c00d 	mov	ip, sp
         c3af4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         c3af8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3afc:	e5900010 	ldr	r0, [r0, #16]	; fField16
         c3b00:	eb6c6cff 	bl	1bdef04 <TCardSocket::$VppMaxCurrent(void)>
         c3b04:	e1a01000 	mov	r1, r0
         c3b08:	e59f0004 	ldr	r0, [pc, #4]	; c3b14 <TFlashSeries2::GetMaxConcurrentVppOps(void)+0x24>
         c3b0c:	e91b6800 	ldmdb	fp, {fp, sp, lr}
         c3b10:	ea6bbb8c 	b	1bb2948 <$__rt_udiv>
         c3b14:	03938700 	orreqs	r8, r3, #0	; 0x0
    */
}

/**
 * Symbol: TFlashSeries2::GetEraseRegionCurrent(void)
 * Address: 000c3b18
 */
TFlashSeries2::GetEraseRegionCurrent(void) {
    /*
         c3b18:	e59f0000 	ldr	r0, [pc, #0]	; c3b20 <TFlashSeries2::GetEraseRegionCurrent(void)+0x8>
         c3b1c:	e1a0f00e 	mov	pc, lr
         c3b20:	03938700 	orreqs	r8, r3, #0	; 0x0
    */
}

/**
 * Symbol: TFlashSeries2::GetWriteRegionCurrent(void)
 * Address: 000c3b24
 */
TFlashSeries2::GetWriteRegionCurrent(void) {
    /*
         c3b24:	e59f0000 	ldr	r0, [pc, #0]	; c3b2c <TFlashSeries2::GetWriteRegionCurrent(void)+0x8>
         c3b28:	e1a0f00e 	mov	pc, lr
         c3b2c:	03938700 	orreqs	r8, r3, #0	; 0x0
    */
}

/**
 * Symbol: TFlashSeries2::GetEraseRegionTime(void)
 * Address: 000c3b30
 */
TFlashSeries2::GetEraseRegionTime(void) {
    /*
         c3b30:	e59f0000 	ldr	r0, [pc, #0]	; c3b38 <TFlashSeries2::GetEraseRegionTime(void)+0x8>
         c3b34:	e1a0f00e 	mov	pc, lr
         c3b38:	5f5e1000 	swipl	0x005e1000
    */
}

/**
 * Symbol: TFlashSeries2::GetWriteAccessTime(void)
 * Address: 000c3b3c
 */
TFlashSeries2::GetWriteAccessTime(void) {
    /*
         c3b3c:	e3a00ffa 	mov	r0, #1000	; 0x3e8
         c3b40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::GetReadAccessTime(void)
 * Address: 000c3b44
 */
TFlashSeries2::GetReadAccessTime(void) {
    /*
         c3b44:	e590003c 	ldr	r0, [r0, #60]	; fField60
         c3b48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::VppRisingTime(void)
 * Address: 000c3b4c
 */
TFlashSeries2::VppRisingTime(void) {
    /*
         c3b4c:	e5901020 	ldr	r1, [r0, #32]	; fField32
         c3b50:	e3110010 	tst	r1, #16	; 0x10
         c3b54:	05900010 	ldreq	r0, [r0, #16]	; fField16
         c3b58:	0a6c6cf1 	beq	1bdef24 <TCardSocket::$VppRisingTime(void)>
         c3b5c:	13a00000 	movne	r0, #0	; 0x0
         c3b60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::SuspendService(void)
 * Address: 000c3b64
 */
TFlashSeries2::SuspendService(void) {
    /*
         c3b64:	e3a00000 	mov	r0, #0	; 0x0
         c3b68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::VppStatus(void)
 * Address: 000c3b6c
 */
TFlashSeries2::VppStatus(void) {
    /*
         c3b6c:	e3a00000 	mov	r0, #0	; 0x0
         c3b70:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::ChipSendCommand(unsigned long, unsigned long)
 * Address: 000c3b74
 */
TFlashSeries2::ChipSendCommand(unsigned long, unsigned long) {
    /*
         c3b74:	e1a00802 	mov	r0, r2, lsl #16
         c3b78:	e3c11003 	bic	r1, r1, #3	; 0x3
         c3b7c:	e5810000 	str	r0, [r1]
         c3b80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::ChipSendCommandByte(unsigned long, unsigned long)
 * Address: 000c3b84
 */
TFlashSeries2::ChipSendCommandByte(unsigned long, unsigned long) {
    /*
         c3b84:	e5c12000 	strb	r2, [r1]
         c3b88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::ChipReadStatus(unsigned long)
 * Address: 000c3b8c
 */
TFlashSeries2::ChipReadStatus(unsigned long) {
    /*
         c3b8c:	e1a0c00d 	mov	ip, sp
         c3b90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c3b94:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3b98:	e1a04001 	mov	r4, r1
         c3b9c:	e3a02070 	mov	r2, #112	; 0x70
         c3ba0:	e2822a07 	add	r2, r2, #28672	; 0x7000
         c3ba4:	eb69e8b7 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c3ba8:	e3c40003 	bic	r0, r4, #3	; 0x3
         c3bac:	e5900000 	ldr	r0, [r0]
         c3bb0:	e1a00820 	mov	r0, r0, lsr #16
         c3bb4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::ChipWaitReady(unsigned long, unsigned char)
 * Address: 000c3bb8
 */
TFlashSeries2::ChipWaitReady(unsigned long, unsigned char) {
    /*
         c3bb8:	e1a0c00d 	mov	ip, sp
         c3bbc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c3bc0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3bc4:	e1a05000 	mov	r5, r0
         c3bc8:	e1a04001 	mov	r4, r1
         c3bcc:	e20260ff 	and	r6, r2, #255	; 0xff
         c3bd0:	eb69e8ab 	bl	1b3de84 <TFlashSeries2::$ChipReadStatus(unsigned long)>
         c3bd4:	e1a00800 	mov	r0, r0, lsl #16
         c3bd8:	e1a00820 	mov	r0, r0, lsr #16
         c3bdc:	e3c00c7f 	bic	r0, r0, #32512	; 0x7f00
         c3be0:	e3c0007f 	bic	r0, r0, #127	; 0x7f
         c3be4:	e3a08080 	mov	r8, #128	; 0x80
         c3be8:	e2888902 	add	r8, r8, #32768	; 0x8000
         c3bec:	e1300008 	teq	r0, r8
         c3bf0:	03a00001 	moveq	r0, #1	; 0x1
         c3bf4:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         c3bf8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         c3bfc:	e1a0000d 	mov	r0, sp
         c3c00:	eb6ce8b1 	bl	1bfdecc <TDelayTimer::$__ct(void)>
         c3c04:	e1a0000d 	mov	r0, sp
         c3c08:	e3a01a35 	mov	r1, #217088	; 0x35000
         c3c0c:	e2811503 	add	r1, r1, #12582912	; 0xc00000
         c3c10:	eb6ce8b2 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
         c3c14:	e1a0000d 	mov	r0, sp
         c3c18:	eb6ce8b2 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
         c3c1c:	e1a07000 	mov	r7, r0
         c3c20:	e1a01004 	mov	r1, r4
         c3c24:	e1a00005 	mov	r0, r5
         c3c28:	eb69e895 	bl	1b3de84 <TFlashSeries2::$ChipReadStatus(unsigned long)>
         c3c2c:	e1a00800 	mov	r0, r0, lsl #16
         c3c30:	e1a00820 	mov	r0, r0, lsr #16
         c3c34:	e3c00c7f 	bic	r0, r0, #32512	; 0x7f00
         c3c38:	e3c0007f 	bic	r0, r0, #127	; 0x7f
         c3c3c:	e1300008 	teq	r0, r8
         c3c40:	13a00000 	movne	r0, #0	; 0x0
         c3c44:	03a00001 	moveq	r0, #1	; 0x1
         c3c48:	e3360000 	teq	r6, #0	; 0x0
         c3c4c:	1a000002 	bne	c3c5c <TFlashSeries2::ChipWaitReady(unsigned long, unsigned char)+0xa4>
         c3c50:	e3300000 	teq	r0, #0	; 0x0
         c3c54:	13a00000 	movne	r0, #0	; 0x0
         c3c58:	03a00001 	moveq	r0, #1	; 0x1
         c3c5c:	e3300000 	teq	r0, #0	; 0x0
         c3c60:	03370000 	teqeq	r7, #0	; 0x0
         c3c64:	0affffea 	beq	c3c14 <TFlashSeries2::ChipWaitReady(unsigned long, unsigned char)+0x5c>
         c3c68:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::ChipReadID(unsigned long, unsigned long)
 * Address: 000c3c6c
 */
TFlashSeries2::ChipReadID(unsigned long, unsigned long) {
    /*
         c3c6c:	e1a0c00d 	mov	ip, sp
         c3c70:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c3c74:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3c78:	e1a06000 	mov	r6, r0
         c3c7c:	e1a04001 	mov	r4, r1
         c3c80:	e1b05002 	movs	r5, r2
         c3c84:	1a000004 	bne	c3c9c <TFlashSeries2::ChipReadID(unsigned long, unsigned long)+0x30>
         c3c88:	e1a01004 	mov	r1, r4
         c3c8c:	e1a00006 	mov	r0, r6
         c3c90:	e3a02090 	mov	r2, #144	; 0x90
         c3c94:	e2822a09 	add	r2, r2, #36864	; 0x9000
         c3c98:	eb69e87a 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c3c9c:	e3c44003 	bic	r4, r4, #3	; 0x3
         c3ca0:	e2840002 	add	r0, r4, #2	; 0x2
         c3ca4:	e2200003 	eor	r0, r0, #3	; 0x3
         c3ca8:	e5d00000 	ldrb	r0, [r0]
         c3cac:	e2241003 	eor	r1, r4, #3	; 0x3
         c3cb0:	e5d11000 	ldrb	r1, [r1]
         c3cb4:	e0807401 	add	r7, r0, r1, lsl #8
         c3cb8:	e3350000 	teq	r5, #0	; 0x0
         c3cbc:	1a000004 	bne	c3cd4 <TFlashSeries2::ChipReadID(unsigned long, unsigned long)+0x68>
         c3cc0:	e1a01004 	mov	r1, r4
         c3cc4:	e1a00006 	mov	r0, r6
         c3cc8:	e3a02801 	mov	r2, #65536	; 0x10000
         c3ccc:	e2422001 	sub	r2, r2, #1	; 0x1
         c3cd0:	eb69e86c 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c3cd4:	e1a00007 	mov	r0, r7
         c3cd8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::CheckStatus(unsigned long)
 * Address: 000c3cdc
 */
TFlashSeries2::CheckStatus(unsigned long) {
    /*
         c3cdc:	e1a0c00d 	mov	ip, sp
         c3ce0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c3ce4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3ce8:	e1a05000 	mov	r5, r0
         c3cec:	e1a04001 	mov	r4, r1
         c3cf0:	eb69e45a 	bl	1b3ce60 <TFlashSeries2::$ChipCheckError(unsigned long)>
         c3cf4:	e3300000 	teq	r0, #0	; 0x0
         c3cf8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         c3cfc:	e1a01004 	mov	r1, r4
         c3d00:	e1a00005 	mov	r0, r5
         c3d04:	eb69e85e 	bl	1b3de84 <TFlashSeries2::$ChipReadStatus(unsigned long)>
         c3d08:	e1a01800 	mov	r1, r0, lsl #16
         c3d0c:	e1a01821 	mov	r1, r1, lsr #16
         c3d10:	e3c11cbf 	bic	r1, r1, #48896	; 0xbf00
         c3d14:	e3d110bf 	bics	r1, r1, #191	; 0xbf
         c3d18:	13a00004 	movne	r0, #4	; 0x4
         c3d1c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         c3d20:	e1a00800 	mov	r0, r0, lsl #16
         c3d24:	e1a00820 	mov	r0, r0, lsr #16
         c3d28:	e3c00c7f 	bic	r0, r0, #32512	; 0x7f00
         c3d2c:	e3c0007f 	bic	r0, r0, #127	; 0x7f
         c3d30:	e240c902 	sub	ip, r0, #32768	; 0x8000
         c3d34:	e33c0080 	teq	ip, #128	; 0x80
         c3d38:	13a00003 	movne	r0, #3	; 0x3
         c3d3c:	03a00001 	moveq	r0, #1	; 0x1
         c3d40:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::ChipCheckError(unsigned long)
 * Address: 000c3d44
 */
TFlashSeries2::ChipCheckError(unsigned long) {
    /*
         c3d44:	e1a0c00d 	mov	ip, sp
         c3d48:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c3d4c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3d50:	e1a05000 	mov	r5, r0
         c3d54:	e1a04001 	mov	r4, r1
         c3d58:	e3a06000 	mov	r6, #0	; 0x0
         c3d5c:	eb69e848 	bl	1b3de84 <TFlashSeries2::$ChipReadStatus(unsigned long)>
         c3d60:	e1a01800 	mov	r1, r0, lsl #16
         c3d64:	e1a01821 	mov	r1, r1, lsr #16
         c3d68:	e3c11cc7 	bic	r1, r1, #50944	; 0xc700
         c3d6c:	e3d110c7 	bics	r1, r1, #199	; 0xc7
         c3d70:	0a000017 	beq	c3dd4 <TFlashSeries2::ChipCheckError(unsigned long)+0x90>
         c3d74:	e1a01800 	mov	r1, r0, lsl #16
         c3d78:	e1a01821 	mov	r1, r1, lsr #16
         c3d7c:	e3c11cf7 	bic	r1, r1, #63232	; 0xf700
         c3d80:	e3d110f7 	bics	r1, r1, #247	; 0xf7
         c3d84:	159f6050 	ldrne	r6, [pc, #50]	; c3ddc <TFlashSeries2::ChipCheckError(unsigned long)+0x98>
         c3d88:	1a00000c 	bne	c3dc0 <TFlashSeries2::ChipCheckError(unsigned long)+0x7c>
         c3d8c:	e1a01800 	mov	r1, r0, lsl #16
         c3d90:	e1a01821 	mov	r1, r1, lsr #16
         c3d94:	e3c11cdf 	bic	r1, r1, #57088	; 0xdf00
         c3d98:	e3d110df 	bics	r1, r1, #223	; 0xdf
         c3d9c:	13e0603a 	mvnne	r6, #58	; 0x3a
         c3da0:	12466c29 	subne	r6, r6, #10496	; 0x2900
         c3da4:	1a000005 	bne	c3dc0 <TFlashSeries2::ChipCheckError(unsigned long)+0x7c>
         c3da8:	e1a00800 	mov	r0, r0, lsl #16
         c3dac:	e1a00820 	mov	r0, r0, lsr #16
         c3db0:	e3c00cef 	bic	r0, r0, #61184	; 0xef00
         c3db4:	e3d000ef 	bics	r0, r0, #239	; 0xef
         c3db8:	13e0603b 	mvnne	r6, #59	; 0x3b
         c3dbc:	12466c29 	subne	r6, r6, #10496	; 0x2900
         c3dc0:	e1a01004 	mov	r1, r4
         c3dc4:	e1a00005 	mov	r0, r5
         c3dc8:	e3a02050 	mov	r2, #80	; 0x50
         c3dcc:	e2822a05 	add	r2, r2, #20480	; 0x5000
         c3dd0:	eb69e82c 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c3dd4:	e1a00006 	mov	r0, r6
         c3dd8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c3ddc:	ffffd6c3 	swinv	0x00ffd6c3
    */
}

/**
 * Symbol: TFlashSeries2::CheckWriteProtected(void)
 * Address: 000c3de0
 */
TFlashSeries2::CheckWriteProtected(void) {
    /*
         c3de0:	e1a0c00d 	mov	ip, sp
         c3de4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c3de8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3dec:	e1a04000 	mov	r4, r0
         c3df0:	e5900010 	ldr	r0, [r0, #16]	; fField16
         c3df4:	eb6c4b45 	bl	1bd6b10 <TCardSocket::$IsIOInteface(void)>
         c3df8:	e3300000 	teq	r0, #0	; 0x0
         c3dfc:	13a00000 	movne	r0, #0	; 0x0
         c3e00:	1a000001 	bne	c3e0c <TFlashSeries2::CheckWriteProtected(void)+0x2c>
         c3e04:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         c3e08:	eb6c4b4a 	bl	1bd6b38 <TCardSocket::$IsWriteProtected(void)>
         c3e0c:	e20000ff 	and	r0, r0, #255	; 0xff
         c3e10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::CardInit(void)
 * Address: 000c3e14
 */
TFlashSeries2::CardInit(void) {
    /*
         c3e14:	e1a0c00d 	mov	ip, sp
         c3e18:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c3e1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3e20:	e1a04000 	mov	r4, r0
         c3e24:	e3a00000 	mov	r0, #0	; 0x0
         c3e28:	e52d0004 	str	r0, [sp, -#4]!
         c3e2c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c3e30:	eb6c6401 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         c3e34:	e3a01000 	mov	r1, #0	; 0x0
         c3e38:	eb6c6826 	bl	1bdded8 <$VccOn(int, unsigned char)>
         c3e3c:	e3a00000 	mov	r0, #0	; 0x0
         c3e40:	e52d006c 	str	r0, [sp, -#108]!
         c3e44:	e28d0008 	add	r0, sp, #8	; 0x8
         c3e48:	eb6bbac9 	bl	1bb2974 <$setjmp>
         c3e4c:	e3300000 	teq	r0, #0	; 0x0
         c3e50:	1a00002d 	bne	c3f0c <TFlashSeries2::CardInit(void)+0xf8>
         c3e54:	e1a0000d 	mov	r0, sp
         c3e58:	eb6c7087 	bl	1be007c <$AddExceptionHandler>
         c3e5c:	e5940048 	ldr	r0, [r4, #72]	; fField72
         c3e60:	e3800002 	orr	r0, r0, #2	; 0x2
         c3e64:	e5840048 	str	r0, [r4, #72]	; fField72
         c3e68:	e3a01000 	mov	r1, #0	; 0x0
         c3e6c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c3e70:	eb6c5fc8 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         c3e74:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c3e78:	eb6c4f5b 	bl	1bd7bec <TCardSocket::$PCMCIAReset(void)>
         c3e7c:	e3a00a09 	mov	r0, #36864	; 0x9000
         c3e80:	e2400004 	sub	r0, r0, #4	; 0x4
         c3e84:	eb6c63e8 	bl	1bdce2c <$Sleep(unsigned long)>
         c3e88:	e1a00004 	mov	r0, r4
         c3e8c:	eb69e7fb 	bl	1b3de80 <TFlashSeries2::$CheckWriteProtected(void)>
         c3e90:	e3300000 	teq	r0, #0	; 0x0
         c3e94:	1a00003b 	bne	c3f88 <TFlashSeries2::CardInit(void)+0x174>
         c3e98:	e1a00004 	mov	r0, r4
         c3e9c:	eb69e3f0 	bl	1b3ce64 <TFlashSeries2::$CardEnableVppGenerator(void)>
         c3ea0:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c3ea4:	e5947018 	ldr	r7, [r4, #24]	; fField24
         c3ea8:	e5d4002d 	ldrb	r0, [r4, #45]	; fField45
         c3eac:	e0090190 	mul	r9, r0, r1
         c3eb0:	e3a08000 	mov	r8, #0	; 0x0
         c3eb4:	e5d4002c 	ldrb	r0, [r4, #44]	; fField44
         c3eb8:	e3500000 	cmp	r0, #0	; 0x0
         c3ebc:	9a000031 	bls	c3f88 <TFlashSeries2::CardInit(void)+0x174>
         c3ec0:	e3a06050 	mov	r6, #80	; 0x50
         c3ec4:	e2866a05 	add	r6, r6, #20480	; 0x5000
         c3ec8:	e3a05801 	mov	r5, #65536	; 0x10000
         c3ecc:	e2455001 	sub	r5, r5, #1	; 0x1
         c3ed0:	e1a01007 	mov	r1, r7
         c3ed4:	e1a00004 	mov	r0, r4
         c3ed8:	e1a02006 	mov	r2, r6
         c3edc:	eb69e7e9 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c3ee0:	e1a01007 	mov	r1, r7
         c3ee4:	e1a00004 	mov	r0, r4
         c3ee8:	e1a02005 	mov	r2, r5
         c3eec:	eb69e7e5 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c3ef0:	e0877009 	add	r7, r7, r9
         c3ef4:	e5d4002d 	ldrb	r0, [r4, #45]	; fField45
         c3ef8:	e0808008 	add	r8, r0, r8
         c3efc:	e5d4002c 	ldrb	r0, [r4, #44]	; fField44
         c3f00:	e1500008 	cmp	r0, r8
         c3f04:	8afffff1 	bhi	c3ed0 <TFlashSeries2::CardInit(void)+0xbc>
         c3f08:	ea00001e 	b	c3f88 <TFlashSeries2::CardInit(void)+0x174>
         c3f0c:	e59d0060 	ldr	r0, [sp, #96]
         c3f10:	e59f1058 	ldr	r1, [pc, #58]	; c3f70 <TFlashSeries2::CardInit(void)+0x15c>
         c3f14:	e5911000 	ldr	r1, [r1]
         c3f18:	eb6c7c9d 	bl	1be3194 <$Subexception>
         c3f1c:	e3300000 	teq	r0, #0	; 0x0
         c3f20:	13a000b4 	movne	r0, #180	; 0xb4
         c3f24:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c3f28:	1a00000e 	bne	c3f68 <TFlashSeries2::CardInit(void)+0x154>
         c3f2c:	e59d0060 	ldr	r0, [sp, #96]
         c3f30:	e59f103c 	ldr	r1, [pc, #3c]	; c3f74 <TFlashSeries2::CardInit(void)+0x160>
         c3f34:	e5911000 	ldr	r1, [r1]
         c3f38:	eb6c7c95 	bl	1be3194 <$Subexception>
         c3f3c:	e3300000 	teq	r0, #0	; 0x0
         c3f40:	13a000b5 	movne	r0, #181	; 0xb5
         c3f44:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c3f48:	1a000006 	bne	c3f68 <TFlashSeries2::CardInit(void)+0x154>
         c3f4c:	e59d0060 	ldr	r0, [sp, #96]
         c3f50:	e59f1020 	ldr	r1, [pc, #20]	; c3f78 <TFlashSeries2::CardInit(void)+0x164>	; fField20
         c3f54:	e5911000 	ldr	r1, [r1]
         c3f58:	eb6c7c8d 	bl	1be3194 <$Subexception>
         c3f5c:	e3300000 	teq	r0, #0	; 0x0
         c3f60:	0a000006 	beq	c3f80 <TFlashSeries2::CardInit(void)+0x16c>
         c3f64:	e59f0010 	ldr	r0, [pc, #10]	; c3f7c <TFlashSeries2::CardInit(void)+0x168>
         c3f68:	e58d006c 	str	r0, [sp, #108]
         c3f6c:	ea000005 	b	c3f88 <TFlashSeries2::CardInit(void)+0x174>
         c3f70:	003712c4 	eoreqs	r1, r7, r4, asr #5
         c3f74:	003712b8 	ldreqh	r1, [r7], -r8
         c3f78:	003712c8 	eoreqs	r1, r7, r8, asr #5
         c3f7c:	ffffd8af 	swinv	0x00ffd8af
         c3f80:	e1a0000d 	mov	r0, sp
         c3f84:	eb6c7872 	bl	1be2154 <$NextHandler>
         c3f88:	e1a0000d 	mov	r0, sp
         c3f8c:	eb6c7449 	bl	1be10b8 <$ExitHandler>
         c3f90:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c3f94:	e3a0100a 	mov	r1, #10	; 0xa
         c3f98:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c3f9c:	eb6c5f7d 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         c3fa0:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         c3fa4:	eb6c63a4 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         c3fa8:	eb6c67c7 	bl	1bddecc <$VccOff(int)>
         c3fac:	e49d0004 	ldr	r0, [sp], #4
         c3fb0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 000c3fb4
 */
TFlashSeries2::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long) {
    /*
         c3fb4:	e3a00000 	mov	r0, #0	; 0x0
         c3fb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::CardEnableVppGenerator(void)
 * Address: 000c3fbc
 */
TFlashSeries2::CardEnableVppGenerator(void) {
    /*
         c3fbc:	e1a0c00d 	mov	ip, sp
         c3fc0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c3fc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3fc8:	e1a04000 	mov	r4, r0
         c3fcc:	e3a00000 	mov	r0, #0	; 0x0
         c3fd0:	e52d0004 	str	r0, [sp, -#4]!
         c3fd4:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c3fd8:	e3300000 	teq	r0, #0	; 0x0
         c3fdc:	0a000033 	beq	c40b0 <TFlashSeries2::CardEnableVppGenerator(void)+0xf4>
         c3fe0:	eb6d1112 	bl	1c08430 <TCardSocket::$VppVoltageSpec(void)>
         c3fe4:	e3100002 	tst	r0, #2	; 0x2
         c3fe8:	0594001c 	ldreq	r0, [r4, #28]	; fField28
         c3fec:	0240cc89 	subeq	ip, r0, #35072	; 0x8900
         c3ff0:	033c00a0 	teqeq	ip, #160	; 0xa0
         c3ff4:	1a00002d 	bne	c40b0 <TFlashSeries2::CardEnableVppGenerator(void)+0xf4>
         c3ff8:	e1a00004 	mov	r0, r4
         c3ffc:	eb69e79f 	bl	1b3de80 <TFlashSeries2::$CheckWriteProtected(void)>
         c4000:	e3300000 	teq	r0, #0	; 0x0
         c4004:	1a000029 	bne	c40b0 <TFlashSeries2::CardEnableVppGenerator(void)+0xf4>
         c4008:	e3a00000 	mov	r0, #0	; 0x0
         c400c:	e52d006c 	str	r0, [sp, -#108]!
         c4010:	e28d0008 	add	r0, sp, #8	; 0x8
         c4014:	eb6bba56 	bl	1bb2974 <$setjmp>
         c4018:	e3300000 	teq	r0, #0	; 0x0
         c401c:	1a00001d 	bne	c4098 <TFlashSeries2::CardEnableVppGenerator(void)+0xdc>
         c4020:	e1a0000d 	mov	r0, sp
         c4024:	eb6c7014 	bl	1be007c <$AddExceptionHandler>
         c4028:	e3a00001 	mov	r0, #1	; 0x1
         c402c:	e5b41014 	ldr	r1, [r4, #20]!	; fField20
         c4030:	e2811f43 	add	r1, r1, #268	; 0x10c
         c4034:	e2214003 	eor	r4, r1, #3	; 0x3
         c4038:	e5d41000 	ldrb	r1, [r4]
         c403c:	e1810000 	orr	r0, r1, r0
         c4040:	e5c40000 	strb	r0, [r4]
         c4044:	e24dd00c 	sub	sp, sp, #12	; 0xc
         c4048:	e3a05000 	mov	r5, #0	; 0x0
         c404c:	e1a0000d 	mov	r0, sp
         c4050:	eb6ce79d 	bl	1bfdecc <TDelayTimer::$__ct(void)>
         c4054:	e1a0000d 	mov	r0, sp
         c4058:	e3a01c35 	mov	r1, #13568	; 0x3500
         c405c:	e2811703 	add	r1, r1, #786432	; 0xc0000
         c4060:	eb6ce79e 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
         c4064:	e5d40000 	ldrb	r0, [r4]
         c4068:	e3100002 	tst	r0, #2	; 0x2
         c406c:	1a000003 	bne	c4080 <TFlashSeries2::CardEnableVppGenerator(void)+0xc4>
         c4070:	e1a0000d 	mov	r0, sp
         c4074:	eb6ce79b 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
         c4078:	e1b05000 	movs	r5, r0
         c407c:	0afffff8 	beq	c4064 <TFlashSeries2::CardEnableVppGenerator(void)+0xa8>
         c4080:	e3350000 	teq	r5, #0	; 0x0
         c4084:	13a000ae 	movne	r0, #174	; 0xae
         c4088:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c408c:	158d0078 	strne	r0, [sp, #120]
         c4090:	e28dd00c 	add	sp, sp, #12	; 0xc
         c4094:	ea000002 	b	c40a4 <TFlashSeries2::CardEnableVppGenerator(void)+0xe8>
         c4098:	e3a000b5 	mov	r0, #181	; 0xb5
         c409c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         c40a0:	e58d006c 	str	r0, [sp, #108]
         c40a4:	e1a0000d 	mov	r0, sp
         c40a8:	eb6c7402 	bl	1be10b8 <$ExitHandler>
         c40ac:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c40b0:	e49d0004 	ldr	r0, [sp], #4
         c40b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::FlashSpecific(unsigned long, void *, unsigned long)
 * Address: 000c40b8
 */
TFlashSeries2::FlashSpecific(unsigned long, void *, unsigned long) {
    /*
         c40b8:	e3310000 	teq	r1, #0	; 0x0
         c40bc:	0a000003 	beq	c40d0 <TFlashSeries2::FlashSpecific(unsigned long, void *, unsigned long)+0x18>
         c40c0:	e3310001 	teq	r1, #1	; 0x1
         c40c4:	0a69e366 	beq	1b3ce64 <TFlashSeries2::$CardEnableVppGenerator(void)>
         c40c8:	13a00000 	movne	r0, #0	; 0x0
         c40cc:	e1a0f00e 	mov	pc, lr
         c40d0:	e1a01003 	mov	r1, r3
         c40d4:	e5802010 	str	r2, [r0, #16]	; fField16
         c40d8:	e3e02000 	mvn	r2, #0	; 0x0
         c40dc:	ea69e361 	b	1b3ce68 <TFlashSeries2::$IdentifyCard(TCardPCMCIA *, unsigned long)>
    */
}

/**
 * Symbol: TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)
 * Address: 000c40e0
 */
TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long) {
    /*
         c40e0:	e1a0c00d 	mov	ip, sp
         c40e4:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c40e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c40ec:	e1a04000 	mov	r4, r0
         c40f0:	e1a05001 	mov	r5, r1
         c40f4:	e3a00000 	mov	r0, #0	; 0x0
         c40f8:	e3a06000 	mov	r6, #0	; 0x0
         c40fc:	e52d0004 	str	r0, [sp, -#4]!
         c4100:	e52d606c 	str	r6, [sp, -#108]!
         c4104:	e28d0008 	add	r0, sp, #8	; 0x8
         c4108:	eb6bba19 	bl	1bb2974 <$setjmp>
         c410c:	e3300000 	teq	r0, #0	; 0x0
         c4110:	1a000117 	bne	c4574 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x494>
         c4114:	e1a0000d 	mov	r0, sp
         c4118:	eb6c6fd7 	bl	1be007c <$AddExceptionHandler>
         c411c:	e3a00000 	mov	r0, #0	; 0x0
         c4120:	e584001c 	str	r0, [r4, #28]	; fField28
         c4124:	e1a00005 	mov	r0, r5
         c4128:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
         c412c:	eb6c3e15 	bl	1bd3988 <TCardPCMCIA::$GetCardDevice(unsigned long const)>
         c4130:	e1b06000 	movs	r6, r0
         c4134:	0a000003 	beq	c4148 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x68>
         c4138:	e5d61016 	ldrb	r1, [r6, #22]
         c413c:	e5d60015 	ldrb	r0, [r6, #21]
         c4140:	e0810400 	add	r0, r1, r0, lsl #8
         c4144:	e584001c 	str	r0, [r4, #28]	; fField28
         c4148:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c414c:	eb6c31b7 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         c4150:	e1a07000 	mov	r7, r0
         c4154:	e594001c 	ldr	r0, [r4, #28]	; fField28
         c4158:	e3300000 	teq	r0, #0	; 0x0
         c415c:	1a000010 	bne	c41a4 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0xc4>
         c4160:	e1a00004 	mov	r0, r4
         c4164:	eb69e745 	bl	1b3de80 <TFlashSeries2::$CheckWriteProtected(void)>
         c4168:	e3300000 	teq	r0, #0	; 0x0
         c416c:	1a00000c 	bne	c41a4 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0xc4>
         c4170:	e3a01000 	mov	r1, #0	; 0x0
         c4174:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c4178:	eb6c5f06 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         c417c:	e3360000 	teq	r6, #0	; 0x0
         c4180:	15960000 	ldrne	r0, [r6]
         c4184:	10877000 	addne	r7, r7, r0
         c4188:	e5978000 	ldr	r8, [r7]
         c418c:	e1a01007 	mov	r1, r7
         c4190:	e1a00004 	mov	r0, r4
         c4194:	e3a02000 	mov	r2, #0	; 0x0
         c4198:	eb69e32f 	bl	1b3ce5c <TFlashSeries2::$ChipReadID(unsigned long, unsigned long)>
         c419c:	e584001c 	str	r0, [r4, #28]	; fField28
         c41a0:	e5878000 	str	r8, [r7]
         c41a4:	e3a0100a 	mov	r1, #10	; 0xa
         c41a8:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c41ac:	eb6c5ef9 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         c41b0:	eb69d6cb 	bl	1b39ce4 <$PatchPoint(void)>
         c41b4:	e3a08064 	mov	r8, #100	; 0x64
         c41b8:	e3a09001 	mov	r9, #1	; 0x1
         c41bc:	e594001c 	ldr	r0, [r4, #28]	; fField28
         c41c0:	e250cc89 	subs	ip, r0, #35072	; 0x8900
         c41c4:	a35c00a7 	cmpge	ip, #167	; 0xa7
         c41c8:	03a00008 	moveq	r0, #8	; 0x8
         c41cc:	0a00001b 	beq	c4240 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x160>
         c41d0:	ca00000b 	bgt	c4204 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x124>
         c41d4:	e240cc89 	sub	ip, r0, #35072	; 0x8900
         c41d8:	e33c00a0 	teq	ip, #160	; 0xa0
         c41dc:	0a000015 	beq	c4238 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x158>
         c41e0:	e240cc89 	sub	ip, r0, #35072	; 0x8900
         c41e4:	e33c00a1 	teq	ip, #161	; 0xa1
         c41e8:	1240cc89 	subne	ip, r0, #35072	; 0x8900
         c41ec:	133c00a2 	teqne	ip, #162	; 0xa2
         c41f0:	0a00000c 	beq	c4228 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x148>
         c41f4:	e240cc89 	sub	ip, r0, #35072	; 0x8900
         c41f8:	e33c00a6 	teq	ip, #166	; 0xa6
         c41fc:	1a000011 	bne	c4248 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x168>
         c4200:	ea00000a 	b	c4230 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x150>
         c4204:	e240cc89 	sub	ip, r0, #35072	; 0x8900
         c4208:	e33c00aa 	teq	ip, #170	; 0xaa
         c420c:	1240ca0b 	subne	ip, r0, #45056	; 0xb000
         c4210:	133c0088 	teqne	ip, #136	; 0x88
         c4214:	0a000008 	beq	c423c <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x15c>
         c4218:	e240ca0b 	sub	ip, r0, #45056	; 0xb000
         c421c:	e33c00a8 	teq	ip, #168	; 0xa8
         c4220:	1a000008 	bne	c4248 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x168>
         c4224:	ea000001 	b	c4230 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x150>
         c4228:	e3a080fa 	mov	r8, #250	; 0xfa
         c422c:	e3a09003 	mov	r9, #3	; 0x3
         c4230:	e3a00010 	mov	r0, #16	; 0x10
         c4234:	ea000001 	b	c4240 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x160>
         c4238:	e3a08096 	mov	r8, #150	; 0x96
         c423c:	e3a00020 	mov	r0, #32	; 0x20
         c4240:	e584004c 	str	r0, [r4, #76]	; fField76
         c4244:	ea000002 	b	c4254 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x174>
         c4248:	e3e00f41 	mvn	r0, #260	; 0x104
         c424c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         c4250:	e58d006c 	str	r0, [sp, #108]
         c4254:	eb69d6a2 	bl	1b39ce4 <$PatchPoint(void)>
         c4258:	e59d006c 	ldr	r0, [sp, #108]
         c425c:	e3300000 	teq	r0, #0	; 0x0
         c4260:	1a0000cf 	bne	c45a4 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x4c4>
         c4264:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c4268:	eb6d1070 	bl	1c08430 <TCardSocket::$VppVoltageSpec(void)>
         c426c:	e3100002 	tst	r0, #2	; 0x2
         c4270:	05940020 	ldreq	r0, [r4, #32]	; fField32
         c4274:	03800080 	orreq	r0, r0, #128	; 0x80
         c4278:	05840020 	streq	r0, [r4, #32]	; fField32
         c427c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c4280:	eb6c2d4a 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         c4284:	e1a0a000 	mov	sl, r0
         c4288:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c428c:	eb6c3167 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         c4290:	e1a02000 	mov	r2, r0
         c4294:	e3a010ff 	mov	r1, #255	; 0xff
         c4298:	e28118ff 	add	r1, r1, #16711680	; 0xff0000
         c429c:	e3a00000 	mov	r0, #0	; 0x0
         c42a0:	e49a3004 	ldr	r3, [sl], #4
         c42a4:	e003c001 	and	ip, r3, r1
         c42a8:	e4923004 	ldr	r3, [r2], #4
         c42ac:	e0033001 	and	r3, r3, r1
         c42b0:	e13c0003 	teq	ip, r3
         c42b4:	13a03000 	movne	r3, #0	; 0x0
         c42b8:	03a03001 	moveq	r3, #1	; 0x1
         c42bc:	e2800001 	add	r0, r0, #1	; 0x1
         c42c0:	e3500008 	cmp	r0, #8	; 0x8
         c42c4:	2a000002 	bcs	c42d4 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x1f4>
         c42c8:	e3330000 	teq	r3, #0	; 0x0
         c42cc:	1afffff3 	bne	c42a0 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x1c0>
         c42d0:	ea00000c 	b	c4308 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x228>
         c42d4:	e3330000 	teq	r3, #0	; 0x0
         c42d8:	0a00000a 	beq	c4308 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x228>
         c42dc:	e5940048 	ldr	r0, [r4, #72]	; fField72
         c42e0:	e3800008 	orr	r0, r0, #8	; 0x8
         c42e4:	e5840048 	str	r0, [r4, #72]	; fField72
         c42e8:	e5940020 	ldr	r0, [r4, #32]	; fField32
         c42ec:	e3c00080 	bic	r0, r0, #128	; 0x80
         c42f0:	e3800030 	orr	r0, r0, #48	; 0x30
         c42f4:	e3a08064 	mov	r8, #100	; 0x64
         c42f8:	e5840020 	str	r0, [r4, #32]	; fField32
         c42fc:	e5950000 	ldr	r0, [r5]
         c4300:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         c4304:	e5850000 	str	r0, [r5]
         c4308:	eb69d675 	bl	1b39ce4 <$PatchPoint(void)>
         c430c:	e3360000 	teq	r6, #0	; 0x0
         c4310:	1a000026 	bne	c43b0 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x2d0>
         c4314:	e3a00000 	mov	r0, #0	; 0x0
         c4318:	eb6c20d0 	bl	1bcc660 <TCardDevice::$__ct(void)>
         c431c:	e1b06000 	movs	r6, r0
         c4320:	03a000e9 	moveq	r0, #233	; 0xe9
         c4324:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         c4328:	0a000098 	beq	c4590 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x4b0>
         c432c:	e3a00000 	mov	r0, #0	; 0x0
         c4330:	e5860000 	str	r0, [r6]
         c4334:	e9860101 	stmib	r6, {r0, r8}
         c4338:	e586000c 	str	r0, [r6, #12]
         c433c:	e5960010 	ldr	r0, [r6, #16]	; fField16
         c4340:	e3c00206 	bic	r0, r0, #1610612736	; 0x60000000
         c4344:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         c4348:	e5860010 	str	r0, [r6, #16]	; fField16
         c434c:	e3a00005 	mov	r0, #5	; 0x5
         c4350:	e5c60014 	strb	r0, [r6, #20]	; fField20
         c4354:	e594001c 	ldr	r0, [r4, #28]	; fField28
         c4358:	e1a00420 	mov	r0, r0, lsr #8
         c435c:	e5c60015 	strb	r0, [r6, #21]
         c4360:	e594001c 	ldr	r0, [r4, #28]	; fField28
         c4364:	e5c60016 	strb	r0, [r6, #22]
         c4368:	e3a00002 	mov	r0, #2	; 0x2
         c436c:	e5c60017 	strb	r0, [r6, #23]
         c4370:	e3a00011 	mov	r0, #17	; 0x11
         c4374:	e5c60018 	strb	r0, [r6, #24]	; fField24
         c4378:	e3a00001 	mov	r0, #1	; 0x1
         c437c:	e5c60019 	strb	r0, [r6, #25]
         c4380:	e5c6001a 	strb	r0, [r6, #26]
         c4384:	e5c6901b 	strb	r9, [r6, #27]
         c4388:	e5c6001c 	strb	r0, [r6, #28]	; fField28
         c438c:	e1a01006 	mov	r1, r6
         c4390:	e1a00005 	mov	r0, r5
         c4394:	eb6c28f6 	bl	1bce774 <TCardPCMCIA::$AddCardDevice(TCardDevice *)>
         c4398:	e5d50027 	ldrb	r0, [r5, #39]
         c439c:	e2800001 	add	r0, r0, #1	; 0x1
         c43a0:	e5c50027 	strb	r0, [r5, #39]
         c43a4:	e5950000 	ldr	r0, [r5]
         c43a8:	e3c00101 	bic	r0, r0, #1073741824	; 0x40000000
         c43ac:	e5850000 	str	r0, [r5]
         c43b0:	eb69d64b 	bl	1b39ce4 <$PatchPoint(void)>
         c43b4:	e5d60018 	ldrb	r0, [r6, #24]	; fField24
         c43b8:	e2401001 	sub	r1, r0, #1	; 0x1
         c43bc:	e3a00020 	mov	r0, #32	; 0x20
         c43c0:	e0402001 	sub	r2, r0, r1
         c43c4:	e3e01000 	mvn	r1, #0	; 0x0
         c43c8:	e1a02231 	mov	r2, r1, lsr r2
         c43cc:	e2822001 	add	r2, r2, #1	; 0x1
         c43d0:	e5842028 	str	r2, [r4, #40]	; fField40
         c43d4:	e594304c 	ldr	r3, [r4, #76]	; fField76
         c43d8:	e0020293 	mul	r2, r3, r2
         c43dc:	e5842024 	str	r2, [r4, #36]	; fField36
         c43e0:	e5d6201c 	ldrb	r2, [r6, #28]	; fField28
         c43e4:	e1a02082 	mov	r2, r2, lsl #1
         c43e8:	e5c4202d 	strb	r2, [r4, #45]	; fField45
         c43ec:	e5d6201b 	ldrb	r2, [r6, #27]
         c43f0:	e2422001 	sub	r2, r2, #1	; 0x1
         c43f4:	e0400002 	sub	r0, r0, r2
         c43f8:	e1a00031 	mov	r0, r1, lsr r0
         c43fc:	e2800001 	add	r0, r0, #1	; 0x1
         c4400:	e5c4002e 	strb	r0, [r4, #46]	; fField46
         c4404:	e5960008 	ldr	r0, [r6, #8]
         c4408:	e584003c 	str	r0, [r4, #60]	; fField60
         c440c:	eb69d634 	bl	1b39ce4 <$PatchPoint(void)>
         c4410:	e5960004 	ldr	r0, [r6, #4]
         c4414:	e3300000 	teq	r0, #0	; 0x0
         c4418:	1a00002a 	bne	c44c8 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x3e8>
         c441c:	e1a00004 	mov	r0, r4
         c4420:	eb69e696 	bl	1b3de80 <TFlashSeries2::$CheckWriteProtected(void)>
         c4424:	e3300000 	teq	r0, #0	; 0x0
         c4428:	1a000026 	bne	c44c8 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x3e8>
         c442c:	e3a01000 	mov	r1, #0	; 0x0
         c4430:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c4434:	eb6c5e57 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         c4438:	e1a01007 	mov	r1, r7
         c443c:	e1a00004 	mov	r0, r4
         c4440:	e3a02090 	mov	r2, #144	; 0x90
         c4444:	e2822a09 	add	r2, r2, #36864	; 0x9000
         c4448:	eb69e68e 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c444c:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c4450:	e5d4002d 	ldrb	r0, [r4, #45]	; fField45
         c4454:	e00a0190 	mul	sl, r0, r1
         c4458:	e1a08007 	mov	r8, r7
         c445c:	e594901c 	ldr	r9, [r4, #28]	; fField28
         c4460:	e088100a 	add	r1, r8, sl
         c4464:	e1a08001 	mov	r8, r1
         c4468:	e1a00004 	mov	r0, r4
         c446c:	e3a02001 	mov	r2, #1	; 0x1
         c4470:	eb69e279 	bl	1b3ce5c <TFlashSeries2::$ChipReadID(unsigned long, unsigned long)>
         c4474:	e1300009 	teq	r0, r9
         c4478:	13a00000 	movne	r0, #0	; 0x0
         c447c:	03a00001 	moveq	r0, #1	; 0x1
         c4480:	e3300000 	teq	r0, #0	; 0x0
         c4484:	1a000005 	bne	c44a0 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x3c0>
         c4488:	e1a01008 	mov	r1, r8
         c448c:	e1a00004 	mov	r0, r4
         c4490:	e3a02000 	mov	r2, #0	; 0x0
         c4494:	eb69e270 	bl	1b3ce5c <TFlashSeries2::$ChipReadID(unsigned long, unsigned long)>
         c4498:	e0500009 	subs	r0, r0, r9
         c449c:	13a00001 	movne	r0, #1	; 0x1
         c44a0:	e3300000 	teq	r0, #0	; 0x0
         c44a4:	0affffed 	beq	c4460 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x380>
         c44a8:	e0480007 	sub	r0, r8, r7
         c44ac:	e5860004 	str	r0, [r6, #4]
         c44b0:	e1a01007 	mov	r1, r7
         c44b4:	e5850008 	str	r0, [r5, #8]
         c44b8:	e1a00004 	mov	r0, r4
         c44bc:	e3a02801 	mov	r2, #65536	; 0x10000
         c44c0:	e2422001 	sub	r2, r2, #1	; 0x1
         c44c4:	eb69e66f 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c44c8:	eb69d605 	bl	1b39ce4 <$PatchPoint(void)>
         c44cc:	e5961004 	ldr	r1, [r6, #4]
         c44d0:	e3a00000 	mov	r0, #0	; 0x0
         c44d4:	e5840038 	str	r0, [r4, #56]	; fField56
         c44d8:	e5841034 	str	r1, [r4, #52]	; fField52
         c44dc:	e5940024 	ldr	r0, [r4, #36]	; fField36
         c44e0:	eb6bb918 	bl	1bb2948 <$__rt_udiv>
         c44e4:	e5c4002c 	strb	r0, [r4, #44]	; fField44
         c44e8:	e5966000 	ldr	r6, [r6]
         c44ec:	e595000c 	ldr	r0, [r5, #12]
         c44f0:	e5941048 	ldr	r1, [r4, #72]	; fField72
         c44f4:	e3110008 	tst	r1, #8	; 0x8
         c44f8:	0a00000d 	beq	c4534 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x454>
         c44fc:	e5952000 	ldr	r2, [r5]
         c4500:	e3120401 	tst	r2, #16777216	; 0x1000000
         c4504:	1a00000a 	bne	c4534 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x454>
         c4508:	e3110010 	tst	r1, #16	; 0x10
         c450c:	0a000008 	beq	c4534 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x454>
         c4510:	e51b102c 	ldr	r1, [fp, -#44]	; fField44
         c4514:	e3310000 	teq	r1, #0	; 0x0
         c4518:	03300000 	teqeq	r0, #0	; 0x0
         c451c:	03360000 	teqeq	r6, #0	; 0x0
         c4520:	1a000003 	bne	c4534 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x454>
         c4524:	e5940028 	ldr	r0, [r4, #40]	; fField40
         c4528:	e5d4102d 	ldrb	r1, [r4, #45]	; fField45
         c452c:	e0000091 	mul	r0, r1, r0
         c4530:	e5a5000c 	str	r0, [r5, #12]!
         c4534:	e1560000 	cmp	r6, r0
         c4538:	2a000005 	bcs	c4554 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x474>
         c453c:	e5941034 	ldr	r1, [r4, #52]	; fField52
         c4540:	e0812006 	add	r2, r1, r6
         c4544:	e1520000 	cmp	r2, r0
         c4548:	85840038 	strhi	r0, [r4, #56]	; fField56
         c454c:	80410000 	subhi	r0, r1, r0
         c4550:	85840034 	strhi	r0, [r4, #52]	; fField52
         c4554:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c4558:	eb6c30b4 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         c455c:	e0800006 	add	r0, r0, r6
         c4560:	e5941038 	ldr	r1, [r4, #56]	; fField56
         c4564:	e0800001 	add	r0, r0, r1
         c4568:	e5840018 	str	r0, [r4, #24]	; fField24
         c456c:	eb69d5dc 	bl	1b39ce4 <$PatchPoint(void)>
         c4570:	ea00000b 	b	c45a4 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x4c4>
         c4574:	e59d0060 	ldr	r0, [sp, #96]
         c4578:	e28f1f06 	add	r1, pc, #24	; 0x18
         c457c:	eb6c7b04 	bl	1be3194 <$Subexception>
         c4580:	e3300000 	teq	r0, #0	; 0x0
         c4584:	0a000004 	beq	c459c <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x4bc>
         c4588:	e3a000b5 	mov	r0, #181	; 0xb5
         c458c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         c4590:	e58d006c 	str	r0, [sp, #108]
         c4594:	ea000002 	b	c45a4 <TFlashSeries2::IdentifyCard(TCardPCMCIA *, unsigned long)+0x4c4>
         c4598:	00000000 	andeq	r0, r0, r0
         c459c:	e1a0000d 	mov	r0, sp
         c45a0:	eb6c76eb 	bl	1be2154 <$NextHandler>
         c45a4:	e1a0000d 	mov	r0, sp
         c45a8:	eb6c72c2 	bl	1be10b8 <$ExitHandler>
         c45ac:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c45b0:	e3a0100a 	mov	r1, #10	; 0xa
         c45b4:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         c45b8:	eb6c5df6 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         c45bc:	e49d0004 	ldr	r0, [sp], #4
         c45c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::Copy(unsigned long, unsigned long, unsigned long)
 * Address: 000c45c4
 */
TFlashSeries2::Copy(unsigned long, unsigned long, unsigned long) {
    /*
         c45c4:	e59f0000 	ldr	r0, [pc, #0]	; c45cc <TFlashSeries2::Copy(unsigned long, unsigned long, unsigned long)+0x8>
         c45c8:	e1a0f00e 	mov	pc, lr
         c45cc:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: TFlashSeries2::IsVirgin(unsigned long, unsigned long)
 * Address: 000c45d0
 */
TFlashSeries2::IsVirgin(unsigned long, unsigned long) {
    /*
         c45d0:	e3a00000 	mov	r0, #0	; 0x0
         c45d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashSeries2::Read(unsigned long, unsigned long, char *)
 * Address: 000c45d8
 */
TFlashSeries2::Read(unsigned long, unsigned long, char *) {
    /*
         c45d8:	e1a0c00d 	mov	ip, sp
         c45dc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c45e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c45e4:	e1a04000 	mov	r4, r0
         c45e8:	e1a07001 	mov	r7, r1
         c45ec:	e1a05002 	mov	r5, r2
         c45f0:	e1a06003 	mov	r6, r3
         c45f4:	e3a00000 	mov	r0, #0	; 0x0
         c45f8:	e0811002 	add	r1, r1, r2
         c45fc:	e52d0004 	str	r0, [sp, -#4]!
         c4600:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c4604:	e1510000 	cmp	r1, r0
         c4608:	83a000ea 	movhi	r0, #234	; 0xea
         c460c:	82400b0a 	subhi	r0, r0, #10240	; 0x2800
         c4610:	858d0000 	strhi	r0, [sp]
         c4614:	8a00004c 	bhi	c474c <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x174>
         c4618:	e1a00004 	mov	r0, r4
         c461c:	eb69e61d 	bl	1b3de98 <TFlashSeries2::$EnterFlashOperation(void)>
         c4620:	e3a00000 	mov	r0, #0	; 0x0
         c4624:	e52d006c 	str	r0, [sp, -#108]!
         c4628:	e28d0008 	add	r0, sp, #8	; 0x8
         c462c:	eb6bb8d0 	bl	1bb2974 <$setjmp>
         c4630:	e3300000 	teq	r0, #0	; 0x0
         c4634:	1a000020 	bne	c46bc <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0xe4>
         c4638:	e1a0000d 	mov	r0, sp
         c463c:	eb6c6e8e 	bl	1be007c <$AddExceptionHandler>
         c4640:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c4644:	e0807007 	add	r7, r0, r7
         c4648:	e1a00004 	mov	r0, r4
         c464c:	eb69e60b 	bl	1b3de80 <TFlashSeries2::$CheckWriteProtected(void)>
         c4650:	e1b08000 	movs	r8, r0
         c4654:	1a000009 	bne	c4680 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0xa8>
         c4658:	e1a01007 	mov	r1, r7
         c465c:	e1a00004 	mov	r0, r4
         c4660:	eb69e205 	bl	1b3ce7c <TFlashSeries2::$CheckStatus(unsigned long)>
         c4664:	e3500000 	cmp	r0, #0	; 0x0
         c4668:	ba00002a 	blt	c4718 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x140>
         c466c:	e3300001 	teq	r0, #1	; 0x1
         c4670:	13300004 	teqne	r0, #4	; 0x4
         c4674:	13e00036 	mvnne	r0, #54	; 0x36
         c4678:	12400c29 	subne	r0, r0, #10496	; 0x2900
         c467c:	1a000025 	bne	c4718 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x140>
         c4680:	e3380000 	teq	r8, #0	; 0x0
         c4684:	1a000004 	bne	c469c <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0xc4>
         c4688:	e1a01007 	mov	r1, r7
         c468c:	e1a00004 	mov	r0, r4
         c4690:	e3a02801 	mov	r2, #65536	; 0x10000
         c4694:	e2422001 	sub	r2, r2, #1	; 0x1
         c4698:	eb69e5fa 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c469c:	e3a0100a 	mov	r1, #10	; 0xa
         c46a0:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c46a4:	eb6c5dbb 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         c46a8:	e1a02005 	mov	r2, r5
         c46ac:	e1a01006 	mov	r1, r6
         c46b0:	e1a00007 	mov	r0, r7
         c46b4:	eb6c6a26 	bl	1bdef54 <$BlockMove>
         c46b8:	ea00001e 	b	c4738 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x160>
         c46bc:	e59d0060 	ldr	r0, [sp, #96]
         c46c0:	e59f1058 	ldr	r1, [pc, #58]	; c4720 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x148>
         c46c4:	e5911000 	ldr	r1, [r1]
         c46c8:	eb6c7ab1 	bl	1be3194 <$Subexception>
         c46cc:	e3300000 	teq	r0, #0	; 0x0
         c46d0:	13a000b4 	movne	r0, #180	; 0xb4
         c46d4:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c46d8:	1a00000e 	bne	c4718 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x140>
         c46dc:	e59d0060 	ldr	r0, [sp, #96]
         c46e0:	e59f103c 	ldr	r1, [pc, #3c]	; c4724 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x14c>
         c46e4:	e5911000 	ldr	r1, [r1]
         c46e8:	eb6c7aa9 	bl	1be3194 <$Subexception>
         c46ec:	e3300000 	teq	r0, #0	; 0x0
         c46f0:	13a000b5 	movne	r0, #181	; 0xb5
         c46f4:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c46f8:	1a000006 	bne	c4718 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x140>
         c46fc:	e59d0060 	ldr	r0, [sp, #96]
         c4700:	e59f1020 	ldr	r1, [pc, #20]	; c4728 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x150>	; fField20
         c4704:	e5911000 	ldr	r1, [r1]
         c4708:	eb6c7aa1 	bl	1be3194 <$Subexception>
         c470c:	e3300000 	teq	r0, #0	; 0x0
         c4710:	0a000006 	beq	c4730 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x158>
         c4714:	e59f0010 	ldr	r0, [pc, #10]	; c472c <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x154>
         c4718:	e58d006c 	str	r0, [sp, #108]
         c471c:	ea000005 	b	c4738 <TFlashSeries2::Read(unsigned long, unsigned long, char *)+0x160>
         c4720:	003712c4 	eoreqs	r1, r7, r4, asr #5
         c4724:	003712b8 	ldreqh	r1, [r7], -r8
         c4728:	003712c8 	eoreqs	r1, r7, r8, asr #5
         c472c:	ffffd8af 	swinv	0x00ffd8af
         c4730:	e1a0000d 	mov	r0, sp
         c4734:	eb6c7686 	bl	1be2154 <$NextHandler>
         c4738:	e1a0000d 	mov	r0, sp
         c473c:	eb6c725d 	bl	1be10b8 <$ExitHandler>
         c4740:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c4744:	e1a00004 	mov	r0, r4
         c4748:	eb69e5d3 	bl	1b3de9c <TFlashSeries2::$ExitFlashOperation(void)>
         c474c:	e49d0004 	ldr	r0, [sp], #4
         c4750:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::Write(unsigned long, unsigned long, char *)
 * Address: 000c4754
 */
TFlashSeries2::Write(unsigned long, unsigned long, char *) {
    /*
         c4754:	e1a0c00d 	mov	ip, sp
         c4758:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c475c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c4760:	e1a04000 	mov	r4, r0
         c4764:	e1a07001 	mov	r7, r1
         c4768:	e1a05002 	mov	r5, r2
         c476c:	e1a06003 	mov	r6, r3
         c4770:	e3a00000 	mov	r0, #0	; 0x0
         c4774:	e52d0004 	str	r0, [sp, -#4]!
         c4778:	e0810002 	add	r0, r1, r2
         c477c:	e5941034 	ldr	r1, [r4, #52]	; fField52
         c4780:	e1500001 	cmp	r0, r1
         c4784:	83a000ea 	movhi	r0, #234	; 0xea
         c4788:	82400b0a 	subhi	r0, r0, #10240	; 0x2800
         c478c:	858d0000 	strhi	r0, [sp]
         c4790:	8a00006b 	bhi	c4944 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1f0>
         c4794:	e1a00004 	mov	r0, r4
         c4798:	eb69e5b8 	bl	1b3de80 <TFlashSeries2::$CheckWriteProtected(void)>
         c479c:	e59f805c 	ldr	r8, [pc, #5c]	; c4800 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0xac>
         c47a0:	e3300000 	teq	r0, #0	; 0x0
         c47a4:	140d806c 	strne	r8, [sp], -#108
         c47a8:	1a000060 	bne	c4930 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1dc>
         c47ac:	e1a00004 	mov	r0, r4
         c47b0:	eb69e5b8 	bl	1b3de98 <TFlashSeries2::$EnterFlashOperation(void)>
         c47b4:	e3a09000 	mov	r9, #0	; 0x0
         c47b8:	e52d906c 	str	r9, [sp, -#108]!
         c47bc:	e28d0008 	add	r0, sp, #8	; 0x8
         c47c0:	eb6bb86b 	bl	1bb2974 <$setjmp>
         c47c4:	e3300000 	teq	r0, #0	; 0x0
         c47c8:	1a00003b 	bne	c48bc <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x168>
         c47cc:	e1a0000d 	mov	r0, sp
         c47d0:	eb6c6e29 	bl	1be007c <$AddExceptionHandler>
         c47d4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c47d8:	e0801007 	add	r1, r0, r7
         c47dc:	e1a08001 	mov	r8, r1
         c47e0:	e1a00004 	mov	r0, r4
         c47e4:	eb69e1a4 	bl	1b3ce7c <TFlashSeries2::$CheckStatus(unsigned long)>
         c47e8:	e3300001 	teq	r0, #1	; 0x1
         c47ec:	0a000004 	beq	c4804 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0xb0>
         c47f0:	e3500000 	cmp	r0, #0	; 0x0
         c47f4:	a3e00036 	mvnge	r0, #54	; 0x36
         c47f8:	a2400c29 	subge	r0, r0, #10496	; 0x2900
         c47fc:	ea00003e 	b	c48fc <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1a8>
         c4800:	ffffd8af 	swinv	0x00ffd8af
         c4804:	e5849040 	str	r9, [r4, #64]	; fField64
         c4808:	e2189001 	ands	r9, r8, #1	; 0x1
         c480c:	0a00000a 	beq	c483c <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0xe8>
         c4810:	e3350002 	teq	r5, #2	; 0x2
         c4814:	03a09002 	moveq	r9, #2	; 0x2
         c4818:	e1a03006 	mov	r3, r6
         c481c:	e1a02009 	mov	r2, r9
         c4820:	e1a01008 	mov	r1, r8
         c4824:	e1a00004 	mov	r0, r4
         c4828:	eb69e18a 	bl	1b3ce58 <TFlashSeries2::$DoWrite(unsigned long, unsigned long, char *)>
         c482c:	e0888009 	add	r8, r8, r9
         c4830:	e0866009 	add	r6, r6, r9
         c4834:	e0455009 	sub	r5, r5, r9
         c4838:	e58d006c 	str	r0, [sp, #108]
         c483c:	e3d59001 	bics	r9, r5, #1	; 0x1
         c4840:	0a00000b 	beq	c4874 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x120>
         c4844:	e59d006c 	ldr	r0, [sp, #108]
         c4848:	e3300000 	teq	r0, #0	; 0x0
         c484c:	1a000008 	bne	c4874 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x120>
         c4850:	e1a03006 	mov	r3, r6
         c4854:	e1a02009 	mov	r2, r9
         c4858:	e1a01008 	mov	r1, r8
         c485c:	e1a00004 	mov	r0, r4
         c4860:	eb69e17c 	bl	1b3ce58 <TFlashSeries2::$DoWrite(unsigned long, unsigned long, char *)>
         c4864:	e0888009 	add	r8, r8, r9
         c4868:	e0866009 	add	r6, r6, r9
         c486c:	e0455009 	sub	r5, r5, r9
         c4870:	e58d006c 	str	r0, [sp, #108]
         c4874:	e3350000 	teq	r5, #0	; 0x0
         c4878:	0a000008 	beq	c48a0 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x14c>
         c487c:	e59d006c 	ldr	r0, [sp, #108]
         c4880:	e3300000 	teq	r0, #0	; 0x0
         c4884:	1a000005 	bne	c48a0 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x14c>
         c4888:	e1a03006 	mov	r3, r6
         c488c:	e1a02005 	mov	r2, r5
         c4890:	e1a01008 	mov	r1, r8
         c4894:	e1a00004 	mov	r0, r4
         c4898:	eb69e16e 	bl	1b3ce58 <TFlashSeries2::$DoWrite(unsigned long, unsigned long, char *)>
         c489c:	e58d006c 	str	r0, [sp, #108]
         c48a0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c48a4:	e0801007 	add	r1, r0, r7
         c48a8:	e1a00004 	mov	r0, r4
         c48ac:	e3a02801 	mov	r2, #65536	; 0x10000
         c48b0:	e2422001 	sub	r2, r2, #1	; 0x1
         c48b4:	eb69e573 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c48b8:	ea00001c 	b	c4930 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1dc>
         c48bc:	e59d0060 	ldr	r0, [sp, #96]
         c48c0:	e59f103c 	ldr	r1, [pc, #3c]	; c4904 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1b0>
         c48c4:	e5911000 	ldr	r1, [r1]
         c48c8:	eb6c7a31 	bl	1be3194 <$Subexception>
         c48cc:	e3300000 	teq	r0, #0	; 0x0
         c48d0:	13a000b4 	movne	r0, #180	; 0xb4
         c48d4:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         c48d8:	1a000007 	bne	c48fc <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1a8>
         c48dc:	e59d0060 	ldr	r0, [sp, #96]
         c48e0:	e59f1020 	ldr	r1, [pc, #20]	; c4908 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1b4>	; fField20
         c48e4:	e5911000 	ldr	r1, [r1]
         c48e8:	eb6c7a29 	bl	1be3194 <$Subexception>
         c48ec:	e3300000 	teq	r0, #0	; 0x0
         c48f0:	0a000005 	beq	c490c <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1b8>
         c48f4:	e3a000b5 	mov	r0, #181	; 0xb5
         c48f8:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         c48fc:	e58d006c 	str	r0, [sp, #108]
         c4900:	ea00000a 	b	c4930 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1dc>
         c4904:	003712c4 	eoreqs	r1, r7, r4, asr #5
         c4908:	003712b8 	ldreqh	r1, [r7], -r8
         c490c:	e59d0060 	ldr	r0, [sp, #96]
         c4910:	e59f1034 	ldr	r1, [pc, #34]	; c494c <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1f8>
         c4914:	e5911000 	ldr	r1, [r1]
         c4918:	eb6c7a1d 	bl	1be3194 <$Subexception>
         c491c:	e3300000 	teq	r0, #0	; 0x0
         c4920:	158d806c 	strne	r8, [sp, #108]
         c4924:	1a000001 	bne	c4930 <TFlashSeries2::Write(unsigned long, unsigned long, char *)+0x1dc>
         c4928:	e1a0000d 	mov	r0, sp
         c492c:	eb6c7608 	bl	1be2154 <$NextHandler>
         c4930:	e1a0000d 	mov	r0, sp
         c4934:	eb6c71df 	bl	1be10b8 <$ExitHandler>
         c4938:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c493c:	e1a00004 	mov	r0, r4
         c4940:	eb69e555 	bl	1b3de9c <TFlashSeries2::$ExitFlashOperation(void)>
         c4944:	e49d0004 	ldr	r0, [sp], #4
         c4948:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c494c:	003712c8 	eoreqs	r1, r7, r8, asr #5
    */
}

/**
 * Symbol: TFlashSeries2::DoWrite(unsigned long, unsigned long, char *)
 * Address: 000c4950
 */
TFlashSeries2::DoWrite(unsigned long, unsigned long, char *) {
    /*
         c4950:	e1a0c00d 	mov	ip, sp
         c4954:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c4958:	e24cb004 	sub	fp, ip, #4	; 0x4
         c495c:	e1a05000 	mov	r5, r0
         c4960:	e1a04001 	mov	r4, r1
         c4964:	e1a06002 	mov	r6, r2
         c4968:	e1a07003 	mov	r7, r3
         c496c:	e24dd008 	sub	sp, sp, #8	; 0x8
         c4970:	e3a0a000 	mov	sl, #0	; 0x0
         c4974:	e3120001 	tst	r2, #1	; 0x1
         c4978:	02040001 	andeq	r0, r4, #1	; 0x1
         c497c:	03300000 	teqeq	r0, #0	; 0x0
         c4980:	13a08000 	movne	r8, #0	; 0x0
         c4984:	03a08001 	moveq	r8, #1	; 0x1
         c4988:	e3560000 	cmp	r6, #0	; 0x0
         c498c:	9a00003e 	bls	c4a8c <TFlashSeries2::DoWrite(unsigned long, unsigned long, char *)+0x13c>
         c4990:	e2880001 	add	r0, r8, #1	; 0x1
         c4994:	e58d0004 	str	r0, [sp, #4]
         c4998:	e1a01004 	mov	r1, r4
         c499c:	e1a00005 	mov	r0, r5
         c49a0:	e3a02801 	mov	r2, #65536	; 0x10000
         c49a4:	e2422001 	sub	r2, r2, #1	; 0x1
         c49a8:	eb69e536 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c49ac:	e3380000 	teq	r8, #0	; 0x0
         c49b0:	0a00000b 	beq	c49e4 <TFlashSeries2::DoWrite(unsigned long, unsigned long, char *)+0x94>
         c49b4:	e4d70001 	ldrb	r0, [r7], #1
         c49b8:	e4d71001 	ldrb	r1, [r7], #1
         c49bc:	e0819400 	add	r9, r1, r0, lsl #8
         c49c0:	e1a01004 	mov	r1, r4
         c49c4:	e1a00005 	mov	r0, r5
         c49c8:	e3a02040 	mov	r2, #64	; 0x40
         c49cc:	e2822901 	add	r2, r2, #16384	; 0x4000
         c49d0:	eb69e52c 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c49d4:	e1a02009 	mov	r2, r9
         c49d8:	e1a01004 	mov	r1, r4
         c49dc:	e5950010 	ldr	r0, [r5, #16]	; fField16
         c49e0:	ea000016 	b	c4a40 <TFlashSeries2::DoWrite(unsigned long, unsigned long, char *)+0xf0>
         c49e4:	e4d79001 	ldrb	r9, [r7], #1
         c49e8:	e5950048 	ldr	r0, [r5, #72]	; fField72
         c49ec:	e3100008 	tst	r0, #8	; 0x8
         c49f0:	1a000005 	bne	c4a0c <TFlashSeries2::DoWrite(unsigned long, unsigned long, char *)+0xbc>
         c49f4:	e1a01004 	mov	r1, r4
         c49f8:	e1a00005 	mov	r0, r5
         c49fc:	e3a02040 	mov	r2, #64	; 0x40
         c4a00:	eb69e521 	bl	1b3de8c <TFlashSeries2::$ChipSendCommandByte(unsigned long, unsigned long)>
         c4a04:	e5c49000 	strb	r9, [r4]
         c4a08:	ea00000d 	b	c4a44 <TFlashSeries2::DoWrite(unsigned long, unsigned long, char *)+0xf4>
         c4a0c:	e2140001 	ands	r0, r4, #1	; 0x1
         c4a10:	e58d0000 	str	r0, [sp]
         c4a14:	03a02901 	moveq	r2, #16384	; 0x4000
         c4a18:	13a02040 	movne	r2, #64	; 0x40
         c4a1c:	e1a01004 	mov	r1, r4
         c4a20:	e1a00005 	mov	r0, r5
         c4a24:	eb69e517 	bl	1b3de88 <TFlashSeries2::$ChipSendCommand(unsigned long, unsigned long)>
         c4a28:	e3c41001 	bic	r1, r4, #1	; 0x1
         c4a2c:	e59d0000 	ldr	r0, [sp]
         c4a30:	e2600001 	rsb	r0, r0, #1	; 0x1
         c4a34:	e1a00180 	mov	r0, r0, lsl #3
         c4a38:	e1a02019 	mov	r2, r9, lsl r0
         c4a3c:	e5950010 	ldr	r0, [r5, #16]	; fField16
         c4a40:	eb6d2733 	bl	1c0e714 <TCardSocket::$Do16BitWrite(unsigned long, unsigned long)>
         c4a44:	e1a01004 	mov	r1, r4
         c4a48:	e1a00005 	mov	r0, r5
         c4a4c:	e3a02001 	mov	r2, #1	; 0x1
         c4a50:	eb69e50e 	bl	1b3de90 <TFlashSeries2::$ChipWaitReady(unsigned long, unsigned char)>
         c4a54:	e3300000 	teq	r0, #0	; 0x0
         c4a58:	1a000005 	bne	c4a74 <TFlashSeries2::DoWrite(unsigned long, unsigned long, char *)+0x124>
         c4a5c:	e1a01004 	mov	r1, r4
         c4a60:	e1a00005 	mov	r0, r5
         c4a64:	eb69e0fd 	bl	1b3ce60 <TFlashSeries2::$ChipCheckError(unsigned long)>
         c4a68:	e1b0a000 	movs	sl, r0
         c4a6c:	15a54040 	strne	r4, [r5, #64]!	; fField64
         c4a70:	1a000005 	bne	c4a8c <TFlashSeries2::DoWrite(unsigned long, unsigned long, char *)+0x13c>
         c4a74:	e0840008 	add	r0, r4, r8
         c4a78:	e2804001 	add	r4, r0, #1	; 0x1
         c4a7c:	e59d0004 	ldr	r0, [sp, #4]
         c4a80:	e0466000 	sub	r6, r6, r0
         c4a84:	e3560000 	cmp	r6, #0	; 0x0
         c4a88:	8affffc2 	bhi	c4998 <TFlashSeries2::DoWrite(unsigned long, unsigned long, char *)+0x48>
         c4a8c:	e1a0000a 	mov	r0, sl
         c4a90:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashSeries2::Erase(unsigned long)
 * Address: 000c4a94
 */
TFlashSeries2::Erase(unsigned long) {
    /*
         c4a94:	e3a02000 	mov	r2, #0	; 0x0
         c4a98:	ea69e4fd 	b	1b3de94 <TFlashSeries2::$DoErase(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: ClassInfo__13TFlashSeries2SFv
 * Address: 00386828
 */
void TFlashSeries2::ClassInfo() {
    /*
        386828:	e24f0044 	sub	r0, pc, #68	; 0x44
        38682c:	e1a0f00e 	mov	pc, lr
        386830:	e3a00000 	mov	r0, #0	; 0x0
        386834:	e1a0f00e 	mov	pc, lr
        386838:	54466c61 	strplb	r6, [r6], -#3169
        38683c:	73685365 	cmnvc	r8, #-1811939327	; 0x94000001
        386840:	72696573 	rsbvc	r6, r9, #482344960	; 0x1cc00000
        386844:	32005446 	andcc	r5, r0, #1174405120	; 0x46000000
        386848:	6c617368 	stcvsl	3, cr7, [r1], -#416
        386854:	eafffff3 	b	386828 <ClassInfo__13TFlashSeries2SFv>
        386858:	ea5edd9a 	b	1b3dec8 <TFlashSeries2::$New(void)>
        38685c:	eaf4f463 	b	c39f0 <TFlashSeries2::Delete(void)>
        386860:	ea5edd99 	b	1b3decc <TFlashSeries2::$Read(unsigned long, unsigned long, char *)>
        386864:	ea5edd9c 	b	1b3dedc <TFlashSeries2::$Write(unsigned long, unsigned long, char *)>
        386868:	eaf4f889 	b	c4a94 <TFlashSeries2::Erase(unsigned long)>
        38686c:	ea5edd99 	b	1b3ded8 <TFlashSeries2::$SuspendErase(unsigned long, unsigned long, unsigned long)>
        386870:	ea5edd96 	b	1b3ded0 <TFlashSeries2::$ResumeErase(unsigned long)>
        386874:	eaf4f3b2 	b	c3744 <TFlashSeries2::DeepSleep(unsigned long)>
        386878:	eaf4f3b4 	b	c3750 <TFlashSeries2::Wakeup(unsigned long)>
        38687c:	ea5edd94 	b	1b3ded4 <TFlashSeries2::$Status(unsigned long)>
        386880:	eaf4f437 	b	c3964 <TFlashSeries2::ResetCard(void)>
        386884:	eaf4f45a 	b	c39f4 <TFlashSeries2::AcknowledgeReset(void)>
        386888:	eaf4f45e 	b	c3a08 <TFlashSeries2::GetPhysResource(void)>
        38688c:	eaf4f45c 	b	c3a04 <TFlashSeries2::RegisterClientInfo(unsigned long)>
        386890:	ea5edd8a 	b	1b3dec0 <TFlashSeries2::$GetWriteProtected(unsigned char *)>
        386894:	eaf4f465 	b	c3a30 <TFlashSeries2::GetWriteErrorAddress(void)>
        386898:	eaf4f460 	b	c3a20 <TFlashSeries2::GetAttributes(void)>
        38689c:	ea5edd82 	b	1b3deac <TFlashSeries2::$GetDataOffset(void)>
        3868a0:	ea5edd84 	b	1b3deb8 <TFlashSeries2::$GetTotalSize(void)>
        3868a4:	ea5edd82 	b	1b3deb4 <TFlashSeries2::$GetGroupSize(void)>
        3868a8:	ea5edd80 	b	1b3deb0 <TFlashSeries2::$GetEraseRegionSize(void)>
        3868ac:	ea5edd7d 	b	1b3dea8 <TFlashSeries2::$GetChipsPerGroup(void)>
        3868b0:	ea5edd7b 	b	1b3dea4 <TFlashSeries2::$GetBlocksPerPartition(void)>
        3868b4:	eaf4f48d 	b	c3af0 <TFlashSeries2::GetMaxConcurrentVppOps(void)>
        3868b8:	eaf4f496 	b	c3b18 <TFlashSeries2::GetEraseRegionCurrent(void)>
        3868bc:	eaf4f498 	b	c3b24 <TFlashSeries2::GetWriteRegionCurrent(void)>
        3868c0:	eaf4f49a 	b	c3b30 <TFlashSeries2::GetEraseRegionTime(void)>
        3868c4:	eaf4f49c 	b	c3b3c <TFlashSeries2::GetWriteAccessTime(void)>
        3868c8:	eaf4f49d 	b	c3b44 <TFlashSeries2::GetReadAccessTime(void)>
        3868cc:	ea5edd7a 	b	1b3debc <TFlashSeries2::$GetVendorInfo(void)>
        3868d0:	eaf4f44e 	b	c3a10 <TFlashSeries2::GetSocketNumber(void)>
        3868d4:	eaf4f4a4 	b	c3b6c <TFlashSeries2::VppStatus(void)>
        3868d8:	eaf4f49b 	b	c3b4c <TFlashSeries2::VppRisingTime(void)>
        3868dc:	ea5edd6f 	b	1b3dea0 <TFlashSeries2::$FlashSpecific(unsigned long, void *, unsigned long)>
        3868e0:	ea5edd77 	b	1b3dec4 <TFlashSeries2::$Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)>
        3868e4:	eaf4f49e 	b	c3b64 <TFlashSeries2::SuspendService(void)>
        3868e8:	eaf4f5b1 	b	c3fb4 <TFlashSeries2::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)>
        3868ec:	eaf4f734 	b	c45c4 <TFlashSeries2::Copy(unsigned long, unsigned long, unsigned long)>
        3868f0:	eaf4f736 	b	c45d0 <TFlashSeries2::IsVirgin(unsigned long, unsigned long)>
        3868f4:	00000000 	andeq	r0, r0, r0
        3868f8:	00000048 	andeq	r0, r0, r8, asr #32
        3868fc:	0000004e 	andeq	r0, r0, lr, asr #32
        386900:	00000051 	andeq	r0, r0, r1, asr r0
        386904:	00000050 	andeq	r0, r0, r0, asr r0
        386908:	000000f0 	streqd	r0, [r0], -r0
        38690c:	eaf4dd23 	b	bdda0 <Sizeof__9TFlashAMDSFv>
        386918:	ea5ed52d 	b	1b3bdd4 <TFlashAMD::$New(void)>
        38691c:	ea5ed52d 	b	1b3bdd8 <TFlashAMD::$Delete(void)>
        38692c:	ea000001 	b	386938 <ClassInfo__9TFlashAMDSFv+0x8>
    */
}

