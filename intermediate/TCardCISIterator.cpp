#include "include/TCardCISIterator.h"

/**
 * Symbol: TCardCISIterator::__ct(void)
 * Address: 0004b30c
 */
TCardCISIterator::TCardCISIterator(void) {
    /*
         4b30c:	e3300000 	teq	r0, #0	; 0x0
         4b310:	03a00048 	moveq	r0, #72	; 0x48
         4b314:	0a6e0d07 	beq	1bce738 <$__nw(unsigned int)>
         4b318:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardCISIterator::__dt(void)
 * Address: 0004b31c
 */
TCardCISIterator::~TCardCISIterator(void) {
    /*
         4b31c:	e3110001 	tst	r1, #1	; 0x1
         4b320:	1a6e08ee 	bne	1bcd6e0 <$__dl(void *)>
         4b324:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardCISIterator::GetTupleData(unsigned char *, unsigned long)
 * Address: 0004b328
 */
TCardCISIterator::GetTupleData(unsigned char *, unsigned long) {
    /*
         4b328:	e1a0c00d 	mov	ip, sp
         4b32c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4b330:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b334:	e5d03002 	ldrb	r3, [r0, #2]	; fField2
         4b338:	e2833002 	add	r3, r3, #2	; 0x2
         4b33c:	e1520003 	cmp	r2, r3
         4b340:	21a02003 	movcs	r2, r3
         4b344:	e5903020 	ldr	r3, [r0, #32]	; fField32
         4b348:	e2133010 	ands	r3, r3, #16	; 0x10
         4b34c:	13a03001 	movne	r3, #1	; 0x1
         4b350:	e92d0008 	stmdb	sp!, {r3}
         4b354:	e1a03002 	mov	r3, r2
         4b358:	e1a02001 	mov	r2, r1
         4b35c:	e590c00c 	ldr	ip, [r0, #12]	; fField12
         4b360:	e1a0100c 	mov	r1, ip
         4b364:	eb6ec6b0 	bl	1bfce2c <TCardCISIterator::$ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)>
         4b368:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardCISIterator::GetPackage(TCardPackage *, unsigned char)
 * Address: 0004b36c
 */
TCardCISIterator::GetPackage(TCardPackage *, unsigned char) {
    /*
         4b36c:	e1a0c00d 	mov	ip, sp
         4b370:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         4b374:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b378:	e1a05000 	mov	r5, r0
         4b37c:	e1b04001 	movs	r4, r1
         4b380:	e20210ff 	and	r1, r2, #255	; 0xff
         4b384:	03a060ea 	moveq	r6, #234	; 0xea
         4b388:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
         4b38c:	024dd050 	subeq	sp, sp, #80	; 0x50
         4b390:	0a000043 	beq	4b4a4 <TCardCISIterator::GetPackage(TCardPackage *, unsigned char)+0x138>
         4b394:	e24dd050 	sub	sp, sp, #80	; 0x50
         4b398:	e3a0008e 	mov	r0, #142	; 0x8e
         4b39c:	e5c50000 	strb	r0, [r5]
         4b3a0:	e1a00005 	mov	r0, r5
         4b3a4:	eb6ec6a1 	bl	1bfce30 <TCardCISIterator::$GetTuple(unsigned char)>
         4b3a8:	e1b06000 	movs	r6, r0
         4b3ac:	1a00003c 	bne	4b4a4 <TCardCISIterator::GetPackage(TCardPackage *, unsigned char)+0x138>
         4b3b0:	e1a0100d 	mov	r1, sp
         4b3b4:	e1a00005 	mov	r0, r5
         4b3b8:	e3a02050 	mov	r2, #80	; 0x50
         4b3bc:	eb6ec69d 	bl	1bfce38 <TCardCISIterator::$GetTupleData(unsigned char *, unsigned long)>
         4b3c0:	e1b06000 	movs	r6, r0
         4b3c4:	1a000036 	bne	4b4a4 <TCardCISIterator::GetPackage(TCardPackage *, unsigned char)+0x138>
         4b3c8:	e3e06025 	mvn	r6, #37	; 0x25
         4b3cc:	e2466c29 	sub	r6, r6, #10496	; 0x2900
         4b3d0:	e28d1002 	add	r1, sp, #2	; 0x2
         4b3d4:	e1a07001 	mov	r7, r1
         4b3d8:	e1a00005 	mov	r0, r5
         4b3dc:	eb6ec697 	bl	1bfce40 <TCardCISIterator::$SwapLittleEndianShort(unsigned char *)>
         4b3e0:	e33000c8 	teq	r0, #200	; 0xc8
         4b3e4:	1a00002e 	bne	4b4a4 <TCardCISIterator::GetPackage(TCardPackage *, unsigned char)+0x138>
         4b3e8:	e2871002 	add	r1, r7, #2	; 0x2
         4b3ec:	e1a07001 	mov	r7, r1
         4b3f0:	e1a00005 	mov	r0, r5
         4b3f4:	eb6ec691 	bl	1bfce40 <TCardCISIterator::$SwapLittleEndianShort(unsigned char *)>
         4b3f8:	e3300a02 	teq	r0, #8192	; 0x2000
         4b3fc:	1a000028 	bne	4b4a4 <TCardCISIterator::GetPackage(TCardPackage *, unsigned char)+0x138>
         4b400:	e3a06000 	mov	r6, #0	; 0x0
         4b404:	e5f70002 	ldrb	r0, [r7, #2]!	; fField2
         4b408:	e5c4000c 	strb	r0, [r4, #12]	; fField12
         4b40c:	e5f70001 	ldrb	r0, [r7, #1]!	; fField1
         4b410:	e2877001 	add	r7, r7, #1	; 0x1
         4b414:	e5c4000d 	strb	r0, [r4, #13]
         4b418:	e1a01007 	mov	r1, r7
         4b41c:	e1a00005 	mov	r0, r5
         4b420:	eb6ec683 	bl	1bfce34 <TCardCISIterator::$SwapLittleEndianLong(unsigned char *)>
         4b424:	e2871004 	add	r1, r7, #4	; 0x4
         4b428:	e1a07001 	mov	r7, r1
         4b42c:	e5840000 	str	r0, [r4]
         4b430:	e1a00005 	mov	r0, r5
         4b434:	eb6ec67e 	bl	1bfce34 <TCardCISIterator::$SwapLittleEndianLong(unsigned char *)>
         4b438:	e2871004 	add	r1, r7, #4	; 0x4
         4b43c:	e1a07001 	mov	r7, r1
         4b440:	e5840004 	str	r0, [r4, #4]
         4b444:	e1a00005 	mov	r0, r5
         4b448:	eb6ec679 	bl	1bfce34 <TCardCISIterator::$SwapLittleEndianLong(unsigned char *)>
         4b44c:	e2875004 	add	r5, r7, #4	; 0x4
         4b450:	e5840008 	str	r0, [r4, #8]
         4b454:	e4d50001 	ldrb	r0, [r5], #1	; fField1
         4b458:	e5c4000e 	strb	r0, [r4, #14]
         4b45c:	e4d50001 	ldrb	r0, [r5], #1	; fField1
         4b460:	e5c4000f 	strb	r0, [r4, #15]
         4b464:	e1a01005 	mov	r1, r5
         4b468:	e1a00004 	mov	r0, r4
         4b46c:	eb6e4257 	bl	1bdbdd0 <TCardPackage::$SetName(char *)>
         4b470:	e1a00005 	mov	r0, r5
         4b474:	eb6da98d 	bl	1bb5ab0 <$strlen>
         4b478:	e0800005 	add	r0, r0, r5
         4b47c:	e2801001 	add	r1, r0, #1	; 0x1
         4b480:	e1a05001 	mov	r5, r1
         4b484:	e1a00004 	mov	r0, r4
         4b488:	eb6e4243 	bl	1bdbd9c <TCardPackage::$SetCPUType(char *)>
         4b48c:	e1a00005 	mov	r0, r5
         4b490:	eb6da986 	bl	1bb5ab0 <$strlen>
         4b494:	e0800005 	add	r0, r0, r5
         4b498:	e2801001 	add	r1, r0, #1	; 0x1
         4b49c:	e1a00004 	mov	r0, r4
         4b4a0:	eb6e424c 	bl	1bdbdd8 <TCardPackage::$SetOSType(char *)>
         4b4a4:	e1a00006 	mov	r0, r6
         4b4a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCardCISIterator::VerifyLinkTargetTuple(unsigned char *, unsigned char *, unsigned char)
 * Address: 0004b4ac
 */
TCardCISIterator::VerifyLinkTargetTuple(unsigned char *, unsigned char *, unsigned char) {
    /*
         4b4ac:	e1a0c00d 	mov	ip, sp
         4b4b0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4b4b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b4b8:	e1a04000 	mov	r4, r0
         4b4bc:	e1b06001 	movs	r6, r1
         4b4c0:	e1a05002 	mov	r5, r2
         4b4c4:	e20370ff 	and	r7, r3, #255	; 0xff
         4b4c8:	e3e08023 	mvn	r8, #35	; 0x23
         4b4cc:	e2488c29 	sub	r8, r8, #10496	; 0x2900
         4b4d0:	e1a00008 	mov	r0, r8
         4b4d4:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         4b4d8:	e1a03007 	mov	r3, r7
         4b4dc:	e92d0008 	stmdb	sp!, {r3}
         4b4e0:	e1a02005 	mov	r2, r5
         4b4e4:	e1a01006 	mov	r1, r6
         4b4e8:	e1a00004 	mov	r0, r4
         4b4ec:	e3a03005 	mov	r3, #5	; 0x5
         4b4f0:	eb6ec64d 	bl	1bfce2c <TCardCISIterator::$ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)>
         4b4f4:	e28dd004 	add	sp, sp, #4	; 0x4
         4b4f8:	e3300000 	teq	r0, #0	; 0x0
         4b4fc:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         4b500:	e5d51000 	ldrb	r1, [r5]
         4b504:	e3310013 	teq	r1, #19	; 0x13
         4b508:	05d51002 	ldreqb	r1, [r5, #2]	; fField2
         4b50c:	03310043 	teqeq	r1, #67	; 0x43
         4b510:	05d51003 	ldreqb	r1, [r5, #3]
         4b514:	03310049 	teqeq	r1, #73	; 0x49
         4b518:	05d51004 	ldreqb	r1, [r5, #4]
         4b51c:	03310053 	teqeq	r1, #83	; 0x53
         4b520:	11a00008 	movne	r0, r8
         4b524:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         4b528:	e5846014 	str	r6, [r4, #20]	; fField20
         4b52c:	e3a01000 	mov	r1, #0	; 0x0
         4b530:	e3370000 	teq	r7, #0	; 0x0
         4b534:	e5841018 	str	r1, [r4, #24]	; fField24
         4b538:	e584600c 	str	r6, [r4, #12]	; fField12
         4b53c:	e5941020 	ldr	r1, [r4, #32]	; fField32
         4b540:	03c11010 	biceq	r1, r1, #16	; 0x10
         4b544:	13811010 	orrne	r1, r1, #16	; 0x10
         4b548:	e5841020 	str	r1, [r4, #32]	; fField32
         4b54c:	e5d51000 	ldrb	r1, [r5]
         4b550:	e5c41001 	strb	r1, [r4, #1]	; fField1
         4b554:	e5d51001 	ldrb	r1, [r5, #1]	; fField1
         4b558:	e5c41002 	strb	r1, [r4, #2]	; fField2
         4b55c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCardCISIterator::SwapLittleEndianShort(unsigned char *)
 * Address: 0004b560
 */
TCardCISIterator::SwapLittleEndianShort(unsigned char *) {
    /*
         4b560:	e5d10001 	ldrb	r0, [r1, #1]	; fField1
         4b564:	e5d11000 	ldrb	r1, [r1]
         4b568:	e0810400 	add	r0, r1, r0, lsl #8
         4b56c:	e1a00800 	mov	r0, r0, lsl #16
         4b570:	e1a00820 	mov	r0, r0, lsr #16
         4b574:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardCISIterator::SwapLittleEndianLong(unsigned char *)
 * Address: 0004b578
 */
TCardCISIterator::SwapLittleEndianLong(unsigned char *) {
    /*
         4b578:	e5d12001 	ldrb	r2, [r1, #1]	; fField1
         4b57c:	e5d10000 	ldrb	r0, [r1]
         4b580:	e0802402 	add	r2, r0, r2, lsl #8
         4b584:	e5d10002 	ldrb	r0, [r1, #2]	; fField2
         4b588:	e0820800 	add	r0, r2, r0, lsl #16
         4b58c:	e5d11003 	ldrb	r1, [r1, #3]
         4b590:	e0800c01 	add	r0, r0, r1, lsl #24
         4b594:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardCISIterator::Version(void)
 * Address: 0004b598
 */
TCardCISIterator::Version(void) {
    /*
         4b598:	e3a00c02 	mov	r0, #512	; 0x200
         4b59c:	e2800802 	add	r0, r0, #131072	; 0x20000
         4b5a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardCISIterator::ResetFields(void)
 * Address: 0004b5a4
 */
TCardCISIterator::ResetFields(void) {
    /*
         4b5a4:	e1a0c00d 	mov	ip, sp
         4b5a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4b5ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b5b0:	e1a04000 	mov	r4, r0
         4b5b4:	e3a05000 	mov	r5, #0	; 0x0
         4b5b8:	e5c05003 	strb	r5, [r0, #3]
         4b5bc:	e5805004 	str	r5, [r0, #4]
         4b5c0:	e5805008 	str	r5, [r0, #8]
         4b5c4:	e5c05013 	strb	r5, [r0, #19]
         4b5c8:	e3a00001 	mov	r0, #1	; 0x1
         4b5cc:	e5c40010 	strb	r0, [r4, #16]	; fField16
         4b5d0:	e5c45011 	strb	r5, [r4, #17]	; fField17
         4b5d4:	e5c45012 	strb	r5, [r4, #18]	; fField18
         4b5d8:	e5845020 	str	r5, [r4, #32]	; fField32
         4b5dc:	e5c40024 	strb	r0, [r4, #36]	; fField36
         4b5e0:	e594001c 	ldr	r0, [r4, #28]	; fField28
         4b5e4:	eb6e1071 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         4b5e8:	e5840028 	str	r0, [r4, #40]	; fField40
         4b5ec:	e3a00001 	mov	r0, #1	; 0x1
         4b5f0:	e0841100 	add	r1, r4, r0, lsl #2
         4b5f4:	e2800001 	add	r0, r0, #1	; 0x1
         4b5f8:	e3500008 	cmp	r0, #8	; 0x8
         4b5fc:	e5a15028 	str	r5, [r1, #40]!	; fField40
         4b600:	3afffffa 	bcc	4b5f0 <TCardCISIterator::ResetFields(void)+0x4c>
         4b604:	e1a00004 	mov	r0, r4
         4b608:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         4b60c:	ea6f082e 	b	1c0d6cc <TCardCISIterator::$ResetCIS(void)>
    */
}

/**
 * Symbol: TCardCISIterator::ResetCIS(void)
 * Address: 0004b610
 */
TCardCISIterator::ResetCIS(void) {
    /*
         4b610:	e1a0c00d 	mov	ip, sp
         4b614:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4b618:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b61c:	e1a04000 	mov	r4, r0
         4b620:	e5d00011 	ldrb	r0, [r0, #17]	; fField17
         4b624:	e0841100 	add	r1, r4, r0, lsl #2
         4b628:	e5911028 	ldr	r1, [r1, #40]	; fField40
         4b62c:	e5841014 	str	r1, [r4, #20]	; fField20
         4b630:	e3a05000 	mov	r5, #0	; 0x0
         4b634:	e3300000 	teq	r0, #0	; 0x0
         4b638:	e584100c 	str	r1, [r4, #12]	; fField12
         4b63c:	1a000003 	bne	4b650 <TCardCISIterator::ResetCIS(void)+0x40>
         4b640:	e594001c 	ldr	r0, [r4, #28]	; fField28
         4b644:	eb6e1479 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         4b648:	e5840018 	str	r0, [r4, #24]	; fField24
         4b64c:	ea000000 	b	4b654 <TCardCISIterator::ResetCIS(void)+0x44>
         4b650:	e5845018 	str	r5, [r4, #24]	; fField24
         4b654:	e3a000ff 	mov	r0, #255	; 0xff
         4b658:	e5c40001 	strb	r0, [r4, #1]	; fField1
         4b65c:	e5c45002 	strb	r5, [r4, #2]	; fField2
         4b660:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4b664:	e3c000f0 	bic	r0, r0, #240	; 0xf0
         4b668:	e3801902 	orr	r1, r0, #32768	; 0x8000
         4b66c:	e5841020 	str	r1, [r4, #32]	; fField32
         4b670:	e5d43024 	ldrb	r3, [r4, #36]	; fField36
         4b674:	e5d40011 	ldrb	r0, [r4, #17]	; fField17
         4b678:	e3a02001 	mov	r2, #1	; 0x1
         4b67c:	e1130012 	tst	r3, r2, lsl r0
         4b680:	13811010 	orrne	r1, r1, #16	; 0x10
         4b684:	15841020 	strne	r1, [r4, #32]	; fField32
         4b688:	e5d41010 	ldrb	r1, [r4, #16]	; fField16
         4b68c:	e3510001 	cmp	r1, #1	; 0x1
         4b690:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
         4b694:	e3300000 	teq	r0, #0	; 0x0
         4b698:	e5941020 	ldr	r1, [r4, #32]	; fField32
         4b69c:	13a00080 	movne	r0, #128	; 0x80
         4b6a0:	03a00040 	moveq	r0, #64	; 0x40
         4b6a4:	e1810000 	orr	r0, r1, r0
         4b6a8:	e5a40020 	str	r0, [r4, #32]!	; fField32
         4b6ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardCISIterator::Init(TCardSocket *)
 * Address: 0004b6b0
 */
TCardCISIterator::Init(TCardSocket *) {
    /*
         4b6b0:	e1a0c00d 	mov	ip, sp
         4b6b4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         4b6b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b6bc:	e1a04000 	mov	r4, r0
         4b6c0:	e580101c 	str	r1, [r0, #28]	; fField28
         4b6c4:	eb6ec5d6 	bl	1bfce24 <TCardCISIterator::$ResetFields(void)>
         4b6c8:	e3a000ff 	mov	r0, #255	; 0xff
         4b6cc:	e5c40000 	strb	r0, [r4]
         4b6d0:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4b6d4:	e3c00004 	bic	r0, r0, #4	; 0x4
         4b6d8:	e5840020 	str	r0, [r4, #32]	; fField32
         4b6dc:	e3a00000 	mov	r0, #0	; 0x0
         4b6e0:	e52d0004 	str	r0, [sp, -#4]!
         4b6e4:	e52d006c 	str	r0, [sp, -#108]!
         4b6e8:	e28d0008 	add	r0, sp, #8	; 0x8
         4b6ec:	eb6d9ca0 	bl	1bb2974 <$setjmp>
         4b6f0:	e3300000 	teq	r0, #0	; 0x0
         4b6f4:	1a000042 	bne	4b804 <TCardCISIterator::Init(TCardSocket *)+0x154>
         4b6f8:	e1a0000d 	mov	r0, sp
         4b6fc:	eb6e525e 	bl	1be007c <$AddExceptionHandler>
         4b700:	e594001c 	ldr	r0, [r4, #28]	; fField28
         4b704:	eb6e1029 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         4b708:	e1a06000 	mov	r6, r0
         4b70c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         4b710:	eb6e1446 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         4b714:	e5d01000 	ldrb	r1, [r0]
         4b718:	e3310003 	teq	r1, #3	; 0x3
         4b71c:	05d01001 	ldreqb	r1, [r0, #1]	; fField1
         4b720:	03310003 	teqeq	r1, #3	; 0x3
         4b724:	05d01002 	ldreqb	r1, [r0, #2]	; fField2
         4b728:	03310001 	teqeq	r1, #1	; 0x1
         4b72c:	05d00003 	ldreqb	r0, [r0, #3]
         4b730:	03300001 	teqeq	r0, #1	; 0x1
         4b734:	05d60001 	ldreqb	r0, [r6, #1]	; fField1
         4b738:	03300003 	teqeq	r0, #3	; 0x3
         4b73c:	05d60003 	ldreqb	r0, [r6, #3]
         4b740:	03300001 	teqeq	r0, #1	; 0x1
         4b744:	13a00000 	movne	r0, #0	; 0x0
         4b748:	03a00001 	moveq	r0, #1	; 0x1
         4b74c:	e3300000 	teq	r0, #0	; 0x0
         4b750:	0a000007 	beq	4b774 <TCardCISIterator::Init(TCardSocket *)+0xc4>
         4b754:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4b758:	e3800004 	orr	r0, r0, #4	; 0x4
         4b75c:	e5840020 	str	r0, [r4, #32]	; fField32
         4b760:	e594001c 	ldr	r0, [r4, #28]	; fField28
         4b764:	eb6e2090 	bl	1bd39ac <TCardSocket::$GetControl(void)>
         4b768:	e3c01010 	bic	r1, r0, #16	; 0x10
         4b76c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         4b770:	eb6e4188 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         4b774:	e3a05000 	mov	r5, #0	; 0x0
         4b778:	e0860005 	add	r0, r6, r5
         4b77c:	e2200003 	eor	r0, r0, #3	; 0x3
         4b780:	eb6e1013 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         4b784:	e2855002 	add	r5, r5, #2	; 0x2
         4b788:	e3550010 	cmp	r5, #16	; 0x10
         4b78c:	2a000001 	bcs	4b798 <TCardCISIterator::Init(TCardSocket *)+0xe8>
         4b790:	e3300000 	teq	r0, #0	; 0x0
         4b794:	0afffff7 	beq	4b778 <TCardCISIterator::Init(TCardSocket *)+0xc8>
         4b798:	e5c40001 	strb	r0, [r4, #1]	; fField1
         4b79c:	e3300000 	teq	r0, #0	; 0x0
         4b7a0:	03e00023 	mvneq	r0, #35	; 0x23
         4b7a4:	02400c29 	subeq	r0, r0, #10496	; 0x2900
         4b7a8:	058d006c 	streq	r0, [sp, #108]
         4b7ac:	0a000010 	beq	4b7f4 <TCardCISIterator::Init(TCardSocket *)+0x144>
         4b7b0:	e3e07025 	mvn	r7, #37	; 0x25
         4b7b4:	e2477c29 	sub	r7, r7, #10496	; 0x2900
         4b7b8:	e3300001 	teq	r0, #1	; 0x1
         4b7bc:	0a000002 	beq	4b7cc <TCardCISIterator::Init(TCardSocket *)+0x11c>
         4b7c0:	e33000ff 	teq	r0, #255	; 0xff
         4b7c4:	0a000007 	beq	4b7e8 <TCardCISIterator::Init(TCardSocket *)+0x138>
         4b7c8:	ea000004 	b	4b7e0 <TCardCISIterator::Init(TCardSocket *)+0x130>
         4b7cc:	e0860005 	add	r0, r6, r5
         4b7d0:	e2200003 	eor	r0, r0, #3	; 0x3
         4b7d4:	eb6e0ffe 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         4b7d8:	e3500020 	cmp	r0, #32	; 0x20
         4b7dc:	da000001 	ble	4b7e8 <TCardCISIterator::Init(TCardSocket *)+0x138>
         4b7e0:	e58d706c 	str	r7, [sp, #108]
         4b7e4:	ea000002 	b	4b7f4 <TCardCISIterator::Init(TCardSocket *)+0x144>
         4b7e8:	e59d006c 	ldr	r0, [sp, #108]
         4b7ec:	e3300000 	teq	r0, #0	; 0x0
         4b7f0:	0a000018 	beq	4b858 <TCardCISIterator::Init(TCardSocket *)+0x1a8>
         4b7f4:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4b7f8:	e3800001 	orr	r0, r0, #1	; 0x1
         4b7fc:	e5840020 	str	r0, [r4, #32]	; fField32
         4b800:	ea000014 	b	4b858 <TCardCISIterator::Init(TCardSocket *)+0x1a8>
         4b804:	e59d0060 	ldr	r0, [sp, #96]
         4b808:	e59f1038 	ldr	r1, [pc, #38]	; 4b848 <TCardCISIterator::Init(TCardSocket *)+0x198>
         4b80c:	e5911000 	ldr	r1, [r1]
         4b810:	eb6e5e5f 	bl	1be3194 <$Subexception>
         4b814:	e3300000 	teq	r0, #0	; 0x0
         4b818:	13a000b4 	movne	r0, #180	; 0xb4
         4b81c:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         4b820:	1a000006 	bne	4b840 <TCardCISIterator::Init(TCardSocket *)+0x190>
         4b824:	e59d0060 	ldr	r0, [sp, #96]
         4b828:	e28f1f07 	add	r1, pc, #28	; 0x1c
         4b82c:	eb6e5e58 	bl	1be3194 <$Subexception>
         4b830:	e3300000 	teq	r0, #0	; 0x0
         4b834:	0a000005 	beq	4b850 <TCardCISIterator::Init(TCardSocket *)+0x1a0>
         4b838:	e3a000b5 	mov	r0, #181	; 0xb5
         4b83c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         4b840:	e58d006c 	str	r0, [sp, #108]
         4b844:	ea000003 	b	4b858 <TCardCISIterator::Init(TCardSocket *)+0x1a8>
         4b848:	003712c4 	eoreqs	r1, r7, r4, asr #5
         4b84c:	00000000 	andeq	r0, r0, r0
         4b850:	e1a0000d 	mov	r0, sp
         4b854:	eb6e5a3e 	bl	1be2154 <$NextHandler>
         4b858:	e1a0000d 	mov	r0, sp
         4b85c:	eb6e5615 	bl	1be10b8 <$ExitHandler>
         4b860:	e5bd006c 	ldr	r0, [sp, #108]!
         4b864:	e3300000 	teq	r0, #0	; 0x0
         4b868:	15940020 	ldrne	r0, [r4, #32]	; fField32
         4b86c:	13800003 	orrne	r0, r0, #3	; 0x3
         4b870:	15a40020 	strne	r0, [r4, #32]!	; fField32
         4b874:	e49d0004 	ldr	r0, [sp], #4
         4b878:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCardCISIterator::GetStatus(void)
 * Address: 0004b87c
 */
TCardCISIterator::GetStatus(void) {
    /*
         4b87c:	e5900020 	ldr	r0, [r0, #32]	; fField32
         4b880:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardCISIterator::SelectCIS(unsigned long)
 * Address: 0004b884
 */
TCardCISIterator::SelectCIS(unsigned long) {
    /*
         4b884:	e1a0c00d 	mov	ip, sp
         4b888:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4b88c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b890:	e5d02010 	ldrb	r2, [r0, #16]	; fField16
         4b894:	e1520001 	cmp	r2, r1
         4b898:	93a000ea 	movls	r0, #234	; 0xea
         4b89c:	92400b0a 	subls	r0, r0, #10240	; 0x2800
         4b8a0:	991ba800 	ldmlsdb	fp, {fp, sp, pc}
         4b8a4:	e5c01011 	strb	r1, [r0, #17]	; fField17
         4b8a8:	eb6f0787 	bl	1c0d6cc <TCardCISIterator::$ResetCIS(void)>
         4b8ac:	e3a00000 	mov	r0, #0	; 0x0
         4b8b0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)
 * Address: 0004b8b4
 */
TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char) {
    /*
         4b8b4:	e1a0c00d 	mov	ip, sp
         4b8b8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         4b8bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b8c0:	e1a07000 	mov	r7, r0
         4b8c4:	e1a04001 	mov	r4, r1
         4b8c8:	e1a06002 	mov	r6, r2
         4b8cc:	e1a05003 	mov	r5, r3
         4b8d0:	e59b0004 	ldr	r0, [fp, #4]
         4b8d4:	e20090ff 	and	r9, r0, #255	; 0xff
         4b8d8:	e3a00000 	mov	r0, #0	; 0x0
         4b8dc:	e52d0004 	str	r0, [sp, -#4]!
         4b8e0:	e52d006c 	str	r0, [sp, -#108]!
         4b8e4:	e28d0008 	add	r0, sp, #8	; 0x8
         4b8e8:	eb6d9c21 	bl	1bb2974 <$setjmp>
         4b8ec:	e3300000 	teq	r0, #0	; 0x0
         4b8f0:	1a000027 	bne	4b994 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0xe0>
         4b8f4:	e1a0000d 	mov	r0, sp
         4b8f8:	eb6e51df 	bl	1be007c <$AddExceptionHandler>
         4b8fc:	e5970020 	ldr	r0, [r7, #32]	; fField32
         4b900:	e3100004 	tst	r0, #4	; 0x4
         4b904:	0a00000f 	beq	4b948 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x94>
         4b908:	e3390000 	teq	r9, #0	; 0x0
         4b90c:	1a00000d 	bne	4b948 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x94>
         4b910:	e3a00000 	mov	r0, #0	; 0x0
         4b914:	e3550000 	cmp	r5, #0	; 0x0
         4b918:	9a000032 	bls	4b9e8 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x134>
         4b91c:	e3c41003 	bic	r1, r4, #3	; 0x3
         4b920:	e5911000 	ldr	r1, [r1]
         4b924:	e2042003 	and	r2, r4, #3	; 0x3
         4b928:	e1a02182 	mov	r2, r2, lsl #3
         4b92c:	e1a01231 	mov	r1, r1, lsr r2
         4b930:	e7c61000 	strb	r1, [r6, r0]
         4b934:	e2844001 	add	r4, r4, #1	; 0x1
         4b938:	e2800001 	add	r0, r0, #1	; 0x1
         4b93c:	e1500005 	cmp	r0, r5
         4b940:	3afffff5 	bcc	4b91c <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x68>
         4b944:	ea000027 	b	4b9e8 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x134>
         4b948:	e3a08000 	mov	r8, #0	; 0x0
         4b94c:	e3550000 	cmp	r5, #0	; 0x0
         4b950:	9a000024 	bls	4b9e8 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x134>
         4b954:	e2240003 	eor	r0, r4, #3	; 0x3
         4b958:	e3390000 	teq	r9, #0	; 0x0
         4b95c:	05d00000 	ldreqb	r0, [r0]
         4b960:	07c60008 	streqb	r0, [r6, r8]
         4b964:	0a000004 	beq	4b97c <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0xc8>
         4b968:	eb6e0f99 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         4b96c:	e7c60008 	strb	r0, [r6, r8]
         4b970:	e3390000 	teq	r9, #0	; 0x0
         4b974:	13a00002 	movne	r0, #2	; 0x2
         4b978:	1a000000 	bne	4b980 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0xcc>
         4b97c:	e3a00001 	mov	r0, #1	; 0x1
         4b980:	e0804004 	add	r4, r0, r4
         4b984:	e2888001 	add	r8, r8, #1	; 0x1
         4b988:	e1580005 	cmp	r8, r5
         4b98c:	3afffff0 	bcc	4b954 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0xa0>
         4b990:	ea000014 	b	4b9e8 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x134>
         4b994:	e59d0060 	ldr	r0, [sp, #96]
         4b998:	e59f1038 	ldr	r1, [pc, #38]	; 4b9d8 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x124>
         4b99c:	e5911000 	ldr	r1, [r1]
         4b9a0:	eb6e5dfb 	bl	1be3194 <$Subexception>
         4b9a4:	e3300000 	teq	r0, #0	; 0x0
         4b9a8:	13a000b4 	movne	r0, #180	; 0xb4
         4b9ac:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         4b9b0:	1a000006 	bne	4b9d0 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x11c>
         4b9b4:	e59d0060 	ldr	r0, [sp, #96]
         4b9b8:	e28f1f07 	add	r1, pc, #28	; 0x1c
         4b9bc:	eb6e5df4 	bl	1be3194 <$Subexception>
         4b9c0:	e3300000 	teq	r0, #0	; 0x0
         4b9c4:	0a000005 	beq	4b9e0 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x12c>
         4b9c8:	e3a000b5 	mov	r0, #181	; 0xb5
         4b9cc:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         4b9d0:	e58d006c 	str	r0, [sp, #108]
         4b9d4:	ea000003 	b	4b9e8 <TCardCISIterator::ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x134>
         4b9d8:	003712c4 	eoreqs	r1, r7, r4, asr #5
         4b9dc:	00000000 	andeq	r0, r0, r0
         4b9e0:	e1a0000d 	mov	r0, sp
         4b9e4:	eb6e59da 	bl	1be2154 <$NextHandler>
         4b9e8:	e1a0000d 	mov	r0, sp
         4b9ec:	eb6e55b1 	bl	1be10b8 <$ExitHandler>
         4b9f0:	e5bd006c 	ldr	r0, [sp, #108]!
         4b9f4:	e3300000 	teq	r0, #0	; 0x0
         4b9f8:	15970020 	ldrne	r0, [r7, #32]	; fField32
         4b9fc:	13800003 	orrne	r0, r0, #3	; 0x3
         4ba00:	15a70020 	strne	r0, [r7, #32]!	; fField32
         4ba04:	e49d0004 	ldr	r0, [sp], #4
         4ba08:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCardCISIterator::GetTuple(unsigned char)
 * Address: 0004ba0c
 */
TCardCISIterator::GetTuple(unsigned char) {
    /*
         4ba0c:	e1a0c00d 	mov	ip, sp
         4ba10:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         4ba14:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ba18:	e1a04000 	mov	r4, r0
         4ba1c:	e31100ff 	tst	r1, #255	; 0xff
         4ba20:	e24dd038 	sub	sp, sp, #56	; 0x38
         4ba24:	e3a05000 	mov	r5, #0	; 0x0
         4ba28:	0a000018 	beq	4ba90 <TCardCISIterator::GetTuple(unsigned char)+0x84>
         4ba2c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4ba30:	e3100902 	tst	r0, #32768	; 0x8000
         4ba34:	01a00004 	moveq	r0, r4
         4ba38:	0b6f0723 	bleq	1c0d6cc <TCardCISIterator::$ResetCIS(void)>
         4ba3c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4ba40:	e3c00902 	bic	r0, r0, #32768	; 0x8000
         4ba44:	e5840020 	str	r0, [r4, #32]	; fField32
         4ba48:	e5d41011 	ldrb	r1, [r4, #17]	; fField17
         4ba4c:	e3310000 	teq	r1, #0	; 0x0
         4ba50:	0a00000e 	beq	4ba90 <TCardCISIterator::GetTuple(unsigned char)+0x84>
         4ba54:	e2100010 	ands	r0, r0, #16	; 0x10
         4ba58:	13a00001 	movne	r0, #1	; 0x1
         4ba5c:	e20060ff 	and	r6, r0, #255	; 0xff
         4ba60:	e1a03006 	mov	r3, r6
         4ba64:	e1a0200d 	mov	r2, sp
         4ba68:	e594100c 	ldr	r1, [r4, #12]	; fField12
         4ba6c:	e1a00004 	mov	r0, r4
         4ba70:	eb6f0718 	bl	1c0d6d8 <TCardCISIterator::$VerifyLinkTargetTuple(unsigned char *, unsigned char *, unsigned char)>
         4ba74:	e1b05000 	movs	r5, r0
         4ba78:	1a00006f 	bne	4bc3c <TCardCISIterator::GetTuple(unsigned char)+0x230>
         4ba7c:	e594100c 	ldr	r1, [r4, #12]	; fField12
         4ba80:	e5d40002 	ldrb	r0, [r4, #2]	; fField2
         4ba84:	e2800002 	add	r0, r0, #2	; 0x2
         4ba88:	e0810610 	add	r0, r1, r0, lsl r6
         4ba8c:	e5840014 	str	r0, [r4, #20]	; fField20
         4ba90:	e5940014 	ldr	r0, [r4, #20]	; fField20
         4ba94:	e3300000 	teq	r0, #0	; 0x0
         4ba98:	1a000003 	bne	4baac <TCardCISIterator::GetTuple(unsigned char)+0xa0>
         4ba9c:	e594000c 	ldr	r0, [r4, #12]	; fField12
         4baa0:	e5840014 	str	r0, [r4, #20]	; fField20
         4baa4:	e3300000 	teq	r0, #0	; 0x0
         4baa8:	0a000063 	beq	4bc3c <TCardCISIterator::GetTuple(unsigned char)+0x230>
         4baac:	e3a000ff 	mov	r0, #255	; 0xff
         4bab0:	e5c40001 	strb	r0, [r4, #1]	; fField1
         4bab4:	e28d2002 	add	r2, sp, #2	; 0x2
         4bab8:	e58d2034 	str	r2, [sp, #52]
         4babc:	e28d8003 	add	r8, sp, #3	; 0x3
         4bac0:	e58d8030 	str	r8, [sp, #48]
         4bac4:	e3a09002 	mov	r9, #2	; 0x2
         4bac8:	e3a07000 	mov	r7, #0	; 0x0
         4bacc:	e5941014 	ldr	r1, [r4, #20]	; fField20
         4bad0:	e584100c 	str	r1, [r4, #12]	; fField12
         4bad4:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4bad8:	e2100010 	ands	r0, r0, #16	; 0x10
         4badc:	13a00001 	movne	r0, #1	; 0x1
         4bae0:	e20030ff 	and	r3, r0, #255	; 0xff
         4bae4:	e92d0008 	stmdb	sp!, {r3}
         4bae8:	e1a03009 	mov	r3, r9
         4baec:	e28d2004 	add	r2, sp, #4	; 0x4
         4baf0:	e1a00004 	mov	r0, r4
         4baf4:	eb6ec4cc 	bl	1bfce2c <TCardCISIterator::$ReadCIS(unsigned char *, unsigned char *, unsigned long, unsigned char)>
         4baf8:	e28dd004 	add	sp, sp, #4	; 0x4
         4bafc:	e1b05000 	movs	r5, r0
         4bb00:	1a00004d 	bne	4bc3c <TCardCISIterator::GetTuple(unsigned char)+0x230>
         4bb04:	e5dd0001 	ldrb	r0, [sp, #1]	; fField1
         4bb08:	e5c40002 	strb	r0, [r4, #2]	; fField2
         4bb0c:	e5dd0000 	ldrb	r0, [sp]
         4bb10:	e5c40001 	strb	r0, [r4, #1]	; fField1
         4bb14:	e3500012 	cmp	r0, #18	; 0x12
         4bb18:	0a000006 	beq	4bb38 <TCardCISIterator::GetTuple(unsigned char)+0x12c>
         4bb1c:	ca00001b 	bgt	4bb90 <TCardCISIterator::GetTuple(unsigned char)+0x184>
         4bb20:	e3300000 	teq	r0, #0	; 0x0
         4bb24:	0a000046 	beq	4bc44 <TCardCISIterator::GetTuple(unsigned char)+0x238>
         4bb28:	e3300006 	teq	r0, #6	; 0x6
         4bb2c:	0a000050 	beq	4bc74 <TCardCISIterator::GetTuple(unsigned char)+0x268>
         4bb30:	e3300011 	teq	r0, #17	; 0x11
         4bb34:	1a000028 	bne	4bbdc <TCardCISIterator::GetTuple(unsigned char)+0x1d0>
         4bb38:	eb6bb869 	bl	1b39ce4 <$PatchPoint(void)>
         4bb3c:	e3a07001 	mov	r7, #1	; 0x1
         4bb40:	e1a0100d 	mov	r1, sp
         4bb44:	e1a00004 	mov	r0, r4
         4bb48:	e3a02006 	mov	r2, #6	; 0x6
         4bb4c:	eb6ec4b9 	bl	1bfce38 <TCardCISIterator::$GetTupleData(unsigned char *, unsigned long)>
         4bb50:	e1b05000 	movs	r5, r0
         4bb54:	1a000020 	bne	4bbdc <TCardCISIterator::GetTuple(unsigned char)+0x1d0>
         4bb58:	e1a00004 	mov	r0, r4
         4bb5c:	e59d1034 	ldr	r1, [sp, #52]
         4bb60:	eb6ec4b3 	bl	1bfce34 <TCardCISIterator::$SwapLittleEndianLong(unsigned char *)>
         4bb64:	e1a06000 	mov	r6, r0
         4bb68:	e5d40001 	ldrb	r0, [r4, #1]	; fField1
         4bb6c:	e3300011 	teq	r0, #17	; 0x11
         4bb70:	e594001c 	ldr	r0, [r4, #28]	; fField28
         4bb74:	1a000037 	bne	4bc58 <TCardCISIterator::GetTuple(unsigned char)+0x24c>
         4bb78:	eb6e0f0c 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         4bb7c:	e0800086 	add	r0, r0, r6, lsl #1
         4bb80:	e5840018 	str	r0, [r4, #24]	; fField24
         4bb84:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4bb88:	e3800020 	orr	r0, r0, #32	; 0x20
         4bb8c:	ea000036 	b	4bc6c <TCardCISIterator::GetTuple(unsigned char)+0x260>
         4bb90:	e3300014 	teq	r0, #20	; 0x14
         4bb94:	03a07001 	moveq	r7, #1	; 0x1
         4bb98:	03a00000 	moveq	r0, #0	; 0x0
         4bb9c:	05840018 	streq	r0, [r4, #24]	; fField24
         4bba0:	0a00000d 	beq	4bbdc <TCardCISIterator::GetTuple(unsigned char)+0x1d0>
         4bba4:	e33000ff 	teq	r0, #255	; 0xff
         4bba8:	1a00000b 	bne	4bbdc <TCardCISIterator::GetTuple(unsigned char)+0x1d0>
         4bbac:	eb6bb84c 	bl	1b39ce4 <$PatchPoint(void)>
         4bbb0:	e3a07001 	mov	r7, #1	; 0x1
         4bbb4:	e3a000ff 	mov	r0, #255	; 0xff
         4bbb8:	e5c40002 	strb	r0, [r4, #2]	; fField2
         4bbbc:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4bbc0:	e2103020 	ands	r3, r0, #32	; 0x20
         4bbc4:	13a03001 	movne	r3, #1	; 0x1
         4bbc8:	e1a0200d 	mov	r2, sp
         4bbcc:	e5941018 	ldr	r1, [r4, #24]	; fField24
         4bbd0:	e1a00004 	mov	r0, r4
         4bbd4:	eb6f06bf 	bl	1c0d6d8 <TCardCISIterator::$VerifyLinkTargetTuple(unsigned char *, unsigned char *, unsigned char)>
         4bbd8:	e1a05000 	mov	r5, r0
         4bbdc:	eb6bb840 	bl	1b39ce4 <$PatchPoint(void)>
         4bbe0:	e3350000 	teq	r5, #0	; 0x0
         4bbe4:	1a000012 	bne	4bc34 <TCardCISIterator::GetTuple(unsigned char)+0x228>
         4bbe8:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4bbec:	e2100010 	ands	r0, r0, #16	; 0x10
         4bbf0:	13a00001 	movne	r0, #1	; 0x1
         4bbf4:	e20000ff 	and	r0, r0, #255	; 0xff
         4bbf8:	e594200c 	ldr	r2, [r4, #12]	; fField12
         4bbfc:	e5d41002 	ldrb	r1, [r4, #2]	; fField2
         4bc00:	e0811009 	add	r1, r1, r9
         4bc04:	e0820011 	add	r0, r2, r1, lsl r0
         4bc08:	e5840014 	str	r0, [r4, #20]	; fField20
         4bc0c:	e5d40012 	ldrb	r0, [r4, #18]	; fField18
         4bc10:	e3100001 	tst	r0, #1	; 0x1
         4bc14:	1a000008 	bne	4bc3c <TCardCISIterator::GetTuple(unsigned char)+0x230>
         4bc18:	e3370000 	teq	r7, #0	; 0x0
         4bc1c:	1a000004 	bne	4bc34 <TCardCISIterator::GetTuple(unsigned char)+0x228>
         4bc20:	e5d40000 	ldrb	r0, [r4]
         4bc24:	e33000ff 	teq	r0, #255	; 0xff
         4bc28:	15d41001 	ldrneb	r1, [r4, #1]	; fField1
         4bc2c:	11310000 	teqne	r1, r0
         4bc30:	0a000001 	beq	4bc3c <TCardCISIterator::GetTuple(unsigned char)+0x230>
         4bc34:	e3350000 	teq	r5, #0	; 0x0
         4bc38:	0affffa1 	beq	4bac4 <TCardCISIterator::GetTuple(unsigned char)+0xb8>
         4bc3c:	e1a00005 	mov	r0, r5
         4bc40:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         4bc44:	e3a07001 	mov	r7, #1	; 0x1
         4bc48:	e3a00000 	mov	r0, #0	; 0x0
         4bc4c:	e5c40002 	strb	r0, [r4, #2]	; fField2
         4bc50:	e3a09001 	mov	r9, #1	; 0x1
         4bc54:	eaffffe0 	b	4bbdc <TCardCISIterator::GetTuple(unsigned char)+0x1d0>
         4bc58:	eb6e12f4 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         4bc5c:	e0800006 	add	r0, r0, r6
         4bc60:	e5840018 	str	r0, [r4, #24]	; fField24
         4bc64:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4bc68:	e3c00020 	bic	r0, r0, #32	; 0x20
         4bc6c:	e5840020 	str	r0, [r4, #32]	; fField32
         4bc70:	eaffffd9 	b	4bbdc <TCardCISIterator::GetTuple(unsigned char)+0x1d0>
         4bc74:	eb6bb81a 	bl	1b39ce4 <$PatchPoint(void)>
         4bc78:	e3a07001 	mov	r7, #1	; 0x1
         4bc7c:	e1a0100d 	mov	r1, sp
         4bc80:	e1a00004 	mov	r0, r4
         4bc84:	e3a0202f 	mov	r2, #47	; 0x2f
         4bc88:	eb6ec46a 	bl	1bfce38 <TCardCISIterator::$GetTupleData(unsigned char *, unsigned long)>
         4bc8c:	e1b05000 	movs	r5, r0
         4bc90:	1affffd1 	bne	4bbdc <TCardCISIterator::GetTuple(unsigned char)+0x1d0>
         4bc94:	e5940020 	ldr	r0, [r4, #32]	; fField32
         4bc98:	e3c00080 	bic	r0, r0, #128	; 0x80
         4bc9c:	e3800040 	orr	r0, r0, #64	; 0x40
         4bca0:	e5840020 	str	r0, [r4, #32]	; fField32
         4bca4:	e5dd0002 	ldrb	r0, [sp, #2]	; fField2
         4bca8:	e2800001 	add	r0, r0, #1	; 0x1
         4bcac:	e5c40010 	strb	r0, [r4, #16]	; fField16
         4bcb0:	e3a06001 	mov	r6, #1	; 0x1
         4bcb4:	e20000ff 	and	r0, r0, #255	; 0xff
         4bcb8:	e3500001 	cmp	r0, #1	; 0x1
         4bcbc:	e59d8030 	ldr	r8, [sp, #48]
         4bcc0:	9affffc5 	bls	4bbdc <TCardCISIterator::GetTuple(unsigned char)+0x1d0>
         4bcc4:	e24dd004 	sub	sp, sp, #4	; 0x4
         4bcc8:	e5d80000 	ldrb	r0, [r8]
         4bccc:	e2881001 	add	r1, r8, #1	; 0x1
         4bcd0:	e58d0000 	str	r0, [sp]
         4bcd4:	e1a00004 	mov	r0, r4
         4bcd8:	eb6ec455 	bl	1bfce34 <TCardCISIterator::$SwapLittleEndianLong(unsigned char *)>
         4bcdc:	e1a0a000 	mov	sl, r0
         4bce0:	e59d0000 	ldr	r0, [sp]
         4bce4:	e3300000 	teq	r0, #0	; 0x0
         4bce8:	e594001c 	ldr	r0, [r4, #28]	; fField28
         4bcec:	1a000008 	bne	4bd14 <TCardCISIterator::GetTuple(unsigned char)+0x308>
         4bcf0:	eb6e0eae 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         4bcf4:	e080008a 	add	r0, r0, sl, lsl #1
         4bcf8:	e0841106 	add	r1, r4, r6, lsl #2
         4bcfc:	e5a10028 	str	r0, [r1, #40]!	; fField40
         4bd00:	e5d41024 	ldrb	r1, [r4, #36]	; fField36
         4bd04:	e3a00001 	mov	r0, #1	; 0x1
         4bd08:	e1810610 	orr	r0, r1, r0, lsl r6
         4bd0c:	e5c40024 	strb	r0, [r4, #36]	; fField36
         4bd10:	ea000003 	b	4bd24 <TCardCISIterator::GetTuple(unsigned char)+0x318>
         4bd14:	eb6e12c5 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         4bd18:	e080000a 	add	r0, r0, sl
         4bd1c:	e0841106 	add	r1, r4, r6, lsl #2
         4bd20:	e5a10028 	str	r0, [r1, #40]!	; fField40
         4bd24:	e2888005 	add	r8, r8, #5	; 0x5
         4bd28:	e28dd004 	add	sp, sp, #4	; 0x4
         4bd2c:	e2866001 	add	r6, r6, #1	; 0x1
         4bd30:	e5d40010 	ldrb	r0, [r4, #16]	; fField16
         4bd34:	e1500006 	cmp	r0, r6
         4bd38:	8affffe1 	bhi	4bcc4 <TCardCISIterator::GetTuple(unsigned char)+0x2b8>
         4bd3c:	eaffffa6 	b	4bbdc <TCardCISIterator::GetTuple(unsigned char)+0x1d0>
    */
}

