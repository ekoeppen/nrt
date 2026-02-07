#include "include/TRecognitionManager.h"

/**
 * Symbol: TRecognitionManager::Update(TRect &)
 * Address: 0019d37c
 */
TRecognitionManager::Update(TRect &) {
    /*
        19d37c:	e1a0c00d 	mov	ip, sp
        19d380:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19d384:	e24cb004 	sub	fp, ip, #4	; 0x4
        19d388:	e1a04000 	mov	r4, r0
        19d38c:	e24dd020 	sub	sp, sp, #32	; 0x20
        19d390:	e28d0010 	add	r0, sp, #16	; 0x10
        19d394:	eb6706e4 	bl	1b5ef2c <$FixRect>
        19d398:	e5d40000 	ldrb	r0, [r4]
        19d39c:	e3500001 	cmp	r0, #1	; 0x1
        19d3a0:	ba000020 	blt	19d428 <TRecognitionManager::Update(TRect &)+0xac>
        19d3a4:	e59f0084 	ldr	r0, [pc, #84]	; 19d430 <TRecognitionManager::Update(TRect &)+0xb4>
        19d3a8:	eb63e5d5 	bl	1a96b04 <$GetPreference(RefVar const &)>
        19d3ac:	e3100003 	tst	r0, #3	; 0x3
        19d3b0:	01a00140 	moveq	r0, r0, asr #2
        19d3b4:	0a000000 	beq	19d3bc <TRecognitionManager::Update(TRect &)+0x40>
        19d3b8:	eb689357 	bl	1bc211c <$_RINTError(long)>
        19d3bc:	e1a01000 	mov	r1, r0
        19d3c0:	eb66d558 	bl	1b52928 <$PenSize__FlT1>
        19d3c4:	e28dd010 	add	sp, sp, #16	; 0x10
        19d3c8:	e28d1010 	add	r1, sp, #16	; 0x10
        19d3cc:	e931500c 	ldmdb	r1!, {r2, r3, ip, lr}
        19d3d0:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        19d3d4:	e1a0100d 	mov	r1, sp
        19d3d8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        19d3dc:	eb671b8b 	bl	1b64210 <TController::$UpdateInk(FRect *)>
        19d3e0:	e1a0000d 	mov	r0, sp
        19d3e4:	eb6702c4 	bl	1b5defc <$EmptyRectangle>
        19d3e8:	e3300000 	teq	r0, #0	; 0x0
        19d3ec:	1a00000a 	bne	19d41c <TRecognitionManager::Update(TRect &)+0xa0>
        19d3f0:	e24dd008 	sub	sp, sp, #8	; 0x8
        19d3f4:	e1a0100d 	mov	r1, sp
        19d3f8:	e28d0008 	add	r0, sp, #8	; 0x8
        19d3fc:	eb67177e 	bl	1b631fc <$UnfixRect>
        19d400:	e1a0000d 	mov	r0, sp
        19d404:	eb024288 	bl	22de2c <AdjustForInk(TRect *)>
        19d408:	e1a0100d 	mov	r1, sp
        19d40c:	e59f0020 	ldr	r0, [pc, #20]	; 19d434 <TRecognitionManager::Update(TRect &)+0xb8>	; fField20
        19d410:	e5900000 	ldr	r0, [r0]
        19d414:	eb641766 	bl	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
        19d418:	e28dd008 	add	sp, sp, #8	; 0x8
        19d41c:	e28d1010 	add	r1, sp, #16	; 0x10
        19d420:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        19d424:	ebfea064 	bl	1455bc <StrokeCentral::UpdateCompressGroup(FRect *)>
        19d428:	e3a00000 	mov	r0, #0	; 0x0
        19d42c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        19d430:	00684e50 	rsbeq	r4, r8, r0, asr lr
        19d434:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TRecognitionManager::InitRecognizers(void)
 * Address: 0019d438
 */
TRecognitionManager::InitRecognizers(void) {
    /*
        19d438:	e1a0c00d 	mov	ip, sp
        19d43c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19d440:	e24cb004 	sub	fp, ip, #4	; 0x4
        19d444:	e1a04000 	mov	r4, r0
        19d448:	e5d00000 	ldrb	r0, [r0]
        19d44c:	e3500001 	cmp	r0, #1	; 0x1
        19d450:	ba00000d 	blt	19d48c <TRecognitionManager::InitRecognizers(void)+0x54>
        19d454:	e1a00004 	mov	r0, r4
        19d458:	eb646191 	bl	1ab5aa4 <$InstallGestureRecognizer(TRecognitionManager *)>
        19d45c:	e1a00004 	mov	r0, r4
        19d460:	eb64618d 	bl	1ab5a9c <$InstallEventRecognizer(TRecognitionManager *)>
        19d464:	e1a00004 	mov	r0, r4
        19d468:	eb646190 	bl	1ab5ab0 <$InstallStrokeRecognizer(TRecognitionManager *)>
        19d46c:	e1a00004 	mov	r0, r4
        19d470:	eb646188 	bl	1ab5a98 <$InstallClickRecognizer(TRecognitionManager *)>
        19d474:	e5940008 	ldr	r0, [r4, #8]	; fField8
        19d478:	e28f2f16 	add	r2, pc, #88	; 0x58
        19d47c:	e59f105c 	ldr	r1, [pc, #5c]	; 19d4e0 <TRecognitionManager::InitRecognizers(void)+0xa8>
        19d480:	eb670f04 	bl	1b61098 <$Make__7TDomainSFP11TControllerUlPc>
        19d484:	e59f1058 	ldr	r1, [pc, #58]	; 19d4e4 <TRecognitionManager::InitRecognizers(void)+0xac>
        19d488:	e5810000 	str	r0, [r1]
        19d48c:	e24dd004 	sub	sp, sp, #4	; 0x4
        19d490:	e5d40000 	ldrb	r0, [r4]
        19d494:	e3500002 	cmp	r0, #2	; 0x2
        19d498:	ba000005 	blt	19d4b4 <TRecognitionManager::InitRecognizers(void)+0x7c>
        19d49c:	e1a00004 	mov	r0, r4
        19d4a0:	eb646181 	bl	1ab5aac <$InstallShapeRecognizer(TRecognitionManager *)>
        19d4a4:	e1a00004 	mov	r0, r4
        19d4a8:	eb650695 	bl	1adef04 <$InstallWordRecognizer(TRecognitionManager *)>
        19d4ac:	e1a00004 	mov	r0, r4
        19d4b0:	eb64617f 	bl	1ab5ab4 <$InstallWRecRecognizer(TRecognitionManager *)>
        19d4b4:	e3a00002 	mov	r0, #2	; 0x2
        19d4b8:	eb689323 	bl	1bc214c <$AllocateRefHandle(long)>
        19d4bc:	e58d0000 	str	r0, [sp]
        19d4c0:	e1a0000d 	mov	r0, sp
        19d4c4:	eb6406a2 	bl	1a9ef54 <$ReadDomainOptions>
        19d4c8:	e59d0000 	ldr	r0, [sp]
        19d4cc:	eb68973a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        19d4d0:	e3a00000 	mov	r0, #0	; 0x0
        19d4d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        19d4d8:	54446f6d 	strplb	r6, [r4], -#3949	; fField3949
        19d4dc:	61696e00 	cmnvs	r9, r0, lsl #28
        19d4e0:	524f4f54 	subpl	r4, pc, #336	; 0x150
        19d4e4:	0c101884 	ldceq	8, cr1, [r0], -#528
    */
}

/**
 * Symbol: TRecognitionManager::EnableModalRecognition(TRect &)
 * Address: 0019d4e8
 */
TRecognitionManager::EnableModalRecognition(TRect &) {
    /*
        19d4e8:	e1a0c00d 	mov	ip, sp
        19d4ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19d4f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        19d4f4:	e1a04000 	mov	r4, r0
        19d4f8:	e1a05001 	mov	r5, r1
        19d4fc:	e5900028 	ldr	r0, [r0, #40]	; fField40
        19d500:	e3300000 	teq	r0, #0	; 0x0
        19d504:	128f0f07 	addne	r0, pc, #28	; 0x1c
        19d508:	1b691724 	blne	1be31a0 <$ThrowMsg>
        19d50c:	e3a00008 	mov	r0, #8	; 0x8
        19d510:	eb68c488 	bl	1bce738 <$__nw(unsigned int)>
        19d514:	e3300000 	teq	r0, #0	; 0x0
        19d518:	18955000 	ldmneia	r5, {ip, lr}
        19d51c:	18805000 	stmneia	r0, {ip, lr}
        19d520:	e5a40028 	str	r0, [r4, #40]!	; fField40
        19d524:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        19d528:	43616e27 	cmnmi	r1, #624	; 0x270
        19d52c:	74206e65 	strvct	r6, [r0], -#3685
        19d530:	7374206d 	cmnvc	r4, #109	; 0x6d
        19d534:	6f64616c 	swivs	0x0064616c
        19d538:	20626f75 	rsbcs	r6, r2, r5, ror pc
        19d53c:	6e647300 	cdpvs	3, 6, cr7, cr4, cr0, {0}
    */
}

/**
 * Symbol: TRecognitionManager::DisableModalRecognition(void)
 * Address: 0019d540
 */
TRecognitionManager::DisableModalRecognition(void) {
    /*
        19d540:	e1a0c00d 	mov	ip, sp
        19d544:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19d548:	e24cb004 	sub	fp, ip, #4	; 0x4
        19d54c:	e1a04000 	mov	r4, r0
        19d550:	e5900028 	ldr	r0, [r0, #40]	; fField40
        19d554:	e3300000 	teq	r0, #0	; 0x0
        19d558:	1b68c060 	blne	1bcd6e0 <$__dl(void *)>
        19d55c:	e3a00000 	mov	r0, #0	; 0x0
        19d560:	e5a40028 	str	r0, [r4, #40]!	; fField40
        19d564:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRecognitionManager::ModalRecognitionOK(TRect &)
 * Address: 0019d568
 */
TRecognitionManager::ModalRecognitionOK(TRect &) {
    /*
        19d568:	e1a0c00d 	mov	ip, sp
        19d56c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19d570:	e24cb004 	sub	fp, ip, #4	; 0x4
        19d574:	e5b04028 	ldr	r4, [r0, #40]!	; fField40
        19d578:	e3340000 	teq	r4, #0	; 0x0
        19d57c:	03a00001 	moveq	r0, #1	; 0x1
        19d580:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        19d584:	e24dd004 	sub	sp, sp, #4	; 0x4
        19d588:	e1a0000d 	mov	r0, sp
        19d58c:	ebffe8bc 	bl	197884 <TRect::MidPoint( const(void))>
        19d590:	e24dd004 	sub	sp, sp, #4	; 0x4
        19d594:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        19d598:	e1a01004 	mov	r1, r4
        19d59c:	e48d0004 	str	r0, [sp], #4	; fField4
        19d5a0:	eb66d4e5 	bl	1b5293c <$PtInRect(Point, Rect *)>
        19d5a4:	e28dd004 	add	sp, sp, #4	; 0x4
        19d5a8:	e1b04000 	movs	r4, r0
        19d5ac:	1a000006 	bne	19d5cc <TRecognitionManager::ModalRecognitionOK(TRect &)+0x64>
        19d5b0:	e59f001c 	ldr	r0, [pc, #1c]	; 19d5d4 <TRecognitionManager::ModalRecognitionOK(TRect &)+0x6c>
        19d5b4:	e5900000 	ldr	r0, [r0]
        19d5b8:	e5901050 	ldr	r1, [r0, #80]	; fField80
        19d5bc:	e3310000 	teq	r1, #0	; 0x0
        19d5c0:	13a02001 	movne	r2, #1	; 0x1
        19d5c4:	13a01000 	movne	r1, #0	; 0x0
        19d5c8:	1b6412d7 	blne	1aa212c <TRootView::$SetPopup(TView *, unsigned char)>
        19d5cc:	e1a00004 	mov	r0, r4
        19d5d0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        19d5d4:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TRecognitionManager::IgnoreClicks(unsigned long)
 * Address: 0019d630
 */
TRecognitionManager::IgnoreClicks(unsigned long) {
    /*
        19d630:	e1a0c00d 	mov	ip, sp
        19d634:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19d638:	e24cb004 	sub	fp, ip, #4	; 0x4
        19d63c:	e1a05000 	mov	r5, r0
        19d640:	e1a04001 	mov	r4, r1
        19d644:	eb673bee 	bl	1b6c604 <$GetTicks(void)>
        19d648:	e0800004 	add	r0, r0, r4
        19d64c:	e5a50018 	str	r0, [r5, #24]!	; fField24
        19d650:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRecognitionManager::SetNextClick(unsigned long)
 * Address: 0019d654
 */
TRecognitionManager::SetNextClick(unsigned long) {
    /*
        19d654:	e5902018 	ldr	r2, [r0, #24]	; fField24
        19d658:	e1520001 	cmp	r2, r1
        19d65c:	3a000002 	bcc	19d66c <TRecognitionManager::SetNextClick(unsigned long)+0x18>
        19d660:	e0421001 	sub	r1, r2, r1
        19d664:	e351003c 	cmp	r1, #60	; 0x3c
        19d668:	91a0f00e 	movls	pc, lr
        19d66c:	e3a01000 	mov	r1, #0	; 0x0
        19d670:	e5a01018 	str	r1, [r0, #24]!	; fField24
        19d674:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognitionManager::SaveClickView(TView *)
 * Address: 0019d678
 */
TRecognitionManager::SaveClickView(TView *) {
    /*
        19d678:	e5902030 	ldr	r2, [r0, #48]	; fField48
        19d67c:	e5a0202c 	str	r2, [r0, #44]!	; fField44
        19d680:	e5801004 	str	r1, [r0, #4]	; fField4
        19d684:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognitionManager::RemoveClickView(TView *)
 * Address: 0019d688
 */
TRecognitionManager::RemoveClickView(TView *) {
    /*
        19d688:	e3a02000 	mov	r2, #0	; 0x0
        19d68c:	e590302c 	ldr	r3, [r0, #44]	; fField44
        19d690:	e1330001 	teq	r3, r1
        19d694:	0580202c 	streq	r2, [r0, #44]	; fField44
        19d698:	e5903030 	ldr	r3, [r0, #48]	; fField48
        19d69c:	e1330001 	teq	r3, r1
        19d6a0:	05a02030 	streq	r2, [r0, #48]!	; fField48
        19d6a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecognitionManager::Init(unsigned char)
 * Address: 0019e124
 */
TRecognitionManager::Init(unsigned char) {
    /*
        19e124:	e1a0c00d 	mov	ip, sp
        19e128:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        19e12c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19e130:	e1a04000 	mov	r4, r0
        19e134:	e20100ff 	and	r0, r1, #255	; 0xff
        19e138:	e3a05000 	mov	r5, #0	; 0x0
        19e13c:	e5845004 	str	r5, [r4, #4]	; fField4
        19e140:	e5845008 	str	r5, [r4, #8]	; fField8
        19e144:	e584500c 	str	r5, [r4, #12]	; fField12
        19e148:	e5845010 	str	r5, [r4, #16]	; fField16
        19e14c:	e3a01001 	mov	r1, #1	; 0x1
        19e150:	e5845018 	str	r5, [r4, #24]	; fField24
        19e154:	e5c4101c 	strb	r1, [r4, #28]	; fField28
        19e158:	e5c40000 	strb	r0, [r4]
        19e15c:	e5845028 	str	r5, [r4, #40]	; fField40
        19e160:	eb64626c 	bl	1ab6b18 <$Make__15TRecognizerListSFv>
        19e164:	e5840014 	str	r0, [r4, #20]	; fField20
        19e168:	e5d40000 	ldrb	r0, [r4]
        19e16c:	e3500001 	cmp	r0, #1	; 0x1
        19e170:	ba000017 	blt	19e1d4 <TRecognitionManager::Init(unsigned char)+0xb0>
        19e174:	e59f0088 	ldr	r0, [pc, #88]	; 19e204 <TRecognitionManager::Init(unsigned char)+0xe0>
        19e178:	e1a06000 	mov	r6, r0
        19e17c:	eb63eec5 	bl	1a99c98 <StrokeCentral::$Init(void)>
        19e180:	e5846004 	str	r6, [r4, #4]	; fField4
        19e184:	eb63459a 	bl	1a6f7f4 <$InitializeParagraphCompression(void)>
        19e188:	eb645a2c 	bl	1ab4a40 <$InitAreas(void)>
        19e18c:	e5840010 	str	r0, [r4, #16]	; fField16
        19e190:	eb6707b9 	bl	1b6007c <$Make__11TControllerSFv>
        19e194:	e5840008 	str	r0, [r4, #8]	; fField8
        19e198:	e59f1068 	ldr	r1, [pc, #68]	; 19e208 <TRecognitionManager::Init(unsigned char)+0xe4>
        19e19c:	e5810000 	str	r0, [r1]
        19e1a0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        19e1a4:	eb670bbc 	bl	1b6109c <$Make__8TArbiterSFP11TController>
        19e1a8:	e584000c 	str	r0, [r4, #12]	; fField12
        19e1ac:	e59f1058 	ldr	r1, [pc, #58]	; 19e20c <TRecognitionManager::Init(unsigned char)+0xe8>
        19e1b0:	e5810000 	str	r0, [r1]
        19e1b4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        19e1b8:	e59f1050 	ldr	r1, [pc, #50]	; 19e210 <TRecognitionManager::Init(unsigned char)+0xec>
        19e1bc:	eb670fed 	bl	1b62178 <TController::$SetHitTestRoutine(unsigned long (*)(TUnit *, TArray *))>
        19e1c0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        19e1c4:	e59f1048 	ldr	r1, [pc, #48]	; 19e214 <TRecognitionManager::Init(unsigned char)+0xf0>	; fField48
        19e1c8:	eb670fe8 	bl	1b62170 <TController::$SetExpireStrokeRoutine(void (*)(TUnit *))>
        19e1cc:	e59f0044 	ldr	r0, [pc, #44]	; 19e218 <TRecognitionManager::Init(unsigned char)+0xf4>	; fField44
        19e1d0:	eb67246b 	bl	1b67384 <$SetContextUnitRoutine(TUnitList *(*)(TUnit *, long))>
        19e1d4:	e5d40000 	ldrb	r0, [r4]
        19e1d8:	e3500002 	cmp	r0, #2	; 0x2
        19e1dc:	ab63eeb2 	blge	1a99cac <$InitDictionaries(void)>
        19e1e0:	e5d40000 	ldrb	r0, [r4]
        19e1e4:	e3500001 	cmp	r0, #1	; 0x1
        19e1e8:	ba000003 	blt	19e1fc <TRecognitionManager::Init(unsigned char)+0xd8>
        19e1ec:	e1a00004 	mov	r0, r4
        19e1f0:	eb645a16 	bl	1ab4a50 <TRecognitionManager::$InitRecognizers(void)>
        19e1f4:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        19e1f8:	eb670784 	bl	1b60010 <TController::$Initialize(void)>
        19e1fc:	e1a00005 	mov	r0, r5
        19e200:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        19e204:	0c1018cc 	ldceq	8, cr1, [r0], -#816
        19e208:	0c10187c 	ldceq	8, cr1, [r0], -#496
        19e20c:	0c101880 	ldceq	8, cr1, [r0], -#512
        19e210:	01a95a9c 	streqb	r5, [r9, ip]!
        19e214:	01a97ba8 	moveq	r7, r8, lsr #23
        19e218:	01a97bac 	moveq	r7, ip, lsr #23
    */
}

/**
 * Symbol: TRecognitionManager::SaveRecognitionState(unsigned char *)
 * Address: 0019e21c
 */
TRecognitionManager::SaveRecognitionState(unsigned char *) {
    /*
        19e21c:	e1a0c00d 	mov	ip, sp
        19e220:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        19e224:	e24cb004 	sub	fp, ip, #4	; 0x4
        19e228:	e1a04000 	mov	r4, r0
        19e22c:	e1a05001 	mov	r5, r1
        19e230:	e3a08000 	mov	r8, #0	; 0x0
        19e234:	e5c18000 	strb	r8, [r1]
        19e238:	e3a00014 	mov	r0, #20	; 0x14
        19e23c:	eb68c13d 	bl	1bce738 <$__nw(unsigned int)>
        19e240:	e1a06000 	mov	r6, r0
        19e244:	e3a07001 	mov	r7, #1	; 0x1
        19e248:	e3500000 	cmp	r0, #0	; 0x0
        19e24c:	05c57000 	streqb	r7, [r5]
        19e250:	0a00001d 	beq	19e2cc <TRecognitionManager::SaveRecognitionState(unsigned char *)+0xb0>
        19e254:	0a00001c 	beq	19e2cc <TRecognitionManager::SaveRecognitionState(unsigned char *)+0xb0>
        19e258:	e594003c 	ldr	r0, [r4, #60]	; fField60
        19e25c:	e5860000 	str	r0, [r6]
        19e260:	e5940018 	ldr	r0, [r4, #24]	; fField24
        19e264:	e5860004 	str	r0, [r6, #4]	; fField4
        19e268:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
        19e26c:	e5c60008 	strb	r0, [r6, #8]	; fField8
        19e270:	e5d40038 	ldrb	r0, [r4, #56]	; fField56
        19e274:	e5c60009 	strb	r0, [r6, #9]
        19e278:	e24dd008 	sub	sp, sp, #8	; 0x8
        19e27c:	e28d1004 	add	r1, sp, #4	; 0x4
        19e280:	e59f0050 	ldr	r0, [pc, #50]	; 19e2d8 <TRecognitionManager::SaveRecognitionState(unsigned char *)+0xbc>
        19e284:	eb646e8c 	bl	1ab9cbc <StrokeCentral::$SaveRecognitionState(unsigned char *)>
        19e288:	e1a0100d 	mov	r1, sp
        19e28c:	e586000c 	str	r0, [r6, #12]	; fField12
        19e290:	e59f0044 	ldr	r0, [pc, #44]	; 19e2dc <TRecognitionManager::SaveRecognitionState(unsigned char *)+0xc0>	; fField44
        19e294:	e5900000 	ldr	r0, [r0]
        19e298:	eb67201e 	bl	1b66318 <$SaveRecognitionState(TController *, unsigned char *)>
        19e29c:	e5860010 	str	r0, [r6, #16]	; fField16
        19e2a0:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        19e2a4:	e3300000 	teq	r0, #0	; 0x0
        19e2a8:	05dd0000 	ldreqb	r0, [sp]
        19e2ac:	03300000 	teqeq	r0, #0	; 0x0
        19e2b0:	15c57000 	strneb	r7, [r5]
        19e2b4:	e5848018 	str	r8, [r4, #24]	; fField24
        19e2b8:	e5c4801c 	strb	r8, [r4, #28]	; fField28
        19e2bc:	e5c48038 	strb	r8, [r4, #56]	; fField56
        19e2c0:	e584802c 	str	r8, [r4, #44]	; fField44
        19e2c4:	e5a48030 	str	r8, [r4, #48]!	; fField48
        19e2c8:	e28dd008 	add	sp, sp, #8	; 0x8
        19e2cc:	eb640315 	bl	1a9ef28 <$PurgeAreaCache(void)>
        19e2d0:	e1a00006 	mov	r0, r6
        19e2d4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        19e2d8:	0c1018cc 	ldceq	8, cr1, [r0], -#816
        19e2dc:	0c10187c 	ldceq	8, cr1, [r0], -#496
    */
}

/**
 * Symbol: TRecognitionManager::RestoreRecognitionState(unsigned long)
 * Address: 0019e2e0
 */
TRecognitionManager::RestoreRecognitionState(unsigned long) {
    /*
        19e2e0:	e1a0c00d 	mov	ip, sp
        19e2e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19e2e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        19e2ec:	e1a04000 	mov	r4, r0
        19e2f0:	e3310000 	teq	r1, #0	; 0x0
        19e2f4:	0a000014 	beq	19e34c <TRecognitionManager::RestoreRecognitionState(unsigned long)+0x6c>
        19e2f8:	e1a05001 	mov	r5, r1
        19e2fc:	e5910000 	ldr	r0, [r1]
        19e300:	e584003c 	str	r0, [r4, #60]	; fField60
        19e304:	e5910004 	ldr	r0, [r1, #4]	; fField4
        19e308:	e5840018 	str	r0, [r4, #24]	; fField24
        19e30c:	e5d10008 	ldrb	r0, [r1, #8]	; fField8
        19e310:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        19e314:	e5d10009 	ldrb	r0, [r1, #9]
        19e318:	e5c40038 	strb	r0, [r4, #56]	; fField56
        19e31c:	e591100c 	ldr	r1, [r1, #12]	; fField12
        19e320:	e59f002c 	ldr	r0, [pc, #2c]	; 19e354 <TRecognitionManager::RestoreRecognitionState(unsigned long)+0x74>
        19e324:	eb646e5f 	bl	1ab9ca8 <StrokeCentral::$RestoreRecognitionState(unsigned long)>
        19e328:	e5951010 	ldr	r1, [r5, #16]	; fField16
        19e32c:	e59f0024 	ldr	r0, [pc, #24]	; 19e358 <TRecognitionManager::RestoreRecognitionState(unsigned long)+0x78>	; fField24
        19e330:	e5900000 	ldr	r0, [r0]
        19e334:	eb671ff5 	bl	1b66310 <$RestoreRecognitionState(TController *, unsigned long)>
        19e338:	e3a00000 	mov	r0, #0	; 0x0
        19e33c:	e584002c 	str	r0, [r4, #44]	; fField44
        19e340:	e5a40030 	str	r0, [r4, #48]!	; fField48
        19e344:	e1a00005 	mov	r0, r5
        19e348:	eb68bce4 	bl	1bcd6e0 <$__dl(void *)>
        19e34c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        19e350:	ea6402f4 	b	1a9ef28 <$PurgeAreaCache(void)>
        19e354:	0c1018cc 	ldceq	8, cr1, [r0], -#816
        19e358:	0c10187c 	ldceq	8, cr1, [r0], -#496
    */
}

/**
 * Symbol: TRecognitionManager::Idle(void)
 * Address: 0019e35c
 */
TRecognitionManager::Idle(void) {
    /*
        19e35c:	e1a0c00d 	mov	ip, sp
        19e360:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19e364:	e24cb004 	sub	fp, ip, #4	; 0x4
        19e368:	e1a04000 	mov	r4, r0
        19e36c:	e5d00000 	ldrb	r0, [r0]
        19e370:	e3500001 	cmp	r0, #1	; 0x1
        19e374:	ba000004 	blt	19e38c <TRecognitionManager::Idle(void)+0x30>
        19e378:	eb63ee44 	bl	1a99c90 <$IdleStrokes(void)>
        19e37c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        19e380:	eb63ee3e 	bl	1a99c80 <StrokeCentral::$IdleCompress(void)>
        19e384:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        19e388:	eb670719 	bl	1b5fff4 <TController::$Idle(void)>
        19e38c:	e3a00000 	mov	r0, #0	; 0x0
        19e390:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRecognitionManager::NextIdle(void)
 * Address: 0019e394
 */
TRecognitionManager::NextIdle(void) {
    /*
        19e394:	e1a0c00d 	mov	ip, sp
        19e398:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19e39c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19e3a0:	e1a04000 	mov	r4, r0
        19e3a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        19e3a8:	e59f505c 	ldr	r5, [pc, #5c]	; 19e40c <TRecognitionManager::NextIdle(void)+0x78>
        19e3ac:	e8951008 	ldmia	r5, {r3, ip}
        19e3b0:	e88d1008 	stmia	sp, {r3, ip}
        19e3b4:	e3e00000 	mvn	r0, #0	; 0x0
        19e3b8:	e5d12000 	ldrb	r2, [r1]
        19e3bc:	e3520001 	cmp	r2, #1	; 0x1
        19e3c0:	ba000013 	blt	19e414 <TRecognitionManager::NextIdle(void)+0x80>
        19e3c4:	e5b10004 	ldr	r0, [r1, #4]!	; fField4
        19e3c8:	e280002c 	add	r0, r0, #44	; 0x2c
        19e3cc:	e8905000 	ldmia	r0, {ip, lr}
        19e3d0:	e88d5000 	stmia	sp, {ip, lr}
        19e3d4:	e59f0034 	ldr	r0, [pc, #34]	; 19e410 <TRecognitionManager::NextIdle(void)+0x7c>
        19e3d8:	e5900000 	ldr	r0, [r0]
        19e3dc:	eb670b40 	bl	1b610e4 <TController::$NextIdleTime(void)>
        19e3e0:	e3700001 	cmn	r0, #1	; 0x1
        19e3e4:	1a00000a 	bne	19e414 <TRecognitionManager::NextIdle(void)+0x80>
        19e3e8:	e1b00004 	movs	r0, r4
        19e3ec:	1a000003 	bne	19e400 <TRecognitionManager::NextIdle(void)+0x6c>
        19e3f0:	e3a00008 	mov	r0, #8	; 0x8
        19e3f4:	eb68c0cf 	bl	1bce738 <$__nw(unsigned int)>
        19e3f8:	e3300000 	teq	r0, #0	; 0x0
        19e3fc:	0a000001 	beq	19e408 <TRecognitionManager::NextIdle(void)+0x74>
        19e400:	e89d1008 	ldmia	sp, {r3, ip}
        19e404:	e8801008 	stmia	r0, {r3, ip}
        19e408:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        19e40c:	0c101690 	ldceq	6, cr1, [r0], -#576
        19e410:	0c10187c 	ldceq	8, cr1, [r0], -#496
        19e414:	e24dd010 	sub	sp, sp, #16	; 0x10
        19e418:	e3a01066 	mov	r1, #102	; 0x66
        19e41c:	e2811c0e 	add	r1, r1, #3584	; 0xe00
        19e420:	e0010190 	mul	r1, r0, r1
        19e424:	e1a0000d 	mov	r0, sp
        19e428:	eb68fe98 	bl	1bdde90 <$TimeFromNow>
        19e42c:	e28d1008 	add	r1, sp, #8	; 0x8
        19e430:	e89d5000 	ldmia	sp, {ip, lr}
        19e434:	e8815000 	stmia	r1, {ip, lr}
        19e438:	e1a01005 	mov	r1, r5
        19e43c:	e28d0010 	add	r0, sp, #16	; 0x10
        19e440:	eb690b10 	bl	1be1088 <$CompCompare>
        19e444:	e3300000 	teq	r0, #0	; 0x0
        19e448:	0a000004 	beq	19e460 <TRecognitionManager::NextIdle(void)+0xcc>
        19e44c:	e28d1010 	add	r1, sp, #16	; 0x10
        19e450:	e28d0008 	add	r0, sp, #8	; 0x8
        19e454:	eb690b0b 	bl	1be1088 <$CompCompare>
        19e458:	e3500000 	cmp	r0, #0	; 0x0
        19e45c:	aa000007 	bge	19e480 <TRecognitionManager::NextIdle(void)+0xec>
        19e460:	e1b00004 	movs	r0, r4
        19e464:	1a000003 	bne	19e478 <TRecognitionManager::NextIdle(void)+0xe4>
        19e468:	e3a00008 	mov	r0, #8	; 0x8
        19e46c:	eb68c0b1 	bl	1bce738 <$__nw(unsigned int)>
        19e470:	e3300000 	teq	r0, #0	; 0x0
        19e474:	0a00000a 	beq	19e4a4 <TRecognitionManager::NextIdle(void)+0x110>
        19e478:	e28d1008 	add	r1, sp, #8	; 0x8
        19e47c:	ea000006 	b	19e49c <TRecognitionManager::NextIdle(void)+0x108>
        19e480:	e1b00004 	movs	r0, r4
        19e484:	1a000003 	bne	19e498 <TRecognitionManager::NextIdle(void)+0x104>
        19e488:	e3a00008 	mov	r0, #8	; 0x8
        19e48c:	eb68c0a9 	bl	1bce738 <$__nw(unsigned int)>
        19e490:	e3300000 	teq	r0, #0	; 0x0
        19e494:	0a000002 	beq	19e4a4 <TRecognitionManager::NextIdle(void)+0x110>
        19e498:	e28d1010 	add	r1, sp, #16	; 0x10
        19e49c:	e8911008 	ldmia	r1, {r3, ip}
        19e4a0:	e8801008 	stmia	r0, {r3, ip}
        19e4a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

