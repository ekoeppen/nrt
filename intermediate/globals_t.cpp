#include "Newton.h"

/**
 * Symbol: ToObject(WordBaseInfo *)
 * Address: 000355d8
 */
ToObject(WordBaseInfo *) {
    /*
         355d8:	e1a0c00d 	mov	ip, sp
         355dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         355e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         355e4:	e1a04000 	mov	r4, r0
         355e8:	e24dd004 	sub	sp, sp, #4	; 0x4
         355ec:	e59f006c 	ldr	r0, [pc, #6c]	; 35660 <ToObject(WordBaseInfo *)+0x88>
         355f0:	eb6e32dd 	bl	1bc216c <$Clone(RefVar const &)>
         355f4:	eb6e32d4 	bl	1bc214c <$AllocateRefHandle(long)>
         355f8:	e58d0000 	str	r0, [sp]
         355fc:	e5942000 	ldr	r2, [r4]
         35600:	e1a02822 	mov	r2, r2, lsr #16
         35604:	e59f1058 	ldr	r1, [pc, #58]	; 35664 <ToObject(WordBaseInfo *)+0x8c>
         35608:	e1a0000d 	mov	r0, sp
         3560c:	eb6a11b8 	bl	1ab9cf4 <$SetNonNilInt__FRC6RefVarT1Ul>
         35610:	e5942002 	ldr	r2, [r4, #2]
         35614:	e1a02822 	mov	r2, r2, lsr #16
         35618:	e59f1048 	ldr	r1, [pc, #48]	; 35668 <ToObject(WordBaseInfo *)+0x90>
         3561c:	e1a0000d 	mov	r0, sp
         35620:	eb6a11b3 	bl	1ab9cf4 <$SetNonNilInt__FRC6RefVarT1Ul>
         35624:	e5942004 	ldr	r2, [r4, #4]
         35628:	e1a02822 	mov	r2, r2, lsr #16
         3562c:	e59f1038 	ldr	r1, [pc, #38]	; 3566c <ToObject(WordBaseInfo *)+0x94>
         35630:	e1a0000d 	mov	r0, sp
         35634:	eb6a11ae 	bl	1ab9cf4 <$SetNonNilInt__FRC6RefVarT1Ul>
         35638:	e5942006 	ldr	r2, [r4, #6]
         3563c:	e1a02822 	mov	r2, r2, lsr #16
         35640:	e59f1028 	ldr	r1, [pc, #28]	; 35670 <ToObject(WordBaseInfo *)+0x98>
         35644:	e1a0000d 	mov	r0, sp
         35648:	eb6a11a9 	bl	1ab9cf4 <$SetNonNilInt__FRC6RefVarT1Ul>
         3564c:	e59d0000 	ldr	r0, [sp]
         35650:	e5904000 	ldr	r4, [r0]
         35654:	eb6e36d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         35658:	e1a00004 	mov	r0, r4
         3565c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         35660:	00681560 	rsbeq	r1, r8, r0, ror #10
         35664:	00681fd8 	ldreqd	r1, [r8], -#248
         35668:	006846d0 	ldreqd	r4, [r8], -#96
         3566c:	00682090 	streqb	r2, [r8]
         35670:	006828d0 	ldreqd	r2, [r8], -#128
    */
}

/**
 * Symbol: ToObject(RecGridInfo *)
 * Address: 000358c0
 */
ToObject(RecGridInfo *) {
    /*
         358c0:	e1a0c00d 	mov	ip, sp
         358c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         358c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         358cc:	e1a04000 	mov	r4, r0
         358d0:	e24dd004 	sub	sp, sp, #4	; 0x4
         358d4:	e59f0094 	ldr	r0, [pc, #94]	; 35970 <ToObject(RecGridInfo *)+0xb0>
         358d8:	eb6e3223 	bl	1bc216c <$Clone(RefVar const &)>
         358dc:	eb6e321a 	bl	1bc214c <$AllocateRefHandle(long)>
         358e0:	e58d0000 	str	r0, [sp]
         358e4:	e5942006 	ldr	r2, [r4, #6]
         358e8:	e1a02822 	mov	r2, r2, lsr #16
         358ec:	e59f1080 	ldr	r1, [pc, #80]	; 35974 <ToObject(RecGridInfo *)+0xb4>
         358f0:	e1a0000d 	mov	r0, sp
         358f4:	eb6a10fe 	bl	1ab9cf4 <$SetNonNilInt__FRC6RefVarT1Ul>
         358f8:	e5942008 	ldr	r2, [r4, #8]
         358fc:	e1a02822 	mov	r2, r2, lsr #16
         35900:	e59f1070 	ldr	r1, [pc, #70]	; 35978 <ToObject(RecGridInfo *)+0xb8>
         35904:	e1a0000d 	mov	r0, sp
         35908:	eb6a10f9 	bl	1ab9cf4 <$SetNonNilInt__FRC6RefVarT1Ul>
         3590c:	e594200a 	ldr	r2, [r4, #10]
         35910:	e1a02822 	mov	r2, r2, lsr #16
         35914:	e59f1060 	ldr	r1, [pc, #60]	; 3597c <ToObject(RecGridInfo *)+0xbc>
         35918:	e1a0000d 	mov	r0, sp
         3591c:	eb6a10f4 	bl	1ab9cf4 <$SetNonNilInt__FRC6RefVarT1Ul>
         35920:	e5942000 	ldr	r2, [r4]
         35924:	e1a02822 	mov	r2, r2, lsr #16
         35928:	e59f1050 	ldr	r1, [pc, #50]	; 35980 <ToObject(RecGridInfo *)+0xc0>
         3592c:	e1a0000d 	mov	r0, sp
         35930:	eb6a10ef 	bl	1ab9cf4 <$SetNonNilInt__FRC6RefVarT1Ul>
         35934:	e5942002 	ldr	r2, [r4, #2]
         35938:	e1a02822 	mov	r2, r2, lsr #16
         3593c:	e59f1040 	ldr	r1, [pc, #40]	; 35984 <ToObject(RecGridInfo *)+0xc4>
         35940:	e1a0000d 	mov	r0, sp
         35944:	eb6a10ea 	bl	1ab9cf4 <$SetNonNilInt__FRC6RefVarT1Ul>
         35948:	e5942004 	ldr	r2, [r4, #4]
         3594c:	e1a02822 	mov	r2, r2, lsr #16
         35950:	e59f1030 	ldr	r1, [pc, #30]	; 35988 <ToObject(RecGridInfo *)+0xc8>
         35954:	e1a0000d 	mov	r0, sp
         35958:	eb6a10e5 	bl	1ab9cf4 <$SetNonNilInt__FRC6RefVarT1Ul>
         3595c:	e59d0000 	ldr	r0, [sp]
         35960:	e5904000 	ldr	r4, [r0]
         35964:	eb6e3614 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         35968:	e1a00004 	mov	r0, r4
         3596c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         35970:	00681a50 	rsbeq	r1, r8, r0, asr sl
         35974:	006821b0 	streqh	r2, [r8], -#16
         35978:	006821b8 	streqh	r2, [r8], -#24
         3597c:	00685248 	rsbeq	r5, r8, r8, asr #4
         35980:	006821c0 	rsbeq	r2, r8, r0, asr #3
         35984:	006821a8 	rsbeq	r2, r8, r8, lsr #3
         35988:	00685280 	rsbeq	r5, r8, r0, lsl #5
    */
}

/**
 * Symbol: TryGetAreasHit(TUnit *, TArray *)
 * Address: 00036aa4
 */
TryGetAreasHit(TUnit *, TArray *) {
    /*
         36aa4:	e1a0c00d 	mov	ip, sp
         36aa8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         36aac:	e24cb004 	sub	fp, ip, #4	; 0x4
         36ab0:	e1a04000 	mov	r4, r0
         36ab4:	e1a05001 	mov	r5, r1
         36ab8:	e24dd03c 	sub	sp, sp, #60	; 0x3c
         36abc:	e1a01000 	mov	r1, r0
         36ac0:	e1a0000d 	mov	r0, sp
         36ac4:	e3a02000 	mov	r2, #0	; 0x0
         36ac8:	eb694245 	bl	1a873e4 <TUnitPublic::$__ct(TUnit *, unsigned long)>
         36acc:	e3a06000 	mov	r6, #0	; 0x0
         36ad0:	e1a0000d 	mov	r0, sp
         36ad4:	eb6a0c70 	bl	1ab9c9c <TUnitPublic::$RequiredMask(void)>
         36ad8:	e1a01000 	mov	r1, r0
         36adc:	e1a0000d 	mov	r0, sp
         36ae0:	eb69eb76 	bl	1ab18c0 <TUnitPublic::$FindView(unsigned long)>
         36ae4:	e1a07000 	mov	r7, r0
         36ae8:	e1a0000d 	mov	r0, sp
         36aec:	eb69fbe4 	bl	1ab5a84 <TUnitPublic::$InputMask(void)>
         36af0:	e1b08000 	movs	r8, r0
         36af4:	1a000014 	bne	36b4c <TryGetAreasHit(TUnit *, TArray *)+0xa8>
         36af8:	e1a0000d 	mov	r0, sp
         36afc:	eb698012 	bl	1a96b4c <TUnitPublic::$GetType(void)>
         36b00:	e59fc038 	ldr	ip, [pc, #38]	; 36b40 <TryGetAreasHit(TUnit *, TArray *)+0x9c>
         36b04:	e130000c 	teq	r0, ip
         36b08:	1a000009 	bne	36b34 <TryGetAreasHit(TUnit *, TArray *)+0x90>
         36b0c:	e59f0030 	ldr	r0, [pc, #30]	; 36b44 <TryGetAreasHit(TUnit *, TArray *)+0xa0>
         36b10:	e5900000 	ldr	r0, [r0]
         36b14:	e5901050 	ldr	r1, [r0, #80]
         36b18:	e3310000 	teq	r1, #0	; 0x0
         36b1c:	13a02001 	movne	r2, #1	; 0x1
         36b20:	13a01000 	movne	r1, #0	; 0x0
         36b24:	1b69ad80 	blne	1aa212c <TRootView::$SetPopup(TView *, unsigned char)>
         36b28:	e3a00000 	mov	r0, #0	; 0x0
         36b2c:	e59f1014 	ldr	r1, [pc, #14]	; 36b48 <TryGetAreasHit(TUnit *, TArray *)+0xa4>
         36b30:	e5c10000 	strb	r0, [r1]
         36b34:	e1a0000d 	mov	r0, sp
         36b38:	eb69ce8f 	bl	1aaa57c <TUnitPublic::$Cleanup(void)>
         36b3c:	ea00001c 	b	36bb4 <TryGetAreasHit(TUnit *, TArray *)+0x110>
         36b40:	434c494b 	cmpmi	ip, #1228800	; 0x12c000
         36b44:	0c101934 	ldceq	9, cr1, [r0], -#208
         36b48:	0c101948 	ldceq	9, cr1, [r0], -#288
         36b4c:	e1a00005 	mov	r0, r5
         36b50:	e5971004 	ldr	r1, [r7, #4]
         36b54:	eb6ca0f0 	bl	1b5ef1c <TAreaList::$FindMatchingView(unsigned long)>
         36b58:	e3300000 	teq	r0, #0	; 0x0
         36b5c:	1a000014 	bne	36bb4 <TryGetAreasHit(TUnit *, TArray *)+0x110>
         36b60:	e595000c 	ldr	r0, [r5, #12]
         36b64:	e3300000 	teq	r0, #0	; 0x0
         36b68:	0a000002 	beq	36b78 <TryGetAreasHit(TUnit *, TArray *)+0xd4>
         36b6c:	eb6ca94c 	bl	1b610a4 <$Make__9TAreaListSFv>
         36b70:	e1b05000 	movs	r5, r0
         36b74:	13a06001 	movne	r6, #1	; 0x1
         36b78:	e1a01008 	mov	r1, r8
         36b7c:	e1a00007 	mov	r0, r7
         36b80:	eb69739d 	bl	1a939fc <$FindMatchingArea(TView *, unsigned long)>
         36b84:	e3300000 	teq	r0, #0	; 0x0
         36b88:	11a01000 	movne	r1, r0
         36b8c:	11a00005 	movne	r0, r5
         36b90:	1b6c9073 	blne	1b5ad64 <TAreaList::$AddArea(TRecArea *)>
         36b94:	e3360000 	teq	r6, #0	; 0x0
         36b98:	0a000005 	beq	36bb4 <TryGetAreasHit(TUnit *, TArray *)+0x110>
         36b9c:	e1a01005 	mov	r1, r5
         36ba0:	e1a00004 	mov	r0, r4
         36ba4:	eb6cbddc 	bl	1b6631c <TUnit::$SetAreas(TAreaList *)>
         36ba8:	e1a00005 	mov	r0, r5
         36bac:	e1a0e00f 	mov	lr, pc
         36bb0:	e595f000 	ldr	pc, [r5]
         36bb4:	e1a0000d 	mov	r0, sp
         36bb8:	e3a01000 	mov	r1, #0	; 0x0
         36bbc:	eb694622 	bl	1a8844c <TUnitPublic::$__dt(void)>
         36bc0:	e1a00006 	mov	r0, r6
         36bc4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: Tilable(PixelMap *)
 * Address: 00040ee0
 */
Tilable(PixelMap *) {
    /*
         40ee0:	e590200c 	ldr	r2, [r0, #12]
         40ee4:	e1a02842 	mov	r2, r2, asr #16
         40ee8:	e5901008 	ldr	r1, [r0, #8]
         40eec:	e0421841 	sub	r1, r2, r1, asr #16
         40ef0:	e5902004 	ldr	r2, [r0, #4]
         40ef4:	e1a02842 	mov	r2, r2, asr #16
         40ef8:	e0000192 	mul	r0, r2, r1
         40efc:	e240cbf1 	sub	ip, r0, #246784	; 0x3c400
         40f00:	e33c0e2f 	teq	ip, #752	; 0x2f0
         40f04:	1240c91e 	subne	ip, r0, #491520	; 0x78000
         40f08:	133c0ede 	teqne	ip, #3552	; 0xde0
         40f0c:	13300bf3 	teqne	r0, #248832	; 0x3cc00
         40f10:	1240ca79 	subne	ip, r0, #495616	; 0x79000
         40f14:	133c0b02 	teqne	ip, #2048	; 0x800
         40f18:	03a00001 	moveq	r0, #1	; 0x1
         40f1c:	13a00000 	movne	r0, #0	; 0x0
         40f20:	e20000ff 	and	r0, r0, #255	; 0xff
         40f24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TrimRect__FRC5TRectT1P5TRect
 * Address: 00043290
 */
void globals::TrimRect() {
    /*
         43290:	e1a0c00d 	mov	ip, sp
         43294:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         43298:	e24cb004 	sub	fp, ip, #4	; 0x4
         4329c:	e1a05000 	mov	r5, r0
         432a0:	e1a06001 	mov	r6, r1
         432a4:	e1a04002 	mov	r4, r2
         432a8:	e1a00001 	mov	r0, r1
         432ac:	eb6c2d19 	bl	1b4e718 <$EmptyRect(Rect *)>
         432b0:	e3300000 	teq	r0, #0	; 0x0
         432b4:	18955000 	ldmneia	r5, {ip, lr}
         432b8:	18845000 	stmneia	r4, {ip, lr}
         432bc:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         432c0:	e1a00005 	mov	r0, r5
         432c4:	eb6c2d13 	bl	1b4e718 <$EmptyRect(Rect *)>
         432c8:	e3300000 	teq	r0, #0	; 0x0
         432cc:	0a000009 	beq	432f8 <TrimRect__FRC5TRectT1P5TRect+0x68>
         432d0:	e3a00000 	mov	r0, #0	; 0x0
         432d4:	e5c40007 	strb	r0, [r4, #7]
         432d8:	e5c40006 	strb	r0, [r4, #6]
         432dc:	e5c40005 	strb	r0, [r4, #5]
         432e0:	e5c40004 	strb	r0, [r4, #4]
         432e4:	e5c40003 	strb	r0, [r4, #3]
         432e8:	e5c40002 	strb	r0, [r4, #2]
         432ec:	e5c40001 	strb	r0, [r4, #1]
         432f0:	e5c40000 	strb	r0, [r4]
         432f4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         432f8:	e5961000 	ldr	r1, [r6]
         432fc:	e5950000 	ldr	r0, [r5]
         43300:	e1a00840 	mov	r0, r0, asr #16
         43304:	e1500841 	cmp	r0, r1, asr #16
         43308:	a5960004 	ldrge	r0, [r6, #4]
         4330c:	a1a00840 	movge	r0, r0, asr #16
         43310:	e5c40001 	strb	r0, [r4, #1]
         43314:	e1a00440 	mov	r0, r0, asr #8
         43318:	e5c40000 	strb	r0, [r4]
         4331c:	e5961004 	ldr	r1, [r6, #4]
         43320:	e5950004 	ldr	r0, [r5, #4]
         43324:	e1a00840 	mov	r0, r0, asr #16
         43328:	e1500841 	cmp	r0, r1, asr #16
         4332c:	d5960000 	ldrle	r0, [r6]
         43330:	d1a00840 	movle	r0, r0, asr #16
         43334:	e5c40005 	strb	r0, [r4, #5]
         43338:	e1a00440 	mov	r0, r0, asr #8
         4333c:	e5c40004 	strb	r0, [r4, #4]
         43340:	e5950002 	ldr	r0, [r5, #2]
         43344:	e1a00820 	mov	r0, r0, lsr #16
         43348:	e5c40003 	strb	r0, [r4, #3]
         4334c:	e1a00440 	mov	r0, r0, asr #8
         43350:	e5c40002 	strb	r0, [r4, #2]
         43354:	e5950006 	ldr	r0, [r5, #6]
         43358:	e1a00820 	mov	r0, r0, lsr #16
         4335c:	e5c40007 	strb	r0, [r4, #7]
         43360:	e1a00440 	mov	r0, r0, asr #8
         43364:	e5c40006 	strb	r0, [r4, #6]
         43368:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TestWordInfoFlags(RefVar const &, long)
 * Address: 00077d34
 */
TestWordInfoFlags(RefVar const &, long) {
    /*
         77d34:	e1a0c00d 	mov	ip, sp
         77d38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         77d3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         77d40:	e1a04001 	mov	r4, r1
         77d44:	e59f1038 	ldr	r1, [pc, #38]	; 77d84 <TestWordInfoFlags(RefVar const &, long)+0x50>
         77d48:	e5911000 	ldr	r1, [r1]
         77d4c:	e5911000 	ldr	r1, [r1]
         77d50:	e5900000 	ldr	r0, [r0]
         77d54:	e5900000 	ldr	r0, [r0]
         77d58:	eb6d3140 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         77d5c:	e3100003 	tst	r0, #3	; 0x3
         77d60:	01a00140 	moveq	r0, r0, asr #2
         77d64:	0a000000 	beq	77d6c <TestWordInfoFlags(RefVar const &, long)+0x38>
         77d68:	eb6d28eb 	bl	1bc211c <$_RINTError(long)>
         77d6c:	e0000004 	and	r0, r0, r4
         77d70:	e1300004 	teq	r0, r4
         77d74:	13a00000 	movne	r0, #0	; 0x0
         77d78:	03a00001 	moveq	r0, #1	; 0x1
         77d7c:	e20000ff 	and	r0, r0, #255	; 0xff
         77d80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         77d84:	00682df0 	streqd	r2, [r8], -#208
    */
}

/**
 * Symbol: TrieAdd(char *, AirusAParmBlock **, RefVar const &)
 * Address: 0007ce20
 */
TrieAdd(char *, AirusAParmBlock **, RefVar const &) {
    /*
         7ce20:	e1a0c00d 	mov	ip, sp
         7ce24:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         7ce28:	e24cb004 	sub	fp, ip, #4	; 0x4
         7ce2c:	e1a05000 	mov	r5, r0
         7ce30:	e1a04002 	mov	r4, r2
         7ce34:	e24dd018 	sub	sp, sp, #24	; 0x18
         7ce38:	e3a00002 	mov	r0, #2	; 0x2
         7ce3c:	eb6d14c2 	bl	1bc214c <$AllocateRefHandle(long)>
         7ce40:	e1a08000 	mov	r8, r0
         7ce44:	e3a00002 	mov	r0, #2	; 0x2
         7ce48:	eb6d14bf 	bl	1bc214c <$AllocateRefHandle(long)>
         7ce4c:	e58d0004 	str	r0, [sp, #4]
         7ce50:	e3a00002 	mov	r0, #2	; 0x2
         7ce54:	eb6d14bc 	bl	1bc214c <$AllocateRefHandle(long)>
         7ce58:	e1a06000 	mov	r6, r0
         7ce5c:	e3a00002 	mov	r0, #2	; 0x2
         7ce60:	eb6d14b9 	bl	1bc214c <$AllocateRefHandle(long)>
         7ce64:	e58d0000 	str	r0, [sp]
         7ce68:	e3a00002 	mov	r0, #2	; 0x2
         7ce6c:	eb6d14b6 	bl	1bc214c <$AllocateRefHandle(long)>
         7ce70:	e1a07000 	mov	r7, r0
         7ce74:	e3a00002 	mov	r0, #2	; 0x2
         7ce78:	eb6d14b3 	bl	1bc214c <$AllocateRefHandle(long)>
         7ce7c:	e1a09000 	mov	r9, r0
         7ce80:	e28d000c 	add	r0, sp, #12	; 0xc
         7ce84:	e58d0008 	str	r0, [sp, #8]
         7ce88:	e1a00005 	mov	r0, r5
         7ce8c:	eb66ef6b 	bl	1a38c40 <$DownCase(unsigned char *)>
         7ce90:	e1a05000 	mov	r5, r0
         7ce94:	e3a03000 	mov	r3, #0	; 0x0
         7ce98:	e92d0008 	stmdb	sp!, {r3}
         7ce9c:	e28d300c 	add	r3, sp, #12	; 0xc
         7cea0:	e1a01000 	mov	r1, r0
         7cea4:	e3a02000 	mov	r2, #0	; 0x0
         7cea8:	e51b0030 	ldr	r0, [fp, -#48]
         7ceac:	eb661079 	bl	1a01098 <$VerifyString>
         7ceb0:	e28dd004 	add	sp, sp, #4	; 0x4
         7ceb4:	e59f00f0 	ldr	r0, [pc, #f0]	; 7cfac <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x18c>
         7ceb8:	e5900000 	ldr	r0, [r0]
         7cebc:	e59f10ec 	ldr	r1, [pc, #ec]	; 7cfb0 <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x190>
         7cec0:	e3300002 	teq	r0, #2	; 0x2
         7cec4:	e58d1014 	str	r1, [sp, #20]
         7cec8:	13300003 	teqne	r0, #3	; 0x3
         7cecc:	1a000038 	bne	7cfb4 <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x194>
         7ced0:	e59d0008 	ldr	r0, [sp, #8]
         7ced4:	e5905000 	ldr	r5, [r0]
         7ced8:	e59d1014 	ldr	r1, [sp, #20]
         7cedc:	e5b10020 	ldr	r0, [r1, #32]!
         7cee0:	eb6d1499 	bl	1bc214c <$AllocateRefHandle(long)>
         7cee4:	e1a0a000 	mov	sl, r0
         7cee8:	e1a01005 	mov	r1, r5
         7ceec:	e5900000 	ldr	r0, [r0]
         7cef0:	eb6d1cd7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7cef4:	e5860000 	str	r0, [r6]
         7cef8:	e1a0000a 	mov	r0, sl
         7cefc:	eb6d18ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7cf00:	e3a05000 	mov	r5, #0	; 0x0
         7cf04:	e1a01005 	mov	r1, r5
         7cf08:	e5960000 	ldr	r0, [r6]
         7cf0c:	eb6d1cd0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7cf10:	e5870000 	str	r0, [r7]
         7cf14:	e3a01001 	mov	r1, #1	; 0x1
         7cf18:	e5960000 	ldr	r0, [r6]
         7cf1c:	eb6d1ccc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7cf20:	e59d1000 	ldr	r1, [sp]
         7cf24:	e5810000 	str	r0, [r1]
         7cf28:	e5970000 	ldr	r0, [r7]
         7cf2c:	e3100003 	tst	r0, #3	; 0x3
         7cf30:	01a00140 	moveq	r0, r0, asr #2
         7cf34:	0a000000 	beq	7cf3c <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x11c>
         7cf38:	eb6d1477 	bl	1bc211c <$_RINTError(long)>
         7cf3c:	e2800001 	add	r0, r0, #1	; 0x1
         7cf40:	e1a02100 	mov	r2, r0, lsl #2
         7cf44:	e5872000 	str	r2, [r7]
         7cf48:	e1a01005 	mov	r1, r5
         7cf4c:	e5960000 	ldr	r0, [r6]
         7cf50:	eb6d2500 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         7cf54:	e5940000 	ldr	r0, [r4]
         7cf58:	e5900000 	ldr	r0, [r0]
         7cf5c:	e3300002 	teq	r0, #2	; 0x2
         7cf60:	0a00004e 	beq	7d0a0 <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x280>
         7cf64:	e1a01004 	mov	r1, r4
         7cf68:	e1a0000d 	mov	r0, sp
         7cf6c:	eb66f765 	bl	1a3ad08 <$member_p__FRC6RefVarT1>
         7cf70:	e5890000 	str	r0, [r9]
         7cf74:	e3300002 	teq	r0, #2	; 0x2
         7cf78:	1a000048 	bne	7d0a0 <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x280>
         7cf7c:	e24dd004 	sub	sp, sp, #4	; 0x4
         7cf80:	e3a00002 	mov	r0, #2	; 0x2
         7cf84:	eb6d1470 	bl	1bc214c <$AllocateRefHandle(long)>
         7cf88:	e58d0000 	str	r0, [sp]
         7cf8c:	e1a0000d 	mov	r0, sp
         7cf90:	e1a02004 	mov	r2, r4
         7cf94:	e28d1004 	add	r1, sp, #4	; 0x4
         7cf98:	eb66ef1c 	bl	1a38c10 <$Append__FRC6RefVarN21>
         7cf9c:	e59d0000 	ldr	r0, [sp]
         7cfa0:	eb6d1885 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7cfa4:	e28dd004 	add	sp, sp, #4	; 0x4
         7cfa8:	ea00003c 	b	7d0a0 <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x280>
         7cfac:	0c100810 	ldceq	8, cr0, [r0], -#64
         7cfb0:	0c100b68 	ldceq	11, cr0, [r0], -#416
         7cfb4:	e5940000 	ldr	r0, [r4]
         7cfb8:	e5900000 	ldr	r0, [r0]
         7cfbc:	e3300002 	teq	r0, #2	; 0x2
         7cfc0:	0a00002c 	beq	7d078 <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x258>
         7cfc4:	e24dd004 	sub	sp, sp, #4	; 0x4
         7cfc8:	e59f00a4 	ldr	r0, [pc, #a4]	; 7d074 <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x254>
         7cfcc:	e3a01002 	mov	r1, #2	; 0x2
         7cfd0:	e58d0014 	str	r0, [sp, #20]
         7cfd4:	eb6d1457 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         7cfd8:	e59d1008 	ldr	r1, [sp, #8]
         7cfdc:	e5810000 	str	r0, [r1]
         7cfe0:	e3a00004 	mov	r0, #4	; 0x4
         7cfe4:	eb6d1458 	bl	1bc214c <$AllocateRefHandle(long)>
         7cfe8:	e1a0a000 	mov	sl, r0
         7cfec:	e5902000 	ldr	r2, [r0]
         7cff0:	e59d0008 	ldr	r0, [sp, #8]
         7cff4:	e5900000 	ldr	r0, [r0]
         7cff8:	e3a01000 	mov	r1, #0	; 0x0
         7cffc:	eb6d24d5 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         7d000:	e1a0000a 	mov	r0, sl
         7d004:	eb6d186c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d008:	e3a0a000 	mov	sl, #0	; 0x0
         7d00c:	e3a01001 	mov	r1, #1	; 0x1
         7d010:	e59d0014 	ldr	r0, [sp, #20]
         7d014:	eb6d1447 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         7d018:	e5880000 	str	r0, [r8]
         7d01c:	e5941000 	ldr	r1, [r4]
         7d020:	e5912000 	ldr	r2, [r1]
         7d024:	e1a0100a 	mov	r1, sl
         7d028:	eb6d24ca 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         7d02c:	e5982000 	ldr	r2, [r8]
         7d030:	e59d0008 	ldr	r0, [sp, #8]
         7d034:	e5900000 	ldr	r0, [r0]
         7d038:	e3a01001 	mov	r1, #1	; 0x1
         7d03c:	eb6d24c5 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         7d040:	e59d1018 	ldr	r1, [sp, #24]
         7d044:	e5b10020 	ldr	r0, [r1, #32]!
         7d048:	eb6d143f 	bl	1bc214c <$AllocateRefHandle(long)>
         7d04c:	e58d0000 	str	r0, [sp]
         7d050:	e1a0000d 	mov	r0, sp
         7d054:	e28d1008 	add	r1, sp, #8	; 0x8
         7d058:	eb66eef7 	bl	1a38c3c <$DictAppendItem__FRC6RefVarT1>
         7d05c:	e1a04000 	mov	r4, r0
         7d060:	e59d0000 	ldr	r0, [sp]
         7d064:	eb6d1854 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d068:	e58d4010 	str	r4, [sp, #16]
         7d06c:	e28dd004 	add	sp, sp, #4	; 0x4
         7d070:	ea000002 	b	7d080 <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x260>
         7d074:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         7d078:	e3a00002 	mov	r0, #2	; 0x2
         7d07c:	e58d000c 	str	r0, [sp, #12]
         7d080:	e5d50000 	ldrb	r0, [r5]
         7d084:	e3300000 	teq	r0, #0	; 0x0
         7d088:	0a000004 	beq	7d0a0 <TrieAdd(char *, AirusAParmBlock **, RefVar const &)+0x280>
         7d08c:	e1a02005 	mov	r2, r5
         7d090:	e59d300c 	ldr	r3, [sp, #12]
         7d094:	e3a01000 	mov	r1, #0	; 0x0
         7d098:	e51b0030 	ldr	r0, [fp, -#48]
         7d09c:	eb66100f 	bl	1a010e0 <$AddWord(AirusAParmBlock **, unsigned long, unsigned char *, unsigned char *)>
         7d0a0:	e1a00009 	mov	r0, r9
         7d0a4:	eb6d1844 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d0a8:	e1a00007 	mov	r0, r7
         7d0ac:	eb6d1842 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d0b0:	e59d0000 	ldr	r0, [sp]
         7d0b4:	eb6d1840 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d0b8:	e1a00006 	mov	r0, r6
         7d0bc:	eb6d183e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d0c0:	e59d0004 	ldr	r0, [sp, #4]
         7d0c4:	eb6d183c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d0c8:	e1a00008 	mov	r0, r8
         7d0cc:	eb6d183a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d0d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TagPhraseFrame__FRC6RefVarN21
 * Address: 0007dca0
 */
void globals::TagPhraseFrame() {
    /*
         7dca0:	e1a0c00d 	mov	ip, sp
         7dca4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         7dca8:	e24cb004 	sub	fp, ip, #4	; 0x4
         7dcac:	e1a04001 	mov	r4, r1
         7dcb0:	e1a05002 	mov	r5, r2
         7dcb4:	e24dd008 	sub	sp, sp, #8	; 0x8
         7dcb8:	e3a00002 	mov	r0, #2	; 0x2
         7dcbc:	eb6d1122 	bl	1bc214c <$AllocateRefHandle(long)>
         7dcc0:	e58d0004 	str	r0, [sp, #4]
         7dcc4:	e3a00002 	mov	r0, #2	; 0x2
         7dcc8:	eb6d111f 	bl	1bc214c <$AllocateRefHandle(long)>
         7dccc:	e58d0000 	str	r0, [sp]
         7dcd0:	e59f00f8 	ldr	r0, [pc, #f8]	; 7ddd0 <TagPhraseFrame__FRC6RefVarN21+0x130>
         7dcd4:	e3a01000 	mov	r1, #0	; 0x0
         7dcd8:	eb6d1116 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         7dcdc:	e59d1000 	ldr	r1, [sp]
         7dce0:	e5810000 	str	r0, [r1]
         7dce4:	e5940000 	ldr	r0, [r4]
         7dce8:	e5900000 	ldr	r0, [r0]
         7dcec:	eb6d1d6e 	bl	1bc52ac <$Length(long)>
         7dcf0:	e1a07000 	mov	r7, r0
         7dcf4:	e3a06000 	mov	r6, #0	; 0x0
         7dcf8:	e3500000 	cmp	r0, #0	; 0x0
         7dcfc:	9a00002c 	bls	7ddb4 <TagPhraseFrame__FRC6RefVarN21+0x114>
         7dd00:	e3a09002 	mov	r9, #2	; 0x2
         7dd04:	e59f80c8 	ldr	r8, [pc, #c8]	; 7ddd4 <TagPhraseFrame__FRC6RefVarN21+0x134>
         7dd08:	e1a01006 	mov	r1, r6
         7dd0c:	e5940000 	ldr	r0, [r4]
         7dd10:	e5900000 	ldr	r0, [r0]
         7dd14:	eb6d194e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7dd18:	e59d1004 	ldr	r1, [sp, #4]
         7dd1c:	e5810000 	str	r0, [r1]
         7dd20:	e24dd008 	sub	sp, sp, #8	; 0x8
         7dd24:	eb6d1d5e 	bl	1bc52a4 <$IsSymbol(long)>
         7dd28:	e3300000 	teq	r0, #0	; 0x0
         7dd2c:	0a000009 	beq	7dd58 <TagPhraseFrame__FRC6RefVarN21+0xb8>
         7dd30:	e1a00009 	mov	r0, r9
         7dd34:	eb6d1104 	bl	1bc214c <$AllocateRefHandle(long)>
         7dd38:	e58d0000 	str	r0, [sp]
         7dd3c:	e1a0000d 	mov	r0, sp
         7dd40:	e28d100c 	add	r1, sp, #12	; 0xc
         7dd44:	eb66f3ee 	bl	1a3ad04 <$MapSymToFrame__FRC6RefVarT1>
         7dd48:	e59d100c 	ldr	r1, [sp, #12]
         7dd4c:	e5810000 	str	r0, [r1]
         7dd50:	e59d0000 	ldr	r0, [sp]
         7dd54:	eb6d1518 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7dd58:	e28d000c 	add	r0, sp, #12	; 0xc
         7dd5c:	eb6d1102 	bl	1bc216c <$Clone(RefVar const &)>
         7dd60:	e59d100c 	ldr	r1, [sp, #12]
         7dd64:	e1a02005 	mov	r2, r5
         7dd68:	e5810000 	str	r0, [r1]
         7dd6c:	e1a01008 	mov	r1, r8
         7dd70:	e28d000c 	add	r0, sp, #12	; 0xc
         7dd74:	eb6d217b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7dd78:	e1a00009 	mov	r0, r9
         7dd7c:	eb6d10f2 	bl	1bc214c <$AllocateRefHandle(long)>
         7dd80:	e58d0004 	str	r0, [sp, #4]
         7dd84:	e28d0004 	add	r0, sp, #4	; 0x4
         7dd88:	e28d200c 	add	r2, sp, #12	; 0xc
         7dd8c:	e28d1008 	add	r1, sp, #8	; 0x8
         7dd90:	eb66eb9e 	bl	1a38c10 <$Append__FRC6RefVarN21>
         7dd94:	e59d1008 	ldr	r1, [sp, #8]
         7dd98:	e5810000 	str	r0, [r1]
         7dd9c:	e59d0004 	ldr	r0, [sp, #4]
         7dda0:	eb6d1505 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7dda4:	e28dd008 	add	sp, sp, #8	; 0x8
         7dda8:	e2866001 	add	r6, r6, #1	; 0x1
         7ddac:	e1560007 	cmp	r6, r7
         7ddb0:	3affffd4 	bcc	7dd08 <TagPhraseFrame__FRC6RefVarN21+0x68>
         7ddb4:	e59d0000 	ldr	r0, [sp]
         7ddb8:	e5904000 	ldr	r4, [r0]
         7ddbc:	eb6d14fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7ddc0:	e59d0004 	ldr	r0, [sp, #4]
         7ddc4:	eb6d14fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7ddc8:	e1a00004 	mov	r0, r4
         7ddcc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         7ddd0:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         7ddd4:	00684e98 	streqb	r4, [r8], -#232
    */
}

/**
 * Symbol: TrieInit(void)
 * Address: 0007e8f4
 */
TrieInit(void) {
    /*
         7e8f4:	e3a0000f 	mov	r0, #15	; 0xf
         7e8f8:	e3a01004 	mov	r1, #4	; 0x4
         7e8fc:	ea6609e0 	b	1a01084 <$NewDictionary>
    */
}

/**
 * Symbol: TagStringHelper(RefVar const &, RefVar)
 * Address: 00081ddc
 */
TagStringHelper(RefVar const &, RefVar) {
    /*
         81ddc:	e1a0c00d 	mov	ip, sp
         81de0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         81de4:	e24cb004 	sub	fp, ip, #4	; 0x4
         81de8:	e1a04000 	mov	r4, r0
         81dec:	e24dd004 	sub	sp, sp, #4	; 0x4
         81df0:	e5910000 	ldr	r0, [r1]
         81df4:	e5900000 	ldr	r0, [r0]
         81df8:	eb6d00d3 	bl	1bc214c <$AllocateRefHandle(long)>
         81dfc:	e40d0014 	str	r0, [sp], -#20
         81e00:	e3a00002 	mov	r0, #2	; 0x2
         81e04:	eb6d00d0 	bl	1bc214c <$AllocateRefHandle(long)>
         81e08:	e58d0010 	str	r0, [sp, #16]
         81e0c:	e3a00002 	mov	r0, #2	; 0x2
         81e10:	eb6d00cd 	bl	1bc214c <$AllocateRefHandle(long)>
         81e14:	e58d000c 	str	r0, [sp, #12]
         81e18:	e3a00002 	mov	r0, #2	; 0x2
         81e1c:	eb6d00ca 	bl	1bc214c <$AllocateRefHandle(long)>
         81e20:	e58d0008 	str	r0, [sp, #8]
         81e24:	e3a00002 	mov	r0, #2	; 0x2
         81e28:	eb6d00c7 	bl	1bc214c <$AllocateRefHandle(long)>
         81e2c:	e58d0004 	str	r0, [sp, #4]
         81e30:	e3a00002 	mov	r0, #2	; 0x2
         81e34:	eb6d00c4 	bl	1bc214c <$AllocateRefHandle(long)>
         81e38:	e58d0000 	str	r0, [sp]
         81e3c:	e59f0070 	ldr	r0, [pc, #70]	; 81eb4 <TagStringHelper(RefVar const &, RefVar)+0xd8>
         81e40:	e5900000 	ldr	r0, [r0]
         81e44:	e5901000 	ldr	r1, [r0]
         81e48:	e5940000 	ldr	r0, [r4]
         81e4c:	e5900000 	ldr	r0, [r0]
         81e50:	eb6d0902 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         81e54:	e59d1008 	ldr	r1, [sp, #8]
         81e58:	e5810000 	str	r0, [r1]
         81e5c:	e59f0054 	ldr	r0, [pc, #54]	; 81eb8 <TagStringHelper(RefVar const &, RefVar)+0xdc>
         81e60:	e5900000 	ldr	r0, [r0]
         81e64:	e5901000 	ldr	r1, [r0]
         81e68:	e5940000 	ldr	r0, [r4]
         81e6c:	e5900000 	ldr	r0, [r0]
         81e70:	eb6d08fa 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         81e74:	e59d1004 	ldr	r1, [sp, #4]
         81e78:	e5810000 	str	r0, [r1]
         81e7c:	e59d0008 	ldr	r0, [sp, #8]
         81e80:	e5900000 	ldr	r0, [r0]
         81e84:	e3a05002 	mov	r5, #2	; 0x2
         81e88:	e3300002 	teq	r0, #2	; 0x2
         81e8c:	0a000003 	beq	81ea0 <TagStringHelper(RefVar const &, RefVar)+0xc4>
         81e90:	e28d0008 	add	r0, sp, #8	; 0x8
         81e94:	eb6ca5c0 	bl	1bab59c <$IsRichString(RefVar const &)>
         81e98:	e3300000 	teq	r0, #0	; 0x0
         81e9c:	0a000006 	beq	81ebc <TagStringHelper(RefVar const &, RefVar)+0xe0>
         81ea0:	e59d0004 	ldr	r0, [sp, #4]
         81ea4:	e5901000 	ldr	r1, [r0]
         81ea8:	e59d0000 	ldr	r0, [sp]
         81eac:	e5801000 	str	r1, [r0]
         81eb0:	ea00002d 	b	81f6c <TagStringHelper(RefVar const &, RefVar)+0x190>
         81eb4:	00682da8 	rsbeq	r2, r8, r8, lsr #27
         81eb8:	00683440 	rsbeq	r3, r8, r0, asr #8
         81ebc:	e59d0004 	ldr	r0, [sp, #4]
         81ec0:	e5900000 	ldr	r0, [r0]
         81ec4:	e3300002 	teq	r0, #2	; 0x2
         81ec8:	0a000003 	beq	81edc <TagStringHelper(RefVar const &, RefVar)+0x100>
         81ecc:	e28d0004 	add	r0, sp, #4	; 0x4
         81ed0:	eb6ca5b1 	bl	1bab59c <$IsRichString(RefVar const &)>
         81ed4:	e3300000 	teq	r0, #0	; 0x0
         81ed8:	0a000004 	beq	81ef0 <TagStringHelper(RefVar const &, RefVar)+0x114>
         81edc:	e59d0008 	ldr	r0, [sp, #8]
         81ee0:	e5900000 	ldr	r0, [r0]
         81ee4:	e59d1000 	ldr	r1, [sp]
         81ee8:	e5810000 	str	r0, [r1]
         81eec:	ea00001e 	b	81f6c <TagStringHelper(RefVar const &, RefVar)+0x190>
         81ef0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         81ef4:	e28f0f2f 	add	r0, pc, #188	; 0xbc
         81ef8:	eb6d0cf4 	bl	1bc52d0 <$MakeString(char const *)>
         81efc:	eb6d0092 	bl	1bc214c <$AllocateRefHandle(long)>
         81f00:	e58d0000 	str	r0, [sp]
         81f04:	e1a0400d 	mov	r4, sp
         81f08:	e1a00005 	mov	r0, r5
         81f0c:	eb6d008e 	bl	1bc214c <$AllocateRefHandle(long)>
         81f10:	e58d0004 	str	r0, [sp, #4]
         81f14:	e28d0004 	add	r0, sp, #4	; 0x4
         81f18:	e28d1014 	add	r1, sp, #20	; 0x14
         81f1c:	e1a02004 	mov	r2, r4
         81f20:	eb6dbe70 	bl	1bf18e8 <$FStrConcat__FRC6RefVarN21>
         81f24:	e59d100c 	ldr	r1, [sp, #12]
         81f28:	e5810000 	str	r0, [r1]
         81f2c:	e59d0000 	ldr	r0, [sp]
         81f30:	eb6d04a1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         81f34:	e59d0004 	ldr	r0, [sp, #4]
         81f38:	eb6d049f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         81f3c:	e1a00005 	mov	r0, r5
         81f40:	eb6d0081 	bl	1bc214c <$AllocateRefHandle(long)>
         81f44:	e58d0008 	str	r0, [sp, #8]
         81f48:	e28d0008 	add	r0, sp, #8	; 0x8
         81f4c:	e28d2010 	add	r2, sp, #16	; 0x10
         81f50:	e28d100c 	add	r1, sp, #12	; 0xc
         81f54:	eb6dbe63 	bl	1bf18e8 <$FStrConcat__FRC6RefVarN21>
         81f58:	e59d100c 	ldr	r1, [sp, #12]
         81f5c:	e5810000 	str	r0, [r1]
         81f60:	e59d0008 	ldr	r0, [sp, #8]
         81f64:	eb6d0494 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         81f68:	e28dd00c 	add	sp, sp, #12	; 0xc
         81f6c:	e24dd004 	sub	sp, sp, #4	; 0x4
         81f70:	e59d0004 	ldr	r0, [sp, #4]
         81f74:	e5900000 	ldr	r0, [r0]
         81f78:	e3300002 	teq	r0, #2	; 0x2
         81f7c:	1a00000e 	bne	81fbc <TagStringHelper(RefVar const &, RefVar)+0x1e0>
         81f80:	e59d0004 	ldr	r0, [sp, #4]
         81f84:	eb6d048c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         81f88:	e59d0008 	ldr	r0, [sp, #8]
         81f8c:	eb6d048a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         81f90:	e59d000c 	ldr	r0, [sp, #12]
         81f94:	eb6d0488 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         81f98:	e59d0010 	ldr	r0, [sp, #16]
         81f9c:	eb6d0486 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         81fa0:	e59d0014 	ldr	r0, [sp, #20]
         81fa4:	eb6d0484 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         81fa8:	e59d0018 	ldr	r0, [sp, #24]
         81fac:	eb6d0482 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         81fb0:	e1a00005 	mov	r0, r5
         81fb4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         81fb8:	20000000 	andcs	r0, r0, r0
         81fbc:	e59f00e8 	ldr	r0, [pc, #e8]	; 820ac <TagStringHelper(RefVar const &, RefVar)+0x2d0>
         81fc0:	e1a04000 	mov	r4, r0
         81fc4:	e3a01000 	mov	r1, #0	; 0x0
         81fc8:	eb6d005a 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         81fcc:	e59d1014 	ldr	r1, [sp, #20]
         81fd0:	e5810000 	str	r0, [r1]
         81fd4:	e1a00004 	mov	r0, r4
         81fd8:	e3a01000 	mov	r1, #0	; 0x0
         81fdc:	eb6d0055 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         81fe0:	e59d1010 	ldr	r1, [sp, #16]
         81fe4:	e5810000 	str	r0, [r1]
         81fe8:	e1a00005 	mov	r0, r5
         81fec:	eb6d0056 	bl	1bc214c <$AllocateRefHandle(long)>
         81ff0:	e58d0000 	str	r0, [sp]
         81ff4:	e1a0000d 	mov	r0, sp
         81ff8:	e28d1004 	add	r1, sp, #4	; 0x4
         81ffc:	eb66e359 	bl	1a3ad68 <$SplitString__FRC6RefVarT1>
         82000:	e59d1010 	ldr	r1, [sp, #16]
         82004:	e5810000 	str	r0, [r1]
         82008:	e59d0000 	ldr	r0, [sp]
         8200c:	eb6d046a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         82010:	e24dd004 	sub	sp, sp, #4	; 0x4
         82014:	e1a00005 	mov	r0, r5
         82018:	eb6d004b 	bl	1bc214c <$AllocateRefHandle(long)>
         8201c:	e58d0000 	str	r0, [sp]
         82020:	e1a0000d 	mov	r0, sp
         82024:	e28d2014 	add	r2, sp, #20	; 0x14
         82028:	e28d101c 	add	r1, sp, #28	; 0x1c
         8202c:	eb6dfc22 	bl	1c010bc <$DSPartialStrMatch__FRC6RefVar6RefVarT2>
         82030:	e2504002 	subs	r4, r0, #2	; 0x2
         82034:	13a04001 	movne	r4, #1	; 0x1
         82038:	e59d0000 	ldr	r0, [sp]
         8203c:	eb6d045e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         82040:	e3340000 	teq	r4, #0	; 0x0
         82044:	0a00001a 	beq	820b4 <TagStringHelper(RefVar const &, RefVar)+0x2d8>
         82048:	e24dd004 	sub	sp, sp, #4	; 0x4
         8204c:	e1a00005 	mov	r0, r5
         82050:	eb6d003d 	bl	1bc214c <$AllocateRefHandle(long)>
         82054:	e58d0000 	str	r0, [sp]
         82058:	e1a0000d 	mov	r0, sp
         8205c:	e59f204c 	ldr	r2, [pc, #4c]	; 820b0 <TagStringHelper(RefVar const &, RefVar)+0x2d4>
         82060:	e28d101c 	add	r1, sp, #28	; 0x1c
         82064:	eb66e74b 	bl	1a3bd98 <$UniqueAppendItem__FRC6RefVarN21>
         82068:	e1a04000 	mov	r4, r0
         8206c:	e59d0000 	ldr	r0, [sp]
         82070:	eb6d0451 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         82074:	e59d000c 	ldr	r0, [sp, #12]
         82078:	eb6d044f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8207c:	e59d0010 	ldr	r0, [sp, #16]
         82080:	eb6d044d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         82084:	e59d0014 	ldr	r0, [sp, #20]
         82088:	eb6d044b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8208c:	e59d0018 	ldr	r0, [sp, #24]
         82090:	eb6d0449 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         82094:	e59d001c 	ldr	r0, [sp, #28]
         82098:	eb6d0447 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8209c:	e59d0020 	ldr	r0, [sp, #32]
         820a0:	eb6d0445 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         820a4:	e1a00004 	mov	r0, r4
         820a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         820ac:	00681f10 	rsbeq	r1, r8, r0, lsl pc
         820b0:	00683db8 	streqh	r3, [r8], -#216
         820b4:	e59d0008 	ldr	r0, [sp, #8]
         820b8:	eb6d043f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         820bc:	e59d000c 	ldr	r0, [sp, #12]
         820c0:	eb6d043d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         820c4:	e59d0010 	ldr	r0, [sp, #16]
         820c8:	eb6d043b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         820cc:	e59d0014 	ldr	r0, [sp, #20]
         820d0:	eb6d0439 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         820d4:	e59d0018 	ldr	r0, [sp, #24]
         820d8:	eb6d0437 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         820dc:	e59d001c 	ldr	r0, [sp, #28]
         820e0:	eb6d0435 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         820e4:	e1a00005 	mov	r0, r5
         820e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TrimBlanksAndPunct__FRC6RefVarT1
 * Address: 000845c0
 */
void globals::TrimBlanksAndPunct() {
    /*
         845c0:	e1a0c00d 	mov	ip, sp
         845c4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         845c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         845cc:	e1a04001 	mov	r4, r1
         845d0:	e24dd004 	sub	sp, sp, #4	; 0x4
         845d4:	e1a0000d 	mov	r0, sp
         845d8:	eb6cf2be 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         845dc:	e1a0000d 	mov	r0, sp
         845e0:	eb6cf6cb 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         845e4:	e1a07000 	mov	r7, r0
         845e8:	e1a0000d 	mov	r0, sp
         845ec:	e3a01000 	mov	r1, #0	; 0x0
         845f0:	eb6cf6c2 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         845f4:	e3a08000 	mov	r8, #0	; 0x0
         845f8:	e1a06007 	mov	r6, r7
         845fc:	e1a00007 	mov	r0, r7
         84600:	eb6da856 	bl	1bee760 <$Ustrlen>
         84604:	e1a01000 	mov	r1, r0
         84608:	e3a05000 	mov	r5, #0	; 0x0
         8460c:	e3a0e018 	mov	lr, #24	; 0x18
         84610:	e28eea02 	add	lr, lr, #8192	; 0x2000
         84614:	e28e3001 	add	r3, lr, #1	; 0x1
         84618:	e28e2004 	add	r2, lr, #4	; 0x4
         8461c:	e28e9005 	add	r9, lr, #5	; 0x5
         84620:	e3500000 	cmp	r0, #0	; 0x0
         84624:	da00001f 	ble	846a8 <TrimBlanksAndPunct__FRC6RefVarT1+0xe8>
         84628:	e5960000 	ldr	r0, [r6]
         8462c:	e1a00820 	mov	r0, r0, lsr #16
         84630:	e1a00800 	mov	r0, r0, lsl #16
         84634:	e1a00820 	mov	r0, r0, lsr #16
         84638:	e1a0c000 	mov	ip, r0
         8463c:	e330000d 	teq	r0, #13	; 0xd
         84640:	1330000a 	teqne	r0, #10	; 0xa
         84644:	13300009 	teqne	r0, #9	; 0x9
         84648:	13300020 	teqne	r0, #32	; 0x20
         8464c:	11a0000c 	movne	r0, ip
         84650:	133c0021 	teqne	ip, #33	; 0x21
         84654:	13300022 	teqne	r0, #34	; 0x22
         84658:	13300027 	teqne	r0, #39	; 0x27
         8465c:	13300028 	teqne	r0, #40	; 0x28
         84660:	13300029 	teqne	r0, #41	; 0x29
         84664:	1330002c 	teqne	r0, #44	; 0x2c
         84668:	1330002d 	teqne	r0, #45	; 0x2d
         8466c:	1330002e 	teqne	r0, #46	; 0x2e
         84670:	1330003a 	teqne	r0, #58	; 0x3a
         84674:	1330003b 	teqne	r0, #59	; 0x3b
         84678:	1330003f 	teqne	r0, #63	; 0x3f
         8467c:	1130000e 	teqne	r0, lr
         84680:	11300003 	teqne	r0, r3
         84684:	11300002 	teqne	r0, r2
         84688:	11300009 	teqne	r0, r9
         8468c:	133000c7 	teqne	r0, #199	; 0xc7
         84690:	133000c8 	teqne	r0, #200	; 0xc8
         84694:	1a000003 	bne	846a8 <TrimBlanksAndPunct__FRC6RefVarT1+0xe8>
         84698:	e2866002 	add	r6, r6, #2	; 0x2
         8469c:	e2855001 	add	r5, r5, #1	; 0x1
         846a0:	e1550001 	cmp	r5, r1
         846a4:	baffffdf 	blt	84628 <TrimBlanksAndPunct__FRC6RefVarT1+0x68>
         846a8:	e1350001 	teq	r5, r1
         846ac:	03a00002 	moveq	r0, #2	; 0x2
         846b0:	0a000043 	beq	847c4 <TrimBlanksAndPunct__FRC6RefVarT1+0x204>
         846b4:	e2410001 	sub	r0, r1, #1	; 0x1
         846b8:	e0876080 	add	r6, r7, r0, lsl #1
         846bc:	e1500005 	cmp	r0, r5
         846c0:	da00001e 	ble	84740 <TrimBlanksAndPunct__FRC6RefVarT1+0x180>
         846c4:	e596c000 	ldr	ip, [r6]
         846c8:	e1a0c82c 	mov	ip, ip, lsr #16
         846cc:	e1a0c80c 	mov	ip, ip, lsl #16
         846d0:	e1a0c82c 	mov	ip, ip, lsr #16
         846d4:	e1a0700c 	mov	r7, ip
         846d8:	e33c000d 	teq	ip, #13	; 0xd
         846dc:	133c000a 	teqne	ip, #10	; 0xa
         846e0:	133c0009 	teqne	ip, #9	; 0x9
         846e4:	133c0020 	teqne	ip, #32	; 0x20
         846e8:	13370021 	teqne	r7, #33	; 0x21
         846ec:	13370022 	teqne	r7, #34	; 0x22
         846f0:	13370027 	teqne	r7, #39	; 0x27
         846f4:	13370028 	teqne	r7, #40	; 0x28
         846f8:	13370029 	teqne	r7, #41	; 0x29
         846fc:	1337002c 	teqne	r7, #44	; 0x2c
         84700:	1337002d 	teqne	r7, #45	; 0x2d
         84704:	1337002e 	teqne	r7, #46	; 0x2e
         84708:	1337003a 	teqne	r7, #58	; 0x3a
         8470c:	1337003b 	teqne	r7, #59	; 0x3b
         84710:	1337003f 	teqne	r7, #63	; 0x3f
         84714:	1137000e 	teqne	r7, lr
         84718:	11370003 	teqne	r7, r3
         8471c:	11370002 	teqne	r7, r2
         84720:	11370009 	teqne	r7, r9
         84724:	133700c7 	teqne	r7, #199	; 0xc7
         84728:	133700c8 	teqne	r7, #200	; 0xc8
         8472c:	1a000003 	bne	84740 <TrimBlanksAndPunct__FRC6RefVarT1+0x180>
         84730:	e2466002 	sub	r6, r6, #2	; 0x2
         84734:	e2400001 	sub	r0, r0, #1	; 0x1
         84738:	e1500005 	cmp	r0, r5
         8473c:	caffffe0 	bgt	846c4 <TrimBlanksAndPunct__FRC6RefVarT1+0x104>
         84740:	e3350000 	teq	r5, #0	; 0x0
         84744:	02802001 	addeq	r2, r0, #1	; 0x1
         84748:	01320001 	teqeq	r2, r1
         8474c:	0a00001a 	beq	847bc <TrimBlanksAndPunct__FRC6RefVarT1+0x1fc>
         84750:	e0400005 	sub	r0, r0, r5
         84754:	e2806001 	add	r6, r0, #1	; 0x1
         84758:	e24dd004 	sub	sp, sp, #4	; 0x4
         8475c:	e2860001 	add	r0, r6, #1	; 0x1
         84760:	e1a01080 	mov	r1, r0, lsl #1
         84764:	e59f004c 	ldr	r0, [pc, #4c]	; 847b8 <TrimBlanksAndPunct__FRC6RefVarT1+0x1f8>
         84768:	eb6cf673 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         8476c:	eb6cf676 	bl	1bc214c <$AllocateRefHandle(long)>
         84770:	e58d0000 	str	r0, [sp]
         84774:	e5900000 	ldr	r0, [r0]
         84778:	eb6cf677 	bl	1bc215c <$BinaryData(long)>
         8477c:	e5c08001 	strb	r8, [r0, #1]
         84780:	e5c08000 	strb	r8, [r0]
         84784:	e1a03006 	mov	r3, r6
         84788:	e1a02005 	mov	r2, r5
         8478c:	e92d000c 	stmdb	sp!, {r2, r3}
         84790:	e1a03004 	mov	r3, r4
         84794:	e28d0008 	add	r0, sp, #8	; 0x8
         84798:	e3e02000 	mvn	r2, #0	; 0x0
         8479c:	e3a01000 	mov	r1, #0	; 0x0
         847a0:	eb6d0f25 	bl	1bc843c <$StrMunger__FRC6RefVarlT2T1N22>
         847a4:	e5bd0008 	ldr	r0, [sp, #8]!
         847a8:	e5904000 	ldr	r4, [r0]
         847ac:	eb6cfa82 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         847b0:	e1a00004 	mov	r0, r4
         847b4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         847b8:	006848d0 	ldreqd	r4, [r8], -#128
         847bc:	e5940000 	ldr	r0, [r4]
         847c0:	e5900000 	ldr	r0, [r0]
         847c4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ToObject(TDate const &)
 * Address: 0008a64c
 */
ToObject(TDate const &) {
    /*
         8a64c:	e1a0c00d 	mov	ip, sp
         8a650:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         8a654:	e24cb004 	sub	fp, ip, #4	; 0x4
         8a658:	e1a04000 	mov	r4, r0
         8a65c:	e24dd024 	sub	sp, sp, #36	; 0x24
         8a660:	e59f0170 	ldr	r0, [pc, #170]	; 8a7d8 <ToObject(TDate const &)+0x18c>
         8a664:	eb6cdec0 	bl	1bc216c <$Clone(RefVar const &)>
         8a668:	eb6cdeb7 	bl	1bc214c <$AllocateRefHandle(long)>
         8a66c:	e58d0020 	str	r0, [sp, #32]
         8a670:	e5940000 	ldr	r0, [r4]
         8a674:	e250ceb6 	subs	ip, r0, #2912	; 0xb60
         8a678:	235c0007 	cmpcs	ip, #7	; 0x7
         8a67c:	91a00100 	movls	r0, r0, lsl #2
         8a680:	83a00eda 	movhi	r0, #3488	; 0xda0
         8a684:	82800a02 	addhi	r0, r0, #8192	; 0x2000
         8a688:	eb6cdeaf 	bl	1bc214c <$AllocateRefHandle(long)>
         8a68c:	e58d0000 	str	r0, [sp]
         8a690:	e1a0200d 	mov	r2, sp
         8a694:	e59f1140 	ldr	r1, [pc, #140]	; 8a7dc <ToObject(TDate const &)+0x190>
         8a698:	e28d0020 	add	r0, sp, #32	; 0x20
         8a69c:	eb6cef31 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8a6a0:	e59d0000 	ldr	r0, [sp]
         8a6a4:	eb6ce2c4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a6a8:	e5940004 	ldr	r0, [r4, #4]
         8a6ac:	e1a00100 	mov	r0, r0, lsl #2
         8a6b0:	eb6cdea5 	bl	1bc214c <$AllocateRefHandle(long)>
         8a6b4:	e58d0004 	str	r0, [sp, #4]
         8a6b8:	e28d2004 	add	r2, sp, #4	; 0x4
         8a6bc:	e59f111c 	ldr	r1, [pc, #11c]	; 8a7e0 <ToObject(TDate const &)+0x194>
         8a6c0:	e28d0020 	add	r0, sp, #32	; 0x20
         8a6c4:	eb6cef27 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8a6c8:	e59d0004 	ldr	r0, [sp, #4]
         8a6cc:	eb6ce2ba 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a6d0:	e5940008 	ldr	r0, [r4, #8]
         8a6d4:	e1a00100 	mov	r0, r0, lsl #2
         8a6d8:	eb6cde9b 	bl	1bc214c <$AllocateRefHandle(long)>
         8a6dc:	e58d0008 	str	r0, [sp, #8]
         8a6e0:	e28d2008 	add	r2, sp, #8	; 0x8
         8a6e4:	e59f10f8 	ldr	r1, [pc, #f8]	; 8a7e4 <ToObject(TDate const &)+0x198>
         8a6e8:	e28d0020 	add	r0, sp, #32	; 0x20
         8a6ec:	eb6cef1d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8a6f0:	e59d0008 	ldr	r0, [sp, #8]
         8a6f4:	eb6ce2b0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a6f8:	e5940018 	ldr	r0, [r4, #24]
         8a6fc:	e1a00100 	mov	r0, r0, lsl #2
         8a700:	eb6cde91 	bl	1bc214c <$AllocateRefHandle(long)>
         8a704:	e58d000c 	str	r0, [sp, #12]
         8a708:	e28d200c 	add	r2, sp, #12	; 0xc
         8a70c:	e59f10d4 	ldr	r1, [pc, #d4]	; 8a7e8 <ToObject(TDate const &)+0x19c>
         8a710:	e28d0020 	add	r0, sp, #32	; 0x20
         8a714:	eb6cef13 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8a718:	e59d000c 	ldr	r0, [sp, #12]
         8a71c:	eb6ce2a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a720:	e594000c 	ldr	r0, [r4, #12]
         8a724:	e1a00100 	mov	r0, r0, lsl #2
         8a728:	eb6cde87 	bl	1bc214c <$AllocateRefHandle(long)>
         8a72c:	e58d0010 	str	r0, [sp, #16]
         8a730:	e28d2010 	add	r2, sp, #16	; 0x10
         8a734:	e59f10b0 	ldr	r1, [pc, #b0]	; 8a7ec <ToObject(TDate const &)+0x1a0>
         8a738:	e28d0020 	add	r0, sp, #32	; 0x20
         8a73c:	eb6cef09 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8a740:	e59d0010 	ldr	r0, [sp, #16]
         8a744:	eb6ce29c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a748:	e5940010 	ldr	r0, [r4, #16]
         8a74c:	e1a00100 	mov	r0, r0, lsl #2
         8a750:	eb6cde7d 	bl	1bc214c <$AllocateRefHandle(long)>
         8a754:	e58d0014 	str	r0, [sp, #20]
         8a758:	e28d2014 	add	r2, sp, #20	; 0x14
         8a75c:	e59f108c 	ldr	r1, [pc, #8c]	; 8a7f0 <ToObject(TDate const &)+0x1a4>
         8a760:	e28d0020 	add	r0, sp, #32	; 0x20
         8a764:	eb6ceeff 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8a768:	e59d0014 	ldr	r0, [sp, #20]
         8a76c:	eb6ce292 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a770:	e5940014 	ldr	r0, [r4, #20]
         8a774:	e1a00100 	mov	r0, r0, lsl #2
         8a778:	eb6cde73 	bl	1bc214c <$AllocateRefHandle(long)>
         8a77c:	e58d0018 	str	r0, [sp, #24]
         8a780:	e28d2018 	add	r2, sp, #24	; 0x18
         8a784:	e59f1068 	ldr	r1, [pc, #68]	; 8a7f4 <ToObject(TDate const &)+0x1a8>
         8a788:	e28d0020 	add	r0, sp, #32	; 0x20
         8a78c:	eb6ceef5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8a790:	e59d0018 	ldr	r0, [sp, #24]
         8a794:	eb6ce288 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a798:	e1a00004 	mov	r0, r4
         8a79c:	eb6dd1e9 	bl	1bfef48 <TDate::$DaysInMonth( const(void))>
         8a7a0:	e1a00100 	mov	r0, r0, lsl #2
         8a7a4:	eb6cde68 	bl	1bc214c <$AllocateRefHandle(long)>
         8a7a8:	e58d001c 	str	r0, [sp, #28]
         8a7ac:	e28d201c 	add	r2, sp, #28	; 0x1c
         8a7b0:	e59f1040 	ldr	r1, [pc, #40]	; 8a7f8 <ToObject(TDate const &)+0x1ac>
         8a7b4:	e28d0020 	add	r0, sp, #32	; 0x20
         8a7b8:	eb6ceeea 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8a7bc:	e59d001c 	ldr	r0, [sp, #28]
         8a7c0:	eb6ce27d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a7c4:	e59d0020 	ldr	r0, [sp, #32]
         8a7c8:	e5904000 	ldr	r4, [r0]
         8a7cc:	eb6ce27a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a7d0:	e1a00004 	mov	r0, r4
         8a7d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         8a7d8:	00680218 	rsbeq	r0, r8, r8, lsl r2
         8a7dc:	00685268 	rsbeq	r5, r8, r8, ror #4
         8a7e0:	00683910 	rsbeq	r3, r8, r0, lsl r9
         8a7e4:	006827d8 	ldreqd	r2, [r8], -#120
         8a7e8:	00682820 	rsbeq	r2, r8, r0, lsr #16
         8a7ec:	00683130 	rsbeq	r3, r8, r0, lsr r1
         8a7f0:	006838a0 	rsbeq	r3, r8, r0, lsr #17
         8a7f4:	006844e0 	rsbeq	r4, r8, r0, ror #9
         8a7f8:	00682830 	rsbeq	r2, r8, r0, lsr r8
    */
}

/**
 * Symbol: TestLineOverlap__FP5TRectT1
 * Address: 000a2ffc
 */
void globals::TestLineOverlap() {
    /*
         a2ffc:	e5912004 	ldr	r2, [r1, #4]
         a3000:	e1a02842 	mov	r2, r2, asr #16
         a3004:	e5911000 	ldr	r1, [r1]
         a3008:	e0821841 	add	r1, r2, r1, asr #16
         a300c:	e1a010c1 	mov	r1, r1, asr #1
         a3010:	e5902000 	ldr	r2, [r0]
         a3014:	e1510842 	cmp	r1, r2, asr #16
         a3018:	b3a00000 	movlt	r0, #0	; 0x0
         a301c:	b1a0f00e 	movlt	pc, lr
         a3020:	e5900004 	ldr	r0, [r0, #4]
         a3024:	e1510840 	cmp	r1, r0, asr #16
         a3028:	d3a00001 	movle	r0, #1	; 0x1
         a302c:	c3a00002 	movgt	r0, #2	; 0x2
         a3030:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ToOutsideGrayBorder(TRect *, TRect const *)
 * Address: 000a3498
 */
ToOutsideGrayBorder(TRect *, TRect const *) {
    /*
         a3498:	e1a0c00d 	mov	ip, sp
         a349c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a34a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         a34a4:	e1a05000 	mov	r5, r0
         a34a8:	e1a04001 	mov	r4, r1
         a34ac:	e3e0100b 	mvn	r1, #11	; 0xb
         a34b0:	e1a02001 	mov	r2, r1
         a34b4:	eb6ab4e1 	bl	1b50840 <$InsetRect__FP4RectlT2>
         a34b8:	e3340000 	teq	r4, #0	; 0x0
         a34bc:	11a01004 	movne	r1, r4
         a34c0:	11a00005 	movne	r0, r5
         a34c4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         a34c8:	1a67a86d 	bne	1a8d684 <$ClipBoxToBox(TRect *, TRect const *)>
         a34cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TestWordOverlap(RefVar const &, long, SortStuff *)
 * Address: 000a34d0
 */
TestWordOverlap(RefVar const &, long, SortStuff *) {
    /*
         a34d0:	e1a0c00d 	mov	ip, sp
         a34d4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         a34d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         a34dc:	e1a05000 	mov	r5, r0
         a34e0:	e1a06001 	mov	r6, r1
         a34e4:	e1a04002 	mov	r4, r2
         a34e8:	e24dd020 	sub	sp, sp, #32	; 0x20
         a34ec:	e3a00002 	mov	r0, #2	; 0x2
         a34f0:	eb6c7b15 	bl	1bc214c <$AllocateRefHandle(long)>
         a34f4:	e58d001c 	str	r0, [sp, #28]
         a34f8:	e2840004 	add	r0, r4, #4	; 0x4
         a34fc:	e1a08000 	mov	r8, r0
         a3500:	e5900000 	ldr	r0, [r0]
         a3504:	e5900000 	ldr	r0, [r0]
         a3508:	e1a01006 	mov	r1, r6
         a350c:	eb6c8350 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a3510:	e3100003 	tst	r0, #3	; 0x3
         a3514:	01a00140 	moveq	r0, r0, asr #2
         a3518:	0a000000 	beq	a3520 <TestWordOverlap(RefVar const &, long, SortStuff *)+0x50>
         a351c:	eb6c7afe 	bl	1bc211c <$_RINTError(long)>
         a3520:	e1a07000 	mov	r7, r0
         a3524:	e2861001 	add	r1, r6, #1	; 0x1
         a3528:	e5980000 	ldr	r0, [r8]
         a352c:	e5900000 	ldr	r0, [r0]
         a3530:	eb6c8347 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a3534:	e3100003 	tst	r0, #3	; 0x3
         a3538:	01a00140 	moveq	r0, r0, asr #2
         a353c:	0a000000 	beq	a3544 <TestWordOverlap(RefVar const &, long, SortStuff *)+0x74>
         a3540:	eb6c7af5 	bl	1bc211c <$_RINTError(long)>
         a3544:	e1a06000 	mov	r6, r0
         a3548:	e1a00005 	mov	r0, r5
         a354c:	eb68b4c0 	bl	1ad0854 <$GetKidBounds(RefVar const &)>
         a3550:	eb6c7afd 	bl	1bc214c <$AllocateRefHandle(long)>
         a3554:	e58d0000 	str	r0, [sp]
         a3558:	e1a0000d 	mov	r0, sp
         a355c:	e28d1014 	add	r1, sp, #20	; 0x14
         a3560:	eb67c544 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         a3564:	e59d0000 	ldr	r0, [sp]
         a3568:	eb6c7f13 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a356c:	e3a08000 	mov	r8, #0	; 0x0
         a3570:	e1a05007 	mov	r5, r7
         a3574:	e1570006 	cmp	r7, r6
         a3578:	aa00005e 	bge	a36f8 <TestWordOverlap(RefVar const &, long, SortStuff *)+0x228>
         a357c:	e24dd004 	sub	sp, sp, #4	; 0x4
         a3580:	e5940000 	ldr	r0, [r4]
         a3584:	e5900000 	ldr	r0, [r0]
         a3588:	e1a01005 	mov	r1, r5
         a358c:	eb6c8330 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         a3590:	e59d1020 	ldr	r1, [sp, #32]
         a3594:	e5810000 	str	r0, [r1]
         a3598:	e28d0020 	add	r0, sp, #32	; 0x20
         a359c:	eb68b4ac 	bl	1ad0854 <$GetKidBounds(RefVar const &)>
         a35a0:	eb6c7ae9 	bl	1bc214c <$AllocateRefHandle(long)>
         a35a4:	e58d0000 	str	r0, [sp]
         a35a8:	e1a0000d 	mov	r0, sp
         a35ac:	e28d1010 	add	r1, sp, #16	; 0x10
         a35b0:	eb67c530 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         a35b4:	e59d0000 	ldr	r0, [sp]
         a35b8:	eb6c7eff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a35bc:	e59d001a 	ldr	r0, [sp, #26]
         a35c0:	e1a00840 	mov	r0, r0, asr #16
         a35c4:	e59d1016 	ldr	r1, [sp, #22]
         a35c8:	e1500841 	cmp	r0, r1, asr #16
         a35cc:	ca000045 	bgt	a36e8 <TestWordOverlap(RefVar const &, long, SortStuff *)+0x218>
         a35d0:	e59d001e 	ldr	r0, [sp, #30]
         a35d4:	e1a00840 	mov	r0, r0, asr #16
         a35d8:	e59d1012 	ldr	r1, [sp, #18]
         a35dc:	e1500841 	cmp	r0, r1, asr #16
         a35e0:	b28dd004 	addlt	sp, sp, #4	; 0x4
         a35e4:	ba000043 	blt	a36f8 <TestWordOverlap(RefVar const &, long, SortStuff *)+0x228>
         a35e8:	e28d1010 	add	r1, sp, #16	; 0x10
         a35ec:	e28d0018 	add	r0, sp, #24	; 0x18
         a35f0:	eb67b065 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
         a35f4:	e1a07000 	mov	r7, r0
         a35f8:	e28d0018 	add	r0, sp, #24	; 0x18
         a35fc:	eb68b8b6 	bl	1ad18dc <$IsLine(TRect *)>
         a3600:	e3300000 	teq	r0, #0	; 0x0
         a3604:	0a000001 	beq	a3610 <TestWordOverlap(RefVar const &, long, SortStuff *)+0x140>
         a3608:	e3570032 	cmp	r7, #50	; 0x32
         a360c:	ca000004 	bgt	a3624 <TestWordOverlap(RefVar const &, long, SortStuff *)+0x154>
         a3610:	e28d1010 	add	r1, sp, #16	; 0x10
         a3614:	e28d0018 	add	r0, sp, #24	; 0x18
         a3618:	eb68b8aa 	bl	1ad18c8 <$IsApostrophe__FP5TRectT1>
         a361c:	e3300000 	teq	r0, #0	; 0x0
         a3620:	0a000008 	beq	a3648 <TestWordOverlap(RefVar const &, long, SortStuff *)+0x178>
         a3624:	e59d1020 	ldr	r1, [sp, #32]
         a3628:	e5911000 	ldr	r1, [r1]
         a362c:	e594000c 	ldr	r0, [r4, #12]
         a3630:	e3a04003 	mov	r4, #3	; 0x3
         a3634:	e5801000 	str	r1, [r0]
         a3638:	e59d0020 	ldr	r0, [sp, #32]
         a363c:	eb6c7ede 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3640:	e1a00004 	mov	r0, r4
         a3644:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         a3648:	e28d1008 	add	r1, sp, #8	; 0x8
         a364c:	e28d0010 	add	r0, sp, #16	; 0x10
         a3650:	e8901008 	ldmia	r0, {r3, ip}
         a3654:	e8811008 	stmia	r1, {r3, ip}
         a3658:	e59d001e 	ldr	r0, [sp, #30]
         a365c:	e59d101a 	ldr	r1, [sp, #26]
         a3660:	e0400001 	sub	r0, r0, r1
         a3664:	e1a00800 	mov	r0, r0, lsl #16
         a3668:	e1a00840 	mov	r0, r0, asr #16
         a366c:	e59d2016 	ldr	r2, [sp, #22]
         a3670:	e59d1012 	ldr	r1, [sp, #18]
         a3674:	e0421001 	sub	r1, r2, r1
         a3678:	e1a01801 	mov	r1, r1, lsl #16
         a367c:	e0800841 	add	r0, r0, r1, asr #16
         a3680:	e2602000 	rsb	r2, r0, #0	; 0x0
         a3684:	e28d0008 	add	r0, sp, #8	; 0x8
         a3688:	e1a01008 	mov	r1, r8
         a368c:	eb6ab46b 	bl	1b50840 <$InsetRect__FP4RectlT2>
         a3690:	e28d1008 	add	r1, sp, #8	; 0x8
         a3694:	e28d0018 	add	r0, sp, #24	; 0x18
         a3698:	eb67b03b 	bl	1a8f78c <TRect::$CoveredBy( const(TRect const &))>
         a369c:	e350001e 	cmp	r0, #30	; 0x1e
         a36a0:	da000010 	ble	a36e8 <TestWordOverlap(RefVar const &, long, SortStuff *)+0x218>
         a36a4:	e24dd008 	sub	sp, sp, #8	; 0x8
         a36a8:	e28d1020 	add	r1, sp, #32	; 0x20
         a36ac:	e28d0004 	add	r0, sp, #4	; 0x4
         a36b0:	eb03d073 	bl	197884 <TRect::MidPoint( const(void))>
         a36b4:	e28d1018 	add	r1, sp, #24	; 0x18
         a36b8:	e1a0000d 	mov	r0, sp
         a36bc:	eb03d070 	bl	197884 <TRect::MidPoint( const(void))>
         a36c0:	e59d0004 	ldr	r0, [sp, #4]
         a36c4:	e1a00840 	mov	r0, r0, asr #16
         a36c8:	e59d1000 	ldr	r1, [sp]
         a36cc:	e1500841 	cmp	r0, r1, asr #16
         a36d0:	d3a04000 	movle	r4, #0	; 0x0
         a36d4:	c3a04002 	movgt	r4, #2	; 0x2
         a36d8:	e59d0028 	ldr	r0, [sp, #40]
         a36dc:	eb6c7eb6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a36e0:	e1a00004 	mov	r0, r4
         a36e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         a36e8:	e28dd004 	add	sp, sp, #4	; 0x4
         a36ec:	e2855001 	add	r5, r5, #1	; 0x1
         a36f0:	e1550006 	cmp	r5, r6
         a36f4:	baffffa0 	blt	a357c <TestWordOverlap(RefVar const &, long, SortStuff *)+0xac>
         a36f8:	e3a04001 	mov	r4, #1	; 0x1
         a36fc:	e59d001c 	ldr	r0, [sp, #28]
         a3700:	eb6c7ead 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3704:	e1a00004 	mov	r0, r4
         a3708:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TimeStampTextChange(TView *)
 * Address: 000a39f4
 */
TimeStampTextChange(TView *) {
    /*
         a39f4:	e1a0c00d 	mov	ip, sp
         a39f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         a39fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         a3a00:	e24dd008 	sub	sp, sp, #8	; 0x8
         a3a04:	e2804024 	add	r4, r0, #36	; 0x24
         a3a08:	e3a00002 	mov	r0, #2	; 0x2
         a3a0c:	eb6c79ce 	bl	1bc214c <$AllocateRefHandle(long)>
         a3a10:	e58d0004 	str	r0, [sp, #4]
         a3a14:	e28d0004 	add	r0, sp, #4	; 0x4
         a3a18:	eb68e50e 	bl	1adce58 <$FGetGlobals(RefVar const &)>
         a3a1c:	eb6c79ca 	bl	1bc214c <$AllocateRefHandle(long)>
         a3a20:	e58d0000 	str	r0, [sp]
         a3a24:	e1a0000d 	mov	r0, sp
         a3a28:	e59f1018 	ldr	r1, [pc, #18]	; a3a48 <TimeStampTextChange(TView *)+0x54>
         a3a2c:	e1a02004 	mov	r2, r4
         a3a30:	eb6c8a4c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a3a34:	e59d0000 	ldr	r0, [sp]
         a3a38:	eb6c7ddf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3a3c:	e59d0004 	ldr	r0, [sp, #4]
         a3a40:	eb6c7ddd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3a44:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         a3a48:	00683498 	streqb	r3, [r8], -#72
    */
}

/**
 * Symbol: ThrowMsg
 * Address: 000afff8
 */
void globals::ThrowMsg() {
    /*
         afff8:	e1a01000 	mov	r1, r0
         afffc:	e59f0008 	ldr	r0, [pc, #8]	; b000c <ThrowMsg+0x14>
         b0000:	e5900000 	ldr	r0, [r0]
         b0004:	e3a02000 	mov	r2, #0	; 0x0
         b0008:	ea6ccc63 	b	1be319c <$Throw>
         b000c:	003712ac 	eoreqs	r1, r7, ip, lsr #5
    */
}

/**
 * Symbol: Throw
 * Address: 000b00c8
 */
void globals::Throw() {
    /*
         b00c8:	e1a0c00d 	mov	ip, sp
         b00cc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         b00d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b00d4:	e1a06000 	mov	r6, r0
         b00d8:	e1a05001 	mov	r5, r1
         b00dc:	e1a04002 	mov	r4, r2
         b00e0:	eb6cc3ff 	bl	1be10e4 <$GetExceptionHandler(void)>
         b00e4:	e1b07000 	movs	r7, r0
         b00e8:	0a000018 	beq	b0150 <Throw+0x88>
         b00ec:	e3a08002 	mov	r8, #2	; 0x2
         b00f0:	e5970000 	ldr	r0, [r7]
         b00f4:	e3300000 	teq	r0, #0	; 0x0
         b00f8:	0a000002 	beq	b0108 <Throw+0x40>
         b00fc:	e3300001 	teq	r0, #1	; 0x1
         b0100:	1a000012 	bne	b0150 <Throw+0x88>
         b0104:	ea000007 	b	b0128 <Throw+0x60>
         b0108:	e5970004 	ldr	r0, [r7, #4]
         b010c:	eb6cc819 	bl	1be2178 <$SetExceptionHandler(CatchHeader *)>
         b0110:	e5874068 	str	r4, [r7, #104]
         b0114:	e5875064 	str	r5, [r7, #100]
         b0118:	e5876060 	str	r6, [r7, #96]
         b011c:	e2870008 	add	r0, r7, #8	; 0x8
         b0120:	e3a01001 	mov	r1, #1	; 0x1
         b0124:	eb6c0a11 	bl	1bb2970 <$longjmp>
         b0128:	e5878000 	str	r8, [r7]
         b012c:	e5970008 	ldr	r0, [r7, #8]
         b0130:	e1a0e00f 	mov	lr, pc
         b0134:	e597f00c 	ldr	pc, [r7, #12]
         b0138:	eb6cc3e9 	bl	1be10e4 <$GetExceptionHandler(void)>
         b013c:	e1300007 	teq	r0, r7
         b0140:	11a07000 	movne	r7, r0
         b0144:	05977004 	ldreq	r7, [r7, #4]
         b0148:	e3370000 	teq	r7, #0	; 0x0
         b014c:	1affffe7 	bne	b00f0 <Throw+0x28>
         b0150:	eb6cc3e1 	bl	1be10dc <$GetCPUMode>
         b0154:	e210000f 	ands	r0, r0, #15	; 0xf
         b0158:	0a000007 	beq	b017c <Throw+0xb4>
         b015c:	e3300001 	teq	r0, #1	; 0x1
         b0160:	13300002 	teqne	r0, #2	; 0x2
         b0164:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         b0168:	e1a02004 	mov	r2, r4
         b016c:	e1a01005 	mov	r1, r5
         b0170:	e1a00006 	mov	r0, r6
         b0174:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         b0178:	ea6bbfb2 	b	1ba0048 <$UnhandledNonUserModeException(char *, void *, void (*)(void *))>
         b017c:	e1a02004 	mov	r2, r4
         b0180:	e1a01005 	mov	r1, r5
         b0184:	e1a00006 	mov	r0, r6
         b0188:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         b018c:	ea6bbfac 	b	1ba0044 <$UnhandledException(char *, void *, void (*)(void *))>
    */
}

/**
 * Symbol: TranslateTypeMarshalingSymbol(RefVar const &)
 * Address: 000cd6cc
 */
TranslateTypeMarshalingSymbol(RefVar const &) {
    /*
         cd6cc:	e1a0c00d 	mov	ip, sp
         cd6d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         cd6d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         cd6d8:	e5900000 	ldr	r0, [r0]
         cd6dc:	e5900000 	ldr	r0, [r0]
         cd6e0:	e2001003 	and	r1, r0, #3	; 0x3
         cd6e4:	e3510000 	cmp	r1, #0	; 0x0
         cd6e8:	1a000003 	bne	cd6fc <TranslateTypeMarshalingSymbol(RefVar const &)+0x30>
         cd6ec:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         cd6f0:	1a6bd289 	bne	1bc211c <$_RINTError(long)>
         cd6f4:	01a00140 	moveq	r0, r0, asr #2
         cd6f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         cd6fc:	e1a01000 	mov	r1, r0
         cd700:	e59f0044 	ldr	r0, [pc, #44]	; cd74c <TranslateTypeMarshalingSymbol(RefVar const &)+0x80>
         cd704:	e5900000 	ldr	r0, [r0]
         cd708:	e5900000 	ldr	r0, [r0]
         cd70c:	eb6bdad3 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         cd710:	eb6bd28d 	bl	1bc214c <$AllocateRefHandle(long)>
         cd714:	e1a04000 	mov	r4, r0
         cd718:	e5900000 	ldr	r0, [r0]
         cd71c:	e3300002 	teq	r0, #2	; 0x2
         cd720:	03a00000 	moveq	r0, #0	; 0x0
         cd724:	0a000003 	beq	cd738 <TranslateTypeMarshalingSymbol(RefVar const &)+0x6c>
         cd728:	e3100003 	tst	r0, #3	; 0x3
         cd72c:	01a00140 	moveq	r0, r0, asr #2
         cd730:	0a000000 	beq	cd738 <TranslateTypeMarshalingSymbol(RefVar const &)+0x6c>
         cd734:	eb6bd278 	bl	1bc211c <$_RINTError(long)>
         cd738:	e1a05000 	mov	r5, r0
         cd73c:	e1a00004 	mov	r0, r4
         cd740:	eb6bd69d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cd744:	e1a00005 	mov	r0, r5
         cd748:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         cd74c:	00681168 	rsbeq	r1, r8, r8, ror #2
    */
}

/**
 * Symbol: ToGlobalCoordinates__FRC6RefVarPsN32
 * Address: 000e3490
 */
void globals::ToGlobalCoordinates() {
    /*
         e3490:	e1a0c00d 	mov	ip, sp
         e3494:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         e3498:	e24cb004 	sub	fp, ip, #4	; 0x4
         e349c:	e1a06001 	mov	r6, r1
         e34a0:	e1a05002 	mov	r5, r2
         e34a4:	e1a04003 	mov	r4, r3
         e34a8:	e59b7004 	ldr	r7, [fp, #4]
         e34ac:	e24dd004 	sub	sp, sp, #4	; 0x4
         e34b0:	eb042953 	bl	1eda04 <FailGetView(RefVar const &)>
         e34b4:	e5900010 	ldr	r0, [r0, #16]
         e34b8:	e3360000 	teq	r6, #0	; 0x0
         e34bc:	e58d0000 	str	r0, [sp]
         e34c0:	0a000006 	beq	e34e0 <ToGlobalCoordinates__FRC6RefVarPsN32+0x50>
         e34c4:	e59d1000 	ldr	r1, [sp]
         e34c8:	e5960000 	ldr	r0, [r6]
         e34cc:	e1a00820 	mov	r0, r0, lsr #16
         e34d0:	e0810000 	add	r0, r1, r0
         e34d4:	e5c60001 	strb	r0, [r6, #1]
         e34d8:	e1a00440 	mov	r0, r0, asr #8
         e34dc:	e5c60000 	strb	r0, [r6]
         e34e0:	e3340000 	teq	r4, #0	; 0x0
         e34e4:	0a000006 	beq	e3504 <ToGlobalCoordinates__FRC6RefVarPsN32+0x74>
         e34e8:	e59d1000 	ldr	r1, [sp]
         e34ec:	e5940000 	ldr	r0, [r4]
         e34f0:	e1a00820 	mov	r0, r0, lsr #16
         e34f4:	e0810000 	add	r0, r1, r0
         e34f8:	e5c40001 	strb	r0, [r4, #1]
         e34fc:	e1a00440 	mov	r0, r0, asr #8
         e3500:	e5c40000 	strb	r0, [r4]
         e3504:	e3350000 	teq	r5, #0	; 0x0
         e3508:	0a000006 	beq	e3528 <ToGlobalCoordinates__FRC6RefVarPsN32+0x98>
         e350c:	e5951000 	ldr	r1, [r5]
         e3510:	e1a01821 	mov	r1, r1, lsr #16
         e3514:	e59d0002 	ldr	r0, [sp, #2]
         e3518:	e0810000 	add	r0, r1, r0
         e351c:	e5c50001 	strb	r0, [r5, #1]
         e3520:	e1a00440 	mov	r0, r0, asr #8
         e3524:	e5c50000 	strb	r0, [r5]
         e3528:	e3370000 	teq	r7, #0	; 0x0
         e352c:	0a000006 	beq	e354c <ToGlobalCoordinates__FRC6RefVarPsN32+0xbc>
         e3530:	e5971000 	ldr	r1, [r7]
         e3534:	e1a01821 	mov	r1, r1, lsr #16
         e3538:	e59d0002 	ldr	r0, [sp, #2]
         e353c:	e0810000 	add	r0, r1, r0
         e3540:	e5c70001 	strb	r0, [r7, #1]
         e3544:	e1a00440 	mov	r0, r0, asr #8
         e3548:	e5c70000 	strb	r0, [r7]
         e354c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TimeString__FUlT1PUsT1RC6RefVar
 * Address: 000ec41c
 */
void globals::TimeString() {
    /*
         ec41c:	e1a0c00d 	mov	ip, sp
         ec420:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ec424:	e24cb004 	sub	fp, ip, #4	; 0x4
         ec428:	e1a07000 	mov	r7, r0
         ec42c:	e1a06001 	mov	r6, r1
         ec430:	e1a04002 	mov	r4, r2
         ec434:	e1a05003 	mov	r5, r3
         ec438:	e59b8004 	ldr	r8, [fp, #4]
         ec43c:	e24dd028 	sub	sp, sp, #40	; 0x28
         ec440:	e1a0000d 	mov	r0, sp
         ec444:	eb6c4abc 	bl	1bfef3c <TDate::$__ct(void)>
         ec448:	e3a00000 	mov	r0, #0	; 0x0
         ec44c:	e5c40001 	strb	r0, [r4, #1]
         ec450:	e5c40000 	strb	r0, [r4]
         ec454:	e1a01007 	mov	r1, r7
         ec458:	e1a0000d 	mov	r0, sp
         ec45c:	eb6c4abb 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
         ec460:	e1a01008 	mov	r1, r8
         ec464:	e1a0000d 	mov	r0, sp
         ec468:	eb6c4ac0 	bl	1bfef70 <TDate::$SetFormatResource(RefVar const &)>
         ec46c:	e1a03005 	mov	r3, r5
         ec470:	e1a02004 	mov	r2, r4
         ec474:	e1a01006 	mov	r1, r6
         ec478:	e1a0000d 	mov	r0, sp
         ec47c:	eb6c4ec0 	bl	1bfff84 <TDate::$TimeString(unsigned long, unsigned short *, unsigned long)>
         ec480:	e59d0024 	ldr	r0, [sp, #36]
         ec484:	eb6b5b4c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec488:	e59d0020 	ldr	r0, [sp, #32]
         ec48c:	eb6b5b4a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec490:	e59d001c 	ldr	r0, [sp, #28]
         ec494:	eb6b5b48 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec498:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TimeFrameString(RefVar const &, unsigned long, unsigned short *, unsigned short *, unsigned long)
 * Address: 000ec4a0
 */
TimeFrameString(RefVar const &, unsigned long, unsigned short *, unsigned short *, unsigned long) {
    /*
         ec4a0:	e1a0c00d 	mov	ip, sp
         ec4a4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         ec4a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ec4ac:	e1a07000 	mov	r7, r0
         ec4b0:	e1a06001 	mov	r6, r1
         ec4b4:	e1a04002 	mov	r4, r2
         ec4b8:	e1a05003 	mov	r5, r3
         ec4bc:	e59b8004 	ldr	r8, [fp, #4]
         ec4c0:	e24dd028 	sub	sp, sp, #40	; 0x28
         ec4c4:	e1a0000d 	mov	r0, sp
         ec4c8:	eb6c4a9b 	bl	1bfef3c <TDate::$__ct(void)>
         ec4cc:	e3a00000 	mov	r0, #0	; 0x0
         ec4d0:	e5c40001 	strb	r0, [r4, #1]
         ec4d4:	e5c40000 	strb	r0, [r4]
         ec4d8:	e1a01007 	mov	r1, r7
         ec4dc:	e1a0000d 	mov	r0, sp
         ec4e0:	e3a02000 	mov	r2, #0	; 0x0
         ec4e4:	eb67570c 	bl	1ac211c <TDate::$InitWithDateFrame(RefVar const &, unsigned char)>
         ec4e8:	e1a01008 	mov	r1, r8
         ec4ec:	e1a0000d 	mov	r0, sp
         ec4f0:	eb6c4a9e 	bl	1bfef70 <TDate::$SetFormatResource(RefVar const &)>
         ec4f4:	e1a03005 	mov	r3, r5
         ec4f8:	e1a02004 	mov	r2, r4
         ec4fc:	e1a01006 	mov	r1, r6
         ec500:	e1a0000d 	mov	r0, sp
         ec504:	eb6c4e9e 	bl	1bfff84 <TDate::$TimeString(unsigned long, unsigned short *, unsigned long)>
         ec508:	e59d0024 	ldr	r0, [sp, #36]
         ec50c:	eb6b5b2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec510:	e59d0020 	ldr	r0, [sp, #32]
         ec514:	eb6b5b28 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec518:	e59d001c 	ldr	r0, [sp, #28]
         ec51c:	eb6b5b26 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ec520:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: ToUni(unsigned short)
 * Address: 001076e8
 */
ToUni(unsigned short) {
    /*
        1076e8:	e1a0c00d 	mov	ip, sp
        1076ec:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1076f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1076f4:	e1a00800 	mov	r0, r0, lsl #16
        1076f8:	e1a00820 	mov	r0, r0, lsr #16
        1076fc:	e56d0004 	strb	r0, [sp, -#4]!
        107700:	e3a00000 	mov	r0, #0	; 0x0
        107704:	e5cd0001 	strb	r0, [sp, #1]
        107708:	e24dd004 	sub	sp, sp, #4	; 0x4
        10770c:	e1a0100d 	mov	r1, sp
        107710:	e28d0004 	add	r0, sp, #4	; 0x4
        107714:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        107718:	e3a02001 	mov	r2, #1	; 0x1
        10771c:	eb6b7f18 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        107720:	e59d0000 	ldr	r0, [sp]
        107724:	e1a00820 	mov	r0, r0, lsr #16
        107728:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TopicHeight(RefVar const &)
 * Address: 001129cc
 */
TopicHeight(RefVar const &) {
    /*
        1129cc:	e1a0c00d 	mov	ip, sp
        1129d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1129d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1129d8:	e1a04000 	mov	r4, r0
        1129dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1129e0:	e3a00002 	mov	r0, #2	; 0x2
        1129e4:	eb6abdd8 	bl	1bc214c <$AllocateRefHandle(long)>
        1129e8:	e58d0000 	str	r0, [sp]
        1129ec:	e1a0000d 	mov	r0, sp
        1129f0:	e1a01004 	mov	r1, r4
        1129f4:	eb66e2eb 	bl	1acb5a8 <$FTopicBottom>
        1129f8:	e3100003 	tst	r0, #3	; 0x3
        1129fc:	01a00140 	moveq	r0, r0, asr #2
        112a00:	0a000000 	beq	112a08 <TopicHeight(RefVar const &)+0x3c>
        112a04:	eb6abdc4 	bl	1bc211c <$_RINTError(long)>
        112a08:	e1a05000 	mov	r5, r0
        112a0c:	e1a00004 	mov	r0, r4
        112a10:	eb66e704 	bl	1acc628 <$TopicTop(RefVar const &)>
        112a14:	e0454000 	sub	r4, r5, r0
        112a18:	e59d0000 	ldr	r0, [sp]
        112a1c:	eb6ac1e6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112a20:	e1a00004 	mov	r0, r4
        112a24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TopicLevel(RefVar const &)
 * Address: 00112a28
 */
TopicLevel(RefVar const &) {
    /*
        112a28:	e1a0c00d 	mov	ip, sp
        112a2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        112a30:	e24cb004 	sub	fp, ip, #4	; 0x4
        112a34:	e59f104c 	ldr	r1, [pc, #4c]	; 112a88 <TopicLevel(RefVar const &)+0x60>
        112a38:	e5911000 	ldr	r1, [r1]
        112a3c:	e5911000 	ldr	r1, [r1]
        112a40:	e5900000 	ldr	r0, [r0]
        112a44:	e5900000 	ldr	r0, [r0]
        112a48:	eb6ac604 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        112a4c:	eb6abdbe 	bl	1bc214c <$AllocateRefHandle(long)>
        112a50:	e1a04000 	mov	r4, r0
        112a54:	e5900000 	ldr	r0, [r0]
        112a58:	e3300002 	teq	r0, #2	; 0x2
        112a5c:	03a05001 	moveq	r5, #1	; 0x1
        112a60:	0a000004 	beq	112a78 <TopicLevel(RefVar const &)+0x50>
        112a64:	e3100003 	tst	r0, #3	; 0x3
        112a68:	01a00140 	moveq	r0, r0, asr #2
        112a6c:	0a000000 	beq	112a74 <TopicLevel(RefVar const &)+0x4c>
        112a70:	eb6abda9 	bl	1bc211c <$_RINTError(long)>
        112a74:	e1a05000 	mov	r5, r0
        112a78:	e1a00004 	mov	r0, r4
        112a7c:	eb6ac1ce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112a80:	e1a00005 	mov	r0, r5
        112a84:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        112a88:	00683540 	rsbeq	r3, r8, r0, asr #10
    */
}

/**
 * Symbol: TopicTop(RefVar const &)
 * Address: 00112a8c
 */
TopicTop(RefVar const &) {
    /*
        112a8c:	e1a0c00d 	mov	ip, sp
        112a90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        112a94:	e24cb004 	sub	fp, ip, #4	; 0x4
        112a98:	e59f1048 	ldr	r1, [pc, #48]	; 112ae8 <TopicTop(RefVar const &)+0x5c>
        112a9c:	e3a02000 	mov	r2, #0	; 0x0
        112aa0:	eb6ac5f0 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        112aa4:	eb6abda8 	bl	1bc214c <$AllocateRefHandle(long)>
        112aa8:	e1a04000 	mov	r4, r0
        112aac:	e59f0038 	ldr	r0, [pc, #38]	; 112aec <TopicTop(RefVar const &)+0x60>
        112ab0:	e5900000 	ldr	r0, [r0]
        112ab4:	e5901000 	ldr	r1, [r0]
        112ab8:	e5940000 	ldr	r0, [r4]
        112abc:	eb6ac5e7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        112ac0:	e3100003 	tst	r0, #3	; 0x3
        112ac4:	01a00140 	moveq	r0, r0, asr #2
        112ac8:	0a000000 	beq	112ad0 <TopicTop(RefVar const &)+0x44>
        112acc:	eb6abd92 	bl	1bc211c <$_RINTError(long)>
        112ad0:	e1a05800 	mov	r5, r0, lsl #16
        112ad4:	e1a05845 	mov	r5, r5, asr #16
        112ad8:	e1a00004 	mov	r0, r4
        112adc:	eb6ac1b6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112ae0:	e1a00005 	mov	r0, r5
        112ae4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        112ae8:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        112aec:	00684bc8 	rsbeq	r4, r8, r8, asr #23
    */
}

/**
 * Symbol: TopicVisible(RefVar const &)
 * Address: 00112af0
 */
TopicVisible(RefVar const &) {
    /*
        112af0:	e1a0c00d 	mov	ip, sp
        112af4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        112af8:	e24cb004 	sub	fp, ip, #4	; 0x4
        112afc:	e59f1044 	ldr	r1, [pc, #44]	; 112b48 <TopicVisible(RefVar const &)+0x58>
        112b00:	e5911000 	ldr	r1, [r1]
        112b04:	e5911000 	ldr	r1, [r1]
        112b08:	e5900000 	ldr	r0, [r0]
        112b0c:	e5900000 	ldr	r0, [r0]
        112b10:	eb6ac5d2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        112b14:	eb6abd8c 	bl	1bc214c <$AllocateRefHandle(long)>
        112b18:	e1a04000 	mov	r4, r0
        112b1c:	e5900000 	ldr	r0, [r0]
        112b20:	e3300002 	teq	r0, #2	; 0x2
        112b24:	0a000005 	beq	112b40 <TopicVisible(RefVar const &)+0x50>
        112b28:	e3100003 	tst	r0, #3	; 0x3
        112b2c:	01a00140 	moveq	r0, r0, asr #2
        112b30:	0a000000 	beq	112b38 <TopicVisible(RefVar const &)+0x48>
        112b34:	eb6abd78 	bl	1bc211c <$_RINTError(long)>
        112b38:	e3300000 	teq	r0, #0	; 0x0
        112b3c:	1a000002 	bne	112b4c <TopicVisible(RefVar const &)+0x5c>
        112b40:	e3a00001 	mov	r0, #1	; 0x1
        112b44:	ea000001 	b	112b50 <TopicVisible(RefVar const &)+0x60>
        112b48:	006830e0 	rsbeq	r3, r8, r0, ror #1
        112b4c:	e3a00000 	mov	r0, #0	; 0x0
        112b50:	e20050ff 	and	r5, r0, #255	; 0xff
        112b54:	e1a00004 	mov	r0, r4
        112b58:	eb6ac197 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        112b5c:	e1a00005 	mov	r0, r5
        112b60:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TabInit(void)
 * Address: 0011b8e0
 */
TabInit(void) {
    /*
        11b8e0:	eafc7203 	b	380f4 <xTabInit(void)>
    */
}

/**
 * Symbol: TabOn(void)
 * Address: 0011b8e4
 */
TabOn(void) {
    /*
        11b8e4:	eafc720e 	b	38124 <xTabOn(void)>
    */
}

/**
 * Symbol: TransformPoints
 * Address: 001255d0
 */
void globals::TransformPoints() {
    /*
        1255d0:	e1a0c00d 	mov	ip, sp
        1255d4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1255d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1255dc:	e1a05000 	mov	r5, r0
        1255e0:	e1a04001 	mov	r4, r1
        1255e4:	e1a06002 	mov	r6, r2
        1255e8:	e3a07000 	mov	r7, #0	; 0x0
        1255ec:	e3510000 	cmp	r1, #0	; 0x0
        1255f0:	991ba8f0 	ldmlsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1255f4:	e1a01006 	mov	r1, r6
        1255f8:	e1a00005 	mov	r0, r5
        1255fc:	eb00005f 	bl	125780 <MxTransform>
        125600:	e2866008 	add	r6, r6, #8	; 0x8
        125604:	e2877001 	add	r7, r7, #1	; 0x1
        125608:	e1570004 	cmp	r7, r4
        12560c:	3afffff8 	bcc	1255f4 <TransformPoints+0x24>
        125610:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: ToObject(RefVar const &, char *, long)
 * Address: 001291bc
 */
ToObject(RefVar const &, char *, long) {
    /*
        1291bc:	e1a0c00d 	mov	ip, sp
        1291c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1291c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1291c8:	e1a05001 	mov	r5, r1
        1291cc:	e1a04002 	mov	r4, r2
        1291d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1291d4:	e1a01002 	mov	r1, r2
        1291d8:	eb6a63d7 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1291dc:	eb6a63da 	bl	1bc214c <$AllocateRefHandle(long)>
        1291e0:	e58d0004 	str	r0, [sp, #4]
        1291e4:	e28d1004 	add	r1, sp, #4	; 0x4
        1291e8:	e1a0000d 	mov	r0, sp
        1291ec:	eb6a5fb9 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        1291f0:	e1a0000d 	mov	r0, sp
        1291f4:	eb6a63c6 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1291f8:	e1a01000 	mov	r1, r0
        1291fc:	e1a02004 	mov	r2, r4
        129200:	e1a00005 	mov	r0, r5
        129204:	eb6ad752 	bl	1bdef54 <$BlockMove>
        129208:	e1a0000d 	mov	r0, sp
        12920c:	e3a01000 	mov	r1, #0	; 0x0
        129210:	eb6a63ba 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        129214:	e59d0004 	ldr	r0, [sp, #4]
        129218:	e5904000 	ldr	r4, [r0]
        12921c:	eb6a67e6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        129220:	e1a00004 	mov	r0, r4
        129224:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TableLookup__FRC6RefVarT1
 * Address: 00129534
 */
void globals::TableLookup() {
    /*
        129534:	e1a0c00d 	mov	ip, sp
        129538:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        12953c:	e24cb004 	sub	fp, ip, #4	; 0x4
        129540:	e1a04000 	mov	r4, r0
        129544:	e3a00002 	mov	r0, #2	; 0x2
        129548:	eb6a62ff 	bl	1bc214c <$AllocateRefHandle(long)>
        12954c:	e1a05000 	mov	r5, r0
        129550:	e5940000 	ldr	r0, [r4]
        129554:	e5900000 	ldr	r0, [r0]
        129558:	eb6a6f53 	bl	1bc52ac <$Length(long)>
        12955c:	e1a08000 	mov	r8, r0
        129560:	e3a06000 	mov	r6, #0	; 0x0
        129564:	e2409002 	sub	r9, r0, #2	; 0x2
        129568:	e3590000 	cmp	r9, #0	; 0x0
        12956c:	da000019 	ble	1295d8 <TableLookup__FRC6RefVarT1+0xa4>
        129570:	e5940000 	ldr	r0, [r4]
        129574:	e5900000 	ldr	r0, [r0]
        129578:	e1a01006 	mov	r1, r6
        12957c:	eb6a6b34 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        129580:	eb6a62f1 	bl	1bc214c <$AllocateRefHandle(long)>
        129584:	e1a07000 	mov	r7, r0
        129588:	e51b102c 	ldr	r1, [fp, -#44]
        12958c:	e5910000 	ldr	r0, [r1]
        129590:	e5901000 	ldr	r1, [r0]
        129594:	e5970000 	ldr	r0, [r7]
        129598:	eb6a6b24 	bl	1bc4230 <$EQRef__FlT1>
        12959c:	e1b0a000 	movs	sl, r0
        1295a0:	13a0a001 	movne	sl, #1	; 0x1
        1295a4:	e1a00007 	mov	r0, r7
        1295a8:	eb6a6703 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1295ac:	e33a0000 	teq	sl, #0	; 0x0
        1295b0:	0a000005 	beq	1295cc <TableLookup__FRC6RefVarT1+0x98>
        1295b4:	e2861001 	add	r1, r6, #1	; 0x1
        1295b8:	e5940000 	ldr	r0, [r4]
        1295bc:	e5900000 	ldr	r0, [r0]
        1295c0:	eb6a6b23 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1295c4:	e5850000 	str	r0, [r5]
        1295c8:	ea000002 	b	1295d8 <TableLookup__FRC6RefVarT1+0xa4>
        1295cc:	e2866002 	add	r6, r6, #2	; 0x2
        1295d0:	e1590006 	cmp	r9, r6
        1295d4:	caffffe5 	bgt	129570 <TableLookup__FRC6RefVarT1+0x3c>
        1295d8:	e5950000 	ldr	r0, [r5]
        1295dc:	e3300002 	teq	r0, #2	; 0x2
        1295e0:	1a000004 	bne	1295f8 <TableLookup__FRC6RefVarT1+0xc4>
        1295e4:	e2481001 	sub	r1, r8, #1	; 0x1
        1295e8:	e5940000 	ldr	r0, [r4]
        1295ec:	e5900000 	ldr	r0, [r0]
        1295f0:	eb6a6b17 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1295f4:	e5850000 	str	r0, [r5]
        1295f8:	e5954000 	ldr	r4, [r5]
        1295fc:	e1a00005 	mov	r0, r5
        129600:	eb6a66ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        129604:	e1a00004 	mov	r0, r4
        129608:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ToObject(TRect const &)
 * Address: 0012975c
 */
ToObject(TRect const &) {
    /*
        12975c:	e1a0c00d 	mov	ip, sp
        129760:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        129764:	e24cb004 	sub	fp, ip, #4	; 0x4
        129768:	e1a04000 	mov	r4, r0
        12976c:	e24dd004 	sub	sp, sp, #4	; 0x4
        129770:	e59f0028 	ldr	r0, [pc, #28]	; 1297a0 <ToObject(TRect const &)+0x44>
        129774:	eb6a627c 	bl	1bc216c <$Clone(RefVar const &)>
        129778:	eb6a6273 	bl	1bc214c <$AllocateRefHandle(long)>
        12977c:	e1a01004 	mov	r1, r4
        129780:	e58d0000 	str	r0, [sp]
        129784:	e1a0000d 	mov	r0, sp
        129788:	eb66da2f 	bl	1ae004c <$SetBoundsRect(RefVar const &, TRect const &)>
        12978c:	e1a04000 	mov	r4, r0
        129790:	e59d0000 	ldr	r0, [sp]
        129794:	eb6a6688 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        129798:	e1a00004 	mov	r0, r4
        12979c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1297a0:	0067fe98 	streqb	pc, [r7], -#232
    */
}

/**
 * Symbol: TraceToOdata(_ODATA *, _POINT *, int *)
 * Address: 0012d178
 */
TraceToOdata(_ODATA *, _POINT *, int *) {
    /*
        12d178:	e1a0c00d 	mov	ip, sp
        12d17c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        12d180:	e24cb004 	sub	fp, ip, #4	; 0x4
        12d184:	e1a04000 	mov	r4, r0
        12d188:	e24dd008 	sub	sp, sp, #8	; 0x8
        12d18c:	e3a07000 	mov	r7, #0	; 0x0
        12d190:	e3a02001 	mov	r2, #1	; 0x1
        12d194:	e2422902 	sub	r2, r2, #32768	; 0x8000
        12d198:	e1a03002 	mov	r3, r2
        12d19c:	e1a06002 	mov	r6, r2
        12d1a0:	e3a0c902 	mov	ip, #32768	; 0x8000
        12d1a4:	e24cc001 	sub	ip, ip, #1	; 0x1
        12d1a8:	e1a0500c 	mov	r5, ip
        12d1ac:	e2810004 	add	r0, r1, #4	; 0x4
        12d1b0:	e1a01000 	mov	r1, r0
        12d1b4:	e590e002 	ldr	lr, [r0, #2]
        12d1b8:	e1a0e84e 	mov	lr, lr, asr #16
        12d1bc:	e37e0001 	cmn	lr, #1	; 0x1
        12d1c0:	0a00001a 	beq	12d230 <TraceToOdata(_ODATA *, _POINT *, int *)+0xb8>
        12d1c4:	e5918002 	ldr	r8, [r1, #2]
        12d1c8:	e1a08848 	mov	r8, r8, asr #16
        12d1cc:	e3780001 	cmn	r8, #1	; 0x1
        12d1d0:	0a000010 	beq	12d218 <TraceToOdata(_ODATA *, _POINT *, int *)+0xa0>
        12d1d4:	e5918000 	ldr	r8, [r1]
        12d1d8:	e1a08848 	mov	r8, r8, asr #16
        12d1dc:	e1580006 	cmp	r8, r6
        12d1e0:	c1a06008 	movgt	r6, r8
        12d1e4:	e158000c 	cmp	r8, ip
        12d1e8:	b1a0c008 	movlt	ip, r8
        12d1ec:	e5918002 	ldr	r8, [r1, #2]
        12d1f0:	e1a08848 	mov	r8, r8, asr #16
        12d1f4:	e1580003 	cmp	r8, r3
        12d1f8:	c1a03008 	movgt	r3, r8
        12d1fc:	e1580005 	cmp	r8, r5
        12d200:	b1a05008 	movlt	r5, r8
        12d204:	e2811004 	add	r1, r1, #4	; 0x4
        12d208:	e5918002 	ldr	r8, [r1, #2]
        12d20c:	e1a08848 	mov	r8, r8, asr #16
        12d210:	e3780001 	cmn	r8, #1	; 0x1
        12d214:	1affffee 	bne	12d1d4 <TraceToOdata(_ODATA *, _POINT *, int *)+0x5c>
        12d218:	e2877001 	add	r7, r7, #1	; 0x1
        12d21c:	e2811004 	add	r1, r1, #4	; 0x4
        12d220:	e5918002 	ldr	r8, [r1, #2]
        12d224:	e1a08848 	mov	r8, r8, asr #16
        12d228:	e3780001 	cmn	r8, #1	; 0x1
        12d22c:	1affffe4 	bne	12d1c4 <TraceToOdata(_ODATA *, _POINT *, int *)+0x4c>
        12d230:	e136000c 	teq	r6, ip
        12d234:	01330005 	teqeq	r3, r5
        12d238:	1a000001 	bne	12d244 <TraceToOdata(_ODATA *, _POINT *, int *)+0xcc>
        12d23c:	e3a00000 	mov	r0, #0	; 0x0
        12d240:	ea00006d 	b	12d3fc <TraceToOdata(_ODATA *, _POINT *, int *)+0x284>
        12d244:	e08c1006 	add	r1, ip, r6
        12d248:	e1a09481 	mov	r9, r1, lsl #9
        12d24c:	e0851003 	add	r1, r5, r3
        12d250:	e1a01481 	mov	r1, r1, lsl #9
        12d254:	e046c00c 	sub	ip, r6, ip
        12d258:	e0433005 	sub	r3, r3, r5
        12d25c:	e3a05000 	mov	r5, #0	; 0x0
        12d260:	e58d1000 	str	r1, [sp]
        12d264:	e1a01002 	mov	r1, r2
        12d268:	e37e0001 	cmn	lr, #1	; 0x1
        12d26c:	0a000020 	beq	12d2f4 <TraceToOdata(_ODATA *, _POINT *, int *)+0x17c>
        12d270:	e590e002 	ldr	lr, [r0, #2]
        12d274:	e1a0e84e 	mov	lr, lr, asr #16
        12d278:	e37e0001 	cmn	lr, #1	; 0x1
        12d27c:	0a000017 	beq	12d2e0 <TraceToOdata(_ODATA *, _POINT *, int *)+0x168>
        12d280:	e590e000 	ldr	lr, [r0]
        12d284:	e1a0e84e 	mov	lr, lr, asr #16
        12d288:	e13e0002 	teq	lr, r2
        12d28c:	05906002 	ldreq	r6, [r0, #2]
        12d290:	01310846 	teqeq	r1, r6, asr #16
        12d294:	02800004 	addeq	r0, r0, #4	; 0x4
        12d298:	0a00000c 	beq	12d2d0 <TraceToOdata(_ODATA *, _POINT *, int *)+0x158>
        12d29c:	e1a0200e 	mov	r2, lr
        12d2a0:	e5901002 	ldr	r1, [r0, #2]
        12d2a4:	e1a01841 	mov	r1, r1, asr #16
        12d2a8:	e1a0650e 	mov	r6, lr, lsl #10
        12d2ac:	e085e085 	add	lr, r5, r5, lsl #1
        12d2b0:	e784618e 	str	r6, [r4, lr, lsl #3]
        12d2b4:	e1a06501 	mov	r6, r1, lsl #10
        12d2b8:	e084e18e 	add	lr, r4, lr, lsl #3
        12d2bc:	e2800004 	add	r0, r0, #4	; 0x4
        12d2c0:	e2855001 	add	r5, r5, #1	; 0x1
        12d2c4:	e3350080 	teq	r5, #128	; 0x80
        12d2c8:	e5ae6004 	str	r6, [lr, #4]!
        12d2cc:	0affffda 	beq	12d23c <TraceToOdata(_ODATA *, _POINT *, int *)+0xc4>
        12d2d0:	e590e002 	ldr	lr, [r0, #2]
        12d2d4:	e1a0e84e 	mov	lr, lr, asr #16
        12d2d8:	e37e0001 	cmn	lr, #1	; 0x1
        12d2dc:	1affffe7 	bne	12d280 <TraceToOdata(_ODATA *, _POINT *, int *)+0x108>
        12d2e0:	e2800004 	add	r0, r0, #4	; 0x4
        12d2e4:	e590e002 	ldr	lr, [r0, #2]
        12d2e8:	e1a0e84e 	mov	lr, lr, asr #16
        12d2ec:	e37e0001 	cmn	lr, #1	; 0x1
        12d2f0:	1affffde 	bne	12d270 <TraceToOdata(_ODATA *, _POINT *, int *)+0xf8>
        12d2f4:	e15c0003 	cmp	ip, r3
        12d2f8:	d1a0a003 	movle	sl, r3
        12d2fc:	c1a0a00c 	movgt	sl, ip
        12d300:	e58da004 	str	sl, [sp, #4]
        12d304:	e35a0004 	cmp	sl, #4	; 0x4
        12d308:	baffffcb 	blt	12d23c <TraceToOdata(_ODATA *, _POINT *, int *)+0xc4>
        12d30c:	e3a06000 	mov	r6, #0	; 0x0
        12d310:	e3550000 	cmp	r5, #0	; 0x0
        12d314:	da000011 	ble	12d360 <TraceToOdata(_ODATA *, _POINT *, int *)+0x1e8>
        12d318:	e0868086 	add	r8, r6, r6, lsl #1
        12d31c:	e7940188 	ldr	r0, [r4, r8, lsl #3]
        12d320:	e0400009 	sub	r0, r0, r9
        12d324:	e1a01280 	mov	r1, r0, lsl #5
        12d328:	e1a0000a 	mov	r0, sl
        12d32c:	eb6a1583 	bl	1bb2940 <$__rt_sdiv>
        12d330:	e7840188 	str	r0, [r4, r8, lsl #3]
        12d334:	e0848188 	add	r8, r4, r8, lsl #3
        12d338:	e5980004 	ldr	r0, [r8, #4]
        12d33c:	e59d1000 	ldr	r1, [sp]
        12d340:	e0400001 	sub	r0, r0, r1
        12d344:	e1a01280 	mov	r1, r0, lsl #5
        12d348:	e59d0004 	ldr	r0, [sp, #4]
        12d34c:	eb6a157b 	bl	1bb2940 <$__rt_sdiv>
        12d350:	e2866001 	add	r6, r6, #1	; 0x1
        12d354:	e1560005 	cmp	r6, r5
        12d358:	e5a80004 	str	r0, [r8, #4]!
        12d35c:	baffffed 	blt	12d318 <TraceToOdata(_ODATA *, _POINT *, int *)+0x1a0>
        12d360:	e3a06000 	mov	r6, #0	; 0x0
        12d364:	e3550000 	cmp	r5, #0	; 0x0
        12d368:	c3a09000 	movgt	r9, #0	; 0x0
        12d36c:	ca000002 	bgt	12d37c <TraceToOdata(_ODATA *, _POINT *, int *)+0x204>
        12d370:	ea00001e 	b	12d3f0 <TraceToOdata(_ODATA *, _POINT *, int *)+0x278>
        12d374:	e3360000 	teq	r6, #0	; 0x0
        12d378:	1a000004 	bne	12d390 <TraceToOdata(_ODATA *, _POINT *, int *)+0x218>
        12d37c:	e5849008 	str	r9, [r4, #8]
        12d380:	e584900c 	str	r9, [r4, #12]
        12d384:	e5849010 	str	r9, [r4, #16]
        12d388:	e5849014 	str	r9, [r4, #20]
        12d38c:	ea000014 	b	12d3e4 <TraceToOdata(_ODATA *, _POINT *, int *)+0x26c>
        12d390:	e0861086 	add	r1, r6, r6, lsl #1
        12d394:	e7940181 	ldr	r0, [r4, r1, lsl #3]
        12d398:	e0841181 	add	r1, r4, r1, lsl #3
        12d39c:	e1a08001 	mov	r8, r1
        12d3a0:	e5112018 	ldr	r2, [r1, -#24]
        12d3a4:	e0500002 	subs	r0, r0, r2
        12d3a8:	e5810008 	str	r0, [r1, #8]
        12d3ac:	e5912004 	ldr	r2, [r1, #4]
        12d3b0:	e5113014 	ldr	r3, [r1, -#20]
        12d3b4:	e0422003 	sub	r2, r2, r3
        12d3b8:	e5a1200c 	str	r2, [r1, #12]!
        12d3bc:	42600000 	rsbmi	r0, r0, #0	; 0x0
        12d3c0:	e3520000 	cmp	r2, #0	; 0x0
        12d3c4:	b2622000 	rsblt	r2, r2, #0	; 0x0
        12d3c8:	e0010090 	mul	r1, r0, r0
        12d3cc:	e0201292 	mla	r0, r2, r2, r1
        12d3d0:	eb680d1d 	bl	1b3084c <$SQRT32_ORTO(unsigned long)>
        12d3d4:	e5880010 	str	r0, [r8, #16]
        12d3d8:	e5181004 	ldr	r1, [r8, -#4]
        12d3dc:	e0810000 	add	r0, r1, r0
        12d3e0:	e5a80014 	str	r0, [r8, #20]!
        12d3e4:	e2866001 	add	r6, r6, #1	; 0x1
        12d3e8:	e1560005 	cmp	r6, r5
        12d3ec:	baffffe0 	blt	12d374 <TraceToOdata(_ODATA *, _POINT *, int *)+0x1fc>
        12d3f0:	e51b202c 	ldr	r2, [fp, -#44]
        12d3f4:	e1a00005 	mov	r0, r5
        12d3f8:	e5827000 	str	r7, [r2]
        12d3fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TrainTrajectory(_POINT *, void *, unsigned short)
 * Address: 0012d460
 */
TrainTrajectory(_POINT *, void *, unsigned short) {
    /*
        12d460:	e1a0c00d 	mov	ip, sp
        12d464:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        12d468:	e24cb004 	sub	fp, ip, #4	; 0x4
        12d46c:	e1a04001 	mov	r4, r1
        12d470:	e1a07802 	mov	r7, r2, lsl #16
        12d474:	e1a07827 	mov	r7, r7, lsr #16
        12d478:	e24dd014 	sub	sp, sp, #20	; 0x14
        12d47c:	e3a06001 	mov	r6, #1	; 0x1
        12d480:	e1a0100d 	mov	r1, sp
        12d484:	eb680090 	bl	1b2d6cc <$FillNwtSample(_POINT *, _NWTSAMPLE *)>
        12d488:	e3a08000 	mov	r8, #0	; 0x0
        12d48c:	e3300000 	teq	r0, #0	; 0x0
        12d490:	0a000003 	beq	12d4a4 <TrainTrajectory(_POINT *, void *, unsigned short)+0x44>
        12d494:	e3a00c01 	mov	r0, #256	; 0x100
        12d498:	eb67fc74 	bl	1b2c670 <$CreateAlist(int)>
        12d49c:	e1b05000 	movs	r5, r0
        12d4a0:	1a000001 	bne	12d4ac <TrainTrajectory(_POINT *, void *, unsigned short)+0x4c>
        12d4a4:	e1a00008 	mov	r0, r8
        12d4a8:	ea000015 	b	12d504 <TrainTrajectory(_POINT *, void *, unsigned short)+0xa4>
        12d4ac:	e1a00005 	mov	r0, r5
        12d4b0:	eb67fc68 	bl	1b2c658 <$ClearAlist(_ALIST *)>
        12d4b4:	e1a02004 	mov	r2, r4
        12d4b8:	e1a0100d 	mov	r1, sp
        12d4bc:	e1a00005 	mov	r0, r5
        12d4c0:	e3a03000 	mov	r3, #0	; 0x0
        12d4c4:	eb680ce5 	bl	1b30860 <$SearchInDataBase(_ALIST *, _NWTSAMPLE *, void *, unsigned char *)>
        12d4c8:	e1a01005 	mov	r1, r5
        12d4cc:	e1a00007 	mov	r0, r7
        12d4d0:	eb680cca 	bl	1b30800 <$Occam(unsigned short, _ALIST *)>
        12d4d4:	e3300000 	teq	r0, #0	; 0x0
        12d4d8:	0a000005 	beq	12d4f4 <TrainTrajectory(_POINT *, void *, unsigned short)+0x94>
        12d4dc:	e1a02007 	mov	r2, r7
        12d4e0:	e1a0100d 	mov	r1, sp
        12d4e4:	e1a00004 	mov	r0, r4
        12d4e8:	eb67f82c 	bl	1b2b5a0 <$AddToDataBase(void *, _NWTSAMPLE *, unsigned short)>
        12d4ec:	e3300000 	teq	r0, #0	; 0x0
        12d4f0:	1a000000 	bne	12d4f8 <TrainTrajectory(_POINT *, void *, unsigned short)+0x98>
        12d4f4:	e3a06000 	mov	r6, #0	; 0x0
        12d4f8:	e1a00005 	mov	r0, r5
        12d4fc:	eb680064 	bl	1b2d694 <$DestroyAlist(_ALIST *)>
        12d500:	e1a00006 	mov	r0, r6
        12d504:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TimerInterruptHandler
 * Address: 0013cfc0
 */
void globals::TimerInterruptHandler() {
    /*
        13cfc0:	e59f0014 	ldr	r0, [pc, #14]	; 13cfdc <TimerInterruptHandler+0x1c>
        13cfc4:	e5901008 	ldr	r1, [r0, #8]
        13cfc8:	e2811001 	add	r1, r1, #1	; 0x1
        13cfcc:	e5a01008 	str	r1, [r0, #8]!
        13cfd0:	e59f0008 	ldr	r0, [pc, #8]	; 13cfe0 <TimerInterruptHandler+0x20>
        13cfd4:	e5900000 	ldr	r0, [r0]
        13cfd8:	ea66da6a 	b	1af3988 <TTimerEngine::$Alarm(void)>
        13cfdc:	0c10156c 	ldceq	5, cr1, [r0], -#432
        13cfe0:	0c100fe0 	ldceq	15, cr0, [r0], -#896
    */
}

/**
 * Symbol: TimeFromNow
 * Address: 0013d204
 */
void globals::TimeFromNow() {
    /*
        13d204:	e1a0c00d 	mov	ip, sp
        13d208:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        13d20c:	e24cb004 	sub	fp, ip, #4	; 0x4
        13d210:	e1a04000 	mov	r4, r0
        13d214:	e24dd010 	sub	sp, sp, #16	; 0x10
        13d218:	e3a00000 	mov	r0, #0	; 0x0
        13d21c:	e58d0008 	str	r0, [sp, #8]
        13d220:	e58d100c 	str	r1, [sp, #12]
        13d224:	e1a0000d 	mov	r0, sp
        13d228:	eb6a59ea 	bl	1bd39d8 <$GetGlobalTime>
        13d22c:	e24dd008 	sub	sp, sp, #8	; 0x8
        13d230:	e28d1008 	add	r1, sp, #8	; 0x8
        13d234:	e8915000 	ldmia	r1, {ip, lr}
        13d238:	e88d5000 	stmia	sp, {ip, lr}
        13d23c:	e1a0100d 	mov	r1, sp
        13d240:	e28d0010 	add	r0, sp, #16	; 0x10
        13d244:	eb6a8f8e 	bl	1be1084 <$CompAdd>
        13d248:	e28d0010 	add	r0, sp, #16	; 0x10
        13d24c:	e8bd5000 	ldmia	sp!, {ip, lr}
        13d250:	e8805000 	stmia	r0, {ip, lr}
        13d254:	e1b00004 	movs	r0, r4
        13d258:	1a000003 	bne	13d26c <TimeFromNow+0x68>
        13d25c:	e3a00008 	mov	r0, #8	; 0x8
        13d260:	eb6a4534 	bl	1bce738 <$__nw(unsigned int)>
        13d264:	e3300000 	teq	r0, #0	; 0x0
        13d268:	0a000002 	beq	13d278 <TimeFromNow+0x74>
        13d26c:	e28d1008 	add	r1, sp, #8	; 0x8
        13d270:	e8911008 	ldmia	r1, {r3, ip}
        13d274:	e8801008 	stmia	r0, {r3, ip}
        13d278:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStrokesToInkWord(TStroke **, TRect *)
 * Address: 001404f0
 */
TStrokesToInkWord(TStroke **, TRect *) {
    /*
        1404f0:	e1a0c00d 	mov	ip, sp
        1404f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1404f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1404fc:	e1a05000 	mov	r5, r0
        140500:	e1a04001 	mov	r4, r1
        140504:	e24dd008 	sub	sp, sp, #8	; 0x8
        140508:	e1a0100d 	mov	r1, sp
        14050c:	eb65ee20 	bl	1abbd94 <$UnionBounds(TStroke **, TRect *)>
        140510:	e1a0100d 	mov	r1, sp
        140514:	e1a00005 	mov	r0, r5
        140518:	eb664d1f 	bl	1ad399c <$ScaleStrokesForInkWord(TStroke **, TRect *)>
        14051c:	e59d0002 	ldr	r0, [sp, #2]
        140520:	e2400002 	sub	r0, r0, #2	; 0x2
        140524:	e2600000 	rsb	r0, r0, #0	; 0x0
        140528:	e1a02800 	mov	r2, r0, lsl #16
        14052c:	e59d0000 	ldr	r0, [sp]
        140530:	e2400002 	sub	r0, r0, #2	; 0x2
        140534:	e2600000 	rsb	r0, r0, #0	; 0x0
        140538:	e1a01800 	mov	r1, r0, lsl #16
        14053c:	e1a00005 	mov	r0, r5
        140540:	eb65d983 	bl	1ab6b54 <$OffsetStrokes__FPP7TStrokelT2>
        140544:	e1a0000d 	mov	r0, sp
        140548:	e3e01001 	mvn	r1, #1	; 0x1
        14054c:	e1a02001 	mov	r2, r1
        140550:	eb6840ba 	bl	1b50840 <$InsetRect__FP4RectlT2>
        140554:	e3340000 	teq	r4, #0	; 0x0
        140558:	0a000015 	beq	1405b4 <TStrokesToInkWord(TStroke **, TRect *)+0xc4>
        14055c:	e89d5000 	ldmia	sp, {ip, lr}
        140560:	e8845000 	stmia	r4, {ip, lr}
        140564:	e59f0094 	ldr	r0, [pc, #94]	; 140600 <TStrokesToInkWord(TStroke **, TRect *)+0x110>
        140568:	eb655965 	bl	1a96b04 <$GetPreference(RefVar const &)>
        14056c:	e3100003 	tst	r0, #3	; 0x3
        140570:	01a00140 	moveq	r0, r0, asr #2
        140574:	0a000000 	beq	14057c <TStrokesToInkWord(TStroke **, TRect *)+0x8c>
        140578:	eb6a06e7 	bl	1bc211c <$_RINTError(long)>
        14057c:	e5941006 	ldr	r1, [r4, #6]
        140580:	e1a01821 	mov	r1, r1, lsr #16
        140584:	e1a00800 	mov	r0, r0, lsl #16
        140588:	e1a00840 	mov	r0, r0, asr #16
        14058c:	e0811000 	add	r1, r1, r0
        140590:	e5c41007 	strb	r1, [r4, #7]
        140594:	e1a01441 	mov	r1, r1, asr #8
        140598:	e5c41006 	strb	r1, [r4, #6]
        14059c:	e5941004 	ldr	r1, [r4, #4]
        1405a0:	e1a01821 	mov	r1, r1, lsr #16
        1405a4:	e0810000 	add	r0, r1, r0
        1405a8:	e5c40005 	strb	r0, [r4, #5]
        1405ac:	e1a00440 	mov	r0, r0, asr #8
        1405b0:	e5c40004 	strb	r0, [r4, #4]
        1405b4:	e1a00005 	mov	r0, r5
        1405b8:	e3a01001 	mov	r1, #1	; 0x1
        1405bc:	eb65d129 	bl	1ab4a68 <$InkCompress(TStroke **, unsigned char)>
        1405c0:	eb6a06e1 	bl	1bc214c <$AllocateRefHandle(long)>
        1405c4:	e1a04000 	mov	r4, r0
        1405c8:	e5900000 	ldr	r0, [r0]
        1405cc:	e3300002 	teq	r0, #2	; 0x2
        1405d0:	1a000005 	bne	1405ec <TStrokesToInkWord(TStroke **, TRect *)+0xfc>
        1405d4:	e59f0028 	ldr	r0, [pc, #28]	; 140604 <TStrokesToInkWord(TStroke **, TRect *)+0x114>
        1405d8:	e5900000 	ldr	r0, [r0]
        1405dc:	e3a02000 	mov	r2, #0	; 0x0
        1405e0:	e3a010e9 	mov	r1, #233	; 0xe9
        1405e4:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        1405e8:	eb6a8aeb 	bl	1be319c <$Throw>
        1405ec:	e5945000 	ldr	r5, [r4]
        1405f0:	e1a00004 	mov	r0, r4
        1405f4:	eb6a0af0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1405f8:	e1a00005 	mov	r0, r5
        1405fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        140600:	00684e50 	rsbeq	r4, r8, r0, asr lr
        140604:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TStrokesToInk(TStroke **, TRect *)
 * Address: 00140608
 */
TStrokesToInk(TStroke **, TRect *) {
    /*
        140608:	e1a0c00d 	mov	ip, sp
        14060c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        140610:	e24cb004 	sub	fp, ip, #4	; 0x4
        140614:	e1a04000 	mov	r4, r0
        140618:	e1a05001 	mov	r5, r1
        14061c:	e24dd008 	sub	sp, sp, #8	; 0x8
        140620:	e1a0100d 	mov	r1, sp
        140624:	eb65edda 	bl	1abbd94 <$UnionBounds(TStroke **, TRect *)>
        140628:	e59d0002 	ldr	r0, [sp, #2]
        14062c:	e2400002 	sub	r0, r0, #2	; 0x2
        140630:	e2600000 	rsb	r0, r0, #0	; 0x0
        140634:	e1a02800 	mov	r2, r0, lsl #16
        140638:	e59d0000 	ldr	r0, [sp]
        14063c:	e2400002 	sub	r0, r0, #2	; 0x2
        140640:	e2600000 	rsb	r0, r0, #0	; 0x0
        140644:	e1a01800 	mov	r1, r0, lsl #16
        140648:	e1a00004 	mov	r0, r4
        14064c:	eb65d940 	bl	1ab6b54 <$OffsetStrokes__FPP7TStrokelT2>
        140650:	e1a0000d 	mov	r0, sp
        140654:	e3e01001 	mvn	r1, #1	; 0x1
        140658:	e1a02001 	mov	r2, r1
        14065c:	eb684077 	bl	1b50840 <$InsetRect__FP4RectlT2>
        140660:	e3350000 	teq	r5, #0	; 0x0
        140664:	189d5000 	ldmneia	sp, {ip, lr}
        140668:	18855000 	stmneia	r5, {ip, lr}
        14066c:	e1a00004 	mov	r0, r4
        140670:	e3a01000 	mov	r1, #0	; 0x0
        140674:	eb65d0fb 	bl	1ab4a68 <$InkCompress(TStroke **, unsigned char)>
        140678:	eb6a06b3 	bl	1bc214c <$AllocateRefHandle(long)>
        14067c:	e1a04000 	mov	r4, r0
        140680:	e5900000 	ldr	r0, [r0]
        140684:	e3300002 	teq	r0, #2	; 0x2
        140688:	1a000005 	bne	1406a4 <TStrokesToInk(TStroke **, TRect *)+0x9c>
        14068c:	e59f0024 	ldr	r0, [pc, #24]	; 1406b8 <TStrokesToInk(TStroke **, TRect *)+0xb0>
        140690:	e5900000 	ldr	r0, [r0]
        140694:	e3a02000 	mov	r2, #0	; 0x0
        140698:	e3a010e9 	mov	r1, #233	; 0xe9
        14069c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        1406a0:	eb6a8abd 	bl	1be319c <$Throw>
        1406a4:	e5945000 	ldr	r5, [r4]
        1406a8:	e1a00004 	mov	r0, r4
        1406ac:	eb6a0ac2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1406b0:	e1a00005 	mov	r0, r5
        1406b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1406b8:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TotalSystemFree
 * Address: 001430bc
 */
void globals::TotalSystemFree() {
    /*
        1430bc:	e1a0c00d 	mov	ip, sp
        1430c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1430c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1430c8:	eb6a6767 	bl	1bdce6c <$SystemFreePageCount>
        1430cc:	e1a00600 	mov	r0, r0, lsl #12
        1430d0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: Tracing(int, _ARDATA *)
 * Address: 00152d10
 */
Tracing(int, _ARDATA *) {
    /*
        152d10:	e1a0c00d 	mov	ip, sp
        152d14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        152d18:	e24cb004 	sub	fp, ip, #4	; 0x4
        152d1c:	e3a06000 	mov	r6, #0	; 0x0
        152d20:	e5816014 	str	r6, [r1, #20]
        152d24:	e5816010 	str	r6, [r1, #16]
        152d28:	e2814018 	add	r4, r1, #24	; 0x18
        152d2c:	e2405001 	sub	r5, r0, #1	; 0x1
        152d30:	e5140018 	ldr	r0, [r4, -#24]
        152d34:	e5941000 	ldr	r1, [r4]
        152d38:	e0511000 	subs	r1, r1, r0
        152d3c:	e5140014 	ldr	r0, [r4, -#20]
        152d40:	e5942004 	ldr	r2, [r4, #4]
        152d44:	e0420000 	sub	r0, r2, r0
        152d48:	42611000 	rsbmi	r1, r1, #0	; 0x0
        152d4c:	e3500000 	cmp	r0, #0	; 0x0
        152d50:	b2600000 	rsblt	r0, r0, #0	; 0x0
        152d54:	e0020191 	mul	r2, r1, r1
        152d58:	e0010090 	mul	r1, r0, r0
        152d5c:	e0810002 	add	r0, r1, r2
        152d60:	eb6776b9 	bl	1b3084c <$SQRT32_ORTO(unsigned long)>
        152d64:	e5840010 	str	r0, [r4, #16]
        152d68:	e0866000 	add	r6, r6, r0
        152d6c:	e2555001 	subs	r5, r5, #1	; 0x1
        152d70:	e5a46014 	str	r6, [r4, #20]!
        152d74:	e2844004 	add	r4, r4, #4	; 0x4
        152d78:	1affffec 	bne	152d30 <Tracing(int, _ARDATA *)+0x20>
        152d7c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TransformBigPageToPages(unsigned long)
 * Address: 0015b430
 */
TransformBigPageToPages(unsigned long) {
    /*
        15b430:	e1a0c00d 	mov	ip, sp
        15b434:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        15b438:	e24cb004 	sub	fp, ip, #4	; 0x4
        15b43c:	e1a04000 	mov	r4, r0
        15b440:	e24dd004 	sub	sp, sp, #4	; 0x4
        15b444:	eb08ddd1 	bl	392b90 <EnterFIQAtomic>
        15b448:	ebfaf551 	bl	18994 <FlushDCache>
        15b44c:	e1a00a24 	mov	r0, r4, lsr #20
        15b450:	e59f10cc 	ldr	r1, [pc, #cc]	; 15b524 <TransformBigPageToPages(unsigned long)+0xf4>
        15b454:	e5911000 	ldr	r1, [r1]
        15b458:	e0810100 	add	r0, r1, r0, lsl #2
        15b45c:	ebfaf610 	bl	18ca4 <LoadFromPhysAddress>
        15b460:	e1a00520 	mov	r0, r0, lsr #10
        15b464:	e1a00500 	mov	r0, r0, lsl #10
        15b468:	e1a01824 	mov	r1, r4, lsr #16
        15b46c:	e1a01801 	mov	r1, r1, lsl #16
        15b470:	e3a050ff 	mov	r5, #255	; 0xff
        15b474:	e0051621 	and	r1, r5, r1, lsr #12
        15b478:	e0800101 	add	r0, r0, r1, lsl #2
        15b47c:	e1a04000 	mov	r4, r0
        15b480:	ebfaf607 	bl	18ca4 <LoadFromPhysAddress>
        15b484:	e2001003 	and	r1, r0, #3	; 0x3
        15b488:	e3310001 	teq	r1, #1	; 0x1
        15b48c:	1a000022 	bne	15b51c <TransformBigPageToPages(unsigned long)+0xec>
        15b490:	e1a06820 	mov	r6, r0, lsr #16
        15b494:	e1a06806 	mov	r6, r6, lsl #16
        15b498:	e0059220 	and	r9, r5, r0, lsr #4
        15b49c:	e200000c 	and	r0, r0, #12	; 0xc
        15b4a0:	e330000c 	teq	r0, #12	; 0xc
        15b4a4:	13a00000 	movne	r0, #0	; 0x0
        15b4a8:	03a00001 	moveq	r0, #1	; 0x1
        15b4ac:	e5cd0000 	strb	r0, [sp]
        15b4b0:	e3a05000 	mov	r5, #0	; 0x0
        15b4b4:	e1a00085 	mov	r0, r5, lsl #1
        15b4b8:	e1a00039 	mov	r0, r9, lsr r0
        15b4bc:	e2000003 	and	r0, r0, #3	; 0x3
        15b4c0:	e3a07000 	mov	r7, #0	; 0x0
        15b4c4:	e1801100 	orr	r1, r0, r0, lsl #2
        15b4c8:	e1811200 	orr	r1, r1, r0, lsl #4
        15b4cc:	e1810300 	orr	r0, r1, r0, lsl #6
        15b4d0:	e20080ff 	and	r8, r0, #255	; 0xff
        15b4d4:	e5dd0000 	ldrb	r0, [sp]
        15b4d8:	e1a01626 	mov	r1, r6, lsr #12
        15b4dc:	e1a01601 	mov	r1, r1, lsl #12
        15b4e0:	e1811208 	orr	r1, r1, r8, lsl #4
        15b4e4:	e3300000 	teq	r0, #0	; 0x0
        15b4e8:	13a0000c 	movne	r0, #12	; 0xc
        15b4ec:	e1810000 	orr	r0, r1, r0
        15b4f0:	e3801002 	orr	r1, r0, #2	; 0x2
        15b4f4:	e1a00004 	mov	r0, r4
        15b4f8:	ebfaf5f8 	bl	18ce0 <StoreToPhysAddress>
        15b4fc:	e2877001 	add	r7, r7, #1	; 0x1
        15b500:	e2866a01 	add	r6, r6, #4096	; 0x1000
        15b504:	e2844004 	add	r4, r4, #4	; 0x4
        15b508:	e3570004 	cmp	r7, #4	; 0x4
        15b50c:	bafffff0 	blt	15b4d4 <TransformBigPageToPages(unsigned long)+0xa4>
        15b510:	e2855001 	add	r5, r5, #1	; 0x1
        15b514:	e3550004 	cmp	r5, #4	; 0x4
        15b518:	baffffe5 	blt	15b4b4 <TransformBigPageToPages(unsigned long)+0x84>
        15b51c:	eb08dda3 	bl	392bb0 <ExitFIQAtomic>
        15b520:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        15b524:	0c1016d8 	ldceq	6, cr1, [r0], -#864
    */
}

/**
 * Symbol: TransformSectionIntoPageTable(unsigned long)
 * Address: 00163584
 */
TransformSectionIntoPageTable(unsigned long) {
    /*
        163584:	e1a0c00d 	mov	ip, sp
        163588:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        16358c:	e24cb004 	sub	fp, ip, #4	; 0x4
        163590:	e1a04000 	mov	r4, r0
        163594:	e24dd004 	sub	sp, sp, #4	; 0x4
        163598:	e1a0200d 	mov	r2, sp
        16359c:	e1a01000 	mov	r1, r0
        1635a0:	e59f0030 	ldr	r0, [pc, #30]	; 1635d8 <TransformSectionIntoPageTable(unsigned long)+0x54>
        1635a4:	e5900000 	ldr	r0, [r0]
        1635a8:	eb6640f8 	bl	1af3990 <TPageTableManager::$AllocatePageTable(unsigned long, unsigned long &)>
        1635ac:	e3300000 	teq	r0, #0	; 0x0
        1635b0:	1a000007 	bne	1635d4 <TransformSectionIntoPageTable(unsigned long)+0x50>
        1635b4:	e1a00004 	mov	r0, r4
        1635b8:	e59d1000 	ldr	r1, [sp]
        1635bc:	eb664943 	bl	1af5ad0 <$CopySectionIntoPageTable__FUlT1>
        1635c0:	e1a00004 	mov	r0, r4
        1635c4:	e3a02000 	mov	r2, #0	; 0x0
        1635c8:	e59d1000 	ldr	r1, [sp]
        1635cc:	eb66a83b 	bl	1b0d6c0 <$AddPTable__FUlT1Uc>
        1635d0:	e3a00000 	mov	r0, #0	; 0x0
        1635d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1635d8:	0c1016fc 	ldceq	6, cr1, [r0], -#1008
    */
}

/**
 * Symbol: TurnToContent
 * Address: 00164b88
 */
void globals::TurnToContent() {
    /*
        164b88:	e1a0c00d 	mov	ip, sp
        164b8c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        164b90:	e24cb004 	sub	fp, ip, #4	; 0x4
        164b94:	e1a04000 	mov	r4, r0
        164b98:	e1a06001 	mov	r6, r1
        164b9c:	e1a05002 	mov	r5, r2
        164ba0:	e24dd004 	sub	sp, sp, #4	; 0x4
        164ba4:	e3a00002 	mov	r0, #2	; 0x2
        164ba8:	eb697567 	bl	1bc214c <$AllocateRefHandle(long)>
        164bac:	e1a07000 	mov	r7, r0
        164bb0:	e3a0801a 	mov	r8, #26	; 0x1a
        164bb4:	e1a00008 	mov	r0, r8
        164bb8:	eb697563 	bl	1bc214c <$AllocateRefHandle(long)>
        164bbc:	e58d0000 	str	r0, [sp]
        164bc0:	e1a0300d 	mov	r3, sp
        164bc4:	e92d0008 	stmdb	sp!, {r3}
        164bc8:	e1a03005 	mov	r3, r5
        164bcc:	e1a02006 	mov	r2, r6
        164bd0:	e1a01004 	mov	r1, r4
        164bd4:	e59f005c 	ldr	r0, [pc, #5c]	; 164c38 <TurnToContent+0xb0>
        164bd8:	e5900000 	ldr	r0, [r0]
        164bdc:	eb64bf8c 	bl	1a94a14 <TLibrarian::$FindPageByValue(RefVar const &, RefVar const &, RefVar const &, RefVar const &)>
        164be0:	e5870000 	str	r0, [r7]
        164be4:	e5bd0004 	ldr	r0, [sp, #4]!
        164be8:	eb697973 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        164bec:	e3a05000 	mov	r5, #0	; 0x0
        164bf0:	e5970000 	ldr	r0, [r7]
        164bf4:	eb6981ac 	bl	1bc52ac <$Length(long)>
        164bf8:	e3300000 	teq	r0, #0	; 0x0
        164bfc:	0a00000e 	beq	164c3c <TurnToContent+0xb4>
        164c00:	e1a01005 	mov	r1, r5
        164c04:	e5970000 	ldr	r0, [r7]
        164c08:	eb697d91 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        164c0c:	e3100003 	tst	r0, #3	; 0x3
        164c10:	01a00140 	moveq	r0, r0, asr #2
        164c14:	0a000000 	beq	164c1c <TurnToContent+0x94>
        164c18:	eb69753f 	bl	1bc211c <$_RINTError(long)>
        164c1c:	e1a01000 	mov	r1, r0
        164c20:	e1a00004 	mov	r0, r4
        164c24:	eb659a73 	bl	1acb5f8 <$PageTurnToSpread(RefVar const &, unsigned long)>
        164c28:	e1a00007 	mov	r0, r7
        164c2c:	eb697962 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        164c30:	e1a00008 	mov	r0, r8
        164c34:	ea000003 	b	164c48 <TurnToContent+0xc0>
        164c38:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        164c3c:	e1a00007 	mov	r0, r7
        164c40:	eb69795d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        164c44:	e3a00002 	mov	r0, #2	; 0x2
        164c48:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TurnToPage
 * Address: 00164c4c
 */
void globals::TurnToPage() {
    /*
        164c4c:	e1a0c00d 	mov	ip, sp
        164c50:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        164c54:	e24cb004 	sub	fp, ip, #4	; 0x4
        164c58:	e1a04000 	mov	r4, r0
        164c5c:	e5910000 	ldr	r0, [r1]
        164c60:	e5900000 	ldr	r0, [r0]
        164c64:	e3100003 	tst	r0, #3	; 0x3
        164c68:	01a00140 	moveq	r0, r0, asr #2
        164c6c:	0a000000 	beq	164c74 <TurnToPage+0x28>
        164c70:	eb697529 	bl	1bc211c <$_RINTError(long)>
        164c74:	e1a01000 	mov	r1, r0
        164c78:	e1a00004 	mov	r0, r4
        164c7c:	eb659a5d 	bl	1acb5f8 <$PageTurnToSpread(RefVar const &, unsigned long)>
        164c80:	e3a0001a 	mov	r0, #26	; 0x1a
        164c84:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TimeStampHiliteChange(TView *)
 * Address: 0016a408
 */
TimeStampHiliteChange(TView *) {
    /*
        16a408:	e1a0c00d 	mov	ip, sp
        16a40c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        16a410:	e24cb004 	sub	fp, ip, #4	; 0x4
        16a414:	e24dd00c 	sub	sp, sp, #12	; 0xc
        16a418:	e2804024 	add	r4, r0, #36	; 0x24
        16a41c:	e59f5060 	ldr	r5, [pc, #60]	; 16a484 <TimeStampHiliteChange(TView *)+0x7c>
        16a420:	e5950000 	ldr	r0, [r5]
        16a424:	eb695f48 	bl	1bc214c <$AllocateRefHandle(long)>
        16a428:	e58d0000 	str	r0, [sp]
        16a42c:	e1a0000d 	mov	r0, sp
        16a430:	e59f1050 	ldr	r1, [pc, #50]	; 16a488 <TimeStampHiliteChange(TView *)+0x80>
        16a434:	e1a02004 	mov	r2, r4
        16a438:	eb696fca 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        16a43c:	e59d0000 	ldr	r0, [sp]
        16a440:	eb69635d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16a444:	e3a00002 	mov	r0, #2	; 0x2
        16a448:	eb695f3f 	bl	1bc214c <$AllocateRefHandle(long)>
        16a44c:	e58d0004 	str	r0, [sp, #4]
        16a450:	e28d4004 	add	r4, sp, #4	; 0x4
        16a454:	e5950000 	ldr	r0, [r5]
        16a458:	eb695f3b 	bl	1bc214c <$AllocateRefHandle(long)>
        16a45c:	e58d0008 	str	r0, [sp, #8]
        16a460:	e28d0008 	add	r0, sp, #8	; 0x8
        16a464:	e59f1020 	ldr	r1, [pc, #20]	; 16a48c <TimeStampHiliteChange(TView *)+0x84>
        16a468:	e1a02004 	mov	r2, r4
        16a46c:	eb696fbd 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        16a470:	e59d0004 	ldr	r0, [sp, #4]
        16a474:	eb696350 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16a478:	e59d0008 	ldr	r0, [sp, #8]
        16a47c:	eb69634e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16a480:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        16a484:	0c10180c 	ldceq	8, cr1, [r0], -#48
        16a488:	006834a0 	rsbeq	r3, r8, r0, lsr #9
        16a48c:	00683498 	streqb	r3, [r8], -#72
    */
}

/**
 * Symbol: TotalRunLength(RefVar const &)
 * Address: 0017a894
 */
TotalRunLength(RefVar const &) {
    /*
        17a894:	e1a0c00d 	mov	ip, sp
        17a898:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        17a89c:	e24cb004 	sub	fp, ip, #4	; 0x4
        17a8a0:	e1a04000 	mov	r4, r0
        17a8a4:	e5900000 	ldr	r0, [r0]
        17a8a8:	e5900000 	ldr	r0, [r0]
        17a8ac:	eb692a7e 	bl	1bc52ac <$Length(long)>
        17a8b0:	e1a07000 	mov	r7, r0
        17a8b4:	e3a06000 	mov	r6, #0	; 0x0
        17a8b8:	e3a05000 	mov	r5, #0	; 0x0
        17a8bc:	e3500000 	cmp	r0, #0	; 0x0
        17a8c0:	da00000b 	ble	17a8f4 <TotalRunLength(RefVar const &)+0x60>
        17a8c4:	e5940000 	ldr	r0, [r4]
        17a8c8:	e5900000 	ldr	r0, [r0]
        17a8cc:	e1a01005 	mov	r1, r5
        17a8d0:	eb69265f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        17a8d4:	e3100003 	tst	r0, #3	; 0x3
        17a8d8:	01a00140 	moveq	r0, r0, asr #2
        17a8dc:	0a000000 	beq	17a8e4 <TotalRunLength(RefVar const &)+0x50>
        17a8e0:	eb691e0d 	bl	1bc211c <$_RINTError(long)>
        17a8e4:	e0806006 	add	r6, r0, r6
        17a8e8:	e2855002 	add	r5, r5, #2	; 0x2
        17a8ec:	e1550007 	cmp	r5, r7
        17a8f0:	bafffff3 	blt	17a8c4 <TotalRunLength(RefVar const &)+0x30>
        17a8f4:	e1a00006 	mov	r0, r6
        17a8f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TextBox__FR11TRichStringRC6RefVarRC5TRectlN24
 * Address: 0017bd2c
 */
void globals::TextBox() {
    /*
        17bd2c:	e1a0c00d 	mov	ip, sp
        17bd30:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        17bd34:	e24cb004 	sub	fp, ip, #4	; 0x4
        17bd38:	e1a07000 	mov	r7, r0
        17bd3c:	e1a06001 	mov	r6, r1
        17bd40:	e1a04002 	mov	r4, r2
        17bd44:	e1a05003 	mov	r5, r3
        17bd48:	e99b0300 	ldmib	fp, {r8, r9}
        17bd4c:	e24dd008 	sub	sp, sp, #8	; 0x8
        17bd50:	e8941008 	ldmia	r4, {r3, ip}
        17bd54:	e88d1008 	stmia	sp, {r3, ip}
        17bd58:	e3380000 	teq	r8, #0	; 0x0
        17bd5c:	0a000023 	beq	17bdf0 <TextBox__FR11TRichStringRC6RefVarRC5TRectlN24+0xc4>
        17bd60:	e59d0002 	ldr	r0, [sp, #2]
        17bd64:	e5cd0005 	strb	r0, [sp, #5]
        17bd68:	e1a00440 	mov	r0, r0, asr #8
        17bd6c:	e5cd0004 	strb	r0, [sp, #4]
        17bd70:	e3a03001 	mov	r3, #1	; 0x1
        17bd74:	e3a02000 	mov	r2, #0	; 0x0
        17bd78:	e92d000c 	stmdb	sp!, {r2, r3}
        17bd7c:	e1a03005 	mov	r3, r5
        17bd80:	e28d2008 	add	r2, sp, #8	; 0x8
        17bd84:	e1a01006 	mov	r1, r6
        17bd88:	e1a00007 	mov	r0, r7
        17bd8c:	eb645aea 	bl	1a9293c <$DrawSimpleParagraph(TRichString &, RefVar const &, TRect *, long, unsigned char, unsigned char)>
        17bd90:	e28dd008 	add	sp, sp, #8	; 0x8
        17bd94:	e5940004 	ldr	r0, [r4, #4]
        17bd98:	e1a00820 	mov	r0, r0, lsr #16
        17bd9c:	e5941000 	ldr	r1, [r4]
        17bda0:	e1a01821 	mov	r1, r1, lsr #16
        17bda4:	e0400001 	sub	r0, r0, r1
        17bda8:	e1a00800 	mov	r0, r0, lsl #16
        17bdac:	e1a00840 	mov	r0, r0, asr #16
        17bdb0:	e59d1006 	ldr	r1, [sp, #6]
        17bdb4:	e59d2002 	ldr	r2, [sp, #2]
        17bdb8:	e0411002 	sub	r1, r1, r2
        17bdbc:	e1a01801 	mov	r1, r1, lsl #16
        17bdc0:	e0402841 	sub	r2, r0, r1, asr #16
        17bdc4:	e8945000 	ldmia	r4, {ip, lr}
        17bdc8:	e88d5000 	stmia	sp, {ip, lr}
        17bdcc:	e3a01000 	mov	r1, #0	; 0x0
        17bdd0:	e3380004 	teq	r8, #4	; 0x4
        17bdd4:	00822fa2 	addeq	r2, r2, r2, lsr #31
        17bdd8:	01a020c2 	moveq	r2, r2, asr #1
        17bddc:	0a000001 	beq	17bde8 <TextBox__FR11TRichStringRC6RefVarRC5TRectlN24+0xbc>
        17bde0:	e3380008 	teq	r8, #8	; 0x8
        17bde4:	1a000001 	bne	17bdf0 <TextBox__FR11TRichStringRC6RefVarRC5TRectlN24+0xc4>
        17bde8:	e1a0000d 	mov	r0, sp
        17bdec:	eb6756bd 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        17bdf0:	e1a03009 	mov	r3, r9
        17bdf4:	e3a02001 	mov	r2, #1	; 0x1
        17bdf8:	e92d000c 	stmdb	sp!, {r2, r3}
        17bdfc:	e1a03005 	mov	r3, r5
        17be00:	e28d2008 	add	r2, sp, #8	; 0x8
        17be04:	e1a01006 	mov	r1, r6
        17be08:	e1a00007 	mov	r0, r7
        17be0c:	eb645aca 	bl	1a9293c <$DrawSimpleParagraph(TRichString &, RefVar const &, TRect *, long, unsigned char, unsigned char)>
        17be10:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TextBounds(TRichString &, RefVar const &, TRect *, long)
 * Address: 0017be14
 */
TextBounds(TRichString &, RefVar const &, TRect *, long) {
    /*
        17be14:	e1a0c00d 	mov	ip, sp
        17be18:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        17be1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        17be20:	e1a0c002 	mov	ip, r2
        17be24:	e1a0e003 	mov	lr, r3
        17be28:	e3a03001 	mov	r3, #1	; 0x1
        17be2c:	e3a02000 	mov	r2, #0	; 0x0
        17be30:	e92d000c 	stmdb	sp!, {r2, r3}
        17be34:	e1a0300e 	mov	r3, lr
        17be38:	e1a0200c 	mov	r2, ip
        17be3c:	eb645abe 	bl	1a9293c <$DrawSimpleParagraph(TRichString &, RefVar const &, TRect *, long, unsigned char, unsigned char)>
        17be40:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TextRefScanner__FPvlN22PPv
 * Address: 0017cfdc
 */
void globals::TextRefScanner() {
    /*
        17cfdc:	e1a0c00d 	mov	ip, sp
        17cfe0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        17cfe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        17cfe8:	e1a06001 	mov	r6, r1
        17cfec:	e1a04002 	mov	r4, r2
        17cff0:	e1a05000 	mov	r5, r0
        17cff4:	e2800008 	add	r0, r0, #8	; 0x8
        17cff8:	e3710002 	cmn	r1, #2	; 0x2
        17cffc:	e59b7004 	ldr	r7, [fp, #4]
        17d000:	1a000009 	bne	17d02c <TextRefScanner__FPvlN22PPv+0x50>
        17d004:	e1a06000 	mov	r6, r0
        17d008:	e1a07000 	mov	r7, r0
        17d00c:	e5950000 	ldr	r0, [r5]
        17d010:	eb649c80 	bl	1aa4218 <TParagraphView::$Text(void)>
        17d014:	e5971000 	ldr	r1, [r7]
        17d018:	e5810000 	str	r0, [r1]
        17d01c:	e5960000 	ldr	r0, [r6]
        17d020:	e5900000 	ldr	r0, [r0]
        17d024:	eb6920a2 	bl	1bc52b4 <$LockRef(long)>
        17d028:	ea00000e 	b	17d068 <TextRefScanner__FPvlN22PPv+0x8c>
        17d02c:	e3760001 	cmn	r6, #1	; 0x1
        17d030:	1a000007 	bne	17d054 <TextRefScanner__FPvlN22PPv+0x78>
        17d034:	e1a05000 	mov	r5, r0
        17d038:	e5900000 	ldr	r0, [r0]
        17d03c:	e5900000 	ldr	r0, [r0]
        17d040:	eb692d0a 	bl	1bc8470 <$UnlockRef(long)>
        17d044:	e3a00002 	mov	r0, #2	; 0x2
        17d048:	e5951000 	ldr	r1, [r5]
        17d04c:	e5810000 	str	r0, [r1]
        17d050:	ea000004 	b	17d068 <TextRefScanner__FPvlN22PPv+0x8c>
        17d054:	eb69184a 	bl	1bc3184 <$GetCString(RefVar const &)>
        17d058:	e5b51004 	ldr	r1, [r5, #4]!
        17d05c:	e0800081 	add	r0, r0, r1, lsl #1
        17d060:	e0800086 	add	r0, r0, r6, lsl #1
        17d064:	e5870000 	str	r0, [r7]
        17d068:	e1a00004 	mov	r0, r4
        17d06c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPoint2FPoint(TPoint &, FPoint *)
 * Address: 0017d0a8
 */
TPoint2FPoint(TPoint &, FPoint *) {
    /*
        17d0a8:	e5902002 	ldr	r2, [r0, #2]
        17d0ac:	e1a02822 	mov	r2, r2, lsr #16
        17d0b0:	e1a02802 	mov	r2, r2, lsl #16
        17d0b4:	e5812000 	str	r2, [r1]
        17d0b8:	e5900000 	ldr	r0, [r0]
        17d0bc:	e1a00820 	mov	r0, r0, lsr #16
        17d0c0:	e1a00800 	mov	r0, r0, lsl #16
        17d0c4:	e5a10004 	str	r0, [r1, #4]!
        17d0c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TabBounds__FP8LineInfolT2RC6RefVarP5TRect
 * Address: 0017d4ac
 */
void globals::TabBounds() {
    /*
        17d4ac:	e1a0c00d 	mov	ip, sp
        17d4b0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        17d4b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        17d4b8:	e1a04000 	mov	r4, r0
        17d4bc:	e1a06001 	mov	r6, r1
        17d4c0:	e1b07002 	movs	r7, r2
        17d4c4:	e1a05003 	mov	r5, r3
        17d4c8:	e59b9004 	ldr	r9, [fp, #4]
        17d4cc:	05948000 	ldreq	r8, [r4]
        17d4d0:	0594701e 	ldreq	r7, [r4, #30]
        17d4d4:	01a07847 	moveq	r7, r7, asr #16
        17d4d8:	0a000013 	beq	17d52c <TabBounds__FP8LineInfolT2RC6RefVarP5TRect+0x80>
        17d4dc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        17d4e0:	e28d1004 	add	r1, sp, #4	; 0x4
        17d4e4:	e1a00007 	mov	r0, r7
        17d4e8:	eb646593 	bl	1a96b3c <$GetTextObjBounds(long, TRect *)>
        17d4ec:	e1a0200d 	mov	r2, sp
        17d4f0:	e1a00007 	mov	r0, r7
        17d4f4:	e3a01001 	mov	r1, #1	; 0x1
        17d4f8:	eb6748ba 	bl	1b4f7e8 <$GetTextObjField(long, TextObjectField, void *)>
        17d4fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        17d500:	e1a0200d 	mov	r2, sp
        17d504:	e1a00007 	mov	r0, r7
        17d508:	e3a01000 	mov	r1, #0	; 0x0
        17d50c:	eb6748b5 	bl	1b4f7e8 <$GetTextObjField(long, TextObjectField, void *)>
        17d510:	e59d0000 	ldr	r0, [sp]
        17d514:	e5b01004 	ldr	r1, [r0, #4]!
        17d518:	e59d0004 	ldr	r0, [sp, #4]
        17d51c:	e0818000 	add	r8, r1, r0
        17d520:	e59d700e 	ldr	r7, [sp, #14]
        17d524:	e1a07847 	mov	r7, r7, asr #16
        17d528:	e28dd010 	add	sp, sp, #16	; 0x10
        17d52c:	e24dd004 	sub	sp, sp, #4	; 0x4
        17d530:	e594a01e 	ldr	sl, [r4, #30]
        17d534:	e1a0a84a 	mov	sl, sl, asr #16
        17d538:	e3a00000 	mov	r0, #0	; 0x0
        17d53c:	e58d0000 	str	r0, [sp]
        17d540:	e1a0300d 	mov	r3, sp
        17d544:	e1a02007 	mov	r2, r7
        17d548:	e1a0100a 	mov	r1, sl
        17d54c:	e1a00005 	mov	r0, r5
        17d550:	eb645d2b 	bl	1a94a04 <$FindNextTabStop__FRC6RefVarlT2Pl>
        17d554:	e1580006 	cmp	r8, r6
        17d558:	aa000008 	bge	17d580 <TabBounds__FP8LineInfolT2RC6RefVarP5TRect+0xd4>
        17d55c:	e1a07000 	mov	r7, r0
        17d560:	e2802001 	add	r2, r0, #1	; 0x1
        17d564:	e1a0300d 	mov	r3, sp
        17d568:	e1a0100a 	mov	r1, sl
        17d56c:	e1a00005 	mov	r0, r5
        17d570:	eb645d23 	bl	1a94a04 <$FindNextTabStop__FRC6RefVarlT2Pl>
        17d574:	e2888001 	add	r8, r8, #1	; 0x1
        17d578:	e1580006 	cmp	r8, r6
        17d57c:	bafffff6 	blt	17d55c <TabBounds__FP8LineInfolT2RC6RefVarP5TRect+0xb0>
        17d580:	e5c97003 	strb	r7, [r9, #3]
        17d584:	e1a01447 	mov	r1, r7, asr #8
        17d588:	e5c91002 	strb	r1, [r9, #2]
        17d58c:	e594101c 	ldr	r1, [r4, #28]
        17d590:	e1a01821 	mov	r1, r1, lsr #16
        17d594:	e5c91001 	strb	r1, [r9, #1]
        17d598:	e1a01441 	mov	r1, r1, asr #8
        17d59c:	e5c91000 	strb	r1, [r9]
        17d5a0:	e5c90007 	strb	r0, [r9, #7]
        17d5a4:	e1a00440 	mov	r0, r0, asr #8
        17d5a8:	e5c90006 	strb	r0, [r9, #6]
        17d5ac:	e5940020 	ldr	r0, [r4, #32]
        17d5b0:	e1a00820 	mov	r0, r0, lsr #16
        17d5b4:	e5c90005 	strb	r0, [r9, #5]
        17d5b8:	e1a00440 	mov	r0, r0, asr #8
        17d5bc:	e5c90004 	strb	r0, [r9, #4]
        17d5c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TrySnap__FRC9SegParamslT2PlT4Pc
 * Address: 0018e6bc
 */
void globals::TrySnap() {
    /*
        18e6bc:	e1a0c00d 	mov	ip, sp
        18e6c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        18e6c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        18e6c8:	e1a05002 	mov	r5, r2
        18e6cc:	e1a04003 	mov	r4, r3
        18e6d0:	e59b6004 	ldr	r6, [fp, #4]
        18e6d4:	e5b0201c 	ldr	r2, [r0, #28]!
        18e6d8:	e0410005 	sub	r0, r1, r5
        18e6dc:	e1a01002 	mov	r1, r2
        18e6e0:	eb694a77 	bl	1be10c4 <$FixedMultiply>
        18e6e4:	e3500000 	cmp	r0, #0	; 0x0
        18e6e8:	b2600000 	rsblt	r0, r0, #0	; 0x0
        18e6ec:	e5941000 	ldr	r1, [r4]
        18e6f0:	e1500001 	cmp	r0, r1
        18e6f4:	b5840000 	strlt	r0, [r4]
        18e6f8:	b5865000 	strlt	r5, [r6]
        18e6fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TranslatePowerEvent(unsigned long)
 * Address: 00192904
 */
TranslatePowerEvent(unsigned long) {
    /*
        192904:	e1a0c00d 	mov	ip, sp
        192908:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19290c:	e24cb004 	sub	fp, ip, #4	; 0x4
        192910:	e1a04000 	mov	r4, r0
        192914:	eb69eb6a 	bl	1c0d6c4 <$GetPlatformDriver(void)>
        192918:	e1a01004 	mov	r1, r4
        19291c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        192920:	ea07d56d 	b	387edc <TPlatformDriver::TranslatePowerEvent(unsigned long)>
    */
}

/**
 * Symbol: TerminateSerialDebugging
 * Address: 0019a548
 */
void globals::TerminateSerialDebugging() {
    /*
        19a548:	e1a0c00d 	mov	ip, sp
        19a54c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        19a550:	e24cb004 	sub	fp, ip, #4	; 0x4
        19a554:	e3a00006 	mov	r0, #6	; 0x6
        19a558:	e59f4164 	ldr	r4, [pc, #164]	; 19a6c4 <TerminateSerialDebugging+0x17c>
        19a55c:	e5c40000 	strb	r0, [r4]
        19a560:	e24dd008 	sub	sp, sp, #8	; 0x8
        19a564:	e3a00000 	mov	r0, #0	; 0x0
        19a568:	e58d0004 	str	r0, [sp, #4]
        19a56c:	e58d0000 	str	r0, [sp]
        19a570:	e59f5150 	ldr	r5, [pc, #150]	; 19a6c8 <TerminateSerialDebugging+0x180>
        19a574:	e5950000 	ldr	r0, [r5]
        19a578:	eb682f73 	bl	1ba634c <PInTranslator::$Delete(void)>
        19a57c:	e28d0004 	add	r0, sp, #4	; 0x4
        19a580:	eb64a734 	bl	1ac4258 <$CreateNullInTranslator(PInTranslator **)>
        19a584:	e3300000 	teq	r0, #0	; 0x0
        19a588:	059d0004 	ldreq	r0, [sp, #4]
        19a58c:	05850000 	streq	r0, [r5]
        19a590:	e59f5134 	ldr	r5, [pc, #134]	; 19a6cc <TerminateSerialDebugging+0x184>
        19a594:	e5950000 	ldr	r0, [r5]
        19a598:	eb682f72 	bl	1ba6368 <POutTranslator::$Delete(void)>
        19a59c:	e1a0000d 	mov	r0, sp
        19a5a0:	eb64a72d 	bl	1ac425c <$CreateNullOutTranslator(POutTranslator **)>
        19a5a4:	e3300000 	teq	r0, #0	; 0x0
        19a5a8:	059d0000 	ldreq	r0, [sp]
        19a5ac:	05850000 	streq	r0, [r5]
        19a5b0:	e28dd008 	add	sp, sp, #8	; 0x8
        19a5b4:	e3a000a4 	mov	r0, #164	; 0xa4
        19a5b8:	eb691ee0 	bl	1be2140 <$NewPtr>
        19a5bc:	e1a05000 	mov	r5, r0
        19a5c0:	e3a08000 	mov	r8, #0	; 0x0
        19a5c4:	e3a07000 	mov	r7, #0	; 0x0
        19a5c8:	e5840010 	str	r0, [r4, #16]
        19a5cc:	e3a01c02 	mov	r1, #512	; 0x200
        19a5d0:	e3a00000 	mov	r0, #0	; 0x0
        19a5d4:	ebfffb4b 	bl	199308 <InitWriteDebugFrame(unsigned char *, long)>
        19a5d8:	e3a00081 	mov	r0, #129	; 0x81
        19a5dc:	e5847024 	str	r7, [r4, #36]
        19a5e0:	eb64a2f8 	bl	1ac31c8 <$WriteDebugByte(char)>
        19a5e4:	eb61a707 	bl	1a04208 <$SendDebugFrameAsCommand(void)>
        19a5e8:	eb6960cc 	bl	1bf2920 <$Ticks(void)>
        19a5ec:	e1a09000 	mov	r9, r0
        19a5f0:	e3a06000 	mov	r6, #0	; 0x0
        19a5f4:	ebfffe17 	bl	199e58 <GetgWantSerialDebugging(void)>
        19a5f8:	e1300005 	teq	r0, r5
        19a5fc:	1a000007 	bne	19a620 <TerminateSerialDebugging+0xd8>
        19a600:	eb6960c6 	bl	1bf2920 <$Ticks(void)>
        19a604:	e0400009 	sub	r0, r0, r9
        19a608:	e3500f96 	cmp	r0, #600	; 0x258
        19a60c:	23e06000 	mvncs	r6, #0	; 0x0
        19a610:	2a000002 	bcs	19a620 <TerminateSerialDebugging+0xd8>
        19a614:	ebfffe0f 	bl	199e58 <GetgWantSerialDebugging(void)>
        19a618:	e1300005 	teq	r0, r5
        19a61c:	0afffff7 	beq	19a600 <TerminateSerialDebugging+0xb8>
        19a620:	e2888001 	add	r8, r8, #1	; 0x1
        19a624:	e3360000 	teq	r6, #0	; 0x0
        19a628:	0a000003 	beq	19a63c <TerminateSerialDebugging+0xf4>
        19a62c:	e3580003 	cmp	r8, #3	; 0x3
        19a630:	baffffe5 	blt	19a5cc <TerminateSerialDebugging+0x84>
        19a634:	e3360000 	teq	r6, #0	; 0x0
        19a638:	1a000012 	bne	19a688 <TerminateSerialDebugging+0x140>
        19a63c:	e3a08000 	mov	r8, #0	; 0x0
        19a640:	e5950000 	ldr	r0, [r5]
        19a644:	e3500000 	cmp	r0, #0	; 0x0
        19a648:	9a000006 	bls	19a668 <TerminateSerialDebugging+0x120>
        19a64c:	e0850108 	add	r0, r5, r8, lsl #2
        19a650:	e5900004 	ldr	r0, [r0, #4]
        19a654:	ebfbd0ba 	bl	8e944 <ReleaseOnePage(unsigned long)>
        19a658:	e2888001 	add	r8, r8, #1	; 0x1
        19a65c:	e5950000 	ldr	r0, [r5]
        19a660:	e1580000 	cmp	r8, r0
        19a664:	3afffff8 	bcc	19a64c <TerminateSerialDebugging+0x104>
        19a668:	e5847010 	str	r7, [r4, #16]
        19a66c:	e5940018 	ldr	r0, [r4, #24]
        19a670:	e3300000 	teq	r0, #0	; 0x0
        19a674:	0a000003 	beq	19a688 <TerminateSerialDebugging+0x140>
        19a678:	eb07aa8e 	bl	3850b8 <TSerialDebugLink::Remove(void)>
        19a67c:	e5940018 	ldr	r0, [r4, #24]
        19a680:	eb07aa82 	bl	385090 <TSerialDebugLink::Delete(void)>
        19a684:	e5847018 	str	r7, [r4, #24]
        19a688:	e3350000 	teq	r5, #0	; 0x0
        19a68c:	11a00005 	movne	r0, r5
        19a690:	1b691a87 	blne	1be10b4 <$DisposPtr>
        19a694:	e5940028 	ldr	r0, [r4, #40]
        19a698:	e3300000 	teq	r0, #0	; 0x0
        19a69c:	0a000001 	beq	19a6a8 <TerminateSerialDebugging+0x160>
        19a6a0:	eb691a83 	bl	1be10b4 <$DisposPtr>
        19a6a4:	e5847028 	str	r7, [r4, #40]
        19a6a8:	e594001c 	ldr	r0, [r4, #28]
        19a6ac:	e3300000 	teq	r0, #0	; 0x0
        19a6b0:	0a000001 	beq	19a6bc <TerminateSerialDebugging+0x174>
        19a6b4:	eb691a7e 	bl	1be10b4 <$DisposPtr>
        19a6b8:	e5a4701c 	str	r7, [r4, #28]!
        19a6bc:	e1a00006 	mov	r0, r6
        19a6c0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        19a6c4:	0c1017b4 	ldceq	7, cr1, [r0], -#720
        19a6c8:	0c10181c 	ldceq	8, cr1, [r0], -#112
        19a6cc:	0c101820 	ldceq	8, cr1, [r0], -#128
    */
}

/**
 * Symbol: TextOrInkWordsEnabled(TView *)
 * Address: 001a2aa4
 */
TextOrInkWordsEnabled(TView *) {
    /*
        1a2aa4:	e1a0c00d 	mov	ip, sp
        1a2aa8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a2aac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a2ab0:	e3a04000 	mov	r4, #0	; 0x0
        1a2ab4:	eb643fab 	bl	1ab2968 <$GetRecognitionView(TView *)>
        1a2ab8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a2abc:	e5901008 	ldr	r1, [r0, #8]
        1a2ac0:	e3c154fe 	bic	r5, r1, #-33554432	; 0xfe000000
        1a2ac4:	e3c550ff 	bic	r5, r5, #255	; 0xff
        1a2ac8:	e3c514fe 	bic	r1, r5, #-33554432	; 0xfe000000
        1a2acc:	e3c11c01 	bic	r1, r1, #256	; 0x100
        1a2ad0:	e3c110ff 	bic	r1, r1, #255	; 0xff
        1a2ad4:	e241c77f 	sub	ip, r1, #33292288	; 0x1fc0000
        1a2ad8:	e24ccbff 	sub	ip, ip, #261120	; 0x3fc00
        1a2adc:	e33c0c02 	teq	ip, #512	; 0x200
        1a2ae0:	13a01000 	movne	r1, #0	; 0x0
        1a2ae4:	03a01001 	moveq	r1, #1	; 0x1
        1a2ae8:	e20160ff 	and	r6, r1, #255	; 0xff
        1a2aec:	e1a01005 	mov	r1, r5
        1a2af0:	eb641a6b 	bl	1aa94a4 <$BuildRecConfig(TView *, unsigned long)>
        1a2af4:	eb687d94 	bl	1bc214c <$AllocateRefHandle(long)>
        1a2af8:	e58d0000 	str	r0, [sp]
        1a2afc:	e59f103c 	ldr	r1, [pc, #3c]	; 1a2b40 <TextOrInkWordsEnabled(TView *)+0x9c>
        1a2b00:	e1a0000d 	mov	r0, sp
        1a2b04:	e3a03000 	mov	r3, #0	; 0x0
        1a2b08:	e3a02000 	mov	r2, #0	; 0x0
        1a2b0c:	eb6885d8 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1a2b10:	e3300002 	teq	r0, #2	; 0x2
        1a2b14:	13a04001 	movne	r4, #1	; 0x1
        1a2b18:	e3360000 	teq	r6, #0	; 0x0
        1a2b1c:	0a000009 	beq	1a2b48 <TextOrInkWordsEnabled(TView *)+0xa4>
        1a2b20:	e59f101c 	ldr	r1, [pc, #1c]	; 1a2b44 <TextOrInkWordsEnabled(TView *)+0xa0>
        1a2b24:	e1a0000d 	mov	r0, sp
        1a2b28:	e3a03000 	mov	r3, #0	; 0x0
        1a2b2c:	e3a02000 	mov	r2, #0	; 0x0
        1a2b30:	eb6885cf 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1a2b34:	e3300002 	teq	r0, #2	; 0x2
        1a2b38:	0a000008 	beq	1a2b60 <TextOrInkWordsEnabled(TView *)+0xbc>
        1a2b3c:	ea000006 	b	1a2b5c <TextOrInkWordsEnabled(TView *)+0xb8>
        1a2b40:	00682a38 	rsbeq	r2, r8, r8, lsr sl
        1a2b44:	00682a68 	rsbeq	r2, r8, r8, ror #20
        1a2b48:	e3c504fe 	bic	r0, r5, #-33554432	; 0xfe000000
        1a2b4c:	e3c00881 	bic	r0, r0, #8454144	; 0x810000
        1a2b50:	e3c00c0f 	bic	r0, r0, #3840	; 0xf00
        1a2b54:	e3d000ff 	bics	r0, r0, #255	; 0xff
        1a2b58:	0a000000 	beq	1a2b60 <TextOrInkWordsEnabled(TView *)+0xbc>
        1a2b5c:	e3844002 	orr	r4, r4, #2	; 0x2
        1a2b60:	e59d0000 	ldr	r0, [sp]
        1a2b64:	eb688194 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2b68:	e1a00004 	mov	r0, r4
        1a2b6c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRefStackReleaseProc__FPvPUlT2Uc
 * Address: 001a4600
 */
void globals::TRefStackReleaseProc() {
    /*
        1a4600:	e20330ff 	and	r3, r3, #255	; 0xff
        1a4604:	e590c004 	ldr	ip, [r0, #4]
        1a4608:	e581c000 	str	ip, [r1]
        1a460c:	e5900008 	ldr	r0, [r0, #8]
        1a4610:	e5820000 	str	r0, [r2]
        1a4614:	e1a00003 	mov	r0, r3
        1a4618:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRefStackMark(void *)
 * Address: 001a49dc
 */
TRefStackMark(void *) {
    /*
        1a49dc:	e1a0c00d 	mov	ip, sp
        1a49e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a49e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a49e8:	e1a05000 	mov	r5, r0
        1a49ec:	e8900011 	ldmia	r0, {r0, r4}
        1a49f0:	e1540000 	cmp	r4, r0
        1a49f4:	291ba830 	ldmcsdb	fp, {r4, r5, fp, sp, pc}
        1a49f8:	e4940004 	ldr	r0, [r4], #4
        1a49fc:	eb6879ef 	bl	1bc31c0 <$DIYGCMark(long)>
        1a4a00:	e5950000 	ldr	r0, [r5]
        1a4a04:	e1540000 	cmp	r4, r0
        1a4a08:	3afffffa 	bcc	1a49f8 <TRefStackMark(void *)+0x1c>
        1a4a0c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRefStackUpdate(void *)
 * Address: 001a4a10
 */
TRefStackUpdate(void *) {
    /*
        1a4a10:	e1a0c00d 	mov	ip, sp
        1a4a14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a4a18:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a4a1c:	e1a05000 	mov	r5, r0
        1a4a20:	e8900011 	ldmia	r0, {r0, r4}
        1a4a24:	e1540000 	cmp	r4, r0
        1a4a28:	291ba830 	ldmcsdb	fp, {r4, r5, fp, sp, pc}
        1a4a2c:	e5940000 	ldr	r0, [r4]
        1a4a30:	eb6879e5 	bl	1bc31cc <$DIYGCUpdate(long)>
        1a4a34:	e4840004 	str	r0, [r4], #4
        1a4a38:	e5950000 	ldr	r0, [r5]
        1a4a3c:	e1540000 	cmp	r4, r0
        1a4a40:	3afffff9 	bcc	1a4a2c <TRefStackUpdate(void *)+0x1c>
        1a4a44:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRefStructStackReleaseProc__FPvPUlT2Uc
 * Address: 001a4a48
 */
void globals::TRefStructStackReleaseProc() {
    /*
        1a4a48:	e20330ff 	and	r3, r3, #255	; 0xff
        1a4a4c:	e590c010 	ldr	ip, [r0, #16]
        1a4a50:	e581c000 	str	ip, [r1]
        1a4a54:	e590c010 	ldr	ip, [r0, #16]
        1a4a58:	e8900003 	ldmia	r0, {r0, r1}
        1a4a5c:	e0500001 	subs	r0, r0, r1
        1a4a60:	42800003 	addmi	r0, r0, #3	; 0x3
        1a4a64:	e1a00140 	mov	r0, r0, asr #2
        1a4a68:	e08c0100 	add	r0, ip, r0, lsl #2
        1a4a6c:	e5820000 	str	r0, [r2]
        1a4a70:	e1a00003 	mov	r0, r3
        1a4a74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: transfrmN(low_type *)
 * Address: 001baaf8
 */
transfrmN(low_type *) {
    /*
        1baaf8:	e1a0c00d 	mov	ip, sp
        1baafc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1bab00:	e24cb004 	sub	fp, ip, #4	; 0x4
        1bab04:	e1a04000 	mov	r4, r0
        1bab08:	e24dd0c8 	sub	sp, sp, #200	; 0xc8
        1bab0c:	e3a00000 	mov	r0, #0	; 0x0
        1bab10:	e58d00b8 	str	r0, [sp, #184]
        1bab14:	e3a00001 	mov	r0, #1	; 0x1
        1bab18:	e58d00b4 	str	r0, [sp, #180]
        1bab1c:	e3e00000 	mvn	r0, #0	; 0x0
        1bab20:	e3a07000 	mov	r7, #0	; 0x0
        1bab24:	e58d00a4 	str	r0, [sp, #164]
        1bab28:	e3a00000 	mov	r0, #0	; 0x0
        1bab2c:	e58d007c 	str	r0, [sp, #124]
        1bab30:	e58d708c 	str	r7, [sp, #140]
        1bab34:	e58d0078 	str	r0, [sp, #120]
        1bab38:	e58d0054 	str	r0, [sp, #84]
        1bab3c:	e594107a 	ldr	r1, [r4, #122]
        1bab40:	e1a01841 	mov	r1, r1, asr #16
        1bab44:	e5940076 	ldr	r0, [r4, #118]
        1bab48:	e0410840 	sub	r0, r1, r0, asr #16
        1bab4c:	e58d0050 	str	r0, [sp, #80]
        1bab50:	e3a00000 	mov	r0, #0	; 0x0
        1bab54:	e58d004c 	str	r0, [sp, #76]
        1bab58:	e58d0048 	str	r0, [sp, #72]
        1bab5c:	e5943004 	ldr	r3, [r4, #4]
        1bab60:	e58d3034 	str	r3, [sp, #52]
        1bab64:	e594a00c 	ldr	sl, [r4, #12]
        1bab68:	e594c014 	ldr	ip, [r4, #20]
        1bab6c:	e58dc030 	str	ip, [sp, #48]
        1bab70:	e594001c 	ldr	r0, [r4, #28]
        1bab74:	e58d002c 	str	r0, [sp, #44]
        1bab78:	e3a00000 	mov	r0, #0	; 0x0
        1bab7c:	e58d0018 	str	r0, [sp, #24]
        1bab80:	e58d0008 	str	r0, [sp, #8]
        1bab84:	e58d0004 	str	r0, [sp, #4]
        1bab88:	e58d0000 	str	r0, [sp]
        1bab8c:	e5940000 	ldr	r0, [r4]
        1bab90:	e5901092 	ldr	r1, [r0, #146]
        1bab94:	e1a01821 	mov	r1, r1, lsr #16
        1bab98:	e3310002 	teq	r1, #2	; 0x2
        1bab9c:	15901090 	ldrne	r1, [r0, #144]
        1baba0:	11a01821 	movne	r1, r1, lsr #16
        1baba4:	12011010 	andne	r1, r1, #16	; 0x10
        1baba8:	13310000 	teqne	r1, #0	; 0x0
        1babac:	03a01020 	moveq	r1, #32	; 0x20
        1babb0:	13a01010 	movne	r1, #16	; 0x10
        1babb4:	e5c01095 	strb	r1, [r0, #149]
        1babb8:	e3a03000 	mov	r3, #0	; 0x0
        1babbc:	e5c03094 	strb	r3, [r0, #148]
        1babc0:	e5940000 	ldr	r0, [r4]
        1babc4:	e59010e6 	ldr	r1, [r0, #230]
        1babc8:	e1a01841 	mov	r1, r1, asr #16
        1babcc:	e3310064 	teq	r1, #100	; 0x64
        1babd0:	059010e8 	ldreq	r1, [r0, #232]
        1babd4:	01a01841 	moveq	r1, r1, asr #16
        1babd8:	03310064 	teqeq	r1, #100	; 0x64
        1babdc:	0a000050 	beq	1bad24 <transfrmN(low_type *)+0x22c>
        1babe0:	e5900094 	ldr	r0, [r0, #148]
        1babe4:	e1a00820 	mov	r0, r0, lsr #16
        1babe8:	e3300010 	teq	r0, #16	; 0x10
        1babec:	1a00004c 	bne	1bad24 <transfrmN(low_type *)+0x22c>
        1babf0:	e3a000c8 	mov	r0, #200	; 0xc8
        1babf4:	eb62d2f0 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        1babf8:	e1b05000 	movs	r5, r0
        1babfc:	0a00060a 	beq	1bc42c <transfrmN(low_type *)+0x1934>
        1bac00:	e5940040 	ldr	r0, [r4, #64]
        1bac04:	e3300000 	teq	r0, #0	; 0x0
        1bac08:	0a000009 	beq	1bac34 <transfrmN(low_type *)+0x13c>
        1bac0c:	e3a02001 	mov	r2, #1	; 0x1
        1bac10:	e3a03000 	mov	r3, #0	; 0x0
        1bac14:	e5d01000 	ldrb	r1, [r0]
        1bac18:	e3310003 	teq	r1, #3	; 0x3
        1bac1c:	13310001 	teqne	r1, #1	; 0x1
        1bac20:	05c02002 	streqb	r2, [r0, #2]
        1bac24:	05c03001 	streqb	r3, [r0, #1]
        1bac28:	e590000c 	ldr	r0, [r0, #12]
        1bac2c:	e3300000 	teq	r0, #0	; 0x0
        1bac30:	1afffff7 	bne	1bac14 <transfrmN(low_type *)+0x11c>
        1bac34:	e28d206c 	add	r2, sp, #108	; 0x6c
        1bac38:	e1a01005 	mov	r1, r5
        1bac3c:	e1a00004 	mov	r0, r4
        1bac40:	eb65a58a 	bl	1b24270 <$extract_ampl(low_type *, short *, int *)>
        1bac44:	e3300001 	teq	r0, #1	; 0x1
        1bac48:	0a0005f3 	beq	1bc41c <transfrmN(low_type *)+0x1924>
        1bac4c:	e59d106c 	ldr	r1, [sp, #108]
        1bac50:	e3510000 	cmp	r1, #0	; 0x0
        1bac54:	d59d0050 	ldrle	r0, [sp, #80]
        1bac58:	da000001 	ble	1bac64 <transfrmN(low_type *)+0x16c>
        1bac5c:	e1a00005 	mov	r0, r5
        1bac60:	eb65a571 	bl	1b2422c <$calc_mediana(short *, int)>
        1bac64:	e3a01000 	mov	r1, #0	; 0x0
        1bac68:	e58d0098 	str	r0, [sp, #152]
        1bac6c:	e58d1090 	str	r1, [sp, #144]
        1bac70:	e59d006c 	ldr	r0, [sp, #108]
        1bac74:	e3500000 	cmp	r0, #0	; 0x0
        1bac78:	da000007 	ble	1bac9c <transfrmN(low_type *)+0x1a4>
        1bac7c:	e7952081 	ldr	r2, [r5, r1, lsl #1]
        1bac80:	e1a02842 	mov	r2, r2, asr #16
        1bac84:	e59d3090 	ldr	r3, [sp, #144]
        1bac88:	e1520003 	cmp	r2, r3
        1bac8c:	c58d2090 	strgt	r2, [sp, #144]
        1bac90:	e2811001 	add	r1, r1, #1	; 0x1
        1bac94:	e1510000 	cmp	r1, r0
        1bac98:	bafffff7 	blt	1bac7c <transfrmN(low_type *)+0x184>
        1bac9c:	e28d300c 	add	r3, sp, #12	; 0xc
        1baca0:	e28d2078 	add	r2, sp, #120	; 0x78
        1baca4:	e28d107c 	add	r1, sp, #124	; 0x7c
        1baca8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1bacac:	e1a03000 	mov	r3, r0
        1bacb0:	e1a00004 	mov	r0, r4
        1bacb4:	e59d10a4 	ldr	r1, [sp, #164]
        1bacb8:	e59d209c 	ldr	r2, [sp, #156]
        1bacbc:	eb65a55c 	bl	1b24234 <$classify_strokes__FP8low_typeiN22PiT5PUi>
        1bacc0:	e28dd00c 	add	sp, sp, #12	; 0xc
        1bacc4:	e58d0054 	str	r0, [sp, #84]
        1bacc8:	e28d206c 	add	r2, sp, #108	; 0x6c
        1baccc:	e1a01005 	mov	r1, r5
        1bacd0:	e1a00004 	mov	r0, r4
        1bacd4:	eb65a565 	bl	1b24270 <$extract_ampl(low_type *, short *, int *)>
        1bacd8:	e3300001 	teq	r0, #1	; 0x1
        1bacdc:	0a0005ce 	beq	1bc41c <transfrmN(low_type *)+0x1924>
        1bace0:	e59d106c 	ldr	r1, [sp, #108]
        1bace4:	e3510000 	cmp	r1, #0	; 0x0
        1bace8:	d59d0050 	ldrle	r0, [sp, #80]
        1bacec:	da000001 	ble	1bacf8 <transfrmN(low_type *)+0x200>
        1bacf0:	e1a00005 	mov	r0, r5
        1bacf4:	eb65a54c 	bl	1b2422c <$calc_mediana(short *, int)>
        1bacf8:	e58d0098 	str	r0, [sp, #152]
        1bacfc:	e59d106c 	ldr	r1, [sp, #108]
        1bad00:	e3510000 	cmp	r1, #0	; 0x0
        1bad04:	d59d0050 	ldrle	r0, [sp, #80]
        1bad08:	da000001 	ble	1bad14 <transfrmN(low_type *)+0x21c>
        1bad0c:	e1a00005 	mov	r0, r5
        1bad10:	eb65a543 	bl	1b24224 <$calc_average(short *, int)>
        1bad14:	e3350000 	teq	r5, #0	; 0x0
        1bad18:	e58d0094 	str	r0, [sp, #148]
        1bad1c:	11a00005 	movne	r0, r5
        1bad20:	1b62d2a6 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        1bad24:	e594003c 	ldr	r0, [r4, #60]
        1bad28:	e1a00840 	mov	r0, r0, asr #16
        1bad2c:	e1a00080 	mov	r0, r0, lsl #1
        1bad30:	e3a01d32 	mov	r1, #3200	; 0xc80
        1bad34:	e0810080 	add	r0, r1, r0, lsl #1
        1bad38:	eb62d29f 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        1bad3c:	e58d00b8 	str	r0, [sp, #184]
        1bad40:	e3300000 	teq	r0, #0	; 0x0
        1bad44:	0a0005b4 	beq	1bc41c <transfrmN(low_type *)+0x1924>
        1bad48:	e59d60b8 	ldr	r6, [sp, #184]
        1bad4c:	e2868e32 	add	r8, r6, #800	; 0x320
        1bad50:	e2880e32 	add	r0, r8, #800	; 0x320
        1bad54:	e58d0028 	str	r0, [sp, #40]
        1bad58:	e2800e32 	add	r0, r0, #800	; 0x320
        1bad5c:	e58d0024 	str	r0, [sp, #36]
        1bad60:	e2805e32 	add	r5, r0, #800	; 0x320
        1bad64:	e594003c 	ldr	r0, [r4, #60]
        1bad68:	e1a00840 	mov	r0, r0, asr #16
        1bad6c:	e0859080 	add	r9, r5, r0, lsl #1
        1bad70:	e5940000 	ldr	r0, [r4]
        1bad74:	e59010e8 	ldr	r1, [r0, #232]
        1bad78:	e1a01841 	mov	r1, r1, asr #16
        1bad7c:	e3310064 	teq	r1, #100	; 0x64
        1bad80:	059000e6 	ldreq	r0, [r0, #230]
        1bad84:	01a00840 	moveq	r0, r0, asr #16
        1bad88:	03300064 	teqeq	r0, #100	; 0x64
        1bad8c:	02877064 	addeq	r7, r7, #100	; 0x64
        1bad90:	0a0002fb 	beq	1bb984 <transfrmN(low_type *)+0xe8c>
        1bad94:	e1a00006 	mov	r0, r6
        1bad98:	e3a02d19 	mov	r2, #1600	; 0x640
        1bad9c:	e3a01000 	mov	r1, #0	; 0x0
        1bada0:	eb67e72c 	bl	1bb4a58 <$memset>
        1bada4:	e594003c 	ldr	r0, [r4, #60]
        1bada8:	e1a00840 	mov	r0, r0, asr #16
        1badac:	e1a02100 	mov	r2, r0, lsl #2
        1badb0:	e1a00005 	mov	r0, r5
        1badb4:	e3a01000 	mov	r1, #0	; 0x0
        1badb8:	eb67e726 	bl	1bb4a58 <$memset>
        1badbc:	e5940000 	ldr	r0, [r4]
        1badc0:	e5900094 	ldr	r0, [r0, #148]
        1badc4:	e1a00820 	mov	r0, r0, lsr #16
        1badc8:	e3300020 	teq	r0, #32	; 0x20
        1badcc:	1a000031 	bne	1bae98 <transfrmN(low_type *)+0x3a0>
        1badd0:	e28d1098 	add	r1, sp, #152	; 0x98
        1badd4:	e1a00004 	mov	r0, r4
        1badd8:	eb65a514 	bl	1b24230 <$classify_num_strokes(low_type *, int *)>
        1baddc:	e58d0054 	str	r0, [sp, #84]
        1bade0:	e28d3074 	add	r3, sp, #116	; 0x74
        1bade4:	e1a02006 	mov	r2, r6
        1bade8:	e1a00004 	mov	r0, r4
        1badec:	e3a01003 	mov	r1, #3	; 0x3
        1badf0:	eb65a51f 	bl	1b24274 <$extract_num_extr(low_type *, unsigned char, EXTR *, int *)>
        1badf4:	e3300001 	teq	r0, #1	; 0x1
        1badf8:	0a000587 	beq	1bc41c <transfrmN(low_type *)+0x1924>
        1badfc:	e59d0074 	ldr	r0, [sp, #116]
        1bae00:	e58d0068 	str	r0, [sp, #104]
        1bae04:	e28d3070 	add	r3, sp, #112	; 0x70
        1bae08:	e1a02008 	mov	r2, r8
        1bae0c:	e1a00004 	mov	r0, r4
        1bae10:	e3a01001 	mov	r1, #1	; 0x1
        1bae14:	eb65a516 	bl	1b24274 <$extract_num_extr(low_type *, unsigned char, EXTR *, int *)>
        1bae18:	e3300001 	teq	r0, #1	; 0x1
        1bae1c:	0a00057e 	beq	1bc41c <transfrmN(low_type *)+0x1924>
        1bae20:	e59d0070 	ldr	r0, [sp, #112]
        1bae24:	e58d0064 	str	r0, [sp, #100]
        1bae28:	e3300000 	teq	r0, #0	; 0x0
        1bae2c:	159d1068 	ldrne	r1, [sp, #104]
        1bae30:	13310000 	teqne	r1, #0	; 0x0
        1bae34:	1a000007 	bne	1bae58 <transfrmN(low_type *)+0x360>
        1bae38:	e2877064 	add	r7, r7, #100	; 0x64
        1bae3c:	e1a00004 	mov	r0, r4
        1bae40:	e59d1054 	ldr	r1, [sp, #84]
        1bae44:	eb65a922 	bl	1b252d4 <$is_defis(low_type *, int)>
        1bae48:	e3a03000 	mov	r3, #0	; 0x0
        1bae4c:	e1a02006 	mov	r2, r6
        1bae50:	e1a01000 	mov	r1, r0
        1bae54:	ea0002cd 	b	1bb990 <transfrmN(low_type *)+0xe98>
        1bae58:	e1a00006 	mov	r0, r6
        1bae5c:	eb65ad36 	bl	1b2633c <$sort_extr(EXTR *, int)>
        1bae60:	e1a00008 	mov	r0, r8
        1bae64:	e59d1064 	ldr	r1, [sp, #100]
        1bae68:	eb65ad33 	bl	1b2633c <$sort_extr(EXTR *, int)>
        1bae6c:	e1a0300a 	mov	r3, sl
        1bae70:	e1a02005 	mov	r2, r5
        1bae74:	e59d1098 	ldr	r1, [sp, #152]
        1bae78:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1bae7c:	e59d2080 	ldr	r2, [sp, #128]
        1bae80:	e28d1074 	add	r1, sp, #116	; 0x74
        1bae84:	e1a00006 	mov	r0, r6
        1bae88:	e3a03003 	mov	r3, #3	; 0x3
        1bae8c:	eb65ad22 	bl	1b2631c <$num_bord_correction__FP4EXTRPiiUcT3PsT6>
        1bae90:	e28dd00c 	add	sp, sp, #12	; 0xc
        1bae94:	ea000080 	b	1bb09c <transfrmN(low_type *)+0x5a4>
        1bae98:	e28d30b0 	add	r3, sp, #176	; 0xb0
        1bae9c:	e28d2068 	add	r2, sp, #104	; 0x68
        1baea0:	e92d000c 	stmdb	sp!, {r2, r3}
        1baea4:	e28d307c 	add	r3, sp, #124	; 0x7c
        1baea8:	e1a02006 	mov	r2, r6
        1baeac:	e1a00004 	mov	r0, r4
        1baeb0:	e3a01003 	mov	r1, #3	; 0x3
        1baeb4:	eb65a4ec 	bl	1b2426c <$extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps>
        1baeb8:	e28dd008 	add	sp, sp, #8	; 0x8
        1baebc:	e3300001 	teq	r0, #1	; 0x1
        1baec0:	0a000555 	beq	1bc41c <transfrmN(low_type *)+0x1924>
        1baec4:	e28d30b0 	add	r3, sp, #176	; 0xb0
        1baec8:	e28d2064 	add	r2, sp, #100	; 0x64
        1baecc:	e92d000c 	stmdb	sp!, {r2, r3}
        1baed0:	e28d3078 	add	r3, sp, #120	; 0x78
        1baed4:	e1a02008 	mov	r2, r8
        1baed8:	e1a00004 	mov	r0, r4
        1baedc:	e3a01001 	mov	r1, #1	; 0x1
        1baee0:	eb65a4e1 	bl	1b2426c <$extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps>
        1baee4:	e28dd008 	add	sp, sp, #8	; 0x8
        1baee8:	e3300001 	teq	r0, #1	; 0x1
        1baeec:	0a00054a 	beq	1bc41c <transfrmN(low_type *)+0x1924>
        1baef0:	e59d0064 	ldr	r0, [sp, #100]
        1baef4:	e3300000 	teq	r0, #0	; 0x0
        1baef8:	159d1068 	ldrne	r1, [sp, #104]
        1baefc:	13310000 	teqne	r1, #0	; 0x0
        1baf00:	0affffcc 	beq	1bae38 <transfrmN(low_type *)+0x340>
        1baf04:	e1a00006 	mov	r0, r6
        1baf08:	eb65ad0b 	bl	1b2633c <$sort_extr(EXTR *, int)>
        1baf0c:	e5960002 	ldr	r0, [r6, #2]
        1baf10:	e1a00840 	mov	r0, r0, asr #16
        1baf14:	e58d0044 	str	r0, [sp, #68]
        1baf18:	e59d0068 	ldr	r0, [sp, #104]
        1baf1c:	e0860200 	add	r0, r6, r0, lsl #4
        1baf20:	e510000e 	ldr	r0, [r0, -#14]
        1baf24:	e1a00840 	mov	r0, r0, asr #16
        1baf28:	e58d0040 	str	r0, [sp, #64]
        1baf2c:	e1a00008 	mov	r0, r8
        1baf30:	e59d1064 	ldr	r1, [sp, #100]
        1baf34:	eb65ad00 	bl	1b2633c <$sort_extr(EXTR *, int)>
        1baf38:	e5980002 	ldr	r0, [r8, #2]
        1baf3c:	e1a00840 	mov	r0, r0, asr #16
        1baf40:	e58d003c 	str	r0, [sp, #60]
        1baf44:	e59d0064 	ldr	r0, [sp, #100]
        1baf48:	e0880200 	add	r0, r8, r0, lsl #4
        1baf4c:	e510000e 	ldr	r0, [r0, -#14]
        1baf50:	e1a00840 	mov	r0, r0, asr #16
        1baf54:	e58d0038 	str	r0, [sp, #56]
        1baf58:	e59d0068 	ldr	r0, [sp, #104]
        1baf5c:	e3300000 	teq	r0, #0	; 0x0
        1baf60:	03a00001 	moveq	r0, #1	; 0x1
        1baf64:	e59d1054 	ldr	r1, [sp, #84]
        1baf68:	e3510003 	cmp	r1, #3	; 0x3
        1baf6c:	da000004 	ble	1baf84 <transfrmN(low_type *)+0x48c>
        1baf70:	e59d100c 	ldr	r1, [sp, #12]
        1baf74:	e3310001 	teq	r1, #1	; 0x1
        1baf78:	03a01000 	moveq	r1, #0	; 0x0
        1baf7c:	058d107c 	streq	r1, [sp, #124]
        1baf80:	058d1078 	streq	r1, [sp, #120]
        1baf84:	e3500001 	cmp	r0, #1	; 0x1
        1baf88:	d5942078 	ldrle	r2, [r4, #120]
        1baf8c:	d1a02842 	movle	r2, r2, asr #16
        1baf90:	d5941074 	ldrle	r1, [r4, #116]
        1baf94:	d1a01841 	movle	r1, r1, asr #16
        1baf98:	c0861200 	addgt	r1, r6, r0, lsl #4
        1baf9c:	c511200e 	ldrgt	r2, [r1, -#14]
        1bafa0:	c1a02842 	movgt	r2, r2, asr #16
        1bafa4:	c5961002 	ldrgt	r1, [r6, #2]
        1bafa8:	c1a01841 	movgt	r1, r1, asr #16
        1bafac:	e0421001 	sub	r1, r2, r1
        1bafb0:	e58d10a8 	str	r1, [sp, #168]
        1bafb4:	e0611181 	rsb	r1, r1, r1, lsl #3
        1bafb8:	e1a01081 	mov	r1, r1, lsl #1
        1bafbc:	e0800100 	add	r0, r0, r0, lsl #2
        1bafc0:	e1a00080 	mov	r0, r0, lsl #1
        1bafc4:	e58d00c4 	str	r0, [sp, #196]
        1bafc8:	eb67de5c 	bl	1bb2940 <$__rt_sdiv>
        1bafcc:	e58d00a4 	str	r0, [sp, #164]
        1bafd0:	e59d00a8 	ldr	r0, [sp, #168]
        1bafd4:	e59d1050 	ldr	r1, [sp, #80]
        1bafd8:	e1500001 	cmp	r0, r1
        1bafdc:	aa00000f 	bge	1bb020 <transfrmN(low_type *)+0x528>
        1bafe0:	e5940000 	ldr	r0, [r4]
        1bafe4:	e59010e6 	ldr	r1, [r0, #230]
        1bafe8:	e1a01841 	mov	r1, r1, asr #16
        1bafec:	e3510032 	cmp	r1, #50	; 0x32
        1baff0:	a59000e2 	ldrge	r0, [r0, #226]
        1baff4:	a1a00840 	movge	r0, r0, asr #16
        1baff8:	aa000007 	bge	1bb01c <transfrmN(low_type *)+0x524>
        1baffc:	e5940078 	ldr	r0, [r4, #120]
        1bb000:	e1a00840 	mov	r0, r0, asr #16
        1bb004:	e5941074 	ldr	r1, [r4, #116]
        1bb008:	e0400841 	sub	r0, r0, r1, asr #16
        1bb00c:	e0601180 	rsb	r1, r0, r0, lsl #3
        1bb010:	e1a01081 	mov	r1, r1, lsl #1
        1bb014:	e59d00c4 	ldr	r0, [sp, #196]
        1bb018:	eb67de48 	bl	1bb2940 <$__rt_sdiv>
        1bb01c:	e58d00a4 	str	r0, [sp, #164]
        1bb020:	e5940000 	ldr	r0, [r4]
        1bb024:	e59010e6 	ldr	r1, [r0, #230]
        1bb028:	e1a01841 	mov	r1, r1, asr #16
        1bb02c:	e351005a 	cmp	r1, #90	; 0x5a
        1bb030:	a59000e2 	ldrge	r0, [r0, #226]
        1bb034:	a1a00840 	movge	r0, r0, asr #16
        1bb038:	a58d00a4 	strge	r0, [sp, #164]
        1bb03c:	e59d008c 	ldr	r0, [sp, #140]
        1bb040:	e59d1078 	ldr	r1, [sp, #120]
        1bb044:	e99d000c 	ldmib	sp, {r2, r3}
        1bb048:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb04c:	e1a03005 	mov	r3, r5
        1bb050:	e59d0050 	ldr	r0, [sp, #80]
        1bb054:	e59d1058 	ldr	r1, [sp, #88]
        1bb058:	e59d2010 	ldr	r2, [sp, #16]
        1bb05c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb060:	e59d00b8 	ldr	r0, [sp, #184]
        1bb064:	e59d10b4 	ldr	r1, [sp, #180]
        1bb068:	e59d20b0 	ldr	r2, [sp, #176]
        1bb06c:	e59d3064 	ldr	r3, [sp, #100]
        1bb070:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb074:	e3a02003 	mov	r2, #3	; 0x3
        1bb078:	e59d30d4 	ldr	r3, [sp, #212]
        1bb07c:	e92d000c 	stmdb	sp!, {r2, r3}
        1bb080:	e59d30ac 	ldr	r3, [sp, #172]
        1bb084:	e28d20a0 	add	r2, sp, #160	; 0xa0
        1bb088:	e1a01006 	mov	r1, r6
        1bb08c:	e1a00004 	mov	r0, r4
        1bb090:	eb65a45f 	bl	1b24214 <$bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)>
        1bb094:	e28dd038 	add	sp, sp, #56	; 0x38
        1bb098:	e58d0018 	str	r0, [sp, #24]
        1bb09c:	e59d0074 	ldr	r0, [sp, #116]
        1bb0a0:	e59d1070 	ldr	r1, [sp, #112]
        1bb0a4:	e1500001 	cmp	r0, r1
        1bb0a8:	d1a00001 	movle	r0, r1
        1bb0ac:	e3300000 	teq	r0, #0	; 0x0
        1bb0b0:	03a00001 	moveq	r0, #1	; 0x1
        1bb0b4:	e5941078 	ldr	r1, [r4, #120]
        1bb0b8:	e1a01841 	mov	r1, r1, asr #16
        1bb0bc:	e5942074 	ldr	r2, [r4, #116]
        1bb0c0:	e0411842 	sub	r1, r1, r2, asr #16
        1bb0c4:	e1a00080 	mov	r0, r0, lsl #1
        1bb0c8:	eb67de1c 	bl	1bb2940 <$__rt_sdiv>
        1bb0cc:	e1a03005 	mov	r3, r5
        1bb0d0:	e58d00ac 	str	r0, [sp, #172]
        1bb0d4:	e92d0008 	stmdb	sp!, {r3}
        1bb0d8:	e1a02004 	mov	r2, r4
        1bb0dc:	e1a00006 	mov	r0, r6
        1bb0e0:	e59d106c 	ldr	r1, [sp, #108]
        1bb0e4:	e59d30b0 	ldr	r3, [sp, #176]
        1bb0e8:	eb65ac91 	bl	1b26334 <$smooth_d_bord(EXTR *, int, low_type *, low_type *, short *)>
        1bb0ec:	e28dd004 	add	sp, sp, #4	; 0x4
        1bb0f0:	e5940000 	ldr	r0, [r4]
        1bb0f4:	e5900094 	ldr	r0, [r0, #148]
        1bb0f8:	e1a00820 	mov	r0, r0, lsr #16
        1bb0fc:	e3300020 	teq	r0, #32	; 0x20
        1bb100:	1a000022 	bne	1bb190 <transfrmN(low_type *)+0x698>
        1bb104:	e1a0300a 	mov	r3, sl
        1bb108:	e1a02005 	mov	r2, r5
        1bb10c:	e59d1098 	ldr	r1, [sp, #152]
        1bb110:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1bb114:	e59d207c 	ldr	r2, [sp, #124]
        1bb118:	e28d1070 	add	r1, sp, #112	; 0x70
        1bb11c:	e1a00008 	mov	r0, r8
        1bb120:	e3a03001 	mov	r3, #1	; 0x1
        1bb124:	eb65ac7c 	bl	1b2631c <$num_bord_correction__FP4EXTRPiiUcT3PsT6>
        1bb128:	e28dd00c 	add	sp, sp, #12	; 0xc
        1bb12c:	e58d0018 	str	r0, [sp, #24]
        1bb130:	e3300001 	teq	r0, #1	; 0x1
        1bb134:	1a0000d3 	bne	1bb488 <transfrmN(low_type *)+0x990>
        1bb138:	e1a0300a 	mov	r3, sl
        1bb13c:	e1a02005 	mov	r2, r5
        1bb140:	e59d1098 	ldr	r1, [sp, #152]
        1bb144:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1bb148:	e59d2080 	ldr	r2, [sp, #128]
        1bb14c:	e28d1074 	add	r1, sp, #116	; 0x74
        1bb150:	e1a00006 	mov	r0, r6
        1bb154:	e3a03003 	mov	r3, #3	; 0x3
        1bb158:	eb65ac6f 	bl	1b2631c <$num_bord_correction__FP4EXTRPiiUcT3PsT6>
        1bb15c:	e28dd00c 	add	sp, sp, #12	; 0xc
        1bb160:	e58d0018 	str	r0, [sp, #24]
        1bb164:	e3300001 	teq	r0, #1	; 0x1
        1bb168:	1a0000c6 	bne	1bb488 <transfrmN(low_type *)+0x990>
        1bb16c:	e1a03005 	mov	r3, r5
        1bb170:	e92d0008 	stmdb	sp!, {r3}
        1bb174:	e1a02004 	mov	r2, r4
        1bb178:	e1a00006 	mov	r0, r6
        1bb17c:	e59d106c 	ldr	r1, [sp, #108]
        1bb180:	e59d30b0 	ldr	r3, [sp, #176]
        1bb184:	eb65ac6a 	bl	1b26334 <$smooth_d_bord(EXTR *, int, low_type *, low_type *, short *)>
        1bb188:	e28dd004 	add	sp, sp, #4	; 0x4
        1bb18c:	ea0000bd 	b	1bb488 <transfrmN(low_type *)+0x990>
        1bb190:	e59d0018 	ldr	r0, [sp, #24]
        1bb194:	e3300001 	teq	r0, #1	; 0x1
        1bb198:	1a00006f 	bne	1bb35c <transfrmN(low_type *)+0x864>
        1bb19c:	e3a03000 	mov	r3, #0	; 0x0
        1bb1a0:	e5940040 	ldr	r0, [r4, #64]
        1bb1a4:	e3300000 	teq	r0, #0	; 0x0
        1bb1a8:	0a000013 	beq	1bb1fc <transfrmN(low_type *)+0x704>
        1bb1ac:	e5d01000 	ldrb	r1, [r0]
        1bb1b0:	e3310003 	teq	r1, #3	; 0x3
        1bb1b4:	05d01001 	ldreqb	r1, [r0, #1]
        1bb1b8:	03310065 	teqeq	r1, #101	; 0x65
        1bb1bc:	1a00000b 	bne	1bb1f0 <transfrmN(low_type *)+0x6f8>
        1bb1c0:	e5901008 	ldr	r1, [r0, #8]
        1bb1c4:	e1a01841 	mov	r1, r1, asr #16
        1bb1c8:	e79a2081 	ldr	r2, [sl, r1, lsl #1]
        1bb1cc:	e1a02842 	mov	r2, r2, asr #16
        1bb1d0:	e59dc030 	ldr	ip, [sp, #48]
        1bb1d4:	e79c1081 	ldr	r1, [ip, r1, lsl #1]
        1bb1d8:	e1a01841 	mov	r1, r1, asr #16
        1bb1dc:	e7951081 	ldr	r1, [r5, r1, lsl #1]
        1bb1e0:	e1a01841 	mov	r1, r1, asr #16
        1bb1e4:	e0421001 	sub	r1, r2, r1
        1bb1e8:	e1510003 	cmp	r1, r3
        1bb1ec:	c1a03001 	movgt	r3, r1
        1bb1f0:	e590000c 	ldr	r0, [r0, #12]
        1bb1f4:	e3300000 	teq	r0, #0	; 0x0
        1bb1f8:	1affffeb 	bne	1bb1ac <transfrmN(low_type *)+0x6b4>
        1bb1fc:	e92d0008 	stmdb	sp!, {r3}
        1bb200:	e1a03005 	mov	r3, r5
        1bb204:	e28d206c 	add	r2, sp, #108	; 0x6c
        1bb208:	e1a01006 	mov	r1, r6
        1bb20c:	e1a00004 	mov	r0, r4
        1bb210:	eb65ac4e 	bl	1b26350 <$sub_max_to_line(low_type *, EXTR *, int *, short *, int)>
        1bb214:	e28dd004 	add	sp, sp, #4	; 0x4
        1bb218:	e58d0014 	str	r0, [sp, #20]
        1bb21c:	e59d008c 	ldr	r0, [sp, #140]
        1bb220:	e59d1078 	ldr	r1, [sp, #120]
        1bb224:	e99d000c 	ldmib	sp, {r2, r3}
        1bb228:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb22c:	e1a03005 	mov	r3, r5
        1bb230:	e59d0050 	ldr	r0, [sp, #80]
        1bb234:	e59d1058 	ldr	r1, [sp, #88]
        1bb238:	e59d2010 	ldr	r2, [sp, #16]
        1bb23c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb240:	e59d00b8 	ldr	r0, [sp, #184]
        1bb244:	e59d10b4 	ldr	r1, [sp, #180]
        1bb248:	e59d20b0 	ldr	r2, [sp, #176]
        1bb24c:	e59d3064 	ldr	r3, [sp, #100]
        1bb250:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb254:	e3a02003 	mov	r2, #3	; 0x3
        1bb258:	e59d30d4 	ldr	r3, [sp, #212]
        1bb25c:	e92d000c 	stmdb	sp!, {r2, r3}
        1bb260:	e59d30ac 	ldr	r3, [sp, #172]
        1bb264:	e28d20a0 	add	r2, sp, #160	; 0xa0
        1bb268:	e1a01006 	mov	r1, r6
        1bb26c:	e1a00004 	mov	r0, r4
        1bb270:	eb65a3e7 	bl	1b24214 <$bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)>
        1bb274:	e28dd038 	add	sp, sp, #56	; 0x38
        1bb278:	e58d0018 	str	r0, [sp, #24]
        1bb27c:	e3300001 	teq	r0, #1	; 0x1
        1bb280:	159d0014 	ldrne	r0, [sp, #20]
        1bb284:	13300001 	teqne	r0, #1	; 0x1
        1bb288:	1a000007 	bne	1bb2ac <transfrmN(low_type *)+0x7b4>
        1bb28c:	e1a03005 	mov	r3, r5
        1bb290:	e92d0008 	stmdb	sp!, {r3}
        1bb294:	e1a02004 	mov	r2, r4
        1bb298:	e1a00006 	mov	r0, r6
        1bb29c:	e59d106c 	ldr	r1, [sp, #108]
        1bb2a0:	e59d30b0 	ldr	r3, [sp, #176]
        1bb2a4:	eb65ac22 	bl	1b26334 <$smooth_d_bord(EXTR *, int, low_type *, low_type *, short *)>
        1bb2a8:	e28dd004 	add	sp, sp, #4	; 0x4
        1bb2ac:	e59d0018 	ldr	r0, [sp, #24]
        1bb2b0:	e3300001 	teq	r0, #1	; 0x1
        1bb2b4:	1a000028 	bne	1bb35c <transfrmN(low_type *)+0x864>
        1bb2b8:	e3a03000 	mov	r3, #0	; 0x0
        1bb2bc:	e5940040 	ldr	r0, [r4, #64]
        1bb2c0:	e3300000 	teq	r0, #0	; 0x0
        1bb2c4:	0a000013 	beq	1bb318 <transfrmN(low_type *)+0x820>
        1bb2c8:	e5d01000 	ldrb	r1, [r0]
        1bb2cc:	e3310003 	teq	r1, #3	; 0x3
        1bb2d0:	05d01001 	ldreqb	r1, [r0, #1]
        1bb2d4:	03310065 	teqeq	r1, #101	; 0x65
        1bb2d8:	1a00000b 	bne	1bb30c <transfrmN(low_type *)+0x814>
        1bb2dc:	e5901008 	ldr	r1, [r0, #8]
        1bb2e0:	e1a01841 	mov	r1, r1, asr #16
        1bb2e4:	e79a2081 	ldr	r2, [sl, r1, lsl #1]
        1bb2e8:	e1a02842 	mov	r2, r2, asr #16
        1bb2ec:	e59dc030 	ldr	ip, [sp, #48]
        1bb2f0:	e79c1081 	ldr	r1, [ip, r1, lsl #1]
        1bb2f4:	e1a01841 	mov	r1, r1, asr #16
        1bb2f8:	e7951081 	ldr	r1, [r5, r1, lsl #1]
        1bb2fc:	e1a01841 	mov	r1, r1, asr #16
        1bb300:	e0421001 	sub	r1, r2, r1
        1bb304:	e1510003 	cmp	r1, r3
        1bb308:	c1a03001 	movgt	r3, r1
        1bb30c:	e590000c 	ldr	r0, [r0, #12]
        1bb310:	e3300000 	teq	r0, #0	; 0x0
        1bb314:	1affffeb 	bne	1bb2c8 <transfrmN(low_type *)+0x7d0>
        1bb318:	e92d0008 	stmdb	sp!, {r3}
        1bb31c:	e1a03005 	mov	r3, r5
        1bb320:	e28d206c 	add	r2, sp, #108	; 0x6c
        1bb324:	e1a01006 	mov	r1, r6
        1bb328:	e1a00004 	mov	r0, r4
        1bb32c:	eb65ac07 	bl	1b26350 <$sub_max_to_line(low_type *, EXTR *, int *, short *, int)>
        1bb330:	e28dd004 	add	sp, sp, #4	; 0x4
        1bb334:	e3300001 	teq	r0, #1	; 0x1
        1bb338:	1a000007 	bne	1bb35c <transfrmN(low_type *)+0x864>
        1bb33c:	e1a03005 	mov	r3, r5
        1bb340:	e92d0008 	stmdb	sp!, {r3}
        1bb344:	e1a02004 	mov	r2, r4
        1bb348:	e1a00006 	mov	r0, r6
        1bb34c:	e59d106c 	ldr	r1, [sp, #108]
        1bb350:	e59d30b0 	ldr	r3, [sp, #176]
        1bb354:	eb65abf6 	bl	1b26334 <$smooth_d_bord(EXTR *, int, low_type *, low_type *, short *)>
        1bb358:	e28dd004 	add	sp, sp, #4	; 0x4
        1bb35c:	e3a00000 	mov	r0, #0	; 0x0
        1bb360:	e58d008c 	str	r0, [sp, #140]
        1bb364:	e59d2064 	ldr	r2, [sp, #100]
        1bb368:	e3520000 	cmp	r2, #0	; 0x0
        1bb36c:	da00000c 	ble	1bb3a4 <transfrmN(low_type *)+0x8ac>
        1bb370:	e0881200 	add	r1, r8, r0, lsl #4
        1bb374:	e5913006 	ldr	r3, [r1, #6]
        1bb378:	e1a03843 	mov	r3, r3, asr #16
        1bb37c:	e5911004 	ldr	r1, [r1, #4]
        1bb380:	e7953083 	ldr	r3, [r5, r3, lsl #1]
        1bb384:	e1a03843 	mov	r3, r3, asr #16
        1bb388:	e0431841 	sub	r1, r3, r1, asr #16
        1bb38c:	e59d308c 	ldr	r3, [sp, #140]
        1bb390:	e1510003 	cmp	r1, r3
        1bb394:	c58d108c 	strgt	r1, [sp, #140]
        1bb398:	e2800001 	add	r0, r0, #1	; 0x1
        1bb39c:	e1500002 	cmp	r0, r2
        1bb3a0:	bafffff2 	blt	1bb370 <transfrmN(low_type *)+0x878>
        1bb3a4:	e59d3000 	ldr	r3, [sp]
        1bb3a8:	e92d0008 	stmdb	sp!, {r3}
        1bb3ac:	e1a03005 	mov	r3, r5
        1bb3b0:	e1a0200a 	mov	r2, sl
        1bb3b4:	e28d1068 	add	r1, sp, #104	; 0x68
        1bb3b8:	e1a00008 	mov	r0, r8
        1bb3bc:	eb65a3a5 	bl	1b24258 <$del_tail_min__FP4EXTRPiPsT3Uc>
        1bb3c0:	e28dd004 	add	sp, sp, #4	; 0x4
        1bb3c4:	e59d008c 	ldr	r0, [sp, #140]
        1bb3c8:	e59d1078 	ldr	r1, [sp, #120]
        1bb3cc:	e99d000c 	ldmib	sp, {r2, r3}
        1bb3d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb3d4:	e1a03005 	mov	r3, r5
        1bb3d8:	e59d0048 	ldr	r0, [sp, #72]
        1bb3dc:	e59d105c 	ldr	r1, [sp, #92]
        1bb3e0:	e59d2010 	ldr	r2, [sp, #16]
        1bb3e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb3e8:	e59d00b8 	ldr	r0, [sp, #184]
        1bb3ec:	e59d10b4 	ldr	r1, [sp, #180]
        1bb3f0:	e59d20b0 	ldr	r2, [sp, #176]
        1bb3f4:	e59d305c 	ldr	r3, [sp, #92]
        1bb3f8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb3fc:	e3a02001 	mov	r2, #1	; 0x1
        1bb400:	e59d30d4 	ldr	r3, [sp, #212]
        1bb404:	e92d000c 	stmdb	sp!, {r2, r3}
        1bb408:	e59d30a8 	ldr	r3, [sp, #168]
        1bb40c:	e28d209c 	add	r2, sp, #156	; 0x9c
        1bb410:	e1a01008 	mov	r1, r8
        1bb414:	e1a00004 	mov	r0, r4
        1bb418:	eb65a37d 	bl	1b24214 <$bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)>
        1bb41c:	e28dd038 	add	sp, sp, #56	; 0x38
        1bb420:	e58d0018 	str	r0, [sp, #24]
        1bb424:	e3300001 	teq	r0, #1	; 0x1
        1bb428:	1a000016 	bne	1bb488 <transfrmN(low_type *)+0x990>
        1bb42c:	e59d008c 	ldr	r0, [sp, #140]
        1bb430:	e59d1078 	ldr	r1, [sp, #120]
        1bb434:	e99d000c 	ldmib	sp, {r2, r3}
        1bb438:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb43c:	e1a03005 	mov	r3, r5
        1bb440:	e59d0048 	ldr	r0, [sp, #72]
        1bb444:	e59d105c 	ldr	r1, [sp, #92]
        1bb448:	e59d2010 	ldr	r2, [sp, #16]
        1bb44c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb450:	e59d00b8 	ldr	r0, [sp, #184]
        1bb454:	e59d10b4 	ldr	r1, [sp, #180]
        1bb458:	e59d20b0 	ldr	r2, [sp, #176]
        1bb45c:	e59d305c 	ldr	r3, [sp, #92]
        1bb460:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb464:	e3a02001 	mov	r2, #1	; 0x1
        1bb468:	e59d30d4 	ldr	r3, [sp, #212]
        1bb46c:	e92d000c 	stmdb	sp!, {r2, r3}
        1bb470:	e59d30a8 	ldr	r3, [sp, #168]
        1bb474:	e28d209c 	add	r2, sp, #156	; 0x9c
        1bb478:	e1a01008 	mov	r1, r8
        1bb47c:	e1a00004 	mov	r0, r4
        1bb480:	eb65a363 	bl	1b24214 <$bord_correction(low_type *, EXTR *, int *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, short *, unsigned char, unsigned char, unsigned int, unsigned int)>
        1bb484:	e28dd038 	add	sp, sp, #56	; 0x38
        1bb488:	e1a03005 	mov	r3, r5
        1bb48c:	e1a02009 	mov	r2, r9
        1bb490:	e92d000c 	stmdb	sp!, {r2, r3}
        1bb494:	e1a02004 	mov	r2, r4
        1bb498:	e1a00008 	mov	r0, r8
        1bb49c:	e59d106c 	ldr	r1, [sp, #108]
        1bb4a0:	e59d30b4 	ldr	r3, [sp, #180]
        1bb4a4:	eb65aba3 	bl	1b26338 <$smooth_u_bord__FP4EXTRiP8low_typeT2PsT5>
        1bb4a8:	e28dd008 	add	sp, sp, #8	; 0x8
        1bb4ac:	e1a01004 	mov	r1, r4
        1bb4b0:	e59d002c 	ldr	r0, [sp, #44]
        1bb4b4:	eb65a370 	bl	1b2427c <$fill_i_point(short *, low_type *)>
        1bb4b8:	e58d0058 	str	r0, [sp, #88]
        1bb4bc:	e28d3080 	add	r3, sp, #128	; 0x80
        1bb4c0:	e28d2084 	add	r2, sp, #132	; 0x84
        1bb4c4:	e28d1088 	add	r1, sp, #136	; 0x88
        1bb4c8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb4cc:	e1a00005 	mov	r0, r5
        1bb4d0:	e59d103c 	ldr	r1, [sp, #60]
        1bb4d4:	e28d3074 	add	r3, sp, #116	; 0x74
        1bb4d8:	e893000c 	ldmia	r3, {r2, r3}
        1bb4dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb4e0:	e1a03009 	mov	r3, r9
        1bb4e4:	e1a02006 	mov	r2, r6
        1bb4e8:	e1a01008 	mov	r1, r8
        1bb4ec:	e1a00004 	mov	r0, r4
        1bb4f0:	eb65a34c 	bl	1b24228 <$calc_med_heights__FP8low_typeP4EXTRT2PsN24iN27PiPiPi>
        1bb4f4:	e28dd020 	add	sp, sp, #32	; 0x20
        1bb4f8:	e3300000 	teq	r0, #0	; 0x0
        1bb4fc:	1a0003c6 	bne	1bc41c <transfrmN(low_type *)+0x1924>
        1bb500:	e5940000 	ldr	r0, [r4]
        1bb504:	e5900094 	ldr	r0, [r0, #148]
        1bb508:	e1a00820 	mov	r0, r0, lsr #16
        1bb50c:	e3300020 	teq	r0, #32	; 0x20
        1bb510:	0a000210 	beq	1bbd58 <transfrmN(low_type *)+0x1260>
        1bb514:	e1a02005 	mov	r2, r5
        1bb518:	e1a01009 	mov	r1, r9
        1bb51c:	e59d3000 	ldr	r3, [sp]
        1bb520:	e28d0048 	add	r0, sp, #72	; 0x48
        1bb524:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb528:	e28d305c 	add	r3, sp, #92	; 0x5c
        1bb52c:	e1a02006 	mov	r2, r6
        1bb530:	e28d1074 	add	r1, sp, #116	; 0x74
        1bb534:	e8910003 	ldmia	r1, {r0, r1}
        1bb538:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb53c:	e1a00004 	mov	r0, r4
        1bb540:	e28d30a4 	add	r3, sp, #164	; 0xa4
        1bb544:	e893000a 	ldmia	r3, {r1, r3}
        1bb548:	e59d20a0 	ldr	r2, [sp, #160]
        1bb54c:	eb65ab6b 	bl	1b26300 <$line_pos_mist__FP8low_typeiN42P4EXTRPiT8PsPsUc>
        1bb550:	e28dd020 	add	sp, sp, #32	; 0x20
        1bb554:	e58d00a0 	str	r0, [sp, #160]
        1bb558:	e3500064 	cmp	r0, #100	; 0x64
        1bb55c:	ba000002 	blt	1bb56c <transfrmN(low_type *)+0xa74>
        1bb560:	e2877064 	add	r7, r7, #100	; 0x64
        1bb564:	e59d3068 	ldr	r3, [sp, #104]
        1bb568:	ea000106 	b	1bb988 <transfrmN(low_type *)+0xe90>
        1bb56c:	e3a00000 	mov	r0, #0	; 0x0
        1bb570:	e58d0008 	str	r0, [sp, #8]
        1bb574:	e58d0004 	str	r0, [sp, #4]
        1bb578:	e59d1064 	ldr	r1, [sp, #100]
        1bb57c:	e3510000 	cmp	r1, #0	; 0x0
        1bb580:	da000007 	ble	1bb5a4 <transfrmN(low_type *)+0xaac>
        1bb584:	e3a01000 	mov	r1, #0	; 0x0
        1bb588:	e0882200 	add	r2, r8, r0, lsl #4
        1bb58c:	e5c21001 	strb	r1, [r2, #1]
        1bb590:	e5c21000 	strb	r1, [r2]
        1bb594:	e2800001 	add	r0, r0, #1	; 0x1
        1bb598:	e59d2064 	ldr	r2, [sp, #100]
        1bb59c:	e1500002 	cmp	r0, r2
        1bb5a0:	bafffff8 	blt	1bb588 <transfrmN(low_type *)+0xa90>
        1bb5a4:	e3a00000 	mov	r0, #0	; 0x0
        1bb5a8:	e59d1068 	ldr	r1, [sp, #104]
        1bb5ac:	e3510000 	cmp	r1, #0	; 0x0
        1bb5b0:	da000007 	ble	1bb5d4 <transfrmN(low_type *)+0xadc>
        1bb5b4:	e3a01000 	mov	r1, #0	; 0x0
        1bb5b8:	e0862200 	add	r2, r6, r0, lsl #4
        1bb5bc:	e5c21001 	strb	r1, [r2, #1]
        1bb5c0:	e5c21000 	strb	r1, [r2]
        1bb5c4:	e2800001 	add	r0, r0, #1	; 0x1
        1bb5c8:	e59d2068 	ldr	r2, [sp, #104]
        1bb5cc:	e1500002 	cmp	r0, r2
        1bb5d0:	bafffff8 	blt	1bb5b8 <transfrmN(low_type *)+0xac0>
        1bb5d4:	e3a03001 	mov	r3, #1	; 0x1
        1bb5d8:	e3a02000 	mov	r2, #0	; 0x0
        1bb5dc:	e1a0100a 	mov	r1, sl
        1bb5e0:	e1a00005 	mov	r0, r5
        1bb5e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb5e8:	e3a01003 	mov	r1, #3	; 0x3
        1bb5ec:	e59d2054 	ldr	r2, [sp, #84]
        1bb5f0:	e59d3050 	ldr	r3, [sp, #80]
        1bb5f4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1bb5f8:	e1a00006 	mov	r0, r6
        1bb5fc:	e59d1084 	ldr	r1, [sp, #132]
        1bb600:	e59d2090 	ldr	r2, [sp, #144]
        1bb604:	e59d30b4 	ldr	r3, [sp, #180]
        1bb608:	eb65a71d 	bl	1b25284 <$find_gaps_in_line__FP4EXTRiN22UcN22PsT8UiUi>
        1bb60c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1bb610:	e3a03001 	mov	r3, #1	; 0x1
        1bb614:	e3a02000 	mov	r2, #0	; 0x0
        1bb618:	e3a01002 	mov	r1, #2	; 0x2
        1bb61c:	e1a0000a 	mov	r0, sl
        1bb620:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb624:	e1a02005 	mov	r2, r5
        1bb628:	e59d0054 	ldr	r0, [sp, #84]
        1bb62c:	e59d1050 	ldr	r1, [sp, #80]
        1bb630:	e59d3044 	ldr	r3, [sp, #68]
        1bb634:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb638:	e1a00006 	mov	r0, r6
        1bb63c:	e3a03003 	mov	r3, #3	; 0x3
        1bb640:	e59d1088 	ldr	r1, [sp, #136]
        1bb644:	e59d20b8 	ldr	r2, [sp, #184]
        1bb648:	eb65a70e 	bl	1b25288 <$find_glitches_in_line__FP4EXTRiT2UcN22PsN27T2UiUi>
        1bb64c:	e28dd020 	add	sp, sp, #32	; 0x20
        1bb650:	e3a03001 	mov	r3, #1	; 0x1
        1bb654:	e3a02000 	mov	r2, #0	; 0x0
        1bb658:	e1a0100a 	mov	r1, sl
        1bb65c:	e1a00005 	mov	r0, r5
        1bb660:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb664:	e3a01001 	mov	r1, #1	; 0x1
        1bb668:	e59d204c 	ldr	r2, [sp, #76]
        1bb66c:	e59d3048 	ldr	r3, [sp, #72]
        1bb670:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1bb674:	e1a00008 	mov	r0, r8
        1bb678:	e59d1080 	ldr	r1, [sp, #128]
        1bb67c:	e59d208c 	ldr	r2, [sp, #140]
        1bb680:	e59d30b4 	ldr	r3, [sp, #180]
        1bb684:	eb65a6fe 	bl	1b25284 <$find_gaps_in_line__FP4EXTRiN22UcN22PsT8UiUi>
        1bb688:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1bb68c:	e3a03001 	mov	r3, #1	; 0x1
        1bb690:	e3a02000 	mov	r2, #0	; 0x0
        1bb694:	e3a01002 	mov	r1, #2	; 0x2
        1bb698:	e1a0000a 	mov	r0, sl
        1bb69c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb6a0:	e1a02005 	mov	r2, r5
        1bb6a4:	e59d004c 	ldr	r0, [sp, #76]
        1bb6a8:	e59d1048 	ldr	r1, [sp, #72]
        1bb6ac:	e59d3044 	ldr	r3, [sp, #68]
        1bb6b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb6b4:	e1a00008 	mov	r0, r8
        1bb6b8:	e3a03001 	mov	r3, #1	; 0x1
        1bb6bc:	e59d1084 	ldr	r1, [sp, #132]
        1bb6c0:	e59d20b8 	ldr	r2, [sp, #184]
        1bb6c4:	eb65a6ef 	bl	1b25288 <$find_glitches_in_line__FP4EXTRiT2UcN22PsN27T2UiUi>
        1bb6c8:	e28dd020 	add	sp, sp, #32	; 0x20
        1bb6cc:	e3a00000 	mov	r0, #0	; 0x0
        1bb6d0:	e59d2064 	ldr	r2, [sp, #100]
        1bb6d4:	e3520000 	cmp	r2, #0	; 0x0
        1bb6d8:	da000009 	ble	1bb704 <transfrmN(low_type *)+0xc0c>
        1bb6dc:	e7981200 	ldr	r1, [r8, r0, lsl #4]
        1bb6e0:	e1a01841 	mov	r1, r1, asr #16
        1bb6e4:	e3310014 	teq	r1, #20	; 0x14
        1bb6e8:	13310028 	teqne	r1, #40	; 0x28
        1bb6ec:	1331003c 	teqne	r1, #60	; 0x3c
        1bb6f0:	03a01001 	moveq	r1, #1	; 0x1
        1bb6f4:	058d1004 	streq	r1, [sp, #4]
        1bb6f8:	e2800001 	add	r0, r0, #1	; 0x1
        1bb6fc:	e1500002 	cmp	r0, r2
        1bb700:	bafffff5 	blt	1bb6dc <transfrmN(low_type *)+0xbe4>
        1bb704:	e3a00000 	mov	r0, #0	; 0x0
        1bb708:	e59d1068 	ldr	r1, [sp, #104]
        1bb70c:	e3510000 	cmp	r1, #0	; 0x0
        1bb710:	da000008 	ble	1bb738 <transfrmN(low_type *)+0xc40>
        1bb714:	e7963200 	ldr	r3, [r6, r0, lsl #4]
        1bb718:	e1a03843 	mov	r3, r3, asr #16
        1bb71c:	e333001e 	teq	r3, #30	; 0x1e
        1bb720:	13330032 	teqne	r3, #50	; 0x32
        1bb724:	03a03001 	moveq	r3, #1	; 0x1
        1bb728:	058d3008 	streq	r3, [sp, #8]
        1bb72c:	e2800001 	add	r0, r0, #1	; 0x1
        1bb730:	e1500001 	cmp	r0, r1
        1bb734:	bafffff6 	blt	1bb714 <transfrmN(low_type *)+0xc1c>
        1bb738:	e59d0004 	ldr	r0, [sp, #4]
        1bb73c:	e3300001 	teq	r0, #1	; 0x1
        1bb740:	159d3008 	ldrne	r3, [sp, #8]
        1bb744:	13330001 	teqne	r3, #1	; 0x1
        1bb748:	059d00a0 	ldreq	r0, [sp, #160]
        1bb74c:	02800001 	addeq	r0, r0, #1	; 0x1
        1bb750:	058d00a0 	streq	r0, [sp, #160]
        1bb754:	e59d0000 	ldr	r0, [sp]
        1bb758:	e3300000 	teq	r0, #0	; 0x0
        1bb75c:	1a00001c 	bne	1bb7d4 <transfrmN(low_type *)+0xcdc>
        1bb760:	e59d00a0 	ldr	r0, [sp, #160]
        1bb764:	e3500000 	cmp	r0, #0	; 0x0
        1bb768:	da000064 	ble	1bb900 <transfrmN(low_type *)+0xe08>
        1bb76c:	e59d00a0 	ldr	r0, [sp, #160]
        1bb770:	e58d009c 	str	r0, [sp, #156]
        1bb774:	e58d6020 	str	r6, [sp, #32]
        1bb778:	e58d801c 	str	r8, [sp, #28]
        1bb77c:	e59d0064 	ldr	r0, [sp, #100]
        1bb780:	e58d005c 	str	r0, [sp, #92]
        1bb784:	e59d0068 	ldr	r0, [sp, #104]
        1bb788:	e58d0060 	str	r0, [sp, #96]
        1bb78c:	e59d6028 	ldr	r6, [sp, #40]
        1bb790:	e59d8024 	ldr	r8, [sp, #36]
        1bb794:	e5940040 	ldr	r0, [r4, #64]
        1bb798:	e3300000 	teq	r0, #0	; 0x0
        1bb79c:	0a000007 	beq	1bb7c0 <transfrmN(low_type *)+0xcc8>
        1bb7a0:	e5d01000 	ldrb	r1, [r0]
        1bb7a4:	e3310001 	teq	r1, #1	; 0x1
        1bb7a8:	13310003 	teqne	r1, #3	; 0x3
        1bb7ac:	05d01001 	ldreqb	r1, [r0, #1]
        1bb7b0:	05c01003 	streqb	r1, [r0, #3]
        1bb7b4:	e590000c 	ldr	r0, [r0, #12]
        1bb7b8:	e3300000 	teq	r0, #0	; 0x0
        1bb7bc:	1afffff7 	bne	1bb7a0 <transfrmN(low_type *)+0xca8>
        1bb7c0:	e59d0000 	ldr	r0, [sp]
        1bb7c4:	e2800001 	add	r0, r0, #1	; 0x1
        1bb7c8:	e20000ff 	and	r0, r0, #255	; 0xff
        1bb7cc:	e58d0000 	str	r0, [sp]
        1bb7d0:	eafffd6f 	b	1bad94 <transfrmN(low_type *)+0x29c>
        1bb7d4:	e59d0000 	ldr	r0, [sp]
        1bb7d8:	e3500001 	cmp	r0, #1	; 0x1
        1bb7dc:	1a00000d 	bne	1bb818 <transfrmN(low_type *)+0xd20>
        1bb7e0:	e59d00a0 	ldr	r0, [sp, #160]
        1bb7e4:	e3500003 	cmp	r0, #3	; 0x3
        1bb7e8:	a59d009c 	ldrge	r0, [sp, #156]
        1bb7ec:	a3500003 	cmpge	r0, #3	; 0x3
        1bb7f0:	ba000009 	blt	1bb81c <transfrmN(low_type *)+0xd24>
        1bb7f4:	e3520001 	cmp	r2, #1	; 0x1
        1bb7f8:	c3510001 	cmpgt	r1, #1	; 0x1
        1bb7fc:	ca000006 	bgt	1bb81c <transfrmN(low_type *)+0xd24>
        1bb800:	e59d005c 	ldr	r0, [sp, #92]
        1bb804:	e3500001 	cmp	r0, #1	; 0x1
        1bb808:	c59d0060 	ldrgt	r0, [sp, #96]
        1bb80c:	c3500001 	cmpgt	r0, #1	; 0x1
        1bb810:	daffff52 	ble	1bb560 <transfrmN(low_type *)+0xa68>
        1bb814:	ea000000 	b	1bb81c <transfrmN(low_type *)+0xd24>
        1bb818:	1a000038 	bne	1bb900 <transfrmN(low_type *)+0xe08>
        1bb81c:	e59d00a0 	ldr	r0, [sp, #160]
        1bb820:	e59d109c 	ldr	r1, [sp, #156]
        1bb824:	e1500001 	cmp	r0, r1
        1bb828:	ba000034 	blt	1bb900 <transfrmN(low_type *)+0xe08>
        1bb82c:	0287700a 	addeq	r7, r7, #10	; 0xa
        1bb830:	e59d005c 	ldr	r0, [sp, #92]
        1bb834:	e59d6020 	ldr	r6, [sp, #32]
        1bb838:	e59d801c 	ldr	r8, [sp, #28]
        1bb83c:	e58d0064 	str	r0, [sp, #100]
        1bb840:	e59d0060 	ldr	r0, [sp, #96]
        1bb844:	e58d0068 	str	r0, [sp, #104]
        1bb848:	e5940040 	ldr	r0, [r4, #64]
        1bb84c:	e3300000 	teq	r0, #0	; 0x0
        1bb850:	0a000007 	beq	1bb874 <transfrmN(low_type *)+0xd7c>
        1bb854:	e5d01000 	ldrb	r1, [r0]
        1bb858:	e3310001 	teq	r1, #1	; 0x1
        1bb85c:	13310003 	teqne	r1, #3	; 0x3
        1bb860:	05d01003 	ldreqb	r1, [r0, #3]
        1bb864:	05c01001 	streqb	r1, [r0, #1]
        1bb868:	e590000c 	ldr	r0, [r0, #12]
        1bb86c:	e3300000 	teq	r0, #0	; 0x0
        1bb870:	1afffff7 	bne	1bb854 <transfrmN(low_type *)+0xd5c>
        1bb874:	e1a03005 	mov	r3, r5
        1bb878:	e1a02009 	mov	r2, r9
        1bb87c:	e92d000c 	stmdb	sp!, {r2, r3}
        1bb880:	e1a02004 	mov	r2, r4
        1bb884:	e1a00008 	mov	r0, r8
        1bb888:	e59d106c 	ldr	r1, [sp, #108]
        1bb88c:	e59d30b4 	ldr	r3, [sp, #180]
        1bb890:	eb65aaa8 	bl	1b26338 <$smooth_u_bord__FP4EXTRiP8low_typeT2PsT5>
        1bb894:	e28dd008 	add	sp, sp, #8	; 0x8
        1bb898:	e1a03005 	mov	r3, r5
        1bb89c:	e92d0008 	stmdb	sp!, {r3}
        1bb8a0:	e1a02004 	mov	r2, r4
        1bb8a4:	e1a00006 	mov	r0, r6
        1bb8a8:	e59d106c 	ldr	r1, [sp, #108]
        1bb8ac:	e59d30b0 	ldr	r3, [sp, #176]
        1bb8b0:	eb65aa9f 	bl	1b26334 <$smooth_d_bord(EXTR *, int, low_type *, low_type *, short *)>
        1bb8b4:	e28dd004 	add	sp, sp, #4	; 0x4
        1bb8b8:	e28d3080 	add	r3, sp, #128	; 0x80
        1bb8bc:	e28d2084 	add	r2, sp, #132	; 0x84
        1bb8c0:	e28d1088 	add	r1, sp, #136	; 0x88
        1bb8c4:	e59d0058 	ldr	r0, [sp, #88]
        1bb8c8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb8cc:	e1a00005 	mov	r0, r5
        1bb8d0:	e59d103c 	ldr	r1, [sp, #60]
        1bb8d4:	e28d3074 	add	r3, sp, #116	; 0x74
        1bb8d8:	e893000c 	ldmia	r3, {r2, r3}
        1bb8dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb8e0:	e1a03009 	mov	r3, r9
        1bb8e4:	e1a02006 	mov	r2, r6
        1bb8e8:	e1a01008 	mov	r1, r8
        1bb8ec:	e1a00004 	mov	r0, r4
        1bb8f0:	eb65a24c 	bl	1b24228 <$calc_med_heights__FP8low_typeP4EXTRT2PsN24iN27PiPiPi>
        1bb8f4:	e28dd020 	add	sp, sp, #32	; 0x20
        1bb8f8:	e3300000 	teq	r0, #0	; 0x0
        1bb8fc:	1a0002c6 	bne	1bc41c <transfrmN(low_type *)+0x1924>
        1bb900:	e5940000 	ldr	r0, [r4]
        1bb904:	e5d010b6 	ldrb	r1, [r0, #182]
        1bb908:	e3310000 	teq	r1, #0	; 0x0
        1bb90c:	05901094 	ldreq	r1, [r0, #148]
        1bb910:	01a01821 	moveq	r1, r1, lsr #16
        1bb914:	03310010 	teqeq	r1, #16	; 0x10
        1bb918:	059d100c 	ldreq	r1, [sp, #12]
        1bb91c:	03310001 	teqeq	r1, #1	; 0x1
        1bb920:	0a000003 	beq	1bb934 <transfrmN(low_type *)+0xe3c>
        1bb924:	e5900090 	ldr	r0, [r0, #144]
        1bb928:	e1a00820 	mov	r0, r0, lsr #16
        1bb92c:	e3100b02 	tst	r0, #2048	; 0x800
        1bb930:	0a000022 	beq	1bb9c0 <transfrmN(low_type *)+0xec8>
        1bb934:	e1a02005 	mov	r2, r5
        1bb938:	e1a01009 	mov	r1, r9
        1bb93c:	e1a00004 	mov	r0, r4
        1bb940:	eb65aa76 	bl	1b26320 <$numbers_in_text__FP8low_typePsT2>
        1bb944:	e3300001 	teq	r0, #1	; 0x1
        1bb948:	1a00001c 	bne	1bb9c0 <transfrmN(low_type *)+0xec8>
        1bb94c:	e287700a 	add	r7, r7, #10	; 0xa
        1bb950:	e5940000 	ldr	r0, [r4]
        1bb954:	e59010e6 	ldr	r1, [r0, #230]
        1bb958:	e1a01841 	mov	r1, r1, asr #16
        1bb95c:	e351005a 	cmp	r1, #90	; 0x5a
        1bb960:	a59010e8 	ldrge	r1, [r0, #232]
        1bb964:	a1a01841 	movge	r1, r1, asr #16
        1bb968:	a351005a 	cmpge	r1, #90	; 0x5a
        1bb96c:	b3a01020 	movlt	r1, #32	; 0x20
        1bb970:	b5c01095 	strltb	r1, [r0, #149]
        1bb974:	b3a01000 	movlt	r1, #0	; 0x0
        1bb978:	b5c01094 	strltb	r1, [r0, #148]
        1bb97c:	bafffd04 	blt	1bad94 <transfrmN(low_type *)+0x29c>
        1bb980:	e287705a 	add	r7, r7, #90	; 0x5a
        1bb984:	e3a03000 	mov	r3, #0	; 0x0
        1bb988:	e1a02006 	mov	r2, r6
        1bb98c:	e3a01000 	mov	r1, #0	; 0x0
        1bb990:	e28d0058 	add	r0, sp, #88	; 0x58
        1bb994:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bb998:	e28d3098 	add	r3, sp, #152	; 0x98
        1bb99c:	e28d2094 	add	r2, sp, #148	; 0x94
        1bb9a0:	e92d000c 	stmdb	sp!, {r2, r3}
        1bb9a4:	e28d3098 	add	r3, sp, #152	; 0x98
        1bb9a8:	e1a02009 	mov	r2, r9
        1bb9ac:	e1a01005 	mov	r1, r5
        1bb9b0:	e1a00004 	mov	r0, r4
        1bb9b4:	eb659e00 	bl	1b231bc <$SpecBord__FP8low_typePsT2PiN34UiP4EXTRi>
        1bb9b8:	e28dd018 	add	sp, sp, #24	; 0x18
        1bb9bc:	ea0000e5 	b	1bbd58 <transfrmN(low_type *)+0x1260>
        1bb9c0:	e3a0a000 	mov	sl, #0	; 0x0
        1bb9c4:	e58da010 	str	sl, [sp, #16]
        1bb9c8:	e59d002c 	ldr	r0, [sp, #44]
        1bb9cc:	e5900000 	ldr	r0, [r0]
        1bb9d0:	e1a00840 	mov	r0, r0, asr #16
        1bb9d4:	e7951080 	ldr	r1, [r5, r0, lsl #1]
        1bb9d8:	e1a01841 	mov	r1, r1, asr #16
        1bb9dc:	e7990080 	ldr	r0, [r9, r0, lsl #1]
        1bb9e0:	e1a00840 	mov	r0, r0, asr #16
        1bb9e4:	e0410000 	sub	r0, r1, r0
        1bb9e8:	e1a00080 	mov	r0, r0, lsl #1
        1bb9ec:	e59d1088 	ldr	r1, [sp, #136]
        1bb9f0:	e1500001 	cmp	r0, r1
        1bb9f4:	ca000029 	bgt	1bbaa0 <transfrmN(low_type *)+0xfa8>
        1bb9f8:	e2877005 	add	r7, r7, #5	; 0x5
        1bb9fc:	e59d1064 	ldr	r1, [sp, #100]
        1bba00:	e3510001 	cmp	r1, #1	; 0x1
        1bba04:	a59d0068 	ldrge	r0, [sp, #104]
        1bba08:	a3500001 	cmpge	r0, #1	; 0x1
        1bba0c:	ba0000d1 	blt	1bbd58 <transfrmN(low_type *)+0x1260>
        1bba10:	e5983002 	ldr	r3, [r8, #2]
        1bba14:	e1a03843 	mov	r3, r3, asr #16
        1bba18:	e5962002 	ldr	r2, [r6, #2]
        1bba1c:	e1530842 	cmp	r3, r2, asr #16
        1bba20:	da00000f 	ble	1bba64 <transfrmN(low_type *)+0xf6c>
        1bba24:	e5982004 	ldr	r2, [r8, #4]
        1bba28:	e5981006 	ldr	r1, [r8, #6]
        1bba2c:	e1a01841 	mov	r1, r1, asr #16
        1bba30:	e7951081 	ldr	r1, [r5, r1, lsl #1]
        1bba34:	e1a01841 	mov	r1, r1, asr #16
        1bba38:	e0612842 	rsb	r2, r1, r2, asr #16
        1bba3c:	e3a03010 	mov	r3, #16	; 0x10
        1bba40:	e92d000c 	stmdb	sp!, {r2, r3}
        1bba44:	e1a03000 	mov	r3, r0
        1bba48:	e1a02006 	mov	r2, r6
        1bba4c:	e28d106c 	add	r1, sp, #108	; 0x6c
        1bba50:	e1a00008 	mov	r0, r8
        1bba54:	eb65a1f8 	bl	1b2423c <$correct_narrow_ends__FP4EXTRPiT1iT4Uc>
        1bba58:	e28dd008 	add	sp, sp, #8	; 0x8
        1bba5c:	e1a0a000 	mov	sl, r0
        1bba60:	ea00000e 	b	1bbaa0 <transfrmN(low_type *)+0xfa8>
        1bba64:	e5962004 	ldr	r2, [r6, #4]
        1bba68:	e5960006 	ldr	r0, [r6, #6]
        1bba6c:	e1a00840 	mov	r0, r0, asr #16
        1bba70:	e7990080 	ldr	r0, [r9, r0, lsl #1]
        1bba74:	e1a00840 	mov	r0, r0, asr #16
        1bba78:	e0602842 	rsb	r2, r0, r2, asr #16
        1bba7c:	e3a03010 	mov	r3, #16	; 0x10
        1bba80:	e92d000c 	stmdb	sp!, {r2, r3}
        1bba84:	e1a03001 	mov	r3, r1
        1bba88:	e1a02008 	mov	r2, r8
        1bba8c:	e28d1070 	add	r1, sp, #112	; 0x70
        1bba90:	e1a00006 	mov	r0, r6
        1bba94:	eb65a1e8 	bl	1b2423c <$correct_narrow_ends__FP4EXTRPiT1iT4Uc>
        1bba98:	e28dd008 	add	sp, sp, #8	; 0x8
        1bba9c:	e58d0010 	str	r0, [sp, #16]
        1bbaa0:	e59d0058 	ldr	r0, [sp, #88]
        1bbaa4:	e59d102c 	ldr	r1, [sp, #44]
        1bbaa8:	e0810080 	add	r0, r1, r0, lsl #1
        1bbaac:	e5100002 	ldr	r0, [r0, -#2]
        1bbab0:	e1a00840 	mov	r0, r0, asr #16
        1bbab4:	e7951080 	ldr	r1, [r5, r0, lsl #1]
        1bbab8:	e1a01841 	mov	r1, r1, asr #16
        1bbabc:	e7990080 	ldr	r0, [r9, r0, lsl #1]
        1bbac0:	e1a00840 	mov	r0, r0, asr #16
        1bbac4:	e0410000 	sub	r0, r1, r0
        1bbac8:	e1a01080 	mov	r1, r0, lsl #1
        1bbacc:	e59d0088 	ldr	r0, [sp, #136]
        1bbad0:	e1510000 	cmp	r1, r0
        1bbad4:	ca00002b 	bgt	1bbb88 <transfrmN(low_type *)+0x1090>
        1bbad8:	e2877005 	add	r7, r7, #5	; 0x5
        1bbadc:	e59d1064 	ldr	r1, [sp, #100]
        1bbae0:	e3510001 	cmp	r1, #1	; 0x1
        1bbae4:	a59d0068 	ldrge	r0, [sp, #104]
        1bbae8:	a3500001 	cmpge	r0, #1	; 0x1
        1bbaec:	ba000099 	blt	1bbd58 <transfrmN(low_type *)+0x1260>
        1bbaf0:	e0883201 	add	r3, r8, r1, lsl #4
        1bbaf4:	e513c00e 	ldr	ip, [r3, -#14]
        1bbaf8:	e1a0c84c 	mov	ip, ip, asr #16
        1bbafc:	e0862200 	add	r2, r6, r0, lsl #4
        1bbb00:	e512e00e 	ldr	lr, [r2, -#14]
        1bbb04:	e15c084e 	cmp	ip, lr, asr #16
        1bbb08:	ca00000f 	bgt	1bbb4c <transfrmN(low_type *)+0x1054>
        1bbb0c:	e513100c 	ldr	r1, [r3, -#12]
        1bbb10:	e513200a 	ldr	r2, [r3, -#10]
        1bbb14:	e1a02842 	mov	r2, r2, asr #16
        1bbb18:	e7952082 	ldr	r2, [r5, r2, lsl #1]
        1bbb1c:	e1a02842 	mov	r2, r2, asr #16
        1bbb20:	e0622841 	rsb	r2, r2, r1, asr #16
        1bbb24:	e3a03020 	mov	r3, #32	; 0x20
        1bbb28:	e92d000c 	stmdb	sp!, {r2, r3}
        1bbb2c:	e1a03000 	mov	r3, r0
        1bbb30:	e1a02006 	mov	r2, r6
        1bbb34:	e28d106c 	add	r1, sp, #108	; 0x6c
        1bbb38:	e1a00008 	mov	r0, r8
        1bbb3c:	eb65a1be 	bl	1b2423c <$correct_narrow_ends__FP4EXTRPiT1iT4Uc>
        1bbb40:	e28dd008 	add	sp, sp, #8	; 0x8
        1bbb44:	e1a0a000 	mov	sl, r0
        1bbb48:	ea00000e 	b	1bbb88 <transfrmN(low_type *)+0x1090>
        1bbb4c:	e512000c 	ldr	r0, [r2, -#12]
        1bbb50:	e512200a 	ldr	r2, [r2, -#10]
        1bbb54:	e1a02842 	mov	r2, r2, asr #16
        1bbb58:	e7992082 	ldr	r2, [r9, r2, lsl #1]
        1bbb5c:	e1a02842 	mov	r2, r2, asr #16
        1bbb60:	e0622840 	rsb	r2, r2, r0, asr #16
        1bbb64:	e3a03020 	mov	r3, #32	; 0x20
        1bbb68:	e92d000c 	stmdb	sp!, {r2, r3}
        1bbb6c:	e1a03001 	mov	r3, r1
        1bbb70:	e1a02008 	mov	r2, r8
        1bbb74:	e28d1070 	add	r1, sp, #112	; 0x70
        1bbb78:	e1a00006 	mov	r0, r6
        1bbb7c:	eb65a1ae 	bl	1b2423c <$correct_narrow_ends__FP4EXTRPiT1iT4Uc>
        1bbb80:	e28dd008 	add	sp, sp, #8	; 0x8
        1bbb84:	e58d0010 	str	r0, [sp, #16]
        1bbb88:	e33a0001 	teq	sl, #1	; 0x1
        1bbb8c:	1a000008 	bne	1bbbb4 <transfrmN(low_type *)+0x10bc>
        1bbb90:	e1a03005 	mov	r3, r5
        1bbb94:	e1a02009 	mov	r2, r9
        1bbb98:	e92d000c 	stmdb	sp!, {r2, r3}
        1bbb9c:	e1a02004 	mov	r2, r4
        1bbba0:	e1a00008 	mov	r0, r8
        1bbba4:	e59d106c 	ldr	r1, [sp, #108]
        1bbba8:	e59d30b4 	ldr	r3, [sp, #180]
        1bbbac:	eb65a9e1 	bl	1b26338 <$smooth_u_bord__FP4EXTRiP8low_typeT2PsT5>
        1bbbb0:	e28dd008 	add	sp, sp, #8	; 0x8
        1bbbb4:	e59d0010 	ldr	r0, [sp, #16]
        1bbbb8:	e3300001 	teq	r0, #1	; 0x1
        1bbbbc:	1a000007 	bne	1bbbe0 <transfrmN(low_type *)+0x10e8>
        1bbbc0:	e1a03005 	mov	r3, r5
        1bbbc4:	e92d0008 	stmdb	sp!, {r3}
        1bbbc8:	e1a02004 	mov	r2, r4
        1bbbcc:	e1a00006 	mov	r0, r6
        1bbbd0:	e59d106c 	ldr	r1, [sp, #108]
        1bbbd4:	e59d30b0 	ldr	r3, [sp, #176]
        1bbbd8:	eb65a9d5 	bl	1b26334 <$smooth_d_bord(EXTR *, int, low_type *, low_type *, short *)>
        1bbbdc:	e28dd004 	add	sp, sp, #4	; 0x4
        1bbbe0:	e33a0001 	teq	sl, #1	; 0x1
        1bbbe4:	159d0010 	ldrne	r0, [sp, #16]
        1bbbe8:	13300001 	teqne	r0, #1	; 0x1
        1bbbec:	1a000011 	bne	1bbc38 <transfrmN(low_type *)+0x1140>
        1bbbf0:	e28d3080 	add	r3, sp, #128	; 0x80
        1bbbf4:	e28d2084 	add	r2, sp, #132	; 0x84
        1bbbf8:	e28d1088 	add	r1, sp, #136	; 0x88
        1bbbfc:	e59d0058 	ldr	r0, [sp, #88]
        1bbc00:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bbc04:	e1a00005 	mov	r0, r5
        1bbc08:	e59d103c 	ldr	r1, [sp, #60]
        1bbc0c:	e28d3074 	add	r3, sp, #116	; 0x74
        1bbc10:	e893000c 	ldmia	r3, {r2, r3}
        1bbc14:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bbc18:	e1a03009 	mov	r3, r9
        1bbc1c:	e1a02006 	mov	r2, r6
        1bbc20:	e1a01008 	mov	r1, r8
        1bbc24:	e1a00004 	mov	r0, r4
        1bbc28:	eb65a17e 	bl	1b24228 <$calc_med_heights__FP8low_typeP4EXTRT2PsN24iN27PiPiPi>
        1bbc2c:	e28dd020 	add	sp, sp, #32	; 0x20
        1bbc30:	e3300000 	teq	r0, #0	; 0x0
        1bbc34:	1a0001f8 	bne	1bc41c <transfrmN(low_type *)+0x1924>
        1bbc38:	e3a00000 	mov	r0, #0	; 0x0
        1bbc3c:	e3a01000 	mov	r1, #0	; 0x0
        1bbc40:	e594303c 	ldr	r3, [r4, #60]
        1bbc44:	e1a03843 	mov	r3, r3, asr #16
        1bbc48:	e3530000 	cmp	r3, #0	; 0x0
        1bbc4c:	da000010 	ble	1bbc94 <transfrmN(low_type *)+0x119c>
        1bbc50:	e5942038 	ldr	r2, [r4, #56]
        1bbc54:	e792c080 	ldr	ip, [r2, r0, lsl #1]
        1bbc58:	e1a0c84c 	mov	ip, ip, asr #16
        1bbc5c:	e37c0001 	cmn	ip, #1	; 0x1
        1bbc60:	0a000006 	beq	1bbc80 <transfrmN(low_type *)+0x1188>
        1bbc64:	e795c080 	ldr	ip, [r5, r0, lsl #1]
        1bbc68:	e1a0c84c 	mov	ip, ip, asr #16
        1bbc6c:	e799e080 	ldr	lr, [r9, r0, lsl #1]
        1bbc70:	e1a0e84e 	mov	lr, lr, asr #16
        1bbc74:	e04cc00e 	sub	ip, ip, lr
        1bbc78:	e35c0000 	cmp	ip, #0	; 0x0
        1bbc7c:	d3a01001 	movle	r1, #1	; 0x1
        1bbc80:	e2800001 	add	r0, r0, #1	; 0x1
        1bbc84:	e1530000 	cmp	r3, r0
        1bbc88:	cafffff1 	bgt	1bbc54 <transfrmN(low_type *)+0x115c>
        1bbc8c:	e3310001 	teq	r1, #1	; 0x1
        1bbc90:	0afffe32 	beq	1bb560 <transfrmN(low_type *)+0xa68>
        1bbc94:	e5948000 	ldr	r8, [r4]
        1bbc98:	e598a0e2 	ldr	sl, [r8, #226]
        1bbc9c:	e1a0a84a 	mov	sl, sl, asr #16
        1bbca0:	e59d1088 	ldr	r1, [sp, #136]
        1bbca4:	e58d10c0 	str	r1, [sp, #192]
        1bbca8:	e351000c 	cmp	r1, #12	; 0xc
        1bbcac:	bafffe2b 	blt	1bb560 <transfrmN(low_type *)+0xa68>
        1bbcb0:	e08a008a 	add	r0, sl, sl, lsl #1
        1bbcb4:	e59d10c0 	ldr	r1, [sp, #192]
        1bbcb8:	e1500001 	cmp	r0, r1
        1bbcbc:	aa000003 	bge	1bbcd0 <transfrmN(low_type *)+0x11d8>
        1bbcc0:	e59800e6 	ldr	r0, [r8, #230]
        1bbcc4:	e1a00840 	mov	r0, r0, asr #16
        1bbcc8:	e350004b 	cmp	r0, #75	; 0x4b
        1bbccc:	aafffe23 	bge	1bb560 <transfrmN(low_type *)+0xa68>
        1bbcd0:	e28a1001 	add	r1, sl, #1	; 0x1
        1bbcd4:	e3a00003 	mov	r0, #3	; 0x3
        1bbcd8:	eb67db18 	bl	1bb2940 <$__rt_sdiv>
        1bbcdc:	e59d10c0 	ldr	r1, [sp, #192]
        1bbce0:	e1500001 	cmp	r0, r1
        1bbce4:	da00000f 	ble	1bbd28 <transfrmN(low_type *)+0x1230>
        1bbce8:	e59800e6 	ldr	r0, [r8, #230]
        1bbcec:	e1a00840 	mov	r0, r0, asr #16
        1bbcf0:	e350005a 	cmp	r0, #90	; 0x5a
        1bbcf4:	ba000004 	blt	1bbd0c <transfrmN(low_type *)+0x1214>
        1bbcf8:	e59d1068 	ldr	r1, [sp, #104]
        1bbcfc:	e3510003 	cmp	r1, #3	; 0x3
        1bbd00:	c59d1064 	ldrgt	r1, [sp, #100]
        1bbd04:	c3510003 	cmpgt	r1, #3	; 0x3
        1bbd08:	dafffe14 	ble	1bb560 <transfrmN(low_type *)+0xa68>
        1bbd0c:	e350004b 	cmp	r0, #75	; 0x4b
        1bbd10:	ba000004 	blt	1bbd28 <transfrmN(low_type *)+0x1230>
        1bbd14:	e59d0068 	ldr	r0, [sp, #104]
        1bbd18:	e3500002 	cmp	r0, #2	; 0x2
        1bbd1c:	c59d0064 	ldrgt	r0, [sp, #100]
        1bbd20:	c3500002 	cmpgt	r0, #2	; 0x2
        1bbd24:	dafffe0d 	ble	1bb560 <transfrmN(low_type *)+0xa68>
        1bbd28:	e59d10c0 	ldr	r1, [sp, #192]
        1bbd2c:	e15100ca 	cmp	r1, sl, asr #1
        1bbd30:	aa000008 	bge	1bbd58 <transfrmN(low_type *)+0x1260>
        1bbd34:	e59800e6 	ldr	r0, [r8, #230]
        1bbd38:	e1a00840 	mov	r0, r0, asr #16
        1bbd3c:	e3500037 	cmp	r0, #55	; 0x37
        1bbd40:	ba000004 	blt	1bbd58 <transfrmN(low_type *)+0x1260>
        1bbd44:	e59d0068 	ldr	r0, [sp, #104]
        1bbd48:	e3500001 	cmp	r0, #1	; 0x1
        1bbd4c:	c59d0064 	ldrgt	r0, [sp, #100]
        1bbd50:	c3500001 	cmpgt	r0, #1	; 0x1
        1bbd54:	dafffe01 	ble	1bb560 <transfrmN(low_type *)+0xa68>
        1bbd58:	e28d1070 	add	r1, sp, #112	; 0x70
        1bbd5c:	e8910003 	ldmia	r1, {r0, r1}
        1bbd60:	e0810000 	add	r0, r1, r0
        1bbd64:	e3500006 	cmp	r0, #6	; 0x6
        1bbd68:	ca00003f 	bgt	1bbe6c <transfrmN(low_type *)+0x1374>
        1bbd6c:	e59d0050 	ldr	r0, [sp, #80]
        1bbd70:	e2800002 	add	r0, r0, #2	; 0x2
        1bbd74:	e59d1050 	ldr	r1, [sp, #80]
        1bbd78:	e0410140 	sub	r0, r1, r0, asr #2
        1bbd7c:	e59d6088 	ldr	r6, [sp, #136]
        1bbd80:	e1500006 	cmp	r0, r6
        1bbd84:	aa000038 	bge	1bbe6c <transfrmN(low_type *)+0x1374>
        1bbd88:	e59d0050 	ldr	r0, [sp, #80]
        1bbd8c:	e3500000 	cmp	r0, #0	; 0x0
        1bbd90:	da000035 	ble	1bbe6c <transfrmN(low_type *)+0x1374>
        1bbd94:	e2861003 	add	r1, r6, #3	; 0x3
        1bbd98:	e3a00006 	mov	r0, #6	; 0x6
        1bbd9c:	eb67dae7 	bl	1bb2940 <$__rt_sdiv>
        1bbda0:	e1a08000 	mov	r8, r0
        1bbda4:	e0460080 	sub	r0, r6, r0, lsl #1
        1bbda8:	e58d0088 	str	r0, [sp, #136]
        1bbdac:	e59d0084 	ldr	r0, [sp, #132]
        1bbdb0:	e0800008 	add	r0, r0, r8
        1bbdb4:	e58d0084 	str	r0, [sp, #132]
        1bbdb8:	e59d0080 	ldr	r0, [sp, #128]
        1bbdbc:	e0400008 	sub	r0, r0, r8
        1bbdc0:	e3a06000 	mov	r6, #0	; 0x0
        1bbdc4:	e58d0080 	str	r0, [sp, #128]
        1bbdc8:	e594003c 	ldr	r0, [r4, #60]
        1bbdcc:	e1a00840 	mov	r0, r0, asr #16
        1bbdd0:	e3500000 	cmp	r0, #0	; 0x0
        1bbdd4:	da000024 	ble	1bbe6c <transfrmN(low_type *)+0x1374>
        1bbdd8:	e59d1050 	ldr	r1, [sp, #80]
        1bbddc:	e0810fa1 	add	r0, r1, r1, lsr #31
        1bbde0:	e1a000c0 	mov	r0, r0, asr #1
        1bbde4:	e58d00bc 	str	r0, [sp, #188]
        1bbde8:	e5940038 	ldr	r0, [r4, #56]
        1bbdec:	e7900086 	ldr	r0, [r0, r6, lsl #1]
        1bbdf0:	e1a00840 	mov	r0, r0, asr #16
        1bbdf4:	e3700001 	cmn	r0, #1	; 0x1
        1bbdf8:	0a000017 	beq	1bbe5c <transfrmN(low_type *)+0x1364>
        1bbdfc:	e795a086 	ldr	sl, [r5, r6, lsl #1]
        1bbe00:	e1a0a84a 	mov	sl, sl, asr #16
        1bbe04:	e7990086 	ldr	r0, [r9, r6, lsl #1]
        1bbe08:	e1a00840 	mov	r0, r0, asr #16
        1bbe0c:	e04a0000 	sub	r0, sl, r0
        1bbe10:	e0010890 	mul	r1, r0, r8
        1bbe14:	e59d00bc 	ldr	r0, [sp, #188]
        1bbe18:	e0811000 	add	r1, r1, r0
        1bbe1c:	e59d0050 	ldr	r0, [sp, #80]
        1bbe20:	eb67dac6 	bl	1bb2940 <$__rt_sdiv>
        1bbe24:	e1500008 	cmp	r0, r8
        1bbe28:	c1a00008 	movgt	r0, r8
        1bbe2c:	e04a1000 	sub	r1, sl, r0
        1bbe30:	e0852086 	add	r2, r5, r6, lsl #1
        1bbe34:	e5c21001 	strb	r1, [r2, #1]
        1bbe38:	e1a01441 	mov	r1, r1, asr #8
        1bbe3c:	e5c21000 	strb	r1, [r2]
        1bbe40:	e7991086 	ldr	r1, [r9, r6, lsl #1]
        1bbe44:	e1a01821 	mov	r1, r1, lsr #16
        1bbe48:	e0810000 	add	r0, r1, r0
        1bbe4c:	e0891086 	add	r1, r9, r6, lsl #1
        1bbe50:	e5c10001 	strb	r0, [r1, #1]
        1bbe54:	e1a00440 	mov	r0, r0, asr #8
        1bbe58:	e5c10000 	strb	r0, [r1]
        1bbe5c:	e2866001 	add	r6, r6, #1	; 0x1
        1bbe60:	e594003c 	ldr	r0, [r4, #60]
        1bbe64:	e1560840 	cmp	r6, r0, asr #16
        1bbe68:	baffffde 	blt	1bbde8 <transfrmN(low_type *)+0x12f0>
        1bbe6c:	e59d0088 	ldr	r0, [sp, #136]
        1bbe70:	e350000c 	cmp	r0, #12	; 0xc
        1bbe74:	aa000025 	bge	1bbf10 <transfrmN(low_type *)+0x1418>
        1bbe78:	e2877014 	add	r7, r7, #20	; 0x14
        1bbe7c:	e3a00000 	mov	r0, #0	; 0x0
        1bbe80:	e594103c 	ldr	r1, [r4, #60]
        1bbe84:	e1a01841 	mov	r1, r1, asr #16
        1bbe88:	e3510000 	cmp	r1, #0	; 0x0
        1bbe8c:	da000016 	ble	1bbeec <transfrmN(low_type *)+0x13f4>
        1bbe90:	e5941038 	ldr	r1, [r4, #56]
        1bbe94:	e7911080 	ldr	r1, [r1, r0, lsl #1]
        1bbe98:	e1a01841 	mov	r1, r1, asr #16
        1bbe9c:	e3710001 	cmn	r1, #1	; 0x1
        1bbea0:	0a00000d 	beq	1bbedc <transfrmN(low_type *)+0x13e4>
        1bbea4:	e7951080 	ldr	r1, [r5, r0, lsl #1]
        1bbea8:	e1a01821 	mov	r1, r1, lsr #16
        1bbeac:	e2811006 	add	r1, r1, #6	; 0x6
        1bbeb0:	e0852080 	add	r2, r5, r0, lsl #1
        1bbeb4:	e5c21001 	strb	r1, [r2, #1]
        1bbeb8:	e1a01441 	mov	r1, r1, asr #8
        1bbebc:	e5c21000 	strb	r1, [r2]
        1bbec0:	e7991080 	ldr	r1, [r9, r0, lsl #1]
        1bbec4:	e1a01821 	mov	r1, r1, lsr #16
        1bbec8:	e2411006 	sub	r1, r1, #6	; 0x6
        1bbecc:	e0892080 	add	r2, r9, r0, lsl #1
        1bbed0:	e5c21001 	strb	r1, [r2, #1]
        1bbed4:	e1a01441 	mov	r1, r1, asr #8
        1bbed8:	e5c21000 	strb	r1, [r2]
        1bbedc:	e2800001 	add	r0, r0, #1	; 0x1
        1bbee0:	e594103c 	ldr	r1, [r4, #60]
        1bbee4:	e1500841 	cmp	r0, r1, asr #16
        1bbee8:	baffffe8 	blt	1bbe90 <transfrmN(low_type *)+0x1398>
        1bbeec:	e59d0088 	ldr	r0, [sp, #136]
        1bbef0:	e280000c 	add	r0, r0, #12	; 0xc
        1bbef4:	e58d0088 	str	r0, [sp, #136]
        1bbef8:	e59d0084 	ldr	r0, [sp, #132]
        1bbefc:	e2400006 	sub	r0, r0, #6	; 0x6
        1bbf00:	e58d0084 	str	r0, [sp, #132]
        1bbf04:	e59d0080 	ldr	r0, [sp, #128]
        1bbf08:	e2800006 	add	r0, r0, #6	; 0x6
        1bbf0c:	e58d0080 	str	r0, [sp, #128]
        1bbf10:	e5940000 	ldr	r0, [r4]
        1bbf14:	e5d000ae 	ldrb	r0, [r0, #174]
        1bbf18:	e3300000 	teq	r0, #0	; 0x0
        1bbf1c:	0a000017 	beq	1bbf80 <transfrmN(low_type *)+0x1488>
        1bbf20:	e3a00000 	mov	r0, #0	; 0x0
        1bbf24:	e594103c 	ldr	r1, [r4, #60]
        1bbf28:	e1a01841 	mov	r1, r1, asr #16
        1bbf2c:	e3510000 	cmp	r1, #0	; 0x0
        1bbf30:	da000012 	ble	1bbf80 <transfrmN(low_type *)+0x1488>
        1bbf34:	e7951080 	ldr	r1, [r5, r0, lsl #1]
        1bbf38:	e1a01841 	mov	r1, r1, asr #16
        1bbf3c:	e7992080 	ldr	r2, [r9, r0, lsl #1]
        1bbf40:	e1a02842 	mov	r2, r2, asr #16
        1bbf44:	e0413002 	sub	r3, r1, r2
        1bbf48:	e59d1088 	ldr	r1, [sp, #136]
        1bbf4c:	e281c002 	add	ip, r1, #2	; 0x2
        1bbf50:	e153014c 	cmp	r3, ip, asr #2
        1bbf54:	da000005 	ble	1bbf70 <transfrmN(low_type *)+0x1478>
        1bbf58:	e2811004 	add	r1, r1, #4	; 0x4
        1bbf5c:	e08211c1 	add	r1, r2, r1, asr #3
        1bbf60:	e0892080 	add	r2, r9, r0, lsl #1
        1bbf64:	e5c21001 	strb	r1, [r2, #1]
        1bbf68:	e1a01441 	mov	r1, r1, asr #8
        1bbf6c:	e5c21000 	strb	r1, [r2]
        1bbf70:	e2800001 	add	r0, r0, #1	; 0x1
        1bbf74:	e594103c 	ldr	r1, [r4, #60]
        1bbf78:	e1500841 	cmp	r0, r1, asr #16
        1bbf7c:	baffffec 	blt	1bbf34 <transfrmN(low_type *)+0x143c>
        1bbf80:	e5940000 	ldr	r0, [r4]
        1bbf84:	e5900094 	ldr	r0, [r0, #148]
        1bbf88:	e1a00820 	mov	r0, r0, lsr #16
        1bbf8c:	e3300020 	teq	r0, #32	; 0x20
        1bbf90:	e3a06000 	mov	r6, #0	; 0x0
        1bbf94:	e594003c 	ldr	r0, [r4, #60]
        1bbf98:	e1a00840 	mov	r0, r0, asr #16
        1bbf9c:	1a00001c 	bne	1bc014 <transfrmN(low_type *)+0x151c>
        1bbfa0:	e3500000 	cmp	r0, #0	; 0x0
        1bbfa4:	da000053 	ble	1bc0f8 <transfrmN(low_type *)+0x1600>
        1bbfa8:	e5948038 	ldr	r8, [r4, #56]
        1bbfac:	e7981086 	ldr	r1, [r8, r6, lsl #1]
        1bbfb0:	e1a01841 	mov	r1, r1, asr #16
        1bbfb4:	e3710001 	cmn	r1, #1	; 0x1
        1bbfb8:	0a000010 	beq	1bc000 <transfrmN(low_type *)+0x1508>
        1bbfbc:	e7990086 	ldr	r0, [r9, r6, lsl #1]
        1bbfc0:	e1a00840 	mov	r0, r0, asr #16
        1bbfc4:	e0411000 	sub	r1, r1, r0
        1bbfc8:	e0811101 	add	r1, r1, r1, lsl #2
        1bbfcc:	e1a01201 	mov	r1, r1, lsl #4
        1bbfd0:	e7952086 	ldr	r2, [r5, r6, lsl #1]
        1bbfd4:	e1a02842 	mov	r2, r2, asr #16
        1bbfd8:	e0420000 	sub	r0, r2, r0
        1bbfdc:	e3500001 	cmp	r0, #1	; 0x1
        1bbfe0:	b3a00001 	movlt	r0, #1	; 0x1
        1bbfe4:	eb67da55 	bl	1bb2940 <$__rt_sdiv>
        1bbfe8:	e240006a 	sub	r0, r0, #106	; 0x6a
        1bbfec:	e2800b0a 	add	r0, r0, #10240	; 0x2800
        1bbff0:	e0881086 	add	r1, r8, r6, lsl #1
        1bbff4:	e5c10001 	strb	r0, [r1, #1]
        1bbff8:	e1a00440 	mov	r0, r0, asr #8
        1bbffc:	e5c10000 	strb	r0, [r1]
        1bc000:	e2866001 	add	r6, r6, #1	; 0x1
        1bc004:	e594003c 	ldr	r0, [r4, #60]
        1bc008:	e1560840 	cmp	r6, r0, asr #16
        1bc00c:	baffffe5 	blt	1bbfa8 <transfrmN(low_type *)+0x14b0>
        1bc010:	ea000038 	b	1bc0f8 <transfrmN(low_type *)+0x1600>
        1bc014:	e3500000 	cmp	r0, #0	; 0x0
        1bc018:	da000036 	ble	1bc0f8 <transfrmN(low_type *)+0x1600>
        1bc01c:	e5948038 	ldr	r8, [r4, #56]
        1bc020:	e7981086 	ldr	r1, [r8, r6, lsl #1]
        1bc024:	e1a01841 	mov	r1, r1, asr #16
        1bc028:	e3710001 	cmn	r1, #1	; 0x1
        1bc02c:	0a00002d 	beq	1bc0e8 <transfrmN(low_type *)+0x15f0>
        1bc030:	e7950086 	ldr	r0, [r5, r6, lsl #1]
        1bc034:	e1a00840 	mov	r0, r0, asr #16
        1bc038:	e1510000 	cmp	r1, r0
        1bc03c:	ca00000d 	bgt	1bc078 <transfrmN(low_type *)+0x1580>
        1bc040:	e7992086 	ldr	r2, [r9, r6, lsl #1]
        1bc044:	e1a02842 	mov	r2, r2, asr #16
        1bc048:	e1510002 	cmp	r1, r2
        1bc04c:	ba000009 	blt	1bc078 <transfrmN(low_type *)+0x1580>
        1bc050:	e0411002 	sub	r1, r1, r2
        1bc054:	e0811101 	add	r1, r1, r1, lsl #2
        1bc058:	e1a01201 	mov	r1, r1, lsl #4
        1bc05c:	e0400002 	sub	r0, r0, r2
        1bc060:	e3500001 	cmp	r0, #1	; 0x1
        1bc064:	ba00001d 	blt	1bc0e0 <transfrmN(low_type *)+0x15e8>
        1bc068:	eb67da34 	bl	1bb2940 <$__rt_sdiv>
        1bc06c:	e240006a 	sub	r0, r0, #106	; 0x6a
        1bc070:	e2800b0a 	add	r0, r0, #10240	; 0x2800
        1bc074:	ea00000a 	b	1bc0a4 <transfrmN(low_type *)+0x15ac>
        1bc078:	e1510000 	cmp	r1, r0
        1bc07c:	da00000d 	ble	1bc0b8 <transfrmN(low_type *)+0x15c0>
        1bc080:	e0410000 	sub	r0, r1, r0
        1bc084:	e0801100 	add	r1, r0, r0, lsl #2
        1bc088:	e1a01201 	mov	r1, r1, lsl #4
        1bc08c:	e59d0088 	ldr	r0, [sp, #136]
        1bc090:	e3500001 	cmp	r0, #1	; 0x1
        1bc094:	b3a00001 	movlt	r0, #1	; 0x1
        1bc098:	eb67da28 	bl	1bb2940 <$__rt_sdiv>
        1bc09c:	e240001a 	sub	r0, r0, #26	; 0x1a
        1bc0a0:	e2800b0a 	add	r0, r0, #10240	; 0x2800
        1bc0a4:	e0881086 	add	r1, r8, r6, lsl #1
        1bc0a8:	e5c10001 	strb	r0, [r1, #1]
        1bc0ac:	e1a00440 	mov	r0, r0, asr #8
        1bc0b0:	e5c10000 	strb	r0, [r1]
        1bc0b4:	ea00000b 	b	1bc0e8 <transfrmN(low_type *)+0x15f0>
        1bc0b8:	e7990086 	ldr	r0, [r9, r6, lsl #1]
        1bc0bc:	e1a00840 	mov	r0, r0, asr #16
        1bc0c0:	e1510000 	cmp	r1, r0
        1bc0c4:	aa000007 	bge	1bc0e8 <transfrmN(low_type *)+0x15f0>
        1bc0c8:	e0410000 	sub	r0, r1, r0
        1bc0cc:	e0801100 	add	r1, r0, r0, lsl #2
        1bc0d0:	e1a01201 	mov	r1, r1, lsl #4
        1bc0d4:	e59d0088 	ldr	r0, [sp, #136]
        1bc0d8:	e3500001 	cmp	r0, #1	; 0x1
        1bc0dc:	aaffffe1 	bge	1bc068 <transfrmN(low_type *)+0x1570>
        1bc0e0:	e3a00001 	mov	r0, #1	; 0x1
        1bc0e4:	eaffffdf 	b	1bc068 <transfrmN(low_type *)+0x1570>
        1bc0e8:	e2866001 	add	r6, r6, #1	; 0x1
        1bc0ec:	e594003c 	ldr	r0, [r4, #60]
        1bc0f0:	e1560840 	cmp	r6, r0, asr #16
        1bc0f4:	baffffc8 	blt	1bc01c <transfrmN(low_type *)+0x1524>
        1bc0f8:	e3a06000 	mov	r6, #0	; 0x0
        1bc0fc:	e594003c 	ldr	r0, [r4, #60]
        1bc100:	e1a00840 	mov	r0, r0, asr #16
        1bc104:	e3500000 	cmp	r0, #0	; 0x0
        1bc108:	da000018 	ble	1bc170 <transfrmN(low_type *)+0x1678>
        1bc10c:	e5940038 	ldr	r0, [r4, #56]
        1bc110:	e7900086 	ldr	r0, [r0, r6, lsl #1]
        1bc114:	e1a00840 	mov	r0, r0, asr #16
        1bc118:	e3700001 	cmn	r0, #1	; 0x1
        1bc11c:	0a00000f 	beq	1bc160 <transfrmN(low_type *)+0x1668>
        1bc120:	e5948034 	ldr	r8, [r4, #52]
        1bc124:	e7981086 	ldr	r1, [r8, r6, lsl #1]
        1bc128:	e1a01841 	mov	r1, r1, asr #16
        1bc12c:	e5940074 	ldr	r0, [r4, #116]
        1bc130:	e0410840 	sub	r0, r1, r0, asr #16
        1bc134:	e0801100 	add	r1, r0, r0, lsl #2
        1bc138:	e1a01201 	mov	r1, r1, lsl #4
        1bc13c:	e59d0088 	ldr	r0, [sp, #136]
        1bc140:	e3500001 	cmp	r0, #1	; 0x1
        1bc144:	b3a00001 	movlt	r0, #1	; 0x1
        1bc148:	eb67d9fc 	bl	1bb2940 <$__rt_sdiv>
        1bc14c:	e2800050 	add	r0, r0, #80	; 0x50
        1bc150:	e0881086 	add	r1, r8, r6, lsl #1
        1bc154:	e5c10001 	strb	r0, [r1, #1]
        1bc158:	e1a00440 	mov	r0, r0, asr #8
        1bc15c:	e5c10000 	strb	r0, [r1]
        1bc160:	e2866001 	add	r6, r6, #1	; 0x1
        1bc164:	e594003c 	ldr	r0, [r4, #60]
        1bc168:	e1560840 	cmp	r6, r0, asr #16
        1bc16c:	baffffe6 	blt	1bc10c <transfrmN(low_type *)+0x1614>
        1bc170:	e59d0088 	ldr	r0, [sp, #136]
        1bc174:	e5941000 	ldr	r1, [r4]
        1bc178:	e5c100eb 	strb	r0, [r1, #235]
        1bc17c:	e1a00440 	mov	r0, r0, asr #8
        1bc180:	e5c100ea 	strb	r0, [r1, #234]
        1bc184:	e59d0080 	ldr	r0, [sp, #128]
        1bc188:	e5941000 	ldr	r1, [r4]
        1bc18c:	e5c100ed 	strb	r0, [r1, #237]
        1bc190:	e1a00440 	mov	r0, r0, asr #8
        1bc194:	e5c100ec 	strb	r0, [r1, #236]
        1bc198:	e3a06000 	mov	r6, #0	; 0x0
        1bc19c:	e5940000 	ldr	r0, [r4]
        1bc1a0:	e5c060f1 	strb	r6, [r0, #241]
        1bc1a4:	e5c060f0 	strb	r6, [r0, #240]
        1bc1a8:	e5940000 	ldr	r0, [r4]
        1bc1ac:	e5c060ef 	strb	r6, [r0, #239]
        1bc1b0:	e5c060ee 	strb	r6, [r0, #238]
        1bc1b4:	e3a0302d 	mov	r3, #45	; 0x2d
        1bc1b8:	e3570064 	cmp	r7, #100	; 0x64
        1bc1bc:	aa000006 	bge	1bc1dc <transfrmN(low_type *)+0x16e4>
        1bc1c0:	e59d0064 	ldr	r0, [sp, #100]
        1bc1c4:	e3500001 	cmp	r0, #1	; 0x1
        1bc1c8:	a59d0068 	ldrge	r0, [sp, #104]
        1bc1cc:	a3500001 	cmpge	r0, #1	; 0x1
        1bc1d0:	a5940000 	ldrge	r0, [r4]
        1bc1d4:	a5c030ef 	strgeb	r3, [r0, #239]
        1bc1d8:	a5c060ee 	strgeb	r6, [r0, #238]
        1bc1dc:	e3570064 	cmp	r7, #100	; 0x64
        1bc1e0:	aa000008 	bge	1bc208 <transfrmN(low_type *)+0x1710>
        1bc1e4:	e59d0064 	ldr	r0, [sp, #100]
        1bc1e8:	e3500002 	cmp	r0, #2	; 0x2
        1bc1ec:	a59d0068 	ldrge	r0, [sp, #104]
        1bc1f0:	a3500002 	cmpge	r0, #2	; 0x2
        1bc1f4:	ba000003 	blt	1bc208 <transfrmN(low_type *)+0x1710>
        1bc1f8:	e3a0c032 	mov	ip, #50	; 0x32
        1bc1fc:	e5940000 	ldr	r0, [r4]
        1bc200:	e5c0c0ef 	strb	ip, [r0, #239]
        1bc204:	e5c060ee 	strb	r6, [r0, #238]
        1bc208:	e3a02037 	mov	r2, #55	; 0x37
        1bc20c:	e357000a 	cmp	r7, #10	; 0xa
        1bc210:	aa000006 	bge	1bc230 <transfrmN(low_type *)+0x1738>
        1bc214:	e59d0064 	ldr	r0, [sp, #100]
        1bc218:	e3500003 	cmp	r0, #3	; 0x3
        1bc21c:	a59d0068 	ldrge	r0, [sp, #104]
        1bc220:	a3500003 	cmpge	r0, #3	; 0x3
        1bc224:	a5940000 	ldrge	r0, [r4]
        1bc228:	a5c020ef 	strgeb	r2, [r0, #239]
        1bc22c:	a5c060ee 	strgeb	r6, [r0, #238]
        1bc230:	e3a0104b 	mov	r1, #75	; 0x4b
        1bc234:	e357000a 	cmp	r7, #10	; 0xa
        1bc238:	aa000006 	bge	1bc258 <transfrmN(low_type *)+0x1760>
        1bc23c:	e59d0064 	ldr	r0, [sp, #100]
        1bc240:	e3500004 	cmp	r0, #4	; 0x4
        1bc244:	a59d0068 	ldrge	r0, [sp, #104]
        1bc248:	a3500004 	cmpge	r0, #4	; 0x4
        1bc24c:	a5940000 	ldrge	r0, [r4]
        1bc250:	a5c010ef 	strgeb	r1, [r0, #239]
        1bc254:	a5c060ee 	strgeb	r6, [r0, #238]
        1bc258:	e3a0005a 	mov	r0, #90	; 0x5a
        1bc25c:	e3370000 	teq	r7, #0	; 0x0
        1bc260:	1a000007 	bne	1bc284 <transfrmN(low_type *)+0x178c>
        1bc264:	e59dc064 	ldr	ip, [sp, #100]
        1bc268:	e35c0005 	cmp	ip, #5	; 0x5
        1bc26c:	a59dc068 	ldrge	ip, [sp, #104]
        1bc270:	a35c0005 	cmpge	ip, #5	; 0x5
        1bc274:	a594c000 	ldrge	ip, [r4]
        1bc278:	a5cc00ef 	strgeb	r0, [ip, #239]
        1bc27c:	a5cc60ee 	strgeb	r6, [ip, #238]
        1bc280:	ea000001 	b	1bc28c <transfrmN(low_type *)+0x1794>
        1bc284:	e3570064 	cmp	r7, #100	; 0x64
        1bc288:	aa000004 	bge	1bc2a0 <transfrmN(low_type *)+0x17a8>
        1bc28c:	e59dc068 	ldr	ip, [sp, #104]
        1bc290:	e35c0001 	cmp	ip, #1	; 0x1
        1bc294:	a594c000 	ldrge	ip, [r4]
        1bc298:	a5cc30f1 	strgeb	r3, [ip, #241]
        1bc29c:	a5cc60f0 	strgeb	r6, [ip, #240]
        1bc2a0:	e3570064 	cmp	r7, #100	; 0x64
        1bc2a4:	aa000006 	bge	1bc2c4 <transfrmN(low_type *)+0x17cc>
        1bc2a8:	e59d3068 	ldr	r3, [sp, #104]
        1bc2ac:	e3530002 	cmp	r3, #2	; 0x2
        1bc2b0:	ba000003 	blt	1bc2c4 <transfrmN(low_type *)+0x17cc>
        1bc2b4:	e3a0c032 	mov	ip, #50	; 0x32
        1bc2b8:	e5943000 	ldr	r3, [r4]
        1bc2bc:	e5c3c0f1 	strb	ip, [r3, #241]
        1bc2c0:	e5c360f0 	strb	r6, [r3, #240]
        1bc2c4:	e357000a 	cmp	r7, #10	; 0xa
        1bc2c8:	aa000004 	bge	1bc2e0 <transfrmN(low_type *)+0x17e8>
        1bc2cc:	e59d3068 	ldr	r3, [sp, #104]
        1bc2d0:	e3530003 	cmp	r3, #3	; 0x3
        1bc2d4:	a5943000 	ldrge	r3, [r4]
        1bc2d8:	a5c320f1 	strgeb	r2, [r3, #241]
        1bc2dc:	a5c360f0 	strgeb	r6, [r3, #240]
        1bc2e0:	e357000a 	cmp	r7, #10	; 0xa
        1bc2e4:	aa000004 	bge	1bc2fc <transfrmN(low_type *)+0x1804>
        1bc2e8:	e59d2068 	ldr	r2, [sp, #104]
        1bc2ec:	e3520004 	cmp	r2, #4	; 0x4
        1bc2f0:	a5942000 	ldrge	r2, [r4]
        1bc2f4:	a5c210f1 	strgeb	r1, [r2, #241]
        1bc2f8:	a5c260f0 	strgeb	r6, [r2, #240]
        1bc2fc:	e3370000 	teq	r7, #0	; 0x0
        1bc300:	1a000004 	bne	1bc318 <transfrmN(low_type *)+0x1820>
        1bc304:	e59d1068 	ldr	r1, [sp, #104]
        1bc308:	e3510005 	cmp	r1, #5	; 0x5
        1bc30c:	a5941000 	ldrge	r1, [r4]
        1bc310:	a5c100f1 	strgeb	r0, [r1, #241]
        1bc314:	a5c160f0 	strgeb	r6, [r1, #240]
        1bc318:	e3a07000 	mov	r7, #0	; 0x0
        1bc31c:	e3a08000 	mov	r8, #0	; 0x0
        1bc320:	e3a0a000 	mov	sl, #0	; 0x0
        1bc324:	e594003c 	ldr	r0, [r4, #60]
        1bc328:	e1a00840 	mov	r0, r0, asr #16
        1bc32c:	e3500000 	cmp	r0, #0	; 0x0
        1bc330:	da00000f 	ble	1bc374 <transfrmN(low_type *)+0x187c>
        1bc334:	e5940038 	ldr	r0, [r4, #56]
        1bc338:	e7900087 	ldr	r0, [r0, r7, lsl #1]
        1bc33c:	e1a00840 	mov	r0, r0, asr #16
        1bc340:	e3700001 	cmn	r0, #1	; 0x1
        1bc344:	0a000006 	beq	1bc364 <transfrmN(low_type *)+0x186c>
        1bc348:	e7951087 	ldr	r1, [r5, r7, lsl #1]
        1bc34c:	e1a01841 	mov	r1, r1, asr #16
        1bc350:	e59d0080 	ldr	r0, [sp, #128]
        1bc354:	e0410000 	sub	r0, r1, r0
        1bc358:	eb62cd19 	bl	1a6f7c4 <$HWRAbs(int)>
        1bc35c:	e0808008 	add	r8, r0, r8
        1bc360:	e28aa001 	add	sl, sl, #1	; 0x1
        1bc364:	e2877001 	add	r7, r7, #1	; 0x1
        1bc368:	e594003c 	ldr	r0, [r4, #60]
        1bc36c:	e1570840 	cmp	r7, r0, asr #16
        1bc370:	baffffef 	blt	1bc334 <transfrmN(low_type *)+0x183c>
        1bc374:	e1a01008 	mov	r1, r8
        1bc378:	e1a0000a 	mov	r0, sl
        1bc37c:	eb67d96f 	bl	1bb2940 <$__rt_sdiv>
        1bc380:	e1a07000 	mov	r7, r0
        1bc384:	e3a00002 	mov	r0, #2	; 0x2
        1bc388:	e59d1088 	ldr	r1, [sp, #136]
        1bc38c:	e0801081 	add	r1, r0, r1, lsl #1
        1bc390:	e3a00005 	mov	r0, #5	; 0x5
        1bc394:	eb67d969 	bl	1bb2940 <$__rt_sdiv>
        1bc398:	e1500007 	cmp	r0, r7
        1bc39c:	ca000006 	bgt	1bc3bc <transfrmN(low_type *)+0x18c4>
        1bc3a0:	e5940000 	ldr	r0, [r4]
        1bc3a4:	e59010f0 	ldr	r1, [r0, #240]
        1bc3a8:	e1a01841 	mov	r1, r1, asr #16
        1bc3ac:	e3510032 	cmp	r1, #50	; 0x32
        1bc3b0:	a3a0c032 	movge	ip, #50	; 0x32
        1bc3b4:	a5c0c0f1 	strgeb	ip, [r0, #241]
        1bc3b8:	a5c060f0 	strgeb	r6, [r0, #240]
        1bc3bc:	e5940000 	ldr	r0, [r4]
        1bc3c0:	e59010e8 	ldr	r1, [r0, #232]
        1bc3c4:	e1a01841 	mov	r1, r1, asr #16
        1bc3c8:	e3310064 	teq	r1, #100	; 0x64
        1bc3cc:	059010e6 	ldreq	r1, [r0, #230]
        1bc3d0:	01a01841 	moveq	r1, r1, asr #16
        1bc3d4:	03310064 	teqeq	r1, #100	; 0x64
        1bc3d8:	1a000004 	bne	1bc3f0 <transfrmN(low_type *)+0x18f8>
        1bc3dc:	e5c060f1 	strb	r6, [r0, #241]
        1bc3e0:	e5c060f0 	strb	r6, [r0, #240]
        1bc3e4:	e5940000 	ldr	r0, [r4]
        1bc3e8:	e5c060ef 	strb	r6, [r0, #239]
        1bc3ec:	e5c060ee 	strb	r6, [r0, #238]
        1bc3f0:	e1a03005 	mov	r3, r5
        1bc3f4:	e92d0008 	stmdb	sp!, {r3}
        1bc3f8:	e1a03009 	mov	r3, r9
        1bc3fc:	e1a02004 	mov	r2, r4
        1bc400:	e59d0030 	ldr	r0, [sp, #48]
        1bc404:	e59d105c 	ldr	r1, [sp, #92]
        1bc408:	eb658acc 	bl	1b1ef40 <$FillRCNB(short *, int, low_type *, int, int)>
        1bc40c:	e28dd004 	add	sp, sp, #4	; 0x4
        1bc410:	e3300001 	teq	r0, #1	; 0x1
        1bc414:	13a00000 	movne	r0, #0	; 0x0
        1bc418:	158d00b4 	strne	r0, [sp, #180]
        1bc41c:	e59d00b8 	ldr	r0, [sp, #184]
        1bc420:	e3300000 	teq	r0, #0	; 0x0
        1bc424:	159d00b8 	ldrne	r0, [sp, #184]
        1bc428:	1b62cce4 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        1bc42c:	e59d00b4 	ldr	r0, [sp, #180]
        1bc430:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TearDownScalingBottlenecks(GrafPort *)
 * Address: 001c791c
 */
TearDownScalingBottlenecks(GrafPort *) {
    /*
        1c791c:	e1a0c00d 	mov	ip, sp
        1c7920:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1c7924:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c7928:	e1a04000 	mov	r4, r0
        1c792c:	e5900040 	ldr	r0, [r0, #64]
        1c7930:	eb6865df 	bl	1be10b4 <$DisposPtr>
        1c7934:	e3a00000 	mov	r0, #0	; 0x0
        1c7938:	e5a40040 	str	r0, [r4, #64]!
        1c793c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TransferVerbInfo(TDotPrinter *, unsigned char, PixelMap ***)
 * Address: 001c7ff8
 */
TransferVerbInfo(TDotPrinter *, unsigned char, PixelMap ***) {
    /*
        1c7ff8:	e1a0c00d 	mov	ip, sp
        1c7ffc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1c8000:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c8004:	e1a04000 	mov	r4, r0
        1c8008:	e1a05002 	mov	r5, r2
        1c800c:	e20160ff 	and	r6, r1, #255	; 0xff
        1c8010:	eb65e422 	bl	1b410a0 <TPrinter::$GetPort(void)>
        1c8014:	e1a08000 	mov	r8, r0
        1c8018:	e2847f5d 	add	r7, r4, #372	; 0x174
        1c801c:	e3560004 	cmp	r6, #4	; 0x4
        1c8020:	908ff106 	addls	pc, pc, r6, lsl #2
        1c8024:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1c8028:	ea000003 	b	1c803c <TransferVerbInfo(TDotPrinter *, unsigned char, PixelMap ***)+0x44>
        1c802c:	ea00000e 	b	1c806c <TransferVerbInfo(TDotPrinter *, unsigned char, PixelMap ***)+0x74>
        1c8030:	ea000015 	b	1c808c <TransferVerbInfo(TDotPrinter *, unsigned char, PixelMap ***)+0x94>
        1c8034:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1c8038:	ea000010 	b	1c8080 <TransferVerbInfo(TDotPrinter *, unsigned char, PixelMap ***)+0x88>
        1c803c:	e2879038 	add	r9, r7, #56	; 0x38
        1c8040:	e5980038 	ldr	r0, [r8, #56]
        1c8044:	e5890000 	str	r0, [r9]
        1c8048:	e1a00004 	mov	r0, r4
        1c804c:	eb65e415 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        1c8050:	e2806008 	add	r6, r0, #8	; 0x8
        1c8054:	e1a00004 	mov	r0, r4
        1c8058:	eb65e412 	bl	1b410a8 <TPrinter::$GetScalerInfo(void)>
        1c805c:	e1a01000 	mov	r1, r0
        1c8060:	e1a00009 	mov	r0, r9
        1c8064:	e1a02006 	mov	r2, r6
        1c8068:	eb662e53 	bl	1b539bc <$ScalePt__FP5PointP4RectT2>
        1c806c:	e598003c 	ldr	r0, [r8, #60]
        1c8070:	e1a00820 	mov	r0, r0, lsr #16
        1c8074:	e5c7003d 	strb	r0, [r7, #61]
        1c8078:	e1a00440 	mov	r0, r0, asr #8
        1c807c:	e5c7003c 	strb	r0, [r7, #60]
        1c8080:	e5b8002c 	ldr	r0, [r8, #44]!
        1c8084:	e5a7002c 	str	r0, [r7, #44]!
        1c8088:	ea000001 	b	1c8094 <TransferVerbInfo(TDotPrinter *, unsigned char, PixelMap ***)+0x9c>
        1c808c:	e5b80030 	ldr	r0, [r8, #48]!
        1c8090:	e5a70030 	str	r0, [r7, #48]!
        1c8094:	e5850000 	str	r0, [r5]
        1c8098:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TransferShape(TDotPrinter *)
 * Address: 001c85dc
 */
TransferShape(TDotPrinter *) {
    /*
        1c85dc:	e92d4010 	stmdb	sp!, {r4, lr}
        1c85e0:	e280ef5d 	add	lr, r0, #372	; 0x174
        1c85e4:	e28000a8 	add	r0, r0, #168	; 0xa8
        1c85e8:	e5901068 	ldr	r1, [r0, #104]
        1c85ec:	e1a01141 	mov	r1, r1, asr #2
        1c85f0:	e59ec03c 	ldr	ip, [lr, #60]
        1c85f4:	e1a0c84c 	mov	ip, ip, asr #16
        1c85f8:	e5b0206c 	ldr	r2, [r0, #108]!
        1c85fc:	e5b0301c 	ldr	r3, [r0, #28]!
        1c8600:	e20cc007 	and	ip, ip, #7	; 0x7
        1c8604:	e59e0000 	ldr	r0, [lr]
        1c8608:	e35c0007 	cmp	ip, #7	; 0x7
        1c860c:	908ff10c 	addls	pc, pc, ip, lsl #2
        1c8610:	e8bd8010 	ldmia	sp!, {r4, pc}
        1c8614:	ea000008 	b	1c863c <TransferShape(TDotPrinter *)+0x60>
        1c8618:	ea000014 	b	1c8670 <TransferShape(TDotPrinter *)+0x94>
        1c861c:	ea00001f 	b	1c86a0 <TransferShape(TDotPrinter *)+0xc4>
        1c8620:	ea00002a 	b	1c86d0 <TransferShape(TDotPrinter *)+0xf4>
        1c8624:	ea000036 	b	1c8704 <TransferShape(TDotPrinter *)+0x128>
        1c8628:	ea000042 	b	1c8738 <TransferShape(TDotPrinter *)+0x15c>
        1c862c:	ea00004e 	b	1c876c <TransferShape(TDotPrinter *)+0x190>
        1c8630:	e3510000 	cmp	r1, #0	; 0x0
        1c8634:	d8bd8010 	ldmleia	sp!, {r4, pc}
        1c8638:	ea000057 	b	1c879c <TransferShape(TDotPrinter *)+0x1c0>
        1c863c:	e3510000 	cmp	r1, #0	; 0x0
        1c8640:	d8bd8010 	ldmleia	sp!, {r4, pc}
        1c8644:	e492c004 	ldr	ip, [r2], #4
        1c8648:	e5904000 	ldr	r4, [r0]
        1c864c:	e1c4400c 	bic	r4, r4, ip
        1c8650:	e493e004 	ldr	lr, [r3], #4
        1c8654:	e00ec00c 	and	ip, lr, ip
        1c8658:	e184c00c 	orr	ip, r4, ip
        1c865c:	e2411001 	sub	r1, r1, #1	; 0x1
        1c8660:	e480c004 	str	ip, [r0], #4
        1c8664:	e3510000 	cmp	r1, #0	; 0x0
        1c8668:	cafffff5 	bgt	1c8644 <TransferShape(TDotPrinter *)+0x68>
        1c866c:	e8bd8010 	ldmia	sp!, {r4, pc}
        1c8670:	e3510000 	cmp	r1, #0	; 0x0
        1c8674:	d8bd8010 	ldmleia	sp!, {r4, pc}
        1c8678:	e493e004 	ldr	lr, [r3], #4
        1c867c:	e492c004 	ldr	ip, [r2], #4
        1c8680:	e00ee00c 	and	lr, lr, ip
        1c8684:	e590c000 	ldr	ip, [r0]
        1c8688:	e18ec00c 	orr	ip, lr, ip
        1c868c:	e2411001 	sub	r1, r1, #1	; 0x1
        1c8690:	e480c004 	str	ip, [r0], #4
        1c8694:	e3510000 	cmp	r1, #0	; 0x0
        1c8698:	cafffff6 	bgt	1c8678 <TransferShape(TDotPrinter *)+0x9c>
        1c869c:	e8bd8010 	ldmia	sp!, {r4, pc}
        1c86a0:	e3510000 	cmp	r1, #0	; 0x0
        1c86a4:	d8bd8010 	ldmleia	sp!, {r4, pc}
        1c86a8:	e493e004 	ldr	lr, [r3], #4
        1c86ac:	e492c004 	ldr	ip, [r2], #4
        1c86b0:	e00ec00c 	and	ip, lr, ip
        1c86b4:	e590e000 	ldr	lr, [r0]
        1c86b8:	e02cc00e 	eor	ip, ip, lr
        1c86bc:	e2411001 	sub	r1, r1, #1	; 0x1
        1c86c0:	e480c004 	str	ip, [r0], #4
        1c86c4:	e3510000 	cmp	r1, #0	; 0x0
        1c86c8:	cafffff6 	bgt	1c86a8 <TransferShape(TDotPrinter *)+0xcc>
        1c86cc:	e8bd8010 	ldmia	sp!, {r4, pc}
        1c86d0:	e3510000 	cmp	r1, #0	; 0x0
        1c86d4:	d8bd8010 	ldmleia	sp!, {r4, pc}
        1c86d8:	e493e004 	ldr	lr, [r3], #4
        1c86dc:	e492c004 	ldr	ip, [r2], #4
        1c86e0:	e00ec00c 	and	ip, lr, ip
        1c86e4:	e1e0e00c 	mvn	lr, ip
        1c86e8:	e590c000 	ldr	ip, [r0]
        1c86ec:	e00ec00c 	and	ip, lr, ip
        1c86f0:	e2411001 	sub	r1, r1, #1	; 0x1
        1c86f4:	e480c004 	str	ip, [r0], #4
        1c86f8:	e3510000 	cmp	r1, #0	; 0x0
        1c86fc:	cafffff5 	bgt	1c86d8 <TransferShape(TDotPrinter *)+0xfc>
        1c8700:	e8bd8010 	ldmia	sp!, {r4, pc}
        1c8704:	e3510000 	cmp	r1, #0	; 0x0
        1c8708:	d8bd8010 	ldmleia	sp!, {r4, pc}
        1c870c:	e492c004 	ldr	ip, [r2], #4
        1c8710:	e590e000 	ldr	lr, [r0]
        1c8714:	e1ce400c 	bic	r4, lr, ip
        1c8718:	e493e004 	ldr	lr, [r3], #4
        1c871c:	e1ccc00e 	bic	ip, ip, lr
        1c8720:	e184c00c 	orr	ip, r4, ip
        1c8724:	e2411001 	sub	r1, r1, #1	; 0x1
        1c8728:	e480c004 	str	ip, [r0], #4
        1c872c:	e3510000 	cmp	r1, #0	; 0x0
        1c8730:	cafffff5 	bgt	1c870c <TransferShape(TDotPrinter *)+0x130>
        1c8734:	e8bd8010 	ldmia	sp!, {r4, pc}
        1c8738:	e3510000 	cmp	r1, #0	; 0x0
        1c873c:	d8bd8010 	ldmleia	sp!, {r4, pc}
        1c8740:	e493c004 	ldr	ip, [r3], #4
        1c8744:	e1e0e00c 	mvn	lr, ip
        1c8748:	e592c000 	ldr	ip, [r2]
        1c874c:	e00ec00c 	and	ip, lr, ip
        1c8750:	e590e000 	ldr	lr, [r0]
        1c8754:	e18cc00e 	orr	ip, ip, lr
        1c8758:	e2411001 	sub	r1, r1, #1	; 0x1
        1c875c:	e480c004 	str	ip, [r0], #4
        1c8760:	e3510000 	cmp	r1, #0	; 0x0
        1c8764:	cafffff5 	bgt	1c8740 <TransferShape(TDotPrinter *)+0x164>
        1c8768:	e8bd8010 	ldmia	sp!, {r4, pc}
        1c876c:	e3510000 	cmp	r1, #0	; 0x0
        1c8770:	d8bd8010 	ldmleia	sp!, {r4, pc}
        1c8774:	e493c004 	ldr	ip, [r3], #4
        1c8778:	e592e000 	ldr	lr, [r2]
        1c877c:	e1cec00c 	bic	ip, lr, ip
        1c8780:	e590e000 	ldr	lr, [r0]
        1c8784:	e02cc00e 	eor	ip, ip, lr
        1c8788:	e2411001 	sub	r1, r1, #1	; 0x1
        1c878c:	e480c004 	str	ip, [r0], #4
        1c8790:	e3510000 	cmp	r1, #0	; 0x0
        1c8794:	cafffff6 	bgt	1c8774 <TransferShape(TDotPrinter *)+0x198>
        1c8798:	e8bd8010 	ldmia	sp!, {r4, pc}
        1c879c:	e493c004 	ldr	ip, [r3], #4
        1c87a0:	e1e0e00c 	mvn	lr, ip
        1c87a4:	e592c000 	ldr	ip, [r2]
        1c87a8:	e00ec00c 	and	ip, lr, ip
        1c87ac:	e1e0e00c 	mvn	lr, ip
        1c87b0:	e590c000 	ldr	ip, [r0]
        1c87b4:	e00ec00c 	and	ip, lr, ip
        1c87b8:	e2411001 	sub	r1, r1, #1	; 0x1
        1c87bc:	e480c004 	str	ip, [r0], #4
        1c87c0:	e3510000 	cmp	r1, #0	; 0x0
        1c87c4:	cafffff4 	bgt	1c879c <TransferShape(TDotPrinter *)+0x1c0>
        1c87c8:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TimeToPosition__FlN31
 * Address: 001ca128
 */
void globals::TimeToPosition() {
    /*
        1ca128:	e1a0c00d 	mov	ip, sp
        1ca12c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1ca130:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ca134:	e1a04000 	mov	r4, r0
        1ca138:	e1a07001 	mov	r7, r1
        1ca13c:	e1a06002 	mov	r6, r2
        1ca140:	e1a05003 	mov	r5, r3
        1ca144:	e2801008 	add	r1, r0, #8	; 0x8
        1ca148:	e3a0000f 	mov	r0, #15	; 0xf
        1ca14c:	eb67a1fb 	bl	1bb2940 <$__rt_sdiv>
        1ca150:	e2410008 	sub	r0, r1, #8	; 0x8
        1ca154:	e0444000 	sub	r4, r4, r0
        1ca158:	e0440006 	sub	r0, r4, r6
        1ca15c:	e0010097 	mul	r1, r7, r0
        1ca160:	e1a00005 	mov	r0, r5
        1ca164:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1ca168:	ea67a1f4 	b	1bb2940 <$__rt_sdiv>
    */
}

/**
 * Symbol: TRectToSliderPoly(TRect &)
 * Address: 001cbda4
 */
TRectToSliderPoly(TRect &) {
    /*
        1cbda4:	e1a0c00d 	mov	ip, sp
        1cbda8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1cbdac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cbdb0:	e1a06000 	mov	r6, r0
        1cbdb4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1cbdb8:	e5901006 	ldr	r1, [r0, #6]
        1cbdbc:	e1a01821 	mov	r1, r1, lsr #16
        1cbdc0:	e5900002 	ldr	r0, [r0, #2]
        1cbdc4:	e1a00820 	mov	r0, r0, lsr #16
        1cbdc8:	e0410000 	sub	r0, r1, r0
        1cbdcc:	e1a08800 	mov	r8, r0, lsl #16
        1cbdd0:	e1a08848 	mov	r8, r8, asr #16
        1cbdd4:	eb6616c5 	bl	1b518f0 <$OpenPoly(void)>
        1cbdd8:	e1b0a000 	movs	sl, r0
        1cbddc:	0a000039 	beq	1cbec8 <TRectToSliderPoly(TRect &)+0x124>
        1cbde0:	e5964002 	ldr	r4, [r6, #2]
        1cbde4:	e1a04844 	mov	r4, r4, asr #16
        1cbde8:	e5967006 	ldr	r7, [r6, #6]
        1cbdec:	e1a07847 	mov	r7, r7, asr #16
        1cbdf0:	e5965000 	ldr	r5, [r6]
        1cbdf4:	e1a05845 	mov	r5, r5, asr #16
        1cbdf8:	e5960004 	ldr	r0, [r6, #4]
        1cbdfc:	e1a00820 	mov	r0, r0, lsr #16
        1cbe00:	e2400001 	sub	r0, r0, #1	; 0x1
        1cbe04:	e1a06800 	mov	r6, r0, lsl #16
        1cbe08:	e1a06846 	mov	r6, r6, asr #16
        1cbe0c:	e1a00808 	mov	r0, r8, lsl #16
        1cbe10:	e1a00840 	mov	r0, r0, asr #16
        1cbe14:	e58d0004 	str	r0, [sp, #4]
        1cbe18:	e0850000 	add	r0, r5, r0
        1cbe1c:	e58d0000 	str	r0, [sp]
        1cbe20:	e1a01800 	mov	r1, r0, lsl #16
        1cbe24:	e1a01841 	mov	r1, r1, asr #16
        1cbe28:	e1a08001 	mov	r8, r1
        1cbe2c:	e1a00004 	mov	r0, r4
        1cbe30:	eb6616a2 	bl	1b518c0 <$MoveTo__FlT1>
        1cbe34:	e2481001 	sub	r1, r8, #1	; 0x1
        1cbe38:	e2840001 	add	r0, r4, #1	; 0x1
        1cbe3c:	e1a09000 	mov	r9, r0
        1cbe40:	eb66128d 	bl	1b5087c <$LineTo__FlT1>
        1cbe44:	e2481002 	sub	r1, r8, #2	; 0x2
        1cbe48:	e1a00009 	mov	r0, r9
        1cbe4c:	eb66128a 	bl	1b5087c <$LineTo__FlT1>
        1cbe50:	e2470001 	sub	r0, r7, #1	; 0x1
        1cbe54:	e1a08000 	mov	r8, r0
        1cbe58:	e1a01005 	mov	r1, r5
        1cbe5c:	eb661286 	bl	1b5087c <$LineTo__FlT1>
        1cbe60:	e2851003 	add	r1, r5, #3	; 0x3
        1cbe64:	e1a00007 	mov	r0, r7
        1cbe68:	eb661283 	bl	1b5087c <$LineTo__FlT1>
        1cbe6c:	e59d0004 	ldr	r0, [sp, #4]
        1cbe70:	e0460000 	sub	r0, r6, r0
        1cbe74:	e1a01800 	mov	r1, r0, lsl #16
        1cbe78:	e1a01841 	mov	r1, r1, asr #16
        1cbe7c:	e1a05001 	mov	r5, r1
        1cbe80:	e1a00007 	mov	r0, r7
        1cbe84:	eb66127c 	bl	1b5087c <$LineTo__FlT1>
        1cbe88:	e2851001 	add	r1, r5, #1	; 0x1
        1cbe8c:	e1a00008 	mov	r0, r8
        1cbe90:	eb661279 	bl	1b5087c <$LineTo__FlT1>
        1cbe94:	e2851002 	add	r1, r5, #2	; 0x2
        1cbe98:	e1a00008 	mov	r0, r8
        1cbe9c:	eb661276 	bl	1b5087c <$LineTo__FlT1>
        1cbea0:	e1a00009 	mov	r0, r9
        1cbea4:	e1a01006 	mov	r1, r6
        1cbea8:	eb661273 	bl	1b5087c <$LineTo__FlT1>
        1cbeac:	e1a01006 	mov	r1, r6
        1cbeb0:	e1a00004 	mov	r0, r4
        1cbeb4:	eb661270 	bl	1b5087c <$LineTo__FlT1>
        1cbeb8:	e1a00004 	mov	r0, r4
        1cbebc:	e59d1000 	ldr	r1, [sp]
        1cbec0:	eb66126d 	bl	1b5087c <$LineTo__FlT1>
        1cbec4:	eb6605f5 	bl	1b4d6a0 <$ClosePoly(void)>
        1cbec8:	e1a0000a 	mov	r0, sl
        1cbecc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor
 * Address: 001ce0c8
 */
void globals::treesearch1m5() {
    /*
        1ce0c8:	e1a0c00d 	mov	ip, sp
        1ce0cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1ce0d0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ce0d4:	e24cb014 	sub	fp, ip, #20	; 0x14
        1ce0d8:	e1a05000 	mov	r5, r0
        1ce0dc:	e1a04001 	mov	r4, r1
        1ce0e0:	e1a06002 	mov	r6, r2
        1ce0e4:	e59ba024 	ldr	sl, [fp, #36]
        1ce0e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ce0ec:	e3a02000 	mov	r2, #0	; 0x0
        1ce0f0:	e3a09000 	mov	r9, #0	; 0x0
        1ce0f4:	e1310000 	teq	r1, r0
        1ce0f8:	e58d2004 	str	r2, [sp, #4]
        1ce0fc:	03a09004 	moveq	r9, #4	; 0x4
        1ce100:	e0440005 	sub	r0, r4, r5
        1ce104:	e1a08000 	mov	r8, r0
        1ce108:	e0460000 	sub	r0, r6, r0
        1ce10c:	e3500040 	cmp	r0, #64	; 0x40
        1ce110:	83a00040 	movhi	r0, #64	; 0x40
        1ce114:	e58d0000 	str	r0, [sp]
        1ce118:	e5da0010 	ldrb	r0, [sl, #16]
        1ce11c:	e3300000 	teq	r0, #0	; 0x0
        1ce120:	1a000002 	bne	1ce130 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x68>
        1ce124:	e1a0000a 	mov	r0, sl
        1ce128:	eb675c6f 	bl	1ba52ec <TLZCompressor::$talloc(void)>
        1ce12c:	e1a0e000 	mov	lr, r0
        1ce130:	e59b3018 	ldr	r3, [fp, #24]
        1ce134:	e5b3c008 	ldr	ip, [r3, #8]!
        1ce138:	e3390000 	teq	r9, #0	; 0x0
        1ce13c:	1a00005a 	bne	1ce2ac <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x1e4>
        1ce140:	e0851006 	add	r1, r5, r6
        1ce144:	e59c000c 	ldr	r0, [ip, #12]
        1ce148:	e1a02000 	mov	r2, r0
        1ce14c:	e59b3018 	ldr	r3, [fp, #24]
        1ce150:	e1300003 	teq	r0, r3
        1ce154:	1a000007 	bne	1ce178 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0xb0>
        1ce158:	e5d40000 	ldrb	r0, [r4]
        1ce15c:	e08a0100 	add	r0, sl, r0, lsl #2
        1ce160:	e5900018 	ldr	r0, [r0, #24]
        1ce164:	e3300000 	teq	r0, #0	; 0x0
        1ce168:	11a0c000 	movne	ip, r0
        1ce16c:	1a00001b 	bne	1ce1e0 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x118>
        1ce170:	e3a09006 	mov	r9, #6	; 0x6
        1ce174:	ea00004c 	b	1ce2ac <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x1e4>
        1ce178:	e5900002 	ldr	r0, [r0, #2]
        1ce17c:	e1a00820 	mov	r0, r0, lsr #16
        1ce180:	e0883000 	add	r3, r8, r0
        1ce184:	e1530006 	cmp	r3, r6
        1ce188:	8a000002 	bhi	1ce198 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0xd0>
        1ce18c:	e0803004 	add	r3, r0, r4
        1ce190:	e1530001 	cmp	r3, r1
        1ce194:	3a000001 	bcc	1ce1a0 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0xd8>
        1ce198:	e3a09007 	mov	r9, #7	; 0x7
        1ce19c:	ea000042 	b	1ce2ac <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x1e4>
        1ce1a0:	e59c3000 	ldr	r3, [ip]
        1ce1a4:	e0853823 	add	r3, r5, r3, lsr #16
        1ce1a8:	e7d33000 	ldrb	r3, [r3, r0]
        1ce1ac:	e7d40000 	ldrb	r0, [r4, r0]
        1ce1b0:	e1330000 	teq	r3, r0
        1ce1b4:	1a000051 	bne	1ce300 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x238>
        1ce1b8:	e5b20008 	ldr	r0, [r2, #8]!
        1ce1bc:	e130000c 	teq	r0, ip
        1ce1c0:	0a000006 	beq	1ce1e0 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x118>
        1ce1c4:	e59c0010 	ldr	r0, [ip, #16]
        1ce1c8:	e59d2004 	ldr	r2, [sp, #4]
        1ce1cc:	e5a20010 	str	r0, [r2, #16]!
        1ce1d0:	e59c000c 	ldr	r0, [ip, #12]
        1ce1d4:	e5902008 	ldr	r2, [r0, #8]
        1ce1d8:	e58c2010 	str	r2, [ip, #16]
        1ce1dc:	e5a0c008 	str	ip, [r0, #8]!
        1ce1e0:	e59c0004 	ldr	r0, [ip, #4]
        1ce1e4:	e1a00820 	mov	r0, r0, lsr #16
        1ce1e8:	e3500001 	cmp	r0, #1	; 0x1
        1ce1ec:	1a000004 	bne	1ce204 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x13c>
        1ce1f0:	e59c0008 	ldr	r0, [ip, #8]
        1ce1f4:	e3300000 	teq	r0, #0	; 0x0
        1ce1f8:	0a00003e 	beq	1ce2f8 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x230>
        1ce1fc:	e1a0c000 	mov	ip, r0
        1ce200:	ea000027 	b	1ce2a4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x1dc>
        1ce204:	e3a07001 	mov	r7, #1	; 0x1
        1ce208:	da000025 	ble	1ce2a4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x1dc>
        1ce20c:	e59c000c 	ldr	r0, [ip, #12]
        1ce210:	e5900002 	ldr	r0, [r0, #2]
        1ce214:	e1a00820 	mov	r0, r0, lsr #16
        1ce218:	e0882000 	add	r2, r8, r0
        1ce21c:	e0822007 	add	r2, r2, r7
        1ce220:	e1520006 	cmp	r2, r6
        1ce224:	8a000003 	bhi	1ce238 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x170>
        1ce228:	e0802004 	add	r2, r0, r4
        1ce22c:	e0823007 	add	r3, r2, r7
        1ce230:	e1530001 	cmp	r3, r1
        1ce234:	3a000001 	bcc	1ce240 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x178>
        1ce238:	e3a09008 	mov	r9, #8	; 0x8
        1ce23c:	ea000007 	b	1ce260 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x198>
        1ce240:	e59c3000 	ldr	r3, [ip]
        1ce244:	e0853823 	add	r3, r5, r3, lsr #16
        1ce248:	e0830000 	add	r0, r3, r0
        1ce24c:	e7d00007 	ldrb	r0, [r0, r7]
        1ce250:	e7d22007 	ldrb	r2, [r2, r7]
        1ce254:	e1300002 	teq	r0, r2
        1ce258:	0a000002 	beq	1ce268 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x1a0>
        1ce25c:	e3a09003 	mov	r9, #3	; 0x3
        1ce260:	e2477001 	sub	r7, r7, #1	; 0x1
        1ce264:	ea000010 	b	1ce2ac <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x1e4>
        1ce268:	e59c0004 	ldr	r0, [ip, #4]
        1ce26c:	e1a00820 	mov	r0, r0, lsr #16
        1ce270:	e2400001 	sub	r0, r0, #1	; 0x1
        1ce274:	e1300007 	teq	r0, r7
        1ce278:	1a000005 	bne	1ce294 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x1cc>
        1ce27c:	e59c0008 	ldr	r0, [ip, #8]
        1ce280:	e3300000 	teq	r0, #0	; 0x0
        1ce284:	0a00001b 	beq	1ce2f8 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x230>
        1ce288:	e1a0c000 	mov	ip, r0
        1ce28c:	e5907004 	ldr	r7, [r0, #4]
        1ce290:	e1a07827 	mov	r7, r7, lsr #16
        1ce294:	e2877001 	add	r7, r7, #1	; 0x1
        1ce298:	e59c0004 	ldr	r0, [ip, #4]
        1ce29c:	e1570820 	cmp	r7, r0, lsr #16
        1ce2a0:	baffffd9 	blt	1ce20c <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x144>
        1ce2a4:	e3390000 	teq	r9, #0	; 0x0
        1ce2a8:	0affffa5 	beq	1ce144 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x7c>
        1ce2ac:	e2490002 	sub	r0, r9, #2	; 0x2
        1ce2b0:	e3500006 	cmp	r0, #6	; 0x6
        1ce2b4:	908ff100 	addls	pc, pc, r0, lsl #2
        1ce2b8:	ea00008a 	b	1ce4e8 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x420>
        1ce2bc:	ea000015 	b	1ce318 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x250>
        1ce2c0:	ea000027 	b	1ce364 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x29c>
        1ce2c4:	ea00003f 	b	1ce3c8 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x300>
        1ce2c8:	ea00004d 	b	1ce404 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x33c>
        1ce2cc:	ea000061 	b	1ce458 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x390>
        1ce2d0:	ea000078 	b	1ce4b8 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x3f0>
        1ce2d4:	e59c000c 	ldr	r0, [ip, #12]
        1ce2d8:	e5900002 	ldr	r0, [r0, #2]
        1ce2dc:	e0870820 	add	r0, r7, r0, lsr #16
        1ce2e0:	e2800001 	add	r0, r0, #1	; 0x1
        1ce2e4:	e59b3010 	ldr	r3, [fp, #16]
        1ce2e8:	e5830000 	str	r0, [r3]
        1ce2ec:	e59c0000 	ldr	r0, [ip]
        1ce2f0:	e1a00820 	mov	r0, r0, lsr #16
        1ce2f4:	ea000077 	b	1ce4d8 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x410>
        1ce2f8:	e3a09005 	mov	r9, #5	; 0x5
        1ce2fc:	eaffffea 	b	1ce2ac <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x1e4>
        1ce300:	e59c0010 	ldr	r0, [ip, #16]
        1ce304:	e3300000 	teq	r0, #0	; 0x0
        1ce308:	158dc004 	strne	ip, [sp, #4]
        1ce30c:	1affffba 	bne	1ce1fc <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x134>
        1ce310:	e3a09002 	mov	r9, #2	; 0x2
        1ce314:	eaffffe4 	b	1ce2ac <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x1e4>
        1ce318:	e59c000c 	ldr	r0, [ip, #12]
        1ce31c:	e5900002 	ldr	r0, [r0, #2]
        1ce320:	e1a00820 	mov	r0, r0, lsr #16
        1ce324:	e59b3010 	ldr	r3, [fp, #16]
        1ce328:	e5830000 	str	r0, [r3]
        1ce32c:	e59c000c 	ldr	r0, [ip, #12]
        1ce330:	e5900000 	ldr	r0, [r0]
        1ce334:	e0480820 	sub	r0, r8, r0, lsr #16
        1ce338:	e59b1014 	ldr	r1, [fp, #20]
        1ce33c:	e5810000 	str	r0, [r1]
        1ce340:	e5da0010 	ldrb	r0, [sl, #16]
        1ce344:	e3300000 	teq	r0, #0	; 0x0
        1ce348:	1a000069 	bne	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce34c:	e1a02008 	mov	r2, r8
        1ce350:	e1a0100e 	mov	r1, lr
        1ce354:	e1a0000c 	mov	r0, ip
        1ce358:	e59d3000 	ldr	r3, [sp]
        1ce35c:	eb674b51 	bl	1ba10a8 <$add_a_sibling1__FP6TTNodeT1lT3>
        1ce360:	ea000063 	b	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce364:	e59c000c 	ldr	r0, [ip, #12]
        1ce368:	e5900002 	ldr	r0, [r0, #2]
        1ce36c:	e0870820 	add	r0, r7, r0, lsr #16
        1ce370:	e2800001 	add	r0, r0, #1	; 0x1
        1ce374:	e59b3010 	ldr	r3, [fp, #16]
        1ce378:	e5830000 	str	r0, [r3]
        1ce37c:	e59c0000 	ldr	r0, [ip]
        1ce380:	e0480820 	sub	r0, r8, r0, lsr #16
        1ce384:	e59b1014 	ldr	r1, [fp, #20]
        1ce388:	e5810000 	str	r0, [r1]
        1ce38c:	e5da0010 	ldrb	r0, [sl, #16]
        1ce390:	e3300000 	teq	r0, #0	; 0x0
        1ce394:	1a000056 	bne	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce398:	e1a0300a 	mov	r3, sl
        1ce39c:	e2871001 	add	r1, r7, #1	; 0x1
        1ce3a0:	e1a00008 	mov	r0, r8
        1ce3a4:	e59d2000 	ldr	r2, [sp]
        1ce3a8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1ce3ac:	e1a0200e 	mov	r2, lr
        1ce3b0:	e1a0100c 	mov	r1, ip
        1ce3b4:	e59b3018 	ldr	r3, [fp, #24]
        1ce3b8:	e5d40000 	ldrb	r0, [r4]
        1ce3bc:	eb67579b 	bl	1ba4230 <$insert_a_node1__FUcP6TTNodeN22lN25P13TLZCompressor>
        1ce3c0:	e28dd010 	add	sp, sp, #16	; 0x10
        1ce3c4:	ea00004a 	b	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce3c8:	e3a00000 	mov	r0, #0	; 0x0
        1ce3cc:	e59b3010 	ldr	r3, [fp, #16]
        1ce3d0:	e5830000 	str	r0, [r3]
        1ce3d4:	e59b1014 	ldr	r1, [fp, #20]
        1ce3d8:	e1a0300a 	mov	r3, sl
        1ce3dc:	e5810000 	str	r0, [r1]
        1ce3e0:	e59d2000 	ldr	r2, [sp]
        1ce3e4:	e92d000c 	stmdb	sp!, {r2, r3}
        1ce3e8:	e1a03008 	mov	r3, r8
        1ce3ec:	e1a0200e 	mov	r2, lr
        1ce3f0:	e59b1018 	ldr	r1, [fp, #24]
        1ce3f4:	e5d40000 	ldrb	r0, [r4]
        1ce3f8:	eb674b2b 	bl	1ba10ac <$add_first_child1__FUcP6TTNodeT2lUlP13TLZCompressor>
        1ce3fc:	e28dd008 	add	sp, sp, #8	; 0x8
        1ce400:	ea00003b 	b	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce404:	e59c0002 	ldr	r0, [ip, #2]
        1ce408:	e1a00820 	mov	r0, r0, lsr #16
        1ce40c:	e59b3010 	ldr	r3, [fp, #16]
        1ce410:	e5830000 	str	r0, [r3]
        1ce414:	e59c0000 	ldr	r0, [ip]
        1ce418:	e0480820 	sub	r0, r8, r0, lsr #16
        1ce41c:	e59b1014 	ldr	r1, [fp, #20]
        1ce420:	e5810000 	str	r0, [r1]
        1ce424:	e5da0010 	ldrb	r0, [sl, #16]
        1ce428:	e3300000 	teq	r0, #0	; 0x0
        1ce42c:	1a000030 	bne	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce430:	e59c0002 	ldr	r0, [ip, #2]
        1ce434:	e59d2000 	ldr	r2, [sp]
        1ce438:	e1520820 	cmp	r2, r0, lsr #16
        1ce43c:	da00002c 	ble	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce440:	e1a02008 	mov	r2, r8
        1ce444:	e1a0100e 	mov	r1, lr
        1ce448:	e1a0000c 	mov	r0, ip
        1ce44c:	e59d3000 	ldr	r3, [sp]
        1ce450:	eb675352 	bl	1ba31a0 <$extend_a_child1__FP6TTNodeT1lT3>
        1ce454:	ea000026 	b	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce458:	e59c000c 	ldr	r0, [ip, #12]
        1ce45c:	e5900002 	ldr	r0, [r0, #2]
        1ce460:	e1a00820 	mov	r0, r0, lsr #16
        1ce464:	e59b3010 	ldr	r3, [fp, #16]
        1ce468:	e5830000 	str	r0, [r3]
        1ce46c:	e59c000c 	ldr	r0, [ip, #12]
        1ce470:	e5900000 	ldr	r0, [r0]
        1ce474:	e0480820 	sub	r0, r8, r0, lsr #16
        1ce478:	e59b1014 	ldr	r1, [fp, #20]
        1ce47c:	e5810000 	str	r0, [r1]
        1ce480:	e5da0010 	ldrb	r0, [sl, #16]
        1ce484:	e3300000 	teq	r0, #0	; 0x0
        1ce488:	1a000019 	bne	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce48c:	e1a0300a 	mov	r3, sl
        1ce490:	e1a01008 	mov	r1, r8
        1ce494:	e59d2000 	ldr	r2, [sp]
        1ce498:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1ce49c:	e1a0300e 	mov	r3, lr
        1ce4a0:	e1a0200c 	mov	r2, ip
        1ce4a4:	e59b1018 	ldr	r1, [fp, #24]
        1ce4a8:	e5d40000 	ldrb	r0, [r4]
        1ce4ac:	eb674b00 	bl	1ba10b4 <$address_a_node__FUcP6TTNodeN22lT5P13TLZCompressor>
        1ce4b0:	e28dd00c 	add	sp, sp, #12	; 0xc
        1ce4b4:	ea00000e 	b	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce4b8:	e59c000c 	ldr	r0, [ip, #12]
        1ce4bc:	e5900002 	ldr	r0, [r0, #2]
        1ce4c0:	e1a00820 	mov	r0, r0, lsr #16
        1ce4c4:	e59b3010 	ldr	r3, [fp, #16]
        1ce4c8:	e5830000 	str	r0, [r3]
        1ce4cc:	e5bc000c 	ldr	r0, [ip, #12]!
        1ce4d0:	e5900000 	ldr	r0, [r0]
        1ce4d4:	e1a00820 	mov	r0, r0, lsr #16
        1ce4d8:	e0480000 	sub	r0, r8, r0
        1ce4dc:	e59b1014 	ldr	r1, [fp, #20]
        1ce4e0:	e5810000 	str	r0, [r1]
        1ce4e4:	ea000002 	b	1ce4f4 <treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor+0x42c>
        1ce4e8:	e1a01008 	mov	r1, r8
        1ce4ec:	e28f0f01 	add	r0, pc, #4	; 0x4
        1ce4f0:	eb688ce2 	bl	1bf1880 <$printf>
        1ce4f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1ce4f8:	77686174 	undefined
        1ce4fc:	20697320 	rsbcs	r7, r9, r0, lsr #6
        1ce500:	676f696e 	strvsb	r6, [pc, -lr, ror #18]!
        1ce504:	67206f6e 	strvs	r6, [r0, -lr, ror #30]!
        1ce508:	3f3f3f2a 	swicc	0x003f3f2a
        1ce50c:	26234020 	strcst	r4, [r3], -r0, lsr #32
        1ce510:	256c6400 	strcsb	r6, [ip, -#1024]!
    */
}

/**
 * Symbol: TaskInCopyKilled(void *, TTask *)
 * Address: 001dfeb0
 */
TaskInCopyKilled(void *, TTask *) {
    /*
        1dfeb0:	e1a0c00d 	mov	ip, sp
        1dfeb4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1dfeb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dfebc:	e3a00000 	mov	r0, #0	; 0x0
        1dfec0:	e52d0004 	str	r0, [sp, -#4]!
        1dfec4:	e59110ec 	ldr	r1, [r1, #236]
        1dfec8:	e1a0200d 	mov	r2, sp
        1dfecc:	e3a00009 	mov	r0, #9	; 0x9
        1dfed0:	eb6456f8 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        1dfed4:	e59d0000 	ldr	r0, [sp]
        1dfed8:	e3300000 	teq	r0, #0	; 0x0
        1dfedc:	13a01000 	movne	r1, #0	; 0x0
        1dfee0:	15a0107c 	strne	r1, [r0, #124]!
        1dfee4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TableLookup
 * Address: 001ecfc4
 */
void globals::TableLookup() {
    /*
        1ecfc4:	e1a00001 	mov	r0, r1
        1ecfc8:	e1a01002 	mov	r1, r2
        1ecfcc:	ea62dc8e 	b	1aa420c <$TableLookup__FRC6RefVarT1>
    */
}

/**
 * Symbol: TruncateText(unsigned short *, unsigned long, long, StyleRecord *)
 * Address: 001f0f48
 */
TruncateText(unsigned short *, unsigned long, long, StyleRecord *) {
    /*
        1f0f48:	e1a0c00d 	mov	ip, sp
        1f0f4c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1f0f50:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f0f54:	e1a05000 	mov	r5, r0
        1f0f58:	e1a04001 	mov	r4, r1
        1f0f5c:	e1a07002 	mov	r7, r2
        1f0f60:	e1a06003 	mov	r6, r3
        1f0f64:	e3a08000 	mov	r8, #0	; 0x0
        1f0f68:	e3510000 	cmp	r1, #0	; 0x0
        1f0f6c:	9a000007 	bls	1f0f90 <TruncateText(unsigned short *, unsigned long, long, StyleRecord *)+0x48>
        1f0f70:	e7950088 	ldr	r0, [r5, r8, lsl #1]
        1f0f74:	e1a00820 	mov	r0, r0, lsr #16
        1f0f78:	eb67e569 	bl	1bea524 <$IsBreaker(unsigned short)>
        1f0f7c:	e3300000 	teq	r0, #0	; 0x0
        1f0f80:	1a000002 	bne	1f0f90 <TruncateText(unsigned short *, unsigned long, long, StyleRecord *)+0x48>
        1f0f84:	e2888001 	add	r8, r8, #1	; 0x1
        1f0f88:	e1580004 	cmp	r8, r4
        1f0f8c:	3afffff7 	bcc	1f0f70 <TruncateText(unsigned short *, unsigned long, long, StyleRecord *)+0x28>
        1f0f90:	e1b04008 	movs	r4, r8
        1f0f94:	0a00001c 	beq	1f100c <TruncateText(unsigned short *, unsigned long, long, StyleRecord *)+0xc4>
        1f0f98:	e1a02006 	mov	r2, r6
        1f0f9c:	e1a01004 	mov	r1, r4
        1f0fa0:	e1a00005 	mov	r0, r5
        1f0fa4:	eb62ab8f 	bl	1a9bde8 <$MeasureOnce(unsigned short *, long, StyleRecord *)>
        1f0fa8:	e1500007 	cmp	r0, r7
        1f0fac:	ba000012 	blt	1f0ffc <TruncateText(unsigned short *, unsigned long, long, StyleRecord *)+0xb4>
        1f0fb0:	e3540000 	cmp	r4, #0	; 0x0
        1f0fb4:	9a00000e 	bls	1f0ff4 <TruncateText(unsigned short *, unsigned long, long, StyleRecord *)+0xac>
        1f0fb8:	e3a09026 	mov	r9, #38	; 0x26
        1f0fbc:	e2899a02 	add	r9, r9, #8192	; 0x2000
        1f0fc0:	e3a08020 	mov	r8, #32	; 0x20
        1f0fc4:	e0850084 	add	r0, r5, r4, lsl #1
        1f0fc8:	e5409001 	strb	r9, [r0, -#1]
        1f0fcc:	e5408002 	strb	r8, [r0, -#2]
        1f0fd0:	e1a02006 	mov	r2, r6
        1f0fd4:	e1a01004 	mov	r1, r4
        1f0fd8:	e1a00005 	mov	r0, r5
        1f0fdc:	eb62ab81 	bl	1a9bde8 <$MeasureOnce(unsigned short *, long, StyleRecord *)>
        1f0fe0:	e1500007 	cmp	r0, r7
        1f0fe4:	ba000002 	blt	1f0ff4 <TruncateText(unsigned short *, unsigned long, long, StyleRecord *)+0xac>
        1f0fe8:	e2444001 	sub	r4, r4, #1	; 0x1
        1f0fec:	e3540000 	cmp	r4, #0	; 0x0
        1f0ff0:	8afffff3 	bhi	1f0fc4 <TruncateText(unsigned short *, unsigned long, long, StyleRecord *)+0x7c>
        1f0ff4:	e3340000 	teq	r4, #0	; 0x0
        1f0ff8:	03a04001 	moveq	r4, #1	; 0x1
        1f0ffc:	e3a00000 	mov	r0, #0	; 0x0
        1f1000:	e0851084 	add	r1, r5, r4, lsl #1
        1f1004:	e5c10001 	strb	r0, [r1, #1]
        1f1008:	e5c10000 	strb	r0, [r1]
        1f100c:	e1a00004 	mov	r0, r4
        1f1010:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: T4AddRTC(unsigned char *)
 * Address: 00205144
 */
T4AddRTC(unsigned char *) {
    /*
        205144:	e3a01000 	mov	r1, #0	; 0x0
        205148:	e4c01001 	strb	r1, [r0], #1
        20514c:	e3a03008 	mov	r3, #8	; 0x8
        205150:	e4c03001 	strb	r3, [r0], #1
        205154:	e3a02080 	mov	r2, #128	; 0x80
        205158:	e4c02001 	strb	r2, [r0], #1
        20515c:	e4c01001 	strb	r1, [r0], #1
        205160:	e4c03001 	strb	r3, [r0], #1
        205164:	e4c02001 	strb	r2, [r0], #1
        205168:	e4c01001 	strb	r1, [r0], #1
        20516c:	e4c03001 	strb	r3, [r0], #1
        205170:	e4c02001 	strb	r2, [r0], #1
        205174:	e5c01000 	strb	r1, [r0]
        205178:	e3a0000a 	mov	r0, #10	; 0xa
        20517c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TimeOutSubs(TSIUnit *)
 * Address: 0020b58c
 */
TimeOutSubs(TSIUnit *) {
    /*
        20b58c:	e1a0c00d 	mov	ip, sp
        20b590:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20b594:	e24cb004 	sub	fp, ip, #4	; 0x4
        20b598:	e1a04000 	mov	r4, r0
        20b59c:	e5901000 	ldr	r1, [r0]
        20b5a0:	e1a0e00f 	mov	lr, pc
        20b5a4:	e281f01c 	add	pc, r1, #28	; 0x1c
        20b5a8:	e1a07000 	mov	r7, r0
        20b5ac:	e3a05000 	mov	r5, #0	; 0x0
        20b5b0:	e3500000 	cmp	r0, #0	; 0x0
        20b5b4:	991ba8f0 	ldmlsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        20b5b8:	e1a01005 	mov	r1, r5
        20b5bc:	e1a00004 	mov	r0, r4
        20b5c0:	e5942000 	ldr	r2, [r4]
        20b5c4:	e1a0e00f 	mov	lr, pc
        20b5c8:	e282f058 	add	pc, r2, #88	; 0x58
        20b5cc:	e1a06000 	mov	r6, r0
        20b5d0:	e3a01000 	mov	r1, #0	; 0x0
        20b5d4:	eb655ae2 	bl	1b62164 <TUnit::$SetDelay(unsigned long)>
        20b5d8:	e1a00006 	mov	r0, r6
        20b5dc:	e5961000 	ldr	r1, [r6]
        20b5e0:	e1a0e00f 	mov	lr, pc
        20b5e4:	e281f01c 	add	pc, r1, #28	; 0x1c
        20b5e8:	e3300000 	teq	r0, #0	; 0x0
        20b5ec:	11a00006 	movne	r0, r6
        20b5f0:	1bffffe5 	blne	20b58c <TimeOutSubs(TSIUnit *)>
        20b5f4:	e2855001 	add	r5, r5, #1	; 0x1
        20b5f8:	e1550007 	cmp	r5, r7
        20b5fc:	3affffed 	bcc	20b5b8 <TimeOutSubs(TSIUnit *)+0x2c>
        20b600:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TheFunction__FlPlT2
 * Address: 0020fee4
 */
void globals::TheFunction() {
    /*
        20fee4:	e1a0c00d 	mov	ip, sp
        20fee8:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20feec:	e24cb004 	sub	fp, ip, #4	; 0x4
        20fef0:	e1a05000 	mov	r5, r0
        20fef4:	e1a04001 	mov	r4, r1
        20fef8:	e3a06000 	mov	r6, #0	; 0x0
        20fefc:	e59f90d0 	ldr	r9, [pc, #d0]	; 20ffd4 <TheFunction__FlPlT2+0xf0>
        20ff00:	e5990000 	ldr	r0, [r9]
        20ff04:	e1350000 	teq	r5, r0
        20ff08:	1a000044 	bne	210020 <TheFunction__FlPlT2+0x13c>
        20ff0c:	e3a00801 	mov	r0, #65536	; 0x10000
        20ff10:	e3a07000 	mov	r7, #0	; 0x0
        20ff14:	e3550000 	cmp	r5, #0	; 0x0
        20ff18:	e5840000 	str	r0, [r4]
        20ff1c:	ba000013 	blt	20ff70 <TheFunction__FlPlT2+0x8c>
        20ff20:	e1a08007 	mov	r8, r7
        20ff24:	e59f00a8 	ldr	r0, [pc, #a8]	; 20ffd4 <TheFunction__FlPlT2+0xf0>
        20ff28:	e080a107 	add	sl, r0, r7, lsl #2
        20ff2c:	e1570005 	cmp	r7, r5
        20ff30:	ca00000b 	bgt	20ff64 <TheFunction__FlPlT2+0x80>
        20ff34:	e7941108 	ldr	r1, [r4, r8, lsl #2]
        20ff38:	e7940107 	ldr	r0, [r4, r7, lsl #2]
        20ff3c:	eb674460 	bl	1be10c4 <$FixedMultiply>
        20ff40:	e1a01000 	mov	r1, r0
        20ff44:	e59a0004 	ldr	r0, [sl, #4]
        20ff48:	e5900000 	ldr	r0, [r0]
        20ff4c:	e7900108 	ldr	r0, [r0, r8, lsl #2]
        20ff50:	eb67445b 	bl	1be10c4 <$FixedMultiply>
        20ff54:	e0806006 	add	r6, r0, r6
        20ff58:	e2888001 	add	r8, r8, #1	; 0x1
        20ff5c:	e1580005 	cmp	r8, r5
        20ff60:	dafffff3 	ble	20ff34 <TheFunction__FlPlT2+0x50>
        20ff64:	e2877001 	add	r7, r7, #1	; 0x1
        20ff68:	e1570005 	cmp	r7, r5
        20ff6c:	daffffeb 	ble	20ff20 <TheFunction__FlPlT2+0x3c>
        20ff70:	e51b202c 	ldr	r2, [fp, -#44]
        20ff74:	e3a07000 	mov	r7, #0	; 0x0
        20ff78:	e5826000 	str	r6, [r2]
        20ff7c:	e5990098 	ldr	r0, [r9, #152]
        20ff80:	e3500000 	cmp	r0, #0	; 0x0
        20ff84:	da000025 	ble	210020 <TheFunction__FlPlT2+0x13c>
        20ff88:	e0870107 	add	r0, r7, r7, lsl #2
        20ff8c:	e0890100 	add	r0, r9, r0, lsl #2
        20ff90:	e280509c 	add	r5, r0, #156	; 0x9c
        20ff94:	e5950000 	ldr	r0, [r5]
        20ff98:	e3300001 	teq	r0, #1	; 0x1
        20ff9c:	e5950008 	ldr	r0, [r5, #8]
        20ffa0:	e7941100 	ldr	r1, [r4, r0, lsl #2]
        20ffa4:	e5950004 	ldr	r0, [r5, #4]
        20ffa8:	e7940100 	ldr	r0, [r4, r0, lsl #2]
        20ffac:	1a000009 	bne	20ffd8 <TheFunction__FlPlT2+0xf4>
        20ffb0:	eb674443 	bl	1be10c4 <$FixedMultiply>
        20ffb4:	e1a08000 	mov	r8, r0
        20ffb8:	e5950010 	ldr	r0, [r5, #16]
        20ffbc:	e7941100 	ldr	r1, [r4, r0, lsl #2]
        20ffc0:	e5b5000c 	ldr	r0, [r5, #12]!
        20ffc4:	e7940100 	ldr	r0, [r4, r0, lsl #2]
        20ffc8:	eb67443d 	bl	1be10c4 <$FixedMultiply>
        20ffcc:	e0880000 	add	r0, r8, r0
        20ffd0:	ea000008 	b	20fff8 <TheFunction__FlPlT2+0x114>
        20ffd4:	0c106f10 	ldceq	15, cr6, [r0], -#64
        20ffd8:	eb674439 	bl	1be10c4 <$FixedMultiply>
        20ffdc:	e1a08000 	mov	r8, r0
        20ffe0:	e5950010 	ldr	r0, [r5, #16]
        20ffe4:	e7941100 	ldr	r1, [r4, r0, lsl #2]
        20ffe8:	e5b5000c 	ldr	r0, [r5, #12]!
        20ffec:	e7940100 	ldr	r0, [r4, r0, lsl #2]
        20fff0:	eb674433 	bl	1be10c4 <$FixedMultiply>
        20fff4:	e0480000 	sub	r0, r8, r0
        20fff8:	e51b202c 	ldr	r2, [fp, -#44]
        20fffc:	e0821107 	add	r1, r2, r7, lsl #2
        210000:	e5a10004 	str	r0, [r1, #4]!
        210004:	e3500000 	cmp	r0, #0	; 0x0
        210008:	b2600000 	rsblt	r0, r0, #0	; 0x0
        21000c:	e0866000 	add	r6, r6, r0
        210010:	e2877001 	add	r7, r7, #1	; 0x1
        210014:	e5990098 	ldr	r0, [r9, #152]
        210018:	e1500007 	cmp	r0, r7
        21001c:	caffffd9 	bgt	20ff88 <TheFunction__FlPlT2+0xa4>
        210020:	e1a00006 	mov	r0, r6
        210024:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TheGradient__FlPlN22
 * Address: 00210028
 */
void globals::TheGradient() {
    /*
        210028:	e1a0c00d 	mov	ip, sp
        21002c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        210030:	e24cb004 	sub	fp, ip, #4	; 0x4
        210034:	e1a06000 	mov	r6, r0
        210038:	e1a05001 	mov	r5, r1
        21003c:	e1a04003 	mov	r4, r3
        210040:	e3a00801 	mov	r0, #65536	; 0x10000
        210044:	e3a07001 	mov	r7, #1	; 0x1
        210048:	e3560001 	cmp	r6, #1	; 0x1
        21004c:	e5810000 	str	r0, [r1]
        210050:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        210054:	e59fa0ec 	ldr	sl, [pc, #ec]	; 210148 <TheGradient__FlPlN22+0x120>
        210058:	e59f90ec 	ldr	r9, [pc, #ec]	; 21014c <TheGradient__FlPlN22+0x124>
        21005c:	e3a00000 	mov	r0, #0	; 0x0
        210060:	e7840107 	str	r0, [r4, r7, lsl #2]
        210064:	e51b2030 	ldr	r2, [fp, -#48]
        210068:	e5920000 	ldr	r0, [r2]
        21006c:	e3500002 	cmp	r0, #2	; 0x2
        210070:	da00000f 	ble	2100b4 <TheGradient__FlPlN22+0x8c>
        210074:	e3a08000 	mov	r8, #0	; 0x0
        210078:	e3560000 	cmp	r6, #0	; 0x0
        21007c:	ba00000c 	blt	2100b4 <TheGradient__FlPlN22+0x8c>
        210080:	e59a0000 	ldr	r0, [sl]
        210084:	e0800287 	add	r0, r0, r7, lsl #5
        210088:	e5900008 	ldr	r0, [r0, #8]
        21008c:	e5900000 	ldr	r0, [r0]
        210090:	e7900108 	ldr	r0, [r0, r8, lsl #2]
        210094:	e7951108 	ldr	r1, [r5, r8, lsl #2]
        210098:	eb674409 	bl	1be10c4 <$FixedMultiply>
        21009c:	e7941107 	ldr	r1, [r4, r7, lsl #2]
        2100a0:	e0800001 	add	r0, r0, r1
        2100a4:	e7840107 	str	r0, [r4, r7, lsl #2]
        2100a8:	e2888001 	add	r8, r8, #1	; 0x1
        2100ac:	e1580006 	cmp	r8, r6
        2100b0:	dafffff2 	ble	210080 <TheGradient__FlPlN22+0x58>
        2100b4:	e3a08000 	mov	r8, #0	; 0x0
        2100b8:	e5990098 	ldr	r0, [r9, #152]
        2100bc:	e3500000 	cmp	r0, #0	; 0x0
        2100c0:	da00001c 	ble	210138 <TheGradient__FlPlN22+0x110>
        2100c4:	e59a0000 	ldr	r0, [sl]
        2100c8:	e0800287 	add	r0, r0, r7, lsl #5
        2100cc:	e0800108 	add	r0, r0, r8, lsl #2
        2100d0:	e590000c 	ldr	r0, [r0, #12]
        2100d4:	e3500000 	cmp	r0, #0	; 0x0
        2100d8:	b7150100 	ldrlt	r0, [r5, -r0, lsl #2]
        2100dc:	b2600000 	rsblt	r0, r0, #0	; 0x0
        2100e0:	ba000001 	blt	2100ec <TheGradient__FlPlN22+0xc4>
        2100e4:	da00000f 	ble	210128 <TheGradient__FlPlN22+0x100>
        2100e8:	e7950100 	ldr	r0, [r5, r0, lsl #2]
        2100ec:	e51b2030 	ldr	r2, [fp, -#48]
        2100f0:	e0821108 	add	r1, r2, r8, lsl #2
        2100f4:	e5911004 	ldr	r1, [r1, #4]
        2100f8:	e3510000 	cmp	r1, #0	; 0x0
        2100fc:	b2600000 	rsblt	r0, r0, #0	; 0x0
        210100:	e1a02001 	mov	r2, r1
        210104:	b2622000 	rsblt	r2, r2, #0	; 0x0
        210108:	e3520801 	cmp	r2, #65536	; 0x10000
        21010c:	aa000002 	bge	21011c <TheGradient__FlPlN22+0xf4>
        210110:	e3510000 	cmp	r1, #0	; 0x0
        210114:	b2611000 	rsblt	r1, r1, #0	; 0x0
        210118:	eb6743e9 	bl	1be10c4 <$FixedMultiply>
        21011c:	e7941107 	ldr	r1, [r4, r7, lsl #2]
        210120:	e0810000 	add	r0, r1, r0
        210124:	e7840107 	str	r0, [r4, r7, lsl #2]
        210128:	e2888001 	add	r8, r8, #1	; 0x1
        21012c:	e5990098 	ldr	r0, [r9, #152]
        210130:	e1500008 	cmp	r0, r8
        210134:	caffffe2 	bgt	2100c4 <TheGradient__FlPlN22+0x9c>
        210138:	e2877001 	add	r7, r7, #1	; 0x1
        21013c:	e1570006 	cmp	r7, r6
        210140:	daffffc5 	ble	21005c <TheGradient__FlPlN22+0x34>
        210144:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        210148:	0c104c90 	ldceq	12, cr4, [r0], -#576
        21014c:	0c106f10 	ldceq	15, cr6, [r0], -#64
    */
}

/**
 * Symbol: TVSplSpl__FUlP6FPointT2PcPUlP9SplineSegT4l
 * Address: 0021399c
 */
void globals::TVSplSpl() {
    /*
        21399c:	e1a0c00d 	mov	ip, sp
        2139a0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2139a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2139a8:	e24cb014 	sub	fp, ip, #20	; 0x14
        2139ac:	e1a04000 	mov	r4, r0
        2139b0:	e1a05001 	mov	r5, r1
        2139b4:	e1a06002 	mov	r6, r2
        2139b8:	e28be014 	add	lr, fp, #20	; 0x14
        2139bc:	e89e4001 	ldmia	lr, {r0, lr}
        2139c0:	e59bc020 	ldr	ip, [fp, #32]
        2139c4:	e24dd030 	sub	sp, sp, #48	; 0x30
        2139c8:	e7908104 	ldr	r8, [r0, r4, lsl #2]
        2139cc:	e0801104 	add	r1, r0, r4, lsl #2
        2139d0:	e5910004 	ldr	r0, [r1, #4]
        2139d4:	e5111004 	ldr	r1, [r1, -#4]
        2139d8:	e0400008 	sub	r0, r0, r8
        2139dc:	e58d002c 	str	r0, [sp, #44]
        2139e0:	e1a000a0 	mov	r0, r0, lsr #1
        2139e4:	e0481001 	sub	r1, r8, r1
        2139e8:	e58d1028 	str	r1, [sp, #40]
        2139ec:	e1a020a1 	mov	r2, r1, lsr #1
        2139f0:	e7951188 	ldr	r1, [r5, r8, lsl #3]
        2139f4:	e0483002 	sub	r3, r8, r2
        2139f8:	e7952183 	ldr	r2, [r5, r3, lsl #3]
        2139fc:	e0411002 	sub	r1, r1, r2
        213a00:	e58d100c 	str	r1, [sp, #12]
        213a04:	e0851188 	add	r1, r5, r8, lsl #3
        213a08:	e0853183 	add	r3, r5, r3, lsl #3
        213a0c:	e5912004 	ldr	r2, [r1, #4]
        213a10:	e58d3024 	str	r3, [sp, #36]
        213a14:	e5933004 	ldr	r3, [r3, #4]
        213a18:	e0422003 	sub	r2, r2, r3
        213a1c:	e0880000 	add	r0, r8, r0
        213a20:	e58d2010 	str	r2, [sp, #16]
        213a24:	e7952180 	ldr	r2, [r5, r0, lsl #3]
        213a28:	e7953188 	ldr	r3, [r5, r8, lsl #3]
        213a2c:	e0422003 	sub	r2, r2, r3
        213a30:	e0850180 	add	r0, r5, r0, lsl #3
        213a34:	e58d2004 	str	r2, [sp, #4]
        213a38:	e5900004 	ldr	r0, [r0, #4]
        213a3c:	e5911004 	ldr	r1, [r1, #4]
        213a40:	e0403001 	sub	r3, r0, r1
        213a44:	e58d3008 	str	r3, [sp, #8]
        213a48:	e7960184 	ldr	r0, [r6, r4, lsl #3]
        213a4c:	e0867184 	add	r7, r6, r4, lsl #3
        213a50:	e5171008 	ldr	r1, [r7, -#8]
        213a54:	e0402001 	sub	r2, r0, r1
        213a58:	e5970004 	ldr	r0, [r7, #4]
        213a5c:	e5171004 	ldr	r1, [r7, -#4]
        213a60:	e0401001 	sub	r1, r0, r1
        213a64:	e5970008 	ldr	r0, [r7, #8]
        213a68:	e7963184 	ldr	r3, [r6, r4, lsl #3]
        213a6c:	e0403003 	sub	r3, r0, r3
        213a70:	e5970004 	ldr	r0, [r7, #4]
        213a74:	e597900c 	ldr	r9, [r7, #12]
        213a78:	e0490000 	sub	r0, r9, r0
        213a7c:	e08e9284 	add	r9, lr, r4, lsl #5
        213a80:	e249e010 	sub	lr, r9, #16	; 0x10
        213a84:	e58de020 	str	lr, [sp, #32]
        213a88:	e289e010 	add	lr, r9, #16	; 0x10
        213a8c:	e249a008 	sub	sl, r9, #8	; 0x8
        213a90:	e33c0001 	teq	ip, #1	; 0x1
        213a94:	e58de01c 	str	lr, [sp, #28]
        213a98:	0a00000d 	beq	213ad4 <TVSplSpl__FUlP6FPointT2PcPUlP9SplineSegT4l+0x138>
        213a9c:	e33c0002 	teq	ip, #2	; 0x2
        213aa0:	1a00002d 	bne	213b5c <TVSplSpl__FUlP6FPointT2PcPUlP9SplineSegT4l+0x1c0>
        213aa4:	e24dd008 	sub	sp, sp, #8	; 0x8
        213aa8:	e58d0004 	str	r0, [sp, #4]
        213aac:	e82d000a 	stmda	sp!, {r1, r3}
        213ab0:	e58d2000 	str	r2, [sp]
        213ab4:	e28d101c 	add	r1, sp, #28	; 0x1c
        213ab8:	e8910003 	ldmia	r1, {r0, r1}
        213abc:	e28d3014 	add	r3, sp, #20	; 0x14
        213ac0:	e893000c 	ldmia	r3, {r2, r3}
        213ac4:	eb655677 	bl	1b694a8 <$CheckSmooth__F6FPointN31>
        213ac8:	e28dd010 	add	sp, sp, #16	; 0x10
        213acc:	e3300000 	teq	r0, #0	; 0x0
        213ad0:	1a000021 	bne	213b5c <TVSplSpl__FUlP6FPointT2PcPUlP9SplineSegT4l+0x1c0>
        213ad4:	e3340001 	teq	r4, #1	; 0x1
        213ad8:	159b001c 	ldrne	r0, [fp, #28]
        213adc:	10800004 	addne	r0, r0, r4
        213ae0:	15500001 	ldrneb	r0, [r0, -#1]
        213ae4:	13300000 	teqne	r0, #0	; 0x0
        213ae8:	1a00000e 	bne	213b28 <TVSplSpl__FUlP6FPointT2PcPUlP9SplineSegT4l+0x18c>
        213aec:	e3a00001 	mov	r0, #1	; 0x1
        213af0:	e59b3010 	ldr	r3, [fp, #16]
        213af4:	e0831004 	add	r1, r3, r4
        213af8:	e5410001 	strb	r0, [r1, -#1]
        213afc:	e7960184 	ldr	r0, [r6, r4, lsl #3]
        213b00:	e5171008 	ldr	r1, [r7, -#8]
        213b04:	e0400001 	sub	r0, r0, r1
        213b08:	e5971004 	ldr	r1, [r7, #4]
        213b0c:	e5172004 	ldr	r2, [r7, -#4]
        213b10:	e0411002 	sub	r1, r1, r2
        213b14:	e88a0003 	stmia	sl, {r0, r1}
        213b18:	e59d0020 	ldr	r0, [sp, #32]
        213b1c:	e89a1008 	ldmia	sl, {r3, ip}
        213b20:	e8801008 	stmia	r0, {r3, ip}
        213b24:	ea000003 	b	213b38 <TVSplSpl__FUlP6FPointT2PcPUlP9SplineSegT4l+0x19c>
        213b28:	e59d1010 	ldr	r1, [sp, #16]
        213b2c:	e58a1004 	str	r1, [sl, #4]
        213b30:	e59d000c 	ldr	r0, [sp, #12]
        213b34:	e58a0000 	str	r0, [sl]
        213b38:	e59d3008 	ldr	r3, [sp, #8]
        213b3c:	e59de01c 	ldr	lr, [sp, #28]
        213b40:	e58e3004 	str	r3, [lr, #4]
        213b44:	e59d2004 	ldr	r2, [sp, #4]
        213b48:	e3a00000 	mov	r0, #0	; 0x0
        213b4c:	e58e2000 	str	r2, [lr]
        213b50:	e59b101c 	ldr	r1, [fp, #28]
        213b54:	e7c10004 	strb	r0, [r1, r4]
        213b58:	ea000040 	b	213c60 <TVSplSpl__FUlP6FPointT2PcPUlP9SplineSegT4l+0x2c4>
        213b5c:	e5170008 	ldr	r0, [r7, -#8]
        213b60:	e5971008 	ldr	r1, [r7, #8]
        213b64:	e0410000 	sub	r0, r1, r0
        213b68:	e58d0014 	str	r0, [sp, #20]
        213b6c:	e597000c 	ldr	r0, [r7, #12]
        213b70:	e5171004 	ldr	r1, [r7, -#4]
        213b74:	e0400001 	sub	r0, r0, r1
        213b78:	e58d0018 	str	r0, [sp, #24]
        213b7c:	e59f10e0 	ldr	r1, [pc, #e0]	; 213c64 <TVSplSpl__FUlP6FPointT2PcPUlP9SplineSegT4l+0x2c8>
        213b80:	e1a06001 	mov	r6, r1
        213b84:	e28d0014 	add	r0, sp, #20	; 0x14
        213b88:	eb65208e 	bl	1b5bdc8 <$CheapDistPoint__FP6FPointT1>
        213b8c:	e59d002c 	ldr	r0, [sp, #44]
        213b90:	e1a01120 	mov	r1, r0, lsr #2
        213b94:	e59d0028 	ldr	r0, [sp, #40]
        213b98:	e1a00120 	mov	r0, r0, lsr #2
        213b9c:	e3a07001 	mov	r7, #1	; 0x1
        213ba0:	e3510001 	cmp	r1, #1	; 0x1
        213ba4:	d1a01007 	movle	r1, r7
        213ba8:	e3500001 	cmp	r0, #1	; 0x1
        213bac:	d1a00007 	movle	r0, r7
        213bb0:	e0881001 	add	r1, r8, r1
        213bb4:	e7952181 	ldr	r2, [r5, r1, lsl #3]
        213bb8:	e0480000 	sub	r0, r8, r0
        213bbc:	e7953180 	ldr	r3, [r5, r0, lsl #3]
        213bc0:	e0422003 	sub	r2, r2, r3
        213bc4:	e0851181 	add	r1, r5, r1, lsl #3
        213bc8:	e5092008 	str	r2, [r9, -#8]
        213bcc:	e5911004 	ldr	r1, [r1, #4]
        213bd0:	e0850180 	add	r0, r5, r0, lsl #3
        213bd4:	e5900004 	ldr	r0, [r0, #4]
        213bd8:	e0410000 	sub	r0, r1, r0
        213bdc:	e5090004 	str	r0, [r9, -#4]
        213be0:	e1a01006 	mov	r1, r6
        213be4:	e3a02801 	mov	r2, #65536	; 0x10000
        213be8:	e59d0020 	ldr	r0, [sp, #32]
        213bec:	eb653946 	bl	1b6210c <$PtsToAngle>
        213bf0:	e1a05000 	mov	r5, r0
        213bf4:	e1a0000a 	mov	r0, sl
        213bf8:	e1a01006 	mov	r1, r6
        213bfc:	e3a02801 	mov	r2, #65536	; 0x10000
        213c00:	eb653941 	bl	1b6210c <$PtsToAngle>
        213c04:	e0400005 	sub	r0, r0, r5
        213c08:	e58d0000 	str	r0, [sp]
        213c0c:	e1a0000d 	mov	r0, sp
        213c10:	eb655637 	bl	1b694f4 <$NORMD(long *)>
        213c14:	e59d0000 	ldr	r0, [sp]
        213c18:	e3500000 	cmp	r0, #0	; 0x0
        213c1c:	b2600000 	rsblt	r0, r0, #0	; 0x0
        213c20:	e350086e 	cmp	r0, #7208960	; 0x6e0000
        213c24:	d3a00000 	movle	r0, #0	; 0x0
        213c28:	c3a00001 	movgt	r0, #1	; 0x1
        213c2c:	e59de01c 	ldr	lr, [sp, #28]
        213c30:	e89a1008 	ldmia	sl, {r3, ip}
        213c34:	e88e1008 	stmia	lr, {r3, ip}
        213c38:	e3300000 	teq	r0, #0	; 0x0
        213c3c:	0a000005 	beq	213c58 <TVSplSpl__FUlP6FPointT2PcPUlP9SplineSegT4l+0x2bc>
        213c40:	e2490018 	sub	r0, r9, #24	; 0x18
        213c44:	e59d1024 	ldr	r1, [sp, #36]
        213c48:	e8911008 	ldmia	r1, {r3, ip}
        213c4c:	e8801008 	stmia	r0, {r3, ip}
        213c50:	e8911008 	ldmia	r1, {r3, ip}
        213c54:	e88a1008 	stmia	sl, {r3, ip}
        213c58:	e59b001c 	ldr	r0, [fp, #28]
        213c5c:	e7c07004 	strb	r7, [r0, r4]
        213c60:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        213c64:	0c104d00 	ldceq	13, cr4, [r0]
    */
}

/**
 * Symbol: TVSplStr__FUlP6FPointT2PcPUlP9SplineSegT4l
 * Address: 00213c68
 */
void globals::TVSplStr() {
    /*
        213c68:	e1a0c00d 	mov	ip, sp
        213c6c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        213c70:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        213c74:	e24cb014 	sub	fp, ip, #20	; 0x14
        213c78:	e1a04000 	mov	r4, r0
        213c7c:	e1a07002 	mov	r7, r2
        213c80:	e59b2020 	ldr	r2, [fp, #32]
        213c84:	e28ba018 	add	sl, fp, #24	; 0x18
        213c88:	e89a0408 	ldmia	sl, {r3, sl}
        213c8c:	e59bc014 	ldr	ip, [fp, #20]
        213c90:	e24dd010 	sub	sp, sp, #16	; 0x10
        213c94:	e79c0100 	ldr	r0, [ip, r0, lsl #2]
        213c98:	e08cc104 	add	ip, ip, r4, lsl #2
        213c9c:	e51cc004 	ldr	ip, [ip, -#4]
        213ca0:	e040c00c 	sub	ip, r0, ip
        213ca4:	e791e180 	ldr	lr, [r1, r0, lsl #3]
        213ca8:	e040c0ac 	sub	ip, r0, ip, lsr #1
        213cac:	e791518c 	ldr	r5, [r1, ip, lsl #3]
        213cb0:	e04ee005 	sub	lr, lr, r5
        213cb4:	e0810180 	add	r0, r1, r0, lsl #3
        213cb8:	e58de000 	str	lr, [sp]
        213cbc:	e5900004 	ldr	r0, [r0, #4]
        213cc0:	e081118c 	add	r1, r1, ip, lsl #3
        213cc4:	e5911004 	ldr	r1, [r1, #4]
        213cc8:	e0401001 	sub	r1, r0, r1
        213ccc:	e58d1004 	str	r1, [sp, #4]
        213cd0:	e7971184 	ldr	r1, [r7, r4, lsl #3]
        213cd4:	e0878184 	add	r8, r7, r4, lsl #3
        213cd8:	e5180008 	ldr	r0, [r8, -#8]
        213cdc:	e0411000 	sub	r1, r1, r0
        213ce0:	e5180004 	ldr	r0, [r8, -#4]
        213ce4:	e598c004 	ldr	ip, [r8, #4]
        213ce8:	e04c0000 	sub	r0, ip, r0
        213cec:	e598c008 	ldr	ip, [r8, #8]
        213cf0:	e797e184 	ldr	lr, [r7, r4, lsl #3]
        213cf4:	e04c600e 	sub	r6, ip, lr
        213cf8:	e598c00c 	ldr	ip, [r8, #12]
        213cfc:	e598e004 	ldr	lr, [r8, #4]
        213d00:	e04c500e 	sub	r5, ip, lr
        213d04:	e0833284 	add	r3, r3, r4, lsl #5
        213d08:	e58d3008 	str	r3, [sp, #8]
        213d0c:	e2439008 	sub	r9, r3, #8	; 0x8
        213d10:	e2833010 	add	r3, r3, #16	; 0x10
        213d14:	e3320001 	teq	r2, #1	; 0x1
        213d18:	e58d300c 	str	r3, [sp, #12]
        213d1c:	0a00000d 	beq	213d58 <TVSplStr__FUlP6FPointT2PcPUlP9SplineSegT4l+0xf0>
        213d20:	e3320002 	teq	r2, #2	; 0x2
        213d24:	1a000029 	bne	213dd0 <TVSplStr__FUlP6FPointT2PcPUlP9SplineSegT4l+0x168>
        213d28:	e24dd008 	sub	sp, sp, #8	; 0x8
        213d2c:	e58d5004 	str	r5, [sp, #4]
        213d30:	e82d0041 	stmda	sp!, {r0, r6}
        213d34:	e58d1000 	str	r1, [sp]
        213d38:	e1a02006 	mov	r2, r6
        213d3c:	e1a03005 	mov	r3, r5
        213d40:	e28d1010 	add	r1, sp, #16	; 0x10
        213d44:	e8910003 	ldmia	r1, {r0, r1}
        213d48:	eb6555d6 	bl	1b694a8 <$CheckSmooth__F6FPointN31>
        213d4c:	e28dd010 	add	sp, sp, #16	; 0x10
        213d50:	e3300000 	teq	r0, #0	; 0x0
        213d54:	1a00001d 	bne	213dd0 <TVSplStr__FUlP6FPointT2PcPUlP9SplineSegT4l+0x168>
        213d58:	e3340001 	teq	r4, #1	; 0x1
        213d5c:	108a0004 	addne	r0, sl, r4
        213d60:	15500001 	ldrneb	r0, [r0, -#1]
        213d64:	13300000 	teqne	r0, #0	; 0x0
        213d68:	1a00000f 	bne	213dac <TVSplStr__FUlP6FPointT2PcPUlP9SplineSegT4l+0x144>
        213d6c:	e3a00001 	mov	r0, #1	; 0x1
        213d70:	e59b3010 	ldr	r3, [fp, #16]
        213d74:	e0831004 	add	r1, r3, r4
        213d78:	e5410001 	strb	r0, [r1, -#1]
        213d7c:	e7971184 	ldr	r1, [r7, r4, lsl #3]
        213d80:	e5180008 	ldr	r0, [r8, -#8]
        213d84:	e0410000 	sub	r0, r1, r0
        213d88:	e5981004 	ldr	r1, [r8, #4]
        213d8c:	e5182004 	ldr	r2, [r8, -#4]
        213d90:	e0411002 	sub	r1, r1, r2
        213d94:	e8890003 	stmia	r9, {r0, r1}
        213d98:	e59d3008 	ldr	r3, [sp, #8]
        213d9c:	e2430010 	sub	r0, r3, #16	; 0x10
        213da0:	e8991008 	ldmia	r9, {r3, ip}
        213da4:	e8801008 	stmia	r0, {r3, ip}
        213da8:	ea000003 	b	213dbc <TVSplStr__FUlP6FPointT2PcPUlP9SplineSegT4l+0x154>
        213dac:	e59d1004 	ldr	r1, [sp, #4]
        213db0:	e5891004 	str	r1, [r9, #4]
        213db4:	e59d0000 	ldr	r0, [sp]
        213db8:	e5890000 	str	r0, [r9]
        213dbc:	e59d000c 	ldr	r0, [sp, #12]
        213dc0:	e5805004 	str	r5, [r0, #4]
        213dc4:	e5806000 	str	r6, [r0]
        213dc8:	e3a00000 	mov	r0, #0	; 0x0
        213dcc:	ea000005 	b	213de8 <TVSplStr__FUlP6FPointT2PcPUlP9SplineSegT4l+0x180>
        213dd0:	e5895004 	str	r5, [r9, #4]
        213dd4:	e5896000 	str	r6, [r9]
        213dd8:	e59d000c 	ldr	r0, [sp, #12]
        213ddc:	e8991008 	ldmia	r9, {r3, ip}
        213de0:	e8801008 	stmia	r0, {r3, ip}
        213de4:	e3a00001 	mov	r0, #1	; 0x1
        213de8:	e7ca0004 	strb	r0, [sl, r4]
        213dec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TVSplEnds__FUcUlP6FPointT3PcPUlP9SplineSegT5
 * Address: 00213df0
 */
void globals::TVSplEnds() {
    /*
        213df0:	e1a0c00d 	mov	ip, sp
        213df4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        213df8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        213dfc:	e24cb014 	sub	fp, ip, #20	; 0x14
        213e00:	e1a05001 	mov	r5, r1
        213e04:	e1a04002 	mov	r4, r2
        213e08:	e59b1018 	ldr	r1, [fp, #24]
        213e0c:	e24dd008 	sub	sp, sp, #8	; 0x8
        213e10:	e20090ff 	and	r9, r0, #255	; 0xff
        213e14:	e7917105 	ldr	r7, [r1, r5, lsl #2]
        213e18:	e0810105 	add	r0, r1, r5, lsl #2
        213e1c:	e5b06004 	ldr	r6, [r0, #4]!
        213e20:	e59b3010 	ldr	r3, [fp, #16]
        213e24:	e0831185 	add	r1, r3, r5, lsl #3
        213e28:	e1a08001 	mov	r8, r1
        213e2c:	e2810008 	add	r0, r1, #8	; 0x8
        213e30:	eb651fe4 	bl	1b5bdc8 <$CheapDistPoint__FP6FPointT1>
        213e34:	e1a01000 	mov	r1, r0
        213e38:	e3a00003 	mov	r0, #3	; 0x3
        213e3c:	eb667abf 	bl	1bb2940 <$__rt_sdiv>
        213e40:	e1a0a000 	mov	sl, r0
        213e44:	e59b001c 	ldr	r0, [fp, #28]
        213e48:	e0800285 	add	r0, r0, r5, lsl #5
        213e4c:	e2801018 	add	r1, r0, #24	; 0x18
        213e50:	e2800010 	add	r0, r0, #16	; 0x10
        213e54:	e3390000 	teq	r9, #0	; 0x0
        213e58:	e88d0003 	stmia	sp, {r0, r1}
        213e5c:	1a00000c 	bne	213e94 <TVSplEnds__FUcUlP6FPointT3PcPUlP9SplineSegT5+0xa4>
        213e60:	e2875001 	add	r5, r7, #1	; 0x1
        213e64:	e0848187 	add	r8, r4, r7, lsl #3
        213e68:	e2466001 	sub	r6, r6, #1	; 0x1
        213e6c:	e0841185 	add	r1, r4, r5, lsl #3
        213e70:	e1a00008 	mov	r0, r8
        213e74:	eb651fd3 	bl	1b5bdc8 <$CheapDistPoint__FP6FPointT1>
        213e78:	e150000a 	cmp	r0, sl
        213e7c:	ca000002 	bgt	213e8c <TVSplEnds__FUcUlP6FPointT3PcPUlP9SplineSegT5+0x9c>
        213e80:	e1360005 	teq	r6, r5
        213e84:	12855001 	addne	r5, r5, #1	; 0x1
        213e88:	1afffff7 	bne	213e6c <TVSplEnds__FUcUlP6FPointT3PcPUlP9SplineSegT5+0x7c>
        213e8c:	e1a06005 	mov	r6, r5
        213e90:	ea000020 	b	213f18 <TVSplEnds__FUcUlP6FPointT3PcPUlP9SplineSegT5+0x128>
        213e94:	e3350000 	teq	r5, #0	; 0x0
        213e98:	159b0020 	ldrne	r0, [fp, #32]
        213e9c:	17d00005 	ldrneb	r0, [r0, r5]
        213ea0:	13300000 	teqne	r0, #0	; 0x0
        213ea4:	1a00000f 	bne	213ee8 <TVSplEnds__FUcUlP6FPointT3PcPUlP9SplineSegT5+0xf8>
        213ea8:	e3a00001 	mov	r0, #1	; 0x1
        213eac:	e59b1014 	ldr	r1, [fp, #20]
        213eb0:	e7c10005 	strb	r0, [r1, r5]
        213eb4:	e5980008 	ldr	r0, [r8, #8]
        213eb8:	e59b3010 	ldr	r3, [fp, #16]
        213ebc:	e7931185 	ldr	r1, [r3, r5, lsl #3]
        213ec0:	e0400001 	sub	r0, r0, r1
        213ec4:	e5b82004 	ldr	r2, [r8, #4]!
        213ec8:	e5981008 	ldr	r1, [r8, #8]
        213ecc:	e0411002 	sub	r1, r1, r2
        213ed0:	e59d2004 	ldr	r2, [sp, #4]
        213ed4:	e8820003 	stmia	r2, {r0, r1}
        213ed8:	e59d0000 	ldr	r0, [sp]
        213edc:	e8921008 	ldmia	r2, {r3, ip}
        213ee0:	e8801008 	stmia	r0, {r3, ip}
        213ee4:	ea000017 	b	213f48 <TVSplEnds__FUcUlP6FPointT3PcPUlP9SplineSegT5+0x158>
        213ee8:	e2465001 	sub	r5, r6, #1	; 0x1
        213eec:	e0848186 	add	r8, r4, r6, lsl #3
        213ef0:	e2877001 	add	r7, r7, #1	; 0x1
        213ef4:	e1a01008 	mov	r1, r8
        213ef8:	e0840185 	add	r0, r4, r5, lsl #3
        213efc:	eb651fb1 	bl	1b5bdc8 <$CheapDistPoint__FP6FPointT1>
        213f00:	e150000a 	cmp	r0, sl
        213f04:	ca000002 	bgt	213f14 <TVSplEnds__FUcUlP6FPointT3PcPUlP9SplineSegT5+0x124>
        213f08:	e1370005 	teq	r7, r5
        213f0c:	12455001 	subne	r5, r5, #1	; 0x1
        213f10:	1afffff7 	bne	213ef4 <TVSplEnds__FUcUlP6FPointT3PcPUlP9SplineSegT5+0x104>
        213f14:	e1a07005 	mov	r7, r5
        213f18:	e7940186 	ldr	r0, [r4, r6, lsl #3]
        213f1c:	e7941187 	ldr	r1, [r4, r7, lsl #3]
        213f20:	e0400001 	sub	r0, r0, r1
        213f24:	e0841186 	add	r1, r4, r6, lsl #3
        213f28:	e5911004 	ldr	r1, [r1, #4]
        213f2c:	e0842187 	add	r2, r4, r7, lsl #3
        213f30:	e5922004 	ldr	r2, [r2, #4]
        213f34:	e0411002 	sub	r1, r1, r2
        213f38:	e3390000 	teq	r9, #0	; 0x0
        213f3c:	159d2004 	ldrne	r2, [sp, #4]
        213f40:	059d2000 	ldreq	r2, [sp]
        213f44:	e8820003 	stmia	r2, {r0, r1}
        213f48:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TVStrHead(unsigned long, FPoint *, SplineSeg *)
 * Address: 00213f4c
 */
TVStrHead(unsigned long, FPoint *, SplineSeg *) {
    /*
        213f4c:	e0813180 	add	r3, r1, r0, lsl #3
        213f50:	e593c008 	ldr	ip, [r3, #8]
        213f54:	e7911180 	ldr	r1, [r1, r0, lsl #3]
        213f58:	e04c1001 	sub	r1, ip, r1
        213f5c:	e0820280 	add	r0, r2, r0, lsl #5
        213f60:	e5801010 	str	r1, [r0, #16]
        213f64:	e5b32004 	ldr	r2, [r3, #4]!
        213f68:	e5931008 	ldr	r1, [r3, #8]
        213f6c:	e0411002 	sub	r1, r1, r2
        213f70:	e5a01014 	str	r1, [r0, #20]!
        213f74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVStrTail__FUlP6FPointT2PcPUlP9SplineSegT4l
 * Address: 00213f78
 */
void globals::TVStrTail() {
    /*
        213f78:	e1a0c00d 	mov	ip, sp
        213f7c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        213f80:	e24cb004 	sub	fp, ip, #4	; 0x4
        213f84:	e1a04000 	mov	r4, r0
        213f88:	e59b0010 	ldr	r0, [fp, #16]
        213f8c:	e99b4080 	ldmib	fp, {r7, lr}
        213f90:	e59ba00c 	ldr	sl, [fp, #12]
        213f94:	e24dd008 	sub	sp, sp, #8	; 0x8
        213f98:	e7926184 	ldr	r6, [r2, r4, lsl #3]
        213f9c:	e082c184 	add	ip, r2, r4, lsl #3
        213fa0:	e51c5008 	ldr	r5, [ip, -#8]
        213fa4:	e0466005 	sub	r6, r6, r5
        213fa8:	e59c5004 	ldr	r5, [ip, #4]
        213fac:	e51c8004 	ldr	r8, [ip, -#4]
        213fb0:	e0455008 	sub	r5, r5, r8
        213fb4:	e7d33004 	ldrb	r3, [r3, r4]
        213fb8:	e08e8284 	add	r8, lr, r4, lsl #5
        213fbc:	e2489008 	sub	r9, r8, #8	; 0x8
        213fc0:	e3330001 	teq	r3, #1	; 0x1
        213fc4:	05895004 	streq	r5, [r9, #4]
        213fc8:	05896000 	streq	r6, [r9]
        213fcc:	0a00002c 	beq	214084 <TVStrTail__FUlP6FPointT2PcPUlP9SplineSegT4l+0x10c>
        213fd0:	e7973104 	ldr	r3, [r7, r4, lsl #2]
        213fd4:	e0877104 	add	r7, r7, r4, lsl #2
        213fd8:	e5977004 	ldr	r7, [r7, #4]
        213fdc:	e0477003 	sub	r7, r7, r3
        213fe0:	e08370a7 	add	r7, r3, r7, lsr #1
        213fe4:	e58d7004 	str	r7, [sp, #4]
        213fe8:	e7917187 	ldr	r7, [r1, r7, lsl #3]
        213fec:	e7918183 	ldr	r8, [r1, r3, lsl #3]
        213ff0:	e0478008 	sub	r8, r7, r8
        213ff4:	e59d7004 	ldr	r7, [sp, #4]
        213ff8:	e0817187 	add	r7, r1, r7, lsl #3
        213ffc:	e5977004 	ldr	r7, [r7, #4]
        214000:	e0811183 	add	r1, r1, r3, lsl #3
        214004:	e5911004 	ldr	r1, [r1, #4]
        214008:	e0477001 	sub	r7, r7, r1
        21400c:	e59c1008 	ldr	r1, [ip, #8]
        214010:	e7922184 	ldr	r2, [r2, r4, lsl #3]
        214014:	e0411002 	sub	r1, r1, r2
        214018:	e5bc3004 	ldr	r3, [ip, #4]!
        21401c:	e59c2008 	ldr	r2, [ip, #8]
        214020:	e0422003 	sub	r2, r2, r3
        214024:	e08e3284 	add	r3, lr, r4, lsl #5
        214028:	e2833010 	add	r3, r3, #16	; 0x10
        21402c:	e3300001 	teq	r0, #1	; 0x1
        214030:	e58d3000 	str	r3, [sp]
        214034:	0a00000d 	beq	214070 <TVStrTail__FUlP6FPointT2PcPUlP9SplineSegT4l+0xf8>
        214038:	e3300002 	teq	r0, #2	; 0x2
        21403c:	1a000012 	bne	21408c <TVStrTail__FUlP6FPointT2PcPUlP9SplineSegT4l+0x114>
        214040:	e24dd008 	sub	sp, sp, #8	; 0x8
        214044:	e88d0006 	stmia	sp, {r1, r2}
        214048:	e52d5004 	str	r5, [sp, -#4]!
        21404c:	e52d6004 	str	r6, [sp, -#4]!
        214050:	e1a00006 	mov	r0, r6
        214054:	e1a01005 	mov	r1, r5
        214058:	e1a02008 	mov	r2, r8
        21405c:	e1a03007 	mov	r3, r7
        214060:	eb655510 	bl	1b694a8 <$CheckSmooth__F6FPointN31>
        214064:	e28dd010 	add	sp, sp, #16	; 0x10
        214068:	e3300000 	teq	r0, #0	; 0x0
        21406c:	1a000006 	bne	21408c <TVStrTail__FUlP6FPointT2PcPUlP9SplineSegT4l+0x114>
        214070:	e5895004 	str	r5, [r9, #4]
        214074:	e5896000 	str	r6, [r9]
        214078:	e59d0000 	ldr	r0, [sp]
        21407c:	e5807004 	str	r7, [r0, #4]
        214080:	e5808000 	str	r8, [r0]
        214084:	e3a00000 	mov	r0, #0	; 0x0
        214088:	ea000005 	b	2140a4 <TVStrTail__FUlP6FPointT2PcPUlP9SplineSegT4l+0x12c>
        21408c:	e5895004 	str	r5, [r9, #4]
        214090:	e5896000 	str	r6, [r9]
        214094:	e59d0000 	ldr	r0, [sp]
        214098:	e8991008 	ldmia	r9, {r3, ip}
        21409c:	e8801008 	stmia	r0, {r3, ip}
        2140a0:	e3a00001 	mov	r0, #1	; 0x1
        2140a4:	e7ca0004 	strb	r0, [sl, r4]
        2140a8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: triads_unload(void **)
 * Address: 0021c0cc
 */
triads_unload(void **) {
    /*
        21c0cc:	e1a0c00d 	mov	ip, sp
        21c0d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21c0d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c0d8:	e1a04000 	mov	r4, r0
        21c0dc:	e5900000 	ldr	r0, [r0]
        21c0e0:	eb614db2 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        21c0e4:	e3a05000 	mov	r5, #0	; 0x0
        21c0e8:	e3500000 	cmp	r0, #0	; 0x0
        21c0ec:	1a000002 	bne	21c0fc <triads_unload(void **)+0x30>
        21c0f0:	e5940000 	ldr	r0, [r4]
        21c0f4:	eb614daf 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        21c0f8:	ea000006 	b	21c118 <triads_unload(void **)+0x4c>
        21c0fc:	0a000005 	beq	21c118 <triads_unload(void **)+0x4c>
        21c100:	eb645a05 	bl	1b3291c <$triads_unlock(void *)>
        21c104:	e5940000 	ldr	r0, [r4]
        21c108:	eb614da9 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        21c10c:	e5940000 	ldr	r0, [r4]
        21c110:	eb614da8 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        21c114:	e5845000 	str	r5, [r4]
        21c118:	e1a00005 	mov	r0, r5
        21c11c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: triads_lock(void *)
 * Address: 0021c120
 */
triads_lock(void *) {
    /*
        21c120:	e1a0c00d 	mov	ip, sp
        21c124:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21c128:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c12c:	e1b04000 	movs	r4, r0
        21c130:	0a00000b 	beq	21c164 <triads_lock(void *)+0x44>
        21c134:	e5940090 	ldr	r0, [r4, #144]
        21c138:	e3300000 	teq	r0, #0	; 0x0
        21c13c:	1a000006 	bne	21c15c <triads_lock(void *)+0x3c>
        21c140:	e594008c 	ldr	r0, [r4, #140]
        21c144:	e3300000 	teq	r0, #0	; 0x0
        21c148:	0a000003 	beq	21c15c <triads_lock(void *)+0x3c>
        21c14c:	eb6430ad 	bl	1b28408 <$LockRamParaData(unsigned long)>
        21c150:	e5a40090 	str	r0, [r4, #144]!
        21c154:	e3300000 	teq	r0, #0	; 0x0
        21c158:	0a000001 	beq	21c164 <triads_lock(void *)+0x44>
        21c15c:	e3a00000 	mov	r0, #0	; 0x0
        21c160:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        21c164:	e3a00001 	mov	r0, #1	; 0x1
        21c168:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: triads_unlock(void *)
 * Address: 0021c16c
 */
triads_unlock(void *) {
    /*
        21c16c:	e1a0c00d 	mov	ip, sp
        21c170:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21c174:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c178:	e1b04000 	movs	r4, r0
        21c17c:	03a00001 	moveq	r0, #1	; 0x1
        21c180:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        21c184:	e3a05000 	mov	r5, #0	; 0x0
        21c188:	e5940090 	ldr	r0, [r4, #144]
        21c18c:	e3300000 	teq	r0, #0	; 0x0
        21c190:	1594008c 	ldrne	r0, [r4, #140]
        21c194:	13300000 	teqne	r0, #0	; 0x0
        21c198:	0a000001 	beq	21c1a4 <triads_unlock(void *)+0x38>
        21c19c:	eb6430a6 	bl	1b2843c <$UnlockRamParaData(unsigned long)>
        21c1a0:	e5a45090 	str	r5, [r4, #144]!
        21c1a4:	e1a00005 	mov	r0, r5
        21c1a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TestScrub(TDArray *, FRect *, UnitInterpretation *)
 * Address: 0021ebb8
 */
TestScrub(TDArray *, FRect *, UnitInterpretation *) {
    /*
        21ebb8:	e1a0c00d 	mov	ip, sp
        21ebbc:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        21ebc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ebc4:	e1a05000 	mov	r5, r0
        21ebc8:	e24dd0a0 	sub	sp, sp, #160	; 0xa0
        21ebcc:	e3a06000 	mov	r6, #0	; 0x0
        21ebd0:	e590800c 	ldr	r8, [r0, #12]
        21ebd4:	e3580004 	cmp	r8, #4	; 0x4
        21ebd8:	9a000001 	bls	21ebe4 <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x2c>
        21ebdc:	e3580028 	cmp	r8, #40	; 0x28
        21ebe0:	3a000001 	bcc	21ebec <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x34>
        21ebe4:	e3a00000 	mov	r0, #0	; 0x0
        21ebe8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        21ebec:	e24dd0b4 	sub	sp, sp, #180	; 0xb4
        21ebf0:	e1a0000d 	mov	r0, sp
        21ebf4:	eb6519b4 	bl	1b652cc <$InitTurnData(TurnData *)>
        21ebf8:	e1a00005 	mov	r0, r5
        21ebfc:	e3a01000 	mov	r1, #0	; 0x0
        21ec00:	e5952000 	ldr	r2, [r5]
        21ec04:	e1a0e00f 	mov	lr, pc
        21ec08:	e282f01c 	add	pc, r2, #28	; 0x1c
        21ec0c:	e1a07000 	mov	r7, r0
        21ec10:	e3a05001 	mov	r5, #1	; 0x1
        21ec14:	e3580001 	cmp	r8, #1	; 0x1
        21ec18:	9a00000f 	bls	21ec5c <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0xa4>
        21ec1c:	e0879185 	add	r9, r7, r5, lsl #3
        21ec20:	e2491008 	sub	r1, r9, #8	; 0x8
        21ec24:	e1a0a001 	mov	sl, r1
        21ec28:	e1a00009 	mov	r0, r9
        21ec2c:	eb6504d8 	bl	1b5ff94 <$GetSlope>
        21ec30:	e28d10b4 	add	r1, sp, #180	; 0xb4
        21ec34:	e7810105 	str	r0, [r1, r5, lsl #2]
        21ec38:	e1a01009 	mov	r1, r9
        21ec3c:	e1a0000a 	mov	r0, sl
        21ec40:	eb64f460 	bl	1b5bdc8 <$CheapDistPoint__FP6FPointT1>
        21ec44:	e0806006 	add	r6, r0, r6
        21ec48:	e3350001 	teq	r5, #1	; 0x1
        21ec4c:	01a04006 	moveq	r4, r6
        21ec50:	e2855001 	add	r5, r5, #1	; 0x1
        21ec54:	e1550008 	cmp	r5, r8
        21ec58:	3affffef 	bcc	21ec1c <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x64>
        21ec5c:	e2480001 	sub	r0, r8, #1	; 0x1
        21ec60:	e1a01006 	mov	r1, r6
        21ec64:	eb664f37 	bl	1bb2948 <$__rt_udiv>
        21ec68:	e1a05000 	mov	r5, r0
        21ec6c:	e3a09000 	mov	r9, #0	; 0x0
        21ec70:	e28d10b8 	add	r1, sp, #184	; 0xb8
        21ec74:	e8910003 	ldmia	r1, {r0, r1}
        21ec78:	eb64fc80 	bl	1b5de80 <$DeltaAngle>
        21ec7c:	e15400c5 	cmp	r4, r5, asr #1
        21ec80:	b3a00000 	movlt	r0, #0	; 0x0
        21ec84:	e1a04000 	mov	r4, r0
        21ec88:	eb651143 	bl	1b6319c <$Signum(long)>
        21ec8c:	e1a0a000 	mov	sl, r0
        21ec90:	e24dd008 	sub	sp, sp, #8	; 0x8
        21ec94:	e2871010 	add	r1, r7, #16	; 0x10
        21ec98:	e8915000 	ldmia	r1, {ip, lr}
        21ec9c:	e88d5000 	stmia	sp, {ip, lr}
        21eca0:	e28d0008 	add	r0, sp, #8	; 0x8
        21eca4:	e8970006 	ldmia	r7, {r1, r2}
        21eca8:	e49d3004 	ldr	r3, [sp], #4
        21ecac:	eb65198d 	bl	1b652e8 <$NewTurn__FP8TurnData6FPointT2>
        21ecb0:	e28dd004 	add	sp, sp, #4	; 0x4
        21ecb4:	e3a06003 	mov	r6, #3	; 0x3
        21ecb8:	e3580003 	cmp	r8, #3	; 0x3
        21ecbc:	9a000035 	bls	21ed98 <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x1e0>
        21ecc0:	e28d00b4 	add	r0, sp, #180	; 0xb4
        21ecc4:	e7901106 	ldr	r1, [r0, r6, lsl #2]
        21ecc8:	e28d00b4 	add	r0, sp, #180	; 0xb4
        21eccc:	e0800106 	add	r0, r0, r6, lsl #2
        21ecd0:	e5100004 	ldr	r0, [r0, -#4]
        21ecd4:	eb64fc69 	bl	1b5de80 <$DeltaAngle>
        21ecd8:	e1a05000 	mov	r5, r0
        21ecdc:	eb65112e 	bl	1b6319c <$Signum(long)>
        21ece0:	e3550000 	cmp	r5, #0	; 0x0
        21ece4:	a1a01005 	movge	r1, r5
        21ece8:	b2651000 	rsblt	r1, r5, #0	; 0x0
        21ecec:	e35108aa 	cmp	r1, #11141120	; 0xaa0000
        21ecf0:	ba000002 	blt	21ed00 <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x148>
        21ecf4:	e13a0000 	teq	sl, r0
        21ecf8:	026a0000 	rsbeq	r0, sl, #0	; 0x0
        21ecfc:	02655000 	rsbeq	r5, r5, #0	; 0x0
        21ed00:	e13a0000 	teq	sl, r0
        21ed04:	1a000005 	bne	21ed20 <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x168>
        21ed08:	e0844005 	add	r4, r4, r5
        21ed0c:	e0872186 	add	r2, r7, r6, lsl #3
        21ed10:	e1a0000d 	mov	r0, sp
        21ed14:	e8920006 	ldmia	r2, {r1, r2}
        21ed18:	eb651554 	bl	1b64270 <$ExtendTurn(TurnData *, FPoint)>
        21ed1c:	ea000013 	b	21ed70 <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x1b8>
        21ed20:	e3540000 	cmp	r4, #0	; 0x0
        21ed24:	b2644000 	rsblt	r4, r4, #0	; 0x0
        21ed28:	e354086e 	cmp	r4, #7208960	; 0x6e0000
        21ed2c:	c2899001 	addgt	r9, r9, #1	; 0x1
        21ed30:	e1a04005 	mov	r4, r5
        21ed34:	e1a0a000 	mov	sl, r0
        21ed38:	e0875186 	add	r5, r7, r6, lsl #3
        21ed3c:	e2452008 	sub	r2, r5, #8	; 0x8
        21ed40:	e1a0000d 	mov	r0, sp
        21ed44:	e8920006 	ldmia	r2, {r1, r2}
        21ed48:	eb651547 	bl	1b6426c <$EndTurn(TurnData *, FPoint)>
        21ed4c:	e24dd008 	sub	sp, sp, #8	; 0x8
        21ed50:	e8955000 	ldmia	r5, {ip, lr}
        21ed54:	e88d5000 	stmia	sp, {ip, lr}
        21ed58:	e2452010 	sub	r2, r5, #16	; 0x10
        21ed5c:	e28d0008 	add	r0, sp, #8	; 0x8
        21ed60:	e8920006 	ldmia	r2, {r1, r2}
        21ed64:	e49d3004 	ldr	r3, [sp], #4
        21ed68:	eb65195e 	bl	1b652e8 <$NewTurn__FP8TurnData6FPointT2>
        21ed6c:	e28dd004 	add	sp, sp, #4	; 0x4
        21ed70:	e3540000 	cmp	r4, #0	; 0x0
        21ed74:	a1a00004 	movge	r0, r4
        21ed78:	b2640000 	rsblt	r0, r4, #0	; 0x0
        21ed7c:	e350072d 	cmp	r0, #11796480	; 0xb40000
        21ed80:	da000001 	ble	21ed8c <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x1d4>
        21ed84:	e3a00000 	mov	r0, #0	; 0x0
        21ed88:	ea000017 	b	21edec <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x234>
        21ed8c:	e2866001 	add	r6, r6, #1	; 0x1
        21ed90:	e1560008 	cmp	r6, r8
        21ed94:	3affffc9 	bcc	21ecc0 <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x108>
        21ed98:	e3540000 	cmp	r4, #0	; 0x0
        21ed9c:	b2644000 	rsblt	r4, r4, #0	; 0x0
        21eda0:	e354086e 	cmp	r4, #7208960	; 0x6e0000
        21eda4:	c2899001 	addgt	r9, r9, #1	; 0x1
        21eda8:	e0870186 	add	r0, r7, r6, lsl #3
        21edac:	e2402008 	sub	r2, r0, #8	; 0x8
        21edb0:	e1a0000d 	mov	r0, sp
        21edb4:	e8920006 	ldmia	r2, {r1, r2}
        21edb8:	eb65152b 	bl	1b6426c <$EndTurn(TurnData *, FPoint)>
        21edbc:	e3590002 	cmp	r9, #2	; 0x2
        21edc0:	9affffef 	bls	21ed84 <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x1cc>
        21edc4:	e1a0000d 	mov	r0, sp
        21edc8:	eb651d62 	bl	1b66358 <$ValidTurnSequence(TurnData *)>
        21edcc:	e3300000 	teq	r0, #0	; 0x0
        21edd0:	0affffeb 	beq	21ed84 <TestScrub(TDArray *, FRect *, UnitInterpretation *)+0x1cc>
        21edd4:	e3a00001 	mov	r0, #1	; 0x1
        21edd8:	e51b202c 	ldr	r2, [fp, -#44]
        21eddc:	e3a01000 	mov	r1, #0	; 0x0
        21ede0:	e5820000 	str	r0, [r2]
        21ede4:	e51b202c 	ldr	r2, [fp, -#44]
        21ede8:	e5a21004 	str	r1, [r2, #4]!
        21edec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TestCarets(TDArray *, UnitInterpretation *)
 * Address: 0021ee64
 */
TestCarets(TDArray *, UnitInterpretation *) {
    /*
        21ee64:	e1a0c00d 	mov	ip, sp
        21ee68:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        21ee6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ee70:	e1a05000 	mov	r5, r0
        21ee74:	e1a04001 	mov	r4, r1
        21ee78:	e24dd028 	sub	sp, sp, #40	; 0x28
        21ee7c:	e3a06000 	mov	r6, #0	; 0x0
        21ee80:	e590700c 	ldr	r7, [r0, #12]
        21ee84:	e3370003 	teq	r7, #3	; 0x3
        21ee88:	13370004 	teqne	r7, #4	; 0x4
        21ee8c:	1a000023 	bne	21ef20 <TestCarets(TDArray *, UnitInterpretation *)+0xbc>
        21ee90:	e1a00005 	mov	r0, r5
        21ee94:	e3a01000 	mov	r1, #0	; 0x0
        21ee98:	e5952000 	ldr	r2, [r5]
        21ee9c:	e1a0e00f 	mov	lr, pc
        21eea0:	e282f01c 	add	pc, r2, #28	; 0x1c
        21eea4:	e1a01000 	mov	r1, r0
        21eea8:	e28d0020 	add	r0, sp, #32	; 0x20
        21eeac:	e3a02008 	mov	r2, #8	; 0x8
        21eeb0:	eb6656e6 	bl	1bb4a50 <$memcpy>
        21eeb4:	e1a00005 	mov	r0, r5
        21eeb8:	e3a01001 	mov	r1, #1	; 0x1
        21eebc:	e5952000 	ldr	r2, [r5]
        21eec0:	e1a0e00f 	mov	lr, pc
        21eec4:	e282f01c 	add	pc, r2, #28	; 0x1c
        21eec8:	e1a01000 	mov	r1, r0
        21eecc:	e28d0018 	add	r0, sp, #24	; 0x18
        21eed0:	e3a02008 	mov	r2, #8	; 0x8
        21eed4:	eb6656dd 	bl	1bb4a50 <$memcpy>
        21eed8:	e1a00005 	mov	r0, r5
        21eedc:	e3a01002 	mov	r1, #2	; 0x2
        21eee0:	e5952000 	ldr	r2, [r5]
        21eee4:	e1a0e00f 	mov	lr, pc
        21eee8:	e282f01c 	add	pc, r2, #28	; 0x1c
        21eeec:	e1a01000 	mov	r1, r0
        21eef0:	e28d0010 	add	r0, sp, #16	; 0x10
        21eef4:	e3a02008 	mov	r2, #8	; 0x8
        21eef8:	eb6656d4 	bl	1bb4a50 <$memcpy>
        21eefc:	e28d1018 	add	r1, sp, #24	; 0x18
        21ef00:	e28d0020 	add	r0, sp, #32	; 0x20
        21ef04:	eb64f3af 	bl	1b5bdc8 <$CheapDistPoint__FP6FPointT1>
        21ef08:	e1a08000 	mov	r8, r0
        21ef0c:	e28d1010 	add	r1, sp, #16	; 0x10
        21ef10:	e28d0018 	add	r0, sp, #24	; 0x18
        21ef14:	eb64f3ab 	bl	1b5bdc8 <$CheapDistPoint__FP6FPointT1>
        21ef18:	e15000c8 	cmp	r0, r8, asr #1
        21ef1c:	aa000001 	bge	21ef28 <TestCarets(TDArray *, UnitInterpretation *)+0xc4>
        21ef20:	e1a00006 	mov	r0, r6
        21ef24:	ea00004f 	b	21f068 <TestCarets(TDArray *, UnitInterpretation *)+0x204>
        21ef28:	e15800c0 	cmp	r8, r0, asr #1
        21ef2c:	aa000021 	bge	21efb8 <TestCarets(TDArray *, UnitInterpretation *)+0x154>
        21ef30:	e3370004 	teq	r7, #4	; 0x4
        21ef34:	0afffff9 	beq	21ef20 <TestCarets(TDArray *, UnitInterpretation *)+0xbc>
        21ef38:	e1a01000 	mov	r1, r0
        21ef3c:	e1a00008 	mov	r0, r8
        21ef40:	eb67085e 	bl	1be10c0 <$FixedDivide>
        21ef44:	e1a02000 	mov	r2, r0
        21ef48:	e1a0300d 	mov	r3, sp
        21ef4c:	e28d1010 	add	r1, sp, #16	; 0x10
        21ef50:	e28d0018 	add	r0, sp, #24	; 0x18
        21ef54:	eb650434 	bl	1b6002c <$Interpolate__FP6FPointT1lT1>
        21ef58:	e1a00005 	mov	r0, r5
        21ef5c:	e5951000 	ldr	r1, [r5]
        21ef60:	e1a0e00f 	mov	lr, pc
        21ef64:	e281f014 	add	pc, r1, #20	; 0x14
        21ef68:	e1a00005 	mov	r0, r5
        21ef6c:	e3a01002 	mov	r1, #2	; 0x2
        21ef70:	e5952000 	ldr	r2, [r5]
        21ef74:	e1a0e00f 	mov	lr, pc
        21ef78:	e282f01c 	add	pc, r2, #28	; 0x1c
        21ef7c:	e1a0100d 	mov	r1, sp
        21ef80:	e3a02008 	mov	r2, #8	; 0x8
        21ef84:	eb6656b1 	bl	1bb4a50 <$memcpy>
        21ef88:	e1a00005 	mov	r0, r5
        21ef8c:	e3a01003 	mov	r1, #3	; 0x3
        21ef90:	e5952000 	ldr	r2, [r5]
        21ef94:	e1a0e00f 	mov	lr, pc
        21ef98:	e282f01c 	add	pc, r2, #28	; 0x1c
        21ef9c:	e28d1010 	add	r1, sp, #16	; 0x10
        21efa0:	e3a02008 	mov	r2, #8	; 0x8
        21efa4:	eb6656a9 	bl	1bb4a50 <$memcpy>
        21efa8:	e28d0010 	add	r0, sp, #16	; 0x10
        21efac:	e89d5000 	ldmia	sp, {ip, lr}
        21efb0:	e8805000 	stmia	r0, {ip, lr}
        21efb4:	e3a07004 	mov	r7, #4	; 0x4
        21efb8:	e28d1018 	add	r1, sp, #24	; 0x18
        21efbc:	e28d0020 	add	r0, sp, #32	; 0x20
        21efc0:	eb6503f3 	bl	1b5ff94 <$GetSlope>
        21efc4:	e1a08000 	mov	r8, r0
        21efc8:	e28d1018 	add	r1, sp, #24	; 0x18
        21efcc:	e28d0010 	add	r0, sp, #16	; 0x10
        21efd0:	eb6503ef 	bl	1b5ff94 <$GetSlope>
        21efd4:	e1a01000 	mov	r1, r0
        21efd8:	e1a0a000 	mov	sl, r0
        21efdc:	e1a00008 	mov	r0, r8
        21efe0:	eb64fba6 	bl	1b5de80 <$DeltaAngle>
        21efe4:	e1a09000 	mov	r9, r0
        21efe8:	e1a0100a 	mov	r1, sl
        21efec:	e1a00008 	mov	r0, r8
        21eff0:	eb650837 	bl	1b610d4 <$MidAngle>
        21eff4:	e1a08000 	mov	r8, r0
        21eff8:	e3590000 	cmp	r9, #0	; 0x0
        21effc:	e5840008 	str	r0, [r4, #8]
        21f000:	a1a00009 	movge	r0, r9
        21f004:	b2690000 	rsblt	r0, r9, #0	; 0x0
        21f008:	e3a0a001 	mov	sl, #1	; 0x1
        21f00c:	e350086e 	cmp	r0, #7208960	; 0x6e0000
        21f010:	ca000007 	bgt	21f034 <TestCarets(TDArray *, UnitInterpretation *)+0x1d0>
        21f014:	e3500846 	cmp	r0, #4587520	; 0x460000
        21f018:	a3580873 	cmpge	r8, #7536640	; 0x730000
        21f01c:	ba000004 	blt	21f034 <TestCarets(TDArray *, UnitInterpretation *)+0x1d0>
        21f020:	e358089b 	cmp	r8, #10158080	; 0x9b0000
        21f024:	ca000002 	bgt	21f034 <TestCarets(TDArray *, UnitInterpretation *)+0x1d0>
        21f028:	e3370003 	teq	r7, #3	; 0x3
        21f02c:	03a00006 	moveq	r0, #6	; 0x6
        21f030:	0a00002e 	beq	21f0f0 <TestCarets(TDArray *, UnitInterpretation *)+0x28c>
        21f034:	e3a02002 	mov	r2, #2	; 0x2
        21f038:	e350071e 	cmp	r0, #7864320	; 0x780000
        21f03c:	ca00000a 	bgt	21f06c <TestCarets(TDArray *, UnitInterpretation *)+0x208>
        21f040:	e3580000 	cmp	r8, #0	; 0x0
        21f044:	a1a01008 	movge	r1, r8
        21f048:	b2681000 	rsblt	r1, r8, #0	; 0x0
        21f04c:	e351060a 	cmp	r1, #10485760	; 0xa00000
        21f050:	ba000005 	blt	21f06c <TestCarets(TDArray *, UnitInterpretation *)+0x208>
        21f054:	e3370003 	teq	r7, #3	; 0x3
        21f058:	1a000003 	bne	21f06c <TestCarets(TDArray *, UnitInterpretation *)+0x208>
        21f05c:	e5842000 	str	r2, [r4]
        21f060:	ea000023 	b	21f0f4 <TestCarets(TDArray *, UnitInterpretation *)+0x290>
        21f064:	e1a0000a 	mov	r0, sl
        21f068:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        21f06c:	e3500719 	cmp	r0, #6553600	; 0x640000
        21f070:	caffffaa 	bgt	21ef20 <TestCarets(TDArray *, UnitInterpretation *)+0xbc>
        21f074:	e3370003 	teq	r7, #3	; 0x3
        21f078:	0afffff7 	beq	21f05c <TestCarets(TDArray *, UnitInterpretation *)+0x1f8>
        21f07c:	e1a00005 	mov	r0, r5
        21f080:	e3a01003 	mov	r1, #3	; 0x3
        21f084:	e5952000 	ldr	r2, [r5]
        21f088:	e1a0e00f 	mov	lr, pc
        21f08c:	e282f01c 	add	pc, r2, #28	; 0x1c
        21f090:	e1a01000 	mov	r1, r0
        21f094:	e28d0008 	add	r0, sp, #8	; 0x8
        21f098:	e3a02008 	mov	r2, #8	; 0x8
        21f09c:	eb66566b 	bl	1bb4a50 <$memcpy>
        21f0a0:	e28d1008 	add	r1, sp, #8	; 0x8
        21f0a4:	e28d0010 	add	r0, sp, #16	; 0x10
        21f0a8:	eb6503b9 	bl	1b5ff94 <$GetSlope>
        21f0ac:	e1a01008 	mov	r1, r8
        21f0b0:	eb64fb72 	bl	1b5de80 <$DeltaAngle>
        21f0b4:	e3500000 	cmp	r0, #0	; 0x0
        21f0b8:	a1a01000 	movge	r1, r0
        21f0bc:	b2601000 	rsblt	r1, r0, #0	; 0x0
        21f0c0:	e3510891 	cmp	r1, #9502720	; 0x910000
        21f0c4:	c3a00005 	movgt	r0, #5	; 0x5
        21f0c8:	ca000008 	bgt	21f0f0 <TestCarets(TDArray *, UnitInterpretation *)+0x28c>
        21f0cc:	e3590000 	cmp	r9, #0	; 0x0
        21f0d0:	b2600000 	rsblt	r0, r0, #0	; 0x0
        21f0d4:	e3a0185a 	mov	r1, #5898240	; 0x5a0000
        21f0d8:	eb64fb68 	bl	1b5de80 <$DeltaAngle>
        21f0dc:	e3500000 	cmp	r0, #0	; 0x0
        21f0e0:	b2600000 	rsblt	r0, r0, #0	; 0x0
        21f0e4:	e3500705 	cmp	r0, #1310720	; 0x140000
        21f0e8:	aaffff8c 	bge	21ef20 <TestCarets(TDArray *, UnitInterpretation *)+0xbc>
        21f0ec:	e3a00003 	mov	r0, #3	; 0x3
        21f0f0:	e5840000 	str	r0, [r4]
        21f0f4:	e5a46004 	str	r6, [r4, #4]!
        21f0f8:	eaffffd9 	b	21f064 <TestCarets(TDArray *, UnitInterpretation *)+0x200>
    */
}

/**
 * Symbol: TestLine(TDArray *, UnitInterpretation *)
 * Address: 0021f0fc
 */
TestLine(TDArray *, UnitInterpretation *) {
    /*
        21f0fc:	e1a0c00d 	mov	ip, sp
        21f100:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21f104:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f108:	e1a05000 	mov	r5, r0
        21f10c:	e1a04001 	mov	r4, r1
        21f110:	e590000c 	ldr	r0, [r0, #12]
        21f114:	e3a06000 	mov	r6, #0	; 0x0
        21f118:	e3300002 	teq	r0, #2	; 0x2
        21f11c:	11a00006 	movne	r0, r6
        21f120:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        21f124:	e1a00005 	mov	r0, r5
        21f128:	e3a01000 	mov	r1, #0	; 0x0
        21f12c:	e5952000 	ldr	r2, [r5]
        21f130:	e1a0e00f 	mov	lr, pc
        21f134:	e282f01c 	add	pc, r2, #28	; 0x1c
        21f138:	e1a07000 	mov	r7, r0
        21f13c:	e1a00005 	mov	r0, r5
        21f140:	e3a01001 	mov	r1, #1	; 0x1
        21f144:	e5952000 	ldr	r2, [r5]
        21f148:	e1a0e00f 	mov	lr, pc
        21f14c:	e282f01c 	add	pc, r2, #28	; 0x1c
        21f150:	e1a01000 	mov	r1, r0
        21f154:	e1a00007 	mov	r0, r7
        21f158:	eb65038d 	bl	1b5ff94 <$GetSlope>
        21f15c:	e5840008 	str	r0, [r4, #8]
        21f160:	e3a00004 	mov	r0, #4	; 0x4
        21f164:	e8840041 	stmia	r4, {r0, r6}
        21f168:	e3a00001 	mov	r0, #1	; 0x1
        21f16c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TraceContour(TArray *, FPoint *)
 * Address: 00221118
 */
TraceContour(TArray *, FPoint *) {
    /*
        221118:	e1a0c00d 	mov	ip, sp
        22111c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        221120:	e24cb004 	sub	fp, ip, #4	; 0x4
        221124:	e1a04000 	mov	r4, r0
        221128:	e1a05001 	mov	r5, r1
        22112c:	e24dd004 	sub	sp, sp, #4	; 0x4
        221130:	e3a01000 	mov	r1, #0	; 0x0
        221134:	e5902000 	ldr	r2, [r0]
        221138:	e590a00c 	ldr	sl, [r0, #12]
        22113c:	e1a0e00f 	mov	lr, pc
        221140:	e282f01c 	add	pc, r2, #28	; 0x1c
        221144:	e1a01000 	mov	r1, r0
        221148:	e1a00005 	mov	r0, r5
        22114c:	eb652928 	bl	1b6b5f4 <$GetQuadPoint__FP6FPointT1>
        221150:	e1a06000 	mov	r6, r0
        221154:	e3a07001 	mov	r7, #1	; 0x1
        221158:	e3a00000 	mov	r0, #0	; 0x0
        22115c:	e3a09001 	mov	r9, #1	; 0x1
        221160:	e35a0001 	cmp	sl, #1	; 0x1
        221164:	e58d0000 	str	r0, [sp]
        221168:	9a00001b 	bls	2211dc <TraceContour(TArray *, FPoint *)+0xc4>
        22116c:	e1a01009 	mov	r1, r9
        221170:	e1a00004 	mov	r0, r4
        221174:	e5942000 	ldr	r2, [r4]
        221178:	e1a0e00f 	mov	lr, pc
        22117c:	e282f01c 	add	pc, r2, #28	; 0x1c
        221180:	e1a01000 	mov	r1, r0
        221184:	e1a00005 	mov	r0, r5
        221188:	eb652919 	bl	1b6b5f4 <$GetQuadPoint__FP6FPointT1>
        22118c:	e1a08000 	mov	r8, r0
        221190:	e1300006 	teq	r0, r6
        221194:	02877001 	addeq	r7, r7, #1	; 0x1
        221198:	0a00000c 	beq	2211d0 <TraceContour(TArray *, FPoint *)+0xb8>
        22119c:	e3570002 	cmp	r7, #2	; 0x2
        2211a0:	31a06008 	movcc	r6, r8
        2211a4:	3a000009 	bcc	2211d0 <TraceContour(TArray *, FPoint *)+0xb8>
        2211a8:	e1a0200d 	mov	r2, sp
        2211ac:	e1a01008 	mov	r1, r8
        2211b0:	e1a00006 	mov	r0, r6
        2211b4:	eb653136 	bl	1b6d694 <$NextQuad__FUlT1Pl>
        2211b8:	e3300000 	teq	r0, #0	; 0x0
        2211bc:	11a06008 	movne	r6, r8
        2211c0:	13a07001 	movne	r7, #1	; 0x1
        2211c4:	1a000001 	bne	2211d0 <TraceContour(TArray *, FPoint *)+0xb8>
        2211c8:	e3a00000 	mov	r0, #0	; 0x0
        2211cc:	ea000003 	b	2211e0 <TraceContour(TArray *, FPoint *)+0xc8>
        2211d0:	e2899002 	add	r9, r9, #2	; 0x2
        2211d4:	e159000a 	cmp	r9, sl
        2211d8:	3affffe3 	bcc	22116c <TraceContour(TArray *, FPoint *)+0x54>
        2211dc:	e3a00001 	mov	r0, #1	; 0x1
        2211e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TestFlag(SamplePt *, unsigned long)
 * Address: 002221d8
 */
TestFlag(SamplePt *, unsigned long) {
    /*
        2221d8:	e5900002 	ldr	r0, [r0, #2]
        2221dc:	e1a00820 	mov	r0, r0, lsr #16
        2221e0:	e2000902 	and	r0, r0, #32768	; 0x8000
        2221e4:	e0010740 	and	r0, r1, r0, asr #14
        2221e8:	e20000ff 	and	r0, r0, #255	; 0xff
        2221ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TryStringLength(void)
 * Address: 0022ee08
 */
TryStringLength(void) {
    /*
        22ee08:	e59f0000 	ldr	r0, [pc, #0]	; 22ee10 <TryStringLength(void)+0x8>
        22ee0c:	ea66fe53 	b	1bee760 <$Ustrlen>
        22ee10:	0c104d64 	ldceq	13, cr4, [r0], -#400
    */
}

/**
 * Symbol: TabKindSymbolToNum(RefVar const &)
 * Address: 0022f83c
 */
TabKindSymbolToNum(RefVar const &) {
    /*
        22f83c:	e1a0c00d 	mov	ip, sp
        22f840:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22f844:	e24cb004 	sub	fp, ip, #4	; 0x4
        22f848:	e1a04000 	mov	r4, r0
        22f84c:	e59f0064 	ldr	r0, [pc, #64]	; 22f8b8 <TabKindSymbolToNum(RefVar const &)+0x7c>
        22f850:	e5900000 	ldr	r0, [r0]
        22f854:	e5901000 	ldr	r1, [r0]
        22f858:	e5940000 	ldr	r0, [r4]
        22f85c:	e5900000 	ldr	r0, [r0]
        22f860:	eb665272 	bl	1bc4230 <$EQRef__FlT1>
        22f864:	e3300000 	teq	r0, #0	; 0x0
        22f868:	13a000ff 	movne	r0, #255	; 0xff
        22f86c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        22f870:	e59f0044 	ldr	r0, [pc, #44]	; 22f8bc <TabKindSymbolToNum(RefVar const &)+0x80>
        22f874:	e5900000 	ldr	r0, [r0]
        22f878:	e5901000 	ldr	r1, [r0]
        22f87c:	e5940000 	ldr	r0, [r4]
        22f880:	e5900000 	ldr	r0, [r0]
        22f884:	eb665269 	bl	1bc4230 <$EQRef__FlT1>
        22f888:	e3300000 	teq	r0, #0	; 0x0
        22f88c:	13a00001 	movne	r0, #1	; 0x1
        22f890:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        22f894:	e59f0024 	ldr	r0, [pc, #24]	; 22f8c0 <TabKindSymbolToNum(RefVar const &)+0x84>
        22f898:	e5900000 	ldr	r0, [r0]
        22f89c:	e5901000 	ldr	r1, [r0]
        22f8a0:	e5940000 	ldr	r0, [r4]
        22f8a4:	e5900000 	ldr	r0, [r0]
        22f8a8:	eb665260 	bl	1bc4230 <$EQRef__FlT1>
        22f8ac:	e3300000 	teq	r0, #0	; 0x0
        22f8b0:	13a00002 	movne	r0, #2	; 0x2
        22f8b4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22f8b8:	00684360 	rsbeq	r4, r8, r0, ror #6
        22f8bc:	00682368 	rsbeq	r2, r8, r8, ror #6
        22f8c0:	00682858 	rsbeq	r2, r8, r8, asr r8
    */
}

/**
 * Symbol: TXGetRulerAttrValues(RefVar const &)
 * Address: 0022fa14
 */
TXGetRulerAttrValues(RefVar const &) {
    /*
        22fa14:	e1a0c00d 	mov	ip, sp
        22fa18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22fa1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22fa20:	e1a04000 	mov	r4, r0
        22fa24:	e3a00000 	mov	r0, #0	; 0x0
        22fa28:	eb655a53 	bl	1b8637c <TXAttrValues::$__ct(void)>
        22fa2c:	e1b05000 	movs	r5, r0
        22fa30:	1a000005 	bne	22fa4c <TXGetRulerAttrValues(RefVar const &)+0x38>
        22fa34:	e59f027c 	ldr	r0, [pc, #27c]	; 22fcb8 <TXGetRulerAttrValues(RefVar const &)+0x2a4>
        22fa38:	e5900000 	ldr	r0, [r0]
        22fa3c:	e3a02000 	mov	r2, #0	; 0x0
        22fa40:	e3a010e9 	mov	r1, #233	; 0xe9
        22fa44:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        22fa48:	eb66cdd3 	bl	1be319c <$Throw>
        22fa4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        22fa50:	e59f0264 	ldr	r0, [pc, #264]	; 22fcbc <TXGetRulerAttrValues(RefVar const &)+0x2a8>
        22fa54:	e5900000 	ldr	r0, [r0]
        22fa58:	e5901000 	ldr	r1, [r0]
        22fa5c:	e5940000 	ldr	r0, [r4]
        22fa60:	e5900000 	ldr	r0, [r0]
        22fa64:	eb6651fd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        22fa68:	eb6649b7 	bl	1bc214c <$AllocateRefHandle(long)>
        22fa6c:	e58d0000 	str	r0, [sp]
        22fa70:	e5900000 	ldr	r0, [r0]
        22fa74:	eb66560a 	bl	1bc52a4 <$IsSymbol(long)>
        22fa78:	e3300000 	teq	r0, #0	; 0x0
        22fa7c:	0a00000b 	beq	22fab0 <TXGetRulerAttrValues(RefVar const &)+0x9c>
        22fa80:	e24dd004 	sub	sp, sp, #4	; 0x4
        22fa84:	e28d0004 	add	r0, sp, #4	; 0x4
        22fa88:	eb659c2d 	bl	1b96b44 <$TXJustSymbolToNum(RefVar const &)>
        22fa8c:	e5cd0000 	strb	r0, [sp]
        22fa90:	e3a03000 	mov	r3, #0	; 0x0
        22fa94:	e92d0008 	stmdb	sp!, {r3}
        22fa98:	e28d2004 	add	r2, sp, #4	; 0x4
        22fa9c:	e1a00005 	mov	r0, r5
        22faa0:	e3a03001 	mov	r3, #1	; 0x1
        22faa4:	e59f1214 	ldr	r1, [pc, #214]	; 22fcc0 <TXGetRulerAttrValues(RefVar const &)+0x2ac>
        22faa8:	eb655e35 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22faac:	e28dd008 	add	sp, sp, #8	; 0x8
        22fab0:	e59f020c 	ldr	r0, [pc, #20c]	; 22fcc4 <TXGetRulerAttrValues(RefVar const &)+0x2b0>
        22fab4:	e5900000 	ldr	r0, [r0]
        22fab8:	e5901000 	ldr	r1, [r0]
        22fabc:	e5940000 	ldr	r0, [r4]
        22fac0:	e5900000 	ldr	r0, [r0]
        22fac4:	eb6651e5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        22fac8:	e59d1000 	ldr	r1, [sp]
        22facc:	e5810000 	str	r0, [r1]
        22fad0:	e2001003 	and	r1, r0, #3	; 0x3
        22fad4:	e3510000 	cmp	r1, #0	; 0x0
        22fad8:	1a00000c 	bne	22fb10 <TXGetRulerAttrValues(RefVar const &)+0xfc>
        22fadc:	e24dd004 	sub	sp, sp, #4	; 0x4
        22fae0:	01a00140 	moveq	r0, r0, asr #2
        22fae4:	0a000000 	beq	22faec <TXGetRulerAttrValues(RefVar const &)+0xd8>
        22fae8:	eb66498b 	bl	1bc211c <$_RINTError(long)>
        22faec:	e3a03000 	mov	r3, #0	; 0x0
        22faf0:	e58d0000 	str	r0, [sp]
        22faf4:	e92d0008 	stmdb	sp!, {r3}
        22faf8:	e28d2004 	add	r2, sp, #4	; 0x4
        22fafc:	e1a00005 	mov	r0, r5
        22fb00:	e3a03004 	mov	r3, #4	; 0x4
        22fb04:	e59f11bc 	ldr	r1, [pc, #1bc]	; 22fcc8 <TXGetRulerAttrValues(RefVar const &)+0x2b4>
        22fb08:	eb655e1d 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22fb0c:	e28dd008 	add	sp, sp, #8	; 0x8
        22fb10:	e59f01b4 	ldr	r0, [pc, #1b4]	; 22fccc <TXGetRulerAttrValues(RefVar const &)+0x2b8>
        22fb14:	e5900000 	ldr	r0, [r0]
        22fb18:	e5901000 	ldr	r1, [r0]
        22fb1c:	e5940000 	ldr	r0, [r4]
        22fb20:	e5900000 	ldr	r0, [r0]
        22fb24:	eb6651cd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        22fb28:	e59d1000 	ldr	r1, [sp]
        22fb2c:	e5810000 	str	r0, [r1]
        22fb30:	e2001003 	and	r1, r0, #3	; 0x3
        22fb34:	e3510000 	cmp	r1, #0	; 0x0
        22fb38:	1a00000c 	bne	22fb70 <TXGetRulerAttrValues(RefVar const &)+0x15c>
        22fb3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        22fb40:	01a00140 	moveq	r0, r0, asr #2
        22fb44:	0a000000 	beq	22fb4c <TXGetRulerAttrValues(RefVar const &)+0x138>
        22fb48:	eb664973 	bl	1bc211c <$_RINTError(long)>
        22fb4c:	e3a03000 	mov	r3, #0	; 0x0
        22fb50:	e58d0000 	str	r0, [sp]
        22fb54:	e92d0008 	stmdb	sp!, {r3}
        22fb58:	e28d2004 	add	r2, sp, #4	; 0x4
        22fb5c:	e1a00005 	mov	r0, r5
        22fb60:	e3a03004 	mov	r3, #4	; 0x4
        22fb64:	e59f1164 	ldr	r1, [pc, #164]	; 22fcd0 <TXGetRulerAttrValues(RefVar const &)+0x2bc>
        22fb68:	eb655e05 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22fb6c:	e28dd008 	add	sp, sp, #8	; 0x8
        22fb70:	e59f015c 	ldr	r0, [pc, #15c]	; 22fcd4 <TXGetRulerAttrValues(RefVar const &)+0x2c0>
        22fb74:	e5900000 	ldr	r0, [r0]
        22fb78:	e5901000 	ldr	r1, [r0]
        22fb7c:	e5940000 	ldr	r0, [r4]
        22fb80:	e5900000 	ldr	r0, [r0]
        22fb84:	eb6651b5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        22fb88:	e59d1000 	ldr	r1, [sp]
        22fb8c:	e5810000 	str	r0, [r1]
        22fb90:	e2001003 	and	r1, r0, #3	; 0x3
        22fb94:	e3510000 	cmp	r1, #0	; 0x0
        22fb98:	1a00000c 	bne	22fbd0 <TXGetRulerAttrValues(RefVar const &)+0x1bc>
        22fb9c:	e24dd004 	sub	sp, sp, #4	; 0x4
        22fba0:	01a00140 	moveq	r0, r0, asr #2
        22fba4:	0a000000 	beq	22fbac <TXGetRulerAttrValues(RefVar const &)+0x198>
        22fba8:	eb66495b 	bl	1bc211c <$_RINTError(long)>
        22fbac:	e3a03000 	mov	r3, #0	; 0x0
        22fbb0:	e58d0000 	str	r0, [sp]
        22fbb4:	e92d0008 	stmdb	sp!, {r3}
        22fbb8:	e28d2004 	add	r2, sp, #4	; 0x4
        22fbbc:	e1a00005 	mov	r0, r5
        22fbc0:	e3a03004 	mov	r3, #4	; 0x4
        22fbc4:	e59f110c 	ldr	r1, [pc, #10c]	; 22fcd8 <TXGetRulerAttrValues(RefVar const &)+0x2c4>
        22fbc8:	eb655ded 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22fbcc:	e28dd008 	add	sp, sp, #8	; 0x8
        22fbd0:	e59f0104 	ldr	r0, [pc, #104]	; 22fcdc <TXGetRulerAttrValues(RefVar const &)+0x2c8>
        22fbd4:	e5900000 	ldr	r0, [r0]
        22fbd8:	e5901000 	ldr	r1, [r0]
        22fbdc:	e5940000 	ldr	r0, [r4]
        22fbe0:	e5900000 	ldr	r0, [r0]
        22fbe4:	eb66519d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        22fbe8:	e59d1000 	ldr	r1, [sp]
        22fbec:	e5810000 	str	r0, [r1]
        22fbf0:	e1a01000 	mov	r1, r0
        22fbf4:	e2000003 	and	r0, r0, #3	; 0x3
        22fbf8:	e3500000 	cmp	r0, #0	; 0x0
        22fbfc:	1a00000d 	bne	22fc38 <TXGetRulerAttrValues(RefVar const &)+0x224>
        22fc00:	e24dd004 	sub	sp, sp, #4	; 0x4
        22fc04:	e1a00001 	mov	r0, r1
        22fc08:	01a00140 	moveq	r0, r0, asr #2
        22fc0c:	0a000000 	beq	22fc14 <TXGetRulerAttrValues(RefVar const &)+0x200>
        22fc10:	eb664941 	bl	1bc211c <$_RINTError(long)>
        22fc14:	e5cd0000 	strb	r0, [sp]
        22fc18:	e3a03000 	mov	r3, #0	; 0x0
        22fc1c:	e92d0008 	stmdb	sp!, {r3}
        22fc20:	e28d2004 	add	r2, sp, #4	; 0x4
        22fc24:	e1a00005 	mov	r0, r5
        22fc28:	e3a03001 	mov	r3, #1	; 0x1
        22fc2c:	e59f10ac 	ldr	r1, [pc, #ac]	; 22fce0 <TXGetRulerAttrValues(RefVar const &)+0x2cc>
        22fc30:	eb655dd3 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22fc34:	e28dd008 	add	sp, sp, #8	; 0x8
        22fc38:	e59f00a4 	ldr	r0, [pc, #a4]	; 22fce4 <TXGetRulerAttrValues(RefVar const &)+0x2d0>
        22fc3c:	e5900000 	ldr	r0, [r0]
        22fc40:	e5901000 	ldr	r1, [r0]
        22fc44:	e5940000 	ldr	r0, [r4]
        22fc48:	e5900000 	ldr	r0, [r0]
        22fc4c:	eb665183 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        22fc50:	e59d1000 	ldr	r1, [sp]
        22fc54:	e5810000 	str	r0, [r1]
        22fc58:	e1a0000d 	mov	r0, sp
        22fc5c:	eb670f4a 	bl	1bf398c <$IsArray(RefVar const &)>
        22fc60:	e3300000 	teq	r0, #0	; 0x0
        22fc64:	0a00000f 	beq	22fca8 <TXGetRulerAttrValues(RefVar const &)+0x294>
        22fc68:	e24dd004 	sub	sp, sp, #4	; 0x4
        22fc6c:	e1a0100d 	mov	r1, sp
        22fc70:	e28d0004 	add	r0, sp, #4	; 0x4
        22fc74:	eb655587 	bl	1b85298 <$FromObject(RefVar const &, TXTabsArray **)>
        22fc78:	e59d0000 	ldr	r0, [sp]
        22fc7c:	e3300000 	teq	r0, #0	; 0x0
        22fc80:	0a000007 	beq	22fca4 <TXGetRulerAttrValues(RefVar const &)+0x290>
        22fc84:	e3a03001 	mov	r3, #1	; 0x1
        22fc88:	e92d0008 	stmdb	sp!, {r3}
        22fc8c:	e28d2004 	add	r2, sp, #4	; 0x4
        22fc90:	e1a00005 	mov	r0, r5
        22fc94:	e3a03004 	mov	r3, #4	; 0x4
        22fc98:	e59f1048 	ldr	r1, [pc, #48]	; 22fce8 <TXGetRulerAttrValues(RefVar const &)+0x2d4>
        22fc9c:	eb655db8 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        22fca0:	e28dd004 	add	sp, sp, #4	; 0x4
        22fca4:	e28dd004 	add	sp, sp, #4	; 0x4
        22fca8:	e59d0000 	ldr	r0, [sp]
        22fcac:	eb664d42 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22fcb0:	e1a00005 	mov	r0, r5
        22fcb4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22fcb8:	00371318 	eoreqs	r1, r7, r8, lsl r3
        22fcbc:	00683368 	rsbeq	r3, r8, r8, ror #6
        22fcc0:	6a757374 	bvs	1f8ca98 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x37c240>
        22fcc4:	006831b8 	streqh	r3, [r8], -#24
        22fcc8:	6e646e74 	mcrvs	14, 3, r6, cr4, cr4, {3}
        22fccc:	006834e8 	rsbeq	r3, r8, r8, ror #9
        22fcd0:	6c4d7267 	mcrrvs	2, 6, r7, sp, cr7
        22fcd4:	00684370 	rsbeq	r4, r8, r0, ror r3
        22fcd8:	724d7267 	subvc	r7, sp, #1879048198	; 0x70000006
        22fcdc:	006835b8 	streqh	r3, [r8], -#88
        22fce0:	6c737063 	ldcvsl	0, cr7, [r3], -#396
        22fce4:	00684a18 	rsbeq	r4, r8, r8, lsl sl
        22fce8:	74616273 	strvcbt	r6, [r1], -#627
    */
}

/**
 * Symbol: TXClipValue__FlN21
 * Address: 00233f04
 */
void globals::TXClipValue() {
    /*
        233f04:	e1a03000 	mov	r3, r0
        233f08:	e1a00001 	mov	r0, r1
        233f0c:	e1530001 	cmp	r3, r1
        233f10:	d1a0f00e 	movle	pc, lr
        233f14:	e1530002 	cmp	r3, r2
        233f18:	b1a00003 	movlt	r0, r3
        233f1c:	a1a00002 	movge	r0, r2
        233f20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXSwapLong__FPlT1
 * Address: 00234108
 */
void globals::TXSwapLong() {
    /*
        234108:	e5902000 	ldr	r2, [r0]
        23410c:	e5913000 	ldr	r3, [r1]
        234110:	e5803000 	str	r3, [r0]
        234114:	e5812000 	str	r2, [r1]
        234118:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAddToArrayElements(long, char *, char *, int)
 * Address: 00234238
 */
TXAddToArrayElements(long, char *, char *, int) {
    /*
        234238:	e2522001 	subs	r2, r2, #1	; 0x1
        23423c:	41a0f00e 	movmi	pc, lr
        234240:	e591c000 	ldr	ip, [r1]
        234244:	e08cc000 	add	ip, ip, r0
        234248:	e681c003 	str	ip, [r1], r3
        23424c:	e2522001 	subs	r2, r2, #1	; 0x1
        234250:	5afffffa 	bpl	234240 <TXAddToArrayElements(long, char *, char *, int)+0x8>
        234254:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXAddToLongArray(long, long *, long *)
 * Address: 00234258
 */
TXAddToLongArray(long, long *, long *) {
    /*
        234258:	e2522001 	subs	r2, r2, #1	; 0x1
        23425c:	41a0f00e 	movmi	pc, lr
        234260:	e5913000 	ldr	r3, [r1]
        234264:	e0833000 	add	r3, r3, r0
        234268:	e2522001 	subs	r2, r2, #1	; 0x1
        23426c:	e4813004 	str	r3, [r1], #4
        234270:	5afffffa 	bpl	234260 <TXAddToLongArray(long, long *, long *)+0x8>
        234274:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXScrollRect__FRC4RectlT2PP6RegionUc
 * Address: 0023441c
 */
void globals::TXScrollRect() {
    /*
        23441c:	e1a0c00d 	mov	ip, sp
        234420:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        234424:	e24cb004 	sub	fp, ip, #4	; 0x4
        234428:	e1a05001 	mov	r5, r1
        23442c:	e1a04002 	mov	r4, r2
        234430:	e1a06003 	mov	r6, r3
        234434:	e59b1004 	ldr	r1, [fp, #4]
        234438:	e31100ff 	tst	r1, #255	; 0xff
        23443c:	e24dd008 	sub	sp, sp, #8	; 0x8
        234440:	e8901008 	ldmia	r0, {r3, ip}
        234444:	e88d1008 	stmia	sp, {r3, ip}
        234448:	0a000029 	beq	2344f4 <TXScrollRect__FRC4RectlT2PP6RegionUc+0xd8>
        23444c:	e3a07902 	mov	r7, #32768	; 0x8000
        234450:	e2477001 	sub	r7, r7, #1	; 0x1
        234454:	e3a08001 	mov	r8, #1	; 0x1
        234458:	e2488902 	sub	r8, r8, #32768	; 0x8000
        23445c:	e3540000 	cmp	r4, #0	; 0x0
        234460:	aa000008 	bge	234488 <TXScrollRect__FRC4RectlT2PP6RegionUc+0x6c>
        234464:	e59d0000 	ldr	r0, [sp]
        234468:	e0840840 	add	r0, r4, r0, asr #16
        23446c:	e1a02007 	mov	r2, r7
        234470:	e1a01008 	mov	r1, r8
        234474:	ebfffea2 	bl	233f04 <TXClipValue__FlN21>
        234478:	e5cd0001 	strb	r0, [sp, #1]
        23447c:	e1a00440 	mov	r0, r0, asr #8
        234480:	e5cd0000 	strb	r0, [sp]
        234484:	ea000007 	b	2344a8 <TXScrollRect__FRC4RectlT2PP6RegionUc+0x8c>
        234488:	e59d0004 	ldr	r0, [sp, #4]
        23448c:	e0840840 	add	r0, r4, r0, asr #16
        234490:	e1a02007 	mov	r2, r7
        234494:	e1a01008 	mov	r1, r8
        234498:	ebfffe99 	bl	233f04 <TXClipValue__FlN21>
        23449c:	e5cd0005 	strb	r0, [sp, #5]
        2344a0:	e1a00440 	mov	r0, r0, asr #8
        2344a4:	e5cd0004 	strb	r0, [sp, #4]
        2344a8:	e3550000 	cmp	r5, #0	; 0x0
        2344ac:	aa000008 	bge	2344d4 <TXScrollRect__FRC4RectlT2PP6RegionUc+0xb8>
        2344b0:	e59d0002 	ldr	r0, [sp, #2]
        2344b4:	e0850840 	add	r0, r5, r0, asr #16
        2344b8:	e1a02007 	mov	r2, r7
        2344bc:	e1a01008 	mov	r1, r8
        2344c0:	ebfffe8f 	bl	233f04 <TXClipValue__FlN21>
        2344c4:	e5cd0003 	strb	r0, [sp, #3]
        2344c8:	e1a00440 	mov	r0, r0, asr #8
        2344cc:	e5cd0002 	strb	r0, [sp, #2]
        2344d0:	ea000007 	b	2344f4 <TXScrollRect__FRC4RectlT2PP6RegionUc+0xd8>
        2344d4:	e59d0006 	ldr	r0, [sp, #6]
        2344d8:	e0850840 	add	r0, r5, r0, asr #16
        2344dc:	e1a02007 	mov	r2, r7
        2344e0:	e1a01008 	mov	r1, r8
        2344e4:	ebfffe86 	bl	233f04 <TXClipValue__FlN21>
        2344e8:	e5cd0007 	strb	r0, [sp, #7]
        2344ec:	e1a00440 	mov	r0, r0, asr #8
        2344f0:	e5cd0006 	strb	r0, [sp, #6]
        2344f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2344f8:	e1a0000d 	mov	r0, sp
        2344fc:	eb66eca8 	bl	1bef7a4 <$GetPort(GrafPort **)>
        234500:	e59d0000 	ldr	r0, [sp]
        234504:	e280701c 	add	r7, r0, #28	; 0x1c
        234508:	e28d2004 	add	r2, sp, #4	; 0x4
        23450c:	e1a01007 	mov	r1, r7
        234510:	e28d0004 	add	r0, sp, #4	; 0x4
        234514:	eb647d2c 	bl	1b539cc <$SectRect__FP4RectN21>
        234518:	e5970004 	ldr	r0, [r7, #4]
        23451c:	e1a00840 	mov	r0, r0, asr #16
        234520:	e5971000 	ldr	r1, [r7]
        234524:	e0402841 	sub	r2, r0, r1, asr #16
        234528:	e5970006 	ldr	r0, [r7, #6]
        23452c:	e1a00840 	mov	r0, r0, asr #16
        234530:	e5971002 	ldr	r1, [r7, #2]
        234534:	e0407841 	sub	r7, r0, r1, asr #16
        234538:	e2621000 	rsb	r1, r2, #0	; 0x0
        23453c:	e1a00004 	mov	r0, r4
        234540:	ebfffe6f 	bl	233f04 <TXClipValue__FlN21>
        234544:	e1a04800 	mov	r4, r0, lsl #16
        234548:	e1a04844 	mov	r4, r4, asr #16
        23454c:	e1a02007 	mov	r2, r7
        234550:	e2671000 	rsb	r1, r7, #0	; 0x0
        234554:	e1a00005 	mov	r0, r5
        234558:	ebfffe69 	bl	233f04 <TXClipValue__FlN21>
        23455c:	e1a01800 	mov	r1, r0, lsl #16
        234560:	e1a01841 	mov	r1, r1, asr #16
        234564:	e1a03006 	mov	r3, r6
        234568:	e28d0004 	add	r0, sp, #4	; 0x4
        23456c:	e1a02004 	mov	r2, r4
        234570:	eb647d13 	bl	1b539c4 <$ScrollRect__FP4RectlT2PP6Region>
        234574:	e1a00006 	mov	r0, r6
        234578:	eb646867 	bl	1b4e71c <$EmptyRgn(Region **)>
        23457c:	e3300000 	teq	r0, #0	; 0x0
        234580:	13a00000 	movne	r0, #0	; 0x0
        234584:	03a00001 	moveq	r0, #1	; 0x1
        234588:	e20000ff 	and	r0, r0, #255	; 0xff
        23458c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXClipFurther(Rect *, Region **)
 * Address: 00234590
 */
TXClipFurther(Rect *, Region **) {
    /*
        234590:	e1a0c00d 	mov	ip, sp
        234594:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        234598:	e24cb004 	sub	fp, ip, #4	; 0x4
        23459c:	e1a04000 	mov	r4, r0
        2345a0:	e1a05001 	mov	r5, r1
        2345a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2345a8:	e1a0000d 	mov	r0, sp
        2345ac:	eb66ec7c 	bl	1bef7a4 <$GetPort(GrafPort **)>
        2345b0:	e59d0000 	ldr	r0, [sp]
        2345b4:	e5b06028 	ldr	r6, [r0, #40]!
        2345b8:	e5960000 	ldr	r0, [r6]
        2345bc:	e5901000 	ldr	r1, [r0]
        2345c0:	e1a01841 	mov	r1, r1, asr #16
        2345c4:	e3a0a001 	mov	sl, #1	; 0x1
        2345c8:	e3a09000 	mov	r9, #0	; 0x0
        2345cc:	e331000c 	teq	r1, #12	; 0xc
        2345d0:	1a00000c 	bne	234608 <TXClipFurther(Rect *, Region **)+0x78>
        2345d4:	e2801004 	add	r1, r0, #4	; 0x4
        2345d8:	e1a02004 	mov	r2, r4
        2345dc:	e1a00004 	mov	r0, r4
        2345e0:	eb647cf9 	bl	1b539cc <$SectRect__FP4RectN21>
        2345e4:	e3300000 	teq	r0, #0	; 0x0
        2345e8:	1a000001 	bne	2345f4 <TXClipFurther(Rect *, Region **)+0x64>
        2345ec:	e1a00009 	mov	r0, r9
        2345f0:	ea000021 	b	23467c <TXClipFurther(Rect *, Region **)+0xec>
        2345f4:	e1a00005 	mov	r0, r5
        2345f8:	eb646c6e 	bl	1b4f7b8 <$GetClip(Region **)>
        2345fc:	e1a00004 	mov	r0, r4
        234600:	eb646424 	bl	1b4d698 <$ClipRect(Rect *)>
        234604:	ea00001b 	b	234678 <TXClipFurther(Rect *, Region **)+0xe8>
        234608:	e59f8054 	ldr	r8, [pc, #54]	; 234664 <TXClipFurther(Rect *, Region **)+0xd4>
        23460c:	e5980004 	ldr	r0, [r8, #4]
        234610:	eb6553ac 	bl	1b894c8 <TXTempReferences::$Get(void)>
        234614:	e1a07000 	mov	r7, r0
        234618:	e1a00005 	mov	r0, r5
        23461c:	eb646c65 	bl	1b4f7b8 <$GetClip(Region **)>
        234620:	e1a01004 	mov	r1, r4
        234624:	e1a00007 	mov	r0, r7
        234628:	eb647cdb 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        23462c:	e1a02006 	mov	r2, r6
        234630:	e1a01006 	mov	r1, r6
        234634:	e1a00007 	mov	r0, r7
        234638:	eb647ce4 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        23463c:	e1a01007 	mov	r1, r7
        234640:	e5b80004 	ldr	r0, [r8, #4]!
        234644:	eb6553a0 	bl	1b894cc <TXTempReferences::$Done(void *)>
        234648:	e1a00006 	mov	r0, r6
        23464c:	eb646832 	bl	1b4e71c <$EmptyRgn(Region **)>
        234650:	e3300000 	teq	r0, #0	; 0x0
        234654:	0a000003 	beq	234668 <TXClipFurther(Rect *, Region **)+0xd8>
        234658:	e1a00005 	mov	r0, r5
        23465c:	eb647cde 	bl	1b539dc <$SetClip(Region **)>
        234660:	eaffffe1 	b	2345ec <TXClipFurther(Rect *, Region **)+0x5c>
        234664:	0c104d74 	ldceq	13, cr4, [r0], -#464
        234668:	e5960000 	ldr	r0, [r6]
        23466c:	e2800004 	add	r0, r0, #4	; 0x4
        234670:	e8901008 	ldmia	r0, {r3, ip}
        234674:	e8841008 	stmia	r4, {r3, ip}
        234678:	e1a0000a 	mov	r0, sl
        23467c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXCalcClipRect(Rect *)
 * Address: 00234680
 */
TXCalcClipRect(Rect *) {
    /*
        234680:	e1a0c00d 	mov	ip, sp
        234684:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        234688:	e24cb004 	sub	fp, ip, #4	; 0x4
        23468c:	e1a04000 	mov	r4, r0
        234690:	e24dd004 	sub	sp, sp, #4	; 0x4
        234694:	e1a0000d 	mov	r0, sp
        234698:	eb66ec41 	bl	1bef7a4 <$GetPort(GrafPort **)>
        23469c:	e59d0000 	ldr	r0, [sp]
        2346a0:	e5b06028 	ldr	r6, [r0, #40]!
        2346a4:	e5960000 	ldr	r0, [r6]
        2346a8:	e5901000 	ldr	r1, [r0]
        2346ac:	e1a01841 	mov	r1, r1, asr #16
        2346b0:	e331000c 	teq	r1, #12	; 0xc
        2346b4:	1a000004 	bne	2346cc <TXCalcClipRect(Rect *)+0x4c>
        2346b8:	e2800004 	add	r0, r0, #4	; 0x4
        2346bc:	e1a02004 	mov	r2, r4
        2346c0:	e1a01004 	mov	r1, r4
        2346c4:	eb647cc0 	bl	1b539cc <$SectRect__FP4RectN21>
        2346c8:	ea000013 	b	23471c <TXCalcClipRect(Rect *)+0x9c>
        2346cc:	e59f704c 	ldr	r7, [pc, #4c]	; 234720 <TXCalcClipRect(Rect *)+0xa0>
        2346d0:	e5970004 	ldr	r0, [r7, #4]
        2346d4:	eb65537b 	bl	1b894c8 <TXTempReferences::$Get(void)>
        2346d8:	e1a05000 	mov	r5, r0
        2346dc:	e1a01004 	mov	r1, r4
        2346e0:	eb647cad 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        2346e4:	e1a02005 	mov	r2, r5
        2346e8:	e1a01005 	mov	r1, r5
        2346ec:	e1a00006 	mov	r0, r6
        2346f0:	eb647cb6 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        2346f4:	e5950000 	ldr	r0, [r5]
        2346f8:	e2800004 	add	r0, r0, #4	; 0x4
        2346fc:	e1a02004 	mov	r2, r4
        234700:	e1a01004 	mov	r1, r4
        234704:	eb647cb0 	bl	1b539cc <$SectRect__FP4RectN21>
        234708:	e1a04000 	mov	r4, r0
        23470c:	e1a01005 	mov	r1, r5
        234710:	e5b70004 	ldr	r0, [r7, #4]!
        234714:	eb65536c 	bl	1b894cc <TXTempReferences::$Done(void *)>
        234718:	e1a00004 	mov	r0, r4
        23471c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        234720:	0c104d74 	ldceq	13, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXInvalSectRect(Rect *, Region **)
 * Address: 00234724
 */
TXInvalSectRect(Rect *, Region **) {
    /*
        234724:	e1a0c00d 	mov	ip, sp
        234728:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23472c:	e24cb004 	sub	fp, ip, #4	; 0x4
        234730:	e1a04000 	mov	r4, r0
        234734:	e3310000 	teq	r1, #0	; 0x0
        234738:	1a000005 	bne	234754 <TXInvalSectRect(Rect *, Region **)+0x30>
        23473c:	e24dd004 	sub	sp, sp, #4	; 0x4
        234740:	e1a0000d 	mov	r0, sp
        234744:	eb66ec16 	bl	1bef7a4 <$GetPort(GrafPort **)>
        234748:	e59d0000 	ldr	r0, [sp]
        23474c:	e5b01028 	ldr	r1, [r0, #40]!
        234750:	e28dd004 	add	sp, sp, #4	; 0x4
        234754:	e1a00004 	mov	r0, r4
        234758:	eb647c8e 	bl	1b53998 <$RectInRgn(Rect *, Region **)>
        23475c:	e3300000 	teq	r0, #0	; 0x0
        234760:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        234764:	e59f0014 	ldr	r0, [pc, #14]	; 234780 <TXInvalSectRect(Rect *, Region **)+0x5c>
        234768:	e1a01004 	mov	r1, r4
        23476c:	e5902000 	ldr	r2, [r0]
        234770:	e1a00002 	mov	r0, r2
        234774:	e5922000 	ldr	r2, [r2]
        234778:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        23477c:	e282f054 	add	pc, r2, #84	; 0x54
        234780:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TXGetNewDefaultObject(unsigned long)
 * Address: 002347c8
 */
TXGetNewDefaultObject(unsigned long) {
    /*
        2347c8:	e1a0c00d 	mov	ip, sp
        2347cc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2347d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2347d4:	e59f1020 	ldr	r1, [pc, #20]	; 2347fc <TXGetNewDefaultObject(unsigned long)+0x34>
        2347d8:	e59fc020 	ldr	ip, [pc, #20]	; 234800 <TXGetNewDefaultObject(unsigned long)+0x38>
        2347dc:	e130000c 	teq	r0, ip
        2347e0:	15b10004 	ldrne	r0, [r1, #4]!
        2347e4:	05910000 	ldreq	r0, [r1]
        2347e8:	e3a01000 	mov	r1, #0	; 0x0
        2347ec:	eb655b6e 	bl	1b8b5ac <TXRegisteredObjects::$GetIndObject( const(int))>
        2347f0:	e5901000 	ldr	r1, [r0]
        2347f4:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        2347f8:	e281f00c 	add	pc, r1, #12	; 0xc
        2347fc:	0c104d80 	ldceq	13, cr4, [r0], -#512
        234800:	7478726e 	ldrvcbt	r7, [r8], -#622
    */
}

/**
 * Symbol: TXGetRunAttrValues(RefVar const &)
 * Address: 00240208
 */
TXGetRunAttrValues(RefVar const &) {
    /*
        240208:	e1a0c00d 	mov	ip, sp
        24020c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        240210:	e24cb004 	sub	fp, ip, #4	; 0x4
        240214:	e1a04000 	mov	r4, r0
        240218:	e3a00000 	mov	r0, #0	; 0x0
        24021c:	eb651856 	bl	1b8637c <TXAttrValues::$__ct(void)>
        240220:	e1b05000 	movs	r5, r0
        240224:	1a000005 	bne	240240 <TXGetRunAttrValues(RefVar const &)+0x38>
        240228:	e59f0134 	ldr	r0, [pc, #134]	; 240364 <TXGetRunAttrValues(RefVar const &)+0x15c>
        24022c:	e5900000 	ldr	r0, [r0]
        240230:	e3a02000 	mov	r2, #0	; 0x0
        240234:	e3a010e9 	mov	r1, #233	; 0xe9
        240238:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        24023c:	eb668bd6 	bl	1be319c <$Throw>
        240240:	e24dd004 	sub	sp, sp, #4	; 0x4
        240244:	e1a00004 	mov	r0, r4
        240248:	eb624171 	bl	1ad0814 <$GetFontFamilySym(RefVar const &)>
        24024c:	eb6607be 	bl	1bc214c <$AllocateRefHandle(long)>
        240250:	e58d0000 	str	r0, [sp]
        240254:	e5900000 	ldr	r0, [r0]
        240258:	e3300002 	teq	r0, #2	; 0x2
        24025c:	0a00000c 	beq	240294 <TXGetRunAttrValues(RefVar const &)+0x8c>
        240260:	e24dd004 	sub	sp, sp, #4	; 0x4
        240264:	e28d1004 	add	r1, sp, #4	; 0x4
        240268:	e3a00000 	mov	r0, #0	; 0x0
        24026c:	eb6551e9 	bl	1b94a18 <TXNewtFontFamilyInfo::$__ct(RefVar const &)>
        240270:	e3a03001 	mov	r3, #1	; 0x1
        240274:	e58d0000 	str	r0, [sp]
        240278:	e92d0008 	stmdb	sp!, {r3}
        24027c:	e28d2004 	add	r2, sp, #4	; 0x4
        240280:	e1a00005 	mov	r0, r5
        240284:	e3a03004 	mov	r3, #4	; 0x4
        240288:	e59f10d8 	ldr	r1, [pc, #d8]	; 240368 <TXGetRunAttrValues(RefVar const &)+0x160>
        24028c:	eb651c3c 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        240290:	e28dd008 	add	sp, sp, #8	; 0x8
        240294:	e59f00d0 	ldr	r0, [pc, #d0]	; 24036c <TXGetRunAttrValues(RefVar const &)+0x164>
        240298:	e5900000 	ldr	r0, [r0]
        24029c:	e5901000 	ldr	r1, [r0]
        2402a0:	e5940000 	ldr	r0, [r4]
        2402a4:	e5900000 	ldr	r0, [r0]
        2402a8:	eb660fec 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2402ac:	e59d1000 	ldr	r1, [sp]
        2402b0:	e5810000 	str	r0, [r1]
        2402b4:	e2001003 	and	r1, r0, #3	; 0x3
        2402b8:	e3510000 	cmp	r1, #0	; 0x0
        2402bc:	1a00000c 	bne	2402f4 <TXGetRunAttrValues(RefVar const &)+0xec>
        2402c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2402c4:	01a00140 	moveq	r0, r0, asr #2
        2402c8:	0a000000 	beq	2402d0 <TXGetRunAttrValues(RefVar const &)+0xc8>
        2402cc:	eb660792 	bl	1bc211c <$_RINTError(long)>
        2402d0:	e3a03000 	mov	r3, #0	; 0x0
        2402d4:	e58d0000 	str	r0, [sp]
        2402d8:	e92d0008 	stmdb	sp!, {r3}
        2402dc:	e28d2004 	add	r2, sp, #4	; 0x4
        2402e0:	e1a00005 	mov	r0, r5
        2402e4:	e3a03004 	mov	r3, #4	; 0x4
        2402e8:	e59f1080 	ldr	r1, [pc, #80]	; 240370 <TXGetRunAttrValues(RefVar const &)+0x168>
        2402ec:	eb651c24 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        2402f0:	e28dd008 	add	sp, sp, #8	; 0x8
        2402f4:	e59f0078 	ldr	r0, [pc, #78]	; 240374 <TXGetRunAttrValues(RefVar const &)+0x16c>
        2402f8:	e5900000 	ldr	r0, [r0]
        2402fc:	e5901000 	ldr	r1, [r0]
        240300:	e5940000 	ldr	r0, [r4]
        240304:	e5900000 	ldr	r0, [r0]
        240308:	eb660fd4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        24030c:	e59d1000 	ldr	r1, [sp]
        240310:	e5810000 	str	r0, [r1]
        240314:	e2001003 	and	r1, r0, #3	; 0x3
        240318:	e3510000 	cmp	r1, #0	; 0x0
        24031c:	1a00000c 	bne	240354 <TXGetRunAttrValues(RefVar const &)+0x14c>
        240320:	e24dd004 	sub	sp, sp, #4	; 0x4
        240324:	01a00140 	moveq	r0, r0, asr #2
        240328:	0a000000 	beq	240330 <TXGetRunAttrValues(RefVar const &)+0x128>
        24032c:	eb66077a 	bl	1bc211c <$_RINTError(long)>
        240330:	e3a03000 	mov	r3, #0	; 0x0
        240334:	e58d0000 	str	r0, [sp]
        240338:	e92d0008 	stmdb	sp!, {r3}
        24033c:	e28d2004 	add	r2, sp, #4	; 0x4
        240340:	e1a00005 	mov	r0, r5
        240344:	e3a03004 	mov	r3, #4	; 0x4
        240348:	e59f1028 	ldr	r1, [pc, #28]	; 240378 <TXGetRunAttrValues(RefVar const &)+0x170>
        24034c:	eb651c0c 	bl	1b87384 <TXAttrValues::$Add(unsigned long, void const *, int, unsigned char)>
        240350:	e28dd008 	add	sp, sp, #8	; 0x8
        240354:	e59d0000 	ldr	r0, [sp]
        240358:	eb660b97 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        24035c:	e1a00005 	mov	r0, r5
        240360:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        240364:	00371318 	eoreqs	r1, r7, r8, lsl r3
        240368:	666f6e74 	undefined
        24036c:	006846a8 	rsbeq	r4, r8, r8, lsr #13
        240370:	73697a65 	cmnvc	r9, #413696	; 0x65000
        240374:	00682d28 	rsbeq	r2, r8, r8, lsr #26
        240378:	66616365 	strvsbt	r6, [r1], -r5, ror #6
    */
}

/**
 * Symbol: TXGetParagStartOffset(TXChars *, long)
 * Address: 00242b7c
 */
TXGetParagStartOffset(TXChars *, long) {
    /*
        242b7c:	e1a0c00d 	mov	ip, sp
        242b80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        242b84:	e24cb004 	sub	fp, ip, #4	; 0x4
        242b88:	e1a04001 	mov	r4, r1
        242b8c:	e3a02902 	mov	r2, #32768	; 0x8000
        242b90:	e2422001 	sub	r2, r2, #1	; 0x1
        242b94:	e1510002 	cmp	r1, r2
        242b98:	c1a04002 	movgt	r4, r2
        242b9c:	e1a03004 	mov	r3, r4
        242ba0:	e1a02001 	mov	r2, r1
        242ba4:	e3a0100c 	mov	r1, #12	; 0xc
        242ba8:	e590c000 	ldr	ip, [r0]
        242bac:	e1a0e00f 	mov	lr, pc
        242bb0:	e28cf024 	add	pc, ip, #36	; 0x24
        242bb4:	e1a01000 	mov	r1, r0
        242bb8:	e3500000 	cmp	r0, #0	; 0x0
        242bbc:	d1a00004 	movle	r0, r4
        242bc0:	c2410001 	subgt	r0, r1, #1	; 0x1
        242bc4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXGetParagEndOffset(TXChars *, long)
 * Address: 00242bc8
 */
TXGetParagEndOffset(TXChars *, long) {
    /*
        242bc8:	e1a0c00d 	mov	ip, sp
        242bcc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        242bd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        242bd4:	e1a05000 	mov	r5, r0
        242bd8:	e1a04001 	mov	r4, r1
        242bdc:	e5901000 	ldr	r1, [r0]
        242be0:	e1a0e00f 	mov	lr, pc
        242be4:	e281f004 	add	pc, r1, #4	; 0x4
        242be8:	e0406004 	sub	r6, r0, r4
        242bec:	e3a00902 	mov	r0, #32768	; 0x8000
        242bf0:	e2400001 	sub	r0, r0, #1	; 0x1
        242bf4:	e1560000 	cmp	r6, r0
        242bf8:	c1a06000 	movgt	r6, r0
        242bfc:	e1a03006 	mov	r3, r6
        242c00:	e1a02004 	mov	r2, r4
        242c04:	e1a00005 	mov	r0, r5
        242c08:	e3a0100c 	mov	r1, #12	; 0xc
        242c0c:	e595c000 	ldr	ip, [r5]
        242c10:	e1a0e00f 	mov	lr, pc
        242c14:	e28cf020 	add	pc, ip, #32	; 0x20
        242c18:	e1b04000 	movs	r4, r0
        242c1c:	41a00006 	movmi	r0, r6
        242c20:	52840001 	addpl	r0, r4, #1	; 0x1
        242c24:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXJustSymbolToNum(RefVar const &)
 * Address: 00245a84
 */
TXJustSymbolToNum(RefVar const &) {
    /*
        245a84:	e1a0c00d 	mov	ip, sp
        245a88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        245a8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        245a90:	e1a04000 	mov	r4, r0
        245a94:	e59f0068 	ldr	r0, [pc, #68]	; 245b04 <TXJustSymbolToNum(RefVar const &)+0x80>
        245a98:	e5900000 	ldr	r0, [r0]
        245a9c:	e5901000 	ldr	r1, [r0]
        245aa0:	e5940000 	ldr	r0, [r4]
        245aa4:	e5900000 	ldr	r0, [r0]
        245aa8:	eb65f9e0 	bl	1bc4230 <$EQRef__FlT1>
        245aac:	e3300000 	teq	r0, #0	; 0x0
        245ab0:	13a00002 	movne	r0, #2	; 0x2
        245ab4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        245ab8:	e59f0048 	ldr	r0, [pc, #48]	; 245b08 <TXJustSymbolToNum(RefVar const &)+0x84>
        245abc:	e5900000 	ldr	r0, [r0]
        245ac0:	e5901000 	ldr	r1, [r0]
        245ac4:	e5940000 	ldr	r0, [r4]
        245ac8:	e5900000 	ldr	r0, [r0]
        245acc:	eb65f9d7 	bl	1bc4230 <$EQRef__FlT1>
        245ad0:	e3300000 	teq	r0, #0	; 0x0
        245ad4:	13a00004 	movne	r0, #4	; 0x4
        245ad8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        245adc:	e59f0028 	ldr	r0, [pc, #28]	; 245b0c <TXJustSymbolToNum(RefVar const &)+0x88>
        245ae0:	e5900000 	ldr	r0, [r0]
        245ae4:	e5901000 	ldr	r1, [r0]
        245ae8:	e5940000 	ldr	r0, [r4]
        245aec:	e5900000 	ldr	r0, [r0]
        245af0:	eb65f9ce 	bl	1bc4230 <$EQRef__FlT1>
        245af4:	e3300000 	teq	r0, #0	; 0x0
        245af8:	03a00001 	moveq	r0, #1	; 0x1
        245afc:	13a00008 	movne	r0, #8	; 0x8
        245b00:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        245b04:	00684360 	rsbeq	r4, r8, r0, ror #6
        245b08:	00682368 	rsbeq	r2, r8, r8, ror #6
        245b0c:	00682f10 	rsbeq	r2, r8, r0, lsl pc
    */
}

/**
 * Symbol: TXIndivisiblePixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *)
 * Address: 00245c18
 */
TXIndivisiblePixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *) {
    /*
        245c18:	e1a0c00d 	mov	ip, sp
        245c1c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        245c20:	e24cb004 	sub	fp, ip, #4	; 0x4
        245c24:	e1a0c002 	mov	ip, r2
        245c28:	e2803008 	add	r3, r0, #8	; 0x8
        245c2c:	e893000c 	ldmia	r3, {r2, r3}
        245c30:	e0822003 	add	r2, r2, r3
        245c34:	e2822902 	add	r2, r2, #32768	; 0x8000
        245c38:	e1a02842 	mov	r2, r2, asr #16
        245c3c:	e1a03802 	mov	r3, r2, lsl #16
        245c40:	e1a03843 	mov	r3, r3, asr #16
        245c44:	e3a02000 	mov	r2, #0	; 0x0
        245c48:	e590e000 	ldr	lr, [r0]
        245c4c:	e59ee000 	ldr	lr, [lr]
        245c50:	e1a0e00e 	mov	lr, lr
        245c54:	e1a0e82e 	mov	lr, lr, lsr #16
        245c58:	e35e001f 	cmp	lr, #31	; 0x1f
        245c5c:	d1a02143 	movle	r2, r3, asr #2
        245c60:	e1a01841 	mov	r1, r1, asr #16
        245c64:	e1510002 	cmp	r1, r2
        245c68:	d3a01000 	movle	r1, #0	; 0x0
        245c6c:	da000003 	ble	245c80 <TXIndivisiblePixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *)+0x68>
        245c70:	e0432002 	sub	r2, r3, r2
        245c74:	e1520001 	cmp	r2, r1
        245c78:	ca000009 	bgt	245ca4 <TXIndivisiblePixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *)+0x8c>
        245c7c:	e5b01004 	ldr	r1, [r0, #4]!
        245c80:	e1b00001 	movs	r0, r1
        245c84:	13a00001 	movne	r0, #1	; 0x1
        245c88:	e20000ff 	and	r0, r0, #255	; 0xff
        245c8c:	e1a03000 	mov	r3, r0
        245c90:	e92d0008 	stmdb	sp!, {r3}
        245c94:	e1a03000 	mov	r3, r0
        245c98:	e1a02001 	mov	r2, r1
        245c9c:	e1a0000c 	mov	r0, ip
        245ca0:	ea000005 	b	245cbc <TXIndivisiblePixelToChar(TXLineRunDisplayInfo const &, long, TXOffsetRange *)+0xa4>
        245ca4:	e3a03001 	mov	r3, #1	; 0x1
        245ca8:	e92d0008 	stmdb	sp!, {r3}
        245cac:	e5b02004 	ldr	r2, [r0, #4]!
        245cb0:	e1a0000c 	mov	r0, ip
        245cb4:	e3a03000 	mov	r3, #0	; 0x0
        245cb8:	e3a01000 	mov	r1, #0	; 0x0
        245cbc:	ebffb8f2 	bl	23408c <TXOffsetRange::Set(long, long, unsigned char, unsigned char)>
        245cc0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXIndivisibleCharToPixel(TXLineRunDisplayInfo const &, long)
 * Address: 00245e4c
 */
TXIndivisibleCharToPixel(TXLineRunDisplayInfo const &, long) {
    /*
        245e4c:	e3310000 	teq	r1, #0	; 0x0
        245e50:	03a00000 	moveq	r0, #0	; 0x0
        245e54:	15901008 	ldrne	r1, [r0, #8]
        245e58:	1590000c 	ldrne	r0, [r0, #12]
        245e5c:	10810000 	addne	r0, r1, r0
        245e60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXSetTempStreamFactory(TXTempStreamFactory *)
 * Address: 0024600c
 */
TXSetTempStreamFactory(TXTempStreamFactory *) {
    /*
        24600c:	e59f1004 	ldr	r1, [pc, #4]	; 246018 <TXSetTempStreamFactory(TXTempStreamFactory *)+0xc>
        246010:	e5810000 	str	r0, [r1]
        246014:	e1a0f00e 	mov	pc, lr
        246018:	0c104e8c 	ldceq	14, cr4, [r0], -#560
    */
}

/**
 * Symbol: TXGetTempStreamFactory(void)
 * Address: 0024601c
 */
TXGetTempStreamFactory(void) {
    /*
        24601c:	e59f0004 	ldr	r0, [pc, #4]	; 246028 <TXGetTempStreamFactory(void)+0xc>
        246020:	e5900000 	ldr	r0, [r0]
        246024:	e1a0f00e 	mov	pc, lr
        246028:	0c104e8c 	ldceq	14, cr4, [r0], -#560
    */
}

/**
 * Symbol: ToObject(TXOffsetRange const &)
 * Address: 00249968
 */
ToObject(TXOffsetRange const &) {
    /*
        249968:	e1a0c00d 	mov	ip, sp
        24996c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        249970:	e24cb004 	sub	fp, ip, #4	; 0x4
        249974:	e1a04000 	mov	r4, r0
        249978:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24997c:	e59f006c 	ldr	r0, [pc, #6c]	; 2499f0 <ToObject(TXOffsetRange const &)+0x88>
        249980:	eb65e1f9 	bl	1bc216c <$Clone(RefVar const &)>
        249984:	eb65e1f0 	bl	1bc214c <$AllocateRefHandle(long)>
        249988:	e58d0008 	str	r0, [sp, #8]
        24998c:	e5940000 	ldr	r0, [r4]
        249990:	e1a00100 	mov	r0, r0, lsl #2
        249994:	eb65e1ec 	bl	1bc214c <$AllocateRefHandle(long)>
        249998:	e58d0000 	str	r0, [sp]
        24999c:	e1a0200d 	mov	r2, sp
        2499a0:	e59f104c 	ldr	r1, [pc, #4c]	; 2499f4 <ToObject(TXOffsetRange const &)+0x8c>
        2499a4:	e28d0008 	add	r0, sp, #8	; 0x8
        2499a8:	eb65f26e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2499ac:	e59d0000 	ldr	r0, [sp]
        2499b0:	eb65e601 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2499b4:	e5b40008 	ldr	r0, [r4, #8]!
        2499b8:	e1a00100 	mov	r0, r0, lsl #2
        2499bc:	eb65e1e2 	bl	1bc214c <$AllocateRefHandle(long)>
        2499c0:	e58d0004 	str	r0, [sp, #4]
        2499c4:	e28d2004 	add	r2, sp, #4	; 0x4
        2499c8:	e59f1028 	ldr	r1, [pc, #28]	; 2499f8 <ToObject(TXOffsetRange const &)+0x90>
        2499cc:	e28d0008 	add	r0, sp, #8	; 0x8
        2499d0:	eb65f264 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2499d4:	e59d0004 	ldr	r0, [sp, #4]
        2499d8:	eb65e5f7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2499dc:	e59d0008 	ldr	r0, [sp, #8]
        2499e0:	e5904000 	ldr	r4, [r0]
        2499e4:	eb65e5f4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2499e8:	e1a00004 	mov	r0, r4
        2499ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2499f0:	00680e10 	rsbeq	r0, r8, r0, lsl lr
        2499f4:	00682da8 	rsbeq	r2, r8, r8, lsr #27
        2499f8:	00683440 	rsbeq	r3, r8, r0, asr #8
    */
}

/**
 * Symbol: TXFindString(TXChars *, unsigned short *, long)
 * Address: 0024d54c
 */
TXFindString(TXChars *, unsigned short *, long) {
    /*
        24d54c:	e1a0c00d 	mov	ip, sp
        24d550:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        24d554:	e24cb004 	sub	fp, ip, #4	; 0x4
        24d558:	e1a06000 	mov	r6, r0
        24d55c:	e1a05001 	mov	r5, r1
        24d560:	e1a04002 	mov	r4, r2
        24d564:	e24dd004 	sub	sp, sp, #4	; 0x4
        24d568:	e1a00001 	mov	r0, r1
        24d56c:	eb66847b 	bl	1bee760 <$Ustrlen>
        24d570:	e1b09000 	movs	r9, r0
        24d574:	03e00000 	mvneq	r0, #0	; 0x0
        24d578:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        24d57c:	e3a00b01 	mov	r0, #1024	; 0x400
        24d580:	e0800089 	add	r0, r0, r9, lsl #1
        24d584:	eb66046b 	bl	1bce738 <$__nw(unsigned int)>
        24d588:	e1b07000 	movs	r7, r0
        24d58c:	1a000005 	bne	24d5a8 <TXFindString(TXChars *, unsigned short *, long)+0x5c>
        24d590:	e59f00d0 	ldr	r0, [pc, #d0]	; 24d668 <TXFindString(TXChars *, unsigned short *, long)+0x11c>
        24d594:	e5900000 	ldr	r0, [r0]
        24d598:	e3a02000 	mov	r2, #0	; 0x0
        24d59c:	e3a010e9 	mov	r1, #233	; 0xe9
        24d5a0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        24d5a4:	eb6656fc 	bl	1be319c <$Throw>
        24d5a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        24d5ac:	e1a00006 	mov	r0, r6
        24d5b0:	e5961000 	ldr	r1, [r6]
        24d5b4:	e1a0e00f 	mov	lr, pc
        24d5b8:	e281f004 	add	pc, r1, #4	; 0x4
        24d5bc:	e1a0a000 	mov	sl, r0
        24d5c0:	e3a08000 	mov	r8, #0	; 0x0
        24d5c4:	e3e00000 	mvn	r0, #0	; 0x0
        24d5c8:	e154000a 	cmp	r4, sl
        24d5cc:	e58d0000 	str	r0, [sp]
        24d5d0:	aa000031 	bge	24d69c <TXFindString(TXChars *, unsigned short *, long)+0x150>
        24d5d4:	e2490001 	sub	r0, r9, #1	; 0x1
        24d5d8:	e58d0004 	str	r0, [sp, #4]
        24d5dc:	e24dd028 	sub	sp, sp, #40	; 0x28
        24d5e0:	e04a0004 	sub	r0, sl, r4
        24d5e4:	e3a01c02 	mov	r1, #512	; 0x200
        24d5e8:	e3500c02 	cmp	r0, #512	; 0x200
        24d5ec:	a1a00001 	movge	r0, r1
        24d5f0:	e1a09000 	mov	r9, r0
        24d5f4:	e0871088 	add	r1, r7, r8, lsl #1
        24d5f8:	e1a02000 	mov	r2, r0
        24d5fc:	e1a0000d 	mov	r0, sp
        24d600:	eb64eb80 	bl	1b88408 <TXTextDescriptor::$Set(unsigned short *, long)>
        24d604:	e28d0014 	add	r0, sp, #20	; 0x14
        24d608:	e1a0100d 	mov	r1, sp
        24d60c:	e891500e 	ldmia	r1, {r1, r2, r3, ip, lr}
        24d610:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        24d614:	e1a03009 	mov	r3, r9
        24d618:	e1a02004 	mov	r2, r4
        24d61c:	e28d1014 	add	r1, sp, #20	; 0x14
        24d620:	e1a00006 	mov	r0, r6
        24d624:	e596c000 	ldr	ip, [r6]
        24d628:	e1a0e00f 	mov	lr, pc
        24d62c:	e28cf00c 	add	pc, ip, #12	; 0xc
        24d630:	e0844009 	add	r4, r4, r9
        24d634:	e0899008 	add	r9, r9, r8
        24d638:	e1a02005 	mov	r2, r5
        24d63c:	e1a01009 	mov	r1, r9
        24d640:	e1a00007 	mov	r0, r7
        24d644:	eb5fc646 	bl	1a3ef64 <$FindString(unsigned short *, long, long)>
        24d648:	e3300000 	teq	r0, #0	; 0x0
        24d64c:	0a000006 	beq	24d66c <TXFindString(TXChars *, unsigned short *, long)+0x120>
        24d650:	e0441009 	sub	r1, r4, r9
        24d654:	e0400007 	sub	r0, r0, r7
        24d658:	e0800fa0 	add	r0, r0, r0, lsr #31
        24d65c:	e08100c0 	add	r0, r1, r0, asr #1
        24d660:	e5ad0028 	str	r0, [sp, #40]!
        24d664:	ea00000c 	b	24d69c <TXFindString(TXChars *, unsigned short *, long)+0x150>
        24d668:	00371318 	eoreqs	r1, r7, r8, lsl r3
        24d66c:	e59d002c 	ldr	r0, [sp, #44]
        24d670:	e1500009 	cmp	r0, r9
        24d674:	a1a00009 	movge	r0, r9
        24d678:	e1a08000 	mov	r8, r0
        24d67c:	e0870089 	add	r0, r7, r9, lsl #1
        24d680:	e0400088 	sub	r0, r0, r8, lsl #1
        24d684:	e1a02088 	mov	r2, r8, lsl #1
        24d688:	e1a01007 	mov	r1, r7
        24d68c:	eb664630 	bl	1bdef54 <$BlockMove>
        24d690:	e28dd028 	add	sp, sp, #40	; 0x28
        24d694:	e154000a 	cmp	r4, sl
        24d698:	baffffcf 	blt	24d5dc <TXFindString(TXChars *, unsigned short *, long)+0x90>
        24d69c:	e1a00007 	mov	r0, r7
        24d6a0:	eb66000e 	bl	1bcd6e0 <$__dl(void *)>
        24d6a4:	e49d0008 	ldr	r0, [sp], #8
        24d6a8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXCurrentTicks(void)
 * Address: 0024dd18
 */
TXCurrentTicks(void) {
    /*
        24dd18:	ea669300 	b	1bf2920 <$Ticks(void)>
    */
}

/**
 * Symbol: TabBoot
 * Address: 00250098
 */
void globals::TabBoot() {
    /*
        250098:	e1a0c00d 	mov	ip, sp
        25009c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2500a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2500a4:	eb050a85 	bl	392ac0 <EnterAtomic>
        2500a8:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        2500ac:	ea050a9a 	b	392b1c <ExitAtomic>
    */
}

/**
 * Symbol: TBCTabletBufferInit(TUPort *)
 * Address: 002500b0
 */
TBCTabletBufferInit(TUPort *) {
    /*
        2500b0:	e1a0c00d 	mov	ip, sp
        2500b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2500b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2500bc:	e59f4074 	ldr	r4, [pc, #74]	; 250138 <TBCTabletBufferInit(TUPort *)+0x88>
        2500c0:	e58403f4 	str	r0, [r4, #1012]
        2500c4:	e3a00010 	mov	r0, #16	; 0x10
        2500c8:	eb65f99a 	bl	1bce738 <$__nw(unsigned int)>
        2500cc:	e1b05000 	movs	r5, r0
        2500d0:	11a00005 	movne	r0, r5
        2500d4:	1b665057 	blne	1be4238 <TAEvent::$__ct(void)>
        2500d8:	e58453fc 	str	r5, [r4, #1020]
        2500dc:	e59f1058 	ldr	r1, [pc, #58]	; 25013c <TBCTabletBufferInit(TUPort *)+0x8c>
        2500e0:	e5851000 	str	r1, [r5]
        2500e4:	e59f1054 	ldr	r1, [pc, #54]	; 250140 <TBCTabletBufferInit(TUPort *)+0x90>
        2500e8:	e59403fc 	ldr	r0, [r4, #1020]
        2500ec:	e5a01004 	str	r1, [r0, #4]!
        2500f0:	e3a00002 	mov	r0, #2	; 0x2
        2500f4:	e59413fc 	ldr	r1, [r4, #1020]
        2500f8:	e5a10008 	str	r0, [r1, #8]!
        2500fc:	e3a00000 	mov	r0, #0	; 0x0
        250100:	eb65f569 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        250104:	e3a01001 	mov	r1, #1	; 0x1
        250108:	e5a403f8 	str	r0, [r4, #1016]!
        25010c:	eb661660 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        250110:	eb627152 	bl	1aec660 <$TBCFlushTabletBuffer(void)>
        250114:	e3a00000 	mov	r0, #0	; 0x0
        250118:	e59f1024 	ldr	r1, [pc, #24]	; 250144 <TBCTabletBufferInit(TUPort *)+0x94>
        25011c:	e5c10000 	strb	r0, [r1]
        250120:	e5c10004 	strb	r0, [r1, #4]
        250124:	e5c10010 	strb	r0, [r1, #16]
        250128:	e3a02001 	mov	r2, #1	; 0x1
        25012c:	e5810008 	str	r0, [r1, #8]
        250130:	e5c1200c 	strb	r2, [r1, #12]
        250134:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        250138:	0c107390 	ldceq	3, cr7, [r0], -#576
        25013c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        250140:	696e6b72 	stmvsdb	lr!, {r1, r4, r5, r6, r8, r9, fp, sp, lr}^
        250144:	0c104e9c 	ldceq	14, cr4, [r0], -#624
    */
}

/**
 * Symbol: TBCTabletBufferEmpty(void)
 * Address: 00250148
 */
TBCTabletBufferEmpty(void) {
    /*
        250148:	e59f001c 	ldr	r0, [pc, #1c]	; 25016c <TBCTabletBufferEmpty(void)+0x24>
        25014c:	e8900006 	ldmia	r0, {r1, r2}
        250150:	e1320001 	teq	r2, r1
        250154:	05900008 	ldreq	r0, [r0, #8]
        250158:	01300001 	teqeq	r0, r1
        25015c:	13a00000 	movne	r0, #0	; 0x0
        250160:	03a00001 	moveq	r0, #1	; 0x1
        250164:	e20000ff 	and	r0, r0, #255	; 0xff
        250168:	e1a0f00e 	mov	pc, lr
        25016c:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCGetInkerData(void)
 * Address: 00250170
 */
TBCGetInkerData(void) {
    /*
        250170:	e59f000c 	ldr	r0, [pc, #c]	; 250184 <TBCGetInkerData(void)+0x14>
        250174:	e5901004 	ldr	r1, [r0, #4]
        250178:	e0800101 	add	r0, r0, r1, lsl #2
        25017c:	e590000c 	ldr	r0, [r0, #12]
        250180:	e1a0f00e 	mov	pc, lr
        250184:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCSetInkerData(unsigned long)
 * Address: 00250188
 */
TBCSetInkerData(unsigned long) {
    /*
        250188:	e59f100c 	ldr	r1, [pc, #c]	; 25019c <TBCSetInkerData(unsigned long)+0x14>
        25018c:	e5912004 	ldr	r2, [r1, #4]
        250190:	e0811102 	add	r1, r1, r2, lsl #2
        250194:	e5a1000c 	str	r0, [r1, #12]!
        250198:	e1a0f00e 	mov	pc, lr
        25019c:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCSetInkerData__FUlT1
 * Address: 002501a0
 */
void globals::TBCSetInkerData() {
    /*
        2501a0:	e59f2018 	ldr	r2, [pc, #18]	; 2501c0 <TBCSetInkerData__FUlT1+0x20>
        2501a4:	e5923004 	ldr	r3, [r2, #4]
        2501a8:	e0831001 	add	r1, r3, r1
        2501ac:	e35100fa 	cmp	r1, #250	; 0xfa
        2501b0:	224110fa 	subcs	r1, r1, #250	; 0xfa
        2501b4:	e0821101 	add	r1, r2, r1, lsl #2
        2501b8:	e5a1000c 	str	r0, [r1, #12]!
        2501bc:	e1a0f00e 	mov	pc, lr
        2501c0:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCIncInkerIndex(unsigned long)
 * Address: 002501c4
 */
TBCIncInkerIndex(unsigned long) {
    /*
        2501c4:	e59f1014 	ldr	r1, [pc, #14]	; 2501e0 <TBCIncInkerIndex(unsigned long)+0x1c>
        2501c8:	e5912004 	ldr	r2, [r1, #4]
        2501cc:	e0820000 	add	r0, r2, r0
        2501d0:	e35000fa 	cmp	r0, #250	; 0xfa
        2501d4:	224000fa 	subcs	r0, r0, #250	; 0xfa
        2501d8:	e5a10004 	str	r0, [r1, #4]!
        2501dc:	e1a0f00e 	mov	pc, lr
        2501e0:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCGetStrokerData(void)
 * Address: 002501e4
 */
TBCGetStrokerData(void) {
    /*
        2501e4:	e59f000c 	ldr	r0, [pc, #c]	; 2501f8 <TBCGetStrokerData(void)+0x14>
        2501e8:	e5901008 	ldr	r1, [r0, #8]
        2501ec:	e0800101 	add	r0, r0, r1, lsl #2
        2501f0:	e590000c 	ldr	r0, [r0, #12]
        2501f4:	e1a0f00e 	mov	pc, lr
        2501f8:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCGetStrokerData(unsigned long)
 * Address: 002501fc
 */
TBCGetStrokerData(unsigned long) {
    /*
        2501fc:	e59f1018 	ldr	r1, [pc, #18]	; 25021c <TBCGetStrokerData(unsigned long)+0x20>
        250200:	e5912008 	ldr	r2, [r1, #8]
        250204:	e0820000 	add	r0, r2, r0
        250208:	e35000fa 	cmp	r0, #250	; 0xfa
        25020c:	224000fa 	subcs	r0, r0, #250	; 0xfa
        250210:	e0810100 	add	r0, r1, r0, lsl #2
        250214:	e590000c 	ldr	r0, [r0, #12]
        250218:	e1a0f00e 	mov	pc, lr
        25021c:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCInkerBufferEmpty(void)
 * Address: 00250220
 */
TBCInkerBufferEmpty(void) {
    /*
        250220:	e59f0014 	ldr	r0, [pc, #14]	; 25023c <TBCInkerBufferEmpty(void)+0x1c>
        250224:	e8900003 	ldmia	r0, {r0, r1}
        250228:	e1310000 	teq	r1, r0
        25022c:	13a00000 	movne	r0, #0	; 0x0
        250230:	03a00001 	moveq	r0, #1	; 0x1
        250234:	e20000ff 	and	r0, r0, #255	; 0xff
        250238:	e1a0f00e 	mov	pc, lr
        25023c:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCIncStrokerIndex(unsigned long)
 * Address: 00250240
 */
TBCIncStrokerIndex(unsigned long) {
    /*
        250240:	e59f1014 	ldr	r1, [pc, #14]	; 25025c <TBCIncStrokerIndex(unsigned long)+0x1c>
        250244:	e5912008 	ldr	r2, [r1, #8]
        250248:	e0820000 	add	r0, r2, r0
        25024c:	e35000fa 	cmp	r0, #250	; 0xfa
        250250:	224000fa 	subcs	r0, r0, #250	; 0xfa
        250254:	e5a10008 	str	r0, [r1, #8]!
        250258:	e1a0f00e 	mov	pc, lr
        25025c:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCGetTabletPolling(void)
 * Address: 00250260
 */
TBCGetTabletPolling(void) {
    /*
        250260:	e59f0004 	ldr	r0, [pc, #4]	; 25026c <TBCGetTabletPolling(void)+0xc>
        250264:	e5d00000 	ldrb	r0, [r0]
        250268:	e1a0f00e 	mov	pc, lr
        25026c:	0c104e9c 	ldceq	14, cr4, [r0], -#624
    */
}

/**
 * Symbol: TBCSetTabletPolling(unsigned char)
 * Address: 00250270
 */
TBCSetTabletPolling(unsigned char) {
    /*
        250270:	e59f100c 	ldr	r1, [pc, #c]	; 250284 <TBCSetTabletPolling(unsigned char)+0x14>
        250274:	e5c10000 	strb	r0, [r1]
        250278:	e3a00000 	mov	r0, #0	; 0x0
        25027c:	e5c10004 	strb	r0, [r1, #4]
        250280:	e1a0f00e 	mov	pc, lr
        250284:	0c104e9c 	ldceq	14, cr4, [r0], -#624
    */
}

/**
 * Symbol: TBCPollTablet__FPlT1PUlPUc
 * Address: 00250288
 */
void globals::TBCPollTablet() {
    /*
        250288:	e1a0c00d 	mov	ip, sp
        25028c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        250290:	e24cb004 	sub	fp, ip, #4	; 0x4
        250294:	e1a07000 	mov	r7, r0
        250298:	e1a06001 	mov	r6, r1
        25029c:	e1a05002 	mov	r5, r2
        2502a0:	e1a04003 	mov	r4, r3
        2502a4:	e3a08000 	mov	r8, #0	; 0x0
        2502a8:	eb050a04 	bl	392ac0 <EnterAtomic>
        2502ac:	e59f0068 	ldr	r0, [pc, #68]	; 25031c <TBCPollTablet__FPlT1PUlPUc+0x94>
        2502b0:	e3370000 	teq	r7, #0	; 0x0
        2502b4:	e5901008 	ldr	r1, [r0, #8]
        2502b8:	11a02921 	movne	r2, r1, lsr #18
        2502bc:	11a02902 	movne	r2, r2, lsl #18
        2502c0:	11a022a2 	movne	r2, r2, lsr #5
        2502c4:	15872000 	strne	r2, [r7]
        2502c8:	e3360000 	teq	r6, #0	; 0x0
        2502cc:	11a02701 	movne	r2, r1, lsl #14
        2502d0:	11a02722 	movne	r2, r2, lsr #14
        2502d4:	13c2200f 	bicne	r2, r2, #15	; 0xf
        2502d8:	11a02482 	movne	r2, r2, lsl #9
        2502dc:	15862000 	strne	r2, [r6]
        2502e0:	e3350000 	teq	r5, #0	; 0x0
        2502e4:	1201100f 	andne	r1, r1, #15	; 0xf
        2502e8:	15851000 	strne	r1, [r5]
        2502ec:	e3340000 	teq	r4, #0	; 0x0
        2502f0:	15d0100c 	ldrneb	r1, [r0, #12]
        2502f4:	15c41000 	strneb	r1, [r4]
        2502f8:	e5d01004 	ldrb	r1, [r0, #4]
        2502fc:	e3310000 	teq	r1, #0	; 0x0
        250300:	13a01000 	movne	r1, #0	; 0x0
        250304:	15c01004 	strneb	r1, [r0, #4]
        250308:	03a08039 	moveq	r8, #57	; 0x39
        25030c:	02488cdb 	subeq	r8, r8, #56064	; 0xdb00
        250310:	eb050a01 	bl	392b1c <ExitAtomic>
        250314:	e1a00008 	mov	r0, r8
        250318:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        25031c:	0c104e9c 	ldceq	14, cr4, [r0], -#624
    */
}

/**
 * Symbol: TBCWakeUpInkerFromInterrupt(unsigned long)
 * Address: 00250320
 */
TBCWakeUpInkerFromInterrupt(unsigned long) {
    /*
        250320:	e1a0c00d 	mov	ip, sp
        250324:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        250328:	e24cb004 	sub	fp, ip, #4	; 0x4
        25032c:	e24dd008 	sub	sp, sp, #8	; 0x8
        250330:	e3a04341 	mov	r4, #67108865	; 0x4000001
        250334:	e3a02000 	mov	r2, #0	; 0x0
        250338:	e3300000 	teq	r0, #0	; 0x0
        25033c:	0a000005 	beq	250358 <TBCWakeUpInkerFromInterrupt(unsigned long)+0x38>
        250340:	e3a01066 	mov	r1, #102	; 0x66
        250344:	e2811c0e 	add	r1, r1, #3584	; 0xe00
        250348:	e0010190 	mul	r1, r0, r1
        25034c:	e1a0000d 	mov	r0, sp
        250350:	eb6636ce 	bl	1bdde90 <$TimeFromNow>
        250354:	e1a0200d 	mov	r2, sp
        250358:	e3a01002 	mov	r1, #2	; 0x2
        25035c:	e59fc03c 	ldr	ip, [pc, #3c]	; 2503a0 <TBCWakeUpInkerFromInterrupt(unsigned long)+0x80>
        250360:	e59c03fc 	ldr	r0, [ip, #1020]
        250364:	e3a03001 	mov	r3, #1	; 0x1
        250368:	e5a01008 	str	r1, [r0, #8]!
        25036c:	e3a01000 	mov	r1, #0	; 0x0
        250370:	e1a00004 	mov	r0, r4
        250374:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        250378:	e3a03010 	mov	r3, #16	; 0x10
        25037c:	e92d0008 	stmdb	sp!, {r3}
        250380:	e59c03f8 	ldr	r0, [ip, #1016]
        250384:	e5901000 	ldr	r1, [r0]
        250388:	e5bc03f4 	ldr	r0, [ip, #1012]!
        25038c:	e5bc3008 	ldr	r3, [ip, #8]!
        250390:	e5900000 	ldr	r0, [r0]
        250394:	e3a02000 	mov	r2, #0	; 0x0
        250398:	eb662a69 	bl	1bdad44 <$SendForInterrupt__FUlN21PvN31P5TTimeUc>
        25039c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2503a0:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCWakeUpInker(unsigned long)
 * Address: 002503a4
 */
TBCWakeUpInker(unsigned long) {
    /*
        2503a4:	e1a0c00d 	mov	ip, sp
        2503a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2503ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2503b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2503b4:	e3a03000 	mov	r3, #0	; 0x0
        2503b8:	e3300000 	teq	r0, #0	; 0x0
        2503bc:	0a000005 	beq	2503d8 <TBCWakeUpInker(unsigned long)+0x34>
        2503c0:	e3a01066 	mov	r1, #102	; 0x66
        2503c4:	e2811c0e 	add	r1, r1, #3584	; 0xe00
        2503c8:	e0010190 	mul	r1, r0, r1
        2503cc:	e1a0000d 	mov	r0, sp
        2503d0:	eb6636ae 	bl	1bdde90 <$TimeFromNow>
        2503d4:	e1a0300d 	mov	r3, sp
        2503d8:	e3a01002 	mov	r1, #2	; 0x2
        2503dc:	e59f0048 	ldr	r0, [pc, #48]	; 25042c <TBCWakeUpInker(unsigned long)+0x88>
        2503e0:	e59023fc 	ldr	r2, [r0, #1020]
        2503e4:	e5a21008 	str	r1, [r2, #8]!
        2503e8:	e3a02000 	mov	r2, #0	; 0x0
        2503ec:	e3a05001 	mov	r5, #1	; 0x1
        2503f0:	e3a01001 	mov	r1, #1	; 0x1
        2503f4:	e2800e3f 	add	r0, r0, #1008	; 0x3f0
        2503f8:	e9b05000 	ldmib	r0!, {ip, lr}
        2503fc:	e5904004 	ldr	r4, [r0, #4]
        250400:	e3a00001 	mov	r0, #1	; 0x1
        250404:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        250408:	e1a03005 	mov	r3, r5
        25040c:	e3a02010 	mov	r2, #16	; 0x10
        250410:	e92d000c 	stmdb	sp!, {r2, r3}
        250414:	e1a03004 	mov	r3, r4
        250418:	e1a0000c 	mov	r0, ip
        25041c:	e3a02000 	mov	r2, #0	; 0x0
        250420:	e59e1000 	ldr	r1, [lr]
        250424:	eb662a47 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        250428:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25042c:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCInsertTabletSample__FUlT1
 * Address: 00250430
 */
void globals::TBCInsertTabletSample() {
    /*
        250430:	e1a0c00d 	mov	ip, sp
        250434:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        250438:	e24cb004 	sub	fp, ip, #4	; 0x4
        25043c:	e1a04000 	mov	r4, r0
        250440:	e24dd004 	sub	sp, sp, #4	; 0x4
        250444:	e59f6080 	ldr	r6, [pc, #80]	; 2504cc <TBCInsertTabletSample__FUlT1+0x9c>
        250448:	e5d60000 	ldrb	r0, [r6]
        25044c:	e3300000 	teq	r0, #0	; 0x0
        250450:	1a000058 	bne	2505b8 <TBCInsertTabletSample__FUlT1+0x188>
        250454:	e59f5074 	ldr	r5, [pc, #74]	; 2504d0 <TBCInsertTabletSample__FUlT1+0xa0>
        250458:	e5950000 	ldr	r0, [r5]
        25045c:	e0850100 	add	r0, r5, r0, lsl #2
        250460:	e5a0400c 	str	r4, [r0, #12]!
        250464:	e334000d 	teq	r4, #13	; 0xd
        250468:	1a000019 	bne	2504d4 <TBCInsertTabletSample__FUlT1+0xa4>
        25046c:	e5950000 	ldr	r0, [r5]
        250470:	e35000f9 	cmp	r0, #249	; 0xf9
        250474:	32807001 	addcc	r7, r0, #1	; 0x1
        250478:	23a07000 	movcs	r7, #0	; 0x0
        25047c:	e5950008 	ldr	r0, [r5, #8]
        250480:	e1370000 	teq	r7, r0
        250484:	0a000005 	beq	2504a0 <TBCInsertTabletSample__FUlT1+0x70>
        250488:	e35700f9 	cmp	r7, #249	; 0xf9
        25048c:	32879001 	addcc	r9, r7, #1	; 0x1
        250490:	23a09000 	movcs	r9, #0	; 0x0
        250494:	e1390000 	teq	r9, r0
        250498:	13a00001 	movne	r0, #1	; 0x1
        25049c:	1a000000 	bne	2504a4 <TBCInsertTabletSample__FUlT1+0x74>
        2504a0:	e3a00000 	mov	r0, #0	; 0x0
        2504a4:	e21000ff 	ands	r0, r0, #255	; 0xff
        2504a8:	e58d0000 	str	r0, [sp]
        2504ac:	0a00003d 	beq	2505a8 <TBCInsertTabletSample__FUlT1+0x178>
        2504b0:	e3310000 	teq	r1, #0	; 0x0
        2504b4:	10850107 	addne	r0, r5, r7, lsl #2
        2504b8:	15a0100c 	strne	r1, [r0, #12]!
        2504bc:	1a000036 	bne	25059c <TBCInsertTabletSample__FUlT1+0x16c>
        2504c0:	eb668916 	bl	1bf2920 <$Ticks(void)>
        2504c4:	e0851107 	add	r1, r5, r7, lsl #2
        2504c8:	ea000029 	b	250574 <TBCInsertTabletSample__FUlT1+0x144>
        2504cc:	0c104e9c 	ldceq	14, cr4, [r0], -#624
        2504d0:	0c107390 	ldceq	3, cr7, [r0], -#576
        2504d4:	e334000e 	teq	r4, #14	; 0xe
        2504d8:	e5950000 	ldr	r0, [r5]
        2504dc:	1a000026 	bne	25057c <TBCInsertTabletSample__FUlT1+0x14c>
        2504e0:	e35000f9 	cmp	r0, #249	; 0xf9
        2504e4:	32807001 	addcc	r7, r0, #1	; 0x1
        2504e8:	23a07000 	movcs	r7, #0	; 0x0
        2504ec:	e5950008 	ldr	r0, [r5, #8]
        2504f0:	e1370000 	teq	r7, r0
        2504f4:	0a00000f 	beq	250538 <TBCInsertTabletSample__FUlT1+0x108>
        2504f8:	e35700f9 	cmp	r7, #249	; 0xf9
        2504fc:	3287a001 	addcc	sl, r7, #1	; 0x1
        250500:	23a0a000 	movcs	sl, #0	; 0x0
        250504:	e13a0000 	teq	sl, r0
        250508:	0a00000a 	beq	250538 <TBCInsertTabletSample__FUlT1+0x108>
        25050c:	e35a00f9 	cmp	sl, #249	; 0xf9
        250510:	328a8001 	addcc	r8, sl, #1	; 0x1
        250514:	23a08000 	movcs	r8, #0	; 0x0
        250518:	e1380000 	teq	r8, r0
        25051c:	0a000005 	beq	250538 <TBCInsertTabletSample__FUlT1+0x108>
        250520:	e35800f9 	cmp	r8, #249	; 0xf9
        250524:	32889001 	addcc	r9, r8, #1	; 0x1
        250528:	23a09000 	movcs	r9, #0	; 0x0
        25052c:	e1390000 	teq	r9, r0
        250530:	13a00001 	movne	r0, #1	; 0x1
        250534:	1a000000 	bne	25053c <TBCInsertTabletSample__FUlT1+0x10c>
        250538:	e3a00000 	mov	r0, #0	; 0x0
        25053c:	e21000ff 	ands	r0, r0, #255	; 0xff
        250540:	e58d0000 	str	r0, [sp]
        250544:	0a000017 	beq	2505a8 <TBCInsertTabletSample__FUlT1+0x178>
        250548:	e3310000 	teq	r1, #0	; 0x0
        25054c:	10850107 	addne	r0, r5, r7, lsl #2
        250550:	15a0100c 	strne	r1, [r0, #12]!
        250554:	1a000002 	bne	250564 <TBCInsertTabletSample__FUlT1+0x134>
        250558:	eb6688f0 	bl	1bf2920 <$Ticks(void)>
        25055c:	e0851107 	add	r1, r5, r7, lsl #2
        250560:	e5a1000c 	str	r0, [r1, #12]!
        250564:	e3a00305 	mov	r0, #335544320	; 0x14000000
        250568:	e085110a 	add	r1, r5, sl, lsl #2
        25056c:	e5a1000c 	str	r0, [r1, #12]!
        250570:	e0851108 	add	r1, r5, r8, lsl #2
        250574:	e5a1000c 	str	r0, [r1, #12]!
        250578:	ea000007 	b	25059c <TBCInsertTabletSample__FUlT1+0x16c>
        25057c:	e35000f9 	cmp	r0, #249	; 0xf9
        250580:	32809001 	addcc	r9, r0, #1	; 0x1
        250584:	23a09000 	movcs	r9, #0	; 0x0
        250588:	e5950008 	ldr	r0, [r5, #8]
        25058c:	e0590000 	subs	r0, r9, r0
        250590:	13a00001 	movne	r0, #1	; 0x1
        250594:	e20000ff 	and	r0, r0, #255	; 0xff
        250598:	e58d0000 	str	r0, [sp]
        25059c:	e59d0000 	ldr	r0, [sp]
        2505a0:	e3300000 	teq	r0, #0	; 0x0
        2505a4:	1a000002 	bne	2505b4 <TBCInsertTabletSample__FUlT1+0x184>
        2505a8:	e3a0003a 	mov	r0, #58	; 0x3a
        2505ac:	e2400cdb 	sub	r0, r0, #56064	; 0xdb00
        2505b0:	ea000014 	b	250608 <TBCInsertTabletSample__FUlT1+0x1d8>
        2505b4:	e5859000 	str	r9, [r5]
        2505b8:	e3a00000 	mov	r0, #0	; 0x0
        2505bc:	e334000f 	teq	r4, #15	; 0xf
        2505c0:	0a000010 	beq	250608 <TBCInsertTabletSample__FUlT1+0x1d8>
        2505c4:	e3a01001 	mov	r1, #1	; 0x1
        2505c8:	e5864008 	str	r4, [r6, #8]
        2505cc:	e334000e 	teq	r4, #14	; 0xe
        2505d0:	1a000004 	bne	2505e8 <TBCInsertTabletSample__FUlT1+0x1b8>
        2505d4:	e5d6200c 	ldrb	r2, [r6, #12]
        2505d8:	e3320000 	teq	r2, #0	; 0x0
        2505dc:	05c6100c 	streqb	r1, [r6, #12]
        2505e0:	05c61004 	streqb	r1, [r6, #4]
        2505e4:	ea000007 	b	250608 <TBCInsertTabletSample__FUlT1+0x1d8>
        2505e8:	e204200f 	and	r2, r4, #15	; 0xf
        2505ec:	e332000d 	teq	r2, #13	; 0xd
        2505f0:	1a000001 	bne	2505fc <TBCInsertTabletSample__FUlT1+0x1cc>
        2505f4:	e5c6000c 	strb	r0, [r6, #12]
        2505f8:	ea000002 	b	250608 <TBCInsertTabletSample__FUlT1+0x1d8>
        2505fc:	e3520008 	cmp	r2, #8	; 0x8
        250600:	35c61004 	strccb	r1, [r6, #4]
        250604:	3afffffa 	bcc	2505f4 <TBCInsertTabletSample__FUlT1+0x1c4>
        250608:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TBCStrokerBufferEmpty(void)
 * Address: 0025060c
 */
TBCStrokerBufferEmpty(void) {
    /*
        25060c:	e59f0018 	ldr	r0, [pc, #18]	; 25062c <TBCStrokerBufferEmpty(void)+0x20>
        250610:	e5901004 	ldr	r1, [r0, #4]
        250614:	e5900008 	ldr	r0, [r0, #8]
        250618:	e1310000 	teq	r1, r0
        25061c:	13a00000 	movne	r0, #0	; 0x0
        250620:	03a00001 	moveq	r0, #1	; 0x1
        250624:	e20000ff 	and	r0, r0, #255	; 0xff
        250628:	e1a0f00e 	mov	pc, lr
        25062c:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCFlushTabletBuffer(void)
 * Address: 00250630
 */
TBCFlushTabletBuffer(void) {
    /*
        250630:	e59f000c 	ldr	r0, [pc, #c]	; 250644 <TBCFlushTabletBuffer(void)+0x14>
        250634:	e5901000 	ldr	r1, [r0]
        250638:	e5801004 	str	r1, [r0, #4]
        25063c:	e5a01008 	str	r1, [r0, #8]!
        250640:	e1a0f00e 	mov	pc, lr
        250644:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TBCFlushInkerBuffer(void)
 * Address: 00250648
 */
TBCFlushInkerBuffer(void) {
    /*
        250648:	e59f0008 	ldr	r0, [pc, #8]	; 250658 <TBCFlushInkerBuffer(void)+0x10>
        25064c:	e5901004 	ldr	r1, [r0, #4]
        250650:	e5a01008 	str	r1, [r0, #8]!
        250654:	e1a0f00e 	mov	pc, lr
        250658:	0c107390 	ldceq	3, cr7, [r0], -#576
    */
}

/**
 * Symbol: TabInitialize(Rect const &, TUPort *)
 * Address: 0025065c
 */
TabInitialize(Rect const &, TUPort *) {
    /*
        25065c:	e1a0c00d 	mov	ip, sp
        250660:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        250664:	e24cb004 	sub	fp, ip, #4	; 0x4
        250668:	e1a04000 	mov	r4, r0
        25066c:	e1a00001 	mov	r0, r1
        250670:	eb627408 	bl	1aed698 <$TBCTabletBufferInit(TUPort *)>
        250674:	e3300000 	teq	r0, #0	; 0x0
        250678:	0a000001 	beq	250684 <TabInitialize(Rect const &, TUPort *)+0x28>
        25067c:	e20000ff 	and	r0, r0, #255	; 0xff
        250680:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        250684:	e28f1f0e 	add	r1, pc, #56	; 0x38
        250688:	e28f0f12 	add	r0, pc, #72	; 0x48
        25068c:	eb661d3e 	bl	1bd7b8c <$NewByName__FPCcT1>
        250690:	e59f5050 	ldr	r5, [pc, #50]	; 2506e8 <TabInitialize(Rect const &, TUPort *)+0x8c>
        250694:	e5850000 	str	r0, [r5]
        250698:	e3300000 	teq	r0, #0	; 0x0
        25069c:	1a000004 	bne	2506b4 <TabInitialize(Rect const &, TUPort *)+0x58>
        2506a0:	eb6267a9 	bl	1aea54c <$ClassInfo__16TResistiveTabletSFv>
        2506a4:	eb662164 	bl	1bd8c3c <TClassInfo::$Register( const(void))>
        2506a8:	e28f0f0f 	add	r0, pc, #60	; 0x3c
        2506ac:	eb626bc8 	bl	1aeb5d4 <$New__13TTabletDriverSFPc>
        2506b0:	e5850000 	str	r0, [r5]
        2506b4:	e1a01004 	mov	r1, r4
        2506b8:	e5950000 	ldr	r0, [r5]
        2506bc:	eb626bbd 	bl	1aeb5b8 <TTabletDriver::$Init(Rect const &)>
        2506c0:	eaffffed 	b	25067c <TabInitialize(Rect const &, TUPort *)+0x20>
        2506c4:	544d6169 	strplb	r6, [sp], -#361
        2506c8:	6e546162 	rdfvssz	f6, f4, f2
        2506cc:	6c657444 	stcvsl	4, cr7, [r5], -#272
        2506d0:	72697665 	rsbvc	r7, r9, #105906176	; 0x6500000
        2506d4:	72000000 	andvc	r0, r0, #0	; 0x0
        2506d8:	54546162 	ldrplb	r6, [r4], -#354
        2506dc:	6c657444 	stcvsl	4, cr7, [r5], -#272
        2506e0:	72697665 	rsbvc	r7, r9, #105906176	; 0x6500000
        2506e4:	72000000 	andvc	r0, r0, #0	; 0x0
        2506e8:	0c104d34 	ldceq	13, cr4, [r0], -#208
        2506ec:	54526573 	ldrplb	r6, [r2], -#1395
        2506f0:	69737469 	ldmvsdb	r3!, {r0, r3, r5, r6, sl, ip, sp, lr}^
        2506f4:	76655461 	strvcbt	r5, [r5], -r1, ror #8
        2506f8:	626c6574 	rsbvs	r6, ip, #486539264	; 0x1d000000
        2506fc:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TabSetOrientation(long)
 * Address: 00250718
 */
TabSetOrientation(long) {
    /*
        250718:	e1a01000 	mov	r1, r0
        25071c:	e59f0004 	ldr	r0, [pc, #4]	; 250728 <TabSetOrientation(long)+0x10>
        250720:	e5900000 	ldr	r0, [r0]
        250724:	ea6273df 	b	1aed6a8 <TTabletDriver::$TabSetOrientation(long)>
        250728:	0c104d34 	ldceq	13, cr4, [r0], -#208
    */
}

/**
 * Symbol: TabletNeedsRecalibration(void)
 * Address: 0025072c
 */
TabletNeedsRecalibration(void) {
    /*
        25072c:	e59f0004 	ldr	r0, [pc, #4]	; 250738 <TabletNeedsRecalibration(void)+0xc>
        250730:	e5900000 	ldr	r0, [r0]
        250734:	ea627c19 	b	1aef7a0 <TTabletDriver::$TabletNeedsRecalibration(void)>
        250738:	0c104d34 	ldceq	13, cr4, [r0], -#208
    */
}

/**
 * Symbol: TabWakeUp
 * Address: 0025074c
 */
void globals::TabWakeUp() {
    /*
        25074c:	e59f0004 	ldr	r0, [pc, #4]	; 250758 <TabWakeUp+0xc>
        250750:	e5900000 	ldr	r0, [r0]
        250754:	ea6273dd 	b	1aed6d0 <TTabletDriver::$WakeUp(void)>
        250758:	0c104d34 	ldceq	13, cr4, [r0], -#208
    */
}

/**
 * Symbol: TabletBufferEmpty(void)
 * Address: 002507b0
 */
TabletBufferEmpty(void) {
    /*
        2507b0:	ea6273b7 	b	1aed694 <$TBCTabletBufferEmpty(void)>
    */
}

/**
 * Symbol: TabShutDown
 * Address: 002507c8
 */
void globals::TabShutDown() {
    /*
        2507c8:	e59f0004 	ldr	r0, [pc, #4]	; 2507d4 <TabShutDown+0xc>
        2507cc:	e5900000 	ldr	r0, [r0]
        2507d0:	ea626f97 	b	1aec634 <TTabletDriver::$ShutDown(void)>
        2507d4:	0c104d34 	ldceq	13, cr4, [r0], -#208
    */
}

/**
 * Symbol: TabletIdle(void)
 * Address: 002507f0
 */
TabletIdle(void) {
    /*
        2507f0:	e3a00000 	mov	r0, #0	; 0x0
        2507f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TabADCEntry
 * Address: 002507f8
 */
void globals::TabADCEntry() {
    /*
        2507f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Ticks(void)
 * Address: 002550f8
 */
Ticks(void) {
    /*
        2550f8:	e1a0c00d 	mov	ip, sp
        2550fc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        255100:	e24cb004 	sub	fp, ip, #4	; 0x4
        255104:	e24dd010 	sub	sp, sp, #16	; 0x10
        255108:	e1a0000d 	mov	r0, sp
        25510c:	eb65fa31 	bl	1bd39d8 <$GetGlobalTime>
        255110:	e28d1008 	add	r1, sp, #8	; 0x8
        255114:	e89d5000 	ldmia	sp, {ip, lr}
        255118:	e8815000 	stmia	r1, {ip, lr}
        25511c:	e28d0008 	add	r0, sp, #8	; 0x8
        255120:	e3a01a0f 	mov	r1, #61440	; 0xf000
        255124:	eb65edc2 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
        255128:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
        25512c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ToggleCase(unsigned short)
 * Address: 0025793c
 */
ToggleCase(unsigned short) {
    /*
        25793c:	e1a0c00d 	mov	ip, sp
        257940:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        257944:	e24cb004 	sub	fp, ip, #4	; 0x4
        257948:	e1a04800 	mov	r4, r0, lsl #16
        25794c:	e1a04824 	mov	r4, r4, lsr #16
        257950:	e24dd004 	sub	sp, sp, #4	; 0x4
        257954:	e5cd4001 	strb	r4, [sp, #1]
        257958:	e1a00424 	mov	r0, r4, lsr #8
        25795c:	e5cd0000 	strb	r0, [sp]
        257960:	e1a0000d 	mov	r0, sp
        257964:	e3a01001 	mov	r1, #1	; 0x1
        257968:	eb664af9 	bl	1bea554 <$LowercaseText(unsigned short *, long)>
        25796c:	e59d0000 	ldr	r0, [sp]
        257970:	e1340820 	teq	r4, r0, lsr #16
        257974:	01a0000d 	moveq	r0, sp
        257978:	03a01001 	moveq	r1, #1	; 0x1
        25797c:	0b665b72 	bleq	1bee74c <$UppercaseText(unsigned short *, long)>
        257980:	e59d0000 	ldr	r0, [sp]
        257984:	e1a00820 	mov	r0, r0, lsr #16
        257988:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TaskGiveObject__FUlT1
 * Address: 002596f0
 */
void globals::TaskGiveObject() {
    /*
        2596f0:	e1a02001 	mov	r2, r1
        2596f4:	e1a01000 	mov	r1, r0
        2596f8:	e3a00001 	mov	r0, #1	; 0x1
        2596fc:	ea05529c 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: TaskAcceptObject(unsigned long)
 * Address: 00259700
 */
TaskAcceptObject(unsigned long) {
    /*
        259700:	e1a01000 	mov	r1, r0
        259704:	e3a00002 	mov	r0, #2	; 0x2
        259708:	ea055299 	b	3ae174 <GenericSWI>
    */
}

/**
 * Symbol: TTimeToMilliseconds(TTime)
 * Address: 0025c4f0
 */
TTimeToMilliseconds(TTime) {
    /*
        25c4f0:	e1a0c00d 	mov	ip, sp
        25c4f4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25c4f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c4fc:	e24dd008 	sub	sp, sp, #8	; 0x8
        25c500:	e8905000 	ldmia	r0, {ip, lr}
        25c504:	e88d5000 	stmia	sp, {ip, lr}
        25c508:	e24dd004 	sub	sp, sp, #4	; 0x4
        25c50c:	e1a0200d 	mov	r2, sp
        25c510:	e28d0004 	add	r0, sp, #4	; 0x4
        25c514:	e3a01066 	mov	r1, #102	; 0x66
        25c518:	e2811c0e 	add	r1, r1, #3584	; 0xe00
        25c51c:	eb6612da 	bl	1be108c <$CompDiv>
        25c520:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TestStrokeSeg(_CDC *, unsigned long, unsigned short)
 * Address: 0027fde0
 */
TestStrokeSeg(_CDC *, unsigned long, unsigned short) {
    /*
        27fde0:	e1a0c00d 	mov	ip, sp
        27fde4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27fde8:	e24cb004 	sub	fp, ip, #4	; 0x4
        27fdec:	e1a04000 	mov	r4, r0
        27fdf0:	e1a05001 	mov	r5, r1
        27fdf4:	e1a00802 	mov	r0, r2, lsl #16
        27fdf8:	e1a00820 	mov	r0, r0, lsr #16
        27fdfc:	e52d0014 	str	r0, [sp, -#20]!
        27fe00:	e24dd018 	sub	sp, sp, #24	; 0x18
        27fe04:	e3a00000 	mov	r0, #0	; 0x0
        27fe08:	e58d0014 	str	r0, [sp, #20]
        27fe0c:	e2848040 	add	r8, r4, #64	; 0x40
        27fe10:	e58d8028 	str	r8, [sp, #40]
        27fe14:	e28490d0 	add	r9, r4, #208	; 0xd0
        27fe18:	e58d9024 	str	r9, [sp, #36]
        27fe1c:	e2846d07 	add	r6, r4, #448	; 0x1c0
        27fe20:	e5940dc0 	ldr	r0, [r4, #3520]
        27fe24:	e1a00820 	mov	r0, r0, lsr #16
        27fe28:	e0800080 	add	r0, r0, r0, lsl #1
        27fe2c:	e0860180 	add	r0, r6, r0, lsl #3
        27fe30:	e2400018 	sub	r0, r0, #24	; 0x18
        27fe34:	e58d0000 	str	r0, [sp]
        27fe38:	e5960000 	ldr	r0, [r6]
        27fe3c:	e58d0010 	str	r0, [sp, #16]
        27fe40:	e5960004 	ldr	r0, [r6, #4]
        27fe44:	e58d000c 	str	r0, [sp, #12]
        27fe48:	e59d0000 	ldr	r0, [sp]
        27fe4c:	e5900000 	ldr	r0, [r0]
        27fe50:	e58d0008 	str	r0, [sp, #8]
        27fe54:	e59d0000 	ldr	r0, [sp]
        27fe58:	e5900004 	ldr	r0, [r0, #4]
        27fe5c:	e58d0004 	str	r0, [sp, #4]
        27fe60:	e3a07000 	mov	r7, #0	; 0x0
        27fe64:	e2841e17 	add	r1, r4, #368	; 0x170
        27fe68:	e58d1020 	str	r1, [sp, #32]
        27fe6c:	e2840e16 	add	r0, r4, #352	; 0x160
        27fe70:	e58d001c 	str	r0, [sp, #28]
        27fe74:	ea00005b 	b	27ffe8 <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x208>
        27fe78:	e5940168 	ldr	r0, [r4, #360]
        27fe7c:	e58401a8 	str	r0, [r4, #424]
        27fe80:	e5940178 	ldr	r0, [r4, #376]
        27fe84:	e58401b8 	str	r0, [r4, #440]
        27fe88:	e594016c 	ldr	r0, [r4, #364]
        27fe8c:	e58401ac 	str	r0, [r4, #428]
        27fe90:	e594017c 	ldr	r0, [r4, #380]
        27fe94:	e58401bc 	str	r0, [r4, #444]
        27fe98:	e1a03009 	mov	r3, r9
        27fe9c:	e1a02008 	mov	r2, r8
        27fea0:	e1a01006 	mov	r1, r6
        27fea4:	e59d0000 	ldr	r0, [sp]
        27fea8:	eb5fbe34 	bl	1a6f780 <$Repar__FP6_ORG_PT1P6_RPR_PT3>
        27feac:	e1a0a000 	mov	sl, r0
        27feb0:	e59d0024 	ldr	r0, [sp, #36]
        27feb4:	e59d101c 	ldr	r1, [sp, #28]
        27feb8:	e59d2010 	ldr	r2, [sp, #16]
        27febc:	e59d3008 	ldr	r3, [sp, #8]
        27fec0:	eb5fc252 	bl	1a70810 <$RFFT_9_4_X__FP6_RPR_PPllT3>
        27fec4:	e59d0028 	ldr	r0, [sp, #40]
        27fec8:	e59d101c 	ldr	r1, [sp, #28]
        27fecc:	eb5fc250 	bl	1a70814 <$RIFT_4_9_X(_RPR_P *, long *)>
        27fed0:	e59d0024 	ldr	r0, [sp, #36]
        27fed4:	e59d1020 	ldr	r1, [sp, #32]
        27fed8:	e59d200c 	ldr	r2, [sp, #12]
        27fedc:	e59d3004 	ldr	r3, [sp, #4]
        27fee0:	eb5fc24c 	bl	1a70818 <$RFFT_9_4_Y__FP6_RPR_PPllT3>
        27fee4:	e59d0028 	ldr	r0, [sp, #40]
        27fee8:	e59d1020 	ldr	r1, [sp, #32]
        27feec:	eb5fc24a 	bl	1a7081c <$RIFT_4_9_Y(_RPR_P *, long *)>
        27fef0:	e59fc0e0 	ldr	ip, [pc, #e0]	; 27ffd8 <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x1f8>
        27fef4:	e15a000c 	cmp	sl, ip
        27fef8:	aa000009 	bge	27ff24 <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x144>
        27fefc:	e3550000 	cmp	r5, #0	; 0x0
        27ff00:	9a000007 	bls	27ff24 <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x144>
        27ff04:	e1a02009 	mov	r2, r9
        27ff08:	e1a01008 	mov	r1, r8
        27ff0c:	e3a00009 	mov	r0, #9	; 0x9
        27ff10:	eb5fc242 	bl	1a70820 <$MSQError__FUsP6_RPR_PT2>
        27ff14:	e1500005 	cmp	r0, r5
        27ff18:	33a00001 	movcc	r0, #1	; 0x1
        27ff1c:	358d0014 	strcc	r0, [sp, #20]
        27ff20:	3a000033 	bcc	27fff4 <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x214>
        27ff24:	e35a0201 	cmp	sl, #268435456	; 0x10000000
        27ff28:	ca000031 	bgt	27fff4 <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x214>
        27ff2c:	e3a00000 	mov	r0, #0	; 0x0
        27ff30:	e5941168 	ldr	r1, [r4, #360]
        27ff34:	e59421a8 	ldr	r2, [r4, #424]
        27ff38:	e0411002 	sub	r1, r1, r2
        27ff3c:	e3510000 	cmp	r1, #0	; 0x0
        27ff40:	b2611000 	rsblt	r1, r1, #0	; 0x0
        27ff44:	e0800001 	add	r0, r0, r1
        27ff48:	e5941178 	ldr	r1, [r4, #376]
        27ff4c:	e59421b8 	ldr	r2, [r4, #440]
        27ff50:	e0411002 	sub	r1, r1, r2
        27ff54:	e3510000 	cmp	r1, #0	; 0x0
        27ff58:	b2611000 	rsblt	r1, r1, #0	; 0x0
        27ff5c:	e0800001 	add	r0, r0, r1
        27ff60:	e59411ac 	ldr	r1, [r4, #428]
        27ff64:	e594216c 	ldr	r2, [r4, #364]
        27ff68:	e0421001 	sub	r1, r2, r1
        27ff6c:	e3510000 	cmp	r1, #0	; 0x0
        27ff70:	b2611000 	rsblt	r1, r1, #0	; 0x0
        27ff74:	e0800001 	add	r0, r0, r1
        27ff78:	e59411bc 	ldr	r1, [r4, #444]
        27ff7c:	e594217c 	ldr	r2, [r4, #380]
        27ff80:	e0421001 	sub	r1, r2, r1
        27ff84:	e3510000 	cmp	r1, #0	; 0x0
        27ff88:	b2611000 	rsblt	r1, r1, #0	; 0x0
        27ff8c:	e0800001 	add	r0, r0, r1
        27ff90:	e5840e5c 	str	r0, [r4, #3676]
        27ff94:	e3500050 	cmp	r0, #80	; 0x50
        27ff98:	aa000003 	bge	27ffac <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x1cc>
        27ff9c:	e3550000 	cmp	r5, #0	; 0x0
        27ffa0:	8a000013 	bhi	27fff4 <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x214>
        27ffa4:	e3570000 	cmp	r7, #0	; 0x0
        27ffa8:	ca000011 	bgt	27fff4 <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x214>
        27ffac:	e1a01008 	mov	r1, r8
        27ffb0:	e3a00009 	mov	r0, #9	; 0x9
        27ffb4:	eb5fbdf6 	bl	1a6f794 <$Tracing(long, _RPR_P *)>
        27ffb8:	e598008c 	ldr	r0, [r8, #140]
        27ffbc:	e3500b01 	cmp	r0, #1024	; 0x400
        27ffc0:	2a000005 	bcs	27ffdc <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x1fc>
        27ffc4:	e3a00001 	mov	r0, #1	; 0x1
        27ffc8:	e58d0014 	str	r0, [sp, #20]
        27ffcc:	e1a00004 	mov	r0, r4
        27ffd0:	eb5fc20d 	bl	1a7080c <$ResetParam(_CDC *)>
        27ffd4:	ea000006 	b	27fff4 <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x214>
        27ffd8:	011a9561 	tsteq	sl, r1, ror #10
        27ffdc:	e2870001 	add	r0, r7, #1	; 0x1
        27ffe0:	e1a07800 	mov	r7, r0, lsl #16
        27ffe4:	e1a07827 	mov	r7, r7, lsr #16
        27ffe8:	e59d0018 	ldr	r0, [sp, #24]
        27ffec:	e1570000 	cmp	r7, r0
        27fff0:	baffffa0 	blt	27fe78 <TestStrokeSeg(_CDC *, unsigned long, unsigned short)+0x98>
        27fff4:	e59d0014 	ldr	r0, [sp, #20]
        27fff8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TryQuantVariant__FPlT1lT1
 * Address: 0028333c
 */
void globals::TryQuantVariant() {
    /*
        28333c:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        283340:	e3a0e000 	mov	lr, #0	; 0x0
        283344:	e590c008 	ldr	ip, [r0, #8]
        283348:	e5916008 	ldr	r6, [r1, #8]
        28334c:	e04c4006 	sub	r4, ip, r6
        283350:	e00c0494 	mul	ip, r4, r4
        283354:	e15c0002 	cmp	ip, r2
        283358:	ca000017 	bgt	2833bc <TryQuantVariant__FPlT1lT1+0x80>
        28335c:	e590400c 	ldr	r4, [r0, #12]
        283360:	e591500c 	ldr	r5, [r1, #12]
        283364:	e0447005 	sub	r7, r4, r5
        283368:	e02cc797 	mla	ip, r7, r7, ip
        28336c:	e15c0002 	cmp	ip, r2
        283370:	ca000011 	bgt	2833bc <TryQuantVariant__FPlT1lT1+0x80>
        283374:	e5914000 	ldr	r4, [r1]
        283378:	e5911004 	ldr	r1, [r1, #4]
        28337c:	e0847001 	add	r7, r4, r1
        283380:	e0877fa7 	add	r7, r7, r7, lsr #31
        283384:	e5908000 	ldr	r8, [r0]
        283388:	e04870c7 	sub	r7, r8, r7, asr #1
        28338c:	e0877006 	add	r7, r7, r6
        283390:	e02cc797 	mla	ip, r7, r7, ip
        283394:	e15c0002 	cmp	ip, r2
        283398:	ca000007 	bgt	2833bc <TryQuantVariant__FPlT1lT1+0x80>
        28339c:	e0441001 	sub	r1, r4, r1
        2833a0:	e0811fa1 	add	r1, r1, r1, lsr #31
        2833a4:	e5900004 	ldr	r0, [r0, #4]
        2833a8:	e04000c1 	sub	r0, r0, r1, asr #1
        2833ac:	e0801005 	add	r1, r0, r5
        2833b0:	e02cc191 	mla	ip, r1, r1, ip
        2833b4:	e15c0002 	cmp	ip, r2
        2833b8:	d3a0e001 	movle	lr, #1	; 0x1
        2833bc:	e583c000 	str	ip, [r3]
        2833c0:	e1a0000e 	mov	r0, lr
        2833c4:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: Tracing(long, _RPR_P *)
 * Address: 00283d9c
 */
Tracing(long, _RPR_P *) {
    /*
        283d9c:	e1a0c00d 	mov	ip, sp
        283da0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        283da4:	e24cb004 	sub	fp, ip, #4	; 0x4
        283da8:	e1a05000 	mov	r5, r0
        283dac:	e3a07000 	mov	r7, #0	; 0x0
        283db0:	e581700c 	str	r7, [r1, #12]
        283db4:	e5817008 	str	r7, [r1, #8]
        283db8:	e2814010 	add	r4, r1, #16	; 0x10
        283dbc:	e3a08801 	mov	r8, #65536	; 0x10000
        283dc0:	e2488001 	sub	r8, r8, #1	; 0x1
        283dc4:	e2440010 	sub	r0, r4, #16	; 0x10
        283dc8:	e5902000 	ldr	r2, [r0]
        283dcc:	e5941000 	ldr	r1, [r4]
        283dd0:	e0412002 	sub	r2, r1, r2
        283dd4:	e5b01004 	ldr	r1, [r0, #4]!
        283dd8:	e5940004 	ldr	r0, [r4, #4]
        283ddc:	e0401001 	sub	r1, r0, r1
        283de0:	e3520000 	cmp	r2, #0	; 0x0
        283de4:	b2622000 	rsblt	r2, r2, #0	; 0x0
        283de8:	e3510000 	cmp	r1, #0	; 0x0
        283dec:	b2611000 	rsblt	r1, r1, #0	; 0x0
        283df0:	e1520001 	cmp	r2, r1
        283df4:	d1a00001 	movle	r0, r1
        283df8:	c1a00002 	movgt	r0, r2
        283dfc:	e0823001 	add	r3, r2, r1
        283e00:	e0830000 	add	r0, r3, r0
        283e04:	e1a00080 	mov	r0, r0, lsl #1
        283e08:	e3a06000 	mov	r6, #0	; 0x0
        283e0c:	ea000003 	b	283e20 <Tracing(long, _RPR_P *)+0x84>
        283e10:	e1a000a0 	mov	r0, r0, lsr #1
        283e14:	e1a020c2 	mov	r2, r2, asr #1
        283e18:	e1a010c1 	mov	r1, r1, asr #1
        283e1c:	e2866001 	add	r6, r6, #1	; 0x1
        283e20:	e1500008 	cmp	r0, r8
        283e24:	8afffff9 	bhi	283e10 <Tracing(long, _RPR_P *)+0x74>
        283e28:	e0000292 	mul	r0, r2, r2
        283e2c:	e0200191 	mla	r0, r1, r1, r0
        283e30:	eb5fae54 	bl	1a6f788 <$SQRT32(unsigned long)>
        283e34:	e1a00610 	mov	r0, r0, lsl r6
        283e38:	e5840008 	str	r0, [r4, #8]
        283e3c:	e0877000 	add	r7, r7, r0
        283e40:	e584700c 	str	r7, [r4, #12]
        283e44:	e2844010 	add	r4, r4, #16	; 0x10
        283e48:	e2555001 	subs	r5, r5, #1	; 0x1
        283e4c:	1affffdc 	bne	283dc4 <Tracing(long, _RPR_P *)+0x28>
        283e50:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: ToUpper
 * Address: 00283f58
 */
void globals::ToUpper() {
    /*
        283f58:	e1a0c00d 	mov	ip, sp
        283f5c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        283f60:	e24cb004 	sub	fp, ip, #4	; 0x4
        283f64:	e20030ff 	and	r3, r0, #255	; 0xff
        283f68:	e20340ff 	and	r4, r3, #255	; 0xff
        283f6c:	e1a00003 	mov	r0, r3
        283f70:	eb62a9fd 	bl	1b2e76c <$IsAlpha>
        283f74:	e3300000 	teq	r0, #0	; 0x0
        283f78:	0a000009 	beq	283fa4 <ToUpper+0x4c>
        283f7c:	e354007f 	cmp	r4, #127	; 0x7f
        283f80:	c204107f 	andgt	r1, r4, #127	; 0x7f
        283f84:	c59f0020 	ldrgt	r0, [pc, #20]	; 283fac <ToUpper+0x54>
        283f88:	c7d00001 	ldrgtb	r0, [r0, r1]
        283f8c:	c91ba810 	ldmgtdb	fp, {r4, fp, sp, pc}
        283f90:	e3540061 	cmp	r4, #97	; 0x61
        283f94:	ba000002 	blt	283fa4 <ToUpper+0x4c>
        283f98:	e354007a 	cmp	r4, #122	; 0x7a
        283f9c:	d2440020 	suble	r0, r4, #32	; 0x20
        283fa0:	d91ba810 	ldmledb	fp, {r4, fp, sp, pc}
        283fa4:	e1a00003 	mov	r0, r3
        283fa8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        283fac:	00376cd4 	ldreqsb	r6, [r7], -r4
    */
}

/**
 * Symbol: ToLower
 * Address: 00283fb0
 */
void globals::ToLower() {
    /*
        283fb0:	e1a0c00d 	mov	ip, sp
        283fb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        283fb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        283fbc:	e20030ff 	and	r3, r0, #255	; 0xff
        283fc0:	e20340ff 	and	r4, r3, #255	; 0xff
        283fc4:	e1a00003 	mov	r0, r3
        283fc8:	eb62a9e7 	bl	1b2e76c <$IsAlpha>
        283fcc:	e3300000 	teq	r0, #0	; 0x0
        283fd0:	0a000009 	beq	283ffc <ToLower+0x4c>
        283fd4:	e354007f 	cmp	r4, #127	; 0x7f
        283fd8:	c204107f 	andgt	r1, r4, #127	; 0x7f
        283fdc:	c59f0020 	ldrgt	r0, [pc, #20]	; 284004 <ToLower+0x54>
        283fe0:	c7d00001 	ldrgtb	r0, [r0, r1]
        283fe4:	c91ba810 	ldmgtdb	fp, {r4, fp, sp, pc}
        283fe8:	e3540041 	cmp	r4, #65	; 0x41
        283fec:	ba000002 	blt	283ffc <ToLower+0x4c>
        283ff0:	e354005a 	cmp	r4, #90	; 0x5a
        283ff4:	d2840020 	addle	r0, r4, #32	; 0x20
        283ff8:	d91ba810 	ldmledb	fp, {r4, fp, sp, pc}
        283ffc:	e1a00003 	mov	r0, r3
        284000:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        284004:	00376d54 	eoreqs	r6, r7, r4, asr sp
    */
}

/**
 * Symbol: ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)
 * Address: 0028fa14
 */
ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int) {
    /*
        28fa14:	e1a0c00d 	mov	ip, sp
        28fa18:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        28fa1c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        28fa20:	e24cb014 	sub	fp, ip, #20	; 0x14
        28fa24:	e1a05001 	mov	r5, r1
        28fa28:	e1a04002 	mov	r4, r2
        28fa2c:	e59b9014 	ldr	r9, [fp, #20]
        28fa30:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        28fa34:	e3e07000 	mvn	r7, #0	; 0x0
        28fa38:	e58d7010 	str	r7, [sp, #16]
        28fa3c:	e59b0018 	ldr	r0, [fp, #24]
        28fa40:	e3500000 	cmp	r0, #0	; 0x0
        28fa44:	03a00000 	moveq	r0, #0	; 0x0
        28fa48:	0a0000b1 	beq	28fd14 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x300>
        28fa4c:	e3a06000 	mov	r6, #0	; 0x0
        28fa50:	da0000ae 	ble	28fd10 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x2fc>
        28fa54:	e7998106 	ldr	r8, [r9, r6, lsl #2]
        28fa58:	e5980028 	ldr	r0, [r8, #40]
        28fa5c:	e240ccff 	sub	ip, r0, #65280	; 0xff00
        28fa60:	e33c00ff 	teq	ip, #255	; 0xff
        28fa64:	0a0000a5 	beq	28fd00 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x2ec>
        28fa68:	e280afbb 	add	sl, r0, #748	; 0x2ec
        28fa6c:	e24aab02 	sub	sl, sl, #2048	; 0x800
        28fa70:	e1a0100a 	mov	r1, sl
        28fa74:	e3a00064 	mov	r0, #100	; 0x64
        28fa78:	eb648bb2 	bl	1bb2948 <$__rt_udiv>
        28fa7c:	e080c180 	add	ip, r0, r0, lsl #3
        28fa80:	e08c0200 	add	r0, ip, r0, lsl #4
        28fa84:	e04a0100 	sub	r0, sl, r0, lsl #2
        28fa88:	e3300003 	teq	r0, #3	; 0x3
        28fa8c:	1a00009b 	bne	28fd00 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x2ec>
        28fa90:	e1a01008 	mov	r1, r8
        28fa94:	e59b0004 	ldr	r0, [fp, #4]
        28fa98:	eb627f42 	bl	1b2f7a8 <$LO_HowManyChunks(void *, tag_LOWOBJ *)>
        28fa9c:	e1a08000 	mov	r8, r0
        28faa0:	e3a03001 	mov	r3, #1	; 0x1
        28faa4:	e92d0008 	stmdb	sp!, {r3}
        28faa8:	e7993106 	ldr	r3, [r9, r6, lsl #2]
        28faac:	e1a02004 	mov	r2, r4
        28fab0:	e1a01005 	mov	r1, r5
        28fab4:	e59b0004 	ldr	r0, [fp, #4]
        28fab8:	eb627f38 	bl	1b2f7a0 <$LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)>
        28fabc:	e28dd004 	add	sp, sp, #4	; 0x4
        28fac0:	e59b3010 	ldr	r3, [fp, #16]
        28fac4:	e7930100 	ldr	r0, [r3, r0, lsl #2]
        28fac8:	e080c100 	add	ip, r0, r0, lsl #2
        28facc:	e08c0280 	add	r0, ip, r0, lsl #5
        28fad0:	e795a100 	ldr	sl, [r5, r0, lsl #2]
        28fad4:	e1a03008 	mov	r3, r8
        28fad8:	e92d0008 	stmdb	sp!, {r3}
        28fadc:	e7993106 	ldr	r3, [r9, r6, lsl #2]
        28fae0:	e1a02004 	mov	r2, r4
        28fae4:	e1a01005 	mov	r1, r5
        28fae8:	e59b0004 	ldr	r0, [fp, #4]
        28faec:	eb627f2b 	bl	1b2f7a0 <$LO_GetRealChunkInd(void *, tag_CHUNK *, tag_wapx_type *, tag_LOWOBJ *, int)>
        28faf0:	e28dd004 	add	sp, sp, #4	; 0x4
        28faf4:	e59b3010 	ldr	r3, [fp, #16]
        28faf8:	e7930100 	ldr	r0, [r3, r0, lsl #2]
        28fafc:	e080c100 	add	ip, r0, r0, lsl #2
        28fb00:	e08c0280 	add	r0, ip, r0, lsl #5
        28fb04:	e0850100 	add	r0, r5, r0, lsl #2
        28fb08:	e5b01004 	ldr	r1, [r0, #4]!
        28fb0c:	e28a0001 	add	r0, sl, #1	; 0x1
        28fb10:	e2411001 	sub	r1, r1, #1	; 0x1
        28fb14:	e58d0018 	str	r0, [sp, #24]
        28fb18:	e1510000 	cmp	r1, r0
        28fb1c:	ba00000c 	blt	28fb54 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x140>
        28fb20:	e0602180 	rsb	r2, r0, r0, lsl #3
        28fb24:	e0842102 	add	r2, r4, r2, lsl #2
        28fb28:	e1a03002 	mov	r3, r2
        28fb2c:	e512c00c 	ldr	ip, [r2, -#12]
        28fb30:	e5922010 	ldr	r2, [r2, #16]
        28fb34:	e15c0002 	cmp	ip, r2
        28fb38:	b593302c 	ldrlt	r3, [r3, #44]
        28fb3c:	b1530002 	cmplt	r3, r2
        28fb40:	b1a07000 	movlt	r7, r0
        28fb44:	ba000002 	blt	28fb54 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x140>
        28fb48:	e2800001 	add	r0, r0, #1	; 0x1
        28fb4c:	e1510000 	cmp	r1, r0
        28fb50:	aafffff2 	bge	28fb20 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x10c>
        28fb54:	e3770001 	cmn	r7, #1	; 0x1
        28fb58:	0a000068 	beq	28fd00 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x2ec>
        28fb5c:	e2870001 	add	r0, r7, #1	; 0x1
        28fb60:	e1510000 	cmp	r1, r0
        28fb64:	ba00000c 	blt	28fb9c <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x188>
        28fb68:	e0602180 	rsb	r2, r0, r0, lsl #3
        28fb6c:	e0842102 	add	r2, r4, r2, lsl #2
        28fb70:	e1a03002 	mov	r3, r2
        28fb74:	e512c00c 	ldr	ip, [r2, -#12]
        28fb78:	e5922010 	ldr	r2, [r2, #16]
        28fb7c:	e15c0002 	cmp	ip, r2
        28fb80:	c593302c 	ldrgt	r3, [r3, #44]
        28fb84:	c1530002 	cmpgt	r3, r2
        28fb88:	c58d0010 	strgt	r0, [sp, #16]
        28fb8c:	ca000002 	bgt	28fb9c <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x188>
        28fb90:	e2800001 	add	r0, r0, #1	; 0x1
        28fb94:	e1510000 	cmp	r1, r0
        28fb98:	aafffff2 	bge	28fb68 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x154>
        28fb9c:	e59d0010 	ldr	r0, [sp, #16]
        28fba0:	e3700001 	cmn	r0, #1	; 0x1
        28fba4:	0a000055 	beq	28fd00 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x2ec>
        28fba8:	e59d0010 	ldr	r0, [sp, #16]
        28fbac:	e0600180 	rsb	r0, r0, r0, lsl #3
        28fbb0:	e0848100 	add	r8, r4, r0, lsl #2
        28fbb4:	e58d8014 	str	r8, [sp, #20]
        28fbb8:	e5980010 	ldr	r0, [r8, #16]
        28fbbc:	e58d0004 	str	r0, [sp, #4]
        28fbc0:	e5981014 	ldr	r1, [r8, #20]
        28fbc4:	e58d1000 	str	r1, [sp]
        28fbc8:	e288302c 	add	r3, r8, #44	; 0x2c
        28fbcc:	e893000c 	ldmia	r3, {r2, r3}
        28fbd0:	eb627ad4 	bl	1b2e728 <$GetDirection__FiN31>
        28fbd4:	e58d000c 	str	r0, [sp, #12]
        28fbd8:	e2488008 	sub	r8, r8, #8	; 0x8
        28fbdc:	e818000c 	ldmda	r8, {r2, r3}
        28fbe0:	e59d0004 	ldr	r0, [sp, #4]
        28fbe4:	e59d1000 	ldr	r1, [sp]
        28fbe8:	eb627ace 	bl	1b2e728 <$GetDirection__FiN31>
        28fbec:	e1a01000 	mov	r1, r0
        28fbf0:	e59d000c 	ldr	r0, [sp, #12]
        28fbf4:	eb627ac6 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        28fbf8:	e58d0008 	str	r0, [sp, #8]
        28fbfc:	e3500003 	cmp	r0, #3	; 0x3
        28fc00:	ba00003e 	blt	28fd00 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x2ec>
        28fc04:	e0670187 	rsb	r0, r7, r7, lsl #3
        28fc08:	e0848100 	add	r8, r4, r0, lsl #2
        28fc0c:	e5980010 	ldr	r0, [r8, #16]
        28fc10:	e58d0004 	str	r0, [sp, #4]
        28fc14:	e5981014 	ldr	r1, [r8, #20]
        28fc18:	e58d1000 	str	r1, [sp]
        28fc1c:	e248300c 	sub	r3, r8, #12	; 0xc
        28fc20:	e893000c 	ldmia	r3, {r2, r3}
        28fc24:	eb627abf 	bl	1b2e728 <$GetDirection__FiN31>
        28fc28:	e58d000c 	str	r0, [sp, #12]
        28fc2c:	e2888028 	add	r8, r8, #40	; 0x28
        28fc30:	e9b8000c 	ldmib	r8!, {r2, r3}
        28fc34:	e59d0004 	ldr	r0, [sp, #4]
        28fc38:	e59d1000 	ldr	r1, [sp]
        28fc3c:	eb627ab9 	bl	1b2e728 <$GetDirection__FiN31>
        28fc40:	e1a01000 	mov	r1, r0
        28fc44:	e1a08000 	mov	r8, r0
        28fc48:	e59d000c 	ldr	r0, [sp, #12]
        28fc4c:	eb627ab0 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        28fc50:	e59d1008 	ldr	r1, [sp, #8]
        28fc54:	e3510004 	cmp	r1, #4	; 0x4
        28fc58:	da00000e 	ble	28fc98 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x284>
        28fc5c:	e3500002 	cmp	r0, #2	; 0x2
        28fc60:	aa00000c 	bge	28fc98 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x284>
        28fc64:	e3500001 	cmp	r0, #1	; 0x1
        28fc68:	ba000006 	blt	28fc88 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x274>
        28fc6c:	e59d1014 	ldr	r1, [sp, #20]
        28fc70:	e5b12010 	ldr	r2, [r1, #16]!
        28fc74:	e06a118a 	rsb	r1, sl, sl, lsl #3
        28fc78:	e0841101 	add	r1, r4, r1, lsl #2
        28fc7c:	e5911010 	ldr	r1, [r1, #16]
        28fc80:	e1520001 	cmp	r2, r1
        28fc84:	aa000003 	bge	28fc98 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x284>
        28fc88:	e3a01019 	mov	r1, #25	; 0x19
        28fc8c:	e2811c05 	add	r1, r1, #1280	; 0x500
        28fc90:	e7992106 	ldr	r2, [r9, r6, lsl #2]
        28fc94:	e5a21028 	str	r1, [r2, #40]!
        28fc98:	e59d1008 	ldr	r1, [sp, #8]
        28fc9c:	e3510004 	cmp	r1, #4	; 0x4
        28fca0:	da000016 	ble	28fd00 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x2ec>
        28fca4:	e3300002 	teq	r0, #2	; 0x2
        28fca8:	1a000014 	bne	28fd00 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x2ec>
        28fcac:	e59d0018 	ldr	r0, [sp, #24]
        28fcb0:	e1300007 	teq	r0, r7
        28fcb4:	0a000011 	beq	28fd00 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x2ec>
        28fcb8:	e59d1014 	ldr	r1, [sp, #20]
        28fcbc:	e5911010 	ldr	r1, [r1, #16]
        28fcc0:	e06a018a 	rsb	r0, sl, sl, lsl #3
        28fcc4:	e0840100 	add	r0, r4, r0, lsl #2
        28fcc8:	e5902010 	ldr	r2, [r0, #16]
        28fccc:	e1510002 	cmp	r1, r2
        28fcd0:	aa00000a 	bge	28fd00 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x2ec>
        28fcd4:	e5b03014 	ldr	r3, [r0, #20]!
        28fcd8:	e59d0004 	ldr	r0, [sp, #4]
        28fcdc:	e59d1000 	ldr	r1, [sp]
        28fce0:	eb627a90 	bl	1b2e728 <$GetDirection__FiN31>
        28fce4:	e1a01008 	mov	r1, r8
        28fce8:	eb627a89 	bl	1b2e714 <$GetAngleBetweenTwoDir__FUiT1>
        28fcec:	e3500001 	cmp	r0, #1	; 0x1
        28fcf0:	b3a01019 	movlt	r1, #25	; 0x19
        28fcf4:	b2811c05 	addlt	r1, r1, #1280	; 0x500
        28fcf8:	b7990106 	ldrlt	r0, [r9, r6, lsl #2]
        28fcfc:	b5a01028 	strlt	r1, [r0, #40]!
        28fd00:	e2866001 	add	r6, r6, #1	; 0x1
        28fd04:	e59b0018 	ldr	r0, [fp, #24]
        28fd08:	e1560000 	cmp	r6, r0
        28fd0c:	baffff50 	blt	28fa54 <ThreeToFive(void *, tag_CHUNK *, tag_wapx_type *, int *, tag_LOWOBJ **, int)+0x40>
        28fd10:	e3a00001 	mov	r0, #1	; 0x1
        28fd14:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: take_next_point__FP13tag_wapx_typeiN42
 * Address: 002a7868
 */
void globals::take_next_point() {
    /*
        2a7868:	e1a0c00d 	mov	ip, sp
        2a786c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2a7870:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2a7874:	e24cb014 	sub	fp, ip, #20	; 0x14
        2a7878:	e1a05000 	mov	r5, r0
        2a787c:	e1a04003 	mov	r4, r3
        2a7880:	e28b9014 	add	r9, fp, #20	; 0x14
        2a7884:	e8990240 	ldmia	r9, {r6, r9}
        2a7888:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2a788c:	e3e00000 	mvn	r0, #0	; 0x0
        2a7890:	e58d0008 	str	r0, [sp, #8]
        2a7894:	e0620182 	rsb	r0, r2, r2, lsl #3
        2a7898:	e0850100 	add	r0, r5, r0, lsl #2
        2a789c:	e5901010 	ldr	r1, [r0, #16]
        2a78a0:	e58d1004 	str	r1, [sp, #4]
        2a78a4:	e5b01014 	ldr	r1, [r0, #20]!
        2a78a8:	e2827001 	add	r7, r2, #1	; 0x1
        2a78ac:	e58d1000 	str	r1, [sp]
        2a78b0:	e59b1008 	ldr	r1, [fp, #8]
        2a78b4:	e1570001 	cmp	r7, r1
        2a78b8:	aa00002e 	bge	2a7978 <take_next_point__FP13tag_wapx_typeiN42+0x110>
        2a78bc:	e0670187 	rsb	r0, r7, r7, lsl #3
        2a78c0:	e085a100 	add	sl, r5, r0, lsl #2
        2a78c4:	e59a0010 	ldr	r0, [sl, #16]
        2a78c8:	e59d1004 	ldr	r1, [sp, #4]
        2a78cc:	e0400001 	sub	r0, r0, r1
        2a78d0:	eb5f1fbb 	bl	1a6f7c4 <$HWRAbs(int)>
        2a78d4:	e1a08000 	mov	r8, r0
        2a78d8:	e5ba0014 	ldr	r0, [sl, #20]!
        2a78dc:	e59d1000 	ldr	r1, [sp]
        2a78e0:	e0400001 	sub	r0, r0, r1
        2a78e4:	eb5f1fb6 	bl	1a6f7c4 <$HWRAbs(int)>
        2a78e8:	e3340000 	teq	r4, #0	; 0x0
        2a78ec:	0a00000b 	beq	2a7920 <take_next_point__FP13tag_wapx_typeiN42+0xb8>
        2a78f0:	e3360000 	teq	r6, #0	; 0x0
        2a78f4:	0a000002 	beq	2a7904 <take_next_point__FP13tag_wapx_typeiN42+0x9c>
        2a78f8:	e1580004 	cmp	r8, r4
        2a78fc:	c1500006 	cmpgt	r0, r6
        2a7900:	ca000016 	bgt	2a7960 <take_next_point__FP13tag_wapx_typeiN42+0xf8>
        2a7904:	e3340000 	teq	r4, #0	; 0x0
        2a7908:	0a000004 	beq	2a7920 <take_next_point__FP13tag_wapx_typeiN42+0xb8>
        2a790c:	e3360000 	teq	r6, #0	; 0x0
        2a7910:	1a000002 	bne	2a7920 <take_next_point__FP13tag_wapx_typeiN42+0xb8>
        2a7914:	e1580004 	cmp	r8, r4
        2a7918:	ca000010 	bgt	2a7960 <take_next_point__FP13tag_wapx_typeiN42+0xf8>
        2a791c:	ea000005 	b	2a7938 <take_next_point__FP13tag_wapx_typeiN42+0xd0>
        2a7920:	e3360000 	teq	r6, #0	; 0x0
        2a7924:	0a000003 	beq	2a7938 <take_next_point__FP13tag_wapx_typeiN42+0xd0>
        2a7928:	e3340000 	teq	r4, #0	; 0x0
        2a792c:	1a000001 	bne	2a7938 <take_next_point__FP13tag_wapx_typeiN42+0xd0>
        2a7930:	e1500006 	cmp	r0, r6
        2a7934:	ca000009 	bgt	2a7960 <take_next_point__FP13tag_wapx_typeiN42+0xf8>
        2a7938:	e3390000 	teq	r9, #0	; 0x0
        2a793c:	0a000004 	beq	2a7954 <take_next_point__FP13tag_wapx_typeiN42+0xec>
        2a7940:	e0880000 	add	r0, r8, r0
        2a7944:	e1500009 	cmp	r0, r9
        2a7948:	ca000004 	bgt	2a7960 <take_next_point__FP13tag_wapx_typeiN42+0xf8>
        2a794c:	e3590001 	cmp	r9, #1	; 0x1
        2a7950:	aa000004 	bge	2a7968 <take_next_point__FP13tag_wapx_typeiN42+0x100>
        2a7954:	e3540001 	cmp	r4, #1	; 0x1
        2a7958:	b3560001 	cmplt	r6, #1	; 0x1
        2a795c:	aa000001 	bge	2a7968 <take_next_point__FP13tag_wapx_typeiN42+0x100>
        2a7960:	e58d7008 	str	r7, [sp, #8]
        2a7964:	ea000003 	b	2a7978 <take_next_point__FP13tag_wapx_typeiN42+0x110>
        2a7968:	e2877001 	add	r7, r7, #1	; 0x1
        2a796c:	e59b1008 	ldr	r1, [fp, #8]
        2a7970:	e1570001 	cmp	r7, r1
        2a7974:	baffffd0 	blt	2a78bc <take_next_point__FP13tag_wapx_typeiN42+0x54>
        2a7978:	e59d0008 	ldr	r0, [sp, #8]
        2a797c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: take_prev_point__FP13tag_wapx_typeiN32
 * Address: 002a7980
 */
void globals::take_prev_point() {
    /*
        2a7980:	e1a0c00d 	mov	ip, sp
        2a7984:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2a7988:	e24cb004 	sub	fp, ip, #4	; 0x4
        2a798c:	e1a06000 	mov	r6, r0
        2a7990:	e1a05002 	mov	r5, r2
        2a7994:	e1a04003 	mov	r4, r3
        2a7998:	e59b9004 	ldr	r9, [fp, #4]
        2a799c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2a79a0:	e3e00000 	mvn	r0, #0	; 0x0
        2a79a4:	e58d0008 	str	r0, [sp, #8]
        2a79a8:	e0610181 	rsb	r0, r1, r1, lsl #3
        2a79ac:	e0860100 	add	r0, r6, r0, lsl #2
        2a79b0:	e5902010 	ldr	r2, [r0, #16]
        2a79b4:	e58d2004 	str	r2, [sp, #4]
        2a79b8:	e5900014 	ldr	r0, [r0, #20]
        2a79bc:	e2517001 	subs	r7, r1, #1	; 0x1
        2a79c0:	e58d0000 	str	r0, [sp]
        2a79c4:	4a00002c 	bmi	2a7a7c <take_prev_point__FP13tag_wapx_typeiN32+0xfc>
        2a79c8:	e0670187 	rsb	r0, r7, r7, lsl #3
        2a79cc:	e086a100 	add	sl, r6, r0, lsl #2
        2a79d0:	e59a0010 	ldr	r0, [sl, #16]
        2a79d4:	e59d1004 	ldr	r1, [sp, #4]
        2a79d8:	e0400001 	sub	r0, r0, r1
        2a79dc:	eb5f1f78 	bl	1a6f7c4 <$HWRAbs(int)>
        2a79e0:	e1a08000 	mov	r8, r0
        2a79e4:	e5ba0014 	ldr	r0, [sl, #20]!
        2a79e8:	e59d1000 	ldr	r1, [sp]
        2a79ec:	e0400001 	sub	r0, r0, r1
        2a79f0:	eb5f1f73 	bl	1a6f7c4 <$HWRAbs(int)>
        2a79f4:	e3350000 	teq	r5, #0	; 0x0
        2a79f8:	0a00000b 	beq	2a7a2c <take_prev_point__FP13tag_wapx_typeiN32+0xac>
        2a79fc:	e3340000 	teq	r4, #0	; 0x0
        2a7a00:	0a000002 	beq	2a7a10 <take_prev_point__FP13tag_wapx_typeiN32+0x90>
        2a7a04:	e1580005 	cmp	r8, r5
        2a7a08:	c1500004 	cmpgt	r0, r4
        2a7a0c:	ca000016 	bgt	2a7a6c <take_prev_point__FP13tag_wapx_typeiN32+0xec>
        2a7a10:	e3350000 	teq	r5, #0	; 0x0
        2a7a14:	0a000004 	beq	2a7a2c <take_prev_point__FP13tag_wapx_typeiN32+0xac>
        2a7a18:	e3340000 	teq	r4, #0	; 0x0
        2a7a1c:	1a000002 	bne	2a7a2c <take_prev_point__FP13tag_wapx_typeiN32+0xac>
        2a7a20:	e1580005 	cmp	r8, r5
        2a7a24:	ca000010 	bgt	2a7a6c <take_prev_point__FP13tag_wapx_typeiN32+0xec>
        2a7a28:	ea000005 	b	2a7a44 <take_prev_point__FP13tag_wapx_typeiN32+0xc4>
        2a7a2c:	e3340000 	teq	r4, #0	; 0x0
        2a7a30:	0a000003 	beq	2a7a44 <take_prev_point__FP13tag_wapx_typeiN32+0xc4>
        2a7a34:	e3350000 	teq	r5, #0	; 0x0
        2a7a38:	1a000001 	bne	2a7a44 <take_prev_point__FP13tag_wapx_typeiN32+0xc4>
        2a7a3c:	e1500004 	cmp	r0, r4
        2a7a40:	ca000009 	bgt	2a7a6c <take_prev_point__FP13tag_wapx_typeiN32+0xec>
        2a7a44:	e3390000 	teq	r9, #0	; 0x0
        2a7a48:	0a000004 	beq	2a7a60 <take_prev_point__FP13tag_wapx_typeiN32+0xe0>
        2a7a4c:	e0880000 	add	r0, r8, r0
        2a7a50:	e1500009 	cmp	r0, r9
        2a7a54:	ca000004 	bgt	2a7a6c <take_prev_point__FP13tag_wapx_typeiN32+0xec>
        2a7a58:	e3590001 	cmp	r9, #1	; 0x1
        2a7a5c:	aa000004 	bge	2a7a74 <take_prev_point__FP13tag_wapx_typeiN32+0xf4>
        2a7a60:	e3550001 	cmp	r5, #1	; 0x1
        2a7a64:	b3540001 	cmplt	r4, #1	; 0x1
        2a7a68:	aa000001 	bge	2a7a74 <take_prev_point__FP13tag_wapx_typeiN32+0xf4>
        2a7a6c:	e58d7008 	str	r7, [sp, #8]
        2a7a70:	ea000001 	b	2a7a7c <take_prev_point__FP13tag_wapx_typeiN32+0xfc>
        2a7a74:	e2577001 	subs	r7, r7, #1	; 0x1
        2a7a78:	5affffd2 	bpl	2a79c8 <take_prev_point__FP13tag_wapx_typeiN32+0x48>
        2a7a7c:	e59d0008 	ldr	r0, [sp, #8]
        2a7a80:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ThrowExCompilerWithBadValue(long, RefVar const &)
 * Address: 002c2090
 */
ThrowExCompilerWithBadValue(long, RefVar const &) {
    /*
        2c2090:	e1a0c00d 	mov	ip, sp
        2c2094:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2c2098:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c209c:	e1a05000 	mov	r5, r0
        2c20a0:	e1a04001 	mov	r4, r1
        2c20a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c20a8:	eb640024 	bl	1bc2140 <$AllocateFrame(void)>
        2c20ac:	eb640026 	bl	1bc214c <$AllocateRefHandle(long)>
        2c20b0:	e58d0004 	str	r0, [sp, #4]
        2c20b4:	e1a00105 	mov	r0, r5, lsl #2
        2c20b8:	eb640023 	bl	1bc214c <$AllocateRefHandle(long)>
        2c20bc:	e58d0000 	str	r0, [sp]
        2c20c0:	e1a0200d 	mov	r2, sp
        2c20c4:	e59f1038 	ldr	r1, [pc, #38]	; 2c2104 <ThrowExCompilerWithBadValue(long, RefVar const &)+0x74>
        2c20c8:	e28d0004 	add	r0, sp, #4	; 0x4
        2c20cc:	eb6410a5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c20d0:	e59d0000 	ldr	r0, [sp]
        2c20d4:	eb640438 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c20d8:	e1a02004 	mov	r2, r4
        2c20dc:	e59f1024 	ldr	r1, [pc, #24]	; 2c2108 <ThrowExCompilerWithBadValue(long, RefVar const &)+0x78>
        2c20e0:	e28d0004 	add	r0, sp, #4	; 0x4
        2c20e4:	eb64109f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2c20e8:	e28d1004 	add	r1, sp, #4	; 0x4
        2c20ec:	e59f0018 	ldr	r0, [pc, #18]	; 2c210c <ThrowExCompilerWithBadValue(long, RefVar const &)+0x7c>
        2c20f0:	e5900000 	ldr	r0, [r0]
        2c20f4:	eb6418d8 	bl	1bc845c <$ThrowRefException(char *, RefVar const &)>
        2c20f8:	e59d0004 	ldr	r0, [sp, #4]
        2c20fc:	eb64042e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c2100:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2c2104:	00682c90 	streqb	r2, [r8], -#192
        2c2108:	00684e98 	streqb	r4, [r8], -#232
        2c210c:	003712f8 	ldreqsh	r1, [r7], -r8
    */
}

/**
 * Symbol: tolower
 * Address: 002cdc10
 */
void globals::tolower() {
    /*
        2cdc10:	e59f100c 	ldr	r1, [pc, #c]	; 2cdc24 <tolower+0x14>
        2cdc14:	e7d11000 	ldrb	r1, [r1, r0]
        2cdc18:	e3110010 	tst	r1, #16	; 0x10
        2cdc1c:	12800020 	addne	r0, r0, #32	; 0x20
        2cdc20:	e1a0f00e 	mov	pc, lr
        2cdc24:	0038053c 	eoreqs	r0, r8, ip, lsr r5
    */
}

/**
 * Symbol: toupper
 * Address: 002cdc28
 */
void globals::toupper() {
    /*
        2cdc28:	e59f1010 	ldr	r1, [pc, #10]	; 2cdc40 <toupper+0x18>
        2cdc2c:	e7d11000 	ldrb	r1, [r1, r0]
        2cdc30:	e3110008 	tst	r1, #8	; 0x8
        2cdc34:	133000df 	teqne	r0, #223	; 0xdf
        2cdc38:	12400020 	subne	r0, r0, #32	; 0x20
        2cdc3c:	e1a0f00e 	mov	pc, lr
        2cdc40:	0038053c 	eoreqs	r0, r8, ip, lsr r5
    */
}

/**
 * Symbol: TextValidTestTextProc(unsigned short *, long, void *)
 * Address: 002ceaf0
 */
TextValidTestTextProc(unsigned short *, long, void *) {
    /*
        2ceaf0:	e1a0c00d 	mov	ip, sp
        2ceaf4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2ceaf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ceafc:	eb5dc118 	bl	1a3ef64 <$FindString(unsigned short *, long, long)>
        2ceb00:	e1b00000 	movs	r0, r0
        2ceb04:	13a00001 	movne	r0, #1	; 0x1
        2ceb08:	e20000ff 	and	r0, r0, #255	; 0xff
        2ceb0c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)
 * Address: 002d1228
 */
TagsValidTest(TSoupIndex &, RefVar const &, unsigned long) {
    /*
        2d1228:	e1a0c00d 	mov	ip, sp
        2d122c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d1230:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1234:	e1a05000 	mov	r5, r0
        2d1238:	e1a04001 	mov	r4, r1
        2d123c:	e1a01002 	mov	r1, r2
        2d1240:	e5940000 	ldr	r0, [r4]
        2d1244:	e5902000 	ldr	r2, [r0]
        2d1248:	e3a00000 	mov	r0, #0	; 0x0
        2d124c:	e3320002 	teq	r2, #2	; 0x2
        2d1250:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2d1254:	e24dd050 	sub	sp, sp, #80	; 0x50
        2d1258:	e1a08000 	mov	r8, r0
        2d125c:	e5cd0001 	strb	r0, [sp, #1]
        2d1260:	e5cd0000 	strb	r0, [sp]
        2d1264:	e1a0000d 	mov	r0, sp
        2d1268:	eb006114 	bl	2e96c0 <SKey::operator=(long)>
        2d126c:	e24dd050 	sub	sp, sp, #80	; 0x50
        2d1270:	e5cd8001 	strb	r8, [sp, #1]
        2d1274:	e5cd8000 	strb	r8, [sp]
        2d1278:	e3a03000 	mov	r3, #0	; 0x0
        2d127c:	e92d0008 	stmdb	sp!, {r3}
        2d1280:	e28d3004 	add	r3, sp, #4	; 0x4
        2d1284:	e28d2054 	add	r2, sp, #84	; 0x54
        2d1288:	e28d1054 	add	r1, sp, #84	; 0x54
        2d128c:	e1a00005 	mov	r0, r5
        2d1290:	e1a0e00f 	mov	lr, pc
        2d1294:	e595f000 	ldr	pc, [r5]
        2d1298:	e28dd004 	add	sp, sp, #4	; 0x4
        2d129c:	e3a06001 	mov	r6, #1	; 0x1
        2d12a0:	e3300000 	teq	r0, #0	; 0x0
        2d12a4:	1a000034 	bne	2d137c <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x154>
        2d12a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d12ac:	e3a00002 	mov	r0, #2	; 0x2
        2d12b0:	eb63c3a5 	bl	1bc214c <$AllocateRefHandle(long)>
        2d12b4:	e58d0000 	str	r0, [sp]
        2d12b8:	e5940000 	ldr	r0, [r4]
        2d12bc:	e5900000 	ldr	r0, [r0]
        2d12c0:	eb63cff9 	bl	1bc52ac <$Length(long)>
        2d12c4:	e1a07000 	mov	r7, r0
        2d12c8:	e3a05000 	mov	r5, #0	; 0x0
        2d12cc:	e3500000 	cmp	r0, #0	; 0x0
        2d12d0:	da000025 	ble	2d136c <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x144>
        2d12d4:	e5940000 	ldr	r0, [r4]
        2d12d8:	e5900000 	ldr	r0, [r0]
        2d12dc:	e2851001 	add	r1, r5, #1	; 0x1
        2d12e0:	eb63cbdb 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d12e4:	e41d1004 	ldr	r1, [sp], -#4
        2d12e8:	e5810000 	str	r0, [r1]
        2d12ec:	e28d1004 	add	r1, sp, #4	; 0x4
        2d12f0:	e1a0000d 	mov	r0, sp
        2d12f4:	eb63bf77 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d12f8:	e1a0000d 	mov	r0, sp
        2d12fc:	eb63c384 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2d1300:	e1a09000 	mov	r9, r0
        2d1304:	e5940000 	ldr	r0, [r4]
        2d1308:	e5900000 	ldr	r0, [r0]
        2d130c:	e1a01005 	mov	r1, r5
        2d1310:	eb63cbcf 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d1314:	e3100003 	tst	r0, #3	; 0x3
        2d1318:	01a00140 	moveq	r0, r0, asr #2
        2d131c:	0a000000 	beq	2d1324 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0xfc>
        2d1320:	eb63c37d 	bl	1bc211c <$_RINTError(long)>
        2d1324:	e1a02000 	mov	r2, r0
        2d1328:	e1a01009 	mov	r1, r9
        2d132c:	e28d0008 	add	r0, sp, #8	; 0x8
        2d1330:	eb5ddc33 	bl	1a48404 <TagsBits::$ValidTest( const(TagsBits const &, long))>
        2d1334:	e3300000 	teq	r0, #0	; 0x0
        2d1338:	e1a0000d 	mov	r0, sp
        2d133c:	e3a01000 	mov	r1, #0	; 0x0
        2d1340:	1a000004 	bne	2d1358 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x130>
        2d1344:	eb63c36d 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d1348:	e59d0004 	ldr	r0, [sp, #4]
        2d134c:	eb63c79a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1350:	e1a00008 	mov	r0, r8
        2d1354:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2d1358:	eb63c368 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d135c:	e28dd004 	add	sp, sp, #4	; 0x4
        2d1360:	e2855002 	add	r5, r5, #2	; 0x2
        2d1364:	e1550007 	cmp	r5, r7
        2d1368:	baffffd9 	blt	2d12d4 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0xac>
        2d136c:	e59d0000 	ldr	r0, [sp]
        2d1370:	eb63c791 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1374:	e28dd004 	add	sp, sp, #4	; 0x4
        2d1378:	ea000011 	b	2d13c4 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x19c>
        2d137c:	e3300002 	teq	r0, #2	; 0x2
        2d1380:	13300003 	teqne	r0, #3	; 0x3
        2d1384:	1a000020 	bne	2d140c <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x1e4>
        2d1388:	e5940000 	ldr	r0, [r4]
        2d138c:	e5900000 	ldr	r0, [r0]
        2d1390:	eb63cfc5 	bl	1bc52ac <$Length(long)>
        2d1394:	e3300002 	teq	r0, #2	; 0x2
        2d1398:	1a000019 	bne	2d1404 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x1dc>
        2d139c:	e5940000 	ldr	r0, [r4]
        2d13a0:	e5900000 	ldr	r0, [r0]
        2d13a4:	e1a01008 	mov	r1, r8
        2d13a8:	eb63cba9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d13ac:	e3100003 	tst	r0, #3	; 0x3
        2d13b0:	01a00140 	moveq	r0, r0, asr #2
        2d13b4:	0a000000 	beq	2d13bc <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x194>
        2d13b8:	eb63c357 	bl	1bc211c <$_RINTError(long)>
        2d13bc:	e3300003 	teq	r0, #3	; 0x3
        2d13c0:	1a000001 	bne	2d13cc <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x1a4>
        2d13c4:	e1a00006 	mov	r0, r6
        2d13c8:	ea00000e 	b	2d1408 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x1e0>
        2d13cc:	e3300000 	teq	r0, #0	; 0x0
        2d13d0:	1a00000b 	bne	2d1404 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x1dc>
        2d13d4:	e5940000 	ldr	r0, [r4]
        2d13d8:	e5900000 	ldr	r0, [r0]
        2d13dc:	e1a01006 	mov	r1, r6
        2d13e0:	eb63cb9b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d13e4:	eb63c35c 	bl	1bc215c <$BinaryData(long)>
        2d13e8:	e5900000 	ldr	r0, [r0]
        2d13ec:	e1a00400 	mov	r0, r0, lsl #8
        2d13f0:	e1b00c20 	movs	r0, r0, lsr #24
        2d13f4:	13a00000 	movne	r0, #0	; 0x0
        2d13f8:	03a00001 	moveq	r0, #1	; 0x1
        2d13fc:	e20000ff 	and	r0, r0, #255	; 0xff
        2d1400:	ea000000 	b	2d1408 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x1e0>
        2d1404:	e1a00008 	mov	r0, r8
        2d1408:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2d140c:	e59f1010 	ldr	r1, [pc, #10]	; 2d1424 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x1fc>
        2d1410:	e59f0010 	ldr	r0, [pc, #10]	; 2d1428 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x200>
        2d1414:	e5900000 	ldr	r0, [r0]
        2d1418:	e3a02000 	mov	r2, #0	; 0x0
        2d141c:	eb64475e 	bl	1be319c <$Throw>
        2d1420:	eaffffe7 	b	2d13c4 <TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)+0x19c>
        2d1424:	ffff4467 	swinv	0x00ff4467
        2d1428:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: TestObjHints(char *, long, TStoreWrapper *, unsigned long)
 * Address: 002dc934
 */
TestObjHints(char *, long, TStoreWrapper *, unsigned long) {
    /*
        2dc934:	e1a0c00d 	mov	ip, sp
        2dc938:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2dc93c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dc940:	e1a05000 	mov	r5, r0
        2dc944:	e1b04001 	movs	r4, r1
        2dc948:	e3a0a001 	mov	sl, #1	; 0x1
        2dc94c:	01a0000a 	moveq	r0, sl
        2dc950:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2dc954:	e24dde42 	sub	sp, sp, #1056	; 0x420
        2dc958:	e5b2107c 	ldr	r1, [r2, #124]!
        2dc95c:	e1a02003 	mov	r2, r3
        2dc960:	e28d0004 	add	r0, sp, #4	; 0x4
        2dc964:	e3a03060 	mov	r3, #96	; 0x60
        2dc968:	eb5dd3c8 	bl	1a51890 <TCachedReadStore::$__ct(TStore *, unsigned long, long)>
        2dc96c:	e1a0300d 	mov	r3, sp
        2dc970:	e28d0004 	add	r0, sp, #4	; 0x4
        2dc974:	e3a02004 	mov	r2, #4	; 0x4
        2dc978:	e3a01000 	mov	r1, #0	; 0x0
        2dc97c:	eb5dc768 	bl	1a4e724 <TCachedReadStore::$GetDataPtr(long, long, void **)>
        2dc980:	e3300000 	teq	r0, #0	; 0x0
        2dc984:	1b5d8127 	blne	1a3ce28 <$_OSErr(long)>
        2dc988:	e59d0000 	ldr	r0, [sp]
        2dc98c:	e5d0100d 	ldrb	r1, [r0, #13]
        2dc990:	e3110004 	tst	r1, #4	; 0x4
        2dc994:	1a000005 	bne	2dc9b0 <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0x7c>
        2dc998:	eb5e11c6 	bl	1a610b8 <StoreObjectHeader::$GetHintsHandlerId(void)>
        2dc99c:	e1a01000 	mov	r1, r0
        2dc9a0:	e59f0020 	ldr	r0, [pc, #20]	; 2dc9c8 <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0x94>
        2dc9a4:	e7900101 	ldr	r0, [r0, r1, lsl #2]
        2dc9a8:	e3300000 	teq	r0, #0	; 0x0
        2dc9ac:	1a000006 	bne	2dc9cc <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0x98>
        2dc9b0:	e3a04001 	mov	r4, #1	; 0x1
        2dc9b4:	e28d0004 	add	r0, sp, #4	; 0x4
        2dc9b8:	e3a01000 	mov	r1, #0	; 0x0
        2dc9bc:	eb5dc756 	bl	1a4e71c <TCachedReadStore::$__dt(void)>
        2dc9c0:	e1a00004 	mov	r0, r4
        2dc9c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2dc9c8:	0c107998 	ldceq	9, cr7, [r0], -#608
        2dc9cc:	e24dd040 	sub	sp, sp, #64	; 0x40
        2dc9d0:	e3a00000 	mov	r0, #0	; 0x0
        2dc9d4:	e3540000 	cmp	r4, #0	; 0x0
        2dc9d8:	da000004 	ble	2dc9f0 <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0xbc>
        2dc9dc:	e3a02000 	mov	r2, #0	; 0x0
        2dc9e0:	e7cd2000 	strb	r2, [sp, r0]
        2dc9e4:	e2800001 	add	r0, r0, #1	; 0x1
        2dc9e8:	e1500004 	cmp	r0, r4
        2dc9ec:	bafffffb 	blt	2dc9e0 <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0xac>
        2dc9f0:	e0000491 	mul	r0, r1, r4
        2dc9f4:	e0859180 	add	r9, r5, r0, lsl #3
        2dc9f8:	e3a06000 	mov	r6, #0	; 0x0
        2dc9fc:	e3a07010 	mov	r7, #16	; 0x10
        2dca00:	e59d0040 	ldr	r0, [sp, #64]
        2dca04:	e5d0000c 	ldrb	r0, [r0, #12]
        2dca08:	e2408001 	sub	r8, r0, #1	; 0x1
        2dca0c:	e3300000 	teq	r0, #0	; 0x0
        2dca10:	0a000025 	beq	2dcaac <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0x178>
        2dca14:	e24dd004 	sub	sp, sp, #4	; 0x4
        2dca18:	e1a0300d 	mov	r3, sp
        2dca1c:	e1a01007 	mov	r1, r7
        2dca20:	e28d0048 	add	r0, sp, #72	; 0x48
        2dca24:	e3a02008 	mov	r2, #8	; 0x8
        2dca28:	eb5dc73d 	bl	1a4e724 <TCachedReadStore::$GetDataPtr(long, long, void **)>
        2dca2c:	e3300000 	teq	r0, #0	; 0x0
        2dca30:	1b5d80fc 	blne	1a3ce28 <$_OSErr(long)>
        2dca34:	e3a06000 	mov	r6, #0	; 0x0
        2dca38:	e3a05000 	mov	r5, #0	; 0x0
        2dca3c:	e3540000 	cmp	r4, #0	; 0x0
        2dca40:	da000011 	ble	2dca8c <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0x158>
        2dca44:	e28d0004 	add	r0, sp, #4	; 0x4
        2dca48:	e7d00005 	ldrb	r0, [r0, r5]
        2dca4c:	e1a00c00 	mov	r0, r0, lsl #24
        2dca50:	e1b00c40 	movs	r0, r0, asr #24
        2dca54:	1a000005 	bne	2dca70 <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0x13c>
        2dca58:	e0890185 	add	r0, r9, r5, lsl #3
        2dca5c:	e59d1000 	ldr	r1, [sp]
        2dca60:	eb5d9df2 	bl	1a44230 <$TestHintBits__FPlT1>
        2dca64:	e3300000 	teq	r0, #0	; 0x0
        2dca68:	128d0004 	addne	r0, sp, #4	; 0x4
        2dca6c:	17c0a005 	strneb	sl, [r0, r5]
        2dca70:	e28d0004 	add	r0, sp, #4	; 0x4
        2dca74:	e7d00005 	ldrb	r0, [r0, r5]
        2dca78:	e1a00c00 	mov	r0, r0, lsl #24
        2dca7c:	e0866c40 	add	r6, r6, r0, asr #24
        2dca80:	e2855001 	add	r5, r5, #1	; 0x1
        2dca84:	e1550004 	cmp	r5, r4
        2dca88:	baffffed 	blt	2dca44 <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0x110>
        2dca8c:	e1360004 	teq	r6, r4
        2dca90:	028dd004 	addeq	sp, sp, #4	; 0x4
        2dca94:	0a000004 	beq	2dcaac <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0x178>
        2dca98:	e2877008 	add	r7, r7, #8	; 0x8
        2dca9c:	e28dd004 	add	sp, sp, #4	; 0x4
        2dcaa0:	e1b00008 	movs	r0, r8
        2dcaa4:	e2488001 	sub	r8, r8, #1	; 0x1
        2dcaa8:	1affffd9 	bne	2dca14 <TestObjHints(char *, long, TStoreWrapper *, unsigned long)+0xe0>
        2dcaac:	e1360004 	teq	r6, r4
        2dcab0:	13a04000 	movne	r4, #0	; 0x0
        2dcab4:	03a04001 	moveq	r4, #1	; 0x1
        2dcab8:	e28d0044 	add	r0, sp, #68	; 0x44
        2dcabc:	e3a01000 	mov	r1, #0	; 0x0
        2dcac0:	eb5dc715 	bl	1a4e71c <TCachedReadStore::$__dt(void)>
        2dcac4:	e1a00004 	mov	r0, r4
        2dcac8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TextDecompCallback(unsigned long, void *, long *, unsigned char *)
 * Address: 002dfbdc
 */
TextDecompCallback(unsigned long, void *, long *, unsigned char *) {
    /*
        2dfbdc:	ea5daa4c 	b	1a4a514 <TObjTextDecompressor::$TextDecompCallback(void *, long *, unsigned char *)>
    */
}

/**
 * Symbol: TestHintBits__FPlT1
 * Address: 002e0b88
 */
void globals::TestHintBits() {
    /*
        2e0b88:	e5903000 	ldr	r3, [r0]
        2e0b8c:	e5912000 	ldr	r2, [r1]
        2e0b90:	e003c002 	and	ip, r3, r2
        2e0b94:	e3a02000 	mov	r2, #0	; 0x0
        2e0b98:	e13c0003 	teq	ip, r3
        2e0b9c:	1a000005 	bne	2e0bb8 <TestHintBits__FPlT1+0x30>
        2e0ba0:	e5900004 	ldr	r0, [r0, #4]
        2e0ba4:	e5911004 	ldr	r1, [r1, #4]
        2e0ba8:	e0001001 	and	r1, r0, r1
        2e0bac:	e1310000 	teq	r1, r0
        2e0bb0:	03a00001 	moveq	r0, #1	; 0x1
        2e0bb4:	01a0f00e 	moveq	pc, lr
        2e0bb8:	e1a00002 	mov	r0, r2
        2e0bbc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ThrowOutOfBoundsException(RefVar const &, long)
 * Address: 002ef144
 */
ThrowOutOfBoundsException(RefVar const &, long) {
    /*
        2ef144:	e1a0c00d 	mov	ip, sp
        2ef148:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2ef14c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ef150:	e1a05000 	mov	r5, r0
        2ef154:	e1a04001 	mov	r4, r1
        2ef158:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2ef15c:	eb634bf7 	bl	1bc2140 <$AllocateFrame(void)>
        2ef160:	eb634bf9 	bl	1bc214c <$AllocateRefHandle(long)>
        2ef164:	e58d0008 	str	r0, [sp, #8]
        2ef168:	e3a00fb3 	mov	r0, #716	; 0x2cc
        2ef16c:	e2400bbd 	sub	r0, r0, #193536	; 0x2f400
        2ef170:	eb634bf5 	bl	1bc214c <$AllocateRefHandle(long)>
        2ef174:	e58d0000 	str	r0, [sp]
        2ef178:	e1a0200d 	mov	r2, sp
        2ef17c:	e59f105c 	ldr	r1, [pc, #5c]	; 2ef1e0 <ThrowOutOfBoundsException(RefVar const &, long)+0x9c>
        2ef180:	e28d0008 	add	r0, sp, #8	; 0x8
        2ef184:	eb635c77 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2ef188:	e59d0000 	ldr	r0, [sp]
        2ef18c:	eb63500a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ef190:	e1a02005 	mov	r2, r5
        2ef194:	e59f1048 	ldr	r1, [pc, #48]	; 2ef1e4 <ThrowOutOfBoundsException(RefVar const &, long)+0xa0>
        2ef198:	e28d0008 	add	r0, sp, #8	; 0x8
        2ef19c:	eb635c71 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2ef1a0:	e1a00104 	mov	r0, r4, lsl #2
        2ef1a4:	eb634be8 	bl	1bc214c <$AllocateRefHandle(long)>
        2ef1a8:	e58d0004 	str	r0, [sp, #4]
        2ef1ac:	e28d2004 	add	r2, sp, #4	; 0x4
        2ef1b0:	e59f1030 	ldr	r1, [pc, #30]	; 2ef1e8 <ThrowOutOfBoundsException(RefVar const &, long)+0xa4>
        2ef1b4:	e28d0008 	add	r0, sp, #8	; 0x8
        2ef1b8:	eb635c6a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2ef1bc:	e59d0004 	ldr	r0, [sp, #4]
        2ef1c0:	eb634ffd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ef1c4:	e28d1008 	add	r1, sp, #8	; 0x8
        2ef1c8:	e59f001c 	ldr	r0, [pc, #1c]	; 2ef1ec <ThrowOutOfBoundsException(RefVar const &, long)+0xa8>
        2ef1cc:	e5900000 	ldr	r0, [r0]
        2ef1d0:	eb6364a1 	bl	1bc845c <$ThrowRefException(char *, RefVar const &)>
        2ef1d4:	e59d0008 	ldr	r0, [sp, #8]
        2ef1d8:	eb634ff7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ef1dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2ef1e0:	00682c90 	streqb	r2, [r8], -#192
        2ef1e4:	00684e98 	streqb	r4, [r8], -#232
        2ef1e8:	006831c0 	rsbeq	r3, r8, r0, asr #3
        2ef1ec:	0037130c 	eoreqs	r1, r7, ip, lsl #6
    */
}

/**
 * Symbol: ThrowRefException(char *, RefVar const &)
 * Address: 002f5730
 */
ThrowRefException(char *, RefVar const &) {
    /*
        2f5730:	e1a0c00d 	mov	ip, sp
        2f5734:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2f5738:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f573c:	e1a04000 	mov	r4, r0
        2f5740:	e1a05001 	mov	r5, r1
        2f5744:	e24dd004 	sub	sp, sp, #4	; 0x4
        2f5748:	e59f00b0 	ldr	r0, [pc, #b0]	; 2f5800 <ThrowRefException(char *, RefVar const &)+0xd0>
        2f574c:	e5901000 	ldr	r1, [r0]
        2f5750:	e1a00004 	mov	r0, r4
        2f5754:	eb63b68e 	bl	1be3194 <$Subexception>
        2f5758:	e3300000 	teq	r0, #0	; 0x0
        2f575c:	0a000005 	beq	2f5778 <ThrowRefException(char *, RefVar const &)+0x48>
        2f5760:	e59f009c 	ldr	r0, [pc, #9c]	; 2f5804 <ThrowRefException(char *, RefVar const &)+0xd4>
        2f5764:	e5901000 	ldr	r1, [r0]
        2f5768:	e1a00004 	mov	r0, r4
        2f576c:	eb63b688 	bl	1be3194 <$Subexception>
        2f5770:	e3300000 	teq	r0, #0	; 0x0
        2f5774:	1a000009 	bne	2f57a0 <ThrowRefException(char *, RefVar const &)+0x70>
        2f5778:	e1a00004 	mov	r0, r4
        2f577c:	eb633ebf 	bl	1bc5280 <$Intern(char *)>
        2f5780:	eb633271 	bl	1bc214c <$AllocateRefHandle(long)>
        2f5784:	e58d0000 	str	r0, [sp]
        2f5788:	e1a0100d 	mov	r1, sp
        2f578c:	e3a000a2 	mov	r0, #162	; 0xa2
        2f5790:	e2400cbd 	sub	r0, r0, #48384	; 0xbd00
        2f5794:	eb5d3aa6 	bl	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2f5798:	e59d0000 	ldr	r0, [sp]
        2f579c:	eb633686 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f57a0:	e5950000 	ldr	r0, [r5]
        2f57a4:	e5906000 	ldr	r6, [r0]
        2f57a8:	e3a00004 	mov	r0, #4	; 0x4
        2f57ac:	eb6363e1 	bl	1bce738 <$__nw(unsigned int)>
        2f57b0:	e1b05000 	movs	r5, r0
        2f57b4:	0a000004 	beq	2f57cc <ThrowRefException(char *, RefVar const &)+0x9c>
        2f57b8:	e1a00006 	mov	r0, r6
        2f57bc:	eb633262 	bl	1bc214c <$AllocateRefHandle(long)>
        2f57c0:	e3a01000 	mov	r1, #0	; 0x0
        2f57c4:	e5850000 	str	r0, [r5]
        2f57c8:	e5a01004 	str	r1, [r0, #4]!
        2f57cc:	e3350000 	teq	r5, #0	; 0x0
        2f57d0:	1a000005 	bne	2f57ec <ThrowRefException(char *, RefVar const &)+0xbc>
        2f57d4:	e59f002c 	ldr	r0, [pc, #2c]	; 2f5808 <ThrowRefException(char *, RefVar const &)+0xd8>
        2f57d8:	e5900000 	ldr	r0, [r0]
        2f57dc:	e3a02000 	mov	r2, #0	; 0x0
        2f57e0:	e3a010e9 	mov	r1, #233	; 0xe9
        2f57e4:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2f57e8:	eb63b66b 	bl	1be319c <$Throw>
        2f57ec:	e59f2018 	ldr	r2, [pc, #18]	; 2f580c <ThrowRefException(char *, RefVar const &)+0xdc>
        2f57f0:	e1a01005 	mov	r1, r5
        2f57f4:	e1a00004 	mov	r0, r4
        2f57f8:	eb63b667 	bl	1be319c <$Throw>
        2f57fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2f5800:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        2f5804:	00380880 	eoreqs	r0, r8, r0, lsl #17
        2f5808:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2f580c:	002f5708 	eoreq	r5, pc, r8, lsl #14
    */
}

/**
 * Symbol: ThrowExInterpreterWithSymbol(long, RefVar const &)
 * Address: 002f5810
 */
ThrowExInterpreterWithSymbol(long, RefVar const &) {
    /*
        2f5810:	e1a0c00d 	mov	ip, sp
        2f5814:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2f5818:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f581c:	e1a05000 	mov	r5, r0
        2f5820:	e1a04001 	mov	r4, r1
        2f5824:	e24dd008 	sub	sp, sp, #8	; 0x8
        2f5828:	eb633244 	bl	1bc2140 <$AllocateFrame(void)>
        2f582c:	eb633246 	bl	1bc214c <$AllocateRefHandle(long)>
        2f5830:	e58d0004 	str	r0, [sp, #4]
        2f5834:	e1a00105 	mov	r0, r5, lsl #2
        2f5838:	eb633243 	bl	1bc214c <$AllocateRefHandle(long)>
        2f583c:	e58d0000 	str	r0, [sp]
        2f5840:	e1a0200d 	mov	r2, sp
        2f5844:	e59f1038 	ldr	r1, [pc, #38]	; 2f5884 <ThrowExInterpreterWithSymbol(long, RefVar const &)+0x74>
        2f5848:	e28d0004 	add	r0, sp, #4	; 0x4
        2f584c:	eb6342c5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f5850:	e59d0000 	ldr	r0, [sp]
        2f5854:	eb633658 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5858:	e1a02004 	mov	r2, r4
        2f585c:	e59f1024 	ldr	r1, [pc, #24]	; 2f5888 <ThrowExInterpreterWithSymbol(long, RefVar const &)+0x78>
        2f5860:	e28d0004 	add	r0, sp, #4	; 0x4
        2f5864:	eb6342bf 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2f5868:	e28d1004 	add	r1, sp, #4	; 0x4
        2f586c:	e59f0018 	ldr	r0, [pc, #18]	; 2f588c <ThrowExInterpreterWithSymbol(long, RefVar const &)+0x7c>
        2f5870:	e5900000 	ldr	r0, [r0]
        2f5874:	eb634af8 	bl	1bc845c <$ThrowRefException(char *, RefVar const &)>
        2f5878:	e59d0004 	ldr	r0, [sp, #4]
        2f587c:	eb63364e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f5880:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2f5884:	00682c90 	streqb	r2, [r8], -#192
        2f5888:	00684970 	rsbeq	r4, r8, r0, ror r9
        2f588c:	00371304 	eoreqs	r1, r7, r4, lsl #6
    */
}

/**
 * Symbol: trace_to_xy__FPsT1iP13PS_point_type
 * Address: 00306074
 */
void globals::trace_to_xy() {
    /*
        306074:	e92d4010 	stmdb	sp!, {r4, lr}
        306078:	e3a0c000 	mov	ip, #0	; 0x0
        30607c:	e3520000 	cmp	r2, #0	; 0x0
        306080:	d8bd8010 	ldmleia	sp!, {r4, pc}
        306084:	e793e10c 	ldr	lr, [r3, ip, lsl #2]
        306088:	e1a0e82e 	mov	lr, lr, lsr #16
        30608c:	e080408c 	add	r4, r0, ip, lsl #1
        306090:	e5c4e001 	strb	lr, [r4, #1]
        306094:	e1a0e44e 	mov	lr, lr, asr #8
        306098:	e5c4e000 	strb	lr, [r4]
        30609c:	e083e10c 	add	lr, r3, ip, lsl #2
        3060a0:	e59ee002 	ldr	lr, [lr, #2]
        3060a4:	e1a0e82e 	mov	lr, lr, lsr #16
        3060a8:	e081408c 	add	r4, r1, ip, lsl #1
        3060ac:	e5c4e001 	strb	lr, [r4, #1]
        3060b0:	e1a0e44e 	mov	lr, lr, asr #8
        3060b4:	e5c4e000 	strb	lr, [r4]
        3060b8:	e28cc001 	add	ip, ip, #1	; 0x1
        3060bc:	e15c0002 	cmp	ip, r2
        3060c0:	baffffef 	blt	306084 <trace_to_xy__FPsT1iP13PS_point_type+0x10>
        3060c4:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TriangleSquare__FPsT1iN23
 * Address: 00307820
 */
void globals::TriangleSquare() {
    /*
        307820:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        307824:	e59d4010 	ldr	r4, [sp, #16]
        307828:	e791e082 	ldr	lr, [r1, r2, lsl #1]
        30782c:	e1a0e84e 	mov	lr, lr, asr #16
        307830:	e37e0001 	cmn	lr, #1	; 0x1
        307834:	1791c083 	ldrne	ip, [r1, r3, lsl #1]
        307838:	11a0c84c 	movne	ip, ip, asr #16
        30783c:	137c0001 	cmnne	ip, #1	; 0x1
        307840:	17911084 	ldrne	r1, [r1, r4, lsl #1]
        307844:	11a01841 	movne	r1, r1, asr #16
        307848:	13710001 	cmnne	r1, #1	; 0x1
        30784c:	0a000002 	beq	30785c <TriangleSquare__FPsT1iN23+0x3c>
        307850:	e1520003 	cmp	r2, r3
        307854:	d1530004 	cmple	r3, r4
        307858:	da000001 	ble	307864 <TriangleSquare__FPsT1iN23+0x44>
        30785c:	e3a00000 	mov	r0, #0	; 0x0
        307860:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        307864:	e08c500e 	add	r5, ip, lr
        307868:	e7903083 	ldr	r3, [r0, r3, lsl #1]
        30786c:	e1a03843 	mov	r3, r3, asr #16
        307870:	e7902082 	ldr	r2, [r0, r2, lsl #1]
        307874:	e1a02842 	mov	r2, r2, asr #16
        307878:	e0436002 	sub	r6, r3, r2
        30787c:	e0050596 	mul	r5, r6, r5
        307880:	e081c00c 	add	ip, r1, ip
        307884:	e7900084 	ldr	r0, [r0, r4, lsl #1]
        307888:	e1a00840 	mov	r0, r0, asr #16
        30788c:	e0403003 	sub	r3, r0, r3
        307890:	e023539c 	mla	r3, ip, r3, r5
        307894:	e08e1001 	add	r1, lr, r1
        307898:	e0420000 	sub	r0, r2, r0
        30789c:	e0203091 	mla	r0, r1, r0, r3
        3078a0:	e2600000 	rsb	r0, r0, #0	; 0x0
        3078a4:	e0800fa0 	add	r0, r0, r0, lsr #31
        3078a8:	e1a000c0 	mov	r0, r0, asr #1
        3078ac:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)
 * Address: 0030a948
 */
TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *) {
    /*
        30a948:	e1a0c00d 	mov	ip, sp
        30a94c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        30a950:	e24cb004 	sub	fp, ip, #4	; 0x4
        30a954:	e1a04000 	mov	r4, r0
        30a958:	e1a06002 	mov	r6, r2
        30a95c:	e1a05003 	mov	r5, r3
        30a960:	e20170ff 	and	r7, r1, #255	; 0xff
        30a964:	e24dd008 	sub	sp, sp, #8	; 0x8
        30a968:	eb5e2c5b 	bl	1a95adc <$GetKeyTransMapping(void)>
        30a96c:	e1a01000 	mov	r1, r0
        30a970:	e1a0000d 	mov	r0, sp
        30a974:	eb62d9d5 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        30a978:	e1a0100d 	mov	r1, sp
        30a97c:	e28d0004 	add	r0, sp, #4	; 0x4
        30a980:	eb62d9d3 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        30a984:	e1a0000d 	mov	r0, sp
        30a988:	e3a01000 	mov	r1, #0	; 0x0
        30a98c:	eb62dddb 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        30a990:	e3a08000 	mov	r8, #0	; 0x0
        30a994:	e28d0004 	add	r0, sp, #4	; 0x4
        30a998:	eb62dddd 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        30a99c:	e0806006 	add	r6, r0, r6
        30a9a0:	e5d61002 	ldrb	r1, [r6, #2]
        30a9a4:	e1a01c01 	mov	r1, r1, lsl #24
        30a9a8:	e1a01c41 	mov	r1, r1, asr #24
        30a9ac:	e0801381 	add	r1, r0, r1, lsl #7
        30a9b0:	e2811f41 	add	r1, r1, #260	; 0x104
        30a9b4:	e7d11004 	ldrb	r1, [r1, r4]
        30a9b8:	e5902102 	ldr	r2, [r0, #258]
        30a9bc:	e1a02842 	mov	r2, r2, asr #16
        30a9c0:	e0802382 	add	r2, r0, r2, lsl #7
        30a9c4:	e2823f41 	add	r3, r2, #260	; 0x104
        30a9c8:	e5952000 	ldr	r2, [r5]
        30a9cc:	e3320000 	teq	r2, #0	; 0x0
        30a9d0:	0a00001c 	beq	30aa48 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x100>
        30a9d4:	e080c002 	add	ip, r0, r2
        30a9d8:	e3a0e000 	mov	lr, #0	; 0x0
        30a9dc:	e28c2004 	add	r2, ip, #4	; 0x4
        30a9e0:	e5d29000 	ldrb	r9, [r2]
        30a9e4:	e1a09c09 	mov	r9, r9, lsl #24
        30a9e8:	e1b09c49 	movs	r9, r9, asr #24
        30a9ec:	0a000009 	beq	30aa18 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0xd0>
        30a9f0:	e5d29000 	ldrb	r9, [r2]
        30a9f4:	e1a09c09 	mov	r9, r9, lsl #24
        30a9f8:	e1310c49 	teq	r1, r9, asr #24
        30a9fc:	0a00000c 	beq	30aa34 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0xec>
        30aa00:	e5f29002 	ldrb	r9, [r2, #2]!
        30aa04:	e1a09c09 	mov	r9, r9, lsl #24
        30aa08:	e1b09c49 	movs	r9, r9, asr #24
        30aa0c:	1afffff7 	bne	30a9f0 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0xa8>
        30aa10:	e35e0000 	cmp	lr, #0	; 0x0
        30aa14:	1a000008 	bne	30aa3c <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0xf4>
        30aa18:	e3310000 	teq	r1, #0	; 0x0
        30aa1c:	1a000007 	bne	30aa40 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0xf8>
        30aa20:	e5dcc001 	ldrb	ip, [ip, #1]
        30aa24:	e1a0cc0c 	mov	ip, ip, lsl #24
        30aa28:	e1a0cc4c 	mov	ip, ip, asr #24
        30aa2c:	e13c0004 	teq	ip, r4
        30aa30:	1a000004 	bne	30aa48 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x100>
        30aa34:	e5d21001 	ldrb	r1, [r2, #1]
        30aa38:	ea000000 	b	30aa40 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0xf8>
        30aa3c:	0a000001 	beq	30aa48 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x100>
        30aa40:	e3370000 	teq	r7, #0	; 0x0
        30aa44:	15858000 	strne	r8, [r5]
        30aa48:	e3310000 	teq	r1, #0	; 0x0
        30aa4c:	1a00001d 	bne	30aac8 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x180>
        30aa50:	e2832002 	add	r2, r3, #2	; 0x2
        30aa54:	e5d6c002 	ldrb	ip, [r6, #2]
        30aa58:	e1a0cc0c 	mov	ip, ip, lsl #24
        30aa5c:	e1a0cc4c 	mov	ip, ip, asr #24
        30aa60:	e5933000 	ldr	r3, [r3]
        30aa64:	e1a03843 	mov	r3, r3, asr #16
        30aa68:	e3530000 	cmp	r3, #0	; 0x0
        30aa6c:	da000015 	ble	30aac8 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x180>
        30aa70:	e5d2e001 	ldrb	lr, [r2, #1]
        30aa74:	e1a0ec0e 	mov	lr, lr, lsl #24
        30aa78:	e1a0ec4e 	mov	lr, lr, asr #24
        30aa7c:	e13e0004 	teq	lr, r4
        30aa80:	05d2e000 	ldreqb	lr, [r2]
        30aa84:	01a0ec0e 	moveq	lr, lr, lsl #24
        30aa88:	01a0ec4e 	moveq	lr, lr, asr #24
        30aa8c:	013e000c 	teqeq	lr, ip
        30aa90:	1a000005 	bne	30aaac <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x164>
        30aa94:	e3370000 	teq	r7, #0	; 0x0
        30aa98:	10420000 	subne	r0, r2, r0
        30aa9c:	15850000 	strne	r0, [r5]
        30aaa0:	e5d20005 	ldrb	r0, [r2, #5]
        30aaa4:	e20010ff 	and	r1, r0, #255	; 0xff
        30aaa8:	ea000006 	b	30aac8 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x180>
        30aaac:	e592e002 	ldr	lr, [r2, #2]
        30aab0:	e1a0e84e 	mov	lr, lr, asr #16
        30aab4:	e082208e 	add	r2, r2, lr, lsl #1
        30aab8:	e2822006 	add	r2, r2, #6	; 0x6
        30aabc:	e2433001 	sub	r3, r3, #1	; 0x1
        30aac0:	e3530000 	cmp	r3, #0	; 0x0
        30aac4:	caffffe9 	bgt	30aa70 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x128>
        30aac8:	e1a00001 	mov	r0, r1
        30aacc:	eb5e0f18 	bl	1a8e734 <$ConvertToUnicode(char)>
        30aad0:	e3300010 	teq	r0, #16	; 0x10
        30aad4:	1a00004d 	bne	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30aad8:	e3540060 	cmp	r4, #96	; 0x60
        30aadc:	3a00004b 	bcc	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30aae0:	e354007b 	cmp	r4, #123	; 0x7b
        30aae4:	8a000049 	bhi	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30aae8:	e2441060 	sub	r1, r4, #96	; 0x60
        30aaec:	e351001a 	cmp	r1, #26	; 0x1a
        30aaf0:	908ff101 	addls	pc, pc, r1, lsl #2
        30aaf4:	ea000045 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30aaf8:	ea000024 	b	30ab90 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x248>
        30aafc:	ea000026 	b	30ab9c <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x254>
        30ab00:	ea000028 	b	30aba8 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x260>
        30ab04:	ea00001b 	b	30ab78 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x230>
        30ab08:	ea000029 	b	30abb4 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x26c>
        30ab0c:	ea00002b 	b	30abc0 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x278>
        30ab10:	ea00003e 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab14:	ea00002f 	b	30abd8 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x290>
        30ab18:	ea00003c 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab1c:	ea000033 	b	30abf0 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2a8>
        30ab20:	ea00003a 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab24:	ea000034 	b	30abfc <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2b4>
        30ab28:	ea000038 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab2c:	ea000026 	b	30abcc <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x284>
        30ab30:	ea000036 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab34:	ea00002a 	b	30abe4 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x29c>
        30ab38:	ea000034 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab3c:	ea000031 	b	30ac08 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c0>
        30ab40:	ea000032 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab44:	ea000031 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab48:	ea000030 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab4c:	ea00002f 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab50:	ea00000b 	b	30ab84 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x23c>
        30ab54:	ea00002d 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab58:	ea000003 	b	30ab6c <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x224>
        30ab5c:	ea00002b 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab60:	e3a00021 	mov	r0, #33	; 0x21
        30ab64:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30ab68:	ea000028 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab6c:	e3a00022 	mov	r0, #34	; 0x22
        30ab70:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30ab74:	ea000025 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab78:	e3a00023 	mov	r0, #35	; 0x23
        30ab7c:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30ab80:	ea000022 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab84:	e3a00fc9 	mov	r0, #804	; 0x324
        30ab88:	e2800b3d 	add	r0, r0, #62464	; 0xf400
        30ab8c:	ea00001f 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab90:	e3a00025 	mov	r0, #37	; 0x25
        30ab94:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30ab98:	ea00001c 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ab9c:	e3a00026 	mov	r0, #38	; 0x26
        30aba0:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30aba4:	ea000019 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30aba8:	e3a00027 	mov	r0, #39	; 0x27
        30abac:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30abb0:	ea000016 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30abb4:	e3a00fca 	mov	r0, #808	; 0x328
        30abb8:	e2800b3d 	add	r0, r0, #62464	; 0xf400
        30abbc:	ea000013 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30abc0:	e3a00029 	mov	r0, #41	; 0x29
        30abc4:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30abc8:	ea000010 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30abcc:	e3a0002a 	mov	r0, #42	; 0x2a
        30abd0:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30abd4:	ea00000d 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30abd8:	e3a0002b 	mov	r0, #43	; 0x2b
        30abdc:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30abe0:	ea00000a 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30abe4:	e3a00fcb 	mov	r0, #812	; 0x32c
        30abe8:	e2800b3d 	add	r0, r0, #62464	; 0xf400
        30abec:	ea000007 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30abf0:	e3a0002d 	mov	r0, #45	; 0x2d
        30abf4:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30abf8:	ea000004 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30abfc:	e3a0002e 	mov	r0, #46	; 0x2e
        30ac00:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30ac04:	ea000001 	b	30ac10 <TranslateKey(unsigned long, unsigned char, unsigned char, unsigned long *)+0x2c8>
        30ac08:	e3a0002f 	mov	r0, #47	; 0x2f
        30ac0c:	e2800cf7 	add	r0, r0, #63232	; 0xf700
        30ac10:	e1a04000 	mov	r4, r0
        30ac14:	e28d0004 	add	r0, sp, #4	; 0x4
        30ac18:	e3a01000 	mov	r1, #0	; 0x0
        30ac1c:	eb62dd37 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        30ac20:	e1a00004 	mov	r0, r4
        30ac24:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TotalFreeInHeap
 * Address: 00311298
 */
void globals::TotalFreeInHeap() {
    /*
        311298:	e1a0c00d 	mov	ip, sp
        31129c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        3112a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        3112a4:	e3300000 	teq	r0, #0	; 0x0
        3112a8:	0b633f8c 	bleq	1be10e0 <$GetCurrentHeap>
        3112ac:	e590001c 	ldr	r0, [r0, #28]
        3112b0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TotalUsedInHeap
 * Address: 00311340
 */
void globals::TotalUsedInHeap() {
    /*
        311340:	e1a0c00d 	mov	ip, sp
        311344:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        311348:	e24cb004 	sub	fp, ip, #4	; 0x4
        31134c:	e3300000 	teq	r0, #0	; 0x0
        311350:	0b633f62 	bleq	1be10e0 <$GetCurrentHeap>
        311354:	e590102c 	ldr	r1, [r0, #44]
        311358:	e590001c 	ldr	r0, [r0, #28]
        31135c:	e0410000 	sub	r0, r1, r0
        311360:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TrySetSize
 * Address: 003123dc
 */
void globals::TrySetSize() {
    /*
        3123dc:	e1a0c00d 	mov	ip, sp
        3123e0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3123e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3123e8:	e1a06000 	mov	r6, r0
        3123ec:	e1a04001 	mov	r4, r1
        3123f0:	e1a05002 	mov	r5, r2
        3123f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        3123f8:	e5908000 	ldr	r8, [r0]
        3123fc:	e5989004 	ldr	r9, [r8, #4]
        312400:	e088a009 	add	sl, r8, r9
        312404:	e58da000 	str	sl, [sp]
        312408:	eb633b34 	bl	1be10e0 <$GetCurrentHeap>
        31240c:	e1a07000 	mov	r7, r0
        312410:	e5900024 	ldr	r0, [r0, #36]
        312414:	e150000a 	cmp	r0, sl
        312418:	3a000004 	bcc	312430 <TrySetSize+0x54>
        31241c:	e59a0000 	ldr	r0, [sl]
        312420:	e1500004 	cmp	r0, r4
        312424:	ba000001 	blt	312430 <TrySetSize+0x54>
        312428:	e3a00001 	mov	r0, #1	; 0x1
        31242c:	ea000074 	b	312604 <TrySetSize+0x228>
        312430:	e5973004 	ldr	r3, [r7, #4]
        312434:	e153000a 	cmp	r3, sl
        312438:	9a000027 	bls	3124dc <TrySetSize+0x100>
        31243c:	e1590004 	cmp	r9, r4
        312440:	da000025 	ble	3124dc <TrySetSize+0x100>
        312444:	e3a00000 	mov	r0, #0	; 0x0
        312448:	e3a02000 	mov	r2, #0	; 0x0
        31244c:	e59a1000 	ldr	r1, [sl]
        312450:	e3510000 	cmp	r1, #0	; 0x0
        312454:	aa000005 	bge	312470 <TrySetSize+0x94>
        312458:	e5da1002 	ldrb	r1, [sl, #2]
        31245c:	e3310000 	teq	r1, #0	; 0x0
        312460:	059a1004 	ldreq	r1, [sl, #4]
        312464:	00800001 	addeq	r0, r0, r1
        312468:	0a000001 	beq	312474 <TrySetSize+0x98>
        31246c:	ea00001a 	b	3124dc <TrySetSize+0x100>
        312470:	e0822001 	add	r2, r2, r1
        312474:	e08aa001 	add	sl, sl, r1
        312478:	e0801002 	add	r1, r0, r2
        31247c:	e1510004 	cmp	r1, r4
        312480:	aa000001 	bge	31248c <TrySetSize+0xb0>
        312484:	e153000a 	cmp	r3, sl
        312488:	8affffef 	bhi	31244c <TrySetSize+0x70>
        31248c:	e597104c 	ldr	r1, [r7, #76]
        312490:	e3310000 	teq	r1, #0	; 0x0
        312494:	0a000010 	beq	3124dc <TrySetSize+0x100>
        312498:	e0801002 	add	r1, r0, r2
        31249c:	e1510004 	cmp	r1, r4
        3124a0:	ba00000d 	blt	3124dc <TrySetSize+0x100>
        3124a4:	e1500009 	cmp	r0, r9
        3124a8:	aa00000b 	bge	3124dc <TrySetSize+0x100>
        3124ac:	e5971048 	ldr	r1, [r7, #72]
        3124b0:	e5912000 	ldr	r2, [r1]
        3124b4:	e1520000 	cmp	r2, r0
        3124b8:	ba000007 	blt	3124dc <TrySetSize+0x100>
        3124bc:	e1510008 	cmp	r1, r8
        3124c0:	3a000001 	bcc	3124cc <TrySetSize+0xf0>
        3124c4:	e151000a 	cmp	r1, sl
        3124c8:	3a000003 	bcc	3124dc <TrySetSize+0x100>
        3124cc:	e1a0100a 	mov	r1, sl
        3124d0:	e59d0000 	ldr	r0, [sp]
        3124d4:	eb6199dc 	bl	1b78c4c <$JumpBlock>
        3124d8:	eaffffd2 	b	312428 <TrySetSize+0x4c>
        3124dc:	e3a0a004 	mov	sl, #4	; 0x4
        3124e0:	e5970048 	ldr	r0, [r7, #72]
        3124e4:	e3300000 	teq	r0, #0	; 0x0
        3124e8:	0a000004 	beq	312500 <TrySetSize+0x124>
        3124ec:	e5900000 	ldr	r0, [r0]
        3124f0:	e1500005 	cmp	r0, r5
        3124f4:	ba000001 	blt	312500 <TrySetSize+0x124>
        3124f8:	e1a0000a 	mov	r0, sl
        3124fc:	ea000040 	b	312604 <TrySetSize+0x228>
        312500:	e3a01000 	mov	r1, #0	; 0x0
        312504:	e5d80000 	ldrb	r0, [r8]
        312508:	e2100004 	ands	r0, r0, #4	; 0x4
        31250c:	13a00001 	movne	r0, #1	; 0x1
        312510:	e20030ff 	and	r3, r0, #255	; 0xff
        312514:	e3a02000 	mov	r2, #0	; 0x0
        312518:	e5970020 	ldr	r0, [r7, #32]
        31251c:	ea000007 	b	312540 <TrySetSize+0x164>
        312520:	e5902000 	ldr	r2, [r0]
        312524:	e0811002 	add	r1, r1, r2
        312528:	e597c048 	ldr	ip, [r7, #72]
        31252c:	e59cc000 	ldr	ip, [ip]
        312530:	e15c0002 	cmp	ip, r2
        312534:	b5870048 	strlt	r0, [r7, #72]
        312538:	e1a02000 	mov	r2, r0
        31253c:	e5900004 	ldr	r0, [r0, #4]
        312540:	e3300000 	teq	r0, #0	; 0x0
        312544:	0a000001 	beq	312550 <TrySetSize+0x174>
        312548:	e1500008 	cmp	r0, r8
        31254c:	3afffff3 	bcc	312520 <TrySetSize+0x144>
        312550:	e3330000 	teq	r3, #0	; 0x0
        312554:	0a000003 	beq	312568 <TrySetSize+0x18c>
        312558:	e5922000 	ldr	r2, [r2]
        31255c:	e1520004 	cmp	r2, r4
        312560:	a3a00003 	movge	r0, #3	; 0x3
        312564:	aa000026 	bge	312604 <TrySetSize+0x228>
        312568:	e5972048 	ldr	r2, [r7, #72]
        31256c:	e3320000 	teq	r2, #0	; 0x0
        312570:	0a000002 	beq	312580 <TrySetSize+0x1a4>
        312574:	e5922000 	ldr	r2, [r2]
        312578:	e1520005 	cmp	r2, r5
        31257c:	aaffffdd 	bge	3124f8 <TrySetSize+0x11c>
        312580:	e597201c 	ldr	r2, [r7, #28]
        312584:	e0421001 	sub	r1, r2, r1
        312588:	e1510005 	cmp	r1, r5
        31258c:	da00000f 	ble	3125d0 <TrySetSize+0x1f4>
        312590:	e3300000 	teq	r0, #0	; 0x0
        312594:	0a000007 	beq	3125b8 <TrySetSize+0x1dc>
        312598:	e5971048 	ldr	r1, [r7, #72]
        31259c:	e5911000 	ldr	r1, [r1]
        3125a0:	e5902000 	ldr	r2, [r0]
        3125a4:	e1510002 	cmp	r1, r2
        3125a8:	b5870048 	strlt	r0, [r7, #72]
        3125ac:	e5900004 	ldr	r0, [r0, #4]
        3125b0:	e3300000 	teq	r0, #0	; 0x0
        3125b4:	1afffff7 	bne	312598 <TrySetSize+0x1bc>
        3125b8:	e5970048 	ldr	r0, [r7, #72]
        3125bc:	e3300000 	teq	r0, #0	; 0x0
        3125c0:	0a000002 	beq	3125d0 <TrySetSize+0x1f4>
        3125c4:	e5900000 	ldr	r0, [r0]
        3125c8:	e1500005 	cmp	r0, r5
        3125cc:	aaffffc9 	bge	3124f8 <TrySetSize+0x11c>
        3125d0:	e597000c 	ldr	r0, [r7, #12]
        3125d4:	e1300007 	teq	r0, r7
        3125d8:	1a000002 	bne	3125e8 <TrySetSize+0x20c>
        3125dc:	e5970010 	ldr	r0, [r7, #16]
        3125e0:	e1300007 	teq	r0, r7
        3125e4:	1a000005 	bne	312600 <TrySetSize+0x224>
        3125e8:	e5970098 	ldr	r0, [r7, #152]
        3125ec:	e1300007 	teq	r0, r7
        3125f0:	1a000004 	bne	312608 <TrySetSize+0x22c>
        3125f4:	e5970010 	ldr	r0, [r7, #16]
        3125f8:	e1300007 	teq	r0, r7
        3125fc:	0a000001 	beq	312608 <TrySetSize+0x22c>
        312600:	e3a00000 	mov	r0, #0	; 0x0
        312604:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        312608:	e2880010 	add	r0, r8, #16	; 0x10
        31260c:	e1a02004 	mov	r2, r4
        312610:	e1a01005 	mov	r1, r5
        312614:	e52d0004 	str	r0, [sp, -#4]!
        312618:	e1a0000d 	mov	r0, sp
        31261c:	eb619978 	bl	1b78c04 <$FindSmallestSlide>
        312620:	e3300000 	teq	r0, #0	; 0x0
        312624:	0a00000e 	beq	312664 <TrySetSize+0x288>
        312628:	e59d1000 	ldr	r1, [sp]
        31262c:	e2411010 	sub	r1, r1, #16	; 0x10
        312630:	e5861000 	str	r1, [r6]
        312634:	e5902000 	ldr	r2, [r0]
        312638:	e1520004 	cmp	r2, r4
        31263c:	ba000003 	blt	312650 <TrySetSize+0x274>
        312640:	e0811009 	add	r1, r1, r9
        312644:	e1310000 	teq	r1, r0
        312648:	03a00001 	moveq	r0, #1	; 0x1
        31264c:	0a000003 	beq	312660 <TrySetSize+0x284>
        312650:	e1520005 	cmp	r2, r5
        312654:	ba000002 	blt	312664 <TrySetSize+0x288>
        312658:	e5a70048 	str	r0, [r7, #72]!
        31265c:	e1a0000a 	mov	r0, sl
        312660:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        312664:	e28dd004 	add	sp, sp, #4	; 0x4
        312668:	eaffffe4 	b	312600 <TrySetSize+0x224>
    */
}

/**
 * Symbol: TestForREx
 * Address: 003137dc
 */
void globals::TestForREx() {
    /*
        3137dc:	e3a01000 	mov	r1, #0	; 0x0
        3137e0:	e5902000 	ldr	r2, [r0]
        3137e4:	e59fc024 	ldr	ip, [pc, #24]	; 313810 <TestForREx+0x34>
        3137e8:	e132000c 	teq	r2, ip
        3137ec:	05902004 	ldreq	r2, [r0, #4]
        3137f0:	059fc01c 	ldreq	ip, [pc, #1c]	; 313814 <TestForREx+0x38>
        3137f4:	0132000c 	teqeq	r2, ip
        3137f8:	1a000002 	bne	313808 <TestForREx+0x2c>
        3137fc:	e590201c 	ldr	r2, [r0, #28]
        313800:	e3520004 	cmp	r2, #4	; 0x4
        313804:	31a0f00e 	movcc	pc, lr
        313808:	e1a00001 	mov	r0, r1
        31380c:	e1a0f00e 	mov	pc, lr
        313810:	52457842 	subpl	r7, r5, #4325376	; 0x420000
        313814:	6c6f636b 	stcvsl	3, cr6, [pc], -#428
    */
}

/**
 * Symbol: TrimString(RefVar const &)
 * Address: 00314c1c
 */
TrimString(RefVar const &) {
    /*
        314c1c:	e1a0c00d 	mov	ip, sp
        314c20:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        314c24:	e24cb004 	sub	fp, ip, #4	; 0x4
        314c28:	e24dd028 	sub	sp, sp, #40	; 0x28
        314c2c:	e1a01000 	mov	r1, r0
        314c30:	e1a0000d 	mov	r0, sp
        314c34:	ebfa5f79 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        314c38:	e3a04000 	mov	r4, #0	; 0x0
        314c3c:	e59d500c 	ldr	r5, [sp, #12]
        314c40:	ea000000 	b	314c48 <TrimString(RefVar const &)+0x2c>
        314c44:	e2844001 	add	r4, r4, #1	; 0x1
        314c48:	e1540005 	cmp	r4, r5
        314c4c:	aa000005 	bge	314c68 <TrimString(RefVar const &)+0x4c>
        314c50:	e1a01004 	mov	r1, r4
        314c54:	e1a0000d 	mov	r0, sp
        314c58:	ebfa5cb6 	bl	1abf38 <TRichString::GetChar( const(unsigned long))>
        314c5c:	eb63563a 	bl	1bea54c <$IsWhiteSpace(unsigned short)>
        314c60:	e3300000 	teq	r0, #0	; 0x0
        314c64:	1afffff6 	bne	314c44 <TrimString(RefVar const &)+0x28>
        314c68:	e1a02004 	mov	r2, r4
        314c6c:	e1a0000d 	mov	r0, sp
        314c70:	e3a01000 	mov	r1, #0	; 0x0
        314c74:	ebfa5994 	bl	1ab2cc <TRichString::DeleteRange(unsigned long, unsigned long)>
        314c78:	e3a04000 	mov	r4, #0	; 0x0
        314c7c:	e59d500c 	ldr	r5, [sp, #12]
        314c80:	e2456001 	sub	r6, r5, #1	; 0x1
        314c84:	ea000000 	b	314c8c <TrimString(RefVar const &)+0x70>
        314c88:	e2844001 	add	r4, r4, #1	; 0x1
        314c8c:	e1540005 	cmp	r4, r5
        314c90:	aa000005 	bge	314cac <TrimString(RefVar const &)+0x90>
        314c94:	e0461004 	sub	r1, r6, r4
        314c98:	e1a0000d 	mov	r0, sp
        314c9c:	ebfa5ca5 	bl	1abf38 <TRichString::GetChar( const(unsigned long))>
        314ca0:	eb635629 	bl	1bea54c <$IsWhiteSpace(unsigned short)>
        314ca4:	e3300000 	teq	r0, #0	; 0x0
        314ca8:	1afffff6 	bne	314c88 <TrimString(RefVar const &)+0x6c>
        314cac:	e0451004 	sub	r1, r5, r4
        314cb0:	e1a02004 	mov	r2, r4
        314cb4:	e1a0000d 	mov	r0, sp
        314cb8:	ebfa5983 	bl	1ab2cc <TRichString::DeleteRange(unsigned long, unsigned long)>
        314cbc:	e59d0000 	ldr	r0, [sp]
        314cc0:	eb62b93d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        314cc4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ThrowBadTypeWithFrameData(long, RefVar const &)
 * Address: 0031a0dc
 */
ThrowBadTypeWithFrameData(long, RefVar const &) {
    /*
        31a0dc:	e1a0c00d 	mov	ip, sp
        31a0e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31a0e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        31a0e8:	e1a05000 	mov	r5, r0
        31a0ec:	e1a04001 	mov	r4, r1
        31a0f0:	e24dd008 	sub	sp, sp, #8	; 0x8
        31a0f4:	eb62a011 	bl	1bc2140 <$AllocateFrame(void)>
        31a0f8:	eb62a013 	bl	1bc214c <$AllocateRefHandle(long)>
        31a0fc:	e58d0004 	str	r0, [sp, #4]
        31a100:	e1a00105 	mov	r0, r5, lsl #2
        31a104:	eb62a010 	bl	1bc214c <$AllocateRefHandle(long)>
        31a108:	e58d0000 	str	r0, [sp]
        31a10c:	e1a0200d 	mov	r2, sp
        31a110:	e59f1038 	ldr	r1, [pc, #38]	; 31a150 <ThrowBadTypeWithFrameData(long, RefVar const &)+0x74>
        31a114:	e28d0004 	add	r0, sp, #4	; 0x4
        31a118:	eb62b092 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        31a11c:	e59d0000 	ldr	r0, [sp]
        31a120:	eb62a425 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31a124:	e1a02004 	mov	r2, r4
        31a128:	e59f1024 	ldr	r1, [pc, #24]	; 31a154 <ThrowBadTypeWithFrameData(long, RefVar const &)+0x78>
        31a12c:	e28d0004 	add	r0, sp, #4	; 0x4
        31a130:	eb62b08c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        31a134:	e28d1004 	add	r1, sp, #4	; 0x4
        31a138:	e59f0018 	ldr	r0, [pc, #18]	; 31a158 <ThrowBadTypeWithFrameData(long, RefVar const &)+0x7c>
        31a13c:	e5900000 	ldr	r0, [r0]
        31a140:	eb62b8c5 	bl	1bc845c <$ThrowRefException(char *, RefVar const &)>
        31a144:	e59d0004 	ldr	r0, [sp, #4]
        31a148:	eb62a41b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31a14c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31a150:	00682c90 	streqb	r2, [r8], -#192
        31a154:	00684e98 	streqb	r4, [r8], -#232
        31a158:	00371314 	eoreqs	r1, r7, r4, lsl r3
    */
}

/**
 * Symbol: ThrowExFramesWithBadValue(long, RefVar const &)
 * Address: 0031ca58
 */
ThrowExFramesWithBadValue(long, RefVar const &) {
    /*
        31ca58:	e1a0c00d 	mov	ip, sp
        31ca5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31ca60:	e24cb004 	sub	fp, ip, #4	; 0x4
        31ca64:	e1a05000 	mov	r5, r0
        31ca68:	e1a04001 	mov	r4, r1
        31ca6c:	e24dd008 	sub	sp, sp, #8	; 0x8
        31ca70:	eb6295b2 	bl	1bc2140 <$AllocateFrame(void)>
        31ca74:	eb6295b4 	bl	1bc214c <$AllocateRefHandle(long)>
        31ca78:	e58d0004 	str	r0, [sp, #4]
        31ca7c:	e1a00105 	mov	r0, r5, lsl #2
        31ca80:	eb6295b1 	bl	1bc214c <$AllocateRefHandle(long)>
        31ca84:	e58d0000 	str	r0, [sp]
        31ca88:	e1a0200d 	mov	r2, sp
        31ca8c:	e59f1038 	ldr	r1, [pc, #38]	; 31cacc <ThrowExFramesWithBadValue(long, RefVar const &)+0x74>
        31ca90:	e28d0004 	add	r0, sp, #4	; 0x4
        31ca94:	eb62a633 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        31ca98:	e59d0000 	ldr	r0, [sp]
        31ca9c:	eb6299c6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31caa0:	e1a02004 	mov	r2, r4
        31caa4:	e59f1024 	ldr	r1, [pc, #24]	; 31cad0 <ThrowExFramesWithBadValue(long, RefVar const &)+0x78>
        31caa8:	e28d0004 	add	r0, sp, #4	; 0x4
        31caac:	eb62a62d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        31cab0:	e28d1004 	add	r1, sp, #4	; 0x4
        31cab4:	e59f0018 	ldr	r0, [pc, #18]	; 31cad4 <ThrowExFramesWithBadValue(long, RefVar const &)+0x7c>
        31cab8:	e5900000 	ldr	r0, [r0]
        31cabc:	eb62ae66 	bl	1bc845c <$ThrowRefException(char *, RefVar const &)>
        31cac0:	e59d0004 	ldr	r0, [sp, #4]
        31cac4:	eb6299bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31cac8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31cacc:	00682c90 	streqb	r2, [r8], -#192
        31cad0:	00684e98 	streqb	r4, [r8], -#232
        31cad4:	0037130c 	eoreqs	r1, r7, ip, lsl #6
    */
}

/**
 * Symbol: TotalClone1__FRC6RefVarR14TPrecedentsVarT2i
 * Address: 0031fc28
 */
void globals::TotalClone1() {
    /*
        31fc28:	e1a0c00d 	mov	ip, sp
        31fc2c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        31fc30:	e24cb004 	sub	fp, ip, #4	; 0x4
        31fc34:	e1a04000 	mov	r4, r0
        31fc38:	e1a06001 	mov	r6, r1
        31fc3c:	e1a05002 	mov	r5, r2
        31fc40:	e1a07003 	mov	r7, r3
        31fc44:	e1a01000 	mov	r1, r0
        31fc48:	e1a00006 	mov	r0, r6
        31fc4c:	eb5c7cb6 	bl	1a3ef2c <TPrecedentsVar::$Find(RefVar const &)>
        31fc50:	e3700001 	cmn	r0, #1	; 0x1
        31fc54:	11a01000 	movne	r1, r0
        31fc58:	11a00005 	movne	r0, r5
        31fc5c:	191b6ff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        31fc60:	1a5c80d1 	bne	1a3ffac <TPrecedentsVar::$Get(long)>
        31fc64:	e1a01004 	mov	r1, r4
        31fc68:	e1a00006 	mov	r0, r6
        31fc6c:	eb00dfaa 	bl	357b1c <TPrecedentsVar::Append(RefVar const &)>
        31fc70:	e24dd004 	sub	sp, sp, #4	; 0x4
        31fc74:	e3a00002 	mov	r0, #2	; 0x2
        31fc78:	eb628933 	bl	1bc214c <$AllocateRefHandle(long)>
        31fc7c:	e58d0000 	str	r0, [sp]
        31fc80:	e5940000 	ldr	r0, [r4]
        31fc84:	e5901000 	ldr	r1, [r0]
        31fc88:	e59f003c 	ldr	r0, [pc, #3c]	; 31fccc <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0xa4>
        31fc8c:	e5900000 	ldr	r0, [r0]
        31fc90:	eb5c80d4 	bl	1a3ffe8 <TObjectHeap::$InHeap(long)>
        31fc94:	e3300000 	teq	r0, #0	; 0x0
        31fc98:	1a00000c 	bne	31fcd0 <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0xa8>
        31fc9c:	e5940000 	ldr	r0, [r4]
        31fca0:	e5900000 	ldr	r0, [r0]
        31fca4:	e350050e 	cmp	r0, #58720256	; 0x3800000
        31fca8:	3a000008 	bcc	31fcd0 <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0xa8>
        31fcac:	eb62957c 	bl	1bc52a4 <$IsSymbol(long)>
        31fcb0:	e3300000 	teq	r0, #0	; 0x0
        31fcb4:	0a000018 	beq	31fd1c <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0xf4>
        31fcb8:	e5940000 	ldr	r0, [r4]
        31fcbc:	e5900000 	ldr	r0, [r0]
        31fcc0:	eb62a1e4 	bl	1bc8458 <$SymbolName(long)>
        31fcc4:	eb62956d 	bl	1bc5280 <$Intern(char *)>
        31fcc8:	ea000015 	b	31fd24 <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0xfc>
        31fccc:	0c105548 	ldceq	5, cr5, [r0], -#288
        31fcd0:	e3370000 	teq	r7, #0	; 0x0
        31fcd4:	0a000010 	beq	31fd1c <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0xf4>
        31fcd8:	e5940000 	ldr	r0, [r4]
        31fcdc:	e5900000 	ldr	r0, [r0]
        31fce0:	eb629582 	bl	1bc52f0 <$ObjectFlags(long)>
        31fce4:	e3100040 	tst	r0, #64	; 0x40
        31fce8:	0a000006 	beq	31fd08 <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0xe0>
        31fcec:	e1a01004 	mov	r1, r4
        31fcf0:	e1a00005 	mov	r0, r5
        31fcf4:	eb00df88 	bl	357b1c <TPrecedentsVar::Append(RefVar const &)>
        31fcf8:	e59d0000 	ldr	r0, [sp]
        31fcfc:	eb628d2e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31fd00:	e3a00002 	mov	r0, #2	; 0x2
        31fd04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        31fd08:	e5940000 	ldr	r0, [r4]
        31fd0c:	e5901000 	ldr	r1, [r0]
        31fd10:	e59d0000 	ldr	r0, [sp]
        31fd14:	e5801000 	str	r1, [r0]
        31fd18:	ea000003 	b	31fd2c <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0x104>
        31fd1c:	e1a00004 	mov	r0, r4
        31fd20:	eb628911 	bl	1bc216c <$Clone(RefVar const &)>
        31fd24:	e59d1000 	ldr	r1, [sp]
        31fd28:	e5810000 	str	r0, [r1]
        31fd2c:	e1a0100d 	mov	r1, sp
        31fd30:	e1a00005 	mov	r0, r5
        31fd34:	eb00df78 	bl	357b1c <TPrecedentsVar::Append(RefVar const &)>
        31fd38:	e5940000 	ldr	r0, [r4]
        31fd3c:	e5900000 	ldr	r0, [r0]
        31fd40:	eb62956a 	bl	1bc52f0 <$ObjectFlags(long)>
        31fd44:	e3100001 	tst	r0, #1	; 0x1
        31fd48:	0a000004 	beq	31fd60 <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0x138>
        31fd4c:	e5940000 	ldr	r0, [r4]
        31fd50:	e5900000 	ldr	r0, [r0]
        31fd54:	eb629554 	bl	1bc52ac <$Length(long)>
        31fd58:	e2809001 	add	r9, r0, #1	; 0x1
        31fd5c:	ea000000 	b	31fd64 <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0x13c>
        31fd60:	e3a09001 	mov	r9, #1	; 0x1
        31fd64:	e24dd004 	sub	sp, sp, #4	; 0x4
        31fd68:	e3a00002 	mov	r0, #2	; 0x2
        31fd6c:	eb6288f6 	bl	1bc214c <$AllocateRefHandle(long)>
        31fd70:	e3a08000 	mov	r8, #0	; 0x0
        31fd74:	e3590000 	cmp	r9, #0	; 0x0
        31fd78:	e58d0000 	str	r0, [sp]
        31fd7c:	da00001b 	ble	31fdf0 <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0x1c8>
        31fd80:	e5940000 	ldr	r0, [r4]
        31fd84:	e5900000 	ldr	r0, [r0]
        31fd88:	eb629559 	bl	1bc52f4 <$ObjectPtr(long)>
        31fd8c:	e0800108 	add	r0, r0, r8, lsl #2
        31fd90:	e5900008 	ldr	r0, [r0, #8]
        31fd94:	e59d1000 	ldr	r1, [sp]
        31fd98:	e5810000 	str	r0, [r1]
        31fd9c:	e2000003 	and	r0, r0, #3	; 0x3
        31fda0:	e3300001 	teq	r0, #1	; 0x1
        31fda4:	1a00000e 	bne	31fde4 <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0x1bc>
        31fda8:	e1a03007 	mov	r3, r7
        31fdac:	e1a02005 	mov	r2, r5
        31fdb0:	e1a01006 	mov	r1, r6
        31fdb4:	e1a0000d 	mov	r0, sp
        31fdb8:	eb5c9120 	bl	1a44240 <$TotalClone1__FRC6RefVarR14TPrecedentsVarT2i>
        31fdbc:	e59d1000 	ldr	r1, [sp]
        31fdc0:	e5810000 	str	r0, [r1]
        31fdc4:	e1a0a000 	mov	sl, r0
        31fdc8:	e3300002 	teq	r0, #2	; 0x2
        31fdcc:	0a000004 	beq	31fde4 <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0x1bc>
        31fdd0:	e59d0004 	ldr	r0, [sp, #4]
        31fdd4:	e5900000 	ldr	r0, [r0]
        31fdd8:	eb629545 	bl	1bc52f4 <$ObjectPtr(long)>
        31fddc:	e0800108 	add	r0, r0, r8, lsl #2
        31fde0:	e5a0a008 	str	sl, [r0, #8]!
        31fde4:	e2888001 	add	r8, r8, #1	; 0x1
        31fde8:	e1580009 	cmp	r8, r9
        31fdec:	baffffe3 	blt	31fd80 <TotalClone1__FRC6RefVarR14TPrecedentsVarT2i+0x158>
        31fdf0:	e59d0004 	ldr	r0, [sp, #4]
        31fdf4:	e5904000 	ldr	r4, [r0]
        31fdf8:	e59d0000 	ldr	r0, [sp]
        31fdfc:	eb628cee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31fe00:	e59d0004 	ldr	r0, [sp, #4]
        31fe04:	eb628cec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31fe08:	e1a00004 	mov	r0, r4
        31fe0c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TotalClone(RefVar const &)
 * Address: 0031fe94
 */
TotalClone(RefVar const &) {
    /*
        31fe94:	e1a0c00d 	mov	ip, sp
        31fe98:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        31fe9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        31fea0:	e1a04000 	mov	r4, r0
        31fea4:	e5900000 	ldr	r0, [r0]
        31fea8:	e5900000 	ldr	r0, [r0]
        31feac:	e2001003 	and	r1, r0, #3	; 0x3
        31feb0:	e3310001 	teq	r1, #1	; 0x1
        31feb4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        31feb8:	eb6294f9 	bl	1bc52a4 <$IsSymbol(long)>
        31febc:	e3300000 	teq	r0, #0	; 0x0
        31fec0:	0a000011 	beq	31ff0c <TotalClone(RefVar const &)+0x78>
        31fec4:	e5940000 	ldr	r0, [r4]
        31fec8:	e5901000 	ldr	r1, [r0]
        31fecc:	e59f0034 	ldr	r0, [pc, #34]	; 31ff08 <TotalClone(RefVar const &)+0x74>
        31fed0:	e5900000 	ldr	r0, [r0]
        31fed4:	eb5c8043 	bl	1a3ffe8 <TObjectHeap::$InHeap(long)>
        31fed8:	e3300000 	teq	r0, #0	; 0x0
        31fedc:	1a000006 	bne	31fefc <TotalClone(RefVar const &)+0x68>
        31fee0:	e5940000 	ldr	r0, [r4]
        31fee4:	e5900000 	ldr	r0, [r0]
        31fee8:	e350050e 	cmp	r0, #58720256	; 0x3800000
        31feec:	3a000002 	bcc	31fefc <TotalClone(RefVar const &)+0x68>
        31fef0:	eb62a158 	bl	1bc8458 <$SymbolName(long)>
        31fef4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        31fef8:	ea6294e0 	b	1bc5280 <$Intern(char *)>
        31fefc:	e5940000 	ldr	r0, [r4]
        31ff00:	e5900000 	ldr	r0, [r0]
        31ff04:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        31ff08:	0c105548 	ldceq	5, cr5, [r0], -#288
        31ff0c:	e24dd010 	sub	sp, sp, #16	; 0x10
        31ff10:	e28d0008 	add	r0, sp, #8	; 0x8
        31ff14:	eb5c6fae 	bl	1a3bdd4 <TPrecedentsVar::$__ct(void)>
        31ff18:	e1a0000d 	mov	r0, sp
        31ff1c:	eb5c6fac 	bl	1a3bdd4 <TPrecedentsVar::$__ct(void)>
        31ff20:	e1a0200d 	mov	r2, sp
        31ff24:	e28d1008 	add	r1, sp, #8	; 0x8
        31ff28:	e1a00004 	mov	r0, r4
        31ff2c:	e3a03000 	mov	r3, #0	; 0x0
        31ff30:	eb5c90c2 	bl	1a44240 <$TotalClone1__FRC6RefVarR14TPrecedentsVarT2i>
        31ff34:	e1a04000 	mov	r4, r0
        31ff38:	e59d0000 	ldr	r0, [sp]
        31ff3c:	eb628c9e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31ff40:	e59d0008 	ldr	r0, [sp, #8]
        31ff44:	eb628c9c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31ff48:	e1a00004 	mov	r0, r4
        31ff4c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TextCleanup(PicPlay *, char *)
 * Address: 00333cd0
 */
TextCleanup(PicPlay *, char *) {
    /*
        333cd0:	e1a0c00d 	mov	ip, sp
        333cd4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        333cd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        333cdc:	e1a04000 	mov	r4, r0
        333ce0:	e5d000a8 	ldrb	r0, [r0, #168]
        333ce4:	e2102080 	ands	r2, r0, #128	; 0x80
        333ce8:	13a02001 	movne	r2, #1	; 0x1
        333cec:	e20260ff 	and	r6, r2, #255	; 0xff
        333cf0:	e2002040 	and	r2, r0, #64	; 0x40
        333cf4:	e2100020 	ands	r0, r0, #32	; 0x20
        333cf8:	13a00001 	movne	r0, #1	; 0x1
        333cfc:	e31000ff 	tst	r0, #255	; 0xff
        333d00:	0a000015 	beq	333d5c <TextCleanup(PicPlay *, char *)+0x8c>
        333d04:	e3360000 	teq	r6, #0	; 0x0
        333d08:	0a000010 	beq	333d50 <TextCleanup(PicPlay *, char *)+0x80>
        333d0c:	e284709c 	add	r7, r4, #156	; 0x9c
        333d10:	e8970081 	ldmia	r7, {r0, r7}
        333d14:	e0800287 	add	r0, r0, r7, lsl #5
        333d18:	e2405020 	sub	r5, r0, #32	; 0x20
        333d1c:	e3570000 	cmp	r7, #0	; 0x0
        333d20:	da00000d 	ble	333d5c <TextCleanup(PicPlay *, char *)+0x8c>
        333d24:	e5950000 	ldr	r0, [r5]
        333d28:	e5900000 	ldr	r0, [r0]
        333d2c:	e3100003 	tst	r0, #3	; 0x3
        333d30:	1a000001 	bne	333d3c <TextCleanup(PicPlay *, char *)+0x6c>
        333d34:	eb5db0a9 	bl	1a9ffe0 <$RefToAddress(long)>
        333d38:	eb605e22 	bl	1b4b5c8 <$QDDisposeTempPtr(char *)>
        333d3c:	e2455020 	sub	r5, r5, #32	; 0x20
        333d40:	e2477001 	sub	r7, r7, #1	; 0x1
        333d44:	e3570000 	cmp	r7, #0	; 0x0
        333d48:	cafffff5 	bgt	333d24 <TextCleanup(PicPlay *, char *)+0x54>
        333d4c:	ea000002 	b	333d5c <TextCleanup(PicPlay *, char *)+0x8c>
        333d50:	e3310000 	teq	r1, #0	; 0x0
        333d54:	11a00001 	movne	r0, r1
        333d58:	1b605e1a 	blne	1b4b5c8 <$QDDisposeTempPtr(char *)>
        333d5c:	e59400ac 	ldr	r0, [r4, #172]
        333d60:	eb605e18 	bl	1b4b5c8 <$QDDisposeTempPtr(char *)>
        333d64:	e3360000 	teq	r6, #0	; 0x0
        333d68:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        333d6c:	e3a07000 	mov	r7, #0	; 0x0
        333d70:	e284609c 	add	r6, r4, #156	; 0x9c
        333d74:	e8960060 	ldmia	r6, {r5, r6}
        333d78:	e3560000 	cmp	r6, #0	; 0x0
        333d7c:	da000005 	ble	333d98 <TextCleanup(PicPlay *, char *)+0xc8>
        333d80:	e5950000 	ldr	r0, [r5]
        333d84:	eb623d0c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        333d88:	e2855020 	add	r5, r5, #32	; 0x20
        333d8c:	e2466001 	sub	r6, r6, #1	; 0x1
        333d90:	e3560000 	cmp	r6, #0	; 0x0
        333d94:	cafffff9 	bgt	333d80 <TextCleanup(PicPlay *, char *)+0xb0>
        333d98:	e5940094 	ldr	r0, [r4, #148]
        333d9c:	eb62b4c4 	bl	1be10b4 <$DisposPtr>
        333da0:	e5847094 	str	r7, [r4, #148]
        333da4:	e5940098 	ldr	r0, [r4, #152]
        333da8:	eb62b4c1 	bl	1be10b4 <$DisposPtr>
        333dac:	e5847098 	str	r7, [r4, #152]
        333db0:	e594009c 	ldr	r0, [r4, #156]
        333db4:	eb605e03 	bl	1b4b5c8 <$QDDisposeTempPtr(char *)>
        333db8:	e5a4709c 	str	r7, [r4, #156]!
        333dbc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TooManyStrongElems__FPA13_15RWG_PPD_el_typeP11xrdata_typePs
 * Address: 0033b894
 */
void globals::TooManyStrongElems() {
    /*
        33b894:	e1a0c00d 	mov	ip, sp
        33b898:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        33b89c:	e24cb004 	sub	fp, ip, #4	; 0x4
        33b8a0:	e1a0c002 	mov	ip, r2
        33b8a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        33b8a8:	e1a0300d 	mov	r3, sp
        33b8ac:	e28d2004 	add	r2, sp, #4	; 0x4
        33b8b0:	e5916008 	ldr	r6, [r1, #8]
        33b8b4:	e92d000c 	stmdb	sp!, {r2, r3}
        33b8b8:	e1a0200c 	mov	r2, ip
        33b8bc:	e3a03000 	mov	r3, #0	; 0x0
        33b8c0:	eb5fc785 	bl	1b2d6dc <$FindIRangeOfCorrXRs__FPA13_15RWG_PPD_el_typeP11xrdata_typePsUiPiT5>
        33b8c4:	e28dd008 	add	sp, sp, #8	; 0x8
        33b8c8:	e3a07001 	mov	r7, #1	; 0x1
        33b8cc:	e3300000 	teq	r0, #0	; 0x0
        33b8d0:	1a000001 	bne	33b8dc <TooManyStrongElems__FPA13_15RWG_PPD_el_typeP11xrdata_typePs+0x48>
        33b8d4:	e1a00007 	mov	r0, r7
        33b8d8:	ea00000f 	b	33b91c <TooManyStrongElems__FPA13_15RWG_PPD_el_typeP11xrdata_typePs+0x88>
        33b8dc:	e3a05000 	mov	r5, #0	; 0x0
        33b8e0:	e89d0011 	ldmia	sp, {r0, r4}
        33b8e4:	e1540000 	cmp	r4, r0
        33b8e8:	ca00000a 	bgt	33b918 <TooManyStrongElems__FPA13_15RWG_PPD_el_typeP11xrdata_typePs+0x84>
        33b8ec:	e0840084 	add	r0, r4, r4, lsl #1
        33b8f0:	e0860180 	add	r0, r6, r0, lsl #3
        33b8f4:	eb5fb2d8 	bl	1b2845c <$X_IsStrongElem(xrd_el_type *)>
        33b8f8:	e3300000 	teq	r0, #0	; 0x0
        33b8fc:	12855001 	addne	r5, r5, #1	; 0x1
        33b900:	e2844001 	add	r4, r4, #1	; 0x1
        33b904:	e59d0000 	ldr	r0, [sp]
        33b908:	e1540000 	cmp	r4, r0
        33b90c:	dafffff6 	ble	33b8ec <TooManyStrongElems__FPA13_15RWG_PPD_el_typeP11xrdata_typePs+0x58>
        33b910:	e3550004 	cmp	r5, #4	; 0x4
        33b914:	caffffee 	bgt	33b8d4 <TooManyStrongElems__FPA13_15RWG_PPD_el_typeP11xrdata_typePs+0x40>
        33b918:	e3a00000 	mov	r0, #0	; 0x0
        33b91c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TrimRect(Region **, Rect *)
 * Address: 003417b4
 */
TrimRect(Region **, Rect *) {
    /*
        3417b4:	e1a0c00d 	mov	ip, sp
        3417b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        3417bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3417c0:	e1a04001 	mov	r4, r1
        3417c4:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        3417c8:	e28d1014 	add	r1, sp, #20	; 0x14
        3417cc:	e58d1010 	str	r1, [sp, #16]
        3417d0:	e28d1004 	add	r1, sp, #4	; 0x4
        3417d4:	e58d1000 	str	r1, [sp]
        3417d8:	e3a0100c 	mov	r1, #12	; 0xc
        3417dc:	e5cd1005 	strb	r1, [sp, #5]
        3417e0:	e3a01000 	mov	r1, #0	; 0x0
        3417e4:	e5cd1004 	strb	r1, [sp, #4]
        3417e8:	e28d1008 	add	r1, sp, #8	; 0x8
        3417ec:	e8945000 	ldmia	r4, {ip, lr}
        3417f0:	e8815000 	stmia	r1, {ip, lr}
        3417f4:	e3a03000 	mov	r3, #0	; 0x0
        3417f8:	e3a02000 	mov	r2, #0	; 0x0
        3417fc:	e3a01000 	mov	r1, #0	; 0x0
        341800:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        341804:	e28d201c 	add	r2, sp, #28	; 0x1c
        341808:	e28d100c 	add	r1, sp, #12	; 0xc
        34180c:	e3a03018 	mov	r3, #24	; 0x18
        341810:	eb602777 	bl	1b4b5f4 <$RgnOp__FPP10TrueRegionT1PPclN24Uc>
        341814:	e28dd00c 	add	sp, sp, #12	; 0xc
        341818:	e1a05000 	mov	r5, r0
        34181c:	e3300004 	teq	r0, #4	; 0x4
        341820:	1a00000c 	bne	341858 <TrimRect(Region **, Rect *)+0xa4>
        341824:	e59d0010 	ldr	r0, [sp, #16]
        341828:	e590300c 	ldr	r3, [r0, #12]
        34182c:	e1a03843 	mov	r3, r3, asr #16
        341830:	e92d0008 	stmdb	sp!, {r3}
        341834:	e590300e 	ldr	r3, [r0, #14]
        341838:	e1a03843 	mov	r3, r3, asr #16
        34183c:	e5901002 	ldr	r1, [r0, #2]
        341840:	e1a01841 	mov	r1, r1, asr #16
        341844:	e5902000 	ldr	r2, [r0]
        341848:	e1a02842 	mov	r2, r2, asr #16
        34184c:	e1a00004 	mov	r0, r4
        341850:	eb604c6d 	bl	1b54a0c <$SetRect__FP4RectlN32>
        341854:	e28dd004 	add	sp, sp, #4	; 0x4
        341858:	e2450004 	sub	r0, r5, #4	; 0x4
        34185c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: trunc
 * Address: 00344414
 */
void globals::trunc() {
    /*
        344414:	e92d0003 	stmdb	sp!, {r0, r1}
        344418:	ecbd8102 	ldfd	f0, [sp], #8
        34441c:	ed2d8102 	stfd	f0, [sp, -#8]!
        344420:	e8bd0003 	ldmia	sp!, {r0, r1}
        344424:	ea01251b 	b	38d898 <_rintZ>
    */
}

/**
 * Symbol: ToObject(TStore *)
 * Address: 00350b74
 */
ToObject(TStore *) {
    /*
        350b74:	e1a0c00d 	mov	ip, sp
        350b78:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        350b7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        350b80:	e1a04000 	mov	r4, r0
        350b84:	e3a00002 	mov	r0, #2	; 0x2
        350b88:	eb61c56f 	bl	1bc214c <$AllocateRefHandle(long)>
        350b8c:	e1a05000 	mov	r5, r0
        350b90:	e59f8054 	ldr	r8, [pc, #54]	; 350bec <ToObject(TStore *)+0x78>
        350b94:	e5980000 	ldr	r0, [r8]
        350b98:	eb61d1c3 	bl	1bc52ac <$Length(long)>
        350b9c:	e1a07000 	mov	r7, r0
        350ba0:	e3a06000 	mov	r6, #0	; 0x0
        350ba4:	e3500000 	cmp	r0, #0	; 0x0
        350ba8:	da000014 	ble	350c00 <ToObject(TStore *)+0x8c>
        350bac:	e59f903c 	ldr	r9, [pc, #3c]	; 350bf0 <ToObject(TStore *)+0x7c>
        350bb0:	e1a01006 	mov	r1, r6
        350bb4:	e5980000 	ldr	r0, [r8]
        350bb8:	eb61cda5 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        350bbc:	e5850000 	str	r0, [r5]
        350bc0:	e5991000 	ldr	r1, [r9]
        350bc4:	e5911000 	ldr	r1, [r1]
        350bc8:	eb61cda4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        350bcc:	e590007c 	ldr	r0, [r0, #124]
        350bd0:	e1300004 	teq	r0, r4
        350bd4:	1a000006 	bne	350bf4 <ToObject(TStore *)+0x80>
        350bd8:	e5954000 	ldr	r4, [r5]
        350bdc:	e1a00005 	mov	r0, r5
        350be0:	eb61c975 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        350be4:	e1a00004 	mov	r0, r4
        350be8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        350bec:	0c10596c 	ldceq	9, cr5, [r0], -#432
        350bf0:	00684868 	rsbeq	r4, r8, r8, ror #16
        350bf4:	e2866001 	add	r6, r6, #1	; 0x1
        350bf8:	e1560007 	cmp	r6, r7
        350bfc:	baffffeb 	blt	350bb0 <ToObject(TStore *)+0x3c>
        350c00:	e1a00005 	mov	r0, r5
        350c04:	eb61c96c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        350c08:	e3a00002 	mov	r0, #2	; 0x2
        350c0c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TextArrowOffset__FlT1Uc
 * Address: 00359f70
 */
void globals::TextArrowOffset() {
    /*
        359f70:	e1a0c00d 	mov	ip, sp
        359f74:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        359f78:	e24cb004 	sub	fp, ip, #4	; 0x4
        359f7c:	e202c0ff 	and	ip, r2, #255	; 0xff
        359f80:	e24dd00c 	sub	sp, sp, #12	; 0xc
        359f84:	e5902000 	ldr	r2, [r0]
        359f88:	e592301c 	ldr	r3, [r2, #28]
        359f8c:	e3c33cff 	bic	r3, r3, #65280	; 0xff00
        359f90:	e58d1000 	str	r1, [sp]
        359f94:	e5cdc004 	strb	ip, [sp, #4]
        359f98:	e3831a02 	orr	r1, r3, #8192	; 0x2000
        359f9c:	e5a2101c 	str	r1, [r2, #28]!
        359fa0:	e5a2d030 	str	sp, [r2, #48]!
        359fa4:	e3a02801 	mov	r2, #65536	; 0x10000
        359fa8:	e3a01801 	mov	r1, #65536	; 0x10000
        359fac:	eb5fc9af 	bl	1b4c670 <$CallDrawText__FlN21>
        359fb0:	e59d0008 	ldr	r0, [sp, #8]
        359fb4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: tan
 * Address: 0035e1d4
 */
void globals::tan() {
    /*
        35e1d4:	e1a0c00d 	mov	ip, sp
        35e1d8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        35e1dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e1e0:	ed6d4206 	sfm	f4, 2, [sp, -#24]!
        35e1e4:	e92d0003 	stmdb	sp!, {r0, r1}
        35e1e8:	ecbdc102 	ldfd	f4, [sp], #8
        35e1ec:	e24dd008 	sub	sp, sp, #8	; 0x8
        35e1f0:	e1a0000d 	mov	r0, sp
        35e1f4:	eb6155fe 	bl	1bb39f4 <$feholdexcept>
        35e1f8:	ed2dc102 	stfd	f4, [sp, -#8]!
        35e1fc:	e8bd0003 	ldmia	sp!, {r0, r1}
        35e200:	eb6293f6 	bl	1c031e0 <$__fpclassifyd>
        35e204:	e3300000 	teq	r0, #0	; 0x0
        35e208:	0a000008 	beq	35e230 <tan+0x5c>
        35e20c:	e3300001 	teq	r0, #1	; 0x1
        35e210:	059f0020 	ldreq	r0, [pc, #20]	; 35e238 <tan+0x64>
        35e214:	0d90c100 	ldfeqd	f4, [r0]
        35e218:	03a00001 	moveq	r0, #1	; 0x1
        35e21c:	0a00004e 	beq	35e35c <tan+0x188>
        35e220:	e3300002 	teq	r0, #2	; 0x2
        35e224:	0a00004d 	beq	35e360 <tan+0x18c>
        35e228:	e3300063 	teq	r0, #99	; 0x63
        35e22c:	1a000002 	bne	35e23c <tan+0x68>
        35e230:	ee14418a 	mufd	f4, f4, #2.0
        35e234:	ea000049 	b	35e360 <tan+0x18c>
        35e238:	003822e4 	eoreqs	r2, r8, r4, ror #5
        35e23c:	e28d3004 	add	r3, sp, #4	; 0x4
        35e240:	e92d0008 	stmdb	sp!, {r3}
        35e244:	e59f0090 	ldr	r0, [pc, #90]	; 35e2dc <tan+0x108>
        35e248:	e890000c 	ldmia	r0, {r2, r3}
        35e24c:	ed2dc102 	stfd	f4, [sp, -#8]!
        35e250:	e8bd0003 	ldmia	sp!, {r0, r1}
        35e254:	eb615a07 	bl	1bb4a78 <$remquo>
        35e258:	e28dd004 	add	sp, sp, #4	; 0x4
        35e25c:	ee00c180 	mvfd	f4, f0
        35e260:	ee100180 	mufd	f0, f0, f0
        35e264:	e59f0074 	ldr	r0, [pc, #74]	; 35e2e0 <tan+0x10c>
        35e268:	ed909106 	ldfd	f1, [r0, #24]
        35e26c:	ee112180 	mufd	f2, f1, f0
        35e270:	ed909104 	ldfd	f1, [r0, #16]
        35e274:	ee021181 	adfd	f1, f2, f1
        35e278:	ee112180 	mufd	f2, f1, f0
        35e27c:	ed909102 	ldfd	f1, [r0, #8]
        35e280:	ee021181 	adfd	f1, f2, f1
        35e284:	ee112180 	mufd	f2, f1, f0
        35e288:	ed909100 	ldfd	f1, [r0]
        35e28c:	ee022181 	adfd	f2, f2, f1
        35e290:	e59f004c 	ldr	r0, [pc, #4c]	; 35e2e4 <tan+0x110>
        35e294:	ed909104 	ldfd	f1, [r0, #16]
        35e298:	ee211180 	sufd	f1, f1, f0
        35e29c:	ee113180 	mufd	f3, f1, f0
        35e2a0:	ed909102 	ldfd	f1, [r0, #8]
        35e2a4:	ee031181 	adfd	f1, f3, f1
        35e2a8:	ee113180 	mufd	f3, f1, f0
        35e2ac:	ed909100 	ldfd	f1, [r0]
        35e2b0:	ee031181 	adfd	f1, f3, f1
        35e2b4:	ee421181 	dvfd	f1, f2, f1
        35e2b8:	ee111180 	mufd	f1, f1, f0
        35e2bc:	ed9fa109 	ldfd	f2, [pc, #36]
        35e2c0:	eed0f112 	cmfe	f0, f2
        35e2c4:	ca000009 	bgt	35e2f0 <tan+0x11c>
        35e2c8:	ee100184 	mufd	f0, f0, f4
        35e2cc:	ee40218b 	dvfd	f2, f0, #3.0
        35e2d0:	ee100181 	mufd	f0, f0, f1
        35e2d4:	ee020180 	adfd	f0, f2, f0
        35e2d8:	ea00000d 	b	35e314 <tan+0x140>
        35e2dc:	003822dc 	ldreqsb	r2, [r8], -ip
        35e2e0:	003822bc 	ldreqh	r2, [r8], -ip
        35e2e4:	003822a4 	eoreqs	r2, r8, r4, lsr #5
        35e2e8:	3fd00000 	swicc	0x00d00000
        35e2ec:	00000000 	andeq	r0, r0, r0
        35e2f0:	ed9fb11f 	ldfd	f3, [pc, #124]
        35e2f4:	ee243183 	sufd	f3, f4, f3
        35e2f8:	ee43318b 	dvfd	f3, f3, #3.0
        35e2fc:	ee133180 	mufd	f3, f3, f0
        35e300:	ee145180 	mufd	f5, f4, f0
        35e304:	ee151181 	mufd	f1, f5, f1
        35e308:	ee031181 	adfd	f1, f3, f1
        35e30c:	ee100182 	mufd	f0, f0, f2
        35e310:	ee010180 	adfd	f0, f1, f0
        35e314:	ee004184 	adfd	f4, f0, f4
        35e318:	e59d0004 	ldr	r0, [sp, #4]
        35e31c:	e3100001 	tst	r0, #1	; 0x1
        35e320:	0a000003 	beq	35e334 <tan+0x160>
        35e324:	ee94f118 	cmf	f4, #0.0
        35e328:	0e10c184 	mnfeqd	f4, f4
        35e32c:	ee108189 	mnfd	f0, #1.0
        35e330:	ee404184 	dvfd	f4, f0, f4
        35e334:	e3a00008 	mov	r0, #8	; 0x8
        35e338:	eb6155a9 	bl	1bb39e4 <$feclearexcept>
        35e33c:	e3a00010 	mov	r0, #16	; 0x10
        35e340:	eb6155ac 	bl	1bb39f8 <$feraiseexcept>
        35e344:	ed2dc102 	stfd	f4, [sp, -#8]!
        35e348:	e8bd0003 	ldmia	sp!, {r0, r1}
        35e34c:	eb6293a3 	bl	1c031e0 <$__fpclassifyd>
        35e350:	e3300004 	teq	r0, #4	; 0x4
        35e354:	1a000001 	bne	35e360 <tan+0x18c>
        35e358:	e3a00008 	mov	r0, #8	; 0x8
        35e35c:	eb6155a5 	bl	1bb39f8 <$feraiseexcept>
        35e360:	e1a0000d 	mov	r0, sp
        35e364:	eb6159a8 	bl	1bb4a0c <$feupdateenv>
        35e368:	ee008184 	mvfd	f0, f4
        35e36c:	ed5b4209 	lfm	f4, 2, [fp, -#36]
        35e370:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        35e374:	3fe80000 	swicc	0x00e80000
        35e378:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: tanh
 * Address: 0035e37c
 */
void globals::tanh() {
    /*
        35e37c:	e1a0c00d 	mov	ip, sp
        35e380:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        35e384:	e24cb004 	sub	fp, ip, #4	; 0x4
        35e388:	ed6d4206 	sfm	f4, 2, [sp, -#24]!
        35e38c:	e92d0003 	stmdb	sp!, {r0, r1}
        35e390:	ecbdd102 	ldfd	f5, [sp], #8
        35e394:	e24dd004 	sub	sp, sp, #4	; 0x4
        35e398:	e1a0000d 	mov	r0, sp
        35e39c:	eb615594 	bl	1bb39f4 <$feholdexcept>
        35e3a0:	ed2dd102 	stfd	f5, [sp, -#8]!
        35e3a4:	e8bd0003 	ldmia	sp!, {r0, r1}
        35e3a8:	eb61558b 	bl	1bb39dc <$fabs>
        35e3ac:	ee00c180 	mvfd	f4, f0
        35e3b0:	e59f0074 	ldr	r0, [pc, #74]	; 35e42c <tanh+0xb0>
        35e3b4:	ed909100 	ldfd	f1, [r0]
        35e3b8:	eed0f111 	cmfe	f0, f1
        35e3bc:	da000007 	ble	35e3e0 <tanh+0x64>
        35e3c0:	ee10818a 	mnfd	f0, #2.0
        35e3c4:	ee140180 	mufd	f0, f4, f0
        35e3c8:	ed2d8102 	stfd	f0, [sp, -#8]!
        35e3cc:	e8bd0003 	ldmia	sp!, {r0, r1}
        35e3d0:	eb615580 	bl	1bb39d8 <$expm1>
        35e3d4:	ee00118a 	adfd	f1, f0, #2.0
        35e3d8:	ee108180 	mnfd	f0, f0
        35e3dc:	ee404181 	dvfd	f4, f0, f1
        35e3e0:	ed2dc102 	stfd	f4, [sp, -#8]!
        35e3e4:	e8bd0003 	ldmia	sp!, {r0, r1}
        35e3e8:	eb62937c 	bl	1c031e0 <$__fpclassifyd>
        35e3ec:	e3300003 	teq	r0, #3	; 0x3
        35e3f0:	0a000003 	beq	35e404 <tanh+0x88>
        35e3f4:	e3300004 	teq	r0, #4	; 0x4
        35e3f8:	1a000003 	bne	35e40c <tanh+0x90>
        35e3fc:	e3a00008 	mov	r0, #8	; 0x8
        35e400:	eb61557c 	bl	1bb39f8 <$feraiseexcept>
        35e404:	e3a00010 	mov	r0, #16	; 0x10
        35e408:	eb61557a 	bl	1bb39f8 <$feraiseexcept>
        35e40c:	e1a0000d 	mov	r0, sp
        35e410:	eb61597d 	bl	1bb4a0c <$feupdateenv>
        35e414:	ed2dd102 	stfd	f5, [sp, -#8]!
        35e418:	ed2dc102 	stfd	f4, [sp, -#8]!
        35e41c:	e8bd000f 	ldmia	sp!, {r0, r1, r2, r3}
        35e420:	eb615565 	bl	1bb39bc <$copysign>
        35e424:	ed5b4209 	lfm	f4, 2, [fp, -#36]
        35e428:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        35e42c:	003822ec 	eoreqs	r2, r8, ip, ror #5
    */
}

/**
 * Symbol: TraceAlloc(int, xrcm_type *)
 * Address: 00360c50
 */
TraceAlloc(int, xrcm_type *) {
    /*
        360c50:	e1a0c00d 	mov	ip, sp
        360c54:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        360c58:	e24cb004 	sub	fp, ip, #4	; 0x4
        360c5c:	e1a04001 	mov	r4, r1
        360c60:	e3a01eff 	mov	r1, #4080	; 0xff0
        360c64:	e5942140 	ldr	r2, [r4, #320]
        360c68:	e0020290 	mul	r2, r0, r2
        360c6c:	e0810082 	add	r0, r1, r2, lsl #1
        360c70:	e2800010 	add	r0, r0, #16	; 0x10
        360c74:	eb5c3ad0 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        360c78:	e1b06000 	movs	r6, r0
        360c7c:	03a00001 	moveq	r0, #1	; 0x1
        360c80:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        360c84:	e1a00006 	mov	r0, r6
        360c88:	e1a05006 	mov	r5, r6
        360c8c:	e3a0209c 	mov	r2, #156	; 0x9c
        360c90:	e3a01000 	mov	r1, #0	; 0x0
        360c94:	eb614f6f 	bl	1bb4a58 <$memset>
        360c98:	e5856000 	str	r6, [r5]
        360c9c:	e3a00000 	mov	r0, #0	; 0x0
        360ca0:	e3a0109c 	mov	r1, #156	; 0x9c
        360ca4:	e2855034 	add	r5, r5, #52	; 0x34
        360ca8:	e8850003 	stmia	r5, {r0, r1}
        360cac:	e525600c 	str	r6, [r5, -#12]!
        360cb0:	e2455028 	sub	r5, r5, #40	; 0x28
        360cb4:	e2861eff 	add	r1, r6, #4080	; 0xff0
        360cb8:	e5850030 	str	r0, [r5, #48]
        360cbc:	e585102c 	str	r1, [r5, #44]
        360cc0:	e5a45128 	str	r5, [r4, #296]!
        360cc4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TraceAddAlloc(xrcm_type *)
 * Address: 00360cc8
 */
TraceAddAlloc(xrcm_type *) {
    /*
        360cc8:	e1a0c00d 	mov	ip, sp
        360ccc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        360cd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        360cd4:	e5b04128 	ldr	r4, [r0, #296]!
        360cd8:	e3340000 	teq	r4, #0	; 0x0
        360cdc:	0a00000e 	beq	360d1c <TraceAddAlloc(xrcm_type *)+0x54>
        360ce0:	e5940034 	ldr	r0, [r4, #52]
        360ce4:	e3500009 	cmp	r0, #9	; 0x9
        360ce8:	aa00000b 	bge	360d1c <TraceAddAlloc(xrcm_type *)+0x54>
        360cec:	e3a00eff 	mov	r0, #4080	; 0xff0
        360cf0:	eb5c3ab1 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        360cf4:	e3300000 	teq	r0, #0	; 0x0
        360cf8:	0a000007 	beq	360d1c <TraceAddAlloc(xrcm_type *)+0x54>
        360cfc:	e5941034 	ldr	r1, [r4, #52]
        360d00:	e2811001 	add	r1, r1, #1	; 0x1
        360d04:	e5841034 	str	r1, [r4, #52]
        360d08:	e7840101 	str	r0, [r4, r1, lsl #2]
        360d0c:	e5840028 	str	r0, [r4, #40]
        360d10:	e3a00000 	mov	r0, #0	; 0x0
        360d14:	e5a40038 	str	r0, [r4, #56]!
        360d18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        360d1c:	e3a00001 	mov	r0, #1	; 0x1
        360d20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TraceDealloc(xrcm_type *)
 * Address: 00360d24
 */
TraceDealloc(xrcm_type *) {
    /*
        360d24:	e1a0c00d 	mov	ip, sp
        360d28:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        360d2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        360d30:	e1b04000 	movs	r4, r0
        360d34:	15946128 	ldrne	r6, [r4, #296]
        360d38:	13360000 	teqne	r6, #0	; 0x0
        360d3c:	0a00000b 	beq	360d70 <TraceDealloc(xrcm_type *)+0x4c>
        360d40:	e5965034 	ldr	r5, [r6, #52]
        360d44:	e3550000 	cmp	r5, #0	; 0x0
        360d48:	ba000005 	blt	360d64 <TraceDealloc(xrcm_type *)+0x40>
        360d4c:	e7960105 	ldr	r0, [r6, r5, lsl #2]
        360d50:	e3300000 	teq	r0, #0	; 0x0
        360d54:	0a000005 	beq	360d70 <TraceDealloc(xrcm_type *)+0x4c>
        360d58:	eb5c3a98 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        360d5c:	e2555001 	subs	r5, r5, #1	; 0x1
        360d60:	5afffff9 	bpl	360d4c <TraceDealloc(xrcm_type *)+0x28>
        360d64:	e3a00000 	mov	r0, #0	; 0x0
        360d68:	e5a40128 	str	r0, [r4, #296]!
        360d6c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        360d70:	e3a00001 	mov	r0, #1	; 0x1
        360d74:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDwordAdvance(int, xrcm_type *)
 * Address: 003611c4
 */
TDwordAdvance(int, xrcm_type *) {
    /*
        3611c4:	e1a0c00d 	mov	ip, sp
        3611c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        3611cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        3611d0:	e1a05000 	mov	r5, r0
        3611d4:	e1a04001 	mov	r4, r1
        3611d8:	e5910128 	ldr	r0, [r1, #296]
        3611dc:	e5900038 	ldr	r0, [r0, #56]
        3611e0:	e0801005 	add	r1, r0, r5
        3611e4:	e2411001 	sub	r1, r1, #1	; 0x1
        3611e8:	e3c11003 	bic	r1, r1, #3	; 0x3
        3611ec:	e2811004 	add	r1, r1, #4	; 0x4
        3611f0:	e3510eff 	cmp	r1, #4080	; 0xff0
        3611f4:	ba00000b 	blt	361228 <TDwordAdvance(int, xrcm_type *)+0x64>
        3611f8:	e1a00004 	mov	r0, r4
        3611fc:	eb5f41ae 	bl	1b318bc <$TraceAddAlloc(xrcm_type *)>
        361200:	e3300000 	teq	r0, #0	; 0x0
        361204:	1a00000d 	bne	361240 <TDwordAdvance(int, xrcm_type *)+0x7c>
        361208:	e5940128 	ldr	r0, [r4, #296]
        36120c:	e5900038 	ldr	r0, [r0, #56]
        361210:	e0801005 	add	r1, r0, r5
        361214:	e2411001 	sub	r1, r1, #1	; 0x1
        361218:	e3c11003 	bic	r1, r1, #3	; 0x3
        36121c:	e2811004 	add	r1, r1, #4	; 0x4
        361220:	e3510eff 	cmp	r1, #4080	; 0xff0
        361224:	aa000005 	bge	361240 <TDwordAdvance(int, xrcm_type *)+0x7c>
        361228:	e5942128 	ldr	r2, [r4, #296]
        36122c:	e5a21038 	str	r1, [r2, #56]!
        361230:	e5b41128 	ldr	r1, [r4, #296]!
        361234:	e5911028 	ldr	r1, [r1, #40]
        361238:	e0810000 	add	r0, r1, r0
        36123c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        361240:	e3a00000 	mov	r0, #0	; 0x0
        361244:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: theCirrusTemperatureTable
 * Address: 00365d94
 */
void globals::theCirrusTemperatureTable() {
    /*
        365d94:	ffffffe7 	swinv	0x00ffffe7
        365d98:	00000040 	andeq	r0, r0, r0, asr #32
        365d9c:	017d0190 	ldreqb	r0, [sp, -#16]!
        365da0:	01a401b8 	streqh	r0, [r4, r8]!
        365da4:	01ce01e4 	biceq	r0, lr, r4, ror #3
        365da8:	01fb0212 	mvneqs	r0, r2, lsl r2
        365dac:	022b0244 	eoreq	r0, fp, #1073741828	; 0x40000004
        365db0:	025e0278 	subeqs	r0, lr, #-2147483641	; 0x80000007
        365db4:	029302af 	addeqs	r0, r3, #-268435446	; 0xf000000a
        365db8:	02cc02e9 	sbceq	r0, ip, #-1879048178	; 0x9000000e
        365dbc:	03070326 	tsteq	r7, #-1744830464	; 0x98000000
        365dc0:	03450365 	cmpeq	r5, #-1811939327	; 0x94000001
        365dc4:	038603a7 	orreq	r0, r6, #-1677721598	; 0x9c000002
        365dc8:	03c903eb 	biceq	r0, r9, #-1409286141	; 0xac000003
        365dcc:	040e0432 	streq	r0, [lr], -#1074
        365dd0:	0456047b 	ldreqb	r0, [r6], -#1147
        365dd4:	04a004c5 	streqt	r0, [r0], #1221
        365dd8:	04eb0511 	streqbt	r0, [fp], #1297
        365ddc:	0537055e 	ldreq	r0, [r7, -#1374]!
        365de0:	058505ad 	streq	r0, [r5, #1453]
        365de4:	05d405fc 	ldreqb	r0, [r4, #1532]
        365de8:	0624064c 	streqt	r0, [r4], -ip, asr #12
        365dec:	0673069c 	undefined
        365df0:	06c406ec 	streqb	r0, [r4], ip, ror #13
        365df4:	0713073b 	undefined
        365df8:	0763078a 	streqb	r0, [r3, -sl, lsl #15]!
        365dfc:	07b207d9 	undefined
        365e00:	08000827 	stmeqda	r0, {r0, r1, r2, r5, fp}
        365e04:	084d0873 	stmeqda	sp, {r0, r1, r4, r5, r6, fp}^
        365e08:	089908be 	ldmeqia	r9, {r1, r2, r3, r4, r5, r7, fp}
        365e0c:	08e30908 	stmeqia	r3!, {r3, r8, fp}^
        365e10:	092c0950 	stmeqdb	ip!, {r4, r6, r8, fp}
        365e14:	09730996 	ldmeqdb	r3!, {r1, r2, r4, r7, r8, fp}^
        365e18:	09b909db 	ldmeqib	r9!, {r0, r1, r3, r4, r6, r7, r8, fp}
        365e1c:	09fc0a1d 	ldmeqib	ip!, {r0, r2, r3, r4, r9, fp}^
        365e20:	0a3e0a5e 	beq	12e87a0 <ROM$$Size+0xbc8b54>
        365e24:	0a7d0a9c 	beq	22a889c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x698044>
        365e28:	0aba0ad8 	beq	ff1e8990 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd5d8138>
        365e2c:	0af60b12 	beq	e8a7c <InitIRQTimerObject(void)+0x18>
        365e30:	0b2f0b4a 	bleq	f28b60 <ROM$$Size+0x808f14>
        365e34:	0b660b80 	bleq	1ce8c3c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xd83e4>
        365e38:	0b9a0bb4 	bleq	fe9e8d10 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcdd84b8>
        365e3c:	0bcd0be6 	bleq	ff6a8ddc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfda98584>
        365e40:	0bfe0c15 	bleq	2e8e9c <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1a0>
        365e44:	0c2c0c43 	stceq	12, cr0, [ip], -#268
        365e48:	0c590c6e 	mrrceq	12, 6, r0, r9, cr14
        365e4c:	0c830c98 	stceq	12, cr0, [r3], #608
    */
}

/**
 * Symbol: TG1
 * Address: 00374f44
 */
void globals::TG1() {
    /*
        374f44:	00000023 	andeq	r0, r0, r3, lsr #32
        374f48:	00000023 	andeq	r0, r0, r3, lsr #32
        374f4c:	00000023 	andeq	r0, r0, r3, lsr #32
        374f50:	00000023 	andeq	r0, r0, r3, lsr #32
        374f64:	00000023 	andeq	r0, r0, r3, lsr #32
        374f68:	00000032 	andeq	r0, r0, r2, lsr r0
        374f6c:	00000032 	andeq	r0, r0, r2, lsr r0
        374f70:	00000032 	andeq	r0, r0, r2, lsr r0
    */
}

/**
 * Symbol: TG2
 * Address: 00374f74
 */
void globals::TG2() {
    /*
        374f74:	00000023 	andeq	r0, r0, r3, lsr #32
        374f78:	0000002d 	andeq	r0, r0, sp, lsr #32
        374f7c:	00000023 	andeq	r0, r0, r3, lsr #32
        374f80:	00000023 	andeq	r0, r0, r3, lsr #32
        374f84:	0000002d 	andeq	r0, r0, sp, lsr #32
        374f88:	0000002d 	andeq	r0, r0, sp, lsr #32
        374f8c:	0000002d 	andeq	r0, r0, sp, lsr #32
        374f90:	0000002d 	andeq	r0, r0, sp, lsr #32
        374f94:	00000023 	andeq	r0, r0, r3, lsr #32
        374f98:	00000032 	andeq	r0, r0, r2, lsr r0
        374f9c:	00000032 	andeq	r0, r0, r2, lsr r0
        374fa0:	00000032 	andeq	r0, r0, r2, lsr r0
    */
}

/**
 * Symbol: ts_xrws_v
 * Address: 003750ac
 */
void globals::ts_xrws_v() {
    /*
        3750ac:	0a0a1414 	beq	5fa104 <SYMdtem+0x32d70>
        3750b0:	1414141e 	ldrne	r1, [r4], -#1054
        3750b4:	3c5a0000 	mracc	r0, sl, acc0
    */
}

/**
 * Symbol: ts_xrlws
 * Address: 003750c4
 */
void globals::ts_xrlws() {
    /*
        3750c4:	050a0a12 	streq	r0, [sl, -#2578]
        3750c8:	14141919 	ldrne	r1, [r4], -#2329
        3750cc:	191e0000 	ldmnedb	lr, {}
    */
}

/**
 * Symbol: ts_xrspl
 * Address: 003750dc
 */
void globals::ts_xrspl() {
    /*
        3750dc:	0a141e28 	beq	87c984 <ROM$$Size+0x15cd38>
        3750e0:	323c4650 	eorccs	r4, ip, #83886080	; 0x5000000
        3750e4:	5a630000 	bpl	1c350ec <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x24894>
    */
}

/**
 * Symbol: ts_xrws_nv
 * Address: 003750f4
 */
void globals::ts_xrws_nv() {
    /*
        3750f4:	02020303 	andeq	r0, r2, #201326592	; 0xc000000
        3750f8:	04050709 	streq	r0, [r5], -#1801
        3750fc:	0c100000 	ldceq	0, cr0, [r0]
    */
}

/**
 * Symbol: triads_mapping
 * Address: 00376940
 */
void globals::triads_mapping() {
    /*
        376960:	01000000 	tsteq	r0, r0
        376964:	00000028 	andeq	r0, r0, r8, lsr #32
        376968:	00000000 	andeq	r0, r0, r0
        37696c:	00000063 	andeq	r0, r0, r3, rrx
        376980:	62020304 	andvs	r0, r2, #268435456	; 0x10000000
        376984:	05060708 	streq	r0, [r6, -#1800]
        376988:	090a0b0c 	stmeqdb	sl, {r2, r3, r8, r9, fp}
        37698c:	0d0e0f10 	stceq	15, cr0, [lr, -#64]
        376990:	11121314 	tstne	r2, r4, lsl r3
        376994:	15161718 	ldrne	r1, [r6, -#1816]
        376998:	191a1b00 	ldmnedb	sl, {r8, r9, fp, ip}
        37699c:	00000000 	andeq	r0, r0, r0
        3769a0:	00020304 	andeq	r0, r2, r4, lsl #6
        3769a4:	05060708 	streq	r0, [r6, -#1800]
        3769a8:	090a0b0c 	stmeqdb	sl, {r2, r3, r8, r9, fp}
        3769ac:	0d0e0f10 	stceq	15, cr0, [lr, -#64]
        3769b0:	11121314 	tstne	r2, r4, lsl r3
        3769b4:	15161718 	ldrne	r1, [r6, -#1816]
        3769b8:	191a1b00 	ldmnedb	sl, {r8, r9, fp, ip}
        3769bc:	00000000 	andeq	r0, r0, r0
        3769c0:	1d1c1e1f 	ldcne	14, cr1, [ip, -#124]
        3769c4:	0f212202 	swieq	0x00212202
        3769c8:	1d231d02 	stcne	13, cr1, [r3, -#8]!
        3769cc:	1c1e1f24 	ldcne	15, cr1, [lr], -#144
        3769d0:	25060a0a 	strcs	r0, [r6, -#2570]
        3769d4:	26200f10 	undefined
        3769d8:	10212110 	eorne	r2, r1, r0, lsl r1
        3769dc:	16222722 	strnet	r2, [r2], -r2, lsr #14
        3769e0:	00000000 	andeq	r0, r0, r0
        3769e4:	00000014 	andeq	r0, r0, r4, lsl r0
        376a08:	0000001d 	andeq	r0, r0, sp, lsl r0
        376a0c:	02100000 	andeqs	r0, r0, #0	; 0x0
        376a18:	1a1a0000 	bne	9f6a20 <ROM$$Size+0x2d6dd4>
        376a24:	00232502 	eoreq	r2, r3, r2, lsl #10
        376a28:	06240926 	streqt	r0, [r4], -r6, lsr #18
        376a2c:	20091021 	andcs	r1, r9, r1, lsr #32
        376a30:	00101627 	andeqs	r1, r0, r7, lsr #12
        376a34:	22000000 	andcs	r0, r0, #0	; 0x0
    */
}

/**
 * Symbol: TapFileCntl
 * Address: 0038ce7c
 */
void globals::TapFileCntl() {
    /*
        38ce7c:	e6000810 	undefined
    */
}

