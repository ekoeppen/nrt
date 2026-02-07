#include "Newton.h"

/**
 * Symbol: WalkDictionary__FPP15AirusAParmBlockPUcPFPUcUlUcT2Pv_UcPv
 * Address: 0002e0f0
 */
void globals::WalkDictionary() {
    /*
         2e0f0:	e1a0c00d 	mov	ip, sp
         2e0f4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         2e0f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         2e0fc:	e1a04000 	mov	r4, r0
         2e100:	e1b05001 	movs	r5, r1
         2e104:	e3a06000 	mov	r6, #0	; 0x0
         2e108:	e24dd044 	sub	sp, sp, #68	; 0x44
         2e10c:	e82d000c 	stmda	sp!, {r2, r3}
         2e110:	e80d0041 	stmda	sp, {r0, r6}
         2e114:	e24dd004 	sub	sp, sp, #4	; 0x4
         2e118:	05cd6010 	streqb	r6, [sp, #16]
         2e11c:	0a000007 	beq	2e140 <WalkDictionary__FPP15AirusAParmBlockPUcPFPUcUlUcT2Pv_UcPv+0x50>
         2e120:	e1a00005 	mov	r0, r5
         2e124:	eb6e1e61 	bl	1bb5ab0 <$strlen>
         2e128:	e1a07000 	mov	r7, r0
         2e12c:	e28d0010 	add	r0, sp, #16	; 0x10
         2e130:	e1a01005 	mov	r1, r5
         2e134:	eb6e1e5c 	bl	1bb5aac <$strcpy>
         2e138:	e3370000 	teq	r7, #0	; 0x0
         2e13c:	1a000008 	bne	2e164 <WalkDictionary__FPP15AirusAParmBlockPUcPFPUcUlUcT2Pv_UcPv+0x74>
         2e140:	e5940000 	ldr	r0, [r4]
         2e144:	e5a06028 	str	r6, [r0, #40]!
         2e148:	e3e00000 	mvn	r0, #0	; 0x0
         2e14c:	e5941000 	ldr	r1, [r4]
         2e150:	e5a10030 	str	r0, [r1, #48]!
         2e154:	e1a01006 	mov	r1, r6
         2e158:	e1a0000d 	mov	r0, sp
         2e15c:	eb674bcf 	bl	1a010a0 <$A8_WalkNextChars(DictWalkBlock *, unsigned long)>
         2e160:	ea000006 	b	2e180 <WalkDictionary__FPP15AirusAParmBlockPUcPFPUcUlUcT2Pv_UcPv+0x90>
         2e164:	e5940000 	ldr	r0, [r4]
         2e168:	e5a06028 	str	r6, [r0, #40]!
         2e16c:	e2470001 	sub	r0, r7, #1	; 0x1
         2e170:	e5941000 	ldr	r1, [r4]
         2e174:	e5a10020 	str	r0, [r1, #32]!
         2e178:	e1a0000d 	mov	r0, sp
         2e17c:	eb674bc6 	bl	1a0109c <$A8_PrefixCompletions(DictWalkBlock *)>
         2e180:	e59d0004 	ldr	r0, [sp, #4]
         2e184:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: WritePrevBaseLineToStrXrDomain(TStrXrDomain *, TStrXrUnit *)
 * Address: 00065d48
 */
WritePrevBaseLineToStrXrDomain(TStrXrDomain *, TStrXrUnit *) {
    /*
         65d48:	e1a0c00d 	mov	ip, sp
         65d4c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         65d50:	e24cb004 	sub	fp, ip, #4	; 0x4
         65d54:	e1a05000 	mov	r5, r0
         65d58:	e1a04001 	mov	r4, r1
         65d5c:	e1a00001 	mov	r0, r1
         65d60:	eb6bfd46 	bl	1b65280 <TUnit::$GetArea(void)>
         65d64:	e3300000 	teq	r0, #0	; 0x0
         65d68:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         65d6c:	e3a02000 	mov	r2, #0	; 0x0
         65d70:	e59f1058 	ldr	r1, [pc, #58]	; 65dd0 <WritePrevBaseLineToStrXrDomain(TStrXrDomain *, TStrXrUnit *)+0x88>
         65d74:	eb6be47b 	bl	1b5ef68 <TRecArea::$GetInfoFor(unsigned long, unsigned char)>
         65d78:	e1b06000 	movs	r6, r0
         65d7c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         65d80:	e2842040 	add	r2, r4, #64	; 0x40
         65d84:	e1a03006 	mov	r3, r6
         65d88:	e1a00005 	mov	r0, r5
         65d8c:	e3a01042 	mov	r1, #66	; 0x42
         65d90:	e2811802 	add	r1, r1, #131072	; 0x20000
         65d94:	e595c000 	ldr	ip, [r5]
         65d98:	e1a0e00f 	mov	lr, pc
         65d9c:	e28cf02c 	add	pc, ip, #44	; 0x2c
         65da0:	e3300000 	teq	r0, #0	; 0x0
         65da4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         65da8:	e1a00006 	mov	r0, r6
         65dac:	eb6c1a22 	bl	1b6c63c <$LockHandle(char **)>
         65db0:	e1a01006 	mov	r1, r6
         65db4:	e1a00005 	mov	r0, r5
         65db8:	e5952000 	ldr	r2, [r5]
         65dbc:	e1a0e00f 	mov	lr, pc
         65dc0:	e282f030 	add	pc, r2, #48	; 0x30
         65dc4:	e1a00006 	mov	r0, r6
         65dc8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         65dcc:	ea6c224f 	b	1b6e710 <$UnlockHandle(char **)>
         65dd0:	53545852 	cmppl	r4, #5373952	; 0x520000
    */
}

/**
 * Symbol: WeekNumCalc__FlT1
 * Address: 0008a364
 */
void globals::WeekNumCalc() {
    /*
         8a364:	e1a0c00d 	mov	ip, sp
         8a368:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         8a36c:	e24cb004 	sub	fp, ip, #4	; 0x4
         8a370:	e1a04000 	mov	r4, r0
         8a374:	e1a05001 	mov	r5, r1
         8a378:	e24dd028 	sub	sp, sp, #40	; 0x28
         8a37c:	e1a0000d 	mov	r0, sp
         8a380:	eb6dd2ed 	bl	1bfef3c <TDate::$__ct(void)>
         8a384:	e1a01004 	mov	r1, r4
         8a388:	e1a0000d 	mov	r0, sp
         8a38c:	eb6dd2ef 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
         8a390:	e24dd004 	sub	sp, sp, #4	; 0x4
         8a394:	eb682dc4 	bl	1a95aac <$GetCurrentLocale(void)>
         8a398:	eb6cdf6b 	bl	1bc214c <$AllocateRefHandle(long)>
         8a39c:	e58d0000 	str	r0, [sp]
         8a3a0:	e59f1130 	ldr	r1, [pc, #130]	; 8a4d8 <WeekNumCalc__FlT1+0x174>
         8a3a4:	e1a0000d 	mov	r0, sp
         8a3a8:	e3a02000 	mov	r2, #0	; 0x0
         8a3ac:	eb6ce7ad 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         8a3b0:	e59d1000 	ldr	r1, [sp]
         8a3b4:	e3a06001 	mov	r6, #1	; 0x1
         8a3b8:	e5810000 	str	r0, [r1]
         8a3bc:	e2001003 	and	r1, r0, #3	; 0x3
         8a3c0:	e3510000 	cmp	r1, #0	; 0x0
         8a3c4:	1a000005 	bne	8a3e0 <WeekNumCalc__FlT1+0x7c>
         8a3c8:	01a00140 	moveq	r0, r0, asr #2
         8a3cc:	0a000000 	beq	8a3d4 <WeekNumCalc__FlT1+0x70>
         8a3d0:	eb6cdf51 	bl	1bc211c <$_RINTError(long)>
         8a3d4:	e3300001 	teq	r0, #1	; 0x1
         8a3d8:	03a08001 	moveq	r8, #1	; 0x1
         8a3dc:	0a000000 	beq	8a3e4 <WeekNumCalc__FlT1+0x80>
         8a3e0:	e3a08000 	mov	r8, #0	; 0x0
         8a3e4:	e3380000 	teq	r8, #0	; 0x0
         8a3e8:	0a00000b 	beq	8a41c <WeekNumCalc__FlT1+0xb8>
         8a3ec:	e59d001c 	ldr	r0, [sp, #28]
         8a3f0:	e2800007 	add	r0, r0, #7	; 0x7
         8a3f4:	e0401005 	sub	r1, r0, r5
         8a3f8:	e3a00007 	mov	r0, #7	; 0x7
         8a3fc:	eb6ca151 	bl	1bb2948 <$__rt_udiv>
         8a400:	e2610003 	rsb	r0, r1, #3	; 0x3
         8a404:	e0600200 	rsb	r0, r0, r0, lsl #4
         8a408:	e0800080 	add	r0, r0, r0, lsl #1
         8a40c:	e0841280 	add	r1, r4, r0, lsl #5
         8a410:	e1a04001 	mov	r4, r1
         8a414:	e28d0004 	add	r0, sp, #4	; 0x4
         8a418:	eb6dd2cc 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
         8a41c:	e24dd028 	sub	sp, sp, #40	; 0x28
         8a420:	e1a0000d 	mov	r0, sp
         8a424:	eb6dd2c4 	bl	1bfef3c <TDate::$__ct(void)>
         8a428:	e59d002c 	ldr	r0, [sp, #44]
         8a42c:	e58d0000 	str	r0, [sp]
         8a430:	e3a00001 	mov	r0, #1	; 0x1
         8a434:	e58d0008 	str	r0, [sp, #8]
         8a438:	e58d0004 	str	r0, [sp, #4]
         8a43c:	e1a0000d 	mov	r0, sp
         8a440:	eb6dd6d2 	bl	1bfff90 <TDate::$TotalMinutes( const(void))>
         8a444:	e1a01000 	mov	r1, r0
         8a448:	e1a07000 	mov	r7, r0
         8a44c:	e1a0000d 	mov	r0, sp
         8a450:	eb6dd2be 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
         8a454:	e59d0018 	ldr	r0, [sp, #24]
         8a458:	e2800007 	add	r0, r0, #7	; 0x7
         8a45c:	e0401005 	sub	r1, r0, r5
         8a460:	e3a00007 	mov	r0, #7	; 0x7
         8a464:	eb6ca137 	bl	1bb2948 <$__rt_udiv>
         8a468:	e1a05001 	mov	r5, r1
         8a46c:	e3380000 	teq	r8, #0	; 0x0
         8a470:	0a000001 	beq	8a47c <WeekNumCalc__FlT1+0x118>
         8a474:	e3550003 	cmp	r5, #3	; 0x3
         8a478:	c3a06000 	movgt	r6, #0	; 0x0
         8a47c:	e0441007 	sub	r1, r4, r7
         8a480:	e3a00e5a 	mov	r0, #1440	; 0x5a0
         8a484:	eb6ca12d 	bl	1bb2940 <$__rt_sdiv>
         8a488:	e0801005 	add	r1, r0, r5
         8a48c:	e3a00007 	mov	r0, #7	; 0x7
         8a490:	eb6ca12a 	bl	1bb2940 <$__rt_sdiv>
         8a494:	e0804006 	add	r4, r0, r6
         8a498:	e59d0024 	ldr	r0, [sp, #36]
         8a49c:	eb6ce346 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a4a0:	e59d0020 	ldr	r0, [sp, #32]
         8a4a4:	eb6ce344 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a4a8:	e59d001c 	ldr	r0, [sp, #28]
         8a4ac:	eb6ce342 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a4b0:	e59d0028 	ldr	r0, [sp, #40]
         8a4b4:	eb6ce340 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a4b8:	e59d0050 	ldr	r0, [sp, #80]
         8a4bc:	eb6ce33e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a4c0:	e59d004c 	ldr	r0, [sp, #76]
         8a4c4:	eb6ce33c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a4c8:	e59d0048 	ldr	r0, [sp, #72]
         8a4cc:	eb6ce33a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8a4d0:	e1a00004 	mov	r0, r4
         8a4d4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         8a4d8:	00685168 	rsbeq	r5, r8, r8, ror #2
    */
}

/**
 * Symbol: WriteTapStats(TArray *)
 * Address: 00090848
 */
WriteTapStats(TArray *) {
    /*
         90848:	e1a0c00d 	mov	ip, sp
         9084c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         90850:	e24cb004 	sub	fp, ip, #4	; 0x4
         90854:	e1a04000 	mov	r4, r0
         90858:	e24dd020 	sub	sp, sp, #32	; 0x20
         9085c:	e59f0014 	ldr	r0, [pc, #14]	; 90878 <WriteTapStats(TArray *)+0x30>
         90860:	e5900000 	ldr	r0, [r0]
         90864:	e3300000 	teq	r0, #0	; 0x0
         90868:	1a000013 	bne	908bc <WriteTapStats(TArray *)+0x74>
         9086c:	e28f0f02 	add	r0, pc, #8	; 0x8
         90870:	eb00073c 	bl	92568 <PrintError(char *)>
         90874:	ea000091 	b	90ac0 <WriteTapStats(TArray *)+0x278>
         90878:	0c104ecc 	ldceq	14, cr4, [r0], -#816
         9087c:	57726974 	undefined
         90880:	65546170 	ldrvsb	r6, [r4, -#368]
         90884:	53746174 	cmnpl	r4, #29	; 0x1d
         90888:	733a2020 	teqvc	sl, #32	; 0x20
         9088c:	4e554c4c 	cdpmi	12, 5, cr4, cr5, cr12, {2}
         90890:	20737461 	rsbcss	r7, r3, r1, ror #8
         90894:	74732063 	ldrvcbt	r2, [r3], -#99
         90898:	68616e6e 	stmvsda	r1!, {r1, r2, r3, r5, r6, r9, sl, fp, sp, lr}^
         9089c:	656c2028 	strvsb	r2, [ip, -#40]!
         908a0:	67534650 	undefined
         908a4:	7472206f 	ldrvcbt	r2, [r2], -#111
         908a8:	72206752 	eorvc	r6, r0, #21495808	; 0x1480000
         908ac:	65706c61 	ldrvsb	r6, [r0, -#3169]!
         908b0:	79526570 	ldmvcdb	r2, {r4, r5, r6, r8, sl, sp, lr}^
         908b4:	6f727465 	swivs	0x00727465
         908b8:	72292e00 	eorvc	r2, r9, #0	; 0x0
         908bc:	e1a0100d 	mov	r1, sp
         908c0:	e1a00004 	mov	r0, r4
         908c4:	eb6b39aa 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
         908c8:	e1a05000 	mov	r5, r0
         908cc:	e5900000 	ldr	r0, [r0]
         908d0:	eb6bce56 	bl	1b84230 <$IsControlUnit(TWordReplayUnit *)>
         908d4:	e3300000 	teq	r0, #0	; 0x0
         908d8:	1a000078 	bne	90ac0 <WriteTapStats(TArray *)+0x278>
         908dc:	e24ddff3 	sub	sp, sp, #972	; 0x3cc
         908e0:	e3a09000 	mov	r9, #0	; 0x0
         908e4:	e3a06000 	mov	r6, #0	; 0x0
         908e8:	e1a0000d 	mov	r0, sp
         908ec:	e3a02ff3 	mov	r2, #972	; 0x3cc
         908f0:	e3a01000 	mov	r1, #0	; 0x0
         908f4:	eb6c9057 	bl	1bb4a58 <$memset>
         908f8:	e3a07000 	mov	r7, #0	; 0x0
         908fc:	e59fa004 	ldr	sl, [pc, #4]	; 90908 <WriteTapStats(TArray *)+0xc0>
         90900:	e59f8004 	ldr	r8, [pc, #4]	; 9090c <WriteTapStats(TArray *)+0xc4>
         90904:	ea000064 	b	90a9c <WriteTapStats(TArray *)+0x254>
         90908:	5752504c 	ldrplb	r5, [r2, -ip, asr #32]
         9090c:	0c100bd4 	ldceq	11, cr0, [r0], -#848
         90910:	e5955000 	ldr	r5, [r5]
         90914:	e5950008 	ldr	r0, [r5, #8]
         90918:	e130000a 	teq	r0, sl
         9091c:	0a00001f 	beq	909a0 <WriteTapStats(TArray *)+0x158>
         90920:	e3a09001 	mov	r9, #1	; 0x1
         90924:	e3360000 	teq	r6, #0	; 0x0
         90928:	1a000056 	bne	90a88 <WriteTapStats(TArray *)+0x240>
         9092c:	e24dd068 	sub	sp, sp, #104	; 0x68
         90930:	e58d0064 	str	r0, [sp, #100]
         90934:	e28d2064 	add	r2, sp, #100	; 0x64
         90938:	e1a0000d 	mov	r0, sp
         9093c:	e28f1f04 	add	r1, pc, #16	; 0x10
         90940:	eb6c9453 	bl	1bb5a94 <$sprintf>
         90944:	e1a0000d 	mov	r0, sp
         90948:	eb000706 	bl	92568 <PrintError(char *)>
         9094c:	e28dd068 	add	sp, sp, #104	; 0x68
         90950:	ea00004c 	b	90a88 <WriteTapStats(TArray *)+0x240>
         90954:	494e5641 	stmmidb	lr, {r0, r6, r9, sl, ip, lr}^
         90958:	4c494420 	mcrrmi	4, 2, r4, r9, cr0
         9095c:	554e4954 	strplb	r4, [lr, -#2388]
         90960:	20696e20 	rsbcs	r6, r9, r0, lsr #28
         90964:	62657374 	rsbvs	r7, r5, #-805306367	; 0xd0000001
         90968:	4c697374 	stcmil	3, cr7, [r9], -#464
         9096c:	20696e20 	rsbcs	r6, r9, r0, lsr #28
         90970:	57726974 	undefined
         90974:	65546170 	ldrvsb	r6, [r4, -#368]
         90978:	53746174 	cmnpl	r4, #29	; 0x1d
         9097c:	7328293a 	teqvc	r8, #950272	; 0xe8000
         90980:	20747970 	rsbcss	r7, r4, r0, ror r9
         90984:	65203d20 	strvs	r3, [r0, -#3360]!
         90988:	25342e34 	ldrcs	r2, [r4, -#3636]!
         9098c:	732e2020 	teqvc	lr, #32	; 0x20
         90990:	45787065 	ldrmib	r7, [r8, -#101]!
         90994:	63746564 	cmnvs	r4, #419430400	; 0x19000000
         90998:	20575250 	subcss	r5, r7, r0, asr r2
         9099c:	4c2e0d00 	stcmi	13, cr0, [lr]
         909a0:	e3a06001 	mov	r6, #1	; 0x1
         909a4:	e3390000 	teq	r9, #0	; 0x0
         909a8:	128f0f16 	addne	r0, pc, #88	; 0x58
         909ac:	1b0006ed 	blne	92568 <PrintError(char *)>
         909b0:	e1a0100d 	mov	r1, sp
         909b4:	e1a00005 	mov	r0, r5
         909b8:	ebffff04 	bl	905d0 <GatherExpectedMetrics(TWordReplayUnit *, ReplayMetrics *)>
         909bc:	e59d0014 	ldr	r0, [sp, #20]
         909c0:	e59810cc 	ldr	r1, [r8, #204]
         909c4:	e0800001 	add	r0, r0, r1
         909c8:	e58800cc 	str	r0, [r8, #204]
         909cc:	e5950070 	ldr	r0, [r5, #112]
         909d0:	e2400002 	sub	r0, r0, #2	; 0x2
         909d4:	e3500005 	cmp	r0, #5	; 0x5
         909d8:	908ff100 	addls	pc, pc, r0, lsl #2
         909dc:	ea000024 	b	90a74 <WriteTapStats(TArray *)+0x22c>
         909e0:	ea000019 	b	90a4c <WriteTapStats(TArray *)+0x204>
         909e4:	ea000018 	b	90a4c <WriteTapStats(TArray *)+0x204>
         909e8:	ea00001c 	b	90a60 <WriteTapStats(TArray *)+0x218>
         909ec:	ea00001b 	b	90a60 <WriteTapStats(TArray *)+0x218>
         909f0:	eaffffff 	b	909f4 <WriteTapStats(TArray *)+0x1ac>
         909f4:	e1a0200d 	mov	r2, sp
         909f8:	e1a01004 	mov	r1, r4
         909fc:	e1a00005 	mov	r0, r5
         90a00:	eb0000d8 	bl	90d68 <GatherWordsGraphicsMetrics(TWordReplayUnit *, TArray *, ReplayMetrics *)>
         90a04:	ea00001d 	b	90a80 <WriteTapStats(TArray *)+0x238>
         90a08:	466f756e 	strmibt	r7, [pc], -lr, ror #10
         90a0c:	64206f75 	strvst	r6, [r0], -#3957
         90a10:	742d6f66 	strvct	r6, [sp], -#3942
         90a14:	2d6f7264 	sfmcs	f7, 2, [pc, -#400]!
         90a18:	65722057 	ldrvsb	r2, [r2, -#87]!
         90a1c:	6f726452 	swivs	0x00726452
         90a20:	65706c61 	ldrvsb	r6, [r0, -#3169]!
         90a24:	79556e69 	ldmvcdb	r5, {r0, r3, r5, r6, r9, sl, fp, sp, lr}^
         90a28:	7420696e 	strvct	r6, [r0], -#2414
         90a2c:	20626573 	rsbcs	r6, r2, r3, ror r5
         90a30:	744c6973 	strvcb	r6, [ip], -#2419
         90a34:	7420696e 	strvct	r6, [r0], -#2414
         90a38:	20577269 	subcss	r7, r7, r9, ror #4
         90a3c:	74655461 	strvcbt	r5, [r5], -#1121
         90a40:	70537461 	subvcs	r7, r3, r1, ror #8
         90a44:	74732829 	ldrvcbt	r2, [r3], -#2089
         90a48:	00000000 	andeq	r0, r0, r0
         90a4c:	e1a0200d 	mov	r2, sp
         90a50:	e1a01004 	mov	r1, r4
         90a54:	e1a00005 	mov	r0, r5
         90a58:	eb000171 	bl	91024 <GatherGraphicsMetrics(TWordReplayUnit *, TArray *, ReplayMetrics *)>
         90a5c:	ea000007 	b	90a80 <WriteTapStats(TArray *)+0x238>
         90a60:	e1a0200d 	mov	r2, sp
         90a64:	e1a01004 	mov	r1, r4
         90a68:	e1a00005 	mov	r0, r5
         90a6c:	eb00012f 	bl	90f30 <GatherWordsMetrics(TWordReplayUnit *, TArray *, ReplayMetrics *)>
         90a70:	ea000002 	b	90a80 <WriteTapStats(TArray *)+0x238>
         90a74:	e1a00005 	mov	r0, r5
         90a78:	e28f1f11 	add	r1, pc, #68	; 0x44
         90a7c:	eb6b351d 	bl	1b5def8 <TRecObject::$DumpObject(char *)>
         90a80:	e1a0000d 	mov	r0, sp
         90a84:	ebfffe11 	bl	902d0 <PrintMetrics(ReplayMetrics *)>
         90a88:	e2877001 	add	r7, r7, #1	; 0x1
         90a8c:	e28d0ff3 	add	r0, sp, #972	; 0x3cc
         90a90:	e1a0e00f 	mov	lr, pc
         90a94:	e59df3e4 	ldr	pc, [sp, #996]
         90a98:	e1a05000 	mov	r5, r0
         90a9c:	e59d03e0 	ldr	r0, [sp, #992]
         90aa0:	e1500007 	cmp	r0, r7
         90aa4:	9a000001 	bls	90ab0 <WriteTapStats(TArray *)+0x268>
         90aa8:	e3350000 	teq	r5, #0	; 0x0
         90aac:	1affff97 	bne	90910 <WriteTapStats(TArray *)+0xc8>
         90ab0:	e3360000 	teq	r6, #0	; 0x0
         90ab4:	028f0f0f 	addeq	r0, pc, #60	; 0x3c
         90ab8:	0b0006aa 	bleq	92568 <PrintError(char *)>
         90abc:	e28ddff3 	add	sp, sp, #972	; 0x3cc
         90ac0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         90ac4:	20665265 	rsbcs	r5, r6, r5, ror #4
         90ac8:	63436173 	cmpvs	r3, #-1073741796	; 0xc000001c
         90acc:	65206e6f 	strvs	r6, [r0, -#3695]!
         90ad0:	74207265 	strvct	r7, [r0], -#613
         90ad4:	636f676e 	cmnvs	pc, #28835840	; 0x1b80000
         90ad8:	697a6564 	ldmvsdb	sl!, {r2, r5, r6, r8, sl, sp, lr}^
         90adc:	2e20204e 	cdpcs	0, 2, cr2, cr0, cr14, {2}
         90ae0:	6f206d65 	swivs	0x00206d65
         90ae4:	74726963 	ldrvcbt	r6, [r2], -#2403
         90ae8:	73206761 	teqvc	r0, #25427968	; 0x1840000
         90aec:	74686572 	strvcbt	r6, [r8], -#1394
         90af0:	65643a0d 	strvsb	r3, [r4, -#2573]!
         90af4:	00000000 	andeq	r0, r0, r0
         90af8:	4e6f2057 	mcrmi	0, 3, r2, cr15, cr7, {2}
         90afc:	6f726452 	swivs	0x00726452
         90b00:	65706c61 	ldrvsb	r6, [r0, -#3169]!
         90b04:	79556e69 	ldmvcdb	r5, {r0, r3, r5, r6, r9, sl, fp, sp, lr}^
         90b08:	74287329 	strvct	r7, [r8], -#809
         90b0c:	20666f75 	rsbcs	r6, r6, r5, ror pc
         90b10:	6e642069 	cdpvs	0, 6, cr2, cr4, cr9, {3}
         90b14:	6e206265 	cdpvs	2, 2, cr6, cr0, cr5, {3}
         90b18:	73744c69 	cmnvc	r4, #26880	; 0x6900
         90b1c:	73742069 	cmnvc	r4, #105	; 0x69
         90b20:	6e205772 	mcrvs	7, 1, r5, cr0, cr2, {3}
         90b24:	69746554 	ldmvsdb	r4!, {r2, r4, r6, r8, sl, sp, lr}^
         90b28:	61705374 	cmnvs	r0, r4, ror r3
         90b2c:	61747328 	cmnvs	r4, r8, lsr #6
         90b30:	29000000 	stmcsdb	r0, {}
    */
}

/**
 * Symbol: WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)
 * Address: 000d4540
 */
WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *) {
    /*
         d4540:	e1a0c00d 	mov	ip, sp
         d4544:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         d4548:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         d454c:	e24cb014 	sub	fp, ip, #20	; 0x14
         d4550:	e59b0018 	ldr	r0, [fp, #24]
         d4554:	e1a00800 	mov	r0, r0, lsl #16
         d4558:	e1a00840 	mov	r0, r0, asr #16
         d455c:	e59b5014 	ldr	r5, [fp, #20]
         d4560:	e3a07000 	mov	r7, #0	; 0x0
         d4564:	e52d0008 	str	r0, [sp, -#8]!
         d4568:	e24dd038 	sub	sp, sp, #56	; 0x38
         d456c:	e59b3010 	ldr	r3, [fp, #16]
         d4570:	e3330000 	teq	r3, #0	; 0x0
         d4574:	13350000 	teqne	r5, #0	; 0x0
         d4578:	159b0008 	ldrne	r0, [fp, #8]
         d457c:	13300000 	teqne	r0, #0	; 0x0
         d4580:	03e04005 	mvneq	r4, #5	; 0x5
         d4584:	0a000172 	beq	d4b54 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x614>
         d4588:	e59b2008 	ldr	r2, [fp, #8]
         d458c:	e1a00002 	mov	r0, r2
         d4590:	e3a01000 	mov	r1, #0	; 0x0
         d4594:	e5922000 	ldr	r2, [r2]
         d4598:	e1a0e00f 	mov	lr, pc
         d459c:	e282f058 	add	pc, r2, #88	; 0x58
         d45a0:	e5d00024 	ldrb	r0, [r0, #36]
         d45a4:	e2801001 	add	r1, r0, #1	; 0x1
         d45a8:	e3a00001 	mov	r0, #1	; 0x1
         d45ac:	e58d0034 	str	r0, [sp, #52]
         d45b0:	e58d1020 	str	r1, [sp, #32]
         d45b4:	e5950004 	ldr	r0, [r5, #4]
         d45b8:	e3300000 	teq	r0, #0	; 0x0
         d45bc:	0a000006 	beq	d45dc <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x9c>
         d45c0:	eb692e7b 	bl	1b1ffb4 <$GCLockRecResultsHandle(unsigned long)>
         d45c4:	e1b07000 	movs	r7, r0
         d45c8:	0a00002a 	beq	d4678 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x138>
         d45cc:	e5970004 	ldr	r0, [r7, #4]
         d45d0:	e3300000 	teq	r0, #0	; 0x0
         d45d4:	15d0000f 	ldrneb	r0, [r0, #15]
         d45d8:	158d0034 	strne	r0, [sp, #52]
         d45dc:	e3a00000 	mov	r0, #0	; 0x0
         d45e0:	e3a06000 	mov	r6, #0	; 0x0
         d45e4:	e58d0024 	str	r0, [sp, #36]
         d45e8:	e59d0034 	ldr	r0, [sp, #52]
         d45ec:	e3500000 	cmp	r0, #0	; 0x0
         d45f0:	c59f1008 	ldrgt	r1, [pc, #8]	; d4600 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0xc0>
         d45f4:	c58d103c 	strgt	r1, [sp, #60]
         d45f8:	ca000004 	bgt	d4610 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0xd0>
         d45fc:	ea000153 	b	d4b50 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x610>
         d4600:	0c101894 	ldceq	8, cr1, [r0], -#592
         d4604:	e59d0024 	ldr	r0, [sp, #36]
         d4608:	e3300000 	teq	r0, #0	; 0x0
         d460c:	1a000019 	bne	d4678 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x138>
         d4610:	e59b0008 	ldr	r0, [fp, #8]
         d4614:	e5d000ae 	ldrb	r0, [r0, #174]
         d4618:	e3300000 	teq	r0, #0	; 0x0
         d461c:	0a000003 	beq	d4630 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0xf0>
         d4620:	e3560000 	cmp	r6, #0	; 0x0
         d4624:	e59b4008 	ldr	r4, [fp, #8]
         d4628:	ca000148 	bgt	d4b50 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x610>
         d462c:	ea000013 	b	d4680 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x140>
         d4630:	e3a01000 	mov	r1, #0	; 0x0
         d4634:	e59b0008 	ldr	r0, [fp, #8]
         d4638:	e5902000 	ldr	r2, [r0]
         d463c:	e1a0e00f 	mov	lr, pc
         d4640:	e282f058 	add	pc, r2, #88	; 0x58
         d4644:	eb6a430e 	bl	1b65284 <TUnit::$GetAreas(void)>
         d4648:	e1a02000 	mov	r2, r0
         d464c:	e1a08000 	mov	r8, r0
         d4650:	e59d1020 	ldr	r1, [sp, #32]
         d4654:	e59b0004 	ldr	r0, [fp, #4]
         d4658:	eb691dd4 	bl	1b1bdb0 <$Make__10TStrXrUnitSFP7TDomainUlP6TArray>
         d465c:	e1a04000 	mov	r4, r0
         d4660:	e3380000 	teq	r8, #0	; 0x0
         d4664:	11a00008 	movne	r0, r8
         d4668:	11a0e00f 	movne	lr, pc
         d466c:	1598f000 	ldrne	pc, [r8]
         d4670:	e3340000 	teq	r4, #0	; 0x0
         d4674:	1a000001 	bne	d4680 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x140>
         d4678:	e3e04006 	mvn	r4, #6	; 0x6
         d467c:	ea000134 	b	d4b54 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x614>
         d4680:	e3a01001 	mov	r1, #1	; 0x1
         d4684:	e59b0020 	ldr	r0, [fp, #32]
         d4688:	e5801000 	str	r1, [r0]
         d468c:	e3a00000 	mov	r0, #0	; 0x0
         d4690:	e5c400ad 	strb	r0, [r4, #173]
         d4694:	e59b0008 	ldr	r0, [fp, #8]
         d4698:	e5901000 	ldr	r1, [r0]
         d469c:	e1a0e00f 	mov	lr, pc
         d46a0:	e281f01c 	add	pc, r1, #28	; 0x1c
         d46a4:	e58d0028 	str	r0, [sp, #40]
         d46a8:	e59b0008 	ldr	r0, [fp, #8]
         d46ac:	e5d000ae 	ldrb	r0, [r0, #174]
         d46b0:	e3300000 	teq	r0, #0	; 0x0
         d46b4:	1a00006a 	bne	d4864 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x324>
         d46b8:	e3a0a000 	mov	sl, #0	; 0x0
         d46bc:	e5d5003e 	ldrb	r0, [r5, #62]
         d46c0:	e3500001 	cmp	r0, #1	; 0x1
         d46c4:	c3a00000 	movgt	r0, #0	; 0x0
         d46c8:	d3a00001 	movle	r0, #1	; 0x1
         d46cc:	e58d0030 	str	r0, [sp, #48]
         d46d0:	e5d5802c 	ldrb	r8, [r5, #44]
         d46d4:	e3a09000 	mov	r9, #0	; 0x0
         d46d8:	e5d5302d 	ldrb	r3, [r5, #45]
         d46dc:	ea000051 	b	d4828 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x2e8>
         d46e0:	e59d0030 	ldr	r0, [sp, #48]
         d46e4:	e3300000 	teq	r0, #0	; 0x0
         d46e8:	05d5003e 	ldreqb	r0, [r5, #62]
         d46ec:	02400001 	subeq	r0, r0, #1	; 0x1
         d46f0:	0130000a 	teqeq	r0, sl
         d46f4:	128aa001 	addne	sl, sl, #1	; 0x1
         d46f8:	03a00001 	moveq	r0, #1	; 0x1
         d46fc:	058d0030 	streq	r0, [sp, #48]
         d4700:	e1530008 	cmp	r3, r8
         d4704:	a1a01808 	movge	r1, r8, lsl #16
         d4708:	a1a01841 	movge	r1, r1, asr #16
         d470c:	a2888001 	addge	r8, r8, #1	; 0x1
         d4710:	aa000004 	bge	d4728 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x1e8>
         d4714:	e0850009 	add	r0, r5, r9
         d4718:	e5d0002e 	ldrb	r0, [r0, #46]
         d471c:	e1a01800 	mov	r1, r0, lsl #16
         d4720:	e1a01841 	mov	r1, r1, asr #16
         d4724:	e2899001 	add	r9, r9, #1	; 0x1
         d4728:	e59d0034 	ldr	r0, [sp, #52]
         d472c:	e3500001 	cmp	r0, #1	; 0x1
         d4730:	da00001a 	ble	d47a0 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x260>
         d4734:	e3a00000 	mov	r0, #0	; 0x0
         d4738:	e3a02000 	mov	r2, #0	; 0x0
         d473c:	e3560000 	cmp	r6, #0	; 0x0
         d4740:	da000006 	ble	d4760 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x220>
         d4744:	e597c004 	ldr	ip, [r7, #4]
         d4748:	e08ce000 	add	lr, ip, r0
         d474c:	e5dee04c 	ldrb	lr, [lr, #76]
         d4750:	e08e2002 	add	r2, lr, r2
         d4754:	e2800001 	add	r0, r0, #1	; 0x1
         d4758:	e1500006 	cmp	r0, r6
         d475c:	bafffff9 	blt	d4748 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x208>
         d4760:	e1a00002 	mov	r0, r2
         d4764:	e597c004 	ldr	ip, [r7, #4]
         d4768:	e08ce006 	add	lr, ip, r6
         d476c:	e5dee04c 	ldrb	lr, [lr, #76]
         d4770:	e08e2002 	add	r2, lr, r2
         d4774:	e1520000 	cmp	r2, r0
         d4778:	da000006 	ble	d4798 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x258>
         d477c:	e08ce000 	add	lr, ip, r0
         d4780:	e5dee058 	ldrb	lr, [lr, #88]
         d4784:	e13e000a 	teq	lr, sl
         d4788:	0a000002 	beq	d4798 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x258>
         d478c:	e2800001 	add	r0, r0, #1	; 0x1
         d4790:	e1520000 	cmp	r2, r0
         d4794:	cafffff8 	bgt	d477c <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x23c>
         d4798:	e1520000 	cmp	r2, r0
         d479c:	da000021 	ble	d4828 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x2e8>
         d47a0:	e59d0038 	ldr	r0, [sp, #56]
         d47a4:	e0811000 	add	r1, r1, r0
         d47a8:	e59b0008 	ldr	r0, [fp, #8]
         d47ac:	eb692dfa 	bl	1b1ff9c <$GCGetUnitRealStrokeIndex(TStrXrUnit *, short)>
         d47b0:	e58d002c 	str	r0, [sp, #44]
         d47b4:	e59d1028 	ldr	r1, [sp, #40]
         d47b8:	e1500001 	cmp	r0, r1
         d47bc:	2a00000c 	bcs	d47f4 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x2b4>
         d47c0:	e52d4004 	str	r4, [sp, -#4]!
         d47c4:	e59b2008 	ldr	r2, [fp, #8]
         d47c8:	e1a00002 	mov	r0, r2
         d47cc:	e59d1030 	ldr	r1, [sp, #48]
         d47d0:	e5922000 	ldr	r2, [r2]
         d47d4:	e1a0e00f 	mov	lr, pc
         d47d8:	e282f058 	add	pc, r2, #88	; 0x58
         d47dc:	e1a01000 	mov	r1, r0
         d47e0:	e59d0000 	ldr	r0, [sp]
         d47e4:	e5902000 	ldr	r2, [r0]
         d47e8:	e1a0e00f 	mov	lr, pc
         d47ec:	e282f054 	add	pc, r2, #84	; 0x54
         d47f0:	e28dd004 	add	sp, sp, #4	; 0x4
         d47f4:	e59b100c 	ldr	r1, [fp, #12]
         d47f8:	e3310000 	teq	r1, #0	; 0x0
         d47fc:	0affffb5 	beq	d46d8 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x198>
         d4800:	e59d002c 	ldr	r0, [sp, #44]
         d4804:	e59d1028 	ldr	r1, [sp, #40]
         d4808:	e1300001 	teq	r0, r1
         d480c:	1affffb1 	bne	d46d8 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x198>
         d4810:	e1a00004 	mov	r0, r4
         d4814:	e59b100c 	ldr	r1, [fp, #12]
         d4818:	e5942000 	ldr	r2, [r4]
         d481c:	e1a0e00f 	mov	lr, pc
         d4820:	e282f054 	add	pc, r2, #84	; 0x54
         d4824:	eaffffab 	b	d46d8 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x198>
         d4828:	e1530008 	cmp	r3, r8
         d482c:	aaffffab 	bge	d46e0 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x1a0>
         d4830:	e0850009 	add	r0, r5, r9
         d4834:	e5d0002e 	ldrb	r0, [r0, #46]
         d4838:	e3300000 	teq	r0, #0	; 0x0
         d483c:	0a000001 	beq	d4848 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x308>
         d4840:	e3590008 	cmp	r9, #8	; 0x8
         d4844:	baffffa5 	blt	d46e0 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x1a0>
         d4848:	e5d5003e 	ldrb	r0, [r5, #62]
         d484c:	e3500001 	cmp	r0, #1	; 0x1
         d4850:	da000003 	ble	d4864 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x324>
         d4854:	e59d0030 	ldr	r0, [sp, #48]
         d4858:	e3300000 	teq	r0, #0	; 0x0
         d485c:	13a09001 	movne	r9, #1	; 0x1
         d4860:	1a000000 	bne	d4868 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x328>
         d4864:	e3a09000 	mov	r9, #0	; 0x0
         d4868:	e59d0034 	ldr	r0, [sp, #52]
         d486c:	e3500001 	cmp	r0, #1	; 0x1
         d4870:	d5950014 	ldrle	r0, [r5, #20]
         d4874:	d1a00840 	movle	r0, r0, asr #16
         d4878:	d5840040 	strle	r0, [r4, #64]
         d487c:	d5950018 	ldrle	r0, [r5, #24]
         d4880:	d1a00840 	movle	r0, r0, asr #16
         d4884:	da000036 	ble	d4964 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x424>
         d4888:	e3a08000 	mov	r8, #0	; 0x0
         d488c:	e1a00004 	mov	r0, r4
         d4890:	e5941000 	ldr	r1, [r4]
         d4894:	e1a0e00f 	mov	lr, pc
         d4898:	e281f01c 	add	pc, r1, #28	; 0x1c
         d489c:	e3500000 	cmp	r0, #0	; 0x0
         d48a0:	9a000013 	bls	d48f4 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x3b4>
         d48a4:	e1a01008 	mov	r1, r8
         d48a8:	e1a00004 	mov	r0, r4
         d48ac:	e5942000 	ldr	r2, [r4]
         d48b0:	e1a0e00f 	mov	lr, pc
         d48b4:	e282f058 	add	pc, r2, #88	; 0x58
         d48b8:	e28d1010 	add	r1, sp, #16	; 0x10
         d48bc:	eb6a4271 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
         d48c0:	e3380000 	teq	r8, #0	; 0x0
         d48c4:	13a02000 	movne	r2, #0	; 0x0
         d48c8:	03a02001 	moveq	r2, #1	; 0x1
         d48cc:	e1a0100d 	mov	r1, sp
         d48d0:	e28d0010 	add	r0, sp, #16	; 0x10
         d48d4:	eb6a1d2a 	bl	1b5bd84 <$AddRect>
         d48d8:	e2888001 	add	r8, r8, #1	; 0x1
         d48dc:	e1a00004 	mov	r0, r4
         d48e0:	e5941000 	ldr	r1, [r4]
         d48e4:	e1a0e00f 	mov	lr, pc
         d48e8:	e281f01c 	add	pc, r1, #28	; 0x1c
         d48ec:	e1500008 	cmp	r0, r8
         d48f0:	8affffeb 	bhi	d48a4 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x364>
         d48f4:	e59d103c 	ldr	r1, [sp, #60]
         d48f8:	e5911000 	ldr	r1, [r1]
         d48fc:	e3310702 	teq	r1, #524288	; 0x80000
         d4900:	e59d0000 	ldr	r0, [sp]
         d4904:	1a000008 	bne	d492c <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x3ec>
         d4908:	e3a01902 	mov	r1, #32768	; 0x8000
         d490c:	e0810180 	add	r0, r1, r0, lsl #3
         d4910:	e1a00840 	mov	r0, r0, asr #16
         d4914:	e1a00800 	mov	r0, r0, lsl #16
         d4918:	e1a00840 	mov	r0, r0, asr #16
         d491c:	e5840040 	str	r0, [r4, #64]
         d4920:	e59d0008 	ldr	r0, [sp, #8]
         d4924:	e0810180 	add	r0, r1, r0, lsl #3
         d4928:	ea00000a 	b	d4958 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x418>
         d492c:	eb6c31e4 	bl	1be10c4 <$FixedMultiply>
         d4930:	e2800902 	add	r0, r0, #32768	; 0x8000
         d4934:	e1a00840 	mov	r0, r0, asr #16
         d4938:	e1a00800 	mov	r0, r0, lsl #16
         d493c:	e1a00840 	mov	r0, r0, asr #16
         d4940:	e5840040 	str	r0, [r4, #64]
         d4944:	e59d0008 	ldr	r0, [sp, #8]
         d4948:	e59d103c 	ldr	r1, [sp, #60]
         d494c:	e5911000 	ldr	r1, [r1]
         d4950:	eb6c31db 	bl	1be10c4 <$FixedMultiply>
         d4954:	e2800902 	add	r0, r0, #32768	; 0x8000
         d4958:	e1a00840 	mov	r0, r0, asr #16
         d495c:	e1a00800 	mov	r0, r0, lsl #16
         d4960:	e1a00840 	mov	r0, r0, asr #16
         d4964:	e5840044 	str	r0, [r4, #68]
         d4968:	e595001e 	ldr	r0, [r5, #30]
         d496c:	e1a00840 	mov	r0, r0, asr #16
         d4970:	e5840048 	str	r0, [r4, #72]
         d4974:	e595001e 	ldr	r0, [r5, #30]
         d4978:	e1a00840 	mov	r0, r0, asr #16
         d497c:	e584004c 	str	r0, [r4, #76]
         d4980:	e595101e 	ldr	r1, [r5, #30]
         d4984:	e1a01841 	mov	r1, r1, asr #16
         d4988:	e595001c 	ldr	r0, [r5, #28]
         d498c:	e0410840 	sub	r0, r1, r0, asr #16
         d4990:	e5840050 	str	r0, [r4, #80]
         d4994:	e595001e 	ldr	r0, [r5, #30]
         d4998:	e1a00840 	mov	r0, r0, asr #16
         d499c:	e595101c 	ldr	r1, [r5, #28]
         d49a0:	e0400841 	sub	r0, r0, r1, asr #16
         d49a4:	e5840054 	str	r0, [r4, #84]
         d49a8:	e5950020 	ldr	r0, [r5, #32]
         d49ac:	e1a00840 	mov	r0, r0, asr #16
         d49b0:	e584005c 	str	r0, [r4, #92]
         d49b4:	e5950022 	ldr	r0, [r5, #34]
         d49b8:	e1a00840 	mov	r0, r0, asr #16
         d49bc:	e5840060 	str	r0, [r4, #96]
         d49c0:	e5950012 	ldr	r0, [r5, #18]
         d49c4:	e1a00840 	mov	r0, r0, asr #16
         d49c8:	e5840058 	str	r0, [r4, #88]
         d49cc:	e595000c 	ldr	r0, [r5, #12]
         d49d0:	e1a00820 	mov	r0, r0, lsr #16
         d49d4:	e5c40065 	strb	r0, [r4, #101]
         d49d8:	e1a00440 	mov	r0, r0, asr #8
         d49dc:	e5c40064 	strb	r0, [r4, #100]
         d49e0:	e595000e 	ldr	r0, [r5, #14]
         d49e4:	e1a00820 	mov	r0, r0, lsr #16
         d49e8:	e5c40067 	strb	r0, [r4, #103]
         d49ec:	e1a00440 	mov	r0, r0, asr #8
         d49f0:	e5c40066 	strb	r0, [r4, #102]
         d49f4:	e5950010 	ldr	r0, [r5, #16]
         d49f8:	e1a00820 	mov	r0, r0, lsr #16
         d49fc:	e5c40069 	strb	r0, [r4, #105]
         d4a00:	e1a00440 	mov	r0, r0, asr #8
         d4a04:	e5c40068 	strb	r0, [r4, #104]
         d4a08:	e5950024 	ldr	r0, [r5, #36]
         d4a0c:	e1a00820 	mov	r0, r0, lsr #16
         d4a10:	e5c4006b 	strb	r0, [r4, #107]
         d4a14:	e1a00440 	mov	r0, r0, asr #8
         d4a18:	e5c4006a 	strb	r0, [r4, #106]
         d4a1c:	e5950026 	ldr	r0, [r5, #38]
         d4a20:	e1a00820 	mov	r0, r0, lsr #16
         d4a24:	e5c4006d 	strb	r0, [r4, #109]
         d4a28:	e1a00440 	mov	r0, r0, asr #8
         d4a2c:	e5c4006c 	strb	r0, [r4, #108]
         d4a30:	e5950028 	ldr	r0, [r5, #40]
         d4a34:	e1a00820 	mov	r0, r0, lsr #16
         d4a38:	e5c4006f 	strb	r0, [r4, #111]
         d4a3c:	e1a00440 	mov	r0, r0, asr #8
         d4a40:	e5c4006e 	strb	r0, [r4, #110]
         d4a44:	e595002a 	ldr	r0, [r5, #42]
         d4a48:	e1a00820 	mov	r0, r0, lsr #16
         d4a4c:	e5c40071 	strb	r0, [r4, #113]
         d4a50:	e1a00440 	mov	r0, r0, asr #8
         d4a54:	e5c40070 	strb	r0, [r4, #112]
         d4a58:	e59d0034 	ldr	r0, [sp, #52]
         d4a5c:	e3300001 	teq	r0, #1	; 0x1
         d4a60:	1a000003 	bne	d4a74 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x534>
         d4a64:	e5950008 	ldr	r0, [r5, #8]
         d4a68:	e5840078 	str	r0, [r4, #120]
         d4a6c:	e3a00000 	mov	r0, #0	; 0x0
         d4a70:	e5850008 	str	r0, [r5, #8]
         d4a74:	e3390000 	teq	r9, #0	; 0x0
         d4a78:	0a00000b 	beq	d4aac <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x56c>
         d4a7c:	e595003a 	ldr	r0, [r5, #58]
         d4a80:	e1a00820 	mov	r0, r0, lsr #16
         d4a84:	e5c400a9 	strb	r0, [r4, #169]
         d4a88:	e1a00440 	mov	r0, r0, asr #8
         d4a8c:	e5c400a8 	strb	r0, [r4, #168]
         d4a90:	e595003c 	ldr	r0, [r5, #60]
         d4a94:	e1a00820 	mov	r0, r0, lsr #16
         d4a98:	e5c400ab 	strb	r0, [r4, #171]
         d4a9c:	e1a00440 	mov	r0, r0, asr #8
         d4aa0:	e5c400aa 	strb	r0, [r4, #170]
         d4aa4:	e5d5003e 	ldrb	r0, [r5, #62]
         d4aa8:	e5c400ac 	strb	r0, [r4, #172]
         d4aac:	e3370000 	teq	r7, #0	; 0x0
         d4ab0:	0a000006 	beq	d4ad0 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x590>
         d4ab4:	e1a02006 	mov	r2, r6
         d4ab8:	e1a01007 	mov	r1, r7
         d4abc:	e1a00004 	mov	r0, r4
         d4ac0:	eb694a3b 	bl	1b273b4 <$GCWriteRW(TStrXrUnit *, GCRecResults *, int)>
         d4ac4:	e3700007 	cmn	r0, #7	; 0x7
         d4ac8:	03a00001 	moveq	r0, #1	; 0x1
         d4acc:	058d0024 	streq	r0, [sp, #36]
         d4ad0:	e59b0008 	ldr	r0, [fp, #8]
         d4ad4:	e5d000ae 	ldrb	r0, [r0, #174]
         d4ad8:	e3300000 	teq	r0, #0	; 0x0
         d4adc:	1a00000c 	bne	d4b14 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x5d4>
         d4ae0:	e59b001c 	ldr	r0, [fp, #28]
         d4ae4:	e3300000 	teq	r0, #0	; 0x0
         d4ae8:	e59b0004 	ldr	r0, [fp, #4]
         d4aec:	e5900008 	ldr	r0, [r0, #8]
         d4af0:	e1a01004 	mov	r1, r4
         d4af4:	0a000001 	beq	d4b00 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x5c0>
         d4af8:	eb6a3176 	bl	1b610d8 <TController::$NewClassification(TUnit *)>
         d4afc:	ea000004 	b	d4b14 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x5d4>
         d4b00:	eb6a3176 	bl	1b610e0 <TController::$NewGroup(TUnit *)>
         d4b04:	e1a00004 	mov	r0, r4
         d4b08:	e5941000 	ldr	r1, [r4]
         d4b0c:	e1a0e00f 	mov	lr, pc
         d4b10:	e281f060 	add	pc, r1, #96	; 0x60
         d4b14:	e5950000 	ldr	r0, [r5]
         d4b18:	e3100c0f 	tst	r0, #3840	; 0xf00
         d4b1c:	059d0024 	ldreq	r0, [sp, #36]
         d4b20:	03300000 	teqeq	r0, #0	; 0x0
         d4b24:	0a000003 	beq	d4b38 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x5f8>
         d4b28:	e1a00004 	mov	r0, r4
         d4b2c:	e3a01501 	mov	r1, #4194304	; 0x400000
         d4b30:	eb6a358f 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
         d4b34:	ea000001 	b	d4b40 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0x600>
         d4b38:	e59b3010 	ldr	r3, [fp, #16]
         d4b3c:	e5834000 	str	r4, [r3]
         d4b40:	e2866001 	add	r6, r6, #1	; 0x1
         d4b44:	e59d0034 	ldr	r0, [sp, #52]
         d4b48:	e1560000 	cmp	r6, r0
         d4b4c:	bafffeac 	blt	d4604 <WriteRecResults(TStrXrDomain *, TStrXrUnit *, TStrokeUnit *, TStrXrUnit **, GCWordDescrType *, short, unsigned int, unsigned int *)+0xc4>
         d4b50:	e3a04000 	mov	r4, #0	; 0x0
         d4b54:	e3350000 	teq	r5, #0	; 0x0
         d4b58:	13370000 	teqne	r7, #0	; 0x0
         d4b5c:	15b50004 	ldrne	r0, [r5, #4]!
         d4b60:	1b692d1f 	blne	1b1ffe4 <$GCUnlockRecResultsHandle(unsigned long)>
         d4b64:	e1a00004 	mov	r0, r4
         d4b68:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WedgeBox__FP5TRectsT2
 * Address: 000e148c
 */
void globals::WedgeBox() {
    /*
         e148c:	e1a0c00d 	mov	ip, sp
         e1490:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         e1494:	e24cb004 	sub	fp, ip, #4	; 0x4
         e1498:	e1a04000 	mov	r4, r0
         e149c:	e1a05801 	mov	r5, r1, lsl #16
         e14a0:	e1a05845 	mov	r5, r5, asr #16
         e14a4:	e24dd004 	sub	sp, sp, #4	; 0x4
         e14a8:	e5909002 	ldr	r9, [r0, #2]
         e14ac:	e1a09849 	mov	r9, r9, asr #16
         e14b0:	e5908000 	ldr	r8, [r0]
         e14b4:	e1a08848 	mov	r8, r8, asr #16
         e14b8:	e5907006 	ldr	r7, [r0, #6]
         e14bc:	e1a07847 	mov	r7, r7, asr #16
         e14c0:	e5906004 	ldr	r6, [r0, #4]
         e14c4:	e1a06846 	mov	r6, r6, asr #16
         e14c8:	e1a01004 	mov	r1, r4
         e14cc:	e1a0000d 	mov	r0, sp
         e14d0:	eb02d8eb 	bl	197884 <TRect::MidPoint( const(void))>
         e14d4:	e355005a 	cmp	r5, #90	; 0x5a
         e14d8:	aa00000a 	bge	e1508 <WedgeBox__FP5TRectsT2+0x7c>
         e14dc:	e5c48001 	strb	r8, [r4, #1]
         e14e0:	e1a00448 	mov	r0, r8, asr #8
         e14e4:	e5c40000 	strb	r0, [r4]
         e14e8:	e59d0000 	ldr	r0, [sp]
         e14ec:	e5c40003 	strb	r0, [r4, #3]
         e14f0:	e1a00440 	mov	r0, r0, asr #8
         e14f4:	e5c40002 	strb	r0, [r4, #2]
         e14f8:	e59d0002 	ldr	r0, [sp, #2]
         e14fc:	e5c40005 	strb	r0, [r4, #5]
         e1500:	e1a00440 	mov	r0, r0, asr #8
         e1504:	ea00000b 	b	e1538 <WedgeBox__FP5TRectsT2+0xac>
         e1508:	e35500b4 	cmp	r5, #180	; 0xb4
         e150c:	aa00000d 	bge	e1548 <WedgeBox__FP5TRectsT2+0xbc>
         e1510:	e59d0002 	ldr	r0, [sp, #2]
         e1514:	e5c40001 	strb	r0, [r4, #1]
         e1518:	e1a00440 	mov	r0, r0, asr #8
         e151c:	e5c40000 	strb	r0, [r4]
         e1520:	e59d0000 	ldr	r0, [sp]
         e1524:	e5c40003 	strb	r0, [r4, #3]
         e1528:	e1a00440 	mov	r0, r0, asr #8
         e152c:	e5c40002 	strb	r0, [r4, #2]
         e1530:	e5c46005 	strb	r6, [r4, #5]
         e1534:	e1a00446 	mov	r0, r6, asr #8
         e1538:	e5c40004 	strb	r0, [r4, #4]
         e153c:	e5c47007 	strb	r7, [r4, #7]
         e1540:	e1a00447 	mov	r0, r7, asr #8
         e1544:	ea000019 	b	e15b0 <WedgeBox__FP5TRectsT2+0x124>
         e1548:	e255cf43 	subs	ip, r5, #268	; 0x10c
         e154c:	a35c0002 	cmpge	ip, #2	; 0x2
         e1550:	aa000009 	bge	e157c <WedgeBox__FP5TRectsT2+0xf0>
         e1554:	e59d0002 	ldr	r0, [sp, #2]
         e1558:	e5c40001 	strb	r0, [r4, #1]
         e155c:	e1a00440 	mov	r0, r0, asr #8
         e1560:	e5c40000 	strb	r0, [r4]
         e1564:	e5c49003 	strb	r9, [r4, #3]
         e1568:	e1a00449 	mov	r0, r9, asr #8
         e156c:	e5c40002 	strb	r0, [r4, #2]
         e1570:	e5c46005 	strb	r6, [r4, #5]
         e1574:	e1a00446 	mov	r0, r6, asr #8
         e1578:	ea000008 	b	e15a0 <WedgeBox__FP5TRectsT2+0x114>
         e157c:	e5c48001 	strb	r8, [r4, #1]
         e1580:	e1a00448 	mov	r0, r8, asr #8
         e1584:	e5c40000 	strb	r0, [r4]
         e1588:	e5c49003 	strb	r9, [r4, #3]
         e158c:	e1a00449 	mov	r0, r9, asr #8
         e1590:	e5c40002 	strb	r0, [r4, #2]
         e1594:	e59d0002 	ldr	r0, [sp, #2]
         e1598:	e5c40005 	strb	r0, [r4, #5]
         e159c:	e1a00440 	mov	r0, r0, asr #8
         e15a0:	e5c40004 	strb	r0, [r4, #4]
         e15a4:	e59d0000 	ldr	r0, [sp]
         e15a8:	e5c40007 	strb	r0, [r4, #7]
         e15ac:	e1a00440 	mov	r0, r0, asr #8
         e15b0:	e5c40006 	strb	r0, [r4, #6]
         e15b4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: WhichHandlerPresent(unsigned long)
 * Address: 000e5d00
 */
WhichHandlerPresent(unsigned long) {
    /*
         e5d00:	e1a0c00d 	mov	ip, sp
         e5d04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         e5d08:	e24cb004 	sub	fp, ip, #4	; 0x4
         e5d0c:	e1a04000 	mov	r4, r0
         e5d10:	e1a01000 	mov	r1, r0
         e5d14:	e59f501c 	ldr	r5, [pc, #1c]	; e5d38 <WhichHandlerPresent(unsigned long)+0x38>
         e5d18:	e5950000 	ldr	r0, [r5]
         e5d1c:	eb65f534 	bl	1a631f4 <$FindInterrupt(InterruptObject *, unsigned long)>
         e5d20:	e3300000 	teq	r0, #0	; 0x0
         e5d24:	01a01004 	moveq	r1, r4
         e5d28:	05b50004 	ldreq	r0, [r5, #4]!
         e5d2c:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         e5d30:	0a65f52f 	beq	1a631f4 <$FindInterrupt(InterruptObject *, unsigned long)>
         e5d34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         e5d38:	0c100e3c 	ldceq	14, cr0, [r0], -#240
    */
}

/**
 * Symbol: WrapLargeObject
 * Address: 00100e5c
 */
void globals::WrapLargeObject() {
    /*
        100e5c:	e1a0c00d 	mov	ip, sp
        100e60:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        100e64:	e24cb004 	sub	fp, ip, #4	; 0x4
        100e68:	e1a06001 	mov	r6, r1
        100e6c:	e1a05002 	mov	r5, r2
        100e70:	e1a04003 	mov	r4, r3
        100e74:	eb6bc6b6 	bl	1bf2954 <$ToObject(TStore *)>
        100e78:	eb6b04b3 	bl	1bc214c <$AllocateRefHandle(long)>
        100e7c:	e1a08000 	mov	r8, r0
        100e80:	e5900000 	ldr	r0, [r0]
        100e84:	e59f9074 	ldr	r9, [pc, #74]	; 100f00 <WrapLargeObject+0xa4>
        100e88:	e3300002 	teq	r0, #2	; 0x2
        100e8c:	1a000003 	bne	100ea0 <WrapLargeObject+0x44>
        100e90:	e59f106c 	ldr	r1, [pc, #6c]	; 100f04 <WrapLargeObject+0xa8>
        100e94:	e3a02000 	mov	r2, #0	; 0x0
        100e98:	e5990000 	ldr	r0, [r9]
        100e9c:	eb6b88be 	bl	1be319c <$Throw>
        100ea0:	e5980000 	ldr	r0, [r8]
        100ea4:	e59f105c 	ldr	r1, [pc, #5c]	; 100f08 <WrapLargeObject+0xac>
        100ea8:	e5911000 	ldr	r1, [r1]
        100eac:	e5911000 	ldr	r1, [r1]
        100eb0:	eb6b0cea 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        100eb4:	e1a07000 	mov	r7, r0
        100eb8:	e5900094 	ldr	r0, [r0, #148]
        100ebc:	e3300000 	teq	r0, #0	; 0x0
        100ec0:	1a000004 	bne	100ed8 <WrapLargeObject+0x7c>
        100ec4:	e3e01081 	mvn	r1, #129	; 0x81
        100ec8:	e2411cbb 	sub	r1, r1, #47872	; 0xbb00
        100ecc:	e3a02000 	mov	r2, #0	; 0x0
        100ed0:	e5990000 	ldr	r0, [r9]
        100ed4:	eb6b88b0 	bl	1be319c <$Throw>
        100ed8:	e597007c 	ldr	r0, [r7, #124]
        100edc:	eb64f3e8 	bl	1a3de84 <$CheckWriteProtect(TStore *)>
        100ee0:	e1a01005 	mov	r1, r5
        100ee4:	e5970094 	ldr	r0, [r7, #148]
        100ee8:	eb65216d 	bl	1a494a4 <TEphemeralTracker::$AddEphemeral(unsigned long)>
        100eec:	e3340000 	teq	r4, #0	; 0x0
        100ef0:	0a000005 	beq	100f0c <WrapLargeObject+0xb0>
        100ef4:	e1a00004 	mov	r0, r4
        100ef8:	eb6829b8 	bl	1b0b5e0 <$ObjectSize(unsigned long)>
        100efc:	ea000003 	b	100f10 <WrapLargeObject+0xb4>
        100f00:	003712fc 	ldreqsh	r1, [r7], -ip
        100f04:	ffff446f 	swinv	0x00ff446f
        100f08:	00684868 	rsbeq	r4, r8, r8, ror #16
        100f0c:	e3a00000 	mov	r0, #0	; 0x0
        100f10:	e1a0a000 	mov	sl, r0
        100f14:	e24dd008 	sub	sp, sp, #8	; 0x8
        100f18:	e1a01006 	mov	r1, r6
        100f1c:	e1a00007 	mov	r0, r7
        100f20:	eb650cc0 	bl	1a44228 <TStoreWrapper::$SymbolToReference(RefVar const &)>
        100f24:	e1a09000 	mov	r9, r0
        100f28:	e1a03007 	mov	r3, r7
        100f2c:	e1a0200a 	mov	r2, sl
        100f30:	e1a01000 	mov	r1, r0
        100f34:	e1a00006 	mov	r0, r6
        100f38:	eb6514f3 	bl	1a4630c <$AllocateLargeBinary__FRC6RefVarlT2P13TStoreWrapper>
        100f3c:	eb6b0482 	bl	1bc214c <$AllocateRefHandle(long)>
        100f40:	e58d0004 	str	r0, [sp, #4]
        100f44:	e5900000 	ldr	r0, [r0]
        100f48:	eb6b10e9 	bl	1bc52f4 <$ObjectPtr(long)>
        100f4c:	e2800010 	add	r0, r0, #16	; 0x10
        100f50:	e5a05004 	str	r5, [r0, #4]!
        100f54:	e5a09008 	str	r9, [r0, #8]!
        100f58:	e5804004 	str	r4, [r0, #4]
        100f5c:	e59f0038 	ldr	r0, [pc, #38]	; 100f9c <WrapLargeObject+0x140>
        100f60:	e5900020 	ldr	r0, [r0, #32]
        100f64:	eb6b0478 	bl	1bc214c <$AllocateRefHandle(long)>
        100f68:	e58d0000 	str	r0, [sp]
        100f6c:	e1a0000d 	mov	r0, sp
        100f70:	e28d1004 	add	r1, sp, #4	; 0x4
        100f74:	eb650475 	bl	1a42150 <$PutEntryIntoCache__FRC6RefVarT1>
        100f78:	e59d0000 	ldr	r0, [sp]
        100f7c:	eb6b088e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        100f80:	e59d0004 	ldr	r0, [sp, #4]
        100f84:	e5904000 	ldr	r4, [r0]
        100f88:	eb6b088b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        100f8c:	e1a00008 	mov	r0, r8
        100f90:	eb6b0889 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        100f94:	e1a00004 	mov	r0, r4
        100f98:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        100f9c:	0c1010a0 	ldceq	0, cr1, [r0], -#640
    */
}

/**
 * Symbol: WhereIsBook
 * Address: 0010bfdc
 */
void globals::WhereIsBook() {
    /*
        10bfdc:	e1a0c00d 	mov	ip, sp
        10bfe0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10bfe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        10bfe8:	e1a05000 	mov	r5, r0
        10bfec:	e1a04001 	mov	r4, r1
        10bff0:	e24dd008 	sub	sp, sp, #8	; 0x8
        10bff4:	e3a00002 	mov	r0, #2	; 0x2
        10bff8:	eb6ad853 	bl	1bc214c <$AllocateRefHandle(long)>
        10bffc:	e58d0004 	str	r0, [sp, #4]
        10c000:	e3a00002 	mov	r0, #2	; 0x2
        10c004:	eb6ad850 	bl	1bc214c <$AllocateRefHandle(long)>
        10c008:	e1a06000 	mov	r6, r0
        10c00c:	e5940000 	ldr	r0, [r4]
        10c010:	e5900000 	ldr	r0, [r0]
        10c014:	eb6ad84c 	bl	1bc214c <$AllocateRefHandle(long)>
        10c018:	e58d0000 	str	r0, [sp]
        10c01c:	e5940000 	ldr	r0, [r4]
        10c020:	e5900000 	ldr	r0, [r0]
        10c024:	e3300002 	teq	r0, #2	; 0x2
        10c028:	1a000006 	bne	10c048 <WhereIsBook+0x6c>
        10c02c:	e59f10bc 	ldr	r1, [pc, #bc]	; 10c0f0 <WhereIsBook+0x114>
        10c030:	e1a00005 	mov	r0, r5
        10c034:	e3a03000 	mov	r3, #0	; 0x0
        10c038:	e3a02000 	mov	r2, #0	; 0x0
        10c03c:	eb6ae08c 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        10c040:	e59d1000 	ldr	r1, [sp]
        10c044:	e5810000 	str	r0, [r1]
        10c048:	e1a0100d 	mov	r1, sp
        10c04c:	e59f40a0 	ldr	r4, [pc, #a0]	; 10c0f4 <WhereIsBook+0x118>
        10c050:	e5940000 	ldr	r0, [r4]
        10c054:	eb66fd5a 	bl	1acb5c4 <TLibrarian::$GetLibraryEntry(RefVar const &)>
        10c058:	e59d1004 	ldr	r1, [sp, #4]
        10c05c:	e5810000 	str	r0, [r1]
        10c060:	e24dd004 	sub	sp, sp, #4	; 0x4
        10c064:	eb6ad835 	bl	1bc2140 <$AllocateFrame(void)>
        10c068:	eb6ad837 	bl	1bc214c <$AllocateRefHandle(long)>
        10c06c:	e58d0000 	str	r0, [sp]
        10c070:	e28d2008 	add	r2, sp, #8	; 0x8
        10c074:	e59f107c 	ldr	r1, [pc, #7c]	; 10c0f8 <WhereIsBook+0x11c>
        10c078:	e1a0000d 	mov	r0, sp
        10c07c:	eb6ae8b9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10c080:	e28d1004 	add	r1, sp, #4	; 0x4
        10c084:	e5940000 	ldr	r0, [r4]
        10c088:	eb665c5b 	bl	1aa31fc <TLibrarian::$StrRefToSymbol(RefVar const &)>
        10c08c:	e5860000 	str	r0, [r6]
        10c090:	e24dd004 	sub	sp, sp, #4	; 0x4
        10c094:	e5941000 	ldr	r1, [r4]
        10c098:	e2812004 	add	r2, r1, #4	; 0x4
        10c09c:	e1a01000 	mov	r1, r0
        10c0a0:	e5920000 	ldr	r0, [r2]
        10c0a4:	e5900000 	ldr	r0, [r0]
        10c0a8:	eb6ae06c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10c0ac:	eb6ad826 	bl	1bc214c <$AllocateRefHandle(long)>
        10c0b0:	e58d0000 	str	r0, [sp]
        10c0b4:	e5900000 	ldr	r0, [r0]
        10c0b8:	e3300002 	teq	r0, #2	; 0x2
        10c0bc:	1a00000e 	bne	10c0fc <WhereIsBook+0x120>
        10c0c0:	e59d0000 	ldr	r0, [sp]
        10c0c4:	eb6adc3c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c0c8:	e59d0004 	ldr	r0, [sp, #4]
        10c0cc:	eb6adc3a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c0d0:	e59d0008 	ldr	r0, [sp, #8]
        10c0d4:	eb6adc38 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c0d8:	e1a00006 	mov	r0, r6
        10c0dc:	eb6adc36 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c0e0:	e59d000c 	ldr	r0, [sp, #12]
        10c0e4:	eb6adc34 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c0e8:	e3a00002 	mov	r0, #2	; 0x2
        10c0ec:	ea000013 	b	10c140 <WhereIsBook+0x164>
        10c0f0:	00683308 	rsbeq	r3, r8, r8, lsl #6
        10c0f4:	0c1010d0 	ldceq	0, cr1, [r0], -#832
        10c0f8:	00683560 	rsbeq	r3, r8, r0, ror #10
        10c0fc:	e1a0200d 	mov	r2, sp
        10c100:	e59f103c 	ldr	r1, [pc, #3c]	; 10c144 <WhereIsBook+0x168>
        10c104:	e28d0004 	add	r0, sp, #4	; 0x4
        10c108:	eb6ae896 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10c10c:	e59d0004 	ldr	r0, [sp, #4]
        10c110:	e5904000 	ldr	r4, [r0]
        10c114:	e59d0000 	ldr	r0, [sp]
        10c118:	eb6adc27 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c11c:	e59d0004 	ldr	r0, [sp, #4]
        10c120:	eb6adc25 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c124:	e59d0008 	ldr	r0, [sp, #8]
        10c128:	eb6adc23 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c12c:	e1a00006 	mov	r0, r6
        10c130:	eb6adc21 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c134:	e59d000c 	ldr	r0, [sp, #12]
        10c138:	eb6adc1f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10c13c:	e1a00004 	mov	r0, r4
        10c140:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        10c144:	00682178 	rsbeq	r2, r8, r8, ror r1
    */
}

/**
 * Symbol: WriteFile(short, long *, void const *)
 * Address: 0011b8b4
 */
WriteFile(short, long *, void const *) {
    /*
        11b8b4:	e1a00800 	mov	r0, r0, lsl #16
        11b8b8:	e1a00840 	mov	r0, r0, asr #16
        11b8bc:	ea693f44 	b	1b6b5d4 <$FSWrite>
    */
}

/**
 * Symbol: WeekInMonthString(long, unsigned short *)
 * Address: 001214a8
 */
WeekInMonthString(long, unsigned short *) {
    /*
        1214a8:	e1a0c00d 	mov	ip, sp
        1214ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1214b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1214b4:	e1a05000 	mov	r5, r0
        1214b8:	e1a04001 	mov	r4, r1
        1214bc:	e24dd014 	sub	sp, sp, #20	; 0x14
        1214c0:	e2000efe 	and	r0, r0, #4064	; 0xfe0
        1214c4:	eb65b8c6 	bl	1a8f7e4 <$DayMaskToIndex(long)>
        1214c8:	e1a06000 	mov	r6, r0
        1214cc:	e205001f 	and	r0, r5, #31	; 0x1f
        1214d0:	e330001f 	teq	r0, #31	; 0x1f
        1214d4:	1a000003 	bne	1214e8 <WeekInMonthString(long, unsigned short *)+0x40>
        1214d8:	e1a01004 	mov	r1, r4
        1214dc:	e1a00005 	mov	r0, r5
        1214e0:	eb65c523 	bl	1a92974 <$EveryDayString(long, unsigned short *)>
        1214e4:	ea000060 	b	12166c <WeekInMonthString(long, unsigned short *)+0x1c4>
        1214e8:	e1a01005 	mov	r1, r5
        1214ec:	e1a0000d 	mov	r0, sp
        1214f0:	eb660f6a 	bl	1aa52a0 <$UnPackWeeks(long *, long)>
        1214f4:	e3500004 	cmp	r0, #4	; 0x4
        1214f8:	908ff100 	addls	pc, pc, r0, lsl #2
        1214fc:	ea00005a 	b	12166c <WeekInMonthString(long, unsigned short *)+0x1c4>
        121500:	ea000059 	b	12166c <WeekInMonthString(long, unsigned short *)+0x1c4>
        121504:	ea00001d 	b	121580 <WeekInMonthString(long, unsigned short *)+0xd8>
        121508:	ea00002c 	b	1215c0 <WeekInMonthString(long, unsigned short *)+0x118>
        12150c:	ea00003f 	b	121610 <WeekInMonthString(long, unsigned short *)+0x168>
        121510:	e1a00006 	mov	r0, r6
        121514:	eb65b8b3 	bl	1a8f7e8 <$DayName(long)>
        121518:	e1a03000 	mov	r3, r0
        12151c:	e92d0008 	stmdb	sp!, {r3}
        121520:	e59d0010 	ldr	r0, [sp, #16]
        121524:	eb65a81e 	bl	1a8b5a4 <$CalendarString(long)>
        121528:	e1a03000 	mov	r3, r0
        12152c:	e92d0008 	stmdb	sp!, {r3}
        121530:	e59d0010 	ldr	r0, [sp, #16]
        121534:	eb65a81a 	bl	1a8b5a4 <$CalendarString(long)>
        121538:	e1a03000 	mov	r3, r0
        12153c:	e92d0008 	stmdb	sp!, {r3}
        121540:	e59d0010 	ldr	r0, [sp, #16]
        121544:	eb65a816 	bl	1a8b5a4 <$CalendarString(long)>
        121548:	e1a03000 	mov	r3, r0
        12154c:	e92d0008 	stmdb	sp!, {r3}
        121550:	e59d0010 	ldr	r0, [sp, #16]
        121554:	eb65a812 	bl	1a8b5a4 <$CalendarString(long)>
        121558:	e1a05000 	mov	r5, r0
        12155c:	e3a00010 	mov	r0, #16	; 0x10
        121560:	eb65a80f 	bl	1a8b5a4 <$CalendarString(long)>
        121564:	e1a02000 	mov	r2, r0
        121568:	e1a00004 	mov	r0, r4
        12156c:	e3a01063 	mov	r1, #99	; 0x63
        121570:	e1a03005 	mov	r3, r5
        121574:	eb6b280d 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        121578:	e28dd010 	add	sp, sp, #16	; 0x10
        12157c:	ea00003a 	b	12166c <WeekInMonthString(long, unsigned short *)+0x1c4>
        121580:	e1a00006 	mov	r0, r6
        121584:	eb65b897 	bl	1a8f7e8 <$DayName(long)>
        121588:	e1a03000 	mov	r3, r0
        12158c:	e92d0008 	stmdb	sp!, {r3}
        121590:	e59d0004 	ldr	r0, [sp, #4]
        121594:	eb65a802 	bl	1a8b5a4 <$CalendarString(long)>
        121598:	e1a05000 	mov	r5, r0
        12159c:	e3a0000d 	mov	r0, #13	; 0xd
        1215a0:	eb65a7ff 	bl	1a8b5a4 <$CalendarString(long)>
        1215a4:	e1a02000 	mov	r2, r0
        1215a8:	e1a00004 	mov	r0, r4
        1215ac:	e3a01063 	mov	r1, #99	; 0x63
        1215b0:	e1a03005 	mov	r3, r5
        1215b4:	eb6b27fd 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        1215b8:	e28dd004 	add	sp, sp, #4	; 0x4
        1215bc:	ea00002a 	b	12166c <WeekInMonthString(long, unsigned short *)+0x1c4>
        1215c0:	e1a00006 	mov	r0, r6
        1215c4:	eb65b887 	bl	1a8f7e8 <$DayName(long)>
        1215c8:	e1a03000 	mov	r3, r0
        1215cc:	e92d0008 	stmdb	sp!, {r3}
        1215d0:	e59d0008 	ldr	r0, [sp, #8]
        1215d4:	eb65a7f2 	bl	1a8b5a4 <$CalendarString(long)>
        1215d8:	e1a03000 	mov	r3, r0
        1215dc:	e92d0008 	stmdb	sp!, {r3}
        1215e0:	e59d0008 	ldr	r0, [sp, #8]
        1215e4:	eb65a7ee 	bl	1a8b5a4 <$CalendarString(long)>
        1215e8:	e1a05000 	mov	r5, r0
        1215ec:	e3a0000e 	mov	r0, #14	; 0xe
        1215f0:	eb65a7eb 	bl	1a8b5a4 <$CalendarString(long)>
        1215f4:	e1a02000 	mov	r2, r0
        1215f8:	e1a00004 	mov	r0, r4
        1215fc:	e3a01063 	mov	r1, #99	; 0x63
        121600:	e1a03005 	mov	r3, r5
        121604:	eb6b27e9 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        121608:	e28dd008 	add	sp, sp, #8	; 0x8
        12160c:	ea000016 	b	12166c <WeekInMonthString(long, unsigned short *)+0x1c4>
        121610:	e1a00006 	mov	r0, r6
        121614:	eb65b873 	bl	1a8f7e8 <$DayName(long)>
        121618:	e1a03000 	mov	r3, r0
        12161c:	e92d0008 	stmdb	sp!, {r3}
        121620:	e59d000c 	ldr	r0, [sp, #12]
        121624:	eb65a7de 	bl	1a8b5a4 <$CalendarString(long)>
        121628:	e1a03000 	mov	r3, r0
        12162c:	e92d0008 	stmdb	sp!, {r3}
        121630:	e59d000c 	ldr	r0, [sp, #12]
        121634:	eb65a7da 	bl	1a8b5a4 <$CalendarString(long)>
        121638:	e1a03000 	mov	r3, r0
        12163c:	e92d0008 	stmdb	sp!, {r3}
        121640:	e59d000c 	ldr	r0, [sp, #12]
        121644:	eb65a7d6 	bl	1a8b5a4 <$CalendarString(long)>
        121648:	e1a05000 	mov	r5, r0
        12164c:	e3a0000f 	mov	r0, #15	; 0xf
        121650:	eb65a7d3 	bl	1a8b5a4 <$CalendarString(long)>
        121654:	e1a02000 	mov	r2, r0
        121658:	e1a00004 	mov	r0, r4
        12165c:	e3a01063 	mov	r1, #99	; 0x63
        121660:	e1a03005 	mov	r3, r5
        121664:	eb6b27d1 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        121668:	e28dd00c 	add	sp, sp, #12	; 0xc
        12166c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: WeekInYearString(long, unsigned short *)
 * Address: 00121cfc
 */
WeekInYearString(long, unsigned short *) {
    /*
        121cfc:	e1a0c00d 	mov	ip, sp
        121d00:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        121d04:	e24cb004 	sub	fp, ip, #4	; 0x4
        121d08:	e1a04000 	mov	r4, r0
        121d0c:	e1a05001 	mov	r5, r1
        121d10:	e24dd040 	sub	sp, sp, #64	; 0x40
        121d14:	e2000efe 	and	r0, r0, #4064	; 0xfe0
        121d18:	eb65b6b1 	bl	1a8f7e4 <$DayMaskToIndex(long)>
        121d1c:	e1a06000 	mov	r6, r0
        121d20:	e1a01004 	mov	r1, r4
        121d24:	e28d002c 	add	r0, sp, #44	; 0x2c
        121d28:	eb660d5c 	bl	1aa52a0 <$UnPackWeeks(long *, long)>
        121d2c:	e24dd028 	sub	sp, sp, #40	; 0x28
        121d30:	e1a0000d 	mov	r0, sp
        121d34:	eb6b7480 	bl	1bfef3c <TDate::$__ct(void)>
        121d38:	e3a0000f 	mov	r0, #15	; 0xf
        121d3c:	e0000644 	and	r0, r0, r4, asr #12
        121d40:	e3a03001 	mov	r3, #1	; 0x1
        121d44:	e3a02014 	mov	r2, #20	; 0x14
        121d48:	e58d0004 	str	r0, [sp, #4]
        121d4c:	e92d000c 	stmdb	sp!, {r2, r3}
        121d50:	e28d3030 	add	r3, sp, #48	; 0x30
        121d54:	e28d0008 	add	r0, sp, #8	; 0x8
        121d58:	e3a02001 	mov	r2, #1	; 0x1
        121d5c:	e3a01003 	mov	r1, #3	; 0x3
        121d60:	eb6b7477 	bl	1bfef44 <TDate::$DateElementString(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned char)>
        121d64:	e28dd008 	add	sp, sp, #8	; 0x8
        121d68:	e28d3028 	add	r3, sp, #40	; 0x28
        121d6c:	e92d0008 	stmdb	sp!, {r3}
        121d70:	e1a00006 	mov	r0, r6
        121d74:	eb65b69b 	bl	1a8f7e8 <$DayName(long)>
        121d78:	e1a03000 	mov	r3, r0
        121d7c:	e92d0008 	stmdb	sp!, {r3}
        121d80:	e59d005c 	ldr	r0, [sp, #92]
        121d84:	eb65a606 	bl	1a8b5a4 <$CalendarString(long)>
        121d88:	e1a04000 	mov	r4, r0
        121d8c:	e3a00013 	mov	r0, #19	; 0x13
        121d90:	eb65a603 	bl	1a8b5a4 <$CalendarString(long)>
        121d94:	e1a02000 	mov	r2, r0
        121d98:	e1a00005 	mov	r0, r5
        121d9c:	e3a01063 	mov	r1, #99	; 0x63
        121da0:	e1a03004 	mov	r3, r4
        121da4:	eb6b2601 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        121da8:	e28dd008 	add	sp, sp, #8	; 0x8
        121dac:	e59d0024 	ldr	r0, [sp, #36]
        121db0:	eb6a8501 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121db4:	e59d0020 	ldr	r0, [sp, #32]
        121db8:	eb6a84ff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121dbc:	e59d001c 	ldr	r0, [sp, #28]
        121dc0:	eb6a84fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121dc4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)
 * Address: 00143f00
 */
WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *) {
    /*
        143f00:	e1a0c00d 	mov	ip, sp
        143f04:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        143f08:	e24cb004 	sub	fp, ip, #4	; 0x4
        143f0c:	e1a05000 	mov	r5, r0
        143f10:	e1a04001 	mov	r4, r1
        143f14:	e5901000 	ldr	r1, [r0]
        143f18:	e1a0e00f 	mov	lr, pc
        143f1c:	e281f010 	add	pc, r1, #16	; 0x10
        143f20:	e1a07000 	mov	r7, r0
        143f24:	e1a00004 	mov	r0, r4
        143f28:	eb657c95 	bl	1aa3184 <TUnitPublic::$SetWordBase(void)>
        143f2c:	e1a00004 	mov	r0, r4
        143f30:	eb65c6e2 	bl	1ab5ac0 <TUnitPublic::$IsTap(void)>
        143f34:	e59f6114 	ldr	r6, [pc, #114]	; 144050 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x150>
        143f38:	e3a08000 	mov	r8, #0	; 0x0
        143f3c:	e3300000 	teq	r0, #0	; 0x0
        143f40:	13a07031 	movne	r7, #49	; 0x31
        143f44:	1a00002e 	bne	144004 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x104>
        143f48:	e1a01004 	mov	r1, r4
        143f4c:	e1a00005 	mov	r0, r5
        143f50:	e5952000 	ldr	r2, [r5]
        143f54:	e1a0e00f 	mov	lr, pc
        143f58:	e282f024 	add	pc, r2, #36	; 0x24
        143f5c:	e3300002 	teq	r0, #2	; 0x2
        143f60:	1a000027 	bne	144004 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x104>
        143f64:	e24dd004 	sub	sp, sp, #4	; 0x4
        143f68:	e1a00004 	mov	r0, r4
        143f6c:	eb65df9f 	bl	1abbdf0 <TUnitPublic::$WordInfo(void)>
        143f70:	eb69f875 	bl	1bc214c <$AllocateRefHandle(long)>
        143f74:	e58d0000 	str	r0, [sp]
        143f78:	e1a0000d 	mov	r0, sp
        143f7c:	e3a01008 	mov	r1, #8	; 0x8
        143f80:	eb65db68 	bl	1abad28 <$SetWordInfoFlags(RefVar const &, long)>
        143f84:	e1a0000d 	mov	r0, sp
        143f88:	eb65ba67 	bl	1ab292c <$GetInkCommand(RefVar const &)>
        143f8c:	e1a07000 	mov	r7, r0
        143f90:	e5960000 	ldr	r0, [r6]
        143f94:	e3100004 	tst	r0, #4	; 0x4
        143f98:	0a000016 	beq	143ff8 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0xf8>
        143f9c:	eb656bf1 	bl	1a9ef68 <$RealClock(void)>
        143fa0:	e1a01000 	mov	r1, r0
        143fa4:	e3a00e5a 	mov	r0, #1440	; 0x5a0
        143fa8:	eb69ba66 	bl	1bb2948 <$__rt_udiv>
        143fac:	e1a04000 	mov	r4, r0
        143fb0:	e59f509c 	ldr	r5, [pc, #9c]	; 144054 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x154>
        143fb4:	e5951004 	ldr	r1, [r5, #4]
        143fb8:	e1500001 	cmp	r0, r1
        143fbc:	9a00000d 	bls	143ff8 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0xf8>
        143fc0:	e24dd004 	sub	sp, sp, #4	; 0x4
        143fc4:	e5960000 	ldr	r0, [r6]
        143fc8:	e3100008 	tst	r0, #8	; 0x8
        143fcc:	03a0001a 	moveq	r0, #26	; 0x1a
        143fd0:	13a00002 	movne	r0, #2	; 0x2
        143fd4:	eb69f85c 	bl	1bc214c <$AllocateRefHandle(long)>
        143fd8:	e58d0000 	str	r0, [sp]
        143fdc:	e1a0100d 	mov	r1, sp
        143fe0:	e59f0070 	ldr	r0, [pc, #70]	; 144058 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x158>
        143fe4:	eb6af00d 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
        143fe8:	e59d0000 	ldr	r0, [sp]
        143fec:	eb69fc72 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        143ff0:	e5a54004 	str	r4, [r5, #4]!
        143ff4:	e28dd004 	add	sp, sp, #4	; 0x4
        143ff8:	e59d0000 	ldr	r0, [sp]
        143ffc:	eb69fc6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        144000:	e28dd004 	add	sp, sp, #4	; 0x4
        144004:	e59f4050 	ldr	r4, [pc, #50]	; 14405c <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x15c>
        144008:	e5940000 	ldr	r0, [r4]
        14400c:	e3300000 	teq	r0, #0	; 0x0
        144010:	15960000 	ldrne	r0, [r6]
        144014:	12000001 	andne	r0, r0, #1	; 0x1
        144018:	13300000 	teqne	r0, #0	; 0x0
        14401c:	0a00001a 	beq	14408c <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x18c>
        144020:	e59f0038 	ldr	r0, [pc, #38]	; 144060 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x160>
        144024:	eb654ab6 	bl	1a96b04 <$GetPreference(RefVar const &)>
        144028:	eb69f847 	bl	1bc214c <$AllocateRefHandle(long)>
        14402c:	e1a05000 	mov	r5, r0
        144030:	e5900000 	ldr	r0, [r0]
        144034:	e2001003 	and	r1, r0, #3	; 0x3
        144038:	e3510000 	cmp	r1, #0	; 0x0
        14403c:	1a000008 	bne	144064 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x164>
        144040:	01a00140 	moveq	r0, r0, asr #2
        144044:	0a000007 	beq	144068 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x168>
        144048:	eb69f833 	bl	1bc211c <$_RINTError(long)>
        14404c:	ea000005 	b	144068 <WordRecognizerHandleUnit(TRecognizer *, TUnitPublic *)+0x168>
        144050:	0c101688 	ldceq	6, cr1, [r0], -#544
        144054:	0c101680 	ldceq	6, cr1, [r0], -#512
        144058:	00684180 	rsbeq	r4, r8, r0, lsl #3
        14405c:	0c104f78 	ldceq	15, cr4, [r0], -#480
        144060:	00683490 	streqb	r3, [r8], -#64
        144064:	e3a00000 	mov	r0, #0	; 0x0
        144068:	e1a06000 	mov	r6, r0
        14406c:	eb656bbd 	bl	1a9ef68 <$RealClock(void)>
        144070:	e1a01000 	mov	r1, r0
        144074:	e3a00e5a 	mov	r0, #1440	; 0x5a0
        144078:	eb69ba32 	bl	1bb2948 <$__rt_udiv>
        14407c:	e1300006 	teq	r0, r6
        144080:	05848000 	streq	r8, [r4]
        144084:	e1a00005 	mov	r0, r5
        144088:	eb69fc4b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14408c:	e1a00007 	mov	r0, r7
        144090:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: WRecFindBaseline(TStroke **, Point *)
 * Address: 001444c4
 */
WRecFindBaseline(TStroke **, Point *) {
    /*
        1444c4:	ea676a9f 	b	1b1ef48 <$FindBaseline(TStroke **, Point *)>
    */
}

/**
 * Symbol: WRecVerifyWordSymbols(unsigned short *)
 * Address: 001444c8
 */
WRecVerifyWordSymbols(unsigned short *) {
    /*
        1444c8:	e1a0c00d 	mov	ip, sp
        1444cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1444d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1444d4:	e1a04000 	mov	r4, r0
        1444d8:	ebffffe4 	bl	144470 <FWRecIsBeingUsed+0x24>
        1444dc:	e3300000 	teq	r0, #0	; 0x0
        1444e0:	01a00004 	moveq	r0, r4
        1444e4:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        1444e8:	0a666a90 	beq	1adef30 <$VerifyWordSymbols(unsigned short *)>
        1444ec:	11a01004 	movne	r1, r4
        1444f0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        1444f4:	1a688798 	bne	1b6635c <TWRecDomain::$VerifyWordSymbols(unsigned short *)>
    */
}

/**
 * Symbol: WRecEndInkStrokeGroup(TStrokeUnit **)
 * Address: 00144cc8
 */
WRecEndInkStrokeGroup(TStrokeUnit **) {
    /*
        144cc8:	e1a01000 	mov	r1, r0
        144ccc:	e59f0000 	ldr	r0, [pc, #0]	; 144cd4 <WRecEndInkStrokeGroup(TStrokeUnit **)+0xc>
        144cd0:	ea65bf53 	b	1ab4a24 <StrokeCentral::$IGCompressGroup(TStrokeUnit **)>
        144cd4:	0c1018cc 	ldceq	8, cr1, [r0], -#816
    */
}

/**
 * Symbol: WipeInternalStore(unsigned long, PersistentDBEntry *)
 * Address: 00154918
 */
WipeInternalStore(unsigned long, PersistentDBEntry *) {
    /*
        154918:	e1a0c00d 	mov	ip, sp
        15491c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        154920:	e24cb004 	sub	fp, ip, #4	; 0x4
        154924:	e1a05000 	mov	r5, r0
        154928:	e1a04001 	mov	r4, r1
        15492c:	e5910020 	ldr	r0, [r1, #32]
        154930:	e3100080 	tst	r0, #128	; 0x80
        154934:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        154938:	e3a0103f 	mov	r1, #63	; 0x3f
        15493c:	e2842008 	add	r2, r4, #8	; 0x8
        154940:	e8920005 	ldmia	r2, {r0, r2}
        154944:	eb698043 	bl	1bb4a58 <$memset>
        154948:	e3a00002 	mov	r0, #2	; 0x2
        15494c:	eb6ab1d2 	bl	1c0109c <$InternalStoreInfo>
        154950:	e1b06000 	movs	r6, r0
        154954:	0a000004 	beq	15496c <WipeInternalStore(unsigned long, PersistentDBEntry *)+0x54>
        154958:	e3a00003 	mov	r0, #3	; 0x3
        15495c:	eb6ab1ce 	bl	1c0109c <$InternalStoreInfo>
        154960:	e1a02006 	mov	r2, r6
        154964:	e3a0103f 	mov	r1, #63	; 0x3f
        154968:	eb69803a 	bl	1bb4a58 <$memset>
        15496c:	e5940020 	ldr	r0, [r4, #32]
        154970:	e3c00080 	bic	r0, r0, #128	; 0x80
        154974:	e5840020 	str	r0, [r4, #32]
        154978:	e1a01004 	mov	r1, r4
        15497c:	e1a00005 	mov	r0, r5
        154980:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        154984:	ea08d884 	b	38ab9c <C$$dtorvec$$Limit+0x228>
    */
}

/**
 * Symbol: WordOverSpaces__FPUsClT2
 * Address: 0017bc84
 */
void globals::WordOverSpaces() {
    /*
        17bc84:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        17bc88:	e1a03000 	mov	r3, r0
        17bc8c:	e0420001 	sub	r0, r2, r1
        17bc90:	e1a0e000 	mov	lr, r0
        17bc94:	e3a02003 	mov	r2, #3	; 0x3
        17bc98:	e3500003 	cmp	r0, #3	; 0x3
        17bc9c:	d1a00002 	movle	r0, r2
        17bca0:	e1a0c000 	mov	ip, r0
        17bca4:	e3a02000 	mov	r2, #0	; 0x0
        17bca8:	e0831081 	add	r1, r3, r1, lsl #1
        17bcac:	e1a04001 	mov	r4, r1
        17bcb0:	e5915000 	ldr	r5, [r1]
        17bcb4:	e1a05825 	mov	r5, r5, lsr #16
        17bcb8:	e2811002 	add	r1, r1, #2	; 0x2
        17bcbc:	e3a00001 	mov	r0, #1	; 0x1
        17bcc0:	e3350020 	teq	r5, #32	; 0x20
        17bcc4:	1a000007 	bne	17bce8 <WordOverSpaces__FPUsClT2+0x64>
        17bcc8:	e2822001 	add	r2, r2, #1	; 0x1
        17bccc:	e152000c 	cmp	r2, ip
        17bcd0:	a8bd8030 	ldmgeia	sp!, {r4, r5, pc}
        17bcd4:	e5915000 	ldr	r5, [r1]
        17bcd8:	e1a05825 	mov	r5, r5, lsr #16
        17bcdc:	e2811002 	add	r1, r1, #2	; 0x2
        17bce0:	e3350020 	teq	r5, #32	; 0x20
        17bce4:	0afffff7 	beq	17bcc8 <WordOverSpaces__FPUsClT2+0x44>
        17bce8:	e3a01000 	mov	r1, #0	; 0x0
        17bcec:	e15e0002 	cmp	lr, r2
        17bcf0:	d244e002 	suble	lr, r4, #2	; 0x2
        17bcf4:	da000003 	ble	17bd08 <WordOverSpaces__FPUsClT2+0x84>
        17bcf8:	ea000009 	b	17bd24 <WordOverSpaces__FPUsClT2+0xa0>
        17bcfc:	e2822001 	add	r2, r2, #1	; 0x1
        17bd00:	e152000c 	cmp	r2, ip
        17bd04:	a8bd8030 	ldmgeia	sp!, {r4, r5, pc}
        17bd08:	e15e0003 	cmp	lr, r3
        17bd0c:	3a000004 	bcc	17bd24 <WordOverSpaces__FPUsClT2+0xa0>
        17bd10:	e59e4000 	ldr	r4, [lr]
        17bd14:	e1a04824 	mov	r4, r4, lsr #16
        17bd18:	e24ee002 	sub	lr, lr, #2	; 0x2
        17bd1c:	e3340020 	teq	r4, #32	; 0x20
        17bd20:	0afffff5 	beq	17bcfc <WordOverSpaces__FPUsClT2+0x78>
        17bd24:	e1a00001 	mov	r0, r1
        17bd28:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: WrapClassInfo(TClassInfo const *)
 * Address: 00194aec
 */
WrapClassInfo(TClassInfo const *) {
    /*
        194aec:	e1a0c00d 	mov	ip, sp
        194af0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        194af4:	e24cb004 	sub	fp, ip, #4	; 0x4
        194af8:	e1b04000 	movs	r4, r0
        194afc:	03a00002 	moveq	r0, #2	; 0x2
        194b00:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        194b04:	e24dd008 	sub	sp, sp, #8	; 0x8
        194b08:	e59f0044 	ldr	r0, [pc, #44]	; 194b54 <WrapClassInfo(TClassInfo const *)+0x68>
        194b0c:	eb68b596 	bl	1bc216c <$Clone(RefVar const &)>
        194b10:	eb68b58d 	bl	1bc214c <$AllocateRefHandle(long)>
        194b14:	e58d0004 	str	r0, [sp, #4]
        194b18:	e1a00124 	mov	r0, r4, lsr #2
        194b1c:	e1a00100 	mov	r0, r0, lsl #2
        194b20:	eb68b589 	bl	1bc214c <$AllocateRefHandle(long)>
        194b24:	e58d0000 	str	r0, [sp]
        194b28:	e1a0200d 	mov	r2, sp
        194b2c:	e59f1024 	ldr	r1, [pc, #24]	; 194b58 <WrapClassInfo(TClassInfo const *)+0x6c>
        194b30:	e28d0004 	add	r0, sp, #4	; 0x4
        194b34:	eb68c60b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        194b38:	e59d0000 	ldr	r0, [sp]
        194b3c:	eb68b99e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        194b40:	e59d0004 	ldr	r0, [sp, #4]
        194b44:	e5904000 	ldr	r4, [r0]
        194b48:	eb68b99b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        194b4c:	e1a00004 	mov	r0, r4
        194b50:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        194b54:	00680230 	rsbeq	r0, r8, r0, lsr r2
        194b58:	006852d8 	ldreqd	r5, [r8], -#40
    */
}

/**
 * Symbol: WrapProtocolInstance(TProtocol *)
 * Address: 00194b5c
 */
WrapProtocolInstance(TProtocol *) {
    /*
        194b5c:	e1a0c00d 	mov	ip, sp
        194b60:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        194b64:	e24cb004 	sub	fp, ip, #4	; 0x4
        194b68:	e1b04000 	movs	r4, r0
        194b6c:	03a00002 	moveq	r0, #2	; 0x2
        194b70:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        194b74:	e24dd00c 	sub	sp, sp, #12	; 0xc
        194b78:	e59f0074 	ldr	r0, [pc, #74]	; 194bf4 <WrapProtocolInstance(TProtocol *)+0x98>
        194b7c:	eb68b57a 	bl	1bc216c <$Clone(RefVar const &)>
        194b80:	eb68b571 	bl	1bc214c <$AllocateRefHandle(long)>
        194b84:	e58d0008 	str	r0, [sp, #8]
        194b88:	e1a00004 	mov	r0, r4
        194b8c:	eb68eb19 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        194b90:	eb685a92 	bl	1bab5e0 <$WrapClassInfo(TClassInfo const *)>
        194b94:	eb68b56c 	bl	1bc214c <$AllocateRefHandle(long)>
        194b98:	e58d0004 	str	r0, [sp, #4]
        194b9c:	e1a00124 	mov	r0, r4, lsr #2
        194ba0:	e1a00100 	mov	r0, r0, lsl #2
        194ba4:	eb68b568 	bl	1bc214c <$AllocateRefHandle(long)>
        194ba8:	e58d0000 	str	r0, [sp]
        194bac:	e1a0200d 	mov	r2, sp
        194bb0:	e59f1040 	ldr	r1, [pc, #40]	; 194bf8 <WrapProtocolInstance(TProtocol *)+0x9c>
        194bb4:	e28d0008 	add	r0, sp, #8	; 0x8
        194bb8:	eb68c5ea 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        194bbc:	e59d0000 	ldr	r0, [sp]
        194bc0:	eb68b97d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        194bc4:	e28d2004 	add	r2, sp, #4	; 0x4
        194bc8:	e59f102c 	ldr	r1, [pc, #2c]	; 194bfc <WrapProtocolInstance(TProtocol *)+0xa0>
        194bcc:	e28d0008 	add	r0, sp, #8	; 0x8
        194bd0:	eb68c5e4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        194bd4:	e59d0008 	ldr	r0, [sp, #8]
        194bd8:	e5904000 	ldr	r4, [r0]
        194bdc:	e59d0004 	ldr	r0, [sp, #4]
        194be0:	eb68b975 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        194be4:	e59d0008 	ldr	r0, [sp, #8]
        194be8:	eb68b973 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        194bec:	e1a00004 	mov	r0, r4
        194bf0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        194bf4:	00680cb8 	streqh	r0, [r8], -#200
        194bf8:	00685340 	rsbeq	r5, r8, r0, asr #6
        194bfc:	00685388 	rsbeq	r5, r8, r8, lsl #7
    */
}

/**
 * Symbol: WriteDebugByte(char)
 * Address: 00199ccc
 */
WriteDebugByte(char) {
    /*
        199ccc:	e20020ff 	and	r2, r0, #255	; 0xff
        199cd0:	e59f0024 	ldr	r0, [pc, #24]	; 199cfc <WriteDebugByte(char)+0x30>
        199cd4:	e5901024 	ldr	r1, [r0, #36]
        199cd8:	e5903020 	ldr	r3, [r0, #32]
        199cdc:	e1510003 	cmp	r1, r3
        199ce0:	a1a0f00e 	movge	pc, lr
        199ce4:	e590301c 	ldr	r3, [r0, #28]
        199ce8:	e7c32001 	strb	r2, [r3, r1]
        199cec:	e5901024 	ldr	r1, [r0, #36]
        199cf0:	e2811001 	add	r1, r1, #1	; 0x1
        199cf4:	e5a01024 	str	r1, [r0, #36]!
        199cf8:	e1a0f00e 	mov	pc, lr
        199cfc:	0c1017b4 	ldceq	7, cr1, [r0], -#720
    */
}

/**
 * Symbol: WriteDebugLong(unsigned long)
 * Address: 00199ebc
 */
WriteDebugLong(unsigned long) {
    /*
        199ebc:	e1a0c00d 	mov	ip, sp
        199ec0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        199ec4:	e24cb004 	sub	fp, ip, #4	; 0x4
        199ec8:	e1a04000 	mov	r4, r0
        199ecc:	e20000ff 	and	r0, r0, #255	; 0xff
        199ed0:	eb64a4bc 	bl	1ac31c8 <$WriteDebugByte(char)>
        199ed4:	e1a00424 	mov	r0, r4, lsr #8
        199ed8:	e20000ff 	and	r0, r0, #255	; 0xff
        199edc:	eb64a4b9 	bl	1ac31c8 <$WriteDebugByte(char)>
        199ee0:	e1a00824 	mov	r0, r4, lsr #16
        199ee4:	e20000ff 	and	r0, r0, #255	; 0xff
        199ee8:	eb64a4b6 	bl	1ac31c8 <$WriteDebugByte(char)>
        199eec:	e1a00c24 	mov	r0, r4, lsr #24
        199ef0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        199ef4:	ea64a4b3 	b	1ac31c8 <$WriteDebugByte(char)>
    */
}

/**
 * Symbol: WhiteOrBlackPat(PixelMap **)
 * Address: 001c8958
 */
WhiteOrBlackPat(PixelMap **) {
    /*
        1c8958:	e1a0c00d 	mov	ip, sp
        1c895c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1c8960:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c8964:	e5900000 	ldr	r0, [r0]
        1c8968:	e1a04000 	mov	r4, r0
        1c896c:	eb690f25 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        1c8970:	e4d01001 	ldrb	r1, [r0], #1
        1c8974:	e1a03000 	mov	r3, r0
        1c8978:	e3a00000 	mov	r0, #0	; 0x0
        1c897c:	e3310000 	teq	r1, #0	; 0x0
        1c8980:	133100ff 	teqne	r1, #255	; 0xff
        1c8984:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1c8988:	e5942004 	ldr	r2, [r4, #4]
        1c898c:	e1a02842 	mov	r2, r2, asr #16
        1c8990:	e594c00c 	ldr	ip, [r4, #12]
        1c8994:	e1a0c84c 	mov	ip, ip, asr #16
        1c8998:	e594e008 	ldr	lr, [r4, #8]
        1c899c:	e04cc84e 	sub	ip, ip, lr, asr #16
        1c89a0:	e002029c 	mul	r2, ip, r2
        1c89a4:	e2422002 	sub	r2, r2, #2	; 0x2
        1c89a8:	e4d3c001 	ldrb	ip, [r3], #1
        1c89ac:	e13c0001 	teq	ip, r1
        1c89b0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1c89b4:	e2422001 	sub	r2, r2, #1	; 0x1
        1c89b8:	e3520000 	cmp	r2, #0	; 0x0
        1c89bc:	cafffff9 	bgt	1c89a8 <WhiteOrBlackPat(PixelMap **)+0x50>
        1c89c0:	e3a00001 	mov	r0, #1	; 0x1
        1c89c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: WantSchedule(void)
 * Address: 001cc7f4
 */
WantSchedule(void) {
    /*
        1cc7f4:	e59f0018 	ldr	r0, [pc, #18]	; 1cc814 <WantSchedule(void)+0x20>
        1cc7f8:	e5901000 	ldr	r1, [r0]
        1cc7fc:	e3a00001 	mov	r0, #1	; 0x1
        1cc800:	e3310000 	teq	r1, #0	; 0x0
        1cc804:	059f100c 	ldreq	r1, [pc, #c]	; 1cc818 <WantSchedule(void)+0x24>
        1cc808:	159f100c 	ldrne	r1, [pc, #c]	; 1cc81c <WantSchedule(void)+0x28>
        1cc80c:	e5810000 	str	r0, [r1]
        1cc810:	e1a0f00e 	mov	pc, lr
        1cc814:	0c100fd8 	ldceq	15, cr0, [r0], -#864
        1cc818:	0c100fe4 	ldceq	15, cr0, [r0], -#912
        1cc81c:	0c100fd4 	ldceq	15, cr0, [r0], -#848
    */
}

/**
 * Symbol: writeCodeWord(unsigned char *&, unsigned char *, unsigned long, unsigned long &, int &)
 * Address: 00204e34
 */
writeCodeWord(unsigned char *&, unsigned char *, unsigned long, unsigned long &, int &) {
    /*
        204e34:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        204e38:	e1a0e842 	mov	lr, r2, asr #16
        204e3c:	e1a04802 	mov	r4, r2, lsl #16
        204e40:	e1a04824 	mov	r4, r4, lsr #16
        204e44:	e59dc00c 	ldr	ip, [sp, #12]
        204e48:	e59c5000 	ldr	r5, [ip]
        204e4c:	e1a04514 	mov	r4, r4, lsl r5
        204e50:	e5935000 	ldr	r5, [r3]
        204e54:	e1844005 	orr	r4, r4, r5
        204e58:	e5834000 	str	r4, [r3]
        204e5c:	e59c4000 	ldr	r4, [ip]
        204e60:	e084e00e 	add	lr, r4, lr
        204e64:	e58ce000 	str	lr, [ip]
        204e68:	e35e0008 	cmp	lr, #8	; 0x8
        204e6c:	b8bd8030 	ldmltia	sp!, {r4, r5, pc}
        204e70:	e590e000 	ldr	lr, [r0]
        204e74:	e15e0001 	cmp	lr, r1
        204e78:	2a000003 	bcs	204e8c <writeCodeWord(unsigned char *&, unsigned char *, unsigned long, unsigned long &, int &)+0x58>
        204e7c:	e28e4001 	add	r4, lr, #1	; 0x1
        204e80:	e5804000 	str	r4, [r0]
        204e84:	e5932000 	ldr	r2, [r3]
        204e88:	e5ce2000 	strb	r2, [lr]
        204e8c:	e59ce000 	ldr	lr, [ip]
        204e90:	e24ee008 	sub	lr, lr, #8	; 0x8
        204e94:	e58ce000 	str	lr, [ip]
        204e98:	e593e000 	ldr	lr, [r3]
        204e9c:	e1a0e42e 	mov	lr, lr, lsr #8
        204ea0:	e583e000 	str	lr, [r3]
        204ea4:	e59c2000 	ldr	r2, [ip]
        204ea8:	e3520008 	cmp	r2, #8	; 0x8
        204eac:	aaffffef 	bge	204e70 <writeCodeWord(unsigned char *&, unsigned char *, unsigned long, unsigned long &, int &)+0x3c>
        204eb0:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: Wstrlen(unsigned short *)
 * Address: 0022ef8c
 */
Wstrlen(unsigned short *) {
    /*
        22ef8c:	e3a01000 	mov	r1, #0	; 0x0
        22ef90:	e3a03801 	mov	r3, #65536	; 0x10000
        22ef94:	e2433001 	sub	r3, r3, #1	; 0x1
        22ef98:	ea000000 	b	22efa0 <Wstrlen(unsigned short *)+0x14>
        22ef9c:	e2811001 	add	r1, r1, #1	; 0x1
        22efa0:	e5902000 	ldr	r2, [r0]
        22efa4:	e1b02822 	movs	r2, r2, lsr #16
        22efa8:	12800002 	addne	r0, r0, #2	; 0x2
        22efac:	11320003 	teqne	r2, r3
        22efb0:	1afffff9 	bne	22ef9c <Wstrlen(unsigned short *)+0x10>
        22efb4:	e1a00001 	mov	r0, r1
        22efb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Wstrcpy__FPUsT1
 * Address: 0022f190
 */
void globals::Wstrcpy() {
    /*
        22f190:	e3a03801 	mov	r3, #65536	; 0x10000
        22f194:	e2433001 	sub	r3, r3, #1	; 0x1
        22f198:	ea000003 	b	22f1ac <Wstrcpy__FPUsT1+0x1c>
        22f19c:	e2811002 	add	r1, r1, #2	; 0x2
        22f1a0:	e5c02001 	strb	r2, [r0, #1]
        22f1a4:	e1a02442 	mov	r2, r2, asr #8
        22f1a8:	e4c02002 	strb	r2, [r0], #2
        22f1ac:	e5912000 	ldr	r2, [r1]
        22f1b0:	e1b02822 	movs	r2, r2, lsr #16
        22f1b4:	11320003 	teqne	r2, r3
        22f1b8:	1afffff7 	bne	22f19c <Wstrcpy__FPUsT1+0xc>
        22f1bc:	e3a01000 	mov	r1, #0	; 0x0
        22f1c0:	e5c01001 	strb	r1, [r0, #1]
        22f1c4:	e5c01000 	strb	r1, [r0]
        22f1c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Wait(unsigned long)
 * Address: 002554b4
 */
Wait(unsigned long) {
    /*
        2554b4:	e0600200 	rsb	r0, r0, r0, lsl #4
        2554b8:	e1a00600 	mov	r0, r0, lsl #12
        2554bc:	ea661e5a 	b	1bdce2c <$Sleep(unsigned long)>
    */
}

/**
 * Symbol: WriteSocket(TAddress *, TWriteChain *, unsigned char)
 * Address: 0025c770
 */
WriteSocket(TAddress *, TWriteChain *, unsigned char) {
    /*
        25c770:	e1a0c00d 	mov	ip, sp
        25c774:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        25c778:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c77c:	e1a05000 	mov	r5, r0
        25c780:	e1a04001 	mov	r4, r1
        25c784:	e20280ff 	and	r8, r2, #255	; 0xff
        25c788:	e24dd034 	sub	sp, sp, #52	; 0x34
        25c78c:	e28d0004 	add	r0, sp, #4	; 0x4
        25c790:	eb661ea8 	bl	1be4238 <TAEvent::$__ct(void)>
        25c794:	e59f7074 	ldr	r7, [pc, #74]	; 25c810 <WriteSocket(TAddress *, TWriteChain *, unsigned char)+0xa0>
        25c798:	e3a06000 	mov	r6, #0	; 0x0
        25c79c:	e58d6010 	str	r6, [sp, #16]
        25c7a0:	e58d7004 	str	r7, [sp, #4]
        25c7a4:	e58d600c 	str	r6, [sp, #12]
        25c7a8:	e28d0018 	add	r0, sp, #24	; 0x18
        25c7ac:	e1a09000 	mov	r9, r0
        25c7b0:	e3a01001 	mov	r1, #1	; 0x1
        25c7b4:	eb665c7c 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        25c7b8:	e3a00030 	mov	r0, #48	; 0x30
        25c7bc:	e88d0081 	stmia	sp, {r0, r7}
        25c7c0:	e59f004c 	ldr	r0, [pc, #4c]	; 25c814 <WriteSocket(TAddress *, TWriteChain *, unsigned char)+0xa4>
        25c7c4:	e58d0008 	str	r0, [sp, #8]
        25c7c8:	e3a0000a 	mov	r0, #10	; 0xa
        25c7cc:	e58d0014 	str	r0, [sp, #20]
        25c7d0:	e1a00009 	mov	r0, r9
        25c7d4:	e1a01005 	mov	r1, r5
        25c7d8:	eb665c74 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        25c7dc:	e58d4030 	str	r4, [sp, #48]
        25c7e0:	e58d602c 	str	r6, [sp, #44]
        25c7e4:	e5cd8024 	strb	r8, [sp, #36]
        25c7e8:	eb65dc79 	bl	1bd39d4 <$GetGlobals>
        25c7ec:	e28d3004 	add	r3, sp, #4	; 0x4
        25c7f0:	e92d0008 	stmdb	sp!, {r3}
        25c7f4:	e28d3004 	add	r3, sp, #4	; 0x4
        25c7f8:	e3a02000 	mov	r2, #0	; 0x0
        25c7fc:	e3a01000 	mov	r1, #0	; 0x0
        25c800:	e590c000 	ldr	ip, [r0]
        25c804:	e1a0e00f 	mov	lr, pc
        25c808:	e28cf050 	add	pc, ip, #80	; 0x50
        25c80c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        25c810:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        25c814:	64647020 	strvsbt	r7, [r4], -#32
    */
}

/**
 * Symbol: WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)
 * Address: 0026e8e8
 */
WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *) {
    /*
        26e8e8:	e1a0c00d 	mov	ip, sp
        26e8ec:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        26e8f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e8f4:	e1a06000 	mov	r6, r0
        26e8f8:	e1a04001 	mov	r4, r1
        26e8fc:	e1a05002 	mov	r5, r2
        26e900:	e3a00000 	mov	r0, #0	; 0x0
        26e904:	e52d0004 	str	r0, [sp, -#4]!
        26e908:	e5910004 	ldr	r0, [r1, #4]
        26e90c:	e3100080 	tst	r0, #128	; 0x80
        26e910:	e3a08000 	mov	r8, #0	; 0x0
        26e914:	0a000003 	beq	26e928 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x40>
        26e918:	e1a0100d 	mov	r1, sp
        26e91c:	e1a00004 	mov	r0, r4
        26e920:	eb62e6be 	bl	1b28420 <$ReleaseWSData(ws_control_type *, ws_memory_header_type **)>
        26e924:	ea000074 	b	26eafc <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x214>
        26e928:	e1a0100d 	mov	r1, sp
        26e92c:	e1a00004 	mov	r0, r4
        26e930:	eb62e2a9 	bl	1b273dc <$InitWSData(ws_control_type *, ws_memory_header_type **)>
        26e934:	e3a09001 	mov	r9, #1	; 0x1
        26e938:	e3300000 	teq	r0, #0	; 0x0
        26e93c:	1a000070 	bne	26eb04 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x21c>
        26e940:	e59d0000 	ldr	r0, [sp]
        26e944:	e5b07004 	ldr	r7, [r0, #4]!
        26e948:	e5876000 	str	r6, [r7]
        26e94c:	e5940000 	ldr	r0, [r4]
        26e950:	e5870024 	str	r0, [r7, #36]
        26e954:	e59720b4 	ldr	r2, [r7, #180]
        26e958:	e3520000 	cmp	r2, #0	; 0x0
        26e95c:	da000006 	ble	26e97c <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x94>
        26e960:	e3300000 	teq	r0, #0	; 0x0
        26e964:	1a000004 	bne	26e97c <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x94>
        26e968:	e5971020 	ldr	r1, [r7, #32]
        26e96c:	e3110001 	tst	r1, #1	; 0x1
        26e970:	13810002 	orrne	r0, r1, #2	; 0x2
        26e974:	15870020 	strne	r0, [r7, #32]
        26e978:	1a00002d 	bne	26ea34 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x14c>
        26e97c:	e35200fa 	cmp	r2, #250	; 0xfa
        26e980:	aa00005f 	bge	26eb04 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x21c>
        26e984:	e3300000 	teq	r0, #0	; 0x0
        26e988:	15950004 	ldrne	r0, [r5, #4]
        26e98c:	13300000 	teqne	r0, #0	; 0x0
        26e990:	0a00005b 	beq	26eb04 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x21c>
        26e994:	e1a00007 	mov	r0, r7
        26e998:	eb62d211 	bl	1b231e4 <$WS_GetStrokeBoxAndSlope(ws_data_type *)>
        26e99c:	e3300000 	teq	r0, #0	; 0x0
        26e9a0:	1a000057 	bne	26eb04 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x21c>
        26e9a4:	e1a00007 	mov	r0, r7
        26e9a8:	eb62d20b 	bl	1b231dc <$WS_CalcLineHeight(ws_data_type *)>
        26e9ac:	e597008c 	ldr	r0, [r7, #140]
        26e9b0:	e3500000 	cmp	r0, #0	; 0x0
        26e9b4:	da00000c 	ble	26e9ec <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x104>
        26e9b8:	e1a00007 	mov	r0, r7
        26e9bc:	eb62d20b 	bl	1b231f0 <$WS_NewLine(ws_data_type *)>
        26e9c0:	e3300000 	teq	r0, #0	; 0x0
        26e9c4:	0a000008 	beq	26e9ec <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x104>
        26e9c8:	e1a01005 	mov	r1, r5
        26e9cc:	e5878004 	str	r8, [r7, #4]
        26e9d0:	e58790ac 	str	r9, [r7, #172]
        26e9d4:	e1a00007 	mov	r0, r7
        26e9d8:	eb62d207 	bl	1b231fc <$WordLineStrokes(ws_data_type *, ws_results_type *)>
        26e9dc:	e3300000 	teq	r0, #0	; 0x0
        26e9e0:	1a000047 	bne	26eb04 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x21c>
        26e9e4:	e1a00007 	mov	r0, r7
        26e9e8:	eb62c5a3 	bl	1b2007c <$InitForNewLine(ws_data_type *)>
        26e9ec:	e1a00007 	mov	r0, r7
        26e9f0:	eb62d1fd 	bl	1b231ec <$WS_HistTheStroke(ws_data_type *)>
        26e9f4:	e3300000 	teq	r0, #0	; 0x0
        26e9f8:	1a000041 	bne	26eb04 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x21c>
        26e9fc:	e1a00007 	mov	r0, r7
        26ea00:	eb62d1f3 	bl	1b231d4 <$WS_AddStrokeToHist(ws_data_type *)>
        26ea04:	e1a00007 	mov	r0, r7
        26ea08:	eb62d1fa 	bl	1b231f8 <$WS_WriteStrokeHorzValues(ws_data_type *)>
        26ea0c:	e1a00007 	mov	r0, r7
        26ea10:	eb62d1f0 	bl	1b231d8 <$WS_CalcGaps(ws_data_type *)>
        26ea14:	e3300000 	teq	r0, #0	; 0x0
        26ea18:	1a000039 	bne	26eb04 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x21c>
        26ea1c:	e1a00007 	mov	r0, r7
        26ea20:	eb62e689 	bl	1b2844c <$WS_PostprocessGaps(ws_data_type *)>
        26ea24:	e1a00007 	mov	r0, r7
        26ea28:	eb62d1ec 	bl	1b231e0 <$WS_CountPiks(ws_data_type *)>
        26ea2c:	e1a00007 	mov	r0, r7
        26ea30:	eb62d1ef 	bl	1b231f4 <$WS_SetLineVars(ws_data_type *)>
        26ea34:	e5940004 	ldr	r0, [r4, #4]
        26ea38:	e3100001 	tst	r0, #1	; 0x1
        26ea3c:	0a00000c 	beq	26ea74 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x18c>
        26ea40:	e3a00002 	mov	r0, #2	; 0x2
        26ea44:	e1a01005 	mov	r1, r5
        26ea48:	e58700ac 	str	r0, [r7, #172]
        26ea4c:	e5878004 	str	r8, [r7, #4]
        26ea50:	e1a00007 	mov	r0, r7
        26ea54:	eb62d1e8 	bl	1b231fc <$WordLineStrokes(ws_data_type *, ws_results_type *)>
        26ea58:	e3300000 	teq	r0, #0	; 0x0
        26ea5c:	1a000028 	bne	26eb04 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x21c>
        26ea60:	e1a02007 	mov	r2, r7
        26ea64:	e1a00004 	mov	r0, r4
        26ea68:	e59d1000 	ldr	r1, [sp]
        26ea6c:	eb62e675 	bl	1b28448 <$WS_FlyLearn(ws_control_type *, ws_memory_header_type *, ws_data_type *)>
        26ea70:	eaffffa8 	b	26e918 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x30>
        26ea74:	e5940008 	ldr	r0, [r4, #8]
        26ea78:	e3500000 	cmp	r0, #0	; 0x0
        26ea7c:	c597108c 	ldrgt	r1, [r7, #140]
        26ea80:	c3510000 	cmpgt	r1, #0	; 0x0
        26ea84:	da000010 	ble	26eacc <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x1e4>
        26ea88:	e597107c 	ldr	r1, [r7, #124]
        26ea8c:	e5972068 	ldr	r2, [r7, #104]
        26ea90:	e0411102 	sub	r1, r1, r2, lsl #2
        26ea94:	e59720a0 	ldr	r2, [r7, #160]
        26ea98:	e1510002 	cmp	r1, r2
        26ea9c:	da00000a 	ble	26eacc <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x1e4>
        26eaa0:	e5971064 	ldr	r1, [r7, #100]
        26eaa4:	e0000091 	mul	r0, r1, r0
        26eaa8:	e1a00080 	mov	r0, r0, lsl #1
        26eaac:	e1a01005 	mov	r1, r5
        26eab0:	e5870004 	str	r0, [r7, #4]
        26eab4:	e1a00007 	mov	r0, r7
        26eab8:	eb62d1cf 	bl	1b231fc <$WordLineStrokes(ws_data_type *, ws_results_type *)>
        26eabc:	e3300000 	teq	r0, #0	; 0x0
        26eac0:	1a00000f 	bne	26eb04 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x21c>
        26eac4:	e597007c 	ldr	r0, [r7, #124]
        26eac8:	e58700a0 	str	r0, [r7, #160]
        26eacc:	e5970020 	ldr	r0, [r7, #32]
        26ead0:	e3100002 	tst	r0, #2	; 0x2
        26ead4:	1a000005 	bne	26eaf0 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x208>
        26ead8:	e59700b4 	ldr	r0, [r7, #180]
        26eadc:	e2800001 	add	r0, r0, #1	; 0x1
        26eae0:	e58700b4 	str	r0, [r7, #180]
        26eae4:	e597008c 	ldr	r0, [r7, #140]
        26eae8:	e2800001 	add	r0, r0, #1	; 0x1
        26eaec:	e5a7008c 	str	r0, [r7, #140]!
        26eaf0:	e1a0100d 	mov	r1, sp
        26eaf4:	e1a00004 	mov	r0, r4
        26eaf8:	eb62e650 	bl	1b28440 <$UnlockWSData(ws_control_type *, ws_memory_header_type **)>
        26eafc:	e1a00008 	mov	r0, r8
        26eb00:	ea000003 	b	26eb14 <WordStrokes(PS_point_type *, ws_control_type *, ws_results_type *)+0x22c>
        26eb04:	e1a0100d 	mov	r1, sp
        26eb08:	e1a00004 	mov	r0, r4
        26eb0c:	eb62e643 	bl	1b28420 <$ReleaseWSData(ws_control_type *, ws_memory_header_type **)>
        26eb10:	e1a00009 	mov	r0, r9
        26eb14:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: WS_HistTheStroke(ws_data_type *)
 * Address: 0026ed6c
 */
WS_HistTheStroke(ws_data_type *) {
    /*
        26ed6c:	e1a0c00d 	mov	ip, sp
        26ed70:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26ed74:	e24cb004 	sub	fp, ip, #4	; 0x4
        26ed78:	e24dd06c 	sub	sp, sp, #108	; 0x6c
        26ed7c:	e3a01000 	mov	r1, #0	; 0x0
        26ed80:	e1a04000 	mov	r4, r0
        26ed84:	e58d1018 	str	r1, [sp, #24]
        26ed88:	e5901000 	ldr	r1, [r0]
        26ed8c:	e58d1000 	str	r1, [sp]
        26ed90:	e5900024 	ldr	r0, [r0, #36]
        26ed94:	e58d000c 	str	r0, [sp, #12]
        26ed98:	e59400ec 	ldr	r0, [r4, #236]
        26ed9c:	e58d0004 	str	r0, [sp, #4]
        26eda0:	e594106c 	ldr	r1, [r4, #108]
        26eda4:	e1b00001 	movs	r0, r1
        26eda8:	42811007 	addmi	r1, r1, #7	; 0x7
        26edac:	e1a011c1 	mov	r1, r1, asr #3
        26edb0:	e58d1028 	str	r1, [sp, #40]
        26edb4:	e5941088 	ldr	r1, [r4, #136]
        26edb8:	e3510003 	cmp	r1, #3	; 0x3
        26edbc:	ca000003 	bgt	26edd0 <WS_HistTheStroke(ws_data_type *)+0x64>
        26edc0:	e59d1028 	ldr	r1, [sp, #40]
        26edc4:	e0811fa1 	add	r1, r1, r1, lsr #31
        26edc8:	e1a010c1 	mov	r1, r1, asr #1
        26edcc:	e58d1028 	str	r1, [sp, #40]
        26edd0:	e59d1028 	ldr	r1, [sp, #40]
        26edd4:	e3510002 	cmp	r1, #2	; 0x2
        26edd8:	b3a01002 	movlt	r1, #2	; 0x2
        26eddc:	ba000003 	blt	26edf0 <WS_HistTheStroke(ws_data_type *)+0x84>
        26ede0:	e59d1028 	ldr	r1, [sp, #40]
        26ede4:	e3510064 	cmp	r1, #100	; 0x64
        26ede8:	da000001 	ble	26edf4 <WS_HistTheStroke(ws_data_type *)+0x88>
        26edec:	e3a01064 	mov	r1, #100	; 0x64
        26edf0:	e58d1028 	str	r1, [sp, #40]
        26edf4:	e5941028 	ldr	r1, [r4, #40]
        26edf8:	e1b05001 	movs	r5, r1
        26edfc:	4281100f 	addmi	r1, r1, #15	; 0xf
        26ee00:	e1a01241 	mov	r1, r1, asr #4
        26ee04:	e0841081 	add	r1, r4, r1, lsl #1
        26ee08:	e59118d8 	ldr	r1, [r1, #2264]
        26ee0c:	e1a01841 	mov	r1, r1, asr #16
        26ee10:	e3510000 	cmp	r1, #0	; 0x0
        26ee14:	da000004 	ble	26ee2c <WS_HistTheStroke(ws_data_type *)+0xc0>
        26ee18:	e5942044 	ldr	r2, [r4, #68]
        26ee1c:	e0821001 	add	r1, r2, r1
        26ee20:	e0811fa1 	add	r1, r1, r1, lsr #31
        26ee24:	e1a010c1 	mov	r1, r1, asr #1
        26ee28:	ea000000 	b	26ee30 <WS_HistTheStroke(ws_data_type *)+0xc4>
        26ee2c:	e5941044 	ldr	r1, [r4, #68]
        26ee30:	e0800fa0 	add	r0, r0, r0, lsr #31
        26ee34:	e1a000c0 	mov	r0, r0, asr #1
        26ee38:	e58d1008 	str	r1, [sp, #8]
        26ee3c:	e0411000 	sub	r1, r1, r0
        26ee40:	e58d1024 	str	r1, [sp, #36]
        26ee44:	e59d1008 	ldr	r1, [sp, #8]
        26ee48:	e0800001 	add	r0, r0, r1
        26ee4c:	e58d0020 	str	r0, [sp, #32]
        26ee50:	e5940030 	ldr	r0, [r4, #48]
        26ee54:	e0401001 	sub	r1, r0, r1
        26ee58:	e59d0004 	ldr	r0, [sp, #4]
        26ee5c:	e0010190 	mul	r1, r0, r1
        26ee60:	e3a00064 	mov	r0, #100	; 0x64
        26ee64:	eb650eb5 	bl	1bb2940 <$__rt_sdiv>
        26ee68:	e1a0a000 	mov	sl, r0
        26ee6c:	e5940034 	ldr	r0, [r4, #52]
        26ee70:	e59d1008 	ldr	r1, [sp, #8]
        26ee74:	e0401001 	sub	r1, r0, r1
        26ee78:	e59d0004 	ldr	r0, [sp, #4]
        26ee7c:	e0010190 	mul	r1, r0, r1
        26ee80:	e3a00064 	mov	r0, #100	; 0x64
        26ee84:	eb650ead 	bl	1bb2940 <$__rt_sdiv>
        26ee88:	e1a01000 	mov	r1, r0
        26ee8c:	e15a0000 	cmp	sl, r0
        26ee90:	a1a00001 	movge	r0, r1
        26ee94:	b1a0000a 	movlt	r0, sl
        26ee98:	e0850000 	add	r0, r5, r0
        26ee9c:	e594202c 	ldr	r2, [r4, #44]
        26eea0:	c1a0100a 	movgt	r1, sl
        26eea4:	e0821001 	add	r1, r2, r1
        26eea8:	e3500000 	cmp	r0, #0	; 0x0
        26eeac:	b3a00000 	movlt	r0, #0	; 0x0
        26eeb0:	ba000003 	blt	26eec4 <WS_HistTheStroke(ws_data_type *)+0x158>
        26eeb4:	e3a02fd7 	mov	r2, #860	; 0x35c
        26eeb8:	e2822b07 	add	r2, r2, #7168	; 0x1c00
        26eebc:	e1500002 	cmp	r0, r2
        26eec0:	c1a00002 	movgt	r0, r2
        26eec4:	e3510000 	cmp	r1, #0	; 0x0
        26eec8:	b3a01000 	movlt	r1, #0	; 0x0
        26eecc:	ba000003 	blt	26eee0 <WS_HistTheStroke(ws_data_type *)+0x174>
        26eed0:	e3a02fd7 	mov	r2, #860	; 0x35c
        26eed4:	e2822b07 	add	r2, r2, #7168	; 0x1c00
        26eed8:	e1510002 	cmp	r1, r2
        26eedc:	c1a01002 	movgt	r1, r2
        26eee0:	e0511000 	subs	r1, r1, r0
        26eee4:	e1a06001 	mov	r6, r1
        26eee8:	42811003 	addmi	r1, r1, #3	; 0x3
        26eeec:	e1a01141 	mov	r1, r1, asr #2
        26eef0:	e2815008 	add	r5, r1, #8	; 0x8
        26eef4:	e3500000 	cmp	r0, #0	; 0x0
        26eef8:	b2800003 	addlt	r0, r0, #3	; 0x3
        26eefc:	e1a00140 	mov	r0, r0, asr #2
        26ef00:	e1a08100 	mov	r8, r0, lsl #2
        26ef04:	e1a00005 	mov	r0, r5
        26ef08:	eb60022b 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        26ef0c:	e58408d4 	str	r0, [r4, #2260]
        26ef10:	e58480f8 	str	r8, [r4, #248]
        26ef14:	e59408d4 	ldr	r0, [r4, #2260]
        26ef18:	e3300000 	teq	r0, #0	; 0x0
        26ef1c:	03a00001 	moveq	r0, #1	; 0x1
        26ef20:	0a0001a5 	beq	26f5bc <WS_HistTheStroke(ws_data_type *)+0x850>
        26ef24:	e1a02005 	mov	r2, r5
        26ef28:	e3a01000 	mov	r1, #0	; 0x0
        26ef2c:	eb6516c9 	bl	1bb4a58 <$memset>
        26ef30:	e594106c 	ldr	r1, [r4, #108]
        26ef34:	e1560081 	cmp	r6, r1, lsl #1
        26ef38:	da000002 	ble	26ef48 <WS_HistTheStroke(ws_data_type *)+0x1dc>
        26ef3c:	e3a00001 	mov	r0, #1	; 0x1
        26ef40:	e58d0014 	str	r0, [sp, #20]
        26ef44:	ea000001 	b	26ef50 <WS_HistTheStroke(ws_data_type *)+0x1e4>
        26ef48:	e3a00000 	mov	r0, #0	; 0x0
        26ef4c:	e58d0014 	str	r0, [sp, #20]
        26ef50:	e58d0010 	str	r0, [sp, #16]
        26ef54:	e3a00001 	mov	r0, #1	; 0x1
        26ef58:	e58d001c 	str	r0, [sp, #28]
        26ef5c:	e3a00000 	mov	r0, #0	; 0x0
        26ef60:	e3a07001 	mov	r7, #1	; 0x1
        26ef64:	e3510000 	cmp	r1, #0	; 0x0
        26ef68:	e58d0058 	str	r0, [sp, #88]
        26ef6c:	b2811003 	addlt	r1, r1, #3	; 0x3
        26ef70:	e1a01141 	mov	r1, r1, asr #2
        26ef74:	e58d1050 	str	r1, [sp, #80]
        26ef78:	e0811fa1 	add	r1, r1, r1, lsr #31
        26ef7c:	e1a010c1 	mov	r1, r1, asr #1
        26ef80:	e3a09000 	mov	r9, #0	; 0x0
        26ef84:	e3a00000 	mov	r0, #0	; 0x0
        26ef88:	e58d002c 	str	r0, [sp, #44]
        26ef8c:	e3a00ef6 	mov	r0, #3936	; 0xf60
        26ef90:	e2800a01 	add	r0, r0, #4096	; 0x1000
        26ef94:	e58d1054 	str	r1, [sp, #84]
        26ef98:	e3a01000 	mov	r1, #0	; 0x0
        26ef9c:	e58d0030 	str	r0, [sp, #48]
        26efa0:	e3a00000 	mov	r0, #0	; 0x0
        26efa4:	e58d005c 	str	r0, [sp, #92]
        26efa8:	e58d104c 	str	r1, [sp, #76]
        26efac:	e58d9048 	str	r9, [sp, #72]
        26efb0:	e59d000c 	ldr	r0, [sp, #12]
        26efb4:	e3500000 	cmp	r0, #0	; 0x0
        26efb8:	da000113 	ble	26f40c <WS_HistTheStroke(ws_data_type *)+0x6a0>
        26efbc:	e59d000c 	ldr	r0, [sp, #12]
        26efc0:	e2401005 	sub	r1, r0, #5	; 0x5
        26efc4:	e58d1068 	str	r1, [sp, #104]
        26efc8:	e59d1028 	ldr	r1, [sp, #40]
        26efcc:	e1a01081 	mov	r1, r1, lsl #1
        26efd0:	e58d1064 	str	r1, [sp, #100]
        26efd4:	e2401001 	sub	r1, r0, #1	; 0x1
        26efd8:	e58d1060 	str	r1, [sp, #96]
        26efdc:	e59d005c 	ldr	r0, [sp, #92]
        26efe0:	e59d1000 	ldr	r1, [sp]
        26efe4:	e7915100 	ldr	r5, [r1, r0, lsl #2]
        26efe8:	e1a05845 	mov	r5, r5, asr #16
        26efec:	e0810100 	add	r0, r1, r0, lsl #2
        26eff0:	e5906002 	ldr	r6, [r0, #2]
        26eff4:	e1a06846 	mov	r6, r6, asr #16
        26eff8:	e59d0008 	ldr	r0, [sp, #8]
        26effc:	e0461000 	sub	r1, r6, r0
        26f000:	e59d0004 	ldr	r0, [sp, #4]
        26f004:	e0010190 	mul	r1, r0, r1
        26f008:	e3a00064 	mov	r0, #100	; 0x64
        26f00c:	eb650e4b 	bl	1bb2940 <$__rt_sdiv>
        26f010:	e0905005 	adds	r5, r0, r5
        26f014:	43a05000 	movmi	r5, #0	; 0x0
        26f018:	4a000003 	bmi	26f02c <WS_HistTheStroke(ws_data_type *)+0x2c0>
        26f01c:	e3a00fd7 	mov	r0, #860	; 0x35c
        26f020:	e2800b07 	add	r0, r0, #7168	; 0x1c00
        26f024:	e1550000 	cmp	r5, r0
        26f028:	c1a05000 	movgt	r5, r0
        26f02c:	e59d0030 	ldr	r0, [sp, #48]
        26f030:	e1500005 	cmp	r0, r5
        26f034:	c58d5030 	strgt	r5, [sp, #48]
        26f038:	e59d002c 	ldr	r0, [sp, #44]
        26f03c:	e1500005 	cmp	r0, r5
        26f040:	b58d502c 	strlt	r5, [sp, #44]
        26f044:	e59d005c 	ldr	r0, [sp, #92]
        26f048:	e3300000 	teq	r0, #0	; 0x0
        26f04c:	1a000003 	bne	26f060 <WS_HistTheStroke(ws_data_type *)+0x2f4>
        26f050:	e58d5038 	str	r5, [sp, #56]
        26f054:	e1a0a005 	mov	sl, r5
        26f058:	e58d6034 	str	r6, [sp, #52]
        26f05c:	e58d603c 	str	r6, [sp, #60]
        26f060:	e05a0005 	subs	r0, sl, r5
        26f064:	42600000 	rsbmi	r0, r0, #0	; 0x0
        26f068:	e59d103c 	ldr	r1, [sp, #60]
        26f06c:	e0511006 	subs	r1, r1, r6
        26f070:	42611000 	rsbmi	r1, r1, #0	; 0x0
        26f074:	e0800001 	add	r0, r0, r1
        26f078:	e59d104c 	ldr	r1, [sp, #76]
        26f07c:	e0801001 	add	r1, r0, r1
        26f080:	e58d104c 	str	r1, [sp, #76]
        26f084:	e59d001c 	ldr	r0, [sp, #28]
        26f088:	e3300000 	teq	r0, #0	; 0x0
        26f08c:	e59d0058 	ldr	r0, [sp, #88]
        26f090:	e59d1054 	ldr	r1, [sp, #84]
        26f094:	0a000008 	beq	26f0bc <WS_HistTheStroke(ws_data_type *)+0x350>
        26f098:	e0400001 	sub	r0, r0, r1
        26f09c:	e1500006 	cmp	r0, r6
        26f0a0:	c3a00000 	movgt	r0, #0	; 0x0
        26f0a4:	c58d001c 	strgt	r0, [sp, #28]
        26f0a8:	ca000029 	bgt	26f154 <WS_HistTheStroke(ws_data_type *)+0x3e8>
        26f0ac:	e59d0058 	ldr	r0, [sp, #88]
        26f0b0:	e1560000 	cmp	r6, r0
        26f0b4:	da000026 	ble	26f154 <WS_HistTheStroke(ws_data_type *)+0x3e8>
        26f0b8:	ea000024 	b	26f150 <WS_HistTheStroke(ws_data_type *)+0x3e4>
        26f0bc:	e0800001 	add	r0, r0, r1
        26f0c0:	e1500006 	cmp	r0, r6
        26f0c4:	aa00001e 	bge	26f144 <WS_HistTheStroke(ws_data_type *)+0x3d8>
        26f0c8:	e3a00001 	mov	r0, #1	; 0x1
        26f0cc:	e58d001c 	str	r0, [sp, #28]
        26f0d0:	e59d0048 	ldr	r0, [sp, #72]
        26f0d4:	e0450000 	sub	r0, r5, r0
        26f0d8:	e59d3050 	ldr	r3, [sp, #80]
        26f0dc:	e1500003 	cmp	r0, r3
        26f0e0:	da00001b 	ble	26f154 <WS_HistTheStroke(ws_data_type *)+0x3e8>
        26f0e4:	e0552008 	subs	r2, r5, r8
        26f0e8:	e1a00002 	mov	r0, r2
        26f0ec:	e59418d4 	ldr	r1, [r4, #2260]
        26f0f0:	42822003 	addmi	r2, r2, #3	; 0x3
        26f0f4:	e1a02142 	mov	r2, r2, asr #2
        26f0f8:	e7d12002 	ldrb	r2, [r1, r2]
        26f0fc:	e2822018 	add	r2, r2, #24	; 0x18
        26f100:	e3520080 	cmp	r2, #128	; 0x80
        26f104:	aa000005 	bge	26f120 <WS_HistTheStroke(ws_data_type *)+0x3b4>
        26f108:	e1b02000 	movs	r2, r0
        26f10c:	42822003 	addmi	r2, r2, #3	; 0x3
        26f110:	e1a02142 	mov	r2, r2, asr #2
        26f114:	e7d12002 	ldrb	r2, [r1, r2]
        26f118:	e2822018 	add	r2, r2, #24	; 0x18
        26f11c:	ea000000 	b	26f124 <WS_HistTheStroke(ws_data_type *)+0x3b8>
        26f120:	e3a02080 	mov	r2, #128	; 0x80
        26f124:	e20220ff 	and	r2, r2, #255	; 0xff
        26f128:	e3500000 	cmp	r0, #0	; 0x0
        26f12c:	b2800003 	addlt	r0, r0, #3	; 0x3
        26f130:	e1a00140 	mov	r0, r0, asr #2
        26f134:	e7c12000 	strb	r2, [r1, r0]
        26f138:	e1a09005 	mov	r9, r5
        26f13c:	e58d5048 	str	r5, [sp, #72]
        26f140:	ea000003 	b	26f154 <WS_HistTheStroke(ws_data_type *)+0x3e8>
        26f144:	e59d0058 	ldr	r0, [sp, #88]
        26f148:	e1560000 	cmp	r6, r0
        26f14c:	aa000000 	bge	26f154 <WS_HistTheStroke(ws_data_type *)+0x3e8>
        26f150:	e58d6058 	str	r6, [sp, #88]
        26f154:	e59d0014 	ldr	r0, [sp, #20]
        26f158:	e3300000 	teq	r0, #0	; 0x0
        26f15c:	0a000005 	beq	26f178 <WS_HistTheStroke(ws_data_type *)+0x40c>
        26f160:	e59d005c 	ldr	r0, [sp, #92]
        26f164:	e59d1068 	ldr	r1, [sp, #104]
        26f168:	e1510000 	cmp	r1, r0
        26f16c:	b3a00001 	movlt	r0, #1	; 0x1
        26f170:	b58d0010 	strlt	r0, [sp, #16]
        26f174:	ba000002 	blt	26f184 <WS_HistTheStroke(ws_data_type *)+0x418>
        26f178:	e59d0010 	ldr	r0, [sp, #16]
        26f17c:	e3300000 	teq	r0, #0	; 0x0
        26f180:	0a000001 	beq	26f18c <WS_HistTheStroke(ws_data_type *)+0x420>
        26f184:	e59d0064 	ldr	r0, [sp, #100]
        26f188:	ea000000 	b	26f190 <WS_HistTheStroke(ws_data_type *)+0x424>
        26f18c:	e59d0028 	ldr	r0, [sp, #40]
        26f190:	e59d104c 	ldr	r1, [sp, #76]
        26f194:	e1510000 	cmp	r1, r0
        26f198:	ca000003 	bgt	26f1ac <WS_HistTheStroke(ws_data_type *)+0x440>
        26f19c:	e28d105c 	add	r1, sp, #92	; 0x5c
        26f1a0:	e8910003 	ldmia	r1, {r0, r1}
        26f1a4:	e1310000 	teq	r1, r0
        26f1a8:	1a00008f 	bne	26f3ec <WS_HistTheStroke(ws_data_type *)+0x680>
        26f1ac:	e28d105c 	add	r1, sp, #92	; 0x5c
        26f1b0:	e8910003 	ldmia	r1, {r0, r1}
        26f1b4:	e1310000 	teq	r1, r0
        26f1b8:	03a00001 	moveq	r0, #1	; 0x1
        26f1bc:	058d0018 	streq	r0, [sp, #24]
        26f1c0:	e59d2038 	ldr	r2, [sp, #56]
        26f1c4:	e0520005 	subs	r0, r2, r5
        26f1c8:	42600000 	rsbmi	r0, r0, #0	; 0x0
        26f1cc:	e58d0044 	str	r0, [sp, #68]
        26f1d0:	e59d0034 	ldr	r0, [sp, #52]
        26f1d4:	e0500006 	subs	r0, r0, r6
        26f1d8:	42600000 	rsbmi	r0, r0, #0	; 0x0
        26f1dc:	e58d0040 	str	r0, [sp, #64]
        26f1e0:	e0801180 	add	r1, r0, r0, lsl #3
        26f1e4:	e1a01181 	mov	r1, r1, lsl #3
        26f1e8:	e594006c 	ldr	r0, [r4, #108]
        26f1ec:	eb650dd3 	bl	1bb2940 <$__rt_sdiv>
        26f1f0:	e1a0a000 	mov	sl, r0
        26f1f4:	e59d0024 	ldr	r0, [sp, #36]
        26f1f8:	e1560000 	cmp	r6, r0
        26f1fc:	ba000002 	blt	26f20c <WS_HistTheStroke(ws_data_type *)+0x4a0>
        26f200:	e59d0020 	ldr	r0, [sp, #32]
        26f204:	e1560000 	cmp	r6, r0
        26f208:	da000000 	ble	26f210 <WS_HistTheStroke(ws_data_type *)+0x4a4>
        26f20c:	e3a0a001 	mov	sl, #1	; 0x1
        26f210:	e59d0010 	ldr	r0, [sp, #16]
        26f214:	e3300000 	teq	r0, #0	; 0x0
        26f218:	0a000002 	beq	26f228 <WS_HistTheStroke(ws_data_type *)+0x4bc>
        26f21c:	e35a0000 	cmp	sl, #0	; 0x0
        26f220:	b28aa003 	addlt	sl, sl, #3	; 0x3
        26f224:	e1a0a14a 	mov	sl, sl, asr #2
        26f228:	e35a0001 	cmp	sl, #1	; 0x1
        26f22c:	b3a0a001 	movlt	sl, #1	; 0x1
        26f230:	e59d0044 	ldr	r0, [sp, #68]
        26f234:	e3300000 	teq	r0, #0	; 0x0
        26f238:	e59d0018 	ldr	r0, [sp, #24]
        26f23c:	1a000017 	bne	26f2a0 <WS_HistTheStroke(ws_data_type *)+0x534>
        26f240:	e3300000 	teq	r0, #0	; 0x0
        26f244:	01a0710a 	moveq	r7, sl, lsl #2
        26f248:	e0552008 	subs	r2, r5, r8
        26f24c:	e1a00002 	mov	r0, r2
        26f250:	e59418d4 	ldr	r1, [r4, #2260]
        26f254:	42822003 	addmi	r2, r2, #3	; 0x3
        26f258:	e1a02142 	mov	r2, r2, asr #2
        26f25c:	e7d12002 	ldrb	r2, [r1, r2]
        26f260:	e0822007 	add	r2, r2, r7
        26f264:	e3520080 	cmp	r2, #128	; 0x80
        26f268:	aa000005 	bge	26f284 <WS_HistTheStroke(ws_data_type *)+0x518>
        26f26c:	e1b02000 	movs	r2, r0
        26f270:	42822003 	addmi	r2, r2, #3	; 0x3
        26f274:	e1a02142 	mov	r2, r2, asr #2
        26f278:	e7d12002 	ldrb	r2, [r1, r2]
        26f27c:	e0822007 	add	r2, r2, r7
        26f280:	ea000000 	b	26f288 <WS_HistTheStroke(ws_data_type *)+0x51c>
        26f284:	e3a02080 	mov	r2, #128	; 0x80
        26f288:	e20220ff 	and	r2, r2, #255	; 0xff
        26f28c:	e3500000 	cmp	r0, #0	; 0x0
        26f290:	b2800003 	addlt	r0, r0, #3	; 0x3
        26f294:	e1a00140 	mov	r0, r0, asr #2
        26f298:	e7c12000 	strb	r2, [r1, r0]
        26f29c:	ea00004c 	b	26f3d4 <WS_HistTheStroke(ws_data_type *)+0x668>
        26f2a0:	e3300000 	teq	r0, #0	; 0x0
        26f2a4:	1a000003 	bne	26f2b8 <WS_HistTheStroke(ws_data_type *)+0x54c>
        26f2a8:	e59d0044 	ldr	r0, [sp, #68]
        26f2ac:	e59d1040 	ldr	r1, [sp, #64]
        26f2b0:	eb650da2 	bl	1bb2940 <$__rt_sdiv>
        26f2b4:	e2807001 	add	r7, r0, #1	; 0x1
        26f2b8:	e157000a 	cmp	r7, sl
        26f2bc:	c1a0700a 	movgt	r7, sl
        26f2c0:	e59d2038 	ldr	r2, [sp, #56]
        26f2c4:	e1550002 	cmp	r5, r2
        26f2c8:	d3e0c000 	mvnle	ip, #0	; 0x0
        26f2cc:	c3a0c001 	movgt	ip, #1	; 0x1
        26f2d0:	e3a01000 	mov	r1, #0	; 0x0
        26f2d4:	e59d0044 	ldr	r0, [sp, #68]
        26f2d8:	e3500000 	cmp	r0, #0	; 0x0
        26f2dc:	da00003c 	ble	26f3d4 <WS_HistTheStroke(ws_data_type *)+0x668>
        26f2e0:	e000019c 	mul	r0, ip, r1
        26f2e4:	e59d2038 	ldr	r2, [sp, #56]
        26f2e8:	e0800002 	add	r0, r0, r2
        26f2ec:	e050e008 	subs	lr, r0, r8
        26f2f0:	e1a0200e 	mov	r2, lr
        26f2f4:	e59438d4 	ldr	r3, [r4, #2260]
        26f2f8:	428ee003 	addmi	lr, lr, #3	; 0x3
        26f2fc:	e1a0e14e 	mov	lr, lr, asr #2
        26f300:	e7d3e00e 	ldrb	lr, [r3, lr]
        26f304:	e08ee007 	add	lr, lr, r7
        26f308:	e35e0080 	cmp	lr, #128	; 0x80
        26f30c:	aa000005 	bge	26f328 <WS_HistTheStroke(ws_data_type *)+0x5bc>
        26f310:	e1b0e002 	movs	lr, r2
        26f314:	428ee003 	addmi	lr, lr, #3	; 0x3
        26f318:	e1a0e14e 	mov	lr, lr, asr #2
        26f31c:	e7d3e00e 	ldrb	lr, [r3, lr]
        26f320:	e08ee007 	add	lr, lr, r7
        26f324:	ea000000 	b	26f32c <WS_HistTheStroke(ws_data_type *)+0x5c0>
        26f328:	e3a0e080 	mov	lr, #128	; 0x80
        26f32c:	e20ee0ff 	and	lr, lr, #255	; 0xff
        26f330:	e3520000 	cmp	r2, #0	; 0x0
        26f334:	b2822003 	addlt	r2, r2, #3	; 0x3
        26f338:	e1a02142 	mov	r2, r2, asr #2
        26f33c:	e7c3e002 	strb	lr, [r3, r2]
        26f340:	e35e0018 	cmp	lr, #24	; 0x18
        26f344:	ba00001e 	blt	26f3c4 <WS_HistTheStroke(ws_data_type *)+0x658>
        26f348:	e3590000 	cmp	r9, #0	; 0x0
        26f34c:	da00001b 	ble	26f3c0 <WS_HistTheStroke(ws_data_type *)+0x654>
        26f350:	e0592000 	subs	r2, r9, r0
        26f354:	42622000 	rsbmi	r2, r2, #0	; 0x0
        26f358:	e59d3050 	ldr	r3, [sp, #80]
        26f35c:	e1520003 	cmp	r2, r3
        26f360:	aa000016 	bge	26f3c0 <WS_HistTheStroke(ws_data_type *)+0x654>
        26f364:	e3520004 	cmp	r2, #4	; 0x4
        26f368:	da000014 	ble	26f3c0 <WS_HistTheStroke(ws_data_type *)+0x654>
        26f36c:	e059e008 	subs	lr, r9, r8
        26f370:	e1a0300e 	mov	r3, lr
        26f374:	e59428d4 	ldr	r2, [r4, #2260]
        26f378:	428ee003 	addmi	lr, lr, #3	; 0x3
        26f37c:	e1a0e14e 	mov	lr, lr, asr #2
        26f380:	e7d2e00e 	ldrb	lr, [r2, lr]
        26f384:	e35e0018 	cmp	lr, #24	; 0x18
        26f388:	da000005 	ble	26f3a4 <WS_HistTheStroke(ws_data_type *)+0x638>
        26f38c:	e1b0e003 	movs	lr, r3
        26f390:	428ee003 	addmi	lr, lr, #3	; 0x3
        26f394:	e1a0e14e 	mov	lr, lr, asr #2
        26f398:	e7d2e00e 	ldrb	lr, [r2, lr]
        26f39c:	e24ee018 	sub	lr, lr, #24	; 0x18
        26f3a0:	ea000000 	b	26f3a8 <WS_HistTheStroke(ws_data_type *)+0x63c>
        26f3a4:	e3a0e001 	mov	lr, #1	; 0x1
        26f3a8:	e20ee0ff 	and	lr, lr, #255	; 0xff
        26f3ac:	e3530000 	cmp	r3, #0	; 0x0
        26f3b0:	b2833003 	addlt	r3, r3, #3	; 0x3
        26f3b4:	e1a03143 	mov	r3, r3, asr #2
        26f3b8:	e7c2e003 	strb	lr, [r2, r3]
        26f3bc:	e3a09000 	mov	r9, #0	; 0x0
        26f3c0:	e58d0048 	str	r0, [sp, #72]
        26f3c4:	e2811001 	add	r1, r1, #1	; 0x1
        26f3c8:	e59d0044 	ldr	r0, [sp, #68]
        26f3cc:	e1510000 	cmp	r1, r0
        26f3d0:	baffffc2 	blt	26f2e0 <WS_HistTheStroke(ws_data_type *)+0x574>
        26f3d4:	e3a01000 	mov	r1, #0	; 0x0
        26f3d8:	e3a00000 	mov	r0, #0	; 0x0
        26f3dc:	e58d0010 	str	r0, [sp, #16]
        26f3e0:	e58d104c 	str	r1, [sp, #76]
        26f3e4:	e58d5038 	str	r5, [sp, #56]
        26f3e8:	e58d6034 	str	r6, [sp, #52]
        26f3ec:	e1a0a005 	mov	sl, r5
        26f3f0:	e58d603c 	str	r6, [sp, #60]
        26f3f4:	e59d005c 	ldr	r0, [sp, #92]
        26f3f8:	e2800001 	add	r0, r0, #1	; 0x1
        26f3fc:	e58d005c 	str	r0, [sp, #92]
        26f400:	e59d100c 	ldr	r1, [sp, #12]
        26f404:	e1500001 	cmp	r0, r1
        26f408:	bafffef3 	blt	26efdc <WS_HistTheStroke(ws_data_type *)+0x270>
        26f40c:	e59d002c 	ldr	r0, [sp, #44]
        26f410:	e280c004 	add	ip, r0, #4	; 0x4
        26f414:	e1a0600c 	mov	r6, ip
        26f418:	e3a01000 	mov	r1, #0	; 0x0
        26f41c:	e1a02001 	mov	r2, r1
        26f420:	e3a03000 	mov	r3, #0	; 0x0
        26f424:	e59d0030 	ldr	r0, [sp, #48]
        26f428:	e150000c 	cmp	r0, ip
        26f42c:	ca000010 	bgt	26f474 <WS_HistTheStroke(ws_data_type *)+0x708>
        26f430:	e59458d4 	ldr	r5, [r4, #2260]
        26f434:	e050e008 	subs	lr, r0, r8
        26f438:	428ee003 	addmi	lr, lr, #3	; 0x3
        26f43c:	e1a0e14e 	mov	lr, lr, asr #2
        26f440:	e7d5e00e 	ldrb	lr, [r5, lr]
        26f444:	e15e0003 	cmp	lr, r3
        26f448:	c1a0300e 	movgt	r3, lr
        26f44c:	e35e000c 	cmp	lr, #12	; 0xc
        26f450:	ba000002 	blt	26f460 <WS_HistTheStroke(ws_data_type *)+0x6f4>
        26f454:	e3310000 	teq	r1, #0	; 0x0
        26f458:	01a01000 	moveq	r1, r0
        26f45c:	e1a02000 	mov	r2, r0
        26f460:	e2800004 	add	r0, r0, #4	; 0x4
        26f464:	e150000c 	cmp	r0, ip
        26f468:	dafffff1 	ble	26f434 <WS_HistTheStroke(ws_data_type *)+0x6c8>
        26f46c:	e353000c 	cmp	r3, #12	; 0xc
        26f470:	aa00001e 	bge	26f4f0 <WS_HistTheStroke(ws_data_type *)+0x784>
        26f474:	e59d0030 	ldr	r0, [sp, #48]
        26f478:	e59d502c 	ldr	r5, [sp, #44]
        26f47c:	e0950000 	adds	r0, r5, r0
        26f480:	42800007 	addmi	r0, r0, #7	; 0x7
        26f484:	e1a001c0 	mov	r0, r0, asr #3
        26f488:	e1a01100 	mov	r1, r0, lsl #2
        26f48c:	e0513008 	subs	r3, r1, r8
        26f490:	e1a02003 	mov	r2, r3
        26f494:	e59408d4 	ldr	r0, [r4, #2260]
        26f498:	42833003 	addmi	r3, r3, #3	; 0x3
        26f49c:	e1a03143 	mov	r3, r3, asr #2
        26f4a0:	e7d03003 	ldrb	r3, [r0, r3]
        26f4a4:	e283300c 	add	r3, r3, #12	; 0xc
        26f4a8:	e3530080 	cmp	r3, #128	; 0x80
        26f4ac:	aa000005 	bge	26f4c8 <WS_HistTheStroke(ws_data_type *)+0x75c>
        26f4b0:	e1b03002 	movs	r3, r2
        26f4b4:	42833003 	addmi	r3, r3, #3	; 0x3
        26f4b8:	e1a03143 	mov	r3, r3, asr #2
        26f4bc:	e7d03003 	ldrb	r3, [r0, r3]
        26f4c0:	e283300c 	add	r3, r3, #12	; 0xc
        26f4c4:	ea000000 	b	26f4cc <WS_HistTheStroke(ws_data_type *)+0x760>
        26f4c8:	e3a03080 	mov	r3, #128	; 0x80
        26f4cc:	e20330ff 	and	r3, r3, #255	; 0xff
        26f4d0:	e3520000 	cmp	r2, #0	; 0x0
        26f4d4:	b2822003 	addlt	r2, r2, #3	; 0x3
        26f4d8:	e1a02142 	mov	r2, r2, asr #2
        26f4dc:	e7c03002 	strb	r3, [r0, r2]
        26f4e0:	e1a02001 	mov	r2, r1
        26f4e4:	e5940020 	ldr	r0, [r4, #32]
        26f4e8:	e3800080 	orr	r0, r0, #128	; 0x80
        26f4ec:	e5840020 	str	r0, [r4, #32]
        26f4f0:	e59d0030 	ldr	r0, [sp, #48]
        26f4f4:	e1510000 	cmp	r1, r0
        26f4f8:	b59d1030 	ldrlt	r1, [sp, #48]
        26f4fc:	e59d002c 	ldr	r0, [sp, #44]
        26f500:	e2800001 	add	r0, r0, #1	; 0x1
        26f504:	e1500002 	cmp	r0, r2
        26f508:	b1a02000 	movlt	r2, r0
        26f50c:	e59d0028 	ldr	r0, [sp, #40]
        26f510:	e3510000 	cmp	r1, #0	; 0x0
        26f514:	e5840048 	str	r0, [r4, #72]
        26f518:	b2811003 	addlt	r1, r1, #3	; 0x3
        26f51c:	e1a01141 	mov	r1, r1, asr #2
        26f520:	e1a00101 	mov	r0, r1, lsl #2
        26f524:	e3520000 	cmp	r2, #0	; 0x0
        26f528:	e584004c 	str	r0, [r4, #76]
        26f52c:	b2822003 	addlt	r2, r2, #3	; 0x3
        26f530:	e1a02142 	mov	r2, r2, asr #2
        26f534:	e3a00004 	mov	r0, #4	; 0x4
        26f538:	e0800102 	add	r0, r0, r2, lsl #2
        26f53c:	e5840050 	str	r0, [r4, #80]
        26f540:	e59d0030 	ldr	r0, [sp, #48]
        26f544:	e3500000 	cmp	r0, #0	; 0x0
        26f548:	b2800003 	addlt	r0, r0, #3	; 0x3
        26f54c:	e1a00140 	mov	r0, r0, asr #2
        26f550:	e1a00100 	mov	r0, r0, lsl #2
        26f554:	e3560000 	cmp	r6, #0	; 0x0
        26f558:	e5840028 	str	r0, [r4, #40]
        26f55c:	b2866003 	addlt	r6, r6, #3	; 0x3
        26f560:	e1a06146 	mov	r6, r6, asr #2
        26f564:	e1a01106 	mov	r1, r6, lsl #2
        26f568:	e584102c 	str	r1, [r4, #44]
        26f56c:	e0411000 	sub	r1, r1, r0
        26f570:	e5841038 	str	r1, [r4, #56]
        26f574:	e594108c 	ldr	r1, [r4, #140]
        26f578:	e0841181 	add	r1, r4, r1, lsl #3
        26f57c:	e5c10cc5 	strb	r0, [r1, #3269]
        26f580:	e1a00440 	mov	r0, r0, asr #8
        26f584:	e5c10cc4 	strb	r0, [r1, #3268]
        26f588:	e594002c 	ldr	r0, [r4, #44]
        26f58c:	e594108c 	ldr	r1, [r4, #140]
        26f590:	e0841181 	add	r1, r4, r1, lsl #3
        26f594:	e5c10cc7 	strb	r0, [r1, #3271]
        26f598:	e1a00440 	mov	r0, r0, asr #8
        26f59c:	e5c10cc6 	strb	r0, [r1, #3270]
        26f5a0:	e5940050 	ldr	r0, [r4, #80]
        26f5a4:	e594108c 	ldr	r1, [r4, #140]
        26f5a8:	e0841181 	add	r1, r4, r1, lsl #3
        26f5ac:	e5c10ccb 	strb	r0, [r1, #3275]
        26f5b0:	e1a00440 	mov	r0, r0, asr #8
        26f5b4:	e5c10cca 	strb	r0, [r1, #3274]
        26f5b8:	e3a00000 	mov	r0, #0	; 0x0
        26f5bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WS_AddStrokeToHist(ws_data_type *)
 * Address: 0026f5c0
 */
WS_AddStrokeToHist(ws_data_type *) {
    /*
        26f5c0:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        26f5c4:	e590104c 	ldr	r1, [r0, #76]
        26f5c8:	e1b02001 	movs	r2, r1
        26f5cc:	4281100f 	addmi	r1, r1, #15	; 0xf
        26f5d0:	e1a01241 	mov	r1, r1, asr #4
        26f5d4:	e0801081 	add	r1, r0, r1, lsl #1
        26f5d8:	e59118d8 	ldr	r1, [r1, #2264]
        26f5dc:	e1a01841 	mov	r1, r1, asr #16
        26f5e0:	e5903020 	ldr	r3, [r0, #32]
        26f5e4:	e3130080 	tst	r3, #128	; 0x80
        26f5e8:	0a000023 	beq	26f67c <WS_AddStrokeToHist(ws_data_type *)+0xbc>
        26f5ec:	e1b03002 	movs	r3, r2
        26f5f0:	42833003 	addmi	r3, r3, #3	; 0x3
        26f5f4:	e0803143 	add	r3, r0, r3, asr #2
        26f5f8:	e5d330fc 	ldrb	r3, [r3, #252]
        26f5fc:	e3530000 	cmp	r3, #0	; 0x0
        26f600:	da000014 	ble	26f658 <WS_AddStrokeToHist(ws_data_type *)+0x98>
        26f604:	e59030f8 	ldr	r3, [r0, #248]
        26f608:	e052c003 	subs	ip, r2, r3
        26f60c:	e1a0300c 	mov	r3, ip
        26f610:	428cc003 	addmi	ip, ip, #3	; 0x3
        26f614:	e1a0c14c 	mov	ip, ip, asr #2
        26f618:	e59028d4 	ldr	r2, [r0, #2260]
        26f61c:	e7d2c00c 	ldrb	ip, [r2, ip]
        26f620:	e35c000c 	cmp	ip, #12	; 0xc
        26f624:	da000005 	ble	26f640 <WS_AddStrokeToHist(ws_data_type *)+0x80>
        26f628:	e1b0c003 	movs	ip, r3
        26f62c:	428cc003 	addmi	ip, ip, #3	; 0x3
        26f630:	e1a0c14c 	mov	ip, ip, asr #2
        26f634:	e7d2c00c 	ldrb	ip, [r2, ip]
        26f638:	e24cc00c 	sub	ip, ip, #12	; 0xc
        26f63c:	ea000000 	b	26f644 <WS_AddStrokeToHist(ws_data_type *)+0x84>
        26f640:	e3a0c001 	mov	ip, #1	; 0x1
        26f644:	e20cc0ff 	and	ip, ip, #255	; 0xff
        26f648:	e3530000 	cmp	r3, #0	; 0x0
        26f64c:	b2833003 	addlt	r3, r3, #3	; 0x3
        26f650:	e1a03143 	mov	r3, r3, asr #2
        26f654:	e7c2c003 	strb	ip, [r2, r3]
        26f658:	e5902064 	ldr	r2, [r0, #100]
        26f65c:	e0822fa2 	add	r2, r2, r2, lsr #31
        26f660:	e5903038 	ldr	r3, [r0, #56]
        26f664:	e15300c2 	cmp	r3, r2, asr #1
        26f668:	aa000003 	bge	26f67c <WS_AddStrokeToHist(ws_data_type *)+0xbc>
        26f66c:	e3510000 	cmp	r1, #0	; 0x0
        26f670:	c5902030 	ldrgt	r2, [r0, #48]
        26f674:	c1520001 	cmpgt	r2, r1
        26f678:	ca000024 	bgt	26f710 <WS_AddStrokeToHist(ws_data_type *)+0x150>
        26f67c:	e5902028 	ldr	r2, [r0, #40]
        26f680:	e1b01002 	movs	r1, r2
        26f684:	42822003 	addmi	r2, r2, #3	; 0x3
        26f688:	e0802142 	add	r2, r0, r2, asr #2
        26f68c:	e28220fc 	add	r2, r2, #252	; 0xfc
        26f690:	e59030f8 	ldr	r3, [r0, #248]
        26f694:	e0513003 	subs	r3, r1, r3
        26f698:	42833003 	addmi	r3, r3, #3	; 0x3
        26f69c:	e590c8d4 	ldr	ip, [r0, #2260]
        26f6a0:	e08c3143 	add	r3, ip, r3, asr #2
        26f6a4:	e590c02c 	ldr	ip, [r0, #44]
        26f6a8:	e15c0001 	cmp	ip, r1
        26f6ac:	da000017 	ble	26f710 <WS_AddStrokeToHist(ws_data_type *)+0x150>
        26f6b0:	e5d3c000 	ldrb	ip, [r3]
        26f6b4:	e1a0e12c 	mov	lr, ip, lsr #2
        26f6b8:	e590c04c 	ldr	ip, [r0, #76]
        26f6bc:	e15c0001 	cmp	ip, r1
        26f6c0:	ca000003 	bgt	26f6d4 <WS_AddStrokeToHist(ws_data_type *)+0x114>
        26f6c4:	e590c050 	ldr	ip, [r0, #80]
        26f6c8:	e15c0001 	cmp	ip, r1
        26f6cc:	c3a0c080 	movgt	ip, #128	; 0x80
        26f6d0:	ca000000 	bgt	26f6d8 <WS_AddStrokeToHist(ws_data_type *)+0x118>
        26f6d4:	e3a0c000 	mov	ip, #0	; 0x0
        26f6d8:	e5d25000 	ldrb	r5, [r2]
        26f6dc:	e205403f 	and	r4, r5, #63	; 0x3f
        26f6e0:	e2055080 	and	r5, r5, #128	; 0x80
        26f6e4:	e084e00e 	add	lr, r4, lr
        26f6e8:	e35e003f 	cmp	lr, #63	; 0x3f
        26f6ec:	c3a0e03f 	movgt	lr, #63	; 0x3f
        26f6f0:	e185c00c 	orr	ip, r5, ip
        26f6f4:	e18ec00c 	orr	ip, lr, ip
        26f6f8:	e4c2c001 	strb	ip, [r2], #1
        26f6fc:	e2811004 	add	r1, r1, #4	; 0x4
        26f700:	e2833001 	add	r3, r3, #1	; 0x1
        26f704:	e590c02c 	ldr	ip, [r0, #44]
        26f708:	e15c0001 	cmp	ip, r1
        26f70c:	caffffe7 	bgt	26f6b0 <WS_AddStrokeToHist(ws_data_type *)+0xf0>
        26f710:	e5901028 	ldr	r1, [r0, #40]
        26f714:	e5902078 	ldr	r2, [r0, #120]
        26f718:	e1520001 	cmp	r2, r1
        26f71c:	c5801078 	strgt	r1, [r0, #120]
        26f720:	e590102c 	ldr	r1, [r0, #44]
        26f724:	e590207c 	ldr	r2, [r0, #124]
        26f728:	e1520001 	cmp	r2, r1
        26f72c:	b580107c 	strlt	r1, [r0, #124]
        26f730:	e590104c 	ldr	r1, [r0, #76]
        26f734:	e5902080 	ldr	r2, [r0, #128]
        26f738:	e1520001 	cmp	r2, r1
        26f73c:	c5801080 	strgt	r1, [r0, #128]
        26f740:	e5901050 	ldr	r1, [r0, #80]
        26f744:	e5902084 	ldr	r2, [r0, #132]
        26f748:	e1520001 	cmp	r2, r1
        26f74c:	b5a01084 	strlt	r1, [r0, #132]!
        26f750:	e3a00000 	mov	r0, #0	; 0x0
        26f754:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: WS_CalcGaps(ws_data_type *)
 * Address: 0026f758
 */
WS_CalcGaps(ws_data_type *) {
    /*
        26f758:	e1a0c00d 	mov	ip, sp
        26f75c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26f760:	e24cb004 	sub	fp, ip, #4	; 0x4
        26f764:	e24dd00c 	sub	sp, sp, #12	; 0xc
        26f768:	e1a05000 	mov	r5, r0
        26f76c:	e59000c8 	ldr	r0, [r0, #200]
        26f770:	e3500000 	cmp	r0, #0	; 0x0
        26f774:	da000004 	ble	26f78c <WS_CalcGaps(ws_data_type *)+0x34>
        26f778:	e595109c 	ldr	r1, [r5, #156]
        26f77c:	e0800001 	add	r0, r0, r1
        26f780:	e0800fa0 	add	r0, r0, r0, lsr #31
        26f784:	e1a000c0 	mov	r0, r0, asr #1
        26f788:	ea000000 	b	26f790 <WS_CalcGaps(ws_data_type *)+0x38>
        26f78c:	e595009c 	ldr	r0, [r5, #156]
        26f790:	e280200a 	add	r2, r0, #10	; 0xa
        26f794:	e58d2000 	str	r2, [sp]
        26f798:	e352000a 	cmp	r2, #10	; 0xa
        26f79c:	b3a0200a 	movlt	r2, #10	; 0xa
        26f7a0:	ba000003 	blt	26f7b4 <WS_CalcGaps(ws_data_type *)+0x5c>
        26f7a4:	e59d2000 	ldr	r2, [sp]
        26f7a8:	e352005a 	cmp	r2, #90	; 0x5a
        26f7ac:	da000001 	ble	26f7b8 <WS_CalcGaps(ws_data_type *)+0x60>
        26f7b0:	e3a0205a 	mov	r2, #90	; 0x5a
        26f7b4:	e58d2000 	str	r2, [sp]
        26f7b8:	e59500b4 	ldr	r0, [r5, #180]
        26f7bc:	e5951070 	ldr	r1, [r5, #112]
        26f7c0:	e0400001 	sub	r0, r0, r1
        26f7c4:	e2806004 	add	r6, r0, #4	; 0x4
        26f7c8:	e2854a01 	add	r4, r5, #4096	; 0x1000
        26f7cc:	e594088c 	ldr	r0, [r4, #2188]
        26f7d0:	e3300000 	teq	r0, #0	; 0x0
        26f7d4:	0a000004 	beq	26f7ec <WS_CalcGaps(ws_data_type *)+0x94>
        26f7d8:	e5941888 	ldr	r1, [r4, #2184]
        26f7dc:	e3310000 	teq	r1, #0	; 0x0
        26f7e0:	1b5ffff3 	blne	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        26f7e4:	e594088c 	ldr	r0, [r4, #2188]
        26f7e8:	eb5ffff2 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        26f7ec:	e1a00206 	mov	r0, r6, lsl #4
        26f7f0:	eb5fffed 	bl	1a6f7ac <$HWRMemoryAllocHandle(unsigned long)>
        26f7f4:	e584088c 	str	r0, [r4, #2188]
        26f7f8:	e3300000 	teq	r0, #0	; 0x0
        26f7fc:	0a00006f 	beq	26f9c0 <WS_CalcGaps(ws_data_type *)+0x268>
        26f800:	eb5fffea 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        26f804:	e5840888 	str	r0, [r4, #2184]
        26f808:	e3300000 	teq	r0, #0	; 0x0
        26f80c:	0a00006b 	beq	26f9c0 <WS_CalcGaps(ws_data_type *)+0x268>
        26f810:	e3a00000 	mov	r0, #0	; 0x0
        26f814:	e3a06000 	mov	r6, #0	; 0x0
        26f818:	e3a08000 	mov	r8, #0	; 0x0
        26f81c:	e1a09008 	mov	r9, r8
        26f820:	e5957078 	ldr	r7, [r5, #120]
        26f824:	e58d7004 	str	r7, [sp, #4]
        26f828:	e1a0a007 	mov	sl, r7
        26f82c:	e595107c 	ldr	r1, [r5, #124]
        26f830:	e2811004 	add	r1, r1, #4	; 0x4
        26f834:	e1510007 	cmp	r1, r7
        26f838:	da00005d 	ble	26f9b4 <WS_CalcGaps(ws_data_type *)+0x25c>
        26f83c:	e59d2000 	ldr	r2, [sp]
        26f840:	e2621064 	rsb	r1, r2, #100	; 0x64
        26f844:	e58d1008 	str	r1, [sp, #8]
        26f848:	e1b01007 	movs	r1, r7
        26f84c:	42811003 	addmi	r1, r1, #3	; 0x3
        26f850:	e0851141 	add	r1, r5, r1, asr #2
        26f854:	e5d110fc 	ldrb	r1, [r1, #252]
        26f858:	e595207c 	ldr	r2, [r5, #124]
        26f85c:	e1520007 	cmp	r2, r7
        26f860:	d3811080 	orrle	r1, r1, #128	; 0x80
        26f864:	d3a00000 	movle	r0, #0	; 0x0
        26f868:	e3110080 	tst	r1, #128	; 0x80
        26f86c:	0a000041 	beq	26f978 <WS_CalcGaps(ws_data_type *)+0x220>
        26f870:	e3300001 	teq	r0, #1	; 0x1
        26f874:	058d7004 	streq	r7, [sp, #4]
        26f878:	01a0a007 	moveq	sl, r7
        26f87c:	0a000047 	beq	26f9a0 <WS_CalcGaps(ws_data_type *)+0x248>
        26f880:	e08a0007 	add	r0, sl, r7
        26f884:	e0800fa0 	add	r0, r0, r0, lsr #31
        26f888:	e1a000c0 	mov	r0, r0, asr #1
        26f88c:	e5942888 	ldr	r2, [r4, #2184]
        26f890:	e0822206 	add	r2, r2, r6, lsl #4
        26f894:	e5c20001 	strb	r0, [r2, #1]
        26f898:	e1a01440 	mov	r1, r0, asr #8
        26f89c:	e5c21000 	strb	r1, [r2]
        26f8a0:	e3380000 	teq	r8, #0	; 0x0
        26f8a4:	159d0004 	ldrne	r0, [sp, #4]
        26f8a8:	e5941888 	ldr	r1, [r4, #2184]
        26f8ac:	e0811206 	add	r1, r1, r6, lsl #4
        26f8b0:	e5c10005 	strb	r0, [r1, #5]
        26f8b4:	e1a00440 	mov	r0, r0, asr #8
        26f8b8:	e5c10004 	strb	r0, [r1, #4]
        26f8bc:	e3390000 	teq	r9, #0	; 0x0
        26f8c0:	11a0000a 	movne	r0, sl
        26f8c4:	01a00007 	moveq	r0, r7
        26f8c8:	e5941888 	ldr	r1, [r4, #2184]
        26f8cc:	e0811206 	add	r1, r1, r6, lsl #4
        26f8d0:	e5c10003 	strb	r0, [r1, #3]
        26f8d4:	e1a00440 	mov	r0, r0, asr #8
        26f8d8:	e5c10002 	strb	r0, [r1, #2]
        26f8dc:	e0491008 	sub	r1, r9, r8
        26f8e0:	e59d0008 	ldr	r0, [sp, #8]
        26f8e4:	e0010190 	mul	r1, r0, r1
        26f8e8:	e3a00064 	mov	r0, #100	; 0x64
        26f8ec:	eb650c13 	bl	1bb2940 <$__rt_sdiv>
        26f8f0:	e0800008 	add	r0, r0, r8
        26f8f4:	e1a00100 	mov	r0, r0, lsl #2
        26f8f8:	e1a02800 	mov	r2, r0, lsl #16
        26f8fc:	e1a02842 	mov	r2, r2, asr #16
        26f900:	e5940888 	ldr	r0, [r4, #2184]
        26f904:	e0801206 	add	r1, r0, r6, lsl #4
        26f908:	e5c12009 	strb	r2, [r1, #9]
        26f90c:	e1a00442 	mov	r0, r2, asr #8
        26f910:	e5c10008 	strb	r0, [r1, #8]
        26f914:	e5941888 	ldr	r1, [r4, #2184]
        26f918:	e0811206 	add	r1, r1, r6, lsl #4
        26f91c:	e5c12007 	strb	r2, [r1, #7]
        26f920:	e5c10006 	strb	r0, [r1, #6]
        26f924:	e1a00108 	mov	r0, r8, lsl #2
        26f928:	e5941888 	ldr	r1, [r4, #2184]
        26f92c:	e0811206 	add	r1, r1, r6, lsl #4
        26f930:	e5c1000b 	strb	r0, [r1, #11]
        26f934:	e1a00440 	mov	r0, r0, asr #8
        26f938:	e5c1000a 	strb	r0, [r1, #10]
        26f93c:	e1a00109 	mov	r0, r9, lsl #2
        26f940:	e5941888 	ldr	r1, [r4, #2184]
        26f944:	e0811206 	add	r1, r1, r6, lsl #4
        26f948:	e5c1000d 	strb	r0, [r1, #13]
        26f94c:	e1a00440 	mov	r0, r0, asr #8
        26f950:	e5c1000c 	strb	r0, [r1, #12]
        26f954:	e3a01000 	mov	r1, #0	; 0x0
        26f958:	e5940888 	ldr	r0, [r4, #2184]
        26f95c:	e0800206 	add	r0, r0, r6, lsl #4
        26f960:	e5c0100e 	strb	r1, [r0, #14]
        26f964:	e2866001 	add	r6, r6, #1	; 0x1
        26f968:	e3a08000 	mov	r8, #0	; 0x0
        26f96c:	e1a09008 	mov	r9, r8
        26f970:	e3a00001 	mov	r0, #1	; 0x1
        26f974:	ea000009 	b	26f9a0 <WS_CalcGaps(ws_data_type *)+0x248>
        26f978:	e3300001 	teq	r0, #1	; 0x1
        26f97c:	03a00000 	moveq	r0, #0	; 0x0
        26f980:	e311003f 	tst	r1, #63	; 0x3f
        26f984:	1a000002 	bne	26f994 <WS_CalcGaps(ws_data_type *)+0x23c>
        26f988:	e3380000 	teq	r8, #0	; 0x0
        26f98c:	058d7004 	streq	r7, [sp, #4]
        26f990:	e2888001 	add	r8, r8, #1	; 0x1
        26f994:	e3390000 	teq	r9, #0	; 0x0
        26f998:	01a0a007 	moveq	sl, r7
        26f99c:	e2899001 	add	r9, r9, #1	; 0x1
        26f9a0:	e2877004 	add	r7, r7, #4	; 0x4
        26f9a4:	e595107c 	ldr	r1, [r5, #124]
        26f9a8:	e2811004 	add	r1, r1, #4	; 0x4
        26f9ac:	e1510007 	cmp	r1, r7
        26f9b0:	caffffa4 	bgt	26f848 <WS_CalcGaps(ws_data_type *)+0xf0>
        26f9b4:	e3a00000 	mov	r0, #0	; 0x0
        26f9b8:	e5a560a8 	str	r6, [r5, #168]!
        26f9bc:	ea000000 	b	26f9c4 <WS_CalcGaps(ws_data_type *)+0x26c>
        26f9c0:	e3a00001 	mov	r0, #1	; 0x1
        26f9c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WS_CountPiks(ws_data_type *)
 * Address: 0026f9c8
 */
WS_CountPiks(ws_data_type *) {
    /*
        26f9c8:	e1a0c00d 	mov	ip, sp
        26f9cc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        26f9d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26f9d4:	e1a04000 	mov	r4, r0
        26f9d8:	e59000c8 	ldr	r0, [r0, #200]
        26f9dc:	e3500000 	cmp	r0, #0	; 0x0
        26f9e0:	da000004 	ble	26f9f8 <WS_CountPiks(ws_data_type *)+0x30>
        26f9e4:	e594109c 	ldr	r1, [r4, #156]
        26f9e8:	e0800001 	add	r0, r0, r1
        26f9ec:	e0800fa0 	add	r0, r0, r0, lsr #31
        26f9f0:	e1a000c0 	mov	r0, r0, asr #1
        26f9f4:	ea000000 	b	26f9fc <WS_CountPiks(ws_data_type *)+0x34>
        26f9f8:	e594009c 	ldr	r0, [r4, #156]
        26f9fc:	e594506c 	ldr	r5, [r4, #108]
        26fa00:	e3550000 	cmp	r5, #0	; 0x0
        26fa04:	b285500f 	addlt	r5, r5, #15	; 0xf
        26fa08:	e1a05245 	mov	r5, r5, asr #4
        26fa0c:	e0010095 	mul	r1, r5, r0
        26fa10:	e3a00032 	mov	r0, #50	; 0x32
        26fa14:	eb650bc9 	bl	1bb2940 <$__rt_sdiv>
        26fa18:	e0806005 	add	r6, r0, r5
        26fa1c:	e3a07001 	mov	r7, #1	; 0x1
        26fa20:	e3a05001 	mov	r5, #1	; 0x1
        26fa24:	e3a01001 	mov	r1, #1	; 0x1
        26fa28:	e3a0e000 	mov	lr, #0	; 0x0
        26fa2c:	e3a03000 	mov	r3, #0	; 0x0
        26fa30:	e3a02000 	mov	r2, #0	; 0x0
        26fa34:	e5948084 	ldr	r8, [r4, #132]
        26fa38:	e594c080 	ldr	ip, [r4, #128]
        26fa3c:	e158000c 	cmp	r8, ip
        26fa40:	da000029 	ble	26faec <WS_CountPiks(ws_data_type *)+0x124>
        26fa44:	e1b0000c 	movs	r0, ip
        26fa48:	42800003 	addmi	r0, r0, #3	; 0x3
        26fa4c:	e0840140 	add	r0, r4, r0, asr #2
        26fa50:	e5d000fc 	ldrb	r0, [r0, #252]
        26fa54:	e200003f 	and	r0, r0, #63	; 0x3f
        26fa58:	e3530000 	cmp	r3, #0	; 0x0
        26fa5c:	c2433004 	subgt	r3, r3, #4	; 0x4
        26fa60:	ca00001c 	bgt	26fad8 <WS_CountPiks(ws_data_type *)+0x110>
        26fa64:	e3370000 	teq	r7, #0	; 0x0
        26fa68:	0a000001 	beq	26fa74 <WS_CountPiks(ws_data_type *)+0xac>
        26fa6c:	e3300000 	teq	r0, #0	; 0x0
        26fa70:	0a000018 	beq	26fad8 <WS_CountPiks(ws_data_type *)+0x110>
        26fa74:	e3a07000 	mov	r7, #0	; 0x0
        26fa78:	e3310000 	teq	r1, #0	; 0x0
        26fa7c:	0a00000b 	beq	26fab0 <WS_CountPiks(ws_data_type *)+0xe8>
        26fa80:	e150000e 	cmp	r0, lr
        26fa84:	c1a0e000 	movgt	lr, r0
        26fa88:	e3310000 	teq	r1, #0	; 0x0
        26fa8c:	0a000007 	beq	26fab0 <WS_CountPiks(ws_data_type *)+0xe8>
        26fa90:	e24e9003 	sub	r9, lr, #3	; 0x3
        26fa94:	e1590000 	cmp	r9, r0
        26fa98:	a2822001 	addge	r2, r2, #1	; 0x1
        26fa9c:	a3a01000 	movge	r1, #0	; 0x0
        26faa0:	a1a05000 	movge	r5, r0
        26faa4:	aa00000a 	bge	26fad4 <WS_CountPiks(ws_data_type *)+0x10c>
        26faa8:	e3510000 	cmp	r1, #0	; 0x0
        26faac:	1a000002 	bne	26fabc <WS_CountPiks(ws_data_type *)+0xf4>
        26fab0:	e1500005 	cmp	r0, r5
        26fab4:	b1a05000 	movlt	r5, r0
        26fab8:	ea000000 	b	26fac0 <WS_CountPiks(ws_data_type *)+0xf8>
        26fabc:	1a000005 	bne	26fad8 <WS_CountPiks(ws_data_type *)+0x110>
        26fac0:	e2859003 	add	r9, r5, #3	; 0x3
        26fac4:	e1590000 	cmp	r9, r0
        26fac8:	ca000002 	bgt	26fad8 <WS_CountPiks(ws_data_type *)+0x110>
        26facc:	e3a01001 	mov	r1, #1	; 0x1
        26fad0:	e1a0e000 	mov	lr, r0
        26fad4:	e1a03006 	mov	r3, r6
        26fad8:	e28cc004 	add	ip, ip, #4	; 0x4
        26fadc:	e158000c 	cmp	r8, ip
        26fae0:	caffffd7 	bgt	26fa44 <WS_CountPiks(ws_data_type *)+0x7c>
        26fae4:	e3310000 	teq	r1, #0	; 0x0
        26fae8:	0a000000 	beq	26faf0 <WS_CountPiks(ws_data_type *)+0x128>
        26faec:	e2822001 	add	r2, r2, #1	; 0x1
        26faf0:	e3a00000 	mov	r0, #0	; 0x0
        26faf4:	e5a42088 	str	r2, [r4, #136]!
        26faf8:	e5a4601c 	str	r6, [r4, #28]!
        26fafc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: WS_SetLineVars(ws_data_type *)
 * Address: 0026fb00
 */
WS_SetLineVars(ws_data_type *) {
    /*
        26fb00:	e1a0c00d 	mov	ip, sp
        26fb04:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26fb08:	e24cb004 	sub	fp, ip, #4	; 0x4
        26fb0c:	e24dd014 	sub	sp, sp, #20	; 0x14
        26fb10:	e1a04000 	mov	r4, r0
        26fb14:	e5900088 	ldr	r0, [r0, #136]
        26fb18:	e3500003 	cmp	r0, #3	; 0x3
        26fb1c:	da000005 	ble	26fb38 <WS_SetLineVars(ws_data_type *)+0x38>
        26fb20:	e2842078 	add	r2, r4, #120	; 0x78
        26fb24:	e8920006 	ldmia	r2, {r1, r2}
        26fb28:	e0421001 	sub	r1, r2, r1
        26fb2c:	eb650b83 	bl	1bb2940 <$__rt_sdiv>
        26fb30:	e5840068 	str	r0, [r4, #104]
        26fb34:	ea000006 	b	26fb54 <WS_SetLineVars(ws_data_type *)+0x54>
        26fb38:	e59400c4 	ldr	r0, [r4, #196]
        26fb3c:	e3500000 	cmp	r0, #0	; 0x0
        26fb40:	d594006c 	ldrle	r0, [r4, #108]
        26fb44:	d0800fa0 	addle	r0, r0, r0, lsr #31
        26fb48:	d1a000c0 	movle	r0, r0, asr #1
        26fb4c:	e5840068 	str	r0, [r4, #104]
        26fb50:	e5840064 	str	r0, [r4, #100]
        26fb54:	e59400c4 	ldr	r0, [r4, #196]
        26fb58:	e3500000 	cmp	r0, #0	; 0x0
        26fb5c:	da000004 	ble	26fb74 <WS_SetLineVars(ws_data_type *)+0x74>
        26fb60:	e5941068 	ldr	r1, [r4, #104]
        26fb64:	e0805001 	add	r5, r0, r1
        26fb68:	e0855fa5 	add	r5, r5, r5, lsr #31
        26fb6c:	e1a050c5 	mov	r5, r5, asr #1
        26fb70:	ea000000 	b	26fb78 <WS_SetLineVars(ws_data_type *)+0x78>
        26fb74:	e5945068 	ldr	r5, [r4, #104]
        26fb78:	e5940088 	ldr	r0, [r4, #136]
        26fb7c:	e58d0010 	str	r0, [sp, #16]
        26fb80:	e3500003 	cmp	r0, #3	; 0x3
        26fb84:	d594606c 	ldrle	r6, [r4, #108]
        26fb88:	c1a06005 	movgt	r6, r5
        26fb8c:	e0661206 	rsb	r1, r6, r6, lsl #4
        26fb90:	e1a01081 	mov	r1, r1, lsl #1
        26fb94:	e3a00064 	mov	r0, #100	; 0x64
        26fb98:	eb650b68 	bl	1bb2940 <$__rt_sdiv>
        26fb9c:	e080a006 	add	sl, r0, r6
        26fba0:	e0853085 	add	r3, r5, r5, lsl #1
        26fba4:	e0859fa5 	add	r9, r5, r5, lsr #31
        26fba8:	e1a090c9 	mov	r9, r9, asr #1
        26fbac:	e3a06000 	mov	r6, #0	; 0x0
        26fbb0:	e3a02000 	mov	r2, #0	; 0x0
        26fbb4:	e88d0420 	stmia	sp, {r5, sl}
        26fbb8:	e3a05000 	mov	r5, #0	; 0x0
        26fbbc:	e3a01000 	mov	r1, #0	; 0x0
        26fbc0:	e3a07000 	mov	r7, #0	; 0x0
        26fbc4:	e3a08000 	mov	r8, #0	; 0x0
        26fbc8:	e3a00001 	mov	r0, #1	; 0x1
        26fbcc:	e594c0a8 	ldr	ip, [r4, #168]
        26fbd0:	e24cc001 	sub	ip, ip, #1	; 0x1
        26fbd4:	e58dc00c 	str	ip, [sp, #12]
        26fbd8:	e35c0001 	cmp	ip, #1	; 0x1
        26fbdc:	da000020 	ble	26fc64 <WS_SetLineVars(ws_data_type *)+0x164>
        26fbe0:	e284ca01 	add	ip, r4, #4096	; 0x1000
        26fbe4:	e59cc888 	ldr	ip, [ip, #2184]
        26fbe8:	e58dc008 	str	ip, [sp, #8]
        26fbec:	e59dc008 	ldr	ip, [sp, #8]
        26fbf0:	e08cc200 	add	ip, ip, r0, lsl #4
        26fbf4:	e59ce006 	ldr	lr, [ip, #6]
        26fbf8:	e1a0e84e 	mov	lr, lr, asr #16
        26fbfc:	e59da004 	ldr	sl, [sp, #4]
        26fc00:	e15e000a 	cmp	lr, sl
        26fc04:	da000006 	ble	26fc24 <WS_SetLineVars(ws_data_type *)+0x124>
        26fc08:	e15e0003 	cmp	lr, r3
        26fc0c:	c04ec003 	subgt	ip, lr, r3
        26fc10:	c08c8008 	addgt	r8, ip, r8
        26fc14:	c1a0e003 	movgt	lr, r3
        26fc18:	e08e1001 	add	r1, lr, r1
        26fc1c:	e2822001 	add	r2, r2, #1	; 0x1
        26fc20:	ea00000b 	b	26fc54 <WS_SetLineVars(ws_data_type *)+0x154>
        26fc24:	e59ce00a 	ldr	lr, [ip, #10]
        26fc28:	e1a0e84e 	mov	lr, lr, asr #16
        26fc2c:	e59da000 	ldr	sl, [sp]
        26fc30:	e15e000a 	cmp	lr, sl
        26fc34:	c3a0e000 	movgt	lr, #0	; 0x0
        26fc38:	ca000001 	bgt	26fc44 <WS_SetLineVars(ws_data_type *)+0x144>
        26fc3c:	e15e0009 	cmp	lr, r9
        26fc40:	c1a0e009 	movgt	lr, r9
        26fc44:	e087700e 	add	r7, r7, lr
        26fc48:	e59cc00c 	ldr	ip, [ip, #12]
        26fc4c:	e085584c 	add	r5, r5, ip, asr #16
        26fc50:	e2866001 	add	r6, r6, #1	; 0x1
        26fc54:	e2800001 	add	r0, r0, #1	; 0x1
        26fc58:	e59dc00c 	ldr	ip, [sp, #12]
        26fc5c:	e15c0000 	cmp	ip, r0
        26fc60:	caffffe1 	bgt	26fbec <WS_SetLineVars(ws_data_type *)+0xec>
        26fc64:	e2843078 	add	r3, r4, #120	; 0x78
        26fc68:	e8930009 	ldmia	r3, {r0, r3}
        26fc6c:	e043a000 	sub	sl, r3, r0
        26fc70:	e04a0001 	sub	r0, sl, r1
        26fc74:	e5840090 	str	r0, [r4, #144]
        26fc78:	e3500001 	cmp	r0, #1	; 0x1
        26fc7c:	b3a00001 	movlt	r0, #1	; 0x1
        26fc80:	b5840090 	strlt	r0, [r4, #144]
        26fc84:	e3a09000 	mov	r9, #0	; 0x0
        26fc88:	e3520000 	cmp	r2, #0	; 0x0
        26fc8c:	da000003 	ble	26fca0 <WS_SetLineVars(ws_data_type *)+0x1a0>
        26fc90:	e1a00002 	mov	r0, r2
        26fc94:	eb650b29 	bl	1bb2940 <$__rt_sdiv>
        26fc98:	e5840098 	str	r0, [r4, #152]
        26fc9c:	ea000000 	b	26fca4 <WS_SetLineVars(ws_data_type *)+0x1a4>
        26fca0:	e5849098 	str	r9, [r4, #152]
        26fca4:	e3560000 	cmp	r6, #0	; 0x0
        26fca8:	da000004 	ble	26fcc0 <WS_SetLineVars(ws_data_type *)+0x1c0>
        26fcac:	e1a01005 	mov	r1, r5
        26fcb0:	e1a00006 	mov	r0, r6
        26fcb4:	eb650b21 	bl	1bb2940 <$__rt_sdiv>
        26fcb8:	e5840094 	str	r0, [r4, #148]
        26fcbc:	ea000000 	b	26fcc4 <WS_SetLineVars(ws_data_type *)+0x1c4>
        26fcc0:	e5849094 	str	r9, [r4, #148]
        26fcc4:	e59d0010 	ldr	r0, [sp, #16]
        26fcc8:	e3500003 	cmp	r0, #3	; 0x3
        26fccc:	da000018 	ble	26fd34 <WS_SetLineVars(ws_data_type *)+0x234>
        26fcd0:	e5941090 	ldr	r1, [r4, #144]
        26fcd4:	e1a06001 	mov	r6, r1
        26fcd8:	e59d0010 	ldr	r0, [sp, #16]
        26fcdc:	eb650b17 	bl	1bb2940 <$__rt_sdiv>
        26fce0:	e04a1008 	sub	r1, sl, r8
        26fce4:	e5840064 	str	r0, [r4, #100]
        26fce8:	e59d0010 	ldr	r0, [sp, #16]
        26fcec:	eb650b13 	bl	1bb2940 <$__rt_sdiv>
        26fcf0:	e3550000 	cmp	r5, #0	; 0x0
        26fcf4:	e5840068 	str	r0, [r4, #104]
        26fcf8:	b2855003 	addlt	r5, r5, #3	; 0x3
        26fcfc:	e0870145 	add	r0, r7, r5, asr #2
        26fd00:	e0801180 	add	r1, r0, r0, lsl #3
        26fd04:	e0811200 	add	r1, r1, r0, lsl #4
        26fd08:	e1a01181 	mov	r1, r1, lsl #3
        26fd0c:	e1a00006 	mov	r0, r6
        26fd10:	eb650b0a 	bl	1bb2940 <$__rt_sdiv>
        26fd14:	e584009c 	str	r0, [r4, #156]
        26fd18:	e3500064 	cmp	r0, #100	; 0x64
        26fd1c:	c3a00064 	movgt	r0, #100	; 0x64
        26fd20:	ca000002 	bgt	26fd30 <WS_SetLineVars(ws_data_type *)+0x230>
        26fd24:	e3500002 	cmp	r0, #2	; 0x2
        26fd28:	aa000001 	bge	26fd34 <WS_SetLineVars(ws_data_type *)+0x234>
        26fd2c:	e3a00002 	mov	r0, #2	; 0x2
        26fd30:	e5a4009c 	str	r0, [r4, #156]!
        26fd34:	e1a00009 	mov	r0, r9
        26fd38:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WS_CalcLineHeight(ws_data_type *)
 * Address: 0026fd3c
 */
WS_CalcLineHeight(ws_data_type *) {
    /*
        26fd3c:	e1a0c00d 	mov	ip, sp
        26fd40:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26fd44:	e24cb004 	sub	fp, ip, #4	; 0x4
        26fd48:	e1a04000 	mov	r4, r0
        26fd4c:	e59000cc 	ldr	r0, [r0, #204]
        26fd50:	e5941088 	ldr	r1, [r4, #136]
        26fd54:	e0800001 	add	r0, r0, r1
        26fd58:	e3500003 	cmp	r0, #3	; 0x3
        26fd5c:	da000013 	ble	26fdb0 <WS_CalcLineHeight(ws_data_type *)+0x74>
        26fd60:	e59400c8 	ldr	r0, [r4, #200]
        26fd64:	e3500000 	cmp	r0, #0	; 0x0
        26fd68:	da000004 	ble	26fd80 <WS_CalcLineHeight(ws_data_type *)+0x44>
        26fd6c:	e594109c 	ldr	r1, [r4, #156]
        26fd70:	e0800001 	add	r0, r0, r1
        26fd74:	e0800fa0 	add	r0, r0, r0, lsr #31
        26fd78:	e1a000c0 	mov	r0, r0, asr #1
        26fd7c:	ea000000 	b	26fd84 <WS_CalcLineHeight(ws_data_type *)+0x48>
        26fd80:	e594009c 	ldr	r0, [r4, #156]
        26fd84:	e0800fa0 	add	r0, r0, r0, lsr #31
        26fd88:	e1a000c0 	mov	r0, r0, asr #1
        26fd8c:	e2800028 	add	r0, r0, #40	; 0x28
        26fd90:	e59410e0 	ldr	r1, [r4, #224]
        26fd94:	e0010190 	mul	r1, r0, r1
        26fd98:	e3a00064 	mov	r0, #100	; 0x64
        26fd9c:	eb650ae7 	bl	1bb2940 <$__rt_sdiv>
        26fda0:	e2842068 	add	r2, r4, #104	; 0x68
        26fda4:	e8920006 	ldmia	r2, {r1, r2}
        26fda8:	e0820000 	add	r0, r2, r0
        26fdac:	ea000003 	b	26fdc0 <WS_CalcLineHeight(ws_data_type *)+0x84>
        26fdb0:	e594006c 	ldr	r0, [r4, #108]
        26fdb4:	e59410e0 	ldr	r1, [r4, #224]
        26fdb8:	e0810000 	add	r0, r1, r0
        26fdbc:	e5941018 	ldr	r1, [r4, #24]
        26fdc0:	e0801001 	add	r1, r0, r1
        26fdc4:	e3a00003 	mov	r0, #3	; 0x3
        26fdc8:	eb650adc 	bl	1bb2940 <$__rt_sdiv>
        26fdcc:	e584006c 	str	r0, [r4, #108]
        26fdd0:	e594006c 	ldr	r0, [r4, #108]
        26fdd4:	e3500014 	cmp	r0, #20	; 0x14
        26fdd8:	b3a00014 	movlt	r0, #20	; 0x14
        26fddc:	b5a4006c 	strlt	r0, [r4, #108]!
        26fde0:	e3a00000 	mov	r0, #0	; 0x0
        26fde4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: WS_PostprocessGaps(ws_data_type *)
 * Address: 0026fde8
 */
WS_PostprocessGaps(ws_data_type *) {
    /*
        26fde8:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
        26fdec:	e24dd0fc 	sub	sp, sp, #252	; 0xfc
        26fdf0:	e5903068 	ldr	r3, [r0, #104]
        26fdf4:	e2809a01 	add	r9, r0, #4096	; 0x1000
        26fdf8:	e3a01000 	mov	r1, #0	; 0x0
        26fdfc:	e3a02000 	mov	r2, #0	; 0x0
        26fe00:	e599c888 	ldr	ip, [r9, #2184]
        26fe04:	e590e0a8 	ldr	lr, [r0, #168]
        26fe08:	e35e0000 	cmp	lr, #0	; 0x0
        26fe0c:	da000015 	ble	26fe68 <WS_PostprocessGaps(ws_data_type *)+0x80>
        26fe10:	e083efa3 	add	lr, r3, r3, lsr #31
        26fe14:	e1a0e0ce 	mov	lr, lr, asr #1
        26fe18:	e59c4006 	ldr	r4, [ip, #6]
        26fe1c:	e1a04844 	mov	r4, r4, asr #16
        26fe20:	e5cc4009 	strb	r4, [ip, #9]
        26fe24:	e1a05444 	mov	r5, r4, asr #8
        26fe28:	e5cc5008 	strb	r5, [ip, #8]
        26fe2c:	e3310000 	teq	r1, #0	; 0x0
        26fe30:	159050a8 	ldrne	r5, [r0, #168]
        26fe34:	12455001 	subne	r5, r5, #1	; 0x1
        26fe38:	11350001 	teqne	r5, r1
        26fe3c:	0a000001 	beq	26fe48 <WS_PostprocessGaps(ws_data_type *)+0x60>
        26fe40:	e154000e 	cmp	r4, lr
        26fe44:	da000002 	ble	26fe54 <WS_PostprocessGaps(ws_data_type *)+0x6c>
        26fe48:	e1a04002 	mov	r4, r2
        26fe4c:	e2822001 	add	r2, r2, #1	; 0x1
        26fe50:	e7cd1004 	strb	r1, [sp, r4]
        26fe54:	e2811001 	add	r1, r1, #1	; 0x1
        26fe58:	e28cc010 	add	ip, ip, #16	; 0x10
        26fe5c:	e59040a8 	ldr	r4, [r0, #168]
        26fe60:	e1540001 	cmp	r4, r1
        26fe64:	caffffeb 	bgt	26fe18 <WS_PostprocessGaps(ws_data_type *)+0x30>
        26fe68:	e1a04083 	mov	r4, r3, lsl #1
        26fe6c:	e3a01000 	mov	r1, #0	; 0x0
        26fe70:	e2428001 	sub	r8, r2, #1	; 0x1
        26fe74:	e3580000 	cmp	r8, #0	; 0x0
        26fe78:	da000030 	ble	26ff40 <WS_PostprocessGaps(ws_data_type *)+0x158>
        26fe7c:	e0833fa3 	add	r3, r3, r3, lsr #31
        26fe80:	e1a070c3 	mov	r7, r3, asr #1
        26fe84:	e2426002 	sub	r6, r2, #2	; 0x2
        26fe88:	e5992888 	ldr	r2, [r9, #2184]
        26fe8c:	e7dd3001 	ldrb	r3, [sp, r1]
        26fe90:	e0823203 	add	r3, r2, r3, lsl #4
        26fe94:	e08dc001 	add	ip, sp, r1
        26fe98:	e5dcc001 	ldrb	ip, [ip, #1]
        26fe9c:	e082220c 	add	r2, r2, ip, lsl #4
        26fea0:	e593e002 	ldr	lr, [r3, #2]
        26fea4:	e1a0e84e 	mov	lr, lr, asr #16
        26fea8:	e593c00c 	ldr	ip, [r3, #12]
        26feac:	e08ec84c 	add	ip, lr, ip, asr #16
        26feb0:	e592e002 	ldr	lr, [r2, #2]
        26feb4:	e06cc84e 	rsb	ip, ip, lr, asr #16
        26feb8:	e157000c 	cmp	r7, ip
        26febc:	d3a05000 	movle	r5, #0	; 0x0
        26fec0:	c3a05001 	movgt	r5, #1	; 0x1
        26fec4:	e3350000 	teq	r5, #0	; 0x0
        26fec8:	0a000019 	beq	26ff34 <WS_PostprocessGaps(ws_data_type *)+0x14c>
        26fecc:	e3a0cc7d 	mov	ip, #32000	; 0x7d00
        26fed0:	e1a0e00c 	mov	lr, ip
        26fed4:	e3510000 	cmp	r1, #0	; 0x0
        26fed8:	c593e00a 	ldrgt	lr, [r3, #10]
        26fedc:	c1a0e84e 	movgt	lr, lr, asr #16
        26fee0:	e1560001 	cmp	r6, r1
        26fee4:	c592c00a 	ldrgt	ip, [r2, #10]
        26fee8:	c1a0c84c 	movgt	ip, ip, asr #16
        26feec:	e15c0004 	cmp	ip, r4
        26fef0:	a15e0004 	cmpge	lr, r4
        26fef4:	aa000002 	bge	26ff04 <WS_PostprocessGaps(ws_data_type *)+0x11c>
        26fef8:	e08eefae 	add	lr, lr, lr, lsr #31
        26fefc:	e15c00ce 	cmp	ip, lr, asr #1
        26ff00:	a1a02003 	movge	r2, r3
        26ff04:	e3350000 	teq	r5, #0	; 0x0
        26ff08:	0a000009 	beq	26ff34 <WS_PostprocessGaps(ws_data_type *)+0x14c>
        26ff0c:	e592300a 	ldr	r3, [r2, #10]
        26ff10:	e1a03843 	mov	r3, r3, asr #16
        26ff14:	e0833fa3 	add	r3, r3, r3, lsr #31
        26ff18:	e1a030c3 	mov	r3, r3, asr #1
        26ff1c:	e5c23009 	strb	r3, [r2, #9]
        26ff20:	e1a03443 	mov	r3, r3, asr #8
        26ff24:	e5c23008 	strb	r3, [r2, #8]
        26ff28:	e5d2300e 	ldrb	r3, [r2, #14]
        26ff2c:	e3833002 	orr	r3, r3, #2	; 0x2
        26ff30:	e5c2300e 	strb	r3, [r2, #14]
        26ff34:	e2811001 	add	r1, r1, #1	; 0x1
        26ff38:	e1580001 	cmp	r8, r1
        26ff3c:	caffffd1 	bgt	26fe88 <WS_PostprocessGaps(ws_data_type *)+0xa0>
        26ff40:	e3a00000 	mov	r0, #0	; 0x0
        26ff44:	e28dd0fc 	add	sp, sp, #252	; 0xfc
        26ff48:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
    */
}

/**
 * Symbol: WS_SegmentWords(int, ws_data_type *)
 * Address: 0026ff4c
 */
WS_SegmentWords(int, ws_data_type *) {
    /*
        26ff4c:	e1a0c00d 	mov	ip, sp
        26ff50:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26ff54:	e24cb004 	sub	fp, ip, #4	; 0x4
        26ff58:	e1a04000 	mov	r4, r0
        26ff5c:	e24dd040 	sub	sp, sp, #64	; 0x40
        26ff60:	e1a07001 	mov	r7, r1
        26ff64:	e3a08000 	mov	r8, #0	; 0x0
        26ff68:	e3a0a000 	mov	sl, #0	; 0x0
        26ff6c:	e3a06001 	mov	r6, #1	; 0x1
        26ff70:	e59110a8 	ldr	r1, [r1, #168]
        26ff74:	e3510001 	cmp	r1, #1	; 0x1
        26ff78:	da000073 	ble	27014c <WS_SegmentWords(int, ws_data_type *)+0x200>
        26ff7c:	e2875a01 	add	r5, r7, #4096	; 0x1000
        26ff80:	e5951888 	ldr	r1, [r5, #2184]
        26ff84:	e0811206 	add	r1, r1, r6, lsl #4
        26ff88:	e5911002 	ldr	r1, [r1, #2]
        26ff8c:	e1540841 	cmp	r4, r1, asr #16
        26ff90:	aa000069 	bge	27013c <WS_SegmentWords(int, ws_data_type *)+0x1f0>
        26ff94:	e3a09001 	mov	r9, #1	; 0x1
        26ff98:	e59710a8 	ldr	r1, [r7, #168]
        26ff9c:	e2411001 	sub	r1, r1, #1	; 0x1
        26ffa0:	e1310006 	teq	r1, r6
        26ffa4:	03a09000 	moveq	r9, #0	; 0x0
        26ffa8:	0a000050 	beq	2700f0 <WS_SegmentWords(int, ws_data_type *)+0x1a4>
        26ffac:	e59508a4 	ldr	r0, [r5, #2212]
        26ffb0:	e58d0000 	str	r0, [sp]
        26ffb4:	e59508a8 	ldr	r0, [r5, #2216]
        26ffb8:	e58d0004 	str	r0, [sp, #4]
        26ffbc:	e59508ac 	ldr	r0, [r5, #2220]
        26ffc0:	e58d0008 	str	r0, [sp, #8]
        26ffc4:	e59508b0 	ldr	r0, [r5, #2224]
        26ffc8:	e58d000c 	str	r0, [sp, #12]
        26ffcc:	e59508b4 	ldr	r0, [r5, #2228]
        26ffd0:	e58d0010 	str	r0, [sp, #16]
        26ffd4:	e59508b8 	ldr	r0, [r5, #2232]
        26ffd8:	e58d0014 	str	r0, [sp, #20]
        26ffdc:	e59508bc 	ldr	r0, [r5, #2236]
        26ffe0:	e58d0018 	str	r0, [sp, #24]
        26ffe4:	e59d000c 	ldr	r0, [sp, #12]
        26ffe8:	e3300000 	teq	r0, #0	; 0x0
        26ffec:	1a000003 	bne	270000 <WS_SegmentWords(int, ws_data_type *)+0xb4>
        26fff0:	e59d0014 	ldr	r0, [sp, #20]
        26fff4:	e3500050 	cmp	r0, #80	; 0x50
        26fff8:	c3a00050 	movgt	r0, #80	; 0x50
        26fffc:	c58d0014 	strgt	r0, [sp, #20]
        270000:	e58d601c 	str	r6, [sp, #28]
        270004:	e5950888 	ldr	r0, [r5, #2184]
        270008:	e0800206 	add	r0, r0, r6, lsl #4
        27000c:	e5900008 	ldr	r0, [r0, #8]
        270010:	e1a00840 	mov	r0, r0, asr #16
        270014:	e0801180 	add	r1, r0, r0, lsl #3
        270018:	e0811200 	add	r1, r1, r0, lsl #4
        27001c:	e1a01101 	mov	r1, r1, lsl #2
        270020:	e5950898 	ldr	r0, [r5, #2200]
        270024:	eb650a45 	bl	1bb2940 <$__rt_sdiv>
        270028:	e58d0020 	str	r0, [sp, #32]
        27002c:	e5950888 	ldr	r0, [r5, #2184]
        270030:	e0800206 	add	r0, r0, r6, lsl #4
        270034:	e590000a 	ldr	r0, [r0, #10]
        270038:	e1a00840 	mov	r0, r0, asr #16
        27003c:	e0801180 	add	r1, r0, r0, lsl #3
        270040:	e0811200 	add	r1, r1, r0, lsl #4
        270044:	e1a01101 	mov	r1, r1, lsl #2
        270048:	e5950898 	ldr	r0, [r5, #2200]
        27004c:	eb650a3b 	bl	1bb2940 <$__rt_sdiv>
        270050:	e58d0024 	str	r0, [sp, #36]
        270054:	e5950888 	ldr	r0, [r5, #2184]
        270058:	e0800206 	add	r0, r0, r6, lsl #4
        27005c:	e590000c 	ldr	r0, [r0, #12]
        270060:	e1a00840 	mov	r0, r0, asr #16
        270064:	e0801180 	add	r1, r0, r0, lsl #3
        270068:	e0811200 	add	r1, r1, r0, lsl #4
        27006c:	e1a01101 	mov	r1, r1, lsl #2
        270070:	e5950898 	ldr	r0, [r5, #2200]
        270074:	eb650a31 	bl	1bb2940 <$__rt_sdiv>
        270078:	e58d0028 	str	r0, [sp, #40]
        27007c:	e5970008 	ldr	r0, [r7, #8]
        270080:	e3300000 	teq	r0, #0	; 0x0
        270084:	0a000017 	beq	2700e8 <WS_SegmentWords(int, ws_data_type *)+0x19c>
        270088:	e3a02006 	mov	r2, #6	; 0x6
        27008c:	e0421000 	sub	r1, r2, r0
        270090:	e59d0020 	ldr	r0, [sp, #32]
        270094:	e0110190 	muls	r1, r0, r1
        270098:	42811003 	addmi	r1, r1, #3	; 0x3
        27009c:	e59d0020 	ldr	r0, [sp, #32]
        2700a0:	e0800141 	add	r0, r0, r1, asr #2
        2700a4:	e58d0020 	str	r0, [sp, #32]
        2700a8:	e5970008 	ldr	r0, [r7, #8]
        2700ac:	e0420000 	sub	r0, r2, r0
        2700b0:	e59d1024 	ldr	r1, [sp, #36]
        2700b4:	e0100091 	muls	r0, r1, r0
        2700b8:	42800003 	addmi	r0, r0, #3	; 0x3
        2700bc:	e59d1024 	ldr	r1, [sp, #36]
        2700c0:	e0810140 	add	r0, r1, r0, asr #2
        2700c4:	e58d0024 	str	r0, [sp, #36]
        2700c8:	e5970008 	ldr	r0, [r7, #8]
        2700cc:	e0420000 	sub	r0, r2, r0
        2700d0:	e59d1028 	ldr	r1, [sp, #40]
        2700d4:	e0100091 	muls	r0, r1, r0
        2700d8:	42800003 	addmi	r0, r0, #3	; 0x3
        2700dc:	e59d1028 	ldr	r1, [sp, #40]
        2700e0:	e0810140 	add	r0, r1, r0, asr #2
        2700e4:	e58d0028 	str	r0, [sp, #40]
        2700e8:	e1a0000d 	mov	r0, sp
        2700ec:	eb630e42 	bl	1b339fc <$NeuroNetWS(int *)>
        2700f0:	e3500000 	cmp	r0, #0	; 0x0
        2700f4:	da000004 	ble	27010c <WS_SegmentWords(int, ws_data_type *)+0x1c0>
        2700f8:	b2601000 	rsblt	r1, r0, #0	; 0x0
        2700fc:	a1a01000 	movge	r1, r0
        270100:	e5972014 	ldr	r2, [r7, #20]
        270104:	e1510002 	cmp	r1, r2
        270108:	ca000001 	bgt	270114 <WS_SegmentWords(int, ws_data_type *)+0x1c8>
        27010c:	e3390000 	teq	r9, #0	; 0x0
        270110:	1a000006 	bne	270130 <WS_SegmentWords(int, ws_data_type *)+0x1e4>
        270114:	e0871108 	add	r1, r7, r8, lsl #2
        270118:	e2811a01 	add	r1, r1, #4096	; 0x1000
        27011c:	e5c1a49c 	strb	sl, [r1, #1180]
        270120:	e5c1649d 	strb	r6, [r1, #1181]
        270124:	e1a0a006 	mov	sl, r6
        270128:	e2888001 	add	r8, r8, #1	; 0x1
        27012c:	ea000002 	b	27013c <WS_SegmentWords(int, ws_data_type *)+0x1f0>
        270130:	e5951888 	ldr	r1, [r5, #2184]
        270134:	e0811206 	add	r1, r1, r6, lsl #4
        270138:	e5c1000f 	strb	r0, [r1, #15]
        27013c:	e2866001 	add	r6, r6, #1	; 0x1
        270140:	e59710a8 	ldr	r1, [r7, #168]
        270144:	e1510006 	cmp	r1, r6
        270148:	caffff8c 	bgt	26ff80 <WS_SegmentWords(int, ws_data_type *)+0x34>
        27014c:	e1a00008 	mov	r0, r8
        270150:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WS_GetWordDist(ws_data_type *)
 * Address: 00270154
 */
WS_GetWordDist(ws_data_type *) {
    /*
        270154:	e1a0c00d 	mov	ip, sp
        270158:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27015c:	e24cb004 	sub	fp, ip, #4	; 0x4
        270160:	e1a05000 	mov	r5, r0
        270164:	e24dd020 	sub	sp, sp, #32	; 0x20
        270168:	e59f1034 	ldr	r1, [pc, #34]	; 2701a4 <WS_GetWordDist(ws_data_type *)+0x50>
        27016c:	e9311008 	ldmdb	r1!, {r3, ip}
        270170:	e92d1008 	stmdb	sp!, {r3, ip}
        270174:	e9311008 	ldmdb	r1!, {r3, ip}
        270178:	e92d1008 	stmdb	sp!, {r3, ip}
        27017c:	e9311008 	ldmdb	r1!, {r3, ip}
        270180:	e92d1008 	stmdb	sp!, {r3, ip}
        270184:	e59000c0 	ldr	r0, [r0, #192]
        270188:	e3500000 	cmp	r0, #0	; 0x0
        27018c:	da000005 	ble	2701a8 <WS_GetWordDist(ws_data_type *)+0x54>
        270190:	e5951064 	ldr	r1, [r5, #100]
        270194:	e0800001 	add	r0, r0, r1
        270198:	e0800fa0 	add	r0, r0, r0, lsr #31
        27019c:	e1a000c0 	mov	r0, r0, asr #1
        2701a0:	ea000001 	b	2701ac <WS_GetWordDist(ws_data_type *)+0x58>
        2701a4:	0037acdc 	ldreqsb	sl, [r7], -ip
        2701a8:	e5950064 	ldr	r0, [r5, #100]
        2701ac:	e58d0020 	str	r0, [sp, #32]
        2701b0:	e59500c4 	ldr	r0, [r5, #196]
        2701b4:	e3500000 	cmp	r0, #0	; 0x0
        2701b8:	da000004 	ble	2701d0 <WS_GetWordDist(ws_data_type *)+0x7c>
        2701bc:	e5951068 	ldr	r1, [r5, #104]
        2701c0:	e0804001 	add	r4, r0, r1
        2701c4:	e0844fa4 	add	r4, r4, r4, lsr #31
        2701c8:	e1a040c4 	mov	r4, r4, asr #1
        2701cc:	ea000000 	b	2701d4 <WS_GetWordDist(ws_data_type *)+0x80>
        2701d0:	e5954068 	ldr	r4, [r5, #104]
        2701d4:	e595009c 	ldr	r0, [r5, #156]
        2701d8:	e3540000 	cmp	r4, #0	; 0x0
        2701dc:	e58d001c 	str	r0, [sp, #28]
        2701e0:	d3a04001 	movle	r4, #1	; 0x1
        2701e4:	e59d001c 	ldr	r0, [sp, #28]
        2701e8:	e0800fa0 	add	r0, r0, r0, lsr #31
        2701ec:	e1a000c0 	mov	r0, r0, asr #1
        2701f0:	e0010094 	mul	r1, r4, r0
        2701f4:	e3a00064 	mov	r0, #100	; 0x64
        2701f8:	eb6509d0 	bl	1bb2940 <$__rt_sdiv>
        2701fc:	e0807004 	add	r7, r0, r4
        270200:	e1a08004 	mov	r8, r4
        270204:	e3a02000 	mov	r2, #0	; 0x0
        270208:	e1a09002 	mov	r9, r2
        27020c:	e1a06002 	mov	r6, r2
        270210:	e1a0a002 	mov	sl, r2
        270214:	e3a01001 	mov	r1, #1	; 0x1
        270218:	e59500a8 	ldr	r0, [r5, #168]
        27021c:	e2400001 	sub	r0, r0, #1	; 0x1
        270220:	e58d0034 	str	r0, [sp, #52]
        270224:	e3500001 	cmp	r0, #1	; 0x1
        270228:	da000025 	ble	2702c4 <WS_GetWordDist(ws_data_type *)+0x170>
        27022c:	e2850a01 	add	r0, r5, #4096	; 0x1000
        270230:	e5900888 	ldr	r0, [r0, #2184]
        270234:	e284e007 	add	lr, r4, #7	; 0x7
        270238:	e0843084 	add	r3, r4, r4, lsl #1
        27023c:	e58d0030 	str	r0, [sp, #48]
        270240:	e59d0030 	ldr	r0, [sp, #48]
        270244:	e0800201 	add	r0, r0, r1, lsl #4
        270248:	e5900006 	ldr	r0, [r0, #6]
        27024c:	e1a00840 	mov	r0, r0, asr #16
        270250:	e1500008 	cmp	r0, r8
        270254:	aa00000a 	bge	270284 <WS_GetWordDist(ws_data_type *)+0x130>
        270258:	e1b0c004 	movs	ip, r4
        27025c:	41a0c00e 	movmi	ip, lr
        270260:	e15001cc 	cmp	r0, ip, asr #3
        270264:	aa000003 	bge	270278 <WS_GetWordDist(ws_data_type *)+0x124>
        270268:	e1b0c004 	movs	ip, r4
        27026c:	41a0c00e 	movmi	ip, lr
        270270:	e1a0c1cc 	mov	ip, ip, asr #3
        270274:	ea000000 	b	27027c <WS_GetWordDist(ws_data_type *)+0x128>
        270278:	e1a0c000 	mov	ip, r0
        27027c:	e08c2002 	add	r2, ip, r2
        270280:	e28aa001 	add	sl, sl, #1	; 0x1
        270284:	e1500007 	cmp	r0, r7
        270288:	da000003 	ble	27029c <WS_GetWordDist(ws_data_type *)+0x148>
        27028c:	e1530000 	cmp	r3, r0
        270290:	b1a00003 	movlt	r0, r3
        270294:	e0806006 	add	r6, r0, r6
        270298:	e2899001 	add	r9, r9, #1	; 0x1
        27029c:	e2811001 	add	r1, r1, #1	; 0x1
        2702a0:	e59d0034 	ldr	r0, [sp, #52]
        2702a4:	e1500001 	cmp	r0, r1
        2702a8:	caffffe4 	bgt	270240 <WS_GetWordDist(ws_data_type *)+0xec>
        2702ac:	e35a0000 	cmp	sl, #0	; 0x0
        2702b0:	da000003 	ble	2702c4 <WS_GetWordDist(ws_data_type *)+0x170>
        2702b4:	e1a01002 	mov	r1, r2
        2702b8:	e1a0000a 	mov	r0, sl
        2702bc:	eb65099f 	bl	1bb2940 <$__rt_sdiv>
        2702c0:	ea000000 	b	2702c8 <WS_GetWordDist(ws_data_type *)+0x174>
        2702c4:	e3a00000 	mov	r0, #0	; 0x0
        2702c8:	e3590000 	cmp	r9, #0	; 0x0
        2702cc:	e58d0024 	str	r0, [sp, #36]
        2702d0:	da000003 	ble	2702e4 <WS_GetWordDist(ws_data_type *)+0x190>
        2702d4:	e1a01006 	mov	r1, r6
        2702d8:	e1a00009 	mov	r0, r9
        2702dc:	eb650997 	bl	1bb2940 <$__rt_sdiv>
        2702e0:	ea000000 	b	2702e8 <WS_GetWordDist(ws_data_type *)+0x194>
        2702e4:	e3a00000 	mov	r0, #0	; 0x0
        2702e8:	e1a08000 	mov	r8, r0
        2702ec:	e59d1024 	ldr	r1, [sp, #36]
        2702f0:	e081c181 	add	ip, r1, r1, lsl #3
        2702f4:	e08c1201 	add	r1, ip, r1, lsl #4
        2702f8:	e1a01101 	mov	r1, r1, lsl #2
        2702fc:	e1a00004 	mov	r0, r4
        270300:	eb65098e 	bl	1bb2940 <$__rt_sdiv>
        270304:	e2856a01 	add	r6, r5, #4096	; 0x1000
        270308:	e1a07006 	mov	r7, r6
        27030c:	e58608a4 	str	r0, [r6, #2212]
        270310:	e58d002c 	str	r0, [sp, #44]
        270314:	e0881188 	add	r1, r8, r8, lsl #3
        270318:	e0811208 	add	r1, r1, r8, lsl #4
        27031c:	e1a01101 	mov	r1, r1, lsl #2
        270320:	e1a00004 	mov	r0, r4
        270324:	e586a8a8 	str	sl, [r6, #2216]
        270328:	eb650984 	bl	1bb2940 <$__rt_sdiv>
        27032c:	e2866e8b 	add	r6, r6, #2224	; 0x8b0
        270330:	e8060201 	stmda	r6, {r0, r9}
        270334:	e2466e8b 	sub	r6, r6, #2224	; 0x8b0
        270338:	e59d001c 	ldr	r0, [sp, #28]
        27033c:	e58608b4 	str	r0, [r6, #2228]
        270340:	e1a09000 	mov	r9, r0
        270344:	e59d0020 	ldr	r0, [sp, #32]
        270348:	e0801180 	add	r1, r0, r0, lsl #3
        27034c:	e0811200 	add	r1, r1, r0, lsl #4
        270350:	e1a01101 	mov	r1, r1, lsl #2
        270354:	e1a00004 	mov	r0, r4
        270358:	eb650978 	bl	1bb2940 <$__rt_sdiv>
        27035c:	e58608b8 	str	r0, [r6, #2232]
        270360:	e5950088 	ldr	r0, [r5, #136]
        270364:	e5a608bc 	str	r0, [r6, #2236]!
        270368:	e1a06000 	mov	r6, r0
        27036c:	e0881108 	add	r1, r8, r8, lsl #2
        270370:	e1a01181 	mov	r1, r1, lsl #3
        270374:	e3a00064 	mov	r0, #100	; 0x64
        270378:	eb650970 	bl	1bb2940 <$__rt_sdiv>
        27037c:	e59d1024 	ldr	r1, [sp, #36]
        270380:	e1500001 	cmp	r0, r1
        270384:	da000012 	ble	2703d4 <WS_GetWordDist(ws_data_type *)+0x280>
        270388:	e0881088 	add	r1, r8, r8, lsl #1
        27038c:	e0811188 	add	r1, r1, r8, lsl #3
        270390:	e1a01181 	mov	r1, r1, lsl #3
        270394:	e3a00064 	mov	r0, #100	; 0x64
        270398:	eb650968 	bl	1bb2940 <$__rt_sdiv>
        27039c:	e59d1020 	ldr	r1, [sp, #32]
        2703a0:	e1500001 	cmp	r0, r1
        2703a4:	da00000a 	ble	2703d4 <WS_GetWordDist(ws_data_type *)+0x280>
        2703a8:	e0881108 	add	r1, r8, r8, lsl #2
        2703ac:	e0811188 	add	r1, r1, r8, lsl #3
        2703b0:	e0611181 	rsb	r1, r1, r1, lsl #3
        2703b4:	e3a00064 	mov	r0, #100	; 0x64
        2703b8:	eb650960 	bl	1bb2940 <$__rt_sdiv>
        2703bc:	e1500004 	cmp	r0, r4
        2703c0:	da000003 	ble	2703d4 <WS_GetWordDist(ws_data_type *)+0x280>
        2703c4:	e3a00064 	mov	r0, #100	; 0x64
        2703c8:	eb65095b 	bl	1bb293c <$__rt_divtest>
        2703cc:	e3a00001 	mov	r0, #1	; 0x1
        2703d0:	ea000005 	b	2703ec <WS_GetWordDist(ws_data_type *)+0x298>
        2703d4:	e3a00064 	mov	r0, #100	; 0x64
        2703d8:	eb650957 	bl	1bb293c <$__rt_divtest>
        2703dc:	e3a00e71 	mov	r0, #1808	; 0x710
        2703e0:	e2800a02 	add	r0, r0, #8192	; 0x2000
        2703e4:	eb650954 	bl	1bb293c <$__rt_divtest>
        2703e8:	e3a00002 	mov	r0, #2	; 0x2
        2703ec:	e58d0018 	str	r0, [sp, #24]
        2703f0:	e1a00009 	mov	r0, r9
        2703f4:	e020609a 	mla	r0, sl, r0, r6
        2703f8:	e3500064 	cmp	r0, #100	; 0x64
        2703fc:	d049000a 	suble	r0, r9, sl
        270400:	d0800006 	addle	r0, r0, r6
        270404:	c59d002c 	ldrgt	r0, [sp, #44]
        270408:	e356000a 	cmp	r6, #10	; 0xa
        27040c:	a3a0104f 	movge	r1, #79	; 0x4f
        270410:	b3a0106e 	movlt	r1, #110	; 0x6e
        270414:	e0800001 	add	r0, r0, r1
        270418:	e0010490 	mul	r1, r0, r4
        27041c:	e3a00064 	mov	r0, #100	; 0x64
        270420:	eb650946 	bl	1bb2940 <$__rt_sdiv>
        270424:	e1a06000 	mov	r6, r0
        270428:	e1b00004 	movs	r0, r4
        27042c:	42800003 	addmi	r0, r0, #3	; 0x3
        270430:	e0440140 	sub	r0, r4, r0, asr #2
        270434:	e1500006 	cmp	r0, r6
        270438:	da000002 	ble	270448 <WS_GetWordDist(ws_data_type *)+0x2f4>
        27043c:	e1b00004 	movs	r0, r4
        270440:	42800003 	addmi	r0, r0, #3	; 0x3
        270444:	e0446140 	sub	r6, r4, r0, asr #2
        270448:	e0840084 	add	r0, r4, r4, lsl #1
        27044c:	e1500006 	cmp	r0, r6
        270450:	b1a06000 	movlt	r6, r0
        270454:	e5950088 	ldr	r0, [r5, #136]
        270458:	e59510cc 	ldr	r1, [r5, #204]
        27045c:	e0810000 	add	r0, r1, r0
        270460:	e3500006 	cmp	r0, #6	; 0x6
        270464:	aa000005 	bge	270480 <WS_GetWordDist(ws_data_type *)+0x32c>
        270468:	e5950018 	ldr	r0, [r5, #24]
        27046c:	e0800140 	add	r0, r0, r0, asr #2
        270470:	e1500006 	cmp	r0, r6
        270474:	c1a06000 	movgt	r6, r0
        270478:	c3a00000 	movgt	r0, #0	; 0x0
        27047c:	c58d0018 	strgt	r0, [sp, #24]
        270480:	e3a09000 	mov	r9, #0	; 0x0
        270484:	e1a0a009 	mov	sl, r9
        270488:	e5951008 	ldr	r1, [r5, #8]
        27048c:	e58d1028 	str	r1, [sp, #40]
        270490:	e7dd0001 	ldrb	r0, [sp, r1]
        270494:	e3500000 	cmp	r0, #0	; 0x0
        270498:	da000003 	ble	2704ac <WS_GetWordDist(ws_data_type *)+0x358>
        27049c:	e0010094 	mul	r1, r4, r0
        2704a0:	e3a00064 	mov	r0, #100	; 0x64
        2704a4:	eb650925 	bl	1bb2940 <$__rt_sdiv>
        2704a8:	e1a0a000 	mov	sl, r0
        2704ac:	e59d1028 	ldr	r1, [sp, #40]
        2704b0:	e081000d 	add	r0, r1, sp
        2704b4:	e5d0000b 	ldrb	r0, [r0, #11]
        2704b8:	e3500000 	cmp	r0, #0	; 0x0
        2704bc:	da000003 	ble	2704d0 <WS_GetWordDist(ws_data_type *)+0x37c>
        2704c0:	e0010094 	mul	r1, r4, r0
        2704c4:	e3a00064 	mov	r0, #100	; 0x64
        2704c8:	eb65091c 	bl	1bb2940 <$__rt_sdiv>
        2704cc:	e1a09000 	mov	r9, r0
        2704d0:	e33a0000 	teq	sl, #0	; 0x0
        2704d4:	0a000001 	beq	2704e0 <WS_GetWordDist(ws_data_type *)+0x38c>
        2704d8:	e156000a 	cmp	r6, sl
        2704dc:	b1a0600a 	movlt	r6, sl
        2704e0:	e3390000 	teq	r9, #0	; 0x0
        2704e4:	0a000001 	beq	2704f0 <WS_GetWordDist(ws_data_type *)+0x39c>
        2704e8:	e1560009 	cmp	r6, r9
        2704ec:	c1a06009 	movgt	r6, r9
        2704f0:	e5a56060 	str	r6, [r5, #96]!
        2704f4:	e59d0024 	ldr	r0, [sp, #36]
        2704f8:	e2877e89 	add	r7, r7, #2192	; 0x890
        2704fc:	e8870101 	stmia	r7, {r0, r8}
        270500:	e2877008 	add	r7, r7, #8	; 0x8
        270504:	e8870050 	stmia	r7, {r4, r6}
        270508:	e2877fda 	add	r7, r7, #872	; 0x368
        27050c:	e2477b03 	sub	r7, r7, #3072	; 0xc00
        270510:	e59d0018 	ldr	r0, [sp, #24]
        270514:	e5a708a0 	str	r0, [r7, #2208]!
        270518:	e1a00006 	mov	r0, r6
        27051c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WS_FlyLearn(ws_control_type *, ws_memory_header_type *, ws_data_type *)
 * Address: 00270520
 */
WS_FlyLearn(ws_control_type *, ws_memory_header_type *, ws_data_type *) {
    /*
        270520:	e1a0c00d 	mov	ip, sp
        270524:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        270528:	e24cb004 	sub	fp, ip, #4	; 0x4
        27052c:	e1b05001 	movs	r5, r1
        270530:	e1a04002 	mov	r4, r2
        270534:	13300000 	teqne	r0, #0	; 0x0
        270538:	13340000 	teqne	r4, #0	; 0x0
        27053c:	0a000050 	beq	270684 <WS_FlyLearn(ws_control_type *, ws_memory_header_type *, ws_data_type *)+0x164>
        270540:	e3a06000 	mov	r6, #0	; 0x0
        270544:	e0860086 	add	r0, r6, r6, lsl #1
        270548:	e0850100 	add	r0, r5, r0, lsl #2
        27054c:	e5900014 	ldr	r0, [r0, #20]
        270550:	e1b00840 	movs	r0, r0, asr #16
        270554:	0a000002 	beq	270564 <WS_FlyLearn(ws_control_type *, ws_memory_header_type *, ws_data_type *)+0x44>
        270558:	e2866001 	add	r6, r6, #1	; 0x1
        27055c:	e3560004 	cmp	r6, #4	; 0x4
        270560:	bafffff7 	blt	270544 <WS_FlyLearn(ws_control_type *, ws_memory_header_type *, ws_data_type *)+0x24>
        270564:	e2857014 	add	r7, r5, #20	; 0x14
        270568:	e3560004 	cmp	r6, #4	; 0x4
        27056c:	ba000004 	blt	270584 <WS_FlyLearn(ws_control_type *, ws_memory_header_type *, ws_data_type *)+0x64>
        270570:	e3a06003 	mov	r6, #3	; 0x3
        270574:	e2851020 	add	r1, r5, #32	; 0x20
        270578:	e1a00007 	mov	r0, r7
        27057c:	e3a02024 	mov	r2, #36	; 0x24
        270580:	eb651133 	bl	1bb4a54 <$memmove>
        270584:	e0860086 	add	r0, r6, r6, lsl #1
        270588:	e0850100 	add	r0, r5, r0, lsl #2
        27058c:	e2800014 	add	r0, r0, #20	; 0x14
        270590:	e594106c 	ldr	r1, [r4, #108]
        270594:	e5c01001 	strb	r1, [r0, #1]
        270598:	e1a01441 	mov	r1, r1, asr #8
        27059c:	e5c01000 	strb	r1, [r0]
        2705a0:	e59410c0 	ldr	r1, [r4, #192]
        2705a4:	e5c01003 	strb	r1, [r0, #3]
        2705a8:	e1a01441 	mov	r1, r1, asr #8
        2705ac:	e5c01002 	strb	r1, [r0, #2]
        2705b0:	e59410c4 	ldr	r1, [r4, #196]
        2705b4:	e5c01005 	strb	r1, [r0, #5]
        2705b8:	e1a01441 	mov	r1, r1, asr #8
        2705bc:	e5c01004 	strb	r1, [r0, #4]
        2705c0:	e59410ec 	ldr	r1, [r4, #236]
        2705c4:	e5c01007 	strb	r1, [r0, #7]
        2705c8:	e1a01441 	mov	r1, r1, asr #8
        2705cc:	e5c01006 	strb	r1, [r0, #6]
        2705d0:	e5b410c8 	ldr	r1, [r4, #200]!
        2705d4:	e5c01008 	strb	r1, [r0, #8]
        2705d8:	e3560003 	cmp	r6, #3	; 0x3
        2705dc:	ba000028 	blt	270684 <WS_FlyLearn(ws_control_type *, ws_memory_header_type *, ws_data_type *)+0x164>
        2705e0:	e3a0e000 	mov	lr, #0	; 0x0
        2705e4:	e3a00000 	mov	r0, #0	; 0x0
        2705e8:	e1a02000 	mov	r2, r0
        2705ec:	e1a0c000 	mov	ip, r0
        2705f0:	e1a01000 	mov	r1, r0
        2705f4:	e1a03000 	mov	r3, r0
        2705f8:	e5974000 	ldr	r4, [r7]
        2705fc:	e0833844 	add	r3, r3, r4, asr #16
        270600:	e5974002 	ldr	r4, [r7, #2]
        270604:	e0811844 	add	r1, r1, r4, asr #16
        270608:	e5974004 	ldr	r4, [r7, #4]
        27060c:	e08cc844 	add	ip, ip, r4, asr #16
        270610:	e5974006 	ldr	r4, [r7, #6]
        270614:	e0822844 	add	r2, r2, r4, asr #16
        270618:	e5d74008 	ldrb	r4, [r7, #8]
        27061c:	e0840000 	add	r0, r4, r0
        270620:	e28ee001 	add	lr, lr, #1	; 0x1
        270624:	e287700c 	add	r7, r7, #12	; 0xc
        270628:	e35e0004 	cmp	lr, #4	; 0x4
        27062c:	bafffff1 	blt	2705f8 <WS_FlyLearn(ws_control_type *, ws_memory_header_type *, ws_data_type *)+0xd8>
        270630:	e285e008 	add	lr, r5, #8	; 0x8
        270634:	e1a03123 	mov	r3, r3, lsr #2
        270638:	e5ce3001 	strb	r3, [lr, #1]
        27063c:	e1a03443 	mov	r3, r3, asr #8
        270640:	e5ce3000 	strb	r3, [lr]
        270644:	e1a01121 	mov	r1, r1, lsr #2
        270648:	e5ce1003 	strb	r1, [lr, #3]
        27064c:	e1a01441 	mov	r1, r1, asr #8
        270650:	e5ce1002 	strb	r1, [lr, #2]
        270654:	e1a0112c 	mov	r1, ip, lsr #2
        270658:	e5ce1005 	strb	r1, [lr, #5]
        27065c:	e1a01441 	mov	r1, r1, asr #8
        270660:	e5ce1004 	strb	r1, [lr, #4]
        270664:	e1a01122 	mov	r1, r2, lsr #2
        270668:	e5ce1007 	strb	r1, [lr, #7]
        27066c:	e1a01441 	mov	r1, r1, asr #8
        270670:	e5ce1006 	strb	r1, [lr, #6]
        270674:	e1a00120 	mov	r0, r0, lsr #2
        270678:	e5ce0008 	strb	r0, [lr, #8]
        27067c:	e3a00000 	mov	r0, #0	; 0x0
        270680:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        270684:	e3a00001 	mov	r0, #1	; 0x1
        270688:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: WordLineStrokes(ws_data_type *, ws_results_type *)
 * Address: 00270ab0
 */
WordLineStrokes(ws_data_type *, ws_results_type *) {
    /*
        270ab0:	e1a0c00d 	mov	ip, sp
        270ab4:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        270ab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        270abc:	e24ddf5d 	sub	sp, sp, #372	; 0x174
        270ac0:	e1a04000 	mov	r4, r0
        270ac4:	e51b102c 	ldr	r1, [fp, -#44]
        270ac8:	e5911004 	ldr	r1, [r1, #4]
        270acc:	e58d1004 	str	r1, [sp, #4]
        270ad0:	e590108c 	ldr	r1, [r0, #140]
        270ad4:	e58d1110 	str	r1, [sp, #272]
        270ad8:	e59000ac 	ldr	r0, [r0, #172]
        270adc:	e3300001 	teq	r0, #1	; 0x1
        270ae0:	059d1110 	ldreq	r1, [sp, #272]
        270ae4:	02411001 	subeq	r1, r1, #1	; 0x1
        270ae8:	058d1110 	streq	r1, [sp, #272]
        270aec:	e59400c8 	ldr	r0, [r4, #200]
        270af0:	e3500000 	cmp	r0, #0	; 0x0
        270af4:	da000004 	ble	270b0c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x5c>
        270af8:	e594109c 	ldr	r1, [r4, #156]
        270afc:	e0806001 	add	r6, r0, r1
        270b00:	e0866fa6 	add	r6, r6, r6, lsr #31
        270b04:	e1a060c6 	mov	r6, r6, asr #1
        270b08:	ea000000 	b	270b10 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x60>
        270b0c:	e594609c 	ldr	r6, [r4, #156]
        270b10:	e59400c0 	ldr	r0, [r4, #192]
        270b14:	e3500000 	cmp	r0, #0	; 0x0
        270b18:	e5941064 	ldr	r1, [r4, #100]
        270b1c:	c0801001 	addgt	r1, r0, r1
        270b20:	c0811fa1 	addgt	r1, r1, r1, lsr #31
        270b24:	c1a010c1 	movgt	r1, r1, asr #1
        270b28:	e1a00004 	mov	r0, r4
        270b2c:	e58d1114 	str	r1, [sp, #276]
        270b30:	eb62c9ac 	bl	1b231e8 <$WS_GetWordDist(ws_data_type *)>
        270b34:	e5940078 	ldr	r0, [r4, #120]
        270b38:	e5947060 	ldr	r7, [r4, #96]
        270b3c:	e3a0c000 	mov	ip, #0	; 0x0
        270b40:	e58d0108 	str	r0, [sp, #264]
        270b44:	e58dc104 	str	ip, [sp, #260]
        270b48:	e5940074 	ldr	r0, [r4, #116]
        270b4c:	e58d010c 	str	r0, [sp, #268]
        270b50:	e59410b0 	ldr	r1, [r4, #176]
        270b54:	e1510000 	cmp	r1, r0
        270b58:	da000021 	ble	270be4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x134>
        270b5c:	e0801100 	add	r1, r0, r0, lsl #2
        270b60:	e59de004 	ldr	lr, [sp, #4]
        270b64:	e7de2101 	ldrb	r2, [lr, r1, lsl #2]
        270b68:	e3120004 	tst	r2, #4	; 0x4
        270b6c:	0a000018 	beq	270bd4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x124>
        270b70:	e2802001 	add	r2, r0, #1	; 0x1
        270b74:	e58d210c 	str	r2, [sp, #268]
        270b78:	e59de004 	ldr	lr, [sp, #4]
        270b7c:	e08e3101 	add	r3, lr, r1, lsl #2
        270b80:	e593100e 	ldr	r1, [r3, #14]
        270b84:	e1a01841 	mov	r1, r1, asr #16
        270b88:	e58d1108 	str	r1, [sp, #264]
        270b8c:	e5d32006 	ldrb	r2, [r3, #6]
        270b90:	e3a01000 	mov	r1, #0	; 0x0
        270b94:	e5d3c007 	ldrb	ip, [r3, #7]
        270b98:	e35c0000 	cmp	ip, #0	; 0x0
        270b9c:	da00000c 	ble	270bd4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x124>
        270ba0:	e082c001 	add	ip, r2, r1
        270ba4:	e51be02c 	ldr	lr, [fp, -#44]
        270ba8:	e08cc00e 	add	ip, ip, lr
        270bac:	e5dce008 	ldrb	lr, [ip, #8]
        270bb0:	e59dc104 	ldr	ip, [sp, #260]
        270bb4:	e28c5001 	add	r5, ip, #1	; 0x1
        270bb8:	e58d5104 	str	r5, [sp, #260]
        270bbc:	e28d5008 	add	r5, sp, #8	; 0x8
        270bc0:	e7c5e00c 	strb	lr, [r5, ip]
        270bc4:	e2811001 	add	r1, r1, #1	; 0x1
        270bc8:	e5d3c007 	ldrb	ip, [r3, #7]
        270bcc:	e15c0001 	cmp	ip, r1
        270bd0:	cafffff2 	bgt	270ba0 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xf0>
        270bd4:	e2800001 	add	r0, r0, #1	; 0x1
        270bd8:	e59410b0 	ldr	r1, [r4, #176]
        270bdc:	e1510000 	cmp	r1, r0
        270be0:	caffffdd 	bgt	270b5c <WordLineStrokes(ws_data_type *, ws_results_type *)+0xac>
        270be4:	e1a01004 	mov	r1, r4
        270be8:	e59d0108 	ldr	r0, [sp, #264]
        270bec:	eb62de17 	bl	1b28450 <$WS_SegmentWords(int, ws_data_type *)>
        270bf0:	e58d011c 	str	r0, [sp, #284]
        270bf4:	e080c100 	add	ip, r0, r0, lsl #2
        270bf8:	e06c0400 	rsb	r0, ip, r0, lsl #8
        270bfc:	e1a00080 	mov	r0, r0, lsl #1
        270c00:	eb5ffaed 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        270c04:	e1b02000 	movs	r2, r0
        270c08:	e58d0000 	str	r0, [sp]
        270c0c:	e3a00001 	mov	r0, #1	; 0x1
        270c10:	0a000276 	beq	2715f0 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xb40>
        270c14:	e59d110c 	ldr	r1, [sp, #268]
        270c18:	e3a05000 	mov	r5, #0	; 0x0
        270c1c:	e58d1118 	str	r1, [sp, #280]
        270c20:	e59d111c 	ldr	r1, [sp, #284]
        270c24:	e3510000 	cmp	r1, #0	; 0x0
        270c28:	da000107 	ble	27104c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x59c>
        270c2c:	e1a01087 	mov	r1, r7, lsl #1
        270c30:	e58d1170 	str	r1, [sp, #368]
        270c34:	e20610ff 	and	r1, r6, #255	; 0xff
        270c38:	e58d116c 	str	r1, [sp, #364]
        270c3c:	e59d1114 	ldr	r1, [sp, #276]
        270c40:	e1a01801 	mov	r1, r1, lsl #16
        270c44:	e1a01841 	mov	r1, r1, asr #16
        270c48:	e58d1168 	str	r1, [sp, #360]
        270c4c:	e1a01441 	mov	r1, r1, asr #8
        270c50:	e58d1164 	str	r1, [sp, #356]
        270c54:	e59d011c 	ldr	r0, [sp, #284]
        270c58:	e2400001 	sub	r0, r0, #1	; 0x1
        270c5c:	e58d0160 	str	r0, [sp, #352]
        270c60:	e2840a01 	add	r0, r4, #4096	; 0x1000
        270c64:	e58d015c 	str	r0, [sp, #348]
        270c68:	e0840105 	add	r0, r4, r5, lsl #2
        270c6c:	e2802a01 	add	r2, r0, #4096	; 0x1000
        270c70:	e5d2749c 	ldrb	r7, [r2, #1180]
        270c74:	e59d015c 	ldr	r0, [sp, #348]
        270c78:	e5900888 	ldr	r0, [r0, #2184]
        270c7c:	e7903207 	ldr	r3, [r0, r7, lsl #4]
        270c80:	e1a03843 	mov	r3, r3, asr #16
        270c84:	e0801207 	add	r1, r0, r7, lsl #4
        270c88:	e5911006 	ldr	r1, [r1, #6]
        270c8c:	e1b01841 	movs	r1, r1, asr #16
        270c90:	42811003 	addmi	r1, r1, #3	; 0x3
        270c94:	e0831141 	add	r1, r3, r1, asr #2
        270c98:	e5d2649d 	ldrb	r6, [r2, #1181]
        270c9c:	e7902206 	ldr	r2, [r0, r6, lsl #4]
        270ca0:	e1a02842 	mov	r2, r2, asr #16
        270ca4:	e0800206 	add	r0, r0, r6, lsl #4
        270ca8:	e5900006 	ldr	r0, [r0, #6]
        270cac:	e1b00840 	movs	r0, r0, asr #16
        270cb0:	42800003 	addmi	r0, r0, #3	; 0x3
        270cb4:	e0820140 	add	r0, r2, r0, asr #2
        270cb8:	e3350000 	teq	r5, #0	; 0x0
        270cbc:	11a09001 	movne	r9, r1
        270cc0:	05949078 	ldreq	r9, [r4, #120]
        270cc4:	e59d1160 	ldr	r1, [sp, #352]
        270cc8:	e1310005 	teq	r1, r5
        270ccc:	11a0a000 	movne	sl, r0
        270cd0:	0594a07c 	ldreq	sl, [r4, #124]
        270cd4:	e3a00000 	mov	r0, #0	; 0x0
        270cd8:	e3a08000 	mov	r8, #0	; 0x0
        270cdc:	e59d1110 	ldr	r1, [sp, #272]
        270ce0:	e3510000 	cmp	r1, #0	; 0x0
        270ce4:	ba000061 	blt	270e70 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x3c0>
        270ce8:	e2872001 	add	r2, r7, #1	; 0x1
        270cec:	e58d2158 	str	r2, [sp, #344]
        270cf0:	e0851105 	add	r1, r5, r5, lsl #2
        270cf4:	e0611405 	rsb	r1, r1, r5, lsl #8
        270cf8:	e59d2000 	ldr	r2, [sp]
        270cfc:	e082c081 	add	ip, r2, r1, lsl #1
        270d00:	e58dc154 	str	ip, [sp, #340]
        270d04:	e5941070 	ldr	r1, [r4, #112]
        270d08:	e0813000 	add	r3, r1, r0
        270d0c:	e59410b4 	ldr	r1, [r4, #180]
        270d10:	e1330001 	teq	r3, r1
        270d14:	1a000002 	bne	270d24 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x274>
        270d18:	e5941020 	ldr	r1, [r4, #32]
        270d1c:	e3110002 	tst	r1, #2	; 0x2
        270d20:	1a000052 	bne	270e70 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x3c0>
        270d24:	e3a01000 	mov	r1, #0	; 0x0
        270d28:	e3a02000 	mov	r2, #0	; 0x0
        270d2c:	e59dc104 	ldr	ip, [sp, #260]
        270d30:	e35c0000 	cmp	ip, #0	; 0x0
        270d34:	da000009 	ble	270d60 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x2b0>
        270d38:	e28dc008 	add	ip, sp, #8	; 0x8
        270d3c:	e7dcc001 	ldrb	ip, [ip, r1]
        270d40:	e133000c 	teq	r3, ip
        270d44:	0a000045 	beq	270e60 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x3b0>
        270d48:	e2811001 	add	r1, r1, #1	; 0x1
        270d4c:	e59dc104 	ldr	ip, [sp, #260]
        270d50:	e151000c 	cmp	r1, ip
        270d54:	bafffff7 	blt	270d38 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x288>
        270d58:	e3320000 	teq	r2, #0	; 0x0
        270d5c:	1a00003f 	bne	270e60 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x3b0>
        270d60:	e0842180 	add	r2, r4, r0, lsl #3
        270d64:	e5921cc4 	ldr	r1, [r2, #3268]
        270d68:	e1a01841 	mov	r1, r1, asr #16
        270d6c:	e592ccc6 	ldr	ip, [r2, #3270]
        270d70:	e1a0c84c 	mov	ip, ip, asr #16
        270d74:	e1510009 	cmp	r1, r9
        270d78:	ba000001 	blt	270d84 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x2d4>
        270d7c:	e151000a 	cmp	r1, sl
        270d80:	da000007 	ble	270da4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x2f4>
        270d84:	e15c0009 	cmp	ip, r9
        270d88:	ba000001 	blt	270d94 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x2e4>
        270d8c:	e15c000a 	cmp	ip, sl
        270d90:	da000003 	ble	270da4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x2f4>
        270d94:	e1510009 	cmp	r1, r9
        270d98:	ca000030 	bgt	270e60 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x3b0>
        270d9c:	e15c000a 	cmp	ip, sl
        270da0:	ba00002e 	blt	270e60 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x3b0>
        270da4:	e59d115c 	ldr	r1, [sp, #348]
        270da8:	e5911888 	ldr	r1, [r1, #2184]
        270dac:	e0811207 	add	r1, r1, r7, lsl #4
        270db0:	e2811010 	add	r1, r1, #16	; 0x10
        270db4:	e59dc154 	ldr	ip, [sp, #340]
        270db8:	e7cc3088 	strb	r3, [ip, r8, lsl #1]
        270dbc:	e5923cca 	ldr	r3, [r2, #3274]
        270dc0:	e1a03843 	mov	r3, r3, asr #16
        270dc4:	e5922cc6 	ldr	r2, [r2, #3270]
        270dc8:	e0832842 	add	r2, r3, r2, asr #16
        270dcc:	e2823001 	add	r3, r2, #1	; 0x1
        270dd0:	e0833fa3 	add	r3, r3, r3, lsr #31
        270dd4:	e1a030c3 	mov	r3, r3, asr #1
        270dd8:	e3a02000 	mov	r2, #0	; 0x0
        270ddc:	e58d2124 	str	r2, [sp, #292]
        270de0:	e59d2158 	ldr	r2, [sp, #344]
        270de4:	e1520006 	cmp	r2, r6
        270de8:	aa000017 	bge	270e4c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x39c>
        270dec:	e591c002 	ldr	ip, [r1, #2]
        270df0:	e1a0c84c 	mov	ip, ip, asr #16
        270df4:	e15c0003 	cmp	ip, r3
        270df8:	ca000006 	bgt	270e18 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x368>
        270dfc:	e591e00c 	ldr	lr, [r1, #12]
        270e00:	e08cc84e 	add	ip, ip, lr, asr #16
        270e04:	e15c0003 	cmp	ip, r3
        270e08:	c5912006 	ldrgt	r2, [r1, #6]
        270e0c:	c1a02842 	movgt	r2, r2, asr #16
        270e10:	c58d2124 	strgt	r2, [sp, #292]
        270e14:	ca000003 	bgt	270e28 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x378>
        270e18:	e2822001 	add	r2, r2, #1	; 0x1
        270e1c:	e2811010 	add	r1, r1, #16	; 0x10
        270e20:	e1520006 	cmp	r2, r6
        270e24:	bafffff0 	blt	270dec <WordLineStrokes(ws_data_type *, ws_results_type *)+0x33c>
        270e28:	e59d2124 	ldr	r2, [sp, #292]
        270e2c:	e3320000 	teq	r2, #0	; 0x0
        270e30:	0a000005 	beq	270e4c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x39c>
        270e34:	e5d1100f 	ldrb	r1, [r1, #15]
        270e38:	e2811064 	add	r1, r1, #100	; 0x64
        270e3c:	e59dc154 	ldr	ip, [sp, #340]
        270e40:	e08c2088 	add	r2, ip, r8, lsl #1
        270e44:	e5c21001 	strb	r1, [r2, #1]
        270e48:	ea000003 	b	270e5c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x3ac>
        270e4c:	e3a02000 	mov	r2, #0	; 0x0
        270e50:	e59dc154 	ldr	ip, [sp, #340]
        270e54:	e08c1088 	add	r1, ip, r8, lsl #1
        270e58:	e5c12001 	strb	r2, [r1, #1]
        270e5c:	e2888001 	add	r8, r8, #1	; 0x1
        270e60:	e2800001 	add	r0, r0, #1	; 0x1
        270e64:	e59d1110 	ldr	r1, [sp, #272]
        270e68:	e1500001 	cmp	r0, r1
        270e6c:	daffffa4 	ble	270d04 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x254>
        270e70:	e59d0160 	ldr	r0, [sp, #352]
        270e74:	e1500005 	cmp	r0, r5
        270e78:	da00000b 	ble	270eac <WordLineStrokes(ws_data_type *, ws_results_type *)+0x3fc>
        270e7c:	e59d015c 	ldr	r0, [sp, #348]
        270e80:	e5900888 	ldr	r0, [r0, #2184]
        270e84:	e0800206 	add	r0, r0, r6, lsl #4
        270e88:	e5901006 	ldr	r1, [r0, #6]
        270e8c:	e1a01841 	mov	r1, r1, asr #16
        270e90:	e59d0170 	ldr	r0, [sp, #368]
        270e94:	eb6506a9 	bl	1bb2940 <$__rt_sdiv>
        270e98:	e080c180 	add	ip, r0, r0, lsl #3
        270e9c:	e08c0200 	add	r0, ip, r0, lsl #4
        270ea0:	e1a00100 	mov	r0, r0, lsl #2
        270ea4:	e3500064 	cmp	r0, #100	; 0x64
        270ea8:	da000000 	ble	270eb0 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x400>
        270eac:	e3a00064 	mov	r0, #100	; 0x64
        270eb0:	e59d1108 	ldr	r1, [sp, #264]
        270eb4:	e1590001 	cmp	r9, r1
        270eb8:	d59de108 	ldrle	lr, [sp, #264]
        270ebc:	c1a0e009 	movgt	lr, r9
        270ec0:	e594c0ec 	ldr	ip, [r4, #236]
        270ec4:	e37c007f 	cmn	ip, #127	; 0x7f
        270ec8:	b3e0c07e 	mvnlt	ip, #126	; 0x7e
        270ecc:	ba000001 	blt	270ed8 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x428>
        270ed0:	e35c007f 	cmp	ip, #127	; 0x7f
        270ed4:	c3a0c07f 	movgt	ip, #127	; 0x7f
        270ed8:	e5941074 	ldr	r1, [r4, #116]
        270edc:	e59d210c 	ldr	r2, [sp, #268]
        270ee0:	e0421001 	sub	r1, r2, r1
        270ee4:	e0811005 	add	r1, r1, r5
        270ee8:	e2819001 	add	r9, r1, #1	; 0x1
        270eec:	e59d1118 	ldr	r1, [sp, #280]
        270ef0:	e0812101 	add	r2, r1, r1, lsl #2
        270ef4:	e59d1004 	ldr	r1, [sp, #4]
        270ef8:	e0811102 	add	r1, r1, r2, lsl #2
        270efc:	e5c19002 	strb	r9, [r1, #2]
        270f00:	e59490b8 	ldr	r9, [r4, #184]
        270f04:	e5c19001 	strb	r9, [r1, #1]
        270f08:	e5c10003 	strb	r0, [r1, #3]
        270f0c:	e59d016c 	ldr	r0, [sp, #364]
        270f10:	e5c10004 	strb	r0, [r1, #4]
        270f14:	e5c1c005 	strb	ip, [r1, #5]
        270f18:	e09e000a 	adds	r0, lr, sl
        270f1c:	4280001f 	addmi	r0, r0, #31	; 0x1f
        270f20:	e1a002c0 	mov	r0, r0, asr #5
        270f24:	e0840080 	add	r0, r4, r0, lsl #1
        270f28:	e59008d8 	ldr	r0, [r0, #2264]
        270f2c:	e1a00820 	mov	r0, r0, lsr #16
        270f30:	e5c10009 	strb	r0, [r1, #9]
        270f34:	e1a00440 	mov	r0, r0, asr #8
        270f38:	e5c10008 	strb	r0, [r1, #8]
        270f3c:	e59d015c 	ldr	r0, [sp, #348]
        270f40:	e5900888 	ldr	r0, [r0, #2184]
        270f44:	e7903207 	ldr	r3, [r0, r7, lsl #4]
        270f48:	e1a03823 	mov	r3, r3, lsr #16
        270f4c:	e0800207 	add	r0, r0, r7, lsl #4
        270f50:	e5900006 	ldr	r0, [r0, #6]
        270f54:	e1a00840 	mov	r0, r0, asr #16
        270f58:	e0800fa0 	add	r0, r0, r0, lsr #31
        270f5c:	e08300c0 	add	r0, r3, r0, asr #1
        270f60:	e5c1000d 	strb	r0, [r1, #13]
        270f64:	e1a00440 	mov	r0, r0, asr #8
        270f68:	e5c1000c 	strb	r0, [r1, #12]
        270f6c:	e59d015c 	ldr	r0, [sp, #348]
        270f70:	e5900888 	ldr	r0, [r0, #2184]
        270f74:	e7903206 	ldr	r3, [r0, r6, lsl #4]
        270f78:	e1a03823 	mov	r3, r3, lsr #16
        270f7c:	e0800206 	add	r0, r0, r6, lsl #4
        270f80:	e5900006 	ldr	r0, [r0, #6]
        270f84:	e1a00840 	mov	r0, r0, asr #16
        270f88:	e0800fa0 	add	r0, r0, r0, lsr #31
        270f8c:	e04300c0 	sub	r0, r3, r0, asr #1
        270f90:	e5c1000f 	strb	r0, [r1, #15]
        270f94:	e1a00440 	mov	r0, r0, asr #8
        270f98:	e5c1000e 	strb	r0, [r1, #14]
        270f9c:	e59d0168 	ldr	r0, [sp, #360]
        270fa0:	e5c10011 	strb	r0, [r1, #17]
        270fa4:	e59d0164 	ldr	r0, [sp, #356]
        270fa8:	e5c10010 	strb	r0, [r1, #16]
        270fac:	e594006c 	ldr	r0, [r4, #108]
        270fb0:	e5c1000b 	strb	r0, [r1, #11]
        270fb4:	e1a00440 	mov	r0, r0, asr #8
        270fb8:	e5c1000a 	strb	r0, [r1, #10]
        270fbc:	e5c18007 	strb	r8, [r1, #7]
        270fc0:	e3a00000 	mov	r0, #0	; 0x0
        270fc4:	e59d1004 	ldr	r1, [sp, #4]
        270fc8:	e7c10102 	strb	r0, [r1, r2, lsl #2]
        270fcc:	e59400ac 	ldr	r0, [r4, #172]
        270fd0:	e3300000 	teq	r0, #0	; 0x0
        270fd4:	13a00001 	movne	r0, #1	; 0x1
        270fd8:	159d1004 	ldrne	r1, [sp, #4]
        270fdc:	17c10102 	strneb	r0, [r1, r2, lsl #2]
        270fe0:	e5940074 	ldr	r0, [r4, #116]
        270fe4:	e59d1118 	ldr	r1, [sp, #280]
        270fe8:	e1300001 	teq	r0, r1
        270fec:	1a000006 	bne	27100c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x55c>
        270ff0:	e594005c 	ldr	r0, [r4, #92]
        270ff4:	e3100001 	tst	r0, #1	; 0x1
        270ff8:	0a000003 	beq	27100c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x55c>
        270ffc:	e59d1004 	ldr	r1, [sp, #4]
        271000:	e7d10102 	ldrb	r0, [r1, r2, lsl #2]
        271004:	e3800010 	orr	r0, r0, #16	; 0x10
        271008:	e7c10102 	strb	r0, [r1, r2, lsl #2]
        27100c:	e59400cc 	ldr	r0, [r4, #204]
        271010:	e5941088 	ldr	r1, [r4, #136]
        271014:	e0800001 	add	r0, r0, r1
        271018:	e3500008 	cmp	r0, #8	; 0x8
        27101c:	da000003 	ble	271030 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x580>
        271020:	e59d1004 	ldr	r1, [sp, #4]
        271024:	e7d10102 	ldrb	r0, [r1, r2, lsl #2]
        271028:	e3800020 	orr	r0, r0, #32	; 0x20
        27102c:	e7c10102 	strb	r0, [r1, r2, lsl #2]
        271030:	e2855001 	add	r5, r5, #1	; 0x1
        271034:	e59d1118 	ldr	r1, [sp, #280]
        271038:	e2811001 	add	r1, r1, #1	; 0x1
        27103c:	e58d1118 	str	r1, [sp, #280]
        271040:	e59d011c 	ldr	r0, [sp, #284]
        271044:	e1550000 	cmp	r5, r0
        271048:	baffff06 	blt	270c68 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x1b8>
        27104c:	e3a01001 	mov	r1, #1	; 0x1
        271050:	e58d1120 	str	r1, [sp, #288]
        271054:	e59d011c 	ldr	r0, [sp, #284]
        271058:	e2400001 	sub	r0, r0, #1	; 0x1
        27105c:	e2843a01 	add	r3, r4, #4096	; 0x1000
        271060:	e58d0150 	str	r0, [sp, #336]
        271064:	e58d314c 	str	r3, [sp, #332]
        271068:	ea0000a9 	b	271314 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x864>
        27106c:	e3a07000 	mov	r7, #0	; 0x0
        271070:	e58d7130 	str	r7, [sp, #304]
        271074:	e59d010c 	ldr	r0, [sp, #268]
        271078:	ea00009b 	b	2712ec <WordLineStrokes(ws_data_type *, ws_results_type *)+0x83c>
        27107c:	e59d1130 	ldr	r1, [sp, #304]
        271080:	e0840101 	add	r0, r4, r1, lsl #2
        271084:	e2802a01 	add	r2, r0, #4096	; 0x1000
        271088:	e58d2148 	str	r2, [sp, #328]
        27108c:	e5d2149c 	ldrb	r1, [r2, #1180]
        271090:	e59d314c 	ldr	r3, [sp, #332]
        271094:	e5b30888 	ldr	r0, [r3, #2184]!
        271098:	e7903201 	ldr	r3, [r0, r1, lsl #4]
        27109c:	e1a03843 	mov	r3, r3, asr #16
        2710a0:	e0801201 	add	r1, r0, r1, lsl #4
        2710a4:	e5911006 	ldr	r1, [r1, #6]
        2710a8:	e1b01841 	movs	r1, r1, asr #16
        2710ac:	42811003 	addmi	r1, r1, #3	; 0x3
        2710b0:	e0839141 	add	r9, r3, r1, asr #2
        2710b4:	e59d2148 	ldr	r2, [sp, #328]
        2710b8:	e5d2149d 	ldrb	r1, [r2, #1181]
        2710bc:	e7902201 	ldr	r2, [r0, r1, lsl #4]
        2710c0:	e1a02842 	mov	r2, r2, asr #16
        2710c4:	e0800201 	add	r0, r0, r1, lsl #4
        2710c8:	e5900006 	ldr	r0, [r0, #6]
        2710cc:	e1b00840 	movs	r0, r0, asr #16
        2710d0:	42800003 	addmi	r0, r0, #3	; 0x3
        2710d4:	e0828140 	add	r8, r2, r0, asr #2
        2710d8:	e3a00000 	mov	r0, #0	; 0x0
        2710dc:	e58d012c 	str	r0, [sp, #300]
        2710e0:	e59d1130 	ldr	r1, [sp, #304]
        2710e4:	e0810101 	add	r0, r1, r1, lsl #2
        2710e8:	e0600401 	rsb	r0, r0, r1, lsl #8
        2710ec:	e59d2000 	ldr	r2, [sp]
        2710f0:	e0821080 	add	r1, r2, r0, lsl #1
        2710f4:	e58d1144 	str	r1, [sp, #324]
        2710f8:	e59d0118 	ldr	r0, [sp, #280]
        2710fc:	e0800100 	add	r0, r0, r0, lsl #2
        271100:	e59d1004 	ldr	r1, [sp, #4]
        271104:	e0815100 	add	r5, r1, r0, lsl #2
        271108:	ea00006c 	b	2712c0 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x810>
        27110c:	e3a06000 	mov	r6, #0	; 0x0
        271110:	e59d012c 	ldr	r0, [sp, #300]
        271114:	e2801001 	add	r1, r0, #1	; 0x1
        271118:	e58d1140 	str	r1, [sp, #320]
        27111c:	e59d1130 	ldr	r1, [sp, #304]
        271120:	e081c101 	add	ip, r1, r1, lsl #2
        271124:	e06c1401 	rsb	r1, ip, r1, lsl #8
        271128:	e59d2000 	ldr	r2, [sp]
        27112c:	e0821081 	add	r1, r2, r1, lsl #1
        271130:	e0810080 	add	r0, r1, r0, lsl #1
        271134:	e58d0134 	str	r0, [sp, #308]
        271138:	e2801002 	add	r1, r0, #2	; 0x2
        27113c:	e58d113c 	str	r1, [sp, #316]
        271140:	e59d0140 	ldr	r0, [sp, #320]
        271144:	e26000fb 	rsb	r0, r0, #251	; 0xfb
        271148:	e1a02080 	mov	r2, r0, lsl #1
        27114c:	e58d2138 	str	r2, [sp, #312]
        271150:	ea000053 	b	2712a4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x7f4>
        271154:	e59d012c 	ldr	r0, [sp, #300]
        271158:	e59d1144 	ldr	r1, [sp, #324]
        27115c:	e7d10080 	ldrb	r0, [r1, r0, lsl #1]
        271160:	e081c086 	add	ip, r1, r6, lsl #1
        271164:	e5dc11f6 	ldrb	r1, [ip, #502]
        271168:	e1300001 	teq	r0, r1
        27116c:	1a00004b 	bne	2712a0 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x7f0>
        271170:	e5941070 	ldr	r1, [r4, #112]
        271174:	e0400001 	sub	r0, r0, r1
        271178:	e0840180 	add	r0, r4, r0, lsl #3
        27117c:	e5901cc4 	ldr	r1, [r0, #3268]
        271180:	e1a01841 	mov	r1, r1, asr #16
        271184:	e5900cc6 	ldr	r0, [r0, #3270]
        271188:	e1a00840 	mov	r0, r0, asr #16
        27118c:	e0592001 	subs	r2, r9, r1
        271190:	42623000 	rsbmi	r3, r2, #0	; 0x0
        271194:	51a03002 	movpl	r3, r2
        271198:	e0582000 	subs	r2, r8, r0
        27119c:	42622000 	rsbmi	r2, r2, #0	; 0x0
        2711a0:	e0822003 	add	r2, r2, r3
        2711a4:	e1580000 	cmp	r8, r0
        2711a8:	d1a03000 	movle	r3, r0
        2711ac:	c1a03008 	movgt	r3, r8
        2711b0:	e1590001 	cmp	r9, r1
        2711b4:	a1a0e001 	movge	lr, r1
        2711b8:	b1a0e009 	movlt	lr, r9
        2711bc:	e043300e 	sub	r3, r3, lr
        2711c0:	e0432002 	sub	r2, r3, r2
        2711c4:	e58d2128 	str	r2, [sp, #296]
        2711c8:	e59d2148 	ldr	r2, [sp, #328]
        2711cc:	e5d224a0 	ldrb	r2, [r2, #1184]
        2711d0:	e59d314c 	ldr	r3, [sp, #332]
        2711d4:	e5933888 	ldr	r3, [r3, #2184]
        2711d8:	e1a0e003 	mov	lr, r3
        2711dc:	e793a202 	ldr	sl, [r3, r2, lsl #4]
        2711e0:	e1a0a84a 	mov	sl, sl, asr #16
        2711e4:	e0832202 	add	r2, r3, r2, lsl #4
        2711e8:	e5922006 	ldr	r2, [r2, #6]
        2711ec:	e1b02842 	movs	r2, r2, asr #16
        2711f0:	42822003 	addmi	r2, r2, #3	; 0x3
        2711f4:	e08a3142 	add	r3, sl, r2, asr #2
        2711f8:	e59d2148 	ldr	r2, [sp, #328]
        2711fc:	e5d224a1 	ldrb	r2, [r2, #1185]
        271200:	e79ea202 	ldr	sl, [lr, r2, lsl #4]
        271204:	e1a0a84a 	mov	sl, sl, asr #16
        271208:	e08e2202 	add	r2, lr, r2, lsl #4
        27120c:	e5922006 	ldr	r2, [r2, #6]
        271210:	e1b02842 	movs	r2, r2, asr #16
        271214:	42822003 	addmi	r2, r2, #3	; 0x3
        271218:	e08a2142 	add	r2, sl, r2, asr #2
        27121c:	e053a001 	subs	sl, r3, r1
        271220:	426aa000 	rsbmi	sl, sl, #0	; 0x0
        271224:	e052e000 	subs	lr, r2, r0
        271228:	426ee000 	rsbmi	lr, lr, #0	; 0x0
        27122c:	e08ee00a 	add	lr, lr, sl
        271230:	e1520000 	cmp	r2, r0
        271234:	c1a00002 	movgt	r0, r2
        271238:	e1530001 	cmp	r3, r1
        27123c:	b1a01003 	movlt	r1, r3
        271240:	e0400001 	sub	r0, r0, r1
        271244:	e040000e 	sub	r0, r0, lr
        271248:	e59d2128 	ldr	r2, [sp, #296]
        27124c:	e1520000 	cmp	r2, r0
        271250:	ba00000a 	blt	271280 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x7d0>
        271254:	e28c1f7e 	add	r1, ip, #504	; 0x1f8
        271258:	e28c00f6 	add	r0, ip, #246	; 0xf6
        27125c:	e2800c01 	add	r0, r0, #256	; 0x100
        271260:	e2862001 	add	r2, r6, #1	; 0x1
        271264:	e26220fb 	rsb	r2, r2, #251	; 0xfb
        271268:	e1a02082 	mov	r2, r2, lsl #1
        27126c:	eb650df8 	bl	1bb4a54 <$memmove>
        271270:	e5d5001b 	ldrb	r0, [r5, #27]
        271274:	e2400001 	sub	r0, r0, #1	; 0x1
        271278:	e5c5001b 	strb	r0, [r5, #27]
        27127c:	ea000007 	b	2712a0 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x7f0>
        271280:	e28d2f4d 	add	r2, sp, #308	; 0x134
        271284:	e8920005 	ldmia	r2, {r0, r2}
        271288:	e59d113c 	ldr	r1, [sp, #316]
        27128c:	eb650df0 	bl	1bb4a54 <$memmove>
        271290:	e5d50007 	ldrb	r0, [r5, #7]
        271294:	e2400001 	sub	r0, r0, #1	; 0x1
        271298:	e5c50007 	strb	r0, [r5, #7]
        27129c:	e3a07001 	mov	r7, #1	; 0x1
        2712a0:	e2866001 	add	r6, r6, #1	; 0x1
        2712a4:	e5d5001b 	ldrb	r0, [r5, #27]
        2712a8:	e1500006 	cmp	r0, r6
        2712ac:	da000001 	ble	2712b8 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x808>
        2712b0:	e3370000 	teq	r7, #0	; 0x0
        2712b4:	0affffa6 	beq	271154 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x6a4>
        2712b8:	e59d0140 	ldr	r0, [sp, #320]
        2712bc:	e58d012c 	str	r0, [sp, #300]
        2712c0:	e5d50007 	ldrb	r0, [r5, #7]
        2712c4:	e59d112c 	ldr	r1, [sp, #300]
        2712c8:	e1500001 	cmp	r0, r1
        2712cc:	da000001 	ble	2712d8 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x828>
        2712d0:	e3370000 	teq	r7, #0	; 0x0
        2712d4:	0affff8c 	beq	27110c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x65c>
        2712d8:	e59d1130 	ldr	r1, [sp, #304]
        2712dc:	e2811001 	add	r1, r1, #1	; 0x1
        2712e0:	e58d1130 	str	r1, [sp, #304]
        2712e4:	e59d0118 	ldr	r0, [sp, #280]
        2712e8:	e2800001 	add	r0, r0, #1	; 0x1
        2712ec:	e58d0118 	str	r0, [sp, #280]
        2712f0:	e59d0150 	ldr	r0, [sp, #336]
        2712f4:	e59d1130 	ldr	r1, [sp, #304]
        2712f8:	e1500001 	cmp	r0, r1
        2712fc:	da000001 	ble	271308 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x858>
        271300:	e3370000 	teq	r7, #0	; 0x0
        271304:	0affff5c 	beq	27107c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x5cc>
        271308:	e59d1120 	ldr	r1, [sp, #288]
        27130c:	e2811001 	add	r1, r1, #1	; 0x1
        271310:	e58d1120 	str	r1, [sp, #288]
        271314:	e594008c 	ldr	r0, [r4, #140]
        271318:	e59d1120 	ldr	r1, [sp, #288]
        27131c:	e1500001 	cmp	r0, r1
        271320:	ba000002 	blt	271330 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x880>
        271324:	e59d1120 	ldr	r1, [sp, #288]
        271328:	e35100fb 	cmp	r1, #251	; 0xfb
        27132c:	baffff4e 	blt	27106c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x5bc>
        271330:	e59d310c 	ldr	r3, [sp, #268]
        271334:	e5940070 	ldr	r0, [r4, #112]
        271338:	e59dc104 	ldr	ip, [sp, #260]
        27133c:	e080100c 	add	r1, r0, ip
        271340:	e3a02000 	mov	r2, #0	; 0x0
        271344:	e59d011c 	ldr	r0, [sp, #284]
        271348:	e3500000 	cmp	r0, #0	; 0x0
        27134c:	da00001f 	ble	2713d0 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x920>
        271350:	e3a00000 	mov	r0, #0	; 0x0
        271354:	e083c103 	add	ip, r3, r3, lsl #2
        271358:	e59de004 	ldr	lr, [sp, #4]
        27135c:	e08ee10c 	add	lr, lr, ip, lsl #2
        271360:	e5dec007 	ldrb	ip, [lr, #7]
        271364:	e35c0000 	cmp	ip, #0	; 0x0
        271368:	da000010 	ble	2713b0 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x900>
        27136c:	e0825102 	add	r5, r2, r2, lsl #2
        271370:	e0655402 	rsb	r5, r5, r2, lsl #8
        271374:	e59d6000 	ldr	r6, [sp]
        271378:	e086c085 	add	ip, r6, r5, lsl #1
        27137c:	e7dc6080 	ldrb	r6, [ip, r0, lsl #1]
        271380:	e0815000 	add	r5, r1, r0
        271384:	e51b702c 	ldr	r7, [fp, -#44]
        271388:	e0855007 	add	r5, r5, r7
        27138c:	e5c56008 	strb	r6, [r5, #8]
        271390:	e08c6080 	add	r6, ip, r0, lsl #1
        271394:	e5d66001 	ldrb	r6, [r6, #1]
        271398:	e2466064 	sub	r6, r6, #100	; 0x64
        27139c:	e5c56102 	strb	r6, [r5, #258]
        2713a0:	e2800001 	add	r0, r0, #1	; 0x1
        2713a4:	e5de5007 	ldrb	r5, [lr, #7]
        2713a8:	e1550000 	cmp	r5, r0
        2713ac:	cafffff2 	bgt	27137c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x8cc>
        2713b0:	e5ce1006 	strb	r1, [lr, #6]
        2713b4:	e5de0007 	ldrb	r0, [lr, #7]
        2713b8:	e0801001 	add	r1, r0, r1
        2713bc:	e2822001 	add	r2, r2, #1	; 0x1
        2713c0:	e2833001 	add	r3, r3, #1	; 0x1
        2713c4:	e59d011c 	ldr	r0, [sp, #284]
        2713c8:	e1520000 	cmp	r2, r0
        2713cc:	baffffdf 	blt	271350 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x8a0>
        2713d0:	e3a05000 	mov	r5, #0	; 0x0
        2713d4:	e59d110c 	ldr	r1, [sp, #268]
        2713d8:	e5940004 	ldr	r0, [r4, #4]
        2713dc:	ea000014 	b	271434 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x984>
        2713e0:	e0842105 	add	r2, r4, r5, lsl #2
        2713e4:	e2822a01 	add	r2, r2, #4096	; 0x1000
        2713e8:	e5d2249d 	ldrb	r2, [r2, #1181]
        2713ec:	e59d314c 	ldr	r3, [sp, #332]
        2713f0:	e5933888 	ldr	r3, [r3, #2184]
        2713f4:	e7932202 	ldr	r2, [r3, r2, lsl #4]
        2713f8:	e1a02842 	mov	r2, r2, asr #16
        2713fc:	e594307c 	ldr	r3, [r4, #124]
        271400:	e0433000 	sub	r3, r3, r0
        271404:	e1530002 	cmp	r3, r2
        271408:	aa000008 	bge	271430 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x980>
        27140c:	e0810005 	add	r0, r1, r5
        271410:	e0800100 	add	r0, r0, r0, lsl #2
        271414:	e59d1004 	ldr	r1, [sp, #4]
        271418:	e0810100 	add	r0, r1, r0, lsl #2
        27141c:	e3a02014 	mov	r2, #20	; 0x14
        271420:	e3a01000 	mov	r1, #0	; 0x0
        271424:	eb650d8b 	bl	1bb4a58 <$memset>
        271428:	e58d511c 	str	r5, [sp, #284]
        27142c:	ea000005 	b	271448 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x998>
        271430:	e2855001 	add	r5, r5, #1	; 0x1
        271434:	e3500000 	cmp	r0, #0	; 0x0
        271438:	da000002 	ble	271448 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x998>
        27143c:	e59d211c 	ldr	r2, [sp, #284]
        271440:	e1550002 	cmp	r5, r2
        271444:	baffffe5 	blt	2713e0 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x930>
        271448:	e3a05000 	mov	r5, #0	; 0x0
        27144c:	e59d011c 	ldr	r0, [sp, #284]
        271450:	e3500000 	cmp	r0, #0	; 0x0
        271454:	e59d610c 	ldr	r6, [sp, #268]
        271458:	da000010 	ble	2714a0 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x9f0>
        27145c:	e0860005 	add	r0, r6, r5
        271460:	e0800100 	add	r0, r0, r0, lsl #2
        271464:	e59d1004 	ldr	r1, [sp, #4]
        271468:	e0810100 	add	r0, r1, r0, lsl #2
        27146c:	e5d01007 	ldrb	r1, [r0, #7]
        271470:	e3310000 	teq	r1, #0	; 0x0
        271474:	1a000005 	bne	271490 <WordLineStrokes(ws_data_type *, ws_results_type *)+0x9e0>
        271478:	e2801014 	add	r1, r0, #20	; 0x14
        27147c:	e3a02014 	mov	r2, #20	; 0x14
        271480:	eb650d73 	bl	1bb4a54 <$memmove>
        271484:	e59d011c 	ldr	r0, [sp, #284]
        271488:	e2400001 	sub	r0, r0, #1	; 0x1
        27148c:	e58d011c 	str	r0, [sp, #284]
        271490:	e2855001 	add	r5, r5, #1	; 0x1
        271494:	e59d011c 	ldr	r0, [sp, #284]
        271498:	e1550000 	cmp	r5, r0
        27149c:	baffffee 	blt	27145c <WordLineStrokes(ws_data_type *, ws_results_type *)+0x9ac>
        2714a0:	e59400ac 	ldr	r0, [r4, #172]
        2714a4:	e3300001 	teq	r0, #1	; 0x1
        2714a8:	1a00003d 	bne	2715a4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xaf4>
        2714ac:	e59d011c 	ldr	r0, [sp, #284]
        2714b0:	e3500000 	cmp	r0, #0	; 0x0
        2714b4:	c2841054 	addgt	r1, r4, #84	; 0x54
        2714b8:	c8910003 	ldmgtia	r1, {r0, r1}
        2714bc:	c1500081 	cmpgt	r0, r1, lsl #1
        2714c0:	da000037 	ble	2715a4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xaf4>
        2714c4:	e5943078 	ldr	r3, [r4, #120]
        2714c8:	e3530000 	cmp	r3, #0	; 0x0
        2714cc:	b2833003 	addlt	r3, r3, #3	; 0x3
        2714d0:	e1a03143 	mov	r3, r3, asr #2
        2714d4:	e594007c 	ldr	r0, [r4, #124]
        2714d8:	e3500000 	cmp	r0, #0	; 0x0
        2714dc:	b2800003 	addlt	r0, r0, #3	; 0x3
        2714e0:	e1a00140 	mov	r0, r0, asr #2
        2714e4:	e2400001 	sub	r0, r0, #1	; 0x1
        2714e8:	e0841000 	add	r1, r4, r0
        2714ec:	e5d110fc 	ldrb	r1, [r1, #252]
        2714f0:	e3310000 	teq	r1, #0	; 0x0
        2714f4:	1a000001 	bne	271500 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xa50>
        2714f8:	e1500003 	cmp	r0, r3
        2714fc:	cafffff8 	bgt	2714e4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xa34>
        271500:	e1a01000 	mov	r1, r0
        271504:	e3a02000 	mov	r2, #0	; 0x0
        271508:	ea000009 	b	271534 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xa84>
        27150c:	e084c001 	add	ip, r4, r1
        271510:	e5dcc0fc 	ldrb	ip, [ip, #252]
        271514:	e21cc03f 	ands	ip, ip, #63	; 0x3f
        271518:	0a000009 	beq	271544 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xa94>
        27151c:	e35c0001 	cmp	ip, #1	; 0x1
        271520:	da000002 	ble	271530 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xa80>
        271524:	e33c0004 	teq	ip, #4	; 0x4
        271528:	1a00001d 	bne	2715a4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xaf4>
        27152c:	e2822001 	add	r2, r2, #1	; 0x1
        271530:	e2411001 	sub	r1, r1, #1	; 0x1
        271534:	e1510003 	cmp	r1, r3
        271538:	da000001 	ble	271544 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xa94>
        27153c:	e3520001 	cmp	r2, #1	; 0x1
        271540:	dafffff1 	ble	27150c <WordLineStrokes(ws_data_type *, ws_results_type *)+0xa5c>
        271544:	e3320001 	teq	r2, #1	; 0x1
        271548:	1a000015 	bne	2715a4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xaf4>
        27154c:	e59d210c 	ldr	r2, [sp, #268]
        271550:	e59d311c 	ldr	r3, [sp, #284]
        271554:	e0822003 	add	r2, r2, r3
        271558:	e0822102 	add	r2, r2, r2, lsl #2
        27155c:	e59de004 	ldr	lr, [sp, #4]
        271560:	e08e2102 	add	r2, lr, r2, lsl #2
        271564:	e5123008 	ldr	r3, [r2, -#8]
        271568:	e59dc114 	ldr	ip, [sp, #276]
        27156c:	e06cc101 	rsb	ip, ip, r1, lsl #2
        271570:	e15c0843 	cmp	ip, r3, asr #16
        271574:	da00000a 	ble	2715a4 <WordLineStrokes(ws_data_type *, ws_results_type *)+0xaf4>
        271578:	e0400001 	sub	r0, r0, r1
        27157c:	e1a00100 	mov	r0, r0, lsl #2
        271580:	e594306c 	ldr	r3, [r4, #108]
        271584:	e1a01003 	mov	r1, r3
        271588:	e0833fa3 	add	r3, r3, r3, lsr #31
        27158c:	e1a030c3 	mov	r3, r3, asr #1
        271590:	e1530000 	cmp	r3, r0
        271594:	b1500081 	cmplt	r0, r1, lsl #1
        271598:	b5520014 	ldrltb	r0, [r2, -#20]
        27159c:	b3800008 	orrlt	r0, r0, #8	; 0x8
        2715a0:	b5420014 	strltb	r0, [r2, -#20]
        2715a4:	e59d010c 	ldr	r0, [sp, #268]
        2715a8:	e59d111c 	ldr	r1, [sp, #284]
        2715ac:	e0800001 	add	r0, r0, r1
        2715b0:	e58400b0 	str	r0, [r4, #176]
        2715b4:	e51b102c 	ldr	r1, [fp, -#44]
        2715b8:	e5c10000 	strb	r0, [r1]
        2715bc:	e59d010c 	ldr	r0, [sp, #268]
        2715c0:	e51b102c 	ldr	r1, [fp, -#44]
        2715c4:	e5c10001 	strb	r0, [r1, #1]
        2715c8:	e5b40070 	ldr	r0, [r4, #112]!
        2715cc:	e59dc104 	ldr	ip, [sp, #260]
        2715d0:	e080000c 	add	r0, r0, ip
        2715d4:	e51b102c 	ldr	r1, [fp, -#44]
        2715d8:	e5c10002 	strb	r0, [r1, #2]
        2715dc:	e59d0000 	ldr	r0, [sp]
        2715e0:	e3300000 	teq	r0, #0	; 0x0
        2715e4:	159d0000 	ldrne	r0, [sp]
        2715e8:	1b5ff874 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        2715ec:	e3a00000 	mov	r0, #0	; 0x0
        2715f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WS_GetStrokeBoxAndSlope(ws_data_type *)
 * Address: 002715f4
 */
WS_GetStrokeBoxAndSlope(ws_data_type *) {
    /*
        2715f4:	e1a0c00d 	mov	ip, sp
        2715f8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2715fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        271600:	e24dd024 	sub	sp, sp, #36	; 0x24
        271604:	e1a04000 	mov	r4, r0
        271608:	e5b0306c 	ldr	r3, [r0, #108]!
        27160c:	e3530000 	cmp	r3, #0	; 0x0
        271610:	b283300f 	addlt	r3, r3, #15	; 0xf
        271614:	e1a03243 	mov	r3, r3, asr #4
        271618:	e58d3010 	str	r3, [sp, #16]
        27161c:	e3530003 	cmp	r3, #3	; 0x3
        271620:	b3a03003 	movlt	r3, #3	; 0x3
        271624:	b58d3010 	strlt	r3, [sp, #16]
        271628:	e5940024 	ldr	r0, [r4, #36]
        27162c:	e5949000 	ldr	r9, [r4]
        271630:	e3a07ef6 	mov	r7, #3936	; 0xf60
        271634:	e2877a01 	add	r7, r7, #4096	; 0x1000
        271638:	e58d0020 	str	r0, [sp, #32]
        27163c:	e3a00000 	mov	r0, #0	; 0x0
        271640:	e58d001c 	str	r0, [sp, #28]
        271644:	e58d7018 	str	r7, [sp, #24]
        271648:	e3a01000 	mov	r1, #0	; 0x0
        27164c:	e3a02000 	mov	r2, #0	; 0x0
        271650:	e58d0014 	str	r0, [sp, #20]
        271654:	e58d100c 	str	r1, [sp, #12]
        271658:	e58d2008 	str	r2, [sp, #8]
        27165c:	e58d0004 	str	r0, [sp, #4]
        271660:	e3a05000 	mov	r5, #0	; 0x0
        271664:	e3a0a000 	mov	sl, #0	; 0x0
        271668:	e58d0000 	str	r0, [sp]
        27166c:	e59d0020 	ldr	r0, [sp, #32]
        271670:	e3500000 	cmp	r0, #0	; 0x0
        271674:	da000098 	ble	2718dc <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x2e8>
        271678:	e7991105 	ldr	r1, [r9, r5, lsl #2]
        27167c:	e1a01841 	mov	r1, r1, asr #16
        271680:	e0890105 	add	r0, r9, r5, lsl #2
        271684:	e5900002 	ldr	r0, [r0, #2]
        271688:	e1b00840 	movs	r0, r0, asr #16
        27168c:	4a000038 	bmi	271774 <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x180>
        271690:	e59d200c 	ldr	r2, [sp, #12]
        271694:	e0822001 	add	r2, r2, r1
        271698:	e58d200c 	str	r2, [sp, #12]
        27169c:	e59d2008 	ldr	r2, [sp, #8]
        2716a0:	e0822000 	add	r2, r2, r0
        2716a4:	e58d2008 	str	r2, [sp, #8]
        2716a8:	e59d2014 	ldr	r2, [sp, #20]
        2716ac:	e1500002 	cmp	r0, r2
        2716b0:	c58d0014 	strgt	r0, [sp, #20]
        2716b4:	e59d2018 	ldr	r2, [sp, #24]
        2716b8:	e1500002 	cmp	r0, r2
        2716bc:	b58d0018 	strlt	r0, [sp, #24]
        2716c0:	e59d201c 	ldr	r2, [sp, #28]
        2716c4:	e1510002 	cmp	r1, r2
        2716c8:	c58d101c 	strgt	r1, [sp, #28]
        2716cc:	e1510007 	cmp	r1, r7
        2716d0:	b1a07001 	movlt	r7, r1
        2716d4:	e799210a 	ldr	r2, [r9, sl, lsl #2]
        2716d8:	e1a02842 	mov	r2, r2, asr #16
        2716dc:	e0518002 	subs	r8, r1, r2
        2716e0:	42681000 	rsbmi	r1, r8, #0	; 0x0
        2716e4:	51a01008 	movpl	r1, r8
        2716e8:	e089210a 	add	r2, r9, sl, lsl #2
        2716ec:	e5922002 	ldr	r2, [r2, #2]
        2716f0:	e0400842 	sub	r0, r0, r2, asr #16
        2716f4:	e2706000 	rsbs	r6, r0, #0	; 0x0
        2716f8:	42660000 	rsbmi	r0, r6, #0	; 0x0
        2716fc:	51a00006 	movpl	r0, r6
        271700:	e0802001 	add	r2, r0, r1
        271704:	e59d3010 	ldr	r3, [sp, #16]
        271708:	e1520003 	cmp	r2, r3
        27170c:	da000014 	ble	271764 <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x170>
        271710:	e1a0a005 	mov	sl, r5
        271714:	e3360000 	teq	r6, #0	; 0x0
        271718:	0a000011 	beq	271764 <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x170>
        27171c:	e081c181 	add	ip, r1, r1, lsl #3
        271720:	e08c1201 	add	r1, ip, r1, lsl #4
        271724:	e1a01101 	mov	r1, r1, lsl #2
        271728:	eb650484 	bl	1bb2940 <$__rt_sdiv>
        27172c:	e3500064 	cmp	r0, #100	; 0x64
        271730:	ca00000b 	bgt	271764 <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x170>
        271734:	e3560000 	cmp	r6, #0	; 0x0
        271738:	aa000003 	bge	27174c <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x158>
        27173c:	e1a00186 	mov	r0, r6, lsl #3
        271740:	e2606000 	rsb	r6, r0, #0	; 0x0
        271744:	e1a00188 	mov	r0, r8, lsl #3
        271748:	e2608000 	rsb	r8, r0, #0	; 0x0
        27174c:	e59d0004 	ldr	r0, [sp, #4]
        271750:	e0800008 	add	r0, r0, r8
        271754:	e58d0004 	str	r0, [sp, #4]
        271758:	e59d0000 	ldr	r0, [sp]
        27175c:	e0800006 	add	r0, r0, r6
        271760:	e58d0000 	str	r0, [sp]
        271764:	e2855001 	add	r5, r5, #1	; 0x1
        271768:	e59d0020 	ldr	r0, [sp, #32]
        27176c:	e1550000 	cmp	r5, r0
        271770:	baffffc0 	blt	271678 <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x84>
        271774:	e3350000 	teq	r5, #0	; 0x0
        271778:	0a000057 	beq	2718dc <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x2e8>
        27177c:	e2844024 	add	r4, r4, #36	; 0x24
        271780:	e88400a0 	stmia	r4, {r5, r7}
        271784:	e2444024 	sub	r4, r4, #36	; 0x24
        271788:	e59d101c 	ldr	r1, [sp, #28]
        27178c:	e2816001 	add	r6, r1, #1	; 0x1
        271790:	e584602c 	str	r6, [r4, #44]
        271794:	e59d0018 	ldr	r0, [sp, #24]
        271798:	e5840030 	str	r0, [r4, #48]
        27179c:	e59d0014 	ldr	r0, [sp, #20]
        2717a0:	e2800001 	add	r0, r0, #1	; 0x1
        2717a4:	e5840034 	str	r0, [r4, #52]
        2717a8:	e594003c 	ldr	r0, [r4, #60]
        2717ac:	e5840058 	str	r0, [r4, #88]
        2717b0:	e5940038 	ldr	r0, [r4, #56]
        2717b4:	e5840054 	str	r0, [r4, #84]
        2717b8:	e28d2014 	add	r2, sp, #20	; 0x14
        2717bc:	e8920005 	ldmia	r2, {r0, r2}
        2717c0:	e0400002 	sub	r0, r0, r2
        2717c4:	e2800001 	add	r0, r0, #1	; 0x1
        2717c8:	e584003c 	str	r0, [r4, #60]
        2717cc:	e59d101c 	ldr	r1, [sp, #28]
        2717d0:	e0410007 	sub	r0, r1, r7
        2717d4:	e2800001 	add	r0, r0, #1	; 0x1
        2717d8:	e5840038 	str	r0, [r4, #56]
        2717dc:	e1a00005 	mov	r0, r5
        2717e0:	e59d100c 	ldr	r1, [sp, #12]
        2717e4:	eb650455 	bl	1bb2940 <$__rt_sdiv>
        2717e8:	e5840040 	str	r0, [r4, #64]
        2717ec:	e1a00005 	mov	r0, r5
        2717f0:	e59d1008 	ldr	r1, [sp, #8]
        2717f4:	eb650451 	bl	1bb2940 <$__rt_sdiv>
        2717f8:	e5840044 	str	r0, [r4, #68]
        2717fc:	e594008c 	ldr	r0, [r4, #140]
        271800:	e0840180 	add	r0, r4, r0, lsl #3
        271804:	e5c07cc5 	strb	r7, [r0, #3269]
        271808:	e1a01447 	mov	r1, r7, asr #8
        27180c:	e5c01cc4 	strb	r1, [r0, #3268]
        271810:	e594008c 	ldr	r0, [r4, #140]
        271814:	e0840180 	add	r0, r4, r0, lsl #3
        271818:	e5c06cc7 	strb	r6, [r0, #3271]
        27181c:	e1a01446 	mov	r1, r6, asr #8
        271820:	e5c01cc6 	strb	r1, [r0, #3270]
        271824:	e5940030 	ldr	r0, [r4, #48]
        271828:	e594108c 	ldr	r1, [r4, #140]
        27182c:	e0841181 	add	r1, r4, r1, lsl #3
        271830:	e5c10cc9 	strb	r0, [r1, #3273]
        271834:	e1a00440 	mov	r0, r0, asr #8
        271838:	e5c10cc8 	strb	r0, [r1, #3272]
        27183c:	e5940024 	ldr	r0, [r4, #36]
        271840:	e350000a 	cmp	r0, #10	; 0xa
        271844:	ba000014 	blt	27189c <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x2a8>
        271848:	e59d0000 	ldr	r0, [sp]
        27184c:	e35000a0 	cmp	r0, #160	; 0xa0
        271850:	da000011 	ble	27189c <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x2a8>
        271854:	e59400f0 	ldr	r0, [r4, #240]
        271858:	e59d1004 	ldr	r1, [sp, #4]
        27185c:	e0800001 	add	r0, r0, r1
        271860:	e58400f0 	str	r0, [r4, #240]
        271864:	e59410f4 	ldr	r1, [r4, #244]
        271868:	e59d2000 	ldr	r2, [sp]
        27186c:	e0815002 	add	r5, r1, r2
        271870:	e0801180 	add	r1, r0, r0, lsl #3
        271874:	e0811200 	add	r1, r1, r0, lsl #4
        271878:	e1a01101 	mov	r1, r1, lsl #2
        27187c:	e58450f4 	str	r5, [r4, #244]
        271880:	e1a00005 	mov	r0, r5
        271884:	eb65042d 	bl	1bb2940 <$__rt_sdiv>
        271888:	e3550f7d 	cmp	r5, #500	; 0x1f4
        27188c:	e58400ec 	str	r0, [r4, #236]
        271890:	b0800fa0 	addlt	r0, r0, r0, lsr #31
        271894:	b1a000c0 	movlt	r0, r0, asr #1
        271898:	b58400ec 	strlt	r0, [r4, #236]
        27189c:	e594106c 	ldr	r1, [r4, #108]
        2718a0:	e3510000 	cmp	r1, #0	; 0x0
        2718a4:	e594003c 	ldr	r0, [r4, #60]
        2718a8:	b2811003 	addlt	r1, r1, #3	; 0x3
        2718ac:	e1500141 	cmp	r0, r1, asr #2
        2718b0:	da000007 	ble	2718d4 <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x2e0>
        2718b4:	e59410d8 	ldr	r1, [r4, #216]
        2718b8:	e0811000 	add	r1, r1, r0
        2718bc:	e58410d8 	str	r1, [r4, #216]
        2718c0:	e59400dc 	ldr	r0, [r4, #220]
        2718c4:	e2800001 	add	r0, r0, #1	; 0x1
        2718c8:	e58400dc 	str	r0, [r4, #220]
        2718cc:	eb65041b 	bl	1bb2940 <$__rt_sdiv>
        2718d0:	e5a400e0 	str	r0, [r4, #224]!
        2718d4:	e3a00000 	mov	r0, #0	; 0x0
        2718d8:	ea000000 	b	2718e0 <WS_GetStrokeBoxAndSlope(ws_data_type *)+0x2ec>
        2718dc:	e3a00001 	mov	r0, #1	; 0x1
        2718e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WS_NewLine(ws_data_type *)
 * Address: 002718e4
 */
WS_NewLine(ws_data_type *) {
    /*
        2718e4:	e1a0c00d 	mov	ip, sp
        2718e8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2718ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2718f0:	e3a01000 	mov	r1, #0	; 0x0
        2718f4:	e1a04000 	mov	r4, r0
        2718f8:	e52d1018 	str	r1, [sp, -#24]!
        2718fc:	e5900028 	ldr	r0, [r0, #40]
        271900:	e3500000 	cmp	r0, #0	; 0x0
        271904:	b280000f 	addlt	r0, r0, #15	; 0xf
        271908:	e1a00240 	mov	r0, r0, asr #4
        27190c:	e0840080 	add	r0, r4, r0, lsl #1
        271910:	e59018d8 	ldr	r1, [r0, #2264]
        271914:	e1a01841 	mov	r1, r1, asr #16
        271918:	e58d1004 	str	r1, [sp, #4]
        27191c:	e3510000 	cmp	r1, #0	; 0x0
        271920:	da00009d 	ble	271b9c <WS_NewLine(ws_data_type *)+0x2b8>
        271924:	e1a00004 	mov	r0, r4
        271928:	eb62b162 	bl	1b1deb8 <$CheckForSpaceGesture(ws_data_type *)>
        27192c:	e3300000 	teq	r0, #0	; 0x0
        271930:	0a000099 	beq	271b9c <WS_NewLine(ws_data_type *)+0x2b8>
        271934:	e5940064 	ldr	r0, [r4, #100]
        271938:	e5941084 	ldr	r1, [r4, #132]
        27193c:	e0413080 	sub	r3, r1, r0, lsl #1
        271940:	e5942028 	ldr	r2, [r4, #40]
        271944:	e0439002 	sub	r9, r3, r2
        271948:	e0899fa9 	add	r9, r9, r9, lsr #31
        27194c:	e1a090c9 	mov	r9, r9, asr #1
        271950:	e594606c 	ldr	r6, [r4, #108]
        271954:	e58d6014 	str	r6, [sp, #20]
        271958:	e2662000 	rsb	r2, r6, #0	; 0x0
        27195c:	e1520009 	cmp	r2, r9
        271960:	c1a09002 	movgt	r9, r2
        271964:	e1560009 	cmp	r6, r9
        271968:	b1a09006 	movlt	r9, r6
        27196c:	e0411000 	sub	r1, r1, r0
        271970:	e594002c 	ldr	r0, [r4, #44]
        271974:	e0410000 	sub	r0, r1, r0
        271978:	e0800fa0 	add	r0, r0, r0, lsr #31
        27197c:	e1b000c0 	movs	r0, r0, asr #1
        271980:	e58d0008 	str	r0, [sp, #8]
        271984:	43a00000 	movmi	r0, #0	; 0x0
        271988:	458d0008 	strmi	r0, [sp, #8]
        27198c:	e59d0008 	ldr	r0, [sp, #8]
        271990:	e1560000 	cmp	r6, r0
        271994:	b58d6008 	strlt	r6, [sp, #8]
        271998:	e0860fa6 	add	r0, r6, r6, lsr #31
        27199c:	e59d1004 	ldr	r1, [sp, #4]
        2719a0:	e08100c0 	add	r0, r1, r0, asr #1
        2719a4:	e5941030 	ldr	r1, [r4, #48]
        2719a8:	e0400001 	sub	r0, r0, r1
        2719ac:	e090a080 	adds	sl, r0, r0, lsl #1
        2719b0:	43a0a000 	movmi	sl, #0	; 0x0
        2719b4:	e156000a 	cmp	r6, sl
        2719b8:	b1a0a006 	movlt	sl, r6
        2719bc:	e594003c 	ldr	r0, [r4, #60]
        2719c0:	e5948038 	ldr	r8, [r4, #56]
        2719c4:	e58d0010 	str	r0, [sp, #16]
        2719c8:	e1580000 	cmp	r8, r0
        2719cc:	c3a0a000 	movgt	sl, #0	; 0x0
        2719d0:	e0865086 	add	r5, r6, r6, lsl #1
        2719d4:	e1a07086 	mov	r7, r6, lsl #1
        2719d8:	e58d500c 	str	r5, [sp, #12]
        2719dc:	e59d0010 	ldr	r0, [sp, #16]
        2719e0:	e1500006 	cmp	r0, r6
        2719e4:	aa00000a 	bge	271a14 <WS_NewLine(ws_data_type *)+0x130>
        2719e8:	e1a01007 	mov	r1, r7
        2719ec:	e3a00003 	mov	r0, #3	; 0x3
        2719f0:	eb6503d2 	bl	1bb2940 <$__rt_sdiv>
        2719f4:	e0807007 	add	r7, r0, r7
        2719f8:	e5940068 	ldr	r0, [r4, #104]
        2719fc:	e1580000 	cmp	r8, r0
        271a00:	aa000003 	bge	271a14 <WS_NewLine(ws_data_type *)+0x130>
        271a04:	e1a01007 	mov	r1, r7
        271a08:	e3a00003 	mov	r0, #3	; 0x3
        271a0c:	eb6503cb 	bl	1bb2940 <$__rt_sdiv>
        271a10:	e0807007 	add	r7, r0, r7
        271a14:	e5940068 	ldr	r0, [r4, #104]
        271a18:	e1580000 	cmp	r8, r0
        271a1c:	aa000003 	bge	271a30 <WS_NewLine(ws_data_type *)+0x14c>
        271a20:	e1a01005 	mov	r1, r5
        271a24:	e3a00003 	mov	r0, #3	; 0x3
        271a28:	eb6503c4 	bl	1bb2940 <$__rt_sdiv>
        271a2c:	e0805005 	add	r5, r0, r5
        271a30:	e59d0010 	ldr	r0, [sp, #16]
        271a34:	e1500006 	cmp	r0, r6
        271a38:	aa000003 	bge	271a4c <WS_NewLine(ws_data_type *)+0x168>
        271a3c:	e1a01005 	mov	r1, r5
        271a40:	e3a00003 	mov	r0, #3	; 0x3
        271a44:	eb6503bd 	bl	1bb2940 <$__rt_sdiv>
        271a48:	e0805005 	add	r5, r0, r5
        271a4c:	e594c024 	ldr	ip, [r4, #36]
        271a50:	e35c0064 	cmp	ip, #100	; 0x64
        271a54:	aa000024 	bge	271aec <WS_NewLine(ws_data_type *)+0x208>
        271a58:	e3a00001 	mov	r0, #1	; 0x1
        271a5c:	e3a01000 	mov	r1, #0	; 0x0
        271a60:	e35c0001 	cmp	ip, #1	; 0x1
        271a64:	da000010 	ble	271aac <WS_NewLine(ws_data_type *)+0x1c8>
        271a68:	e5942000 	ldr	r2, [r4]
        271a6c:	e792e100 	ldr	lr, [r2, r0, lsl #2]
        271a70:	e1a0e84e 	mov	lr, lr, asr #16
        271a74:	e0823100 	add	r3, r2, r0, lsl #2
        271a78:	e5136004 	ldr	r6, [r3, -#4]
        271a7c:	e05ee846 	subs	lr, lr, r6, asr #16
        271a80:	426ee000 	rsbmi	lr, lr, #0	; 0x0
        271a84:	e5936002 	ldr	r6, [r3, #2]
        271a88:	e1a06846 	mov	r6, r6, asr #16
        271a8c:	e5133002 	ldr	r3, [r3, -#2]
        271a90:	e0563843 	subs	r3, r6, r3, asr #16
        271a94:	42633000 	rsbmi	r3, r3, #0	; 0x0
        271a98:	e08e3003 	add	r3, lr, r3
        271a9c:	e0831001 	add	r1, r3, r1
        271aa0:	e2800001 	add	r0, r0, #1	; 0x1
        271aa4:	e15c0000 	cmp	ip, r0
        271aa8:	caffffef 	bgt	271a6c <WS_NewLine(ws_data_type *)+0x188>
        271aac:	e59d0010 	ldr	r0, [sp, #16]
        271ab0:	e0880000 	add	r0, r8, r0
        271ab4:	e0800080 	add	r0, r0, r0, lsl #1
        271ab8:	e1500081 	cmp	r0, r1, lsl #1
        271abc:	ba00000a 	blt	271aec <WS_NewLine(ws_data_type *)+0x208>
        271ac0:	e59d0014 	ldr	r0, [sp, #20]
        271ac4:	e1580080 	cmp	r8, r0, lsl #1
        271ac8:	b28d1010 	addlt	r1, sp, #16	; 0x10
        271acc:	b8910003 	ldmltia	r1, {r0, r1}
        271ad0:	b1500081 	cmplt	r0, r1, lsl #1
        271ad4:	aa000013 	bge	271b28 <WS_NewLine(ws_data_type *)+0x244>
        271ad8:	e1a01005 	mov	r1, r5
        271adc:	e3a00003 	mov	r0, #3	; 0x3
        271ae0:	eb650396 	bl	1bb2940 <$__rt_sdiv>
        271ae4:	e0805005 	add	r5, r0, r5
        271ae8:	ea00000e 	b	271b28 <WS_NewLine(ws_data_type *)+0x244>
        271aec:	e59d000c 	ldr	r0, [sp, #12]
        271af0:	e1580000 	cmp	r8, r0
        271af4:	da000003 	ble	271b08 <WS_NewLine(ws_data_type *)+0x224>
        271af8:	e1a01005 	mov	r1, r5
        271afc:	e3a00003 	mov	r0, #3	; 0x3
        271b00:	eb65038e 	bl	1bb2940 <$__rt_sdiv>
        271b04:	e0455000 	sub	r5, r5, r0
        271b08:	e59d0014 	ldr	r0, [sp, #20]
        271b0c:	e0800100 	add	r0, r0, r0, lsl #2
        271b10:	e1580000 	cmp	r8, r0
        271b14:	da000003 	ble	271b28 <WS_NewLine(ws_data_type *)+0x244>
        271b18:	e1a01005 	mov	r1, r5
        271b1c:	e3a00003 	mov	r0, #3	; 0x3
        271b20:	eb650386 	bl	1bb2940 <$__rt_sdiv>
        271b24:	e0455000 	sub	r5, r5, r0
        271b28:	e0450009 	sub	r0, r5, r9
        271b2c:	e0471009 	sub	r1, r7, r9
        271b30:	e59d2008 	ldr	r2, [sp, #8]
        271b34:	e0411002 	sub	r1, r1, r2
        271b38:	e081100a 	add	r1, r1, sl
        271b3c:	e59d2014 	ldr	r2, [sp, #20]
        271b40:	e1b06002 	movs	r6, r2
        271b44:	42866003 	addmi	r6, r6, #3	; 0x3
        271b48:	e0822146 	add	r2, r2, r6, asr #2
        271b4c:	e1500002 	cmp	r0, r2
        271b50:	b1a00002 	movlt	r0, r2
        271b54:	e1510002 	cmp	r1, r2
        271b58:	b1a01002 	movlt	r1, r2
        271b5c:	e594200c 	ldr	r2, [r4, #12]
        271b60:	e3520000 	cmp	r2, #0	; 0x0
        271b64:	c1a00002 	movgt	r0, r2
        271b68:	c1a01002 	movgt	r1, r2
        271b6c:	e5b43034 	ldr	r3, [r4, #52]!
        271b70:	e5942010 	ldr	r2, [r4, #16]
        271b74:	e0823003 	add	r3, r2, r3
        271b78:	e0833fa3 	add	r3, r3, r3, lsr #31
        271b7c:	e59dc004 	ldr	ip, [sp, #4]
        271b80:	e04c0000 	sub	r0, ip, r0
        271b84:	e15000c3 	cmp	r0, r3, asr #1
        271b88:	ca000003 	bgt	271b9c <WS_NewLine(ws_data_type *)+0x2b8>
        271b8c:	e59dc004 	ldr	ip, [sp, #4]
        271b90:	e08c0001 	add	r0, ip, r1
        271b94:	e1500002 	cmp	r0, r2
        271b98:	aa000001 	bge	271ba4 <WS_NewLine(ws_data_type *)+0x2c0>
        271b9c:	e3a00001 	mov	r0, #1	; 0x1
        271ba0:	e58d0000 	str	r0, [sp]
        271ba4:	e49d0018 	ldr	r0, [sp], #24
        271ba8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WS_WriteStrokeHorzValues(ws_data_type *)
 * Address: 00271c2c
 */
WS_WriteStrokeHorzValues(ws_data_type *) {
    /*
        271c2c:	e92d4010 	stmdb	sp!, {r4, lr}
        271c30:	e5901028 	ldr	r1, [r0, #40]
        271c34:	e3510000 	cmp	r1, #0	; 0x0
        271c38:	b281100f 	addlt	r1, r1, #15	; 0xf
        271c3c:	e1a01241 	mov	r1, r1, asr #4
        271c40:	e0801081 	add	r1, r0, r1, lsl #1
        271c44:	e59118d8 	ldr	r1, [r1, #2264]
        271c48:	e1a01841 	mov	r1, r1, asr #16
        271c4c:	e590e06c 	ldr	lr, [r0, #108]
        271c50:	e1a0300e 	mov	r3, lr
        271c54:	e08eefae 	add	lr, lr, lr, lsr #31
        271c58:	e590c03c 	ldr	ip, [r0, #60]
        271c5c:	e15c00ce 	cmp	ip, lr, asr #1
        271c60:	e5902044 	ldr	r2, [r0, #68]
        271c64:	aa000005 	bge	271c80 <WS_WriteStrokeHorzValues(ws_data_type *)+0x54>
        271c68:	e3510000 	cmp	r1, #0	; 0x0
        271c6c:	da000003 	ble	271c80 <WS_WriteStrokeHorzValues(ws_data_type *)+0x54>
        271c70:	e081e081 	add	lr, r1, r1, lsl #1
        271c74:	e09e2002 	adds	r2, lr, r2
        271c78:	42822003 	addmi	r2, r2, #3	; 0x3
        271c7c:	e1a02142 	mov	r2, r2, asr #2
        271c80:	e3510000 	cmp	r1, #0	; 0x0
        271c84:	da000006 	ble	271ca4 <WS_WriteStrokeHorzValues(ws_data_type *)+0x78>
        271c88:	e590407c 	ldr	r4, [r0, #124]
        271c8c:	e590e064 	ldr	lr, [r0, #100]
        271c90:	e044e00e 	sub	lr, r4, lr
        271c94:	e590402c 	ldr	r4, [r0, #44]
        271c98:	e15e0004 	cmp	lr, r4
        271c9c:	c3a00001 	movgt	r0, #1	; 0x1
        271ca0:	c8bd8010 	ldmgtia	sp!, {r4, pc}
        271ca4:	e3510000 	cmp	r1, #0	; 0x0
        271ca8:	da00000c 	ble	271ce0 <WS_WriteStrokeHorzValues(ws_data_type *)+0xb4>
        271cac:	e15c0003 	cmp	ip, r3
        271cb0:	a5903038 	ldrge	r3, [r0, #56]
        271cb4:	a590c068 	ldrge	ip, [r0, #104]
        271cb8:	a153000c 	cmpge	r3, ip
        271cbc:	aa000004 	bge	271cd4 <WS_WriteStrokeHorzValues(ws_data_type *)+0xa8>
        271cc0:	e0811081 	add	r1, r1, r1, lsl #1
        271cc4:	e0912002 	adds	r2, r1, r2
        271cc8:	42822003 	addmi	r2, r2, #3	; 0x3
        271ccc:	e1a02142 	mov	r2, r2, asr #2
        271cd0:	ea000002 	b	271ce0 <WS_WriteStrokeHorzValues(ws_data_type *)+0xb4>
        271cd4:	e0812002 	add	r2, r1, r2
        271cd8:	e0822fa2 	add	r2, r2, r2, lsr #31
        271cdc:	e1a020c2 	mov	r2, r2, asr #1
        271ce0:	e590102c 	ldr	r1, [r0, #44]
        271ce4:	e2511001 	subs	r1, r1, #1	; 0x1
        271ce8:	e1a03802 	mov	r3, r2, lsl #16
        271cec:	e1a03843 	mov	r3, r3, asr #16
        271cf0:	4a000012 	bmi	271d40 <WS_WriteStrokeHorzValues(ws_data_type *)+0x114>
        271cf4:	e1b0c001 	movs	ip, r1
        271cf8:	428cc00f 	addmi	ip, ip, #15	; 0xf
        271cfc:	e1a0c24c 	mov	ip, ip, asr #4
        271d00:	e080c08c 	add	ip, r0, ip, lsl #1
        271d04:	e59cc8d8 	ldr	ip, [ip, #2264]
        271d08:	e1b0c84c 	movs	ip, ip, asr #16
        271d0c:	0a000002 	beq	271d1c <WS_WriteStrokeHorzValues(ws_data_type *)+0xf0>
        271d10:	e590c028 	ldr	ip, [r0, #40]
        271d14:	e15c0001 	cmp	ip, r1
        271d18:	ca000008 	bgt	271d40 <WS_WriteStrokeHorzValues(ws_data_type *)+0x114>
        271d1c:	e1b0c001 	movs	ip, r1
        271d20:	428cc00f 	addmi	ip, ip, #15	; 0xf
        271d24:	e1a0c24c 	mov	ip, ip, asr #4
        271d28:	e080c08c 	add	ip, r0, ip, lsl #1
        271d2c:	e5cc38d9 	strb	r3, [ip, #2265]
        271d30:	e1a0e443 	mov	lr, r3, asr #8
        271d34:	e5cce8d8 	strb	lr, [ip, #2264]
        271d38:	e2511010 	subs	r1, r1, #16	; 0x10
        271d3c:	5affffec 	bpl	271cf4 <WS_WriteStrokeHorzValues(ws_data_type *)+0xc8>
        271d40:	e590106c 	ldr	r1, [r0, #108]
        271d44:	e0811081 	add	r1, r1, r1, lsl #1
        271d48:	e590302c 	ldr	r3, [r0, #44]
        271d4c:	e0831081 	add	r1, r3, r1, lsl #1
        271d50:	e3a0eef6 	mov	lr, #3936	; 0xf60
        271d54:	e28eea01 	add	lr, lr, #4096	; 0x1000
        271d58:	e151000e 	cmp	r1, lr
        271d5c:	c1a0100e 	movgt	r1, lr
        271d60:	e1530001 	cmp	r3, r1
        271d64:	aa00000b 	bge	271d98 <WS_WriteStrokeHorzValues(ws_data_type *)+0x16c>
        271d68:	e1a02802 	mov	r2, r2, lsl #16
        271d6c:	e1a02842 	mov	r2, r2, asr #16
        271d70:	e1b0c003 	movs	ip, r3
        271d74:	428cc00f 	addmi	ip, ip, #15	; 0xf
        271d78:	e1a0c24c 	mov	ip, ip, asr #4
        271d7c:	e080c08c 	add	ip, r0, ip, lsl #1
        271d80:	e5cc28d9 	strb	r2, [ip, #2265]
        271d84:	e1a0e442 	mov	lr, r2, asr #8
        271d88:	e5cce8d8 	strb	lr, [ip, #2264]
        271d8c:	e2833010 	add	r3, r3, #16	; 0x10
        271d90:	e1530001 	cmp	r3, r1
        271d94:	bafffff5 	blt	271d70 <WS_WriteStrokeHorzValues(ws_data_type *)+0x144>
        271d98:	e3a00000 	mov	r0, #0	; 0x0
        271d9c:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: WalkEachBlock
 * Address: 00272288
 */
void globals::WalkEachBlock() {
    /*
        272288:	e1a0c00d 	mov	ip, sp
        27228c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        272290:	e24cb004 	sub	fp, ip, #4	; 0x4
        272294:	e1a04000 	mov	r4, r0
        272298:	e1a05001 	mov	r5, r1
        27229c:	e1a06002 	mov	r6, r2
        2722a0:	e1a07003 	mov	r7, r3
        2722a4:	e3a0a001 	mov	sl, #1	; 0x1
        2722a8:	e5908000 	ldr	r8, [r0]
        2722ac:	e5900004 	ldr	r0, [r0, #4]
        2722b0:	e1500008 	cmp	r0, r8
        2722b4:	9a00008a 	bls	2724e4 <WalkEachBlock+0x25c>
        2722b8:	e3350000 	teq	r5, #0	; 0x0
        2722bc:	15858000 	strne	r8, [r5]
        2722c0:	e5d80000 	ldrb	r0, [r8]
        2722c4:	e1a01000 	mov	r1, r0
        2722c8:	e3100080 	tst	r0, #128	; 0x80
        2722cc:	1a000033 	bne	2723a0 <WalkEachBlock+0x118>
        2722d0:	e33a0000 	teq	sl, #0	; 0x0
        2722d4:	13e000d3 	mvnne	r0, #211	; 0xd3
        2722d8:	12400b21 	subne	r0, r0, #33792	; 0x8400
        2722dc:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2722e0:	e3310000 	teq	r1, #0	; 0x0
        2722e4:	05980000 	ldreq	r0, [r8]
        2722e8:	02001003 	andeq	r1, r0, #3	; 0x3
        2722ec:	03310000 	teqeq	r1, #0	; 0x0
        2722f0:	13e000d7 	mvnne	r0, #215	; 0xd7
        2722f4:	12400b21 	subne	r0, r0, #33792	; 0x8400
        2722f8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2722fc:	e3500010 	cmp	r0, #16	; 0x10
        272300:	33e000d8 	mvncc	r0, #216	; 0xd8
        272304:	32400b21 	subcc	r0, r0, #33792	; 0x8400
        272308:	391baff0 	ldmccdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        27230c:	e3500201 	cmp	r0, #268435456	; 0x10000000
        272310:	c3e000d9 	mvngt	r0, #217	; 0xd9
        272314:	c2400b21 	subgt	r0, r0, #33792	; 0x8400
        272318:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        27231c:	e5981004 	ldr	r1, [r8, #4]
        272320:	e3310000 	teq	r1, #0	; 0x0
        272324:	0a000004 	beq	27233c <WalkEachBlock+0xb4>
        272328:	e1a00004 	mov	r0, r4
        27232c:	e3a02001 	mov	r2, #1	; 0x1
        272330:	eb641629 	bl	1b77bdc <$CheckPointer>
        272334:	e3300000 	teq	r0, #0	; 0x0
        272338:	1a000007 	bne	27235c <WalkEachBlock+0xd4>
        27233c:	e5981008 	ldr	r1, [r8, #8]
        272340:	e3310000 	teq	r1, #0	; 0x0
        272344:	0a000007 	beq	272368 <WalkEachBlock+0xe0>
        272348:	e1a00004 	mov	r0, r4
        27234c:	e3a02001 	mov	r2, #1	; 0x1
        272350:	eb641621 	bl	1b77bdc <$CheckPointer>
        272354:	e3300000 	teq	r0, #0	; 0x0
        272358:	0a000002 	beq	272368 <WalkEachBlock+0xe0>
        27235c:	e3e000d4 	mvn	r0, #212	; 0xd4
        272360:	e2400b21 	sub	r0, r0, #33792	; 0x8400
        272364:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272368:	e5980000 	ldr	r0, [r8]
        27236c:	e0889000 	add	r9, r8, r0
        272370:	e3a0a001 	mov	sl, #1	; 0x1
        272374:	e3360000 	teq	r6, #0	; 0x0
        272378:	0a00004d 	beq	2724b4 <WalkEachBlock+0x22c>
        27237c:	e1a03005 	mov	r3, r5
        272380:	e1a01008 	mov	r1, r8
        272384:	e1a00007 	mov	r0, r7
        272388:	e3a02007 	mov	r2, #7	; 0x7
        27238c:	e1a0e00f 	mov	lr, pc
        272390:	e1a0f006 	mov	pc, r6
        272394:	e3300000 	teq	r0, #0	; 0x0
        272398:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        27239c:	ea000044 	b	2724b4 <WalkEachBlock+0x22c>
        2723a0:	e2001003 	and	r1, r0, #3	; 0x3
        2723a4:	e3310001 	teq	r1, #1	; 0x1
        2723a8:	1a000029 	bne	272454 <WalkEachBlock+0x1cc>
        2723ac:	e1a09008 	mov	r9, r8
        2723b0:	e3100010 	tst	r0, #16	; 0x10
        2723b4:	0a000015 	beq	272410 <WalkEachBlock+0x188>
        2723b8:	e5d90002 	ldrb	r0, [r9, #2]
        2723bc:	e33000ff 	teq	r0, #255	; 0xff
        2723c0:	1a000012 	bne	272410 <WalkEachBlock+0x188>
        2723c4:	e5d90003 	ldrb	r0, [r9, #3]
        2723c8:	e3500005 	cmp	r0, #5	; 0x5
        2723cc:	908ff100 	addls	pc, pc, r0, lsl #2
        2723d0:	ea00000b 	b	272404 <WalkEachBlock+0x17c>
        2723d4:	ea00000a 	b	272404 <WalkEachBlock+0x17c>
        2723d8:	ea000012 	b	272428 <WalkEachBlock+0x1a0>
        2723dc:	ea000011 	b	272428 <WalkEachBlock+0x1a0>
        2723e0:	ea000010 	b	272428 <WalkEachBlock+0x1a0>
        2723e4:	ea00000f 	b	272428 <WalkEachBlock+0x1a0>
        2723e8:	e1a02005 	mov	r2, r5
        2723ec:	e1a01009 	mov	r1, r9
        2723f0:	e1a00004 	mov	r0, r4
        2723f4:	eb641e36 	bl	1b79cd4 <$VetDirBlock>
        2723f8:	e3300000 	teq	r0, #0	; 0x0
        2723fc:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272400:	ea000008 	b	272428 <WalkEachBlock+0x1a0>
        272404:	e3e00e4e 	mvn	r0, #1248	; 0x4e0
        272408:	e2400902 	sub	r0, r0, #32768	; 0x8000
        27240c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272410:	e1a02005 	mov	r2, r5
        272414:	e1a01009 	mov	r1, r9
        272418:	e1a00004 	mov	r0, r4
        27241c:	eb641e2c 	bl	1b79cd4 <$VetDirBlock>
        272420:	e3300000 	teq	r0, #0	; 0x0
        272424:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272428:	e3360000 	teq	r6, #0	; 0x0
        27242c:	0a00001d 	beq	2724a8 <WalkEachBlock+0x220>
        272430:	e1a03005 	mov	r3, r5
        272434:	e1a01008 	mov	r1, r8
        272438:	e1a00007 	mov	r0, r7
        27243c:	e3a02003 	mov	r2, #3	; 0x3
        272440:	e1a0e00f 	mov	lr, pc
        272444:	e1a0f006 	mov	pc, r6
        272448:	e3300000 	teq	r0, #0	; 0x0
        27244c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272450:	ea000014 	b	2724a8 <WalkEachBlock+0x220>
        272454:	e3310002 	teq	r1, #2	; 0x2
        272458:	13a00eb3 	movne	r0, #2864	; 0xb30
        27245c:	12400a09 	subne	r0, r0, #36864	; 0x9000
        272460:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272464:	e1a09008 	mov	r9, r8
        272468:	e1a02005 	mov	r2, r5
        27246c:	e1a01008 	mov	r1, r8
        272470:	e1a00004 	mov	r0, r4
        272474:	eb641e17 	bl	1b79cd8 <$VetDynBlock>
        272478:	e3300000 	teq	r0, #0	; 0x0
        27247c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272480:	e3360000 	teq	r6, #0	; 0x0
        272484:	0a000007 	beq	2724a8 <WalkEachBlock+0x220>
        272488:	e1a03005 	mov	r3, r5
        27248c:	e1a01008 	mov	r1, r8
        272490:	e1a00007 	mov	r0, r7
        272494:	e3a02004 	mov	r2, #4	; 0x4
        272498:	e1a0e00f 	mov	lr, pc
        27249c:	e1a0f006 	mov	pc, r6
        2724a0:	e3300000 	teq	r0, #0	; 0x0
        2724a4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2724a8:	e5990004 	ldr	r0, [r9, #4]
        2724ac:	e0809009 	add	r9, r0, r9
        2724b0:	e3a0a000 	mov	sl, #0	; 0x0
        2724b4:	e1a01009 	mov	r1, r9
        2724b8:	e1a00004 	mov	r0, r4
        2724bc:	e3a02000 	mov	r2, #0	; 0x0
        2724c0:	eb6415c5 	bl	1b77bdc <$CheckPointer>
        2724c4:	e3300000 	teq	r0, #0	; 0x0
        2724c8:	13e000d6 	mvnne	r0, #214	; 0xd6
        2724cc:	12400b21 	subne	r0, r0, #33792	; 0x8400
        2724d0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2724d4:	e1a08009 	mov	r8, r9
        2724d8:	e5940004 	ldr	r0, [r4, #4]
        2724dc:	e1500009 	cmp	r0, r9
        2724e0:	8affff74 	bhi	2722b8 <WalkEachBlock+0x30>
        2724e4:	e3a00000 	mov	r0, #0	; 0x0
        2724e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2724ec:	e3320007 	teq	r2, #7	; 0x7
        2724f0:	1a000003 	bne	272504 <WalkEachBlock+0x27c>
        2724f4:	e5902000 	ldr	r2, [r0]
        2724f8:	e5911000 	ldr	r1, [r1]
        2724fc:	e0821001 	add	r1, r2, r1
        272500:	e5801000 	str	r1, [r0]
        272504:	e3a00000 	mov	r0, #0	; 0x0
        272508:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: WordRecogAddStroke
 * Address: 00272728
 */
void globals::WordRecogAddStroke() {
    /*
        272728:	e1a0c00d 	mov	ip, sp
        27272c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        272730:	e24cb004 	sub	fp, ip, #4	; 0x4
        272734:	e1a04000 	mov	r4, r0
        272738:	e1a05001 	mov	r5, r1
        27273c:	e1a02802 	mov	r2, r2, lsl #16
        272740:	e1a02842 	mov	r2, r2, asr #16
        272744:	e52d2010 	str	r2, [sp, -#16]!
        272748:	e1a02803 	mov	r2, r3, lsl #16
        27274c:	e1a02842 	mov	r2, r2, asr #16
        272750:	e3a00000 	mov	r0, #0	; 0x0
        272754:	e58d2004 	str	r2, [sp, #4]
        272758:	e52d0058 	str	r0, [sp, -#88]!
        27275c:	e5940038 	ldr	r0, [r4, #56]
        272760:	e1b00840 	movs	r0, r0, asr #16
        272764:	1a000006 	bne	272784 <WordRecogAddStroke+0x5c>
        272768:	e3350000 	teq	r5, #0	; 0x0
        27276c:	0a000005 	beq	272788 <WordRecogAddStroke+0x60>
        272770:	e5d50026 	ldrb	r0, [r5, #38]
        272774:	e3300000 	teq	r0, #0	; 0x0
        272778:	05d50027 	ldreqb	r0, [r5, #39]
        27277c:	03300000 	teqeq	r0, #0	; 0x0
        272780:	0a000000 	beq	272788 <WordRecogAddStroke+0x60>
        272784:	e58d5000 	str	r5, [sp]
        272788:	e3340000 	teq	r4, #0	; 0x0
        27278c:	0a000110 	beq	272bd4 <WordRecogAddStroke+0x4ac>
        272790:	e5d40050 	ldrb	r0, [r4, #80]
        272794:	e3300000 	teq	r0, #0	; 0x0
        272798:	0a00000c 	beq	2727d0 <WordRecogAddStroke+0xa8>
        27279c:	e3a00000 	mov	r0, #0	; 0x0
        2727a0:	e52d006c 	str	r0, [sp, -#108]!
        2727a4:	e28d0008 	add	r0, sp, #8	; 0x8
        2727a8:	eb650071 	bl	1bb2974 <$setjmp>
        2727ac:	e3300000 	teq	r0, #0	; 0x0
        2727b0:	1a000044 	bne	2728c8 <WordRecogAddStroke+0x1a0>
        2727b4:	e1a0000d 	mov	r0, sp
        2727b8:	eb65b62f 	bl	1be007c <$AddExceptionHandler>
        2727bc:	e1a00004 	mov	r0, r4
        2727c0:	eb640cbe 	bl	1b75ac0 <$WordRecogResume>
        2727c4:	e1a0000d 	mov	r0, sp
        2727c8:	eb65ba3a 	bl	1be10b8 <$ExitHandler>
        2727cc:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2727d0:	e59401f0 	ldr	r0, [r4, #496]
        2727d4:	e59f60e8 	ldr	r6, [pc, #e8]	; 2728c4 <WordRecogAddStroke+0x19c>
        2727d8:	e2841070 	add	r1, r4, #112	; 0x70
        2727dc:	e5860018 	str	r0, [r6, #24]
        2727e0:	e3350000 	teq	r5, #0	; 0x0
        2727e4:	e58d1064 	str	r1, [sp, #100]
        2727e8:	0a0000cb 	beq	272b1c <WordRecogAddStroke+0x3f4>
        2727ec:	e2841f6a 	add	r1, r4, #424	; 0x1a8
        2727f0:	e8910003 	ldmia	r1, {r0, r1}
        2727f4:	e1b02000 	movs	r2, r0
        2727f8:	13a02001 	movne	r2, #1	; 0x1
        2727fc:	e2620096 	rsb	r0, r2, #150	; 0x96
        272800:	e1510000 	cmp	r1, r0
        272804:	ba000013 	blt	272858 <WordRecogAddStroke+0x130>
        272808:	e3a00000 	mov	r0, #0	; 0x0
        27280c:	e52d006c 	str	r0, [sp, -#108]!
        272810:	e28d0008 	add	r0, sp, #8	; 0x8
        272814:	eb650056 	bl	1bb2974 <$setjmp>
        272818:	e3300000 	teq	r0, #0	; 0x0
        27281c:	1a00002e 	bne	2728dc <WordRecogAddStroke+0x1b4>
        272820:	e1a0000d 	mov	r0, sp
        272824:	eb65b614 	bl	1be007c <$AddExceptionHandler>
        272828:	e59d20c8 	ldr	r2, [sp, #200]
        27282c:	e1b03002 	movs	r3, r2
        272830:	13a03002 	movne	r3, #2	; 0x2
        272834:	e59d20c4 	ldr	r2, [sp, #196]
        272838:	e3320000 	teq	r2, #0	; 0x0
        27283c:	13a02002 	movne	r2, #2	; 0x2
        272840:	e1a00004 	mov	r0, r4
        272844:	e3a01000 	mov	r1, #0	; 0x0
        272848:	eb64088b 	bl	1b74a7c <$WordRecogAddStroke>
        27284c:	e1a0000d 	mov	r0, sp
        272850:	eb65ba18 	bl	1be10b8 <$ExitHandler>
        272854:	e28dd06c 	add	sp, sp, #108	; 0x6c
        272858:	e5d50026 	ldrb	r0, [r5, #38]
        27285c:	e3300000 	teq	r0, #0	; 0x0
        272860:	05d50027 	ldreqb	r0, [r5, #39]
        272864:	03300000 	teqeq	r0, #0	; 0x0
        272868:	1a000026 	bne	272908 <WordRecogAddStroke+0x1e0>
        27286c:	e5940028 	ldr	r0, [r4, #40]
        272870:	e1a00840 	mov	r0, r0, asr #16
        272874:	e3500000 	cmp	r0, #0	; 0x0
        272878:	c594102a 	ldrgt	r1, [r4, #42]
        27287c:	c1a01841 	movgt	r1, r1, asr #16
        272880:	c3510000 	cmpgt	r1, #0	; 0x0
        272884:	da000019 	ble	2728f0 <WordRecogAddStroke+0x1c8>
        272888:	e3300048 	teq	r0, #72	; 0x48
        27288c:	03310048 	teqeq	r1, #72	; 0x48
        272890:	0a000016 	beq	2728f0 <WordRecogAddStroke+0x1c8>
        272894:	e1a01800 	mov	r1, r0, lsl #16
        272898:	e3a00712 	mov	r0, #4718592	; 0x480000
        27289c:	eb65ba07 	bl	1be10c0 <$FixedDivide>
        2728a0:	e1a07000 	mov	r7, r0
        2728a4:	e594002a 	ldr	r0, [r4, #42]
        2728a8:	e1a00820 	mov	r0, r0, lsr #16
        2728ac:	e1a01800 	mov	r1, r0, lsl #16
        2728b0:	e3a00712 	mov	r0, #4718592	; 0x480000
        2728b4:	eb65ba01 	bl	1be10c0 <$FixedDivide>
        2728b8:	e1a02000 	mov	r2, r0
        2728bc:	e1a01007 	mov	r1, r7
        2728c0:	ea00000e 	b	272900 <WordRecogAddStroke+0x1d8>
        2728c4:	0c104f84 	ldceq	15, cr4, [r0], -#528
        2728c8:	e59d006c 	ldr	r0, [sp, #108]
        2728cc:	eb640858 	bl	1b74a34 <$StrokeDestroy>
        2728d0:	e1a0000d 	mov	r0, sp
        2728d4:	eb65be1e 	bl	1be2154 <$NextHandler>
        2728d8:	eafffffa 	b	2728c8 <WordRecogAddStroke+0x1a0>
        2728dc:	e59d006c 	ldr	r0, [sp, #108]
        2728e0:	eb640853 	bl	1b74a34 <$StrokeDestroy>
        2728e4:	e1a0000d 	mov	r0, sp
        2728e8:	eb65be19 	bl	1be2154 <$NextHandler>
        2728ec:	eafffffa 	b	2728dc <WordRecogAddStroke+0x1b4>
        2728f0:	e594102c 	ldr	r1, [r4, #44]
        2728f4:	e3310801 	teq	r1, #65536	; 0x10000
        2728f8:	0a000002 	beq	272908 <WordRecogAddStroke+0x1e0>
        2728fc:	e1a02001 	mov	r2, r1
        272900:	e1a00005 	mov	r0, r5
        272904:	eb640851 	bl	1b74a50 <$StrokeScale>
        272908:	e28d1044 	add	r1, sp, #68	; 0x44
        27290c:	e1a00005 	mov	r0, r5
        272910:	eb640845 	bl	1b74a2c <$StrokeCentroid>
        272914:	e595000c 	ldr	r0, [r5, #12]
        272918:	e58d0040 	str	r0, [sp, #64]
        27291c:	e5951014 	ldr	r1, [r5, #20]
        272920:	e58d103c 	str	r1, [sp, #60]
        272924:	e5957018 	ldr	r7, [r5, #24]
        272928:	e5958010 	ldr	r8, [r5, #16]
        27292c:	e0411000 	sub	r1, r1, r0
        272930:	e0470008 	sub	r0, r7, r8
        272934:	e1510000 	cmp	r1, r0
        272938:	e59d9048 	ldr	r9, [sp, #72]
        27293c:	e59da044 	ldr	sl, [sp, #68]
        272940:	b1a01000 	movlt	r1, r0
        272944:	e2812801 	add	r2, r1, #65536	; 0x10000
        272948:	e2800801 	add	r0, r0, #65536	; 0x10000
        27294c:	e3350000 	teq	r5, #0	; 0x0
        272950:	e58d0034 	str	r0, [sp, #52]
        272954:	e58d2038 	str	r2, [sp, #56]
        272958:	0a00006f 	beq	272b1c <WordRecogAddStroke+0x3f4>
        27295c:	e5d50026 	ldrb	r0, [r5, #38]
        272960:	e3300000 	teq	r0, #0	; 0x0
        272964:	05d50027 	ldreqb	r0, [r5, #39]
        272968:	03300000 	teqeq	r0, #0	; 0x0
        27296c:	1a00006a 	bne	272b1c <WordRecogAddStroke+0x3f4>
        272970:	e3a00000 	mov	r0, #0	; 0x0
        272974:	e52d0004 	str	r0, [sp, -#4]!
        272978:	e52d006c 	str	r0, [sp, -#108]!
        27297c:	e28d0008 	add	r0, sp, #8	; 0x8
        272980:	eb64fffb 	bl	1bb2974 <$setjmp>
        272984:	e3300000 	teq	r0, #0	; 0x0
        272988:	1a000092 	bne	272bd8 <WordRecogAddStroke+0x4b0>
        27298c:	e1a0000d 	mov	r0, sp
        272990:	eb65b5b9 	bl	1be007c <$AddExceptionHandler>
        272994:	e5960000 	ldr	r0, [r6]
        272998:	e3300000 	teq	r0, #0	; 0x0
        27299c:	0a000058 	beq	272b04 <WordRecogAddStroke+0x3dc>
        2729a0:	e1a01005 	mov	r1, r5
        2729a4:	e1a00004 	mov	r0, r4
        2729a8:	eb641068 	bl	1b76b50 <$WordRecogStrokeNeedsFragmenting>
        2729ac:	e3300000 	teq	r0, #0	; 0x0
        2729b0:	0a000053 	beq	272b04 <WordRecogAddStroke+0x3dc>
        2729b4:	e3a00000 	mov	r0, #0	; 0x0
        2729b8:	e52d0004 	str	r0, [sp, -#4]!
        2729bc:	e1a00005 	mov	r0, r5
        2729c0:	e59d10d8 	ldr	r1, [sp, #216]
        2729c4:	eb63f382 	bl	1b6f7d4 <$FragmentStroke>
        2729c8:	e58d0000 	str	r0, [sp]
        2729cc:	e3a00000 	mov	r0, #0	; 0x0
        2729d0:	e52d0070 	str	r0, [sp, -#112]!
        2729d4:	e58d0004 	str	r0, [sp, #4]
        2729d8:	e28d000c 	add	r0, sp, #12	; 0xc
        2729dc:	eb64ffe4 	bl	1bb2974 <$setjmp>
        2729e0:	e3300000 	teq	r0, #0	; 0x0
        2729e4:	1a00003a 	bne	272ad4 <WordRecogAddStroke+0x3ac>
        2729e8:	e28d0004 	add	r0, sp, #4	; 0x4
        2729ec:	eb65b5a2 	bl	1be007c <$AddExceptionHandler>
        2729f0:	e59d0070 	ldr	r0, [sp, #112]
        2729f4:	e5900000 	ldr	r0, [r0]
        2729f8:	e1a00840 	mov	r0, r0, asr #16
        2729fc:	e3500001 	cmp	r0, #1	; 0x1
        272a00:	da000035 	ble	272adc <WordRecogAddStroke+0x3b4>
        272a04:	e5960010 	ldr	r0, [r6, #16]
        272a08:	e3300000 	teq	r0, #0	; 0x0
        272a0c:	15961008 	ldrne	r1, [r6, #8]
        272a10:	1586100c 	strne	r1, [r6, #12]
        272a14:	03a00000 	moveq	r0, #0	; 0x0
        272a18:	0586000c 	streq	r0, [r6, #12]
        272a1c:	e5860014 	str	r0, [r6, #20]
        272a20:	e5950004 	ldr	r0, [r5, #4]
        272a24:	e5860008 	str	r0, [r6, #8]
        272a28:	e59d00e4 	ldr	r0, [sp, #228]
        272a2c:	eb640800 	bl	1b74a34 <$StrokeDestroy>
        272a30:	e3a00000 	mov	r0, #0	; 0x0
        272a34:	e58d00e4 	str	r0, [sp, #228]
        272a38:	e3a02000 	mov	r2, #0	; 0x0
        272a3c:	e58d20e8 	str	r2, [sp, #232]
        272a40:	e59d0070 	ldr	r0, [sp, #112]
        272a44:	e5900000 	ldr	r0, [r0]
        272a48:	e1a00840 	mov	r0, r0, asr #16
        272a4c:	e3500000 	cmp	r0, #0	; 0x0
        272a50:	da00001c 	ble	272ac8 <WordRecogAddStroke+0x3a0>
        272a54:	e59d0070 	ldr	r0, [sp, #112]
        272a58:	e5900004 	ldr	r0, [r0, #4]
        272a5c:	e59d20e8 	ldr	r2, [sp, #232]
        272a60:	e7901102 	ldr	r1, [r0, r2, lsl #2]
        272a64:	e3a03000 	mov	r3, #0	; 0x0
        272a68:	e5861010 	str	r1, [r6, #16]
        272a6c:	e59d0070 	ldr	r0, [sp, #112]
        272a70:	e5900004 	ldr	r0, [r0, #4]
        272a74:	e59d20e8 	ldr	r2, [sp, #232]
        272a78:	e7803102 	str	r3, [r0, r2, lsl #2]
        272a7c:	e1a00004 	mov	r0, r4
        272a80:	e28d3f4f 	add	r3, sp, #316	; 0x13c
        272a84:	e893000c 	ldmia	r3, {r2, r3}
        272a88:	eb6407fb 	bl	1b74a7c <$WordRecogAddStroke>
        272a8c:	e59d213c 	ldr	r2, [sp, #316]
        272a90:	e3320002 	teq	r2, #2	; 0x2
        272a94:	03a02001 	moveq	r2, #1	; 0x1
        272a98:	058d213c 	streq	r2, [sp, #316]
        272a9c:	e59d2140 	ldr	r2, [sp, #320]
        272aa0:	e3320002 	teq	r2, #2	; 0x2
        272aa4:	03a02001 	moveq	r2, #1	; 0x1
        272aa8:	058d2140 	streq	r2, [sp, #320]
        272aac:	e59d20e8 	ldr	r2, [sp, #232]
        272ab0:	e2822001 	add	r2, r2, #1	; 0x1
        272ab4:	e58d20e8 	str	r2, [sp, #232]
        272ab8:	e59d0070 	ldr	r0, [sp, #112]
        272abc:	e5900000 	ldr	r0, [r0]
        272ac0:	e1520840 	cmp	r2, r0, asr #16
        272ac4:	baffffe2 	blt	272a54 <WordRecogAddStroke+0x32c>
        272ac8:	e3a00001 	mov	r0, #1	; 0x1
        272acc:	e58d00e0 	str	r0, [sp, #224]
        272ad0:	ea000001 	b	272adc <WordRecogAddStroke+0x3b4>
        272ad4:	e3a00001 	mov	r0, #1	; 0x1
        272ad8:	e58d0000 	str	r0, [sp]
        272adc:	e59d0070 	ldr	r0, [sp, #112]
        272ae0:	e3a01001 	mov	r1, #1	; 0x1
        272ae4:	eb63ff9c 	bl	1b7295c <$SLDestroy>
        272ae8:	e59d0000 	ldr	r0, [sp]
        272aec:	e3300000 	teq	r0, #0	; 0x0
        272af0:	128d0004 	addne	r0, sp, #4	; 0x4
        272af4:	1b65bd96 	blne	1be2154 <$NextHandler>
        272af8:	e28d0004 	add	r0, sp, #4	; 0x4
        272afc:	eb65b96d 	bl	1be10b8 <$ExitHandler>
        272b00:	e28dd074 	add	sp, sp, #116	; 0x74
        272b04:	e1a0000d 	mov	r0, sp
        272b08:	eb65b96a 	bl	1be10b8 <$ExitHandler>
        272b0c:	e5bd006c 	ldr	r0, [sp, #108]!
        272b10:	e3300000 	teq	r0, #0	; 0x0
        272b14:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272b18:	e28dd004 	add	sp, sp, #4	; 0x4
        272b1c:	e59401ac 	ldr	r0, [r4, #428]
        272b20:	e3300000 	teq	r0, #0	; 0x0
        272b24:	1a000030 	bne	272bec <WordRecogAddStroke+0x4c4>
        272b28:	e1a00004 	mov	r0, r4
        272b2c:	eb64100b 	bl	1b76b60 <$WordRecogSaveRun>
        272b30:	e3a00000 	mov	r0, #0	; 0x0
        272b34:	e3350000 	teq	r5, #0	; 0x0
        272b38:	e58401a4 	str	r0, [r4, #420]
        272b3c:	0a000024 	beq	272bd4 <WordRecogAddStroke+0x4ac>
        272b40:	e3a03000 	mov	r3, #0	; 0x0
        272b44:	e3a01000 	mov	r1, #0	; 0x0
        272b48:	e59d205c 	ldr	r2, [sp, #92]
        272b4c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        272b50:	e1a03009 	mov	r3, r9
        272b54:	e1a0200a 	mov	r2, sl
        272b58:	e1a01005 	mov	r1, r5
        272b5c:	e1a00004 	mov	r0, r4
        272b60:	eb640bc6 	bl	1b75a80 <$WordRecogAddStroke2>
        272b64:	e28dd00c 	add	sp, sp, #12	; 0xc
        272b68:	e59d0040 	ldr	r0, [sp, #64]
        272b6c:	e5840124 	str	r0, [r4, #292]
        272b70:	e59d103c 	ldr	r1, [sp, #60]
        272b74:	e584112c 	str	r1, [r4, #300]
        272b78:	e584713c 	str	r7, [r4, #316]
        272b7c:	e5848134 	str	r8, [r4, #308]
        272b80:	e584a144 	str	sl, [r4, #324]
        272b84:	e584715c 	str	r7, [r4, #348]
        272b88:	e5848154 	str	r8, [r4, #340]
        272b8c:	e584914c 	str	r9, [r4, #332]
        272b90:	e59d0038 	ldr	r0, [sp, #56]
        272b94:	e5840164 	str	r0, [r4, #356]
        272b98:	e59d0034 	ldr	r0, [sp, #52]
        272b9c:	e5840168 	str	r0, [r4, #360]
        272ba0:	e5960010 	ldr	r0, [r6, #16]
        272ba4:	e1350000 	teq	r5, r0
        272ba8:	05b60008 	ldreq	r0, [r6, #8]!
        272bac:	0a000003 	beq	272bc0 <WordRecogAddStroke+0x498>
        272bb0:	e5960014 	ldr	r0, [r6, #20]
        272bb4:	e1350000 	teq	r5, r0
        272bb8:	15b50004 	ldrne	r0, [r5, #4]!
        272bbc:	05b6000c 	ldreq	r0, [r6, #12]!
        272bc0:	e5840194 	str	r0, [r4, #404]
        272bc4:	e3a00000 	mov	r0, #0	; 0x0
        272bc8:	e58401a8 	str	r0, [r4, #424]
        272bcc:	e3a00001 	mov	r0, #1	; 0x1
        272bd0:	e5a401ac 	str	r0, [r4, #428]!
        272bd4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        272bd8:	e59d0070 	ldr	r0, [sp, #112]
        272bdc:	eb640794 	bl	1b74a34 <$StrokeDestroy>
        272be0:	e1a0000d 	mov	r0, sp
        272be4:	eb65bd5a 	bl	1be2154 <$NextHandler>
        272be8:	eafffffa 	b	272bd8 <WordRecogAddStroke+0x4b0>
        272bec:	e3350000 	teq	r5, #0	; 0x0
        272bf0:	0a000002 	beq	272c00 <WordRecogAddStroke+0x4d8>
        272bf4:	e59d2058 	ldr	r2, [sp, #88]
        272bf8:	e3520001 	cmp	r2, #1	; 0x1
        272bfc:	da000001 	ble	272c08 <WordRecogAddStroke+0x4e0>
        272c00:	e3a00001 	mov	r0, #1	; 0x1
        272c04:	ea000000 	b	272c0c <WordRecogAddStroke+0x4e4>
        272c08:	e3a00000 	mov	r0, #0	; 0x0
        272c0c:	e3a01000 	mov	r1, #0	; 0x0
        272c10:	e3300000 	teq	r0, #0	; 0x0
        272c14:	e58d1008 	str	r1, [sp, #8]
        272c18:	0a00004f 	beq	272d5c <WordRecogAddStroke+0x634>
        272c1c:	e59401a8 	ldr	r0, [r4, #424]
        272c20:	e3300000 	teq	r0, #0	; 0x0
        272c24:	0a000018 	beq	272c8c <WordRecogAddStroke+0x564>
        272c28:	e3a01000 	mov	r1, #0	; 0x0
        272c2c:	e52d106c 	str	r1, [sp, -#108]!
        272c30:	e28d0008 	add	r0, sp, #8	; 0x8
        272c34:	eb64ff4e 	bl	1bb2974 <$setjmp>
        272c38:	e3300000 	teq	r0, #0	; 0x0
        272c3c:	1a00003c 	bne	272d34 <WordRecogAddStroke+0x60c>
        272c40:	e1a0000d 	mov	r0, sp
        272c44:	eb65b50c 	bl	1be007c <$AddExceptionHandler>
        272c48:	e3a01000 	mov	r1, #0	; 0x0
        272c4c:	e59401a8 	ldr	r0, [r4, #424]
        272c50:	e58411a8 	str	r1, [r4, #424]
        272c54:	e594318c 	ldr	r3, [r4, #396]
        272c58:	e5942190 	ldr	r2, [r4, #400]
        272c5c:	e1a02842 	mov	r2, r2, asr #16
        272c60:	e3a01001 	mov	r1, #1	; 0x1
        272c64:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        272c68:	e1a01000 	mov	r1, r0
        272c6c:	e2843f5f 	add	r3, r4, #380	; 0x17c
        272c70:	e893000c 	ldmia	r3, {r2, r3}
        272c74:	e1a00004 	mov	r0, r4
        272c78:	eb640b80 	bl	1b75a80 <$WordRecogAddStroke2>
        272c7c:	e28dd00c 	add	sp, sp, #12	; 0xc
        272c80:	e1a0000d 	mov	r0, sp
        272c84:	eb65b90b 	bl	1be10b8 <$ExitHandler>
        272c88:	e28dd06c 	add	sp, sp, #108	; 0x6c
        272c8c:	e3e00000 	mvn	r0, #0	; 0x0
        272c90:	e3a03801 	mov	r3, #65536	; 0x10000
        272c94:	e58401a4 	str	r0, [r4, #420]
        272c98:	e3a01002 	mov	r1, #2	; 0x2
        272c9c:	e59d205c 	ldr	r2, [sp, #92]
        272ca0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        272ca4:	e1a03009 	mov	r3, r9
        272ca8:	e1a0200a 	mov	r2, sl
        272cac:	e1a01005 	mov	r1, r5
        272cb0:	e1a00004 	mov	r0, r4
        272cb4:	eb640b71 	bl	1b75a80 <$WordRecogAddStroke2>
        272cb8:	e28dd00c 	add	sp, sp, #12	; 0xc
        272cbc:	e3350000 	teq	r5, #0	; 0x0
        272cc0:	0a000020 	beq	272d48 <WordRecogAddStroke+0x620>
        272cc4:	e59d0040 	ldr	r0, [sp, #64]
        272cc8:	e5840124 	str	r0, [r4, #292]
        272ccc:	e59d103c 	ldr	r1, [sp, #60]
        272cd0:	e584112c 	str	r1, [r4, #300]
        272cd4:	e584713c 	str	r7, [r4, #316]
        272cd8:	e5848134 	str	r8, [r4, #308]
        272cdc:	e584a144 	str	sl, [r4, #324]
        272ce0:	e584715c 	str	r7, [r4, #348]
        272ce4:	e5848154 	str	r8, [r4, #340]
        272ce8:	e584914c 	str	r9, [r4, #332]
        272cec:	e59d0038 	ldr	r0, [sp, #56]
        272cf0:	e5840164 	str	r0, [r4, #356]
        272cf4:	e59d0034 	ldr	r0, [sp, #52]
        272cf8:	e5840168 	str	r0, [r4, #360]
        272cfc:	e5960010 	ldr	r0, [r6, #16]
        272d00:	e1350000 	teq	r5, r0
        272d04:	05b60008 	ldreq	r0, [r6, #8]!
        272d08:	0a000003 	beq	272d1c <WordRecogAddStroke+0x5f4>
        272d0c:	e5960014 	ldr	r0, [r6, #20]
        272d10:	e1350000 	teq	r5, r0
        272d14:	15b50004 	ldrne	r0, [r5, #4]!
        272d18:	05b6000c 	ldreq	r0, [r6, #12]!
        272d1c:	e5840194 	str	r0, [r4, #404]
        272d20:	e3a00001 	mov	r0, #1	; 0x1
        272d24:	e58401ac 	str	r0, [r4, #428]
        272d28:	e3a00000 	mov	r0, #0	; 0x0
        272d2c:	e58401a4 	str	r0, [r4, #420]
        272d30:	ea000006 	b	272d50 <WordRecogAddStroke+0x628>
        272d34:	e59d006c 	ldr	r0, [sp, #108]
        272d38:	eb64073d 	bl	1b74a34 <$StrokeDestroy>
        272d3c:	e1a0000d 	mov	r0, sp
        272d40:	eb65bd03 	bl	1be2154 <$NextHandler>
        272d44:	eafffffa 	b	272d34 <WordRecogAddStroke+0x60c>
        272d48:	e3a00000 	mov	r0, #0	; 0x0
        272d4c:	e58401ac 	str	r0, [r4, #428]
        272d50:	e3a00000 	mov	r0, #0	; 0x0
        272d54:	e5a401a8 	str	r0, [r4, #424]!
        272d58:	ea000533 	b	27422c <WordRecogAddStroke+0x1b04>
        272d5c:	e3a0e000 	mov	lr, #0	; 0x0
        272d60:	e52de06c 	str	lr, [sp, -#108]!
        272d64:	e28d0008 	add	r0, sp, #8	; 0x8
        272d68:	eb64ff01 	bl	1bb2974 <$setjmp>
        272d6c:	e3300000 	teq	r0, #0	; 0x0
        272d70:	1a00052e 	bne	274230 <WordRecogAddStroke+0x1b08>
        272d74:	e1a0000d 	mov	r0, sp
        272d78:	eb65b4bf 	bl	1be007c <$AddExceptionHandler>
        272d7c:	e3a00000 	mov	r0, #0	; 0x0
        272d80:	e58d00b8 	str	r0, [sp, #184]
        272d84:	e59401a8 	ldr	r0, [r4, #424]
        272d88:	e59f1170 	ldr	r1, [pc, #170]	; 272f00 <WordRecogAddStroke+0x7d8>
        272d8c:	e3300000 	teq	r0, #0	; 0x0
        272d90:	e58d10cc 	str	r1, [sp, #204]
        272d94:	0a0002d8 	beq	2738fc <WordRecogAddStroke+0x11d4>
        272d98:	e5d50026 	ldrb	r0, [r5, #38]
        272d9c:	e3300000 	teq	r0, #0	; 0x0
        272da0:	13a00000 	movne	r0, #0	; 0x0
        272da4:	158d00c0 	strne	r0, [sp, #192]
        272da8:	1a00007a 	bne	272f98 <WordRecogAddStroke+0x870>
        272dac:	e28d30c0 	add	r3, sp, #192	; 0xc0
        272db0:	e59d20d0 	ldr	r2, [sp, #208]
        272db4:	e5940060 	ldr	r0, [r4, #96]
        272db8:	e5941120 	ldr	r1, [r4, #288]
        272dbc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        272dc0:	e5943184 	ldr	r3, [r4, #388]
        272dc4:	e59d20b4 	ldr	r2, [sp, #180]
        272dc8:	e5941188 	ldr	r1, [r4, #392]
        272dcc:	e59d00b0 	ldr	r0, [sp, #176]
        272dd0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        272dd4:	e3a03001 	mov	r3, #1	; 0x1
        272dd8:	e5942178 	ldr	r2, [r4, #376]
        272ddc:	e1a0e002 	mov	lr, r2
        272de0:	e5941174 	ldr	r1, [r4, #372]
        272de4:	e1a0c001 	mov	ip, r1
        272de8:	e5940180 	ldr	r0, [r4, #384]
        272dec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        272df0:	e5940170 	ldr	r0, [r4, #368]
        272df4:	e594317c 	ldr	r3, [r4, #380]
        272df8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        272dfc:	e1a02009 	mov	r2, r9
        272e00:	e1a0100a 	mov	r1, sl
        272e04:	e594316c 	ldr	r3, [r4, #364]
        272e08:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        272e0c:	e1a03007 	mov	r3, r7
        272e10:	e1a02008 	mov	r2, r8
        272e14:	e59d00f8 	ldr	r0, [sp, #248]
        272e18:	e59d10f4 	ldr	r1, [sp, #244]
        272e1c:	eb6406f8 	bl	1b74a04 <$SegmentWord>
        272e20:	e28dd04c 	add	sp, sp, #76	; 0x4c
        272e24:	e58d0078 	str	r0, [sp, #120]
        272e28:	e3300000 	teq	r0, #0	; 0x0
        272e2c:	0a000059 	beq	272f98 <WordRecogAddStroke+0x870>
        272e30:	e3a01000 	mov	r1, #0	; 0x0
        272e34:	e59401a8 	ldr	r0, [r4, #424]
        272e38:	e58411a8 	str	r1, [r4, #424]
        272e3c:	e594318c 	ldr	r3, [r4, #396]
        272e40:	e5942190 	ldr	r2, [r4, #400]
        272e44:	e1a02842 	mov	r2, r2, asr #16
        272e48:	e3a01001 	mov	r1, #1	; 0x1
        272e4c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        272e50:	e1a01000 	mov	r1, r0
        272e54:	e2843f5f 	add	r3, r4, #380	; 0x17c
        272e58:	e893000c 	ldmia	r3, {r2, r3}
        272e5c:	e1a00004 	mov	r0, r4
        272e60:	eb640b06 	bl	1b75a80 <$WordRecogAddStroke2>
        272e64:	e28dd00c 	add	sp, sp, #12	; 0xc
        272e68:	e59d0078 	ldr	r0, [sp, #120]
        272e6c:	e58401a4 	str	r0, [r4, #420]
        272e70:	e3a00001 	mov	r0, #1	; 0x1
        272e74:	e58401ac 	str	r0, [r4, #428]
        272e78:	e59d0078 	ldr	r0, [sp, #120]
        272e7c:	e3300002 	teq	r0, #2	; 0x2
        272e80:	159d0078 	ldrne	r0, [sp, #120]
        272e84:	13300003 	teqne	r0, #3	; 0x3
        272e88:	1a00001d 	bne	272f04 <WordRecogAddStroke+0x7dc>
        272e8c:	e3a00000 	mov	r0, #0	; 0x0
        272e90:	e58d006c 	str	r0, [sp, #108]
        272e94:	e3a03801 	mov	r3, #65536	; 0x10000
        272e98:	e3a01001 	mov	r1, #1	; 0x1
        272e9c:	e59d20c8 	ldr	r2, [sp, #200]
        272ea0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        272ea4:	e1a03009 	mov	r3, r9
        272ea8:	e1a0200a 	mov	r2, sl
        272eac:	e1a01005 	mov	r1, r5
        272eb0:	e1a00004 	mov	r0, r4
        272eb4:	eb640af1 	bl	1b75a80 <$WordRecogAddStroke2>
        272eb8:	e28dd00c 	add	sp, sp, #12	; 0xc
        272ebc:	e59d00ac 	ldr	r0, [sp, #172]
        272ec0:	e5840124 	str	r0, [r4, #292]
        272ec4:	e59d10a8 	ldr	r1, [sp, #168]
        272ec8:	e584112c 	str	r1, [r4, #300]
        272ecc:	e584713c 	str	r7, [r4, #316]
        272ed0:	e5848134 	str	r8, [r4, #308]
        272ed4:	e584a144 	str	sl, [r4, #324]
        272ed8:	e584715c 	str	r7, [r4, #348]
        272edc:	e5848154 	str	r8, [r4, #340]
        272ee0:	e584914c 	str	r9, [r4, #332]
        272ee4:	e59d00a4 	ldr	r0, [sp, #164]
        272ee8:	e5840164 	str	r0, [r4, #356]
        272eec:	e59d00a0 	ldr	r0, [sp, #160]
        272ef0:	e3a01000 	mov	r1, #0	; 0x0
        272ef4:	e5840168 	str	r0, [r4, #360]
        272ef8:	e58411ac 	str	r1, [r4, #428]
        272efc:	ea000014 	b	272f54 <WordRecogAddStroke+0x82c>
        272f00:	0c10089c 	ldceq	8, cr0, [r0], -#624
        272f04:	e3a00001 	mov	r0, #1	; 0x1
        272f08:	e58d00b8 	str	r0, [sp, #184]
        272f0c:	e594016c 	ldr	r0, [r4, #364]
        272f10:	e5840124 	str	r0, [r4, #292]
        272f14:	e5940170 	ldr	r0, [r4, #368]
        272f18:	e584012c 	str	r0, [r4, #300]
        272f1c:	e5941174 	ldr	r1, [r4, #372]
        272f20:	e5841134 	str	r1, [r4, #308]
        272f24:	e5940178 	ldr	r0, [r4, #376]
        272f28:	e584013c 	str	r0, [r4, #316]
        272f2c:	e594217c 	ldr	r2, [r4, #380]
        272f30:	e584015c 	str	r0, [r4, #348]
        272f34:	e5841154 	str	r1, [r4, #340]
        272f38:	e5842144 	str	r2, [r4, #324]
        272f3c:	e5940180 	ldr	r0, [r4, #384]
        272f40:	e584014c 	str	r0, [r4, #332]
        272f44:	e5940184 	ldr	r0, [r4, #388]
        272f48:	e5840164 	str	r0, [r4, #356]
        272f4c:	e5940188 	ldr	r0, [r4, #392]
        272f50:	e5840168 	str	r0, [r4, #360]
        272f54:	e5940124 	ldr	r0, [r4, #292]
        272f58:	e5840128 	str	r0, [r4, #296]
        272f5c:	e594012c 	ldr	r0, [r4, #300]
        272f60:	e5840130 	str	r0, [r4, #304]
        272f64:	e5940134 	ldr	r0, [r4, #308]
        272f68:	e5840138 	str	r0, [r4, #312]
        272f6c:	e594013c 	ldr	r0, [r4, #316]
        272f70:	e5840140 	str	r0, [r4, #320]
        272f74:	e5940144 	ldr	r0, [r4, #324]
        272f78:	e5840148 	str	r0, [r4, #328]
        272f7c:	e5940154 	ldr	r0, [r4, #340]
        272f80:	e5840158 	str	r0, [r4, #344]
        272f84:	e594015c 	ldr	r0, [r4, #348]
        272f88:	e5840160 	str	r0, [r4, #352]
        272f8c:	e594014c 	ldr	r0, [r4, #332]
        272f90:	e5840150 	str	r0, [r4, #336]
        272f94:	ea0003cb 	b	273ec8 <WordRecogAddStroke+0x17a0>
        272f98:	e28d30bc 	add	r3, sp, #188	; 0xbc
        272f9c:	e59d20d0 	ldr	r2, [sp, #208]
        272fa0:	e5940060 	ldr	r0, [r4, #96]
        272fa4:	e5941120 	ldr	r1, [r4, #288]
        272fa8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        272fac:	e5943164 	ldr	r3, [r4, #356]
        272fb0:	e59d20b4 	ldr	r2, [sp, #180]
        272fb4:	e5941168 	ldr	r1, [r4, #360]
        272fb8:	e59d00b0 	ldr	r0, [sp, #176]
        272fbc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        272fc0:	e594014c 	ldr	r0, [r4, #332]
        272fc4:	e5941154 	ldr	r1, [r4, #340]
        272fc8:	e594215c 	ldr	r2, [r4, #348]
        272fcc:	e59431ac 	ldr	r3, [r4, #428]
        272fd0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        272fd4:	e594012c 	ldr	r0, [r4, #300]
        272fd8:	e5941134 	ldr	r1, [r4, #308]
        272fdc:	e594213c 	ldr	r2, [r4, #316]
        272fe0:	e5943144 	ldr	r3, [r4, #324]
        272fe4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        272fe8:	e1a02009 	mov	r2, r9
        272fec:	e1a0100a 	mov	r1, sl
        272ff0:	e5943124 	ldr	r3, [r4, #292]
        272ff4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        272ff8:	e1a03007 	mov	r3, r7
        272ffc:	e1a02008 	mov	r2, r8
        273000:	e59d00f8 	ldr	r0, [sp, #248]
        273004:	e59d10f4 	ldr	r1, [sp, #244]
        273008:	eb64067d 	bl	1b74a04 <$SegmentWord>
        27300c:	e28dd04c 	add	sp, sp, #76	; 0x4c
        273010:	e3300000 	teq	r0, #0	; 0x0
        273014:	0a00003d 	beq	273110 <WordRecogAddStroke+0x9e8>
        273018:	e5962010 	ldr	r2, [r6, #16]
        27301c:	e1350002 	teq	r5, r2
        273020:	05961008 	ldreq	r1, [r6, #8]
        273024:	0a000003 	beq	273038 <WordRecogAddStroke+0x910>
        273028:	e5960014 	ldr	r0, [r6, #20]
        27302c:	e1350000 	teq	r5, r0
        273030:	15951004 	ldrne	r1, [r5, #4]
        273034:	0596100c 	ldreq	r1, [r6, #12]
        273038:	e59401a8 	ldr	r0, [r4, #424]
        27303c:	e1300002 	teq	r0, r2
        273040:	05960008 	ldreq	r0, [r6, #8]
        273044:	0a000003 	beq	273058 <WordRecogAddStroke+0x930>
        273048:	e5962014 	ldr	r2, [r6, #20]
        27304c:	e1300002 	teq	r0, r2
        273050:	15900004 	ldrne	r0, [r0, #4]
        273054:	0596000c 	ldreq	r0, [r6, #12]
        273058:	e1510000 	cmp	r1, r0
        27305c:	aa000003 	bge	273070 <WordRecogAddStroke+0x948>
        273060:	e59d00bc 	ldr	r0, [sp, #188]
        273064:	e3a0e000 	mov	lr, #0	; 0x0
        273068:	e58d00c0 	str	r0, [sp, #192]
        27306c:	e584e18c 	str	lr, [r4, #396]
        273070:	e3a01000 	mov	r1, #0	; 0x0
        273074:	e59401a8 	ldr	r0, [r4, #424]
        273078:	e58411a8 	str	r1, [r4, #424]
        27307c:	e594318c 	ldr	r3, [r4, #396]
        273080:	e59d10bc 	ldr	r1, [sp, #188]
        273084:	e1530001 	cmp	r3, r1
        273088:	c1a03001 	movgt	r3, r1
        27308c:	e5942190 	ldr	r2, [r4, #400]
        273090:	e1a02842 	mov	r2, r2, asr #16
        273094:	e3a01001 	mov	r1, #1	; 0x1
        273098:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        27309c:	e1a01000 	mov	r1, r0
        2730a0:	e2843f5f 	add	r3, r4, #380	; 0x17c
        2730a4:	e893000c 	ldmia	r3, {r2, r3}
        2730a8:	e1a00004 	mov	r0, r4
        2730ac:	eb640a73 	bl	1b75a80 <$WordRecogAddStroke2>
        2730b0:	e28dd00c 	add	sp, sp, #12	; 0xc
        2730b4:	e594016c 	ldr	r0, [r4, #364]
        2730b8:	e5840124 	str	r0, [r4, #292]
        2730bc:	e5940170 	ldr	r0, [r4, #368]
        2730c0:	e584012c 	str	r0, [r4, #300]
        2730c4:	e5941174 	ldr	r1, [r4, #372]
        2730c8:	e5841134 	str	r1, [r4, #308]
        2730cc:	e5940178 	ldr	r0, [r4, #376]
        2730d0:	e584013c 	str	r0, [r4, #316]
        2730d4:	e594217c 	ldr	r2, [r4, #380]
        2730d8:	e584015c 	str	r0, [r4, #348]
        2730dc:	e5841154 	str	r1, [r4, #340]
        2730e0:	e5842144 	str	r2, [r4, #324]
        2730e4:	e5940180 	ldr	r0, [r4, #384]
        2730e8:	e584014c 	str	r0, [r4, #332]
        2730ec:	e5940184 	ldr	r0, [r4, #388]
        2730f0:	e5840164 	str	r0, [r4, #356]
        2730f4:	e5940188 	ldr	r0, [r4, #392]
        2730f8:	e5840168 	str	r0, [r4, #360]
        2730fc:	e3a00001 	mov	r0, #1	; 0x1
        273100:	e3a01000 	mov	r1, #0	; 0x0
        273104:	e58401ac 	str	r0, [r4, #428]
        273108:	e58411a4 	str	r1, [r4, #420]
        27310c:	ea000361 	b	273e98 <WordRecogAddStroke+0x1770>
        273110:	e3a00000 	mov	r0, #0	; 0x0
        273114:	e58401a4 	str	r0, [r4, #420]
        273118:	e5961010 	ldr	r1, [r6, #16]
        27311c:	e1350001 	teq	r5, r1
        273120:	05963008 	ldreq	r3, [r6, #8]
        273124:	0a000003 	beq	273138 <WordRecogAddStroke+0xa10>
        273128:	e5960014 	ldr	r0, [r6, #20]
        27312c:	e1350000 	teq	r5, r0
        273130:	15953004 	ldrne	r3, [r5, #4]
        273134:	0596300c 	ldreq	r3, [r6, #12]
        273138:	e59401a8 	ldr	r0, [r4, #424]
        27313c:	e1300001 	teq	r0, r1
        273140:	05962008 	ldreq	r2, [r6, #8]
        273144:	0a000003 	beq	273158 <WordRecogAddStroke+0xa30>
        273148:	e5962014 	ldr	r2, [r6, #20]
        27314c:	e1300002 	teq	r0, r2
        273150:	15902004 	ldrne	r2, [r0, #4]
        273154:	0596200c 	ldreq	r2, [r6, #12]
        273158:	e1530002 	cmp	r3, r2
        27315c:	aa000051 	bge	2732a8 <WordRecogAddStroke+0xb80>
        273160:	e24dd004 	sub	sp, sp, #4	; 0x4
        273164:	e59421ac 	ldr	r2, [r4, #428]
        273168:	e1300001 	teq	r0, r1
        27316c:	e58d2000 	str	r2, [sp]
        273170:	05963008 	ldreq	r3, [r6, #8]
        273174:	0a000003 	beq	273188 <WordRecogAddStroke+0xa60>
        273178:	e5961014 	ldr	r1, [r6, #20]
        27317c:	e1300001 	teq	r0, r1
        273180:	15b03004 	ldrne	r3, [r0, #4]!
        273184:	0596300c 	ldreq	r3, [r6, #12]
        273188:	e3a00001 	mov	r0, #1	; 0x1
        27318c:	e58d0078 	str	r0, [sp, #120]
        273190:	e3a00000 	mov	r0, #0	; 0x0
        273194:	e2521001 	subs	r1, r2, #1	; 0x1
        273198:	e584018c 	str	r0, [r4, #396]
        27319c:	4a00002a 	bmi	27324c <WordRecogAddStroke+0xb24>
        2731a0:	e5940024 	ldr	r0, [r4, #36]
        2731a4:	e7900101 	ldr	r0, [r0, r1, lsl #2]
        2731a8:	e5962010 	ldr	r2, [r6, #16]
        2731ac:	e1300002 	teq	r0, r2
        2731b0:	0596c008 	ldreq	ip, [r6, #8]
        2731b4:	0a000003 	beq	2731c8 <WordRecogAddStroke+0xaa0>
        2731b8:	e596c014 	ldr	ip, [r6, #20]
        2731bc:	e130000c 	teq	r0, ip
        2731c0:	1590c004 	ldrne	ip, [r0, #4]
        2731c4:	0596c00c 	ldreq	ip, [r6, #12]
        2731c8:	e1350002 	teq	r5, r2
        2731cc:	0596e008 	ldreq	lr, [r6, #8]
        2731d0:	0a000003 	beq	2731e4 <WordRecogAddStroke+0xabc>
        2731d4:	e596e014 	ldr	lr, [r6, #20]
        2731d8:	e135000e 	teq	r5, lr
        2731dc:	1595e004 	ldrne	lr, [r5, #4]
        2731e0:	0596e00c 	ldreq	lr, [r6, #12]
        2731e4:	e15c000e 	cmp	ip, lr
        2731e8:	ca000002 	bgt	2731f8 <WordRecogAddStroke+0xad0>
        2731ec:	e5d0c027 	ldrb	ip, [r0, #39]
        2731f0:	e33c0000 	teq	ip, #0	; 0x0
        2731f4:	0a000014 	beq	27324c <WordRecogAddStroke+0xb24>
        2731f8:	e1300002 	teq	r0, r2
        2731fc:	0596c008 	ldreq	ip, [r6, #8]
        273200:	0a000003 	beq	273214 <WordRecogAddStroke+0xaec>
        273204:	e596c014 	ldr	ip, [r6, #20]
        273208:	e130000c 	teq	r0, ip
        27320c:	1590c004 	ldrne	ip, [r0, #4]
        273210:	0596c00c 	ldreq	ip, [r6, #12]
        273214:	e15c0003 	cmp	ip, r3
        273218:	aa000007 	bge	27323c <WordRecogAddStroke+0xb14>
        27321c:	e1300002 	teq	r0, r2
        273220:	e58d1000 	str	r1, [sp]
        273224:	05963008 	ldreq	r3, [r6, #8]
        273228:	0a000003 	beq	27323c <WordRecogAddStroke+0xb14>
        27322c:	e5962014 	ldr	r2, [r6, #20]
        273230:	e1300002 	teq	r0, r2
        273234:	15903004 	ldrne	r3, [r0, #4]
        273238:	0596300c 	ldreq	r3, [r6, #12]
        27323c:	e3a02000 	mov	r2, #0	; 0x0
        273240:	e2511001 	subs	r1, r1, #1	; 0x1
        273244:	e5a02030 	str	r2, [r0, #48]!
        273248:	5affffd4 	bpl	2731a0 <WordRecogAddStroke+0xa78>
        27324c:	e59401ac 	ldr	r0, [r4, #428]
        273250:	e59d1000 	ldr	r1, [sp]
        273254:	e1300001 	teq	r0, r1
        273258:	059d00c0 	ldreq	r0, [sp, #192]
        27325c:	058d00c4 	streq	r0, [sp, #196]
        273260:	0a00000e 	beq	2732a0 <WordRecogAddStroke+0xb78>
        273264:	e28d30c4 	add	r3, sp, #196	; 0xc4
        273268:	e1a02004 	mov	r2, r4
        27326c:	e59d00a8 	ldr	r0, [sp, #168]
        273270:	e59d10a4 	ldr	r1, [sp, #164]
        273274:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273278:	e1a03009 	mov	r3, r9
        27327c:	e1a0200a 	mov	r2, sl
        273280:	e1a01007 	mov	r1, r7
        273284:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        273288:	e1a03008 	mov	r3, r8
        27328c:	e1a00005 	mov	r0, r5
        273290:	e59d10cc 	ldr	r1, [sp, #204]
        273294:	e59d20c8 	ldr	r2, [sp, #200]
        273298:	eb640e2a 	bl	1b76b48 <$WRSegWordXGap>
        27329c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        2732a0:	e28dd004 	add	sp, sp, #4	; 0x4
        2732a4:	ea0000d4 	b	2735fc <WordRecogAddStroke+0xed4>
        2732a8:	e59d00bc 	ldr	r0, [sp, #188]
        2732ac:	e584018c 	str	r0, [r4, #396]
        2732b0:	e5940124 	ldr	r0, [r4, #292]
        2732b4:	e594116c 	ldr	r1, [r4, #364]
        2732b8:	e1500001 	cmp	r0, r1
        2732bc:	a1a00001 	movge	r0, r1
        2732c0:	e58d009c 	str	r0, [sp, #156]
        2732c4:	e594012c 	ldr	r0, [r4, #300]
        2732c8:	e5941170 	ldr	r1, [r4, #368]
        2732cc:	e1500001 	cmp	r0, r1
        2732d0:	b1a00001 	movlt	r0, r1
        2732d4:	e58d0098 	str	r0, [sp, #152]
        2732d8:	e5940134 	ldr	r0, [r4, #308]
        2732dc:	e5941174 	ldr	r1, [r4, #372]
        2732e0:	e1500001 	cmp	r0, r1
        2732e4:	a1a00001 	movge	r0, r1
        2732e8:	e58d0094 	str	r0, [sp, #148]
        2732ec:	e5940178 	ldr	r0, [r4, #376]
        2732f0:	e594213c 	ldr	r2, [r4, #316]
        2732f4:	e1520000 	cmp	r2, r0
        2732f8:	b1a02000 	movlt	r2, r0
        2732fc:	e58d2090 	str	r2, [sp, #144]
        273300:	e594217c 	ldr	r2, [r4, #380]
        273304:	e5943144 	ldr	r3, [r4, #324]
        273308:	e1530002 	cmp	r3, r2
        27330c:	a1a02003 	movge	r2, r3
        273310:	e0401001 	sub	r1, r0, r1
        273314:	e58d1080 	str	r1, [sp, #128]
        273318:	e58d208c 	str	r2, [sp, #140]
        27331c:	e5940154 	ldr	r0, [r4, #340]
        273320:	e594115c 	ldr	r1, [r4, #348]
        273324:	e0411000 	sub	r1, r1, r0
        273328:	e58d107c 	str	r1, [sp, #124]
        27332c:	eb6401a8 	bl	1b739d4 <$SegmentMinStrokeSize>
        273330:	e1a01000 	mov	r1, r0
        273334:	e3a00906 	mov	r0, #98304	; 0x18000
        273338:	eb65b761 	bl	1be10c4 <$FixedMultiply>
        27333c:	e59d107c 	ldr	r1, [sp, #124]
        273340:	e1500141 	cmp	r0, r1, asr #2
        273344:	b59d107c 	ldrlt	r1, [sp, #124]
        273348:	b1a00141 	movlt	r0, r1, asr #2
        27334c:	ba000003 	blt	273360 <WordRecogAddStroke+0xc38>
        273350:	eb64019f 	bl	1b739d4 <$SegmentMinStrokeSize>
        273354:	e1a01000 	mov	r1, r0
        273358:	e3a00906 	mov	r0, #98304	; 0x18000
        27335c:	eb65b758 	bl	1be10c4 <$FixedMultiply>
        273360:	e59d1080 	ldr	r1, [sp, #128]
        273364:	e1500001 	cmp	r0, r1
        273368:	da000006 	ble	273388 <WordRecogAddStroke+0xc60>
        27336c:	e594014c 	ldr	r0, [r4, #332]
        273370:	e59d107c 	ldr	r1, [sp, #124]
        273374:	e0400141 	sub	r0, r0, r1, asr #2
        273378:	e5941174 	ldr	r1, [r4, #372]
        27337c:	e1500001 	cmp	r0, r1
        273380:	b5940154 	ldrlt	r0, [r4, #340]
        273384:	ba000017 	blt	2733e8 <WordRecogAddStroke+0xcc0>
        273388:	e5940154 	ldr	r0, [r4, #340]
        27338c:	e594214c 	ldr	r2, [r4, #332]
        273390:	e1520000 	cmp	r2, r0
        273394:	a1a02000 	movge	r2, r0
        273398:	e59401ac 	ldr	r0, [r4, #428]
        27339c:	e0030290 	mul	r3, r0, r2
        2733a0:	e3500004 	cmp	r0, #4	; 0x4
        2733a4:	aa000003 	bge	2733b8 <WordRecogAddStroke+0xc90>
        2733a8:	e3500001 	cmp	r0, #1	; 0x1
        2733ac:	a1a01000 	movge	r1, r0
        2733b0:	b3a01001 	movlt	r1, #1	; 0x1
        2733b4:	ea000000 	b	2733bc <WordRecogAddStroke+0xc94>
        2733b8:	e3a01004 	mov	r1, #4	; 0x4
        2733bc:	e5942174 	ldr	r2, [r4, #372]
        2733c0:	e0213192 	mla	r1, r2, r1, r3
        2733c4:	e1a02000 	mov	r2, r0
        2733c8:	e3500004 	cmp	r0, #4	; 0x4
        2733cc:	aa000002 	bge	2733dc <WordRecogAddStroke+0xcb4>
        2733d0:	e3500001 	cmp	r0, #1	; 0x1
        2733d4:	b3a00001 	movlt	r0, #1	; 0x1
        2733d8:	ea000000 	b	2733e0 <WordRecogAddStroke+0xcb8>
        2733dc:	e3a00004 	mov	r0, #4	; 0x4
        2733e0:	e0820000 	add	r0, r2, r0
        2733e4:	eb64fd55 	bl	1bb2940 <$__rt_sdiv>
        2733e8:	e58d0088 	str	r0, [sp, #136]
        2733ec:	eb640178 	bl	1b739d4 <$SegmentMinStrokeSize>
        2733f0:	e1a01000 	mov	r1, r0
        2733f4:	e3a00906 	mov	r0, #98304	; 0x18000
        2733f8:	eb65b731 	bl	1be10c4 <$FixedMultiply>
        2733fc:	e59d107c 	ldr	r1, [sp, #124]
        273400:	e1500141 	cmp	r0, r1, asr #2
        273404:	b59d107c 	ldrlt	r1, [sp, #124]
        273408:	b1a00141 	movlt	r0, r1, asr #2
        27340c:	ba000003 	blt	273420 <WordRecogAddStroke+0xcf8>
        273410:	eb64016f 	bl	1b739d4 <$SegmentMinStrokeSize>
        273414:	e1a01000 	mov	r1, r0
        273418:	e3a00906 	mov	r0, #98304	; 0x18000
        27341c:	eb65b728 	bl	1be10c4 <$FixedMultiply>
        273420:	e59d1080 	ldr	r1, [sp, #128]
        273424:	e1500001 	cmp	r0, r1
        273428:	da000006 	ble	273448 <WordRecogAddStroke+0xd20>
        27342c:	e594014c 	ldr	r0, [r4, #332]
        273430:	e59d107c 	ldr	r1, [sp, #124]
        273434:	e0800141 	add	r0, r0, r1, asr #2
        273438:	e5941178 	ldr	r1, [r4, #376]
        27343c:	e1500001 	cmp	r0, r1
        273440:	c594015c 	ldrgt	r0, [r4, #348]
        273444:	ca000017 	bgt	2734a8 <WordRecogAddStroke+0xd80>
        273448:	e594014c 	ldr	r0, [r4, #332]
        27344c:	e594215c 	ldr	r2, [r4, #348]
        273450:	e1500002 	cmp	r0, r2
        273454:	c1a02000 	movgt	r2, r0
        273458:	e59401ac 	ldr	r0, [r4, #428]
        27345c:	e0030290 	mul	r3, r0, r2
        273460:	e3500004 	cmp	r0, #4	; 0x4
        273464:	aa000003 	bge	273478 <WordRecogAddStroke+0xd50>
        273468:	e3500001 	cmp	r0, #1	; 0x1
        27346c:	a1a01000 	movge	r1, r0
        273470:	b3a01001 	movlt	r1, #1	; 0x1
        273474:	ea000000 	b	27347c <WordRecogAddStroke+0xd54>
        273478:	e3a01004 	mov	r1, #4	; 0x4
        27347c:	e5942178 	ldr	r2, [r4, #376]
        273480:	e0213192 	mla	r1, r2, r1, r3
        273484:	e1a02000 	mov	r2, r0
        273488:	e3500004 	cmp	r0, #4	; 0x4
        27348c:	aa000002 	bge	27349c <WordRecogAddStroke+0xd74>
        273490:	e3500001 	cmp	r0, #1	; 0x1
        273494:	b3a00001 	movlt	r0, #1	; 0x1
        273498:	ea000000 	b	2734a0 <WordRecogAddStroke+0xd78>
        27349c:	e3a00004 	mov	r0, #4	; 0x4
        2734a0:	e0820000 	add	r0, r2, r0
        2734a4:	eb64fd25 	bl	1bb2940 <$__rt_sdiv>
        2734a8:	e58d0084 	str	r0, [sp, #132]
        2734ac:	eb640148 	bl	1b739d4 <$SegmentMinStrokeSize>
        2734b0:	e1a01000 	mov	r1, r0
        2734b4:	e3a00906 	mov	r0, #98304	; 0x18000
        2734b8:	eb65b701 	bl	1be10c4 <$FixedMultiply>
        2734bc:	e59d107c 	ldr	r1, [sp, #124]
        2734c0:	e1500141 	cmp	r0, r1, asr #2
        2734c4:	b59d107c 	ldrlt	r1, [sp, #124]
        2734c8:	b1a00141 	movlt	r0, r1, asr #2
        2734cc:	ba000003 	blt	2734e0 <WordRecogAddStroke+0xdb8>
        2734d0:	eb64013f 	bl	1b739d4 <$SegmentMinStrokeSize>
        2734d4:	e1a01000 	mov	r1, r0
        2734d8:	e3a00906 	mov	r0, #98304	; 0x18000
        2734dc:	eb65b6f8 	bl	1be10c4 <$FixedMultiply>
        2734e0:	e59d1080 	ldr	r1, [sp, #128]
        2734e4:	e1500001 	cmp	r0, r1
        2734e8:	da000009 	ble	273514 <WordRecogAddStroke+0xdec>
        2734ec:	e5940180 	ldr	r0, [r4, #384]
        2734f0:	e594114c 	ldr	r1, [r4, #332]
        2734f4:	e0500001 	subs	r0, r0, r1
        2734f8:	e59d10cc 	ldr	r1, [sp, #204]
        2734fc:	e5810000 	str	r0, [r1]
        273500:	42600000 	rsbmi	r0, r0, #0	; 0x0
        273504:	e59d107c 	ldr	r1, [sp, #124]
        273508:	e1500141 	cmp	r0, r1, asr #2
        27350c:	c594014c 	ldrgt	r0, [r4, #332]
        273510:	ca000014 	bgt	273568 <WordRecogAddStroke+0xe40>
        273514:	e59401ac 	ldr	r0, [r4, #428]
        273518:	e594314c 	ldr	r3, [r4, #332]
        27351c:	e0020093 	mul	r2, r3, r0
        273520:	e3500004 	cmp	r0, #4	; 0x4
        273524:	aa000003 	bge	273538 <WordRecogAddStroke+0xe10>
        273528:	e3500001 	cmp	r0, #1	; 0x1
        27352c:	a1a01000 	movge	r1, r0
        273530:	b3a01001 	movlt	r1, #1	; 0x1
        273534:	ea000000 	b	27353c <WordRecogAddStroke+0xe14>
        273538:	e3a01004 	mov	r1, #4	; 0x4
        27353c:	e5943180 	ldr	r3, [r4, #384]
        273540:	e0212193 	mla	r1, r3, r1, r2
        273544:	e1a02000 	mov	r2, r0
        273548:	e3500004 	cmp	r0, #4	; 0x4
        27354c:	aa000002 	bge	27355c <WordRecogAddStroke+0xe34>
        273550:	e3500001 	cmp	r0, #1	; 0x1
        273554:	b3a00001 	movlt	r0, #1	; 0x1
        273558:	ea000000 	b	273560 <WordRecogAddStroke+0xe38>
        27355c:	e3a00004 	mov	r0, #4	; 0x4
        273560:	e0820000 	add	r0, r2, r0
        273564:	eb64fcf5 	bl	1bb2940 <$__rt_sdiv>
        273568:	e1a0c000 	mov	ip, r0
        27356c:	e5d50026 	ldrb	r0, [r5, #38]
        273570:	e3300000 	teq	r0, #0	; 0x0
        273574:	13a00000 	movne	r0, #0	; 0x0
        273578:	158d00c0 	strne	r0, [sp, #192]
        27357c:	1a00001e 	bne	2735fc <WordRecogAddStroke+0xed4>
        273580:	e28d30c0 	add	r3, sp, #192	; 0xc0
        273584:	e59d20d0 	ldr	r2, [sp, #208]
        273588:	e5940060 	ldr	r0, [r4, #96]
        27358c:	e5941120 	ldr	r1, [r4, #288]
        273590:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273594:	e5943164 	ldr	r3, [r4, #356]
        273598:	e59d20b4 	ldr	r2, [sp, #180]
        27359c:	e5941168 	ldr	r1, [r4, #360]
        2735a0:	e59d00b0 	ldr	r0, [sp, #176]
        2735a4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2735a8:	e59401ac 	ldr	r0, [r4, #428]
        2735ac:	e2803001 	add	r3, r0, #1	; 0x1
        2735b0:	e1a0000c 	mov	r0, ip
        2735b4:	e59d10a8 	ldr	r1, [sp, #168]
        2735b8:	e59d20a4 	ldr	r2, [sp, #164]
        2735bc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2735c0:	e59d00c8 	ldr	r0, [sp, #200]
        2735c4:	e59d10c4 	ldr	r1, [sp, #196]
        2735c8:	e59d20c0 	ldr	r2, [sp, #192]
        2735cc:	e59d30bc 	ldr	r3, [sp, #188]
        2735d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2735d4:	e1a02009 	mov	r2, r9
        2735d8:	e1a0100a 	mov	r1, sl
        2735dc:	e59d30dc 	ldr	r3, [sp, #220]
        2735e0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2735e4:	e1a03007 	mov	r3, r7
        2735e8:	e1a02008 	mov	r2, r8
        2735ec:	e59d00f8 	ldr	r0, [sp, #248]
        2735f0:	e59d10f4 	ldr	r1, [sp, #244]
        2735f4:	eb640502 	bl	1b74a04 <$SegmentWord>
        2735f8:	e28dd04c 	add	sp, sp, #76	; 0x4c
        2735fc:	e3a01000 	mov	r1, #0	; 0x0
        273600:	e59401a8 	ldr	r0, [r4, #424]
        273604:	e58411a8 	str	r1, [r4, #424]
        273608:	e594318c 	ldr	r3, [r4, #396]
        27360c:	e5942190 	ldr	r2, [r4, #400]
        273610:	e1a02842 	mov	r2, r2, asr #16
        273614:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        273618:	e1a01000 	mov	r1, r0
        27361c:	e2843f5f 	add	r3, r4, #380	; 0x17c
        273620:	e893000c 	ldmia	r3, {r2, r3}
        273624:	e1a00004 	mov	r0, r4
        273628:	eb640914 	bl	1b75a80 <$WordRecogAddStroke2>
        27362c:	e28dd00c 	add	sp, sp, #12	; 0xc
        273630:	e594016c 	ldr	r0, [r4, #364]
        273634:	e5941124 	ldr	r1, [r4, #292]
        273638:	e1510000 	cmp	r1, r0
        27363c:	b1a00001 	movlt	r0, r1
        273640:	e5840124 	str	r0, [r4, #292]
        273644:	e5940170 	ldr	r0, [r4, #368]
        273648:	e594112c 	ldr	r1, [r4, #300]
        27364c:	e1510000 	cmp	r1, r0
        273650:	a1a00001 	movge	r0, r1
        273654:	e584012c 	str	r0, [r4, #300]
        273658:	e5940174 	ldr	r0, [r4, #372]
        27365c:	e5941134 	ldr	r1, [r4, #308]
        273660:	e1510000 	cmp	r1, r0
        273664:	a1a01000 	movge	r1, r0
        273668:	e5841134 	str	r1, [r4, #308]
        27366c:	e5941178 	ldr	r1, [r4, #376]
        273670:	e594213c 	ldr	r2, [r4, #316]
        273674:	e1520001 	cmp	r2, r1
        273678:	b1a02001 	movlt	r2, r1
        27367c:	e584213c 	str	r2, [r4, #316]
        273680:	e5942144 	ldr	r2, [r4, #324]
        273684:	e594317c 	ldr	r3, [r4, #380]
        273688:	e1520003 	cmp	r2, r3
        27368c:	b1a02003 	movlt	r2, r3
        273690:	e0411000 	sub	r1, r1, r0
        273694:	e5842144 	str	r2, [r4, #324]
        273698:	e58d1080 	str	r1, [sp, #128]
        27369c:	e594015c 	ldr	r0, [r4, #348]
        2736a0:	e5941154 	ldr	r1, [r4, #340]
        2736a4:	e0401001 	sub	r1, r0, r1
        2736a8:	e58d107c 	str	r1, [sp, #124]
        2736ac:	eb6400c8 	bl	1b739d4 <$SegmentMinStrokeSize>
        2736b0:	e1a01000 	mov	r1, r0
        2736b4:	e3a00906 	mov	r0, #98304	; 0x18000
        2736b8:	eb65b681 	bl	1be10c4 <$FixedMultiply>
        2736bc:	e59d107c 	ldr	r1, [sp, #124]
        2736c0:	e1500141 	cmp	r0, r1, asr #2
        2736c4:	b59d107c 	ldrlt	r1, [sp, #124]
        2736c8:	b1a00141 	movlt	r0, r1, asr #2
        2736cc:	ba000003 	blt	2736e0 <WordRecogAddStroke+0xfb8>
        2736d0:	eb6400bf 	bl	1b739d4 <$SegmentMinStrokeSize>
        2736d4:	e1a01000 	mov	r1, r0
        2736d8:	e3a00906 	mov	r0, #98304	; 0x18000
        2736dc:	eb65b678 	bl	1be10c4 <$FixedMultiply>
        2736e0:	e59d1080 	ldr	r1, [sp, #128]
        2736e4:	e1500001 	cmp	r0, r1
        2736e8:	da000006 	ble	273708 <WordRecogAddStroke+0xfe0>
        2736ec:	e594014c 	ldr	r0, [r4, #332]
        2736f0:	e59d107c 	ldr	r1, [sp, #124]
        2736f4:	e0401141 	sub	r1, r0, r1, asr #2
        2736f8:	e5940174 	ldr	r0, [r4, #372]
        2736fc:	e1510000 	cmp	r1, r0
        273700:	b5940154 	ldrlt	r0, [r4, #340]
        273704:	ba000017 	blt	273768 <WordRecogAddStroke+0x1040>
        273708:	e594014c 	ldr	r0, [r4, #332]
        27370c:	e5942154 	ldr	r2, [r4, #340]
        273710:	e1500002 	cmp	r0, r2
        273714:	b1a02000 	movlt	r2, r0
        273718:	e59401ac 	ldr	r0, [r4, #428]
        27371c:	e0020290 	mul	r2, r0, r2
        273720:	e3500004 	cmp	r0, #4	; 0x4
        273724:	aa000003 	bge	273738 <WordRecogAddStroke+0x1010>
        273728:	e3500001 	cmp	r0, #1	; 0x1
        27372c:	a1a01000 	movge	r1, r0
        273730:	b3a01001 	movlt	r1, #1	; 0x1
        273734:	ea000000 	b	27373c <WordRecogAddStroke+0x1014>
        273738:	e3a01004 	mov	r1, #4	; 0x4
        27373c:	e5943174 	ldr	r3, [r4, #372]
        273740:	e0212193 	mla	r1, r3, r1, r2
        273744:	e1a02000 	mov	r2, r0
        273748:	e3500004 	cmp	r0, #4	; 0x4
        27374c:	aa000002 	bge	27375c <WordRecogAddStroke+0x1034>
        273750:	e3500001 	cmp	r0, #1	; 0x1
        273754:	b3a00001 	movlt	r0, #1	; 0x1
        273758:	ea000000 	b	273760 <WordRecogAddStroke+0x1038>
        27375c:	e3a00004 	mov	r0, #4	; 0x4
        273760:	e0820000 	add	r0, r2, r0
        273764:	eb64fc75 	bl	1bb2940 <$__rt_sdiv>
        273768:	e5840154 	str	r0, [r4, #340]
        27376c:	eb640098 	bl	1b739d4 <$SegmentMinStrokeSize>
        273770:	e1a01000 	mov	r1, r0
        273774:	e3a00906 	mov	r0, #98304	; 0x18000
        273778:	eb65b651 	bl	1be10c4 <$FixedMultiply>
        27377c:	e59d107c 	ldr	r1, [sp, #124]
        273780:	e1500141 	cmp	r0, r1, asr #2
        273784:	b59d107c 	ldrlt	r1, [sp, #124]
        273788:	b1a00141 	movlt	r0, r1, asr #2
        27378c:	ba000003 	blt	2737a0 <WordRecogAddStroke+0x1078>
        273790:	eb64008f 	bl	1b739d4 <$SegmentMinStrokeSize>
        273794:	e1a01000 	mov	r1, r0
        273798:	e3a00906 	mov	r0, #98304	; 0x18000
        27379c:	eb65b648 	bl	1be10c4 <$FixedMultiply>
        2737a0:	e59d1080 	ldr	r1, [sp, #128]
        2737a4:	e1500001 	cmp	r0, r1
        2737a8:	da000006 	ble	2737c8 <WordRecogAddStroke+0x10a0>
        2737ac:	e594014c 	ldr	r0, [r4, #332]
        2737b0:	e59d107c 	ldr	r1, [sp, #124]
        2737b4:	e0800141 	add	r0, r0, r1, asr #2
        2737b8:	e5941178 	ldr	r1, [r4, #376]
        2737bc:	e1500001 	cmp	r0, r1
        2737c0:	c594015c 	ldrgt	r0, [r4, #348]
        2737c4:	ca000017 	bgt	273828 <WordRecogAddStroke+0x1100>
        2737c8:	e594014c 	ldr	r0, [r4, #332]
        2737cc:	e594215c 	ldr	r2, [r4, #348]
        2737d0:	e1500002 	cmp	r0, r2
        2737d4:	c1a02000 	movgt	r2, r0
        2737d8:	e59401ac 	ldr	r0, [r4, #428]
        2737dc:	e0030290 	mul	r3, r0, r2
        2737e0:	e3500004 	cmp	r0, #4	; 0x4
        2737e4:	aa000003 	bge	2737f8 <WordRecogAddStroke+0x10d0>
        2737e8:	e3500001 	cmp	r0, #1	; 0x1
        2737ec:	a1a01000 	movge	r1, r0
        2737f0:	b3a01001 	movlt	r1, #1	; 0x1
        2737f4:	ea000000 	b	2737fc <WordRecogAddStroke+0x10d4>
        2737f8:	e3a01004 	mov	r1, #4	; 0x4
        2737fc:	e5942178 	ldr	r2, [r4, #376]
        273800:	e0213192 	mla	r1, r2, r1, r3
        273804:	e1a02000 	mov	r2, r0
        273808:	e3500004 	cmp	r0, #4	; 0x4
        27380c:	aa000002 	bge	27381c <WordRecogAddStroke+0x10f4>
        273810:	e3500001 	cmp	r0, #1	; 0x1
        273814:	b3a00001 	movlt	r0, #1	; 0x1
        273818:	ea000000 	b	273820 <WordRecogAddStroke+0x10f8>
        27381c:	e3a00004 	mov	r0, #4	; 0x4
        273820:	e0820000 	add	r0, r2, r0
        273824:	eb64fc45 	bl	1bb2940 <$__rt_sdiv>
        273828:	e584015c 	str	r0, [r4, #348]
        27382c:	eb640068 	bl	1b739d4 <$SegmentMinStrokeSize>
        273830:	e1a01000 	mov	r1, r0
        273834:	e3a00906 	mov	r0, #98304	; 0x18000
        273838:	eb65b621 	bl	1be10c4 <$FixedMultiply>
        27383c:	e59d107c 	ldr	r1, [sp, #124]
        273840:	e1500141 	cmp	r0, r1, asr #2
        273844:	b59d107c 	ldrlt	r1, [sp, #124]
        273848:	b1a00141 	movlt	r0, r1, asr #2
        27384c:	ba000003 	blt	273860 <WordRecogAddStroke+0x1138>
        273850:	eb64005f 	bl	1b739d4 <$SegmentMinStrokeSize>
        273854:	e1a01000 	mov	r1, r0
        273858:	e3a00906 	mov	r0, #98304	; 0x18000
        27385c:	eb65b618 	bl	1be10c4 <$FixedMultiply>
        273860:	e59d1080 	ldr	r1, [sp, #128]
        273864:	e1500001 	cmp	r0, r1
        273868:	da000009 	ble	273894 <WordRecogAddStroke+0x116c>
        27386c:	e5940180 	ldr	r0, [r4, #384]
        273870:	e594114c 	ldr	r1, [r4, #332]
        273874:	e0500001 	subs	r0, r0, r1
        273878:	e59d10cc 	ldr	r1, [sp, #204]
        27387c:	e5810000 	str	r0, [r1]
        273880:	42600000 	rsbmi	r0, r0, #0	; 0x0
        273884:	e59d107c 	ldr	r1, [sp, #124]
        273888:	e1500141 	cmp	r0, r1, asr #2
        27388c:	c594014c 	ldrgt	r0, [r4, #332]
        273890:	ca000014 	bgt	2738e8 <WordRecogAddStroke+0x11c0>
        273894:	e59401ac 	ldr	r0, [r4, #428]
        273898:	e594314c 	ldr	r3, [r4, #332]
        27389c:	e0020093 	mul	r2, r3, r0
        2738a0:	e3500004 	cmp	r0, #4	; 0x4
        2738a4:	aa000003 	bge	2738b8 <WordRecogAddStroke+0x1190>
        2738a8:	e3500001 	cmp	r0, #1	; 0x1
        2738ac:	a1a01000 	movge	r1, r0
        2738b0:	b3a01001 	movlt	r1, #1	; 0x1
        2738b4:	ea000000 	b	2738bc <WordRecogAddStroke+0x1194>
        2738b8:	e3a01004 	mov	r1, #4	; 0x4
        2738bc:	e5943180 	ldr	r3, [r4, #384]
        2738c0:	e0212193 	mla	r1, r3, r1, r2
        2738c4:	e1a02000 	mov	r2, r0
        2738c8:	e3500004 	cmp	r0, #4	; 0x4
        2738cc:	aa000002 	bge	2738dc <WordRecogAddStroke+0x11b4>
        2738d0:	e3500001 	cmp	r0, #1	; 0x1
        2738d4:	b3a00001 	movlt	r0, #1	; 0x1
        2738d8:	ea000000 	b	2738e0 <WordRecogAddStroke+0x11b8>
        2738dc:	e3a00004 	mov	r0, #4	; 0x4
        2738e0:	e0820000 	add	r0, r2, r0
        2738e4:	eb64fc15 	bl	1bb2940 <$__rt_sdiv>
        2738e8:	e584014c 	str	r0, [r4, #332]
        2738ec:	e59401ac 	ldr	r0, [r4, #428]
        2738f0:	e2800001 	add	r0, r0, #1	; 0x1
        2738f4:	e58401ac 	str	r0, [r4, #428]
        2738f8:	ea000166 	b	273e98 <WordRecogAddStroke+0x1770>
        2738fc:	e59d20c4 	ldr	r2, [sp, #196]
        273900:	e3320000 	teq	r2, #0	; 0x0
        273904:	0a000034 	beq	2739dc <WordRecogAddStroke+0x12b4>
        273908:	e3a0e000 	mov	lr, #0	; 0x0
        27390c:	e584e1a4 	str	lr, [r4, #420]
        273910:	e5960010 	ldr	r0, [r6, #16]
        273914:	e1350000 	teq	r5, r0
        273918:	05960008 	ldreq	r0, [r6, #8]
        27391c:	0a000003 	beq	273930 <WordRecogAddStroke+0x1208>
        273920:	e5960014 	ldr	r0, [r6, #20]
        273924:	e1350000 	teq	r5, r0
        273928:	15950004 	ldrne	r0, [r5, #4]
        27392c:	0596000c 	ldreq	r0, [r6, #12]
        273930:	e5941194 	ldr	r1, [r4, #404]
        273934:	e1500001 	cmp	r0, r1
        273938:	aa000024 	bge	2739d0 <WordRecogAddStroke+0x12a8>
        27393c:	e3a00001 	mov	r0, #1	; 0x1
        273940:	e58d0074 	str	r0, [sp, #116]
        273944:	e59401ac 	ldr	r0, [r4, #428]
        273948:	e3500000 	cmp	r0, #0	; 0x0
        27394c:	da000151 	ble	273e98 <WordRecogAddStroke+0x1770>
        273950:	e2501001 	subs	r1, r0, #1	; 0x1
        273954:	e1a03001 	mov	r3, r1
        273958:	4a000019 	bmi	2739c4 <WordRecogAddStroke+0x129c>
        27395c:	e5940024 	ldr	r0, [r4, #36]
        273960:	e7900101 	ldr	r0, [r0, r1, lsl #2]
        273964:	e596c010 	ldr	ip, [r6, #16]
        273968:	e130000c 	teq	r0, ip
        27396c:	05962008 	ldreq	r2, [r6, #8]
        273970:	0a000003 	beq	273984 <WordRecogAddStroke+0x125c>
        273974:	e5962014 	ldr	r2, [r6, #20]
        273978:	e1300002 	teq	r0, r2
        27397c:	15902004 	ldrne	r2, [r0, #4]
        273980:	0596200c 	ldreq	r2, [r6, #12]
        273984:	e135000c 	teq	r5, ip
        273988:	0596c008 	ldreq	ip, [r6, #8]
        27398c:	0a000003 	beq	2739a0 <WordRecogAddStroke+0x1278>
        273990:	e596c014 	ldr	ip, [r6, #20]
        273994:	e135000c 	teq	r5, ip
        273998:	1595c004 	ldrne	ip, [r5, #4]
        27399c:	0596c00c 	ldreq	ip, [r6, #12]
        2739a0:	e152000c 	cmp	r2, ip
        2739a4:	ca000002 	bgt	2739b4 <WordRecogAddStroke+0x128c>
        2739a8:	e5d02027 	ldrb	r2, [r0, #39]
        2739ac:	e3320000 	teq	r2, #0	; 0x0
        2739b0:	0a000003 	beq	2739c4 <WordRecogAddStroke+0x129c>
        2739b4:	e1a03001 	mov	r3, r1
        2739b8:	e2511001 	subs	r1, r1, #1	; 0x1
        2739bc:	e5a0e030 	str	lr, [r0, #48]!
        2739c0:	5affffe5 	bpl	27395c <WordRecogAddStroke+0x1234>
        2739c4:	e3330000 	teq	r3, #0	; 0x0
        2739c8:	03a00801 	moveq	r0, #65536	; 0x10000
        2739cc:	0a000000 	beq	2739d4 <WordRecogAddStroke+0x12ac>
        2739d0:	e3a00000 	mov	r0, #0	; 0x0
        2739d4:	e58d00c0 	str	r0, [sp, #192]
        2739d8:	ea00010d 	b	273e14 <WordRecogAddStroke+0x16ec>
        2739dc:	e5d50026 	ldrb	r0, [r5, #38]
        2739e0:	e3300000 	teq	r0, #0	; 0x0
        2739e4:	0a000004 	beq	2739fc <WordRecogAddStroke+0x12d4>
        2739e8:	e3a0e000 	mov	lr, #0	; 0x0
        2739ec:	e3a00000 	mov	r0, #0	; 0x0
        2739f0:	e584e1a4 	str	lr, [r4, #420]
        2739f4:	e58d00c0 	str	r0, [sp, #192]
        2739f8:	ea00001e 	b	273a78 <WordRecogAddStroke+0x1350>
        2739fc:	e28d30c0 	add	r3, sp, #192	; 0xc0
        273a00:	e59d20d0 	ldr	r2, [sp, #208]
        273a04:	e5940060 	ldr	r0, [r4, #96]
        273a08:	e5941120 	ldr	r1, [r4, #288]
        273a0c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273a10:	e5943164 	ldr	r3, [r4, #356]
        273a14:	e59d20b4 	ldr	r2, [sp, #180]
        273a18:	e5941168 	ldr	r1, [r4, #360]
        273a1c:	e59d00b0 	ldr	r0, [sp, #176]
        273a20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273a24:	e594014c 	ldr	r0, [r4, #332]
        273a28:	e5941154 	ldr	r1, [r4, #340]
        273a2c:	e594215c 	ldr	r2, [r4, #348]
        273a30:	e59431ac 	ldr	r3, [r4, #428]
        273a34:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273a38:	e594012c 	ldr	r0, [r4, #300]
        273a3c:	e5941134 	ldr	r1, [r4, #308]
        273a40:	e594213c 	ldr	r2, [r4, #316]
        273a44:	e5943144 	ldr	r3, [r4, #324]
        273a48:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273a4c:	e1a02009 	mov	r2, r9
        273a50:	e1a0100a 	mov	r1, sl
        273a54:	e5943124 	ldr	r3, [r4, #292]
        273a58:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        273a5c:	e1a03007 	mov	r3, r7
        273a60:	e1a02008 	mov	r2, r8
        273a64:	e59d00f8 	ldr	r0, [sp, #248]
        273a68:	e59d10f4 	ldr	r1, [sp, #244]
        273a6c:	eb6403e6 	bl	1b74a0c <$SegmentWordBkVt>
        273a70:	e28dd04c 	add	sp, sp, #76	; 0x4c
        273a74:	e58401a4 	str	r0, [r4, #420]
        273a78:	e59401a4 	ldr	r0, [r4, #420]
        273a7c:	e3300000 	teq	r0, #0	; 0x0
        273a80:	1a0000e3 	bne	273e14 <WordRecogAddStroke+0x16ec>
        273a84:	e5960010 	ldr	r0, [r6, #16]
        273a88:	e1350000 	teq	r5, r0
        273a8c:	05961008 	ldreq	r1, [r6, #8]
        273a90:	0a000003 	beq	273aa4 <WordRecogAddStroke+0x137c>
        273a94:	e5961014 	ldr	r1, [r6, #20]
        273a98:	e1350001 	teq	r5, r1
        273a9c:	15951004 	ldrne	r1, [r5, #4]
        273aa0:	0596100c 	ldreq	r1, [r6, #12]
        273aa4:	e5942194 	ldr	r2, [r4, #404]
        273aa8:	e1510002 	cmp	r1, r2
        273aac:	aa000077 	bge	273c90 <WordRecogAddStroke+0x1568>
        273ab0:	e24dd004 	sub	sp, sp, #4	; 0x4
        273ab4:	e59421ac 	ldr	r2, [r4, #428]
        273ab8:	e2421001 	sub	r1, r2, #1	; 0x1
        273abc:	e58d1000 	str	r1, [sp]
        273ac0:	e5943024 	ldr	r3, [r4, #36]
        273ac4:	e0832102 	add	r2, r3, r2, lsl #2
        273ac8:	e5122004 	ldr	r2, [r2, -#4]
        273acc:	e1320000 	teq	r2, r0
        273ad0:	05960008 	ldreq	r0, [r6, #8]
        273ad4:	0a000003 	beq	273ae8 <WordRecogAddStroke+0x13c0>
        273ad8:	e5960014 	ldr	r0, [r6, #20]
        273adc:	e1320000 	teq	r2, r0
        273ae0:	15b20004 	ldrne	r0, [r2, #4]!
        273ae4:	0596000c 	ldreq	r0, [r6, #12]
        273ae8:	e280e801 	add	lr, r0, #65536	; 0x10000
        273aec:	e3a00001 	mov	r0, #1	; 0x1
        273af0:	e3510000 	cmp	r1, #0	; 0x0
        273af4:	e58d0078 	str	r0, [sp, #120]
        273af8:	ba00002a 	blt	273ba8 <WordRecogAddStroke+0x1480>
        273afc:	e5940024 	ldr	r0, [r4, #36]
        273b00:	e7900101 	ldr	r0, [r0, r1, lsl #2]
        273b04:	e5962010 	ldr	r2, [r6, #16]
        273b08:	e1300002 	teq	r0, r2
        273b0c:	05963008 	ldreq	r3, [r6, #8]
        273b10:	0a000003 	beq	273b24 <WordRecogAddStroke+0x13fc>
        273b14:	e5963014 	ldr	r3, [r6, #20]
        273b18:	e1300003 	teq	r0, r3
        273b1c:	15903004 	ldrne	r3, [r0, #4]
        273b20:	0596300c 	ldreq	r3, [r6, #12]
        273b24:	e1350002 	teq	r5, r2
        273b28:	0596c008 	ldreq	ip, [r6, #8]
        273b2c:	0a000003 	beq	273b40 <WordRecogAddStroke+0x1418>
        273b30:	e596c014 	ldr	ip, [r6, #20]
        273b34:	e135000c 	teq	r5, ip
        273b38:	1595c004 	ldrne	ip, [r5, #4]
        273b3c:	0596c00c 	ldreq	ip, [r6, #12]
        273b40:	e153000c 	cmp	r3, ip
        273b44:	ca000002 	bgt	273b54 <WordRecogAddStroke+0x142c>
        273b48:	e5d03027 	ldrb	r3, [r0, #39]
        273b4c:	e3330000 	teq	r3, #0	; 0x0
        273b50:	0a000014 	beq	273ba8 <WordRecogAddStroke+0x1480>
        273b54:	e1300002 	teq	r0, r2
        273b58:	05963008 	ldreq	r3, [r6, #8]
        273b5c:	0a000003 	beq	273b70 <WordRecogAddStroke+0x1448>
        273b60:	e5963014 	ldr	r3, [r6, #20]
        273b64:	e1300003 	teq	r0, r3
        273b68:	15903004 	ldrne	r3, [r0, #4]
        273b6c:	0596300c 	ldreq	r3, [r6, #12]
        273b70:	e153000e 	cmp	r3, lr
        273b74:	aa000007 	bge	273b98 <WordRecogAddStroke+0x1470>
        273b78:	e1300002 	teq	r0, r2
        273b7c:	e58d1000 	str	r1, [sp]
        273b80:	0596e008 	ldreq	lr, [r6, #8]
        273b84:	0a000003 	beq	273b98 <WordRecogAddStroke+0x1470>
        273b88:	e5962014 	ldr	r2, [r6, #20]
        273b8c:	e1300002 	teq	r0, r2
        273b90:	1590e004 	ldrne	lr, [r0, #4]
        273b94:	0596e00c 	ldreq	lr, [r6, #12]
        273b98:	e3a02000 	mov	r2, #0	; 0x0
        273b9c:	e2511001 	subs	r1, r1, #1	; 0x1
        273ba0:	e5a02030 	str	r2, [r0, #48]!
        273ba4:	5affffd4 	bpl	273afc <WordRecogAddStroke+0x13d4>
        273ba8:	e594c1ac 	ldr	ip, [r4, #428]
        273bac:	e33c0001 	teq	ip, #1	; 0x1
        273bb0:	03a00000 	moveq	r0, #0	; 0x0
        273bb4:	058d00c4 	streq	r0, [sp, #196]
        273bb8:	0a000030 	beq	273c80 <WordRecogAddStroke+0x1558>
        273bbc:	e28d30c4 	add	r3, sp, #196	; 0xc4
        273bc0:	e59d20d4 	ldr	r2, [sp, #212]
        273bc4:	e5940060 	ldr	r0, [r4, #96]
        273bc8:	e5941120 	ldr	r1, [r4, #288]
        273bcc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273bd0:	e5943164 	ldr	r3, [r4, #356]
        273bd4:	e59d20b8 	ldr	r2, [sp, #184]
        273bd8:	e5941168 	ldr	r1, [r4, #360]
        273bdc:	e59d00b4 	ldr	r0, [sp, #180]
        273be0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273be4:	e24c3001 	sub	r3, ip, #1	; 0x1
        273be8:	e5940150 	ldr	r0, [r4, #336]
        273bec:	e5941158 	ldr	r1, [r4, #344]
        273bf0:	e5942160 	ldr	r2, [r4, #352]
        273bf4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273bf8:	e5940130 	ldr	r0, [r4, #304]
        273bfc:	e5941138 	ldr	r1, [r4, #312]
        273c00:	e5942140 	ldr	r2, [r4, #320]
        273c04:	e5943148 	ldr	r3, [r4, #328]
        273c08:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273c0c:	e1a02009 	mov	r2, r9
        273c10:	e1a0100a 	mov	r1, sl
        273c14:	e5943128 	ldr	r3, [r4, #296]
        273c18:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        273c1c:	e1a03007 	mov	r3, r7
        273c20:	e1a02008 	mov	r2, r8
        273c24:	e59d00fc 	ldr	r0, [sp, #252]
        273c28:	e59d10f8 	ldr	r1, [sp, #248]
        273c2c:	eb640378 	bl	1b74a14 <$SegmentWordXGap>
        273c30:	e59401ac 	ldr	r0, [r4, #428]
        273c34:	e2400001 	sub	r0, r0, #1	; 0x1
        273c38:	e5bd104c 	ldr	r1, [sp, #76]!
        273c3c:	e1300001 	teq	r0, r1
        273c40:	0a00000e 	beq	273c80 <WordRecogAddStroke+0x1558>
        273c44:	e28d30c4 	add	r3, sp, #196	; 0xc4
        273c48:	e1a02004 	mov	r2, r4
        273c4c:	e59d00a8 	ldr	r0, [sp, #168]
        273c50:	e59d10a4 	ldr	r1, [sp, #164]
        273c54:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273c58:	e1a03009 	mov	r3, r9
        273c5c:	e1a0200a 	mov	r2, sl
        273c60:	e1a01007 	mov	r1, r7
        273c64:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        273c68:	e1a03008 	mov	r3, r8
        273c6c:	e1a00005 	mov	r0, r5
        273c70:	e59d10cc 	ldr	r1, [sp, #204]
        273c74:	e59d20c8 	ldr	r2, [sp, #200]
        273c78:	eb640bb2 	bl	1b76b48 <$WRSegWordXGap>
        273c7c:	e28dd01c 	add	sp, sp, #28	; 0x1c
        273c80:	e3a0e000 	mov	lr, #0	; 0x0
        273c84:	e584e1a4 	str	lr, [r4, #420]
        273c88:	e28dd004 	add	sp, sp, #4	; 0x4
        273c8c:	ea000081 	b	273e98 <WordRecogAddStroke+0x1770>
        273c90:	e594c1ac 	ldr	ip, [r4, #428]
        273c94:	e35c0001 	cmp	ip, #1	; 0x1
        273c98:	da000039 	ble	273d84 <WordRecogAddStroke+0x165c>
        273c9c:	e5941024 	ldr	r1, [r4, #36]
        273ca0:	e081210c 	add	r2, r1, ip, lsl #2
        273ca4:	e5121004 	ldr	r1, [r2, -#4]
        273ca8:	e1310000 	teq	r1, r0
        273cac:	05961008 	ldreq	r1, [r6, #8]
        273cb0:	0a000003 	beq	273cc4 <WordRecogAddStroke+0x159c>
        273cb4:	e5963014 	ldr	r3, [r6, #20]
        273cb8:	e1310003 	teq	r1, r3
        273cbc:	15911004 	ldrne	r1, [r1, #4]
        273cc0:	0596100c 	ldreq	r1, [r6, #12]
        273cc4:	e5122008 	ldr	r2, [r2, -#8]
        273cc8:	e1320000 	teq	r2, r0
        273ccc:	05960008 	ldreq	r0, [r6, #8]
        273cd0:	0a000003 	beq	273ce4 <WordRecogAddStroke+0x15bc>
        273cd4:	e5960014 	ldr	r0, [r6, #20]
        273cd8:	e1320000 	teq	r2, r0
        273cdc:	15b20004 	ldrne	r0, [r2, #4]!
        273ce0:	0596000c 	ldreq	r0, [r6, #12]
        273ce4:	e1510000 	cmp	r1, r0
        273ce8:	da000025 	ble	273d84 <WordRecogAddStroke+0x165c>
        273cec:	e28d30c0 	add	r3, sp, #192	; 0xc0
        273cf0:	e59d20d0 	ldr	r2, [sp, #208]
        273cf4:	e5940060 	ldr	r0, [r4, #96]
        273cf8:	e5941120 	ldr	r1, [r4, #288]
        273cfc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273d00:	e5943164 	ldr	r3, [r4, #356]
        273d04:	e59d20b4 	ldr	r2, [sp, #180]
        273d08:	e5941168 	ldr	r1, [r4, #360]
        273d0c:	e59d00b0 	ldr	r0, [sp, #176]
        273d10:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273d14:	e24c3001 	sub	r3, ip, #1	; 0x1
        273d18:	e5940150 	ldr	r0, [r4, #336]
        273d1c:	e5941158 	ldr	r1, [r4, #344]
        273d20:	e5942160 	ldr	r2, [r4, #352]
        273d24:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273d28:	e5940130 	ldr	r0, [r4, #304]
        273d2c:	e5941138 	ldr	r1, [r4, #312]
        273d30:	e5942140 	ldr	r2, [r4, #320]
        273d34:	e5943148 	ldr	r3, [r4, #328]
        273d38:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273d3c:	e1a02009 	mov	r2, r9
        273d40:	e1a0100a 	mov	r1, sl
        273d44:	e5943128 	ldr	r3, [r4, #296]
        273d48:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        273d4c:	e1a03007 	mov	r3, r7
        273d50:	e1a02008 	mov	r2, r8
        273d54:	e59d00f8 	ldr	r0, [sp, #248]
        273d58:	e59d10f4 	ldr	r1, [sp, #244]
        273d5c:	eb64032c 	bl	1b74a14 <$SegmentWordXGap>
        273d60:	e28dd04c 	add	sp, sp, #76	; 0x4c
        273d64:	e59401ac 	ldr	r0, [r4, #428]
        273d68:	e5941024 	ldr	r1, [r4, #36]
        273d6c:	e0810100 	add	r0, r1, r0, lsl #2
        273d70:	e5301004 	ldr	r1, [r0, -#4]!
        273d74:	e5912030 	ldr	r2, [r1, #48]
        273d78:	e59d00c0 	ldr	r0, [sp, #192]
        273d7c:	e1520000 	cmp	r2, r0
        273d80:	c5a10030 	strgt	r0, [r1, #48]!
        273d84:	e5d50026 	ldrb	r0, [r5, #38]
        273d88:	e3300000 	teq	r0, #0	; 0x0
        273d8c:	13a0e000 	movne	lr, #0	; 0x0
        273d90:	1584e1a4 	strne	lr, [r4, #420]
        273d94:	1affff0d 	bne	2739d0 <WordRecogAddStroke+0x12a8>
        273d98:	e28d30c0 	add	r3, sp, #192	; 0xc0
        273d9c:	e59d20d0 	ldr	r2, [sp, #208]
        273da0:	e5940060 	ldr	r0, [r4, #96]
        273da4:	e5941120 	ldr	r1, [r4, #288]
        273da8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273dac:	e5943164 	ldr	r3, [r4, #356]
        273db0:	e59d20b4 	ldr	r2, [sp, #180]
        273db4:	e5941168 	ldr	r1, [r4, #360]
        273db8:	e59d00b0 	ldr	r0, [sp, #176]
        273dbc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273dc0:	e594014c 	ldr	r0, [r4, #332]
        273dc4:	e5941154 	ldr	r1, [r4, #340]
        273dc8:	e594215c 	ldr	r2, [r4, #348]
        273dcc:	e59431ac 	ldr	r3, [r4, #428]
        273dd0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273dd4:	e594012c 	ldr	r0, [r4, #300]
        273dd8:	e5941134 	ldr	r1, [r4, #308]
        273ddc:	e594213c 	ldr	r2, [r4, #316]
        273de0:	e5943144 	ldr	r3, [r4, #324]
        273de4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        273de8:	e1a02009 	mov	r2, r9
        273dec:	e1a0100a 	mov	r1, sl
        273df0:	e5943124 	ldr	r3, [r4, #292]
        273df4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        273df8:	e1a03007 	mov	r3, r7
        273dfc:	e1a02008 	mov	r2, r8
        273e00:	e59d00f8 	ldr	r0, [sp, #248]
        273e04:	e59d10f4 	ldr	r1, [sp, #244]
        273e08:	eb640301 	bl	1b74a14 <$SegmentWordXGap>
        273e0c:	e28dd04c 	add	sp, sp, #76	; 0x4c
        273e10:	e58401a4 	str	r0, [r4, #420]
        273e14:	e59401a4 	ldr	r0, [r4, #420]
        273e18:	e3300000 	teq	r0, #0	; 0x0
        273e1c:	0a00001d 	beq	273e98 <WordRecogAddStroke+0x1770>
        273e20:	e3300001 	teq	r0, #1	; 0x1
        273e24:	03a00001 	moveq	r0, #1	; 0x1
        273e28:	058d00b8 	streq	r0, [sp, #184]
        273e2c:	0a000025 	beq	273ec8 <WordRecogAddStroke+0x17a0>
        273e30:	e3a00000 	mov	r0, #0	; 0x0
        273e34:	e58d006c 	str	r0, [sp, #108]
        273e38:	e3a01001 	mov	r1, #1	; 0x1
        273e3c:	e59d20c8 	ldr	r2, [sp, #200]
        273e40:	e59d30c0 	ldr	r3, [sp, #192]
        273e44:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        273e48:	e1a03009 	mov	r3, r9
        273e4c:	e1a0200a 	mov	r2, sl
        273e50:	e1a01005 	mov	r1, r5
        273e54:	e1a00004 	mov	r0, r4
        273e58:	eb640708 	bl	1b75a80 <$WordRecogAddStroke2>
        273e5c:	e28dd00c 	add	sp, sp, #12	; 0xc
        273e60:	e3a0e000 	mov	lr, #0	; 0x0
        273e64:	e584e1a8 	str	lr, [r4, #424]
        273e68:	e584e1ac 	str	lr, [r4, #428]
        273e6c:	e59d00ac 	ldr	r0, [sp, #172]
        273e70:	e5840124 	str	r0, [r4, #292]
        273e74:	e59d10a8 	ldr	r1, [sp, #168]
        273e78:	e584112c 	str	r1, [r4, #300]
        273e7c:	e584713c 	str	r7, [r4, #316]
        273e80:	e5848134 	str	r8, [r4, #308]
        273e84:	e584a144 	str	sl, [r4, #324]
        273e88:	e584715c 	str	r7, [r4, #348]
        273e8c:	e5848154 	str	r8, [r4, #340]
        273e90:	e584914c 	str	r9, [r4, #332]
        273e94:	ea00000b 	b	273ec8 <WordRecogAddStroke+0x17a0>
        273e98:	e3a00000 	mov	r0, #0	; 0x0
        273e9c:	e58d006c 	str	r0, [sp, #108]
        273ea0:	e3a01000 	mov	r1, #0	; 0x0
        273ea4:	e59d20c8 	ldr	r2, [sp, #200]
        273ea8:	e59d30c0 	ldr	r3, [sp, #192]
        273eac:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        273eb0:	e1a03009 	mov	r3, r9
        273eb4:	e1a0200a 	mov	r2, sl
        273eb8:	e1a01005 	mov	r1, r5
        273ebc:	e1a00004 	mov	r0, r4
        273ec0:	eb6406ee 	bl	1b75a80 <$WordRecogAddStroke2>
        273ec4:	e28dd00c 	add	sp, sp, #12	; 0xc
        273ec8:	e59d00ac 	ldr	r0, [sp, #172]
        273ecc:	e584016c 	str	r0, [r4, #364]
        273ed0:	e59d10a8 	ldr	r1, [sp, #168]
        273ed4:	e2844e17 	add	r4, r4, #368	; 0x170
        273ed8:	e8840102 	stmia	r4, {r1, r8}
        273edc:	e2844008 	add	r4, r4, #8	; 0x8
        273ee0:	e8840480 	stmia	r4, {r7, sl}
        273ee4:	e5849008 	str	r9, [r4, #8]
        273ee8:	e2444f5e 	sub	r4, r4, #376	; 0x178
        273eec:	e59d00a4 	ldr	r0, [sp, #164]
        273ef0:	e5840184 	str	r0, [r4, #388]
        273ef4:	e59d00a0 	ldr	r0, [sp, #160]
        273ef8:	e5840188 	str	r0, [r4, #392]
        273efc:	e5960010 	ldr	r0, [r6, #16]
        273f00:	e1350000 	teq	r5, r0
        273f04:	05b60008 	ldreq	r0, [r6, #8]!
        273f08:	0a000003 	beq	273f1c <WordRecogAddStroke+0x17f4>
        273f0c:	e5960014 	ldr	r0, [r6, #20]
        273f10:	e1350000 	teq	r5, r0
        273f14:	15950004 	ldrne	r0, [r5, #4]
        273f18:	05b6000c 	ldreq	r0, [r6, #12]!
        273f1c:	e5840194 	str	r0, [r4, #404]
        273f20:	e59d00b8 	ldr	r0, [sp, #184]
        273f24:	e3300000 	teq	r0, #0	; 0x0
        273f28:	0a000009 	beq	273f54 <WordRecogAddStroke+0x182c>
        273f2c:	e59d20c8 	ldr	r2, [sp, #200]
        273f30:	e5c42191 	strb	r2, [r4, #401]
        273f34:	e1a00442 	mov	r0, r2, asr #8
        273f38:	e5c40190 	strb	r0, [r4, #400]
        273f3c:	e59d00c0 	ldr	r0, [sp, #192]
        273f40:	e5a4018c 	str	r0, [r4, #396]!
        273f44:	e5a4501c 	str	r5, [r4, #28]!
        273f48:	e3a00000 	mov	r0, #0	; 0x0
        273f4c:	e58d006c 	str	r0, [sp, #108]
        273f50:	ea0000b2 	b	274220 <WordRecogAddStroke+0x1af8>
        273f54:	e59d0074 	ldr	r0, [sp, #116]
        273f58:	e3300000 	teq	r0, #0	; 0x0
        273f5c:	1a00000f 	bne	273fa0 <WordRecogAddStroke+0x1878>
        273f60:	e5940124 	ldr	r0, [r4, #292]
        273f64:	e5840128 	str	r0, [r4, #296]
        273f68:	e594012c 	ldr	r0, [r4, #300]
        273f6c:	e5840130 	str	r0, [r4, #304]
        273f70:	e5940134 	ldr	r0, [r4, #308]
        273f74:	e5840138 	str	r0, [r4, #312]
        273f78:	e594013c 	ldr	r0, [r4, #316]
        273f7c:	e5840140 	str	r0, [r4, #320]
        273f80:	e5940144 	ldr	r0, [r4, #324]
        273f84:	e5840148 	str	r0, [r4, #328]
        273f88:	e5940154 	ldr	r0, [r4, #340]
        273f8c:	e5840158 	str	r0, [r4, #344]
        273f90:	e594015c 	ldr	r0, [r4, #348]
        273f94:	e5840160 	str	r0, [r4, #352]
        273f98:	e594014c 	ldr	r0, [r4, #332]
        273f9c:	e5840150 	str	r0, [r4, #336]
        273fa0:	e5940124 	ldr	r0, [r4, #292]
        273fa4:	e59d10ac 	ldr	r1, [sp, #172]
        273fa8:	e1500001 	cmp	r0, r1
        273fac:	a59d00ac 	ldrge	r0, [sp, #172]
        273fb0:	e5840124 	str	r0, [r4, #292]
        273fb4:	e594012c 	ldr	r0, [r4, #300]
        273fb8:	e59d10a8 	ldr	r1, [sp, #168]
        273fbc:	e1500001 	cmp	r0, r1
        273fc0:	b59d00a8 	ldrlt	r0, [sp, #168]
        273fc4:	e584012c 	str	r0, [r4, #300]
        273fc8:	e5940134 	ldr	r0, [r4, #308]
        273fcc:	e1500008 	cmp	r0, r8
        273fd0:	a1a00008 	movge	r0, r8
        273fd4:	e5840134 	str	r0, [r4, #308]
        273fd8:	e594013c 	ldr	r0, [r4, #316]
        273fdc:	e1500007 	cmp	r0, r7
        273fe0:	b1a00007 	movlt	r0, r7
        273fe4:	e584013c 	str	r0, [r4, #316]
        273fe8:	e5940144 	ldr	r0, [r4, #324]
        273fec:	e150000a 	cmp	r0, sl
        273ff0:	b1a0000a 	movlt	r0, sl
        273ff4:	e0476008 	sub	r6, r7, r8
        273ff8:	e5840144 	str	r0, [r4, #324]
        273ffc:	e594015c 	ldr	r0, [r4, #348]
        274000:	e5941154 	ldr	r1, [r4, #340]
        274004:	e0405001 	sub	r5, r0, r1
        274008:	eb63fe71 	bl	1b739d4 <$SegmentMinStrokeSize>
        27400c:	e1a01000 	mov	r1, r0
        274010:	e3a00906 	mov	r0, #98304	; 0x18000
        274014:	eb65b42a 	bl	1be10c4 <$FixedMultiply>
        274018:	e1500145 	cmp	r0, r5, asr #2
        27401c:	b1a00145 	movlt	r0, r5, asr #2
        274020:	ba000003 	blt	274034 <WordRecogAddStroke+0x190c>
        274024:	eb63fe6a 	bl	1b739d4 <$SegmentMinStrokeSize>
        274028:	e1a01000 	mov	r1, r0
        27402c:	e3a00906 	mov	r0, #98304	; 0x18000
        274030:	eb65b423 	bl	1be10c4 <$FixedMultiply>
        274034:	e1500006 	cmp	r0, r6
        274038:	da000004 	ble	274050 <WordRecogAddStroke+0x1928>
        27403c:	e594014c 	ldr	r0, [r4, #332]
        274040:	e0400145 	sub	r0, r0, r5, asr #2
        274044:	e1500008 	cmp	r0, r8
        274048:	b5940154 	ldrlt	r0, [r4, #340]
        27404c:	ba000016 	blt	2740ac <WordRecogAddStroke+0x1984>
        274050:	e5940154 	ldr	r0, [r4, #340]
        274054:	e594214c 	ldr	r2, [r4, #332]
        274058:	e1520000 	cmp	r2, r0
        27405c:	a1a02000 	movge	r2, r0
        274060:	e59401ac 	ldr	r0, [r4, #428]
        274064:	e0020290 	mul	r2, r0, r2
        274068:	e3500004 	cmp	r0, #4	; 0x4
        27406c:	aa000003 	bge	274080 <WordRecogAddStroke+0x1958>
        274070:	e3500001 	cmp	r0, #1	; 0x1
        274074:	a1a01000 	movge	r1, r0
        274078:	b3a01001 	movlt	r1, #1	; 0x1
        27407c:	ea000000 	b	274084 <WordRecogAddStroke+0x195c>
        274080:	e3a01004 	mov	r1, #4	; 0x4
        274084:	e0212198 	mla	r1, r8, r1, r2
        274088:	e1a02000 	mov	r2, r0
        27408c:	e3500004 	cmp	r0, #4	; 0x4
        274090:	aa000002 	bge	2740a0 <WordRecogAddStroke+0x1978>
        274094:	e3500001 	cmp	r0, #1	; 0x1
        274098:	b3a00001 	movlt	r0, #1	; 0x1
        27409c:	ea000000 	b	2740a4 <WordRecogAddStroke+0x197c>
        2740a0:	e3a00004 	mov	r0, #4	; 0x4
        2740a4:	e0820000 	add	r0, r2, r0
        2740a8:	eb64fa24 	bl	1bb2940 <$__rt_sdiv>
        2740ac:	e5840154 	str	r0, [r4, #340]
        2740b0:	eb63fe47 	bl	1b739d4 <$SegmentMinStrokeSize>
        2740b4:	e1a01000 	mov	r1, r0
        2740b8:	e3a00906 	mov	r0, #98304	; 0x18000
        2740bc:	eb65b400 	bl	1be10c4 <$FixedMultiply>
        2740c0:	e1500145 	cmp	r0, r5, asr #2
        2740c4:	b1a00145 	movlt	r0, r5, asr #2
        2740c8:	ba000003 	blt	2740dc <WordRecogAddStroke+0x19b4>
        2740cc:	eb63fe40 	bl	1b739d4 <$SegmentMinStrokeSize>
        2740d0:	e1a01000 	mov	r1, r0
        2740d4:	e3a00906 	mov	r0, #98304	; 0x18000
        2740d8:	eb65b3f9 	bl	1be10c4 <$FixedMultiply>
        2740dc:	e1500006 	cmp	r0, r6
        2740e0:	c594014c 	ldrgt	r0, [r4, #332]
        2740e4:	c0800145 	addgt	r0, r0, r5, asr #2
        2740e8:	c1500007 	cmpgt	r0, r7
        2740ec:	c594015c 	ldrgt	r0, [r4, #348]
        2740f0:	ca000016 	bgt	274150 <WordRecogAddStroke+0x1a28>
        2740f4:	e594014c 	ldr	r0, [r4, #332]
        2740f8:	e594115c 	ldr	r1, [r4, #348]
        2740fc:	e1500001 	cmp	r0, r1
        274100:	c1a01000 	movgt	r1, r0
        274104:	e59401ac 	ldr	r0, [r4, #428]
        274108:	e0010190 	mul	r1, r0, r1
        27410c:	e3500004 	cmp	r0, #4	; 0x4
        274110:	aa000003 	bge	274124 <WordRecogAddStroke+0x19fc>
        274114:	e3500001 	cmp	r0, #1	; 0x1
        274118:	a1a02000 	movge	r2, r0
        27411c:	b3a02001 	movlt	r2, #1	; 0x1
        274120:	ea000000 	b	274128 <WordRecogAddStroke+0x1a00>
        274124:	e3a02004 	mov	r2, #4	; 0x4
        274128:	e0211297 	mla	r1, r7, r2, r1
        27412c:	e1a02000 	mov	r2, r0
        274130:	e3500004 	cmp	r0, #4	; 0x4
        274134:	aa000002 	bge	274144 <WordRecogAddStroke+0x1a1c>
        274138:	e3500001 	cmp	r0, #1	; 0x1
        27413c:	b3a00001 	movlt	r0, #1	; 0x1
        274140:	ea000000 	b	274148 <WordRecogAddStroke+0x1a20>
        274144:	e3a00004 	mov	r0, #4	; 0x4
        274148:	e0820000 	add	r0, r2, r0
        27414c:	eb64f9fb 	bl	1bb2940 <$__rt_sdiv>
        274150:	e584015c 	str	r0, [r4, #348]
        274154:	eb63fe1e 	bl	1b739d4 <$SegmentMinStrokeSize>
        274158:	e1a01000 	mov	r1, r0
        27415c:	e3a00906 	mov	r0, #98304	; 0x18000
        274160:	eb65b3d7 	bl	1be10c4 <$FixedMultiply>
        274164:	e1500145 	cmp	r0, r5, asr #2
        274168:	b1a00145 	movlt	r0, r5, asr #2
        27416c:	ba000003 	blt	274180 <WordRecogAddStroke+0x1a58>
        274170:	eb63fe17 	bl	1b739d4 <$SegmentMinStrokeSize>
        274174:	e1a01000 	mov	r1, r0
        274178:	e3a00906 	mov	r0, #98304	; 0x18000
        27417c:	eb65b3d0 	bl	1be10c4 <$FixedMultiply>
        274180:	e1500006 	cmp	r0, r6
        274184:	da000007 	ble	2741a8 <WordRecogAddStroke+0x1a80>
        274188:	e594014c 	ldr	r0, [r4, #332]
        27418c:	e0590000 	subs	r0, r9, r0
        274190:	e59d10cc 	ldr	r1, [sp, #204]
        274194:	e5810000 	str	r0, [r1]
        274198:	42600000 	rsbmi	r0, r0, #0	; 0x0
        27419c:	e1500145 	cmp	r0, r5, asr #2
        2741a0:	c594014c 	ldrgt	r0, [r4, #332]
        2741a4:	ca000013 	bgt	2741f8 <WordRecogAddStroke+0x1ad0>
        2741a8:	e59401ac 	ldr	r0, [r4, #428]
        2741ac:	e594314c 	ldr	r3, [r4, #332]
        2741b0:	e0020093 	mul	r2, r3, r0
        2741b4:	e3500004 	cmp	r0, #4	; 0x4
        2741b8:	aa000003 	bge	2741cc <WordRecogAddStroke+0x1aa4>
        2741bc:	e3500001 	cmp	r0, #1	; 0x1
        2741c0:	a1a01000 	movge	r1, r0
        2741c4:	b3a01001 	movlt	r1, #1	; 0x1
        2741c8:	ea000000 	b	2741d0 <WordRecogAddStroke+0x1aa8>
        2741cc:	e3a01004 	mov	r1, #4	; 0x4
        2741d0:	e0212199 	mla	r1, r9, r1, r2
        2741d4:	e1a02000 	mov	r2, r0
        2741d8:	e3500004 	cmp	r0, #4	; 0x4
        2741dc:	aa000002 	bge	2741ec <WordRecogAddStroke+0x1ac4>
        2741e0:	e3500001 	cmp	r0, #1	; 0x1
        2741e4:	b3a00001 	movlt	r0, #1	; 0x1
        2741e8:	ea000000 	b	2741f0 <WordRecogAddStroke+0x1ac8>
        2741ec:	e3a00004 	mov	r0, #4	; 0x4
        2741f0:	e0820000 	add	r0, r2, r0
        2741f4:	eb64f9d1 	bl	1bb2940 <$__rt_sdiv>
        2741f8:	e584014c 	str	r0, [r4, #332]
        2741fc:	e59d00a4 	ldr	r0, [sp, #164]
        274200:	e5840164 	str	r0, [r4, #356]
        274204:	e59d00a0 	ldr	r0, [sp, #160]
        274208:	e5840168 	str	r0, [r4, #360]
        27420c:	e59401ac 	ldr	r0, [r4, #428]
        274210:	e2800001 	add	r0, r0, #1	; 0x1
        274214:	e3a0e000 	mov	lr, #0	; 0x0
        274218:	e5a4e1a8 	str	lr, [r4, #424]!
        27421c:	e5840004 	str	r0, [r4, #4]
        274220:	e1a0000d 	mov	r0, sp
        274224:	eb65b3a3 	bl	1be10b8 <$ExitHandler>
        274228:	e28dd06c 	add	sp, sp, #108	; 0x6c
        27422c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        274230:	e59d006c 	ldr	r0, [sp, #108]
        274234:	eb6401fe 	bl	1b74a34 <$StrokeDestroy>
        274238:	e1a0000d 	mov	r0, sp
        27423c:	eb65b7c4 	bl	1be2154 <$NextHandler>
        274240:	eafffffa 	b	274230 <WordRecogAddStroke+0x1b08>
    */
}

/**
 * Symbol: WRSegWordXGap
 * Address: 00274244
 */
void globals::WRSegWordXGap() {
    /*
        274244:	e1a0c00d 	mov	ip, sp
        274248:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        27424c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        274250:	e24cb014 	sub	fp, ip, #20	; 0x14
        274254:	e59b5028 	ldr	r5, [fp, #40]
        274258:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        27425c:	e59f6204 	ldr	r6, [pc, #204]	; 274468 <WRSegWordXGap+0x224>
        274260:	e5961010 	ldr	r1, [r6, #16]
        274264:	e1300001 	teq	r0, r1
        274268:	0596c008 	ldreq	ip, [r6, #8]
        27426c:	0a000003 	beq	274280 <WRSegWordXGap+0x3c>
        274270:	e5961014 	ldr	r1, [r6, #20]
        274274:	e1300001 	teq	r0, r1
        274278:	15b0c004 	ldrne	ip, [r0, #4]!
        27427c:	0596c00c 	ldreq	ip, [r6, #12]
        274280:	e58dc008 	str	ip, [sp, #8]
        274284:	e3e0c000 	mvn	ip, #0	; 0x0
        274288:	e58dc024 	str	ip, [sp, #36]
        27428c:	e5950024 	ldr	r0, [r5, #36]
        274290:	e5900000 	ldr	r0, [r0]
        274294:	e1a0100d 	mov	r1, sp
        274298:	eb6401e3 	bl	1b74a2c <$StrokeCentroid>
        27429c:	e5950024 	ldr	r0, [r5, #36]
        2742a0:	e5900000 	ldr	r0, [r0]
        2742a4:	e280a010 	add	sl, r0, #16	; 0x10
        2742a8:	e89a0402 	ldmia	sl, {r1, sl}
        2742ac:	e590900c 	ldr	r9, [r0, #12]
        2742b0:	e58d1020 	str	r1, [sp, #32]
        2742b4:	e5900018 	ldr	r0, [r0, #24]
        2742b8:	e58d001c 	str	r0, [sp, #28]
        2742bc:	e59d3000 	ldr	r3, [sp]
        2742c0:	e58d0010 	str	r0, [sp, #16]
        2742c4:	e58d1014 	str	r1, [sp, #20]
        2742c8:	e58d3018 	str	r3, [sp, #24]
        2742cc:	e3a04000 	mov	r4, #0	; 0x0
        2742d0:	e59d7004 	ldr	r7, [sp, #4]
        2742d4:	e59501ac 	ldr	r0, [r5, #428]
        2742d8:	e3500000 	cmp	r0, #0	; 0x0
        2742dc:	da0000d4 	ble	274634 <WRSegWordXGap+0x3f0>
        2742e0:	e59f1184 	ldr	r1, [pc, #184]	; 27446c <WRSegWordXGap+0x228>
        2742e4:	e58d1028 	str	r1, [sp, #40]
        2742e8:	e5953024 	ldr	r3, [r5, #36]
        2742ec:	e7930104 	ldr	r0, [r3, r4, lsl #2]
        2742f0:	e5961010 	ldr	r1, [r6, #16]
        2742f4:	e1300001 	teq	r0, r1
        2742f8:	05962008 	ldreq	r2, [r6, #8]
        2742fc:	0a000003 	beq	274310 <WRSegWordXGap+0xcc>
        274300:	e5962014 	ldr	r2, [r6, #20]
        274304:	e1300002 	teq	r0, r2
        274308:	15902004 	ldrne	r2, [r0, #4]
        27430c:	0596200c 	ldreq	r2, [r6, #12]
        274310:	e59dc008 	ldr	ip, [sp, #8]
        274314:	e152000c 	cmp	r2, ip
        274318:	aa0000be 	bge	274618 <WRSegWordXGap+0x3d4>
        27431c:	e59dc024 	ldr	ip, [sp, #36]
        274320:	e35c0000 	cmp	ip, #0	; 0x0
        274324:	ba000011 	blt	274370 <WRSegWordXGap+0x12c>
        274328:	e1300001 	teq	r0, r1
        27432c:	05962008 	ldreq	r2, [r6, #8]
        274330:	0a000003 	beq	274344 <WRSegWordXGap+0x100>
        274334:	e5962014 	ldr	r2, [r6, #20]
        274338:	e1300002 	teq	r0, r2
        27433c:	15902004 	ldrne	r2, [r0, #4]
        274340:	0596200c 	ldreq	r2, [r6, #12]
        274344:	e59dc024 	ldr	ip, [sp, #36]
        274348:	e793310c 	ldr	r3, [r3, ip, lsl #2]
        27434c:	e1330001 	teq	r3, r1
        274350:	05961008 	ldreq	r1, [r6, #8]
        274354:	0a000003 	beq	274368 <WRSegWordXGap+0x124>
        274358:	e5961014 	ldr	r1, [r6, #20]
        27435c:	e1330001 	teq	r3, r1
        274360:	15b31004 	ldrne	r1, [r3, #4]!
        274364:	0596100c 	ldreq	r1, [r6, #12]
        274368:	e1520001 	cmp	r2, r1
        27436c:	da000000 	ble	274374 <WRSegWordXGap+0x130>
        274370:	e58d4024 	str	r4, [sp, #36]
        274374:	e1a0100d 	mov	r1, sp
        274378:	eb6401ab 	bl	1b74a2c <$StrokeCentroid>
        27437c:	e5950024 	ldr	r0, [r5, #36]
        274380:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        274384:	e590100c 	ldr	r1, [r0, #12]
        274388:	e1510009 	cmp	r1, r9
        27438c:	d1a09001 	movle	r9, r1
        274390:	e5901014 	ldr	r1, [r0, #20]
        274394:	e151000a 	cmp	r1, sl
        274398:	c1a0a001 	movgt	sl, r1
        27439c:	e5901010 	ldr	r1, [r0, #16]
        2743a0:	e1510009 	cmp	r1, r9
        2743a4:	d1a02001 	movle	r2, r1
        2743a8:	c1a02009 	movgt	r2, r9
        2743ac:	e58d2020 	str	r2, [sp, #32]
        2743b0:	e5900018 	ldr	r0, [r0, #24]
        2743b4:	e150000a 	cmp	r0, sl
        2743b8:	d1a0200a 	movle	r2, sl
        2743bc:	c1a02000 	movgt	r2, r0
        2743c0:	e58d201c 	str	r2, [sp, #28]
        2743c4:	e59d2000 	ldr	r2, [sp]
        2743c8:	e59d3018 	ldr	r3, [sp, #24]
        2743cc:	e1530002 	cmp	r3, r2
        2743d0:	a59d3018 	ldrge	r3, [sp, #24]
        2743d4:	b59d3000 	ldrlt	r3, [sp]
        2743d8:	e0401001 	sub	r1, r0, r1
        2743dc:	e58d100c 	str	r1, [sp, #12]
        2743e0:	e58d3018 	str	r3, [sp, #24]
        2743e4:	e28d1010 	add	r1, sp, #16	; 0x10
        2743e8:	e8910003 	ldmia	r1, {r0, r1}
        2743ec:	e0408001 	sub	r8, r0, r1
        2743f0:	eb63fd77 	bl	1b739d4 <$SegmentMinStrokeSize>
        2743f4:	e1a01000 	mov	r1, r0
        2743f8:	e3a00906 	mov	r0, #98304	; 0x18000
        2743fc:	eb65b330 	bl	1be10c4 <$FixedMultiply>
        274400:	e1500148 	cmp	r0, r8, asr #2
        274404:	b1a00148 	movlt	r0, r8, asr #2
        274408:	ba000003 	blt	27441c <WRSegWordXGap+0x1d8>
        27440c:	eb63fd70 	bl	1b739d4 <$SegmentMinStrokeSize>
        274410:	e1a01000 	mov	r1, r0
        274414:	e3a00906 	mov	r0, #98304	; 0x18000
        274418:	eb65b329 	bl	1be10c4 <$FixedMultiply>
        27441c:	e59d100c 	ldr	r1, [sp, #12]
        274420:	e1500001 	cmp	r0, r1
        274424:	da000006 	ble	274444 <WRSegWordXGap+0x200>
        274428:	e5950024 	ldr	r0, [r5, #36]
        27442c:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        274430:	e5900010 	ldr	r0, [r0, #16]
        274434:	e0471148 	sub	r1, r7, r8, asr #2
        274438:	e1500001 	cmp	r0, r1
        27443c:	c59d0014 	ldrgt	r0, [sp, #20]
        274440:	ca00001a 	bgt	2744b0 <WRSegWordXGap+0x26c>
        274444:	e5950024 	ldr	r0, [r5, #36]
        274448:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        27444c:	e3540004 	cmp	r4, #4	; 0x4
        274450:	e5b01010 	ldr	r1, [r0, #16]!
        274454:	aa000005 	bge	274470 <WRSegWordXGap+0x22c>
        274458:	e3540001 	cmp	r4, #1	; 0x1
        27445c:	a1a00004 	movge	r0, r4
        274460:	b3a00001 	movlt	r0, #1	; 0x1
        274464:	ea000002 	b	274474 <WRSegWordXGap+0x230>
        274468:	0c104f84 	ldceq	15, cr4, [r0], -#528
        27446c:	0c10089c 	ldceq	8, cr0, [r0], -#624
        274470:	e3a00004 	mov	r0, #4	; 0x4
        274474:	e0010190 	mul	r1, r0, r1
        274478:	e59d0014 	ldr	r0, [sp, #20]
        27447c:	e1570000 	cmp	r7, r0
        274480:	a59d0014 	ldrge	r0, [sp, #20]
        274484:	b1a00007 	movlt	r0, r7
        274488:	e0211094 	mla	r1, r4, r0, r1
        27448c:	e3540004 	cmp	r4, #4	; 0x4
        274490:	aa000003 	bge	2744a4 <WRSegWordXGap+0x260>
        274494:	e3540001 	cmp	r4, #1	; 0x1
        274498:	a1a00004 	movge	r0, r4
        27449c:	b3a00001 	movlt	r0, #1	; 0x1
        2744a0:	ea000000 	b	2744a8 <WRSegWordXGap+0x264>
        2744a4:	e3a00004 	mov	r0, #4	; 0x4
        2744a8:	e0800004 	add	r0, r0, r4
        2744ac:	eb64f923 	bl	1bb2940 <$__rt_sdiv>
        2744b0:	e58d0014 	str	r0, [sp, #20]
        2744b4:	eb63fd46 	bl	1b739d4 <$SegmentMinStrokeSize>
        2744b8:	e1a01000 	mov	r1, r0
        2744bc:	e3a00906 	mov	r0, #98304	; 0x18000
        2744c0:	eb65b2ff 	bl	1be10c4 <$FixedMultiply>
        2744c4:	e1500148 	cmp	r0, r8, asr #2
        2744c8:	b1a00148 	movlt	r0, r8, asr #2
        2744cc:	ba000003 	blt	2744e0 <WRSegWordXGap+0x29c>
        2744d0:	eb63fd3f 	bl	1b739d4 <$SegmentMinStrokeSize>
        2744d4:	e1a01000 	mov	r1, r0
        2744d8:	e3a00906 	mov	r0, #98304	; 0x18000
        2744dc:	eb65b2f8 	bl	1be10c4 <$FixedMultiply>
        2744e0:	e59d100c 	ldr	r1, [sp, #12]
        2744e4:	e1500001 	cmp	r0, r1
        2744e8:	da000006 	ble	274508 <WRSegWordXGap+0x2c4>
        2744ec:	e5950024 	ldr	r0, [r5, #36]
        2744f0:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        2744f4:	e5900018 	ldr	r0, [r0, #24]
        2744f8:	e0871148 	add	r1, r7, r8, asr #2
        2744fc:	e1500001 	cmp	r0, r1
        274500:	b59d0010 	ldrlt	r0, [sp, #16]
        274504:	ba000018 	blt	27456c <WRSegWordXGap+0x328>
        274508:	e5950024 	ldr	r0, [r5, #36]
        27450c:	e7900104 	ldr	r0, [r0, r4, lsl #2]
        274510:	e5900018 	ldr	r0, [r0, #24]
        274514:	e3540004 	cmp	r4, #4	; 0x4
        274518:	aa000003 	bge	27452c <WRSegWordXGap+0x2e8>
        27451c:	e3540001 	cmp	r4, #1	; 0x1
        274520:	a1a01004 	movge	r1, r4
        274524:	b3a01001 	movlt	r1, #1	; 0x1
        274528:	ea000000 	b	274530 <WRSegWordXGap+0x2ec>
        27452c:	e3a01004 	mov	r1, #4	; 0x4
        274530:	e0000091 	mul	r0, r1, r0
        274534:	e59d1010 	ldr	r1, [sp, #16]
        274538:	e1570001 	cmp	r7, r1
        27453c:	d59d1010 	ldrle	r1, [sp, #16]
        274540:	c1a01007 	movgt	r1, r7
        274544:	e0210194 	mla	r1, r4, r1, r0
        274548:	e3540004 	cmp	r4, #4	; 0x4
        27454c:	aa000003 	bge	274560 <WRSegWordXGap+0x31c>
        274550:	e3540001 	cmp	r4, #1	; 0x1
        274554:	a1a00004 	movge	r0, r4
        274558:	b3a00001 	movlt	r0, #1	; 0x1
        27455c:	ea000000 	b	274564 <WRSegWordXGap+0x320>
        274560:	e3a00004 	mov	r0, #4	; 0x4
        274564:	e0800004 	add	r0, r0, r4
        274568:	eb64f8f4 	bl	1bb2940 <$__rt_sdiv>
        27456c:	e58d0010 	str	r0, [sp, #16]
        274570:	eb63fd17 	bl	1b739d4 <$SegmentMinStrokeSize>
        274574:	e1a01000 	mov	r1, r0
        274578:	e3a00906 	mov	r0, #98304	; 0x18000
        27457c:	eb65b2d0 	bl	1be10c4 <$FixedMultiply>
        274580:	e1500148 	cmp	r0, r8, asr #2
        274584:	b1a00148 	movlt	r0, r8, asr #2
        274588:	ba000003 	blt	27459c <WRSegWordXGap+0x358>
        27458c:	eb63fd10 	bl	1b739d4 <$SegmentMinStrokeSize>
        274590:	e1a01000 	mov	r1, r0
        274594:	e3a00906 	mov	r0, #98304	; 0x18000
        274598:	eb65b2c9 	bl	1be10c4 <$FixedMultiply>
        27459c:	e59d100c 	ldr	r1, [sp, #12]
        2745a0:	e1500001 	cmp	r0, r1
        2745a4:	da000007 	ble	2745c8 <WRSegWordXGap+0x384>
        2745a8:	e59d0004 	ldr	r0, [sp, #4]
        2745ac:	e0500007 	subs	r0, r0, r7
        2745b0:	e59d1028 	ldr	r1, [sp, #40]
        2745b4:	e5810000 	str	r0, [r1]
        2745b8:	42600000 	rsbmi	r0, r0, #0	; 0x0
        2745bc:	e1500148 	cmp	r0, r8, asr #2
        2745c0:	c1a00007 	movgt	r0, r7
        2745c4:	ca000012 	bgt	274614 <WRSegWordXGap+0x3d0>
        2745c8:	e3540004 	cmp	r4, #4	; 0x4
        2745cc:	aa000003 	bge	2745e0 <WRSegWordXGap+0x39c>
        2745d0:	e3540001 	cmp	r4, #1	; 0x1
        2745d4:	a1a00004 	movge	r0, r4
        2745d8:	b3a00001 	movlt	r0, #1	; 0x1
        2745dc:	ea000000 	b	2745e4 <WRSegWordXGap+0x3a0>
        2745e0:	e3a00004 	mov	r0, #4	; 0x4
        2745e4:	e59d1004 	ldr	r1, [sp, #4]
        2745e8:	e0000091 	mul	r0, r1, r0
        2745ec:	e0210497 	mla	r1, r7, r4, r0
        2745f0:	e3540004 	cmp	r4, #4	; 0x4
        2745f4:	aa000003 	bge	274608 <WRSegWordXGap+0x3c4>
        2745f8:	e3540001 	cmp	r4, #1	; 0x1
        2745fc:	a1a00004 	movge	r0, r4
        274600:	b3a00001 	movlt	r0, #1	; 0x1
        274604:	ea000000 	b	27460c <WRSegWordXGap+0x3c8>
        274608:	e3a00004 	mov	r0, #4	; 0x4
        27460c:	e0800004 	add	r0, r0, r4
        274610:	eb64f8ca 	bl	1bb2940 <$__rt_sdiv>
        274614:	e1a07000 	mov	r7, r0
        274618:	e2844001 	add	r4, r4, #1	; 0x1
        27461c:	e59501ac 	ldr	r0, [r5, #428]
        274620:	e1500004 	cmp	r0, r4
        274624:	caffff2f 	bgt	2742e8 <WRSegWordXGap+0xa4>
        274628:	e59dc024 	ldr	ip, [sp, #36]
        27462c:	e35c0000 	cmp	ip, #0	; 0x0
        274630:	aa000004 	bge	274648 <WRSegWordXGap+0x404>
        274634:	e3a00801 	mov	r0, #65536	; 0x10000
        274638:	e59b302c 	ldr	r3, [fp, #44]
        27463c:	e5830000 	str	r0, [r3]
        274640:	e3a00001 	mov	r0, #1	; 0x1
        274644:	ea000028 	b	2746ec <WRSegWordXGap+0x4a8>
        274648:	e5950024 	ldr	r0, [r5, #36]
        27464c:	e59dc024 	ldr	ip, [sp, #36]
        274650:	e790010c 	ldr	r0, [r0, ip, lsl #2]
        274654:	e5901014 	ldr	r1, [r0, #20]
        274658:	e590200c 	ldr	r2, [r0, #12]
        27465c:	e0411002 	sub	r1, r1, r2
        274660:	e5902018 	ldr	r2, [r0, #24]
        274664:	e5900010 	ldr	r0, [r0, #16]
        274668:	e0420000 	sub	r0, r2, r0
        27466c:	e1510000 	cmp	r1, r0
        274670:	b1a01000 	movlt	r1, r0
        274674:	e281e801 	add	lr, r1, #65536	; 0x10000
        274678:	e280c801 	add	ip, r0, #65536	; 0x10000
        27467c:	e2852070 	add	r2, r5, #112	; 0x70
        274680:	e59b302c 	ldr	r3, [fp, #44]
        274684:	e5950060 	ldr	r0, [r5, #96]
        274688:	e5951120 	ldr	r1, [r5, #288]
        27468c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        274690:	e1a0300e 	mov	r3, lr
        274694:	e1a0100c 	mov	r1, ip
        274698:	e59b0024 	ldr	r0, [fp, #36]
        27469c:	e59b2020 	ldr	r2, [fp, #32]
        2746a0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2746a4:	e5b531ac 	ldr	r3, [r5, #428]!
        2746a8:	e1a00007 	mov	r0, r7
        2746ac:	e59d1034 	ldr	r1, [sp, #52]
        2746b0:	e59d2030 	ldr	r2, [sp, #48]
        2746b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2746b8:	e1a0000a 	mov	r0, sl
        2746bc:	e59d1050 	ldr	r1, [sp, #80]
        2746c0:	e59d204c 	ldr	r2, [sp, #76]
        2746c4:	e59d3048 	ldr	r3, [sp, #72]
        2746c8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2746cc:	e1a03009 	mov	r3, r9
        2746d0:	e28b2018 	add	r2, fp, #24	; 0x18
        2746d4:	e8920006 	ldmia	r2, {r1, r2}
        2746d8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2746dc:	e28b3008 	add	r3, fp, #8	; 0x8
        2746e0:	e893000f 	ldmia	r3, {r0, r1, r2, r3}
        2746e4:	eb6400ca 	bl	1b74a14 <$SegmentWordXGap>
        2746e8:	e28dd04c 	add	sp, sp, #76	; 0x4c
        2746ec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogEndWord
 * Address: 002746f0
 */
void globals::WordRecogEndWord() {
    /*
        2746f0:	e1a0c00d 	mov	ip, sp
        2746f4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2746f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2746fc:	e1a04000 	mov	r4, r0
        274700:	e1a07001 	mov	r7, r1
        274704:	e1a06002 	mov	r6, r2
        274708:	e1a05003 	mov	r5, r3
        27470c:	e59b8008 	ldr	r8, [fp, #8]
        274710:	e3580000 	cmp	r8, #0	; 0x0
        274714:	e59b9004 	ldr	r9, [fp, #4]
        274718:	c1a00004 	movgt	r0, r4
        27471c:	cb6404dc 	blgt	1b75a94 <$WordRecogComputeCapHeight>
        274720:	e1a03008 	mov	r3, r8
        274724:	e1a02009 	mov	r2, r9
        274728:	e92d000c 	stmdb	sp!, {r2, r3}
        27472c:	e1a03005 	mov	r3, r5
        274730:	e1a02006 	mov	r2, r6
        274734:	e1a01007 	mov	r1, r7
        274738:	e1a00004 	mov	r0, r4
        27473c:	eb6404e0 	bl	1b75ac4 <$WordRecogReturnWords>
        274740:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogReturnWords
 * Address: 00274744
 */
void globals::WordRecogReturnWords() {
    /*
        274744:	e1a0c00d 	mov	ip, sp
        274748:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        27474c:	e24cb004 	sub	fp, ip, #4	; 0x4
        274750:	e1a0e003 	mov	lr, r3
        274754:	e59b3008 	ldr	r3, [fp, #8]
        274758:	e3530001 	cmp	r3, #1	; 0x1
        27475c:	e59b4004 	ldr	r4, [fp, #4]
        274760:	aa00000e 	bge	2747a0 <WordRecogReturnWords+0x5c>
        274764:	e59f30a8 	ldr	r3, [pc, #a8]	; 274814 <WordRecogReturnWords+0xd0>
        274768:	e5933000 	ldr	r3, [r3]
        27476c:	e590c010 	ldr	ip, [r0, #16]
        274770:	e58c3000 	str	r3, [ip]
        274774:	e3a030fe 	mov	r3, #254	; 0xfe
        274778:	e590c014 	ldr	ip, [r0, #20]
        27477c:	e5cc3001 	strb	r3, [ip, #1]
        274780:	e3a0307f 	mov	r3, #127	; 0x7f
        274784:	e5cc3000 	strb	r3, [ip]
        274788:	e3a0c000 	mov	ip, #0	; 0x0
        27478c:	e5903018 	ldr	r3, [r0, #24]
        274790:	e583c000 	str	ip, [r3]
        274794:	e3a03001 	mov	r3, #1	; 0x1
        274798:	e5904020 	ldr	r4, [r0, #32]
        27479c:	e1a04844 	mov	r4, r4, asr #16
        2747a0:	e590c03a 	ldr	ip, [r0, #58]
        2747a4:	e1a0c84c 	mov	ip, ip, asr #16
        2747a8:	e08c5004 	add	r5, ip, r4
        2747ac:	e15c0005 	cmp	ip, r5
        2747b0:	aa000007 	bge	2747d4 <WordRecogReturnWords+0x90>
        2747b4:	e5906024 	ldr	r6, [r0, #36]
        2747b8:	e796710c 	ldr	r7, [r6, ip, lsl #2]
        2747bc:	e5d77026 	ldrb	r7, [r7, #38]
        2747c0:	e3370000 	teq	r7, #0	; 0x0
        2747c4:	12444001 	subne	r4, r4, #1	; 0x1
        2747c8:	e28cc001 	add	ip, ip, #1	; 0x1
        2747cc:	e15c0005 	cmp	ip, r5
        2747d0:	bafffff8 	blt	2747b8 <WordRecogReturnWords+0x74>
        2747d4:	e5c0c03b 	strb	ip, [r0, #59]
        2747d8:	e1a0c44c 	mov	ip, ip, asr #8
        2747dc:	e5c0c03a 	strb	ip, [r0, #58]
        2747e0:	e3540001 	cmp	r4, #1	; 0x1
        2747e4:	b3a04001 	movlt	r4, #1	; 0x1
        2747e8:	e5b0c008 	ldr	ip, [r0, #8]!
        2747ec:	e33c0000 	teq	ip, #0	; 0x0
        2747f0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2747f4:	e92d0008 	stmdb	sp!, {r3}
        2747f8:	e1a03004 	mov	r3, r4
        2747fc:	e1a00001 	mov	r0, r1
        274800:	e1a01002 	mov	r1, r2
        274804:	e1a0200e 	mov	r2, lr
        274808:	e1a0e00f 	mov	lr, pc
        27480c:	e1a0f00c 	mov	pc, ip
        274810:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        274814:	0037acdc 	ldreqsb	sl, [r7], -ip
    */
}

/**
 * Symbol: WordRecogComputeCapHeight
 * Address: 00274818
 */
void globals::WordRecogComputeCapHeight() {
    /*
        274818:	e1a0c00d 	mov	ip, sp
        27481c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        274820:	e24cb004 	sub	fp, ip, #4	; 0x4
        274824:	e1a04000 	mov	r4, r0
        274828:	e5900010 	ldr	r0, [r0, #16]
        27482c:	e5906000 	ldr	r6, [r0]
        274830:	e59f00d0 	ldr	r0, [pc, #d0]	; 274908 <WordRecogComputeCapHeight+0xf0>
        274834:	e5901000 	ldr	r1, [r0]
        274838:	e1a00006 	mov	r0, r6
        27483c:	eb650499 	bl	1bb5aa8 <$strcmp>
        274840:	e3300000 	teq	r0, #0	; 0x0
        274844:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        274848:	e1a00006 	mov	r0, r6
        27484c:	eb650497 	bl	1bb5ab0 <$strlen>
        274850:	e3300000 	teq	r0, #0	; 0x0
        274854:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        274858:	e3a07000 	mov	r7, #0	; 0x0
        27485c:	e3a05000 	mov	r5, #0	; 0x0
        274860:	e1a00006 	mov	r0, r6
        274864:	eb650491 	bl	1bb5ab0 <$strlen>
        274868:	e59f809c 	ldr	r8, [pc, #9c]	; 27490c <WordRecogComputeCapHeight+0xf4>
        27486c:	e3500000 	cmp	r0, #0	; 0x0
        274870:	9a00000a 	bls	2748a0 <WordRecogComputeCapHeight+0x88>
        274874:	e5980000 	ldr	r0, [r8]
        274878:	e590000c 	ldr	r0, [r0, #12]
        27487c:	e5900004 	ldr	r0, [r0, #4]
        274880:	e7d61005 	ldrb	r1, [r6, r5]
        274884:	e7900101 	ldr	r0, [r0, r1, lsl #2]
        274888:	e0807007 	add	r7, r0, r7
        27488c:	e2855001 	add	r5, r5, #1	; 0x1
        274890:	e1a00006 	mov	r0, r6
        274894:	eb650485 	bl	1bb5ab0 <$strlen>
        274898:	e1500005 	cmp	r0, r5
        27489c:	8afffff4 	bhi	274874 <WordRecogComputeCapHeight+0x5c>
        2748a0:	e1a01007 	mov	r1, r7
        2748a4:	e1a00005 	mov	r0, r5
        2748a8:	eb64f824 	bl	1bb2940 <$__rt_sdiv>
        2748ac:	e1a01000 	mov	r1, r0
        2748b0:	e594006c 	ldr	r0, [r4, #108]
        2748b4:	eb65b201 	bl	1be10c0 <$FixedDivide>
        2748b8:	e1a05000 	mov	r5, r0
        2748bc:	e5980000 	ldr	r0, [r8]
        2748c0:	e590004c 	ldr	r0, [r0, #76]
        2748c4:	e1500005 	cmp	r0, r5
        2748c8:	a91ba9f0 	ldmgedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2748cc:	e3a0090a 	mov	r0, #163840	; 0x28000
        2748d0:	e59410c0 	ldr	r1, [r4, #192]
        2748d4:	eb65b1fa 	bl	1be10c4 <$FixedMultiply>
        2748d8:	e1500005 	cmp	r0, r5
        2748dc:	d91ba9f0 	ldmledb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2748e0:	e3a00a0e 	mov	r0, #57344	; 0xe000
        2748e4:	e59410c0 	ldr	r1, [r4, #192]
        2748e8:	eb65b1f5 	bl	1be10c4 <$FixedMultiply>
        2748ec:	e1a06000 	mov	r6, r0
        2748f0:	e3a00a02 	mov	r0, #8192	; 0x2000
        2748f4:	e1a01005 	mov	r1, r5
        2748f8:	eb65b1f1 	bl	1be10c4 <$FixedMultiply>
        2748fc:	e0860000 	add	r0, r6, r0
        274900:	e5a400c0 	str	r0, [r4, #192]!
        274904:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        274908:	0037acdc 	ldreqsb	sl, [r7], -ip
        27490c:	0c100b08 	ldceq	11, cr0, [r0], -#32
    */
}

/**
 * Symbol: WordRecogDotIsHigh
 * Address: 00274910
 */
void globals::WordRecogDotIsHigh() {
    /*
        274910:	e92d4010 	stmdb	sp!, {r4, lr}
        274914:	e3a0e000 	mov	lr, #0	; 0x0
        274918:	e591c000 	ldr	ip, [r1]
        27491c:	e1a0c84c 	mov	ip, ip, asr #16
        274920:	e5911002 	ldr	r1, [r1, #2]
        274924:	e08c1841 	add	r1, ip, r1, asr #16
        274928:	e151000c 	cmp	r1, ip
        27492c:	da00000d 	ble	274968 <WordRecogDotIsHigh+0x58>
        274930:	e0822143 	add	r2, r2, r3, asr #2
        274934:	e5900024 	ldr	r0, [r0, #36]
        274938:	e790310c 	ldr	r3, [r0, ip, lsl #2]
        27493c:	e5d34025 	ldrb	r4, [r3, #37]
        274940:	e3340000 	teq	r4, #0	; 0x0
        274944:	0a000004 	beq	27495c <WordRecogDotIsHigh+0x4c>
        274948:	e5934010 	ldr	r4, [r3, #16]
        27494c:	e5933018 	ldr	r3, [r3, #24]
        274950:	e0843003 	add	r3, r4, r3
        274954:	e15200c3 	cmp	r2, r3, asr #1
        274958:	b3a0e001 	movlt	lr, #1	; 0x1
        27495c:	e28cc001 	add	ip, ip, #1	; 0x1
        274960:	e151000c 	cmp	r1, ip
        274964:	cafffff3 	bgt	274938 <WordRecogDotIsHigh+0x28>
        274968:	e1a0000e 	mov	r0, lr
        27496c:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: WordRecogNew
 * Address: 00274970
 */
void globals::WordRecogNew() {
    /*
        274970:	e1a0c00d 	mov	ip, sp
        274974:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        274978:	e24cb004 	sub	fp, ip, #4	; 0x4
        27497c:	e59f1074 	ldr	r1, [pc, #74]	; 2749f8 <WordRecogNew+0x88>
        274980:	e3a00f82 	mov	r0, #520	; 0x208
        274984:	eb65b5ec 	bl	1be213c <$NewNamedPtr>
        274988:	e59f406c 	ldr	r4, [pc, #6c]	; 2749fc <WordRecogNew+0x8c>
        27498c:	e5840000 	str	r0, [r4]
        274990:	e3300000 	teq	r0, #0	; 0x0
        274994:	1a000005 	bne	2749b0 <WordRecogNew+0x40>
        274998:	e59f0060 	ldr	r0, [pc, #60]	; 274a00 <WordRecogNew+0x90>
        27499c:	e5900000 	ldr	r0, [r0]
        2749a0:	e28f1f17 	add	r1, pc, #92	; 0x5c
        2749a4:	e3a02000 	mov	r2, #0	; 0x0
        2749a8:	eb65b9fb 	bl	1be319c <$Throw>
        2749ac:	e5940000 	ldr	r0, [r4]
        2749b0:	e3a01000 	mov	r1, #0	; 0x0
        2749b4:	e3300000 	teq	r0, #0	; 0x0
        2749b8:	01a00001 	moveq	r0, r1
        2749bc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2749c0:	e580100c 	str	r1, [r0, #12]
        2749c4:	e5801024 	str	r1, [r0, #36]
        2749c8:	e5801040 	str	r1, [r0, #64]
        2749cc:	e5801054 	str	r1, [r0, #84]
        2749d0:	e5801010 	str	r1, [r0, #16]
        2749d4:	e5801014 	str	r1, [r0, #20]
        2749d8:	e5801018 	str	r1, [r0, #24]
        2749dc:	e580101c 	str	r1, [r0, #28]
        2749e0:	e5801198 	str	r1, [r0, #408]
        2749e4:	e5801058 	str	r1, [r0, #88]
        2749e8:	e580105c 	str	r1, [r0, #92]
        2749ec:	e5801048 	str	r1, [r0, #72]
        2749f0:	e580104c 	str	r1, [r0, #76]
        2749f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2749f8:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        2749fc:	0c101950 	ldceq	9, cr1, [r0], -#320
        274a00:	003712cc 	eoreqs	r1, r7, ip, asr #5
        274a04:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: WordRecogDestroy
 * Address: 00274a08
 */
void globals::WordRecogDestroy() {
    /*
        274a08:	e3300000 	teq	r0, #0	; 0x0
        274a0c:	01a0f00e 	moveq	pc, lr
        274a10:	e1a0c00d 	mov	ip, sp
        274a14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        274a18:	e24cb004 	sub	fp, ip, #4	; 0x4
        274a1c:	e1a04000 	mov	r4, r0
        274a20:	eb63fbf1 	bl	1b739ec <$SegmentQuiesce>
        274a24:	e1a00004 	mov	r0, r4
        274a28:	eb64041b 	bl	1b75a9c <$WordRecogDeallocate>
        274a2c:	e1a00004 	mov	r0, r4
        274a30:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        274a34:	ea6577c7 	b	1bd2958 <$free>
    */
}

/**
 * Symbol: WordRecogAllocate
 * Address: 00274a38
 */
void globals::WordRecogAllocate() {
    /*
        274a38:	e3300000 	teq	r0, #0	; 0x0
        274a3c:	01a0f00e 	moveq	pc, lr
        274a40:	e1a0c00d 	mov	ip, sp
        274a44:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        274a48:	e24cb004 	sub	fp, ip, #4	; 0x4
        274a4c:	e1a04000 	mov	r4, r0
        274a50:	e3a00000 	mov	r0, #0	; 0x0
        274a54:	e52d006c 	str	r0, [sp, -#108]!
        274a58:	e28d0008 	add	r0, sp, #8	; 0x8
        274a5c:	eb64f7c4 	bl	1bb2974 <$setjmp>
        274a60:	e3300000 	teq	r0, #0	; 0x0
        274a64:	1a000062 	bne	274bf4 <WordRecogAllocate+0x1bc>
        274a68:	e1a0000d 	mov	r0, sp
        274a6c:	eb65ad82 	bl	1be007c <$AddExceptionHandler>
        274a70:	e59f516c 	ldr	r5, [pc, #16c]	; 274be4 <WordRecogAllocate+0x1ac>
        274a74:	e1a01005 	mov	r1, r5
        274a78:	e3a00f96 	mov	r0, #600	; 0x258
        274a7c:	eb65b5ae 	bl	1be213c <$NewNamedPtr>
        274a80:	e59f6160 	ldr	r6, [pc, #160]	; 274be8 <WordRecogAllocate+0x1b0>
        274a84:	e5860000 	str	r0, [r6]
        274a88:	e59f715c 	ldr	r7, [pc, #15c]	; 274bec <WordRecogAllocate+0x1b4>
        274a8c:	e3300000 	teq	r0, #0	; 0x0
        274a90:	1a000004 	bne	274aa8 <WordRecogAllocate+0x70>
        274a94:	e5970000 	ldr	r0, [r7]
        274a98:	e28f1f54 	add	r1, pc, #336	; 0x150
        274a9c:	e3a02000 	mov	r2, #0	; 0x0
        274aa0:	eb65b9bd 	bl	1be319c <$Throw>
        274aa4:	e5960000 	ldr	r0, [r6]
        274aa8:	e1a01005 	mov	r1, r5
        274aac:	e5840024 	str	r0, [r4, #36]
        274ab0:	e3a00ee1 	mov	r0, #3600	; 0xe10
        274ab4:	eb65b5a0 	bl	1be213c <$NewNamedPtr>
        274ab8:	e5860000 	str	r0, [r6]
        274abc:	e3300000 	teq	r0, #0	; 0x0
        274ac0:	1a000004 	bne	274ad8 <WordRecogAllocate+0xa0>
        274ac4:	e5970000 	ldr	r0, [r7]
        274ac8:	e28f1f48 	add	r1, pc, #288	; 0x120
        274acc:	e3a02000 	mov	r2, #0	; 0x0
        274ad0:	eb65b9b1 	bl	1be319c <$Throw>
        274ad4:	e5960000 	ldr	r0, [r6]
        274ad8:	e5840040 	str	r0, [r4, #64]
        274adc:	e594000c 	ldr	r0, [r4, #12]
        274ae0:	e1a00100 	mov	r0, r0, lsl #2
        274ae4:	e1a01005 	mov	r1, r5
        274ae8:	eb65b593 	bl	1be213c <$NewNamedPtr>
        274aec:	e5860000 	str	r0, [r6]
        274af0:	e3300000 	teq	r0, #0	; 0x0
        274af4:	1a000004 	bne	274b0c <WordRecogAllocate+0xd4>
        274af8:	e5970000 	ldr	r0, [r7]
        274afc:	e28f1f3b 	add	r1, pc, #236	; 0xec
        274b00:	e3a02000 	mov	r2, #0	; 0x0
        274b04:	eb65b9a4 	bl	1be319c <$Throw>
        274b08:	e5960000 	ldr	r0, [r6]
        274b0c:	e5840010 	str	r0, [r4, #16]
        274b10:	e594000c 	ldr	r0, [r4, #12]
        274b14:	e1a00080 	mov	r0, r0, lsl #1
        274b18:	e1a01005 	mov	r1, r5
        274b1c:	eb65b586 	bl	1be213c <$NewNamedPtr>
        274b20:	e5860000 	str	r0, [r6]
        274b24:	e3300000 	teq	r0, #0	; 0x0
        274b28:	1a000004 	bne	274b40 <WordRecogAllocate+0x108>
        274b2c:	e5970000 	ldr	r0, [r7]
        274b30:	e28f1f2e 	add	r1, pc, #184	; 0xb8
        274b34:	e3a02000 	mov	r2, #0	; 0x0
        274b38:	eb65b997 	bl	1be319c <$Throw>
        274b3c:	e5960000 	ldr	r0, [r6]
        274b40:	e5840014 	str	r0, [r4, #20]
        274b44:	e594000c 	ldr	r0, [r4, #12]
        274b48:	e1a00100 	mov	r0, r0, lsl #2
        274b4c:	e1a01005 	mov	r1, r5
        274b50:	eb65b579 	bl	1be213c <$NewNamedPtr>
        274b54:	e5860000 	str	r0, [r6]
        274b58:	e3300000 	teq	r0, #0	; 0x0
        274b5c:	1a000004 	bne	274b74 <WordRecogAllocate+0x13c>
        274b60:	e5970000 	ldr	r0, [r7]
        274b64:	e28f1f21 	add	r1, pc, #132	; 0x84
        274b68:	e3a02000 	mov	r2, #0	; 0x0
        274b6c:	eb65b98a 	bl	1be319c <$Throw>
        274b70:	e5960000 	ldr	r0, [r6]
        274b74:	e1a01005 	mov	r1, r5
        274b78:	e5840018 	str	r0, [r4, #24]
        274b7c:	e3a00b01 	mov	r0, #1024	; 0x400
        274b80:	eb65b56d 	bl	1be213c <$NewNamedPtr>
        274b84:	e5860000 	str	r0, [r6]
        274b88:	e3300000 	teq	r0, #0	; 0x0
        274b8c:	1a000004 	bne	274ba4 <WordRecogAllocate+0x16c>
        274b90:	e5970000 	ldr	r0, [r7]
        274b94:	e28f1f15 	add	r1, pc, #84	; 0x54
        274b98:	e3a02000 	mov	r2, #0	; 0x0
        274b9c:	eb65b97e 	bl	1be319c <$Throw>
        274ba0:	e5960000 	ldr	r0, [r6]
        274ba4:	e1a01005 	mov	r1, r5
        274ba8:	e5840048 	str	r0, [r4, #72]
        274bac:	e3a00b01 	mov	r0, #1024	; 0x400
        274bb0:	eb65b561 	bl	1be213c <$NewNamedPtr>
        274bb4:	e5860000 	str	r0, [r6]
        274bb8:	e3300000 	teq	r0, #0	; 0x0
        274bbc:	1a000004 	bne	274bd4 <WordRecogAllocate+0x19c>
        274bc0:	e5970000 	ldr	r0, [r7]
        274bc4:	e28f1f09 	add	r1, pc, #36	; 0x24
        274bc8:	e3a02000 	mov	r2, #0	; 0x0
        274bcc:	eb65b972 	bl	1be319c <$Throw>
        274bd0:	e5960000 	ldr	r0, [r6]
        274bd4:	e5a4004c 	str	r0, [r4, #76]!
        274bd8:	e1a0000d 	mov	r0, sp
        274bdc:	eb65b135 	bl	1be10b8 <$ExitHandler>
        274be0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        274be4:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        274be8:	0c101950 	ldceq	9, cr1, [r0], -#320
        274bec:	003712cc 	eoreqs	r1, r7, ip, asr #5
        274bf0:	00000000 	andeq	r0, r0, r0
        274bf4:	e1a00004 	mov	r0, r4
        274bf8:	eb6403a7 	bl	1b75a9c <$WordRecogDeallocate>
        274bfc:	e1a0000d 	mov	r0, sp
        274c00:	eb65b553 	bl	1be2154 <$NextHandler>
        274c04:	eafffffa 	b	274bf4 <WordRecogAllocate+0x1bc>
    */
}

/**
 * Symbol: WordRecogDeallocate
 * Address: 00274c08
 */
void globals::WordRecogDeallocate() {
    /*
        274c08:	e1a0c00d 	mov	ip, sp
        274c0c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        274c10:	e24cb004 	sub	fp, ip, #4	; 0x4
        274c14:	e1a04000 	mov	r4, r0
        274c18:	eb6407c6 	bl	1b76b38 <$ListZap>
        274c1c:	e5940024 	ldr	r0, [r4, #36]
        274c20:	e3300000 	teq	r0, #0	; 0x0
        274c24:	1b65774b 	blne	1bd2958 <$free>
        274c28:	e5940040 	ldr	r0, [r4, #64]
        274c2c:	e3300000 	teq	r0, #0	; 0x0
        274c30:	1b657748 	blne	1bd2958 <$free>
        274c34:	e5940010 	ldr	r0, [r4, #16]
        274c38:	e3300000 	teq	r0, #0	; 0x0
        274c3c:	1b657745 	blne	1bd2958 <$free>
        274c40:	e5940014 	ldr	r0, [r4, #20]
        274c44:	e3300000 	teq	r0, #0	; 0x0
        274c48:	1b657742 	blne	1bd2958 <$free>
        274c4c:	e5940018 	ldr	r0, [r4, #24]
        274c50:	e3300000 	teq	r0, #0	; 0x0
        274c54:	1b65773f 	blne	1bd2958 <$free>
        274c58:	e594001c 	ldr	r0, [r4, #28]
        274c5c:	e3300000 	teq	r0, #0	; 0x0
        274c60:	1b65773c 	blne	1bd2958 <$free>
        274c64:	e5940048 	ldr	r0, [r4, #72]
        274c68:	e3300000 	teq	r0, #0	; 0x0
        274c6c:	1b657739 	blne	1bd2958 <$free>
        274c70:	e594004c 	ldr	r0, [r4, #76]
        274c74:	e3300000 	teq	r0, #0	; 0x0
        274c78:	1b657736 	blne	1bd2958 <$free>
        274c7c:	e594005c 	ldr	r0, [r4, #92]
        274c80:	eb63eeea 	bl	1b70830 <$NetPatternDestroy>
        274c84:	e5940058 	ldr	r0, [r4, #88]
        274c88:	eb63f303 	bl	1b7189c <$NetPatternizerDestroy>
        274c8c:	e3a00000 	mov	r0, #0	; 0x0
        274c90:	e5840024 	str	r0, [r4, #36]
        274c94:	e5840040 	str	r0, [r4, #64]
        274c98:	e5840010 	str	r0, [r4, #16]
        274c9c:	e5840014 	str	r0, [r4, #20]
        274ca0:	e5840018 	str	r0, [r4, #24]
        274ca4:	e584001c 	str	r0, [r4, #28]
        274ca8:	e5840048 	str	r0, [r4, #72]
        274cac:	e584004c 	str	r0, [r4, #76]
        274cb0:	e584005c 	str	r0, [r4, #92]
        274cb4:	e5a40058 	str	r0, [r4, #88]!
        274cb8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogSuspend
 * Address: 00274cbc
 */
void globals::WordRecogSuspend() {
    /*
        274cbc:	e3300000 	teq	r0, #0	; 0x0
        274cc0:	01a0f00e 	moveq	pc, lr
        274cc4:	e1a0c00d 	mov	ip, sp
        274cc8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        274ccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        274cd0:	e1a04000 	mov	r4, r0
        274cd4:	e3a01000 	mov	r1, #0	; 0x0
        274cd8:	eb64036b 	bl	1b75a8c <$WordRecogClear>
        274cdc:	e1a00004 	mov	r0, r4
        274ce0:	eb64036d 	bl	1b75a9c <$WordRecogDeallocate>
        274ce4:	e3a00001 	mov	r0, #1	; 0x1
        274ce8:	e5c40050 	strb	r0, [r4, #80]
        274cec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogAddStroke2
 * Address: 00274cf0
 */
void globals::WordRecogAddStroke2() {
    /*
        274cf0:	e1a0c00d 	mov	ip, sp
        274cf4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        274cf8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        274cfc:	e24cb014 	sub	fp, ip, #20	; 0x14
        274d00:	e1a04000 	mov	r4, r0
        274d04:	e1a05001 	mov	r5, r1
        274d08:	e28b1014 	add	r1, fp, #20	; 0x14
        274d0c:	e8910003 	ldmia	r1, {r0, r1}
        274d10:	e1a01801 	mov	r1, r1, lsl #16
        274d14:	e1a01841 	mov	r1, r1, asr #16
        274d18:	e52d1010 	str	r1, [sp, -#16]!
        274d1c:	e24dd020 	sub	sp, sp, #32	; 0x20
        274d20:	e5943054 	ldr	r3, [r4, #84]
        274d24:	e58d3004 	str	r3, [sp, #4]
        274d28:	e59f6190 	ldr	r6, [pc, #190]	; 274ec0 <WordRecogAddStroke2+0x1d0>
        274d2c:	e3300000 	teq	r0, #0	; 0x0
        274d30:	0a0000ad 	beq	274fec <WordRecogAddStroke2+0x2fc>
        274d34:	e3a01000 	mov	r1, #0	; 0x0
        274d38:	e52d106c 	str	r1, [sp, -#108]!
        274d3c:	e28d0008 	add	r0, sp, #8	; 0x8
        274d40:	eb64f70b 	bl	1bb2974 <$setjmp>
        274d44:	e3300000 	teq	r0, #0	; 0x0
        274d48:	1a0000b6 	bne	275028 <WordRecogAddStroke2+0x338>
        274d4c:	e1a0000d 	mov	r0, sp
        274d50:	eb65acc9 	bl	1be007c <$AddExceptionHandler>
        274d54:	e24dd008 	sub	sp, sp, #8	; 0x8
        274d58:	e5942024 	ldr	r2, [r4, #36]
        274d5c:	e58d20a0 	str	r2, [sp, #160]
        274d60:	e5922000 	ldr	r2, [r2]
        274d64:	e5920018 	ldr	r0, [r2, #24]
        274d68:	e5928010 	ldr	r8, [r2, #16]
        274d6c:	e0401008 	sub	r1, r0, r8
        274d70:	e2811801 	add	r1, r1, #65536	; 0x10000
        274d74:	e5b2a00c 	ldr	sl, [r2, #12]!
        274d78:	e5929008 	ldr	r9, [r2, #8]
        274d7c:	e049200a 	sub	r2, r9, sl
        274d80:	e2822801 	add	r2, r2, #65536	; 0x10000
        274d84:	e58d0000 	str	r0, [sp]
        274d88:	e3a00001 	mov	r0, #1	; 0x1
        274d8c:	e5947020 	ldr	r7, [r4, #32]
        274d90:	e1a07847 	mov	r7, r7, asr #16
        274d94:	e3570001 	cmp	r7, #1	; 0x1
        274d98:	da000019 	ble	274e04 <WordRecogAddStroke2+0x114>
        274d9c:	e59d20a0 	ldr	r2, [sp, #160]
        274da0:	e792e100 	ldr	lr, [r2, r0, lsl #2]
        274da4:	e59ec018 	ldr	ip, [lr, #24]
        274da8:	e58dc09c 	str	ip, [sp, #156]
        274dac:	e59e3010 	ldr	r3, [lr, #16]
        274db0:	e04c2003 	sub	r2, ip, r3
        274db4:	e282c801 	add	ip, r2, #65536	; 0x10000
        274db8:	e59e2014 	ldr	r2, [lr, #20]
        274dbc:	e59ee00c 	ldr	lr, [lr, #12]
        274dc0:	e58de098 	str	lr, [sp, #152]
        274dc4:	e042e00e 	sub	lr, r2, lr
        274dc8:	e081100c 	add	r1, r1, ip
        274dcc:	e59dc09c 	ldr	ip, [sp, #156]
        274dd0:	e59de000 	ldr	lr, [sp]
        274dd4:	e08ce00e 	add	lr, ip, lr
        274dd8:	e1530008 	cmp	r3, r8
        274ddc:	e58de000 	str	lr, [sp]
        274de0:	d1a08003 	movle	r8, r3
        274de4:	e59de098 	ldr	lr, [sp, #152]
        274de8:	e15e000a 	cmp	lr, sl
        274dec:	d59da098 	ldrle	sl, [sp, #152]
        274df0:	e1520009 	cmp	r2, r9
        274df4:	c1a09002 	movgt	r9, r2
        274df8:	e2800001 	add	r0, r0, #1	; 0x1
        274dfc:	e1570000 	cmp	r7, r0
        274e00:	caffffe5 	bgt	274d9c <WordRecogAddStroke2+0xac>
        274e04:	e1a00007 	mov	r0, r7
        274e08:	eb64f6cc 	bl	1bb2940 <$__rt_sdiv>
        274e0c:	e58d0004 	str	r0, [sp, #4]
        274e10:	e1a00007 	mov	r0, r7
        274e14:	eb64f6c8 	bl	1bb293c <$__rt_divtest>
        274e18:	e1a00007 	mov	r0, r7
        274e1c:	eb64f6c6 	bl	1bb293c <$__rt_divtest>
        274e20:	e1a00007 	mov	r0, r7
        274e24:	e59d1000 	ldr	r1, [sp]
        274e28:	eb64f6c4 	bl	1bb2940 <$__rt_sdiv>
        274e2c:	e1a07000 	mov	r7, r0
        274e30:	e59d1004 	ldr	r1, [sp, #4]
        274e34:	e0403008 	sub	r3, r0, r8
        274e38:	e58d1074 	str	r1, [sp, #116]
        274e3c:	e92d0008 	stmdb	sp!, {r3}
        274e40:	e049300a 	sub	r3, r9, sl
        274e44:	e59d1008 	ldr	r1, [sp, #8]
        274e48:	e0400001 	sub	r0, r0, r1
        274e4c:	e0402008 	sub	r2, r0, r8
        274e50:	e2840f73 	add	r0, r4, #460	; 0x1cc
        274e54:	e1a09000 	mov	r9, r0
        274e58:	e3a01000 	mov	r1, #0	; 0x0
        274e5c:	eb63feee 	bl	1b74a1c <$SetFixedRect>
        274e60:	e28dd004 	add	sp, sp, #4	; 0x4
        274e64:	e5941028 	ldr	r1, [r4, #40]
        274e68:	e1a01841 	mov	r1, r1, asr #16
        274e6c:	e3510000 	cmp	r1, #0	; 0x0
        274e70:	c594002a 	ldrgt	r0, [r4, #42]
        274e74:	c1a00840 	movgt	r0, r0, asr #16
        274e78:	c3500000 	cmpgt	r0, #0	; 0x0
        274e7c:	da000010 	ble	274ec4 <WordRecogAddStroke2+0x1d4>
        274e80:	e3310048 	teq	r1, #72	; 0x48
        274e84:	03300048 	teqeq	r0, #72	; 0x48
        274e88:	0a00000d 	beq	274ec4 <WordRecogAddStroke2+0x1d4>
        274e8c:	e1a00800 	mov	r0, r0, lsl #16
        274e90:	e3a01712 	mov	r1, #4718592	; 0x480000
        274e94:	eb65b089 	bl	1be10c0 <$FixedDivide>
        274e98:	e1a08000 	mov	r8, r0
        274e9c:	e5940028 	ldr	r0, [r4, #40]
        274ea0:	e1a00820 	mov	r0, r0, lsr #16
        274ea4:	e1a00800 	mov	r0, r0, lsl #16
        274ea8:	e3a01712 	mov	r1, #4718592	; 0x480000
        274eac:	eb65b083 	bl	1be10c0 <$FixedDivide>
        274eb0:	e1a01000 	mov	r1, r0
        274eb4:	e1a00009 	mov	r0, r9
        274eb8:	e1a02008 	mov	r2, r8
        274ebc:	ea000006 	b	274edc <WordRecogAddStroke2+0x1ec>
        274ec0:	0c104f84 	ldceq	15, cr4, [r0], -#528
        274ec4:	e594002c 	ldr	r0, [r4, #44]
        274ec8:	e3300801 	teq	r0, #65536	; 0x10000
        274ecc:	0a000003 	beq	274ee0 <WordRecogAddStroke2+0x1f0>
        274ed0:	e5942030 	ldr	r2, [r4, #48]
        274ed4:	e1a01002 	mov	r1, r2
        274ed8:	e1a00009 	mov	r0, r9
        274edc:	eb640302 	bl	1b75aec <$XYFixedScaleFixedRect>
        274ee0:	e28dd008 	add	sp, sp, #8	; 0x8
        274ee4:	e59401f0 	ldr	r0, [r4, #496]
        274ee8:	e3300000 	teq	r0, #0	; 0x0
        274eec:	0a000017 	beq	274f50 <WordRecogAddStroke2+0x260>
        274ef0:	e28f1f13 	add	r1, pc, #76	; 0x4c
        274ef4:	e5940010 	ldr	r0, [r4, #16]
        274ef8:	e5801000 	str	r1, [r0]
        274efc:	e3a010fe 	mov	r1, #254	; 0xfe
        274f00:	e5940014 	ldr	r0, [r4, #20]
        274f04:	e5c01001 	strb	r1, [r0, #1]
        274f08:	e3a0107f 	mov	r1, #127	; 0x7f
        274f0c:	e5c01000 	strb	r1, [r0]
        274f10:	e3a01000 	mov	r1, #0	; 0x0
        274f14:	e5940018 	ldr	r0, [r4, #24]
        274f18:	e3a03001 	mov	r3, #1	; 0x1
        274f1c:	e5801000 	str	r1, [r0]
        274f20:	e5942020 	ldr	r2, [r4, #32]
        274f24:	e1a02842 	mov	r2, r2, asr #16
        274f28:	e92d000c 	stmdb	sp!, {r2, r3}
        274f2c:	e2843010 	add	r3, r4, #16	; 0x10
        274f30:	e893000e 	ldmia	r3, {r1, r2, r3}
        274f34:	e1a00004 	mov	r0, r4
        274f38:	eb6402e1 	bl	1b75ac4 <$WordRecogReturnWords>
        274f3c:	e28dd008 	add	sp, sp, #8	; 0x8
        274f40:	ea000022 	b	274fd0 <WordRecogAddStroke2+0x2e0>
        274f44:	67524f53 	undefined
        274f48:	7365674f 	cmnvc	r5, #20709376	; 0x13c0000
        274f4c:	6e6c7900 	cdpvs	9, 6, cr7, cr12, cr0, {0}
        274f50:	e59d008c 	ldr	r0, [sp, #140]
        274f54:	e3300000 	teq	r0, #0	; 0x0
        274f58:	1a00000d 	bne	274f94 <WordRecogAddStroke2+0x2a4>
        274f5c:	e5960000 	ldr	r0, [r6]
        274f60:	e3300000 	teq	r0, #0	; 0x0
        274f64:	e59d306c 	ldr	r3, [sp, #108]
        274f68:	e92d0008 	stmdb	sp!, {r3}
        274f6c:	e5942060 	ldr	r2, [r4, #96]
        274f70:	e5941020 	ldr	r1, [r4, #32]
        274f74:	e1a01841 	mov	r1, r1, asr #16
        274f78:	e1a03007 	mov	r3, r7
        274f7c:	e5940024 	ldr	r0, [r4, #36]
        274f80:	0a000001 	beq	274f8c <WordRecogAddStroke2+0x29c>
        274f84:	eb6406ee 	bl	1b76b44 <$StrokeSortFrags>
        274f88:	ea000000 	b	274f90 <WordRecogAddStroke2+0x2a0>
        274f8c:	eb63feb2 	bl	1b74a5c <$StrokeSort>
        274f90:	e28dd004 	add	sp, sp, #4	; 0x4
        274f94:	e59d3070 	ldr	r3, [sp, #112]
        274f98:	e5d42044 	ldrb	r2, [r4, #68]
        274f9c:	e92d000c 	stmdb	sp!, {r2, r3}
        274fa0:	e5941024 	ldr	r1, [r4, #36]
        274fa4:	e5942060 	ldr	r2, [r4, #96]
        274fa8:	e5943040 	ldr	r3, [r4, #64]
        274fac:	e5940020 	ldr	r0, [r4, #32]
        274fb0:	e1a00840 	mov	r0, r0, asr #16
        274fb4:	eb63fa7e 	bl	1b739b4 <$SegmentChars>
        274fb8:	e28dd008 	add	sp, sp, #8	; 0x8
        274fbc:	e5c4003d 	strb	r0, [r4, #61]
        274fc0:	e1a00440 	mov	r0, r0, asr #8
        274fc4:	e5c4003c 	strb	r0, [r4, #60]
        274fc8:	e1a00004 	mov	r0, r4
        274fcc:	eb6402ad 	bl	1b75a88 <$WordRecogAnalyzeWord>
        274fd0:	e1a00004 	mov	r0, r4
        274fd4:	eb6402ad 	bl	1b75a90 <$WordRecogClearStrokes>
        274fd8:	e1a0000d 	mov	r0, sp
        274fdc:	eb65b035 	bl	1be10b8 <$ExitHandler>
        274fe0:	e28dd06c 	add	sp, sp, #108	; 0x6c
        274fe4:	e3350000 	teq	r5, #0	; 0x0
        274fe8:	0a00000d 	beq	275024 <WordRecogAddStroke2+0x334>
        274fec:	e3350000 	teq	r5, #0	; 0x0
        274ff0:	0a00000b 	beq	275024 <WordRecogAddStroke2+0x334>
        274ff4:	e5940020 	ldr	r0, [r4, #32]
        274ff8:	e1a00840 	mov	r0, r0, asr #16
        274ffc:	e3500096 	cmp	r0, #150	; 0x96
        275000:	ba000017 	blt	275064 <WordRecogAddStroke2+0x374>
        275004:	e5940038 	ldr	r0, [r4, #56]
        275008:	e1b00840 	movs	r0, r0, asr #16
        27500c:	05d50026 	ldreqb	r0, [r5, #38]
        275010:	03300000 	teqeq	r0, #0	; 0x0
        275014:	05d50027 	ldreqb	r0, [r5, #39]
        275018:	03300000 	teqeq	r0, #0	; 0x0
        27501c:	11a00005 	movne	r0, r5
        275020:	1b63fe83 	blne	1b74a34 <$StrokeDestroy>
        275024:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        275028:	e5940038 	ldr	r0, [r4, #56]
        27502c:	e1b00840 	movs	r0, r0, asr #16
        275030:	1a000006 	bne	275050 <WordRecogAddStroke2+0x360>
        275034:	e3350000 	teq	r5, #0	; 0x0
        275038:	0a000006 	beq	275058 <WordRecogAddStroke2+0x368>
        27503c:	e5d50026 	ldrb	r0, [r5, #38]
        275040:	e3300000 	teq	r0, #0	; 0x0
        275044:	05d50027 	ldreqb	r0, [r5, #39]
        275048:	03300000 	teqeq	r0, #0	; 0x0
        27504c:	0a000001 	beq	275058 <WordRecogAddStroke2+0x368>
        275050:	e1a00005 	mov	r0, r5
        275054:	eb63fe76 	bl	1b74a34 <$StrokeDestroy>
        275058:	e1a0000d 	mov	r0, sp
        27505c:	eb65b43c 	bl	1be2154 <$NextHandler>
        275060:	eafffff0 	b	275028 <WordRecogAddStroke2+0x338>
        275064:	e3a07000 	mov	r7, #0	; 0x0
        275068:	e52d706c 	str	r7, [sp, -#108]!
        27506c:	e28d0008 	add	r0, sp, #8	; 0x8
        275070:	eb64f63f 	bl	1bb2974 <$setjmp>
        275074:	e3300000 	teq	r0, #0	; 0x0
        275078:	1a000209 	bne	2758a4 <WordRecogAddStroke2+0xbb4>
        27507c:	e1a0000d 	mov	r0, sp
        275080:	eb65abfd 	bl	1be007c <$AddExceptionHandler>
        275084:	e5942020 	ldr	r2, [r4, #32]
        275088:	e1a02842 	mov	r2, r2, asr #16
        27508c:	e59b301c 	ldr	r3, [fp, #28]
        275090:	e59d008c 	ldr	r0, [sp, #140]
        275094:	e20010ff 	and	r1, r0, #255	; 0xff
        275098:	e1a00005 	mov	r0, r5
        27509c:	eb63fa56 	bl	1b739fc <$SegmentStrokeData>
        2750a0:	e5941024 	ldr	r1, [r4, #36]
        2750a4:	e5940020 	ldr	r0, [r4, #32]
        2750a8:	e1a00840 	mov	r0, r0, asr #16
        2750ac:	e7815100 	str	r5, [r1, r0, lsl #2]
        2750b0:	e28d107c 	add	r1, sp, #124	; 0x7c
        2750b4:	e1a00005 	mov	r0, r5
        2750b8:	eb63fe60 	bl	1b74a40 <$StrokeFindBounds>
        2750bc:	e5940020 	ldr	r0, [r4, #32]
        2750c0:	e1b00840 	movs	r0, r0, asr #16
        2750c4:	1a000008 	bne	2750ec <WordRecogAddStroke2+0x3fc>
        2750c8:	e59401a4 	ldr	r0, [r4, #420]
        2750cc:	e3300001 	teq	r0, #1	; 0x1
        2750d0:	0a000005 	beq	2750ec <WordRecogAddStroke2+0x3fc>
        2750d4:	e59d007c 	ldr	r0, [sp, #124]
        2750d8:	e586001c 	str	r0, [r6, #28]
        2750dc:	e59b200c 	ldr	r2, [fp, #12]
        2750e0:	e5862020 	str	r2, [r6, #32]
        2750e4:	e58471a4 	str	r7, [r4, #420]
        2750e8:	e5c67024 	strb	r7, [r6, #36]
        2750ec:	e5d50025 	ldrb	r0, [r5, #37]
        2750f0:	e3300000 	teq	r0, #0	; 0x0
        2750f4:	05d50026 	ldreqb	r0, [r5, #38]
        2750f8:	03300000 	teqeq	r0, #0	; 0x0
        2750fc:	05d50027 	ldreqb	r0, [r5, #39]
        275100:	03300000 	teqeq	r0, #0	; 0x0
        275104:	1a000063 	bne	275298 <WordRecogAddStroke2+0x5a8>
        275108:	e5940022 	ldr	r0, [r4, #34]
        27510c:	e1a00820 	mov	r0, r0, lsr #16
        275110:	e2800001 	add	r0, r0, #1	; 0x1
        275114:	e5c40023 	strb	r0, [r4, #35]
        275118:	e1a00440 	mov	r0, r0, asr #8
        27511c:	e5c40022 	strb	r0, [r4, #34]
        275120:	e28d107c 	add	r1, sp, #124	; 0x7c
        275124:	e28d0074 	add	r0, sp, #116	; 0x74
        275128:	eb63e9a8 	bl	1b6f7d0 <$FixedRectSize>
        27512c:	e28d1074 	add	r1, sp, #116	; 0x74
        275130:	e8910003 	ldmia	r1, {r0, r1}
        275134:	e1510000 	cmp	r1, r0
        275138:	d59d0074 	ldrle	r0, [sp, #116]
        27513c:	c59d0078 	ldrgt	r0, [sp, #120]
        275140:	e2808801 	add	r8, r0, #65536	; 0x10000
        275144:	e59d0078 	ldr	r0, [sp, #120]
        275148:	e2807801 	add	r7, r0, #65536	; 0x10000
        27514c:	e59d0074 	ldr	r0, [sp, #116]
        275150:	e2809801 	add	r9, r0, #65536	; 0x10000
        275154:	e59410b8 	ldr	r1, [r4, #184]
        275158:	e1510007 	cmp	r1, r7
        27515c:	aa000002 	bge	27516c <WordRecogAddStroke2+0x47c>
        275160:	e1a00007 	mov	r0, r7
        275164:	eb65afd5 	bl	1be10c0 <$FixedDivide>
        275168:	ea000000 	b	275170 <WordRecogAddStroke2+0x480>
        27516c:	e3a00801 	mov	r0, #65536	; 0x10000
        275170:	e59410c4 	ldr	r1, [r4, #196]
        275174:	eb65afd2 	bl	1be10c4 <$FixedMultiply>
        275178:	e1a01000 	mov	r1, r0
        27517c:	e3a00803 	mov	r0, #196608	; 0x30000
        275180:	eb65afcf 	bl	1be10c4 <$FixedMultiply>
        275184:	e1500009 	cmp	r0, r9
        275188:	da000006 	ble	2751a8 <WordRecogAddStroke2+0x4b8>
        27518c:	e5940022 	ldr	r0, [r4, #34]
        275190:	e1a00840 	mov	r0, r0, asr #16
        275194:	e2401001 	sub	r1, r0, #1	; 0x1
        275198:	e5942060 	ldr	r2, [r4, #96]
        27519c:	e0218192 	mla	r1, r2, r1, r8
        2751a0:	eb64f5e6 	bl	1bb2940 <$__rt_sdiv>
        2751a4:	e5840060 	str	r0, [r4, #96]
        2751a8:	e3a00901 	mov	r0, #16384	; 0x4000
        2751ac:	e59410b8 	ldr	r1, [r4, #184]
        2751b0:	eb65afc3 	bl	1be10c4 <$FixedMultiply>
        2751b4:	e1500007 	cmp	r0, r7
        2751b8:	aa000006 	bge	2751d8 <WordRecogAddStroke2+0x4e8>
        2751bc:	e5940022 	ldr	r0, [r4, #34]
        2751c0:	e1a00840 	mov	r0, r0, asr #16
        2751c4:	e2401001 	sub	r1, r0, #1	; 0x1
        2751c8:	e5942068 	ldr	r2, [r4, #104]
        2751cc:	e0217192 	mla	r1, r2, r1, r7
        2751d0:	eb64f5da 	bl	1bb2940 <$__rt_sdiv>
        2751d4:	e5840068 	str	r0, [r4, #104]
        2751d8:	e3a00802 	mov	r0, #131072	; 0x20000
        2751dc:	e5941070 	ldr	r1, [r4, #112]
        2751e0:	eb65afb7 	bl	1be10c4 <$FixedMultiply>
        2751e4:	e1500008 	cmp	r0, r8
        2751e8:	da00002a 	ble	275298 <WordRecogAddStroke2+0x5a8>
        2751ec:	e3a00a0e 	mov	r0, #57344	; 0xe000
        2751f0:	e5941070 	ldr	r1, [r4, #112]
        2751f4:	eb65afb2 	bl	1be10c4 <$FixedMultiply>
        2751f8:	e1a07000 	mov	r7, r0
        2751fc:	e1a01008 	mov	r1, r8
        275200:	e3a00a02 	mov	r0, #8192	; 0x2000
        275204:	eb65afae 	bl	1be10c4 <$FixedMultiply>
        275208:	e0870000 	add	r0, r7, r0
        27520c:	e5840070 	str	r0, [r4, #112]
        275210:	e59f72b4 	ldr	r7, [pc, #2b4]	; 2754cc <WordRecogAddStroke2+0x7dc>
        275214:	e1a01007 	mov	r1, r7
        275218:	e3a00902 	mov	r0, #32768	; 0x8000
        27521c:	eb65afa8 	bl	1be10c4 <$FixedMultiply>
        275220:	e5941070 	ldr	r1, [r4, #112]
        275224:	e1500001 	cmp	r0, r1
        275228:	e1a01007 	mov	r1, r7
        27522c:	c3a00902 	movgt	r0, #32768	; 0x8000
        275230:	ca000006 	bgt	275250 <WordRecogAddStroke2+0x560>
        275234:	e3a00802 	mov	r0, #131072	; 0x20000
        275238:	eb65afa1 	bl	1be10c4 <$FixedMultiply>
        27523c:	e5941070 	ldr	r1, [r4, #112]
        275240:	e1500001 	cmp	r0, r1
        275244:	aa000003 	bge	275258 <WordRecogAddStroke2+0x568>
        275248:	e1a01007 	mov	r1, r7
        27524c:	e3a00802 	mov	r0, #131072	; 0x20000
        275250:	eb65af9b 	bl	1be10c4 <$FixedMultiply>
        275254:	e5840070 	str	r0, [r4, #112]
        275258:	e1a01007 	mov	r1, r7
        27525c:	e5940070 	ldr	r0, [r4, #112]
        275260:	eb65af96 	bl	1be10c0 <$FixedDivide>
        275264:	e1a01000 	mov	r1, r0
        275268:	e59f0260 	ldr	r0, [pc, #260]	; 2754d0 <WordRecogAddStroke2+0x7e0>
        27526c:	eb65af94 	bl	1be10c4 <$FixedMultiply>
        275270:	e1a07000 	mov	r7, r0
        275274:	e5941070 	ldr	r1, [r4, #112]
        275278:	e1a00001 	mov	r0, r1
        27527c:	eb65af90 	bl	1be10c4 <$FixedMultiply>
        275280:	e1a08000 	mov	r8, r0
        275284:	e1a01007 	mov	r1, r7
        275288:	e1a00007 	mov	r0, r7
        27528c:	eb65af8c 	bl	1be10c4 <$FixedMultiply>
        275290:	e0880000 	add	r0, r8, r0
        275294:	e5840074 	str	r0, [r4, #116]
        275298:	e59d007c 	ldr	r0, [sp, #124]
        27529c:	e596101c 	ldr	r1, [r6, #28]
        2752a0:	e0408001 	sub	r8, r0, r1
        2752a4:	e3580000 	cmp	r8, #0	; 0x0
        2752a8:	d3a08000 	movle	r8, #0	; 0x0
        2752ac:	e59b200c 	ldr	r2, [fp, #12]
        2752b0:	e5960020 	ldr	r0, [r6, #32]
        2752b4:	e0427000 	sub	r7, r2, r0
        2752b8:	e3570000 	cmp	r7, #0	; 0x0
        2752bc:	d3a07000 	movle	r7, #0	; 0x0
        2752c0:	e1a00008 	mov	r0, r8
        2752c4:	e5941070 	ldr	r1, [r4, #112]
        2752c8:	eb65af7c 	bl	1be10c0 <$FixedDivide>
        2752cc:	e1a0a000 	mov	sl, r0
        2752d0:	e1a00007 	mov	r0, r7
        2752d4:	e5941070 	ldr	r1, [r4, #112]
        2752d8:	eb65af78 	bl	1be10c0 <$FixedDivide>
        2752dc:	e1a09000 	mov	r9, r0
        2752e0:	e5d50026 	ldrb	r0, [r5, #38]
        2752e4:	e3300000 	teq	r0, #0	; 0x0
        2752e8:	05d50027 	ldreqb	r0, [r5, #39]
        2752ec:	03300000 	teqeq	r0, #0	; 0x0
        2752f0:	05d60024 	ldreqb	r0, [r6, #36]
        2752f4:	03300000 	teqeq	r0, #0	; 0x0
        2752f8:	1a00014f 	bne	27583c <WordRecogAddStroke2+0xb4c>
        2752fc:	e59401a4 	ldr	r0, [r4, #420]
        275300:	e3300001 	teq	r0, #1	; 0x1
        275304:	0a000003 	beq	275318 <WordRecogAddStroke2+0x628>
        275308:	e59b301c 	ldr	r3, [fp, #28]
        27530c:	e253cc99 	subs	ip, r3, #39168	; 0x9900
        275310:	a35c0099 	cmpge	ip, #153	; 0x99
        275314:	da000073 	ble	2754e8 <WordRecogAddStroke2+0x7f8>
        275318:	e3a01802 	mov	r1, #131072	; 0x20000
        27531c:	e5940080 	ldr	r0, [r4, #128]
        275320:	eb65af66 	bl	1be10c0 <$FixedDivide>
        275324:	e1500008 	cmp	r0, r8
        275328:	aa000016 	bge	275388 <WordRecogAddStroke2+0x698>
        27532c:	e3a01802 	mov	r1, #131072	; 0x20000
        275330:	e5940080 	ldr	r0, [r4, #128]
        275334:	eb65af62 	bl	1be10c4 <$FixedMultiply>
        275338:	e1500008 	cmp	r0, r8
        27533c:	da000011 	ble	275388 <WordRecogAddStroke2+0x698>
        275340:	e5940080 	ldr	r0, [r4, #128]
        275344:	e59f1188 	ldr	r1, [pc, #188]	; 2754d4 <WordRecogAddStroke2+0x7e4>
        275348:	eb65af5c 	bl	1be10c0 <$FixedDivide>
        27534c:	e1a01000 	mov	r1, r0
        275350:	e59f0180 	ldr	r0, [pc, #180]	; 2754d8 <WordRecogAddStroke2+0x7e8>
        275354:	eb65af5a 	bl	1be10c4 <$FixedMultiply>
        275358:	e1a08000 	mov	r8, r0
        27535c:	e5941080 	ldr	r1, [r4, #128]
        275360:	e1a00001 	mov	r0, r1
        275364:	eb65af56 	bl	1be10c4 <$FixedMultiply>
        275368:	e1a01008 	mov	r1, r8
        27536c:	e52d0004 	str	r0, [sp, -#4]!
        275370:	e1a00008 	mov	r0, r8
        275374:	eb65af52 	bl	1be10c4 <$FixedMultiply>
        275378:	e1a01000 	mov	r1, r0
        27537c:	e49d0004 	ldr	r0, [sp], #4
        275380:	e0800001 	add	r0, r0, r1
        275384:	e5840084 	str	r0, [r4, #132]
        275388:	e3a01802 	mov	r1, #131072	; 0x20000
        27538c:	e59400a0 	ldr	r0, [r4, #160]
        275390:	eb65af4a 	bl	1be10c0 <$FixedDivide>
        275394:	e150000a 	cmp	r0, sl
        275398:	aa000015 	bge	2753f4 <WordRecogAddStroke2+0x704>
        27539c:	e3a01802 	mov	r1, #131072	; 0x20000
        2753a0:	e59400a0 	ldr	r0, [r4, #160]
        2753a4:	eb65af46 	bl	1be10c4 <$FixedMultiply>
        2753a8:	e150000a 	cmp	r0, sl
        2753ac:	da000010 	ble	2753f4 <WordRecogAddStroke2+0x704>
        2753b0:	e59400a0 	ldr	r0, [r4, #160]
        2753b4:	e59f1120 	ldr	r1, [pc, #120]	; 2754dc <WordRecogAddStroke2+0x7ec>
        2753b8:	eb65af40 	bl	1be10c0 <$FixedDivide>
        2753bc:	e1a01000 	mov	r1, r0
        2753c0:	e3a0009d 	mov	r0, #157	; 0x9d
        2753c4:	e2800a0a 	add	r0, r0, #40960	; 0xa000
        2753c8:	eb65af3d 	bl	1be10c4 <$FixedMultiply>
        2753cc:	e1a08000 	mov	r8, r0
        2753d0:	e59410a0 	ldr	r1, [r4, #160]
        2753d4:	e1a00001 	mov	r0, r1
        2753d8:	eb65af39 	bl	1be10c4 <$FixedMultiply>
        2753dc:	e1a0a000 	mov	sl, r0
        2753e0:	e1a01008 	mov	r1, r8
        2753e4:	e1a00008 	mov	r0, r8
        2753e8:	eb65af35 	bl	1be10c4 <$FixedMultiply>
        2753ec:	e08a0000 	add	r0, sl, r0
        2753f0:	e58400a4 	str	r0, [r4, #164]
        2753f4:	e3a01802 	mov	r1, #131072	; 0x20000
        2753f8:	e5940090 	ldr	r0, [r4, #144]
        2753fc:	eb65af2f 	bl	1be10c0 <$FixedDivide>
        275400:	e1500007 	cmp	r0, r7
        275404:	aa000014 	bge	27545c <WordRecogAddStroke2+0x76c>
        275408:	e3a01802 	mov	r1, #131072	; 0x20000
        27540c:	e5940090 	ldr	r0, [r4, #144]
        275410:	eb65af2b 	bl	1be10c4 <$FixedMultiply>
        275414:	e1500007 	cmp	r0, r7
        275418:	da00000f 	ble	27545c <WordRecogAddStroke2+0x76c>
        27541c:	e5940090 	ldr	r0, [r4, #144]
        275420:	e59f10b8 	ldr	r1, [pc, #b8]	; 2754e0 <WordRecogAddStroke2+0x7f0>
        275424:	eb65af25 	bl	1be10c0 <$FixedDivide>
        275428:	e1a01000 	mov	r1, r0
        27542c:	e3a0092e 	mov	r0, #753664	; 0xb8000
        275430:	eb65af23 	bl	1be10c4 <$FixedMultiply>
        275434:	e1a07000 	mov	r7, r0
        275438:	e5941090 	ldr	r1, [r4, #144]
        27543c:	e1a00001 	mov	r0, r1
        275440:	eb65af1f 	bl	1be10c4 <$FixedMultiply>
        275444:	e1a08000 	mov	r8, r0
        275448:	e1a01007 	mov	r1, r7
        27544c:	e1a00007 	mov	r0, r7
        275450:	eb65af1b 	bl	1be10c4 <$FixedMultiply>
        275454:	e0880000 	add	r0, r8, r0
        275458:	e5840094 	str	r0, [r4, #148]
        27545c:	e3a01802 	mov	r1, #131072	; 0x20000
        275460:	e59400b0 	ldr	r0, [r4, #176]
        275464:	eb65af15 	bl	1be10c0 <$FixedDivide>
        275468:	e1500009 	cmp	r0, r9
        27546c:	aa0000f2 	bge	27583c <WordRecogAddStroke2+0xb4c>
        275470:	e3a01802 	mov	r1, #131072	; 0x20000
        275474:	e59400b0 	ldr	r0, [r4, #176]
        275478:	eb65af11 	bl	1be10c4 <$FixedMultiply>
        27547c:	e1500009 	cmp	r0, r9
        275480:	da0000ed 	ble	27583c <WordRecogAddStroke2+0xb4c>
        275484:	e59400b0 	ldr	r0, [r4, #176]
        275488:	e59f1054 	ldr	r1, [pc, #54]	; 2754e4 <WordRecogAddStroke2+0x7f4>
        27548c:	eb65af0b 	bl	1be10c0 <$FixedDivide>
        275490:	e1a01000 	mov	r1, r0
        275494:	e3a0004d 	mov	r0, #77	; 0x4d
        275498:	e2800ca2 	add	r0, r0, #41472	; 0xa200
        27549c:	eb65af08 	bl	1be10c4 <$FixedMultiply>
        2754a0:	e1a07000 	mov	r7, r0
        2754a4:	e59410b0 	ldr	r1, [r4, #176]
        2754a8:	e1a00001 	mov	r0, r1
        2754ac:	eb65af04 	bl	1be10c4 <$FixedMultiply>
        2754b0:	e1a08000 	mov	r8, r0
        2754b4:	e1a01007 	mov	r1, r7
        2754b8:	e1a00007 	mov	r0, r7
        2754bc:	eb65af00 	bl	1be10c4 <$FixedMultiply>
        2754c0:	e0880000 	add	r0, r8, r0
        2754c4:	e58400b4 	str	r0, [r4, #180]
        2754c8:	ea0000db 	b	27583c <WordRecogAddStroke2+0xb4c>
        2754cc:	0012d999 	muleqs	r2, r9, r9
        2754d0:	00081c28 	andeq	r1, r8, r8, lsr #24
        2754d4:	00171999 	muleqs	r7, r9, r9
        2754d8:	000a7851 	andeq	r7, sl, r1, asr r8
        2754dc:	00015212 	andeq	r5, r1, r2, lsl r2
        2754e0:	0022d1eb 	eoreq	sp, r2, fp, ror #3
        2754e4:	0001f5e3 	andeq	pc, r1, r3, ror #11
        2754e8:	e59b301c 	ldr	r3, [fp, #28]
        2754ec:	e253cc66 	subs	ip, r3, #26112	; 0x6600
        2754f0:	a35c0066 	cmpge	ip, #102	; 0x66
        2754f4:	aa0000d0 	bge	27583c <WordRecogAddStroke2+0xb4c>
        2754f8:	e3580000 	cmp	r8, #0	; 0x0
        2754fc:	da000033 	ble	2755d0 <WordRecogAddStroke2+0x8e0>
        275500:	e3a01802 	mov	r1, #131072	; 0x20000
        275504:	e5940078 	ldr	r0, [r4, #120]
        275508:	eb65aeed 	bl	1be10c4 <$FixedMultiply>
        27550c:	e1500008 	cmp	r0, r8
        275510:	da00002e 	ble	2755d0 <WordRecogAddStroke2+0x8e0>
        275514:	e3a00a0e 	mov	r0, #57344	; 0xe000
        275518:	e5941078 	ldr	r1, [r4, #120]
        27551c:	eb65aee8 	bl	1be10c4 <$FixedMultiply>
        275520:	e1a01008 	mov	r1, r8
        275524:	e52d0004 	str	r0, [sp, -#4]!
        275528:	e3a00a02 	mov	r0, #8192	; 0x2000
        27552c:	eb65aee4 	bl	1be10c4 <$FixedMultiply>
        275530:	e1a01000 	mov	r1, r0
        275534:	e49d0004 	ldr	r0, [sp], #4
        275538:	e0800001 	add	r0, r0, r1
        27553c:	e5840078 	str	r0, [r4, #120]
        275540:	e59f8350 	ldr	r8, [pc, #350]	; 275898 <WordRecogAddStroke2+0xba8>
        275544:	e1a01008 	mov	r1, r8
        275548:	e3a00903 	mov	r0, #49152	; 0xc000
        27554c:	eb65aedc 	bl	1be10c4 <$FixedMultiply>
        275550:	e5941078 	ldr	r1, [r4, #120]
        275554:	e1500001 	cmp	r0, r1
        275558:	e1a01008 	mov	r1, r8
        27555c:	c3a00903 	movgt	r0, #49152	; 0xc000
        275560:	ca000006 	bgt	275580 <WordRecogAddStroke2+0x890>
        275564:	e3a00905 	mov	r0, #81920	; 0x14000
        275568:	eb65aed5 	bl	1be10c4 <$FixedMultiply>
        27556c:	e5941078 	ldr	r1, [r4, #120]
        275570:	e1500001 	cmp	r0, r1
        275574:	aa000003 	bge	275588 <WordRecogAddStroke2+0x898>
        275578:	e1a01008 	mov	r1, r8
        27557c:	e3a00905 	mov	r0, #81920	; 0x14000
        275580:	eb65aecf 	bl	1be10c4 <$FixedMultiply>
        275584:	e5840078 	str	r0, [r4, #120]
        275588:	e1a01008 	mov	r1, r8
        27558c:	e5940078 	ldr	r0, [r4, #120]
        275590:	eb65aeca 	bl	1be10c0 <$FixedDivide>
        275594:	e1a01000 	mov	r1, r0
        275598:	e59f02fc 	ldr	r0, [pc, #2fc]	; 27589c <WordRecogAddStroke2+0xbac>
        27559c:	eb65aec8 	bl	1be10c4 <$FixedMultiply>
        2755a0:	e1a08000 	mov	r8, r0
        2755a4:	e5941078 	ldr	r1, [r4, #120]
        2755a8:	e1a00001 	mov	r0, r1
        2755ac:	eb65aec4 	bl	1be10c4 <$FixedMultiply>
        2755b0:	e1a01008 	mov	r1, r8
        2755b4:	e52d0004 	str	r0, [sp, -#4]!
        2755b8:	e1a00008 	mov	r0, r8
        2755bc:	eb65aec0 	bl	1be10c4 <$FixedMultiply>
        2755c0:	e1a01000 	mov	r1, r0
        2755c4:	e49d0004 	ldr	r0, [sp], #4
        2755c8:	e0800001 	add	r0, r0, r1
        2755cc:	e584007c 	str	r0, [r4, #124]
        2755d0:	e35a0000 	cmp	sl, #0	; 0x0
        2755d4:	da000031 	ble	2756a0 <WordRecogAddStroke2+0x9b0>
        2755d8:	e3a01802 	mov	r1, #131072	; 0x20000
        2755dc:	e5940098 	ldr	r0, [r4, #152]
        2755e0:	eb65aeb7 	bl	1be10c4 <$FixedMultiply>
        2755e4:	e150000a 	cmp	r0, sl
        2755e8:	da00002c 	ble	2756a0 <WordRecogAddStroke2+0x9b0>
        2755ec:	e3a00a0e 	mov	r0, #57344	; 0xe000
        2755f0:	e5941098 	ldr	r1, [r4, #152]
        2755f4:	eb65aeb2 	bl	1be10c4 <$FixedMultiply>
        2755f8:	e1a08000 	mov	r8, r0
        2755fc:	e1a0100a 	mov	r1, sl
        275600:	e3a00a02 	mov	r0, #8192	; 0x2000
        275604:	eb65aeae 	bl	1be10c4 <$FixedMultiply>
        275608:	e0880000 	add	r0, r8, r0
        27560c:	e3a080ce 	mov	r8, #206	; 0xce
        275610:	e2888c57 	add	r8, r8, #22272	; 0x5700
        275614:	e1a01008 	mov	r1, r8
        275618:	e5840098 	str	r0, [r4, #152]
        27561c:	e3a00903 	mov	r0, #49152	; 0xc000
        275620:	eb65aea7 	bl	1be10c4 <$FixedMultiply>
        275624:	e5941098 	ldr	r1, [r4, #152]
        275628:	e1500001 	cmp	r0, r1
        27562c:	e1a01008 	mov	r1, r8
        275630:	c3a00903 	movgt	r0, #49152	; 0xc000
        275634:	ca000006 	bgt	275654 <WordRecogAddStroke2+0x964>
        275638:	e3a00905 	mov	r0, #81920	; 0x14000
        27563c:	eb65aea0 	bl	1be10c4 <$FixedMultiply>
        275640:	e5941098 	ldr	r1, [r4, #152]
        275644:	e1500001 	cmp	r0, r1
        275648:	aa000003 	bge	27565c <WordRecogAddStroke2+0x96c>
        27564c:	e1a01008 	mov	r1, r8
        275650:	e3a00905 	mov	r0, #81920	; 0x14000
        275654:	eb65ae9a 	bl	1be10c4 <$FixedMultiply>
        275658:	e5840098 	str	r0, [r4, #152]
        27565c:	e1a01008 	mov	r1, r8
        275660:	e5940098 	ldr	r0, [r4, #152]
        275664:	eb65ae95 	bl	1be10c0 <$FixedDivide>
        275668:	e1a01000 	mov	r1, r0
        27566c:	e3a00fce 	mov	r0, #824	; 0x338
        275670:	e2800b0d 	add	r0, r0, #13312	; 0x3400
        275674:	eb65ae92 	bl	1be10c4 <$FixedMultiply>
        275678:	e1a08000 	mov	r8, r0
        27567c:	e5941098 	ldr	r1, [r4, #152]
        275680:	e1a00001 	mov	r0, r1
        275684:	eb65ae8e 	bl	1be10c4 <$FixedMultiply>
        275688:	e1a0a000 	mov	sl, r0
        27568c:	e1a01008 	mov	r1, r8
        275690:	e1a00008 	mov	r0, r8
        275694:	eb65ae8a 	bl	1be10c4 <$FixedMultiply>
        275698:	e08a0000 	add	r0, sl, r0
        27569c:	e584009c 	str	r0, [r4, #156]
        2756a0:	e3570000 	cmp	r7, #0	; 0x0
        2756a4:	da000030 	ble	27576c <WordRecogAddStroke2+0xa7c>
        2756a8:	e3a01802 	mov	r1, #131072	; 0x20000
        2756ac:	e5940088 	ldr	r0, [r4, #136]
        2756b0:	eb65ae83 	bl	1be10c4 <$FixedMultiply>
        2756b4:	e1500007 	cmp	r0, r7
        2756b8:	da00002b 	ble	27576c <WordRecogAddStroke2+0xa7c>
        2756bc:	e3a00a0e 	mov	r0, #57344	; 0xe000
        2756c0:	e5941088 	ldr	r1, [r4, #136]
        2756c4:	eb65ae7e 	bl	1be10c4 <$FixedMultiply>
        2756c8:	e1a08000 	mov	r8, r0
        2756cc:	e1a01007 	mov	r1, r7
        2756d0:	e3a00a02 	mov	r0, #8192	; 0x2000
        2756d4:	eb65ae7a 	bl	1be10c4 <$FixedMultiply>
        2756d8:	e0880000 	add	r0, r8, r0
        2756dc:	e3a070a3 	mov	r7, #163	; 0xa3
        2756e0:	e2877aeb 	add	r7, r7, #962560	; 0xeb000
        2756e4:	e1a01007 	mov	r1, r7
        2756e8:	e5840088 	str	r0, [r4, #136]
        2756ec:	e3a00903 	mov	r0, #49152	; 0xc000
        2756f0:	eb65ae73 	bl	1be10c4 <$FixedMultiply>
        2756f4:	e5941088 	ldr	r1, [r4, #136]
        2756f8:	e1500001 	cmp	r0, r1
        2756fc:	e1a01007 	mov	r1, r7
        275700:	c3a00903 	movgt	r0, #49152	; 0xc000
        275704:	ca000006 	bgt	275724 <WordRecogAddStroke2+0xa34>
        275708:	e3a00905 	mov	r0, #81920	; 0x14000
        27570c:	eb65ae6c 	bl	1be10c4 <$FixedMultiply>
        275710:	e5941088 	ldr	r1, [r4, #136]
        275714:	e1500001 	cmp	r0, r1
        275718:	aa000003 	bge	27572c <WordRecogAddStroke2+0xa3c>
        27571c:	e1a01007 	mov	r1, r7
        275720:	e3a00905 	mov	r0, #81920	; 0x14000
        275724:	eb65ae66 	bl	1be10c4 <$FixedMultiply>
        275728:	e5840088 	str	r0, [r4, #136]
        27572c:	e1a01007 	mov	r1, r7
        275730:	e5940088 	ldr	r0, [r4, #136]
        275734:	eb65ae61 	bl	1be10c0 <$FixedDivide>
        275738:	e1a01000 	mov	r1, r0
        27573c:	e59f015c 	ldr	r0, [pc, #15c]	; 2758a0 <WordRecogAddStroke2+0xbb0>
        275740:	eb65ae5f 	bl	1be10c4 <$FixedMultiply>
        275744:	e1a07000 	mov	r7, r0
        275748:	e5941088 	ldr	r1, [r4, #136]
        27574c:	e1a00001 	mov	r0, r1
        275750:	eb65ae5b 	bl	1be10c4 <$FixedMultiply>
        275754:	e1a08000 	mov	r8, r0
        275758:	e1a01007 	mov	r1, r7
        27575c:	e1a00007 	mov	r0, r7
        275760:	eb65ae57 	bl	1be10c4 <$FixedMultiply>
        275764:	e0880000 	add	r0, r8, r0
        275768:	e584008c 	str	r0, [r4, #140]
        27576c:	e3590000 	cmp	r9, #0	; 0x0
        275770:	da000031 	ble	27583c <WordRecogAddStroke2+0xb4c>
        275774:	e3a01802 	mov	r1, #131072	; 0x20000
        275778:	e59400a8 	ldr	r0, [r4, #168]
        27577c:	eb65ae50 	bl	1be10c4 <$FixedMultiply>
        275780:	e1500009 	cmp	r0, r9
        275784:	da00002c 	ble	27583c <WordRecogAddStroke2+0xb4c>
        275788:	e3a00a0e 	mov	r0, #57344	; 0xe000
        27578c:	e59410a8 	ldr	r1, [r4, #168]
        275790:	eb65ae4b 	bl	1be10c4 <$FixedMultiply>
        275794:	e1a07000 	mov	r7, r0
        275798:	e1a01009 	mov	r1, r9
        27579c:	e3a00a02 	mov	r0, #8192	; 0x2000
        2757a0:	eb65ae47 	bl	1be10c4 <$FixedMultiply>
        2757a4:	e0870000 	add	r0, r7, r0
        2757a8:	e3a070db 	mov	r7, #219	; 0xdb
        2757ac:	e2877cc9 	add	r7, r7, #51456	; 0xc900
        2757b0:	e1a01007 	mov	r1, r7
        2757b4:	e58400a8 	str	r0, [r4, #168]
        2757b8:	e3a00903 	mov	r0, #49152	; 0xc000
        2757bc:	eb65ae40 	bl	1be10c4 <$FixedMultiply>
        2757c0:	e59410a8 	ldr	r1, [r4, #168]
        2757c4:	e1500001 	cmp	r0, r1
        2757c8:	e1a01007 	mov	r1, r7
        2757cc:	c3a00903 	movgt	r0, #49152	; 0xc000
        2757d0:	ca000006 	bgt	2757f0 <WordRecogAddStroke2+0xb00>
        2757d4:	e3a00905 	mov	r0, #81920	; 0x14000
        2757d8:	eb65ae39 	bl	1be10c4 <$FixedMultiply>
        2757dc:	e59410a8 	ldr	r1, [r4, #168]
        2757e0:	e1500001 	cmp	r0, r1
        2757e4:	aa000003 	bge	2757f8 <WordRecogAddStroke2+0xb08>
        2757e8:	e1a01007 	mov	r1, r7
        2757ec:	e3a00905 	mov	r0, #81920	; 0x14000
        2757f0:	eb65ae33 	bl	1be10c4 <$FixedMultiply>
        2757f4:	e58400a8 	str	r0, [r4, #168]
        2757f8:	e1a01007 	mov	r1, r7
        2757fc:	e59400a8 	ldr	r0, [r4, #168]
        275800:	eb65ae2e 	bl	1be10c0 <$FixedDivide>
        275804:	e1a01000 	mov	r1, r0
        275808:	e3a0003f 	mov	r0, #63	; 0x3f
        27580c:	e2800c66 	add	r0, r0, #26112	; 0x6600
        275810:	eb65ae2b 	bl	1be10c4 <$FixedMultiply>
        275814:	e1a07000 	mov	r7, r0
        275818:	e59410a8 	ldr	r1, [r4, #168]
        27581c:	e1a00001 	mov	r0, r1
        275820:	eb65ae27 	bl	1be10c4 <$FixedMultiply>
        275824:	e1a08000 	mov	r8, r0
        275828:	e1a01007 	mov	r1, r7
        27582c:	e1a00007 	mov	r0, r7
        275830:	eb65ae23 	bl	1be10c4 <$FixedMultiply>
        275834:	e0880000 	add	r0, r8, r0
        275838:	e58400ac 	str	r0, [r4, #172]
        27583c:	e59d1084 	ldr	r1, [sp, #132]
        275840:	e596001c 	ldr	r0, [r6, #28]
        275844:	e1510000 	cmp	r1, r0
        275848:	c59d0084 	ldrgt	r0, [sp, #132]
        27584c:	e586001c 	str	r0, [r6, #28]
        275850:	e5960020 	ldr	r0, [r6, #32]
        275854:	e59b200c 	ldr	r2, [fp, #12]
        275858:	e1500002 	cmp	r0, r2
        27585c:	b59b000c 	ldrlt	r0, [fp, #12]
        275860:	e5860020 	str	r0, [r6, #32]
        275864:	e5d50026 	ldrb	r0, [r5, #38]
        275868:	e5d51027 	ldrb	r1, [r5, #39]
        27586c:	e1800001 	orr	r0, r0, r1
        275870:	e5c60024 	strb	r0, [r6, #36]
        275874:	e1a0000d 	mov	r0, sp
        275878:	eb65ae0e 	bl	1be10b8 <$ExitHandler>
        27587c:	e5940020 	ldr	r0, [r4, #32]
        275880:	e1a00820 	mov	r0, r0, lsr #16
        275884:	e2800001 	add	r0, r0, #1	; 0x1
        275888:	e5c40021 	strb	r0, [r4, #33]
        27588c:	e1a00440 	mov	r0, r0, asr #8
        275890:	e5c40020 	strb	r0, [r4, #32]
        275894:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        275898:	00063851 	andeq	r3, r6, r1, asr r8
        27589c:	0003f333 	andeq	pc, r3, r3, lsr r3
        2758a0:	000835c2 	andeq	r3, r8, r2, asr #11
        2758a4:	e5940038 	ldr	r0, [r4, #56]
        2758a8:	e1b00840 	movs	r0, r0, asr #16
        2758ac:	05d50026 	ldreqb	r0, [r5, #38]
        2758b0:	03300000 	teqeq	r0, #0	; 0x0
        2758b4:	05d50027 	ldreqb	r0, [r5, #39]
        2758b8:	03300000 	teqeq	r0, #0	; 0x0
        2758bc:	11a00005 	movne	r0, r5
        2758c0:	1b63fc5b 	blne	1b74a34 <$StrokeDestroy>
        2758c4:	e1a0000d 	mov	r0, sp
        2758c8:	eb65b221 	bl	1be2154 <$NextHandler>
        2758cc:	eafffff4 	b	2758a4 <WordRecogAddStroke2+0xbb4>
    */
}

/**
 * Symbol: WordRecogResume
 * Address: 002758d0
 */
void globals::WordRecogResume() {
    /*
        2758d0:	e3300000 	teq	r0, #0	; 0x0
        2758d4:	03a00003 	moveq	r0, #3	; 0x3
        2758d8:	01a0f00e 	moveq	pc, lr
        2758dc:	e1a0c00d 	mov	ip, sp
        2758e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2758e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2758e8:	e1a04000 	mov	r4, r0
        2758ec:	e5900024 	ldr	r0, [r0, #36]
        2758f0:	e3300000 	teq	r0, #0	; 0x0
        2758f4:	05940040 	ldreq	r0, [r4, #64]
        2758f8:	03300000 	teqeq	r0, #0	; 0x0
        2758fc:	05940010 	ldreq	r0, [r4, #16]
        275900:	03300000 	teqeq	r0, #0	; 0x0
        275904:	05940014 	ldreq	r0, [r4, #20]
        275908:	03300000 	teqeq	r0, #0	; 0x0
        27590c:	05940018 	ldreq	r0, [r4, #24]
        275910:	03300000 	teqeq	r0, #0	; 0x0
        275914:	1a000002 	bne	275924 <WordRecogResume+0x54>
        275918:	e5d40050 	ldrb	r0, [r4, #80]
        27591c:	e3300000 	teq	r0, #0	; 0x0
        275920:	1a000001 	bne	27592c <WordRecogResume+0x5c>
        275924:	e3a00002 	mov	r0, #2	; 0x2
        275928:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        27592c:	e1a00004 	mov	r0, r4
        275930:	eb640053 	bl	1b75a84 <$WordRecogAllocate>
        275934:	e3a00000 	mov	r0, #0	; 0x0
        275938:	e5c40050 	strb	r0, [r4, #80]
        27593c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogCreate2
 * Address: 00275940
 */
void globals::WordRecogCreate2() {
    /*
        275940:	e1a0c00d 	mov	ip, sp
        275944:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        275948:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27594c:	e24cb014 	sub	fp, ip, #20	; 0x14
        275950:	e1a06000 	mov	r6, r0
        275954:	e1a05002 	mov	r5, r2
        275958:	e1a04003 	mov	r4, r3
        27595c:	e59b001c 	ldr	r0, [fp, #28]
        275960:	e1a08800 	mov	r8, r0, lsl #16
        275964:	e1a08848 	mov	r8, r8, asr #16
        275968:	e3a00000 	mov	r0, #0	; 0x0
        27596c:	e28ba014 	add	sl, fp, #20	; 0x14
        275970:	e89a0600 	ldmia	sl, {r9, sl}
        275974:	e52d0004 	str	r0, [sp, -#4]!
        275978:	e59f7030 	ldr	r7, [pc, #30]	; 2759b0 <WordRecogCreate2+0x70>
        27597c:	e3390000 	teq	r9, #0	; 0x0
        275980:	1a000003 	bne	275994 <WordRecogCreate2+0x54>
        275984:	e3a02000 	mov	r2, #0	; 0x0
        275988:	e3e01000 	mvn	r1, #0	; 0x0
        27598c:	e5970000 	ldr	r0, [r7]
        275990:	eb65b601 	bl	1be319c <$Throw>
        275994:	eb640047 	bl	1b75ab8 <$WordRecogNew>
        275998:	e58d0000 	str	r0, [sp]
        27599c:	e59d1000 	ldr	r1, [sp]
        2759a0:	e3a00000 	mov	r0, #0	; 0x0
        2759a4:	e3310000 	teq	r1, #0	; 0x0
        2759a8:	1a000001 	bne	2759b4 <WordRecogCreate2+0x74>
        2759ac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2759b0:	003774f8 	ldreqsh	r7, [r7], -r8
        2759b4:	e59d1000 	ldr	r1, [sp]
        2759b8:	e5a1400c 	str	r4, [r1, #12]!
        2759bc:	e3a01001 	mov	r1, #1	; 0x1
        2759c0:	e3350000 	teq	r5, #0	; 0x0
        2759c4:	0a000001 	beq	2759d0 <WordRecogCreate2+0x90>
        2759c8:	e3540001 	cmp	r4, #1	; 0x1
        2759cc:	aa000001 	bge	2759d8 <WordRecogCreate2+0x98>
        2759d0:	e59d2000 	ldr	r2, [sp]
        2759d4:	e5a2100c 	str	r1, [r2, #12]!
        2759d8:	e1a04000 	mov	r4, r0
        2759dc:	e52d006c 	str	r0, [sp, -#108]!
        2759e0:	e28d0008 	add	r0, sp, #8	; 0x8
        2759e4:	eb64f3e2 	bl	1bb2974 <$setjmp>
        2759e8:	e3300000 	teq	r0, #0	; 0x0
        2759ec:	1a000043 	bne	275b00 <WordRecogCreate2+0x1c0>
        2759f0:	e1a0000d 	mov	r0, sp
        2759f4:	eb65a9a0 	bl	1be007c <$AddExceptionHandler>
        2759f8:	e59d006c 	ldr	r0, [sp, #108]
        2759fc:	eb640020 	bl	1b75a84 <$WordRecogAllocate>
        275a00:	e1a00009 	mov	r0, r9
        275a04:	eb63e75d 	bl	1b6f780 <$BiGrammarsLoad>
        275a08:	e59d106c 	ldr	r1, [sp, #108]
        275a0c:	e5a10198 	str	r0, [r1, #408]!
        275a10:	e59d006c 	ldr	r0, [sp, #108]
        275a14:	e5900198 	ldr	r0, [r0, #408]
        275a18:	e3300000 	teq	r0, #0	; 0x0
        275a1c:	159d006c 	ldrne	r0, [sp, #108]
        275a20:	15900198 	ldrne	r0, [r0, #408]
        275a24:	15900000 	ldrne	r0, [r0]
        275a28:	13300000 	teqne	r0, #0	; 0x0
        275a2c:	1a000003 	bne	275a40 <WordRecogCreate2+0x100>
        275a30:	e3a02000 	mov	r2, #0	; 0x0
        275a34:	e3a01001 	mov	r1, #1	; 0x1
        275a38:	e5970000 	ldr	r0, [r7]
        275a3c:	eb65b5d6 	bl	1be319c <$Throw>
        275a40:	e1a0000d 	mov	r0, sp
        275a44:	eb65ad9b 	bl	1be10b8 <$ExitHandler>
        275a48:	e5bd006c 	ldr	r0, [sp, #108]!
        275a4c:	e5c04050 	strb	r4, [r0, #80]
        275a50:	e59d0000 	ldr	r0, [sp]
        275a54:	e5806000 	str	r6, [r0]
        275a58:	e59b1008 	ldr	r1, [fp, #8]
        275a5c:	e59d0000 	ldr	r0, [sp]
        275a60:	e5a01004 	str	r1, [r0, #4]!
        275a64:	e59d0000 	ldr	r0, [sp]
        275a68:	e5a05008 	str	r5, [r0, #8]!
        275a6c:	e59d0000 	ldr	r0, [sp]
        275a70:	e5c08039 	strb	r8, [r0, #57]
        275a74:	e1a01448 	mov	r1, r8, asr #8
        275a78:	e5c01038 	strb	r1, [r0, #56]
        275a7c:	e59d0000 	ldr	r0, [sp]
        275a80:	e5a0a054 	str	sl, [r0, #84]!
        275a84:	e59d0000 	ldr	r0, [sp]
        275a88:	e5c04021 	strb	r4, [r0, #33]
        275a8c:	e5c04020 	strb	r4, [r0, #32]
        275a90:	e59d0000 	ldr	r0, [sp]
        275a94:	e5c0403d 	strb	r4, [r0, #61]
        275a98:	e5c0403c 	strb	r4, [r0, #60]
        275a9c:	e59d0000 	ldr	r0, [sp]
        275aa0:	e3a01801 	mov	r1, #65536	; 0x10000
        275aa4:	e5a041a8 	str	r4, [r0, #424]!
        275aa8:	e59d0000 	ldr	r0, [sp]
        275aac:	e5a01124 	str	r1, [r0, #292]!
        275ab0:	e3a008ff 	mov	r0, #16711680	; 0xff0000
        275ab4:	e28004ff 	add	r0, r0, #-16777216	; 0xff000000
        275ab8:	e59d2000 	ldr	r2, [sp]
        275abc:	e5a2012c 	str	r0, [r2, #300]!
        275ac0:	e59d2000 	ldr	r2, [sp]
        275ac4:	e5a21134 	str	r1, [r2, #308]!
        275ac8:	e59d1000 	ldr	r1, [sp]
        275acc:	e5a1013c 	str	r0, [r1, #316]!
        275ad0:	e59d1000 	ldr	r1, [sp]
        275ad4:	e5a10144 	str	r0, [r1, #324]!
        275ad8:	e59d1000 	ldr	r1, [sp]
        275adc:	e5a1014c 	str	r0, [r1, #332]!
        275ae0:	e59d0000 	ldr	r0, [sp]
        275ae4:	e5a04154 	str	r4, [r0, #340]!
        275ae8:	e59d0000 	ldr	r0, [sp]
        275aec:	e5a0415c 	str	r4, [r0, #348]!
        275af0:	e59d0000 	ldr	r0, [sp]
        275af4:	eb63fff0 	bl	1b75abc <$WordRecogReset>
        275af8:	e59d0000 	ldr	r0, [sp]
        275afc:	eaffffaa 	b	2759ac <WordRecogCreate2+0x6c>
        275b00:	e59d006c 	ldr	r0, [sp, #108]
        275b04:	eb63ffe5 	bl	1b75aa0 <$WordRecogDestroy>
        275b08:	e1a0000d 	mov	r0, sp
        275b0c:	eb65b190 	bl	1be2154 <$NextHandler>
        275b10:	eafffffa 	b	275b00 <WordRecogCreate2+0x1c0>
    */
}

/**
 * Symbol: WordRecogReset
 * Address: 00275b14
 */
void globals::WordRecogReset() {
    /*
        275b14:	e3300000 	teq	r0, #0	; 0x0
        275b18:	01a0f00e 	moveq	pc, lr
        275b1c:	e1a0c00d 	mov	ip, sp
        275b20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        275b24:	e24cb004 	sub	fp, ip, #4	; 0x4
        275b28:	e1a04000 	mov	r4, r0
        275b2c:	e3e00000 	mvn	r0, #0	; 0x0
        275b30:	e5c40029 	strb	r0, [r4, #41]
        275b34:	e5c40028 	strb	r0, [r4, #40]
        275b38:	e5c4002b 	strb	r0, [r4, #43]
        275b3c:	e5c4002a 	strb	r0, [r4, #42]
        275b40:	e3a00801 	mov	r0, #65536	; 0x10000
        275b44:	e584002c 	str	r0, [r4, #44]
        275b48:	e3a01f71 	mov	r1, #452	; 0x1c4
        275b4c:	e2811a15 	add	r1, r1, #86016	; 0x15000
        275b50:	e5840030 	str	r0, [r4, #48]
        275b54:	e59f518c 	ldr	r5, [pc, #18c]	; 275ce8 <WordRecogReset+0x1d4>
        275b58:	e1a00005 	mov	r0, r5
        275b5c:	eb65ad58 	bl	1be10c4 <$FixedMultiply>
        275b60:	e5840034 	str	r0, [r4, #52]
        275b64:	e58450c8 	str	r5, [r4, #200]
        275b68:	e59f017c 	ldr	r0, [pc, #17c]	; 275cec <WordRecogReset+0x1d8>
        275b6c:	e58400cc 	str	r0, [r4, #204]
        275b70:	e59f0178 	ldr	r0, [pc, #178]	; 275cf0 <WordRecogReset+0x1dc>
        275b74:	e58400d0 	str	r0, [r4, #208]
        275b78:	e59f0174 	ldr	r0, [pc, #174]	; 275cf4 <WordRecogReset+0x1e0>
        275b7c:	e58400d4 	str	r0, [r4, #212]
        275b80:	e59f0170 	ldr	r0, [pc, #170]	; 275cf8 <WordRecogReset+0x1e4>
        275b84:	e58400d8 	str	r0, [r4, #216]
        275b88:	e59f016c 	ldr	r0, [pc, #16c]	; 275cfc <WordRecogReset+0x1e8>
        275b8c:	e58400dc 	str	r0, [r4, #220]
        275b90:	e3a000a3 	mov	r0, #163	; 0xa3
        275b94:	e2800aeb 	add	r0, r0, #962560	; 0xeb000
        275b98:	e58400e0 	str	r0, [r4, #224]
        275b9c:	e59f015c 	ldr	r0, [pc, #15c]	; 275d00 <WordRecogReset+0x1ec>
        275ba0:	e58400e4 	str	r0, [r4, #228]
        275ba4:	e59f0158 	ldr	r0, [pc, #158]	; 275d04 <WordRecogReset+0x1f0>
        275ba8:	e58400e8 	str	r0, [r4, #232]
        275bac:	e59f0154 	ldr	r0, [pc, #154]	; 275d08 <WordRecogReset+0x1f4>
        275bb0:	e58400ec 	str	r0, [r4, #236]
        275bb4:	e3a000ce 	mov	r0, #206	; 0xce
        275bb8:	e2800c57 	add	r0, r0, #22272	; 0x5700
        275bbc:	e58400f0 	str	r0, [r4, #240]
        275bc0:	e3a00009 	mov	r0, #9	; 0x9
        275bc4:	e2800c2a 	add	r0, r0, #10752	; 0x2a00
        275bc8:	e58400f4 	str	r0, [r4, #244]
        275bcc:	e59f0138 	ldr	r0, [pc, #138]	; 275d0c <WordRecogReset+0x1f8>
        275bd0:	e58400f8 	str	r0, [r4, #248]
        275bd4:	e59f0134 	ldr	r0, [pc, #134]	; 275d10 <WordRecogReset+0x1fc>
        275bd8:	e58400fc 	str	r0, [r4, #252]
        275bdc:	e3a000db 	mov	r0, #219	; 0xdb
        275be0:	e2800cc9 	add	r0, r0, #51456	; 0xc900
        275be4:	e5840100 	str	r0, [r4, #256]
        275be8:	e2400f76 	sub	r0, r0, #472	; 0x1d8
        275bec:	e5840104 	str	r0, [r4, #260]
        275bf0:	e59f011c 	ldr	r0, [pc, #11c]	; 275d14 <WordRecogReset+0x200>
        275bf4:	e5840108 	str	r0, [r4, #264]
        275bf8:	e59f0118 	ldr	r0, [pc, #118]	; 275d18 <WordRecogReset+0x204>
        275bfc:	e584010c 	str	r0, [r4, #268]
        275c00:	e59f1114 	ldr	r1, [pc, #114]	; 275d1c <WordRecogReset+0x208>
        275c04:	e3a00f71 	mov	r0, #452	; 0x1c4
        275c08:	e2800a15 	add	r0, r0, #86016	; 0x15000
        275c0c:	eb65ad2b 	bl	1be10c0 <$FixedDivide>
        275c10:	e1a01000 	mov	r1, r0
        275c14:	e59f00cc 	ldr	r0, [pc, #cc]	; 275ce8 <WordRecogReset+0x1d4>
        275c18:	eb65ad29 	bl	1be10c4 <$FixedMultiply>
        275c1c:	e3a010df 	mov	r1, #223	; 0xdf
        275c20:	e2811c6e 	add	r1, r1, #28160	; 0x6e00
        275c24:	e5840110 	str	r0, [r4, #272]
        275c28:	e3a00f71 	mov	r0, #452	; 0x1c4
        275c2c:	e2800a15 	add	r0, r0, #86016	; 0x15000
        275c30:	eb65ad22 	bl	1be10c0 <$FixedDivide>
        275c34:	e1a01000 	mov	r1, r0
        275c38:	e59f00a8 	ldr	r0, [pc, #a8]	; 275ce8 <WordRecogReset+0x1d4>
        275c3c:	eb65ad20 	bl	1be10c4 <$FixedMultiply>
        275c40:	e3a0106e 	mov	r1, #110	; 0x6e
        275c44:	e2811cd3 	add	r1, r1, #54016	; 0xd300
        275c48:	e5840114 	str	r0, [r4, #276]
        275c4c:	e3a00f71 	mov	r0, #452	; 0x1c4
        275c50:	e2800a15 	add	r0, r0, #86016	; 0x15000
        275c54:	eb65ad19 	bl	1be10c0 <$FixedDivide>
        275c58:	e1a01000 	mov	r1, r0
        275c5c:	e59f0084 	ldr	r0, [pc, #84]	; 275ce8 <WordRecogReset+0x1d4>
        275c60:	eb65ad17 	bl	1be10c4 <$FixedMultiply>
        275c64:	e3a01008 	mov	r1, #8	; 0x8
        275c68:	e2811b47 	add	r1, r1, #72704	; 0x11c00
        275c6c:	e5840118 	str	r0, [r4, #280]
        275c70:	e3a00f71 	mov	r0, #452	; 0x1c4
        275c74:	e2800a15 	add	r0, r0, #86016	; 0x15000
        275c78:	eb65ad10 	bl	1be10c0 <$FixedDivide>
        275c7c:	e1a01000 	mov	r1, r0
        275c80:	e59f0060 	ldr	r0, [pc, #60]	; 275ce8 <WordRecogReset+0x1d4>
        275c84:	eb65ad0e 	bl	1be10c4 <$FixedMultiply>
        275c88:	e3a010b9 	mov	r1, #185	; 0xb9
        275c8c:	e2811b3f 	add	r1, r1, #64512	; 0xfc00
        275c90:	e584011c 	str	r0, [r4, #284]
        275c94:	e3a00f71 	mov	r0, #452	; 0x1c4
        275c98:	e2800a15 	add	r0, r0, #86016	; 0x15000
        275c9c:	eb65ad07 	bl	1be10c0 <$FixedDivide>
        275ca0:	e1a01000 	mov	r1, r0
        275ca4:	e59f003c 	ldr	r0, [pc, #3c]	; 275ce8 <WordRecogReset+0x1d4>
        275ca8:	eb65ad05 	bl	1be10c4 <$FixedMultiply>
        275cac:	e5840120 	str	r0, [r4, #288]
        275cb0:	e3a00000 	mov	r0, #0	; 0x0
        275cb4:	e5c40044 	strb	r0, [r4, #68]
        275cb8:	e584019c 	str	r0, [r4, #412]
        275cbc:	e5940198 	ldr	r0, [r4, #408]
        275cc0:	e5900004 	ldr	r0, [r0, #4]
        275cc4:	e5900000 	ldr	r0, [r0]
        275cc8:	e58401a0 	str	r0, [r4, #416]
        275ccc:	e1a00004 	mov	r0, r4
        275cd0:	e28f1f12 	add	r1, pc, #72	; 0x48
        275cd4:	eb63ff7b 	bl	1b75ac8 <$WordRecogSetContext>
        275cd8:	e1a00004 	mov	r0, r4
        275cdc:	e3a01001 	mov	r1, #1	; 0x1
        275ce0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        275ce4:	ea63ff68 	b	1b75a8c <$WordRecogClear>
        275ce8:	0012d999 	muleqs	r2, r9, r9
        275cec:	01a4fae1 	moveq	pc, r1, ror #21
        275cf0:	00063851 	andeq	r3, r6, r1, asr r8
        275cf4:	003647ae 	eoreqs	r4, r6, lr, lsr #15
        275cf8:	00171999 	muleqs	r7, r9, r9
        275cfc:	0283451e 	addeq	r4, r3, #125829120	; 0x7800000
        275d00:	011b11eb 	tsteq	fp, fp, ror #3
        275d04:	0022d1eb 	eoreq	sp, r2, fp, ror #3
        275d08:	05408f5c 	streqb	r8, [r0, -#3932]
        275d0c:	00015212 	andeq	r5, r1, r2, lsl r2
        275d10:	00022339 	andeq	r2, r2, r9, lsr r3
        275d14:	0001f5e3 	andeq	pc, r1, r3, ror #11
        275d18:	00043ed2 	ldreqd	r3, [r4], -r2
        275d1c:	000117d5 	ldreqd	r1, [r1], -r5
        275d20:	47656e65 	strmib	r6, [r5, -r5, ror #28]!
        275d24:	72616c00 	rsbvc	r6, r1, #0	; 0x0
    */
}

/**
 * Symbol: WordRecogClear
 * Address: 00275d28
 */
void globals::WordRecogClear() {
    /*
        275d28:	e1a0c00d 	mov	ip, sp
        275d2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        275d30:	e24cb004 	sub	fp, ip, #4	; 0x4
        275d34:	e1b04000 	movs	r4, r0
        275d38:	e20100ff 	and	r0, r1, #255	; 0xff
        275d3c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        275d40:	e3300000 	teq	r0, #0	; 0x0
        275d44:	11a00004 	movne	r0, r4
        275d48:	1b63ff57 	blne	1b75aac <$WordRecogInvalRun>
        275d4c:	e5940070 	ldr	r0, [r4, #112]
        275d50:	e3a05000 	mov	r5, #0	; 0x0
        275d54:	e5840060 	str	r0, [r4, #96]
        275d58:	e58451a4 	str	r5, [r4, #420]
        275d5c:	e59401a8 	ldr	r0, [r4, #424]
        275d60:	e3300000 	teq	r0, #0	; 0x0
        275d64:	0a000006 	beq	275d84 <WordRecogClear+0x5c>
        275d68:	e5941038 	ldr	r1, [r4, #56]
        275d6c:	e1b01841 	movs	r1, r1, asr #16
        275d70:	05d01026 	ldreqb	r1, [r0, #38]
        275d74:	03310000 	teqeq	r1, #0	; 0x0
        275d78:	05d01027 	ldreqb	r1, [r0, #39]
        275d7c:	03310000 	teqeq	r1, #0	; 0x0
        275d80:	1b63fb2b 	blne	1b74a34 <$StrokeDestroy>
        275d84:	e58451a8 	str	r5, [r4, #424]
        275d88:	e1a00004 	mov	r0, r4
        275d8c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        275d90:	ea63ff3e 	b	1b75a90 <$WordRecogClearStrokes>
    */
}

/**
 * Symbol: WordRecogInvalRun
 * Address: 00275d94
 */
void globals::WordRecogInvalRun() {
    /*
        275d94:	e59010c8 	ldr	r1, [r0, #200]
        275d98:	e5801070 	str	r1, [r0, #112]
        275d9c:	e59010cc 	ldr	r1, [r0, #204]
        275da0:	e5801074 	str	r1, [r0, #116]
        275da4:	e59010d0 	ldr	r1, [r0, #208]
        275da8:	e5801078 	str	r1, [r0, #120]
        275dac:	e59010d4 	ldr	r1, [r0, #212]
        275db0:	e580107c 	str	r1, [r0, #124]
        275db4:	e59010d8 	ldr	r1, [r0, #216]
        275db8:	e5801080 	str	r1, [r0, #128]
        275dbc:	e59010dc 	ldr	r1, [r0, #220]
        275dc0:	e5801084 	str	r1, [r0, #132]
        275dc4:	e59010e0 	ldr	r1, [r0, #224]
        275dc8:	e5801088 	str	r1, [r0, #136]
        275dcc:	e59010e4 	ldr	r1, [r0, #228]
        275dd0:	e580108c 	str	r1, [r0, #140]
        275dd4:	e59010e8 	ldr	r1, [r0, #232]
        275dd8:	e5801090 	str	r1, [r0, #144]
        275ddc:	e59010ec 	ldr	r1, [r0, #236]
        275de0:	e5801094 	str	r1, [r0, #148]
        275de4:	e59010f0 	ldr	r1, [r0, #240]
        275de8:	e5801098 	str	r1, [r0, #152]
        275dec:	e59010f4 	ldr	r1, [r0, #244]
        275df0:	e580109c 	str	r1, [r0, #156]
        275df4:	e59010f8 	ldr	r1, [r0, #248]
        275df8:	e58010a0 	str	r1, [r0, #160]
        275dfc:	e59010fc 	ldr	r1, [r0, #252]
        275e00:	e58010a4 	str	r1, [r0, #164]
        275e04:	e5901100 	ldr	r1, [r0, #256]
        275e08:	e58010a8 	str	r1, [r0, #168]
        275e0c:	e5901104 	ldr	r1, [r0, #260]
        275e10:	e58010ac 	str	r1, [r0, #172]
        275e14:	e5901108 	ldr	r1, [r0, #264]
        275e18:	e58010b0 	str	r1, [r0, #176]
        275e1c:	e590110c 	ldr	r1, [r0, #268]
        275e20:	e58010b4 	str	r1, [r0, #180]
        275e24:	e5901110 	ldr	r1, [r0, #272]
        275e28:	e58010b8 	str	r1, [r0, #184]
        275e2c:	e5901114 	ldr	r1, [r0, #276]
        275e30:	e58010bc 	str	r1, [r0, #188]
        275e34:	e5901118 	ldr	r1, [r0, #280]
        275e38:	e58010c0 	str	r1, [r0, #192]
        275e3c:	e590111c 	ldr	r1, [r0, #284]
        275e40:	e5a010c4 	str	r1, [r0, #196]!
        275e44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: WordRecogSaveRun
 * Address: 00275e48
 */
void globals::WordRecogSaveRun() {
    /*
        275e48:	e3300000 	teq	r0, #0	; 0x0
        275e4c:	01a0f00e 	moveq	pc, lr
        275e50:	e5901070 	ldr	r1, [r0, #112]
        275e54:	e58010c8 	str	r1, [r0, #200]
        275e58:	e5901074 	ldr	r1, [r0, #116]
        275e5c:	e58010cc 	str	r1, [r0, #204]
        275e60:	e5901078 	ldr	r1, [r0, #120]
        275e64:	e58010d0 	str	r1, [r0, #208]
        275e68:	e590107c 	ldr	r1, [r0, #124]
        275e6c:	e58010d4 	str	r1, [r0, #212]
        275e70:	e5901080 	ldr	r1, [r0, #128]
        275e74:	e58010d8 	str	r1, [r0, #216]
        275e78:	e5901084 	ldr	r1, [r0, #132]
        275e7c:	e58010dc 	str	r1, [r0, #220]
        275e80:	e5901088 	ldr	r1, [r0, #136]
        275e84:	e58010e0 	str	r1, [r0, #224]
        275e88:	e590108c 	ldr	r1, [r0, #140]
        275e8c:	e58010e4 	str	r1, [r0, #228]
        275e90:	e5901090 	ldr	r1, [r0, #144]
        275e94:	e58010e8 	str	r1, [r0, #232]
        275e98:	e5901094 	ldr	r1, [r0, #148]
        275e9c:	e58010ec 	str	r1, [r0, #236]
        275ea0:	e5901098 	ldr	r1, [r0, #152]
        275ea4:	e58010f0 	str	r1, [r0, #240]
        275ea8:	e590109c 	ldr	r1, [r0, #156]
        275eac:	e58010f4 	str	r1, [r0, #244]
        275eb0:	e59010a0 	ldr	r1, [r0, #160]
        275eb4:	e58010f8 	str	r1, [r0, #248]
        275eb8:	e59010a4 	ldr	r1, [r0, #164]
        275ebc:	e58010fc 	str	r1, [r0, #252]
        275ec0:	e59010a8 	ldr	r1, [r0, #168]
        275ec4:	e5801100 	str	r1, [r0, #256]
        275ec8:	e59010ac 	ldr	r1, [r0, #172]
        275ecc:	e5801104 	str	r1, [r0, #260]
        275ed0:	e59010b0 	ldr	r1, [r0, #176]
        275ed4:	e5801108 	str	r1, [r0, #264]
        275ed8:	e59010b4 	ldr	r1, [r0, #180]
        275edc:	e580110c 	str	r1, [r0, #268]
        275ee0:	e59010b8 	ldr	r1, [r0, #184]
        275ee4:	e5801110 	str	r1, [r0, #272]
        275ee8:	e59010bc 	ldr	r1, [r0, #188]
        275eec:	e5801114 	str	r1, [r0, #276]
        275ef0:	e59010c0 	ldr	r1, [r0, #192]
        275ef4:	e5801118 	str	r1, [r0, #280]
        275ef8:	e59010c4 	ldr	r1, [r0, #196]
        275efc:	e5a0111c 	str	r1, [r0, #284]!
        275f00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: WordRecogClearStrokes
 * Address: 00275f04
 */
void globals::WordRecogClearStrokes() {
    /*
        275f04:	e3300000 	teq	r0, #0	; 0x0
        275f08:	01a0f00e 	moveq	pc, lr
        275f0c:	e1a0c00d 	mov	ip, sp
        275f10:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        275f14:	e24cb004 	sub	fp, ip, #4	; 0x4
        275f18:	e1a04000 	mov	r4, r0
        275f1c:	e5900040 	ldr	r0, [r0, #64]
        275f20:	e3a07000 	mov	r7, #0	; 0x0
        275f24:	e3300000 	teq	r0, #0	; 0x0
        275f28:	0a00000f 	beq	275f6c <WordRecogClearStrokes+0x68>
        275f2c:	e3a05000 	mov	r5, #0	; 0x0
        275f30:	e594003c 	ldr	r0, [r4, #60]
        275f34:	e1a00840 	mov	r0, r0, asr #16
        275f38:	e3500000 	cmp	r0, #0	; 0x0
        275f3c:	da00000a 	ble	275f6c <WordRecogClearStrokes+0x68>
        275f40:	e5940040 	ldr	r0, [r4, #64]
        275f44:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        275f48:	eb63f69c 	bl	1b739c0 <$SegmentDestroy>
        275f4c:	e5940040 	ldr	r0, [r4, #64]
        275f50:	e7807105 	str	r7, [r0, r5, lsl #2]
        275f54:	e2850001 	add	r0, r5, #1	; 0x1
        275f58:	e1a05800 	mov	r5, r0, lsl #16
        275f5c:	e1a05845 	mov	r5, r5, asr #16
        275f60:	e594003c 	ldr	r0, [r4, #60]
        275f64:	e1550840 	cmp	r5, r0, asr #16
        275f68:	bafffff4 	blt	275f40 <WordRecogClearStrokes+0x3c>
        275f6c:	e5c4703d 	strb	r7, [r4, #61]
        275f70:	e5c4703c 	strb	r7, [r4, #60]
        275f74:	e5940024 	ldr	r0, [r4, #36]
        275f78:	e3300000 	teq	r0, #0	; 0x0
        275f7c:	0a000027 	beq	276020 <WordRecogClearStrokes+0x11c>
        275f80:	e3a05000 	mov	r5, #0	; 0x0
        275f84:	e5940020 	ldr	r0, [r4, #32]
        275f88:	e1a00840 	mov	r0, r0, asr #16
        275f8c:	e3500000 	cmp	r0, #0	; 0x0
        275f90:	da000022 	ble	276020 <WordRecogClearStrokes+0x11c>
        275f94:	e59f60b0 	ldr	r6, [pc, #b0]	; 27604c <WordRecogClearStrokes+0x148>
        275f98:	e5940038 	ldr	r0, [r4, #56]
        275f9c:	e1b00840 	movs	r0, r0, asr #16
        275fa0:	1a000008 	bne	275fc8 <WordRecogClearStrokes+0xc4>
        275fa4:	e5940024 	ldr	r0, [r4, #36]
        275fa8:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        275fac:	e3300000 	teq	r0, #0	; 0x0
        275fb0:	0a000014 	beq	276008 <WordRecogClearStrokes+0x104>
        275fb4:	e5d01026 	ldrb	r1, [r0, #38]
        275fb8:	e3310000 	teq	r1, #0	; 0x0
        275fbc:	05d00027 	ldreqb	r0, [r0, #39]
        275fc0:	03300000 	teqeq	r0, #0	; 0x0
        275fc4:	0a00000f 	beq	276008 <WordRecogClearStrokes+0x104>
        275fc8:	e5940024 	ldr	r0, [r4, #36]
        275fcc:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        275fd0:	eb63fa97 	bl	1b74a34 <$StrokeDestroy>
        275fd4:	e5940024 	ldr	r0, [r4, #36]
        275fd8:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        275fdc:	e5961014 	ldr	r1, [r6, #20]
        275fe0:	e1300001 	teq	r0, r1
        275fe4:	0586700c 	streq	r7, [r6, #12]
        275fe8:	05867014 	streq	r7, [r6, #20]
        275fec:	0a000003 	beq	276000 <WordRecogClearStrokes+0xfc>
        275ff0:	e5961010 	ldr	r1, [r6, #16]
        275ff4:	e1300001 	teq	r0, r1
        275ff8:	05867008 	streq	r7, [r6, #8]
        275ffc:	05867010 	streq	r7, [r6, #16]
        276000:	e5940024 	ldr	r0, [r4, #36]
        276004:	e7807105 	str	r7, [r0, r5, lsl #2]
        276008:	e2850001 	add	r0, r5, #1	; 0x1
        27600c:	e1a05800 	mov	r5, r0, lsl #16
        276010:	e1a05845 	mov	r5, r5, asr #16
        276014:	e5940020 	ldr	r0, [r4, #32]
        276018:	e1550840 	cmp	r5, r0, asr #16
        27601c:	baffffdd 	blt	275f98 <WordRecogClearStrokes+0x94>
        276020:	e5c47021 	strb	r7, [r4, #33]
        276024:	e5c47020 	strb	r7, [r4, #32]
        276028:	e5c47023 	strb	r7, [r4, #35]
        27602c:	e5c47022 	strb	r7, [r4, #34]
        276030:	e58471ac 	str	r7, [r4, #428]
        276034:	e5c4703b 	strb	r7, [r4, #59]
        276038:	e5c4703a 	strb	r7, [r4, #58]
        27603c:	e5b4001c 	ldr	r0, [r4, #28]!
        276040:	e3300000 	teq	r0, #0	; 0x0
        276044:	15c07000 	strneb	r7, [r0]
        276048:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        27604c:	0c104f84 	ldceq	15, cr4, [r0], -#528
    */
}

/**
 * Symbol: WordRecogSetContext
 * Address: 00276050
 */
void globals::WordRecogSetContext() {
    /*
        276050:	e1a0c00d 	mov	ip, sp
        276054:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        276058:	e24cb004 	sub	fp, ip, #4	; 0x4
        27605c:	e1a04000 	mov	r4, r0
        276060:	e1a05001 	mov	r5, r1
        276064:	e3a06000 	mov	r6, #0	; 0x0
        276068:	e5900198 	ldr	r0, [r0, #408]
        27606c:	e5900000 	ldr	r0, [r0]
        276070:	e3500000 	cmp	r0, #0	; 0x0
        276074:	da000013 	ble	2760c8 <WordRecogSetContext+0x78>
        276078:	e5940198 	ldr	r0, [r4, #408]
        27607c:	e5900004 	ldr	r0, [r0, #4]
        276080:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        276084:	e5900000 	ldr	r0, [r0]
        276088:	e1a01005 	mov	r1, r5
        27608c:	eb64fe85 	bl	1bb5aa8 <$strcmp>
        276090:	e3300000 	teq	r0, #0	; 0x0
        276094:	1a000006 	bne	2760b4 <WordRecogSetContext+0x64>
        276098:	e584619c 	str	r6, [r4, #412]
        27609c:	e5940198 	ldr	r0, [r4, #408]
        2760a0:	e5900004 	ldr	r0, [r0, #4]
        2760a4:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        2760a8:	e5a401a0 	str	r0, [r4, #416]!
        2760ac:	e3a00000 	mov	r0, #0	; 0x0
        2760b0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2760b4:	e2866001 	add	r6, r6, #1	; 0x1
        2760b8:	e5940198 	ldr	r0, [r4, #408]
        2760bc:	e5900000 	ldr	r0, [r0]
        2760c0:	e1500006 	cmp	r0, r6
        2760c4:	caffffeb 	bgt	276078 <WordRecogSetContext+0x28>
        2760c8:	e3a00001 	mov	r0, #1	; 0x1
        2760cc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogDetermineMaxHeight
 * Address: 002760d0
 */
void globals::WordRecogDetermineMaxHeight() {
    /*
        2760d0:	e92d4000 	stmdb	sp!, {lr}
        2760d4:	e5902020 	ldr	r2, [r0, #32]
        2760d8:	e1b02842 	movs	r2, r2, asr #16
        2760dc:	059000b8 	ldreq	r0, [r0, #184]
        2760e0:	08bd8000 	ldmeqia	sp!, {pc}
        2760e4:	e5b03024 	ldr	r3, [r0, #36]!
        2760e8:	e5930000 	ldr	r0, [r3]
        2760ec:	e5901018 	ldr	r1, [r0, #24]
        2760f0:	e5900010 	ldr	r0, [r0, #16]
        2760f4:	e0410000 	sub	r0, r1, r0
        2760f8:	e2800801 	add	r0, r0, #65536	; 0x10000
        2760fc:	e3a01001 	mov	r1, #1	; 0x1
        276100:	e3520001 	cmp	r2, #1	; 0x1
        276104:	d8bd8000 	ldmleia	sp!, {pc}
        276108:	e793c101 	ldr	ip, [r3, r1, lsl #2]
        27610c:	e59ce018 	ldr	lr, [ip, #24]
        276110:	e59cc010 	ldr	ip, [ip, #16]
        276114:	e04ec00c 	sub	ip, lr, ip
        276118:	e28cc801 	add	ip, ip, #65536	; 0x10000
        27611c:	e15c0000 	cmp	ip, r0
        276120:	a1a0000c 	movge	r0, ip
        276124:	e2811001 	add	r1, r1, #1	; 0x1
        276128:	e1520001 	cmp	r2, r1
        27612c:	cafffff5 	bgt	276108 <WordRecogDetermineMaxHeight+0x38>
        276130:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: WordRecogNetEvaluate
 * Address: 00276134
 */
void globals::WordRecogNetEvaluate() {
    /*
        276134:	e1a0c00d 	mov	ip, sp
        276138:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        27613c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        276140:	e24cb014 	sub	fp, ip, #20	; 0x14
        276144:	e1a05000 	mov	r5, r0
        276148:	e1a04001 	mov	r4, r1
        27614c:	e59b6034 	ldr	r6, [fp, #52]
        276150:	e59b7020 	ldr	r7, [fp, #32]
        276154:	e59b801c 	ldr	r8, [fp, #28]
        276158:	e59b9018 	ldr	r9, [fp, #24]
        27615c:	e59ba014 	ldr	sl, [fp, #20]
        276160:	e5900058 	ldr	r0, [r0, #88]
        276164:	e3300000 	teq	r0, #0	; 0x0
        276168:	1a000002 	bne	276178 <WordRecogNetEvaluate+0x44>
        27616c:	e1a00004 	mov	r0, r4
        276170:	eb63edc8 	bl	1b71898 <$NetPatternizerCreateFromBP>
        276174:	e5850058 	str	r0, [r5, #88]
        276178:	e595005c 	ldr	r0, [r5, #92]
        27617c:	e3300000 	teq	r0, #0	; 0x0
        276180:	1a000002 	bne	276190 <WordRecogNetEvaluate+0x5c>
        276184:	e5950058 	ldr	r0, [r5, #88]
        276188:	eb63e9a7 	bl	1b7082c <$NetPatternCreate>
        27618c:	e585005c 	str	r0, [r5, #92]
        276190:	e28b3024 	add	r3, fp, #36	; 0x24
        276194:	e893000f 	ldmia	r3, {r0, r1, r2, r3}
        276198:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        27619c:	e1a03007 	mov	r3, r7
        2761a0:	e1a02008 	mov	r2, r8
        2761a4:	e1a01009 	mov	r1, r9
        2761a8:	e1a0000a 	mov	r0, sl
        2761ac:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2761b0:	e5b5005c 	ldr	r0, [r5, #92]!
        2761b4:	e1a01004 	mov	r1, r4
        2761b8:	e28b300c 	add	r3, fp, #12	; 0xc
        2761bc:	e893000c 	ldmia	r3, {r2, r3}
        2761c0:	eb63fe3b 	bl	1b75ab4 <$WordRecogNetSetInputs>
        2761c4:	e28dd020 	add	sp, sp, #32	; 0x20
        2761c8:	e1a00004 	mov	r0, r4
        2761cc:	eb63e160 	bl	1b6e754 <$BPNetEvaluate>
        2761d0:	e3a05000 	mov	r5, #0	; 0x0
        2761d4:	e3a09001 	mov	r9, #1	; 0x1
        2761d8:	e3a08000 	mov	r8, #0	; 0x0
        2761dc:	e59f7060 	ldr	r7, [pc, #60]	; 276244 <WordRecogNetEvaluate+0x110>
        2761e0:	e5971000 	ldr	r1, [r7]
        2761e4:	e1a002a5 	mov	r0, r5, lsr #5
        2761e8:	e5912018 	ldr	r2, [r1, #24]
        2761ec:	e7920100 	ldr	r0, [r2, r0, lsl #2]
        2761f0:	e205201f 	and	r2, r5, #31	; 0x1f
        2761f4:	e1100219 	tst	r0, r9, lsl r2
        2761f8:	0a00001a 	beq	276268 <WordRecogNetEvaluate+0x134>
        2761fc:	e5910024 	ldr	r0, [r1, #36]
        276200:	e7d00005 	ldrb	r0, [r0, r5]
        276204:	e3300000 	teq	r0, #0	; 0x0
        276208:	05b10020 	ldreq	r0, [r1, #32]!
        27620c:	020510ff 	andeq	r1, r5, #255	; 0xff
        276210:	07d00001 	ldreqb	r0, [r0, r1]
        276214:	0a000006 	beq	276234 <WordRecogNetEvaluate+0x100>
        276218:	e5912020 	ldr	r2, [r1, #32]
        27621c:	e7d20000 	ldrb	r0, [r2, r0]
        276220:	e5911028 	ldr	r1, [r1, #40]
        276224:	e7d11005 	ldrb	r1, [r1, r5]
        276228:	e7d21001 	ldrb	r1, [r2, r1]
        27622c:	e1300001 	teq	r0, r1
        276230:	1a000004 	bne	276248 <WordRecogNetEvaluate+0x114>
        276234:	e5941040 	ldr	r1, [r4, #64]
        276238:	e7d10000 	ldrb	r0, [r1, r0]
        27623c:	e1a00400 	mov	r0, r0, lsl #8
        276240:	ea000006 	b	276260 <WordRecogNetEvaluate+0x12c>
        276244:	0c100b08 	ldceq	11, cr0, [r0], -#32
        276248:	e5942040 	ldr	r2, [r4, #64]
        27624c:	e7d21001 	ldrb	r1, [r2, r1]
        276250:	e1a01401 	mov	r1, r1, lsl #8
        276254:	e7d20000 	ldrb	r0, [r2, r0]
        276258:	e1a00400 	mov	r0, r0, lsl #8
        27625c:	eb65ab98 	bl	1be10c4 <$FixedMultiply>
        276260:	e7860105 	str	r0, [r6, r5, lsl #2]
        276264:	ea000000 	b	27626c <WordRecogNetEvaluate+0x138>
        276268:	e7868105 	str	r8, [r6, r5, lsl #2]
        27626c:	e2855001 	add	r5, r5, #1	; 0x1
        276270:	e3550c01 	cmp	r5, #256	; 0x100
        276274:	baffffd9 	blt	2761e0 <WordRecogNetEvaluate+0xac>
        276278:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogNetSetInputs
 * Address: 0027627c
 */
void globals::WordRecogNetSetInputs() {
    /*
        27627c:	e1a0c00d 	mov	ip, sp
        276280:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        276284:	e24cb004 	sub	fp, ip, #4	; 0x4
        276288:	e1a04000 	mov	r4, r0
        27628c:	e1a05001 	mov	r5, r1
        276290:	e1a0e002 	mov	lr, r2
        276294:	e1a0c003 	mov	ip, r3
        276298:	e28b3014 	add	r3, fp, #20	; 0x14
        27629c:	e893000f 	ldmia	r3, {r0, r1, r2, r3}
        2762a0:	e59b6010 	ldr	r6, [fp, #16]
        2762a4:	e59b700c 	ldr	r7, [fp, #12]
        2762a8:	e59b8008 	ldr	r8, [fp, #8]
        2762ac:	e59b9004 	ldr	r9, [fp, #4]
        2762b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2762b4:	e1a03006 	mov	r3, r6
        2762b8:	e1a02007 	mov	r2, r7
        2762bc:	e1a01008 	mov	r1, r8
        2762c0:	e1a00009 	mov	r0, r9
        2762c4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2762c8:	e1a0300c 	mov	r3, ip
        2762cc:	e1a02004 	mov	r2, r4
        2762d0:	e1a0100e 	mov	r1, lr
        2762d4:	e1a00005 	mov	r0, r5
        2762d8:	e594c000 	ldr	ip, [r4]
        2762dc:	e59cc000 	ldr	ip, [ip]
        2762e0:	e1a0e00f 	mov	lr, pc
        2762e4:	e59cf010 	ldr	pc, [ip, #16]
        2762e8:	e1a00004 	mov	r0, r4
        2762ec:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2762f0:	ea63e95d 	b	1b7086c <$NetPatternSetInput>
    */
}

/**
 * Symbol: WordRecogStrokeNeedsFragmenting
 * Address: 002762f4
 */
void globals::WordRecogStrokeNeedsFragmenting() {
    /*
        2762f4:	e1a0c00d 	mov	ip, sp
        2762f8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2762fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        276300:	e1a05000 	mov	r5, r0
        276304:	e1a04001 	mov	r4, r1
        276308:	e59f0058 	ldr	r0, [pc, #58]	; 276368 <WordRecogStrokeNeedsFragmenting+0x74>
        27630c:	e5b02004 	ldr	r2, [r0, #4]!
        276310:	e1a00005 	mov	r0, r5
        276314:	eb640210 	bl	1b76b5c <$WordRecogIsStrokeTooWide>
        276318:	e3a06000 	mov	r6, #0	; 0x0
        27631c:	e3300000 	teq	r0, #0	; 0x0
        276320:	0a00000e 	beq	276360 <WordRecogStrokeNeedsFragmenting+0x6c>
        276324:	e1a01004 	mov	r1, r4
        276328:	e1a00005 	mov	r0, r5
        27632c:	eb640209 	bl	1b76b58 <$WordRecogStrokeType>
        276330:	e3a07001 	mov	r7, #1	; 0x1
        276334:	e3300000 	teq	r0, #0	; 0x0
        276338:	0a00000b 	beq	27636c <WordRecogStrokeNeedsFragmenting+0x78>
        27633c:	e3300002 	teq	r0, #2	; 0x2
        276340:	0a000006 	beq	276360 <WordRecogStrokeNeedsFragmenting+0x6c>
        276344:	e3300001 	teq	r0, #1	; 0x1
        276348:	1a000007 	bne	27636c <WordRecogStrokeNeedsFragmenting+0x78>
        27634c:	e1a01004 	mov	r1, r4
        276350:	e1a00005 	mov	r0, r5
        276354:	eb6401fe 	bl	1b76b54 <$WordRecogStrokeIntersectsTwoVerticalStrokes>
        276358:	e3300000 	teq	r0, #0	; 0x0
        27635c:	1a000002 	bne	27636c <WordRecogStrokeNeedsFragmenting+0x78>
        276360:	e1a00006 	mov	r0, r6
        276364:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        276368:	0c104f84 	ldceq	15, cr4, [r0], -#528
        27636c:	e1a00007 	mov	r0, r7
        276370:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogStrokeIntersectsTwoVerticalStrokes
 * Address: 00276374
 */
void globals::WordRecogStrokeIntersectsTwoVerticalStrokes() {
    /*
        276374:	e1a0c00d 	mov	ip, sp
        276378:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27637c:	e24cb004 	sub	fp, ip, #4	; 0x4
        276380:	e1a04000 	mov	r4, r0
        276384:	e24dd008 	sub	sp, sp, #8	; 0x8
        276388:	e3a00000 	mov	r0, #0	; 0x0
        27638c:	e58d0004 	str	r0, [sp, #4]
        276390:	e5910014 	ldr	r0, [r1, #20]
        276394:	e591a00c 	ldr	sl, [r1, #12]
        276398:	e58d0000 	str	r0, [sp]
        27639c:	e5910010 	ldr	r0, [r1, #16]
        2763a0:	e5911018 	ldr	r1, [r1, #24]
        2763a4:	e0800001 	add	r0, r0, r1
        2763a8:	e1a070c0 	mov	r7, r0, asr #1
        2763ac:	e3a06000 	mov	r6, #0	; 0x0
        2763b0:	e59401ac 	ldr	r0, [r4, #428]
        2763b4:	e3500000 	cmp	r0, #0	; 0x0
        2763b8:	da00003d 	ble	2764b4 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x140>
        2763bc:	e5940024 	ldr	r0, [r4, #36]
        2763c0:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        2763c4:	e5900000 	ldr	r0, [r0]
        2763c8:	e1a00840 	mov	r0, r0, asr #16
        2763cc:	e3a01001 	mov	r1, #1	; 0x1
        2763d0:	e0811080 	add	r1, r1, r0, lsl #1
        2763d4:	e3a00003 	mov	r0, #3	; 0x3
        2763d8:	eb64f158 	bl	1bb2940 <$__rt_sdiv>
        2763dc:	e1a08000 	mov	r8, r0
        2763e0:	e3a09000 	mov	r9, #0	; 0x0
        2763e4:	ea000001 	b	2763f0 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x7c>
        2763e8:	e3390000 	teq	r9, #0	; 0x0
        2763ec:	1a000003 	bne	276400 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x8c>
        2763f0:	e5940024 	ldr	r0, [r4, #36]
        2763f4:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        2763f8:	e5b01008 	ldr	r1, [r0, #8]!
        2763fc:	ea000008 	b	276424 <WordRecogStrokeIntersectsTwoVerticalStrokes+0xb0>
        276400:	e1a00005 	mov	r0, r5
        276404:	eb63f98a 	bl	1b74a34 <$StrokeDestroy>
        276408:	e5940024 	ldr	r0, [r4, #36]
        27640c:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        276410:	e5901008 	ldr	r1, [r0, #8]
        276414:	e5900000 	ldr	r0, [r0]
        276418:	e1a00840 	mov	r0, r0, asr #16
        27641c:	e0810180 	add	r0, r1, r0, lsl #3
        276420:	e0401188 	sub	r1, r0, r8, lsl #3
        276424:	e1a00008 	mov	r0, r8
        276428:	eb63f980 	bl	1b74a30 <$StrokeCreate>
        27642c:	e1b05000 	movs	r5, r0
        276430:	0a000016 	beq	276490 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x11c>
        276434:	e1a01005 	mov	r1, r5
        276438:	e1a00004 	mov	r0, r4
        27643c:	eb6401c5 	bl	1b76b58 <$WordRecogStrokeType>
        276440:	e3300002 	teq	r0, #2	; 0x2
        276444:	1a000011 	bne	276490 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x11c>
        276448:	e5950014 	ldr	r0, [r5, #20]
        27644c:	e595100c 	ldr	r1, [r5, #12]
        276450:	e0810000 	add	r0, r1, r0
        276454:	e1a000c0 	mov	r0, r0, asr #1
        276458:	e5952010 	ldr	r2, [r5, #16]
        27645c:	e1570002 	cmp	r7, r2
        276460:	e5951018 	ldr	r1, [r5, #24]
        276464:	da000009 	ble	276490 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x11c>
        276468:	e1570001 	cmp	r7, r1
        27646c:	aa000007 	bge	276490 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x11c>
        276470:	e150000a 	cmp	r0, sl
        276474:	da000005 	ble	276490 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x11c>
        276478:	e59d1000 	ldr	r1, [sp]
        27647c:	e1500001 	cmp	r0, r1
        276480:	b59d0004 	ldrlt	r0, [sp, #4]
        276484:	b2800001 	addlt	r0, r0, #1	; 0x1
        276488:	b58d0004 	strlt	r0, [sp, #4]
        27648c:	ba000002 	blt	27649c <WordRecogStrokeIntersectsTwoVerticalStrokes+0x128>
        276490:	e2899001 	add	r9, r9, #1	; 0x1
        276494:	e3590002 	cmp	r9, #2	; 0x2
        276498:	baffffd2 	blt	2763e8 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x74>
        27649c:	e1a00005 	mov	r0, r5
        2764a0:	eb63f963 	bl	1b74a34 <$StrokeDestroy>
        2764a4:	e2866001 	add	r6, r6, #1	; 0x1
        2764a8:	e59401ac 	ldr	r0, [r4, #428]
        2764ac:	e1500006 	cmp	r0, r6
        2764b0:	caffffc1 	bgt	2763bc <WordRecogStrokeIntersectsTwoVerticalStrokes+0x48>
        2764b4:	e59401a8 	ldr	r0, [r4, #424]
        2764b8:	e3300000 	teq	r0, #0	; 0x0
        2764bc:	0a000035 	beq	276598 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x224>
        2764c0:	e5900000 	ldr	r0, [r0]
        2764c4:	e1a00840 	mov	r0, r0, asr #16
        2764c8:	e3a01001 	mov	r1, #1	; 0x1
        2764cc:	e0811080 	add	r1, r1, r0, lsl #1
        2764d0:	e3a00003 	mov	r0, #3	; 0x3
        2764d4:	eb64f119 	bl	1bb2940 <$__rt_sdiv>
        2764d8:	e1a08000 	mov	r8, r0
        2764dc:	e3a06000 	mov	r6, #0	; 0x0
        2764e0:	ea000001 	b	2764ec <WordRecogStrokeIntersectsTwoVerticalStrokes+0x178>
        2764e4:	e3360000 	teq	r6, #0	; 0x0
        2764e8:	1a000002 	bne	2764f8 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x184>
        2764ec:	e59401a8 	ldr	r0, [r4, #424]
        2764f0:	e5b01008 	ldr	r1, [r0, #8]!
        2764f4:	ea000007 	b	276518 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x1a4>
        2764f8:	e1a00005 	mov	r0, r5
        2764fc:	eb63f94c 	bl	1b74a34 <$StrokeDestroy>
        276500:	e59401a8 	ldr	r0, [r4, #424]
        276504:	e5901008 	ldr	r1, [r0, #8]
        276508:	e5900000 	ldr	r0, [r0]
        27650c:	e1a00840 	mov	r0, r0, asr #16
        276510:	e0810180 	add	r0, r1, r0, lsl #3
        276514:	e0401188 	sub	r1, r0, r8, lsl #3
        276518:	e1a00008 	mov	r0, r8
        27651c:	eb63f943 	bl	1b74a30 <$StrokeCreate>
        276520:	e1b05000 	movs	r5, r0
        276524:	0a000016 	beq	276584 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x210>
        276528:	e1a01005 	mov	r1, r5
        27652c:	e1a00004 	mov	r0, r4
        276530:	eb640188 	bl	1b76b58 <$WordRecogStrokeType>
        276534:	e3300002 	teq	r0, #2	; 0x2
        276538:	1a000011 	bne	276584 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x210>
        27653c:	e595000c 	ldr	r0, [r5, #12]
        276540:	e5951014 	ldr	r1, [r5, #20]
        276544:	e0800001 	add	r0, r0, r1
        276548:	e1a000c0 	mov	r0, r0, asr #1
        27654c:	e5952010 	ldr	r2, [r5, #16]
        276550:	e1570002 	cmp	r7, r2
        276554:	e5951018 	ldr	r1, [r5, #24]
        276558:	da000009 	ble	276584 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x210>
        27655c:	e1570001 	cmp	r7, r1
        276560:	aa000007 	bge	276584 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x210>
        276564:	e150000a 	cmp	r0, sl
        276568:	da000005 	ble	276584 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x210>
        27656c:	e59d1000 	ldr	r1, [sp]
        276570:	e1500001 	cmp	r0, r1
        276574:	b59d0004 	ldrlt	r0, [sp, #4]
        276578:	b2800001 	addlt	r0, r0, #1	; 0x1
        27657c:	b58d0004 	strlt	r0, [sp, #4]
        276580:	ba000002 	blt	276590 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x21c>
        276584:	e2866001 	add	r6, r6, #1	; 0x1
        276588:	e3560002 	cmp	r6, #2	; 0x2
        27658c:	baffffd4 	blt	2764e4 <WordRecogStrokeIntersectsTwoVerticalStrokes+0x170>
        276590:	e1a00005 	mov	r0, r5
        276594:	eb63f926 	bl	1b74a34 <$StrokeDestroy>
        276598:	e59d0004 	ldr	r0, [sp, #4]
        27659c:	e3500001 	cmp	r0, #1	; 0x1
        2765a0:	d3a00000 	movle	r0, #0	; 0x0
        2765a4:	c3a00001 	movgt	r0, #1	; 0x1
        2765a8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogStrokeType
 * Address: 002765ac
 */
void globals::WordRecogStrokeType() {
    /*
        2765ac:	e1a0c00d 	mov	ip, sp
        2765b0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2765b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2765b8:	e1a04000 	mov	r4, r0
        2765bc:	e5910014 	ldr	r0, [r1, #20]
        2765c0:	e591200c 	ldr	r2, [r1, #12]
        2765c4:	e0406002 	sub	r6, r0, r2
        2765c8:	e5910018 	ldr	r0, [r1, #24]
        2765cc:	e5911010 	ldr	r1, [r1, #16]
        2765d0:	e0405001 	sub	r5, r0, r1
        2765d4:	e1560005 	cmp	r6, r5
        2765d8:	a1a07006 	movge	r7, r6
        2765dc:	b1a07005 	movlt	r7, r5
        2765e0:	eb63f4fb 	bl	1b739d4 <$SegmentMinStrokeSize>
        2765e4:	e3a01000 	mov	r1, #0	; 0x0
        2765e8:	e1500007 	cmp	r0, r7
        2765ec:	ca000007 	bgt	276610 <WordRecogStrokeType+0x64>
        2765f0:	e1560145 	cmp	r6, r5, asr #2
        2765f4:	b3a00002 	movlt	r0, #2	; 0x2
        2765f8:	b91ba8f0 	ldmltdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2765fc:	e1550146 	cmp	r5, r6, asr #2
        276600:	b5b40120 	ldrlt	r0, [r4, #288]!
        276604:	b1550140 	cmplt	r5, r0, asr #2
        276608:	b3a00001 	movlt	r0, #1	; 0x1
        27660c:	b91ba8f0 	ldmltdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        276610:	e1a00001 	mov	r0, r1
        276614:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogIsStrokeTooWide
 * Address: 00276618
 */
void globals::WordRecogIsStrokeTooWide() {
    /*
        276618:	e1a0c00d 	mov	ip, sp
        27661c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        276620:	e24cb004 	sub	fp, ip, #4	; 0x4
        276624:	e1a04000 	mov	r4, r0
        276628:	e1a05001 	mov	r5, r1
        27662c:	e1a06002 	mov	r6, r2
        276630:	e24dd018 	sub	sp, sp, #24	; 0x18
        276634:	eb640144 	bl	1b76b4c <$WordRecogDetermineMaxHeight>
        276638:	e5941068 	ldr	r1, [r4, #104]
        27663c:	e0811081 	add	r1, r1, r1, lsl #1
        276640:	e0810000 	add	r0, r1, r0
        276644:	e1a00140 	mov	r0, r0, asr #2
        276648:	e59410b8 	ldr	r1, [r4, #184]
        27664c:	e1510000 	cmp	r1, r0
        276650:	aa000001 	bge	27665c <WordRecogIsStrokeTooWide+0x44>
        276654:	eb65aa99 	bl	1be10c0 <$FixedDivide>
        276658:	ea000000 	b	276660 <WordRecogIsStrokeTooWide+0x48>
        27665c:	e3a00801 	mov	r0, #65536	; 0x10000
        276660:	e5b410c4 	ldr	r1, [r4, #196]!
        276664:	eb65aa96 	bl	1be10c4 <$FixedMultiply>
        276668:	e1a01000 	mov	r1, r0
        27666c:	e1a00006 	mov	r0, r6
        276670:	eb65aa93 	bl	1be10c4 <$FixedMultiply>
        276674:	e1a04000 	mov	r4, r0
        276678:	e28d1008 	add	r1, sp, #8	; 0x8
        27667c:	e1a00005 	mov	r0, r5
        276680:	eb63f8ee 	bl	1b74a40 <$StrokeFindBounds>
        276684:	e28d1008 	add	r1, sp, #8	; 0x8
        276688:	e1a0000d 	mov	r0, sp
        27668c:	eb63e44f 	bl	1b6f7d0 <$FixedRectSize>
        276690:	e59d0000 	ldr	r0, [sp]
        276694:	e2800801 	add	r0, r0, #65536	; 0x10000
        276698:	e1500004 	cmp	r0, r4
        27669c:	ba000005 	blt	2766b8 <WordRecogIsStrokeTooWide+0xa0>
        2766a0:	e5d50026 	ldrb	r0, [r5, #38]
        2766a4:	e3300000 	teq	r0, #0	; 0x0
        2766a8:	05d50027 	ldreqb	r0, [r5, #39]
        2766ac:	03300000 	teqeq	r0, #0	; 0x0
        2766b0:	03a00001 	moveq	r0, #1	; 0x1
        2766b4:	0a000000 	beq	2766bc <WordRecogIsStrokeTooWide+0xa4>
        2766b8:	e3a00000 	mov	r0, #0	; 0x0
        2766bc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: WordRecogAnalyzeWord
 * Address: 002766c0
 */
void globals::WordRecogAnalyzeWord() {
    /*
        2766c0:	e1a0c00d 	mov	ip, sp
        2766c4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2766c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2766cc:	e1a04000 	mov	r4, r0
        2766d0:	e24dd018 	sub	sp, sp, #24	; 0x18
        2766d4:	e2808048 	add	r8, r0, #72	; 0x48
        2766d8:	e8980180 	ldmia	r8, {r7, r8}
        2766dc:	e590c054 	ldr	ip, [r0, #84]
        2766e0:	e5900020 	ldr	r0, [r0, #32]
        2766e4:	e1b00840 	movs	r0, r0, asr #16
        2766e8:	1a000000 	bne	2766f0 <WordRecogAnalyzeWord+0x30>
        2766ec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2766f0:	e1a0300d 	mov	r3, sp
        2766f4:	e28d2004 	add	r2, sp, #4	; 0x4
        2766f8:	e28d1008 	add	r1, sp, #8	; 0x8
        2766fc:	e28d000c 	add	r0, sp, #12	; 0xc
        276700:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        276704:	e28d3020 	add	r3, sp, #32	; 0x20
        276708:	e28d2024 	add	r2, sp, #36	; 0x24
        27670c:	e59cc074 	ldr	ip, [ip, #116]
        276710:	e59c0050 	ldr	r0, [ip, #80]
        276714:	e1a01800 	mov	r1, r0, lsl #16
        276718:	e1a01841 	mov	r1, r1, asr #16
        27671c:	e59c004c 	ldr	r0, [ip, #76]
        276720:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        276724:	e5bc3048 	ldr	r3, [ip, #72]!
        276728:	e92d0008 	stmdb	sp!, {r3}
        27672c:	eb63f4a8 	bl	1b739d4 <$SegmentMinStrokeSize>
        276730:	e1a02000 	mov	r2, r0
        276734:	e5943060 	ldr	r3, [r4, #96]
        276738:	e594103c 	ldr	r1, [r4, #60]
        27673c:	e1a01841 	mov	r1, r1, asr #16
        276740:	e5940040 	ldr	r0, [r4, #64]
        276744:	eb63e419 	bl	1b6f7b0 <$CharGetAvgBoxBHW>
        276748:	e28dd024 	add	sp, sp, #36	; 0x24
        27674c:	e59d0010 	ldr	r0, [sp, #16]
        276750:	e3a05a0e 	mov	r5, #57344	; 0xe000
        276754:	e584006c 	str	r0, [r4, #108]
        276758:	e3a00802 	mov	r0, #131072	; 0x20000
        27675c:	e59410b8 	ldr	r1, [r4, #184]
        276760:	eb65aa57 	bl	1be10c4 <$FixedMultiply>
        276764:	e3a06a02 	mov	r6, #8192	; 0x2000
        276768:	e59d1010 	ldr	r1, [sp, #16]
        27676c:	e1500001 	cmp	r0, r1
        276770:	da00000e 	ble	2767b0 <WordRecogAnalyzeWord+0xf0>
        276774:	e3a00902 	mov	r0, #32768	; 0x8000
        276778:	e59410b8 	ldr	r1, [r4, #184]
        27677c:	eb65aa50 	bl	1be10c4 <$FixedMultiply>
        276780:	e59d1010 	ldr	r1, [sp, #16]
        276784:	e1500001 	cmp	r0, r1
        276788:	aa000008 	bge	2767b0 <WordRecogAnalyzeWord+0xf0>
        27678c:	e1a00005 	mov	r0, r5
        276790:	e59410b8 	ldr	r1, [r4, #184]
        276794:	eb65aa4a 	bl	1be10c4 <$FixedMultiply>
        276798:	e1a09000 	mov	r9, r0
        27679c:	e1a00006 	mov	r0, r6
        2767a0:	e59d1010 	ldr	r1, [sp, #16]
        2767a4:	eb65aa46 	bl	1be10c4 <$FixedMultiply>
        2767a8:	e0890000 	add	r0, r9, r0
        2767ac:	e58400b8 	str	r0, [r4, #184]
        2767b0:	e3a00802 	mov	r0, #131072	; 0x20000
        2767b4:	e59410bc 	ldr	r1, [r4, #188]
        2767b8:	eb65aa41 	bl	1be10c4 <$FixedMultiply>
        2767bc:	e59d1004 	ldr	r1, [sp, #4]
        2767c0:	e1500001 	cmp	r0, r1
        2767c4:	da00000e 	ble	276804 <WordRecogAnalyzeWord+0x144>
        2767c8:	e3a00902 	mov	r0, #32768	; 0x8000
        2767cc:	e59410bc 	ldr	r1, [r4, #188]
        2767d0:	eb65aa3b 	bl	1be10c4 <$FixedMultiply>
        2767d4:	e59d1004 	ldr	r1, [sp, #4]
        2767d8:	e1500001 	cmp	r0, r1
        2767dc:	aa000008 	bge	276804 <WordRecogAnalyzeWord+0x144>
        2767e0:	e1a00005 	mov	r0, r5
        2767e4:	e59410bc 	ldr	r1, [r4, #188]
        2767e8:	eb65aa35 	bl	1be10c4 <$FixedMultiply>
        2767ec:	e1a09000 	mov	r9, r0
        2767f0:	e1a00006 	mov	r0, r6
        2767f4:	e59d1004 	ldr	r1, [sp, #4]
        2767f8:	eb65aa31 	bl	1be10c4 <$FixedMultiply>
        2767fc:	e0890000 	add	r0, r9, r0
        276800:	e58400bc 	str	r0, [r4, #188]
        276804:	e3a00802 	mov	r0, #131072	; 0x20000
        276808:	e59410c4 	ldr	r1, [r4, #196]
        27680c:	eb65aa2c 	bl	1be10c4 <$FixedMultiply>
        276810:	e59d100c 	ldr	r1, [sp, #12]
        276814:	e1500001 	cmp	r0, r1
        276818:	da00000e 	ble	276858 <WordRecogAnalyzeWord+0x198>
        27681c:	e3a00902 	mov	r0, #32768	; 0x8000
        276820:	e59410c4 	ldr	r1, [r4, #196]
        276824:	eb65aa26 	bl	1be10c4 <$FixedMultiply>
        276828:	e59d100c 	ldr	r1, [sp, #12]
        27682c:	e1500001 	cmp	r0, r1
        276830:	aa000008 	bge	276858 <WordRecogAnalyzeWord+0x198>
        276834:	e1a00005 	mov	r0, r5
        276838:	e59410c4 	ldr	r1, [r4, #196]
        27683c:	eb65aa20 	bl	1be10c4 <$FixedMultiply>
        276840:	e1a05000 	mov	r5, r0
        276844:	e1a00006 	mov	r0, r6
        276848:	e59d100c 	ldr	r1, [sp, #12]
        27684c:	eb65aa1c 	bl	1be10c4 <$FixedMultiply>
        276850:	e0850000 	add	r0, r5, r0
        276854:	e58400c4 	str	r0, [r4, #196]
        276858:	e59f608c 	ldr	r6, [pc, #8c]	; 2768ec <WordRecogAnalyzeWord+0x22c>
        27685c:	e1a01006 	mov	r1, r6
        276860:	e3a09f71 	mov	r9, #452	; 0x1c4
        276864:	e2899a15 	add	r9, r9, #86016	; 0x15000
        276868:	e1a00009 	mov	r0, r9
        27686c:	eb65aa13 	bl	1be10c0 <$FixedDivide>
        276870:	e1a01000 	mov	r1, r0
        276874:	e59fa074 	ldr	sl, [pc, #74]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        276878:	e1a0000a 	mov	r0, sl
        27687c:	eb65aa10 	bl	1be10c4 <$FixedMultiply>
        276880:	e1a01000 	mov	r1, r0
        276884:	e3a00902 	mov	r0, #32768	; 0x8000
        276888:	eb65aa0d 	bl	1be10c4 <$FixedMultiply>
        27688c:	e1a05000 	mov	r5, r0
        276890:	e59f1054 	ldr	r1, [pc, #54]	; 2768ec <WordRecogAnalyzeWord+0x22c>
        276894:	e3a00f71 	mov	r0, #452	; 0x1c4
        276898:	e2800a15 	add	r0, r0, #86016	; 0x15000
        27689c:	eb65aa07 	bl	1be10c0 <$FixedDivide>
        2768a0:	e1a01000 	mov	r1, r0
        2768a4:	e59f0044 	ldr	r0, [pc, #44]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        2768a8:	eb65aa05 	bl	1be10c4 <$FixedMultiply>
        2768ac:	e1a01000 	mov	r1, r0
        2768b0:	e3a00802 	mov	r0, #131072	; 0x20000
        2768b4:	eb65aa02 	bl	1be10c4 <$FixedMultiply>
        2768b8:	e59410b8 	ldr	r1, [r4, #184]
        2768bc:	e1500001 	cmp	r0, r1
        2768c0:	aa00000b 	bge	2768f4 <WordRecogAnalyzeWord+0x234>
        2768c4:	e1a01006 	mov	r1, r6
        2768c8:	e1a00009 	mov	r0, r9
        2768cc:	eb65a9fb 	bl	1be10c0 <$FixedDivide>
        2768d0:	e1a01000 	mov	r1, r0
        2768d4:	e1a0000a 	mov	r0, sl
        2768d8:	eb65a9f9 	bl	1be10c4 <$FixedMultiply>
        2768dc:	e1a01000 	mov	r1, r0
        2768e0:	e3a00802 	mov	r0, #131072	; 0x20000
        2768e4:	eb65a9f6 	bl	1be10c4 <$FixedMultiply>
        2768e8:	ea000002 	b	2768f8 <WordRecogAnalyzeWord+0x238>
        2768ec:	000117d5 	ldreqd	r1, [r1], -r5
        2768f0:	0012d999 	muleqs	r2, r9, r9
        2768f4:	e1a00001 	mov	r0, r1
        2768f8:	e1550000 	cmp	r5, r0
        2768fc:	e1a01006 	mov	r1, r6
        276900:	e1a00009 	mov	r0, r9
        276904:	aa000013 	bge	276958 <WordRecogAnalyzeWord+0x298>
        276908:	eb65a9ec 	bl	1be10c0 <$FixedDivide>
        27690c:	e1a01000 	mov	r1, r0
        276910:	e1a0000a 	mov	r0, sl
        276914:	eb65a9ea 	bl	1be10c4 <$FixedMultiply>
        276918:	e1a01000 	mov	r1, r0
        27691c:	e3a00802 	mov	r0, #131072	; 0x20000
        276920:	eb65a9e7 	bl	1be10c4 <$FixedMultiply>
        276924:	e59410b8 	ldr	r1, [r4, #184]
        276928:	e1500001 	cmp	r0, r1
        27692c:	a1a00001 	movge	r0, r1
        276930:	aa00000f 	bge	276974 <WordRecogAnalyzeWord+0x2b4>
        276934:	e1a01006 	mov	r1, r6
        276938:	e1a00009 	mov	r0, r9
        27693c:	eb65a9df 	bl	1be10c0 <$FixedDivide>
        276940:	e1a01000 	mov	r1, r0
        276944:	e1a0000a 	mov	r0, sl
        276948:	eb65a9dd 	bl	1be10c4 <$FixedMultiply>
        27694c:	e1a01000 	mov	r1, r0
        276950:	e3a00802 	mov	r0, #131072	; 0x20000
        276954:	ea000005 	b	276970 <WordRecogAnalyzeWord+0x2b0>
        276958:	eb65a9d8 	bl	1be10c0 <$FixedDivide>
        27695c:	e1a01000 	mov	r1, r0
        276960:	e1a0000a 	mov	r0, sl
        276964:	eb65a9d6 	bl	1be10c4 <$FixedMultiply>
        276968:	e1a01000 	mov	r1, r0
        27696c:	e3a00902 	mov	r0, #32768	; 0x8000
        276970:	eb65a9d3 	bl	1be10c4 <$FixedMultiply>
        276974:	e3a050df 	mov	r5, #223	; 0xdf
        276978:	e2855c6e 	add	r5, r5, #28160	; 0x6e00
        27697c:	e1a01005 	mov	r1, r5
        276980:	e58400b8 	str	r0, [r4, #184]
        276984:	e1a00009 	mov	r0, r9
        276988:	eb65a9cc 	bl	1be10c0 <$FixedDivide>
        27698c:	e1a01000 	mov	r1, r0
        276990:	e51f00a8 	ldr	r0, [pc, #ffffff58]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        276994:	eb65a9ca 	bl	1be10c4 <$FixedMultiply>
        276998:	e1a01000 	mov	r1, r0
        27699c:	e3a00902 	mov	r0, #32768	; 0x8000
        2769a0:	eb65a9c7 	bl	1be10c4 <$FixedMultiply>
        2769a4:	e1a0a000 	mov	sl, r0
        2769a8:	e3a010df 	mov	r1, #223	; 0xdf
        2769ac:	e2811c6e 	add	r1, r1, #28160	; 0x6e00
        2769b0:	e3a00f71 	mov	r0, #452	; 0x1c4
        2769b4:	e2800a15 	add	r0, r0, #86016	; 0x15000
        2769b8:	eb65a9c0 	bl	1be10c0 <$FixedDivide>
        2769bc:	e1a01000 	mov	r1, r0
        2769c0:	e51f00d8 	ldr	r0, [pc, #ffffff28]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        2769c4:	eb65a9be 	bl	1be10c4 <$FixedMultiply>
        2769c8:	e1a01000 	mov	r1, r0
        2769cc:	e3a00802 	mov	r0, #131072	; 0x20000
        2769d0:	eb65a9bb 	bl	1be10c4 <$FixedMultiply>
        2769d4:	e59410bc 	ldr	r1, [r4, #188]
        2769d8:	e1500001 	cmp	r0, r1
        2769dc:	aa000009 	bge	276a08 <WordRecogAnalyzeWord+0x348>
        2769e0:	e1a01005 	mov	r1, r5
        2769e4:	e1a00009 	mov	r0, r9
        2769e8:	eb65a9b4 	bl	1be10c0 <$FixedDivide>
        2769ec:	e1a01000 	mov	r1, r0
        2769f0:	e51f0108 	ldr	r0, [pc, #fffffef8]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        2769f4:	eb65a9b2 	bl	1be10c4 <$FixedMultiply>
        2769f8:	e1a01000 	mov	r1, r0
        2769fc:	e3a00802 	mov	r0, #131072	; 0x20000
        276a00:	eb65a9af 	bl	1be10c4 <$FixedMultiply>
        276a04:	ea000000 	b	276a0c <WordRecogAnalyzeWord+0x34c>
        276a08:	e1a00001 	mov	r0, r1
        276a0c:	e15a0000 	cmp	sl, r0
        276a10:	e1a01005 	mov	r1, r5
        276a14:	e1a00009 	mov	r0, r9
        276a18:	aa000014 	bge	276a70 <WordRecogAnalyzeWord+0x3b0>
        276a1c:	eb65a9a7 	bl	1be10c0 <$FixedDivide>
        276a20:	e1a01000 	mov	r1, r0
        276a24:	e51fa13c 	ldr	sl, [pc, #fffffec4]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        276a28:	e1a0000a 	mov	r0, sl
        276a2c:	eb65a9a4 	bl	1be10c4 <$FixedMultiply>
        276a30:	e1a01000 	mov	r1, r0
        276a34:	e3a00802 	mov	r0, #131072	; 0x20000
        276a38:	eb65a9a1 	bl	1be10c4 <$FixedMultiply>
        276a3c:	e59410bc 	ldr	r1, [r4, #188]
        276a40:	e1500001 	cmp	r0, r1
        276a44:	a1a00001 	movge	r0, r1
        276a48:	aa00000f 	bge	276a8c <WordRecogAnalyzeWord+0x3cc>
        276a4c:	e1a01005 	mov	r1, r5
        276a50:	e1a00009 	mov	r0, r9
        276a54:	eb65a999 	bl	1be10c0 <$FixedDivide>
        276a58:	e1a01000 	mov	r1, r0
        276a5c:	e1a0000a 	mov	r0, sl
        276a60:	eb65a997 	bl	1be10c4 <$FixedMultiply>
        276a64:	e1a01000 	mov	r1, r0
        276a68:	e3a00802 	mov	r0, #131072	; 0x20000
        276a6c:	ea000005 	b	276a88 <WordRecogAnalyzeWord+0x3c8>
        276a70:	eb65a992 	bl	1be10c0 <$FixedDivide>
        276a74:	e1a01000 	mov	r1, r0
        276a78:	e51f0190 	ldr	r0, [pc, #fffffe70]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        276a7c:	eb65a990 	bl	1be10c4 <$FixedMultiply>
        276a80:	e1a01000 	mov	r1, r0
        276a84:	e3a00902 	mov	r0, #32768	; 0x8000
        276a88:	eb65a98d 	bl	1be10c4 <$FixedMultiply>
        276a8c:	e3a0a008 	mov	sl, #8	; 0x8
        276a90:	e28aab47 	add	sl, sl, #72704	; 0x11c00
        276a94:	e1a0100a 	mov	r1, sl
        276a98:	e58400bc 	str	r0, [r4, #188]
        276a9c:	e3a00f71 	mov	r0, #452	; 0x1c4
        276aa0:	e2800a15 	add	r0, r0, #86016	; 0x15000
        276aa4:	eb65a985 	bl	1be10c0 <$FixedDivide>
        276aa8:	e1a01000 	mov	r1, r0
        276aac:	e51f01c4 	ldr	r0, [pc, #fffffe3c]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        276ab0:	eb65a983 	bl	1be10c4 <$FixedMultiply>
        276ab4:	e1a01000 	mov	r1, r0
        276ab8:	e3a00902 	mov	r0, #32768	; 0x8000
        276abc:	eb65a980 	bl	1be10c4 <$FixedMultiply>
        276ac0:	e1a09000 	mov	r9, r0
        276ac4:	e3a01008 	mov	r1, #8	; 0x8
        276ac8:	e2811b47 	add	r1, r1, #72704	; 0x11c00
        276acc:	e3a00f71 	mov	r0, #452	; 0x1c4
        276ad0:	e2800a15 	add	r0, r0, #86016	; 0x15000
        276ad4:	eb65a979 	bl	1be10c0 <$FixedDivide>
        276ad8:	e1a01000 	mov	r1, r0
        276adc:	e51f01f4 	ldr	r0, [pc, #fffffe0c]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        276ae0:	eb65a977 	bl	1be10c4 <$FixedMultiply>
        276ae4:	e1a01000 	mov	r1, r0
        276ae8:	e3a00802 	mov	r0, #131072	; 0x20000
        276aec:	eb65a974 	bl	1be10c4 <$FixedMultiply>
        276af0:	e59410c4 	ldr	r1, [r4, #196]
        276af4:	e1500001 	cmp	r0, r1
        276af8:	aa00000a 	bge	276b28 <WordRecogAnalyzeWord+0x468>
        276afc:	e1a0100a 	mov	r1, sl
        276b00:	e3a00f71 	mov	r0, #452	; 0x1c4
        276b04:	e2800a15 	add	r0, r0, #86016	; 0x15000
        276b08:	eb65a96c 	bl	1be10c0 <$FixedDivide>
        276b0c:	e1a01000 	mov	r1, r0
        276b10:	e51f0228 	ldr	r0, [pc, #fffffdd8]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        276b14:	eb65a96a 	bl	1be10c4 <$FixedMultiply>
        276b18:	e1a01000 	mov	r1, r0
        276b1c:	e3a00802 	mov	r0, #131072	; 0x20000
        276b20:	eb65a967 	bl	1be10c4 <$FixedMultiply>
        276b24:	ea000000 	b	276b2c <WordRecogAnalyzeWord+0x46c>
        276b28:	e1a00001 	mov	r0, r1
        276b2c:	e1590000 	cmp	r9, r0
        276b30:	e1a0100a 	mov	r1, sl
        276b34:	aa000016 	bge	276b94 <WordRecogAnalyzeWord+0x4d4>
        276b38:	e3a09f71 	mov	r9, #452	; 0x1c4
        276b3c:	e2899a15 	add	r9, r9, #86016	; 0x15000
        276b40:	e1a00009 	mov	r0, r9
        276b44:	eb65a95d 	bl	1be10c0 <$FixedDivide>
        276b48:	e1a01000 	mov	r1, r0
        276b4c:	e51f0264 	ldr	r0, [pc, #fffffd9c]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        276b50:	eb65a95b 	bl	1be10c4 <$FixedMultiply>
        276b54:	e1a01000 	mov	r1, r0
        276b58:	e3a00802 	mov	r0, #131072	; 0x20000
        276b5c:	eb65a958 	bl	1be10c4 <$FixedMultiply>
        276b60:	e59410c4 	ldr	r1, [r4, #196]
        276b64:	e1500001 	cmp	r0, r1
        276b68:	a1a00001 	movge	r0, r1
        276b6c:	aa000011 	bge	276bb8 <WordRecogAnalyzeWord+0x4f8>
        276b70:	e1a0100a 	mov	r1, sl
        276b74:	e1a00009 	mov	r0, r9
        276b78:	eb65a950 	bl	1be10c0 <$FixedDivide>
        276b7c:	e1a01000 	mov	r1, r0
        276b80:	e51f0298 	ldr	r0, [pc, #fffffd68]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        276b84:	eb65a94e 	bl	1be10c4 <$FixedMultiply>
        276b88:	e1a01000 	mov	r1, r0
        276b8c:	e3a00802 	mov	r0, #131072	; 0x20000
        276b90:	ea000007 	b	276bb4 <WordRecogAnalyzeWord+0x4f4>
        276b94:	e3a00f71 	mov	r0, #452	; 0x1c4
        276b98:	e2800a15 	add	r0, r0, #86016	; 0x15000
        276b9c:	eb65a947 	bl	1be10c0 <$FixedDivide>
        276ba0:	e1a01000 	mov	r1, r0
        276ba4:	e51f02bc 	ldr	r0, [pc, #fffffd44]	; 2768f0 <WordRecogAnalyzeWord+0x230>
        276ba8:	eb65a945 	bl	1be10c4 <$FixedMultiply>
        276bac:	e1a01000 	mov	r1, r0
        276bb0:	e3a00902 	mov	r0, #32768	; 0x8000
        276bb4:	eb65a942 	bl	1be10c4 <$FixedMultiply>
        276bb8:	e58400c4 	str	r0, [r4, #196]
        276bbc:	e3a0106e 	mov	r1, #110	; 0x6e
        276bc0:	e2811cd3 	add	r1, r1, #54016	; 0xd300
        276bc4:	e59400c0 	ldr	r0, [r4, #192]
        276bc8:	eb65a93d 	bl	1be10c4 <$FixedMultiply>
        276bcc:	e1a09000 	mov	r9, r0
        276bd0:	e3a01f71 	mov	r1, #452	; 0x1c4
        276bd4:	e2811a15 	add	r1, r1, #86016	; 0x15000
        276bd8:	e5940070 	ldr	r0, [r4, #112]
        276bdc:	eb65a938 	bl	1be10c4 <$FixedMultiply>
        276be0:	e0899000 	add	r9, r9, r0
        276be4:	e1a01006 	mov	r1, r6
        276be8:	e59400b8 	ldr	r0, [r4, #184]
        276bec:	eb65a934 	bl	1be10c4 <$FixedMultiply>
        276bf0:	e0896000 	add	r6, r9, r0
        276bf4:	e1a01005 	mov	r1, r5
        276bf8:	e59400bc 	ldr	r0, [r4, #188]
        276bfc:	eb65a930 	bl	1be10c4 <$FixedMultiply>
        276c00:	e0865000 	add	r5, r6, r0
        276c04:	e1a0100a 	mov	r1, sl
        276c08:	e59400c4 	ldr	r0, [r4, #196]
        276c0c:	eb65a92c 	bl	1be10c4 <$FixedMultiply>
        276c10:	e0855000 	add	r5, r5, r0
        276c14:	e3a01033 	mov	r1, #51	; 0x33
        276c18:	e2811c33 	add	r1, r1, #13056	; 0x3300
        276c1c:	e3a000b9 	mov	r0, #185	; 0xb9
        276c20:	e2800b3f 	add	r0, r0, #64512	; 0xfc00
        276c24:	eb65a926 	bl	1be10c4 <$FixedMultiply>
        276c28:	e1a01005 	mov	r1, r5
        276c2c:	eb65a924 	bl	1be10c4 <$FixedMultiply>
        276c30:	e5840120 	str	r0, [r4, #288]
        276c34:	e59401a0 	ldr	r0, [r4, #416]
        276c38:	eb63f350 	bl	1b73980 <$SearchBeginWord>
        276c3c:	e59d0014 	ldr	r0, [sp, #20]
        276c40:	e3a05000 	mov	r5, #0	; 0x0
        276c44:	e5840064 	str	r0, [r4, #100]
        276c48:	e594003c 	ldr	r0, [r4, #60]
        276c4c:	e1a00840 	mov	r0, r0, asr #16
        276c50:	e3500000 	cmp	r0, #0	; 0x0
        276c54:	da00006e 	ble	276e14 <WordRecogAnalyzeWord+0x754>
        276c58:	e5940040 	ldr	r0, [r4, #64]
        276c5c:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        276c60:	e5901002 	ldr	r1, [r0, #2]
        276c64:	e5902000 	ldr	r2, [r0]
        276c68:	e1a02842 	mov	r2, r2, asr #16
        276c6c:	e0821841 	add	r1, r2, r1, asr #16
        276c70:	e5942024 	ldr	r2, [r4, #36]
        276c74:	e0821101 	add	r1, r2, r1, lsl #2
        276c78:	e5111004 	ldr	r1, [r1, -#4]
        276c7c:	e5911028 	ldr	r1, [r1, #40]
        276c80:	e1a01821 	mov	r1, r1, lsr #16
        276c84:	e0411005 	sub	r1, r1, r5
        276c88:	e5c01005 	strb	r1, [r0, #5]
        276c8c:	e1a01441 	mov	r1, r1, asr #8
        276c90:	e5c01004 	strb	r1, [r0, #4]
        276c94:	e1a03007 	mov	r3, r7
        276c98:	e28410b8 	add	r1, r4, #184	; 0xb8
        276c9c:	e8910003 	ldmia	r1, {r0, r1}
        276ca0:	e5942120 	ldr	r2, [r4, #288]
        276ca4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        276ca8:	e59d001c 	ldr	r0, [sp, #28]
        276cac:	e59d1018 	ldr	r1, [sp, #24]
        276cb0:	e59d2014 	ldr	r2, [sp, #20]
        276cb4:	e59d3010 	ldr	r3, [sp, #16]
        276cb8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        276cbc:	e59d3030 	ldr	r3, [sp, #48]
        276cc0:	e92d0008 	stmdb	sp!, {r3}
        276cc4:	e5940040 	ldr	r0, [r4, #64]
        276cc8:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        276ccc:	e5b02008 	ldr	r2, [r0, #8]!
        276cd0:	e5941054 	ldr	r1, [r4, #84]
        276cd4:	e1a00004 	mov	r0, r4
        276cd8:	e59d3038 	ldr	r3, [sp, #56]
        276cdc:	eb63fb73 	bl	1b75ab0 <$WordRecogNetEvaluate>
        276ce0:	e1a03007 	mov	r3, r7
        276ce4:	e5bd2024 	ldr	r2, [sp, #36]!
        276ce8:	e59d1004 	ldr	r1, [sp, #4]
        276cec:	e59d0008 	ldr	r0, [sp, #8]
        276cf0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        276cf4:	e1a03008 	mov	r3, r8
        276cf8:	e59400c4 	ldr	r0, [r4, #196]
        276cfc:	e5941060 	ldr	r1, [r4, #96]
        276d00:	e5942120 	ldr	r2, [r4, #288]
        276d04:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        276d08:	e5940070 	ldr	r0, [r4, #112]
        276d0c:	e28430b8 	add	r3, r4, #184	; 0xb8
        276d10:	e893000e 	ldmia	r3, {r1, r2, r3}
        276d14:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        276d18:	e5940040 	ldr	r0, [r4, #64]
        276d1c:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        276d20:	e5d03025 	ldrb	r3, [r0, #37]
        276d24:	e92d0008 	stmdb	sp!, {r3}
        276d28:	e5d03024 	ldrb	r3, [r0, #36]
        276d2c:	e5d0201c 	ldrb	r2, [r0, #28]
        276d30:	e5901008 	ldr	r1, [r0, #8]
        276d34:	e5911000 	ldr	r1, [r1]
        276d38:	e1a01841 	mov	r1, r1, asr #16
        276d3c:	e280000c 	add	r0, r0, #12	; 0xc
        276d40:	eb63e29c 	bl	1b6f7b8 <$CharModifyProbs>
        276d44:	e28dd034 	add	sp, sp, #52	; 0x34
        276d48:	e5940040 	ldr	r0, [r4, #64]
        276d4c:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        276d50:	e5900008 	ldr	r0, [r0, #8]
        276d54:	e5901000 	ldr	r1, [r0]
        276d58:	e1a01841 	mov	r1, r1, asr #16
        276d5c:	e3510002 	cmp	r1, #2	; 0x2
        276d60:	b3a01801 	movlt	r1, #65536	; 0x10000
        276d64:	ba000014 	blt	276dbc <WordRecogAnalyzeWord+0x6fc>
        276d68:	e3a02000 	mov	r2, #0	; 0x0
        276d6c:	e3a00001 	mov	r0, #1	; 0x1
        276d70:	e3510001 	cmp	r1, #1	; 0x1
        276d74:	da00000b 	ble	276da8 <WordRecogAnalyzeWord+0x6e8>
        276d78:	e5943040 	ldr	r3, [r4, #64]
        276d7c:	e7933105 	ldr	r3, [r3, r5, lsl #2]
        276d80:	e5933008 	ldr	r3, [r3, #8]
        276d84:	e5933004 	ldr	r3, [r3, #4]
        276d88:	e793c100 	ldr	ip, [r3, r0, lsl #2]
        276d8c:	e59cc02c 	ldr	ip, [ip, #44]
        276d90:	e35c0902 	cmp	ip, #32768	; 0x8000
        276d94:	c3a0c902 	movgt	ip, #32768	; 0x8000
        276d98:	e08c2002 	add	r2, ip, r2
        276d9c:	e2800001 	add	r0, r0, #1	; 0x1
        276da0:	e1510000 	cmp	r1, r0
        276da4:	cafffff7 	bgt	276d88 <WordRecogAnalyzeWord+0x6c8>
        276da8:	e2410001 	sub	r0, r1, #1	; 0x1
        276dac:	e1a01800 	mov	r1, r0, lsl #16
        276db0:	e1a00002 	mov	r0, r2
        276db4:	eb65a8c1 	bl	1be10c0 <$FixedDivide>
        276db8:	e1a01000 	mov	r1, r0
        276dbc:	e5940040 	ldr	r0, [r4, #64]
        276dc0:	e594301c 	ldr	r3, [r4, #28]
        276dc4:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        276dc8:	e590c000 	ldr	ip, [r0]
        276dcc:	e1a0c84c 	mov	ip, ip, asr #16
        276dd0:	e5902002 	ldr	r2, [r0, #2]
        276dd4:	e08cc842 	add	ip, ip, r2, asr #16
        276dd8:	e5942020 	ldr	r2, [r4, #32]
        276ddc:	e13c0842 	teq	ip, r2, asr #16
        276de0:	13a02000 	movne	r2, #0	; 0x0
        276de4:	03a02001 	moveq	r2, #1	; 0x1
        276de8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        276dec:	e1a03005 	mov	r3, r5
        276df0:	e1a02008 	mov	r2, r8
        276df4:	e1a01007 	mov	r1, r7
        276df8:	e59401a0 	ldr	r0, [r4, #416]
        276dfc:	eb63f2e7 	bl	1b739a0 <$SearchProcessSegment>
        276e00:	e28dd010 	add	sp, sp, #16	; 0x10
        276e04:	e2855001 	add	r5, r5, #1	; 0x1
        276e08:	e594003c 	ldr	r0, [r4, #60]
        276e0c:	e1550840 	cmp	r5, r0, asr #16
        276e10:	baffff90 	blt	276c58 <WordRecogAnalyzeWord+0x598>
        276e14:	e2842010 	add	r2, r4, #16	; 0x10
        276e18:	e8920007 	ldmia	r2, {r0, r1, r2}
        276e1c:	e594300c 	ldr	r3, [r4, #12]
        276e20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        276e24:	e5941020 	ldr	r1, [r4, #32]
        276e28:	e1a01841 	mov	r1, r1, asr #16
        276e2c:	e59401a0 	ldr	r0, [r4, #416]
        276e30:	e1a03004 	mov	r3, r4
        276e34:	e59f2008 	ldr	r2, [pc, #8]	; 276e44 <WordRecogAnalyzeWord+0x784>
        276e38:	eb63f2d6 	bl	1b73998 <$SearchEndWord>
        276e3c:	e28dd010 	add	sp, sp, #16	; 0x10
        276e40:	eafffe29 	b	2766ec <WordRecogAnalyzeWord+0x2c>
        276e44:	01b75aa8 	moveqs	r5, r8, lsr #21
    */
}

/**
 * Symbol: WordTailDeleteRef
 * Address: 00276e48
 */
void globals::WordTailDeleteRef() {
    /*
        276e48:	e1a0c00d 	mov	ip, sp
        276e4c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        276e50:	e24cb004 	sub	fp, ip, #4	; 0x4
        276e54:	e1a04800 	mov	r4, r0, lsl #16
        276e58:	e1a04824 	mov	r4, r4, lsr #16
        276e5c:	e3a00801 	mov	r0, #65536	; 0x10000
        276e60:	e2400001 	sub	r0, r0, #1	; 0x1
        276e64:	e1340000 	teq	r4, r0
        276e68:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        276e6c:	e59f5094 	ldr	r5, [pc, #94]	; 276f08 <WordTailDeleteRef+0xc0>
        276e70:	e3540a0f 	cmp	r4, #61440	; 0xf000
        276e74:	ba000005 	blt	276e90 <WordTailDeleteRef+0x48>
        276e78:	e0840084 	add	r0, r4, r4, lsl #1
        276e7c:	e5b51010 	ldr	r1, [r5, #16]!
        276e80:	e0810280 	add	r0, r1, r0, lsl #5
        276e84:	e240085a 	sub	r0, r0, #5898240	; 0x5a0000
        276e88:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        276e8c:	ea63f6f7 	b	1b74a70 <$WordListDeleteRef>
        276e90:	e1340000 	teq	r4, r0
        276e94:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        276e98:	e3a0007f 	mov	r0, #127	; 0x7f
        276e9c:	e00072c4 	and	r7, r0, r4, asr #5
        276ea0:	e5950000 	ldr	r0, [r5]
        276ea4:	e7900107 	ldr	r0, [r0, r7, lsl #2]
        276ea8:	e204601f 	and	r6, r4, #31	; 0x1f
        276eac:	e0800106 	add	r0, r0, r6, lsl #2
        276eb0:	e5d01001 	ldrb	r1, [r0, #1]
        276eb4:	e33100ff 	teq	r1, #255	; 0xff
        276eb8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        276ebc:	e2411001 	sub	r1, r1, #1	; 0x1
        276ec0:	e20110ff 	and	r1, r1, #255	; 0xff
        276ec4:	e5c01001 	strb	r1, [r0, #1]
        276ec8:	e3510000 	cmp	r1, #0	; 0x0
        276ecc:	c91ba8f0 	ldmgtdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        276ed0:	e5900002 	ldr	r0, [r0, #2]
        276ed4:	e1a00820 	mov	r0, r0, lsr #16
        276ed8:	eb63fb00 	bl	1b75ae0 <$WordTailDeleteRef>
        276edc:	e595000a 	ldr	r0, [r5, #10]
        276ee0:	e5951000 	ldr	r1, [r5]
        276ee4:	e7911107 	ldr	r1, [r1, r7, lsl #2]
        276ee8:	e0811106 	add	r1, r1, r6, lsl #2
        276eec:	e5c10003 	strb	r0, [r1, #3]
        276ef0:	e1a00440 	mov	r0, r0, asr #8
        276ef4:	e5c10002 	strb	r0, [r1, #2]
        276ef8:	e5c54009 	strb	r4, [r5, #9]
        276efc:	e1a00424 	mov	r0, r4, lsr #8
        276f00:	e5c50008 	strb	r0, [r5, #8]
        276f04:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        276f08:	0c104fac 	ldceq	15, cr4, [r0], -#688
    */
}

/**
 * Symbol: WordTailSprint
 * Address: 00276f0c
 */
void globals::WordTailSprint() {
    /*
        276f0c:	e1a0c00d 	mov	ip, sp
        276f10:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        276f14:	e24cb004 	sub	fp, ip, #4	; 0x4
        276f18:	e1a04001 	mov	r4, r1
        276f1c:	e1a05002 	mov	r5, r2
        276f20:	e1a00800 	mov	r0, r0, lsl #16
        276f24:	e1a00820 	mov	r0, r0, lsr #16
        276f28:	e3a01801 	mov	r1, #65536	; 0x10000
        276f2c:	e2411001 	sub	r1, r1, #1	; 0x1
        276f30:	e3a07000 	mov	r7, #0	; 0x0
        276f34:	e1300001 	teq	r0, r1
        276f38:	0a00000c 	beq	276f70 <WordTailSprint+0x64>
        276f3c:	e59f6044 	ldr	r6, [pc, #44]	; 276f88 <WordTailSprint+0x7c>
        276f40:	e3500a0f 	cmp	r0, #61440	; 0xf000
        276f44:	ba000007 	blt	276f68 <WordTailSprint+0x5c>
        276f48:	e0800080 	add	r0, r0, r0, lsl #1
        276f4c:	e5b61010 	ldr	r1, [r6, #16]!
        276f50:	e0810280 	add	r0, r1, r0, lsl #5
        276f54:	e240085a 	sub	r0, r0, #5898240	; 0x5a0000
        276f58:	e1a02005 	mov	r2, r5
        276f5c:	e1a01004 	mov	r1, r4
        276f60:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        276f64:	ea63f6c3 	b	1b74a78 <$WordListSprint>
        276f68:	e1300001 	teq	r0, r1
        276f6c:	1a000006 	bne	276f8c <WordTailSprint+0x80>
        276f70:	e3550000 	cmp	r5, #0	; 0x0
        276f74:	da000001 	ble	276f80 <WordTailSprint+0x74>
        276f78:	e3340000 	teq	r4, #0	; 0x0
        276f7c:	15c47000 	strneb	r7, [r4]
        276f80:	e1a00007 	mov	r0, r7
        276f84:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        276f88:	0c104fac 	ldceq	15, cr4, [r0], -#688
        276f8c:	e3a0107f 	mov	r1, #127	; 0x7f
        276f90:	e00192c0 	and	r9, r1, r0, asr #5
        276f94:	e5961000 	ldr	r1, [r6]
        276f98:	e7911109 	ldr	r1, [r1, r9, lsl #2]
        276f9c:	e200801f 	and	r8, r0, #31	; 0x1f
        276fa0:	e0810108 	add	r0, r1, r8, lsl #2
        276fa4:	e5900002 	ldr	r0, [r0, #2]
        276fa8:	e1a00820 	mov	r0, r0, lsr #16
        276fac:	e1a02005 	mov	r2, r5
        276fb0:	e1a01004 	mov	r1, r4
        276fb4:	eb63faca 	bl	1b75ae4 <$WordTailSprint>
        276fb8:	e2451001 	sub	r1, r5, #1	; 0x1
        276fbc:	e1510000 	cmp	r1, r0
        276fc0:	d91babf0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        276fc4:	e3340000 	teq	r4, #0	; 0x0
        276fc8:	02800001 	addeq	r0, r0, #1	; 0x1
        276fcc:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        276fd0:	e5961000 	ldr	r1, [r6]
        276fd4:	e7911109 	ldr	r1, [r1, r9, lsl #2]
        276fd8:	e7d12108 	ldrb	r2, [r1, r8, lsl #2]
        276fdc:	e1a01000 	mov	r1, r0
        276fe0:	e2800001 	add	r0, r0, #1	; 0x1
        276fe4:	e7c42001 	strb	r2, [r4, r1]
        276fe8:	e7c47000 	strb	r7, [r4, r0]
        276fec:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: WordTailSprint2
 * Address: 00276ff0
 */
void globals::WordTailSprint2() {
    /*
        276ff0:	e1a0c00d 	mov	ip, sp
        276ff4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        276ff8:	e24cb004 	sub	fp, ip, #4	; 0x4
        276ffc:	e1a04001 	mov	r4, r1
        277000:	e1a05002 	mov	r5, r2
        277004:	e1a01800 	mov	r1, r0, lsl #16
        277008:	e1a01821 	mov	r1, r1, lsr #16
        27700c:	e3a06000 	mov	r6, #0	; 0x0
        277010:	e3510a0f 	cmp	r1, #61440	; 0xf000
        277014:	ba000005 	blt	277030 <WordTailSprint2+0x40>
        277018:	e3550000 	cmp	r5, #0	; 0x0
        27701c:	da000001 	ble	277028 <WordTailSprint2+0x38>
        277020:	e3340000 	teq	r4, #0	; 0x0
        277024:	15c46000 	strneb	r6, [r4]
        277028:	e1a00006 	mov	r0, r6
        27702c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        277030:	e3a0007f 	mov	r0, #127	; 0x7f
        277034:	e00092c1 	and	r9, r0, r1, asr #5
        277038:	e59f8058 	ldr	r8, [pc, #58]	; 277098 <WordTailSprint2+0xa8>
        27703c:	e5980000 	ldr	r0, [r8]
        277040:	e7900109 	ldr	r0, [r0, r9, lsl #2]
        277044:	e201701f 	and	r7, r1, #31	; 0x1f
        277048:	e0800107 	add	r0, r0, r7, lsl #2
        27704c:	e5900002 	ldr	r0, [r0, #2]
        277050:	e1a00820 	mov	r0, r0, lsr #16
        277054:	e1a02005 	mov	r2, r5
        277058:	e1a01004 	mov	r1, r4
        27705c:	eb63faa1 	bl	1b75ae8 <$WordTailSprint2>
        277060:	e2451001 	sub	r1, r5, #1	; 0x1
        277064:	e1510000 	cmp	r1, r0
        277068:	d91babf0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        27706c:	e3340000 	teq	r4, #0	; 0x0
        277070:	02800001 	addeq	r0, r0, #1	; 0x1
        277074:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        277078:	e5981000 	ldr	r1, [r8]
        27707c:	e7911109 	ldr	r1, [r1, r9, lsl #2]
        277080:	e7d12107 	ldrb	r2, [r1, r7, lsl #2]
        277084:	e1a01000 	mov	r1, r0
        277088:	e2800001 	add	r0, r0, #1	; 0x1
        27708c:	e7c42001 	strb	r2, [r4, r1]
        277090:	e7c46000 	strb	r6, [r4, r0]
        277094:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        277098:	0c104fac 	ldceq	15, cr4, [r0], -#688
    */
}

/**
 * Symbol: WordTailCompare
 * Address: 0027709c
 */
void globals::WordTailCompare() {
    /*
        27709c:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        2770a0:	e1a05800 	mov	r5, r0, lsl #16
        2770a4:	e1a05825 	mov	r5, r5, lsr #16
        2770a8:	e1a01801 	mov	r1, r1, lsl #16
        2770ac:	e1a01821 	mov	r1, r1, lsr #16
        2770b0:	e1350001 	teq	r5, r1
        2770b4:	03a00000 	moveq	r0, #0	; 0x0
        2770b8:	08bd8030 	ldmeqia	sp!, {r4, r5, pc}
        2770bc:	e3a03801 	mov	r3, #65536	; 0x10000
        2770c0:	e2433001 	sub	r3, r3, #1	; 0x1
        2770c4:	e3a02001 	mov	r2, #1	; 0x1
        2770c8:	e3e00000 	mvn	r0, #0	; 0x0
        2770cc:	e1350003 	teq	r5, r3
        2770d0:	0a000001 	beq	2770dc <WordTailCompare+0x40>
        2770d4:	e3550a0f 	cmp	r5, #61440	; 0xf000
        2770d8:	aa000005 	bge	2770f4 <WordTailCompare+0x58>
        2770dc:	e3a03801 	mov	r3, #65536	; 0x10000
        2770e0:	e2433001 	sub	r3, r3, #1	; 0x1
        2770e4:	e1310003 	teq	r1, r3
        2770e8:	0a000004 	beq	277100 <WordTailCompare+0x64>
        2770ec:	e3510a0f 	cmp	r1, #61440	; 0xf000
        2770f0:	ba000002 	blt	277100 <WordTailCompare+0x64>
        2770f4:	e1550001 	cmp	r5, r1
        2770f8:	d8bd8030 	ldmleia	sp!, {r4, r5, pc}
        2770fc:	ea000014 	b	277154 <WordTailCompare+0xb8>
        277100:	e3a03801 	mov	r3, #65536	; 0x10000
        277104:	e2433001 	sub	r3, r3, #1	; 0x1
        277108:	e1350003 	teq	r5, r3
        27710c:	08bd8030 	ldmeqia	sp!, {r4, r5, pc}
        277110:	e1310003 	teq	r1, r3
        277114:	0a00000e 	beq	277154 <WordTailCompare+0xb8>
        277118:	e3a0307f 	mov	r3, #127	; 0x7f
        27711c:	e003c2c5 	and	ip, r3, r5, asr #5
        277120:	e59fe034 	ldr	lr, [pc, #34]	; 27715c <WordTailCompare+0xc0>
        277124:	e59e4000 	ldr	r4, [lr]
        277128:	e794e10c 	ldr	lr, [r4, ip, lsl #2]
        27712c:	e205c01f 	and	ip, r5, #31	; 0x1f
        277130:	e7de510c 	ldrb	r5, [lr, ip, lsl #2]
        277134:	e00332c1 	and	r3, r3, r1, asr #5
        277138:	e7943103 	ldr	r3, [r4, r3, lsl #2]
        27713c:	e201101f 	and	r1, r1, #31	; 0x1f
        277140:	e7d34101 	ldrb	r4, [r3, r1, lsl #2]
        277144:	e0454004 	sub	r4, r5, r4
        277148:	e3540000 	cmp	r4, #0	; 0x0
        27714c:	0a000003 	beq	277160 <WordTailCompare+0xc4>
        277150:	b8bd8030 	ldmltia	sp!, {r4, r5, pc}
        277154:	e1a00002 	mov	r0, r2
        277158:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
        27715c:	0c104fac 	ldceq	15, cr4, [r0], -#688
        277160:	e0830101 	add	r0, r3, r1, lsl #2
        277164:	e5901002 	ldr	r1, [r0, #2]
        277168:	e1a01821 	mov	r1, r1, lsr #16
        27716c:	e08e010c 	add	r0, lr, ip, lsl #2
        277170:	e5900002 	ldr	r0, [r0, #2]
        277174:	e1a00820 	mov	r0, r0, lsr #16
        277178:	e8bd4030 	ldmia	sp!, {r4, r5, lr}
        27717c:	ea63fa55 	b	1b75ad8 <$WordTailCompare>
    */
}

/**
 * Symbol: WordTailBlockAllocate
 * Address: 00277180
 */
void globals::WordTailBlockAllocate() {
    /*
        277180:	e1a0c00d 	mov	ip, sp
        277184:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        277188:	e24cb004 	sub	fp, ip, #4	; 0x4
        27718c:	e59f517c 	ldr	r5, [pc, #17c]	; 277310 <WordTailBlockAllocate+0x190>
        277190:	e5950000 	ldr	r0, [r5]
        277194:	e59f4178 	ldr	r4, [pc, #178]	; 277314 <WordTailBlockAllocate+0x194>
        277198:	e59f8178 	ldr	r8, [pc, #178]	; 277318 <WordTailBlockAllocate+0x198>
        27719c:	e59f7178 	ldr	r7, [pc, #178]	; 27731c <WordTailBlockAllocate+0x19c>
        2771a0:	e3300000 	teq	r0, #0	; 0x0
        2771a4:	1a00000b 	bne	2771d8 <WordTailBlockAllocate+0x58>
        2771a8:	e1a01004 	mov	r1, r4
        2771ac:	e3a00c02 	mov	r0, #512	; 0x200
        2771b0:	eb65abe1 	bl	1be213c <$NewNamedPtr>
        2771b4:	e5870000 	str	r0, [r7]
        2771b8:	e3300000 	teq	r0, #0	; 0x0
        2771bc:	1a000004 	bne	2771d4 <WordTailBlockAllocate+0x54>
        2771c0:	e5980000 	ldr	r0, [r8]
        2771c4:	e28f1f55 	add	r1, pc, #340	; 0x154
        2771c8:	e3a02000 	mov	r2, #0	; 0x0
        2771cc:	eb65aff2 	bl	1be319c <$Throw>
        2771d0:	e5970000 	ldr	r0, [r7]
        2771d4:	e5850000 	str	r0, [r5]
        2771d8:	e5950004 	ldr	r0, [r5, #4]
        2771dc:	e59f9140 	ldr	r9, [pc, #140]	; 277324 <WordTailBlockAllocate+0x1a4>
        2771e0:	e3500080 	cmp	r0, #128	; 0x80
        2771e4:	ba000003 	blt	2771f8 <WordTailBlockAllocate+0x78>
        2771e8:	e3a02000 	mov	r2, #0	; 0x0
        2771ec:	e3a01000 	mov	r1, #0	; 0x0
        2771f0:	e5990000 	ldr	r0, [r9]
        2771f4:	eb65afe8 	bl	1be319c <$Throw>
        2771f8:	e5950004 	ldr	r0, [r5, #4]
        2771fc:	e1a00280 	mov	r0, r0, lsl #5
        277200:	e1a06800 	mov	r6, r0, lsl #16
        277204:	e1a06826 	mov	r6, r6, lsr #16
        277208:	e2860020 	add	r0, r6, #32	; 0x20
        27720c:	e3500a0f 	cmp	r0, #61440	; 0xf000
        277210:	da000003 	ble	277224 <WordTailBlockAllocate+0xa4>
        277214:	e3a02000 	mov	r2, #0	; 0x0
        277218:	e3a01000 	mov	r1, #0	; 0x0
        27721c:	e5990000 	ldr	r0, [r9]
        277220:	eb65afdd 	bl	1be319c <$Throw>
        277224:	e1a01004 	mov	r1, r4
        277228:	e3a00080 	mov	r0, #128	; 0x80
        27722c:	eb65abc2 	bl	1be213c <$NewNamedPtr>
        277230:	e5870000 	str	r0, [r7]
        277234:	e3300000 	teq	r0, #0	; 0x0
        277238:	1a000004 	bne	277250 <WordTailBlockAllocate+0xd0>
        27723c:	e5980000 	ldr	r0, [r8]
        277240:	e28f1f36 	add	r1, pc, #216	; 0xd8
        277244:	e3a02000 	mov	r2, #0	; 0x0
        277248:	eb65afd3 	bl	1be319c <$Throw>
        27724c:	e5970000 	ldr	r0, [r7]
        277250:	e5952004 	ldr	r2, [r5, #4]
        277254:	e2821001 	add	r1, r2, #1	; 0x1
        277258:	e5851004 	str	r1, [r5, #4]
        27725c:	e5951000 	ldr	r1, [r5]
        277260:	e7810102 	str	r0, [r1, r2, lsl #2]
        277264:	e3a01000 	mov	r1, #0	; 0x0
        277268:	e3a0007f 	mov	r0, #127	; 0x7f
        27726c:	e3c6201f 	bic	r2, r6, #31	; 0x1f
        277270:	e1822001 	orr	r2, r2, r1
        277274:	e1a06802 	mov	r6, r2, lsl #16
        277278:	e1a06826 	mov	r6, r6, lsr #16
        27727c:	e595300a 	ldr	r3, [r5, #10]
        277280:	e00022c6 	and	r2, r0, r6, asr #5
        277284:	e595c000 	ldr	ip, [r5]
        277288:	e79cc102 	ldr	ip, [ip, r2, lsl #2]
        27728c:	e206201f 	and	r2, r6, #31	; 0x1f
        277290:	e08c2102 	add	r2, ip, r2, lsl #2
        277294:	e5c23003 	strb	r3, [r2, #3]
        277298:	e1a03443 	mov	r3, r3, asr #8
        27729c:	e5c23002 	strb	r3, [r2, #2]
        2772a0:	e5c56009 	strb	r6, [r5, #9]
        2772a4:	e1a02446 	mov	r2, r6, asr #8
        2772a8:	e5c52008 	strb	r2, [r5, #8]
        2772ac:	e2811001 	add	r1, r1, #1	; 0x1
        2772b0:	e3510020 	cmp	r1, #32	; 0x20
        2772b4:	baffffec 	blt	27726c <WordTailBlockAllocate+0xec>
        2772b8:	e5951008 	ldr	r1, [r5, #8]
        2772bc:	e1a01821 	mov	r1, r1, lsr #16
        2772c0:	e5c5100d 	strb	r1, [r5, #13]
        2772c4:	e1a02421 	mov	r2, r1, lsr #8
        2772c8:	e5c5200c 	strb	r2, [r5, #12]
        2772cc:	e241ccff 	sub	ip, r1, #65280	; 0xff00
        2772d0:	e33c00ff 	teq	ip, #255	; 0xff
        2772d4:	0a000013 	beq	277328 <WordTailBlockAllocate+0x1a8>
        2772d8:	e595100c 	ldr	r1, [r5, #12]
        2772dc:	e1a01821 	mov	r1, r1, lsr #16
        2772e0:	e00022c1 	and	r2, r0, r1, asr #5
        2772e4:	e5950000 	ldr	r0, [r5]
        2772e8:	e7902102 	ldr	r2, [r0, r2, lsl #2]
        2772ec:	e201001f 	and	r0, r1, #31	; 0x1f
        2772f0:	e0820100 	add	r0, r2, r0, lsl #2
        2772f4:	e5900002 	ldr	r0, [r0, #2]
        2772f8:	e1a00820 	mov	r0, r0, lsr #16
        2772fc:	e5c50009 	strb	r0, [r5, #9]
        277300:	e1a00440 	mov	r0, r0, asr #8
        277304:	e5c50008 	strb	r0, [r5, #8]
        277308:	e1a00001 	mov	r0, r1
        27730c:	ea000006 	b	27732c <WordTailBlockAllocate+0x1ac>
        277310:	0c104fac 	ldceq	15, cr4, [r0], -#688
        277314:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        277318:	003712cc 	eoreqs	r1, r7, ip, asr #5
        27731c:	0c101950 	ldceq	9, cr1, [r0], -#320
        277320:	00000000 	andeq	r0, r0, r0
        277324:	003774f8 	ldreqsh	r7, [r7], -r8
        277328:	eb63f9e9 	bl	1b75ad4 <$WordTailBlockAllocate>
        27732c:	e1a00800 	mov	r0, r0, lsl #16
        277330:	e1a00820 	mov	r0, r0, lsr #16
        277334:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: WordTailDeallocateGlobals
 * Address: 00277338
 */
void globals::WordTailDeallocateGlobals() {
    /*
        277338:	e1a0c00d 	mov	ip, sp
        27733c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        277340:	e24cb004 	sub	fp, ip, #4	; 0x4
        277344:	e59f406c 	ldr	r4, [pc, #6c]	; 2773b8 <WordTailDeallocateGlobals+0x80>
        277348:	e3a06000 	mov	r6, #0	; 0x0
        27734c:	e5940000 	ldr	r0, [r4]
        277350:	e3300000 	teq	r0, #0	; 0x0
        277354:	0a00000d 	beq	277390 <WordTailDeallocateGlobals+0x58>
        277358:	e3a05000 	mov	r5, #0	; 0x0
        27735c:	e5940004 	ldr	r0, [r4, #4]
        277360:	e3500000 	cmp	r0, #0	; 0x0
        277364:	da000006 	ble	277384 <WordTailDeallocateGlobals+0x4c>
        277368:	e5940000 	ldr	r0, [r4]
        27736c:	e7900105 	ldr	r0, [r0, r5, lsl #2]
        277370:	eb656d78 	bl	1bd2958 <$free>
        277374:	e2855001 	add	r5, r5, #1	; 0x1
        277378:	e5940004 	ldr	r0, [r4, #4]
        27737c:	e1550000 	cmp	r5, r0
        277380:	bafffff8 	blt	277368 <WordTailDeallocateGlobals+0x30>
        277384:	e5940000 	ldr	r0, [r4]
        277388:	eb656d72 	bl	1bd2958 <$free>
        27738c:	e5846000 	str	r6, [r4]
        277390:	e3a000ff 	mov	r0, #255	; 0xff
        277394:	e5846004 	str	r6, [r4, #4]
        277398:	e5c40009 	strb	r0, [r4, #9]
        27739c:	e5c40008 	strb	r0, [r4, #8]
        2773a0:	e5940010 	ldr	r0, [r4, #16]
        2773a4:	e3300000 	teq	r0, #0	; 0x0
        2773a8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2773ac:	eb656d69 	bl	1bd2958 <$free>
        2773b0:	e5a46010 	str	r6, [r4, #16]!
        2773b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2773b8:	0c104fac 	ldceq	15, cr4, [r0], -#688
    */
}

/**
 * Symbol: WordListFreeAll
 * Address: 002773bc
 */
void globals::WordListFreeAll() {
    /*
        2773bc:	e1a0c00d 	mov	ip, sp
        2773c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2773c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2773c8:	e59f4074 	ldr	r4, [pc, #74]	; 277444 <WordListFreeAll+0x88>
        2773cc:	e5940010 	ldr	r0, [r4, #16]
        2773d0:	e3300000 	teq	r0, #0	; 0x0
        2773d4:	1a00000d 	bne	277410 <WordListFreeAll+0x54>
        2773d8:	e59f1068 	ldr	r1, [pc, #68]	; 277448 <WordListFreeAll+0x8c>
        2773dc:	e3a00d4b 	mov	r0, #4800	; 0x12c0
        2773e0:	eb65ab55 	bl	1be213c <$NewNamedPtr>
        2773e4:	e59f5060 	ldr	r5, [pc, #60]	; 27744c <WordListFreeAll+0x90>
        2773e8:	e5850000 	str	r0, [r5]
        2773ec:	e3300000 	teq	r0, #0	; 0x0
        2773f0:	1a000005 	bne	27740c <WordListFreeAll+0x50>
        2773f4:	e59f0054 	ldr	r0, [pc, #54]	; 277450 <WordListFreeAll+0x94>
        2773f8:	e5900000 	ldr	r0, [r0]
        2773fc:	e28f1f14 	add	r1, pc, #80	; 0x50
        277400:	e3a02000 	mov	r2, #0	; 0x0
        277404:	eb65af64 	bl	1be319c <$Throw>
        277408:	e5950000 	ldr	r0, [r5]
        27740c:	e5840010 	str	r0, [r4, #16]
        277410:	e3a00000 	mov	r0, #0	; 0x0
        277414:	e5840014 	str	r0, [r4, #20]
        277418:	e0801080 	add	r1, r0, r0, lsl #1
        27741c:	e2843010 	add	r3, r4, #16	; 0x10
        277420:	e893000c 	ldmia	r3, {r2, r3}
        277424:	e7823281 	str	r3, [r2, r1, lsl #5]
        277428:	e5942010 	ldr	r2, [r4, #16]
        27742c:	e0821281 	add	r1, r2, r1, lsl #5
        277430:	e2800001 	add	r0, r0, #1	; 0x1
        277434:	e3500032 	cmp	r0, #50	; 0x32
        277438:	e5841014 	str	r1, [r4, #20]
        27743c:	bafffff5 	blt	277418 <WordListFreeAll+0x5c>
        277440:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        277444:	0c104fac 	ldceq	15, cr4, [r0], -#688
        277448:	526f434b 	rsbpl	r4, pc, #738197505	; 0x2c000001
        27744c:	0c101950 	ldceq	9, cr1, [r0], -#320
        277450:	003712cc 	eoreqs	r1, r7, ip, asr #5
        277454:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: WordTailAddRef
 * Address: 00277458
 */
void globals::WordTailAddRef() {
    /*
        277458:	e1a00800 	mov	r0, r0, lsl #16
        27745c:	e1a00820 	mov	r0, r0, lsr #16
        277460:	e59f1040 	ldr	r1, [pc, #40]	; 2774a8 <WordTailAddRef+0x50>
        277464:	e240ccff 	sub	ip, r0, #65280	; 0xff00
        277468:	e33c00ff 	teq	ip, #255	; 0xff
        27746c:	0a00000e 	beq	2774ac <WordTailAddRef+0x54>
        277470:	e3500a0f 	cmp	r0, #61440	; 0xf000
        277474:	ba00000c 	blt	2774ac <WordTailAddRef+0x54>
        277478:	e0800080 	add	r0, r0, r0, lsl #1
        27747c:	e5911010 	ldr	r1, [r1, #16]
        277480:	e0810280 	add	r0, r1, r0, lsl #5
        277484:	e240085a 	sub	r0, r0, #5898240	; 0x5a0000
        277488:	e5901000 	ldr	r1, [r0]
        27748c:	e1a01821 	mov	r1, r1, lsr #16
        277490:	e35100ff 	cmp	r1, #255	; 0xff
        277494:	b2811001 	addlt	r1, r1, #1	; 0x1
        277498:	b5c01001 	strltb	r1, [r0, #1]
        27749c:	b1a01441 	movlt	r1, r1, asr #8
        2774a0:	ba00000c 	blt	2774d8 <WordTailAddRef+0x80>
        2774a4:	e1a0f00e 	mov	pc, lr
        2774a8:	0c104fac 	ldceq	15, cr4, [r0], -#688
        2774ac:	e3a0207f 	mov	r2, #127	; 0x7f
        2774b0:	e00222c0 	and	r2, r2, r0, asr #5
        2774b4:	e5911000 	ldr	r1, [r1]
        2774b8:	e7911102 	ldr	r1, [r1, r2, lsl #2]
        2774bc:	e200001f 	and	r0, r0, #31	; 0x1f
        2774c0:	e0810100 	add	r0, r1, r0, lsl #2
        2774c4:	e5d01001 	ldrb	r1, [r0, #1]
        2774c8:	e35100ff 	cmp	r1, #255	; 0xff
        2774cc:	a1a0f00e 	movge	pc, lr
        2774d0:	e5f01001 	ldrb	r1, [r0, #1]!
        2774d4:	e2811001 	add	r1, r1, #1	; 0x1
        2774d8:	e5c01000 	strb	r1, [r0]
        2774dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: WordListDeleteRef
 * Address: 002774e0
 */
void globals::WordListDeleteRef() {
    /*
        2774e0:	e1a0c00d 	mov	ip, sp
        2774e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2774e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2774ec:	e1a04000 	mov	r4, r0
        2774f0:	e5900000 	ldr	r0, [r0]
        2774f4:	e1a00820 	mov	r0, r0, lsr #16
        2774f8:	e33000ff 	teq	r0, #255	; 0xff
        2774fc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        277500:	e2400001 	sub	r0, r0, #1	; 0x1
        277504:	e1a01800 	mov	r1, r0, lsl #16
        277508:	e1a01821 	mov	r1, r1, lsr #16
        27750c:	e5c41001 	strb	r1, [r4, #1]
        277510:	e1a00441 	mov	r0, r1, asr #8
        277514:	e5c40000 	strb	r0, [r4]
        277518:	e3510000 	cmp	r1, #0	; 0x0
        27751c:	c91ba830 	ldmgtdb	fp, {r4, r5, fp, sp, pc}
        277520:	e3a05000 	mov	r5, #0	; 0x0
        277524:	e5d40002 	ldrb	r0, [r4, #2]
        277528:	e3500000 	cmp	r0, #0	; 0x0
        27752c:	da000007 	ble	277550 <WordListDeleteRef+0x70>
        277530:	e0840085 	add	r0, r4, r5, lsl #1
        277534:	e5900010 	ldr	r0, [r0, #16]
        277538:	e1a00820 	mov	r0, r0, lsr #16
        27753c:	eb63f967 	bl	1b75ae0 <$WordTailDeleteRef>
        277540:	e2855001 	add	r5, r5, #1	; 0x1
        277544:	e5d40002 	ldrb	r0, [r4, #2]
        277548:	e1500005 	cmp	r0, r5
        27754c:	cafffff7 	bgt	277530 <WordListDeleteRef+0x50>
        277550:	e59f000c 	ldr	r0, [pc, #c]	; 277564 <WordListDeleteRef+0x84>
        277554:	e5901014 	ldr	r1, [r0, #20]
        277558:	e5841000 	str	r1, [r4]
        27755c:	e5a04014 	str	r4, [r0, #20]!
        277560:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        277564:	0c104fac 	ldceq	15, cr4, [r0], -#688
    */
}

/**
 * Symbol: WordListSprint
 * Address: 00277568
 */
void globals::WordListSprint() {
    /*
        277568:	e1a0c00d 	mov	ip, sp
        27756c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        277570:	e24cb004 	sub	fp, ip, #4	; 0x4
        277574:	e1a04001 	mov	r4, r1
        277578:	e1a05002 	mov	r5, r2
        27757c:	e3a06000 	mov	r6, #0	; 0x0
        277580:	e3300000 	teq	r0, #0	; 0x0
        277584:	0a000002 	beq	277594 <WordListSprint+0x2c>
        277588:	e5d01002 	ldrb	r1, [r0, #2]
        27758c:	e3510001 	cmp	r1, #1	; 0x1
        277590:	aa000005 	bge	2775ac <WordListSprint+0x44>
        277594:	e3550000 	cmp	r5, #0	; 0x0
        277598:	da000001 	ble	2775a4 <WordListSprint+0x3c>
        27759c:	e3340000 	teq	r4, #0	; 0x0
        2775a0:	15c46000 	strneb	r6, [r4]
        2775a4:	e1a00006 	mov	r0, r6
        2775a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2775ac:	e5900010 	ldr	r0, [r0, #16]
        2775b0:	e1a00820 	mov	r0, r0, lsr #16
        2775b4:	e240ccff 	sub	ip, r0, #65280	; 0xff00
        2775b8:	e33c00ff 	teq	ip, #255	; 0xff
        2775bc:	03a00000 	moveq	r0, #0	; 0x0
        2775c0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2775c4:	e1a02005 	mov	r2, r5
        2775c8:	e1a01004 	mov	r1, r4
        2775cc:	eb63f944 	bl	1b75ae4 <$WordTailSprint>
        2775d0:	e2451001 	sub	r1, r5, #1	; 0x1
        2775d4:	e1510000 	cmp	r1, r0
        2775d8:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        2775dc:	e3340000 	teq	r4, #0	; 0x0
        2775e0:	02800001 	addeq	r0, r0, #1	; 0x1
        2775e4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2775e8:	e3a020a5 	mov	r2, #165	; 0xa5
        2775ec:	e1a01000 	mov	r1, r0
        2775f0:	e2800001 	add	r0, r0, #1	; 0x1
        2775f4:	e7c42001 	strb	r2, [r4, r1]
        2775f8:	e7c46000 	strb	r6, [r4, r0]
        2775fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: WriteLongStroke(_CDC *)
 * Address: 0027fffc
 */
WriteLongStroke(_CDC *) {
    /*
        27fffc:	e1a0c00d 	mov	ip, sp
        280000:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        280004:	e24cb004 	sub	fp, ip, #4	; 0x4
        280008:	e1a04000 	mov	r4, r0
        28000c:	e24dd004 	sub	sp, sp, #4	; 0x4
        280010:	e3a05d09 	mov	r5, #576	; 0x240
        280014:	e285593d 	add	r5, r5, #999424	; 0xf4000
        280018:	e5805168 	str	r5, [r0, #360]
        28001c:	e5805178 	str	r5, [r0, #376]
        280020:	e580516c 	str	r5, [r0, #364]
        280024:	e580517c 	str	r5, [r0, #380]
        280028:	eb5fc1f7 	bl	1a7080c <$ResetParam(_CDC *)>
        28002c:	e1a00004 	mov	r0, r4
        280030:	eb5fc1fb 	bl	1a70824 <$StoreContext(_CDC *)>
        280034:	e3a08000 	mov	r8, #0	; 0x0
        280038:	e5848df8 	str	r8, [r4, #3576]
        28003c:	e3a06001 	mov	r6, #1	; 0x1
        280040:	e2847d07 	add	r7, r4, #448	; 0x1c0
        280044:	e5942e14 	ldr	r2, [r4, #3604]
        280048:	e1a02822 	mov	r2, r2, lsr #16
        28004c:	e5941e28 	ldr	r1, [r4, #3624]
        280050:	e1a00004 	mov	r0, r4
        280054:	eb5fbdcd 	bl	1a6f790 <$TestStrokeSeg(_CDC *, unsigned long, unsigned short)>
        280058:	e3500000 	cmp	r0, #0	; 0x0
        28005c:	0a00001e 	beq	2800dc <WriteLongStroke(_CDC *)+0xe0>
        280060:	e1a00004 	mov	r0, r4
        280064:	eb5fc1ee 	bl	1a70824 <$StoreContext(_CDC *)>
        280068:	e594003c 	ldr	r0, [r4, #60]
        28006c:	e1b00820 	movs	r0, r0, lsr #16
        280070:	0a000001 	beq	28007c <WriteLongStroke(_CDC *)+0x80>
        280074:	e3a00000 	mov	r0, #0	; 0x0
        280078:	ea000090 	b	2802c0 <WriteLongStroke(_CDC *)+0x2c4>
        28007c:	e5940df8 	ldr	r0, [r4, #3576]
        280080:	e3500000 	cmp	r0, #0	; 0x0
        280084:	1a000014 	bne	2800dc <WriteLongStroke(_CDC *)+0xe0>
        280088:	e1a02004 	mov	r2, r4
        28008c:	e1a0100d 	mov	r1, sp
        280090:	e3a00000 	mov	r0, #0	; 0x0
        280094:	e1a0e00f 	mov	lr, pc
        280098:	e594f01c 	ldr	pc, [r4, #28]
        28009c:	e3500002 	cmp	r0, #2	; 0x2
        2800a0:	1a000001 	bne	2800ac <WriteLongStroke(_CDC *)+0xb0>
        2800a4:	e5846df8 	str	r6, [r4, #3576]
        2800a8:	ea00000b 	b	2800dc <WriteLongStroke(_CDC *)+0xe0>
        2800ac:	e3500004 	cmp	r0, #4	; 0x4
        2800b0:	05846df4 	streq	r6, [r4, #3572]
        2800b4:	0afffffa 	beq	2800a4 <WriteLongStroke(_CDC *)+0xa8>
        2800b8:	e3500003 	cmp	r0, #3	; 0x3
        2800bc:	1affffe0 	bne	280044 <WriteLongStroke(_CDC *)+0x48>
        2800c0:	e1a0100d 	mov	r1, sp
        2800c4:	e1a00004 	mov	r0, r4
        2800c8:	eb5fc1d6 	bl	1a70828 <$AddPointToOdata(_CDC *, _POINT *)>
        2800cc:	e3500000 	cmp	r0, #0	; 0x0
        2800d0:	0affffec 	beq	280088 <WriteLongStroke(_CDC *)+0x8c>
        2800d4:	e3700001 	cmn	r0, #1	; 0x1
        2800d8:	1affffd9 	bne	280044 <WriteLongStroke(_CDC *)+0x48>
        2800dc:	e594003c 	ldr	r0, [r4, #60]
        2800e0:	e1b00820 	movs	r0, r0, lsr #16
        2800e4:	1affffe2 	bne	280074 <WriteLongStroke(_CDC *)+0x78>
        2800e8:	e5940df8 	ldr	r0, [r4, #3576]
        2800ec:	e3500000 	cmp	r0, #0	; 0x0
        2800f0:	1a000003 	bne	280104 <WriteLongStroke(_CDC *)+0x108>
        2800f4:	e5949dc0 	ldr	r9, [r4, #3520]
        2800f8:	e1a09829 	mov	r9, r9, lsr #16
        2800fc:	e1a00004 	mov	r0, r4
        280100:	eb5fc1c9 	bl	1a7082c <$RestoreContext(_CDC *)>
        280104:	e5942e16 	ldr	r2, [r4, #3606]
        280108:	e1a02822 	mov	r2, r2, lsr #16
        28010c:	e1a00004 	mov	r0, r4
        280110:	e3a01000 	mov	r1, #0	; 0x0
        280114:	eb5fbd9d 	bl	1a6f790 <$TestStrokeSeg(_CDC *, unsigned long, unsigned short)>
        280118:	e594003c 	ldr	r0, [r4, #60]
        28011c:	e1b00820 	movs	r0, r0, lsr #16
        280120:	1affffd3 	bne	280074 <WriteLongStroke(_CDC *)+0x78>
        280124:	e5940dc4 	ldr	r0, [r4, #3524]
        280128:	e5840dd4 	str	r0, [r4, #3540]
        28012c:	e5940dc8 	ldr	r0, [r4, #3528]
        280130:	e5840dd8 	str	r0, [r4, #3544]
        280134:	e5940dc0 	ldr	r0, [r4, #3520]
        280138:	e1a00820 	mov	r0, r0, lsr #16
        28013c:	e2400001 	sub	r0, r0, #1	; 0x1
        280140:	e0801080 	add	r1, r0, r0, lsl #1
        280144:	e0871181 	add	r1, r7, r1, lsl #3
        280148:	e5912000 	ldr	r2, [r1]
        28014c:	e5842de4 	str	r2, [r4, #3556]
        280150:	e5911004 	ldr	r1, [r1, #4]
        280154:	e5841de8 	str	r1, [r4, #3560]
        280158:	e5941df8 	ldr	r1, [r4, #3576]
        28015c:	e3510000 	cmp	r1, #0	; 0x0
        280160:	01a01800 	moveq	r1, r0, lsl #16
        280164:	01a01821 	moveq	r1, r1, lsr #16
        280168:	03a05000 	moveq	r5, #0	; 0x0
        28016c:	01a00007 	moveq	r0, r7
        280170:	0a00001f 	beq	2801f4 <WriteLongStroke(_CDC *)+0x1f8>
        280174:	ea00004b 	b	2802a8 <WriteLongStroke(_CDC *)+0x2ac>
        280178:	e0821082 	add	r1, r2, r2, lsl #1
        28017c:	e0803181 	add	r3, r0, r1, lsl #3
        280180:	e593a000 	ldr	sl, [r3]
        280184:	e0851085 	add	r1, r5, r5, lsl #1
        280188:	e0801181 	add	r1, r0, r1, lsl #3
        28018c:	e581a000 	str	sl, [r1]
        280190:	e593e004 	ldr	lr, [r3, #4]
        280194:	e581e004 	str	lr, [r1, #4]
        280198:	e3550000 	cmp	r5, #0	; 0x0
        28019c:	1a000004 	bne	2801b4 <WriteLongStroke(_CDC *)+0x1b8>
        2801a0:	e5808008 	str	r8, [r0, #8]
        2801a4:	e580800c 	str	r8, [r0, #12]
        2801a8:	e5808010 	str	r8, [r0, #16]
        2801ac:	e5808014 	str	r8, [r0, #20]
        2801b0:	ea00000b 	b	2801e4 <WriteLongStroke(_CDC *)+0x1e8>
        2801b4:	e593c008 	ldr	ip, [r3, #8]
        2801b8:	e581c008 	str	ip, [r1, #8]
        2801bc:	e593c00c 	ldr	ip, [r3, #12]
        2801c0:	e581c00c 	str	ip, [r1, #12]
        2801c4:	e5933010 	ldr	r3, [r3, #16]
        2801c8:	e5813010 	str	r3, [r1, #16]
        2801cc:	e245e001 	sub	lr, r5, #1	; 0x1
        2801d0:	e08ec08e 	add	ip, lr, lr, lsl #1
        2801d4:	e080c18c 	add	ip, r0, ip, lsl #3
        2801d8:	e59cc014 	ldr	ip, [ip, #20]
        2801dc:	e08c3003 	add	r3, ip, r3
        2801e0:	e5a13014 	str	r3, [r1, #20]!
        2801e4:	e2851001 	add	r1, r5, #1	; 0x1
        2801e8:	e1a05801 	mov	r5, r1, lsl #16
        2801ec:	e1a05825 	mov	r5, r5, lsr #16
        2801f0:	e2821001 	add	r1, r2, #1	; 0x1
        2801f4:	e1a02801 	mov	r2, r1, lsl #16
        2801f8:	e1a02842 	mov	r2, r2, asr #16
        2801fc:	e1520009 	cmp	r2, r9
        280200:	baffffdc 	blt	280178 <WriteLongStroke(_CDC *)+0x17c>
        280204:	e5c45dc1 	strb	r5, [r4, #3521]
        280208:	e1a00445 	mov	r0, r5, asr #8
        28020c:	e5c40dc0 	strb	r0, [r4, #3520]
        280210:	ea000010 	b	280258 <WriteLongStroke(_CDC *)+0x25c>
        280214:	e1a02004 	mov	r2, r4
        280218:	e1a0100d 	mov	r1, sp
        28021c:	e3a00000 	mov	r0, #0	; 0x0
        280220:	e1a0e00f 	mov	lr, pc
        280224:	e594f01c 	ldr	pc, [r4, #28]
        280228:	e3500002 	cmp	r0, #2	; 0x2
        28022c:	1a000001 	bne	280238 <WriteLongStroke(_CDC *)+0x23c>
        280230:	e5846df8 	str	r6, [r4, #3576]
        280234:	ea000009 	b	280260 <WriteLongStroke(_CDC *)+0x264>
        280238:	e3500004 	cmp	r0, #4	; 0x4
        28023c:	05846df4 	streq	r6, [r4, #3572]
        280240:	0afffffa 	beq	280230 <WriteLongStroke(_CDC *)+0x234>
        280244:	e3500003 	cmp	r0, #3	; 0x3
        280248:	1a000002 	bne	280258 <WriteLongStroke(_CDC *)+0x25c>
        28024c:	e1a0100d 	mov	r1, sp
        280250:	e1a00004 	mov	r0, r4
        280254:	eb5fc173 	bl	1a70828 <$AddPointToOdata(_CDC *, _POINT *)>
        280258:	e3550002 	cmp	r5, #2	; 0x2
        28025c:	baffffec 	blt	280214 <WriteLongStroke(_CDC *)+0x218>
        280260:	e5940dc0 	ldr	r0, [r4, #3520]
        280264:	e1a00820 	mov	r0, r0, lsr #16
        280268:	e3500001 	cmp	r0, #1	; 0x1
        28026c:	da00000d 	ble	2802a8 <WriteLongStroke(_CDC *)+0x2ac>
        280270:	e1a00004 	mov	r0, r4
        280274:	e3a01008 	mov	r1, #8	; 0x8
        280278:	eb5fbd49 	bl	1a6f7a4 <$WriteSegment(_CDC *, short)>
        28027c:	e3500000 	cmp	r0, #0	; 0x0
        280280:	0affff7b 	beq	280074 <WriteLongStroke(_CDC *)+0x78>
        280284:	e3a00d09 	mov	r0, #576	; 0x240
        280288:	e280093d 	add	r0, r0, #999424	; 0xf4000
        28028c:	e5840168 	str	r0, [r4, #360]
        280290:	e5840178 	str	r0, [r4, #376]
        280294:	e584016c 	str	r0, [r4, #364]
        280298:	e584017c 	str	r0, [r4, #380]
        28029c:	e1a00004 	mov	r0, r4
        2802a0:	eb5fc159 	bl	1a7080c <$ResetParam(_CDC *)>
        2802a4:	eaffff66 	b	280044 <WriteLongStroke(_CDC *)+0x48>
        2802a8:	e1a00004 	mov	r0, r4
        2802ac:	e3a01007 	mov	r1, #7	; 0x7
        2802b0:	eb5fbd3b 	bl	1a6f7a4 <$WriteSegment(_CDC *, short)>
        2802b4:	e3500000 	cmp	r0, #0	; 0x0
        2802b8:	0affff6d 	beq	280074 <WriteLongStroke(_CDC *)+0x78>
        2802bc:	e3a00001 	mov	r0, #1	; 0x1
        2802c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WriteNewStroke(_CDC *, short)
 * Address: 00282d84
 */
WriteNewStroke(_CDC *, short) {
    /*
        282d84:	e1a0c00d 	mov	ip, sp
        282d88:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        282d8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        282d90:	e1a04000 	mov	r4, r0
        282d94:	e1a09801 	mov	r9, r1, lsl #16
        282d98:	e1a09849 	mov	r9, r9, asr #16
        282d9c:	e59fa020 	ldr	sl, [pc, #20]	; 282dc4 <WriteNewStroke(_CDC *, short)+0x40>
        282da0:	e3590002 	cmp	r9, #2	; 0x2
        282da4:	1a000007 	bne	282dc8 <WriteNewStroke(_CDC *, short)+0x44>
        282da8:	e1a0200a 	mov	r2, sl
        282dac:	e1a00004 	mov	r0, r4
        282db0:	e3a01002 	mov	r1, #2	; 0x2
        282db4:	eb5fb6ab 	bl	1a70868 <$EncodeWord_NEW(_CDC *, short, _CODEWORD *)>
        282db8:	e3500000 	cmp	r0, #0	; 0x0
        282dbc:	0a00008e 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282dc0:	ea000050 	b	282f08 <WriteNewStroke(_CDC *, short)+0x184>
        282dc4:	0c105038 	ldceq	0, cr5, [r0], -#224
        282dc8:	e59401c0 	ldr	r0, [r4, #448]
        282dcc:	e5941dc4 	ldr	r1, [r4, #3524]
        282dd0:	e0400001 	sub	r0, r0, r1
        282dd4:	e5941e24 	ldr	r1, [r4, #3620]
        282dd8:	eb5fae64 	bl	1a6e770 <$QvantUN__FlT1>
        282ddc:	e1a06000 	mov	r6, r0
        282de0:	e5940dc8 	ldr	r0, [r4, #3528]
        282de4:	e59411c4 	ldr	r1, [r4, #452]
        282de8:	e0410000 	sub	r0, r1, r0
        282dec:	e5941e24 	ldr	r1, [r4, #3620]
        282df0:	eb5fae5e 	bl	1a6e770 <$QvantUN__FlT1>
        282df4:	e1a05000 	mov	r5, r0
        282df8:	e5940e5a 	ldr	r0, [r4, #3674]
        282dfc:	e1b00820 	movs	r0, r0, lsr #16
        282e00:	0a00006b 	beq	282fb4 <WriteNewStroke(_CDC *, short)+0x230>
        282e04:	e3a00000 	mov	r0, #0	; 0x0
        282e08:	e5c40e5b 	strb	r0, [r4, #3675]
        282e0c:	e5c40e5a 	strb	r0, [r4, #3674]
        282e10:	e5940e58 	ldr	r0, [r4, #3672]
        282e14:	e1a00840 	mov	r0, r0, asr #16
        282e18:	e3500002 	cmp	r0, #2	; 0x2
        282e1c:	1a00003c 	bne	282f14 <WriteNewStroke(_CDC *, short)+0x190>
        282e20:	e3a000ff 	mov	r0, #255	; 0xff
        282e24:	e2800c01 	add	r0, r0, #256	; 0x100
        282e28:	e1560000 	cmp	r6, r0
        282e2c:	c3a060ff 	movgt	r6, #255	; 0xff
        282e30:	c2866c01 	addgt	r6, r6, #256	; 0x100
        282e34:	e1550000 	cmp	r5, r0
        282e38:	c3a050ff 	movgt	r5, #255	; 0xff
        282e3c:	c2855c01 	addgt	r5, r5, #256	; 0x100
        282e40:	e3560f7d 	cmp	r6, #500	; 0x1f4
        282e44:	d3550f7d 	cmple	r5, #500	; 0x1f4
        282e48:	e1a0200a 	mov	r2, sl
        282e4c:	da000005 	ble	282e68 <WriteNewStroke(_CDC *, short)+0xe4>
        282e50:	e1a00004 	mov	r0, r4
        282e54:	e3a01001 	mov	r1, #1	; 0x1
        282e58:	eb5fb682 	bl	1a70868 <$EncodeWord_NEW(_CDC *, short, _CODEWORD *)>
        282e5c:	e3500000 	cmp	r0, #0	; 0x0
        282e60:	0a000065 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282e64:	ea000004 	b	282e7c <WriteNewStroke(_CDC *, short)+0xf8>
        282e68:	e1a01009 	mov	r1, r9
        282e6c:	e1a00004 	mov	r0, r4
        282e70:	eb5fb67c 	bl	1a70868 <$EncodeWord_NEW(_CDC *, short, _CODEWORD *)>
        282e74:	e3500000 	cmp	r0, #0	; 0x0
        282e78:	0a00005f 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282e7c:	e1a01006 	mov	r1, r6
        282e80:	e1a00004 	mov	r0, r4
        282e84:	e3a02009 	mov	r2, #9	; 0x9
        282e88:	eb5fb673 	bl	1a7085c <$PutBits(_CDC *, unsigned long, unsigned short)>
        282e8c:	e3500000 	cmp	r0, #0	; 0x0
        282e90:	0a000059 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282e94:	e1a01005 	mov	r1, r5
        282e98:	e1a00004 	mov	r0, r4
        282e9c:	e3a02009 	mov	r2, #9	; 0x9
        282ea0:	eb5fb66d 	bl	1a7085c <$PutBits(_CDC *, unsigned long, unsigned short)>
        282ea4:	e3500000 	cmp	r0, #0	; 0x0
        282ea8:	0a000053 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282eac:	e3560f7d 	cmp	r6, #500	; 0x1f4
        282eb0:	d3550f7d 	cmple	r5, #500	; 0x1f4
        282eb4:	da000052 	ble	283004 <WriteNewStroke(_CDC *, short)+0x280>
        282eb8:	e59f2050 	ldr	r2, [pc, #50]	; 282f10 <WriteNewStroke(_CDC *, short)+0x18c>
        282ebc:	e1a00004 	mov	r0, r4
        282ec0:	e3a01007 	mov	r1, #7	; 0x7
        282ec4:	eb5fb667 	bl	1a70868 <$EncodeWord_NEW(_CDC *, short, _CODEWORD *)>
        282ec8:	e3500000 	cmp	r0, #0	; 0x0
        282ecc:	0a00004a 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282ed0:	e5940e24 	ldr	r0, [r4, #3620]
        282ed4:	e0010690 	mul	r1, r0, r6
        282ed8:	e5942dc4 	ldr	r2, [r4, #3524]
        282edc:	e0811002 	add	r1, r1, r2
        282ee0:	e5841dc4 	str	r1, [r4, #3524]
        282ee4:	e0010590 	mul	r1, r0, r5
        282ee8:	e5940dc8 	ldr	r0, [r4, #3528]
        282eec:	e0810000 	add	r0, r1, r0
        282ef0:	e5840dc8 	str	r0, [r4, #3528]
        282ef4:	e1a01009 	mov	r1, r9
        282ef8:	e1a00004 	mov	r0, r4
        282efc:	ebffffa0 	bl	282d84 <WriteNewStroke(_CDC *, short)>
        282f00:	e3500000 	cmp	r0, #0	; 0x0
        282f04:	0a00003c 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282f08:	e3a00001 	mov	r0, #1	; 0x1
        282f0c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        282f10:	0c105020 	ldceq	0, cr5, [r0], -#128
        282f14:	e3560000 	cmp	r6, #0	; 0x0
        282f18:	03550000 	cmpeq	r5, #0	; 0x0
        282f1c:	03a07008 	moveq	r7, #8	; 0x8
        282f20:	0a00000a 	beq	282f50 <WriteNewStroke(_CDC *, short)+0x1cc>
        282f24:	e3560c01 	cmp	r6, #256	; 0x100
        282f28:	b3550c01 	cmplt	r5, #256	; 0x100
        282f2c:	b3a07008 	movlt	r7, #8	; 0x8
        282f30:	b3a08018 	movlt	r8, #24	; 0x18
        282f34:	ba000005 	blt	282f50 <WriteNewStroke(_CDC *, short)+0x1cc>
        282f38:	e3560a01 	cmp	r6, #4096	; 0x1000
        282f3c:	b3550a01 	cmplt	r5, #4096	; 0x1000
        282f40:	a3a07010 	movge	r7, #16	; 0x10
        282f44:	a3a08038 	movge	r8, #56	; 0x38
        282f48:	b3a0700c 	movlt	r7, #12	; 0xc
        282f4c:	b3a08028 	movlt	r8, #40	; 0x28
        282f50:	e3500003 	cmp	r0, #3	; 0x3
        282f54:	03888040 	orreq	r8, r8, #64	; 0x40
        282f58:	e1a01008 	mov	r1, r8
        282f5c:	e1a00004 	mov	r0, r4
        282f60:	e3a02008 	mov	r2, #8	; 0x8
        282f64:	eb5fb63c 	bl	1a7085c <$PutBits(_CDC *, unsigned long, unsigned short)>
        282f68:	e3500000 	cmp	r0, #0	; 0x0
        282f6c:	0a000022 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282f70:	e1a02007 	mov	r2, r7
        282f74:	e1a01006 	mov	r1, r6
        282f78:	e1a00004 	mov	r0, r4
        282f7c:	eb5fb636 	bl	1a7085c <$PutBits(_CDC *, unsigned long, unsigned short)>
        282f80:	e3500000 	cmp	r0, #0	; 0x0
        282f84:	0a00001c 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282f88:	e1a02007 	mov	r2, r7
        282f8c:	e1a01005 	mov	r1, r5
        282f90:	e1a00004 	mov	r0, r4
        282f94:	eb5fb630 	bl	1a7085c <$PutBits(_CDC *, unsigned long, unsigned short)>
        282f98:	e3500000 	cmp	r0, #0	; 0x0
        282f9c:	0a000016 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282fa0:	e1a0200a 	mov	r2, sl
        282fa4:	e1a01009 	mov	r1, r9
        282fa8:	e1a00004 	mov	r0, r4
        282fac:	eb5fb62d 	bl	1a70868 <$EncodeWord_NEW(_CDC *, short, _CODEWORD *)>
        282fb0:	ea000013 	b	283004 <WriteNewStroke(_CDC *, short)+0x280>
        282fb4:	e1a0200a 	mov	r2, sl
        282fb8:	e1a01009 	mov	r1, r9
        282fbc:	e1a00004 	mov	r0, r4
        282fc0:	eb5fb628 	bl	1a70868 <$EncodeWord_NEW(_CDC *, short, _CODEWORD *)>
        282fc4:	e3500000 	cmp	r0, #0	; 0x0
        282fc8:	0a00000b 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282fcc:	e5942e38 	ldr	r2, [r4, #3640]
        282fd0:	e1a01006 	mov	r1, r6
        282fd4:	e1a00004 	mov	r0, r4
        282fd8:	eb5fb621 	bl	1a70864 <$EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        282fdc:	e3500000 	cmp	r0, #0	; 0x0
        282fe0:	0a000005 	beq	282ffc <WriteNewStroke(_CDC *, short)+0x278>
        282fe4:	e5942e3c 	ldr	r2, [r4, #3644]
        282fe8:	e1a01005 	mov	r1, r5
        282fec:	e1a00004 	mov	r0, r4
        282ff0:	eb5fb61b 	bl	1a70864 <$EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        282ff4:	e3500000 	cmp	r0, #0	; 0x0
        282ff8:	1a000001 	bne	283004 <WriteNewStroke(_CDC *, short)+0x280>
        282ffc:	e3a00000 	mov	r0, #0	; 0x0
        283000:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        283004:	e5940e24 	ldr	r0, [r4, #3620]
        283008:	e0010690 	mul	r1, r0, r6
        28300c:	e5942dc4 	ldr	r2, [r4, #3524]
        283010:	e0811002 	add	r1, r1, r2
        283014:	e5841dc4 	str	r1, [r4, #3524]
        283018:	e0020590 	mul	r2, r0, r5
        28301c:	e5940dc8 	ldr	r0, [r4, #3528]
        283020:	e0820000 	add	r0, r2, r0
        283024:	e5840dc8 	str	r0, [r4, #3528]
        283028:	e5841de4 	str	r1, [r4, #3556]
        28302c:	e5840de8 	str	r0, [r4, #3560]
        283030:	e5841dd4 	str	r1, [r4, #3540]
        283034:	e5a40dd8 	str	r0, [r4, #3544]!
        283038:	eaffffb2 	b	282f08 <WriteNewStroke(_CDC *, short)+0x184>
    */
}

/**
 * Symbol: WriteSegment(_CDC *, short)
 * Address: 0028303c
 */
WriteSegment(_CDC *, short) {
    /*
        28303c:	e1a0c00d 	mov	ip, sp
        283040:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        283044:	e24cb004 	sub	fp, ip, #4	; 0x4
        283048:	e1a04000 	mov	r4, r0
        28304c:	e1a05801 	mov	r5, r1, lsl #16
        283050:	e1a05845 	mov	r5, r5, asr #16
        283054:	e24dd010 	sub	sp, sp, #16	; 0x10
        283058:	e5900de4 	ldr	r0, [r0, #3556]
        28305c:	e5941dd4 	ldr	r1, [r4, #3540]
        283060:	e0400001 	sub	r0, r0, r1
        283064:	e5941e20 	ldr	r1, [r4, #3616]
        283068:	eb5fadc0 	bl	1a6e770 <$QvantUN__FlT1>
        28306c:	e5cd000b 	strb	r0, [sp, #11]
        283070:	e1a00440 	mov	r0, r0, asr #8
        283074:	e5cd000a 	strb	r0, [sp, #10]
        283078:	e5940dd8 	ldr	r0, [r4, #3544]
        28307c:	e5941de8 	ldr	r1, [r4, #3560]
        283080:	e0410000 	sub	r0, r1, r0
        283084:	e5941e20 	ldr	r1, [r4, #3616]
        283088:	eb5fadb8 	bl	1a6e770 <$QvantUN__FlT1>
        28308c:	e5cd0003 	strb	r0, [sp, #3]
        283090:	e1a00440 	mov	r0, r0, asr #8
        283094:	e5cd0002 	strb	r0, [sp, #2]
        283098:	e5940168 	ldr	r0, [r4, #360]
        28309c:	e5941e18 	ldr	r1, [r4, #3608]
        2830a0:	eb5fadb2 	bl	1a6e770 <$QvantUN__FlT1>
        2830a4:	e5cd000d 	strb	r0, [sp, #13]
        2830a8:	e1a00440 	mov	r0, r0, asr #8
        2830ac:	e5cd000c 	strb	r0, [sp, #12]
        2830b0:	e5940178 	ldr	r0, [r4, #376]
        2830b4:	e5941e18 	ldr	r1, [r4, #3608]
        2830b8:	eb5fadac 	bl	1a6e770 <$QvantUN__FlT1>
        2830bc:	e5cd0005 	strb	r0, [sp, #5]
        2830c0:	e1a00440 	mov	r0, r0, asr #8
        2830c4:	e5cd0004 	strb	r0, [sp, #4]
        2830c8:	e594016c 	ldr	r0, [r4, #364]
        2830cc:	e5941e1c 	ldr	r1, [r4, #3612]
        2830d0:	eb5fada6 	bl	1a6e770 <$QvantUN__FlT1>
        2830d4:	e5cd000f 	strb	r0, [sp, #15]
        2830d8:	e1a00440 	mov	r0, r0, asr #8
        2830dc:	e5cd000e 	strb	r0, [sp, #14]
        2830e0:	e594017c 	ldr	r0, [r4, #380]
        2830e4:	e5941e1c 	ldr	r1, [r4, #3612]
        2830e8:	eb5fada0 	bl	1a6e770 <$QvantUN__FlT1>
        2830ec:	e5cd0007 	strb	r0, [sp, #7]
        2830f0:	e1a00440 	mov	r0, r0, asr #8
        2830f4:	e5cd0006 	strb	r0, [sp, #6]
        2830f8:	e5940e14 	ldr	r0, [r4, #3604]
        2830fc:	e1b00820 	movs	r0, r0, lsr #16
        283100:	15940e16 	ldrne	r0, [r4, #3606]
        283104:	11a00820 	movne	r0, r0, lsr #16
        283108:	13500000 	cmpne	r0, #0	; 0x0
        28310c:	0a000007 	beq	283130 <WriteSegment(_CDC *, short)+0xf4>
        283110:	e28d1008 	add	r1, sp, #8	; 0x8
        283114:	e1a00004 	mov	r0, r4
        283118:	e3a02000 	mov	r2, #0	; 0x0
        28311c:	eb5fb19a 	bl	1a6f78c <$SegVectQuant(_CDC *, short *, unsigned int)>
        283120:	e1a0100d 	mov	r1, sp
        283124:	e1a00004 	mov	r0, r4
        283128:	e3a02001 	mov	r2, #1	; 0x1
        28312c:	eb5fb196 	bl	1a6f78c <$SegVectQuant(_CDC *, short *, unsigned int)>
        283130:	e59d100a 	ldr	r1, [sp, #10]
        283134:	e1a01841 	mov	r1, r1, asr #16
        283138:	e5940e20 	ldr	r0, [r4, #3616]
        28313c:	e0010190 	mul	r1, r0, r1
        283140:	e5942dc4 	ldr	r2, [r4, #3524]
        283144:	e0811002 	add	r1, r1, r2
        283148:	e5841dc4 	str	r1, [r4, #3524]
        28314c:	e5841de4 	str	r1, [r4, #3556]
        283150:	e59d1002 	ldr	r1, [sp, #2]
        283154:	e1a01841 	mov	r1, r1, asr #16
        283158:	e0010190 	mul	r1, r0, r1
        28315c:	e5940dc8 	ldr	r0, [r4, #3528]
        283160:	e0810000 	add	r0, r1, r0
        283164:	e5840dc8 	str	r0, [r4, #3528]
        283168:	e5840de8 	str	r0, [r4, #3560]
        28316c:	e59d100a 	ldr	r1, [sp, #10]
        283170:	e1a01841 	mov	r1, r1, asr #16
        283174:	e5942e40 	ldr	r2, [r4, #3648]
        283178:	e1a00004 	mov	r0, r4
        28317c:	eb5fb5b8 	bl	1a70864 <$EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        283180:	e3500000 	cmp	r0, #0	; 0x0
        283184:	1a000001 	bne	283190 <WriteSegment(_CDC *, short)+0x154>
        283188:	e3a00000 	mov	r0, #0	; 0x0
        28318c:	ea000029 	b	283238 <WriteSegment(_CDC *, short)+0x1fc>
        283190:	e59d1002 	ldr	r1, [sp, #2]
        283194:	e1a01841 	mov	r1, r1, asr #16
        283198:	e5942e44 	ldr	r2, [r4, #3652]
        28319c:	e1a00004 	mov	r0, r4
        2831a0:	eb5fb5af 	bl	1a70864 <$EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        2831a4:	e3500000 	cmp	r0, #0	; 0x0
        2831a8:	0afffff6 	beq	283188 <WriteSegment(_CDC *, short)+0x14c>
        2831ac:	e59d100c 	ldr	r1, [sp, #12]
        2831b0:	e1a01841 	mov	r1, r1, asr #16
        2831b4:	e5942e48 	ldr	r2, [r4, #3656]
        2831b8:	e1a00004 	mov	r0, r4
        2831bc:	eb5fb5a8 	bl	1a70864 <$EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        2831c0:	e3500000 	cmp	r0, #0	; 0x0
        2831c4:	0affffef 	beq	283188 <WriteSegment(_CDC *, short)+0x14c>
        2831c8:	e59d1004 	ldr	r1, [sp, #4]
        2831cc:	e1a01841 	mov	r1, r1, asr #16
        2831d0:	e5942e4c 	ldr	r2, [r4, #3660]
        2831d4:	e1a00004 	mov	r0, r4
        2831d8:	eb5fb5a1 	bl	1a70864 <$EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        2831dc:	e3500000 	cmp	r0, #0	; 0x0
        2831e0:	0affffe8 	beq	283188 <WriteSegment(_CDC *, short)+0x14c>
        2831e4:	e59d100e 	ldr	r1, [sp, #14]
        2831e8:	e1a01841 	mov	r1, r1, asr #16
        2831ec:	e5942e50 	ldr	r2, [r4, #3664]
        2831f0:	e1a00004 	mov	r0, r4
        2831f4:	eb5fb59a 	bl	1a70864 <$EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        2831f8:	e3500000 	cmp	r0, #0	; 0x0
        2831fc:	0affffe1 	beq	283188 <WriteSegment(_CDC *, short)+0x14c>
        283200:	e59d1006 	ldr	r1, [sp, #6]
        283204:	e1a01841 	mov	r1, r1, asr #16
        283208:	e5942e54 	ldr	r2, [r4, #3668]
        28320c:	e1a00004 	mov	r0, r4
        283210:	eb5fb593 	bl	1a70864 <$EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        283214:	e3500000 	cmp	r0, #0	; 0x0
        283218:	0affffda 	beq	283188 <WriteSegment(_CDC *, short)+0x14c>
        28321c:	e59f2018 	ldr	r2, [pc, #18]	; 28323c <WriteSegment(_CDC *, short)+0x200>
        283220:	e1a01005 	mov	r1, r5
        283224:	e1a00004 	mov	r0, r4
        283228:	eb5fb58e 	bl	1a70868 <$EncodeWord_NEW(_CDC *, short, _CODEWORD *)>
        28322c:	e3500000 	cmp	r0, #0	; 0x0
        283230:	0affffd4 	beq	283188 <WriteSegment(_CDC *, short)+0x14c>
        283234:	e3a00001 	mov	r0, #1	; 0x1
        283238:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        28323c:	0c105020 	ldceq	0, cr5, [r0], -#128
    */
}

/**
 * Symbol: WriteShortStroke(_CDC *)
 * Address: 00283240
 */
WriteShortStroke(_CDC *) {
    /*
        283240:	e1a0c00d 	mov	ip, sp
        283244:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        283248:	e24cb004 	sub	fp, ip, #4	; 0x4
        28324c:	e1a04000 	mov	r4, r0
        283250:	e3a05001 	mov	r5, #1	; 0x1
        283254:	e59f9004 	ldr	r9, [pc, #4]	; 283260 <WriteShortStroke(_CDC *)+0x20>
        283258:	e2808d07 	add	r8, r0, #448	; 0x1c0
        28325c:	ea00002e 	b	28331c <WriteShortStroke(_CDC *)+0xdc>
        283260:	0c105020 	ldceq	0, cr5, [r0], -#128
        283264:	e1a02009 	mov	r2, r9
        283268:	e1a00004 	mov	r0, r4
        28326c:	e3a01008 	mov	r1, #8	; 0x8
        283270:	eb5fb57c 	bl	1a70868 <$EncodeWord_NEW(_CDC *, short, _CODEWORD *)>
        283274:	e3500000 	cmp	r0, #0	; 0x0
        283278:	0a000019 	beq	2832e4 <WriteShortStroke(_CDC *)+0xa4>
        28327c:	e0850085 	add	r0, r5, r5, lsl #1
        283280:	e0886180 	add	r6, r8, r0, lsl #3
        283284:	e5960000 	ldr	r0, [r6]
        283288:	e5941dc4 	ldr	r1, [r4, #3524]
        28328c:	e0400001 	sub	r0, r0, r1
        283290:	e5941e20 	ldr	r1, [r4, #3616]
        283294:	eb5fad35 	bl	1a6e770 <$QvantUN__FlT1>
        283298:	e1a07000 	mov	r7, r0
        28329c:	e5b61004 	ldr	r1, [r6, #4]!
        2832a0:	e5940dc8 	ldr	r0, [r4, #3528]
        2832a4:	e0410000 	sub	r0, r1, r0
        2832a8:	e5941e20 	ldr	r1, [r4, #3616]
        2832ac:	eb5fad2f 	bl	1a6e770 <$QvantUN__FlT1>
        2832b0:	e1a06000 	mov	r6, r0
        2832b4:	e5942e40 	ldr	r2, [r4, #3648]
        2832b8:	e1a01007 	mov	r1, r7
        2832bc:	e1a00004 	mov	r0, r4
        2832c0:	eb5fb567 	bl	1a70864 <$EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        2832c4:	e3500000 	cmp	r0, #0	; 0x0
        2832c8:	0a000005 	beq	2832e4 <WriteShortStroke(_CDC *)+0xa4>
        2832cc:	e5942e44 	ldr	r2, [r4, #3652]
        2832d0:	e1a01006 	mov	r1, r6
        2832d4:	e1a00004 	mov	r0, r4
        2832d8:	eb5fb561 	bl	1a70864 <$EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        2832dc:	e3500000 	cmp	r0, #0	; 0x0
        2832e0:	1a000001 	bne	2832ec <WriteShortStroke(_CDC *)+0xac>
        2832e4:	e3a00000 	mov	r0, #0	; 0x0
        2832e8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2832ec:	e5940e20 	ldr	r0, [r4, #3616]
        2832f0:	e0010790 	mul	r1, r0, r7
        2832f4:	e5942dc4 	ldr	r2, [r4, #3524]
        2832f8:	e0811002 	add	r1, r1, r2
        2832fc:	e5841dc4 	str	r1, [r4, #3524]
        283300:	e0010690 	mul	r1, r0, r6
        283304:	e5940dc8 	ldr	r0, [r4, #3528]
        283308:	e0810000 	add	r0, r1, r0
        28330c:	e5840dc8 	str	r0, [r4, #3528]
        283310:	e2850001 	add	r0, r5, #1	; 0x1
        283314:	e1a05800 	mov	r5, r0, lsl #16
        283318:	e1a05845 	mov	r5, r5, asr #16
        28331c:	e5940dc0 	ldr	r0, [r4, #3520]
        283320:	e1550820 	cmp	r5, r0, lsr #16
        283324:	baffffce 	blt	283264 <WriteShortStroke(_CDC *)+0x24>
        283328:	e1a02009 	mov	r2, r9
        28332c:	e1a00004 	mov	r0, r4
        283330:	e3a01007 	mov	r1, #7	; 0x7
        283334:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        283338:	ea5fb54a 	b	1a70868 <$EncodeWord_NEW(_CDC *, short, _CODEWORD *)>
    */
}

/**
 * Symbol: work_with_circle__FP8low_typesP9SPEC_TYPEN33
 * Address: 002bd494
 */
void globals::work_with_circle() {
    /*
        2bd494:	e1a0c00d 	mov	ip, sp
        2bd498:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2bd49c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bd4a0:	e1a05000 	mov	r5, r0
        2bd4a4:	e1a06002 	mov	r6, r2
        2bd4a8:	e1a04003 	mov	r4, r3
        2bd4ac:	e1a08801 	mov	r8, r1, lsl #16
        2bd4b0:	e1a08848 	mov	r8, r8, asr #16
        2bd4b4:	e99b0600 	ldmib	fp, {r9, sl}
        2bd4b8:	e5907034 	ldr	r7, [r0, #52]
        2bd4bc:	e1a02007 	mov	r2, r7
        2bd4c0:	e1a01009 	mov	r1, r9
        2bd4c4:	e5903038 	ldr	r3, [r0, #56]
        2bd4c8:	e1a00004 	mov	r0, r4
        2bd4cc:	eb617a43 	bl	1b1bde0 <$Orient00__FP9SPEC_TYPET1PsT3>
        2bd4d0:	e3300000 	teq	r0, #0	; 0x0
        2bd4d4:	13a00000 	movne	r0, #0	; 0x0
        2bd4d8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2bd4dc:	e5940006 	ldr	r0, [r4, #6]
        2bd4e0:	e1a00840 	mov	r0, r0, asr #16
        2bd4e4:	e7971080 	ldr	r1, [r7, r0, lsl #1]
        2bd4e8:	e1a01841 	mov	r1, r1, asr #16
        2bd4ec:	e5940004 	ldr	r0, [r4, #4]
        2bd4f0:	e1a00840 	mov	r0, r0, asr #16
        2bd4f4:	e7970080 	ldr	r0, [r7, r0, lsl #1]
        2bd4f8:	e1a00840 	mov	r0, r0, asr #16
        2bd4fc:	e1510000 	cmp	r1, r0
        2bd500:	e1a0300a 	mov	r3, sl
        2bd504:	e1a02009 	mov	r2, r9
        2bd508:	e92d000c 	stmdb	sp!, {r2, r3}
        2bd50c:	e1a03004 	mov	r3, r4
        2bd510:	e1a02006 	mov	r2, r6
        2bd514:	e1a01008 	mov	r1, r8
        2bd518:	e1a00005 	mov	r0, r5
        2bd51c:	ca000001 	bgt	2bd528 <work_with_circle__FP8low_typesP9SPEC_TYPEN33+0x94>
        2bd520:	eb617e51 	bl	1b1ce6c <$work_with_forw_circle__FP8low_typesP9SPEC_TYPEN33>
        2bd524:	ea000000 	b	2bd52c <work_with_circle__FP8low_typesP9SPEC_TYPEN33+0x98>
        2bd528:	eb617e4d 	bl	1b1ce64 <$work_with_back_circle__FP8low_typesP9SPEC_TYPEN33>
        2bd52c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: work_with_back_circle__FP8low_typesP9SPEC_TYPEN33
 * Address: 002bdd40
 */
void globals::work_with_back_circle() {
    /*
        2bdd40:	e1a0c00d 	mov	ip, sp
        2bdd44:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2bdd48:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bdd4c:	e1a04000 	mov	r4, r0
        2bdd50:	e1a05002 	mov	r5, r2
        2bdd54:	e1a0c003 	mov	ip, r3
        2bdd58:	e1a06801 	mov	r6, r1, lsl #16
        2bdd5c:	e1a06846 	mov	r6, r6, asr #16
        2bdd60:	e59b0008 	ldr	r0, [fp, #8]
        2bdd64:	e59b8004 	ldr	r8, [fp, #4]
        2bdd68:	e24dd008 	sub	sp, sp, #8	; 0x8
        2bdd6c:	e3a03000 	mov	r3, #0	; 0x0
        2bdd70:	e1a0200d 	mov	r2, sp
        2bdd74:	e28d1004 	add	r1, sp, #4	; 0x4
        2bdd78:	e284e034 	add	lr, r4, #52	; 0x34
        2bdd7c:	e89e4080 	ldmia	lr, {r7, lr}
        2bdd80:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2bdd84:	e1a03008 	mov	r3, r8
        2bdd88:	e1a0200c 	mov	r2, ip
        2bdd8c:	e92d000c 	stmdb	sp!, {r2, r3}
        2bdd90:	e594206e 	ldr	r2, [r4, #110]
        2bdd94:	e1a02842 	mov	r2, r2, asr #16
        2bdd98:	e1a03006 	mov	r3, r6
        2bdd9c:	e1a0100e 	mov	r1, lr
        2bdda0:	e1a00007 	mov	r0, r7
        2bdda4:	eb618047 	bl	1b1dec8 <$Clash_my__FPsT1sT3P9SPEC_TYPEN25N21T3>
        2bdda8:	e28dd018 	add	sp, sp, #24	; 0x18
        2bddac:	e3300000 	teq	r0, #0	; 0x0
        2bddb0:	0a000006 	beq	2bddd0 <work_with_back_circle__FP8low_typesP9SPEC_TYPEN33+0x90>
        2bddb4:	e59d3000 	ldr	r3, [sp]
        2bddb8:	e1a03843 	mov	r3, r3, asr #16
        2bddbc:	e59d2004 	ldr	r2, [sp, #4]
        2bddc0:	e1a02842 	mov	r2, r2, asr #16
        2bddc4:	e1a01005 	mov	r1, r5
        2bddc8:	e1a00004 	mov	r0, r4
        2bddcc:	eb6177fc 	bl	1b1bdc4 <$make_circle__FP8low_typeP9SPEC_TYPEsT3>
        2bddd0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: work_with_forw_circle__FP8low_typesP9SPEC_TYPEN33
 * Address: 002bddd4
 */
void globals::work_with_forw_circle() {
    /*
        2bddd4:	e1a0c00d 	mov	ip, sp
        2bddd8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2bdddc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2bdde0:	e24cb014 	sub	fp, ip, #20	; 0x14
        2bdde4:	e1a04000 	mov	r4, r0
        2bdde8:	e1a05002 	mov	r5, r2
        2bddec:	e1a07801 	mov	r7, r1, lsl #16
        2bddf0:	e1a07847 	mov	r7, r7, asr #16
        2bddf4:	e28ba014 	add	sl, fp, #20	; 0x14
        2bddf8:	e89a0600 	ldmia	sl, {r9, sl}
        2bddfc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2bde00:	e2808034 	add	r8, r0, #52	; 0x34
        2bde04:	e8980140 	ldmia	r8, {r6, r8}
        2bde08:	e1a02006 	mov	r2, r6
        2bde0c:	e1a0100a 	mov	r1, sl
        2bde10:	e1a00009 	mov	r0, r9
        2bde14:	eb6173cf 	bl	1b1ad58 <$is_forw_isolate_circle__FP9SPEC_TYPET1Ps>
        2bde18:	e3300000 	teq	r0, #0	; 0x0
        2bde1c:	0a000010 	beq	2bde64 <work_with_forw_circle__FP8low_typesP9SPEC_TYPEN33+0x90>
        2bde20:	e3a03001 	mov	r3, #1	; 0x1
        2bde24:	e1a0200d 	mov	r2, sp
        2bde28:	e28d1004 	add	r1, sp, #4	; 0x4
        2bde2c:	e1a0000a 	mov	r0, sl
        2bde30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2bde34:	e1a03009 	mov	r3, r9
        2bde38:	e59b2010 	ldr	r2, [fp, #16]
        2bde3c:	e92d000c 	stmdb	sp!, {r2, r3}
        2bde40:	e594206e 	ldr	r2, [r4, #110]
        2bde44:	e1a02842 	mov	r2, r2, asr #16
        2bde48:	e1a03007 	mov	r3, r7
        2bde4c:	e1a01008 	mov	r1, r8
        2bde50:	e1a00006 	mov	r0, r6
        2bde54:	eb61801b 	bl	1b1dec8 <$Clash_my__FPsT1sT3P9SPEC_TYPEN25N21T3>
        2bde58:	e28dd018 	add	sp, sp, #24	; 0x18
        2bde5c:	e3300000 	teq	r0, #0	; 0x0
        2bde60:	1a000001 	bne	2bde6c <work_with_forw_circle__FP8low_typesP9SPEC_TYPEN33+0x98>
        2bde64:	e3a00000 	mov	r0, #0	; 0x0
        2bde68:	ea000006 	b	2bde88 <work_with_forw_circle__FP8low_typesP9SPEC_TYPEN33+0xb4>
        2bde6c:	e59d3000 	ldr	r3, [sp]
        2bde70:	e1a03843 	mov	r3, r3, asr #16
        2bde74:	e59d2004 	ldr	r2, [sp, #4]
        2bde78:	e1a02842 	mov	r2, r2, asr #16
        2bde7c:	e1a01005 	mov	r1, r5
        2bde80:	e1a00004 	mov	r0, r4
        2bde84:	eb6177ce 	bl	1b1bdc4 <$make_circle__FP8low_typeP9SPEC_TYPEsT3>
        2bde88:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii
 * Address: 002c6858
 */
void globals::WalkNodes() {
    /*
        2c6858:	e1a0c00d 	mov	ip, sp
        2c685c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2c6860:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c6864:	e1a07000 	mov	r7, r0
        2c6868:	e1a06001 	mov	r6, r1
        2c686c:	e1a05002 	mov	r5, r2
        2c6870:	e1a04003 	mov	r4, r3
        2c6874:	e24dd014 	sub	sp, sp, #20	; 0x14
        2c6878:	e5900000 	ldr	r0, [r0]
        2c687c:	e5900000 	ldr	r0, [r0]
        2c6880:	e3a0a000 	mov	sl, #0	; 0x0
        2c6884:	e1a0100a 	mov	r1, sl
        2c6888:	eb63f671 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c688c:	e3100003 	tst	r0, #3	; 0x3
        2c6890:	01a00140 	moveq	r0, r0, asr #2
        2c6894:	0a000000 	beq	2c689c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x44>
        2c6898:	eb63ee1f 	bl	1bc211c <$_RINTError(long)>
        2c689c:	e1a09000 	mov	r9, r0
        2c68a0:	e5970000 	ldr	r0, [r7]
        2c68a4:	e5900000 	ldr	r0, [r0]
        2c68a8:	eb63fa7f 	bl	1bc52ac <$Length(long)>
        2c68ac:	e2408001 	sub	r8, r0, #1	; 0x1
        2c68b0:	e3580001 	cmp	r8, #1	; 0x1
        2c68b4:	3a000004 	bcc	2c68cc <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x74>
        2c68b8:	e5970000 	ldr	r0, [r7]
        2c68bc:	e5900000 	ldr	r0, [r0]
        2c68c0:	e3a01001 	mov	r1, #1	; 0x1
        2c68c4:	eb63f662 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c68c8:	ea000000 	b	2c68d0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x78>
        2c68cc:	e3a00002 	mov	r0, #2	; 0x2
        2c68d0:	eb63ee1d 	bl	1bc214c <$AllocateRefHandle(long)>
        2c68d4:	e3580002 	cmp	r8, #2	; 0x2
        2c68d8:	e58d0010 	str	r0, [sp, #16]
        2c68dc:	3a000004 	bcc	2c68f4 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x9c>
        2c68e0:	e5970000 	ldr	r0, [r7]
        2c68e4:	e5900000 	ldr	r0, [r0]
        2c68e8:	e3a01002 	mov	r1, #2	; 0x2
        2c68ec:	eb63f658 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c68f0:	ea000000 	b	2c68f8 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0xa0>
        2c68f4:	e3a00002 	mov	r0, #2	; 0x2
        2c68f8:	eb63ee13 	bl	1bc214c <$AllocateRefHandle(long)>
        2c68fc:	e3580003 	cmp	r8, #3	; 0x3
        2c6900:	e58d000c 	str	r0, [sp, #12]
        2c6904:	3a000004 	bcc	2c691c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0xc4>
        2c6908:	e5970000 	ldr	r0, [r7]
        2c690c:	e5900000 	ldr	r0, [r0]
        2c6910:	e3a01003 	mov	r1, #3	; 0x3
        2c6914:	eb63f64e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6918:	ea000000 	b	2c6920 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0xc8>
        2c691c:	e3a00002 	mov	r0, #2	; 0x2
        2c6920:	eb63ee09 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6924:	e3580004 	cmp	r8, #4	; 0x4
        2c6928:	e58d0008 	str	r0, [sp, #8]
        2c692c:	3a000004 	bcc	2c6944 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0xec>
        2c6930:	e5970000 	ldr	r0, [r7]
        2c6934:	e5900000 	ldr	r0, [r0]
        2c6938:	e3a01004 	mov	r1, #4	; 0x4
        2c693c:	eb63f644 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6940:	ea000000 	b	2c6948 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0xf0>
        2c6944:	e3a00002 	mov	r0, #2	; 0x2
        2c6948:	eb63edff 	bl	1bc214c <$AllocateRefHandle(long)>
        2c694c:	e3580005 	cmp	r8, #5	; 0x5
        2c6950:	e58d0004 	str	r0, [sp, #4]
        2c6954:	3a000004 	bcc	2c696c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x114>
        2c6958:	e5970000 	ldr	r0, [r7]
        2c695c:	e5900000 	ldr	r0, [r0]
        2c6960:	e3a01005 	mov	r1, #5	; 0x5
        2c6964:	eb63f63a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6968:	ea000000 	b	2c6970 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x118>
        2c696c:	e3a00002 	mov	r0, #2	; 0x2
        2c6970:	eb63edf5 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6974:	e3340000 	teq	r4, #0	; 0x0
        2c6978:	e58d0000 	str	r0, [sp]
        2c697c:	1a00000d 	bne	2c69b8 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x160>
        2c6980:	e1a0300d 	mov	r3, sp
        2c6984:	e28d2004 	add	r2, sp, #4	; 0x4
        2c6988:	e28d1008 	add	r1, sp, #8	; 0x8
        2c698c:	e28d000c 	add	r0, sp, #12	; 0xc
        2c6990:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2c6994:	e28d3020 	add	r3, sp, #32	; 0x20
        2c6998:	e1a02009 	mov	r2, r9
        2c699c:	e1a01007 	mov	r1, r7
        2c69a0:	e1a00006 	mov	r0, r6
        2c69a4:	e1a0e00f 	mov	lr, pc
        2c69a8:	e1a0f005 	mov	pc, r5
        2c69ac:	e28dd010 	add	sp, sp, #16	; 0x10
        2c69b0:	e3300000 	teq	r0, #0	; 0x0
        2c69b4:	0a0001e2 	beq	2c7144 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8ec>
        2c69b8:	e259cf47 	subs	ip, r9, #284	; 0x11c
        2c69bc:	a35c0002 	cmpge	ip, #2	; 0x2
        2c69c0:	0a000105 	beq	2c6ddc <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x584>
        2c69c4:	ca000038 	bgt	2c6aac <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x254>
        2c69c8:	e259cf41 	subs	ip, r9, #260	; 0x104
        2c69cc:	a35c0003 	cmpge	ip, #3	; 0x3
        2c69d0:	0a0000cb 	beq	2c6d04 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x4ac>
        2c69d4:	ca000016 	bgt	2c6a34 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x1dc>
        2c69d8:	e359002f 	cmp	r9, #47	; 0x2f
        2c69dc:	0a000177 	beq	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c69e0:	ca00000c 	bgt	2c6a18 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x1c0>
        2c69e4:	e2490026 	sub	r0, r9, #38	; 0x26
        2c69e8:	e3500008 	cmp	r0, #8	; 0x8
        2c69ec:	908ff100 	addls	pc, pc, r0, lsl #2
        2c69f0:	ea0001c5 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c69f4:	ea000171 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c69f8:	ea0001c3 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c69fc:	ea0001c2 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a00:	ea0001c1 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a04:	ea00016d 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6a08:	ea00016c 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6a0c:	ea0001be 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a10:	ea00016a 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6a14:	ea000169 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6a18:	e339003a 	teq	r9, #58	; 0x3a
        2c6a1c:	0a00003e 	beq	2c6b1c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x2c4>
        2c6a20:	e339003c 	teq	r9, #60	; 0x3c
        2c6a24:	1339003e 	teqne	r9, #62	; 0x3e
        2c6a28:	1339005b 	teqne	r9, #91	; 0x5b
        2c6a2c:	1a0001b6 	bne	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a30:	ea000162 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6a34:	e28900f5 	add	r0, r9, #245	; 0xf5
        2c6a38:	e2400c02 	sub	r0, r0, #512	; 0x200
        2c6a3c:	e3500010 	cmp	r0, #16	; 0x10
        2c6a40:	908ff100 	addls	pc, pc, r0, lsl #2
        2c6a44:	ea0001b0 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a48:	ea000084 	b	2c6c60 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x408>
        2c6a4c:	ea0001ae 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a50:	ea0001ad 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a54:	ea00012b 	b	2c6f08 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x6b0>
        2c6a58:	ea0001ab 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a5c:	ea0001aa 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a60:	ea0001c2 	b	2c7170 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x918>
        2c6a64:	ea0001a8 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a68:	ea000170 	b	2c7030 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x7d8>
        2c6a6c:	ea000189 	b	2c7098 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x840>
        2c6a70:	ea0000bc 	b	2c6d68 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x510>
        2c6a74:	ea000031 	b	2c6b40 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x2e8>
        2c6a78:	ea000135 	b	2c6f54 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x6fc>
        2c6a7c:	ea0001a2 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a80:	ea0001a1 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6a84:	ea00014d 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6a88:	e59d0010 	ldr	r0, [sp, #16]
        2c6a8c:	e5900000 	ldr	r0, [r0]
        2c6a90:	eb63fa05 	bl	1bc52ac <$Length(long)>
        2c6a94:	e1a0a000 	mov	sl, r0
        2c6a98:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6a9c:	e3a08000 	mov	r8, #0	; 0x0
        2c6aa0:	e3500000 	cmp	r0, #0	; 0x0
        2c6aa4:	da00015b 	ble	2c7018 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x7c0>
        2c6aa8:	ea00014a 	b	2c6fd8 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x780>
        2c6aac:	e2490e12 	sub	r0, r9, #288	; 0x120
        2c6ab0:	e3500018 	cmp	r0, #24	; 0x18
        2c6ab4:	908ff100 	addls	pc, pc, r0, lsl #2
        2c6ab8:	ea000193 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6abc:	ea0000df 	b	2c6e40 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x5e8>
        2c6ac0:	ea000138 	b	2c6fa8 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x750>
        2c6ac4:	ea000190 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6ac8:	ea00018f 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6acc:	ea00018e 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6ad0:	ea00018d 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6ad4:	ea000019 	b	2c6b40 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x2e8>
        2c6ad8:	ea000018 	b	2c6b40 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x2e8>
        2c6adc:	ea00018a 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6ae0:	ea000053 	b	2c6c34 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x3dc>
        2c6ae4:	ea000135 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6ae8:	ea000134 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6aec:	ea000013 	b	2c6b40 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x2e8>
        2c6af0:	ea000132 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6af4:	ea000131 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6af8:	ea000130 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6afc:	ea00012f 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6b00:	ea000013 	b	2c6b54 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x2fc>
        2c6b04:	ea00012d 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6b08:	ea00012c 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6b0c:	ea00012b 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6b10:	ea00012a 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6b14:	ea000129 	b	2c6fc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x768>
        2c6b18:	ea000008 	b	2c6b40 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x2e8>
        2c6b1c:	e59d0008 	ldr	r0, [sp, #8]
        2c6b20:	e5900000 	ldr	r0, [r0]
        2c6b24:	eb63f9e0 	bl	1bc52ac <$Length(long)>
        2c6b28:	e1a0a000 	mov	sl, r0
        2c6b2c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6b30:	e3a08000 	mov	r8, #0	; 0x0
        2c6b34:	e3500000 	cmp	r0, #0	; 0x0
        2c6b38:	da0000ed 	ble	2c6ef4 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x69c>
        2c6b3c:	ea0000dc 	b	2c6eb4 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x65c>
        2c6b40:	e1a03004 	mov	r3, r4
        2c6b44:	e1a02005 	mov	r2, r5
        2c6b48:	e1a01006 	mov	r1, r6
        2c6b4c:	e28d0010 	add	r0, sp, #16	; 0x10
        2c6b50:	ea000112 	b	2c6fa0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x748>
        2c6b54:	e59d0010 	ldr	r0, [sp, #16]
        2c6b58:	e5900000 	ldr	r0, [r0]
        2c6b5c:	e1a0100a 	mov	r1, sl
        2c6b60:	eb63f5bb 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6b64:	e3100003 	tst	r0, #3	; 0x3
        2c6b68:	01a00140 	moveq	r0, r0, asr #2
        2c6b6c:	0a000000 	beq	2c6b74 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x31c>
        2c6b70:	eb63ed69 	bl	1bc211c <$_RINTError(long)>
        2c6b74:	e330002e 	teq	r0, #46	; 0x2e
        2c6b78:	1a00001c 	bne	2c6bf0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x398>
        2c6b7c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c6b80:	e59d0018 	ldr	r0, [sp, #24]
        2c6b84:	e5900000 	ldr	r0, [r0]
        2c6b88:	e3a01001 	mov	r1, #1	; 0x1
        2c6b8c:	eb63f5b0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6b90:	eb63ed6d 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6b94:	e58d0000 	str	r0, [sp]
        2c6b98:	e1a0000d 	mov	r0, sp
        2c6b9c:	e1a03004 	mov	r3, r4
        2c6ba0:	e1a02005 	mov	r2, r5
        2c6ba4:	e1a01006 	mov	r1, r6
        2c6ba8:	eb5e4c35 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6bac:	e59d0000 	ldr	r0, [sp]
        2c6bb0:	eb63f181 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6bb4:	e59d0018 	ldr	r0, [sp, #24]
        2c6bb8:	e5900000 	ldr	r0, [r0]
        2c6bbc:	e3a01002 	mov	r1, #2	; 0x2
        2c6bc0:	eb63f5a3 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6bc4:	eb63ed60 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6bc8:	e58d0004 	str	r0, [sp, #4]
        2c6bcc:	e28d0004 	add	r0, sp, #4	; 0x4
        2c6bd0:	e1a03004 	mov	r3, r4
        2c6bd4:	e1a02005 	mov	r2, r5
        2c6bd8:	e1a01006 	mov	r1, r6
        2c6bdc:	eb5e4c28 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6be0:	e59d0004 	ldr	r0, [sp, #4]
        2c6be4:	eb63f174 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6be8:	e28dd008 	add	sp, sp, #8	; 0x8
        2c6bec:	ea000146 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6bf0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6bf4:	e330003a 	teq	r0, #58	; 0x3a
        2c6bf8:	1a000124 	bne	2c7090 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x838>
        2c6bfc:	e59d0014 	ldr	r0, [sp, #20]
        2c6c00:	e5900000 	ldr	r0, [r0]
        2c6c04:	e3a01002 	mov	r1, #2	; 0x2
        2c6c08:	eb63f591 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6c0c:	eb63ed4e 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6c10:	e58d0000 	str	r0, [sp]
        2c6c14:	e1a0000d 	mov	r0, sp
        2c6c18:	e1a03004 	mov	r3, r4
        2c6c1c:	e1a02005 	mov	r2, r5
        2c6c20:	e1a01006 	mov	r1, r6
        2c6c24:	eb5e4c16 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6c28:	e59d0000 	ldr	r0, [sp]
        2c6c2c:	eb63f162 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6c30:	ea000116 	b	2c7090 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x838>
        2c6c34:	e59d0010 	ldr	r0, [sp, #16]
        2c6c38:	e5900000 	ldr	r0, [r0]
        2c6c3c:	e1a0100a 	mov	r1, sl
        2c6c40:	eb63f583 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6c44:	e3100003 	tst	r0, #3	; 0x3
        2c6c48:	01a00140 	moveq	r0, r0, asr #2
        2c6c4c:	0a000000 	beq	2c6c54 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x3fc>
        2c6c50:	eb63ed31 	bl	1bc211c <$_RINTError(long)>
        2c6c54:	e240cc01 	sub	ip, r0, #256	; 0x100
        2c6c58:	e33c0003 	teq	ip, #3	; 0x3
        2c6c5c:	1a000004 	bne	2c6c74 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x41c>
        2c6c60:	e1a03004 	mov	r3, r4
        2c6c64:	e1a02005 	mov	r2, r5
        2c6c68:	e1a01006 	mov	r1, r6
        2c6c6c:	e28d000c 	add	r0, sp, #12	; 0xc
        2c6c70:	ea0000ca 	b	2c6fa0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x748>
        2c6c74:	e330002e 	teq	r0, #46	; 0x2e
        2c6c78:	1330005b 	teqne	r0, #91	; 0x5b
        2c6c7c:	1a000122 	bne	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6c80:	e24dd008 	sub	sp, sp, #8	; 0x8
        2c6c84:	e59d0018 	ldr	r0, [sp, #24]
        2c6c88:	e5900000 	ldr	r0, [r0]
        2c6c8c:	e3a01001 	mov	r1, #1	; 0x1
        2c6c90:	eb63f56f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6c94:	eb63ed2c 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6c98:	e58d0000 	str	r0, [sp]
        2c6c9c:	e1a0000d 	mov	r0, sp
        2c6ca0:	e1a03004 	mov	r3, r4
        2c6ca4:	e1a02005 	mov	r2, r5
        2c6ca8:	e1a01006 	mov	r1, r6
        2c6cac:	eb5e4bf4 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6cb0:	e59d0000 	ldr	r0, [sp]
        2c6cb4:	eb63f140 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6cb8:	e59d0018 	ldr	r0, [sp, #24]
        2c6cbc:	e5900000 	ldr	r0, [r0]
        2c6cc0:	e3a01002 	mov	r1, #2	; 0x2
        2c6cc4:	eb63f562 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6cc8:	eb63ed1f 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6ccc:	e58d0004 	str	r0, [sp, #4]
        2c6cd0:	e28d0004 	add	r0, sp, #4	; 0x4
        2c6cd4:	e1a03004 	mov	r3, r4
        2c6cd8:	e1a02005 	mov	r2, r5
        2c6cdc:	e1a01006 	mov	r1, r6
        2c6ce0:	eb5e4be7 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6ce4:	e59d0004 	ldr	r0, [sp, #4]
        2c6ce8:	eb63f133 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6cec:	e1a03004 	mov	r3, r4
        2c6cf0:	e1a02005 	mov	r2, r5
        2c6cf4:	e1a01006 	mov	r1, r6
        2c6cf8:	e28d0014 	add	r0, sp, #20	; 0x14
        2c6cfc:	eb5e4be0 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6d00:	eaffffb8 	b	2c6be8 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x390>
        2c6d04:	e59d0010 	ldr	r0, [sp, #16]
        2c6d08:	e5900000 	ldr	r0, [r0]
        2c6d0c:	eb63f966 	bl	1bc52ac <$Length(long)>
        2c6d10:	e1a0a000 	mov	sl, r0
        2c6d14:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6d18:	e3a08000 	mov	r8, #0	; 0x0
        2c6d1c:	e3500000 	cmp	r0, #0	; 0x0
        2c6d20:	da0000da 	ble	2c7090 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x838>
        2c6d24:	e59d0014 	ldr	r0, [sp, #20]
        2c6d28:	e5900000 	ldr	r0, [r0]
        2c6d2c:	e1a01008 	mov	r1, r8
        2c6d30:	eb63f547 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6d34:	eb63ed04 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6d38:	e58d0000 	str	r0, [sp]
        2c6d3c:	e1a0000d 	mov	r0, sp
        2c6d40:	e1a03004 	mov	r3, r4
        2c6d44:	e1a02005 	mov	r2, r5
        2c6d48:	e1a01006 	mov	r1, r6
        2c6d4c:	eb5e4bcc 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6d50:	e59d0000 	ldr	r0, [sp]
        2c6d54:	eb63f118 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6d58:	e2888001 	add	r8, r8, #1	; 0x1
        2c6d5c:	e158000a 	cmp	r8, sl
        2c6d60:	baffffef 	blt	2c6d24 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x4cc>
        2c6d64:	ea0000c9 	b	2c7090 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x838>
        2c6d68:	e59d0010 	ldr	r0, [sp, #16]
        2c6d6c:	e5900000 	ldr	r0, [r0]
        2c6d70:	eb63f94d 	bl	1bc52ac <$Length(long)>
        2c6d74:	e1a0a000 	mov	sl, r0
        2c6d78:	e3a08001 	mov	r8, #1	; 0x1
        2c6d7c:	e3500001 	cmp	r0, #1	; 0x1
        2c6d80:	da0000e1 	ble	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6d84:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6d88:	e59d0014 	ldr	r0, [sp, #20]
        2c6d8c:	e5900000 	ldr	r0, [r0]
        2c6d90:	e1a01008 	mov	r1, r8
        2c6d94:	eb63f52e 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6d98:	eb63eceb 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6d9c:	e58d0000 	str	r0, [sp]
        2c6da0:	e5900000 	ldr	r0, [r0]
        2c6da4:	e3300002 	teq	r0, #2	; 0x2
        2c6da8:	0a000004 	beq	2c6dc0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x568>
        2c6dac:	e1a03004 	mov	r3, r4
        2c6db0:	e1a02005 	mov	r2, r5
        2c6db4:	e1a01006 	mov	r1, r6
        2c6db8:	e1a0000d 	mov	r0, sp
        2c6dbc:	eb5e4bb0 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6dc0:	e59d0000 	ldr	r0, [sp]
        2c6dc4:	eb63f0fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6dc8:	e28dd004 	add	sp, sp, #4	; 0x4
        2c6dcc:	e2888002 	add	r8, r8, #2	; 0x2
        2c6dd0:	e158000a 	cmp	r8, sl
        2c6dd4:	baffffea 	blt	2c6d84 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x52c>
        2c6dd8:	ea0000cb 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6ddc:	e59d000c 	ldr	r0, [sp, #12]
        2c6de0:	e5900000 	ldr	r0, [r0]
        2c6de4:	eb63f930 	bl	1bc52ac <$Length(long)>
        2c6de8:	e1a0a000 	mov	sl, r0
        2c6dec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6df0:	e3a08000 	mov	r8, #0	; 0x0
        2c6df4:	e3500000 	cmp	r0, #0	; 0x0
        2c6df8:	da0000a4 	ble	2c7090 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x838>
        2c6dfc:	e59d0010 	ldr	r0, [sp, #16]
        2c6e00:	e5900000 	ldr	r0, [r0]
        2c6e04:	e1a01008 	mov	r1, r8
        2c6e08:	eb63f511 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6e0c:	eb63ecce 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6e10:	e58d0000 	str	r0, [sp]
        2c6e14:	e1a0000d 	mov	r0, sp
        2c6e18:	e1a03004 	mov	r3, r4
        2c6e1c:	e1a02005 	mov	r2, r5
        2c6e20:	e1a01006 	mov	r1, r6
        2c6e24:	eb5e4b96 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6e28:	e59d0000 	ldr	r0, [sp]
        2c6e2c:	eb63f0e2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6e30:	e2888001 	add	r8, r8, #1	; 0x1
        2c6e34:	e158000a 	cmp	r8, sl
        2c6e38:	baffffef 	blt	2c6dfc <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x5a4>
        2c6e3c:	ea000093 	b	2c7090 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x838>
        2c6e40:	e59d000c 	ldr	r0, [sp, #12]
        2c6e44:	e5900000 	ldr	r0, [r0]
        2c6e48:	eb63f917 	bl	1bc52ac <$Length(long)>
        2c6e4c:	e1a0a000 	mov	sl, r0
        2c6e50:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c6e54:	e3a08000 	mov	r8, #0	; 0x0
        2c6e58:	e3500000 	cmp	r0, #0	; 0x0
        2c6e5c:	da00000f 	ble	2c6ea0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x648>
        2c6e60:	e59d0010 	ldr	r0, [sp, #16]
        2c6e64:	e5900000 	ldr	r0, [r0]
        2c6e68:	e1a01008 	mov	r1, r8
        2c6e6c:	eb63f4f8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6e70:	eb63ecb5 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6e74:	e58d0000 	str	r0, [sp]
        2c6e78:	e1a0000d 	mov	r0, sp
        2c6e7c:	e1a03004 	mov	r3, r4
        2c6e80:	e1a02005 	mov	r2, r5
        2c6e84:	e1a01006 	mov	r1, r6
        2c6e88:	eb5e4b7d 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6e8c:	e59d0000 	ldr	r0, [sp]
        2c6e90:	eb63f0c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6e94:	e2888001 	add	r8, r8, #1	; 0x1
        2c6e98:	e158000a 	cmp	r8, sl
        2c6e9c:	baffffef 	blt	2c6e60 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x608>
        2c6ea0:	e1a03004 	mov	r3, r4
        2c6ea4:	e1a02005 	mov	r2, r5
        2c6ea8:	e1a01006 	mov	r1, r6
        2c6eac:	e28d0014 	add	r0, sp, #20	; 0x14
        2c6eb0:	ea00005c 	b	2c7028 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x7d0>
        2c6eb4:	e59d000c 	ldr	r0, [sp, #12]
        2c6eb8:	e5900000 	ldr	r0, [r0]
        2c6ebc:	e1a01008 	mov	r1, r8
        2c6ec0:	eb63f4e3 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6ec4:	eb63eca0 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6ec8:	e58d0000 	str	r0, [sp]
        2c6ecc:	e1a0000d 	mov	r0, sp
        2c6ed0:	e1a03004 	mov	r3, r4
        2c6ed4:	e1a02005 	mov	r2, r5
        2c6ed8:	e1a01006 	mov	r1, r6
        2c6edc:	eb5e4b68 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6ee0:	e59d0000 	ldr	r0, [sp]
        2c6ee4:	eb63f0b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c6ee8:	e2888001 	add	r8, r8, #1	; 0x1
        2c6eec:	e158000a 	cmp	r8, sl
        2c6ef0:	baffffef 	blt	2c6eb4 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x65c>
        2c6ef4:	e59d0010 	ldr	r0, [sp, #16]
        2c6ef8:	e5900000 	ldr	r0, [r0]
        2c6efc:	e3300002 	teq	r0, #2	; 0x2
        2c6f00:	0a000062 	beq	2c7090 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x838>
        2c6f04:	ea000043 	b	2c7018 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x7c0>
        2c6f08:	e1a03004 	mov	r3, r4
        2c6f0c:	e1a02005 	mov	r2, r5
        2c6f10:	e1a01006 	mov	r1, r6
        2c6f14:	e28d0010 	add	r0, sp, #16	; 0x10
        2c6f18:	eb5e4b59 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6f1c:	e1a03004 	mov	r3, r4
        2c6f20:	e1a02005 	mov	r2, r5
        2c6f24:	e1a01006 	mov	r1, r6
        2c6f28:	e28d000c 	add	r0, sp, #12	; 0xc
        2c6f2c:	eb5e4b54 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6f30:	e59d0008 	ldr	r0, [sp, #8]
        2c6f34:	e5900000 	ldr	r0, [r0]
        2c6f38:	e3300002 	teq	r0, #2	; 0x2
        2c6f3c:	0a000072 	beq	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6f40:	e1a03004 	mov	r3, r4
        2c6f44:	e1a02005 	mov	r2, r5
        2c6f48:	e1a01006 	mov	r1, r6
        2c6f4c:	e28d0008 	add	r0, sp, #8	; 0x8
        2c6f50:	ea000012 	b	2c6fa0 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x748>
        2c6f54:	e1a03004 	mov	r3, r4
        2c6f58:	e1a02005 	mov	r2, r5
        2c6f5c:	e1a01006 	mov	r1, r6
        2c6f60:	e28d000c 	add	r0, sp, #12	; 0xc
        2c6f64:	eb5e4b46 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6f68:	e1a03004 	mov	r3, r4
        2c6f6c:	e1a02005 	mov	r2, r5
        2c6f70:	e1a01006 	mov	r1, r6
        2c6f74:	e28d0008 	add	r0, sp, #8	; 0x8
        2c6f78:	eb5e4b41 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6f7c:	e1a03004 	mov	r3, r4
        2c6f80:	e1a02005 	mov	r2, r5
        2c6f84:	e1a01006 	mov	r1, r6
        2c6f88:	e28d0004 	add	r0, sp, #4	; 0x4
        2c6f8c:	eb5e4b3c 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6f90:	e1a03004 	mov	r3, r4
        2c6f94:	e1a02005 	mov	r2, r5
        2c6f98:	e1a01006 	mov	r1, r6
        2c6f9c:	e1a0000d 	mov	r0, sp
        2c6fa0:	eb5e4b37 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6fa4:	ea000058 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c6fa8:	e1a03004 	mov	r3, r4
        2c6fac:	e1a02005 	mov	r2, r5
        2c6fb0:	e1a01006 	mov	r1, r6
        2c6fb4:	e28d000c 	add	r0, sp, #12	; 0xc
        2c6fb8:	eb5e4b31 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6fbc:	eaffffdf 	b	2c6f40 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x6e8>
        2c6fc0:	e1a03004 	mov	r3, r4
        2c6fc4:	e1a02005 	mov	r2, r5
        2c6fc8:	e1a01006 	mov	r1, r6
        2c6fcc:	e28d0010 	add	r0, sp, #16	; 0x10
        2c6fd0:	eb5e4b2b 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c6fd4:	eaffff21 	b	2c6c60 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x408>
        2c6fd8:	e59d0014 	ldr	r0, [sp, #20]
        2c6fdc:	e5900000 	ldr	r0, [r0]
        2c6fe0:	e1a01008 	mov	r1, r8
        2c6fe4:	eb63f49a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c6fe8:	eb63ec57 	bl	1bc214c <$AllocateRefHandle(long)>
        2c6fec:	e58d0000 	str	r0, [sp]
        2c6ff0:	e1a0000d 	mov	r0, sp
        2c6ff4:	e1a03004 	mov	r3, r4
        2c6ff8:	e1a02005 	mov	r2, r5
        2c6ffc:	e1a01006 	mov	r1, r6
        2c7000:	eb5e4b1f 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c7004:	e59d0000 	ldr	r0, [sp]
        2c7008:	eb63f06b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c700c:	e2888001 	add	r8, r8, #1	; 0x1
        2c7010:	e158000a 	cmp	r8, sl
        2c7014:	baffffef 	blt	2c6fd8 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x780>
        2c7018:	e1a03004 	mov	r3, r4
        2c701c:	e1a02005 	mov	r2, r5
        2c7020:	e1a01006 	mov	r1, r6
        2c7024:	e28d0010 	add	r0, sp, #16	; 0x10
        2c7028:	eb5e4b15 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c702c:	ea000017 	b	2c7090 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x838>
        2c7030:	e59d0010 	ldr	r0, [sp, #16]
        2c7034:	e5900000 	ldr	r0, [r0]
        2c7038:	eb63f89b 	bl	1bc52ac <$Length(long)>
        2c703c:	e1a0a000 	mov	sl, r0
        2c7040:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c7044:	e3a08000 	mov	r8, #0	; 0x0
        2c7048:	e3500000 	cmp	r0, #0	; 0x0
        2c704c:	da00000f 	ble	2c7090 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x838>
        2c7050:	e59d0014 	ldr	r0, [sp, #20]
        2c7054:	e5900000 	ldr	r0, [r0]
        2c7058:	e1a01008 	mov	r1, r8
        2c705c:	eb63f47c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c7060:	eb63ec39 	bl	1bc214c <$AllocateRefHandle(long)>
        2c7064:	e58d0000 	str	r0, [sp]
        2c7068:	e1a0000d 	mov	r0, sp
        2c706c:	e1a03004 	mov	r3, r4
        2c7070:	e1a02005 	mov	r2, r5
        2c7074:	e1a01006 	mov	r1, r6
        2c7078:	eb5e4b01 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c707c:	e59d0000 	ldr	r0, [sp]
        2c7080:	eb63f04d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c7084:	e2888001 	add	r8, r8, #1	; 0x1
        2c7088:	e158000a 	cmp	r8, sl
        2c708c:	baffffef 	blt	2c7050 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x7f8>
        2c7090:	e28dd004 	add	sp, sp, #4	; 0x4
        2c7094:	ea00001c 	b	2c710c <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8b4>
        2c7098:	e59d0010 	ldr	r0, [sp, #16]
        2c709c:	e5900000 	ldr	r0, [r0]
        2c70a0:	eb63f881 	bl	1bc52ac <$Length(long)>
        2c70a4:	e24dd030 	sub	sp, sp, #48	; 0x30
        2c70a8:	e28d1040 	add	r1, sp, #64	; 0x40
        2c70ac:	e1a0000d 	mov	r0, sp
        2c70b0:	e3a02000 	mov	r2, #0	; 0x0
        2c70b4:	eb63e80d 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
        2c70b8:	e1a0000d 	mov	r0, sp
        2c70bc:	eb63f046 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2c70c0:	e28d8008 	add	r8, sp, #8	; 0x8
        2c70c4:	e3300000 	teq	r0, #0	; 0x0
        2c70c8:	1a00000a 	bne	2c70f8 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8a0>
        2c70cc:	e1a00008 	mov	r0, r8
        2c70d0:	e1a03004 	mov	r3, r4
        2c70d4:	e1a02005 	mov	r2, r5
        2c70d8:	e1a01006 	mov	r1, r6
        2c70dc:	eb5e4ae8 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c70e0:	e1a0000d 	mov	r0, sp
        2c70e4:	eb63f87f 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        2c70e8:	e1a0000d 	mov	r0, sp
        2c70ec:	eb63f03a 	bl	1bc31dc <TObjectIterator::$Done(void)>
        2c70f0:	e3300000 	teq	r0, #0	; 0x0
        2c70f4:	0afffff4 	beq	2c70cc <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x874>
        2c70f8:	e1a0000d 	mov	r0, sp
        2c70fc:	e3a01000 	mov	r1, #0	; 0x0
        2c7100:	e1a0e00f 	mov	lr, pc
        2c7104:	e59df000 	ldr	pc, [sp]
        2c7108:	e28dd030 	add	sp, sp, #48	; 0x30
        2c710c:	e3340000 	teq	r4, #0	; 0x0
        2c7110:	0a00000b 	beq	2c7144 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x8ec>
        2c7114:	e1a0300d 	mov	r3, sp
        2c7118:	e28d2004 	add	r2, sp, #4	; 0x4
        2c711c:	e28d1008 	add	r1, sp, #8	; 0x8
        2c7120:	e28d000c 	add	r0, sp, #12	; 0xc
        2c7124:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2c7128:	e28d3020 	add	r3, sp, #32	; 0x20
        2c712c:	e1a02009 	mov	r2, r9
        2c7130:	e1a01007 	mov	r1, r7
        2c7134:	e1a00006 	mov	r0, r6
        2c7138:	e1a0e00f 	mov	lr, pc
        2c713c:	e1a0f005 	mov	pc, r5
        2c7140:	e28dd010 	add	sp, sp, #16	; 0x10
        2c7144:	e59d0000 	ldr	r0, [sp]
        2c7148:	eb63f01b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c714c:	e59d0004 	ldr	r0, [sp, #4]
        2c7150:	eb63f019 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c7154:	e59d0008 	ldr	r0, [sp, #8]
        2c7158:	eb63f017 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c715c:	e59d000c 	ldr	r0, [sp, #12]
        2c7160:	eb63f015 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c7164:	e59d0010 	ldr	r0, [sp, #16]
        2c7168:	eb63f013 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c716c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2c7170:	e1a03004 	mov	r3, r4
        2c7174:	e1a02005 	mov	r2, r5
        2c7178:	e1a01006 	mov	r1, r6
        2c717c:	e28d0010 	add	r0, sp, #16	; 0x10
        2c7180:	eb5e4abf 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c7184:	e24dd004 	sub	sp, sp, #4	; 0x4
        2c7188:	e59d0010 	ldr	r0, [sp, #16]
        2c718c:	e5900000 	ldr	r0, [r0]
        2c7190:	eb63f845 	bl	1bc52ac <$Length(long)>
        2c7194:	e3a08000 	mov	r8, #0	; 0x0
        2c7198:	e40d0004 	str	r0, [sp], -#4
        2c719c:	e59d0004 	ldr	r0, [sp, #4]
        2c71a0:	e3500000 	cmp	r0, #0	; 0x0
        2c71a4:	da000017 	ble	2c7208 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x9b0>
        2c71a8:	e59d0014 	ldr	r0, [sp, #20]
        2c71ac:	e5900000 	ldr	r0, [r0]
        2c71b0:	e1a01008 	mov	r1, r8
        2c71b4:	eb63f426 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c71b8:	eb63ebe3 	bl	1bc214c <$AllocateRefHandle(long)>
        2c71bc:	e1a0a000 	mov	sl, r0
        2c71c0:	e5900000 	ldr	r0, [r0]
        2c71c4:	e3a01002 	mov	r1, #2	; 0x2
        2c71c8:	eb63f421 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2c71cc:	eb63ebde 	bl	1bc214c <$AllocateRefHandle(long)>
        2c71d0:	e58d0000 	str	r0, [sp]
        2c71d4:	e1a0000d 	mov	r0, sp
        2c71d8:	e1a03004 	mov	r3, r4
        2c71dc:	e1a02005 	mov	r2, r5
        2c71e0:	e1a01006 	mov	r1, r6
        2c71e4:	eb5e4aa6 	bl	1a59c84 <$WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii>
        2c71e8:	e59d0000 	ldr	r0, [sp]
        2c71ec:	eb63eff2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c71f0:	e1a0000a 	mov	r0, sl
        2c71f4:	eb63eff0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2c71f8:	e2888001 	add	r8, r8, #1	; 0x1
        2c71fc:	e59d0004 	ldr	r0, [sp, #4]
        2c7200:	e1580000 	cmp	r8, r0
        2c7204:	baffffe7 	blt	2c71a8 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x950>
        2c7208:	e28dd004 	add	sp, sp, #4	; 0x4
        2c720c:	eaffff9f 	b	2c7090 <WalkNodes__FRC6RefVarPvPFPvRC6RefVarlN52_ii+0x838>
    */
}

/**
 * Symbol: WordsValidTestTextProc(unsigned short *, long, void *)
 * Address: 002ce918
 */
WordsValidTestTextProc(unsigned short *, long, void *) {
    /*
        2ce918:	e1a0c00d 	mov	ip, sp
        2ce91c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2ce920:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ce924:	e1a05000 	mov	r5, r0
        2ce928:	e1a04001 	mov	r4, r1
        2ce92c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ce930:	e1a08002 	mov	r8, r2
        2ce934:	e5920000 	ldr	r0, [r2]
        2ce938:	e5900000 	ldr	r0, [r0]
        2ce93c:	eb63da5a 	bl	1bc52ac <$Length(long)>
        2ce940:	e1a06000 	mov	r6, r0
        2ce944:	e3a00002 	mov	r0, #2	; 0x2
        2ce948:	eb63cdff 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce94c:	e2566001 	subs	r6, r6, #1	; 0x1
        2ce950:	e58d0000 	str	r0, [sp]
        2ce954:	4a000028 	bmi	2ce9fc <WordsValidTestTextProc(unsigned short *, long, void *)+0xe4>
        2ce958:	e5980000 	ldr	r0, [r8]
        2ce95c:	e5900000 	ldr	r0, [r0]
        2ce960:	e1a01006 	mov	r1, r6
        2ce964:	eb63d63a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2ce968:	e59d1000 	ldr	r1, [sp]
        2ce96c:	e5810000 	str	r0, [r1]
        2ce970:	e1a0000d 	mov	r0, sp
        2ce974:	eb63d202 	bl	1bc3184 <$GetCString(RefVar const &)>
        2ce978:	e1a02000 	mov	r2, r0
        2ce97c:	e1a09000 	mov	r9, r0
        2ce980:	e1a01004 	mov	r1, r4
        2ce984:	e1a00005 	mov	r0, r5
        2ce988:	e3a03001 	mov	r3, #1	; 0x1
        2ce98c:	eb638fe7 	bl	1bb2930 <$FindWord(unsigned short *, long, long, unsigned char)>
        2ce990:	e1b07000 	movs	r7, r0
        2ce994:	0a000018 	beq	2ce9fc <WordsValidTestTextProc(unsigned short *, long, void *)+0xe4>
        2ce998:	e5980004 	ldr	r0, [r8, #4]
        2ce99c:	e3300000 	teq	r0, #0	; 0x0
        2ce9a0:	0a000013 	beq	2ce9f4 <WordsValidTestTextProc(unsigned short *, long, void *)+0xdc>
        2ce9a4:	e1a00009 	mov	r0, r9
        2ce9a8:	eb647f6c 	bl	1bee760 <$Ustrlen>
        2ce9ac:	e0877080 	add	r7, r7, r0, lsl #1
        2ce9b0:	e5970000 	ldr	r0, [r7]
        2ce9b4:	e1a00820 	mov	r0, r0, lsr #16
        2ce9b8:	eb646eda 	bl	1bea528 <$IsDelimiter(unsigned short)>
        2ce9bc:	e3300000 	teq	r0, #0	; 0x0
        2ce9c0:	1a000009 	bne	2ce9ec <WordsValidTestTextProc(unsigned short *, long, void *)+0xd4>
        2ce9c4:	e0470005 	sub	r0, r7, r5
        2ce9c8:	e0800fa0 	add	r0, r0, r0, lsr #31
        2ce9cc:	e04410c0 	sub	r1, r4, r0, asr #1
        2ce9d0:	e1a02009 	mov	r2, r9
        2ce9d4:	e1a00007 	mov	r0, r7
        2ce9d8:	e3a03000 	mov	r3, #0	; 0x0
        2ce9dc:	eb638fd3 	bl	1bb2930 <$FindWord(unsigned short *, long, long, unsigned char)>
        2ce9e0:	e1b07000 	movs	r7, r0
        2ce9e4:	1affffee 	bne	2ce9a4 <WordsValidTestTextProc(unsigned short *, long, void *)+0x8c>
        2ce9e8:	ea000003 	b	2ce9fc <WordsValidTestTextProc(unsigned short *, long, void *)+0xe4>
        2ce9ec:	e3370000 	teq	r7, #0	; 0x0
        2ce9f0:	0a000001 	beq	2ce9fc <WordsValidTestTextProc(unsigned short *, long, void *)+0xe4>
        2ce9f4:	e2566001 	subs	r6, r6, #1	; 0x1
        2ce9f8:	5affffd6 	bpl	2ce958 <WordsValidTestTextProc(unsigned short *, long, void *)+0x40>
        2ce9fc:	e3560000 	cmp	r6, #0	; 0x0
        2cea00:	a3a00000 	movge	r0, #0	; 0x0
        2cea04:	b3a00001 	movlt	r0, #1	; 0x1
        2cea08:	e20040ff 	and	r4, r0, #255	; 0xff
        2cea0c:	e59d0000 	ldr	r0, [sp]
        2cea10:	eb63d1e9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cea14:	e1a00004 	mov	r0, r4
        2cea18:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: WriteReference(char *, long)
 * Address: 002dd744
 */
WriteReference(char *, long) {
    /*
        2dd744:	e1a0c00d 	mov	ip, sp
        2dd748:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        2dd74c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd750:	e51b1014 	ldr	r1, [fp, -#20]
        2dd754:	e55b000d 	ldrb	r0, [fp, -#13]
        2dd758:	e5c10002 	strb	r0, [r1, #2]
        2dd75c:	e55b000e 	ldrb	r0, [fp, -#14]
        2dd760:	e5c10001 	strb	r0, [r1, #1]
        2dd764:	e55b000f 	ldrb	r0, [fp, -#15]
        2dd768:	e5c10000 	strb	r0, [r1]
        2dd76c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: WriteReference(TStoreWritePipe &, long)
 * Address: 002dd770
 */
WriteReference(TStoreWritePipe &, long) {
    /*
        2dd770:	e1a0c00d 	mov	ip, sp
        2dd774:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        2dd778:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd77c:	e24b100f 	sub	r1, fp, #15	; 0xf
        2dd780:	e3a02003 	mov	r2, #3	; 0x3
        2dd784:	e51b0014 	ldr	r0, [fp, -#20]
        2dd788:	eb5d9ec2 	bl	1a45298 <TStoreWritePipe::$Write(char *, long)>
        2dd78c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)
 * Address: 002e0008
 */
WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **) {
    /*
        2e0008:	e1a0c00d 	mov	ip, sp
        2e000c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e0010:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e0014:	e1a04000 	mov	r4, r0
        2e0018:	e1a07001 	mov	r7, r1
        2e001c:	e1a06002 	mov	r6, r2
        2e0020:	e1a05003 	mov	r5, r3
        2e0024:	e59b9004 	ldr	r9, [fp, #4]
        2e0028:	e24dd010 	sub	sp, sp, #16	; 0x10
        2e002c:	e3a08000 	mov	r8, #0	; 0x0
        2e0030:	e3a03010 	mov	r3, #16	; 0x10
        2e0034:	e92d0008 	stmdb	sp!, {r3}
        2e0038:	e590007c 	ldr	r0, [r0, #124]
        2e003c:	e28d3004 	add	r3, sp, #4	; 0x4
        2e0040:	e3a02000 	mov	r2, #0	; 0x0
        2e0044:	e1a01007 	mov	r1, r7
        2e0048:	eb60883c 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2e004c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e0050:	e3300000 	teq	r0, #0	; 0x0
        2e0054:	1b5d7373 	blne	1a3ce28 <$_OSErr(long)>
        2e0058:	e59d0008 	ldr	r0, [sp, #8]
        2e005c:	e3300000 	teq	r0, #0	; 0x0
        2e0060:	0a00002d 	beq	2e011c <WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)+0x114>
        2e0064:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e0068:	e59d0012 	ldr	r0, [sp, #18]
        2e006c:	e1a00820 	mov	r0, r0, lsr #16
        2e0070:	e1a0a0a0 	mov	sl, r0, lsr #1
        2e0074:	e5998000 	ldr	r8, [r9]
        2e0078:	e3380000 	teq	r8, #0	; 0x0
        2e007c:	1a00000a 	bne	2e00ac <WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)+0xa4>
        2e0080:	e3a00000 	mov	r0, #0	; 0x0
        2e0084:	eb5da920 	bl	1a4a50c <TObjTextDecompressor::$__ct(void)>
        2e0088:	e1b08000 	movs	r8, r0
        2e008c:	1a000005 	bne	2e00a8 <WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)+0xa0>
        2e0090:	e59f0108 	ldr	r0, [pc, #108]	; 2e01a0 <WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)+0x198>
        2e0094:	e5900000 	ldr	r0, [r0]
        2e0098:	e3a02000 	mov	r2, #0	; 0x0
        2e009c:	e3a010e9 	mov	r1, #233	; 0xe9
        2e00a0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2e00a4:	eb640c3c 	bl	1be319c <$Throw>
        2e00a8:	e5898000 	str	r8, [r9]
        2e00ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e00b0:	e59d0016 	ldr	r0, [sp, #22]
        2e00b4:	e1a00820 	mov	r0, r0, lsr #16
        2e00b8:	e58d0000 	str	r0, [sp]
        2e00bc:	e59d2010 	ldr	r2, [sp, #16]
        2e00c0:	e1a0300d 	mov	r3, sp
        2e00c4:	e1a01004 	mov	r1, r4
        2e00c8:	e1a00008 	mov	r0, r8
        2e00cc:	eb5da912 	bl	1a4a51c <TObjTextDecompressor::$Decompress(TStoreWrapper *, unsigned long, long *)>
        2e00d0:	e1a09000 	mov	r9, r0
        2e00d4:	e5b80bbc 	ldr	r0, [r8, #3004]!
        2e00d8:	e0500009 	subs	r0, r0, r9
        2e00dc:	13a00001 	movne	r0, #1	; 0x1
        2e00e0:	e20000ff 	and	r0, r0, #255	; 0xff
        2e00e4:	e1a02005 	mov	r2, r5
        2e00e8:	e1a0100a 	mov	r1, sl
        2e00ec:	e58d0004 	str	r0, [sp, #4]
        2e00f0:	e1a00009 	mov	r0, r9
        2e00f4:	e1a0e00f 	mov	lr, pc
        2e00f8:	e1a0f006 	mov	pc, r6
        2e00fc:	e1a08000 	mov	r8, r0
        2e0100:	e59d0004 	ldr	r0, [sp, #4]
        2e0104:	e3300000 	teq	r0, #0	; 0x0
        2e0108:	11a00009 	movne	r0, r9
        2e010c:	1b63b573 	blne	1bcd6e0 <$__dl(void *)>
        2e0110:	e28dd008 	add	sp, sp, #8	; 0x8
        2e0114:	e3380000 	teq	r8, #0	; 0x0
        2e0118:	1a000028 	bne	2e01c0 <WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)+0x1b8>
        2e011c:	e5dd000d 	ldrb	r0, [sp, #13]
        2e0120:	e3100004 	tst	r0, #4	; 0x4
        2e0124:	0a000025 	beq	2e01c0 <WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)+0x1b8>
        2e0128:	e24ddf96 	sub	sp, sp, #600	; 0x258
        2e012c:	e1a02007 	mov	r2, r7
        2e0130:	e1a01004 	mov	r1, r4
        2e0134:	e1a0000d 	mov	r0, sp
        2e0138:	e3a03000 	mov	r3, #0	; 0x0
        2e013c:	eb5d6f27 	bl	1a3bde0 <TStoreObjectReader::$__ct(TStoreWrapper *, unsigned long, CDynamicArray **)>
        2e0140:	e3a02000 	mov	r2, #0	; 0x0
        2e0144:	e52d206c 	str	r2, [sp, -#108]!
        2e0148:	e28d0008 	add	r0, sp, #8	; 0x8
        2e014c:	eb634a08 	bl	1bb2974 <$setjmp>
        2e0150:	e3300000 	teq	r0, #0	; 0x0
        2e0154:	1a000013 	bne	2e01a8 <WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)+0x1a0>
        2e0158:	e1a0000d 	mov	r0, sp
        2e015c:	eb63ffc6 	bl	1be007c <$AddExceptionHandler>
        2e0160:	e52d5004 	str	r5, [sp, -#4]!
        2e0164:	e52d6004 	str	r6, [sp, -#4]!
        2e0168:	e1a0200d 	mov	r2, sp
        2e016c:	e59f1030 	ldr	r1, [pc, #30]	; 2e01a4 <WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)+0x19c>
        2e0170:	e28d0074 	add	r0, sp, #116	; 0x74
        2e0174:	eb5da4de 	bl	1a494f4 <TStoreObjectReader::$EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)>
        2e0178:	e1a04000 	mov	r4, r0
        2e017c:	e28dd008 	add	sp, sp, #8	; 0x8
        2e0180:	e1a0000d 	mov	r0, sp
        2e0184:	eb6403cb 	bl	1be10b8 <$ExitHandler>
        2e0188:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e018c:	e1a0000d 	mov	r0, sp
        2e0190:	e3a01000 	mov	r1, #0	; 0x0
        2e0194:	eb5d731c 	bl	1a3ce0c <TStoreObjectReader::$__dt(void)>
        2e0198:	e1a00004 	mov	r0, r4
        2e019c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e01a0:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2e01a4:	01a4a520 	moveq	sl, r0, lsr #10
        2e01a8:	e28d006c 	add	r0, sp, #108	; 0x6c
        2e01ac:	e3a01000 	mov	r1, #0	; 0x0
        2e01b0:	eb5d7315 	bl	1a3ce0c <TStoreObjectReader::$__dt(void)>
        2e01b4:	e1a0000d 	mov	r0, sp
        2e01b8:	eb6407e5 	bl	1be2154 <$NextHandler>
        2e01bc:	eafffff9 	b	2e01a8 <WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)+0x1a0>
        2e01c0:	e1a00008 	mov	r0, r8
        2e01c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: WriteFaultBlock(RefVar const &)
 * Address: 002e027c
 */
WriteFaultBlock(RefVar const &) {
    /*
        2e027c:	e1a0c00d 	mov	ip, sp
        2e0280:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e0284:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e0288:	e1a04000 	mov	r4, r0
        2e028c:	e5900000 	ldr	r0, [r0]
        2e0290:	e5900000 	ldr	r0, [r0]
        2e0294:	eb6393fb 	bl	1bc5288 <$IsFaultBlock(long)>
        2e0298:	e3300000 	teq	r0, #0	; 0x0
        2e029c:	1a000005 	bne	2e02b8 <WriteFaultBlock(RefVar const &)+0x3c>
        2e02a0:	e3a01078 	mov	r1, #120	; 0x78
        2e02a4:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        2e02a8:	e59f00d0 	ldr	r0, [pc, #d0]	; 2e0380 <WriteFaultBlock(RefVar const &)+0x104>
        2e02ac:	e5900000 	ldr	r0, [r0]
        2e02b0:	e3a02000 	mov	r2, #0	; 0x0
        2e02b4:	eb640bb8 	bl	1be319c <$Throw>
        2e02b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e02bc:	e3a00002 	mov	r0, #2	; 0x2
        2e02c0:	eb6387a1 	bl	1bc214c <$AllocateRefHandle(long)>
        2e02c4:	e58d0000 	str	r0, [sp]
        2e02c8:	e5940000 	ldr	r0, [r4]
        2e02cc:	e5900000 	ldr	r0, [r0]
        2e02d0:	eb5d878e 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2e02d4:	e5901018 	ldr	r1, [r0, #24]
        2e02d8:	e59d2000 	ldr	r2, [sp]
        2e02dc:	e3a05000 	mov	r5, #0	; 0x0
        2e02e0:	e5821000 	str	r1, [r2]
        2e02e4:	e3310002 	teq	r1, #2	; 0x2
        2e02e8:	0a000021 	beq	2e0374 <WriteFaultBlock(RefVar const &)+0xf8>
        2e02ec:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e02f0:	e5904010 	ldr	r4, [r0, #16]
        2e02f4:	e5900014 	ldr	r0, [r0, #20]
        2e02f8:	e3100003 	tst	r0, #3	; 0x3
        2e02fc:	01a00140 	moveq	r0, r0, asr #2
        2e0300:	0a000000 	beq	2e0308 <WriteFaultBlock(RefVar const &)+0x8c>
        2e0304:	eb638784 	bl	1bc211c <$_RINTError(long)>
        2e0308:	e58d0000 	str	r0, [sp]
        2e030c:	e1a00004 	mov	r0, r4
        2e0310:	eb5dc14c 	bl	1a50848 <TStoreWrapper::$LockStore(void)>
        2e0314:	e3300000 	teq	r0, #0	; 0x0
        2e0318:	1b5d72c2 	blne	1a3ce28 <$_OSErr(long)>
        2e031c:	e52d506c 	str	r5, [sp, -#108]!
        2e0320:	e28d0008 	add	r0, sp, #8	; 0x8
        2e0324:	eb634992 	bl	1bb2974 <$setjmp>
        2e0328:	e3300000 	teq	r0, #0	; 0x0
        2e032c:	1a000014 	bne	2e0384 <WriteFaultBlock(RefVar const &)+0x108>
        2e0330:	e1a0000d 	mov	r0, sp
        2e0334:	eb63ff50 	bl	1be007c <$AddExceptionHandler>
        2e0338:	e3a03000 	mov	r3, #0	; 0x0
        2e033c:	e92d0008 	stmdb	sp!, {r3}
        2e0340:	e28d2070 	add	r2, sp, #112	; 0x70
        2e0344:	e1a01004 	mov	r1, r4
        2e0348:	e28d0074 	add	r0, sp, #116	; 0x74
        2e034c:	eb5da86c 	bl	1a4a504 <$StorePermObject(RefVar const &, TStoreWrapper *, unsigned long &, CDynamicArray *, unsigned char *)>
        2e0350:	e28dd004 	add	sp, sp, #4	; 0x4
        2e0354:	e1a0000d 	mov	r0, sp
        2e0358:	eb640356 	bl	1be10b8 <$ExitHandler>
        2e035c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e0360:	e1a00004 	mov	r0, r4
        2e0364:	eb5dc547 	bl	1a51888 <TStoreWrapper::$UnlockStore(void)>
        2e0368:	e3300000 	teq	r0, #0	; 0x0
        2e036c:	1b5d72ad 	blne	1a3ce28 <$_OSErr(long)>
        2e0370:	e28dd004 	add	sp, sp, #4	; 0x4
        2e0374:	e59d0000 	ldr	r0, [sp]
        2e0378:	eb638b8f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2e037c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2e0380:	003712fc 	ldreqsh	r1, [r7], -ip
        2e0384:	e1a00004 	mov	r0, r4
        2e0388:	eb5dbd12 	bl	1a4f7d8 <TStoreWrapper::$Abort(void)>
        2e038c:	e3300000 	teq	r0, #0	; 0x0
        2e0390:	1b5d72a4 	blne	1a3ce28 <$_OSErr(long)>
        2e0394:	e1a0000d 	mov	r0, sp
        2e0398:	eb64076d 	bl	1be2154 <$NextHandler>
        2e039c:	eafffff8 	b	2e0384 <WriteFaultBlock(RefVar const &)+0x108>
    */
}

/**
 * Symbol: WrapPackage(unsigned long, TStore *)
 * Address: 0032180c
 */
WrapPackage(unsigned long, TStore *) {
    /*
        32180c:	e1a0c00d 	mov	ip, sp
        321810:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        321814:	e24cb004 	sub	fp, ip, #4	; 0x4
        321818:	e1a05000 	mov	r5, r0
        32181c:	e1a04001 	mov	r4, r1
        321820:	e24dd004 	sub	sp, sp, #4	; 0x4
        321824:	e3a00002 	mov	r0, #2	; 0x2
        321828:	eb628247 	bl	1bc214c <$AllocateRefHandle(long)>
        32182c:	e1a06000 	mov	r6, r0
        321830:	e3a00000 	mov	r0, #0	; 0x0
        321834:	e1a02005 	mov	r2, r5
        321838:	e1a01004 	mov	r1, r4
        32183c:	e58d0000 	str	r0, [sp]
        321840:	e1a0000d 	mov	r0, sp
        321844:	e3a03001 	mov	r3, #1	; 0x1
        321848:	eb5fc86a 	bl	1b139f8 <$MapLargeObject(unsigned long *, TStore *, unsigned long, unsigned char)>
        32184c:	e1b07000 	movs	r7, r0
        321850:	e3a01000 	mov	r1, #0	; 0x0
        321854:	1a000012 	bne	3218a4 <WrapPackage(unsigned long, TStore *)+0x98>
        321858:	e52d106c 	str	r1, [sp, -#108]!
        32185c:	e28d0008 	add	r0, sp, #8	; 0x8
        321860:	eb624443 	bl	1bb2974 <$setjmp>
        321864:	e3300000 	teq	r0, #0	; 0x0
        321868:	1a000009 	bne	321894 <WrapPackage(unsigned long, TStore *)+0x88>
        32186c:	e1a0000d 	mov	r0, sp
        321870:	eb62fa01 	bl	1be007c <$AddExceptionHandler>
        321874:	e1a02005 	mov	r2, r5
        321878:	e59d306c 	ldr	r3, [sp, #108]
        32187c:	e59f100c 	ldr	r1, [pc, #c]	; 321890 <WrapPackage(unsigned long, TStore *)+0x84>
        321880:	e1a00004 	mov	r0, r4
        321884:	eb5c8e9a 	bl	1a452f4 <$WrapLargeObject>
        321888:	e5860000 	str	r0, [r6]
        32188c:	ea000001 	b	321898 <WrapPackage(unsigned long, TStore *)+0x8c>
        321890:	00683c18 	rsbeq	r3, r8, r8, lsl ip
        321894:	e59d7064 	ldr	r7, [sp, #100]
        321898:	e1a0000d 	mov	r0, sp
        32189c:	eb62fe05 	bl	1be10b8 <$ExitHandler>
        3218a0:	e28dd06c 	add	sp, sp, #108	; 0x6c
        3218a4:	e3370000 	teq	r7, #0	; 0x0
        3218a8:	0a00000b 	beq	3218dc <WrapPackage(unsigned long, TStore *)+0xd0>
        3218ac:	e5960000 	ldr	r0, [r6]
        3218b0:	e3300002 	teq	r0, #2	; 0x2
        3218b4:	01a01005 	moveq	r1, r5
        3218b8:	01a00004 	moveq	r0, r4
        3218bc:	0b5fa746 	bleq	1b0b5dc <$AbortObject(TStore *, unsigned long)>
        3218c0:	e3370000 	teq	r7, #0	; 0x0
        3218c4:	0a000004 	beq	3218dc <WrapPackage(unsigned long, TStore *)+0xd0>
        3218c8:	e1a01007 	mov	r1, r7
        3218cc:	e59f001c 	ldr	r0, [pc, #1c]	; 3218f0 <WrapPackage(unsigned long, TStore *)+0xe4>
        3218d0:	e5900000 	ldr	r0, [r0]
        3218d4:	e3a02000 	mov	r2, #0	; 0x0
        3218d8:	eb63062f 	bl	1be319c <$Throw>
        3218dc:	e5964000 	ldr	r4, [r6]
        3218e0:	e1a00006 	mov	r0, r6
        3218e4:	eb628634 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        3218e8:	e1a00004 	mov	r0, r4
        3218ec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        3218f0:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

/**
 * Symbol: whiteCompleteTbl
 * Address: 00378128
 */
void globals::whiteCompleteTbl() {
    /*
        378128:	000800ac 	andeq	r0, r8, ip, lsr #1
        37812c:	00060038 	andeq	r0, r6, r8, lsr r0
        378130:	0004000e 	andeq	r0, r4, lr
        378134:	00040001 	andeq	r0, r4, r1
        378138:	0004000d 	andeq	r0, r4, sp
        37813c:	00040003 	andeq	r0, r4, r3
        378140:	00040007 	andeq	r0, r4, r7
        378144:	0004000f 	andeq	r0, r4, pc
        378148:	00050019 	andeq	r0, r5, r9, lsl r0
        37814c:	00050005 	andeq	r0, r5, r5
        378150:	0005001c 	andeq	r0, r5, ip, lsl r0
        378154:	00050002 	andeq	r0, r5, r2
        378158:	00060004 	andeq	r0, r6, r4
        37815c:	00060030 	andeq	r0, r6, r0, lsr r0
        378160:	0006000b 	andeq	r0, r6, fp
        378164:	0006002b 	andeq	r0, r6, fp, lsr #32
        378168:	00060015 	andeq	r0, r6, r5, lsl r0
        37816c:	00060035 	andeq	r0, r6, r5, lsr r0
        378170:	00070072 	andeq	r0, r7, r2, ror r0
        378174:	00070018 	andeq	r0, r7, r8, lsl r0
        378178:	00070008 	andeq	r0, r7, r8
        37817c:	00070074 	andeq	r0, r7, r4, ror r0
        378180:	00070060 	andeq	r0, r7, r0, rrx
        378184:	00070010 	andeq	r0, r7, r0, lsl r0
        378188:	0007000a 	andeq	r0, r7, sl
        37818c:	0007006a 	andeq	r0, r7, sl, rrx
        378190:	00070064 	andeq	r0, r7, r4, rrx
        378194:	00070012 	andeq	r0, r7, r2, lsl r0
        378198:	0007000c 	andeq	r0, r7, ip
        37819c:	00080040 	andeq	r0, r8, r0, asr #32
        3781a0:	000800c0 	andeq	r0, r8, r0, asr #1
        3781a4:	00080058 	andeq	r0, r8, r8, asr r0
        3781a8:	000800d8 	ldreqd	r0, [r8], -r8
        3781ac:	00080048 	andeq	r0, r8, r8, asr #32
        3781b0:	000800c8 	andeq	r0, r8, r8, asr #1
        3781b4:	00080028 	andeq	r0, r8, r8, lsr #32
        3781b8:	000800a8 	andeq	r0, r8, r8, lsr #1
        3781bc:	00080068 	andeq	r0, r8, r8, rrx
        3781c0:	000800e8 	andeq	r0, r8, r8, ror #1
        3781c4:	00080014 	andeq	r0, r8, r4, lsl r0
        3781c8:	00080094 	muleq	r8, r4, r0
        3781cc:	00080054 	andeq	r0, r8, r4, asr r0
        3781d0:	000800d4 	ldreqd	r0, [r8], -r4
        3781d4:	00080034 	andeq	r0, r8, r4, lsr r0
        3781d8:	000800b4 	streqh	r0, [r8], -r4
        3781dc:	00080020 	andeq	r0, r8, r0, lsr #32
        3781e0:	000800a0 	andeq	r0, r8, r0, lsr #1
        3781e4:	00080050 	andeq	r0, r8, r0, asr r0
        3781e8:	000800d0 	ldreqd	r0, [r8], -r0
        3781ec:	0008004a 	andeq	r0, r8, sl, asr #32
        3781f0:	000800ca 	andeq	r0, r8, sl, asr #1
        3781f4:	0008002a 	andeq	r0, r8, sl, lsr #32
        3781f8:	000800aa 	andeq	r0, r8, sl, lsr #1
        3781fc:	00080024 	andeq	r0, r8, r4, lsr #32
        378200:	000800a4 	andeq	r0, r8, r4, lsr #1
        378204:	0008001a 	andeq	r0, r8, sl, lsl r0
        378208:	0008009a 	muleq	r8, sl, r0
        37820c:	0008005a 	andeq	r0, r8, sl, asr r0
        378210:	000800da 	ldreqd	r0, [r8], -sl
        378214:	00080052 	andeq	r0, r8, r2, asr r0
        378218:	000800d2 	ldreqd	r0, [r8], -r2
        37821c:	0008004c 	andeq	r0, r8, ip, asr #32
        378220:	000800cc 	andeq	r0, r8, ip, asr #1
        378224:	0008002c 	andeq	r0, r8, ip, lsr #32
    */
}

/**
 * Symbol: whiteMakeupTbl
 * Address: 00378228
 */
void globals::whiteMakeupTbl() {
    /*
        378228:	00010000 	andeq	r0, r1, r0
        37822c:	0005001b 	andeq	r0, r5, fp, lsl r0
        378230:	00050009 	andeq	r0, r5, r9
        378234:	0006003a 	andeq	r0, r6, sl, lsr r0
        378238:	00070076 	andeq	r0, r7, r6, ror r0
        37823c:	0008006c 	andeq	r0, r8, ip, rrx
        378240:	000800ec 	andeq	r0, r8, ip, ror #1
        378244:	00080026 	andeq	r0, r8, r6, lsr #32
        378248:	000800a6 	andeq	r0, r8, r6, lsr #1
        37824c:	00080016 	andeq	r0, r8, r6, lsl r0
        378250:	000800e6 	andeq	r0, r8, r6, ror #1
        378254:	00090066 	andeq	r0, r9, r6, rrx
        378258:	00090166 	andeq	r0, r9, r6, ror #2
        37825c:	00090096 	muleq	r9, r6, r0
        378260:	00090196 	muleq	r9, r6, r1
        378264:	00090056 	andeq	r0, r9, r6, asr r0
        378268:	00090156 	andeq	r0, r9, r6, asr r1
        37826c:	000900d6 	ldreqd	r0, [r9], -r6
        378270:	000901d6 	ldreqd	r0, [r9], -r6
        378274:	00090036 	andeq	r0, r9, r6, lsr r0
        378278:	00090136 	andeq	r0, r9, r6, lsr r1
        37827c:	000900b6 	streqh	r0, [r9], -r6
        378280:	000901b6 	streqh	r0, [r9], -r6
        378284:	00090032 	andeq	r0, r9, r2, lsr r0
        378288:	00090132 	andeq	r0, r9, r2, lsr r1
        37828c:	000900b2 	streqh	r0, [r9], -r2
        378290:	00060006 	andeq	r0, r6, r6
        378294:	000901b2 	streqh	r0, [r9], -r2
        378298:	000c0800 	andeq	r0, ip, r0, lsl #16
    */
}

/**
 * Symbol: whitePatternData
 * Address: 00380b04
 */
void globals::whitePatternData() {
    /*
    */
}

/**
 * Symbol: whitePattern
 * Address: 00380b0c
 */
void globals::whitePattern() {
    /*
        380b0c:	00380b04 	eoreqs	r0, r8, r4, lsl #22
        380b10:	00010000 	andeq	r0, r1, r0
        380b14:	00000000 	andeq	r0, r0, r0
        380b18:	00080008 	andeq	r0, r8, r8
        380b1c:	40000001 	andmi	r0, r0, r1
    */
}

/**
 * Symbol: whitePatternPtr
 * Address: 00380b28
 */
void globals::whitePatternPtr() {
    /*
        380b28:	00380b0c 	eoreqs	r0, r8, ip, lsl #22
    */
}

/**
 * Symbol: wideMaster
 * Address: 003816b0
 */
void globals::wideMaster() {
    /*
        3816b0:	003816a4 	eoreqs	r1, r8, r4, lsr #13
        3816b4:	3e400000 	cdpcc	0, 4, cr0, cr0, cr0, {0}
        3816b8:	00000000 	andeq	r0, r0, r0
        3816bc:	413f553f 	teqmi	pc, pc, lsr r5
        3816c0:	c4dfcc7e 	ldrgtb	ip, [pc], #c7e	; 3816c8 <wideMaster+0x18>
        3816c4:	40e142b1 	strmih	r4, [r1], #33
        3816c8:	49212f24 	stmmidb	r1!, {r2, r5, r8, r9, sl, fp, sp}
        3816cc:	40711b17 	rsbmis	r1, r1, r7, lsl fp
        3816d0:	0894d50b 	ldmeqia	r4, {r0, r1, r3, r8, sl, ip, lr, pc}
        3816d4:	4114e37f 	tstmi	r4, pc, ror r3
        3816d8:	d89532ff 	ldmleia	r5, {r0, r1, r2, r3, r4, r5, r6, r7, r9, ip, sp}
        3816dc:	c0c5ea34 	sbcgt	lr, r5, r4, lsr sl
        3816e0:	3ad89895 	bcc	ff9a793c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdd970e4>
        3816e4:	4063cedd 	ldrmid	ip, [r3], -#237
        3816e8:	8cd7dced 	ldchil	12, cr13, [r7], #948
        3816ec:	bfe84a10 	swilt	0x00e84a10
        3816f0:	d5c87eb9 	strleb	r7, [r8, #3769]
        3816f4:	414a4dd0 	ldrmid	r4, [sl, -#208]
        3816f8:	e38f62ea 	orr	r6, pc, #-1610612722	; 0xa000000e
        3816fc:	40e8f4fd 	strmid	pc, [r8], #77
        381700:	4cbd0ba3 	ldcmi	11, cr0, [sp], #652
        381704:	4074db2d 	rsbmis	sp, r4, sp, lsr #22
        381708:	52bf7bf3 	adcpls	r7, pc, #248832	; 0x3cc00
        38170c:	41018935 	tstmi	r1, r5, lsr r9
        381710:	ed0a41f2 	stfs	f4, [sl, -#968]
        381714:	c0a4c5a8 	adcgt	ip, r4, r8, lsr #11
        381718:	0acb0d78 	beq	ff644d00 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfda344a8>
        38171c:	403c6c92 	mlamis	ip, r2, ip, r6
        381720:	6fc6567a 	swivs	0x00c6567a
        381724:	bfbaafc3 	swilt	0x00baafc3
        381728:	1af4dedb 	bne	b929c <TFaxTool::AdjustSpeedForFTT(void)+0x70>
        38172c:	3ff921fb 	swicc	0x00f921fb
        381730:	54442d18 	strplb	r2, [r4], -#3352
        381734:	7ff80000 	swivc	0x00f80000
        381738:	40210000 	eormi	r0, r1, r0
        38173c:	c1855223 	orrgt	r5, r5, r3, lsr #4
        381740:	d339abef 	teqle	r9, #244736	; 0x3bc00
        381744:	40862e42 	addmi	r2, r6, r2, asr #28
        381748:	fefa39ee 	cdp2	9, 15, cr3, cr10, cr14, {7}
        38174c:	3c900000 	ldccc	0, cr0, [r0]
        381750:	00000000 	andeq	r0, r0, r0
        381754:	c0874400 	addgt	r4, r7, r0, lsl #8
        381758:	00000000 	andeq	r0, r0, r0
        38175c:	40471547 	submi	r1, r7, r7, asr #10
        381760:	652b82fe 	strvs	r8, [fp, -#766]!
        381764:	3f962e42 	swicc	0x00962e42
        381768:	fef00000 	cdp2	0, 15, cr0, cr0, cr0, {0}
        38176c:	3d8473de 	stccc	3, cr7, [r4, #888]
        381770:	6af278ed 	bvs	1fb2c <BPNetEvaluate+0x58cc>
        381774:	3fe00000 	swicc	0x00e00000
        381778:	00000000 	andeq	r0, r0, r0
        38177c:	3fc55555 	swicc	0x00c55555
        381780:	55548f7c 	ldrplb	r8, [r4, -#3964]
        381784:	3fa55555 	swicc	0x00a55555
        381788:	55545d4e 	ldrplb	r5, [r4, -#3406]
        38178c:	3f811115 	swicc	0x00811115
        381790:	b7aa905e 	undefined
        381794:	3f56c172 	swicc	0x0056c172
        381798:	8d739765 	ldchil	7, cr9, [r3, -#404]!
        38179c:	3ff00000 	swicc	0x00f00000	; IMB
        3817a0:	00000000 	andeq	r0, r0, r0
        3817a4:	3ff059b0 	swicc	0x00f059b0
        3817a8:	d3158540 	tstle	r5, #268435456	; 0x10000000
        3817ac:	3ff0b558 	swicc	0x00f0b558
        3817b0:	6cf98900 	ldcvsl	9, cr8, [r9]
        3817b4:	3ff11301 	swicc	0x00f11301
        3817b8:	d0125b40 	andles	r5, r2, r0, asr #22
        3817bc:	3ff172b8 	swicc	0x00f172b8
        3817c0:	3c7d5140 	ldfcce	f5, [sp], -#256
        3817c4:	3ff1d487 	swicc	0x00f1d487
        3817c8:	3168b980 	cmncc	r8, r0, lsl #19
        3817cc:	3ff2387a 	swicc	0x00f2387a
        3817d0:	6e756200 	cdpvs	2, 7, cr6, cr5, cr0, {0}
        3817d4:	3ff29e9d 	swicc	0x00f29e9d
        3817d8:	f51fdec0 	ldrnv	sp, [pc, #fffff140]	; 380920 <exRefException+0xa0>
        3817dc:	3ff306fe 	swicc	0x00f306fe
        3817e0:	0a31b700 	beq	fef3e8 <ROM$$Size+0x8cf79c>
        3817e4:	3ff371a7 	swicc	0x00f371a7
        3817e8:	373aa9c0 	ldrcc	sl, [sl, -r0, asr #19]!
        3817ec:	3ff3dea6 	swicc	0x00f3dea6
        3817f0:	4c123400 	ldcmi	4, cr3, [r2]
        3817f4:	3ff44e08 	swicc	0x00f44e08
        3817f8:	60618900 	rsbvs	r8, r1, r0, lsl #18
        3817fc:	3ff4bfda 	swicc	0x00f4bfda
        381800:	d5362a00 	ldrle	r2, [r6, -#2560]!
        381804:	3ff5342b 	swicc	0x00f5342b
        381808:	569d4f80 	ldrpl	r4, [sp], r0, lsl #31
        38180c:	3ff5ab07 	swicc	0x00f5ab07
        381810:	dd485400 	stclel	4, cr5, [r8]
        381814:	3ff6247e 	swicc	0x00f6247e
        381818:	b03a5580 	eorlts	r5, sl, r0, lsl #11
        38181c:	3ff6a09e 	swicc	0x00f6a09e
        381820:	667f3bc0 	ldrvsbt	r3, [pc], -r0, asr #23
        381824:	3ff71f75 	swicc	0x00f71f75
        381828:	e8ec5f40 	stmia	ip!, {r6, r8, r9, sl, fp, ip, lr}^
        38182c:	3ff7a114 	swicc	0x00f7a114
        381830:	73eb0180 	mvnvc	r0, #32	; 0x20
        381834:	3ff82589 	swicc	0x00f82589
        381838:	994cce00 	stmlsdb	ip, {r9, sl, fp, lr, pc}^
        38183c:	3ff8ace5 	swicc	0x00f8ace5
        381840:	422aa0c0 	eormi	sl, sl, #192	; 0xc0
        381844:	3ff93737 	swicc	0x00f93737
        381848:	b0cdc5c0 	sbclt	ip, sp, r0, asr #11
        38184c:	3ff9c491 	swicc	0x00f9c491
        381850:	82a3f080 	adchi	pc, r3, #128	; 0x80
        381854:	3ffa5503 	swicc	0x00fa5503
        381858:	b23e2540 	eorlts	r2, lr, #268435456	; 0x10000000
        38185c:	3ffae89f 	swicc	0x00fae89f
        381860:	995ad380 	ldmlsdb	sl, {r7, r8, r9, ip, lr, pc}^
        381864:	3ffb7f76 	swicc	0x00fb7f76
        381868:	f2fb5e40 	rscnvs	r5, fp, #1024	; 0x400
        38186c:	3ffc199b 	swicc	0x00fc199b
        381870:	dd855280 	sfmle	f5, 4, [r5, #512]
        381874:	3ffcb720 	swicc	0x00fcb720
        381878:	dcef9040 	stclel	0, cr9, [pc], #256
        38187c:	3ffd5818 	swicc	0x00fd5818
        381880:	dcfba480 	ldclel	4, cr10, [fp], #512
        381884:	3ffdfc97 	swicc	0x00fdfc97
        381888:	337b9b40 	cmncc	fp, #65536	; 0x10000
        38188c:	3ffea4af 	swicc	0x00fea4af
        381890:	a2a490c0 	adcge	r9, r4, #192	; 0xc0
        381894:	3fff5076 	swicc	0x00ff5076
        381898:	5b6e4540 	blpl	1f12da0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x302548>
        3818a4:	3d0a1d73 	stccc	13, cr1, [sl, -#460]
        3818a8:	e2a475b4 	adc	r7, r4, #754974720	; 0x2d000000
        3818ac:	3ceec531 	stcccl	5, cr12, [lr], #196
        3818b0:	7256e308 	subvcs	lr, r6, #536870912	; 0x20000000
        3818b4:	3cf0a4eb 	ldcccl	4, cr10, [r0], #940
        3818b8:	bf1aed93 	swilt	0x001aed93
        3818bc:	3d0d6e6f 	stccc	14, cr6, [sp, -#444]
        3818c0:	be462876 	mcrlt	8, 2, r2, cr6, cr6, {3}
        3818c4:	3d053c02 	stccc	12, cr3, [r5, -#8]
        3818c8:	dc0144c8 	stcle	4, cr4, [r1], -#800
        3818cc:	3d0c3360 	stccc	3, cr3, [ip, -#384]
        3818d0:	fd6d8e0b 	stc2l	14, cr8, [sp, -#44]!
        3818d4:	3d009612 	stccc	6, cr9, [r0, -#72]
        3818d8:	e8afad12 	stmia	pc!, {r1, r4, r8, sl, fp, sp, pc}
        3818dc:	3cf52de8 	ldcccl	13, cr2, [r5], #928
        3818e0:	d5a46306 	strle	r6, [r4, #774]!
        3818e4:	3ce54e28 	stcccl	14, cr4, [r5], #160
        3818e8:	aa05e8a9 	bge	4fbb94 <SYMdistributebounds+0x4ec>
        3818ec:	3d011ada 	stccc	10, cr1, [r1, -#872]
        3818f0:	0911f09f 	ldmeqdb	r1, {r0, r1, r2, r3, r4, r7, ip, sp, lr, pc}
        3818f4:	3d068189 	stfccd	f0, [r6, -#548]
        3818f8:	b7a04ef8 	undefined
        3818fc:	3d038ea1 	stccc	14, cr8, [r3, -#644]
        381900:	cbd7f621 	blgt	ff97f18c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdd6e934>
        381904:	3cbdf0a8 	ldccc	0, cr15, [sp], #672
        381908:	3c49d86a 	mcrrcc	8, 6, sp, r9, cr10
        38190c:	3d04ac64 	stccc	12, cr10, [r4, -#400]
        381910:	980a8c8f 	stmlsda	sl, {r0, r1, r2, r3, r7, sl, fp, pc}
        381914:	3cd2c7c3 	ldcccl	7, cr12, [r2], #780
        381918:	e81bf4b7 	ldmda	fp, {r0, r1, r2, r4, r5, r7, sl, ip, sp, lr, pc}
        38191c:	3ce92116 	stfcce	f2, [r9], #88
        381920:	5f626cdd 	swipl	0x00626cdd
        381924:	3d09ee91 	stccc	14, cr14, [r9, -#580]
        381928:	b8797785 	ldmltda	r9!, {r0, r2, r7, r8, r9, sl, ip, sp, lr}^
        38192c:	3cdb5f54 	ldcccl	15, cr5, [fp], #336
        381930:	408fdb37 	addmi	sp, pc, r7, lsr fp
        381934:	3cf28acf 	ldcccl	10, cr8, [r2], #828
        381938:	88afab35 	stmhiia	pc!, {r0, r2, r4, r5, r8, r9, fp, sp, pc}
        38193c:	3cfb5ba7 	ldcccl	11, cr5, [fp], #668
        381940:	c55a192d 	ldrgtb	r1, [sl, -#2349]
        381944:	3d027a28 	stccc	10, cr7, [r2, -#160]
        381948:	0e1f92a0 	cdpeq	2, 1, cr9, cr15, cr0, {5}
        38194c:	3cf01c7c 	ldcccl	12, cr1, [r0], #496
        381950:	46b071f3 	undefined
        381954:	3cfc8b42 	ldcccl	11, cr8, [ip], #264
        381958:	4491caf8 	ldrmi	ip, [r1], #2808
        38195c:	3d06af43 	stccc	15, cr10, [r6, -#268]
        381960:	9a68bb99 	bls	1db07cc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x19ff74>
        381964:	3cdbaa9e 	ldcccl	10, cr10, [fp], #632
        381968:	c206ad4f 	andgt	sl, r6, #5056	; 0x13c0
        38196c:	3cfc2220 	lfmcc	f2, 2, [ip], #128
        381970:	cb12a092 	blgt	829bc0 <ROM$$Size+0x109f74>
        381974:	3d048a81 	stccc	10, cr8, [r4, -#516]
        381978:	e5e8f4a5 	strb	pc, [r8, #1189]!
        38197c:	3cdc9768 	ldcccl	7, cr9, [ip], #416
        381980:	16bad9b8 	undefined
        381984:	3cfeb968 	ldcccl	9, cr11, [lr], #416
        381988:	cac39ed3 	bgt	ff4694dc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd858c84>
        38198c:	3cf9858f 	ldcccl	5, cr8, [r9], #572
        381990:	73a18f5e 	movvc	r8, #376	; 0x178
        381994:	3c99d3e1 	ldccc	3, cr13, [r9], #900
        381998:	2dd8a18b 	ldfcsp	f2, [r8, #556]
        38199c:	3c900000 	ldccc	0, cr0, [r0]
        3819a0:	00000000 	andeq	r0, r0, r0
        3819a4:	409c4474 	addmis	r4, ip, r4, ror r4
        3819a8:	e1726455 	cmn	r2, r5, asr r4
        3819ac:	c042b708 	subgt	fp, r2, r8, lsl #14
        3819b0:	872320e1 	strhi	r2, [r3, -r1, ror #1]!
        3819b4:	bfd26962 	swilt	0x00d26962
        3819b8:	1134db93 	ldrneb	sp, [r4, -r3]!
        3819bc:	3fcc8ff7 	swicc	0x00cc8ff7
        3819c0:	c79a9a22 	ldrgt	r9, [sl, r2, lsr #20]
        3819c4:	46300000 	ldrmit	r0, [r0], -r0
        3819c8:	00000000 	andeq	r0, r0, r0
        3819cc:	39b00000 	ldmccib	r0!, {}
        3819d0:	00000000 	andeq	r0, r0, r0
        3819d4:	3f800000 	swicc	0x00800000
        3819d8:	00000000 	andeq	r0, r0, r0
        3819dc:	3fc55555 	swicc	0x00c55555
        3819e0:	55555549 	ldrplb	r5, [r5, -#1353]
        3819e4:	3fa55555 	swicc	0x00a55555
        3819e8:	555554b6 	ldrplb	r5, [r5, -#1206]
        3819ec:	3f811111 	swicc	0x00811111
        3819f0:	1111a9f3 	ldrnesh	sl, [r1, -r3]
        3819f4:	3f56c16c 	swicc	0x0056c16c
        3819f8:	16ce14c6 	strneb	r1, [lr], r6, asr #9
        3819fc:	3f2a01a0 	swicc	0x002a01a0
        381a00:	1159dd2d 	cmpne	r9, sp, lsr #26
        381a04:	3efa019f 	mrccc	1, 7, r0, cr10, cr15, {4}
        381a08:	635825c4 	cmpvs	r8, #822083584	; 0x31000000
        381a0c:	3ec71e14 	mcrcc	14, 6, r1, cr7, cr4, {0}
        381a10:	bfe3db59 	swilt	0x00e3db59
        381a14:	3e928295 	mrccc	2, 4, r8, cr2, cr5, {4}
        381a18:	484734ea 	stmmida	r7, {r1, r3, r5, r6, r7, sl, ip, sp}^
        381a1c:	3e5a2836 	mrccc	8, 2, r2, cr10, cr6, {1}
        381a20:	aa646b96 	bge	1c9c880 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x8c028>
        381a24:	3fb55555 	swicc	0x00b55555
        381a28:	55550286 	ldrplb	r0, [r5, -#646]
        381a2c:	3f8999a0 	swicc	0x008999a0
        381a30:	bc712416 	ldcltl	4, cr2, [r1], -#88
        381a34:	3fb55555 	swicc	0x00b55555
        381a38:	555554e6 	ldrplb	r5, [r5, -#1254]
        381a3c:	3f899999 	swicc	0x00899999
        381a40:	99bac6d4 	ldmlsib	sl!, {r2, r4, r6, r7, r9, sl, lr, pc}
        381a44:	3f624923 	swicc	0x00624923
        381a48:	07f1519f 	undefined
        381a4c:	3f3c8034 	swicc	0x003c8034
        381a50:	c85dfff0 	ldmgtda	sp, {r4, r5, r6, r7, r8, r9, sl, fp, ip, sp, lr, pc}^
        381a5c:	3f7fe02a 	swicc	0x007fe02a
        381a60:	6b100000 	blvs	781a68 <ROM$$Size+0x61e1c>
        381a64:	3f8fc0a8 	swicc	0x008fc0a8
        381a68:	b0fc0000 	rsclts	r0, ip, r0
        381a6c:	3f97b91b 	swicc	0x0097b91b
        381a70:	07d60000 	ldreqb	r0, [r6, r0]
        381a74:	3f9f829b 	swicc	0x009f829b
        381a78:	0e780000 	cdpeq	0, 7, cr0, cr8, cr0, {0}
        381a7c:	3fa39e87 	swicc	0x00a39e87
        381a80:	b9fe8000 	ldmltib	lr!, {pc}^
        381a84:	3fa77458 	swicc	0x00a77458
        381a88:	f6330000 	ldrnvt	r0, [r3], -r0
        381a8c:	3fab42dd 	swicc	0x00ab42dd
        381a90:	71198000 	tstvc	r9, r0
        381a94:	3faf0a30 	swicc	0x00af0a30
        381a98:	c0118000 	andgts	r8, r1, r0
        381a9c:	3fb16536 	swicc	0x00b16536
        381aa0:	eea38000 	cdp	0, 10, cr8, cr3, cr0, {0}
        381aa4:	3fb341d7 	swicc	0x00b341d7
        381aa8:	961bc000 	ldrls	ip, [fp], -r0
        381aac:	3fb51b07 	swicc	0x00b51b07
        381ab0:	3f060000 	swicc	0x00060000
        381ab4:	3fb6f0d2 	swicc	0x00b6f0d2
        381ab8:	8ae58000 	bhi	ffce1ac0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe0d1268>
        381abc:	3fb8c345 	swicc	0x00b8c345
        381ac0:	d6318000 	ldrlet	r8, [r1], -r0
        381ac4:	3fba926d 	swicc	0x00ba926d
        381ac8:	3a4ac000 	bcc	1631ad0 <ROM$$Size+0xf11e84>
        381acc:	3fbc5e54 	swicc	0x00bc5e54
        381ad0:	8f5bc000 	swihi	0x005bc000
        381ad4:	3fbe2707 	swicc	0x00be2707
        381ad8:	6e2b0000 	cdpvs	0, 2, cr0, cr11, cr0, {0}
        381adc:	3fbfec91 	swicc	0x00bfec91
        381ae0:	31dc0000 	bicccs	r0, ip, r0
        381ae4:	3fc0d77e 	swicc	0x00c0d77e
        381ae8:	7cd08000 	ldcvcl	0, cr8, [r0]
        381aec:	3fc1b72a 	swicc	0x00c1b72a
        381af0:	d52f6000 	strle	r6, [pc, #0]!	; 381af8 <wideMaster+0x448>
        381af4:	3fc29552 	swicc	0x00c29552
        381af8:	f8200000 	stmnvda	r0!, {}
        381afc:	3fc371fc 	swicc	0x00c371fc
        381b00:	201e8000 	andcss	r8, lr, r0
        381b04:	3fc44d2b 	swicc	0x00c44d2b
        381b08:	6ccb8000 	stcvsl	0, cr8, [fp]
        381b0c:	3fc526e5 	swicc	0x00c526e5
        381b10:	e3a1c000 	mov	ip, #0	; 0x0
        381b14:	3fc5ff30 	swicc	0x00c5ff30
        381b18:	70a7a000 	adcvc	sl, r7, r0
        381b1c:	3fc6d60f 	swicc	0x00c6d60f
        381b20:	e719e000 	ldr	lr, [r9, -r0]
        381b24:	3fc7ab89 	swicc	0x00c7ab89
        381b28:	0210e000 	andeqs	lr, r0, #0	; 0x0
        381b2c:	3fc87fa0 	swicc	0x00c87fa0
        381b30:	6520c000 	strvs	ip, [r0]!
        381b34:	3fc9525a 	swicc	0x00c9525a
        381b38:	9cf46000 	ldclsl	0, cr6, [r4]
        381b3c:	3fca23bc 	swicc	0x00ca23bc
        381b40:	1fe2c000 	swine	0x00e2c000
        381b44:	3fcaf3c9 	swicc	0x00caf3c9
        381b48:	4e80c000 	cdpmi	0, 8, cr12, cr0, cr0, {0}
        381b4c:	3fcbc286 	swicc	0x00cbc286
        381b50:	742d8000 	strvct	r8, [sp]
        381b54:	3fcc8ff7 	swicc	0x00cc8ff7
        381b58:	c79aa000 	ldrgt	sl, [sl, r0]
        381b5c:	3fcd5c21 	swicc	0x00cd5c21
        381b60:	6b4fc000 	blvs	1771b68 <ROM$$Size+0x1051f1c>
        381b64:	3fce2707 	swicc	0x00ce2707
        381b68:	6e2b0000 	cdpvs	0, 2, cr0, cr11, cr0, {0}
        381b6c:	3fcef0ad 	swicc	0x00cef0ad
        381b70:	cbdc6000 	blgt	ffa99b78 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfde89320>
        381b74:	3fcfb918 	swicc	0x00cfb918
        381b78:	6d5e4000 	ldcvsl	0, cr4, [lr]
        381b7c:	3fd04025 	swicc	0x00d04025
        381b80:	94b4d000 	ldrlst	sp, [r4]
        381b84:	3fd0a324 	swicc	0x00d0a324
        381b88:	e2739000 	rsbs	r9, r3, #0	; 0x0
        381b8c:	3fd1058b 	swicc	0x00d1058b
        381b90:	f9ae5000 	stmnvib	lr!, {ip, lr}
        381b94:	3fd1675c 	swicc	0x00d1675c
        381b98:	ababa000 	blge	fee69ba0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd259348>
        381b9c:	3fd1c898 	swicc	0x00d1c898
        381ba0:	c169a000 	cmngt	r9, r0
        381ba4:	3fd22941 	swicc	0x00d22941
        381ba8:	fbcf8000 	blx	ff761bb2 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdb5135a>
        381bac:	3fd2895a 	swicc	0x00d2895a
        381bb0:	13de8000 	bicnes	r8, lr, #0	; 0x0
        381bb4:	3fd2e8e2 	swicc	0x00d2e8e2
        381bb8:	bae12000 	blt	ffbc9bc0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdfb9368>
        381bbc:	3fd347dd 	swicc	0x00d347dd
        381bc0:	9a988000 	bls	fe9a1bc8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcd91370>
        381bc4:	3fd3a64c 	swicc	0x00d3a64c
        381bc8:	55694000 	strplb	r4, [r9]!
        381bcc:	3fd40430 	swicc	0x00d40430
        381bd0:	8686a000 	strhi	sl, [r6], r0
        381bd4:	3fd4618b 	swicc	0x00d4618b
        381bd8:	c21c6000 	andgts	r6, ip, #0	; 0x0
        381bdc:	3fd4be5f 	swicc	0x00d4be5f
        381be0:	95778000 	ldrlsb	r8, [r7]!
        381be4:	3fd51aad 	swicc	0x00d51aad
        381be8:	872e0000 	strhi	r0, [lr, -r0]!
        381bec:	3fd57677 	swicc	0x00d57677
        381bf0:	17456000 	strneb	r6, [r5, -r0]
        381bf4:	3fd5d1bd 	swicc	0x00d5d1bd
        381bf8:	bf581000 	swilt	0x00581000
        381bfc:	3fd62c82 	swicc	0x00d62c82
        381c00:	f2b9c000 	adcnvs	ip, r9, #0	; 0x0
        381c04:	3fd686c8 	swicc	0x00d686c8
        381c08:	1e9b1000 	cdpne	0, 9, cr1, cr11, cr0, {0}
        381c0c:	3fd6e08e 	swicc	0x00d6e08e
        381c10:	aa2ba000 	bge	e69c18 <ROM$$Size+0x749fcc>
        381c14:	3fd739d7 	swicc	0x00d739d7
        381c18:	f6bbd000 	ldrnvt	sp, [fp], r0
        381c1c:	3fd792a5 	swicc	0x00d792a5
        381c20:	5fdd4000 	swipl	0x00dd4000
        381c24:	3fd7eaf8 	swicc	0x00d7eaf8
        381c28:	3b82b000 	blcc	fe42dc30 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc81d3d8>
        381c2c:	3fd842d1 	swicc	0x00d842d1
        381c30:	da1e9000 	ble	b25c38 <ROM$$Size+0x405fec>
        381c34:	3fd89a33 	swicc	0x00d89a33
        381c38:	86c14000 	strhib	r4, [r1], r0
        381c3c:	3fd8f11e 	swicc	0x00d8f11e
        381c40:	87366000 	ldrhi	r6, [r6, -r0]!
        381c44:	3fd94794 	swicc	0x00d94794
        381c48:	1c211000 	stcne	0, cr1, [r1]
        381c4c:	3fd99d95 	swicc	0x00d99d95
        381c50:	8117e000 	tsthi	r7, r0
        381c54:	3fd9f323 	swicc	0x00d9f323
        381c58:	ecbfa000 	ldc	0, cr10, [pc]
        381c5c:	3fda4840 	swicc	0x00da4840
        381c60:	90e5c000 	rscls	ip, r5, r0
        381c64:	3fda9cec 	swicc	0x00da9cec
        381c68:	9a9a1000 	bls	fea05c70 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcdf5418>
        381c6c:	3fdaf129 	swicc	0x00daf129
        381c70:	32478000 	subcc	r8, r7, #0	; 0x0
        381c74:	3fdb44f7 	swicc	0x00db44f7
        381c78:	7bcc9000 	blvc	ff6a5c80 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfda95428>
        381c7c:	3fdb9858 	swicc	0x00db9858
        381c80:	96931000 	ldrls	r1, [r3], r0
        381c84:	3fdbeb4d 	swicc	0x00dbeb4d
        381c88:	9da72000 	stcls	0, cr2, [r7]
        381c8c:	3fdc3dd7 	swicc	0x00dc3dd7
        381c90:	a7cdb000 	strgeb	fp, [sp, r0]
        381c94:	3fdc8ff7 	swicc	0x00dc8ff7
        381c98:	c79aa000 	ldrgt	sl, [sl, r0]
        381c9c:	3fdce1af 	swicc	0x00dce1af
        381ca0:	0b85f000 	bleq	fe4fdca8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc8ed450>
        381ca4:	3fdd32fe 	swicc	0x00dd32fe
        381ca8:	7e00f000 	cdpvc	0, 0, cr15, cr0, cr0, {0}
        381cac:	3fdd83e7 	swicc	0x00dd83e7
        381cb0:	258a3000 	strcs	r3, [sl]
        381cb4:	3fddd46a 	swicc	0x00ddd46a
        381cb8:	04c1c000 	streqb	ip, [r1]
        381cbc:	3fde2488 	swicc	0x00de2488
        381cc0:	1a7c7000 	bne	229dcc8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x68d470>
        381cc4:	3fde7442 	swicc	0x00de7442
        381cc8:	61d68000 	bicvss	r8, r6, r0
        381ccc:	3fdec399 	swicc	0x00dec399
        381cd0:	d2469000 	suble	r9, r6, #0	; 0x0
        381cd4:	3fdf128f 	swicc	0x00df128f
        381cd8:	5faf0000 	swipl	0x00af0000
        381cdc:	3fdf6123 	swicc	0x00df6123
        381ce0:	fa703000 	blx	1f8dce8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x37d490>
        381ce4:	3fdfaf58 	swicc	0x00dfaf58
        381ce8:	8f78f000 	swihi	0x0078f000
        381cec:	3fdffd2e 	swicc	0x00dffd2e
        381cf0:	0857f000 	ldmeqda	r7, {ip, sp, lr, pc}^
        381cf4:	3fe02552 	swicc	0x00e02552
        381cf8:	a5a5d000 	strge	sp, [r5]!
        381cfc:	3fe04bdf 	swicc	0x00e04bdf
        381d00:	9da92800 	stcls	8, cr2, [r9]
        381d04:	3fe0723e 	swicc	0x00e0723e
        381d08:	5c1ce000 	ldcpl	0, cr14, [ip]
        381d0c:	3fe0986f 	swicc	0x00e0986f
        381d10:	4f573800 	swimi	0x00573800
        381d14:	3fe0be72 	swicc	0x00e0be72
        381d18:	e4252800 	strt	r2, [r5], -#2048
        381d1c:	3fe0e449 	swicc	0x00e0e449
        381d20:	85d1d000 	ldrhib	sp, [r1]
        381d24:	3fe109f3 	swicc	0x00e109f3
        381d28:	9e2d5000 	cdpls	0, 2, cr5, cr13, cr0, {0}
        381d2c:	3fe12f71 	swicc	0x00e12f71
        381d30:	9593f000 	ldrls	pc, [r3]
        381d34:	3fe154c3 	swicc	0x00e154c3
        381d38:	d2f4d800 	rscles	sp, r4, #0	; 0x0
        381d3c:	3fe179ea 	swicc	0x00e179ea
        381d40:	bbd89800 	bllt	ff9a7d48 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdd974f0>
        381d44:	3fe19ee6 	swicc	0x00e19ee6
        381d48:	b467c800 	strltbt	ip, [r7], -#2048
        381d4c:	3fe1c3b8 	swicc	0x00e1c3b8
        381d50:	1f714000 	swine	0x00714000
        381d54:	3fe1e85f 	swicc	0x00e1e85f
        381d58:	5e704000 	cdppl	0, 7, cr4, cr0, cr0, {0}
        381d5c:	3fe20cdc 	swicc	0x00e20cdc
        381d60:	d192a800 	orrles	sl, r2, r0, lsl #16
        381d64:	3fe23130 	swicc	0x00e23130
        381d68:	d7bec000 	ldrle	ip, [lr, r0]!
        381d6c:	3fe2555b 	swicc	0x00e2555b
        381d70:	ce98f800 	cdpgt	8, 9, cr15, cr8, cr0, {0}
        381d74:	3fe2795e 	swicc	0x00e2795e
        381d78:	1289b000 	addne	fp, r9, #0	; 0x0
        381d7c:	3fe29d37 	swicc	0x00e29d37
        381d80:	fec2b000 	cdp2	0, 12, cr11, cr2, cr0, {0}
        381d84:	3fe2c0e9 	swicc	0x00e2c0e9
        381d88:	ed449000 	stcl	0, cr9, [r4]
        381d8c:	3fe2e474 	swicc	0x00e2e474
        381d90:	36e40000 	strccbt	r0, [r4], r0
        381d94:	3fe307d7 	swicc	0x00e307d7
        381d98:	334f1000 	cmpcc	pc, #0	; 0x0
        381d9c:	3fe32b13 	swicc	0x00e32b13
        381da0:	39122000 	ldmccdb	r2, {sp}
        381da4:	3fe34e28 	swicc	0x00e34e28
        381da8:	9d9ce000 	ldcls	0, cr14, [ip]
        381dac:	3fe37117 	swicc	0x00e37117
        381db0:	b5474800 	strltb	r4, [r7, -#2048]
        381db4:	3fe393e0 	swicc	0x00e393e0
        381db8:	d3562800 	cmple	r6, #0	; 0x0
        381dbc:	3fe3b684 	swicc	0x00e3b684
        381dc0:	4a000000 	bmi	381dc8 <wideMaster+0x718>
        381dc4:	3fe3d902 	swicc	0x00e3d902
        381dc8:	6a715800 	bvs	1fd7dd0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x3c7578>
        381dcc:	3fe3fb5b 	swicc	0x00e3fb5b
        381dd0:	84d17000 	ldrhib	r7, [r1]
        381dd4:	3fe41d8f 	swicc	0x00e41d8f
        381dd8:	e8467000 	stmda	r6, {ip, sp, lr}^
        381ddc:	3fe43f9f 	swicc	0x00e43f9f
        381de0:	e2f9d000 	rscs	sp, r9, #0	; 0x0
        381de4:	3fe4618b 	swicc	0x00e4618b
        381de8:	c21c6000 	andgts	r6, ip, #0	; 0x0
        381dec:	3fe48353 	swicc	0x00e48353
        381df0:	d1ea8800 	mvnle	r8, r0, lsl #16
        381df4:	3fe4a4f8 	swicc	0x00e4a4f8
        381df8:	5db04000 	ldcpl	0, cr4, [r0]
        381dfc:	3fe4c679 	swicc	0x00e4c679
        381e00:	afccf000 	swige	0x00ccf000
        381e04:	3fe4e7d8 	swicc	0x00e4e7d8
        381e08:	11b75800 	movnes	r5, r0, lsl #16
        381e0c:	3fe50913 	swicc	0x00e50913
        381e10:	cc016800 	stcgt	8, cr6, [r1]
        381e14:	3fe52a2d 	swicc	0x00e52a2d
        381e18:	265bc800 	ldrcsb	ip, [fp], -r0, lsl #16
        381e1c:	3fe54b24 	swicc	0x00e54b24
        381e20:	67999800 	ldrvs	r9, [r9, r0, lsl #16]
        381e24:	3fe56bf9 	swicc	0x00e56bf9
        381e28:	d5b3f000 	ldrle	pc, [r3]!
        381e2c:	3fe58cad 	swicc	0x00e58cad
        381e30:	b5cd7800 	strltb	r7, [sp, #2048]
        381e34:	3fe5ad40 	swicc	0x00e5ad40
        381e38:	4c35a000 	ldcmi	0, cr10, [r5]
        381e3c:	3fe5cdb1 	swicc	0x00e5cdb1
        381e40:	dc6c1800 	stclel	8, cr1, [ip]
        381e44:	3fe5ee02 	swicc	0x00e5ee02
        381e48:	a9241800 	stmgedb	r4!, {fp, ip}
        381e4c:	3fe60e32 	swicc	0x00e60e32
        381e50:	f4478800 	strnvb	r8, [r7], -#2048
        381e54:	3fe62e42 	swicc	0x00e62e42
        381e58:	fefa3800 	cdp2	8, 15, cr3, cr10, cr0, {0}
        381e64:	3d19e23f 	lfmcc	f6, 1, [r9, -#252]
        381e68:	0dda40e4 	ldceql	0, cr4, [sl, #912]
        381e6c:	3cdf1e7c 	ldcccl	14, cr1, [pc], #496
        381e70:	f6d3a69c 	undefined
        381e74:	bd33b955 	ldclt	9, cr11, [r3, -#340]!
        381e78:	b602ace4 	strlt	sl, [r2], -r4, ror #25
        381e7c:	3d298026 	stccc	0, cr8, [r9, -#152]!
        381e80:	7c7e09e4 	ldcvcl	9, cr0, [lr], -#912
        381e84:	3d3eafd4 	ldccc	15, cr10, [lr, -#848]!
        381e88:	80ad9015 	adchi	r9, sp, r5, lsl r0
        381e8c:	bd3181dc 	ldfltd	f0, [r1, -#880]!
        381e90:	e586af09 	str	sl, [r6, #3849]
        381e94:	bd1c827a 	lfmlt	f0, 1, [ip, -#488]
        381e98:	e5d6704c 	ldrb	r7, [r6, #76]
        381e9c:	bd2d599e 	stclt	9, cr5, [sp, -#632]!
        381ea0:	83368e91 	teqhi	r6, #2320	; 0x910
        381ea4:	bd147c5e 	ldclt	12, cr7, [r4, -#376]
        381ea8:	768fa309 	strvc	sl, [pc], r9, lsl #6
        381eac:	3d31d092 	ldccc	0, cr13, [r1, -#584]!
        381eb0:	99837610 	stmlsib	r3, {r4, r9, sl, ip, sp, lr}
        381eb4:	3d383f69 	ldccc	15, cr3, [r8, -#420]!
        381eb8:	278e686a 	strcs	r6, [lr, sl, ror #16]
        381ebc:	bd34b464 	ldclt	4, cr11, [r4, -#400]!
        381ec0:	1b664613 	blne	1d13714 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x102ebc>
        381ec4:	3d3b20f5 	ldccc	0, cr2, [fp, -#980]!
        381ec8:	acb42a66 	ldcge	10, cr2, [r4], #408
        381ecc:	3d356365 	ldccc	3, cr6, [r5, -#404]!
        381ed0:	0bd22a9c 	bleq	ff80c948 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdbfc0f0>
        381ed4:	3d1d0c57 	ldccc	12, cr0, [sp, -#348]
        381ed8:	585fbe06 	ldmplda	pc, {r1, r2, r9, sl, fp, ip, sp, pc}^
        381edc:	bd2a342c 	stclt	4, cr3, [sl, -#176]!
        381ee0:	2af0003c 	bcs	fff81fd8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe371780>
        381ee4:	bd354555 	ldclt	5, cr4, [r5, -#340]!
        381ee8:	d1ae6607 	movle	r6, r7, lsl #12
        381eec:	3d3cb2cd 	lfmcc	f3, 1, [ip, -#820]!
        381ef0:	2ee2f482 	cdpcs	4, 14, cr15, cr2, cr2, {4}
        381ef4:	3d2e80a4 	stccc	0, cr8, [lr, -#656]!
        381ef8:	1811a396 	ldmneda	r1, {r1, r2, r4, r7, r8, r9, sp, pc}
        381efc:	bd35b967 	ldclt	9, cr11, [r5, -#412]!
        381f00:	f4471dfc 	strnvb	r1, [r7], -#3580
        381f04:	3d3ee877 	ldccc	8, cr14, [lr, -#476]!
        381f08:	9b2d8abc 	blls	ee4a00 <ROM$$Size+0x7c4db4>
        381f0c:	bd170cc1 	ldclt	12, cr0, [r7, -#772]
        381f10:	6135783c 	teqvs	r5, ip, lsr r8
        381f14:	bd3790ba 	ldclt	0, cr9, [r7, -#744]!
        381f18:	37fc5238 	undefined
        381f1c:	bd38586f 	ldclt	8, cr5, [r8, -#444]!
        381f20:	183bebf2 	ldmneda	fp!, {r1, r4, r5, r6, r7, r8, r9, fp, sp, lr, pc}
        381f24:	bd3bc6e5 	ldclt	6, cr12, [fp, -#916]!
        381f28:	57134767 	ldrpl	r4, [r3, -r7, ror #14]
        381f2c:	bd2bdb90 	stclt	11, cr13, [fp, -#576]!
        381f30:	72534a58 	subvcs	r4, r3, #360448	; 0x58000
        381f34:	3d322120 	ldfccs	f2, [r2, -#128]!
        381f38:	401202fc 	ldrmish	r0, [r2], -ip
        381f3c:	bd329713 	ldclt	7, cr9, [r2, -#76]!
        381f40:	7d9f158f 	ldcvc	5, cr1, [pc, #572]
        381f44:	bd3539cd 	ldclt	9, cr3, [r5, -#820]!
        381f48:	91dc9f0b 	biclss	r9, ip, fp, lsl #30
        381f4c:	bcba4e63 	ldclt	14, cr4, [sl], #396
        381f50:	3fcd9066 	swicc	0x00cd9066
        381f54:	3d39ac53 	ldccc	12, cr10, [r9, -#332]!
        381f58:	f39d121c 	orrnvs	r1, sp, #-1073741823	; 0xc0000001
        381f5c:	bd27794f 	stclt	9, cr7, [r7, -#316]!
        381f60:	689f8434 	ldmvsia	pc, {r2, r4, r5, sl, pc}
        381f64:	bd21ba91 	stclt	10, cr11, [r1, -#580]!
        381f68:	bbca681b 	bllt	ff61bfdc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfda0b784>
        381f6c:	bd3a342c 	ldclt	4, cr3, [sl, -#176]!
        381f70:	2af0003c 	bcs	fff82068 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe371810>
        381f74:	bd2b26b7 	stclt	6, cr2, [fp, -#732]!
        381f78:	9c86af24 	stcls	15, cr10, [r6], #144
        381f7c:	bd0d572a 	stclt	7, cr5, [sp, -#168]
        381f80:	ab993c87 	blge	fe9d11a4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcdc094c>
        381f84:	3cf036b8 	ldcccl	6, cr3, [r0], #736
        381f88:	9ef42d7f 	mrcls	13, 7, r2, cr4, cr15, {3}
        381f8c:	3d0c6bee 	stccc	11, cr6, [ip, -#952]
        381f90:	7ef4030e 	cdpvc	3, 15, cr0, cr4, cr14, {0}
        381f94:	bd34ab9d 	ldclt	11, cr10, [r4, -#628]!
        381f98:	817d52cd 	cmnhi	sp, sp, asr #5
        381f9c:	3d38380e 	ldccc	8, cr3, [r8, -#56]!
        381fa0:	731f55c4 	tstvc	pc, #822083584	; 0x31000000
        381fa4:	bd381410 	ldclt	4, cr1, [r8, -#64]!
        381fa8:	e5c62aff 	strb	r2, [r6, #2815]
        381fac:	bd3a6976 	ldclt	9, cr6, [sl, -#472]!
        381fb0:	f5eb0963 	strnvb	r0, [fp, #2403]!
        381fb4:	3d3a8d7a 	ldccc	13, cr8, [sl, -#488]!
        381fb8:	d24c13f0 	suble	r1, ip, #-1073741821	; 0xc0000003
        381fbc:	bd267b1e 	stclt	11, cr7, [r6, -#120]!
        381fc0:	99b72bd8 	ldmlsib	r7!, {r3, r4, r6, r7, r8, r9, fp, sp}
        381fc4:	bd25594d 	stclt	9, cr5, [r5, -#308]!
        381fc8:	d4c58092 	strleb	r8, [r5], #146
        381fcc:	3d37a71c 	ldccc	7, cr10, [r7, -#112]!
        381fd0:	bcd735d0 	ldcltl	5, cr3, [r7], #832
        381fd4:	3d3f8ef4 	ldccc	14, cr8, [pc, -#976]!
        381fd8:	3049f7d3 	ldrccd	pc, [r9], -#115
        381fdc:	bd13d82f 	ldclt	8, cr13, [r3, -#188]
        381fe0:	484c84cc 	stmmida	ip, {r2, r3, r6, r7, sl, pc}^
        381fe4:	bd3d7c92 	ldclt	12, cr7, [sp, -#584]!
        381fe8:	cd9ad824 	ldcgt	8, cr13, [sl, #144]
        381fec:	bd3f4bd8 	ldclt	11, cr4, [pc, -#864]!
        381ff0:	db0a7cc1 	blle	6212fc <SYMppdb+0x16ea0>
        381ff4:	bd364ead 	ldclt	14, cr4, [r6, -#692]!
        381ff8:	9524d7ca 	strls	sp, [r4, -#1994]!
        381ffc:	bd38d6bd 	ldclt	6, cr13, [r8, -#756]!
        382000:	c9c7c238 	stmgtib	r7, {r3, r4, r5, r9, lr, pc}^
        382004:	3d3e54bd 	ldccc	4, cr5, [lr, -#756]!
        382008:	bd7c8a98 	ldcltl	10, cr8, [ip, -#608]!
        38200c:	3d32bb11 	ldccc	11, cr11, [r2, -#68]!
        382010:	0af84054 	beq	192168 <TPort::Send(TSharedMemMsg *, unsigned long)+0x4c>
        382014:	3d1e38c1 	ldccc	8, cr3, [lr, -#772]
        382018:	39318d71 	ldmccdb	r1!, {r0, r4, r5, r6, r8, sl, fp, pc}
        38201c:	3cba7389 	ldccc	3, cr7, [sl], #548
        382020:	314feb50 	cmpcc	pc, r0, asr fp
        382024:	3d3e89f0 	ldccc	9, cr8, [lr, -#960]!
        382028:	57691fea 	strplb	r1, [r9, -sl, ror #31]!
        38202c:	bcee4da6 	stcltl	13, cr4, [lr], #664
        382030:	2d0c25ad 	stccs	5, cr2, [ip, -#692]
        382034:	bd33a2db 	lfmlt	f2, 1, [r3, -#876]!
        382038:	13ae687c 	movne	r6, #8126464	; 0x7c0000
        38203c:	3d22d5ad 	stccc	5, cr13, [r2, -#692]!
        382040:	38c40882 	stmccia	r4, {r1, r7, fp}^
        382044:	3d263bf0 	stccc	11, cr3, [r6, -#960]!
        382048:	bb4eab4c 	bllt	172cd80 <ROM$$Size+0x100d134>
        38204c:	3d3beae9 	ldccc	10, cr14, [fp, -#932]!
        382050:	337451f4 	cmncc	r4, #61	; 0x3d
        382054:	3d015975 	stccc	9, cr5, [r1, -#468]
        382058:	25dd88f0 	ldrcsb	r8, [sp, #2288]
        38205c:	bd3ed035 	ldclt	0, cr13, [lr, -#212]!
        382060:	25ca2643 	strcsb	r2, [sl, #1603]
        382064:	bd33d750 	ldclt	7, cr13, [r3, -#320]!
        382068:	0d6523c5 	stceql	3, cr2, [r5, -#788]!
        38206c:	bd3ed9ca 	ldclt	9, cr13, [lr, -#808]!
        382070:	dec02b43 	cdple	11, 12, cr2, cr0, cr3, {2}
        382074:	bd3e53bb 	ldclt	3, cr5, [lr, -#748]!
        382078:	31eed7a9 	mvncc	sp, r9, lsr #15
        38207c:	bd03ae68 	stclt	14, cr10, [r3, -#416]
        382080:	224aa2ce 	subcs	sl, sl, #-536870900	; 0xe000000c
        382084:	3d0f6b31 	stccc	11, cr6, [pc, -#196]
        382088:	f629f11e 	undefined
        38208c:	bd321021 	ldclt	0, cr1, [r2, -#132]!
        382090:	e78b2151 	undefined
        382094:	bd259462 	stclt	4, cr9, [r5, -#392]!
        382098:	61f5a42b 	mvnvss	sl, fp, lsr #8
        38209c:	bd37794f 	ldclt	9, cr7, [r7, -#316]!
        3820a0:	689f8434 	ldmvsia	pc, {r2, r4, r5, sl, pc}
        3820a4:	3d2f5bdb 	stccc	11, cr5, [pc, -#876]!
        3820a8:	e95e5568 	ldmdb	lr, {r3, r5, r6, r8, sl, ip, lr}^
        3820ac:	bd30aa78 	ldclt	10, cr10, [r0, -#480]!
        3820b0:	84dcd050 	ldrhib	sp, [ip], #80
        3820b4:	bd0835f5 	stclt	5, cr3, [r8, -#980]
        3820b8:	d48ba26d 	strle	sl, [fp], #621
        3820bc:	3d3282fb 	lfmcc	f0, 1, [r2, -#1004]!
        3820c0:	989a9274 	ldmlsia	sl, {r2, r4, r5, r6, r9, ip, pc}
        3820c4:	bd2ecf1a 	stclt	15, cr12, [lr, -#104]!
        3820c8:	1385d356 	orrne	sp, r5, #1476395009	; 0x58000001
        3820cc:	3d3e1f8d 	ldccc	15, cr1, [lr, -#564]!
        3820d0:	f68dbcf3 	undefined
        3820d4:	bd29ff45 	stclt	15, cr15, [r9, -#276]!
        3820d8:	188d6065 	stmneia	sp, {r0, r2, r5, r6, sp, lr}
        3820dc:	3d3bb2cd 	lfmcc	f3, 1, [fp, -#820]!
        3820e0:	720ec44c 	andvc	ip, lr, #1275068416	; 0x4c000000
        3820e4:	bd3d4e7a 	ldclt	14, cr4, [sp, -#488]!
        3820e8:	ea4f0d25 	b	1745584 <ROM$$Size+0x1025938>
        3820ec:	3d28f6cd 	stccc	6, cr15, [r8, -#820]!
        3820f0:	7d9f2754 	ldcvc	7, cr2, [pc, #336]
        3820f4:	3d326156 	ldfccs	f6, [r2, -#344]!
        3820f8:	5f40d932 	swipl	0x0040d932
        3820fc:	3d1fd8d3 	ldccc	8, cr13, [pc, -#844]
        382100:	8d2bafdd 	stchi	15, cr10, [fp, -#884]!
        382104:	bd22d9a0 	stclt	9, cr13, [r2, -#640]!
        382108:	33eff74e 	mvncc	pc, #20447232	; 0x1380000
        38210c:	bd17f635 	ldclt	6, cr15, [r7, -#212]
        382110:	0d38eddd 	ldceq	13, cr14, [r8, -#884]!
        382114:	bd36fa37 	ldclt	10, cr15, [r6, -#220]!
        382118:	012b5806 	teqeq	fp, r6, lsl #16
        38211c:	3d3415b4 	ldccc	5, cr1, [r4, -#720]!
        382120:	c4bdd99f 	ldrgtt	sp, [sp], #2463
        382124:	bd3ba048 	ldclt	0, cr10, [fp, -#288]!
        382128:	a8d10b4b 	ldmgeia	r1, {r0, r1, r3, r6, r8, r9, fp}^
        38212c:	bd3b4810 	ldclt	8, cr4, [fp, -#64]!
        382130:	e09b27a4 	adds	r2, fp, r4, lsr #15
        382134:	bd00eb3f 	stclt	11, cr14, [r0, -#252]
        382138:	b7398e0c 	ldrlt	r8, [r9, -ip, lsl #28]!
        38213c:	bd30b2b3 	lfmlt	f3, 1, [r0, -#716]!
        382140:	8662e34d 	strhibt	lr, [r2], -sp, asr #6
        382144:	3d2a0bfc 	stccc	11, cr0, [sl, -#1008]!
        382148:	60e6fa08 	rscvs	pc, r6, r8, lsl #20
        38214c:	3d26ecc5 	stccc	12, cr14, [r6, -#788]!
        382150:	cbdd7782 	blgt	ffadff60 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdecf708>
        382154:	bd3eda1b 	ldclt	10, cr13, [lr, -#108]!
        382158:	58389902 	ldmplda	r8!, {r1, r8, fp, ip, pc}
        38215c:	3d1a07bd 	ldccc	7, cr0, [sl, -#756]
        382160:	8b34be7c 	blhi	10b1b58 <ROM$$Size+0x991f0c>
        382164:	3d3b6c9a 	ldccc	12, cr6, [fp, -#616]!
        382168:	81e87bae 	mvnhi	r7, lr, lsr #23
        38216c:	bd17afa4 	ldclt	15, cr10, [r7, -#656]
        382170:	392f1ba7 	stmccdb	pc!, {r0, r1, r2, r5, r7, r8, r9, fp, ip}
        382174:	bcfa61fd 	ldflte	f6, [sl], #1012
        382178:	e292977e 	adds	r9, r2, #33030144	; 0x1f80000
        38217c:	3d21aeb7 	stccc	14, cr10, [r1, -#732]!
        382180:	83f3db97 	mvnhis	sp, #154624	; 0x25c00
        382184:	3d11590b 	ldccc	9, cr5, [r1, -#44]
        382188:	9ad974ba 	bls	ff9df478 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfddcec20>
        38218c:	bd274468 	stclt	4, cr4, [r7, -#416]!
        382190:	563ce45d 	undefined
        382194:	3d334202 	lfmcc	f4, 4, [r3, -#8]!
        382198:	a10c3491 	strgeb	r3, [ip, -r1]
        38219c:	3d17c3f6 	ldccc	3, cr12, [r7, -#984]
        3821a0:	b2143ead 	andlts	r3, r4, #2768	; 0xad0
        3821a4:	bd34766f 	ldclt	6, cr7, [r4, -#444]!
        3821a8:	d54a4c27 	strleb	r4, [sl, -#3111]
        3821ac:	3d2d316e 	stfccs	f3, [sp, -#440]!
        3821b0:	b92d885d 	stmltdb	sp!, {r0, r2, r3, r4, r6, fp, pc}
        3821b4:	bd028e88 	stclt	14, cr8, [r2, -#544]
        3821b8:	bf6deec9 	swilt	0x006deec9
        3821bc:	3d30cd4e 	ldccc	13, cr12, [r0, -#312]!
        3821c0:	221301b7 	andcss	r0, r3, #-1073741779	; 0xc000002d
        3821c4:	bd3eea83 	ldclt	10, cr14, [lr, -#524]!
        3821c8:	8909f3d3 	stmhidb	r9, {r0, r1, r4, r6, r7, r8, r9, ip, sp, lr, pc}
        3821cc:	bd2055bf 	stclt	5, cr5, [r0, -#764]!
        3821d0:	bd9c2f53 	ldclt	15, cr2, [ip, #332]
        3821d4:	bd17b496 	ldclt	4, cr11, [r7, -#600]
        3821d8:	2c55f46b 	mrrccs	4, 6, pc, r5, cr11
        3821dc:	3d357323 	ldccc	3, cr7, [r5, -#140]!
        3821e0:	25e617a3 	strcsb	r1, [r6, #1955]!
        3821e4:	bd298858 	stclt	8, cr8, [r9, -#352]!
        3821e8:	d84649f1 	stmleda	r6, {r0, r4, r5, r6, r7, r8, fp, lr}^
        3821ec:	bd23d82f 	stclt	8, cr13, [r3, -#188]!
        3821f0:	484c84cc 	stmmida	ip, {r2, r3, r6, r7, sl, pc}^
        3821f4:	3d1bee7a 	ldccc	14, cr14, [fp, -#488]
        3821f8:	bd176604 	ldclt	6, cr6, [r7, -#16]
        3821fc:	bd244fdd 	stclt	15, cr4, [r4, -#884]!
        382200:	840b8591 	strhi	r8, [fp], -#1425
        382204:	bd2c64e9 	stclt	4, cr6, [ip, -#932]!
        382208:	71322ce8 	teqvc	r2, r8, ror #25
        38220c:	3d3d84e5 	ldccc	4, cr8, [sp, -#916]!
        382210:	84c2b22c 	strhib	fp, [r2], #556
        382214:	3d0ad2f2 	sfmcc	f5, 1, [sl, -#968]
        382218:	ce96c2d6 	mrcgt	2, 4, ip, cr6, cr6, {6}
        38221c:	bd32a88c 	ldclt	8, cr10, [r2, -#560]!
        382220:	41ba8752 	movmis	r8, r2, asr r7
        382224:	bd3b42b7 	lfmlt	f4, 4, [fp, -#732]!
        382228:	55eba5e1 	strplb	sl, [fp, #1505]!
        38222c:	3d3cca08 	ldccc	10, cr12, [ip, -#32]!
        382230:	e310b9b2 	tst	r0, #2916352	; 0x2c8000
        382234:	3d289309 	stccc	3, cr9, [r8, -#36]!
        382238:	2f25d931 	swics	0x0025d931
        38223c:	bd1a609a 	ldclt	0, cr6, [sl, -#616]
        382240:	caab41fc 	bgt	fee52a38 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd2421e0>
        382244:	bd136e61 	ldclt	14, cr6, [r3, -#388]
        382248:	2387451f 	orrcs	r4, r7, #130023424	; 0x7c00000
        38224c:	bd28a8f2 	stclt	8, cr10, [r8, -#968]!
        382250:	9f6a02dc 	swils	0x006a02dc
        382254:	3d1b194f 	ldccc	9, cr1, [fp, -#316]
        382258:	912b416a 	teqls	fp, sl, ror #2
        38225c:	3d2ef357 	stccc	3, cr15, [lr, -#348]!
        382260:	93c76730 	bicls	r6, r7, #12582912	; 0xc00000
        382264:	7ff80000 	swivc	0x00f80000
        382268:	00000000 	andeq	r0, r0, r0
        38226c:	3fee0fab 	swicc	0x00ee0fab
        382270:	fbc702a3 	blx	ff542d06 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd9324ae>
        382274:	3ff1082b 	swicc	0x00f1082b
        382278:	577d34ee 	ldrplb	r3, [sp, -lr, ror #9]!
        38227c:	bfaf0540 	swilt	0x00af0540
        382280:	438fd5c4 	orrmi	sp, pc, #822083584	; 0x31000000
        382284:	3fb082b5 	swicc	0x00b082b5
        382288:	77d34ed8 	undefined
        38228c:	3ca00000 	stccc	0, cr0, [r0]
        382298:	00000001 	andeq	r0, r0, r1
        3822a4:	40ac3212 	adcmi	r3, ip, r2, lsl r2
        3822a8:	61326ecd 	teqvs	r2, sp, asr #29
        3822ac:	c09a3ff6 	ldrgtsh	r3, [sl], r6
        3822b0:	484aec5c 	stmmida	sl, {r2, r3, r4, r6, sl, fp, sp, lr, pc}^
        3822b4:	4056a260 	submis	sl, r6, r0, ror #4
        3822b8:	64907801 	ldrvs	r7, [r0], #2049
        3822bc:	407e1346 	rsbmis	r1, lr, r6, asr #6
        3822c0:	ce13a963 	cdpgt	9, 1, cr10, cr3, cr3, {3}
        3822c4:	c03d39b1 	ldrgth	r3, [sp], -r1
        3822c8:	c4972cb0 	ldrgt	r2, [r7], #3248
        3822cc:	3fd553ae 	swicc	0x00d553ae
        3822d0:	3b07d8ea 	blcc	578680 <SYMautodockprefspanel+0x7a60>
        3822d4:	be963f86 	cdplt	15, 9, cr3, cr6, cr6, {4}
        3822d8:	6c7af365 	ldcvsl	3, cr15, [sl], -#404
        3822dc:	3ff921fb 	swicc	0x00f921fb
        3822e0:	54442d18 	strplb	r2, [r4], -#3352
        3822e4:	7ff80000 	swivc	0x00f80000
        3822e8:	00210000 	eoreq	r0, r1, r0
        3822ec:	3e400000 	cdpcc	0, 4, cr0, cr0, cr0, {0}
        382300:	e1a0000f 	mov	r0, pc
        382304:	e1a0f00e 	mov	pc, lr
        382308:	54526573 	ldrplb	r6, [r2], -#1395
        38230c:	65727665 	ldrvsb	r7, [r2, -#1637]!
        382310:	64436f6e 	strvsb	r6, [r3], -#3950
        382314:	74696775 	strvcbt	r6, [r9], -#1909
        382318:	6f75734d 	swivs	0x0075734d
        38231c:	656d6f72 	strvsb	r6, [sp, -#3954]!
        382320:	79000000 	stmvcdb	r0, {}
    */
}

/**
 * Symbol: WarmBoot
 * Address: 0038d1e0
 */
void globals::WarmBoot() {
    /*
        38d1e0:	e59f04cc 	ldr	r0, [pc, #4cc]	; 38d6b4 <gParamBlockFromImagePhysicalPtr+0x8>
        38d1e4:	e3a01501 	mov	r1, #4194304	; 0x400000
        38d1e8:	e5801000 	str	r1, [r0]
        38d1ec:	e59f24f4 	ldr	r2, [pc, #4f4]	; 38d6e8 <gParamBlockFromImagePhysicalPtr+0x3c>
        38d1f0:	e5923000 	ldr	r3, [r2]
        38d1f4:	e3130501 	tst	r3, #4194304	; 0x400000
        38d1f8:	1afffffc 	bne	38d1f0 <WarmBoot+0x10>
        38d1fc:	e5801000 	str	r1, [r0]
        38d200:	e1a00007 	mov	r0, r7
        38d204:	e3a01000 	mov	r1, #0	; 0x0
        38d208:	e587117c 	str	r1, [r7, #380]
        38d20c:	e5901170 	ldr	r1, [r0, #368]
        38d210:	e1a01c01 	mov	r1, r1, lsl #24
        38d214:	e1a01c21 	mov	r1, r1, lsr #24
        38d218:	e5902174 	ldr	r2, [r0, #372]
        38d21c:	e5903178 	ldr	r3, [r0, #376]
        38d220:	e3510011 	cmp	r1, #17	; 0x11
        38d224:	8a000012 	bhi	38d274 <WarmBoot+0x94>
        38d228:	e79ff101 	ldr	pc, [pc, r1, lsl #2]
        38d22c:	deadbeef 	cdple	14, 10, cr11, cr13, cr15, {7}
        38d230:	0038d430 	eoreqs	sp, r8, r0, lsr r4
        38d234:	0038d288 	eoreqs	sp, r8, r8, lsl #5
        38d238:	0038d290 	mlaeqs	r8, r0, r2, sp
        38d23c:	0038d298 	mlaeqs	r8, r8, r2, sp
        38d240:	0038d2a4 	eoreqs	sp, r8, r4, lsr #5
        38d244:	0038d2ac 	eoreqs	sp, r8, ip, lsr #5
        38d248:	0038d2cc 	eoreqs	sp, r8, ip, asr #5
        38d24c:	0038d274 	eoreqs	sp, r8, r4, ror r2
        38d250:	0038d41c 	eoreqs	sp, r8, ip, lsl r4
        38d254:	0038d274 	eoreqs	sp, r8, r4, ror r2
        38d258:	0038d274 	eoreqs	sp, r8, r4, ror r2
        38d25c:	0038d2ec 	eoreqs	sp, r8, ip, ror #5
        38d260:	0038d33c 	eoreqs	sp, r8, ip, lsr r3
        38d264:	0038d274 	eoreqs	sp, r8, r4, ror r2
        38d268:	0038d348 	eoreqs	sp, r8, r8, asr #6
        38d26c:	0038d274 	eoreqs	sp, r8, r4, ror r2
        38d270:	0038d3d8 	ldreqsb	sp, [r8], -r8
        38d274:	e3a00001 	mov	r0, #1	; 0x1
        38d278:	e587017c 	str	r0, [r7, #380]
        38d27c:	e3a00009 	mov	r0, #9	; 0x9
        38d280:	e5c70116 	strb	r0, [r7, #278]
        38d284:	eaffffba 	b	38d174 <StopImage>
        38d288:	e5d20000 	ldrb	r0, [r2]
        38d28c:	ea000002 	b	38d29c <WarmBoot+0xbc>
        38d290:	e5c23000 	strb	r3, [r2]
        38d294:	eafffff8 	b	38d27c <WarmBoot+0x9c>
        38d298:	e5920000 	ldr	r0, [r2]
        38d29c:	e5870178 	str	r0, [r7, #376]
        38d2a0:	eafffff5 	b	38d27c <WarmBoot+0x9c>
        38d2a4:	e5823000 	str	r3, [r2]
        38d2a8:	eafffff3 	b	38d27c <WarmBoot+0x9c>
        38d2ac:	e2870d06 	add	r0, r7, #384	; 0x180
        38d2b0:	e0803103 	add	r3, r0, r3, lsl #2
        38d2b4:	ea000001 	b	38d2c0 <WarmBoot+0xe0>
        38d2b8:	e4921004 	ldr	r1, [r2], #4
        38d2bc:	e4801004 	str	r1, [r0], #4
        38d2c0:	e1500003 	cmp	r0, r3
        38d2c4:	3afffffb 	bcc	38d2b8 <WarmBoot+0xd8>
        38d2c8:	eaffffeb 	b	38d27c <WarmBoot+0x9c>
        38d2cc:	e2800d06 	add	r0, r0, #384	; 0x180
        38d2d0:	e0803103 	add	r3, r0, r3, lsl #2
        38d2d4:	ea000001 	b	38d2e0 <WarmBoot+0x100>
        38d2d8:	e4901004 	ldr	r1, [r0], #4
        38d2dc:	e4821004 	str	r1, [r2], #4
        38d2e0:	e1500003 	cmp	r0, r3
        38d2e4:	3afffffb 	bcc	38d2d8 <WarmBoot+0xf8>
        38d2e8:	eaffffe3 	b	38d27c <WarmBoot+0x9c>
        38d2ec:	e59f03f8 	ldr	r0, [pc, #3f8]	; 38d6ec <gParamBlockFromImagePhysicalPtr+0x40>
        38d2f0:	e5900000 	ldr	r0, [r0]
        38d2f4:	e2800d06 	add	r0, r0, #384	; 0x180
        38d2f8:	e1a01002 	mov	r1, r2
        38d2fc:	e1a02003 	mov	r2, r3
        38d300:	e24fe08c 	sub	lr, pc, #140	; 0x8c
    */
}

