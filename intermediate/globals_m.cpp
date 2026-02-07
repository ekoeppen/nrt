#include "Newton.h"

/**
 * Symbol: MapDegrees
 * Address: 00030c3c
 */
void globals::MapDegrees() {
    /*
         30c3c:	e350072d 	cmp	r0, #11796480	; 0xb40000
         30c40:	da000002 	ble	30c50 <MapDegrees+0x14>
         30c44:	e240075a 	sub	r0, r0, #23592960	; 0x1680000
         30c48:	e350072d 	cmp	r0, #11796480	; 0xb40000
         30c4c:	cafffffc 	bgt	30c44 <MapDegrees+0x8>
         30c50:	e370072d 	cmn	r0, #11796480	; 0xb40000
         30c54:	c1a0f00e 	movgt	pc, lr
         30c58:	e280075a 	add	r0, r0, #23592960	; 0x1680000
         30c5c:	e370072d 	cmn	r0, #11796480	; 0xb40000
         30c60:	dafffffc 	ble	30c58 <MapDegrees+0x1c>
         30c64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MidAngle
 * Address: 00030c9c
 */
void globals::MidAngle() {
    /*
         30c9c:	e1a0c00d 	mov	ip, sp
         30ca0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         30ca4:	e24cb004 	sub	fp, ip, #4	; 0x4
         30ca8:	e1a04000 	mov	r4, r0
         30cac:	eb6cb473 	bl	1b5de80 <$DeltaAngle>
         30cb0:	e1a000c0 	mov	r0, r0, asr #1
         30cb4:	e1a01004 	mov	r1, r4
         30cb8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         30cbc:	ea6ca827 	b	1b5ad60 <$AddAngle>
    */
}

/**
 * Symbol: MakeOptionArray(TOptionArray *)
 * Address: 000325ac
 */
MakeOptionArray(TOptionArray *) {
    /*
         325ac:	ea6e19b2 	b	1bb8c7c <TOptionArray::$Init(void)>
    */
}

/**
 * Symbol: MakeRunScriptCommand__FRC6RefVarN21
 * Address: 0003450c
 */
void globals::MakeRunScriptCommand() {
    /*
         3450c:	e1a0c00d 	mov	ip, sp
         34510:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         34514:	e24cb004 	sub	fp, ip, #4	; 0x4
         34518:	e1a05000 	mov	r5, r0
         3451c:	e1a04001 	mov	r4, r1
         34520:	e1a06002 	mov	r6, r2
         34524:	e24dd008 	sub	sp, sp, #8	; 0x8
         34528:	e59f0098 	ldr	r0, [pc, #98]	; 345c8 <MakeRunScriptCommand__FRC6RefVarN21+0xbc>
         3452c:	e3a02302 	mov	r2, #134217728	; 0x8000000
         34530:	e5901000 	ldr	r1, [r0]
         34534:	e3a00071 	mov	r0, #113	; 0x71
         34538:	eb69c780 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         3453c:	eb6e3702 	bl	1bc214c <$AllocateRefHandle(long)>
         34540:	e58d0004 	str	r0, [sp, #4]
         34544:	e3a00003 	mov	r0, #3	; 0x3
         34548:	eb699e13 	bl	1a9bd9c <$MakeArray(long)>
         3454c:	eb6e36fe 	bl	1bc214c <$AllocateRefHandle(long)>
         34550:	e58d0000 	str	r0, [sp]
         34554:	e5950000 	ldr	r0, [r5]
         34558:	e3a01002 	mov	r1, #2	; 0x2
         3455c:	e5902000 	ldr	r2, [r0]
         34560:	e59d0000 	ldr	r0, [sp]
         34564:	e5900000 	ldr	r0, [r0]
         34568:	eb6e477a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         3456c:	e5940000 	ldr	r0, [r4]
         34570:	e3a01000 	mov	r1, #0	; 0x0
         34574:	e5902000 	ldr	r2, [r0]
         34578:	e59d0000 	ldr	r0, [sp]
         3457c:	e5900000 	ldr	r0, [r0]
         34580:	eb6e4774 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         34584:	e5960000 	ldr	r0, [r6]
         34588:	e3a01001 	mov	r1, #1	; 0x1
         3458c:	e5902000 	ldr	r2, [r0]
         34590:	e59d0000 	ldr	r0, [sp]
         34594:	e5900000 	ldr	r0, [r0]
         34598:	eb6e476e 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         3459c:	e1a0100d 	mov	r1, sp
         345a0:	e28d0004 	add	r0, sp, #4	; 0x4
         345a4:	eb69c76e 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
         345a8:	e59d0004 	ldr	r0, [sp, #4]
         345ac:	e5904000 	ldr	r4, [r0]
         345b0:	e59d0000 	ldr	r0, [sp]
         345b4:	eb6e3b00 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         345b8:	e59d0004 	ldr	r0, [sp, #4]
         345bc:	eb6e3afe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         345c0:	e1a00004 	mov	r0, r4
         345c4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         345c8:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: MakeUndoCommand__FRC6RefVarN21
 * Address: 000345cc
 */
void globals::MakeUndoCommand() {
    /*
         345cc:	e1a0c00d 	mov	ip, sp
         345d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         345d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         345d8:	e1a05000 	mov	r5, r0
         345dc:	e1a04001 	mov	r4, r1
         345e0:	e1a06002 	mov	r6, r2
         345e4:	e24dd008 	sub	sp, sp, #8	; 0x8
         345e8:	e59f009c 	ldr	r0, [pc, #9c]	; 3468c <MakeUndoCommand__FRC6RefVarN21+0xc0>
         345ec:	e3a02302 	mov	r2, #134217728	; 0x8000000
         345f0:	e5901000 	ldr	r1, [r0]
         345f4:	e3a00071 	mov	r0, #113	; 0x71
         345f8:	eb69c750 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
         345fc:	eb6e36d2 	bl	1bc214c <$AllocateRefHandle(long)>
         34600:	e58d0004 	str	r0, [sp, #4]
         34604:	e59f0084 	ldr	r0, [pc, #84]	; 34690 <MakeUndoCommand__FRC6RefVarN21+0xc4>
         34608:	e3a01003 	mov	r1, #3	; 0x3
         3460c:	eb6e36c9 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         34610:	eb6e36cd 	bl	1bc214c <$AllocateRefHandle(long)>
         34614:	e58d0000 	str	r0, [sp]
         34618:	e5950000 	ldr	r0, [r5]
         3461c:	e3a01002 	mov	r1, #2	; 0x2
         34620:	e5902000 	ldr	r2, [r0]
         34624:	e59d0000 	ldr	r0, [sp]
         34628:	e5900000 	ldr	r0, [r0]
         3462c:	eb6e4749 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         34630:	e5940000 	ldr	r0, [r4]
         34634:	e3a01000 	mov	r1, #0	; 0x0
         34638:	e5902000 	ldr	r2, [r0]
         3463c:	e59d0000 	ldr	r0, [sp]
         34640:	e5900000 	ldr	r0, [r0]
         34644:	eb6e4743 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         34648:	e5960000 	ldr	r0, [r6]
         3464c:	e3a01001 	mov	r1, #1	; 0x1
         34650:	e5902000 	ldr	r2, [r0]
         34654:	e59d0000 	ldr	r0, [sp]
         34658:	e5900000 	ldr	r0, [r0]
         3465c:	eb6e473d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         34660:	e1a0100d 	mov	r1, sp
         34664:	e28d0004 	add	r0, sp, #4	; 0x4
         34668:	eb69c73d 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
         3466c:	e59d0004 	ldr	r0, [sp, #4]
         34670:	e5904000 	ldr	r4, [r0]
         34674:	e59d0000 	ldr	r0, [sp]
         34678:	eb6e3acf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3467c:	e59d0004 	ldr	r0, [sp, #4]
         34680:	eb6e3acd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         34684:	e1a00004 	mov	r0, r4
         34688:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         3468c:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         34690:	00684cd8 	ldreqd	r4, [r8], -#200
    */
}

/**
 * Symbol: MakeArea(TController *, TView *, unsigned long)
 * Address: 00035434
 */
MakeArea(TController *, TView *, unsigned long) {
    /*
         35434:	e1a0c00d 	mov	ip, sp
         35438:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3543c:	e24cb004 	sub	fp, ip, #4	; 0x4
         35440:	e1a06000 	mov	r6, r0
         35444:	e1a05001 	mov	r5, r1
         35448:	e1a04002 	mov	r4, r2
         3544c:	e24dd004 	sub	sp, sp, #4	; 0x4
         35450:	e3a00002 	mov	r0, #2	; 0x2
         35454:	eb6e333c 	bl	1bc214c <$AllocateRefHandle(long)>
         35458:	e58d0000 	str	r0, [sp]
         3545c:	e1a0300d 	mov	r3, sp
         35460:	e1a02004 	mov	r2, r4
         35464:	e1a01005 	mov	r1, r5
         35468:	e1a00006 	mov	r0, r6
         3546c:	eb6a0197 	bl	1ab5ad0 <$MakeArea(TController *, TView *, unsigned long, RefVar const &)>
         35470:	e1a04000 	mov	r4, r0
         35474:	e59d0000 	ldr	r0, [sp]
         35478:	eb6e374f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3547c:	e1a00004 	mov	r0, r4
         35480:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: MakeArea(TController *, TView *, unsigned long, RefVar const &)
 * Address: 00035484
 */
MakeArea(TController *, TView *, unsigned long, RefVar const &) {
    /*
         35484:	e1a0c00d 	mov	ip, sp
         35488:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         3548c:	e24cb004 	sub	fp, ip, #4	; 0x4
         35490:	e1a06000 	mov	r6, r0
         35494:	e1a04001 	mov	r4, r1
         35498:	e1a05002 	mov	r5, r2
         3549c:	e24dd004 	sub	sp, sp, #4	; 0x4
         354a0:	e5930000 	ldr	r0, [r3]
         354a4:	e5900000 	ldr	r0, [r0]
         354a8:	eb6e3327 	bl	1bc214c <$AllocateRefHandle(long)>
         354ac:	e3a01000 	mov	r1, #0	; 0x0
         354b0:	e58d0000 	str	r0, [sp]
         354b4:	e3a00000 	mov	r0, #0	; 0x0
         354b8:	eb6caef8 	bl	1b610a0 <$Make__8TRecAreaSFUlT1>
         354bc:	e1b07000 	movs	r7, r0
         354c0:	0a000013 	beq	35514 <MakeArea(TController *, TView *, unsigned long, RefVar const &)+0x90>
         354c4:	e3340000 	teq	r4, #0	; 0x0
         354c8:	0a000003 	beq	354dc <MakeArea(TController *, TView *, unsigned long, RefVar const &)+0x58>
         354cc:	e1a01005 	mov	r1, r5
         354d0:	e1a00004 	mov	r0, r4
         354d4:	eb69cff2 	bl	1aa94a4 <$BuildRecConfig(TView *, unsigned long)>
         354d8:	ea000002 	b	354e8 <MakeArea(TController *, TView *, unsigned long, RefVar const &)+0x64>
         354dc:	e1a0100d 	mov	r1, sp
         354e0:	e3a00000 	mov	r0, #0	; 0x0
         354e4:	eb69cfeb 	bl	1aa9498 <$BuildRCProto(TView *, RefVar const &)>
         354e8:	e59d1000 	ldr	r1, [sp]
         354ec:	e5810000 	str	r0, [r1]
         354f0:	e1a0100d 	mov	r1, sp
         354f4:	e1a00007 	mov	r0, r7
         354f8:	eb6a1605 	bl	1abad14 <$SetUpArea(TRecArea *, RefVar const &)>
         354fc:	e1a01007 	mov	r1, r7
         35500:	e1a00006 	mov	r0, r6
         35504:	eb6c9a2e 	bl	1b5bdc4 <TController::$BuildGTypes(TRecArea *)>
         35508:	e1a0100d 	mov	r1, sp
         3550c:	e1a00007 	mov	r0, r7
         35510:	eb69d827 	bl	1aab5b4 <$ConfigureArea(TRecArea *, RefVar const &)>
         35514:	e59d0000 	ldr	r0, [sp]
         35518:	eb6e3727 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3551c:	e1a00007 	mov	r0, r7
         35520:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MakeCharArea__FP11TControllerlT2P5TRect
 * Address: 00035a50
 */
void globals::MakeCharArea() {
    /*
         35a50:	e1a0c00d 	mov	ip, sp
         35a54:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         35a58:	e24cb004 	sub	fp, ip, #4	; 0x4
         35a5c:	e1a06000 	mov	r6, r0
         35a60:	e1a05001 	mov	r5, r1
         35a64:	e1a07002 	mov	r7, r2
         35a68:	e1a04003 	mov	r4, r3
         35a6c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         35a70:	e59f1130 	ldr	r1, [pc, #130]	; 35ba8 <MakeCharArea__FP11TControllerlT2P5TRect+0x158>
         35a74:	e3a00000 	mov	r0, #0	; 0x0
         35a78:	eb69ce86 	bl	1aa9498 <$BuildRCProto(TView *, RefVar const &)>
         35a7c:	eb6e31b2 	bl	1bc214c <$AllocateRefHandle(long)>
         35a80:	e58d0008 	str	r0, [sp, #8]
         35a84:	e2850902 	add	r0, r5, #32768	; 0x8000
         35a88:	e1a00840 	mov	r0, r0, asr #16
         35a8c:	e5cd0001 	strb	r0, [sp, #1]
         35a90:	e1a00420 	mov	r0, r0, lsr #8
         35a94:	e44d0004 	strb	r0, [sp], -#4
         35a98:	e2870902 	add	r0, r7, #32768	; 0x8000
         35a9c:	e1a00840 	mov	r0, r0, asr #16
         35aa0:	e5cd0007 	strb	r0, [sp, #7]
         35aa4:	e1a00420 	mov	r0, r0, lsr #8
         35aa8:	e5cd0006 	strb	r0, [sp, #6]
         35aac:	e3a05000 	mov	r5, #0	; 0x0
         35ab0:	e58d5008 	str	r5, [sp, #8]
         35ab4:	e28d0004 	add	r0, sp, #4	; 0x4
         35ab8:	eb6a14af 	bl	1abad7c <$ToObject(WordBaseInfo *)>
         35abc:	eb6e31a2 	bl	1bc214c <$AllocateRefHandle(long)>
         35ac0:	e58d0000 	str	r0, [sp]
         35ac4:	e1a0200d 	mov	r2, sp
         35ac8:	e59f10dc 	ldr	r1, [pc, #dc]	; 35bac <MakeCharArea__FP11TControllerlT2P5TRect+0x15c>
         35acc:	e28d000c 	add	r0, sp, #12	; 0xc
         35ad0:	eb6e4224 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         35ad4:	e24dd00c 	sub	sp, sp, #12	; 0xc
         35ad8:	e5940002 	ldr	r0, [r4, #2]
         35adc:	e1a00820 	mov	r0, r0, lsr #16
         35ae0:	e5cd0007 	strb	r0, [sp, #7]
         35ae4:	e1a00440 	mov	r0, r0, asr #8
         35ae8:	e5cd0006 	strb	r0, [sp, #6]
         35aec:	e5940006 	ldr	r0, [r4, #6]
         35af0:	e1a00820 	mov	r0, r0, lsr #16
         35af4:	e5cd0009 	strb	r0, [sp, #9]
         35af8:	e1a00440 	mov	r0, r0, asr #8
         35afc:	e5cd0008 	strb	r0, [sp, #8]
         35b00:	e5cd500b 	strb	r5, [sp, #11]
         35b04:	e5cd500a 	strb	r5, [sp, #10]
         35b08:	e5940000 	ldr	r0, [r4]
         35b0c:	e1a00820 	mov	r0, r0, lsr #16
         35b10:	e5cd0001 	strb	r0, [sp, #1]
         35b14:	e1a00440 	mov	r0, r0, asr #8
         35b18:	e5cd0000 	strb	r0, [sp]
         35b1c:	e5940004 	ldr	r0, [r4, #4]
         35b20:	e1a00820 	mov	r0, r0, lsr #16
         35b24:	e5cd0003 	strb	r0, [sp, #3]
         35b28:	e1a00440 	mov	r0, r0, asr #8
         35b2c:	e5cd0002 	strb	r0, [sp, #2]
         35b30:	e5cd5005 	strb	r5, [sp, #5]
         35b34:	e5cd5004 	strb	r5, [sp, #4]
         35b38:	e1a0000d 	mov	r0, sp
         35b3c:	eb6a148d 	bl	1abad78 <$ToObject(RecGridInfo *)>
         35b40:	e59d100c 	ldr	r1, [sp, #12]
         35b44:	e28d200c 	add	r2, sp, #12	; 0xc
         35b48:	e5810000 	str	r0, [r1]
         35b4c:	e59f105c 	ldr	r1, [pc, #5c]	; 35bb0 <MakeCharArea__FP11TControllerlT2P5TRect+0x160>
         35b50:	e28d0018 	add	r0, sp, #24	; 0x18
         35b54:	eb6e4203 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         35b58:	e59f0054 	ldr	r0, [pc, #54]	; 35bb4 <MakeCharArea__FP11TControllerlT2P5TRect+0x164>
         35b5c:	e5900000 	ldr	r0, [r0]
         35b60:	e5d00021 	ldrb	r0, [r0, #33]
         35b64:	e3300000 	teq	r0, #0	; 0x0
         35b68:	059f0048 	ldreq	r0, [pc, #48]	; 35bb8 <MakeCharArea__FP11TControllerlT2P5TRect+0x168>
         35b6c:	159f0048 	ldrne	r0, [pc, #48]	; 35bbc <MakeCharArea__FP11TControllerlT2P5TRect+0x16c>
         35b70:	e59f1048 	ldr	r1, [pc, #48]	; 35bc0 <MakeCharArea__FP11TControllerlT2P5TRect+0x170>
         35b74:	e28d3018 	add	r3, sp, #24	; 0x18
         35b78:	e5a10034 	str	r0, [r1, #52]!
         35b7c:	e1a00006 	mov	r0, r6
         35b80:	e3a02000 	mov	r2, #0	; 0x0
         35b84:	e3a01000 	mov	r1, #0	; 0x0
         35b88:	eb69ffd0 	bl	1ab5ad0 <$MakeArea(TController *, TView *, unsigned long, RefVar const &)>
         35b8c:	e1a04000 	mov	r4, r0
         35b90:	e59d000c 	ldr	r0, [sp, #12]
         35b94:	eb6e3588 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         35b98:	e59d0018 	ldr	r0, [sp, #24]
         35b9c:	eb6e3586 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         35ba0:	e1a00004 	mov	r0, r4
         35ba4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         35ba8:	00680a70 	rsbeq	r0, r8, r0, ror sl
         35bac:	006840e8 	rsbeq	r4, r8, r8, ror #1
         35bb0:	006840f0 	streqd	r4, [r8]
         35bb4:	0c101880 	ldceq	8, cr1, [r0], -#512
         35bb8:	01a98c08 	moveq	r8, r8, lsl #24
         35bbc:	01b831c0 	moveqs	r3, r0, asr #3
         35bc0:	0c106e88 	ldceq	14, cr6, [r0], -#544
    */
}

/**
 * Symbol: MakeRerecognizeArea(TController *, RefVar const &)
 * Address: 00035bc4
 */
MakeRerecognizeArea(TController *, RefVar const &) {
    /*
         35bc4:	e3a03000 	mov	r3, #0	; 0x0
         35bc8:	e59f2020 	ldr	r2, [pc, #20]	; 35bf0 <MakeRerecognizeArea(TController *, RefVar const &)+0x2c>
         35bcc:	e5a23034 	str	r3, [r2, #52]!
         35bd0:	e5912000 	ldr	r2, [r1]
         35bd4:	e5922000 	ldr	r2, [r2]
         35bd8:	e3320002 	teq	r2, #2	; 0x2
         35bdc:	11a03001 	movne	r3, r1
         35be0:	059f300c 	ldreq	r3, [pc, #c]	; 35bf4 <MakeRerecognizeArea(TController *, RefVar const &)+0x30>
         35be4:	e3a02000 	mov	r2, #0	; 0x0
         35be8:	e3a01000 	mov	r1, #0	; 0x0
         35bec:	ea69ffb7 	b	1ab5ad0 <$MakeArea(TController *, TView *, unsigned long, RefVar const &)>
         35bf0:	0c106e88 	ldceq	14, cr6, [r0], -#544
         35bf4:	0067fec8 	rsbeq	pc, r7, r8, asr #29
    */
}

/**
 * Symbol: MakePixelsObject__FR5TRectlN32RC6RefVarN26
 * Address: 000415a4
 */
void globals::MakePixelsObject() {
    /*
         415a4:	e1a0c00d 	mov	ip, sp
         415a8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         415ac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         415b0:	e24cb014 	sub	fp, ip, #20	; 0x14
         415b4:	e1a04000 	mov	r4, r0
         415b8:	e1a05002 	mov	r5, r2
         415bc:	e59b801c 	ldr	r8, [fp, #28]
         415c0:	e59b9018 	ldr	r9, [fp, #24]
         415c4:	e59ba014 	ldr	sl, [fp, #20]
         415c8:	e24dd004 	sub	sp, sp, #4	; 0x4
         415cc:	e5901004 	ldr	r1, [r0, #4]
         415d0:	e1a01841 	mov	r1, r1, asr #16
         415d4:	e5900000 	ldr	r0, [r0]
         415d8:	e0410840 	sub	r0, r1, r0, asr #16
         415dc:	e0000095 	mul	r0, r5, r0
         415e0:	e280601c 	add	r6, r0, #28	; 0x1c
         415e4:	e3a00002 	mov	r0, #2	; 0x2
         415e8:	eb6e02d7 	bl	1bc214c <$AllocateRefHandle(long)>
         415ec:	e58d0000 	str	r0, [sp]
         415f0:	e5990000 	ldr	r0, [r9]
         415f4:	e5900000 	ldr	r0, [r0]
         415f8:	e59f7084 	ldr	r7, [pc, #84]	; 41684 <MakePixelsObject__FR5TRectlN32RC6RefVarN26+0xe0>
         415fc:	e3300002 	teq	r0, #2	; 0x2
         41600:	0a000025 	beq	4169c <MakePixelsObject__FR5TRectlN32RC6RefVarN26+0xf8>
         41604:	e24dd004 	sub	sp, sp, #4	; 0x4
         41608:	e5980000 	ldr	r0, [r8]
         4160c:	e5900000 	ldr	r0, [r0]
         41610:	eb6e02cd 	bl	1bc214c <$AllocateRefHandle(long)>
         41614:	e40d0004 	str	r0, [sp], -#4
         41618:	e5980000 	ldr	r0, [r8]
         4161c:	e5900000 	ldr	r0, [r0]
         41620:	e3300002 	teq	r0, #2	; 0x2
         41624:	1a000003 	bne	41638 <MakePixelsObject__FR5TRectlN32RC6RefVarN26+0x94>
         41628:	e28f0f16 	add	r0, pc, #88	; 0x58
         4162c:	eb6e0f27 	bl	1bc52d0 <$MakeString(char const *)>
         41630:	e59d1004 	ldr	r1, [sp, #4]
         41634:	e5810000 	str	r0, [r1]
         41638:	e59b3020 	ldr	r3, [fp, #32]
         4163c:	e92d0008 	stmdb	sp!, {r3}
         41640:	e1a00106 	mov	r0, r6, lsl #2
         41644:	eb6e02c0 	bl	1bc214c <$AllocateRefHandle(long)>
         41648:	e58d0004 	str	r0, [sp, #4]
         4164c:	e28d2004 	add	r2, sp, #4	; 0x4
         41650:	e28d3008 	add	r3, sp, #8	; 0x8
         41654:	e1a01007 	mov	r1, r7
         41658:	e1a00009 	mov	r0, r9
         4165c:	eb680f14 	bl	1a452b4 <$FLBAllocCompressed>
         41660:	e28dd004 	add	sp, sp, #4	; 0x4
         41664:	e59d1008 	ldr	r1, [sp, #8]
         41668:	e5810000 	str	r0, [r1]
         4166c:	e59d0000 	ldr	r0, [sp]
         41670:	eb6e06d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         41674:	e5bd0004 	ldr	r0, [sp, #4]!
         41678:	eb6e06cf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         4167c:	e28dd004 	add	sp, sp, #4	; 0x4
         41680:	ea00000a 	b	416b0 <MakePixelsObject__FR5TRectlN32RC6RefVarN26+0x10c>
         41684:	00683ee0 	rsbeq	r3, r8, r0, ror #29
         41688:	54506978 	ldrplb	r6, [r0], -#2424
         4168c:	656c4d61 	strvsb	r4, [ip, -#3425]!
         41690:	70436f6d 	subvc	r6, r3, sp, ror #30
         41694:	70616e64 	rsbvc	r6, r1, r4, ror #28
         41698:	65720000 	ldrvsb	r0, [r2]!
         4169c:	e1a01006 	mov	r1, r6
         416a0:	e1a00007 	mov	r0, r7
         416a4:	eb6e02a4 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         416a8:	e59d1000 	ldr	r1, [sp]
         416ac:	e5810000 	str	r0, [r1]
         416b0:	e24dd004 	sub	sp, sp, #4	; 0x4
         416b4:	e28d1004 	add	r1, sp, #4	; 0x4
         416b8:	e1a0000d 	mov	r0, sp
         416bc:	eb6dfe85 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         416c0:	e1a0000d 	mov	r0, sp
         416c4:	eb6e0292 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         416c8:	e3a0101c 	mov	r1, #28	; 0x1c
         416cc:	e5801000 	str	r1, [r0]
         416d0:	e5c05005 	strb	r5, [r0, #5]
         416d4:	e1a01445 	mov	r1, r5, asr #8
         416d8:	e5c01004 	strb	r1, [r0, #4]
         416dc:	e2801008 	add	r1, r0, #8	; 0x8
         416e0:	e8945000 	ldmia	r4, {ip, lr}
         416e4:	e8815000 	stmia	r1, {ip, lr}
         416e8:	e59b1008 	ldr	r1, [fp, #8]
         416ec:	e2811a01 	add	r1, r1, #4096	; 0x1000
         416f0:	e2811102 	add	r1, r1, #-2147483648	; 0x80000000
         416f4:	e5801010 	str	r1, [r0, #16]
         416f8:	e59b1010 	ldr	r1, [fp, #16]
         416fc:	e5c01017 	strb	r1, [r0, #23]
         41700:	e1a01441 	mov	r1, r1, asr #8
         41704:	e5c01016 	strb	r1, [r0, #22]
         41708:	e5c0a015 	strb	sl, [r0, #21]
         4170c:	e1a0144a 	mov	r1, sl, asr #8
         41710:	e5c01014 	strb	r1, [r0, #20]
         41714:	e3a01000 	mov	r1, #0	; 0x0
         41718:	e5a01018 	str	r1, [r0, #24]!
         4171c:	e59d0004 	ldr	r0, [sp, #4]
         41720:	e5904000 	ldr	r4, [r0]
         41724:	e1a0000d 	mov	r0, sp
         41728:	eb6e0274 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         4172c:	e59d0004 	ldr	r0, [sp, #4]
         41730:	eb6e06a1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         41734:	e1a00004 	mov	r0, r4
         41738:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakePrimaryMMUTable
 * Address: 0004590c
 */
void globals::MakePrimaryMMUTable() {
    /*
         4590c:	e1a0c00d 	mov	ip, sp
         45910:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         45914:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         45918:	e24cb014 	sub	fp, ip, #20	; 0x14
         4591c:	e1a04000 	mov	r4, r0
         45920:	e202a0ff 	and	sl, r2, #255	; 0xff
         45924:	e20390ff 	and	r9, r3, #255	; 0xff
         45928:	e3a06000 	mov	r6, #0	; 0x0
         4592c:	e59b5008 	ldr	r5, [fp, #8]
         45930:	e5900000 	ldr	r0, [r0]
         45934:	e3700001 	cmn	r0, #1	; 0x1
         45938:	0a000031 	beq	45a04 <MakePrimaryMMUTable+0xf8>
         4593c:	e20980ff 	and	r8, r9, #255	; 0xff
         45940:	e5940000 	ldr	r0, [r4]
         45944:	e1560000 	cmp	r6, r0
         45948:	2a00000e 	bcs	45988 <MakePrimaryMMUTable+0x7c>
         4594c:	e3a07000 	mov	r7, #0	; 0x0
         45950:	e33a0000 	teq	sl, #0	; 0x0
         45954:	0a000006 	beq	45974 <MakePrimaryMMUTable+0x68>
         45958:	e3380000 	teq	r8, #0	; 0x0
         4595c:	0a000003 	beq	45970 <MakePrimaryMMUTable+0x64>
         45960:	e1a01007 	mov	r1, r7
         45964:	e1a00005 	mov	r0, r5
         45968:	ebff4cdc 	bl	18ce0 <StoreToPhysAddress>
         4596c:	ea000000 	b	45974 <MakePrimaryMMUTable+0x68>
         45970:	e5857000 	str	r7, [r5]
         45974:	e2855004 	add	r5, r5, #4	; 0x4
         45978:	e2866601 	add	r6, r6, #1048576	; 0x100000
         4597c:	e5940000 	ldr	r0, [r4]
         45980:	e1560000 	cmp	r6, r0
         45984:	3afffff1 	bcc	45950 <MakePrimaryMMUTable+0x44>
         45988:	e3a07000 	mov	r7, #0	; 0x0
         4598c:	e5940008 	ldr	r0, [r4, #8]
         45990:	e3500000 	cmp	r0, #0	; 0x0
         45994:	9a000017 	bls	459f8 <MakePrimaryMMUTable+0xec>
         45998:	e594000c 	ldr	r0, [r4, #12]
         4599c:	e3100001 	tst	r0, #1	; 0x1
         459a0:	e1a01008 	mov	r1, r8
         459a4:	e5942004 	ldr	r2, [r4, #4]
         459a8:	0a000003 	beq	459bc <MakePrimaryMMUTable+0xb0>
         459ac:	e1820000 	orr	r0, r2, r0
         459b0:	e3310000 	teq	r1, #0	; 0x0
         459b4:	0a000008 	beq	459dc <MakePrimaryMMUTable+0xd0>
         459b8:	ea000003 	b	459cc <MakePrimaryMMUTable+0xc0>
         459bc:	e0822007 	add	r2, r2, r7
         459c0:	e1820000 	orr	r0, r2, r0
         459c4:	e3310000 	teq	r1, #0	; 0x0
         459c8:	0a000003 	beq	459dc <MakePrimaryMMUTable+0xd0>
         459cc:	e1a01000 	mov	r1, r0
         459d0:	e1a00005 	mov	r0, r5
         459d4:	ebff4cc1 	bl	18ce0 <StoreToPhysAddress>
         459d8:	ea000000 	b	459e0 <MakePrimaryMMUTable+0xd4>
         459dc:	e5850000 	str	r0, [r5]
         459e0:	e2855004 	add	r5, r5, #4	; 0x4
         459e4:	e2877601 	add	r7, r7, #1048576	; 0x100000
         459e8:	e2866601 	add	r6, r6, #1048576	; 0x100000
         459ec:	e5940008 	ldr	r0, [r4, #8]
         459f0:	e1500007 	cmp	r0, r7
         459f4:	8affffe7 	bhi	45998 <MakePrimaryMMUTable+0x8c>
         459f8:	e5b40010 	ldr	r0, [r4, #16]!
         459fc:	e3700001 	cmn	r0, #1	; 0x1
         45a00:	1affffce 	bne	45940 <MakePrimaryMMUTable+0x34>
         45a04:	e59b0008 	ldr	r0, [fp, #8]
         45a08:	e2806901 	add	r6, r0, #16384	; 0x4000
         45a0c:	e1560005 	cmp	r6, r5
         45a10:	9a00000d 	bls	45a4c <MakePrimaryMMUTable+0x140>
         45a14:	e20940ff 	and	r4, r9, #255	; 0xff
         45a18:	e3a07000 	mov	r7, #0	; 0x0
         45a1c:	e33a0000 	teq	sl, #0	; 0x0
         45a20:	0a000006 	beq	45a40 <MakePrimaryMMUTable+0x134>
         45a24:	e3340000 	teq	r4, #0	; 0x0
         45a28:	0a000003 	beq	45a3c <MakePrimaryMMUTable+0x130>
         45a2c:	e1a01007 	mov	r1, r7
         45a30:	e1a00005 	mov	r0, r5
         45a34:	ebff4ca9 	bl	18ce0 <StoreToPhysAddress>
         45a38:	ea000000 	b	45a40 <MakePrimaryMMUTable+0x134>
         45a3c:	e5857000 	str	r7, [r5]
         45a40:	e2855004 	add	r5, r5, #4	; 0x4
         45a44:	e1560005 	cmp	r6, r5
         45a48:	8afffff3 	bhi	45a1c <MakePrimaryMMUTable+0x110>
         45a4c:	e3a06000 	mov	r6, #0	; 0x0
         45a50:	e59b8014 	ldr	r8, [fp, #20]
         45a54:	e0880106 	add	r0, r8, r6, lsl #2
         45a58:	e59012e8 	ldr	r1, [r0, #744]
         45a5c:	e3310000 	teq	r1, #0	; 0x0
         45a60:	0a000025 	beq	45afc <MakePrimaryMMUTable+0x1f0>
         45a64:	e1a02601 	mov	r2, r1, lsl #12
         45a68:	e0415622 	sub	r5, r1, r2, lsr #12
         45a6c:	e59012fc 	ldr	r1, [r0, #764]
         45a70:	e1a02601 	mov	r2, r1, lsl #12
         45a74:	e0414622 	sub	r4, r1, r2, lsr #12
         45a78:	e0411004 	sub	r1, r1, r4
         45a7c:	e590030c 	ldr	r0, [r0, #780]
         45a80:	e0810000 	add	r0, r1, r0
         45a84:	e2400001 	sub	r0, r0, #1	; 0x1
         45a88:	e2800601 	add	r0, r0, #1048576	; 0x100000
         45a8c:	e1b00a20 	movs	r0, r0, lsr #20
         45a90:	e2407001 	sub	r7, r0, #1	; 0x1
         45a94:	0a000018 	beq	45afc <MakePrimaryMMUTable+0x1f0>
         45a98:	e3390000 	teq	r9, #0	; 0x0
         45a9c:	0a000008 	beq	45ac4 <MakePrimaryMMUTable+0x1b8>
         45aa0:	e3a03001 	mov	r3, #1	; 0x1
         45aa4:	e92d0008 	stmdb	sp!, {r3}
         45aa8:	e1a01004 	mov	r1, r4
         45aac:	e1a00005 	mov	r0, r5
         45ab0:	e3a03002 	mov	r3, #2	; 0x2
         45ab4:	e3a02000 	mov	r2, #0	; 0x0
         45ab8:	eb0452c7 	bl	15a5dc <AddNewSecPNJT__FUlN214PermUc>
         45abc:	e28dd004 	add	sp, sp, #4	; 0x4
         45ac0:	ea000008 	b	45ae8 <MakePrimaryMMUTable+0x1dc>
         45ac4:	e1a03008 	mov	r3, r8
         45ac8:	e3a02001 	mov	r2, #1	; 0x1
         45acc:	e92d000c 	stmdb	sp!, {r2, r3}
         45ad0:	e1a01004 	mov	r1, r4
         45ad4:	e1a00005 	mov	r0, r5
         45ad8:	e3a03002 	mov	r3, #2	; 0x2
         45adc:	e3a02000 	mov	r2, #0	; 0x0
         45ae0:	eb0452a3 	bl	15a574 <AddNewSecPNJTMMUWithOff__FUlN214PermUcP28SGlobalsThatLiveAcrossReboot>
         45ae4:	e28dd008 	add	sp, sp, #8	; 0x8
         45ae8:	e2855601 	add	r5, r5, #1048576	; 0x100000
         45aec:	e2844601 	add	r4, r4, #1048576	; 0x100000
         45af0:	e1b00007 	movs	r0, r7
         45af4:	e2477001 	sub	r7, r7, #1	; 0x1
         45af8:	1affffe6 	bne	45a98 <MakePrimaryMMUTable+0x18c>
         45afc:	e2866001 	add	r6, r6, #1	; 0x1
         45b00:	e3560004 	cmp	r6, #4	; 0x4
         45b04:	3affffd2 	bcc	45a54 <MakePrimaryMMUTable+0x148>
         45b08:	eb0d3a40 	bl	394410 <IsSuperMode>
         45b0c:	e3300000 	teq	r0, #0	; 0x0
         45b10:	0a000001 	beq	45b1c <MakePrimaryMMUTable+0x210>
         45b14:	ebff4b84 	bl	1892c <FlushTheMMU>
         45b18:	ea000000 	b	45b20 <MakePrimaryMMUTable+0x214>
         45b1c:	eb0d9ec1 	bl	3ad628 <FlushMMU>
         45b20:	e59b0008 	ldr	r0, [fp, #8]
         45b24:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeCommand(unsigned long, TResponder *, long)
 * Address: 00070424
 */
MakeCommand(unsigned long, TResponder *, long) {
    /*
         70424:	e1a0c00d 	mov	ip, sp
         70428:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         7042c:	e24cb004 	sub	fp, ip, #4	; 0x4
         70430:	e1a05000 	mov	r5, r0
         70434:	e1a04001 	mov	r4, r1
         70438:	e1a06002 	mov	r6, r2
         7043c:	e24dd008 	sub	sp, sp, #8	; 0x8
         70440:	e59f0088 	ldr	r0, [pc, #88]	; 704d0 <MakeCommand(unsigned long, TResponder *, long)+0xac>
         70444:	eb6d4748 	bl	1bc216c <$Clone(RefVar const &)>
         70448:	eb6d473f 	bl	1bc214c <$AllocateRefHandle(long)>
         7044c:	e58d0004 	str	r0, [sp, #4]
         70450:	e1a00105 	mov	r0, r5, lsl #2
         70454:	eb6d473c 	bl	1bc214c <$AllocateRefHandle(long)>
         70458:	e58d0000 	str	r0, [sp]
         7045c:	e1a0200d 	mov	r2, sp
         70460:	e59f106c 	ldr	r1, [pc, #6c]	; 704d4 <MakeCommand(unsigned long, TResponder *, long)+0xb0>
         70464:	e28d0004 	add	r0, sp, #4	; 0x4
         70468:	eb6d57be 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7046c:	e59d0000 	ldr	r0, [sp]
         70470:	eb6d4b51 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         70474:	e24dd004 	sub	sp, sp, #4	; 0x4
         70478:	e59f0058 	ldr	r0, [pc, #58]	; 704d8 <MakeCommand(unsigned long, TResponder *, long)+0xb4>
         7047c:	e5900000 	ldr	r0, [r0]
         70480:	e59f1054 	ldr	r1, [pc, #54]	; 704dc <MakeCommand(unsigned long, TResponder *, long)+0xb8>
         70484:	e1340000 	teq	r4, r0
         70488:	12842024 	addne	r2, r4, #36	; 0x24
         7048c:	059f204c 	ldreq	r2, [pc, #4c]	; 704e0 <MakeCommand(unsigned long, TResponder *, long)+0xbc>
         70490:	e28d0008 	add	r0, sp, #8	; 0x8
         70494:	eb6d57b3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         70498:	e1a00106 	mov	r0, r6, lsl #2
         7049c:	eb6d472a 	bl	1bc214c <$AllocateRefHandle(long)>
         704a0:	e58d0000 	str	r0, [sp]
         704a4:	e1a0200d 	mov	r2, sp
         704a8:	e59f1034 	ldr	r1, [pc, #34]	; 704e4 <MakeCommand(unsigned long, TResponder *, long)+0xc0>
         704ac:	e28d0008 	add	r0, sp, #8	; 0x8
         704b0:	eb6d57ac 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         704b4:	e59d0000 	ldr	r0, [sp]
         704b8:	eb6d4b3f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         704bc:	e59d0008 	ldr	r0, [sp, #8]
         704c0:	e5904000 	ldr	r4, [r0]
         704c4:	eb6d4b3c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         704c8:	e1a00004 	mov	r0, r4
         704cc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         704d0:	00680b38 	rsbeq	r0, r8, r8, lsr fp
         704d4:	00683160 	rsbeq	r3, r8, r0, ror #2
         704d8:	0c1054ac 	ldceq	4, cr5, [r0], -#688
         704dc:	00684150 	rsbeq	r4, r8, r0, asr r1
         704e0:	00681eb8 	streqh	r1, [r8], -#232
         704e4:	00683cd0 	ldreqd	r3, [r8], -#192
    */
}

/**
 * Symbol: MarkUndoCommand(RefVar const &)
 * Address: 00070764
 */
MarkUndoCommand(RefVar const &) {
    /*
         70764:	e1a0c00d 	mov	ip, sp
         70768:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         7076c:	e24cb004 	sub	fp, ip, #4	; 0x4
         70770:	e1a04000 	mov	r4, r0
         70774:	e24dd004 	sub	sp, sp, #4	; 0x4
         70778:	e3a0001a 	mov	r0, #26	; 0x1a
         7077c:	eb6d4672 	bl	1bc214c <$AllocateRefHandle(long)>
         70780:	e58d0000 	str	r0, [sp]
         70784:	e1a0200d 	mov	r2, sp
         70788:	e59f1010 	ldr	r1, [pc, #10]	; 707a0 <MarkUndoCommand(RefVar const &)+0x3c>
         7078c:	e1a00004 	mov	r0, r4
         70790:	eb6d56f4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         70794:	e59d0000 	ldr	r0, [sp]
         70798:	eb6d4a87 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7079c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         707a0:	00684cd8 	ldreqd	r4, [r8], -#200
    */
}

/**
 * Symbol: MergeWords__FRC6RefVarT1
 * Address: 00076c48
 */
void globals::MergeWords() {
    /*
         76c48:	e1a0c00d 	mov	ip, sp
         76c4c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         76c50:	e24cb004 	sub	fp, ip, #4	; 0x4
         76c54:	e1a04001 	mov	r4, r1
         76c58:	e24dd008 	sub	sp, sp, #8	; 0x8
         76c5c:	e59f5154 	ldr	r5, [pc, #154]	; 76db8 <MergeWords__FRC6RefVarT1+0x170>
         76c60:	e5951000 	ldr	r1, [r5]
         76c64:	e5911000 	ldr	r1, [r1]
         76c68:	e5900000 	ldr	r0, [r0]
         76c6c:	e5900000 	ldr	r0, [r0]
         76c70:	eb6d357a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         76c74:	eb6d2d34 	bl	1bc214c <$AllocateRefHandle(long)>
         76c78:	e58d0004 	str	r0, [sp, #4]
         76c7c:	e5950000 	ldr	r0, [r5]
         76c80:	e5901000 	ldr	r1, [r0]
         76c84:	e5940000 	ldr	r0, [r4]
         76c88:	e5900000 	ldr	r0, [r0]
         76c8c:	eb6d3573 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         76c90:	eb6d2d2d 	bl	1bc214c <$AllocateRefHandle(long)>
         76c94:	e58d0000 	str	r0, [sp]
         76c98:	e59d0004 	ldr	r0, [sp, #4]
         76c9c:	e5900000 	ldr	r0, [r0]
         76ca0:	e3a04000 	mov	r4, #0	; 0x0
         76ca4:	e3300002 	teq	r0, #2	; 0x2
         76ca8:	0a00003a 	beq	76d98 <MergeWords__FRC6RefVarT1+0x150>
         76cac:	eb6d397e 	bl	1bc52ac <$Length(long)>
         76cb0:	e3300000 	teq	r0, #0	; 0x0
         76cb4:	159d0000 	ldrne	r0, [sp]
         76cb8:	15900000 	ldrne	r0, [r0]
         76cbc:	13300002 	teqne	r0, #2	; 0x2
         76cc0:	0a000034 	beq	76d98 <MergeWords__FRC6RefVarT1+0x150>
         76cc4:	eb6d3978 	bl	1bc52ac <$Length(long)>
         76cc8:	e3300000 	teq	r0, #0	; 0x0
         76ccc:	0a000031 	beq	76d98 <MergeWords__FRC6RefVarT1+0x150>
         76cd0:	e1a01004 	mov	r1, r4
         76cd4:	e59d0004 	ldr	r0, [sp, #4]
         76cd8:	e5900000 	ldr	r0, [r0]
         76cdc:	eb6d355c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         76ce0:	e59d1004 	ldr	r1, [sp, #4]
         76ce4:	e5810000 	str	r0, [r1]
         76ce8:	e1a01004 	mov	r1, r4
         76cec:	e59d0000 	ldr	r0, [sp]
         76cf0:	e5900000 	ldr	r0, [r0]
         76cf4:	eb6d3556 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         76cf8:	e59d1000 	ldr	r1, [sp]
         76cfc:	e5810000 	str	r0, [r1]
         76d00:	e59f40b4 	ldr	r4, [pc, #b4]	; 76dbc <MergeWords__FRC6RefVarT1+0x174>
         76d04:	e5940000 	ldr	r0, [r4]
         76d08:	e5901000 	ldr	r1, [r0]
         76d0c:	e59d0004 	ldr	r0, [sp, #4]
         76d10:	e5900000 	ldr	r0, [r0]
         76d14:	eb6d3551 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         76d18:	e59d1004 	ldr	r1, [sp, #4]
         76d1c:	e5810000 	str	r0, [r1]
         76d20:	e5940000 	ldr	r0, [r4]
         76d24:	e5901000 	ldr	r1, [r0]
         76d28:	e59d0000 	ldr	r0, [sp]
         76d2c:	e5900000 	ldr	r0, [r0]
         76d30:	eb6d354a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         76d34:	e59d1000 	ldr	r1, [sp]
         76d38:	e5810000 	str	r0, [r1]
         76d3c:	eb6d395a 	bl	1bc52ac <$Length(long)>
         76d40:	e2400002 	sub	r0, r0, #2	; 0x2
         76d44:	e1a030a0 	mov	r3, r0, lsr #1
         76d48:	e3a02000 	mov	r2, #0	; 0x0
         76d4c:	e92d000c 	stmdb	sp!, {r2, r3}
         76d50:	e59d000c 	ldr	r0, [sp, #12]
         76d54:	e5900000 	ldr	r0, [r0]
         76d58:	eb6d3953 	bl	1bc52ac <$Length(long)>
         76d5c:	e2400002 	sub	r0, r0, #2	; 0x2
         76d60:	e1a010a0 	mov	r1, r0, lsr #1
         76d64:	e28d3008 	add	r3, sp, #8	; 0x8
         76d68:	e28d000c 	add	r0, sp, #12	; 0xc
         76d6c:	e3a02000 	mov	r2, #0	; 0x0
         76d70:	eb6d45b1 	bl	1bc843c <$StrMunger__FRC6RefVarlT2T1N22>
         76d74:	e28dd008 	add	sp, sp, #8	; 0x8
         76d78:	e28d0004 	add	r0, sp, #4	; 0x4
         76d7c:	eb68ff60 	bl	1ab6b04 <$MakeWordInterp(RefVar const &)>
         76d80:	e59d1004 	ldr	r1, [sp, #4]
         76d84:	e5810000 	str	r0, [r1]
         76d88:	e28d0004 	add	r0, sp, #4	; 0x4
         76d8c:	eb68ff60 	bl	1ab6b14 <$MakeWordList(RefVar const &)>
         76d90:	e59d1004 	ldr	r1, [sp, #4]
         76d94:	e5810000 	str	r0, [r1]
         76d98:	e59d0004 	ldr	r0, [sp, #4]
         76d9c:	e5904000 	ldr	r4, [r0]
         76da0:	e59d0000 	ldr	r0, [sp]
         76da4:	eb6d3104 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76da8:	e59d0004 	ldr	r0, [sp, #4]
         76dac:	eb6d3102 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76db0:	e1a00004 	mov	r0, r4
         76db4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         76db8:	00685208 	rsbeq	r5, r8, r8, lsl #4
         76dbc:	006851d8 	ldreqd	r5, [r8], -#24
    */
}

/**
 * Symbol: MergeWordInfo__FRC6RefVarlT2
 * Address: 00076dc0
 */
void globals::MergeWordInfo() {
    /*
         76dc0:	e1a0c00d 	mov	ip, sp
         76dc4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         76dc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         76dcc:	e1a05001 	mov	r5, r1
         76dd0:	e1a04002 	mov	r4, r2
         76dd4:	e24dd014 	sub	sp, sp, #20	; 0x14
         76dd8:	e59f1168 	ldr	r1, [pc, #168]	; 76f48 <MergeWordInfo__FRC6RefVarlT2+0x188>
         76ddc:	e5911000 	ldr	r1, [r1]
         76de0:	e5911000 	ldr	r1, [r1]
         76de4:	e5900000 	ldr	r0, [r0]
         76de8:	e5900000 	ldr	r0, [r0]
         76dec:	eb6d351b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         76df0:	eb6d2cd5 	bl	1bc214c <$AllocateRefHandle(long)>
         76df4:	e1a01005 	mov	r1, r5
         76df8:	e58d0010 	str	r0, [sp, #16]
         76dfc:	e5900000 	ldr	r0, [r0]
         76e00:	eb6d3513 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         76e04:	eb6d2cd0 	bl	1bc214c <$AllocateRefHandle(long)>
         76e08:	e1a01004 	mov	r1, r4
         76e0c:	e58d000c 	str	r0, [sp, #12]
         76e10:	e59d0010 	ldr	r0, [sp, #16]
         76e14:	e5900000 	ldr	r0, [r0]
         76e18:	eb6d350d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         76e1c:	eb6d2cca 	bl	1bc214c <$AllocateRefHandle(long)>
         76e20:	e58d0008 	str	r0, [sp, #8]
         76e24:	e59f5120 	ldr	r5, [pc, #120]	; 76f4c <MergeWordInfo__FRC6RefVarlT2+0x18c>
         76e28:	e5950000 	ldr	r0, [r5]
         76e2c:	e5901000 	ldr	r1, [r0]
         76e30:	e59d000c 	ldr	r0, [sp, #12]
         76e34:	e5900000 	ldr	r0, [r0]
         76e38:	eb6d3508 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         76e3c:	eb6d2cc2 	bl	1bc214c <$AllocateRefHandle(long)>
         76e40:	e58d0004 	str	r0, [sp, #4]
         76e44:	e5950000 	ldr	r0, [r5]
         76e48:	e5901000 	ldr	r1, [r0]
         76e4c:	e59d0008 	ldr	r0, [sp, #8]
         76e50:	e5900000 	ldr	r0, [r0]
         76e54:	eb6d3501 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         76e58:	eb6d2cbb 	bl	1bc214c <$AllocateRefHandle(long)>
         76e5c:	e58d0000 	str	r0, [sp]
         76e60:	e59d0004 	ldr	r0, [sp, #4]
         76e64:	e5900000 	ldr	r0, [r0]
         76e68:	e3300002 	teq	r0, #2	; 0x2
         76e6c:	159d0000 	ldrne	r0, [sp]
         76e70:	15900000 	ldrne	r0, [r0]
         76e74:	13300002 	teqne	r0, #2	; 0x2
         76e78:	0a000024 	beq	76f10 <MergeWordInfo__FRC6RefVarlT2+0x150>
         76e7c:	e24dd008 	sub	sp, sp, #8	; 0x8
         76e80:	e59f50c8 	ldr	r5, [pc, #c8]	; 76f50 <MergeWordInfo__FRC6RefVarlT2+0x190>
         76e84:	e5950000 	ldr	r0, [r5]
         76e88:	e5901000 	ldr	r1, [r0]
         76e8c:	e59d0010 	ldr	r0, [sp, #16]
         76e90:	e5900000 	ldr	r0, [r0]
         76e94:	eb6d34f1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         76e98:	eb6d2cab 	bl	1bc214c <$AllocateRefHandle(long)>
         76e9c:	e58d0000 	str	r0, [sp]
         76ea0:	e1a0200d 	mov	r2, sp
         76ea4:	e1a01005 	mov	r1, r5
         76ea8:	e28d0014 	add	r0, sp, #20	; 0x14
         76eac:	eb6d3d2d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         76eb0:	e59d0000 	ldr	r0, [sp]
         76eb4:	eb6d30c0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76eb8:	e28d0014 	add	r0, sp, #20	; 0x14
         76ebc:	e3a01801 	mov	r1, #65536	; 0x10000
         76ec0:	e2411001 	sub	r1, r1, #1	; 0x1
         76ec4:	eb68d1af 	bl	1aab588 <$ClearWordInfoFlags(RefVar const &, long)>
         76ec8:	e28d0014 	add	r0, sp, #20	; 0x14
         76ecc:	e3a01002 	mov	r1, #2	; 0x2
         76ed0:	eb690f94 	bl	1abad28 <$SetWordInfoFlags(RefVar const &, long)>
         76ed4:	e28d1010 	add	r1, sp, #16	; 0x10
         76ed8:	e28d0014 	add	r0, sp, #20	; 0x14
         76edc:	eb68ff12 	bl	1ab6b2c <$MergeWords__FRC6RefVarT1>
         76ee0:	eb6d2c99 	bl	1bc214c <$AllocateRefHandle(long)>
         76ee4:	e58d0004 	str	r0, [sp, #4]
         76ee8:	e28d2004 	add	r2, sp, #4	; 0x4
         76eec:	e59f1060 	ldr	r1, [pc, #60]	; 76f54 <MergeWordInfo__FRC6RefVarlT2+0x194>
         76ef0:	e28d0014 	add	r0, sp, #20	; 0x14
         76ef4:	eb6d3d1b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         76ef8:	e59d0004 	ldr	r0, [sp, #4]
         76efc:	eb6d30ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76f00:	e28d1008 	add	r1, sp, #8	; 0x8
         76f04:	e28d000c 	add	r0, sp, #12	; 0xc
         76f08:	eb68ff05 	bl	1ab6b24 <$MergeStrokes__FRC6RefVarT1>
         76f0c:	e28dd008 	add	sp, sp, #8	; 0x8
         76f10:	e1a01004 	mov	r1, r4
         76f14:	e28d0010 	add	r0, sp, #16	; 0x10
         76f18:	eb690750 	bl	1ab8c60 <$RemoveArrayElement(RefVar, long)>
         76f1c:	e59d0000 	ldr	r0, [sp]
         76f20:	eb6d30a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76f24:	e59d0004 	ldr	r0, [sp, #4]
         76f28:	eb6d30a3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76f2c:	e59d0008 	ldr	r0, [sp, #8]
         76f30:	eb6d30a1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76f34:	e59d000c 	ldr	r0, [sp, #12]
         76f38:	eb6d309f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76f3c:	e59d0010 	ldr	r0, [sp, #16]
         76f40:	eb6d309d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         76f44:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         76f48:	006831f8 	streqd	r3, [r8], -#24
         76f4c:	00684900 	rsbeq	r4, r8, r0, lsl #18
         76f50:	00684850 	rsbeq	r4, r8, r0, asr r8
         76f54:	00685208 	rsbeq	r5, r8, r8, lsl #4
    */
}

/**
 * Symbol: MoveToFirst(RefVar const &, long)
 * Address: 0007773c
 */
MoveToFirst(RefVar const &, long) {
    /*
         7773c:	e1a0c00d 	mov	ip, sp
         77740:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         77744:	e24cb004 	sub	fp, ip, #4	; 0x4
         77748:	e1a04001 	mov	r4, r1
         7774c:	e24dd004 	sub	sp, sp, #4	; 0x4
         77750:	e59f1040 	ldr	r1, [pc, #40]	; 77798 <MoveToFirst(RefVar const &, long)+0x5c>
         77754:	e5911000 	ldr	r1, [r1]
         77758:	e5911000 	ldr	r1, [r1]
         7775c:	e5900000 	ldr	r0, [r0]
         77760:	e5900000 	ldr	r0, [r0]
         77764:	eb6d32bd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         77768:	eb6d2a77 	bl	1bc214c <$AllocateRefHandle(long)>
         7776c:	e58d0000 	str	r0, [sp]
         77770:	e5900000 	ldr	r0, [r0]
         77774:	e3300002 	teq	r0, #2	; 0x2
         77778:	0a000003 	beq	7778c <MoveToFirst(RefVar const &, long)+0x50>
         7777c:	e1a01004 	mov	r1, r4
         77780:	e1a0000d 	mov	r0, sp
         77784:	e3a02000 	mov	r2, #0	; 0x0
         77788:	eb68fce9 	bl	1ab6b34 <$MoveArrayElement__F6RefVarlT2>
         7778c:	e59d0000 	ldr	r0, [sp]
         77790:	eb6d2e89 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77794:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         77798:	00685208 	rsbeq	r5, r8, r8, lsl #4
    */
}

/**
 * Symbol: MoveWordFirst__FRC6RefVarT1
 * Address: 000777f0
 */
void globals::MoveWordFirst() {
    /*
         777f0:	e1a0c00d 	mov	ip, sp
         777f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         777f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         777fc:	e1a04000 	mov	r4, r0
         77800:	e1a05001 	mov	r5, r1
         77804:	eb68e82b 	bl	1ab18b8 <$FindMatchingWord__FRC6RefVarT1>
         77808:	e3500000 	cmp	r0, #0	; 0x0
         7780c:	c1a01000 	movgt	r1, r0
         77810:	c1a00004 	movgt	r0, r4
         77814:	c91b6830 	ldmgtdb	fp, {r4, r5, fp, sp, lr}
         77818:	ca68fcc6 	bgt	1ab6b38 <$MoveToFirst(RefVar const &, long)>
         7781c:	a91ba830 	ldmgedb	fp, {r4, r5, fp, sp, pc}
         77820:	e24dd008 	sub	sp, sp, #8	; 0x8
         77824:	e1a00005 	mov	r0, r5
         77828:	eb68fcb5 	bl	1ab6b04 <$MakeWordInterp(RefVar const &)>
         7782c:	eb6d2a46 	bl	1bc214c <$AllocateRefHandle(long)>
         77830:	e58d0004 	str	r0, [sp, #4]
         77834:	e3e00007 	mvn	r0, #7	; 0x7
         77838:	eb6d2a43 	bl	1bc214c <$AllocateRefHandle(long)>
         7783c:	e58d0000 	str	r0, [sp]
         77840:	e1a0200d 	mov	r2, sp
         77844:	e59f1064 	ldr	r1, [pc, #64]	; 778b0 <MoveWordFirst__FRC6RefVarT1+0xc0>
         77848:	e28d0004 	add	r0, sp, #4	; 0x4
         7784c:	eb6d3ac5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         77850:	e59d0000 	ldr	r0, [sp]
         77854:	eb6d2e58 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77858:	e24dd004 	sub	sp, sp, #4	; 0x4
         7785c:	e59f0050 	ldr	r0, [pc, #50]	; 778b4 <MoveWordFirst__FRC6RefVarT1+0xc4>
         77860:	e5900000 	ldr	r0, [r0]
         77864:	e5901000 	ldr	r1, [r0]
         77868:	e5940000 	ldr	r0, [r4]
         7786c:	e5900000 	ldr	r0, [r0]
         77870:	eb6d327a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         77874:	eb6d2a34 	bl	1bc214c <$AllocateRefHandle(long)>
         77878:	e58d0000 	str	r0, [sp]
         7787c:	e5900000 	ldr	r0, [r0]
         77880:	e3300002 	teq	r0, #2	; 0x2
         77884:	0a000003 	beq	77898 <MoveWordFirst__FRC6RefVarT1+0xa8>
         77888:	e28d2008 	add	r2, sp, #8	; 0x8
         7788c:	e1a0000d 	mov	r0, sp
         77890:	e3a01000 	mov	r1, #0	; 0x0
         77894:	eb68f87b 	bl	1ab5a88 <$InsertArrayElement(RefVar, long, long)>
         77898:	e59d0000 	ldr	r0, [sp]
         7789c:	eb6d2e46 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         778a0:	e28dd004 	add	sp, sp, #4	; 0x4
         778a4:	e59d0004 	ldr	r0, [sp, #4]
         778a8:	eb6d2e43 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         778ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         778b0:	006831c0 	rsbeq	r3, r8, r0, asr #3
         778b4:	00685208 	rsbeq	r5, r8, r8, lsl #4
    */
}

/**
 * Symbol: MakeWordInfo(TUnitPublic *)
 * Address: 00077fd8
 */
MakeWordInfo(TUnitPublic *) {
    /*
         77fd8:	e1a0c00d 	mov	ip, sp
         77fdc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         77fe0:	e24cb004 	sub	fp, ip, #4	; 0x4
         77fe4:	e1a04000 	mov	r4, r0
         77fe8:	e24dd004 	sub	sp, sp, #4	; 0x4
         77fec:	e59f0170 	ldr	r0, [pc, #170]	; 78164 <MakeWordInfo(TUnitPublic *)+0x18c>
         77ff0:	eb6d285d 	bl	1bc216c <$Clone(RefVar const &)>
         77ff4:	eb6d2854 	bl	1bc214c <$AllocateRefHandle(long)>
         77ff8:	e3a07000 	mov	r7, #0	; 0x0
         77ffc:	e3340000 	teq	r4, #0	; 0x0
         78000:	e58d0000 	str	r0, [sp]
         78004:	0a000051 	beq	78150 <MakeWordInfo(TUnitPublic *)+0x178>
         78008:	e24dd010 	sub	sp, sp, #16	; 0x10
         7800c:	e1a00004 	mov	r0, r4
         78010:	eb68d9c4 	bl	1aae728 <$EncodeUnitID(TUnitPublic *)>
         78014:	eb6d284c 	bl	1bc214c <$AllocateRefHandle(long)>
         78018:	e58d0000 	str	r0, [sp]
         7801c:	e1a0200d 	mov	r2, sp
         78020:	e59f1140 	ldr	r1, [pc, #140]	; 78168 <MakeWordInfo(TUnitPublic *)+0x190>
         78024:	e28d0010 	add	r0, sp, #16	; 0x10
         78028:	eb6d38ce 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7802c:	e59d0000 	ldr	r0, [sp]
         78030:	eb6d2c61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78034:	e1a00004 	mov	r0, r4
         78038:	eb68d9be 	bl	1aae738 <$ExpandUnit(TUnitPublic *)>
         7803c:	eb6d2842 	bl	1bc214c <$AllocateRefHandle(long)>
         78040:	e58d0004 	str	r0, [sp, #4]
         78044:	e28d2004 	add	r2, sp, #4	; 0x4
         78048:	e59f111c 	ldr	r1, [pc, #11c]	; 7816c <MakeWordInfo(TUnitPublic *)+0x194>
         7804c:	e28d0010 	add	r0, sp, #16	; 0x10
         78050:	eb6d38c4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         78054:	e59d0004 	ldr	r0, [sp, #4]
         78058:	eb6d2c57 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7805c:	e1a00004 	mov	r0, r4
         78060:	eb68faaa 	bl	1ab6b10 <$MakeWordList(TUnitPublic *)>
         78064:	eb6d2838 	bl	1bc214c <$AllocateRefHandle(long)>
         78068:	e58d0008 	str	r0, [sp, #8]
         7806c:	e28d2008 	add	r2, sp, #8	; 0x8
         78070:	e59f60f8 	ldr	r6, [pc, #f8]	; 78170 <MakeWordInfo(TUnitPublic *)+0x198>
         78074:	e1a01006 	mov	r1, r6
         78078:	e28d0010 	add	r0, sp, #16	; 0x10
         7807c:	eb6d38b9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         78080:	e59d0008 	ldr	r0, [sp, #8]
         78084:	eb6d2c4c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78088:	e1a00004 	mov	r0, r4
         7808c:	eb68b077 	bl	1aa4270 <TUnitPublic::$TrainingData(void)>
         78090:	eb6d282d 	bl	1bc214c <$AllocateRefHandle(long)>
         78094:	e58d000c 	str	r0, [sp, #12]
         78098:	e28d200c 	add	r2, sp, #12	; 0xc
         7809c:	e59f10d0 	ldr	r1, [pc, #d0]	; 78174 <MakeWordInfo(TUnitPublic *)+0x19c>
         780a0:	e28d0010 	add	r0, sp, #16	; 0x10
         780a4:	eb6d38af 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         780a8:	e59d000c 	ldr	r0, [sp, #12]
         780ac:	eb6d2c42 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         780b0:	e1a00004 	mov	r0, r4
         780b4:	eb687aa4 	bl	1a96b4c <TUnitPublic::$GetType(void)>
         780b8:	e1a01000 	mov	r1, r0
         780bc:	e59f00b4 	ldr	r0, [pc, #b4]	; 78178 <MakeWordInfo(TUnitPublic *)+0x1a0>
         780c0:	e5900014 	ldr	r0, [r0, #20]
         780c4:	eb68e5fc 	bl	1ab18bc <TRecognizerList::$FindRecognizer(unsigned long)>
         780c8:	e1a05000 	mov	r5, r0
         780cc:	e5940000 	ldr	r0, [r4]
         780d0:	e5901000 	ldr	r1, [r0]
         780d4:	e1a0e00f 	mov	lr, pc
         780d8:	e281f020 	add	pc, r1, #32	; 0x20
         780dc:	e3300000 	teq	r0, #0	; 0x0
         780e0:	0a000008 	beq	78108 <MakeWordInfo(TUnitPublic *)+0x130>
         780e4:	e3350000 	teq	r5, #0	; 0x0
         780e8:	0a000017 	beq	7814c <MakeWordInfo(TUnitPublic *)+0x174>
         780ec:	e1a01004 	mov	r1, r4
         780f0:	e1a00005 	mov	r0, r5
         780f4:	e5952000 	ldr	r2, [r5]
         780f8:	e1a0e00f 	mov	lr, pc
         780fc:	e282f024 	add	pc, r2, #36	; 0x24
         78100:	e3300002 	teq	r0, #2	; 0x2
         78104:	1a000010 	bne	7814c <MakeWordInfo(TUnitPublic *)+0x174>
         78108:	e28d0010 	add	r0, sp, #16	; 0x10
         7810c:	e3a01008 	mov	r1, #8	; 0x8
         78110:	eb690b04 	bl	1abad28 <$SetWordInfoFlags(RefVar const &, long)>
         78114:	e24dd004 	sub	sp, sp, #4	; 0x4
         78118:	e5960000 	ldr	r0, [r6]
         7811c:	e5901000 	ldr	r1, [r0]
         78120:	e59d0014 	ldr	r0, [sp, #20]
         78124:	e5900000 	ldr	r0, [r0]
         78128:	eb6d304c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7812c:	eb6d2806 	bl	1bc214c <$AllocateRefHandle(long)>
         78130:	e1a01007 	mov	r1, r7
         78134:	e58d0000 	str	r0, [sp]
         78138:	e1a0000d 	mov	r0, sp
         7813c:	eb6d388a 	bl	1bc636c <$SetLength(RefVar const &, long)>
         78140:	e59d0000 	ldr	r0, [sp]
         78144:	eb6d2c1c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78148:	e28dd004 	add	sp, sp, #4	; 0x4
         7814c:	e28dd010 	add	sp, sp, #16	; 0x10
         78150:	e59d0000 	ldr	r0, [sp]
         78154:	e5904000 	ldr	r4, [r0]
         78158:	eb6d2c17 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7815c:	e1a00004 	mov	r0, r4
         78160:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         78164:	00680790 	streqb	r0, [r8], -#112
         78168:	00684d20 	rsbeq	r4, r8, r0, lsr #26
         7816c:	00684900 	rsbeq	r4, r8, r0, lsl #18
         78170:	00685208 	rsbeq	r5, r8, r8, lsl #4
         78174:	00684d18 	rsbeq	r4, r8, r8, lsl sp
         78178:	0c106e88 	ldceq	14, cr6, [r0], -#544
    */
}

/**
 * Symbol: MakeWordInfo(RefVar const &)
 * Address: 0007817c
 */
MakeWordInfo(RefVar const &) {
    /*
         7817c:	e1a0c00d 	mov	ip, sp
         78180:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         78184:	e24cb004 	sub	fp, ip, #4	; 0x4
         78188:	e1a04000 	mov	r4, r0
         7818c:	e24dd008 	sub	sp, sp, #8	; 0x8
         78190:	e3a00000 	mov	r0, #0	; 0x0
         78194:	eb688f00 	bl	1a9bd9c <$MakeArray(long)>
         78198:	eb6d27eb 	bl	1bc214c <$AllocateRefHandle(long)>
         7819c:	e58d0004 	str	r0, [sp, #4]
         781a0:	e59f005c 	ldr	r0, [pc, #5c]	; 78204 <MakeWordInfo(RefVar const &)+0x88>
         781a4:	eb6d27f0 	bl	1bc216c <$Clone(RefVar const &)>
         781a8:	eb6d27e7 	bl	1bc214c <$AllocateRefHandle(long)>
         781ac:	e58d0000 	str	r0, [sp]
         781b0:	e1a00004 	mov	r0, r4
         781b4:	eb6d3438 	bl	1bc529c <$IsString(RefVar const &)>
         781b8:	e59f5048 	ldr	r5, [pc, #48]	; 78208 <MakeWordInfo(RefVar const &)+0x8c>
         781bc:	e3300000 	teq	r0, #0	; 0x0
         781c0:	0a000011 	beq	7820c <MakeWordInfo(RefVar const &)+0x90>
         781c4:	e24dd004 	sub	sp, sp, #4	; 0x4
         781c8:	e1a00004 	mov	r0, r4
         781cc:	eb68fa4c 	bl	1ab6b04 <$MakeWordInterp(RefVar const &)>
         781d0:	eb6d27dd 	bl	1bc214c <$AllocateRefHandle(long)>
         781d4:	e58d0000 	str	r0, [sp]
         781d8:	e1a0100d 	mov	r1, sp
         781dc:	e28d0008 	add	r0, sp, #8	; 0x8
         781e0:	eb6d27d0 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         781e4:	e59d0000 	ldr	r0, [sp]
         781e8:	eb6d2bf3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         781ec:	e28d2008 	add	r2, sp, #8	; 0x8
         781f0:	e1a01005 	mov	r1, r5
         781f4:	e28d0004 	add	r0, sp, #4	; 0x4
         781f8:	eb6d385a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         781fc:	e28dd004 	add	sp, sp, #4	; 0x4
         78200:	ea000009 	b	7822c <MakeWordInfo(RefVar const &)+0xb0>
         78204:	00680790 	streqb	r0, [r8], -#112
         78208:	00685208 	rsbeq	r5, r8, r8, lsl #4
         7820c:	e28d2004 	add	r2, sp, #4	; 0x4
         78210:	e1a01005 	mov	r1, r5
         78214:	e1a0000d 	mov	r0, sp
         78218:	eb6d3852 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7821c:	e1a02004 	mov	r2, r4
         78220:	e59f1020 	ldr	r1, [pc, #20]	; 78248 <MakeWordInfo(RefVar const &)+0xcc>
         78224:	e1a0000d 	mov	r0, sp
         78228:	eb6d384e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7822c:	e59d0000 	ldr	r0, [sp]
         78230:	e5904000 	ldr	r4, [r0]
         78234:	eb6d2be0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78238:	e59d0004 	ldr	r0, [sp, #4]
         7823c:	eb6d2bde 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78240:	e1a00004 	mov	r0, r4
         78244:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         78248:	00684900 	rsbeq	r4, r8, r0, lsl #18
    */
}

/**
 * Symbol: MakeWordInfo__FP5TViewlT2
 * Address: 0007824c
 */
void globals::MakeWordInfo() {
    /*
         7824c:	e1a0c00d 	mov	ip, sp
         78250:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         78254:	e24cb004 	sub	fp, ip, #4	; 0x4
         78258:	e1a05000 	mov	r5, r0
         7825c:	e1a04001 	mov	r4, r1
         78260:	e1a06002 	mov	r6, r2
         78264:	e24dd004 	sub	sp, sp, #4	; 0x4
         78268:	e3a00002 	mov	r0, #2	; 0x2
         7826c:	eb6d27b6 	bl	1bc214c <$AllocateRefHandle(long)>
         78270:	e1a07000 	mov	r7, r0
         78274:	e1a01004 	mov	r1, r4
         78278:	e1a00005 	mov	r0, r5
         7827c:	eb68edc5 	bl	1ab3998 <$GetStrokesAt(TView *, long)>
         78280:	eb6d27b1 	bl	1bc214c <$AllocateRefHandle(long)>
         78284:	e58d0000 	str	r0, [sp]
         78288:	e5900000 	ldr	r0, [r0]
         7828c:	e3300002 	teq	r0, #2	; 0x2
         78290:	0a000003 	beq	782a4 <MakeWordInfo__FP5TViewlT2+0x58>
         78294:	e1a0000d 	mov	r0, sp
         78298:	eb68fa18 	bl	1ab6b00 <$MakeWordInfo(RefVar const &)>
         7829c:	e5870000 	str	r0, [r7]
         782a0:	ea00001f 	b	78324 <MakeWordInfo__FP5TViewlT2+0xd8>
         782a4:	e24dd010 	sub	sp, sp, #16	; 0x10
         782a8:	e1a00005 	mov	r0, r5
         782ac:	eb68afd9 	bl	1aa4218 <TParagraphView::$Text(void)>
         782b0:	eb6d27a5 	bl	1bc214c <$AllocateRefHandle(long)>
         782b4:	e58d000c 	str	r0, [sp, #12]
         782b8:	e28d100c 	add	r1, sp, #12	; 0xc
         782bc:	e1a0000d 	mov	r0, sp
         782c0:	eb6d2384 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         782c4:	e1a0100d 	mov	r1, sp
         782c8:	e28d0008 	add	r0, sp, #8	; 0x8
         782cc:	eb6d2380 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
         782d0:	e1a0000d 	mov	r0, sp
         782d4:	e3a01000 	mov	r1, #0	; 0x0
         782d8:	eb6d2788 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         782dc:	e28d0008 	add	r0, sp, #8	; 0x8
         782e0:	eb6d278b 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         782e4:	e0800084 	add	r0, r0, r4, lsl #1
         782e8:	e1a01006 	mov	r1, r6
         782ec:	eb688eb5 	bl	1a9bdc8 <$MakeString(unsigned short const *, long)>
         782f0:	eb6d2795 	bl	1bc214c <$AllocateRefHandle(long)>
         782f4:	e58d0004 	str	r0, [sp, #4]
         782f8:	e28d0004 	add	r0, sp, #4	; 0x4
         782fc:	eb68f9ff 	bl	1ab6b00 <$MakeWordInfo(RefVar const &)>
         78300:	e5870000 	str	r0, [r7]
         78304:	e59d0004 	ldr	r0, [sp, #4]
         78308:	eb6d2bab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7830c:	e28d0008 	add	r0, sp, #8	; 0x8
         78310:	e3a01000 	mov	r1, #0	; 0x0
         78314:	eb6d2779 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         78318:	e59d000c 	ldr	r0, [sp, #12]
         7831c:	eb6d2ba6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78320:	e28dd010 	add	sp, sp, #16	; 0x10
         78324:	e5974000 	ldr	r4, [r7]
         78328:	e59d0000 	ldr	r0, [sp]
         7832c:	eb6d2ba2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78330:	e1a00007 	mov	r0, r7
         78334:	eb6d2ba0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78338:	e1a00004 	mov	r0, r4
         7833c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MakeWordInterp(RefVar const &)
 * Address: 00078548
 */
MakeWordInterp(RefVar const &) {
    /*
         78548:	e1a0c00d 	mov	ip, sp
         7854c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         78550:	e24cb004 	sub	fp, ip, #4	; 0x4
         78554:	e1a04000 	mov	r4, r0
         78558:	e24dd004 	sub	sp, sp, #4	; 0x4
         7855c:	e59f002c 	ldr	r0, [pc, #2c]	; 78590 <MakeWordInterp(RefVar const &)+0x48>
         78560:	eb6d2701 	bl	1bc216c <$Clone(RefVar const &)>
         78564:	eb6d26f8 	bl	1bc214c <$AllocateRefHandle(long)>
         78568:	e1a02004 	mov	r2, r4
         7856c:	e58d0000 	str	r0, [sp]
         78570:	e59f101c 	ldr	r1, [pc, #1c]	; 78594 <MakeWordInterp(RefVar const &)+0x4c>
         78574:	e1a0000d 	mov	r0, sp
         78578:	eb6d377a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7857c:	e59d0000 	ldr	r0, [sp]
         78580:	e5904000 	ldr	r4, [r0]
         78584:	eb6d2b0c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78588:	e1a00004 	mov	r0, r4
         7858c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         78590:	00681be8 	rsbeq	r1, r8, r8, ror #23
         78594:	006851d8 	ldreqd	r5, [r8], -#24
    */
}

/**
 * Symbol: MakeWordInterp__FRC6RefVarlN22
 * Address: 00078598
 */
void globals::MakeWordInterp() {
    /*
         78598:	e1a0c00d 	mov	ip, sp
         7859c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         785a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         785a4:	e1a07000 	mov	r7, r0
         785a8:	e1a06001 	mov	r6, r1
         785ac:	e1a05002 	mov	r5, r2
         785b0:	e1a04003 	mov	r4, r3
         785b4:	e24dd010 	sub	sp, sp, #16	; 0x10
         785b8:	e59f0098 	ldr	r0, [pc, #98]	; 78658 <MakeWordInterp__FRC6RefVarlN22+0xc0>
         785bc:	eb6d26ea 	bl	1bc216c <$Clone(RefVar const &)>
         785c0:	eb6d26e1 	bl	1bc214c <$AllocateRefHandle(long)>
         785c4:	e1a02007 	mov	r2, r7
         785c8:	e58d000c 	str	r0, [sp, #12]
         785cc:	e59f1088 	ldr	r1, [pc, #88]	; 7865c <MakeWordInterp__FRC6RefVarlN22+0xc4>
         785d0:	e28d000c 	add	r0, sp, #12	; 0xc
         785d4:	eb6d3763 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         785d8:	e1a00106 	mov	r0, r6, lsl #2
         785dc:	eb6d26da 	bl	1bc214c <$AllocateRefHandle(long)>
         785e0:	e58d0000 	str	r0, [sp]
         785e4:	e1a0200d 	mov	r2, sp
         785e8:	e59f1070 	ldr	r1, [pc, #70]	; 78660 <MakeWordInterp__FRC6RefVarlN22+0xc8>
         785ec:	e28d000c 	add	r0, sp, #12	; 0xc
         785f0:	eb6d375c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         785f4:	e59d0000 	ldr	r0, [sp]
         785f8:	eb6d2aef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         785fc:	e1a00105 	mov	r0, r5, lsl #2
         78600:	eb6d26d1 	bl	1bc214c <$AllocateRefHandle(long)>
         78604:	e58d0004 	str	r0, [sp, #4]
         78608:	e28d2004 	add	r2, sp, #4	; 0x4
         7860c:	e59f1050 	ldr	r1, [pc, #50]	; 78664 <MakeWordInterp__FRC6RefVarlN22+0xcc>
         78610:	e28d000c 	add	r0, sp, #12	; 0xc
         78614:	eb6d3753 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         78618:	e59d0004 	ldr	r0, [sp, #4]
         7861c:	eb6d2ae6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78620:	e1a00104 	mov	r0, r4, lsl #2
         78624:	eb6d26c8 	bl	1bc214c <$AllocateRefHandle(long)>
         78628:	e58d0008 	str	r0, [sp, #8]
         7862c:	e28d2008 	add	r2, sp, #8	; 0x8
         78630:	e59f1030 	ldr	r1, [pc, #30]	; 78668 <MakeWordInterp__FRC6RefVarlN22+0xd0>
         78634:	e28d000c 	add	r0, sp, #12	; 0xc
         78638:	eb6d374a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7863c:	e59d0008 	ldr	r0, [sp, #8]
         78640:	eb6d2add 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78644:	e59d000c 	ldr	r0, [sp, #12]
         78648:	e5904000 	ldr	r4, [r0]
         7864c:	eb6d2ada 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78650:	e1a00004 	mov	r0, r4
         78654:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         78658:	00681be8 	rsbeq	r1, r8, r8, ror #23
         7865c:	006851d8 	ldreqd	r5, [r8], -#24
         78660:	00684460 	rsbeq	r4, r8, r0, ror #8
         78664:	006831c0 	rsbeq	r3, r8, r0, asr #3
         78668:	00683400 	rsbeq	r3, r8, r0, lsl #8
    */
}

/**
 * Symbol: MakeWordList(RefVar const &)
 * Address: 0007866c
 */
MakeWordList(RefVar const &) {
    /*
         7866c:	e1a0c00d 	mov	ip, sp
         78670:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         78674:	e24cb004 	sub	fp, ip, #4	; 0x4
         78678:	e1a04000 	mov	r4, r0
         7867c:	e3a00001 	mov	r0, #1	; 0x1
         78680:	eb688dc5 	bl	1a9bd9c <$MakeArray(long)>
         78684:	eb6d26b0 	bl	1bc214c <$AllocateRefHandle(long)>
         78688:	e1a05000 	mov	r5, r0
         7868c:	e5940000 	ldr	r0, [r4]
         78690:	e3a01000 	mov	r1, #0	; 0x0
         78694:	e5902000 	ldr	r2, [r0]
         78698:	e5950000 	ldr	r0, [r5]
         7869c:	eb6d372d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         786a0:	e5954000 	ldr	r4, [r5]
         786a4:	e1a00005 	mov	r0, r5
         786a8:	eb6d2ac3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         786ac:	e1a00004 	mov	r0, r4
         786b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: MakeWordList(TUnitPublic *)
 * Address: 000786b4
 */
MakeWordList(TUnitPublic *) {
    /*
         786b4:	e1a0c00d 	mov	ip, sp
         786b8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         786bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         786c0:	e1a04000 	mov	r4, r0
         786c4:	e3a00002 	mov	r0, #2	; 0x2
         786c8:	eb6d269f 	bl	1bc214c <$AllocateRefHandle(long)>
         786cc:	e1a06000 	mov	r6, r0
         786d0:	e1a00004 	mov	r0, r4
         786d4:	eb68b711 	bl	1aa6320 <TUnitPublic::$Words(void)>
         786d8:	e1b05000 	movs	r5, r0
         786dc:	0a00004d 	beq	78818 <MakeWordList(TUnitPublic *)+0x164>
         786e0:	e1a00005 	mov	r0, r5
         786e4:	eb685820 	bl	1a8e76c <TWordList::$Count(void)>
         786e8:	e1a07000 	mov	r7, r0
         786ec:	eb688daa 	bl	1a9bd9c <$MakeArray(long)>
         786f0:	e3a04000 	mov	r4, #0	; 0x0
         786f4:	e3570000 	cmp	r7, #0	; 0x0
         786f8:	e5860000 	str	r0, [r6]
         786fc:	da000042 	ble	7880c <MakeWordList(TUnitPublic *)+0x158>
         78700:	e59f9124 	ldr	r9, [pc, #124]	; 7882c <MakeWordList(TUnitPublic *)+0x178>
         78704:	e59fa124 	ldr	sl, [pc, #124]	; 78830 <MakeWordList(TUnitPublic *)+0x17c>
         78708:	e24dd014 	sub	sp, sp, #20	; 0x14
         7870c:	e1a00009 	mov	r0, r9
         78710:	eb6d2695 	bl	1bc216c <$Clone(RefVar const &)>
         78714:	eb6d268c 	bl	1bc214c <$AllocateRefHandle(long)>
         78718:	e1a01004 	mov	r1, r4
         7871c:	e58d0010 	str	r0, [sp, #16]
         78720:	e1a00005 	mov	r0, r5
         78724:	eb68b6f9 	bl	1aa6310 <TWordList::$Word(long)>
         78728:	e1a08000 	mov	r8, r0
         7872c:	e5900000 	ldr	r0, [r0]
         78730:	eb6d32e7 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         78734:	eb6d2684 	bl	1bc214c <$AllocateRefHandle(long)>
         78738:	e58d0000 	str	r0, [sp]
         7873c:	e1a0200d 	mov	r2, sp
         78740:	e1a0100a 	mov	r1, sl
         78744:	e28d0010 	add	r0, sp, #16	; 0x10
         78748:	eb6d3706 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7874c:	e59d0000 	ldr	r0, [sp]
         78750:	eb6d2a99 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78754:	e1a00008 	mov	r0, r8
         78758:	eb6da254 	bl	1be10b0 <$DisposHandle>
         7875c:	e1a01004 	mov	r1, r4
         78760:	e1a00005 	mov	r0, r5
         78764:	eb68a258 	bl	1aa10cc <TWordList::$Score(long)>
         78768:	e1a00100 	mov	r0, r0, lsl #2
         7876c:	eb6d2676 	bl	1bc214c <$AllocateRefHandle(long)>
         78770:	e58d0004 	str	r0, [sp, #4]
         78774:	e28d2004 	add	r2, sp, #4	; 0x4
         78778:	e59f10b4 	ldr	r1, [pc, #b4]	; 78834 <MakeWordList(TUnitPublic *)+0x180>
         7877c:	e28d0010 	add	r0, sp, #16	; 0x10
         78780:	eb6d36f8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         78784:	e59d0004 	ldr	r0, [sp, #4]
         78788:	eb6d2a8b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7878c:	e1a00104 	mov	r0, r4, lsl #2
         78790:	eb6d266d 	bl	1bc214c <$AllocateRefHandle(long)>
         78794:	e58d0008 	str	r0, [sp, #8]
         78798:	e28d2008 	add	r2, sp, #8	; 0x8
         7879c:	e59f1094 	ldr	r1, [pc, #94]	; 78838 <MakeWordList(TUnitPublic *)+0x184>
         787a0:	e28d0010 	add	r0, sp, #16	; 0x10
         787a4:	eb6d36ef 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         787a8:	e59d0008 	ldr	r0, [sp, #8]
         787ac:	eb6d2a82 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         787b0:	e1a01004 	mov	r1, r4
         787b4:	e1a00005 	mov	r0, r5
         787b8:	eb68f4c2 	bl	1ab5ac8 <TWordList::$Label(long)>
         787bc:	e1a00100 	mov	r0, r0, lsl #2
         787c0:	eb6d2661 	bl	1bc214c <$AllocateRefHandle(long)>
         787c4:	e58d000c 	str	r0, [sp, #12]
         787c8:	e28d200c 	add	r2, sp, #12	; 0xc
         787cc:	e59f1068 	ldr	r1, [pc, #68]	; 7883c <MakeWordList(TUnitPublic *)+0x188>
         787d0:	e28d0010 	add	r0, sp, #16	; 0x10
         787d4:	eb6d36e3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         787d8:	e59d000c 	ldr	r0, [sp, #12]
         787dc:	eb6d2a76 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         787e0:	e59d0010 	ldr	r0, [sp, #16]
         787e4:	e1a01004 	mov	r1, r4
         787e8:	e5902000 	ldr	r2, [r0]
         787ec:	e5960000 	ldr	r0, [r6]
         787f0:	eb6d36d8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         787f4:	e59d0010 	ldr	r0, [sp, #16]
         787f8:	eb6d2a6f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         787fc:	e28dd014 	add	sp, sp, #20	; 0x14
         78800:	e2844001 	add	r4, r4, #1	; 0x1
         78804:	e1540007 	cmp	r4, r7
         78808:	baffffbe 	blt	78708 <MakeWordList(TUnitPublic *)+0x54>
         7880c:	e1b00005 	movs	r0, r5
         78810:	13a01001 	movne	r1, #1	; 0x1
         78814:	1b684322 	blne	1a894a4 <TWordList::$__dt(void)>
         78818:	e5964000 	ldr	r4, [r6]
         7881c:	e1a00006 	mov	r0, r6
         78820:	eb6d2a65 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78824:	e1a00004 	mov	r0, r4
         78828:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7882c:	00681be8 	rsbeq	r1, r8, r8, ror #23
         78830:	006851d8 	ldreqd	r5, [r8], -#24
         78834:	00684460 	rsbeq	r4, r8, r0, ror #8
         78838:	006831c0 	rsbeq	r3, r8, r0, asr #3
         7883c:	00683400 	rsbeq	r3, r8, r0, lsl #8
    */
}

/**
 * Symbol: MergeStrokes__FRC6RefVarT1
 * Address: 00078840
 */
void globals::MergeStrokes() {
    /*
         78840:	e1a0c00d 	mov	ip, sp
         78844:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         78848:	e24cb004 	sub	fp, ip, #4	; 0x4
         7884c:	e1a04000 	mov	r4, r0
         78850:	e1a05001 	mov	r5, r1
         78854:	e24dd004 	sub	sp, sp, #4	; 0x4
         78858:	e59f60f8 	ldr	r6, [pc, #f8]	; 78958 <MergeStrokes__FRC6RefVarT1+0x118>
         7885c:	e5960000 	ldr	r0, [r6]
         78860:	e5901000 	ldr	r1, [r0]
         78864:	e5940000 	ldr	r0, [r4]
         78868:	e5900000 	ldr	r0, [r0]
         7886c:	eb6d2e7b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         78870:	eb6d2635 	bl	1bc214c <$AllocateRefHandle(long)>
         78874:	e58d0000 	str	r0, [sp]
         78878:	e5960000 	ldr	r0, [r6]
         7887c:	e5901000 	ldr	r1, [r0]
         78880:	e5950000 	ldr	r0, [r5]
         78884:	e5900000 	ldr	r0, [r0]
         78888:	eb6d2e74 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7888c:	eb6d262e 	bl	1bc214c <$AllocateRefHandle(long)>
         78890:	e1a06000 	mov	r6, r0
         78894:	e59d0000 	ldr	r0, [sp]
         78898:	e5900000 	ldr	r0, [r0]
         7889c:	eb6d3282 	bl	1bc52ac <$Length(long)>
         788a0:	e1a07000 	mov	r7, r0
         788a4:	e5960000 	ldr	r0, [r6]
         788a8:	eb6d327f 	bl	1bc52ac <$Length(long)>
         788ac:	e0871000 	add	r1, r7, r0
         788b0:	e1a09001 	mov	r9, r1
         788b4:	e1a08001 	mov	r8, r1
         788b8:	e1a0000d 	mov	r0, sp
         788bc:	eb6d36aa 	bl	1bc636c <$SetLength(RefVar const &, long)>
         788c0:	e1a05007 	mov	r5, r7
         788c4:	e1580007 	cmp	r8, r7
         788c8:	da00000e 	ble	78908 <MergeStrokes__FRC6RefVarT1+0xc8>
         788cc:	e0451007 	sub	r1, r5, r7
         788d0:	e5960000 	ldr	r0, [r6]
         788d4:	eb6d2e5e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         788d8:	eb6d261b 	bl	1bc214c <$AllocateRefHandle(long)>
         788dc:	e1a08000 	mov	r8, r0
         788e0:	e1a01005 	mov	r1, r5
         788e4:	e5902000 	ldr	r2, [r0]
         788e8:	e59d0000 	ldr	r0, [sp]
         788ec:	e5900000 	ldr	r0, [r0]
         788f0:	eb6d3698 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         788f4:	e1a00008 	mov	r0, r8
         788f8:	eb6d2a2f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         788fc:	e2855001 	add	r5, r5, #1	; 0x1
         78900:	e1590005 	cmp	r9, r5
         78904:	cafffff0 	bgt	788cc <MergeStrokes__FRC6RefVarT1+0x8c>
         78908:	e24dd00c 	sub	sp, sp, #12	; 0xc
         7890c:	e28d1004 	add	r1, sp, #4	; 0x4
         78910:	e1a00004 	mov	r0, r4
         78914:	eb68e3f5 	bl	1ab18f0 <$GetBundleBounds(RefVar const &, TRect *)>
         78918:	e28d0004 	add	r0, sp, #4	; 0x4
         7891c:	eb6ddb9e 	bl	1bef79c <$ToObject(TRect const &)>
         78920:	eb6d2609 	bl	1bc214c <$AllocateRefHandle(long)>
         78924:	e58d0000 	str	r0, [sp]
         78928:	e1a0200d 	mov	r2, sp
         7892c:	e59f1028 	ldr	r1, [pc, #28]	; 7895c <MergeStrokes__FRC6RefVarT1+0x11c>
         78930:	e1a00004 	mov	r0, r4
         78934:	eb6d368b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         78938:	e59d0000 	ldr	r0, [sp]
         7893c:	eb6d2a1e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78940:	e28dd00c 	add	sp, sp, #12	; 0xc
         78944:	e1a00006 	mov	r0, r6
         78948:	eb6d2a1b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7894c:	e59d0000 	ldr	r0, [sp]
         78950:	eb6d2a19 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         78954:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         78958:	00684900 	rsbeq	r4, r8, r0, lsl #18
         7895c:	00682190 	streqb	r2, [r8], -#16
    */
}

/**
 * Symbol: MoveArrayElement__F6RefVarlT2
 * Address: 00078fc4
 */
void globals::MoveArrayElement() {
    /*
         78fc4:	e1a0c00d 	mov	ip, sp
         78fc8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         78fcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         78fd0:	e1a05001 	mov	r5, r1
         78fd4:	e1a04002 	mov	r4, r2
         78fd8:	e24dd004 	sub	sp, sp, #4	; 0x4
         78fdc:	e5900000 	ldr	r0, [r0]
         78fe0:	e5900000 	ldr	r0, [r0]
         78fe4:	eb6d2458 	bl	1bc214c <$AllocateRefHandle(long)>
         78fe8:	e58d0000 	str	r0, [sp]
         78fec:	e0550004 	subs	r0, r5, r4
         78ff0:	42600000 	rsbmi	r0, r0, #0	; 0x0
         78ff4:	e3300001 	teq	r0, #1	; 0x1
         78ff8:	1a00001a 	bne	79068 <MoveArrayElement__F6RefVarlT2+0xa4>
         78ffc:	e1a01005 	mov	r1, r5
         79000:	e59d0000 	ldr	r0, [sp]
         79004:	e5900000 	ldr	r0, [r0]
         79008:	eb6d2c91 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7900c:	eb6d244e 	bl	1bc214c <$AllocateRefHandle(long)>
         79010:	e1a07000 	mov	r7, r0
         79014:	e1a01004 	mov	r1, r4
         79018:	e59d0000 	ldr	r0, [sp]
         7901c:	e5900000 	ldr	r0, [r0]
         79020:	eb6d2c8b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         79024:	eb6d2448 	bl	1bc214c <$AllocateRefHandle(long)>
         79028:	e1a06000 	mov	r6, r0
         7902c:	e1a01004 	mov	r1, r4
         79030:	e5972000 	ldr	r2, [r7]
         79034:	e59d0000 	ldr	r0, [sp]
         79038:	e5900000 	ldr	r0, [r0]
         7903c:	eb6d34c5 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         79040:	e1a01005 	mov	r1, r5
         79044:	e5962000 	ldr	r2, [r6]
         79048:	e59d0000 	ldr	r0, [sp]
         7904c:	e5900000 	ldr	r0, [r0]
         79050:	eb6d34c0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         79054:	e1a00006 	mov	r0, r6
         79058:	eb6d2857 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7905c:	e1a00007 	mov	r0, r7
         79060:	eb6d2855 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         79064:	ea00000e 	b	790a4 <MoveArrayElement__F6RefVarlT2+0xe0>
         79068:	e1350004 	teq	r5, r4
         7906c:	0a00000c 	beq	790a4 <MoveArrayElement__F6RefVarlT2+0xe0>
         79070:	e24dd004 	sub	sp, sp, #4	; 0x4
         79074:	e1a01005 	mov	r1, r5
         79078:	e28d0004 	add	r0, sp, #4	; 0x4
         7907c:	eb68fef7 	bl	1ab8c60 <$RemoveArrayElement(RefVar, long)>
         79080:	eb6d2431 	bl	1bc214c <$AllocateRefHandle(long)>
         79084:	e58d0000 	str	r0, [sp]
         79088:	e1a0200d 	mov	r2, sp
         7908c:	e1a01004 	mov	r1, r4
         79090:	e28d0004 	add	r0, sp, #4	; 0x4
         79094:	eb68f27b 	bl	1ab5a88 <$InsertArrayElement(RefVar, long, long)>
         79098:	e59d0000 	ldr	r0, [sp]
         7909c:	eb6d2846 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         790a0:	e28dd004 	add	sp, sp, #4	; 0x4
         790a4:	e59d0000 	ldr	r0, [sp]
         790a8:	eb6d2843 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         790ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         790b0:	e5901000 	ldr	r1, [r0]
         790b4:	e1b01821 	movs	r1, r1, lsr #16
         790b8:	0a00000a 	beq	790e8 <MoveArrayElement__F6RefVarlT2+0x124>
         790bc:	e5901000 	ldr	r1, [r0]
         790c0:	e1a01821 	mov	r1, r1, lsr #16
         790c4:	e3510041 	cmp	r1, #65	; 0x41
         790c8:	ba000001 	blt	790d4 <MoveArrayElement__F6RefVarlT2+0x110>
         790cc:	e351005a 	cmp	r1, #90	; 0x5a
         790d0:	da000001 	ble	790dc <MoveArrayElement__F6RefVarlT2+0x118>
         790d4:	e3a00000 	mov	r0, #0	; 0x0
         790d8:	e1a0f00e 	mov	pc, lr
         790dc:	e5b01002 	ldr	r1, [r0, #2]!
         790e0:	e1b01821 	movs	r1, r1, lsr #16
         790e4:	1afffff4 	bne	790bc <MoveArrayElement__F6RefVarlT2+0xf8>
         790e8:	e3a00001 	mov	r0, #1	; 0x1
         790ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MakePhrasalLexEntry__FRC6RefVarT1
 * Address: 0007d5b8
 */
void globals::MakePhrasalLexEntry() {
    /*
         7d5b8:	e1a0c00d 	mov	ip, sp
         7d5bc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         7d5c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         7d5c4:	e1a06001 	mov	r6, r1
         7d5c8:	e24ddf42 	sub	sp, sp, #264	; 0x108
         7d5cc:	e3a00002 	mov	r0, #2	; 0x2
         7d5d0:	eb6d12dd 	bl	1bc214c <$AllocateRefHandle(long)>
         7d5d4:	e1a04000 	mov	r4, r0
         7d5d8:	e3a00002 	mov	r0, #2	; 0x2
         7d5dc:	eb6d12da 	bl	1bc214c <$AllocateRefHandle(long)>
         7d5e0:	e58d0104 	str	r0, [sp, #260]
         7d5e4:	e3a00002 	mov	r0, #2	; 0x2
         7d5e8:	eb6d12d7 	bl	1bc214c <$AllocateRefHandle(long)>
         7d5ec:	e1a07000 	mov	r7, r0
         7d5f0:	e3a00002 	mov	r0, #2	; 0x2
         7d5f4:	eb6d12d4 	bl	1bc214c <$AllocateRefHandle(long)>
         7d5f8:	e58d0100 	str	r0, [sp, #256]
         7d5fc:	e3a00002 	mov	r0, #2	; 0x2
         7d600:	eb6d12d1 	bl	1bc214c <$AllocateRefHandle(long)>
         7d604:	e1a05000 	mov	r5, r0
         7d608:	e5960000 	ldr	r0, [r6]
         7d60c:	e5900000 	ldr	r0, [r0]
         7d610:	e59d1104 	ldr	r1, [sp, #260]
         7d614:	e5810000 	str	r0, [r1]
         7d618:	e24dd004 	sub	sp, sp, #4	; 0x4
         7d61c:	e28d0f42 	add	r0, sp, #264	; 0x108
         7d620:	eb6dd8da 	bl	1bf3990 <$IsFrame(RefVar const &)>
         7d624:	e3a06002 	mov	r6, #2	; 0x2
         7d628:	e3300000 	teq	r0, #0	; 0x0
         7d62c:	1a000009 	bne	7d658 <MakePhrasalLexEntry__FRC6RefVarT1+0xa0>
         7d630:	e1a00006 	mov	r0, r6
         7d634:	eb6d12c4 	bl	1bc214c <$AllocateRefHandle(long)>
         7d638:	e58d0000 	str	r0, [sp]
         7d63c:	e1a0000d 	mov	r0, sp
         7d640:	e28d1f42 	add	r1, sp, #264	; 0x108
         7d644:	eb66f5ae 	bl	1a3ad04 <$MapSymToFrame__FRC6RefVarT1>
         7d648:	e59d1108 	ldr	r1, [sp, #264]
         7d64c:	e5810000 	str	r0, [r1]
         7d650:	e59d0000 	ldr	r0, [sp]
         7d654:	eb6d16d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d658:	e28d0f42 	add	r0, sp, #264	; 0x108
         7d65c:	eb6dd8cb 	bl	1bf3990 <$IsFrame(RefVar const &)>
         7d660:	e3300000 	teq	r0, #0	; 0x0
         7d664:	1a00000b 	bne	7d698 <MakePhrasalLexEntry__FRC6RefVarT1+0xe0>
         7d668:	e1a00005 	mov	r0, r5
         7d66c:	eb6d16d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d670:	e59d0104 	ldr	r0, [sp, #260]
         7d674:	eb6d16d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d678:	e1a00007 	mov	r0, r7
         7d67c:	eb6d16ce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d680:	e59d0108 	ldr	r0, [sp, #264]
         7d684:	eb6d16cc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d688:	e1a00004 	mov	r0, r4
         7d68c:	eb6d16ca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d690:	e1a00006 	mov	r0, r6
         7d694:	ea000038 	b	7d77c <MakePhrasalLexEntry__FRC6RefVarT1+0x1c4>
         7d698:	e59f00e0 	ldr	r0, [pc, #e0]	; 7d780 <MakePhrasalLexEntry__FRC6RefVarT1+0x1c8>
         7d69c:	e5900000 	ldr	r0, [r0]
         7d6a0:	e5901000 	ldr	r1, [r0]
         7d6a4:	e59d0108 	ldr	r0, [sp, #264]
         7d6a8:	e5900000 	ldr	r0, [r0]
         7d6ac:	eb6d1aeb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7d6b0:	e5850000 	str	r0, [r5]
         7d6b4:	e3300002 	teq	r0, #2	; 0x2
         7d6b8:	0a000024 	beq	7d750 <MakePhrasalLexEntry__FRC6RefVarT1+0x198>
         7d6bc:	e59f00c0 	ldr	r0, [pc, #c0]	; 7d784 <MakePhrasalLexEntry__FRC6RefVarT1+0x1cc>
         7d6c0:	e5900000 	ldr	r0, [r0]
         7d6c4:	e5901000 	ldr	r1, [r0]
         7d6c8:	e59d0108 	ldr	r0, [sp, #264]
         7d6cc:	e5900000 	ldr	r0, [r0]
         7d6d0:	eb6d1ae2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7d6d4:	e5840000 	str	r0, [r4]
         7d6d8:	e1a01000 	mov	r1, r0
         7d6dc:	e3300002 	teq	r0, #2	; 0x2
         7d6e0:	0a00001a 	beq	7d750 <MakePhrasalLexEntry__FRC6RefVarT1+0x198>
         7d6e4:	e1a00001 	mov	r0, r1
         7d6e8:	eb6d1eef 	bl	1bc52ac <$Length(long)>
         7d6ec:	e1a08000 	mov	r8, r0
         7d6f0:	e3a06000 	mov	r6, #0	; 0x0
         7d6f4:	e3500000 	cmp	r0, #0	; 0x0
         7d6f8:	9a000014 	bls	7d750 <MakePhrasalLexEntry__FRC6RefVarT1+0x198>
         7d6fc:	e59f9084 	ldr	r9, [pc, #84]	; 7d788 <MakePhrasalLexEntry__FRC6RefVarT1+0x1d0>
         7d700:	e1a01006 	mov	r1, r6
         7d704:	e5940000 	ldr	r0, [r4]
         7d708:	eb6d1ad1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7d70c:	e59d1104 	ldr	r1, [sp, #260]
         7d710:	e5810000 	str	r0, [r1]
         7d714:	e28d0f41 	add	r0, sp, #260	; 0x104
         7d718:	eb66f57b 	bl	1a3ad0c <$NewASCIIString(RefVar const &)>
         7d71c:	e1a01000 	mov	r1, r0
         7d720:	e1a0a000 	mov	sl, r0
         7d724:	e28d0004 	add	r0, sp, #4	; 0x4
         7d728:	eb66ed39 	bl	1a38c14 <$Bstrcpy__FPUcT1>
         7d72c:	e28d2f42 	add	r2, sp, #264	; 0x108
         7d730:	e28d0004 	add	r0, sp, #4	; 0x4
         7d734:	e5991004 	ldr	r1, [r9, #4]
         7d738:	eb66f993 	bl	1a3bd8c <$TrieAdd(char *, AirusAParmBlock **, RefVar const &)>
         7d73c:	e1a0000a 	mov	r0, sl
         7d740:	eb6d8e5b 	bl	1be10b4 <$DisposPtr>
         7d744:	e2866001 	add	r6, r6, #1	; 0x1
         7d748:	e1560008 	cmp	r6, r8
         7d74c:	3affffeb 	bcc	7d700 <MakePhrasalLexEntry__FRC6RefVarT1+0x148>
         7d750:	e1a00005 	mov	r0, r5
         7d754:	eb6d1698 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d758:	e59d0104 	ldr	r0, [sp, #260]
         7d75c:	eb6d1696 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d760:	e1a00007 	mov	r0, r7
         7d764:	eb6d1694 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d768:	e59d0108 	ldr	r0, [sp, #264]
         7d76c:	eb6d1692 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d770:	e1a00004 	mov	r0, r4
         7d774:	eb6d1690 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7d778:	e3a0001a 	mov	r0, #26	; 0x1a
         7d77c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7d780:	00683300 	rsbeq	r3, r8, r0, lsl #6
         7d784:	00683558 	rsbeq	r3, r8, r8, asr r5
         7d788:	0c100b68 	ldceq	11, cr0, [r0], -#416
    */
}

/**
 * Symbol: MatchString(AirusAParmBlock **, char *, RefVar const &)
 * Address: 0007ddd8
 */
MatchString(AirusAParmBlock **, char *, RefVar const &) {
    /*
         7ddd8:	e1a0c00d 	mov	ip, sp
         7dddc:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         7dde0:	e24cb004 	sub	fp, ip, #4	; 0x4
         7dde4:	e1a0a000 	mov	sl, r0
         7dde8:	e1a04001 	mov	r4, r1
         7ddec:	e24dd024 	sub	sp, sp, #36	; 0x24
         7ddf0:	e3a00002 	mov	r0, #2	; 0x2
         7ddf4:	eb6d10d4 	bl	1bc214c <$AllocateRefHandle(long)>
         7ddf8:	e58d0014 	str	r0, [sp, #20]
         7ddfc:	e3a00002 	mov	r0, #2	; 0x2
         7de00:	eb6d10d1 	bl	1bc214c <$AllocateRefHandle(long)>
         7de04:	e1a09000 	mov	r9, r0
         7de08:	e3a00002 	mov	r0, #2	; 0x2
         7de0c:	eb6d10ce 	bl	1bc214c <$AllocateRefHandle(long)>
         7de10:	e58d0010 	str	r0, [sp, #16]
         7de14:	e3a00002 	mov	r0, #2	; 0x2
         7de18:	eb6d10cb 	bl	1bc214c <$AllocateRefHandle(long)>
         7de1c:	e1a08000 	mov	r8, r0
         7de20:	e3a00002 	mov	r0, #2	; 0x2
         7de24:	eb6d10c8 	bl	1bc214c <$AllocateRefHandle(long)>
         7de28:	e58d000c 	str	r0, [sp, #12]
         7de2c:	e3a00002 	mov	r0, #2	; 0x2
         7de30:	eb6d10c5 	bl	1bc214c <$AllocateRefHandle(long)>
         7de34:	e1a07000 	mov	r7, r0
         7de38:	e3a00002 	mov	r0, #2	; 0x2
         7de3c:	eb6d10c2 	bl	1bc214c <$AllocateRefHandle(long)>
         7de40:	e1a06000 	mov	r6, r0
         7de44:	e3a00002 	mov	r0, #2	; 0x2
         7de48:	eb6d10bf 	bl	1bc214c <$AllocateRefHandle(long)>
         7de4c:	e1a05000 	mov	r5, r0
         7de50:	e28d001c 	add	r0, sp, #28	; 0x1c
         7de54:	e58d0018 	str	r0, [sp, #24]
         7de58:	e1a00004 	mov	r0, r4
         7de5c:	eb66eb77 	bl	1a38c40 <$DownCase(unsigned char *)>
         7de60:	e1a04000 	mov	r4, r0
         7de64:	eb66eb82 	bl	1a38c74 <$DynaTrieLookup(char *)>
         7de68:	e59d1014 	ldr	r1, [sp, #20]
         7de6c:	e3a03000 	mov	r3, #0	; 0x0
         7de70:	e5810000 	str	r0, [r1]
         7de74:	e92d0008 	stmdb	sp!, {r3}
         7de78:	e28d301c 	add	r3, sp, #28	; 0x1c
         7de7c:	e1a01004 	mov	r1, r4
         7de80:	e1a0000a 	mov	r0, sl
         7de84:	e3a02000 	mov	r2, #0	; 0x0
         7de88:	eb660c82 	bl	1a01098 <$VerifyString>
         7de8c:	e28dd004 	add	sp, sp, #4	; 0x4
         7de90:	e59f0128 	ldr	r0, [pc, #128]	; 7dfc0 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x1e8>
         7de94:	e5900000 	ldr	r0, [r0]
         7de98:	e59fa124 	ldr	sl, [pc, #124]	; 7dfc4 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x1ec>
         7de9c:	e3300002 	teq	r0, #2	; 0x2
         7dea0:	13300003 	teqne	r0, #3	; 0x3
         7dea4:	e59d0014 	ldr	r0, [sp, #20]
         7dea8:	e5900000 	ldr	r0, [r0]
         7deac:	1a000078 	bne	7e094 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x2bc>
         7deb0:	e3300002 	teq	r0, #2	; 0x2
         7deb4:	0a000043 	beq	7dfc8 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x1f0>
         7deb8:	e24dd014 	sub	sp, sp, #20	; 0x14
         7debc:	e1a00004 	mov	r0, r4
         7dec0:	eb6d1d02 	bl	1bc52d0 <$MakeString(char const *)>
         7dec4:	eb6d10a0 	bl	1bc214c <$AllocateRefHandle(long)>
         7dec8:	e58d0000 	str	r0, [sp]
         7decc:	e1a0400d 	mov	r4, sp
         7ded0:	e5ba001c 	ldr	r0, [sl, #28]!
         7ded4:	eb6d109c 	bl	1bc214c <$AllocateRefHandle(long)>
         7ded8:	e1a0a000 	mov	sl, r0
         7dedc:	e59d002c 	ldr	r0, [sp, #44]
         7dee0:	e5901000 	ldr	r1, [r0]
         7dee4:	e59a0000 	ldr	r0, [sl]
         7dee8:	eb6d18d9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7deec:	eb6d1096 	bl	1bc214c <$AllocateRefHandle(long)>
         7def0:	e58d000c 	str	r0, [sp, #12]
         7def4:	e28d200c 	add	r2, sp, #12	; 0xc
         7def8:	e3a00002 	mov	r0, #2	; 0x2
         7defc:	e52d2004 	str	r2, [sp, -#4]!
         7df00:	eb6d1091 	bl	1bc214c <$AllocateRefHandle(long)>
         7df04:	e58d0014 	str	r0, [sp, #20]
         7df08:	e28d0014 	add	r0, sp, #20	; 0x14
         7df0c:	e28d102c 	add	r1, sp, #44	; 0x2c
         7df10:	e49d2004 	ldr	r2, [sp], #4
         7df14:	eb66f7a1 	bl	1a3bda0 <$UniqueAppendListGen__FRC6RefVarN21>
         7df18:	eb6d108b 	bl	1bc214c <$AllocateRefHandle(long)>
         7df1c:	e58d0004 	str	r0, [sp, #4]
         7df20:	e28d1004 	add	r1, sp, #4	; 0x4
         7df24:	e3a00002 	mov	r0, #2	; 0x2
         7df28:	e52d1004 	str	r1, [sp, -#4]!
         7df2c:	eb6d1086 	bl	1bc214c <$AllocateRefHandle(long)>
         7df30:	e58d000c 	str	r0, [sp, #12]
         7df34:	e28d000c 	add	r0, sp, #12	; 0xc
         7df38:	e1a02004 	mov	r2, r4
         7df3c:	e49d1004 	ldr	r1, [sp], #4
         7df40:	eb66f79d 	bl	1a3bdbc <$TagPhraseFrame__FRC6RefVarN21>
         7df44:	e1a04000 	mov	r4, r0
         7df48:	e59d0000 	ldr	r0, [sp]
         7df4c:	eb6d149a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7df50:	e59d0004 	ldr	r0, [sp, #4]
         7df54:	eb6d1498 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7df58:	e59d0008 	ldr	r0, [sp, #8]
         7df5c:	eb6d1496 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7df60:	e59d000c 	ldr	r0, [sp, #12]
         7df64:	eb6d1494 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7df68:	e59d0010 	ldr	r0, [sp, #16]
         7df6c:	eb6d1492 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7df70:	e1a0000a 	mov	r0, sl
         7df74:	eb6d1490 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7df78:	e1a00005 	mov	r0, r5
         7df7c:	eb6d148e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7df80:	e1a00006 	mov	r0, r6
         7df84:	eb6d148c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7df88:	e1a00007 	mov	r0, r7
         7df8c:	eb6d148a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7df90:	e59d0020 	ldr	r0, [sp, #32]
         7df94:	eb6d1488 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7df98:	e1a00008 	mov	r0, r8
         7df9c:	eb6d1486 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7dfa0:	e59d0024 	ldr	r0, [sp, #36]
         7dfa4:	eb6d1484 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7dfa8:	e1a00009 	mov	r0, r9
         7dfac:	eb6d1482 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7dfb0:	e59d0028 	ldr	r0, [sp, #40]
         7dfb4:	eb6d1480 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7dfb8:	e1a00004 	mov	r0, r4
         7dfbc:	ea0001c1 	b	7e6c8 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x8f0>
         7dfc0:	0c100810 	ldceq	8, cr0, [r0], -#64
         7dfc4:	0c100b68 	ldceq	11, cr0, [r0], -#416
         7dfc8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         7dfcc:	e1a00004 	mov	r0, r4
         7dfd0:	eb6d1cbe 	bl	1bc52d0 <$MakeString(char const *)>
         7dfd4:	eb6d105c 	bl	1bc214c <$AllocateRefHandle(long)>
         7dfd8:	e58d0000 	str	r0, [sp]
         7dfdc:	e1a0400d 	mov	r4, sp
         7dfe0:	e5ba001c 	ldr	r0, [sl, #28]!
         7dfe4:	eb6d1058 	bl	1bc214c <$AllocateRefHandle(long)>
         7dfe8:	e1a0a000 	mov	sl, r0
         7dfec:	e59d0024 	ldr	r0, [sp, #36]
         7dff0:	e5901000 	ldr	r1, [r0]
         7dff4:	e59a0000 	ldr	r0, [sl]
         7dff8:	eb6d1895 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7dffc:	eb6d1052 	bl	1bc214c <$AllocateRefHandle(long)>
         7e000:	e58d0004 	str	r0, [sp, #4]
         7e004:	e28d1004 	add	r1, sp, #4	; 0x4
         7e008:	e3a00002 	mov	r0, #2	; 0x2
         7e00c:	e52d1004 	str	r1, [sp, -#4]!
         7e010:	eb6d104d 	bl	1bc214c <$AllocateRefHandle(long)>
         7e014:	e58d000c 	str	r0, [sp, #12]
         7e018:	e28d000c 	add	r0, sp, #12	; 0xc
         7e01c:	e1a02004 	mov	r2, r4
         7e020:	e49d1004 	ldr	r1, [sp], #4
         7e024:	eb66f764 	bl	1a3bdbc <$TagPhraseFrame__FRC6RefVarN21>
         7e028:	e1a04000 	mov	r4, r0
         7e02c:	e59d0000 	ldr	r0, [sp]
         7e030:	eb6d1461 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e034:	e59d0004 	ldr	r0, [sp, #4]
         7e038:	eb6d145f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e03c:	e59d0008 	ldr	r0, [sp, #8]
         7e040:	eb6d145d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e044:	e1a0000a 	mov	r0, sl
         7e048:	eb6d145b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e04c:	e1a00005 	mov	r0, r5
         7e050:	eb6d1459 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e054:	e1a00006 	mov	r0, r6
         7e058:	eb6d1457 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e05c:	e1a00007 	mov	r0, r7
         7e060:	eb6d1455 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e064:	e59d0018 	ldr	r0, [sp, #24]
         7e068:	eb6d1453 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e06c:	e1a00008 	mov	r0, r8
         7e070:	eb6d1451 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e074:	e59d001c 	ldr	r0, [sp, #28]
         7e078:	eb6d144f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e07c:	e1a00009 	mov	r0, r9
         7e080:	eb6d144d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e084:	e59d0020 	ldr	r0, [sp, #32]
         7e088:	eb6d144b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e08c:	e1a00004 	mov	r0, r4
         7e090:	ea000203 	b	7e8a4 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0xacc>
         7e094:	e3300002 	teq	r0, #2	; 0x2
         7e098:	0a000012 	beq	7e0e8 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x310>
         7e09c:	e1a04000 	mov	r4, r0
         7e0a0:	e1a00005 	mov	r0, r5
         7e0a4:	eb6d1444 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e0a8:	e1a00006 	mov	r0, r6
         7e0ac:	eb6d1442 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e0b0:	e1a00007 	mov	r0, r7
         7e0b4:	eb6d1440 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e0b8:	e59d000c 	ldr	r0, [sp, #12]
         7e0bc:	eb6d143e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e0c0:	e1a00008 	mov	r0, r8
         7e0c4:	eb6d143c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e0c8:	e59d0010 	ldr	r0, [sp, #16]
         7e0cc:	eb6d143a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e0d0:	e1a00009 	mov	r0, r9
         7e0d4:	eb6d1438 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e0d8:	e59d0014 	ldr	r0, [sp, #20]
         7e0dc:	eb6d1436 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e0e0:	e1a00004 	mov	r0, r4
         7e0e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7e0e8:	e24dd008 	sub	sp, sp, #8	; 0x8
         7e0ec:	e3a00002 	mov	r0, #2	; 0x2
         7e0f0:	eb6d1015 	bl	1bc214c <$AllocateRefHandle(long)>
         7e0f4:	e58d0004 	str	r0, [sp, #4]
         7e0f8:	e28d0004 	add	r0, sp, #4	; 0x4
         7e0fc:	e1a01004 	mov	r1, r4
         7e100:	eb66eac7 	bl	1a38c24 <$cLexDateLookup(RefVar const &, char *)>
         7e104:	e2500002 	subs	r0, r0, #2	; 0x2
         7e108:	13a00001 	movne	r0, #1	; 0x1
         7e10c:	e58d0000 	str	r0, [sp]
         7e110:	e59d0004 	ldr	r0, [sp, #4]
         7e114:	eb6d1428 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e118:	e59d0000 	ldr	r0, [sp]
         7e11c:	e59f12c4 	ldr	r1, [pc, #2c4]	; 7e3e8 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x610>
         7e120:	e3300000 	teq	r0, #0	; 0x0
         7e124:	e58d1028 	str	r1, [sp, #40]
         7e128:	e28dd004 	add	sp, sp, #4	; 0x4
         7e12c:	1a0000b4 	bne	7e404 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x62c>
         7e130:	e24dd008 	sub	sp, sp, #8	; 0x8
         7e134:	e3a00002 	mov	r0, #2	; 0x2
         7e138:	eb6d1003 	bl	1bc214c <$AllocateRefHandle(long)>
         7e13c:	e58d0004 	str	r0, [sp, #4]
         7e140:	e28d0004 	add	r0, sp, #4	; 0x4
         7e144:	e1a01004 	mov	r1, r4
         7e148:	eb66eab8 	bl	1a38c30 <$cLexTimeLookup(RefVar const &, char *)>
         7e14c:	e2500002 	subs	r0, r0, #2	; 0x2
         7e150:	13a00001 	movne	r0, #1	; 0x1
         7e154:	e58d0000 	str	r0, [sp]
         7e158:	e59d0004 	ldr	r0, [sp, #4]
         7e15c:	eb6d1416 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e160:	e49d0004 	ldr	r0, [sp], #4
         7e164:	e3300000 	teq	r0, #0	; 0x0
         7e168:	1a0000cb 	bne	7e49c <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x6c4>
         7e16c:	e24dd008 	sub	sp, sp, #8	; 0x8
         7e170:	e3a00002 	mov	r0, #2	; 0x2
         7e174:	eb6d0ff4 	bl	1bc214c <$AllocateRefHandle(long)>
         7e178:	e58d0004 	str	r0, [sp, #4]
         7e17c:	e28d0004 	add	r0, sp, #4	; 0x4
         7e180:	e1a01004 	mov	r1, r4
         7e184:	eb66eaa8 	bl	1a38c2c <$cLexPhoneLookup(RefVar const &, char *)>
         7e188:	e2500002 	subs	r0, r0, #2	; 0x2
         7e18c:	13a00001 	movne	r0, #1	; 0x1
         7e190:	e58d0000 	str	r0, [sp]
         7e194:	e59d0004 	ldr	r0, [sp, #4]
         7e198:	eb6d1407 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e19c:	e49d0004 	ldr	r0, [sp], #4
         7e1a0:	e3300000 	teq	r0, #0	; 0x0
         7e1a4:	1a0000e1 	bne	7e530 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x758>
         7e1a8:	e24dd008 	sub	sp, sp, #8	; 0x8
         7e1ac:	e3a00002 	mov	r0, #2	; 0x2
         7e1b0:	eb6d0fe5 	bl	1bc214c <$AllocateRefHandle(long)>
         7e1b4:	e58d0004 	str	r0, [sp, #4]
         7e1b8:	e28d0004 	add	r0, sp, #4	; 0x4
         7e1bc:	e1a01004 	mov	r1, r4
         7e1c0:	eb66ea98 	bl	1a38c28 <$cLexNumberLookup(RefVar const &, char *)>
         7e1c4:	e2500002 	subs	r0, r0, #2	; 0x2
         7e1c8:	13a00001 	movne	r0, #1	; 0x1
         7e1cc:	e58d0000 	str	r0, [sp]
         7e1d0:	e59d0004 	ldr	r0, [sp, #4]
         7e1d4:	eb6d13f8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e1d8:	e49d0004 	ldr	r0, [sp], #4
         7e1dc:	e3300000 	teq	r0, #0	; 0x0
         7e1e0:	0a000019 	beq	7e24c <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x474>
         7e1e4:	e24dd008 	sub	sp, sp, #8	; 0x8
         7e1e8:	e59f01fc 	ldr	r0, [pc, #1fc]	; 7e3ec <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x614>
         7e1ec:	e5900000 	ldr	r0, [r0]
         7e1f0:	e5901000 	ldr	r1, [r0]
         7e1f4:	e59f01f4 	ldr	r0, [pc, #1f4]	; 7e3f0 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x618>
         7e1f8:	e5900000 	ldr	r0, [r0]
         7e1fc:	e5900000 	ldr	r0, [r0]
         7e200:	eb6d1816 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7e204:	eb6d0fd0 	bl	1bc214c <$AllocateRefHandle(long)>
         7e208:	e58d0000 	str	r0, [sp]
         7e20c:	e1a0000d 	mov	r0, sp
         7e210:	eb6d0fd5 	bl	1bc216c <$Clone(RefVar const &)>
         7e214:	e59d1028 	ldr	r1, [sp, #40]
         7e218:	e5810000 	str	r0, [r1]
         7e21c:	e59d0000 	ldr	r0, [sp]
         7e220:	eb6d13e5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e224:	e5ba0014 	ldr	r0, [sl, #20]!
         7e228:	eb6d0fc7 	bl	1bc214c <$AllocateRefHandle(long)>
         7e22c:	e58d0004 	str	r0, [sp, #4]
         7e230:	e28d2004 	add	r2, sp, #4	; 0x4
         7e234:	e59d1038 	ldr	r1, [sp, #56]
         7e238:	e28d0028 	add	r0, sp, #40	; 0x28
         7e23c:	eb6d2049 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7e240:	e59d0004 	ldr	r0, [sp, #4]
         7e244:	eb6d13dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e248:	e28dd008 	add	sp, sp, #8	; 0x8
         7e24c:	e28dd004 	add	sp, sp, #4	; 0x4
         7e250:	e28dd004 	add	sp, sp, #4	; 0x4
         7e254:	e28dd004 	add	sp, sp, #4	; 0x4
         7e258:	e59d0014 	ldr	r0, [sp, #20]
         7e25c:	e5900000 	ldr	r0, [r0]
         7e260:	e3300002 	teq	r0, #2	; 0x2
         7e264:	0a000014 	beq	7e2bc <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x4e4>
         7e268:	e24dd004 	sub	sp, sp, #4	; 0x4
         7e26c:	e1a00004 	mov	r0, r4
         7e270:	eb6d1c16 	bl	1bc52d0 <$MakeString(char const *)>
         7e274:	eb6d0fb4 	bl	1bc214c <$AllocateRefHandle(long)>
         7e278:	e58d0000 	str	r0, [sp]
         7e27c:	e1a0200d 	mov	r2, sp
         7e280:	e59f116c 	ldr	r1, [pc, #16c]	; 7e3f4 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x61c>
         7e284:	e28d0018 	add	r0, sp, #24	; 0x18
         7e288:	eb6d2036 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7e28c:	e59d0000 	ldr	r0, [sp]
         7e290:	eb6d13c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e294:	e3a0a000 	mov	sl, #0	; 0x0
         7e298:	e59f0158 	ldr	r0, [pc, #158]	; 7e3f8 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x620>
         7e29c:	e3a01001 	mov	r1, #1	; 0x1
         7e2a0:	eb6d0fa4 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         7e2a4:	e5880000 	str	r0, [r8]
         7e2a8:	e59d1018 	ldr	r1, [sp, #24]
         7e2ac:	e5912000 	ldr	r2, [r1]
         7e2b0:	e1a0100a 	mov	r1, sl
         7e2b4:	eb6d2027 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         7e2b8:	e28dd004 	add	sp, sp, #4	; 0x4
         7e2bc:	e5990000 	ldr	r0, [r9]
         7e2c0:	e3300002 	teq	r0, #2	; 0x2
         7e2c4:	0a0000ba 	beq	7e5b4 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x7dc>
         7e2c8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         7e2cc:	e59f0128 	ldr	r0, [pc, #128]	; 7e3fc <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x624>
         7e2d0:	e5900000 	ldr	r0, [r0]
         7e2d4:	e5900000 	ldr	r0, [r0]
         7e2d8:	eb6d0f9b 	bl	1bc214c <$AllocateRefHandle(long)>
         7e2dc:	e58d0008 	str	r0, [sp, #8]
         7e2e0:	e1a00004 	mov	r0, r4
         7e2e4:	eb6d1bf9 	bl	1bc52d0 <$MakeString(char const *)>
         7e2e8:	eb6d0f97 	bl	1bc214c <$AllocateRefHandle(long)>
         7e2ec:	e58d0000 	str	r0, [sp]
         7e2f0:	e1a0a00d 	mov	sl, sp
         7e2f4:	e3a00002 	mov	r0, #2	; 0x2
         7e2f8:	eb6d0f93 	bl	1bc214c <$AllocateRefHandle(long)>
         7e2fc:	e58d0004 	str	r0, [sp, #4]
         7e300:	e28d0004 	add	r0, sp, #4	; 0x4
         7e304:	e28d1008 	add	r1, sp, #8	; 0x8
         7e308:	e1a0200a 	mov	r2, sl
         7e30c:	eb696205 	bl	1ad6b28 <$FFindStringInArray__FRC6RefVarN21>
         7e310:	e5850000 	str	r0, [r5]
         7e314:	e59d0000 	ldr	r0, [sp]
         7e318:	eb6d13a7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e31c:	e3a0a000 	mov	sl, #0	; 0x0
         7e320:	e59d0004 	ldr	r0, [sp, #4]
         7e324:	eb6d13a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e328:	e5950000 	ldr	r0, [r5]
         7e32c:	e3300002 	teq	r0, #2	; 0x2
         7e330:	0a00009c 	beq	7e5a8 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x7d0>
         7e334:	e59f00c4 	ldr	r0, [pc, #c4]	; 7e400 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x628>
         7e338:	e5900000 	ldr	r0, [r0]
         7e33c:	e5901000 	ldr	r1, [r0]
         7e340:	e51b202c 	ldr	r2, [fp, -#44]
         7e344:	e5920000 	ldr	r0, [r2]
         7e348:	e5900000 	ldr	r0, [r0]
         7e34c:	eb6d17c3 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7e350:	eb6d0f7d 	bl	1bc214c <$AllocateRefHandle(long)>
         7e354:	e1a0a000 	mov	sl, r0
         7e358:	e5950000 	ldr	r0, [r5]
         7e35c:	e3100003 	tst	r0, #3	; 0x3
         7e360:	01a00140 	moveq	r0, r0, asr #2
         7e364:	0a000000 	beq	7e36c <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x594>
         7e368:	eb6d0f6b 	bl	1bc211c <$_RINTError(long)>
         7e36c:	e1a01000 	mov	r1, r0
         7e370:	e59a0000 	ldr	r0, [sl]
         7e374:	eb6d17b6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7e378:	e58d0018 	str	r0, [sp, #24]
         7e37c:	e1a0000a 	mov	r0, sl
         7e380:	eb6d138d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e384:	e24dd004 	sub	sp, sp, #4	; 0x4
         7e388:	e59d001c 	ldr	r0, [sp, #28]
         7e38c:	e3300002 	teq	r0, #2	; 0x2
         7e390:	1a000081 	bne	7e59c <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x7c4>
         7e394:	e59f0064 	ldr	r0, [pc, #64]	; 7e400 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x628>
         7e398:	e5900000 	ldr	r0, [r0]
         7e39c:	e5901000 	ldr	r1, [r0]
         7e3a0:	e51b202c 	ldr	r2, [fp, -#44]
         7e3a4:	e5920000 	ldr	r0, [r2]
         7e3a8:	e5900000 	ldr	r0, [r0]
         7e3ac:	eb6d17ab 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7e3b0:	eb6d0f65 	bl	1bc214c <$AllocateRefHandle(long)>
         7e3b4:	e1a0a000 	mov	sl, r0
         7e3b8:	e3a00000 	mov	r0, #0	; 0x0
         7e3bc:	eb6d0f62 	bl	1bc214c <$AllocateRefHandle(long)>
         7e3c0:	e58d0000 	str	r0, [sp]
         7e3c4:	e5902000 	ldr	r2, [r0]
         7e3c8:	e59a0000 	ldr	r0, [sl]
         7e3cc:	e59d101c 	ldr	r1, [sp, #28]
         7e3d0:	eb6d1fe0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         7e3d4:	e59d0000 	ldr	r0, [sp]
         7e3d8:	eb6d1377 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e3dc:	e1a0000a 	mov	r0, sl
         7e3e0:	eb6d1375 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e3e4:	ea00006e 	b	7e5a4 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x7cc>
         7e3e8:	00683300 	rsbeq	r3, r8, r0, lsl #6
         7e3ec:	00683550 	rsbeq	r3, r8, r0, asr r5
         7e3f0:	00681348 	rsbeq	r1, r8, r8, asr #6
         7e3f4:	00684e98 	streqb	r4, [r8], -#232
         7e3f8:	00683548 	rsbeq	r3, r8, r8, asr #10
         7e3fc:	00680100 	rsbeq	r0, r8, r0, lsl #2
         7e400:	00682cd8 	ldreqd	r2, [r8], -#200
         7e404:	e24dd00c 	sub	sp, sp, #12	; 0xc
         7e408:	e51f0024 	ldr	r0, [pc, #ffffffdc]	; 7e3ec <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x614>
         7e40c:	e5900000 	ldr	r0, [r0]
         7e410:	e5901000 	ldr	r1, [r0]
         7e414:	e51f002c 	ldr	r0, [pc, #ffffffd4]	; 7e3f0 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x618>
         7e418:	e5900000 	ldr	r0, [r0]
         7e41c:	e5900000 	ldr	r0, [r0]
         7e420:	eb6d178e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7e424:	eb6d0f48 	bl	1bc214c <$AllocateRefHandle(long)>
         7e428:	e58d0000 	str	r0, [sp]
         7e42c:	e1a0000d 	mov	r0, sp
         7e430:	eb6d0f4d 	bl	1bc216c <$Clone(RefVar const &)>
         7e434:	e59d1020 	ldr	r1, [sp, #32]
         7e438:	e5810000 	str	r0, [r1]
         7e43c:	e5890000 	str	r0, [r9]
         7e440:	e59d0000 	ldr	r0, [sp]
         7e444:	eb6d135c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e448:	e5ba0008 	ldr	r0, [sl, #8]!
         7e44c:	eb6d0f3e 	bl	1bc214c <$AllocateRefHandle(long)>
         7e450:	e58d0004 	str	r0, [sp, #4]
         7e454:	e28d2004 	add	r2, sp, #4	; 0x4
         7e458:	e59d1030 	ldr	r1, [sp, #48]
         7e45c:	e28d0020 	add	r0, sp, #32	; 0x20
         7e460:	eb6d1fc0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7e464:	e59d0004 	ldr	r0, [sp, #4]
         7e468:	eb6d1353 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e46c:	e3a00000 	mov	r0, #0	; 0x0
         7e470:	eb6d0f35 	bl	1bc214c <$AllocateRefHandle(long)>
         7e474:	e58d0008 	str	r0, [sp, #8]
         7e478:	e28d2008 	add	r2, sp, #8	; 0x8
         7e47c:	e59f1014 	ldr	r1, [pc, #14]	; 7e498 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x6c0>
         7e480:	e28d0020 	add	r0, sp, #32	; 0x20
         7e484:	eb6d1fb7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7e488:	e59d0008 	ldr	r0, [sp, #8]
         7e48c:	eb6d134a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e490:	e28dd00c 	add	sp, sp, #12	; 0xc
         7e494:	eaffff6f 	b	7e258 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x480>
         7e498:	006827d8 	ldreqd	r2, [r8], -#120
         7e49c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         7e4a0:	e51f00bc 	ldr	r0, [pc, #ffffff44]	; 7e3ec <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x614>
         7e4a4:	e5900000 	ldr	r0, [r0]
         7e4a8:	e5901000 	ldr	r1, [r0]
         7e4ac:	e51f00c4 	ldr	r0, [pc, #ffffff3c]	; 7e3f0 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x618>
         7e4b0:	e5900000 	ldr	r0, [r0]
         7e4b4:	e5900000 	ldr	r0, [r0]
         7e4b8:	eb6d1768 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7e4bc:	eb6d0f22 	bl	1bc214c <$AllocateRefHandle(long)>
         7e4c0:	e58d0000 	str	r0, [sp]
         7e4c4:	e1a0000d 	mov	r0, sp
         7e4c8:	eb6d0f27 	bl	1bc216c <$Clone(RefVar const &)>
         7e4cc:	e59d1024 	ldr	r1, [sp, #36]
         7e4d0:	e5810000 	str	r0, [r1]
         7e4d4:	e59d0000 	ldr	r0, [sp]
         7e4d8:	eb6d1337 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e4dc:	e5ba000c 	ldr	r0, [sl, #12]!
         7e4e0:	eb6d0f19 	bl	1bc214c <$AllocateRefHandle(long)>
         7e4e4:	e58d0004 	str	r0, [sp, #4]
         7e4e8:	e28d2004 	add	r2, sp, #4	; 0x4
         7e4ec:	e59d1034 	ldr	r1, [sp, #52]
         7e4f0:	e28d0024 	add	r0, sp, #36	; 0x24
         7e4f4:	eb6d1f9b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7e4f8:	e59d0004 	ldr	r0, [sp, #4]
         7e4fc:	eb6d132e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e500:	e3a00000 	mov	r0, #0	; 0x0
         7e504:	eb6d0f10 	bl	1bc214c <$AllocateRefHandle(long)>
         7e508:	e58d0008 	str	r0, [sp, #8]
         7e50c:	e28d2008 	add	r2, sp, #8	; 0x8
         7e510:	e59f1014 	ldr	r1, [pc, #14]	; 7e52c <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x754>
         7e514:	e28d0024 	add	r0, sp, #36	; 0x24
         7e518:	eb6d1f92 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7e51c:	e59d0008 	ldr	r0, [sp, #8]
         7e520:	eb6d1325 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e524:	e28dd00c 	add	sp, sp, #12	; 0xc
         7e528:	eaffff49 	b	7e254 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x47c>
         7e52c:	00684b38 	rsbeq	r4, r8, r8, lsr fp
         7e530:	e24dd008 	sub	sp, sp, #8	; 0x8
         7e534:	e51f0150 	ldr	r0, [pc, #fffffeb0]	; 7e3ec <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x614>
         7e538:	e5900000 	ldr	r0, [r0]
         7e53c:	e5901000 	ldr	r1, [r0]
         7e540:	e51f0158 	ldr	r0, [pc, #fffffea8]	; 7e3f0 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x618>
         7e544:	e5900000 	ldr	r0, [r0]
         7e548:	e5900000 	ldr	r0, [r0]
         7e54c:	eb6d1743 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7e550:	eb6d0efd 	bl	1bc214c <$AllocateRefHandle(long)>
         7e554:	e58d0000 	str	r0, [sp]
         7e558:	e1a0000d 	mov	r0, sp
         7e55c:	eb6d0f02 	bl	1bc216c <$Clone(RefVar const &)>
         7e560:	e59d1024 	ldr	r1, [sp, #36]
         7e564:	e5810000 	str	r0, [r1]
         7e568:	e59d0000 	ldr	r0, [sp]
         7e56c:	eb6d1312 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e570:	e5ba0010 	ldr	r0, [sl, #16]!
         7e574:	eb6d0ef4 	bl	1bc214c <$AllocateRefHandle(long)>
         7e578:	e58d0004 	str	r0, [sp, #4]
         7e57c:	e28d2004 	add	r2, sp, #4	; 0x4
         7e580:	e59d1034 	ldr	r1, [sp, #52]
         7e584:	e28d0024 	add	r0, sp, #36	; 0x24
         7e588:	eb6d1f76 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         7e58c:	e59d0004 	ldr	r0, [sp, #4]
         7e590:	eb6d1309 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e594:	e28dd008 	add	sp, sp, #8	; 0x8
         7e598:	eaffff2c 	b	7e250 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x478>
         7e59c:	e3a00002 	mov	r0, #2	; 0x2
         7e5a0:	e5850000 	str	r0, [r5]
         7e5a4:	e28dd004 	add	sp, sp, #4	; 0x4
         7e5a8:	e59d0008 	ldr	r0, [sp, #8]
         7e5ac:	eb6d1302 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e5b0:	e28dd00c 	add	sp, sp, #12	; 0xc
         7e5b4:	e59d0014 	ldr	r0, [sp, #20]
         7e5b8:	e5900000 	ldr	r0, [r0]
         7e5bc:	e3300002 	teq	r0, #2	; 0x2
         7e5c0:	0a000015 	beq	7e61c <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x844>
         7e5c4:	e5950000 	ldr	r0, [r5]
         7e5c8:	e3300002 	teq	r0, #2	; 0x2
         7e5cc:	1a000012 	bne	7e61c <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x844>
         7e5d0:	e1a00005 	mov	r0, r5
         7e5d4:	e5984000 	ldr	r4, [r8]
         7e5d8:	eb6d12f7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e5dc:	e1a00006 	mov	r0, r6
         7e5e0:	eb6d12f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e5e4:	e1a00007 	mov	r0, r7
         7e5e8:	eb6d12f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e5ec:	e59d0010 	ldr	r0, [sp, #16]
         7e5f0:	eb6d12f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e5f4:	e1a00008 	mov	r0, r8
         7e5f8:	eb6d12ef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e5fc:	e59d0014 	ldr	r0, [sp, #20]
         7e600:	eb6d12ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e604:	e1a00009 	mov	r0, r9
         7e608:	eb6d12eb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e60c:	e59d0018 	ldr	r0, [sp, #24]
         7e610:	eb6d12e9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e614:	e1a00004 	mov	r0, r4
         7e618:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7e61c:	e24dd008 	sub	sp, sp, #8	; 0x8
         7e620:	e5950000 	ldr	r0, [r5]
         7e624:	e3300002 	teq	r0, #2	; 0x2
         7e628:	1a000074 	bne	7e800 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0xa28>
         7e62c:	e24dd008 	sub	sp, sp, #8	; 0x8
         7e630:	e1a00004 	mov	r0, r4
         7e634:	eb6d1b25 	bl	1bc52d0 <$MakeString(char const *)>
         7e638:	eb6d0ec3 	bl	1bc214c <$AllocateRefHandle(long)>
         7e63c:	e58d0000 	str	r0, [sp]
         7e640:	e1a0a00d 	mov	sl, sp
         7e644:	e3a00002 	mov	r0, #2	; 0x2
         7e648:	eb6d0ebf 	bl	1bc214c <$AllocateRefHandle(long)>
         7e64c:	e58d0004 	str	r0, [sp, #4]
         7e650:	e28d0004 	add	r0, sp, #4	; 0x4
         7e654:	e1a0100a 	mov	r1, sl
         7e658:	eb66f1c2 	bl	1a3ad68 <$SplitString__FRC6RefVarT1>
         7e65c:	e5870000 	str	r0, [r7]
         7e660:	e59d0000 	ldr	r0, [sp]
         7e664:	eb6d12d4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e668:	e59d0004 	ldr	r0, [sp, #4]
         7e66c:	eb6d12d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e670:	e5970000 	ldr	r0, [r7]
         7e674:	eb6d1b0c 	bl	1bc52ac <$Length(long)>
         7e678:	e58d0018 	str	r0, [sp, #24]
         7e67c:	e3500004 	cmp	r0, #4	; 0x4
         7e680:	da000011 	ble	7e6cc <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x8f4>
         7e684:	e1a00005 	mov	r0, r5
         7e688:	eb6d12cb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e68c:	e1a00006 	mov	r0, r6
         7e690:	eb6d12c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e694:	e1a00007 	mov	r0, r7
         7e698:	eb6d12c7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e69c:	e59d0020 	ldr	r0, [sp, #32]
         7e6a0:	eb6d12c5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e6a4:	e1a00008 	mov	r0, r8
         7e6a8:	eb6d12c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e6ac:	e59d0024 	ldr	r0, [sp, #36]
         7e6b0:	eb6d12c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e6b4:	e1a00009 	mov	r0, r9
         7e6b8:	eb6d12bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e6bc:	e59d0028 	ldr	r0, [sp, #40]
         7e6c0:	eb6d12bd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e6c4:	e3a00002 	mov	r0, #2	; 0x2
         7e6c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7e6cc:	e3a01000 	mov	r1, #0	; 0x0
         7e6d0:	e58d101c 	str	r1, [sp, #28]
         7e6d4:	e59d0018 	ldr	r0, [sp, #24]
         7e6d8:	e3500000 	cmp	r0, #0	; 0x0
         7e6dc:	da000046 	ble	7e7fc <MatchString(AirusAParmBlock **, char *, RefVar const &)+0xa24>
         7e6e0:	e24dd008 	sub	sp, sp, #8	; 0x8
         7e6e4:	e5970000 	ldr	r0, [r7]
         7e6e8:	e59d1024 	ldr	r1, [sp, #36]
         7e6ec:	eb6d16d8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7e6f0:	eb6d0e95 	bl	1bc214c <$AllocateRefHandle(long)>
         7e6f4:	e58d0000 	str	r0, [sp]
         7e6f8:	e1a0a00d 	mov	sl, sp
         7e6fc:	e3a00002 	mov	r0, #2	; 0x2
         7e700:	eb6d0e91 	bl	1bc214c <$AllocateRefHandle(long)>
         7e704:	e58d0004 	str	r0, [sp, #4]
         7e708:	e28d0004 	add	r0, sp, #4	; 0x4
         7e70c:	e1a0100a 	mov	r1, sl
         7e710:	eb66e958 	bl	1a38c78 <$FastStringLookup__FRC6RefVarT1>
         7e714:	e5860000 	str	r0, [r6]
         7e718:	e59d0000 	ldr	r0, [sp]
         7e71c:	eb6d12a6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e720:	e59d0004 	ldr	r0, [sp, #4]
         7e724:	eb6d12a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e728:	e5960000 	ldr	r0, [r6]
         7e72c:	e3300002 	teq	r0, #2	; 0x2
         7e730:	0a00002a 	beq	7e7e0 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0xa08>
         7e734:	eb6d1adc 	bl	1bc52ac <$Length(long)>
         7e738:	e3a0a000 	mov	sl, #0	; 0x0
         7e73c:	e58d001c 	str	r0, [sp, #28]
         7e740:	e3500000 	cmp	r0, #0	; 0x0
         7e744:	da000025 	ble	7e7e0 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0xa08>
         7e748:	e24dd010 	sub	sp, sp, #16	; 0x10
         7e74c:	e59f0154 	ldr	r0, [pc, #154]	; 7e8a8 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0xad0>
         7e750:	e5900000 	ldr	r0, [r0]
         7e754:	e5900000 	ldr	r0, [r0]
         7e758:	eb6d0e7b 	bl	1bc214c <$AllocateRefHandle(long)>
         7e75c:	e58d0004 	str	r0, [sp, #4]
         7e760:	e28d2004 	add	r2, sp, #4	; 0x4
         7e764:	e52d2004 	str	r2, [sp, -#4]!
         7e768:	e1a0100a 	mov	r1, sl
         7e76c:	e5960000 	ldr	r0, [r6]
         7e770:	eb6d16b7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         7e774:	eb6d0e74 	bl	1bc214c <$AllocateRefHandle(long)>
         7e778:	e58d000c 	str	r0, [sp, #12]
         7e77c:	e28d100c 	add	r1, sp, #12	; 0xc
         7e780:	e3a00002 	mov	r0, #2	; 0x2
         7e784:	e52d1004 	str	r1, [sp, -#4]!
         7e788:	eb6d0e6f 	bl	1bc214c <$AllocateRefHandle(long)>
         7e78c:	e58d0014 	str	r0, [sp, #20]
         7e790:	e28d0014 	add	r0, sp, #20	; 0x14
         7e794:	e8bd0006 	ldmia	sp!, {r1, r2}
         7e798:	eb66ed50 	bl	1a39ce0 <$ISATest__FRC6RefVarN21>
         7e79c:	e2500002 	subs	r0, r0, #2	; 0x2
         7e7a0:	13a00001 	movne	r0, #1	; 0x1
         7e7a4:	e58d0000 	str	r0, [sp]
         7e7a8:	e59d0004 	ldr	r0, [sp, #4]
         7e7ac:	eb6d1282 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e7b0:	e59d0008 	ldr	r0, [sp, #8]
         7e7b4:	eb6d1280 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e7b8:	e59d000c 	ldr	r0, [sp, #12]
         7e7bc:	eb6d127e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e7c0:	e49d0004 	ldr	r0, [sp], #4
         7e7c4:	e3300000 	teq	r0, #0	; 0x0
         7e7c8:	1a000037 	bne	7e8ac <MatchString(AirusAParmBlock **, char *, RefVar const &)+0xad4>
         7e7cc:	e28dd00c 	add	sp, sp, #12	; 0xc
         7e7d0:	e28aa001 	add	sl, sl, #1	; 0x1
         7e7d4:	e59d001c 	ldr	r0, [sp, #28]
         7e7d8:	e15a0000 	cmp	sl, r0
         7e7dc:	baffffd9 	blt	7e748 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x970>
         7e7e0:	e28dd008 	add	sp, sp, #8	; 0x8
         7e7e4:	e59d101c 	ldr	r1, [sp, #28]
         7e7e8:	e2811001 	add	r1, r1, #1	; 0x1
         7e7ec:	e58d101c 	str	r1, [sp, #28]
         7e7f0:	e59d0018 	ldr	r0, [sp, #24]
         7e7f4:	e1510000 	cmp	r1, r0
         7e7f8:	baffffb8 	blt	7e6e0 <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x908>
         7e7fc:	e28dd008 	add	sp, sp, #8	; 0x8
         7e800:	e1a00004 	mov	r0, r4
         7e804:	eb6d1ab1 	bl	1bc52d0 <$MakeString(char const *)>
         7e808:	eb6d0e4f 	bl	1bc214c <$AllocateRefHandle(long)>
         7e80c:	e58d0000 	str	r0, [sp]
         7e810:	e1a0400d 	mov	r4, sp
         7e814:	e3a0a002 	mov	sl, #2	; 0x2
         7e818:	e1a0000a 	mov	r0, sl
         7e81c:	eb6d0e4a 	bl	1bc214c <$AllocateRefHandle(long)>
         7e820:	e58d0004 	str	r0, [sp, #4]
         7e824:	e28d0004 	add	r0, sp, #4	; 0x4
         7e828:	e1a01004 	mov	r1, r4
         7e82c:	e51b202c 	ldr	r2, [fp, -#44]
         7e830:	eb6e0a1f 	bl	1c010b4 <$DSResolveString__FRC6RefVarN21>
         7e834:	e59d1018 	ldr	r1, [sp, #24]
         7e838:	e5810000 	str	r0, [r1]
         7e83c:	e59d0000 	ldr	r0, [sp]
         7e840:	eb6d125d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e844:	e59d0004 	ldr	r0, [sp, #4]
         7e848:	eb6d125b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e84c:	e59d1018 	ldr	r1, [sp, #24]
         7e850:	e5910000 	ldr	r0, [r1]
         7e854:	e3300002 	teq	r0, #2	; 0x2
         7e858:	11a04000 	movne	r4, r0
         7e85c:	1afffdfa 	bne	7e04c <MatchString(AirusAParmBlock **, char *, RefVar const &)+0x274>
         7e860:	e1a00005 	mov	r0, r5
         7e864:	eb6d1254 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e868:	e1a00006 	mov	r0, r6
         7e86c:	eb6d1252 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e870:	e1a00007 	mov	r0, r7
         7e874:	eb6d1250 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e878:	e59d0018 	ldr	r0, [sp, #24]
         7e87c:	eb6d124e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e880:	e1a00008 	mov	r0, r8
         7e884:	eb6d124c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e888:	e59d001c 	ldr	r0, [sp, #28]
         7e88c:	eb6d124a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e890:	e1a00009 	mov	r0, r9
         7e894:	eb6d1248 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e898:	e59d0020 	ldr	r0, [sp, #32]
         7e89c:	eb6d1246 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e8a0:	e1a0000a 	mov	r0, sl
         7e8a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         7e8a8:	00681d40 	rsbeq	r1, r8, r0, asr #26
         7e8ac:	e1a00005 	mov	r0, r5
         7e8b0:	eb6d1241 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e8b4:	e1a00006 	mov	r0, r6
         7e8b8:	eb6d123f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e8bc:	e1a00007 	mov	r0, r7
         7e8c0:	eb6d123d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e8c4:	e59d0034 	ldr	r0, [sp, #52]
         7e8c8:	eb6d123b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e8cc:	e1a00008 	mov	r0, r8
         7e8d0:	eb6d1239 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e8d4:	e59d0038 	ldr	r0, [sp, #56]
         7e8d8:	eb6d1237 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e8dc:	e1a00009 	mov	r0, r9
         7e8e0:	eb6d1235 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e8e4:	e59d003c 	ldr	r0, [sp, #60]
         7e8e8:	eb6d1233 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         7e8ec:	e3a00002 	mov	r0, #2	; 0x2
         7e8f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeLowerCase__FRC6RefVarT1
 * Address: 000847c8
 */
void globals::MakeLowerCase() {
    /*
         847c8:	e1a0c00d 	mov	ip, sp
         847cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         847d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         847d4:	e1a04001 	mov	r4, r1
         847d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         847dc:	e1a0000d 	mov	r0, sp
         847e0:	eb6cf23c 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         847e4:	e1a0000d 	mov	r0, sp
         847e8:	eb6cf649 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         847ec:	e3e01102 	mvn	r1, #-2147483648	; 0x80000000
         847f0:	eb6d9757 	bl	1bea554 <$LowercaseText(unsigned short *, long)>
         847f4:	e5940000 	ldr	r0, [r4]
         847f8:	e5904000 	ldr	r4, [r0]
         847fc:	e1a0000d 	mov	r0, sp
         84800:	e3a01000 	mov	r1, #0	; 0x0
         84804:	eb6cf63d 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         84808:	e1a00004 	mov	r0, r4
         8480c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: MapSymToFrame__FRC6RefVarT1
 * Address: 00084fd4
 */
void globals::MapSymToFrame() {
    /*
         84fd4:	e1a0c00d 	mov	ip, sp
         84fd8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         84fdc:	e24cb004 	sub	fp, ip, #4	; 0x4
         84fe0:	e1a04001 	mov	r4, r1
         84fe4:	e3a00002 	mov	r0, #2	; 0x2
         84fe8:	eb6cf457 	bl	1bc214c <$AllocateRefHandle(long)>
         84fec:	e1a05000 	mov	r5, r0
         84ff0:	e59f0060 	ldr	r0, [pc, #60]	; 85058 <MapSymToFrame__FRC6RefVarT1+0x84>
         84ff4:	e5900000 	ldr	r0, [r0]
         84ff8:	eb6cf453 	bl	1bc214c <$AllocateRefHandle(long)>
         84ffc:	e1a06000 	mov	r6, r0
         85000:	e5940000 	ldr	r0, [r4]
         85004:	e5901000 	ldr	r1, [r0]
         85008:	e5960000 	ldr	r0, [r6]
         8500c:	eb6cfc93 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         85010:	e5850000 	str	r0, [r5]
         85014:	e1a00006 	mov	r0, r6
         85018:	eb6cf867 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8501c:	e5950000 	ldr	r0, [r5]
         85020:	e3300002 	teq	r0, #2	; 0x2
         85024:	1a000006 	bne	85044 <MapSymToFrame__FRC6RefVarT1+0x70>
         85028:	e5940000 	ldr	r0, [r4]
         8502c:	e5901000 	ldr	r1, [r0]
         85030:	e59f0024 	ldr	r0, [pc, #24]	; 8505c <MapSymToFrame__FRC6RefVarT1+0x88>
         85034:	e5900000 	ldr	r0, [r0]
         85038:	e5900000 	ldr	r0, [r0]
         8503c:	eb6cfc87 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         85040:	e5850000 	str	r0, [r5]
         85044:	e5954000 	ldr	r4, [r5]
         85048:	e1a00005 	mov	r0, r5
         8504c:	eb6cf85a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         85050:	e1a00004 	mov	r0, r4
         85054:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         85058:	0c10180c 	ldceq	8, cr1, [r0], -#48
         8505c:	00681348 	rsbeq	r1, r8, r8, asr #6
    */
}

/**
 * Symbol: member_p__FRC6RefVarT1
 * Address: 000871d0
 */
void globals::member_p() {
    /*
         871d0:	e1a0c00d 	mov	ip, sp
         871d4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         871d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         871dc:	e1a04000 	mov	r4, r0
         871e0:	e1a05001 	mov	r5, r1
         871e4:	e5900000 	ldr	r0, [r0]
         871e8:	e5900000 	ldr	r0, [r0]
         871ec:	e3a07002 	mov	r7, #2	; 0x2
         871f0:	e3300002 	teq	r0, #2	; 0x2
         871f4:	15951000 	ldrne	r1, [r5]
         871f8:	15911000 	ldrne	r1, [r1]
         871fc:	13310002 	teqne	r1, #2	; 0x2
         87200:	0a00001c 	beq	87278 <member_p__FRC6RefVarT1+0xa8>
         87204:	eb6cf828 	bl	1bc52ac <$Length(long)>
         87208:	e1a09000 	mov	r9, r0
         8720c:	e3a06000 	mov	r6, #0	; 0x0
         87210:	e3500000 	cmp	r0, #0	; 0x0
         87214:	9a000017 	bls	87278 <member_p__FRC6RefVarT1+0xa8>
         87218:	e1a01006 	mov	r1, r6
         8721c:	e5940000 	ldr	r0, [r4]
         87220:	e5900000 	ldr	r0, [r0]
         87224:	eb6cf40a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         87228:	eb6cebc7 	bl	1bc214c <$AllocateRefHandle(long)>
         8722c:	e1a08000 	mov	r8, r0
         87230:	e5901000 	ldr	r1, [r0]
         87234:	e5950000 	ldr	r0, [r5]
         87238:	e5900000 	ldr	r0, [r0]
         8723c:	eb6cf3fb 	bl	1bc4230 <$EQRef__FlT1>
         87240:	e1b0a000 	movs	sl, r0
         87244:	13a0a001 	movne	sl, #1	; 0x1
         87248:	e1a00008 	mov	r0, r8
         8724c:	eb6cefda 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         87250:	e33a0000 	teq	sl, #0	; 0x0
         87254:	0a000004 	beq	8726c <member_p__FRC6RefVarT1+0x9c>
         87258:	e1a01006 	mov	r1, r6
         8725c:	e5940000 	ldr	r0, [r4]
         87260:	e5900000 	ldr	r0, [r0]
         87264:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         87268:	ea6cf3f9 	b	1bc4254 <$GetArraySlotRef__FlT1>
         8726c:	e2866001 	add	r6, r6, #1	; 0x1
         87270:	e1560009 	cmp	r6, r9
         87274:	3affffe7 	bcc	87218 <member_p__FRC6RefVarT1+0x48>
         87278:	e1a00007 	mov	r0, r7
         8727c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MergeMeetingLists__FRC6RefVarN21lT4
 * Address: 0008af34
 */
void globals::MergeMeetingLists() {
    /*
         8af34:	e1a0c00d 	mov	ip, sp
         8af38:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         8af3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         8af40:	e1a04000 	mov	r4, r0
         8af44:	e1a06001 	mov	r6, r1
         8af48:	e1a05002 	mov	r5, r2
         8af4c:	e1a07003 	mov	r7, r3
         8af50:	e3a00000 	mov	r0, #0	; 0x0
         8af54:	e59ba004 	ldr	sl, [fp, #4]
         8af58:	e52d0008 	str	r0, [sp, -#8]!
         8af5c:	e58d0004 	str	r0, [sp, #4]
         8af60:	e24dd010 	sub	sp, sp, #16	; 0x10
         8af64:	e3a00002 	mov	r0, #2	; 0x2
         8af68:	eb6cdc77 	bl	1bc214c <$AllocateRefHandle(long)>
         8af6c:	e58d000c 	str	r0, [sp, #12]
         8af70:	e3a00002 	mov	r0, #2	; 0x2
         8af74:	eb6cdc74 	bl	1bc214c <$AllocateRefHandle(long)>
         8af78:	e58d0008 	str	r0, [sp, #8]
         8af7c:	e28d3004 	add	r3, sp, #4	; 0x4
         8af80:	e28d200c 	add	r2, sp, #12	; 0xc
         8af84:	e28d1014 	add	r1, sp, #20	; 0x14
         8af88:	e1a00006 	mov	r0, r6
         8af8c:	eb68b2fd 	bl	1ab7b88 <$PopMeeting(RefVar const &, long *, RefVar *, RefVar *)>
         8af90:	e1a0300d 	mov	r3, sp
         8af94:	e28d2008 	add	r2, sp, #8	; 0x8
         8af98:	e28d1010 	add	r1, sp, #16	; 0x10
         8af9c:	e1a00005 	mov	r0, r5
         8afa0:	eb684bcb 	bl	1a9ded4 <$PopException(RefVar const &, long *, RefVar *, RefVar *)>
         8afa4:	e59f9004 	ldr	r9, [pc, #4]	; 8afb0 <MergeMeetingLists__FRC6RefVarN21lT4+0x7c>
         8afa8:	e59f8004 	ldr	r8, [pc, #4]	; 8afb4 <MergeMeetingLists__FRC6RefVarN21lT4+0x80>
         8afac:	ea000053 	b	8b100 <MergeMeetingLists__FRC6RefVarN21lT4+0x1cc>
         8afb0:	00683978 	rsbeq	r3, r8, r8, ror r9
         8afb4:	00681cc8 	rsbeq	r1, r8, r8, asr #25
         8afb8:	e3300000 	teq	r0, #0	; 0x0
         8afbc:	0a000017 	beq	8b020 <MergeMeetingLists__FRC6RefVarN21lT4+0xec>
         8afc0:	e59d1000 	ldr	r1, [sp]
         8afc4:	e3310000 	teq	r1, #0	; 0x0
         8afc8:	1a000012 	bne	8b018 <MergeMeetingLists__FRC6RefVarN21lT4+0xe4>
         8afcc:	e24dd008 	sub	sp, sp, #8	; 0x8
         8afd0:	e3a00002 	mov	r0, #2	; 0x2
         8afd4:	eb6cdc5c 	bl	1bc214c <$AllocateRefHandle(long)>
         8afd8:	e58d0000 	str	r0, [sp]
         8afdc:	e1a0300d 	mov	r3, sp
         8afe0:	e1a02009 	mov	r2, r9
         8afe4:	e92d000c 	stmdb	sp!, {r2, r3}
         8afe8:	e3a00002 	mov	r0, #2	; 0x2
         8afec:	eb6cdc56 	bl	1bc214c <$AllocateRefHandle(long)>
         8aff0:	e58d000c 	str	r0, [sp, #12]
         8aff4:	e28d000c 	add	r0, sp, #12	; 0xc
         8aff8:	e1a03008 	mov	r3, r8
         8affc:	e28d201c 	add	r2, sp, #28	; 0x1c
         8b000:	e1a01004 	mov	r1, r4
         8b004:	eb0a3238 	bl	3178ec <FBInsert>
         8b008:	e5bd0008 	ldr	r0, [sp, #8]!
         8b00c:	eb6ce06a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8b010:	e59d0004 	ldr	r0, [sp, #4]
         8b014:	ea000032 	b	8b0e4 <MergeMeetingLists__FRC6RefVarN21lT4+0x1b0>
         8b018:	e1510000 	cmp	r1, r0
         8b01c:	aa00000a 	bge	8b04c <MergeMeetingLists__FRC6RefVarN21lT4+0x118>
         8b020:	e1a0300a 	mov	r3, sl
         8b024:	e1a02007 	mov	r2, r7
         8b028:	e28d1008 	add	r1, sp, #8	; 0x8
         8b02c:	e1a00004 	mov	r0, r4
         8b030:	eb67f921 	bl	1a894bc <$AddException__FRC6RefVarT1lT3>
         8b034:	e1a0300d 	mov	r3, sp
         8b038:	e28d2008 	add	r2, sp, #8	; 0x8
         8b03c:	e28d1010 	add	r1, sp, #16	; 0x10
         8b040:	e1a00005 	mov	r0, r5
         8b044:	eb684ba2 	bl	1a9ded4 <$PopException(RefVar const &, long *, RefVar *, RefVar *)>
         8b048:	ea00002c 	b	8b100 <MergeMeetingLists__FRC6RefVarN21lT4+0x1cc>
         8b04c:	1a00000f 	bne	8b090 <MergeMeetingLists__FRC6RefVarN21lT4+0x15c>
         8b050:	e1a0300a 	mov	r3, sl
         8b054:	e1a02007 	mov	r2, r7
         8b058:	e28d1008 	add	r1, sp, #8	; 0x8
         8b05c:	e1a00004 	mov	r0, r4
         8b060:	eb67f915 	bl	1a894bc <$AddException__FRC6RefVarT1lT3>
         8b064:	e1a0300d 	mov	r3, sp
         8b068:	e28d2008 	add	r2, sp, #8	; 0x8
         8b06c:	e28d1010 	add	r1, sp, #16	; 0x10
         8b070:	e1a00005 	mov	r0, r5
         8b074:	eb684b96 	bl	1a9ded4 <$PopException(RefVar const &, long *, RefVar *, RefVar *)>
         8b078:	e28d3004 	add	r3, sp, #4	; 0x4
         8b07c:	e28d200c 	add	r2, sp, #12	; 0xc
         8b080:	e28d1014 	add	r1, sp, #20	; 0x14
         8b084:	e1a00006 	mov	r0, r6
         8b088:	eb68b2be 	bl	1ab7b88 <$PopMeeting(RefVar const &, long *, RefVar *, RefVar *)>
         8b08c:	ea00001b 	b	8b100 <MergeMeetingLists__FRC6RefVarN21lT4+0x1cc>
         8b090:	e89d0003 	ldmia	sp, {r0, r1}
         8b094:	e1500001 	cmp	r0, r1
         8b098:	da000018 	ble	8b100 <MergeMeetingLists__FRC6RefVarN21lT4+0x1cc>
         8b09c:	e24dd008 	sub	sp, sp, #8	; 0x8
         8b0a0:	e3a00002 	mov	r0, #2	; 0x2
         8b0a4:	eb6cdc28 	bl	1bc214c <$AllocateRefHandle(long)>
         8b0a8:	e58d0000 	str	r0, [sp]
         8b0ac:	e1a0300d 	mov	r3, sp
         8b0b0:	e1a02009 	mov	r2, r9
         8b0b4:	e92d000c 	stmdb	sp!, {r2, r3}
         8b0b8:	e3a00002 	mov	r0, #2	; 0x2
         8b0bc:	eb6cdc22 	bl	1bc214c <$AllocateRefHandle(long)>
         8b0c0:	e58d000c 	str	r0, [sp, #12]
         8b0c4:	e28d000c 	add	r0, sp, #12	; 0xc
         8b0c8:	e1a03008 	mov	r3, r8
         8b0cc:	e28d201c 	add	r2, sp, #28	; 0x1c
         8b0d0:	e1a01004 	mov	r1, r4
         8b0d4:	eb0a3204 	bl	3178ec <FBInsert>
         8b0d8:	e5bd0008 	ldr	r0, [sp, #8]!
         8b0dc:	eb6ce036 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8b0e0:	e59d0004 	ldr	r0, [sp, #4]
         8b0e4:	eb6ce034 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8b0e8:	e28d300c 	add	r3, sp, #12	; 0xc
         8b0ec:	e28d2014 	add	r2, sp, #20	; 0x14
         8b0f0:	e28d101c 	add	r1, sp, #28	; 0x1c
         8b0f4:	e1a00006 	mov	r0, r6
         8b0f8:	eb68b2a2 	bl	1ab7b88 <$PopMeeting(RefVar const &, long *, RefVar *, RefVar *)>
         8b0fc:	e28dd008 	add	sp, sp, #8	; 0x8
         8b100:	e59d0004 	ldr	r0, [sp, #4]
         8b104:	e3500000 	cmp	r0, #0	; 0x0
         8b108:	d59d1000 	ldrle	r1, [sp]
         8b10c:	d3510000 	cmple	r1, #0	; 0x0
         8b110:	caffffa8 	bgt	8afb8 <MergeMeetingLists__FRC6RefVarN21lT4+0x84>
         8b114:	e59d0008 	ldr	r0, [sp, #8]
         8b118:	eb6ce027 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8b11c:	e59d000c 	ldr	r0, [sp, #12]
         8b120:	eb6ce025 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8b124:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeMeetingFrame(unsigned long, RefVar const &)
 * Address: 0008c400
 */
MakeMeetingFrame(unsigned long, RefVar const &) {
    /*
         8c400:	e1a0c00d 	mov	ip, sp
         8c404:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         8c408:	e24cb004 	sub	fp, ip, #4	; 0x4
         8c40c:	e1a05000 	mov	r5, r0
         8c410:	e1a04001 	mov	r4, r1
         8c414:	e24dd004 	sub	sp, sp, #4	; 0x4
         8c418:	e59f00fc 	ldr	r0, [pc, #fc]	; 8c51c <MakeMeetingFrame(unsigned long, RefVar const &)+0x11c>
         8c41c:	eb6cd752 	bl	1bc216c <$Clone(RefVar const &)>
         8c420:	eb6cd749 	bl	1bc214c <$AllocateRefHandle(long)>
         8c424:	e58d0000 	str	r0, [sp]
         8c428:	e59f00f0 	ldr	r0, [pc, #f0]	; 8c520 <MakeMeetingFrame(unsigned long, RefVar const &)+0x120>
         8c42c:	e5900000 	ldr	r0, [r0]
         8c430:	e5901000 	ldr	r1, [r0]
         8c434:	e5940000 	ldr	r0, [r4]
         8c438:	e5900000 	ldr	r0, [r0]
         8c43c:	eb6cdf87 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8c440:	eb6cd741 	bl	1bc214c <$AllocateRefHandle(long)>
         8c444:	e1a06000 	mov	r6, r0
         8c448:	e59f00d4 	ldr	r0, [pc, #d4]	; 8c524 <MakeMeetingFrame(unsigned long, RefVar const &)+0x124>
         8c44c:	e5900000 	ldr	r0, [r0]
         8c450:	e5901000 	ldr	r1, [r0]
         8c454:	e5960000 	ldr	r0, [r6]
         8c458:	eb6cdf74 	bl	1bc4230 <$EQRef__FlT1>
         8c45c:	e1b07000 	movs	r7, r0
         8c460:	13a07001 	movne	r7, #1	; 0x1
         8c464:	e1a00006 	mov	r0, r6
         8c468:	eb6cdb53 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8c46c:	e3370000 	teq	r7, #0	; 0x0
         8c470:	0a000003 	beq	8c484 <MakeMeetingFrame(unsigned long, RefVar const &)+0x84>
         8c474:	e59f20a8 	ldr	r2, [pc, #a8]	; 8c524 <MakeMeetingFrame(unsigned long, RefVar const &)+0x124>
         8c478:	e59f10a0 	ldr	r1, [pc, #a0]	; 8c520 <MakeMeetingFrame(unsigned long, RefVar const &)+0x120>
         8c47c:	e1a0000d 	mov	r0, sp
         8c480:	eb6ce7b8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8c484:	e24dd004 	sub	sp, sp, #4	; 0x4
         8c488:	e59f0098 	ldr	r0, [pc, #98]	; 8c528 <MakeMeetingFrame(unsigned long, RefVar const &)+0x128>
         8c48c:	e5900000 	ldr	r0, [r0]
         8c490:	e5901000 	ldr	r1, [r0]
         8c494:	e5940000 	ldr	r0, [r4]
         8c498:	e5900000 	ldr	r0, [r0]
         8c49c:	eb6cdf6f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8c4a0:	eb6cd729 	bl	1bc214c <$AllocateRefHandle(long)>
         8c4a4:	e40d0004 	str	r0, [sp], -#4
         8c4a8:	e59d0004 	ldr	r0, [sp, #4]
         8c4ac:	e5900000 	ldr	r0, [r0]
         8c4b0:	e3300002 	teq	r0, #2	; 0x2
         8c4b4:	0a000003 	beq	8c4c8 <MakeMeetingFrame(unsigned long, RefVar const &)+0xc8>
         8c4b8:	e28d2004 	add	r2, sp, #4	; 0x4
         8c4bc:	e59f1064 	ldr	r1, [pc, #64]	; 8c528 <MakeMeetingFrame(unsigned long, RefVar const &)+0x128>
         8c4c0:	e28d0008 	add	r0, sp, #8	; 0x8
         8c4c4:	eb6ce7a7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8c4c8:	e1a00105 	mov	r0, r5, lsl #2
         8c4cc:	eb6cd71e 	bl	1bc214c <$AllocateRefHandle(long)>
         8c4d0:	e58d0000 	str	r0, [sp]
         8c4d4:	e1a0200d 	mov	r2, sp
         8c4d8:	e59f104c 	ldr	r1, [pc, #4c]	; 8c52c <MakeMeetingFrame(unsigned long, RefVar const &)+0x12c>
         8c4dc:	e28d0008 	add	r0, sp, #8	; 0x8
         8c4e0:	eb6ce7a0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8c4e4:	e59d0000 	ldr	r0, [sp]
         8c4e8:	eb6cdb33 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8c4ec:	e1a02004 	mov	r2, r4
         8c4f0:	e59f1038 	ldr	r1, [pc, #38]	; 8c530 <MakeMeetingFrame(unsigned long, RefVar const &)+0x130>
         8c4f4:	e28d0008 	add	r0, sp, #8	; 0x8
         8c4f8:	eb6ce79a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8c4fc:	e59d0008 	ldr	r0, [sp, #8]
         8c500:	e5904000 	ldr	r4, [r0]
         8c504:	e59d0004 	ldr	r0, [sp, #4]
         8c508:	eb6cdb2b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8c50c:	e59d0008 	ldr	r0, [sp, #8]
         8c510:	eb6cdb29 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8c514:	e1a00004 	mov	r0, r4
         8c518:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         8c51c:	006808b8 	streqh	r0, [r8], -#136
         8c520:	006850d8 	ldreqd	r5, [r8], -#8
         8c524:	006826d8 	ldreqd	r2, [r8], -#104
         8c528:	00684f08 	rsbeq	r4, r8, r8, lsl #30
         8c52c:	00683978 	rsbeq	r3, r8, r8, ror r9
         8c530:	006842e8 	rsbeq	r4, r8, r8, ror #5
    */
}

/**
 * Symbol: MaybeDoLearning(TStdWordUnit *, unsigned long)
 * Address: 00091228
 */
MaybeDoLearning(TStdWordUnit *, unsigned long) {
    /*
         91228:	e1a0c00d 	mov	ip, sp
         9122c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         91230:	e24cb004 	sub	fp, ip, #4	; 0x4
         91234:	e1a05000 	mov	r5, r0
         91238:	e1a04001 	mov	r4, r1
         9123c:	e3a06000 	mov	r6, #0	; 0x0
         91240:	e3a08000 	mov	r8, #0	; 0x0
         91244:	e59f709c 	ldr	r7, [pc, #9c]	; 912e8 <MaybeDoLearning(TStdWordUnit *, unsigned long)+0xc0>
         91248:	e5d7000c 	ldrb	r0, [r7, #12]
         9124c:	e3300000 	teq	r0, #0	; 0x0
         91250:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         91254:	e3340000 	teq	r4, #0	; 0x0
         91258:	0a00000f 	beq	9129c <MaybeDoLearning(TStdWordUnit *, unsigned long)+0x74>
         9125c:	eb6c8e01 	bl	1bb4a68 <$rand>
         91260:	e1a01000 	mov	r1, r0
         91264:	e3a00064 	mov	r0, #100	; 0x64
         91268:	eb6c85b4 	bl	1bb2940 <$__rt_sdiv>
         9126c:	e5970010 	ldr	r0, [r7, #16]
         91270:	e1510000 	cmp	r1, r0
         91274:	2a000005 	bcs	91290 <MaybeDoLearning(TStdWordUnit *, unsigned long)+0x68>
         91278:	e5d70014 	ldrb	r0, [r7, #20]
         9127c:	e3300000 	teq	r0, #0	; 0x0
         91280:	0a000003 	beq	91294 <MaybeDoLearning(TStdWordUnit *, unsigned long)+0x6c>
         91284:	e3540005 	cmp	r4, #5	; 0x5
         91288:	2a000001 	bcs	91294 <MaybeDoLearning(TStdWordUnit *, unsigned long)+0x6c>
         9128c:	e1a08004 	mov	r8, r4
         91290:	e3a06001 	mov	r6, #1	; 0x1
         91294:	e3360000 	teq	r6, #0	; 0x0
         91298:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         9129c:	e24dd040 	sub	sp, sp, #64	; 0x40
         912a0:	e1a01005 	mov	r1, r5
         912a4:	e28d0004 	add	r0, sp, #4	; 0x4
         912a8:	e3a02000 	mov	r2, #0	; 0x0
         912ac:	eb67d84c 	bl	1a873e4 <TUnitPublic::$__ct(TUnit *, unsigned long)>
         912b0:	e28d0004 	add	r0, sp, #4	; 0x4
         912b4:	eb68aacd 	bl	1abbdf0 <TUnitPublic::$WordInfo(void)>
         912b8:	eb6cc3a3 	bl	1bc214c <$AllocateRefHandle(long)>
         912bc:	e58d0000 	str	r0, [sp]
         912c0:	e1a0100d 	mov	r1, sp
         912c4:	e1a02008 	mov	r2, r8
         912c8:	e59f001c 	ldr	r0, [pc, #1c]	; 912ec <MaybeDoLearning(TStdWordUnit *, unsigned long)+0xc4>
         912cc:	eb686cdf 	bl	1aac650 <$DoIndexedLearning(unsigned long, RefVar const &, RefVar const &)>
         912d0:	e59d0000 	ldr	r0, [sp]
         912d4:	eb6cc7b8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         912d8:	e28d0004 	add	r0, sp, #4	; 0x4
         912dc:	e3a01000 	mov	r1, #0	; 0x0
         912e0:	eb67dc59 	bl	1a8844c <TUnitPublic::$__dt(void)>
         912e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         912e8:	0c100bd4 	ldceq	11, cr0, [r0], -#848
         912ec:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
    */
}

/**
 * Symbol: MakeNullTerminatedString(unsigned short *, unsigned long)
 * Address: 000a3e70
 */
MakeNullTerminatedString(unsigned short *, unsigned long) {
    /*
         a3e70:	e1a0c00d 	mov	ip, sp
         a3e74:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         a3e78:	e24cb004 	sub	fp, ip, #4	; 0x4
         a3e7c:	e1a05000 	mov	r5, r0
         a3e80:	e1a04001 	mov	r4, r1
         a3e84:	e2810001 	add	r0, r1, #1	; 0x1
         a3e88:	e1a00080 	mov	r0, r0, lsl #1
         a3e8c:	eb6caa29 	bl	1bce738 <$__nw(unsigned int)>
         a3e90:	e1a06000 	mov	r6, r0
         a3e94:	e1a02084 	mov	r2, r4, lsl #1
         a3e98:	e1a01000 	mov	r1, r0
         a3e9c:	e1a00005 	mov	r0, r5
         a3ea0:	eb6cec2b 	bl	1bdef54 <$BlockMove>
         a3ea4:	e3a00000 	mov	r0, #0	; 0x0
         a3ea8:	e0861084 	add	r1, r6, r4, lsl #1
         a3eac:	e5c10001 	strb	r0, [r1, #1]
         a3eb0:	e5c10000 	strb	r0, [r1]
         a3eb4:	e1a00006 	mov	r0, r6
         a3eb8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: MakeKidForSort(TView *, long)
 * Address: 000a3ef4
 */
MakeKidForSort(TView *, long) {
    /*
         a3ef4:	e1a0c00d 	mov	ip, sp
         a3ef8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a3efc:	e24cb004 	sub	fp, ip, #4	; 0x4
         a3f00:	e1a05000 	mov	r5, r0
         a3f04:	e1a04001 	mov	r4, r1
         a3f08:	e24dd00c 	sub	sp, sp, #12	; 0xc
         a3f0c:	e3a00002 	mov	r0, #2	; 0x2
         a3f10:	eb6c788d 	bl	1bc214c <$AllocateRefHandle(long)>
         a3f14:	e58d0008 	str	r0, [sp, #8]
         a3f18:	e3a00002 	mov	r0, #2	; 0x2
         a3f1c:	eb6c788a 	bl	1bc214c <$AllocateRefHandle(long)>
         a3f20:	e58d0004 	str	r0, [sp, #4]
         a3f24:	e59f0074 	ldr	r0, [pc, #74]	; a3fa0 <MakeKidForSort(TView *, long)+0xac>
         a3f28:	eb6c788f 	bl	1bc216c <$Clone(RefVar const &)>
         a3f2c:	e59d1008 	ldr	r1, [sp, #8]
         a3f30:	e5810000 	str	r0, [r1]
         a3f34:	e2850024 	add	r0, r5, #36	; 0x24
         a3f38:	e59f1064 	ldr	r1, [pc, #64]	; a3fa4 <MakeKidForSort(TView *, long)+0xb0>
         a3f3c:	e3a02000 	mov	r2, #0	; 0x0
         a3f40:	eb6c80c8 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         a3f44:	e59d1004 	ldr	r1, [sp, #4]
         a3f48:	e28d2004 	add	r2, sp, #4	; 0x4
         a3f4c:	e5810000 	str	r0, [r1]
         a3f50:	e59f1050 	ldr	r1, [pc, #50]	; a3fa8 <MakeKidForSort(TView *, long)+0xb4>
         a3f54:	e28d0008 	add	r0, sp, #8	; 0x8
         a3f58:	eb6c8902 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a3f5c:	e1a00104 	mov	r0, r4, lsl #2
         a3f60:	eb6c7879 	bl	1bc214c <$AllocateRefHandle(long)>
         a3f64:	e58d0000 	str	r0, [sp]
         a3f68:	e1a0200d 	mov	r2, sp
         a3f6c:	e59f1038 	ldr	r1, [pc, #38]	; a3fac <MakeKidForSort(TView *, long)+0xb8>
         a3f70:	e28d0008 	add	r0, sp, #8	; 0x8
         a3f74:	eb6c88fb 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         a3f78:	e59d0000 	ldr	r0, [sp]
         a3f7c:	eb6c7c8e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3f80:	e59d0008 	ldr	r0, [sp, #8]
         a3f84:	e5904000 	ldr	r4, [r0]
         a3f88:	e59d0004 	ldr	r0, [sp, #4]
         a3f8c:	eb6c7c8a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3f90:	e59d0008 	ldr	r0, [sp, #8]
         a3f94:	eb6c7c88 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         a3f98:	e1a00004 	mov	r0, r4
         a3f9c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         a3fa0:	0067fea0 	rsbeq	pc, r7, r0, lsr #29
         a3fa4:	00684120 	rsbeq	r4, r8, r0, lsr #2
         a3fa8:	00685390 	streqb	r5, [r8], -#48
         a3fac:	00684ad8 	ldreqd	r4, [r8], -#168
    */
}

/**
 * Symbol: MapIndex(long)
 * Address: 000a4078
 */
MapIndex(long) {
    /*
         a4078:	e2800001 	add	r0, r0, #1	; 0x1
         a407c:	e2600000 	rsb	r0, r0, #0	; 0x0
         a4080:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MapFormat0(long, void *)
 * Address: 000ae5b4
 */
MapFormat0(long, void *) {
    /*
         ae5b4:	e35000ff 	cmp	r0, #255	; 0xff
         ae5b8:	c3a00000 	movgt	r0, #0	; 0x0
         ae5bc:	c1a0f00e 	movgt	pc, lr
         ae5c0:	e0810000 	add	r0, r1, r0
         ae5c4:	e5d00006 	ldrb	r0, [r0, #6]
         ae5c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MapFormat2(long, void *)
 * Address: 000ae5cc
 */
MapFormat2(long, void *) {
    /*
         ae5cc:	e3a00000 	mov	r0, #0	; 0x0
         ae5d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MapFormat4(long, void *)
 * Address: 000ae5d4
 */
MapFormat4(long, void *) {
    /*
         ae5d4:	e92d4010 	stmdb	sp!, {r4, lr}
         ae5d8:	e1a0c001 	mov	ip, r1
         ae5dc:	e5912006 	ldr	r2, [r1, #6]
         ae5e0:	e1a02822 	mov	r2, r2, lsr #16
         ae5e4:	e1a030a2 	mov	r3, r2, lsr #1
         ae5e8:	e281100e 	add	r1, r1, #14	; 0xe
         ae5ec:	e1a00800 	mov	r0, r0, lsl #16
         ae5f0:	e1a00820 	mov	r0, r0, lsr #16
         ae5f4:	e3520010 	cmp	r2, #16	; 0x10
         ae5f8:	ba000056 	blt	ae758 <MapFormat4(long, void *)+0x184>
         ae5fc:	e59c2008 	ldr	r2, [ip, #8]
         ae600:	e1a02822 	mov	r2, r2, lsr #16
         ae604:	e1a020a2 	mov	r2, r2, lsr #1
         ae608:	e59ce00a 	ldr	lr, [ip, #10]
         ae60c:	e1a0e82e 	mov	lr, lr, lsr #16
         ae610:	e59cc00c 	ldr	ip, [ip, #12]
         ae614:	e1a0c82c 	mov	ip, ip, lsr #16
         ae618:	e7914082 	ldr	r4, [r1, r2, lsl #1]
         ae61c:	e1a04824 	mov	r4, r4, lsr #16
         ae620:	e1540000 	cmp	r4, r0
         ae624:	d1a0c0ac 	movle	ip, ip, lsr #1
         ae628:	d081108c 	addle	r1, r1, ip, lsl #1
         ae62c:	e24ec004 	sub	ip, lr, #4	; 0x4
         ae630:	e35c000b 	cmp	ip, #11	; 0xb
         ae634:	908ff10c 	addls	pc, pc, ip, lsl #2
         ae638:	ea000046 	b	ae758 <MapFormat4(long, void *)+0x184>
         ae63c:	ea000040 	b	ae744 <MapFormat4(long, void *)+0x170>
         ae640:	ea00003a 	b	ae730 <MapFormat4(long, void *)+0x15c>
         ae644:	ea000034 	b	ae71c <MapFormat4(long, void *)+0x148>
         ae648:	ea00002e 	b	ae708 <MapFormat4(long, void *)+0x134>
         ae64c:	ea000028 	b	ae6f4 <MapFormat4(long, void *)+0x120>
         ae650:	ea000022 	b	ae6e0 <MapFormat4(long, void *)+0x10c>
         ae654:	ea00001c 	b	ae6cc <MapFormat4(long, void *)+0xf8>
         ae658:	ea000016 	b	ae6b8 <MapFormat4(long, void *)+0xe4>
         ae65c:	ea000010 	b	ae6a4 <MapFormat4(long, void *)+0xd0>
         ae660:	ea00000a 	b	ae690 <MapFormat4(long, void *)+0xbc>
         ae664:	ea000004 	b	ae67c <MapFormat4(long, void *)+0xa8>
         ae668:	e1a020c2 	mov	r2, r2, asr #1
         ae66c:	e081c082 	add	ip, r1, r2, lsl #1
         ae670:	e59ce000 	ldr	lr, [ip]
         ae674:	e150082e 	cmp	r0, lr, lsr #16
         ae678:	c1a0100c 	movgt	r1, ip
         ae67c:	e1a020c2 	mov	r2, r2, asr #1
         ae680:	e081c082 	add	ip, r1, r2, lsl #1
         ae684:	e59ce000 	ldr	lr, [ip]
         ae688:	e150082e 	cmp	r0, lr, lsr #16
         ae68c:	c1a0100c 	movgt	r1, ip
         ae690:	e1a020c2 	mov	r2, r2, asr #1
         ae694:	e081c082 	add	ip, r1, r2, lsl #1
         ae698:	e59ce000 	ldr	lr, [ip]
         ae69c:	e150082e 	cmp	r0, lr, lsr #16
         ae6a0:	c1a0100c 	movgt	r1, ip
         ae6a4:	e1a020c2 	mov	r2, r2, asr #1
         ae6a8:	e081c082 	add	ip, r1, r2, lsl #1
         ae6ac:	e59ce000 	ldr	lr, [ip]
         ae6b0:	e150082e 	cmp	r0, lr, lsr #16
         ae6b4:	c1a0100c 	movgt	r1, ip
         ae6b8:	e1a020c2 	mov	r2, r2, asr #1
         ae6bc:	e081c082 	add	ip, r1, r2, lsl #1
         ae6c0:	e59ce000 	ldr	lr, [ip]
         ae6c4:	e150082e 	cmp	r0, lr, lsr #16
         ae6c8:	c1a0100c 	movgt	r1, ip
         ae6cc:	e1a020c2 	mov	r2, r2, asr #1
         ae6d0:	e081c082 	add	ip, r1, r2, lsl #1
         ae6d4:	e59ce000 	ldr	lr, [ip]
         ae6d8:	e150082e 	cmp	r0, lr, lsr #16
         ae6dc:	c1a0100c 	movgt	r1, ip
         ae6e0:	e1a020c2 	mov	r2, r2, asr #1
         ae6e4:	e081c082 	add	ip, r1, r2, lsl #1
         ae6e8:	e59ce000 	ldr	lr, [ip]
         ae6ec:	e150082e 	cmp	r0, lr, lsr #16
         ae6f0:	c1a0100c 	movgt	r1, ip
         ae6f4:	e1a020c2 	mov	r2, r2, asr #1
         ae6f8:	e081c082 	add	ip, r1, r2, lsl #1
         ae6fc:	e59ce000 	ldr	lr, [ip]
         ae700:	e150082e 	cmp	r0, lr, lsr #16
         ae704:	c1a0100c 	movgt	r1, ip
         ae708:	e1a020c2 	mov	r2, r2, asr #1
         ae70c:	e081c082 	add	ip, r1, r2, lsl #1
         ae710:	e59ce000 	ldr	lr, [ip]
         ae714:	e150082e 	cmp	r0, lr, lsr #16
         ae718:	c1a0100c 	movgt	r1, ip
         ae71c:	e1a020c2 	mov	r2, r2, asr #1
         ae720:	e081c082 	add	ip, r1, r2, lsl #1
         ae724:	e59ce000 	ldr	lr, [ip]
         ae728:	e150082e 	cmp	r0, lr, lsr #16
         ae72c:	c1a0100c 	movgt	r1, ip
         ae730:	e1a020c2 	mov	r2, r2, asr #1
         ae734:	e081c082 	add	ip, r1, r2, lsl #1
         ae738:	e59ce000 	ldr	lr, [ip]
         ae73c:	e150082e 	cmp	r0, lr, lsr #16
         ae740:	c1a0100c 	movgt	r1, ip
         ae744:	e1a020c2 	mov	r2, r2, asr #1
         ae748:	e0812082 	add	r2, r1, r2, lsl #1
         ae74c:	e592c000 	ldr	ip, [r2]
         ae750:	e150082c 	cmp	r0, ip, lsr #16
         ae754:	c1a01002 	movgt	r1, r2
         ae758:	e5912000 	ldr	r2, [r1]
         ae75c:	e2811002 	add	r1, r1, #2	; 0x2
         ae760:	e1500822 	cmp	r0, r2, lsr #16
         ae764:	cafffffb 	bgt	ae758 <MapFormat4(long, void *)+0x184>
         ae768:	e0812083 	add	r2, r1, r3, lsl #1
         ae76c:	e5921000 	ldr	r1, [r2]
         ae770:	e1a01821 	mov	r1, r1, lsr #16
         ae774:	e1500001 	cmp	r0, r1
         ae778:	b3a00000 	movlt	r0, #0	; 0x0
         ae77c:	b8bd8010 	ldmltia	sp!, {r4, pc}
         ae780:	e082c083 	add	ip, r2, r3, lsl #1
         ae784:	e59c2000 	ldr	r2, [ip]
         ae788:	e1a02822 	mov	r2, r2, lsr #16
         ae78c:	e08cc083 	add	ip, ip, r3, lsl #1
         ae790:	e59c3000 	ldr	r3, [ip]
         ae794:	e1b03823 	movs	r3, r3, lsr #16
         ae798:	00820000 	addeq	r0, r2, r0
         ae79c:	01a00800 	moveq	r0, r0, lsl #16
         ae7a0:	01a00820 	moveq	r0, r0, lsr #16
         ae7a4:	08bd8010 	ldmeqia	sp!, {r4, pc}
         ae7a8:	e0400001 	sub	r0, r0, r1
         ae7ac:	e08000c3 	add	r0, r0, r3, asr #1
         ae7b0:	e08c0080 	add	r0, ip, r0, lsl #1
         ae7b4:	e5900000 	ldr	r0, [r0]
         ae7b8:	e1a00820 	mov	r0, r0, lsr #16
         ae7bc:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: MapFormat6(long, void *)
 * Address: 000ae7c0
 */
MapFormat6(long, void *) {
    /*
         ae7c0:	e5912006 	ldr	r2, [r1, #6]
         ae7c4:	e0500822 	subs	r0, r0, r2, lsr #16
         ae7c8:	e3a02000 	mov	r2, #0	; 0x0
         ae7cc:	4a000005 	bmi	ae7e8 <MapFormat6(long, void *)+0x28>
         ae7d0:	e5913008 	ldr	r3, [r1, #8]
         ae7d4:	e1500823 	cmp	r0, r3, lsr #16
         ae7d8:	b0810080 	addlt	r0, r1, r0, lsl #1
         ae7dc:	b590000a 	ldrlt	r0, [r0, #10]
         ae7e0:	b1a00820 	movlt	r0, r0, lsr #16
         ae7e4:	b1a0f00e 	movlt	pc, lr
         ae7e8:	e1a00002 	mov	r0, r2
         ae7ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MapFormat4Patched(long, void *)
 * Address: 000ae7f0
 */
MapFormat4Patched(long, void *) {
    /*
         ae7f0:	e350001f 	cmp	r0, #31	; 0x1f
         ae7f4:	caffff76 	bgt	ae5d4 <MapFormat4(long, void *)>
         ae7f8:	e3300000 	teq	r0, #0	; 0x0
         ae7fc:	13300008 	teqne	r0, #8	; 0x8
         ae800:	1330001d 	teqne	r0, #29	; 0x1d
         ae804:	03a00001 	moveq	r0, #1	; 0x1
         ae808:	01a0f00e 	moveq	pc, lr
         ae80c:	e3300009 	teq	r0, #9	; 0x9
         ae810:	1330000d 	teqne	r0, #13	; 0xd
         ae814:	03a00002 	moveq	r0, #2	; 0x2
         ae818:	13a00000 	movne	r0, #0	; 0x0
         ae81c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MarshalArguments__FRC6RefVarT1PPvi
 * Address: 000cd634
 */
void globals::MarshalArguments() {
    /*
         cd634:	e1a0c00d 	mov	ip, sp
         cd638:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         cd63c:	e24cb004 	sub	fp, ip, #4	; 0x4
         cd640:	e1a07000 	mov	r7, r0
         cd644:	e1a06001 	mov	r6, r1
         cd648:	e1a05002 	mov	r5, r2
         cd64c:	e1a04003 	mov	r4, r3
         cd650:	e24dd004 	sub	sp, sp, #4	; 0x4
         cd654:	e3a08000 	mov	r8, #0	; 0x0
         cd658:	e5828000 	str	r8, [r2]
         cd65c:	e1a0200d 	mov	r2, sp
         cd660:	eb6b674b 	bl	1ba7394 <$MarshalArgumentSize__FRC6RefVarT1PUli>
         cd664:	e1b09000 	movs	r9, r0
         cd668:	1a000005 	bne	cd684 <MarshalArguments__FRC6RefVarT1PPvi+0x50>
         cd66c:	e59d0000 	ldr	r0, [sp]
         cd670:	eb6c253c 	bl	1bd6b68 <$malloc>
         cd674:	e1b08000 	movs	r8, r0
         cd678:	1a000003 	bne	cd68c <MarshalArguments__FRC6RefVarT1PPvi+0x58>
         cd67c:	eb6c52a7 	bl	1be2120 <$MemError>
         cd680:	e1a09000 	mov	r9, r0
         cd684:	e3390000 	teq	r9, #0	; 0x0
         cd688:	1a00000d 	bne	cd6c4 <MarshalArguments__FRC6RefVarT1PPvi+0x90>
         cd68c:	e1a03004 	mov	r3, r4
         cd690:	e92d0008 	stmdb	sp!, {r3}
         cd694:	e1a02008 	mov	r2, r8
         cd698:	e1a01006 	mov	r1, r6
         cd69c:	e1a00007 	mov	r0, r7
         cd6a0:	e59d3004 	ldr	r3, [sp, #4]
         cd6a4:	eb6b673c 	bl	1ba739c <$MarshalArguments__FRC6RefVarT1PvUli>
         cd6a8:	e28dd004 	add	sp, sp, #4	; 0x4
         cd6ac:	e1b09000 	movs	r9, r0
         cd6b0:	0a000002 	beq	cd6c0 <MarshalArguments__FRC6RefVarT1PPvi+0x8c>
         cd6b4:	e1a00008 	mov	r0, r8
         cd6b8:	eb6c14a6 	bl	1bd2958 <$free>
         cd6bc:	ea000000 	b	cd6c4 <MarshalArguments__FRC6RefVarT1PPvi+0x90>
         cd6c0:	e5858000 	str	r8, [r5]
         cd6c4:	e1a00009 	mov	r0, r9
         cd6c8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: MarshalCString__FRC6RefVarPPvT2PUlT4il
 * Address: 000ceaf0
 */
void globals::MarshalCString() {
    /*
         ceaf0:	e1a0c00d 	mov	ip, sp
         ceaf4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ceaf8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ceafc:	e24cb014 	sub	fp, ip, #20	; 0x14
         ceb00:	e1a05001 	mov	r5, r1
         ceb04:	e1a04002 	mov	r4, r2
         ceb08:	e1a06003 	mov	r6, r3
         ceb0c:	e3520000 	cmp	r2, #0	; 0x0
         ceb10:	e28ba018 	add	sl, fp, #24	; 0x18
         ceb14:	e89a0500 	ldmia	sl, {r8, sl}
         ceb18:	e59b9014 	ldr	r9, [fp, #20]
         ceb1c:	1a000002 	bne	ceb2c <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x3c>
         ceb20:	e3390000 	teq	r9, #0	; 0x0
         ceb24:	0a000007 	beq	ceb48 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x58>
         ceb28:	ea000001 	b	ceb34 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x44>
         ceb2c:	15940000 	ldrne	r0, [r4]
         ceb30:	1a000000 	bne	ceb38 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x48>
         ceb34:	e3a00000 	mov	r0, #0	; 0x0
         ceb38:	e1a02006 	mov	r2, r6
         ceb3c:	e1a01005 	mov	r1, r5
         ceb40:	e3a03004 	mov	r3, #4	; 0x4
         ceb44:	eb6b662d 	bl	1ba8400 <$StuffPtr(void *, void **, unsigned long *, unsigned long)>
         ceb48:	e3380000 	teq	r8, #0	; 0x0
         ceb4c:	1a000005 	bne	ceb68 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x78>
         ceb50:	e59b0004 	ldr	r0, [fp, #4]
         ceb54:	e5900000 	ldr	r0, [r0]
         ceb58:	e5900000 	ldr	r0, [r0]
         ceb5c:	eb6bd9d2 	bl	1bc52ac <$Length(long)>
         ceb60:	e1a07000 	mov	r7, r0
         ceb64:	ea00000c 	b	ceb9c <MarshalCString__FRC6RefVarPPvT2PUlT4il+0xac>
         ceb68:	e24dd004 	sub	sp, sp, #4	; 0x4
         ceb6c:	e1a0000d 	mov	r0, sp
         ceb70:	e59b1004 	ldr	r1, [fp, #4]
         ceb74:	eb6bc957 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         ceb78:	e1a0000d 	mov	r0, sp
         ceb7c:	eb6bcd64 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         ceb80:	e1a01008 	mov	r1, r8
         ceb84:	eb6cea40 	bl	1c0948c <$Umbstrlen>
         ceb88:	e2807001 	add	r7, r0, #1	; 0x1
         ceb8c:	e1a0000d 	mov	r0, sp
         ceb90:	e3a01000 	mov	r1, #0	; 0x0
         ceb94:	eb6bcd59 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         ceb98:	e28dd004 	add	sp, sp, #4	; 0x4
         ceb9c:	e3a00000 	mov	r0, #0	; 0x0
         ceba0:	e3340000 	teq	r4, #0	; 0x0
         ceba4:	e52d0004 	str	r0, [sp, -#4]!
         ceba8:	03390000 	teqeq	r9, #0	; 0x0
         cebac:	0a000007 	beq	cebd0 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0xe0>
         cebb0:	e3390000 	teq	r9, #0	; 0x0
         cebb4:	0a000005 	beq	cebd0 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0xe0>
         cebb8:	e2870003 	add	r0, r7, #3	; 0x3
         cebbc:	e3c01003 	bic	r1, r0, #3	; 0x3
         cebc0:	e5990000 	ldr	r0, [r9]
         cebc4:	e0810000 	add	r0, r1, r0
         cebc8:	e5890000 	str	r0, [r9]
         cebcc:	ea00000c 	b	cec04 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x114>
         cebd0:	e3360000 	teq	r6, #0	; 0x0
         cebd4:	03350000 	teqeq	r5, #0	; 0x0
         cebd8:	0a000009 	beq	cec04 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x114>
         cebdc:	e35a0000 	cmp	sl, #0	; 0x0
         cebe0:	da000003 	ble	cebf4 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x104>
         cebe4:	e15a0007 	cmp	sl, r7
         cebe8:	b3a00001 	movlt	r0, #1	; 0x1
         cebec:	b1a0700a 	movlt	r7, sl
         cebf0:	b58d0000 	strlt	r0, [sp]
         cebf4:	e3360000 	teq	r6, #0	; 0x0
         cebf8:	15960000 	ldrne	r0, [r6]
         cebfc:	10800007 	addne	r0, r0, r7
         cec00:	15860000 	strne	r0, [r6]
         cec04:	e24dd004 	sub	sp, sp, #4	; 0x4
         cec08:	e1a0000d 	mov	r0, sp
         cec0c:	e59b1004 	ldr	r1, [fp, #4]
         cec10:	eb6bc930 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         cec14:	e3340000 	teq	r4, #0	; 0x0
         cec18:	0a000012 	beq	cec68 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x178>
         cec1c:	e3380000 	teq	r8, #0	; 0x0
         cec20:	e1a0000d 	mov	r0, sp
         cec24:	1a000004 	bne	cec3c <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x14c>
         cec28:	eb6bcd39 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         cec2c:	e1a01000 	mov	r1, r0
         cec30:	e5940000 	ldr	r0, [r4]
         cec34:	eb6c7ec8 	bl	1bee75c <$Ustrcpy>
         cec38:	ea000004 	b	cec50 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x160>
         cec3c:	eb6bcd34 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         cec40:	e1a02008 	mov	r2, r8
         cec44:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         cec48:	e5941000 	ldr	r1, [r4]
         cec4c:	eb6c61cb 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         cec50:	e2870003 	add	r0, r7, #3	; 0x3
         cec54:	e3c00003 	bic	r0, r0, #3	; 0x3
         cec58:	e5941000 	ldr	r1, [r4]
         cec5c:	e0800001 	add	r0, r0, r1
         cec60:	e5840000 	str	r0, [r4]
         cec64:	ea00001b 	b	cecd8 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x1e8>
         cec68:	e3350000 	teq	r5, #0	; 0x0
         cec6c:	0a000019 	beq	cecd8 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x1e8>
         cec70:	e59d0004 	ldr	r0, [sp, #4]
         cec74:	e3300000 	teq	r0, #0	; 0x0
         cec78:	0a000006 	beq	cec98 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x1a8>
         cec7c:	e1a0000d 	mov	r0, sp
         cec80:	eb6bcd23 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         cec84:	e1a03007 	mov	r3, r7
         cec88:	e1a02008 	mov	r2, r8
         cec8c:	e5951000 	ldr	r1, [r5]
         cec90:	eb6cea04 	bl	1c094a8 <$ConvertUnicodeCharacters__FPUsPclT3>
         cec94:	ea00000c 	b	ceccc <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x1dc>
         cec98:	e3380000 	teq	r8, #0	; 0x0
         cec9c:	e1a0000d 	mov	r0, sp
         ceca0:	1a000004 	bne	cecb8 <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x1c8>
         ceca4:	eb6bcd1a 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         ceca8:	e1a01000 	mov	r1, r0
         cecac:	e5950000 	ldr	r0, [r5]
         cecb0:	eb6c7ea9 	bl	1bee75c <$Ustrcpy>
         cecb4:	ea000004 	b	ceccc <MarshalCString__FRC6RefVarPPvT2PUlT4il+0x1dc>
         cecb8:	eb6bcd15 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         cecbc:	e1a02008 	mov	r2, r8
         cecc0:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         cecc4:	e5951000 	ldr	r1, [r5]
         cecc8:	eb6c61ac 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         ceccc:	e5950000 	ldr	r0, [r5]
         cecd0:	e0800007 	add	r0, r0, r7
         cecd4:	e5850000 	str	r0, [r5]
         cecd8:	e1a0000d 	mov	r0, sp
         cecdc:	e3a01000 	mov	r1, #0	; 0x0
         cece0:	eb6bcd06 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         cece4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1
 * Address: 000cece8
 */
void globals::MarshalAggregrate() {
    /*
         cece8:	e1a0c00d 	mov	ip, sp
         cecec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cecf0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         cecf4:	e24cb014 	sub	fp, ip, #20	; 0x14
         cecf8:	e1a06000 	mov	r6, r0
         cecfc:	e1a05001 	mov	r5, r1
         ced00:	e1a04002 	mov	r4, r2
         ced04:	e3a08000 	mov	r8, #0	; 0x0
         ced08:	e28ba014 	add	sl, fp, #20	; 0x14
         ced0c:	e89a0480 	ldmia	sl, {r7, sl}
         ced10:	e59b9020 	ldr	r9, [fp, #32]
         ced14:	e24dd008 	sub	sp, sp, #8	; 0x8
         ced18:	e3a01000 	mov	r1, #0	; 0x0
         ced1c:	e5950000 	ldr	r0, [r5]
         ced20:	e5900000 	ldr	r0, [r0]
         ced24:	eb6bd54a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         ced28:	eb6bcd07 	bl	1bc214c <$AllocateRefHandle(long)>
         ced2c:	e58d0004 	str	r0, [sp, #4]
         ced30:	e5900000 	ldr	r0, [r0]
         ced34:	e2001003 	and	r1, r0, #3	; 0x3
         ced38:	e3510000 	cmp	r1, #0	; 0x0
         ced3c:	1a000003 	bne	ced50 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x68>
         ced40:	01a00140 	moveq	r0, r0, asr #2
         ced44:	0a000003 	beq	ced58 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x70>
         ced48:	eb6bccf3 	bl	1bc211c <$_RINTError(long)>
         ced4c:	ea000001 	b	ced58 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x70>
         ced50:	e28d0004 	add	r0, sp, #4	; 0x4
         ced54:	eb6b65ab 	bl	1ba8408 <$TranslateTypeMarshalingSymbol(RefVar const &)>
         ced58:	e58d0000 	str	r0, [sp]
         ced5c:	e59d0004 	ldr	r0, [sp, #4]
         ced60:	eb6bd115 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ced64:	e49d0004 	ldr	r0, [sp], #4
         ced68:	e330000a 	teq	r0, #10	; 0xa
         ced6c:	0a00001e 	beq	cedec <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x104>
         ced70:	e330000b 	teq	r0, #11	; 0xb
         ced74:	1a0000bc 	bne	cf06c <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x384>
         ced78:	e1a02005 	mov	r2, r5
         ced7c:	e1a01007 	mov	r1, r7
         ced80:	e1a00004 	mov	r0, r4
         ced84:	eb6b5d66 	bl	1ba6324 <$AlignForType(void **, unsigned long *, RefVar const &)>
         ced88:	e1a00006 	mov	r0, r6
         ced8c:	eb6bd942 	bl	1bc529c <$IsString(RefVar const &)>
         ced90:	e3300000 	teq	r0, #0	; 0x0
         ced94:	0a000097 	beq	ceff8 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x310>
         ced98:	e3a01002 	mov	r1, #2	; 0x2
         ced9c:	e5950000 	ldr	r0, [r5]
         ceda0:	e5900000 	ldr	r0, [r0]
         ceda4:	eb6bd52a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         ceda8:	e3100003 	tst	r0, #3	; 0x3
         cedac:	1a000091 	bne	ceff8 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x310>
         cedb0:	e24dd004 	sub	sp, sp, #4	; 0x4
         cedb4:	e3a01001 	mov	r1, #1	; 0x1
         cedb8:	e5950000 	ldr	r0, [r5]
         cedbc:	e5900000 	ldr	r0, [r0]
         cedc0:	eb6bd523 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cedc4:	eb6bcce0 	bl	1bc214c <$AllocateRefHandle(long)>
         cedc8:	e58d0000 	str	r0, [sp]
         cedcc:	e5900000 	ldr	r0, [r0]
         cedd0:	e2001003 	and	r1, r0, #3	; 0x3
         cedd4:	e3510000 	cmp	r1, #0	; 0x0
         cedd8:	1a00002e 	bne	cee98 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x1b0>
         ceddc:	01a00140 	moveq	r0, r0, asr #2
         cede0:	0a00002e 	beq	ceea0 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x1b8>
         cede4:	eb6bcccc 	bl	1bc211c <$_RINTError(long)>
         cede8:	ea00002c 	b	ceea0 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x1b8>
         cedec:	e1a01007 	mov	r1, r7
         cedf0:	e1a00004 	mov	r0, r4
         cedf4:	e3a02004 	mov	r2, #4	; 0x4
         cedf8:	eb6b5d48 	bl	1ba6320 <$AlignBuffer(void **, unsigned long *, unsigned long)>
         cedfc:	e1a02009 	mov	r2, r9
         cee00:	e3a00801 	mov	r0, #65536	; 0x10000
         cee04:	e59b101c 	ldr	r1, [fp, #28]
         cee08:	e59b3024 	ldr	r3, [fp, #36]
         cee0c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cee10:	e3a03000 	mov	r3, #0	; 0x0
         cee14:	e3a02001 	mov	r2, #1	; 0x1
         cee18:	e3a01000 	mov	r1, #0	; 0x0
         cee1c:	e1a0000a 	mov	r0, sl
         cee20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cee24:	e1a03007 	mov	r3, r7
         cee28:	e3a02000 	mov	r2, #0	; 0x0
         cee2c:	e92d000c 	stmdb	sp!, {r2, r3}
         cee30:	e1a02004 	mov	r2, r4
         cee34:	e1a01005 	mov	r1, r5
         cee38:	e1a00006 	mov	r0, r6
         cee3c:	e59b3010 	ldr	r3, [fp, #16]
         cee40:	eb6b6151 	bl	1ba738c <$Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1>
         cee44:	e28dd028 	add	sp, sp, #40	; 0x28
         cee48:	e1b08000 	movs	r8, r0
         cee4c:	1a000087 	bne	cf070 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x388>
         cee50:	e3a01004 	mov	r1, #4	; 0x4
         cee54:	e3370000 	teq	r7, #0	; 0x0
         cee58:	0a000005 	beq	cee74 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x18c>
         cee5c:	e5970000 	ldr	r0, [r7]
         cee60:	e2102003 	ands	r2, r0, #3	; 0x3
         cee64:	10412002 	subne	r2, r1, r2
         cee68:	03a02000 	moveq	r2, #0	; 0x0
         cee6c:	e0820000 	add	r0, r2, r0
         cee70:	e5870000 	str	r0, [r7]
         cee74:	e3340000 	teq	r4, #0	; 0x0
         cee78:	0a00007c 	beq	cf070 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x388>
         cee7c:	e5942000 	ldr	r2, [r4]
         cee80:	e2120003 	ands	r0, r2, #3	; 0x3
         cee84:	10410000 	subne	r0, r1, r0
         cee88:	03a00000 	moveq	r0, #0	; 0x0
         cee8c:	e0800002 	add	r0, r0, r2
         cee90:	e5840000 	str	r0, [r4]
         cee94:	ea000075 	b	cf070 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x388>
         cee98:	e1a0000d 	mov	r0, sp
         cee9c:	eb6b6559 	bl	1ba8408 <$TranslateTypeMarshalingSymbol(RefVar const &)>
         ceea0:	e1a0a000 	mov	sl, r0
         ceea4:	e59d0000 	ldr	r0, [sp]
         ceea8:	eb6bd0c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ceeac:	e33a0003 	teq	sl, #3	; 0x3
         ceeb0:	0a000005 	beq	ceecc <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x1e4>
         ceeb4:	e33a0004 	teq	sl, #4	; 0x4
         ceeb8:	133a000d 	teqne	sl, #13	; 0xd
         ceebc:	0a00000e 	beq	ceefc <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x214>
         ceec0:	e33a000f 	teq	sl, #15	; 0xf
         ceec4:	159f002c 	ldrne	r0, [pc, #2c]	; ceef8 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x210>
         ceec8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         ceecc:	e3a0a001 	mov	sl, #1	; 0x1
         ceed0:	e3a01002 	mov	r1, #2	; 0x2
         ceed4:	e5950000 	ldr	r0, [r5]
         ceed8:	e5900000 	ldr	r0, [r0]
         ceedc:	eb6bd4dc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         ceee0:	e3100003 	tst	r0, #3	; 0x3
         ceee4:	01a00140 	moveq	r0, r0, asr #2
         ceee8:	0a000000 	beq	ceef0 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x208>
         ceeec:	eb6bcc8a 	bl	1bc211c <$_RINTError(long)>
         ceef0:	e1a05080 	mov	r5, r0, lsl #1
         ceef4:	ea00001a 	b	cef64 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x27c>
         ceef8:	fffeee8e 	swinv	0x00feee8e
         ceefc:	e3a0a000 	mov	sl, #0	; 0x0
         cef00:	e3a01002 	mov	r1, #2	; 0x2
         cef04:	e5950000 	ldr	r0, [r5]
         cef08:	e5900000 	ldr	r0, [r0]
         cef0c:	eb6bd4d0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cef10:	e3100003 	tst	r0, #3	; 0x3
         cef14:	01a00140 	moveq	r0, r0, asr #2
         cef18:	0a000000 	beq	cef20 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x238>
         cef1c:	eb6bcc7e 	bl	1bc211c <$_RINTError(long)>
         cef20:	e1b05000 	movs	r5, r0
         cef24:	03a05000 	moveq	r5, #0	; 0x0
         cef28:	0a00000d 	beq	cef64 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x27c>
         cef2c:	e24dd004 	sub	sp, sp, #4	; 0x4
         cef30:	e1a01006 	mov	r1, r6
         cef34:	e1a0000d 	mov	r0, sp
         cef38:	eb6bc866 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         cef3c:	e1a0000d 	mov	r0, sp
         cef40:	eb6bcc73 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         cef44:	e1a02005 	mov	r2, r5
         cef48:	e1a01009 	mov	r1, r9
         cef4c:	eb6ce94f 	bl	1c09490 <$Umbstrnlen>
         cef50:	e1a05000 	mov	r5, r0
         cef54:	e1a0000d 	mov	r0, sp
         cef58:	e3a01000 	mov	r1, #0	; 0x0
         cef5c:	eb6bcc67 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         cef60:	e28dd004 	add	sp, sp, #4	; 0x4
         cef64:	e24dd008 	sub	sp, sp, #8	; 0x8
         cef68:	e1b00004 	movs	r0, r4
         cef6c:	15940000 	ldrne	r0, [r4]
         cef70:	10800005 	addne	r0, r0, r5
         cef74:	e58d0004 	str	r0, [sp, #4]
         cef78:	e1b00007 	movs	r0, r7
         cef7c:	15970000 	ldrne	r0, [r7]
         cef80:	10800005 	addne	r0, r0, r5
         cef84:	e1b03005 	movs	r3, r5
         cef88:	e58d0000 	str	r0, [sp]
         cef8c:	11a03005 	movne	r3, r5
         cef90:	e33a0000 	teq	sl, #0	; 0x0
         cef94:	01a02009 	moveq	r2, r9
         cef98:	13a02000 	movne	r2, #0	; 0x0
         cef9c:	e3a01000 	mov	r1, #0	; 0x0
         cefa0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         cefa4:	e1a03007 	mov	r3, r7
         cefa8:	e1a01004 	mov	r1, r4
         cefac:	e1a00006 	mov	r0, r6
         cefb0:	e3a02000 	mov	r2, #0	; 0x0
         cefb4:	eb6b60f9 	bl	1ba73a0 <$MarshalCString__FRC6RefVarPPvT2PUlT4il>
         cefb8:	e28dd00c 	add	sp, sp, #12	; 0xc
         cefbc:	e3350000 	teq	r5, #0	; 0x0
         cefc0:	1a000004 	bne	cefd8 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x2f0>
         cefc4:	e1a01007 	mov	r1, r7
         cefc8:	e1a00004 	mov	r0, r4
         cefcc:	e3a02004 	mov	r2, #4	; 0x4
         cefd0:	eb6b5cd2 	bl	1ba6320 <$AlignBuffer(void **, unsigned long *, unsigned long)>
         cefd4:	ea000005 	b	ceff0 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x308>
         cefd8:	e3340000 	teq	r4, #0	; 0x0
         cefdc:	159d0004 	ldrne	r0, [sp, #4]
         cefe0:	15840000 	strne	r0, [r4]
         cefe4:	e3370000 	teq	r7, #0	; 0x0
         cefe8:	159d0000 	ldrne	r0, [sp]
         cefec:	15870000 	strne	r0, [r7]
         ceff0:	e28dd00c 	add	sp, sp, #12	; 0xc
         ceff4:	ea00001d 	b	cf070 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x388>
         ceff8:	e1a02009 	mov	r2, r9
         ceffc:	e3a01000 	mov	r1, #0	; 0x0
         cf000:	e59b3024 	ldr	r3, [fp, #36]
         cf004:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         cf008:	e3a01002 	mov	r1, #2	; 0x2
         cf00c:	e5950000 	ldr	r0, [r5]
         cf010:	e5900000 	ldr	r0, [r0]
         cf014:	eb6bd48e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cf018:	e3100003 	tst	r0, #3	; 0x3
         cf01c:	01a00140 	moveq	r0, r0, asr #2
         cf020:	0a000000 	beq	cf028 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x340>
         cf024:	eb6bcc3c 	bl	1bc211c <$_RINTError(long)>
         cf028:	e1a03000 	mov	r3, r0
         cf02c:	e3a02000 	mov	r2, #0	; 0x0
         cf030:	e3a01001 	mov	r1, #1	; 0x1
         cf034:	e3a00000 	mov	r0, #0	; 0x0
         cf038:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf03c:	e1a0300a 	mov	r3, sl
         cf040:	e1a02007 	mov	r2, r7
         cf044:	e3a01000 	mov	r1, #0	; 0x0
         cf048:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         cf04c:	e1a02004 	mov	r2, r4
         cf050:	e1a01005 	mov	r1, r5
         cf054:	e1a00006 	mov	r0, r6
         cf058:	e59b3010 	ldr	r3, [fp, #16]
         cf05c:	eb6b60ca 	bl	1ba738c <$Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1>
         cf060:	e28dd028 	add	sp, sp, #40	; 0x28
         cf064:	e1a08000 	mov	r8, r0
         cf068:	ea000000 	b	cf070 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x388>
         cf06c:	e51f817c 	ldr	r8, [pc, #fffffe84]	; ceef8 <MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1+0x210>
         cf070:	e1a00008 	mov	r0, r8
         cf074:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1
 * Address: 000cf078
 */
void globals::Marshal1() {
    /*
         cf078:	e1a0c00d 	mov	ip, sp
         cf07c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf080:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         cf084:	e24cb014 	sub	fp, ip, #20	; 0x14
         cf088:	e1a04002 	mov	r4, r2
         cf08c:	e3a07000 	mov	r7, #0	; 0x0
         cf090:	e28ba020 	add	sl, fp, #32	; 0x20
         cf094:	e89a0420 	ldmia	sl, {r5, sl}
         cf098:	e28b8014 	add	r8, fp, #20	; 0x14
         cf09c:	e8980140 	ldmia	r8, {r6, r8}
         cf0a0:	e59b9028 	ldr	r9, [fp, #40]
         cf0a4:	ea000134 	b	cf57c <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x504>
         cf0a8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         cf0ac:	e1a0100a 	mov	r1, sl
         cf0b0:	e59b0008 	ldr	r0, [fp, #8]
         cf0b4:	e5900000 	ldr	r0, [r0]
         cf0b8:	e5900000 	ldr	r0, [r0]
         cf0bc:	eb6bd464 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cf0c0:	eb6bcc21 	bl	1bc214c <$AllocateRefHandle(long)>
         cf0c4:	e3390801 	teq	r9, #65536	; 0x10000
         cf0c8:	e58d0008 	str	r0, [sp, #8]
         cf0cc:	0a000007 	beq	cf0f0 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x78>
         cf0d0:	e59b0004 	ldr	r0, [fp, #4]
         cf0d4:	e5900000 	ldr	r0, [r0]
         cf0d8:	e5900000 	ldr	r0, [r0]
         cf0dc:	e3300002 	teq	r0, #2	; 0x2
         cf0e0:	0a000002 	beq	cf0f0 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x78>
         cf0e4:	e1a01009 	mov	r1, r9
         cf0e8:	eb6bd459 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cf0ec:	ea000000 	b	cf0f4 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x7c>
         cf0f0:	e3a00000 	mov	r0, #0	; 0x0
         cf0f4:	eb6bcc14 	bl	1bc214c <$AllocateRefHandle(long)>
         cf0f8:	e58d0004 	str	r0, [sp, #4]
         cf0fc:	e28d0008 	add	r0, sp, #8	; 0x8
         cf100:	eb6c9221 	bl	1bf398c <$IsArray(RefVar const &)>
         cf104:	e3300000 	teq	r0, #0	; 0x0
         cf108:	0a000048 	beq	cf230 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x1b8>
         cf10c:	e24dd008 	sub	sp, sp, #8	; 0x8
         cf110:	e3a01000 	mov	r1, #0	; 0x0
         cf114:	e59d0010 	ldr	r0, [sp, #16]
         cf118:	e5900000 	ldr	r0, [r0]
         cf11c:	eb6bd44c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cf120:	eb6bcc09 	bl	1bc214c <$AllocateRefHandle(long)>
         cf124:	e58d0004 	str	r0, [sp, #4]
         cf128:	e5900000 	ldr	r0, [r0]
         cf12c:	e2001003 	and	r1, r0, #3	; 0x3
         cf130:	e3510000 	cmp	r1, #0	; 0x0
         cf134:	1a000003 	bne	cf148 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0xd0>
         cf138:	01a00140 	moveq	r0, r0, asr #2
         cf13c:	0a000003 	beq	cf150 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0xd8>
         cf140:	eb6bcbf5 	bl	1bc211c <$_RINTError(long)>
         cf144:	ea000001 	b	cf150 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0xd8>
         cf148:	e28d0004 	add	r0, sp, #4	; 0x4
         cf14c:	eb6b64ad 	bl	1ba8408 <$TranslateTypeMarshalingSymbol(RefVar const &)>
         cf150:	e58d0000 	str	r0, [sp]
         cf154:	e59d0004 	ldr	r0, [sp, #4]
         cf158:	eb6bd017 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cf15c:	e49d0004 	ldr	r0, [sp], #4
         cf160:	e330000e 	teq	r0, #14	; 0xe
         cf164:	1a000017 	bne	cf1c8 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x150>
         cf168:	e3a03000 	mov	r3, #0	; 0x0
         cf16c:	e92d0008 	stmdb	sp!, {r3}
         cf170:	e3a01001 	mov	r1, #1	; 0x1
         cf174:	e59d0010 	ldr	r0, [sp, #16]
         cf178:	e5900000 	ldr	r0, [r0]
         cf17c:	eb6bd434 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cf180:	e3100003 	tst	r0, #3	; 0x3
         cf184:	01a00140 	moveq	r0, r0, asr #2
         cf188:	0a000000 	beq	cf190 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x118>
         cf18c:	eb6bcbe2 	bl	1bc211c <$_RINTError(long)>
         cf190:	e1a03000 	mov	r3, r0
         cf194:	e59b201c 	ldr	r2, [fp, #28]
         cf198:	e92d000c 	stmdb	sp!, {r2, r3}
         cf19c:	e3350000 	teq	r5, #0	; 0x0
         cf1a0:	01a03008 	moveq	r3, r8
         cf1a4:	11a03005 	movne	r3, r5
         cf1a8:	e3360000 	teq	r6, #0	; 0x0
         cf1ac:	01a01004 	moveq	r1, r4
         cf1b0:	11a01006 	movne	r1, r6
         cf1b4:	e28d0014 	add	r0, sp, #20	; 0x14
         cf1b8:	e59b2010 	ldr	r2, [fp, #16]
         cf1bc:	eb6b6077 	bl	1ba73a0 <$MarshalCString__FRC6RefVarPPvT2PUlT4il>
         cf1c0:	e28dd00c 	add	sp, sp, #12	; 0xc
         cf1c4:	ea000017 	b	cf228 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x1b0>
         cf1c8:	e59b001c 	ldr	r0, [fp, #28]
         cf1cc:	e28b3030 	add	r3, fp, #48	; 0x30
         cf1d0:	e893000e 	ldmia	r3, {r1, r2, r3}
         cf1d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf1d8:	e3350000 	teq	r5, #0	; 0x0
         cf1dc:	01a03008 	moveq	r3, r8
         cf1e0:	11a03005 	movne	r3, r5
         cf1e4:	e92d0008 	stmdb	sp!, {r3}
         cf1e8:	e3360000 	teq	r6, #0	; 0x0
         cf1ec:	01a02004 	moveq	r2, r4
         cf1f0:	11a02006 	movne	r2, r6
         cf1f4:	e28d1020 	add	r1, sp, #32	; 0x20
         cf1f8:	e28d001c 	add	r0, sp, #28	; 0x1c
         cf1fc:	e59b3010 	ldr	r3, [fp, #16]
         cf200:	eb6b6062 	bl	1ba7390 <$MarshalAggregrate__FRC6RefVarT1PPvT3PUlT5liT1>
         cf204:	e28dd014 	add	sp, sp, #20	; 0x14
         cf208:	e1b07000 	movs	r7, r0
         cf20c:	0a000005 	beq	cf228 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x1b0>
         cf210:	e59d0008 	ldr	r0, [sp, #8]
         cf214:	eb6bcfe8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cf218:	e59d000c 	ldr	r0, [sp, #12]
         cf21c:	eb6bcfe6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cf220:	e1a00007 	mov	r0, r7
         cf224:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         cf228:	e28dd004 	add	sp, sp, #4	; 0x4
         cf22c:	ea0000c8 	b	cf554 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4dc>
         cf230:	e59d0008 	ldr	r0, [sp, #8]
         cf234:	e5900000 	ldr	r0, [r0]
         cf238:	e2001003 	and	r1, r0, #3	; 0x3
         cf23c:	e3510000 	cmp	r1, #0	; 0x0
         cf240:	1a000003 	bne	cf254 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x1dc>
         cf244:	01a00140 	moveq	r0, r0, asr #2
         cf248:	0a000003 	beq	cf25c <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x1e4>
         cf24c:	eb6bcbb2 	bl	1bc211c <$_RINTError(long)>
         cf250:	ea000001 	b	cf25c <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x1e4>
         cf254:	e28d0008 	add	r0, sp, #8	; 0x8
         cf258:	eb6b646a 	bl	1ba8408 <$TranslateTypeMarshalingSymbol(RefVar const &)>
         cf25c:	e3500012 	cmp	r0, #18	; 0x12
         cf260:	908ff100 	addls	pc, pc, r0, lsl #2
         cf264:	ea0000d8 	b	cf5cc <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x554>
         cf268:	ea0000d7 	b	cf5cc <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x554>
         cf26c:	ea00002d 	b	cf328 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2b0>
         cf270:	ea00002c 	b	cf328 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2b0>
         cf274:	ea00003d 	b	cf370 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2f8>
         cf278:	ea00007c 	b	cf470 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x3f8>
         cf27c:	ea00007b 	b	cf470 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x3f8>
         cf280:	ea00008e 	b	cf4c0 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x448>
         cf284:	ea000027 	b	cf328 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2b0>
         cf288:	ea000026 	b	cf328 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2b0>
         cf28c:	ea000025 	b	cf328 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2b0>
         cf290:	ea0000cd 	b	cf5cc <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x554>
         cf294:	ea0000cc 	b	cf5cc <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x554>
         cf298:	ea0000cb 	b	cf5cc <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x554>
         cf29c:	ea000044 	b	cf3b4 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x33c>
         cf2a0:	ea00009b 	b	cf514 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x49c>
         cf2a4:	ea000031 	b	cf370 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2f8>
         cf2a8:	ea0000bd 	b	cf5a4 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x52c>
         cf2ac:	ea000000 	b	cf2b4 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x23c>
         cf2b0:	ea00000e 	b	cf2f0 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x278>
         cf2b4:	e59d0004 	ldr	r0, [sp, #4]
         cf2b8:	e5900000 	ldr	r0, [r0]
         cf2bc:	eb6bd80b 	bl	1bc52f0 <$ObjectFlags(long)>
         cf2c0:	e3100010 	tst	r0, #16	; 0x10
         cf2c4:	1a000009 	bne	cf2f0 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x278>
         cf2c8:	e59d0004 	ldr	r0, [sp, #4]
         cf2cc:	e5900000 	ldr	r0, [r0]
         cf2d0:	eb6bd7f7 	bl	1bc52b4 <$LockRef(long)>
         cf2d4:	e59b0038 	ldr	r0, [fp, #56]
         cf2d8:	e5900000 	ldr	r0, [r0]
         cf2dc:	e5900000 	ldr	r0, [r0]
         cf2e0:	e3300002 	teq	r0, #2	; 0x2
         cf2e4:	128d1004 	addne	r1, sp, #4	; 0x4
         cf2e8:	159b0038 	ldrne	r0, [fp, #56]
         cf2ec:	1b6bcb8d 	blne	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         cf2f0:	e28d0004 	add	r0, sp, #4	; 0x4
         cf2f4:	eb6bcb9d 	bl	1bc2170 <$CoerceToDouble(RefVar const &)>
         cf2f8:	e3370000 	teq	r7, #0	; 0x0
         cf2fc:	1a000094 	bne	cf554 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4dc>
         cf300:	e3350000 	teq	r5, #0	; 0x0
         cf304:	01a03008 	moveq	r3, r8
         cf308:	11a03005 	movne	r3, r5
         cf30c:	e3360000 	teq	r6, #0	; 0x0
         cf310:	01a02004 	moveq	r2, r4
         cf314:	11a02006 	movne	r2, r6
         cf318:	ed2d8102 	stfd	f0, [sp, -#8]!
         cf31c:	e8bd0003 	ldmia	sp!, {r0, r1}
         cf320:	eb6b8966 	bl	1bb18c0 <$StuffDouble(double, void **, unsigned long *)>
         cf324:	ea00008a 	b	cf554 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4dc>
         cf328:	e1a0100d 	mov	r1, sp
         cf32c:	e28d0004 	add	r0, sp, #4	; 0x4
         cf330:	eb6b7d09 	bl	1bae75c <$RefToULong(RefVar const &, unsigned long *)>
         cf334:	e1b07000 	movs	r7, r0
         cf338:	1a000085 	bne	cf554 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4dc>
         cf33c:	e3350000 	teq	r5, #0	; 0x0
         cf340:	03360000 	teqeq	r6, #0	; 0x0
         cf344:	e3a03004 	mov	r3, #4	; 0x4
         cf348:	0a000002 	beq	cf358 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2e0>
         cf34c:	e3350000 	teq	r5, #0	; 0x0
         cf350:	11a02005 	movne	r2, r5
         cf354:	1a000000 	bne	cf35c <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2e4>
         cf358:	e1a02008 	mov	r2, r8
         cf35c:	e3360000 	teq	r6, #0	; 0x0
         cf360:	0a000054 	beq	cf4b8 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x440>
         cf364:	ea000051 	b	cf4b0 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x438>
         cf368:	e59d0000 	ldr	r0, [sp]
         cf36c:	ea000066 	b	cf50c <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x494>
         cf370:	e1a0100d 	mov	r1, sp
         cf374:	e28d0004 	add	r0, sp, #4	; 0x4
         cf378:	eb6b7cf7 	bl	1bae75c <$RefToULong(RefVar const &, unsigned long *)>
         cf37c:	e1b07000 	movs	r7, r0
         cf380:	1a000073 	bne	cf554 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4dc>
         cf384:	e3350000 	teq	r5, #0	; 0x0
         cf388:	03360000 	teqeq	r6, #0	; 0x0
         cf38c:	03a03002 	moveq	r3, #2	; 0x2
         cf390:	0a000003 	beq	cf3a4 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x32c>
         cf394:	e3a03004 	mov	r3, #4	; 0x4
         cf398:	e3350000 	teq	r5, #0	; 0x0
         cf39c:	11a02005 	movne	r2, r5
         cf3a0:	1a000000 	bne	cf3a8 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x330>
         cf3a4:	e1a02008 	mov	r2, r8
         cf3a8:	e3360000 	teq	r6, #0	; 0x0
         cf3ac:	0a000041 	beq	cf4b8 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x440>
         cf3b0:	ea00003e 	b	cf4b0 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x438>
         cf3b4:	e59d0004 	ldr	r0, [sp, #4]
         cf3b8:	e5900000 	ldr	r0, [r0]
         cf3bc:	e2002003 	and	r2, r0, #3	; 0x3
         cf3c0:	e3320002 	teq	r2, #2	; 0x2
         cf3c4:	03a03003 	moveq	r3, #3	; 0x3
         cf3c8:	00031140 	andeq	r1, r3, r0, asr #2
         cf3cc:	03310001 	teqeq	r1, #1	; 0x1
         cf3d0:	1a000026 	bne	cf470 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x3f8>
         cf3d4:	e24dd008 	sub	sp, sp, #8	; 0x8
         cf3d8:	e3320002 	teq	r2, #2	; 0x2
         cf3dc:	03310001 	teqeq	r1, #1	; 0x1
         cf3e0:	01a00140 	moveq	r0, r0, asr #2
         cf3e4:	01a00140 	moveq	r0, r0, asr #2
         cf3e8:	01a00800 	moveq	r0, r0, lsl #16
         cf3ec:	01a00820 	moveq	r0, r0, lsr #16
         cf3f0:	0a000000 	beq	cf3f8 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x380>
         cf3f4:	eb6bcb47 	bl	1bc2118 <$_RCHARError(long)>
         cf3f8:	e5cd0005 	strb	r0, [sp, #5]
         cf3fc:	e1a00440 	mov	r0, r0, asr #8
         cf400:	e5cd0004 	strb	r0, [sp, #4]
         cf404:	e1a0100d 	mov	r1, sp
         cf408:	e28d0004 	add	r0, sp, #4	; 0x4
         cf40c:	e59b2034 	ldr	r2, [fp, #52]
         cf410:	eb6ce825 	bl	1c094ac <$ConvertUnicodeChar(unsigned short *, char *, long)>
         cf414:	e3300001 	teq	r0, #1	; 0x1
         cf418:	1a000004 	bne	cf430 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x3b8>
         cf41c:	e3350000 	teq	r5, #0	; 0x0
         cf420:	03360000 	teqeq	r6, #0	; 0x0
         cf424:	03a03001 	moveq	r3, #1	; 0x1
         cf428:	0a000006 	beq	cf448 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x3d0>
         cf42c:	ea000002 	b	cf43c <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x3c4>
         cf430:	e3350000 	teq	r5, #0	; 0x0
         cf434:	03360000 	teqeq	r6, #0	; 0x0
         cf438:	0a000001 	beq	cf444 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x3cc>
         cf43c:	e3a03004 	mov	r3, #4	; 0x4
         cf440:	ea000000 	b	cf448 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x3d0>
         cf444:	e3a03002 	mov	r3, #2	; 0x2
         cf448:	e3350000 	teq	r5, #0	; 0x0
         cf44c:	01a02008 	moveq	r2, r8
         cf450:	11a02005 	movne	r2, r5
         cf454:	e3360000 	teq	r6, #0	; 0x0
         cf458:	01a01004 	moveq	r1, r4
         cf45c:	11a01006 	movne	r1, r6
         cf460:	e1a0000d 	mov	r0, sp
         cf464:	eb6b63e6 	bl	1ba8404 <$StuffScalar(unsigned long, void **, unsigned long *, void **)>
         cf468:	e28dd008 	add	sp, sp, #8	; 0x8
         cf46c:	ea000038 	b	cf554 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4dc>
         cf470:	e1a0100d 	mov	r1, sp
         cf474:	e28d0004 	add	r0, sp, #4	; 0x4
         cf478:	eb6b7cb7 	bl	1bae75c <$RefToULong(RefVar const &, unsigned long *)>
         cf47c:	e1b07000 	movs	r7, r0
         cf480:	1a000033 	bne	cf554 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4dc>
         cf484:	e3350000 	teq	r5, #0	; 0x0
         cf488:	03360000 	teqeq	r6, #0	; 0x0
         cf48c:	03a03001 	moveq	r3, #1	; 0x1
         cf490:	0a000003 	beq	cf4a4 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x42c>
         cf494:	e3a03004 	mov	r3, #4	; 0x4
         cf498:	e3350000 	teq	r5, #0	; 0x0
         cf49c:	11a02005 	movne	r2, r5
         cf4a0:	1a000000 	bne	cf4a8 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x430>
         cf4a4:	e1a02008 	mov	r2, r8
         cf4a8:	e3360000 	teq	r6, #0	; 0x0
         cf4ac:	0a000001 	beq	cf4b8 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x440>
         cf4b0:	e1a01006 	mov	r1, r6
         cf4b4:	eaffffab 	b	cf368 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2f0>
         cf4b8:	e1a01004 	mov	r1, r4
         cf4bc:	eaffffa9 	b	cf368 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x2f0>
         cf4c0:	e1a0100d 	mov	r1, sp
         cf4c4:	e28d0004 	add	r0, sp, #4	; 0x4
         cf4c8:	eb6b7ca3 	bl	1bae75c <$RefToULong(RefVar const &, unsigned long *)>
         cf4cc:	e1b07000 	movs	r7, r0
         cf4d0:	e59d0000 	ldr	r0, [sp]
         cf4d4:	e1a00100 	mov	r0, r0, lsl #2
         cf4d8:	e58d0000 	str	r0, [sp]
         cf4dc:	1a00001c 	bne	cf554 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4dc>
         cf4e0:	e3350000 	teq	r5, #0	; 0x0
         cf4e4:	03360000 	teqeq	r6, #0	; 0x0
         cf4e8:	e3a03004 	mov	r3, #4	; 0x4
         cf4ec:	0a000002 	beq	cf4fc <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x484>
         cf4f0:	e3350000 	teq	r5, #0	; 0x0
         cf4f4:	11a02005 	movne	r2, r5
         cf4f8:	1a000000 	bne	cf500 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x488>
         cf4fc:	e1a02008 	mov	r2, r8
         cf500:	e3360000 	teq	r6, #0	; 0x0
         cf504:	01a01004 	moveq	r1, r4
         cf508:	11a01006 	movne	r1, r6
         cf50c:	eb6b63bc 	bl	1ba8404 <$StuffScalar(unsigned long, void **, unsigned long *, void **)>
         cf510:	ea00000f 	b	cf554 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4dc>
         cf514:	e3a03000 	mov	r3, #0	; 0x0
         cf518:	e59b101c 	ldr	r1, [fp, #28]
         cf51c:	e59b2034 	ldr	r2, [fp, #52]
         cf520:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         cf524:	e3350000 	teq	r5, #0	; 0x0
         cf528:	01a03008 	moveq	r3, r8
         cf52c:	11a03005 	movne	r3, r5
         cf530:	e3360000 	teq	r6, #0	; 0x0
         cf534:	0a000001 	beq	cf540 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4c8>
         cf538:	e1a01006 	mov	r1, r6
         cf53c:	ea000000 	b	cf544 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4cc>
         cf540:	e1a01004 	mov	r1, r4
         cf544:	e28d0010 	add	r0, sp, #16	; 0x10
         cf548:	e59b2010 	ldr	r2, [fp, #16]
         cf54c:	eb6b5f93 	bl	1ba73a0 <$MarshalCString__FRC6RefVarPPvT2PUlT4il>
         cf550:	e28dd00c 	add	sp, sp, #12	; 0xc
         cf554:	e59d0004 	ldr	r0, [sp, #4]
         cf558:	eb6bcf17 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cf55c:	e59d0008 	ldr	r0, [sp, #8]
         cf560:	eb6bcf15 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cf564:	e28dd00c 	add	sp, sp, #12	; 0xc
         cf568:	e2899001 	add	r9, r9, #1	; 0x1
         cf56c:	e59b1030 	ldr	r1, [fp, #48]
         cf570:	e08aa001 	add	sl, sl, r1
         cf574:	e3370000 	teq	r7, #0	; 0x0
         cf578:	1a00001b 	bne	cf5ec <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x574>
         cf57c:	e59b0008 	ldr	r0, [fp, #8]
         cf580:	e5900000 	ldr	r0, [r0]
         cf584:	e5900000 	ldr	r0, [r0]
         cf588:	eb6bd747 	bl	1bc52ac <$Length(long)>
         cf58c:	e150000a 	cmp	r0, sl
         cf590:	da000017 	ble	cf5f4 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x57c>
         cf594:	e59b002c 	ldr	r0, [fp, #44]
         cf598:	e1590000 	cmp	r9, r0
         cf59c:	bafffec1 	blt	cf0a8 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x30>
         cf5a0:	ea000013 	b	cf5f4 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x57c>
         cf5a4:	e3a03000 	mov	r3, #0	; 0x0
         cf5a8:	e3a02000 	mov	r2, #0	; 0x0
         cf5ac:	e59b101c 	ldr	r1, [fp, #28]
         cf5b0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         cf5b4:	e3350000 	teq	r5, #0	; 0x0
         cf5b8:	01a03008 	moveq	r3, r8
         cf5bc:	11a03005 	movne	r3, r5
         cf5c0:	e3360000 	teq	r6, #0	; 0x0
         cf5c4:	0affffdd 	beq	cf540 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4c8>
         cf5c8:	eaffffda 	b	cf538 <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x4c0>
         cf5cc:	e3e04e17 	mvn	r4, #368	; 0x170
         cf5d0:	e2444a11 	sub	r4, r4, #69632	; 0x11000
         cf5d4:	e59d0004 	ldr	r0, [sp, #4]
         cf5d8:	eb6bcef7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cf5dc:	e59d0008 	ldr	r0, [sp, #8]
         cf5e0:	eb6bcef5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cf5e4:	e1a00004 	mov	r0, r4
         cf5e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         cf5ec:	e3370000 	teq	r7, #0	; 0x0
         cf5f0:	1a000025 	bne	cf68c <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x614>
         cf5f4:	e59b1030 	ldr	r1, [fp, #48]
         cf5f8:	e3310000 	teq	r1, #0	; 0x0
         cf5fc:	1a000022 	bne	cf68c <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x614>
         cf600:	e59b002c 	ldr	r0, [fp, #44]
         cf604:	e1590000 	cmp	r9, r0
         cf608:	aa00001f 	bge	cf68c <Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1+0x614>
         cf60c:	e24dd004 	sub	sp, sp, #4	; 0x4
         cf610:	e1a0100a 	mov	r1, sl
         cf614:	e59b0008 	ldr	r0, [fp, #8]
         cf618:	e5900000 	ldr	r0, [r0]
         cf61c:	e5900000 	ldr	r0, [r0]
         cf620:	eb6bd30b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         cf624:	eb6bcac8 	bl	1bc214c <$AllocateRefHandle(long)>
         cf628:	e58d0000 	str	r0, [sp]
         cf62c:	e1a0200d 	mov	r2, sp
         cf630:	e1a01008 	mov	r1, r8
         cf634:	e1a00004 	mov	r0, r4
         cf638:	eb6b5b39 	bl	1ba6324 <$AlignForType(void **, unsigned long *, RefVar const &)>
         cf63c:	e59d0000 	ldr	r0, [sp]
         cf640:	eb6bcedd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         cf644:	e3a01000 	mov	r1, #0	; 0x0
         cf648:	e3a00801 	mov	r0, #65536	; 0x10000
         cf64c:	e28b3034 	add	r3, fp, #52	; 0x34
         cf650:	e893000c 	ldmia	r3, {r2, r3}
         cf654:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf658:	e3a03801 	mov	r3, #65536	; 0x10000
         cf65c:	e1a0200a 	mov	r2, sl
         cf660:	e59b001c 	ldr	r0, [fp, #28]
         cf664:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf668:	e1a03008 	mov	r3, r8
         cf66c:	e3a02000 	mov	r2, #0	; 0x0
         cf670:	e92d000c 	stmdb	sp!, {r2, r3}
         cf674:	e1a02004 	mov	r2, r4
         cf678:	e99b0003 	ldmib	fp, {r0, r1}
         cf67c:	e59b3010 	ldr	r3, [fp, #16]
         cf680:	eb6b5f41 	bl	1ba738c <$Marshal1__FRC6RefVarT1PPvN23PUlN26lN39iT1>
         cf684:	e1a07000 	mov	r7, r0
         cf688:	e28dd02c 	add	sp, sp, #44	; 0x2c
         cf68c:	e1a00007 	mov	r0, r7
         cf690:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MarshalArgumentSize__FRC6RefVarT1PUli
 * Address: 000cf694
 */
void globals::MarshalArgumentSize() {
    /*
         cf694:	e1a0c00d 	mov	ip, sp
         cf698:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         cf69c:	e24cb004 	sub	fp, ip, #4	; 0x4
         cf6a0:	e1a0e000 	mov	lr, r0
         cf6a4:	e1a0c001 	mov	ip, r1
         cf6a8:	e1a04002 	mov	r4, r2
         cf6ac:	e24dd008 	sub	sp, sp, #8	; 0x8
         cf6b0:	e3a00000 	mov	r0, #0	; 0x0
         cf6b4:	e58d0004 	str	r0, [sp, #4]
         cf6b8:	e3a02001 	mov	r2, #1	; 0x1
         cf6bc:	e3a01801 	mov	r1, #65536	; 0x10000
         cf6c0:	e58d0000 	str	r0, [sp]
         cf6c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf6c8:	e3a03000 	mov	r3, #0	; 0x0
         cf6cc:	e3a02000 	mov	r2, #0	; 0x0
         cf6d0:	e28d1010 	add	r1, sp, #16	; 0x10
         cf6d4:	e28d0014 	add	r0, sp, #20	; 0x14
         cf6d8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf6dc:	e92d0008 	stmdb	sp!, {r3}
         cf6e0:	e1a0100c 	mov	r1, ip
         cf6e4:	e1a0000e 	mov	r0, lr
         cf6e8:	eb6b5b20 	bl	1ba6370 <$DoMarshal__FRC6RefVarT1PPvN23PUlN26lN39i>
         cf6ec:	e28dd024 	add	sp, sp, #36	; 0x24
         cf6f0:	e89d0006 	ldmia	sp, {r1, r2}
         cf6f4:	e0821001 	add	r1, r2, r1
         cf6f8:	e5841000 	str	r1, [r4]
         cf6fc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: MarshalArguments__FRC6RefVarT1PvUli
 * Address: 000cf700
 */
void globals::MarshalArguments() {
    /*
         cf700:	e1a0c00d 	mov	ip, sp
         cf704:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         cf708:	e24cb004 	sub	fp, ip, #4	; 0x4
         cf70c:	e1a06000 	mov	r6, r0
         cf710:	e1a05001 	mov	r5, r1
         cf714:	e1a04002 	mov	r4, r2
         cf718:	e59b7004 	ldr	r7, [fp, #4]
         cf71c:	e24dd008 	sub	sp, sp, #8	; 0x8
         cf720:	e3a00000 	mov	r0, #0	; 0x0
         cf724:	e58d0004 	str	r0, [sp, #4]
         cf728:	e1a03007 	mov	r3, r7
         cf72c:	e3a02001 	mov	r2, #1	; 0x1
         cf730:	e3a01801 	mov	r1, #65536	; 0x10000
         cf734:	e58d0000 	str	r0, [sp]
         cf738:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf73c:	e3a03000 	mov	r3, #0	; 0x0
         cf740:	e3a02000 	mov	r2, #0	; 0x0
         cf744:	e28d1010 	add	r1, sp, #16	; 0x10
         cf748:	e28d0014 	add	r0, sp, #20	; 0x14
         cf74c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf750:	e92d0008 	stmdb	sp!, {r3}
         cf754:	e1a01005 	mov	r1, r5
         cf758:	e1a00006 	mov	r0, r6
         cf75c:	eb6b5b03 	bl	1ba6370 <$DoMarshal__FRC6RefVarT1PPvN23PUlN26lN39i>
         cf760:	e28dd024 	add	sp, sp, #36	; 0x24
         cf764:	e3300000 	teq	r0, #0	; 0x0
         cf768:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         cf76c:	e24dd008 	sub	sp, sp, #8	; 0x8
         cf770:	e58d4004 	str	r4, [sp, #4]
         cf774:	e59d000c 	ldr	r0, [sp, #12]
         cf778:	e0840000 	add	r0, r4, r0
         cf77c:	e1a03007 	mov	r3, r7
         cf780:	e3a02001 	mov	r2, #1	; 0x1
         cf784:	e3a01801 	mov	r1, #65536	; 0x10000
         cf788:	e58d0000 	str	r0, [sp]
         cf78c:	e3a00000 	mov	r0, #0	; 0x0
         cf790:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf794:	e3a03000 	mov	r3, #0	; 0x0
         cf798:	e3a02000 	mov	r2, #0	; 0x0
         cf79c:	e3a01000 	mov	r1, #0	; 0x0
         cf7a0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cf7a4:	e92d0008 	stmdb	sp!, {r3}
         cf7a8:	e28d3024 	add	r3, sp, #36	; 0x24
         cf7ac:	e28d2028 	add	r2, sp, #40	; 0x28
         cf7b0:	e1a01005 	mov	r1, r5
         cf7b4:	e1a00006 	mov	r0, r6
         cf7b8:	eb6b5aec 	bl	1ba6370 <$DoMarshal__FRC6RefVarT1PPvN23PUlN26lN39i>
         cf7bc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MakeRectShape__FRC6RefVarN41
 * Address: 000e1360
 */
void globals::MakeRectShape() {
    /*
         e1360:	e1a0c00d 	mov	ip, sp
         e1364:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         e1368:	e24cb004 	sub	fp, ip, #4	; 0x4
         e136c:	e1a06000 	mov	r6, r0
         e1370:	e1a05001 	mov	r5, r1
         e1374:	e1a04003 	mov	r4, r3
         e1378:	e59b8004 	ldr	r8, [fp, #4]
         e137c:	e24dd010 	sub	sp, sp, #16	; 0x10
         e1380:	e5920000 	ldr	r0, [r2]
         e1384:	e5900000 	ldr	r0, [r0]
         e1388:	e3100003 	tst	r0, #3	; 0x3
         e138c:	01a00140 	moveq	r0, r0, asr #2
         e1390:	0a000000 	beq	e1398 <MakeRectShape__FRC6RefVarN41+0x38>
         e1394:	eb6b8360 	bl	1bc211c <$_RINTError(long)>
         e1398:	e1a07800 	mov	r7, r0, lsl #16
         e139c:	e1a07847 	mov	r7, r7, asr #16
         e13a0:	e5950000 	ldr	r0, [r5]
         e13a4:	e5900000 	ldr	r0, [r0]
         e13a8:	e3100003 	tst	r0, #3	; 0x3
         e13ac:	01a00140 	moveq	r0, r0, asr #2
         e13b0:	0a000000 	beq	e13b8 <MakeRectShape__FRC6RefVarN41+0x58>
         e13b4:	eb6b8358 	bl	1bc211c <$_RINTError(long)>
         e13b8:	e1a05800 	mov	r5, r0, lsl #16
         e13bc:	e1a05845 	mov	r5, r5, asr #16
         e13c0:	e5980000 	ldr	r0, [r8]
         e13c4:	e5900000 	ldr	r0, [r0]
         e13c8:	e3100003 	tst	r0, #3	; 0x3
         e13cc:	01a00140 	moveq	r0, r0, asr #2
         e13d0:	0a000000 	beq	e13d8 <MakeRectShape__FRC6RefVarN41+0x78>
         e13d4:	eb6b8350 	bl	1bc211c <$_RINTError(long)>
         e13d8:	e1a08800 	mov	r8, r0, lsl #16
         e13dc:	e1a08848 	mov	r8, r8, asr #16
         e13e0:	e5940000 	ldr	r0, [r4]
         e13e4:	e5900000 	ldr	r0, [r0]
         e13e8:	e3100003 	tst	r0, #3	; 0x3
         e13ec:	01a00140 	moveq	r0, r0, asr #2
         e13f0:	0a000000 	beq	e13f8 <MakeRectShape__FRC6RefVarN41+0x98>
         e13f4:	eb6b8348 	bl	1bc211c <$_RINTError(long)>
         e13f8:	e1a00800 	mov	r0, r0, lsl #16
         e13fc:	e1a00840 	mov	r0, r0, asr #16
         e1400:	e5cd7009 	strb	r7, [sp, #9]
         e1404:	e1a01447 	mov	r1, r7, asr #8
         e1408:	e5cd1008 	strb	r1, [sp, #8]
         e140c:	e5cd500b 	strb	r5, [sp, #11]
         e1410:	e1a01445 	mov	r1, r5, asr #8
         e1414:	e5cd100a 	strb	r1, [sp, #10]
         e1418:	e5cd800d 	strb	r8, [sp, #13]
         e141c:	e1a01448 	mov	r1, r8, asr #8
         e1420:	e5cd100c 	strb	r1, [sp, #12]
         e1424:	e5cd000f 	strb	r0, [sp, #15]
         e1428:	e1a00440 	mov	r0, r0, asr #8
         e142c:	e5cd000e 	strb	r0, [sp, #14]
         e1430:	e1a00006 	mov	r0, r6
         e1434:	e3a01008 	mov	r1, #8	; 0x8
         e1438:	eb6b833f 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         e143c:	eb6b8342 	bl	1bc214c <$AllocateRefHandle(long)>
         e1440:	e58d0004 	str	r0, [sp, #4]
         e1444:	e28d1004 	add	r1, sp, #4	; 0x4
         e1448:	e1a0000d 	mov	r0, sp
         e144c:	eb6b7f21 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         e1450:	e1a0000d 	mov	r0, sp
         e1454:	eb6b832e 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         e1458:	e1a01000 	mov	r1, r0
         e145c:	e28d0008 	add	r0, sp, #8	; 0x8
         e1460:	e3a02008 	mov	r2, #8	; 0x8
         e1464:	eb6bf6ba 	bl	1bdef54 <$BlockMove>
         e1468:	e59d0004 	ldr	r0, [sp, #4]
         e146c:	e5904000 	ldr	r4, [r0]
         e1470:	e1a0000d 	mov	r0, sp
         e1474:	e3a01000 	mov	r1, #0	; 0x0
         e1478:	eb6b8320 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         e147c:	e59d0004 	ldr	r0, [sp, #4]
         e1480:	eb6b874d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         e1484:	e1a00004 	mov	r0, r4
         e1488:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MakeGrayTable(char *, long)
 * Address: 000e41c4
 */
MakeGrayTable(char *, long) {
    /*
         e41c4:	e1a0c00d 	mov	ip, sp
         e41c8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         e41cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         e41d0:	e1a05000 	mov	r5, r0
         e41d4:	e1a04001 	mov	r4, r1
         e41d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         e41dc:	e3a00002 	mov	r0, #2	; 0x2
         e41e0:	eb6b77d9 	bl	1bc214c <$AllocateRefHandle(long)>
         e41e4:	e58d0000 	str	r0, [sp]
         e41e8:	e59f0228 	ldr	r0, [pc, #228]	; e4418 <MakeGrayTable(char *, long)+0x254>
         e41ec:	eb66ca44 	bl	1a96b04 <$GetPreference(RefVar const &)>
         e41f0:	e59d1000 	ldr	r1, [sp]
         e41f4:	e2846001 	add	r6, r4, #1	; 0x1
         e41f8:	e3a07000 	mov	r7, #0	; 0x0
         e41fc:	e5810000 	str	r0, [r1]
         e4200:	e3300002 	teq	r0, #2	; 0x2
         e4204:	0a000090 	beq	e444c <MakeGrayTable(char *, long)+0x288>
         e4208:	e1a0000d 	mov	r0, sp
         e420c:	eb6c3dde 	bl	1bf398c <$IsArray(RefVar const &)>
         e4210:	e3300000 	teq	r0, #0	; 0x0
         e4214:	0a00008c 	beq	e444c <MakeGrayTable(char *, long)+0x288>
         e4218:	e59d0000 	ldr	r0, [sp]
         e421c:	e5900000 	ldr	r0, [r0]
         e4220:	eb6b8421 	bl	1bc52ac <$Length(long)>
         e4224:	e3300003 	teq	r0, #3	; 0x3
         e4228:	1a000087 	bne	e444c <MakeGrayTable(char *, long)+0x288>
         e422c:	e1a01007 	mov	r1, r7
         e4230:	e59d0000 	ldr	r0, [sp]
         e4234:	e5900000 	ldr	r0, [r0]
         e4238:	eb6b8005 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         e423c:	e3100003 	tst	r0, #3	; 0x3
         e4240:	01a00140 	moveq	r0, r0, asr #2
         e4244:	0a000000 	beq	e424c <MakeGrayTable(char *, long)+0x88>
         e4248:	eb6b77b3 	bl	1bc211c <$_RINTError(long)>
         e424c:	e1a08000 	mov	r8, r0
         e4250:	e3a01001 	mov	r1, #1	; 0x1
         e4254:	e59d0000 	ldr	r0, [sp]
         e4258:	e5900000 	ldr	r0, [r0]
         e425c:	eb6b7ffc 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         e4260:	e3100003 	tst	r0, #3	; 0x3
         e4264:	01a00140 	moveq	r0, r0, asr #2
         e4268:	0a000000 	beq	e4270 <MakeGrayTable(char *, long)+0xac>
         e426c:	eb6b77aa 	bl	1bc211c <$_RINTError(long)>
         e4270:	e1a07000 	mov	r7, r0
         e4274:	e3a01002 	mov	r1, #2	; 0x2
         e4278:	e59d0000 	ldr	r0, [sp]
         e427c:	e5900000 	ldr	r0, [r0]
         e4280:	eb6b7ff3 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         e4284:	e3100003 	tst	r0, #3	; 0x3
         e4288:	01a00140 	moveq	r0, r0, asr #2
         e428c:	0a000000 	beq	e4294 <MakeGrayTable(char *, long)+0xd0>
         e4290:	eb6b77a1 	bl	1bc211c <$_RINTError(long)>
         e4294:	e3580ffa 	cmp	r8, #1000	; 0x3e8
         e4298:	c3a08ffa 	movgt	r8, #1000	; 0x3e8
         e429c:	ca000001 	bgt	e42a8 <MakeGrayTable(char *, long)+0xe4>
         e42a0:	e3580000 	cmp	r8, #0	; 0x0
         e42a4:	b3a08000 	movlt	r8, #0	; 0x0
         e42a8:	e3570ffa 	cmp	r7, #1000	; 0x3e8
         e42ac:	c3a07ffa 	movgt	r7, #1000	; 0x3e8
         e42b0:	ca000001 	bgt	e42bc <MakeGrayTable(char *, long)+0xf8>
         e42b4:	e3570000 	cmp	r7, #0	; 0x0
         e42b8:	b3a07000 	movlt	r7, #0	; 0x0
         e42bc:	e3500ffa 	cmp	r0, #1000	; 0x3e8
         e42c0:	c3a00ffa 	movgt	r0, #1000	; 0x3e8
         e42c4:	ca000001 	bgt	e42d0 <MakeGrayTable(char *, long)+0x10c>
         e42c8:	e3500000 	cmp	r0, #0	; 0x0
         e42cc:	b3a00000 	movlt	r0, #0	; 0x0
         e42d0:	e1580007 	cmp	r8, r7
         e42d4:	a1a01007 	movge	r1, r7
         e42d8:	b1a01008 	movlt	r1, r8
         e42dc:	e1500001 	cmp	r0, r1
         e42e0:	b1a01000 	movlt	r1, r0
         e42e4:	e1580007 	cmp	r8, r7
         e42e8:	d1a02007 	movle	r2, r7
         e42ec:	c1a02008 	movgt	r2, r8
         e42f0:	e1500002 	cmp	r0, r2
         e42f4:	d1a09002 	movle	r9, r2
         e42f8:	c1a09000 	movgt	r9, r0
         e42fc:	e1370001 	teq	r7, r1
         e4300:	11370009 	teqne	r7, r9
         e4304:	1a000002 	bne	e4314 <MakeGrayTable(char *, long)+0x150>
         e4308:	e1500009 	cmp	r0, r9
         e430c:	01a07008 	moveq	r7, r8
         e4310:	11a07000 	movne	r7, r0
         e4314:	e1a0a007 	mov	sl, r7
         e4318:	e1a08806 	mov	r8, r6, lsl #16
         e431c:	e1a06001 	mov	r6, r1
         e4320:	e1a00801 	mov	r0, r1, lsl #16
         e4324:	e3a017fa 	mov	r1, #65536000	; 0x3e80000
         e4328:	eb6bf364 	bl	1be10c0 <$FixedDivide>
         e432c:	e1a01008 	mov	r1, r8
         e4330:	eb6bf363 	bl	1be10c4 <$FixedMultiply>
         e4334:	e2800902 	add	r0, r0, #32768	; 0x8000
         e4338:	e1a00840 	mov	r0, r0, asr #16
         e433c:	e1a07800 	mov	r7, r0, lsl #16
         e4340:	e1a07847 	mov	r7, r7, asr #16
         e4344:	e04a0006 	sub	r0, sl, r6
         e4348:	e1a00800 	mov	r0, r0, lsl #16
         e434c:	e3a017fa 	mov	r1, #65536000	; 0x3e80000
         e4350:	eb6bf35a 	bl	1be10c0 <$FixedDivide>
         e4354:	e1a01008 	mov	r1, r8
         e4358:	eb6bf359 	bl	1be10c4 <$FixedMultiply>
         e435c:	e2800902 	add	r0, r0, #32768	; 0x8000
         e4360:	e1a00840 	mov	r0, r0, asr #16
         e4364:	e1a06800 	mov	r6, r0, lsl #16
         e4368:	e1a06846 	mov	r6, r6, asr #16
         e436c:	e049000a 	sub	r0, r9, sl
         e4370:	e1a00800 	mov	r0, r0, lsl #16
         e4374:	e3a017fa 	mov	r1, #65536000	; 0x3e80000
         e4378:	eb6bf350 	bl	1be10c0 <$FixedDivide>
         e437c:	e1a0a009 	mov	sl, r9
         e4380:	e1a01008 	mov	r1, r8
         e4384:	eb6bf34e 	bl	1be10c4 <$FixedMultiply>
         e4388:	e2800902 	add	r0, r0, #32768	; 0x8000
         e438c:	e1a00840 	mov	r0, r0, asr #16
         e4390:	e1a09800 	mov	r9, r0, lsl #16
         e4394:	e1a09849 	mov	r9, r9, asr #16
         e4398:	e26a0ffa 	rsb	r0, sl, #1000	; 0x3e8
         e439c:	e1a00800 	mov	r0, r0, lsl #16
         e43a0:	e3a017fa 	mov	r1, #65536000	; 0x3e80000
         e43a4:	eb6bf345 	bl	1be10c0 <$FixedDivide>
         e43a8:	e1a01008 	mov	r1, r8
         e43ac:	eb6bf344 	bl	1be10c4 <$FixedMultiply>
         e43b0:	e2800902 	add	r0, r0, #32768	; 0x8000
         e43b4:	e1a00840 	mov	r0, r0, asr #16
         e43b8:	e1a08800 	mov	r8, r0, lsl #16
         e43bc:	e1b08848 	movs	r8, r8, asr #16
         e43c0:	1a000006 	bne	e43e0 <MakeGrayTable(char *, long)+0x21c>
         e43c4:	e3a08001 	mov	r8, #1	; 0x1
         e43c8:	e3390000 	teq	r9, #0	; 0x0
         e43cc:	12499001 	subne	r9, r9, #1	; 0x1
         e43d0:	1a000002 	bne	e43e0 <MakeGrayTable(char *, long)+0x21c>
         e43d4:	e3360000 	teq	r6, #0	; 0x0
         e43d8:	02477001 	subeq	r7, r7, #1	; 0x1
         e43dc:	12466001 	subne	r6, r6, #1	; 0x1
         e43e0:	e0870006 	add	r0, r7, r6
         e43e4:	e0800009 	add	r0, r0, r9
         e43e8:	e0800008 	add	r0, r0, r8
         e43ec:	e0400004 	sub	r0, r0, r4
         e43f0:	e2400001 	sub	r0, r0, #1	; 0x1
         e43f4:	e3500000 	cmp	r0, #0	; 0x0
         e43f8:	0a00002b 	beq	e44ac <MakeGrayTable(char *, long)+0x2e8>
         e43fc:	aa000006 	bge	e441c <MakeGrayTable(char *, long)+0x258>
         e4400:	e3370000 	teq	r7, #0	; 0x0
         e4404:	03a07001 	moveq	r7, #1	; 0x1
         e4408:	00800007 	addeq	r0, r0, r7
         e440c:	e3300000 	teq	r0, #0	; 0x0
         e4410:	12888001 	addne	r8, r8, #1	; 0x1
         e4414:	ea000024 	b	e44ac <MakeGrayTable(char *, long)+0x2e8>
         e4418:	00683038 	rsbeq	r3, r8, r8, lsr r0
         e441c:	e3360000 	teq	r6, #0	; 0x0
         e4420:	12466001 	subne	r6, r6, #1	; 0x1
         e4424:	12400001 	subne	r0, r0, #1	; 0x1
         e4428:	e3300000 	teq	r0, #0	; 0x0
         e442c:	0a00001e 	beq	e44ac <MakeGrayTable(char *, long)+0x2e8>
         e4430:	e3390000 	teq	r9, #0	; 0x0
         e4434:	12499001 	subne	r9, r9, #1	; 0x1
         e4438:	1a00001b 	bne	e44ac <MakeGrayTable(char *, long)+0x2e8>
         e443c:	e3360000 	teq	r6, #0	; 0x0
         e4440:	02477001 	subeq	r7, r7, #1	; 0x1
         e4444:	12466001 	subne	r6, r6, #1	; 0x1
         e4448:	ea000017 	b	e44ac <MakeGrayTable(char *, long)+0x2e8>
         e444c:	e3540009 	cmp	r4, #9	; 0x9
         e4450:	da000004 	ble	e4468 <MakeGrayTable(char *, long)+0x2a4>
         e4454:	e244100a 	sub	r1, r4, #10	; 0xa
         e4458:	e3a00006 	mov	r0, #6	; 0x6
         e445c:	eb6b3937 	bl	1bb2940 <$__rt_sdiv>
         e4460:	e2807002 	add	r7, r0, #2	; 0x2
         e4464:	ea000000 	b	e446c <MakeGrayTable(char *, long)+0x2a8>
         e4468:	e3a07001 	mov	r7, #1	; 0x1
         e446c:	e3540006 	cmp	r4, #6	; 0x6
         e4470:	da000004 	ble	e4488 <MakeGrayTable(char *, long)+0x2c4>
         e4474:	e1a01006 	mov	r1, r6
         e4478:	e3a00003 	mov	r0, #3	; 0x3
         e447c:	eb6b392f 	bl	1bb2940 <$__rt_sdiv>
         e4480:	e2809001 	add	r9, r0, #1	; 0x1
         e4484:	ea000000 	b	e448c <MakeGrayTable(char *, long)+0x2c8>
         e4488:	e1a090c4 	mov	r9, r4, asr #1
         e448c:	e2441001 	sub	r1, r4, #1	; 0x1
         e4490:	e3a00006 	mov	r0, #6	; 0x6
         e4494:	eb6b3929 	bl	1bb2940 <$__rt_sdiv>
         e4498:	e2808001 	add	r8, r0, #1	; 0x1
         e449c:	e0870009 	add	r0, r7, r9
         e44a0:	e0800008 	add	r0, r0, r8
         e44a4:	e0440000 	sub	r0, r4, r0
         e44a8:	e2806001 	add	r6, r0, #1	; 0x1
         e44ac:	e1a03007 	mov	r3, r7
         e44b0:	e1a00005 	mov	r0, r5
         e44b4:	e3a02003 	mov	r2, #3	; 0x3
         e44b8:	e3a01000 	mov	r1, #0	; 0x0
         e44bc:	eb69d1e0 	bl	1b58c44 <$FillQuartile__FPccT2l>
         e44c0:	e0850007 	add	r0, r5, r7
         e44c4:	e1a03006 	mov	r3, r6
         e44c8:	e3a02007 	mov	r2, #7	; 0x7
         e44cc:	e3a01004 	mov	r1, #4	; 0x4
         e44d0:	eb69d1db 	bl	1b58c44 <$FillQuartile__FPccT2l>
         e44d4:	e0874006 	add	r4, r7, r6
         e44d8:	e0850004 	add	r0, r5, r4
         e44dc:	e1a03009 	mov	r3, r9
         e44e0:	e3a0200b 	mov	r2, #11	; 0xb
         e44e4:	e3a01008 	mov	r1, #8	; 0x8
         e44e8:	eb69d1d5 	bl	1b58c44 <$FillQuartile__FPccT2l>
         e44ec:	e0840009 	add	r0, r4, r9
         e44f0:	e0850000 	add	r0, r5, r0
         e44f4:	e1a03008 	mov	r3, r8
         e44f8:	e3a0200f 	mov	r2, #15	; 0xf
         e44fc:	e3a0100c 	mov	r1, #12	; 0xc
         e4500:	eb69d1cf 	bl	1b58c44 <$FillQuartile__FPccT2l>
         e4504:	e59d0000 	ldr	r0, [sp]
         e4508:	eb6b7b2b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         e450c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MaskInterrupt
 * Address: 000e5930
 */
void globals::MaskInterrupt() {
    /*
         e5930:	e5901008 	ldr	r1, [r0, #8]
         e5934:	e2013040 	and	r3, r1, #64	; 0x40
         e5938:	e3a02000 	mov	r2, #0	; 0x0
         e593c:	e3811c01 	orr	r1, r1, #256	; 0x100
         e5940:	e5a01008 	str	r1, [r0, #8]!
         e5944:	e1a00002 	mov	r0, r2
         e5948:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MungeLargeBinary__FRC6RefVarlT2
 * Address: 00100320
 */
void globals::MungeLargeBinary() {
    /*
        100320:	e1a0c00d 	mov	ip, sp
        100324:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        100328:	e24cb004 	sub	fp, ip, #4	; 0x4
        10032c:	e1a05001 	mov	r5, r1
        100330:	e1a04002 	mov	r4, r2
        100334:	e5900000 	ldr	r0, [r0]
        100338:	e5900000 	ldr	r0, [r0]
        10033c:	eb6b13ec 	bl	1bc52f4 <$ObjectPtr(long)>
        100340:	e2800010 	add	r0, r0, #16	; 0x10
        100344:	e1a06000 	mov	r6, r0
        100348:	eb6513eb 	bl	1a452fc <LBData::$GetStore( const(void))>
        10034c:	e3300000 	teq	r0, #0	; 0x0
        100350:	1a000004 	bne	100368 <MungeLargeBinary__FRC6RefVarlT2+0x48>
        100354:	e59f1038 	ldr	r1, [pc, #38]	; 100394 <MungeLargeBinary__FRC6RefVarlT2+0x74>
        100358:	e59f0038 	ldr	r0, [pc, #38]	; 100398 <MungeLargeBinary__FRC6RefVarlT2+0x78>
        10035c:	e5900000 	ldr	r0, [r0]
        100360:	e3a02000 	mov	r2, #0	; 0x0
        100364:	eb6b8b8c 	bl	1be319c <$Throw>
        100368:	e5960000 	ldr	r0, [r6]
        10036c:	e0804004 	add	r4, r0, r4
        100370:	e5961010 	ldr	r1, [r6, #16]
        100374:	e2860010 	add	r0, r6, #16	; 0x10
        100378:	e1a03005 	mov	r3, r5
        10037c:	e1a02004 	mov	r2, r4
        100380:	eb68519f 	bl	1b14a04 <$ResizeLargeObject__FPUlUllT3>
        100384:	e3300000 	teq	r0, #0	; 0x0
        100388:	1b64f2a6 	blne	1a3ce28 <$_OSErr(long)>
        10038c:	e5864000 	str	r4, [r6]
        100390:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        100394:	ffff446f 	swinv	0x00ff446f
        100398:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)
 * Address: 00103bc0
 */
MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char) {
    /*
        103bc0:	e1a0c00d 	mov	ip, sp
        103bc4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        103bc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        103bcc:	e1a06000 	mov	r6, r0
        103bd0:	e1a05001 	mov	r5, r1
        103bd4:	e1a04002 	mov	r4, r2
        103bd8:	e20380ff 	and	r8, r3, #255	; 0xff
        103bdc:	e3a070e5 	mov	r7, #229	; 0xe5
        103be0:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        103be4:	e1a01002 	mov	r1, r2
        103be8:	e1a00005 	mov	r0, r5
        103bec:	eb6b4ff2 	bl	1bd7bbc <$PackageAllocationOk(TStore *, unsigned long)>
        103bf0:	e3300000 	teq	r0, #0	; 0x0
        103bf4:	0a000015 	beq	103c50 <MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)+0x90>
        103bf8:	e24dd024 	sub	sp, sp, #36	; 0x24
        103bfc:	e28d0008 	add	r0, sp, #8	; 0x8
        103c00:	eb684bc9 	bl	1b16b2c <RDMParams::$__ct(void)>
        103c04:	eb684bcd 	bl	1b16b40 <$GetROMDomainUserMonitor(void)>
        103c08:	e3a01000 	mov	r1, #0	; 0x0
        103c0c:	e5cd1004 	strb	r1, [sp, #4]
        103c10:	e5900000 	ldr	r0, [r0]
        103c14:	e58d0000 	str	r0, [sp]
        103c18:	e58d400c 	str	r4, [sp, #12]
        103c1c:	e58d5008 	str	r5, [sp, #8]
        103c20:	e5cd8020 	strb	r8, [sp, #32]
        103c24:	e28d2008 	add	r2, sp, #8	; 0x8
        103c28:	e3a01001 	mov	r1, #1	; 0x1
        103c2c:	e59d0000 	ldr	r0, [sp]
        103c30:	eb0aa9ba 	bl	3ae320 <MonitorDispatchSWI>
        103c34:	e1b07000 	movs	r7, r0
        103c38:	059d0010 	ldreq	r0, [sp, #16]
        103c3c:	05860000 	streq	r0, [r6]
        103c40:	e1a0000d 	mov	r0, sp
        103c44:	e3a01000 	mov	r1, #0	; 0x0
        103c48:	eb6b2ab8 	bl	1bce730 <TUMonitor::$__dt(void)>
        103c4c:	e28dd024 	add	sp, sp, #36	; 0x24
        103c50:	e1a00007 	mov	r0, r7
        103c54:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MoreLetters(LetterCursor *)
 * Address: 00107330
 */
MoreLetters(LetterCursor *) {
    /*
        107330:	e590101c 	ldr	r1, [r0, #28]
        107334:	e1b01821 	movs	r1, r1, lsr #16
        107338:	0a000004 	beq	107350 <MoreLetters(LetterCursor *)+0x20>
        10733c:	e5901010 	ldr	r1, [r0, #16]
        107340:	e5900008 	ldr	r0, [r0, #8]
        107344:	e1510000 	cmp	r1, r0
        107348:	b3a00001 	movlt	r0, #1	; 0x1
        10734c:	ba000000 	blt	107354 <MoreLetters(LetterCursor *)+0x24>
        107350:	e3a00000 	mov	r0, #0	; 0x0
        107354:	e20000ff 	and	r0, r0, #255	; 0xff
        107358:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MoreGroups(LetterCursor *)
 * Address: 00107400
 */
MoreGroups(LetterCursor *) {
    /*
        107400:	e5901030 	ldr	r1, [r0, #48]
        107404:	e5900028 	ldr	r0, [r0, #40]
        107408:	e5d00001 	ldrb	r0, [r0, #1]
        10740c:	e1500841 	cmp	r0, r1, asr #16
        107410:	d3a00000 	movle	r0, #0	; 0x0
        107414:	c3a00001 	movgt	r0, #1	; 0x1
        107418:	e20000ff 	and	r0, r0, #255	; 0xff
        10741c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MakeDragRef(TListView *, long)
 * Address: 00111bc4
 */
MakeDragRef(TListView *, long) {
    /*
        111bc4:	e1a0c00d 	mov	ip, sp
        111bc8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        111bcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        111bd0:	e1a05000 	mov	r5, r0
        111bd4:	e1a04001 	mov	r4, r1
        111bd8:	e24dd010 	sub	sp, sp, #16	; 0x10
        111bdc:	e3a00002 	mov	r0, #2	; 0x2
        111be0:	eb6ac159 	bl	1bc214c <$AllocateRefHandle(long)>
        111be4:	e58d000c 	str	r0, [sp, #12]
        111be8:	eb6ac154 	bl	1bc2140 <$AllocateFrame(void)>
        111bec:	eb6ac156 	bl	1bc214c <$AllocateRefHandle(long)>
        111bf0:	e58d0008 	str	r0, [sp, #8]
        111bf4:	e1a00104 	mov	r0, r4, lsl #2
        111bf8:	eb6ac153 	bl	1bc214c <$AllocateRefHandle(long)>
        111bfc:	e58d0000 	str	r0, [sp]
        111c00:	e1a0200d 	mov	r2, sp
        111c04:	e59f1198 	ldr	r1, [pc, #198]	; 111da4 <MakeDragRef(TListView *, long)+0x1e0>
        111c08:	e1a0a001 	mov	sl, r1
        111c0c:	e28d0008 	add	r0, sp, #8	; 0x8
        111c10:	eb65e24b 	bl	1a8a544 <$ArrayAppend__FRC6RefVarN21>
        111c14:	e59d0000 	ldr	r0, [sp]
        111c18:	eb6ac567 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        111c1c:	e3a06000 	mov	r6, #0	; 0x0
        111c20:	e1a01004 	mov	r1, r4
        111c24:	e1a00005 	mov	r0, r5
        111c28:	eb66ea81 	bl	1acc634 <TListView::$Topic(long)>
        111c2c:	e59d100c 	ldr	r1, [sp, #12]
        111c30:	e5810000 	str	r0, [r1]
        111c34:	e28d000c 	add	r0, sp, #12	; 0xc
        111c38:	eb66ea79 	bl	1acc624 <$TopicLevel(RefVar const &)>
        111c3c:	e1a08000 	mov	r8, r0
        111c40:	e1a00100 	mov	r0, r0, lsl #2
        111c44:	eb6ac140 	bl	1bc214c <$AllocateRefHandle(long)>
        111c48:	e58d0004 	str	r0, [sp, #4]
        111c4c:	e28d2004 	add	r2, sp, #4	; 0x4
        111c50:	e59f1150 	ldr	r1, [pc, #150]	; 111da8 <MakeDragRef(TListView *, long)+0x1e4>
        111c54:	e28d0008 	add	r0, sp, #8	; 0x8
        111c58:	eb6ad1c2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        111c5c:	e59d0004 	ldr	r0, [sp, #4]
        111c60:	eb6ac555 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        111c64:	e28d000c 	add	r0, sp, #12	; 0xc
        111c68:	eb6ac13f 	bl	1bc216c <$Clone(RefVar const &)>
        111c6c:	e59d100c 	ldr	r1, [sp, #12]
        111c70:	e5810000 	str	r0, [r1]
        111c74:	e1a01006 	mov	r1, r6
        111c78:	e28d000c 	add	r0, sp, #12	; 0xc
        111c7c:	eb66e64e 	bl	1acb5bc <$FixTopic(RefVar const &, short)>
        111c80:	e28d200c 	add	r2, sp, #12	; 0xc
        111c84:	e59f1120 	ldr	r1, [pc, #120]	; 111dac <MakeDragRef(TListView *, long)+0x1e8>
        111c88:	e1a09001 	mov	r9, r1
        111c8c:	e28d0008 	add	r0, sp, #8	; 0x8
        111c90:	eb65e22b 	bl	1a8a544 <$ArrayAppend__FRC6RefVarN21>
        111c94:	e28d000c 	add	r0, sp, #12	; 0xc
        111c98:	eb66ea5e 	bl	1acc618 <$TopicHeight(RefVar const &)>
        111c9c:	e1a06000 	mov	r6, r0
        111ca0:	e1a00005 	mov	r0, r5
        111ca4:	eb66e64f 	bl	1acb5e8 <TListView::$NTopics(void)>
        111ca8:	e1a07000 	mov	r7, r0
        111cac:	e24dd004 	sub	sp, sp, #4	; 0x4
        111cb0:	e2844001 	add	r4, r4, #1	; 0x1
        111cb4:	e1540000 	cmp	r4, r0
        111cb8:	aa000029 	bge	111d64 <MakeDragRef(TListView *, long)+0x1a0>
        111cbc:	e1a01004 	mov	r1, r4
        111cc0:	e1a00005 	mov	r0, r5
        111cc4:	eb66ea5a 	bl	1acc634 <TListView::$Topic(long)>
        111cc8:	e59d1010 	ldr	r1, [sp, #16]
        111ccc:	e5810000 	str	r0, [r1]
        111cd0:	e28d0010 	add	r0, sp, #16	; 0x10
        111cd4:	eb66ea52 	bl	1acc624 <$TopicLevel(RefVar const &)>
        111cd8:	e1500008 	cmp	r0, r8
        111cdc:	da000020 	ble	111d64 <MakeDragRef(TListView *, long)+0x1a0>
        111ce0:	e24dd004 	sub	sp, sp, #4	; 0x4
        111ce4:	e1a00104 	mov	r0, r4, lsl #2
        111ce8:	eb6ac117 	bl	1bc214c <$AllocateRefHandle(long)>
        111cec:	e58d0000 	str	r0, [sp]
        111cf0:	e1a0200d 	mov	r2, sp
        111cf4:	e1a0100a 	mov	r1, sl
        111cf8:	e28d0010 	add	r0, sp, #16	; 0x10
        111cfc:	eb65e210 	bl	1a8a544 <$ArrayAppend__FRC6RefVarN21>
        111d00:	e59d0000 	ldr	r0, [sp]
        111d04:	eb6ac52c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        111d08:	e28d0014 	add	r0, sp, #20	; 0x14
        111d0c:	eb6ac116 	bl	1bc216c <$Clone(RefVar const &)>
        111d10:	e59d1014 	ldr	r1, [sp, #20]
        111d14:	e5810000 	str	r0, [r1]
        111d18:	e1a01806 	mov	r1, r6, lsl #16
        111d1c:	e1a01841 	mov	r1, r1, asr #16
        111d20:	e28d0014 	add	r0, sp, #20	; 0x14
        111d24:	eb66e624 	bl	1acb5bc <$FixTopic(RefVar const &, short)>
        111d28:	e28d2014 	add	r2, sp, #20	; 0x14
        111d2c:	e1a01009 	mov	r1, r9
        111d30:	e28d0010 	add	r0, sp, #16	; 0x10
        111d34:	eb65e202 	bl	1a8a544 <$ArrayAppend__FRC6RefVarN21>
        111d38:	e28d0014 	add	r0, sp, #20	; 0x14
        111d3c:	eb66ea3b 	bl	1acc630 <$TopicVisible(RefVar const &)>
        111d40:	e3300000 	teq	r0, #0	; 0x0
        111d44:	0a000002 	beq	111d54 <MakeDragRef(TListView *, long)+0x190>
        111d48:	e28d0014 	add	r0, sp, #20	; 0x14
        111d4c:	eb66ea31 	bl	1acc618 <$TopicHeight(RefVar const &)>
        111d50:	e0806006 	add	r6, r0, r6
        111d54:	e28dd004 	add	sp, sp, #4	; 0x4
        111d58:	e2844001 	add	r4, r4, #1	; 0x1
        111d5c:	e1540007 	cmp	r4, r7
        111d60:	baffffd5 	blt	111cbc <MakeDragRef(TListView *, long)+0xf8>
        111d64:	e1a00106 	mov	r0, r6, lsl #2
        111d68:	eb6ac0f7 	bl	1bc214c <$AllocateRefHandle(long)>
        111d6c:	e58d0000 	str	r0, [sp]
        111d70:	e1a0200d 	mov	r2, sp
        111d74:	e59f1034 	ldr	r1, [pc, #34]	; 111db0 <MakeDragRef(TListView *, long)+0x1ec>
        111d78:	e28d000c 	add	r0, sp, #12	; 0xc
        111d7c:	eb6ad179 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        111d80:	e59d0000 	ldr	r0, [sp]
        111d84:	eb6ac50c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        111d88:	e59d000c 	ldr	r0, [sp, #12]
        111d8c:	e5904000 	ldr	r4, [r0]
        111d90:	eb6ac509 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        111d94:	e59d0010 	ldr	r0, [sp, #16]
        111d98:	eb6ac507 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        111d9c:	e1a00004 	mov	r0, r4
        111da0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        111da4:	006831c0 	rsbeq	r3, r8, r0, asr #3
        111da8:	00683540 	rsbeq	r3, r8, r0, asr #10
        111dac:	00684bf0 	streqd	r4, [r8], -#176
        111db0:	006830c8 	rsbeq	r3, r8, r8, asr #1
    */
}

/**
 * Symbol: MarkerBounds__FRC6RefVarT1R5TRect
 * Address: 00111db4
 */
void globals::MarkerBounds() {
    /*
        111db4:	e1a0c00d 	mov	ip, sp
        111db8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        111dbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        111dc0:	e1a05000 	mov	r5, r0
        111dc4:	e1a00001 	mov	r0, r1
        111dc8:	e1a04002 	mov	r4, r2
        111dcc:	e59f10e4 	ldr	r1, [pc, #e4]	; 111eb8 <MarkerBounds__FRC6RefVarT1R5TRect+0x104>
        111dd0:	e5911000 	ldr	r1, [r1]
        111dd4:	e5911000 	ldr	r1, [r1]
        111dd8:	e5900000 	ldr	r0, [r0]
        111ddc:	e5900000 	ldr	r0, [r0]
        111de0:	eb6ac91e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        111de4:	eb6ac0d8 	bl	1bc214c <$AllocateRefHandle(long)>
        111de8:	e1a06000 	mov	r6, r0
        111dec:	e59f00c8 	ldr	r0, [pc, #c8]	; 111ebc <MarkerBounds__FRC6RefVarT1R5TRect+0x108>
        111df0:	e5900000 	ldr	r0, [r0]
        111df4:	e5901000 	ldr	r1, [r0]
        111df8:	e5960000 	ldr	r0, [r6]
        111dfc:	eb6ac917 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        111e00:	e3100003 	tst	r0, #3	; 0x3
        111e04:	01a00140 	moveq	r0, r0, asr #2
        111e08:	0a000000 	beq	111e10 <MarkerBounds__FRC6RefVarT1R5TRect+0x5c>
        111e0c:	eb6ac0c2 	bl	1bc211c <$_RINTError(long)>
        111e10:	e5c40001 	strb	r0, [r4, #1]
        111e14:	e1a00440 	mov	r0, r0, asr #8
        111e18:	e5c40000 	strb	r0, [r4]
        111e1c:	e5940000 	ldr	r0, [r4]
        111e20:	e1a00820 	mov	r0, r0, lsr #16
        111e24:	e2800010 	add	r0, r0, #16	; 0x10
        111e28:	e5c40005 	strb	r0, [r4, #5]
        111e2c:	e1a00440 	mov	r0, r0, asr #8
        111e30:	e5c40004 	strb	r0, [r4, #4]
        111e34:	e59f0084 	ldr	r0, [pc, #84]	; 111ec0 <MarkerBounds__FRC6RefVarT1R5TRect+0x10c>
        111e38:	e5900000 	ldr	r0, [r0]
        111e3c:	e5901000 	ldr	r1, [r0]
        111e40:	e5960000 	ldr	r0, [r6]
        111e44:	eb6ac905 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        111e48:	e3100003 	tst	r0, #3	; 0x3
        111e4c:	01a00140 	moveq	r0, r0, asr #2
        111e50:	0a000000 	beq	111e58 <MarkerBounds__FRC6RefVarT1R5TRect+0xa4>
        111e54:	eb6ac0b0 	bl	1bc211c <$_RINTError(long)>
        111e58:	e1a07800 	mov	r7, r0, lsl #16
        111e5c:	e1a07847 	mov	r7, r7, asr #16
        111e60:	e59f105c 	ldr	r1, [pc, #5c]	; 111ec4 <MarkerBounds__FRC6RefVarT1R5TRect+0x110>
        111e64:	e1a00005 	mov	r0, r5
        111e68:	e3a03000 	mov	r3, #0	; 0x0
        111e6c:	e3a02000 	mov	r2, #0	; 0x0
        111e70:	eb6ac8ff 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        111e74:	e3100003 	tst	r0, #3	; 0x3
        111e78:	01a00140 	moveq	r0, r0, asr #2
        111e7c:	0a000000 	beq	111e84 <MarkerBounds__FRC6RefVarT1R5TRect+0xd0>
        111e80:	eb6ac0a5 	bl	1bc211c <$_RINTError(long)>
        111e84:	e0470000 	sub	r0, r7, r0
        111e88:	e5c40007 	strb	r0, [r4, #7]
        111e8c:	e1a00440 	mov	r0, r0, asr #8
        111e90:	e5c40006 	strb	r0, [r4, #6]
        111e94:	e5940006 	ldr	r0, [r4, #6]
        111e98:	e1a00820 	mov	r0, r0, lsr #16
        111e9c:	e2400014 	sub	r0, r0, #20	; 0x14
        111ea0:	e5c40003 	strb	r0, [r4, #3]
        111ea4:	e1a00440 	mov	r0, r0, asr #8
        111ea8:	e5c40002 	strb	r0, [r4, #2]
        111eac:	e1a00006 	mov	r0, r6
        111eb0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        111eb4:	ea6ac4c0 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        111eb8:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        111ebc:	00684bc8 	rsbeq	r4, r8, r8, asr #23
        111ec0:	006834e0 	rsbeq	r3, r8, r0, ror #9
        111ec4:	00684378 	rsbeq	r4, r8, r8, ror r3
    */
}

/**
 * Symbol: MNPC5CompressHook(TMNPClass5Vars *, unsigned char)
 * Address: 00116f0c
 */
MNPC5CompressHook(TMNPClass5Vars *, unsigned char) {
    /*
        116f0c:	e1a0c00d 	mov	ip, sp
        116f10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        116f14:	e24cb004 	sub	fp, ip, #4	; 0x4
        116f18:	e1a04000 	mov	r4, r0
        116f1c:	e5c01510 	strb	r1, [r0, #1296]
        116f20:	eb640748 	bl	1a18c48 <$run_length_encoding(TMNPClass5Vars *)>
        116f24:	e3300000 	teq	r0, #0	; 0x0
        116f28:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        116f2c:	e5d40504 	ldrb	r0, [r4, #1284]
        116f30:	e5c40532 	strb	r0, [r4, #1330]
        116f34:	e1a00004 	mov	r0, r4
        116f38:	eb63cd8d 	bl	1a0a574 <$ad_frq_xmt(TMNPClass5Vars *)>
        116f3c:	e5d40503 	ldrb	r0, [r4, #1283]
        116f40:	e3300000 	teq	r0, #0	; 0x0
        116f44:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        116f48:	e3a00000 	mov	r0, #0	; 0x0
        116f4c:	e5c40503 	strb	r0, [r4, #1283]
        116f50:	e5d40500 	ldrb	r0, [r4, #1280]
        116f54:	e5c40532 	strb	r0, [r4, #1330]
        116f58:	e1a00004 	mov	r0, r4
        116f5c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        116f60:	ea63cd83 	b	1a0a574 <$ad_frq_xmt(TMNPClass5Vars *)>
    */
}

/**
 * Symbol: MNPC5FlushHook(TMNPClass5Vars *, unsigned char)
 * Address: 00116f64
 */
MNPC5FlushHook(TMNPClass5Vars *, unsigned char) {
    /*
        116f64:	e1a0c00d 	mov	ip, sp
        116f68:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        116f6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        116f70:	e1a04000 	mov	r4, r0
        116f74:	eb640734 	bl	1a18c4c <$run_length_flush(TMNPClass5Vars *)>
        116f78:	e3300000 	teq	r0, #0	; 0x0
        116f7c:	0a000003 	beq	116f90 <MNPC5FlushHook(TMNPClass5Vars *, unsigned char)+0x2c>
        116f80:	e5d40504 	ldrb	r0, [r4, #1284]
        116f84:	e5c40532 	strb	r0, [r4, #1330]
        116f88:	e1a00004 	mov	r0, r4
        116f8c:	eb63cd78 	bl	1a0a574 <$ad_frq_xmt(TMNPClass5Vars *)>
        116f90:	e1a00004 	mov	r0, r4
        116f94:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        116f98:	ea63cd76 	b	1a0a578 <$ad_token_flush(TMNPClass5Vars *)>
    */
}

/**
 * Symbol: MNPC5DecompressHook(TMNPClass5Vars *, unsigned char)
 * Address: 00116f9c
 */
MNPC5DecompressHook(TMNPClass5Vars *, unsigned char) {
    /*
        116f9c:	e1a0c00d 	mov	ip, sp
        116fa0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        116fa4:	e24cb004 	sub	fp, ip, #4	; 0x4
        116fa8:	e1a04000 	mov	r4, r0
        116fac:	e3a05000 	mov	r5, #0	; 0x0
        116fb0:	e5c0150a 	strb	r1, [r0, #1290]
        116fb4:	e1a00004 	mov	r0, r4
        116fb8:	eb63cd6a 	bl	1a0a568 <$ad_frq_rcv(TMNPClass5Vars *)>
        116fbc:	e3300000 	teq	r0, #0	; 0x0
        116fc0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        116fc4:	e1a00004 	mov	r0, r4
        116fc8:	eb64071d 	bl	1a18c44 <$run_length_decode(TMNPClass5Vars *)>
        116fcc:	e5d40506 	ldrb	r0, [r4, #1286]
        116fd0:	e3300000 	teq	r0, #0	; 0x0
        116fd4:	0a000008 	beq	116ffc <MNPC5DecompressHook(TMNPClass5Vars *, unsigned char)+0x60>
        116fd8:	e5d4151b 	ldrb	r1, [r4, #1307]
        116fdc:	e594053c 	ldr	r0, [r4, #1340]
        116fe0:	e1a0e00f 	mov	lr, pc
        116fe4:	e594f538 	ldr	pc, [r4, #1336]
        116fe8:	e5d40506 	ldrb	r0, [r4, #1286]
        116fec:	e2400001 	sub	r0, r0, #1	; 0x1
        116ff0:	e5c40506 	strb	r0, [r4, #1286]
        116ff4:	e31000ff 	tst	r0, #255	; 0xff
        116ff8:	1afffff6 	bne	116fd8 <MNPC5DecompressHook(TMNPClass5Vars *, unsigned char)+0x3c>
        116ffc:	e5d4051a 	ldrb	r0, [r4, #1306]
        117000:	e3300080 	teq	r0, #128	; 0x80
        117004:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        117008:	e3350000 	teq	r5, #0	; 0x0
        11700c:	0affffe8 	beq	116fb4 <MNPC5DecompressHook(TMNPClass5Vars *, unsigned char)+0x18>
        117010:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: MNPC5Open(TMNPClass5Vars **)
 * Address: 00117014
 */
MNPC5Open(TMNPClass5Vars **) {
    /*
        117014:	e1a0c00d 	mov	ip, sp
        117018:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11701c:	e24cb004 	sub	fp, ip, #4	; 0x4
        117020:	e1a04000 	mov	r4, r0
        117024:	e3a050e9 	mov	r5, #233	; 0xe9
        117028:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        11702c:	e3a00d15 	mov	r0, #1344	; 0x540
        117030:	eb6b2c43 	bl	1be2144 <$NewPtrClear>
        117034:	e5840000 	str	r0, [r4]
        117038:	e3300000 	teq	r0, #0	; 0x0
        11703c:	13a05000 	movne	r5, #0	; 0x0
        117040:	e1a00005 	mov	r0, r5
        117044:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: MNPC5Close(TMNPClass5Vars *)
 * Address: 00117048
 */
MNPC5Close(TMNPClass5Vars *) {
    /*
        117048:	e3300000 	teq	r0, #0	; 0x0
        11704c:	1a6b2818 	bne	1be10b4 <$DisposPtr>
        117050:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MNPC5Init__FP14TMNPClass5VarsPFUlUc_vT2l
 * Address: 00117054
 */
void globals::MNPC5Init() {
    /*
        117054:	e1a0c00d 	mov	ip, sp
        117058:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11705c:	e24cb004 	sub	fp, ip, #4	; 0x4
        117060:	e1a04000 	mov	r4, r0
        117064:	e2800e53 	add	r0, r0, #1328	; 0x530
        117068:	e980000e 	stmib	r0, {r1, r2, r3}
        11706c:	e2400e53 	sub	r0, r0, #1328	; 0x530
        117070:	eb63cd3e 	bl	1a0a570 <$ad_frq_tx_init(TMNPClass5Vars *)>
        117074:	e1a00004 	mov	r0, r4
        117078:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        11707c:	ea63cd3a 	b	1a0a56c <$ad_frq_rx_init(TMNPClass5Vars *)>
    */
}

/**
 * Symbol: MemoryError(void)
 * Address: 0011b864
 */
MemoryError(void) {
    /*
        11b864:	ea6b1a2d 	b	1be2120 <$MemError>
    */
}

/**
 * Symbol: MoveBlock__FPcT1l
 * Address: 0011b868
 */
void globals::MoveBlock() {
    /*
        11b868:	ea6b0db9 	b	1bdef54 <$BlockMove>
    */
}

/**
 * Symbol: MakeHandle(long)
 * Address: 0011b870
 */
MakeHandle(long) {
    /*
        11b870:	e1a0c00d 	mov	ip, sp
        11b874:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11b878:	e24cb004 	sub	fp, ip, #4	; 0x4
        11b87c:	ebfc7297 	bl	382e0 <xNewHandle(long)>
        11b880:	e1a04000 	mov	r4, r0
        11b884:	e59f1008 	ldr	r1, [pc, #8]	; 11b894 <MakeHandle(long)+0x24>
        11b888:	eb69477f 	bl	1b6d68c <$NameHandle(char **, unsigned long)>
        11b88c:	e1a00004 	mov	r0, r4
        11b890:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11b894:	72636f67 	rsbvc	r6, r3, #412	; 0x19c
    */
}

/**
 * Symbol: MSeekMask__FlT1PUlT1P8RgnStateN25
 * Address: 0011b93c
 */
void globals::MSeekMask() {
    /*
        11b93c:	e1a0c00d 	mov	ip, sp
        11b940:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        11b944:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11b948:	e24cb014 	sub	fp, ip, #20	; 0x14
        11b94c:	e1a04000 	mov	r4, r0
        11b950:	e1a05002 	mov	r5, r2
        11b954:	e28b7014 	add	r7, fp, #20	; 0x14
        11b958:	e8970081 	ldmia	r7, {r0, r7}
        11b95c:	e59b601c 	ldr	r6, [fp, #28]
        11b960:	e24dd004 	sub	sp, sp, #4	; 0x4
        11b964:	e590a008 	ldr	sl, [r0, #8]
        11b968:	e5979008 	ldr	r9, [r7, #8]
        11b96c:	e2411002 	sub	r1, r1, #2	; 0x2
        11b970:	e5968008 	ldr	r8, [r6, #8]
        11b974:	e351000c 	cmp	r1, #12	; 0xc
        11b978:	908ff101 	addls	pc, pc, r1, lsl #2
        11b97c:	ea00006c 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11b980:	ea00001d 	b	11b9fc <MSeekMask__FlT1PUlT1P8RgnStateN25+0xc0>
        11b984:	ea00006a 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11b988:	ea00001e 	b	11ba08 <MSeekMask__FlT1PUlT1P8RgnStateN25+0xcc>
        11b98c:	ea000068 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11b990:	ea000025 	b	11ba2c <MSeekMask__FlT1PUlT1P8RgnStateN25+0xf0>
        11b994:	ea000066 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11b998:	ea00001e 	b	11ba18 <MSeekMask__FlT1PUlT1P8RgnStateN25+0xdc>
        11b99c:	ea000064 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11b9a0:	ea000034 	b	11ba78 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x13c>
        11b9a4:	ea000062 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11b9a8:	ea000045 	b	11bac4 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x188>
        11b9ac:	ea000060 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11b9b0:	e1a01004 	mov	r1, r4
        11b9b4:	eb68e006 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        11b9b8:	e1a01004 	mov	r1, r4
        11b9bc:	e58d0000 	str	r0, [sp]
        11b9c0:	e1a00007 	mov	r0, r7
        11b9c4:	eb68e002 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        11b9c8:	e1a07000 	mov	r7, r0
        11b9cc:	e1a01004 	mov	r1, r4
        11b9d0:	e1a00006 	mov	r0, r6
        11b9d4:	eb68dffe 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        11b9d8:	e59d1000 	ldr	r1, [sp]
        11b9dc:	e3310000 	teq	r1, #0	; 0x0
        11b9e0:	03370000 	teqeq	r7, #0	; 0x0
        11b9e4:	03300000 	teqeq	r0, #0	; 0x0
        11b9e8:	0a000051 	beq	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11b9ec:	e59b0010 	ldr	r0, [fp, #16]
        11b9f0:	e3500000 	cmp	r0, #0	; 0x0
        11b9f4:	ba00004e 	blt	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11b9f8:	ea000045 	b	11bb14 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1d8>
        11b9fc:	e1a01004 	mov	r1, r4
        11ba00:	e5805008 	str	r5, [r0, #8]
        11ba04:	ea000006 	b	11ba24 <MSeekMask__FlT1PUlT1P8RgnStateN25+0xe8>
        11ba08:	e1a01004 	mov	r1, r4
        11ba0c:	e5875008 	str	r5, [r7, #8]
        11ba10:	e1a00007 	mov	r0, r7
        11ba14:	ea000002 	b	11ba24 <MSeekMask__FlT1PUlT1P8RgnStateN25+0xe8>
        11ba18:	e1a01004 	mov	r1, r4
        11ba1c:	e5865008 	str	r5, [r6, #8]
        11ba20:	e1a00006 	mov	r0, r6
        11ba24:	eb68dfea 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        11ba28:	ea000041 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11ba2c:	e1a01004 	mov	r1, r4
        11ba30:	eb68dfe7 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        11ba34:	e1a06000 	mov	r6, r0
        11ba38:	e1a01004 	mov	r1, r4
        11ba3c:	e1a00007 	mov	r0, r7
        11ba40:	eb68dfe3 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        11ba44:	e3360000 	teq	r6, #0	; 0x0
        11ba48:	03300000 	teqeq	r0, #0	; 0x0
        11ba4c:	0a000038 	beq	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11ba50:	e59b0010 	ldr	r0, [fp, #16]
        11ba54:	e3500000 	cmp	r0, #0	; 0x0
        11ba58:	ba000035 	blt	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11ba5c:	e49a2004 	ldr	r2, [sl], #4
        11ba60:	e4991004 	ldr	r1, [r9], #4
        11ba64:	e0021001 	and	r1, r2, r1
        11ba68:	e2500001 	subs	r0, r0, #1	; 0x1
        11ba6c:	e4851004 	str	r1, [r5], #4
        11ba70:	5afffff9 	bpl	11ba5c <MSeekMask__FlT1PUlT1P8RgnStateN25+0x120>
        11ba74:	ea00002e 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11ba78:	e1a01004 	mov	r1, r4
        11ba7c:	eb68dfd4 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        11ba80:	e1a07000 	mov	r7, r0
        11ba84:	e1a01004 	mov	r1, r4
        11ba88:	e1a00006 	mov	r0, r6
        11ba8c:	eb68dfd0 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        11ba90:	e3370000 	teq	r7, #0	; 0x0
        11ba94:	03300000 	teqeq	r0, #0	; 0x0
        11ba98:	0a000025 	beq	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11ba9c:	e59b0010 	ldr	r0, [fp, #16]
        11baa0:	e3500000 	cmp	r0, #0	; 0x0
        11baa4:	ba000022 	blt	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11baa8:	e49a2004 	ldr	r2, [sl], #4
        11baac:	e4981004 	ldr	r1, [r8], #4
        11bab0:	e0021001 	and	r1, r2, r1
        11bab4:	e2500001 	subs	r0, r0, #1	; 0x1
        11bab8:	e4851004 	str	r1, [r5], #4
        11babc:	5afffff9 	bpl	11baa8 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x16c>
        11bac0:	ea00001b 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11bac4:	e1a01004 	mov	r1, r4
        11bac8:	e1a00007 	mov	r0, r7
        11bacc:	eb68dfc0 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        11bad0:	e1a07000 	mov	r7, r0
        11bad4:	e1a01004 	mov	r1, r4
        11bad8:	e1a00006 	mov	r0, r6
        11badc:	eb68dfbc 	bl	1b539d4 <$SeekRgn(RgnState *, long)>
        11bae0:	e3370000 	teq	r7, #0	; 0x0
        11bae4:	03300000 	teqeq	r0, #0	; 0x0
        11bae8:	0a000011 	beq	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11baec:	e59b0010 	ldr	r0, [fp, #16]
        11baf0:	e3500000 	cmp	r0, #0	; 0x0
        11baf4:	ba00000e 	blt	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11baf8:	e4992004 	ldr	r2, [r9], #4
        11bafc:	e4981004 	ldr	r1, [r8], #4
        11bb00:	e0021001 	and	r1, r2, r1
        11bb04:	e2500001 	subs	r0, r0, #1	; 0x1
        11bb08:	e4851004 	str	r1, [r5], #4
        11bb0c:	5afffff9 	bpl	11baf8 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1bc>
        11bb10:	ea000007 	b	11bb34 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1f8>
        11bb14:	e49a2004 	ldr	r2, [sl], #4
        11bb18:	e4991004 	ldr	r1, [r9], #4
        11bb1c:	e0022001 	and	r2, r2, r1
        11bb20:	e4981004 	ldr	r1, [r8], #4
        11bb24:	e0021001 	and	r1, r2, r1
        11bb28:	e2500001 	subs	r0, r0, #1	; 0x1
        11bb2c:	e4851004 	str	r1, [r5], #4
        11bb30:	5afffff7 	bpl	11bb14 <MSeekMask__FlT1PUlT1P8RgnStateN25+0x1d8>
        11bb34:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakePhysInaccessible(unsigned long)
 * Address: 0011c3b4
 */
MakePhysInaccessible(unsigned long) {
    /*
        11c3b4:	e1a0c00d 	mov	ip, sp
        11c3b8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11c3bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        11c3c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        11c3c4:	e1a0100d 	mov	r1, sp
        11c3c8:	eb6ae192 	bl	1bd4a18 <$GetPhys(unsigned long, TPhys *&)>
        11c3cc:	e3300000 	teq	r0, #0	; 0x0
        11c3d0:	03a000e1 	moveq	r0, #225	; 0xe1
        11c3d4:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        11c3d8:	0a000002 	beq	11c3e8 <MakePhysInaccessible(unsigned long)+0x34>
        11c3dc:	e59d0000 	ldr	r0, [sp]
        11c3e0:	eb67d124 	bl	1b10878 <TPhys::$MakeInaccessible(void)>
        11c3e4:	e3a00000 	mov	r0, #0	; 0x0
        11c3e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: MakePhysAccessible(unsigned long)
 * Address: 0011c3ec
 */
MakePhysAccessible(unsigned long) {
    /*
        11c3ec:	e1a0c00d 	mov	ip, sp
        11c3f0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11c3f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11c3f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        11c3fc:	e1a0100d 	mov	r1, sp
        11c400:	eb6ae184 	bl	1bd4a18 <$GetPhys(unsigned long, TPhys *&)>
        11c404:	e3300000 	teq	r0, #0	; 0x0
        11c408:	03a000e1 	moveq	r0, #225	; 0xe1
        11c40c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        11c410:	0a000002 	beq	11c420 <MakePhysAccessible(unsigned long)+0x34>
        11c414:	e59d0000 	ldr	r0, [sp]
        11c418:	eb67d115 	bl	1b10874 <TPhys::$MakeAccessible(void)>
        11c41c:	e3a00000 	mov	r0, #0	; 0x0
        11c420:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: MapInKernelGlobals
 * Address: 0011e724
 */
void globals::MapInKernelGlobals() {
    /*
        11e724:	e1a0c00d 	mov	ip, sp
        11e728:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        11e72c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11e730:	e24cb014 	sub	fp, ip, #20	; 0x14
        11e734:	e1a05000 	mov	r5, r0
        11e738:	e1a04001 	mov	r4, r1
        11e73c:	e1a07002 	mov	r7, r2
        11e740:	e1a06003 	mov	r6, r3
        11e744:	e3a00000 	mov	r0, #0	; 0x0
        11e748:	e3510000 	cmp	r1, #0	; 0x0
        11e74c:	da000025 	ble	11e7e8 <MapInKernelGlobals+0xc4>
        11e750:	e3540a01 	cmp	r4, #4096	; 0x1000
        11e754:	c3a08003 	movgt	r8, #3	; 0x3
        11e758:	ca000003 	bgt	11e76c <MapInKernelGlobals+0x48>
        11e75c:	e2548001 	subs	r8, r4, #1	; 0x1
        11e760:	42488001 	submi	r8, r8, #1	; 0x1
        11e764:	42888b01 	addmi	r8, r8, #1024	; 0x400
        11e768:	e1a08548 	mov	r8, r8, asr #10
        11e76c:	e1a00a05 	mov	r0, r5, lsl #20
        11e770:	e1a00a20 	mov	r0, r0, lsr #20
        11e774:	e1a01520 	mov	r1, r0, lsr #10
        11e778:	e1a09001 	mov	r9, r1
        11e77c:	e1a00008 	mov	r0, r8
        11e780:	eb00025a 	bl	11f0f0 <MapTable__FUlT1>
        11e784:	e1a0a000 	mov	sl, r0
        11e788:	e1a01009 	mov	r1, r9
        11e78c:	e1a00008 	mov	r0, r8
        11e790:	ebffffd5 	bl	11e6ec <SizeTable__FUlT1>
        11e794:	e1a09500 	mov	r9, r0, lsl #10
        11e798:	e3a03001 	mov	r3, #1	; 0x1
        11e79c:	e92d0008 	stmdb	sp!, {r3}
        11e7a0:	e1a00006 	mov	r0, r6
        11e7a4:	eb00001c 	bl	11e81c <GetPhysPage>
        11e7a8:	e1a08000 	mov	r8, r0
        11e7ac:	eb000174 	bl	11ed84 <GetPrimaryTablePhysBase>
        11e7b0:	e18a2007 	orr	r2, sl, r7
        11e7b4:	e1a01625 	mov	r1, r5, lsr #12
        11e7b8:	e1a01601 	mov	r1, r1, lsl #12
        11e7bc:	e1a03008 	mov	r3, r8
        11e7c0:	eb00f015 	bl	15a81c <AddPgPAndPermWithPageTable__FUlN31Uc>
        11e7c4:	e28dd004 	add	sp, sp, #4	; 0x4
        11e7c8:	e3300000 	teq	r0, #0	; 0x0
        11e7cc:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11e7d0:	e0855009 	add	r5, r5, r9
        11e7d4:	e0444009 	sub	r4, r4, r9
        11e7d8:	e2866001 	add	r6, r6, #1	; 0x1
        11e7dc:	e3a07000 	mov	r7, #0	; 0x0
        11e7e0:	e3540000 	cmp	r4, #0	; 0x0
        11e7e4:	caffffd9 	bgt	11e750 <MapInKernelGlobals+0x2c>
        11e7e8:	e59b101c 	ldr	r1, [fp, #28]
        11e7ec:	e581a000 	str	sl, [r1]
        11e7f0:	e59b1014 	ldr	r1, [fp, #20]
        11e7f4:	e5815000 	str	r5, [r1]
        11e7f8:	e59b1018 	ldr	r1, [fp, #24]
        11e7fc:	e5816000 	str	r6, [r1]
        11e800:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MapTable__FUlT1
 * Address: 0011f0f0
 */
void globals::MapTable() {
    /*
        11f0f0:	e1a01081 	mov	r1, r1, lsl #1
        11f0f4:	e3300000 	teq	r0, #0	; 0x0
        11f0f8:	03a00003 	moveq	r0, #3	; 0x3
        11f0fc:	01a00110 	moveq	r0, r0, lsl r1
        11f100:	01a0f00e 	moveq	pc, lr
        11f104:	e3300001 	teq	r0, #1	; 0x1
        11f108:	03a0000f 	moveq	r0, #15	; 0xf
        11f10c:	0a000005 	beq	11f128 <MapTable__FUlT1+0x38>
        11f110:	e3300002 	teq	r0, #2	; 0x2
        11f114:	03a0003f 	moveq	r0, #63	; 0x3f
        11f118:	0a000002 	beq	11f128 <MapTable__FUlT1+0x38>
        11f11c:	e3300003 	teq	r0, #3	; 0x3
        11f120:	11a0f00e 	movne	pc, lr
        11f124:	e3a000ff 	mov	r0, #255	; 0xff
        11f128:	e1a00110 	mov	r0, r0, lsl r1
        11f12c:	e20000ff 	and	r0, r0, #255	; 0xff
        11f130:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MonitorDispatchKernelGlue
 * Address: 0011fc10
 */
void globals::MonitorDispatchKernelGlue() {
    /*
        11fc10:	e1a0c00d 	mov	ip, sp
        11fc14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11fc18:	e24cb004 	sub	fp, ip, #4	; 0x4
        11fc1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        11fc20:	e59f4034 	ldr	r4, [pc, #34]	; 11fc5c <MonitorDispatchKernelGlue+0x4c>
        11fc24:	e5940000 	ldr	r0, [r4]
        11fc28:	e1a0200d 	mov	r2, sp
        11fc2c:	e5b01010 	ldr	r1, [r0, #16]!
        11fc30:	e3a0000a 	mov	r0, #10	; 0xa
        11fc34:	eb67579f 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        11fc38:	e3300000 	teq	r0, #0	; 0x0
        11fc3c:	1a000005 	bne	11fc58 <MonitorDispatchKernelGlue+0x48>
        11fc40:	e5940000 	ldr	r0, [r4]
        11fc44:	e590106c 	ldr	r1, [r0, #108]
        11fc48:	e3c11502 	bic	r1, r1, #8388608	; 0x800000
        11fc4c:	e5a0106c 	str	r1, [r0, #108]!
        11fc50:	e59d0000 	ldr	r0, [sp]
        11fc54:	eb674f51 	bl	1af39a0 <TMonitor::$Aquire(void)>
        11fc58:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11fc5c:	0c100ff8 	ldceq	15, cr0, [r0], -#992
    */
}

/**
 * Symbol: MonitorExitKernelGlue
 * Address: 0011fce0
 */
void globals::MonitorExitKernelGlue() {
    /*
        11fce0:	e1a0c00d 	mov	ip, sp
        11fce4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11fce8:	e24cb004 	sub	fp, ip, #4	; 0x4
        11fcec:	e1a04000 	mov	r4, r0
        11fcf0:	e24dd004 	sub	sp, sp, #4	; 0x4
        11fcf4:	e1a0200d 	mov	r2, sp
        11fcf8:	e59f0020 	ldr	r0, [pc, #20]	; 11fd20 <MonitorExitKernelGlue+0x40>
        11fcfc:	e5901000 	ldr	r1, [r0]
        11fd00:	e3a0000a 	mov	r0, #10	; 0xa
        11fd04:	eb67576b 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        11fd08:	e1b05000 	movs	r5, r0
        11fd0c:	01a01004 	moveq	r1, r4
        11fd10:	059d0000 	ldreq	r0, [sp]
        11fd14:	0b678d1e 	bleq	1b03194 <TMonitor::$Release(long)>
        11fd18:	e1a00005 	mov	r0, r5
        11fd1c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        11fd20:	0c101058 	ldceq	0, cr1, [r0], -#352
    */
}

/**
 * Symbol: MonitorThrowKernelGlue
 * Address: 0011fd24
 */
void globals::MonitorThrowKernelGlue() {
    /*
        11fd24:	e1a0c00d 	mov	ip, sp
        11fd28:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        11fd2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11fd30:	e1a06000 	mov	r6, r0
        11fd34:	e1a05001 	mov	r5, r1
        11fd38:	e1a04002 	mov	r4, r2
        11fd3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        11fd40:	e1a0200d 	mov	r2, sp
        11fd44:	e59f0044 	ldr	r0, [pc, #44]	; 11fd90 <MonitorThrowKernelGlue+0x6c>
        11fd48:	e5901000 	ldr	r1, [r0]
        11fd4c:	e3a0000a 	mov	r0, #10	; 0xa
        11fd50:	eb675758 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        11fd54:	e1b07000 	movs	r7, r0
        11fd58:	1a000023 	bne	11fdec <MonitorThrowKernelGlue+0xc8>
        11fd5c:	e59d0000 	ldr	r0, [sp]
        11fd60:	e5d01046 	ldrb	r1, [r0, #70]
        11fd64:	e3310000 	teq	r1, #0	; 0x0
        11fd68:	0a000009 	beq	11fd94 <MonitorThrowKernelGlue+0x70>
        11fd6c:	e5b01020 	ldr	r1, [r0, #32]!
        11fd70:	e3a000b8 	mov	r0, #184	; 0xb8
        11fd74:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        11fd78:	e591204c 	ldr	r2, [r1, #76]
        11fd7c:	eb677c7e 	bl	1afef7c <$LowLevelCopyDoneFromKernelGlue>
        11fd80:	e3a010b8 	mov	r1, #184	; 0xb8
        11fd84:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        11fd88:	e59d0000 	ldr	r0, [sp]
        11fd8c:	ea000012 	b	11fddc <MonitorThrowKernelGlue+0xb8>
        11fd90:	0c101058 	ldceq	0, cr1, [r0], -#352
        11fd94:	e5901020 	ldr	r1, [r0, #32]
        11fd98:	e5911050 	ldr	r1, [r1, #80]
        11fd9c:	e201101f 	and	r1, r1, #31	; 0x1f
        11fda0:	e3310010 	teq	r1, #16	; 0x10
        11fda4:	1a00000f 	bne	11fde8 <MonitorThrowKernelGlue+0xc4>
        11fda8:	e1a02005 	mov	r2, r5
        11fdac:	e3a01001 	mov	r1, #1	; 0x1
        11fdb0:	eb67954d 	bl	1b052ec <TMonitor::$SetCallerRegister(int, unsigned long)>
        11fdb4:	e1a02004 	mov	r2, r4
        11fdb8:	e3a01002 	mov	r1, #2	; 0x2
        11fdbc:	e59d0000 	ldr	r0, [sp]
        11fdc0:	eb679549 	bl	1b052ec <TMonitor::$SetCallerRegister(int, unsigned long)>
        11fdc4:	e59f2018 	ldr	r2, [pc, #18]	; 11fde4 <MonitorThrowKernelGlue+0xc0>
        11fdc8:	e3a0100f 	mov	r1, #15	; 0xf
        11fdcc:	e59d0000 	ldr	r0, [sp]
        11fdd0:	eb679545 	bl	1b052ec <TMonitor::$SetCallerRegister(int, unsigned long)>
        11fdd4:	e1a01006 	mov	r1, r6
        11fdd8:	e59d0000 	ldr	r0, [sp]
        11fddc:	eb678cec 	bl	1b03194 <TMonitor::$Release(long)>
        11fde0:	ea000001 	b	11fdec <MonitorThrowKernelGlue+0xc8>
        11fde4:	01be319c 	ldreqb	r3, [lr, ip]!
        11fde8:	eb67d322 	bl	1b14a78 <$CantThrowInUndefinedModeReboot>
        11fdec:	e1a00007 	mov	r0, r7
        11fdf0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MonitorFlushKernelGlue
 * Address: 0011fdf4
 */
void globals::MonitorFlushKernelGlue() {
    /*
        11fdf4:	e1a0c00d 	mov	ip, sp
        11fdf8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11fdfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        11fe00:	e24dd004 	sub	sp, sp, #4	; 0x4
        11fe04:	e1a0200d 	mov	r2, sp
        11fe08:	e1a01000 	mov	r1, r0
        11fe0c:	e3a0000a 	mov	r0, #10	; 0xa
        11fe10:	eb675728 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        11fe14:	e1b04000 	movs	r4, r0
        11fe18:	059d0000 	ldreq	r0, [sp]
        11fe1c:	0b67d721 	bleq	1b15aa8 <TMonitor::$FlushTasksOnMonitor(void)>
        11fe20:	e1a00004 	mov	r0, r4
        11fe24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: MxInit
 * Address: 00125698
 */
void globals::MxInit() {
    /*
        125698:	e92d4000 	stmdb	sp!, {lr}
        12569c:	e59fe010 	ldr	lr, [pc, #10]	; 1256b4 <MxInit+0x1c>
        1256a0:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        1256a4:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        1256a8:	e89e500e 	ldmia	lr, {r1, r2, r3, ip, lr}
        1256ac:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        1256b0:	e8bd8000 	ldmia	sp!, {pc}
        1256b4:	0c101538 	ldceq	5, cr1, [r0], -#224
    */
}

/**
 * Symbol: MxCopy
 * Address: 001256b8
 */
void globals::MxCopy() {
    /*
        1256b8:	e1300001 	teq	r0, r1
        1256bc:	01a0f00e 	moveq	pc, lr
        1256c0:	e92d4000 	stmdb	sp!, {lr}
        1256c4:	e1a0e001 	mov	lr, r1
        1256c8:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        1256cc:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        1256d0:	e890100f 	ldmia	r0, {r0, r1, r2, r3, ip}
        1256d4:	e88e100f 	stmia	lr, {r0, r1, r2, r3, ip}
        1256d8:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: MxRotate
 * Address: 001256dc
 */
void globals::MxRotate() {
    /*
        1256dc:	e1a0c00d 	mov	ip, sp
        1256e0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1256e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1256e8:	e1a05000 	mov	r5, r0
        1256ec:	e1a04001 	mov	r4, r1
        1256f0:	e24dd024 	sub	sp, sp, #36	; 0x24
        1256f4:	e1a0100d 	mov	r1, sp
        1256f8:	e59f0038 	ldr	r0, [pc, #38]	; 125738 <MxRotate+0x5c>
        1256fc:	ebffffed 	bl	1256b8 <MxCopy>
        125700:	e1a00004 	mov	r0, r4
        125704:	eb6917ae 	bl	1b6b5c4 <$FractSin(long)>
        125708:	e1a06740 	mov	r6, r0, asr #14
        12570c:	e1a00004 	mov	r0, r4
        125710:	eb6917aa 	bl	1b6b5c0 <$FractCos(long)>
        125714:	e1a00740 	mov	r0, r0, asr #14
        125718:	e2661000 	rsb	r1, r6, #0	; 0x0
        12571c:	e88d0003 	stmia	sp, {r0, r1}
        125720:	e58d600c 	str	r6, [sp, #12]
        125724:	e1a01005 	mov	r1, r5
        125728:	e58d0010 	str	r0, [sp, #16]
        12572c:	e1a0000d 	mov	r0, sp
        125730:	ebffffb7 	bl	125614 <Concatenate>
        125734:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        125738:	0c101538 	ldceq	5, cr1, [r0], -#224
    */
}

/**
 * Symbol: MxScale
 * Address: 0012573c
 */
void globals::MxScale() {
    /*
        12573c:	e1a0c00d 	mov	ip, sp
        125740:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        125744:	e24cb004 	sub	fp, ip, #4	; 0x4
        125748:	e1a06000 	mov	r6, r0
        12574c:	e1a05001 	mov	r5, r1
        125750:	e1a04002 	mov	r4, r2
        125754:	e24dd024 	sub	sp, sp, #36	; 0x24
        125758:	e1a0100d 	mov	r1, sp
        12575c:	e59f0018 	ldr	r0, [pc, #18]	; 12577c <MxScale+0x40>
        125760:	ebffffd4 	bl	1256b8 <MxCopy>
        125764:	e1a01006 	mov	r1, r6
        125768:	e58d4010 	str	r4, [sp, #16]
        12576c:	e58d5000 	str	r5, [sp]
        125770:	e1a0000d 	mov	r0, sp
        125774:	ebffffa6 	bl	125614 <Concatenate>
        125778:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        12577c:	0c101538 	ldceq	5, cr1, [r0], -#224
    */
}

/**
 * Symbol: MxTransform
 * Address: 00125780
 */
void globals::MxTransform() {
    /*
        125780:	e1a0c00d 	mov	ip, sp
        125784:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        125788:	e24cb004 	sub	fp, ip, #4	; 0x4
        12578c:	e1a04000 	mov	r4, r0
        125790:	e1a05001 	mov	r5, r1
        125794:	e5916004 	ldr	r6, [r1, #4]
        125798:	e5917000 	ldr	r7, [r1]
        12579c:	e1a01007 	mov	r1, r7
        1257a0:	e5900000 	ldr	r0, [r0]
        1257a4:	eb6aee46 	bl	1be10c4 <$FixedMultiply>
        1257a8:	e1a08000 	mov	r8, r0
        1257ac:	e1a01006 	mov	r1, r6
        1257b0:	e594000c 	ldr	r0, [r4, #12]
        1257b4:	eb6aee42 	bl	1be10c4 <$FixedMultiply>
        1257b8:	e0881000 	add	r1, r8, r0
        1257bc:	e5940018 	ldr	r0, [r4, #24]
        1257c0:	e0810000 	add	r0, r1, r0
        1257c4:	e5850000 	str	r0, [r5]
        1257c8:	e1a01007 	mov	r1, r7
        1257cc:	e5940004 	ldr	r0, [r4, #4]
        1257d0:	eb6aee3b 	bl	1be10c4 <$FixedMultiply>
        1257d4:	e1a07000 	mov	r7, r0
        1257d8:	e1a01006 	mov	r1, r6
        1257dc:	e5940010 	ldr	r0, [r4, #16]
        1257e0:	eb6aee37 	bl	1be10c4 <$FixedMultiply>
        1257e4:	e0870000 	add	r0, r7, r0
        1257e8:	e5b4101c 	ldr	r1, [r4, #28]!
        1257ec:	e0800001 	add	r0, r0, r1
        1257f0:	e5a50004 	str	r0, [r5, #4]!
        1257f4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MxMove
 * Address: 001257f8
 */
void globals::MxMove() {
    /*
        1257f8:	e1a0c00d 	mov	ip, sp
        1257fc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        125800:	e24cb004 	sub	fp, ip, #4	; 0x4
        125804:	e1a06000 	mov	r6, r0
        125808:	e1a05001 	mov	r5, r1
        12580c:	e1a04002 	mov	r4, r2
        125810:	e24dd024 	sub	sp, sp, #36	; 0x24
        125814:	e1a0100d 	mov	r1, sp
        125818:	e59f0018 	ldr	r0, [pc, #18]	; 125838 <MxMove+0x40>
        12581c:	ebffffa5 	bl	1256b8 <MxCopy>
        125820:	e1a01006 	mov	r1, r6
        125824:	e58d401c 	str	r4, [sp, #28]
        125828:	e58d5018 	str	r5, [sp, #24]
        12582c:	e1a0000d 	mov	r0, sp
        125830:	ebffff77 	bl	125614 <Concatenate>
        125834:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        125838:	0c101538 	ldceq	5, cr1, [r0], -#224
    */
}

/**
 * Symbol: MakeString(unsigned short const *, long)
 * Address: 00129228
 */
MakeString(unsigned short const *, long) {
    /*
        129228:	e1a0c00d 	mov	ip, sp
        12922c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        129230:	e24cb004 	sub	fp, ip, #4	; 0x4
        129234:	e1a05000 	mov	r5, r0
        129238:	e1a04001 	mov	r4, r1
        12923c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        129240:	e2810001 	add	r0, r1, #1	; 0x1
        129244:	e1a01080 	mov	r1, r0, lsl #1
        129248:	e59f007c 	ldr	r0, [pc, #7c]	; 1292cc <MakeString(unsigned short const *, long)+0xa4>
        12924c:	eb6a63ba 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        129250:	eb6a63bd 	bl	1bc214c <$AllocateRefHandle(long)>
        129254:	e58d0008 	str	r0, [sp, #8]
        129258:	e28d1008 	add	r1, sp, #8	; 0x8
        12925c:	e1a0000d 	mov	r0, sp
        129260:	eb6a5f9c 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        129264:	e1a0100d 	mov	r1, sp
        129268:	e28d0004 	add	r0, sp, #4	; 0x4
        12926c:	eb6a5f98 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        129270:	e1a0000d 	mov	r0, sp
        129274:	e3a01000 	mov	r1, #0	; 0x0
        129278:	eb6a63a0 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        12927c:	e3a06000 	mov	r6, #0	; 0x0
        129280:	e28d0004 	add	r0, sp, #4	; 0x4
        129284:	eb6a63a2 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        129288:	e1a07000 	mov	r7, r0
        12928c:	e1a02084 	mov	r2, r4, lsl #1
        129290:	e1a01000 	mov	r1, r0
        129294:	e1a00005 	mov	r0, r5
        129298:	eb6ad72d 	bl	1bdef54 <$BlockMove>
        12929c:	e0870084 	add	r0, r7, r4, lsl #1
        1292a0:	e5c06001 	strb	r6, [r0, #1]
        1292a4:	e5c06000 	strb	r6, [r0]
        1292a8:	e59d0008 	ldr	r0, [sp, #8]
        1292ac:	e5904000 	ldr	r4, [r0]
        1292b0:	e28d0004 	add	r0, sp, #4	; 0x4
        1292b4:	e3a01000 	mov	r1, #0	; 0x0
        1292b8:	eb6a6390 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1292bc:	e59d0008 	ldr	r0, [sp, #8]
        1292c0:	eb6a67bd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1292c4:	e1a00004 	mov	r0, r4
        1292c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1292cc:	006848d0 	ldreqd	r4, [r8], -#128
    */
}

/**
 * Symbol: MakeArray(long)
 * Address: 001292d0
 */
MakeArray(long) {
    /*
        1292d0:	e1a01000 	mov	r1, r0
        1292d4:	e59f0000 	ldr	r0, [pc, #0]	; 1292dc <MakeArray(long)+0xc>
        1292d8:	ea6a6396 	b	1bc2138 <$AllocateArray(RefVar const &, long)>
        1292dc:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: Munger__FRC6RefVarlT2PcT2
 * Address: 00129b74
 */
void globals::Munger() {
    /*
        129b74:	e1a0c00d 	mov	ip, sp
        129b78:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        129b7c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        129b80:	e24cb014 	sub	fp, ip, #20	; 0x14
        129b84:	e1a06000 	mov	r6, r0
        129b88:	e1a04001 	mov	r4, r1
        129b8c:	e1a05002 	mov	r5, r2
        129b90:	e3a09000 	mov	r9, #0	; 0x0
        129b94:	e59ba014 	ldr	sl, [fp, #20]
        129b98:	e5900000 	ldr	r0, [r0]
        129b9c:	e5900000 	ldr	r0, [r0]
        129ba0:	eb6a6dc1 	bl	1bc52ac <$Length(long)>
        129ba4:	e1a07000 	mov	r7, r0
        129ba8:	e3540000 	cmp	r4, #0	; 0x0
        129bac:	b3a04000 	movlt	r4, #0	; 0x0
        129bb0:	e1540007 	cmp	r4, r7
        129bb4:	c1a04007 	movgt	r4, r7
        129bb8:	c3a05000 	movgt	r5, #0	; 0x0
        129bbc:	e0840005 	add	r0, r4, r5
        129bc0:	e1500007 	cmp	r0, r7
        129bc4:	c0475004 	subgt	r5, r7, r4
        129bc8:	e087000a 	add	r0, r7, sl
        129bcc:	e0408005 	sub	r8, r0, r5
        129bd0:	e24dd004 	sub	sp, sp, #4	; 0x4
        129bd4:	e5960000 	ldr	r0, [r6]
        129bd8:	e5900000 	ldr	r0, [r0]
        129bdc:	eb6a615a 	bl	1bc214c <$AllocateRefHandle(long)>
        129be0:	e58d0000 	str	r0, [sp]
        129be4:	e5900000 	ldr	r0, [r0]
        129be8:	eb6a6dc0 	bl	1bc52f0 <$ObjectFlags(long)>
        129bec:	e3100040 	tst	r0, #64	; 0x40
        129bf0:	0a000003 	beq	129c04 <Munger__FRC6RefVarlT2PcT2+0x90>
        129bf4:	e1a0000d 	mov	r0, sp
        129bf8:	eb6a615b 	bl	1bc216c <$Clone(RefVar const &)>
        129bfc:	e59d1000 	ldr	r1, [sp]
        129c00:	e5810000 	str	r0, [r1]
        129c04:	e1580007 	cmp	r8, r7
        129c08:	da000003 	ble	129c1c <Munger__FRC6RefVarlT2PcT2+0xa8>
        129c0c:	e1a01008 	mov	r1, r8
        129c10:	e1a0000d 	mov	r0, sp
        129c14:	eb6a71d4 	bl	1bc636c <$SetLength(RefVar const &, long)>
        129c18:	e3a09001 	mov	r9, #1	; 0x1
        129c1c:	e24dd008 	sub	sp, sp, #8	; 0x8
        129c20:	e28d1008 	add	r1, sp, #8	; 0x8
        129c24:	e1a0000d 	mov	r0, sp
        129c28:	eb6a5d2a 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        129c2c:	e1a0100d 	mov	r1, sp
        129c30:	e28d0004 	add	r0, sp, #4	; 0x4
        129c34:	eb6a5d26 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        129c38:	e1a0000d 	mov	r0, sp
        129c3c:	e3a01000 	mov	r1, #0	; 0x0
        129c40:	eb6a612e 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        129c44:	e28d0004 	add	r0, sp, #4	; 0x4
        129c48:	eb6a6131 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        129c4c:	e0471004 	sub	r1, r7, r4
        129c50:	e0412005 	sub	r2, r1, r5
        129c54:	e0804004 	add	r4, r0, r4
        129c58:	e084100a 	add	r1, r4, sl
        129c5c:	e0840005 	add	r0, r4, r5
        129c60:	eb6ad4bb 	bl	1bdef54 <$BlockMove>
        129c64:	e1a01004 	mov	r1, r4
        129c68:	e1a0200a 	mov	r2, sl
        129c6c:	e59b0010 	ldr	r0, [fp, #16]
        129c70:	eb6ad4b7 	bl	1bdef54 <$BlockMove>
        129c74:	e28d0004 	add	r0, sp, #4	; 0x4
        129c78:	e3a01000 	mov	r1, #0	; 0x0
        129c7c:	eb6a611f 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        129c80:	e28dd008 	add	sp, sp, #8	; 0x8
        129c84:	e3390000 	teq	r9, #0	; 0x0
        129c88:	01a01008 	moveq	r1, r8
        129c8c:	01a0000d 	moveq	r0, sp
        129c90:	0b6a71b5 	bleq	1bc636c <$SetLength(RefVar const &, long)>
        129c94:	e59d0000 	ldr	r0, [sp]
        129c98:	e5904000 	ldr	r4, [r0]
        129c9c:	eb6a6546 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        129ca0:	e1a00004 	mov	r0, r4
        129ca4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MoveHHi
 * Address: 0014231c
 */
void globals::MoveHHi() {
    /*
        14231c:	e59f0010 	ldr	r0, [pc, #10]	; 142334 <MoveHHi+0x18>
        142320:	e5900000 	ldr	r0, [r0]
        142324:	e2400054 	sub	r0, r0, #84	; 0x54
        142328:	e3a01000 	mov	r1, #0	; 0x0
        14232c:	e5a01048 	str	r1, [r0, #72]!
        142330:	e1a0f00e 	mov	pc, lr
        142334:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: MemError
 * Address: 00142758
 */
void globals::MemError() {
    /*
        142758:	e59f0008 	ldr	r0, [pc, #8]	; 142768 <MemError+0x10>
        14275c:	e5900000 	ldr	r0, [r0]
        142760:	e510000c 	ldr	r0, [r0, -#12]
        142764:	e1a0f00e 	mov	pc, lr
        142768:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)
 * Address: 001445fc
 */
MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long) {
    /*
        1445fc:	e1a0c00d 	mov	ip, sp
        144600:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        144604:	e24cb004 	sub	fp, ip, #4	; 0x4
        144608:	e1a04001 	mov	r4, r1
        14460c:	e1a05002 	mov	r5, r2
        144610:	e1a06003 	mov	r6, r3
        144614:	e3a07000 	mov	r7, #0	; 0x0
        144618:	e3a03000 	mov	r3, #0	; 0x0
        14461c:	e592c000 	ldr	ip, [r2]
        144620:	e92d0008 	stmdb	sp!, {r3}
        144624:	e5911002 	ldr	r1, [r1, #2]
        144628:	e1a01841 	mov	r1, r1, asr #16
        14462c:	e2840004 	add	r0, r4, #4	; 0x4
        144630:	e3a02000 	mov	r2, #0	; 0x0
        144634:	e1a0300c 	mov	r3, ip
        144638:	eb655de7 	bl	1a9bddc <$MakeStrokeUnit(TPoint *, long, TArray *, TPoint, TArray *)>
        14463c:	e28dd004 	add	sp, sp, #4	; 0x4
        144640:	e1b08000 	movs	r8, r0
        144644:	0a00004f 	beq	144788 <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0x18c>
        144648:	e1a00008 	mov	r0, r8
        14464c:	e3a01601 	mov	r1, #1048576	; 0x100000
        144650:	eb6876c7 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        144654:	e59f0098 	ldr	r0, [pc, #98]	; 1446f4 <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0xf8>
        144658:	e5900014 	ldr	r0, [r0, #20]
        14465c:	e59f1094 	ldr	r1, [pc, #94]	; 1446f8 <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0xfc>
        144660:	eb65b495 	bl	1ab18bc <TRecognizerList::$FindRecognizer(unsigned long)>
        144664:	e5901000 	ldr	r1, [r0]
        144668:	e1a0e00f 	mov	lr, pc
        14466c:	e281f008 	add	pc, r1, #8	; 0x8
        144670:	e3a02000 	mov	r2, #0	; 0x0
        144674:	e3a01000 	mov	r1, #0	; 0x0
        144678:	eb688b58 	bl	1b673e0 <$Make__17TGeneralShapeUnitSFP7TDomainUlP6TArray>
        14467c:	e1b07000 	movs	r7, r0
        144680:	0a00003d 	beq	14477c <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0x180>
        144684:	e1a01006 	mov	r1, r6
        144688:	e1a00007 	mov	r0, r7
        14468c:	e5972000 	ldr	r2, [r7]
        144690:	e1a0e00f 	mov	lr, pc
        144694:	e282f050 	add	pc, r2, #80	; 0x50
        144698:	e1a01008 	mov	r1, r8
        14469c:	e1a00007 	mov	r0, r7
        1446a0:	e5972000 	ldr	r2, [r7]
        1446a4:	e1a0e00f 	mov	lr, pc
        1446a8:	e282f054 	add	pc, r2, #84	; 0x54
        1446ac:	e1a00007 	mov	r0, r7
        1446b0:	e3a01601 	mov	r1, #1048576	; 0x100000
        1446b4:	eb6876ae 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        1446b8:	e1a00007 	mov	r0, r7
        1446bc:	e3a01000 	mov	r1, #0	; 0x0
        1446c0:	eb688b47 	bl	1b673e4 <TGeneralShapeUnit::$NewInterpretation(TDArray *)>
        1446c4:	e5942000 	ldr	r2, [r4]
        1446c8:	e1a02842 	mov	r2, r2, asr #16
        1446cc:	e3320001 	teq	r2, #1	; 0x1
        1446d0:	0a000009 	beq	1446fc <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0x100>
        1446d4:	e3320002 	teq	r2, #2	; 0x2
        1446d8:	0a000003 	beq	1446ec <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0xf0>
        1446dc:	e3320006 	teq	r2, #6	; 0x6
        1446e0:	0a000005 	beq	1446fc <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0x100>
        1446e4:	e3320007 	teq	r2, #7	; 0x7
        1446e8:	1a000004 	bne	144700 <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0x104>
        1446ec:	e3a02005 	mov	r2, #5	; 0x5
        1446f0:	ea000002 	b	144700 <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0x104>
        1446f4:	0c106e88 	ldceq	14, cr6, [r0], -#544
        1446f8:	47534850 	undefined
        1446fc:	e3a02004 	mov	r2, #4	; 0x4
        144700:	e1a00007 	mov	r0, r7
        144704:	e3a01000 	mov	r1, #0	; 0x0
        144708:	e5973000 	ldr	r3, [r7]
        14470c:	e1a0e00f 	mov	lr, pc
        144710:	e283f09c 	add	pc, r3, #156	; 0x9c
        144714:	e5940000 	ldr	r0, [r4]
        144718:	e1b00840 	movs	r0, r0, asr #16
        14471c:	1a000019 	bne	144788 <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0x18c>
        144720:	e24dd004 	sub	sp, sp, #4	; 0x4
        144724:	e1a01005 	mov	r1, r5
        144728:	e1a0000d 	mov	r0, sp
        14472c:	eb014c54 	bl	197884 <TRect::MidPoint( const(void))>
        144730:	e1a00007 	mov	r0, r7
        144734:	e3a01000 	mov	r1, #0	; 0x0
        144738:	e5972000 	ldr	r2, [r7]
        14473c:	e1a0e00f 	mov	lr, pc
        144740:	e282f068 	add	pc, r2, #104	; 0x68
        144744:	e59d1000 	ldr	r1, [sp]
        144748:	e1a01801 	mov	r1, r1, lsl #16
        14474c:	e5801014 	str	r1, [r0, #20]
        144750:	e59d1002 	ldr	r1, [sp, #2]
        144754:	e1a01801 	mov	r1, r1, lsl #16
        144758:	e5801018 	str	r1, [r0, #24]
        14475c:	e59d1002 	ldr	r1, [sp, #2]
        144760:	e5952000 	ldr	r2, [r5]
        144764:	e1a02822 	mov	r2, r2, lsr #16
        144768:	e0411002 	sub	r1, r1, r2
        14476c:	e1a01801 	mov	r1, r1, lsl #16
        144770:	e5a0101c 	str	r1, [r0, #28]!
        144774:	e28dd004 	add	sp, sp, #4	; 0x4
        144778:	ea000002 	b	144788 <MakeGeneralShape(TUnitPublic *, PolygonShape *, TRect const &, long)+0x18c>
        14477c:	e1a00008 	mov	r0, r8
        144780:	e1a0e00f 	mov	lr, pc
        144784:	e598f000 	ldr	pc, [r8]
        144788:	e1a00007 	mov	r0, r7
        14478c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MakeStrokeUnit(TStroke *, TArray *, long)
 * Address: 00145c1c
 */
MakeStrokeUnit(TStroke *, TArray *, long) {
    /*
        145c1c:	e1a0c00d 	mov	ip, sp
        145c20:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        145c24:	e24cb004 	sub	fp, ip, #4	; 0x4
        145c28:	e1a04000 	mov	r4, r0
        145c2c:	e1a06001 	mov	r6, r1
        145c30:	e1a05002 	mov	r5, r2
        145c34:	eb6564b4 	bl	1a9ef0c <$PrepStrokeForRecognition(TStroke *)>
        145c38:	e59f007c 	ldr	r0, [pc, #7c]	; 145cbc <MakeStrokeUnit(TStroke *, TArray *, long)+0xa0>
        145c3c:	e5900014 	ldr	r0, [r0, #20]
        145c40:	e59f1078 	ldr	r1, [pc, #78]	; 145cc0 <MakeStrokeUnit(TStroke *, TArray *, long)+0xa4>
        145c44:	eb65af1c 	bl	1ab18bc <TRecognizerList::$FindRecognizer(unsigned long)>
        145c48:	e5901000 	ldr	r1, [r0]
        145c4c:	e1a0e00f 	mov	lr, pc
        145c50:	e281f008 	add	pc, r1, #8	; 0x8
        145c54:	e1a03006 	mov	r3, r6
        145c58:	e1a02004 	mov	r2, r4
        145c5c:	e3a01002 	mov	r1, #2	; 0x2
        145c60:	eb689a77 	bl	1b6c644 <$Make__11TStrokeUnitSFP7TDomainUlP7TStrokeP6TArray>
        145c64:	e1b04000 	movs	r4, r0
        145c68:	0a000011 	beq	145cb4 <MakeStrokeUnit(TStroke *, TArray *, long)+0x98>
        145c6c:	e1a01005 	mov	r1, r5
        145c70:	e1a00004 	mov	r0, r4
        145c74:	e5942000 	ldr	r2, [r4]
        145c78:	e1a0e00f 	mov	lr, pc
        145c7c:	e282f050 	add	pc, r2, #80	; 0x50
        145c80:	e59f003c 	ldr	r0, [pc, #3c]	; 145cc4 <MakeStrokeUnit(TStroke *, TArray *, long)+0xa8>
        145c84:	e5901000 	ldr	r1, [r0]
        145c88:	e591101c 	ldr	r1, [r1, #28]
        145c8c:	e1a01821 	mov	r1, r1, lsr #16
        145c90:	e5c4102b 	strb	r1, [r4, #43]
        145c94:	e1a01441 	mov	r1, r1, asr #8
        145c98:	e5c4102a 	strb	r1, [r4, #42]
        145c9c:	e5900000 	ldr	r0, [r0]
        145ca0:	e590001c 	ldr	r0, [r0, #28]
        145ca4:	e1a00820 	mov	r0, r0, lsr #16
        145ca8:	e5c4002d 	strb	r0, [r4, #45]
        145cac:	e1a00440 	mov	r0, r0, asr #8
        145cb0:	e5c4002c 	strb	r0, [r4, #44]
        145cb4:	e1a00004 	mov	r0, r4
        145cb8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        145cbc:	0c106e88 	ldceq	14, cr6, [r0], -#544
        145cc0:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
        145cc4:	0c10187c 	ldceq	8, cr1, [r0], -#496
    */
}

/**
 * Symbol: MakeStrokeUnit(TPoint *, long, TArray *, TPoint, TArray *)
 * Address: 00145cc8
 */
MakeStrokeUnit(TPoint *, long, TArray *, TPoint, TArray *) {
    /*
        145cc8:	e1a0c00d 	mov	ip, sp
        145ccc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        145cd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        145cd4:	e1a04002 	mov	r4, r2
        145cd8:	e3a06000 	mov	r6, #0	; 0x0
        145cdc:	e1a02003 	mov	r2, r3
        145ce0:	e59b7004 	ldr	r7, [fp, #4]
        145ce4:	eb65583b 	bl	1a9bdd8 <$MakeStroke(TPoint *, long, TPoint)>
        145ce8:	e1b05000 	movs	r5, r0
        145cec:	0a000007 	beq	145d10 <MakeStrokeUnit(TPoint *, long, TArray *, TPoint, TArray *)+0x48>
        145cf0:	e1a02007 	mov	r2, r7
        145cf4:	e1a01004 	mov	r1, r4
        145cf8:	e1a00005 	mov	r0, r5
        145cfc:	eb655837 	bl	1a9bde0 <$MakeStrokeUnit(TStroke *, TArray *, long)>
        145d00:	e1b06000 	movs	r6, r0
        145d04:	01a00005 	moveq	r0, r5
        145d08:	01a0e00f 	moveq	lr, pc
        145d0c:	0595f000 	ldreq	pc, [r5]
        145d10:	e1a00006 	mov	r0, r6
        145d14:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MakeStroke(TPoint *, long, TPoint)
 * Address: 00145d48
 */
MakeStroke(TPoint *, long, TPoint) {
    /*
        145d48:	e1a0c00d 	mov	ip, sp
        145d4c:	e92ddbf7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        145d50:	e24cb004 	sub	fp, ip, #4	; 0x4
        145d54:	e1a05000 	mov	r5, r0
        145d58:	e1a04001 	mov	r4, r1
        145d5c:	e1a00001 	mov	r0, r1
        145d60:	eb689a3a 	bl	1b6c650 <$Make__7TStrokeSFUl>
        145d64:	e1b07000 	movs	r7, r0
        145d68:	0a00001f 	beq	145dec <MakeStroke(TPoint *, long, TPoint)+0xa4>
        145d6c:	e3a06000 	mov	r6, #0	; 0x0
        145d70:	e3540000 	cmp	r4, #0	; 0x0
        145d74:	da00001c 	ble	145dec <MakeStroke(TPoint *, long, TPoint)+0xa4>
        145d78:	e3a08000 	mov	r8, #0	; 0x0
        145d7c:	e3a09001 	mov	r9, #1	; 0x1
        145d80:	e24dd00c 	sub	sp, sp, #12	; 0xc
        145d84:	e5950002 	ldr	r0, [r5, #2]
        145d88:	e1a00820 	mov	r0, r0, lsr #16
        145d8c:	e51b1028 	ldr	r1, [fp, -#40]
        145d90:	e0800001 	add	r0, r0, r1
        145d94:	e1a00800 	mov	r0, r0, lsl #16
        145d98:	e58d0000 	str	r0, [sp]
        145d9c:	e5950000 	ldr	r0, [r5]
        145da0:	e1a00820 	mov	r0, r0, lsr #16
        145da4:	e51b1026 	ldr	r1, [fp, -#38]
        145da8:	e0800001 	add	r0, r0, r1
        145dac:	e1a00800 	mov	r0, r0, lsl #16
        145db0:	e58d0004 	str	r0, [sp, #4]
        145db4:	e5cd9009 	strb	r9, [sp, #9]
        145db8:	e5cd8008 	strb	r8, [sp, #8]
        145dbc:	e5cd800b 	strb	r8, [sp, #11]
        145dc0:	e5cd800a 	strb	r8, [sp, #10]
        145dc4:	e1a01006 	mov	r1, r6
        145dc8:	e1a00007 	mov	r0, r7
        145dcc:	eb689605 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        145dd0:	e1a0100d 	mov	r1, sp
        145dd4:	eb689e40 	bl	1b6d6dc <$SetTabPt(SamplePt *, TabPt *)>
        145dd8:	e28dd00c 	add	sp, sp, #12	; 0xc
        145ddc:	e2866001 	add	r6, r6, #1	; 0x1
        145de0:	e2855004 	add	r5, r5, #4	; 0x4
        145de4:	e1560004 	cmp	r6, r4
        145de8:	baffffe4 	blt	145d80 <MakeStroke(TPoint *, long, TPoint)+0x38>
        145dec:	e1a00007 	mov	r0, r7
        145df0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: MakeUnitList(void)
 * Address: 00145df4
 */
MakeUnitList(void) {
    /*
        145df4:	ea686cac 	b	1b610ac <$Make__9TUnitListSFv>
    */
}

/**
 * Symbol: MakeConforming(unsigned long, unsigned long *)
 * Address: 001635dc
 */
MakeConforming(unsigned long, unsigned long *) {
    /*
        1635dc:	e1a0c00d 	mov	ip, sp
        1635e0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1635e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1635e8:	e1a05000 	mov	r5, r0
        1635ec:	e1a04001 	mov	r4, r1
        1635f0:	e3a06000 	mov	r6, #0	; 0x0
        1635f4:	eb69ee4c 	bl	1bdef2c <$VToUnit(unsigned long)>
        1635f8:	e3a07003 	mov	r7, #3	; 0x3
        1635fc:	e3a08001 	mov	r8, #1	; 0x1
        163600:	e3500006 	cmp	r0, #6	; 0x6
        163604:	908ff100 	addls	pc, pc, r0, lsl #2
        163608:	ea00003c 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        16360c:	ea00000d 	b	163648 <MakeConforming(unsigned long, unsigned long *)+0x6c>
        163610:	ea000028 	b	1636b8 <MakeConforming(unsigned long, unsigned long *)+0xdc>
        163614:	ea000039 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        163618:	ea000037 	b	1636fc <MakeConforming(unsigned long, unsigned long *)+0x120>
        16361c:	ea000037 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        163620:	ea000018 	b	163688 <MakeConforming(unsigned long, unsigned long *)+0xac>
        163624:	e5940000 	ldr	r0, [r4]
        163628:	e3500004 	cmp	r0, #4	; 0x4
        16362c:	908ff100 	addls	pc, pc, r0, lsl #2
        163630:	ea000032 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        163634:	ea00002a 	b	1636e4 <MakeConforming(unsigned long, unsigned long *)+0x108>
        163638:	ea000029 	b	1636e4 <MakeConforming(unsigned long, unsigned long *)+0x108>
        16363c:	ea000028 	b	1636e4 <MakeConforming(unsigned long, unsigned long *)+0x108>
        163640:	ea00002d 	b	1636fc <MakeConforming(unsigned long, unsigned long *)+0x120>
        163644:	ea00002c 	b	1636fc <MakeConforming(unsigned long, unsigned long *)+0x120>
        163648:	e5940000 	ldr	r0, [r4]
        16364c:	e3500004 	cmp	r0, #4	; 0x4
        163650:	908ff100 	addls	pc, pc, r0, lsl #2
        163654:	ea000029 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        163658:	ea000028 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        16365c:	ea000006 	b	16367c <MakeConforming(unsigned long, unsigned long *)+0xa0>
        163660:	ea000005 	b	16367c <MakeConforming(unsigned long, unsigned long *)+0xa0>
        163664:	eaffffff 	b	163668 <MakeConforming(unsigned long, unsigned long *)+0x8c>
        163668:	e1a00005 	mov	r0, r5
        16366c:	eb669375 	bl	1b08448 <$TransformSectionIntoPageTable(unsigned long)>
        163670:	e1b06000 	movs	r6, r0
        163674:	1a000021 	bne	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        163678:	ea000016 	b	1636d8 <MakeConforming(unsigned long, unsigned long *)+0xfc>
        16367c:	e1a00005 	mov	r0, r5
        163680:	eb669370 	bl	1b08448 <$TransformSectionIntoPageTable(unsigned long)>
        163684:	ea000009 	b	1636b0 <MakeConforming(unsigned long, unsigned long *)+0xd4>
        163688:	e5940000 	ldr	r0, [r4]
        16368c:	e3500004 	cmp	r0, #4	; 0x4
        163690:	908ff100 	addls	pc, pc, r0, lsl #2
        163694:	ea000019 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        163698:	ea000018 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        16369c:	ea000001 	b	1636a8 <MakeConforming(unsigned long, unsigned long *)+0xcc>
        1636a0:	ea000000 	b	1636a8 <MakeConforming(unsigned long, unsigned long *)+0xcc>
        1636a4:	eaffffff 	b	1636a8 <MakeConforming(unsigned long, unsigned long *)+0xcc>
        1636a8:	e1a00005 	mov	r0, r5
        1636ac:	eb6640b9 	bl	1af3998 <$AllocatePageTable(unsigned long)>
        1636b0:	e1a06000 	mov	r6, r0
        1636b4:	ea000011 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        1636b8:	e5940000 	ldr	r0, [r4]
        1636bc:	e3500004 	cmp	r0, #4	; 0x4
        1636c0:	908ff100 	addls	pc, pc, r0, lsl #2
        1636c4:	ea00000d 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        1636c8:	ea000009 	b	1636f4 <MakeConforming(unsigned long, unsigned long *)+0x118>
        1636cc:	ea00000b 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        1636d0:	ea00000a 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        1636d4:	eaffffff 	b	1636d8 <MakeConforming(unsigned long, unsigned long *)+0xfc>
        1636d8:	e1a00005 	mov	r0, r5
        1636dc:	eb669358 	bl	1b08444 <$TransformBigPageToPages(unsigned long)>
        1636e0:	ea000006 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        1636e4:	e1a00005 	mov	r0, r5
        1636e8:	eb6640c1 	bl	1af39f4 <$CanUseBigPage(unsigned long)>
        1636ec:	e3300000 	teq	r0, #0	; 0x0
        1636f0:	0a000001 	beq	1636fc <MakeConforming(unsigned long, unsigned long *)+0x120>
        1636f4:	e5848000 	str	r8, [r4]
        1636f8:	ea000000 	b	163700 <MakeConforming(unsigned long, unsigned long *)+0x124>
        1636fc:	e5847000 	str	r7, [r4]
        163700:	e1a00006 	mov	r0, r6
        163704:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MakeBlockView__FRC6RefVarT1UlUc
 * Address: 00165238
 */
void globals::MakeBlockView() {
    /*
        165238:	e1a0c00d 	mov	ip, sp
        16523c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        165240:	e24cb004 	sub	fp, ip, #4	; 0x4
        165244:	e1a07001 	mov	r7, r1
        165248:	e20300ff 	and	r0, r3, #255	; 0xff
        16524c:	e52d0008 	str	r0, [sp, -#8]!
        165250:	e24dd024 	sub	sp, sp, #36	; 0x24
        165254:	e3a00002 	mov	r0, #2	; 0x2
        165258:	eb6973bb 	bl	1bc214c <$AllocateRefHandle(long)>
        16525c:	e1a09000 	mov	r9, r0
        165260:	e3a00002 	mov	r0, #2	; 0x2
        165264:	eb6973b8 	bl	1bc214c <$AllocateRefHandle(long)>
        165268:	e58d0020 	str	r0, [sp, #32]
        16526c:	e3a00002 	mov	r0, #2	; 0x2
        165270:	eb6973b5 	bl	1bc214c <$AllocateRefHandle(long)>
        165274:	e58d001c 	str	r0, [sp, #28]
        165278:	e3a00002 	mov	r0, #2	; 0x2
        16527c:	eb6973b2 	bl	1bc214c <$AllocateRefHandle(long)>
        165280:	e58d0018 	str	r0, [sp, #24]
        165284:	e3a00002 	mov	r0, #2	; 0x2
        165288:	eb6973af 	bl	1bc214c <$AllocateRefHandle(long)>
        16528c:	e1a05000 	mov	r5, r0
        165290:	e3a00002 	mov	r0, #2	; 0x2
        165294:	eb6973ac 	bl	1bc214c <$AllocateRefHandle(long)>
        165298:	e58d0014 	str	r0, [sp, #20]
        16529c:	e3a00002 	mov	r0, #2	; 0x2
        1652a0:	eb6973a9 	bl	1bc214c <$AllocateRefHandle(long)>
        1652a4:	e58d0008 	str	r0, [sp, #8]
        1652a8:	e3a00002 	mov	r0, #2	; 0x2
        1652ac:	eb6973a6 	bl	1bc214c <$AllocateRefHandle(long)>
        1652b0:	e1a0a000 	mov	sl, r0
        1652b4:	e3a06000 	mov	r6, #0	; 0x0
        1652b8:	e3a00000 	mov	r0, #0	; 0x0
        1652bc:	e3a04000 	mov	r4, #0	; 0x0
        1652c0:	e3a08001 	mov	r8, #1	; 0x1
        1652c4:	e88d0041 	stmia	sp, {r0, r6}
        1652c8:	e51b0038 	ldr	r0, [fp, -#56]
        1652cc:	e51b1030 	ldr	r1, [fp, -#48]
        1652d0:	e5900000 	ldr	r0, [r0]
        1652d4:	e5900000 	ldr	r0, [r0]
        1652d8:	eb697bdd 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1652dc:	e5890000 	str	r0, [r9]
        1652e0:	e59f110c 	ldr	r1, [pc, #10c]	; 1653f4 <MakeBlockView__FRC6RefVarT1UlUc+0x1bc>
        1652e4:	e5911000 	ldr	r1, [r1]
        1652e8:	e5911000 	ldr	r1, [r1]
        1652ec:	eb697bdb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1652f0:	e59d1020 	ldr	r1, [sp, #32]
        1652f4:	e5810000 	str	r0, [r1]
        1652f8:	e5970000 	ldr	r0, [r7]
        1652fc:	e5900000 	ldr	r0, [r0]
        165300:	e3300002 	teq	r0, #2	; 0x2
        165304:	0a00000c 	beq	16533c <MakeBlockView__FRC6RefVarT1UlUc+0x104>
        165308:	e3a00001 	mov	r0, #1	; 0x1
        16530c:	eb64daa2 	bl	1a9bd9c <$MakeArray(long)>
        165310:	e59d1008 	ldr	r1, [sp, #8]
        165314:	e5810000 	str	r0, [r1]
        165318:	e59d1020 	ldr	r1, [sp, #32]
        16531c:	e5912000 	ldr	r2, [r1]
        165320:	e3a01000 	mov	r1, #0	; 0x0
        165324:	eb69840b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        165328:	e28d1008 	add	r1, sp, #8	; 0x8
        16532c:	e1a00007 	mov	r0, r7
        165330:	eb6977a6 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        165334:	e59d1020 	ldr	r1, [sp, #32]
        165338:	e5810000 	str	r0, [r1]
        16533c:	e59f00b4 	ldr	r0, [pc, #b4]	; 1653f8 <MakeBlockView__FRC6RefVarT1UlUc+0x1c0>
        165340:	e5900000 	ldr	r0, [r0]
        165344:	e5901000 	ldr	r1, [r0]
        165348:	e59d0020 	ldr	r0, [sp, #32]
        16534c:	e5900000 	ldr	r0, [r0]
        165350:	eb697bc2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165354:	e59d1014 	ldr	r1, [sp, #20]
        165358:	e5810000 	str	r0, [r1]
        16535c:	eb697fd2 	bl	1bc52ac <$Length(long)>
        165360:	e2400002 	sub	r0, r0, #2	; 0x2
        165364:	e1a010a0 	mov	r1, r0, lsr #1
        165368:	e58d100c 	str	r1, [sp, #12]
        16536c:	e59f0088 	ldr	r0, [pc, #88]	; 1653fc <MakeBlockView__FRC6RefVarT1UlUc+0x1c4>
        165370:	e5900000 	ldr	r0, [r0]
        165374:	e5901000 	ldr	r1, [r0]
        165378:	e5990000 	ldr	r0, [r9]
        16537c:	eb697bb7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165380:	e59d1008 	ldr	r1, [sp, #8]
        165384:	e5810000 	str	r0, [r1]
        165388:	e1a01000 	mov	r1, r0
        16538c:	e3300002 	teq	r0, #2	; 0x2
        165390:	059d000c 	ldreq	r0, [sp, #12]
        165394:	0a000004 	beq	1653ac <MakeBlockView__FRC6RefVarT1UlUc+0x174>
        165398:	e1a00001 	mov	r0, r1
        16539c:	e3110003 	tst	r1, #3	; 0x3
        1653a0:	01a00140 	moveq	r0, r0, asr #2
        1653a4:	0a000000 	beq	1653ac <MakeBlockView__FRC6RefVarT1UlUc+0x174>
        1653a8:	eb69735b 	bl	1bc211c <$_RINTError(long)>
        1653ac:	e58d0010 	str	r0, [sp, #16]
        1653b0:	e59f0048 	ldr	r0, [pc, #48]	; 165400 <MakeBlockView__FRC6RefVarT1UlUc+0x1c8>
        1653b4:	e5900000 	ldr	r0, [r0]
        1653b8:	e5901000 	ldr	r1, [r0]
        1653bc:	e5990000 	ldr	r0, [r9]
        1653c0:	eb697ba6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1653c4:	e59d1008 	ldr	r1, [sp, #8]
        1653c8:	e5810000 	str	r0, [r1]
        1653cc:	e1a01000 	mov	r1, r0
        1653d0:	e3300002 	teq	r0, #2	; 0x2
        1653d4:	0a00000a 	beq	165404 <MakeBlockView__FRC6RefVarT1UlUc+0x1cc>
        1653d8:	e1a00001 	mov	r0, r1
        1653dc:	e3110003 	tst	r1, #3	; 0x3
        1653e0:	01a00140 	moveq	r0, r0, asr #2
        1653e4:	0a000000 	beq	1653ec <MakeBlockView__FRC6RefVarT1UlUc+0x1b4>
        1653e8:	eb69734b 	bl	1bc211c <$_RINTError(long)>
        1653ec:	e1a07000 	mov	r7, r0
        1653f0:	ea000004 	b	165408 <MakeBlockView__FRC6RefVarT1UlUc+0x1d0>
        1653f4:	00683338 	rsbeq	r3, r8, r8, lsr r3
        1653f8:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        1653fc:	006827b8 	streqh	r2, [r8], -#120
        165400:	006827c0 	rsbeq	r2, r8, r0, asr #15
        165404:	e3a07000 	mov	r7, #0	; 0x0
        165408:	eb69734c 	bl	1bc2140 <$AllocateFrame(void)>
        16540c:	e59d101c 	ldr	r1, [sp, #28]
        165410:	e28d2020 	add	r2, sp, #32	; 0x20
        165414:	e5810000 	str	r0, [r1]
        165418:	e51f102c 	ldr	r1, [pc, #ffffffd4]	; 1653f4 <MakeBlockView__FRC6RefVarT1UlUc+0x1bc>
        16541c:	e28d001c 	add	r0, sp, #28	; 0x1c
        165420:	eb6983d0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165424:	eb697345 	bl	1bc2140 <$AllocateFrame(void)>
        165428:	e59d1018 	ldr	r1, [sp, #24]
        16542c:	e5810000 	str	r0, [r1]
        165430:	e59f115c 	ldr	r1, [pc, #15c]	; 165594 <MakeBlockView__FRC6RefVarT1UlUc+0x35c>
        165434:	e5910000 	ldr	r0, [r1]
        165438:	e5901000 	ldr	r1, [r0]
        16543c:	e59d0020 	ldr	r0, [sp, #32]
        165440:	e5900000 	ldr	r0, [r0]
        165444:	eb697b7f 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        165448:	e3300000 	teq	r0, #0	; 0x0
        16544c:	0a00000a 	beq	16547c <MakeBlockView__FRC6RefVarT1UlUc+0x244>
        165450:	e59f113c 	ldr	r1, [pc, #13c]	; 165594 <MakeBlockView__FRC6RefVarT1UlUc+0x35c>
        165454:	e5910000 	ldr	r0, [r1]
        165458:	e5901000 	ldr	r1, [r0]
        16545c:	e59d0020 	ldr	r0, [sp, #32]
        165460:	e5900000 	ldr	r0, [r0]
        165464:	eb697b7d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165468:	e3100003 	tst	r0, #3	; 0x3
        16546c:	01a00140 	moveq	r0, r0, asr #2
        165470:	0a000000 	beq	165478 <MakeBlockView__FRC6RefVarT1UlUc+0x240>
        165474:	eb697328 	bl	1bc211c <$_RINTError(long)>
        165478:	e1a08000 	mov	r8, r0
        16547c:	e59f0114 	ldr	r0, [pc, #114]	; 165598 <MakeBlockView__FRC6RefVarT1UlUc+0x360>
        165480:	e5900000 	ldr	r0, [r0]
        165484:	e5901000 	ldr	r1, [r0]
        165488:	e59d0020 	ldr	r0, [sp, #32]
        16548c:	e5900000 	ldr	r0, [r0]
        165490:	eb697b6c 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        165494:	e3300000 	teq	r0, #0	; 0x0
        165498:	0a00006c 	beq	165650 <MakeBlockView__FRC6RefVarT1UlUc+0x418>
        16549c:	e59f10f4 	ldr	r1, [pc, #f4]	; 165598 <MakeBlockView__FRC6RefVarT1UlUc+0x360>
        1654a0:	e5910000 	ldr	r0, [r1]
        1654a4:	e5901000 	ldr	r1, [r0]
        1654a8:	e59d0020 	ldr	r0, [sp, #32]
        1654ac:	e5900000 	ldr	r0, [r0]
        1654b0:	eb697b6a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1654b4:	e3100003 	tst	r0, #3	; 0x3
        1654b8:	01a00140 	moveq	r0, r0, asr #2
        1654bc:	0a000000 	beq	1654c4 <MakeBlockView__FRC6RefVarT1UlUc+0x28c>
        1654c0:	eb697315 	bl	1bc211c <$_RINTError(long)>
        1654c4:	e1a04000 	mov	r4, r0
        1654c8:	e2000c0f 	and	r0, r0, #3840	; 0xf00
        1654cc:	e3300c0f 	teq	r0, #3840	; 0xf00
        1654d0:	03a00050 	moveq	r0, #80	; 0x50
        1654d4:	02800801 	addeq	r0, r0, #65536	; 0x10000
        1654d8:	00806408 	addeq	r6, r0, r8, lsl #8
        1654dc:	0a00004b 	beq	165610 <MakeBlockView__FRC6RefVarT1UlUc+0x3d8>
        1654e0:	e3300000 	teq	r0, #0	; 0x0
        1654e4:	0a000049 	beq	165610 <MakeBlockView__FRC6RefVarT1UlUc+0x3d8>
        1654e8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1654ec:	e59f20a8 	ldr	r2, [pc, #a8]	; 16559c <MakeBlockView__FRC6RefVarT1UlUc+0x364>
        1654f0:	e59f10a8 	ldr	r1, [pc, #a8]	; 1655a0 <MakeBlockView__FRC6RefVarT1UlUc+0x368>
        1654f4:	e28d0028 	add	r0, sp, #40	; 0x28
        1654f8:	eb69839a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1654fc:	e1a00108 	mov	r0, r8, lsl #2
        165500:	e58d0034 	str	r0, [sp, #52]
        165504:	eb697310 	bl	1bc214c <$AllocateRefHandle(long)>
        165508:	e58d0000 	str	r0, [sp]
        16550c:	e1a0200d 	mov	r2, sp
        165510:	e59f107c 	ldr	r1, [pc, #7c]	; 165594 <MakeBlockView__FRC6RefVarT1UlUc+0x35c>
        165514:	e28d0028 	add	r0, sp, #40	; 0x28
        165518:	eb698392 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        16551c:	e59d0000 	ldr	r0, [sp]
        165520:	eb697725 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165524:	e59d0034 	ldr	r0, [sp, #52]
        165528:	eb697307 	bl	1bc214c <$AllocateRefHandle(long)>
        16552c:	e58d0004 	str	r0, [sp, #4]
        165530:	e28d2004 	add	r2, sp, #4	; 0x4
        165534:	e59f1068 	ldr	r1, [pc, #68]	; 1655a4 <MakeBlockView__FRC6RefVarT1UlUc+0x36c>
        165538:	e28d0028 	add	r0, sp, #40	; 0x28
        16553c:	eb698389 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165540:	e59d0004 	ldr	r0, [sp, #4]
        165544:	eb69771c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165548:	e59d0034 	ldr	r0, [sp, #52]
        16554c:	eb6972fe 	bl	1bc214c <$AllocateRefHandle(long)>
        165550:	e58d0008 	str	r0, [sp, #8]
        165554:	e28d2008 	add	r2, sp, #8	; 0x8
        165558:	e59f1048 	ldr	r1, [pc, #48]	; 1655a8 <MakeBlockView__FRC6RefVarT1UlUc+0x370>
        16555c:	e28d0028 	add	r0, sp, #40	; 0x28
        165560:	eb698380 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165564:	e59d0008 	ldr	r0, [sp, #8]
        165568:	eb697713 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16556c:	e24dd004 	sub	sp, sp, #4	; 0x4
        165570:	e59d0020 	ldr	r0, [sp, #32]
        165574:	e59d101c 	ldr	r1, [sp, #28]
        165578:	e1500001 	cmp	r0, r1
        16557c:	2a000019 	bcs	1655e8 <MakeBlockView__FRC6RefVarT1UlUc+0x3b0>
        165580:	e3370000 	teq	r7, #0	; 0x0
        165584:	1a000008 	bne	1655ac <MakeBlockView__FRC6RefVarT1UlUc+0x374>
        165588:	e3140b01 	tst	r4, #1024	; 0x400
        16558c:	0a000015 	beq	1655e8 <MakeBlockView__FRC6RefVarT1UlUc+0x3b0>
        165590:	ea000013 	b	1655e4 <MakeBlockView__FRC6RefVarT1UlUc+0x3ac>
        165594:	00682b08 	rsbeq	r2, r8, r8, lsl #22
        165598:	00683688 	rsbeq	r3, r8, r8, lsl #13
        16559c:	0067ff98 	streqb	pc, [r7], -#248
        1655a0:	00684f68 	rsbeq	r4, r8, r8, ror #30
        1655a4:	00682aa8 	rsbeq	r2, r8, r8, lsr #21
        1655a8:	00682ab0 	streqh	r2, [r8], -#160
        1655ac:	e59d0020 	ldr	r0, [sp, #32]
        1655b0:	e0800007 	add	r0, r0, r7
        1655b4:	e2800001 	add	r0, r0, #1	; 0x1
        1655b8:	e59d101c 	ldr	r1, [sp, #28]
        1655bc:	e1300001 	teq	r0, r1
        1655c0:	e2040c01 	and	r0, r4, #256	; 0x100
        1655c4:	1a000002 	bne	1655d4 <MakeBlockView__FRC6RefVarT1UlUc+0x39c>
        1655c8:	e3300000 	teq	r0, #0	; 0x0
        1655cc:	13c44c01 	bicne	r4, r4, #256	; 0x100
        1655d0:	ea000004 	b	1655e8 <MakeBlockView__FRC6RefVarT1UlUc+0x3b0>
        1655d4:	e3300000 	teq	r0, #0	; 0x0
        1655d8:	13c44c01 	bicne	r4, r4, #256	; 0x100
        1655dc:	e3140b01 	tst	r4, #1024	; 0x400
        1655e0:	0a000000 	beq	1655e8 <MakeBlockView__FRC6RefVarT1UlUc+0x3b0>
        1655e4:	e3c44b01 	bic	r4, r4, #1024	; 0x400
        1655e8:	e1a00104 	mov	r0, r4, lsl #2
        1655ec:	eb6972d6 	bl	1bc214c <$AllocateRefHandle(long)>
        1655f0:	e58d0000 	str	r0, [sp]
        1655f4:	e1a0200d 	mov	r2, sp
        1655f8:	e51f1068 	ldr	r1, [pc, #ffffff98]	; 165598 <MakeBlockView__FRC6RefVarT1UlUc+0x360>
        1655fc:	e28d002c 	add	r0, sp, #44	; 0x2c
        165600:	eb698358 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165604:	e59d0000 	ldr	r0, [sp]
        165608:	eb6976eb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16560c:	e28dd010 	add	sp, sp, #16	; 0x10
        165610:	e3140010 	tst	r4, #16	; 0x10
        165614:	13866406 	orrne	r6, r6, #100663296	; 0x6000000
        165618:	e3140020 	tst	r4, #32	; 0x20
        16561c:	0a00000b 	beq	165650 <MakeBlockView__FRC6RefVarT1UlUc+0x418>
        165620:	e24dd004 	sub	sp, sp, #4	; 0x4
        165624:	e3866005 	orr	r6, r6, #5	; 0x5
        165628:	e3a0000c 	mov	r0, #12	; 0xc
        16562c:	eb6972c6 	bl	1bc214c <$AllocateRefHandle(long)>
        165630:	e58d0000 	str	r0, [sp]
        165634:	e1a0200d 	mov	r2, sp
        165638:	e59f11ec 	ldr	r1, [pc, #1ec]	; 16582c <MakeBlockView__FRC6RefVarT1UlUc+0x5f4>
        16563c:	e28d0020 	add	r0, sp, #32	; 0x20
        165640:	eb698348 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165644:	e59d0000 	ldr	r0, [sp]
        165648:	eb6976db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16564c:	e28dd004 	add	sp, sp, #4	; 0x4
        165650:	e24dd004 	sub	sp, sp, #4	; 0x4
        165654:	e3360000 	teq	r6, #0	; 0x0
        165658:	0a000008 	beq	165680 <MakeBlockView__FRC6RefVarT1UlUc+0x448>
        16565c:	e1a00106 	mov	r0, r6, lsl #2
        165660:	eb6972b9 	bl	1bc214c <$AllocateRefHandle(long)>
        165664:	e58d0000 	str	r0, [sp]
        165668:	e1a0200d 	mov	r2, sp
        16566c:	e59f11bc 	ldr	r1, [pc, #1bc]	; 165830 <MakeBlockView__FRC6RefVarT1UlUc+0x5f8>
        165670:	e28d0020 	add	r0, sp, #32	; 0x20
        165674:	eb69833b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165678:	e59d0000 	ldr	r0, [sp]
        16567c:	eb6976ce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165680:	e59f01ac 	ldr	r0, [pc, #1ac]	; 165834 <MakeBlockView__FRC6RefVarT1UlUc+0x5fc>
        165684:	e5900000 	ldr	r0, [r0]
        165688:	e5901000 	ldr	r1, [r0]
        16568c:	e5990000 	ldr	r0, [r9]
        165690:	eb697af2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165694:	e3140c0f 	tst	r4, #3840	; 0xf00
        165698:	e5850000 	str	r0, [r5]
        16569c:	e24dd010 	sub	sp, sp, #16	; 0x10
        1656a0:	e3a01000 	mov	r1, #0	; 0x0
        1656a4:	0a000067 	beq	165848 <MakeBlockView__FRC6RefVarT1UlUc+0x610>
        1656a8:	eb697ae9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1656ac:	e3100003 	tst	r0, #3	; 0x3
        1656b0:	01a00140 	moveq	r0, r0, asr #2
        1656b4:	0a000000 	beq	1656bc <MakeBlockView__FRC6RefVarT1UlUc+0x484>
        1656b8:	eb697297 	bl	1bc211c <$_RINTError(long)>
        1656bc:	e3a01001 	mov	r1, #1	; 0x1
        1656c0:	e58d000c 	str	r0, [sp, #12]
        1656c4:	e5950000 	ldr	r0, [r5]
        1656c8:	eb697ae1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1656cc:	e3100003 	tst	r0, #3	; 0x3
        1656d0:	01a00140 	moveq	r0, r0, asr #2
        1656d4:	0a000000 	beq	1656dc <MakeBlockView__FRC6RefVarT1UlUc+0x4a4>
        1656d8:	eb69728f 	bl	1bc211c <$_RINTError(long)>
        1656dc:	e3a01002 	mov	r1, #2	; 0x2
        1656e0:	e58d0008 	str	r0, [sp, #8]
        1656e4:	e5950000 	ldr	r0, [r5]
        1656e8:	eb697ad9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1656ec:	e3100003 	tst	r0, #3	; 0x3
        1656f0:	01a00140 	moveq	r0, r0, asr #2
        1656f4:	0a000000 	beq	1656fc <MakeBlockView__FRC6RefVarT1UlUc+0x4c4>
        1656f8:	eb697287 	bl	1bc211c <$_RINTError(long)>
        1656fc:	e3a01003 	mov	r1, #3	; 0x3
        165700:	e58d0000 	str	r0, [sp]
        165704:	e5950000 	ldr	r0, [r5]
        165708:	eb697ad1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        16570c:	e3100003 	tst	r0, #3	; 0x3
        165710:	01a00140 	moveq	r0, r0, asr #2
        165714:	0a000000 	beq	16571c <MakeBlockView__FRC6RefVarT1UlUc+0x4e4>
        165718:	eb69727f 	bl	1bc211c <$_RINTError(long)>
        16571c:	e58d0004 	str	r0, [sp, #4]
        165720:	e3140c02 	tst	r4, #512	; 0x200
        165724:	0a000003 	beq	165738 <MakeBlockView__FRC6RefVarT1UlUc+0x500>
        165728:	e59d000c 	ldr	r0, [sp, #12]
        16572c:	e0800008 	add	r0, r0, r8
        165730:	e2800001 	add	r0, r0, #1	; 0x1
        165734:	e58d000c 	str	r0, [sp, #12]
        165738:	e3140c01 	tst	r4, #256	; 0x100
        16573c:	0a000003 	beq	165750 <MakeBlockView__FRC6RefVarT1UlUc+0x518>
        165740:	e59d0008 	ldr	r0, [sp, #8]
        165744:	e0800008 	add	r0, r0, r8
        165748:	e2800001 	add	r0, r0, #1	; 0x1
        16574c:	e58d0008 	str	r0, [sp, #8]
        165750:	e3140b01 	tst	r4, #1024	; 0x400
        165754:	0a000003 	beq	165768 <MakeBlockView__FRC6RefVarT1UlUc+0x530>
        165758:	e2880001 	add	r0, r8, #1	; 0x1
        16575c:	e59d1004 	ldr	r1, [sp, #4]
        165760:	e0410000 	sub	r0, r1, r0
        165764:	e58d0004 	str	r0, [sp, #4]
        165768:	e24dd010 	sub	sp, sp, #16	; 0x10
        16576c:	e3140b02 	tst	r4, #2048	; 0x800
        165770:	0a000003 	beq	165784 <MakeBlockView__FRC6RefVarT1UlUc+0x54c>
        165774:	e2880002 	add	r0, r8, #2	; 0x2
        165778:	e59d1010 	ldr	r1, [sp, #16]
        16577c:	e0410000 	sub	r0, r1, r0
        165780:	e58d0010 	str	r0, [sp, #16]
        165784:	e59d001c 	ldr	r0, [sp, #28]
        165788:	e1a00100 	mov	r0, r0, lsl #2
        16578c:	eb69726e 	bl	1bc214c <$AllocateRefHandle(long)>
        165790:	e58d0000 	str	r0, [sp]
        165794:	e1a0200d 	mov	r2, sp
        165798:	e59f1098 	ldr	r1, [pc, #98]	; 165838 <MakeBlockView__FRC6RefVarT1UlUc+0x600>
        16579c:	e28d003c 	add	r0, sp, #60	; 0x3c
        1657a0:	eb6982f0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1657a4:	e59d0000 	ldr	r0, [sp]
        1657a8:	eb697683 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1657ac:	e59d0018 	ldr	r0, [sp, #24]
        1657b0:	e1a00100 	mov	r0, r0, lsl #2
        1657b4:	eb697264 	bl	1bc214c <$AllocateRefHandle(long)>
        1657b8:	e58d0004 	str	r0, [sp, #4]
        1657bc:	e28d2004 	add	r2, sp, #4	; 0x4
        1657c0:	e59f1074 	ldr	r1, [pc, #74]	; 16583c <MakeBlockView__FRC6RefVarT1UlUc+0x604>
        1657c4:	e28d003c 	add	r0, sp, #60	; 0x3c
        1657c8:	eb6982e6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1657cc:	e59d0004 	ldr	r0, [sp, #4]
        1657d0:	eb697679 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1657d4:	e59d0010 	ldr	r0, [sp, #16]
        1657d8:	e1a00100 	mov	r0, r0, lsl #2
        1657dc:	eb69725a 	bl	1bc214c <$AllocateRefHandle(long)>
        1657e0:	e58d0008 	str	r0, [sp, #8]
        1657e4:	e28d2008 	add	r2, sp, #8	; 0x8
        1657e8:	e59f1050 	ldr	r1, [pc, #50]	; 165840 <MakeBlockView__FRC6RefVarT1UlUc+0x608>
        1657ec:	e28d003c 	add	r0, sp, #60	; 0x3c
        1657f0:	eb6982dc 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1657f4:	e59d0008 	ldr	r0, [sp, #8]
        1657f8:	eb69766f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1657fc:	e59d0014 	ldr	r0, [sp, #20]
        165800:	e1a00100 	mov	r0, r0, lsl #2
        165804:	eb697250 	bl	1bc214c <$AllocateRefHandle(long)>
        165808:	e58d000c 	str	r0, [sp, #12]
        16580c:	e28d200c 	add	r2, sp, #12	; 0xc
        165810:	e59f102c 	ldr	r1, [pc, #2c]	; 165844 <MakeBlockView__FRC6RefVarT1UlUc+0x60c>
        165814:	e28d003c 	add	r0, sp, #60	; 0x3c
        165818:	eb6982d2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        16581c:	e59d000c 	ldr	r0, [sp, #12]
        165820:	eb697665 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165824:	e28dd010 	add	sp, sp, #16	; 0x10
        165828:	ea000030 	b	1658f0 <MakeBlockView__FRC6RefVarT1UlUc+0x6b8>
        16582c:	006850f8 	streqd	r5, [r8], -#8
        165830:	00684fd0 	ldreqd	r4, [r8], -#240
        165834:	00682190 	streqb	r2, [r8], -#16
        165838:	006834e0 	rsbeq	r3, r8, r0, ror #9
        16583c:	00684bc8 	rsbeq	r4, r8, r8, asr #23
        165840:	00684360 	rsbeq	r4, r8, r0, ror #6
        165844:	00682188 	rsbeq	r2, r8, r8, lsl #3
        165848:	eb697a81 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        16584c:	eb69723e 	bl	1bc214c <$AllocateRefHandle(long)>
        165850:	e58d0000 	str	r0, [sp]
        165854:	e1a0200d 	mov	r2, sp
        165858:	e51f1028 	ldr	r1, [pc, #ffffffd8]	; 165838 <MakeBlockView__FRC6RefVarT1UlUc+0x600>
        16585c:	e28d002c 	add	r0, sp, #44	; 0x2c
        165860:	eb6982c0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165864:	e59d0000 	ldr	r0, [sp]
        165868:	eb697653 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16586c:	e3a01001 	mov	r1, #1	; 0x1
        165870:	e5950000 	ldr	r0, [r5]
        165874:	eb697a76 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        165878:	eb697233 	bl	1bc214c <$AllocateRefHandle(long)>
        16587c:	e58d0004 	str	r0, [sp, #4]
        165880:	e28d2004 	add	r2, sp, #4	; 0x4
        165884:	e51f1050 	ldr	r1, [pc, #ffffffb0]	; 16583c <MakeBlockView__FRC6RefVarT1UlUc+0x604>
        165888:	e28d002c 	add	r0, sp, #44	; 0x2c
        16588c:	eb6982b5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165890:	e59d0004 	ldr	r0, [sp, #4]
        165894:	eb697648 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165898:	e3a01002 	mov	r1, #2	; 0x2
        16589c:	e5950000 	ldr	r0, [r5]
        1658a0:	eb697a6b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1658a4:	eb697228 	bl	1bc214c <$AllocateRefHandle(long)>
        1658a8:	e58d0008 	str	r0, [sp, #8]
        1658ac:	e28d2008 	add	r2, sp, #8	; 0x8
        1658b0:	e51f1078 	ldr	r1, [pc, #ffffff88]	; 165840 <MakeBlockView__FRC6RefVarT1UlUc+0x608>
        1658b4:	e28d002c 	add	r0, sp, #44	; 0x2c
        1658b8:	eb6982aa 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1658bc:	e59d0008 	ldr	r0, [sp, #8]
        1658c0:	eb69763d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1658c4:	e3a01003 	mov	r1, #3	; 0x3
        1658c8:	e5950000 	ldr	r0, [r5]
        1658cc:	eb697a60 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1658d0:	eb69721d 	bl	1bc214c <$AllocateRefHandle(long)>
        1658d4:	e58d000c 	str	r0, [sp, #12]
        1658d8:	e28d200c 	add	r2, sp, #12	; 0xc
        1658dc:	e51f10a0 	ldr	r1, [pc, #ffffff60]	; 165844 <MakeBlockView__FRC6RefVarT1UlUc+0x60c>
        1658e0:	e28d002c 	add	r0, sp, #44	; 0x2c
        1658e4:	eb69829f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1658e8:	e59d000c 	ldr	r0, [sp, #12]
        1658ec:	eb697632 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1658f0:	e28dd010 	add	sp, sp, #16	; 0x10
        1658f4:	e28d201c 	add	r2, sp, #28	; 0x1c
        1658f8:	e59f1074 	ldr	r1, [pc, #74]	; 165974 <MakeBlockView__FRC6RefVarT1UlUc+0x73c>
        1658fc:	e28d0020 	add	r0, sp, #32	; 0x20
        165900:	eb698298 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165904:	e59f406c 	ldr	r4, [pc, #6c]	; 165978 <MakeBlockView__FRC6RefVarT1UlUc+0x740>
        165908:	e5940000 	ldr	r0, [r4]
        16590c:	e5901000 	ldr	r1, [r0]
        165910:	e59d0024 	ldr	r0, [sp, #36]
        165914:	e5900000 	ldr	r0, [r0]
        165918:	eb697a4a 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        16591c:	e3300000 	teq	r0, #0	; 0x0
        165920:	0a000018 	beq	165988 <MakeBlockView__FRC6RefVarT1UlUc+0x750>
        165924:	e5940000 	ldr	r0, [r4]
        165928:	e5901000 	ldr	r1, [r0]
        16592c:	e59d0024 	ldr	r0, [sp, #36]
        165930:	e5900000 	ldr	r0, [r0]
        165934:	eb697a49 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165938:	eb697203 	bl	1bc214c <$AllocateRefHandle(long)>
        16593c:	e1a04000 	mov	r4, r0
        165940:	e59f0034 	ldr	r0, [pc, #34]	; 16597c <MakeBlockView__FRC6RefVarT1UlUc+0x744>
        165944:	e5900000 	ldr	r0, [r0]
        165948:	e5901000 	ldr	r1, [r0]
        16594c:	e5940000 	ldr	r0, [r4]
        165950:	eb697a36 	bl	1bc4230 <$EQRef__FlT1>
        165954:	e1b08000 	movs	r8, r0
        165958:	13a08001 	movne	r8, #1	; 0x1
        16595c:	e1a00004 	mov	r0, r4
        165960:	eb697615 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165964:	e3380000 	teq	r8, #0	; 0x0
        165968:	159f4010 	ldrne	r4, [pc, #10]	; 165980 <MakeBlockView__FRC6RefVarT1UlUc+0x748>
        16596c:	059f4010 	ldreq	r4, [pc, #10]	; 165984 <MakeBlockView__FRC6RefVarT1UlUc+0x74c>
        165970:	ea000014 	b	1659c8 <MakeBlockView__FRC6RefVarT1UlUc+0x790>
        165974:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        165978:	00684cb0 	streqh	r4, [r8], -#192
        16597c:	00682e68 	rsbeq	r2, r8, r8, ror #28
        165980:	666f726d 	strvsbt	r7, [pc], -sp, ror #4
        165984:	2a2a2a2a 	bcs	bf0234 <ROM$$Size+0x4d05e8>
        165988:	e28d0018 	add	r0, sp, #24	; 0x18
        16598c:	eb6971f5 	bl	1bc2168 <$ClassOf(RefVar const &)>
        165990:	eb6971ed 	bl	1bc214c <$AllocateRefHandle(long)>
        165994:	e1a04000 	mov	r4, r0
        165998:	e59f0108 	ldr	r0, [pc, #108]	; 165aa8 <MakeBlockView__FRC6RefVarT1UlUc+0x870>
        16599c:	e5900000 	ldr	r0, [r0]
        1659a0:	e5901000 	ldr	r1, [r0]
        1659a4:	e5940000 	ldr	r0, [r4]
        1659a8:	eb697a20 	bl	1bc4230 <$EQRef__FlT1>
        1659ac:	e1b08000 	movs	r8, r0
        1659b0:	13a08001 	movne	r8, #1	; 0x1
        1659b4:	e1a00004 	mov	r0, r4
        1659b8:	eb6975ff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1659bc:	e3380000 	teq	r8, #0	; 0x0
        1659c0:	159f40e4 	ldrne	r4, [pc, #e4]	; 165aac <MakeBlockView__FRC6RefVarT1UlUc+0x874>
        1659c4:	059f40e4 	ldreq	r4, [pc, #e4]	; 165ab0 <MakeBlockView__FRC6RefVarT1UlUc+0x878>
        1659c8:	e59f80e4 	ldr	r8, [pc, #e4]	; 165ab4 <MakeBlockView__FRC6RefVarT1UlUc+0x87c>
        1659cc:	e5980000 	ldr	r0, [r8]
        1659d0:	e5901000 	ldr	r1, [r0]
        1659d4:	e59d0024 	ldr	r0, [sp, #36]
        1659d8:	e5900000 	ldr	r0, [r0]
        1659dc:	eb697a19 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        1659e0:	e3300000 	teq	r0, #0	; 0x0
        1659e4:	0a000009 	beq	165a10 <MakeBlockView__FRC6RefVarT1UlUc+0x7d8>
        1659e8:	e5980000 	ldr	r0, [r8]
        1659ec:	e5901000 	ldr	r1, [r0]
        1659f0:	e59d0024 	ldr	r0, [sp, #36]
        1659f4:	e5900000 	ldr	r0, [r0]
        1659f8:	eb697a18 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1659fc:	e3100003 	tst	r0, #3	; 0x3
        165a00:	01a00140 	moveq	r0, r0, asr #2
        165a04:	0a000000 	beq	165a0c <MakeBlockView__FRC6RefVarT1UlUc+0x7d4>
        165a08:	eb6971c3 	bl	1bc211c <$_RINTError(long)>
        165a0c:	e58d0008 	str	r0, [sp, #8]
        165a10:	e59f80a0 	ldr	r8, [pc, #a0]	; 165ab8 <MakeBlockView__FRC6RefVarT1UlUc+0x880>
        165a14:	e5980000 	ldr	r0, [r8]
        165a18:	e5901000 	ldr	r1, [r0]
        165a1c:	e59d0024 	ldr	r0, [sp, #36]
        165a20:	e5900000 	ldr	r0, [r0]
        165a24:	eb697a07 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        165a28:	e3300000 	teq	r0, #0	; 0x0
        165a2c:	0a000009 	beq	165a58 <MakeBlockView__FRC6RefVarT1UlUc+0x820>
        165a30:	e5980000 	ldr	r0, [r8]
        165a34:	e5901000 	ldr	r1, [r0]
        165a38:	e59d0024 	ldr	r0, [sp, #36]
        165a3c:	e5900000 	ldr	r0, [r0]
        165a40:	eb697a06 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165a44:	e3100003 	tst	r0, #3	; 0x3
        165a48:	01a00140 	moveq	r0, r0, asr #2
        165a4c:	0a000000 	beq	165a54 <MakeBlockView__FRC6RefVarT1UlUc+0x81c>
        165a50:	eb6971b1 	bl	1bc211c <$_RINTError(long)>
        165a54:	e58d0004 	str	r0, [sp, #4]
        165a58:	e59f804c 	ldr	r8, [pc, #4c]	; 165aac <MakeBlockView__FRC6RefVarT1UlUc+0x874>
        165a5c:	e1340008 	teq	r4, r8
        165a60:	159fc048 	ldrne	ip, [pc, #48]	; 165ab0 <MakeBlockView__FRC6RefVarT1UlUc+0x878>
        165a64:	1134000c 	teqne	r4, ip
        165a68:	1a00002b 	bne	165b1c <MakeBlockView__FRC6RefVarT1UlUc+0x8e4>
        165a6c:	e59f1048 	ldr	r1, [pc, #48]	; 165abc <MakeBlockView__FRC6RefVarT1UlUc+0x884>
        165a70:	e5910000 	ldr	r0, [r1]
        165a74:	e5901000 	ldr	r1, [r0]
        165a78:	e59d0024 	ldr	r0, [sp, #36]
        165a7c:	e5900000 	ldr	r0, [r0]
        165a80:	eb6979f6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165a84:	e59d100c 	ldr	r1, [sp, #12]
        165a88:	e5810000 	str	r0, [r1]
        165a8c:	e3300002 	teq	r0, #2	; 0x2
        165a90:	0a00000a 	beq	165ac0 <MakeBlockView__FRC6RefVarT1UlUc+0x888>
        165a94:	e28d200c 	add	r2, sp, #12	; 0xc
        165a98:	e59f101c 	ldr	r1, [pc, #1c]	; 165abc <MakeBlockView__FRC6RefVarT1UlUc+0x884>
        165a9c:	e28d0020 	add	r0, sp, #32	; 0x20
        165aa0:	eb698230 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165aa4:	ea00001c 	b	165b1c <MakeBlockView__FRC6RefVarT1UlUc+0x8e4>
        165aa8:	006848d0 	ldreqd	r4, [r8], -#128
        165aac:	54455854 	strplb	r5, [r5], -#2132
        165ab0:	50494354 	subpl	r4, r9, r4, asr r3
        165ab4:	00682df0 	streqd	r2, [r8], -#208
        165ab8:	006834c0 	rsbeq	r3, r8, r0, asr #9
        165abc:	00685048 	rsbeq	r5, r8, r8, asr #32
        165ac0:	e59d0004 	ldr	r0, [sp, #4]
        165ac4:	e3100004 	tst	r0, #4	; 0x4
        165ac8:	e24dd004 	sub	sp, sp, #4	; 0x4
        165acc:	0a000008 	beq	165af4 <MakeBlockView__FRC6RefVarT1UlUc+0x8bc>
        165ad0:	e3a00008 	mov	r0, #8	; 0x8
        165ad4:	eb69719c 	bl	1bc214c <$AllocateRefHandle(long)>
        165ad8:	e58d0000 	str	r0, [sp]
        165adc:	e1a0200d 	mov	r2, sp
        165ae0:	e51f102c 	ldr	r1, [pc, #ffffffd4]	; 165abc <MakeBlockView__FRC6RefVarT1UlUc+0x884>
        165ae4:	e28d0024 	add	r0, sp, #36	; 0x24
        165ae8:	eb69821e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165aec:	e59d0000 	ldr	r0, [sp]
        165af0:	ea000007 	b	165b14 <MakeBlockView__FRC6RefVarT1UlUc+0x8dc>
        165af4:	e3a00000 	mov	r0, #0	; 0x0
        165af8:	eb697193 	bl	1bc214c <$AllocateRefHandle(long)>
        165afc:	e58d0000 	str	r0, [sp]
        165b00:	e1a0200d 	mov	r2, sp
        165b04:	e51f1050 	ldr	r1, [pc, #ffffffb0]	; 165abc <MakeBlockView__FRC6RefVarT1UlUc+0x884>
        165b08:	e28d0024 	add	r0, sp, #36	; 0x24
        165b0c:	eb698215 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165b10:	e59d0000 	ldr	r0, [sp]
        165b14:	eb6975a8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165b18:	e28dd004 	add	sp, sp, #4	; 0x4
        165b1c:	e1340008 	teq	r4, r8
        165b20:	1a0000b3 	bne	165df4 <MakeBlockView__FRC6RefVarT1UlUc+0xbbc>
        165b24:	e59f209c 	ldr	r2, [pc, #9c]	; 165bc8 <MakeBlockView__FRC6RefVarT1UlUc+0x990>
        165b28:	e59f109c 	ldr	r1, [pc, #9c]	; 165bcc <MakeBlockView__FRC6RefVarT1UlUc+0x994>
        165b2c:	e28d0020 	add	r0, sp, #32	; 0x20
        165b30:	eb69820c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165b34:	e59d0014 	ldr	r0, [sp, #20]
        165b38:	e59d1010 	ldr	r1, [sp, #16]
        165b3c:	e59f408c 	ldr	r4, [pc, #8c]	; 165bd0 <MakeBlockView__FRC6RefVarT1UlUc+0x998>
        165b40:	e1300001 	teq	r0, r1
        165b44:	03370000 	teqeq	r7, #0	; 0x0
        165b48:	0a000021 	beq	165bd4 <MakeBlockView__FRC6RefVarT1UlUc+0x99c>
        165b4c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        165b50:	e3a00002 	mov	r0, #2	; 0x2
        165b54:	eb69717c 	bl	1bc214c <$AllocateRefHandle(long)>
        165b58:	e58d0008 	str	r0, [sp, #8]
        165b5c:	e28d1024 	add	r1, sp, #36	; 0x24
        165b60:	e1a0000d 	mov	r0, sp
        165b64:	eb696d5b 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        165b68:	e1a0100d 	mov	r1, sp
        165b6c:	e28d0004 	add	r0, sp, #4	; 0x4
        165b70:	eb696d57 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        165b74:	e1a0000d 	mov	r0, sp
        165b78:	e3a01000 	mov	r1, #0	; 0x0
        165b7c:	eb69715f 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        165b80:	e28d0004 	add	r0, sp, #4	; 0x4
        165b84:	eb697162 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        165b88:	e0800087 	add	r0, r0, r7, lsl #1
        165b8c:	e59d1020 	ldr	r1, [sp, #32]
        165b90:	eb64d88c 	bl	1a9bdc8 <$MakeString(unsigned short const *, long)>
        165b94:	e59d1008 	ldr	r1, [sp, #8]
        165b98:	e28d2008 	add	r2, sp, #8	; 0x8
        165b9c:	e5810000 	str	r0, [r1]
        165ba0:	e1a01004 	mov	r1, r4
        165ba4:	e28d002c 	add	r0, sp, #44	; 0x2c
        165ba8:	eb6981ee 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165bac:	e28d0004 	add	r0, sp, #4	; 0x4
        165bb0:	e3a01000 	mov	r1, #0	; 0x0
        165bb4:	eb697151 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        165bb8:	e59d0008 	ldr	r0, [sp, #8]
        165bbc:	eb69757e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165bc0:	e28dd00c 	add	sp, sp, #12	; 0xc
        165bc4:	ea000006 	b	165be4 <MakeBlockView__FRC6RefVarT1UlUc+0x9ac>
        165bc8:	006811e0 	rsbeq	r1, r8, r0, ror #3
        165bcc:	00685390 	streqb	r5, [r8], -#48
        165bd0:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        165bd4:	e28d2018 	add	r2, sp, #24	; 0x18
        165bd8:	e1a01004 	mov	r1, r4
        165bdc:	e28d0020 	add	r0, sp, #32	; 0x20
        165be0:	eb6981e0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165be4:	e59f10f4 	ldr	r1, [pc, #f4]	; 165ce0 <MakeBlockView__FRC6RefVarT1UlUc+0xaa8>
        165be8:	e5910000 	ldr	r0, [r1]
        165bec:	e5901000 	ldr	r1, [r0]
        165bf0:	e59d0024 	ldr	r0, [sp, #36]
        165bf4:	e5900000 	ldr	r0, [r0]
        165bf8:	eb697998 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165bfc:	e59d100c 	ldr	r1, [sp, #12]
        165c00:	e5810000 	str	r0, [r1]
        165c04:	e3300002 	teq	r0, #2	; 0x2
        165c08:	0a000057 	beq	165d6c <MakeBlockView__FRC6RefVarT1UlUc+0xb34>
        165c0c:	e3370000 	teq	r7, #0	; 0x0
        165c10:	028d200c 	addeq	r2, sp, #12	; 0xc
        165c14:	059f10c4 	ldreq	r1, [pc, #c4]	; 165ce0 <MakeBlockView__FRC6RefVarT1UlUc+0xaa8>
        165c18:	0a000064 	beq	165db0 <MakeBlockView__FRC6RefVarT1UlUc+0xb78>
        165c1c:	e3a06000 	mov	r6, #0	; 0x0
        165c20:	e24dd008 	sub	sp, sp, #8	; 0x8
        165c24:	eb697da0 	bl	1bc52ac <$Length(long)>
        165c28:	e58d0004 	str	r0, [sp, #4]
        165c2c:	e3a00000 	mov	r0, #0	; 0x0
        165c30:	eb64d859 	bl	1a9bd9c <$MakeArray(long)>
        165c34:	eb697144 	bl	1bc214c <$AllocateRefHandle(long)>
        165c38:	e3a08000 	mov	r8, #0	; 0x0
        165c3c:	e3a04000 	mov	r4, #0	; 0x0
        165c40:	e58d0000 	str	r0, [sp]
        165c44:	e59d0004 	ldr	r0, [sp, #4]
        165c48:	e3500000 	cmp	r0, #0	; 0x0
        165c4c:	da00003e 	ble	165d4c <MakeBlockView__FRC6RefVarT1UlUc+0xb14>
        165c50:	e1a01004 	mov	r1, r4
        165c54:	e59d0014 	ldr	r0, [sp, #20]
        165c58:	e5900000 	ldr	r0, [r0]
        165c5c:	eb69797c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        165c60:	e3100003 	tst	r0, #3	; 0x3
        165c64:	01a00140 	moveq	r0, r0, asr #2
        165c68:	0a000000 	beq	165c70 <MakeBlockView__FRC6RefVarT1UlUc+0xa38>
        165c6c:	eb69712a 	bl	1bc211c <$_RINTError(long)>
        165c70:	e0866000 	add	r6, r6, r0
        165c74:	e3580000 	cmp	r8, #0	; 0x0
        165c78:	1a000019 	bne	165ce4 <MakeBlockView__FRC6RefVarT1UlUc+0xaac>
        165c7c:	e1570006 	cmp	r7, r6
        165c80:	2a00002d 	bcs	165d3c <MakeBlockView__FRC6RefVarT1UlUc+0xb04>
        165c84:	e24dd008 	sub	sp, sp, #8	; 0x8
        165c88:	e0460007 	sub	r0, r6, r7
        165c8c:	e1a00100 	mov	r0, r0, lsl #2
        165c90:	eb69712d 	bl	1bc214c <$AllocateRefHandle(long)>
        165c94:	e58d0000 	str	r0, [sp]
        165c98:	e1a0100d 	mov	r1, sp
        165c9c:	e28d0008 	add	r0, sp, #8	; 0x8
        165ca0:	eb697120 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        165ca4:	e59d0000 	ldr	r0, [sp]
        165ca8:	eb697543 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165cac:	e2841001 	add	r1, r4, #1	; 0x1
        165cb0:	e59d001c 	ldr	r0, [sp, #28]
        165cb4:	e5900000 	ldr	r0, [r0]
        165cb8:	eb697965 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        165cbc:	eb697122 	bl	1bc214c <$AllocateRefHandle(long)>
        165cc0:	e58d0004 	str	r0, [sp, #4]
        165cc4:	e28d1004 	add	r1, sp, #4	; 0x4
        165cc8:	e28d0008 	add	r0, sp, #8	; 0x8
        165ccc:	eb697115 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        165cd0:	e59d0004 	ldr	r0, [sp, #4]
        165cd4:	eb697538 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165cd8:	e3a08001 	mov	r8, #1	; 0x1
        165cdc:	ea000015 	b	165d38 <MakeBlockView__FRC6RefVarT1UlUc+0xb00>
        165ce0:	00684930 	rsbeq	r4, r8, r0, lsr r9
        165ce4:	0a000014 	beq	165d3c <MakeBlockView__FRC6RefVarT1UlUc+0xb04>
        165ce8:	e24dd008 	sub	sp, sp, #8	; 0x8
        165cec:	e1a00100 	mov	r0, r0, lsl #2
        165cf0:	eb697115 	bl	1bc214c <$AllocateRefHandle(long)>
        165cf4:	e58d0000 	str	r0, [sp]
        165cf8:	e1a0100d 	mov	r1, sp
        165cfc:	e28d0008 	add	r0, sp, #8	; 0x8
        165d00:	eb697108 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        165d04:	e59d0000 	ldr	r0, [sp]
        165d08:	eb69752b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165d0c:	e2841001 	add	r1, r4, #1	; 0x1
        165d10:	e59d001c 	ldr	r0, [sp, #28]
        165d14:	e5900000 	ldr	r0, [r0]
        165d18:	eb69794d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        165d1c:	eb69710a 	bl	1bc214c <$AllocateRefHandle(long)>
        165d20:	e58d0004 	str	r0, [sp, #4]
        165d24:	e28d1004 	add	r1, sp, #4	; 0x4
        165d28:	e28d0008 	add	r0, sp, #8	; 0x8
        165d2c:	eb6970fd 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        165d30:	e59d0004 	ldr	r0, [sp, #4]
        165d34:	eb697520 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165d38:	e28dd008 	add	sp, sp, #8	; 0x8
        165d3c:	e2844002 	add	r4, r4, #2	; 0x2
        165d40:	e59d0004 	ldr	r0, [sp, #4]
        165d44:	e1540000 	cmp	r4, r0
        165d48:	baffffc0 	blt	165c50 <MakeBlockView__FRC6RefVarT1UlUc+0xa18>
        165d4c:	e1a0200d 	mov	r2, sp
        165d50:	e51f1078 	ldr	r1, [pc, #ffffff88]	; 165ce0 <MakeBlockView__FRC6RefVarT1UlUc+0xaa8>
        165d54:	e28d0028 	add	r0, sp, #40	; 0x28
        165d58:	eb698182 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165d5c:	e59d0000 	ldr	r0, [sp]
        165d60:	eb697515 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165d64:	e28dd008 	add	sp, sp, #8	; 0x8
        165d68:	ea000012 	b	165db8 <MakeBlockView__FRC6RefVarT1UlUc+0xb80>
        165d6c:	e59f4078 	ldr	r4, [pc, #78]	; 165dec <MakeBlockView__FRC6RefVarT1UlUc+0xbb4>
        165d70:	e5940000 	ldr	r0, [r4]
        165d74:	e5901000 	ldr	r1, [r0]
        165d78:	e59d0024 	ldr	r0, [sp, #36]
        165d7c:	e5900000 	ldr	r0, [r0]
        165d80:	eb697930 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        165d84:	e3300000 	teq	r0, #0	; 0x0
        165d88:	0a00000a 	beq	165db8 <MakeBlockView__FRC6RefVarT1UlUc+0xb80>
        165d8c:	e5940000 	ldr	r0, [r4]
        165d90:	e5901000 	ldr	r1, [r0]
        165d94:	e59d0024 	ldr	r0, [sp, #36]
        165d98:	e5900000 	ldr	r0, [r0]
        165d9c:	eb69792f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165da0:	e59d100c 	ldr	r1, [sp, #12]
        165da4:	e28d200c 	add	r2, sp, #12	; 0xc
        165da8:	e5810000 	str	r0, [r1]
        165dac:	e1a01004 	mov	r1, r4
        165db0:	e28d0020 	add	r0, sp, #32	; 0x20
        165db4:	eb69816b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165db8:	e59f4030 	ldr	r4, [pc, #30]	; 165df0 <MakeBlockView__FRC6RefVarT1UlUc+0xbb8>
        165dbc:	e5940000 	ldr	r0, [r4]
        165dc0:	e5901000 	ldr	r1, [r0]
        165dc4:	e59d0024 	ldr	r0, [sp, #36]
        165dc8:	e5900000 	ldr	r0, [r0]
        165dcc:	eb697923 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165dd0:	e59d100c 	ldr	r1, [sp, #12]
        165dd4:	e5810000 	str	r0, [r1]
        165dd8:	e3300002 	teq	r0, #2	; 0x2
        165ddc:	128d200c 	addne	r2, sp, #12	; 0xc
        165de0:	11a01004 	movne	r1, r4
        165de4:	1a000007 	bne	165e08 <MakeBlockView__FRC6RefVarT1UlUc+0xbd0>
        165de8:	ea00017f 	b	1663ec <MakeBlockView__FRC6RefVarT1UlUc+0x11b4>
        165dec:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        165df0:	00684a18 	rsbeq	r4, r8, r8, lsl sl
        165df4:	e51fc47c 	ldr	ip, [pc, #fffffb84]	; 165980 <MakeBlockView__FRC6RefVarT1UlUc+0x748>
        165df8:	e134000c 	teq	r4, ip
        165dfc:	1a000004 	bne	165e14 <MakeBlockView__FRC6RefVarT1UlUc+0xbdc>
        165e00:	e28d2018 	add	r2, sp, #24	; 0x18
        165e04:	e51f1240 	ldr	r1, [pc, #fffffdc0]	; 165bcc <MakeBlockView__FRC6RefVarT1UlUc+0x994>
        165e08:	e28d0020 	add	r0, sp, #32	; 0x20
        165e0c:	eb698155 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        165e10:	ea000175 	b	1663ec <MakeBlockView__FRC6RefVarT1UlUc+0x11b4>
        165e14:	e51fc36c 	ldr	ip, [pc, #fffffc94]	; 165ab0 <MakeBlockView__FRC6RefVarT1UlUc+0x878>
        165e18:	e134000c 	teq	r4, ip
        165e1c:	1a000172 	bne	1663ec <MakeBlockView__FRC6RefVarT1UlUc+0x11b4>
        165e20:	e24dd010 	sub	sp, sp, #16	; 0x10
        165e24:	e51f05f8 	ldr	r0, [pc, #fffffa08]	; 165834 <MakeBlockView__FRC6RefVarT1UlUc+0x5fc>
        165e28:	e5900000 	ldr	r0, [r0]
        165e2c:	e5901000 	ldr	r1, [r0]
        165e30:	e5990000 	ldr	r0, [r9]
        165e34:	eb697909 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165e38:	eb6970c3 	bl	1bc214c <$AllocateRefHandle(long)>
        165e3c:	e1a04000 	mov	r4, r0
        165e40:	e3a01000 	mov	r1, #0	; 0x0
        165e44:	e5900000 	ldr	r0, [r0]
        165e48:	eb697901 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        165e4c:	e3100003 	tst	r0, #3	; 0x3
        165e50:	01a00140 	moveq	r0, r0, asr #2
        165e54:	0a000000 	beq	165e5c <MakeBlockView__FRC6RefVarT1UlUc+0xc24>
        165e58:	eb6970af 	bl	1bc211c <$_RINTError(long)>
        165e5c:	e5cd0003 	strb	r0, [sp, #3]
        165e60:	e1a00440 	mov	r0, r0, asr #8
        165e64:	e5cd0002 	strb	r0, [sp, #2]
        165e68:	e3a01001 	mov	r1, #1	; 0x1
        165e6c:	e5940000 	ldr	r0, [r4]
        165e70:	eb6978f7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        165e74:	e3100003 	tst	r0, #3	; 0x3
        165e78:	01a00140 	moveq	r0, r0, asr #2
        165e7c:	0a000000 	beq	165e84 <MakeBlockView__FRC6RefVarT1UlUc+0xc4c>
        165e80:	eb6970a5 	bl	1bc211c <$_RINTError(long)>
        165e84:	e5cd0001 	strb	r0, [sp, #1]
        165e88:	e1a00440 	mov	r0, r0, asr #8
        165e8c:	e5cd0000 	strb	r0, [sp]
        165e90:	e3a01002 	mov	r1, #2	; 0x2
        165e94:	e5940000 	ldr	r0, [r4]
        165e98:	eb6978ed 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        165e9c:	e3100003 	tst	r0, #3	; 0x3
        165ea0:	01a00140 	moveq	r0, r0, asr #2
        165ea4:	0a000000 	beq	165eac <MakeBlockView__FRC6RefVarT1UlUc+0xc74>
        165ea8:	eb69709b 	bl	1bc211c <$_RINTError(long)>
        165eac:	e5cd0007 	strb	r0, [sp, #7]
        165eb0:	e1a00440 	mov	r0, r0, asr #8
        165eb4:	e5cd0006 	strb	r0, [sp, #6]
        165eb8:	e3a01003 	mov	r1, #3	; 0x3
        165ebc:	e5940000 	ldr	r0, [r4]
        165ec0:	eb6978e3 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        165ec4:	e3100003 	tst	r0, #3	; 0x3
        165ec8:	01a00140 	moveq	r0, r0, asr #2
        165ecc:	0a000000 	beq	165ed4 <MakeBlockView__FRC6RefVarT1UlUc+0xc9c>
        165ed0:	eb697091 	bl	1bc211c <$_RINTError(long)>
        165ed4:	e5cd0005 	strb	r0, [sp, #5]
        165ed8:	e1a00440 	mov	r0, r0, asr #8
        165edc:	e5cd0004 	strb	r0, [sp, #4]
        165ee0:	e28d0028 	add	r0, sp, #40	; 0x28
        165ee4:	eb69709f 	bl	1bc2168 <$ClassOf(RefVar const &)>
        165ee8:	eb697097 	bl	1bc214c <$AllocateRefHandle(long)>
        165eec:	e1a07000 	mov	r7, r0
        165ef0:	e59f007c 	ldr	r0, [pc, #7c]	; 165f74 <MakeBlockView__FRC6RefVarT1UlUc+0xd3c>
        165ef4:	e5900000 	ldr	r0, [r0]
        165ef8:	e5901000 	ldr	r1, [r0]
        165efc:	e5970000 	ldr	r0, [r7]
        165f00:	eb6978ca 	bl	1bc4230 <$EQRef__FlT1>
        165f04:	e1b08000 	movs	r8, r0
        165f08:	13a08001 	movne	r8, #1	; 0x1
        165f0c:	e1a00007 	mov	r0, r7
        165f10:	eb6974a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165f14:	e3a07000 	mov	r7, #0	; 0x0
        165f18:	e3380000 	teq	r8, #0	; 0x0
        165f1c:	0a000015 	beq	165f78 <MakeBlockView__FRC6RefVarT1UlUc+0xd40>
        165f20:	e24dd008 	sub	sp, sp, #8	; 0x8
        165f24:	e28d1030 	add	r1, sp, #48	; 0x30
        165f28:	e1a0000d 	mov	r0, sp
        165f2c:	eb696c69 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        165f30:	e1a0100d 	mov	r1, sp
        165f34:	e28d0004 	add	r0, sp, #4	; 0x4
        165f38:	eb696c65 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        165f3c:	e1a0000d 	mov	r0, sp
        165f40:	e3a01000 	mov	r1, #0	; 0x0
        165f44:	eb69706d 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        165f48:	e28d0004 	add	r0, sp, #4	; 0x4
        165f4c:	eb697070 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        165f50:	e2800002 	add	r0, r0, #2	; 0x2
        165f54:	e28d1010 	add	r1, sp, #16	; 0x10
        165f58:	e3a02008 	mov	r2, #8	; 0x8
        165f5c:	eb69e3fc 	bl	1bdef54 <$BlockMove>
        165f60:	e28d0004 	add	r0, sp, #4	; 0x4
        165f64:	e3a01000 	mov	r1, #0	; 0x0
        165f68:	eb697064 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        165f6c:	e28dd008 	add	sp, sp, #8	; 0x8
        165f70:	ea000020 	b	165ff8 <MakeBlockView__FRC6RefVarT1UlUc+0xdc0>
        165f74:	00683ec0 	rsbeq	r3, r8, r0, asr #29
        165f78:	e59f83dc 	ldr	r8, [pc, #3dc]	; 16635c <MakeBlockView__FRC6RefVarT1UlUc+0x1124>
        165f7c:	e5980000 	ldr	r0, [r8]
        165f80:	e5901000 	ldr	r1, [r0]
        165f84:	e59d0028 	ldr	r0, [sp, #40]
        165f88:	e5900000 	ldr	r0, [r0]
        165f8c:	eb6978ad 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        165f90:	e3300000 	teq	r0, #0	; 0x0
        165f94:	0a000017 	beq	165ff8 <MakeBlockView__FRC6RefVarT1UlUc+0xdc0>
        165f98:	e5980000 	ldr	r0, [r8]
        165f9c:	e5901000 	ldr	r1, [r0]
        165fa0:	e59d0028 	ldr	r0, [sp, #40]
        165fa4:	e5900000 	ldr	r0, [r0]
        165fa8:	eb6978ac 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165fac:	eb697066 	bl	1bc214c <$AllocateRefHandle(long)>
        165fb0:	e1a08000 	mov	r8, r0
        165fb4:	e24dd004 	sub	sp, sp, #4	; 0x4
        165fb8:	e51f078c 	ldr	r0, [pc, #fffff874]	; 165834 <MakeBlockView__FRC6RefVarT1UlUc+0x5fc>
        165fbc:	e5900000 	ldr	r0, [r0]
        165fc0:	e5901000 	ldr	r1, [r0]
        165fc4:	e59d002c 	ldr	r0, [sp, #44]
        165fc8:	e5900000 	ldr	r0, [r0]
        165fcc:	eb6978a3 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        165fd0:	eb69705d 	bl	1bc214c <$AllocateRefHandle(long)>
        165fd4:	e58d0000 	str	r0, [sp]
        165fd8:	e28d100c 	add	r1, sp, #12	; 0xc
        165fdc:	e1a0000d 	mov	r0, sp
        165fe0:	eb64baa4 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        165fe4:	e59d0000 	ldr	r0, [sp]
        165fe8:	eb697473 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165fec:	e28dd004 	add	sp, sp, #4	; 0x4
        165ff0:	e1a00008 	mov	r0, r8
        165ff4:	eb697470 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        165ff8:	e59d0018 	ldr	r0, [sp, #24]
        165ffc:	e3100008 	tst	r0, #8	; 0x8
        166000:	e59f8358 	ldr	r8, [pc, #358]	; 166360 <MakeBlockView__FRC6RefVarT1UlUc+0x1128>
        166004:	059d0038 	ldreq	r0, [sp, #56]
        166008:	03300000 	teqeq	r0, #0	; 0x0
        16600c:	1a0000da 	bne	16637c <MakeBlockView__FRC6RefVarT1UlUc+0x1144>
        166010:	e59d100c 	ldr	r1, [sp, #12]
        166014:	e59d0008 	ldr	r0, [sp, #8]
        166018:	e0410000 	sub	r0, r1, r0
        16601c:	e1a00800 	mov	r0, r0, lsl #16
        166020:	e1a00840 	mov	r0, r0, asr #16
        166024:	e59d2004 	ldr	r2, [sp, #4]
        166028:	e59d1000 	ldr	r1, [sp]
        16602c:	e0421001 	sub	r1, r2, r1
        166030:	e1a01801 	mov	r1, r1, lsl #16
        166034:	e1500841 	cmp	r0, r1, asr #16
        166038:	ca00000a 	bgt	166068 <MakeBlockView__FRC6RefVarT1UlUc+0xe30>
        16603c:	e59d100e 	ldr	r1, [sp, #14]
        166040:	e59d000a 	ldr	r0, [sp, #10]
        166044:	e0410000 	sub	r0, r1, r0
        166048:	e1a00800 	mov	r0, r0, lsl #16
        16604c:	e1a00840 	mov	r0, r0, asr #16
        166050:	e59d1006 	ldr	r1, [sp, #6]
        166054:	e59d2002 	ldr	r2, [sp, #2]
        166058:	e0411002 	sub	r1, r1, r2
        16605c:	e1a01801 	mov	r1, r1, lsl #16
        166060:	e1500841 	cmp	r0, r1, asr #16
        166064:	da0000c4 	ble	16637c <MakeBlockView__FRC6RefVarT1UlUc+0x1144>
        166068:	e59f22f4 	ldr	r2, [pc, #2f4]	; 166364 <MakeBlockView__FRC6RefVarT1UlUc+0x112c>
        16606c:	e51f14a8 	ldr	r1, [pc, #fffffb58]	; 165bcc <MakeBlockView__FRC6RefVarT1UlUc+0x994>
        166070:	e28d0030 	add	r0, sp, #48	; 0x30
        166074:	eb6980bb 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        166078:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        16607c:	eb69702f 	bl	1bc2140 <$AllocateFrame(void)>
        166080:	eb697031 	bl	1bc214c <$AllocateRefHandle(long)>
        166084:	e58d0018 	str	r0, [sp, #24]
        166088:	eb69702c 	bl	1bc2140 <$AllocateFrame(void)>
        16608c:	eb69702e 	bl	1bc214c <$AllocateRefHandle(long)>
        166090:	e58d0014 	str	r0, [sp, #20]
        166094:	e59f22cc 	ldr	r2, [pc, #2cc]	; 166368 <MakeBlockView__FRC6RefVarT1UlUc+0x1130>
        166098:	e51f14d4 	ldr	r1, [pc, #fffffb2c]	; 165bcc <MakeBlockView__FRC6RefVarT1UlUc+0x994>
        16609c:	e28d0018 	add	r0, sp, #24	; 0x18
        1660a0:	eb6980b0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1660a4:	e28d2044 	add	r2, sp, #68	; 0x44
        1660a8:	e1a01008 	mov	r1, r8
        1660ac:	e28d0018 	add	r0, sp, #24	; 0x18
        1660b0:	eb6980ac 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1660b4:	e1a00007 	mov	r0, r7
        1660b8:	eb697023 	bl	1bc214c <$AllocateRefHandle(long)>
        1660bc:	e58d0000 	str	r0, [sp]
        1660c0:	e1a0200d 	mov	r2, sp
        1660c4:	e51f8890 	ldr	r8, [pc, #fffff770]	; 16583c <MakeBlockView__FRC6RefVarT1UlUc+0x604>
        1660c8:	e1a01008 	mov	r1, r8
        1660cc:	e28d0014 	add	r0, sp, #20	; 0x14
        1660d0:	eb6980a4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1660d4:	e59d0000 	ldr	r0, [sp]
        1660d8:	eb697437 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1660dc:	e1a00007 	mov	r0, r7
        1660e0:	eb697019 	bl	1bc214c <$AllocateRefHandle(long)>
        1660e4:	e58d0004 	str	r0, [sp, #4]
        1660e8:	e28d2004 	add	r2, sp, #4	; 0x4
        1660ec:	e51f18bc 	ldr	r1, [pc, #fffff744]	; 165838 <MakeBlockView__FRC6RefVarT1UlUc+0x600>
        1660f0:	e28d0014 	add	r0, sp, #20	; 0x14
        1660f4:	eb69809b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1660f8:	e59d0004 	ldr	r0, [sp, #4]
        1660fc:	eb69742e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166100:	e59d0022 	ldr	r0, [sp, #34]
        166104:	e59d101e 	ldr	r1, [sp, #30]
        166108:	e0400001 	sub	r0, r0, r1
        16610c:	e1a00800 	mov	r0, r0, lsl #16
        166110:	e1a00840 	mov	r0, r0, asr #16
        166114:	e1a00100 	mov	r0, r0, lsl #2
        166118:	eb69700b 	bl	1bc214c <$AllocateRefHandle(long)>
        16611c:	e58d0008 	str	r0, [sp, #8]
        166120:	e28d2008 	add	r2, sp, #8	; 0x8
        166124:	e51f18e8 	ldr	r1, [pc, #fffff718]	; 165844 <MakeBlockView__FRC6RefVarT1UlUc+0x60c>
        166128:	e28d0014 	add	r0, sp, #20	; 0x14
        16612c:	eb69808d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        166130:	e59d0008 	ldr	r0, [sp, #8]
        166134:	eb697420 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166138:	e59d0020 	ldr	r0, [sp, #32]
        16613c:	e59d101c 	ldr	r1, [sp, #28]
        166140:	e0400001 	sub	r0, r0, r1
        166144:	e1a00800 	mov	r0, r0, lsl #16
        166148:	e1a00840 	mov	r0, r0, asr #16
        16614c:	e1a00100 	mov	r0, r0, lsl #2
        166150:	eb696ffd 	bl	1bc214c <$AllocateRefHandle(long)>
        166154:	e58d000c 	str	r0, [sp, #12]
        166158:	e28d200c 	add	r2, sp, #12	; 0xc
        16615c:	e51f1924 	ldr	r1, [pc, #fffff6dc]	; 165840 <MakeBlockView__FRC6RefVarT1UlUc+0x608>
        166160:	e28d0014 	add	r0, sp, #20	; 0x14
        166164:	eb69807f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        166168:	e59d000c 	ldr	r0, [sp, #12]
        16616c:	eb697412 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166170:	e28d2014 	add	r2, sp, #20	; 0x14
        166174:	e51f1808 	ldr	r1, [pc, #fffff7f8]	; 165974 <MakeBlockView__FRC6RefVarT1UlUc+0x73c>
        166178:	e28d0018 	add	r0, sp, #24	; 0x18
        16617c:	eb698079 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        166180:	e1a00106 	mov	r0, r6, lsl #2
        166184:	eb696ff0 	bl	1bc214c <$AllocateRefHandle(long)>
        166188:	e58d0010 	str	r0, [sp, #16]
        16618c:	e28d2010 	add	r2, sp, #16	; 0x10
        166190:	e51f1968 	ldr	r1, [pc, #fffff698]	; 165830 <MakeBlockView__FRC6RefVarT1UlUc+0x5f8>
        166194:	e28d0018 	add	r0, sp, #24	; 0x18
        166198:	eb698072 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        16619c:	e59d0010 	ldr	r0, [sp, #16]
        1661a0:	eb697405 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1661a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1661a8:	e59f01bc 	ldr	r0, [pc, #1bc]	; 16636c <MakeBlockView__FRC6RefVarT1UlUc+0x1134>
        1661ac:	e3a01000 	mov	r1, #0	; 0x0
        1661b0:	eb696fe0 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1661b4:	eb696fe4 	bl	1bc214c <$AllocateRefHandle(long)>
        1661b8:	e58d0000 	str	r0, [sp]
        1661bc:	e28d101c 	add	r1, sp, #28	; 0x1c
        1661c0:	e1a0000d 	mov	r0, sp
        1661c4:	eb696fd7 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        1661c8:	e24dd014 	sub	sp, sp, #20	; 0x14
        1661cc:	eb696fdb 	bl	1bc2140 <$AllocateFrame(void)>
        1661d0:	eb696fdd 	bl	1bc214c <$AllocateRefHandle(long)>
        1661d4:	e58d0010 	str	r0, [sp, #16]
        1661d8:	e1a00007 	mov	r0, r7
        1661dc:	eb696fda 	bl	1bc214c <$AllocateRefHandle(long)>
        1661e0:	e58d0000 	str	r0, [sp]
        1661e4:	e1a0200d 	mov	r2, sp
        1661e8:	e1a01008 	mov	r1, r8
        1661ec:	e28d0010 	add	r0, sp, #16	; 0x10
        1661f0:	eb69805c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1661f4:	e59d0000 	ldr	r0, [sp]
        1661f8:	eb6973ef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1661fc:	e1a00007 	mov	r0, r7
        166200:	eb696fd1 	bl	1bc214c <$AllocateRefHandle(long)>
        166204:	e58d0004 	str	r0, [sp, #4]
        166208:	e28d2004 	add	r2, sp, #4	; 0x4
        16620c:	e51f19dc 	ldr	r1, [pc, #fffff624]	; 165838 <MakeBlockView__FRC6RefVarT1UlUc+0x600>
        166210:	e28d0010 	add	r0, sp, #16	; 0x10
        166214:	eb698053 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        166218:	e59d0004 	ldr	r0, [sp, #4]
        16621c:	eb6973e6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166220:	e59d1042 	ldr	r1, [sp, #66]
        166224:	e59d003e 	ldr	r0, [sp, #62]
        166228:	e0410000 	sub	r0, r1, r0
        16622c:	e1a00800 	mov	r0, r0, lsl #16
        166230:	e1a00840 	mov	r0, r0, asr #16
        166234:	e1a00100 	mov	r0, r0, lsl #2
        166238:	eb696fc3 	bl	1bc214c <$AllocateRefHandle(long)>
        16623c:	e58d0008 	str	r0, [sp, #8]
        166240:	e28d2008 	add	r2, sp, #8	; 0x8
        166244:	e51f1a08 	ldr	r1, [pc, #fffff5f8]	; 165844 <MakeBlockView__FRC6RefVarT1UlUc+0x60c>
        166248:	e28d0010 	add	r0, sp, #16	; 0x10
        16624c:	eb698045 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        166250:	e59d0008 	ldr	r0, [sp, #8]
        166254:	eb6973d8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166258:	e59d0040 	ldr	r0, [sp, #64]
        16625c:	e59d103c 	ldr	r1, [sp, #60]
        166260:	e0400001 	sub	r0, r0, r1
        166264:	e1a00800 	mov	r0, r0, lsl #16
        166268:	e1a00840 	mov	r0, r0, asr #16
        16626c:	e1a00100 	mov	r0, r0, lsl #2
        166270:	eb696fb5 	bl	1bc214c <$AllocateRefHandle(long)>
        166274:	e58d000c 	str	r0, [sp, #12]
        166278:	e28d200c 	add	r2, sp, #12	; 0xc
        16627c:	e51f1a44 	ldr	r1, [pc, #fffff5bc]	; 165840 <MakeBlockView__FRC6RefVarT1UlUc+0x608>
        166280:	e28d0010 	add	r0, sp, #16	; 0x10
        166284:	eb698037 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        166288:	e59d000c 	ldr	r0, [sp, #12]
        16628c:	eb6973ca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166290:	e28d2010 	add	r2, sp, #16	; 0x10
        166294:	e59f10d4 	ldr	r1, [pc, #d4]	; 166370 <MakeBlockView__FRC6RefVarT1UlUc+0x1138>
        166298:	e28d0030 	add	r0, sp, #48	; 0x30
        16629c:	eb698031 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1662a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1662a4:	eb696fa5 	bl	1bc2140 <$AllocateFrame(void)>
        1662a8:	eb696fa7 	bl	1bc214c <$AllocateRefHandle(long)>
        1662ac:	e58d0000 	str	r0, [sp]
        1662b0:	e59f20bc 	ldr	r2, [pc, #bc]	; 166374 <MakeBlockView__FRC6RefVarT1UlUc+0x113c>
        1662b4:	e51f16f0 	ldr	r1, [pc, #fffff910]	; 165bcc <MakeBlockView__FRC6RefVarT1UlUc+0x994>
        1662b8:	e1a0000d 	mov	r0, sp
        1662bc:	eb698029 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1662c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1662c4:	e59f60ac 	ldr	r6, [pc, #ac]	; 166378 <MakeBlockView__FRC6RefVarT1UlUc+0x1140>
        1662c8:	e5960000 	ldr	r0, [r6]
        1662cc:	e5901000 	ldr	r1, [r0]
        1662d0:	e59d0070 	ldr	r0, [sp, #112]
        1662d4:	e5900000 	ldr	r0, [r0]
        1662d8:	eb6977e0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1662dc:	eb696f9a 	bl	1bc214c <$AllocateRefHandle(long)>
        1662e0:	e58d0000 	str	r0, [sp]
        1662e4:	e5900000 	ldr	r0, [r0]
        1662e8:	e3300002 	teq	r0, #2	; 0x2
        1662ec:	0a000003 	beq	166300 <MakeBlockView__FRC6RefVarT1UlUc+0x10c8>
        1662f0:	e1a0200d 	mov	r2, sp
        1662f4:	e1a01006 	mov	r1, r6
        1662f8:	e28d0004 	add	r0, sp, #4	; 0x4
        1662fc:	eb698019 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        166300:	e28d1004 	add	r1, sp, #4	; 0x4
        166304:	e28d001c 	add	r0, sp, #28	; 0x1c
        166308:	eb696f86 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        16630c:	e28d201c 	add	r2, sp, #28	; 0x1c
        166310:	e59f1054 	ldr	r1, [pc, #54]	; 16636c <MakeBlockView__FRC6RefVarT1UlUc+0x1134>
        166314:	e28d006c 	add	r0, sp, #108	; 0x6c
        166318:	eb698012 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        16631c:	e59d0000 	ldr	r0, [sp]
        166320:	eb6973a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166324:	e5bd0004 	ldr	r0, [sp, #4]!
        166328:	eb6973a3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16632c:	e28dd004 	add	sp, sp, #4	; 0x4
        166330:	e59d0010 	ldr	r0, [sp, #16]
        166334:	eb6973a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166338:	e5bd0014 	ldr	r0, [sp, #20]!
        16633c:	eb69739e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166340:	e28dd004 	add	sp, sp, #4	; 0x4
        166344:	e59d0014 	ldr	r0, [sp, #20]
        166348:	eb69739b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16634c:	e59d0018 	ldr	r0, [sp, #24]
        166350:	eb697399 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166354:	e28dd01c 	add	sp, sp, #28	; 0x1c
        166358:	ea000020 	b	1663e0 <MakeBlockView__FRC6RefVarT1UlUc+0x11a8>
        16635c:	006820d8 	ldreqd	r2, [r8], -#8
        166360:	00683150 	rsbeq	r3, r8, r0, asr r1
        166364:	00681ad0 	ldreqd	r1, [r8], -#160
        166368:	006819b8 	streqh	r1, [r8], -#152
        16636c:	00684f28 	rsbeq	r4, r8, r8, lsr #30
        166370:	006827b0 	streqh	r2, [r8], -#112
        166374:	00680bb0 	streqh	r0, [r8], -#176
        166378:	006844b0 	streqh	r4, [r8], -#64
        16637c:	e24dd008 	sub	sp, sp, #8	; 0x8
        166380:	e3a00e13 	mov	r0, #304	; 0x130
        166384:	eb696f70 	bl	1bc214c <$AllocateRefHandle(long)>
        166388:	e58d0000 	str	r0, [sp]
        16638c:	e1a0200d 	mov	r2, sp
        166390:	e59f119c 	ldr	r1, [pc, #19c]	; 166534 <MakeBlockView__FRC6RefVarT1UlUc+0x12fc>
        166394:	e28d0038 	add	r0, sp, #56	; 0x38
        166398:	eb697ff2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        16639c:	e59d0000 	ldr	r0, [sp]
        1663a0:	eb697385 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1663a4:	e3a00004 	mov	r0, #4	; 0x4
        1663a8:	e2800b02 	add	r0, r0, #2048	; 0x800
        1663ac:	eb696f66 	bl	1bc214c <$AllocateRefHandle(long)>
        1663b0:	e58d0004 	str	r0, [sp, #4]
        1663b4:	e28d2004 	add	r2, sp, #4	; 0x4
        1663b8:	e59f1178 	ldr	r1, [pc, #178]	; 166538 <MakeBlockView__FRC6RefVarT1UlUc+0x1300>
        1663bc:	e28d0038 	add	r0, sp, #56	; 0x38
        1663c0:	eb697fe8 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1663c4:	e59d0004 	ldr	r0, [sp, #4]
        1663c8:	eb69737b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1663cc:	e28d2030 	add	r2, sp, #48	; 0x30
        1663d0:	e1a01008 	mov	r1, r8
        1663d4:	e28d0038 	add	r0, sp, #56	; 0x38
        1663d8:	eb697fe2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1663dc:	e28dd008 	add	sp, sp, #8	; 0x8
        1663e0:	e1a00004 	mov	r0, r4
        1663e4:	eb697374 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1663e8:	e28dd010 	add	sp, sp, #16	; 0x10
        1663ec:	e59f4148 	ldr	r4, [pc, #148]	; 16653c <MakeBlockView__FRC6RefVarT1UlUc+0x1304>
        1663f0:	e5940000 	ldr	r0, [r4]
        1663f4:	e5901000 	ldr	r1, [r0]
        1663f8:	e59d0024 	ldr	r0, [sp, #36]
        1663fc:	e5900000 	ldr	r0, [r0]
        166400:	eb697790 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        166404:	e3300000 	teq	r0, #0	; 0x0
        166408:	0a000022 	beq	166498 <MakeBlockView__FRC6RefVarT1UlUc+0x1260>
        16640c:	e5940000 	ldr	r0, [r4]
        166410:	e5901000 	ldr	r1, [r0]
        166414:	e59d0024 	ldr	r0, [sp, #36]
        166418:	e5900000 	ldr	r0, [r0]
        16641c:	eb69778f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        166420:	e3a04000 	mov	r4, #0	; 0x0
        166424:	e58a0000 	str	r0, [sl]
        166428:	eb697b9f 	bl	1bc52ac <$Length(long)>
        16642c:	e3500000 	cmp	r0, #0	; 0x0
        166430:	da000018 	ble	166498 <MakeBlockView__FRC6RefVarT1UlUc+0x1260>
        166434:	e24dd008 	sub	sp, sp, #8	; 0x8
        166438:	e1a01004 	mov	r1, r4
        16643c:	e59a0000 	ldr	r0, [sl]
        166440:	eb697783 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        166444:	eb696f40 	bl	1bc214c <$AllocateRefHandle(long)>
        166448:	e2841001 	add	r1, r4, #1	; 0x1
        16644c:	e58d0004 	str	r0, [sp, #4]
        166450:	e59a0000 	ldr	r0, [sl]
        166454:	eb69777e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        166458:	eb696f3b 	bl	1bc214c <$AllocateRefHandle(long)>
        16645c:	e58d0000 	str	r0, [sp]
        166460:	e1a0200d 	mov	r2, sp
        166464:	e28d1004 	add	r1, sp, #4	; 0x4
        166468:	e28d0028 	add	r0, sp, #40	; 0x28
        16646c:	eb697fbd 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        166470:	e59d0000 	ldr	r0, [sp]
        166474:	eb697350 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166478:	e59d0004 	ldr	r0, [sp, #4]
        16647c:	eb69734e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166480:	e28dd008 	add	sp, sp, #8	; 0x8
        166484:	e2844002 	add	r4, r4, #2	; 0x2
        166488:	e59a0000 	ldr	r0, [sl]
        16648c:	eb697b86 	bl	1bc52ac <$Length(long)>
        166490:	e1500004 	cmp	r0, r4
        166494:	caffffe6 	bgt	166434 <MakeBlockView__FRC6RefVarT1UlUc+0x11fc>
        166498:	e59f40a0 	ldr	r4, [pc, #a0]	; 166540 <MakeBlockView__FRC6RefVarT1UlUc+0x1308>
        16649c:	e5940000 	ldr	r0, [r4]
        1664a0:	e5901000 	ldr	r1, [r0]
        1664a4:	e59d0024 	ldr	r0, [sp, #36]
        1664a8:	e5900000 	ldr	r0, [r0]
        1664ac:	eb697765 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        1664b0:	e3300000 	teq	r0, #0	; 0x0
        1664b4:	0a00000a 	beq	1664e4 <MakeBlockView__FRC6RefVarT1UlUc+0x12ac>
        1664b8:	e5940000 	ldr	r0, [r4]
        1664bc:	e5901000 	ldr	r1, [r0]
        1664c0:	e59d0024 	ldr	r0, [sp, #36]
        1664c4:	e5900000 	ldr	r0, [r0]
        1664c8:	eb697764 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1664cc:	e59d100c 	ldr	r1, [sp, #12]
        1664d0:	e28d200c 	add	r2, sp, #12	; 0xc
        1664d4:	e5810000 	str	r0, [r1]
        1664d8:	e1a01004 	mov	r1, r4
        1664dc:	e28d0020 	add	r0, sp, #32	; 0x20
        1664e0:	eb697fa0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1664e4:	e59d0020 	ldr	r0, [sp, #32]
        1664e8:	e5904000 	ldr	r4, [r0]
        1664ec:	e1a0000a 	mov	r0, sl
        1664f0:	eb697331 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1664f4:	e59d000c 	ldr	r0, [sp, #12]
        1664f8:	eb69732f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1664fc:	e59d0018 	ldr	r0, [sp, #24]
        166500:	eb69732d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166504:	e1a00005 	mov	r0, r5
        166508:	eb69732b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16650c:	e59d001c 	ldr	r0, [sp, #28]
        166510:	eb697329 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166514:	e59d0020 	ldr	r0, [sp, #32]
        166518:	eb697327 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16651c:	e59d0024 	ldr	r0, [sp, #36]
        166520:	eb697325 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        166524:	e1a00009 	mov	r0, r9
        166528:	eb697323 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16652c:	e1a00004 	mov	r0, r4
        166530:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        166534:	00684f30 	rsbeq	r4, r8, r0, lsr pc
        166538:	00684fc0 	rsbeq	r4, r8, r0, asr #31
        16653c:	006844a8 	rsbeq	r4, r8, r8, lsr #9
        166540:	00684258 	rsbeq	r4, r8, r8, asr r2
    */
}

/**
 * Symbol: MinWidthToIntuitTab(unsigned short const *, TRect const &)
 * Address: 001733e4
 */
MinWidthToIntuitTab(unsigned short const *, TRect const &) {
    /*
        1733e4:	e1a0c00d 	mov	ip, sp
        1733e8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1733ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1733f0:	e1a05000 	mov	r5, r0
        1733f4:	e1a04001 	mov	r4, r1
        1733f8:	e3a07000 	mov	r7, #0	; 0x0
        1733fc:	eb69ecd7 	bl	1bee760 <$Ustrlen>
        173400:	e1a06000 	mov	r6, r0
        173404:	e3a00000 	mov	r0, #0	; 0x0
        173408:	e3560000 	cmp	r6, #0	; 0x0
        17340c:	da000008 	ble	173434 <MinWidthToIntuitTab(unsigned short const *, TRect const &)+0x50>
        173410:	e7951080 	ldr	r1, [r5, r0, lsl #1]
        173414:	e1a01821 	mov	r1, r1, lsr #16
        173418:	e3310069 	teq	r1, #105	; 0x69
        17341c:	1331006c 	teqne	r1, #108	; 0x6c
        173420:	13310049 	teqne	r1, #73	; 0x49
        173424:	02877001 	addeq	r7, r7, #1	; 0x1
        173428:	e2800001 	add	r0, r0, #1	; 0x1
        17342c:	e1500006 	cmp	r0, r6
        173430:	bafffff6 	blt	173410 <MinWidthToIntuitTab(unsigned short const *, TRect const &)+0x2c>
        173434:	e2870001 	add	r0, r7, #1	; 0x1
        173438:	e0800fa0 	add	r0, r0, r0, lsr #31
        17343c:	e05600c0 	subs	r0, r6, r0, asr #1
        173440:	03a00001 	moveq	r0, #1	; 0x1
        173444:	e5941006 	ldr	r1, [r4, #6]
        173448:	e1a01821 	mov	r1, r1, lsr #16
        17344c:	e5942002 	ldr	r2, [r4, #2]
        173450:	e1a02822 	mov	r2, r2, lsr #16
        173454:	e0411002 	sub	r1, r1, r2
        173458:	e1a01801 	mov	r1, r1, lsl #16
        17345c:	e1a01841 	mov	r1, r1, asr #16
        173460:	e1a04001 	mov	r4, r1
        173464:	eb68fd35 	bl	1bb2940 <$__rt_sdiv>
        173468:	e350000f 	cmp	r0, #15	; 0xf
        17346c:	c1a01004 	movgt	r1, r4
        173470:	c1a00006 	movgt	r0, r6
        173474:	cb68fd31 	blgt	1bb2940 <$__rt_sdiv>
        173478:	e1a00100 	mov	r0, r0, lsl #2
        17347c:	e3a01016 	mov	r1, #22	; 0x16
        173480:	e3500016 	cmp	r0, #22	; 0x16
        173484:	d1a00001 	movle	r0, r1
        173488:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MakeCompactFont__FRC6RefVarlT2
 * Address: 0017a364
 */
void globals::MakeCompactFont() {
    /*
        17a364:	e1a0c00d 	mov	ip, sp
        17a368:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        17a36c:	e24cb004 	sub	fp, ip, #4	; 0x4
        17a370:	e1a04000 	mov	r4, r0
        17a374:	e1a05001 	mov	r5, r1
        17a378:	e1a06002 	mov	r6, r2
        17a37c:	e24dd004 	sub	sp, sp, #4	; 0x4
        17a380:	e3a00002 	mov	r0, #2	; 0x2
        17a384:	eb691f70 	bl	1bc214c <$AllocateRefHandle(long)>
        17a388:	e58d0000 	str	r0, [sp]
        17a38c:	e5940000 	ldr	r0, [r4]
        17a390:	e5900000 	ldr	r0, [r0]
        17a394:	e3100003 	tst	r0, #3	; 0x3
        17a398:	11a00004 	movne	r0, r4
        17a39c:	1b655505 	blne	1acf7b8 <$FamilySymToNum(RefVar const &)>
        17a3a0:	e59d1000 	ldr	r1, [sp]
        17a3a4:	e5810000 	str	r0, [r1]
        17a3a8:	e59d0000 	ldr	r0, [sp]
        17a3ac:	e5900000 	ldr	r0, [r0]
        17a3b0:	e2001003 	and	r1, r0, #3	; 0x3
        17a3b4:	e3510000 	cmp	r1, #0	; 0x0
        17a3b8:	1a00000a 	bne	17a3e8 <MakeCompactFont__FRC6RefVarlT2+0x84>
        17a3bc:	01a00140 	moveq	r0, r0, asr #2
        17a3c0:	0a000000 	beq	17a3c8 <MakeCompactFont__FRC6RefVarlT2+0x64>
        17a3c4:	eb691f54 	bl	1bc211c <$_RINTError(long)>
        17a3c8:	e1a01505 	mov	r1, r5, lsl #10
        17a3cc:	e1811a06 	orr	r1, r1, r6, lsl #20
        17a3d0:	e1800001 	orr	r0, r0, r1
        17a3d4:	e1a04100 	mov	r4, r0, lsl #2
        17a3d8:	e59d0000 	ldr	r0, [sp]
        17a3dc:	eb692376 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a3e0:	e1a00004 	mov	r0, r4
        17a3e4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        17a3e8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        17a3ec:	e59f0094 	ldr	r0, [pc, #94]	; 17a488 <MakeCompactFont__FRC6RefVarlT2+0x124>
        17a3f0:	eb691f5d 	bl	1bc216c <$Clone(RefVar const &)>
        17a3f4:	eb691f54 	bl	1bc214c <$AllocateRefHandle(long)>
        17a3f8:	e58d0008 	str	r0, [sp, #8]
        17a3fc:	e1a00105 	mov	r0, r5, lsl #2
        17a400:	eb691f51 	bl	1bc214c <$AllocateRefHandle(long)>
        17a404:	e58d0000 	str	r0, [sp]
        17a408:	e1a0200d 	mov	r2, sp
        17a40c:	e59f1078 	ldr	r1, [pc, #78]	; 17a48c <MakeCompactFont__FRC6RefVarlT2+0x128>
        17a410:	e28d0008 	add	r0, sp, #8	; 0x8
        17a414:	eb692fd3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a418:	e59d0000 	ldr	r0, [sp]
        17a41c:	eb692366 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a420:	e1a00106 	mov	r0, r6, lsl #2
        17a424:	eb691f48 	bl	1bc214c <$AllocateRefHandle(long)>
        17a428:	e58d0004 	str	r0, [sp, #4]
        17a42c:	e28d2004 	add	r2, sp, #4	; 0x4
        17a430:	e59f1058 	ldr	r1, [pc, #58]	; 17a490 <MakeCompactFont__FRC6RefVarlT2+0x12c>
        17a434:	e28d0008 	add	r0, sp, #8	; 0x8
        17a438:	eb692fca 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a43c:	e59d0004 	ldr	r0, [sp, #4]
        17a440:	eb69235d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a444:	e5940000 	ldr	r0, [r4]
        17a448:	e5900000 	ldr	r0, [r0]
        17a44c:	e3100003 	tst	r0, #3	; 0x3
        17a450:	0b6554d7 	bleq	1acf7b4 <$FamilyNumToSym(long)>
        17a454:	e59d100c 	ldr	r1, [sp, #12]
        17a458:	e28d200c 	add	r2, sp, #12	; 0xc
        17a45c:	e5810000 	str	r0, [r1]
        17a460:	e59f102c 	ldr	r1, [pc, #2c]	; 17a494 <MakeCompactFont__FRC6RefVarlT2+0x130>
        17a464:	e28d0008 	add	r0, sp, #8	; 0x8
        17a468:	eb692fbe 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a46c:	e59d0008 	ldr	r0, [sp, #8]
        17a470:	e5904000 	ldr	r4, [r0]
        17a474:	eb692350 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a478:	e59d000c 	ldr	r0, [sp, #12]
        17a47c:	eb69234e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a480:	e1a00004 	mov	r0, r4
        17a484:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        17a488:	00680ad8 	ldreqd	r0, [r8], -#168
        17a48c:	006846a8 	rsbeq	r4, r8, r8, lsr #13
        17a490:	00682d28 	rsbeq	r2, r8, r8, lsr #26
        17a494:	00682d30 	rsbeq	r2, r8, r0, lsr sp
    */
}

/**
 * Symbol: MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)
 * Address: 0017a4d8
 */
MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char) {
    /*
        17a4d8:	e1a0c00d 	mov	ip, sp
        17a4dc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        17a4e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        17a4e4:	e1a06000 	mov	r6, r0
        17a4e8:	e1a07001 	mov	r7, r1
        17a4ec:	e1a05002 	mov	r5, r2
        17a4f0:	e1a04003 	mov	r4, r3
        17a4f4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        17a4f8:	e59f0134 	ldr	r0, [pc, #134]	; 17a634 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x15c>
        17a4fc:	eb691f1a 	bl	1bc216c <$Clone(RefVar const &)>
        17a500:	eb691f11 	bl	1bc214c <$AllocateRefHandle(long)>
        17a504:	e58d0008 	str	r0, [sp, #8]
        17a508:	e1a00005 	mov	r0, r5
        17a50c:	eb69d4a2 	bl	1bef79c <$ToObject(TRect const &)>
        17a510:	eb691f0d 	bl	1bc214c <$AllocateRefHandle(long)>
        17a514:	e58d0000 	str	r0, [sp]
        17a518:	e1a0200d 	mov	r2, sp
        17a51c:	e59f1114 	ldr	r1, [pc, #114]	; 17a638 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x160>
        17a520:	e28d0008 	add	r0, sp, #8	; 0x8
        17a524:	eb692f8f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a528:	e59d0000 	ldr	r0, [sp]
        17a52c:	eb692322 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a530:	e1a01007 	mov	r1, r7
        17a534:	e1a00006 	mov	r0, r6
        17a538:	eb648622 	bl	1a9bdc8 <$MakeString(unsigned short const *, long)>
        17a53c:	eb691f02 	bl	1bc214c <$AllocateRefHandle(long)>
        17a540:	e58d0004 	str	r0, [sp, #4]
        17a544:	e28d2004 	add	r2, sp, #4	; 0x4
        17a548:	e59f10ec 	ldr	r1, [pc, #ec]	; 17a63c <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x164>
        17a54c:	e28d0008 	add	r0, sp, #8	; 0x8
        17a550:	eb692f84 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a554:	e59d0004 	ldr	r0, [sp, #4]
        17a558:	eb692317 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a55c:	e24dd004 	sub	sp, sp, #4	; 0x4
        17a560:	e3a00002 	mov	r0, #2	; 0x2
        17a564:	eb691ef8 	bl	1bc214c <$AllocateRefHandle(long)>
        17a568:	e1a05000 	mov	r5, r0
        17a56c:	e59f00cc 	ldr	r0, [pc, #cc]	; 17a640 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x168>
        17a570:	eb647163 	bl	1a96b04 <$GetPreference(RefVar const &)>
        17a574:	eb691ef4 	bl	1bc214c <$AllocateRefHandle(long)>
        17a578:	e58d0000 	str	r0, [sp]
        17a57c:	e5940000 	ldr	r0, [r4]
        17a580:	e5900000 	ldr	r0, [r0]
        17a584:	e59f90b8 	ldr	r9, [pc, #b8]	; 17a644 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x16c>
        17a588:	e59f80b8 	ldr	r8, [pc, #b8]	; 17a648 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x170>
        17a58c:	e59f60b8 	ldr	r6, [pc, #b8]	; 17a64c <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x174>
        17a590:	e3300002 	teq	r0, #2	; 0x2
        17a594:	0a00007c 	beq	17a78c <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x2b4>
        17a598:	e1a00004 	mov	r0, r4
        17a59c:	ebfca220 	bl	a2e24 <GetJustificationOfDroppedText(RefVar const &)>
        17a5a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        17a5a4:	e3300000 	teq	r0, #0	; 0x0
        17a5a8:	13300004 	teqne	r0, #4	; 0x4
        17a5ac:	0a000008 	beq	17a5d4 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0xfc>
        17a5b0:	e1a00100 	mov	r0, r0, lsl #2
        17a5b4:	eb691ee4 	bl	1bc214c <$AllocateRefHandle(long)>
        17a5b8:	e58d0000 	str	r0, [sp]
        17a5bc:	e1a0200d 	mov	r2, sp
        17a5c0:	e59f1088 	ldr	r1, [pc, #88]	; 17a650 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x178>
        17a5c4:	e28d0010 	add	r0, sp, #16	; 0x10
        17a5c8:	eb692f66 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a5cc:	e59d0000 	ldr	r0, [sp]
        17a5d0:	eb6922f9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a5d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        17a5d8:	e1a01009 	mov	r1, r9
        17a5dc:	e1a00004 	mov	r0, r4
        17a5e0:	e3a02000 	mov	r2, #0	; 0x0
        17a5e4:	eb69271f 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        17a5e8:	eb691ed7 	bl	1bc214c <$AllocateRefHandle(long)>
        17a5ec:	e58d0000 	str	r0, [sp]
        17a5f0:	e5900000 	ldr	r0, [r0]
        17a5f4:	e3300002 	teq	r0, #2	; 0x2
        17a5f8:	0a000015 	beq	17a654 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x17c>
        17a5fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        17a600:	e5850000 	str	r0, [r5]
        17a604:	e28d0004 	add	r0, sp, #4	; 0x4
        17a608:	eb691ed7 	bl	1bc216c <$Clone(RefVar const &)>
        17a60c:	eb691ece 	bl	1bc214c <$AllocateRefHandle(long)>
        17a610:	e58d0000 	str	r0, [sp]
        17a614:	e1a0200d 	mov	r2, sp
        17a618:	e59f1024 	ldr	r1, [pc, #24]	; 17a644 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x16c>
        17a61c:	e28d0018 	add	r0, sp, #24	; 0x18
        17a620:	eb692f50 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a624:	e59d0000 	ldr	r0, [sp]
        17a628:	eb6922e3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a62c:	e28dd004 	add	sp, sp, #4	; 0x4
        17a630:	ea000011 	b	17a67c <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x1a4>
        17a634:	006808d8 	ldreqd	r0, [r8], -#136
        17a638:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        17a63c:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        17a640:	00684e48 	rsbeq	r4, r8, r8, asr #28
        17a644:	00684930 	rsbeq	r4, r8, r0, lsr r9
        17a648:	00681628 	rsbeq	r1, r8, r8, lsr #12
        17a64c:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        17a650:	00685048 	rsbeq	r5, r8, r8, asr #32
        17a654:	e1a01006 	mov	r1, r6
        17a658:	e1a00004 	mov	r0, r4
        17a65c:	e3a02000 	mov	r2, #0	; 0x0
        17a660:	eb692700 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        17a664:	e59d1000 	ldr	r1, [sp]
        17a668:	e5810000 	str	r0, [r1]
        17a66c:	e1a01000 	mov	r1, r0
        17a670:	e3300002 	teq	r0, #2	; 0x2
        17a674:	159d0008 	ldrne	r0, [sp, #8]
        17a678:	15801000 	strne	r1, [r0]
        17a67c:	e59f1174 	ldr	r1, [pc, #174]	; 17a7f8 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x320>
        17a680:	e1a00004 	mov	r0, r4
        17a684:	e3a02000 	mov	r2, #0	; 0x0
        17a688:	eb6926f6 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        17a68c:	e41d1004 	ldr	r1, [sp], -#4
        17a690:	e5810000 	str	r0, [r1]
        17a694:	e3300002 	teq	r0, #2	; 0x2
        17a698:	0a000009 	beq	17a6c4 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x1ec>
        17a69c:	e28d0004 	add	r0, sp, #4	; 0x4
        17a6a0:	eb691eb1 	bl	1bc216c <$Clone(RefVar const &)>
        17a6a4:	eb691ea8 	bl	1bc214c <$AllocateRefHandle(long)>
        17a6a8:	e58d0000 	str	r0, [sp]
        17a6ac:	e1a0200d 	mov	r2, sp
        17a6b0:	e59f1140 	ldr	r1, [pc, #140]	; 17a7f8 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x320>
        17a6b4:	e28d0018 	add	r0, sp, #24	; 0x18
        17a6b8:	eb692f2a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a6bc:	e59d0000 	ldr	r0, [sp]
        17a6c0:	eb6922bd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a6c4:	e59f1130 	ldr	r1, [pc, #130]	; 17a7fc <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x324>
        17a6c8:	e1a07001 	mov	r7, r1
        17a6cc:	e1a00004 	mov	r0, r4
        17a6d0:	e3a02000 	mov	r2, #0	; 0x0
        17a6d4:	eb6926e3 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        17a6d8:	e59d1004 	ldr	r1, [sp, #4]
        17a6dc:	e5810000 	str	r0, [r1]
        17a6e0:	e3300002 	teq	r0, #2	; 0x2
        17a6e4:	0a000019 	beq	17a750 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x278>
        17a6e8:	e1a01007 	mov	r1, r7
        17a6ec:	e1a00008 	mov	r0, r8
        17a6f0:	e3a02000 	mov	r2, #0	; 0x0
        17a6f4:	eb6926db 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        17a6f8:	eb691e93 	bl	1bc214c <$AllocateRefHandle(long)>
        17a6fc:	e1a07000 	mov	r7, r0
        17a700:	e5900000 	ldr	r0, [r0]
        17a704:	e3100003 	tst	r0, #3	; 0x3
        17a708:	01a00140 	moveq	r0, r0, asr #2
        17a70c:	0a000000 	beq	17a714 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x23c>
        17a710:	eb691e81 	bl	1bc211c <$_RINTError(long)>
        17a714:	e1a0a000 	mov	sl, r0
        17a718:	e59d0004 	ldr	r0, [sp, #4]
        17a71c:	e5900000 	ldr	r0, [r0]
        17a720:	e3100003 	tst	r0, #3	; 0x3
        17a724:	01a00140 	moveq	r0, r0, asr #2
        17a728:	0a000000 	beq	17a730 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x258>
        17a72c:	eb691e7a 	bl	1bc211c <$_RINTError(long)>
        17a730:	e13a0000 	teq	sl, r0
        17a734:	0a000003 	beq	17a748 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x270>
        17a738:	e28d2004 	add	r2, sp, #4	; 0x4
        17a73c:	e59f10b8 	ldr	r1, [pc, #b8]	; 17a7fc <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x324>
        17a740:	e28d0018 	add	r0, sp, #24	; 0x18
        17a744:	eb692f07 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a748:	e1a00007 	mov	r0, r7
        17a74c:	eb69229a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a750:	e59f10a8 	ldr	r1, [pc, #a8]	; 17a800 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x328>
        17a754:	e1a00004 	mov	r0, r4
        17a758:	e3a02000 	mov	r2, #0	; 0x0
        17a75c:	eb6926c1 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        17a760:	e59d1004 	ldr	r1, [sp, #4]
        17a764:	e5810000 	str	r0, [r1]
        17a768:	e3300002 	teq	r0, #2	; 0x2
        17a76c:	0a000003 	beq	17a780 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x2a8>
        17a770:	e28d2004 	add	r2, sp, #4	; 0x4
        17a774:	e59f1084 	ldr	r1, [pc, #84]	; 17a800 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x328>
        17a778:	e28d0018 	add	r0, sp, #24	; 0x18
        17a77c:	eb692ef9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a780:	e5bd0004 	ldr	r0, [sp, #4]!
        17a784:	eb69228c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a788:	e28dd008 	add	sp, sp, #8	; 0x8
        17a78c:	e5950000 	ldr	r0, [r5]
        17a790:	e3300002 	teq	r0, #2	; 0x2
        17a794:	0a00001a 	beq	17a804 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x32c>
        17a798:	eb692ac3 	bl	1bc52ac <$Length(long)>
        17a79c:	e3300002 	teq	r0, #2	; 0x2
        17a7a0:	1a000031 	bne	17a86c <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x394>
        17a7a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        17a7a8:	e3a01001 	mov	r1, #1	; 0x1
        17a7ac:	e5950000 	ldr	r0, [r5]
        17a7b0:	eb6926a7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        17a7b4:	eb691e64 	bl	1bc214c <$AllocateRefHandle(long)>
        17a7b8:	e58d0000 	str	r0, [sp]
        17a7bc:	e1a0000d 	mov	r0, sp
        17a7c0:	eb655c43 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        17a7c4:	e3300000 	teq	r0, #0	; 0x0
        17a7c8:	1a000006 	bne	17a7e8 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x310>
        17a7cc:	e1a01009 	mov	r1, r9
        17a7d0:	e28d0010 	add	r0, sp, #16	; 0x10
        17a7d4:	eb692ed2 	bl	1bc6324 <$RemoveSlot__FRC6RefVarT1>
        17a7d8:	e1a0200d 	mov	r2, sp
        17a7dc:	e1a01006 	mov	r1, r6
        17a7e0:	e28d0010 	add	r0, sp, #16	; 0x10
        17a7e4:	eb692edf 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a7e8:	e59d0000 	ldr	r0, [sp]
        17a7ec:	eb692272 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a7f0:	e28dd004 	add	sp, sp, #4	; 0x4
        17a7f4:	ea00001c 	b	17a86c <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x394>
        17a7f8:	00684a18 	rsbeq	r4, r8, r8, lsl sl
        17a7fc:	00684ad8 	ldreqd	r4, [r8], -#168
        17a800:	00682660 	rsbeq	r2, r8, r0, ror #12
        17a804:	e1a01006 	mov	r1, r6
        17a808:	e1a00008 	mov	r0, r8
        17a80c:	e3a02000 	mov	r2, #0	; 0x0
        17a810:	eb692694 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        17a814:	eb691e4c 	bl	1bc214c <$AllocateRefHandle(long)>
        17a818:	e1a04000 	mov	r4, r0
        17a81c:	e24dd004 	sub	sp, sp, #4	; 0x4
        17a820:	e5901000 	ldr	r1, [r0]
        17a824:	e59d0004 	ldr	r0, [sp, #4]
        17a828:	e5900000 	ldr	r0, [r0]
        17a82c:	eb69267f 	bl	1bc4230 <$EQRef__FlT1>
        17a830:	e3300000 	teq	r0, #0	; 0x0
        17a834:	1a000009 	bne	17a860 <MakeParagraphForm(unsigned short *, long, TRect const &, RefVar const &, unsigned char)+0x388>
        17a838:	e28d0004 	add	r0, sp, #4	; 0x4
        17a83c:	eb691e4a 	bl	1bc216c <$Clone(RefVar const &)>
        17a840:	eb691e41 	bl	1bc214c <$AllocateRefHandle(long)>
        17a844:	e58d0000 	str	r0, [sp]
        17a848:	e1a0200d 	mov	r2, sp
        17a84c:	e1a01006 	mov	r1, r6
        17a850:	e28d0010 	add	r0, sp, #16	; 0x10
        17a854:	eb692ec3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        17a858:	e59d0000 	ldr	r0, [sp]
        17a85c:	eb692256 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a860:	e28dd004 	add	sp, sp, #4	; 0x4
        17a864:	e1a00004 	mov	r0, r4
        17a868:	eb692253 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a86c:	e59d000c 	ldr	r0, [sp, #12]
        17a870:	e5904000 	ldr	r4, [r0]
        17a874:	e59d0000 	ldr	r0, [sp]
        17a878:	eb69224f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a87c:	e1a00005 	mov	r0, r5
        17a880:	eb69224d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a884:	e59d000c 	ldr	r0, [sp, #12]
        17a888:	eb69224b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17a88c:	e1a00004 	mov	r0, r4
        17a890:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MapInPatch(unsigned long)
 * Address: 00183064
 */
MapInPatch(unsigned long) {
    /*
        183064:	e1a0c00d 	mov	ip, sp
        183068:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18306c:	e24cb004 	sub	fp, ip, #4	; 0x4
        183070:	e1a04000 	mov	r4, r0
        183074:	e3e01000 	mvn	r1, #0	; 0x0
        183078:	eb00006c 	bl	183230 <BuildPatchTablePageTable(unsigned long, long)>
        18307c:	e3a05000 	mov	r5, #0	; 0x0
        183080:	e0840505 	add	r0, r4, r5, lsl #10
        183084:	e2800a01 	add	r0, r0, #4096	; 0x1000
        183088:	e1a01005 	mov	r1, r5
        18308c:	eb000067 	bl	183230 <BuildPatchTablePageTable(unsigned long, long)>
        183090:	e2855001 	add	r5, r5, #1	; 0x1
        183094:	e3550004 	cmp	r5, #4	; 0x4
        183098:	3afffff8 	bcc	183080 <MapInPatch(unsigned long)+0x1c>
        18309c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: MakeTemporaryMapArea(void)
 * Address: 00183404
 */
MakeTemporaryMapArea(void) {
    /*
        183404:	e1a0c00d 	mov	ip, sp
        183408:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18340c:	e24cb004 	sub	fp, ip, #4	; 0x4
        183410:	e3a00006 	mov	r0, #6	; 0x6
        183414:	ebfe6d00 	bl	11e81c <GetPhysPage>
        183418:	e2804b03 	add	r4, r0, #3072	; 0xc00
        18341c:	ebfe6e58 	bl	11ed84 <GetPrimaryTablePhysBase>
        183420:	e1a05000 	mov	r5, r0
        183424:	e3a03000 	mov	r3, #0	; 0x0
        183428:	e3a02601 	mov	r2, #1048576	; 0x100000
        18342c:	e3a01622 	mov	r1, #35651584	; 0x2200000
        183430:	ebff5bd0 	bl	15a378 <PrimSetDomainRangeWithPageTable__FUlN31>
        183434:	e1a02004 	mov	r2, r4
        183438:	e1a00005 	mov	r0, r5
        18343c:	e3a01622 	mov	r1, #35651584	; 0x2200000
        183440:	ebff5c29 	bl	15a4ec <AddPTableWithPageTable__FUlN21>
        183444:	e1a00004 	mov	r0, r4
        183448:	ebfa5651 	bl	18d94 <ZeroPhysSubPage>
        18344c:	ebfa5536 	bl	1892c <FlushTheMMU>
        183450:	e3a00622 	mov	r0, #35651584	; 0x2200000
        183454:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: MiniSolver__FRC9SegParamsT1PlT3
 * Address: 0018de34
 */
void globals::MiniSolver() {
    /*
        18de34:	e1a0c00d 	mov	ip, sp
        18de38:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        18de3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        18de40:	e1a05000 	mov	r5, r0
        18de44:	e1a04001 	mov	r4, r1
        18de48:	e1a07002 	mov	r7, r2
        18de4c:	e1a06003 	mov	r6, r3
        18de50:	e3a08001 	mov	r8, #1	; 0x1
        18de54:	e590e010 	ldr	lr, [r0, #16]
        18de58:	e3a00000 	mov	r0, #0	; 0x0
        18de5c:	e33e0000 	teq	lr, #0	; 0x0
        18de60:	1a000006 	bne	18de80 <MiniSolver__FRC9SegParamsT1PlT3+0x4c>
        18de64:	e5941010 	ldr	r1, [r4, #16]
        18de68:	e3310000 	teq	r1, #0	; 0x0
        18de6c:	15951014 	ldrne	r1, [r5, #20]
        18de70:	13310000 	teqne	r1, #0	; 0x0
        18de74:	15b50018 	ldrne	r0, [r5, #24]!
        18de78:	1a00009c 	bne	18e0f0 <MiniSolver__FRC9SegParamsT1PlT3+0x2bc>
        18de7c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        18de80:	e5942014 	ldr	r2, [r4, #20]
        18de84:	e3320000 	teq	r2, #0	; 0x0
        18de88:	1a000006 	bne	18dea8 <MiniSolver__FRC9SegParamsT1PlT3+0x74>
        18de8c:	e5941010 	ldr	r1, [r4, #16]
        18de90:	e3310000 	teq	r1, #0	; 0x0
        18de94:	15952014 	ldrne	r2, [r5, #20]
        18de98:	13320000 	teqne	r2, #0	; 0x0
        18de9c:	15b40018 	ldrne	r0, [r4, #24]!
        18dea0:	1a000074 	bne	18e078 <MiniSolver__FRC9SegParamsT1PlT3+0x244>
        18dea4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        18dea8:	e595c014 	ldr	ip, [r5, #20]
        18deac:	e33c0000 	teq	ip, #0	; 0x0
        18deb0:	01a0100e 	moveq	r1, lr
        18deb4:	05b50018 	ldreq	r0, [r5, #24]!
        18deb8:	0a000036 	beq	18df98 <MiniSolver__FRC9SegParamsT1PlT3+0x164>
        18debc:	e5943010 	ldr	r3, [r4, #16]
        18dec0:	e3330000 	teq	r3, #0	; 0x0
        18dec4:	01a01002 	moveq	r1, r2
        18dec8:	05b40018 	ldreq	r0, [r4, #24]!
        18decc:	0a00004d 	beq	18e008 <MiniSolver__FRC9SegParamsT1PlT3+0x1d4>
        18ded0:	e1b0000e 	movs	r0, lr
        18ded4:	42600000 	rsbmi	r0, r0, #0	; 0x0
        18ded8:	e3a01001 	mov	r1, #1	; 0x1
        18dedc:	e1b0900c 	movs	r9, ip
        18dee0:	42699000 	rsbmi	r9, r9, #0	; 0x0
        18dee4:	e1590000 	cmp	r9, r0
        18dee8:	da000002 	ble	18def8 <MiniSolver__FRC9SegParamsT1PlT3+0xc4>
        18deec:	e1b0000c 	movs	r0, ip
        18def0:	42600000 	rsbmi	r0, r0, #0	; 0x0
        18def4:	e3a01002 	mov	r1, #2	; 0x2
        18def8:	e1b09003 	movs	r9, r3
        18defc:	42699000 	rsbmi	r9, r9, #0	; 0x0
        18df00:	e1590000 	cmp	r9, r0
        18df04:	da000002 	ble	18df14 <MiniSolver__FRC9SegParamsT1PlT3+0xe0>
        18df08:	e1b00003 	movs	r0, r3
        18df0c:	42600000 	rsbmi	r0, r0, #0	; 0x0
        18df10:	e3a01004 	mov	r1, #4	; 0x4
        18df14:	e1b09002 	movs	r9, r2
        18df18:	42699000 	rsbmi	r9, r9, #0	; 0x0
        18df1c:	e1590000 	cmp	r9, r0
        18df20:	da000001 	ble	18df2c <MiniSolver__FRC9SegParamsT1PlT3+0xf8>
        18df24:	e1a00002 	mov	r0, r2
        18df28:	e3a01005 	mov	r1, #5	; 0x5
        18df2c:	e3310001 	teq	r1, #1	; 0x1
        18df30:	0a000021 	beq	18dfbc <MiniSolver__FRC9SegParamsT1PlT3+0x188>
        18df34:	e3310002 	teq	r1, #2	; 0x2
        18df38:	0a00003b 	beq	18e02c <MiniSolver__FRC9SegParamsT1PlT3+0x1f8>
        18df3c:	e3310004 	teq	r1, #4	; 0x4
        18df40:	0a000057 	beq	18e0a4 <MiniSolver__FRC9SegParamsT1PlT3+0x270>
        18df44:	e3310005 	teq	r1, #5	; 0x5
        18df48:	1a000074 	bne	18e120 <MiniSolver__FRC9SegParamsT1PlT3+0x2ec>
        18df4c:	e1a0000c 	mov	r0, ip
        18df50:	e5941018 	ldr	r1, [r4, #24]
        18df54:	eb694c5a 	bl	1be10c4 <$FixedMultiply>
        18df58:	e5941014 	ldr	r1, [r4, #20]
        18df5c:	eb694c57 	bl	1be10c0 <$FixedDivide>
        18df60:	e1a09000 	mov	r9, r0
        18df64:	e5941010 	ldr	r1, [r4, #16]
        18df68:	e5950014 	ldr	r0, [r5, #20]
        18df6c:	eb694c54 	bl	1be10c4 <$FixedMultiply>
        18df70:	e5941014 	ldr	r1, [r4, #20]
        18df74:	eb694c51 	bl	1be10c0 <$FixedDivide>
        18df78:	e5951010 	ldr	r1, [r5, #16]
        18df7c:	e0510000 	subs	r0, r1, r0
        18df80:	e1a01000 	mov	r1, r0
        18df84:	42600000 	rsbmi	r0, r0, #0	; 0x0
        18df88:	e350000a 	cmp	r0, #10	; 0xa
        18df8c:	da000062 	ble	18e11c <MiniSolver__FRC9SegParamsT1PlT3+0x2e8>
        18df90:	e5b50018 	ldr	r0, [r5, #24]!
        18df94:	e0400009 	sub	r0, r0, r9
        18df98:	eb694c48 	bl	1be10c0 <$FixedDivide>
        18df9c:	e5870000 	str	r0, [r7]
        18dfa0:	e1a01000 	mov	r1, r0
        18dfa4:	e5940010 	ldr	r0, [r4, #16]
        18dfa8:	eb694c45 	bl	1be10c4 <$FixedMultiply>
        18dfac:	e5941018 	ldr	r1, [r4, #24]
        18dfb0:	e0410000 	sub	r0, r1, r0
        18dfb4:	e5b41014 	ldr	r1, [r4, #20]!
        18dfb8:	ea000036 	b	18e098 <MiniSolver__FRC9SegParamsT1PlT3+0x264>
        18dfbc:	e1a00003 	mov	r0, r3
        18dfc0:	e5951018 	ldr	r1, [r5, #24]
        18dfc4:	eb694c3e 	bl	1be10c4 <$FixedMultiply>
        18dfc8:	e5951010 	ldr	r1, [r5, #16]
        18dfcc:	eb694c3b 	bl	1be10c0 <$FixedDivide>
        18dfd0:	e1a09000 	mov	r9, r0
        18dfd4:	e5951014 	ldr	r1, [r5, #20]
        18dfd8:	e5940010 	ldr	r0, [r4, #16]
        18dfdc:	eb694c38 	bl	1be10c4 <$FixedMultiply>
        18dfe0:	e5951010 	ldr	r1, [r5, #16]
        18dfe4:	eb694c35 	bl	1be10c0 <$FixedDivide>
        18dfe8:	e5941014 	ldr	r1, [r4, #20]
        18dfec:	e0510000 	subs	r0, r1, r0
        18dff0:	e1a01000 	mov	r1, r0
        18dff4:	42600000 	rsbmi	r0, r0, #0	; 0x0
        18dff8:	e350000a 	cmp	r0, #10	; 0xa
        18dffc:	da000046 	ble	18e11c <MiniSolver__FRC9SegParamsT1PlT3+0x2e8>
        18e000:	e5b40018 	ldr	r0, [r4, #24]!
        18e004:	e0400009 	sub	r0, r0, r9
        18e008:	eb694c2c 	bl	1be10c0 <$FixedDivide>
        18e00c:	e5860000 	str	r0, [r6]
        18e010:	e1a01000 	mov	r1, r0
        18e014:	e5950014 	ldr	r0, [r5, #20]
        18e018:	eb694c29 	bl	1be10c4 <$FixedMultiply>
        18e01c:	e5951018 	ldr	r1, [r5, #24]
        18e020:	e0410000 	sub	r0, r1, r0
        18e024:	e5b51010 	ldr	r1, [r5, #16]!
        18e028:	ea000038 	b	18e110 <MiniSolver__FRC9SegParamsT1PlT3+0x2dc>
        18e02c:	e1a00002 	mov	r0, r2
        18e030:	e5951018 	ldr	r1, [r5, #24]
        18e034:	eb694c22 	bl	1be10c4 <$FixedMultiply>
        18e038:	e5951014 	ldr	r1, [r5, #20]
        18e03c:	eb694c1f 	bl	1be10c0 <$FixedDivide>
        18e040:	e1a09000 	mov	r9, r0
        18e044:	e5951010 	ldr	r1, [r5, #16]
        18e048:	e5940014 	ldr	r0, [r4, #20]
        18e04c:	eb694c1c 	bl	1be10c4 <$FixedMultiply>
        18e050:	e5951014 	ldr	r1, [r5, #20]
        18e054:	eb694c19 	bl	1be10c0 <$FixedDivide>
        18e058:	e5941010 	ldr	r1, [r4, #16]
        18e05c:	e0510000 	subs	r0, r1, r0
        18e060:	e1a01000 	mov	r1, r0
        18e064:	42600000 	rsbmi	r0, r0, #0	; 0x0
        18e068:	e350000a 	cmp	r0, #10	; 0xa
        18e06c:	da00002a 	ble	18e11c <MiniSolver__FRC9SegParamsT1PlT3+0x2e8>
        18e070:	e5b40018 	ldr	r0, [r4, #24]!
        18e074:	e0400009 	sub	r0, r0, r9
        18e078:	eb694c10 	bl	1be10c0 <$FixedDivide>
        18e07c:	e5870000 	str	r0, [r7]
        18e080:	e1a01000 	mov	r1, r0
        18e084:	e5950010 	ldr	r0, [r5, #16]
        18e088:	eb694c0d 	bl	1be10c4 <$FixedMultiply>
        18e08c:	e5951018 	ldr	r1, [r5, #24]
        18e090:	e0410000 	sub	r0, r1, r0
        18e094:	e5b51014 	ldr	r1, [r5, #20]!
        18e098:	eb694c08 	bl	1be10c0 <$FixedDivide>
        18e09c:	e5860000 	str	r0, [r6]
        18e0a0:	ea00001e 	b	18e120 <MiniSolver__FRC9SegParamsT1PlT3+0x2ec>
        18e0a4:	e1a0000e 	mov	r0, lr
        18e0a8:	e5941018 	ldr	r1, [r4, #24]
        18e0ac:	eb694c04 	bl	1be10c4 <$FixedMultiply>
        18e0b0:	e5941010 	ldr	r1, [r4, #16]
        18e0b4:	eb694c01 	bl	1be10c0 <$FixedDivide>
        18e0b8:	e1a09000 	mov	r9, r0
        18e0bc:	e5941014 	ldr	r1, [r4, #20]
        18e0c0:	e5950010 	ldr	r0, [r5, #16]
        18e0c4:	eb694bfe 	bl	1be10c4 <$FixedMultiply>
        18e0c8:	e5941010 	ldr	r1, [r4, #16]
        18e0cc:	eb694bfb 	bl	1be10c0 <$FixedDivide>
        18e0d0:	e5951014 	ldr	r1, [r5, #20]
        18e0d4:	e0510000 	subs	r0, r1, r0
        18e0d8:	e1a01000 	mov	r1, r0
        18e0dc:	42600000 	rsbmi	r0, r0, #0	; 0x0
        18e0e0:	e350000a 	cmp	r0, #10	; 0xa
        18e0e4:	da00000c 	ble	18e11c <MiniSolver__FRC9SegParamsT1PlT3+0x2e8>
        18e0e8:	e5b50018 	ldr	r0, [r5, #24]!
        18e0ec:	e0400009 	sub	r0, r0, r9
        18e0f0:	eb694bf2 	bl	1be10c0 <$FixedDivide>
        18e0f4:	e5860000 	str	r0, [r6]
        18e0f8:	e1a01000 	mov	r1, r0
        18e0fc:	e5940014 	ldr	r0, [r4, #20]
        18e100:	eb694bef 	bl	1be10c4 <$FixedMultiply>
        18e104:	e5941018 	ldr	r1, [r4, #24]
        18e108:	e0410000 	sub	r0, r1, r0
        18e10c:	e5b41010 	ldr	r1, [r4, #16]!
        18e110:	eb694bea 	bl	1be10c0 <$FixedDivide>
        18e114:	e5870000 	str	r0, [r7]
        18e118:	ea000000 	b	18e120 <MiniSolver__FRC9SegParamsT1PlT3+0x2ec>
        18e11c:	e3a08000 	mov	r8, #0	; 0x0
        18e120:	e1a00008 	mov	r0, r8
        18e124:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: MakePolygonForm__FP6TPointlT2RC5TRectT2
 * Address: 00191600
 */
void globals::MakePolygonForm() {
    /*
        191600:	e1a0c00d 	mov	ip, sp
        191604:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        191608:	e24cb004 	sub	fp, ip, #4	; 0x4
        19160c:	e1a07000 	mov	r7, r0
        191610:	e1a04001 	mov	r4, r1
        191614:	e1a05002 	mov	r5, r2
        191618:	e1a06003 	mov	r6, r3
        19161c:	e59b9004 	ldr	r9, [fp, #4]
        191620:	e24dd004 	sub	sp, sp, #4	; 0x4
        191624:	e3a00002 	mov	r0, #2	; 0x2
        191628:	eb68c2c7 	bl	1bc214c <$AllocateRefHandle(long)>
        19162c:	e335000e 	teq	r5, #14	; 0xe
        191630:	e40d0004 	str	r0, [sp], -#4
        191634:	1a000005 	bne	191650 <MakePolygonForm__FP6TPointlT2RC5TRectT2+0x50>
        191638:	e59f000c 	ldr	r0, [pc, #c]	; 19164c <MakePolygonForm__FP6TPointlT2RC5TRectT2+0x4c>
        19163c:	eb68c2ca 	bl	1bc216c <$Clone(RefVar const &)>
        191640:	e59d1004 	ldr	r1, [sp, #4]
        191644:	e5810000 	str	r0, [r1]
        191648:	ea000031 	b	191714 <MakePolygonForm__FP6TPointlT2RC5TRectT2+0x114>
        19164c:	00681b78 	rsbeq	r1, r8, r8, ror fp
        191650:	e59f012c 	ldr	r0, [pc, #12c]	; 191784 <MakePolygonForm__FP6TPointlT2RC5TRectT2+0x184>
        191654:	eb68c2c4 	bl	1bc216c <$Clone(RefVar const &)>
        191658:	e59d1004 	ldr	r1, [sp, #4]
        19165c:	e5810000 	str	r0, [r1]
        191660:	e24dd004 	sub	sp, sp, #4	; 0x4
        191664:	e3a00004 	mov	r0, #4	; 0x4
        191668:	e0801104 	add	r1, r0, r4, lsl #2
        19166c:	e59f0114 	ldr	r0, [pc, #114]	; 191788 <MakePolygonForm__FP6TPointlT2RC5TRectT2+0x188>
        191670:	eb68c2b1 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        191674:	eb68c2b4 	bl	1bc214c <$AllocateRefHandle(long)>
        191678:	e40d000c 	str	r0, [sp], -#12
        19167c:	e28d100c 	add	r1, sp, #12	; 0xc
        191680:	e1a0000d 	mov	r0, sp
        191684:	eb68be93 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        191688:	e1a0100d 	mov	r1, sp
        19168c:	e28d0008 	add	r0, sp, #8	; 0x8
        191690:	eb68be8f 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        191694:	e1a0000d 	mov	r0, sp
        191698:	e3a01000 	mov	r1, #0	; 0x0
        19169c:	eb68c297 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1916a0:	e28d1008 	add	r1, sp, #8	; 0x8
        1916a4:	e28d0004 	add	r0, sp, #4	; 0x4
        1916a8:	eb68be89 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        1916ac:	e28d0004 	add	r0, sp, #4	; 0x4
        1916b0:	eb68c297 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1916b4:	e1a08000 	mov	r8, r0
        1916b8:	e28d0004 	add	r0, sp, #4	; 0x4
        1916bc:	e3a01000 	mov	r1, #0	; 0x0
        1916c0:	eb68c28e 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1916c4:	e1a02104 	mov	r2, r4, lsl #2
        1916c8:	e2881004 	add	r1, r8, #4	; 0x4
        1916cc:	e1a00007 	mov	r0, r7
        1916d0:	eb69361f 	bl	1bdef54 <$BlockMove>
        1916d4:	e5c84003 	strb	r4, [r8, #3]
        1916d8:	e1a00444 	mov	r0, r4, asr #8
        1916dc:	e5c80002 	strb	r0, [r8, #2]
        1916e0:	e5c85001 	strb	r5, [r8, #1]
        1916e4:	e1a00445 	mov	r0, r5, asr #8
        1916e8:	e5c80000 	strb	r0, [r8]
        1916ec:	e28d200c 	add	r2, sp, #12	; 0xc
        1916f0:	e59f1094 	ldr	r1, [pc, #94]	; 19178c <MakePolygonForm__FP6TPointlT2RC5TRectT2+0x18c>
        1916f4:	e28d0014 	add	r0, sp, #20	; 0x14
        1916f8:	eb68d31a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1916fc:	e28d0008 	add	r0, sp, #8	; 0x8
        191700:	e3a01000 	mov	r1, #0	; 0x0
        191704:	eb68c27d 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        191708:	e5bd000c 	ldr	r0, [sp, #12]!
        19170c:	eb68c6aa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        191710:	e28dd004 	add	sp, sp, #4	; 0x4
        191714:	e1a00006 	mov	r0, r6
        191718:	eb69781f 	bl	1bef79c <$ToObject(TRect const &)>
        19171c:	eb68c28a 	bl	1bc214c <$AllocateRefHandle(long)>
        191720:	e58d0000 	str	r0, [sp]
        191724:	e1a0200d 	mov	r2, sp
        191728:	e59f1060 	ldr	r1, [pc, #60]	; 191790 <MakePolygonForm__FP6TPointlT2RC5TRectT2+0x190>
        19172c:	e28d0004 	add	r0, sp, #4	; 0x4
        191730:	eb68d30c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        191734:	e59d0000 	ldr	r0, [sp]
        191738:	eb68c69f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        19173c:	e24dd004 	sub	sp, sp, #4	; 0x4
        191740:	e3390002 	teq	r9, #2	; 0x2
        191744:	0a000009 	beq	191770 <MakePolygonForm__FP6TPointlT2RC5TRectT2+0x170>
        191748:	e1a00409 	mov	r0, r9, lsl #8
        19174c:	e1a00100 	mov	r0, r0, lsl #2
        191750:	eb68c27d 	bl	1bc214c <$AllocateRefHandle(long)>
        191754:	e58d0000 	str	r0, [sp]
        191758:	e1a0200d 	mov	r2, sp
        19175c:	e59f1030 	ldr	r1, [pc, #30]	; 191794 <MakePolygonForm__FP6TPointlT2RC5TRectT2+0x194>
        191760:	e28d0008 	add	r0, sp, #8	; 0x8
        191764:	eb68d2ff 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        191768:	e59d0000 	ldr	r0, [sp]
        19176c:	eb68c692 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        191770:	e59d0008 	ldr	r0, [sp, #8]
        191774:	e5904000 	ldr	r4, [r0]
        191778:	eb68c68f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        19177c:	e1a00004 	mov	r0, r4
        191780:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        191784:	00680990 	streqb	r0, [r8], -#144
        191788:	00683f38 	rsbeq	r3, r8, r8, lsr pc
        19178c:	00683f18 	rsbeq	r3, r8, r8, lsl pc
        191790:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        191794:	00684fd0 	ldreqd	r4, [r8], -#240
    */
}

/**
 * Symbol: MakePrinter(RefVar const &)
 * Address: 00194070
 */
MakePrinter(RefVar const &) {
    /*
        194070:	e1a0c00d 	mov	ip, sp
        194074:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        194078:	e24cb004 	sub	fp, ip, #4	; 0x4
        19407c:	e1a04000 	mov	r4, r0
        194080:	e24dd008 	sub	sp, sp, #8	; 0x8
        194084:	e59f105c 	ldr	r1, [pc, #5c]	; 1940e8 <MakePrinter(RefVar const &)+0x78>
        194088:	e3a02000 	mov	r2, #0	; 0x0
        19408c:	eb68c075 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        194090:	eb68b82d 	bl	1bc214c <$AllocateRefHandle(long)>
        194094:	e58d0004 	str	r0, [sp, #4]
        194098:	e59f104c 	ldr	r1, [pc, #4c]	; 1940ec <MakePrinter(RefVar const &)+0x7c>
        19409c:	e1a00004 	mov	r0, r4
        1940a0:	e3a02000 	mov	r2, #0	; 0x0
        1940a4:	eb68c06f 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1940a8:	eb68b827 	bl	1bc214c <$AllocateRefHandle(long)>
        1940ac:	e58d0000 	str	r0, [sp]
        1940b0:	e59d0004 	ldr	r0, [sp, #4]
        1940b4:	e5900000 	ldr	r0, [r0]
        1940b8:	e3a04000 	mov	r4, #0	; 0x0
        1940bc:	e3300002 	teq	r0, #2	; 0x2
        1940c0:	159d0000 	ldrne	r0, [sp]
        1940c4:	15900000 	ldrne	r0, [r0]
        1940c8:	13300002 	teqne	r0, #2	; 0x2
        1940cc:	1a000007 	bne	1940f0 <MakePrinter(RefVar const &)+0x80>
        1940d0:	e59d0000 	ldr	r0, [sp]
        1940d4:	eb68bc38 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1940d8:	e59d0004 	ldr	r0, [sp, #4]
        1940dc:	eb68bc36 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1940e0:	e1a00004 	mov	r0, r4
        1940e4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1940e8:	00682ab8 	streqh	r2, [r8], -#168
        1940ec:	00683180 	rsbeq	r3, r8, r0, lsl #3
        1940f0:	e24ddc01 	sub	sp, sp, #256	; 0x100
        1940f4:	e28d0c01 	add	r0, sp, #256	; 0x100
        1940f8:	eb68bc21 	bl	1bc3184 <$GetCString(RefVar const &)>
        1940fc:	e1a0100d 	mov	r1, sp
        194100:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        194104:	e3a02001 	mov	r2, #1	; 0x1
        194108:	eb694c9c 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        19410c:	e1a0100d 	mov	r1, sp
        194110:	e28f0f16 	add	r0, pc, #88	; 0x58
        194114:	eb690e9c 	bl	1bd7b8c <$NewByName__FPCcT1>
        194118:	e1b04000 	movs	r4, r0
        19411c:	0a00000d 	beq	194158 <MakePrinter(RefVar const &)+0xe8>
        194120:	e28d0f41 	add	r0, sp, #260	; 0x104
        194124:	eb68bc16 	bl	1bc3184 <$GetCString(RefVar const &)>
        194128:	e1a0100d 	mov	r1, sp
        19412c:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        194130:	e3a02001 	mov	r2, #1	; 0x1
        194134:	eb694c91 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        194138:	e1a0100d 	mov	r1, sp
        19413c:	e1a00004 	mov	r0, r4
        194140:	eb66af94 	bl	1b3ff98 <TPrinter::$Constructor(char *)>
        194144:	e3300000 	teq	r0, #0	; 0x0
        194148:	0a000002 	beq	194158 <MakePrinter(RefVar const &)+0xe8>
        19414c:	e1a00004 	mov	r0, r4
        194150:	eb66afa1 	bl	1b3ffdc <TPrinter::$Delete(void)>
        194154:	e3a04000 	mov	r4, #0	; 0x0
        194158:	e59d0100 	ldr	r0, [sp, #256]
        19415c:	eb68bc16 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        194160:	e59d0104 	ldr	r0, [sp, #260]
        194164:	eb68bc14 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        194168:	e1a00004 	mov	r0, r4
        19416c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        194170:	54507269 	ldrplb	r7, [r0], -#617
        194174:	6e746572 	mrcvs	5, 3, r6, cr4, cr2, {3}
        194178:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)
 * Address: 0019f644
 */
MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *) {
    /*
        19f644:	e1a0c00d 	mov	ip, sp
        19f648:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        19f64c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19f650:	e1a06000 	mov	r6, r0
        19f654:	e1a05001 	mov	r5, r1
        19f658:	e1a04003 	mov	r4, r3
        19f65c:	e24dd078 	sub	sp, sp, #120	; 0x78
        19f660:	e3a07000 	mov	r7, #0	; 0x0
        19f664:	e5d00000 	ldrb	r0, [r0]
        19f668:	e3300001 	teq	r0, #1	; 0x1
        19f66c:	13300004 	teqne	r0, #4	; 0x4
        19f670:	1a00000b 	bne	19f6a4 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x60>
        19f674:	e5920000 	ldr	r0, [r2]
        19f678:	e0801100 	add	r1, r0, r0, lsl #2
        19f67c:	e3e00009 	mvn	r0, #9	; 0x9
        19f680:	e0907081 	adds	r7, r0, r1, lsl #1
        19f684:	43a07000 	movmi	r7, #0	; 0x0
        19f688:	e1a02007 	mov	r2, r7
        19f68c:	e1a01004 	mov	r1, r4
        19f690:	e1a00006 	mov	r0, r6
        19f694:	eb66404d 	bl	1b2f7d0 <$MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)>
        19f698:	e1a01006 	mov	r1, r6
        19f69c:	e1a00004 	mov	r0, r4
        19f6a0:	eb664894 	bl	1b318f8 <$fill_RW_aliases( (*)[1])(RWG_type *)>
        19f6a4:	e3a00000 	mov	r0, #0	; 0x0
        19f6a8:	e78d0100 	str	r0, [sp, r0, lsl #2]
        19f6ac:	e2800001 	add	r0, r0, #1	; 0x1
        19f6b0:	e350000a 	cmp	r0, #10	; 0xa
        19f6b4:	bafffffb 	blt	19f6a8 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x64>
        19f6b8:	e3a01001 	mov	r1, #1	; 0x1
        19f6bc:	e3a00001 	mov	r0, #1	; 0x1
        19f6c0:	ea000029 	b	19f76c <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x128>
        19f6c4:	e0842202 	add	r2, r4, r2, lsl #4
        19f6c8:	e1a0e002 	mov	lr, r2
        19f6cc:	e5923048 	ldr	r3, [r2, #72]
        19f6d0:	e1a03843 	mov	r3, r3, asr #16
        19f6d4:	e5122008 	ldr	r2, [r2, -#8]
        19f6d8:	e1530842 	cmp	r3, r2, asr #16
        19f6dc:	da00001f 	ble	19f760 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x11c>
        19f6e0:	e28d9028 	add	r9, sp, #40	; 0x28
        19f6e4:	e1a0800e 	mov	r8, lr
        19f6e8:	e3a0c006 	mov	ip, #6	; 0x6
        19f6ec:	e8b8000e 	ldmia	r8!, {r1, r2, r3}
        19f6f0:	e8a9000e 	stmia	r9!, {r1, r2, r3}
        19f6f4:	e25cc001 	subs	ip, ip, #1	; 0x1
        19f6f8:	1afffffb 	bne	19f6ec <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0xa8>
        19f6fc:	e898000c 	ldmia	r8, {r2, r3}
        19f700:	e889000c 	stmia	r9, {r2, r3}
        19f704:	e24e9050 	sub	r9, lr, #80	; 0x50
        19f708:	e1a08009 	mov	r8, r9
        19f70c:	e3a0c006 	mov	ip, #6	; 0x6
        19f710:	e8b9000e 	ldmia	r9!, {r1, r2, r3}
        19f714:	e8ae000e 	stmia	lr!, {r1, r2, r3}
        19f718:	e25cc001 	subs	ip, ip, #1	; 0x1
        19f71c:	1afffffb 	bne	19f710 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0xcc>
        19f720:	e899000c 	ldmia	r9, {r2, r3}
        19f724:	e88e000c 	stmia	lr, {r2, r3}
        19f728:	e28de028 	add	lr, sp, #40	; 0x28
        19f72c:	e3a0c006 	mov	ip, #6	; 0x6
        19f730:	e8be000e 	ldmia	lr!, {r1, r2, r3}
        19f734:	e8a8000e 	stmia	r8!, {r1, r2, r3}
        19f738:	e25cc001 	subs	ip, ip, #1	; 0x1
        19f73c:	1afffffb 	bne	19f730 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0xec>
        19f740:	e89e000c 	ldmia	lr, {r2, r3}
        19f744:	e888000c 	stmia	r8, {r2, r3}
        19f748:	e79d2100 	ldr	r2, [sp, r0, lsl #2]
        19f74c:	e08d1100 	add	r1, sp, r0, lsl #2
        19f750:	e511c004 	ldr	ip, [r1, -#4]
        19f754:	e78dc100 	str	ip, [sp, r0, lsl #2]
        19f758:	e5212004 	str	r2, [r1, -#4]!
        19f75c:	e3a01000 	mov	r1, #0	; 0x0
        19f760:	e2800001 	add	r0, r0, #1	; 0x1
        19f764:	e350000a 	cmp	r0, #10	; 0xa
        19f768:	aa000003 	bge	19f77c <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x138>
        19f76c:	e0802100 	add	r2, r0, r0, lsl #2
        19f770:	e7d43202 	ldrb	r3, [r4, r2, lsl #4]
        19f774:	e3330000 	teq	r3, #0	; 0x0
        19f778:	1affffd1 	bne	19f6c4 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x80>
        19f77c:	e3310000 	teq	r1, #0	; 0x0
        19f780:	0affffcc 	beq	19f6b8 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x74>
        19f784:	e1a01006 	mov	r1, r6
        19f788:	e1a0000d 	mov	r0, sp
        19f78c:	eb664844 	bl	1b318a4 <$SortGraph( (*)[1])(RWG_type *)>
        19f790:	e3a08000 	mov	r8, #0	; 0x0
        19f794:	e3570000 	cmp	r7, #0	; 0x0
        19f798:	da000019 	ble	19f804 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x1c0>
        19f79c:	e3a06000 	mov	r6, #0	; 0x0
        19f7a0:	e3a0a064 	mov	sl, #100	; 0x64
        19f7a4:	e0860106 	add	r0, r6, r6, lsl #2
        19f7a8:	e7d41200 	ldrb	r1, [r4, r0, lsl #4]
        19f7ac:	e3310000 	teq	r1, #0	; 0x0
        19f7b0:	0a000013 	beq	19f804 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x1c0>
        19f7b4:	e0847200 	add	r7, r4, r0, lsl #4
        19f7b8:	e1a09007 	mov	r9, r7
        19f7bc:	e5970048 	ldr	r0, [r7, #72]
        19f7c0:	e1a00840 	mov	r0, r0, asr #16
        19f7c4:	eb684c5e 	bl	1bb2944 <$__rt_sdiv10>
        19f7c8:	e5c70049 	strb	r0, [r7, #73]
        19f7cc:	e1a00440 	mov	r0, r0, asr #8
        19f7d0:	e5c70048 	strb	r0, [r7, #72]
        19f7d4:	e5970048 	ldr	r0, [r7, #72]
        19f7d8:	e1a00840 	mov	r0, r0, asr #16
        19f7dc:	e3500064 	cmp	r0, #100	; 0x64
        19f7e0:	c5c9a049 	strgtb	sl, [r9, #73]
        19f7e4:	ca000002 	bgt	19f7f4 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x1b0>
        19f7e8:	e3500000 	cmp	r0, #0	; 0x0
        19f7ec:	aa000001 	bge	19f7f8 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x1b4>
        19f7f0:	e5c98049 	strb	r8, [r9, #73]
        19f7f4:	e5c98048 	strb	r8, [r9, #72]
        19f7f8:	e2866001 	add	r6, r6, #1	; 0x1
        19f7fc:	e356000a 	cmp	r6, #10	; 0xa
        19f800:	baffffe7 	blt	19f7a4 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x160>
        19f804:	e3a00000 	mov	r0, #0	; 0x0
        19f808:	e0801100 	add	r1, r0, r0, lsl #2
        19f80c:	e7d42201 	ldrb	r2, [r4, r1, lsl #4]
        19f810:	e3320000 	teq	r2, #0	; 0x0
        19f814:	00800100 	addeq	r0, r0, r0, lsl #2
        19f818:	00840200 	addeq	r0, r4, r0, lsl #4
        19f81c:	0a00000e 	beq	19f85c <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x218>
        19f820:	e5942048 	ldr	r2, [r4, #72]
        19f824:	e1a02842 	mov	r2, r2, asr #16
        19f828:	e595301a 	ldr	r3, [r5, #26]
        19f82c:	e0423843 	sub	r3, r2, r3, asr #16
        19f830:	e0842201 	add	r2, r4, r1, lsl #4
        19f834:	e5922048 	ldr	r2, [r2, #72]
        19f838:	e1a02842 	mov	r2, r2, asr #16
        19f83c:	e1530002 	cmp	r3, r2
        19f840:	ca000002 	bgt	19f850 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x20c>
        19f844:	e5953016 	ldr	r3, [r5, #22]
        19f848:	e1520843 	cmp	r2, r3, asr #16
        19f84c:	aa000005 	bge	19f868 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x224>
        19f850:	e0800100 	add	r0, r0, r0, lsl #2
        19f854:	e7c48200 	strb	r8, [r4, r0, lsl #4]
        19f858:	e0840201 	add	r0, r4, r1, lsl #4
        19f85c:	e5c08049 	strb	r8, [r0, #73]
        19f860:	e5c08048 	strb	r8, [r0, #72]
        19f864:	ea000002 	b	19f874 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x230>
        19f868:	e2800001 	add	r0, r0, #1	; 0x1
        19f86c:	e350000a 	cmp	r0, #10	; 0xa
        19f870:	baffffe4 	blt	19f808 <MakeAndCombRecWordsFromWordGraph(RWG_type *, rc_type *, xrdata_type *, rec_w_type *)+0x1c4>
        19f874:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeStringArray(TWordList *)
 * Address: 001a0958
 */
MakeStringArray(TWordList *) {
    /*
        1a0958:	e1a0c00d 	mov	ip, sp
        1a095c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1a0960:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a0964:	e1a04000 	mov	r4, r0
        1a0968:	eb63b77f 	bl	1a8e76c <TWordList::$Count(void)>
        1a096c:	e1a07000 	mov	r7, r0
        1a0970:	eb63ed09 	bl	1a9bd9c <$MakeArray(long)>
        1a0974:	eb6885f4 	bl	1bc214c <$AllocateRefHandle(long)>
        1a0978:	e1a06000 	mov	r6, r0
        1a097c:	e3a05000 	mov	r5, #0	; 0x0
        1a0980:	e3570000 	cmp	r7, #0	; 0x0
        1a0984:	da000012 	ble	1a09d4 <MakeStringArray(TWordList *)+0x7c>
        1a0988:	e1a01005 	mov	r1, r5
        1a098c:	e1a00004 	mov	r0, r4
        1a0990:	eb64165e 	bl	1aa6310 <TWordList::$Word(long)>
        1a0994:	e1a09000 	mov	r9, r0
        1a0998:	e5900000 	ldr	r0, [r0]
        1a099c:	eb68924c 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        1a09a0:	eb6885e9 	bl	1bc214c <$AllocateRefHandle(long)>
        1a09a4:	e1a08000 	mov	r8, r0
        1a09a8:	e1a01005 	mov	r1, r5
        1a09ac:	e5902000 	ldr	r2, [r0]
        1a09b0:	e5960000 	ldr	r0, [r6]
        1a09b4:	eb689667 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1a09b8:	e1a00008 	mov	r0, r8
        1a09bc:	eb6889fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a09c0:	e1a00009 	mov	r0, r9
        1a09c4:	eb6901b9 	bl	1be10b0 <$DisposHandle>
        1a09c8:	e2855001 	add	r5, r5, #1	; 0x1
        1a09cc:	e1550007 	cmp	r5, r7
        1a09d0:	baffffec 	blt	1a0988 <MakeStringArray(TWordList *)+0x30>
        1a09d4:	e5964000 	ldr	r4, [r6]
        1a09d8:	e1a00006 	mov	r0, r6
        1a09dc:	eb6889f6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a09e0:	e1a00004 	mov	r0, r4
        1a09e4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: MakeScoreArray(TWordList *)
 * Address: 001a09e8
 */
MakeScoreArray(TWordList *) {
    /*
        1a09e8:	e1a0c00d 	mov	ip, sp
        1a09ec:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1a09f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a09f4:	e1a04000 	mov	r4, r0
        1a09f8:	eb63b75b 	bl	1a8e76c <TWordList::$Count(void)>
        1a09fc:	e1a07000 	mov	r7, r0
        1a0a00:	eb63ece5 	bl	1a9bd9c <$MakeArray(long)>
        1a0a04:	eb6885d0 	bl	1bc214c <$AllocateRefHandle(long)>
        1a0a08:	e1a06000 	mov	r6, r0
        1a0a0c:	e3a05000 	mov	r5, #0	; 0x0
        1a0a10:	e3570000 	cmp	r7, #0	; 0x0
        1a0a14:	da00000e 	ble	1a0a54 <MakeScoreArray(TWordList *)+0x6c>
        1a0a18:	e1a01005 	mov	r1, r5
        1a0a1c:	e1a00004 	mov	r0, r4
        1a0a20:	eb6401a9 	bl	1aa10cc <TWordList::$Score(long)>
        1a0a24:	e1a00100 	mov	r0, r0, lsl #2
        1a0a28:	eb6885c7 	bl	1bc214c <$AllocateRefHandle(long)>
        1a0a2c:	e1a08000 	mov	r8, r0
        1a0a30:	e1a01005 	mov	r1, r5
        1a0a34:	e5902000 	ldr	r2, [r0]
        1a0a38:	e5960000 	ldr	r0, [r6]
        1a0a3c:	eb689645 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1a0a40:	e1a00008 	mov	r0, r8
        1a0a44:	eb6889dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a0a48:	e2855001 	add	r5, r5, #1	; 0x1
        1a0a4c:	e1550007 	cmp	r5, r7
        1a0a50:	bafffff0 	blt	1a0a18 <MakeScoreArray(TWordList *)+0x30>
        1a0a54:	e5964000 	ldr	r4, [r6]
        1a0a58:	e1a00006 	mov	r0, r6
        1a0a5c:	eb6889d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a0a60:	e1a00004 	mov	r0, r4
        1a0a64:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MakeStrokeBundle(RefVar const &, long)
 * Address: 001a1db4
 */
MakeStrokeBundle(RefVar const &, long) {
    /*
        1a1db4:	e1a0c00d 	mov	ip, sp
        1a1db8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1a1dbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a1dc0:	e1a04000 	mov	r4, r0
        1a1dc4:	e1a05001 	mov	r5, r1
        1a1dc8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a1dcc:	e3a00002 	mov	r0, #2	; 0x2
        1a1dd0:	eb6880dd 	bl	1bc214c <$AllocateRefHandle(long)>
        1a1dd4:	e58d0004 	str	r0, [sp, #4]
        1a1dd8:	e3a00002 	mov	r0, #2	; 0x2
        1a1ddc:	eb6880da 	bl	1bc214c <$AllocateRefHandle(long)>
        1a1de0:	e58d0000 	str	r0, [sp]
        1a1de4:	e1a00004 	mov	r0, r4
        1a1de8:	eb6946e7 	bl	1bf398c <$IsArray(RefVar const &)>
        1a1dec:	e3300000 	teq	r0, #0	; 0x0
        1a1df0:	0a000041 	beq	1a1efc <MakeStrokeBundle(RefVar const &, long)+0x148>
        1a1df4:	e5940000 	ldr	r0, [r4]
        1a1df8:	e5900000 	ldr	r0, [r0]
        1a1dfc:	eb688d2a 	bl	1bc52ac <$Length(long)>
        1a1e00:	e3500000 	cmp	r0, #0	; 0x0
        1a1e04:	da00003c 	ble	1a1efc <MakeStrokeBundle(RefVar const &, long)+0x148>
        1a1e08:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a1e0c:	e5940000 	ldr	r0, [r4]
        1a1e10:	e5900000 	ldr	r0, [r0]
        1a1e14:	eb688d24 	bl	1bc52ac <$Length(long)>
        1a1e18:	e1a07000 	mov	r7, r0
        1a1e1c:	e1a01000 	mov	r1, r0
        1a1e20:	e59f00f4 	ldr	r0, [pc, #f4]	; 1a1f1c <MakeStrokeBundle(RefVar const &, long)+0x168>
        1a1e24:	eb6880c3 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1a1e28:	eb6880c7 	bl	1bc214c <$AllocateRefHandle(long)>
        1a1e2c:	e3a06000 	mov	r6, #0	; 0x0
        1a1e30:	e3570000 	cmp	r7, #0	; 0x0
        1a1e34:	e40d0008 	str	r0, [sp], -#8
        1a1e38:	da000014 	ble	1a1e90 <MakeStrokeBundle(RefVar const &, long)+0xdc>
        1a1e3c:	e1a01006 	mov	r1, r6
        1a1e40:	e5940000 	ldr	r0, [r4]
        1a1e44:	e5900000 	ldr	r0, [r0]
        1a1e48:	eb688901 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1a1e4c:	e59d100c 	ldr	r1, [sp, #12]
        1a1e50:	e5810000 	str	r0, [r1]
        1a1e54:	e1a01005 	mov	r1, r5
        1a1e58:	e28d000c 	add	r0, sp, #12	; 0xc
        1a1e5c:	eb644f24 	bl	1ab5af4 <$MakeStrokeRef(RefVar const &, long)>
        1a1e60:	eb6880b9 	bl	1bc214c <$AllocateRefHandle(long)>
        1a1e64:	e1a08000 	mov	r8, r0
        1a1e68:	e1a01006 	mov	r1, r6
        1a1e6c:	e5902000 	ldr	r2, [r0]
        1a1e70:	e59d0008 	ldr	r0, [sp, #8]
        1a1e74:	e5900000 	ldr	r0, [r0]
        1a1e78:	eb689136 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1a1e7c:	e1a00008 	mov	r0, r8
        1a1e80:	eb6884cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a1e84:	e2866001 	add	r6, r6, #1	; 0x1
        1a1e88:	e1560007 	cmp	r6, r7
        1a1e8c:	baffffea 	blt	1a1e3c <MakeStrokeBundle(RefVar const &, long)+0x88>
        1a1e90:	e59f0088 	ldr	r0, [pc, #88]	; 1a1f20 <MakeStrokeBundle(RefVar const &, long)+0x16c>
        1a1e94:	eb6880b4 	bl	1bc216c <$Clone(RefVar const &)>
        1a1e98:	e59d1010 	ldr	r1, [sp, #16]
        1a1e9c:	e28d2008 	add	r2, sp, #8	; 0x8
        1a1ea0:	e5810000 	str	r0, [r1]
        1a1ea4:	e59f1078 	ldr	r1, [pc, #78]	; 1a1f24 <MakeStrokeBundle(RefVar const &, long)+0x170>
        1a1ea8:	e28d0010 	add	r0, sp, #16	; 0x10
        1a1eac:	eb68912d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1a1eb0:	e3a00002 	mov	r0, #2	; 0x2
        1a1eb4:	eb6880a4 	bl	1bc214c <$AllocateRefHandle(long)>
        1a1eb8:	e58d0004 	str	r0, [sp, #4]
        1a1ebc:	e28d0004 	add	r0, sp, #4	; 0x4
        1a1ec0:	e28d1010 	add	r1, sp, #16	; 0x10
        1a1ec4:	eb643646 	bl	1aaf7e4 <$FGetBundleBounds__FRC6RefVarT1>
        1a1ec8:	eb68809f 	bl	1bc214c <$AllocateRefHandle(long)>
        1a1ecc:	e58d0000 	str	r0, [sp]
        1a1ed0:	e1a0200d 	mov	r2, sp
        1a1ed4:	e59f104c 	ldr	r1, [pc, #4c]	; 1a1f28 <MakeStrokeBundle(RefVar const &, long)+0x174>
        1a1ed8:	e28d0010 	add	r0, sp, #16	; 0x10
        1a1edc:	eb689121 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1a1ee0:	e59d0000 	ldr	r0, [sp]
        1a1ee4:	eb6884b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a1ee8:	e59d0004 	ldr	r0, [sp, #4]
        1a1eec:	eb6884b2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a1ef0:	e5bd0008 	ldr	r0, [sp, #8]!
        1a1ef4:	eb6884b0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a1ef8:	e28dd004 	add	sp, sp, #4	; 0x4
        1a1efc:	e59d0004 	ldr	r0, [sp, #4]
        1a1f00:	e5904000 	ldr	r4, [r0]
        1a1f04:	e59d0000 	ldr	r0, [sp]
        1a1f08:	eb6884ab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a1f0c:	e59d0004 	ldr	r0, [sp, #4]
        1a1f10:	eb6884a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a1f14:	e1a00004 	mov	r0, r4
        1a1f18:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1a1f1c:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        1a1f20:	00681860 	rsbeq	r1, r8, r0, ror #16
        1a1f24:	00684900 	rsbeq	r4, r8, r0, lsl #18
        1a1f28:	00682190 	streqb	r2, [r8], -#16
    */
}

/**
 * Symbol: MakeStrokeRef(RefVar const &, long)
 * Address: 001a1f2c
 */
MakeStrokeRef(RefVar const &, long) {
    /*
        1a1f2c:	e1a0c00d 	mov	ip, sp
        1a1f30:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1a1f34:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a1f38:	e1a04000 	mov	r4, r0
        1a1f3c:	e1a05001 	mov	r5, r1
        1a1f40:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1a1f44:	e5900000 	ldr	r0, [r0]
        1a1f48:	e5900000 	ldr	r0, [r0]
        1a1f4c:	eb688cd6 	bl	1bc52ac <$Length(long)>
        1a1f50:	e0800fa0 	add	r0, r0, r0, lsr #31
        1a1f54:	e1a000c0 	mov	r0, r0, asr #1
        1a1f58:	e1a08000 	mov	r8, r0
        1a1f5c:	e1a01100 	mov	r1, r0, lsl #2
        1a1f60:	e59f00d8 	ldr	r0, [pc, #d8]	; 1a2040 <MakeStrokeRef(RefVar const &, long)+0x114>
        1a1f64:	eb688074 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1a1f68:	eb688077 	bl	1bc214c <$AllocateRefHandle(long)>
        1a1f6c:	e58d0008 	str	r0, [sp, #8]
        1a1f70:	e28d1008 	add	r1, sp, #8	; 0x8
        1a1f74:	e1a0000d 	mov	r0, sp
        1a1f78:	eb687c56 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        1a1f7c:	e1a0100d 	mov	r1, sp
        1a1f80:	e28d0004 	add	r0, sp, #4	; 0x4
        1a1f84:	eb687c52 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        1a1f88:	e1a0000d 	mov	r0, sp
        1a1f8c:	e3a01000 	mov	r1, #0	; 0x0
        1a1f90:	eb68805a 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1a1f94:	e28d0004 	add	r0, sp, #4	; 0x4
        1a1f98:	eb68805d 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1a1f9c:	e1a07000 	mov	r7, r0
        1a1fa0:	e3a06000 	mov	r6, #0	; 0x0
        1a1fa4:	e3580000 	cmp	r8, #0	; 0x0
        1a1fa8:	9a00001b 	bls	1a201c <MakeStrokeRef(RefVar const &, long)+0xf0>
        1a1fac:	e3a09001 	mov	r9, #1	; 0x1
        1a1fb0:	e3550001 	cmp	r5, #1	; 0x1
        1a1fb4:	e0891086 	add	r1, r9, r6, lsl #1
        1a1fb8:	e5940000 	ldr	r0, [r4]
        1a1fbc:	e5900000 	ldr	r0, [r0]
        1a1fc0:	da00001f 	ble	1a2044 <MakeStrokeRef(RefVar const &, long)+0x118>
        1a1fc4:	eb6888a2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1a1fc8:	e3100003 	tst	r0, #3	; 0x3
        1a1fcc:	01a00140 	moveq	r0, r0, asr #2
        1a1fd0:	0a000000 	beq	1a1fd8 <MakeStrokeRef(RefVar const &, long)+0xac>
        1a1fd4:	eb688050 	bl	1bc211c <$_RINTError(long)>
        1a1fd8:	e5c70003 	strb	r0, [r7, #3]
        1a1fdc:	e1a00440 	mov	r0, r0, asr #8
        1a1fe0:	e5c70002 	strb	r0, [r7, #2]
        1a1fe4:	e1a01086 	mov	r1, r6, lsl #1
        1a1fe8:	e5940000 	ldr	r0, [r4]
        1a1fec:	e5900000 	ldr	r0, [r0]
        1a1ff0:	eb688897 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1a1ff4:	e3100003 	tst	r0, #3	; 0x3
        1a1ff8:	01a00140 	moveq	r0, r0, asr #2
        1a1ffc:	0a000000 	beq	1a2004 <MakeStrokeRef(RefVar const &, long)+0xd8>
        1a2000:	eb688045 	bl	1bc211c <$_RINTError(long)>
        1a2004:	e5c70001 	strb	r0, [r7, #1]
        1a2008:	e1a00440 	mov	r0, r0, asr #8
        1a200c:	e4c70004 	strb	r0, [r7], #4
        1a2010:	e2866001 	add	r6, r6, #1	; 0x1
        1a2014:	e1560008 	cmp	r6, r8
        1a2018:	3affffe4 	bcc	1a1fb0 <MakeStrokeRef(RefVar const &, long)+0x84>
        1a201c:	e59d0008 	ldr	r0, [sp, #8]
        1a2020:	e5904000 	ldr	r4, [r0]
        1a2024:	e28d0004 	add	r0, sp, #4	; 0x4
        1a2028:	e3a01000 	mov	r1, #0	; 0x0
        1a202c:	eb688033 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1a2030:	e59d0008 	ldr	r0, [sp, #8]
        1a2034:	eb688460 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2038:	e1a00004 	mov	r0, r4
        1a203c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1a2040:	006848e8 	rsbeq	r4, r8, r8, ror #17
        1a2044:	eb688882 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1a2048:	e3100003 	tst	r0, #3	; 0x3
        1a204c:	01a00140 	moveq	r0, r0, asr #2
        1a2050:	0a000000 	beq	1a2058 <MakeStrokeRef(RefVar const &, long)+0x12c>
        1a2054:	eb688030 	bl	1bc211c <$_RINTError(long)>
        1a2058:	e1a00180 	mov	r0, r0, lsl #3
        1a205c:	e5c70003 	strb	r0, [r7, #3]
        1a2060:	e1a00440 	mov	r0, r0, asr #8
        1a2064:	e5c70002 	strb	r0, [r7, #2]
        1a2068:	e1a01086 	mov	r1, r6, lsl #1
        1a206c:	e5940000 	ldr	r0, [r4]
        1a2070:	e5900000 	ldr	r0, [r0]
        1a2074:	eb688876 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1a2078:	e3100003 	tst	r0, #3	; 0x3
        1a207c:	01a00140 	moveq	r0, r0, asr #2
        1a2080:	0a000000 	beq	1a2088 <MakeStrokeRef(RefVar const &, long)+0x15c>
        1a2084:	eb688024 	bl	1bc211c <$_RINTError(long)>
        1a2088:	e1a00180 	mov	r0, r0, lsl #3
        1a208c:	eaffffdc 	b	1a2004 <MakeStrokeRef(RefVar const &, long)+0xd8>
    */
}

/**
 * Symbol: MakeStrokeRef(TStroke *)
 * Address: 001a2474
 */
MakeStrokeRef(TStroke *) {
    /*
        1a2474:	e1a0c00d 	mov	ip, sp
        1a2478:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a247c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a2480:	e1a04000 	mov	r4, r0
        1a2484:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1a2488:	e590700c 	ldr	r7, [r0, #12]
        1a248c:	e1a01107 	mov	r1, r7, lsl #2
        1a2490:	e59f00b8 	ldr	r0, [pc, #b8]	; 1a2550 <MakeStrokeRef(TStroke *)+0xdc>
        1a2494:	eb687f28 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1a2498:	eb687f2b 	bl	1bc214c <$AllocateRefHandle(long)>
        1a249c:	e58d0008 	str	r0, [sp, #8]
        1a24a0:	e28d1008 	add	r1, sp, #8	; 0x8
        1a24a4:	e1a0000d 	mov	r0, sp
        1a24a8:	eb687b0a 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        1a24ac:	e1a0100d 	mov	r1, sp
        1a24b0:	e28d0004 	add	r0, sp, #4	; 0x4
        1a24b4:	eb687b06 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
        1a24b8:	e1a0000d 	mov	r0, sp
        1a24bc:	e3a01000 	mov	r1, #0	; 0x0
        1a24c0:	eb687f0e 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1a24c4:	e28d0004 	add	r0, sp, #4	; 0x4
        1a24c8:	eb687f11 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1a24cc:	e1a05000 	mov	r5, r0
        1a24d0:	e1a00004 	mov	r0, r4
        1a24d4:	e3a01000 	mov	r1, #0	; 0x0
        1a24d8:	eb672442 	bl	1b6b5e8 <TStroke::$GetPoint(long)>
        1a24dc:	e1a04000 	mov	r4, r0
        1a24e0:	e3a06000 	mov	r6, #0	; 0x0
        1a24e4:	e3570000 	cmp	r7, #0	; 0x0
        1a24e8:	9a00000f 	bls	1a252c <MakeStrokeRef(TStroke *)+0xb8>
        1a24ec:	e1a00004 	mov	r0, r4
        1a24f0:	eb672c71 	bl	1b6d6bc <$SampleX(SamplePt *)>
        1a24f4:	e1a006c0 	mov	r0, r0, asr #13
        1a24f8:	e5c50003 	strb	r0, [r5, #3]
        1a24fc:	e1a00440 	mov	r0, r0, asr #8
        1a2500:	e5c50002 	strb	r0, [r5, #2]
        1a2504:	e1a00004 	mov	r0, r4
        1a2508:	eb672c6c 	bl	1b6d6c0 <$SampleY(SamplePt *)>
        1a250c:	e1a006c0 	mov	r0, r0, asr #13
        1a2510:	e5c50001 	strb	r0, [r5, #1]
        1a2514:	e1a00440 	mov	r0, r0, asr #8
        1a2518:	e4c50004 	strb	r0, [r5], #4
        1a251c:	e2866001 	add	r6, r6, #1	; 0x1
        1a2520:	e2844004 	add	r4, r4, #4	; 0x4
        1a2524:	e1560007 	cmp	r6, r7
        1a2528:	3affffef 	bcc	1a24ec <MakeStrokeRef(TStroke *)+0x78>
        1a252c:	e59d0008 	ldr	r0, [sp, #8]
        1a2530:	e5904000 	ldr	r4, [r0]
        1a2534:	e28d0004 	add	r0, sp, #4	; 0x4
        1a2538:	e3a01000 	mov	r1, #0	; 0x0
        1a253c:	eb687eef 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1a2540:	e59d0008 	ldr	r0, [sp, #8]
        1a2544:	eb68831c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2548:	e1a00004 	mov	r0, r4
        1a254c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a2550:	006848e8 	rsbeq	r4, r8, r8, ror #17
    */
}

/**
 * Symbol: MergeInk__FRC6RefVarT1
 * Address: 001a2fc4
 */
void globals::MergeInk() {
    /*
        1a2fc4:	e1a0c00d 	mov	ip, sp
        1a2fc8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1a2fcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a2fd0:	e1a05000 	mov	r5, r0
        1a2fd4:	e1a04001 	mov	r4, r1
        1a2fd8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a2fdc:	e3a00002 	mov	r0, #2	; 0x2
        1a2fe0:	eb687c59 	bl	1bc214c <$AllocateRefHandle(long)>
        1a2fe4:	e1a07000 	mov	r7, r0
        1a2fe8:	e59f10fc 	ldr	r1, [pc, #fc]	; 1a30ec <MergeInk__FRC6RefVarT1+0x128>
        1a2fec:	e1a06001 	mov	r6, r1
        1a2ff0:	e1a00005 	mov	r0, r5
        1a2ff4:	e3a02000 	mov	r2, #0	; 0x0
        1a2ff8:	eb68849a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1a2ffc:	eb687c52 	bl	1bc214c <$AllocateRefHandle(long)>
        1a3000:	e1a01006 	mov	r1, r6
        1a3004:	e58d0004 	str	r0, [sp, #4]
        1a3008:	e1a00004 	mov	r0, r4
        1a300c:	e3a02000 	mov	r2, #0	; 0x0
        1a3010:	eb688494 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1a3014:	eb687c4c 	bl	1bc214c <$AllocateRefHandle(long)>
        1a3018:	e58d0000 	str	r0, [sp]
        1a301c:	e28d0004 	add	r0, sp, #4	; 0x4
        1a3020:	eb64ba2b 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        1a3024:	e3a08000 	mov	r8, #0	; 0x0
        1a3028:	e3300000 	teq	r0, #0	; 0x0
        1a302c:	0a000059 	beq	1a3198 <MergeInk__FRC6RefVarT1+0x1d4>
        1a3030:	e1a0000d 	mov	r0, sp
        1a3034:	eb64ba26 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        1a3038:	e3300000 	teq	r0, #0	; 0x0
        1a303c:	0a000055 	beq	1a3198 <MergeInk__FRC6RefVarT1+0x1d4>
        1a3040:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        1a3044:	e1a0100d 	mov	r1, sp
        1a3048:	e28d0040 	add	r0, sp, #64	; 0x40
        1a304c:	eb643e37 	bl	1ab2930 <$GetInkWordInfo(RefVar const &, InkWordInfo *)>
        1a3050:	e24dd010 	sub	sp, sp, #16	; 0x10
        1a3054:	e1a00005 	mov	r0, r5
        1a3058:	e3a01000 	mov	r1, #0	; 0x0
        1a305c:	eb643e3e 	bl	1ab295c <$GetPolyAsTStrokes(RefVar const &, unsigned long)>
        1a3060:	e1a06000 	mov	r6, r0
        1a3064:	e1a00004 	mov	r0, r4
        1a3068:	e3a01000 	mov	r1, #0	; 0x0
        1a306c:	eb643e3a 	bl	1ab295c <$GetPolyAsTStrokes(RefVar const &, unsigned long)>
        1a3070:	e1a05000 	mov	r5, r0
        1a3074:	e28d1008 	add	r1, sp, #8	; 0x8
        1a3078:	e1a00006 	mov	r0, r6
        1a307c:	eb644678 	bl	1ab4a64 <$InkBounds(TStroke **, TRect *)>
        1a3080:	e1a0100d 	mov	r1, sp
        1a3084:	e1a00005 	mov	r0, r5
        1a3088:	eb644675 	bl	1ab4a64 <$InkBounds(TStroke **, TRect *)>
        1a308c:	e59d100c 	ldr	r1, [sp, #12]
        1a3090:	e59d0000 	ldr	r0, [sp]
        1a3094:	e0410000 	sub	r0, r1, r0
        1a3098:	e1a01800 	mov	r1, r0, lsl #16
        1a309c:	e1a00005 	mov	r0, r5
        1a30a0:	e3a02000 	mov	r2, #0	; 0x0
        1a30a4:	eb644eaa 	bl	1ab6b54 <$OffsetStrokes__FPP7TStrokelT2>
        1a30a8:	e1a00006 	mov	r0, r6
        1a30ac:	eb64214f 	bl	1aab5f0 <$CountTStrokes(TStroke **)>
        1a30b0:	e1a04000 	mov	r4, r0
        1a30b4:	e1a00005 	mov	r0, r5
        1a30b8:	eb64214c 	bl	1aab5f0 <$CountTStrokes(TStroke **)>
        1a30bc:	e0840000 	add	r0, r4, r0
        1a30c0:	e2800001 	add	r0, r0, #1	; 0x1
        1a30c4:	e1a00100 	mov	r0, r0, lsl #2
        1a30c8:	eb68fc1d 	bl	1be2144 <$NewPtrClear>
        1a30cc:	e1a04000 	mov	r4, r0
        1a30d0:	e3360000 	teq	r6, #0	; 0x0
        1a30d4:	13350000 	teqne	r5, #0	; 0x0
        1a30d8:	13340000 	teqne	r4, #0	; 0x0
        1a30dc:	13a00000 	movne	r0, #0	; 0x0
        1a30e0:	13a01000 	movne	r1, #0	; 0x0
        1a30e4:	1a000003 	bne	1a30f8 <MergeInk__FRC6RefVarT1+0x134>
        1a30e8:	ea000021 	b	1a3174 <MergeInk__FRC6RefVarT1+0x1b0>
        1a30ec:	00683220 	rsbeq	r3, r8, r0, lsr #4
        1a30f0:	e2811001 	add	r1, r1, #1	; 0x1
        1a30f4:	e2800001 	add	r0, r0, #1	; 0x1
        1a30f8:	e7962101 	ldr	r2, [r6, r1, lsl #2]
        1a30fc:	e7842100 	str	r2, [r4, r0, lsl #2]
        1a3100:	e3320000 	teq	r2, #0	; 0x0
        1a3104:	1afffff9 	bne	1a30f0 <MergeInk__FRC6RefVarT1+0x12c>
        1a3108:	e3a01000 	mov	r1, #0	; 0x0
        1a310c:	ea000001 	b	1a3118 <MergeInk__FRC6RefVarT1+0x154>
        1a3110:	e2811001 	add	r1, r1, #1	; 0x1
        1a3114:	e2800001 	add	r0, r0, #1	; 0x1
        1a3118:	e7952101 	ldr	r2, [r5, r1, lsl #2]
        1a311c:	e7842100 	str	r2, [r4, r0, lsl #2]
        1a3120:	e3320000 	teq	r2, #0	; 0x0
        1a3124:	1afffff9 	bne	1a3110 <MergeInk__FRC6RefVarT1+0x14c>
        1a3128:	e1a00004 	mov	r0, r4
        1a312c:	eb644a6b 	bl	1ab5ae0 <$MakeInkWordPoly(TStroke **)>
        1a3130:	e5870000 	str	r0, [r7]
        1a3134:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a3138:	e51f1054 	ldr	r1, [pc, #ffffffac]	; 1a30ec <MergeInk__FRC6RefVarT1+0x128>
        1a313c:	e5911000 	ldr	r1, [r1]
        1a3140:	e5911000 	ldr	r1, [r1]
        1a3144:	eb688445 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1a3148:	eb687bff 	bl	1bc214c <$AllocateRefHandle(long)>
        1a314c:	e58d0000 	str	r0, [sp]
        1a3150:	e59d1028 	ldr	r1, [sp, #40]
        1a3154:	e1a0000d 	mov	r0, sp
        1a3158:	eb64c21b 	bl	1ad39cc <$SetInkWordScale(RefVar const &, long)>
        1a315c:	e59d102c 	ldr	r1, [sp, #44]
        1a3160:	e1a0000d 	mov	r0, sp
        1a3164:	eb64c217 	bl	1ad39c8 <$SetInkWordPenSize(RefVar const &, unsigned long)>
        1a3168:	e59d0000 	ldr	r0, [sp]
        1a316c:	eb688012 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a3170:	e28dd004 	add	sp, sp, #4	; 0x4
        1a3174:	e1a00006 	mov	r0, r6
        1a3178:	eb642526 	bl	1aac618 <$DisposeTStrokes(TStroke **)>
        1a317c:	e1a00005 	mov	r0, r5
        1a3180:	eb642524 	bl	1aac618 <$DisposeTStrokes(TStroke **)>
        1a3184:	e3340000 	teq	r4, #0	; 0x0
        1a3188:	15848000 	strne	r8, [r4]
        1a318c:	e1a00004 	mov	r0, r4
        1a3190:	eb642520 	bl	1aac618 <$DisposeTStrokes(TStroke **)>
        1a3194:	e28dd04c 	add	sp, sp, #76	; 0x4c
        1a3198:	e5974000 	ldr	r4, [r7]
        1a319c:	e59d0000 	ldr	r0, [sp]
        1a31a0:	eb688005 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a31a4:	e59d0004 	ldr	r0, [sp, #4]
        1a31a8:	eb688003 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a31ac:	e1a00007 	mov	r0, r7
        1a31b0:	eb688001 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a31b4:	e1a00004 	mov	r0, r4
        1a31b8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MakeInkPoly(TStroke **)
 * Address: 001a31bc
 */
MakeInkPoly(TStroke **) {
    /*
        1a31bc:	e1a0c00d 	mov	ip, sp
        1a31c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a31c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a31c8:	e24dd010 	sub	sp, sp, #16	; 0x10
        1a31cc:	e28d1008 	add	r1, sp, #8	; 0x8
        1a31d0:	eb645ee4 	bl	1abad68 <$TStrokesToInk(TStroke **, TRect *)>
        1a31d4:	eb687bdc 	bl	1bc214c <$AllocateRefHandle(long)>
        1a31d8:	e58d0004 	str	r0, [sp, #4]
        1a31dc:	e59f0064 	ldr	r0, [pc, #64]	; 1a3248 <MakeInkPoly(TStroke **)+0x8c>
        1a31e0:	eb63ce47 	bl	1a96b04 <$GetPreference(RefVar const &)>
        1a31e4:	e3100003 	tst	r0, #3	; 0x3
        1a31e8:	01a00140 	moveq	r0, r0, asr #2
        1a31ec:	0a000000 	beq	1a31f4 <MakeInkPoly(TStroke **)+0x38>
        1a31f0:	eb687bc9 	bl	1bc211c <$_RINTError(long)>
        1a31f4:	e1a03000 	mov	r3, r0
        1a31f8:	e92d0008 	stmdb	sp!, {r3}
        1a31fc:	e28d300c 	add	r3, sp, #12	; 0xc
        1a3200:	e3a0200e 	mov	r2, #14	; 0xe
        1a3204:	e3a01000 	mov	r1, #0	; 0x0
        1a3208:	e3a00000 	mov	r0, #0	; 0x0
        1a320c:	eb63e2ea 	bl	1a9bdbc <$MakePolygonForm__FP6TPointlT2RC5TRectT2>
        1a3210:	e28dd004 	add	sp, sp, #4	; 0x4
        1a3214:	eb687bcc 	bl	1bc214c <$AllocateRefHandle(long)>
        1a3218:	e58d0000 	str	r0, [sp]
        1a321c:	e28d2004 	add	r2, sp, #4	; 0x4
        1a3220:	e59f1024 	ldr	r1, [pc, #24]	; 1a324c <MakeInkPoly(TStroke **)+0x90>
        1a3224:	e1a0000d 	mov	r0, sp
        1a3228:	eb688c4e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1a322c:	e59d0000 	ldr	r0, [sp]
        1a3230:	e5904000 	ldr	r4, [r0]
        1a3234:	eb687fe0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a3238:	e59d0004 	ldr	r0, [sp, #4]
        1a323c:	eb687fde 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a3240:	e1a00004 	mov	r0, r4
        1a3244:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1a3248:	00684e50 	rsbeq	r4, r8, r0, asr lr
        1a324c:	00683220 	rsbeq	r3, r8, r0, lsr #4
    */
}

/**
 * Symbol: MakeInkWordPoly(TStroke **)
 * Address: 001a3250
 */
MakeInkWordPoly(TStroke **) {
    /*
        1a3250:	e1a0c00d 	mov	ip, sp
        1a3254:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a3258:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a325c:	e24dd048 	sub	sp, sp, #72	; 0x48
        1a3260:	e28d1040 	add	r1, sp, #64	; 0x40
        1a3264:	eb645ebe 	bl	1abad64 <$TStrokesToInkWord(TStroke **, TRect *)>
        1a3268:	eb687bb7 	bl	1bc214c <$AllocateRefHandle(long)>
        1a326c:	e58d003c 	str	r0, [sp, #60]
        1a3270:	e1a0100d 	mov	r1, sp
        1a3274:	e28d003c 	add	r0, sp, #60	; 0x3c
        1a3278:	eb643dac 	bl	1ab2930 <$GetInkWordInfo(RefVar const &, InkWordInfo *)>
        1a327c:	e59d1040 	ldr	r1, [sp, #64]
        1a3280:	e59d0000 	ldr	r0, [sp]
        1a3284:	e0811000 	add	r1, r1, r0
        1a3288:	e59d0018 	ldr	r0, [sp, #24]
        1a328c:	e0810000 	add	r0, r1, r0
        1a3290:	e5cd0047 	strb	r0, [sp, #71]
        1a3294:	e1a00440 	mov	r0, r0, asr #8
        1a3298:	e5cd0046 	strb	r0, [sp, #70]
        1a329c:	e59d0004 	ldr	r0, [sp, #4]
        1a32a0:	e59d1042 	ldr	r1, [sp, #66]
        1a32a4:	e0801001 	add	r1, r0, r1
        1a32a8:	e59d0008 	ldr	r0, [sp, #8]
        1a32ac:	e0811000 	add	r1, r1, r0
        1a32b0:	e59d0018 	ldr	r0, [sp, #24]
        1a32b4:	e0810000 	add	r0, r1, r0
        1a32b8:	e5cd0045 	strb	r0, [sp, #69]
        1a32bc:	e1a00440 	mov	r0, r0, asr #8
        1a32c0:	e5cd0044 	strb	r0, [sp, #68]
        1a32c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a32c8:	e59d301c 	ldr	r3, [sp, #28]
        1a32cc:	e92d0008 	stmdb	sp!, {r3}
        1a32d0:	e28d3048 	add	r3, sp, #72	; 0x48
        1a32d4:	e3a0200e 	mov	r2, #14	; 0xe
        1a32d8:	e3a01000 	mov	r1, #0	; 0x0
        1a32dc:	e3a00000 	mov	r0, #0	; 0x0
        1a32e0:	eb63e2b5 	bl	1a9bdbc <$MakePolygonForm__FP6TPointlT2RC5TRectT2>
        1a32e4:	e28dd004 	add	sp, sp, #4	; 0x4
        1a32e8:	eb687b97 	bl	1bc214c <$AllocateRefHandle(long)>
        1a32ec:	e58d0000 	str	r0, [sp]
        1a32f0:	e28d2040 	add	r2, sp, #64	; 0x40
        1a32f4:	e59f1020 	ldr	r1, [pc, #20]	; 1a331c <MakeInkWordPoly(TStroke **)+0xcc>
        1a32f8:	e1a0000d 	mov	r0, sp
        1a32fc:	eb688c19 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1a3300:	e59d0000 	ldr	r0, [sp]
        1a3304:	e5904000 	ldr	r4, [r0]
        1a3308:	eb687fab 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a330c:	e59d0040 	ldr	r0, [sp, #64]
        1a3310:	eb687fa9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a3314:	e1a00004 	mov	r0, r4
        1a3318:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1a331c:	00683220 	rsbeq	r3, r8, r0, lsr #4
    */
}

/**
 * Symbol: MapPoint
 * Address: 001a42e4
 */
void globals::MapPoint() {
    /*
        1a42e4:	e1a0c00d 	mov	ip, sp
        1a42e8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a42ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a42f0:	e1a06000 	mov	r6, r0
        1a42f4:	e1a05001 	mov	r5, r1
        1a42f8:	e1a04002 	mov	r4, r2
        1a42fc:	e591100c 	ldr	r1, [r1, #12]
        1a4300:	e5950004 	ldr	r0, [r5, #4]
        1a4304:	e0411000 	sub	r1, r1, r0
        1a4308:	e592200c 	ldr	r2, [r2, #12]
        1a430c:	e5943004 	ldr	r3, [r4, #4]
        1a4310:	e0427003 	sub	r7, r2, r3
        1a4314:	e5962004 	ldr	r2, [r6, #4]
        1a4318:	e0420000 	sub	r0, r2, r0
        1a431c:	e1310007 	teq	r1, r7
        1a4320:	0a000003 	beq	1a4334 <MapPoint+0x50>
        1a4324:	eb68f365 	bl	1be10c0 <$FixedDivide>
        1a4328:	e1a01000 	mov	r1, r0
        1a432c:	e1a00007 	mov	r0, r7
        1a4330:	eb68f363 	bl	1be10c4 <$FixedMultiply>
        1a4334:	e5941004 	ldr	r1, [r4, #4]
        1a4338:	e0810000 	add	r0, r1, r0
        1a433c:	e5860004 	str	r0, [r6, #4]
        1a4340:	e4950008 	ldr	r0, [r5], #8
        1a4344:	e5951000 	ldr	r1, [r5]
        1a4348:	e0411000 	sub	r1, r1, r0
        1a434c:	e5942008 	ldr	r2, [r4, #8]
        1a4350:	e5943000 	ldr	r3, [r4]
        1a4354:	e0425003 	sub	r5, r2, r3
        1a4358:	e5962000 	ldr	r2, [r6]
        1a435c:	e0420000 	sub	r0, r2, r0
        1a4360:	e1310005 	teq	r1, r5
        1a4364:	0a000003 	beq	1a4378 <MapPoint+0x94>
        1a4368:	eb68f354 	bl	1be10c0 <$FixedDivide>
        1a436c:	e1a01000 	mov	r1, r0
        1a4370:	e1a00005 	mov	r0, r5
        1a4374:	eb68f352 	bl	1be10c4 <$FixedMultiply>
        1a4378:	e5941000 	ldr	r1, [r4]
        1a437c:	e0800001 	add	r0, r0, r1
        1a4380:	e5860000 	str	r0, [r6]
        1a4384:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MungeStyles__FRC6RefVarT1
 * Address: 001a4bb0
 */
void globals::MungeStyles() {
    /*
        1a4bb0:	e1a0c00d 	mov	ip, sp
        1a4bb4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1a4bb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a4bbc:	e1a05000 	mov	r5, r0
        1a4bc0:	e1a06001 	mov	r6, r1
        1a4bc4:	e3a00002 	mov	r0, #2	; 0x2
        1a4bc8:	eb68755f 	bl	1bc214c <$AllocateRefHandle(long)>
        1a4bcc:	e1a04000 	mov	r4, r0
        1a4bd0:	e1a00005 	mov	r0, r5
        1a4bd4:	eb693b6c 	bl	1bf398c <$IsArray(RefVar const &)>
        1a4bd8:	e3300000 	teq	r0, #0	; 0x0
        1a4bdc:	0a000032 	beq	1a4cac <MungeStyles__FRC6RefVarT1+0xfc>
        1a4be0:	e5950000 	ldr	r0, [r5]
        1a4be4:	e5900000 	ldr	r0, [r0]
        1a4be8:	eb6881af 	bl	1bc52ac <$Length(long)>
        1a4bec:	e1a07000 	mov	r7, r0
        1a4bf0:	e1a00005 	mov	r0, r5
        1a4bf4:	eb68755c 	bl	1bc216c <$Clone(RefVar const &)>
        1a4bf8:	e5840000 	str	r0, [r4]
        1a4bfc:	e1a00006 	mov	r0, r6
        1a4c00:	ebff5828 	bl	17aca8 <GetFontSize(RefVar const &)>
        1a4c04:	e1a08000 	mov	r8, r0
        1a4c08:	e3a05001 	mov	r5, #1	; 0x1
        1a4c0c:	e3570001 	cmp	r7, #1	; 0x1
        1a4c10:	da000028 	ble	1a4cb8 <MungeStyles__FRC6RefVarT1+0x108>
        1a4c14:	e24dd008 	sub	sp, sp, #8	; 0x8
        1a4c18:	e1a01005 	mov	r1, r5
        1a4c1c:	e5940000 	ldr	r0, [r4]
        1a4c20:	eb687d8b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1a4c24:	eb687548 	bl	1bc214c <$AllocateRefHandle(long)>
        1a4c28:	e58d0000 	str	r0, [sp]
        1a4c2c:	e1a0000d 	mov	r0, sp
        1a4c30:	eb64b327 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        1a4c34:	e3300000 	teq	r0, #0	; 0x0
        1a4c38:	13a06000 	movne	r6, #0	; 0x0
        1a4c3c:	03a06001 	moveq	r6, #1	; 0x1
        1a4c40:	e59d0000 	ldr	r0, [sp]
        1a4c44:	eb68795c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a4c48:	e3360000 	teq	r6, #0	; 0x0
        1a4c4c:	0a000011 	beq	1a4c98 <MungeStyles__FRC6RefVarT1+0xe8>
        1a4c50:	e1a01005 	mov	r1, r5
        1a4c54:	e5940000 	ldr	r0, [r4]
        1a4c58:	eb687d7d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1a4c5c:	eb68753a 	bl	1bc214c <$AllocateRefHandle(long)>
        1a4c60:	e58d0004 	str	r0, [sp, #4]
        1a4c64:	e28d0004 	add	r0, sp, #4	; 0x4
        1a4c68:	e1a01008 	mov	r1, r8
        1a4c6c:	eb63f529 	bl	1aa2118 <$SetFontSize(RefVar const &, long)>
        1a4c70:	eb687535 	bl	1bc214c <$AllocateRefHandle(long)>
        1a4c74:	e1a06000 	mov	r6, r0
        1a4c78:	e5902000 	ldr	r2, [r0]
        1a4c7c:	e1a01005 	mov	r1, r5
        1a4c80:	e5940000 	ldr	r0, [r4]
        1a4c84:	eb6885b3 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1a4c88:	e1a00006 	mov	r0, r6
        1a4c8c:	eb68794a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a4c90:	e59d0004 	ldr	r0, [sp, #4]
        1a4c94:	eb687948 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a4c98:	e28dd008 	add	sp, sp, #8	; 0x8
        1a4c9c:	e2855002 	add	r5, r5, #2	; 0x2
        1a4ca0:	e1550007 	cmp	r5, r7
        1a4ca4:	baffffda 	blt	1a4c14 <MungeStyles__FRC6RefVarT1+0x64>
        1a4ca8:	ea000002 	b	1a4cb8 <MungeStyles__FRC6RefVarT1+0x108>
        1a4cac:	e5950000 	ldr	r0, [r5]
        1a4cb0:	e5900000 	ldr	r0, [r0]
        1a4cb4:	e5840000 	str	r0, [r4]
        1a4cb8:	e5945000 	ldr	r5, [r4]
        1a4cbc:	e1a00004 	mov	r0, r4
        1a4cc0:	eb68793d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a4cc4:	e1a00005 	mov	r0, r5
        1a4cc8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MungeAllStyles__FRC6RefVarT1
 * Address: 001a4ccc
 */
void globals::MungeAllStyles() {
    /*
        1a4ccc:	e1a0c00d 	mov	ip, sp
        1a4cd0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a4cd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a4cd8:	e1a04000 	mov	r4, r0
        1a4cdc:	e1a05001 	mov	r5, r1
        1a4ce0:	e3a00002 	mov	r0, #2	; 0x2
        1a4ce4:	eb687518 	bl	1bc214c <$AllocateRefHandle(long)>
        1a4ce8:	e1a06000 	mov	r6, r0
        1a4cec:	e1a00004 	mov	r0, r4
        1a4cf0:	eb693b25 	bl	1bf398c <$IsArray(RefVar const &)>
        1a4cf4:	e3300000 	teq	r0, #0	; 0x0
        1a4cf8:	0a000021 	beq	1a4d84 <MungeAllStyles__FRC6RefVarT1+0xb8>
        1a4cfc:	e5940000 	ldr	r0, [r4]
        1a4d00:	e5900000 	ldr	r0, [r0]
        1a4d04:	eb688168 	bl	1bc52ac <$Length(long)>
        1a4d08:	e1a07000 	mov	r7, r0
        1a4d0c:	e1a00004 	mov	r0, r4
        1a4d10:	eb687515 	bl	1bc216c <$Clone(RefVar const &)>
        1a4d14:	e5860000 	str	r0, [r6]
        1a4d18:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a4d1c:	e3a00002 	mov	r0, #2	; 0x2
        1a4d20:	eb687509 	bl	1bc214c <$AllocateRefHandle(long)>
        1a4d24:	e3a04001 	mov	r4, #1	; 0x1
        1a4d28:	e3570001 	cmp	r7, #1	; 0x1
        1a4d2c:	e58d0000 	str	r0, [sp]
        1a4d30:	da000010 	ble	1a4d78 <MungeAllStyles__FRC6RefVarT1+0xac>
        1a4d34:	e1a01004 	mov	r1, r4
        1a4d38:	e5960000 	ldr	r0, [r6]
        1a4d3c:	eb687d44 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1a4d40:	e59d1000 	ldr	r1, [sp]
        1a4d44:	e5810000 	str	r0, [r1]
        1a4d48:	e1a0000d 	mov	r0, sp
        1a4d4c:	eb64b2e0 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        1a4d50:	e3300000 	teq	r0, #0	; 0x0
        1a4d54:	1a000004 	bne	1a4d6c <MungeAllStyles__FRC6RefVarT1+0xa0>
        1a4d58:	e5950000 	ldr	r0, [r5]
        1a4d5c:	e5902000 	ldr	r2, [r0]
        1a4d60:	e1a01004 	mov	r1, r4
        1a4d64:	e5960000 	ldr	r0, [r6]
        1a4d68:	eb68857a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1a4d6c:	e2844002 	add	r4, r4, #2	; 0x2
        1a4d70:	e1540007 	cmp	r4, r7
        1a4d74:	baffffee 	blt	1a4d34 <MungeAllStyles__FRC6RefVarT1+0x68>
        1a4d78:	e59d0000 	ldr	r0, [sp]
        1a4d7c:	eb68790e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a4d80:	e28dd004 	add	sp, sp, #4	; 0x4
        1a4d84:	e5964000 	ldr	r4, [r6]
        1a4d88:	e1a00006 	mov	r0, r6
        1a4d8c:	eb68790a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a4d90:	e1a00004 	mov	r0, r4
        1a4d94:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MungeInkScale__FRC6RefVarT1
 * Address: 001a4d98
 */
void globals::MungeInkScale() {
    /*
        1a4d98:	e1a0c00d 	mov	ip, sp
        1a4d9c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a4da0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a4da4:	e1a04000 	mov	r4, r0
        1a4da8:	e1a05001 	mov	r5, r1
        1a4dac:	e3a00002 	mov	r0, #2	; 0x2
        1a4db0:	eb6874e5 	bl	1bc214c <$AllocateRefHandle(long)>
        1a4db4:	e1a06000 	mov	r6, r0
        1a4db8:	e1a00004 	mov	r0, r4
        1a4dbc:	eb693af2 	bl	1bf398c <$IsArray(RefVar const &)>
        1a4dc0:	e3300000 	teq	r0, #0	; 0x0
        1a4dc4:	0a000028 	beq	1a4e6c <MungeInkScale__FRC6RefVarT1+0xd4>
        1a4dc8:	e5940000 	ldr	r0, [r4]
        1a4dcc:	e5900000 	ldr	r0, [r0]
        1a4dd0:	eb688135 	bl	1bc52ac <$Length(long)>
        1a4dd4:	e1a07000 	mov	r7, r0
        1a4dd8:	e1a00004 	mov	r0, r4
        1a4ddc:	eb6874e2 	bl	1bc216c <$Clone(RefVar const &)>
        1a4de0:	e5860000 	str	r0, [r6]
        1a4de4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a4de8:	e3a00002 	mov	r0, #2	; 0x2
        1a4dec:	eb6874d6 	bl	1bc214c <$AllocateRefHandle(long)>
        1a4df0:	e3a04001 	mov	r4, #1	; 0x1
        1a4df4:	e3570001 	cmp	r7, #1	; 0x1
        1a4df8:	e58d0000 	str	r0, [sp]
        1a4dfc:	da000016 	ble	1a4e5c <MungeInkScale__FRC6RefVarT1+0xc4>
        1a4e00:	e1a01004 	mov	r1, r4
        1a4e04:	e5960000 	ldr	r0, [r6]
        1a4e08:	eb687d11 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1a4e0c:	e59d1000 	ldr	r1, [sp]
        1a4e10:	e5810000 	str	r0, [r1]
        1a4e14:	e1a0000d 	mov	r0, sp
        1a4e18:	eb64b2ad 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        1a4e1c:	e3300000 	teq	r0, #0	; 0x0
        1a4e20:	0a00000a 	beq	1a4e50 <MungeInkScale__FRC6RefVarT1+0xb8>
        1a4e24:	e1a0000d 	mov	r0, sp
        1a4e28:	eb6874cf 	bl	1bc216c <$Clone(RefVar const &)>
        1a4e2c:	e59d1000 	ldr	r1, [sp]
        1a4e30:	e5810000 	str	r0, [r1]
        1a4e34:	e1a02000 	mov	r2, r0
        1a4e38:	e1a01004 	mov	r1, r4
        1a4e3c:	e5960000 	ldr	r0, [r6]
        1a4e40:	eb688544 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1a4e44:	e1a01005 	mov	r1, r5
        1a4e48:	e1a0000d 	mov	r0, sp
        1a4e4c:	eb64bad9 	bl	1ad39b8 <$SetFontParms__FRC6RefVarT1>
        1a4e50:	e2844002 	add	r4, r4, #2	; 0x2
        1a4e54:	e1540007 	cmp	r4, r7
        1a4e58:	baffffe8 	blt	1a4e00 <MungeInkScale__FRC6RefVarT1+0x68>
        1a4e5c:	e59d0000 	ldr	r0, [sp]
        1a4e60:	eb6878d5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a4e64:	e28dd004 	add	sp, sp, #4	; 0x4
        1a4e68:	ea000002 	b	1a4e78 <MungeInkScale__FRC6RefVarT1+0xe0>
        1a4e6c:	e5940000 	ldr	r0, [r4]
        1a4e70:	e5900000 	ldr	r0, [r0]
        1a4e74:	e5860000 	str	r0, [r6]
        1a4e78:	e5964000 	ldr	r4, [r6]
        1a4e7c:	e1a00006 	mov	r0, r6
        1a4e80:	eb6878cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a4e84:	e1a00004 	mov	r0, r4
        1a4e88:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MakeRichString__FRC6RefVarT1Uc
 * Address: 001ac75c
 */
void globals::MakeRichString() {
    /*
        1ac75c:	e1a0c00d 	mov	ip, sp
        1ac760:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ac764:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ac768:	e1a05000 	mov	r5, r0
        1ac76c:	e1a04001 	mov	r4, r1
        1ac770:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ac774:	e5910000 	ldr	r0, [r1]
        1ac778:	e5900000 	ldr	r0, [r0]
        1ac77c:	e3300002 	teq	r0, #2	; 0x2
        1ac780:	12000003 	andne	r0, r0, #3	; 0x3
        1ac784:	13300000 	teqne	r0, #0	; 0x0
        1ac788:	1a000002 	bne	1ac798 <MakeRichString__FRC6RefVarT1Uc+0x3c>
        1ac78c:	e1a00005 	mov	r0, r5
        1ac790:	eb685675 	bl	1bc216c <$Clone(RefVar const &)>
        1ac794:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1ac798:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ac79c:	e5950000 	ldr	r0, [r5]
        1ac7a0:	e5900000 	ldr	r0, [r0]
        1ac7a4:	eb6862c0 	bl	1bc52ac <$Length(long)>
        1ac7a8:	e1a0a000 	mov	sl, r0
        1ac7ac:	e2800003 	add	r0, r0, #3	; 0x3
        1ac7b0:	e3c08003 	bic	r8, r0, #3	; 0x3
        1ac7b4:	e3a09000 	mov	r9, #0	; 0x0
        1ac7b8:	e58d8004 	str	r8, [sp, #4]
        1ac7bc:	e5940000 	ldr	r0, [r4]
        1ac7c0:	e5900000 	ldr	r0, [r0]
        1ac7c4:	eb6862b8 	bl	1bc52ac <$Length(long)>
        1ac7c8:	e0800fa0 	add	r0, r0, r0, lsr #31
        1ac7cc:	e1a060c0 	mov	r6, r0, asr #1
        1ac7d0:	e3a00002 	mov	r0, #2	; 0x2
        1ac7d4:	eb68565c 	bl	1bc214c <$AllocateRefHandle(long)>
        1ac7d8:	e3a07000 	mov	r7, #0	; 0x0
        1ac7dc:	e3560000 	cmp	r6, #0	; 0x0
        1ac7e0:	e58d0000 	str	r0, [sp]
        1ac7e4:	9a000016 	bls	1ac844 <MakeRichString__FRC6RefVarT1Uc+0xe8>
        1ac7e8:	e3a00001 	mov	r0, #1	; 0x1
        1ac7ec:	e0801087 	add	r1, r0, r7, lsl #1
        1ac7f0:	e5940000 	ldr	r0, [r4]
        1ac7f4:	e5900000 	ldr	r0, [r0]
        1ac7f8:	eb685e95 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1ac7fc:	e59d1000 	ldr	r1, [sp]
        1ac800:	e5810000 	str	r0, [r1]
        1ac804:	e1a0000d 	mov	r0, sp
        1ac808:	eb649431 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        1ac80c:	e3300000 	teq	r0, #0	; 0x0
        1ac810:	0a000006 	beq	1ac830 <MakeRichString__FRC6RefVarT1Uc+0xd4>
        1ac814:	e59d0000 	ldr	r0, [sp]
        1ac818:	e5900000 	ldr	r0, [r0]
        1ac81c:	eb6862a2 	bl	1bc52ac <$Length(long)>
        1ac820:	e2800005 	add	r0, r0, #5	; 0x5
        1ac824:	e3c00003 	bic	r0, r0, #3	; 0x3
        1ac828:	e0808008 	add	r8, r0, r8
        1ac82c:	e2899001 	add	r9, r9, #1	; 0x1
        1ac830:	e2877001 	add	r7, r7, #1	; 0x1
        1ac834:	e1570006 	cmp	r7, r6
        1ac838:	3affffea 	bcc	1ac7e8 <MakeRichString__FRC6RefVarT1Uc+0x8c>
        1ac83c:	e3390000 	teq	r9, #0	; 0x0
        1ac840:	1a000006 	bne	1ac860 <MakeRichString__FRC6RefVarT1Uc+0x104>
        1ac844:	e1a00005 	mov	r0, r5
        1ac848:	eb685647 	bl	1bc216c <$Clone(RefVar const &)>
        1ac84c:	e1a04000 	mov	r4, r0
        1ac850:	e59d0000 	ldr	r0, [sp]
        1ac854:	eb685a58 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ac858:	e1a00004 	mov	r0, r4
        1ac85c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1ac860:	e2881004 	add	r1, r8, #4	; 0x4
        1ac864:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ac868:	e59f0164 	ldr	r0, [pc, #164]	; 1ac9d4 <MakeRichString__FRC6RefVarT1Uc+0x278>
        1ac86c:	eb685632 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1ac870:	eb685635 	bl	1bc214c <$AllocateRefHandle(long)>
        1ac874:	e58d0004 	str	r0, [sp, #4]
        1ac878:	e28d1004 	add	r1, sp, #4	; 0x4
        1ac87c:	e1a0000d 	mov	r0, sp
        1ac880:	eb685214 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        1ac884:	e1a0000d 	mov	r0, sp
        1ac888:	eb685621 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1ac88c:	e1a07000 	mov	r7, r0
        1ac890:	e5950000 	ldr	r0, [r5]
        1ac894:	e5900000 	ldr	r0, [r0]
        1ac898:	eb68562f 	bl	1bc215c <$BinaryData(long)>
        1ac89c:	e1a0200a 	mov	r2, sl
        1ac8a0:	e1a01007 	mov	r1, r7
        1ac8a4:	eb68c9aa 	bl	1bdef54 <$BlockMove>
        1ac8a8:	e1a000aa 	mov	r0, sl, lsr #1
        1ac8ac:	e2402001 	sub	r2, r0, #1	; 0x1
        1ac8b0:	e1a05002 	mov	r5, r2
        1ac8b4:	e1a01007 	mov	r1, r7
        1ac8b8:	e3a00000 	mov	r0, #0	; 0x0
        1ac8bc:	e3520000 	cmp	r2, #0	; 0x0
        1ac8c0:	9a00000c 	bls	1ac8f8 <MakeRichString__FRC6RefVarT1Uc+0x19c>
        1ac8c4:	e3a08001 	mov	r8, #1	; 0x1
        1ac8c8:	e2888cf7 	add	r8, r8, #63232	; 0xf700
        1ac8cc:	e3a0ecf7 	mov	lr, #63232	; 0xf700
        1ac8d0:	e3a030f7 	mov	r3, #247	; 0xf7
        1ac8d4:	e7919080 	ldr	r9, [r1, r0, lsl #1]
        1ac8d8:	e1a09829 	mov	r9, r9, lsr #16
        1ac8dc:	e1390008 	teq	r9, r8
        1ac8e0:	0081c080 	addeq	ip, r1, r0, lsl #1
        1ac8e4:	05cce001 	streqb	lr, [ip, #1]
        1ac8e8:	05cc3000 	streqb	r3, [ip]
        1ac8ec:	e2800001 	add	r0, r0, #1	; 0x1
        1ac8f0:	e1500002 	cmp	r0, r2
        1ac8f4:	3afffff6 	bcc	1ac8d4 <MakeRichString__FRC6RefVarT1Uc+0x178>
        1ac8f8:	e59d000c 	ldr	r0, [sp, #12]
        1ac8fc:	e0807007 	add	r7, r0, r7
        1ac900:	e3a08000 	mov	r8, #0	; 0x0
        1ac904:	e3560000 	cmp	r6, #0	; 0x0
        1ac908:	9a00001d 	bls	1ac984 <MakeRichString__FRC6RefVarT1Uc+0x228>
        1ac90c:	e3a0a001 	mov	sl, #1	; 0x1
        1ac910:	e08a1088 	add	r1, sl, r8, lsl #1
        1ac914:	e5940000 	ldr	r0, [r4]
        1ac918:	e5900000 	ldr	r0, [r0]
        1ac91c:	eb685e4c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1ac920:	e59d1008 	ldr	r1, [sp, #8]
        1ac924:	e5810000 	str	r0, [r1]
        1ac928:	e28d0008 	add	r0, sp, #8	; 0x8
        1ac92c:	eb6493e8 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        1ac930:	e3300000 	teq	r0, #0	; 0x0
        1ac934:	0a00000f 	beq	1ac978 <MakeRichString__FRC6RefVarT1Uc+0x21c>
        1ac938:	e59d0008 	ldr	r0, [sp, #8]
        1ac93c:	e5900000 	ldr	r0, [r0]
        1ac940:	eb686259 	bl	1bc52ac <$Length(long)>
        1ac944:	e1a09000 	mov	r9, r0
        1ac948:	e5c70001 	strb	r0, [r7, #1]
        1ac94c:	e1a00440 	mov	r0, r0, asr #8
        1ac950:	e5c70000 	strb	r0, [r7]
        1ac954:	e59d0008 	ldr	r0, [sp, #8]
        1ac958:	e5900000 	ldr	r0, [r0]
        1ac95c:	eb6855fe 	bl	1bc215c <$BinaryData(long)>
        1ac960:	e2871002 	add	r1, r7, #2	; 0x2
        1ac964:	e1a02009 	mov	r2, r9
        1ac968:	eb68c979 	bl	1bdef54 <$BlockMove>
        1ac96c:	e2890005 	add	r0, r9, #5	; 0x5
        1ac970:	e3c00003 	bic	r0, r0, #3	; 0x3
        1ac974:	e0807007 	add	r7, r0, r7
        1ac978:	e2888001 	add	r8, r8, #1	; 0x1
        1ac97c:	e1580006 	cmp	r8, r6
        1ac980:	3affffe2 	bcc	1ac910 <MakeRichString__FRC6RefVarT1Uc+0x1b4>
        1ac984:	e3a00001 	mov	r0, #1	; 0x1
        1ac988:	e1800205 	orr	r0, r0, r5, lsl #4
        1ac98c:	e1a01c20 	mov	r1, r0, lsr #24
        1ac990:	e4c71001 	strb	r1, [r7], #1
        1ac994:	e1a01820 	mov	r1, r0, lsr #16
        1ac998:	e4c71001 	strb	r1, [r7], #1
        1ac99c:	e1a01420 	mov	r1, r0, lsr #8
        1ac9a0:	e4c71001 	strb	r1, [r7], #1
        1ac9a4:	e5c70000 	strb	r0, [r7]
        1ac9a8:	e59d0004 	ldr	r0, [sp, #4]
        1ac9ac:	e5904000 	ldr	r4, [r0]
        1ac9b0:	e1a0000d 	mov	r0, sp
        1ac9b4:	e3a01000 	mov	r1, #0	; 0x0
        1ac9b8:	eb6855d0 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1ac9bc:	e59d0004 	ldr	r0, [sp, #4]
        1ac9c0:	eb6859fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ac9c4:	e59d0008 	ldr	r0, [sp, #8]
        1ac9c8:	eb6859fb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ac9cc:	e1a00004 	mov	r0, r4
        1ac9d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1ac9d4:	006848d0 	ldreqd	r4, [r8], -#128
    */
}

/**
 * Symbol: ModalSafeShow(TView *)
 * Address: 001b1a8c
 */
ModalSafeShow(TView *) {
    /*
        1b1a8c:	e1a0c00d 	mov	ip, sp
        1b1a90:	e92dd831 	stmdb	sp!, {r0, r4, r5, fp, ip, lr, pc}
        1b1a94:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b1a98:	e59f4090 	ldr	r4, [pc, #90]	; 1b1b30 <ModalSafeShow(TView *)+0xa4>
        1b1a9c:	e5940014 	ldr	r0, [r4, #20]
        1b1aa0:	e3300000 	teq	r0, #0	; 0x0
        1b1aa4:	1a000002 	bne	1b1ab4 <ModalSafeShow(TView *)+0x28>
        1b1aa8:	e3a00000 	mov	r0, #0	; 0x0
        1b1aac:	eb68c5c9 	bl	1be31d8 <CDynamicArray::$__ct(void)>
        1b1ab0:	e5840014 	str	r0, [r4, #20]
        1b1ab4:	e24b2018 	sub	r2, fp, #24	; 0x18
        1b1ab8:	e3a03001 	mov	r3, #1	; 0x1
        1b1abc:	e3a01000 	mov	r1, #0	; 0x0
        1b1ac0:	e5940014 	ldr	r0, [r4, #20]
        1b1ac4:	eb68de8b 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        1b1ac8:	e51b0018 	ldr	r0, [fp, -#24]
        1b1acc:	eb648bdf 	bl	1ad4a50 <$ViewContainsCaretView(TView *)>
        1b1ad0:	e3300000 	teq	r0, #0	; 0x0
        1b1ad4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1b1ad8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b1adc:	e5940004 	ldr	r0, [r4, #4]
        1b1ae0:	e5b05068 	ldr	r5, [r0, #104]!
        1b1ae4:	e1a00005 	mov	r0, r5
        1b1ae8:	e5951000 	ldr	r1, [r5]
        1b1aec:	e1a0e00f 	mov	lr, pc
        1b1af0:	e281f064 	add	pc, r1, #100	; 0x64
        1b1af4:	eb684194 	bl	1bc214c <$AllocateRefHandle(long)>
        1b1af8:	e58d0000 	str	r0, [sp]
        1b1afc:	e1a0200d 	mov	r2, sp
        1b1b00:	e2851024 	add	r1, r5, #36	; 0x24
        1b1b04:	e5940004 	ldr	r0, [r4, #4]
        1b1b08:	eb64de6f 	bl	1ae94cc <TRootView::$HoldPendingKeyView(RefVar const &, RefVar const &)>
        1b1b0c:	e59d0000 	ldr	r0, [sp]
        1b1b10:	eb6845a9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1b14:	e3a03000 	mov	r3, #0	; 0x0
        1b1b18:	e92d0008 	stmdb	sp!, {r3}
        1b1b1c:	e3a02000 	mov	r2, #0	; 0x0
        1b1b20:	e3a01000 	mov	r1, #0	; 0x0
        1b1b24:	e5b40004 	ldr	r0, [r4, #4]!
        1b1b28:	eb6487ad 	bl	1ad39e4 <TRootView::$SetKeyView(TView *, long, long, unsigned char)>
        1b1b2c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1b1b30:	0c101930 	ldceq	9, cr1, [r0], -#192
    */
}

/**
 * Symbol: ModalSafeShowRelease(void)
 * Address: 001b1b34
 */
ModalSafeShowRelease(void) {
    /*
        1b1b34:	e1a0c00d 	mov	ip, sp
        1b1b38:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b1b3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b1b40:	e59f40cc 	ldr	r4, [pc, #cc]	; 1b1c14 <ModalSafeShowRelease(void)+0xe0>
        1b1b44:	e5941014 	ldr	r1, [r4, #20]
        1b1b48:	e3310000 	teq	r1, #0	; 0x0
        1b1b4c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1b1b50:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1b1b54:	e1a0000d 	mov	r0, sp
        1b1b58:	eb68c5a5 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1b1b5c:	e1a0000d 	mov	r0, sp
        1b1b60:	eb68d623 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1b1b64:	e1a05000 	mov	r5, r0
        1b1b68:	e1a0000d 	mov	r0, sp
        1b1b6c:	eb68e281 	bl	1bea578 <CArrayIterator::$More(void)>
        1b1b70:	e3a09000 	mov	r9, #0	; 0x0
        1b1b74:	e3300000 	teq	r0, #0	; 0x0
        1b1b78:	0a00001a 	beq	1b1be8 <ModalSafeShowRelease(void)+0xb4>
        1b1b7c:	e59f6094 	ldr	r6, [pc, #94]	; 1b1c18 <ModalSafeShowRelease(void)+0xe4>
        1b1b80:	e3a08302 	mov	r8, #134217728	; 0x8000000
        1b1b84:	e3a0702c 	mov	r7, #44	; 0x2c
        1b1b88:	e1a01005 	mov	r1, r5
        1b1b8c:	e5940014 	ldr	r0, [r4, #20]
        1b1b90:	eb68eebf 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        1b1b94:	e5901000 	ldr	r1, [r0]
        1b1b98:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b1b9c:	e1a02008 	mov	r2, r8
        1b1ba0:	e1a00007 	mov	r0, r7
        1b1ba4:	e5965000 	ldr	r5, [r6]
        1b1ba8:	eb63d1e4 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1b1bac:	eb684166 	bl	1bc214c <$AllocateRefHandle(long)>
        1b1bb0:	e58d0000 	str	r0, [sp]
        1b1bb4:	e1a0100d 	mov	r1, sp
        1b1bb8:	e1a00005 	mov	r0, r5
        1b1bbc:	eb637b1d 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1b1bc0:	e59d0000 	ldr	r0, [sp]
        1b1bc4:	eb68457c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1b1bc8:	e28dd004 	add	sp, sp, #4	; 0x4
        1b1bcc:	e1a0000d 	mov	r0, sp
        1b1bd0:	eb68e671 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1b1bd4:	e1a05000 	mov	r5, r0
        1b1bd8:	e1a0000d 	mov	r0, sp
        1b1bdc:	eb68e265 	bl	1bea578 <CArrayIterator::$More(void)>
        1b1be0:	e3300000 	teq	r0, #0	; 0x0
        1b1be4:	1affffe7 	bne	1b1b88 <ModalSafeShowRelease(void)+0x54>
        1b1be8:	e5940014 	ldr	r0, [r4, #20]
        1b1bec:	e3300000 	teq	r0, #0	; 0x0
        1b1bf0:	13a01001 	movne	r1, #1	; 0x1
        1b1bf4:	1b68c99a 	blne	1be4264 <CDynamicArray::$__dt(void)>
        1b1bf8:	e5849014 	str	r9, [r4, #20]
        1b1bfc:	e5b40004 	ldr	r0, [r4, #4]!
        1b1c00:	eb64de32 	bl	1ae94d0 <TRootView::$ActivatePendingKeyView(void)>
        1b1c04:	e1a0000d 	mov	r0, sp
        1b1c08:	e3a01000 	mov	r1, #0	; 0x0
        1b1c0c:	eb68c995 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1b1c10:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1b1c14:	0c101930 	ldceq	9, cr1, [r0], -#192
        1b1c18:	0c1054ac 	ldceq	4, cr5, [r0], -#688
    */
}

/**
 * Symbol: MoveLow(CDynamicArray *)
 * Address: 001b2688
 */
MoveLow(CDynamicArray *) {
    /*
        1b2688:	e1a0c00d 	mov	ip, sp
        1b268c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b2690:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b2694:	e1a04000 	mov	r4, r0
        1b2698:	e5900010 	ldr	r0, [r0, #16]
        1b269c:	e5941004 	ldr	r1, [r4, #4]
        1b26a0:	e3a01000 	mov	r1, #0	; 0x0
        1b26a4:	e0800001 	add	r0, r0, r1
        1b26a8:	eb68ba92 	bl	1be10f8 <$GetPtrSize>
        1b26ac:	e1a06000 	mov	r6, r0
        1b26b0:	eb68bea2 	bl	1be2140 <$NewPtr>
        1b26b4:	e1b05000 	movs	r5, r0
        1b26b8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1b26bc:	e5941004 	ldr	r1, [r4, #4]
        1b26c0:	e3a01000 	mov	r1, #0	; 0x0
        1b26c4:	e5940010 	ldr	r0, [r4, #16]
        1b26c8:	e0800001 	add	r0, r0, r1
        1b26cc:	e1a02006 	mov	r2, r6
        1b26d0:	e1a01005 	mov	r1, r5
        1b26d4:	eb68b21e 	bl	1bdef54 <$BlockMove>
        1b26d8:	e5947000 	ldr	r7, [r4]
        1b26dc:	e1a00004 	mov	r0, r4
        1b26e0:	e3a01000 	mov	r1, #0	; 0x0
        1b26e4:	eb68ebf1 	bl	1bed6b0 <CDynamicArray::$SetArraySize(long)>
        1b26e8:	e1a01007 	mov	r1, r7
        1b26ec:	e1a00004 	mov	r0, r4
        1b26f0:	eb68ebee 	bl	1bed6b0 <CDynamicArray::$SetArraySize(long)>
        1b26f4:	e5b41004 	ldr	r1, [r4, #4]!
        1b26f8:	e594000c 	ldr	r0, [r4, #12]
        1b26fc:	e3a01000 	mov	r1, #0	; 0x0
        1b2700:	e0801001 	add	r1, r0, r1
        1b2704:	e1a02006 	mov	r2, r6
        1b2708:	e1a00005 	mov	r0, r5
        1b270c:	eb68b210 	bl	1bdef54 <$BlockMove>
        1b2710:	e1a00005 	mov	r0, r5
        1b2714:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1b2718:	ea68ba65 	b	1be10b4 <$DisposPtr>
    */
}

/**
 * Symbol: MarkMessageDone(TTask *, long)
 * Address: 001d4cdc
 */
MarkMessageDone(TTask *, long) {
    /*
        1d4cdc:	e5a01010 	str	r1, [r0, #16]!
        1d4ce0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: malloc
 * Address: 001e2c50
 */
void globals::malloc() {
    /*
        1e2c50:	ea67fd3a 	b	1be2140 <$NewPtr>
    */
}

/**
 * Symbol: MixLin16__FPvT1l
 * Address: 001e7380
 */
void globals::MixLin16() {
    /*
        1e7380:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        1e7384:	e1a03000 	mov	r3, r0
        1e7388:	e1a0e001 	mov	lr, r1
        1e738c:	e3a01000 	mov	r1, #0	; 0x0
        1e7390:	e3520000 	cmp	r2, #0	; 0x0
        1e7394:	d8bd8070 	ldmleia	sp!, {r4, r5, r6, pc}
        1e7398:	e3a049fe 	mov	r4, #4161536	; 0x3f8000
        1e739c:	e2444501 	sub	r4, r4, #4194304	; 0x400000
        1e73a0:	e59e0000 	ldr	r0, [lr]
        1e73a4:	e1a00840 	mov	r0, r0, asr #16
        1e73a8:	e28ee002 	add	lr, lr, #2	; 0x2
        1e73ac:	e593c000 	ldr	ip, [r3]
        1e73b0:	e080084c 	add	r0, r0, ip, asr #16
        1e73b4:	e3700902 	cmn	r0, #32768	; 0x8000
        1e73b8:	ba000003 	blt	1e73cc <MixLin16__FPvT1l+0x4c>
        1e73bc:	e3a06902 	mov	r6, #32768	; 0x8000
        1e73c0:	e2466001 	sub	r6, r6, #1	; 0x1
        1e73c4:	e1500006 	cmp	r0, r6
        1e73c8:	aa000002 	bge	1e73d8 <MixLin16__FPvT1l+0x58>
        1e73cc:	e3700902 	cmn	r0, #32768	; 0x8000
        1e73d0:	a1a06000 	movge	r6, r0
        1e73d4:	b1a06004 	movlt	r6, r4
        1e73d8:	e5c36001 	strb	r6, [r3, #1]
        1e73dc:	e1a00446 	mov	r0, r6, asr #8
        1e73e0:	e4c30002 	strb	r0, [r3], #2
        1e73e4:	e2811001 	add	r1, r1, #1	; 0x1
        1e73e8:	e1510002 	cmp	r1, r2
        1e73ec:	baffffeb 	blt	1e73a0 <MixLin16__FPvT1l+0x20>
        1e73f0:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: MeasureDistance(char *, long, long, long)
 * Address: 001f612c
 */
MeasureDistance(char *, long, long, long) {
    /*
        1f612c:	e1a0c00d 	mov	ip, sp
        1f6130:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1f6134:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6138:	e3a0c000 	mov	ip, #0	; 0x0
        1f613c:	e3310000 	teq	r1, #0	; 0x0
        1f6140:	0a000009 	beq	1f616c <MeasureDistance(char *, long, long, long)+0x40>
        1f6144:	e5d0e000 	ldrb	lr, [r0]
        1f6148:	e33e0024 	teq	lr, #36	; 0x24
        1f614c:	02800001 	addeq	r0, r0, #1	; 0x1
        1f6150:	02411001 	subeq	r1, r1, #1	; 0x1
        1f6154:	e3310000 	teq	r1, #0	; 0x0
        1f6158:	0a000003 	beq	1f616c <MeasureDistance(char *, long, long, long)+0x40>
        1f615c:	e080e001 	add	lr, r0, r1
        1f6160:	e55ee001 	ldrb	lr, [lr, -#1]
        1f6164:	e33e0040 	teq	lr, #64	; 0x40
        1f6168:	02411001 	subeq	r1, r1, #1	; 0x1
        1f616c:	e051e003 	subs	lr, r1, r3
        1f6170:	426ee000 	rsbmi	lr, lr, #0	; 0x0
        1f6174:	e1a0700e 	mov	r7, lr
        1f6178:	e3a0e000 	mov	lr, #0	; 0x0
        1f617c:	e3a05000 	mov	r5, #0	; 0x0
        1f6180:	e3510000 	cmp	r1, #0	; 0x0
        1f6184:	da00000f 	ble	1f61c8 <MeasureDistance(char *, long, long, long)+0x9c>
        1f6188:	e3a04000 	mov	r4, #0	; 0x0
        1f618c:	e3530000 	cmp	r3, #0	; 0x0
        1f6190:	da000006 	ble	1f61b0 <MeasureDistance(char *, long, long, long)+0x84>
        1f6194:	e7d06005 	ldrb	r6, [r0, r5]
        1f6198:	e7d28004 	ldrb	r8, [r2, r4]
        1f619c:	e1360008 	teq	r6, r8
        1f61a0:	03a0c001 	moveq	ip, #1	; 0x1
        1f61a4:	e2844001 	add	r4, r4, #1	; 0x1
        1f61a8:	e1540003 	cmp	r4, r3
        1f61ac:	bafffff9 	blt	1f6198 <MeasureDistance(char *, long, long, long)+0x6c>
        1f61b0:	e33c0000 	teq	ip, #0	; 0x0
        1f61b4:	028ee001 	addeq	lr, lr, #1	; 0x1
        1f61b8:	e3a0c000 	mov	ip, #0	; 0x0
        1f61bc:	e2855001 	add	r5, r5, #1	; 0x1
        1f61c0:	e1550001 	cmp	r5, r1
        1f61c4:	baffffef 	blt	1f6188 <MeasureDistance(char *, long, long, long)+0x5c>
        1f61c8:	e3a04000 	mov	r4, #0	; 0x0
        1f61cc:	e3a06000 	mov	r6, #0	; 0x0
        1f61d0:	e3530000 	cmp	r3, #0	; 0x0
        1f61d4:	da00000f 	ble	1f6218 <MeasureDistance(char *, long, long, long)+0xec>
        1f61d8:	e3a05000 	mov	r5, #0	; 0x0
        1f61dc:	e3510000 	cmp	r1, #0	; 0x0
        1f61e0:	da000006 	ble	1f6200 <MeasureDistance(char *, long, long, long)+0xd4>
        1f61e4:	e7d28006 	ldrb	r8, [r2, r6]
        1f61e8:	e7d09005 	ldrb	r9, [r0, r5]
        1f61ec:	e1380009 	teq	r8, r9
        1f61f0:	03a0c001 	moveq	ip, #1	; 0x1
        1f61f4:	e2855001 	add	r5, r5, #1	; 0x1
        1f61f8:	e1550001 	cmp	r5, r1
        1f61fc:	bafffff9 	blt	1f61e8 <MeasureDistance(char *, long, long, long)+0xbc>
        1f6200:	e33c0000 	teq	ip, #0	; 0x0
        1f6204:	02844001 	addeq	r4, r4, #1	; 0x1
        1f6208:	e3a0c000 	mov	ip, #0	; 0x0
        1f620c:	e2866001 	add	r6, r6, #1	; 0x1
        1f6210:	e1560003 	cmp	r6, r3
        1f6214:	baffffef 	blt	1f61d8 <MeasureDistance(char *, long, long, long)+0xac>
        1f6218:	e15e0004 	cmp	lr, r4
        1f621c:	d1a0e004 	movle	lr, r4
        1f6220:	e08e4007 	add	r4, lr, r7
        1f6224:	e1310003 	teq	r1, r3
        1f6228:	1a000005 	bne	1f6244 <MeasureDistance(char *, long, long, long)+0x118>
        1f622c:	e1a03001 	mov	r3, r1
        1f6230:	e1a01002 	mov	r1, r2
        1f6234:	e1a02003 	mov	r2, r3
        1f6238:	eb66fe1e 	bl	1bb5ab8 <$strncmp>
        1f623c:	e3300000 	teq	r0, #0	; 0x0
        1f6240:	0a000000 	beq	1f6248 <MeasureDistance(char *, long, long, long)+0x11c>
        1f6244:	e2844005 	add	r4, r4, #5	; 0x5
        1f6248:	e1a00004 	mov	r0, r4
        1f624c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: MakeSpellFrame(spell_state *)
 * Address: 001f62ac
 */
MakeSpellFrame(spell_state *) {
    /*
        1f62ac:	e1a0c00d 	mov	ip, sp
        1f62b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f62b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f62b8:	e1a04000 	mov	r4, r0
        1f62bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1f62c0:	e59f0044 	ldr	r0, [pc, #44]	; 1f630c <MakeSpellFrame(spell_state *)+0x60>
        1f62c4:	eb672fa8 	bl	1bc216c <$Clone(RefVar const &)>
        1f62c8:	eb672f9f 	bl	1bc214c <$AllocateRefHandle(long)>
        1f62cc:	e58d0004 	str	r0, [sp, #4]
        1f62d0:	e1a00004 	mov	r0, r4
        1f62d4:	eb624c84 	bl	1a894ec <$AddressToRef(void *)>
        1f62d8:	eb672f9b 	bl	1bc214c <$AllocateRefHandle(long)>
        1f62dc:	e58d0000 	str	r0, [sp]
        1f62e0:	e1a0200d 	mov	r2, sp
        1f62e4:	e59f1024 	ldr	r1, [pc, #24]	; 1f6310 <MakeSpellFrame(spell_state *)+0x64>
        1f62e8:	e28d0004 	add	r0, sp, #4	; 0x4
        1f62ec:	eb67401d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1f62f0:	e59d0000 	ldr	r0, [sp]
        1f62f4:	eb6733b0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1f62f8:	e59d0004 	ldr	r0, [sp, #4]
        1f62fc:	e5904000 	ldr	r4, [r0]
        1f6300:	eb6733ad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1f6304:	e1a00004 	mov	r0, r4
        1f6308:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1f630c:	00681100 	rsbeq	r1, r8, r0, lsl #2
        1f6310:	006847d0 	ldreqd	r4, [r8], -#112
    */
}

/**
 * Symbol: MakeSystemStackManager(void)
 * Address: 001f88f0
 */
MakeSystemStackManager(void) {
    /*
        1f88f0:	e1a0c00d 	mov	ip, sp
        1f88f4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f88f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f88fc:	e3a00000 	mov	r0, #0	; 0x0
        1f8900:	eb63dbbb 	bl	1aef7f4 <TStackManager::$__ct(void)>
        1f8904:	e59f4054 	ldr	r4, [pc, #54]	; 1f8960 <MakeSystemStackManager(void)+0x70>
        1f8908:	e5840004 	str	r0, [r4, #4]
        1f890c:	e3300000 	teq	r0, #0	; 0x0
        1f8910:	03a000e9 	moveq	r0, #233	; 0xe9
        1f8914:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1f8918:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1f891c:	eb640d34 	bl	1afbdf4 <TStackManager::$Init(void)>
        1f8920:	e1a05000 	mov	r5, r0
        1f8924:	e59f6038 	ldr	r6, [pc, #38]	; 1f8964 <MakeSystemStackManager(void)+0x74>
        1f8928:	e5960000 	ldr	r0, [r6]
        1f892c:	eb67aa13 	bl	1be3180 <$SetHeap>
        1f8930:	e5960000 	ldr	r0, [r6]
        1f8934:	e3350000 	teq	r5, #0	; 0x0
        1f8938:	e5840000 	str	r0, [r4]
        1f893c:	0a000005 	beq	1f8958 <MakeSystemStackManager(void)+0x68>
        1f8940:	e5940004 	ldr	r0, [r4, #4]
        1f8944:	e3300000 	teq	r0, #0	; 0x0
        1f8948:	13a01001 	movne	r1, #1	; 0x1
        1f894c:	1b63dfc7 	blne	1af0870 <TStackManager::$__dt(void)>
        1f8950:	e3a00000 	mov	r0, #0	; 0x0
        1f8954:	e5a40004 	str	r0, [r4, #4]!
        1f8958:	e1a00005 	mov	r0, r5
        1f895c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1f8960:	0c104c08 	ldceq	12, cr4, [r0], -#32
        1f8964:	0c101080 	ldceq	0, cr1, [r0], -#512
    */
}

/**
 * Symbol: MakeStringPtr(unsigned short *, unsigned long)
 * Address: 001fef18
 */
MakeStringPtr(unsigned short *, unsigned long) {
    /*
        1fef18:	e1a0c00d 	mov	ip, sp
        1fef1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1fef20:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fef24:	e1a04000 	mov	r4, r0
        1fef28:	e1a00081 	mov	r0, r1, lsl #1
        1fef2c:	e1a06000 	mov	r6, r0
        1fef30:	eb678c82 	bl	1be2140 <$NewPtr>
        1fef34:	e1b05000 	movs	r5, r0
        1fef38:	0a000003 	beq	1fef4c <MakeStringPtr(unsigned short *, unsigned long)+0x34>
        1fef3c:	e1a02006 	mov	r2, r6
        1fef40:	e1a01005 	mov	r1, r5
        1fef44:	e1a00004 	mov	r0, r4
        1fef48:	eb678001 	bl	1bdef54 <$BlockMove>
        1fef4c:	e1a00005 	mov	r0, r5
        1fef50:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: MakeStringHandle(unsigned short *, unsigned long)
 * Address: 001fef54
 */
MakeStringHandle(unsigned short *, unsigned long) {
    /*
        1fef54:	e1a0c00d 	mov	ip, sp
        1fef58:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1fef5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fef60:	e1a05000 	mov	r5, r0
        1fef64:	e1a04001 	mov	r4, r1
        1fef68:	e3a00002 	mov	r0, #2	; 0x2
        1fef6c:	e0800081 	add	r0, r0, r1, lsl #1
        1fef70:	eb678c6d 	bl	1be212c <$NewHandle>
        1fef74:	e1b06000 	movs	r6, r0
        1fef78:	0a000008 	beq	1fefa0 <MakeStringHandle(unsigned short *, unsigned long)+0x4c>
        1fef7c:	e1a02084 	mov	r2, r4, lsl #1
        1fef80:	e1a00005 	mov	r0, r5
        1fef84:	e5961000 	ldr	r1, [r6]
        1fef88:	eb677ff1 	bl	1bdef54 <$BlockMove>
        1fef8c:	e3a00000 	mov	r0, #0	; 0x0
        1fef90:	e5961000 	ldr	r1, [r6]
        1fef94:	e0811084 	add	r1, r1, r4, lsl #1
        1fef98:	e5c10001 	strb	r0, [r1, #1]
        1fef9c:	e5c10000 	strb	r0, [r1]
        1fefa0:	e1a00006 	mov	r0, r6
        1fefa4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: MapSolutionToBounds(long *, long, FRect const &)
 * Address: 00210150
 */
MapSolutionToBounds(long *, long, FRect const &) {
    /*
        210150:	e1a0c00d 	mov	ip, sp
        210154:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        210158:	e24cb004 	sub	fp, ip, #4	; 0x4
        21015c:	e1a05000 	mov	r5, r0
        210160:	e1a04001 	mov	r4, r1
        210164:	e1a06002 	mov	r6, r2
        210168:	e24dd010 	sub	sp, sp, #16	; 0x10
        21016c:	e1a0200d 	mov	r2, sp
        210170:	eb6560a8 	bl	1b68418 <$CalcSolutionBounds(long const *, long, FRect *)>
        210174:	e59d0000 	ldr	r0, [sp]
        210178:	e59d1008 	ldr	r1, [sp, #8]
        21017c:	e0411000 	sub	r1, r1, r0
        210180:	e5960000 	ldr	r0, [r6]
        210184:	e5962008 	ldr	r2, [r6, #8]
        210188:	e0420000 	sub	r0, r2, r0
        21018c:	eb6743cb 	bl	1be10c0 <$FixedDivide>
        210190:	e1a07000 	mov	r7, r0
        210194:	e59d0004 	ldr	r0, [sp, #4]
        210198:	e59d100c 	ldr	r1, [sp, #12]
        21019c:	e0411000 	sub	r1, r1, r0
        2101a0:	e5b62004 	ldr	r2, [r6, #4]!
        2101a4:	e5960008 	ldr	r0, [r6, #8]
        2101a8:	e0400002 	sub	r0, r0, r2
        2101ac:	eb6743c3 	bl	1be10c0 <$FixedDivide>
        2101b0:	e1a08000 	mov	r8, r0
        2101b4:	e3a06001 	mov	r6, #1	; 0x1
        2101b8:	e3540001 	cmp	r4, #1	; 0x1
        2101bc:	ba000008 	blt	2101e4 <MapSolutionToBounds(long *, long, FRect const &)+0x94>
        2101c0:	e3160001 	tst	r6, #1	; 0x1
        2101c4:	01a01008 	moveq	r1, r8
        2101c8:	11a01007 	movne	r1, r7
        2101cc:	e7950106 	ldr	r0, [r5, r6, lsl #2]
        2101d0:	eb6743bb 	bl	1be10c4 <$FixedMultiply>
        2101d4:	e7850106 	str	r0, [r5, r6, lsl #2]
        2101d8:	e2866001 	add	r6, r6, #1	; 0x1
        2101dc:	e1560004 	cmp	r6, r4
        2101e0:	dafffff6 	ble	2101c0 <MapSolutionToBounds(long *, long, FRect const &)+0x70>
        2101e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MeetEnds__FUlT1P9SplineSegP7TDArray
 * Address: 0021534c
 */
void globals::MeetEnds() {
    /*
        21534c:	e1a0c00d 	mov	ip, sp
        215350:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        215354:	e24cb004 	sub	fp, ip, #4	; 0x4
        215358:	e1a05002 	mov	r5, r2
        21535c:	e1a04003 	mov	r4, r3
        215360:	e24dd04c 	sub	sp, sp, #76	; 0x4c
        215364:	e28d203c 	add	r2, sp, #60	; 0x3c
        215368:	e8951008 	ldmia	r5, {r3, ip}
        21536c:	e8821008 	stmia	r2, {r3, ip}
        215370:	e28d602c 	add	r6, sp, #44	; 0x2c
        215374:	e0852280 	add	r2, r5, r0, lsl #5
        215378:	e242e038 	sub	lr, r2, #56	; 0x38
        21537c:	e89e1008 	ldmia	lr, {r3, ip}
        215380:	e8861008 	stmia	r6, {r3, ip}
        215384:	e28de024 	add	lr, sp, #36	; 0x24
        215388:	e2856010 	add	r6, r5, #16	; 0x10
        21538c:	e8961008 	ldmia	r6, {r3, ip}
        215390:	e88e1008 	stmia	lr, {r3, ip}
        215394:	e28de01c 	add	lr, sp, #28	; 0x1c
        215398:	e2422028 	sub	r2, r2, #40	; 0x28
        21539c:	e8921008 	ldmia	r2, {r3, ip}
        2153a0:	e88e1008 	stmia	lr, {r3, ip}
        2153a4:	e3a08000 	mov	r8, #0	; 0x0
        2153a8:	e1a06001 	mov	r6, r1
        2153ac:	e2407002 	sub	r7, r0, #2	; 0x2
        2153b0:	e3a03823 	mov	r3, #2293760	; 0x230000
        2153b4:	e58d7048 	str	r7, [sp, #72]
        2153b8:	e58d8018 	str	r8, [sp, #24]
        2153bc:	e92d0008 	stmdb	sp!, {r3}
        2153c0:	e28d1028 	add	r1, sp, #40	; 0x28
        2153c4:	e8910003 	ldmia	r1, {r0, r1}
        2153c8:	e28d3020 	add	r3, sp, #32	; 0x20
        2153cc:	e893000c 	ldmia	r3, {r2, r3}
        2153d0:	eb65544d 	bl	1b6a50c <$SameAngle__F6FPointT1l>
        2153d4:	e28dd004 	add	sp, sp, #4	; 0x4
        2153d8:	e3300000 	teq	r0, #0	; 0x0
        2153dc:	0a000096 	beq	21563c <MeetEnds__FUlT1P9SplineSegP7TDArray+0x2f0>
        2153e0:	e3a08001 	mov	r8, #1	; 0x1
        2153e4:	e28d1034 	add	r1, sp, #52	; 0x34
        2153e8:	e2850008 	add	r0, r5, #8	; 0x8
        2153ec:	e8905000 	ldmia	r0, {ip, lr}
        2153f0:	e8815000 	stmia	r1, {ip, lr}
        2153f4:	e59f111c 	ldr	r1, [pc, #11c]	; 215518 <MeetEnds__FUlT1P9SplineSegP7TDArray+0x1cc>
        2153f8:	e58d1044 	str	r1, [sp, #68]
        2153fc:	e28d0024 	add	r0, sp, #36	; 0x24
        215400:	e3a02801 	mov	r2, #65536	; 0x10000
        215404:	eb653340 	bl	1b6210c <$PtsToAngle>
        215408:	e58d000c 	str	r0, [sp, #12]
        21540c:	e28d103c 	add	r1, sp, #60	; 0x3c
        215410:	e28d0034 	add	r0, sp, #52	; 0x34
        215414:	e3a02801 	mov	r2, #65536	; 0x10000
        215418:	eb65333b 	bl	1b6210c <$PtsToAngle>
        21541c:	e59d100c 	ldr	r1, [sp, #12]
        215420:	e0410000 	sub	r0, r1, r0
        215424:	e58d0008 	str	r0, [sp, #8]
        215428:	e28d0008 	add	r0, sp, #8	; 0x8
        21542c:	eb655030 	bl	1b694f4 <$NORMD(long *)>
        215430:	e59d0008 	ldr	r0, [sp, #8]
        215434:	eb653758 	bl	1b6319c <$Signum(long)>
        215438:	e58d0014 	str	r0, [sp, #20]
        21543c:	e3a00001 	mov	r0, #1	; 0x1
        215440:	e58d0010 	str	r0, [sp, #16]
        215444:	e2461001 	sub	r1, r6, #1	; 0x1
        215448:	e1a06001 	mov	r6, r1
        21544c:	e1a00004 	mov	r0, r4
        215450:	e5942000 	ldr	r2, [r4]
        215454:	e1a0e00f 	mov	lr, pc
        215458:	e282f01c 	add	pc, r2, #28	; 0x1c
        21545c:	e5d00008 	ldrb	r0, [r0, #8]
        215460:	e3300000 	teq	r0, #0	; 0x0
        215464:	0a00003b 	beq	215558 <MeetEnds__FUlT1P9SplineSegP7TDArray+0x20c>
        215468:	e2461001 	sub	r1, r6, #1	; 0x1
        21546c:	e1a06001 	mov	r6, r1
        215470:	e1a00004 	mov	r0, r4
        215474:	e5942000 	ldr	r2, [r4]
        215478:	e1a0e00f 	mov	lr, pc
        21547c:	e282f01c 	add	pc, r2, #28	; 0x1c
        215480:	e1a0a000 	mov	sl, r0
        215484:	e28d002c 	add	r0, sp, #44	; 0x2c
        215488:	e89a5000 	ldmia	sl, {ip, lr}
        21548c:	e8805000 	stmia	r0, {ip, lr}
        215490:	e28d001c 	add	r0, sp, #28	; 0x1c
        215494:	e1a01007 	mov	r1, r7
        215498:	e2477001 	sub	r7, r7, #1	; 0x1
        21549c:	e0851281 	add	r1, r5, r1, lsl #5
        2154a0:	e2811010 	add	r1, r1, #16	; 0x10
        2154a4:	e8915000 	ldmia	r1, {ip, lr}
        2154a8:	e8805000 	stmia	r0, {ip, lr}
        2154ac:	e59d1044 	ldr	r1, [sp, #68]
        2154b0:	e28d001c 	add	r0, sp, #28	; 0x1c
        2154b4:	e3a02801 	mov	r2, #65536	; 0x10000
        2154b8:	eb653313 	bl	1b6210c <$PtsToAngle>
        2154bc:	e1a09000 	mov	r9, r0
        2154c0:	e28d102c 	add	r1, sp, #44	; 0x2c
        2154c4:	e28d003c 	add	r0, sp, #60	; 0x3c
        2154c8:	e3a02801 	mov	r2, #65536	; 0x10000
        2154cc:	eb65330e 	bl	1b6210c <$PtsToAngle>
        2154d0:	e59d100c 	ldr	r1, [sp, #12]
        2154d4:	e0411000 	sub	r1, r1, r0
        2154d8:	e0490000 	sub	r0, r9, r0
        2154dc:	e88d0003 	stmia	sp, {r0, r1}
        2154e0:	e28d0004 	add	r0, sp, #4	; 0x4
        2154e4:	eb655002 	bl	1b694f4 <$NORMD(long *)>
        2154e8:	e1a0000d 	mov	r0, sp
        2154ec:	eb655000 	bl	1b694f4 <$NORMD(long *)>
        2154f0:	e59d0004 	ldr	r0, [sp, #4]
        2154f4:	eb653728 	bl	1b6319c <$Signum(long)>
        2154f8:	e1a09000 	mov	r9, r0
        2154fc:	e59d0000 	ldr	r0, [sp]
        215500:	eb653725 	bl	1b6319c <$Signum(long)>
        215504:	e3590000 	cmp	r9, #0	; 0x0
        215508:	1a000003 	bne	21551c <MeetEnds__FUlT1P9SplineSegP7TDArray+0x1d0>
        21550c:	e3300000 	teq	r0, #0	; 0x0
        215510:	0a000010 	beq	215558 <MeetEnds__FUlT1P9SplineSegP7TDArray+0x20c>
        215514:	ea00000a 	b	215544 <MeetEnds__FUlT1P9SplineSegP7TDArray+0x1f8>
        215518:	0c104d00 	ldceq	13, cr4, [r0]
        21551c:	13300000 	teqne	r0, #0	; 0x0
        215520:	11390000 	teqne	r9, r0
        215524:	0a000006 	beq	215544 <MeetEnds__FUlT1P9SplineSegP7TDArray+0x1f8>
        215528:	e59d1014 	ldr	r1, [sp, #20]
        21552c:	e0510000 	subs	r0, r1, r0
        215530:	13a00001 	movne	r0, #1	; 0x1
        215534:	e20000ff 	and	r0, r0, #255	; 0xff
        215538:	e58d0018 	str	r0, [sp, #24]
        21553c:	e3a00000 	mov	r0, #0	; 0x0
        215540:	ea000003 	b	215554 <MeetEnds__FUlT1P9SplineSegP7TDArray+0x208>
        215544:	e5da0009 	ldrb	r0, [sl, #9]
        215548:	e3300000 	teq	r0, #0	; 0x0
        21554c:	1affffbc 	bne	215444 <MeetEnds__FUlT1P9SplineSegP7TDArray+0xf8>
        215550:	e3a00002 	mov	r0, #2	; 0x2
        215554:	e58d0010 	str	r0, [sp, #16]
        215558:	e2861001 	add	r1, r6, #1	; 0x1
        21555c:	e1a09001 	mov	r9, r1
        215560:	e1a00004 	mov	r0, r4
        215564:	e5942000 	ldr	r2, [r4]
        215568:	e1a0e00f 	mov	lr, pc
        21556c:	e282f028 	add	pc, r2, #40	; 0x28
        215570:	e59d0048 	ldr	r0, [sp, #72]
        215574:	e1300007 	teq	r0, r7
        215578:	12877001 	addne	r7, r7, #1	; 0x1
        21557c:	e0850287 	add	r0, r5, r7, lsl #5
        215580:	e280e008 	add	lr, r0, #8	; 0x8
        215584:	e28d203c 	add	r2, sp, #60	; 0x3c
        215588:	e8921008 	ldmia	r2, {r3, ip}
        21558c:	e88e1008 	stmia	lr, {r3, ip}
        215590:	e2801018 	add	r1, r0, #24	; 0x18
        215594:	e28d2024 	add	r2, sp, #36	; 0x24
        215598:	e8921008 	ldmia	r2, {r3, ip}
        21559c:	e8811008 	stmia	r1, {r3, ip}
        2155a0:	e59d1010 	ldr	r1, [sp, #16]
        2155a4:	e3310000 	teq	r1, #0	; 0x0
        2155a8:	0a000009 	beq	2155d4 <MeetEnds__FUlT1P9SplineSegP7TDArray+0x288>
        2155ac:	e59d1014 	ldr	r1, [sp, #20]
        2155b0:	e3310000 	teq	r1, #0	; 0x0
        2155b4:	13a08000 	movne	r8, #0	; 0x0
        2155b8:	1a000015 	bne	215614 <MeetEnds__FUlT1P9SplineSegP7TDArray+0x2c8>
        2155bc:	e1a03000 	mov	r3, r0
        2155c0:	e1a00004 	mov	r0, r4
        2155c4:	e3a01000 	mov	r1, #0	; 0x0
        2155c8:	e893000c 	ldmia	r3, {r2, r3}
        2155cc:	eb654fc5 	bl	1b694e8 <$InitGeneralPt(TDArray *, unsigned long, FPoint)>
        2155d0:	ea000023 	b	215664 <MeetEnds__FUlT1P9SplineSegP7TDArray+0x318>
        2155d4:	e3a03000 	mov	r3, #0	; 0x0
        2155d8:	e3a02001 	mov	r2, #1	; 0x1
        2155dc:	e3a01001 	mov	r1, #1	; 0x1
        2155e0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2155e4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2155e8:	e1a01000 	mov	r1, r0
        2155ec:	e1a0000d 	mov	r0, sp
        2155f0:	eb654fb4 	bl	1b694c8 <$DoConic(SplineSeg *)>
        2155f4:	e1a01009 	mov	r1, r9
        2155f8:	e1a00004 	mov	r0, r4
        2155fc:	e8bd000c 	ldmia	sp!, {r2, r3}
        215600:	eb6553c3 	bl	1b6a514 <$SetGeneralPt__FP7TDArrayUl6FPointUcN24>
        215604:	e28dd00c 	add	sp, sp, #12	; 0xc
        215608:	e3300000 	teq	r0, #0	; 0x0
        21560c:	0a000009 	beq	215638 <MeetEnds__FUlT1P9SplineSegP7TDArray+0x2ec>
        215610:	e1a06009 	mov	r6, r9
        215614:	e1a00004 	mov	r0, r4
        215618:	e3a01000 	mov	r1, #0	; 0x0
        21561c:	e5942000 	ldr	r2, [r4]
        215620:	e1a0e00f 	mov	lr, pc
        215624:	e282f01c 	add	pc, r2, #28	; 0x1c
        215628:	e3a01001 	mov	r1, #1	; 0x1
        21562c:	e5c01009 	strb	r1, [r0, #9]
        215630:	e59d1018 	ldr	r1, [sp, #24]
        215634:	e5c0100a 	strb	r1, [r0, #10]
        215638:	e2866001 	add	r6, r6, #1	; 0x1
        21563c:	e1a02008 	mov	r2, r8
        215640:	e3a01000 	mov	r1, #0	; 0x0
        215644:	e59d3018 	ldr	r3, [sp, #24]
        215648:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        21564c:	e1a01006 	mov	r1, r6
        215650:	e1a00004 	mov	r0, r4
        215654:	e28d3048 	add	r3, sp, #72	; 0x48
        215658:	e893000c 	ldmia	r3, {r2, r3}
        21565c:	eb6553ac 	bl	1b6a514 <$SetGeneralPt__FP7TDArrayUl6FPointUcN24>
        215660:	e28dd00c 	add	sp, sp, #12	; 0xc
        215664:	e3a00001 	mov	r0, #1	; 0x1
        215668:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v
 * Address: 00219128
 */
void globals::Minimize() {
    /*
        219128:	e1a0c00d 	mov	ip, sp
        21912c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        219130:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        219134:	e24cb014 	sub	fp, ip, #20	; 0x14
        219138:	e1a05000 	mov	r5, r0
        21913c:	e1a04001 	mov	r4, r1
        219140:	e59b9014 	ldr	r9, [fp, #20]
        219144:	e24ddf75 	sub	sp, sp, #468	; 0x1d4
        219148:	e1a0200d 	mov	r2, sp
        21914c:	e1a01000 	mov	r1, r0
        219150:	e1a00004 	mov	r0, r4
        219154:	e1a0e00f 	mov	lr, pc
        219158:	e59bf018 	ldr	pc, [fp, #24]
        21915c:	e1a06000 	mov	r6, r0
        219160:	e28d3014 	add	r3, sp, #20	; 0x14
        219164:	e1a0200d 	mov	r2, sp
        219168:	e1a01005 	mov	r1, r5
        21916c:	e1a00004 	mov	r0, r4
        219170:	e1a0e00f 	mov	lr, pc
        219174:	e59bf01c 	ldr	pc, [fp, #28]
        219178:	e3540025 	cmp	r4, #37	; 0x25
        21917c:	ba000001 	blt	219188 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x60>
        219180:	e3a00000 	mov	r0, #0	; 0x0
        219184:	ea000049 	b	2192b0 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x188>
        219188:	e3a02001 	mov	r2, #1	; 0x1
        21918c:	e3a00001 	mov	r0, #1	; 0x1
        219190:	e3540001 	cmp	r4, #1	; 0x1
        219194:	ba00000e 	blt	2191d4 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0xac>
        219198:	e28d1014 	add	r1, sp, #20	; 0x14
        21919c:	e7911100 	ldr	r1, [r1, r0, lsl #2]
        2191a0:	e2711000 	rsbs	r1, r1, #0	; 0x0
        2191a4:	e28d3f4f 	add	r3, sp, #316	; 0x13c
        2191a8:	e7831100 	str	r1, [r3, r0, lsl #2]
        2191ac:	e28d30a8 	add	r3, sp, #168	; 0xa8
        2191b0:	e7831100 	str	r1, [r3, r0, lsl #2]
        2191b4:	e28d3014 	add	r3, sp, #20	; 0x14
        2191b8:	e7831100 	str	r1, [r3, r0, lsl #2]
        2191bc:	13a02000 	movne	r2, #0	; 0x0
        2191c0:	e2800001 	add	r0, r0, #1	; 0x1
        2191c4:	e1500004 	cmp	r0, r4
        2191c8:	dafffff2 	ble	219198 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x70>
        2191cc:	e3320000 	teq	r2, #0	; 0x0
        2191d0:	0a000004 	beq	2191e8 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0xc0>
        2191d4:	e3a00000 	mov	r0, #0	; 0x0
        2191d8:	e59b3010 	ldr	r3, [fp, #16]
        2191dc:	e5830000 	str	r0, [r3]
        2191e0:	e5896000 	str	r6, [r9]
        2191e4:	ea000030 	b	2192ac <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x184>
        2191e8:	e3a00001 	mov	r0, #1	; 0x1
        2191ec:	e58d01d0 	str	r0, [sp, #464]
        2191f0:	e59d01d0 	ldr	r0, [sp, #464]
        2191f4:	e59b3010 	ldr	r3, [fp, #16]
        2191f8:	e5830000 	str	r0, [r3]
        2191fc:	e1a0100d 	mov	r1, sp
        219200:	e28b3018 	add	r3, fp, #24	; 0x18
        219204:	e893000c 	ldmia	r3, {r2, r3}
        219208:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        21920c:	e1a03009 	mov	r3, r9
        219210:	e28d2020 	add	r2, sp, #32	; 0x20
        219214:	e1a01005 	mov	r1, r5
        219218:	e1a00004 	mov	r0, r4
        21921c:	eb6544ce 	bl	1b6a55c <$LineMinimize__FlPlN32PFlPlT2_lPFlPlN22_v>
        219220:	e28dd00c 	add	sp, sp, #12	; 0xc
        219224:	e5990000 	ldr	r0, [r9]
        219228:	e3500000 	cmp	r0, #0	; 0x0
        21922c:	a1a01000 	movge	r1, r0
        219230:	b2601000 	rsblt	r1, r0, #0	; 0x0
        219234:	e3560000 	cmp	r6, #0	; 0x0
        219238:	a1a00006 	movge	r0, r6
        21923c:	b2660000 	rsblt	r0, r6, #0	; 0x0
        219240:	e0810000 	add	r0, r1, r0
        219244:	e2801001 	add	r1, r0, #1	; 0x1
        219248:	e59b000c 	ldr	r0, [fp, #12]
        21924c:	eb671f9c 	bl	1be10c4 <$FixedMultiply>
        219250:	e5991000 	ldr	r1, [r9]
        219254:	e0511006 	subs	r1, r1, r6
        219258:	42611000 	rsbmi	r1, r1, #0	; 0x0
        21925c:	e1500081 	cmp	r0, r1, lsl #1
        219260:	aa000011 	bge	2192ac <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x184>
        219264:	e1a0200d 	mov	r2, sp
        219268:	e1a01005 	mov	r1, r5
        21926c:	e1a00004 	mov	r0, r4
        219270:	e1a0e00f 	mov	lr, pc
        219274:	e59bf018 	ldr	pc, [fp, #24]
        219278:	e28d3014 	add	r3, sp, #20	; 0x14
        21927c:	e1a0200d 	mov	r2, sp
        219280:	e1a01005 	mov	r1, r5
        219284:	e1a00004 	mov	r0, r4
        219288:	e5996000 	ldr	r6, [r9]
        21928c:	e1a0e00f 	mov	lr, pc
        219290:	e59bf01c 	ldr	pc, [fp, #28]
        219294:	e3a08000 	mov	r8, #0	; 0x0
        219298:	e1a0a008 	mov	sl, r8
        21929c:	e3560008 	cmp	r6, #8	; 0x8
        2192a0:	a3a07001 	movge	r7, #1	; 0x1
        2192a4:	a3540001 	cmpge	r4, #1	; 0x1
        2192a8:	aa000001 	bge	2192b4 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x18c>
        2192ac:	e3a00001 	mov	r0, #1	; 0x1
        2192b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2192b4:	e28d0f4f 	add	r0, sp, #316	; 0x13c
        2192b8:	e7901107 	ldr	r1, [r0, r7, lsl #2]
        2192bc:	e1a00001 	mov	r0, r1
        2192c0:	eb671f7f 	bl	1be10c4 <$FixedMultiply>
        2192c4:	e0808008 	add	r8, r0, r8
        2192c8:	e28d0014 	add	r0, sp, #20	; 0x14
        2192cc:	e7901107 	ldr	r1, [r0, r7, lsl #2]
        2192d0:	e28d0f4f 	add	r0, sp, #316	; 0x13c
        2192d4:	e7900107 	ldr	r0, [r0, r7, lsl #2]
        2192d8:	e0810000 	add	r0, r1, r0
        2192dc:	eb671f78 	bl	1be10c4 <$FixedMultiply>
        2192e0:	e080a00a 	add	sl, r0, sl
        2192e4:	e2877001 	add	r7, r7, #1	; 0x1
        2192e8:	e1570004 	cmp	r7, r4
        2192ec:	dafffff0 	ble	2192b4 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x18c>
        2192f0:	e3380000 	teq	r8, #0	; 0x0
        2192f4:	0affffec 	beq	2192ac <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x184>
        2192f8:	e1a01008 	mov	r1, r8
        2192fc:	e1a0000a 	mov	r0, sl
        219300:	eb671f6e 	bl	1be10c0 <$FixedDivide>
        219304:	e1a08000 	mov	r8, r0
        219308:	e3a07001 	mov	r7, #1	; 0x1
        21930c:	e3540001 	cmp	r4, #1	; 0x1
        219310:	ba00001c 	blt	219388 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x260>
        219314:	e268a000 	rsb	sl, r8, #0	; 0x0
        219318:	e28d0014 	add	r0, sp, #20	; 0x14
        21931c:	e7900107 	ldr	r0, [r0, r7, lsl #2]
        219320:	e2600000 	rsb	r0, r0, #0	; 0x0
        219324:	e28d1f4f 	add	r1, sp, #316	; 0x13c
        219328:	e7810107 	str	r0, [r1, r7, lsl #2]
        21932c:	e3580000 	cmp	r8, #0	; 0x0
        219330:	a1a01008 	movge	r1, r8
        219334:	b1a0100a 	movlt	r1, sl
        219338:	e351080a 	cmp	r1, #655360	; 0xa0000
        21933c:	da000003 	ble	219350 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x228>
        219340:	e1a01008 	mov	r1, r8
        219344:	eb671f5d 	bl	1be10c0 <$FixedDivide>
        219348:	e28d10a8 	add	r1, sp, #168	; 0xa8
        21934c:	ea000004 	b	219364 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x23c>
        219350:	e28d00a8 	add	r0, sp, #168	; 0xa8
        219354:	e7901107 	ldr	r1, [r0, r7, lsl #2]
        219358:	e1a00008 	mov	r0, r8
        21935c:	eb671f58 	bl	1be10c4 <$FixedMultiply>
        219360:	e28d1f4f 	add	r1, sp, #316	; 0x13c
        219364:	e7911107 	ldr	r1, [r1, r7, lsl #2]
        219368:	e0801001 	add	r1, r0, r1
        21936c:	e28d00a8 	add	r0, sp, #168	; 0xa8
        219370:	e7801107 	str	r1, [r0, r7, lsl #2]
        219374:	e28d0014 	add	r0, sp, #20	; 0x14
        219378:	e7801107 	str	r1, [r0, r7, lsl #2]
        21937c:	e2877001 	add	r7, r7, #1	; 0x1
        219380:	e1570004 	cmp	r7, r4
        219384:	daffffe3 	ble	219318 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x1f0>
        219388:	e59d01d0 	ldr	r0, [sp, #464]
        21938c:	e2800001 	add	r0, r0, #1	; 0x1
        219390:	e58d01d0 	str	r0, [sp, #464]
        219394:	e3500064 	cmp	r0, #100	; 0x64
        219398:	daffff94 	ble	2191f0 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0xc8>
        21939c:	eaffff77 	b	219180 <Minimize__FPllT2N21PFlPlT2_lPFlPlN22_v+0x58>
    */
}

/**
 * Symbol: Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27
 * Address: 002199d8
 */
void globals::Minimize1D() {
    /*
        2199d8:	e1a0c00d 	mov	ip, sp
        2199dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2199e0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2199e4:	e24cb014 	sub	fp, ip, #20	; 0x14
        2199e8:	e3a05000 	mov	r5, #0	; 0x0
        2199ec:	e1500002 	cmp	r0, r2
        2199f0:	e52d5038 	str	r5, [sp, -#56]!
        2199f4:	a1a09002 	movge	r9, r2
        2199f8:	b1a09000 	movlt	r9, r0
        2199fc:	d1a08002 	movle	r8, r2
        219a00:	c1a08000 	movgt	r8, r0
        219a04:	e58d100c 	str	r1, [sp, #12]
        219a08:	e58d1008 	str	r1, [sp, #8]
        219a0c:	e1a04001 	mov	r4, r1
        219a10:	e59b2024 	ldr	r2, [fp, #36]
        219a14:	e59b3034 	ldr	r3, [fp, #52]
        219a18:	e92d000c 	stmdb	sp!, {r2, r3}
        219a1c:	e1a00004 	mov	r0, r4
        219a20:	e28b3018 	add	r3, fp, #24	; 0x18
        219a24:	e893000e 	ldmia	r3, {r1, r2, r3}
        219a28:	e1a0e00f 	mov	lr, pc
        219a2c:	e59bf010 	ldr	pc, [fp, #16]
        219a30:	e28dd008 	add	sp, sp, #8	; 0x8
        219a34:	e58d0020 	str	r0, [sp, #32]
        219a38:	e58d001c 	str	r0, [sp, #28]
        219a3c:	e58d0018 	str	r0, [sp, #24]
        219a40:	e59b2028 	ldr	r2, [fp, #40]
        219a44:	e59b3034 	ldr	r3, [fp, #52]
        219a48:	e92d000c 	stmdb	sp!, {r2, r3}
        219a4c:	e1a00004 	mov	r0, r4
        219a50:	e28b3018 	add	r3, fp, #24	; 0x18
        219a54:	e893000e 	ldmia	r3, {r1, r2, r3}
        219a58:	e1a0e00f 	mov	lr, pc
        219a5c:	e59bf014 	ldr	pc, [fp, #20]
        219a60:	e28dd008 	add	sp, sp, #8	; 0x8
        219a64:	e58d0028 	str	r0, [sp, #40]
        219a68:	e58d0024 	str	r0, [sp, #36]
        219a6c:	e1a07000 	mov	r7, r0
        219a70:	e3a00001 	mov	r0, #1	; 0x1
        219a74:	e58d0034 	str	r0, [sp, #52]
        219a78:	e0890008 	add	r0, r9, r8
        219a7c:	e1a000c0 	mov	r0, r0, asr #1
        219a80:	e3540000 	cmp	r4, #0	; 0x0
        219a84:	e58d0004 	str	r0, [sp, #4]
        219a88:	a1a01004 	movge	r1, r4
        219a8c:	b2641000 	rsblt	r1, r4, #0	; 0x0
        219a90:	e59b002c 	ldr	r0, [fp, #44]
        219a94:	eb671d8a 	bl	1be10c4 <$FixedMultiply>
        219a98:	e2806001 	add	r6, r0, #1	; 0x1
        219a9c:	e1a02086 	mov	r2, r6, lsl #1
        219aa0:	e58d2014 	str	r2, [sp, #20]
        219aa4:	e59d0004 	ldr	r0, [sp, #4]
        219aa8:	e0540000 	subs	r0, r4, r0
        219aac:	51a01000 	movpl	r1, r0
        219ab0:	42601000 	rsbmi	r1, r0, #0	; 0x0
        219ab4:	e0480009 	sub	r0, r8, r9
        219ab8:	e59d2014 	ldr	r2, [sp, #20]
        219abc:	e04220c0 	sub	r2, r2, r0, asr #1
        219ac0:	e1510002 	cmp	r1, r2
        219ac4:	ca000003 	bgt	219ad8 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x100>
        219ac8:	e59b0030 	ldr	r0, [fp, #48]
        219acc:	e5804000 	str	r4, [r0]
        219ad0:	e59d0018 	ldr	r0, [sp, #24]
        219ad4:	ea0000ea 	b	219e84 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x4ac>
        219ad8:	e59d1000 	ldr	r1, [sp]
        219adc:	e3510000 	cmp	r1, #0	; 0x0
        219ae0:	b2611000 	rsblt	r1, r1, #0	; 0x0
        219ae4:	e1510006 	cmp	r1, r6
        219ae8:	da000087 	ble	219d0c <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x334>
        219aec:	e1a0a080 	mov	sl, r0, lsl #1
        219af0:	e58da02c 	str	sl, [sp, #44]
        219af4:	e59d0024 	ldr	r0, [sp, #36]
        219af8:	e1300007 	teq	r0, r7
        219afc:	0a000006 	beq	219b1c <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x144>
        219b00:	e59d0024 	ldr	r0, [sp, #36]
        219b04:	e0472000 	sub	r2, r7, r0
        219b08:	e59d0008 	ldr	r0, [sp, #8]
        219b0c:	e0400004 	sub	r0, r0, r4
        219b10:	e1a01007 	mov	r1, r7
        219b14:	eb671d6b 	bl	1be10c8 <$FixedMultiplyDivide>
        219b18:	e1a0a000 	mov	sl, r0
        219b1c:	e59d0028 	ldr	r0, [sp, #40]
        219b20:	e1300007 	teq	r0, r7
        219b24:	0a000006 	beq	219b44 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x16c>
        219b28:	e59d0028 	ldr	r0, [sp, #40]
        219b2c:	e0472000 	sub	r2, r7, r0
        219b30:	e59d000c 	ldr	r0, [sp, #12]
        219b34:	e0400004 	sub	r0, r0, r4
        219b38:	e1a01007 	mov	r1, r7
        219b3c:	eb671d61 	bl	1be10c8 <$FixedMultiplyDivide>
        219b40:	e58d002c 	str	r0, [sp, #44]
        219b44:	e084000a 	add	r0, r4, sl
        219b48:	e59d102c 	ldr	r1, [sp, #44]
        219b4c:	e0841001 	add	r1, r4, r1
        219b50:	e58d1010 	str	r1, [sp, #16]
        219b54:	e0401008 	sub	r1, r0, r8
        219b58:	e0490000 	sub	r0, r9, r0
        219b5c:	eb671d58 	bl	1be10c4 <$FixedMultiply>
        219b60:	e3500000 	cmp	r0, #0	; 0x0
        219b64:	da000005 	ble	219b80 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x1a8>
        219b68:	e1a0100a 	mov	r1, sl
        219b6c:	e1a00007 	mov	r0, r7
        219b70:	eb671d53 	bl	1be10c4 <$FixedMultiply>
        219b74:	e3500000 	cmp	r0, #0	; 0x0
        219b78:	d3a00001 	movle	r0, #1	; 0x1
        219b7c:	da000000 	ble	219b84 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x1ac>
        219b80:	e3a00000 	mov	r0, #0	; 0x0
        219b84:	e20020ff 	and	r2, r0, #255	; 0xff
        219b88:	e58d2030 	str	r2, [sp, #48]
        219b8c:	e59d0010 	ldr	r0, [sp, #16]
        219b90:	e0401008 	sub	r1, r0, r8
        219b94:	e0490000 	sub	r0, r9, r0
        219b98:	eb671d49 	bl	1be10c4 <$FixedMultiply>
        219b9c:	e3500000 	cmp	r0, #0	; 0x0
        219ba0:	da000005 	ble	219bbc <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x1e4>
        219ba4:	e1a00007 	mov	r0, r7
        219ba8:	e59d102c 	ldr	r1, [sp, #44]
        219bac:	eb671d44 	bl	1be10c4 <$FixedMultiply>
        219bb0:	e3500000 	cmp	r0, #0	; 0x0
        219bb4:	d3a00001 	movle	r0, #1	; 0x1
        219bb8:	da000000 	ble	219bc0 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x1e8>
        219bbc:	e3a00000 	mov	r0, #0	; 0x0
        219bc0:	e20010ff 	and	r1, r0, #255	; 0xff
        219bc4:	e59d0000 	ldr	r0, [sp]
        219bc8:	e58d5000 	str	r5, [sp]
        219bcc:	e59d2030 	ldr	r2, [sp, #48]
        219bd0:	e3520000 	cmp	r2, #0	; 0x0
        219bd4:	1a000002 	bne	219be4 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x20c>
        219bd8:	e3310000 	teq	r1, #0	; 0x0
        219bdc:	0a000047 	beq	219d00 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x328>
        219be0:	ea000010 	b	219c28 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x250>
        219be4:	0a00000f 	beq	219c28 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x250>
        219be8:	e3310000 	teq	r1, #0	; 0x0
        219bec:	0a000008 	beq	219c14 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x23c>
        219bf0:	e35a0000 	cmp	sl, #0	; 0x0
        219bf4:	a1a0200a 	movge	r2, sl
        219bf8:	b26a2000 	rsblt	r2, sl, #0	; 0x0
        219bfc:	e59d102c 	ldr	r1, [sp, #44]
        219c00:	e3510000 	cmp	r1, #0	; 0x0
        219c04:	b2611000 	rsblt	r1, r1, #0	; 0x0
        219c08:	e1520001 	cmp	r2, r1
        219c0c:	aa000005 	bge	219c28 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x250>
        219c10:	ea000002 	b	219c20 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x248>
        219c14:	e59d2030 	ldr	r2, [sp, #48]
        219c18:	e3320000 	teq	r2, #0	; 0x0
        219c1c:	0a000001 	beq	219c28 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x250>
        219c20:	e1a0500a 	mov	r5, sl
        219c24:	ea000000 	b	219c2c <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x254>
        219c28:	e59d502c 	ldr	r5, [sp, #44]
        219c2c:	e3550000 	cmp	r5, #0	; 0x0
        219c30:	a1a01005 	movge	r1, r5
        219c34:	b2651000 	rsblt	r1, r5, #0	; 0x0
        219c38:	e3500000 	cmp	r0, #0	; 0x0
        219c3c:	b2600000 	rsblt	r0, r0, #0	; 0x0
        219c40:	e15100c0 	cmp	r1, r0, asr #1
        219c44:	ca000015 	bgt	219ca0 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2c8>
        219c48:	e0840005 	add	r0, r4, r5
        219c4c:	e0401009 	sub	r1, r0, r9
        219c50:	e59d2014 	ldr	r2, [sp, #20]
        219c54:	e1510002 	cmp	r1, r2
        219c58:	a0480000 	subge	r0, r8, r0
        219c5c:	a59d2014 	ldrge	r2, [sp, #20]
        219c60:	a1500002 	cmpge	r0, r2
        219c64:	aa000014 	bge	219cbc <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2e4>
        219c68:	e59d0004 	ldr	r0, [sp, #4]
        219c6c:	e0400004 	sub	r0, r0, r4
        219c70:	e3500000 	cmp	r0, #0	; 0x0
        219c74:	da000004 	ble	219c8c <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2b4>
        219c78:	e3560000 	cmp	r6, #0	; 0x0
        219c7c:	a1a00006 	movge	r0, r6
        219c80:	b2660000 	rsblt	r0, r6, #0	; 0x0
        219c84:	e1a05000 	mov	r5, r0
        219c88:	ea00000b 	b	219cbc <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2e4>
        219c8c:	e3560000 	cmp	r6, #0	; 0x0
        219c90:	a1a00006 	movge	r0, r6
        219c94:	b2660000 	rsblt	r0, r6, #0	; 0x0
        219c98:	e2605000 	rsb	r5, r0, #0	; 0x0
        219c9c:	ea000006 	b	219cbc <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2e4>
        219ca0:	e3570000 	cmp	r7, #0	; 0x0
        219ca4:	ba000001 	blt	219cb0 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2d8>
        219ca8:	e0490004 	sub	r0, r9, r4
        219cac:	ea000000 	b	219cb4 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2dc>
        219cb0:	e0480004 	sub	r0, r8, r4
        219cb4:	e58d0000 	str	r0, [sp]
        219cb8:	e1a050c0 	mov	r5, r0, asr #1
        219cbc:	e3550000 	cmp	r5, #0	; 0x0
        219cc0:	a1a00005 	movge	r0, r5
        219cc4:	b2650000 	rsblt	r0, r5, #0	; 0x0
        219cc8:	e1500006 	cmp	r0, r6
        219ccc:	da000011 	ble	219d18 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x340>
        219cd0:	e0846005 	add	r6, r4, r5
        219cd4:	e59b2024 	ldr	r2, [fp, #36]
        219cd8:	e59b3034 	ldr	r3, [fp, #52]
        219cdc:	e92d000c 	stmdb	sp!, {r2, r3}
        219ce0:	e1a00006 	mov	r0, r6
        219ce4:	e28b3018 	add	r3, fp, #24	; 0x18
        219ce8:	e893000e 	ldmia	r3, {r1, r2, r3}
        219cec:	e1a0e00f 	mov	lr, pc
        219cf0:	e59bf010 	ldr	pc, [fp, #16]
        219cf4:	e28dd008 	add	sp, sp, #8	; 0x8
        219cf8:	e1a0a000 	mov	sl, r0
        219cfc:	ea00001e 	b	219d7c <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x3a4>
        219d00:	e3570000 	cmp	r7, #0	; 0x0
        219d04:	baffffe9 	blt	219cb0 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2d8>
        219d08:	eaffffe6 	b	219ca8 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2d0>
        219d0c:	e3570000 	cmp	r7, #0	; 0x0
        219d10:	baffffe6 	blt	219cb0 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2d8>
        219d14:	eaffffe3 	b	219ca8 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x2d0>
        219d18:	e3550000 	cmp	r5, #0	; 0x0
        219d1c:	da000002 	ble	219d2c <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x354>
        219d20:	e3560000 	cmp	r6, #0	; 0x0
        219d24:	aa000003 	bge	219d38 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x360>
        219d28:	ea000001 	b	219d34 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x35c>
        219d2c:	e3560000 	cmp	r6, #0	; 0x0
        219d30:	b2666000 	rsblt	r6, r6, #0	; 0x0
        219d34:	e2666000 	rsb	r6, r6, #0	; 0x0
        219d38:	e0866004 	add	r6, r6, r4
        219d3c:	e59b2024 	ldr	r2, [fp, #36]
        219d40:	e59b3034 	ldr	r3, [fp, #52]
        219d44:	e92d000c 	stmdb	sp!, {r2, r3}
        219d48:	e1a00006 	mov	r0, r6
        219d4c:	e28b3018 	add	r3, fp, #24	; 0x18
        219d50:	e893000e 	ldmia	r3, {r1, r2, r3}
        219d54:	e1a0e00f 	mov	lr, pc
        219d58:	e59bf010 	ldr	pc, [fp, #16]
        219d5c:	e28dd008 	add	sp, sp, #8	; 0x8
        219d60:	e1a0a000 	mov	sl, r0
        219d64:	e59d1018 	ldr	r1, [sp, #24]
        219d68:	e1500001 	cmp	r0, r1
        219d6c:	caffff55 	bgt	219ac8 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0xf0>
        219d70:	e1360009 	teq	r6, r9
        219d74:	11360008 	teqne	r6, r8
        219d78:	0affff52 	beq	219ac8 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0xf0>
        219d7c:	e59b2028 	ldr	r2, [fp, #40]
        219d80:	e59b3034 	ldr	r3, [fp, #52]
        219d84:	e92d000c 	stmdb	sp!, {r2, r3}
        219d88:	e1a00006 	mov	r0, r6
        219d8c:	e28b3018 	add	r3, fp, #24	; 0x18
        219d90:	e893000e 	ldmia	r3, {r1, r2, r3}
        219d94:	e1a0e00f 	mov	lr, pc
        219d98:	e59bf014 	ldr	pc, [fp, #20]
        219d9c:	e28dd008 	add	sp, sp, #8	; 0x8
        219da0:	e59d1018 	ldr	r1, [sp, #24]
        219da4:	e15a0001 	cmp	sl, r1
        219da8:	aa000010 	bge	219df0 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x418>
        219dac:	e1560004 	cmp	r6, r4
        219db0:	b1a08004 	movlt	r8, r4
        219db4:	a1a09004 	movge	r9, r4
        219db8:	e59d1008 	ldr	r1, [sp, #8]
        219dbc:	e58d100c 	str	r1, [sp, #12]
        219dc0:	e59d101c 	ldr	r1, [sp, #28]
        219dc4:	e58d1020 	str	r1, [sp, #32]
        219dc8:	e59d1024 	ldr	r1, [sp, #36]
        219dcc:	e58d1028 	str	r1, [sp, #40]
        219dd0:	e58d4008 	str	r4, [sp, #8]
        219dd4:	e59d1018 	ldr	r1, [sp, #24]
        219dd8:	e1a04006 	mov	r4, r6
        219ddc:	e58d7024 	str	r7, [sp, #36]
        219de0:	e1a07000 	mov	r7, r0
        219de4:	e58d101c 	str	r1, [sp, #28]
        219de8:	e58da018 	str	sl, [sp, #24]
        219dec:	ea00001e 	b	219e6c <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x494>
        219df0:	e1560004 	cmp	r6, r4
        219df4:	a1a08006 	movge	r8, r6
        219df8:	b1a09006 	movlt	r9, r6
        219dfc:	e59d101c 	ldr	r1, [sp, #28]
        219e00:	e15a0001 	cmp	sl, r1
        219e04:	da000002 	ble	219e14 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x43c>
        219e08:	e59d2008 	ldr	r2, [sp, #8]
        219e0c:	e1320004 	teq	r2, r4
        219e10:	1a000009 	bne	219e3c <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x464>
        219e14:	e59d1008 	ldr	r1, [sp, #8]
        219e18:	e58d100c 	str	r1, [sp, #12]
        219e1c:	e59d101c 	ldr	r1, [sp, #28]
        219e20:	e58d1020 	str	r1, [sp, #32]
        219e24:	e59d1024 	ldr	r1, [sp, #36]
        219e28:	e58d0024 	str	r0, [sp, #36]
        219e2c:	e58d1028 	str	r1, [sp, #40]
        219e30:	e58d6008 	str	r6, [sp, #8]
        219e34:	e58da01c 	str	sl, [sp, #28]
        219e38:	ea00000b 	b	219e6c <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x494>
        219e3c:	e59d1020 	ldr	r1, [sp, #32]
        219e40:	e15a0001 	cmp	sl, r1
        219e44:	ba000005 	blt	219e60 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x488>
        219e48:	e59d100c 	ldr	r1, [sp, #12]
        219e4c:	e1310004 	teq	r1, r4
        219e50:	159d100c 	ldrne	r1, [sp, #12]
        219e54:	159d2008 	ldrne	r2, [sp, #8]
        219e58:	11310002 	teqne	r1, r2
        219e5c:	1a000002 	bne	219e6c <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0x494>
        219e60:	e58d0028 	str	r0, [sp, #40]
        219e64:	e58d600c 	str	r6, [sp, #12]
        219e68:	e58da020 	str	sl, [sp, #32]
        219e6c:	e59d0034 	ldr	r0, [sp, #52]
        219e70:	e2800001 	add	r0, r0, #1	; 0x1
        219e74:	e58d0034 	str	r0, [sp, #52]
        219e78:	e3500064 	cmp	r0, #100	; 0x64
        219e7c:	dafffefd 	ble	219a78 <Minimize1D__FlN21PFlT1PlT3PFlPlT2_lT3_lPFlT1PlT3PFlPlN22_vT3_lT1PlT7PFlPlT2_lPFlPlN22_vT1N27+0xa0>
        219e80:	e3a00000 	mov	r0, #0	; 0x0
        219e84:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeEllipseTemplate__FP5FRectPlP6FPointN23N42
 * Address: 00221968
 */
void globals::MakeEllipseTemplate() {
    /*
        221968:	e1a0c00d 	mov	ip, sp
        22196c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        221970:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        221974:	e24cb014 	sub	fp, ip, #20	; 0x14
        221978:	e1a0a000 	mov	sl, r0
        22197c:	e1a04001 	mov	r4, r1
        221980:	e1a05002 	mov	r5, r2
        221984:	e59b6024 	ldr	r6, [fp, #36]
        221988:	e5911010 	ldr	r1, [r1, #16]
        22198c:	e594000c 	ldr	r0, [r4, #12]
        221990:	e5840010 	str	r0, [r4, #16]
        221994:	e5940000 	ldr	r0, [r4]
        221998:	e1a000c0 	mov	r0, r0, asr #1
        22199c:	e5840000 	str	r0, [r4]
        2219a0:	e5942008 	ldr	r2, [r4, #8]
        2219a4:	e1a020c2 	mov	r2, r2, asr #1
        2219a8:	e1a010c1 	mov	r1, r1, asr #1
        2219ac:	e584100c 	str	r1, [r4, #12]
        2219b0:	e1a01000 	mov	r1, r0
        2219b4:	e5842008 	str	r2, [r4, #8]
        2219b8:	eb66fdc1 	bl	1be10c4 <$FixedMultiply>
        2219bc:	e5941004 	ldr	r1, [r4, #4]
        2219c0:	e0417000 	sub	r7, r1, r0
        2219c4:	e3a01671 	mov	r1, #118489088	; 0x7100000
        2219c8:	e2811202 	add	r1, r1, #536870912	; 0x20000000
        2219cc:	e3a00801 	mov	r0, #65536	; 0x10000
        2219d0:	eb66fdba 	bl	1be10c0 <$FixedDivide>
        2219d4:	e3570000 	cmp	r7, #0	; 0x0
        2219d8:	a1a01007 	movge	r1, r7
        2219dc:	b2671000 	rsblt	r1, r7, #0	; 0x0
        2219e0:	e1500001 	cmp	r0, r1
        2219e4:	ca00001f 	bgt	221a68 <MakeEllipseTemplate__FP5FRectPlP6FPointN23N42+0x100>
        2219e8:	e1a00007 	mov	r0, r7
        2219ec:	e5941010 	ldr	r1, [r4, #16]
        2219f0:	eb66fdb3 	bl	1be10c4 <$FixedMultiply>
        2219f4:	e1a08000 	mov	r8, r0
        2219f8:	e5940000 	ldr	r0, [r4]
        2219fc:	e1a00080 	mov	r0, r0, lsl #1
        221a00:	e5941008 	ldr	r1, [r4, #8]
        221a04:	eb66fdae 	bl	1be10c4 <$FixedMultiply>
        221a08:	e594100c 	ldr	r1, [r4, #12]
        221a0c:	e0400001 	sub	r0, r0, r1
        221a10:	eb66fdab 	bl	1be10c4 <$FixedMultiply>
        221a14:	e0808008 	add	r8, r0, r8
        221a18:	e5941008 	ldr	r1, [r4, #8]
        221a1c:	e1a00001 	mov	r0, r1
        221a20:	eb66fda7 	bl	1be10c4 <$FixedMultiply>
        221a24:	e5941004 	ldr	r1, [r4, #4]
        221a28:	eb66fda5 	bl	1be10c4 <$FixedMultiply>
        221a2c:	e0588000 	subs	r8, r8, r0
        221a30:	51a09008 	movpl	r9, r8
        221a34:	42689000 	rsbmi	r9, r8, #0	; 0x0
        221a38:	e3a01671 	mov	r1, #118489088	; 0x7100000
        221a3c:	e2811202 	add	r1, r1, #536870912	; 0x20000000
        221a40:	e3a00801 	mov	r0, #65536	; 0x10000
        221a44:	eb66fd9d 	bl	1be10c0 <$FixedDivide>
        221a48:	e1590000 	cmp	r9, r0
        221a4c:	ba000005 	blt	221a68 <MakeEllipseTemplate__FP5FRectPlP6FPointN23N42+0x100>
        221a50:	e5940004 	ldr	r0, [r4, #4]
        221a54:	e2801801 	add	r1, r0, #65536	; 0x10000
        221a58:	e1a00008 	mov	r0, r8
        221a5c:	eb66fd98 	bl	1be10c4 <$FixedMultiply>
        221a60:	e3500000 	cmp	r0, #0	; 0x0
        221a64:	da000001 	ble	221a70 <MakeEllipseTemplate__FP5FRectPlP6FPointN23N42+0x108>
        221a68:	e3a00000 	mov	r0, #0	; 0x0
        221a6c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        221a70:	e59a0004 	ldr	r0, [sl, #4]
        221a74:	e59a100c 	ldr	r1, [sl, #12]
        221a78:	e0410000 	sub	r0, r1, r0
        221a7c:	e59a1000 	ldr	r1, [sl]
        221a80:	e59a2008 	ldr	r2, [sl, #8]
        221a84:	e0421001 	sub	r1, r2, r1
        221a88:	e1500001 	cmp	r0, r1
        221a8c:	c1a01000 	movgt	r1, r0
        221a90:	e1a00001 	mov	r0, r1
        221a94:	e3a01701 	mov	r1, #262144	; 0x40000
        221a98:	eb66fd88 	bl	1be10c0 <$FixedDivide>
        221a9c:	e1a09000 	mov	r9, r0
        221aa0:	e5940000 	ldr	r0, [r4]
        221aa4:	e594100c 	ldr	r1, [r4, #12]
        221aa8:	eb66fd85 	bl	1be10c4 <$FixedMultiply>
        221aac:	e52d0004 	str	r0, [sp, -#4]!
        221ab0:	e9940003 	ldmib	r4, {r0, r1}
        221ab4:	eb66fd82 	bl	1be10c4 <$FixedMultiply>
        221ab8:	e49d1004 	ldr	r1, [sp], #4
        221abc:	e0410000 	sub	r0, r1, r0
        221ac0:	e1a01007 	mov	r1, r7
        221ac4:	eb66fd7d 	bl	1be10c0 <$FixedDivide>
        221ac8:	e2400801 	sub	r0, r0, #65536	; 0x10000
        221acc:	e1a01009 	mov	r1, r9
        221ad0:	eb66fd7b 	bl	1be10c4 <$FixedMultiply>
        221ad4:	e59a1000 	ldr	r1, [sl]
        221ad8:	e0800001 	add	r0, r0, r1
        221adc:	e5850000 	str	r0, [r5]
        221ae0:	e5940000 	ldr	r0, [r4]
        221ae4:	e5941008 	ldr	r1, [r4, #8]
        221ae8:	eb66fd75 	bl	1be10c4 <$FixedMultiply>
        221aec:	e594100c 	ldr	r1, [r4, #12]
        221af0:	e0400001 	sub	r0, r0, r1
        221af4:	e1a01007 	mov	r1, r7
        221af8:	eb66fd70 	bl	1be10c0 <$FixedDivide>
        221afc:	e2400801 	sub	r0, r0, #65536	; 0x10000
        221b00:	e1a01009 	mov	r1, r9
        221b04:	eb66fd6e 	bl	1be10c4 <$FixedMultiply>
        221b08:	e5ba1004 	ldr	r1, [sl, #4]!
        221b0c:	e0800001 	add	r0, r0, r1
        221b10:	e5850004 	str	r0, [r5, #4]
        221b14:	e5941000 	ldr	r1, [r4]
        221b18:	e1a00001 	mov	r0, r1
        221b1c:	eb66fd68 	bl	1be10c4 <$FixedMultiply>
        221b20:	e1a0a000 	mov	sl, r0
        221b24:	e5940004 	ldr	r0, [r4, #4]
        221b28:	e2600801 	rsb	r0, r0, #65536	; 0x10000
        221b2c:	e1a01000 	mov	r1, r0
        221b30:	eb66fd63 	bl	1be10c4 <$FixedMultiply>
        221b34:	e1a0100a 	mov	r1, sl
        221b38:	e52d0004 	str	r0, [sp, -#4]!
        221b3c:	e3a00701 	mov	r0, #262144	; 0x40000
        221b40:	eb66fd5f 	bl	1be10c4 <$FixedMultiply>
        221b44:	e1a01000 	mov	r1, r0
        221b48:	e49d0004 	ldr	r0, [sp], #4
        221b4c:	e0800001 	add	r0, r0, r1
        221b50:	eb66fd60 	bl	1be10d8 <$FractSquareRoot>
        221b54:	e2800040 	add	r0, r0, #64	; 0x40
        221b58:	e1a003c0 	mov	r0, r0, asr #7
        221b5c:	e5941004 	ldr	r1, [r4, #4]
        221b60:	e2811801 	add	r1, r1, #65536	; 0x10000
        221b64:	e0412000 	sub	r2, r1, r0
        221b68:	e1a020c2 	mov	r2, r2, asr #1
        221b6c:	e59b3018 	ldr	r3, [fp, #24]
        221b70:	e0810000 	add	r0, r1, r0
        221b74:	e1a000c0 	mov	r0, r0, asr #1
        221b78:	e5832000 	str	r2, [r3]
        221b7c:	e59b101c 	ldr	r1, [fp, #28]
        221b80:	e5810000 	str	r0, [r1]
        221b84:	e1a01007 	mov	r1, r7
        221b88:	e1a00008 	mov	r0, r8
        221b8c:	eb66fd4b 	bl	1be10c0 <$FixedDivide>
        221b90:	e2607000 	rsb	r7, r0, #0	; 0x0
        221b94:	e59b3018 	ldr	r3, [fp, #24]
        221b98:	e1a00007 	mov	r0, r7
        221b9c:	e5931000 	ldr	r1, [r3]
        221ba0:	eb66fd46 	bl	1be10c0 <$FixedDivide>
        221ba4:	e1a08000 	mov	r8, r0
        221ba8:	eb66fd4a 	bl	1be10d8 <$FractSquareRoot>
        221bac:	e2800040 	add	r0, r0, #64	; 0x40
        221bb0:	e1a003c0 	mov	r0, r0, asr #7
        221bb4:	e59b3018 	ldr	r3, [fp, #24]
        221bb8:	e1a01009 	mov	r1, r9
        221bbc:	e5830000 	str	r0, [r3]
        221bc0:	eb66fd3f 	bl	1be10c4 <$FixedMultiply>
        221bc4:	e59b3018 	ldr	r3, [fp, #24]
        221bc8:	e5830000 	str	r0, [r3]
        221bcc:	e59b101c 	ldr	r1, [fp, #28]
        221bd0:	e5911000 	ldr	r1, [r1]
        221bd4:	e1a00007 	mov	r0, r7
        221bd8:	eb66fd38 	bl	1be10c0 <$FixedDivide>
        221bdc:	e1a07000 	mov	r7, r0
        221be0:	eb66fd3c 	bl	1be10d8 <$FractSquareRoot>
        221be4:	e2800040 	add	r0, r0, #64	; 0x40
        221be8:	e1a003c0 	mov	r0, r0, asr #7
        221bec:	e59b101c 	ldr	r1, [fp, #28]
        221bf0:	e5810000 	str	r0, [r1]
        221bf4:	e1a01009 	mov	r1, r9
        221bf8:	eb66fd31 	bl	1be10c4 <$FixedMultiply>
        221bfc:	e59b101c 	ldr	r1, [fp, #28]
        221c00:	e5810000 	str	r0, [r1]
        221c04:	e5940000 	ldr	r0, [r4]
        221c08:	e3500000 	cmp	r0, #0	; 0x0
        221c0c:	a1a0a000 	movge	sl, r0
        221c10:	b260a000 	rsblt	sl, r0, #0	; 0x0
        221c14:	e3a01671 	mov	r1, #118489088	; 0x7100000
        221c18:	e2811202 	add	r1, r1, #536870912	; 0x20000000
        221c1c:	e3a00801 	mov	r0, #65536	; 0x10000
        221c20:	eb66fd26 	bl	1be10c0 <$FixedDivide>
        221c24:	e15a0000 	cmp	sl, r0
        221c28:	aa000001 	bge	221c34 <MakeEllipseTemplate__FP5FRectPlP6FPointN23N42+0x2cc>
        221c2c:	e3a00000 	mov	r0, #0	; 0x0
        221c30:	ea000018 	b	221c98 <MakeEllipseTemplate__FP5FRectPlP6FPointN23N42+0x330>
        221c34:	e5940000 	ldr	r0, [r4]
        221c38:	e1a0a080 	mov	sl, r0, lsl #1
        221c3c:	e5940004 	ldr	r0, [r4, #4]
        221c40:	e2700801 	rsbs	r0, r0, #65536	; 0x10000
        221c44:	51a01000 	movpl	r1, r0
        221c48:	42601000 	rsbmi	r1, r0, #0	; 0x0
        221c4c:	e1a0000a 	mov	r0, sl
        221c50:	eb66fd1a 	bl	1be10c0 <$FixedDivide>
        221c54:	e5860000 	str	r0, [r6]
        221c58:	e3500000 	cmp	r0, #0	; 0x0
        221c5c:	a1a01000 	movge	r1, r0
        221c60:	b2601000 	rsblt	r1, r0, #0	; 0x0
        221c64:	e52d1004 	str	r1, [sp, -#4]!
        221c68:	e3a017fa 	mov	r1, #65536000	; 0x3e80000
        221c6c:	e3a0060b 	mov	r0, #11534336	; 0xb00000
        221c70:	eb66fd12 	bl	1be10c0 <$FixedDivide>
        221c74:	e49d1004 	ldr	r1, [sp], #4
        221c78:	e1510000 	cmp	r1, r0
        221c7c:	baffffea 	blt	221c2c <MakeEllipseTemplate__FP5FRectPlP6FPointN23N42+0x2c4>
        221c80:	e5940004 	ldr	r0, [r4, #4]
        221c84:	e2700801 	rsbs	r0, r0, #65536	; 0x10000
        221c88:	42600000 	rsbmi	r0, r0, #0	; 0x0
        221c8c:	e1a0100a 	mov	r1, sl
        221c90:	eb66fd09 	bl	1be10bc <$FixedAtan2>
        221c94:	e1a000c0 	mov	r0, r0, asr #1
        221c98:	e5860000 	str	r0, [r6]
        221c9c:	e0480007 	sub	r0, r8, r7
        221ca0:	eb66fd0c 	bl	1be10d8 <$FractSquareRoot>
        221ca4:	e2800040 	add	r0, r0, #64	; 0x40
        221ca8:	e1a003c0 	mov	r0, r0, asr #7
        221cac:	e1a01009 	mov	r1, r9
        221cb0:	eb66fd03 	bl	1be10c4 <$FixedMultiply>
        221cb4:	e1a08000 	mov	r8, r0
        221cb8:	e5960000 	ldr	r0, [r6]
        221cbc:	eb65263f 	bl	1b6b5c0 <$FractCos(long)>
        221cc0:	e2800a02 	add	r0, r0, #8192	; 0x2000
        221cc4:	e1a01740 	mov	r1, r0, asr #14
        221cc8:	e1a00008 	mov	r0, r8
        221ccc:	eb66fcfc 	bl	1be10c4 <$FixedMultiply>
        221cd0:	e1a07000 	mov	r7, r0
        221cd4:	e5960000 	ldr	r0, [r6]
        221cd8:	eb652639 	bl	1b6b5c4 <$FractSin(long)>
        221cdc:	e2800a02 	add	r0, r0, #8192	; 0x2000
        221ce0:	e1a01740 	mov	r1, r0, asr #14
        221ce4:	e1a00008 	mov	r0, r8
        221ce8:	eb66fcf5 	bl	1be10c4 <$FixedMultiply>
        221cec:	e1a08000 	mov	r8, r0
        221cf0:	e3a0203f 	mov	r2, #63	; 0x3f
        221cf4:	e2822bc9 	add	r2, r2, #205824	; 0x32400
        221cf8:	e3a0172d 	mov	r1, #11796480	; 0xb40000
        221cfc:	e5960000 	ldr	r0, [r6]
        221d00:	eb66fcf0 	bl	1be10c8 <$FixedMultiplyDivide>
        221d04:	e5860000 	str	r0, [r6]
        221d08:	e59b3018 	ldr	r3, [fp, #24]
        221d0c:	e5930000 	ldr	r0, [r3]
        221d10:	e1a00080 	mov	r0, r0, lsl #1
        221d14:	e59b1020 	ldr	r1, [fp, #32]
        221d18:	e5810000 	str	r0, [r1]
        221d1c:	e5b40004 	ldr	r0, [r4, #4]!
        221d20:	e3500801 	cmp	r0, #65536	; 0x10000
        221d24:	e5950000 	ldr	r0, [r5]
        221d28:	da00000f 	ble	221d6c <MakeEllipseTemplate__FP5FRectPlP6FPointN23N42+0x404>
        221d2c:	e0800007 	add	r0, r0, r7
        221d30:	e59b3010 	ldr	r3, [fp, #16]
        221d34:	e5830000 	str	r0, [r3]
        221d38:	e5950004 	ldr	r0, [r5, #4]
        221d3c:	e0400008 	sub	r0, r0, r8
        221d40:	e59b3010 	ldr	r3, [fp, #16]
        221d44:	e5a30004 	str	r0, [r3, #4]!
        221d48:	e5950000 	ldr	r0, [r5]
        221d4c:	e0400007 	sub	r0, r0, r7
        221d50:	e59b1014 	ldr	r1, [fp, #20]
        221d54:	e5810000 	str	r0, [r1]
        221d58:	e5b50004 	ldr	r0, [r5, #4]!
        221d5c:	e0800008 	add	r0, r0, r8
        221d60:	e59b1014 	ldr	r1, [fp, #20]
        221d64:	e5a10004 	str	r0, [r1, #4]!
        221d68:	ea000012 	b	221db8 <MakeEllipseTemplate__FP5FRectPlP6FPointN23N42+0x450>
        221d6c:	e0400008 	sub	r0, r0, r8
        221d70:	e59b3010 	ldr	r3, [fp, #16]
        221d74:	e5830000 	str	r0, [r3]
        221d78:	e5950004 	ldr	r0, [r5, #4]
        221d7c:	e0800007 	add	r0, r0, r7
        221d80:	e59b3010 	ldr	r3, [fp, #16]
        221d84:	e5a30004 	str	r0, [r3, #4]!
        221d88:	e5950000 	ldr	r0, [r5]
        221d8c:	e0800008 	add	r0, r0, r8
        221d90:	e59b1014 	ldr	r1, [fp, #20]
        221d94:	e5810000 	str	r0, [r1]
        221d98:	e5b50004 	ldr	r0, [r5, #4]!
        221d9c:	e0400007 	sub	r0, r0, r7
        221da0:	e59b1014 	ldr	r1, [fp, #20]
        221da4:	e5a10004 	str	r0, [r1, #4]!
        221da8:	e5961000 	ldr	r1, [r6]
        221dac:	e26108a6 	rsb	r0, r1, #10878976	; 0xa60000
        221db0:	e28004ff 	add	r0, r0, #-16777216	; 0xff000000
        221db4:	e5860000 	str	r0, [r6]
        221db8:	e3a00001 	mov	r0, #1	; 0x1
        221dbc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MergeClusters(long, long *, AngCluster *, long *, SideMap *)
 * Address: 00226388
 */
MergeClusters(long, long *, AngCluster *, long *, SideMap *) {
    /*
        226388:	e1a0c00d 	mov	ip, sp
        22638c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        226390:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        226394:	e24cb014 	sub	fp, ip, #20	; 0x14
        226398:	e24dd004 	sub	sp, sp, #4	; 0x4
        22639c:	e3a09000 	mov	r9, #0	; 0x0
        2263a0:	e59b0004 	ldr	r0, [fp, #4]
        2263a4:	e0801100 	add	r1, r0, r0, lsl #2
        2263a8:	e59b000c 	ldr	r0, [fp, #12]
        2263ac:	e0800301 	add	r0, r0, r1, lsl #6
        2263b0:	e1a08000 	mov	r8, r0
        2263b4:	e2804d05 	add	r4, r0, #320	; 0x140
        2263b8:	e5901000 	ldr	r1, [r0]
        2263bc:	e5940000 	ldr	r0, [r4]
        2263c0:	e0810000 	add	r0, r1, r0
        2263c4:	e0800fa0 	add	r0, r0, r0, lsr #31
        2263c8:	e1a000c0 	mov	r0, r0, asr #1
        2263cc:	e3a05000 	mov	r5, #0	; 0x0
        2263d0:	e5880000 	str	r0, [r8]
        2263d4:	e5940014 	ldr	r0, [r4, #20]
        2263d8:	e3500000 	cmp	r0, #0	; 0x0
        2263dc:	da00001f 	ble	226460 <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0xd8>
        2263e0:	e0840205 	add	r0, r4, r5, lsl #4
        2263e4:	e59010d0 	ldr	r1, [r0, #208]
        2263e8:	e0811181 	add	r1, r1, r1, lsl #3
        2263ec:	e0841101 	add	r1, r4, r1, lsl #2
        2263f0:	e2816018 	add	r6, r1, #24	; 0x18
        2263f4:	e3a07000 	mov	r7, #0	; 0x0
        2263f8:	e5b0a0cc 	ldr	sl, [r0, #204]!
        2263fc:	e5960000 	ldr	r0, [r6]
        226400:	e3500000 	cmp	r0, #0	; 0x0
        226404:	da000011 	ble	226450 <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0xc8>
        226408:	e1a01009 	mov	r1, r9
        22640c:	e28b300c 	add	r3, fp, #12	; 0xc
        226410:	e893000d 	ldmia	r3, {r0, r2, r3}
        226414:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        226418:	e28d2010 	add	r2, sp, #16	; 0x10
        22641c:	e59b3008 	ldr	r3, [fp, #8]
        226420:	e92d000c 	stmdb	sp!, {r2, r3}
        226424:	e0860107 	add	r0, r6, r7, lsl #2
        226428:	e5900004 	ldr	r0, [r0, #4]
        22642c:	e28b3004 	add	r3, fp, #4	; 0x4
        226430:	e1a0100a 	mov	r1, sl
        226434:	e5982000 	ldr	r2, [r8]
        226438:	eb650809 	bl	1b68464 <$Inserter__FlN21PlPUcT4P10AngClusterP6TTrendT1P7SideMap>
        22643c:	e28dd018 	add	sp, sp, #24	; 0x18
        226440:	e2877001 	add	r7, r7, #1	; 0x1
        226444:	e5960000 	ldr	r0, [r6]
        226448:	e1570000 	cmp	r7, r0
        22644c:	baffffed 	blt	226408 <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0x80>
        226450:	e2855001 	add	r5, r5, #1	; 0x1
        226454:	e5940014 	ldr	r0, [r4, #20]
        226458:	e1500005 	cmp	r0, r5
        22645c:	caffffdf 	bgt	2263e0 <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0x58>
        226460:	e59b0004 	ldr	r0, [fp, #4]
        226464:	e2800001 	add	r0, r0, #1	; 0x1
        226468:	e59b1008 	ldr	r1, [fp, #8]
        22646c:	e5911000 	ldr	r1, [r1]
        226470:	e2411001 	sub	r1, r1, #1	; 0x1
        226474:	e1510000 	cmp	r1, r0
        226478:	da000010 	ble	2264c0 <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0x138>
        22647c:	e0801100 	add	r1, r0, r0, lsl #2
        226480:	e59b200c 	ldr	r2, [fp, #12]
        226484:	e082e301 	add	lr, r2, r1, lsl #6
        226488:	e28e4d05 	add	r4, lr, #320	; 0x140
        22648c:	e3a0c01a 	mov	ip, #26	; 0x1a
        226490:	e8b4000e 	ldmia	r4!, {r1, r2, r3}
        226494:	e8ae000e 	stmia	lr!, {r1, r2, r3}
        226498:	e25cc001 	subs	ip, ip, #1	; 0x1
        22649c:	1afffffb 	bne	226490 <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0x108>
        2264a0:	e894000c 	ldmia	r4, {r2, r3}
        2264a4:	e88e000c 	stmia	lr, {r2, r3}
        2264a8:	e2800001 	add	r0, r0, #1	; 0x1
        2264ac:	e59b1008 	ldr	r1, [fp, #8]
        2264b0:	e5911000 	ldr	r1, [r1]
        2264b4:	e2411001 	sub	r1, r1, #1	; 0x1
        2264b8:	e1510000 	cmp	r1, r0
        2264bc:	caffffee 	bgt	22647c <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0xf4>
        2264c0:	e59b0008 	ldr	r0, [fp, #8]
        2264c4:	e5901000 	ldr	r1, [r0]
        2264c8:	e2411001 	sub	r1, r1, #1	; 0x1
        2264cc:	e5801000 	str	r1, [r0]
        2264d0:	e3a00000 	mov	r0, #0	; 0x0
        2264d4:	e59b1010 	ldr	r1, [fp, #16]
        2264d8:	e3510000 	cmp	r1, #0	; 0x0
        2264dc:	da00000a 	ble	22650c <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0x184>
        2264e0:	e0803100 	add	r3, r0, r0, lsl #2
        2264e4:	e59b2014 	ldr	r2, [fp, #20]
        2264e8:	e7921103 	ldr	r1, [r2, r3, lsl #2]
        2264ec:	e59bc004 	ldr	ip, [fp, #4]
        2264f0:	e151000c 	cmp	r1, ip
        2264f4:	c2411001 	subgt	r1, r1, #1	; 0x1
        2264f8:	c7821103 	strgt	r1, [r2, r3, lsl #2]
        2264fc:	e2800001 	add	r0, r0, #1	; 0x1
        226500:	e59b1010 	ldr	r1, [fp, #16]
        226504:	e1500001 	cmp	r0, r1
        226508:	bafffff4 	blt	2264e0 <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0x158>
        22650c:	e3a00000 	mov	r0, #0	; 0x0
        226510:	e59b1008 	ldr	r1, [fp, #8]
        226514:	e5911000 	ldr	r1, [r1]
        226518:	e3510000 	cmp	r1, #0	; 0x0
        22651c:	da000017 	ble	226580 <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0x1f8>
        226520:	e0803100 	add	r3, r0, r0, lsl #2
        226524:	e59b100c 	ldr	r1, [fp, #12]
        226528:	e0812303 	add	r2, r1, r3, lsl #6
        22652c:	e5921004 	ldr	r1, [r2, #4]
        226530:	e3710001 	cmn	r1, #1	; 0x1
        226534:	0a000003 	beq	226548 <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0x1c0>
        226538:	e59bc004 	ldr	ip, [fp, #4]
        22653c:	e151000c 	cmp	r1, ip
        226540:	c2411001 	subgt	r1, r1, #1	; 0x1
        226544:	c5a21004 	strgt	r1, [r2, #4]!
        226548:	e59b100c 	ldr	r1, [fp, #12]
        22654c:	e0812303 	add	r2, r1, r3, lsl #6
        226550:	e5921008 	ldr	r1, [r2, #8]
        226554:	e3710001 	cmn	r1, #1	; 0x1
        226558:	0a000003 	beq	22656c <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0x1e4>
        22655c:	e59b3004 	ldr	r3, [fp, #4]
        226560:	e1510003 	cmp	r1, r3
        226564:	c2411001 	subgt	r1, r1, #1	; 0x1
        226568:	c5a21008 	strgt	r1, [r2, #8]!
        22656c:	e2800001 	add	r0, r0, #1	; 0x1
        226570:	e59b1008 	ldr	r1, [fp, #8]
        226574:	e5911000 	ldr	r1, [r1]
        226578:	e1500001 	cmp	r0, r1
        22657c:	baffffe7 	blt	226520 <MergeClusters(long, long *, AngCluster *, long *, SideMap *)+0x198>
        226580:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MarkStrokes(TUnit *, char *, long)
 * Address: 0022e454
 */
MarkStrokes(TUnit *, char *, long) {
    /*
        22e454:	e1a0c00d 	mov	ip, sp
        22e458:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        22e45c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22e460:	e1a05000 	mov	r5, r0
        22e464:	e1a04001 	mov	r4, r1
        22e468:	e1a06002 	mov	r6, r2
        22e46c:	e590002a 	ldr	r0, [r0, #42]
        22e470:	e1a00820 	mov	r0, r0, lsr #16
        22e474:	e595102c 	ldr	r1, [r5, #44]
        22e478:	e1a01821 	mov	r1, r1, lsr #16
        22e47c:	e0412000 	sub	r2, r1, r0
        22e480:	e2822001 	add	r2, r2, #1	; 0x1
        22e484:	e3320001 	teq	r2, #1	; 0x1
        22e488:	1a000004 	bne	22e4a0 <MarkStrokes(TUnit *, char *, long)+0x4c>
        22e48c:	e0400006 	sub	r0, r0, r6
        22e490:	e7d41000 	ldrb	r1, [r4, r0]
        22e494:	e2811001 	add	r1, r1, #1	; 0x1
        22e498:	e7c41000 	strb	r1, [r4, r0]
        22e49c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        22e4a0:	e5953028 	ldr	r3, [r5, #40]
        22e4a4:	e1a02802 	mov	r2, r2, lsl #16
        22e4a8:	e1a02822 	mov	r2, r2, lsr #16
        22e4ac:	e1320823 	teq	r2, r3, lsr #16
        22e4b0:	1a000009 	bne	22e4dc <MarkStrokes(TUnit *, char *, long)+0x88>
        22e4b4:	e1500001 	cmp	r0, r1
        22e4b8:	c91ba9f0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        22e4bc:	e0402006 	sub	r2, r0, r6
        22e4c0:	e7d43002 	ldrb	r3, [r4, r2]
        22e4c4:	e2833001 	add	r3, r3, #1	; 0x1
        22e4c8:	e7c43002 	strb	r3, [r4, r2]
        22e4cc:	e2800001 	add	r0, r0, #1	; 0x1
        22e4d0:	e1500001 	cmp	r0, r1
        22e4d4:	dafffff8 	ble	22e4bc <MarkStrokes(TUnit *, char *, long)+0x68>
        22e4d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        22e4dc:	e1a00005 	mov	r0, r5
        22e4e0:	e5951000 	ldr	r1, [r5]
        22e4e4:	e1a0e00f 	mov	lr, pc
        22e4e8:	e281f01c 	add	pc, r1, #28	; 0x1c
        22e4ec:	e1a08000 	mov	r8, r0
        22e4f0:	e3a07000 	mov	r7, #0	; 0x0
        22e4f4:	e3500000 	cmp	r0, #0	; 0x0
        22e4f8:	d91ba9f0 	ldmledb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        22e4fc:	e1a01007 	mov	r1, r7
        22e500:	e1a00005 	mov	r0, r5
        22e504:	e5952000 	ldr	r2, [r5]
        22e508:	e1a0e00f 	mov	lr, pc
        22e50c:	e282f058 	add	pc, r2, #88	; 0x58
        22e510:	e1a02006 	mov	r2, r6
        22e514:	e1a01004 	mov	r1, r4
        22e518:	eb64cae5 	bl	1b610b4 <$MarkStrokes(TUnit *, char *, long)>
        22e51c:	e2877001 	add	r7, r7, #1	; 0x1
        22e520:	e1570008 	cmp	r7, r8
        22e524:	bafffff4 	blt	22e4fc <MarkStrokes(TUnit *, char *, long)+0xa8>
        22e528:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MaybeUnicodeStr
 * Address: 002579c0
 */
void globals::MaybeUnicodeStr() {
    /*
        2579c0:	e1b02000 	movs	r2, r0
        2579c4:	e3a00000 	mov	r0, #0	; 0x0
        2579c8:	01a0f00e 	moveq	pc, lr
        2579cc:	e3a01000 	mov	r1, #0	; 0x0
        2579d0:	e4d23001 	ldrb	r3, [r2], #1
        2579d4:	e3330000 	teq	r3, #0	; 0x0
        2579d8:	11a0f00e 	movne	pc, lr
        2579dc:	e4d23001 	ldrb	r3, [r2], #1
        2579e0:	e3330000 	teq	r3, #0	; 0x0
        2579e4:	0a000002 	beq	2579f4 <MaybeUnicodeStr+0x34>
        2579e8:	e2811001 	add	r1, r1, #1	; 0x1
        2579ec:	e3310005 	teq	r1, #5	; 0x5
        2579f0:	1a000001 	bne	2579fc <MaybeUnicodeStr+0x3c>
        2579f4:	e3a00001 	mov	r0, #1	; 0x1
        2579f8:	e1a0f00e 	mov	pc, lr
        2579fc:	e4d23001 	ldrb	r3, [r2], #1
        257a00:	e3330000 	teq	r3, #0	; 0x0
        257a04:	0afffff4 	beq	2579dc <MaybeUnicodeStr+0x1c>
        257a08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MeasureOnce(unsigned short *, long, StyleRecord *)
 * Address: 00261c40
 */
MeasureOnce(unsigned short *, long, StyleRecord *) {
    /*
        261c40:	e1a0c00d 	mov	ip, sp
        261c44:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        261c48:	e24cb004 	sub	fp, ip, #4	; 0x4
        261c4c:	e24dd024 	sub	sp, sp, #36	; 0x24
        261c50:	e28d101c 	add	r1, sp, #28	; 0x1c
        261c54:	e59f0050 	ldr	r0, [pc, #50]	; 261cac <MeasureOnce(unsigned short *, long, StyleRecord *)+0x6c>
        261c58:	e8901008 	ldmia	r0, {r3, ip}
        261c5c:	e8811008 	stmia	r1, {r3, ip}
        261c60:	e1a0300d 	mov	r3, sp
        261c64:	e3a02000 	mov	r2, #0	; 0x0
        261c68:	e92d000c 	stmdb	sp!, {r2, r3}
        261c6c:	e24dd008 	sub	sp, sp, #8	; 0x8
        261c70:	e28d102c 	add	r1, sp, #44	; 0x2c
        261c74:	e8915000 	ldmia	r1, {ip, lr}
        261c78:	e88d5000 	stmia	sp, {ip, lr}
        261c7c:	e24b2010 	sub	r2, fp, #16	; 0x10
        261c80:	e3a03000 	mov	r3, #0	; 0x0
        261c84:	e24b1018 	sub	r1, fp, #24	; 0x18
        261c88:	e8910003 	ldmia	r1, {r0, r1}
        261c8c:	eb63bf0a 	bl	1b518bc <$MeasureTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        261c90:	e28dd010 	add	sp, sp, #16	; 0x10
        261c94:	e59d0014 	ldr	r0, [sp, #20]
        261c98:	e2800902 	add	r0, r0, #32768	; 0x8000
        261c9c:	e1a00840 	mov	r0, r0, asr #16
        261ca0:	e1a00800 	mov	r0, r0, lsl #16
        261ca4:	e1a00840 	mov	r0, r0, asr #16
        261ca8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        261cac:	0037ac38 	eoreqs	sl, r7, r8, lsr ip
    */
}

/**
 * Symbol: MeasureOnceFont(unsigned short *, long, RefVar const &)
 * Address: 00261cb0
 */
MeasureOnceFont(unsigned short *, long, RefVar const &) {
    /*
        261cb0:	e1a0c00d 	mov	ip, sp
        261cb4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        261cb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        261cbc:	e1a06000 	mov	r6, r0
        261cc0:	e1a05001 	mov	r5, r1
        261cc4:	e1a04002 	mov	r4, r2
        261cc8:	e24dd020 	sub	sp, sp, #32	; 0x20
        261ccc:	e3a00002 	mov	r0, #2	; 0x2
        261cd0:	eb65811d 	bl	1bc214c <$AllocateRefHandle(long)>
        261cd4:	e58d0000 	str	r0, [sp]
        261cd8:	e3a00000 	mov	r0, #0	; 0x0
        261cdc:	e59d1000 	ldr	r1, [sp]
        261ce0:	e5a10004 	str	r0, [r1, #4]!
        261ce4:	e58d001c 	str	r0, [sp, #28]
        261ce8:	e1a0700d 	mov	r7, sp
        261cec:	e1a0100d 	mov	r1, sp
        261cf0:	e1a00004 	mov	r0, r4
        261cf4:	eb659dfa 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        261cf8:	e1a02007 	mov	r2, r7
        261cfc:	e1a01005 	mov	r1, r5
        261d00:	e1a00006 	mov	r0, r6
        261d04:	eb60e837 	bl	1a9bde8 <$MeasureOnce(unsigned short *, long, StyleRecord *)>
        261d08:	e1a04000 	mov	r4, r0
        261d0c:	e59d001c 	ldr	r0, [sp, #28]
        261d10:	e3300000 	teq	r0, #0	; 0x0
        261d14:	159d001c 	ldrne	r0, [sp, #28]
        261d18:	1b63ae6f 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        261d1c:	e59d0000 	ldr	r0, [sp]
        261d20:	eb658525 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        261d24:	e1a00004 	mov	r0, r4
        261d28:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MinMax_noninline__FlN21
 * Address: 002725d4
 */
void globals::MinMax_noninline() {
    /*
        2725d4:	e1500001 	cmp	r0, r1
        2725d8:	d1a00001 	movle	r0, r1
        2725dc:	e1500002 	cmp	r0, r2
        2725e0:	a1a00002 	movge	r0, r2
        2725e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MSQError__FUsP6_RPR_PT2
 * Address: 002833c8
 */
void globals::MSQError() {
    /*
        2833c8:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        2833cc:	e1a04800 	mov	r4, r0, lsl #16
        2833d0:	e1a04824 	mov	r4, r4, lsr #16
        2833d4:	e3a03000 	mov	r3, #0	; 0x0
        2833d8:	e3a00000 	mov	r0, #0	; 0x0
        2833dc:	ea00000c 	b	283414 <MSQError__FUsP6_RPR_PT2+0x4c>
        2833e0:	e081e200 	add	lr, r1, r0, lsl #4
        2833e4:	e59e5000 	ldr	r5, [lr]
        2833e8:	e082c200 	add	ip, r2, r0, lsl #4
        2833ec:	e59c6000 	ldr	r6, [ip]
        2833f0:	e0456006 	sub	r6, r5, r6
        2833f4:	e0233696 	mla	r3, r6, r6, r3
        2833f8:	e59ee004 	ldr	lr, [lr, #4]
        2833fc:	e59cc004 	ldr	ip, [ip, #4]
        283400:	e04ee00c 	sub	lr, lr, ip
        283404:	e0233e9e 	mla	r3, lr, lr, r3
        283408:	e2800001 	add	r0, r0, #1	; 0x1
        28340c:	e1a00800 	mov	r0, r0, lsl #16
        283410:	e1a00820 	mov	r0, r0, lsr #16
        283414:	e1500004 	cmp	r0, r4
        283418:	bafffff0 	blt	2833e0 <MSQError__FUsP6_RPR_PT2+0x18>
        28341c:	e1a00003 	mov	r0, r3
        283420:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: midL2Chunks(tag_CHUNK *, int)
 * Address: 002a7dd0
 */
midL2Chunks(tag_CHUNK *, int) {
    /*
        2a7dd0:	e92d4010 	stmdb	sp!, {r4, lr}
        2a7dd4:	e3a03000 	mov	r3, #0	; 0x0
        2a7dd8:	e3a02000 	mov	r2, #0	; 0x0
        2a7ddc:	e3a0e000 	mov	lr, #0	; 0x0
        2a7de0:	e3510000 	cmp	r1, #0	; 0x0
        2a7de4:	da00000a 	ble	2a7e14 <midL2Chunks(tag_CHUNK *, int)+0x44>
        2a7de8:	e08e410e 	add	r4, lr, lr, lsl #2
        2a7dec:	e084428e 	add	r4, r4, lr, lsl #5
        2a7df0:	e080c104 	add	ip, r0, r4, lsl #2
        2a7df4:	e59c4008 	ldr	r4, [ip, #8]
        2a7df8:	e3340003 	teq	r4, #3	; 0x3
        2a7dfc:	159cc05c 	ldrne	ip, [ip, #92]
        2a7e00:	108c2002 	addne	r2, ip, r2
        2a7e04:	12833001 	addne	r3, r3, #1	; 0x1
        2a7e08:	e28ee001 	add	lr, lr, #1	; 0x1
        2a7e0c:	e15e0001 	cmp	lr, r1
        2a7e10:	bafffff4 	blt	2a7de8 <midL2Chunks(tag_CHUNK *, int)+0x18>
        2a7e14:	e1a01002 	mov	r1, r2
        2a7e18:	e1a00003 	mov	r0, r3
        2a7e1c:	e8bd4010 	ldmia	sp!, {r4, lr}
        2a7e20:	ea642ac6 	b	1bb2940 <$__rt_sdiv>
    */
}

/**
 * Symbol: make_different_breaks(low_type *)
 * Address: 002b26b8
 */
make_different_breaks(low_type *) {
    /*
        2b26b8:	e1a0c00d 	mov	ip, sp
        2b26bc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2b26c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2b26c4:	e1a04000 	mov	r4, r0
        2b26c8:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        2b26cc:	e5900040 	ldr	r0, [r0, #64]
        2b26d0:	e58d0028 	str	r0, [sp, #40]
        2b26d4:	e5943034 	ldr	r3, [r4, #52]
        2b26d8:	e58d3024 	str	r3, [sp, #36]
        2b26dc:	e3a01000 	mov	r1, #0	; 0x0
        2b26e0:	e5948038 	ldr	r8, [r4, #56]
        2b26e4:	e3a00000 	mov	r0, #0	; 0x0
        2b26e8:	e58d0008 	str	r0, [sp, #8]
        2b26ec:	e58d100c 	str	r1, [sp, #12]
        2b26f0:	e58d0004 	str	r0, [sp, #4]
        2b26f4:	e58d0000 	str	r0, [sp]
        2b26f8:	e5940070 	ldr	r0, [r4, #112]
        2b26fc:	e1b00840 	movs	r0, r0, asr #16
        2b2700:	159d0028 	ldrne	r0, [sp, #40]
        2b2704:	15b0500c 	ldrne	r5, [r0, #12]!
        2b2708:	13350000 	teqne	r5, #0	; 0x0
        2b270c:	0a0001b5 	beq	2b2de8 <make_different_breaks(low_type *)+0x730>
        2b2710:	e5d50001 	ldrb	r0, [r5, #1]
        2b2714:	e3300012 	teq	r0, #18	; 0x12
        2b2718:	1a000164 	bne	2b2cb0 <make_different_breaks(low_type *)+0x5f8>
        2b271c:	e3a09000 	mov	r9, #0	; 0x0
        2b2720:	e3a000ff 	mov	r0, #255	; 0xff
        2b2724:	e5c50009 	strb	r0, [r5, #9]
        2b2728:	e3a0007f 	mov	r0, #127	; 0x7f
        2b272c:	e5c50008 	strb	r0, [r5, #8]
        2b2730:	e5957010 	ldr	r7, [r5, #16]
        2b2734:	ea00000f 	b	2b2778 <make_different_breaks(low_type *)+0xc0>
        2b2738:	e331000d 	teq	r1, #13	; 0xd
        2b273c:	05d70003 	ldreqb	r0, [r7, #3]
        2b2740:	02001002 	andeq	r1, r0, #2	; 0x2
        2b2744:	03310000 	teqeq	r1, #0	; 0x0
        2b2748:	02000008 	andeq	r0, r0, #8	; 0x8
        2b274c:	03300000 	teqeq	r0, #0	; 0x0
        2b2750:	1a000007 	bne	2b2774 <make_different_breaks(low_type *)+0xbc>
        2b2754:	e597001c 	ldr	r0, [r7, #28]
        2b2758:	e1a00840 	mov	r0, r0, asr #16
        2b275c:	e3700002 	cmn	r0, #2	; 0x2
        2b2760:	1597001e 	ldrne	r0, [r7, #30]
        2b2764:	11a00840 	movne	r0, r0, asr #16
        2b2768:	13700002 	cmnne	r0, #2	; 0x2
        2b276c:	13a09001 	movne	r9, #1	; 0x1
        2b2770:	11a0a007 	movne	sl, r7
        2b2774:	e5977010 	ldr	r7, [r7, #16]
        2b2778:	e5d71001 	ldrb	r1, [r7, #1]
        2b277c:	e331000d 	teq	r1, #13	; 0xd
        2b2780:	13310010 	teqne	r1, #16	; 0x10
        2b2784:	0affffeb 	beq	2b2738 <make_different_breaks(low_type *)+0x80>
        2b2788:	e5d70001 	ldrb	r0, [r7, #1]
        2b278c:	e3300000 	teq	r0, #0	; 0x0
        2b2790:	1595200c 	ldrne	r2, [r5, #12]
        2b2794:	11a06002 	movne	r6, r2
        2b2798:	1a000015 	bne	2b27f4 <make_different_breaks(low_type *)+0x13c>
        2b279c:	ea000143 	b	2b2cb0 <make_different_breaks(low_type *)+0x5f8>
        2b27a0:	e330000d 	teq	r0, #13	; 0xd
        2b27a4:	1a00000d 	bne	2b27e0 <make_different_breaks(low_type *)+0x128>
        2b27a8:	e5d60003 	ldrb	r0, [r6, #3]
        2b27ac:	e3100002 	tst	r0, #2	; 0x2
        2b27b0:	02000008 	andeq	r0, r0, #8	; 0x8
        2b27b4:	03300000 	teqeq	r0, #0	; 0x0
        2b27b8:	1a00000c 	bne	2b27f0 <make_different_breaks(low_type *)+0x138>
        2b27bc:	e596001c 	ldr	r0, [r6, #28]
        2b27c0:	e1a00840 	mov	r0, r0, asr #16
        2b27c4:	e3700002 	cmn	r0, #2	; 0x2
        2b27c8:	1596001e 	ldrne	r0, [r6, #30]
        2b27cc:	11a00840 	movne	r0, r0, asr #16
        2b27d0:	13700002 	cmnne	r0, #2	; 0x2
        2b27d4:	13a09001 	movne	r9, #1	; 0x1
        2b27d8:	11a0a006 	movne	sl, r6
        2b27dc:	ea000003 	b	2b27f0 <make_different_breaks(low_type *)+0x138>
        2b27e0:	e3300010 	teq	r0, #16	; 0x10
        2b27e4:	0596300c 	ldreq	r3, [r6, #12]
        2b27e8:	03330000 	teqeq	r3, #0	; 0x0
        2b27ec:	0a000006 	beq	2b280c <make_different_breaks(low_type *)+0x154>
        2b27f0:	e596600c 	ldr	r6, [r6, #12]
        2b27f4:	e3360000 	teq	r6, #0	; 0x0
        2b27f8:	0a000005 	beq	2b2814 <make_different_breaks(low_type *)+0x15c>
        2b27fc:	e5d60001 	ldrb	r0, [r6, #1]
        2b2800:	e330000d 	teq	r0, #13	; 0xd
        2b2804:	13300010 	teqne	r0, #16	; 0x10
        2b2808:	0affffe4 	beq	2b27a0 <make_different_breaks(low_type *)+0xe8>
        2b280c:	e3360000 	teq	r6, #0	; 0x0
        2b2810:	1a000001 	bne	2b281c <make_different_breaks(low_type *)+0x164>
        2b2814:	e1a05002 	mov	r5, r2
        2b2818:	ea000125 	b	2b2cb4 <make_different_breaks(low_type *)+0x5fc>
        2b281c:	e5d62001 	ldrb	r2, [r6, #1]
        2b2820:	e3320010 	teq	r2, #16	; 0x10
        2b2824:	0596200c 	ldreq	r2, [r6, #12]
        2b2828:	03320000 	teqeq	r2, #0	; 0x0
        2b282c:	1a000036 	bne	2b290c <make_different_breaks(low_type *)+0x254>
        2b2830:	e5d60002 	ldrb	r0, [r6, #2]
        2b2834:	e200000f 	and	r0, r0, #15	; 0xf
        2b2838:	e3500007 	cmp	r0, #7	; 0x7
        2b283c:	da00011e 	ble	2b2cbc <make_different_breaks(low_type *)+0x604>
        2b2840:	e5d70001 	ldrb	r0, [r7, #1]
        2b2844:	e3300012 	teq	r0, #18	; 0x12
        2b2848:	13310001 	teqne	r1, #1	; 0x1
        2b284c:	13310013 	teqne	r1, #19	; 0x13
        2b2850:	13310014 	teqne	r1, #20	; 0x14
        2b2854:	159d0028 	ldrne	r0, [sp, #40]
        2b2858:	11370000 	teqne	r7, r0
        2b285c:	05957004 	ldreq	r7, [r5, #4]
        2b2860:	01a07847 	moveq	r7, r7, asr #16
        2b2864:	15977006 	ldrne	r7, [r7, #6]
        2b2868:	11a07847 	movne	r7, r7, asr #16
        2b286c:	e1a01007 	mov	r1, r7
        2b2870:	e1a00008 	mov	r0, r8
        2b2874:	e3a02000 	mov	r2, #0	; 0x0
        2b2878:	eb61c666 	bl	1b24218 <$brk_left__FPsiT2>
        2b287c:	e2801001 	add	r1, r0, #1	; 0x1
        2b2880:	e1a02007 	mov	r2, r7
        2b2884:	e1a00008 	mov	r0, r8
        2b2888:	eb61ca8d 	bl	1b252c4 <$iYdown_range__FPsiT2>
        2b288c:	e240cc7f 	sub	ip, r0, #32512	; 0x7f00
        2b2890:	e33c00ff 	teq	ip, #255	; 0xff
        2b2894:	0a000108 	beq	2b2cbc <make_different_breaks(low_type *)+0x604>
        2b2898:	e5961004 	ldr	r1, [r6, #4]
        2b289c:	e1a01841 	mov	r1, r1, asr #16
        2b28a0:	e59d3024 	ldr	r3, [sp, #36]
        2b28a4:	e7932081 	ldr	r2, [r3, r1, lsl #1]
        2b28a8:	e1a02842 	mov	r2, r2, asr #16
        2b28ac:	e7933080 	ldr	r3, [r3, r0, lsl #1]
        2b28b0:	e1a03843 	mov	r3, r3, asr #16
        2b28b4:	e0426003 	sub	r6, r2, r3
        2b28b8:	e5942070 	ldr	r2, [r4, #112]
        2b28bc:	e1a02842 	mov	r2, r2, asr #16
        2b28c0:	e3520014 	cmp	r2, #20	; 0x14
        2b28c4:	d3a02014 	movle	r2, #20	; 0x14
        2b28c8:	e1560002 	cmp	r6, r2
        2b28cc:	aa0000fa 	bge	2b2cbc <make_different_breaks(low_type *)+0x604>
        2b28d0:	e7981081 	ldr	r1, [r8, r1, lsl #1]
        2b28d4:	e1a01841 	mov	r1, r1, asr #16
        2b28d8:	e7980080 	ldr	r0, [r8, r0, lsl #1]
        2b28dc:	e1a00840 	mov	r0, r0, asr #16
        2b28e0:	e1510000 	cmp	r1, r0
        2b28e4:	da0000f4 	ble	2b2cbc <make_different_breaks(low_type *)+0x604>
        2b28e8:	e0417000 	sub	r7, r1, r0
        2b28ec:	e2871001 	add	r1, r7, #1	; 0x1
        2b28f0:	e3a00003 	mov	r0, #3	; 0x3
        2b28f4:	eb640011 	bl	1bb2940 <$__rt_sdiv>
        2b28f8:	e0870000 	add	r0, r7, r0
        2b28fc:	e1500006 	cmp	r0, r6
        2b2900:	c3a00001 	movgt	r0, #1	; 0x1
        2b2904:	c5c50001 	strgtb	r0, [r5, #1]
        2b2908:	ea0000eb 	b	2b2cbc <make_different_breaks(low_type *)+0x604>
        2b290c:	e3390000 	teq	r9, #0	; 0x0
        2b2910:	01a01007 	moveq	r1, r7
        2b2914:	0a000001 	beq	2b2920 <make_different_breaks(low_type *)+0x268>
        2b2918:	ea000020 	b	2b29a0 <make_different_breaks(low_type *)+0x2e8>
        2b291c:	e5911010 	ldr	r1, [r1, #16]
        2b2920:	e3310000 	teq	r1, #0	; 0x0
        2b2924:	0a000019 	beq	2b2990 <make_different_breaks(low_type *)+0x2d8>
        2b2928:	e5d12001 	ldrb	r2, [r1, #1]
        2b292c:	e3320012 	teq	r2, #18	; 0x12
        2b2930:	13320001 	teqne	r2, #1	; 0x1
        2b2934:	13320013 	teqne	r2, #19	; 0x13
        2b2938:	13320014 	teqne	r2, #20	; 0x14
        2b293c:	1332000d 	teqne	r2, #13	; 0xd
        2b2940:	1afffff5 	bne	2b291c <make_different_breaks(low_type *)+0x264>
        2b2944:	e3310000 	teq	r1, #0	; 0x0
        2b2948:	15d13001 	ldrneb	r3, [r1, #1]
        2b294c:	13330012 	teqne	r3, #18	; 0x12
        2b2950:	13320001 	teqne	r2, #1	; 0x1
        2b2954:	13320013 	teqne	r2, #19	; 0x13
        2b2958:	13320014 	teqne	r2, #20	; 0x14
        2b295c:	0a00000b 	beq	2b2990 <make_different_breaks(low_type *)+0x2d8>
        2b2960:	e5d12003 	ldrb	r2, [r1, #3]
        2b2964:	e3120002 	tst	r2, #2	; 0x2
        2b2968:	02022008 	andeq	r2, r2, #8	; 0x8
        2b296c:	03320000 	teqeq	r2, #0	; 0x0
        2b2970:	1a000006 	bne	2b2990 <make_different_breaks(low_type *)+0x2d8>
        2b2974:	e591201c 	ldr	r2, [r1, #28]
        2b2978:	e1a02842 	mov	r2, r2, asr #16
        2b297c:	e3720002 	cmn	r2, #2	; 0x2
        2b2980:	1591201e 	ldrne	r2, [r1, #30]
        2b2984:	11a02842 	movne	r2, r2, asr #16
        2b2988:	13720002 	cmnne	r2, #2	; 0x2
        2b298c:	1a000001 	bne	2b2998 <make_different_breaks(low_type *)+0x2e0>
        2b2990:	e3a09000 	mov	r9, #0	; 0x0
        2b2994:	ea000001 	b	2b29a0 <make_different_breaks(low_type *)+0x2e8>
        2b2998:	e3a09001 	mov	r9, #1	; 0x1
        2b299c:	e1a0a001 	mov	sl, r1
        2b29a0:	e5971006 	ldr	r1, [r7, #6]
        2b29a4:	e1a01841 	mov	r1, r1, asr #16
        2b29a8:	e58d101c 	str	r1, [sp, #28]
        2b29ac:	e2411001 	sub	r1, r1, #1	; 0x1
        2b29b0:	e7982081 	ldr	r2, [r8, r1, lsl #1]
        2b29b4:	e1a02842 	mov	r2, r2, asr #16
        2b29b8:	e3720001 	cmn	r2, #1	; 0x1
        2b29bc:	1afffffa 	bne	2b29ac <make_different_breaks(low_type *)+0x2f4>
        2b29c0:	e2811001 	add	r1, r1, #1	; 0x1
        2b29c4:	e58d1020 	str	r1, [sp, #32]
        2b29c8:	e5961004 	ldr	r1, [r6, #4]
        2b29cc:	e1a01841 	mov	r1, r1, asr #16
        2b29d0:	e58d1018 	str	r1, [sp, #24]
        2b29d4:	e1a02001 	mov	r2, r1
        2b29d8:	e2822001 	add	r2, r2, #1	; 0x1
        2b29dc:	e7983082 	ldr	r3, [r8, r2, lsl #1]
        2b29e0:	e1a03843 	mov	r3, r3, asr #16
        2b29e4:	e3730001 	cmn	r3, #1	; 0x1
        2b29e8:	1afffffa 	bne	2b29d8 <make_different_breaks(low_type *)+0x320>
        2b29ec:	e242c001 	sub	ip, r2, #1	; 0x1
        2b29f0:	e58dc014 	str	ip, [sp, #20]
        2b29f4:	e5942000 	ldr	r2, [r4]
        2b29f8:	e5922090 	ldr	r2, [r2, #144]
        2b29fc:	e1a02822 	mov	r2, r2, lsr #16
        2b2a00:	e3120b01 	tst	r2, #1024	; 0x400
        2b2a04:	0a000028 	beq	2b2aac <make_different_breaks(low_type *)+0x3f4>
        2b2a08:	e330000b 	teq	r0, #11	; 0xb
        2b2a0c:	13300007 	teqne	r0, #7	; 0x7
        2b2a10:	1a000025 	bne	2b2aac <make_different_breaks(low_type *)+0x3f4>
        2b2a14:	e5d60002 	ldrb	r0, [r6, #2]
        2b2a18:	e200000f 	and	r0, r0, #15	; 0xf
        2b2a1c:	e3500007 	cmp	r0, #7	; 0x7
        2b2a20:	c596000c 	ldrgt	r0, [r6, #12]
        2b2a24:	ca000001 	bgt	2b2a30 <make_different_breaks(low_type *)+0x378>
        2b2a28:	ea00001f 	b	2b2aac <make_different_breaks(low_type *)+0x3f4>
        2b2a2c:	e590000c 	ldr	r0, [r0, #12]
        2b2a30:	e3300000 	teq	r0, #0	; 0x0
        2b2a34:	0a00001c 	beq	2b2aac <make_different_breaks(low_type *)+0x3f4>
        2b2a38:	e5d02001 	ldrb	r2, [r0, #1]
        2b2a3c:	e332000d 	teq	r2, #13	; 0xd
        2b2a40:	13320010 	teqne	r2, #16	; 0x10
        2b2a44:	0afffff8 	beq	2b2a2c <make_different_breaks(low_type *)+0x374>
        2b2a48:	e3300000 	teq	r0, #0	; 0x0
        2b2a4c:	15d03001 	ldrneb	r3, [r0, #1]
        2b2a50:	13330012 	teqne	r3, #18	; 0x12
        2b2a54:	13320001 	teqne	r2, #1	; 0x1
        2b2a58:	13320013 	teqne	r2, #19	; 0x13
        2b2a5c:	13320014 	teqne	r2, #20	; 0x14
        2b2a60:	15d02000 	ldrneb	r2, [r0]
        2b2a64:	13320020 	teqne	r2, #32	; 0x20
        2b2a68:	0a00000f 	beq	2b2aac <make_different_breaks(low_type *)+0x3f4>
        2b2a6c:	e5961006 	ldr	r1, [r6, #6]
        2b2a70:	e1a01841 	mov	r1, r1, asr #16
        2b2a74:	e3a03096 	mov	r3, #150	; 0x96
        2b2a78:	e2833c27 	add	r3, r3, #9984	; 0x2700
        2b2a7c:	ea000000 	b	2b2a84 <make_different_breaks(low_type *)+0x3cc>
        2b2a80:	e2811001 	add	r1, r1, #1	; 0x1
        2b2a84:	e7982081 	ldr	r2, [r8, r1, lsl #1]
        2b2a88:	e1a02842 	mov	r2, r2, asr #16
        2b2a8c:	e3720001 	cmn	r2, #1	; 0x1
        2b2a90:	0a000004 	beq	2b2aa8 <make_different_breaks(low_type *)+0x3f0>
        2b2a94:	e1520003 	cmp	r2, r3
        2b2a98:	da000002 	ble	2b2aa8 <make_different_breaks(low_type *)+0x3f0>
        2b2a9c:	e5902004 	ldr	r2, [r0, #4]
        2b2aa0:	e1510842 	cmp	r1, r2, asr #16
        2b2aa4:	dafffff5 	ble	2b2a80 <make_different_breaks(low_type *)+0x3c8>
        2b2aa8:	e2411001 	sub	r1, r1, #1	; 0x1
        2b2aac:	e59d3014 	ldr	r3, [sp, #20]
        2b2ab0:	e92d0008 	stmdb	sp!, {r3}
        2b2ab4:	e1a03001 	mov	r3, r1
        2b2ab8:	e1a00004 	mov	r0, r4
        2b2abc:	e59d1024 	ldr	r1, [sp, #36]
        2b2ac0:	e59d2020 	ldr	r2, [sp, #32]
        2b2ac4:	eb61b551 	bl	1b20010 <$GetDxBetweenStrokes__FP8low_typeiN32>
        2b2ac8:	e28dd004 	add	sp, sp, #4	; 0x4
        2b2acc:	e3390000 	teq	r9, #0	; 0x0
        2b2ad0:	e58d0010 	str	r0, [sp, #16]
        2b2ad4:	0a00002c 	beq	2b2b8c <make_different_breaks(low_type *)+0x4d4>
        2b2ad8:	e59a101c 	ldr	r1, [sl, #28]
        2b2adc:	e1a01841 	mov	r1, r1, asr #16
        2b2ae0:	e59d201c 	ldr	r2, [sp, #28]
        2b2ae4:	e1510002 	cmp	r1, r2
        2b2ae8:	ca000003 	bgt	2b2afc <make_different_breaks(low_type *)+0x444>
        2b2aec:	e59d3020 	ldr	r3, [sp, #32]
        2b2af0:	e1510003 	cmp	r1, r3
        2b2af4:	a3a00001 	movge	r0, #1	; 0x1
        2b2af8:	aa000000 	bge	2b2b00 <make_different_breaks(low_type *)+0x448>
        2b2afc:	e3a00000 	mov	r0, #0	; 0x0
        2b2b00:	e59dc014 	ldr	ip, [sp, #20]
        2b2b04:	e151000c 	cmp	r1, ip
        2b2b08:	ca000003 	bgt	2b2b1c <make_different_breaks(low_type *)+0x464>
        2b2b0c:	e59dc018 	ldr	ip, [sp, #24]
        2b2b10:	e151000c 	cmp	r1, ip
        2b2b14:	a3a01001 	movge	r1, #1	; 0x1
        2b2b18:	aa000000 	bge	2b2b20 <make_different_breaks(low_type *)+0x468>
        2b2b1c:	e3a01000 	mov	r1, #0	; 0x0
        2b2b20:	e59a201e 	ldr	r2, [sl, #30]
        2b2b24:	e1a02842 	mov	r2, r2, asr #16
        2b2b28:	e59d301c 	ldr	r3, [sp, #28]
        2b2b2c:	e1520003 	cmp	r2, r3
        2b2b30:	ca000003 	bgt	2b2b44 <make_different_breaks(low_type *)+0x48c>
        2b2b34:	e59d3020 	ldr	r3, [sp, #32]
        2b2b38:	e1520003 	cmp	r2, r3
        2b2b3c:	a3a03001 	movge	r3, #1	; 0x1
        2b2b40:	aa000000 	bge	2b2b48 <make_different_breaks(low_type *)+0x490>
        2b2b44:	e3a03000 	mov	r3, #0	; 0x0
        2b2b48:	e59dc014 	ldr	ip, [sp, #20]
        2b2b4c:	e152000c 	cmp	r2, ip
        2b2b50:	ca000003 	bgt	2b2b64 <make_different_breaks(low_type *)+0x4ac>
        2b2b54:	e59dc018 	ldr	ip, [sp, #24]
        2b2b58:	e152000c 	cmp	r2, ip
        2b2b5c:	a3a02001 	movge	r2, #1	; 0x1
        2b2b60:	aa000000 	bge	2b2b68 <make_different_breaks(low_type *)+0x4b0>
        2b2b64:	e3a02000 	mov	r2, #0	; 0x0
        2b2b68:	e3300000 	teq	r0, #0	; 0x0
        2b2b6c:	13320000 	teqne	r2, #0	; 0x0
        2b2b70:	1a000002 	bne	2b2b80 <make_different_breaks(low_type *)+0x4c8>
        2b2b74:	e3310000 	teq	r1, #0	; 0x0
        2b2b78:	13330000 	teqne	r3, #0	; 0x0
        2b2b7c:	0a000002 	beq	2b2b8c <make_different_breaks(low_type *)+0x4d4>
        2b2b80:	e3a00001 	mov	r0, #1	; 0x1
        2b2b84:	e5c50001 	strb	r0, [r5, #1]
        2b2b88:	ea000048 	b	2b2cb0 <make_different_breaks(low_type *)+0x5f8>
        2b2b8c:	e59d0020 	ldr	r0, [sp, #32]
        2b2b90:	e3300001 	teq	r0, #1	; 0x1
        2b2b94:	1a000011 	bne	2b2be0 <make_different_breaks(low_type *)+0x528>
        2b2b98:	e59d0020 	ldr	r0, [sp, #32]
        2b2b9c:	e59d101c 	ldr	r1, [sp, #28]
        2b2ba0:	e59d2018 	ldr	r2, [sp, #24]
        2b2ba4:	e59d3014 	ldr	r3, [sp, #20]
        2b2ba8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2b2bac:	e1a03006 	mov	r3, r6
        2b2bb0:	e1a02007 	mov	r2, r7
        2b2bb4:	e1a01005 	mov	r1, r5
        2b2bb8:	e1a00004 	mov	r0, r4
        2b2bbc:	eb61c174 	bl	1b23194 <$SecondHigherFirst__FP8low_typeP9SPEC_TYPEN22iN35>
        2b2bc0:	e28dd010 	add	sp, sp, #16	; 0x10
        2b2bc4:	e3300000 	teq	r0, #0	; 0x0
        2b2bc8:	0a000004 	beq	2b2be0 <make_different_breaks(low_type *)+0x528>
        2b2bcc:	e3a00013 	mov	r0, #19	; 0x13
        2b2bd0:	e5c50001 	strb	r0, [r5, #1]
        2b2bd4:	e3a00010 	mov	r0, #16	; 0x10
        2b2bd8:	e5c50003 	strb	r0, [r5, #3]
        2b2bdc:	ea000033 	b	2b2cb0 <make_different_breaks(low_type *)+0x5f8>
        2b2be0:	e5940070 	ldr	r0, [r4, #112]
        2b2be4:	e1a00840 	mov	r0, r0, asr #16
        2b2be8:	e0800100 	add	r0, r0, r0, lsl #2
        2b2bec:	e2801006 	add	r1, r0, #6	; 0x6
        2b2bf0:	e3a0000c 	mov	r0, #12	; 0xc
        2b2bf4:	eb63ff51 	bl	1bb2940 <$__rt_sdiv>
        2b2bf8:	e59d1010 	ldr	r1, [sp, #16]
        2b2bfc:	e1500001 	cmp	r0, r1
        2b2c00:	b3a00014 	movlt	r0, #20	; 0x14
        2b2c04:	b5c50001 	strltb	r0, [r5, #1]
        2b2c08:	e5940000 	ldr	r0, [r4]
        2b2c0c:	e5900090 	ldr	r0, [r0, #144]
        2b2c10:	e1a00820 	mov	r0, r0, lsr #16
        2b2c14:	e3100b01 	tst	r0, #1024	; 0x400
        2b2c18:	0a00000c 	beq	2b2c50 <make_different_breaks(low_type *)+0x598>
        2b2c1c:	e5940070 	ldr	r0, [r4, #112]
        2b2c20:	e1a00840 	mov	r0, r0, asr #16
        2b2c24:	e2801003 	add	r1, r0, #3	; 0x3
        2b2c28:	e3a00007 	mov	r0, #7	; 0x7
        2b2c2c:	eb63ff43 	bl	1bb2940 <$__rt_sdiv>
        2b2c30:	e59d1010 	ldr	r1, [sp, #16]
        2b2c34:	e1500001 	cmp	r0, r1
        2b2c38:	ba000004 	blt	2b2c50 <make_different_breaks(low_type *)+0x598>
        2b2c3c:	e3a00001 	mov	r0, #1	; 0x1
        2b2c40:	e5c50001 	strb	r0, [r5, #1]
        2b2c44:	e3a07004 	mov	r7, #4	; 0x4
        2b2c48:	e5c57003 	strb	r7, [r5, #3]
        2b2c4c:	ea000017 	b	2b2cb0 <make_different_breaks(low_type *)+0x5f8>
        2b2c50:	e5d50001 	ldrb	r0, [r5, #1]
        2b2c54:	e3300012 	teq	r0, #18	; 0x12
        2b2c58:	13300014 	teqne	r0, #20	; 0x14
        2b2c5c:	1a000013 	bne	2b2cb0 <make_different_breaks(low_type *)+0x5f8>
        2b2c60:	e59d1010 	ldr	r1, [sp, #16]
        2b2c64:	e5c51009 	strb	r1, [r5, #9]
        2b2c68:	e1a01441 	mov	r1, r1, asr #8
        2b2c6c:	e5c51008 	strb	r1, [r5, #8]
        2b2c70:	e28d200c 	add	r2, sp, #12	; 0xc
        2b2c74:	e8920006 	ldmia	r2, {r1, r2}
        2b2c78:	e0811002 	add	r1, r1, r2
        2b2c7c:	e3300014 	teq	r0, #20	; 0x14
        2b2c80:	e58d100c 	str	r1, [sp, #12]
        2b2c84:	1a000006 	bne	2b2ca4 <make_different_breaks(low_type *)+0x5ec>
        2b2c88:	e59d0004 	ldr	r0, [sp, #4]
        2b2c8c:	e59d1010 	ldr	r1, [sp, #16]
        2b2c90:	e0800001 	add	r0, r0, r1
        2b2c94:	e58d0004 	str	r0, [sp, #4]
        2b2c98:	e59d0000 	ldr	r0, [sp]
        2b2c9c:	e2800001 	add	r0, r0, #1	; 0x1
        2b2ca0:	e58d0000 	str	r0, [sp]
        2b2ca4:	e59d0008 	ldr	r0, [sp, #8]
        2b2ca8:	e2800001 	add	r0, r0, #1	; 0x1
        2b2cac:	e58d0008 	str	r0, [sp, #8]
        2b2cb0:	e595500c 	ldr	r5, [r5, #12]
        2b2cb4:	e3350000 	teq	r5, #0	; 0x0
        2b2cb8:	1afffe94 	bne	2b2710 <make_different_breaks(low_type *)+0x58>
        2b2cbc:	e59d0008 	ldr	r0, [sp, #8]
        2b2cc0:	e3500001 	cmp	r0, #1	; 0x1
        2b2cc4:	ba000047 	blt	2b2de8 <make_different_breaks(low_type *)+0x730>
        2b2cc8:	e59d0028 	ldr	r0, [sp, #40]
        2b2ccc:	e5b0500c 	ldr	r5, [r0, #12]!
        2b2cd0:	e3350000 	teq	r5, #0	; 0x0
        2b2cd4:	0a000043 	beq	2b2de8 <make_different_breaks(low_type *)+0x730>
        2b2cd8:	e59d0008 	ldr	r0, [sp, #8]
        2b2cdc:	e2406001 	sub	r6, r0, #1	; 0x1
        2b2ce0:	e3a07004 	mov	r7, #4	; 0x4
        2b2ce4:	e3a09902 	mov	r9, #32768	; 0x8000
        2b2ce8:	e2499001 	sub	r9, r9, #1	; 0x1
        2b2cec:	e59d0000 	ldr	r0, [sp]
        2b2cf0:	e2408001 	sub	r8, r0, #1	; 0x1
        2b2cf4:	e5d50001 	ldrb	r0, [r5, #1]
        2b2cf8:	e3300012 	teq	r0, #18	; 0x12
        2b2cfc:	1a000010 	bne	2b2d44 <make_different_breaks(low_type *)+0x68c>
        2b2d00:	e595a008 	ldr	sl, [r5, #8]
        2b2d04:	e1a0a84a 	mov	sl, sl, asr #16
        2b2d08:	e13a0009 	teq	sl, r9
        2b2d0c:	0a000032 	beq	2b2ddc <make_different_breaks(low_type *)+0x724>
        2b2d10:	e59d0008 	ldr	r0, [sp, #8]
        2b2d14:	e3500001 	cmp	r0, #1	; 0x1
        2b2d18:	da00002f 	ble	2b2ddc <make_different_breaks(low_type *)+0x724>
        2b2d1c:	e59d100c 	ldr	r1, [sp, #12]
        2b2d20:	e041100a 	sub	r1, r1, sl
        2b2d24:	e1a00006 	mov	r0, r6
        2b2d28:	eb63ff04 	bl	1bb2940 <$__rt_sdiv>
        2b2d2c:	e2800002 	add	r0, r0, #2	; 0x2
        2b2d30:	e15a0140 	cmp	sl, r0, asr #2
        2b2d34:	d3a01001 	movle	r1, #1	; 0x1
        2b2d38:	d5c51001 	strleb	r1, [r5, #1]
        2b2d3c:	d5c57003 	strleb	r7, [r5, #3]
        2b2d40:	ea000025 	b	2b2ddc <make_different_breaks(low_type *)+0x724>
        2b2d44:	e3300014 	teq	r0, #20	; 0x14
        2b2d48:	1a000023 	bne	2b2ddc <make_different_breaks(low_type *)+0x724>
        2b2d4c:	e595a008 	ldr	sl, [r5, #8]
        2b2d50:	e1a0a84a 	mov	sl, sl, asr #16
        2b2d54:	e13a0009 	teq	sl, r9
        2b2d58:	0a00001f 	beq	2b2ddc <make_different_breaks(low_type *)+0x724>
        2b2d5c:	e5d50003 	ldrb	r0, [r5, #3]
        2b2d60:	e3100001 	tst	r0, #1	; 0x1
        2b2d64:	02001008 	andeq	r1, r0, #8	; 0x8
        2b2d68:	03310000 	teqeq	r1, #0	; 0x0
        2b2d6c:	02000002 	andeq	r0, r0, #2	; 0x2
        2b2d70:	03300000 	teqeq	r0, #0	; 0x0
        2b2d74:	1a000018 	bne	2b2ddc <make_different_breaks(low_type *)+0x724>
        2b2d78:	e59d0000 	ldr	r0, [sp]
        2b2d7c:	e3500001 	cmp	r0, #1	; 0x1
        2b2d80:	1a000003 	bne	2b2d94 <make_different_breaks(low_type *)+0x6dc>
        2b2d84:	e5940070 	ldr	r0, [r4, #112]
        2b2d88:	e15a08c0 	cmp	sl, r0, asr #17
        2b2d8c:	ca000012 	bgt	2b2ddc <make_different_breaks(low_type *)+0x724>
        2b2d90:	ea00000f 	b	2b2dd4 <make_different_breaks(low_type *)+0x71c>
        2b2d94:	da000010 	ble	2b2ddc <make_different_breaks(low_type *)+0x724>
        2b2d98:	e59d0004 	ldr	r0, [sp, #4]
        2b2d9c:	e040100a 	sub	r1, r0, sl
        2b2da0:	e1a00008 	mov	r0, r8
        2b2da4:	eb63fee5 	bl	1bb2940 <$__rt_sdiv>
        2b2da8:	e15a00c0 	cmp	sl, r0, asr #1
        2b2dac:	da000008 	ble	2b2dd4 <make_different_breaks(low_type *)+0x71c>
        2b2db0:	e3a01001 	mov	r1, #1	; 0x1
        2b2db4:	e0811080 	add	r1, r1, r0, lsl #1
        2b2db8:	e3a00003 	mov	r0, #3	; 0x3
        2b2dbc:	eb63fedf 	bl	1bb2940 <$__rt_sdiv>
        2b2dc0:	e150000a 	cmp	r0, sl
        2b2dc4:	ba000004 	blt	2b2ddc <make_different_breaks(low_type *)+0x724>
        2b2dc8:	e5940070 	ldr	r0, [r4, #112]
        2b2dcc:	e15a08c0 	cmp	sl, r0, asr #17
        2b2dd0:	ca000001 	bgt	2b2ddc <make_different_breaks(low_type *)+0x724>
        2b2dd4:	e3a00012 	mov	r0, #18	; 0x12
        2b2dd8:	e5c50001 	strb	r0, [r5, #1]
        2b2ddc:	e595500c 	ldr	r5, [r5, #12]
        2b2de0:	e3350000 	teq	r5, #0	; 0x0
        2b2de4:	1affffc2 	bne	2b2cf4 <make_different_breaks(low_type *)+0x63c>
        2b2de8:	e3a00000 	mov	r0, #0	; 0x0
        2b2dec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: Mark__FP8low_typeUcN32sN36
 * Address: 002bc1e8
 */
void globals::Mark() {
    /*
        2bc1e8:	e1a0c00d 	mov	ip, sp
        2bc1ec:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2bc1f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bc1f4:	e1a04000 	mov	r4, r0
        2bc1f8:	e20180ff 	and	r8, r1, #255	; 0xff
        2bc1fc:	e20290ff 	and	r9, r2, #255	; 0xff
        2bc200:	e20310ff 	and	r1, r3, #255	; 0xff
        2bc204:	e59b6004 	ldr	r6, [fp, #4]
        2bc208:	e20620ff 	and	r2, r6, #255	; 0xff
        2bc20c:	e28be008 	add	lr, fp, #8	; 0x8
        2bc210:	e89e5020 	ldmia	lr, {r5, ip, lr}
        2bc214:	e1a03805 	mov	r3, r5, lsl #16
        2bc218:	e1a03843 	mov	r3, r3, asr #16
        2bc21c:	e1a0c80c 	mov	ip, ip, lsl #16
        2bc220:	e1a0c84c 	mov	ip, ip, asr #16
        2bc224:	e1a0e80e 	mov	lr, lr, lsl #16
        2bc228:	e1a0e84e 	mov	lr, lr, asr #16
        2bc22c:	e59b0014 	ldr	r0, [fp, #20]
        2bc230:	e1a0a800 	mov	sl, r0, lsl #16
        2bc234:	e1a0a84a 	mov	sl, sl, asr #16
        2bc238:	e24dd018 	sub	sp, sp, #24	; 0x18
        2bc23c:	e2840046 	add	r0, r4, #70	; 0x46
        2bc240:	e2847050 	add	r7, r4, #80	; 0x50
        2bc244:	e5945040 	ldr	r5, [r4, #64]
        2bc248:	e5906000 	ldr	r6, [r0]
        2bc24c:	e1a06846 	mov	r6, r6, asr #16
        2bc250:	e58d6014 	str	r6, [sp, #20]
        2bc254:	e0866106 	add	r6, r6, r6, lsl #2
        2bc258:	e0856106 	add	r6, r5, r6, lsl #2
        2bc25c:	e5cd8000 	strb	r8, [sp]
        2bc260:	e5cd9001 	strb	r9, [sp, #1]
        2bc264:	e5cd1002 	strb	r1, [sp, #2]
        2bc268:	e5cd2003 	strb	r2, [sp, #3]
        2bc26c:	e5cd3005 	strb	r3, [sp, #5]
        2bc270:	e1a01443 	mov	r1, r3, asr #8
        2bc274:	e5cd1004 	strb	r1, [sp, #4]
        2bc278:	e5cdc007 	strb	ip, [sp, #7]
        2bc27c:	e1a0144c 	mov	r1, ip, asr #8
        2bc280:	e5cd1006 	strb	r1, [sp, #6]
        2bc284:	e5cde009 	strb	lr, [sp, #9]
        2bc288:	e1a0144e 	mov	r1, lr, asr #8
        2bc28c:	e5cd1008 	strb	r1, [sp, #8]
        2bc290:	e5cda00b 	strb	sl, [sp, #11]
        2bc294:	e1a0144a 	mov	r1, sl, asr #8
        2bc298:	e5cd100a 	strb	r1, [sp, #10]
        2bc29c:	e3a03e19 	mov	r3, #400	; 0x190
        2bc2a0:	e92d0008 	stmdb	sp!, {r3}
        2bc2a4:	e1a03000 	mov	r3, r0
        2bc2a8:	e1a02005 	mov	r2, r5
        2bc2ac:	e28d1004 	add	r1, sp, #4	; 0x4
        2bc2b0:	e1a00004 	mov	r0, r4
        2bc2b4:	eb619793 	bl	1b22108 <$NoteSpecl__FP8low_typeP9SPEC_TYPET2Pss>
        2bc2b8:	e28dd004 	add	sp, sp, #4	; 0x4
        2bc2bc:	e3300000 	teq	r0, #0	; 0x0
        2bc2c0:	0a000027 	beq	2bc364 <Mark__FP8low_typeUcN32sN36+0x17c>
        2bc2c4:	e5940048 	ldr	r0, [r4, #72]
        2bc2c8:	e1a00840 	mov	r0, r0, asr #16
        2bc2cc:	e0800100 	add	r0, r0, r0, lsl #2
        2bc2d0:	e0850100 	add	r0, r5, r0, lsl #2
        2bc2d4:	e5860010 	str	r0, [r6, #16]
        2bc2d8:	e3a00000 	mov	r0, #0	; 0x0
        2bc2dc:	e586000c 	str	r0, [r6, #12]
        2bc2e0:	e5941048 	ldr	r1, [r4, #72]
        2bc2e4:	e1a01841 	mov	r1, r1, asr #16
        2bc2e8:	e0811101 	add	r1, r1, r1, lsl #2
        2bc2ec:	e0851101 	add	r1, r5, r1, lsl #2
        2bc2f0:	e5a1600c 	str	r6, [r1, #12]!
        2bc2f4:	e59d6014 	ldr	r6, [sp, #20]
        2bc2f8:	e1a02806 	mov	r2, r6, lsl #16
        2bc2fc:	e1a02842 	mov	r2, r2, asr #16
        2bc300:	e5c42049 	strb	r2, [r4, #73]
        2bc304:	e1a01442 	mov	r1, r2, asr #8
        2bc308:	e5c41048 	strb	r1, [r4, #72]
        2bc30c:	e3380005 	teq	r8, #5	; 0x5
        2bc310:	13380007 	teqne	r8, #7	; 0x7
        2bc314:	13380008 	teqne	r8, #8	; 0x8
        2bc318:	1a000010 	bne	2bc360 <Mark__FP8low_typeUcN32sN36+0x178>
        2bc31c:	e5943052 	ldr	r3, [r4, #82]
        2bc320:	e1a03843 	mov	r3, r3, asr #16
        2bc324:	e243c001 	sub	ip, r3, #1	; 0x1
        2bc328:	e5973000 	ldr	r3, [r7]
        2bc32c:	e1a03843 	mov	r3, r3, asr #16
        2bc330:	e15c0003 	cmp	ip, r3
        2bc334:	da00000a 	ble	2bc364 <Mark__FP8low_typeUcN32sN36+0x17c>
        2bc338:	e5b4c04c 	ldr	ip, [r4, #76]!
        2bc33c:	e08c3083 	add	r3, ip, r3, lsl #1
        2bc340:	e5c32001 	strb	r2, [r3, #1]
        2bc344:	e5c31000 	strb	r1, [r3]
        2bc348:	e5971000 	ldr	r1, [r7]
        2bc34c:	e1a01821 	mov	r1, r1, lsr #16
        2bc350:	e2811001 	add	r1, r1, #1	; 0x1
        2bc354:	e5c71001 	strb	r1, [r7, #1]
        2bc358:	e1a01441 	mov	r1, r1, asr #8
        2bc35c:	e5c71000 	strb	r1, [r7]
        2bc360:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2bc364:	e3a00001 	mov	r0, #1	; 0x1
        2bc368:	eafffffc 	b	2bc360 <Mark__FP8low_typeUcN32sN36+0x178>
    */
}

/**
 * Symbol: MarkSpecl(low_type *, SPEC_TYPE *)
 * Address: 002bc36c
 */
MarkSpecl(low_type *, SPEC_TYPE *) {
    /*
        2bc36c:	e1a0c00d 	mov	ip, sp
        2bc370:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2bc374:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bc378:	e1a04000 	mov	r4, r0
        2bc37c:	e1a05001 	mov	r5, r1
        2bc380:	e2849050 	add	r9, r4, #80	; 0x50
        2bc384:	e5b08046 	ldr	r8, [r0, #70]!
        2bc388:	e1a08848 	mov	r8, r8, asr #16
        2bc38c:	e0881108 	add	r1, r8, r8, lsl #2
        2bc390:	e5946040 	ldr	r6, [r4, #64]
        2bc394:	e0867101 	add	r7, r6, r1, lsl #2
        2bc398:	e3a03e19 	mov	r3, #400	; 0x190
        2bc39c:	e92d0008 	stmdb	sp!, {r3}
        2bc3a0:	e1a03000 	mov	r3, r0
        2bc3a4:	e1a02006 	mov	r2, r6
        2bc3a8:	e1a01005 	mov	r1, r5
        2bc3ac:	e1a00004 	mov	r0, r4
        2bc3b0:	eb619754 	bl	1b22108 <$NoteSpecl__FP8low_typeP9SPEC_TYPET2Pss>
        2bc3b4:	e28dd004 	add	sp, sp, #4	; 0x4
        2bc3b8:	e3300000 	teq	r0, #0	; 0x0
        2bc3bc:	0a000025 	beq	2bc458 <MarkSpecl(low_type *, SPEC_TYPE *)+0xec>
        2bc3c0:	e5940048 	ldr	r0, [r4, #72]
        2bc3c4:	e1a00840 	mov	r0, r0, asr #16
        2bc3c8:	e0800100 	add	r0, r0, r0, lsl #2
        2bc3cc:	e0860100 	add	r0, r6, r0, lsl #2
        2bc3d0:	e5870010 	str	r0, [r7, #16]
        2bc3d4:	e3a00000 	mov	r0, #0	; 0x0
        2bc3d8:	e587000c 	str	r0, [r7, #12]
        2bc3dc:	e5941048 	ldr	r1, [r4, #72]
        2bc3e0:	e1a01841 	mov	r1, r1, asr #16
        2bc3e4:	e0811101 	add	r1, r1, r1, lsl #2
        2bc3e8:	e0861101 	add	r1, r6, r1, lsl #2
        2bc3ec:	e5a1700c 	str	r7, [r1, #12]!
        2bc3f0:	e5c48049 	strb	r8, [r4, #73]
        2bc3f4:	e1a01448 	mov	r1, r8, asr #8
        2bc3f8:	e5c41048 	strb	r1, [r4, #72]
        2bc3fc:	e5d52000 	ldrb	r2, [r5]
        2bc400:	e3320005 	teq	r2, #5	; 0x5
        2bc404:	13320007 	teqne	r2, #7	; 0x7
        2bc408:	13320008 	teqne	r2, #8	; 0x8
        2bc40c:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2bc410:	e5942052 	ldr	r2, [r4, #82]
        2bc414:	e1a02842 	mov	r2, r2, asr #16
        2bc418:	e2423001 	sub	r3, r2, #1	; 0x1
        2bc41c:	e5992000 	ldr	r2, [r9]
        2bc420:	e1a02842 	mov	r2, r2, asr #16
        2bc424:	e1530002 	cmp	r3, r2
        2bc428:	da00000a 	ble	2bc458 <MarkSpecl(low_type *, SPEC_TYPE *)+0xec>
        2bc42c:	e5b4304c 	ldr	r3, [r4, #76]!
        2bc430:	e0832082 	add	r2, r3, r2, lsl #1
        2bc434:	e5c28001 	strb	r8, [r2, #1]
        2bc438:	e5c21000 	strb	r1, [r2]
        2bc43c:	e5991000 	ldr	r1, [r9]
        2bc440:	e1a01821 	mov	r1, r1, lsr #16
        2bc444:	e2811001 	add	r1, r1, #1	; 0x1
        2bc448:	e5c91001 	strb	r1, [r9, #1]
        2bc44c:	e1a01441 	mov	r1, r1, asr #8
        2bc450:	e5c91000 	strb	r1, [r9]
        2bc454:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2bc458:	e3a00001 	mov	r0, #1	; 0x1
        2bc45c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: make_circle__FP8low_typeP9SPEC_TYPEsT3
 * Address: 002bcca4
 */
void globals::make_circle() {
    /*
        2bcca4:	e1a0c00d 	mov	ip, sp
        2bcca8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2bccac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bccb0:	e1a04000 	mov	r4, r0
        2bccb4:	e1a00802 	mov	r0, r2, lsl #16
        2bccb8:	e1a00840 	mov	r0, r0, asr #16
        2bccbc:	e1a05803 	mov	r5, r3, lsl #16
        2bccc0:	e1a05845 	mov	r5, r5, asr #16
        2bccc4:	e1500005 	cmp	r0, r5
        2bccc8:	b1a01000 	movlt	r1, r0
        2bcccc:	b1a00005 	movlt	r0, r5
        2bccd0:	b1a05001 	movlt	r5, r1
        2bccd4:	e3e03001 	mvn	r3, #1	; 0x1
        2bccd8:	e1a02000 	mov	r2, r0
        2bccdc:	e1a01000 	mov	r1, r0
        2bcce0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2bcce4:	e3a03063 	mov	r3, #99	; 0x63
        2bcce8:	e92d0008 	stmdb	sp!, {r3}
        2bccec:	e1a00004 	mov	r0, r4
        2bccf0:	e3a03000 	mov	r3, #0	; 0x0
        2bccf4:	e3a02000 	mov	r2, #0	; 0x0
        2bccf8:	e3a01006 	mov	r1, #6	; 0x6
        2bccfc:	eb6190fd 	bl	1b210f8 <$Mark__FP8low_typeUcN32sN36>
        2bcd00:	e28dd014 	add	sp, sp, #20	; 0x14
        2bcd04:	e3a06001 	mov	r6, #1	; 0x1
        2bcd08:	e3300001 	teq	r0, #1	; 0x1
        2bcd0c:	0a00000f 	beq	2bcd50 <make_circle__FP8low_typeP9SPEC_TYPEsT3+0xac>
        2bcd10:	e3e03001 	mvn	r3, #1	; 0x1
        2bcd14:	e1a02005 	mov	r2, r5
        2bcd18:	e1a01005 	mov	r1, r5
        2bcd1c:	e1a00005 	mov	r0, r5
        2bcd20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2bcd24:	e3a03064 	mov	r3, #100	; 0x64
        2bcd28:	e92d0008 	stmdb	sp!, {r3}
        2bcd2c:	e1a00004 	mov	r0, r4
        2bcd30:	e3a03000 	mov	r3, #0	; 0x0
        2bcd34:	e3a02000 	mov	r2, #0	; 0x0
        2bcd38:	e3a01006 	mov	r1, #6	; 0x6
        2bcd3c:	eb6190ed 	bl	1b210f8 <$Mark__FP8low_typeUcN32sN36>
        2bcd40:	e28dd014 	add	sp, sp, #20	; 0x14
        2bcd44:	e3300001 	teq	r0, #1	; 0x1
        2bcd48:	13a00000 	movne	r0, #0	; 0x0
        2bcd4c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2bcd50:	e1a00006 	mov	r0, r6
        2bcd54:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)
 * Address: 002c8be0
 */
MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *) {
    /*
        2c8be0:	e1a0c00d 	mov	ip, sp
        2c8be4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2c8be8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c8bec:	e1a04000 	mov	r4, r0
        2c8bf0:	e1a05001 	mov	r5, r1
        2c8bf4:	e5913040 	ldr	r3, [r1, #64]
        2c8bf8:	e592000c 	ldr	r0, [r2, #12]
        2c8bfc:	e1a09000 	mov	r9, r0
        2c8c00:	e5928010 	ldr	r8, [r2, #16]
        2c8c04:	e5d21001 	ldrb	r1, [r2, #1]
        2c8c08:	e1a0e001 	mov	lr, r1
        2c8c0c:	e5d2c000 	ldrb	ip, [r2]
        2c8c10:	e3a06000 	mov	r6, #0	; 0x0
        2c8c14:	e1320003 	teq	r2, r3
        2c8c18:	133e0012 	teqne	lr, #18	; 0x12
        2c8c1c:	133e0001 	teqne	lr, #1	; 0x1
        2c8c20:	133e0013 	teqne	lr, #19	; 0x13
        2c8c24:	133e0014 	teqne	lr, #20	; 0x14
        2c8c28:	1a000003 	bne	2c8c3c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x5c>
        2c8c2c:	e5d40001 	ldrb	r0, [r4, #1]
        2c8c30:	e3800001 	orr	r0, r0, #1	; 0x1
        2c8c34:	e5c40001 	strb	r0, [r4, #1]
        2c8c38:	ea0000db 	b	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8c3c:	e1380003 	teq	r8, r3
        2c8c40:	13300000 	teqne	r0, #0	; 0x0
        2c8c44:	15d00001 	ldrneb	r0, [r0, #1]
        2c8c48:	13300012 	teqne	r0, #18	; 0x12
        2c8c4c:	13300001 	teqne	r0, #1	; 0x1
        2c8c50:	13300013 	teqne	r0, #19	; 0x13
        2c8c54:	13300014 	teqne	r0, #20	; 0x14
        2c8c58:	0a0000d3 	beq	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8c5c:	e5d83001 	ldrb	r3, [r8, #1]
        2c8c60:	e3330012 	teq	r3, #18	; 0x12
        2c8c64:	13330001 	teqne	r3, #1	; 0x1
        2c8c68:	13330013 	teqne	r3, #19	; 0x13
        2c8c6c:	13330014 	teqne	r3, #20	; 0x14
        2c8c70:	1a000024 	bne	2c8d08 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x128>
        2c8c74:	e3310010 	teq	r1, #16	; 0x10
        2c8c78:	0a000004 	beq	2c8c90 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0xb0>
        2c8c7c:	e331000d 	teq	r1, #13	; 0xd
        2c8c80:	05d20003 	ldreqb	r0, [r2, #3]
        2c8c84:	02000004 	andeq	r0, r0, #4	; 0x4
        2c8c88:	03300000 	teqeq	r0, #0	; 0x0
        2c8c8c:	1a000001 	bne	2c8c98 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0xb8>
        2c8c90:	e3390000 	teq	r9, #0	; 0x0
        2c8c94:	1affffe4 	bne	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8c98:	e3330013 	teq	r3, #19	; 0x13
        2c8c9c:	1a0000c2 	bne	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8ca0:	e5b9200c 	ldr	r2, [r9, #12]!
        2c8ca4:	e3320000 	teq	r2, #0	; 0x0
        2c8ca8:	0a000012 	beq	2c8cf8 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x118>
        2c8cac:	e5d20001 	ldrb	r0, [r2, #1]
        2c8cb0:	e3300012 	teq	r0, #18	; 0x12
        2c8cb4:	13300001 	teqne	r0, #1	; 0x1
        2c8cb8:	13300013 	teqne	r0, #19	; 0x13
        2c8cbc:	13300014 	teqne	r0, #20	; 0x14
        2c8cc0:	0a000006 	beq	2c8ce0 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x100>
        2c8cc4:	e33e0003 	teq	lr, #3	; 0x3
        2c8cc8:	133e0007 	teqne	lr, #7	; 0x7
        2c8ccc:	133e000a 	teqne	lr, #10	; 0xa
        2c8cd0:	133e0009 	teqne	lr, #9	; 0x9
        2c8cd4:	133e000c 	teqne	lr, #12	; 0xc
        2c8cd8:	133e000b 	teqne	lr, #11	; 0xb
        2c8cdc:	0affffd2 	beq	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8ce0:	e3320000 	teq	r2, #0	; 0x0
        2c8ce4:	13300012 	teqne	r0, #18	; 0x12
        2c8ce8:	13300001 	teqne	r0, #1	; 0x1
        2c8cec:	13300013 	teqne	r0, #19	; 0x13
        2c8cf0:	13300014 	teqne	r0, #20	; 0x14
        2c8cf4:	1a0000ac 	bne	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8cf8:	e3310003 	teq	r1, #3	; 0x3
        2c8cfc:	13310009 	teqne	r1, #9	; 0x9
        2c8d00:	0affffc9 	beq	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8d04:	ea0000a8 	b	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8d08:	e599700c 	ldr	r7, [r9, #12]
        2c8d0c:	e3370000 	teq	r7, #0	; 0x0
        2c8d10:	15d7e001 	ldrneb	lr, [r7, #1]
        2c8d14:	133e0012 	teqne	lr, #18	; 0x12
        2c8d18:	133e0001 	teqne	lr, #1	; 0x1
        2c8d1c:	133e0013 	teqne	lr, #19	; 0x13
        2c8d20:	133e0014 	teqne	lr, #20	; 0x14
        2c8d24:	0a0000a0 	beq	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8d28:	e3310006 	teq	r1, #6	; 0x6
        2c8d2c:	1331001e 	teqne	r1, #30	; 0x1e
        2c8d30:	1331001f 	teqne	r1, #31	; 0x1f
        2c8d34:	1331001c 	teqne	r1, #28	; 0x1c
        2c8d38:	1331001b 	teqne	r1, #27	; 0x1b
        2c8d3c:	13310017 	teqne	r1, #23	; 0x17
        2c8d40:	13310018 	teqne	r1, #24	; 0x18
        2c8d44:	0a000016 	beq	2c8da4 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x1c4>
        2c8d48:	e3310008 	teq	r1, #8	; 0x8
        2c8d4c:	1a000004 	bne	2c8d64 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x184>
        2c8d50:	e5d2a002 	ldrb	sl, [r2, #2]
        2c8d54:	e20aa030 	and	sl, sl, #48	; 0x30
        2c8d58:	e33a0020 	teq	sl, #32	; 0x20
        2c8d5c:	0a000010 	beq	2c8da4 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x1c4>
        2c8d60:	ea000001 	b	2c8d6c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x18c>
        2c8d64:	e3310022 	teq	r1, #34	; 0x22
        2c8d68:	0a00000d 	beq	2c8da4 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x1c4>
        2c8d6c:	e33c0005 	teq	ip, #5	; 0x5
        2c8d70:	13310029 	teqne	r1, #41	; 0x29
        2c8d74:	13310010 	teqne	r1, #16	; 0x10
        2c8d78:	0a000009 	beq	2c8da4 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x1c4>
        2c8d7c:	e331000d 	teq	r1, #13	; 0xd
        2c8d80:	1a000003 	bne	2c8d94 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x1b4>
        2c8d84:	e5d2a003 	ldrb	sl, [r2, #3]
        2c8d88:	e31a0004 	tst	sl, #4	; 0x4
        2c8d8c:	1a00004a 	bne	2c8ebc <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x2dc>
        2c8d90:	ea000003 	b	2c8da4 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x1c4>
        2c8d94:	e3310007 	teq	r1, #7	; 0x7
        2c8d98:	1331000b 	teqne	r1, #11	; 0xb
        2c8d9c:	1331000c 	teqne	r1, #12	; 0xc
        2c8da0:	1a000045 	bne	2c8ebc <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x2dc>
        2c8da4:	e3a08000 	mov	r8, #0	; 0x0
        2c8da8:	e3310006 	teq	r1, #6	; 0x6
        2c8dac:	0a000004 	beq	2c8dc4 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x1e4>
        2c8db0:	e3310022 	teq	r1, #34	; 0x22
        2c8db4:	05d21002 	ldreqb	r1, [r2, #2]
        2c8db8:	02011030 	andeq	r1, r1, #48	; 0x30
        2c8dbc:	03310010 	teqeq	r1, #16	; 0x10
        2c8dc0:	1affff99 	bne	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8dc4:	e3300002 	teq	r0, #2	; 0x2
        2c8dc8:	13300021 	teqne	r0, #33	; 0x21
        2c8dcc:	13300003 	teqne	r0, #3	; 0x3
        2c8dd0:	1a000036 	bne	2c8eb0 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x2d0>
        2c8dd4:	ea000000 	b	2c8ddc <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x1fc>
        2c8dd8:	e597700c 	ldr	r7, [r7, #12]
        2c8ddc:	e3370000 	teq	r7, #0	; 0x0
        2c8de0:	0a000032 	beq	2c8eb0 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x2d0>
        2c8de4:	e5d70001 	ldrb	r0, [r7, #1]
        2c8de8:	e3300012 	teq	r0, #18	; 0x12
        2c8dec:	13300001 	teqne	r0, #1	; 0x1
        2c8df0:	13300013 	teqne	r0, #19	; 0x13
        2c8df4:	13300014 	teqne	r0, #20	; 0x14
        2c8df8:	0a000003 	beq	2c8e0c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x22c>
        2c8dfc:	e1a00007 	mov	r0, r7
        2c8e00:	eb61797c 	bl	1b273f8 <$IsStrongElem(SPEC_TYPE *)>
        2c8e04:	e3300000 	teq	r0, #0	; 0x0
        2c8e08:	0afffff2 	beq	2c8dd8 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x1f8>
        2c8e0c:	e3370000 	teq	r7, #0	; 0x0
        2c8e10:	0a000026 	beq	2c8eb0 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x2d0>
        2c8e14:	e597000c 	ldr	r0, [r7, #12]
        2c8e18:	e3300000 	teq	r0, #0	; 0x0
        2c8e1c:	15d00001 	ldrneb	r0, [r0, #1]
        2c8e20:	13300012 	teqne	r0, #18	; 0x12
        2c8e24:	13300001 	teqne	r0, #1	; 0x1
        2c8e28:	13300013 	teqne	r0, #19	; 0x13
        2c8e2c:	13300014 	teqne	r0, #20	; 0x14
        2c8e30:	1a00001e 	bne	2c8eb0 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x2d0>
        2c8e34:	e5d70001 	ldrb	r0, [r7, #1]
        2c8e38:	e3300007 	teq	r0, #7	; 0x7
        2c8e3c:	1330000b 	teqne	r0, #11	; 0xb
        2c8e40:	1330000c 	teqne	r0, #12	; 0xc
        2c8e44:	1330001c 	teqne	r0, #28	; 0x1c
        2c8e48:	13300019 	teqne	r0, #25	; 0x19
        2c8e4c:	1a000017 	bne	2c8eb0 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x2d0>
        2c8e50:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c8e54:	e1a0300d 	mov	r3, sp
        2c8e58:	e2855030 	add	r5, r5, #48	; 0x30
        2c8e5c:	e9b50003 	ldmib	r5!, {r0, r1}
        2c8e60:	e92d0008 	stmdb	sp!, {r3}
        2c8e64:	e5973006 	ldr	r3, [r7, #6]
        2c8e68:	e1a03843 	mov	r3, r3, asr #16
        2c8e6c:	e5992004 	ldr	r2, [r9, #4]
        2c8e70:	e1a02842 	mov	r2, r2, asr #16
        2c8e74:	eb615c6a 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        2c8e78:	e28dd004 	add	sp, sp, #4	; 0x4
        2c8e7c:	e59d1002 	ldr	r1, [sp, #2]
        2c8e80:	e1a01841 	mov	r1, r1, asr #16
        2c8e84:	e59d0006 	ldr	r0, [sp, #6]
        2c8e88:	e0810840 	add	r0, r1, r0, asr #16
        2c8e8c:	e1a000c0 	mov	r0, r0, asr #1
        2c8e90:	e1a01080 	mov	r1, r0, lsl #1
        2c8e94:	e59d0004 	ldr	r0, [sp, #4]
        2c8e98:	e1a00840 	mov	r0, r0, asr #16
        2c8e9c:	e59d2000 	ldr	r2, [sp]
        2c8ea0:	e0800842 	add	r0, r0, r2, asr #16
        2c8ea4:	e15100c0 	cmp	r1, r0, asr #1
        2c8ea8:	b3a08001 	movlt	r8, #1	; 0x1
        2c8eac:	e28dd008 	add	sp, sp, #8	; 0x8
        2c8eb0:	e3380000 	teq	r8, #0	; 0x0
        2c8eb4:	0affff5c 	beq	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8eb8:	ea00003b 	b	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8ebc:	e1a05000 	mov	r5, r0
        2c8ec0:	e3300015 	teq	r0, #21	; 0x15
        2c8ec4:	13300016 	teqne	r0, #22	; 0x16
        2c8ec8:	13300004 	teqne	r0, #4	; 0x4
        2c8ecc:	1330001d 	teqne	r0, #29	; 0x1d
        2c8ed0:	13300020 	teqne	r0, #32	; 0x20
        2c8ed4:	1330000f 	teqne	r0, #15	; 0xf
        2c8ed8:	13300028 	teqne	r0, #40	; 0x28
        2c8edc:	1335000d 	teqne	r5, #13	; 0xd
        2c8ee0:	13350010 	teqne	r5, #16	; 0x10
        2c8ee4:	0affff50 	beq	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8ee8:	e3330022 	teq	r3, #34	; 0x22
        2c8eec:	05d80002 	ldreqb	r0, [r8, #2]
        2c8ef0:	02000030 	andeq	r0, r0, #48	; 0x30
        2c8ef4:	03300020 	teqeq	r0, #32	; 0x20
        2c8ef8:	0affff4b 	beq	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8efc:	e33e0022 	teq	lr, #34	; 0x22
        2c8f00:	05d70002 	ldreqb	r0, [r7, #2]
        2c8f04:	02000030 	andeq	r0, r0, #48	; 0x30
        2c8f08:	03300020 	teqeq	r0, #32	; 0x20
        2c8f0c:	0affff46 	beq	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8f10:	e3330004 	teq	r3, #4	; 0x4
        2c8f14:	0affff44 	beq	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8f18:	e3310002 	teq	r1, #2	; 0x2
        2c8f1c:	0a000004 	beq	2c8f34 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x354>
        2c8f20:	e3310003 	teq	r1, #3	; 0x3
        2c8f24:	1a00000e 	bne	2c8f64 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x384>
        2c8f28:	e33c0001 	teq	ip, #1	; 0x1
        2c8f2c:	133c0009 	teqne	ip, #9	; 0x9
        2c8f30:	1a00001d 	bne	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8f34:	e5d20002 	ldrb	r0, [r2, #2]
        2c8f38:	e2000030 	and	r0, r0, #48	; 0x30
        2c8f3c:	e3300010 	teq	r0, #16	; 0x10
        2c8f40:	1a000007 	bne	2c8f64 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x384>
        2c8f44:	e333000e 	teq	r3, #14	; 0xe
        2c8f48:	05540017 	ldreqb	r0, [r4, -#23]
        2c8f4c:	03800001 	orreq	r0, r0, #1	; 0x1
        2c8f50:	05440017 	streqb	r0, [r4, -#23]
        2c8f54:	e5d90001 	ldrb	r0, [r9, #1]
        2c8f58:	e3300011 	teq	r0, #17	; 0x11
        2c8f5c:	0affff32 	beq	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8f60:	ea000011 	b	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8f64:	e3310008 	teq	r1, #8	; 0x8
        2c8f68:	0a000004 	beq	2c8f80 <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3a0>
        2c8f6c:	e3310007 	teq	r1, #7	; 0x7
        2c8f70:	1a00000d 	bne	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8f74:	e33c0001 	teq	ip, #1	; 0x1
        2c8f78:	133c0009 	teqne	ip, #9	; 0x9
        2c8f7c:	1a00000a 	bne	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8f80:	e5d20002 	ldrb	r0, [r2, #2]
        2c8f84:	e2000030 	and	r0, r0, #48	; 0x30
        2c8f88:	e3300020 	teq	r0, #32	; 0x20
        2c8f8c:	1a000006 	bne	2c8fac <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x3cc>
        2c8f90:	e333000e 	teq	r3, #14	; 0xe
        2c8f94:	05540017 	ldreqb	r0, [r4, -#23]
        2c8f98:	03800001 	orreq	r0, r0, #1	; 0x1
        2c8f9c:	05440017 	streqb	r0, [r4, -#23]
        2c8fa0:	e5d90001 	ldrb	r0, [r9, #1]
        2c8fa4:	e3300011 	teq	r0, #17	; 0x11
        2c8fa8:	0affff1f 	beq	2c8c2c <MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)+0x4c>
        2c8fac:	e1a00006 	mov	r0, r6
        2c8fb0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MapCurve__FP5curveP4RectT2
 * Address: 002d1c94
 */
void globals::MapCurve() {
    /*
        2d1c94:	e1a0c00d 	mov	ip, sp
        2d1c98:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2d1c9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1ca0:	e1a06000 	mov	r6, r0
        2d1ca4:	e1a05001 	mov	r5, r1
        2d1ca8:	e1a04002 	mov	r4, r2
        2d1cac:	e5910006 	ldr	r0, [r1, #6]
        2d1cb0:	e1a00840 	mov	r0, r0, asr #16
        2d1cb4:	e5911002 	ldr	r1, [r1, #2]
        2d1cb8:	e0401841 	sub	r1, r0, r1, asr #16
        2d1cbc:	e5922006 	ldr	r2, [r2, #6]
        2d1cc0:	e1a02842 	mov	r2, r2, asr #16
        2d1cc4:	e5940002 	ldr	r0, [r4, #2]
        2d1cc8:	e0420840 	sub	r0, r2, r0, asr #16
        2d1ccc:	eb643cfb 	bl	1be10c0 <$FixedDivide>
        2d1cd0:	e1a08000 	mov	r8, r0
        2d1cd4:	e5951004 	ldr	r1, [r5, #4]
        2d1cd8:	e1a01841 	mov	r1, r1, asr #16
        2d1cdc:	e5950000 	ldr	r0, [r5]
        2d1ce0:	e0411840 	sub	r1, r1, r0, asr #16
        2d1ce4:	e5942004 	ldr	r2, [r4, #4]
        2d1ce8:	e1a02842 	mov	r2, r2, asr #16
        2d1cec:	e5940000 	ldr	r0, [r4]
        2d1cf0:	e0420840 	sub	r0, r2, r0, asr #16
        2d1cf4:	eb643cf1 	bl	1be10c0 <$FixedDivide>
        2d1cf8:	e1a07000 	mov	r7, r0
        2d1cfc:	e5950000 	ldr	r0, [r5]
        2d1d00:	e1a00820 	mov	r0, r0, lsr #16
        2d1d04:	e1a00800 	mov	r0, r0, lsl #16
        2d1d08:	e2602000 	rsb	r2, r0, #0	; 0x0
        2d1d0c:	e5950002 	ldr	r0, [r5, #2]
        2d1d10:	e1a00820 	mov	r0, r0, lsr #16
        2d1d14:	e1a00800 	mov	r0, r0, lsl #16
        2d1d18:	e2601000 	rsb	r1, r0, #0	; 0x0
        2d1d1c:	e1a00006 	mov	r0, r6
        2d1d20:	eb61feed 	bl	1b518dc <$OffsetCurve__FP5curvelT2>
        2d1d24:	e1a02007 	mov	r2, r7
        2d1d28:	e1a01008 	mov	r1, r8
        2d1d2c:	e1a00006 	mov	r0, r6
        2d1d30:	eb62071f 	bl	1b539b4 <$ScaleCurve__FP5curvelT2>
        2d1d34:	e5940000 	ldr	r0, [r4]
        2d1d38:	e1a00820 	mov	r0, r0, lsr #16
        2d1d3c:	e1a02800 	mov	r2, r0, lsl #16
        2d1d40:	e5940002 	ldr	r0, [r4, #2]
        2d1d44:	e1a00820 	mov	r0, r0, lsr #16
        2d1d48:	e1a01800 	mov	r1, r0, lsl #16
        2d1d4c:	e1a00006 	mov	r0, r6
        2d1d50:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2d1d54:	ea61fee0 	b	1b518dc <$OffsetCurve__FP5curvelT2>
    */
}

/**
 * Symbol: MakeEntryCache(void)
 * Address: 002d9b10
 */
MakeEntryCache(void) {
    /*
        2d9b10:	e1a0c00d 	mov	ip, sp
        2d9b14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d9b18:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d9b1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d9b20:	e3a00012 	mov	r0, #18	; 0x12
        2d9b24:	eb63a188 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9b28:	e58d0000 	str	r0, [sp]
        2d9b2c:	e1a0000d 	mov	r0, sp
        2d9b30:	e3a01008 	mov	r1, #8	; 0x8
        2d9b34:	eb63a17f 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2d9b38:	eb63a183 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9b3c:	e1a04000 	mov	r4, r0
        2d9b40:	e59d0000 	ldr	r0, [sp]
        2d9b44:	eb63a59c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d9b48:	e5945000 	ldr	r5, [r4]
        2d9b4c:	e1a00004 	mov	r0, r4
        2d9b50:	eb63a599 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d9b54:	e1a00005 	mov	r0, r5
        2d9b58:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: MakeFaultBlock(RefVar const &, TStoreWrapper *, unsigned long)
 * Address: 002e04d4
 */
MakeFaultBlock(RefVar const &, TStoreWrapper *, unsigned long) {
    /*
        2e04d4:	e1a0c00d 	mov	ip, sp
        2e04d8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2e04dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e04e0:	e1a06000 	mov	r6, r0
        2e04e4:	e1a05001 	mov	r5, r1
        2e04e8:	e1a04002 	mov	r4, r2
        2e04ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e04f0:	e3a09002 	mov	r9, #2	; 0x2
        2e04f4:	e1a00009 	mov	r0, r9
        2e04f8:	eb638713 	bl	1bc214c <$AllocateRefHandle(long)>
        2e04fc:	e58d0000 	str	r0, [sp]
        2e0500:	e1a0000d 	mov	r0, sp
        2e0504:	e3a01004 	mov	r1, #4	; 0x4
        2e0508:	eb63870a 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2e050c:	eb63870e 	bl	1bc214c <$AllocateRefHandle(long)>
        2e0510:	e1a07000 	mov	r7, r0
        2e0514:	e59d0000 	ldr	r0, [sp]
        2e0518:	eb638b27 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e051c:	e3a08000 	mov	r8, #0	; 0x0
        2e0520:	e5970000 	ldr	r0, [r7]
        2e0524:	e5961000 	ldr	r1, [r6]
        2e0528:	e5912000 	ldr	r2, [r1]
        2e052c:	e1a01008 	mov	r1, r8
        2e0530:	eb639788 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2e0534:	e1a02005 	mov	r2, r5
        2e0538:	e3a01001 	mov	r1, #1	; 0x1
        2e053c:	e5970000 	ldr	r0, [r7]
        2e0540:	eb639784 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2e0544:	e1a02104 	mov	r2, r4, lsl #2
        2e0548:	e1a01009 	mov	r1, r9
        2e054c:	e5970000 	ldr	r0, [r7]
        2e0550:	eb639780 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2e0554:	e5970000 	ldr	r0, [r7]
        2e0558:	eb639365 	bl	1bc52f4 <$ObjectPtr(long)>
        2e055c:	e3a01022 	mov	r1, #34	; 0x22
        2e0560:	e5a01008 	str	r1, [r0, #8]!
        2e0564:	e59f0014 	ldr	r0, [pc, #14]	; 2e0580 <MakeFaultBlock(RefVar const &, TStoreWrapper *, unsigned long)+0xac>
        2e0568:	e5808000 	str	r8, [r0]
        2e056c:	e5974000 	ldr	r4, [r7]
        2e0570:	e1a00007 	mov	r0, r7
        2e0574:	eb638b10 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e0578:	e1a00004 	mov	r0, r4
        2e057c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2e0580:	0c10554c 	ldceq	5, cr5, [r0], -#304
    */
}

/**
 * Symbol: MakeFaultBlock(RefVar const &, TStoreWrapper *, unsigned long, TStoreWrapper *)
 * Address: 002e0584
 */
MakeFaultBlock(RefVar const &, TStoreWrapper *, unsigned long, TStoreWrapper *) {
    /*
        2e0584:	e1a0c00d 	mov	ip, sp
        2e0588:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e058c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e0590:	e1a07000 	mov	r7, r0
        2e0594:	e1a06001 	mov	r6, r1
        2e0598:	e1a05002 	mov	r5, r2
        2e059c:	e1a04003 	mov	r4, r3
        2e05a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e05a4:	e3a0a002 	mov	sl, #2	; 0x2
        2e05a8:	e1a0000a 	mov	r0, sl
        2e05ac:	eb6386e6 	bl	1bc214c <$AllocateRefHandle(long)>
        2e05b0:	e58d0000 	str	r0, [sp]
        2e05b4:	e1a0000d 	mov	r0, sp
        2e05b8:	e3a01004 	mov	r1, #4	; 0x4
        2e05bc:	eb6386dd 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2e05c0:	eb6386e1 	bl	1bc214c <$AllocateRefHandle(long)>
        2e05c4:	e1a08000 	mov	r8, r0
        2e05c8:	e59d0000 	ldr	r0, [sp]
        2e05cc:	eb638afa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e05d0:	e3a09000 	mov	r9, #0	; 0x0
        2e05d4:	e5980000 	ldr	r0, [r8]
        2e05d8:	e5971000 	ldr	r1, [r7]
        2e05dc:	e5912000 	ldr	r2, [r1]
        2e05e0:	e1a01009 	mov	r1, r9
        2e05e4:	eb63975b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2e05e8:	e1a02006 	mov	r2, r6
        2e05ec:	e3a01001 	mov	r1, #1	; 0x1
        2e05f0:	e5980000 	ldr	r0, [r8]
        2e05f4:	eb639757 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2e05f8:	e1a02105 	mov	r2, r5, lsl #2
        2e05fc:	e1a0100a 	mov	r1, sl
        2e0600:	e5980000 	ldr	r0, [r8]
        2e0604:	eb639753 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2e0608:	e5980000 	ldr	r0, [r8]
        2e060c:	e5941000 	ldr	r1, [r4]
        2e0610:	e5912000 	ldr	r2, [r1]
        2e0614:	e3a01003 	mov	r1, #3	; 0x3
        2e0618:	eb63974e 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2e061c:	e5980000 	ldr	r0, [r8]
        2e0620:	eb639333 	bl	1bc52f4 <$ObjectPtr(long)>
        2e0624:	e3a01022 	mov	r1, #34	; 0x22
        2e0628:	e5a01008 	str	r1, [r0, #8]!
        2e062c:	e59f0014 	ldr	r0, [pc, #14]	; 2e0648 <MakeFaultBlock(RefVar const &, TStoreWrapper *, unsigned long, TStoreWrapper *)+0xc4>
        2e0630:	e5809000 	str	r9, [r0]
        2e0634:	e5984000 	ldr	r4, [r8]
        2e0638:	e1a00008 	mov	r0, r8
        2e063c:	eb638ade 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e0640:	e1a00004 	mov	r0, r4
        2e0644:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e0648:	0c10554c 	ldceq	5, cr5, [r0], -#304
    */
}

/**
 * Symbol: MakeCFunction(long (*)(RefVar const &,...), long, char *)
 * Address: 002f6d8c
 */
MakeCFunction(long (*)(RefVar const &,...), long, char *) {
    /*
        2f6d8c:	e1a0c00d 	mov	ip, sp
        2f6d90:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2f6d94:	e24cb004 	sub	fp, ip, #4	; 0x4
        2f6d98:	e1a06000 	mov	r6, r0
        2f6d9c:	e1a05001 	mov	r5, r1
        2f6da0:	e1a04002 	mov	r4, r2
        2f6da4:	eb024f03 	bl	38a9b8 <C$$dtorvec$$Limit+0x44>
        2f6da8:	eb632ce7 	bl	1bc214c <$AllocateRefHandle(long)>
        2f6dac:	e1a07000 	mov	r7, r0
        2f6db0:	e5900000 	ldr	r0, [r0]
        2f6db4:	e3a02032 	mov	r2, #50	; 0x32
        2f6db8:	e2822c01 	add	r2, r2, #256	; 0x100
        2f6dbc:	e3a01000 	mov	r1, #0	; 0x0
        2f6dc0:	eb633d64 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2f6dc4:	e1a02006 	mov	r2, r6
        2f6dc8:	e3a01001 	mov	r1, #1	; 0x1
        2f6dcc:	e5970000 	ldr	r0, [r7]
        2f6dd0:	eb633d60 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2f6dd4:	e1a02105 	mov	r2, r5, lsl #2
        2f6dd8:	e3a01002 	mov	r1, #2	; 0x2
        2f6ddc:	e5970000 	ldr	r0, [r7]
        2f6de0:	eb633d5c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2f6de4:	e59f0044 	ldr	r0, [pc, #44]	; 2f6e30 <MakeCFunction(long (*)(RefVar const &,...), long, char *)+0xa4>
        2f6de8:	e5d00008 	ldrb	r0, [r0, #8]
        2f6dec:	e3300000 	teq	r0, #0	; 0x0
        2f6df0:	0a000009 	beq	2f6e1c <MakeCFunction(long (*)(RefVar const &,...), long, char *)+0x90>
        2f6df4:	e1a00004 	mov	r0, r4
        2f6df8:	eb633934 	bl	1bc52d0 <$MakeString(char const *)>
        2f6dfc:	eb632cd2 	bl	1bc214c <$AllocateRefHandle(long)>
        2f6e00:	e1a04000 	mov	r4, r0
        2f6e04:	e5902000 	ldr	r2, [r0]
        2f6e08:	e3a01003 	mov	r1, #3	; 0x3
        2f6e0c:	e5970000 	ldr	r0, [r7]
        2f6e10:	eb633d50 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2f6e14:	e1a00004 	mov	r0, r4
        2f6e18:	eb6330e7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f6e1c:	e5974000 	ldr	r4, [r7]
        2f6e20:	e1a00007 	mov	r0, r7
        2f6e24:	eb6330e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2f6e28:	e1a00004 	mov	r0, r4
        2f6e2c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2f6e30:	0c10544c 	ldceq	4, cr5, [r0], -#304
    */
}

/**
 * Symbol: make_CDL_in_O_GU_f__FP9SPEC_TYPET1Uc
 * Address: 002fc764
 */
void globals::make_CDL_in_O_GU_f() {
    /*
        2fc764:	e20220ff 	and	r2, r2, #255	; 0xff
        2fc768:	e5903010 	ldr	r3, [r0, #16]
        2fc76c:	e5d33001 	ldrb	r3, [r3, #1]
        2fc770:	e3330021 	teq	r3, #33	; 0x21
        2fc774:	03320010 	teqeq	r2, #16	; 0x10
        2fc778:	11a0f00e 	movne	pc, lr
        2fc77c:	e5d12001 	ldrb	r2, [r1, #1]
        2fc780:	e332000b 	teq	r2, #11	; 0xb
        2fc784:	0a00000c 	beq	2fc7bc <make_CDL_in_O_GU_f__FP9SPEC_TYPET1Uc+0x58>
        2fc788:	e3320007 	teq	r2, #7	; 0x7
        2fc78c:	05d12000 	ldreqb	r2, [r1]
        2fc790:	03320020 	teqeq	r2, #32	; 0x20
        2fc794:	11a0f00e 	movne	pc, lr
        2fc798:	e5903006 	ldr	r3, [r0, #6]
        2fc79c:	e1a03843 	mov	r3, r3, asr #16
        2fc7a0:	e5912004 	ldr	r2, [r1, #4]
        2fc7a4:	e1530842 	cmp	r3, r2, asr #16
        2fc7a8:	a5912006 	ldrge	r2, [r1, #6]
        2fc7ac:	a1a02842 	movge	r2, r2, asr #16
        2fc7b0:	a5900004 	ldrge	r0, [r0, #4]
        2fc7b4:	a1520840 	cmpge	r2, r0, asr #16
        2fc7b8:	b1a0f00e 	movlt	pc, lr
        2fc7bc:	e3a0001b 	mov	r0, #27	; 0x1b
        2fc7c0:	e5c10001 	strb	r0, [r1, #1]
        2fc7c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MidPointHeight(SPEC_TYPE *, low_type *)
 * Address: 00306f00
 */
MidPointHeight(SPEC_TYPE *, low_type *) {
    /*
        306f00:	e5902004 	ldr	r2, [r0, #4]
        306f04:	e1a02842 	mov	r2, r2, asr #16
        306f08:	e5900006 	ldr	r0, [r0, #6]
        306f0c:	e0820840 	add	r0, r2, r0, asr #16
        306f10:	e1a000c0 	mov	r0, r0, asr #1
        306f14:	e5912038 	ldr	r2, [r1, #56]
        306f18:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        306f1c:	e1a00840 	mov	r0, r0, asr #16
        306f20:	ea604f80 	b	1b1ad28 <$HeightInLine(short, low_type *)>
    */
}

/**
 * Symbol: MaxPointsGrown(short)
 * Address: 00307f50
 */
MaxPointsGrown(short) {
    /*
        307f50:	e2800001 	add	r0, r0, #1	; 0x1
        307f54:	e1a00800 	mov	r0, r0, lsl #16
        307f58:	e1a00840 	mov	r0, r0, asr #16
        307f5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Move2ndAfter1st__FP9SPEC_TYPET1
 * Address: 0030a7e4
 */
void globals::Move2ndAfter1st() {
    /*
        30a7e4:	e1a0c00d 	mov	ip, sp
        30a7e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30a7ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        30a7f0:	e1a05000 	mov	r5, r0
        30a7f4:	e1a04001 	mov	r4, r1
        30a7f8:	e1a00001 	mov	r0, r1
        30a7fc:	eb603d2d 	bl	1b19cb8 <$DelFromSPECLList(SPEC_TYPE *)>
        30a800:	e1a01004 	mov	r1, r4
        30a804:	e1a00005 	mov	r0, r5
        30a808:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        30a80c:	ea60414b 	b	1b1ad40 <$Insert2ndAfter1st__FP9SPEC_TYPET1>
    */
}

/**
 * Symbol: MoveCrossing2ndAfter1st__FP9SPEC_TYPET1
 * Address: 0030a810
 */
void globals::MoveCrossing2ndAfter1st() {
    /*
        30a810:	e1a0c00d 	mov	ip, sp
        30a814:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30a818:	e24cb004 	sub	fp, ip, #4	; 0x4
        30a81c:	e1a05000 	mov	r5, r0
        30a820:	e1a04001 	mov	r4, r1
        30a824:	e1a00001 	mov	r0, r1
        30a828:	eb603d1f 	bl	1b19cac <$DelCrossingFromSPECLList(SPEC_TYPE *)>
        30a82c:	e1a01004 	mov	r1, r4
        30a830:	e1a00005 	mov	r0, r5
        30a834:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        30a838:	ea604142 	b	1b1ad48 <$InsertCrossing2ndAfter1st__FP9SPEC_TYPET1>
    */
}

/**
 * Symbol: Modifiers(unsigned char)
 * Address: 0030bcd0
 */
Modifiers(unsigned char) {
    /*
        30bcd0:	e31000ff 	tst	r0, #255	; 0xff
        30bcd4:	059f0018 	ldreq	r0, [pc, #18]	; 30bcf4 <Modifiers(unsigned char)+0x24>
        30bcd8:	159f0018 	ldrne	r0, [pc, #18]	; 30bcf8 <Modifiers(unsigned char)+0x28>
        30bcdc:	e5d02007 	ldrb	r2, [r0, #7]
        30bce0:	e3a0101f 	mov	r1, #31	; 0x1f
        30bce4:	e0011082 	and	r1, r1, r2, lsl #1
        30bce8:	e5d00006 	ldrb	r0, [r0, #6]
        30bcec:	e18103c0 	orr	r0, r1, r0, asr #7
        30bcf0:	e1a0f00e 	mov	pc, lr
        30bcf4:	0c1054bc 	ldceq	4, cr5, [r0], -#752
        30bcf8:	0c1054e4 	ldceq	4, cr5, [r0], -#912
    */
}

/**
 * Symbol: MountStore(TStore *, SPSSStoreInfo *)
 * Address: 0030e658
 */
MountStore(TStore *, SPSSStoreInfo *) {
    /*
        30e658:	e1a0c00d 	mov	ip, sp
        30e65c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        30e660:	e24cb004 	sub	fp, ip, #4	; 0x4
        30e664:	e1a05000 	mov	r5, r0
        30e668:	e1a04001 	mov	r4, r1
        30e66c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        30e670:	e1a0100d 	mov	r1, sp
        30e674:	e1a00004 	mov	r0, r4
        30e678:	eb5ff7eb 	bl	1b0c62c <$InitializeCardStore(SPSSStoreInfo *, unsigned char *)>
        30e67c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30e680:	e3a07000 	mov	r7, #0	; 0x0
        30e684:	e1a0100d 	mov	r1, sp
        30e688:	e1a00005 	mov	r0, r5
        30e68c:	eb5fc21d 	bl	1afef08 <TStore::$IsReadOnly(unsigned char *)>
        30e690:	e1a06000 	mov	r6, r0
        30e694:	e5940030 	ldr	r0, [r4, #48]
        30e698:	e59fc0c8 	ldr	ip, [pc, #c8]	; 30e768 <MountStore(TStore *, SPSSStoreInfo *)+0x110>
        30e69c:	e130000c 	teq	r0, ip
        30e6a0:	1a000006 	bne	30e6c0 <MountStore(TStore *, SPSSStoreInfo *)+0x68>
        30e6a4:	e594002c 	ldr	r0, [r4, #44]
        30e6a8:	e3300000 	teq	r0, #0	; 0x0
        30e6ac:	0a000003 	beq	30e6c0 <MountStore(TStore *, SPSSStoreInfo *)+0x68>
        30e6b0:	eb01dfab 	bl	386564 <TFlash::GetAttributes(void)>
        30e6b4:	e3100080 	tst	r0, #128	; 0x80
        30e6b8:	13a00001 	movne	r0, #1	; 0x1
        30e6bc:	1a000000 	bne	30e6c4 <MountStore(TStore *, SPSSStoreInfo *)+0x6c>
        30e6c0:	e3a00000 	mov	r0, #0	; 0x0
        30e6c4:	e20090ff 	and	r9, r0, #255	; 0xff
        30e6c8:	e59f809c 	ldr	r8, [pc, #9c]	; 30e76c <MountStore(TStore *, SPSSStoreInfo *)+0x114>
        30e6cc:	e3360000 	teq	r6, #0	; 0x0
        30e6d0:	1a00001d 	bne	30e74c <MountStore(TStore *, SPSSStoreInfo *)+0xf4>
        30e6d4:	e5dd0004 	ldrb	r0, [sp, #4]
        30e6d8:	e3300000 	teq	r0, #0	; 0x0
        30e6dc:	0a000027 	beq	30e780 <MountStore(TStore *, SPSSStoreInfo *)+0x128>
        30e6e0:	e5dd0000 	ldrb	r0, [sp]
        30e6e4:	e3300000 	teq	r0, #0	; 0x0
        30e6e8:	1a000048 	bne	30e810 <MountStore(TStore *, SPSSStoreInfo *)+0x1b8>
        30e6ec:	e5941018 	ldr	r1, [r4, #24]
        30e6f0:	e59f0078 	ldr	r0, [pc, #78]	; 30e770 <MountStore(TStore *, SPSSStoreInfo *)+0x118>
        30e6f4:	eb5efbe9 	bl	1acd6a0 <$CardEventPrompt(RefVar const &, unsigned long)>
        30e6f8:	eb62ce93 	bl	1bc214c <$AllocateRefHandle(long)>
        30e6fc:	e1a0a000 	mov	sl, r0
        30e700:	e59f006c 	ldr	r0, [pc, #6c]	; 30e774 <MountStore(TStore *, SPSSStoreInfo *)+0x11c>
        30e704:	e5900000 	ldr	r0, [r0]
        30e708:	e5901000 	ldr	r1, [r0]
        30e70c:	e59a0000 	ldr	r0, [sl]
        30e710:	eb62d6c6 	bl	1bc4230 <$EQRef__FlT1>
        30e714:	e3300000 	teq	r0, #0	; 0x0
        30e718:	11a0000a 	movne	r0, sl
        30e71c:	1a000034 	bne	30e7f4 <MountStore(TStore *, SPSSStoreInfo *)+0x19c>
        30e720:	e59a0000 	ldr	r0, [sl]
        30e724:	e2500002 	subs	r0, r0, #2	; 0x2
        30e728:	13a00001 	movne	r0, #1	; 0x1
        30e72c:	e20070ff 	and	r7, r0, #255	; 0xff
        30e730:	e1a0000a 	mov	r0, sl
        30e734:	eb62d2a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30e738:	e3370000 	teq	r7, #0	; 0x0
        30e73c:	0a000033 	beq	30e810 <MountStore(TStore *, SPSSStoreInfo *)+0x1b8>
        30e740:	e1a00005 	mov	r0, r5
        30e744:	eb5fad4e 	bl	1af9c84 <TStore::$Format(void)>
        30e748:	e1a06000 	mov	r6, r0
        30e74c:	e3360000 	teq	r6, #0	; 0x0
        30e750:	0a00002e 	beq	30e810 <MountStore(TStore *, SPSSStoreInfo *)+0x1b8>
        30e754:	e1a02006 	mov	r2, r6
        30e758:	e1a00008 	mov	r0, r8
        30e75c:	e5b41018 	ldr	r1, [r4, #24]!
        30e760:	ebfff702 	bl	30c370 <CardEventPrompt(RefVar const &, unsigned long, long)>
        30e764:	ea0000fa 	b	30eb54 <MountStore(TStore *, SPSSStoreInfo *)+0x4fc>
        30e768:	666c7368 	strvsbt	r7, [ip], -r8, ror #6
        30e76c:	006838b8 	streqh	r3, [r8], -#136
        30e770:	00682e98 	streqb	r2, [r8], -#232
        30e774:	00682338 	rsbeq	r2, r8, r8, lsr r3
        30e778:	e3a00000 	mov	r0, #0	; 0x0
        30e77c:	ea0000f5 	b	30eb58 <MountStore(TStore *, SPSSStoreInfo *)+0x500>
        30e780:	e3390000 	teq	r9, #0	; 0x0
        30e784:	15b41018 	ldrne	r1, [r4, #24]!
        30e788:	159f001c 	ldrne	r0, [pc, #1c]	; 30e7ac <MountStore(TStore *, SPSSStoreInfo *)+0x154>
        30e78c:	1a000004 	bne	30e7a4 <MountStore(TStore *, SPSSStoreInfo *)+0x14c>
        30e790:	e5dd0000 	ldrb	r0, [sp]
        30e794:	e3300000 	teq	r0, #0	; 0x0
        30e798:	0a000005 	beq	30e7b4 <MountStore(TStore *, SPSSStoreInfo *)+0x15c>
        30e79c:	e5b41018 	ldr	r1, [r4, #24]!
        30e7a0:	e59f0008 	ldr	r0, [pc, #8]	; 30e7b0 <MountStore(TStore *, SPSSStoreInfo *)+0x158>
        30e7a4:	eb5efbbd 	bl	1acd6a0 <$CardEventPrompt(RefVar const &, unsigned long)>
        30e7a8:	eafffff2 	b	30e778 <MountStore(TStore *, SPSSStoreInfo *)+0x120>
        30e7ac:	00682e88 	rsbeq	r2, r8, r8, lsl #29
        30e7b0:	00682e90 	streqb	r2, [r8], -#224
        30e7b4:	e5941018 	ldr	r1, [r4, #24]
        30e7b8:	e59f003c 	ldr	r0, [pc, #3c]	; 30e7fc <MountStore(TStore *, SPSSStoreInfo *)+0x1a4>
        30e7bc:	eb5efbb7 	bl	1acd6a0 <$CardEventPrompt(RefVar const &, unsigned long)>
        30e7c0:	eb62ce61 	bl	1bc214c <$AllocateRefHandle(long)>
        30e7c4:	e1a06000 	mov	r6, r0
        30e7c8:	e51f005c 	ldr	r0, [pc, #ffffffa4]	; 30e774 <MountStore(TStore *, SPSSStoreInfo *)+0x11c>
        30e7cc:	e5900000 	ldr	r0, [r0]
        30e7d0:	e5901000 	ldr	r1, [r0]
        30e7d4:	e5960000 	ldr	r0, [r6]
        30e7d8:	eb62d694 	bl	1bc4230 <$EQRef__FlT1>
        30e7dc:	e3300000 	teq	r0, #0	; 0x0
        30e7e0:	1a000002 	bne	30e7f0 <MountStore(TStore *, SPSSStoreInfo *)+0x198>
        30e7e4:	e5960000 	ldr	r0, [r6]
        30e7e8:	e3300002 	teq	r0, #2	; 0x2
        30e7ec:	1a000003 	bne	30e800 <MountStore(TStore *, SPSSStoreInfo *)+0x1a8>
        30e7f0:	e1a00006 	mov	r0, r6
        30e7f4:	eb62d270 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30e7f8:	eaffffde 	b	30e778 <MountStore(TStore *, SPSSStoreInfo *)+0x120>
        30e7fc:	00682e78 	rsbeq	r2, r8, r8, ror lr
        30e800:	e3a07001 	mov	r7, #1	; 0x1
        30e804:	e1a00006 	mov	r0, r6
        30e808:	eb62d26b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30e80c:	eaffffcb 	b	30e740 <MountStore(TStore *, SPSSStoreInfo *)+0xe8>
        30e810:	e24dd004 	sub	sp, sp, #4	; 0x4
        30e814:	e3a00002 	mov	r0, #2	; 0x2
        30e818:	eb62ce4b 	bl	1bc214c <$AllocateRefHandle(long)>
        30e81c:	e58d0000 	str	r0, [sp]
        30e820:	e1a0100d 	mov	r1, sp
        30e824:	e1a00005 	mov	r0, r5
        30e828:	eb5cfbad 	bl	1a4d6e4 <$CheckStorePassword(TStore *, RefVar const &)>
        30e82c:	e3300000 	teq	r0, #0	; 0x0
        30e830:	13a0a000 	movne	sl, #0	; 0x0
        30e834:	03a0a001 	moveq	sl, #1	; 0x1
        30e838:	e59d0000 	ldr	r0, [sp]
        30e83c:	eb62d25e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30e840:	e33a0000 	teq	sl, #0	; 0x0
        30e844:	0a00001b 	beq	30e8b8 <MountStore(TStore *, SPSSStoreInfo *)+0x260>
        30e848:	e24dd004 	sub	sp, sp, #4	; 0x4
        30e84c:	e5941018 	ldr	r1, [r4, #24]
        30e850:	e59f004c 	ldr	r0, [pc, #4c]	; 30e8a4 <MountStore(TStore *, SPSSStoreInfo *)+0x24c>
        30e854:	eb5efb91 	bl	1acd6a0 <$CardEventPrompt(RefVar const &, unsigned long)>
        30e858:	eb62ce3b 	bl	1bc214c <$AllocateRefHandle(long)>
        30e85c:	e58d0000 	str	r0, [sp]
        30e860:	e5900000 	ldr	r0, [r0]
        30e864:	e3300002 	teq	r0, #2	; 0x2
        30e868:	0a000007 	beq	30e88c <MountStore(TStore *, SPSSStoreInfo *)+0x234>
        30e86c:	e1a0100d 	mov	r1, sp
        30e870:	e1a00005 	mov	r0, r5
        30e874:	eb5cfb9a 	bl	1a4d6e4 <$CheckStorePassword(TStore *, RefVar const &)>
        30e878:	e3300000 	teq	r0, #0	; 0x0
        30e87c:	1a00000a 	bne	30e8ac <MountStore(TStore *, SPSSStoreInfo *)+0x254>
        30e880:	e5b41018 	ldr	r1, [r4, #24]!
        30e884:	e59f001c 	ldr	r0, [pc, #1c]	; 30e8a8 <MountStore(TStore *, SPSSStoreInfo *)+0x250>
        30e888:	eb5efb84 	bl	1acd6a0 <$CardEventPrompt(RefVar const &, unsigned long)>
        30e88c:	e3a04fa5 	mov	r4, #660	; 0x294
        30e890:	e2444b0b 	sub	r4, r4, #11264	; 0x2c00
        30e894:	e59d0000 	ldr	r0, [sp]
        30e898:	eb62d247 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30e89c:	e1a00004 	mov	r0, r4
        30e8a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        30e8a4:	006823c8 	rsbeq	r2, r8, r8, asr #7
        30e8a8:	00681fc0 	rsbeq	r1, r8, r0, asr #31
        30e8ac:	e59d0000 	ldr	r0, [sp]
        30e8b0:	eb62d241 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30e8b4:	e28dd004 	add	sp, sp, #4	; 0x4
        30e8b8:	e3390000 	teq	r9, #0	; 0x0
        30e8bc:	0a000011 	beq	30e908 <MountStore(TStore *, SPSSStoreInfo *)+0x2b0>
        30e8c0:	e5941018 	ldr	r1, [r4, #24]
        30e8c4:	e59f0034 	ldr	r0, [pc, #34]	; 30e900 <MountStore(TStore *, SPSSStoreInfo *)+0x2a8>
        30e8c8:	eb5efb74 	bl	1acd6a0 <$CardEventPrompt(RefVar const &, unsigned long)>
        30e8cc:	eb62ce1e 	bl	1bc214c <$AllocateRefHandle(long)>
        30e8d0:	e1a09000 	mov	r9, r0
        30e8d4:	e51f0168 	ldr	r0, [pc, #fffffe98]	; 30e774 <MountStore(TStore *, SPSSStoreInfo *)+0x11c>
        30e8d8:	e5900000 	ldr	r0, [r0]
        30e8dc:	e5901000 	ldr	r1, [r0]
        30e8e0:	e5990000 	ldr	r0, [r9]
        30e8e4:	eb62d651 	bl	1bc4230 <$EQRef__FlT1>
        30e8e8:	e3300000 	teq	r0, #0	; 0x0
        30e8ec:	e1a00009 	mov	r0, r9
        30e8f0:	0a000003 	beq	30e904 <MountStore(TStore *, SPSSStoreInfo *)+0x2ac>
        30e8f4:	eb62d230 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30e8f8:	e3a00000 	mov	r0, #0	; 0x0
        30e8fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        30e900:	00682df8 	streqd	r2, [r8], -#216
        30e904:	eb62d22c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30e908:	e24dd008 	sub	sp, sp, #8	; 0x8
        30e90c:	e3370000 	teq	r7, #0	; 0x0
        30e910:	13a00000 	movne	r0, #0	; 0x0
        30e914:	15cd0000 	strneb	r0, [sp]
        30e918:	1a000011 	bne	30e964 <MountStore(TStore *, SPSSStoreInfo *)+0x30c>
        30e91c:	e1a0300d 	mov	r3, sp
        30e920:	e28d2004 	add	r2, sp, #4	; 0x4
        30e924:	e1a00005 	mov	r0, r5
        30e928:	e5941018 	ldr	r1, [r4, #24]
        30e92c:	eb5efb66 	bl	1acd6cc <$CheckStoreVersion(TStore *, int, long *, unsigned char *)>
        30e930:	e1b09000 	movs	r9, r0
        30e934:	0a000005 	beq	30e950 <MountStore(TStore *, SPSSStoreInfo *)+0x2f8>
        30e938:	e1a02009 	mov	r2, r9
        30e93c:	e1a00008 	mov	r0, r8
        30e940:	e5b41018 	ldr	r1, [r4, #24]!
        30e944:	ebfff689 	bl	30c370 <CardEventPrompt(RefVar const &, unsigned long, long)>
        30e948:	e1a00009 	mov	r0, r9
        30e94c:	ea000003 	b	30e960 <MountStore(TStore *, SPSSStoreInfo *)+0x308>
        30e950:	e59d0004 	ldr	r0, [sp, #4]
        30e954:	e3300000 	teq	r0, #0	; 0x0
        30e958:	1a000001 	bne	30e964 <MountStore(TStore *, SPSSStoreInfo *)+0x30c>
        30e95c:	e3a00000 	mov	r0, #0	; 0x0
        30e960:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        30e964:	e3a00001 	mov	r0, #1	; 0x1
        30e968:	e56d0004 	strb	r0, [sp, -#4]!
        30e96c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30e970:	e3a00002 	mov	r0, #2	; 0x2
        30e974:	eb62cdf4 	bl	1bc214c <$AllocateRefHandle(long)>
        30e978:	e58d0000 	str	r0, [sp]
        30e97c:	e5dd0004 	ldrb	r0, [sp, #4]
        30e980:	e3300000 	teq	r0, #0	; 0x0
        30e984:	0a00006f 	beq	30eb48 <MountStore(TStore *, SPSSStoreInfo *)+0x4f0>
        30e988:	e24d006c 	sub	r0, sp, #108	; 0x6c
        30e98c:	e280a008 	add	sl, r0, #8	; 0x8
        30e990:	e59f10c0 	ldr	r1, [pc, #c0]	; 30ea58 <MountStore(TStore *, SPSSStoreInfo *)+0x400>
        30e994:	e58d1030 	str	r1, [sp, #48]
        30e998:	e59f10bc 	ldr	r1, [pc, #bc]	; 30ea5c <MountStore(TStore *, SPSSStoreInfo *)+0x404>
        30e99c:	e58d102c 	str	r1, [sp, #44]
        30e9a0:	e59f10b8 	ldr	r1, [pc, #b8]	; 30ea60 <MountStore(TStore *, SPSSStoreInfo *)+0x408>
        30e9a4:	e2800060 	add	r0, r0, #96	; 0x60
        30e9a8:	e58d0024 	str	r0, [sp, #36]
        30e9ac:	e58d1028 	str	r1, [sp, #40]
        30e9b0:	e59f00ac 	ldr	r0, [pc, #ac]	; 30ea64 <MountStore(TStore *, SPSSStoreInfo *)+0x40c>
        30e9b4:	e58d0020 	str	r0, [sp, #32]
        30e9b8:	e59f00a8 	ldr	r0, [pc, #a8]	; 30ea68 <MountStore(TStore *, SPSSStoreInfo *)+0x410>
        30e9bc:	e58d001c 	str	r0, [sp, #28]
        30e9c0:	e3a00000 	mov	r0, #0	; 0x0
        30e9c4:	e52d006c 	str	r0, [sp, -#108]!
        30e9c8:	e1a0000a 	mov	r0, sl
        30e9cc:	eb628fe8 	bl	1bb2974 <$setjmp>
        30e9d0:	e3300000 	teq	r0, #0	; 0x0
        30e9d4:	1a000024 	bne	30ea6c <MountStore(TStore *, SPSSStoreInfo *)+0x414>
        30e9d8:	e1a0000d 	mov	r0, sp
        30e9dc:	eb6345a6 	bl	1be007c <$AddExceptionHandler>
        30e9e0:	e1a00005 	mov	r0, r5
        30e9e4:	eb62de4a 	bl	1bc6314 <$RegisterTStore(TStore *)>
        30e9e8:	e59d106c 	ldr	r1, [sp, #108]
        30e9ec:	e3370000 	teq	r7, #0	; 0x0
        30e9f0:	e5810000 	str	r0, [r1]
        30e9f4:	159d109c 	ldrne	r1, [sp, #156]
        30e9f8:	128d006c 	addne	r0, sp, #108	; 0x6c
        30e9fc:	1b62e685 	blne	1bc8418 <$StoreSetName>
        30ea00:	e5dd0074 	ldrb	r0, [sp, #116]
        30ea04:	e3300000 	teq	r0, #0	; 0x0
        30ea08:	0a00000e 	beq	30ea48 <MountStore(TStore *, SPSSStoreInfo *)+0x3f0>
        30ea0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30ea10:	e59d007c 	ldr	r0, [sp, #124]
        30ea14:	e1a00100 	mov	r0, r0, lsl #2
        30ea18:	eb62cdcb 	bl	1bc214c <$AllocateRefHandle(long)>
        30ea1c:	e58d0000 	str	r0, [sp]
        30ea20:	e1a0200d 	mov	r2, sp
        30ea24:	e28d1070 	add	r1, sp, #112	; 0x70
        30ea28:	e59d009c 	ldr	r0, [sp, #156]
        30ea2c:	eb63c57c 	bl	1c00024 <$NSCallGlobalFn__FRC6RefVarN21>
        30ea30:	e59d0000 	ldr	r0, [sp]
        30ea34:	eb62d1e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30ea38:	e28d0070 	add	r0, sp, #112	; 0x70
        30ea3c:	e3a01004 	mov	r1, #4	; 0x4
        30ea40:	eb5cff2f 	bl	1a4e704 <$SetStoreVersion(RefVar const &, long)>
        30ea44:	e28dd004 	add	sp, sp, #4	; 0x4
        30ea48:	e28d106c 	add	r1, sp, #108	; 0x6c
        30ea4c:	e59d0094 	ldr	r0, [sp, #148]
        30ea50:	ebfffab8 	bl	30d538 <HandleCardStoreEvent__FRC6RefVarT1>
        30ea54:	ea000016 	b	30eab4 <MountStore(TStore *, SPSSStoreInfo *)+0x45c>
        30ea58:	00680350 	rsbeq	r0, r8, r0, asr r3
        30ea5c:	00682620 	rsbeq	r2, r8, r0, lsr #12
        30ea60:	00684878 	rsbeq	r4, r8, r8, ror r8
        30ea64:	00683630 	rsbeq	r3, r8, r0, lsr r6
        30ea68:	00682e80 	rsbeq	r2, r8, r0, lsl #29
        30ea6c:	e59d006c 	ldr	r0, [sp, #108]
        30ea70:	e5900000 	ldr	r0, [r0]
        30ea74:	e3300002 	teq	r0, #2	; 0x2
        30ea78:	0a000004 	beq	30ea90 <MountStore(TStore *, SPSSStoreInfo *)+0x438>
        30ea7c:	e1a00005 	mov	r0, r5
        30ea80:	eb62de28 	bl	1bc6328 <$RemoveTStore(TStore *)>
        30ea84:	e3a01002 	mov	r1, #2	; 0x2
        30ea88:	e59d006c 	ldr	r0, [sp, #108]
        30ea8c:	e5801000 	str	r1, [r0]
        30ea90:	e59d0090 	ldr	r0, [sp, #144]
        30ea94:	eb5f55f8 	bl	1ae427c <$GetExceptionErr(Exception *)>
        30ea98:	e1a02000 	mov	r2, r0
        30ea9c:	e5dd0080 	ldrb	r0, [sp, #128]
        30eaa0:	e3300000 	teq	r0, #0	; 0x0
        30eaa4:	e5941018 	ldr	r1, [r4, #24]
        30eaa8:	0a000004 	beq	30eac0 <MountStore(TStore *, SPSSStoreInfo *)+0x468>
        30eaac:	e59d008c 	ldr	r0, [sp, #140]
        30eab0:	ebfff62e 	bl	30c370 <CardEventPrompt(RefVar const &, unsigned long, long)>
        30eab4:	e3a00000 	mov	r0, #0	; 0x0
        30eab8:	e5cd0070 	strb	r0, [sp, #112]
        30eabc:	ea00001b 	b	30eb30 <MountStore(TStore *, SPSSStoreInfo *)+0x4d8>
        30eac0:	e59d0088 	ldr	r0, [sp, #136]
        30eac4:	ebfff629 	bl	30c370 <CardEventPrompt(RefVar const &, unsigned long, long)>
        30eac8:	eb62cd9f 	bl	1bc214c <$AllocateRefHandle(long)>
        30eacc:	e1a09000 	mov	r9, r0
        30ead0:	e5900000 	ldr	r0, [r0]
        30ead4:	e3300002 	teq	r0, #2	; 0x2
        30ead8:	0a000005 	beq	30eaf4 <MountStore(TStore *, SPSSStoreInfo *)+0x49c>
        30eadc:	e51f1370 	ldr	r1, [pc, #fffffc90]	; 30e774 <MountStore(TStore *, SPSSStoreInfo *)+0x11c>
        30eae0:	e5911000 	ldr	r1, [r1]
        30eae4:	e5911000 	ldr	r1, [r1]
        30eae8:	eb62d5d0 	bl	1bc4230 <$EQRef__FlT1>
        30eaec:	e3300000 	teq	r0, #0	; 0x0
        30eaf0:	0a000002 	beq	30eb00 <MountStore(TStore *, SPSSStoreInfo *)+0x4a8>
        30eaf4:	e3a00000 	mov	r0, #0	; 0x0
        30eaf8:	e5cd0070 	strb	r0, [sp, #112]
        30eafc:	ea000009 	b	30eb28 <MountStore(TStore *, SPSSStoreInfo *)+0x4d0>
        30eb00:	e3a07001 	mov	r7, #1	; 0x1
        30eb04:	e1a00005 	mov	r0, r5
        30eb08:	eb5fac5d 	bl	1af9c84 <TStore::$Format(void)>
        30eb0c:	e1b06000 	movs	r6, r0
        30eb10:	0a000004 	beq	30eb28 <MountStore(TStore *, SPSSStoreInfo *)+0x4d0>
        30eb14:	e1a02006 	mov	r2, r6
        30eb18:	e1a00008 	mov	r0, r8
        30eb1c:	e5941018 	ldr	r1, [r4, #24]
        30eb20:	ebfff612 	bl	30c370 <CardEventPrompt(RefVar const &, unsigned long, long)>
        30eb24:	eafffff2 	b	30eaf4 <MountStore(TStore *, SPSSStoreInfo *)+0x49c>
        30eb28:	e1a00009 	mov	r0, r9
        30eb2c:	eb62d1a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30eb30:	e1a0000d 	mov	r0, sp
        30eb34:	eb63495f 	bl	1be10b8 <$ExitHandler>
        30eb38:	e28dd06c 	add	sp, sp, #108	; 0x6c
        30eb3c:	e5dd0004 	ldrb	r0, [sp, #4]
        30eb40:	e3300000 	teq	r0, #0	; 0x0
        30eb44:	1affff9d 	bne	30e9c0 <MountStore(TStore *, SPSSStoreInfo *)+0x368>
        30eb48:	e59d0000 	ldr	r0, [sp]
        30eb4c:	eb62d19a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30eb50:	e28dd014 	add	sp, sp, #20	; 0x14
        30eb54:	e1a00006 	mov	r0, r6
        30eb58:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MatchKeyMessage(TView *, RefVar const &, unsigned long)
 * Address: 0030f7e0
 */
MatchKeyMessage(TView *, RefVar const &, unsigned long) {
    /*
        30f7e0:	e1a0c00d 	mov	ip, sp
        30f7e4:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        30f7e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        30f7ec:	e1a04000 	mov	r4, r0
        30f7f0:	e1a05002 	mov	r5, r2
        30f7f4:	e24dd014 	sub	sp, sp, #20	; 0x14
        30f7f8:	e3a07000 	mov	r7, #0	; 0x0
        30f7fc:	e3a00002 	mov	r0, #2	; 0x2
        30f800:	eb62ca51 	bl	1bc214c <$AllocateRefHandle(long)>
        30f804:	e58d0004 	str	r0, [sp, #4]
        30f808:	e3a00002 	mov	r0, #2	; 0x2
        30f80c:	eb62ca4e 	bl	1bc214c <$AllocateRefHandle(long)>
        30f810:	e58d0000 	str	r0, [sp]
        30f814:	e3a00002 	mov	r0, #2	; 0x2
        30f818:	eb62ca4b 	bl	1bc214c <$AllocateRefHandle(long)>
        30f81c:	e1a06000 	mov	r6, r0
        30f820:	e3a00002 	mov	r0, #2	; 0x2
        30f824:	eb62ca48 	bl	1bc214c <$AllocateRefHandle(long)>
        30f828:	e1a08000 	mov	r8, r0
        30f82c:	e3350002 	teq	r5, #2	; 0x2
        30f830:	1a000004 	bne	30f848 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x68>
        30f834:	e59f00fc 	ldr	r0, [pc, #fc]	; 30f938 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x158>
        30f838:	e3a01000 	mov	r1, #0	; 0x0
        30f83c:	eb62ca3d 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        30f840:	e59d1000 	ldr	r1, [sp]
        30f844:	e5810000 	str	r0, [r1]
        30f848:	e59f10ec 	ldr	r1, [pc, #ec]	; 30f93c <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x15c>
        30f84c:	e58d1010 	str	r1, [sp, #16]
        30f850:	e59f00e8 	ldr	r0, [pc, #e8]	; 30f940 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x160>
        30f854:	e58d000c 	str	r0, [sp, #12]
        30f858:	e59f10e4 	ldr	r1, [pc, #e4]	; 30f944 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x164>
        30f85c:	e58d1008 	str	r1, [sp, #8]
        30f860:	e24dd004 	sub	sp, sp, #4	; 0x4
        30f864:	e1a00004 	mov	r0, r4
        30f868:	e59d1014 	ldr	r1, [sp, #20]
        30f86c:	eb62eb35 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        30f870:	eb62ca35 	bl	1bc214c <$AllocateRefHandle(long)>
        30f874:	e58d0000 	str	r0, [sp]
        30f878:	e1a0000d 	mov	r0, sp
        30f87c:	eb639042 	bl	1bf398c <$IsArray(RefVar const &)>
        30f880:	e3300000 	teq	r0, #0	; 0x0
        30f884:	0a000037 	beq	30f968 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x188>
        30f888:	e59d0000 	ldr	r0, [sp]
        30f88c:	e5900000 	ldr	r0, [r0]
        30f890:	eb62d685 	bl	1bc52ac <$Length(long)>
        30f894:	e1a0a000 	mov	sl, r0
        30f898:	e3a09000 	mov	r9, #0	; 0x0
        30f89c:	e3500000 	cmp	r0, #0	; 0x0
        30f8a0:	9a000030 	bls	30f968 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x188>
        30f8a4:	e1a01009 	mov	r1, r9
        30f8a8:	e59d0000 	ldr	r0, [sp]
        30f8ac:	e5900000 	ldr	r0, [r0]
        30f8b0:	eb62d267 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        30f8b4:	e59d1008 	ldr	r1, [sp, #8]
        30f8b8:	e5810000 	str	r0, [r1]
        30f8bc:	e59f1084 	ldr	r1, [pc, #84]	; 30f948 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x168>
        30f8c0:	e5911000 	ldr	r1, [r1]
        30f8c4:	e5911000 	ldr	r1, [r1]
        30f8c8:	eb62d264 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        30f8cc:	e5880000 	str	r0, [r8]
        30f8d0:	e51b1030 	ldr	r1, [fp, -#48]
        30f8d4:	e5911000 	ldr	r1, [r1]
        30f8d8:	e5911000 	ldr	r1, [r1]
        30f8dc:	eb62d253 	bl	1bc4230 <$EQRef__FlT1>
        30f8e0:	e3300000 	teq	r0, #0	; 0x0
        30f8e4:	0a00001c 	beq	30f95c <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x17c>
        30f8e8:	e5960000 	ldr	r0, [r6]
        30f8ec:	e3300002 	teq	r0, #2	; 0x2
        30f8f0:	059d0008 	ldreq	r0, [sp, #8]
        30f8f4:	05900000 	ldreq	r0, [r0]
        30f8f8:	05860000 	streq	r0, [r6]
        30f8fc:	e28d0008 	add	r0, sp, #8	; 0x8
        30f900:	eb5f66e9 	bl	1ae94ac <$GetDisplayCmdChar(RefVar const &)>
        30f904:	e3350000 	teq	r5, #0	; 0x0
        30f908:	0a000004 	beq	30f920 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x140>
        30f90c:	e3350001 	teq	r5, #1	; 0x1
        30f910:	1a00000d 	bne	30f94c <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x16c>
        30f914:	eb5f66e3 	bl	1ae94a8 <$UserVisibleChar(unsigned short)>
        30f918:	e3300000 	teq	r0, #0	; 0x0
        30f91c:	0a00000e 	beq	30f95c <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x17c>
        30f920:	e59d0008 	ldr	r0, [sp, #8]
        30f924:	e5900000 	ldr	r0, [r0]
        30f928:	e59d1004 	ldr	r1, [sp, #4]
        30f92c:	e3a07001 	mov	r7, #1	; 0x1
        30f930:	e5810000 	str	r0, [r1]
        30f934:	ea00000b 	b	30f968 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x188>
        30f938:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        30f93c:	00685348 	rsbeq	r5, r8, r8, asr #6
        30f940:	0c101934 	ldceq	9, cr1, [r0], -#208
        30f944:	00685370 	rsbeq	r5, r8, r0, ror r3
        30f948:	006833b0 	streqh	r3, [r8], -#48
        30f94c:	e3350002 	teq	r5, #2	; 0x2
        30f950:	028d1008 	addeq	r1, sp, #8	; 0x8
        30f954:	028d0004 	addeq	r0, sp, #4	; 0x4
        30f958:	0b62c9f2 	bleq	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        30f95c:	e2899001 	add	r9, r9, #1	; 0x1
        30f960:	e159000a 	cmp	r9, sl
        30f964:	3affffce 	bcc	30f8a4 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0xc4>
        30f968:	e59d0010 	ldr	r0, [sp, #16]
        30f96c:	e5900000 	ldr	r0, [r0]
        30f970:	e1340000 	teq	r4, r0
        30f974:	03a07001 	moveq	r7, #1	; 0x1
        30f978:	0a000018 	beq	30f9e0 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x200>
        30f97c:	e3370000 	teq	r7, #0	; 0x0
        30f980:	1a000016 	bne	30f9e0 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x200>
        30f984:	e24dd004 	sub	sp, sp, #4	; 0x4
        30f988:	e1a00004 	mov	r0, r4
        30f98c:	e59d1010 	ldr	r1, [sp, #16]
        30f990:	eb62eaec 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
        30f994:	eb62c9ec 	bl	1bc214c <$AllocateRefHandle(long)>
        30f998:	e58d0000 	str	r0, [sp]
        30f99c:	e5900000 	ldr	r0, [r0]
        30f9a0:	e3300002 	teq	r0, #2	; 0x2
        30f9a4:	0594401c 	ldreq	r4, [r4, #28]
        30f9a8:	0a000009 	beq	30f9d4 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x1f4>
        30f9ac:	e59f1084 	ldr	r1, [pc, #84]	; 30fa38 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x258>
        30f9b0:	e5911000 	ldr	r1, [r1]
        30f9b4:	e5911000 	ldr	r1, [r1]
        30f9b8:	eb62d21c 	bl	1bc4230 <$EQRef__FlT1>
        30f9bc:	e3300000 	teq	r0, #0	; 0x0
        30f9c0:	13a07001 	movne	r7, #1	; 0x1
        30f9c4:	1a000002 	bne	30f9d4 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x1f4>
        30f9c8:	e1a0000d 	mov	r0, sp
        30f9cc:	eb62eae2 	bl	1bca55c <$GetView(RefVar const &)>
        30f9d0:	e1a04000 	mov	r4, r0
        30f9d4:	e59d0000 	ldr	r0, [sp]
        30f9d8:	eb62cdf7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30f9dc:	e28dd004 	add	sp, sp, #4	; 0x4
        30f9e0:	e59d0000 	ldr	r0, [sp]
        30f9e4:	eb62cdf4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30f9e8:	e28dd004 	add	sp, sp, #4	; 0x4
        30f9ec:	e3370000 	teq	r7, #0	; 0x0
        30f9f0:	0affff9a 	beq	30f860 <MatchKeyMessage(TView *, RefVar const &, unsigned long)+0x80>
        30f9f4:	e3350000 	teq	r5, #0	; 0x0
        30f9f8:	059d0000 	ldreq	r0, [sp]
        30f9fc:	05900000 	ldreq	r0, [r0]
        30fa00:	03300002 	teqeq	r0, #2	; 0x2
        30fa04:	159d0000 	ldrne	r0, [sp]
        30fa08:	15904000 	ldrne	r4, [r0]
        30fa0c:	05964000 	ldreq	r4, [r6]
        30fa10:	e1a00008 	mov	r0, r8
        30fa14:	eb62cde8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30fa18:	e1a00006 	mov	r0, r6
        30fa1c:	eb62cde6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30fa20:	e59d0000 	ldr	r0, [sp]
        30fa24:	eb62cde4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30fa28:	e59d0004 	ldr	r0, [sp, #4]
        30fa2c:	eb62cde2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30fa30:	e1a00004 	mov	r0, r4
        30fa34:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        30fa38:	00683a68 	rsbeq	r3, r8, r8, ror #20
    */
}

/**
 * Symbol: MoveBytes
 * Address: 00311100
 */
void globals::MoveBytes() {
    /*
        311100:	ea633793 	b	1bdef54 <$BlockMove>
    */
}

/**
 * Symbol: MaxHeapSize
 * Address: 00311364
 */
void globals::MaxHeapSize() {
    /*
        311364:	e1a0c00d 	mov	ip, sp
        311368:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        31136c:	e24cb004 	sub	fp, ip, #4	; 0x4
        311370:	e3300000 	teq	r0, #0	; 0x0
        311374:	0b633f59 	bleq	1be10e0 <$GetCurrentHeap>
        311378:	e5900028 	ldr	r0, [r0, #40]
        31137c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: MoveBits
 * Address: 0031183c
 */
void globals::MoveBits() {
    /*
        31183c:	e1a0c00d 	mov	ip, sp
        311840:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        311844:	e24cb004 	sub	fp, ip, #4	; 0x4
        311848:	e1a04002 	mov	r4, r2
        31184c:	e1a0c000 	mov	ip, r0
        311850:	e1a06001 	mov	r6, r1
        311854:	e59be004 	ldr	lr, [fp, #4]
        311858:	e33e0000 	teq	lr, #0	; 0x0
        31185c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        311860:	e3360000 	teq	r6, #0	; 0x0
        311864:	0a000003 	beq	311878 <MoveBits+0x3c>
        311868:	e08c11c6 	add	r1, ip, r6, asr #3
        31186c:	e3c1c003 	bic	ip, r1, #3	; 0x3
        311870:	e040000c 	sub	r0, r0, ip
        311874:	e0866180 	add	r6, r6, r0, lsl #3
        311878:	e3330000 	teq	r3, #0	; 0x0
        31187c:	0a000003 	beq	311890 <MoveBits+0x54>
        311880:	e08401c3 	add	r0, r4, r3, asr #3
        311884:	e3c04003 	bic	r4, r0, #3	; 0x3
        311888:	e0420004 	sub	r0, r2, r4
        31188c:	e0833180 	add	r3, r3, r0, lsl #3
        311890:	e13c0004 	teq	ip, r4
        311894:	01360003 	teqeq	r6, r3
        311898:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        31189c:	e3a02000 	mov	r2, #0	; 0x0
        3118a0:	e15c0004 	cmp	ip, r4
        3118a4:	8a000004 	bhi	3118bc <MoveBits+0x80>
        3118a8:	e28e001f 	add	r0, lr, #31	; 0x1f
        3118ac:	e1a002c0 	mov	r0, r0, asr #5
        3118b0:	e08c0100 	add	r0, ip, r0, lsl #2
        3118b4:	e1500004 	cmp	r0, r4
        3118b8:	ca000000 	bgt	3118c0 <MoveBits+0x84>
        3118bc:	e3a02001 	mov	r2, #1	; 0x1
        3118c0:	e3a08020 	mov	r8, #32	; 0x20
        3118c4:	e3330000 	teq	r3, #0	; 0x0
        3118c8:	0a0000a6 	beq	311b68 <MoveBits+0x32c>
        3118cc:	e0460003 	sub	r0, r6, r3
        3118d0:	e210001f 	ands	r0, r0, #31	; 0x1f
        3118d4:	1a000011 	bne	311920 <MoveBits+0xe4>
        3118d8:	e3e07000 	mvn	r7, #0	; 0x0
        3118dc:	e1a00337 	mov	r0, r7, lsr r3
        3118e0:	e1a0100e 	mov	r1, lr
        3118e4:	e0482003 	sub	r2, r8, r3
        3118e8:	e05e2002 	subs	r2, lr, r2
        3118ec:	5a000004 	bpl	311904 <MoveBits+0xc8>
        3118f0:	e0200130 	eor	r0, r0, r0, lsr r1
        3118f4:	e5941000 	ldr	r1, [r4]
        3118f8:	e1c11000 	bic	r1, r1, r0
        3118fc:	e59c2000 	ldr	r2, [ip]
        311900:	ea0000bc 	b	311bf8 <MoveBits+0x3bc>
        311904:	e1a07004 	mov	r7, r4
        311908:	e4942004 	ldr	r2, [r4], #4
        31190c:	e1c22000 	bic	r2, r2, r0
        311910:	e49c1004 	ldr	r1, [ip], #4
        311914:	e0010000 	and	r0, r1, r0
        311918:	e182a000 	orr	sl, r2, r0
        31191c:	ea0000ba 	b	311c0c <MoveBits+0x3d0>
        311920:	e0480000 	sub	r0, r8, r0
        311924:	e3e07000 	mvn	r7, #0	; 0x0
        311928:	e1a01037 	mov	r1, r7, lsr r0
        31192c:	e3320000 	teq	r2, #0	; 0x0
        311930:	0a000040 	beq	311a38 <MoveBits+0x1fc>
        311934:	e1a05337 	mov	r5, r7, lsr r3
        311938:	e49c2004 	ldr	r2, [ip], #4
        31193c:	e1a02072 	mov	r2, r2, ror r0
        311940:	e0489003 	sub	r9, r8, r3
        311944:	e159000e 	cmp	r9, lr
        311948:	c0255e35 	eorgt	r5, r5, r5, lsr lr
        31194c:	e1560003 	cmp	r6, r3
        311950:	da00000e 	ble	311990 <MoveBits+0x154>
        311954:	e0488006 	sub	r8, r8, r6
        311958:	e158000e 	cmp	r8, lr
        31195c:	aa00000b 	bge	311990 <MoveBits+0x154>
        311960:	e49c8004 	ldr	r8, [ip], #4
        311964:	e1a08078 	mov	r8, r8, ror r0
        311968:	e1c22001 	bic	r2, r2, r1
        31196c:	e008a001 	and	sl, r8, r1
        311970:	e182200a 	orr	r2, r2, sl
        311974:	e002a005 	and	sl, r2, r5
        311978:	e5942000 	ldr	r2, [r4]
        31197c:	e1c22005 	bic	r2, r2, r5
        311980:	e18a2002 	orr	r2, sl, r2
        311984:	e5842000 	str	r2, [r4]
        311988:	e1a02008 	mov	r2, r8
        31198c:	ea000004 	b	3119a4 <MoveBits+0x168>
        311990:	e5948000 	ldr	r8, [r4]
        311994:	e1c88005 	bic	r8, r8, r5
        311998:	e0025005 	and	r5, r2, r5
        31199c:	e1885005 	orr	r5, r8, r5
        3119a0:	e5845000 	str	r5, [r4]
        3119a4:	e04ee009 	sub	lr, lr, r9
        3119a8:	e35e0000 	cmp	lr, #0	; 0x0
        3119ac:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3119b0:	e2844004 	add	r4, r4, #4	; 0x4
        3119b4:	e25ee020 	subs	lr, lr, #32	; 0x20
        3119b8:	e1e08001 	mvn	r8, r1
        3119bc:	4a000008 	bmi	3119e4 <MoveBits+0x1a8>
        3119c0:	e49c5004 	ldr	r5, [ip], #4
        3119c4:	e1a05075 	mov	r5, r5, ror r0
        3119c8:	e0022008 	and	r2, r2, r8
        3119cc:	e0059001 	and	r9, r5, r1
        3119d0:	e1822009 	orr	r2, r2, r9
        3119d4:	e4842004 	str	r2, [r4], #4
        3119d8:	e1a02005 	mov	r2, r5
        3119dc:	e25ee020 	subs	lr, lr, #32	; 0x20
        3119e0:	5afffff6 	bpl	3119c0 <MoveBits+0x184>
        3119e4:	e37e0020 	cmn	lr, #32	; 0x20
        3119e8:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3119ec:	e28e5020 	add	r5, lr, #32	; 0x20
        3119f0:	e1a05537 	mov	r5, r7, lsr r5
        3119f4:	e1560003 	cmp	r6, r3
        3119f8:	c2663000 	rsbgt	r3, r6, #0	; 0x0
        3119fc:	c15e0003 	cmpgt	lr, r3
        311a00:	da000007 	ble	311a24 <MoveBits+0x1e8>
        311a04:	e1c22001 	bic	r2, r2, r1
        311a08:	e59c3000 	ldr	r3, [ip]
        311a0c:	e0010073 	and	r0, r1, r3, ror r0
        311a10:	e1821000 	orr	r1, r2, r0
        311a14:	e1c11005 	bic	r1, r1, r5
        311a18:	e5940000 	ldr	r0, [r4]
        311a1c:	e0000005 	and	r0, r0, r5
        311a20:	ea000075 	b	311bfc <MoveBits+0x3c0>
        311a24:	e5940000 	ldr	r0, [r4]
        311a28:	e0000005 	and	r0, r0, r5
        311a2c:	e1c21005 	bic	r1, r2, r5
        311a30:	e1800001 	orr	r0, r0, r1
        311a34:	ea000071 	b	311c00 <MoveBits+0x3c4>
        311a38:	e086600e 	add	r6, r6, lr
        311a3c:	e3560020 	cmp	r6, #32	; 0x20
        311a40:	a1a022c6 	movge	r2, r6, asr #5
        311a44:	a08cc102 	addge	ip, ip, r2, lsl #2
        311a48:	a206601f 	andge	r6, r6, #31	; 0x1f
        311a4c:	e083300e 	add	r3, r3, lr
        311a50:	e3530020 	cmp	r3, #32	; 0x20
        311a54:	a1a022c3 	movge	r2, r3, asr #5
        311a58:	a0844102 	addge	r4, r4, r2, lsl #2
        311a5c:	a203301f 	andge	r3, r3, #31	; 0x1f
        311a60:	e0489003 	sub	r9, r8, r3
        311a64:	e1a05937 	mov	r5, r7, lsr r9
        311a68:	e59c2000 	ldr	r2, [ip]
        311a6c:	e1a02072 	mov	r2, r2, ror r0
        311a70:	e15e0003 	cmp	lr, r3
        311a74:	b043a00e 	sublt	sl, r3, lr
        311a78:	b0255a35 	eorlt	r5, r5, r5, lsr sl
        311a7c:	e1590006 	cmp	r9, r6
        311a80:	c15e0006 	cmpgt	lr, r6
        311a84:	da00000a 	ble	311ab4 <MoveBits+0x278>
        311a88:	e1a09002 	mov	r9, r2
        311a8c:	e53c2004 	ldr	r2, [ip, -#4]!
        311a90:	e1a02072 	mov	r2, r2, ror r0
        311a94:	e1c2a001 	bic	sl, r2, r1
        311a98:	e0099001 	and	r9, r9, r1
        311a9c:	e18a9009 	orr	r9, sl, r9
        311aa0:	e009a005 	and	sl, r9, r5
        311aa4:	e5949000 	ldr	r9, [r4]
        311aa8:	e1c95005 	bic	r5, r9, r5
        311aac:	e18a5005 	orr	r5, sl, r5
        311ab0:	ea000003 	b	311ac4 <MoveBits+0x288>
        311ab4:	e594a000 	ldr	sl, [r4]
        311ab8:	e1ca9005 	bic	r9, sl, r5
        311abc:	e0025005 	and	r5, r2, r5
        311ac0:	e1895005 	orr	r5, r9, r5
        311ac4:	e04ee003 	sub	lr, lr, r3
        311ac8:	e35e0000 	cmp	lr, #0	; 0x0
        311acc:	e5845000 	str	r5, [r4]
        311ad0:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        311ad4:	e2443004 	sub	r3, r4, #4	; 0x4
        311ad8:	e25ee020 	subs	lr, lr, #32	; 0x20
        311adc:	e1e05001 	mvn	r5, r1
        311ae0:	4a000009 	bmi	311b0c <MoveBits+0x2d0>
        311ae4:	e1a04002 	mov	r4, r2
        311ae8:	e53c2004 	ldr	r2, [ip, -#4]!
        311aec:	e0489002 	sub	r9, r8, r2
        311af0:	e1a04974 	mov	r4, r4, ror r9
        311af4:	e0029005 	and	r9, r2, r5
        311af8:	e0044001 	and	r4, r4, r1
        311afc:	e1894004 	orr	r4, r9, r4
        311b00:	e25ee020 	subs	lr, lr, #32	; 0x20
        311b04:	e4034004 	str	r4, [r3], -#4
        311b08:	5afffff5 	bpl	311ae4 <MoveBits+0x2a8>
        311b0c:	e37e0020 	cmn	lr, #32	; 0x20
        311b10:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        311b14:	e26e4000 	rsb	r4, lr, #0	; 0x0
        311b18:	e1a04437 	mov	r4, r7, lsr r4
        311b1c:	e048e00e 	sub	lr, r8, lr
        311b20:	e15e0006 	cmp	lr, r6
        311b24:	da000009 	ble	311b50 <MoveBits+0x314>
        311b28:	e51cc004 	ldr	ip, [ip, -#4]
        311b2c:	e1a0c07c 	mov	ip, ip, ror r0
        311b30:	e1cc0001 	bic	r0, ip, r1
        311b34:	e0021001 	and	r1, r2, r1
        311b38:	e1800001 	orr	r0, r0, r1
        311b3c:	e0001004 	and	r1, r0, r4
        311b40:	e5930000 	ldr	r0, [r3]
        311b44:	e1c00004 	bic	r0, r0, r4
        311b48:	e1810000 	orr	r0, r1, r0
        311b4c:	ea000003 	b	311b60 <MoveBits+0x324>
        311b50:	e5931000 	ldr	r1, [r3]
        311b54:	e1c10004 	bic	r0, r1, r4
        311b58:	e0021004 	and	r1, r2, r4
        311b5c:	e1800001 	orr	r0, r0, r1
        311b60:	e5830000 	str	r0, [r3]
        311b64:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        311b68:	e1a0500e 	mov	r5, lr
        311b6c:	e3360000 	teq	r6, #0	; 0x0
        311b70:	0a000024 	beq	311c08 <MoveBits+0x3cc>
        311b74:	e3320000 	teq	r2, #0	; 0x0
        311b78:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        311b7c:	e0480006 	sub	r0, r8, r6
        311b80:	e3e07000 	mvn	r7, #0	; 0x0
        311b84:	e1a01037 	mov	r1, r7, lsr r0
        311b88:	e49c3004 	ldr	r3, [ip], #4
        311b8c:	e1a02073 	mov	r2, r3, ror r0
        311b90:	e2553020 	subs	r3, r5, #32	; 0x20
        311b94:	e1e0e001 	mvn	lr, r1
        311b98:	4a000008 	bmi	311bc0 <MoveBits+0x384>
        311b9c:	e49c5004 	ldr	r5, [ip], #4
        311ba0:	e1a05075 	mov	r5, r5, ror r0
        311ba4:	e002200e 	and	r2, r2, lr
        311ba8:	e0058001 	and	r8, r5, r1
        311bac:	e1822008 	orr	r2, r2, r8
        311bb0:	e4842004 	str	r2, [r4], #4
        311bb4:	e1a02005 	mov	r2, r5
        311bb8:	e2533020 	subs	r3, r3, #32	; 0x20
        311bbc:	5afffff6 	bpl	311b9c <MoveBits+0x360>
        311bc0:	e3730020 	cmn	r3, #32	; 0x20
        311bc4:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        311bc8:	e266e000 	rsb	lr, r6, #0	; 0x0
        311bcc:	e153000e 	cmp	r3, lr
        311bd0:	da000003 	ble	311be4 <MoveBits+0x3a8>
        311bd4:	e59cc000 	ldr	ip, [ip]
        311bd8:	e1c22001 	bic	r2, r2, r1
        311bdc:	e001007c 	and	r0, r1, ip, ror r0
        311be0:	e1822000 	orr	r2, r2, r0
        311be4:	e2830020 	add	r0, r3, #32	; 0x20
        311be8:	e1a00037 	mov	r0, r7, lsr r0
        311bec:	e5941000 	ldr	r1, [r4]
        311bf0:	e0011000 	and	r1, r1, r0
        311bf4:	e1e00000 	mvn	r0, r0
        311bf8:	e0020000 	and	r0, r2, r0
        311bfc:	e1810000 	orr	r0, r1, r0
        311c00:	e5840000 	str	r0, [r4]
        311c04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        311c08:	e3a07000 	mov	r7, #0	; 0x0
        311c0c:	e1b002c5 	movs	r0, r5, asr #5
        311c10:	0a000009 	beq	311c3c <MoveBits+0x400>
        311c14:	e1a06100 	mov	r6, r0, lsl #2
        311c18:	e79c9006 	ldr	r9, [ip, r6]
        311c1c:	e7948006 	ldr	r8, [r4, r6]
        311c20:	e1a02006 	mov	r2, r6
        311c24:	e1a01004 	mov	r1, r4
        311c28:	e1a0000c 	mov	r0, ip
        311c2c:	eb6338e4 	bl	1bdffc4 <$MoveBytes>
        311c30:	e0844006 	add	r4, r4, r6
        311c34:	e205501f 	and	r5, r5, #31	; 0x1f
        311c38:	ea000001 	b	311c44 <MoveBits+0x408>
        311c3c:	e59c9000 	ldr	r9, [ip]
        311c40:	e5948000 	ldr	r8, [r4]
        311c44:	e3350000 	teq	r5, #0	; 0x0
        311c48:	0a000005 	beq	311c64 <MoveBits+0x428>
        311c4c:	e3e00000 	mvn	r0, #0	; 0x0
        311c50:	e1a00530 	mov	r0, r0, lsr r5
        311c54:	e0081000 	and	r1, r8, r0
        311c58:	e1c90000 	bic	r0, r9, r0
        311c5c:	e1810000 	orr	r0, r1, r0
        311c60:	e5840000 	str	r0, [r4]
        311c64:	e3370000 	teq	r7, #0	; 0x0
        311c68:	1587a000 	strne	sl, [r7]
        311c6c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MoveFreeBlock
 * Address: 003121ac
 */
void globals::MoveFreeBlock() {
    /*
        3121ac:	e1a0c00d 	mov	ip, sp
        3121b0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3121b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3121b8:	e1a04000 	mov	r4, r0
        3121bc:	e1a05001 	mov	r5, r1
        3121c0:	e5909008 	ldr	r9, [r0, #8]
        3121c4:	e8900401 	ldmia	r0, {r0, sl}
        3121c8:	e0408001 	sub	r8, r0, r1
        3121cc:	eb633bc3 	bl	1be10e0 <$GetCurrentHeap>
        3121d0:	e1a07000 	mov	r7, r0
        3121d4:	e5900048 	ldr	r0, [r0, #72]
        3121d8:	e1300004 	teq	r0, r4
        3121dc:	13a00000 	movne	r0, #0	; 0x0
        3121e0:	03a00001 	moveq	r0, #1	; 0x1
        3121e4:	e20060ff 	and	r6, r0, #255	; 0xff
        3121e8:	e7a48005 	str	r8, [r4, r5]!
        3121ec:	e1a0200a 	mov	r2, sl
        3121f0:	e1a01009 	mov	r1, r9
        3121f4:	e1a00004 	mov	r0, r4
        3121f8:	eb619ea8 	bl	1b79ca0 <$SetFreeChain>
        3121fc:	e3360000 	teq	r6, #0	; 0x0
        312200:	15a74048 	strne	r4, [r7, #72]!
        312204:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MemoryTest
 * Address: 00313920
 */
void globals::MemoryTest() {
    /*
        313920:	e1a0c00d 	mov	ip, sp
        313924:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        313928:	e24cb004 	sub	fp, ip, #4	; 0x4
        31392c:	eb000016 	bl	31398c <GetBankInfo__FUlT1>
        313930:	e1a04000 	mov	r4, r0
        313934:	ebffffd3 	bl	313888 <RExScanner>
        313938:	e5942000 	ldr	r2, [r4]
        31393c:	e59f1040 	ldr	r1, [pc, #40]	; 313984 <MemoryTest+0x64>
        313940:	e3a00000 	mov	r0, #0	; 0x0
        313944:	e1320001 	teq	r2, r1
        313948:	0a000004 	beq	313960 <MemoryTest+0x40>
        31394c:	e5942014 	ldr	r2, [r4, #20]
        313950:	e282cd9d 	add	ip, r2, #10048	; 0x2740
        313954:	e37c0020 	cmn	ip, #32	; 0x20
        313958:	15840014 	strne	r0, [r4, #20]
        31395c:	e58401c4 	str	r0, [r4, #452]
        313960:	e5c40023 	strb	r0, [r4, #35]
        313964:	e5c40022 	strb	r0, [r4, #34]
        313968:	e5840010 	str	r0, [r4, #16]
        31396c:	e5840008 	str	r0, [r4, #8]
        313970:	e59f0010 	ldr	r0, [pc, #10]	; 313988 <MemoryTest+0x68>
        313974:	e5840004 	str	r0, [r4, #4]
        313978:	e5841000 	str	r1, [r4]
        31397c:	e1a00004 	mov	r0, r4
        313980:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        313984:	424c5447 	submi	r5, ip, #1191182336	; 0x47000000
        313988:	bdb3abb8 	ldclt	11, cr10, [r3, #736]!
    */
}

/**
 * Symbol: MergeUtil(long *, long, long, long, long, TGeneralizedTestFnVar *)
 * Address: 00318978
 */
MergeUtil(long *, long, long, long, long, TGeneralizedTestFnVar *) {
    /*
        318978:	e1a0c00d 	mov	ip, sp
        31897c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        318980:	e24cb004 	sub	fp, ip, #4	; 0x4
        318984:	e1a04000 	mov	r4, r0
        318988:	e1a05002 	mov	r5, r2
        31898c:	e0800101 	add	r0, r0, r1, lsl #2
        318990:	e59b6008 	ldr	r6, [fp, #8]
        318994:	e59b7004 	ldr	r7, [fp, #4]
        318998:	e082a103 	add	sl, r2, r3, lsl #2
        31899c:	e1a01004 	mov	r1, r4
        3189a0:	e52d0004 	str	r0, [sp, -#4]!
        3189a4:	e1a00006 	mov	r0, r6
        3189a8:	eb5ce3c3 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        3189ac:	eb62a5e6 	bl	1bc214c <$AllocateRefHandle(long)>
        3189b0:	e1a09000 	mov	r9, r0
        3189b4:	e1a01005 	mov	r1, r5
        3189b8:	e1a00006 	mov	r0, r6
        3189bc:	eb5ce3be 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        3189c0:	eb62a5e1 	bl	1bc214c <$AllocateRefHandle(long)>
        3189c4:	e1a08000 	mov	r8, r0
        3189c8:	e1a01009 	mov	r1, r9
        3189cc:	e1a02008 	mov	r2, r8
        3189d0:	e1a00006 	mov	r0, r6
        3189d4:	e1a0e00f 	mov	lr, pc
        3189d8:	e596f020 	ldr	pc, [r6, #32]
        3189dc:	e3500000 	cmp	r0, #0	; 0x0
        3189e0:	ca00000f 	bgt	318a24 <MergeUtil(long *, long, long, long, long, TGeneralizedTestFnVar *)+0xac>
        3189e4:	e4940004 	ldr	r0, [r4], #4
        3189e8:	e4870004 	str	r0, [r7], #4
        3189ec:	e59d0000 	ldr	r0, [sp]
        3189f0:	e1540000 	cmp	r4, r0
        3189f4:	2a000004 	bcs	318a0c <MergeUtil(long *, long, long, long, long, TGeneralizedTestFnVar *)+0x94>
        3189f8:	e1a01004 	mov	r1, r4
        3189fc:	e1a00006 	mov	r0, r6
        318a00:	eb5ce3ad 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        318a04:	e5890000 	str	r0, [r9]
        318a08:	eaffffee 	b	3189c8 <MergeUtil(long *, long, long, long, long, TGeneralizedTestFnVar *)+0x50>
        318a0c:	e05a0005 	subs	r0, sl, r5
        318a10:	42800003 	addmi	r0, r0, #3	; 0x3
        318a14:	e1a00140 	mov	r0, r0, asr #2
        318a18:	e1a02100 	mov	r2, r0, lsl #2
        318a1c:	e1a01005 	mov	r1, r5
        318a20:	ea00000e 	b	318a60 <MergeUtil(long *, long, long, long, long, TGeneralizedTestFnVar *)+0xe8>
        318a24:	e4950004 	ldr	r0, [r5], #4
        318a28:	e155000a 	cmp	r5, sl
        318a2c:	e4870004 	str	r0, [r7], #4
        318a30:	2a000004 	bcs	318a48 <MergeUtil(long *, long, long, long, long, TGeneralizedTestFnVar *)+0xd0>
        318a34:	e1a01005 	mov	r1, r5
        318a38:	e1a00006 	mov	r0, r6
        318a3c:	eb5ce39e 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        318a40:	e5880000 	str	r0, [r8]
        318a44:	eaffffdf 	b	3189c8 <MergeUtil(long *, long, long, long, long, TGeneralizedTestFnVar *)+0x50>
        318a48:	e59d0000 	ldr	r0, [sp]
        318a4c:	e0500004 	subs	r0, r0, r4
        318a50:	42800003 	addmi	r0, r0, #3	; 0x3
        318a54:	e1a00140 	mov	r0, r0, asr #2
        318a58:	e1a02100 	mov	r2, r0, lsl #2
        318a5c:	e1a01004 	mov	r1, r4
        318a60:	e1a00007 	mov	r0, r7
        318a64:	eb626ff9 	bl	1bb4a50 <$memcpy>
        318a68:	e1a00008 	mov	r0, r8
        318a6c:	eb62a9d2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        318a70:	e1a00009 	mov	r0, r9
        318a74:	eb62a9d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        318a78:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar
 * Address: 00318a7c
 */
void globals::MergeSortUtil() {
    /*
        318a7c:	e1a0c00d 	mov	ip, sp
        318a80:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        318a84:	e24cb004 	sub	fp, ip, #4	; 0x4
        318a88:	e1a04000 	mov	r4, r0
        318a8c:	e1a05001 	mov	r5, r1
        318a90:	e1a09003 	mov	r9, r3
        318a94:	e3320000 	teq	r2, #0	; 0x0
        318a98:	e59b6004 	ldr	r6, [fp, #4]
        318a9c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        318aa0:	e3320001 	teq	r2, #1	; 0x1
        318aa4:	0a00001f 	beq	318b28 <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar+0xac>
        318aa8:	e3320002 	teq	r2, #2	; 0x2
        318aac:	1a000029 	bne	318b58 <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar+0xdc>
        318ab0:	e1a01004 	mov	r1, r4
        318ab4:	e1a00006 	mov	r0, r6
        318ab8:	eb5ce37f 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        318abc:	eb62a5a2 	bl	1bc214c <$AllocateRefHandle(long)>
        318ac0:	e1a08000 	mov	r8, r0
        318ac4:	e2841004 	add	r1, r4, #4	; 0x4
        318ac8:	e1a00006 	mov	r0, r6
        318acc:	eb5ce37a 	bl	1a518bc <TGeneralizedTestFnVar::$ApplyKey(long *)>
        318ad0:	eb62a59d 	bl	1bc214c <$AllocateRefHandle(long)>
        318ad4:	e1a07000 	mov	r7, r0
        318ad8:	e1a01008 	mov	r1, r8
        318adc:	e1a02000 	mov	r2, r0
        318ae0:	e1a00006 	mov	r0, r6
        318ae4:	e1a0e00f 	mov	lr, pc
        318ae8:	e596f020 	ldr	pc, [r6, #32]
        318aec:	e3500000 	cmp	r0, #0	; 0x0
        318af0:	c3a06000 	movgt	r6, #0	; 0x0
        318af4:	d3a06001 	movle	r6, #1	; 0x1
        318af8:	e1a00007 	mov	r0, r7
        318afc:	eb62a9ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        318b00:	e1a00008 	mov	r0, r8
        318b04:	eb62a9ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        318b08:	e3390000 	teq	r9, #0	; 0x0
        318b0c:	0a000009 	beq	318b38 <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar+0xbc>
        318b10:	e3360000 	teq	r6, #0	; 0x0
        318b14:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        318b18:	e8940003 	ldmia	r4, {r0, r1}
        318b1c:	e5840004 	str	r0, [r4, #4]
        318b20:	e5841000 	str	r1, [r4]
        318b24:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        318b28:	e3390000 	teq	r9, #0	; 0x0
        318b2c:	05940000 	ldreq	r0, [r4]
        318b30:	05850000 	streq	r0, [r5]
        318b34:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        318b38:	e3360000 	teq	r6, #0	; 0x0
        318b3c:	05940004 	ldreq	r0, [r4, #4]
        318b40:	15940000 	ldrne	r0, [r4]
        318b44:	e5850000 	str	r0, [r5]
        318b48:	05940000 	ldreq	r0, [r4]
        318b4c:	15b40004 	ldrne	r0, [r4, #4]!
        318b50:	e5a50004 	str	r0, [r5, #4]!
        318b54:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        318b58:	e0827fa2 	add	r7, r2, r2, lsr #31
        318b5c:	e1a070c7 	mov	r7, r7, asr #1
        318b60:	e0428007 	sub	r8, r2, r7
        318b64:	e1b00009 	movs	r0, r9
        318b68:	e0821fa2 	add	r1, r2, r2, lsr #31
        318b6c:	e1a010c1 	mov	r1, r1, asr #1
        318b70:	e085a101 	add	sl, r5, r1, lsl #2
        318b74:	e0849101 	add	r9, r4, r1, lsl #2
        318b78:	e1a03006 	mov	r3, r6
        318b7c:	e92d0008 	stmdb	sp!, {r3}
        318b80:	e1a02007 	mov	r2, r7
        318b84:	e1a01005 	mov	r1, r5
        318b88:	e1a00004 	mov	r0, r4
        318b8c:	0a000012 	beq	318bdc <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar+0x160>
        318b90:	e3a03000 	mov	r3, #0	; 0x0
        318b94:	ebffffb8 	bl	318a7c <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar>
        318b98:	e28dd004 	add	sp, sp, #4	; 0x4
        318b9c:	e1a03006 	mov	r3, r6
        318ba0:	e92d0008 	stmdb	sp!, {r3}
        318ba4:	e1a0100a 	mov	r1, sl
        318ba8:	e1a00009 	mov	r0, r9
        318bac:	e1a02008 	mov	r2, r8
        318bb0:	e3a03000 	mov	r3, #0	; 0x0
        318bb4:	ebffffb0 	bl	318a7c <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar>
        318bb8:	e28dd004 	add	sp, sp, #4	; 0x4
        318bbc:	e1a03006 	mov	r3, r6
        318bc0:	e1a02004 	mov	r2, r4
        318bc4:	e92d000c 	stmdb	sp!, {r2, r3}
        318bc8:	e1a0200a 	mov	r2, sl
        318bcc:	e1a03008 	mov	r3, r8
        318bd0:	e1a01007 	mov	r1, r7
        318bd4:	e1a00005 	mov	r0, r5
        318bd8:	ea000011 	b	318c24 <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar+0x1a8>
        318bdc:	e3a03001 	mov	r3, #1	; 0x1
        318be0:	ebffffa5 	bl	318a7c <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar>
        318be4:	e28dd004 	add	sp, sp, #4	; 0x4
        318be8:	e1a03006 	mov	r3, r6
        318bec:	e92d0008 	stmdb	sp!, {r3}
        318bf0:	e1a0100a 	mov	r1, sl
        318bf4:	e1a00009 	mov	r0, r9
        318bf8:	e1a02008 	mov	r2, r8
        318bfc:	e3a03001 	mov	r3, #1	; 0x1
        318c00:	ebffff9d 	bl	318a7c <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar>
        318c04:	e28dd004 	add	sp, sp, #4	; 0x4
        318c08:	e1a03006 	mov	r3, r6
        318c0c:	e1a02005 	mov	r2, r5
        318c10:	e92d000c 	stmdb	sp!, {r2, r3}
        318c14:	e1a02009 	mov	r2, r9
        318c18:	e1a03008 	mov	r3, r8
        318c1c:	e1a01007 	mov	r1, r7
        318c20:	e1a00004 	mov	r0, r4
        318c24:	ebffff53 	bl	318978 <MergeUtil(long *, long, long, long, long, TGeneralizedTestFnVar *)>
        318c28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MergeSort(RefVar const &, TGeneralizedTestFnVar *)
 * Address: 00318c2c
 */
MergeSort(RefVar const &, TGeneralizedTestFnVar *) {
    /*
        318c2c:	e1a0c00d 	mov	ip, sp
        318c30:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        318c34:	e24cb004 	sub	fp, ip, #4	; 0x4
        318c38:	e1a04000 	mov	r4, r0
        318c3c:	e1a05001 	mov	r5, r1
        318c40:	eb636b51 	bl	1bf398c <$IsArray(RefVar const &)>
        318c44:	e3300000 	teq	r0, #0	; 0x0
        318c48:	01a01004 	moveq	r1, r4
        318c4c:	059f002c 	ldreq	r0, [pc, #2c]	; 318c80 <MergeSort(RefVar const &, TGeneralizedTestFnVar *)+0x54>
        318c50:	0b63be01 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        318c54:	e5940000 	ldr	r0, [r4]
        318c58:	e5900000 	ldr	r0, [r0]
        318c5c:	eb62b192 	bl	1bc52ac <$Length(long)>
        318c60:	e1a09000 	mov	r9, r0
        318c64:	e3500004 	cmp	r0, #4	; 0x4
        318c68:	aa000005 	bge	318c84 <MergeSort(RefVar const &, TGeneralizedTestFnVar *)+0x58>
        318c6c:	e1a01005 	mov	r1, r5
        318c70:	e1a00004 	mov	r0, r4
        318c74:	e3a02001 	mov	r2, #1	; 0x1
        318c78:	eb5cdefa 	bl	1a50868 <$ShellSortUtil(RefVar const &, TGeneralizedTestFnVar *, long)>
        318c7c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        318c80:	ffff42ef 	swinv	0x00ff42ef
        318c84:	e24dd008 	sub	sp, sp, #8	; 0x8
        318c88:	e2896001 	add	r6, r9, #1	; 0x1
        318c8c:	e0866fa6 	add	r6, r6, r6, lsr #31
        318c90:	e1a060c6 	mov	r6, r6, asr #1
        318c94:	e1b00009 	movs	r0, r9
        318c98:	42800003 	addmi	r0, r0, #3	; 0x3
        318c9c:	e1a00140 	mov	r0, r0, asr #2
        318ca0:	e3a01008 	mov	r1, #8	; 0x8
        318ca4:	e0817100 	add	r7, r1, r0, lsl #2
        318ca8:	e1a0100d 	mov	r1, sp
        318cac:	e28d0004 	add	r0, sp, #4	; 0x4
        318cb0:	eb62b9c8 	bl	1bc73d8 <$Statistics__FPUlT1>
        318cb4:	e2878ffa 	add	r8, r7, #1000	; 0x3e8
        318cb8:	e59d0000 	ldr	r0, [sp]
        318cbc:	e59f718c 	ldr	r7, [pc, #18c]	; 318e50 <MergeSort(RefVar const &, TGeneralizedTestFnVar *)+0x224>
        318cc0:	e1580000 	cmp	r8, r0
        318cc4:	9a000008 	bls	318cec <MergeSort(RefVar const &, TGeneralizedTestFnVar *)+0xc0>
        318cc8:	eb62ad5f 	bl	1bc424c <$GC(void)>
        318ccc:	e1a0100d 	mov	r1, sp
        318cd0:	e28d0004 	add	r0, sp, #4	; 0x4
        318cd4:	eb62b9bf 	bl	1bc73d8 <$Statistics__FPUlT1>
        318cd8:	e59d0000 	ldr	r0, [sp]
        318cdc:	e1580000 	cmp	r8, r0
        318ce0:	81a00007 	movhi	r0, r7
        318ce4:	83e01102 	mvnhi	r1, #-2147483648	; 0x80000000
        318ce8:	8b62a512 	blhi	1bc2138 <$AllocateArray(RefVar const &, long)>
        318cec:	e59d0000 	ldr	r0, [sp]
        318cf0:	e2400e3f 	sub	r0, r0, #1008	; 0x3f0
        318cf4:	e1a00120 	mov	r0, r0, lsr #2
        318cf8:	e1500006 	cmp	r0, r6
        318cfc:	a1a00006 	movge	r0, r6
        318d00:	e1a06000 	mov	r6, r0
        318d04:	e1a01000 	mov	r1, r0
        318d08:	e1a00007 	mov	r0, r7
        318d0c:	eb62a509 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        318d10:	eb62a50d 	bl	1bc214c <$AllocateRefHandle(long)>
        318d14:	e1a08000 	mov	r8, r0
        318d18:	e0890006 	add	r0, r9, r6
        318d1c:	e2401001 	sub	r1, r0, #1	; 0x1
        318d20:	e1a00006 	mov	r0, r6
        318d24:	eb626705 	bl	1bb2940 <$__rt_sdiv>
        318d28:	e1a07000 	mov	r7, r0
        318d2c:	e5940000 	ldr	r0, [r4]
        318d30:	e5900000 	ldr	r0, [r0]
        318d34:	eb62b15e 	bl	1bc52b4 <$LockRef(long)>
        318d38:	e5980000 	ldr	r0, [r8]
        318d3c:	eb62b15c 	bl	1bc52b4 <$LockRef(long)>
        318d40:	e3a00000 	mov	r0, #0	; 0x0
        318d44:	e52d006c 	str	r0, [sp, -#108]!
        318d48:	e52d0004 	str	r0, [sp, -#4]!
        318d4c:	e28d000c 	add	r0, sp, #12	; 0xc
        318d50:	eb626707 	bl	1bb2974 <$setjmp>
        318d54:	e3300000 	teq	r0, #0	; 0x0
        318d58:	1a00003d 	bne	318e54 <MergeSort(RefVar const &, TGeneralizedTestFnVar *)+0x228>
        318d5c:	e28d0004 	add	r0, sp, #4	; 0x4
        318d60:	eb631cc5 	bl	1be007c <$AddExceptionHandler>
        318d64:	e24dd008 	sub	sp, sp, #8	; 0x8
        318d68:	e5940000 	ldr	r0, [r4]
        318d6c:	e5900000 	ldr	r0, [r0]
        318d70:	eb62b580 	bl	1bc6378 <$Slots(long)>
        318d74:	e58d0004 	str	r0, [sp, #4]
        318d78:	e0800109 	add	r0, r0, r9, lsl #2
        318d7c:	e58d0000 	str	r0, [sp]
        318d80:	e5980000 	ldr	r0, [r8]
        318d84:	eb62b57b 	bl	1bc6378 <$Slots(long)>
        318d88:	e1a0a000 	mov	sl, r0
        318d8c:	e2470001 	sub	r0, r7, #1	; 0x1
        318d90:	e0000096 	mul	r0, r6, r0
        318d94:	e59d1004 	ldr	r1, [sp, #4]
        318d98:	e0817100 	add	r7, r1, r0, lsl #2
        318d9c:	e1a03005 	mov	r3, r5
        318da0:	e92d0008 	stmdb	sp!, {r3}
        318da4:	e59d0004 	ldr	r0, [sp, #4]
        318da8:	e0502007 	subs	r2, r0, r7
        318dac:	42822003 	addmi	r2, r2, #3	; 0x3
        318db0:	e1a02142 	mov	r2, r2, asr #2
        318db4:	e1a0100a 	mov	r1, sl
        318db8:	e1a00007 	mov	r0, r7
        318dbc:	e3a03001 	mov	r3, #1	; 0x1
        318dc0:	ebffff2d 	bl	318a7c <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar>
        318dc4:	e28dd004 	add	sp, sp, #4	; 0x4
        318dc8:	e1a09007 	mov	r9, r7
        318dcc:	e0477106 	sub	r7, r7, r6, lsl #2
        318dd0:	e59d0004 	ldr	r0, [sp, #4]
        318dd4:	e1570000 	cmp	r7, r0
        318dd8:	3a000018 	bcc	318e40 <MergeSort(RefVar const &, TGeneralizedTestFnVar *)+0x214>
        318ddc:	e1a03005 	mov	r3, r5
        318de0:	e92d0008 	stmdb	sp!, {r3}
        318de4:	e1a02006 	mov	r2, r6
        318de8:	e1a0100a 	mov	r1, sl
        318dec:	e1a00007 	mov	r0, r7
        318df0:	e3a03000 	mov	r3, #0	; 0x0
        318df4:	ebffff20 	bl	318a7c <MergeSortUtil__FPlT1lT3P21TGeneralizedTestFnVar>
        318df8:	e28dd004 	add	sp, sp, #4	; 0x4
        318dfc:	e1a03005 	mov	r3, r5
        318e00:	e1a02007 	mov	r2, r7
        318e04:	e92d000c 	stmdb	sp!, {r2, r3}
        318e08:	e59d0008 	ldr	r0, [sp, #8]
        318e0c:	e0503009 	subs	r3, r0, r9
        318e10:	42833003 	addmi	r3, r3, #3	; 0x3
        318e14:	e1a03143 	mov	r3, r3, asr #2
        318e18:	e1a02009 	mov	r2, r9
        318e1c:	e1a01006 	mov	r1, r6
        318e20:	e1a0000a 	mov	r0, sl
        318e24:	ebfffed3 	bl	318978 <MergeUtil(long *, long, long, long, long, TGeneralizedTestFnVar *)>
        318e28:	e28dd008 	add	sp, sp, #8	; 0x8
        318e2c:	e1a09007 	mov	r9, r7
        318e30:	e0477106 	sub	r7, r7, r6, lsl #2
        318e34:	e59d0004 	ldr	r0, [sp, #4]
        318e38:	e1570000 	cmp	r7, r0
        318e3c:	2affffe6 	bcs	318ddc <MergeSort(RefVar const &, TGeneralizedTestFnVar *)+0x1b0>
        318e40:	e28dd008 	add	sp, sp, #8	; 0x8
        318e44:	e28d0004 	add	r0, sp, #4	; 0x4
        318e48:	eb63209a 	bl	1be10b8 <$ExitHandler>
        318e4c:	ea000002 	b	318e5c <MergeSort(RefVar const &, TGeneralizedTestFnVar *)+0x230>
        318e50:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        318e54:	e3a00001 	mov	r0, #1	; 0x1
        318e58:	e58d0000 	str	r0, [sp]
        318e5c:	e5940000 	ldr	r0, [r4]
        318e60:	e5900000 	ldr	r0, [r0]
        318e64:	eb62bd81 	bl	1bc8470 <$UnlockRef(long)>
        318e68:	e5980000 	ldr	r0, [r8]
        318e6c:	eb62bd7f 	bl	1bc8470 <$UnlockRef(long)>
        318e70:	e59d0000 	ldr	r0, [sp]
        318e74:	e3300000 	teq	r0, #0	; 0x0
        318e78:	128d0004 	addne	r0, sp, #4	; 0x4
        318e7c:	1b6324b4 	blne	1be2154 <$NextHandler>
        318e80:	e28dd070 	add	sp, sp, #112	; 0x70
        318e84:	e1a00008 	mov	r0, r8
        318e88:	eb62a8cb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        318e8c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MAKEIMMED__FUlT1
 * Address: 00319510
 */
void globals::MAKEIMMED() {
    /*
        319510:	e1801101 	orr	r1, r0, r1, lsl #2
        319514:	e3a00002 	mov	r0, #2	; 0x2
        319518:	e1800101 	orr	r0, r0, r1, lsl #2
        31951c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MAKECHAR(char)
 * Address: 00319520
 */
MAKECHAR(char) {
    /*
        319520:	e20010ff 	and	r1, r0, #255	; 0xff
        319524:	e3a00001 	mov	r0, #1	; 0x1
        319528:	ea62af66 	b	1bc52c8 <$MAKEIMMED__FUlT1>
    */
}

/**
 * Symbol: MAKECHAR(unsigned short)
 * Address: 00319818
 */
MAKECHAR(unsigned short) {
    /*
        319818:	e1a01800 	mov	r1, r0, lsl #16
        31981c:	e1a01821 	mov	r1, r1, lsr #16
        319820:	e3a00001 	mov	r0, #1	; 0x1
        319824:	ea62aea7 	b	1bc52c8 <$MAKEIMMED__FUlT1>
    */
}

/**
 * Symbol: MAKEBOOLEAN(int)
 * Address: 00319864
 */
MAKEBOOLEAN(int) {
    /*
        319864:	e3300000 	teq	r0, #0	; 0x0
        319868:	03a00002 	moveq	r0, #2	; 0x2
        31986c:	13a0001a 	movne	r0, #26	; 0x1a
        319870:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MapSlots__FRC6RefVarPFRC6RefVarT1Ul_lUl
 * Address: 0031ab54
 */
void globals::MapSlots() {
    /*
        31ab54:	e1a0c00d 	mov	ip, sp
        31ab58:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31ab5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        31ab60:	e1a06000 	mov	r6, r0
        31ab64:	e1a05001 	mov	r5, r1
        31ab68:	e1a04002 	mov	r4, r2
        31ab6c:	e5900000 	ldr	r0, [r0]
        31ab70:	e5900000 	ldr	r0, [r0]
        31ab74:	eb62a9dd 	bl	1bc52f0 <$ObjectFlags(long)>
        31ab78:	e3100001 	tst	r0, #1	; 0x1
        31ab7c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31ab80:	e24dd030 	sub	sp, sp, #48	; 0x30
        31ab84:	e1a01006 	mov	r1, r6
        31ab88:	e1a0000d 	mov	r0, sp
        31ab8c:	e3a02000 	mov	r2, #0	; 0x0
        31ab90:	eb629956 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        31ab94:	e1a0000d 	mov	r0, sp
        31ab98:	eb62a18f 	bl	1bc31dc <TObjectIterator::$Done(void)>
        31ab9c:	e3300000 	teq	r0, #0	; 0x0
        31aba0:	1a00000e 	bne	31abe0 <MapSlots__FRC6RefVarPFRC6RefVarT1Ul_lUl+0x8c>
        31aba4:	e28d6008 	add	r6, sp, #8	; 0x8
        31aba8:	e28d7004 	add	r7, sp, #4	; 0x4
        31abac:	e1a01006 	mov	r1, r6
        31abb0:	e1a00007 	mov	r0, r7
        31abb4:	e1a02004 	mov	r2, r4
        31abb8:	e1a0e00f 	mov	lr, pc
        31abbc:	e1a0f005 	mov	pc, r5
        31abc0:	e3300002 	teq	r0, #2	; 0x2
        31abc4:	1a000005 	bne	31abe0 <MapSlots__FRC6RefVarPFRC6RefVarT1Ul_lUl+0x8c>
        31abc8:	e1a0000d 	mov	r0, sp
        31abcc:	eb62a9c5 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        31abd0:	e1a0000d 	mov	r0, sp
        31abd4:	eb62a180 	bl	1bc31dc <TObjectIterator::$Done(void)>
        31abd8:	e3300000 	teq	r0, #0	; 0x0
        31abdc:	0afffff2 	beq	31abac <MapSlots__FRC6RefVarPFRC6RefVarT1Ul_lUl+0x58>
        31abe0:	e1a0000d 	mov	r0, sp
        31abe4:	e3a01000 	mov	r1, #0	; 0x0
        31abe8:	e1a0e00f 	mov	lr, pc
        31abec:	e59df000 	ldr	pc, [sp]
        31abf0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: MakeString(char const *)
 * Address: 0031c1e4
 */
MakeString(char const *) {
    /*
        31c1e4:	e1a0c00d 	mov	ip, sp
        31c1e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31c1ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        31c1f0:	e1a04000 	mov	r4, r0
        31c1f4:	e3a00002 	mov	r0, #2	; 0x2
        31c1f8:	eb6297d3 	bl	1bc214c <$AllocateRefHandle(long)>
        31c1fc:	e1a05000 	mov	r5, r0
        31c200:	e1a00004 	mov	r0, r4
        31c204:	eb626629 	bl	1bb5ab0 <$strlen>
        31c208:	e3a01002 	mov	r1, #2	; 0x2
        31c20c:	e0811080 	add	r1, r1, r0, lsl #1
        31c210:	e59f0030 	ldr	r0, [pc, #30]	; 31c248 <MakeString(char const *)+0x64>
        31c214:	eb6297c8 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        31c218:	e5850000 	str	r0, [r5]
        31c21c:	eb6297ce 	bl	1bc215c <$BinaryData(long)>
        31c220:	e1a01000 	mov	r1, r0
        31c224:	e1a00004 	mov	r0, r4
        31c228:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        31c22c:	e3a02001 	mov	r2, #1	; 0x1
        31c230:	eb632c53 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        31c234:	e5954000 	ldr	r4, [r5]
        31c238:	e1a00005 	mov	r0, r5
        31c23c:	eb629bde 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31c240:	e1a00004 	mov	r0, r4
        31c244:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31c248:	006848d0 	ldreqd	r4, [r8], -#128
    */
}

/**
 * Symbol: MakeString(unsigned short const *)
 * Address: 0031c24c
 */
MakeString(unsigned short const *) {
    /*
        31c24c:	e1a0c00d 	mov	ip, sp
        31c250:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31c254:	e24cb004 	sub	fp, ip, #4	; 0x4
        31c258:	e1a04000 	mov	r4, r0
        31c25c:	e3a00002 	mov	r0, #2	; 0x2
        31c260:	eb6297b9 	bl	1bc214c <$AllocateRefHandle(long)>
        31c264:	e1a05000 	mov	r5, r0
        31c268:	e1a00004 	mov	r0, r4
        31c26c:	eb63493b 	bl	1bee760 <$Ustrlen>
        31c270:	e3a01002 	mov	r1, #2	; 0x2
        31c274:	e0811080 	add	r1, r1, r0, lsl #1
        31c278:	e59f0024 	ldr	r0, [pc, #24]	; 31c2a4 <MakeString(unsigned short const *)+0x58>
        31c27c:	eb6297ae 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        31c280:	e5850000 	str	r0, [r5]
        31c284:	eb6297b4 	bl	1bc215c <$BinaryData(long)>
        31c288:	e1a01004 	mov	r1, r4
        31c28c:	eb634932 	bl	1bee75c <$Ustrcpy>
        31c290:	e5954000 	ldr	r4, [r5]
        31c294:	e1a00005 	mov	r0, r5
        31c298:	eb629bc7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31c29c:	e1a00004 	mov	r0, r4
        31c2a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31c2a4:	006848d0 	ldreqd	r4, [r8], -#128
    */
}

/**
 * Symbol: MakeReal(double)
 * Address: 0031c358
 */
MakeReal(double) {
    /*
        31c358:	e1a0c00d 	mov	ip, sp
        31c35c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31c360:	e24cb004 	sub	fp, ip, #4	; 0x4
        31c364:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        31c368:	e92d0003 	stmdb	sp!, {r0, r1}
        31c36c:	ecbdc102 	ldfd	f4, [sp], #8
        31c370:	e59f0030 	ldr	r0, [pc, #30]	; 31c3a8 <MakeReal(double)+0x50>
        31c374:	e3a01008 	mov	r1, #8	; 0x8
        31c378:	eb62976f 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        31c37c:	eb629772 	bl	1bc214c <$AllocateRefHandle(long)>
        31c380:	e1a04000 	mov	r4, r0
        31c384:	e5900000 	ldr	r0, [r0]
        31c388:	eb629773 	bl	1bc215c <$BinaryData(long)>
        31c38c:	ed80c100 	stfd	f4, [r0]
        31c390:	e5945000 	ldr	r5, [r4]
        31c394:	e1a00004 	mov	r0, r4
        31c398:	eb629b87 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31c39c:	e1a00005 	mov	r0, r5
        31c3a0:	ed1bc208 	lfm	f4, 1, [fp, -#32]
        31c3a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31c3a8:	00684118 	rsbeq	r4, r8, r8, lsl r1
    */
}

/**
 * Symbol: MakeInt(long)
 * Address: 0031c694
 */
MakeInt(long) {
    /*
        31c694:	e1a00100 	mov	r0, r0, lsl #2
        31c698:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MakeChar(unsigned char)
 * Address: 0031c69c
 */
MakeChar(unsigned char) {
    /*
        31c69c:	e20000ff 	and	r0, r0, #255	; 0xff
        31c6a0:	e3a01001 	mov	r1, #1	; 0x1
        31c6a4:	e1810100 	orr	r0, r1, r0, lsl #2
        31c6a8:	e3a01002 	mov	r1, #2	; 0x2
        31c6ac:	e1810100 	orr	r0, r1, r0, lsl #2
        31c6b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MakeBoolean(int)
 * Address: 0031c6b4
 */
MakeBoolean(int) {
    /*
        31c6b4:	e3300000 	teq	r0, #0	; 0x0
        31c6b8:	03a00002 	moveq	r0, #2	; 0x2
        31c6bc:	13a0001a 	movne	r0, #26	; 0x1a
        31c6c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MakeSymbol(char *)
 * Address: 0031c970
 */
MakeSymbol(char *) {
    /*
        31c970:	ea62a242 	b	1bc5280 <$Intern(char *)>
    */
}

/**
 * Symbol: measure_slope(low_type *)
 * Address: 00320bd0
 */
measure_slope(low_type *) {
    /*
        320bd0:	e1a0c00d 	mov	ip, sp
        320bd4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        320bd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        320bdc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        320be0:	e5903034 	ldr	r3, [r0, #52]
        320be4:	e58d3008 	str	r3, [sp, #8]
        320be8:	e5902038 	ldr	r2, [r0, #56]
        320bec:	e58d2004 	str	r2, [sp, #4]
        320bf0:	e5900040 	ldr	r0, [r0, #64]
        320bf4:	e3a06002 	mov	r6, #2	; 0x2
        320bf8:	e58d0000 	str	r0, [sp]
        320bfc:	e3a08000 	mov	r8, #0	; 0x0
        320c00:	e3a04000 	mov	r4, #0	; 0x0
        320c04:	e3a07000 	mov	r7, #0	; 0x0
        320c08:	e59d0000 	ldr	r0, [sp]
        320c0c:	e590000c 	ldr	r0, [r0, #12]
        320c10:	e3300000 	teq	r0, #0	; 0x0
        320c14:	1a000001 	bne	320c20 <measure_slope(low_type *)+0x50>
        320c18:	e3a00000 	mov	r0, #0	; 0x0
        320c1c:	ea000044 	b	320d34 <measure_slope(low_type *)+0x164>
        320c20:	e590500c 	ldr	r5, [r0, #12]
        320c24:	e3350000 	teq	r5, #0	; 0x0
        320c28:	0a000030 	beq	320cf0 <measure_slope(low_type *)+0x120>
        320c2c:	e5d01000 	ldrb	r1, [r0]
        320c30:	e3310001 	teq	r1, #1	; 0x1
        320c34:	13310002 	teqne	r1, #2	; 0x2
        320c38:	1a000028 	bne	320ce0 <measure_slope(low_type *)+0x110>
        320c3c:	e5d51000 	ldrb	r1, [r5]
        320c40:	e3310003 	teq	r1, #3	; 0x3
        320c44:	13310004 	teqne	r1, #4	; 0x4
        320c48:	1a000024 	bne	320ce0 <measure_slope(low_type *)+0x110>
        320c4c:	e5901006 	ldr	r1, [r0, #6]
        320c50:	e1a01841 	mov	r1, r1, asr #16
        320c54:	e59d3008 	ldr	r3, [sp, #8]
        320c58:	e7932081 	ldr	r2, [r3, r1, lsl #1]
        320c5c:	e1a02822 	mov	r2, r2, lsr #16
        320c60:	e5950004 	ldr	r0, [r5, #4]
        320c64:	e1a00840 	mov	r0, r0, asr #16
        320c68:	e7933080 	ldr	r3, [r3, r0, lsl #1]
        320c6c:	e1a03823 	mov	r3, r3, lsr #16
        320c70:	e0422003 	sub	r2, r2, r3
        320c74:	e1a0a802 	mov	sl, r2, lsl #16
        320c78:	e1a0a84a 	mov	sl, sl, asr #16
        320c7c:	e59d2004 	ldr	r2, [sp, #4]
        320c80:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        320c84:	e1a00820 	mov	r0, r0, lsr #16
        320c88:	e7921081 	ldr	r1, [r2, r1, lsl #1]
        320c8c:	e1a01821 	mov	r1, r1, lsr #16
        320c90:	e0400001 	sub	r0, r0, r1
        320c94:	e1a09800 	mov	r9, r0, lsl #16
        320c98:	e1a09849 	mov	r9, r9, asr #16
        320c9c:	e3590000 	cmp	r9, #0	; 0x0
        320ca0:	da00000b 	ble	320cd4 <measure_slope(low_type *)+0x104>
        320ca4:	e1a0000a 	mov	r0, sl
        320ca8:	eb5d3ac5 	bl	1a6f7c4 <$HWRAbs(int)>
        320cac:	e0000096 	mul	r0, r6, r0
        320cb0:	e1500009 	cmp	r0, r9
        320cb4:	aa000006 	bge	320cd4 <measure_slope(low_type *)+0x104>
        320cb8:	e0840009 	add	r0, r4, r9
        320cbc:	e1a04800 	mov	r4, r0, lsl #16
        320cc0:	e1a04844 	mov	r4, r4, asr #16
        320cc4:	e088000a 	add	r0, r8, sl
        320cc8:	e1a08800 	mov	r8, r0, lsl #16
        320ccc:	e1a08848 	mov	r8, r8, asr #16
        320cd0:	ea000002 	b	320ce0 <measure_slope(low_type *)+0x110>
        320cd4:	e0870009 	add	r0, r7, r9
        320cd8:	e1a07800 	mov	r7, r0, lsl #16
        320cdc:	e1a07847 	mov	r7, r7, asr #16
        320ce0:	e1a00005 	mov	r0, r5
        320ce4:	e595500c 	ldr	r5, [r5, #12]
        320ce8:	e3350000 	teq	r5, #0	; 0x0
        320cec:	1affffce 	bne	320c2c <measure_slope(low_type *)+0x5c>
        320cf0:	e3560000 	cmp	r6, #0	; 0x0
        320cf4:	da000005 	ble	320d10 <measure_slope(low_type *)+0x140>
        320cf8:	e0840084 	add	r0, r4, r4, lsl #1
        320cfc:	e1500107 	cmp	r0, r7, lsl #2
        320d00:	b2460001 	sublt	r0, r6, #1	; 0x1
        320d04:	b1a06800 	movlt	r6, r0, lsl #16
        320d08:	b1a06846 	movlt	r6, r6, asr #16
        320d0c:	baffffba 	blt	320bfc <measure_slope(low_type *)+0x2c>
        320d10:	e3340000 	teq	r4, #0	; 0x0
        320d14:	0affffbf 	beq	320c18 <measure_slope(low_type *)+0x48>
        320d18:	e0881188 	add	r1, r8, r8, lsl #3
        320d1c:	e0811208 	add	r1, r1, r8, lsl #4
        320d20:	e1a01101 	mov	r1, r1, lsl #2
        320d24:	e1a00004 	mov	r0, r4
        320d28:	eb624704 	bl	1bb2940 <$__rt_sdiv>
        320d2c:	e1a00800 	mov	r0, r0, lsl #16
        320d30:	e1a00840 	mov	r0, r0, asr #16
        320d34:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MapPaths__FPP5pathsP4RectT2
 * Address: 00327818
 */
void globals::MapPaths() {
    /*
        327818:	e1a0c00d 	mov	ip, sp
        32781c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        327820:	e24cb004 	sub	fp, ip, #4	; 0x4
        327824:	e1a06000 	mov	r6, r0
        327828:	e1a05001 	mov	r5, r1
        32782c:	e1a04002 	mov	r4, r2
        327830:	e5910006 	ldr	r0, [r1, #6]
        327834:	e1a00840 	mov	r0, r0, asr #16
        327838:	e5911002 	ldr	r1, [r1, #2]
        32783c:	e0401841 	sub	r1, r0, r1, asr #16
        327840:	e5922006 	ldr	r2, [r2, #6]
        327844:	e1a02842 	mov	r2, r2, asr #16
        327848:	e5940002 	ldr	r0, [r4, #2]
        32784c:	e0420840 	sub	r0, r2, r0, asr #16
        327850:	eb62e61a 	bl	1be10c0 <$FixedDivide>
        327854:	e1a08000 	mov	r8, r0
        327858:	e5951004 	ldr	r1, [r5, #4]
        32785c:	e1a01841 	mov	r1, r1, asr #16
        327860:	e5950000 	ldr	r0, [r5]
        327864:	e0411840 	sub	r1, r1, r0, asr #16
        327868:	e5942004 	ldr	r2, [r4, #4]
        32786c:	e1a02842 	mov	r2, r2, asr #16
        327870:	e5940000 	ldr	r0, [r4]
        327874:	e0420840 	sub	r0, r2, r0, asr #16
        327878:	eb62e610 	bl	1be10c0 <$FixedDivide>
        32787c:	e1a07000 	mov	r7, r0
        327880:	e5950000 	ldr	r0, [r5]
        327884:	e1a00820 	mov	r0, r0, lsr #16
        327888:	e1a00800 	mov	r0, r0, lsl #16
        32788c:	e2602000 	rsb	r2, r0, #0	; 0x0
        327890:	e5950002 	ldr	r0, [r5, #2]
        327894:	e1a00820 	mov	r0, r0, lsr #16
        327898:	e1a00800 	mov	r0, r0, lsl #16
        32789c:	e2601000 	rsb	r1, r0, #0	; 0x0
        3278a0:	e1a00006 	mov	r0, r6
        3278a4:	eb60a80d 	bl	1b518e0 <$OffsetPaths__FPP5pathslT2>
        3278a8:	e1a02007 	mov	r2, r7
        3278ac:	e1a01008 	mov	r1, r8
        3278b0:	e1a00006 	mov	r0, r6
        3278b4:	eb60b03f 	bl	1b539b8 <$ScalePaths__FPP5pathslT2>
        3278b8:	e5940000 	ldr	r0, [r4]
        3278bc:	e1a00820 	mov	r0, r0, lsr #16
        3278c0:	e1a02800 	mov	r2, r0, lsl #16
        3278c4:	e5940002 	ldr	r0, [r4, #2]
        3278c8:	e1a00820 	mov	r0, r0, lsr #16
        3278cc:	e1a01800 	mov	r1, r0, lsl #16
        3278d0:	e1a00006 	mov	r0, r6
        3278d4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        3278d8:	ea60a800 	b	1b518e0 <$OffsetPaths__FPP5pathslT2>
    */
}

/**
 * Symbol: MakeSimplePattern__FlN71
 * Address: 003280e0
 */
void globals::MakeSimplePattern() {
    /*
        3280e0:	e1a0c00d 	mov	ip, sp
        3280e4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        3280e8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3280ec:	e24cb014 	sub	fp, ip, #20	; 0x14
        3280f0:	e3a00024 	mov	r0, #36	; 0x24
        3280f4:	e59b7020 	ldr	r7, [fp, #32]
        3280f8:	e59b801c 	ldr	r8, [fp, #28]
        3280fc:	e59b9018 	ldr	r9, [fp, #24]
        328100:	e59ba014 	ldr	sl, [fp, #20]
        328104:	eb62e808 	bl	1be212c <$NewHandle>
        328108:	e1b05000 	movs	r5, r0
        32810c:	0a000022 	beq	32819c <MakeSimplePattern__FlN71+0xbc>
        328110:	e5954000 	ldr	r4, [r5]
        328114:	e284601c 	add	r6, r4, #28	; 0x1c
        328118:	e3a0001c 	mov	r0, #28	; 0x1c
        32811c:	e5840000 	str	r0, [r4]
        328120:	e3a00001 	mov	r0, #1	; 0x1
        328124:	e5c40005 	strb	r0, [r4, #5]
        328128:	e3a01000 	mov	r1, #0	; 0x0
        32812c:	e5c41004 	strb	r1, [r4, #4]
        328130:	e3a03008 	mov	r3, #8	; 0x8
        328134:	e92d0008 	stmdb	sp!, {r3}
        328138:	e0840003 	add	r0, r4, r3
        32813c:	e3a02000 	mov	r2, #0	; 0x0
        328140:	eb60b231 	bl	1b54a0c <$SetRect__FP4RectlN32>
        328144:	e28dd004 	add	sp, sp, #4	; 0x4
        328148:	e3a00106 	mov	r0, #-2147483647	; 0x80000001
        32814c:	e5840010 	str	r0, [r4, #16]
        328150:	e3a00048 	mov	r0, #72	; 0x48
        328154:	e5c40015 	strb	r0, [r4, #21]
        328158:	e3a01000 	mov	r1, #0	; 0x0
        32815c:	e5c41014 	strb	r1, [r4, #20]
        328160:	e5c40017 	strb	r0, [r4, #23]
        328164:	e5c41016 	strb	r1, [r4, #22]
        328168:	e5a41018 	str	r1, [r4, #24]!
        32816c:	e59b0004 	ldr	r0, [fp, #4]
        328170:	e4c60001 	strb	r0, [r6], #1
        328174:	e59b0008 	ldr	r0, [fp, #8]
        328178:	e4c60001 	strb	r0, [r6], #1
        32817c:	e59b000c 	ldr	r0, [fp, #12]
        328180:	e4c60001 	strb	r0, [r6], #1
        328184:	e59b0010 	ldr	r0, [fp, #16]
        328188:	e4c60001 	strb	r0, [r6], #1
        32818c:	e4c6a001 	strb	sl, [r6], #1
        328190:	e4c69001 	strb	r9, [r6], #1
        328194:	e4c68001 	strb	r8, [r6], #1
        328198:	e5c67000 	strb	r7, [r6]
        32819c:	e1a00005 	mov	r0, r5
        3281a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeSimplePattern(char *)
 * Address: 003281a4
 */
MakeSimplePattern(char *) {
    /*
        3281a4:	e1a0c00d 	mov	ip, sp
        3281a8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        3281ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        3281b0:	e1a04000 	mov	r4, r0
        3281b4:	e3a00024 	mov	r0, #36	; 0x24
        3281b8:	eb62e7db 	bl	1be212c <$NewHandle>
        3281bc:	e1b07000 	movs	r7, r0
        3281c0:	0a00001a 	beq	328230 <MakeSimplePattern(char *)+0x8c>
        3281c4:	e5975000 	ldr	r5, [r7]
        3281c8:	e285801c 	add	r8, r5, #28	; 0x1c
        3281cc:	e3a0001c 	mov	r0, #28	; 0x1c
        3281d0:	e5850000 	str	r0, [r5]
        3281d4:	e3a00001 	mov	r0, #1	; 0x1
        3281d8:	e5c50005 	strb	r0, [r5, #5]
        3281dc:	e3a06000 	mov	r6, #0	; 0x0
        3281e0:	e5c56004 	strb	r6, [r5, #4]
        3281e4:	e3a03008 	mov	r3, #8	; 0x8
        3281e8:	e92d0008 	stmdb	sp!, {r3}
        3281ec:	e0850003 	add	r0, r5, r3
        3281f0:	e3a02000 	mov	r2, #0	; 0x0
        3281f4:	e3a01000 	mov	r1, #0	; 0x0
        3281f8:	eb60b203 	bl	1b54a0c <$SetRect__FP4RectlN32>
        3281fc:	e28dd004 	add	sp, sp, #4	; 0x4
        328200:	e3a00106 	mov	r0, #-2147483647	; 0x80000001
        328204:	e5850010 	str	r0, [r5, #16]
        328208:	e3a00048 	mov	r0, #72	; 0x48
        32820c:	e5c50015 	strb	r0, [r5, #21]
        328210:	e5c56014 	strb	r6, [r5, #20]
        328214:	e5c50017 	strb	r0, [r5, #23]
        328218:	e5c56016 	strb	r6, [r5, #22]
        32821c:	e1a01008 	mov	r1, r8
        328220:	e1a00004 	mov	r0, r4
        328224:	e3a02008 	mov	r2, #8	; 0x8
        328228:	e5a56018 	str	r6, [r5, #24]!
        32822c:	eb62db48 	bl	1bdef54 <$BlockMove>
        328230:	e1a00007 	mov	r0, r7
        328234:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MakeNSPattern(PixelMap *, long)
 * Address: 00328238
 */
MakeNSPattern(PixelMap *, long) {
    /*
        328238:	e1a0c00d 	mov	ip, sp
        32823c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        328240:	e24cb004 	sub	fp, ip, #4	; 0x4
        328244:	e1a06000 	mov	r6, r0
        328248:	e1a04001 	mov	r4, r1
        32824c:	e24dd004 	sub	sp, sp, #4	; 0x4
        328250:	e3a00002 	mov	r0, #2	; 0x2
        328254:	eb6267bc 	bl	1bc214c <$AllocateRefHandle(long)>
        328258:	e58d0000 	str	r0, [sp]
        32825c:	e1a00006 	mov	r0, r6
        328260:	eb6390e8 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        328264:	e1a0a000 	mov	sl, r0
        328268:	e5960010 	ldr	r0, [r6, #16]
        32826c:	e20050ff 	and	r5, r0, #255	; 0xff
        328270:	e3350001 	teq	r5, #1	; 0x1
        328274:	1a000014 	bne	3282cc <MakeNSPattern(PixelMap *, long)+0x94>
        328278:	e3a04008 	mov	r4, #8	; 0x8
        32827c:	e1a01004 	mov	r1, r4
        328280:	e59f0040 	ldr	r0, [pc, #40]	; 3282c8 <MakeNSPattern(PixelMap *, long)+0x90>
        328284:	eb6267ac 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        328288:	e41d1004 	ldr	r1, [sp], -#4
        32828c:	e5810000 	str	r0, [r1]
        328290:	e28d1004 	add	r1, sp, #4	; 0x4
        328294:	e1a0000d 	mov	r0, sp
        328298:	eb62638e 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        32829c:	e1a0000d 	mov	r0, sp
        3282a0:	eb62679b 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        3282a4:	e1a01000 	mov	r1, r0
        3282a8:	e1a02004 	mov	r2, r4
        3282ac:	e1a0000a 	mov	r0, sl
        3282b0:	eb62db27 	bl	1bdef54 <$BlockMove>
        3282b4:	e1a0000d 	mov	r0, sp
        3282b8:	e3a01000 	mov	r1, #0	; 0x0
        3282bc:	eb62678f 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        3282c0:	e28dd004 	add	sp, sp, #4	; 0x4
        3282c4:	ea00004b 	b	3283f8 <MakeNSPattern(PixelMap *, long)+0x1c0>
        3282c8:	00683d80 	rsbeq	r3, r8, r0, lsl #27
        3282cc:	e3350004 	teq	r5, #4	; 0x4
        3282d0:	13a07004 	movne	r7, #4	; 0x4
        3282d4:	03a07002 	moveq	r7, #2	; 0x2
        3282d8:	e0000497 	mul	r0, r7, r4
        3282dc:	e0801080 	add	r1, r0, r0, lsl #1
        3282e0:	e1a01081 	mov	r1, r1, lsl #1
        3282e4:	e59f0048 	ldr	r0, [pc, #48]	; 328334 <MakeNSPattern(PixelMap *, long)+0xfc>
        3282e8:	eb626793 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        3282ec:	e59d1000 	ldr	r1, [sp]
        3282f0:	e5810000 	str	r0, [r1]
        3282f4:	eb626798 	bl	1bc215c <$BinaryData(long)>
        3282f8:	e1a09000 	mov	r9, r0
        3282fc:	e3a00000 	mov	r0, #0	; 0x0
        328300:	e5b68018 	ldr	r8, [r6, #24]!
        328304:	e3540000 	cmp	r4, #0	; 0x0
        328308:	e52d0014 	str	r0, [sp, -#20]!
        32830c:	da000038 	ble	3283f4 <MakeNSPattern(PixelMap *, long)+0x1bc>
        328310:	e4da0001 	ldrb	r0, [sl], #1
        328314:	e3350004 	teq	r5, #4	; 0x4
        328318:	1a000006 	bne	328338 <MakeNSPattern(PixelMap *, long)+0x100>
        32831c:	e20010f0 	and	r1, r0, #240	; 0xf0
        328320:	e1a01221 	mov	r1, r1, lsr #4
        328324:	e5cd1004 	strb	r1, [sp, #4]
        328328:	e200000f 	and	r0, r0, #15	; 0xf
        32832c:	e5cd0005 	strb	r0, [sp, #5]
        328330:	ea00000d 	b	32836c <MakeNSPattern(PixelMap *, long)+0x134>
        328334:	00683040 	rsbeq	r3, r8, r0, asr #32
        328338:	e3350002 	teq	r5, #2	; 0x2
        32833c:	1a00000a 	bne	32836c <MakeNSPattern(PixelMap *, long)+0x134>
        328340:	e20010c0 	and	r1, r0, #192	; 0xc0
        328344:	e1a01321 	mov	r1, r1, lsr #6
        328348:	e5cd1004 	strb	r1, [sp, #4]
        32834c:	e2001030 	and	r1, r0, #48	; 0x30
        328350:	e1a01221 	mov	r1, r1, lsr #4
        328354:	e5cd1005 	strb	r1, [sp, #5]
        328358:	e200100c 	and	r1, r0, #12	; 0xc
        32835c:	e1a01121 	mov	r1, r1, lsr #2
        328360:	e5cd1006 	strb	r1, [sp, #6]
        328364:	e2000003 	and	r0, r0, #3	; 0x3
        328368:	e5cd0007 	strb	r0, [sp, #7]
        32836c:	e3a06000 	mov	r6, #0	; 0x0
        328370:	e3570000 	cmp	r7, #0	; 0x0
        328374:	da000019 	ble	3283e0 <MakeNSPattern(PixelMap *, long)+0x1a8>
        328378:	e28d0004 	add	r0, sp, #4	; 0x4
        32837c:	e7d00006 	ldrb	r0, [r0, r6]
        328380:	e3380000 	teq	r8, #0	; 0x0
        328384:	17d80000 	ldrneb	r0, [r8, r0]
        328388:	e1a03005 	mov	r3, r5
        32838c:	e92d0008 	stmdb	sp!, {r3}
        328390:	e28d300c 	add	r3, sp, #12	; 0xc
        328394:	e28d2010 	add	r2, sp, #16	; 0x10
        328398:	e28d1014 	add	r1, sp, #20	; 0x14
        32839c:	eb60c224 	bl	1b58c34 <$GrayToRGB__FUcPUlN22l>
        3283a0:	e28dd004 	add	sp, sp, #4	; 0x4
        3283a4:	e59d0010 	ldr	r0, [sp, #16]
        3283a8:	e5c90001 	strb	r0, [r9, #1]
        3283ac:	e1a00440 	mov	r0, r0, asr #8
        3283b0:	e4c90002 	strb	r0, [r9], #2
        3283b4:	e59d000c 	ldr	r0, [sp, #12]
        3283b8:	e5c90001 	strb	r0, [r9, #1]
        3283bc:	e1a00440 	mov	r0, r0, asr #8
        3283c0:	e4c90002 	strb	r0, [r9], #2
        3283c4:	e59d0008 	ldr	r0, [sp, #8]
        3283c8:	e5c90001 	strb	r0, [r9, #1]
        3283cc:	e1a00440 	mov	r0, r0, asr #8
        3283d0:	e4c90002 	strb	r0, [r9], #2
        3283d4:	e2866001 	add	r6, r6, #1	; 0x1
        3283d8:	e1560007 	cmp	r6, r7
        3283dc:	baffffe5 	blt	328378 <MakeNSPattern(PixelMap *, long)+0x140>
        3283e0:	e59d0000 	ldr	r0, [sp]
        3283e4:	e2800001 	add	r0, r0, #1	; 0x1
        3283e8:	e58d0000 	str	r0, [sp]
        3283ec:	e1500004 	cmp	r0, r4
        3283f0:	baffffc6 	blt	328310 <MakeNSPattern(PixelMap *, long)+0xd8>
        3283f4:	e28dd014 	add	sp, sp, #20	; 0x14
        3283f8:	e59d0000 	ldr	r0, [sp]
        3283fc:	e5904000 	ldr	r4, [r0]
        328400:	eb626b6d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        328404:	e1a00004 	mov	r0, r4
        328408:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeSimpleGrayPattern__FPlUlT2
 * Address: 0032840c
 */
void globals::MakeSimpleGrayPattern() {
    /*
        32840c:	e1a0c00d 	mov	ip, sp
        328410:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        328414:	e24cb004 	sub	fp, ip, #4	; 0x4
        328418:	e1a04000 	mov	r4, r0
        32841c:	e1a06001 	mov	r6, r1
        328420:	e1a05002 	mov	r5, r2
        328424:	e24dd008 	sub	sp, sp, #8	; 0x8
        328428:	eb609ce3 	bl	1b4f7bc <$GetCurrentPort(void)>
        32842c:	e5900010 	ldr	r0, [r0, #16]
        328430:	e3100c03 	tst	r0, #768	; 0x300
        328434:	159f0028 	ldrne	r0, [pc, #28]	; 328464 <MakeSimpleGrayPattern__FPlUlT2+0x58>
        328438:	15900010 	ldrne	r0, [r0, #16]
        32843c:	e200a0ff 	and	sl, r0, #255	; 0xff
        328440:	e26a0020 	rsb	r0, sl, #32	; 0x20
        328444:	e3e01000 	mvn	r1, #0	; 0x0
        328448:	e1a00031 	mov	r0, r1, lsr r0
        32844c:	e1300006 	teq	r0, r6
        328450:	03350000 	teqeq	r5, #0	; 0x0
        328454:	1a000003 	bne	328468 <MakeSimpleGrayPattern__FPlUlT2+0x5c>
        328458:	e1a00004 	mov	r0, r4
        32845c:	eb628c4b 	bl	1bcb590 <$MakeSimplePattern(char *)>
        328460:	ea00006f 	b	328624 <MakeSimpleGrayPattern__FPlUlT2+0x218>
        328464:	0c107d8c 	ldceq	13, cr7, [r0], -#560
        328468:	e1a0818a 	mov	r8, sl, lsl #3
        32846c:	e288001c 	add	r0, r8, #28	; 0x1c
        328470:	eb62e72d 	bl	1be212c <$NewHandle>
        328474:	e58d0000 	str	r0, [sp]
        328478:	e3300000 	teq	r0, #0	; 0x0
        32847c:	0a000067 	beq	328620 <MakeSimpleGrayPattern__FPlUlT2+0x214>
        328480:	e59d0000 	ldr	r0, [sp]
        328484:	e5909000 	ldr	r9, [r0]
        328488:	e289701c 	add	r7, r9, #28	; 0x1c
        32848c:	e3a0001c 	mov	r0, #28	; 0x1c
        328490:	e5890000 	str	r0, [r9]
        328494:	e1a00808 	mov	r0, r8, lsl #16
        328498:	e1a00840 	mov	r0, r0, asr #16
        32849c:	e1a001c0 	mov	r0, r0, asr #3
        3284a0:	e5c90005 	strb	r0, [r9, #5]
        3284a4:	e1a00440 	mov	r0, r0, asr #8
        3284a8:	e5c90004 	strb	r0, [r9, #4]
        3284ac:	e3a03008 	mov	r3, #8	; 0x8
        3284b0:	e92d0008 	stmdb	sp!, {r3}
        3284b4:	e0890003 	add	r0, r9, r3
        3284b8:	e3a02000 	mov	r2, #0	; 0x0
        3284bc:	e3a01000 	mov	r1, #0	; 0x0
        3284c0:	eb60b151 	bl	1b54a0c <$SetRect__FP4RectlN32>
        3284c4:	e28dd004 	add	sp, sp, #4	; 0x4
        3284c8:	e28a0102 	add	r0, sl, #-2147483648	; 0x80000000
        3284cc:	e3a01048 	mov	r1, #72	; 0x48
        3284d0:	e5890010 	str	r0, [r9, #16]
        3284d4:	e5c91015 	strb	r1, [r9, #21]
        3284d8:	e3a00000 	mov	r0, #0	; 0x0
        3284dc:	e5c90014 	strb	r0, [r9, #20]
        3284e0:	e5c91017 	strb	r1, [r9, #23]
        3284e4:	e5c90016 	strb	r0, [r9, #22]
        3284e8:	e33a0001 	teq	sl, #1	; 0x1
        3284ec:	e5a90018 	str	r0, [r9, #24]!
        3284f0:	0a00001b 	beq	328564 <MakeSimpleGrayPattern__FPlUlT2+0x158>
        3284f4:	e1a03206 	mov	r3, r6, lsl #4
        3284f8:	e1a01205 	mov	r1, r5, lsl #4
        3284fc:	e33a0002 	teq	sl, #2	; 0x2
        328500:	0a00001c 	beq	328578 <MakeSimpleGrayPattern__FPlUlT2+0x16c>
        328504:	e33a0004 	teq	sl, #4	; 0x4
        328508:	1a000044 	bne	328620 <MakeSimpleGrayPattern__FPlUlT2+0x214>
        32850c:	e3a00102 	mov	r0, #-2147483648	; 0x80000000
        328510:	e3380000 	teq	r8, #0	; 0x0
        328514:	0a000041 	beq	328620 <MakeSimpleGrayPattern__FPlUlT2+0x214>
        328518:	e5942000 	ldr	r2, [r4]
        32851c:	e1120000 	tst	r2, r0
        328520:	01a02001 	moveq	r2, r1
        328524:	11a02003 	movne	r2, r3
        328528:	e5c72000 	strb	r2, [r7]
        32852c:	e1a000a0 	mov	r0, r0, lsr #1
        328530:	e5942000 	ldr	r2, [r4]
        328534:	e1120000 	tst	r2, r0
        328538:	01a02005 	moveq	r2, r5
        32853c:	11a02006 	movne	r2, r6
        328540:	e5d7c000 	ldrb	ip, [r7]
        328544:	e182200c 	orr	r2, r2, ip
        328548:	e4c72001 	strb	r2, [r7], #1
        32854c:	e1b000a0 	movs	r0, r0, lsr #1
        328550:	03a00102 	moveq	r0, #-2147483648	; 0x80000000
        328554:	02844004 	addeq	r4, r4, #4	; 0x4
        328558:	e2588001 	subs	r8, r8, #1	; 0x1
        32855c:	1affffed 	bne	328518 <MakeSimpleGrayPattern__FPlUlT2+0x10c>
        328560:	ea00002e 	b	328620 <MakeSimpleGrayPattern__FPlUlT2+0x214>
        328564:	e1a01007 	mov	r1, r7
        328568:	e1a00004 	mov	r0, r4
        32856c:	e3a02008 	mov	r2, #8	; 0x8
        328570:	eb62da77 	bl	1bdef54 <$BlockMove>
        328574:	ea000029 	b	328620 <MakeSimpleGrayPattern__FPlUlT2+0x214>
        328578:	e3a00102 	mov	r0, #-2147483648	; 0x80000000
        32857c:	e1b02008 	movs	r2, r8
        328580:	0a000026 	beq	328620 <MakeSimpleGrayPattern__FPlUlT2+0x214>
        328584:	e1a0e306 	mov	lr, r6, lsl #6
        328588:	e1a0c305 	mov	ip, r5, lsl #6
        32858c:	e1a09106 	mov	r9, r6, lsl #2
        328590:	e1a0a105 	mov	sl, r5, lsl #2
        328594:	e58d9004 	str	r9, [sp, #4]
        328598:	e5948000 	ldr	r8, [r4]
        32859c:	e1180000 	tst	r8, r0
        3285a0:	01a0800c 	moveq	r8, ip
        3285a4:	11a0800e 	movne	r8, lr
        3285a8:	e5c78000 	strb	r8, [r7]
        3285ac:	e1a000a0 	mov	r0, r0, lsr #1
        3285b0:	e5948000 	ldr	r8, [r4]
        3285b4:	e1180000 	tst	r8, r0
        3285b8:	01a08001 	moveq	r8, r1
        3285bc:	11a08003 	movne	r8, r3
        3285c0:	e5d79000 	ldrb	r9, [r7]
        3285c4:	e1888009 	orr	r8, r8, r9
        3285c8:	e5c78000 	strb	r8, [r7]
        3285cc:	e1a000a0 	mov	r0, r0, lsr #1
        3285d0:	e5948000 	ldr	r8, [r4]
        3285d4:	e1180000 	tst	r8, r0
        3285d8:	01a0800a 	moveq	r8, sl
        3285dc:	159d8004 	ldrne	r8, [sp, #4]
        3285e0:	e5d79000 	ldrb	r9, [r7]
        3285e4:	e1888009 	orr	r8, r8, r9
        3285e8:	e5c78000 	strb	r8, [r7]
        3285ec:	e1a000a0 	mov	r0, r0, lsr #1
        3285f0:	e5948000 	ldr	r8, [r4]
        3285f4:	e1180000 	tst	r8, r0
        3285f8:	01a08005 	moveq	r8, r5
        3285fc:	11a08006 	movne	r8, r6
        328600:	e5d79000 	ldrb	r9, [r7]
        328604:	e1888009 	orr	r8, r8, r9
        328608:	e4c78001 	strb	r8, [r7], #1
        32860c:	e1b000a0 	movs	r0, r0, lsr #1
        328610:	03a00102 	moveq	r0, #-2147483648	; 0x80000000
        328614:	02844004 	addeq	r4, r4, #4	; 0x4
        328618:	e2522001 	subs	r2, r2, #1	; 0x1
        32861c:	1affffdd 	bne	328598 <MakeSimpleGrayPattern__FPlUlT2+0x18c>
        328620:	e59d0000 	ldr	r0, [sp]
        328624:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MonochromePat(PixelMap **, unsigned long *)
 * Address: 00328768
 */
MonochromePat(PixelMap **, unsigned long *) {
    /*
        328768:	e1a0c00d 	mov	ip, sp
        32876c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        328770:	e24cb004 	sub	fp, ip, #4	; 0x4
        328774:	e1a05000 	mov	r5, r0
        328778:	e1a04001 	mov	r4, r1
        32877c:	e5900000 	ldr	r0, [r0]
        328780:	e1a06000 	mov	r6, r0
        328784:	eb638f9f 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        328788:	e4d01001 	ldrb	r1, [r0], #1
        32878c:	e1a02000 	mov	r2, r0
        328790:	e5950000 	ldr	r0, [r5]
        328794:	e5900010 	ldr	r0, [r0, #16]
        328798:	e20030ff 	and	r3, r0, #255	; 0xff
        32879c:	e3a00000 	mov	r0, #0	; 0x0
        3287a0:	e3330001 	teq	r3, #1	; 0x1
        3287a4:	0a00000b 	beq	3287d8 <MonochromePat(PixelMap **, unsigned long *)+0x70>
        3287a8:	e3330002 	teq	r3, #2	; 0x2
        3287ac:	0a000010 	beq	3287f4 <MonochromePat(PixelMap **, unsigned long *)+0x8c>
        3287b0:	e3330004 	teq	r3, #4	; 0x4
        3287b4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        3287b8:	e201000f 	and	r0, r1, #15	; 0xf
        3287bc:	e1a03000 	mov	r3, r0
        3287c0:	e201c0f0 	and	ip, r1, #240	; 0xf0
        3287c4:	e130022c 	teq	r0, ip, lsr #4
        3287c8:	13a00000 	movne	r0, #0	; 0x0
        3287cc:	03a00001 	moveq	r0, #1	; 0x1
        3287d0:	e20000ff 	and	r0, r0, #255	; 0xff
        3287d4:	ea00000e 	b	328814 <MonochromePat(PixelMap **, unsigned long *)+0xac>
        3287d8:	e3310000 	teq	r1, #0	; 0x0
        3287dc:	133100ff 	teqne	r1, #255	; 0xff
        3287e0:	03a00001 	moveq	r0, #1	; 0x1
        3287e4:	13a00000 	movne	r0, #0	; 0x0
        3287e8:	e20000ff 	and	r0, r0, #255	; 0xff
        3287ec:	e2013001 	and	r3, r1, #1	; 0x1
        3287f0:	ea000007 	b	328814 <MonochromePat(PixelMap **, unsigned long *)+0xac>
        3287f4:	e3310000 	teq	r1, #0	; 0x0
        3287f8:	13310055 	teqne	r1, #85	; 0x55
        3287fc:	133100aa 	teqne	r1, #170	; 0xaa
        328800:	133100ff 	teqne	r1, #255	; 0xff
        328804:	03a00001 	moveq	r0, #1	; 0x1
        328808:	13a00000 	movne	r0, #0	; 0x0
        32880c:	e20000ff 	and	r0, r0, #255	; 0xff
        328810:	e2013003 	and	r3, r1, #3	; 0x3
        328814:	e3300000 	teq	r0, #0	; 0x0
        328818:	e5843000 	str	r3, [r4]
        32881c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        328820:	e5963004 	ldr	r3, [r6, #4]
        328824:	e1a03843 	mov	r3, r3, asr #16
        328828:	e596c00c 	ldr	ip, [r6, #12]
        32882c:	e1a0c84c 	mov	ip, ip, asr #16
        328830:	e596e008 	ldr	lr, [r6, #8]
        328834:	e04cc84e 	sub	ip, ip, lr, asr #16
        328838:	e003039c 	mul	r3, ip, r3
        32883c:	e2433001 	sub	r3, r3, #1	; 0x1
        328840:	e3530000 	cmp	r3, #0	; 0x0
        328844:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        328848:	e4d2c001 	ldrb	ip, [r2], #1
        32884c:	e13c0001 	teq	ip, r1
        328850:	13a00000 	movne	r0, #0	; 0x0
        328854:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        328858:	e2433001 	sub	r3, r3, #1	; 0x1
        32885c:	e3530000 	cmp	r3, #0	; 0x0
        328860:	cafffff8 	bgt	328848 <MonochromePat(PixelMap **, unsigned long *)+0xe0>
        328864:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: MakeGrayPattern(RefVar const &)
 * Address: 00328fc0
 */
MakeGrayPattern(RefVar const &) {
    /*
        328fc0:	e1a0c00d 	mov	ip, sp
        328fc4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        328fc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        328fcc:	e1a04000 	mov	r4, r0
        328fd0:	e24dd034 	sub	sp, sp, #52	; 0x34
        328fd4:	eb6099f8 	bl	1b4f7bc <$GetCurrentPort(void)>
        328fd8:	e5900010 	ldr	r0, [r0, #16]
        328fdc:	e3100c03 	tst	r0, #768	; 0x300
        328fe0:	159f0048 	ldrne	r0, [pc, #48]	; 329030 <MakeGrayPattern(RefVar const &)+0x70>
        328fe4:	15900010 	ldrne	r0, [r0, #16]
        328fe8:	e20060ff 	and	r6, r0, #255	; 0xff
        328fec:	e24dd008 	sub	sp, sp, #8	; 0x8
        328ff0:	e5940000 	ldr	r0, [r4]
        328ff4:	e5900000 	ldr	r0, [r0]
        328ff8:	eb626453 	bl	1bc214c <$AllocateRefHandle(long)>
        328ffc:	e58d0000 	str	r0, [sp]
        329000:	e5900000 	ldr	r0, [r0]
        329004:	eb6270a8 	bl	1bc52ac <$Length(long)>
        329008:	e1a01000 	mov	r1, r0
        32900c:	e3a00006 	mov	r0, #6	; 0x6
        329010:	eb62264c 	bl	1bb2948 <$__rt_udiv>
        329014:	e1b07000 	movs	r7, r0
        329018:	e3a0a000 	mov	sl, #0	; 0x0
        32901c:	1a000004 	bne	329034 <MakeGrayPattern(RefVar const &)+0x74>
        329020:	e3a00004 	mov	r0, #4	; 0x4
        329024:	eb6099ed 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        329028:	e1a04000 	mov	r4, r0
        32902c:	ea0000bb 	b	329320 <MakeGrayPattern(RefVar const &)+0x360>
        329030:	0c107d8c 	ldceq	13, cr7, [r0], -#560
        329034:	e59d0000 	ldr	r0, [sp]
        329038:	e5900000 	ldr	r0, [r0]
        32903c:	eb626446 	bl	1bc215c <$BinaryData(long)>
        329040:	e1a04000 	mov	r4, r0
        329044:	e1b05007 	movs	r5, r7
        329048:	42855007 	addmi	r5, r5, #7	; 0x7
        32904c:	e1b051c5 	movs	r5, r5, asr #3
        329050:	1a000029 	bne	3290fc <MakeGrayPattern(RefVar const &)+0x13c>
        329054:	e0872087 	add	r2, r7, r7, lsl #1
        329058:	e1a02082 	mov	r2, r2, lsl #1
        32905c:	e28d100c 	add	r1, sp, #12	; 0xc
        329060:	e1a00004 	mov	r0, r4
        329064:	eb62d7ba 	bl	1bdef54 <$BlockMove>
        329068:	e1a01004 	mov	r1, r4
        32906c:	e1a02007 	mov	r2, r7
        329070:	e0870087 	add	r0, r7, r7, lsl #1
        329074:	e3500018 	cmp	r0, #24	; 0x18
        329078:	aa00001d 	bge	3290f4 <MakeGrayPattern(RefVar const &)+0x134>
        32907c:	e4943002 	ldr	r3, [r4], #2
        329080:	e1a03823 	mov	r3, r3, lsr #16
        329084:	e1a0c000 	mov	ip, r0
        329088:	e2800001 	add	r0, r0, #1	; 0x1
        32908c:	e28de00c 	add	lr, sp, #12	; 0xc
        329090:	e08ec08c 	add	ip, lr, ip, lsl #1
        329094:	e5cc3001 	strb	r3, [ip, #1]
        329098:	e1a03443 	mov	r3, r3, asr #8
        32909c:	e5cc3000 	strb	r3, [ip]
        3290a0:	e494c002 	ldr	ip, [r4], #2
        3290a4:	e1a0c82c 	mov	ip, ip, lsr #16
        3290a8:	e2803001 	add	r3, r0, #1	; 0x1
        3290ac:	e28de00c 	add	lr, sp, #12	; 0xc
        3290b0:	e08e0080 	add	r0, lr, r0, lsl #1
        3290b4:	e5c0c001 	strb	ip, [r0, #1]
        3290b8:	e1a0c44c 	mov	ip, ip, asr #8
        3290bc:	e5c0c000 	strb	ip, [r0]
        3290c0:	e494c002 	ldr	ip, [r4], #2
        3290c4:	e1a0c82c 	mov	ip, ip, lsr #16
        3290c8:	e2830001 	add	r0, r3, #1	; 0x1
        3290cc:	e28de00c 	add	lr, sp, #12	; 0xc
        3290d0:	e08e3083 	add	r3, lr, r3, lsl #1
        3290d4:	e5c3c001 	strb	ip, [r3, #1]
        3290d8:	e1a0c44c 	mov	ip, ip, asr #8
        3290dc:	e5c3c000 	strb	ip, [r3]
        3290e0:	e2577001 	subs	r7, r7, #1	; 0x1
        3290e4:	01a07002 	moveq	r7, r2
        3290e8:	01a04001 	moveq	r4, r1
        3290ec:	e3500018 	cmp	r0, #24	; 0x18
        3290f0:	baffffe1 	blt	32907c <MakeGrayPattern(RefVar const &)+0xbc>
        3290f4:	e28d400c 	add	r4, sp, #12	; 0xc
        3290f8:	e3a05001 	mov	r5, #1	; 0x1
        3290fc:	e3a0801c 	mov	r8, #28	; 0x1c
        329100:	e0880186 	add	r0, r8, r6, lsl #3
        329104:	eb62e408 	bl	1be212c <$NewHandle>
        329108:	e58d0004 	str	r0, [sp, #4]
        32910c:	e3300000 	teq	r0, #0	; 0x0
        329110:	0a00007e 	beq	329310 <MakeGrayPattern(RefVar const &)+0x350>
        329114:	e59d0004 	ldr	r0, [sp, #4]
        329118:	e5907000 	ldr	r7, [r0]
        32911c:	e287901c 	add	r9, r7, #28	; 0x1c
        329120:	e5878000 	str	r8, [r7]
        329124:	e5c76005 	strb	r6, [r7, #5]
        329128:	e1a00446 	mov	r0, r6, asr #8
        32912c:	e5c70004 	strb	r0, [r7, #4]
        329130:	e3a03008 	mov	r3, #8	; 0x8
        329134:	e92d0008 	stmdb	sp!, {r3}
        329138:	e0870003 	add	r0, r7, r3
        32913c:	e3a02000 	mov	r2, #0	; 0x0
        329140:	e3a01000 	mov	r1, #0	; 0x0
        329144:	eb60ae30 	bl	1b54a0c <$SetRect__FP4RectlN32>
        329148:	e2860102 	add	r0, r6, #-2147483648	; 0x80000000
        32914c:	e5870010 	str	r0, [r7, #16]
        329150:	e3a00048 	mov	r0, #72	; 0x48
        329154:	e5c70015 	strb	r0, [r7, #21]
        329158:	e5c7a014 	strb	sl, [r7, #20]
        32915c:	e5c70017 	strb	r0, [r7, #23]
        329160:	e5c7a016 	strb	sl, [r7, #22]
        329164:	e5a7a018 	str	sl, [r7, #24]!
        329168:	e24dd004 	sub	sp, sp, #4	; 0x4
        32916c:	e3360001 	teq	r6, #1	; 0x1
        329170:	e58d4010 	str	r4, [sp, #16]
        329174:	e58d5004 	str	r5, [sp, #4]
        329178:	0a000029 	beq	329224 <MakeGrayPattern(RefVar const &)+0x264>
        32917c:	e3360002 	teq	r6, #2	; 0x2
        329180:	0a000043 	beq	329294 <MakeGrayPattern(RefVar const &)+0x2d4>
        329184:	e3360004 	teq	r6, #4	; 0x4
        329188:	1a000023 	bne	32921c <MakeGrayPattern(RefVar const &)+0x25c>
        32918c:	e3a08008 	mov	r8, #8	; 0x8
        329190:	e3a07004 	mov	r7, #4	; 0x4
        329194:	e5940000 	ldr	r0, [r4]
        329198:	e1a00820 	mov	r0, r0, lsr #16
        32919c:	e5b41002 	ldr	r1, [r4, #2]!
        3291a0:	e1a01821 	mov	r1, r1, lsr #16
        3291a4:	e5b42002 	ldr	r2, [r4, #2]!
        3291a8:	e1a02822 	mov	r2, r2, lsr #16
        3291ac:	e2844002 	add	r4, r4, #2	; 0x2
        3291b0:	e1a03006 	mov	r3, r6
        3291b4:	e92d0008 	stmdb	sp!, {r3}
        3291b8:	e3a03010 	mov	r3, #16	; 0x10
        3291bc:	eb60b242 	bl	1b55acc <$RGBtoGray__FUlN21lT4>
        3291c0:	e28dd004 	add	sp, sp, #4	; 0x4
        3291c4:	e1a0a200 	mov	sl, r0, lsl #4
        3291c8:	e5940000 	ldr	r0, [r4]
        3291cc:	e1a00820 	mov	r0, r0, lsr #16
        3291d0:	e5b41002 	ldr	r1, [r4, #2]!
        3291d4:	e1a01821 	mov	r1, r1, lsr #16
        3291d8:	e5b42002 	ldr	r2, [r4, #2]!
        3291dc:	e1a02822 	mov	r2, r2, lsr #16
        3291e0:	e2844002 	add	r4, r4, #2	; 0x2
        3291e4:	e1a03006 	mov	r3, r6
        3291e8:	e92d0008 	stmdb	sp!, {r3}
        3291ec:	e3a03010 	mov	r3, #16	; 0x10
        3291f0:	eb60b235 	bl	1b55acc <$RGBtoGray__FUlN21lT4>
        3291f4:	e28dd004 	add	sp, sp, #4	; 0x4
        3291f8:	e180000a 	orr	r0, r0, sl
        3291fc:	e4c90001 	strb	r0, [r9], #1
        329200:	e2577001 	subs	r7, r7, #1	; 0x1
        329204:	1affffe2 	bne	329194 <MakeGrayPattern(RefVar const &)+0x1d4>
        329208:	e2555001 	subs	r5, r5, #1	; 0x1
        32920c:	059d4010 	ldreq	r4, [sp, #16]
        329210:	059d5004 	ldreq	r5, [sp, #4]
        329214:	e2588001 	subs	r8, r8, #1	; 0x1
        329218:	1affffdc 	bne	329190 <MakeGrayPattern(RefVar const &)+0x1d0>
        32921c:	e28dd008 	add	sp, sp, #8	; 0x8
        329220:	ea00003d 	b	32931c <MakeGrayPattern(RefVar const &)+0x35c>
        329224:	e3a0a008 	mov	sl, #8	; 0x8
        329228:	e3a07080 	mov	r7, #128	; 0x80
        32922c:	e3a08000 	mov	r8, #0	; 0x0
        329230:	e5940000 	ldr	r0, [r4]
        329234:	e1a00820 	mov	r0, r0, lsr #16
        329238:	e5b41002 	ldr	r1, [r4, #2]!
        32923c:	e1a01821 	mov	r1, r1, lsr #16
        329240:	e5b42002 	ldr	r2, [r4, #2]!
        329244:	e1a02822 	mov	r2, r2, lsr #16
        329248:	e2844002 	add	r4, r4, #2	; 0x2
        32924c:	e1a03006 	mov	r3, r6
        329250:	e92d0008 	stmdb	sp!, {r3}
        329254:	e3a03010 	mov	r3, #16	; 0x10
        329258:	eb60b21b 	bl	1b55acc <$RGBtoGray__FUlN21lT4>
        32925c:	e28dd004 	add	sp, sp, #4	; 0x4
        329260:	e3300000 	teq	r0, #0	; 0x0
        329264:	11880007 	orrne	r0, r8, r7
        329268:	120080ff 	andne	r8, r0, #255	; 0xff
        32926c:	e1a000c7 	mov	r0, r7, asr #1
        329270:	e21070ff 	ands	r7, r0, #255	; 0xff
        329274:	1affffed 	bne	329230 <MakeGrayPattern(RefVar const &)+0x270>
        329278:	e4c98001 	strb	r8, [r9], #1
        32927c:	e2555001 	subs	r5, r5, #1	; 0x1
        329280:	059d4010 	ldreq	r4, [sp, #16]
        329284:	059d5004 	ldreq	r5, [sp, #4]
        329288:	e25aa001 	subs	sl, sl, #1	; 0x1
        32928c:	1affffe5 	bne	329228 <MakeGrayPattern(RefVar const &)+0x268>
        329290:	eaffffe1 	b	32921c <MakeGrayPattern(RefVar const &)+0x25c>
        329294:	e3a00008 	mov	r0, #8	; 0x8
        329298:	e58d0000 	str	r0, [sp]
        32929c:	e3a0a002 	mov	sl, #2	; 0x2
        3292a0:	e3a07006 	mov	r7, #6	; 0x6
        3292a4:	e3a08000 	mov	r8, #0	; 0x0
        3292a8:	e5940000 	ldr	r0, [r4]
        3292ac:	e1a00820 	mov	r0, r0, lsr #16
        3292b0:	e5b41002 	ldr	r1, [r4, #2]!
        3292b4:	e1a01821 	mov	r1, r1, lsr #16
        3292b8:	e5b42002 	ldr	r2, [r4, #2]!
        3292bc:	e1a02822 	mov	r2, r2, lsr #16
        3292c0:	e2844002 	add	r4, r4, #2	; 0x2
        3292c4:	e1a03006 	mov	r3, r6
        3292c8:	e92d0008 	stmdb	sp!, {r3}
        3292cc:	e3a03010 	mov	r3, #16	; 0x10
        3292d0:	eb60b1fd 	bl	1b55acc <$RGBtoGray__FUlN21lT4>
        3292d4:	e28dd004 	add	sp, sp, #4	; 0x4
        3292d8:	e1888710 	orr	r8, r8, r0, lsl r7
        3292dc:	e2577002 	subs	r7, r7, #2	; 0x2
        3292e0:	5afffff0 	bpl	3292a8 <MakeGrayPattern(RefVar const &)+0x2e8>
        3292e4:	e4c98001 	strb	r8, [r9], #1
        3292e8:	e25aa001 	subs	sl, sl, #1	; 0x1
        3292ec:	1affffeb 	bne	3292a0 <MakeGrayPattern(RefVar const &)+0x2e0>
        3292f0:	e2555001 	subs	r5, r5, #1	; 0x1
        3292f4:	059d4010 	ldreq	r4, [sp, #16]
        3292f8:	059d5004 	ldreq	r5, [sp, #4]
        3292fc:	e59d0000 	ldr	r0, [sp]
        329300:	e2500001 	subs	r0, r0, #1	; 0x1
        329304:	e58d0000 	str	r0, [sp]
        329308:	1affffe3 	bne	32929c <MakeGrayPattern(RefVar const &)+0x2dc>
        32930c:	eaffffc2 	b	32921c <MakeGrayPattern(RefVar const &)+0x25c>
        329310:	e3a00004 	mov	r0, #4	; 0x4
        329314:	eb609931 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        329318:	e58d0004 	str	r0, [sp, #4]
        32931c:	e59d4004 	ldr	r4, [sp, #4]
        329320:	e59d0000 	ldr	r0, [sp]
        329324:	eb6267a4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        329328:	e1a00004 	mov	r0, r4
        32932c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MoveTo__FlT1
 * Address: 003297f4
 */
void globals::MoveTo() {
    /*
        3297f4:	e1a0c00d 	mov	ip, sp
        3297f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        3297fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        329800:	e1a05000 	mov	r5, r0
        329804:	e1a04001 	mov	r4, r1
        329808:	eb6097eb 	bl	1b4f7bc <$GetCurrentPort(void)>
        32980c:	e5c05037 	strb	r5, [r0, #55]
        329810:	e1a01445 	mov	r1, r5, asr #8
        329814:	e5c01036 	strb	r1, [r0, #54]
        329818:	e5c04035 	strb	r4, [r0, #53]
        32981c:	e1a01444 	mov	r1, r4, asr #8
        329820:	e5c01034 	strb	r1, [r0, #52]
        329824:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: Move__FlT1
 * Address: 00329828
 */
void globals::Move() {
    /*
        329828:	e1a0c00d 	mov	ip, sp
        32982c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        329830:	e24cb004 	sub	fp, ip, #4	; 0x4
        329834:	e1a05000 	mov	r5, r0
        329838:	e1a04001 	mov	r4, r1
        32983c:	eb6097de 	bl	1b4f7bc <$GetCurrentPort(void)>
        329840:	e5901036 	ldr	r1, [r0, #54]
        329844:	e1a01821 	mov	r1, r1, lsr #16
        329848:	e0811005 	add	r1, r1, r5
        32984c:	e5c01037 	strb	r1, [r0, #55]
        329850:	e1a01441 	mov	r1, r1, asr #8
        329854:	e5c01036 	strb	r1, [r0, #54]
        329858:	e5901034 	ldr	r1, [r0, #52]
        32985c:	e1a01821 	mov	r1, r1, lsr #16
        329860:	e0811004 	add	r1, r1, r4
        329864:	e5c01035 	strb	r1, [r0, #53]
        329868:	e1a01441 	mov	r1, r1, asr #8
        32986c:	e5c01034 	strb	r1, [r0, #52]
        329870:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: MungeStyleFrame(long, PicPlay *, GrafPort *)
 * Address: 0033113c
 */
MungeStyleFrame(long, PicPlay *, GrafPort *) {
    /*
        33113c:	e3320000 	teq	r2, #0	; 0x0
        331140:	01a0f00e 	moveq	pc, lr
        331144:	e1a0c00d 	mov	ip, sp
        331148:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        33114c:	e24cb004 	sub	fp, ip, #4	; 0x4
        331150:	e1a04000 	mov	r4, r0
        331154:	e1a06001 	mov	r6, r1
        331158:	e1a05002 	mov	r5, r2
        33115c:	e24dd004 	sub	sp, sp, #4	; 0x4
        331160:	e2810f4b 	add	r0, r1, #300	; 0x12c
        331164:	e1a09000 	mov	r9, r0
        331168:	e5900000 	ldr	r0, [r0]
        33116c:	e5900000 	ldr	r0, [r0]
        331170:	eb6243f5 	bl	1bc214c <$AllocateRefHandle(long)>
        331174:	e58d0000 	str	r0, [sp]
        331178:	e5900000 	ldr	r0, [r0]
        33117c:	e3300002 	teq	r0, #2	; 0x2
        331180:	1a000002 	bne	331190 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x54>
        331184:	eb6243ed 	bl	1bc2140 <$AllocateFrame(void)>
        331188:	e59d1000 	ldr	r1, [sp]
        33118c:	e5810000 	str	r0, [r1]
        331190:	e24dd008 	sub	sp, sp, #8	; 0x8
        331194:	e595002c 	ldr	r0, [r5, #44]
        331198:	eb60a2c4 	bl	1b59cb0 <$GetNSPattern(PixelMap **)>
        33119c:	eb6243ea 	bl	1bc214c <$AllocateRefHandle(long)>
        3311a0:	e58d0004 	str	r0, [sp, #4]
        3311a4:	e595003c 	ldr	r0, [r5, #60]
        3311a8:	e1a00840 	mov	r0, r0, asr #16
        3311ac:	e3500008 	cmp	r0, #8	; 0x8
        3311b0:	a3a00000 	movge	r0, #0	; 0x0
        3311b4:	e1a00100 	mov	r0, r0, lsl #2
        3311b8:	eb6243e3 	bl	1bc214c <$AllocateRefHandle(long)>
        3311bc:	e58d0000 	str	r0, [sp]
        3311c0:	e59f1068 	ldr	r1, [pc, #68]	; 331230 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0xf4>
        3311c4:	e59f8068 	ldr	r8, [pc, #68]	; 331234 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0xf8>
        3311c8:	e59f7068 	ldr	r7, [pc, #68]	; 331238 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0xfc>
        3311cc:	e3a0a000 	mov	sl, #0	; 0x0
        3311d0:	e3540020 	cmp	r4, #32	; 0x20
        3311d4:	ba000018 	blt	33123c <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x100>
        3311d8:	e3540023 	cmp	r4, #35	; 0x23
        3311dc:	ca000016 	bgt	33123c <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x100>
        3311e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3311e4:	e28d2008 	add	r2, sp, #8	; 0x8
        3311e8:	e28d000c 	add	r0, sp, #12	; 0xc
        3311ec:	eb62545d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        3311f0:	e595003a 	ldr	r0, [r5, #58]
        3311f4:	e1a00840 	mov	r0, r0, asr #16
        3311f8:	e1a00100 	mov	r0, r0, lsl #2
        3311fc:	eb6243d2 	bl	1bc214c <$AllocateRefHandle(long)>
        331200:	e58d0000 	str	r0, [sp]
        331204:	e1a0200d 	mov	r2, sp
        331208:	e1a01008 	mov	r1, r8
        33120c:	e28d000c 	add	r0, sp, #12	; 0xc
        331210:	eb625454 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        331214:	e59d0000 	ldr	r0, [sp]
        331218:	eb6247e7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        33121c:	e28d2004 	add	r2, sp, #4	; 0x4
        331220:	e1a01007 	mov	r1, r7
        331224:	e28d000c 	add	r0, sp, #12	; 0xc
        331228:	eb62544e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        33122c:	ea00003c 	b	331324 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x1e8>
        331230:	00683d90 	streqb	r3, [r8], -#208
        331234:	00683d98 	streqb	r3, [r8], -#216
        331238:	00684c60 	rsbeq	r4, r8, r0, ror #24
        33123c:	e244cc81 	sub	ip, r4, #33024	; 0x8100
        331240:	e33c00a3 	teq	ip, #163	; 0xa3
        331244:	0a000003 	beq	331258 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x11c>
        331248:	e3540028 	cmp	r4, #40	; 0x28
        33124c:	ba000023 	blt	3312e0 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x1a4>
        331250:	e354002b 	cmp	r4, #43	; 0x2b
        331254:	ca000021 	bgt	3312e0 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x1a4>
        331258:	e24dd008 	sub	sp, sp, #8	; 0x8
        33125c:	e28d2008 	add	r2, sp, #8	; 0x8
        331260:	e1a01007 	mov	r1, r7
        331264:	e28d0010 	add	r0, sp, #16	; 0x10
        331268:	eb62543e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        33126c:	e1a00006 	mov	r0, r6
        331270:	eb60a28d 	bl	1b59cac <$GetNSFont(PicPlay *)>
        331274:	eb6243b4 	bl	1bc214c <$AllocateRefHandle(long)>
        331278:	e58d0000 	str	r0, [sp]
        33127c:	e1a0200d 	mov	r2, sp
        331280:	e59f1048 	ldr	r1, [pc, #48]	; 3312d0 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x194>
        331284:	e28d0010 	add	r0, sp, #16	; 0x10
        331288:	eb625436 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        33128c:	e59d0000 	ldr	r0, [sp]
        331290:	eb6247c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331294:	e59f2038 	ldr	r2, [pc, #38]	; 3312d4 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x198>
        331298:	e59f1038 	ldr	r1, [pc, #38]	; 3312d8 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x19c>
        33129c:	e28d0010 	add	r0, sp, #16	; 0x10
        3312a0:	eb625430 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        3312a4:	e3a00014 	mov	r0, #20	; 0x14
        3312a8:	eb6243a7 	bl	1bc214c <$AllocateRefHandle(long)>
        3312ac:	e58d0004 	str	r0, [sp, #4]
        3312b0:	e28d2004 	add	r2, sp, #4	; 0x4
        3312b4:	e59f1020 	ldr	r1, [pc, #20]	; 3312dc <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x1a0>
        3312b8:	e28d0010 	add	r0, sp, #16	; 0x10
        3312bc:	eb625429 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        3312c0:	e59d0004 	ldr	r0, [sp, #4]
        3312c4:	eb6247bc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3312c8:	e28dd008 	add	sp, sp, #8	; 0x8
        3312cc:	ea000072 	b	33149c <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x360>
        3312d0:	00682e30 	rsbeq	r2, r8, r0, lsr lr
        3312d4:	006834e0 	rsbeq	r3, r8, r0, ror #9
        3312d8:	00683368 	rsbeq	r3, r8, r8, ror #6
        3312dc:	00684ae8 	rsbeq	r4, r8, r8, ror #21
        3312e0:	e3540090 	cmp	r4, #144	; 0x90
        3312e4:	ba000010 	blt	33132c <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x1f0>
        3312e8:	e354009b 	cmp	r4, #155	; 0x9b
        3312ec:	ca00000e 	bgt	33132c <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x1f0>
        3312f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        3312f4:	e5b60104 	ldr	r0, [r6, #260]!
        3312f8:	e3500008 	cmp	r0, #8	; 0x8
        3312fc:	a3a00000 	movge	r0, #0	; 0x0
        331300:	e1a00100 	mov	r0, r0, lsl #2
        331304:	eb624390 	bl	1bc214c <$AllocateRefHandle(long)>
        331308:	e58d0000 	str	r0, [sp]
        33130c:	e1a0200d 	mov	r2, sp
        331310:	e1a01007 	mov	r1, r7
        331314:	e28d000c 	add	r0, sp, #12	; 0xc
        331318:	eb625412 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        33131c:	e59d0000 	ldr	r0, [sp]
        331320:	eb6247a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331324:	e28dd004 	add	sp, sp, #4	; 0x4
        331328:	ea00005b 	b	33149c <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x360>
        33132c:	e2040007 	and	r0, r4, #7	; 0x7
        331330:	e59f4050 	ldr	r4, [pc, #50]	; 331388 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x24c>
        331334:	e3500004 	cmp	r0, #4	; 0x4
        331338:	908ff100 	addls	pc, pc, r0, lsl #2
        33133c:	ea000054 	b	331494 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x358>
        331340:	ea000011 	b	33138c <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x250>
        331344:	ea000024 	b	3313dc <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x2a0>
        331348:	ea000029 	b	3313f4 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x2b8>
        33134c:	ea00003c 	b	331444 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x308>
        331350:	e24dd018 	sub	sp, sp, #24	; 0x18
        331354:	e28d201c 	add	r2, sp, #28	; 0x1c
        331358:	e1a01004 	mov	r1, r4
        33135c:	e28d0020 	add	r0, sp, #32	; 0x20
        331360:	eb625400 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        331364:	e3a00020 	mov	r0, #32	; 0x20
        331368:	eb624377 	bl	1bc214c <$AllocateRefHandle(long)>
        33136c:	e58d0014 	str	r0, [sp, #20]
        331370:	e28d2014 	add	r2, sp, #20	; 0x14
        331374:	e1a01007 	mov	r1, r7
        331378:	e28d0020 	add	r0, sp, #32	; 0x20
        33137c:	eb6253f9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        331380:	e59d0014 	ldr	r0, [sp, #20]
        331384:	ea000040 	b	33148c <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x350>
        331388:	00682d80 	rsbeq	r2, r8, r0, lsl #27
        33138c:	e24dd018 	sub	sp, sp, #24	; 0x18
        331390:	e28d201c 	add	r2, sp, #28	; 0x1c
        331394:	e28d0020 	add	r0, sp, #32	; 0x20
        331398:	eb6253f2 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        33139c:	e595003a 	ldr	r0, [r5, #58]
        3313a0:	e1a00840 	mov	r0, r0, asr #16
        3313a4:	e1a00100 	mov	r0, r0, lsl #2
        3313a8:	eb624367 	bl	1bc214c <$AllocateRefHandle(long)>
        3313ac:	e58d0000 	str	r0, [sp]
        3313b0:	e1a0200d 	mov	r2, sp
        3313b4:	e1a01008 	mov	r1, r8
        3313b8:	e28d0020 	add	r0, sp, #32	; 0x20
        3313bc:	eb6253e9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        3313c0:	e59d0000 	ldr	r0, [sp]
        3313c4:	eb62477c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3313c8:	e28d2018 	add	r2, sp, #24	; 0x18
        3313cc:	e1a01007 	mov	r1, r7
        3313d0:	e28d0020 	add	r0, sp, #32	; 0x20
        3313d4:	eb6253e3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        3313d8:	ea00002e 	b	331498 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x35c>
        3313dc:	e24dd018 	sub	sp, sp, #24	; 0x18
        3313e0:	e28d201c 	add	r2, sp, #28	; 0x1c
        3313e4:	e1a01004 	mov	r1, r4
        3313e8:	e28d0020 	add	r0, sp, #32	; 0x20
        3313ec:	eb6253dd 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        3313f0:	eafffff4 	b	3313c8 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x28c>
        3313f4:	e24dd018 	sub	sp, sp, #24	; 0x18
        3313f8:	e5b50030 	ldr	r0, [r5, #48]!
        3313fc:	eb60a22b 	bl	1b59cb0 <$GetNSPattern(PixelMap **)>
        331400:	eb624351 	bl	1bc214c <$AllocateRefHandle(long)>
        331404:	e58d0004 	str	r0, [sp, #4]
        331408:	e28d2004 	add	r2, sp, #4	; 0x4
        33140c:	e1a01004 	mov	r1, r4
        331410:	e28d0020 	add	r0, sp, #32	; 0x20
        331414:	eb6253d3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        331418:	e59d0004 	ldr	r0, [sp, #4]
        33141c:	eb624766 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331420:	e1a0000a 	mov	r0, sl
        331424:	eb624348 	bl	1bc214c <$AllocateRefHandle(long)>
        331428:	e58d0008 	str	r0, [sp, #8]
        33142c:	e28d2008 	add	r2, sp, #8	; 0x8
        331430:	e1a01007 	mov	r1, r7
        331434:	e28d0020 	add	r0, sp, #32	; 0x20
        331438:	eb6253ca 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        33143c:	e59d0008 	ldr	r0, [sp, #8]
        331440:	ea000011 	b	33148c <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x350>
        331444:	e24dd018 	sub	sp, sp, #24	; 0x18
        331448:	e3a00014 	mov	r0, #20	; 0x14
        33144c:	eb62433e 	bl	1bc214c <$AllocateRefHandle(long)>
        331450:	e58d000c 	str	r0, [sp, #12]
        331454:	e28d200c 	add	r2, sp, #12	; 0xc
        331458:	e1a01004 	mov	r1, r4
        33145c:	e28d0020 	add	r0, sp, #32	; 0x20
        331460:	eb6253c0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        331464:	e59d000c 	ldr	r0, [sp, #12]
        331468:	eb624753 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        33146c:	e3a00008 	mov	r0, #8	; 0x8
        331470:	eb624335 	bl	1bc214c <$AllocateRefHandle(long)>
        331474:	e58d0010 	str	r0, [sp, #16]
        331478:	e28d2010 	add	r2, sp, #16	; 0x10
        33147c:	e1a01007 	mov	r1, r7
        331480:	e28d0020 	add	r0, sp, #32	; 0x20
        331484:	eb6253b7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        331488:	e59d0010 	ldr	r0, [sp, #16]
        33148c:	eb62474a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        331490:	ea000000 	b	331498 <MungeStyleFrame(long, PicPlay *, GrafPort *)+0x35c>
        331494:	e24dd018 	sub	sp, sp, #24	; 0x18
        331498:	e28dd018 	add	sp, sp, #24	; 0x18
        33149c:	e59d0008 	ldr	r0, [sp, #8]
        3314a0:	e5900000 	ldr	r0, [r0]
        3314a4:	e5991000 	ldr	r1, [r9]
        3314a8:	e5810000 	str	r0, [r1]
        3314ac:	e59d0000 	ldr	r0, [sp]
        3314b0:	eb624741 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3314b4:	e59d0004 	ldr	r0, [sp, #4]
        3314b8:	eb62473f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3314bc:	e5bd0008 	ldr	r0, [sp, #8]!
        3314c0:	eb62473d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3314c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MapFPoint__FP6FPointP4RectT2
 * Address: 0033519c
 */
void globals::MapFPoint() {
    /*
        33519c:	e1a0c00d 	mov	ip, sp
        3351a0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        3351a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3351a8:	e1a06000 	mov	r6, r0
        3351ac:	e1a05001 	mov	r5, r1
        3351b0:	e1a04002 	mov	r4, r2
        3351b4:	e5910006 	ldr	r0, [r1, #6]
        3351b8:	e1a00840 	mov	r0, r0, asr #16
        3351bc:	e5911002 	ldr	r1, [r1, #2]
        3351c0:	e0401841 	sub	r1, r0, r1, asr #16
        3351c4:	e5922006 	ldr	r2, [r2, #6]
        3351c8:	e1a02842 	mov	r2, r2, asr #16
        3351cc:	e5940002 	ldr	r0, [r4, #2]
        3351d0:	e0420840 	sub	r0, r2, r0, asr #16
        3351d4:	eb62afb9 	bl	1be10c0 <$FixedDivide>
        3351d8:	e1a08000 	mov	r8, r0
        3351dc:	e5951004 	ldr	r1, [r5, #4]
        3351e0:	e1a01841 	mov	r1, r1, asr #16
        3351e4:	e5950000 	ldr	r0, [r5]
        3351e8:	e0411840 	sub	r1, r1, r0, asr #16
        3351ec:	e5940004 	ldr	r0, [r4, #4]
        3351f0:	e1a00840 	mov	r0, r0, asr #16
        3351f4:	e5942000 	ldr	r2, [r4]
        3351f8:	e0400842 	sub	r0, r0, r2, asr #16
        3351fc:	eb62afaf 	bl	1be10c0 <$FixedDivide>
        335200:	e1a07000 	mov	r7, r0
        335204:	e5950002 	ldr	r0, [r5, #2]
        335208:	e1a00820 	mov	r0, r0, lsr #16
        33520c:	e5961000 	ldr	r1, [r6]
        335210:	e0410800 	sub	r0, r1, r0, lsl #16
        335214:	e1a01008 	mov	r1, r8
        335218:	eb62afa9 	bl	1be10c4 <$FixedMultiply>
        33521c:	e1a08000 	mov	r8, r0
        335220:	e5960004 	ldr	r0, [r6, #4]
        335224:	e5951000 	ldr	r1, [r5]
        335228:	e1a01821 	mov	r1, r1, lsr #16
        33522c:	e0400801 	sub	r0, r0, r1, lsl #16
        335230:	e1a01007 	mov	r1, r7
        335234:	eb62afa2 	bl	1be10c4 <$FixedMultiply>
        335238:	e5941002 	ldr	r1, [r4, #2]
        33523c:	e1a01821 	mov	r1, r1, lsr #16
        335240:	e0881801 	add	r1, r8, r1, lsl #16
        335244:	e5861000 	str	r1, [r6]
        335248:	e5941000 	ldr	r1, [r4]
        33524c:	e1a01821 	mov	r1, r1, lsr #16
        335250:	e0800801 	add	r0, r0, r1, lsl #16
        335254:	e5a60004 	str	r0, [r6, #4]!
        335258:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MapPt__FP5PointP4RectT2
 * Address: 00335308
 */
void globals::MapPt() {
    /*
        335308:	e1a0c00d 	mov	ip, sp
        33530c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        335310:	e24cb004 	sub	fp, ip, #4	; 0x4
        335314:	e1a04000 	mov	r4, r0
        335318:	e1a0c002 	mov	ip, r2
        33531c:	e5910000 	ldr	r0, [r1]
        335320:	e1a00840 	mov	r0, r0, asr #16
        335324:	e5916002 	ldr	r6, [r1, #2]
        335328:	e1a06846 	mov	r6, r6, asr #16
        33532c:	e5912004 	ldr	r2, [r1, #4]
        335330:	e0602842 	rsb	r2, r0, r2, asr #16
        335334:	e5911006 	ldr	r1, [r1, #6]
        335338:	e0668841 	rsb	r8, r6, r1, asr #16
        33533c:	e59c1000 	ldr	r1, [ip]
        335340:	e1a01841 	mov	r1, r1, asr #16
        335344:	e59c5002 	ldr	r5, [ip, #2]
        335348:	e1a05845 	mov	r5, r5, asr #16
        33534c:	e59c3004 	ldr	r3, [ip, #4]
        335350:	e0613843 	rsb	r3, r1, r3, asr #16
        335354:	e59cc006 	ldr	ip, [ip, #6]
        335358:	e065784c 	rsb	r7, r5, ip, asr #16
        33535c:	e92d0008 	stmdb	sp!, {r3}
        335360:	e1a03001 	mov	r3, r1
        335364:	e1a01000 	mov	r1, r0
        335368:	e5940000 	ldr	r0, [r4]
        33536c:	e1a00840 	mov	r0, r0, asr #16
        335370:	eb607148 	bl	1b51898 <$MapCoord__FlN41>
        335374:	e28dd004 	add	sp, sp, #4	; 0x4
        335378:	e5c40001 	strb	r0, [r4, #1]
        33537c:	e1a00440 	mov	r0, r0, asr #8
        335380:	e5c40000 	strb	r0, [r4]
        335384:	e1a03007 	mov	r3, r7
        335388:	e92d0008 	stmdb	sp!, {r3}
        33538c:	e5940002 	ldr	r0, [r4, #2]
        335390:	e1a00840 	mov	r0, r0, asr #16
        335394:	e1a03005 	mov	r3, r5
        335398:	e1a02008 	mov	r2, r8
        33539c:	e1a01006 	mov	r1, r6
        3353a0:	eb60713c 	bl	1b51898 <$MapCoord__FlN41>
        3353a4:	e5c40003 	strb	r0, [r4, #3]
        3353a8:	e1a00440 	mov	r0, r0, asr #8
        3353ac:	e5c40002 	strb	r0, [r4, #2]
        3353b0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MapCoord__FlN41
 * Address: 00335474
 */
void globals::MapCoord() {
    /*
        335474:	e1a0c00d 	mov	ip, sp
        335478:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        33547c:	e24cb004 	sub	fp, ip, #4	; 0x4
        335480:	e1a04003 	mov	r4, r3
        335484:	e0400001 	sub	r0, r0, r1
        335488:	e59b3004 	ldr	r3, [fp, #4]
        33548c:	e1320003 	teq	r2, r3
        335490:	0a00000c 	beq	3354c8 <MapCoord__FlN41+0x54>
        335494:	e3500000 	cmp	r0, #0	; 0x0
        335498:	a3a01000 	movge	r1, #0	; 0x0
        33549c:	b3a01001 	movlt	r1, #1	; 0x1
        3354a0:	e21150ff 	ands	r5, r1, #255	; 0xff
        3354a4:	12600000 	rsbne	r0, r0, #0	; 0x0
        3354a8:	e0000093 	mul	r0, r3, r0
        3354ac:	e08010c2 	add	r1, r0, r2, asr #1
        3354b0:	e1a00002 	mov	r0, r2
        3354b4:	eb61f521 	bl	1bb2940 <$__rt_sdiv>
        3354b8:	e1e01005 	mvn	r1, r5
        3354bc:	e1e01001 	mvn	r1, r1
        3354c0:	e31100ff 	tst	r1, #255	; 0xff
        3354c4:	12600000 	rsbne	r0, r0, #0	; 0x0
        3354c8:	e0800004 	add	r0, r0, r4
        3354cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: MapPoly__FPP7PolygonP4RectT2
 * Address: 0033561c
 */
void globals::MapPoly() {
    /*
        33561c:	e1a0c00d 	mov	ip, sp
        335620:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        335624:	e24cb004 	sub	fp, ip, #4	; 0x4
        335628:	e1a06000 	mov	r6, r0
        33562c:	e1a05001 	mov	r5, r1
        335630:	e1a04002 	mov	r4, r2
        335634:	e1a01002 	mov	r1, r2
        335638:	e1a00005 	mov	r0, r5
        33563c:	eb60643a 	bl	1b4e72c <$EqualRect__FP4RectT1>
        335640:	e3300000 	teq	r0, #0	; 0x0
        335644:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        335648:	e5960000 	ldr	r0, [r6]
        33564c:	e2800004 	add	r0, r0, #4	; 0x4
        335650:	e1a02004 	mov	r2, r4
        335654:	e1a01005 	mov	r1, r5
        335658:	eb607094 	bl	1b518b0 <$MapRect__FP4RectN21>
        33565c:	e5960000 	ldr	r0, [r6]
        335660:	e5900000 	ldr	r0, [r0]
        335664:	e1a00840 	mov	r0, r0, asr #16
        335668:	e240000c 	sub	r0, r0, #12	; 0xc
        33566c:	e1a08120 	mov	r8, r0, lsr #2
        335670:	e3a07000 	mov	r7, #0	; 0x0
        335674:	e3580000 	cmp	r8, #0	; 0x0
        335678:	d91ba9f0 	ldmledb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        33567c:	e5960000 	ldr	r0, [r6]
        335680:	e0800107 	add	r0, r0, r7, lsl #2
        335684:	e280000c 	add	r0, r0, #12	; 0xc
        335688:	e1a02004 	mov	r2, r4
        33568c:	e1a01005 	mov	r1, r5
        335690:	eb607085 	bl	1b518ac <$MapPt__FP5PointP4RectT2>
        335694:	e2877001 	add	r7, r7, #1	; 0x1
        335698:	e1570008 	cmp	r7, r8
        33569c:	bafffff6 	blt	33567c <MapPoly__FPP7PolygonP4RectT2+0x60>
        3356a0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MergeTwoRecWordsSets__FP10rec_w_typeT1
 * Address: 00337fa4
 */
void globals::MergeTwoRecWordsSets() {
    /*
        337fa4:	e1a0c00d 	mov	ip, sp
        337fa8:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        337fac:	e24cb004 	sub	fp, ip, #4	; 0x4
        337fb0:	e24dde33 	sub	sp, sp, #816	; 0x330
        337fb4:	e51b0030 	ldr	r0, [fp, -#48]
        337fb8:	e58d0324 	str	r0, [sp, #804]
        337fbc:	e58d1328 	str	r1, [sp, #808]
        337fc0:	e3a01000 	mov	r1, #0	; 0x0
        337fc4:	e3a04000 	mov	r4, #0	; 0x0
        337fc8:	e58d1000 	str	r1, [sp]
        337fcc:	e3a01000 	mov	r1, #0	; 0x0
        337fd0:	e0847104 	add	r7, r4, r4, lsl #2
        337fd4:	e28d0004 	add	r0, sp, #4	; 0x4
        337fd8:	e7c01207 	strb	r1, [r0, r7, lsl #4]
        337fdc:	e3e01000 	mvn	r1, #0	; 0x0
        337fe0:	e3a00000 	mov	r0, #0	; 0x0
        337fe4:	e28d2fc9 	add	r2, sp, #804	; 0x324
        337fe8:	e792c100 	ldr	ip, [r2, r0, lsl #2]
        337fec:	e79d3080 	ldr	r3, [sp, r0, lsl #1]
        337ff0:	e1a03843 	mov	r3, r3, asr #16
        337ff4:	e0832103 	add	r2, r3, r3, lsl #2
        337ff8:	e7dce202 	ldrb	lr, [ip, r2, lsl #4]
        337ffc:	e33e0000 	teq	lr, #0	; 0x0
        338000:	0a000006 	beq	338020 <MergeTwoRecWordsSets__FP10rec_w_typeT1+0x7c>
        338004:	e08c2202 	add	r2, ip, r2, lsl #4
        338008:	e5922048 	ldr	r2, [r2, #72]
        33800c:	e1a02842 	mov	r2, r2, asr #16
        338010:	e1520001 	cmp	r2, r1
        338014:	c1a01002 	movgt	r1, r2
        338018:	c1a05000 	movgt	r5, r0
        33801c:	c1a09003 	movgt	r9, r3
        338020:	e2800001 	add	r0, r0, #1	; 0x1
        338024:	e1a00800 	mov	r0, r0, lsl #16
        338028:	e1a00840 	mov	r0, r0, asr #16
        33802c:	e3500002 	cmp	r0, #2	; 0x2
        338030:	baffffeb 	blt	337fe4 <MergeTwoRecWordsSets__FP10rec_w_typeT1+0x40>
        338034:	e3710001 	cmn	r1, #1	; 0x1
        338038:	0a000033 	beq	33810c <MergeTwoRecWordsSets__FP10rec_w_typeT1+0x168>
        33803c:	e3a08000 	mov	r8, #0	; 0x0
        338040:	e28d0fc9 	add	r0, sp, #804	; 0x324
        338044:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        338048:	e0891109 	add	r1, r9, r9, lsl #2
        33804c:	e58d132c 	str	r1, [sp, #812]
        338050:	e080a201 	add	sl, r0, r1, lsl #4
        338054:	e3a06000 	mov	r6, #0	; 0x0
        338058:	e3540000 	cmp	r4, #0	; 0x0
        33805c:	da00000d 	ble	338098 <MergeTwoRecWordsSets__FP10rec_w_typeT1+0xf4>
        338060:	e0860106 	add	r0, r6, r6, lsl #2
        338064:	e28d1004 	add	r1, sp, #4	; 0x4
        338068:	e0810200 	add	r0, r1, r0, lsl #4
        33806c:	e1a0100a 	mov	r1, sl
        338070:	eb5ce602 	bl	1a71880 <$HWRStrCmp__FPcT1>
        338074:	e3300000 	teq	r0, #0	; 0x0
        338078:	0a000014 	beq	3380d0 <MergeTwoRecWordsSets__FP10rec_w_typeT1+0x12c>
        33807c:	e2860001 	add	r0, r6, #1	; 0x1
        338080:	e1a06800 	mov	r6, r0, lsl #16
        338084:	e1a06846 	mov	r6, r6, asr #16
        338088:	e1560004 	cmp	r6, r4
        33808c:	bafffff3 	blt	338060 <MergeTwoRecWordsSets__FP10rec_w_typeT1+0xbc>
        338090:	e3380000 	teq	r8, #0	; 0x0
        338094:	1a00000d 	bne	3380d0 <MergeTwoRecWordsSets__FP10rec_w_typeT1+0x12c>
        338098:	e28d0004 	add	r0, sp, #4	; 0x4
        33809c:	e0800207 	add	r0, r0, r7, lsl #4
        3380a0:	e28d1fc9 	add	r1, sp, #804	; 0x324
        3380a4:	e7911105 	ldr	r1, [r1, r5, lsl #2]
        3380a8:	e59d232c 	ldr	r2, [sp, #812]
        3380ac:	e081e202 	add	lr, r1, r2, lsl #4
        3380b0:	e3a0c006 	mov	ip, #6	; 0x6
        3380b4:	e8be000e 	ldmia	lr!, {r1, r2, r3}
        3380b8:	e8a0000e 	stmia	r0!, {r1, r2, r3}
        3380bc:	e25cc001 	subs	ip, ip, #1	; 0x1
        3380c0:	1afffffb 	bne	3380b4 <MergeTwoRecWordsSets__FP10rec_w_typeT1+0x110>
        3380c4:	e89e000c 	ldmia	lr, {r2, r3}
        3380c8:	e880000c 	stmia	r0, {r2, r3}
        3380cc:	ea000002 	b	3380dc <MergeTwoRecWordsSets__FP10rec_w_typeT1+0x138>
        3380d0:	e2440001 	sub	r0, r4, #1	; 0x1
        3380d4:	e1a04800 	mov	r4, r0, lsl #16
        3380d8:	e1a04844 	mov	r4, r4, asr #16
        3380dc:	e79d0085 	ldr	r0, [sp, r5, lsl #1]
        3380e0:	e1a00820 	mov	r0, r0, lsr #16
        3380e4:	e2800001 	add	r0, r0, #1	; 0x1
        3380e8:	e08d1085 	add	r1, sp, r5, lsl #1
        3380ec:	e5c10001 	strb	r0, [r1, #1]
        3380f0:	e1a00440 	mov	r0, r0, asr #8
        3380f4:	e5c10000 	strb	r0, [r1]
        3380f8:	e2840001 	add	r0, r4, #1	; 0x1
        3380fc:	e1a04800 	mov	r4, r0, lsl #16
        338100:	e1a04844 	mov	r4, r4, asr #16
        338104:	e354000a 	cmp	r4, #10	; 0xa
        338108:	baffffaf 	blt	337fcc <MergeTwoRecWordsSets__FP10rec_w_typeT1+0x28>
        33810c:	e3a00000 	mov	r0, #0	; 0x0
        338110:	e0801100 	add	r1, r0, r0, lsl #2
        338114:	e51b2030 	ldr	r2, [fp, -#48]
        338118:	e082e201 	add	lr, r2, r1, lsl #4
        33811c:	e28d2004 	add	r2, sp, #4	; 0x4
        338120:	e0824201 	add	r4, r2, r1, lsl #4
        338124:	e3a0c006 	mov	ip, #6	; 0x6
        338128:	e8b4000e 	ldmia	r4!, {r1, r2, r3}
        33812c:	e8ae000e 	stmia	lr!, {r1, r2, r3}
        338130:	e25cc001 	subs	ip, ip, #1	; 0x1
        338134:	1afffffb 	bne	338128 <MergeTwoRecWordsSets__FP10rec_w_typeT1+0x184>
        338138:	e894000c 	ldmia	r4, {r2, r3}
        33813c:	e88e000c 	stmia	lr, {r2, r3}
        338140:	e2800001 	add	r0, r0, #1	; 0x1
        338144:	e1a00800 	mov	r0, r0, lsl #16
        338148:	e1a00840 	mov	r0, r0, asr #16
        33814c:	e350000a 	cmp	r0, #10	; 0xa
        338150:	baffffee 	blt	338110 <MergeTwoRecWordsSets__FP10rec_w_typeT1+0x16c>
        338154:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)
 * Address: 00338158
 */
MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int) {
    /*
        338158:	e1a0c00d 	mov	ip, sp
        33815c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        338160:	e24cb004 	sub	fp, ip, #4	; 0x4
        338164:	e1a04001 	mov	r4, r1
        338168:	e3a01001 	mov	r1, #1	; 0x1
        33816c:	e52d1014 	str	r1, [sp, -#20]!
        338170:	e3a01000 	mov	r1, #0	; 0x0
        338174:	e5c41000 	strb	r1, [r4]
        338178:	e3e00000 	mvn	r0, #0	; 0x0
        33817c:	e5c4004b 	strb	r0, [r4, #75]
        338180:	e5c4004a 	strb	r0, [r4, #74]
        338184:	e51b0034 	ldr	r0, [fp, -#52]
        338188:	e5900008 	ldr	r0, [r0, #8]
        33818c:	e3300000 	teq	r0, #0	; 0x0
        338190:	0a000089 	beq	3383bc <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x264>
        338194:	e58d000c 	str	r0, [sp, #12]
        338198:	e3300000 	teq	r0, #0	; 0x0
        33819c:	0a000086 	beq	3383bc <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x264>
        3381a0:	e3a08000 	mov	r8, #0	; 0x0
        3381a4:	e3a06000 	mov	r6, #0	; 0x0
        3381a8:	e3a07000 	mov	r7, #0	; 0x0
        3381ac:	e58d7008 	str	r7, [sp, #8]
        3381b0:	ea00007b 	b	3383a4 <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x24c>
        3381b4:	e59d100c 	ldr	r1, [sp, #12]
        3381b8:	e0815208 	add	r5, r1, r8, lsl #4
        3381bc:	e5d50002 	ldrb	r0, [r5, #2]
        3381c0:	e3300001 	teq	r0, #1	; 0x1
        3381c4:	1a00003d 	bne	3382c0 <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x168>
        3381c8:	e3570017 	cmp	r7, #23	; 0x17
        3381cc:	aa00003f 	bge	3382d0 <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x178>
        3381d0:	e3370000 	teq	r7, #0	; 0x0
        3381d4:	1a000016 	bne	338234 <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0xdc>
        3381d8:	e3560009 	cmp	r6, #9	; 0x9
        3381dc:	aa000003 	bge	3381f0 <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x98>
        3381e0:	e3a01000 	mov	r1, #0	; 0x0
        3381e4:	e0860106 	add	r0, r6, r6, lsl #2
        3381e8:	e0840200 	add	r0, r4, r0, lsl #4
        3381ec:	e5c01050 	strb	r1, [r0, #80]
        3381f0:	e3a09000 	mov	r9, #0	; 0x0
        3381f4:	e5d50007 	ldrb	r0, [r5, #7]
        3381f8:	e58d0008 	str	r0, [sp, #8]
        3381fc:	e5d51008 	ldrb	r1, [r5, #8]
        338200:	e1a01c01 	mov	r1, r1, lsl #24
        338204:	e1a01c41 	mov	r1, r1, asr #24
        338208:	e58d1004 	str	r1, [sp, #4]
        33820c:	e5d51006 	ldrb	r1, [r5, #6]
        338210:	e0860106 	add	r0, r6, r6, lsl #2
        338214:	e0840200 	add	r0, r4, r0, lsl #4
        338218:	e5c01049 	strb	r1, [r0, #73]
        33821c:	e1a01441 	mov	r1, r1, asr #8
        338220:	e5c01048 	strb	r1, [r0, #72]
        338224:	e5d5100d 	ldrb	r1, [r5, #13]
        338228:	e5c0104d 	strb	r1, [r0, #77]
        33822c:	e1a01441 	mov	r1, r1, asr #8
        338230:	e5c0104c 	strb	r1, [r0, #76]
        338234:	e5d5100a 	ldrb	r1, [r5, #10]
        338238:	e1a01c01 	mov	r1, r1, lsl #24
        33823c:	e1a01c41 	mov	r1, r1, asr #24
        338240:	e0860106 	add	r0, r6, r6, lsl #2
        338244:	e0840200 	add	r0, r4, r0, lsl #4
        338248:	e5c0104b 	strb	r1, [r0, #75]
        33824c:	e1a01441 	mov	r1, r1, asr #8
        338250:	e5c0104a 	strb	r1, [r0, #74]
        338254:	e5d52009 	ldrb	r2, [r5, #9]
        338258:	e1a02c02 	mov	r2, r2, lsl #24
        33825c:	e1a02c42 	mov	r2, r2, asr #24
        338260:	e59d1000 	ldr	r1, [sp]
        338264:	e3310000 	teq	r1, #0	; 0x0
        338268:	e5d5100b 	ldrb	r1, [r5, #11]
        33826c:	e1a01c01 	mov	r1, r1, lsl #24
        338270:	e1a01c41 	mov	r1, r1, asr #24
        338274:	00811fa1 	addeq	r1, r1, r1, lsr #31
        338278:	01a010c1 	moveq	r1, r1, asr #1
        33827c:	e0421001 	sub	r1, r2, r1
        338280:	e5d5200c 	ldrb	r2, [r5, #12]
        338284:	e1a02c02 	mov	r2, r2, lsl #24
        338288:	e0411c42 	sub	r1, r1, r2, asr #24
        33828c:	e0811009 	add	r1, r1, r9
        338290:	e1a09801 	mov	r9, r1, lsl #16
        338294:	e1a09849 	mov	r9, r9, asr #16
        338298:	e59d100c 	ldr	r1, [sp, #12]
        33829c:	e7d11208 	ldrb	r1, [r1, r8, lsl #4]
        3382a0:	e7c01007 	strb	r1, [r0, r7]
        3382a4:	e3a01000 	mov	r1, #0	; 0x0
        3382a8:	e0800007 	add	r0, r0, r7
        3382ac:	e5c01030 	strb	r1, [r0, #48]
        3382b0:	e5c01001 	strb	r1, [r0, #1]
        3382b4:	e2870001 	add	r0, r7, #1	; 0x1
        3382b8:	e1a07800 	mov	r7, r0, lsl #16
        3382bc:	e1a07847 	mov	r7, r7, asr #16
        3382c0:	e5d50002 	ldrb	r0, [r5, #2]
        3382c4:	e3300003 	teq	r0, #3	; 0x3
        3382c8:	13300004 	teqne	r0, #4	; 0x4
        3382cc:	0a000004 	beq	3382e4 <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x18c>
        3382d0:	e51b0034 	ldr	r0, [fp, -#52]
        3382d4:	e5900004 	ldr	r0, [r0, #4]
        3382d8:	e2400001 	sub	r0, r0, #1	; 0x1
        3382dc:	e1300008 	teq	r0, r8
        3382e0:	1a000025 	bne	33837c <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x224>
        3382e4:	e51b002c 	ldr	r0, [fp, -#44]
        3382e8:	e3300000 	teq	r0, #0	; 0x0
        3382ec:	0a000022 	beq	33837c <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x224>
        3382f0:	e0860106 	add	r0, r6, r6, lsl #2
        3382f4:	e0841200 	add	r1, r4, r0, lsl #4
        3382f8:	e58d1010 	str	r1, [sp, #16]
        3382fc:	e591004c 	ldr	r0, [r1, #76]
        338300:	e1a00680 	mov	r0, r0, lsl #13
        338304:	e1a00ea0 	mov	r0, r0, lsr #29
        338308:	e080a080 	add	sl, r0, r0, lsl #1
        33830c:	e59d1000 	ldr	r1, [sp]
        338310:	e3310000 	teq	r1, #0	; 0x0
        338314:	13a0a000 	movne	sl, #0	; 0x0
        338318:	e59d0008 	ldr	r0, [sp, #8]
        33831c:	e0490000 	sub	r0, r9, r0
        338320:	e0800100 	add	r0, r0, r0, lsl #2
        338324:	e1a00080 	mov	r0, r0, lsl #1
        338328:	e080008a 	add	r0, r0, sl, lsl #1
        33832c:	e0801180 	add	r1, r0, r0, lsl #3
        338330:	e0811200 	add	r1, r1, r0, lsl #4
        338334:	e1a01101 	mov	r1, r1, lsl #2
        338338:	e51b002c 	ldr	r0, [fp, -#44]
        33833c:	eb61e97f 	bl	1bb2940 <$__rt_sdiv>
        338340:	e080000a 	add	r0, r0, sl
        338344:	e59d1010 	ldr	r1, [sp, #16]
        338348:	e5c10049 	strb	r0, [r1, #73]
        33834c:	e1a00440 	mov	r0, r0, asr #8
        338350:	e5c10048 	strb	r0, [r1, #72]
        338354:	e59d1010 	ldr	r1, [sp, #16]
        338358:	e5910048 	ldr	r0, [r1, #72]
        33835c:	e1a00820 	mov	r0, r0, lsr #16
        338360:	e59d1004 	ldr	r1, [sp, #4]
        338364:	e0811101 	add	r1, r1, r1, lsl #2
        338368:	e0800081 	add	r0, r0, r1, lsl #1
        33836c:	e59d1010 	ldr	r1, [sp, #16]
        338370:	e5c10049 	strb	r0, [r1, #73]
        338374:	e1a00440 	mov	r0, r0, asr #8
        338378:	e5c10048 	strb	r0, [r1, #72]
        33837c:	e5d50002 	ldrb	r0, [r5, #2]
        338380:	e3300003 	teq	r0, #3	; 0x3
        338384:	13300004 	teqne	r0, #4	; 0x4
        338388:	02860001 	addeq	r0, r6, #1	; 0x1
        33838c:	01a06800 	moveq	r6, r0, lsl #16
        338390:	01a06846 	moveq	r6, r6, asr #16
        338394:	03a07000 	moveq	r7, #0	; 0x0
        338398:	e2880001 	add	r0, r8, #1	; 0x1
        33839c:	e1a08800 	mov	r8, r0, lsl #16
        3383a0:	e1a08848 	mov	r8, r8, asr #16
        3383a4:	e51b0034 	ldr	r0, [fp, -#52]
        3383a8:	e5900004 	ldr	r0, [r0, #4]
        3383ac:	e1500008 	cmp	r0, r8
        3383b0:	da000001 	ble	3383bc <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x264>
        3383b4:	e356000a 	cmp	r6, #10	; 0xa
        3383b8:	baffff7d 	blt	3381b4 <MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)+0x5c>
        3383bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type
 * Address: 003383c0
 */
void globals::MakeRecWordsFromGraph() {
    /*
        3383c0:	e1a0c00d 	mov	ip, sp
        3383c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        3383c8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3383cc:	e24cb014 	sub	fp, ip, #20	; 0x14
        3383d0:	e1a04000 	mov	r4, r0
        3383d4:	e1a06801 	mov	r6, r1, lsl #16
        3383d8:	e1a06826 	mov	r6, r6, lsr #16
        3383dc:	e24dd068 	sub	sp, sp, #104	; 0x68
        3383e0:	e59b000c 	ldr	r0, [fp, #12]
        3383e4:	e3300000 	teq	r0, #0	; 0x0
        3383e8:	13330000 	teqne	r3, #0	; 0x0
        3383ec:	0a0001b5 	beq	338ac8 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x708>
        3383f0:	e3a05000 	mov	r5, #0	; 0x0
        3383f4:	e58d3048 	str	r3, [sp, #72]
        3383f8:	e28d0028 	add	r0, sp, #40	; 0x28
        3383fc:	e3a02018 	mov	r2, #24	; 0x18
        338400:	e3a01000 	mov	r1, #0	; 0x0
        338404:	eb61f193 	bl	1bb4a58 <$memset>
        338408:	e3a02000 	mov	r2, #0	; 0x0
        33840c:	e3a01000 	mov	r1, #0	; 0x0
        338410:	e3560000 	cmp	r6, #0	; 0x0
        338414:	da000037 	ble	3384f8 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x138>
        338418:	e3a0a000 	mov	sl, #0	; 0x0
        33841c:	e0840201 	add	r0, r4, r1, lsl #4
        338420:	e5d03002 	ldrb	r3, [r0, #2]
        338424:	e3330001 	teq	r3, #1	; 0x1
        338428:	0a000005 	beq	338444 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x84>
        33842c:	e3330002 	teq	r3, #2	; 0x2
        338430:	0a00002a 	beq	3384e0 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x120>
        338434:	e3330003 	teq	r3, #3	; 0x3
        338438:	03a02000 	moveq	r2, #0	; 0x0
        33843c:	0a000023 	beq	3384d0 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x110>
        338440:	ea000027 	b	3384e4 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x124>
        338444:	e28d3028 	add	r3, sp, #40	; 0x28
        338448:	e7d33005 	ldrb	r3, [r3, r5]
        33844c:	e3330000 	teq	r3, #0	; 0x0
        338450:	1a000003 	bne	338464 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0xa4>
        338454:	e28d3028 	add	r3, sp, #40	; 0x28
        338458:	e7c31005 	strb	r1, [r3, r5]
        33845c:	e28d3010 	add	r3, sp, #16	; 0x10
        338460:	e7c3a005 	strb	sl, [r3, r5]
        338464:	e3320000 	teq	r2, #0	; 0x0
        338468:	0a000013 	beq	3384bc <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0xfc>
        33846c:	e550300e 	ldrb	r3, [r0, -#14]
        338470:	e3330001 	teq	r3, #1	; 0x1
        338474:	0a00001a 	beq	3384e4 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x124>
        338478:	e28d3010 	add	r3, sp, #16	; 0x10
        33847c:	e7d33005 	ldrb	r3, [r3, r5]
        338480:	e2833001 	add	r3, r3, #1	; 0x1
        338484:	e28dc010 	add	ip, sp, #16	; 0x10
        338488:	e7cc3005 	strb	r3, [ip, r5]
        33848c:	e5d03012 	ldrb	r3, [r0, #18]
        338490:	e3330001 	teq	r3, #1	; 0x1
        338494:	1a000012 	bne	3384e4 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x124>
        338498:	e5d03006 	ldrb	r3, [r0, #6]
        33849c:	e5d0c016 	ldrb	ip, [r0, #22]
        3384a0:	e083300c 	add	r3, r3, ip
        3384a4:	e0833fa3 	add	r3, r3, r3, lsr #31
        3384a8:	e1a030c3 	mov	r3, r3, asr #1
        3384ac:	e5c03006 	strb	r3, [r0, #6]
        3384b0:	e5d03006 	ldrb	r3, [r0, #6]
        3384b4:	e5c03016 	strb	r3, [r0, #22]
        3384b8:	ea000009 	b	3384e4 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x124>
        3384bc:	e28d0010 	add	r0, sp, #16	; 0x10
        3384c0:	e7d00005 	ldrb	r0, [r0, r5]
        3384c4:	e2800001 	add	r0, r0, #1	; 0x1
        3384c8:	e28d3010 	add	r3, sp, #16	; 0x10
        3384cc:	e7c30005 	strb	r0, [r3, r5]
        3384d0:	e2850001 	add	r0, r5, #1	; 0x1
        3384d4:	e1a05800 	mov	r5, r0, lsl #16
        3384d8:	e1a05825 	mov	r5, r5, lsr #16
        3384dc:	ea000000 	b	3384e4 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x124>
        3384e0:	e3a02001 	mov	r2, #1	; 0x1
        3384e4:	e2810001 	add	r0, r1, #1	; 0x1
        3384e8:	e1a01800 	mov	r1, r0, lsl #16
        3384ec:	e1a01821 	mov	r1, r1, lsr #16
        3384f0:	e1510006 	cmp	r1, r6
        3384f4:	baffffc8 	blt	33841c <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x5c>
        3384f8:	e3a03000 	mov	r3, #0	; 0x0
        3384fc:	e3550000 	cmp	r5, #0	; 0x0
        338500:	e58d3044 	str	r3, [sp, #68]
        338504:	da000091 	ble	338750 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x390>
        338508:	e3a02001 	mov	r2, #1	; 0x1
        33850c:	e28d0028 	add	r0, sp, #40	; 0x28
        338510:	e59d3044 	ldr	r3, [sp, #68]
        338514:	e7d00003 	ldrb	r0, [r0, r3]
        338518:	e1a01800 	mov	r1, r0, lsl #16
        33851c:	e1a01841 	mov	r1, r1, asr #16
        338520:	e3a08000 	mov	r8, #0	; 0x0
        338524:	e28d0010 	add	r0, sp, #16	; 0x10
        338528:	e7d00003 	ldrb	r0, [r0, r3]
        33852c:	e2400001 	sub	r0, r0, #1	; 0x1
        338530:	e3500000 	cmp	r0, #0	; 0x0
        338534:	da00007e 	ble	338734 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x374>
        338538:	e0840201 	add	r0, r4, r1, lsl #4
        33853c:	e5d03012 	ldrb	r3, [r0, #18]
        338540:	e3330001 	teq	r3, #1	; 0x1
        338544:	12811002 	addne	r1, r1, #2	; 0x2
        338548:	02811003 	addeq	r1, r1, #3	; 0x3
        33854c:	e1a01801 	mov	r1, r1, lsl #16
        338550:	e1a01841 	mov	r1, r1, asr #16
        338554:	13a0c000 	movne	ip, #0	; 0x0
        338558:	03a0c001 	moveq	ip, #1	; 0x1
        33855c:	e5d06006 	ldrb	r6, [r0, #6]
        338560:	e0843201 	add	r3, r4, r1, lsl #4
        338564:	e5d3e006 	ldrb	lr, [r3, #6]
        338568:	e156000e 	cmp	r6, lr
        33856c:	aa000065 	bge	338708 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x348>
        338570:	e5d32012 	ldrb	r2, [r3, #18]
        338574:	e3320001 	teq	r2, #1	; 0x1
        338578:	13a03000 	movne	r3, #0	; 0x0
        33857c:	03a03001 	moveq	r3, #1	; 0x1
        338580:	e33c0000 	teq	ip, #0	; 0x0
        338584:	e590200c 	ldr	r2, [r0, #12]
        338588:	e8904040 	ldmia	r0, {r6, lr}
        33858c:	e5907008 	ldr	r7, [r0, #8]
        338590:	0a000033 	beq	338664 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x2a4>
        338594:	e3330000 	teq	r3, #0	; 0x0
        338598:	e2809030 	add	r9, r0, #48	; 0x30
        33859c:	0a000017 	beq	338600 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x240>
        3385a0:	e1a0a000 	mov	sl, r0
        3385a4:	e58d9064 	str	r9, [sp, #100]
        3385a8:	e8b91008 	ldmia	r9!, {r3, ip}
        3385ac:	e8aa1008 	stmia	sl!, {r3, ip}
        3385b0:	e8991008 	ldmia	r9, {r3, ip}
        3385b4:	e88a1008 	stmia	sl, {r3, ip}
        3385b8:	e59d9064 	ldr	r9, [sp, #100]
        3385bc:	e280a010 	add	sl, r0, #16	; 0x10
        3385c0:	e8894040 	stmia	r9, {r6, lr}
        3385c4:	e5897008 	str	r7, [r9, #8]
        3385c8:	e589200c 	str	r2, [r9, #12]
        3385cc:	e2809040 	add	r9, r0, #64	; 0x40
        3385d0:	e1a00009 	mov	r0, r9
        3385d4:	e59a200c 	ldr	r2, [sl, #12]
        3385d8:	e99a4040 	ldmib	sl, {r6, lr}
        3385dc:	e59a7000 	ldr	r7, [sl]
        3385e0:	e8b91008 	ldmia	r9!, {r3, ip}
        3385e4:	e8aa1008 	stmia	sl!, {r3, ip}
        3385e8:	e8991008 	ldmia	r9, {r3, ip}
        3385ec:	e88a1008 	stmia	sl, {r3, ip}
        3385f0:	e4807004 	str	r7, [r0], #4
        3385f4:	e8804040 	stmia	r0, {r6, lr}
        3385f8:	e5802008 	str	r2, [r0, #8]
        3385fc:	ea000040 	b	338704 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x344>
        338600:	e1a0a000 	mov	sl, r0
        338604:	e58d9060 	str	r9, [sp, #96]
        338608:	e8b91008 	ldmia	r9!, {r3, ip}
        33860c:	e8aa1008 	stmia	sl!, {r3, ip}
        338610:	e8991008 	ldmia	r9, {r3, ip}
        338614:	e88a1008 	stmia	sl, {r3, ip}
        338618:	e2809010 	add	r9, r0, #16	; 0x10
        33861c:	e59da060 	ldr	sl, [sp, #96]
        338620:	e58d905c 	str	r9, [sp, #92]
        338624:	e8b91008 	ldmia	r9!, {r3, ip}
        338628:	e8aa1008 	stmia	sl!, {r3, ip}
        33862c:	e8991008 	ldmia	r9, {r3, ip}
        338630:	e88a1008 	stmia	sl, {r3, ip}
        338634:	e280a020 	add	sl, r0, #32	; 0x20
        338638:	e1a0000a 	mov	r0, sl
        33863c:	e59d905c 	ldr	r9, [sp, #92]
        338640:	e8ba1008 	ldmia	sl!, {r3, ip}
        338644:	e8a91008 	stmia	r9!, {r3, ip}
        338648:	e89a1008 	ldmia	sl, {r3, ip}
        33864c:	e8891008 	stmia	r9, {r3, ip}
        338650:	e8804040 	stmia	r0, {r6, lr}
        338654:	e5807008 	str	r7, [r0, #8]
        338658:	e580200c 	str	r2, [r0, #12]
        33865c:	e2410001 	sub	r0, r1, #1	; 0x1
        338660:	ea00001b 	b	3386d4 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x314>
        338664:	e3330000 	teq	r3, #0	; 0x0
        338668:	e1a03000 	mov	r3, r0
        33866c:	0a00001b 	beq	3386e0 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x320>
        338670:	e2839020 	add	r9, r3, #32	; 0x20
        338674:	e1a0a000 	mov	sl, r0
        338678:	e58d9058 	str	r9, [sp, #88]
        33867c:	e8b91008 	ldmia	r9!, {r3, ip}
        338680:	e8aa1008 	stmia	sl!, {r3, ip}
        338684:	e8991008 	ldmia	r9, {r3, ip}
        338688:	e88a1008 	stmia	sl, {r3, ip}
        33868c:	e280a010 	add	sl, r0, #16	; 0x10
        338690:	e59d9058 	ldr	r9, [sp, #88]
        338694:	e58da054 	str	sl, [sp, #84]
        338698:	e8ba1008 	ldmia	sl!, {r3, ip}
        33869c:	e8a91008 	stmia	r9!, {r3, ip}
        3386a0:	e89a1008 	ldmia	sl, {r3, ip}
        3386a4:	e8891008 	stmia	r9, {r3, ip}
        3386a8:	e2809030 	add	r9, r0, #48	; 0x30
        3386ac:	e1a00009 	mov	r0, r9
        3386b0:	e59da054 	ldr	sl, [sp, #84]
        3386b4:	e8b91008 	ldmia	r9!, {r3, ip}
        3386b8:	e8aa1008 	stmia	sl!, {r3, ip}
        3386bc:	e8991008 	ldmia	r9, {r3, ip}
        3386c0:	e88a1008 	stmia	sl, {r3, ip}
        3386c4:	e8804040 	stmia	r0, {r6, lr}
        3386c8:	e5807008 	str	r7, [r0, #8]
        3386cc:	e580200c 	str	r2, [r0, #12]
        3386d0:	e2810001 	add	r0, r1, #1	; 0x1
        3386d4:	e1a01800 	mov	r1, r0, lsl #16
        3386d8:	e1a01841 	mov	r1, r1, asr #16
        3386dc:	ea000008 	b	338704 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x344>
        3386e0:	e283a020 	add	sl, r3, #32	; 0x20
        3386e4:	e1a0900a 	mov	r9, sl
        3386e8:	e8ba1008 	ldmia	sl!, {r3, ip}
        3386ec:	e8a01008 	stmia	r0!, {r3, ip}
        3386f0:	e89a1008 	ldmia	sl, {r3, ip}
        3386f4:	e8801008 	stmia	r0, {r3, ip}
        3386f8:	e8894040 	stmia	r9, {r6, lr}
        3386fc:	e5897008 	str	r7, [r9, #8]
        338700:	e589200c 	str	r2, [r9, #12]
        338704:	e3a02000 	mov	r2, #0	; 0x0
        338708:	e2880001 	add	r0, r8, #1	; 0x1
        33870c:	e1a08800 	mov	r8, r0, lsl #16
        338710:	e1a08828 	mov	r8, r8, lsr #16
        338714:	e28d0010 	add	r0, sp, #16	; 0x10
        338718:	e59d3044 	ldr	r3, [sp, #68]
        33871c:	e7d00003 	ldrb	r0, [r0, r3]
        338720:	e2400001 	sub	r0, r0, #1	; 0x1
        338724:	e1500008 	cmp	r0, r8
        338728:	caffff82 	bgt	338538 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x178>
        33872c:	e3320000 	teq	r2, #0	; 0x0
        338730:	0affff74 	beq	338508 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x148>
        338734:	e59d3044 	ldr	r3, [sp, #68]
        338738:	e2830001 	add	r0, r3, #1	; 0x1
        33873c:	e1a03800 	mov	r3, r0, lsl #16
        338740:	e1a03823 	mov	r3, r3, lsr #16
        338744:	e58d3044 	str	r3, [sp, #68]
        338748:	e1530005 	cmp	r3, r5
        33874c:	baffff6d 	blt	338508 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x148>
        338750:	e3a09000 	mov	r9, #0	; 0x0
        338754:	e3a06000 	mov	r6, #0	; 0x0
        338758:	e3a07000 	mov	r7, #0	; 0x0
        33875c:	e3550000 	cmp	r5, #0	; 0x0
        338760:	da00002e 	ble	338820 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x460>
        338764:	e28d0028 	add	r0, sp, #40	; 0x28
        338768:	e7d00007 	ldrb	r0, [r0, r7]
        33876c:	e1a08800 	mov	r8, r0, lsl #16
        338770:	e1a08848 	mov	r8, r8, asr #16
        338774:	e59d0048 	ldr	r0, [sp, #72]
        338778:	e7c08007 	strb	r8, [r0, r7]
        33877c:	e084a208 	add	sl, r4, r8, lsl #4
        338780:	e5da0006 	ldrb	r0, [sl, #6]
        338784:	e0800009 	add	r0, r0, r9
        338788:	e1a09800 	mov	r9, r0, lsl #16
        33878c:	e1a09829 	mov	r9, r9, lsr #16
        338790:	e1a03008 	mov	r3, r8
        338794:	e92d0008 	stmdb	sp!, {r3}
        338798:	e1a03006 	mov	r3, r6
        33879c:	e1a01004 	mov	r1, r4
        3387a0:	e3a02000 	mov	r2, #0	; 0x0
        3387a4:	e59b000c 	ldr	r0, [fp, #12]
        3387a8:	eb5fd3c8 	bl	1b2d6d0 <$FillRecWordsElement__FP10rec_w_typeP8RWS_typesN23>
        3387ac:	e28dd004 	add	sp, sp, #4	; 0x4
        3387b0:	e3580000 	cmp	r8, #0	; 0x0
        3387b4:	da000011 	ble	338800 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x440>
        3387b8:	e55a000e 	ldrb	r0, [sl, -#14]
        3387bc:	e3300002 	teq	r0, #2	; 0x2
        3387c0:	13300004 	teqne	r0, #4	; 0x4
        3387c4:	1a00000d 	bne	338800 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x440>
        3387c8:	e5da0012 	ldrb	r0, [sl, #18]
        3387cc:	e3300001 	teq	r0, #1	; 0x1
        3387d0:	1a00000a 	bne	338800 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x440>
        3387d4:	e2860001 	add	r0, r6, #1	; 0x1
        3387d8:	e1a06800 	mov	r6, r0, lsl #16
        3387dc:	e1a06846 	mov	r6, r6, asr #16
        3387e0:	e2883001 	add	r3, r8, #1	; 0x1
        3387e4:	e92d0008 	stmdb	sp!, {r3}
        3387e8:	e1a03006 	mov	r3, r6
        3387ec:	e1a01004 	mov	r1, r4
        3387f0:	e3a02000 	mov	r2, #0	; 0x0
        3387f4:	e59b000c 	ldr	r0, [fp, #12]
        3387f8:	eb5fd3b4 	bl	1b2d6d0 <$FillRecWordsElement__FP10rec_w_typeP8RWS_typesN23>
        3387fc:	e28dd004 	add	sp, sp, #4	; 0x4
        338800:	e2870001 	add	r0, r7, #1	; 0x1
        338804:	e1a07800 	mov	r7, r0, lsl #16
        338808:	e1a07827 	mov	r7, r7, lsr #16
        33880c:	e2860001 	add	r0, r6, #1	; 0x1
        338810:	e1a06800 	mov	r6, r0, lsl #16
        338814:	e1a06846 	mov	r6, r6, asr #16
        338818:	e1570005 	cmp	r7, r5
        33881c:	baffffd0 	blt	338764 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x3a4>
        338820:	e3a0a000 	mov	sl, #0	; 0x0
        338824:	e59b000c 	ldr	r0, [fp, #12]
        338828:	e7c0a006 	strb	sl, [r0, r6]
        33882c:	e1a01009 	mov	r1, r9
        338830:	e1a00005 	mov	r0, r5
        338834:	eb61e843 	bl	1bb2948 <$__rt_udiv>
        338838:	e59b200c 	ldr	r2, [fp, #12]
        33883c:	e5c20049 	strb	r0, [r2, #73]
        338840:	e1a00440 	mov	r0, r0, asr #8
        338844:	e5c20048 	strb	r0, [r2, #72]
        338848:	e59b000c 	ldr	r0, [fp, #12]
        33884c:	e5c0a050 	strb	sl, [r0, #80]
        338850:	e3a06001 	mov	r6, #1	; 0x1
        338854:	e3a00001 	mov	r0, #1	; 0x1
        338858:	e3e09000 	mvn	r9, #0	; 0x0
        33885c:	e3a08000 	mov	r8, #0	; 0x0
        338860:	e3a07000 	mov	r7, #0	; 0x0
        338864:	e3560000 	cmp	r6, #0	; 0x0
        338868:	e58d000c 	str	r0, [sp, #12]
        33886c:	da000090 	ble	338ab4 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x6f4>
        338870:	e28d3008 	add	r3, sp, #8	; 0x8
        338874:	e28d2004 	add	r2, sp, #4	; 0x4
        338878:	e1a01007 	mov	r1, r7
        33887c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        338880:	e1a03006 	mov	r3, r6
        338884:	e1a02005 	mov	r2, r5
        338888:	e1a00004 	mov	r0, r4
        33888c:	e59d1054 	ldr	r1, [sp, #84]
        338890:	eb5fdbcc 	bl	1b2f7c8 <$MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6>
        338894:	e28dd00c 	add	sp, sp, #12	; 0xc
        338898:	e3300000 	teq	r0, #0	; 0x0
        33889c:	0a000025 	beq	338938 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x578>
        3388a0:	e3a02000 	mov	r2, #0	; 0x0
        3388a4:	e3a01000 	mov	r1, #0	; 0x0
        3388a8:	e3550000 	cmp	r5, #0	; 0x0
        3388ac:	da000017 	ble	338910 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x550>
        3388b0:	e0870087 	add	r0, r7, r7, lsl #1
        3388b4:	e59d3048 	ldr	r3, [sp, #72]
        3388b8:	e0833180 	add	r3, r3, r0, lsl #3
        3388bc:	e7d30001 	ldrb	r0, [r3, r1]
        3388c0:	e59dc004 	ldr	ip, [sp, #4]
        3388c4:	e131084c 	teq	r1, ip, asr #16
        3388c8:	1a000006 	bne	3388e8 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x528>
        3388cc:	e084c200 	add	ip, r4, r0, lsl #4
        3388d0:	e5dcc012 	ldrb	ip, [ip, #18]
        3388d4:	e33c0001 	teq	ip, #1	; 0x1
        3388d8:	12800002 	addne	r0, r0, #2	; 0x2
        3388dc:	02800003 	addeq	r0, r0, #3	; 0x3
        3388e0:	e1a00800 	mov	r0, r0, lsl #16
        3388e4:	e1a00820 	mov	r0, r0, lsr #16
        3388e8:	e0840200 	add	r0, r4, r0, lsl #4
        3388ec:	e5d00006 	ldrb	r0, [r0, #6]
        3388f0:	e0800002 	add	r0, r0, r2
        3388f4:	e1a02800 	mov	r2, r0, lsl #16
        3388f8:	e1a02842 	mov	r2, r2, asr #16
        3388fc:	e2810001 	add	r0, r1, #1	; 0x1
        338900:	e1a01800 	mov	r1, r0, lsl #16
        338904:	e1a01821 	mov	r1, r1, lsr #16
        338908:	e1510005 	cmp	r1, r5
        33890c:	baffffea 	blt	3388bc <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x4fc>
        338910:	e1520008 	cmp	r2, r8
        338914:	da000007 	ble	338938 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x578>
        338918:	e1a08002 	mov	r8, r2
        33891c:	e1a09807 	mov	r9, r7, lsl #16
        338920:	e1a09849 	mov	r9, r9, asr #16
        338924:	e59d0004 	ldr	r0, [sp, #4]
        338928:	e1a00840 	mov	r0, r0, asr #16
        33892c:	e58d0000 	str	r0, [sp]
        338930:	e3a00000 	mov	r0, #0	; 0x0
        338934:	e58d000c 	str	r0, [sp, #12]
        338938:	e2870001 	add	r0, r7, #1	; 0x1
        33893c:	e1a07800 	mov	r7, r0, lsl #16
        338940:	e1a07827 	mov	r7, r7, lsr #16
        338944:	e1570006 	cmp	r7, r6
        338948:	baffffc8 	blt	338870 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x4b0>
        33894c:	e3790001 	cmn	r9, #1	; 0x1
        338950:	0a000057 	beq	338ab4 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x6f4>
        338954:	e3a01000 	mov	r1, #0	; 0x0
        338958:	e3a08000 	mov	r8, #0	; 0x0
        33895c:	e3a07000 	mov	r7, #0	; 0x0
        338960:	e3550000 	cmp	r5, #0	; 0x0
        338964:	e58d1040 	str	r1, [sp, #64]
        338968:	da000040 	ble	338a70 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x6b0>
        33896c:	e0891089 	add	r1, r9, r9, lsl #1
        338970:	e59d0048 	ldr	r0, [sp, #72]
        338974:	e0801181 	add	r1, r0, r1, lsl #3
        338978:	e58d1050 	str	r1, [sp, #80]
        33897c:	e0861086 	add	r1, r6, r6, lsl #1
        338980:	e080a181 	add	sl, r0, r1, lsl #3
        338984:	e59d0000 	ldr	r0, [sp]
        338988:	e1370000 	teq	r7, r0
        33898c:	e59d0050 	ldr	r0, [sp, #80]
        338990:	17d00007 	ldrneb	r0, [r0, r7]
        338994:	1a000005 	bne	3389b0 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x5f0>
        338998:	e7d00007 	ldrb	r0, [r0, r7]
        33899c:	e0841200 	add	r1, r4, r0, lsl #4
        3389a0:	e5d11012 	ldrb	r1, [r1, #18]
        3389a4:	e3310001 	teq	r1, #1	; 0x1
        3389a8:	12800002 	addne	r0, r0, #2	; 0x2
        3389ac:	02800003 	addeq	r0, r0, #3	; 0x3
        3389b0:	e7ca0007 	strb	r0, [sl, r7]
        3389b4:	e7da9007 	ldrb	r9, [sl, r7]
        3389b8:	e0840209 	add	r0, r4, r9, lsl #4
        3389bc:	e58d004c 	str	r0, [sp, #76]
        3389c0:	e5d00006 	ldrb	r0, [r0, #6]
        3389c4:	e59d1040 	ldr	r1, [sp, #64]
        3389c8:	e0800001 	add	r0, r0, r1
        3389cc:	e1a01800 	mov	r1, r0, lsl #16
        3389d0:	e1a01821 	mov	r1, r1, lsr #16
        3389d4:	e1a03009 	mov	r3, r9
        3389d8:	e58d1040 	str	r1, [sp, #64]
        3389dc:	e92d0008 	stmdb	sp!, {r3}
        3389e0:	e1a03008 	mov	r3, r8
        3389e4:	e1a02006 	mov	r2, r6
        3389e8:	e1a01004 	mov	r1, r4
        3389ec:	e59b000c 	ldr	r0, [fp, #12]
        3389f0:	eb5fd336 	bl	1b2d6d0 <$FillRecWordsElement__FP10rec_w_typeP8RWS_typesN23>
        3389f4:	e28dd004 	add	sp, sp, #4	; 0x4
        3389f8:	e3590000 	cmp	r9, #0	; 0x0
        3389fc:	da000013 	ble	338a50 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x690>
        338a00:	e59d004c 	ldr	r0, [sp, #76]
        338a04:	e550000e 	ldrb	r0, [r0, -#14]
        338a08:	e3300002 	teq	r0, #2	; 0x2
        338a0c:	13300004 	teqne	r0, #4	; 0x4
        338a10:	1a00000e 	bne	338a50 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x690>
        338a14:	e59d004c 	ldr	r0, [sp, #76]
        338a18:	e5d00012 	ldrb	r0, [r0, #18]
        338a1c:	e3300001 	teq	r0, #1	; 0x1
        338a20:	1a00000a 	bne	338a50 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x690>
        338a24:	e2880001 	add	r0, r8, #1	; 0x1
        338a28:	e1a08800 	mov	r8, r0, lsl #16
        338a2c:	e1a08848 	mov	r8, r8, asr #16
        338a30:	e2893001 	add	r3, r9, #1	; 0x1
        338a34:	e92d0008 	stmdb	sp!, {r3}
        338a38:	e1a03008 	mov	r3, r8
        338a3c:	e1a02006 	mov	r2, r6
        338a40:	e1a01004 	mov	r1, r4
        338a44:	e59b000c 	ldr	r0, [fp, #12]
        338a48:	eb5fd320 	bl	1b2d6d0 <$FillRecWordsElement__FP10rec_w_typeP8RWS_typesN23>
        338a4c:	e28dd004 	add	sp, sp, #4	; 0x4
        338a50:	e2870001 	add	r0, r7, #1	; 0x1
        338a54:	e1a07800 	mov	r7, r0, lsl #16
        338a58:	e1a07827 	mov	r7, r7, lsr #16
        338a5c:	e2880001 	add	r0, r8, #1	; 0x1
        338a60:	e1a08800 	mov	r8, r0, lsl #16
        338a64:	e1a08848 	mov	r8, r8, asr #16
        338a68:	e1570005 	cmp	r7, r5
        338a6c:	baffffc4 	blt	338984 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x5c4>
        338a70:	e3a0a000 	mov	sl, #0	; 0x0
        338a74:	e0860106 	add	r0, r6, r6, lsl #2
        338a78:	e59b200c 	ldr	r2, [fp, #12]
        338a7c:	e0827200 	add	r7, r2, r0, lsl #4
        338a80:	e1a09007 	mov	r9, r7
        338a84:	e7c7a008 	strb	sl, [r7, r8]
        338a88:	e1a00005 	mov	r0, r5
        338a8c:	e59d1040 	ldr	r1, [sp, #64]
        338a90:	eb61e7ac 	bl	1bb2948 <$__rt_udiv>
        338a94:	e5c70049 	strb	r0, [r7, #73]
        338a98:	e1a00440 	mov	r0, r0, asr #8
        338a9c:	e5c70048 	strb	r0, [r7, #72]
        338aa0:	e2860001 	add	r0, r6, #1	; 0x1
        338aa4:	e350000a 	cmp	r0, #10	; 0xa
        338aa8:	b5c9a050 	strltb	sl, [r9, #80]
        338aac:	e1a06800 	mov	r6, r0, lsl #16
        338ab0:	e1a06826 	mov	r6, r6, lsr #16
        338ab4:	e336000a 	teq	r6, #10	; 0xa
        338ab8:	0a000002 	beq	338ac8 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x708>
        338abc:	e59d000c 	ldr	r0, [sp, #12]
        338ac0:	e3300000 	teq	r0, #0	; 0x0
        338ac4:	0affff62 	beq	338854 <MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type+0x494>
        338ac8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6
 * Address: 00338b6c
 */
void globals::MakeNewPath() {
    /*
        338b6c:	e1a0c00d 	mov	ip, sp
        338b70:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        338b74:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        338b78:	e24cb014 	sub	fp, ip, #20	; 0x14
        338b7c:	e59b1014 	ldr	r1, [fp, #20]
        338b80:	e59b701c 	ldr	r7, [fp, #28]
        338b84:	e24dd004 	sub	sp, sp, #4	; 0x4
        338b88:	e1a0c802 	mov	ip, r2, lsl #16
        338b8c:	e1a0c82c 	mov	ip, ip, lsr #16
        338b90:	e1a06803 	mov	r6, r3, lsl #16
        338b94:	e1a06826 	mov	r6, r6, lsr #16
        338b98:	e1a01801 	mov	r1, r1, lsl #16
        338b9c:	e1a01821 	mov	r1, r1, lsr #16
        338ba0:	e3e02000 	mvn	r2, #0	; 0x0
        338ba4:	e59be018 	ldr	lr, [fp, #24]
        338ba8:	e5ce2001 	strb	r2, [lr, #1]
        338bac:	e5ce2000 	strb	r2, [lr]
        338bb0:	e3a02030 	mov	r2, #48	; 0x30
        338bb4:	e5c72001 	strb	r2, [r7, #1]
        338bb8:	e3a02075 	mov	r2, #117	; 0x75
        338bbc:	e5c72000 	strb	r2, [r7]
        338bc0:	e3a02000 	mov	r2, #0	; 0x0
        338bc4:	e35c0000 	cmp	ip, #0	; 0x0
        338bc8:	da000052 	ble	338d18 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x1ac>
        338bcc:	e0811081 	add	r1, r1, r1, lsl #1
        338bd0:	e59b9008 	ldr	r9, [fp, #8]
        338bd4:	e0895181 	add	r5, r9, r1, lsl #3
        338bd8:	e7d51002 	ldrb	r1, [r5, r2]
        338bdc:	e58d1000 	str	r1, [sp]
        338be0:	e1a01801 	mov	r1, r1, lsl #16
        338be4:	e1b01841 	movs	r1, r1, asr #16
        338be8:	0a000045 	beq	338d04 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x198>
        338bec:	e080e201 	add	lr, r0, r1, lsl #4
        338bf0:	e55e400e 	ldrb	r4, [lr, -#14]
        338bf4:	e3340002 	teq	r4, #2	; 0x2
        338bf8:	13340004 	teqne	r4, #4	; 0x4
        338bfc:	1a000040 	bne	338d04 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x198>
        338c00:	e5de4012 	ldrb	r4, [lr, #18]
        338c04:	e3340001 	teq	r4, #1	; 0x1
        338c08:	1a000004 	bne	338c20 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0xb4>
        338c0c:	e5dee022 	ldrb	lr, [lr, #34]
        338c10:	e33e0003 	teq	lr, #3	; 0x3
        338c14:	12811003 	addne	r1, r1, #3	; 0x3
        338c18:	1a000003 	bne	338c2c <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0xc0>
        338c1c:	ea000038 	b	338d04 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x198>
        338c20:	e3340003 	teq	r4, #3	; 0x3
        338c24:	0a000036 	beq	338d04 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x198>
        338c28:	e2811002 	add	r1, r1, #2	; 0x2
        338c2c:	e1a0e801 	mov	lr, r1, lsl #16
        338c30:	e1a0e84e 	mov	lr, lr, asr #16
        338c34:	e3a04000 	mov	r4, #0	; 0x0
        338c38:	e3560000 	cmp	r6, #0	; 0x0
        338c3c:	da00001e 	ble	338cbc <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x150>
        338c40:	e3a03001 	mov	r3, #1	; 0x1
        338c44:	e3a01000 	mov	r1, #0	; 0x0
        338c48:	e35c0000 	cmp	ip, #0	; 0x0
        338c4c:	da00002c 	ble	338d04 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x198>
        338c50:	e0848084 	add	r8, r4, r4, lsl #1
        338c54:	e59b9008 	ldr	r9, [fp, #8]
        338c58:	e0898188 	add	r8, r9, r8, lsl #3
        338c5c:	e1320001 	teq	r2, r1
        338c60:	0a000003 	beq	338c74 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x108>
        338c64:	e7d59001 	ldrb	r9, [r5, r1]
        338c68:	e7d8a001 	ldrb	sl, [r8, r1]
        338c6c:	e139000a 	teq	r9, sl
        338c70:	0a000004 	beq	338c88 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x11c>
        338c74:	e1320001 	teq	r2, r1
        338c78:	07d89001 	ldreqb	r9, [r8, r1]
        338c7c:	0139000e 	teqeq	r9, lr
        338c80:	13a03000 	movne	r3, #0	; 0x0
        338c84:	1a000006 	bne	338ca4 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x138>
        338c88:	e2811001 	add	r1, r1, #1	; 0x1
        338c8c:	e1a01801 	mov	r1, r1, lsl #16
        338c90:	e1a01841 	mov	r1, r1, asr #16
        338c94:	e151000c 	cmp	r1, ip
        338c98:	baffffef 	blt	338c5c <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0xf0>
        338c9c:	e3330000 	teq	r3, #0	; 0x0
        338ca0:	1a000005 	bne	338cbc <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x150>
        338ca4:	e2841001 	add	r1, r4, #1	; 0x1
        338ca8:	e1a04801 	mov	r4, r1, lsl #16
        338cac:	e1a04844 	mov	r4, r4, asr #16
        338cb0:	e1540006 	cmp	r4, r6
        338cb4:	baffffe1 	blt	338c40 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0xd4>
        338cb8:	ea000001 	b	338cc4 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x158>
        338cbc:	e3330000 	teq	r3, #0	; 0x0
        338cc0:	1a00000f 	bne	338d04 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x198>
        338cc4:	e59d1000 	ldr	r1, [sp]
        338cc8:	e0801201 	add	r1, r0, r1, lsl #4
        338ccc:	e5d11006 	ldrb	r1, [r1, #6]
        338cd0:	e080e20e 	add	lr, r0, lr, lsl #4
        338cd4:	e5dee006 	ldrb	lr, [lr, #6]
        338cd8:	e041100e 	sub	r1, r1, lr
        338cdc:	e597e000 	ldr	lr, [r7]
        338ce0:	e151084e 	cmp	r1, lr, asr #16
        338ce4:	aa000006 	bge	338d04 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x198>
        338ce8:	e5c71001 	strb	r1, [r7, #1]
        338cec:	e1a01441 	mov	r1, r1, asr #8
        338cf0:	e5c71000 	strb	r1, [r7]
        338cf4:	e59be018 	ldr	lr, [fp, #24]
        338cf8:	e5ce2001 	strb	r2, [lr, #1]
        338cfc:	e1a01442 	mov	r1, r2, asr #8
        338d00:	e5ce1000 	strb	r1, [lr]
        338d04:	e2821001 	add	r1, r2, #1	; 0x1
        338d08:	e1a02801 	mov	r2, r1, lsl #16
        338d0c:	e1a02842 	mov	r2, r2, asr #16
        338d10:	e152000c 	cmp	r2, ip
        338d14:	baffffaf 	blt	338bd8 <MakeNewPath__FP8RWS_typePA24_UcUsN23PsT6+0x6c>
        338d18:	e59be018 	ldr	lr, [fp, #24]
        338d1c:	e59e0000 	ldr	r0, [lr]
        338d20:	e1a00840 	mov	r0, r0, asr #16
        338d24:	e3700001 	cmn	r0, #1	; 0x1
        338d28:	13a00001 	movne	r0, #1	; 0x1
        338d2c:	03a00000 	moveq	r0, #0	; 0x0
        338d30:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MaxWidthInFork__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type
 * Address: 0033c238
 */
void globals::MaxWidthInFork() {
    /*
        33c238:	e1a0c00d 	mov	ip, sp
        33c23c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        33c240:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        33c244:	e24cb014 	sub	fp, ip, #20	; 0x14
        33c248:	e59b3014 	ldr	r3, [fp, #20]
        33c24c:	e24dd008 	sub	sp, sp, #8	; 0x8
        33c250:	e5939014 	ldr	r9, [r3, #20]
        33c254:	e593a010 	ldr	sl, [r3, #16]
        33c258:	e2838068 	add	r8, r3, #104	; 0x68
        33c25c:	e283306c 	add	r3, r3, #108	; 0x6c
        33c260:	e1a06800 	mov	r6, r0, lsl #16
        33c264:	e1a06846 	mov	r6, r6, asr #16
        33c268:	e1a00801 	mov	r0, r1, lsl #16
        33c26c:	e1a00840 	mov	r0, r0, asr #16
        33c270:	e1a05802 	mov	r5, r2, lsl #16
        33c274:	e1a05845 	mov	r5, r5, asr #16
        33c278:	e58d3000 	str	r3, [sp]
        33c27c:	e5886000 	str	r6, [r8]
        33c280:	e59d1000 	ldr	r1, [sp]
        33c284:	e1560000 	cmp	r6, r0
        33c288:	e5815000 	str	r5, [r1]
        33c28c:	b1500005 	cmplt	r0, r5
        33c290:	a3a0000d 	movge	r0, #13	; 0xd
        33c294:	aa00000e 	bge	33c2d4 <MaxWidthInFork__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type+0x9c>
        33c298:	e3a07000 	mov	r7, #0	; 0x0
        33c29c:	e2804001 	add	r4, r0, #1	; 0x1
        33c2a0:	e1540005 	cmp	r4, r5
        33c2a4:	ca00001d 	bgt	33c320 <MaxWidthInFork__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type+0xe8>
        33c2a8:	e2402001 	sub	r2, r0, #1	; 0x1
        33c2ac:	e58d2004 	str	r2, [sp, #4]
        33c2b0:	e7993084 	ldr	r3, [r9, r4, lsl #1]
        33c2b4:	e1a03843 	mov	r3, r3, asr #16
        33c2b8:	e1a01006 	mov	r1, r6
        33c2bc:	e1a00009 	mov	r0, r9
        33c2c0:	e59d2004 	ldr	r2, [sp, #4]
        33c2c4:	eb5fa3f6 	bl	1b252a4 <$iClosestToY__FPsiT2s>
        33c2c8:	e3500000 	cmp	r0, #0	; 0x0
        33c2cc:	aa000004 	bge	33c2e4 <MaxWidthInFork__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type+0xac>
        33c2d0:	e3a00017 	mov	r0, #23	; 0x17
        33c2d4:	e59b3010 	ldr	r3, [fp, #16]
        33c2d8:	e5830000 	str	r0, [r3]
        33c2dc:	e3a00000 	mov	r0, #0	; 0x0
        33c2e0:	ea00000f 	b	33c324 <MaxWidthInFork__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type+0xec>
        33c2e4:	e79a1084 	ldr	r1, [sl, r4, lsl #1]
        33c2e8:	e1a01841 	mov	r1, r1, asr #16
        33c2ec:	e79a2080 	ldr	r2, [sl, r0, lsl #1]
        33c2f0:	e1a02842 	mov	r2, r2, asr #16
        33c2f4:	e0511002 	subs	r1, r1, r2
        33c2f8:	42611000 	rsbmi	r1, r1, #0	; 0x0
        33c2fc:	e1510007 	cmp	r1, r7
        33c300:	da000003 	ble	33c314 <MaxWidthInFork__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type+0xdc>
        33c304:	e1a07001 	mov	r7, r1
        33c308:	e5880000 	str	r0, [r8]
        33c30c:	e59d0000 	ldr	r0, [sp]
        33c310:	e5804000 	str	r4, [r0]
        33c314:	e2844001 	add	r4, r4, #1	; 0x1
        33c318:	e1540005 	cmp	r4, r5
        33c31c:	daffffe3 	ble	33c2b0 <MaxWidthInFork__FlN21PiP13PS_point_typesPsT7P8ppd_typeUiP11xrdata_type+0x78>
        33c320:	e1a00007 	mov	r0, r7
        33c324:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakePeripheralController(PeripheralType)
 * Address: 0033f54c
 */
MakePeripheralController(PeripheralType) {
    /*
        33f54c:	e3a00000 	mov	r0, #0	; 0x0
        33f550:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MapRect__FP4RectN21
 * Address: 00340264
 */
void globals::MapRect() {
    /*
        340264:	e1a0c00d 	mov	ip, sp
        340268:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        34026c:	e24cb004 	sub	fp, ip, #4	; 0x4
        340270:	e1a04000 	mov	r4, r0
        340274:	e24dd008 	sub	sp, sp, #8	; 0x8
        340278:	e5918000 	ldr	r8, [r1]
        34027c:	e1a08848 	mov	r8, r8, asr #16
        340280:	e5916002 	ldr	r6, [r1, #2]
        340284:	e1a06846 	mov	r6, r6, asr #16
        340288:	e5910004 	ldr	r0, [r1, #4]
        34028c:	e068a840 	rsb	sl, r8, r0, asr #16
        340290:	e5910006 	ldr	r0, [r1, #6]
        340294:	e0669840 	rsb	r9, r6, r0, asr #16
        340298:	e5927000 	ldr	r7, [r2]
        34029c:	e1a07847 	mov	r7, r7, asr #16
        3402a0:	e5925002 	ldr	r5, [r2, #2]
        3402a4:	e1a05845 	mov	r5, r5, asr #16
        3402a8:	e5920004 	ldr	r0, [r2, #4]
        3402ac:	e0673840 	rsb	r3, r7, r0, asr #16
        3402b0:	e58d3004 	str	r3, [sp, #4]
        3402b4:	e5920006 	ldr	r0, [r2, #6]
        3402b8:	e0653840 	rsb	r3, r5, r0, asr #16
        3402bc:	e58d3000 	str	r3, [sp]
        3402c0:	e59d3004 	ldr	r3, [sp, #4]
        3402c4:	e92d0008 	stmdb	sp!, {r3}
        3402c8:	e1a03007 	mov	r3, r7
        3402cc:	e1a0200a 	mov	r2, sl
        3402d0:	e1a01008 	mov	r1, r8
        3402d4:	e5940000 	ldr	r0, [r4]
        3402d8:	e1a00840 	mov	r0, r0, asr #16
        3402dc:	eb60456d 	bl	1b51898 <$MapCoord__FlN41>
        3402e0:	e5c40001 	strb	r0, [r4, #1]
        3402e4:	e1a00440 	mov	r0, r0, asr #8
        3402e8:	e5c40000 	strb	r0, [r4]
        3402ec:	e5bd3004 	ldr	r3, [sp, #4]!
        3402f0:	e92d0008 	stmdb	sp!, {r3}
        3402f4:	e5940002 	ldr	r0, [r4, #2]
        3402f8:	e1a00840 	mov	r0, r0, asr #16
        3402fc:	e1a03005 	mov	r3, r5
        340300:	e1a02009 	mov	r2, r9
        340304:	e1a01006 	mov	r1, r6
        340308:	eb604562 	bl	1b51898 <$MapCoord__FlN41>
        34030c:	e28dd004 	add	sp, sp, #4	; 0x4
        340310:	e5c40003 	strb	r0, [r4, #3]
        340314:	e1a00440 	mov	r0, r0, asr #8
        340318:	e5c40002 	strb	r0, [r4, #2]
        34031c:	e59d3004 	ldr	r3, [sp, #4]
        340320:	e92d0008 	stmdb	sp!, {r3}
        340324:	e5940004 	ldr	r0, [r4, #4]
        340328:	e1a00840 	mov	r0, r0, asr #16
        34032c:	e1a03007 	mov	r3, r7
        340330:	e1a0200a 	mov	r2, sl
        340334:	e1a01008 	mov	r1, r8
        340338:	eb604556 	bl	1b51898 <$MapCoord__FlN41>
        34033c:	e5c40005 	strb	r0, [r4, #5]
        340340:	e1a00440 	mov	r0, r0, asr #8
        340344:	e5c40004 	strb	r0, [r4, #4]
        340348:	e5bd3004 	ldr	r3, [sp, #4]!
        34034c:	e92d0008 	stmdb	sp!, {r3}
        340350:	e5940006 	ldr	r0, [r4, #6]
        340354:	e1a00840 	mov	r0, r0, asr #16
        340358:	e1a03005 	mov	r3, r5
        34035c:	e1a02009 	mov	r2, r9
        340360:	e1a01006 	mov	r1, r6
        340364:	eb60454b 	bl	1b51898 <$MapCoord__FlN41>
        340368:	e5c40007 	strb	r0, [r4, #7]
        34036c:	e1a00440 	mov	r0, r0, asr #8
        340370:	e5c40006 	strb	r0, [r4, #6]
        340374:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MapRgn__FPP6RegionP4RectT2
 * Address: 00341670
 */
void globals::MapRgn() {
    /*
        341670:	e1a0c00d 	mov	ip, sp
        341674:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        341678:	e24cb004 	sub	fp, ip, #4	; 0x4
        34167c:	e1a06000 	mov	r6, r0
        341680:	e1a05001 	mov	r5, r1
        341684:	e1a04002 	mov	r4, r2
        341688:	e24dd00c 	sub	sp, sp, #12	; 0xc
        34168c:	e1a01002 	mov	r1, r2
        341690:	e1a00005 	mov	r0, r5
        341694:	eb603424 	bl	1b4e72c <$EqualRect__FP4RectT1>
        341698:	e3300000 	teq	r0, #0	; 0x0
        34169c:	1a000033 	bne	341770 <MapRgn__FPP6RegionP4RectT2+0x100>
        3416a0:	e5960000 	ldr	r0, [r6]
        3416a4:	e5901000 	ldr	r1, [r0]
        3416a8:	e1a01841 	mov	r1, r1, asr #16
        3416ac:	e331000c 	teq	r1, #12	; 0xc
        3416b0:	1a000004 	bne	3416c8 <MapRgn__FPP6RegionP4RectT2+0x58>
        3416b4:	e2800004 	add	r0, r0, #4	; 0x4
        3416b8:	e1a02004 	mov	r2, r4
        3416bc:	e1a01005 	mov	r1, r5
        3416c0:	eb60407a 	bl	1b518b0 <$MapRect__FP4RectN21>
        3416c4:	ea000029 	b	341770 <MapRgn__FPP6RegionP4RectT2+0x100>
        3416c8:	e3a00c01 	mov	r0, #256	; 0x100
        3416cc:	e58d0004 	str	r0, [sp, #4]
        3416d0:	eb628295 	bl	1be212c <$NewHandle>
        3416d4:	e1b07000 	movs	r7, r0
        3416d8:	0a000024 	beq	341770 <MapRgn__FPP6RegionP4RectT2+0x100>
        3416dc:	e3a00000 	mov	r0, #0	; 0x0
        3416e0:	e58d0008 	str	r0, [sp, #8]
        3416e4:	e28d3004 	add	r3, sp, #4	; 0x4
        3416e8:	e28d2008 	add	r2, sp, #8	; 0x8
        3416ec:	e1a01007 	mov	r1, r7
        3416f0:	e1a00006 	mov	r0, r6
        3416f4:	eb6027b2 	bl	1b4b5c4 <$PutRgn__FPP6RegionPPcPlT3>
        3416f8:	e3300000 	teq	r0, #0	; 0x0
        3416fc:	0a000019 	beq	341768 <MapRgn__FPP6RegionP4RectT2+0xf8>
        341700:	e59d0008 	ldr	r0, [sp, #8]
        341704:	e1a00140 	mov	r0, r0, asr #2
        341708:	e58d0000 	str	r0, [sp]
        34170c:	e3a09000 	mov	r9, #0	; 0x0
        341710:	e3500000 	cmp	r0, #0	; 0x0
        341714:	e5978000 	ldr	r8, [r7]
        341718:	da000008 	ble	341740 <MapRgn__FPP6RegionP4RectT2+0xd0>
        34171c:	e1a02004 	mov	r2, r4
        341720:	e1a01005 	mov	r1, r5
        341724:	e1a00008 	mov	r0, r8
        341728:	eb60405f 	bl	1b518ac <$MapPt__FP5PointP4RectT2>
        34172c:	e2888004 	add	r8, r8, #4	; 0x4
        341730:	e2899001 	add	r9, r9, #1	; 0x1
        341734:	e59d0000 	ldr	r0, [sp]
        341738:	e1590000 	cmp	r9, r0
        34173c:	bafffff6 	blt	34171c <MapRgn__FPP6RegionP4RectT2+0xac>
        341740:	e59d1000 	ldr	r1, [sp]
        341744:	e5970000 	ldr	r0, [r7]
        341748:	eb602bb1 	bl	1b4c614 <$SortPoints(Point *, long)>
        34174c:	e1a0100d 	mov	r1, sp
        341750:	e5970000 	ldr	r0, [r7]
        341754:	eb601f65 	bl	1b494f0 <$CullPoints(Point *, long *)>
        341758:	e1a02006 	mov	r2, r6
        34175c:	e1a00007 	mov	r0, r7
        341760:	e59d1000 	ldr	r1, [sp]
        341764:	eb602793 	bl	1b4b5b8 <$PackRgn(char **, long, Region **)>
        341768:	e1a00007 	mov	r0, r7
        34176c:	eb627e4f 	bl	1be10b0 <$DisposHandle>
        341770:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: modf
 * Address: 00344428
 */
void globals::modf() {
    /*
        344428:	e1a0c00d 	mov	ip, sp
        34442c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        344430:	e24cb004 	sub	fp, ip, #4	; 0x4
        344434:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        344438:	e92d0003 	stmdb	sp!, {r0, r1}
        34443c:	ecbdc102 	ldfd	f4, [sp], #8
        344440:	e1a04002 	mov	r4, r2
        344444:	e24dd004 	sub	sp, sp, #4	; 0x4
        344448:	e1a0000d 	mov	r0, sp
        34444c:	eb61bd68 	bl	1bb39f4 <$feholdexcept>
        344450:	ed2dc102 	stfd	f4, [sp, -#8]!
        344454:	e8bd0003 	ldmia	sp!, {r0, r1}
        344458:	eb61c59f 	bl	1bb5adc <$trunc>
        34445c:	ed848100 	stfd	f0, [r4]
        344460:	e3a00010 	mov	r0, #16	; 0x10
        344464:	eb61bd5e 	bl	1bb39e4 <$feclearexcept>
        344468:	e1a0000d 	mov	r0, sp
        34446c:	eb61c166 	bl	1bb4a0c <$feupdateenv>
        344470:	ed2dc102 	stfd	f4, [sp, -#8]!
        344474:	e8bd0003 	ldmia	sp!, {r0, r1}
        344478:	eb62fb58 	bl	1c031e0 <$__fpclassifyd>
        34447c:	e3300001 	teq	r0, #1	; 0x1
        344480:	1d948100 	ldfned	f0, [r4]
        344484:	1e240180 	sufned	f0, f4, f0
        344488:	0e008188 	mvfeqd	f0, #0.0
        34448c:	ed2dc102 	stfd	f4, [sp, -#8]!
        344490:	ed2d8102 	stfd	f0, [sp, -#8]!
        344494:	e8bd000f 	ldmia	sp!, {r0, r1, r2, r3}
        344498:	eb61bd47 	bl	1bb39bc <$copysign>
        34449c:	ed1bc207 	lfm	f4, 1, [fp, -#28]
        3444a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        3444a4:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        3444a8:	e240000a 	sub	r0, r0, #10	; 0xa
        3444ac:	e3a03000 	mov	r3, #0	; 0x0
        3444b0:	e3a0e9fe 	mov	lr, #4161536	; 0x3f8000
        3444b4:	e24ee501 	sub	lr, lr, #4194304	; 0x400000
        3444b8:	e7902083 	ldr	r2, [r0, r3, lsl #1]
        3444bc:	e1a02842 	mov	r2, r2, asr #16
        3444c0:	e0424082 	sub	r4, r2, r2, lsl #1
        3444c4:	e0644304 	rsb	r4, r4, r4, lsl #6
        3444c8:	e0444102 	sub	r4, r4, r2, lsl #2
        3444cc:	e1a04084 	mov	r4, r4, lsl #1
        3444d0:	e0802083 	add	r2, r0, r3, lsl #1
        3444d4:	e5925002 	ldr	r5, [r2, #2]
        3444d8:	e1a05845 	mov	r5, r5, asr #16
        3444dc:	e085c105 	add	ip, r5, r5, lsl #2
        3444e0:	e08cc305 	add	ip, ip, r5, lsl #6
        3444e4:	e04c5405 	sub	r5, ip, r5, lsl #8
        3444e8:	e0844085 	add	r4, r4, r5, lsl #1
        3444ec:	e5925006 	ldr	r5, [r2, #6]
        3444f0:	e1a05845 	mov	r5, r5, asr #16
        3444f4:	e085c085 	add	ip, r5, r5, lsl #1
        3444f8:	e08c5505 	add	r5, ip, r5, lsl #10
        3444fc:	e0844085 	add	r4, r4, r5, lsl #1
        344500:	e5925008 	ldr	r5, [r2, #8]
        344504:	e1a05845 	mov	r5, r5, asr #16
        344508:	e065c285 	rsb	ip, r5, r5, lsl #5
        34450c:	e08cc405 	add	ip, ip, r5, lsl #8
        344510:	e08cc10c 	add	ip, ip, ip, lsl #2
        344514:	e085510c 	add	r5, r5, ip, lsl #2
        344518:	e0844005 	add	r4, r4, r5
        34451c:	e592c00a 	ldr	ip, [r2, #10]
        344520:	e1a0c84c 	mov	ip, ip, asr #16
        344524:	e084468c 	add	r4, r4, ip, lsl #13
        344528:	e592500c 	ldr	r5, [r2, #12]
        34452c:	e1a05845 	mov	r5, r5, asr #16
        344530:	e065c285 	rsb	ip, r5, r5, lsl #5
        344534:	e08cc405 	add	ip, ip, r5, lsl #8
        344538:	e08cc10c 	add	ip, ip, ip, lsl #2
        34453c:	e085510c 	add	r5, r5, ip, lsl #2
        344540:	e0844005 	add	r4, r4, r5
        344544:	e592500e 	ldr	r5, [r2, #14]
        344548:	e1a05845 	mov	r5, r5, asr #16
        34454c:	e085c085 	add	ip, r5, r5, lsl #1
        344550:	e08c5505 	add	r5, ip, r5, lsl #10
        344554:	e0845085 	add	r5, r4, r5, lsl #1
        344558:	e5924012 	ldr	r4, [r2, #18]
        34455c:	e1a04844 	mov	r4, r4, asr #16
        344560:	e084c104 	add	ip, r4, r4, lsl #2
        344564:	e08cc304 	add	ip, ip, r4, lsl #6
        344568:	e04c4404 	sub	r4, ip, r4, lsl #8
        34456c:	e0854084 	add	r4, r5, r4, lsl #1
        344570:	e5922014 	ldr	r2, [r2, #20]
        344574:	e1a02842 	mov	r2, r2, asr #16
        344578:	e042c082 	sub	ip, r2, r2, lsl #1
        34457c:	e06cc30c 	rsb	ip, ip, ip, lsl #6
        344580:	e04c2102 	sub	r2, ip, r2, lsl #2
        344584:	e0842082 	add	r2, r4, r2, lsl #1
        344588:	e2822a01 	add	r2, r2, #4096	; 0x1000
        34458c:	e1a026c2 	mov	r2, r2, asr #13
        344590:	e3720902 	cmn	r2, #32768	; 0x8000
        344594:	b1a0400e 	movlt	r4, lr
        344598:	ba000003 	blt	3445ac <modf+0x184>
        34459c:	e3a04902 	mov	r4, #32768	; 0x8000
        3445a0:	e2444001 	sub	r4, r4, #1	; 0x1
        3445a4:	e1520004 	cmp	r2, r4
        3445a8:	d1a04002 	movle	r4, r2
        3445ac:	e0812083 	add	r2, r1, r3, lsl #1
        3445b0:	e5c24001 	strb	r4, [r2, #1]
        3445b4:	e1a0c444 	mov	ip, r4, asr #8
        3445b8:	e5c2c000 	strb	ip, [r2]
        3445bc:	e2833001 	add	r3, r3, #1	; 0x1
        3445c0:	e3530027 	cmp	r3, #39	; 0x27
        3445c4:	daffffbb 	ble	3444b8 <modf+0x90>
        3445c8:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
        3445cc:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        3445d0:	e3a0c000 	mov	ip, #0	; 0x0
        3445d4:	e5903006 	ldr	r3, [r0, #6]
        3445d8:	e1a03843 	mov	r3, r3, asr #16
        3445dc:	e1a0e143 	mov	lr, r3, asr #2
        3445e0:	e0030e9e 	mul	r3, lr, lr
        3445e4:	e590e00c 	ldr	lr, [r0, #12]
        3445e8:	e1a0e84e 	mov	lr, lr, asr #16
        3445ec:	e1a0414e 	mov	r4, lr, asr #2
        3445f0:	e0233494 	mla	r3, r4, r4, r3
        3445f4:	e590e012 	ldr	lr, [r0, #18]
        3445f8:	e1a0e84e 	mov	lr, lr, asr #16
        3445fc:	e1a0414e 	mov	r4, lr, asr #2
        344600:	e0233494 	mla	r3, r4, r4, r3
        344604:	e590e018 	ldr	lr, [r0, #24]
        344608:	e1a0e84e 	mov	lr, lr, asr #16
        34460c:	e1a0414e 	mov	r4, lr, asr #2
        344610:	e0233494 	mla	r3, r4, r4, r3
        344614:	e590e01e 	ldr	lr, [r0, #30]
        344618:	e1a0e84e 	mov	lr, lr, asr #16
        34461c:	e1a0414e 	mov	r4, lr, asr #2
        344620:	e0233494 	mla	r3, r4, r4, r3
        344624:	e590e024 	ldr	lr, [r0, #36]
        344628:	e1a0e84e 	mov	lr, lr, asr #16
        34462c:	e1a0414e 	mov	r4, lr, asr #2
        344630:	e0233494 	mla	r3, r4, r4, r3
        344634:	e590e02a 	ldr	lr, [r0, #42]
        344638:	e1a0e84e 	mov	lr, lr, asr #16
        34463c:	e1a0e14e 	mov	lr, lr, asr #2
        344640:	e0233e9e 	mla	r3, lr, lr, r3
        344644:	e590e030 	ldr	lr, [r0, #48]
        344648:	e1a0e84e 	mov	lr, lr, asr #16
        34464c:	e1a0e14e 	mov	lr, lr, asr #2
        344650:	e0233e9e 	mla	r3, lr, lr, r3
        344654:	e590e036 	ldr	lr, [r0, #54]
        344658:	e1a0e84e 	mov	lr, lr, asr #16
        34465c:	e1a0e14e 	mov	lr, lr, asr #2
        344660:	e0233e9e 	mla	r3, lr, lr, r3
        344664:	e590e03c 	ldr	lr, [r0, #60]
        344668:	e1a0e84e 	mov	lr, lr, asr #16
        34466c:	e1a0414e 	mov	r4, lr, asr #2
        344670:	e0233494 	mla	r3, r4, r4, r3
        344674:	e590e042 	ldr	lr, [r0, #66]
        344678:	e1a0e84e 	mov	lr, lr, asr #16
        34467c:	e1a0414e 	mov	r4, lr, asr #2
        344680:	e0233494 	mla	r3, r4, r4, r3
        344684:	e590e048 	ldr	lr, [r0, #72]
        344688:	e1a0e84e 	mov	lr, lr, asr #16
        34468c:	e1a0e14e 	mov	lr, lr, asr #2
        344690:	e0233e9e 	mla	r3, lr, lr, r3
        344694:	e1a04003 	mov	r4, r3
        344698:	e590e000 	ldr	lr, [r0]
        34469c:	e1a0e84e 	mov	lr, lr, asr #16
        3446a0:	e1a0514e 	mov	r5, lr, asr #2
        3446a4:	e0233595 	mla	r3, r5, r5, r3
        3446a8:	e1a03083 	mov	r3, r3, lsl #1
        3446ac:	e590e002 	ldr	lr, [r0, #2]
        3446b0:	e1a0e84e 	mov	lr, lr, asr #16
        3446b4:	e1a0514e 	mov	r5, lr, asr #2
        3446b8:	e00e0595 	mul	lr, r5, r5
        3446bc:	e5905008 	ldr	r5, [r0, #8]
        3446c0:	e1a05845 	mov	r5, r5, asr #16
        3446c4:	e1a05145 	mov	r5, r5, asr #2
        3446c8:	e02ee595 	mla	lr, r5, r5, lr
        3446cc:	e590500e 	ldr	r5, [r0, #14]
        3446d0:	e1a05845 	mov	r5, r5, asr #16
        3446d4:	e1a05145 	mov	r5, r5, asr #2
        3446d8:	e02ee595 	mla	lr, r5, r5, lr
        3446dc:	e5905014 	ldr	r5, [r0, #20]
        3446e0:	e1a05845 	mov	r5, r5, asr #16
        3446e4:	e1a05145 	mov	r5, r5, asr #2
        3446e8:	e02ee595 	mla	lr, r5, r5, lr
        3446ec:	e590501a 	ldr	r5, [r0, #26]
        3446f0:	e1a05845 	mov	r5, r5, asr #16
        3446f4:	e1a05145 	mov	r5, r5, asr #2
        3446f8:	e02ee595 	mla	lr, r5, r5, lr
        3446fc:	e5905020 	ldr	r5, [r0, #32]
        344700:	e1a05845 	mov	r5, r5, asr #16
        344704:	e1a05145 	mov	r5, r5, asr #2
        344708:	e02ee595 	mla	lr, r5, r5, lr
        34470c:	e5905026 	ldr	r5, [r0, #38]
        344710:	e1a05845 	mov	r5, r5, asr #16
        344714:	e1a06145 	mov	r6, r5, asr #2
        344718:	e02ee696 	mla	lr, r6, r6, lr
        34471c:	e590502c 	ldr	r5, [r0, #44]
        344720:	e1a05845 	mov	r5, r5, asr #16
        344724:	e1a06145 	mov	r6, r5, asr #2
        344728:	e02ee696 	mla	lr, r6, r6, lr
        34472c:	e5905032 	ldr	r5, [r0, #50]
        344730:	e1a05845 	mov	r5, r5, asr #16
        344734:	e1a06145 	mov	r6, r5, asr #2
        344738:	e02ee696 	mla	lr, r6, r6, lr
        34473c:	e5905038 	ldr	r5, [r0, #56]
        344740:	e1a05845 	mov	r5, r5, asr #16
        344744:	e1a05145 	mov	r5, r5, asr #2
        344748:	e02ee595 	mla	lr, r5, r5, lr
        34474c:	e590503e 	ldr	r5, [r0, #62]
        344750:	e1a05845 	mov	r5, r5, asr #16
        344754:	e1a06145 	mov	r6, r5, asr #2
        344758:	e02ee696 	mla	lr, r6, r6, lr
        34475c:	e5905044 	ldr	r5, [r0, #68]
        344760:	e1a05845 	mov	r5, r5, asr #16
        344764:	e1a05145 	mov	r5, r5, asr #2
        344768:	e02ee595 	mla	lr, r5, r5, lr
        34476c:	e590504a 	ldr	r5, [r0, #74]
        344770:	e1a05845 	mov	r5, r5, asr #16
        344774:	e1a05145 	mov	r5, r5, asr #2
        344778:	e02ee595 	mla	lr, r5, r5, lr
        34477c:	e1a0e08e 	mov	lr, lr, lsl #1
        344780:	e15e0003 	cmp	lr, r3
        344784:	c3a0c001 	movgt	ip, #1	; 0x1
        344788:	c1a0300e 	movgt	r3, lr
        34478c:	e590e004 	ldr	lr, [r0, #4]
        344790:	e1a0e84e 	mov	lr, lr, asr #16
        344794:	e1a0514e 	mov	r5, lr, asr #2
        344798:	e00e0595 	mul	lr, r5, r5
        34479c:	e590500a 	ldr	r5, [r0, #10]
        3447a0:	e1a05845 	mov	r5, r5, asr #16
        3447a4:	e1a05145 	mov	r5, r5, asr #2
        3447a8:	e02ee595 	mla	lr, r5, r5, lr
        3447ac:	e5905010 	ldr	r5, [r0, #16]
        3447b0:	e1a05845 	mov	r5, r5, asr #16
        3447b4:	e1a05145 	mov	r5, r5, asr #2
        3447b8:	e02ee595 	mla	lr, r5, r5, lr
        3447bc:	e5905016 	ldr	r5, [r0, #22]
        3447c0:	e1a05845 	mov	r5, r5, asr #16
        3447c4:	e1a05145 	mov	r5, r5, asr #2
        3447c8:	e02ee595 	mla	lr, r5, r5, lr
        3447cc:	e590501c 	ldr	r5, [r0, #28]
        3447d0:	e1a05845 	mov	r5, r5, asr #16
        3447d4:	e1a06145 	mov	r6, r5, asr #2
        3447d8:	e02ee696 	mla	lr, r6, r6, lr
        3447dc:	e5905022 	ldr	r5, [r0, #34]
        3447e0:	e1a05845 	mov	r5, r5, asr #16
        3447e4:	e1a05145 	mov	r5, r5, asr #2
        3447e8:	e02ee595 	mla	lr, r5, r5, lr
        3447ec:	e5905028 	ldr	r5, [r0, #40]
        3447f0:	e1a05845 	mov	r5, r5, asr #16
        3447f4:	e1a06145 	mov	r6, r5, asr #2
        3447f8:	e02ee696 	mla	lr, r6, r6, lr
        3447fc:	e590502e 	ldr	r5, [r0, #46]
        344800:	e1a05845 	mov	r5, r5, asr #16
        344804:	e1a06145 	mov	r6, r5, asr #2
        344808:	e02ee696 	mla	lr, r6, r6, lr
        34480c:	e5905034 	ldr	r5, [r0, #52]
        344810:	e1a05845 	mov	r5, r5, asr #16
        344814:	e1a06145 	mov	r6, r5, asr #2
        344818:	e02ee696 	mla	lr, r6, r6, lr
        34481c:	e590503a 	ldr	r5, [r0, #58]
        344820:	e1a05845 	mov	r5, r5, asr #16
        344824:	e1a05145 	mov	r5, r5, asr #2
        344828:	e02ee595 	mla	lr, r5, r5, lr
        34482c:	e5905040 	ldr	r5, [r0, #64]
        344830:	e1a05845 	mov	r5, r5, asr #16
        344834:	e1a05145 	mov	r5, r5, asr #2
        344838:	e02ee595 	mla	lr, r5, r5, lr
        34483c:	e5905046 	ldr	r5, [r0, #70]
        344840:	e1a05845 	mov	r5, r5, asr #16
        344844:	e1a05145 	mov	r5, r5, asr #2
        344848:	e02ee595 	mla	lr, r5, r5, lr
        34484c:	e590504c 	ldr	r5, [r0, #76]
        344850:	e1a05845 	mov	r5, r5, asr #16
        344854:	e1a05145 	mov	r5, r5, asr #2
        344858:	e02ee595 	mla	lr, r5, r5, lr
        34485c:	e1a0e08e 	mov	lr, lr, lsl #1
        344860:	e15e0003 	cmp	lr, r3
        344864:	c3a0c002 	movgt	ip, #2	; 0x2
        344868:	c1a0300e 	movgt	r3, lr
        34486c:	e590e04e 	ldr	lr, [r0, #78]
        344870:	e1a0e84e 	mov	lr, lr, asr #16
        344874:	e1a0514e 	mov	r5, lr, asr #2
        344878:	e02e4595 	mla	lr, r5, r5, r4
        34487c:	e153008e 	cmp	r3, lr, lsl #1
        344880:	b3a0c003 	movlt	ip, #3	; 0x3
        344884:	e3a03000 	mov	r3, #0	; 0x0
        344888:	e083e083 	add	lr, r3, r3, lsl #1
        34488c:	e08ee00c 	add	lr, lr, ip
        344890:	e790e08e 	ldr	lr, [r0, lr, lsl #1]
        344894:	e1a0e82e 	mov	lr, lr, lsr #16
        344898:	e0814083 	add	r4, r1, r3, lsl #1
        34489c:	e5c4e001 	strb	lr, [r4, #1]
        3448a0:	e1a0e44e 	mov	lr, lr, asr #8
        3448a4:	e5c4e000 	strb	lr, [r4]
        3448a8:	e2833001 	add	r3, r3, #1	; 0x1
        3448ac:	e353000c 	cmp	r3, #12	; 0xc
        3448b0:	dafffff4 	ble	344888 <modf+0x460>
        3448b4:	e5c2c001 	strb	ip, [r2, #1]
        3448b8:	e1a0044c 	mov	r0, ip, asr #8
        3448bc:	e5c20000 	strb	r0, [r2]
        3448c0:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
        3448c4:	e1a03800 	mov	r3, r0, lsl #16
        3448c8:	e1a03843 	mov	r3, r3, asr #16
        3448cc:	e3a00000 	mov	r0, #0	; 0x0
        3448d0:	e353000f 	cmp	r3, #15	; 0xf
        3448d4:	c3e00000 	mvngt	r0, #0	; 0x0
        3448d8:	c08001c3 	addgt	r0, r0, r3, asr #3
        3448dc:	c1a00800 	movgt	r0, r0, lsl #16
        3448e0:	c1a00840 	movgt	r0, r0, asr #16
        3448e4:	e0433180 	sub	r3, r3, r0, lsl #3
        3448e8:	e1a03803 	mov	r3, r3, lsl #16
        3448ec:	e1b03843 	movs	r3, r3, asr #16
        3448f0:	03e00003 	mvneq	r0, #3	; 0x3
        3448f4:	03a03007 	moveq	r3, #7	; 0x7
        3448f8:	0a00000d 	beq	344934 <modf+0x50c>
        3448fc:	e3a0c001 	mov	ip, #1	; 0x1
        344900:	e3530007 	cmp	r3, #7	; 0x7
        344904:	ca000007 	bgt	344928 <modf+0x500>
        344908:	e18c3083 	orr	r3, ip, r3, lsl #1
        34490c:	e1a03803 	mov	r3, r3, lsl #16
        344910:	e1a03843 	mov	r3, r3, asr #16
        344914:	e2400001 	sub	r0, r0, #1	; 0x1
        344918:	e1a00800 	mov	r0, r0, lsl #16
        34491c:	e1a00840 	mov	r0, r0, asr #16
        344920:	e3530007 	cmp	r3, #7	; 0x7
        344924:	dafffff7 	ble	344908 <modf+0x4e0>
        344928:	e2433008 	sub	r3, r3, #8	; 0x8
        34492c:	e1a03803 	mov	r3, r3, lsl #16
        344930:	e1a03843 	mov	r3, r3, asr #16
        344934:	e5c10001 	strb	r0, [r1, #1]
        344938:	e1a00440 	mov	r0, r0, asr #8
        34493c:	e5c10000 	strb	r0, [r1]
        344940:	e5c23001 	strb	r3, [r2, #1]
        344944:	e1a00443 	mov	r0, r3, asr #8
        344948:	e5c20000 	strb	r0, [r2]
        34494c:	e1a0f00e 	mov	pc, lr
        344950:	e1a0c00d 	mov	ip, sp
        344954:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        344958:	e24cb004 	sub	fp, ip, #4	; 0x4
        34495c:	e1a04000 	mov	r4, r0
        344960:	e1a07001 	mov	r7, r1
        344964:	e1a06002 	mov	r6, r2
        344968:	e1a05003 	mov	r5, r3
        34496c:	e59b9004 	ldr	r9, [fp, #4]
        344970:	e24dd008 	sub	sp, sp, #8	; 0x8
        344974:	e3a00000 	mov	r0, #0	; 0x0
        344978:	e3a01000 	mov	r1, #0	; 0x0
        34497c:	e3a03902 	mov	r3, #32768	; 0x8000
        344980:	e2433001 	sub	r3, r3, #1	; 0x1
        344984:	e7942081 	ldr	r2, [r4, r1, lsl #1]
        344988:	e1a02842 	mov	r2, r2, asr #16
        34498c:	e3520000 	cmp	r2, #0	; 0x0
        344990:	aa000002 	bge	3449a0 <modf+0x578>
        344994:	e3720902 	cmn	r2, #32768	; 0x8000
        344998:	12622000 	rsbne	r2, r2, #0	; 0x0
        34499c:	01a02003 	moveq	r2, r3
        3449a0:	e1a02802 	mov	r2, r2, lsl #16
        3449a4:	e1a02842 	mov	r2, r2, asr #16
        3449a8:	e1520000 	cmp	r2, r0
        3449ac:	c1a00002 	movgt	r0, r2
        3449b0:	e2811001 	add	r1, r1, #1	; 0x1
        3449b4:	e351000c 	cmp	r1, #12	; 0xc
        3449b8:	dafffff1 	ble	344984 <modf+0x55c>
        3449bc:	e3a01000 	mov	r1, #0	; 0x0
        3449c0:	e5cd1005 	strb	r1, [sp, #5]
        3449c4:	e5cd1004 	strb	r1, [sp, #4]
        3449c8:	e1a014c0 	mov	r1, r0, asr #9
        3449cc:	e1a01801 	mov	r1, r1, lsl #16
        3449d0:	e1a01841 	mov	r1, r1, asr #16
        3449d4:	e3a02000 	mov	r2, #0	; 0x0
        3449d8:	e3a03000 	mov	r3, #0	; 0x0
        3449dc:	e3510000 	cmp	r1, #0	; 0x0
        3449e0:	c3a0c000 	movgt	ip, #0	; 0x0
        3449e4:	d3a0c001 	movle	ip, #1	; 0x1
        3449e8:	e19c2002 	orrs	r2, ip, r2
        3449ec:	e1a010c1 	mov	r1, r1, asr #1
        3449f0:	e1a01801 	mov	r1, r1, lsl #16
        3449f4:	e1a01841 	mov	r1, r1, asr #16
        3449f8:	1a000004 	bne	344a10 <modf+0x5e8>
        3449fc:	e59dc006 	ldr	ip, [sp, #6]
        344a00:	e28cc001 	add	ip, ip, #1	; 0x1
        344a04:	e5cdc005 	strb	ip, [sp, #5]
        344a08:	e1a0c44c 	mov	ip, ip, asr #8
        344a0c:	e5cdc004 	strb	ip, [sp, #4]
        344a10:	e2833001 	add	r3, r3, #1	; 0x1
        344a14:	e3530005 	cmp	r3, #5	; 0x5
        344a18:	daffffef 	ble	3449dc <modf+0x5b4>
        344a1c:	e59d1006 	ldr	r1, [sp, #6]
        344a20:	e2811005 	add	r1, r1, #5	; 0x5
        344a24:	e1a02801 	mov	r2, r1, lsl #16
        344a28:	e1a02842 	mov	r2, r2, asr #16
        344a2c:	e59d1004 	ldr	r1, [sp, #4]
        344a30:	e1a01841 	mov	r1, r1, asr #16
        344a34:	e1a01181 	mov	r1, r1, lsl #3
        344a38:	e1a00250 	mov	r0, r0, asr r2
        344a3c:	eb60ed64 	bl	1b7ffd4 <$gsm_add__FsT1>
        344a40:	e1a08000 	mov	r8, r0
        344a44:	e1a0200d 	mov	r2, sp
        344a48:	e28d1004 	add	r1, sp, #4	; 0x4
        344a4c:	ebffff9c 	bl	3448c4 <modf+0x49c>
        344a50:	e59d0006 	ldr	r0, [sp, #6]
        344a54:	e2600006 	rsb	r0, r0, #6	; 0x6
        344a58:	e1a02800 	mov	r2, r0, lsl #16
        344a5c:	e1a02842 	mov	r2, r2, asr #16
        344a60:	e59f1088 	ldr	r1, [pc, #88]	; 344af0 <modf+0x6c8>
        344a64:	e59d0000 	ldr	r0, [sp]
        344a68:	e1a00840 	mov	r0, r0, asr #16
        344a6c:	e7911080 	ldr	r1, [r1, r0, lsl #1]
        344a70:	e1a01841 	mov	r1, r1, asr #16
        344a74:	e3a00000 	mov	r0, #0	; 0x0
        344a78:	e7943080 	ldr	r3, [r4, r0, lsl #1]
        344a7c:	e1a03843 	mov	r3, r3, asr #16
        344a80:	e1a03213 	mov	r3, r3, lsl r2
        344a84:	e1a03803 	mov	r3, r3, lsl #16
        344a88:	e1a03843 	mov	r3, r3, asr #16
        344a8c:	e0030391 	mul	r3, r1, r3
        344a90:	e1a037c3 	mov	r3, r3, asr #15
        344a94:	e1a03803 	mov	r3, r3, lsl #16
        344a98:	e1a03843 	mov	r3, r3, asr #16
        344a9c:	e1a03643 	mov	r3, r3, asr #12
        344aa0:	e2833004 	add	r3, r3, #4	; 0x4
        344aa4:	e087c080 	add	ip, r7, r0, lsl #1
        344aa8:	e5cc3001 	strb	r3, [ip, #1]
        344aac:	e1a03443 	mov	r3, r3, asr #8
        344ab0:	e5cc3000 	strb	r3, [ip]
        344ab4:	e2800001 	add	r0, r0, #1	; 0x1
        344ab8:	e350000c 	cmp	r0, #12	; 0xc
        344abc:	daffffed 	ble	344a78 <modf+0x650>
        344ac0:	e59d0002 	ldr	r0, [sp, #2]
        344ac4:	e5c60001 	strb	r0, [r6, #1]
        344ac8:	e1a00440 	mov	r0, r0, asr #8
        344acc:	e5c60000 	strb	r0, [r6]
        344ad0:	e59d0006 	ldr	r0, [sp, #6]
        344ad4:	e5c50001 	strb	r0, [r5, #1]
        344ad8:	e1a00440 	mov	r0, r0, asr #8
        344adc:	e5c50000 	strb	r0, [r5]
        344ae0:	e5c98001 	strb	r8, [r9, #1]
        344ae4:	e1a00448 	mov	r0, r8, asr #8
        344ae8:	e5c90000 	strb	r0, [r9]
        344aec:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        344af0:	0c105a34 	ldceq	10, cr5, [r0], -#208
        344af4:	e1a0c00d 	mov	ip, sp
        344af8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        344afc:	e24cb004 	sub	fp, ip, #4	; 0x4
        344b00:	e1a05000 	mov	r5, r0
        344b04:	e1a04003 	mov	r4, r3
        344b08:	e1a00801 	mov	r0, r1, lsl #16
        344b0c:	e1a00840 	mov	r0, r0, asr #16
        344b10:	e1a01802 	mov	r1, r2, lsl #16
        344b14:	e1a01841 	mov	r1, r1, asr #16
        344b18:	e59f20ac 	ldr	r2, [pc, #ac]	; 344bcc <modf+0x7a4>
        344b1c:	e7929080 	ldr	r9, [r2, r0, lsl #1]
        344b20:	e1a09849 	mov	r9, r9, asr #16
        344b24:	e3a00006 	mov	r0, #6	; 0x6
        344b28:	eb60ed2a 	bl	1b7ffd8 <$gsm_sub__FsT1>
        344b2c:	e1a08000 	mov	r8, r0
        344b30:	e3a01001 	mov	r1, #1	; 0x1
        344b34:	eb60ed27 	bl	1b7ffd8 <$gsm_sub__FsT1>
        344b38:	e1a01000 	mov	r1, r0
        344b3c:	e3a00001 	mov	r0, #1	; 0x1
        344b40:	eb60ed27 	bl	1b7ffe4 <$gsm_asl(short, int)>
        344b44:	e1a07000 	mov	r7, r0
        344b48:	e3a0600c 	mov	r6, #12	; 0xc
        344b4c:	e3e0a006 	mvn	sl, #6	; 0x6
        344b50:	e4950002 	ldr	r0, [r5], #2
        344b54:	e1a00820 	mov	r0, r0, lsr #16
        344b58:	e08a0080 	add	r0, sl, r0, lsl #1
        344b5c:	e1a00600 	mov	r0, r0, lsl #12
        344b60:	e1a00800 	mov	r0, r0, lsl #16
        344b64:	e1a00840 	mov	r0, r0, asr #16
        344b68:	e0010990 	mul	r1, r0, r9
        344b6c:	e2810901 	add	r0, r1, #16384	; 0x4000
        344b70:	e1a007c0 	mov	r0, r0, asr #15
        344b74:	e1a00800 	mov	r0, r0, lsl #16
        344b78:	e0870840 	add	r0, r7, r0, asr #16
        344b7c:	e2801902 	add	r1, r0, #32768	; 0x8000
        344b80:	e251ccff 	subs	ip, r1, #65280	; 0xff00
        344b84:	235c00ff 	cmpcs	ip, #255	; 0xff
        344b88:	9a000004 	bls	344ba0 <modf+0x778>
        344b8c:	e3500000 	cmp	r0, #0	; 0x0
        344b90:	d3a009fe 	movle	r0, #4161536	; 0x3f8000
        344b94:	d2400501 	suble	r0, r0, #4194304	; 0x400000
        344b98:	c3a00902 	movgt	r0, #32768	; 0x8000
        344b9c:	c2400001 	subgt	r0, r0, #1	; 0x1
        344ba0:	e1a00800 	mov	r0, r0, lsl #16
        344ba4:	e1a00840 	mov	r0, r0, asr #16
        344ba8:	e1a01008 	mov	r1, r8
        344bac:	eb60ed0d 	bl	1b7ffe8 <$gsm_asr(short, int)>
        344bb0:	e5c40001 	strb	r0, [r4, #1]
        344bb4:	e1a00440 	mov	r0, r0, asr #8
        344bb8:	e4c40002 	strb	r0, [r4], #2
        344bbc:	e1b00006 	movs	r0, r6
        344bc0:	e2466001 	sub	r6, r6, #1	; 0x1
        344bc4:	1affffe1 	bne	344b50 <modf+0x728>
        344bc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        344bcc:	0c105a44 	ldceq	10, cr5, [r0], -#272
        344bd0:	e92d4000 	stmdb	sp!, {lr}
        344bd4:	e1a03800 	mov	r3, r0, lsl #16
        344bd8:	e1b03843 	movs	r3, r3, asr #16
        344bdc:	e3a0c00d 	mov	ip, #13	; 0xd
        344be0:	e3a00000 	mov	r0, #0	; 0x0
        344be4:	0a00000b 	beq	344c18 <modf+0x7f0>
        344be8:	e3330001 	teq	r3, #1	; 0x1
        344bec:	0a000007 	beq	344c10 <modf+0x7e8>
        344bf0:	e3330002 	teq	r3, #2	; 0x2
        344bf4:	0a000003 	beq	344c08 <modf+0x7e0>
        344bf8:	e3330003 	teq	r3, #3	; 0x3
        344bfc:	1a00000c 	bne	344c34 <modf+0x80c>
        344c00:	e5c20001 	strb	r0, [r2, #1]
        344c04:	e4c20002 	strb	r0, [r2], #2
        344c08:	e5c20001 	strb	r0, [r2, #1]
        344c0c:	e4c20002 	strb	r0, [r2], #2
        344c10:	e5c20001 	strb	r0, [r2, #1]
        344c14:	e4c20002 	strb	r0, [r2], #2
        344c18:	e491e002 	ldr	lr, [r1], #2
        344c1c:	e1a0e82e 	mov	lr, lr, lsr #16
        344c20:	e5c2e001 	strb	lr, [r2, #1]
        344c24:	e1a0e44e 	mov	lr, lr, asr #8
        344c28:	e4c2e002 	strb	lr, [r2], #2
        344c2c:	e25cc001 	subs	ip, ip, #1	; 0x1
        344c30:	1afffff4 	bne	344c08 <modf+0x7e0>
        344c34:	e2831001 	add	r1, r3, #1	; 0x1
        344c38:	e1a01801 	mov	r1, r1, lsl #16
        344c3c:	e1a01841 	mov	r1, r1, asr #16
        344c40:	e3510004 	cmp	r1, #4	; 0x4
        344c44:	a8bd8000 	ldmgeia	sp!, {pc}
        344c48:	e5c20001 	strb	r0, [r2, #1]
        344c4c:	e4c20002 	strb	r0, [r2], #2
        344c50:	e2811001 	add	r1, r1, #1	; 0x1
        344c54:	e1a01801 	mov	r1, r1, lsl #16
        344c58:	e1a01841 	mov	r1, r1, asr #16
        344c5c:	e3510004 	cmp	r1, #4	; 0x4
        344c60:	bafffff8 	blt	344c48 <modf+0x820>
        344c64:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: MultiKeyToSKey__FRC6RefVarT1P4SKey
 * Address: 00348c38
 */
void globals::MultiKeyToSKey() {
    /*
        348c38:	e1a0c00d 	mov	ip, sp
        348c3c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        348c40:	e24cb004 	sub	fp, ip, #4	; 0x4
        348c44:	e1a05000 	mov	r5, r0
        348c48:	e1a04002 	mov	r4, r2
        348c4c:	e1a00002 	mov	r0, r2
        348c50:	e3a01000 	mov	r1, #0	; 0x0
        348c54:	eb5c0638 	bl	1a4a53c <SKey::$SetFlags(unsigned char)>
        348c58:	e24dd008 	sub	sp, sp, #8	; 0x8
        348c5c:	e1a00005 	mov	r0, r5
        348c60:	eb62ab49 	bl	1bf398c <$IsArray(RefVar const &)>
        348c64:	e58d0004 	str	r0, [sp, #4]
        348c68:	e3300000 	teq	r0, #0	; 0x0
        348c6c:	0a000003 	beq	348c80 <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x48>
        348c70:	e5950000 	ldr	r0, [r5]
        348c74:	e5900000 	ldr	r0, [r0]
        348c78:	eb61f18b 	bl	1bc52ac <$Length(long)>
        348c7c:	ea000000 	b	348c84 <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x4c>
        348c80:	e3a00001 	mov	r0, #1	; 0x1
        348c84:	e1a0a000 	mov	sl, r0
        348c88:	e3a06000 	mov	r6, #0	; 0x0
        348c8c:	e3a00002 	mov	r0, #2	; 0x2
        348c90:	eb61e52d 	bl	1bc214c <$AllocateRefHandle(long)>
        348c94:	e3a07000 	mov	r7, #0	; 0x0
        348c98:	e3a09000 	mov	r9, #0	; 0x0
        348c9c:	e35a0000 	cmp	sl, #0	; 0x0
        348ca0:	e58d0000 	str	r0, [sp]
        348ca4:	da000052 	ble	348df4 <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x1bc>
        348ca8:	e2848002 	add	r8, r4, #2	; 0x2
        348cac:	e59d0004 	ldr	r0, [sp, #4]
        348cb0:	e3300000 	teq	r0, #0	; 0x0
        348cb4:	e5950000 	ldr	r0, [r5]
        348cb8:	e5900000 	ldr	r0, [r0]
        348cbc:	0a000001 	beq	348cc8 <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x90>
        348cc0:	e1a01007 	mov	r1, r7
        348cc4:	eb61ed62 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        348cc8:	e59d1000 	ldr	r1, [sp]
        348ccc:	e5810000 	str	r0, [r1]
        348cd0:	e59d0000 	ldr	r0, [sp]
        348cd4:	e5900000 	ldr	r0, [r0]
        348cd8:	e3300002 	teq	r0, #2	; 0x2
        348cdc:	0a00003e 	beq	348ddc <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x1a4>
        348ce0:	e24dd05c 	sub	sp, sp, #92	; 0x5c
        348ce4:	e3a09000 	mov	r9, #0	; 0x0
        348ce8:	e5cd900d 	strb	r9, [sp, #13]
        348cec:	e5cd900c 	strb	r9, [sp, #12]
        348cf0:	e28d3004 	add	r3, sp, #4	; 0x4
        348cf4:	e92d0008 	stmdb	sp!, {r3}
        348cf8:	e51b1030 	ldr	r1, [fp, -#48]
        348cfc:	e5910000 	ldr	r0, [r1]
        348d00:	e5900000 	ldr	r0, [r0]
        348d04:	e1a01007 	mov	r1, r7
        348d08:	eb61ed51 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        348d0c:	eb61e50e 	bl	1bc214c <$AllocateRefHandle(long)>
        348d10:	e58d0004 	str	r0, [sp, #4]
        348d14:	e28d1004 	add	r1, sp, #4	; 0x4
        348d18:	e28d300c 	add	r3, sp, #12	; 0xc
        348d1c:	e28d2010 	add	r2, sp, #16	; 0x10
        348d20:	e28d0060 	add	r0, sp, #96	; 0x60
        348d24:	eb5bdccc 	bl	1a4005c <$KeyToSKey__FRC6RefVarT1P4SKeyPsPUc>
        348d28:	e5bd0004 	ldr	r0, [sp, #4]!
        348d2c:	eb61e922 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        348d30:	e59d0008 	ldr	r0, [sp, #8]
        348d34:	e1a00840 	mov	r0, r0, asr #16
        348d38:	e3100001 	tst	r0, #1	; 0x1
        348d3c:	12800001 	addne	r0, r0, #1	; 0x1
        348d40:	e0800006 	add	r0, r0, r6
        348d44:	e1a09800 	mov	r9, r0, lsl #16
        348d48:	e1a09849 	mov	r9, r9, asr #16
        348d4c:	e359004e 	cmp	r9, #78	; 0x4e
        348d50:	da000010 	ble	348d98 <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x160>
        348d54:	e5dd0004 	ldrb	r0, [sp, #4]
        348d58:	e3300000 	teq	r0, #0	; 0x0
        348d5c:	0a00001c 	beq	348dd4 <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x19c>
        348d60:	e266004e 	rsb	r0, r6, #78	; 0x4e
        348d64:	e1a01800 	mov	r1, r0, lsl #16
        348d68:	e1a01841 	mov	r1, r1, asr #16
        348d6c:	e5cd1009 	strb	r1, [sp, #9]
        348d70:	e1a00441 	mov	r0, r1, asr #8
        348d74:	e5cd0008 	strb	r0, [sp, #8]
        348d78:	e3510002 	cmp	r1, #2	; 0x2
        348d7c:	9a000014 	bls	348dd4 <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x19c>
        348d80:	e59d0008 	ldr	r0, [sp, #8]
        348d84:	e1a00840 	mov	r0, r0, asr #16
        348d88:	e2401002 	sub	r1, r0, #2	; 0x2
        348d8c:	e28d000c 	add	r0, sp, #12	; 0xc
        348d90:	eb5c60d6 	bl	1a610f0 <SKey::$SetSize(short)>
        348d94:	e3a0904e 	mov	r9, #78	; 0x4e
        348d98:	e0880006 	add	r0, r8, r6
        348d9c:	e59d2008 	ldr	r2, [sp, #8]
        348da0:	e1a02842 	mov	r2, r2, asr #16
        348da4:	e28d100c 	add	r1, sp, #12	; 0xc
        348da8:	eb61af28 	bl	1bb4a50 <$memcpy>
        348dac:	e59d000a 	ldr	r0, [sp, #10]
        348db0:	e3100001 	tst	r0, #1	; 0x1
        348db4:	0a000003 	beq	348dc8 <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x190>
        348db8:	e59d1008 	ldr	r1, [sp, #8]
        348dbc:	e0861841 	add	r1, r6, r1, asr #16
        348dc0:	e3a02000 	mov	r2, #0	; 0x0
        348dc4:	e7c82001 	strb	r2, [r8, r1]
        348dc8:	e1a06009 	mov	r6, r9
        348dcc:	e28dd05c 	add	sp, sp, #92	; 0x5c
        348dd0:	ea000004 	b	348de8 <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x1b0>
        348dd4:	e28dd05c 	add	sp, sp, #92	; 0x5c
        348dd8:	ea000005 	b	348df4 <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x1bc>
        348ddc:	e1a01007 	mov	r1, r7
        348de0:	e1a00004 	mov	r0, r4
        348de4:	eb5c60c0 	bl	1a610ec <SKey::$SetMissingKey(int)>
        348de8:	e2877001 	add	r7, r7, #1	; 0x1
        348dec:	e157000a 	cmp	r7, sl
        348df0:	baffffad 	blt	348cac <MultiKeyToSKey__FRC6RefVarT1P4SKey+0x74>
        348df4:	e1a01006 	mov	r1, r6
        348df8:	e1a00004 	mov	r0, r4
        348dfc:	eb5c60bb 	bl	1a610f0 <SKey::$SetSize(short)>
        348e00:	e59d0000 	ldr	r0, [sp]
        348e04:	eb61e8ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        348e08:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeEntryAlias(RefVar const &)
 * Address: 0034e128
 */
MakeEntryAlias(RefVar const &) {
    /*
        34e128:	e1a0c00d 	mov	ip, sp
        34e12c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        34e130:	e24cb004 	sub	fp, ip, #4	; 0x4
        34e134:	e1a04000 	mov	r4, r0
        34e138:	e24dd004 	sub	sp, sp, #4	; 0x4
        34e13c:	eb61d836 	bl	1bc421c <$EntrySoup(RefVar const &)>
        34e140:	eb61d001 	bl	1bc214c <$AllocateRefHandle(long)>
        34e144:	e58d0000 	str	r0, [sp]
        34e148:	e59f60f8 	ldr	r6, [pc, #f8]	; 34e248 <MakeEntryAlias(RefVar const &)+0x120>
        34e14c:	e5d60000 	ldrb	r0, [r6]
        34e150:	e3a05000 	mov	r5, #0	; 0x0
        34e154:	e3300000 	teq	r0, #0	; 0x0
        34e158:	0a00000f 	beq	34e19c <MakeEntryAlias(RefVar const &)+0x74>
        34e15c:	e59d0000 	ldr	r0, [sp]
        34e160:	e5900000 	ldr	r0, [r0]
        34e164:	e59f10e0 	ldr	r1, [pc, #e0]	; 34e24c <MakeEntryAlias(RefVar const &)+0x124>
        34e168:	e5911000 	ldr	r1, [r1]
        34e16c:	e5911000 	ldr	r1, [r1]
        34e170:	eb61d83a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        34e174:	e1a07000 	mov	r7, r0
        34e178:	e59f00d0 	ldr	r0, [pc, #d0]	; 34e250 <MakeEntryAlias(RefVar const &)+0x128>
        34e17c:	e5900000 	ldr	r0, [r0]
        34e180:	e1a01005 	mov	r1, r5
        34e184:	eb61d832 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        34e188:	e1a01000 	mov	r1, r0
        34e18c:	e1a00007 	mov	r0, r7
        34e190:	eb61d826 	bl	1bc4230 <$EQRef__FlT1>
        34e194:	e3300000 	teq	r0, #0	; 0x0
        34e198:	15c65000 	strneb	r5, [r6]
        34e19c:	e59f00b0 	ldr	r0, [pc, #b0]	; 34e254 <MakeEntryAlias(RefVar const &)+0x12c>
        34e1a0:	e3a01004 	mov	r1, #4	; 0x4
        34e1a4:	eb61cfe3 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        34e1a8:	eb61cfe7 	bl	1bc214c <$AllocateRefHandle(long)>
        34e1ac:	e1a05000 	mov	r5, r0
        34e1b0:	e1a0000d 	mov	r0, sp
        34e1b4:	eb61e47c 	bl	1bc73ac <$SoupGetSignature(RefVar const &)>
        34e1b8:	eb61cfe3 	bl	1bc214c <$AllocateRefHandle(long)>
        34e1bc:	e1a06000 	mov	r6, r0
        34e1c0:	e3a01001 	mov	r1, #1	; 0x1
        34e1c4:	e5902000 	ldr	r2, [r0]
        34e1c8:	e5950000 	ldr	r0, [r5]
        34e1cc:	eb61e061 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        34e1d0:	e1a00006 	mov	r0, r6
        34e1d4:	eb61d3f8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34e1d8:	e1a00004 	mov	r0, r4
        34e1dc:	eb61d812 	bl	1bc422c <$EntryUniqueID(RefVar const &)>
        34e1e0:	e1a00100 	mov	r0, r0, lsl #2
        34e1e4:	eb61cfd8 	bl	1bc214c <$AllocateRefHandle(long)>
        34e1e8:	e1a04000 	mov	r4, r0
        34e1ec:	e3a01002 	mov	r1, #2	; 0x2
        34e1f0:	e5902000 	ldr	r2, [r0]
        34e1f4:	e5950000 	ldr	r0, [r5]
        34e1f8:	eb61e056 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        34e1fc:	e1a00004 	mov	r0, r4
        34e200:	eb61d3ed 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34e204:	e1a0000d 	mov	r0, sp
        34e208:	ebffff34 	bl	34dee0 <CommonSoupGetName>
        34e20c:	eb61cfce 	bl	1bc214c <$AllocateRefHandle(long)>
        34e210:	e1a04000 	mov	r4, r0
        34e214:	e3a01003 	mov	r1, #3	; 0x3
        34e218:	e5902000 	ldr	r2, [r0]
        34e21c:	e5950000 	ldr	r0, [r5]
        34e220:	eb61e04c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        34e224:	e1a00004 	mov	r0, r4
        34e228:	eb61d3e3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34e22c:	e5954000 	ldr	r4, [r5]
        34e230:	e1a00005 	mov	r0, r5
        34e234:	eb61d3e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34e238:	e59d0000 	ldr	r0, [sp]
        34e23c:	eb61d3de 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        34e240:	e1a00004 	mov	r0, r4
        34e244:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        34e248:	0c105970 	ldceq	9, cr5, [r0], -#448
        34e24c:	00684880 	rsbeq	r4, r8, r0, lsl #17
        34e250:	0c10596c 	ldceq	9, cr5, [r0], -#432
        34e254:	00681df8 	streqd	r1, [r8], -#216
    */
}

/**
 * Symbol: MakeStoreObject(TStore *)
 * Address: 00354178
 */
MakeStoreObject(TStore *) {
    /*
        354178:	e1a0c00d 	mov	ip, sp
        35417c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        354180:	e24cb004 	sub	fp, ip, #4	; 0x4
        354184:	e1a04000 	mov	r4, r0
        354188:	e59f623c 	ldr	r6, [pc, #23c]	; 3543cc <MakeStoreObject(TStore *)+0x254>
        35418c:	e5960008 	ldr	r0, [r6, #8]
        354190:	e59f7238 	ldr	r7, [pc, #238]	; 3543d0 <MakeStoreObject(TStore *)+0x258>
        354194:	e3a050e9 	mov	r5, #233	; 0xe9
        354198:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        35419c:	e3300000 	teq	r0, #0	; 0x0
        3541a0:	1a00000a 	bne	3541d0 <MakeStoreObject(TStore *)+0x58>
        3541a4:	eb62d4cb 	bl	1c094d8 <$sizeof_rand_state>
        3541a8:	eb61e962 	bl	1bce738 <$__nw(unsigned int)>
        3541ac:	e5860008 	str	r0, [r6, #8]
        3541b0:	e3300000 	teq	r0, #0	; 0x0
        3541b4:	1a000003 	bne	3541c8 <MakeStoreObject(TStore *)+0x50>
        3541b8:	e3a02000 	mov	r2, #0	; 0x0
        3541bc:	e1a01005 	mov	r1, r5
        3541c0:	e5970000 	ldr	r0, [r7]
        3541c4:	eb623bf4 	bl	1be319c <$Throw>
        3541c8:	e5b60008 	ldr	r0, [r6, #8]!
        3541cc:	eb62d4bf 	bl	1c094d0 <$get_rand_state>
        3541d0:	e1a01004 	mov	r1, r4
        3541d4:	e3a00000 	mov	r0, #0	; 0x0
        3541d8:	eb5b9efc 	bl	1a3bdd0 <TStoreWrapper::$__ct(TStore *)>
        3541dc:	e1b06000 	movs	r6, r0
        3541e0:	1a000003 	bne	3541f4 <MakeStoreObject(TStore *)+0x7c>
        3541e4:	e3a02000 	mov	r2, #0	; 0x0
        3541e8:	e1a01005 	mov	r1, r5
        3541ec:	e5970000 	ldr	r0, [r7]
        3541f0:	eb623be9 	bl	1be319c <$Throw>
        3541f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        3541f8:	e3a00002 	mov	r0, #2	; 0x2
        3541fc:	eb61b7d2 	bl	1bc214c <$AllocateRefHandle(long)>
        354200:	e3a09000 	mov	r9, #0	; 0x0
        354204:	e3a08004 	mov	r8, #4	; 0x4
        354208:	e3a0a000 	mov	sl, #0	; 0x0
        35420c:	e40d006c 	str	r0, [sp], -#108
        354210:	e58da000 	str	sl, [sp]
        354214:	e28d0008 	add	r0, sp, #8	; 0x8
        354218:	eb6179d5 	bl	1bb2974 <$setjmp>
        35421c:	e3300000 	teq	r0, #0	; 0x0
        354220:	1a00013c 	bne	354718 <MakeStoreObject(TStore *)+0x5a0>
        354224:	e1a0000d 	mov	r0, sp
        354228:	eb622f93 	bl	1be007c <$AddExceptionHandler>
        35422c:	e24dd020 	sub	sp, sp, #32	; 0x20
        354230:	e3a00002 	mov	r0, #2	; 0x2
        354234:	eb61b7c4 	bl	1bc214c <$AllocateRefHandle(long)>
        354238:	e58d001c 	str	r0, [sp, #28]
        35423c:	e1a0100d 	mov	r1, sp
        354240:	e596007c 	ldr	r0, [r6, #124]
        354244:	eb5e9ab6 	bl	1afad24 <TStore::$GetRootId(unsigned long *)>
        354248:	e3300000 	teq	r0, #0	; 0x0
        35424c:	1b5ba2f5 	blne	1a3ce28 <$_OSErr(long)>
        354250:	e24dd004 	sub	sp, sp, #4	; 0x4
        354254:	e59d1004 	ldr	r1, [sp, #4]
        354258:	e1a0200d 	mov	r2, sp
        35425c:	e596007c 	ldr	r0, [r6, #124]
        354260:	eb5e9aa6 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        354264:	e3300000 	teq	r0, #0	; 0x0
        354268:	1b5ba2ee 	blne	1a3ce28 <$_OSErr(long)>
        35426c:	e24dd010 	sub	sp, sp, #16	; 0x10
        354270:	e59d0010 	ldr	r0, [sp, #16]
        354274:	e3300000 	teq	r0, #0	; 0x0
        354278:	1a0000a4 	bne	354510 <MakeStoreObject(TStore *)+0x398>
        35427c:	e3a09001 	mov	r9, #1	; 0x1
        354280:	e596007c 	ldr	r0, [r6, #124]
        354284:	eb5ba6fe 	bl	1a3de84 <$CheckWriteProtect(TStore *)>
        354288:	e1a00006 	mov	r0, r6
        35428c:	eb5bf16d 	bl	1a50848 <TStoreWrapper::$LockStore(void)>
        354290:	e3300000 	teq	r0, #0	; 0x0
        354294:	1b5ba2e3 	blne	1a3ce28 <$_OSErr(long)>
        354298:	e3a0a000 	mov	sl, #0	; 0x0
        35429c:	e52da06c 	str	sl, [sp, -#108]!
        3542a0:	e28d0008 	add	r0, sp, #8	; 0x8
        3542a4:	eb6179b2 	bl	1bb2974 <$setjmp>
        3542a8:	e3300000 	teq	r0, #0	; 0x0
        3542ac:	1a000090 	bne	3544f4 <MakeStoreObject(TStore *)+0x37c>
        3542b0:	e1a0000d 	mov	r0, sp
        3542b4:	eb622f70 	bl	1be007c <$AddExceptionHandler>
        3542b8:	e3a0a001 	mov	sl, #1	; 0x1
        3542bc:	e59f0110 	ldr	r0, [pc, #110]	; 3543d4 <MakeStoreObject(TStore *)+0x25c>
        3542c0:	e58d0084 	str	r0, [sp, #132]
        3542c4:	e3a00004 	mov	r0, #4	; 0x4
        3542c8:	e58d0088 	str	r0, [sp, #136]
        3542cc:	e59f0104 	ldr	r0, [pc, #104]	; 3543d8 <MakeStoreObject(TStore *)+0x260>
        3542d0:	eb61b7a5 	bl	1bc216c <$Clone(RefVar const &)>
        3542d4:	e59d109c 	ldr	r1, [sp, #156]
        3542d8:	e5810000 	str	r0, [r1]
        3542dc:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        3542e0:	e3a00000 	mov	r0, #0	; 0x0
        3542e4:	e58d0008 	str	r0, [sp, #8]
        3542e8:	e58da00c 	str	sl, [sp, #12]
        3542ec:	e58d0010 	str	r0, [sp, #16]
        3542f0:	e5cd0019 	strb	r0, [sp, #25]
        3542f4:	e3e0a000 	mvn	sl, #0	; 0x0
        3542f8:	e3a000ff 	mov	r0, #255	; 0xff
        3542fc:	e58da014 	str	sl, [sp, #20]
        354300:	e5cd0018 	strb	r0, [sp, #24]
        354304:	e24dd004 	sub	sp, sp, #4	; 0x4
        354308:	e28d1004 	add	r1, sp, #4	; 0x4
        35430c:	e1a00006 	mov	r0, r6
        354310:	eb5bd88d 	bl	1a4a54c <$Create__10TSoupIndexSFP13TStoreWrapperP9IndexInfo>
        354314:	e1a00100 	mov	r0, r0, lsl #2
        354318:	eb61b78b 	bl	1bc214c <$AllocateRefHandle(long)>
        35431c:	e58d0000 	str	r0, [sp]
        354320:	e1a0200d 	mov	r2, sp
        354324:	e59f10b0 	ldr	r1, [pc, #b0]	; 3543dc <MakeStoreObject(TStore *)+0x264>
        354328:	e28d00bc 	add	r0, sp, #188	; 0xbc
        35432c:	eb61c80d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        354330:	e59d0000 	ldr	r0, [sp]
        354334:	eb61bba0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354338:	e59f00a0 	ldr	r0, [pc, #a0]	; 3543e0 <MakeStoreObject(TStore *)+0x268>
        35433c:	e590003c 	ldr	r0, [r0, #60]
        354340:	e24dd008 	sub	sp, sp, #8	; 0x8
        354344:	e3300000 	teq	r0, #0	; 0x0
        354348:	0a000008 	beq	354370 <MakeStoreObject(TStore *)+0x1f8>
        35434c:	e1a00100 	mov	r0, r0, lsl #2
        354350:	eb61b77d 	bl	1bc214c <$AllocateRefHandle(long)>
        354354:	e58d0000 	str	r0, [sp]
        354358:	e1a0200d 	mov	r2, sp
        35435c:	e59f1080 	ldr	r1, [pc, #80]	; 3543e4 <MakeStoreObject(TStore *)+0x26c>
        354360:	e28d00c4 	add	r0, sp, #196	; 0xc4
        354364:	eb61c7ff 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        354368:	e59d0000 	ldr	r0, [sp]
        35436c:	eb61bb92 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354370:	e28f0f1c 	add	r0, pc, #112	; 0x70
        354374:	eb61c3d5 	bl	1bc52d0 <$MakeString(char const *)>
        354378:	eb61b773 	bl	1bc214c <$AllocateRefHandle(long)>
        35437c:	e58d0004 	str	r0, [sp, #4]
        354380:	e28d2004 	add	r2, sp, #4	; 0x4
        354384:	e59f1068 	ldr	r1, [pc, #68]	; 3543f4 <MakeStoreObject(TStore *)+0x27c>
        354388:	e28d00c4 	add	r0, sp, #196	; 0xc4
        35438c:	eb61c7f5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        354390:	e59d0004 	ldr	r0, [sp, #4]
        354394:	eb61bb88 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354398:	e24dd004 	sub	sp, sp, #4	; 0x4
        35439c:	ebf80159 	bl	154908 <GetInternalStore(void)>
        3543a0:	e1300004 	teq	r0, r4
        3543a4:	1a000013 	bne	3543f8 <MakeStoreObject(TStore *)+0x280>
        3543a8:	e24dd008 	sub	sp, sp, #8	; 0x8
        3543ac:	eb5c5859 	bl	1a6a518 <$GetSerialNumberROMObject(void)>
        3543b0:	e1a0100d 	mov	r1, sp
        3543b4:	eb5c60b0 	bl	1a6c67c <TSerialNumberROM::$GetSystemSerialNumber(unsigned long *)>
        3543b8:	e3300000 	teq	r0, #0	; 0x0
        3543bc:	13a00000 	movne	r0, #0	; 0x0
        3543c0:	059d0004 	ldreq	r0, [sp, #4]
        3543c4:	e28dd008 	add	sp, sp, #8	; 0x8
        3543c8:	ea00000b 	b	3543fc <MakeStoreObject(TStore *)+0x284>
        3543cc:	0c10596c 	ldceq	9, cr5, [r0], -#432
        3543d0:	00371318 	eoreqs	r1, r7, r8, lsl r3
        3543d4:	57414c59 	undefined
        3543d8:	00680bc0 	rsbeq	r0, r8, r0, asr #23
        3543dc:	006839b0 	streqh	r3, [r8], -#144
        3543e0:	0c107800 	ldceq	8, cr7, [r0]
        3543e4:	00682980 	rsbeq	r2, r8, r0, lsl #19
        3543e8:	556e7469 	strplb	r7, [lr, -#1129]!
        3543ec:	746c6564 	strvcbt	r6, [ip], -#1380
        3543f0:	00000000 	andeq	r0, r0, r0
        3543f4:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        3543f8:	eb5c1639 	bl	1a59ce4 <$GetRandomSignature(void)>
        3543fc:	e1a00100 	mov	r0, r0, lsl #2
        354400:	eb61b751 	bl	1bc214c <$AllocateRefHandle(long)>
        354404:	e58d0000 	str	r0, [sp]
        354408:	e1a0200d 	mov	r2, sp
        35440c:	e59f10dc 	ldr	r1, [pc, #dc]	; 3544f0 <MakeStoreObject(TStore *)+0x378>
        354410:	e28d00c8 	add	r0, sp, #200	; 0xc8
        354414:	eb61c7d3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        354418:	e59d0000 	ldr	r0, [sp]
        35441c:	eb61bb66 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354420:	e596007c 	ldr	r0, [r6, #124]
        354424:	eb61bb55 	bl	1bc3180 <$Create__15TStoreHashTableSFP6TStore>
        354428:	e58d00b8 	str	r0, [sp, #184]
        35442c:	e1a02000 	mov	r2, r0
        354430:	e3a00000 	mov	r0, #0	; 0x0
        354434:	e596107c 	ldr	r1, [r6, #124]
        354438:	eb61b32d 	bl	1bc10f4 <TStoreHashTable::$__ct(TStore *, unsigned long)>
        35443c:	e5860000 	str	r0, [r6]
        354440:	e3300000 	teq	r0, #0	; 0x0
        354444:	1a000003 	bne	354458 <MakeStoreObject(TStore *)+0x2e0>
        354448:	e3a02000 	mov	r2, #0	; 0x0
        35444c:	e1a01005 	mov	r1, r5
        354450:	e5970000 	ldr	r0, [r7]
        354454:	eb623b50 	bl	1be319c <$Throw>
        354458:	e596007c 	ldr	r0, [r6, #124]
        35445c:	eb61bb47 	bl	1bc3180 <$Create__15TStoreHashTableSFP6TStore>
        354460:	e58d00bc 	str	r0, [sp, #188]
        354464:	e1a02000 	mov	r2, r0
        354468:	e3a00000 	mov	r0, #0	; 0x0
        35446c:	e596107c 	ldr	r1, [r6, #124]
        354470:	eb61b31f 	bl	1bc10f4 <TStoreHashTable::$__ct(TStore *, unsigned long)>
        354474:	e5860004 	str	r0, [r6, #4]
        354478:	e3300000 	teq	r0, #0	; 0x0
        35447c:	1a000003 	bne	354490 <MakeStoreObject(TStore *)+0x318>
        354480:	e3a02000 	mov	r2, #0	; 0x0
        354484:	e1a01005 	mov	r1, r5
        354488:	e5970000 	ldr	r0, [r7]
        35448c:	eb623b42 	bl	1be319c <$Throw>
        354490:	e3a03000 	mov	r3, #0	; 0x0
        354494:	e58da0c0 	str	sl, [sp, #192]
        354498:	e92d0008 	stmdb	sp!, {r3}
        35449c:	e28d20c4 	add	r2, sp, #196	; 0xc4
        3544a0:	e1a01006 	mov	r1, r6
        3544a4:	e28d00cc 	add	r0, sp, #204	; 0xcc
        3544a8:	eb5bd815 	bl	1a4a504 <$StorePermObject(RefVar const &, TStoreWrapper *, unsigned long &, CDynamicArray *, unsigned char *)>
        3544ac:	e28dd004 	add	sp, sp, #4	; 0x4
        3544b0:	e59d10ac 	ldr	r1, [sp, #172]
        3544b4:	e3a03014 	mov	r3, #20	; 0x14
        3544b8:	e28d20b0 	add	r2, sp, #176	; 0xb0
        3544bc:	e596007c 	ldr	r0, [r6, #124]
        3544c0:	eb00c9d4 	bl	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
        3544c4:	e3300000 	teq	r0, #0	; 0x0
        3544c8:	1b5ba256 	blne	1a3ce28 <$_OSErr(long)>
        3544cc:	e28dd02c 	add	sp, sp, #44	; 0x2c
        3544d0:	e1a0000d 	mov	r0, sp
        3544d4:	eb6232f7 	bl	1be10b8 <$ExitHandler>
        3544d8:	e28dd06c 	add	sp, sp, #108	; 0x6c
        3544dc:	e1a00006 	mov	r0, r6
        3544e0:	eb5bf4e8 	bl	1a51888 <TStoreWrapper::$UnlockStore(void)>
        3544e4:	e3300000 	teq	r0, #0	; 0x0
        3544e8:	1b5ba24e 	blne	1a3ce28 <$_OSErr(long)>
        3544ec:	ea00003c 	b	3545e4 <MakeStoreObject(TStore *)+0x46c>
        3544f0:	00684680 	rsbeq	r4, r8, r0, lsl #13
        3544f4:	e1a00006 	mov	r0, r6
        3544f8:	eb5becb6 	bl	1a4f7d8 <TStoreWrapper::$Abort(void)>
        3544fc:	e3300000 	teq	r0, #0	; 0x0
        354500:	1b5ba248 	blne	1a3ce28 <$_OSErr(long)>
        354504:	e1a0000d 	mov	r0, sp
        354508:	eb623711 	bl	1be2154 <$NextHandler>
        35450c:	eafffff8 	b	3544f4 <MakeStoreObject(TStore *)+0x37c>
        354510:	e28d2018 	add	r2, sp, #24	; 0x18
        354514:	e596007c 	ldr	r0, [r6, #124]
        354518:	e3a03000 	mov	r3, #0	; 0x0
        35451c:	e59d1014 	ldr	r1, [sp, #20]
        354520:	eb5be46e 	bl	1a4d6e0 <$ReadStoreRootData(TStore *, unsigned long, StoreRootData *, long *)>
        354524:	e3300000 	teq	r0, #0	; 0x0
        354528:	1b5ba23e 	blne	1a3ce28 <$_OSErr(long)>
        35452c:	e59d0018 	ldr	r0, [sp, #24]
        354530:	e59f4184 	ldr	r4, [pc, #184]	; 3546bc <MakeStoreObject(TStore *)+0x544>
        354534:	e51fc168 	ldr	ip, [pc, #fffffe98]	; 3543d4 <MakeStoreObject(TStore *)+0x25c>
        354538:	e130000c 	teq	r0, ip
        35453c:	0a000003 	beq	354550 <MakeStoreObject(TStore *)+0x3d8>
        354540:	e59f1178 	ldr	r1, [pc, #178]	; 3546c0 <MakeStoreObject(TStore *)+0x548>
        354544:	e3a02000 	mov	r2, #0	; 0x0
        354548:	e5940000 	ldr	r0, [r4]
        35454c:	eb623b12 	bl	1be319c <$Throw>
        354550:	e59d001c 	ldr	r0, [sp, #28]
        354554:	e3500004 	cmp	r0, #4	; 0x4
        354558:	da000004 	ble	354570 <MakeStoreObject(TStore *)+0x3f8>
        35455c:	e3e01082 	mvn	r1, #130	; 0x82
        354560:	e2411cbb 	sub	r1, r1, #47872	; 0xbb00
        354564:	e3a02000 	mov	r2, #0	; 0x0
        354568:	e5940000 	ldr	r0, [r4]
        35456c:	eb623b0a 	bl	1be319c <$Throw>
        354570:	e59d2020 	ldr	r2, [sp, #32]
        354574:	e59d801c 	ldr	r8, [sp, #28]
        354578:	e3a00000 	mov	r0, #0	; 0x0
        35457c:	e596107c 	ldr	r1, [r6, #124]
        354580:	eb61b2db 	bl	1bc10f4 <TStoreHashTable::$__ct(TStore *, unsigned long)>
        354584:	e5860000 	str	r0, [r6]
        354588:	e3300000 	teq	r0, #0	; 0x0
        35458c:	1a000003 	bne	3545a0 <MakeStoreObject(TStore *)+0x428>
        354590:	e3a02000 	mov	r2, #0	; 0x0
        354594:	e1a01005 	mov	r1, r5
        354598:	e5970000 	ldr	r0, [r7]
        35459c:	eb623afe 	bl	1be319c <$Throw>
        3545a0:	e59d2024 	ldr	r2, [sp, #36]
        3545a4:	e3a00000 	mov	r0, #0	; 0x0
        3545a8:	e596107c 	ldr	r1, [r6, #124]
        3545ac:	eb61b2d0 	bl	1bc10f4 <TStoreHashTable::$__ct(TStore *, unsigned long)>
        3545b0:	e5860004 	str	r0, [r6, #4]
        3545b4:	e3300000 	teq	r0, #0	; 0x0
        3545b8:	1a000003 	bne	3545cc <MakeStoreObject(TStore *)+0x454>
        3545bc:	e3a02000 	mov	r2, #0	; 0x0
        3545c0:	e1a01005 	mov	r1, r5
        3545c4:	e5970000 	ldr	r0, [r7]
        3545c8:	eb623af3 	bl	1be319c <$Throw>
        3545cc:	e1a00006 	mov	r0, r6
        3545d0:	e3a02000 	mov	r2, #0	; 0x0
        3545d4:	e59d1028 	ldr	r1, [sp, #40]
        3545d8:	eb5bd3c6 	bl	1a494f8 <$LoadPermObject(TStoreWrapper *, unsigned long, CDynamicArray **)>
        3545dc:	e59d1030 	ldr	r1, [sp, #48]
        3545e0:	e5810000 	str	r0, [r1]
        3545e4:	e3a00002 	mov	r0, #2	; 0x2
        3545e8:	eb61b6d7 	bl	1bc214c <$AllocateRefHandle(long)>
        3545ec:	e58d0000 	str	r0, [sp]
        3545f0:	e1a0000d 	mov	r0, sp
        3545f4:	e59d2028 	ldr	r2, [sp, #40]
        3545f8:	e28d3030 	add	r3, sp, #48	; 0x30
        3545fc:	e1a01006 	mov	r1, r6
        354600:	eb5bb2b1 	bl	1a410cc <$MakeFaultBlock(RefVar const &, TStoreWrapper *, unsigned long, TStoreWrapper *)>
        354604:	e59d1030 	ldr	r1, [sp, #48]
        354608:	e5810000 	str	r0, [r1]
        35460c:	e59d0000 	ldr	r0, [sp]
        354610:	eb61bae9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354614:	e59f00a8 	ldr	r0, [pc, #a8]	; 3546c4 <MakeStoreObject(TStore *)+0x54c>
        354618:	eb61b6d3 	bl	1bc216c <$Clone(RefVar const &)>
        35461c:	e59d10a0 	ldr	r1, [sp, #160]
        354620:	e28d2030 	add	r2, sp, #48	; 0x30
        354624:	e5810000 	str	r0, [r1]
        354628:	e59f1098 	ldr	r1, [pc, #98]	; 3546c8 <MakeStoreObject(TStore *)+0x550>
        35462c:	e28d00a0 	add	r0, sp, #160	; 0xa0
        354630:	eb61c74c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        354634:	e1a00006 	mov	r0, r6
        354638:	eb61b6c3 	bl	1bc214c <$AllocateRefHandle(long)>
        35463c:	e58d0004 	str	r0, [sp, #4]
        354640:	e28d2004 	add	r2, sp, #4	; 0x4
        354644:	e59f1080 	ldr	r1, [pc, #80]	; 3546cc <MakeStoreObject(TStore *)+0x554>
        354648:	e28d00a0 	add	r0, sp, #160	; 0xa0
        35464c:	eb61c745 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        354650:	e59d0004 	ldr	r0, [sp, #4]
        354654:	eb61bad8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354658:	eb5bb299 	bl	1a410c4 <$MakeEntryCache(void)>
        35465c:	eb61b6ba 	bl	1bc214c <$AllocateRefHandle(long)>
        354660:	e58d0008 	str	r0, [sp, #8]
        354664:	e28d2008 	add	r2, sp, #8	; 0x8
        354668:	e59f1060 	ldr	r1, [pc, #60]	; 3546d0 <MakeStoreObject(TStore *)+0x558>
        35466c:	e28d00a0 	add	r0, sp, #160	; 0xa0
        354670:	eb61c73c 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        354674:	e59d0008 	ldr	r0, [sp, #8]
        354678:	eb61bacf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35467c:	e1a00108 	mov	r0, r8, lsl #2
        354680:	eb61b6b1 	bl	1bc214c <$AllocateRefHandle(long)>
        354684:	e58d000c 	str	r0, [sp, #12]
        354688:	e28d200c 	add	r2, sp, #12	; 0xc
        35468c:	e59f1040 	ldr	r1, [pc, #40]	; 3546d4 <MakeStoreObject(TStore *)+0x55c>
        354690:	e28d00a0 	add	r0, sp, #160	; 0xa0
        354694:	eb61c733 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        354698:	e59d000c 	ldr	r0, [sp, #12]
        35469c:	eb61bac6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3546a0:	e3390000 	teq	r9, #0	; 0x0
        3546a4:	0a00000b 	beq	3546d8 <MakeStoreObject(TStore *)+0x560>
        3546a8:	e51f02d0 	ldr	r0, [pc, #fffffd30]	; 3543e0 <MakeStoreObject(TStore *)+0x268>
        3546ac:	e5b0103c 	ldr	r1, [r0, #60]!
        3546b0:	e28d00a0 	add	r0, sp, #160	; 0xa0
        3546b4:	eb5be40e 	bl	1a4d6f4 <$StoreSaveSortTable(RefVar const &, long)>
        3546b8:	ea000008 	b	3546e0 <MakeStoreObject(TStore *)+0x568>
        3546bc:	003712fc 	ldreqsh	r1, [r7], -ip
        3546c0:	ffff447f 	swinv	0x00ff447f
        3546c4:	0067fba0 	rsbeq	pc, r7, r0, lsr #23
        3546c8:	00685390 	streqb	r5, [r8], -#48
        3546cc:	00684868 	rsbeq	r4, r8, r8, ror #16
        3546d0:	00684790 	streqb	r4, [r8], -#112
        3546d4:	00684ec8 	rsbeq	r4, r8, r8, asr #29
        3546d8:	e28d00a0 	add	r0, sp, #160	; 0xa0
        3546dc:	ebfffa3d 	bl	352fd8 <StoreRemoveSortTable(RefVar const &, long)+0x22c>
        3546e0:	e59d1028 	ldr	r1, [sp, #40]
        3546e4:	e28d00a0 	add	r0, sp, #160	; 0xa0
        3546e8:	eb5bcf5b 	bl	1a4845c <$SetupEphemeralTracker(RefVar const &, unsigned long)>
        3546ec:	e28dd014 	add	sp, sp, #20	; 0x14
        3546f0:	e59d001c 	ldr	r0, [sp, #28]
        3546f4:	eb61bab0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3546f8:	e28dd020 	add	sp, sp, #32	; 0x20
        3546fc:	e1a0000d 	mov	r0, sp
        354700:	eb62326c 	bl	1be10b8 <$ExitHandler>
        354704:	e5bd006c 	ldr	r0, [sp, #108]!
        354708:	e5904000 	ldr	r4, [r0]
        35470c:	eb61baaa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        354710:	e1a00004 	mov	r0, r4
        354714:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        354718:	e1b00006 	movs	r0, r6
        35471c:	13a01001 	movne	r1, #1	; 0x1
        354720:	1b5ba1b6 	blne	1a3ce00 <TStoreWrapper::$__dt(void)>
        354724:	e1a0000d 	mov	r0, sp
        354728:	eb623689 	bl	1be2154 <$NextHandler>
        35472c:	eafffff9 	b	354718 <MakeStoreObject(TStore *)+0x5a0>
    */
}

/**
 * Symbol: memchr
 * Address: 00358038
 */
void globals::memchr() {
    /*
        358038:	e20110ff 	and	r1, r1, #255	; 0xff
        35803c:	e1a03002 	mov	r3, r2
        358040:	e2422001 	sub	r2, r2, #1	; 0x1
        358044:	e3530000 	cmp	r3, #0	; 0x0
        358048:	9a000007 	bls	35806c <memchr+0x34>
        35804c:	e5d03000 	ldrb	r3, [r0]
        358050:	e1330001 	teq	r3, r1
        358054:	01a0f00e 	moveq	pc, lr
        358058:	e2800001 	add	r0, r0, #1	; 0x1
        35805c:	e1a03002 	mov	r3, r2
        358060:	e2422001 	sub	r2, r2, #1	; 0x1
        358064:	e3530000 	cmp	r3, #0	; 0x0
        358068:	8afffff7 	bhi	35804c <memchr+0x14>
        35806c:	e3a00000 	mov	r0, #0	; 0x0
        358070:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: memcmp
 * Address: 00358074
 */
void globals::memcmp() {
    /*
        358074:	e1a03000 	mov	r3, r0
        358078:	e1800001 	orr	r0, r0, r1
        35807c:	e3100003 	tst	r0, #3	; 0x3
        358080:	1a000009 	bne	3580ac <memcmp+0x38>
        358084:	ea000002 	b	358094 <memcmp+0x20>
        358088:	e2833004 	add	r3, r3, #4	; 0x4
        35808c:	e2811004 	add	r1, r1, #4	; 0x4
        358090:	e2422004 	sub	r2, r2, #4	; 0x4
        358094:	e3520004 	cmp	r2, #4	; 0x4
        358098:	3a000003 	bcc	3580ac <memcmp+0x38>
        35809c:	e5930000 	ldr	r0, [r3]
        3580a0:	e591c000 	ldr	ip, [r1]
        3580a4:	e130000c 	teq	r0, ip
        3580a8:	0afffff6 	beq	358088 <memcmp+0x14>
        3580ac:	e1a00002 	mov	r0, r2
        3580b0:	e2422001 	sub	r2, r2, #1	; 0x1
        3580b4:	e3500000 	cmp	r0, #0	; 0x0
        3580b8:	9a000007 	bls	3580dc <memcmp+0x68>
        3580bc:	e4d30001 	ldrb	r0, [r3], #1
        3580c0:	e4d1c001 	ldrb	ip, [r1], #1
        3580c4:	e050000c 	subs	r0, r0, ip
        3580c8:	11a0f00e 	movne	pc, lr
        3580cc:	e1a00002 	mov	r0, r2
        3580d0:	e2422001 	sub	r2, r2, #1	; 0x1
        3580d4:	e3500000 	cmp	r0, #0	; 0x0
        3580d8:	8afffff7 	bhi	3580bc <memcmp+0x48>
        3580dc:	e3a00000 	mov	r0, #0	; 0x0
        3580e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: MeasureTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)
 * Address: 0035a074
 */
MeasureTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *) {
    /*
        35a074:	e1a0c00d 	mov	ip, sp
        35a078:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        35a07c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        35a080:	e24cb014 	sub	fp, ip, #20	; 0x14
        35a084:	e1a05001 	mov	r5, r1
        35a088:	e1a04002 	mov	r4, r2
        35a08c:	e1a0e003 	mov	lr, r3
        35a090:	e3a03000 	mov	r3, #0	; 0x0
        35a094:	e28b201c 	add	r2, fp, #28	; 0x1c
        35a098:	e8920006 	ldmia	r2, {r1, r2}
        35a09c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        35a0a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        35a0a4:	e28b1014 	add	r1, fp, #20	; 0x14
        35a0a8:	e8911008 	ldmia	r1, {r3, ip}
        35a0ac:	e88d1008 	stmia	sp, {r3, ip}
        35a0b0:	e1a0300e 	mov	r3, lr
        35a0b4:	e1a02004 	mov	r2, r4
        35a0b8:	e1a01005 	mov	r1, r5
        35a0bc:	eb0000d5 	bl	35a418 <DoTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *, unsigned char)>
        35a0c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: MeasureRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *)
 * Address: 0035a114
 */
MeasureRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *) {
    /*
        35a114:	e1a0c00d 	mov	ip, sp
        35a118:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        35a11c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        35a120:	e24cb014 	sub	fp, ip, #20	; 0x14
        35a124:	e1a05001 	mov	r5, r1
        35a128:	e1a04002 	mov	r4, r2
        35a12c:	e1a0e003 	mov	lr, r3
        35a130:	e3a03000 	mov	r3, #0	; 0x0
        35a134:	e28b201c 	add	r2, fp, #28	; 0x1c
        35a138:	e8920006 	ldmia	r2, {r1, r2}
        35a13c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        35a140:	e24dd008 	sub	sp, sp, #8	; 0x8
        35a144:	e28b1014 	add	r1, fp, #20	; 0x14
        35a148:	e8911008 	ldmia	r1, {r3, ip}
        35a14c:	e88d1008 	stmia	sp, {r3, ip}
        35a150:	e1a0300e 	mov	r3, lr
        35a154:	e1a02004 	mov	r2, r4
        35a158:	e1a01005 	mov	r1, r5
        35a15c:	eb5fcd63 	bl	1b4d6f0 <$DoRichString(TRichString &, unsigned long, long, StyleRecord *, FPoint, TextOptions *, TextBoundsInfo *, unsigned char)>
        35a160:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: MakeSimpleStyle__FRC6RefVarlT2
 * Address: 0035a54c
 */
void globals::MakeSimpleStyle() {
    /*
        35a54c:	e1a0c00d 	mov	ip, sp
        35a550:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        35a554:	e24cb004 	sub	fp, ip, #4	; 0x4
        35a558:	e1a07000 	mov	r7, r0
        35a55c:	e1a06001 	mov	r6, r1
        35a560:	e1a05002 	mov	r5, r2
        35a564:	e1a04003 	mov	r4, r3
        35a568:	e24dd020 	sub	sp, sp, #32	; 0x20
        35a56c:	e3a00002 	mov	r0, #2	; 0x2
        35a570:	eb619ef5 	bl	1bc214c <$AllocateRefHandle(long)>
        35a574:	e3a08000 	mov	r8, #0	; 0x0
        35a578:	e58d0000 	str	r0, [sp]
        35a57c:	e5a08004 	str	r8, [r0, #4]!
        35a580:	e58d801c 	str	r8, [sp, #28]
        35a584:	e5960000 	ldr	r0, [r6]
        35a588:	e5900000 	ldr	r0, [r0]
        35a58c:	e59d1000 	ldr	r1, [sp]
        35a590:	e5810000 	str	r0, [r1]
        35a594:	e58d4008 	str	r4, [sp, #8]
        35a598:	e58d800c 	str	r8, [sp, #12]
        35a59c:	e58d5004 	str	r5, [sp, #4]
        35a5a0:	e58d8010 	str	r8, [sp, #16]
        35a5a4:	e58d8014 	str	r8, [sp, #20]
        35a5a8:	e3370000 	teq	r7, #0	; 0x0
        35a5ac:	e58d8018 	str	r8, [sp, #24]
        35a5b0:	1a000003 	bne	35a5c4 <MakeSimpleStyle__FRC6RefVarlT2+0x78>
        35a5b4:	e3a00020 	mov	r0, #32	; 0x20
        35a5b8:	eb61d05e 	bl	1bce738 <$__nw(unsigned int)>
        35a5bc:	e1b07000 	movs	r7, r0
        35a5c0:	0a00000a 	beq	35a5f0 <MakeSimpleStyle__FRC6RefVarlT2+0xa4>
        35a5c4:	e59d0000 	ldr	r0, [sp]
        35a5c8:	e5900000 	ldr	r0, [r0]
        35a5cc:	eb619ede 	bl	1bc214c <$AllocateRefHandle(long)>
        35a5d0:	e5870000 	str	r0, [r7]
        35a5d4:	e5a08004 	str	r8, [r0, #4]!
        35a5d8:	e2870004 	add	r0, r7, #4	; 0x4
        35a5dc:	e28de004 	add	lr, sp, #4	; 0x4
        35a5e0:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        35a5e4:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        35a5e8:	e89e100c 	ldmia	lr, {r2, r3, ip}
        35a5ec:	e880100c 	stmia	r0, {r2, r3, ip}
        35a5f0:	e59d001c 	ldr	r0, [sp, #28]
        35a5f4:	e3300000 	teq	r0, #0	; 0x0
        35a5f8:	159d001c 	ldrne	r0, [sp, #28]
        35a5fc:	1b5fcc36 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        35a600:	e59d0000 	ldr	r0, [sp]
        35a604:	eb61a2ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35a608:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: MeasureGlyphWidths(long)
 * Address: 0035baa4
 */
MeasureGlyphWidths(long) {
    /*
        35baa4:	e1a0c00d 	mov	ip, sp
        35baa8:	e92ddff1 	stmdb	sp!, {r0, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        35baac:	e24cb004 	sub	fp, ip, #4	; 0x4
        35bab0:	e24ddf4f 	sub	sp, sp, #316	; 0x13c
        35bab4:	e51b002c 	ldr	r0, [fp, -#44]
        35bab8:	e5904000 	ldr	r4, [r0]
        35babc:	e5940004 	ldr	r0, [r4, #4]
        35bac0:	e594501c 	ldr	r5, [r4, #28]
        35bac4:	e3a09000 	mov	r9, #0	; 0x0
        35bac8:	e58d0128 	str	r0, [sp, #296]
        35bacc:	e3a00000 	mov	r0, #0	; 0x0
        35bad0:	e58d0118 	str	r0, [sp, #280]
        35bad4:	e58d911c 	str	r9, [sp, #284]
        35bad8:	e3a00002 	mov	r0, #2	; 0x2
        35badc:	eb61999a 	bl	1bc214c <$AllocateRefHandle(long)>
        35bae0:	e3a01000 	mov	r1, #0	; 0x0
        35bae4:	e58d010c 	str	r0, [sp, #268]
        35bae8:	e5a01004 	str	r1, [r0, #4]!
        35baec:	e3a00001 	mov	r0, #1	; 0x1
        35baf0:	e58d0010 	str	r0, [sp, #16]
        35baf4:	e3a00000 	mov	r0, #0	; 0x0
        35baf8:	e58d000c 	str	r0, [sp, #12]
        35bafc:	e58d0008 	str	r0, [sp, #8]
        35bb00:	e58d0004 	str	r0, [sp, #4]
        35bb04:	eb5fcf2c 	bl	1b4f7bc <$GetCurrentPort(void)>
        35bb08:	e58d0000 	str	r0, [sp]
        35bb0c:	e5940018 	ldr	r0, [r4, #24]
        35bb10:	e3300000 	teq	r0, #0	; 0x0
        35bb14:	0a000003 	beq	35bb28 <MeasureGlyphWidths(long)+0x84>
        35bb18:	e5901008 	ldr	r1, [r0, #8]
        35bb1c:	e58d111c 	str	r1, [sp, #284]
        35bb20:	e3a01000 	mov	r1, #0	; 0x0
        35bb24:	e5a01014 	str	r1, [r0, #20]!
        35bb28:	e59d6128 	ldr	r6, [sp, #296]
        35bb2c:	e5846024 	str	r6, [r4, #36]
        35bb30:	e3360000 	teq	r6, #0	; 0x0
        35bb34:	1a000004 	bne	35bb4c <MeasureGlyphWidths(long)+0xa8>
        35bb38:	e3a04001 	mov	r4, #1	; 0x1
        35bb3c:	e59d010c 	ldr	r0, [sp, #268]
        35bb40:	eb619d9d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35bb44:	e1a00004 	mov	r0, r4
        35bb48:	ea000024 	b	35bbe0 <MeasureGlyphWidths(long)+0x13c>
        35bb4c:	e594001c 	ldr	r0, [r4, #28]
        35bb50:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        35bb54:	0a000004 	beq	35bb6c <MeasureGlyphWidths(long)+0xc8>
        35bb58:	e51b002c 	ldr	r0, [fp, -#44]
        35bb5c:	eb5fbe9c 	bl	1b4b5d4 <$QDSafeLock(char **)>
        35bb60:	e58d0130 	str	r0, [sp, #304]
        35bb64:	e51b002c 	ldr	r0, [fp, -#44]
        35bb68:	e5904000 	ldr	r4, [r0]
        35bb6c:	e2150101 	ands	r0, r5, #1073741824	; 0x40000000
        35bb70:	e58d0138 	str	r0, [sp, #312]
        35bb74:	1a00001a 	bne	35bbe4 <MeasureGlyphWidths(long)+0x140>
        35bb78:	e59d011c 	ldr	r0, [sp, #284]
        35bb7c:	e3300000 	teq	r0, #0	; 0x0
        35bb80:	0a000006 	beq	35bba0 <MeasureGlyphWidths(long)+0xfc>
        35bb84:	e3560080 	cmp	r6, #128	; 0x80
        35bb88:	da000004 	ble	35bba0 <MeasureGlyphWidths(long)+0xfc>
        35bb8c:	e3a00001 	mov	r0, #1	; 0x1
        35bb90:	e3a0a080 	mov	sl, #128	; 0x80
        35bb94:	e58d0004 	str	r0, [sp, #4]
        35bb98:	e3a00c01 	mov	r0, #256	; 0x100
        35bb9c:	ea000000 	b	35bba4 <MeasureGlyphWidths(long)+0x100>
        35bba0:	e1a00086 	mov	r0, r6, lsl #1
        35bba4:	eb621965 	bl	1be2140 <$NewPtr>
        35bba8:	e5840020 	str	r0, [r4, #32]
        35bbac:	e5940020 	ldr	r0, [r4, #32]
        35bbb0:	e3300000 	teq	r0, #0	; 0x0
        35bbb4:	1a00000a 	bne	35bbe4 <MeasureGlyphWidths(long)+0x140>
        35bbb8:	e5b4001c 	ldr	r0, [r4, #28]!
        35bbbc:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        35bbc0:	0a000003 	beq	35bbd4 <MeasureGlyphWidths(long)+0x130>
        35bbc4:	e51b002c 	ldr	r0, [fp, -#44]
        35bbc8:	e59d1130 	ldr	r1, [sp, #304]
        35bbcc:	e20110ff 	and	r1, r1, #255	; 0xff
        35bbd0:	eb62194e 	bl	1be2110 <$HSetState>
        35bbd4:	e59d010c 	ldr	r0, [sp, #268]
        35bbd8:	eb619d77 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35bbdc:	e3a00000 	mov	r0, #0	; 0x0
        35bbe0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35bbe4:	e5940020 	ldr	r0, [r4, #32]
        35bbe8:	e58d012c 	str	r0, [sp, #300]
        35bbec:	e594100c 	ldr	r1, [r4, #12]
        35bbf0:	e3310000 	teq	r1, #0	; 0x0
        35bbf4:	03a08001 	moveq	r8, #1	; 0x1
        35bbf8:	0a000011 	beq	35bc44 <MeasureGlyphWidths(long)+0x1a0>
        35bbfc:	e3a08000 	mov	r8, #0	; 0x0
        35bc00:	e59d0128 	ldr	r0, [sp, #296]
        35bc04:	e3500000 	cmp	r0, #0	; 0x0
        35bc08:	da00000d 	ble	35bc44 <MeasureGlyphWidths(long)+0x1a0>
        35bc0c:	e5912000 	ldr	r2, [r1]
        35bc10:	e2811002 	add	r1, r1, #2	; 0x2
        35bc14:	e0400842 	sub	r0, r0, r2, asr #16
        35bc18:	e2888001 	add	r8, r8, #1	; 0x1
        35bc1c:	e3500000 	cmp	r0, #0	; 0x0
        35bc20:	cafffff9 	bgt	35bc0c <MeasureGlyphWidths(long)+0x168>
        35bc24:	e3580001 	cmp	r8, #1	; 0x1
        35bc28:	da000005 	ble	35bc44 <MeasureGlyphWidths(long)+0x1a0>
        35bc2c:	e1a00188 	mov	r0, r8, lsl #3
        35bc30:	eb621942 	bl	1be2140 <$NewPtr>
        35bc34:	e1b07000 	movs	r7, r0
        35bc38:	0affffe5 	beq	35bbd4 <MeasureGlyphWidths(long)+0x130>
        35bc3c:	e5847040 	str	r7, [r4, #64]
        35bc40:	ea000000 	b	35bc48 <MeasureGlyphWidths(long)+0x1a4>
        35bc44:	e2847044 	add	r7, r4, #68	; 0x44
        35bc48:	e2150202 	ands	r0, r5, #536870912	; 0x20000000
        35bc4c:	e58d0134 	str	r0, [sp, #308]
        35bc50:	15945028 	ldrne	r5, [r4, #40]
        35bc54:	1a00000f 	bne	35bc98 <MeasureGlyphWidths(long)+0x1f4>
        35bc58:	e59d011c 	ldr	r0, [sp, #284]
        35bc5c:	e3300000 	teq	r0, #0	; 0x0
        35bc60:	01a00106 	moveq	r0, r6, lsl #2
        35bc64:	0a000006 	beq	35bc84 <MeasureGlyphWidths(long)+0x1e0>
        35bc68:	e3560080 	cmp	r6, #128	; 0x80
        35bc6c:	da000006 	ble	35bc8c <MeasureGlyphWidths(long)+0x1e8>
        35bc70:	e3a00001 	mov	r0, #1	; 0x1
        35bc74:	e58d0008 	str	r0, [sp, #8]
        35bc78:	e3a00080 	mov	r0, #128	; 0x80
        35bc7c:	e58d0120 	str	r0, [sp, #288]
        35bc80:	e3a00c02 	mov	r0, #512	; 0x200
        35bc84:	eb62192d 	bl	1be2140 <$NewPtr>
        35bc88:	ea000001 	b	35bc94 <MeasureGlyphWidths(long)+0x1f0>
        35bc8c:	e1a00106 	mov	r0, r6, lsl #2
        35bc90:	eb5fbe4d 	bl	1b4b5cc <$QDNewTempPtr(long)>
        35bc94:	e1a05000 	mov	r5, r0
        35bc98:	e58d5114 	str	r5, [sp, #276]
        35bc9c:	e3350000 	teq	r5, #0	; 0x0
        35bca0:	1a000004 	bne	35bcb8 <MeasureGlyphWidths(long)+0x214>
        35bca4:	e3580001 	cmp	r8, #1	; 0x1
        35bca8:	daffffc9 	ble	35bbd4 <MeasureGlyphWidths(long)+0x130>
        35bcac:	e1a00007 	mov	r0, r7
        35bcb0:	eb6214ff 	bl	1be10b4 <$DisposPtr>
        35bcb4:	eaffffc6 	b	35bbd4 <MeasureGlyphWidths(long)+0x130>
        35bcb8:	e28d1014 	add	r1, sp, #20	; 0x14
        35bcbc:	e3a02000 	mov	r2, #0	; 0x0
        35bcc0:	e51b002c 	ldr	r0, [fp, -#44]
        35bcc4:	eb5fbe2d 	bl	1b4b580 <$InitTextWalker(long, TextWalker *, unsigned char)>
        35bcc8:	e24dd008 	sub	sp, sp, #8	; 0x8
        35bccc:	e59d0124 	ldr	r0, [sp, #292]
        35bcd0:	e58d0004 	str	r0, [sp, #4]
        35bcd4:	e594001c 	ldr	r0, [r4, #28]
        35bcd8:	e3100701 	tst	r0, #262144	; 0x40000
        35bcdc:	12000801 	andne	r0, r0, #65536	; 0x10000
        35bce0:	13300000 	teqne	r0, #0	; 0x0
        35bce4:	03a00000 	moveq	r0, #0	; 0x0
        35bce8:	13a00001 	movne	r0, #1	; 0x1
        35bcec:	e20010ff 	and	r1, r0, #255	; 0xff
        35bcf0:	e58d1000 	str	r1, [sp]
        35bcf4:	eb5fe771 	bl	1b55ac0 <$QDPatchpoint(void)>
        35bcf8:	e59d0130 	ldr	r0, [sp, #304]
        35bcfc:	e58d012c 	str	r0, [sp, #300]
        35bd00:	e3500000 	cmp	r0, #0	; 0x0
        35bd04:	da00007a 	ble	35bef4 <MeasureGlyphWidths(long)+0x450>
        35bd08:	e24dd004 	sub	sp, sp, #4	; 0x4
        35bd0c:	e59d003c 	ldr	r0, [sp, #60]
        35bd10:	e3300000 	teq	r0, #0	; 0x0
        35bd14:	1a000018 	bne	35bd7c <MeasureGlyphWidths(long)+0x2d8>
        35bd18:	e59d0018 	ldr	r0, [sp, #24]
        35bd1c:	e3300000 	teq	r0, #0	; 0x0
        35bd20:	128d0058 	addne	r0, sp, #88	; 0x58
        35bd24:	11a0e00f 	movne	lr, pc
        35bd28:	159df0d8 	ldrne	pc, [sp, #216]
        35bd2c:	e3a00001 	mov	r0, #1	; 0x1
        35bd30:	e58d0018 	str	r0, [sp, #24]
        35bd34:	e28d3058 	add	r3, sp, #88	; 0x58
        35bd38:	e92d0008 	stmdb	sp!, {r3}
        35bd3c:	e2843038 	add	r3, r4, #56	; 0x38
        35bd40:	e893000c 	ldmia	r3, {r2, r3}
        35bd44:	e59d004c 	ldr	r0, [sp, #76]
        35bd48:	e5901000 	ldr	r1, [r0]
        35bd4c:	e59d0010 	ldr	r0, [sp, #16]
        35bd50:	eb5fbe17 	bl	1b4b5b4 <$OpenFont__FP8PixelMapP11StyleRecordlT3P14FontEngineInfo>
        35bd54:	e28dd004 	add	sp, sp, #4	; 0x4
        35bd58:	e59d0094 	ldr	r0, [sp, #148]
        35bd5c:	e5870000 	str	r0, [r7]
        35bd60:	e3a00020 	mov	r0, #32	; 0x20
        35bd64:	e59d10f0 	ldr	r1, [sp, #240]
        35bd68:	e1a0e00f 	mov	lr, pc
        35bd6c:	e59df0cc 	ldr	pc, [sp, #204]
        35bd70:	e3580001 	cmp	r8, #1	; 0x1
        35bd74:	e5870004 	str	r0, [r7, #4]
        35bd78:	c2877008 	addgt	r7, r7, #8	; 0x8
        35bd7c:	e59d0010 	ldr	r0, [sp, #16]
        35bd80:	e3300000 	teq	r0, #0	; 0x0
        35bd84:	0a00000a 	beq	35bdb4 <MeasureGlyphWidths(long)+0x310>
        35bd88:	e159000a 	cmp	r9, sl
        35bd8c:	ba000008 	blt	35bdb4 <MeasureGlyphWidths(long)+0x310>
        35bd90:	e28aa080 	add	sl, sl, #128	; 0x80
        35bd94:	e1a0108a 	mov	r1, sl, lsl #1
        35bd98:	e5940020 	ldr	r0, [r4, #32]
        35bd9c:	eb6218ef 	bl	1be2160 <$ReallocPtr>
        35bda0:	e3300000 	teq	r0, #0	; 0x0
        35bda4:	0a000049 	beq	35bed0 <MeasureGlyphWidths(long)+0x42c>
        35bda8:	e5840020 	str	r0, [r4, #32]
        35bdac:	e0800089 	add	r0, r0, r9, lsl #1
        35bdb0:	e58d0138 	str	r0, [sp, #312]
        35bdb4:	e28d0020 	add	r0, sp, #32	; 0x20
        35bdb8:	e3a01000 	mov	r1, #0	; 0x0
        35bdbc:	eb5fbe0d 	bl	1b4b5f8 <$ScanNextChar(TextWalker *, long **)>
        35bdc0:	e59d10f0 	ldr	r1, [sp, #240]
        35bdc4:	e1a0e00f 	mov	lr, pc
        35bdc8:	e59df0cc 	ldr	pc, [sp, #204]
        35bdcc:	e58d0000 	str	r0, [sp]
        35bdd0:	e28d2058 	add	r2, sp, #88	; 0x58
        35bdd4:	e1a01000 	mov	r1, r0
        35bdd8:	e3a00000 	mov	r0, #0	; 0x0
        35bddc:	e1a0e00f 	mov	lr, pc
        35bde0:	e59df0d0 	ldr	pc, [sp, #208]
        35bde4:	e59d00bc 	ldr	r0, [sp, #188]
        35bde8:	e58d011c 	str	r0, [sp, #284]
        35bdec:	e59d0138 	ldr	r0, [sp, #312]
        35bdf0:	e59d1000 	ldr	r1, [sp]
        35bdf4:	e5c01001 	strb	r1, [r0, #1]
        35bdf8:	e1a01421 	mov	r1, r1, lsr #8
        35bdfc:	e4c01002 	strb	r1, [r0], #2
        35be00:	e58d0138 	str	r0, [sp, #312]
        35be04:	e59d0014 	ldr	r0, [sp, #20]
        35be08:	e3300000 	teq	r0, #0	; 0x0
        35be0c:	0a00000d 	beq	35be48 <MeasureGlyphWidths(long)+0x3a4>
        35be10:	e59d012c 	ldr	r0, [sp, #300]
        35be14:	e1590000 	cmp	r9, r0
        35be18:	ba00000a 	blt	35be48 <MeasureGlyphWidths(long)+0x3a4>
        35be1c:	e59d012c 	ldr	r0, [sp, #300]
        35be20:	e2800080 	add	r0, r0, #128	; 0x80
        35be24:	e58d012c 	str	r0, [sp, #300]
        35be28:	e1a01100 	mov	r1, r0, lsl #2
        35be2c:	e1a00005 	mov	r0, r5
        35be30:	eb6218ca 	bl	1be2160 <$ReallocPtr>
        35be34:	e3300000 	teq	r0, #0	; 0x0
        35be38:	0a000024 	beq	35bed0 <MeasureGlyphWidths(long)+0x42c>
        35be3c:	e1a05000 	mov	r5, r0
        35be40:	e0800109 	add	r0, r0, r9, lsl #2
        35be44:	e58d0120 	str	r0, [sp, #288]
        35be48:	e2899001 	add	r9, r9, #1	; 0x1
        35be4c:	e59d0120 	ldr	r0, [sp, #288]
        35be50:	e59d111c 	ldr	r1, [sp, #284]
        35be54:	e4801004 	str	r1, [r0], #4
        35be58:	e58d0120 	str	r0, [sp, #288]
        35be5c:	e59d0128 	ldr	r0, [sp, #296]
        35be60:	e3300000 	teq	r0, #0	; 0x0
        35be64:	0a00001c 	beq	35bedc <MeasureGlyphWidths(long)+0x438>
        35be68:	e59d0094 	ldr	r0, [sp, #148]
        35be6c:	e3300801 	teq	r0, #65536	; 0x10000
        35be70:	059d011c 	ldreq	r0, [sp, #284]
        35be74:	0a000002 	beq	35be84 <MeasureGlyphWidths(long)+0x3e0>
        35be78:	e59d011c 	ldr	r0, [sp, #284]
        35be7c:	e59d1094 	ldr	r1, [sp, #148]
        35be80:	eb62148f 	bl	1be10c4 <$FixedMultiply>
        35be84:	e59d1124 	ldr	r1, [sp, #292]
        35be88:	e0800001 	add	r0, r0, r1
        35be8c:	e59d1008 	ldr	r1, [sp, #8]
        35be90:	e1500001 	cmp	r0, r1
        35be94:	da00000f 	ble	35bed8 <MeasureGlyphWidths(long)+0x434>
        35be98:	e59d1004 	ldr	r1, [sp, #4]
        35be9c:	e3310000 	teq	r1, #0	; 0x0
        35bea0:	1a00000c 	bne	35bed8 <MeasureGlyphWidths(long)+0x434>
        35bea4:	e59d0130 	ldr	r0, [sp, #304]
        35bea8:	e0466000 	sub	r6, r6, r0
        35beac:	e5846004 	str	r6, [r4, #4]
        35beb0:	e5846024 	str	r6, [r4, #36]
        35beb4:	e59d0144 	ldr	r0, [sp, #324]
        35beb8:	e3300000 	teq	r0, #0	; 0x0
        35bebc:	1a000003 	bne	35bed0 <MeasureGlyphWidths(long)+0x42c>
        35bec0:	e1a01086 	mov	r1, r6, lsl #1
        35bec4:	e5940020 	ldr	r0, [r4, #32]
        35bec8:	eb6218a4 	bl	1be2160 <$ReallocPtr>
        35becc:	e5840020 	str	r0, [r4, #32]
        35bed0:	e28dd004 	add	sp, sp, #4	; 0x4
        35bed4:	ea000006 	b	35bef4 <MeasureGlyphWidths(long)+0x450>
        35bed8:	e58d0124 	str	r0, [sp, #292]
        35bedc:	e28dd004 	add	sp, sp, #4	; 0x4
        35bee0:	e59d012c 	ldr	r0, [sp, #300]
        35bee4:	e2400001 	sub	r0, r0, #1	; 0x1
        35bee8:	e58d012c 	str	r0, [sp, #300]
        35beec:	e3500000 	cmp	r0, #0	; 0x0
        35bef0:	caffff84 	bgt	35bd08 <MeasureGlyphWidths(long)+0x264>
        35bef4:	e28d0054 	add	r0, sp, #84	; 0x54
        35bef8:	e1a0e00f 	mov	lr, pc
        35befc:	e59df0d4 	ldr	pc, [sp, #212]
        35bf00:	e28d001c 	add	r0, sp, #28	; 0x1c
        35bf04:	eb5fbdb4 	bl	1b4b5dc <$ReleaseTextWalker(TextWalker *)>
        35bf08:	e59d0124 	ldr	r0, [sp, #292]
        35bf0c:	e3300000 	teq	r0, #0	; 0x0
        35bf10:	159d0120 	ldrne	r0, [sp, #288]
        35bf14:	15941018 	ldrne	r1, [r4, #24]
        35bf18:	15a10014 	strne	r0, [r1, #20]!
        35bf1c:	e59d013c 	ldr	r0, [sp, #316]
        35bf20:	e3300000 	teq	r0, #0	; 0x0
        35bf24:	1a000016 	bne	35bf84 <MeasureGlyphWidths(long)+0x4e0>
        35bf28:	e59d0124 	ldr	r0, [sp, #292]
        35bf2c:	e3300000 	teq	r0, #0	; 0x0
        35bf30:	0a000013 	beq	35bf84 <MeasureGlyphWidths(long)+0x4e0>
        35bf34:	e1a07106 	mov	r7, r6, lsl #2
        35bf38:	e1a00007 	mov	r0, r7
        35bf3c:	eb62187f 	bl	1be2140 <$NewPtr>
        35bf40:	e1b06000 	movs	r6, r0
        35bf44:	0a000004 	beq	35bf5c <MeasureGlyphWidths(long)+0x4b8>
        35bf48:	e1a02007 	mov	r2, r7
        35bf4c:	e1a01006 	mov	r1, r6
        35bf50:	e1a00005 	mov	r0, r5
        35bf54:	eb620bfe 	bl	1bdef54 <$BlockMove>
        35bf58:	ea000001 	b	35bf64 <MeasureGlyphWidths(long)+0x4c0>
        35bf5c:	e3a00000 	mov	r0, #0	; 0x0
        35bf60:	e58d0018 	str	r0, [sp, #24]
        35bf64:	e59d0010 	ldr	r0, [sp, #16]
        35bf68:	e3300000 	teq	r0, #0	; 0x0
        35bf6c:	e1a00005 	mov	r0, r5
        35bf70:	0a000001 	beq	35bf7c <MeasureGlyphWidths(long)+0x4d8>
        35bf74:	eb62144e 	bl	1be10b4 <$DisposPtr>
        35bf78:	ea000002 	b	35bf88 <MeasureGlyphWidths(long)+0x4e4>
        35bf7c:	eb5fbd91 	bl	1b4b5c8 <$QDDisposeTempPtr(char *)>
        35bf80:	ea000000 	b	35bf88 <MeasureGlyphWidths(long)+0x4e4>
        35bf84:	e1a06005 	mov	r6, r5
        35bf88:	e5846028 	str	r6, [r4, #40]
        35bf8c:	e5b4001c 	ldr	r0, [r4, #28]!
        35bf90:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        35bf94:	0a000003 	beq	35bfa8 <MeasureGlyphWidths(long)+0x504>
        35bf98:	e51b002c 	ldr	r0, [fp, -#44]
        35bf9c:	e59d1138 	ldr	r1, [sp, #312]
        35bfa0:	e20110ff 	and	r1, r1, #255	; 0xff
        35bfa4:	eb621859 	bl	1be2110 <$HSetState>
        35bfa8:	e59d0114 	ldr	r0, [sp, #276]
        35bfac:	e59d4018 	ldr	r4, [sp, #24]
        35bfb0:	eb619c81 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        35bfb4:	e1a00004 	mov	r0, r4
        35bfb8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MakeGrayText(PixelMap *, GrafPort *)
 * Address: 0035dcd0
 */
MakeGrayText(PixelMap *, GrafPort *) {
    /*
        35dcd0:	e1a0c00d 	mov	ip, sp
        35dcd4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        35dcd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        35dcdc:	e1a04000 	mov	r4, r0
        35dce0:	e1a05001 	mov	r5, r1
        35dce4:	e590100c 	ldr	r1, [r0, #12]
        35dce8:	e1a01841 	mov	r1, r1, asr #16
        35dcec:	e5900008 	ldr	r0, [r0, #8]
        35dcf0:	e0411840 	sub	r1, r1, r0, asr #16
        35dcf4:	e5940004 	ldr	r0, [r4, #4]
        35dcf8:	e1a00840 	mov	r0, r0, asr #16
        35dcfc:	e0060190 	mul	r6, r0, r1
        35dd00:	e5942000 	ldr	r2, [r4]
        35dd04:	e1a07002 	mov	r7, r2
        35dd08:	e5953010 	ldr	r3, [r5, #16]
        35dd0c:	e20380ff 	and	r8, r3, #255	; 0xff
        35dd10:	e3380001 	teq	r8, #1	; 0x1
        35dd14:	0a00003b 	beq	35de08 <MakeGrayText(PixelMap *, GrafPort *)+0x138>
        35dd18:	e3380002 	teq	r8, #2	; 0x2
        35dd1c:	0a00004c 	beq	35de54 <MakeGrayText(PixelMap *, GrafPort *)+0x184>
        35dd20:	e3380004 	teq	r8, #4	; 0x4
        35dd24:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35dd28:	e1a00106 	mov	r0, r6, lsl #2
        35dd2c:	eb5fb626 	bl	1b4b5cc <$QDNewTempPtr(long)>
        35dd30:	e1b09000 	movs	r9, r0
        35dd34:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35dd38:	e1a0a009 	mov	sl, r9
        35dd3c:	e5b5002c 	ldr	r0, [r5, #44]!
        35dd40:	e5900000 	ldr	r0, [r0]
        35dd44:	eb62ba2f 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        35dd48:	e5d00000 	ldrb	r0, [r0]
        35dd4c:	e20000f0 	and	r0, r0, #240	; 0xf0
        35dd50:	e1800240 	orr	r0, r0, r0, asr #4
        35dd54:	e20000ff 	and	r0, r0, #255	; 0xff
        35dd58:	e3a01000 	mov	r1, #0	; 0x0
        35dd5c:	e56d1004 	strb	r1, [sp, -#4]!
        35dd60:	e200100f 	and	r1, r0, #15	; 0xf
        35dd64:	e5cd1001 	strb	r1, [sp, #1]
        35dd68:	e20010f0 	and	r1, r0, #240	; 0xf0
        35dd6c:	e5cd1002 	strb	r1, [sp, #2]
        35dd70:	e5cd0003 	strb	r0, [sp, #3]
        35dd74:	e2460001 	sub	r0, r6, #1	; 0x1
        35dd78:	e3360000 	teq	r6, #0	; 0x0
        35dd7c:	0a000014 	beq	35ddd4 <MakeGrayText(PixelMap *, GrafPort *)+0x104>
        35dd80:	e5d71000 	ldrb	r1, [r7]
        35dd84:	e20120c0 	and	r2, r1, #192	; 0xc0
        35dd88:	e7dd2342 	ldrb	r2, [sp, r2, asr #6]
        35dd8c:	e5ca2000 	strb	r2, [sl]
        35dd90:	e28a1001 	add	r1, sl, #1	; 0x1
        35dd94:	e5d72000 	ldrb	r2, [r7]
        35dd98:	e2023030 	and	r3, r2, #48	; 0x30
        35dd9c:	e7dd2243 	ldrb	r2, [sp, r3, asr #4]
        35dda0:	e4c12001 	strb	r2, [r1], #1
        35dda4:	e5d72000 	ldrb	r2, [r7]
        35dda8:	e202200c 	and	r2, r2, #12	; 0xc
        35ddac:	e7dd2142 	ldrb	r2, [sp, r2, asr #2]
        35ddb0:	e4c12001 	strb	r2, [r1], #1
        35ddb4:	e4d72001 	ldrb	r2, [r7], #1
        35ddb8:	e2023003 	and	r3, r2, #3	; 0x3
        35ddbc:	e7dd2003 	ldrb	r2, [sp, r3]
        35ddc0:	e4c12001 	strb	r2, [r1], #1
        35ddc4:	e1a0a001 	mov	sl, r1
        35ddc8:	e1b01000 	movs	r1, r0
        35ddcc:	e2400001 	sub	r0, r0, #1	; 0x1
        35ddd0:	1affffea 	bne	35dd80 <MakeGrayText(PixelMap *, GrafPort *)+0xb0>
        35ddd4:	e5849000 	str	r9, [r4]
        35ddd8:	e5941004 	ldr	r1, [r4, #4]
        35dddc:	e1a01821 	mov	r1, r1, lsr #16
        35dde0:	e1a00008 	mov	r0, r8
        35dde4:	e0010190 	mul	r1, r0, r1
        35dde8:	e5c41005 	strb	r1, [r4, #5]
        35ddec:	e1a00441 	mov	r0, r1, asr #8
        35ddf0:	e5c40004 	strb	r0, [r4, #4]
        35ddf4:	e5940010 	ldr	r0, [r4, #16]
        35ddf8:	e3c000ff 	bic	r0, r0, #255	; 0xff
        35ddfc:	e1800008 	orr	r0, r0, r8
        35de00:	e5a40010 	str	r0, [r4, #16]!
        35de04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35de08:	e59f3040 	ldr	r3, [pc, #40]	; 35de50 <MakeGrayText(PixelMap *, GrafPort *)+0x180>
        35de0c:	e1a00140 	mov	r0, r0, asr #2
        35de10:	e3510000 	cmp	r1, #0	; 0x0
        35de14:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35de18:	e1a0c000 	mov	ip, r0
        35de1c:	e3500000 	cmp	r0, #0	; 0x0
        35de20:	da000005 	ble	35de3c <MakeGrayText(PixelMap *, GrafPort *)+0x16c>
        35de24:	e592e000 	ldr	lr, [r2]
        35de28:	e00ee003 	and	lr, lr, r3
        35de2c:	e24cc001 	sub	ip, ip, #1	; 0x1
        35de30:	e35c0000 	cmp	ip, #0	; 0x0
        35de34:	e482e004 	str	lr, [r2], #4
        35de38:	cafffff9 	bgt	35de24 <MakeGrayText(PixelMap *, GrafPort *)+0x154>
        35de3c:	e1e03003 	mvn	r3, r3
        35de40:	e2411001 	sub	r1, r1, #1	; 0x1
        35de44:	e3510000 	cmp	r1, #0	; 0x0
        35de48:	cafffff2 	bgt	35de18 <MakeGrayText(PixelMap *, GrafPort *)+0x148>
        35de4c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35de50:	aaaaaaaa 	bge	fee08900 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd1f80a8>
        35de54:	e1a00086 	mov	r0, r6, lsl #1
        35de58:	eb5fb5db 	bl	1b4b5cc <$QDNewTempPtr(long)>
        35de5c:	e1b0a000 	movs	sl, r0
        35de60:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35de64:	e1a0900a 	mov	r9, sl
        35de68:	e5b5002c 	ldr	r0, [r5, #44]!
        35de6c:	e5900000 	ldr	r0, [r0]
        35de70:	eb62b9e4 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        35de74:	e5d00000 	ldrb	r0, [r0]
        35de78:	e20000c0 	and	r0, r0, #192	; 0xc0
        35de7c:	e1800140 	orr	r0, r0, r0, asr #2
        35de80:	e20000ff 	and	r0, r0, #255	; 0xff
        35de84:	e1800240 	orr	r0, r0, r0, asr #4
        35de88:	e20000ff 	and	r0, r0, #255	; 0xff
        35de8c:	e3a01000 	mov	r1, #0	; 0x0
        35de90:	e56d1010 	strb	r1, [sp, -#16]!
        35de94:	e2001003 	and	r1, r0, #3	; 0x3
        35de98:	e5cd1001 	strb	r1, [sp, #1]
        35de9c:	e200100c 	and	r1, r0, #12	; 0xc
        35dea0:	e5cd1002 	strb	r1, [sp, #2]
        35dea4:	e200100f 	and	r1, r0, #15	; 0xf
        35dea8:	e5cd1003 	strb	r1, [sp, #3]
        35deac:	e2001030 	and	r1, r0, #48	; 0x30
        35deb0:	e5cd1004 	strb	r1, [sp, #4]
        35deb4:	e2001033 	and	r1, r0, #51	; 0x33
        35deb8:	e5cd1005 	strb	r1, [sp, #5]
        35debc:	e200103c 	and	r1, r0, #60	; 0x3c
        35dec0:	e5cd1006 	strb	r1, [sp, #6]
        35dec4:	e200103f 	and	r1, r0, #63	; 0x3f
        35dec8:	e5cd1007 	strb	r1, [sp, #7]
        35decc:	e20010c0 	and	r1, r0, #192	; 0xc0
        35ded0:	e5cd1008 	strb	r1, [sp, #8]
        35ded4:	e20010c3 	and	r1, r0, #195	; 0xc3
        35ded8:	e5cd1009 	strb	r1, [sp, #9]
        35dedc:	e20010cc 	and	r1, r0, #204	; 0xcc
        35dee0:	e5cd100a 	strb	r1, [sp, #10]
        35dee4:	e20010cf 	and	r1, r0, #207	; 0xcf
        35dee8:	e5cd100b 	strb	r1, [sp, #11]
        35deec:	e20010f0 	and	r1, r0, #240	; 0xf0
        35def0:	e5cd100c 	strb	r1, [sp, #12]
        35def4:	e20010f3 	and	r1, r0, #243	; 0xf3
        35def8:	e5cd100d 	strb	r1, [sp, #13]
        35defc:	e20010fc 	and	r1, r0, #252	; 0xfc
        35df00:	e5cd100e 	strb	r1, [sp, #14]
        35df04:	e5cd000f 	strb	r0, [sp, #15]
        35df08:	e2460001 	sub	r0, r6, #1	; 0x1
        35df0c:	e3360000 	teq	r6, #0	; 0x0
        35df10:	0a00000a 	beq	35df40 <MakeGrayText(PixelMap *, GrafPort *)+0x270>
        35df14:	e5d71000 	ldrb	r1, [r7]
        35df18:	e20110f0 	and	r1, r1, #240	; 0xf0
        35df1c:	e7dd1241 	ldrb	r1, [sp, r1, asr #4]
        35df20:	e4c91001 	strb	r1, [r9], #1
        35df24:	e4d71001 	ldrb	r1, [r7], #1
        35df28:	e201100f 	and	r1, r1, #15	; 0xf
        35df2c:	e7dd1001 	ldrb	r1, [sp, r1]
        35df30:	e4c91001 	strb	r1, [r9], #1
        35df34:	e1b01000 	movs	r1, r0
        35df38:	e2400001 	sub	r0, r0, #1	; 0x1
        35df3c:	1afffff4 	bne	35df14 <MakeGrayText(PixelMap *, GrafPort *)+0x244>
        35df40:	e584a000 	str	sl, [r4]
        35df44:	e5941004 	ldr	r1, [r4, #4]
        35df48:	e1a01821 	mov	r1, r1, lsr #16
        35df4c:	e1a00008 	mov	r0, r8
        35df50:	e0010190 	mul	r1, r0, r1
        35df54:	e5c41005 	strb	r1, [r4, #5]
        35df58:	e1a00441 	mov	r0, r1, asr #8
        35df5c:	e5c40004 	strb	r0, [r4, #4]
        35df60:	e5940010 	ldr	r0, [r4, #16]
        35df64:	e3c000ff 	bic	r0, r0, #255	; 0xff
        35df68:	e1800008 	orr	r0, r0, r8
        35df6c:	e5a40010 	str	r0, [r4, #16]!
        35df70:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: MergeWithOutLine__FPsiT2P9xrcm_type
 * Address: 00360a34
 */
void globals::MergeWithOutLine() {
    /*
        360a34:	e92d47f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, lr}
        360a38:	e1a06000 	mov	r6, r0
        360a3c:	e59341c4 	ldr	r4, [r3, #452]
        360a40:	e1a09004 	mov	r9, r4
        360a44:	e593c1c8 	ldr	ip, [r3, #456]
        360a48:	e1a0800c 	mov	r8, ip
        360a4c:	e0817002 	add	r7, r1, r2
        360a50:	e1540001 	cmp	r4, r1
        360a54:	e593e1ec 	ldr	lr, [r3, #492]
        360a58:	c1a04001 	movgt	r4, r1
        360a5c:	e15c0007 	cmp	ip, r7
        360a60:	b1a0c007 	movlt	ip, r7
        360a64:	e5930140 	ldr	r0, [r3, #320]
        360a68:	e150000c 	cmp	r0, ip
        360a6c:	b1a0c000 	movlt	ip, r0
        360a70:	e5930048 	ldr	r0, [r3, #72]
        360a74:	e3100004 	tst	r0, #4	; 0x4
        360a78:	0a000033 	beq	360b4c <MergeWithOutLine__FPsiT2P9xrcm_type+0x118>
        360a7c:	e59320a8 	ldr	r2, [r3, #168]
        360a80:	e2825014 	add	r5, r2, #20	; 0x14
        360a84:	e3a00001 	mov	r0, #1	; 0x1
        360a88:	e593a0a0 	ldr	sl, [r3, #160]
        360a8c:	e33a0000 	teq	sl, #0	; 0x0
        360a90:	1a000006 	bne	360ab0 <MergeWithOutLine__FPsiT2P9xrcm_type+0x7c>
        360a94:	e154000c 	cmp	r4, ip
        360a98:	aa00004d 	bge	360bd4 <MergeWithOutLine__FPsiT2P9xrcm_type+0x1a0>
        360a9c:	e7c50004 	strb	r0, [r5, r4]
        360aa0:	e2844001 	add	r4, r4, #1	; 0x1
        360aa4:	e154000c 	cmp	r4, ip
        360aa8:	bafffffb 	blt	360a9c <MergeWithOutLine__FPsiT2P9xrcm_type+0x68>
        360aac:	ea000048 	b	360bd4 <MergeWithOutLine__FPsiT2P9xrcm_type+0x1a0>
        360ab0:	e9a21010 	stmib	r2!, {r4, ip}
        360ab4:	e1a02004 	mov	r2, r4
        360ab8:	e154000c 	cmp	r4, ip
        360abc:	aa000042 	bge	360bcc <MergeWithOutLine__FPsiT2P9xrcm_type+0x198>
        360ac0:	e1520001 	cmp	r2, r1
        360ac4:	aa000001 	bge	360ad0 <MergeWithOutLine__FPsiT2P9xrcm_type+0x9c>
        360ac8:	e3a00001 	mov	r0, #1	; 0x1
        360acc:	ea000019 	b	360b38 <MergeWithOutLine__FPsiT2P9xrcm_type+0x104>
        360ad0:	e1520009 	cmp	r2, r9
        360ad4:	aa000007 	bge	360af8 <MergeWithOutLine__FPsiT2P9xrcm_type+0xc4>
        360ad8:	e0420001 	sub	r0, r2, r1
        360adc:	e7960080 	ldr	r0, [r6, r0, lsl #1]
        360ae0:	e1a00820 	mov	r0, r0, lsr #16
        360ae4:	e08ea082 	add	sl, lr, r2, lsl #1
        360ae8:	e5ca0001 	strb	r0, [sl, #1]
        360aec:	e1a00440 	mov	r0, r0, asr #8
        360af0:	e5ca0000 	strb	r0, [sl]
        360af4:	ea00000e 	b	360b34 <MergeWithOutLine__FPsiT2P9xrcm_type+0x100>
        360af8:	e1520007 	cmp	r2, r7
        360afc:	aafffff1 	bge	360ac8 <MergeWithOutLine__FPsiT2P9xrcm_type+0x94>
        360b00:	e1520008 	cmp	r2, r8
        360b04:	aafffff3 	bge	360ad8 <MergeWithOutLine__FPsiT2P9xrcm_type+0xa4>
        360b08:	e0420001 	sub	r0, r2, r1
        360b0c:	e796a080 	ldr	sl, [r6, r0, lsl #1]
        360b10:	e1a0a84a 	mov	sl, sl, asr #16
        360b14:	e79e0082 	ldr	r0, [lr, r2, lsl #1]
        360b18:	e1a00840 	mov	r0, r0, asr #16
        360b1c:	e15a0000 	cmp	sl, r0
        360b20:	baffffe8 	blt	360ac8 <MergeWithOutLine__FPsiT2P9xrcm_type+0x94>
        360b24:	e08e0082 	add	r0, lr, r2, lsl #1
        360b28:	e5c0a001 	strb	sl, [r0, #1]
        360b2c:	e1a0a44a 	mov	sl, sl, asr #8
        360b30:	e5c0a000 	strb	sl, [r0]
        360b34:	e3a00000 	mov	r0, #0	; 0x0
        360b38:	e7c50002 	strb	r0, [r5, r2]
        360b3c:	e2822001 	add	r2, r2, #1	; 0x1
        360b40:	e152000c 	cmp	r2, ip
        360b44:	baffffdd 	blt	360ac0 <MergeWithOutLine__FPsiT2P9xrcm_type+0x8c>
        360b48:	ea00001f 	b	360bcc <MergeWithOutLine__FPsiT2P9xrcm_type+0x198>
        360b4c:	e59300a0 	ldr	r0, [r3, #160]
        360b50:	e3300000 	teq	r0, #0	; 0x0
        360b54:	0a00001e 	beq	360bd4 <MergeWithOutLine__FPsiT2P9xrcm_type+0x1a0>
        360b58:	e1a00004 	mov	r0, r4
        360b5c:	e154000c 	cmp	r4, ip
        360b60:	aa000019 	bge	360bcc <MergeWithOutLine__FPsiT2P9xrcm_type+0x198>
        360b64:	e1500001 	cmp	r0, r1
        360b68:	ba000014 	blt	360bc0 <MergeWithOutLine__FPsiT2P9xrcm_type+0x18c>
        360b6c:	e1500009 	cmp	r0, r9
        360b70:	aa000003 	bge	360b84 <MergeWithOutLine__FPsiT2P9xrcm_type+0x150>
        360b74:	e0402001 	sub	r2, r0, r1
        360b78:	e7962082 	ldr	r2, [r6, r2, lsl #1]
        360b7c:	e1a02822 	mov	r2, r2, lsr #16
        360b80:	ea00000a 	b	360bb0 <MergeWithOutLine__FPsiT2P9xrcm_type+0x17c>
        360b84:	e1500007 	cmp	r0, r7
        360b88:	aa00000c 	bge	360bc0 <MergeWithOutLine__FPsiT2P9xrcm_type+0x18c>
        360b8c:	e1500008 	cmp	r0, r8
        360b90:	aafffff7 	bge	360b74 <MergeWithOutLine__FPsiT2P9xrcm_type+0x140>
        360b94:	e0402001 	sub	r2, r0, r1
        360b98:	e7962082 	ldr	r2, [r6, r2, lsl #1]
        360b9c:	e1a02842 	mov	r2, r2, asr #16
        360ba0:	e79e5080 	ldr	r5, [lr, r0, lsl #1]
        360ba4:	e1a05845 	mov	r5, r5, asr #16
        360ba8:	e1520005 	cmp	r2, r5
        360bac:	ba000003 	blt	360bc0 <MergeWithOutLine__FPsiT2P9xrcm_type+0x18c>
        360bb0:	e08e5080 	add	r5, lr, r0, lsl #1
        360bb4:	e5c52001 	strb	r2, [r5, #1]
        360bb8:	e1a02442 	mov	r2, r2, asr #8
        360bbc:	e5c52000 	strb	r2, [r5]
        360bc0:	e2800001 	add	r0, r0, #1	; 0x1
        360bc4:	e150000c 	cmp	r0, ip
        360bc8:	baffffe5 	blt	360b64 <MergeWithOutLine__FPsiT2P9xrcm_type+0x130>
        360bcc:	e2833d07 	add	r3, r3, #448	; 0x1c0
        360bd0:	e9a31010 	stmib	r3!, {r4, ip}
        360bd4:	e3a00000 	mov	r0, #0	; 0x0
        360bd8:	e8bd87f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
    */
}

/**
 * Symbol: MergeVarResults(xrcm_type *)
 * Address: 00361ef8
 */
MergeVarResults(xrcm_type *) {
    /*
        361ef8:	e92d47f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, lr}
        361efc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        361f00:	e280c050 	add	ip, r0, #80	; 0x50
        361f04:	e58dc004 	str	ip, [sp, #4]
        361f08:	e5906094 	ldr	r6, [r0, #148]
        361f0c:	e3a02078 	mov	r2, #120	; 0x78
        361f10:	e3a01000 	mov	r1, #0	; 0x0
        361f14:	e3a0c000 	mov	ip, #0	; 0x0
        361f18:	e3a03000 	mov	r3, #0	; 0x0
        361f1c:	e58d6000 	str	r6, [sp]
        361f20:	e59d4004 	ldr	r4, [sp, #4]
        361f24:	e084e10c 	add	lr, r4, ip, lsl #2
        361f28:	e5dee001 	ldrb	lr, [lr, #1]
        361f2c:	e33e0000 	teq	lr, #0	; 0x0
        361f30:	0a000006 	beq	361f50 <MergeVarResults(xrcm_type *)+0x58>
        361f34:	e59d4004 	ldr	r4, [sp, #4]
        361f38:	e7d4410c 	ldrb	r4, [r4, ip, lsl #2]
        361f3c:	e1540002 	cmp	r4, r2
        361f40:	b1a02004 	movlt	r2, r4
        361f44:	e15e0001 	cmp	lr, r1
        361f48:	c1a0100e 	movgt	r1, lr
        361f4c:	e2833001 	add	r3, r3, #1	; 0x1
        361f50:	e28cc001 	add	ip, ip, #1	; 0x1
        361f54:	e35c0010 	cmp	ip, #16	; 0x10
        361f58:	bafffff0 	blt	361f20 <MergeVarResults(xrcm_type *)+0x28>
        361f5c:	e3330000 	teq	r3, #0	; 0x0
        361f60:	1a000007 	bne	361f84 <MergeVarResults(xrcm_type *)+0x8c>
        361f64:	e3a04000 	mov	r4, #0	; 0x0
        361f68:	e58041d8 	str	r4, [r0, #472]
        361f6c:	e58041cc 	str	r4, [r0, #460]
        361f70:	e58041d4 	str	r4, [r0, #468]
        361f74:	e58041d0 	str	r4, [r0, #464]
        361f78:	e58041c8 	str	r4, [r0, #456]
        361f7c:	e5a041c4 	str	r4, [r0, #452]!
        361f80:	ea000094 	b	3621d8 <MergeVarResults(xrcm_type *)+0x2e0>
        361f84:	e1a0c002 	mov	ip, r2
        361f88:	e590e1ec 	ldr	lr, [r0, #492]
        361f8c:	e08ee082 	add	lr, lr, r2, lsl #1
        361f90:	e3a04000 	mov	r4, #0	; 0x0
        361f94:	e1520001 	cmp	r2, r1
        361f98:	aa000004 	bge	361fb0 <MergeVarResults(xrcm_type *)+0xb8>
        361f9c:	e5ce4001 	strb	r4, [lr, #1]
        361fa0:	e4ce4002 	strb	r4, [lr], #2
        361fa4:	e28cc001 	add	ip, ip, #1	; 0x1
        361fa8:	e15c0001 	cmp	ip, r1
        361fac:	bafffffa 	blt	361f9c <MergeVarResults(xrcm_type *)+0xa4>
        361fb0:	e590c048 	ldr	ip, [r0, #72]
        361fb4:	e31c0004 	tst	ip, #4	; 0x4
        361fb8:	0a000003 	beq	361fcc <MergeVarResults(xrcm_type *)+0xd4>
        361fbc:	e590c090 	ldr	ip, [r0, #144]
        361fc0:	e5cc2002 	strb	r2, [ip, #2]
        361fc4:	e5cc1003 	strb	r1, [ip, #3]
        361fc8:	e5cc3001 	strb	r3, [ip, #1]
        361fcc:	e3a03000 	mov	r3, #0	; 0x0
        361fd0:	e59dc004 	ldr	ip, [sp, #4]
        361fd4:	e7dc5103 	ldrb	r5, [ip, r3, lsl #2]
        361fd8:	e08cc103 	add	ip, ip, r3, lsl #2
        361fdc:	e5dc4001 	ldrb	r4, [ip, #1]
        361fe0:	e3340000 	teq	r4, #0	; 0x0
        361fe4:	0a00003d 	beq	3620e0 <MergeVarResults(xrcm_type *)+0x1e8>
        361fe8:	e590c1ec 	ldr	ip, [r0, #492]
        361fec:	e08cc085 	add	ip, ip, r5, lsl #1
        361ff0:	e080e103 	add	lr, r0, r3, lsl #2
        361ff4:	e59ee1f0 	ldr	lr, [lr, #496]
        361ff8:	e08ee085 	add	lr, lr, r5, lsl #1
        361ffc:	e59d6000 	ldr	r6, [sp]
        362000:	e7d66003 	ldrb	r6, [r6, r3]
        362004:	e2066007 	and	r6, r6, #7	; 0x7
        362008:	e1a08086 	mov	r8, r6, lsl #1
        36200c:	e5906048 	ldr	r6, [r0, #72]
        362010:	e3160004 	tst	r6, #4	; 0x4
        362014:	0a00001c 	beq	36208c <MergeVarResults(xrcm_type *)+0x194>
        362018:	e5906090 	ldr	r6, [r0, #144]
        36201c:	e0866005 	add	r6, r6, r5
        362020:	e2867044 	add	r7, r6, #68	; 0x44
        362024:	e0806005 	add	r6, r0, r5
        362028:	e286604a 	add	r6, r6, #74	; 0x4a
        36202c:	e2866c01 	add	r6, r6, #256	; 0x100
        362030:	e1550004 	cmp	r5, r4
        362034:	aa000029 	bge	3620e0 <MergeVarResults(xrcm_type *)+0x1e8>
        362038:	e20390ff 	and	r9, r3, #255	; 0xff
        36203c:	e58d9008 	str	r9, [sp, #8]
        362040:	e59e9000 	ldr	r9, [lr]
        362044:	e068a849 	rsb	sl, r8, r9, asr #16
        362048:	e59c9000 	ldr	r9, [ip]
        36204c:	e15a0849 	cmp	sl, r9, asr #16
        362050:	da000005 	ble	36206c <MergeVarResults(xrcm_type *)+0x174>
        362054:	e5cca001 	strb	sl, [ip, #1]
        362058:	e1a0944a 	mov	r9, sl, asr #8
        36205c:	e5cc9000 	strb	r9, [ip]
        362060:	e59d9008 	ldr	r9, [sp, #8]
        362064:	e5c69000 	strb	r9, [r6]
        362068:	e5c79000 	strb	r9, [r7]
        36206c:	e2855001 	add	r5, r5, #1	; 0x1
        362070:	e28cc002 	add	ip, ip, #2	; 0x2
        362074:	e28ee002 	add	lr, lr, #2	; 0x2
        362078:	e2877001 	add	r7, r7, #1	; 0x1
        36207c:	e2866001 	add	r6, r6, #1	; 0x1
        362080:	e1550004 	cmp	r5, r4
        362084:	baffffed 	blt	362040 <MergeVarResults(xrcm_type *)+0x148>
        362088:	ea000014 	b	3620e0 <MergeVarResults(xrcm_type *)+0x1e8>
        36208c:	e0806005 	add	r6, r0, r5
        362090:	e286604a 	add	r6, r6, #74	; 0x4a
        362094:	e2866c01 	add	r6, r6, #256	; 0x100
        362098:	e1550004 	cmp	r5, r4
        36209c:	aa00000f 	bge	3620e0 <MergeVarResults(xrcm_type *)+0x1e8>
        3620a0:	e20390ff 	and	r9, r3, #255	; 0xff
        3620a4:	e59e7000 	ldr	r7, [lr]
        3620a8:	e0687847 	rsb	r7, r8, r7, asr #16
        3620ac:	e59ca000 	ldr	sl, [ip]
        3620b0:	e157084a 	cmp	r7, sl, asr #16
        3620b4:	da000003 	ble	3620c8 <MergeVarResults(xrcm_type *)+0x1d0>
        3620b8:	e5cc7001 	strb	r7, [ip, #1]
        3620bc:	e1a07447 	mov	r7, r7, asr #8
        3620c0:	e5cc7000 	strb	r7, [ip]
        3620c4:	e5c69000 	strb	r9, [r6]
        3620c8:	e2855001 	add	r5, r5, #1	; 0x1
        3620cc:	e28cc002 	add	ip, ip, #2	; 0x2
        3620d0:	e28ee002 	add	lr, lr, #2	; 0x2
        3620d4:	e2866001 	add	r6, r6, #1	; 0x1
        3620d8:	e1550004 	cmp	r5, r4
        3620dc:	bafffff0 	blt	3620a4 <MergeVarResults(xrcm_type *)+0x1ac>
        3620e0:	e2833001 	add	r3, r3, #1	; 0x1
        3620e4:	e3530010 	cmp	r3, #16	; 0x10
        3620e8:	baffffb8 	blt	361fd0 <MergeVarResults(xrcm_type *)+0xd8>
        3620ec:	e5903130 	ldr	r3, [r0, #304]
        3620f0:	e3130002 	tst	r3, #2	; 0x2
        3620f4:	0a000012 	beq	362144 <MergeVarResults(xrcm_type *)+0x24c>
        3620f8:	e59031ec 	ldr	r3, [r0, #492]
        3620fc:	e083c082 	add	ip, r3, r2, lsl #1
        362100:	e1a03002 	mov	r3, r2
        362104:	e1520001 	cmp	r2, r1
        362108:	aa00000d 	bge	362144 <MergeVarResults(xrcm_type *)+0x24c>
        36210c:	e080e003 	add	lr, r0, r3
        362110:	e5dee244 	ldrb	lr, [lr, #580]
        362114:	e33e0000 	teq	lr, #0	; 0x0
        362118:	1a000005 	bne	362134 <MergeVarResults(xrcm_type *)+0x23c>
        36211c:	e59ce000 	ldr	lr, [ip]
        362120:	e1a0e82e 	mov	lr, lr, lsr #16
        362124:	e24ee004 	sub	lr, lr, #4	; 0x4
        362128:	e5cce001 	strb	lr, [ip, #1]
        36212c:	e1a0e44e 	mov	lr, lr, asr #8
        362130:	e5cce000 	strb	lr, [ip]
        362134:	e2833001 	add	r3, r3, #1	; 0x1
        362138:	e28cc002 	add	ip, ip, #2	; 0x2
        36213c:	e1530001 	cmp	r3, r1
        362140:	bafffff1 	blt	36210c <MergeVarResults(xrcm_type *)+0x214>
        362144:	e3a03000 	mov	r3, #0	; 0x0
        362148:	e58021c4 	str	r2, [r0, #452]
        36214c:	e3520000 	cmp	r2, #0	; 0x0
        362150:	e58011c8 	str	r1, [r0, #456]
        362154:	d3a02002 	movle	r2, #2	; 0x2
        362158:	e590e1ec 	ldr	lr, [r0, #492]
        36215c:	e08e4082 	add	r4, lr, r2, lsl #1
        362160:	e590c230 	ldr	ip, [r0, #560]
        362164:	e08c5082 	add	r5, ip, r2, lsl #1
        362168:	e1a0c002 	mov	ip, r2
        36216c:	e1520001 	cmp	r2, r1
        362170:	aa00000c 	bge	3621a8 <MergeVarResults(xrcm_type *)+0x2b0>
        362174:	e5957000 	ldr	r7, [r5]
        362178:	e1a07847 	mov	r7, r7, asr #16
        36217c:	e2855002 	add	r5, r5, #2	; 0x2
        362180:	e5946000 	ldr	r6, [r4]
        362184:	e1a06846 	mov	r6, r6, asr #16
        362188:	e2844002 	add	r4, r4, #2	; 0x2
        36218c:	e0676106 	rsb	r6, r7, r6, lsl #2
        362190:	e1560003 	cmp	r6, r3
        362194:	a1a03006 	movge	r3, r6
        362198:	a1a0200c 	movge	r2, ip
        36219c:	e28cc001 	add	ip, ip, #1	; 0x1
        3621a0:	e15c0001 	cmp	ip, r1
        3621a4:	bafffff2 	blt	362174 <MergeVarResults(xrcm_type *)+0x27c>
        3621a8:	e58021d4 	str	r2, [r0, #468]
        3621ac:	e58031d0 	str	r3, [r0, #464]
        3621b0:	e79e2082 	ldr	r2, [lr, r2, lsl #1]
        3621b4:	e1a02842 	mov	r2, r2, asr #16
        3621b8:	e58021cc 	str	r2, [r0, #460]
        3621bc:	e5902140 	ldr	r2, [r0, #320]
        3621c0:	e1320001 	teq	r2, r1
        3621c4:	13a01000 	movne	r1, #0	; 0x0
        3621c8:	008e1081 	addeq	r1, lr, r1, lsl #1
        3621cc:	05111002 	ldreq	r1, [r1, -#2]
        3621d0:	01a01841 	moveq	r1, r1, asr #16
        3621d4:	e5a011d8 	str	r1, [r0, #472]!
        3621d8:	e3a00000 	mov	r0, #0	; 0x0
        3621dc:	e28dd00c 	add	sp, sp, #12	; 0xc
        3621e0:	e8bd87f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
    */
}

/**
 * Symbol: modemRspParseTable
 * Address: 003701a4
 */
void globals::modemRspParseTable() {
    /*
        3701a4:	0036fd7c 	eoreqs	pc, r6, ip, ror sp
        3701a8:	00020000 	andeq	r0, r2, r0
        3701ac:	00000000 	andeq	r0, r0, r0
        3701b0:	0036fddc 	ldreqsb	pc, [r6], -ip
        3701b4:	00080000 	andeq	r0, r8, r0
        3701b8:	00000011 	andeq	r0, r0, r1, lsl r0
        3701bc:	0036fd80 	eoreqs	pc, r6, r0, lsl #27
        3701c0:	00070000 	andeq	r0, r7, r0
        3701c4:	00000001 	andeq	r0, r0, r1
        3701c8:	0036fd88 	eoreqs	pc, r6, r8, lsl #27
        3701cc:	00040000 	andeq	r0, r4, r0
        3701d0:	00000002 	andeq	r0, r0, r2
        3701d4:	0036fd90 	mlaeqs	r6, r0, sp, pc
        3701d8:	000a0000 	andeq	r0, sl, r0
        3701dc:	00000003 	andeq	r0, r0, r3
        3701e0:	0036fd9c 	mlaeqs	r6, ip, sp, pc
        3701e4:	00050000 	andeq	r0, r5, r0
        3701e8:	00000004 	andeq	r0, r0, r4
        3701ec:	0036fda4 	eoreqs	pc, r6, r4, lsr #27
        3701f0:	000b0000 	andeq	r0, fp, r0
        3701f4:	00000006 	andeq	r0, r0, r6
        3701f8:	0036fdb0 	ldreqh	pc, [r6], -r0
        3701fc:	00040000 	andeq	r0, r4, r0
        370200:	00000007 	andeq	r0, r0, r7
        370204:	0036fdb8 	ldreqh	pc, [r6], -r8
        370208:	00090000 	andeq	r0, r9, r0
        37020c:	00000008 	andeq	r0, r0, r8
        370210:	0036fdc4 	eoreqs	pc, r6, r4, asr #27
        370214:	00080000 	andeq	r0, r8, r0
        370218:	00000010 	andeq	r0, r0, r0, lsl r0
        37021c:	0036fdd0 	ldreqsb	pc, [r6], -r0
        370220:	00040000 	andeq	r0, r4, r0
        370224:	0000000d 	andeq	r0, r0, sp
        370228:	0036fdd8 	ldreqsb	pc, [r6], -r8
        37022c:	00030000 	andeq	r0, r3, r0
        370230:	0000000f 	andeq	r0, r0, pc
        370234:	0036fdec 	eoreqs	pc, r6, ip, ror #27
        370238:	00060000 	andeq	r0, r6, r0
        37023c:	00000013 	andeq	r0, r0, r3, lsl r0
        370240:	0036fdf4 	ldreqsh	pc, [r6], -r4
        370244:	00050000 	andeq	r0, r5, r0
        370248:	00000012 	andeq	r0, r0, r2, lsl r0
        37024c:	0036fdfc 	ldreqsh	pc, [r6], -ip
        370250:	00050000 	andeq	r0, r5, r0
        370254:	00000014 	andeq	r0, r0, r4, lsl r0
        370258:	0036fe04 	eoreqs	pc, r6, r4, lsl #28
        37025c:	00060000 	andeq	r0, r6, r0
        370260:	00000015 	andeq	r0, r0, r5, lsl r0
        370264:	0036fe0c 	eoreqs	pc, r6, ip, lsl #28
        370268:	00060000 	andeq	r0, r6, r0
        37026c:	00000016 	andeq	r0, r0, r6, lsl r0
        370270:	0036fe14 	eoreqs	pc, r6, r4, lsl lr
        370274:	00060000 	andeq	r0, r6, r0
        370278:	00000017 	andeq	r0, r0, r7, lsl r0
        37027c:	0036fe1c 	eoreqs	pc, r6, ip, lsl lr
        370280:	00060000 	andeq	r0, r6, r0
        370284:	00000018 	andeq	r0, r0, r8, lsl r0
        370288:	0036fe24 	eoreqs	pc, r6, r4, lsr #28
        37028c:	00050000 	andeq	r0, r5, r0
        370290:	00000019 	andeq	r0, r0, r9, lsl r0
        370294:	0036fe2c 	eoreqs	pc, r6, ip, lsr #28
        370298:	00060000 	andeq	r0, r6, r0
        37029c:	0000001a 	andeq	r0, r0, sl, lsl r0
        3702a0:	0036fe34 	eoreqs	pc, r6, r4, lsr lr
        3702a4:	00050000 	andeq	r0, r5, r0
        3702a8:	0000001b 	andeq	r0, r0, fp, lsl r0
        3702ac:	0036fe3c 	eoreqs	pc, r6, ip, lsr lr
        3702b0:	00050000 	andeq	r0, r5, r0
        3702b4:	0000001c 	andeq	r0, r0, ip, lsl r0
        3702b8:	0036fe44 	eoreqs	pc, r6, r4, asr #28
        3702bc:	00060000 	andeq	r0, r6, r0
        3702c0:	0000001f 	andeq	r0, r0, pc, lsl r0
        3702c4:	0036fe4c 	eoreqs	pc, r6, ip, asr #28
        3702c8:	00060000 	andeq	r0, r6, r0
        3702cc:	00000020 	andeq	r0, r0, r0, lsr #32
        3702d0:	0036fe54 	eoreqs	pc, r6, r4, asr lr
        3702d4:	00060000 	andeq	r0, r6, r0
        3702d8:	00000021 	andeq	r0, r0, r1, lsr #32
        3702dc:	0036fe5c 	eoreqs	pc, r6, ip, asr lr
        3702e0:	00060000 	andeq	r0, r6, r0
        3702e4:	00000022 	andeq	r0, r0, r2, lsr #32
        3702e8:	0036fe64 	eoreqs	pc, r6, r4, ror #28
        3702ec:	00060000 	andeq	r0, r6, r0
        3702f0:	00000023 	andeq	r0, r0, r3, lsr #32
        3702f4:	0036fe6c 	eoreqs	pc, r6, ip, ror #28
        3702f8:	00060000 	andeq	r0, r6, r0
        3702fc:	00000024 	andeq	r0, r0, r4, lsr #32
        370300:	0036fe74 	eoreqs	pc, r6, r4, ror lr
        370304:	00060000 	andeq	r0, r6, r0
        370308:	00000025 	andeq	r0, r0, r5, lsr #32
        37030c:	0036fe7c 	eoreqs	pc, r6, ip, ror lr
        370310:	00060000 	andeq	r0, r6, r0
        370314:	00000027 	andeq	r0, r0, r7, lsr #32
        370318:	0036fe84 	eoreqs	pc, r6, r4, lsl #29
        37031c:	00070000 	andeq	r0, r7, r0
        370320:	00000028 	andeq	r0, r0, r8, lsr #32
        370324:	0036fe8c 	eoreqs	pc, r6, ip, lsl #29
        370328:	00040000 	andeq	r0, r4, r0
        37032c:	00000029 	andeq	r0, r0, r9, lsr #32
        370330:	0036fe94 	mlaeqs	r6, r4, lr, pc
        370334:	00040000 	andeq	r0, r4, r0
        370338:	0000002a 	andeq	r0, r0, sl, lsr #32
        37033c:	0036fe9c 	mlaeqs	r6, ip, lr, pc
        370340:	00040000 	andeq	r0, r4, r0
        370344:	0000002b 	andeq	r0, r0, fp, lsr #32
        370348:	0036fea4 	eoreqs	pc, r6, r4, lsr #29
        37034c:	00050000 	andeq	r0, r5, r0
        370350:	0000002c 	andeq	r0, r0, ip, lsr #32
        370354:	0036feac 	eoreqs	pc, r6, ip, lsr #29
        370358:	00050000 	andeq	r0, r5, r0
        37035c:	0000002d 	andeq	r0, r0, sp, lsr #32
        370360:	0036feb4 	ldreqh	pc, [r6], -r4
        370364:	00050000 	andeq	r0, r5, r0
        370368:	0000002e 	andeq	r0, r0, lr, lsr #32
        37036c:	0036febc 	ldreqh	pc, [r6], -ip
        370370:	00050000 	andeq	r0, r5, r0
        370374:	0000002f 	andeq	r0, r0, pc, lsr #32
        370378:	0036fec4 	eoreqs	pc, r6, r4, asr #29
        37037c:	00040000 	andeq	r0, r4, r0
        370380:	00000030 	andeq	r0, r0, r0, lsr r0
        370384:	0036fecc 	eoreqs	pc, r6, ip, asr #29
        370388:	00050000 	andeq	r0, r5, r0
        37038c:	00000031 	andeq	r0, r0, r1, lsr r0
        370390:	0036fed4 	ldreqsb	pc, [r6], -r4
        370394:	00050000 	andeq	r0, r5, r0
        370398:	00000032 	andeq	r0, r0, r2, lsr r0
        37039c:	0036fedc 	ldreqsb	pc, [r6], -ip
        3703a0:	00040000 	andeq	r0, r4, r0
        3703a4:	00000033 	andeq	r0, r0, r3, lsr r0
        3703a8:	0036fee4 	eoreqs	pc, r6, r4, ror #29
        3703ac:	00050000 	andeq	r0, r5, r0
        3703b0:	00000034 	andeq	r0, r0, r4, lsr r0
        3703b4:	0036feec 	eoreqs	pc, r6, ip, ror #29
        3703b8:	00050000 	andeq	r0, r5, r0
        3703bc:	00000035 	andeq	r0, r0, r5, lsr r0
        3703c0:	0036fef4 	ldreqsh	pc, [r6], -r4
        3703c4:	00050000 	andeq	r0, r5, r0
        3703c8:	00000036 	andeq	r0, r0, r6, lsr r0
        3703cc:	0036fefc 	ldreqsh	pc, [r6], -ip
        3703d0:	00050000 	andeq	r0, r5, r0
        3703d4:	00000037 	andeq	r0, r0, r7, lsr r0
        3703d8:	0036ff04 	eoreqs	pc, r6, r4, lsl #30
        3703dc:	00040000 	andeq	r0, r4, r0
        3703e0:	00000038 	andeq	r0, r0, r8, lsr r0
        3703e4:	0036ff0c 	eoreqs	pc, r6, ip, lsl #30
        3703e8:	00040000 	andeq	r0, r4, r0
        3703ec:	00000039 	andeq	r0, r0, r9, lsr r0
        3703f0:	0036ff14 	eoreqs	pc, r6, r4, lsl pc
        3703f4:	00040000 	andeq	r0, r4, r0
        3703f8:	0000003a 	andeq	r0, r0, sl, lsr r0
    */
}

/**
 * Symbol: maxA_H_end
 * Address: 00374b5c
 */
void globals::maxA_H_end() {
    /*
        374b5c:	0037fffe 	ldreqsh	pc, [r7], -lr
        374b60:	fffefffe 	swinv	0x00fefffe
        374b64:	fffefffe 	swinv	0x00fefffe
        374b68:	fffefffe 	swinv	0x00fefffe
        374b6c:	fffefffe 	swinv	0x00fefffe
        374b70:	00370037 	eoreqs	r0, r7, r7, lsr r0
        374b74:	fffefffe 	swinv	0x00fefffe
        374b78:	fffefffe 	swinv	0x00fefffe
        374b7c:	fffefffe 	swinv	0x00fefffe
        374b80:	fffefffe 	swinv	0x00fefffe
        374b84:	00370037 	eoreqs	r0, r7, r7, lsr r0
        374b88:	0037fffe 	ldreqsh	pc, [r7], -lr
        374b8c:	fffefffe 	swinv	0x00fefffe
        374b90:	fffefffe 	swinv	0x00fefffe
        374b94:	fffefffe 	swinv	0x00fefffe
        374b98:	00370037 	eoreqs	r0, r7, r7, lsr r0
        374b9c:	0037002d 	eoreqs	r0, r7, sp, lsr #32
        374ba0:	fffefffe 	swinv	0x00fefffe
        374ba4:	fffefffe 	swinv	0x00fefffe
        374ba8:	fffefffe 	swinv	0x00fefffe
        374bac:	002d002d 	eoreq	r0, sp, sp, lsr #32
        374bb0:	0037002d 	eoreqs	r0, r7, sp, lsr #32
        374bb4:	0032fffe 	ldreqsh	pc, [r2], -lr
        374bb8:	fffefffe 	swinv	0x00fefffe
        374bbc:	fffefffe 	swinv	0x00fefffe
        374bc0:	002d002d 	eoreq	r0, sp, sp, lsr #32
        374bc4:	002d0028 	eoreq	r0, sp, r8, lsr #32
        374bc8:	00320037 	eoreqs	r0, r2, r7, lsr r0
        374bcc:	fffefffe 	swinv	0x00fefffe
        374bd0:	fffefffe 	swinv	0x00fefffe
        374bd4:	0019002d 	andeqs	r0, r9, sp, lsr #32
        374bd8:	002d0028 	eoreq	r0, sp, r8, lsr #32
        374bdc:	002d003a 	eoreq	r0, sp, sl, lsr r0
        374be0:	003cfffe 	ldreqsh	pc, [ip], -lr
        374be4:	fffefffe 	swinv	0x00fefffe
        374be8:	00190019 	andeqs	r0, r9, r9, lsl r0
        374bec:	002d002d 	eoreq	r0, sp, sp, lsr #32
        374bf0:	002d0037 	eoreq	r0, sp, r7, lsr r0
        374bf4:	00410044 	subeq	r0, r1, r4, asr #32
        374bf8:	fffefffe 	swinv	0x00fefffe
        374bfc:	00160019 	andeqs	r0, r6, r9, lsl r0
        374c00:	00190037 	andeqs	r0, r9, r7, lsr r0
        374c04:	002d002d 	eoreq	r0, sp, sp, lsr #32
        374c08:	00440049 	subeq	r0, r4, r9, asr #32
        374c0c:	0049fffe 	streqd	pc, [r9], -#254
        374c10:	00160016 	andeqs	r0, r6, r6, lsl r0
        374c14:	00190019 	andeqs	r0, r9, r9, lsl r0
        374c18:	002d002d 	eoreq	r0, sp, sp, lsr #32
        374c1c:	002d0049 	eoreq	r0, sp, r9, asr #32
        374c20:	004b004b 	subeq	r0, fp, fp, asr #32
    */
}

/**
 * Symbol: maxCR_H_end
 * Address: 00374c24
 */
void globals::maxCR_H_end() {
    /*
        374c24:	0014fffe 	ldreqsh	pc, [r4], -lr
        374c28:	fffefffe 	swinv	0x00fefffe
        374c2c:	fffefffe 	swinv	0x00fefffe
        374c30:	fffefffe 	swinv	0x00fefffe
        374c34:	fffefffe 	swinv	0x00fefffe
        374c38:	00140014 	andeqs	r0, r4, r4, lsl r0
        374c3c:	fffefffe 	swinv	0x00fefffe
        374c40:	fffefffe 	swinv	0x00fefffe
        374c44:	fffefffe 	swinv	0x00fefffe
        374c48:	fffefffe 	swinv	0x00fefffe
        374c4c:	00140014 	andeqs	r0, r4, r4, lsl r0
        374c50:	0014fffe 	ldreqsh	pc, [r4], -lr
        374c54:	fffefffe 	swinv	0x00fefffe
        374c58:	fffefffe 	swinv	0x00fefffe
        374c5c:	fffefffe 	swinv	0x00fefffe
        374c60:	00120014 	andeqs	r0, r2, r4, lsl r0
        374c64:	00140014 	andeqs	r0, r4, r4, lsl r0
        374c68:	fffefffe 	swinv	0x00fefffe
        374c6c:	fffefffe 	swinv	0x00fefffe
        374c70:	fffefffe 	swinv	0x00fefffe
        374c74:	000f0010 	andeq	r0, pc, r0, lsl r0
        374c78:	00140014 	andeqs	r0, r4, r4, lsl r0
        374c7c:	0014fffe 	ldreqsh	pc, [r4], -lr
        374c80:	fffefffe 	swinv	0x00fefffe
        374c84:	fffefffe 	swinv	0x00fefffe
        374c88:	0008000a 	andeq	r0, r8, sl
        374c8c:	000c0010 	andeq	r0, ip, r0, lsl r0
        374c90:	00120014 	andeqs	r0, r2, r4, lsl r0
        374c94:	fffefffe 	swinv	0x00fefffe
        374c98:	fffefffe 	swinv	0x00fefffe
        374c9c:	00040005 	andeq	r0, r4, r5
        374ca0:	0006000a 	andeq	r0, r6, sl
        374ca4:	000e0012 	andeq	r0, lr, r2, lsl r0
        374ca8:	0014fffe 	ldreqsh	pc, [r4], -lr
        374cac:	fffefffe 	swinv	0x00fefffe
        374cb0:	80010002 	andhi	r0, r1, r2
        374cb4:	00030005 	andeq	r0, r3, r5
        374cb8:	0008000e 	andeq	r0, r8, lr
        374cbc:	00140014 	andeqs	r0, r4, r4, lsl r0
        374cc0:	fffefffe 	swinv	0x00fefffe
        374cc4:	80018001 	andhi	r8, r1, r1
        374cc8:	00010003 	andeq	r0, r1, r3
        374ccc:	0006000c 	andeq	r0, r6, ip
        374cd0:	00120014 	andeqs	r0, r2, r4, lsl r0
        374cd4:	0018fffe 	ldreqsh	pc, [r8], -lr
        374cd8:	80018001 	andhi	r8, r1, r1
        374cdc:	80018001 	andhi	r8, r1, r1
        374ce0:	0004000a 	andeq	r0, r4, sl
        374ce4:	00100014 	andeqs	r0, r0, r4, lsl r0
        374ce8:	00160018 	andeqs	r0, r6, r8, lsl r0
    */
}

/**
 * Symbol: minL_H_end
 * Address: 00374cec
 */
void globals::minL_H_end() {
    /*
        374cec:	001cfffe 	ldreqsh	pc, [ip], -lr
        374cf0:	fffefffe 	swinv	0x00fefffe
        374cf4:	fffefffe 	swinv	0x00fefffe
        374cf8:	fffefffe 	swinv	0x00fefffe
        374cfc:	fffefffe 	swinv	0x00fefffe
        374d00:	001c001c 	andeqs	r0, ip, ip, lsl r0
        374d04:	fffefffe 	swinv	0x00fefffe
        374d08:	fffefffe 	swinv	0x00fefffe
        374d0c:	fffefffe 	swinv	0x00fefffe
        374d10:	fffefffe 	swinv	0x00fefffe
        374d14:	001c001c 	andeqs	r0, ip, ip, lsl r0
        374d18:	001cfffe 	ldreqsh	pc, [ip], -lr
        374d1c:	fffefffe 	swinv	0x00fefffe
        374d20:	fffefffe 	swinv	0x00fefffe
        374d24:	fffefffe 	swinv	0x00fefffe
        374d28:	001c001c 	andeqs	r0, ip, ip, lsl r0
        374d2c:	001c0019 	andeqs	r0, ip, r9, lsl r0
        374d30:	fffefffe 	swinv	0x00fefffe
        374d34:	fffefffe 	swinv	0x00fefffe
        374d38:	fffefffe 	swinv	0x00fefffe
        374d3c:	000f000f 	andeq	r0, pc, pc
        374d40:	000f000f 	andeq	r0, pc, pc
        374d44:	000ffffe 	streqd	pc, [pc], -lr
        374d48:	fffefffe 	swinv	0x00fefffe
        374d4c:	fffefffe 	swinv	0x00fefffe
        374d50:	000f000f 	andeq	r0, pc, pc
        374d54:	000f000f 	andeq	r0, pc, pc
        374d58:	000c000c 	andeq	r0, ip, ip
        374d5c:	fffefffe 	swinv	0x00fefffe
        374d60:	fffefffe 	swinv	0x00fefffe
        374d64:	000f000f 	andeq	r0, pc, pc
        374d68:	000f000f 	andeq	r0, pc, pc
        374d6c:	000f000c 	andeq	r0, pc, ip
        374d70:	000cfffe 	streqd	pc, [ip], -lr
        374d74:	fffefffe 	swinv	0x00fefffe
        374d78:	00190019 	andeqs	r0, r9, r9, lsl r0
        374d7c:	000f000f 	andeq	r0, pc, pc
        374d80:	000f000f 	andeq	r0, pc, pc
        374d84:	000f000f 	andeq	r0, pc, pc
        374d88:	fffefffe 	swinv	0x00fefffe
        374d8c:	00160019 	andeqs	r0, r6, r9, lsl r0
        374d90:	0019000f 	andeqs	r0, r9, pc
        374d94:	000f000f 	andeq	r0, pc, pc
        374d98:	000f0019 	andeq	r0, pc, r9, lsl r0
        374d9c:	0019fffe 	ldreqsh	pc, [r9], -lr
        374da0:	00160016 	andeqs	r0, r6, r6, lsl r0
        374da4:	00190019 	andeqs	r0, r9, r9, lsl r0
        374da8:	000f000f 	andeq	r0, pc, pc
        374dac:	000f0019 	andeq	r0, pc, r9, lsl r0
        374db0:	00200020 	eoreq	r0, r0, r0, lsr #32
    */
}

/**
 * Symbol: maxX_H_end
 * Address: 00374db4
 */
void globals::maxX_H_end() {
    /*
        374db4:	0023fffe 	streqd	pc, [r3], -lr
        374db8:	fffefffe 	swinv	0x00fefffe
        374dbc:	fffefffe 	swinv	0x00fefffe
        374dc0:	fffefffe 	swinv	0x00fefffe
        374dc4:	fffefffe 	swinv	0x00fefffe
        374dc8:	00230023 	eoreq	r0, r3, r3, lsr #32
        374dcc:	fffefffe 	swinv	0x00fefffe
        374dd0:	fffefffe 	swinv	0x00fefffe
        374dd4:	fffefffe 	swinv	0x00fefffe
        374dd8:	fffefffe 	swinv	0x00fefffe
        374ddc:	00230023 	eoreq	r0, r3, r3, lsr #32
        374de0:	0020fffe 	streqd	pc, [r0], -lr
        374de4:	fffefffe 	swinv	0x00fefffe
        374de8:	fffefffe 	swinv	0x00fefffe
        374dec:	fffefffe 	swinv	0x00fefffe
        374df0:	00200020 	eoreq	r0, r0, r0, lsr #32
        374df4:	00200020 	eoreq	r0, r0, r0, lsr #32
        374df8:	fffefffe 	swinv	0x00fefffe
        374dfc:	fffefffe 	swinv	0x00fefffe
        374e00:	fffefffe 	swinv	0x00fefffe
        374e04:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e08:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e0c:	0014fffe 	ldreqsh	pc, [r4], -lr
        374e10:	fffefffe 	swinv	0x00fefffe
        374e14:	fffefffe 	swinv	0x00fefffe
        374e18:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e1c:	001e0014 	andeqs	r0, lr, r4, lsl r0
        374e20:	00120012 	andeqs	r0, r2, r2, lsl r0
        374e24:	fffefffe 	swinv	0x00fefffe
        374e28:	fffefffe 	swinv	0x00fefffe
        374e2c:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e30:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e34:	00140019 	andeqs	r0, r4, r9, lsl r0
        374e38:	0019fffe 	ldreqsh	pc, [r9], -lr
        374e3c:	fffefffe 	swinv	0x00fefffe
        374e40:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e44:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e48:	001e0019 	andeqs	r0, lr, r9, lsl r0
        374e4c:	001e002d 	andeqs	r0, lr, sp, lsr #32
        374e50:	fffefffe 	swinv	0x00fefffe
        374e54:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e58:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e5c:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e60:	00230041 	eoreq	r0, r3, r1, asr #32
        374e64:	0044fffe 	streqd	pc, [r4], -#254
        374e68:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e6c:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e70:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e74:	001e0044 	andeqs	r0, lr, r4, asr #32
        374e78:	0046005a 	subeq	r0, r6, sl, asr r0
    */
}

/**
 * Symbol: maxY_H_end
 * Address: 00374e7c
 */
void globals::maxY_H_end() {
    /*
        374e7c:	001efffe 	ldreqsh	pc, [lr], -lr
        374e80:	fffefffe 	swinv	0x00fefffe
        374e84:	fffefffe 	swinv	0x00fefffe
        374e88:	fffefffe 	swinv	0x00fefffe
        374e8c:	fffefffe 	swinv	0x00fefffe
        374e90:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374e94:	fffefffe 	swinv	0x00fefffe
        374e98:	fffefffe 	swinv	0x00fefffe
        374e9c:	fffefffe 	swinv	0x00fefffe
        374ea0:	fffefffe 	swinv	0x00fefffe
        374ea4:	001e001e 	andeqs	r0, lr, lr, lsl r0
        374ea8:	001efffe 	ldreqsh	pc, [lr], -lr
        374eac:	fffefffe 	swinv	0x00fefffe
        374eb0:	fffefffe 	swinv	0x00fefffe
        374eb4:	fffefffe 	swinv	0x00fefffe
        374eb8:	00200020 	eoreq	r0, r0, r0, lsr #32
        374ebc:	00190019 	andeqs	r0, r9, r9, lsl r0
        374ec0:	fffefffe 	swinv	0x00fefffe
        374ec4:	fffefffe 	swinv	0x00fefffe
        374ec8:	fffefffe 	swinv	0x00fefffe
        374ecc:	00230023 	eoreq	r0, r3, r3, lsr #32
        374ed0:	00160016 	andeqs	r0, r6, r6, lsl r0
        374ed4:	0016fffe 	ldreqsh	pc, [r6], -lr
        374ed8:	fffefffe 	swinv	0x00fefffe
        374edc:	fffefffe 	swinv	0x00fefffe
        374ee0:	00230023 	eoreq	r0, r3, r3, lsr #32
        374ee4:	00230016 	eoreq	r0, r3, r6, lsl r0
        374ee8:	00160016 	andeqs	r0, r6, r6, lsl r0
        374eec:	fffefffe 	swinv	0x00fefffe
        374ef0:	fffefffe 	swinv	0x00fefffe
        374ef4:	00230023 	eoreq	r0, r3, r3, lsr #32
        374ef8:	00230023 	eoreq	r0, r3, r3, lsr #32
        374efc:	0019001c 	andeqs	r0, r9, ip, lsl r0
        374f00:	0020fffe 	streqd	pc, [r0], -lr
        374f04:	fffefffe 	swinv	0x00fefffe
        374f08:	00230023 	eoreq	r0, r3, r3, lsr #32
        374f0c:	00230023 	eoreq	r0, r3, r3, lsr #32
        374f10:	00230020 	eoreq	r0, r3, r0, lsr #32
        374f14:	0023002b 	eoreq	r0, r3, fp, lsr #32
        374f18:	fffefffe 	swinv	0x00fefffe
        374f1c:	00230023 	eoreq	r0, r3, r3, lsr #32
        374f20:	00230023 	eoreq	r0, r3, r3, lsr #32
        374f24:	00230023 	eoreq	r0, r3, r3, lsr #32
        374f28:	00280032 	eoreq	r0, r8, r2, lsr r0
        374f2c:	003cfffe 	ldreqsh	pc, [ip], -lr
        374f30:	00230023 	eoreq	r0, r3, r3, lsr #32
        374f34:	00230023 	eoreq	r0, r3, r3, lsr #32
        374f38:	00230023 	eoreq	r0, r3, r3, lsr #32
        374f3c:	0023003c 	eoreq	r0, r3, ip, lsr r0
        374f40:	00550064 	subeqs	r0, r5, r4, rrx
    */
}

/**
 * Symbol: math_charset
 * Address: 00375094
 */
void globals::math_charset() {
    /*
        375094:	2b2d3d28 	blcs	ec453c <ROM$$Size+0x7a48f0>
        375098:	2924252a 	stmcsdb	r4!, {r1, r3, r5, r8, sl, sp}
        37509c:	2f2e2c00 	swics	0x002e2c00
    */
}

/**
 * Symbol: mboxList
 * Address: 00376800
 */
void globals::mboxList() {
    /*
        376800:	6163656d 	cmnvs	r3, sp, ror #10
        376804:	6e6f7273 	mcrvs	2, 3, r7, cr15, cr3, {3}
        376808:	75777678 	ldrvcb	r7, [r7, -#1656]!
        37680c:	8183a100 	orrhi	sl, r3, r0, lsl #2
    */
}

/**
 * Symbol: myCalText11
 * Address: 0037a70c
 */
void globals::myCalText11() {
    /*
        37a70c:	596f7572 	stmpldb	pc!, {r1, r4, r5, r6, r8, sl, ip, sp, lr}^
        37a710:	204e6577 	subcs	r6, lr, r7, ror r5
        37a714:	746f6e20 	strvcbt	r6, [pc], #e20	; 37a71c <myCalText11+0x10>
        37a718:	64657669 	strvsbt	r7, [r5], -#1641
        37a71c:	6365206e 	cmnvs	r5, #110	; 0x6e
        37a720:	65656473 	strvsb	r6, [r5, -#1139]!
        37a724:	20746f20 	rsbcss	r6, r4, r0, lsr #30
        37a728:	62652063 	rsbvs	r2, r5, #99	; 0x63
        37a72c:	616c6962 	cmnvs	ip, r2, ror #18
        37a730:	72617465 	rsbvc	r7, r1, #1694498816	; 0x65000000
        37a734:	64000000 	strvs	r0, [r0]
    */
}

/**
 * Symbol: myCalText12
 * Address: 0037a738
 */
void globals::myCalText12() {
    /*
        37a738:	746f2074 	strvcbt	r2, [pc], #74	; 37a740 <myCalText12+0x8>
        37a73c:	68652077 	stmvsda	r5!, {r0, r1, r2, r4, r5, r6, sp}^
        37a740:	61792079 	cmnvs	r9, r9, ror r0
        37a744:	6f75206e 	swivs	0x0075206e
        37a748:	61747572 	cmnvs	r4, r2, ror r5
        37a74c:	616c6c79 	cmnvs	ip, r9, ror ip
        37a750:	20686f6c 	rsbcs	r6, r8, ip, ror #30
        37a754:	64206120 	strvst	r6, [r0], -#288
        37a758:	70656e2e 	rsbvc	r6, r5, lr, lsr #28
        37a75c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: myCalText13
 * Address: 0037a760
 */
void globals::myCalText13() {
    /*
        37a760:	486f6c64 	stmmida	pc!, {r2, r5, r6, sl, fp, sp, lr}^
        37a764:	20746865 	rsbcss	r6, r4, r5, ror #16
        37a768:	204e6577 	subcs	r6, lr, r7, ror r5
        37a76c:	746f6e20 	strvcbt	r6, [pc], #e20	; 37a774 <myCalText13+0x14>
        37a770:	70656e20 	rsbvc	r6, r5, r0, lsr #28
        37a774:	6f6e2074 	swivs	0x006e2074
        37a778:	68652063 	stmvsda	r5!, {r0, r1, r5, r6, sp}^
        37a77c:	656e7465 	strvsb	r7, [lr, -#1125]!
        37a780:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

/**
 * Symbol: myCalText14
 * Address: 0037a784
 */
void globals::myCalText14() {
    /*
        37a784:	6f662074 	swivs	0x00662074
        37a788:	68652058 	stmvsda	r5!, {r3, r4, r6, sp}^
        37a78c:	20696e20 	rsbcs	r6, r9, r0, lsr #28
        37a790:	74686520 	strvcbt	r6, [r8], -#1312
        37a794:	636f726e 	cmnvs	pc, #-536870906	; 0xe0000006
        37a798:	65722061 	ldrvsb	r2, [r2, -#97]!
        37a79c:	626f7665 	rsbvs	r7, pc, #105906176	; 0x6500000
        37a7a0:	20756e74 	rsbcss	r6, r5, r4, ror lr
        37a7a4:	696c2069 	stmvsdb	ip!, {r0, r3, r5, r6, sp}^
        37a7a8:	74000000 	strvc	r0, [r0]
    */
}

/**
 * Symbol: myCalText15
 * Address: 0037a7ac
 */
void globals::myCalText15() {
    /*
        37a7ac:	6461726b 	strvsbt	r7, [r1], -#619
        37a7b0:	656e7320 	strvsb	r7, [lr, -#800]!
        37a7b4:	616e6420 	cmnvs	lr, r0, lsr #8
        37a7b8:	7468656e 	strvcbt	r6, [r8], -#1390
        37a7bc:	206c6966 	rsbcs	r6, ip, r6, ror #18
        37a7c0:	74207468 	strvct	r7, [r0], -#1128
        37a7c4:	65207065 	strvs	r7, [r0, -#101]!
        37a7c8:	6e2e0000 	cdpvs	0, 2, cr0, cr14, cr0, {0}
    */
}

/**
 * Symbol: myCalText21
 * Address: 0037a7cc
 */
void globals::myCalText21() {
    /*
        37a7cc:	4e6f7720 	cdpmi	7, 6, cr7, cr15, cr0, {1}
        37a7d0:	72657065 	rsbvc	r7, r5, #101	; 0x65
        37a7d4:	6174206f 	cmnvs	r4, pc, rrx
        37a7d8:	6e207468 	cdpvs	4, 2, cr7, cr0, cr8, {3}
        37a7dc:	65206365 	strvs	r6, [r0, -#869]!
        37a7e0:	6e746572 	mrcvs	5, 3, r6, cr4, cr2, {3}
        37a7e4:	206f6620 	rsbcs	r6, pc, r0, lsr #12
        37a7e8:	74686520 	strvcbt	r6, [r8], -#1312
        37a7ec:	58000000 	stmplda	r0, {}
    */
}

/**
 * Symbol: myCalText22
 * Address: 0037a7f0
 */
void globals::myCalText22() {
    /*
        37a7f0:	696e2074 	stmvsdb	lr!, {r2, r4, r5, r6, sp}^
        37a7f4:	68652063 	stmvsda	r5!, {r0, r1, r5, r6, sp}^
        37a7f8:	6f726e65 	swivs	0x00726e65
        37a7fc:	72206265 	eorvc	r6, r0, #1342177286	; 0x50000006
        37a800:	6c6f772e 	stcvsl	7, cr7, [pc], -#184
        37a804:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: myCalText31
 * Address: 0037a808
 */
void globals::myCalText31() {
    /*
        37a808:	546f2063 	strplbt	r2, [pc], #63	; 37a810 <myCalText31+0x8>
        37a80c:	6f6e6669 	swivs	0x006e6669
        37a810:	726d2074 	rsbvc	r2, sp, #116	; 0x74
        37a814:	68652070 	stmvsda	r5!, {r4, r5, r6, sp}^
        37a818:	656e2069 	strvsb	r2, [lr, -#105]!
        37a81c:	7320636f 	teqvc	r0, #-1140850687	; 0xbc000001
        37a820:	72726563 	rsbvcs	r6, r2, #415236096	; 0x18c00000
        37a824:	746c7900 	strvcbt	r7, [ip], -#2304
    */
}

/**
 * Symbol: myCalText32
 * Address: 0037a828
 */
void globals::myCalText32() {
    /*
        37a828:	616c6967 	cmnvs	ip, r7, ror #18
        37a82c:	6e65642c 	cdpvs	4, 6, cr6, cr5, cr12, {1}
        37a830:	20686f6c 	rsbcs	r6, r8, ip, ror #30
        37a834:	64207468 	strvst	r7, [r0], -#1128
        37a838:	65207065 	strvs	r7, [r0, -#101]!
        37a83c:	6e206f6e 	cdpvs	15, 2, cr6, cr0, cr14, {3}
        37a840:	20746865 	rsbcss	r6, r4, r5, ror #16
        37a844:	2063656e 	rsbcs	r6, r3, lr, ror #10
        37a848:	74657200 	strvcbt	r7, [r5], -#512
    */
}

/**
 * Symbol: myCalText33
 * Address: 0037a84c
 */
void globals::myCalText33() {
    /*
        37a84c:	6f662074 	swivs	0x00662074
        37a850:	68697320 	stmvsda	r9!, {r5, r8, r9, ip, sp, lr}^
        37a854:	6c617374 	stcvsl	3, cr7, [r1], -#464
        37a858:	20582e00 	subcss	r2, r8, r0, lsl #28
    */
}

/**
 * Symbol: memcpy
 * Address: 00382440
 */
void globals::memcpy() {
    /*
        382440:	e1510000 	cmp	r1, r0
        382444:	3a000090 	bcc	38268c <memcpy+0x24c>
        382448:	01a0f00e 	moveq	pc, lr
        38244c:	e92d4001 	stmdb	sp!, {r0, lr}
        382450:	e2522004 	subs	r2, r2, #4	; 0x4
        382454:	ba000020 	blt	3824dc <memcpy+0x9c>
        382458:	e210c003 	ands	ip, r0, #3	; 0x3
        38245c:	1a000028 	bne	382504 <memcpy+0xc4>
        382460:	e211c003 	ands	ip, r1, #3	; 0x3
        382464:	1a000032 	bne	382534 <memcpy+0xf4>
        382468:	e2522008 	subs	r2, r2, #8	; 0x8
        38246c:	ba000012 	blt	3824bc <memcpy+0x7c>
        382470:	e2522014 	subs	r2, r2, #20	; 0x14
        382474:	ba00000b 	blt	3824a8 <memcpy+0x68>
        382478:	e92d0010 	stmdb	sp!, {r4}
        38247c:	e8b15018 	ldmia	r1!, {r3, r4, ip, lr}
        382480:	e8a05018 	stmia	r0!, {r3, r4, ip, lr}
        382484:	e8b15018 	ldmia	r1!, {r3, r4, ip, lr}
        382488:	e8a05018 	stmia	r0!, {r3, r4, ip, lr}
        38248c:	e2522020 	subs	r2, r2, #32	; 0x20
        382490:	aafffff9 	bge	38247c <memcpy+0x3c>
        382494:	e3720010 	cmn	r2, #16	; 0x10
        382498:	a8b15018 	ldmgeia	r1!, {r3, r4, ip, lr}
        38249c:	a8a05018 	stmgeia	r0!, {r3, r4, ip, lr}
        3824a0:	a2422010 	subge	r2, r2, #16	; 0x10
        3824a4:	e8bd0010 	ldmia	sp!, {r4}
        3824a8:	e2922014 	adds	r2, r2, #20	; 0x14
        3824ac:	a8b15008 	ldmgeia	r1!, {r3, ip, lr}
        3824b0:	a8a05008 	stmgeia	r0!, {r3, ip, lr}
        3824b4:	a252200c 	subges	r2, r2, #12	; 0xc
        3824b8:	aafffffb 	bge	3824ac <memcpy+0x6c>
        3824bc:	e2922008 	adds	r2, r2, #8	; 0x8
        3824c0:	ba000005 	blt	3824dc <memcpy+0x9c>
        3824c4:	e2522004 	subs	r2, r2, #4	; 0x4
        3824c8:	b4913004 	ldrlt	r3, [r1], #4
        3824cc:	b4803004 	strlt	r3, [r0], #4
        3824d0:	a8b11008 	ldmgeia	r1!, {r3, ip}
        3824d4:	a8a01008 	stmgeia	r0!, {r3, ip}
        3824d8:	a2422004 	subge	r2, r2, #4	; 0x4
        3824dc:	e2922004 	adds	r2, r2, #4	; 0x4
        3824e0:	08bd8001 	ldmeqia	sp!, {r0, pc}
        3824e4:	e3520002 	cmp	r2, #2	; 0x2
        3824e8:	e4d13001 	ldrb	r3, [r1], #1
        3824ec:	e4c03001 	strb	r3, [r0], #1
        3824f0:	a4d13001 	ldrgeb	r3, [r1], #1
        3824f4:	a4c03001 	strgeb	r3, [r0], #1
        3824f8:	c4d13001 	ldrgtb	r3, [r1], #1
        3824fc:	c4c03001 	strgtb	r3, [r0], #1
        382500:	e8bd8001 	ldmia	sp!, {r0, pc}
        382504:	e26cc004 	rsb	ip, ip, #4	; 0x4
        382508:	e35c0002 	cmp	ip, #2	; 0x2
        38250c:	e4d13001 	ldrb	r3, [r1], #1
        382510:	e4c03001 	strb	r3, [r0], #1
        382514:	a4d13001 	ldrgeb	r3, [r1], #1
        382518:	a4c03001 	strgeb	r3, [r0], #1
        38251c:	c4d13001 	ldrgtb	r3, [r1], #1
        382520:	c4c03001 	strgtb	r3, [r0], #1
        382524:	e052200c 	subs	r2, r2, ip
        382528:	baffffeb 	blt	3824dc <memcpy+0x9c>
        38252c:	e211c003 	ands	ip, r1, #3	; 0x3
        382530:	0affffcc 	beq	382468 <memcpy+0x28>
        382534:	e3c11003 	bic	r1, r1, #3	; 0x3
        382538:	e491e004 	ldr	lr, [r1], #4
        38253c:	e35c0002 	cmp	ip, #2	; 0x2
        382540:	ca000036 	bgt	382620 <memcpy+0x1e0>
        382544:	0a00001a 	beq	3825b4 <memcpy+0x174>
        382548:	e352000c 	cmp	r2, #12	; 0xc
        38254c:	ba000010 	blt	382594 <memcpy+0x154>
        382550:	e242200c 	sub	r2, r2, #12	; 0xc
        382554:	e92d0030 	stmdb	sp!, {r4, r5}
        382558:	e1a0340e 	mov	r3, lr, lsl #8
        38255c:	e8b15030 	ldmia	r1!, {r4, r5, ip, lr}
        382560:	e1833c24 	orr	r3, r3, r4, lsr #24
        382564:	e1a04404 	mov	r4, r4, lsl #8
        382568:	e1844c25 	orr	r4, r4, r5, lsr #24
        38256c:	e1a05405 	mov	r5, r5, lsl #8
        382570:	e1855c2c 	orr	r5, r5, ip, lsr #24
        382574:	e1a0c40c 	mov	ip, ip, lsl #8
        382578:	e18ccc2e 	orr	ip, ip, lr, lsr #24
        38257c:	e8a01038 	stmia	r0!, {r3, r4, r5, ip}
        382580:	e2522010 	subs	r2, r2, #16	; 0x10
        382584:	aafffff3 	bge	382558 <memcpy+0x118>
        382588:	e8bd0030 	ldmia	sp!, {r4, r5}
        38258c:	e292200c 	adds	r2, r2, #12	; 0xc
        382590:	ba000005 	blt	3825ac <memcpy+0x16c>
        382594:	e1a0c40e 	mov	ip, lr, lsl #8
        382598:	e491e004 	ldr	lr, [r1], #4
        38259c:	e18ccc2e 	orr	ip, ip, lr, lsr #24
        3825a0:	e480c004 	str	ip, [r0], #4
        3825a4:	e2522004 	subs	r2, r2, #4	; 0x4
        3825a8:	aafffff9 	bge	382594 <memcpy+0x154>
        3825ac:	e2411003 	sub	r1, r1, #3	; 0x3
        3825b0:	eaffffc9 	b	3824dc <memcpy+0x9c>
        3825b4:	e352000c 	cmp	r2, #12	; 0xc
        3825b8:	ba000010 	blt	382600 <memcpy+0x1c0>
        3825bc:	e242200c 	sub	r2, r2, #12	; 0xc
        3825c0:	e92d0030 	stmdb	sp!, {r4, r5}
        3825c4:	e1a0380e 	mov	r3, lr, lsl #16
        3825c8:	e8b15030 	ldmia	r1!, {r4, r5, ip, lr}
        3825cc:	e1833824 	orr	r3, r3, r4, lsr #16
        3825d0:	e1a04804 	mov	r4, r4, lsl #16
        3825d4:	e1844825 	orr	r4, r4, r5, lsr #16
        3825d8:	e1a05805 	mov	r5, r5, lsl #16
        3825dc:	e185582c 	orr	r5, r5, ip, lsr #16
        3825e0:	e1a0c80c 	mov	ip, ip, lsl #16
        3825e4:	e18cc82e 	orr	ip, ip, lr, lsr #16
        3825e8:	e8a01038 	stmia	r0!, {r3, r4, r5, ip}
        3825ec:	e2522010 	subs	r2, r2, #16	; 0x10
        3825f0:	aafffff3 	bge	3825c4 <memcpy+0x184>
        3825f4:	e8bd0030 	ldmia	sp!, {r4, r5}
        3825f8:	e292200c 	adds	r2, r2, #12	; 0xc
        3825fc:	ba000005 	blt	382618 <memcpy+0x1d8>
        382600:	e1a0c80e 	mov	ip, lr, lsl #16
        382604:	e491e004 	ldr	lr, [r1], #4
        382608:	e18cc82e 	orr	ip, ip, lr, lsr #16
        38260c:	e480c004 	str	ip, [r0], #4
        382610:	e2522004 	subs	r2, r2, #4	; 0x4
        382614:	aafffff9 	bge	382600 <memcpy+0x1c0>
        382618:	e2411002 	sub	r1, r1, #2	; 0x2
        38261c:	eaffffae 	b	3824dc <memcpy+0x9c>
        382620:	e352000c 	cmp	r2, #12	; 0xc
        382624:	ba000010 	blt	38266c <memcpy+0x22c>
        382628:	e242200c 	sub	r2, r2, #12	; 0xc
        38262c:	e92d0030 	stmdb	sp!, {r4, r5}
        382630:	e1a03c0e 	mov	r3, lr, lsl #24
        382634:	e8b15030 	ldmia	r1!, {r4, r5, ip, lr}
        382638:	e1833424 	orr	r3, r3, r4, lsr #8
        38263c:	e1a04c04 	mov	r4, r4, lsl #24
        382640:	e1844425 	orr	r4, r4, r5, lsr #8
        382644:	e1a05c05 	mov	r5, r5, lsl #24
        382648:	e185542c 	orr	r5, r5, ip, lsr #8
        38264c:	e1a0cc0c 	mov	ip, ip, lsl #24
        382650:	e18cc42e 	orr	ip, ip, lr, lsr #8
        382654:	e8a01038 	stmia	r0!, {r3, r4, r5, ip}
        382658:	e2522010 	subs	r2, r2, #16	; 0x10
        38265c:	aafffff3 	bge	382630 <memcpy+0x1f0>
        382660:	e8bd0030 	ldmia	sp!, {r4, r5}
        382664:	e292200c 	adds	r2, r2, #12	; 0xc
        382668:	ba000005 	blt	382684 <memcpy+0x244>
        38266c:	e1a0cc0e 	mov	ip, lr, lsl #24
        382670:	e491e004 	ldr	lr, [r1], #4
        382674:	e18cc42e 	orr	ip, ip, lr, lsr #8
        382678:	e480c004 	str	ip, [r0], #4
        38267c:	e2522004 	subs	r2, r2, #4	; 0x4
        382680:	aafffff9 	bge	38266c <memcpy+0x22c>
        382684:	e2411001 	sub	r1, r1, #1	; 0x1
        382688:	eaffff93 	b	3824dc <memcpy+0x9c>
        38268c:	e0811002 	add	r1, r1, r2
        382690:	e0800002 	add	r0, r0, r2
        382694:	e2522004 	subs	r2, r2, #4	; 0x4
        382698:	ba00001f 	blt	38271c <memcpy+0x2dc>
        38269c:	e210c003 	ands	ip, r0, #3	; 0x3
        3826a0:	1a000027 	bne	382744 <memcpy+0x304>
        3826a4:	e211c003 	ands	ip, r1, #3	; 0x3
        3826a8:	1a000030 	bne	382770 <memcpy+0x330>
        3826ac:	e2522008 	subs	r2, r2, #8	; 0x8
        3826b0:	ba000011 	blt	3826fc <memcpy+0x2bc>
        3826b4:	e92d4010 	stmdb	sp!, {r4, lr}
        3826b8:	e2522014 	subs	r2, r2, #20	; 0x14
        3826bc:	ba000005 	blt	3826d8 <memcpy+0x298>
        3826c0:	e9315018 	ldmdb	r1!, {r3, r4, ip, lr}
        3826c4:	e9205018 	stmdb	r0!, {r3, r4, ip, lr}
        3826c8:	e9315018 	ldmdb	r1!, {r3, r4, ip, lr}
        3826cc:	e9205018 	stmdb	r0!, {r3, r4, ip, lr}
        3826d0:	e2522020 	subs	r2, r2, #32	; 0x20
        3826d4:	aafffff9 	bge	3826c0 <memcpy+0x280>
        3826d8:	e3720010 	cmn	r2, #16	; 0x10
        3826dc:	a9315018 	ldmgedb	r1!, {r3, r4, ip, lr}
        3826e0:	a9205018 	stmgedb	r0!, {r3, r4, ip, lr}
        3826e4:	a2422010 	subge	r2, r2, #16	; 0x10
        3826e8:	e2922014 	adds	r2, r2, #20	; 0x14
        3826ec:	a9315008 	ldmgedb	r1!, {r3, ip, lr}
        3826f0:	a9205008 	stmgedb	r0!, {r3, ip, lr}
        3826f4:	a242200c 	subge	r2, r2, #12	; 0xc
        3826f8:	e8bd4010 	ldmia	sp!, {r4, lr}
        3826fc:	e2922008 	adds	r2, r2, #8	; 0x8
        382700:	ba000005 	blt	38271c <memcpy+0x2dc>
        382704:	e2522004 	subs	r2, r2, #4	; 0x4
        382708:	b5313004 	ldrlt	r3, [r1, -#4]!
        38270c:	b5203004 	strlt	r3, [r0, -#4]!
        382710:	a9311008 	ldmgedb	r1!, {r3, ip}
        382714:	a9201008 	stmgedb	r0!, {r3, ip}
        382718:	a2422004 	subge	r2, r2, #4	; 0x4
        38271c:	e2922004 	adds	r2, r2, #4	; 0x4
        382720:	01a0f00e 	moveq	pc, lr
        382724:	e3520002 	cmp	r2, #2	; 0x2
        382728:	e5713001 	ldrb	r3, [r1, -#1]!
        38272c:	e5603001 	strb	r3, [r0, -#1]!
        382730:	a5713001 	ldrgeb	r3, [r1, -#1]!
        382734:	a5603001 	strgeb	r3, [r0, -#1]!
        382738:	c5713001 	ldrgtb	r3, [r1, -#1]!
        38273c:	c5603001 	strgtb	r3, [r0, -#1]!
        382740:	e1a0f00e 	mov	pc, lr
        382744:	e35c0002 	cmp	ip, #2	; 0x2
        382748:	e5713001 	ldrb	r3, [r1, -#1]!
        38274c:	e5603001 	strb	r3, [r0, -#1]!
        382750:	a5713001 	ldrgeb	r3, [r1, -#1]!
        382754:	a5603001 	strgeb	r3, [r0, -#1]!
        382758:	c5713001 	ldrgtb	r3, [r1, -#1]!
        38275c:	c5603001 	strgtb	r3, [r0, -#1]!
        382760:	e052200c 	subs	r2, r2, ip
        382764:	baffffec 	blt	38271c <memcpy+0x2dc>
        382768:	e211c003 	ands	ip, r1, #3	; 0x3
        38276c:	0affffce 	beq	3826ac <memcpy+0x26c>
        382770:	e3c11003 	bic	r1, r1, #3	; 0x3
        382774:	e5913000 	ldr	r3, [r1]
        382778:	e35c0002 	cmp	ip, #2	; 0x2
        38277c:	ba000036 	blt	38285c <memcpy+0x41c>
        382780:	0a00001a 	beq	3827f0 <memcpy+0x3b0>
        382784:	e352000c 	cmp	r2, #12	; 0xc
        382788:	ba000010 	blt	3827d0 <memcpy+0x390>
        38278c:	e242200c 	sub	r2, r2, #12	; 0xc
        382790:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        382794:	e1a0e423 	mov	lr, r3, lsr #8
        382798:	e9311038 	ldmdb	r1!, {r3, r4, r5, ip}
        38279c:	e18eec0c 	orr	lr, lr, ip, lsl #24
        3827a0:	e1a0c42c 	mov	ip, ip, lsr #8
        3827a4:	e18ccc05 	orr	ip, ip, r5, lsl #24
        3827a8:	e1a05425 	mov	r5, r5, lsr #8
        3827ac:	e1855c04 	orr	r5, r5, r4, lsl #24
        3827b0:	e1a04424 	mov	r4, r4, lsr #8
        3827b4:	e1844c03 	orr	r4, r4, r3, lsl #24
        3827b8:	e9205030 	stmdb	r0!, {r4, r5, ip, lr}
        3827bc:	e2522010 	subs	r2, r2, #16	; 0x10
        3827c0:	aafffff3 	bge	382794 <memcpy+0x354>
        3827c4:	e8bd4030 	ldmia	sp!, {r4, r5, lr}
        3827c8:	e292200c 	adds	r2, r2, #12	; 0xc
        3827cc:	ba000005 	blt	3827e8 <memcpy+0x3a8>
        3827d0:	e1a0c423 	mov	ip, r3, lsr #8
        3827d4:	e5313004 	ldr	r3, [r1, -#4]!
        3827d8:	e18ccc03 	orr	ip, ip, r3, lsl #24
        3827dc:	e520c004 	str	ip, [r0, -#4]!
        3827e0:	e2522004 	subs	r2, r2, #4	; 0x4
        3827e4:	aafffff9 	bge	3827d0 <memcpy+0x390>
        3827e8:	e2811003 	add	r1, r1, #3	; 0x3
        3827ec:	eaffffca 	b	38271c <memcpy+0x2dc>
        3827f0:	e352000c 	cmp	r2, #12	; 0xc
        3827f4:	ba000010 	blt	38283c <memcpy+0x3fc>
        3827f8:	e242200c 	sub	r2, r2, #12	; 0xc
        3827fc:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        382800:	e1a0e823 	mov	lr, r3, lsr #16
        382804:	e9311038 	ldmdb	r1!, {r3, r4, r5, ip}
        382808:	e18ee80c 	orr	lr, lr, ip, lsl #16
        38280c:	e1a0c82c 	mov	ip, ip, lsr #16
        382810:	e18cc805 	orr	ip, ip, r5, lsl #16
        382814:	e1a05825 	mov	r5, r5, lsr #16
        382818:	e1855804 	orr	r5, r5, r4, lsl #16
        38281c:	e1a04824 	mov	r4, r4, lsr #16
        382820:	e1844803 	orr	r4, r4, r3, lsl #16
        382824:	e9205030 	stmdb	r0!, {r4, r5, ip, lr}
        382828:	e2522010 	subs	r2, r2, #16	; 0x10
        38282c:	aafffff3 	bge	382800 <memcpy+0x3c0>
        382830:	e8bd4030 	ldmia	sp!, {r4, r5, lr}
        382834:	e292200c 	adds	r2, r2, #12	; 0xc
        382838:	ba000005 	blt	382854 <memcpy+0x414>
        38283c:	e1a0c823 	mov	ip, r3, lsr #16
        382840:	e5313004 	ldr	r3, [r1, -#4]!
        382844:	e18cc803 	orr	ip, ip, r3, lsl #16
        382848:	e520c004 	str	ip, [r0, -#4]!
        38284c:	e2522004 	subs	r2, r2, #4	; 0x4
        382850:	aafffff9 	bge	38283c <memcpy+0x3fc>
        382854:	e2811002 	add	r1, r1, #2	; 0x2
        382858:	eaffffaf 	b	38271c <memcpy+0x2dc>
        38285c:	e352000c 	cmp	r2, #12	; 0xc
        382860:	ba000010 	blt	3828a8 <memcpy+0x468>
        382864:	e242200c 	sub	r2, r2, #12	; 0xc
        382868:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        38286c:	e1a0ec23 	mov	lr, r3, lsr #24
        382870:	e9311038 	ldmdb	r1!, {r3, r4, r5, ip}
        382874:	e18ee40c 	orr	lr, lr, ip, lsl #8
        382878:	e1a0cc2c 	mov	ip, ip, lsr #24
        38287c:	e18cc405 	orr	ip, ip, r5, lsl #8
        382880:	e1a05c25 	mov	r5, r5, lsr #24
        382884:	e1855404 	orr	r5, r5, r4, lsl #8
        382888:	e1a04c24 	mov	r4, r4, lsr #24
        38288c:	e1844403 	orr	r4, r4, r3, lsl #8
        382890:	e9205030 	stmdb	r0!, {r4, r5, ip, lr}
        382894:	e2522010 	subs	r2, r2, #16	; 0x10
        382898:	aafffff3 	bge	38286c <memcpy+0x42c>
        38289c:	e8bd4030 	ldmia	sp!, {r4, r5, lr}
        3828a0:	e292200c 	adds	r2, r2, #12	; 0xc
        3828a4:	ba000005 	blt	3828c0 <memcpy+0x480>
        3828a8:	e1a0cc23 	mov	ip, r3, lsr #24
        3828ac:	e5313004 	ldr	r3, [r1, -#4]!
        3828b0:	e18cc403 	orr	ip, ip, r3, lsl #8
        3828b4:	e520c004 	str	ip, [r0, -#4]!
        3828b8:	e2522004 	subs	r2, r2, #4	; 0x4
        3828bc:	aafffff9 	bge	3828a8 <memcpy+0x468>
        3828c0:	e2811001 	add	r1, r1, #1	; 0x1
        3828c4:	eaffff94 	b	38271c <memcpy+0x2dc>
    */
}

/**
 * Symbol: memset
 * Address: 003828c8
 */
void globals::memset() {
    /*
        3828c8:	e92d4001 	stmdb	sp!, {r0, lr}
        3828cc:	e2522004 	subs	r2, r2, #4	; 0x4
        3828d0:	4a00001c 	bmi	382948 <memset+0x80>
        3828d4:	e210c003 	ands	ip, r0, #3	; 0x3
        3828d8:	1a000021 	bne	382964 <memset+0x9c>
        3828dc:	e20110ff 	and	r1, r1, #255	; 0xff
        3828e0:	e1811401 	orr	r1, r1, r1, lsl #8
        3828e4:	e1811801 	orr	r1, r1, r1, lsl #16
        3828e8:	e1a03001 	mov	r3, r1
        3828ec:	e1a0c001 	mov	ip, r1
        3828f0:	e1a0e001 	mov	lr, r1
        3828f4:	e2522008 	subs	r2, r2, #8	; 0x8
        3828f8:	ba00000c 	blt	382930 <memset+0x68>
        3828fc:	e2522014 	subs	r2, r2, #20	; 0x14
        382900:	ba000006 	blt	382920 <memset+0x58>
        382904:	e8a0500a 	stmia	r0!, {r1, r3, ip, lr}
        382908:	e8a0500a 	stmia	r0!, {r1, r3, ip, lr}
        38290c:	e2522020 	subs	r2, r2, #32	; 0x20
        382910:	aafffffb 	bge	382904 <memset+0x3c>
        382914:	e3720010 	cmn	r2, #16	; 0x10
        382918:	a8a0500a 	stmgeia	r0!, {r1, r3, ip, lr}
        38291c:	a2422010 	subge	r2, r2, #16	; 0x10
        382920:	e2922014 	adds	r2, r2, #20	; 0x14
        382924:	a8a05008 	stmgeia	r0!, {r3, ip, lr}
        382928:	a252200c 	subges	r2, r2, #12	; 0xc
        38292c:	aafffffc 	bge	382924 <memset+0x5c>
        382930:	e2922008 	adds	r2, r2, #8	; 0x8
        382934:	ba000003 	blt	382948 <memset+0x80>
        382938:	e2522004 	subs	r2, r2, #4	; 0x4
        38293c:	b4801004 	strlt	r1, [r0], #4
        382940:	a8a0000a 	stmgeia	r0!, {r1, r3}
        382944:	a2422004 	subge	r2, r2, #4	; 0x4
        382948:	e2922004 	adds	r2, r2, #4	; 0x4
        38294c:	08bd8001 	ldmeqia	sp!, {r0, pc}
        382950:	e3520002 	cmp	r2, #2	; 0x2
        382954:	e4c01001 	strb	r1, [r0], #1
        382958:	a4c01001 	strgeb	r1, [r0], #1
        38295c:	c4c01001 	strgtb	r1, [r0], #1
        382960:	e8bd8001 	ldmia	sp!, {r0, pc}
        382964:	e26cc004 	rsb	ip, ip, #4	; 0x4
        382968:	e35c0002 	cmp	ip, #2	; 0x2
        38296c:	e4c01001 	strb	r1, [r0], #1
        382970:	a4c01001 	strgeb	r1, [r0], #1
        382974:	c4c01001 	strgtb	r1, [r0], #1
        382978:	e052200c 	subs	r2, r2, ip
        38297c:	bafffff1 	blt	382948 <memset+0x80>
        382980:	eaffffd5 	b	3828dc <memset+0x14>
        382984:	e1a0000f 	mov	r0, pc
        382988:	e1a0f00e 	mov	pc, lr
        38298c:	54434d53 	strplb	r4, [r3], -#3411
        382990:	65727669 	ldrvsb	r7, [r2, -#1641]!
        382994:	63650000 	cmnvs	r5, #0	; 0x0
    */
}

/**
 * Symbol: MovePhysicalLongs
 * Address: 0038d304
 */
void globals::MovePhysicalLongs() {
    /*
        38d304:	e52d4004 	str	r4, [sp, -#4]!
        38d308:	e3a04e1b 	mov	r4, #432	; 0x1b0
        38d30c:	ee014f11 	mcr	15, 0, r4, cr1, cr1, {0}
        38d310:	e0802102 	add	r2, r0, r2, lsl #2
        38d314:	ea000001 	b	38d320 <MovePhysicalLongs+0x1c>
        38d318:	e4913004 	ldr	r3, [r1], #4
        38d31c:	e4803004 	str	r3, [r0], #4
        38d320:	e1500002 	cmp	r0, r2
        38d324:	3afffffb 	bcc	38d318 <MovePhysicalLongs+0x14>
        38d328:	e3844005 	orr	r4, r4, #5	; 0x5
        38d32c:	e3844a01 	orr	r4, r4, #4096	; 0x1000
        38d330:	ee014f11 	mcr	15, 0, r4, cr1, cr1, {0}
        38d334:	e49d4004 	ldr	r4, [sp], #4
        38d338:	e1a0f00e 	mov	pc, lr
        38d33c:	e2801d06 	add	r1, r0, #384	; 0x180
        38d340:	e1a00002 	mov	r0, r2
        38d344:	eaffffec 	b	38d2fc <WarmBoot+0x11c>
        38d348:	e92d003f 	stmdb	sp!, {r0, r1, r2, r3, r4, r5}
        38d34c:	e59f237c 	ldr	r2, [pc, #37c]	; 38d6d0 <gParamBlockFromImagePhysicalPtr+0x24>
        38d350:	e5923000 	ldr	r3, [r2]
        38d354:	e3835501 	orr	r5, r3, #4194304	; 0x400000
        38d358:	e5825000 	str	r5, [r2]
        38d35c:	e59f238c 	ldr	r2, [pc, #38c]	; 38d6f0 <gParamBlockFromImagePhysicalPtr+0x44>
        38d360:	e5924000 	ldr	r4, [r2]
        38d364:	e3845501 	orr	r5, r4, #4194304	; 0x400000
        38d368:	e5825000 	str	r5, [r2]
        38d36c:	e59f1364 	ldr	r1, [pc, #364]	; 38d6d8 <gParamBlockFromImagePhysicalPtr+0x2c>
        38d370:	e3a05024 	mov	r5, #36	; 0x24
        38d374:	e5815000 	str	r5, [r1]
        38d378:	e59f0374 	ldr	r0, [pc, #374]	; 38d6f4 <gParamBlockFromImagePhysicalPtr+0x48>
        38d37c:	e5901000 	ldr	r1, [r0]
        38d380:	e3811001 	orr	r1, r1, #1	; 0x1
        38d384:	e5801000 	str	r1, [r0]
        38d388:	e5921000 	ldr	r1, [r2]
        38d38c:	e59f1344 	ldr	r1, [pc, #344]	; 38d6d8 <gParamBlockFromImagePhysicalPtr+0x2c>
        38d390:	e3a05064 	mov	r5, #100	; 0x64
        38d394:	e5815000 	str	r5, [r1]
        38d398:	e59f0314 	ldr	r0, [pc, #314]	; 38d6b4 <gParamBlockFromImagePhysicalPtr+0x8>
        38d39c:	e3a01501 	mov	r1, #4194304	; 0x400000
        38d3a0:	e5801000 	str	r1, [r0]
        38d3a4:	e59f033c 	ldr	r0, [pc, #33c]	; 38d6e8 <gParamBlockFromImagePhysicalPtr+0x3c>
        38d3a8:	e5901000 	ldr	r1, [r0]
        38d3ac:	e3110501 	tst	r1, #4194304	; 0x400000
        38d3b0:	1afffffc 	bne	38d3a8 <MovePhysicalLongs+0xa4>
        38d3b4:	e59f02f8 	ldr	r0, [pc, #2f8]	; 38d6b4 <gParamBlockFromImagePhysicalPtr+0x8>
        38d3b8:	e3a01501 	mov	r1, #4194304	; 0x400000
        38d3bc:	e5801000 	str	r1, [r0]
        38d3c0:	e59f2328 	ldr	r2, [pc, #328]	; 38d6f0 <gParamBlockFromImagePhysicalPtr+0x44>
        38d3c4:	e5824000 	str	r4, [r2]
        38d3c8:	e59f2300 	ldr	r2, [pc, #300]	; 38d6d0 <gParamBlockFromImagePhysicalPtr+0x24>
        38d3cc:	e5823000 	str	r3, [r2]
        38d3d0:	e8bd003f 	ldmia	sp!, {r0, r1, r2, r3, r4, r5}
        38d3d4:	eaffffa8 	b	38d27c <WarmBoot+0x9c>
        38d3d8:	e1a0f003 	mov	pc, r3
        38d3dc:	e1a00000 	nop			(mov r0,r0)
        38d3e0:	e1a00000 	nop			(mov r0,r0)
        38d3e4:	e1a00000 	nop			(mov r0,r0)
    */
}

