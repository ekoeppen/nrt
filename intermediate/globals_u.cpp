#include "Newton.h"

/**
 * Symbol: UsesLetters(TView *)
 * Address: 000362c8
 */
UsesLetters(TView *) {
    /*
         362c8:	e1a0c00d 	mov	ip, sp
         362cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         362d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         362d4:	e24dd004 	sub	sp, sp, #4	; 0x4
         362d8:	e59f1048 	ldr	r1, [pc, #48]	; 36328 <UsesLetters(TView *)+0x60>
         362dc:	eb6e509d 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
         362e0:	eb6e2f99 	bl	1bc214c <$AllocateRefHandle(long)>
         362e4:	e58d0000 	str	r0, [sp]
         362e8:	e5900000 	ldr	r0, [r0]
         362ec:	e3a04000 	mov	r4, #0	; 0x0
         362f0:	e3300002 	teq	r0, #2	; 0x2
         362f4:	0a00000d 	beq	36330 <UsesLetters(TView *)+0x68>
         362f8:	e59f102c 	ldr	r1, [pc, #2c]	; 3632c <UsesLetters(TView *)+0x64>
         362fc:	e1a0000d 	mov	r0, sp
         36300:	e3a03000 	mov	r3, #0	; 0x0
         36304:	e3a02000 	mov	r2, #0	; 0x0
         36308:	eb6e37d9 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
         3630c:	e3300002 	teq	r0, #2	; 0x2
         36310:	0a000006 	beq	36330 <UsesLetters(TView *)+0x68>
         36314:	e3a04001 	mov	r4, #1	; 0x1
         36318:	e59d0000 	ldr	r0, [sp]
         3631c:	eb6e33a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         36320:	e1a00004 	mov	r0, r4
         36324:	ea000004 	b	3633c <UsesLetters(TView *)+0x74>
         36328:	00684138 	rsbeq	r4, r8, r8, lsr r1
         3632c:	006840f8 	streqd	r4, [r8], -#8
         36330:	e59d0000 	ldr	r0, [sp]
         36334:	eb6e33a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         36338:	e1a00004 	mov	r0, r4
         3633c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: UnregisterVccOffNotify(int)
 * Address: 00050a38
 */
UnregisterVccOffNotify(int) {
    /*
         50a38:	e59f1030 	ldr	r1, [pc, #30]	; 50a70 <UnregisterVccOffNotify(int)+0x38>
         50a3c:	e0911180 	adds	r1, r1, r0, lsl #3
         50a40:	15912000 	ldrne	r2, [r1]
         50a44:	13320000 	teqne	r2, #0	; 0x0
         50a48:	01a0f00e 	moveq	pc, lr
         50a4c:	e3a02000 	mov	r2, #0	; 0x0
         50a50:	e5812000 	str	r2, [r1]
         50a54:	e59f1018 	ldr	r1, [pc, #18]	; 50a74 <UnregisterVccOffNotify(int)+0x3c>
         50a58:	e59120ec 	ldr	r2, [r1, #236]
         50a5c:	e2422001 	sub	r2, r2, #1	; 0x1
         50a60:	e5a120ec 	str	r2, [r1, #236]!
         50a64:	e3a019ca 	mov	r1, #3309568	; 0x328000
         50a68:	e2811402 	add	r1, r1, #33554432	; 0x2000000
         50a6c:	ea6ec19c 	b	1c010e4 <$SetVccTimeout(int, unsigned long)>
         50a70:	0c105fa4 	ldceq	15, cr5, [r0], -#656
         50a74:	0c100980 	ldceq	9, cr0, [r0], -#512
    */
}

/**
 * Symbol: UiToA(unsigned long, unsigned char *)
 * Address: 0005ed4c
 */
UiToA(unsigned long, unsigned char *) {
    /*
         5ed4c:	e1a0c00d 	mov	ip, sp
         5ed50:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5ed54:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ed58:	e1a05000 	mov	r5, r0
         5ed5c:	e1a04001 	mov	r4, r1
         5ed60:	e3a06000 	mov	r6, #0	; 0x0
         5ed64:	e20500ff 	and	r0, r5, #255	; 0xff
         5ed68:	eb6d4ef5 	bl	1bb2944 <$__rt_sdiv10>
         5ed6c:	e2811030 	add	r1, r1, #48	; 0x30
         5ed70:	e1a00006 	mov	r0, r6
         5ed74:	e2866001 	add	r6, r6, #1	; 0x1
         5ed78:	e7c41000 	strb	r1, [r4, r0]
         5ed7c:	e1a00005 	mov	r0, r5
         5ed80:	eb6d4ef1 	bl	1bb294c <$__rt_udiv10>
         5ed84:	e1a05000 	mov	r5, r0
         5ed88:	e3500000 	cmp	r0, #0	; 0x0
         5ed8c:	8afffff4 	bhi	5ed64 <UiToA(unsigned long, unsigned char *)+0x18>
         5ed90:	e3a00000 	mov	r0, #0	; 0x0
         5ed94:	e7c40006 	strb	r0, [r4, r6]
         5ed98:	e1a00004 	mov	r0, r4
         5ed9c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         5eda0:	ea66e7a6 	b	1a18c40 <$reverse(unsigned char *)>
    */
}

/**
 * Symbol: UseModemNavigator(void)
 * Address: 00066eb4
 */
UseModemNavigator(void) {
    /*
         66eb4:	e3a00001 	mov	r0, #1	; 0x1
         66eb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnitID(RefVar const &)
 * Address: 00077be4
 */
UnitID(RefVar const &) {
    /*
         77be4:	e1a0c00d 	mov	ip, sp
         77be8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         77bec:	e24cb004 	sub	fp, ip, #4	; 0x4
         77bf0:	e24dd004 	sub	sp, sp, #4	; 0x4
         77bf4:	e3a04000 	mov	r4, #0	; 0x0
         77bf8:	e59f1060 	ldr	r1, [pc, #60]	; 77c60 <UnitID(RefVar const &)+0x7c>
         77bfc:	e5911000 	ldr	r1, [r1]
         77c00:	e5911000 	ldr	r1, [r1]
         77c04:	e5900000 	ldr	r0, [r0]
         77c08:	e5900000 	ldr	r0, [r0]
         77c0c:	eb6d3193 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         77c10:	eb6d294d 	bl	1bc214c <$AllocateRefHandle(long)>
         77c14:	e58d0000 	str	r0, [sp]
         77c18:	e5900000 	ldr	r0, [r0]
         77c1c:	e3300002 	teq	r0, #2	; 0x2
         77c20:	0a00000a 	beq	77c50 <UnitID(RefVar const &)+0x6c>
         77c24:	e24dd004 	sub	sp, sp, #4	; 0x4
         77c28:	e28d1004 	add	r1, sp, #4	; 0x4
         77c2c:	e1a0000d 	mov	r0, sp
         77c30:	eb6d2528 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         77c34:	e1a0000d 	mov	r0, sp
         77c38:	eb6d2935 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         77c3c:	e5904000 	ldr	r4, [r0]
         77c40:	e1a0000d 	mov	r0, sp
         77c44:	e3a01000 	mov	r1, #0	; 0x0
         77c48:	eb6d292c 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         77c4c:	e28dd004 	add	sp, sp, #4	; 0x4
         77c50:	e59d0000 	ldr	r0, [sp]
         77c54:	eb6d2d58 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77c58:	e1a00004 	mov	r0, r4
         77c5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         77c60:	00684d20 	rsbeq	r4, r8, r0, lsr #26
    */
}

/**
 * Symbol: UnmatchedWords(RefVar const &)
 * Address: 00080974
 */
UnmatchedWords(RefVar const &) {
    /*
         80974:	e1a0c00d 	mov	ip, sp
         80978:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         8097c:	e24cb004 	sub	fp, ip, #4	; 0x4
         80980:	e24dd004 	sub	sp, sp, #4	; 0x4
         80984:	e3a00002 	mov	r0, #2	; 0x2
         80988:	eb6d05ef 	bl	1bc214c <$AllocateRefHandle(long)>
         8098c:	e58d0000 	str	r0, [sp]
         80990:	e59f00d0 	ldr	r0, [pc, #d0]	; 80a68 <UnmatchedWords(RefVar const &)+0xf4>
         80994:	e3a01000 	mov	r1, #0	; 0x0
         80998:	eb6d05e6 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         8099c:	e59d1000 	ldr	r1, [sp]
         809a0:	e5810000 	str	r0, [r1]
         809a4:	e59f70c0 	ldr	r7, [pc, #c0]	; 80a6c <UnmatchedWords(RefVar const &)+0xf8>
         809a8:	e5970000 	ldr	r0, [r7]
         809ac:	e5900110 	ldr	r0, [r0, #272]
         809b0:	e5900000 	ldr	r0, [r0]
         809b4:	eb6d123c 	bl	1bc52ac <$Length(long)>
         809b8:	e1a06000 	mov	r6, r0
         809bc:	e3a05001 	mov	r5, #1	; 0x1
         809c0:	e3500001 	cmp	r0, #1	; 0x1
         809c4:	ba000022 	blt	80a54 <UnmatchedWords(RefVar const &)+0xe0>
         809c8:	e3a08002 	mov	r8, #2	; 0x2
         809cc:	e24dd008 	sub	sp, sp, #8	; 0x8
         809d0:	e1a01005 	mov	r1, r5
         809d4:	e3a00001 	mov	r0, #1	; 0x1
         809d8:	eb66e4b1 	bl	1a39ca4 <$getPhraseElem__FiT1>
         809dc:	e3300001 	teq	r0, #1	; 0x1
         809e0:	0a000017 	beq	80a44 <UnmatchedWords(RefVar const &)+0xd0>
         809e4:	e1a01005 	mov	r1, r5
         809e8:	e3a00001 	mov	r0, #1	; 0x1
         809ec:	eb66e4ac 	bl	1a39ca4 <$getPhraseElem__FiT1>
         809f0:	e3300003 	teq	r0, #3	; 0x3
         809f4:	0a000012 	beq	80a44 <UnmatchedWords(RefVar const &)+0xd0>
         809f8:	e5970000 	ldr	r0, [r7]
         809fc:	e2800e11 	add	r0, r0, #272	; 0x110
         80a00:	e1a01005 	mov	r1, r5
         80a04:	e3a02001 	mov	r2, #1	; 0x1
         80a08:	eb66e8c4 	bl	1a3ad20 <$PartialGlueString__FRC6RefVarUlT2>
         80a0c:	eb6d05ce 	bl	1bc214c <$AllocateRefHandle(long)>
         80a10:	e58d0000 	str	r0, [sp]
         80a14:	e1a0400d 	mov	r4, sp
         80a18:	e1a00008 	mov	r0, r8
         80a1c:	eb6d05ca 	bl	1bc214c <$AllocateRefHandle(long)>
         80a20:	e58d0004 	str	r0, [sp, #4]
         80a24:	e28d0004 	add	r0, sp, #4	; 0x4
         80a28:	e28d1008 	add	r1, sp, #8	; 0x8
         80a2c:	e1a02004 	mov	r2, r4
         80a30:	eb66e076 	bl	1a38c10 <$Append__FRC6RefVarN21>
         80a34:	e59d0000 	ldr	r0, [sp]
         80a38:	eb6d09df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         80a3c:	e59d0004 	ldr	r0, [sp, #4]
         80a40:	eb6d09dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         80a44:	e28dd008 	add	sp, sp, #8	; 0x8
         80a48:	e2855001 	add	r5, r5, #1	; 0x1
         80a4c:	e1550006 	cmp	r5, r6
         80a50:	daffffdd 	ble	809cc <UnmatchedWords(RefVar const &)+0x58>
         80a54:	e59d0000 	ldr	r0, [sp]
         80a58:	e5904000 	ldr	r4, [r0]
         80a5c:	eb6d09d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         80a60:	e1a00004 	mov	r0, r4
         80a64:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         80a68:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         80a6c:	0c100bbc 	ldceq	11, cr0, [r0], -#752
    */
}

/**
 * Symbol: UnRegTaskTemplate__FRC6RefVarT1
 * Address: 00085394
 */
void globals::UnRegTaskTemplate() {
    /*
         85394:	e1a0c00d 	mov	ip, sp
         85398:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         8539c:	e24cb004 	sub	fp, ip, #4	; 0x4
         853a0:	e1a04001 	mov	r4, r1
         853a4:	e24dd004 	sub	sp, sp, #4	; 0x4
         853a8:	e3a00002 	mov	r0, #2	; 0x2
         853ac:	eb6cf366 	bl	1bc214c <$AllocateRefHandle(long)>
         853b0:	e58d0000 	str	r0, [sp]
         853b4:	e3a00002 	mov	r0, #2	; 0x2
         853b8:	eb6cf363 	bl	1bc214c <$AllocateRefHandle(long)>
         853bc:	e1a06000 	mov	r6, r0
         853c0:	e59f5124 	ldr	r5, [pc, #124]	; 854ec <UnRegTaskTemplate__FRC6RefVarT1+0x158>
         853c4:	e5950000 	ldr	r0, [r5]
         853c8:	e5901000 	ldr	r1, [r0]
         853cc:	e5940000 	ldr	r0, [r4]
         853d0:	e5900000 	ldr	r0, [r0]
         853d4:	eb6cfba1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         853d8:	e3a09002 	mov	r9, #2	; 0x2
         853dc:	e3300002 	teq	r0, #2	; 0x2
         853e0:	0a00001f 	beq	85464 <UnRegTaskTemplate__FRC6RefVarT1+0xd0>
         853e4:	e5950000 	ldr	r0, [r5]
         853e8:	e5901000 	ldr	r1, [r0]
         853ec:	e5940000 	ldr	r0, [r4]
         853f0:	e5900000 	ldr	r0, [r0]
         853f4:	eb6cfb99 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         853f8:	e5860000 	str	r0, [r6]
         853fc:	eb6cffaa 	bl	1bc52ac <$Length(long)>
         85400:	e1a08000 	mov	r8, r0
         85404:	e3a07000 	mov	r7, #0	; 0x0
         85408:	e3500000 	cmp	r0, #0	; 0x0
         8540c:	da000014 	ble	85464 <UnRegTaskTemplate__FRC6RefVarT1+0xd0>
         85410:	e24dd008 	sub	sp, sp, #8	; 0x8
         85414:	e1a01007 	mov	r1, r7
         85418:	e5960000 	ldr	r0, [r6]
         8541c:	eb6cfb8c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         85420:	eb6cf349 	bl	1bc214c <$AllocateRefHandle(long)>
         85424:	e58d0000 	str	r0, [sp]
         85428:	e1a0500d 	mov	r5, sp
         8542c:	e1a00009 	mov	r0, r9
         85430:	eb6cf345 	bl	1bc214c <$AllocateRefHandle(long)>
         85434:	e58d0004 	str	r0, [sp, #4]
         85438:	e28d0004 	add	r0, sp, #4	; 0x4
         8543c:	e1a01005 	mov	r1, r5
         85440:	eb66d644 	bl	1a3ad58 <$RemovePhrasalLexEntry__FRC6RefVarT1>
         85444:	e59d0000 	ldr	r0, [sp]
         85448:	eb6cf75b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8544c:	e59d0004 	ldr	r0, [sp, #4]
         85450:	eb6cf759 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85454:	e28dd008 	add	sp, sp, #8	; 0x8
         85458:	e2877001 	add	r7, r7, #1	; 0x1
         8545c:	e1570008 	cmp	r7, r8
         85460:	baffffea 	blt	85410 <UnRegTaskTemplate__FRC6RefVarT1+0x7c>
         85464:	e59f0084 	ldr	r0, [pc, #84]	; 854f0 <UnRegTaskTemplate__FRC6RefVarT1+0x15c>
         85468:	e5900000 	ldr	r0, [r0]
         8546c:	eb6cf336 	bl	1bc214c <$AllocateRefHandle(long)>
         85470:	e1a05000 	mov	r5, r0
         85474:	e59f0078 	ldr	r0, [pc, #78]	; 854f4 <UnRegTaskTemplate__FRC6RefVarT1+0x160>
         85478:	e5900000 	ldr	r0, [r0]
         8547c:	e5901000 	ldr	r1, [r0]
         85480:	e5950000 	ldr	r0, [r5]
         85484:	eb6cfb75 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         85488:	e59d1000 	ldr	r1, [sp]
         8548c:	e5810000 	str	r0, [r1]
         85490:	e1a00005 	mov	r0, r5
         85494:	eb6cf748 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85498:	e24dd004 	sub	sp, sp, #4	; 0x4
         8549c:	e28d0004 	add	r0, sp, #4	; 0x4
         854a0:	eb6db939 	bl	1bf398c <$IsArray(RefVar const &)>
         854a4:	e3300000 	teq	r0, #0	; 0x0
         854a8:	0a000012 	beq	854f8 <UnRegTaskTemplate__FRC6RefVarT1+0x164>
         854ac:	e1a00009 	mov	r0, r9
         854b0:	eb6cf325 	bl	1bc214c <$AllocateRefHandle(long)>
         854b4:	e58d0000 	str	r0, [sp]
         854b8:	e1a0000d 	mov	r0, sp
         854bc:	e1a02004 	mov	r2, r4
         854c0:	e28d1004 	add	r1, sp, #4	; 0x4
         854c4:	eb67627f 	bl	1a5dec8 <$FSetRemove>
         854c8:	e1a04000 	mov	r4, r0
         854cc:	e59d0000 	ldr	r0, [sp]
         854d0:	eb6cf739 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         854d4:	e1a00006 	mov	r0, r6
         854d8:	eb6cf737 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         854dc:	e59d0004 	ldr	r0, [sp, #4]
         854e0:	eb6cf735 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         854e4:	e1a00004 	mov	r0, r4
         854e8:	ea000007 	b	8550c <UnRegTaskTemplate__FRC6RefVarT1+0x178>
         854ec:	00684680 	rsbeq	r4, r8, r0, lsl #13
         854f0:	0c10180c 	ldceq	8, cr1, [r0], -#48
         854f4:	00682b00 	rsbeq	r2, r8, r0, lsl #22
         854f8:	e1a00006 	mov	r0, r6
         854fc:	eb6cf72e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85500:	e59d0004 	ldr	r0, [sp, #4]
         85504:	eb6cf72c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85508:	e1a00009 	mov	r0, r9
         8550c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: UniqueAppendList__FRC6RefVarN21
 * Address: 00086e6c
 */
void globals::UniqueAppendList() {
    /*
         86e6c:	e1a0c00d 	mov	ip, sp
         86e70:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         86e74:	e24cb004 	sub	fp, ip, #4	; 0x4
         86e78:	e1a04001 	mov	r4, r1
         86e7c:	e1a05002 	mov	r5, r2
         86e80:	e24dd004 	sub	sp, sp, #4	; 0x4
         86e84:	e3a00002 	mov	r0, #2	; 0x2
         86e88:	eb6cecaf 	bl	1bc214c <$AllocateRefHandle(long)>
         86e8c:	e58d0000 	str	r0, [sp]
         86e90:	e5950000 	ldr	r0, [r5]
         86e94:	e5900000 	ldr	r0, [r0]
         86e98:	e3300002 	teq	r0, #2	; 0x2
         86e9c:	1a000005 	bne	86eb8 <UniqueAppendList__FRC6RefVarN21+0x4c>
         86ea0:	e5940000 	ldr	r0, [r4]
         86ea4:	e5904000 	ldr	r4, [r0]
         86ea8:	e59d0000 	ldr	r0, [sp]
         86eac:	eb6cf0c2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         86eb0:	e1a00004 	mov	r0, r4
         86eb4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         86eb8:	eb6cf8fb 	bl	1bc52ac <$Length(long)>
         86ebc:	e1a08000 	mov	r8, r0
         86ec0:	e3a06000 	mov	r6, #0	; 0x0
         86ec4:	e3500000 	cmp	r0, #0	; 0x0
         86ec8:	9afffff4 	bls	86ea0 <UniqueAppendList__FRC6RefVarN21+0x34>
         86ecc:	e3a07002 	mov	r7, #2	; 0x2
         86ed0:	e1a01006 	mov	r1, r6
         86ed4:	e5950000 	ldr	r0, [r5]
         86ed8:	e5900000 	ldr	r0, [r0]
         86edc:	eb6cf4dc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         86ee0:	e41d1004 	ldr	r1, [sp], -#4
         86ee4:	e5810000 	str	r0, [r1]
         86ee8:	e1a00007 	mov	r0, r7
         86eec:	eb6cec96 	bl	1bc214c <$AllocateRefHandle(long)>
         86ef0:	e58d0000 	str	r0, [sp]
         86ef4:	e1a0000d 	mov	r0, sp
         86ef8:	e28d2004 	add	r2, sp, #4	; 0x4
         86efc:	e1a01004 	mov	r1, r4
         86f00:	eb693f08 	bl	1ad6b28 <$FFindStringInArray__FRC6RefVarN21>
         86f04:	e3300002 	teq	r0, #2	; 0x2
         86f08:	13a09000 	movne	r9, #0	; 0x0
         86f0c:	03a09001 	moveq	r9, #1	; 0x1
         86f10:	e59d0000 	ldr	r0, [sp]
         86f14:	eb6cf0a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         86f18:	e3390000 	teq	r9, #0	; 0x0
         86f1c:	0a00000a 	beq	86f4c <UniqueAppendList__FRC6RefVarN21+0xe0>
         86f20:	e24dd004 	sub	sp, sp, #4	; 0x4
         86f24:	e1a00007 	mov	r0, r7
         86f28:	eb6cec87 	bl	1bc214c <$AllocateRefHandle(long)>
         86f2c:	e58d0000 	str	r0, [sp]
         86f30:	e1a0000d 	mov	r0, sp
         86f34:	e28d2008 	add	r2, sp, #8	; 0x8
         86f38:	e1a01004 	mov	r1, r4
         86f3c:	eb66c733 	bl	1a38c10 <$Append__FRC6RefVarN21>
         86f40:	e59d0000 	ldr	r0, [sp]
         86f44:	eb6cf09c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         86f48:	e28dd004 	add	sp, sp, #4	; 0x4
         86f4c:	e28dd004 	add	sp, sp, #4	; 0x4
         86f50:	e2866001 	add	r6, r6, #1	; 0x1
         86f54:	e1560008 	cmp	r6, r8
         86f58:	3affffdc 	bcc	86ed0 <UniqueAppendList__FRC6RefVarN21+0x64>
         86f5c:	eaffffcf 	b	86ea0 <UniqueAppendList__FRC6RefVarN21+0x34>
    */
}

/**
 * Symbol: UniqueAppendListGen__FRC6RefVarN21
 * Address: 00086f88
 */
void globals::UniqueAppendListGen() {
    /*
         86f88:	e1a0c00d 	mov	ip, sp
         86f8c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         86f90:	e24cb004 	sub	fp, ip, #4	; 0x4
         86f94:	e1a05001 	mov	r5, r1
         86f98:	e1a06002 	mov	r6, r2
         86f9c:	e24dd008 	sub	sp, sp, #8	; 0x8
         86fa0:	e3a00002 	mov	r0, #2	; 0x2
         86fa4:	eb6cec68 	bl	1bc214c <$AllocateRefHandle(long)>
         86fa8:	e58d0004 	str	r0, [sp, #4]
         86fac:	e3a00002 	mov	r0, #2	; 0x2
         86fb0:	eb6cec65 	bl	1bc214c <$AllocateRefHandle(long)>
         86fb4:	e58d0000 	str	r0, [sp]
         86fb8:	e3a00002 	mov	r0, #2	; 0x2
         86fbc:	eb6cec62 	bl	1bc214c <$AllocateRefHandle(long)>
         86fc0:	e1a04000 	mov	r4, r0
         86fc4:	e5960000 	ldr	r0, [r6]
         86fc8:	e5900000 	ldr	r0, [r0]
         86fcc:	e3300002 	teq	r0, #2	; 0x2
         86fd0:	05950000 	ldreq	r0, [r5]
         86fd4:	0a00003c 	beq	870cc <UniqueAppendListGen__FRC6RefVarN21+0x144>
         86fd8:	e5951000 	ldr	r1, [r5]
         86fdc:	e5911000 	ldr	r1, [r1]
         86fe0:	e3310002 	teq	r1, #2	; 0x2
         86fe4:	01a05000 	moveq	r5, r0
         86fe8:	0a000038 	beq	870d0 <UniqueAppendListGen__FRC6RefVarN21+0x148>
         86fec:	e1a00005 	mov	r0, r5
         86ff0:	eb6df8b8 	bl	1c052d8 <$IsReadOnly(RefVar const &)>
         86ff4:	e3300000 	teq	r0, #0	; 0x0
         86ff8:	05950000 	ldreq	r0, [r5]
         86ffc:	05900000 	ldreq	r0, [r0]
         87000:	0a000001 	beq	8700c <UniqueAppendListGen__FRC6RefVarN21+0x84>
         87004:	e1a00005 	mov	r0, r5
         87008:	eb6cec57 	bl	1bc216c <$Clone(RefVar const &)>
         8700c:	e59d1000 	ldr	r1, [sp]
         87010:	e5810000 	str	r0, [r1]
         87014:	e1a00006 	mov	r0, r6
         87018:	eb6df8ae 	bl	1c052d8 <$IsReadOnly(RefVar const &)>
         8701c:	e3300000 	teq	r0, #0	; 0x0
         87020:	05960000 	ldreq	r0, [r6]
         87024:	05900000 	ldreq	r0, [r0]
         87028:	0a000001 	beq	87034 <UniqueAppendListGen__FRC6RefVarN21+0xac>
         8702c:	e1a00006 	mov	r0, r6
         87030:	eb6cec4d 	bl	1bc216c <$Clone(RefVar const &)>
         87034:	e5840000 	str	r0, [r4]
         87038:	e5940000 	ldr	r0, [r4]
         8703c:	eb6cf89a 	bl	1bc52ac <$Length(long)>
         87040:	e1a06000 	mov	r6, r0
         87044:	e3a05000 	mov	r5, #0	; 0x0
         87048:	e3500000 	cmp	r0, #0	; 0x0
         8704c:	9a00001d 	bls	870c8 <UniqueAppendListGen__FRC6RefVarN21+0x140>
         87050:	e3a07002 	mov	r7, #2	; 0x2
         87054:	ea000003 	b	87068 <UniqueAppendListGen__FRC6RefVarN21+0xe0>
         87058:	e59d0004 	ldr	r0, [sp, #4]
         8705c:	eb6cf056 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         87060:	e1a00005 	mov	r0, r5
         87064:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         87068:	e1a01005 	mov	r1, r5
         8706c:	e5940000 	ldr	r0, [r4]
         87070:	eb6cf477 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         87074:	e59d1004 	ldr	r1, [sp, #4]
         87078:	e5810000 	str	r0, [r1]
         8707c:	e28d1004 	add	r1, sp, #4	; 0x4
         87080:	e1a0000d 	mov	r0, sp
         87084:	eb66cf1f 	bl	1a3ad08 <$member_p__FRC6RefVarT1>
         87088:	e3300002 	teq	r0, #2	; 0x2
         8708c:	1a00000a 	bne	870bc <UniqueAppendListGen__FRC6RefVarN21+0x134>
         87090:	e24dd004 	sub	sp, sp, #4	; 0x4
         87094:	e1a00007 	mov	r0, r7
         87098:	eb6cec2b 	bl	1bc214c <$AllocateRefHandle(long)>
         8709c:	e58d0000 	str	r0, [sp]
         870a0:	e1a0000d 	mov	r0, sp
         870a4:	e28d2008 	add	r2, sp, #8	; 0x8
         870a8:	e28d1004 	add	r1, sp, #4	; 0x4
         870ac:	eb66c6d7 	bl	1a38c10 <$Append__FRC6RefVarN21>
         870b0:	e59d0000 	ldr	r0, [sp]
         870b4:	eb6cf040 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         870b8:	e28dd004 	add	sp, sp, #4	; 0x4
         870bc:	e2855001 	add	r5, r5, #1	; 0x1
         870c0:	e1550006 	cmp	r5, r6
         870c4:	3affffe7 	bcc	87068 <UniqueAppendListGen__FRC6RefVarN21+0xe0>
         870c8:	e59d0000 	ldr	r0, [sp]
         870cc:	e5905000 	ldr	r5, [r0]
         870d0:	e1a00004 	mov	r0, r4
         870d4:	eb6cf038 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         870d8:	e59d0000 	ldr	r0, [sp]
         870dc:	eb6cf036 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         870e0:	eaffffdc 	b	87058 <UniqueAppendListGen__FRC6RefVarN21+0xd0>
    */
}

/**
 * Symbol: UniqueAppendString__FRC6RefVarN21
 * Address: 000870e4
 */
void globals::UniqueAppendString() {
    /*
         870e4:	e1a0c00d 	mov	ip, sp
         870e8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         870ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         870f0:	e1a04001 	mov	r4, r1
         870f4:	e1a05002 	mov	r5, r2
         870f8:	e24dd004 	sub	sp, sp, #4	; 0x4
         870fc:	e3a06002 	mov	r6, #2	; 0x2
         87100:	e1a00006 	mov	r0, r6
         87104:	eb6cec10 	bl	1bc214c <$AllocateRefHandle(long)>
         87108:	e58d0000 	str	r0, [sp]
         8710c:	e1a0000d 	mov	r0, sp
         87110:	e1a02005 	mov	r2, r5
         87114:	e1a01004 	mov	r1, r4
         87118:	eb693e82 	bl	1ad6b28 <$FFindStringInArray__FRC6RefVarN21>
         8711c:	e3300002 	teq	r0, #2	; 0x2
         87120:	13a07000 	movne	r7, #0	; 0x0
         87124:	03a07001 	moveq	r7, #1	; 0x1
         87128:	e59d0000 	ldr	r0, [sp]
         8712c:	eb6cf022 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         87130:	e3370000 	teq	r7, #0	; 0x0
         87134:	0a00000a 	beq	87164 <UniqueAppendString__FRC6RefVarN21+0x80>
         87138:	e24dd004 	sub	sp, sp, #4	; 0x4
         8713c:	e1a00006 	mov	r0, r6
         87140:	eb6cec01 	bl	1bc214c <$AllocateRefHandle(long)>
         87144:	e58d0000 	str	r0, [sp]
         87148:	e1a0000d 	mov	r0, sp
         8714c:	e1a02005 	mov	r2, r5
         87150:	e1a01004 	mov	r1, r4
         87154:	eb66c6ad 	bl	1a38c10 <$Append__FRC6RefVarN21>
         87158:	e59d0000 	ldr	r0, [sp]
         8715c:	eb6cf016 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         87160:	e28dd004 	add	sp, sp, #4	; 0x4
         87164:	e5940000 	ldr	r0, [r4]
         87168:	e5900000 	ldr	r0, [r0]
         8716c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: UniqueAppendItem__FRC6RefVarN21
 * Address: 00087170
 */
void globals::UniqueAppendItem() {
    /*
         87170:	e1a0c00d 	mov	ip, sp
         87174:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         87178:	e24cb004 	sub	fp, ip, #4	; 0x4
         8717c:	e1a04001 	mov	r4, r1
         87180:	e1a05002 	mov	r5, r2
         87184:	e1a01002 	mov	r1, r2
         87188:	e1a00004 	mov	r0, r4
         8718c:	eb66cedd 	bl	1a3ad08 <$member_p__FRC6RefVarT1>
         87190:	e3300002 	teq	r0, #2	; 0x2
         87194:	1a00000a 	bne	871c4 <UniqueAppendItem__FRC6RefVarN21+0x54>
         87198:	e24dd004 	sub	sp, sp, #4	; 0x4
         8719c:	e3a00002 	mov	r0, #2	; 0x2
         871a0:	eb6cebe9 	bl	1bc214c <$AllocateRefHandle(long)>
         871a4:	e58d0000 	str	r0, [sp]
         871a8:	e1a0000d 	mov	r0, sp
         871ac:	e1a02005 	mov	r2, r5
         871b0:	e1a01004 	mov	r1, r4
         871b4:	eb66c695 	bl	1a38c10 <$Append__FRC6RefVarN21>
         871b8:	e59d0000 	ldr	r0, [sp]
         871bc:	eb6ceffe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         871c0:	e28dd004 	add	sp, sp, #4	; 0x4
         871c4:	e5940000 	ldr	r0, [r4]
         871c8:	e5900000 	ldr	r0, [r0]
         871cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: UpdateLineRect__FP5TRectT1
 * Address: 000a3cb0
 */
void globals::UpdateLineRect() {
    /*
         a3cb0:	e5902000 	ldr	r2, [r0]
         a3cb4:	e1a02842 	mov	r2, r2, asr #16
         a3cb8:	e5913000 	ldr	r3, [r1]
         a3cbc:	e0822843 	add	r2, r2, r3, asr #16
         a3cc0:	e1a020c2 	mov	r2, r2, asr #1
         a3cc4:	e5c02001 	strb	r2, [r0, #1]
         a3cc8:	e1a02442 	mov	r2, r2, asr #8
         a3ccc:	e5c02000 	strb	r2, [r0]
         a3cd0:	e5903004 	ldr	r3, [r0, #4]
         a3cd4:	e1a03843 	mov	r3, r3, asr #16
         a3cd8:	e5912004 	ldr	r2, [r1, #4]
         a3cdc:	e0832842 	add	r2, r3, r2, asr #16
         a3ce0:	e1a020c2 	mov	r2, r2, asr #1
         a3ce4:	e5c02005 	strb	r2, [r0, #5]
         a3ce8:	e1a02442 	mov	r2, r2, asr #8
         a3cec:	e5c02004 	strb	r2, [r0, #4]
         a3cf0:	e5912002 	ldr	r2, [r1, #2]
         a3cf4:	e1a02842 	mov	r2, r2, asr #16
         a3cf8:	e5903002 	ldr	r3, [r0, #2]
         a3cfc:	e1520843 	cmp	r2, r3, asr #16
         a3d00:	b5c02003 	strltb	r2, [r0, #3]
         a3d04:	b1a02442 	movlt	r2, r2, asr #8
         a3d08:	b5c02002 	strltb	r2, [r0, #2]
         a3d0c:	e5911006 	ldr	r1, [r1, #6]
         a3d10:	e1a01841 	mov	r1, r1, asr #16
         a3d14:	e5902006 	ldr	r2, [r0, #6]
         a3d18:	e1510842 	cmp	r1, r2, asr #16
         a3d1c:	c5c01007 	strgtb	r1, [r0, #7]
         a3d20:	c1a01441 	movgt	r1, r1, asr #8
         a3d24:	c5c01006 	strgtb	r1, [r0, #6]
         a3d28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnhandledException(char *, void *, void (*)(void *))
 * Address: 000b0220
 */
UnhandledException(char *, void *, void (*)(void *)) {
    /*
         b0220:	e1a0c00d 	mov	ip, sp
         b0224:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b0228:	e24cb004 	sub	fp, ip, #4	; 0x4
         b022c:	e1a05000 	mov	r5, r0
         b0230:	e1a04001 	mov	r4, r1
         b0234:	e1a06002 	mov	r6, r2
         b0238:	e59f0084 	ldr	r0, [pc, #84]	; b02c4 <UnhandledException(char *, void *, void (*)(void *))+0xa4>
         b023c:	e5900000 	ldr	r0, [r0]
         b0240:	e3300000 	teq	r0, #0	; 0x0
         b0244:	0a000004 	beq	b025c <UnhandledException(char *, void *, void (*)(void *))+0x3c>
         b0248:	e1a02006 	mov	r2, r6
         b024c:	e1a01004 	mov	r1, r4
         b0250:	e1a00005 	mov	r0, r5
         b0254:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b0258:	ea0bf842 	b	3ae368 <MonitorThrowSWI>
         b025c:	e24ddc01 	sub	sp, sp, #256	; 0x100
         b0260:	e59f0060 	ldr	r0, [pc, #60]	; b02c8 <UnhandledException(char *, void *, void (*)(void *))+0xa8>
         b0264:	e5901000 	ldr	r1, [r0]
         b0268:	e1a00005 	mov	r0, r5
         b026c:	eb6ccbc8 	bl	1be3194 <$Subexception>
         b0270:	e3300000 	teq	r0, #0	; 0x0
         b0274:	01a02005 	moveq	r2, r5
         b0278:	11a02004 	movne	r2, r4
         b027c:	e1a0000d 	mov	r0, sp
         b0280:	028f1f11 	addeq	r1, pc, #68	; 0x44
         b0284:	128f1f1a 	addne	r1, pc, #104	; 0x68
         b0288:	eb6c1601 	bl	1bb5a94 <$sprintf>
         b028c:	e1a00005 	mov	r0, r5
         b0290:	eb6691ea 	bl	1a54a40 <$ForgetDeveloperNotified(char *)>
         b0294:	e3340000 	teq	r4, #0	; 0x0
         b0298:	13360000 	teqne	r6, #0	; 0x0
         b029c:	11a00004 	movne	r0, r4
         b02a0:	11a0e00f 	movne	lr, pc
         b02a4:	11a0f006 	movne	pc, r6
         b02a8:	eb0b8a38 	bl	392b90 <EnterFIQAtomic>
         b02ac:	e3a02000 	mov	r2, #0	; 0x0
         b02b0:	e3a01000 	mov	r1, #0	; 0x0
         b02b4:	e3a000a5 	mov	r0, #165	; 0xa5
         b02b8:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         b02bc:	eb6cfd35 	bl	1bef798 <$Reboot(long, unsigned long, unsigned char)>
         b02c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b02c4:	0c101058 	ldceq	0, cr1, [r0], -#352
         b02c8:	003712ac 	eoreqs	r1, r7, ip, lsr #5
         b02cc:	556e6861 	strplb	r6, [lr, -#2145]!
         b02d0:	6e646c65 	cdpvs	12, 6, cr6, cr4, cr5, {3}
         b02d4:	64206578 	strvst	r6, [r0], -#1400
         b02d8:	63657074 	cmnvs	r5, #116	; 0x74
         b02dc:	696f6e20 	stmvsdb	pc!, {r5, r9, sl, fp, sp, lr}^
         b02e0:	25732c20 	ldrcsb	r2, [r3, -#3104]!
         b02e4:	7761726d 	strvcb	r7, [r1, -sp, ror #4]!
         b02e8:	20726562 	rsbcss	r6, r2, r2, ror #10
         b02ec:	6f6f7421 	swivs	0x006f7421
         b02f0:	00000000 	andeq	r0, r0, r0
         b02f4:	556e6861 	strplb	r6, [lr, -#2145]!
         b02f8:	6e646c65 	cdpvs	12, 6, cr6, cr4, cr5, {3}
         b02fc:	64206578 	strvst	r6, [r0], -#1400
         b0300:	63657074 	cmnvs	r5, #116	; 0x74
         b0304:	696f6e3a 	stmvsdb	pc!, {r1, r3, r4, r5, r9, sl, fp, sp, lr}^
         b0308:	2025732d 	eorcs	r7, r5, sp, lsr #6
         b030c:	2d776172 	ldfcse	f6, [r7, -#456]!
         b0310:	6d207265 	sfmvs	f7, 4, [r0, -#404]!
         b0314:	626f6f74 	rsbvs	r6, pc, #464	; 0x1d0
         b0318:	21000000 	tstcs	r0, r0
    */
}

/**
 * Symbol: UnhandledNonUserModeException(char *, void *, void (*)(void *))
 * Address: 000b031c
 */
UnhandledNonUserModeException(char *, void *, void (*)(void *)) {
    /*
         b031c:	e1a0c00d 	mov	ip, sp
         b0320:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b0324:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0328:	e1a05000 	mov	r5, r0
         b032c:	e1a04001 	mov	r4, r1
         b0330:	e1a06002 	mov	r6, r2
         b0334:	e24ddc01 	sub	sp, sp, #256	; 0x100
         b0338:	e59f005c 	ldr	r0, [pc, #5c]	; b039c <UnhandledNonUserModeException(char *, void *, void (*)(void *))+0x80>
         b033c:	e5901000 	ldr	r1, [r0]
         b0340:	e1a00005 	mov	r0, r5
         b0344:	eb6ccb92 	bl	1be3194 <$Subexception>
         b0348:	e3300000 	teq	r0, #0	; 0x0
         b034c:	01a02005 	moveq	r2, r5
         b0350:	11a02004 	movne	r2, r4
         b0354:	e1a0000d 	mov	r0, sp
         b0358:	028f1f10 	addeq	r1, pc, #64	; 0x40
         b035c:	128f1f19 	addne	r1, pc, #100	; 0x64
         b0360:	eb6c15cb 	bl	1bb5a94 <$sprintf>
         b0364:	e1a00005 	mov	r0, r5
         b0368:	eb6691b4 	bl	1a54a40 <$ForgetDeveloperNotified(char *)>
         b036c:	e3340000 	teq	r4, #0	; 0x0
         b0370:	13360000 	teqne	r6, #0	; 0x0
         b0374:	11a00004 	movne	r0, r4
         b0378:	11a0e00f 	movne	lr, pc
         b037c:	11a0f006 	movne	pc, r6
         b0380:	eb0b8a02 	bl	392b90 <EnterFIQAtomic>
         b0384:	e3a02000 	mov	r2, #0	; 0x0
         b0388:	e3a01000 	mov	r1, #0	; 0x0
         b038c:	e3a000a5 	mov	r0, #165	; 0xa5
         b0390:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         b0394:	eb6cfcff 	bl	1bef798 <$Reboot(long, unsigned long, unsigned char)>
         b0398:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b039c:	003712ac 	eoreqs	r1, r7, ip, lsr #5
         b03a0:	556e6861 	strplb	r6, [lr, -#2145]!
         b03a4:	6e646c65 	cdpvs	12, 6, cr6, cr4, cr5, {3}
         b03a8:	64206578 	strvst	r6, [r0], -#1400
         b03ac:	63657074 	cmnvs	r5, #116	; 0x74
         b03b0:	696f6e20 	stmvsdb	pc!, {r5, r9, sl, fp, sp, lr}^
         b03b4:	25732c20 	ldrcsb	r2, [r3, -#3104]!
         b03b8:	7761726d 	strvcb	r7, [r1, -sp, ror #4]!
         b03bc:	20726562 	rsbcss	r6, r2, r2, ror #10
         b03c0:	6f6f7421 	swivs	0x006f7421
         b03c4:	00000000 	andeq	r0, r0, r0
         b03c8:	556e6861 	strplb	r6, [lr, -#2145]!
         b03cc:	6e646c65 	cdpvs	12, 6, cr6, cr4, cr5, {3}
         b03d0:	64206578 	strvst	r6, [r0], -#1400
         b03d4:	63657074 	cmnvs	r5, #116	; 0x74
         b03d8:	696f6e3a 	stmvsdb	pc!, {r1, r3, r4, r5, r9, sl, fp, sp, lr}^
         b03dc:	2025732d 	eorcs	r7, r5, sp, lsr #6
         b03e0:	2d776172 	ldfcse	f6, [r7, -#456]!
         b03e4:	6d207265 	sfmvs	f7, 4, [r0, -#404]!
         b03e8:	626f6f74 	rsbvs	r6, pc, #464	; 0x1d0
         b03ec:	21000000 	tstcs	r0, r0
    */
}

/**
 * Symbol: UnmarshalArray(void **, RefVar const &, long *, int)
 * Address: 000cdaf4
 */
UnmarshalArray(void **, RefVar const &, long *, int) {
    /*
         cdaf4:	e1a0c00d 	mov	ip, sp
         cdaf8:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         cdafc:	e24cb004 	sub	fp, ip, #4	; 0x4
         cdb00:	e1a05000 	mov	r5, r0
         cdb04:	e1a06001 	mov	r6, r1
         cdb08:	e1a04002 	mov	r4, r2
         cdb0c:	e24dd004 	sub	sp, sp, #4	; 0x4
         cdb10:	e3a01001 	mov	r1, #1	; 0x1
         cdb14:	e5960000 	ldr	r0, [r6]
         cdb18:	e5900000 	ldr	r0, [r0]
         cdb1c:	eb6bd9cc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cdb20:	eb6bd189 	bl	1bc214c <$AllocateRefHandle(long)>
         cdb24:	e3a01002 	mov	r1, #2	; 0x2
         cdb28:	e58d0000 	str	r0, [sp]
         cdb2c:	e5960000 	ldr	r0, [r6]
         cdb30:	e5900000 	ldr	r0, [r0]
         cdb34:	eb6bd9c6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cdb38:	e3100003 	tst	r0, #3	; 0x3
         cdb3c:	01a00140 	moveq	r0, r0, asr #2
         cdb40:	0a000000 	beq	cdb48 <UnmarshalArray(void **, RefVar const &, long *, int)+0x54>
         cdb44:	eb6bd174 	bl	1bc211c <$_RINTError(long)>
         cdb48:	e1a06000 	mov	r6, r0
         cdb4c:	eb673892 	bl	1a9bd9c <$MakeArray(long)>
         cdb50:	eb6bd17d 	bl	1bc214c <$AllocateRefHandle(long)>
         cdb54:	e1a07000 	mov	r7, r0
         cdb58:	e3a08000 	mov	r8, #0	; 0x0
         cdb5c:	e3560000 	cmp	r6, #0	; 0x0
         cdb60:	9a000016 	bls	cdbc0 <UnmarshalArray(void **, RefVar const &, long *, int)+0xcc>
         cdb64:	e1a0a008 	mov	sl, r8
         cdb68:	e51b302c 	ldr	r3, [fp, -#44]
         cdb6c:	e92d0008 	stmdb	sp!, {r3}
         cdb70:	e1a03004 	mov	r3, r4
         cdb74:	e28d1004 	add	r1, sp, #4	; 0x4
         cdb78:	e1a00005 	mov	r0, r5
         cdb7c:	e3a02000 	mov	r2, #0	; 0x0
         cdb80:	eb6b6a30 	bl	1ba8448 <$UnmarshalValue(void **, RefVar const &, int, long *, long *)>
         cdb84:	e28dd004 	add	sp, sp, #4	; 0x4
         cdb88:	eb6bd16f 	bl	1bc214c <$AllocateRefHandle(long)>
         cdb8c:	e1a09000 	mov	r9, r0
         cdb90:	e1a0100a 	mov	r1, sl
         cdb94:	e5902000 	ldr	r2, [r0]
         cdb98:	e5970000 	ldr	r0, [r7]
         cdb9c:	eb6be1ed 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         cdba0:	e1a00009 	mov	r0, r9
         cdba4:	eb6bd584 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cdba8:	e5940000 	ldr	r0, [r4]
         cdbac:	e3300000 	teq	r0, #0	; 0x0
         cdbb0:	1a000002 	bne	cdbc0 <UnmarshalArray(void **, RefVar const &, long *, int)+0xcc>
         cdbb4:	e2888001 	add	r8, r8, #1	; 0x1
         cdbb8:	e1580006 	cmp	r8, r6
         cdbbc:	3affffe8 	bcc	cdb64 <UnmarshalArray(void **, RefVar const &, long *, int)+0x70>
         cdbc0:	e5974000 	ldr	r4, [r7]
         cdbc4:	e1a00007 	mov	r0, r7
         cdbc8:	eb6bd57b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cdbcc:	e59d0000 	ldr	r0, [sp]
         cdbd0:	eb6bd579 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cdbd4:	e1a00004 	mov	r0, r4
         cdbd8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: UnmarshalStruct(void **, RefVar const &, long *, int)
 * Address: 000cdbdc
 */
UnmarshalStruct(void **, RefVar const &, long *, int) {
    /*
         cdbdc:	e1a0c00d 	mov	ip, sp
         cdbe0:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         cdbe4:	e24cb004 	sub	fp, ip, #4	; 0x4
         cdbe8:	e1a05001 	mov	r5, r1
         cdbec:	e1a04002 	mov	r4, r2
         cdbf0:	e5910000 	ldr	r0, [r1]
         cdbf4:	e5900000 	ldr	r0, [r0]
         cdbf8:	eb6bddab 	bl	1bc52ac <$Length(long)>
         cdbfc:	e1a08000 	mov	r8, r0
         cdc00:	e2400001 	sub	r0, r0, #1	; 0x1
         cdc04:	eb673864 	bl	1a9bd9c <$MakeArray(long)>
         cdc08:	eb6bd14f 	bl	1bc214c <$AllocateRefHandle(long)>
         cdc0c:	e1a07000 	mov	r7, r0
         cdc10:	e3a06001 	mov	r6, #1	; 0x1
         cdc14:	e3580001 	cmp	r8, #1	; 0x1
         cdc18:	9a000020 	bls	cdca0 <UnmarshalStruct(void **, RefVar const &, long *, int)+0xc4>
         cdc1c:	e24dd004 	sub	sp, sp, #4	; 0x4
         cdc20:	e246a001 	sub	sl, r6, #1	; 0x1
         cdc24:	e51b302c 	ldr	r3, [fp, -#44]
         cdc28:	e92d0008 	stmdb	sp!, {r3}
         cdc2c:	e1a01006 	mov	r1, r6
         cdc30:	e5950000 	ldr	r0, [r5]
         cdc34:	e5900000 	ldr	r0, [r0]
         cdc38:	eb6bd985 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cdc3c:	eb6bd142 	bl	1bc214c <$AllocateRefHandle(long)>
         cdc40:	e58d0004 	str	r0, [sp, #4]
         cdc44:	e28d1004 	add	r1, sp, #4	; 0x4
         cdc48:	e1a03004 	mov	r3, r4
         cdc4c:	e3a02000 	mov	r2, #0	; 0x0
         cdc50:	e51b0038 	ldr	r0, [fp, -#56]
         cdc54:	eb6b69fb 	bl	1ba8448 <$UnmarshalValue(void **, RefVar const &, int, long *, long *)>
         cdc58:	e28dd004 	add	sp, sp, #4	; 0x4
         cdc5c:	eb6bd13a 	bl	1bc214c <$AllocateRefHandle(long)>
         cdc60:	e1a09000 	mov	r9, r0
         cdc64:	e1a0100a 	mov	r1, sl
         cdc68:	e5902000 	ldr	r2, [r0]
         cdc6c:	e5970000 	ldr	r0, [r7]
         cdc70:	eb6be1b8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         cdc74:	e1a00009 	mov	r0, r9
         cdc78:	eb6bd54f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cdc7c:	e59d0000 	ldr	r0, [sp]
         cdc80:	eb6bd54d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cdc84:	e5940000 	ldr	r0, [r4]
         cdc88:	e3300000 	teq	r0, #0	; 0x0
         cdc8c:	e28dd004 	add	sp, sp, #4	; 0x4
         cdc90:	1a000002 	bne	cdca0 <UnmarshalStruct(void **, RefVar const &, long *, int)+0xc4>
         cdc94:	e2866001 	add	r6, r6, #1	; 0x1
         cdc98:	e1560008 	cmp	r6, r8
         cdc9c:	3affffde 	bcc	cdc1c <UnmarshalStruct(void **, RefVar const &, long *, int)+0x40>
         cdca0:	e5974000 	ldr	r4, [r7]
         cdca4:	e1a00007 	mov	r0, r7
         cdca8:	eb6bd543 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cdcac:	e1a00004 	mov	r0, r4
         cdcb0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: UnmarshalValue(void **, RefVar const &, int, long *, long *)
 * Address: 000cdcb4
 */
UnmarshalValue(void **, RefVar const &, int, long *, long *) {
    /*
         cdcb4:	e1a0c00d 	mov	ip, sp
         cdcb8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         cdcbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         cdcc0:	e1a04000 	mov	r4, r0
         cdcc4:	e1a05001 	mov	r5, r1
         cdcc8:	e1a06002 	mov	r6, r2
         cdccc:	e1a07003 	mov	r7, r3
         cdcd0:	e3a0a000 	mov	sl, #0	; 0x0
         cdcd4:	e59b9004 	ldr	r9, [fp, #4]
         cdcd8:	e1a00001 	mov	r0, r1
         cdcdc:	e583a000 	str	sl, [r3]
         cdce0:	eb6c9729 	bl	1bf398c <$IsArray(RefVar const &)>
         cdce4:	e3a08001 	mov	r8, #1	; 0x1
         cdce8:	e3300000 	teq	r0, #0	; 0x0
         cdcec:	0a000093 	beq	cdf40 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x28c>
         cdcf0:	e24dd004 	sub	sp, sp, #4	; 0x4
         cdcf4:	e1a0100a 	mov	r1, sl
         cdcf8:	e5950000 	ldr	r0, [r5]
         cdcfc:	e5900000 	ldr	r0, [r0]
         cdd00:	eb6bd953 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cdd04:	eb6bd110 	bl	1bc214c <$AllocateRefHandle(long)>
         cdd08:	e58d0000 	str	r0, [sp]
         cdd0c:	e5900000 	ldr	r0, [r0]
         cdd10:	e2001003 	and	r1, r0, #3	; 0x3
         cdd14:	e3510000 	cmp	r1, #0	; 0x0
         cdd18:	1a000003 	bne	cdd2c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x78>
         cdd1c:	01a00140 	moveq	r0, r0, asr #2
         cdd20:	0a000003 	beq	cdd34 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x80>
         cdd24:	eb6bd0fc 	bl	1bc211c <$_RINTError(long)>
         cdd28:	ea000001 	b	cdd34 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x80>
         cdd2c:	e1a0000d 	mov	r0, sp
         cdd30:	eb6b69b4 	bl	1ba8408 <$TranslateTypeMarshalingSymbol(RefVar const &)>
         cdd34:	e1a06000 	mov	r6, r0
         cdd38:	e59d0000 	ldr	r0, [sp]
         cdd3c:	eb6bd51e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cdd40:	e336000a 	teq	r6, #10	; 0xa
         cdd44:	0a000010 	beq	cdd8c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0xd8>
         cdd48:	e336000b 	teq	r6, #11	; 0xb
         cdd4c:	e24dd004 	sub	sp, sp, #4	; 0x4
         cdd50:	1a000075 	bne	cdf2c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x278>
         cdd54:	e1a01008 	mov	r1, r8
         cdd58:	e5950000 	ldr	r0, [r5]
         cdd5c:	e5900000 	ldr	r0, [r0]
         cdd60:	eb6bd93b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cdd64:	eb6bd0f8 	bl	1bc214c <$AllocateRefHandle(long)>
         cdd68:	e58d0000 	str	r0, [sp]
         cdd6c:	e5900000 	ldr	r0, [r0]
         cdd70:	e2001003 	and	r1, r0, #3	; 0x3
         cdd74:	e3510000 	cmp	r1, #0	; 0x0
         cdd78:	1a00000d 	bne	cddb4 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x100>
         cdd7c:	01a00140 	moveq	r0, r0, asr #2
         cdd80:	0a00000d 	beq	cddbc <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x108>
         cdd84:	eb6bd0e4 	bl	1bc211c <$_RINTError(long)>
         cdd88:	ea00000b 	b	cddbc <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x108>
         cdd8c:	e5940000 	ldr	r0, [r4]
         cdd90:	e2800003 	add	r0, r0, #3	; 0x3
         cdd94:	e3c00003 	bic	r0, r0, #3	; 0x3
         cdd98:	e1a03009 	mov	r3, r9
         cdd9c:	e1a02007 	mov	r2, r7
         cdda0:	e1a01005 	mov	r1, r5
         cdda4:	e5840000 	str	r0, [r4]
         cdda8:	e1a00004 	mov	r0, r4
         cddac:	eb6b69a4 	bl	1ba8444 <$UnmarshalStruct(void **, RefVar const &, long *, int)>
         cddb0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         cddb4:	e1a0000d 	mov	r0, sp
         cddb8:	eb6b6992 	bl	1ba8408 <$TranslateTypeMarshalingSymbol(RefVar const &)>
         cddbc:	e1a06000 	mov	r6, r0
         cddc0:	e59d0000 	ldr	r0, [sp]
         cddc4:	eb6bd4fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cddc8:	e336000d 	teq	r6, #13	; 0xd
         cddcc:	0a000015 	beq	cde28 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x174>
         cddd0:	e336000f 	teq	r6, #15	; 0xf
         cddd4:	1a00004a 	bne	cdf04 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x250>
         cddd8:	e3a01002 	mov	r1, #2	; 0x2
         cdddc:	e5950000 	ldr	r0, [r5]
         cdde0:	e5900000 	ldr	r0, [r0]
         cdde4:	eb6bd91a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cdde8:	e3100003 	tst	r0, #3	; 0x3
         cddec:	01a00140 	moveq	r0, r0, asr #2
         cddf0:	0a000000 	beq	cddf8 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x144>
         cddf4:	eb6bd0c8 	bl	1bc211c <$_RINTError(long)>
         cddf8:	e3300000 	teq	r0, #0	; 0x0
         cddfc:	1a000003 	bne	cde10 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x15c>
         cde00:	e5940000 	ldr	r0, [r4]
         cde04:	eb6c8255 	bl	1bee760 <$Ustrlen>
         cde08:	e2800002 	add	r0, r0, #2	; 0x2
         cde0c:	e3c00001 	bic	r0, r0, #1	; 0x1
         cde10:	e5941000 	ldr	r1, [r4]
         cde14:	e0811080 	add	r1, r1, r0, lsl #1
         cde18:	e5841000 	str	r1, [r4]
         cde1c:	e0410080 	sub	r0, r1, r0, lsl #1
         cde20:	eb6bdd2b 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         cde24:	ea000044 	b	cdf3c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x288>
         cde28:	e3a06002 	mov	r6, #2	; 0x2
         cde2c:	e1a01006 	mov	r1, r6
         cde30:	e5950000 	ldr	r0, [r5]
         cde34:	e5900000 	ldr	r0, [r0]
         cde38:	eb6bd905 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cde3c:	e3100003 	tst	r0, #3	; 0x3
         cde40:	01a00140 	moveq	r0, r0, asr #2
         cde44:	0a000000 	beq	cde4c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x198>
         cde48:	eb6bd0b3 	bl	1bc211c <$_RINTError(long)>
         cde4c:	e1b05000 	movs	r5, r0
         cde50:	e3a07000 	mov	r7, #0	; 0x0
         cde54:	1a000004 	bne	cde6c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x1b8>
         cde58:	e3a07001 	mov	r7, #1	; 0x1
         cde5c:	e5940000 	ldr	r0, [r4]
         cde60:	eb6b9f12 	bl	1bb5ab0 <$strlen>
         cde64:	e2800004 	add	r0, r0, #4	; 0x4
         cde68:	e3c05003 	bic	r5, r0, #3	; 0x3
         cde6c:	e5940000 	ldr	r0, [r4]
         cde70:	e0800005 	add	r0, r0, r5
         cde74:	e5840000 	str	r0, [r4]
         cde78:	e0408005 	sub	r8, r0, r5
         cde7c:	e3a00002 	mov	r0, #2	; 0x2
         cde80:	eb6bd0b1 	bl	1bc214c <$AllocateRefHandle(long)>
         cde84:	e1a04000 	mov	r4, r0
         cde88:	e59fa034 	ldr	sl, [pc, #34]	; cdec4 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x210>
         cde8c:	e3370000 	teq	r7, #0	; 0x0
         cde90:	0a00000c 	beq	cdec8 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x214>
         cde94:	e1a00008 	mov	r0, r8
         cde98:	eb6b9f04 	bl	1bb5ab0 <$strlen>
         cde9c:	e0861080 	add	r1, r6, r0, lsl #1
         cdea0:	e1a0000a 	mov	r0, sl
         cdea4:	eb6bd0a4 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         cdea8:	e5840000 	str	r0, [r4]
         cdeac:	eb6bd0aa 	bl	1bc215c <$BinaryData(long)>
         cdeb0:	e1a01000 	mov	r1, r0
         cdeb4:	e1a02009 	mov	r2, r9
         cdeb8:	e1a00008 	mov	r0, r8
         cdebc:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         cdec0:	ea000009 	b	cdeec <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x238>
         cdec4:	006848d0 	ldreqd	r4, [r8], -#128
         cdec8:	e0861085 	add	r1, r6, r5, lsl #1
         cdecc:	e1a0000a 	mov	r0, sl
         cded0:	eb6bd099 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         cded4:	e5840000 	str	r0, [r4]
         cded8:	eb6bd09f 	bl	1bc215c <$BinaryData(long)>
         cdedc:	e1a01000 	mov	r1, r0
         cdee0:	e1a03005 	mov	r3, r5
         cdee4:	e1a02009 	mov	r2, r9
         cdee8:	e1a00008 	mov	r0, r8
         cdeec:	eb6c6524 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         cdef0:	e5945000 	ldr	r5, [r4]
         cdef4:	e1a00004 	mov	r0, r4
         cdef8:	eb6bd4af 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cdefc:	e1a00005 	mov	r0, r5
         cdf00:	ea00000d 	b	cdf3c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x288>
         cdf04:	e1a02005 	mov	r2, r5
         cdf08:	e1a00004 	mov	r0, r4
         cdf0c:	e3a01000 	mov	r1, #0	; 0x0
         cdf10:	eb6b6103 	bl	1ba6324 <$AlignForType(void **, unsigned long *, RefVar const &)>
         cdf14:	e1a03009 	mov	r3, r9
         cdf18:	e1a02007 	mov	r2, r7
         cdf1c:	e1a01005 	mov	r1, r5
         cdf20:	e1a00004 	mov	r0, r4
         cdf24:	eb6b6945 	bl	1ba8440 <$UnmarshalArray(void **, RefVar const &, long *, int)>
         cdf28:	ea000003 	b	cdf3c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x288>
         cdf2c:	e3e00e17 	mvn	r0, #368	; 0x170
         cdf30:	e2400a11 	sub	r0, r0, #69632	; 0x11000
         cdf34:	e5870000 	str	r0, [r7]
         cdf38:	e3a00002 	mov	r0, #2	; 0x2
         cdf3c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         cdf40:	e3a00002 	mov	r0, #2	; 0x2
         cdf44:	eb6bd080 	bl	1bc214c <$AllocateRefHandle(long)>
         cdf48:	e1a07000 	mov	r7, r0
         cdf4c:	e5950000 	ldr	r0, [r5]
         cdf50:	e5900000 	ldr	r0, [r0]
         cdf54:	e2001003 	and	r1, r0, #3	; 0x3
         cdf58:	e3510000 	cmp	r1, #0	; 0x0
         cdf5c:	1a000003 	bne	cdf70 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x2bc>
         cdf60:	01a00140 	moveq	r0, r0, asr #2
         cdf64:	0a000003 	beq	cdf78 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x2c4>
         cdf68:	eb6bd06b 	bl	1bc211c <$_RINTError(long)>
         cdf6c:	ea000001 	b	cdf78 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x2c4>
         cdf70:	e1a00005 	mov	r0, r5
         cdf74:	eb6b6923 	bl	1ba8408 <$TranslateTypeMarshalingSymbol(RefVar const &)>
         cdf78:	e3500012 	cmp	r0, #18	; 0x12
         cdf7c:	908ff100 	addls	pc, pc, r0, lsl #2
         cdf80:	ea0000fc 	b	ce378 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c4>
         cdf84:	ea0000fb 	b	ce378 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c4>
         cdf88:	ea000019 	b	cdff4 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x340>
         cdf8c:	ea000018 	b	cdff4 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x340>
         cdf90:	ea00001d 	b	ce00c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x358>
         cdf94:	ea000029 	b	ce040 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x38c>
         cdf98:	ea000064 	b	ce130 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x47c>
         cdf9c:	ea00006d 	b	ce158 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x4a4>
         cdfa0:	ea00007a 	b	ce190 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x4dc>
         cdfa4:	ea000093 	b	ce1f8 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x544>
         cdfa8:	ea0000ad 	b	ce264 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x5b0>
         cdfac:	ea0000f1 	b	ce378 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c4>
         cdfb0:	ea0000f0 	b	ce378 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c4>
         cdfb4:	ea0000ef 	b	ce378 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c4>
         cdfb8:	ea00002b 	b	ce06c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x3b8>
         cdfbc:	ea0000db 	b	ce330 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x67c>
         cdfc0:	ea000044 	b	ce0d8 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x424>
         cdfc4:	ea0000e2 	b	ce354 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6a0>
         cdfc8:	ea0000ea 	b	ce378 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c4>
         cdfcc:	e5940000 	ldr	r0, [r4]
         cdfd0:	e2800003 	add	r0, r0, #3	; 0x3
         cdfd4:	e3c00003 	bic	r0, r0, #3	; 0x3
         cdfd8:	e5840000 	str	r0, [r4]
         cdfdc:	e8900003 	ldmia	r0, {r0, r1}
         cdfe0:	eb6bdcb9 	bl	1bc52cc <$MakeReal(double)>
         cdfe4:	e5870000 	str	r0, [r7]
         cdfe8:	e5940000 	ldr	r0, [r4]
         cdfec:	e2800008 	add	r0, r0, #8	; 0x8
         cdff0:	ea000064 	b	ce188 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x4d4>
         cdff4:	e5940000 	ldr	r0, [r4]
         cdff8:	e2800003 	add	r0, r0, #3	; 0x3
         cdffc:	e3c00003 	bic	r0, r0, #3	; 0x3
         ce000:	e5840000 	str	r0, [r4]
         ce004:	e5900000 	ldr	r0, [r0]
         ce008:	ea00005a 	b	ce178 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x4c4>
         ce00c:	e3360000 	teq	r6, #0	; 0x0
         ce010:	e5940000 	ldr	r0, [r4]
         ce014:	15900000 	ldrne	r0, [r0]
         ce018:	11a00800 	movne	r0, r0, lsl #16
         ce01c:	11a00820 	movne	r0, r0, lsr #16
         ce020:	1a000054 	bne	ce178 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x4c4>
         ce024:	e2800001 	add	r0, r0, #1	; 0x1
         ce028:	e3c00001 	bic	r0, r0, #1	; 0x1
         ce02c:	e5840000 	str	r0, [r4]
         ce030:	e5900000 	ldr	r0, [r0]
         ce034:	e1a00840 	mov	r0, r0, asr #16
         ce038:	e1a00100 	mov	r0, r0, lsl #2
         ce03c:	ea000037 	b	ce120 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x46c>
         ce040:	e3360000 	teq	r6, #0	; 0x0
         ce044:	e5940000 	ldr	r0, [r4]
         ce048:	15900000 	ldrne	r0, [r0]
         ce04c:	120000ff 	andne	r0, r0, #255	; 0xff
         ce050:	1a000048 	bne	ce178 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x4c4>
         ce054:	e5d00000 	ldrb	r0, [r0]
         ce058:	e1a00100 	mov	r0, r0, lsl #2
         ce05c:	e5870000 	str	r0, [r7]
         ce060:	e5940000 	ldr	r0, [r4]
         ce064:	e2800001 	add	r0, r0, #1	; 0x1
         ce068:	ea000046 	b	ce188 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x4d4>
         ce06c:	e24dd008 	sub	sp, sp, #8	; 0x8
         ce070:	e3360000 	teq	r6, #0	; 0x0
         ce074:	e5940000 	ldr	r0, [r4]
         ce078:	0a000004 	beq	ce090 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x3dc>
         ce07c:	e5900000 	ldr	r0, [r0]
         ce080:	e5cd0000 	strb	r0, [sp]
         ce084:	e5940000 	ldr	r0, [r4]
         ce088:	e2800004 	add	r0, r0, #4	; 0x4
         ce08c:	ea000003 	b	ce0a0 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x3ec>
         ce090:	e5d00000 	ldrb	r0, [r0]
         ce094:	e5cd0000 	strb	r0, [sp]
         ce098:	e5940000 	ldr	r0, [r4]
         ce09c:	e2800001 	add	r0, r0, #1	; 0x1
         ce0a0:	e1a02009 	mov	r2, r9
         ce0a4:	e28d1004 	add	r1, sp, #4	; 0x4
         ce0a8:	e5840000 	str	r0, [r4]
         ce0ac:	e1a0000d 	mov	r0, sp
         ce0b0:	e3a03001 	mov	r3, #1	; 0x1
         ce0b4:	eb6c64b2 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         ce0b8:	e59d0004 	ldr	r0, [sp, #4]
         ce0bc:	e1a00820 	mov	r0, r0, lsr #16
         ce0c0:	e1880100 	orr	r0, r8, r0, lsl #2
         ce0c4:	e3a01002 	mov	r1, #2	; 0x2
         ce0c8:	e1810100 	orr	r0, r1, r0, lsl #2
         ce0cc:	e5870000 	str	r0, [r7]
         ce0d0:	e28dd008 	add	sp, sp, #8	; 0x8
         ce0d4:	ea0000a7 	b	ce378 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c4>
         ce0d8:	e3360000 	teq	r6, #0	; 0x0
         ce0dc:	e5940000 	ldr	r0, [r4]
         ce0e0:	0a000006 	beq	ce100 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x44c>
         ce0e4:	e5900000 	ldr	r0, [r0]
         ce0e8:	e1a00800 	mov	r0, r0, lsl #16
         ce0ec:	e1a00820 	mov	r0, r0, lsr #16
         ce0f0:	e1880100 	orr	r0, r8, r0, lsl #2
         ce0f4:	e3a01002 	mov	r1, #2	; 0x2
         ce0f8:	e1810100 	orr	r0, r1, r0, lsl #2
         ce0fc:	ea00001e 	b	ce17c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x4c8>
         ce100:	e2800001 	add	r0, r0, #1	; 0x1
         ce104:	e3c00001 	bic	r0, r0, #1	; 0x1
         ce108:	e5840000 	str	r0, [r4]
         ce10c:	e5900000 	ldr	r0, [r0]
         ce110:	e1a00840 	mov	r0, r0, asr #16
         ce114:	e1880100 	orr	r0, r8, r0, lsl #2
         ce118:	e3a01002 	mov	r1, #2	; 0x2
         ce11c:	e1810100 	orr	r0, r1, r0, lsl #2
         ce120:	e5870000 	str	r0, [r7]
         ce124:	e5940000 	ldr	r0, [r4]
         ce128:	e2800002 	add	r0, r0, #2	; 0x2
         ce12c:	ea000015 	b	ce188 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x4d4>
         ce130:	e3360000 	teq	r6, #0	; 0x0
         ce134:	e5941000 	ldr	r1, [r4]
         ce138:	04d10001 	ldreqb	r0, [r1], #1
         ce13c:	14910004 	ldrne	r0, [r1], #4
         ce140:	120000ff 	andne	r0, r0, #255	; 0xff
         ce144:	e3300000 	teq	r0, #0	; 0x0
         ce148:	e5841000 	str	r1, [r4]
         ce14c:	03a00002 	moveq	r0, #2	; 0x2
         ce150:	13a0001a 	movne	r0, #26	; 0x1a
         ce154:	ea000086 	b	ce374 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c0>
         ce158:	e5940000 	ldr	r0, [r4]
         ce15c:	e2800003 	add	r0, r0, #3	; 0x3
         ce160:	e3c00003 	bic	r0, r0, #3	; 0x3
         ce164:	e5840000 	str	r0, [r4]
         ce168:	e5900000 	ldr	r0, [r0]
         ce16c:	e3500000 	cmp	r0, #0	; 0x0
         ce170:	b2800003 	addlt	r0, r0, #3	; 0x3
         ce174:	e1a00140 	mov	r0, r0, asr #2
         ce178:	e1a00100 	mov	r0, r0, lsl #2
         ce17c:	e5870000 	str	r0, [r7]
         ce180:	e5940000 	ldr	r0, [r4]
         ce184:	e2800004 	add	r0, r0, #4	; 0x4
         ce188:	e5840000 	str	r0, [r4]
         ce18c:	ea000079 	b	ce378 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c4>
         ce190:	e24dd00c 	sub	sp, sp, #12	; 0xc
         ce194:	e5940000 	ldr	r0, [r4]
         ce198:	e2800003 	add	r0, r0, #3	; 0x3
         ce19c:	e3c01003 	bic	r1, r0, #3	; 0x3
         ce1a0:	e5841000 	str	r1, [r4]
         ce1a4:	e4910004 	ldr	r0, [r1], #4
         ce1a8:	e5841000 	str	r1, [r4]
         ce1ac:	e3a01000 	mov	r1, #0	; 0x0
         ce1b0:	e3a03007 	mov	r3, #7	; 0x7
         ce1b4:	e1a02101 	mov	r2, r1, lsl #2
         ce1b8:	e1a02250 	mov	r2, r0, asr r2
         ce1bc:	e202200f 	and	r2, r2, #15	; 0xf
         ce1c0:	e352000a 	cmp	r2, #10	; 0xa
         ce1c4:	b2822030 	addlt	r2, r2, #48	; 0x30
         ce1c8:	a2822057 	addge	r2, r2, #87	; 0x57
         ce1cc:	e043c001 	sub	ip, r3, r1
         ce1d0:	e7cd200c 	strb	r2, [sp, ip]
         ce1d4:	e2811001 	add	r1, r1, #1	; 0x1
         ce1d8:	e3510008 	cmp	r1, #8	; 0x8
         ce1dc:	bafffff4 	blt	ce1b4 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x500>
         ce1e0:	e5cda008 	strb	sl, [sp, #8]
         ce1e4:	e1a0000d 	mov	r0, sp
         ce1e8:	eb6bdc38 	bl	1bc52d0 <$MakeString(char const *)>
         ce1ec:	e5870000 	str	r0, [r7]
         ce1f0:	e28dd00c 	add	sp, sp, #12	; 0xc
         ce1f4:	ea00005f 	b	ce378 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c4>
         ce1f8:	e3a00002 	mov	r0, #2	; 0x2
         ce1fc:	eb6736e6 	bl	1a9bd9c <$MakeArray(long)>
         ce200:	e5870000 	str	r0, [r7]
         ce204:	e5940000 	ldr	r0, [r4]
         ce208:	e2800003 	add	r0, r0, #3	; 0x3
         ce20c:	e3c00003 	bic	r0, r0, #3	; 0x3
         ce210:	e5840000 	str	r0, [r4]
         ce214:	e4905004 	ldr	r5, [r0], #4
         ce218:	e5840000 	str	r0, [r4]
         ce21c:	e1a00825 	mov	r0, r5, lsr #16
         ce220:	e1a00100 	mov	r0, r0, lsl #2
         ce224:	eb6bcfc8 	bl	1bc214c <$AllocateRefHandle(long)>
         ce228:	e1a04000 	mov	r4, r0
         ce22c:	e1a0100a 	mov	r1, sl
         ce230:	e5902000 	ldr	r2, [r0]
         ce234:	e5970000 	ldr	r0, [r7]
         ce238:	eb6be046 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         ce23c:	e1a00004 	mov	r0, r4
         ce240:	eb6bd3dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ce244:	e1a00805 	mov	r0, r5, lsl #16
         ce248:	e1a00820 	mov	r0, r0, lsr #16
         ce24c:	e1a00100 	mov	r0, r0, lsl #2
         ce250:	eb6bcfbd 	bl	1bc214c <$AllocateRefHandle(long)>
         ce254:	e1a04000 	mov	r4, r0
         ce258:	e1a01008 	mov	r1, r8
         ce25c:	e5902000 	ldr	r2, [r0]
         ce260:	ea00002d 	b	ce31c <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x668>
         ce264:	e3a00004 	mov	r0, #4	; 0x4
         ce268:	eb6736cb 	bl	1a9bd9c <$MakeArray(long)>
         ce26c:	e5870000 	str	r0, [r7]
         ce270:	e5940000 	ldr	r0, [r4]
         ce274:	e2800003 	add	r0, r0, #3	; 0x3
         ce278:	e3c00003 	bic	r0, r0, #3	; 0x3
         ce27c:	e5840000 	str	r0, [r4]
         ce280:	e4905004 	ldr	r5, [r0], #4
         ce284:	e3a060ff 	mov	r6, #255	; 0xff
         ce288:	e5840000 	str	r0, [r4]
         ce28c:	e1a00c25 	mov	r0, r5, lsr #24
         ce290:	e1a00100 	mov	r0, r0, lsl #2
         ce294:	eb6bcfac 	bl	1bc214c <$AllocateRefHandle(long)>
         ce298:	e1a04000 	mov	r4, r0
         ce29c:	e1a0100a 	mov	r1, sl
         ce2a0:	e5902000 	ldr	r2, [r0]
         ce2a4:	e5970000 	ldr	r0, [r7]
         ce2a8:	eb6be02a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         ce2ac:	e1a00004 	mov	r0, r4
         ce2b0:	eb6bd3c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ce2b4:	e0060845 	and	r0, r6, r5, asr #16
         ce2b8:	e1a00100 	mov	r0, r0, lsl #2
         ce2bc:	eb6bcfa2 	bl	1bc214c <$AllocateRefHandle(long)>
         ce2c0:	e1a04000 	mov	r4, r0
         ce2c4:	e1a01008 	mov	r1, r8
         ce2c8:	e5902000 	ldr	r2, [r0]
         ce2cc:	e5970000 	ldr	r0, [r7]
         ce2d0:	eb6be020 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         ce2d4:	e1a00004 	mov	r0, r4
         ce2d8:	eb6bd3b7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ce2dc:	e0060445 	and	r0, r6, r5, asr #8
         ce2e0:	e1a00100 	mov	r0, r0, lsl #2
         ce2e4:	eb6bcf98 	bl	1bc214c <$AllocateRefHandle(long)>
         ce2e8:	e1a04000 	mov	r4, r0
         ce2ec:	e3a01002 	mov	r1, #2	; 0x2
         ce2f0:	e5902000 	ldr	r2, [r0]
         ce2f4:	e5970000 	ldr	r0, [r7]
         ce2f8:	eb6be016 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         ce2fc:	e1a00004 	mov	r0, r4
         ce300:	eb6bd3ad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ce304:	e20500ff 	and	r0, r5, #255	; 0xff
         ce308:	e1a00100 	mov	r0, r0, lsl #2
         ce30c:	eb6bcf8e 	bl	1bc214c <$AllocateRefHandle(long)>
         ce310:	e1a04000 	mov	r4, r0
         ce314:	e3a01003 	mov	r1, #3	; 0x3
         ce318:	e5902000 	ldr	r2, [r0]
         ce31c:	e5970000 	ldr	r0, [r7]
         ce320:	eb6be00c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         ce324:	e1a00004 	mov	r0, r4
         ce328:	eb6bd3a3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ce32c:	ea000011 	b	ce378 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c4>
         ce330:	e5940000 	ldr	r0, [r4]
         ce334:	e2800003 	add	r0, r0, #3	; 0x3
         ce338:	e3c00003 	bic	r0, r0, #3	; 0x3
         ce33c:	e5840000 	str	r0, [r4]
         ce340:	e4901004 	ldr	r1, [r0], #4
         ce344:	e5840000 	str	r0, [r4]
         ce348:	e1a00001 	mov	r0, r1
         ce34c:	eb6bdbdf 	bl	1bc52d0 <$MakeString(char const *)>
         ce350:	ea000007 	b	ce374 <UnmarshalValue(void **, RefVar const &, int, long *, long *)+0x6c0>
         ce354:	e5940000 	ldr	r0, [r4]
         ce358:	e2800003 	add	r0, r0, #3	; 0x3
         ce35c:	e3c00003 	bic	r0, r0, #3	; 0x3
         ce360:	e5840000 	str	r0, [r4]
         ce364:	e4901004 	ldr	r1, [r0], #4
         ce368:	e5840000 	str	r0, [r4]
         ce36c:	e1a00001 	mov	r0, r1
         ce370:	eb6bdbd7 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         ce374:	e5870000 	str	r0, [r7]
         ce378:	e5974000 	ldr	r4, [r7]
         ce37c:	e1a00007 	mov	r0, r7
         ce380:	eb6bd38d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ce384:	e1a00004 	mov	r0, r4
         ce388:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: UnmaskInterrupt
 * Address: 000e594c
 */
void globals::UnmaskInterrupt() {
    /*
         e594c:	e5901008 	ldr	r1, [r0, #8]
         e5950:	e3c11c01 	bic	r1, r1, #256	; 0x100
         e5954:	e5a01008 	str	r1, [r0, #8]!
         e5958:	e3a00000 	mov	r0, #0	; 0x0
         e595c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UseKMEMode(void)
 * Address: 000f9fe0
 */
UseKMEMode(void) {
    /*
         f9fe0:	e59f0000 	ldr	r0, [pc, #0]	; f9fe8 <UseKMEMode(void)+0x8>
         f9fe4:	e1a0f00e 	mov	pc, lr
         f9fe8:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: UnmapLargeObject(TStore **, unsigned long *, unsigned long)
 * Address: 00102fb8
 */
UnmapLargeObject(TStore **, unsigned long *, unsigned long) {
    /*
        102fb8:	e1a0c00d 	mov	ip, sp
        102fbc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        102fc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        102fc4:	e1a05000 	mov	r5, r0
        102fc8:	e1a04001 	mov	r4, r1
        102fcc:	e1a06002 	mov	r6, r2
        102fd0:	e24dd024 	sub	sp, sp, #36	; 0x24
        102fd4:	e28d0008 	add	r0, sp, #8	; 0x8
        102fd8:	eb684ed3 	bl	1b16b2c <RDMParams::$__ct(void)>
        102fdc:	eb684ed7 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        102fe0:	e3a01000 	mov	r1, #0	; 0x0
        102fe4:	e5cd1004 	strb	r1, [sp, #4]
        102fe8:	e5900000 	ldr	r0, [r0]
        102fec:	e58d0000 	str	r0, [sp]
        102ff0:	e58d6010 	str	r6, [sp, #16]
        102ff4:	e28d2008 	add	r2, sp, #8	; 0x8
        102ff8:	e3a01002 	mov	r1, #2	; 0x2
        102ffc:	eb0aacc7 	bl	3ae320 <MonitorDispatchSWI>
        103000:	e59d1008 	ldr	r1, [sp, #8]
        103004:	e5851000 	str	r1, [r5]
        103008:	e59d100c 	ldr	r1, [sp, #12]
        10300c:	e5841000 	str	r1, [r4]
        103010:	e1a04000 	mov	r4, r0
        103014:	e1a0000d 	mov	r0, sp
        103018:	e3a01000 	mov	r1, #0	; 0x0
        10301c:	eb6b2dc3 	bl	1bce730 <TUMonitor::$__dt(void)>
        103020:	e1a00004 	mov	r0, r4
        103024:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: UnmapLargeObject(unsigned long)
 * Address: 00103ccc
 */
UnmapLargeObject(unsigned long) {
    /*
        103ccc:	e1a0c00d 	mov	ip, sp
        103cd0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        103cd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        103cd8:	e24dd008 	sub	sp, sp, #8	; 0x8
        103cdc:	e1a02000 	mov	r2, r0
        103ce0:	e1a0100d 	mov	r1, sp
        103ce4:	e28d0004 	add	r0, sp, #4	; 0x4
        103ce8:	eb68434b 	bl	1b14a1c <$UnmapLargeObject(TStore **, unsigned long *, unsigned long)>
        103cec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: UpdateBookmarks
 * Address: 0010be88
 */
void globals::UpdateBookmarks() {
    /*
        10be88:	e1a0c00d 	mov	ip, sp
        10be8c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10be90:	e24cb004 	sub	fp, ip, #4	; 0x4
        10be94:	e1a04000 	mov	r4, r0
        10be98:	e1a05001 	mov	r5, r1
        10be9c:	e24dd008 	sub	sp, sp, #8	; 0x8
        10bea0:	e3a00002 	mov	r0, #2	; 0x2
        10bea4:	eb6ad8a8 	bl	1bc214c <$AllocateRefHandle(long)>
        10bea8:	e58d0004 	str	r0, [sp, #4]
        10beac:	e3a00002 	mov	r0, #2	; 0x2
        10beb0:	eb6ad8a5 	bl	1bc214c <$AllocateRefHandle(long)>
        10beb4:	e58d0000 	str	r0, [sp]
        10beb8:	e3a00002 	mov	r0, #2	; 0x2
        10bebc:	eb6ad8a2 	bl	1bc214c <$AllocateRefHandle(long)>
        10bec0:	e1a06000 	mov	r6, r0
        10bec4:	e59f10a4 	ldr	r1, [pc, #a4]	; 10bf70 <UpdateBookmarks+0xe8>
        10bec8:	e1a00004 	mov	r0, r4
        10becc:	e3a03000 	mov	r3, #0	; 0x0
        10bed0:	e3a02000 	mov	r2, #0	; 0x0
        10bed4:	eb6ae0e6 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10bed8:	e59d1004 	ldr	r1, [sp, #4]
        10bedc:	e5810000 	str	r0, [r1]
        10bee0:	e59f108c 	ldr	r1, [pc, #8c]	; 10bf74 <UpdateBookmarks+0xec>
        10bee4:	e1a00004 	mov	r0, r4
        10bee8:	e3a03000 	mov	r3, #0	; 0x0
        10beec:	e3a02000 	mov	r2, #0	; 0x0
        10bef0:	eb6ae0df 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10bef4:	e3100003 	tst	r0, #3	; 0x3
        10bef8:	01a00140 	moveq	r0, r0, asr #2
        10befc:	0a000000 	beq	10bf04 <UpdateBookmarks+0x7c>
        10bf00:	eb6ad885 	bl	1bc211c <$_RINTError(long)>
        10bf04:	e1a04000 	mov	r4, r0
        10bf08:	e28d1004 	add	r1, sp, #4	; 0x4
        10bf0c:	e59f0064 	ldr	r0, [pc, #64]	; 10bf78 <UpdateBookmarks+0xf0>
        10bf10:	e5900000 	ldr	r0, [r0]
        10bf14:	eb66fdaa 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        10bf18:	e59d1000 	ldr	r1, [sp]
        10bf1c:	e5810000 	str	r0, [r1]
        10bf20:	e59f1054 	ldr	r1, [pc, #54]	; 10bf7c <UpdateBookmarks+0xf4>
        10bf24:	e5911000 	ldr	r1, [r1]
        10bf28:	e5911000 	ldr	r1, [r1]
        10bf2c:	eb6ae0cb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10bf30:	e5860000 	str	r0, [r6]
        10bf34:	e5951000 	ldr	r1, [r5]
        10bf38:	e5912000 	ldr	r2, [r1]
        10bf3c:	e1a01004 	mov	r1, r4
        10bf40:	eb6ae904 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        10bf44:	e1a0000d 	mov	r0, sp
        10bf48:	eb6adca8 	bl	1bc31f0 <$EntryChange(RefVar const &)>
        10bf4c:	e5964000 	ldr	r4, [r6]
        10bf50:	e1a00006 	mov	r0, r6
        10bf54:	eb6adc98 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bf58:	e59d0000 	ldr	r0, [sp]
        10bf5c:	eb6adc96 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bf60:	e59d0004 	ldr	r0, [sp, #4]
        10bf64:	eb6adc94 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bf68:	e1a00004 	mov	r0, r4
        10bf6c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        10bf70:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10bf74:	00682728 	rsbeq	r2, r8, r8, lsr #14
        10bf78:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        10bf7c:	00683788 	rsbeq	r3, r8, r8, lsl #15
    */
}

/**
 * Symbol: UnregisterBookRef
 * Address: 0010bf80
 */
void globals::UnregisterBookRef() {
    /*
        10bf80:	e1a0c00d 	mov	ip, sp
        10bf84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10bf88:	e24cb004 	sub	fp, ip, #4	; 0x4
        10bf8c:	e1a04001 	mov	r4, r1
        10bf90:	e24dd004 	sub	sp, sp, #4	; 0x4
        10bf94:	e3a00002 	mov	r0, #2	; 0x2
        10bf98:	eb6ad86b 	bl	1bc214c <$AllocateRefHandle(long)>
        10bf9c:	e1a01004 	mov	r1, r4
        10bfa0:	e58d0000 	str	r0, [sp]
        10bfa4:	e59f502c 	ldr	r5, [pc, #2c]	; 10bfd8 <UnregisterBookRef+0x58>
        10bfa8:	e5950000 	ldr	r0, [r5]
        10bfac:	eb665c92 	bl	1aa31fc <TLibrarian::$StrRefToSymbol(RefVar const &)>
        10bfb0:	e59d1000 	ldr	r1, [sp]
        10bfb4:	e5810000 	str	r0, [r1]
        10bfb8:	e5950000 	ldr	r0, [r5]
        10bfbc:	e2800004 	add	r0, r0, #4	; 0x4
        10bfc0:	e1a0100d 	mov	r1, sp
        10bfc4:	eb6ae8d6 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
        10bfc8:	e59d0000 	ldr	r0, [sp]
        10bfcc:	eb6adc7a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10bfd0:	e3a00002 	mov	r0, #2	; 0x2
        10bfd4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        10bfd8:	0c1010d0 	ldceq	0, cr1, [r0], -#832
    */
}

/**
 * Symbol: UnlockHandle(char **)
 * Address: 0011b92c
 */
UnlockHandle(char **) {
    /*
        11b92c:	eafc71e1 	b	380b8 <xHUnlock(char **)>
    */
}

/**
 * Symbol: UnPackDates(long *, long)
 * Address: 00120f60
 */
UnPackDates(long *, long) {
    /*
        120f60:	e3a02000 	mov	r2, #0	; 0x0
        120f64:	e201303f 	and	r3, r1, #63	; 0x3f
        120f68:	e7803102 	str	r3, [r0, r2, lsl #2]
        120f6c:	e1b01341 	movs	r1, r1, asr #6
        120f70:	0a000002 	beq	120f80 <UnPackDates(long *, long)+0x20>
        120f74:	e2822001 	add	r2, r2, #1	; 0x1
        120f78:	e3520005 	cmp	r2, #5	; 0x5
        120f7c:	bafffff8 	blt	120f64 <UnPackDates(long *, long)+0x4>
        120f80:	e2820001 	add	r0, r2, #1	; 0x1
        120f84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnPackWeeks(long *, long)
 * Address: 001210dc
 */
UnPackWeeks(long *, long) {
    /*
        1210dc:	e3a02000 	mov	r2, #0	; 0x0
        1210e0:	e3110010 	tst	r1, #16	; 0x10
        1210e4:	13a03001 	movne	r3, #1	; 0x1
        1210e8:	13a02001 	movne	r2, #1	; 0x1
        1210ec:	15803000 	strne	r3, [r0]
        1210f0:	e3110008 	tst	r1, #8	; 0x8
        1210f4:	0a000003 	beq	121108 <UnPackWeeks(long *, long)+0x2c>
        1210f8:	e3a0c002 	mov	ip, #2	; 0x2
        1210fc:	e1a03002 	mov	r3, r2
        121100:	e2822001 	add	r2, r2, #1	; 0x1
        121104:	e780c103 	str	ip, [r0, r3, lsl #2]
        121108:	e3110004 	tst	r1, #4	; 0x4
        12110c:	0a000003 	beq	121120 <UnPackWeeks(long *, long)+0x44>
        121110:	e3a0c003 	mov	ip, #3	; 0x3
        121114:	e1a03002 	mov	r3, r2
        121118:	e2822001 	add	r2, r2, #1	; 0x1
        12111c:	e780c103 	str	ip, [r0, r3, lsl #2]
        121120:	e3110002 	tst	r1, #2	; 0x2
        121124:	0a000003 	beq	121138 <UnPackWeeks(long *, long)+0x5c>
        121128:	e3a0c004 	mov	ip, #4	; 0x4
        12112c:	e1a03002 	mov	r3, r2
        121130:	e2822001 	add	r2, r2, #1	; 0x1
        121134:	e780c103 	str	ip, [r0, r3, lsl #2]
        121138:	e3110001 	tst	r1, #1	; 0x1
        12113c:	0a000003 	beq	121150 <UnPackWeeks(long *, long)+0x74>
        121140:	e3a03005 	mov	r3, #5	; 0x5
        121144:	e1a01002 	mov	r1, r2
        121148:	e2822001 	add	r2, r2, #1	; 0x1
        12114c:	e7803101 	str	r3, [r0, r1, lsl #2]
        121150:	e1a00002 	mov	r0, r2
        121154:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnPackDays(long *, long)
 * Address: 00121158
 */
UnPackDays(long *, long) {
    /*
        121158:	e92d4000 	stmdb	sp!, {lr}
        12115c:	e3a0c000 	mov	ip, #0	; 0x0
        121160:	e3a03b02 	mov	r3, #2048	; 0x800
        121164:	e3a02000 	mov	r2, #0	; 0x0
        121168:	e1110003 	tst	r1, r3
        12116c:	11a0e00c 	movne	lr, ip
        121170:	128cc001 	addne	ip, ip, #1	; 0x1
        121174:	1780210e 	strne	r2, [r0, lr, lsl #2]
        121178:	e1a030c3 	mov	r3, r3, asr #1
        12117c:	e2822001 	add	r2, r2, #1	; 0x1
        121180:	e3520007 	cmp	r2, #7	; 0x7
        121184:	bafffff7 	blt	121168 <UnPackDays(long *, long)+0x10>
        121188:	e1a0000c 	mov	r0, ip
        12118c:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: UnlockPtr
 * Address: 0014306c
 */
void globals::UnlockPtr() {
    /*
        14306c:	e1a0c00d 	mov	ip, sp
        143070:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        143074:	e24cb004 	sub	fp, ip, #4	; 0x4
        143078:	e1a04000 	mov	r4, r0
        14307c:	eb6a781d 	bl	1be10f8 <$GetPtrSize>
        143080:	e0801004 	add	r1, r0, r4
        143084:	e1a00004 	mov	r0, r4
        143088:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        14308c:	ea6a6b83 	b	1bddea0 <$UnlockHeapRange>
    */
}

/**
 * Symbol: UpdateStrokesInList(TUnitList *, FRect *)
 * Address: 00145564
 */
UpdateStrokesInList(TUnitList *, FRect *) {
    /*
        145564:	e1a0c00d 	mov	ip, sp
        145568:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14556c:	e24cb004 	sub	fp, ip, #4	; 0x4
        145570:	e1a04001 	mov	r4, r1
        145574:	e24dd020 	sub	sp, sp, #32	; 0x20
        145578:	e1a0100d 	mov	r1, sp
        14557c:	eb68667c 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        145580:	e3a05000 	mov	r5, #0	; 0x0
        145584:	e59d1014 	ldr	r1, [sp, #20]
        145588:	e3510000 	cmp	r1, #0	; 0x0
        14558c:	da000009 	ble	1455b8 <UpdateStrokesInList(TUnitList *, FRect *)+0x54>
        145590:	e5900000 	ldr	r0, [r0]
        145594:	e1a01004 	mov	r1, r4
        145598:	eb657f4b 	bl	1aa52cc <$UpdateStroke(TStrokeUnit *, FRect *)>
        14559c:	e1a0000d 	mov	r0, sp
        1455a0:	e1a0e00f 	mov	lr, pc
        1455a4:	e59df018 	ldr	pc, [sp, #24]
        1455a8:	e2855001 	add	r5, r5, #1	; 0x1
        1455ac:	e59d1014 	ldr	r1, [sp, #20]
        1455b0:	e1510005 	cmp	r1, r5
        1455b4:	cafffff5 	bgt	145590 <UpdateStrokesInList(TUnitList *, FRect *)+0x2c>
        1455b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: UpdateStroke(TStrokeUnit *, FRect *)
 * Address: 001456a0
 */
UpdateStroke(TStrokeUnit *, FRect *) {
    /*
        1456a0:	e1a0c00d 	mov	ip, sp
        1456a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1456a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1456ac:	e1a04000 	mov	r4, r0
        1456b0:	e1a05001 	mov	r5, r1
        1456b4:	e24dd010 	sub	sp, sp, #16	; 0x10
        1456b8:	e1a0100d 	mov	r1, sp
        1456bc:	eb687ef1 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        1456c0:	e59f005c 	ldr	r0, [pc, #5c]	; 145724 <UpdateStroke(TStrokeUnit *, FRect *)+0x84>
        1456c4:	eb65450e 	bl	1a96b04 <$GetPreference(RefVar const &)>
        1456c8:	e3100003 	tst	r0, #3	; 0x3
        1456cc:	01a00140 	moveq	r0, r0, asr #2
        1456d0:	0a000000 	beq	1456d8 <UpdateStroke(TStrokeUnit *, FRect *)+0x38>
        1456d4:	eb69f290 	bl	1bc211c <$_RINTError(long)>
        1456d8:	e1a00800 	mov	r0, r0, lsl #16
        1456dc:	e2602000 	rsb	r2, r0, #0	; 0x0
        1456e0:	e1a01002 	mov	r1, r2
        1456e4:	e1a0000d 	mov	r0, sp
        1456e8:	eb686a4e 	bl	1b60028 <$InsetRectangle>
        1456ec:	e3a01302 	mov	r1, #134217728	; 0x8000000
        1456f0:	e5940040 	ldr	r0, [r4, #64]
        1456f4:	eb6876bb 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        1456f8:	e3300000 	teq	r0, #0	; 0x0
        1456fc:	0a000005 	beq	145718 <UpdateStroke(TStrokeUnit *, FRect *)+0x78>
        145700:	e1a0200d 	mov	r2, sp
        145704:	e1a01005 	mov	r1, r5
        145708:	e1a0000d 	mov	r0, sp
        14570c:	eb687291 	bl	1b62158 <$SectRectangle>
        145710:	e3300000 	teq	r0, #0	; 0x0
        145714:	0a000001 	beq	145720 <UpdateStroke(TStrokeUnit *, FRect *)+0x80>
        145718:	e5b40040 	ldr	r0, [r4, #64]!
        14571c:	eb6897a2 	bl	1b6b5ac <TStroke::$Draw(void)>
        145720:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        145724:	00684e50 	rsbeq	r4, r8, r0, asr lr
    */
}

/**
 * Symbol: UnHookTracker(unsigned long)
 * Address: 00149724
 */
UnHookTracker(unsigned long) {
    /*
        149724:	e59f1018 	ldr	r1, [pc, #18]	; 149744 <UnHookTracker(unsigned long)+0x20>
        149728:	e5912000 	ldr	r2, [r1]
        14972c:	e3320000 	teq	r2, #0	; 0x0
        149730:	059f0010 	ldreq	r0, [pc, #10]	; 149748 <UnHookTracker(unsigned long)+0x24>
        149734:	11a01000 	movne	r1, r0
        149738:	11a00002 	movne	r0, r2
        14973c:	1a66fb47 	bne	1b08460 <TExtPageTrackerMgr::$UnHookTracker(unsigned long)>
        149740:	e1a0f00e 	mov	pc, lr
        149744:	0c104f4c 	ldceq	15, cr4, [r0], -#304
        149748:	ffffd8cb 	swinv	0x00ffd8cb
    */
}

/**
 * Symbol: UseTrainingDataForRecognition
 * Address: 001679fc
 */
void globals::UseTrainingDataForRecognition() {
    /*
        1679fc:	e1a0c00d 	mov	ip, sp
        167a00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        167a04:	e24cb004 	sub	fp, ip, #4	; 0x4
        167a08:	e1a04001 	mov	r4, r1
        167a0c:	ebfe79b9 	bl	1060f8 <LIBeginWeights(void)>
        167a10:	e1a05000 	mov	r5, r0
        167a14:	e59f004c 	ldr	r0, [pc, #4c]	; 167a68 <UseTrainingDataForRecognition+0x6c>
        167a18:	e5900000 	ldr	r0, [r0]
        167a1c:	e59f1048 	ldr	r1, [pc, #48]	; 167a6c <UseTrainingDataForRecognition+0x70>
        167a20:	eb67e15f 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
        167a24:	e5941000 	ldr	r1, [r4]
        167a28:	e5911000 	ldr	r1, [r1]
        167a2c:	e3310002 	teq	r1, #2	; 0x2
        167a30:	e1a0c000 	mov	ip, r0
        167a34:	e1a03005 	mov	r3, r5
        167a38:	e3a02000 	mov	r2, #0	; 0x0
        167a3c:	03a01023 	moveq	r1, #35	; 0x23
        167a40:	02811802 	addeq	r1, r1, #131072	; 0x20000
        167a44:	13a01024 	movne	r1, #36	; 0x24
        167a48:	12811802 	addne	r1, r1, #131072	; 0x20000
        167a4c:	e59cc000 	ldr	ip, [ip]
        167a50:	e1a0e00f 	mov	lr, pc
        167a54:	e28cf02c 	add	pc, ip, #44	; 0x2c
        167a58:	e1a00005 	mov	r0, r5
        167a5c:	ebfe7d81 	bl	107068 <LIEndWeights(char **)>
        167a60:	e3a00002 	mov	r0, #2	; 0x2
        167a64:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        167a68:	0c10187c 	ldceq	8, cr1, [r0], -#496
        167a6c:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
    */
}

/**
 * Symbol: UnlockLexicalDB(unsigned long)
 * Address: 00168ac4
 */
UnlockLexicalDB(unsigned long) {
    /*
        168ac4:	e1b01000 	movs	r1, r0
        168ac8:	03a00000 	moveq	r0, #0	; 0x0
        168acc:	01a0f00e 	moveq	pc, lr
        168ad0:	e1a0c00d 	mov	ip, sp
        168ad4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        168ad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        168adc:	e1a00001 	mov	r0, r1
        168ae0:	eb67f61a 	bl	1b66350 <TDictChain::$UnlockChain(void)>
        168ae4:	e3a00001 	mov	r0, #1	; 0x1
        168ae8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: UnlockVocabularies(void *)
 * Address: 00169020
 */
UnlockVocabularies(void *) {
    /*
        169020:	e1a0c00d 	mov	ip, sp
        169024:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        169028:	e24cb004 	sub	fp, ip, #4	; 0x4
        16902c:	e1b04000 	movs	r4, r0
        169030:	03a00000 	moveq	r0, #0	; 0x0
        169034:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        169038:	e5940000 	ldr	r0, [r4]
        16903c:	e3300000 	teq	r0, #0	; 0x0
        169040:	1b67f4c2 	blne	1b66350 <TDictChain::$UnlockChain(void)>
        169044:	e5b4003c 	ldr	r0, [r4, #60]!
        169048:	e3300000 	teq	r0, #0	; 0x0
        16904c:	1b67f4bf 	blne	1b66350 <TDictChain::$UnlockChain(void)>
        169050:	e3a00001 	mov	r0, #1	; 0x1
        169054:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: UpdateStylePalette(void)
 * Address: 0017b108
 */
UpdateStylePalette(void) {
    /*
        17b108:	e1a0c00d 	mov	ip, sp
        17b10c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        17b110:	e24cb004 	sub	fp, ip, #4	; 0x4
        17b114:	e24dd004 	sub	sp, sp, #4	; 0x4
        17b118:	e59f1060 	ldr	r1, [pc, #60]	; 17b180 <UpdateStylePalette(void)+0x78>
        17b11c:	e59f0060 	ldr	r0, [pc, #60]	; 17b184 <UpdateStylePalette(void)+0x7c>
        17b120:	e5900000 	ldr	r0, [r0]
        17b124:	eb693d0b 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        17b128:	eb691c07 	bl	1bc214c <$AllocateRefHandle(long)>
        17b12c:	e58d0000 	str	r0, [sp]
        17b130:	e1a0000d 	mov	r0, sp
        17b134:	eb693d08 	bl	1bca55c <$GetView(RefVar const &)>
        17b138:	e24dd004 	sub	sp, sp, #4	; 0x4
        17b13c:	e3300000 	teq	r0, #0	; 0x0
        17b140:	15900008 	ldrne	r0, [r0, #8]
        17b144:	12000001 	andne	r0, r0, #1	; 0x1
        17b148:	13300000 	teqne	r0, #0	; 0x0
        17b14c:	0a000008 	beq	17b174 <UpdateStylePalette(void)+0x6c>
        17b150:	e3a00002 	mov	r0, #2	; 0x2
        17b154:	eb691bfc 	bl	1bc214c <$AllocateRefHandle(long)>
        17b158:	e58d0000 	str	r0, [sp]
        17b15c:	e1a0200d 	mov	r2, sp
        17b160:	e59f1020 	ldr	r1, [pc, #20]	; 17b188 <UpdateStylePalette(void)+0x80>
        17b164:	e28d0004 	add	r0, sp, #4	; 0x4
        17b168:	eb692019 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        17b16c:	e59d0000 	ldr	r0, [sp]
        17b170:	eb692011 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17b174:	e5bd0004 	ldr	r0, [sp, #4]!
        17b178:	eb69200f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17b17c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        17b180:	00684928 	rsbeq	r4, r8, r8, lsr #18
        17b184:	0c101934 	ldceq	9, cr1, [r0], -#208
        17b188:	00684990 	streqb	r4, [r8], -#144
    */
}

/**
 * Symbol: UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc
 * Address: 0017caa0
 */
void globals::UpdateStyleRunLengths() {
    /*
        17caa0:	e1a0c00d 	mov	ip, sp
        17caa4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        17caa8:	e24cb004 	sub	fp, ip, #4	; 0x4
        17caac:	e1a05000 	mov	r5, r0
        17cab0:	e1a04001 	mov	r4, r1
        17cab4:	e59b0004 	ldr	r0, [fp, #4]
        17cab8:	e200a0ff 	and	sl, r0, #255	; 0xff
        17cabc:	e5950000 	ldr	r0, [r5]
        17cac0:	e3300000 	teq	r0, #0	; 0x0
        17cac4:	05940000 	ldreq	r0, [r4]
        17cac8:	05820000 	streq	r0, [r2]
        17cacc:	03a00000 	moveq	r0, #0	; 0x0
        17cad0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        17cad4:	e3a08000 	mov	r8, #0	; 0x0
        17cad8:	e3a0c000 	mov	ip, #0	; 0x0
        17cadc:	e3a06000 	mov	r6, #0	; 0x0
        17cae0:	e5941000 	ldr	r1, [r4]
        17cae4:	e591e000 	ldr	lr, [r1]
        17cae8:	e33e0000 	teq	lr, #0	; 0x0
        17caec:	0a000010 	beq	17cb34 <UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc+0x94>
        17caf0:	e590e000 	ldr	lr, [r0]
        17caf4:	e1a0e84e 	mov	lr, lr, asr #16
        17caf8:	e08cc00e 	add	ip, ip, lr
        17cafc:	e2866001 	add	r6, r6, #1	; 0x1
        17cb00:	e15c0003 	cmp	ip, r3
        17cb04:	3a000006 	bcc	17cb24 <UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc+0x84>
        17cb08:	e1a07000 	mov	r7, r0
        17cb0c:	e04c0003 	sub	r0, ip, r3
        17cb10:	e04e0000 	sub	r0, lr, r0
        17cb14:	e1a09800 	mov	r9, r0, lsl #16
        17cb18:	e1a09849 	mov	r9, r9, asr #16
        17cb1c:	e5821000 	str	r1, [r2]
        17cb20:	ea000003 	b	17cb34 <UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc+0x94>
        17cb24:	e2800002 	add	r0, r0, #2	; 0x2
        17cb28:	e5b1e004 	ldr	lr, [r1, #4]!
        17cb2c:	e33e0000 	teq	lr, #0	; 0x0
        17cb30:	1affffee 	bne	17caf0 <UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc+0x50>
        17cb34:	e33a0000 	teq	sl, #0	; 0x0
        17cb38:	0a00001a 	beq	17cba8 <UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc+0x108>
        17cb3c:	e1a00086 	mov	r0, r6, lsl #1
        17cb40:	eb6946fc 	bl	1bce738 <$__nw(unsigned int)>
        17cb44:	e1b08000 	movs	r8, r0
        17cb48:	1a000005 	bne	17cb64 <UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc+0xc4>
        17cb4c:	e59f009c 	ldr	r0, [pc, #9c]	; 17cbf0 <UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc+0x150>
        17cb50:	e5900000 	ldr	r0, [r0]
        17cb54:	e3a02000 	mov	r2, #0	; 0x0
        17cb58:	e3a010e9 	mov	r1, #233	; 0xe9
        17cb5c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        17cb60:	eb69998d 	bl	1be319c <$Throw>
        17cb64:	e1a01008 	mov	r1, r8
        17cb68:	e3a00000 	mov	r0, #0	; 0x0
        17cb6c:	e2463001 	sub	r3, r6, #1	; 0x1
        17cb70:	e3530000 	cmp	r3, #0	; 0x0
        17cb74:	e5952000 	ldr	r2, [r5]
        17cb78:	da000007 	ble	17cb9c <UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc+0xfc>
        17cb7c:	e492c002 	ldr	ip, [r2], #2
        17cb80:	e1a0c82c 	mov	ip, ip, lsr #16
        17cb84:	e5c1c001 	strb	ip, [r1, #1]
        17cb88:	e1a0c44c 	mov	ip, ip, asr #8
        17cb8c:	e4c1c002 	strb	ip, [r1], #2
        17cb90:	e2800001 	add	r0, r0, #1	; 0x1
        17cb94:	e1530000 	cmp	r3, r0
        17cb98:	cafffff7 	bgt	17cb7c <UpdateStyleRunLengths__FPPsPPP11StyleRecordT2UlUc+0xdc>
        17cb9c:	e5c19001 	strb	r9, [r1, #1]
        17cba0:	e1a00449 	mov	r0, r9, asr #8
        17cba4:	e5c10000 	strb	r0, [r1]
        17cba8:	e5970000 	ldr	r0, [r7]
        17cbac:	e1a00820 	mov	r0, r0, lsr #16
        17cbb0:	e0400009 	sub	r0, r0, r9
        17cbb4:	e5c70001 	strb	r0, [r7, #1]
        17cbb8:	e1a00440 	mov	r0, r0, asr #8
        17cbbc:	e5c70000 	strb	r0, [r7]
        17cbc0:	e2460001 	sub	r0, r6, #1	; 0x1
        17cbc4:	e1a01007 	mov	r1, r7
        17cbc8:	e5972000 	ldr	r2, [r7]
        17cbcc:	e1b02842 	movs	r2, r2, asr #16
        17cbd0:	02811002 	addeq	r1, r1, #2	; 0x2
        17cbd4:	02800001 	addeq	r0, r0, #1	; 0x1
        17cbd8:	e5851000 	str	r1, [r5]
        17cbdc:	e5941000 	ldr	r1, [r4]
        17cbe0:	e0810100 	add	r0, r1, r0, lsl #2
        17cbe4:	e5840000 	str	r0, [r4]
        17cbe8:	e1a00008 	mov	r0, r8
        17cbec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        17cbf0:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: UseROMJumpTables(void)
 * Address: 001832e8
 */
UseROMJumpTables(void) {
    /*
        1832e8:	e1a0c00d 	mov	ip, sp
        1832ec:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1832f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1832f4:	e59f0078 	ldr	r0, [pc, #78]	; 183374 <UseROMJumpTables(void)+0x8c>
        1832f8:	e1a09000 	mov	r9, r0
        1832fc:	e3e01000 	mvn	r1, #0	; 0x0
        183300:	ebffffca 	bl	183230 <BuildPatchTablePageTable(unsigned long, long)>
        183304:	e24dd004 	sub	sp, sp, #4	; 0x4
        183308:	e3a06000 	mov	r6, #0	; 0x0
        18330c:	e59f5064 	ldr	r5, [pc, #64]	; 183378 <UseROMJumpTables(void)+0x90>
        183310:	e59f4064 	ldr	r4, [pc, #64]	; 18337c <UseROMJumpTables(void)+0x94>
        183314:	e59f8064 	ldr	r8, [pc, #64]	; 183380 <UseROMJumpTables(void)+0x98>
        183318:	e1a0200d 	mov	r2, sp
        18331c:	e1a00006 	mov	r0, r6
        183320:	e1a01005 	mov	r1, r5
        183324:	ebfe6eac 	bl	11eddc <PrimRExConfigEntry>
        183328:	e1a07000 	mov	r7, r0
        18332c:	e1a0200d 	mov	r2, sp
        183330:	e1a00006 	mov	r0, r6
        183334:	e1a01004 	mov	r1, r4
        183338:	ebfe6ea7 	bl	11eddc <PrimRExConfigEntry>
        18333c:	e5981020 	ldr	r1, [r8, #32]
        183340:	e1b01821 	movs	r1, r1, lsr #16
        183344:	13300000 	teqne	r0, #0	; 0x0
        183348:	12807501 	addne	r7, r0, #4194304	; 0x400000
        18334c:	e3370000 	teq	r7, #0	; 0x0
        183350:	00890506 	addeq	r0, r9, r6, lsl #10
        183354:	02800a01 	addeq	r0, r0, #4096	; 0x1000
        183358:	e1a01006 	mov	r1, r6
        18335c:	11a00007 	movne	r0, r7
        183360:	ebffffb2 	bl	183230 <BuildPatchTablePageTable(unsigned long, long)>
        183364:	e2866001 	add	r6, r6, #1	; 0x1
        183368:	e3560004 	cmp	r6, #4	; 0x4
        18336c:	3affffe9 	bcc	183318 <UseROMJumpTables(void)+0x30>
        183370:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        183374:	00016000 	andeq	r6, r1, r0
        183378:	70747074 	rsbvcs	r7, r4, r4, ror r0
        18337c:	676c7074 	undefined
        183380:	0c1061c4 	ldfeqs	f6, [r0], -#784
    */
}

/**
 * Symbol: UserWantsColdBoot(void)
 * Address: 0018b2ac
 */
UserWantsColdBoot(void) {
    /*
        18b2ac:	e59f0010 	ldr	r0, [pc, #10]	; 18b2c4 <UserWantsColdBoot(void)+0x18>
        18b2b0:	e5900000 	ldr	r0, [r0]
        18b2b4:	e3300000 	teq	r0, #0	; 0x0
        18b2b8:	03a00000 	moveq	r0, #0	; 0x0
        18b2bc:	1a07f2f1 	bne	387e88 <TPlatformDriver::ResetZAPStoreCheck(void)>
        18b2c0:	e1a0f00e 	mov	pc, lr
        18b2c4:	0c101764 	ldceq	7, cr1, [r0], -#400
    */
}

/**
 * Symbol: UpdatePenSizePalette(void)
 * Address: 0018dd44
 */
UpdatePenSizePalette(void) {
    /*
        18dd44:	e1a0c00d 	mov	ip, sp
        18dd48:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        18dd4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        18dd50:	e24dd004 	sub	sp, sp, #4	; 0x4
        18dd54:	e59f1060 	ldr	r1, [pc, #60]	; 18ddbc <UpdatePenSizePalette(void)+0x78>
        18dd58:	e59f0060 	ldr	r0, [pc, #60]	; 18ddc0 <UpdatePenSizePalette(void)+0x7c>
        18dd5c:	e5900000 	ldr	r0, [r0]
        18dd60:	eb68f1fc 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        18dd64:	eb68d0f8 	bl	1bc214c <$AllocateRefHandle(long)>
        18dd68:	e58d0000 	str	r0, [sp]
        18dd6c:	e1a0000d 	mov	r0, sp
        18dd70:	eb68f1f9 	bl	1bca55c <$GetView(RefVar const &)>
        18dd74:	e24dd004 	sub	sp, sp, #4	; 0x4
        18dd78:	e3300000 	teq	r0, #0	; 0x0
        18dd7c:	15900008 	ldrne	r0, [r0, #8]
        18dd80:	12000001 	andne	r0, r0, #1	; 0x1
        18dd84:	13300000 	teqne	r0, #0	; 0x0
        18dd88:	0a000008 	beq	18ddb0 <UpdatePenSizePalette(void)+0x6c>
        18dd8c:	e3a00002 	mov	r0, #2	; 0x2
        18dd90:	eb68d0ed 	bl	1bc214c <$AllocateRefHandle(long)>
        18dd94:	e58d0000 	str	r0, [sp]
        18dd98:	e1a0200d 	mov	r2, sp
        18dd9c:	e59f1020 	ldr	r1, [pc, #20]	; 18ddc4 <UpdatePenSizePalette(void)+0x80>
        18dda0:	e28d0004 	add	r0, sp, #4	; 0x4
        18dda4:	eb68d50a 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        18dda8:	e59d0000 	ldr	r0, [sp]
        18ddac:	eb68d502 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18ddb0:	e5bd0004 	ldr	r0, [sp, #4]!
        18ddb4:	eb68d500 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        18ddb8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        18ddbc:	00684928 	rsbeq	r4, r8, r8, lsr #18
        18ddc0:	0c101934 	ldceq	9, cr1, [r0], -#208
        18ddc4:	006849a0 	rsbeq	r4, r8, r0, lsr #19
    */
}

/**
 * Symbol: UnScheduleTask(TTask *)
 * Address: 001918fc
 */
UnScheduleTask(TTask *) {
    /*
        1918fc:	e59f100c 	ldr	r1, [pc, #c]	; 191910 <UnScheduleTask(TTask *)+0x14>
        191900:	e5912000 	ldr	r2, [r1]
        191904:	e1a01000 	mov	r1, r0
        191908:	e1a00002 	mov	r0, r2
        19190c:	e592f010 	ldr	pc, [r2, #16]
        191910:	0c100fd0 	ldceq	15, cr0, [r0], -#832
    */
}

/**
 * Symbol: UstrlenPrivate(unsigned short const *)
 * Address: 001944b4
 */
UstrlenPrivate(unsigned short const *) {
    /*
        1944b4:	e1a01000 	mov	r1, r0
        1944b8:	e5912000 	ldr	r2, [r1]
        1944bc:	e1b02822 	movs	r2, r2, lsr #16
        1944c0:	e2811002 	add	r1, r1, #2	; 0x2
        1944c4:	1afffffb 	bne	1944b8 <UstrlenPrivate(unsigned short const *)+0x4>
        1944c8:	e0410000 	sub	r0, r1, r0
        1944cc:	e0800fa0 	add	r0, r0, r0, lsr #31
        1944d0:	e1a000c0 	mov	r0, r0, asr #1
        1944d4:	e2400001 	sub	r0, r0, #1	; 0x1
        1944d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnrememberRegisteredPackageInDebugger
 * Address: 00199e40
 */
void globals::UnrememberRegisteredPackageInDebugger() {
    /*
        199e40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UpdateStroke(TUnit *)
 * Address: 0019db84
 */
UpdateStroke(TUnit *) {
    /*
        19db84:	e1a0c00d 	mov	ip, sp
        19db88:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        19db8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19db90:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        19db94:	e1a01000 	mov	r1, r0
        19db98:	e1a0000d 	mov	r0, sp
        19db9c:	e3a02000 	mov	r2, #0	; 0x0
        19dba0:	eb63a60f 	bl	1a873e4 <TUnitPublic::$__ct(TUnit *, unsigned long)>
        19dba4:	e1a0000d 	mov	r0, sp
        19dba8:	eb641590 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        19dbac:	e3a01001 	mov	r1, #1	; 0x1
        19dbb0:	eb63f051 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        19dbb4:	e59f0018 	ldr	r0, [pc, #18]	; 19dbd4 <UpdateStroke(TUnit *)+0x50>
        19dbb8:	e5900000 	ldr	r0, [r0]
        19dbbc:	e3a01000 	mov	r1, #0	; 0x0
        19dbc0:	eb641db7 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        19dbc4:	e1a0000d 	mov	r0, sp
        19dbc8:	e3a01000 	mov	r1, #0	; 0x0
        19dbcc:	eb63aa1e 	bl	1a8844c <TUnitPublic::$__dt(void)>
        19dbd0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        19dbd4:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: UnionBounds(TStroke **, TRect *)
 * Address: 001a36bc
 */
UnionBounds(TStroke **, TRect *) {
    /*
        1a36bc:	e1a0c00d 	mov	ip, sp
        1a36c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a36c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a36c8:	e1a05000 	mov	r5, r0
        1a36cc:	e1a04001 	mov	r4, r1
        1a36d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a36d4:	e3a019fe 	mov	r1, #4161536	; 0x3f8000
        1a36d8:	e2411501 	sub	r1, r1, #4194304	; 0x400000
        1a36dc:	e5c41005 	strb	r1, [r4, #5]
        1a36e0:	e3e0007f 	mvn	r0, #127	; 0x7f
        1a36e4:	e5c40004 	strb	r0, [r4, #4]
        1a36e8:	e5c41001 	strb	r1, [r4, #1]
        1a36ec:	e5c40000 	strb	r0, [r4]
        1a36f0:	e3a06000 	mov	r6, #0	; 0x0
        1a36f4:	e5950000 	ldr	r0, [r5]
        1a36f8:	e3300000 	teq	r0, #0	; 0x0
        1a36fc:	0a000008 	beq	1a3724 <UnionBounds(TStroke **, TRect *)+0x68>
        1a3700:	e1a0100d 	mov	r1, sp
        1a3704:	eb6440a1 	bl	1ab3990 <$GetStrokeRect(TStroke *, TRect *)>
        1a3708:	e1a0100d 	mov	r1, sp
        1a370c:	e1a00004 	mov	r0, r4
        1a3710:	eb6406de 	bl	1aa5290 <TRect::$Union(TRect const &)>
        1a3714:	e2866001 	add	r6, r6, #1	; 0x1
        1a3718:	e7950106 	ldr	r0, [r5, r6, lsl #2]
        1a371c:	e3300000 	teq	r0, #0	; 0x0
        1a3720:	1afffff6 	bne	1a3700 <UnionBounds(TStroke **, TRect *)+0x44>
        1a3724:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: UnfixRect
 * Address: 001a3f44
 */
void globals::UnfixRect() {
    /*
        1a3f44:	e5902004 	ldr	r2, [r0, #4]
        1a3f48:	e2822902 	add	r2, r2, #32768	; 0x8000
        1a3f4c:	e1a02842 	mov	r2, r2, asr #16
        1a3f50:	e5c12001 	strb	r2, [r1, #1]
        1a3f54:	e1a02442 	mov	r2, r2, asr #8
        1a3f58:	e5c12000 	strb	r2, [r1]
        1a3f5c:	e5902000 	ldr	r2, [r0]
        1a3f60:	e2822902 	add	r2, r2, #32768	; 0x8000
        1a3f64:	e1a02842 	mov	r2, r2, asr #16
        1a3f68:	e5c12003 	strb	r2, [r1, #3]
        1a3f6c:	e1a02442 	mov	r2, r2, asr #8
        1a3f70:	e5c12002 	strb	r2, [r1, #2]
        1a3f74:	e590200c 	ldr	r2, [r0, #12]
        1a3f78:	e2822902 	add	r2, r2, #32768	; 0x8000
        1a3f7c:	e1a02842 	mov	r2, r2, asr #16
        1a3f80:	e5c12005 	strb	r2, [r1, #5]
        1a3f84:	e1a02442 	mov	r2, r2, asr #8
        1a3f88:	e5c12004 	strb	r2, [r1, #4]
        1a3f8c:	e5900008 	ldr	r0, [r0, #8]
        1a3f90:	e2800902 	add	r0, r0, #32768	; 0x8000
        1a3f94:	e1a00840 	mov	r0, r0, asr #16
        1a3f98:	e5c10007 	strb	r0, [r1, #7]
        1a3f9c:	e1a00440 	mov	r0, r0, asr #8
        1a3fa0:	e5c10006 	strb	r0, [r1, #6]
        1a3fa4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Unscaled__FPlN21l
 * Address: 001c6388
 */
void globals::Unscaled() {
    /*
        1c6388:	e4903004 	ldr	r3, [r0], #4
        1c638c:	e4813004 	str	r3, [r1], #4
        1c6390:	e4903004 	ldr	r3, [r0], #4
        1c6394:	e4813004 	str	r3, [r1], #4
        1c6398:	e1510002 	cmp	r1, r2
        1c639c:	3afffff9 	bcc	1c6388 <Unscaled__FPlN21l>
        1c63a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Unscaled2to1__FPlN21l
 * Address: 001c63a4
 */
void globals::Unscaled2to1() {
    /*
        1c63a4:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        1c63a8:	e3a03102 	mov	r3, #-2147483648	; 0x80000000
        1c63ac:	e3a0e000 	mov	lr, #0	; 0x0
        1c63b0:	e3a0c103 	mov	ip, #-1073741824	; 0xc0000000
        1c63b4:	e4904004 	ldr	r4, [r0], #4
        1c63b8:	e3340000 	teq	r4, #0	; 0x0
        1c63bc:	0a000005 	beq	1c63d8 <Unscaled2to1__FPlN21l+0x34>
        1c63c0:	e114000c 	tst	r4, ip
        1c63c4:	118ee003 	orrne	lr, lr, r3
        1c63c8:	e1b0c12c 	movs	ip, ip, lsr #2
        1c63cc:	e1a030a3 	mov	r3, r3, lsr #1
        1c63d0:	1afffffa 	bne	1c63c0 <Unscaled2to1__FPlN21l+0x1c>
        1c63d4:	ea000000 	b	1c63dc <Unscaled2to1__FPlN21l+0x38>
        1c63d8:	e1a03823 	mov	r3, r3, lsr #16
        1c63dc:	e3330000 	teq	r3, #0	; 0x0
        1c63e0:	1afffff2 	bne	1c63b0 <Unscaled2to1__FPlN21l+0xc>
        1c63e4:	e481e004 	str	lr, [r1], #4
        1c63e8:	e1510002 	cmp	r1, r2
        1c63ec:	3affffed 	bcc	1c63a8 <Unscaled2to1__FPlN21l+0x4>
        1c63f0:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: Unscaled4to1__FPlN21l
 * Address: 001c68a0
 */
void globals::Unscaled4to1() {
    /*
        1c68a0:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        1c68a4:	e3a03102 	mov	r3, #-2147483648	; 0x80000000
        1c68a8:	e3a0e000 	mov	lr, #0	; 0x0
        1c68ac:	e3a0c20f 	mov	ip, #-268435456	; 0xf0000000
        1c68b0:	e4904004 	ldr	r4, [r0], #4
        1c68b4:	e3340000 	teq	r4, #0	; 0x0
        1c68b8:	0a000005 	beq	1c68d4 <Unscaled4to1__FPlN21l+0x34>
        1c68bc:	e114000c 	tst	r4, ip
        1c68c0:	118ee003 	orrne	lr, lr, r3
        1c68c4:	e1b0c22c 	movs	ip, ip, lsr #4
        1c68c8:	e1a030a3 	mov	r3, r3, lsr #1
        1c68cc:	1afffffa 	bne	1c68bc <Unscaled4to1__FPlN21l+0x1c>
        1c68d0:	ea000000 	b	1c68d8 <Unscaled4to1__FPlN21l+0x38>
        1c68d4:	e1a03423 	mov	r3, r3, lsr #8
        1c68d8:	e3330000 	teq	r3, #0	; 0x0
        1c68dc:	1afffff2 	bne	1c68ac <Unscaled4to1__FPlN21l+0xc>
        1c68e0:	e481e004 	str	lr, [r1], #4
        1c68e4:	e1510002 	cmp	r1, r2
        1c68e8:	3affffed 	bcc	1c68a4 <Unscaled4to1__FPlN21l+0x4>
        1c68ec:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: Unscaled4to2__FPlN21l
 * Address: 001c6b24
 */
void globals::Unscaled4to2() {
    /*
        1c6b24:	e92d4010 	stmdb	sp!, {r4, lr}
        1c6b28:	e3a0e000 	mov	lr, #0	; 0x0
        1c6b2c:	e3a0c01e 	mov	ip, #30	; 0x1e
        1c6b30:	e4903004 	ldr	r3, [r0], #4
        1c6b34:	e1a04f23 	mov	r4, r3, lsr #30
        1c6b38:	e18eec14 	orr	lr, lr, r4, lsl ip
        1c6b3c:	e24cc002 	sub	ip, ip, #2	; 0x2
        1c6b40:	e203440f 	and	r4, r3, #251658240	; 0xf000000
        1c6b44:	e1a04d24 	mov	r4, r4, lsr #26
        1c6b48:	e18eec14 	orr	lr, lr, r4, lsl ip
        1c6b4c:	e24cc002 	sub	ip, ip, #2	; 0x2
        1c6b50:	e203460f 	and	r4, r3, #15728640	; 0xf00000
        1c6b54:	e1a04b24 	mov	r4, r4, lsr #22
        1c6b58:	e18eec14 	orr	lr, lr, r4, lsl ip
        1c6b5c:	e24cc002 	sub	ip, ip, #2	; 0x2
        1c6b60:	e203480f 	and	r4, r3, #983040	; 0xf0000
        1c6b64:	e1a04924 	mov	r4, r4, lsr #18
        1c6b68:	e18eec14 	orr	lr, lr, r4, lsl ip
        1c6b6c:	e24cc002 	sub	ip, ip, #2	; 0x2
        1c6b70:	e2034a0f 	and	r4, r3, #61440	; 0xf000
        1c6b74:	e1a04724 	mov	r4, r4, lsr #14
        1c6b78:	e18eec14 	orr	lr, lr, r4, lsl ip
        1c6b7c:	e24cc002 	sub	ip, ip, #2	; 0x2
        1c6b80:	e2034c0f 	and	r4, r3, #3840	; 0xf00
        1c6b84:	e1a04524 	mov	r4, r4, lsr #10
        1c6b88:	e18eec14 	orr	lr, lr, r4, lsl ip
        1c6b8c:	e24cc002 	sub	ip, ip, #2	; 0x2
        1c6b90:	e20340f0 	and	r4, r3, #240	; 0xf0
        1c6b94:	e1a04324 	mov	r4, r4, lsr #6
        1c6b98:	e18eec14 	orr	lr, lr, r4, lsl ip
        1c6b9c:	e24cc002 	sub	ip, ip, #2	; 0x2
        1c6ba0:	e203300f 	and	r3, r3, #15	; 0xf
        1c6ba4:	e1a03123 	mov	r3, r3, lsr #2
        1c6ba8:	e18eec13 	orr	lr, lr, r3, lsl ip
        1c6bac:	e25cc002 	subs	ip, ip, #2	; 0x2
        1c6bb0:	5a000002 	bpl	1c6bc0 <Unscaled4to2__FPlN21l+0x9c>
        1c6bb4:	e481e004 	str	lr, [r1], #4
        1c6bb8:	e3a0e000 	mov	lr, #0	; 0x0
        1c6bbc:	e3a0c01e 	mov	ip, #30	; 0x1e
        1c6bc0:	e1510002 	cmp	r1, r2
        1c6bc4:	3affffd9 	bcc	1c6b30 <Unscaled4to2__FPlN21l+0xc>
        1c6bc8:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: Unscaled8to1__FPlN21l
 * Address: 001c6ef8
 */
void globals::Unscaled8to1() {
    /*
        1c6ef8:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        1c6efc:	e3a03102 	mov	r3, #-2147483648	; 0x80000000
        1c6f00:	e3a0e000 	mov	lr, #0	; 0x0
        1c6f04:	e3a0c4ff 	mov	ip, #-16777216	; 0xff000000
        1c6f08:	e4904004 	ldr	r4, [r0], #4
        1c6f0c:	e3340000 	teq	r4, #0	; 0x0
        1c6f10:	0a000005 	beq	1c6f2c <Unscaled8to1__FPlN21l+0x34>
        1c6f14:	e114000c 	tst	r4, ip
        1c6f18:	118ee003 	orrne	lr, lr, r3
        1c6f1c:	e1b0c42c 	movs	ip, ip, lsr #8
        1c6f20:	e1a030a3 	mov	r3, r3, lsr #1
        1c6f24:	1afffffa 	bne	1c6f14 <Unscaled8to1__FPlN21l+0x1c>
        1c6f28:	ea000000 	b	1c6f30 <Unscaled8to1__FPlN21l+0x38>
        1c6f2c:	e1a03223 	mov	r3, r3, lsr #4
        1c6f30:	e3330000 	teq	r3, #0	; 0x0
        1c6f34:	1afffff2 	bne	1c6f04 <Unscaled8to1__FPlN21l+0xc>
        1c6f38:	e481e004 	str	lr, [r1], #4
        1c6f3c:	e1510002 	cmp	r1, r2
        1c6f40:	3affffed 	bcc	1c6efc <Unscaled8to1__FPlN21l+0x4>
        1c6f44:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: Unscaled8to2__FPlN21l
 * Address: 001c70b4
 */
void globals::Unscaled8to2() {
    /*
        1c70b4:	e92d4010 	stmdb	sp!, {r4, lr}
        1c70b8:	e3a03000 	mov	r3, #0	; 0x0
        1c70bc:	e3a0c01e 	mov	ip, #30	; 0x1e
        1c70c0:	e490e004 	ldr	lr, [r0], #4
        1c70c4:	e1a04f2e 	mov	r4, lr, lsr #30
        1c70c8:	e1833c14 	orr	r3, r3, r4, lsl ip
        1c70cc:	e24cc002 	sub	ip, ip, #2	; 0x2
        1c70d0:	e20e48ff 	and	r4, lr, #16711680	; 0xff0000
        1c70d4:	e1a04b24 	mov	r4, r4, lsr #22
        1c70d8:	e1833c14 	orr	r3, r3, r4, lsl ip
        1c70dc:	e24cc002 	sub	ip, ip, #2	; 0x2
        1c70e0:	e20e4cff 	and	r4, lr, #65280	; 0xff00
        1c70e4:	e1a04724 	mov	r4, r4, lsr #14
        1c70e8:	e1833c14 	orr	r3, r3, r4, lsl ip
        1c70ec:	e24cc002 	sub	ip, ip, #2	; 0x2
        1c70f0:	e20ee0ff 	and	lr, lr, #255	; 0xff
        1c70f4:	e1a0e32e 	mov	lr, lr, lsr #6
        1c70f8:	e1833c1e 	orr	r3, r3, lr, lsl ip
        1c70fc:	e25cc002 	subs	ip, ip, #2	; 0x2
        1c7100:	5a000002 	bpl	1c7110 <Unscaled8to2__FPlN21l+0x5c>
        1c7104:	e4813004 	str	r3, [r1], #4
        1c7108:	e3a03000 	mov	r3, #0	; 0x0
        1c710c:	e3a0c01e 	mov	ip, #30	; 0x1e
        1c7110:	e1510002 	cmp	r1, r2
        1c7114:	3affffe9 	bcc	1c70c0 <Unscaled8to2__FPlN21l+0xc>
        1c7118:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: Unscaled8to4__FPlN21l
 * Address: 001c7340
 */
void globals::Unscaled8to4() {
    /*
        1c7340:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        1c7344:	e4903004 	ldr	r3, [r0], #4
        1c7348:	e203820f 	and	r8, r3, #-268435456	; 0xf0000000
        1c734c:	e203c8ff 	and	ip, r3, #16711680	; 0xff0000
        1c7350:	e1a0ca2c 	mov	ip, ip, lsr #20
        1c7354:	e1a06c0c 	mov	r6, ip, lsl #24
        1c7358:	e203ccff 	and	ip, r3, #65280	; 0xff00
        1c735c:	e1a0c62c 	mov	ip, ip, lsr #12
        1c7360:	e1a07a0c 	mov	r7, ip, lsl #20
        1c7364:	e20330ff 	and	r3, r3, #255	; 0xff
        1c7368:	e1a03223 	mov	r3, r3, lsr #4
        1c736c:	e1a05803 	mov	r5, r3, lsl #16
        1c7370:	e4903004 	ldr	r3, [r0], #4
        1c7374:	e1a0ce23 	mov	ip, r3, lsr #28
        1c7378:	e1a0460c 	mov	r4, ip, lsl #12
        1c737c:	e203c8ff 	and	ip, r3, #16711680	; 0xff0000
        1c7380:	e1a0ca2c 	mov	ip, ip, lsr #20
        1c7384:	e1a0e40c 	mov	lr, ip, lsl #8
        1c7388:	e203ccff 	and	ip, r3, #65280	; 0xff00
        1c738c:	e1a0c62c 	mov	ip, ip, lsr #12
        1c7390:	e20330ff 	and	r3, r3, #255	; 0xff
        1c7394:	e1886006 	orr	r6, r8, r6
        1c7398:	e1866007 	orr	r6, r6, r7
        1c739c:	e1865005 	orr	r5, r6, r5
        1c73a0:	e1854004 	orr	r4, r5, r4
        1c73a4:	e184e00e 	orr	lr, r4, lr
        1c73a8:	e18ec20c 	orr	ip, lr, ip, lsl #4
        1c73ac:	e18c3223 	orr	r3, ip, r3, lsr #4
        1c73b0:	e4813004 	str	r3, [r1], #4
        1c73b4:	e1510002 	cmp	r1, r2
        1c73b8:	3affffe1 	bcc	1c7344 <Unscaled8to4__FPlN21l+0x4>
        1c73bc:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: Unscaled1to2__FPlN21l
 * Address: 001c7540
 */
void globals::Unscaled1to2() {
    /*
        1c7540:	e92d4000 	stmdb	sp!, {lr}
        1c7544:	e59f3030 	ldr	r3, [pc, #30]	; 1c757c <Unscaled1to2__FPlN21l+0x3c>
        1c7548:	e4d0c001 	ldrb	ip, [r0], #1
        1c754c:	e793c08c 	ldr	ip, [r3, ip, lsl #1]
        1c7550:	e1a0c82c 	mov	ip, ip, lsr #16
        1c7554:	e1a0c80c 	mov	ip, ip, lsl #16
        1c7558:	e581c000 	str	ip, [r1]
        1c755c:	e4d0e001 	ldrb	lr, [r0], #1
        1c7560:	e793e08e 	ldr	lr, [r3, lr, lsl #1]
        1c7564:	e1a0e82e 	mov	lr, lr, lsr #16
        1c7568:	e18ec00c 	orr	ip, lr, ip
        1c756c:	e481c004 	str	ip, [r1], #4
        1c7570:	e1510002 	cmp	r1, r2
        1c7574:	3afffff3 	bcc	1c7548 <Unscaled1to2__FPlN21l+0x8>
        1c7578:	e8bd8000 	ldmia	sp!, {pc}
        1c757c:	00381094 	mlaeqs	r8, r4, r0, r1
    */
}

/**
 * Symbol: Unscaled1to4__FPlN21l
 * Address: 001c76cc
 */
void globals::Unscaled1to4() {
    /*
        1c76cc:	e1a03000 	mov	r3, r0
        1c76d0:	e59f0038 	ldr	r0, [pc, #38]	; 1c7710 <Unscaled1to4__FPlN21l+0x44>
        1c76d4:	e4d3c001 	ldrb	ip, [r3], #1
        1c76d8:	e790c10c 	ldr	ip, [r0, ip, lsl #2]
        1c76dc:	e481c004 	str	ip, [r1], #4
        1c76e0:	e4d3c001 	ldrb	ip, [r3], #1
        1c76e4:	e790c10c 	ldr	ip, [r0, ip, lsl #2]
        1c76e8:	e481c004 	str	ip, [r1], #4
        1c76ec:	e4d3c001 	ldrb	ip, [r3], #1
        1c76f0:	e790c10c 	ldr	ip, [r0, ip, lsl #2]
        1c76f4:	e481c004 	str	ip, [r1], #4
        1c76f8:	e4d3c001 	ldrb	ip, [r3], #1
        1c76fc:	e790c10c 	ldr	ip, [r0, ip, lsl #2]
        1c7700:	e481c004 	str	ip, [r1], #4
        1c7704:	e1510002 	cmp	r1, r2
        1c7708:	3afffff1 	bcc	1c76d4 <Unscaled1to4__FPlN21l+0x8>
        1c770c:	e1a0f00e 	mov	pc, lr
        1c7710:	00381294 	mlaeqs	r8, r4, r2, r1
    */
}

/**
 * Symbol: UpdateScalePat(TDotPrinter *, PixelMap **)
 * Address: 001c809c
 */
UpdateScalePat(TDotPrinter *, PixelMap **) {
    /*
        1c809c:	e1a0c00d 	mov	ip, sp
        1c80a0:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1c80a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c80a8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1c80ac:	e3a05000 	mov	r5, #0	; 0x0
        1c80b0:	e51b0030 	ldr	r0, [fp, -#48]
        1c80b4:	e28040a8 	add	r4, r0, #168	; 0xa8
        1c80b8:	e5942040 	ldr	r2, [r4, #64]
        1c80bc:	e1a02822 	mov	r2, r2, lsr #16
        1c80c0:	e5940050 	ldr	r0, [r4, #80]
        1c80c4:	e1a00820 	mov	r0, r0, lsr #16
        1c80c8:	e0820000 	add	r0, r2, r0
        1c80cc:	e2000007 	and	r0, r0, #7	; 0x7
        1c80d0:	e5cd0001 	strb	r0, [sp, #1]
        1c80d4:	e1a00440 	mov	r0, r0, asr #8
        1c80d8:	e44d0004 	strb	r0, [sp], -#4
        1c80dc:	e5942042 	ldr	r2, [r4, #66]
        1c80e0:	e1a02822 	mov	r2, r2, lsr #16
        1c80e4:	e5940052 	ldr	r0, [r4, #82]
        1c80e8:	e1a00820 	mov	r0, r0, lsr #16
        1c80ec:	e0820000 	add	r0, r2, r0
        1c80f0:	e2000007 	and	r0, r0, #7	; 0x7
        1c80f4:	e5cd0007 	strb	r0, [sp, #7]
        1c80f8:	e1a00440 	mov	r0, r0, asr #8
        1c80fc:	e5cd0006 	strb	r0, [sp, #6]
        1c8100:	e1a00001 	mov	r0, r1
        1c8104:	eb661569 	bl	1b4d6b0 <$CopyPattern(PixelMap **)>
        1c8108:	e58d0000 	str	r0, [sp]
        1c810c:	e5900000 	ldr	r0, [r0]
        1c8110:	e5900010 	ldr	r0, [r0, #16]
        1c8114:	e20000ff 	and	r0, r0, #255	; 0xff
        1c8118:	e3300001 	teq	r0, #1	; 0x1
        1c811c:	0a000002 	beq	1c812c <UpdateScalePat(TDotPrinter *, PixelMap **)+0x90>
        1c8120:	e59d0000 	ldr	r0, [sp]
        1c8124:	eb6600c4 	bl	1b4843c <$DitherPattern(PixelMap **)>
        1c8128:	e1a05000 	mov	r5, r0
        1c812c:	e59410c8 	ldr	r1, [r4, #200]
        1c8130:	e59d0004 	ldr	r0, [sp, #4]
        1c8134:	e1310000 	teq	r1, r0
        1c8138:	1a000004 	bne	1c8150 <UpdateScalePat(TDotPrinter *, PixelMap **)+0xb4>
        1c813c:	e59410c4 	ldr	r1, [r4, #196]
        1c8140:	e59d0000 	ldr	r0, [sp]
        1c8144:	eb65dfbd 	bl	1b40040 <$EqualPat__FPP8PixelMapT1>
        1c8148:	e3300000 	teq	r0, #0	; 0x0
        1c814c:	1a000091 	bne	1c8398 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x2fc>
        1c8150:	e28410c8 	add	r1, r4, #200	; 0xc8
        1c8154:	e59d0004 	ldr	r0, [sp, #4]
        1c8158:	e5810000 	str	r0, [r1]
        1c815c:	e59400c4 	ldr	r0, [r4, #196]
        1c8160:	eb66155d 	bl	1b4d6dc <$DisposePattern(PixelMap **)>
        1c8164:	e59d0000 	ldr	r0, [sp]
        1c8168:	eb661550 	bl	1b4d6b0 <$CopyPattern(PixelMap **)>
        1c816c:	e58400c4 	str	r0, [r4, #196]
        1c8170:	e24dd034 	sub	sp, sp, #52	; 0x34
        1c8174:	e1a0000d 	mov	r0, sp
        1c8178:	e5948088 	ldr	r8, [r4, #136]
        1c817c:	e3a01000 	mov	r1, #0	; 0x0
        1c8180:	e3a02000 	mov	r2, #0	; 0x0
        1c8184:	e3a03000 	mov	r3, #0	; 0x0
        1c8188:	e3a0c000 	mov	ip, #0	; 0x0
        1c818c:	e3a0e000 	mov	lr, #0	; 0x0
        1c8190:	e8a0500e 	stmia	r0!, {r1, r2, r3, ip, lr}
        1c8194:	e8805008 	stmia	r0, {r3, ip, lr}
        1c8198:	e59400c4 	ldr	r0, [r4, #196]
        1c819c:	e5900000 	ldr	r0, [r0]
        1c81a0:	eb691118 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        1c81a4:	e1a01000 	mov	r1, r0
        1c81a8:	e59d003a 	ldr	r0, [sp, #58]
        1c81ac:	e1b00840 	movs	r0, r0, asr #16
        1c81b0:	0a00000e 	beq	1c81f0 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x154>
        1c81b4:	e3a00007 	mov	r0, #7	; 0x7
        1c81b8:	e59d303a 	ldr	r3, [sp, #58]
        1c81bc:	e0403843 	sub	r3, r0, r3, asr #16
        1c81c0:	e7d12000 	ldrb	r2, [r1, r0]
        1c81c4:	e59dc03a 	ldr	ip, [sp, #58]
        1c81c8:	e1a0c84c 	mov	ip, ip, asr #16
        1c81cc:	e1a0cc12 	mov	ip, r2, lsl ip
        1c81d0:	e18cc332 	orr	ip, ip, r2, lsr r3
        1c81d4:	e28d2024 	add	r2, sp, #36	; 0x24
        1c81d8:	e7c2c000 	strb	ip, [r2, r0]
        1c81dc:	e2500001 	subs	r0, r0, #1	; 0x1
        1c81e0:	5afffff6 	bpl	1c81c0 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x124>
        1c81e4:	e28d0024 	add	r0, sp, #36	; 0x24
        1c81e8:	e58d0020 	str	r0, [sp, #32]
        1c81ec:	ea000000 	b	1c81f4 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x158>
        1c81f0:	e58d1020 	str	r1, [sp, #32]
        1c81f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1c81f8:	e594104c 	ldr	r1, [r4, #76]
        1c81fc:	e1a01841 	mov	r1, r1, asr #16
        1c8200:	e5940048 	ldr	r0, [r4, #72]
        1c8204:	e0410840 	sub	r0, r1, r0, asr #16
        1c8208:	e3350000 	teq	r5, #0	; 0x0
        1c820c:	e58d0000 	str	r0, [sp]
        1c8210:	159d0000 	ldrne	r0, [sp]
        1c8214:	1a00000b 	bne	1c8248 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x1ac>
        1c8218:	e51b0030 	ldr	r0, [fp, -#48]
        1c821c:	eb65e3a1 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        1c8220:	e5b01014 	ldr	r1, [r0, #20]!
        1c8224:	e3a00801 	mov	r0, #65536	; 0x10000
        1c8228:	eb6863a4 	bl	1be10c0 <$FixedDivide>
        1c822c:	e59d7000 	ldr	r7, [sp]
        1c8230:	e1a01807 	mov	r1, r7, lsl #16
        1c8234:	eb6863a2 	bl	1be10c4 <$FixedMultiply>
        1c8238:	e2800902 	add	r0, r0, #32768	; 0x8000
        1c823c:	e1a00840 	mov	r0, r0, asr #16
        1c8240:	e1a00800 	mov	r0, r0, lsl #16
        1c8244:	e1a00840 	mov	r0, r0, asr #16
        1c8248:	e58d0034 	str	r0, [sp, #52]
        1c824c:	e59d7000 	ldr	r7, [sp]
        1c8250:	e59d603c 	ldr	r6, [sp, #60]
        1c8254:	e1a06846 	mov	r6, r6, asr #16
        1c8258:	e3a05000 	mov	r5, #0	; 0x0
        1c825c:	e28d0004 	add	r0, sp, #4	; 0x4
        1c8260:	e7901106 	ldr	r1, [r0, r6, lsl #2]
        1c8264:	e58d1030 	str	r1, [sp, #48]
        1c8268:	e59d0000 	ldr	r0, [sp]
        1c826c:	e0855000 	add	r5, r5, r0
        1c8270:	e59d1030 	ldr	r1, [sp, #48]
        1c8274:	e3310000 	teq	r1, #0	; 0x0
        1c8278:	0a00000b 	beq	1c82ac <UpdateScalePat(TDotPrinter *, PixelMap **)+0x210>
        1c827c:	e59d1030 	ldr	r1, [sp, #48]
        1c8280:	e594008c 	ldr	r0, [r4, #140]
        1c8284:	e1a00840 	mov	r0, r0, asr #16
        1c8288:	e1a00140 	mov	r0, r0, asr #2
        1c828c:	e3500000 	cmp	r0, #0	; 0x0
        1c8290:	da000034 	ble	1c8368 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x2cc>
        1c8294:	e4912004 	ldr	r2, [r1], #4
        1c8298:	e2400001 	sub	r0, r0, #1	; 0x1
        1c829c:	e3500000 	cmp	r0, #0	; 0x0
        1c82a0:	e4882004 	str	r2, [r8], #4
        1c82a4:	cafffffa 	bgt	1c8294 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x1f8>
        1c82a8:	ea00002e 	b	1c8368 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x2cc>
        1c82ac:	e51b0030 	ldr	r0, [fp, -#48]
        1c82b0:	eb65e37c 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        1c82b4:	e5b01010 	ldr	r1, [r0, #16]!
        1c82b8:	e3a00801 	mov	r0, #65536	; 0x10000
        1c82bc:	eb68637f 	bl	1be10c0 <$FixedDivide>
        1c82c0:	e1a0e800 	mov	lr, r0, lsl #16
        1c82c4:	e1a0e82e 	mov	lr, lr, lsr #16
        1c82c8:	e58d8030 	str	r8, [sp, #48]
        1c82cc:	e28d0004 	add	r0, sp, #4	; 0x4
        1c82d0:	e7808106 	str	r8, [r0, r6, lsl #2]
        1c82d4:	e59d0024 	ldr	r0, [sp, #36]
        1c82d8:	e7d00006 	ldrb	r0, [r0, r6]
        1c82dc:	e1800400 	orr	r0, r0, r0, lsl #8
        1c82e0:	e180c800 	orr	ip, r0, r0, lsl #16
        1c82e4:	e3a03102 	mov	r3, #-2147483648	; 0x80000000
        1c82e8:	e3a00102 	mov	r0, #-2147483648	; 0x80000000
        1c82ec:	e3a02000 	mov	r2, #0	; 0x0
        1c82f0:	e1a010ae 	mov	r1, lr, lsr #1
        1c82f4:	e594908c 	ldr	r9, [r4, #140]
        1c82f8:	e1a09849 	mov	r9, r9, asr #16
        1c82fc:	e1a09149 	mov	r9, r9, asr #2
        1c8300:	e1a0afac 	mov	sl, ip, lsr #31
        1c8304:	e58da044 	str	sl, [sp, #68]
        1c8308:	e3a0a001 	mov	sl, #1	; 0x1
        1c830c:	e08ac08c 	add	ip, sl, ip, lsl #1
        1c8310:	e58dc040 	str	ip, [sp, #64]
        1c8314:	e1b0cfa0 	movs	ip, r0, lsr #31
        1c8318:	e1a00080 	mov	r0, r0, lsl #1
        1c831c:	0a000004 	beq	1c8334 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x298>
        1c8320:	e3300000 	teq	r0, #0	; 0x0
        1c8324:	028dc040 	addeq	ip, sp, #64	; 0x40
        1c8328:	089c1001 	ldmeqia	ip, {r0, ip}
        1c832c:	e33c0000 	teq	ip, #0	; 0x0
        1c8330:	11822003 	orrne	r2, r2, r3
        1c8334:	e1b030a3 	movs	r3, r3, lsr #1
        1c8338:	1a000004 	bne	1c8350 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x2b4>
        1c833c:	e3a03102 	mov	r3, #-2147483648	; 0x80000000
        1c8340:	e4882004 	str	r2, [r8], #4
        1c8344:	e3a02000 	mov	r2, #0	; 0x0
        1c8348:	e2599001 	subs	r9, r9, #1	; 0x1
        1c834c:	0a000005 	beq	1c8368 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x2cc>
        1c8350:	e081100e 	add	r1, r1, lr
        1c8354:	e1b0a841 	movs	sl, r1, asr #16
        1c8358:	0afffff3 	beq	1c832c <UpdateScalePat(TDotPrinter *, PixelMap **)+0x290>
        1c835c:	e1a01801 	mov	r1, r1, lsl #16
        1c8360:	e1a01821 	mov	r1, r1, lsr #16
        1c8364:	eaffffea 	b	1c8314 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x278>
        1c8368:	e59d0034 	ldr	r0, [sp, #52]
        1c836c:	e0455000 	sub	r5, r5, r0
        1c8370:	e2477001 	sub	r7, r7, #1	; 0x1
        1c8374:	e3550000 	cmp	r5, #0	; 0x0
        1c8378:	da000001 	ble	1c8384 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x2e8>
        1c837c:	e3370000 	teq	r7, #0	; 0x0
        1c8380:	1affffba 	bne	1c8270 <UpdateScalePat(TDotPrinter *, PixelMap **)+0x1d4>
        1c8384:	e2860001 	add	r0, r6, #1	; 0x1
        1c8388:	e2006007 	and	r6, r0, #7	; 0x7
        1c838c:	e3370000 	teq	r7, #0	; 0x0
        1c8390:	1affffb1 	bne	1c825c <UpdateScalePat(TDotPrinter *, PixelMap **)+0x1c0>
        1c8394:	e28dd038 	add	sp, sp, #56	; 0x38
        1c8398:	e59d0000 	ldr	r0, [sp]
        1c839c:	eb6614ce 	bl	1b4d6dc <$DisposePattern(PixelMap **)>
        1c83a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: UpdateHardwareScreen(void)
 * Address: 001ccf88
 */
UpdateHardwareScreen(void) {
    /*
        1ccf88:	e1a0c00d 	mov	ip, sp
        1ccf8c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ccf90:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ccf94:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ccf98:	e59f003c 	ldr	r0, [pc, #3c]	; 1ccfdc <UpdateHardwareScreen(void)+0x54>
        1ccf9c:	e1a05000 	mov	r5, r0
        1ccfa0:	e280100c 	add	r1, r0, #12	; 0xc
        1ccfa4:	e1a0200d 	mov	r2, sp
        1ccfa8:	e59f0030 	ldr	r0, [pc, #30]	; 1ccfe0 <UpdateHardwareScreen(void)+0x58>
        1ccfac:	e1a04000 	mov	r4, r0
        1ccfb0:	eb661a85 	bl	1b539cc <$SectRect__FP4RectN21>
        1ccfb4:	e3300000 	teq	r0, #0	; 0x0
        1ccfb8:	0a000004 	beq	1ccfd0 <UpdateHardwareScreen(void)+0x48>
        1ccfbc:	e2850004 	add	r0, r5, #4	; 0x4
        1ccfc0:	e1a0200d 	mov	r2, sp
        1ccfc4:	e1a0100d 	mov	r1, sp
        1ccfc8:	e3a03000 	mov	r3, #0	; 0x0
        1ccfcc:	eb65fda0 	bl	1b4c654 <$BlitToScreens__FP8PixelMapP4RectT2l>
        1ccfd0:	e1a00004 	mov	r0, r4
        1ccfd4:	eb661a82 	bl	1b539e4 <$SetEmptyRect(Rect *)>
        1ccfd8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1ccfdc:	0c107d88 	ldceq	13, cr7, [r0], -#544
        1ccfe0:	0c101a58 	ldceq	10, cr1, [r0], -#352
    */
}

/**
 * Symbol: update_a_node1(TTNode *)
 * Address: 001ce570
 */
update_a_node1(TTNode *) {
    /*
        1ce570:	e590100c 	ldr	r1, [r0, #12]
        1ce574:	ea000003 	b	1ce588 <update_a_node1(TTNode *)+0x18>
        1ce578:	e5c12001 	strb	r2, [r1, #1]
        1ce57c:	e1a02442 	mov	r2, r2, asr #8
        1ce580:	e5c12000 	strb	r2, [r1]
        1ce584:	e591100c 	ldr	r1, [r1, #12]
        1ce588:	e3310000 	teq	r1, #0	; 0x0
        1ce58c:	01a0f00e 	moveq	pc, lr
        1ce590:	e5913000 	ldr	r3, [r1]
        1ce594:	e5902000 	ldr	r2, [r0]
        1ce598:	e1a02822 	mov	r2, r2, lsr #16
        1ce59c:	e1520823 	cmp	r2, r3, lsr #16
        1ce5a0:	aafffff4 	bge	1ce578 <update_a_node1(TTNode *)+0x8>
        1ce5a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnitFromRef(RefVar const &)
 * Address: 001ea300
 */
UnitFromRef(RefVar const &) {
    /*
        1ea300:	e1a0c00d 	mov	ip, sp
        1ea304:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ea308:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ea30c:	e5900000 	ldr	r0, [r0]
        1ea310:	e5900000 	ldr	r0, [r0]
        1ea314:	eb62d731 	bl	1a9ffe0 <$RefToAddress(long)>
        1ea318:	e1b04000 	movs	r4, r0
        1ea31c:	028f0f02 	addeq	r0, pc, #8	; 0x8
        1ea320:	0b67e39e 	bleq	1be31a0 <$ThrowMsg>
        1ea324:	e1a00004 	mov	r0, r4
        1ea328:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1ea32c:	6e696c20 	cdpvs	12, 6, cr6, cr9, cr0, {1}
        1ea330:	756e6974 	strvcb	r6, [lr, -#2420]!
        1ea334:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: UnlockChain(TDictChain *)
 * Address: 001f4a60
 */
UnlockChain(TDictChain *) {
    /*
        1f4a60:	e1a0c00d 	mov	ip, sp
        1f4a64:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f4a68:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f4a6c:	e1a04000 	mov	r4, r0
        1f4a70:	e3a05000 	mov	r5, #0	; 0x0
        1f4a74:	e590600c 	ldr	r6, [r0, #12]
        1f4a78:	e3560000 	cmp	r6, #0	; 0x0
        1f4a7c:	991ba870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, pc}
        1f4a80:	e1a01005 	mov	r1, r5
        1f4a84:	e1a00004 	mov	r0, r4
        1f4a88:	e5942000 	ldr	r2, [r4]
        1f4a8c:	e1a0e00f 	mov	lr, pc
        1f4a90:	e282f01c 	add	pc, r2, #28	; 0x1c
        1f4a94:	e5900000 	ldr	r0, [r0]
        1f4a98:	eb67b59d 	bl	1be2114 <$HUnlock>
        1f4a9c:	e2855001 	add	r5, r5, #1	; 0x1
        1f4aa0:	e1550006 	cmp	r5, r6
        1f4aa4:	3afffff5 	bcc	1f4a80 <UnlockChain(TDictChain *)+0x20>
        1f4aa8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: UnlockHeapRange
 * Address: 001f8b88
 */
void globals::UnlockHeapRange() {
    /*
        1f8b88:	e1a0c00d 	mov	ip, sp
        1f8b8c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f8b90:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8b94:	e52d0008 	str	r0, [sp, -#8]!
        1f8b98:	e2410001 	sub	r0, r1, #1	; 0x1
        1f8b9c:	e58d0004 	str	r0, [sp, #4]
        1f8ba0:	e59f0014 	ldr	r0, [pc, #14]	; 1f8bbc <UnlockHeapRange+0x34>
        1f8ba4:	e5900004 	ldr	r0, [r0, #4]
        1f8ba8:	e1a0200d 	mov	r2, sp
        1f8bac:	e3a01007 	mov	r1, #7	; 0x7
        1f8bb0:	e59000b8 	ldr	r0, [r0, #184]
        1f8bb4:	eb06d5d9 	bl	3ae320 <MonitorDispatchSWI>
        1f8bb8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1f8bbc:	0c104c08 	ldceq	12, cr4, [r0], -#32
    */
}

/**
 * Symbol: UnlockStack
 * Address: 001f8bc0
 */
void globals::UnlockStack() {
    /*
        1f8bc0:	e8900003 	ldmia	r0, {r0, r1}
        1f8bc4:	ea6794b5 	b	1bddea0 <$UnlockHeapRange>
    */
}

/**
 * Symbol: UpShift(char)
 * Address: 001f96c8
 */
UpShift(char) {
    /*
        1f96c8:	e1a0c00d 	mov	ip, sp
        1f96cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f96d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f96d4:	e20000ff 	and	r0, r0, #255	; 0xff
        1f96d8:	e1a04000 	mov	r4, r0
        1f96dc:	ebffffe7 	bl	1f9680 <IsLower(char)>
        1f96e0:	e3300000 	teq	r0, #0	; 0x0
        1f96e4:	12440020 	subne	r0, r4, #32	; 0x20
        1f96e8:	120040ff 	andne	r4, r0, #255	; 0xff
        1f96ec:	e1a00004 	mov	r0, r4
        1f96f0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: UnbufferStroke(TStroke *)
 * Address: 001ffc24
 */
UnbufferStroke(TStroke *) {
    /*
        1ffc24:	e1a0c00d 	mov	ip, sp
        1ffc28:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ffc2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ffc30:	e1a04000 	mov	r4, r0
        1ffc34:	e59f5048 	ldr	r5, [pc, #48]	; 1ffc84 <UnbufferStroke(TStroke *)+0x60>
        1ffc38:	e3a01000 	mov	r1, #0	; 0x0
        1ffc3c:	e5950004 	ldr	r0, [r5, #4]
        1ffc40:	eb673ac3 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1ffc44:	e3a00000 	mov	r0, #0	; 0x0
        1ffc48:	e59f1038 	ldr	r1, [pc, #38]	; 1ffc88 <UnbufferStroke(TStroke *)+0x64>
        1ffc4c:	e5911000 	ldr	r1, [r1]
        1ffc50:	e0812100 	add	r2, r1, r0, lsl #2
        1ffc54:	e5922004 	ldr	r2, [r2, #4]
        1ffc58:	e1320004 	teq	r2, r4
        1ffc5c:	03a02000 	moveq	r2, #0	; 0x0
        1ffc60:	00810100 	addeq	r0, r1, r0, lsl #2
        1ffc64:	05a02004 	streq	r2, [r0, #4]!
        1ffc68:	0a000002 	beq	1ffc78 <UnbufferStroke(TStroke *)+0x54>
        1ffc6c:	e2800001 	add	r0, r0, #1	; 0x1
        1ffc70:	e3500040 	cmp	r0, #64	; 0x40
        1ffc74:	bafffff5 	blt	1ffc50 <UnbufferStroke(TStroke *)+0x2c>
        1ffc78:	e5b50004 	ldr	r0, [r5, #4]!
        1ffc7c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1ffc80:	ea676804 	b	1bd9c98 <TULockingSemaphore::$Release(void)>
        1ffc84:	0c104c24 	ldceq	12, cr4, [r0], -#144
        1ffc88:	0c10189c 	ldceq	8, cr1, [r0], -#624
    */
}

/**
 * Symbol: UpdateGestalt
 * Address: 002028e4
 */
void globals::UpdateGestalt() {
    /*
        2028e4:	e1a0c00d 	mov	ip, sp
        2028e8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2028ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2028f0:	e1a07000 	mov	r7, r0
        2028f4:	e1a06001 	mov	r6, r1
        2028f8:	e1a05002 	mov	r5, r2
        2028fc:	e1a04003 	mov	r4, r3
        202900:	e59b9004 	ldr	r9, [fp, #4]
        202904:	e24dd008 	sub	sp, sp, #8	; 0x8
        202908:	e1a0000d 	mov	r0, sp
        20290c:	eb672b71 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
        202910:	e3a08001 	mov	r8, #1	; 0x1
        202914:	e5970000 	ldr	r0, [r7]
        202918:	e5900000 	ldr	r0, [r0]
        20291c:	e3100003 	tst	r0, #3	; 0x3
        202920:	05940000 	ldreq	r0, [r4]
        202924:	05900000 	ldreq	r0, [r0]
        202928:	02000003 	andeq	r0, r0, #3	; 0x3
        20292c:	03300000 	teqeq	r0, #0	; 0x0
        202930:	1a000039 	bne	202a1c <UpdateGestalt+0x138>
        202934:	e1a00006 	mov	r0, r6
        202938:	eb67c413 	bl	1bf398c <$IsArray(RefVar const &)>
        20293c:	e3300000 	teq	r0, #0	; 0x0
        202940:	0a000035 	beq	202a1c <UpdateGestalt+0x138>
        202944:	e1a00005 	mov	r0, r5
        202948:	eb67c40f 	bl	1bf398c <$IsArray(RefVar const &)>
        20294c:	e3300000 	teq	r0, #0	; 0x0
        202950:	0a000031 	beq	202a1c <UpdateGestalt+0x138>
        202954:	e24dd008 	sub	sp, sp, #8	; 0x8
        202958:	e5940000 	ldr	r0, [r4]
        20295c:	e5900000 	ldr	r0, [r0]
        202960:	e3100003 	tst	r0, #3	; 0x3
        202964:	01a00140 	moveq	r0, r0, asr #2
        202968:	0a000000 	beq	202970 <UpdateGestalt+0x8c>
        20296c:	eb66fdea 	bl	1bc211c <$_RINTError(long)>
        202970:	e1a03000 	mov	r3, r0
        202974:	e1a0200d 	mov	r2, sp
        202978:	e1a01005 	mov	r1, r5
        20297c:	e1a00006 	mov	r0, r6
        202980:	eb669283 	bl	1ba7394 <$MarshalArgumentSize__FRC6RefVarT1PUli>
        202984:	e1b08000 	movs	r8, r0
        202988:	1a000022 	bne	202a18 <UpdateGestalt+0x134>
        20298c:	e59d1000 	ldr	r1, [sp]
        202990:	e59f0074 	ldr	r0, [pc, #74]	; 202a0c <UpdateGestalt+0x128>
        202994:	e590200c 	ldr	r2, [r0, #12]
        202998:	e1510002 	cmp	r1, r2
        20299c:	85a0100c 	strhi	r1, [r0, #12]!
        2029a0:	e5940000 	ldr	r0, [r4]
        2029a4:	e5900000 	ldr	r0, [r0]
        2029a8:	e3100003 	tst	r0, #3	; 0x3
        2029ac:	01a00140 	moveq	r0, r0, asr #2
        2029b0:	0a000000 	beq	2029b8 <UpdateGestalt+0xd4>
        2029b4:	eb66fdd8 	bl	1bc211c <$_RINTError(long)>
        2029b8:	e1a03000 	mov	r3, r0
        2029bc:	e28d2004 	add	r2, sp, #4	; 0x4
        2029c0:	e1a01005 	mov	r1, r5
        2029c4:	e1a00006 	mov	r0, r6
        2029c8:	eb669272 	bl	1ba7398 <$MarshalArguments__FRC6RefVarT1PPvi>
        2029cc:	e1b08000 	movs	r8, r0
        2029d0:	1a000010 	bne	202a18 <UpdateGestalt+0x134>
        2029d4:	e5970000 	ldr	r0, [r7]
        2029d8:	e5900000 	ldr	r0, [r0]
        2029dc:	e3100003 	tst	r0, #3	; 0x3
        2029e0:	01a00140 	moveq	r0, r0, asr #2
        2029e4:	0a000000 	beq	2029ec <UpdateGestalt+0x108>
        2029e8:	eb66fdcb 	bl	1bc211c <$_RINTError(long)>
        2029ec:	e1a01000 	mov	r1, r0
        2029f0:	e3390000 	teq	r9, #0	; 0x0
        2029f4:	e59d2004 	ldr	r2, [sp, #4]
        2029f8:	e59d3000 	ldr	r3, [sp]
        2029fc:	e28d0008 	add	r0, sp, #8	; 0x8
        202a00:	1a000002 	bne	202a10 <UpdateGestalt+0x12c>
        202a04:	eb67e91c 	bl	1bfce7c <TUGestalt::$RegisterGestalt(unsigned long, void *, unsigned long)>
        202a08:	ea000001 	b	202a14 <UpdateGestalt+0x130>
        202a0c:	0c104c48 	ldceq	12, cr4, [r0], -#288
        202a10:	eb67ed1a 	bl	1bfde80 <TUGestalt::$ReplaceGestalt(unsigned long, void *, unsigned long)>
        202a14:	e1a08000 	mov	r8, r0
        202a18:	e28dd008 	add	sp, sp, #8	; 0x8
        202a1c:	e3380000 	teq	r8, #0	; 0x0
        202a20:	13a04002 	movne	r4, #2	; 0x2
        202a24:	03a0401a 	moveq	r4, #26	; 0x1a
        202a28:	e1a0000d 	mov	r0, sp
        202a2c:	e3a01000 	mov	r1, #0	; 0x0
        202a30:	eb672f3b 	bl	1bce724 <TUObject::$__dt(void)>
        202a34:	e1a00004 	mov	r0, r4
        202a38:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: UnionStrokes__FP7TDArrayT1UlT1PUlT5
 * Address: 00206f68
 */
void globals::UnionStrokes() {
    /*
        206f68:	e1a0c00d 	mov	ip, sp
        206f6c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        206f70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        206f74:	e24cb014 	sub	fp, ip, #20	; 0x14
        206f78:	e24dd044 	sub	sp, sp, #68	; 0x44
        206f7c:	e28d1020 	add	r1, sp, #32	; 0x20
        206f80:	e59b0004 	ldr	r0, [fp, #4]
        206f84:	eb655ffa 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        206f88:	e1a0100d 	mov	r1, sp
        206f8c:	e59b0010 	ldr	r0, [fp, #16]
        206f90:	eb655ff7 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        206f94:	e3a04000 	mov	r4, #0	; 0x0
        206f98:	e59d1014 	ldr	r1, [sp, #20]
        206f9c:	e3510000 	cmp	r1, #0	; 0x0
        206fa0:	9a000058 	bls	207108 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x1a0>
        206fa4:	e5900000 	ldr	r0, [r0]
        206fa8:	e58d0040 	str	r0, [sp, #64]
        206fac:	ea000002 	b	206fbc <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x54>
        206fb0:	e28d0020 	add	r0, sp, #32	; 0x20
        206fb4:	e1a0e00f 	mov	lr, pc
        206fb8:	e59df038 	ldr	pc, [sp, #56]
        206fbc:	e59d0034 	ldr	r0, [sp, #52]
        206fc0:	e59d1030 	ldr	r1, [sp, #48]
        206fc4:	e1510000 	cmp	r1, r0
        206fc8:	aa000006 	bge	206fe8 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x80>
        206fcc:	e28d0020 	add	r0, sp, #32	; 0x20
        206fd0:	e1a0e00f 	mov	lr, pc
        206fd4:	e59df03c 	ldr	pc, [sp, #60]
        206fd8:	e5901000 	ldr	r1, [r0]
        206fdc:	e59d0040 	ldr	r0, [sp, #64]
        206fe0:	e1510000 	cmp	r1, r0
        206fe4:	3afffff1 	bcc	206fb0 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x48>
        206fe8:	e28d1030 	add	r1, sp, #48	; 0x30
        206fec:	e8910003 	ldmia	r1, {r0, r1}
        206ff0:	e1500001 	cmp	r0, r1
        206ff4:	aa000015 	bge	207050 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0xe8>
        206ff8:	e28d0020 	add	r0, sp, #32	; 0x20
        206ffc:	e1a0e00f 	mov	lr, pc
        207000:	e59df03c 	ldr	pc, [sp, #60]
        207004:	e5900000 	ldr	r0, [r0]
        207008:	e59d1040 	ldr	r1, [sp, #64]
        20700c:	e1300001 	teq	r0, r1
        207010:	1a00000e 	bne	207050 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0xe8>
        207014:	e59b2008 	ldr	r2, [fp, #8]
        207018:	e1a00002 	mov	r0, r2
        20701c:	e59d1030 	ldr	r1, [sp, #48]
        207020:	e5922000 	ldr	r2, [r2]
        207024:	e1a0e00f 	mov	lr, pc
        207028:	e282f01c 	add	pc, r2, #28	; 0x1c
        20702c:	e5901000 	ldr	r1, [r0]
        207030:	e2511001 	subs	r1, r1, #1	; 0x1
        207034:	e5801000 	str	r1, [r0]
        207038:	1a00002b 	bne	2070ec <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x184>
        20703c:	e59b0014 	ldr	r0, [fp, #20]
        207040:	e5901000 	ldr	r1, [r0]
        207044:	e2411001 	sub	r1, r1, #1	; 0x1
        207048:	e5801000 	str	r1, [r0]
        20704c:	ea000026 	b	2070ec <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x184>
        207050:	e59b0014 	ldr	r0, [fp, #20]
        207054:	e5901000 	ldr	r1, [r0]
        207058:	e2811001 	add	r1, r1, #1	; 0x1
        20705c:	e5801000 	str	r1, [r0]
        207060:	e59b3004 	ldr	r3, [fp, #4]
        207064:	e59d1030 	ldr	r1, [sp, #48]
        207068:	e28d2040 	add	r2, sp, #64	; 0x40
        20706c:	e1a00003 	mov	r0, r3
        207070:	e5933000 	ldr	r3, [r3]
        207074:	e1a0e00f 	mov	lr, pc
        207078:	e283f04c 	add	pc, r3, #76	; 0x4c
        20707c:	e3700001 	cmn	r0, #1	; 0x1
        207080:	0a000022 	beq	207110 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x1a8>
        207084:	e59b3008 	ldr	r3, [fp, #8]
        207088:	e28b200c 	add	r2, fp, #12	; 0xc
        20708c:	e1a00003 	mov	r0, r3
        207090:	e59d1030 	ldr	r1, [sp, #48]
        207094:	e5933000 	ldr	r3, [r3]
        207098:	e1a0e00f 	mov	lr, pc
        20709c:	e283f04c 	add	pc, r3, #76	; 0x4c
        2070a0:	e3700001 	cmn	r0, #1	; 0x1
        2070a4:	0a000019 	beq	207110 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x1a8>
        2070a8:	e28d1030 	add	r1, sp, #48	; 0x30
        2070ac:	e8910003 	ldmia	r1, {r0, r1}
        2070b0:	e1500001 	cmp	r0, r1
        2070b4:	aa000003 	bge	2070c8 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x160>
        2070b8:	e28d0020 	add	r0, sp, #32	; 0x20
        2070bc:	e1a0e00f 	mov	lr, pc
        2070c0:	e59df038 	ldr	pc, [sp, #56]
        2070c4:	ea000005 	b	2070e0 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x178>
        2070c8:	e59d1040 	ldr	r1, [sp, #64]
        2070cc:	e59b0018 	ldr	r0, [fp, #24]
        2070d0:	e5801000 	str	r1, [r0]
        2070d4:	e59d0030 	ldr	r0, [sp, #48]
        2070d8:	e2800001 	add	r0, r0, #1	; 0x1
        2070dc:	e58d0030 	str	r0, [sp, #48]
        2070e0:	e59d0034 	ldr	r0, [sp, #52]
        2070e4:	e2800001 	add	r0, r0, #1	; 0x1
        2070e8:	e58d0034 	str	r0, [sp, #52]
        2070ec:	e1a0000d 	mov	r0, sp
        2070f0:	e1a0e00f 	mov	lr, pc
        2070f4:	e59df018 	ldr	pc, [sp, #24]
        2070f8:	e2844001 	add	r4, r4, #1	; 0x1
        2070fc:	e59d1014 	ldr	r1, [sp, #20]
        207100:	e1510004 	cmp	r1, r4
        207104:	8affffa6 	bhi	206fa4 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x3c>
        207108:	e3a00000 	mov	r0, #0	; 0x0
        20710c:	ea000000 	b	207114 <UnionStrokes__FP7TDArrayT1UlT1PUlT5+0x1ac>
        207110:	e3a00001 	mov	r0, #1	; 0x1
        207114:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: UnitsHitSameArea__FP5TUnitT1
 * Address: 0021c68c
 */
void globals::UnitsHitSameArea() {
    /*
        21c68c:	e1a0c00d 	mov	ip, sp
        21c690:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21c694:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c698:	e1a04001 	mov	r4, r1
        21c69c:	e3a05000 	mov	r5, #0	; 0x0
        21c6a0:	eb6522f6 	bl	1b65280 <TUnit::$GetArea(void)>
        21c6a4:	e1a06000 	mov	r6, r0
        21c6a8:	e1a00004 	mov	r0, r4
        21c6ac:	eb6522f3 	bl	1b65280 <TUnit::$GetArea(void)>
        21c6b0:	e3360000 	teq	r6, #0	; 0x0
        21c6b4:	13300000 	teqne	r0, #0	; 0x0
        21c6b8:	0a000005 	beq	21c6d4 <UnitsHitSameArea__FP5TUnitT1+0x48>
        21c6bc:	e5b6102c 	ldr	r1, [r6, #44]!
        21c6c0:	e590002c 	ldr	r0, [r0, #44]
        21c6c4:	e1310000 	teq	r1, r0
        21c6c8:	1a000001 	bne	21c6d4 <UnitsHitSameArea__FP5TUnitT1+0x48>
        21c6cc:	e3310000 	teq	r1, #0	; 0x0
        21c6d0:	13a05001 	movne	r5, #1	; 0x1
        21c6d4:	e1a00005 	mov	r0, r5
        21c6d8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: UnsetFlag(SamplePt *, unsigned long)
 * Address: 00222220
 */
UnsetFlag(SamplePt *, unsigned long) {
    /*
        222220:	e5902002 	ldr	r2, [r0, #2]
        222224:	e1a02822 	mov	r2, r2, lsr #16
        222228:	e1a03882 	mov	r3, r2, lsl #17
        22222c:	e2022902 	and	r2, r2, #32768	; 0x8000
        222230:	e1e01001 	mvn	r1, r1
        222234:	e0012742 	and	r2, r1, r2, asr #14
        222238:	e3a01902 	mov	r1, #32768	; 0x8000
        22223c:	e0011702 	and	r1, r1, r2, lsl #14
        222240:	e18118a3 	orr	r1, r1, r3, lsr #17
        222244:	e5c01003 	strb	r1, [r0, #3]
        222248:	e1a01441 	mov	r1, r1, asr #8
        22224c:	e5c01002 	strb	r1, [r0, #2]
        222250:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Ustrcpy
 * Address: 002563f0
 */
void globals::Ustrcpy() {
    /*
        2563f0:	e1a02000 	mov	r2, r0
        2563f4:	e5913000 	ldr	r3, [r1]
        2563f8:	e1b03823 	movs	r3, r3, lsr #16
        2563fc:	e2811002 	add	r1, r1, #2	; 0x2
        256400:	e5c03001 	strb	r3, [r0, #1]
        256404:	e1a0c443 	mov	ip, r3, asr #8
        256408:	e4c0c002 	strb	ip, [r0], #2
        25640c:	1afffff8 	bne	2563f4 <Ustrcpy+0x4>
        256410:	e1a00002 	mov	r0, r2
        256414:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Ustrncpy
 * Address: 00256418
 */
void globals::Ustrncpy() {
    /*
        256418:	e92d4000 	stmdb	sp!, {lr}
        25641c:	e1a03000 	mov	r3, r0
        256420:	e1b0c002 	movs	ip, r2
        256424:	e2422001 	sub	r2, r2, #1	; 0x1
        256428:	0a000006 	beq	256448 <Ustrncpy+0x30>
        25642c:	e591c000 	ldr	ip, [r1]
        256430:	e1b0c82c 	movs	ip, ip, lsr #16
        256434:	e2811002 	add	r1, r1, #2	; 0x2
        256438:	e5c0c001 	strb	ip, [r0, #1]
        25643c:	e1a0e44c 	mov	lr, ip, asr #8
        256440:	e4c0e002 	strb	lr, [r0], #2
        256444:	1afffff5 	bne	256420 <Ustrncpy+0x8>
        256448:	e3720001 	cmn	r2, #1	; 0x1
        25644c:	03a01000 	moveq	r1, #0	; 0x0
        256450:	05c01001 	streqb	r1, [r0, #1]
        256454:	05c01000 	streqb	r1, [r0]
        256458:	e1a00003 	mov	r0, r3
        25645c:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: UNumberToString
 * Address: 00256688
 */
void globals::UNumberToString() {
    /*
        256688:	ea664fa1 	b	1bea514 <$IntegerString(long, unsigned short *)>
    */
}

/**
 * Symbol: Ustrcat
 * Address: 00256738
 */
void globals::Ustrcat() {
    /*
        256738:	e1a02000 	mov	r2, r0
        25673c:	e5903000 	ldr	r3, [r0]
        256740:	e1b03823 	movs	r3, r3, lsr #16
        256744:	e2800002 	add	r0, r0, #2	; 0x2
        256748:	1afffffb 	bne	25673c <Ustrcat+0x4>
        25674c:	e2400002 	sub	r0, r0, #2	; 0x2
        256750:	e5913000 	ldr	r3, [r1]
        256754:	e1b03823 	movs	r3, r3, lsr #16
        256758:	e2811002 	add	r1, r1, #2	; 0x2
        25675c:	e5c03001 	strb	r3, [r0, #1]
        256760:	e1a0c443 	mov	ip, r3, asr #8
        256764:	e4c0c002 	strb	ip, [r0], #2
        256768:	1afffff8 	bne	256750 <Ustrcat+0x18>
        25676c:	e1a00002 	mov	r0, r2
        256770:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Ustrncat
 * Address: 00256774
 */
void globals::Ustrncat() {
    /*
        256774:	e92d4000 	stmdb	sp!, {lr}
        256778:	e1a03000 	mov	r3, r0
        25677c:	e590c000 	ldr	ip, [r0]
        256780:	e1b0c82c 	movs	ip, ip, lsr #16
        256784:	0a000002 	beq	256794 <Ustrncat+0x20>
        256788:	e5b0c002 	ldr	ip, [r0, #2]!
        25678c:	e1b0c82c 	movs	ip, ip, lsr #16
        256790:	1afffffc 	bne	256788 <Ustrncat+0x14>
        256794:	e1a0c002 	mov	ip, r2
        256798:	e2422001 	sub	r2, r2, #1	; 0x1
        25679c:	e35c0000 	cmp	ip, #0	; 0x0
        2567a0:	9a00000c 	bls	2567d8 <Ustrncat+0x64>
        2567a4:	e591c000 	ldr	ip, [r1]
        2567a8:	e1b0c82c 	movs	ip, ip, lsr #16
        2567ac:	e2811002 	add	r1, r1, #2	; 0x2
        2567b0:	e5c0c001 	strb	ip, [r0, #1]
        2567b4:	e1a0e44c 	mov	lr, ip, asr #8
        2567b8:	e4c0e002 	strb	lr, [r0], #2
        2567bc:	1a000001 	bne	2567c8 <Ustrncat+0x54>
        2567c0:	e1a00003 	mov	r0, r3
        2567c4:	e8bd8000 	ldmia	sp!, {pc}
        2567c8:	e1a0c002 	mov	ip, r2
        2567cc:	e2422001 	sub	r2, r2, #1	; 0x1
        2567d0:	e35c0000 	cmp	ip, #0	; 0x0
        2567d4:	8afffff2 	bhi	2567a4 <Ustrncat+0x30>
        2567d8:	e3a01000 	mov	r1, #0	; 0x0
        2567dc:	e5c01001 	strb	r1, [r0, #1]
        2567e0:	e5c01000 	strb	r1, [r0]
        2567e4:	eafffff5 	b	2567c0 <Ustrncat+0x4c>
    */
}

/**
 * Symbol: Ustrlen
 * Address: 002567e8
 */
void globals::Ustrlen() {
    /*
        2567e8:	e1a01000 	mov	r1, r0
        2567ec:	e5912000 	ldr	r2, [r1]
        2567f0:	e1b02822 	movs	r2, r2, lsr #16
        2567f4:	e2811002 	add	r1, r1, #2	; 0x2
        2567f8:	1afffffb 	bne	2567ec <Ustrlen+0x4>
        2567fc:	e0410000 	sub	r0, r1, r0
        256800:	e0800fa0 	add	r0, r0, r0, lsr #31
        256804:	e1a000c0 	mov	r0, r0, asr #1
        256808:	e2400001 	sub	r0, r0, #1	; 0x1
        25680c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Ustrchr
 * Address: 00256810
 */
void globals::Ustrchr() {
    /*
        256810:	e1a01801 	mov	r1, r1, lsl #16
        256814:	e1a01821 	mov	r1, r1, lsr #16
        256818:	e5902000 	ldr	r2, [r0]
        25681c:	e1a02822 	mov	r2, r2, lsr #16
        256820:	e2800002 	add	r0, r0, #2	; 0x2
        256824:	e1320001 	teq	r2, r1
        256828:	02400002 	subeq	r0, r0, #2	; 0x2
        25682c:	01a0f00e 	moveq	pc, lr
        256830:	e3320000 	teq	r2, #0	; 0x0
        256834:	1afffff7 	bne	256818 <Ustrchr+0x8>
        256838:	e3a00000 	mov	r0, #0	; 0x0
        25683c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Umbstrlen
 * Address: 00256840
 */
void globals::Umbstrlen() {
    /*
        256840:	e1a01000 	mov	r1, r0
        256844:	e5912000 	ldr	r2, [r1]
        256848:	e1b02822 	movs	r2, r2, lsr #16
        25684c:	e2811002 	add	r1, r1, #2	; 0x2
        256850:	1afffffb 	bne	256844 <Umbstrlen+0x4>
        256854:	e0410000 	sub	r0, r1, r0
        256858:	e0800fa0 	add	r0, r0, r0, lsr #31
        25685c:	e1a000c0 	mov	r0, r0, asr #1
        256860:	e2400001 	sub	r0, r0, #1	; 0x1
        256864:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Umbstrnlen
 * Address: 00256868
 */
void globals::Umbstrnlen() {
    /*
        256868:	e5903000 	ldr	r3, [r0]
        25686c:	e1b03823 	movs	r3, r3, lsr #16
        256870:	e2801002 	add	r1, r0, #2	; 0x2
        256874:	0a000006 	beq	256894 <Umbstrnlen+0x2c>
        256878:	e2522001 	subs	r2, r2, #1	; 0x1
        25687c:	02811002 	addeq	r1, r1, #2	; 0x2
        256880:	0a000003 	beq	256894 <Umbstrnlen+0x2c>
        256884:	e5913000 	ldr	r3, [r1]
        256888:	e1b03823 	movs	r3, r3, lsr #16
        25688c:	e2811002 	add	r1, r1, #2	; 0x2
        256890:	1afffff8 	bne	256878 <Umbstrnlen+0x10>
        256894:	e0410000 	sub	r0, r1, r0
        256898:	e0800fa0 	add	r0, r0, r0, lsr #31
        25689c:	e1a000c0 	mov	r0, r0, asr #1
        2568a0:	e2400001 	sub	r0, r0, #1	; 0x1
        2568a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Ustrcmp
 * Address: 002568a8
 */
void globals::Ustrcmp() {
    /*
        2568a8:	e5902000 	ldr	r2, [r0]
        2568ac:	e1a02822 	mov	r2, r2, lsr #16
        2568b0:	e2800002 	add	r0, r0, #2	; 0x2
        2568b4:	e5913000 	ldr	r3, [r1]
        2568b8:	e2811002 	add	r1, r1, #2	; 0x2
        2568bc:	e0523823 	subs	r3, r2, r3, lsr #16
        2568c0:	11a00003 	movne	r0, r3
        2568c4:	11a0f00e 	movne	pc, lr
        2568c8:	e3320000 	teq	r2, #0	; 0x0
        2568cc:	1afffff5 	bne	2568a8 <Ustrcmp>
        2568d0:	e3a00000 	mov	r0, #0	; 0x0
        2568d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Umemset
 * Address: 002568d8
 */
void globals::Umemset() {
    /*
        2568d8:	e1a01801 	mov	r1, r1, lsl #16
        2568dc:	e1a01821 	mov	r1, r1, lsr #16
        2568e0:	e1a0c000 	mov	ip, r0
        2568e4:	e1a03441 	mov	r3, r1, asr #8
        2568e8:	e3520000 	cmp	r2, #0	; 0x0
        2568ec:	91a0f00e 	movls	pc, lr
        2568f0:	e5cc1001 	strb	r1, [ip, #1]
        2568f4:	e4cc3002 	strb	r3, [ip], #2
        2568f8:	e2422001 	sub	r2, r2, #1	; 0x1
        2568fc:	e3520000 	cmp	r2, #0	; 0x0
        256900:	8afffffa 	bhi	2568f0 <Umemset+0x18>
        256904:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: U_CONST_CHAR
 * Address: 00257320
 */
void globals::U_CONST_CHAR() {
    /*
        257320:	e20000ff 	and	r0, r0, #255	; 0xff
        257324:	e59f100c 	ldr	r1, [pc, #c]	; 257338 <U_CONST_CHAR+0x18>
        257328:	e5911008 	ldr	r1, [r1, #8]
        25732c:	e7910080 	ldr	r0, [r1, r0, lsl #1]
        257330:	e1a00820 	mov	r0, r0, lsr #16
        257334:	e1a0f00e 	mov	pc, lr
        257338:	0c104edc 	ldceq	14, cr4, [r0], -#880
    */
}

/**
 * Symbol: UppercaseText(unsigned short *, long)
 * Address: 002577b4
 */
UppercaseText(unsigned short *, long) {
    /*
        2577b4:	e59f2004 	ldr	r2, [pc, #4]	; 2577c0 <UppercaseText(unsigned short *, long)+0xc>
        2577b8:	e592205c 	ldr	r2, [r2, #92]
        2577bc:	ea652a50 	b	1ba2104 <$ConvertTextCase(unsigned short *, long, signed char *)>
        2577c0:	0c107790 	ldceq	7, cr7, [r0], -#576
    */
}

/**
 * Symbol: UppercaseNoDiacriticsText(unsigned short *, long)
 * Address: 0025792c
 */
UppercaseNoDiacriticsText(unsigned short *, long) {
    /*
        25792c:	e59f2004 	ldr	r2, [pc, #4]	; 257938 <UppercaseNoDiacriticsText(unsigned short *, long)+0xc>
        257930:	e5922064 	ldr	r2, [r2, #100]
        257934:	ea6529f2 	b	1ba2104 <$ConvertTextCase(unsigned short *, long, signed char *)>
        257938:	0c107790 	ldceq	7, cr7, [r0], -#576
    */
}

/**
 * Symbol: UToLower(unsigned short)
 * Address: 0025798c
 */
UToLower(unsigned short) {
    /*
        25798c:	e1a0c00d 	mov	ip, sp
        257990:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        257994:	e24cb004 	sub	fp, ip, #4	; 0x4
        257998:	e24dd004 	sub	sp, sp, #4	; 0x4
        25799c:	e5cd0001 	strb	r0, [sp, #1]
        2579a0:	e1a00420 	mov	r0, r0, lsr #8
        2579a4:	e5cd0000 	strb	r0, [sp]
        2579a8:	e1a0000d 	mov	r0, sp
        2579ac:	e3a01001 	mov	r1, #1	; 0x1
        2579b0:	eb664ae7 	bl	1bea554 <$LowercaseText(unsigned short *, long)>
        2579b4:	e59d0000 	ldr	r0, [sp]
        2579b8:	e1a00820 	mov	r0, r0, lsr #16
        2579bc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: UserInit(void)
 * Address: 00259434
 */
UserInit(void) {
    /*
        259434:	e1a0c00d 	mov	ip, sp
        259438:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25943c:	e24cb004 	sub	fp, ip, #4	; 0x4
        259440:	e3a00000 	mov	r0, #0	; 0x0
        259444:	eb055348 	bl	3ae16c <GetPortSWI>
        259448:	e1a01000 	mov	r1, r0
        25944c:	e3a00000 	mov	r0, #0	; 0x0
        259450:	eb65d0a1 	bl	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        259454:	e59f401c 	ldr	r4, [pc, #1c]	; 259478 <UserInit(void)+0x44>
        259458:	e5840000 	str	r0, [r4]
        25945c:	e3a00001 	mov	r0, #1	; 0x1
        259460:	eb055341 	bl	3ae16c <GetPortSWI>
        259464:	e1a01000 	mov	r1, r0
        259468:	e3a00000 	mov	r0, #0	; 0x0
        25946c:	eb65d096 	bl	1bcd6cc <TUPort::$__ct(unsigned long)>
        259470:	e5a40004 	str	r0, [r4, #4]!
        259474:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        259478:	0c104f04 	ldceq	15, cr4, [r0], -#16
    */
}

/**
 * Symbol: unpack__FP13TCompressVarsUiT2
 * Address: 0025cc74
 */
void globals::unpack() {
    /*
        25cc74:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        25cc78:	e2803a03 	add	r3, r0, #12288	; 0x3000
        25cc7c:	e3310000 	teq	r1, #0	; 0x0
        25cc80:	1a00000c 	bne	25ccb8 <unpack__FP13TCompressVarsUiT2+0x44>
        25cc84:	e3a00000 	mov	r0, #0	; 0x0
        25cc88:	e59319bc 	ldr	r1, [r3, #2492]
        25cc8c:	e3510008 	cmp	r1, #8	; 0x8
        25cc90:	9a000005 	bls	25ccac <unpack__FP13TCompressVarsUiT2+0x38>
        25cc94:	e2411008 	sub	r1, r1, #8	; 0x8
        25cc98:	e59329c0 	ldr	r2, [r3, #2496]
        25cc9c:	e1a01132 	mov	r1, r2, lsr r1
        25cca0:	e58319c0 	str	r1, [r3, #2496]
        25cca4:	e3a01008 	mov	r1, #8	; 0x8
        25cca8:	ea000033 	b	25cd7c <unpack__FP13TCompressVarsUiT2+0x108>
        25ccac:	358309c0 	strcc	r0, [r3, #2496]
        25ccb0:	35a309bc 	strcc	r0, [r3, #2492]!
        25ccb4:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        25ccb8:	e3510008 	cmp	r1, #8	; 0x8
        25ccbc:	93a0e000 	movls	lr, #0	; 0x0
        25ccc0:	91a0c001 	movls	ip, r1
        25ccc4:	8241e008 	subhi	lr, r1, #8	; 0x8
        25ccc8:	83a0c008 	movhi	ip, #8	; 0x8
        25cccc:	e3a05000 	mov	r5, #0	; 0x0
        25ccd0:	e59349bc 	ldr	r4, [r3, #2492]
        25ccd4:	e154000c 	cmp	r4, ip
        25ccd8:	2a000006 	bcs	25ccf8 <unpack__FP13TCompressVarsUiT2+0x84>
        25ccdc:	e3a05001 	mov	r5, #1	; 0x1
        25cce0:	e59369c0 	ldr	r6, [r3, #2496]
        25cce4:	e1866412 	orr	r6, r6, r2, lsl r4
        25cce8:	e2844008 	add	r4, r4, #8	; 0x8
        25ccec:	e2833d27 	add	r3, r3, #2496	; 0x9c0
        25ccf0:	e8030050 	stmda	r3, {r4, r6}
        25ccf4:	e2433d27 	sub	r3, r3, #2496	; 0x9c0
        25ccf8:	e59349bc 	ldr	r4, [r3, #2492]
        25ccfc:	e1540001 	cmp	r4, r1
        25cd00:	2a00000c 	bcs	25cd38 <unpack__FP13TCompressVarsUiT2+0xc4>
        25cd04:	e3350000 	teq	r5, #0	; 0x0
        25cd08:	13e00000 	mvnne	r0, #0	; 0x0
        25cd0c:	18bd80f0 	ldmneia	sp!, {r4, r5, r6, r7, pc}
        25cd10:	e080508c 	add	r5, r0, ip, lsl #1
        25cd14:	e59319c0 	ldr	r1, [r3, #2496]
        25cd18:	e595502c 	ldr	r5, [r5, #44]
        25cd1c:	e0015825 	and	r5, r1, r5, lsr #16
        25cd20:	e1a01c31 	mov	r1, r1, lsr ip
        25cd24:	e044c00c 	sub	ip, r4, ip
        25cd28:	e1811c12 	orr	r1, r1, r2, lsl ip
        25cd2c:	e58319c0 	str	r1, [r3, #2496]
        25cd30:	e28c1008 	add	r1, ip, #8	; 0x8
        25cd34:	ea000006 	b	25cd54 <unpack__FP13TCompressVarsUiT2+0xe0>
        25cd38:	e080208c 	add	r2, r0, ip, lsl #1
        25cd3c:	e59319c0 	ldr	r1, [r3, #2496]
        25cd40:	e592202c 	ldr	r2, [r2, #44]
        25cd44:	e0015822 	and	r5, r1, r2, lsr #16
        25cd48:	e1a01c31 	mov	r1, r1, lsr ip
        25cd4c:	e58319c0 	str	r1, [r3, #2496]
        25cd50:	e044100c 	sub	r1, r4, ip
        25cd54:	e58319bc 	str	r1, [r3, #2492]
        25cd58:	e080008e 	add	r0, r0, lr, lsl #1
        25cd5c:	e59319c0 	ldr	r1, [r3, #2496]
        25cd60:	e590002c 	ldr	r0, [r0, #44]
        25cd64:	e0010820 	and	r0, r1, r0, lsr #16
        25cd68:	e1850400 	orr	r0, r5, r0, lsl #8
        25cd6c:	e1a01e31 	mov	r1, r1, lsr lr
        25cd70:	e58319c0 	str	r1, [r3, #2496]
        25cd74:	e59319bc 	ldr	r1, [r3, #2492]
        25cd78:	e041100e 	sub	r1, r1, lr
        25cd7c:	e5a319bc 	str	r1, [r3, #2492]!
        25cd80:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: UnlockWSData(ws_control_type *, ws_memory_header_type **)
 * Address: 002707a0
 */
UnlockWSData(ws_control_type *, ws_memory_header_type **) {
    /*
        2707a0:	e1a0c00d 	mov	ip, sp
        2707a4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2707a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2707ac:	e1a05000 	mov	r5, r0
        2707b0:	e1b04001 	movs	r4, r1
        2707b4:	e3a08000 	mov	r8, #0	; 0x0
        2707b8:	15946000 	ldrne	r6, [r4]
        2707bc:	1a000004 	bne	2707d4 <UnlockWSData(ws_control_type *, ws_memory_header_type **)+0x34>
        2707c0:	e595001c 	ldr	r0, [r5, #28]
        2707c4:	e3300000 	teq	r0, #0	; 0x0
        2707c8:	0a000025 	beq	270864 <UnlockWSData(ws_control_type *, ws_memory_header_type **)+0xc4>
        2707cc:	eb5ffbf7 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        2707d0:	e1a06000 	mov	r6, r0
        2707d4:	e3560000 	cmp	r6, #0	; 0x0
        2707d8:	0a000019 	beq	270844 <UnlockWSData(ws_control_type *, ws_memory_header_type **)+0xa4>
        2707dc:	e5967004 	ldr	r7, [r6, #4]
        2707e0:	0a000006 	beq	270800 <UnlockWSData(ws_control_type *, ws_memory_header_type **)+0x60>
        2707e4:	e3370000 	teq	r7, #0	; 0x0
        2707e8:	1a000004 	bne	270800 <UnlockWSData(ws_control_type *, ws_memory_header_type **)+0x60>
        2707ec:	e5960000 	ldr	r0, [r6]
        2707f0:	e3300000 	teq	r0, #0	; 0x0
        2707f4:	0a000012 	beq	270844 <UnlockWSData(ws_control_type *, ws_memory_header_type **)+0xa4>
        2707f8:	eb5ffbec 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        2707fc:	e1a07000 	mov	r7, r0
        270800:	e3370000 	teq	r7, #0	; 0x0
        270804:	0a00000e 	beq	270844 <UnlockWSData(ws_control_type *, ws_memory_header_type **)+0xa4>
        270808:	e59708d4 	ldr	r0, [r7, #2260]
        27080c:	e3300000 	teq	r0, #0	; 0x0
        270810:	0a000001 	beq	27081c <UnlockWSData(ws_control_type *, ws_memory_header_type **)+0x7c>
        270814:	eb5ffbe9 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        270818:	e58788d4 	str	r8, [r7, #2260]
        27081c:	e2877a01 	add	r7, r7, #4096	; 0x1000
        270820:	e5970888 	ldr	r0, [r7, #2184]
        270824:	e3300000 	teq	r0, #0	; 0x0
        270828:	0a000002 	beq	270838 <UnlockWSData(ws_control_type *, ws_memory_header_type **)+0x98>
        27082c:	e597088c 	ldr	r0, [r7, #2188]
        270830:	eb5ffbdf 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        270834:	e5a78888 	str	r8, [r7, #2184]!
        270838:	e5960000 	ldr	r0, [r6]
        27083c:	eb5ffbdc 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        270840:	e5a68004 	str	r8, [r6, #4]!
        270844:	e3340000 	teq	r4, #0	; 0x0
        270848:	15940000 	ldrne	r0, [r4]
        27084c:	13300000 	teqne	r0, #0	; 0x0
        270850:	15b5001c 	ldrne	r0, [r5, #28]!
        270854:	13300000 	teqne	r0, #0	; 0x0
        270858:	0a000001 	beq	270864 <UnlockWSData(ws_control_type *, ws_memory_header_type **)+0xc4>
        27085c:	eb5ffbd4 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        270860:	e5848000 	str	r8, [r4]
        270864:	e1a00008 	mov	r0, r8
        270868:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: UMinMax_noninline__FUlN21
 * Address: 002725e8
 */
void globals::UMinMax_noninline() {
    /*
        2725e8:	e1500001 	cmp	r0, r1
        2725ec:	91a00001 	movls	r0, r1
        2725f0:	e1500002 	cmp	r0, r2
        2725f4:	21a00002 	movcs	r0, r2
        2725f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnlockBook(_BOOKENTRY *)
 * Address: 002808ac
 */
UnlockBook(_BOOKENTRY *) {
    /*
        2808ac:	e5901000 	ldr	r1, [r0]
        2808b0:	e1a01821 	mov	r1, r1, lsr #16
        2808b4:	e3510000 	cmp	r1, #0	; 0x0
        2808b8:	da000003 	ble	2808cc <UnlockBook(_BOOKENTRY *)+0x20>
        2808bc:	e2411001 	sub	r1, r1, #1	; 0x1
        2808c0:	e5c01001 	strb	r1, [r0, #1]
        2808c4:	e1a01441 	mov	r1, r1, asr #8
        2808c8:	e5c01000 	strb	r1, [r0]
        2808cc:	e3a00001 	mov	r0, #1	; 0x1
        2808d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnlockCodeBook(unsigned short)
 * Address: 00280914
 */
UnlockCodeBook(unsigned short) {
    /*
        280914:	e1a0c00d 	mov	ip, sp
        280918:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        28091c:	e24cb004 	sub	fp, ip, #4	; 0x4
        280920:	e1a01800 	mov	r1, r0, lsl #16
        280924:	e1a01821 	mov	r1, r1, lsr #16
        280928:	e59f001c 	ldr	r0, [pc, #1c]	; 28094c <UnlockCodeBook(unsigned short)+0x38>
        28092c:	e3510001 	cmp	r1, #1	; 0x1
        280930:	0a000002 	beq	280940 <UnlockCodeBook(unsigned short)+0x2c>
        280934:	e3510002 	cmp	r1, #2	; 0x2
        280938:	1a000001 	bne	280944 <UnlockCodeBook(unsigned short)+0x30>
        28093c:	e280000c 	add	r0, r0, #12	; 0xc
        280940:	eb5fbfbd 	bl	1a7083c <$UnlockBook(_BOOKENTRY *)>
        280944:	e3a00001 	mov	r0, #1	; 0x1
        280948:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        28094c:	0c104fd0 	ldceq	15, cr4, [r0], -#832
    */
}

/**
 * Symbol: UnpackBits__FPPcT1l
 * Address: 002aefc0
 */
void globals::UnpackBits() {
    /*
        2aefc0:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        2aefc4:	e590c000 	ldr	ip, [r0]
        2aefc8:	e5913000 	ldr	r3, [r1]
        2aefcc:	e083e002 	add	lr, r3, r2
        2aefd0:	e153000e 	cmp	r3, lr
        2aefd4:	2a000015 	bcs	2af030 <UnpackBits__FPPcT1l+0x70>
        2aefd8:	e3a05001 	mov	r5, #1	; 0x1
        2aefdc:	e5dc2000 	ldrb	r2, [ip]
        2aefe0:	e1a02c02 	mov	r2, r2, lsl #24
        2aefe4:	e1a02c42 	mov	r2, r2, asr #24
        2aefe8:	e28cc001 	add	ip, ip, #1	; 0x1
        2aefec:	e3720080 	cmn	r2, #128	; 0x80
        2aeff0:	0a00000c 	beq	2af028 <UnpackBits__FPPcT1l+0x68>
        2aeff4:	e3520000 	cmp	r2, #0	; 0x0
        2aeff8:	ba000005 	blt	2af014 <UnpackBits__FPPcT1l+0x54>
        2aeffc:	e2822001 	add	r2, r2, #1	; 0x1
        2af000:	e4dc4001 	ldrb	r4, [ip], #1
        2af004:	e4c34001 	strb	r4, [r3], #1
        2af008:	e2522001 	subs	r2, r2, #1	; 0x1
        2af00c:	1afffffb 	bne	2af000 <UnpackBits__FPPcT1l+0x40>
        2af010:	ea000004 	b	2af028 <UnpackBits__FPPcT1l+0x68>
        2af014:	e0452002 	sub	r2, r5, r2
        2af018:	e4dc4001 	ldrb	r4, [ip], #1
        2af01c:	e4c34001 	strb	r4, [r3], #1
        2af020:	e2522001 	subs	r2, r2, #1	; 0x1
        2af024:	1afffffc 	bne	2af01c <UnpackBits__FPPcT1l+0x5c>
        2af028:	e153000e 	cmp	r3, lr
        2af02c:	3affffea 	bcc	2aefdc <UnpackBits__FPPcT1l+0x1c>
        2af030:	e580c000 	str	ip, [r0]
        2af034:	e5813000 	str	r3, [r1]
        2af038:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: UnpackWords__FPPcT1l
 * Address: 002af03c
 */
void globals::UnpackWords() {
    /*
        2af03c:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        2af040:	e590c000 	ldr	ip, [r0]
        2af044:	e5913000 	ldr	r3, [r1]
        2af048:	e0834002 	add	r4, r3, r2
        2af04c:	e1530004 	cmp	r3, r4
        2af050:	2a00001f 	bcs	2af0d4 <UnpackWords__FPPcT1l+0x98>
        2af054:	e3a06001 	mov	r6, #1	; 0x1
        2af058:	e5dc2000 	ldrb	r2, [ip]
        2af05c:	e1a02c02 	mov	r2, r2, lsl #24
        2af060:	e1a02c42 	mov	r2, r2, asr #24
        2af064:	e28cc001 	add	ip, ip, #1	; 0x1
        2af068:	e3720080 	cmn	r2, #128	; 0x80
        2af06c:	0a000016 	beq	2af0cc <UnpackWords__FPPcT1l+0x90>
        2af070:	e3520000 	cmp	r2, #0	; 0x0
        2af074:	ba000007 	blt	2af098 <UnpackWords__FPPcT1l+0x5c>
        2af078:	e2822001 	add	r2, r2, #1	; 0x1
        2af07c:	e4dce001 	ldrb	lr, [ip], #1
        2af080:	e4c3e001 	strb	lr, [r3], #1
        2af084:	e4dce001 	ldrb	lr, [ip], #1
        2af088:	e4c3e001 	strb	lr, [r3], #1
        2af08c:	e2522001 	subs	r2, r2, #1	; 0x1
        2af090:	1afffff9 	bne	2af07c <UnpackWords__FPPcT1l+0x40>
        2af094:	ea00000c 	b	2af0cc <UnpackWords__FPPcT1l+0x90>
        2af098:	e046e002 	sub	lr, r6, r2
        2af09c:	e4dc2001 	ldrb	r2, [ip], #1
        2af0a0:	e1a02402 	mov	r2, r2, lsl #8
        2af0a4:	e1a02802 	mov	r2, r2, lsl #16
        2af0a8:	e4dc5001 	ldrb	r5, [ip], #1
        2af0ac:	e1852822 	orr	r2, r5, r2, lsr #16
        2af0b0:	e1a02802 	mov	r2, r2, lsl #16
        2af0b4:	e1a02822 	mov	r2, r2, lsr #16
        2af0b8:	e1a05442 	mov	r5, r2, asr #8
        2af0bc:	e5c32001 	strb	r2, [r3, #1]
        2af0c0:	e4c35002 	strb	r5, [r3], #2
        2af0c4:	e25ee001 	subs	lr, lr, #1	; 0x1
        2af0c8:	1afffffb 	bne	2af0bc <UnpackWords__FPPcT1l+0x80>
        2af0cc:	e1530004 	cmp	r3, r4
        2af0d0:	3affffe0 	bcc	2af058 <UnpackWords__FPPcT1l+0x1c>
        2af0d4:	e580c000 	str	ip, [r0]
        2af0d8:	e5813000 	str	r3, [r1]
        2af0dc:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: UnevenDivide__FlT1
 * Address: 002b9034
 */
void globals::UnevenDivide() {
    /*
        2b9034:	ee010190 	fltd	f1, r0
        2b9038:	ee001190 	fltd	f0, r1
        2b903c:	ee410180 	dvfd	f0, f1, f0
        2b9040:	ed2d8102 	stfd	f0, [sp, -#8]!
        2b9044:	e8bd0003 	ldmia	sp!, {r0, r1}
        2b9048:	ea64309f 	b	1bc52cc <$MakeReal(double)>
    */
}

/**
 * Symbol: UnloadVoc(void **)
 * Address: 002ba334
 */
UnloadVoc(void **) {
    /*
        2ba334:	ea618ac8 	b	1b1ce5c <$voc_unload(void **)>
    */
}

/**
 * Symbol: UnloadData(void **)
 * Address: 002ba338
 */
UnloadData(void **) {
    /*
        2ba338:	ea61dd6c 	b	1b318f0 <$dti_unload(void **)>
    */
}

/**
 * Symbol: UnloadTrigram(void **)
 * Address: 002ba33c
 */
UnloadTrigram(void **) {
    /*
        2ba33c:	ea61e175 	b	1b32918 <$triads_unload(void **)>
    */
}

/**
 * Symbol: UnpackRGBvalues__FUlPUlN22
 * Address: 002beffc
 */
void globals::UnpackRGBvalues() {
    /*
        2beffc:	e92d4000 	stmdb	sp!, {lr}
        2bf000:	e3a0c0ff 	mov	ip, #255	; 0xff
        2bf004:	e00ce820 	and	lr, ip, r0, lsr #16
        2bf008:	e00cc420 	and	ip, ip, r0, lsr #8
        2bf00c:	e581e000 	str	lr, [r1]
        2bf010:	e20000ff 	and	r0, r0, #255	; 0xff
        2bf014:	e582c000 	str	ip, [r2]
        2bf018:	e5830000 	str	r0, [r3]
        2bf01c:	e5910000 	ldr	r0, [r1]
        2bf020:	e0800400 	add	r0, r0, r0, lsl #8
        2bf024:	e5810000 	str	r0, [r1]
        2bf028:	e5920000 	ldr	r0, [r2]
        2bf02c:	e0800400 	add	r0, r0, r0, lsl #8
        2bf030:	e5820000 	str	r0, [r2]
        2bf034:	e5930000 	ldr	r0, [r3]
        2bf038:	e0800400 	add	r0, r0, r0, lsl #8
        2bf03c:	e5830000 	str	r0, [r3]
        2bf040:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: UnlockRAMPDF__FPUcT1
 * Address: 002d4e74
 */
void globals::UnlockRAMPDF() {
    /*
        2d4e74:	e1a0c00d 	mov	ip, sp
        2d4e78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d4e7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d4e80:	e1a04000 	mov	r4, r0
        2d4e84:	e3310000 	teq	r1, #0	; 0x0
        2d4e88:	11a00001 	movne	r0, r1
        2d4e8c:	1b5e6a4b 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        2d4e90:	e1a00004 	mov	r0, r4
        2d4e94:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2d4e98:	ea614d67 	b	1b2843c <$UnlockRamParaData(unsigned long)>
    */
}

/**
 * Symbol: UncacheIfFaultBlock(RefVar const &)
 * Address: 002e0400
 */
UncacheIfFaultBlock(RefVar const &) {
    /*
        2e0400:	e1a0c00d 	mov	ip, sp
        2e0404:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e0408:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e040c:	e1a04000 	mov	r4, r0
        2e0410:	e5900000 	ldr	r0, [r0]
        2e0414:	e5900000 	ldr	r0, [r0]
        2e0418:	eb63939a 	bl	1bc5288 <$IsFaultBlock(long)>
        2e041c:	e3300000 	teq	r0, #0	; 0x0
        2e0420:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2e0424:	e5940000 	ldr	r0, [r4]
        2e0428:	e5900000 	ldr	r0, [r0]
        2e042c:	eb5d8737 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2e0430:	e3a01002 	mov	r1, #2	; 0x2
        2e0434:	e5a01018 	str	r1, [r0, #24]!
        2e0438:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: UpdateStyleTable__FlT1
 * Address: 002e2724
 */
void globals::UpdateStyleTable() {
    /*
        2e2724:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        2e2728:	e1a0e001 	mov	lr, r1
        2e272c:	e59f7174 	ldr	r7, [pc, #174]	; 2e28a8 <UpdateStyleTable__FlT1+0x184>
        2e2730:	e3300801 	teq	r0, #65536	; 0x10000
        2e2734:	033e0801 	teqeq	lr, #65536	; 0x10000
        2e2738:	01a00007 	moveq	r0, r7
        2e273c:	08bd81f0 	ldmeqia	sp!, {r4, r5, r6, r7, r8, pc}
        2e2740:	e59f6164 	ldr	r6, [pc, #164]	; 2e28ac <UpdateStyleTable__FlT1+0x188>
        2e2744:	e5961000 	ldr	r1, [r6]
        2e2748:	e0611181 	rsb	r1, r1, r1, lsl #3
        2e274c:	e59f515c 	ldr	r5, [pc, #15c]	; 2e28b0 <UpdateStyleTable__FlT1+0x18c>
        2e2750:	e0851181 	add	r1, r5, r1, lsl #3
        2e2754:	e5912030 	ldr	r2, [r1, #48]
        2e2758:	e1320000 	teq	r2, r0
        2e275c:	05912034 	ldreq	r2, [r1, #52]
        2e2760:	0132000e 	teqeq	r2, lr
        2e2764:	0a00004d 	beq	2e28a0 <UpdateStyleTable__FlT1+0x17c>
        2e2768:	e080200e 	add	r2, r0, lr
        2e276c:	e1a040c2 	mov	r4, r2, asr #1
        2e2770:	e2818014 	add	r8, r1, #20	; 0x14
        2e2774:	e8b7100e 	ldmia	r7!, {r1, r2, r3, ip}
        2e2778:	e8a8100e 	stmia	r8!, {r1, r2, r3, ip}
        2e277c:	e897100c 	ldmia	r7, {r2, r3, ip}
        2e2780:	e888100c 	stmia	r8, {r2, r3, ip}
        2e2784:	e5961000 	ldr	r1, [r6]
        2e2788:	e0611181 	rsb	r1, r1, r1, lsl #3
        2e278c:	e0851181 	add	r1, r5, r1, lsl #3
        2e2790:	e5d12017 	ldrb	r2, [r1, #23]
        2e2794:	e0020290 	mul	r2, r0, r2
        2e2798:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e279c:	e1a02842 	mov	r2, r2, asr #16
        2e27a0:	e5c12017 	strb	r2, [r1, #23]
        2e27a4:	e5d12018 	ldrb	r2, [r1, #24]
        2e27a8:	e0020290 	mul	r2, r0, r2
        2e27ac:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e27b0:	e1a02842 	mov	r2, r2, asr #16
        2e27b4:	e5c12018 	strb	r2, [r1, #24]
        2e27b8:	e5d12020 	ldrb	r2, [r1, #32]
        2e27bc:	e0020290 	mul	r2, r0, r2
        2e27c0:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e27c4:	e1a02842 	mov	r2, r2, asr #16
        2e27c8:	e5c12020 	strb	r2, [r1, #32]
        2e27cc:	e5d12021 	ldrb	r2, [r1, #33]
        2e27d0:	e0020290 	mul	r2, r0, r2
        2e27d4:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e27d8:	e1a02842 	mov	r2, r2, asr #16
        2e27dc:	e5c12021 	strb	r2, [r1, #33]
        2e27e0:	e5d12023 	ldrb	r2, [r1, #35]
        2e27e4:	e0020294 	mul	r2, r4, r2
        2e27e8:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e27ec:	e1a02842 	mov	r2, r2, asr #16
        2e27f0:	e5c12023 	strb	r2, [r1, #35]
        2e27f4:	e5d12024 	ldrb	r2, [r1, #36]
        2e27f8:	e0020294 	mul	r2, r4, r2
        2e27fc:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e2800:	e1a02842 	mov	r2, r2, asr #16
        2e2804:	e5c12024 	strb	r2, [r1, #36]
        2e2808:	e5d12026 	ldrb	r2, [r1, #38]
        2e280c:	e0020290 	mul	r2, r0, r2
        2e2810:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e2814:	e1a02842 	mov	r2, r2, asr #16
        2e2818:	e5c12026 	strb	r2, [r1, #38]
        2e281c:	e5d12027 	ldrb	r2, [r1, #39]
        2e2820:	e0020290 	mul	r2, r0, r2
        2e2824:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e2828:	e1a02842 	mov	r2, r2, asr #16
        2e282c:	e5c12027 	strb	r2, [r1, #39]
        2e2830:	e5d12029 	ldrb	r2, [r1, #41]
        2e2834:	e0020290 	mul	r2, r0, r2
        2e2838:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e283c:	e1a02842 	mov	r2, r2, asr #16
        2e2840:	e5c12029 	strb	r2, [r1, #41]
        2e2844:	e5d1202a 	ldrb	r2, [r1, #42]
        2e2848:	e0020290 	mul	r2, r0, r2
        2e284c:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e2850:	e1a02842 	mov	r2, r2, asr #16
        2e2854:	e5c1202a 	strb	r2, [r1, #42]
        2e2858:	e5d1202b 	ldrb	r2, [r1, #43]
        2e285c:	e002029e 	mul	r2, lr, r2
        2e2860:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e2864:	e1a02842 	mov	r2, r2, asr #16
        2e2868:	e5c1202b 	strb	r2, [r1, #43]
        2e286c:	e5d1202c 	ldrb	r2, [r1, #44]
        2e2870:	e0020294 	mul	r2, r4, r2
        2e2874:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e2878:	e1a02842 	mov	r2, r2, asr #16
        2e287c:	e5c1202c 	strb	r2, [r1, #44]
        2e2880:	e5d1202d 	ldrb	r2, [r1, #45]
        2e2884:	e002029e 	mul	r2, lr, r2
        2e2888:	e2822902 	add	r2, r2, #32768	; 0x8000
        2e288c:	e1a02842 	mov	r2, r2, asr #16
        2e2890:	e5c1202d 	strb	r2, [r1, #45]
        2e2894:	e2811030 	add	r1, r1, #48	; 0x30
        2e2898:	e8814001 	stmia	r1, {r0, lr}
        2e289c:	e2411030 	sub	r1, r1, #48	; 0x30
        2e28a0:	e2810014 	add	r0, r1, #20	; 0x14
        2e28a4:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
        2e28a8:	00380f78 	eoreqs	r0, r8, r8, ror pc
        2e28ac:	0c1053f8 	ldceq	3, cr5, [r0], -#992
        2e28b0:	0c1079a8 	ldceq	9, cr7, [r0], -#672
    */
}

/**
 * Symbol: UndefinedBytecode(void)
 * Address: 002f1cd0
 */
UndefinedBytecode(void) {
    /*
        2f1cd0:	e59f000c 	ldr	r0, [pc, #c]	; 2f1ce4 <UndefinedBytecode(void)+0x14>
        2f1cd4:	e5900000 	ldr	r0, [r0]
        2f1cd8:	e3a02000 	mov	r2, #0	; 0x0
        2f1cdc:	e59f1004 	ldr	r1, [pc, #4]	; 2f1ce8 <UndefinedBytecode(void)+0x18>
        2f1ce0:	ea63c52d 	b	1be319c <$Throw>
        2f1ce4:	00371300 	eoreqs	r1, r7, r0, lsl #6
        2f1ce8:	ffff415b 	swinv	0x00ff415b
    */
}

/**
 * Symbol: UserBoot(void)
 * Address: 002f70a4
 */
UserBoot(void) {
    /*
        2f70a4:	e1a0c00d 	mov	ip, sp
        2f70a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2f70ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f70b0:	eb639769 	bl	1bdce5c <$StaticInit__18TULockingSemaphoreSFv>
        2f70b4:	eb639767 	bl	1bdce58 <$StaticInit__15TURdWrSemaphoreSFv>
        2f70b8:	eb63a80b 	bl	1be10ec <$GetHeap>
        2f70bc:	eb63a7ef 	bl	1be1080 <$AddSemaphoreToHeap>
        2f70c0:	eb601b72 	bl	1afde90 <$InitMemArchObjs(void)>
        2f70c4:	eb601765 	bl	1afce60 <$InitDomainsAndEnvironments(void)>
        2f70c8:	e59f10b0 	ldr	r1, [pc, #b0]	; 2f7180 <UserBoot(void)+0xdc>
        2f70cc:	e59f00b0 	ldr	r0, [pc, #b0]	; 2f7184 <UserBoot(void)+0xe0>
        2f70d0:	eb636e0b 	bl	1bd2904 <$FindHeapRef__13MemObjManagerSFUlPPv>
        2f70d4:	eb601b74 	bl	1afdeac <$InitROMDomainManager(void)>
        2f70d8:	e3a00001 	mov	r0, #1	; 0x1
        2f70dc:	e59f10a4 	ldr	r1, [pc, #a4]	; 2f7188 <UserBoot(void)+0xe4>
        2f70e0:	e5c10000 	strb	r0, [r1]
        2f70e4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f70e8:	e1a0000d 	mov	r0, sp
        2f70ec:	eb639b66 	bl	1bdde8c <$Time__15TURealTimeAlarmSFv>
        2f70f0:	e1a0000d 	mov	r0, sp
        2f70f4:	e3a019e1 	mov	r1, #3686400	; 0x384000
        2f70f8:	eb6365cd 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
        2f70fc:	eb62fa66 	bl	1bb5a9c <$srand>
        2f7100:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f7104:	e3a00000 	mov	r0, #0	; 0x0
        2f7108:	e5cd0008 	strb	r0, [sp, #8]
        2f710c:	e58d0004 	str	r0, [sp, #4]
        2f7110:	e1a0100d 	mov	r1, sp
        2f7114:	e59f4070 	ldr	r4, [pc, #70]	; 2f718c <UserBoot(void)+0xe8>
        2f7118:	e1a00004 	mov	r0, r4
        2f711c:	eb636df7 	bl	1bd2900 <$FindEnvironmentId__13MemObjManagerSFUlPUl>
        2f7120:	e3300000 	teq	r0, #0	; 0x0
        2f7124:	1a00000d 	bne	2f7160 <UserBoot(void)+0xbc>
        2f7128:	e1a02004 	mov	r2, r4
        2f712c:	e3a0100a 	mov	r1, #10	; 0xa
        2f7130:	e3a00000 	mov	r0, #0	; 0x0
        2f7134:	e59d3000 	ldr	r3, [sp]
        2f7138:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2f713c:	e59f104c 	ldr	r1, [pc, #4c]	; 2f7190 <UserBoot(void)+0xec>
        2f7140:	e28d0014 	add	r0, sp, #20	; 0x14
        2f7144:	e3a03000 	mov	r3, #0	; 0x0
        2f7148:	e3a02b1a 	mov	r2, #26624	; 0x6800
        2f714c:	eb637a5d 	bl	1bd5ac8 <$Init__6TUTaskFPFPvUlT2_vUlT2PvN32>
        2f7150:	e28dd010 	add	sp, sp, #16	; 0x10
        2f7154:	e3300000 	teq	r0, #0	; 0x0
        2f7158:	028d0004 	addeq	r0, sp, #4	; 0x4
        2f715c:	0b639738 	bleq	1bdce44 <TUTask::$Start(void)>
        2f7160:	e28d0004 	add	r0, sp, #4	; 0x4
        2f7164:	e3a01000 	mov	r1, #0	; 0x0
        2f7168:	eb635d6d 	bl	1bce724 <TUObject::$__dt(void)>
        2f716c:	e59f0020 	ldr	r0, [pc, #20]	; 2f7194 <UserBoot(void)+0xf0>
        2f7170:	e5900000 	ldr	r0, [r0]
        2f7174:	e5900000 	ldr	r0, [r0]
        2f7178:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2f717c:	ea638ef9 	b	1bdad68 <$SetBequeathId(unsigned long)>
        2f7180:	0c10107c 	ldceq	0, cr1, [r0], -#496
        2f7184:	75736572 	ldrvcb	r6, [r3, -#1394]!
        2f7188:	0c10102c 	ldceq	0, cr1, [r0], -#176
        2f718c:	6b737276 	blvs	1fd3b6c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x3c3314>
        2f7190:	01afde80 	moveq	sp, r0, lsl #29
        2f7194:	0c100fc4 	ldceq	15, cr0, [r0], -#784
    */
}

/**
 * Symbol: UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)
 * Address: 002fb3fc
 */
UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char) {
    /*
        2fb3fc:	e1a0c00d 	mov	ip, sp
        2fb400:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2fb404:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fb408:	e20160ff 	and	r6, r1, #255	; 0xff
        2fb40c:	e24dd014 	sub	sp, sp, #20	; 0x14
        2fb410:	e5901008 	ldr	r1, [r0, #8]
        2fb414:	e5914000 	ldr	r4, [r1]
        2fb418:	e5905000 	ldr	r5, [r0]
        2fb41c:	e5d02014 	ldrb	r2, [r0, #20]
        2fb420:	e5b0a00c 	ldr	sl, [r0, #12]!
        2fb424:	e59a7038 	ldr	r7, [sl, #56]
        2fb428:	e59a9034 	ldr	r9, [sl, #52]
        2fb42c:	e5d50001 	ldrb	r0, [r5, #1]
        2fb430:	e3300006 	teq	r0, #6	; 0x6
        2fb434:	05d50002 	ldreqb	r0, [r5, #2]
        2fb438:	02000030 	andeq	r0, r0, #48	; 0x30
        2fb43c:	03300010 	teqeq	r0, #16	; 0x10
        2fb440:	0a000009 	beq	2fb46c <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x70>
        2fb444:	e594000c 	ldr	r0, [r4, #12]
        2fb448:	e5d01001 	ldrb	r1, [r0, #1]
        2fb44c:	e3310022 	teq	r1, #34	; 0x22
        2fb450:	05d00002 	ldreqb	r0, [r0, #2]
        2fb454:	02001030 	andeq	r1, r0, #48	; 0x30
        2fb458:	03310010 	teqeq	r1, #16	; 0x10
        2fb45c:	1a000004 	bne	2fb474 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x78>
        2fb460:	e200000f 	and	r0, r0, #15	; 0xf
        2fb464:	e350000d 	cmp	r0, #13	; 0xd
        2fb468:	ba000001 	blt	2fb474 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x78>
        2fb46c:	e3a00001 	mov	r0, #1	; 0x1
        2fb470:	ea000000 	b	2fb478 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x7c>
        2fb474:	e3a00000 	mov	r0, #0	; 0x0
        2fb478:	e5d41001 	ldrb	r1, [r4, #1]
        2fb47c:	e3310003 	teq	r1, #3	; 0x3
        2fb480:	03300000 	teqeq	r0, #0	; 0x0
        2fb484:	1a000007 	bne	2fb4a8 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0xac>
        2fb488:	e5d43000 	ldrb	r3, [r4]
        2fb48c:	e3330009 	teq	r3, #9	; 0x9
        2fb490:	13330006 	teqne	r3, #6	; 0x6
        2fb494:	1a000001 	bne	2fb4a0 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0xa4>
        2fb498:	e3560004 	cmp	r6, #4	; 0x4
        2fb49c:	da000001 	ble	2fb4a8 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0xac>
        2fb4a0:	e3a03001 	mov	r3, #1	; 0x1
        2fb4a4:	ea000000 	b	2fb4ac <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0xb0>
        2fb4a8:	e3a03000 	mov	r3, #0	; 0x0
        2fb4ac:	e3310009 	teq	r1, #9	; 0x9
        2fb4b0:	e58d3010 	str	r3, [sp, #16]
        2fb4b4:	03300000 	teqeq	r0, #0	; 0x0
        2fb4b8:	13a03000 	movne	r3, #0	; 0x0
        2fb4bc:	03a03001 	moveq	r3, #1	; 0x1
        2fb4c0:	e58d300c 	str	r3, [sp, #12]
        2fb4c4:	e3a03000 	mov	r3, #0	; 0x0
        2fb4c8:	e3310005 	teq	r1, #5	; 0x5
        2fb4cc:	e58d3008 	str	r3, [sp, #8]
        2fb4d0:	1a00000e 	bne	2fb510 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x114>
        2fb4d4:	e5d43002 	ldrb	r3, [r4, #2]
        2fb4d8:	e2033030 	and	r3, r3, #48	; 0x30
        2fb4dc:	e1330002 	teq	r3, r2
        2fb4e0:	0a000008 	beq	2fb508 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x10c>
        2fb4e4:	e595200c 	ldr	r2, [r5, #12]
        2fb4e8:	e592200c 	ldr	r2, [r2, #12]
        2fb4ec:	e3320000 	teq	r2, #0	; 0x0
        2fb4f0:	15d22001 	ldrneb	r2, [r2, #1]
        2fb4f4:	13320012 	teqne	r2, #18	; 0x12
        2fb4f8:	13320001 	teqne	r2, #1	; 0x1
        2fb4fc:	13320013 	teqne	r2, #19	; 0x13
        2fb500:	13320014 	teqne	r2, #20	; 0x14
        2fb504:	0a000001 	beq	2fb510 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x114>
        2fb508:	e3a08001 	mov	r8, #1	; 0x1
        2fb50c:	ea000000 	b	2fb514 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x118>
        2fb510:	e3a08000 	mov	r8, #0	; 0x0
        2fb514:	e3310009 	teq	r1, #9	; 0x9
        2fb518:	1a000003 	bne	2fb52c <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x130>
        2fb51c:	e3300000 	teq	r0, #0	; 0x0
        2fb520:	15d40003 	ldrneb	r0, [r4, #3]
        2fb524:	13800004 	orrne	r0, r0, #4	; 0x4
        2fb528:	15c40003 	strneb	r0, [r4, #3]
        2fb52c:	e1a0300d 	mov	r3, sp
        2fb530:	e92d0008 	stmdb	sp!, {r3}
        2fb534:	e5951006 	ldr	r1, [r5, #6]
        2fb538:	e1a01841 	mov	r1, r1, asr #16
        2fb53c:	e5940006 	ldr	r0, [r4, #6]
        2fb540:	e1a00840 	mov	r0, r0, asr #16
        2fb544:	e28d3008 	add	r3, sp, #8	; 0x8
        2fb548:	e1a02007 	mov	r2, r7
        2fb54c:	eb60ab83 	bl	1b26360 <$yMinMax__FiT1PsN23>
        2fb550:	e28dd004 	add	sp, sp, #4	; 0x4
        2fb554:	e59d0004 	ldr	r0, [sp, #4]
        2fb558:	e1a00840 	mov	r0, r0, asr #16
        2fb55c:	e240cc7f 	sub	ip, r0, #32512	; 0x7f00
        2fb560:	e33c00ff 	teq	ip, #255	; 0xff
        2fb564:	0a000024 	beq	2fb5fc <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x200>
        2fb568:	e5d40001 	ldrb	r0, [r4, #1]
        2fb56c:	e3300004 	teq	r0, #4	; 0x4
        2fb570:	1a00001f 	bne	2fb5f4 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x1f8>
        2fb574:	e3560005 	cmp	r6, #5	; 0x5
        2fb578:	ba00000d 	blt	2fb5b4 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x1b8>
        2fb57c:	e1a0100a 	mov	r1, sl
        2fb580:	e59d0004 	ldr	r0, [sp, #4]
        2fb584:	e1a00840 	mov	r0, r0, asr #16
        2fb588:	eb607de6 	bl	1b1ad28 <$HeightInLine(short, low_type *)>
        2fb58c:	e3500008 	cmp	r0, #8	; 0x8
        2fb590:	ca000015 	bgt	2fb5ec <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x1f0>
        2fb594:	e5940008 	ldr	r0, [r4, #8]
        2fb598:	e1a00840 	mov	r0, r0, asr #16
        2fb59c:	e7971080 	ldr	r1, [r7, r0, lsl #1]
        2fb5a0:	e1a01841 	mov	r1, r1, asr #16
        2fb5a4:	e59d0004 	ldr	r0, [sp, #4]
        2fb5a8:	e0610840 	rsb	r0, r1, r0, asr #16
        2fb5ac:	e350001e 	cmp	r0, #30	; 0x1e
        2fb5b0:	da00000d 	ble	2fb5ec <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x1f0>
        2fb5b4:	e3360003 	teq	r6, #3	; 0x3
        2fb5b8:	13360004 	teqne	r6, #4	; 0x4
        2fb5bc:	1a00000c 	bne	2fb5f4 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x1f8>
        2fb5c0:	e5940008 	ldr	r0, [r4, #8]
        2fb5c4:	e1a00840 	mov	r0, r0, asr #16
        2fb5c8:	e7970080 	ldr	r0, [r7, r0, lsl #1]
        2fb5cc:	e1a00840 	mov	r0, r0, asr #16
        2fb5d0:	e250cd9e 	subs	ip, r0, #10112	; 0x2780
        2fb5d4:	a35c0002 	cmpge	ip, #2	; 0x2
        2fb5d8:	ba000005 	blt	2fb5f4 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x1f8>
        2fb5dc:	e59d1004 	ldr	r1, [sp, #4]
        2fb5e0:	e0600841 	rsb	r0, r0, r1, asr #16
        2fb5e4:	e3500014 	cmp	r0, #20	; 0x14
        2fb5e8:	ca000001 	bgt	2fb5f4 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x1f8>
        2fb5ec:	e3a03001 	mov	r3, #1	; 0x1
        2fb5f0:	ea000000 	b	2fb5f8 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x1fc>
        2fb5f4:	e3a03000 	mov	r3, #0	; 0x0
        2fb5f8:	e58d3008 	str	r3, [sp, #8]
        2fb5fc:	e3380000 	teq	r8, #0	; 0x0
        2fb600:	0a00001a 	beq	2fb670 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x274>
        2fb604:	e24dd010 	sub	sp, sp, #16	; 0x10
        2fb608:	e28d3008 	add	r3, sp, #8	; 0x8
        2fb60c:	e92d0008 	stmdb	sp!, {r3}
        2fb610:	e5943006 	ldr	r3, [r4, #6]
        2fb614:	e1a03843 	mov	r3, r3, asr #16
        2fb618:	e5942004 	ldr	r2, [r4, #4]
        2fb61c:	e1a02842 	mov	r2, r2, asr #16
        2fb620:	e1a01007 	mov	r1, r7
        2fb624:	e1a00009 	mov	r0, r9
        2fb628:	eb60927d 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        2fb62c:	e28dd004 	add	sp, sp, #4	; 0x4
        2fb630:	e1a0300d 	mov	r3, sp
        2fb634:	e92d0008 	stmdb	sp!, {r3}
        2fb638:	e5953006 	ldr	r3, [r5, #6]
        2fb63c:	e1a03843 	mov	r3, r3, asr #16
        2fb640:	e5952004 	ldr	r2, [r5, #4]
        2fb644:	e1a02842 	mov	r2, r2, asr #16
        2fb648:	e1a01007 	mov	r1, r7
        2fb64c:	e1a00009 	mov	r0, r9
        2fb650:	eb609273 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        2fb654:	e28dd004 	add	sp, sp, #4	; 0x4
        2fb658:	e1a0100d 	mov	r1, sp
        2fb65c:	e28d0008 	add	r0, sp, #8	; 0x8
        2fb660:	e3a02000 	mov	r2, #0	; 0x0
        2fb664:	eb60af59 	bl	1b273d0 <$HardOverlapRect__FP5_RECTT1Ui>
        2fb668:	e1a08000 	mov	r8, r0
        2fb66c:	e28dd010 	add	sp, sp, #16	; 0x10
        2fb670:	e3560003 	cmp	r6, #3	; 0x3
        2fb674:	ba000018 	blt	2fb6dc <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x2e0>
        2fb678:	e3560007 	cmp	r6, #7	; 0x7
        2fb67c:	ca000016 	bgt	2fb6dc <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x2e0>
        2fb680:	e59d3008 	ldr	r3, [sp, #8]
        2fb684:	e3330000 	teq	r3, #0	; 0x0
        2fb688:	03380000 	teqeq	r8, #0	; 0x0
        2fb68c:	1a00001a 	bne	2fb6fc <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x300>
        2fb690:	e5d40001 	ldrb	r0, [r4, #1]
        2fb694:	e330001d 	teq	r0, #29	; 0x1d
        2fb698:	1330001e 	teqne	r0, #30	; 0x1e
        2fb69c:	1330001f 	teqne	r0, #31	; 0x1f
        2fb6a0:	13300020 	teqne	r0, #32	; 0x20
        2fb6a4:	1a000006 	bne	2fb6c4 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x2c8>
        2fb6a8:	e1a03005 	mov	r3, r5
        2fb6ac:	e1a02004 	mov	r2, r4
        2fb6b0:	e1a01007 	mov	r1, r7
        2fb6b4:	e1a00009 	mov	r0, r9
        2fb6b8:	eb60b350 	bl	1b28400 <$Is_8__FPsT1P9SPEC_TYPET3>
        2fb6bc:	e3300000 	teq	r0, #0	; 0x0
        2fb6c0:	0a00000d 	beq	2fb6fc <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x300>
        2fb6c4:	e5d40001 	ldrb	r0, [r4, #1]
        2fb6c8:	e3300015 	teq	r0, #21	; 0x15
        2fb6cc:	0a00000a 	beq	2fb6fc <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x300>
        2fb6d0:	e59d300c 	ldr	r3, [sp, #12]
        2fb6d4:	e3330000 	teq	r3, #0	; 0x0
        2fb6d8:	1a000007 	bne	2fb6fc <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x300>
        2fb6dc:	e3560009 	cmp	r6, #9	; 0x9
        2fb6e0:	ca000007 	bgt	2fb704 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x308>
        2fb6e4:	e5d40001 	ldrb	r0, [r4, #1]
        2fb6e8:	e330000a 	teq	r0, #10	; 0xa
        2fb6ec:	0a000002 	beq	2fb6fc <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x300>
        2fb6f0:	e59d3010 	ldr	r3, [sp, #16]
        2fb6f4:	e3330000 	teq	r3, #0	; 0x0
        2fb6f8:	0a000001 	beq	2fb704 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x308>
        2fb6fc:	e3a00001 	mov	r0, #1	; 0x1
        2fb700:	ea000000 	b	2fb708 <UpElemBeforeCircle(NxtPrvCircle_type *, unsigned char)+0x30c>
        2fb704:	e3a00000 	mov	r0, #0	; 0x0
        2fb708:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: UnlockRamParaData(unsigned long)
 * Address: 002fe530
 */
UnlockRamParaData(unsigned long) {
    /*
        2fe530:	e1a0c00d 	mov	ip, sp
        2fe534:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2fe538:	e24cb004 	sub	fp, ip, #4	; 0x4
        2fe53c:	e1a04000 	mov	r4, r0
        2fe540:	e24dd004 	sub	sp, sp, #4	; 0x4
        2fe544:	e3a00002 	mov	r0, #2	; 0x2
        2fe548:	eb630eff 	bl	1bc214c <$AllocateRefHandle(long)>
        2fe54c:	e3340001 	teq	r4, #1	; 0x1
        2fe550:	e58d0000 	str	r0, [sp]
        2fe554:	0a000014 	beq	2fe5ac <UnlockRamParaData(unsigned long)+0x7c>
        2fe558:	e3340002 	teq	r4, #2	; 0x2
        2fe55c:	0a000023 	beq	2fe5f0 <UnlockRamParaData(unsigned long)+0xc0>
        2fe560:	e3340003 	teq	r4, #3	; 0x3
        2fe564:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2fe568:	1a000040 	bne	2fe670 <UnlockRamParaData(unsigned long)+0x140>
        2fe56c:	e28f0f08 	add	r0, pc, #32	; 0x20
        2fe570:	eb631b42 	bl	1bc5280 <$Intern(char *)>
        2fe574:	eb630ef4 	bl	1bc214c <$AllocateRefHandle(long)>
        2fe578:	e58d0008 	str	r0, [sp, #8]
        2fe57c:	e28d0008 	add	r0, sp, #8	; 0x8
        2fe580:	eb60a38d 	bl	1b273bc <$GetGlobalParaDataRef(RefVar const &)>
        2fe584:	e59d100c 	ldr	r1, [sp, #12]
        2fe588:	e5810000 	str	r0, [r1]
        2fe58c:	e59d0008 	ldr	r0, [sp, #8]
        2fe590:	ea000020 	b	2fe618 <UnlockRamParaData(unsigned long)+0xe8>
        2fe594:	52616d50 	rsbpl	r6, r1, #5120	; 0x1400
        2fe598:	61726147 	cmnvs	r2, r7, asr #2
        2fe59c:	72617068 	rsbvc	r7, r1, #104	; 0x68
        2fe5a0:	54524941 	ldrplb	r4, [r2], -#2369
        2fe5a4:	3a504152 	bcc	170eaf4 <ROM$$Size+0xfeeea8>
        2fe5a8:	41000000 	tstmi	r0, r0
        2fe5ac:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2fe5b0:	e28f0f08 	add	r0, pc, #32	; 0x20
        2fe5b4:	eb631b31 	bl	1bc5280 <$Intern(char *)>
        2fe5b8:	eb630ee3 	bl	1bc214c <$AllocateRefHandle(long)>
        2fe5bc:	e58d0000 	str	r0, [sp]
        2fe5c0:	e1a0000d 	mov	r0, sp
        2fe5c4:	eb60a37c 	bl	1b273bc <$GetGlobalParaDataRef(RefVar const &)>
        2fe5c8:	e59d100c 	ldr	r1, [sp, #12]
        2fe5cc:	e5810000 	str	r0, [r1]
        2fe5d0:	e59d0000 	ldr	r0, [sp]
        2fe5d4:	ea00000f 	b	2fe618 <UnlockRamParaData(unsigned long)+0xe8>
        2fe5d8:	52616d50 	rsbpl	r6, r1, #5120	; 0x1400
        2fe5dc:	61726147 	cmnvs	r2, r7, asr #2
        2fe5e0:	72617068 	rsbvc	r7, r1, #104	; 0x68
        2fe5e4:	4454454d 	ldrmib	r4, [r4], -#1357
        2fe5e8:	3a504152 	bcc	170eb38 <ROM$$Size+0xfeeeec>
        2fe5ec:	41000000 	tstmi	r0, r0
        2fe5f0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2fe5f4:	e28f0f17 	add	r0, pc, #92	; 0x5c
        2fe5f8:	eb631b20 	bl	1bc5280 <$Intern(char *)>
        2fe5fc:	eb630ed2 	bl	1bc214c <$AllocateRefHandle(long)>
        2fe600:	e58d0004 	str	r0, [sp, #4]
        2fe604:	e28d0004 	add	r0, sp, #4	; 0x4
        2fe608:	eb60a36b 	bl	1b273bc <$GetGlobalParaDataRef(RefVar const &)>
        2fe60c:	e59d100c 	ldr	r1, [sp, #12]
        2fe610:	e5810000 	str	r0, [r1]
        2fe614:	e59d0004 	ldr	r0, [sp, #4]
        2fe618:	eb6312e7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2fe61c:	e5bd000c 	ldr	r0, [sp, #12]!
        2fe620:	e5900000 	ldr	r0, [r0]
        2fe624:	e3300002 	teq	r0, #2	; 0x2
        2fe628:	0a000005 	beq	2fe644 <UnlockRamParaData(unsigned long)+0x114>
        2fe62c:	e1a0000d 	mov	r0, sp
        2fe630:	eb641b22 	bl	1c052c0 <$IsBinary(RefVar const &)>
        2fe634:	e3300000 	teq	r0, #0	; 0x0
        2fe638:	159d0000 	ldrne	r0, [sp]
        2fe63c:	15900000 	ldrne	r0, [r0]
        2fe640:	1b63278a 	blne	1bc8470 <$UnlockRef(long)>
        2fe644:	e3a04001 	mov	r4, #1	; 0x1
        2fe648:	e59d0000 	ldr	r0, [sp]
        2fe64c:	eb6312da 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2fe650:	e1a00004 	mov	r0, r4
        2fe654:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2fe658:	52616d50 	rsbpl	r6, r1, #5120	; 0x1400
        2fe65c:	61726147 	cmnvs	r2, r7, asr #2
        2fe660:	72617068 	rsbvc	r7, r1, #104	; 0x68
        2fe664:	50504442 	subpls	r4, r0, r2, asr #8
        2fe668:	3a504152 	bcc	170ebb8 <ROM$$Size+0xfeef6c>
        2fe66c:	41000000 	tstmi	r0, r0
        2fe670:	e1a00004 	mov	r0, r4
        2fe674:	eb5dc44e 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        2fe678:	e1a04000 	mov	r4, r0
        2fe67c:	e59d000c 	ldr	r0, [sp, #12]
        2fe680:	eb6312cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2fe684:	e1a00004 	mov	r0, r4
        2fe688:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: UserMain(void)
 * Address: 0030bba8
 */
UserMain(void) {
    /*
        30bba8:	e1a0c00d 	mov	ip, sp
        30bbac:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        30bbb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        30bbb4:	e24dd094 	sub	sp, sp, #148	; 0x94
        30bbb8:	e1a0000d 	mov	r0, sp
        30bbbc:	eb6361a0 	bl	1be4244 <TAppWorld::$__ct(void)>
        30bbc0:	e59f0030 	ldr	r0, [pc, #30]	; 30bbf8 <UserMain(void)+0x50>
        30bbc4:	e58d0000 	str	r0, [sp]
        30bbc8:	e1a0000d 	mov	r0, sp
        30bbcc:	e3a03b0a 	mov	r3, #10240	; 0x2800
        30bbd0:	e3a02001 	mov	r2, #1	; 0x1
        30bbd4:	e59f1020 	ldr	r1, [pc, #20]	; 30bbfc <UserMain(void)+0x54>
        30bbd8:	e59dc000 	ldr	ip, [sp]
        30bbdc:	e1a0e00f 	mov	lr, pc
        30bbe0:	e28cf044 	add	pc, ip, #68	; 0x44
        30bbe4:	e1a0000d 	mov	r0, sp
        30bbe8:	e3a01000 	mov	r1, #0	; 0x0
        30bbec:	e1a0e00f 	mov	lr, pc
        30bbf0:	e59df000 	ldr	pc, [sp]
        30bbf4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        30bbf8:	0001ab2c 	andeq	sl, r1, ip, lsr #22
        30bbfc:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

/**
 * Symbol: UnmountStore(TStore *)
 * Address: 0030edb4
 */
UnmountStore(TStore *) {
    /*
        30edb4:	e1a0c00d 	mov	ip, sp
        30edb8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30edbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        30edc0:	e1a04000 	mov	r4, r0
        30edc4:	e24dd004 	sub	sp, sp, #4	; 0x4
        30edc8:	eb638ee1 	bl	1bf2954 <$ToObject(TStore *)>
        30edcc:	eb62ccde 	bl	1bc214c <$AllocateRefHandle(long)>
        30edd0:	e58d0000 	str	r0, [sp]
        30edd4:	e5900000 	ldr	r0, [r0]
        30edd8:	e3a05000 	mov	r5, #0	; 0x0
        30eddc:	e3300002 	teq	r0, #2	; 0x2
        30ede0:	0a00001c 	beq	30ee58 <UnmountStore(TStore *)+0xa4>
        30ede4:	e1a0100d 	mov	r1, sp
        30ede8:	e59f0028 	ldr	r0, [pc, #28]	; 30ee18 <UnmountStore(TStore *)+0x64>
        30edec:	ebfff9d1 	bl	30d538 <HandleCardStoreEvent__FRC6RefVarT1>
        30edf0:	e52d506c 	str	r5, [sp, -#108]!
        30edf4:	e28d0008 	add	r0, sp, #8	; 0x8
        30edf8:	eb628edd 	bl	1bb2974 <$setjmp>
        30edfc:	e3300000 	teq	r0, #0	; 0x0
        30ee00:	1a000005 	bne	30ee1c <UnmountStore(TStore *)+0x68>
        30ee04:	e1a0000d 	mov	r0, sp
        30ee08:	eb63449b 	bl	1be007c <$AddExceptionHandler>
        30ee0c:	e1a00004 	mov	r0, r4
        30ee10:	eb62dd44 	bl	1bc6328 <$RemoveTStore(TStore *)>
        30ee14:	ea00000c 	b	30ee4c <UnmountStore(TStore *)+0x98>
        30ee18:	00684898 	streqb	r4, [r8], -#136
        30ee1c:	e59d0060 	ldr	r0, [sp, #96]
        30ee20:	e59f1040 	ldr	r1, [pc, #40]	; 30ee68 <UnmountStore(TStore *)+0xb4>
        30ee24:	e5911000 	ldr	r1, [r1]
        30ee28:	eb6350d9 	bl	1be3194 <$Subexception>
        30ee2c:	e3300000 	teq	r0, #0	; 0x0
        30ee30:	0a000003 	beq	30ee44 <UnmountStore(TStore *)+0x90>
        30ee34:	e59d0064 	ldr	r0, [sp, #100]
        30ee38:	e280ccbb 	add	ip, r0, #47872	; 0xbb00
        30ee3c:	e37c008a 	cmn	ip, #138	; 0x8a
        30ee40:	0a000001 	beq	30ee4c <UnmountStore(TStore *)+0x98>
        30ee44:	e1a0000d 	mov	r0, sp
        30ee48:	eb634cc1 	bl	1be2154 <$NextHandler>
        30ee4c:	e1a0000d 	mov	r0, sp
        30ee50:	eb634898 	bl	1be10b8 <$ExitHandler>
        30ee54:	e28dd06c 	add	sp, sp, #108	; 0x6c
        30ee58:	e59d0000 	ldr	r0, [sp]
        30ee5c:	eb62d0d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30ee60:	e1a00005 	mov	r0, r5
        30ee64:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        30ee68:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: UserVisibleChar(unsigned short)
 * Address: 0030f6c8
 */
UserVisibleChar(unsigned short) {
    /*
        30f6c8:	e1a01800 	mov	r1, r0, lsl #16
        30f6cc:	e1a01821 	mov	r1, r1, lsr #16
        30f6d0:	e3a00000 	mov	r0, #0	; 0x0
        30f6d4:	e251ccf7 	subs	ip, r1, #63232	; 0xf700
        30f6d8:	a35c0021 	cmpge	ip, #33	; 0x21
        30f6dc:	ba000002 	blt	30f6ec <UserVisibleChar(unsigned short)+0x24>
        30f6e0:	e251ccf7 	subs	ip, r1, #63232	; 0xf700
        30f6e4:	a35c002f 	cmpge	ip, #47	; 0x2f
        30f6e8:	d1a0f00e 	movle	pc, lr
        30f6ec:	e3510020 	cmp	r1, #32	; 0x20
        30f6f0:	b1a0f00e 	movlt	pc, lr
        30f6f4:	e331007f 	teq	r1, #127	; 0x7f
        30f6f8:	13a00001 	movne	r0, #1	; 0x1
        30f6fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnscrambleMaster
 * Address: 003108ac
 */
void globals::UnscrambleMaster() {
    /*
        3108ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnlockRef(long)
 * Address: 0031b108
 */
UnlockRef(long) {
    /*
        31b108:	e1a0c00d 	mov	ip, sp
        31b10c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        31b110:	e24cb004 	sub	fp, ip, #4	; 0x4
        31b114:	eb62a876 	bl	1bc52f4 <$ObjectPtr(long)>
        31b118:	e5901000 	ldr	r1, [r0]
        31b11c:	e3110040 	tst	r1, #64	; 0x40
        31b120:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        31b124:	e5d01004 	ldrb	r1, [r0, #4]
        31b128:	e33100ff 	teq	r1, #255	; 0xff
        31b12c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        31b130:	e2801004 	add	r1, r0, #4	; 0x4
        31b134:	e5d12000 	ldrb	r2, [r1]
        31b138:	e2422001 	sub	r2, r2, #1	; 0x1
        31b13c:	e21220ff 	ands	r2, r2, #255	; 0xff
        31b140:	e5c12000 	strb	r2, [r1]
        31b144:	05901000 	ldreq	r1, [r0]
        31b148:	03c11010 	biceq	r1, r1, #16	; 0x10
        31b14c:	05801000 	streq	r1, [r0]
        31b150:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: Uriah(void)
 * Address: 0031c514
 */
Uriah(void) {
    /*
        31c514:	e59f0004 	ldr	r0, [pc, #4]	; 31c520 <Uriah(void)+0xc>
        31c518:	e5900000 	ldr	r0, [r0]
        31c51c:	ea5ca359 	b	1a45288 <TObjectHeap::$Uriah(void)>
        31c520:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: UriahBinaryObjects(int)
 * Address: 0031c524
 */
UriahBinaryObjects(int) {
    /*
        31c524:	e1a01000 	mov	r1, r0
        31c528:	e59f0004 	ldr	r0, [pc, #4]	; 31c534 <UriahBinaryObjects(int)+0x10>
        31c52c:	e5900000 	ldr	r0, [r0]
        31c530:	ea5ca355 	b	1a4528c <TObjectHeap::$UriahBinaryObjects(int)>
        31c534:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: UnlockRefArg(RefVar const &)
 * Address: 0031ca28
 */
UnlockRefArg(RefVar const &) {
    /*
        31ca28:	e5900000 	ldr	r0, [r0]
        31ca2c:	e5900000 	ldr	r0, [r0]
        31ca30:	ea62ae8e 	b	1bc8470 <$UnlockRef(long)>
    */
}

/**
 * Symbol: UndirtyObject(long)
 * Address: 0031cad8
 */
UndirtyObject(long) {
    /*
        31cad8:	e1a0c00d 	mov	ip, sp
        31cadc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        31cae0:	e24cb004 	sub	fp, ip, #4	; 0x4
        31cae4:	eb62a202 	bl	1bc52f4 <$ObjectPtr(long)>
        31cae8:	e5901000 	ldr	r1, [r0]
        31caec:	e3110040 	tst	r1, #64	; 0x40
        31caf0:	03c11080 	biceq	r1, r1, #128	; 0x80
        31caf4:	05801000 	streq	r1, [r0]
        31caf8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: UnsafeArrayLength(char *)
 * Address: 0031dabc
 */
UnsafeArrayLength(char *) {
    /*
        31dabc:	e5901000 	ldr	r1, [r0]
        31dac0:	e3e0000b 	mvn	r0, #11	; 0xb
        31dac4:	e0900421 	adds	r0, r0, r1, lsr #8
        31dac8:	42800003 	addmi	r0, r0, #3	; 0x3
        31dacc:	e1a00140 	mov	r0, r0, asr #2
        31dad0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnsafeGetFrameSlot__FlT1Pl
 * Address: 0031ebe4
 */
void globals::UnsafeGetFrameSlot() {
    /*
        31ebe4:	e1a0c00d 	mov	ip, sp
        31ebe8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31ebec:	e24cb004 	sub	fp, ip, #4	; 0x4
        31ebf0:	e1a05001 	mov	r5, r1
        31ebf4:	e1a04002 	mov	r4, r2
        31ebf8:	e59f1020 	ldr	r1, [pc, #20]	; 31ec20 <UnsafeGetFrameSlot__FlT1Pl+0x3c>
        31ebfc:	e5911000 	ldr	r1, [r1]
        31ec00:	e1300001 	teq	r0, r1
        31ec04:	1a000006 	bne	31ec24 <UnsafeGetFrameSlot__FlT1Pl+0x40>
        31ec08:	e1a00005 	mov	r0, r5
        31ec0c:	eb5cdb9c 	bl	1a55a84 <$GlobalFunctionLookup(long)>
        31ec10:	e2501002 	subs	r1, r0, #2	; 0x2
        31ec14:	13a01001 	movne	r1, #1	; 0x1
        31ec18:	e5841000 	str	r1, [r4]
        31ec1c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        31ec20:	0c10544c 	ldceq	4, cr5, [r0], -#304
        31ec24:	eb6299b2 	bl	1bc52f4 <$ObjectPtr(long)>
        31ec28:	e1a06000 	mov	r6, r0
        31ec2c:	e5900008 	ldr	r0, [r0, #8]
        31ec30:	e1a01005 	mov	r1, r5
        31ec34:	eb5c80c6 	bl	1a3ef54 <$FindOffset__FlT1>
        31ec38:	e3700001 	cmn	r0, #1	; 0x1
        31ec3c:	03a00000 	moveq	r0, #0	; 0x0
        31ec40:	05840000 	streq	r0, [r4]
        31ec44:	03a00002 	moveq	r0, #2	; 0x2
        31ec48:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        31ec4c:	e3a01001 	mov	r1, #1	; 0x1
        31ec50:	e0860100 	add	r0, r6, r0, lsl #2
        31ec54:	e5841000 	str	r1, [r4]
        31ec58:	e590000c 	ldr	r0, [r0, #12]
        31ec5c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: UpdateBoxWithXr(xrd_el_type *, xrd_el_type **, _RECT *, _POST_PARAMS *, unsigned int, int)
 * Address: 0033ad08
 */
UpdateBoxWithXr(xrd_el_type *, xrd_el_type **, _RECT *, _POST_PARAMS *, unsigned int, int) {
    /*
        33ad08:	e1a0c00d 	mov	ip, sp
        33ad0c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        33ad10:	e24cb004 	sub	fp, ip, #4	; 0x4
        33ad14:	e1a05000 	mov	r5, r0
        33ad18:	e1a07001 	mov	r7, r1
        33ad1c:	e1a04002 	mov	r4, r2
        33ad20:	e1a06003 	mov	r6, r3
        33ad24:	e59b8008 	ldr	r8, [fp, #8]
        33ad28:	e59b9004 	ldr	r9, [fp, #4]
        33ad2c:	eb5fb5c9 	bl	1b28458 <$X_IsBreak(xrd_el_type *)>
        33ad30:	e3300000 	teq	r0, #0	; 0x0
        33ad34:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        33ad38:	e3380001 	teq	r8, #1	; 0x1
        33ad3c:	0a000004 	beq	33ad54 <UpdateBoxWithXr(xrd_el_type *, xrd_el_type **, _RECT *, _POST_PARAMS *, unsigned int, int)+0x4c>
        33ad40:	e5d50000 	ldrb	r0, [r5]
        33ad44:	e3300034 	teq	r0, #52	; 0x34
        33ad48:	1330003a 	teqne	r0, #58	; 0x3a
        33ad4c:	1330003b 	teqne	r0, #59	; 0x3b
        33ad50:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        33ad54:	e5d50000 	ldrb	r0, [r5]
        33ad58:	e3300036 	teq	r0, #54	; 0x36
        33ad5c:	0a00000d 	beq	33ad98 <UpdateBoxWithXr(xrd_el_type *, xrd_el_type **, _RECT *, _POST_PARAMS *, unsigned int, int)+0x90>
        33ad60:	e5950010 	ldr	r0, [r5, #16]
        33ad64:	e1a00840 	mov	r0, r0, asr #16
        33ad68:	e5941002 	ldr	r1, [r4, #2]
        33ad6c:	e1500841 	cmp	r0, r1, asr #16
        33ad70:	b5c40003 	strltb	r0, [r4, #3]
        33ad74:	b1a00440 	movlt	r0, r0, asr #8
        33ad78:	b5c40002 	strltb	r0, [r4, #2]
        33ad7c:	e5950014 	ldr	r0, [r5, #20]
        33ad80:	e1a00840 	mov	r0, r0, asr #16
        33ad84:	e5941006 	ldr	r1, [r4, #6]
        33ad88:	e1500841 	cmp	r0, r1, asr #16
        33ad8c:	c5c40007 	strgtb	r0, [r4, #7]
        33ad90:	c1a00440 	movgt	r0, r0, asr #8
        33ad94:	c5c40006 	strgtb	r0, [r4, #6]
        33ad98:	e5950012 	ldr	r0, [r5, #18]
        33ad9c:	e1a00840 	mov	r0, r0, asr #16
        33ada0:	e5941004 	ldr	r1, [r4, #4]
        33ada4:	e1500841 	cmp	r0, r1, asr #16
        33ada8:	c5c40005 	strgtb	r0, [r4, #5]
        33adac:	c1a00440 	movgt	r0, r0, asr #8
        33adb0:	c5c40004 	strgtb	r0, [r4, #4]
        33adb4:	e595000e 	ldr	r0, [r5, #14]
        33adb8:	e1a00840 	mov	r0, r0, asr #16
        33adbc:	e5941000 	ldr	r1, [r4]
        33adc0:	e1500841 	cmp	r0, r1, asr #16
        33adc4:	b5c40001 	strltb	r0, [r4, #1]
        33adc8:	b1a00440 	movlt	r0, r0, asr #8
        33adcc:	b5c40000 	strltb	r0, [r4]
        33add0:	e3390000 	teq	r9, #0	; 0x0
        33add4:	0a00001c 	beq	33ae4c <UpdateBoxWithXr(xrd_el_type *, xrd_el_type **, _RECT *, _POST_PARAMS *, unsigned int, int)+0x144>
        33add8:	e3380000 	teq	r8, #0	; 0x0
        33addc:	1a00001a 	bne	33ae4c <UpdateBoxWithXr(xrd_el_type *, xrd_el_type **, _RECT *, _POST_PARAMS *, unsigned int, int)+0x144>
        33ade0:	e5970000 	ldr	r0, [r7]
        33ade4:	e3300000 	teq	r0, #0	; 0x0
        33ade8:	0a000017 	beq	33ae4c <UpdateBoxWithXr(xrd_el_type *, xrd_el_type **, _RECT *, _POST_PARAMS *, unsigned int, int)+0x144>
        33adec:	e590000c 	ldr	r0, [r0, #12]
        33adf0:	e1a00840 	mov	r0, r0, asr #16
        33adf4:	e595100a 	ldr	r1, [r5, #10]
        33adf8:	e1500841 	cmp	r0, r1, asr #16
        33adfc:	aa000012 	bge	33ae4c <UpdateBoxWithXr(xrd_el_type *, xrd_el_type **, _RECT *, _POST_PARAMS *, unsigned int, int)+0x144>
        33ae00:	e5961014 	ldr	r1, [r6, #20]
        33ae04:	e7911080 	ldr	r1, [r1, r0, lsl #1]
        33ae08:	e1a01841 	mov	r1, r1, asr #16
        33ae0c:	e3710001 	cmn	r1, #1	; 0x1
        33ae10:	0a000007 	beq	33ae34 <UpdateBoxWithXr(xrd_el_type *, xrd_el_type **, _RECT *, _POST_PARAMS *, unsigned int, int)+0x12c>
        33ae14:	e5961010 	ldr	r1, [r6, #16]
        33ae18:	e7911080 	ldr	r1, [r1, r0, lsl #1]
        33ae1c:	e1a01841 	mov	r1, r1, asr #16
        33ae20:	e5942000 	ldr	r2, [r4]
        33ae24:	e1510842 	cmp	r1, r2, asr #16
        33ae28:	b5c41001 	strltb	r1, [r4, #1]
        33ae2c:	b1a01441 	movlt	r1, r1, asr #8
        33ae30:	b5c41000 	strltb	r1, [r4]
        33ae34:	e2800001 	add	r0, r0, #1	; 0x1
        33ae38:	e1a00800 	mov	r0, r0, lsl #16
        33ae3c:	e1a00840 	mov	r0, r0, asr #16
        33ae40:	e595100a 	ldr	r1, [r5, #10]
        33ae44:	e1500841 	cmp	r0, r1, asr #16
        33ae48:	baffffec 	blt	33ae00 <UpdateBoxWithXr(xrd_el_type *, xrd_el_type **, _RECT *, _POST_PARAMS *, unsigned int, int)+0xf8>
        33ae4c:	e5875000 	str	r5, [r7]
        33ae50:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: UnionRect__FP4RectN21
 * Address: 00340d88
 */
void globals::UnionRect() {
    /*
        340d88:	e1a0c00d 	mov	ip, sp
        340d8c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        340d90:	e24cb004 	sub	fp, ip, #4	; 0x4
        340d94:	e1a06000 	mov	r6, r0
        340d98:	e1a05001 	mov	r5, r1
        340d9c:	e1a04002 	mov	r4, r2
        340da0:	eb60365c 	bl	1b4e718 <$EmptyRect(Rect *)>
        340da4:	e3300000 	teq	r0, #0	; 0x0
        340da8:	18955000 	ldmneia	r5, {ip, lr}
        340dac:	18845000 	stmneia	r4, {ip, lr}
        340db0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        340db4:	e1a00005 	mov	r0, r5
        340db8:	eb603656 	bl	1b4e718 <$EmptyRect(Rect *)>
        340dbc:	e3300000 	teq	r0, #0	; 0x0
        340dc0:	18965000 	ldmneia	r6, {ip, lr}
        340dc4:	18845000 	stmneia	r4, {ip, lr}
        340dc8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        340dcc:	e5961000 	ldr	r1, [r6]
        340dd0:	e1a01841 	mov	r1, r1, asr #16
        340dd4:	e5950000 	ldr	r0, [r5]
        340dd8:	e1a00840 	mov	r0, r0, asr #16
        340ddc:	e1510000 	cmp	r1, r0
        340de0:	b1a00001 	movlt	r0, r1
        340de4:	e5c40001 	strb	r0, [r4, #1]
        340de8:	e1a00440 	mov	r0, r0, asr #8
        340dec:	e5c40000 	strb	r0, [r4]
        340df0:	e5961002 	ldr	r1, [r6, #2]
        340df4:	e1a01841 	mov	r1, r1, asr #16
        340df8:	e5950002 	ldr	r0, [r5, #2]
        340dfc:	e1a00840 	mov	r0, r0, asr #16
        340e00:	e1510000 	cmp	r1, r0
        340e04:	b1a00001 	movlt	r0, r1
        340e08:	e5c40003 	strb	r0, [r4, #3]
        340e0c:	e1a00440 	mov	r0, r0, asr #8
        340e10:	e5c40002 	strb	r0, [r4, #2]
        340e14:	e5960004 	ldr	r0, [r6, #4]
        340e18:	e1a00840 	mov	r0, r0, asr #16
        340e1c:	e5951004 	ldr	r1, [r5, #4]
        340e20:	e1a01841 	mov	r1, r1, asr #16
        340e24:	e1500001 	cmp	r0, r1
        340e28:	d1a00001 	movle	r0, r1
        340e2c:	e5c40005 	strb	r0, [r4, #5]
        340e30:	e1a00440 	mov	r0, r0, asr #8
        340e34:	e5c40004 	strb	r0, [r4, #4]
        340e38:	e5960006 	ldr	r0, [r6, #6]
        340e3c:	e1a00840 	mov	r0, r0, asr #16
        340e40:	e5951006 	ldr	r1, [r5, #6]
        340e44:	e1a01841 	mov	r1, r1, asr #16
        340e48:	e1500001 	cmp	r0, r1
        340e4c:	d1a00001 	movle	r0, r1
        340e50:	e5c40007 	strb	r0, [r4, #7]
        340e54:	e1a00440 	mov	r0, r0, asr #8
        340e58:	e5c40006 	strb	r0, [r4, #6]
        340e5c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: UnionRgn__FPP6RegionN21
 * Address: 003411cc
 */
void globals::UnionRgn() {
    /*
        3411cc:	e1a03002 	mov	r3, r2
        3411d0:	e1a02001 	mov	r2, r1
        3411d4:	e1a01000 	mov	r1, r0
        3411d8:	e3a00004 	mov	r0, #4	; 0x4
        3411dc:	ea6024c9 	b	1b4a508 <$DoRgnOp__FlPP6RegionN22>
    */
}

/**
 * Symbol: UnionScan__FPsN21l
 * Address: 00341d00
 */
void globals::UnionScan() {
    /*
        341d00:	e1a0c00d 	mov	ip, sp
        341d04:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        341d08:	e24cb004 	sub	fp, ip, #4	; 0x4
        341d0c:	e3e03000 	mvn	r3, #0	; 0x0
        341d10:	e92d0008 	stmdb	sp!, {r3}
        341d14:	eb602a3d 	bl	1b4c610 <$ShareScan__FPsN21lT4>
        341d18:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: UpdateTagsIndex__FRC6RefVarN31Ul
 * Address: 00348074
 */
void globals::UpdateTagsIndex() {
    /*
        348074:	e1a0c00d 	mov	ip, sp
        348078:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        34807c:	e24cb004 	sub	fp, ip, #4	; 0x4
        348080:	e1a05000 	mov	r5, r0
        348084:	e1a04001 	mov	r4, r1
        348088:	e1a07002 	mov	r7, r2
        34808c:	e1a06003 	mov	r6, r3
        348090:	e59b8004 	ldr	r8, [fp, #4]
        348094:	e24dd00c 	sub	sp, sp, #12	; 0xc
        348098:	e5910000 	ldr	r0, [r1]
        34809c:	e5900000 	ldr	r0, [r0]
        3480a0:	e59f1078 	ldr	r1, [pc, #78]	; 348120 <UpdateTagsIndex__FRC6RefVarN31Ul+0xac>
        3480a4:	e5911000 	ldr	r1, [r1]
        3480a8:	e5911000 	ldr	r1, [r1]
        3480ac:	eb61f06b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3480b0:	eb61e825 	bl	1bc214c <$AllocateRefHandle(long)>
        3480b4:	e58d0008 	str	r0, [sp, #8]
        3480b8:	e28d1008 	add	r1, sp, #8	; 0x8
        3480bc:	e1a00007 	mov	r0, r7
        3480c0:	eb5bdfbe 	bl	1a3ffc0 <$GetEntryKey__FRC6RefVarT1>
        3480c4:	eb61e820 	bl	1bc214c <$AllocateRefHandle(long)>
        3480c8:	e58d0004 	str	r0, [sp, #4]
        3480cc:	e28d1008 	add	r1, sp, #8	; 0x8
        3480d0:	e1a00006 	mov	r0, r6
        3480d4:	eb5bdfb9 	bl	1a3ffc0 <$GetEntryKey__FRC6RefVarT1>
        3480d8:	eb61e81b 	bl	1bc214c <$AllocateRefHandle(long)>
        3480dc:	e58d0000 	str	r0, [sp]
        3480e0:	e59d0004 	ldr	r0, [sp, #4]
        3480e4:	e5900000 	ldr	r0, [r0]
        3480e8:	e3a06000 	mov	r6, #0	; 0x0
        3480ec:	e3300002 	teq	r0, #2	; 0x2
        3480f0:	059d0000 	ldreq	r0, [sp]
        3480f4:	05900000 	ldreq	r0, [r0]
        3480f8:	03300002 	teqeq	r0, #2	; 0x2
        3480fc:	1a000008 	bne	348124 <UpdateTagsIndex__FRC6RefVarN31Ul+0xb0>
        348100:	e59d0000 	ldr	r0, [sp]
        348104:	eb61ec2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        348108:	e59d0004 	ldr	r0, [sp, #4]
        34810c:	eb61ec2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        348110:	e59d0008 	ldr	r0, [sp, #8]
        348114:	eb61ec28 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        348118:	e1a00006 	mov	r0, r6
        34811c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        348120:	00683d70 	rsbeq	r3, r8, r0, ror sp
        348124:	e24dd0a4 	sub	sp, sp, #164	; 0xa4
        348128:	e5940000 	ldr	r0, [r4]
        34812c:	e5900000 	ldr	r0, [r0]
        348130:	e59f1178 	ldr	r1, [pc, #178]	; 3482b0 <UpdateTagsIndex__FRC6RefVarN31Ul+0x23c>
        348134:	e5911000 	ldr	r1, [r1]
        348138:	e5911000 	ldr	r1, [r1]
        34813c:	eb61f047 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        348140:	eb61e801 	bl	1bc214c <$AllocateRefHandle(long)>
        348144:	e58d00a0 	str	r0, [sp, #160]
        348148:	e5cd6051 	strb	r6, [sp, #81]
        34814c:	e5cd6050 	strb	r6, [sp, #80]
        348150:	e5cd6001 	strb	r6, [sp, #1]
        348154:	e5cd6000 	strb	r6, [sp]
        348158:	e59d00a8 	ldr	r0, [sp, #168]
        34815c:	e5900000 	ldr	r0, [r0]
        348160:	e3300002 	teq	r0, #2	; 0x2
        348164:	0a000003 	beq	348178 <UpdateTagsIndex__FRC6RefVarN31Ul+0x104>
        348168:	e28d2050 	add	r2, sp, #80	; 0x50
        34816c:	e28d10a8 	add	r1, sp, #168	; 0xa8
        348170:	e28d00a0 	add	r0, sp, #160	; 0xa0
        348174:	eb5c00a3 	bl	1a48408 <$EncodeTags__FRC6RefVarT1P8TagsBits>
        348178:	e59d00a4 	ldr	r0, [sp, #164]
        34817c:	e5900000 	ldr	r0, [r0]
        348180:	e3300002 	teq	r0, #2	; 0x2
        348184:	0a00000c 	beq	3481bc <UpdateTagsIndex__FRC6RefVarN31Ul+0x148>
        348188:	e1a0200d 	mov	r2, sp
        34818c:	e28d10a4 	add	r1, sp, #164	; 0xa4
        348190:	e28d00a0 	add	r0, sp, #160	; 0xa0
        348194:	eb5c009b 	bl	1a48408 <$EncodeTags__FRC6RefVarT1P8TagsBits>
        348198:	e3300000 	teq	r0, #0	; 0x0
        34819c:	1a000006 	bne	3481bc <UpdateTagsIndex__FRC6RefVarN31Ul+0x148>
        3481a0:	e28d10a4 	add	r1, sp, #164	; 0xa4
        3481a4:	e1a00005 	mov	r0, r5
        3481a8:	eb5c1128 	bl	1a4c650 <$PlainSoupAddTags>
        3481ac:	e1a0200d 	mov	r2, sp
        3481b0:	e28d10a4 	add	r1, sp, #164	; 0xa4
        3481b4:	e28d00a0 	add	r0, sp, #160	; 0xa0
        3481b8:	eb5c0092 	bl	1a48408 <$EncodeTags__FRC6RefVarT1P8TagsBits>
        3481bc:	e1a0100d 	mov	r1, sp
        3481c0:	e28d0050 	add	r0, sp, #80	; 0x50
        3481c4:	ebfe8c55 	bl	2eb320 <SKey::Equals( const(SKey const &))>
        3481c8:	e3300000 	teq	r0, #0	; 0x0
        3481cc:	1a00003a 	bne	3482bc <UpdateTagsIndex__FRC6RefVarN31Ul+0x248>
        3481d0:	e24dd050 	sub	sp, sp, #80	; 0x50
        3481d4:	e5940000 	ldr	r0, [r4]
        3481d8:	e5900000 	ldr	r0, [r0]
        3481dc:	e59f10d0 	ldr	r1, [pc, #d0]	; 3482b4 <UpdateTagsIndex__FRC6RefVarN31Ul+0x240>
        3481e0:	e5911000 	ldr	r1, [r1]
        3481e4:	e5911000 	ldr	r1, [r1]
        3481e8:	eb61f01c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3481ec:	e3100003 	tst	r0, #3	; 0x3
        3481f0:	01a00140 	moveq	r0, r0, asr #2
        3481f4:	0a000000 	beq	3481fc <UpdateTagsIndex__FRC6RefVarN31Ul+0x188>
        3481f8:	eb61e7c7 	bl	1bc211c <$_RINTError(long)>
        3481fc:	e1a01000 	mov	r1, r0
        348200:	e1a00005 	mov	r0, r5
        348204:	eb5c110a 	bl	1a4c634 <$GetSoupIndexObject(RefVar const &, unsigned long)>
        348208:	e1a04000 	mov	r4, r0
        34820c:	e5cd6001 	strb	r6, [sp, #1]
        348210:	e5cd6000 	strb	r6, [sp]
        348214:	e1a01008 	mov	r1, r8
        348218:	e1a0000d 	mov	r0, sp
        34821c:	ebfe8527 	bl	2e96c0 <SKey::operator=(long)>
        348220:	e59d00a2 	ldr	r0, [sp, #162]
        348224:	e31000ff 	tst	r0, #255	; 0xff
        348228:	0a000005 	beq	348244 <UpdateTagsIndex__FRC6RefVarN31Ul+0x1d0>
        34822c:	e28d20a0 	add	r2, sp, #160	; 0xa0
        348230:	e1a0100d 	mov	r1, sp
        348234:	e1a00004 	mov	r0, r4
        348238:	eb61ebdb 	bl	1bc31ac <TSoupIndex::$Delete(SKey *, SKey *)>
        34823c:	e3300000 	teq	r0, #0	; 0x0
        348240:	1a000006 	bne	348260 <UpdateTagsIndex__FRC6RefVarN31Ul+0x1ec>
        348244:	e59d0052 	ldr	r0, [sp, #82]
        348248:	e31000ff 	tst	r0, #255	; 0xff
        34824c:	0a00000c 	beq	348284 <UpdateTagsIndex__FRC6RefVarN31Ul+0x210>
        348250:	e28d2050 	add	r2, sp, #80	; 0x50
        348254:	e1a0100d 	mov	r1, sp
        348258:	e1a00004 	mov	r0, r4
        34825c:	eb61e7b0 	bl	1bc2124 <TSoupIndex::$Add(SKey *, SKey *)>
        348260:	e3500000 	cmp	r0, #0	; 0x0
        348264:	0a000006 	beq	348284 <UpdateTagsIndex__FRC6RefVarN31Ul+0x210>
        348268:	c3a0006a 	movgt	r0, #106	; 0x6a
        34826c:	c2400b2f 	subgt	r0, r0, #48128	; 0xbc00
        348270:	e1a01000 	mov	r1, r0
        348274:	e59f003c 	ldr	r0, [pc, #3c]	; 3482b8 <UpdateTagsIndex__FRC6RefVarN31Ul+0x244>
        348278:	e5900000 	ldr	r0, [r0]
        34827c:	e3a02000 	mov	r2, #0	; 0x0
        348280:	eb626bc5 	bl	1be319c <$Throw>
        348284:	e3a04001 	mov	r4, #1	; 0x1
        348288:	e59d00f0 	ldr	r0, [sp, #240]
        34828c:	eb61ebca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        348290:	e59d00f4 	ldr	r0, [sp, #244]
        348294:	eb61ebc8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        348298:	e59d00f8 	ldr	r0, [sp, #248]
        34829c:	eb61ebc6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3482a0:	e59d00fc 	ldr	r0, [sp, #252]
        3482a4:	eb61ebc4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3482a8:	e1a00004 	mov	r0, r4
        3482ac:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        3482b0:	00684a48 	rsbeq	r4, r8, r8, asr #20
        3482b4:	006831c0 	rsbeq	r3, r8, r0, asr #3
        3482b8:	003712fc 	ldreqsh	r1, [r7], -ip
        3482bc:	e59d00a0 	ldr	r0, [sp, #160]
        3482c0:	eb61ebbd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3482c4:	e59d00a4 	ldr	r0, [sp, #164]
        3482c8:	eb61ebbb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3482cc:	e1a04006 	mov	r4, r6
        3482d0:	e59d00a8 	ldr	r0, [sp, #168]
        3482d4:	eb61ebb8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3482d8:	e59d00ac 	ldr	r0, [sp, #172]
        3482dc:	eb61ebb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3482e0:	e1a00004 	mov	r0, r4
        3482e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: UpdateIndexes__FRC6RefVarN21UlPUc
 * Address: 003482e8
 */
void globals::UpdateIndexes() {
    /*
        3482e8:	e1a0c00d 	mov	ip, sp
        3482ec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        3482f0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3482f4:	e24cb014 	sub	fp, ip, #20	; 0x14
        3482f8:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        3482fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        348300:	e59b0004 	ldr	r0, [fp, #4]
        348304:	e5900000 	ldr	r0, [r0]
        348308:	e5900000 	ldr	r0, [r0]
        34830c:	e59f10e4 	ldr	r1, [pc, #e4]	; 3483f8 <UpdateIndexes__FRC6RefVarN21UlPUc+0x110>
        348310:	e5911000 	ldr	r1, [r1]
        348314:	e5911000 	ldr	r1, [r1]
        348318:	eb61efd0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        34831c:	e59f10d8 	ldr	r1, [pc, #d8]	; 3483fc <UpdateIndexes__FRC6RefVarN21UlPUc+0x114>
        348320:	e5911000 	ldr	r1, [r1]
        348324:	e5911000 	ldr	r1, [r1]
        348328:	eb61efcc 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        34832c:	eb61e786 	bl	1bc214c <$AllocateRefHandle(long)>
        348330:	e1a04000 	mov	r4, r0
        348334:	e24dd0a4 	sub	sp, sp, #164	; 0xa4
        348338:	e3a00002 	mov	r0, #2	; 0x2
        34833c:	eb61e782 	bl	1bc214c <$AllocateRefHandle(long)>
        348340:	e58d00a0 	str	r0, [sp, #160]
        348344:	e3a00000 	mov	r0, #0	; 0x0
        348348:	e5cd0051 	strb	r0, [sp, #81]
        34834c:	e5cd0050 	strb	r0, [sp, #80]
        348350:	e5cd0001 	strb	r0, [sp, #1]
        348354:	e5cd0000 	strb	r0, [sp]
        348358:	e3a0a000 	mov	sl, #0	; 0x0
        34835c:	e3a00002 	mov	r0, #2	; 0x2
        348360:	eb61e779 	bl	1bc214c <$AllocateRefHandle(long)>
        348364:	e1a05000 	mov	r5, r0
        348368:	e5940000 	ldr	r0, [r4]
        34836c:	eb61f3ce 	bl	1bc52ac <$Length(long)>
        348370:	e2507001 	subs	r7, r0, #1	; 0x1
        348374:	4a000080 	bmi	34857c <UpdateIndexes__FRC6RefVarN21UlPUc+0x294>
        348378:	e59f0080 	ldr	r0, [pc, #80]	; 348400 <UpdateIndexes__FRC6RefVarN21UlPUc+0x118>
        34837c:	e58d00a4 	str	r0, [sp, #164]
        348380:	e1a01007 	mov	r1, r7
        348384:	e5940000 	ldr	r0, [r4]
        348388:	eb61efb1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        34838c:	e59d10a0 	ldr	r1, [sp, #160]
        348390:	e5810000 	str	r0, [r1]
        348394:	e59f1068 	ldr	r1, [pc, #68]	; 348404 <UpdateIndexes__FRC6RefVarN21UlPUc+0x11c>
        348398:	e5911000 	ldr	r1, [r1]
        34839c:	e5911000 	ldr	r1, [r1]
        3483a0:	eb61efae 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3483a4:	e5850000 	str	r0, [r5]
        3483a8:	e59f1058 	ldr	r1, [pc, #58]	; 348408 <UpdateIndexes__FRC6RefVarN21UlPUc+0x120>
        3483ac:	e5911000 	ldr	r1, [r1]
        3483b0:	e5911000 	ldr	r1, [r1]
        3483b4:	eb61ef9d 	bl	1bc4230 <$EQRef__FlT1>
        3483b8:	e3300000 	teq	r0, #0	; 0x0
        3483bc:	0a000012 	beq	34840c <UpdateIndexes__FRC6RefVarN21UlPUc+0x124>
        3483c0:	e59b0014 	ldr	r0, [fp, #20]
        3483c4:	e5d00000 	ldrb	r0, [r0]
        3483c8:	e3300000 	teq	r0, #0	; 0x0
        3483cc:	0a000068 	beq	348574 <UpdateIndexes__FRC6RefVarN21UlPUc+0x28c>
        3483d0:	e59b3010 	ldr	r3, [fp, #16]
        3483d4:	e92d0008 	stmdb	sp!, {r3}
        3483d8:	e28d10a4 	add	r1, sp, #164	; 0xa4
        3483dc:	e99b0009 	ldmib	fp, {r0, r3}
        3483e0:	e59b200c 	ldr	r2, [fp, #12]
        3483e4:	eb5c1088 	bl	1a4c60c <$UpdateTagsIndex__FRC6RefVarN31Ul>
        3483e8:	e28dd004 	add	sp, sp, #4	; 0x4
        3483ec:	e59b1014 	ldr	r1, [fp, #20]
        3483f0:	e5c10000 	strb	r0, [r1]
        3483f4:	ea00005e 	b	348574 <UpdateIndexes__FRC6RefVarN21UlPUc+0x28c>
        3483f8:	00685390 	streqb	r5, [r8], -#48
        3483fc:	006831c8 	rsbeq	r3, r8, r8, asr #3
        348400:	003712fc 	ldreqsh	r1, [r7], -ip
        348404:	00684cb0 	streqh	r4, [r8], -#192
        348408:	00684a48 	rsbeq	r4, r8, r8, asr #20
        34840c:	e24dd004 	sub	sp, sp, #4	; 0x4
        348410:	e1a0300d 	mov	r3, sp
        348414:	e28d2054 	add	r2, sp, #84	; 0x54
        348418:	e28d10a4 	add	r1, sp, #164	; 0xa4
        34841c:	e59b0008 	ldr	r0, [fp, #8]
        348420:	eb5c14a6 	bl	1a4d6c0 <$GetEntrySKey__FRC6RefVarT1P4SKeyPUc>
        348424:	e1a08000 	mov	r8, r0
        348428:	e28d2004 	add	r2, sp, #4	; 0x4
        34842c:	e28d10a4 	add	r1, sp, #164	; 0xa4
        348430:	e3a03000 	mov	r3, #0	; 0x0
        348434:	e59b000c 	ldr	r0, [fp, #12]
        348438:	eb5c14a0 	bl	1a4d6c0 <$GetEntrySKey__FRC6RefVarT1P4SKeyPUc>
        34843c:	e1a06000 	mov	r6, r0
        348440:	e3580000 	cmp	r8, #0	; 0x0
        348444:	1a000002 	bne	348454 <UpdateIndexes__FRC6RefVarN21UlPUc+0x16c>
        348448:	e3360000 	teq	r6, #0	; 0x0
        34844c:	0a000047 	beq	348570 <UpdateIndexes__FRC6RefVarN21UlPUc+0x288>
        348450:	ea000020 	b	3484d8 <UpdateIndexes__FRC6RefVarN21UlPUc+0x1f0>
        348454:	13360000 	teqne	r6, #0	; 0x0
        348458:	0a00001e 	beq	3484d8 <UpdateIndexes__FRC6RefVarN21UlPUc+0x1f0>
        34845c:	e5dd0000 	ldrb	r0, [sp]
        348460:	e3300000 	teq	r0, #0	; 0x0
        348464:	0a000005 	beq	348480 <UpdateIndexes__FRC6RefVarN21UlPUc+0x198>
        348468:	e28d1004 	add	r1, sp, #4	; 0x4
        34846c:	e28d0054 	add	r0, sp, #84	; 0x54
        348470:	ebfe8baa 	bl	2eb320 <SKey::Equals( const(SKey const &))>
        348474:	e3300000 	teq	r0, #0	; 0x0
        348478:	1a00003c 	bne	348570 <UpdateIndexes__FRC6RefVarN21UlPUc+0x288>
        34847c:	ea000015 	b	3484d8 <UpdateIndexes__FRC6RefVarN21UlPUc+0x1f0>
        348480:	e5950000 	ldr	r0, [r5]
        348484:	e59f1030 	ldr	r1, [pc, #30]	; 3484bc <UpdateIndexes__FRC6RefVarN21UlPUc+0x1d4>
        348488:	e5911000 	ldr	r1, [r1]
        34848c:	e5911000 	ldr	r1, [r1]
        348490:	eb61ef66 	bl	1bc4230 <$EQRef__FlT1>
        348494:	e3300000 	teq	r0, #0	; 0x0
        348498:	e28d0054 	add	r0, sp, #84	; 0x54
        34849c:	0a000007 	beq	3484c0 <UpdateIndexes__FRC6RefVarN21UlPUc+0x1d8>
        3484a0:	ebfe8a51 	bl	2eadec <SKey::operator double( const(void))>
        3484a4:	ee00c180 	mvfd	f4, f0
        3484a8:	e28d0004 	add	r0, sp, #4	; 0x4
        3484ac:	ebfe8a4e 	bl	2eadec <SKey::operator double( const(void))>
        3484b0:	ee94f110 	cmf	f4, f0
        3484b4:	0a00002d 	beq	348570 <UpdateIndexes__FRC6RefVarN21UlPUc+0x288>
        3484b8:	ea000006 	b	3484d8 <UpdateIndexes__FRC6RefVarN21UlPUc+0x1f0>
        3484bc:	00684118 	rsbeq	r4, r8, r8, lsl r1
        3484c0:	ebfe8620 	bl	2e9d48 <SKey::operator long( const(void))>
        3484c4:	e1a09000 	mov	r9, r0
        3484c8:	e28d0004 	add	r0, sp, #4	; 0x4
        3484cc:	ebfe861d 	bl	2e9d48 <SKey::operator long( const(void))>
        3484d0:	e1390000 	teq	r9, r0
        3484d4:	0a000025 	beq	348570 <UpdateIndexes__FRC6RefVarN21UlPUc+0x288>
        3484d8:	e3a0a001 	mov	sl, #1	; 0x1
        3484dc:	e59d00a4 	ldr	r0, [sp, #164]
        3484e0:	e5900000 	ldr	r0, [r0]
        3484e4:	e59f10b4 	ldr	r1, [pc, #b4]	; 3485a0 <UpdateIndexes__FRC6RefVarN21UlPUc+0x2b8>
        3484e8:	e5911000 	ldr	r1, [r1]
        3484ec:	e5911000 	ldr	r1, [r1]
        3484f0:	eb61ef5a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        3484f4:	e3100003 	tst	r0, #3	; 0x3
        3484f8:	01a00140 	moveq	r0, r0, asr #2
        3484fc:	0a000000 	beq	348504 <UpdateIndexes__FRC6RefVarN21UlPUc+0x21c>
        348500:	eb61e705 	bl	1bc211c <$_RINTError(long)>
        348504:	e1a01000 	mov	r1, r0
        348508:	e59b0004 	ldr	r0, [fp, #4]
        34850c:	eb5c1048 	bl	1a4c634 <$GetSoupIndexObject(RefVar const &, unsigned long)>
        348510:	e1a09000 	mov	r9, r0
        348514:	e3360000 	teq	r6, #0	; 0x0
        348518:	0a000005 	beq	348534 <UpdateIndexes__FRC6RefVarN21UlPUc+0x24c>
        34851c:	e28b2010 	add	r2, fp, #16	; 0x10
        348520:	e28d1004 	add	r1, sp, #4	; 0x4
        348524:	e1a00009 	mov	r0, r9
        348528:	eb61eb1f 	bl	1bc31ac <TSoupIndex::$Delete(SKey *, SKey *)>
        34852c:	e3300000 	teq	r0, #0	; 0x0
        348530:	1a000005 	bne	34854c <UpdateIndexes__FRC6RefVarN21UlPUc+0x264>
        348534:	e3380000 	teq	r8, #0	; 0x0
        348538:	0a00000c 	beq	348570 <UpdateIndexes__FRC6RefVarN21UlPUc+0x288>
        34853c:	e28b2010 	add	r2, fp, #16	; 0x10
        348540:	e28d1054 	add	r1, sp, #84	; 0x54
        348544:	e1a00009 	mov	r0, r9
        348548:	eb61e6f5 	bl	1bc2124 <TSoupIndex::$Add(SKey *, SKey *)>
        34854c:	e3500000 	cmp	r0, #0	; 0x0
        348550:	0a000006 	beq	348570 <UpdateIndexes__FRC6RefVarN21UlPUc+0x288>
        348554:	c3a0006a 	movgt	r0, #106	; 0x6a
        348558:	c2400b2f 	subgt	r0, r0, #48128	; 0xbc00
        34855c:	e1a01000 	mov	r1, r0
        348560:	e59d00a8 	ldr	r0, [sp, #168]
        348564:	e5900000 	ldr	r0, [r0]
        348568:	e3a02000 	mov	r2, #0	; 0x0
        34856c:	eb626b0a 	bl	1be319c <$Throw>
        348570:	e28dd004 	add	sp, sp, #4	; 0x4
        348574:	e2577001 	subs	r7, r7, #1	; 0x1
        348578:	5affff80 	bpl	348380 <UpdateIndexes__FRC6RefVarN21UlPUc+0x98>
        34857c:	e1a00005 	mov	r0, r5
        348580:	eb61eb0d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        348584:	e59d00a0 	ldr	r0, [sp, #160]
        348588:	eb61eb0b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34858c:	e1a00004 	mov	r0, r4
        348590:	eb61eb09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        348594:	e1a0000a 	mov	r0, sl
        348598:	ed1bc20d 	lfm	f4, 1, [fp, -#52]
        34859c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3485a0:	006831c0 	rsbeq	r3, r8, r0, asr #3
    */
}

/**
 * Symbol: ungetc
 * Address: 0034f7fc
 */
void globals::ungetc() {
    /*
        34f7fc:	e3700001 	cmn	r0, #1	; 0x1
        34f800:	0a000002 	beq	34f810 <ungetc+0x14>
        34f804:	e591200c 	ldr	r2, [r1, #12]
        34f808:	e3120a82 	tst	r2, #532480	; 0x82000
        34f80c:	0a000001 	beq	34f818 <ungetc+0x1c>
        34f810:	e3e00000 	mvn	r0, #0	; 0x0
        34f814:	e1a0f00e 	mov	pc, lr
        34f818:	e5c10025 	strb	r0, [r1, #37]
        34f81c:	e3c22040 	bic	r2, r2, #64	; 0x40
        34f820:	e3822501 	orr	r2, r2, #4194304	; 0x400000
        34f824:	e3822a81 	orr	r2, r2, #528384	; 0x81000
        34f828:	e581200c 	str	r2, [r1, #12]
        34f82c:	e5912008 	ldr	r2, [r1, #8]
        34f830:	e5812038 	str	r2, [r1, #56]
        34f834:	e5912000 	ldr	r2, [r1]
        34f838:	e5812034 	str	r2, [r1, #52]
        34f83c:	e3a02000 	mov	r2, #0	; 0x0
        34f840:	e5812008 	str	r2, [r1, #8]
        34f844:	e5812000 	str	r2, [r1]
        34f848:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: UnpackSmallRect(long)
 * Address: 0035618c
 */
UnpackSmallRect(long) {
    /*
        35618c:	e1a0c00d 	mov	ip, sp
        356190:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        356194:	e24cb004 	sub	fp, ip, #4	; 0x4
        356198:	e1a04000 	mov	r4, r0
        35619c:	e24dd008 	sub	sp, sp, #8	; 0x8
        3561a0:	e59f00c0 	ldr	r0, [pc, #c0]	; 356268 <UnpackSmallRect(long)+0xdc>
        3561a4:	eb61aff0 	bl	1bc216c <$Clone(RefVar const &)>
        3561a8:	eb61afe7 	bl	1bc214c <$AllocateRefHandle(long)>
        3561ac:	e58d0004 	str	r0, [sp, #4]
        3561b0:	e3a00002 	mov	r0, #2	; 0x2
        3561b4:	eb61afe4 	bl	1bc214c <$AllocateRefHandle(long)>
        3561b8:	e58d0000 	str	r0, [sp]
        3561bc:	e20400ff 	and	r0, r4, #255	; 0xff
        3561c0:	e1a00100 	mov	r0, r0, lsl #2
        3561c4:	e59d1000 	ldr	r1, [sp]
        3561c8:	e1a0200d 	mov	r2, sp
        3561cc:	e5810000 	str	r0, [r1]
        3561d0:	e59f1094 	ldr	r1, [pc, #94]	; 35626c <UnpackSmallRect(long)+0xe0>
        3561d4:	e28d0004 	add	r0, sp, #4	; 0x4
        3561d8:	eb61c062 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        3561dc:	e1a04444 	mov	r4, r4, asr #8
        3561e0:	e20400ff 	and	r0, r4, #255	; 0xff
        3561e4:	e1a00100 	mov	r0, r0, lsl #2
        3561e8:	e59d1000 	ldr	r1, [sp]
        3561ec:	e1a0200d 	mov	r2, sp
        3561f0:	e5810000 	str	r0, [r1]
        3561f4:	e59f1074 	ldr	r1, [pc, #74]	; 356270 <UnpackSmallRect(long)+0xe4>
        3561f8:	e28d0004 	add	r0, sp, #4	; 0x4
        3561fc:	eb61c059 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        356200:	e1a04444 	mov	r4, r4, asr #8
        356204:	e20400ff 	and	r0, r4, #255	; 0xff
        356208:	e1a00100 	mov	r0, r0, lsl #2
        35620c:	e59d1000 	ldr	r1, [sp]
        356210:	e1a0200d 	mov	r2, sp
        356214:	e5810000 	str	r0, [r1]
        356218:	e59f1054 	ldr	r1, [pc, #54]	; 356274 <UnpackSmallRect(long)+0xe8>
        35621c:	e28d0004 	add	r0, sp, #4	; 0x4
        356220:	eb61c050 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        356224:	e1a04444 	mov	r4, r4, asr #8
        356228:	e20400ff 	and	r0, r4, #255	; 0xff
        35622c:	e1a00100 	mov	r0, r0, lsl #2
        356230:	e59d1000 	ldr	r1, [sp]
        356234:	e1a0200d 	mov	r2, sp
        356238:	e5810000 	str	r0, [r1]
        35623c:	e59f1034 	ldr	r1, [pc, #34]	; 356278 <UnpackSmallRect(long)+0xec>
        356240:	e28d0004 	add	r0, sp, #4	; 0x4
        356244:	eb61c047 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        356248:	e59d0004 	ldr	r0, [sp, #4]
        35624c:	e5904000 	ldr	r4, [r0]
        356250:	e59d0000 	ldr	r0, [sp]
        356254:	eb61b3d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        356258:	e59d0004 	ldr	r0, [sp, #4]
        35625c:	eb61b3d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        356260:	e1a00004 	mov	r0, r4
        356264:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        356268:	0067fe98 	streqb	pc, [r7], -#232
        35626c:	00684360 	rsbeq	r4, r8, r0, ror #6
        356270:	00682188 	rsbeq	r2, r8, r8, lsl #3
        356274:	006834e0 	rsbeq	r3, r8, r0, ror #9
        356278:	00684bc8 	rsbeq	r4, r8, r8, asr #23
    */
}

/**
 * Symbol: UnsafeSymbolEqual__FlT1Ul
 * Address: 00358bc8
 */
void globals::UnsafeSymbolEqual() {
    /*
        358bc8:	e1a0c00d 	mov	ip, sp
        358bcc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        358bd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        358bd4:	e1a04000 	mov	r4, r0
        358bd8:	e1a05001 	mov	r5, r1
        358bdc:	e1a06002 	mov	r6, r2
        358be0:	e3300042 	teq	r0, #66	; 0x42
        358be4:	1a000004 	bne	358bfc <UnsafeSymbolEqual__FlT1Ul+0x34>
        358be8:	e59f0058 	ldr	r0, [pc, #58]	; 358c48 <UnsafeSymbolEqual__FlT1Ul+0x80>
        358bec:	e5900000 	ldr	r0, [r0]
        358bf0:	e3a02000 	mov	r2, #0	; 0x0
        358bf4:	e59f1050 	ldr	r1, [pc, #50]	; 358c4c <UnsafeSymbolEqual__FlT1Ul+0x84>
        358bf8:	eb622967 	bl	1be319c <$Throw>
        358bfc:	e1340005 	teq	r4, r5
        358c00:	0a00000e 	beq	358c40 <UnsafeSymbolEqual__FlT1Ul+0x78>
        358c04:	e59f1044 	ldr	r1, [pc, #44]	; 358c50 <UnsafeSymbolEqual__FlT1Ul+0x88>
        358c08:	e3a00000 	mov	r0, #0	; 0x0
        358c0c:	e1540001 	cmp	r4, r1
        358c10:	31550001 	cmpcc	r5, r1
        358c14:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
        358c18:	e284200b 	add	r2, r4, #11	; 0xb
        358c1c:	e5921000 	ldr	r1, [r2]
        358c20:	e1310006 	teq	r1, r6
        358c24:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        358c28:	e285100f 	add	r1, r5, #15	; 0xf
        358c2c:	e2820004 	add	r0, r2, #4	; 0x4
        358c30:	eb62be0a 	bl	1c08460 <$symcmp__FPcT1>
        358c34:	e3300000 	teq	r0, #0	; 0x0
        358c38:	13a00000 	movne	r0, #0	; 0x0
        358c3c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        358c40:	e3a00001 	mov	r0, #1	; 0x1
        358c44:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        358c48:	00371308 	eoreqs	r1, r7, r8, lsl #6
        358c4c:	ffff43a3 	swinv	0x00ff43a3
        358c50:	0071fc4c 	rsbeqs	pc, r1, ip, asr #24
    */
}

/**
 * Symbol: UpdateLayoutState__FlN31
 * Address: 0035c080
 */
void globals::UpdateLayoutState() {
    /*
        35c080:	e1a0c00d 	mov	ip, sp
        35c084:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        35c088:	e24cb004 	sub	fp, ip, #4	; 0x4
        35c08c:	e1b05000 	movs	r5, r0
        35c090:	e1a04001 	mov	r4, r1
        35c094:	e1a07002 	mov	r7, r2
        35c098:	e1a06003 	mov	r6, r3
        35c09c:	e3a08001 	mov	r8, #1	; 0x1
        35c0a0:	0a000030 	beq	35c168 <UpdateLayoutState__FlN31+0xe8>
        35c0a4:	e5950000 	ldr	r0, [r5]
        35c0a8:	e5901038 	ldr	r1, [r0, #56]
        35c0ac:	e1310007 	teq	r1, r7
        35c0b0:	0590103c 	ldreq	r1, [r0, #60]
        35c0b4:	01310006 	teqeq	r1, r6
        35c0b8:	0a000004 	beq	35c0d0 <UpdateLayoutState__FlN31+0x50>
        35c0bc:	e1a00005 	mov	r0, r5
        35c0c0:	eb5fbd33 	bl	1b4b594 <$InvalCachedTextInfo(long)>
        35c0c4:	e5950000 	ldr	r0, [r5]
        35c0c8:	e580603c 	str	r6, [r0, #60]
        35c0cc:	e5807038 	str	r7, [r0, #56]
        35c0d0:	e590001c 	ldr	r0, [r0, #28]
        35c0d4:	e20000ff 	and	r0, r0, #255	; 0xff
        35c0d8:	e20440ff 	and	r4, r4, #255	; 0xff
        35c0dc:	e1500004 	cmp	r0, r4
        35c0e0:	aa000020 	bge	35c168 <UpdateLayoutState__FlN31+0xe8>
        35c0e4:	e3300000 	teq	r0, #0	; 0x0
        35c0e8:	0a000004 	beq	35c100 <UpdateLayoutState__FlN31+0x80>
        35c0ec:	e3300001 	teq	r0, #1	; 0x1
        35c0f0:	0a00000a 	beq	35c120 <UpdateLayoutState__FlN31+0xa0>
        35c0f4:	e3300002 	teq	r0, #2	; 0x2
        35c0f8:	1a000015 	bne	35c154 <UpdateLayoutState__FlN31+0xd4>
        35c0fc:	ea00000f 	b	35c140 <UpdateLayoutState__FlN31+0xc0>
        35c100:	e1a00005 	mov	r0, r5
        35c104:	eb5fbd27 	bl	1b4b5a8 <$MeasureGlyphWidths(long)>
        35c108:	e3300000 	teq	r0, #0	; 0x0
        35c10c:	03a08000 	moveq	r8, #0	; 0x0
        35c110:	03a04000 	moveq	r4, #0	; 0x0
        35c114:	0a00000e 	beq	35c154 <UpdateLayoutState__FlN31+0xd4>
        35c118:	e3540001 	cmp	r4, #1	; 0x1
        35c11c:	da00000c 	ble	35c154 <UpdateLayoutState__FlN31+0xd4>
        35c120:	e1a00005 	mov	r0, r5
        35c124:	eb5fbd1c 	bl	1b4b59c <$JustifyText(long)>
        35c128:	e3300000 	teq	r0, #0	; 0x0
        35c12c:	03a08000 	moveq	r8, #0	; 0x0
        35c130:	03a04001 	moveq	r4, #1	; 0x1
        35c134:	0a000006 	beq	35c154 <UpdateLayoutState__FlN31+0xd4>
        35c138:	e3540002 	cmp	r4, #2	; 0x2
        35c13c:	da000004 	ble	35c154 <UpdateLayoutState__FlN31+0xd4>
        35c140:	e1a00005 	mov	r0, r5
        35c144:	eb5fbd25 	bl	1b4b5e0 <$RemapCharWidths(long)>
        35c148:	e3300000 	teq	r0, #0	; 0x0
        35c14c:	03a08000 	moveq	r8, #0	; 0x0
        35c150:	03a04002 	moveq	r4, #2	; 0x2
        35c154:	e5950000 	ldr	r0, [r5]
        35c158:	e590101c 	ldr	r1, [r0, #28]
        35c15c:	e3c110ff 	bic	r1, r1, #255	; 0xff
        35c160:	e1811004 	orr	r1, r1, r4
        35c164:	e5a0101c 	str	r1, [r0, #28]!
        35c168:	e1a00008 	mov	r0, r8
        35c16c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: UnionSoupAdd
 * Address: 0035f304
 */
void globals::UnionSoupAdd() {
    /*
        35f304:	e1a0c00d 	mov	ip, sp
        35f308:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        35f30c:	e24cb004 	sub	fp, ip, #4	; 0x4
        35f310:	e1a04001 	mov	r4, r1
        35f314:	e24dd004 	sub	sp, sp, #4	; 0x4
        35f318:	e5900000 	ldr	r0, [r0]
        35f31c:	e5900000 	ldr	r0, [r0]
        35f320:	e59f1038 	ldr	r1, [pc, #38]	; 35f360 <UnionSoupAdd+0x5c>
        35f324:	e5911000 	ldr	r1, [r1]
        35f328:	e5911000 	ldr	r1, [r1]
        35f32c:	eb6193cb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35f330:	e3a01000 	mov	r1, #0	; 0x0
        35f334:	eb6193c6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        35f338:	eb618b83 	bl	1bc214c <$AllocateRefHandle(long)>
        35f33c:	e58d0000 	str	r0, [sp]
        35f340:	e1a0000d 	mov	r0, sp
        35f344:	e1a01004 	mov	r1, r4
        35f348:	eb61a00c 	bl	1bc7380 <$SoupAdd__FRC6RefVarT1>
        35f34c:	e1a04000 	mov	r4, r0
        35f350:	e59d0000 	ldr	r0, [sp]
        35f354:	eb618f98 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f358:	e1a00004 	mov	r0, r4
        35f35c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        35f360:	00684780 	rsbeq	r4, r8, r0, lsl #15
    */
}

/**
 * Symbol: UnionSoupAddIndex
 * Address: 0035f364
 */
void globals::UnionSoupAddIndex() {
    /*
        35f364:	e1a0c00d 	mov	ip, sp
        35f368:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        35f36c:	e24cb004 	sub	fp, ip, #4	; 0x4
        35f370:	e1a05000 	mov	r5, r0
        35f374:	e1a04001 	mov	r4, r1
        35f378:	eb5bc118 	bl	1a4f7e0 <$CheckStoresWriteProtect(RefVar const &)>
        35f37c:	e5950000 	ldr	r0, [r5]
        35f380:	e5900000 	ldr	r0, [r0]
        35f384:	e59f1070 	ldr	r1, [pc, #70]	; 35f3fc <UnionSoupAddIndex+0x98>
        35f388:	e5911000 	ldr	r1, [r1]
        35f38c:	e5911000 	ldr	r1, [r1]
        35f390:	eb6193b2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35f394:	eb618b6c 	bl	1bc214c <$AllocateRefHandle(long)>
        35f398:	e1a06000 	mov	r6, r0
        35f39c:	e5900000 	ldr	r0, [r0]
        35f3a0:	eb6197c1 	bl	1bc52ac <$Length(long)>
        35f3a4:	e1a07000 	mov	r7, r0
        35f3a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        35f3ac:	e3a05000 	mov	r5, #0	; 0x0
        35f3b0:	e3500000 	cmp	r0, #0	; 0x0
        35f3b4:	da00000c 	ble	35f3ec <UnionSoupAddIndex+0x88>
        35f3b8:	e1a01005 	mov	r1, r5
        35f3bc:	e5960000 	ldr	r0, [r6]
        35f3c0:	eb6193a3 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        35f3c4:	eb618b60 	bl	1bc214c <$AllocateRefHandle(long)>
        35f3c8:	e58d0000 	str	r0, [sp]
        35f3cc:	e1a0000d 	mov	r0, sp
        35f3d0:	e1a01004 	mov	r1, r4
        35f3d4:	eb5bb499 	bl	1a4c640 <$PlainSoupAddIndex>
        35f3d8:	e59d0000 	ldr	r0, [sp]
        35f3dc:	eb618f76 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f3e0:	e2855001 	add	r5, r5, #1	; 0x1
        35f3e4:	e1550007 	cmp	r5, r7
        35f3e8:	bafffff2 	blt	35f3b8 <UnionSoupAddIndex+0x54>
        35f3ec:	e1a00006 	mov	r0, r6
        35f3f0:	eb618f71 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f3f4:	e3a00002 	mov	r0, #2	; 0x2
        35f3f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        35f3fc:	00684780 	rsbeq	r4, r8, r0, lsl #15
    */
}

/**
 * Symbol: UnionSoupRemoveIndex
 * Address: 0035f400
 */
void globals::UnionSoupRemoveIndex() {
    /*
        35f400:	e1a0c00d 	mov	ip, sp
        35f404:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        35f408:	e24cb004 	sub	fp, ip, #4	; 0x4
        35f40c:	e1a05000 	mov	r5, r0
        35f410:	e1a04001 	mov	r4, r1
        35f414:	eb5bc0f1 	bl	1a4f7e0 <$CheckStoresWriteProtect(RefVar const &)>
        35f418:	e5950000 	ldr	r0, [r5]
        35f41c:	e5900000 	ldr	r0, [r0]
        35f420:	e59f1070 	ldr	r1, [pc, #70]	; 35f498 <UnionSoupRemoveIndex+0x98>
        35f424:	e5911000 	ldr	r1, [r1]
        35f428:	e5911000 	ldr	r1, [r1]
        35f42c:	eb61938b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35f430:	eb618b45 	bl	1bc214c <$AllocateRefHandle(long)>
        35f434:	e1a06000 	mov	r6, r0
        35f438:	e5900000 	ldr	r0, [r0]
        35f43c:	eb61979a 	bl	1bc52ac <$Length(long)>
        35f440:	e1a07000 	mov	r7, r0
        35f444:	e24dd004 	sub	sp, sp, #4	; 0x4
        35f448:	e3a05000 	mov	r5, #0	; 0x0
        35f44c:	e3500000 	cmp	r0, #0	; 0x0
        35f450:	da00000c 	ble	35f488 <UnionSoupRemoveIndex+0x88>
        35f454:	e1a01005 	mov	r1, r5
        35f458:	e5960000 	ldr	r0, [r6]
        35f45c:	eb61937c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        35f460:	eb618b39 	bl	1bc214c <$AllocateRefHandle(long)>
        35f464:	e58d0000 	str	r0, [sp]
        35f468:	e1a0000d 	mov	r0, sp
        35f46c:	e1a01004 	mov	r1, r4
        35f470:	eb5bb474 	bl	1a4c648 <$PlainSoupRemoveIndex>
        35f474:	e59d0000 	ldr	r0, [sp]
        35f478:	eb618f4f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f47c:	e2855001 	add	r5, r5, #1	; 0x1
        35f480:	e1550007 	cmp	r5, r7
        35f484:	bafffff2 	blt	35f454 <UnionSoupRemoveIndex+0x54>
        35f488:	e1a00006 	mov	r0, r6
        35f48c:	eb618f4a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f490:	e3a00002 	mov	r0, #2	; 0x2
        35f494:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        35f498:	00684780 	rsbeq	r4, r8, r0, lsl #15
    */
}

/**
 * Symbol: UnionSoupAddTags
 * Address: 0035f49c
 */
void globals::UnionSoupAddTags() {
    /*
        35f49c:	e1a0c00d 	mov	ip, sp
        35f4a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35f4a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        35f4a8:	e1a05000 	mov	r5, r0
        35f4ac:	e1a04001 	mov	r4, r1
        35f4b0:	eb5bc0ca 	bl	1a4f7e0 <$CheckStoresWriteProtect(RefVar const &)>
        35f4b4:	e1a00005 	mov	r0, r5
        35f4b8:	eb5bc0b0 	bl	1a4f780 <$UnionSoupHasTags>
        35f4bc:	e3300002 	teq	r0, #2	; 0x2
        35f4c0:	1a000005 	bne	35f4dc <UnionSoupAddTags+0x40>
        35f4c4:	e3a01065 	mov	r1, #101	; 0x65
        35f4c8:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        35f4cc:	e59f007c 	ldr	r0, [pc, #7c]	; 35f550 <UnionSoupAddTags+0xb4>
        35f4d0:	e5900000 	ldr	r0, [r0]
        35f4d4:	e3a02000 	mov	r2, #0	; 0x0
        35f4d8:	eb620f2f 	bl	1be319c <$Throw>
        35f4dc:	e5950000 	ldr	r0, [r5]
        35f4e0:	e5900000 	ldr	r0, [r0]
        35f4e4:	e59f1068 	ldr	r1, [pc, #68]	; 35f554 <UnionSoupAddTags+0xb8>
        35f4e8:	e5911000 	ldr	r1, [r1]
        35f4ec:	e5911000 	ldr	r1, [r1]
        35f4f0:	eb61935a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35f4f4:	eb618b14 	bl	1bc214c <$AllocateRefHandle(long)>
        35f4f8:	e1a05000 	mov	r5, r0
        35f4fc:	e5900000 	ldr	r0, [r0]
        35f500:	eb619769 	bl	1bc52ac <$Length(long)>
        35f504:	e24dd004 	sub	sp, sp, #4	; 0x4
        35f508:	e2506001 	subs	r6, r0, #1	; 0x1
        35f50c:	4a00000b 	bmi	35f540 <UnionSoupAddTags+0xa4>
        35f510:	e1a01006 	mov	r1, r6
        35f514:	e5950000 	ldr	r0, [r5]
        35f518:	eb61934d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        35f51c:	eb618b0a 	bl	1bc214c <$AllocateRefHandle(long)>
        35f520:	e58d0000 	str	r0, [sp]
        35f524:	e1a0000d 	mov	r0, sp
        35f528:	e1a01004 	mov	r1, r4
        35f52c:	eb5bb447 	bl	1a4c650 <$PlainSoupAddTags>
        35f530:	e59d0000 	ldr	r0, [sp]
        35f534:	eb618f20 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f538:	e2566001 	subs	r6, r6, #1	; 0x1
        35f53c:	5afffff3 	bpl	35f510 <UnionSoupAddTags+0x74>
        35f540:	e1a00005 	mov	r0, r5
        35f544:	eb618f1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f548:	e3a00002 	mov	r0, #2	; 0x2
        35f54c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        35f550:	003712fc 	ldreqsh	r1, [r7], -ip
        35f554:	00684780 	rsbeq	r4, r8, r0, lsl #15
    */
}

/**
 * Symbol: UnionSoupHasTags
 * Address: 0035f558
 */
void globals::UnionSoupHasTags() {
    /*
        35f558:	e1a0c00d 	mov	ip, sp
        35f55c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        35f560:	e24cb004 	sub	fp, ip, #4	; 0x4
        35f564:	e5900000 	ldr	r0, [r0]
        35f568:	e5900000 	ldr	r0, [r0]
        35f56c:	e59f1038 	ldr	r1, [pc, #38]	; 35f5ac <UnionSoupHasTags+0x54>
        35f570:	e5911000 	ldr	r1, [r1]
        35f574:	e5911000 	ldr	r1, [r1]
        35f578:	eb619338 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35f57c:	eb618af2 	bl	1bc214c <$AllocateRefHandle(long)>
        35f580:	e1a04000 	mov	r4, r0
        35f584:	e5900000 	ldr	r0, [r0]
        35f588:	eb619747 	bl	1bc52ac <$Length(long)>
        35f58c:	e1a07000 	mov	r7, r0
        35f590:	e3a06002 	mov	r6, #2	; 0x2
        35f594:	e3500000 	cmp	r0, #0	; 0x0
        35f598:	1a000004 	bne	35f5b0 <UnionSoupHasTags+0x58>
        35f59c:	e1a00004 	mov	r0, r4
        35f5a0:	eb618f05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f5a4:	e1a00006 	mov	r0, r6
        35f5a8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        35f5ac:	00684780 	rsbeq	r4, r8, r0, lsl #15
        35f5b0:	e3a05000 	mov	r5, #0	; 0x0
        35f5b4:	da000016 	ble	35f614 <UnionSoupHasTags+0xbc>
        35f5b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        35f5bc:	e1a01005 	mov	r1, r5
        35f5c0:	e5940000 	ldr	r0, [r4]
        35f5c4:	eb619322 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        35f5c8:	eb618adf 	bl	1bc214c <$AllocateRefHandle(long)>
        35f5cc:	e58d0000 	str	r0, [sp]
        35f5d0:	e1a0000d 	mov	r0, sp
        35f5d4:	eb5bc49c 	bl	1a5084c <$PlainSoupHasTags>
        35f5d8:	e3300002 	teq	r0, #2	; 0x2
        35f5dc:	13a08000 	movne	r8, #0	; 0x0
        35f5e0:	03a08001 	moveq	r8, #1	; 0x1
        35f5e4:	e59d0000 	ldr	r0, [sp]
        35f5e8:	eb618ef3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f5ec:	e3380000 	teq	r8, #0	; 0x0
        35f5f0:	0a000003 	beq	35f604 <UnionSoupHasTags+0xac>
        35f5f4:	e1a00004 	mov	r0, r4
        35f5f8:	eb618eef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f5fc:	e1a00006 	mov	r0, r6
        35f600:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        35f604:	e28dd004 	add	sp, sp, #4	; 0x4
        35f608:	e2855001 	add	r5, r5, #1	; 0x1
        35f60c:	e1550007 	cmp	r5, r7
        35f610:	baffffe8 	blt	35f5b8 <UnionSoupHasTags+0x60>
        35f614:	e1a00004 	mov	r0, r4
        35f618:	eb618ee7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f61c:	e3a0001a 	mov	r0, #26	; 0x1a
        35f620:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: UnionSoupGetTags
 * Address: 0035f624
 */
void globals::UnionSoupGetTags() {
    /*
        35f624:	e1a0c00d 	mov	ip, sp
        35f628:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        35f62c:	e24cb004 	sub	fp, ip, #4	; 0x4
        35f630:	e24dd008 	sub	sp, sp, #8	; 0x8
        35f634:	e5900000 	ldr	r0, [r0]
        35f638:	e5900000 	ldr	r0, [r0]
        35f63c:	e59f1124 	ldr	r1, [pc, #124]	; 35f768 <UnionSoupGetTags+0x144>
        35f640:	e5911000 	ldr	r1, [r1]
        35f644:	e5911000 	ldr	r1, [r1]
        35f648:	eb619304 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35f64c:	eb618abe 	bl	1bc214c <$AllocateRefHandle(long)>
        35f650:	e1a05000 	mov	r5, r0
        35f654:	e3a00002 	mov	r0, #2	; 0x2
        35f658:	eb618abb 	bl	1bc214c <$AllocateRefHandle(long)>
        35f65c:	e58d0004 	str	r0, [sp, #4]
        35f660:	e3a00002 	mov	r0, #2	; 0x2
        35f664:	eb618ab8 	bl	1bc214c <$AllocateRefHandle(long)>
        35f668:	e58d0000 	str	r0, [sp]
        35f66c:	e5950000 	ldr	r0, [r5]
        35f670:	eb61970d 	bl	1bc52ac <$Length(long)>
        35f674:	e1a07000 	mov	r7, r0
        35f678:	e3a06000 	mov	r6, #0	; 0x0
        35f67c:	e3500000 	cmp	r0, #0	; 0x0
        35f680:	da00002e 	ble	35f740 <UnionSoupGetTags+0x11c>
        35f684:	e3a08002 	mov	r8, #2	; 0x2
        35f688:	e3a0901a 	mov	r9, #26	; 0x1a
        35f68c:	e24dd004 	sub	sp, sp, #4	; 0x4
        35f690:	e1a01006 	mov	r1, r6
        35f694:	e5950000 	ldr	r0, [r5]
        35f698:	eb6192ed 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        35f69c:	eb618aaa 	bl	1bc214c <$AllocateRefHandle(long)>
        35f6a0:	e58d0000 	str	r0, [sp]
        35f6a4:	e1a0000d 	mov	r0, sp
        35f6a8:	eb5bb3ec 	bl	1a4c660 <$PlainSoupGetTags>
        35f6ac:	e59d1004 	ldr	r1, [sp, #4]
        35f6b0:	e5810000 	str	r0, [r1]
        35f6b4:	e59d0000 	ldr	r0, [sp]
        35f6b8:	eb618ebf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f6bc:	e59d0004 	ldr	r0, [sp, #4]
        35f6c0:	e5900000 	ldr	r0, [r0]
        35f6c4:	e3300002 	teq	r0, #2	; 0x2
        35f6c8:	0a000027 	beq	35f76c <UnionSoupGetTags+0x148>
        35f6cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        35f6d0:	e59d1010 	ldr	r1, [sp, #16]
        35f6d4:	e5911000 	ldr	r1, [r1]
        35f6d8:	e3310002 	teq	r1, #2	; 0x2
        35f6dc:	059d1010 	ldreq	r1, [sp, #16]
        35f6e0:	05810000 	streq	r0, [r1]
        35f6e4:	0a000011 	beq	35f730 <UnionSoupGetTags+0x10c>
        35f6e8:	e1a00009 	mov	r0, r9
        35f6ec:	eb618a96 	bl	1bc214c <$AllocateRefHandle(long)>
        35f6f0:	e58d0000 	str	r0, [sp]
        35f6f4:	e1a0400d 	mov	r4, sp
        35f6f8:	e1a00008 	mov	r0, r8
        35f6fc:	eb618a92 	bl	1bc214c <$AllocateRefHandle(long)>
        35f700:	e58d0004 	str	r0, [sp, #4]
        35f704:	e28d0004 	add	r0, sp, #4	; 0x4
        35f708:	e28d200c 	add	r2, sp, #12	; 0xc
        35f70c:	e28d1010 	add	r1, sp, #16	; 0x10
        35f710:	e1a03004 	mov	r3, r4
        35f714:	eb5bf9ed 	bl	1a5ded0 <$FSetUnion>
        35f718:	e59d1010 	ldr	r1, [sp, #16]
        35f71c:	e5810000 	str	r0, [r1]
        35f720:	e59d0000 	ldr	r0, [sp]
        35f724:	eb618ea4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f728:	e59d0004 	ldr	r0, [sp, #4]
        35f72c:	eb618ea2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f730:	e28dd00c 	add	sp, sp, #12	; 0xc
        35f734:	e2866001 	add	r6, r6, #1	; 0x1
        35f738:	e1560007 	cmp	r6, r7
        35f73c:	baffffd2 	blt	35f68c <UnionSoupGetTags+0x68>
        35f740:	e59d0004 	ldr	r0, [sp, #4]
        35f744:	e5904000 	ldr	r4, [r0]
        35f748:	e59d0000 	ldr	r0, [sp]
        35f74c:	eb618e9a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f750:	e59d0004 	ldr	r0, [sp, #4]
        35f754:	eb618e98 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f758:	e1a00005 	mov	r0, r5
        35f75c:	eb618e96 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f760:	e1a00004 	mov	r0, r4
        35f764:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        35f768:	00684780 	rsbeq	r4, r8, r0, lsl #15
        35f76c:	e59d0004 	ldr	r0, [sp, #4]
        35f770:	eb618e91 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f774:	e59d0008 	ldr	r0, [sp, #8]
        35f778:	eb618e8f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f77c:	e1a00005 	mov	r0, r5
        35f780:	eb618e8d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f784:	e1a00008 	mov	r0, r8
        35f788:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: UnionSoupRemoveTags
 * Address: 0035f78c
 */
void globals::UnionSoupRemoveTags() {
    /*
        35f78c:	e1a0c00d 	mov	ip, sp
        35f790:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35f794:	e24cb004 	sub	fp, ip, #4	; 0x4
        35f798:	e1a05000 	mov	r5, r0
        35f79c:	e1a04001 	mov	r4, r1
        35f7a0:	eb5bc00e 	bl	1a4f7e0 <$CheckStoresWriteProtect(RefVar const &)>
        35f7a4:	e1a00005 	mov	r0, r5
        35f7a8:	eb5bbff4 	bl	1a4f780 <$UnionSoupHasTags>
        35f7ac:	e3300002 	teq	r0, #2	; 0x2
        35f7b0:	1a000005 	bne	35f7cc <UnionSoupRemoveTags+0x40>
        35f7b4:	e3a01065 	mov	r1, #101	; 0x65
        35f7b8:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        35f7bc:	e59f007c 	ldr	r0, [pc, #7c]	; 35f840 <UnionSoupRemoveTags+0xb4>
        35f7c0:	e5900000 	ldr	r0, [r0]
        35f7c4:	e3a02000 	mov	r2, #0	; 0x0
        35f7c8:	eb620e73 	bl	1be319c <$Throw>
        35f7cc:	e5950000 	ldr	r0, [r5]
        35f7d0:	e5900000 	ldr	r0, [r0]
        35f7d4:	e59f1068 	ldr	r1, [pc, #68]	; 35f844 <UnionSoupRemoveTags+0xb8>
        35f7d8:	e5911000 	ldr	r1, [r1]
        35f7dc:	e5911000 	ldr	r1, [r1]
        35f7e0:	eb61929e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35f7e4:	eb618a58 	bl	1bc214c <$AllocateRefHandle(long)>
        35f7e8:	e1a05000 	mov	r5, r0
        35f7ec:	e5900000 	ldr	r0, [r0]
        35f7f0:	eb6196ad 	bl	1bc52ac <$Length(long)>
        35f7f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        35f7f8:	e2506001 	subs	r6, r0, #1	; 0x1
        35f7fc:	4a00000b 	bmi	35f830 <UnionSoupRemoveTags+0xa4>
        35f800:	e1a01006 	mov	r1, r6
        35f804:	e5950000 	ldr	r0, [r5]
        35f808:	eb619291 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        35f80c:	eb618a4e 	bl	1bc214c <$AllocateRefHandle(long)>
        35f810:	e58d0000 	str	r0, [sp]
        35f814:	e1a0000d 	mov	r0, sp
        35f818:	e1a01004 	mov	r1, r4
        35f81c:	eb5bb38c 	bl	1a4c654 <$PlainSoupRemoveTags>
        35f820:	e59d0000 	ldr	r0, [sp]
        35f824:	eb618e64 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f828:	e2566001 	subs	r6, r6, #1	; 0x1
        35f82c:	5afffff3 	bpl	35f800 <UnionSoupRemoveTags+0x74>
        35f830:	e1a00005 	mov	r0, r5
        35f834:	eb618e60 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f838:	e3a00002 	mov	r0, #2	; 0x2
        35f83c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        35f840:	003712fc 	ldreqsh	r1, [r7], -ip
        35f844:	00684780 	rsbeq	r4, r8, r0, lsl #15
    */
}

/**
 * Symbol: UnionSoupModifyTag
 * Address: 0035f848
 */
void globals::UnionSoupModifyTag() {
    /*
        35f848:	e1a0c00d 	mov	ip, sp
        35f84c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        35f850:	e24cb004 	sub	fp, ip, #4	; 0x4
        35f854:	e1a06000 	mov	r6, r0
        35f858:	e1a05001 	mov	r5, r1
        35f85c:	e1a04002 	mov	r4, r2
        35f860:	eb5bbfde 	bl	1a4f7e0 <$CheckStoresWriteProtect(RefVar const &)>
        35f864:	e1a00006 	mov	r0, r6
        35f868:	eb5bbfc4 	bl	1a4f780 <$UnionSoupHasTags>
        35f86c:	e3300002 	teq	r0, #2	; 0x2
        35f870:	1a000005 	bne	35f88c <UnionSoupModifyTag+0x44>
        35f874:	e3a01065 	mov	r1, #101	; 0x65
        35f878:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        35f87c:	e59f0080 	ldr	r0, [pc, #80]	; 35f904 <UnionSoupModifyTag+0xbc>
        35f880:	e5900000 	ldr	r0, [r0]
        35f884:	e3a02000 	mov	r2, #0	; 0x0
        35f888:	eb620e43 	bl	1be319c <$Throw>
        35f88c:	e5960000 	ldr	r0, [r6]
        35f890:	e5900000 	ldr	r0, [r0]
        35f894:	e59f106c 	ldr	r1, [pc, #6c]	; 35f908 <UnionSoupModifyTag+0xc0>
        35f898:	e5911000 	ldr	r1, [r1]
        35f89c:	e5911000 	ldr	r1, [r1]
        35f8a0:	eb61926e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35f8a4:	eb618a28 	bl	1bc214c <$AllocateRefHandle(long)>
        35f8a8:	e1a07000 	mov	r7, r0
        35f8ac:	e5900000 	ldr	r0, [r0]
        35f8b0:	eb61967d 	bl	1bc52ac <$Length(long)>
        35f8b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        35f8b8:	e2506001 	subs	r6, r0, #1	; 0x1
        35f8bc:	4a00000c 	bmi	35f8f4 <UnionSoupModifyTag+0xac>
        35f8c0:	e1a01006 	mov	r1, r6
        35f8c4:	e5970000 	ldr	r0, [r7]
        35f8c8:	eb619261 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        35f8cc:	eb618a1e 	bl	1bc214c <$AllocateRefHandle(long)>
        35f8d0:	e58d0000 	str	r0, [sp]
        35f8d4:	e1a0000d 	mov	r0, sp
        35f8d8:	e1a02004 	mov	r2, r4
        35f8dc:	e1a01005 	mov	r1, r5
        35f8e0:	eb5bb35c 	bl	1a4c658 <$PlainSoupModifyTag>
        35f8e4:	e59d0000 	ldr	r0, [sp]
        35f8e8:	eb618e33 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f8ec:	e2566001 	subs	r6, r6, #1	; 0x1
        35f8f0:	5afffff2 	bpl	35f8c0 <UnionSoupModifyTag+0x78>
        35f8f4:	e1a00007 	mov	r0, r7
        35f8f8:	eb618e2f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f8fc:	e3a00002 	mov	r0, #2	; 0x2
        35f900:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        35f904:	003712fc 	ldreqsh	r1, [r7], -ip
        35f908:	00684780 	rsbeq	r4, r8, r0, lsl #15
    */
}

/**
 * Symbol: UnionSoupFlush
 * Address: 0035f90c
 */
void globals::UnionSoupFlush() {
    /*
        35f90c:	e1a0c00d 	mov	ip, sp
        35f910:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        35f914:	e24cb004 	sub	fp, ip, #4	; 0x4
        35f918:	e24dd004 	sub	sp, sp, #4	; 0x4
        35f91c:	e5900000 	ldr	r0, [r0]
        35f920:	e5900000 	ldr	r0, [r0]
        35f924:	e59f102c 	ldr	r1, [pc, #2c]	; 35f958 <UnionSoupFlush+0x4c>
        35f928:	e5911000 	ldr	r1, [r1]
        35f92c:	e5911000 	ldr	r1, [r1]
        35f930:	eb61924a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35f934:	eb618a04 	bl	1bc214c <$AllocateRefHandle(long)>
        35f938:	e58d0000 	str	r0, [sp]
        35f93c:	e1a0000d 	mov	r0, sp
        35f940:	eb5b818e 	bl	1a3ff80 <$FlushSoupList(RefVar const &)>
        35f944:	e1a04000 	mov	r4, r0
        35f948:	e59d0000 	ldr	r0, [sp]
        35f94c:	eb618e1a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f950:	e1a00004 	mov	r0, r4
        35f954:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        35f958:	00684780 	rsbeq	r4, r8, r0, lsl #15
    */
}

/**
 * Symbol: UnionSoupGetSize
 * Address: 0035f95c
 */
void globals::UnionSoupGetSize() {
    /*
        35f95c:	e1a0c00d 	mov	ip, sp
        35f960:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35f964:	e24cb004 	sub	fp, ip, #4	; 0x4
        35f968:	e3a05000 	mov	r5, #0	; 0x0
        35f96c:	e5900000 	ldr	r0, [r0]
        35f970:	e5900000 	ldr	r0, [r0]
        35f974:	e59f1078 	ldr	r1, [pc, #78]	; 35f9f4 <UnionSoupGetSize+0x98>
        35f978:	e5911000 	ldr	r1, [r1]
        35f97c:	e5911000 	ldr	r1, [r1]
        35f980:	eb619236 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        35f984:	eb6189f0 	bl	1bc214c <$AllocateRefHandle(long)>
        35f988:	e1a04000 	mov	r4, r0
        35f98c:	e5900000 	ldr	r0, [r0]
        35f990:	eb619645 	bl	1bc52ac <$Length(long)>
        35f994:	e24dd004 	sub	sp, sp, #4	; 0x4
        35f998:	e2506001 	subs	r6, r0, #1	; 0x1
        35f99c:	4a00000f 	bmi	35f9e0 <UnionSoupGetSize+0x84>
        35f9a0:	e1a01006 	mov	r1, r6
        35f9a4:	e5940000 	ldr	r0, [r4]
        35f9a8:	eb619229 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        35f9ac:	eb6189e6 	bl	1bc214c <$AllocateRefHandle(long)>
        35f9b0:	e58d0000 	str	r0, [sp]
        35f9b4:	e1a0000d 	mov	r0, sp
        35f9b8:	eb5bb732 	bl	1a4d688 <$PlainSoupGetSize>
        35f9bc:	e3100003 	tst	r0, #3	; 0x3
        35f9c0:	01a00140 	moveq	r0, r0, asr #2
        35f9c4:	0a000000 	beq	35f9cc <UnionSoupGetSize+0x70>
        35f9c8:	eb6189d3 	bl	1bc211c <$_RINTError(long)>
        35f9cc:	e0805005 	add	r5, r0, r5
        35f9d0:	e59d0000 	ldr	r0, [sp]
        35f9d4:	eb618df8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f9d8:	e2566001 	subs	r6, r6, #1	; 0x1
        35f9dc:	5affffef 	bpl	35f9a0 <UnionSoupGetSize+0x44>
        35f9e0:	e1a05105 	mov	r5, r5, lsl #2
        35f9e4:	e1a00004 	mov	r0, r4
        35f9e8:	eb618df3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35f9ec:	e1a00005 	mov	r0, r5
        35f9f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        35f9f4:	00684780 	rsbeq	r4, r8, r0, lsl #15
    */
}

/**
 * Symbol: UsuallyHigherLetter
 * Address: 00376874
 */
void globals::UsuallyHigherLetter() {
    /*
        376874:	73537a5a 	cmpvc	r3, #368640	; 0x5a000
        376878:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: UndefinedInstruction
 * Address: 0038ce88
 */
void globals::UndefinedInstruction() {
    /*
        38ce88:	e92d0003 	stmdb	sp!, {r0, r1}
        38ce8c:	e59f181c 	ldr	r1, [pc, #81c]	; 38d6b0 <gParamBlockFromImagePhysicalPtr+0x4>
        38ce90:	e5911000 	ldr	r1, [r1]
        38ce94:	e3110001 	tst	r1, #1	; 0x1
        38ce98:	1a000005 	bne	38ceb4 <UndefinedInstruction+0x2c>
        38ce9c:	e51e1004 	ldr	r1, [lr, -#4]
        38cea0:	e3a004e6 	mov	r0, #-436207616	; 0xe6000000
        38cea4:	e3800010 	orr	r0, r0, #16	; 0x10
        38cea8:	e1510000 	cmp	r1, r0
        38ceac:	08bd0003 	ldmeqia	sp!, {r0, r1}
        38ceb0:	01b0f00e 	moveqs	pc, lr
        38ceb4:	e92d4000 	stmdb	sp!, {lr}
        38ceb8:	e14f0000 	mrs	r0, SPSR
        38cebc:	e92d0001 	stmdb	sp!, {r0}
        38cec0:	e3a01001 	mov	r1, #1	; 0x1
        38cec4:	ea000036 	b	38cfa4 <ReportException>
    */
}

