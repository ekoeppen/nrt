#include "include/PScriptDataIn.h"

/**
 * Symbol: Sizeof__13PScriptDataInSFv
 * Address: 001cd534
 */
void PScriptDataIn::Sizeof() {
    /*
        1cd534:	e3a00010 	mov	r0, #16	; 0x10
        1cd538:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PScriptDataIn::New(void)
 * Address: 001cd53c
 */
PScriptDataIn::New(void) {
    /*
        1cd53c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PScriptDataIn::Delete(void)
 * Address: 001cd540
 */
PScriptDataIn::Delete(void) {
    /*
        1cd540:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PScriptDataIn::Translate(void *, PipeCallBack *)
 * Address: 001cd544
 */
PScriptDataIn::Translate(void *, PipeCallBack *) {
    /*
        1cd544:	e1a0c00d 	mov	ip, sp
        1cd548:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1cd54c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cd550:	e1a05000 	mov	r5, r0
        1cd554:	e1a04001 	mov	r4, r1
        1cd558:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cd55c:	e3a00002 	mov	r0, #2	; 0x2
        1cd560:	eb67d2f9 	bl	1bc214c <$AllocateRefHandle(long)>
        1cd564:	e1a06000 	mov	r6, r0
        1cd568:	e3a00000 	mov	r0, #0	; 0x0
        1cd56c:	e3340000 	teq	r4, #0	; 0x0
        1cd570:	e58d0000 	str	r0, [sp]
        1cd574:	0a00000f 	beq	1cd5b8 <PScriptDataIn::Translate(void *, PipeCallBack *)+0x74>
        1cd578:	e1a0300d 	mov	r3, sp
        1cd57c:	e2842010 	add	r2, r4, #16	; 0x10
        1cd580:	e5941000 	ldr	r1, [r4]
        1cd584:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1cd588:	e1a00005 	mov	r0, r5
        1cd58c:	e5b43004 	ldr	r3, [r4, #4]!
        1cd590:	e9940006 	ldmib	r4, {r1, r2}
        1cd594:	eb676792 	bl	1ba73e4 <PScriptDataIn::$ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)>
        1cd598:	e5860000 	str	r0, [r6]
        1cd59c:	e5bd100c 	ldr	r1, [sp, #12]!
        1cd5a0:	e3310000 	teq	r1, #0	; 0x0
        1cd5a4:	0a000003 	beq	1cd5b8 <PScriptDataIn::Translate(void *, PipeCallBack *)+0x74>
        1cd5a8:	e59f001c 	ldr	r0, [pc, #1c]	; 1cd5cc <PScriptDataIn::Translate(void *, PipeCallBack *)+0x88>
        1cd5ac:	e5900000 	ldr	r0, [r0]
        1cd5b0:	e3a02000 	mov	r2, #0	; 0x0
        1cd5b4:	eb6856f8 	bl	1be319c <$Throw>
        1cd5b8:	e5964000 	ldr	r4, [r6]
        1cd5bc:	e1a00006 	mov	r0, r6
        1cd5c0:	eb67d6fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cd5c4:	e1a00004 	mov	r0, r4
        1cd5c8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1cd5cc:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)
 * Address: 001cd5d0
 */
PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *) {
    /*
        1cd5d0:	e1a0c00d 	mov	ip, sp
        1cd5d4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1cd5d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cd5dc:	e1a06001 	mov	r6, r1
        1cd5e0:	e1a05002 	mov	r5, r2
        1cd5e4:	e1a04003 	mov	r4, r3
        1cd5e8:	e59b700c 	ldr	r7, [fp, #12]
        1cd5ec:	e99b0500 	ldmib	fp, {r8, sl}
        1cd5f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cd5f4:	e3a09002 	mov	r9, #2	; 0x2
        1cd5f8:	e1a00009 	mov	r0, r9
        1cd5fc:	eb67d2d2 	bl	1bc214c <$AllocateRefHandle(long)>
        1cd600:	e40d006c 	str	r0, [sp], -#108
        1cd604:	e3a00000 	mov	r0, #0	; 0x0
        1cd608:	e5870000 	str	r0, [r7]
        1cd60c:	e58d0000 	str	r0, [sp]
        1cd610:	e28d0008 	add	r0, sp, #8	; 0x8
        1cd614:	eb6794d6 	bl	1bb2974 <$setjmp>
        1cd618:	e3300000 	teq	r0, #0	; 0x0
        1cd61c:	159d0064 	ldrne	r0, [sp, #100]
        1cd620:	1a00007a 	bne	1cd810 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x240>
        1cd624:	e1a0000d 	mov	r0, sp
        1cd628:	eb684a93 	bl	1be007c <$AddExceptionHandler>
        1cd62c:	e2460002 	sub	r0, r6, #2	; 0x2
        1cd630:	e3500006 	cmp	r0, #6	; 0x6
        1cd634:	908ff100 	addls	pc, pc, r0, lsl #2
        1cd638:	ea000073 	b	1cd80c <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x23c>
        1cd63c:	ea000052 	b	1cd78c <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x1bc>
        1cd640:	ea000026 	b	1cd6e0 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x110>
        1cd644:	ea00004b 	b	1cd778 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x1a8>
        1cd648:	ea000033 	b	1cd71c <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x14c>
        1cd64c:	ea00005c 	b	1cd7c4 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x1f4>
        1cd650:	ea00006d 	b	1cd80c <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x23c>
        1cd654:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cd658:	e1a03005 	mov	r3, r5
        1cd65c:	e1a02007 	mov	r2, r7
        1cd660:	e1a0100a 	mov	r1, sl
        1cd664:	e1a00008 	mov	r0, r8
        1cd668:	eb677bfa 	bl	1bac658 <$ConstructReturnValue(void *, RefVar const &, long *, int)>
        1cd66c:	eb67d2b6 	bl	1bc214c <$AllocateRefHandle(long)>
        1cd670:	e58d0000 	str	r0, [sp]
        1cd674:	e5970000 	ldr	r0, [r7]
        1cd678:	e3300000 	teq	r0, #0	; 0x0
        1cd67c:	1a000010 	bne	1cd6c4 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0xf4>
        1cd680:	e1a0000d 	mov	r0, sp
        1cd684:	eb6898c0 	bl	1bf398c <$IsArray(RefVar const &)>
        1cd688:	e3300000 	teq	r0, #0	; 0x0
        1cd68c:	159f1040 	ldrne	r1, [pc, #40]	; 1cd6d4 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x104>
        1cd690:	11a0000d 	movne	r0, sp
        1cd694:	1b67e330 	blne	1bc635c <$SetClass__FRC6RefVarT1>
        1cd698:	eb67d2a8 	bl	1bc2140 <$AllocateFrame(void)>
        1cd69c:	e59d1070 	ldr	r1, [sp, #112]
        1cd6a0:	e1a0200a 	mov	r2, sl
        1cd6a4:	e5810000 	str	r0, [r1]
        1cd6a8:	e59f1028 	ldr	r1, [pc, #28]	; 1cd6d8 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x108>
        1cd6ac:	e28d0070 	add	r0, sp, #112	; 0x70
        1cd6b0:	eb67e32c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cd6b4:	e1a0200d 	mov	r2, sp
        1cd6b8:	e59f101c 	ldr	r1, [pc, #1c]	; 1cd6dc <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x10c>
        1cd6bc:	e28d0070 	add	r0, sp, #112	; 0x70
        1cd6c0:	eb67e328 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1cd6c4:	e59d0000 	ldr	r0, [sp]
        1cd6c8:	eb67d6bb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cd6cc:	e28dd004 	add	sp, sp, #4	; 0x4
        1cd6d0:	ea00004f 	b	1cd814 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x244>
        1cd6d4:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        1cd6d8:	00684cb8 	streqh	r4, [r8], -#200
        1cd6dc:	00681ef0 	streqd	r1, [r8], -#224
        1cd6e0:	e2840001 	add	r0, r4, #1	; 0x1
        1cd6e4:	e1a01080 	mov	r1, r0, lsl #1
        1cd6e8:	e59f0028 	ldr	r0, [pc, #28]	; 1cd718 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x148>
        1cd6ec:	eb67d292 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1cd6f0:	e59d106c 	ldr	r1, [sp, #108]
        1cd6f4:	e5810000 	str	r0, [r1]
        1cd6f8:	e28d006c 	add	r0, sp, #108	; 0x6c
        1cd6fc:	eb67d6a0 	bl	1bc3184 <$GetCString(RefVar const &)>
        1cd700:	e1a03004 	mov	r3, r4
        1cd704:	e1a02005 	mov	r2, r5
        1cd708:	e1a01000 	mov	r1, r0
        1cd70c:	e1a00008 	mov	r0, r8
        1cd710:	eb68671b 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        1cd714:	ea00003e 	b	1cd814 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x244>
        1cd718:	006848d0 	ldreqd	r4, [r8], -#128
        1cd71c:	e1a00004 	mov	r0, r4
        1cd720:	eb63399d 	bl	1a9bd9c <$MakeArray(long)>
        1cd724:	e59d106c 	ldr	r1, [sp, #108]
        1cd728:	e3a05000 	mov	r5, #0	; 0x0
        1cd72c:	e3540000 	cmp	r4, #0	; 0x0
        1cd730:	e5810000 	str	r0, [r1]
        1cd734:	9a000036 	bls	1cd814 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x244>
        1cd738:	e1a0a005 	mov	sl, r5
        1cd73c:	e4d80001 	ldrb	r0, [r8], #1
        1cd740:	e1a00100 	mov	r0, r0, lsl #2
        1cd744:	eb67d280 	bl	1bc214c <$AllocateRefHandle(long)>
        1cd748:	e1a06000 	mov	r6, r0
        1cd74c:	e1a0100a 	mov	r1, sl
        1cd750:	e5902000 	ldr	r2, [r0]
        1cd754:	e59d006c 	ldr	r0, [sp, #108]
        1cd758:	e5900000 	ldr	r0, [r0]
        1cd75c:	eb67e2fd 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1cd760:	e1a00006 	mov	r0, r6
        1cd764:	eb67d694 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cd768:	e2855001 	add	r5, r5, #1	; 0x1
        1cd76c:	e1550004 	cmp	r5, r4
        1cd770:	3afffff0 	bcc	1cd738 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x168>
        1cd774:	ea000026 	b	1cd814 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x244>
        1cd778:	e5980000 	ldr	r0, [r8]
        1cd77c:	e1a00100 	mov	r0, r0, lsl #2
        1cd780:	e59d106c 	ldr	r1, [sp, #108]
        1cd784:	e5810000 	str	r0, [r1]
        1cd788:	ea000021 	b	1cd814 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x244>
        1cd78c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cd790:	e1a03004 	mov	r3, r4
        1cd794:	e1a02005 	mov	r2, r5
        1cd798:	e1a0100d 	mov	r1, sp
        1cd79c:	e1a00008 	mov	r0, r8
        1cd7a0:	eb6866f7 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        1cd7a4:	e59d0000 	ldr	r0, [sp]
        1cd7a8:	e1a00820 	mov	r0, r0, lsr #16
        1cd7ac:	e3a01001 	mov	r1, #1	; 0x1
        1cd7b0:	e1810100 	orr	r0, r1, r0, lsl #2
        1cd7b4:	e1890100 	orr	r0, r9, r0, lsl #2
        1cd7b8:	e59d1070 	ldr	r1, [sp, #112]
        1cd7bc:	e5810000 	str	r0, [r1]
        1cd7c0:	eaffffc1 	b	1cd6cc <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0xfc>
        1cd7c4:	e1a01004 	mov	r1, r4
        1cd7c8:	e59f0038 	ldr	r0, [pc, #38]	; 1cd808 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x238>
        1cd7cc:	eb67d25a 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1cd7d0:	e59d106c 	ldr	r1, [sp, #108]
        1cd7d4:	e5810000 	str	r0, [r1]
        1cd7d8:	eb67deb5 	bl	1bc52b4 <$LockRef(long)>
        1cd7dc:	e59d006c 	ldr	r0, [sp, #108]
        1cd7e0:	e5900000 	ldr	r0, [r0]
        1cd7e4:	eb67d25c 	bl	1bc215c <$BinaryData(long)>
        1cd7e8:	e1a01000 	mov	r1, r0
        1cd7ec:	e1a02004 	mov	r2, r4
        1cd7f0:	e1a00008 	mov	r0, r8
        1cd7f4:	eb6845d6 	bl	1bdef54 <$BlockMove>
        1cd7f8:	e59d006c 	ldr	r0, [sp, #108]
        1cd7fc:	e5900000 	ldr	r0, [r0]
        1cd800:	eb67eb1a 	bl	1bc8470 <$UnlockRef(long)>
        1cd804:	ea000002 	b	1cd814 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x244>
        1cd808:	006820a0 	rsbeq	r2, r8, r0, lsr #1
        1cd80c:	e59f0044 	ldr	r0, [pc, #44]	; 1cd858 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x288>
        1cd810:	e5870000 	str	r0, [r7]
        1cd814:	e1a0000d 	mov	r0, sp
        1cd818:	eb684e26 	bl	1be10b8 <$ExitHandler>
        1cd81c:	e5970000 	ldr	r0, [r7]
        1cd820:	e3300000 	teq	r0, #0	; 0x0
        1cd824:	e5bd006c 	ldr	r0, [sp, #108]!
        1cd828:	15809000 	strne	r9, [r0]
        1cd82c:	1a000004 	bne	1cd844 <PScriptDataIn::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x274>
        1cd830:	e5900000 	ldr	r0, [r0]
        1cd834:	e3300002 	teq	r0, #2	; 0x2
        1cd838:	03a0000e 	moveq	r0, #14	; 0xe
        1cd83c:	02400cd3 	subeq	r0, r0, #54016	; 0xd300
        1cd840:	05870000 	streq	r0, [r7]
        1cd844:	e59d0000 	ldr	r0, [sp]
        1cd848:	e5904000 	ldr	r4, [r0]
        1cd84c:	eb67d65a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cd850:	e1a00004 	mov	r0, r4
        1cd854:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1cd858:	ffff2d0f 	swinv	0x00ff2d0f
    */
}

/**
 * Symbol: ClassInfo__13PScriptDataInSFv
 * Address: 0038a36c
 */
void PScriptDataIn::ClassInfo() {
    /*
        38a36c:	e24f0044 	sub	r0, pc, #68	; 0x44
        38a370:	e1a0f00e 	mov	pc, lr
        38a374:	e3a00000 	mov	r0, #0	; 0x0
        38a378:	e1a0f00e 	mov	pc, lr
        38a37c:	50536372 	subpls	r6, r3, r2, ror r3
        38a380:	69707444 	ldmvsdb	r0!, {r2, r6, sl, ip, sp, lr}^
        38a384:	61746149 	cmnvs	r4, r9, asr #2
        38a388:	6e005046 	cdpvs	0, 0, cr5, cr0, cr6, {2}
        38a38c:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        38a390:	536f7572 	cmnpl	pc, #478150656	; 0x1c800000
        38a394:	63650000 	cmnvs	r5, #0	; 0x0
        38a398:	00000000 	andeq	r0, r0, r0
        38a39c:	eafffff2 	b	38a36c <ClassInfo__13PScriptDataInSFv>
        38a3a0:	ea607406 	b	1ba73c0 <PScriptDataIn::$New(void)>
        38a3a4:	ea606fea 	b	1ba6354 <PScriptDataIn::$Delete(void)>
        38a3a8:	ea60781d 	b	1ba8424 <PScriptDataIn::$Translate(void *, PipeCallBack *)>
        38a3ac:	00000000 	andeq	r0, r0, r0
        38a3b0:	00000048 	andeq	r0, r0, r8, asr #32
        38a3b4:	00000053 	andeq	r0, r0, r3, asr r0
        38a3b8:	0000005a 	andeq	r0, r0, sl, asr r0
        38a3bc:	00000058 	andeq	r0, r0, r8, asr r0
        38a3c0:	00000068 	andeq	r0, r0, r8, rrx
        38a3c4:	ea6094fc 	b	1baf7bc <$Sizeof__14POptionDataOutSFv>
        38a3d0:	ea6073fe 	b	1ba73d0 <POptionDataOut::$New(void)>
        38a3d4:	ea606fe2 	b	1ba6364 <POptionDataOut::$Delete(void)>
        38a3e4:	ea000001 	b	38a3f0 <ClassInfo__14POptionDataOutSFv+0x8>
    */
}

