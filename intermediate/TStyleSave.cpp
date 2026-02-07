#include "include/TStyleSave.h"

/**
 * Symbol: TStyleSave::__ct(void)
 * Address: 00198220
 */
TStyleSave::TStyleSave(void) {
    /*
        198220:	e1a0c00d 	mov	ip, sp
        198224:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        198228:	e24cb004 	sub	fp, ip, #4	; 0x4
        19822c:	e1b04000 	movs	r4, r0
        198230:	1a000003 	bne	198244 <TStyleSave::__ct(void)+0x24>
        198234:	e3a00070 	mov	r0, #112	; 0x70
        198238:	eb68d93e 	bl	1bce738 <$__nw(unsigned int)>
        19823c:	e1b04000 	movs	r4, r0
        198240:	0a000025 	beq	1982dc <TStyleSave::__ct(void)+0xbc>
        198244:	e3a05000 	mov	r5, #0	; 0x0
        198248:	e584500c 	str	r5, [r4, #12]
        19824c:	e5c45010 	strb	r5, [r4, #16]
        198250:	e3a00001 	mov	r0, #1	; 0x1
        198254:	e5c40011 	strb	r0, [r4, #17]
        198258:	e5845014 	str	r5, [r4, #20]
        19825c:	e5c45018 	strb	r5, [r4, #24]
        198260:	e5c40019 	strb	r0, [r4, #25]
        198264:	e584501c 	str	r5, [r4, #28]
        198268:	e5c45020 	strb	r5, [r4, #32]
        19826c:	e5c40021 	strb	r0, [r4, #33]
        198270:	e3a00002 	mov	r0, #2	; 0x2
        198274:	eb68a7b4 	bl	1bc214c <$AllocateRefHandle(long)>
        198278:	e584002c 	str	r0, [r4, #44]	; fField44
        19827c:	e5a05004 	str	r5, [r0, #4]!	; fField4
        198280:	e3a00002 	mov	r0, #2	; 0x2
        198284:	eb68a7b0 	bl	1bc214c <$AllocateRefHandle(long)>
        198288:	e5840050 	str	r0, [r4, #80]	; fField80
        19828c:	e284106c 	add	r1, r4, #108	; 0x6c
        198290:	e5a05004 	str	r5, [r0, #4]!	; fField4
        198294:	e2840054 	add	r0, r4, #84	; 0x54
        198298:	e59f3044 	ldr	r3, [pc, #44]	; 1982e4 <TStyleSave::__ct(void)+0xc4>	; fField44
        19829c:	e3a02008 	mov	r2, #8	; 0x8
        1982a0:	eb61b3f7 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
        1982a4:	e284004c 	add	r0, r4, #76	; 0x4c
        1982a8:	eb695d3d 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1982ac:	e3e01003 	mvn	r1, #3	; 0x3
        1982b0:	e5940050 	ldr	r0, [r4, #80]	; fField80
        1982b4:	e5801000 	str	r1, [r0]
        1982b8:	e2840034 	add	r0, r4, #52	; 0x34
        1982bc:	e1a06000 	mov	r6, r0
        1982c0:	e3a01000 	mov	r1, #0	; 0x0
        1982c4:	eb0002c3 	bl	198dd8 <SaveLevel::Init(SaveLevel *)>
        1982c8:	e5845044 	str	r5, [r4, #68]	; fField68
        1982cc:	e5846030 	str	r6, [r4, #48]	; fField48
        1982d0:	e5845048 	str	r5, [r4, #72]	; fField72
        1982d4:	e5845004 	str	r5, [r4, #4]	; fField4
        1982d8:	e584506c 	str	r5, [r4, #108]	; fField108
        1982dc:	e1a00004 	mov	r0, r4
        1982e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1982e4:	0038aeac 	eoreqs	sl, r8, ip, lsr #29
    */
}

/**
 * Symbol: TStyleSave::__dt(void)
 * Address: 0019836c
 */
TStyleSave::~TStyleSave(void) {
    /*
        19836c:	e1a0c00d 	mov	ip, sp
        198370:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        198374:	e24cb004 	sub	fp, ip, #4	; 0x4
        198378:	e1a04000 	mov	r4, r0
        19837c:	e1a05001 	mov	r5, r1
        198380:	eb000276 	bl	198d60 <TStyleSave::EndLevel(void)>
        198384:	e284104c 	add	r1, r4, #76	; 0x4c
        198388:	e2840064 	add	r0, r4, #100	; 0x64
        19838c:	e59f304c 	ldr	r3, [pc, #4c]	; 1983e0 <TStyleSave::__dt(void)+0x74>	; fField4
        198390:	e3e02007 	mvn	r2, #7	; 0x7
        198394:	eb61b3bb 	bl	1a05288 <$__vc__FPvT1iPFPvi_v>
        198398:	e5940050 	ldr	r0, [r4, #80]	; fField80
        19839c:	eb68ab86 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1983a0:	e594002c 	ldr	r0, [r4, #44]	; fField44
        1983a4:	eb68ab84 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1983a8:	e284001c 	add	r0, r4, #28	; 0x1c
        1983ac:	e3a01000 	mov	r1, #0	; 0x0
        1983b0:	eb63c436 	bl	1a89490 <TPattern::$__dt(void)>
        1983b4:	e2840014 	add	r0, r4, #20	; 0x14
        1983b8:	e3a01000 	mov	r1, #0	; 0x0
        1983bc:	eb63c433 	bl	1a89490 <TPattern::$__dt(void)>
        1983c0:	e284000c 	add	r0, r4, #12	; 0xc
        1983c4:	e3a01000 	mov	r1, #0	; 0x0
        1983c8:	eb63c430 	bl	1a89490 <TPattern::$__dt(void)>
        1983cc:	e3150001 	tst	r5, #1	; 0x1
        1983d0:	11a00004 	movne	r0, r4
        1983d4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1983d8:	1a68d4c0 	bne	1bcd6e0 <$__dl(void *)>
        1983dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1983e0:	0038c848 	eoreqs	ip, r8, r8, asr #16
    */
}

/**
 * Symbol: TStyleSave::LookupCache(void)
 * Address: 001983e4
 */
TStyleSave::LookupCache(void) {
    /*
        1983e4:	e1a0c00d 	mov	ip, sp
        1983e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1983ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1983f0:	e1a04000 	mov	r4, r0
        1983f4:	e3a05000 	mov	r5, #0	; 0x0
        1983f8:	e2806050 	add	r6, r0, #80	; 0x50
        1983fc:	e0841185 	add	r1, r4, r5, lsl #3
        198400:	e5911054 	ldr	r1, [r1, #84]
        198404:	e5911000 	ldr	r1, [r1]
        198408:	e5960000 	ldr	r0, [r6]
        19840c:	e5900000 	ldr	r0, [r0]
        198410:	eb68af86 	bl	1bc4230 <$EQRef__FlT1>
        198414:	e3300000 	teq	r0, #0	; 0x0
        198418:	10840185 	addne	r0, r4, r5, lsl #3
        19841c:	12800054 	addne	r0, r0, #84	; 0x54
        198420:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        198424:	e2855001 	add	r5, r5, #1	; 0x1
        198428:	e3550003 	cmp	r5, #3	; 0x3
        19842c:	bafffff2 	blt	1983fc <TStyleSave::LookupCache(void)+0x18>
        198430:	e594006c 	ldr	r0, [r4, #108]	; fField108
        198434:	e2801001 	add	r1, r0, #1	; 0x1
        198438:	e584106c 	str	r1, [r4, #108]	; fField108
        19843c:	e0840180 	add	r0, r4, r0, lsl #3
        198440:	e2800054 	add	r0, r0, #84	; 0x54
        198444:	e3510003 	cmp	r1, #3	; 0x3
        198448:	a3a01000 	movge	r1, #0	; 0x0
        19844c:	a5a4106c 	strge	r1, [r4, #108]!	; fField108
        198450:	e5961000 	ldr	r1, [r6]
        198454:	e5911000 	ldr	r1, [r1]
        198458:	e5902000 	ldr	r2, [r0]
        19845c:	e5821000 	str	r1, [r2]
        198460:	e3e01000 	mvn	r1, #0	; 0x0
        198464:	e5801004 	str	r1, [r0, #4]	; fField4
        198468:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStyleSave::SetStyle(RefVar const &, TPoint const &, long)
 * Address: 0019846c
 */
TStyleSave::SetStyle(RefVar const &, TPoint const &, long) {
    /*
        19846c:	e1a0c00d 	mov	ip, sp
        198470:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        198474:	e24cb004 	sub	fp, ip, #4	; 0x4
        198478:	e1a04000 	mov	r4, r0
        19847c:	e1a05001 	mov	r5, r1
        198480:	e1a06002 	mov	r6, r2
        198484:	e1a09003 	mov	r9, r3
        198488:	e2800050 	add	r0, r0, #80	; 0x50
        19848c:	e1a08000 	mov	r8, r0
        198490:	e5911000 	ldr	r1, [r1]
        198494:	e5911000 	ldr	r1, [r1]
        198498:	e5900000 	ldr	r0, [r0]
        19849c:	e5900000 	ldr	r0, [r0]
        1984a0:	eb68af62 	bl	1bc4230 <$EQRef__FlT1>
        1984a4:	e3a07001 	mov	r7, #1	; 0x1
        1984a8:	e3300000 	teq	r0, #0	; 0x0
        1984ac:	11a00007 	movne	r0, r7
        1984b0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1984b4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1984b8:	e2090001 	and	r0, r9, #1	; 0x1
        1984bc:	e58d0004 	str	r0, [sp, #4]	; fField4
        1984c0:	e2090002 	and	r0, r9, #2	; 0x2
        1984c4:	e58d0000 	str	r0, [sp]
        1984c8:	e5950000 	ldr	r0, [r5]
        1984cc:	e5900000 	ldr	r0, [r0]
        1984d0:	e5981000 	ldr	r1, [r8]
        1984d4:	e5810000 	str	r0, [r1]
        1984d8:	eb66e911 	bl	1b52924 <$PenNormal(void)>
        1984dc:	e3a07001 	mov	r7, #1	; 0x1
        1984e0:	e5c47000 	strb	r7, [r4]
        1984e4:	e3a00000 	mov	r0, #0	; 0x0
        1984e8:	e5c40001 	strb	r0, [r4, #1]	; fField1
        1984ec:	e5c40002 	strb	r0, [r4, #2]	; fField2
        1984f0:	e5840028 	str	r0, [r4, #40]	; fField40
        1984f4:	e5847008 	str	r7, [r4, #8]	; fField8
        1984f8:	e5840024 	str	r0, [r4, #36]	; fField36
        1984fc:	e3a09000 	mov	r9, #0	; 0x0
        198500:	e3a0a001 	mov	sl, #1	; 0x1
        198504:	e5840004 	str	r0, [r4, #4]	; fField4
        198508:	e5950000 	ldr	r0, [r5]
        19850c:	e5900000 	ldr	r0, [r0]
        198510:	e284802c 	add	r8, r4, #44	; 0x2c
        198514:	e3300002 	teq	r0, #2	; 0x2
        198518:	0a0001f7 	beq	198cfc <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x890>
        19851c:	e24dd004 	sub	sp, sp, #4	; 0x4
        198520:	e1a00004 	mov	r0, r4
        198524:	ebffffae 	bl	1983e4 <TStyleSave::LookupCache(void)>
        198528:	e1a07000 	mov	r7, r0
        19852c:	e3a00002 	mov	r0, #2	; 0x2
        198530:	eb68a705 	bl	1bc214c <$AllocateRefHandle(long)>
        198534:	e58d0000 	str	r0, [sp]
        198538:	e5970004 	ldr	r0, [r7, #4]	; fField4
        19853c:	e3100080 	tst	r0, #128	; 0x80
        198540:	0a000092 	beq	198790 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x324>
        198544:	e59f116c 	ldr	r1, [pc, #16c]	; 1986b8 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x24c>
        198548:	e1a00005 	mov	r0, r5
        19854c:	e3a02000 	mov	r2, #0	; 0x0
        198550:	eb68af44 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        198554:	e59d1000 	ldr	r1, [sp]
        198558:	e5810000 	str	r0, [r1]
        19855c:	e3300002 	teq	r0, #2	; 0x2
        198560:	05970004 	ldreq	r0, [r7, #4]	; fField4
        198564:	03c00080 	biceq	r0, r0, #128	; 0x80
        198568:	05870004 	streq	r0, [r7, #4]	; fField4
        19856c:	0a000087 	beq	198790 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x324>
        198570:	e24dd008 	sub	sp, sp, #8	; 0x8
        198574:	e28d0008 	add	r0, sp, #8	; 0x8
        198578:	eb68a6fa 	bl	1bc2168 <$ClassOf(RefVar const &)>
        19857c:	eb68a6f2 	bl	1bc214c <$AllocateRefHandle(long)>
        198580:	e1a0a000 	mov	sl, r0
        198584:	e5901000 	ldr	r1, [r0]
        198588:	e59f012c 	ldr	r0, [pc, #12c]	; 1986bc <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x250>
        19858c:	e5900000 	ldr	r0, [r0]
        198590:	e5900000 	ldr	r0, [r0]
        198594:	eb68af25 	bl	1bc4230 <$EQRef__FlT1>
        198598:	e3300000 	teq	r0, #0	; 0x0
        19859c:	13a00000 	movne	r0, #0	; 0x0
        1985a0:	03a00001 	moveq	r0, #1	; 0x1
        1985a4:	e58d0000 	str	r0, [sp]
        1985a8:	e1a0000a 	mov	r0, sl
        1985ac:	eb68ab02 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1985b0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1985b4:	e3300000 	teq	r0, #0	; 0x0
        1985b8:	0a000009 	beq	1985e4 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x178>
        1985bc:	e3a00002 	mov	r0, #2	; 0x2
        1985c0:	eb68a6e1 	bl	1bc214c <$AllocateRefHandle(long)>
        1985c4:	e58d0000 	str	r0, [sp]
        1985c8:	e1a0000d 	mov	r0, sp
        1985cc:	e28d1004 	add	r1, sp, #4	; 0x4
        1985d0:	eb650190 	bl	1ad8c18 <$FMakeRegion>
        1985d4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1985d8:	e5810000 	str	r0, [r1]
        1985dc:	e59d0000 	ldr	r0, [sp]
        1985e0:	eb68aaf5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1985e4:	e59f00d4 	ldr	r0, [pc, #d4]	; 1986c0 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x254>
        1985e8:	e5900000 	ldr	r0, [r0]
        1985ec:	e5901000 	ldr	r1, [r0]
        1985f0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1985f4:	e5900000 	ldr	r0, [r0]
        1985f8:	eb68af18 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1985fc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        198600:	e5810000 	str	r0, [r1]
        198604:	e24dd00c 	sub	sp, sp, #12	; 0xc
        198608:	e28d1010 	add	r1, sp, #16	; 0x10
        19860c:	e28d0008 	add	r0, sp, #8	; 0x8
        198610:	eb68a2b0 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        198614:	e3a00000 	mov	r0, #0	; 0x0
        198618:	e58d0004 	str	r0, [sp, #4]	; fField4
        19861c:	e58d0000 	str	r0, [sp]
        198620:	eb651618 	bl	1adde88 <$GetActualClip__9TQDScalerSFv>
        198624:	e1a0a000 	mov	sl, r0
        198628:	e3a00000 	mov	r0, #0	; 0x0
        19862c:	e52d006c 	str	r0, [sp, -#108]!	; fField108
        198630:	e28d0008 	add	r0, sp, #8	; 0x8
        198634:	eb6868ce 	bl	1bb2974 <$setjmp>
        198638:	e3300000 	teq	r0, #0	; 0x0
        19863c:	1a000090 	bne	198884 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x418>
        198640:	e1a0000d 	mov	r0, sp
        198644:	eb691e8c 	bl	1be007c <$AddExceptionHandler>
        198648:	e5940030 	ldr	r0, [r4, #48]	; fField48
        19864c:	e590200c 	ldr	r2, [r0, #12]
        198650:	e3120002 	tst	r2, #2	; 0x2
        198654:	1a00001b 	bne	1986c8 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x25c>
        198658:	e3821002 	orr	r1, r2, #2	; 0x2
        19865c:	e5a0100c 	str	r1, [r0, #12]!
        198660:	eb66e498 	bl	1b518c8 <$NewRgn(void)>
        198664:	e58d006c 	str	r0, [sp, #108]	; fField108
        198668:	e3300000 	teq	r0, #0	; 0x0
        19866c:	1a000005 	bne	198688 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x21c>
        198670:	e59f004c 	ldr	r0, [pc, #4c]	; 1986c4 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x258>	; fField4
        198674:	e5900000 	ldr	r0, [r0]
        198678:	e3a02000 	mov	r2, #0	; 0x0
        19867c:	e3a010e9 	mov	r1, #233	; 0xe9
        198680:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        198684:	eb692ac4 	bl	1be319c <$Throw>
        198688:	e1a0000a 	mov	r0, sl
        19868c:	e59d106c 	ldr	r1, [sp, #108]	; fField108
        198690:	eb66d407 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        198694:	e59d106c 	ldr	r1, [sp, #108]	; fField108
        198698:	e5940030 	ldr	r0, [r4, #48]	; fField48
        19869c:	e5a01004 	str	r1, [r0, #4]!	; fField4
        1986a0:	eb6511f5 	bl	1adce7c <$GetTransformLevel__9TQDScalerSFv>
        1986a4:	e5941030 	ldr	r1, [r4, #48]	; fField48
        1986a8:	e5a10008 	str	r0, [r1, #8]!	; fField8
        1986ac:	e3a00000 	mov	r0, #0	; 0x0
        1986b0:	e58d006c 	str	r0, [sp, #108]	; fField108
        1986b4:	ea000004 	b	1986cc <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x260>
        1986b8:	00682490 	streqb	r2, [r8], -#64
        1986bc:	00684228 	rsbeq	r4, r8, r8, lsr #4
        1986c0:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        1986c4:	00371318 	eoreqs	r1, r7, r8, lsl r3
        1986c8:	e5b0a004 	ldr	sl, [r0, #4]!	; fField4
        1986cc:	e59d007c 	ldr	r0, [sp, #124]
        1986d0:	e5900000 	ldr	r0, [r0]
        1986d4:	eb68b2f4 	bl	1bc52ac <$Length(long)>
        1986d8:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1986dc:	e28d0078 	add	r0, sp, #120	; 0x78
        1986e0:	eb68a68b 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1986e4:	e49d1004 	ldr	r1, [sp], #4	; fField4
        1986e8:	eb69268e 	bl	1be2128 <$NewFakeHandle>
        1986ec:	e58d0070 	str	r0, [sp, #112]
        1986f0:	e1a01000 	mov	r1, r0
        1986f4:	e5940030 	ldr	r0, [r4, #48]	; fField48
        1986f8:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
        1986fc:	e1a0000a 	mov	r0, sl
        198700:	eb6515df 	bl	1adde84 <$ReplaceClip__9TQDScalerSFPP6RegionT1l>
        198704:	e5940044 	ldr	r0, [r4, #68]	; fField68
        198708:	e2800001 	add	r0, r0, #1	; 0x1
        19870c:	e5840044 	str	r0, [r4, #68]	; fField68
        198710:	e59d0070 	ldr	r0, [sp, #112]
        198714:	eb692265 	bl	1be10b0 <$DisposHandle>
        198718:	e3a00000 	mov	r0, #0	; 0x0
        19871c:	e58d0070 	str	r0, [sp, #112]
        198720:	e5940048 	ldr	r0, [r4, #72]	; fField72
        198724:	e3300000 	teq	r0, #0	; 0x0
        198728:	1a00000a 	bne	198758 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x2ec>
        19872c:	e5960002 	ldr	r0, [r6, #2]	; fField2
        198730:	e1a00840 	mov	r0, r0, asr #16
        198734:	e5961000 	ldr	r1, [r6]
        198738:	e1900841 	orrs	r0, r0, r1, asr #16
        19873c:	0a000005 	beq	198758 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x2ec>
        198740:	eb6515d0 	bl	1adde88 <$GetActualClip__9TQDScalerSFv>
        198744:	e5961002 	ldr	r1, [r6, #2]	; fField2
        198748:	e1a01841 	mov	r1, r1, asr #16
        19874c:	e5962000 	ldr	r2, [r6]
        198750:	e1a02842 	mov	r2, r2, asr #16
        198754:	eb66e464 	bl	1b518ec <$OffsetRgn__FPP6RegionlT2>
        198758:	eb6515ca 	bl	1adde88 <$GetActualClip__9TQDScalerSFv>
        19875c:	e5900000 	ldr	r0, [r0]
        198760:	e2800004 	add	r0, r0, #4	; 0x4
        198764:	e594104c 	ldr	r1, [r4, #76]	; fField76
        198768:	e5911024 	ldr	r1, [r1, #36]	; fField36
        19876c:	eb66ec89 	bl	1b53998 <$RectInRgn(Rect *, Region **)>
        198770:	e1a0a000 	mov	sl, r0
        198774:	e1a0000d 	mov	r0, sp
        198778:	eb69224e 	bl	1be10b8 <$ExitHandler>
        19877c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        198780:	e28d0008 	add	r0, sp, #8	; 0x8
        198784:	e3a01000 	mov	r1, #0	; 0x0
        198788:	eb68a65c 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        19878c:	e28dd010 	add	sp, sp, #16	; 0x10
        198790:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        198794:	e3300000 	teq	r0, #0	; 0x0
        198798:	1a00007d 	bne	198994 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x528>
        19879c:	e5970004 	ldr	r0, [r7, #4]	; fField4
        1987a0:	e3100c01 	tst	r0, #256	; 0x100
        1987a4:	0a00007a 	beq	198994 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x528>
        1987a8:	e59f10d0 	ldr	r1, [pc, #d0]	; 198880 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x414>
        1987ac:	e1a00005 	mov	r0, r5
        1987b0:	e3a02000 	mov	r2, #0	; 0x0
        1987b4:	eb68aeab 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1987b8:	e59d1000 	ldr	r1, [sp]
        1987bc:	e5810000 	str	r0, [r1]
        1987c0:	e3300002 	teq	r0, #2	; 0x2
        1987c4:	05970004 	ldreq	r0, [r7, #4]	; fField4
        1987c8:	03c00c01 	biceq	r0, r0, #256	; 0x100
        1987cc:	05870004 	streq	r0, [r7, #4]	; fField4
        1987d0:	0a00006f 	beq	198994 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x528>
        1987d4:	e24dd014 	sub	sp, sp, #20	; 0x14
        1987d8:	e3a01000 	mov	r1, #0	; 0x0
        1987dc:	eb68ae9c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1987e0:	eb68a659 	bl	1bc214c <$AllocateRefHandle(long)>
        1987e4:	e58d0000 	str	r0, [sp]
        1987e8:	e5900000 	ldr	r0, [r0]
        1987ec:	e3100003 	tst	r0, #3	; 0x3
        1987f0:	1a00002e 	bne	1988b0 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x444>
        1987f4:	e3a01000 	mov	r1, #0	; 0x0
        1987f8:	e3a0000a 	mov	r0, #10	; 0xa
        1987fc:	e58d100c 	str	r1, [sp, #12]
        198800:	e5cd0013 	strb	r0, [sp, #19]
        198804:	e5cd1012 	strb	r1, [sp, #18]
        198808:	e5cd0011 	strb	r0, [sp, #17]
        19880c:	e5cd1010 	strb	r1, [sp, #16]
        198810:	e28d1004 	add	r1, sp, #4	; 0x4
        198814:	e28d000c 	add	r0, sp, #12	; 0xc
        198818:	e8905000 	ldmia	r0, {ip, lr}
        19881c:	e8815000 	stmia	r1, {ip, lr}
        198820:	e24dd004 	sub	sp, sp, #4	; 0x4
        198824:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        198828:	e5900000 	ldr	r0, [r0]
        19882c:	e3100003 	tst	r0, #3	; 0x3
        198830:	01a00140 	moveq	r0, r0, asr #2
        198834:	0a000000 	beq	19883c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x3d0>
        198838:	eb68a637 	bl	1bc211c <$_RINTError(long)>
        19883c:	e3a01001 	mov	r1, #1	; 0x1
        198840:	e58d0000 	str	r0, [sp]
        198844:	e59d0018 	ldr	r0, [sp, #24]
        198848:	e5900000 	ldr	r0, [r0]
        19884c:	eb68ae80 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        198850:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        198854:	e5810000 	str	r0, [r1]
        198858:	e3100003 	tst	r0, #3	; 0x3
        19885c:	01a00140 	moveq	r0, r0, asr #2
        198860:	0a000000 	beq	198868 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x3fc>
        198864:	eb68a62c 	bl	1bc211c <$_RINTError(long)>
        198868:	e1a02000 	mov	r2, r0
        19886c:	e28d0008 	add	r0, sp, #8	; 0x8
        198870:	e59d1000 	ldr	r1, [sp]
        198874:	eb66e41b 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        198878:	e28dd004 	add	sp, sp, #4	; 0x4
        19887c:	ea000017 	b	1988e0 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x474>
        198880:	00684c68 	rsbeq	r4, r8, r8, ror #24
        198884:	e59d006c 	ldr	r0, [sp, #108]	; fField108
        198888:	eb66d394 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        19888c:	e59d0070 	ldr	r0, [sp, #112]
        198890:	e3300000 	teq	r0, #0	; 0x0
        198894:	1b692205 	blne	1be10b0 <$DisposHandle>
        198898:	e28d0074 	add	r0, sp, #116	; 0x74
        19889c:	e3a01000 	mov	r1, #0	; 0x0
        1988a0:	eb68a616 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1988a4:	e1a0000d 	mov	r0, sp
        1988a8:	eb692629 	bl	1be2154 <$NextHandler>
        1988ac:	eafffff4 	b	198884 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x418>
        1988b0:	e28d100c 	add	r1, sp, #12	; 0xc
        1988b4:	e1a0000d 	mov	r0, sp
        1988b8:	eb63f06e 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        1988bc:	e3a01001 	mov	r1, #1	; 0x1
        1988c0:	e59d0014 	ldr	r0, [sp, #20]
        1988c4:	e5900000 	ldr	r0, [r0]
        1988c8:	eb68ae61 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1988cc:	e59d1000 	ldr	r1, [sp]
        1988d0:	e5810000 	str	r0, [r1]
        1988d4:	e28d1004 	add	r1, sp, #4	; 0x4
        1988d8:	e1a0000d 	mov	r0, sp
        1988dc:	eb63f065 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
        1988e0:	e28d1004 	add	r1, sp, #4	; 0x4
        1988e4:	e28d000c 	add	r0, sp, #12	; 0xc
        1988e8:	eb66d78f 	bl	1b4e72c <$EqualRect__FP4RectT1>
        1988ec:	e3300000 	teq	r0, #0	; 0x0
        1988f0:	1a000024 	bne	198988 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x51c>
        1988f4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1988f8:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1988fc:	e3300000 	teq	r0, #0	; 0x0
        198900:	1a000009 	bne	19892c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x4c0>
        198904:	e24dd004 	sub	sp, sp, #4	; 0x4
        198908:	e5960000 	ldr	r0, [r6]
        19890c:	e58d0000 	str	r0, [sp]
        198910:	e28d0024 	add	r0, sp, #36	; 0x24
        198914:	e59d1002 	ldr	r1, [sp, #2]	; fField2
        198918:	e1a01841 	mov	r1, r1, asr #16
        19891c:	e59d2000 	ldr	r2, [sp]
        198920:	e1a02842 	mov	r2, r2, asr #16
        198924:	eb66e3ef 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        198928:	e28dd004 	add	sp, sp, #4	; 0x4
        19892c:	e28d2020 	add	r2, sp, #32	; 0x20
        198930:	e28d1028 	add	r1, sp, #40	; 0x28
        198934:	e1a0000d 	mov	r0, sp
        198938:	e3a03000 	mov	r3, #0	; 0x0
        19893c:	eb642606 	bl	1aa215c <TTransform::$Setup(TRect const *, TRect const *, unsigned char)>
        198940:	e5940030 	ldr	r0, [r4, #48]	; fField48
        198944:	e590000c 	ldr	r0, [r0, #12]
        198948:	e3100001 	tst	r0, #1	; 0x1
        19894c:	e1a0000d 	mov	r0, sp
        198950:	0a000001 	beq	19895c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x4f0>
        198954:	eb65112e 	bl	1adce14 <$ReplaceScaling__9TQDScalerSFP10TTransform>
        198958:	ea000006 	b	198978 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x50c>
        19895c:	e3a02000 	mov	r2, #0	; 0x0
        198960:	e3a01000 	mov	r1, #0	; 0x0
        198964:	eb64f028 	bl	1ad4a0c <$StartScaling__9TQDScalerSFP10TTransformUcl>
        198968:	e5940030 	ldr	r0, [r4, #48]	; fField48
        19896c:	e590100c 	ldr	r1, [r0, #12]
        198970:	e3811001 	orr	r1, r1, #1	; 0x1
        198974:	e5a0100c 	str	r1, [r0, #12]!
        198978:	e5940048 	ldr	r0, [r4, #72]	; fField72
        19897c:	e2800001 	add	r0, r0, #1	; 0x1
        198980:	e5840048 	str	r0, [r4, #72]	; fField72
        198984:	e28dd01c 	add	sp, sp, #28	; 0x1c
        198988:	e59d0000 	ldr	r0, [sp]
        19898c:	eb68aa0a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        198990:	e28dd014 	add	sp, sp, #20	; 0x14
        198994:	e3a06001 	mov	r6, #1	; 0x1
        198998:	e5970004 	ldr	r0, [r7, #4]	; fField4
        19899c:	e3100c02 	tst	r0, #512	; 0x200
        1989a0:	0a000011 	beq	1989ec <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x580>
        1989a4:	e59f10a8 	ldr	r1, [pc, #a8]	; 198a54 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x5e8>
        1989a8:	e1a00005 	mov	r0, r5
        1989ac:	e3a02000 	mov	r2, #0	; 0x0
        1989b0:	eb68ae2c 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1989b4:	e59d1000 	ldr	r1, [sp]
        1989b8:	e5810000 	str	r0, [r1]
        1989bc:	e1a01000 	mov	r1, r0
        1989c0:	e3300002 	teq	r0, #2	; 0x2
        1989c4:	05970004 	ldreq	r0, [r7, #4]	; fField4
        1989c8:	03c00c02 	biceq	r0, r0, #512	; 0x200
        1989cc:	05870004 	streq	r0, [r7, #4]	; fField4
        1989d0:	0a000005 	beq	1989ec <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x580>
        1989d4:	e1a00001 	mov	r0, r1
        1989d8:	e3110003 	tst	r1, #3	; 0x3
        1989dc:	01a00140 	moveq	r0, r0, asr #2
        1989e0:	0a000000 	beq	1989e8 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x57c>
        1989e4:	eb68a5cc 	bl	1bc211c <$_RINTError(long)>
        1989e8:	e5840004 	str	r0, [r4, #4]	; fField4
        1989ec:	e5970004 	ldr	r0, [r7, #4]	; fField4
        1989f0:	e3100010 	tst	r0, #16	; 0x10
        1989f4:	0a000030 	beq	198abc <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x650>
        1989f8:	e59f1058 	ldr	r1, [pc, #58]	; 198a58 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x5ec>
        1989fc:	e1a00005 	mov	r0, r5
        198a00:	e3a02000 	mov	r2, #0	; 0x0
        198a04:	eb68ae17 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        198a08:	e59d1000 	ldr	r1, [sp]
        198a0c:	e5810000 	str	r0, [r1]
        198a10:	e3300002 	teq	r0, #2	; 0x2
        198a14:	05970004 	ldreq	r0, [r7, #4]	; fField4
        198a18:	03c00010 	biceq	r0, r0, #16	; 0x10
        198a1c:	05870004 	streq	r0, [r7, #4]	; fField4
        198a20:	0a000025 	beq	198abc <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x650>
        198a24:	e2001003 	and	r1, r0, #3	; 0x3
        198a28:	e3510000 	cmp	r1, #0	; 0x0
        198a2c:	1a00000a 	bne	198a5c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x5f0>
        198a30:	01a00140 	moveq	r0, r0, asr #2
        198a34:	0a000000 	beq	198a3c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x5d0>
        198a38:	eb68a5b7 	bl	1bc211c <$_RINTError(long)>
        198a3c:	e3a06000 	mov	r6, #0	; 0x0
        198a40:	e3500000 	cmp	r0, #0	; 0x0
        198a44:	d1a00006 	movle	r0, r6
        198a48:	e1a01000 	mov	r1, r0
        198a4c:	e1a06000 	mov	r6, r0
        198a50:	ea000017 	b	198ab4 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x648>
        198a54:	00684500 	rsbeq	r4, r8, r0, lsl #10
        198a58:	00683d98 	streqb	r3, [r8], -#216
        198a5c:	e3a06000 	mov	r6, #0	; 0x0
        198a60:	e1a01006 	mov	r1, r6
        198a64:	eb68adfa 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        198a68:	e3100003 	tst	r0, #3	; 0x3
        198a6c:	01a00140 	moveq	r0, r0, asr #2
        198a70:	0a000000 	beq	198a78 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x60c>
        198a74:	eb68a5a8 	bl	1bc211c <$_RINTError(long)>
        198a78:	e3500000 	cmp	r0, #0	; 0x0
        198a7c:	d3a00000 	movle	r0, #0	; 0x0
        198a80:	e1a06000 	mov	r6, r0
        198a84:	e3a01001 	mov	r1, #1	; 0x1
        198a88:	e59d0000 	ldr	r0, [sp]
        198a8c:	e5900000 	ldr	r0, [r0]
        198a90:	eb68adef 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        198a94:	e3100003 	tst	r0, #3	; 0x3
        198a98:	01a00140 	moveq	r0, r0, asr #2
        198a9c:	0a000000 	beq	198aa4 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x638>
        198aa0:	eb68a59d 	bl	1bc211c <$_RINTError(long)>
        198aa4:	e3a01000 	mov	r1, #0	; 0x0
        198aa8:	e3500000 	cmp	r0, #0	; 0x0
        198aac:	d1a00001 	movle	r0, r1
        198ab0:	e1a01000 	mov	r1, r0
        198ab4:	e1a00006 	mov	r0, r6
        198ab8:	eb66e79a 	bl	1b52928 <$PenSize__FlT1>
        198abc:	e3a06001 	mov	r6, #1	; 0x1
        198ac0:	e5970004 	ldr	r0, [r7, #4]	; fField4
        198ac4:	e3100002 	tst	r0, #2	; 0x2
        198ac8:	0a00000f 	beq	198b0c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x6a0>
        198acc:	e59f1240 	ldr	r1, [pc, #240]	; 198d14 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x8a8>
        198ad0:	e1a00005 	mov	r0, r5
        198ad4:	e3a02000 	mov	r2, #0	; 0x0
        198ad8:	eb68ade2 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        198adc:	e59d1000 	ldr	r1, [sp]
        198ae0:	e5810000 	str	r0, [r1]
        198ae4:	e3300002 	teq	r0, #2	; 0x2
        198ae8:	05970004 	ldreq	r0, [r7, #4]	; fField4
        198aec:	03c00002 	biceq	r0, r0, #2	; 0x2
        198af0:	05870004 	streq	r0, [r7, #4]	; fField4
        198af4:	0a000004 	beq	198b0c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x6a0>
        198af8:	e284000c 	add	r0, r4, #12	; 0xc
        198afc:	e1a0100d 	mov	r1, sp
        198b00:	e3a02000 	mov	r2, #0	; 0x0
        198b04:	eb63f3ee 	bl	1a95ac4 <TPattern::$GetFillPattern(RefVar const &, unsigned char)>
        198b08:	e5c40001 	strb	r0, [r4, #1]	; fField1
        198b0c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        198b10:	e3300000 	teq	r0, #0	; 0x0
        198b14:	1a000073 	bne	198ce8 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x87c>
        198b18:	e5970004 	ldr	r0, [r7, #4]	; fField4
        198b1c:	e3100001 	tst	r0, #1	; 0x1
        198b20:	0a000015 	beq	198b7c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x710>
        198b24:	e59f11ec 	ldr	r1, [pc, #1ec]	; 198d18 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x8ac>	; fField1
        198b28:	e1a00005 	mov	r0, r5
        198b2c:	e3a02000 	mov	r2, #0	; 0x0
        198b30:	eb68adcc 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        198b34:	e59d1000 	ldr	r1, [sp]
        198b38:	e5810000 	str	r0, [r1]
        198b3c:	e1a01000 	mov	r1, r0
        198b40:	e3300002 	teq	r0, #2	; 0x2
        198b44:	05970004 	ldreq	r0, [r7, #4]	; fField4
        198b48:	03c00001 	biceq	r0, r0, #1	; 0x1
        198b4c:	05870004 	streq	r0, [r7, #4]	; fField4
        198b50:	0a000009 	beq	198b7c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x710>
        198b54:	e1a00001 	mov	r0, r1
        198b58:	e3110003 	tst	r1, #3	; 0x3
        198b5c:	01a00140 	moveq	r0, r0, asr #2
        198b60:	0a000000 	beq	198b68 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x6fc>
        198b64:	eb68a56c 	bl	1bc211c <$_RINTError(long)>
        198b68:	e5840008 	str	r0, [r4, #8]	; fField8
        198b6c:	e3300008 	teq	r0, #8	; 0x8
        198b70:	03a00001 	moveq	r0, #1	; 0x1
        198b74:	e2800008 	add	r0, r0, #8	; 0x8
        198b78:	eb66e768 	bl	1b52920 <$PenMode(long)>
        198b7c:	e5970004 	ldr	r0, [r7, #4]	; fField4
        198b80:	e3100004 	tst	r0, #4	; 0x4
        198b84:	0a00000f 	beq	198bc8 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x75c>
        198b88:	e59f118c 	ldr	r1, [pc, #18c]	; 198d1c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x8b0>
        198b8c:	e1a00005 	mov	r0, r5
        198b90:	e3a02000 	mov	r2, #0	; 0x0
        198b94:	eb68adb3 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        198b98:	e59d1000 	ldr	r1, [sp]
        198b9c:	e5810000 	str	r0, [r1]
        198ba0:	e3300002 	teq	r0, #2	; 0x2
        198ba4:	05970004 	ldreq	r0, [r7, #4]	; fField4
        198ba8:	03c00004 	biceq	r0, r0, #4	; 0x4
        198bac:	05870004 	streq	r0, [r7, #4]	; fField4
        198bb0:	0a000004 	beq	198bc8 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x75c>
        198bb4:	e2840014 	add	r0, r4, #20	; 0x14
        198bb8:	e1a0100d 	mov	r1, sp
        198bbc:	e3a02001 	mov	r2, #1	; 0x1
        198bc0:	eb63f3bf 	bl	1a95ac4 <TPattern::$GetFillPattern(RefVar const &, unsigned char)>
        198bc4:	e5c40000 	strb	r0, [r4]
        198bc8:	e5970004 	ldr	r0, [r7, #4]	; fField4
        198bcc:	e3100008 	tst	r0, #8	; 0x8
        198bd0:	0a000013 	beq	198c24 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x7b8>
        198bd4:	e59f1144 	ldr	r1, [pc, #144]	; 198d20 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x8b4>
        198bd8:	e1a00005 	mov	r0, r5
        198bdc:	e3a02000 	mov	r2, #0	; 0x0
        198be0:	eb68ada0 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        198be4:	e59d1000 	ldr	r1, [sp]
        198be8:	e5810000 	str	r0, [r1]
        198bec:	e3300002 	teq	r0, #2	; 0x2
        198bf0:	05970004 	ldreq	r0, [r7, #4]	; fField4
        198bf4:	03c00008 	biceq	r0, r0, #8	; 0x8
        198bf8:	05870004 	streq	r0, [r7, #4]	; fField4
        198bfc:	0a000008 	beq	198c24 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x7b8>
        198c00:	e284001c 	add	r0, r4, #28	; 0x1c
        198c04:	e1a06000 	mov	r6, r0
        198c08:	e1a0100d 	mov	r1, sp
        198c0c:	e3a02001 	mov	r2, #1	; 0x1
        198c10:	eb63f3ab 	bl	1a95ac4 <TPattern::$GetFillPattern(RefVar const &, unsigned char)>
        198c14:	e5c40002 	strb	r0, [r4, #2]	; fField2
        198c18:	e31000ff 	tst	r0, #255	; 0xff
        198c1c:	13a00001 	movne	r0, #1	; 0x1
        198c20:	15c60005 	strneb	r0, [r6, #5]
        198c24:	e5970004 	ldr	r0, [r7, #4]	; fField4
        198c28:	e3100020 	tst	r0, #32	; 0x20
        198c2c:	0a00001c 	beq	198ca4 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x838>
        198c30:	e59f10ec 	ldr	r1, [pc, #ec]	; 198d24 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x8b8>
        198c34:	e1a00005 	mov	r0, r5
        198c38:	e3a02000 	mov	r2, #0	; 0x0
        198c3c:	eb68ad89 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        198c40:	e59d1000 	ldr	r1, [sp]
        198c44:	e5810000 	str	r0, [r1]
        198c48:	e1a01000 	mov	r1, r0
        198c4c:	e3300002 	teq	r0, #2	; 0x2
        198c50:	05970004 	ldreq	r0, [r7, #4]	; fField4
        198c54:	03c00020 	biceq	r0, r0, #32	; 0x20
        198c58:	05870004 	streq	r0, [r7, #4]	; fField4
        198c5c:	0a000010 	beq	198ca4 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x838>
        198c60:	e59f00c0 	ldr	r0, [pc, #c0]	; 198d28 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x8bc>
        198c64:	e5900000 	ldr	r0, [r0]
        198c68:	e5900000 	ldr	r0, [r0]
        198c6c:	eb68ad6f 	bl	1bc4230 <$EQRef__FlT1>
        198c70:	e3300000 	teq	r0, #0	; 0x0
        198c74:	13a00902 	movne	r0, #32768	; 0x8000
        198c78:	1a000008 	bne	198ca0 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x834>
        198c7c:	e59d0000 	ldr	r0, [sp]
        198c80:	e5901000 	ldr	r1, [r0]
        198c84:	e59f00a0 	ldr	r0, [pc, #a0]	; 198d2c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x8c0>
        198c88:	e5900000 	ldr	r0, [r0]
        198c8c:	e5900000 	ldr	r0, [r0]
        198c90:	eb68ad66 	bl	1bc4230 <$EQRef__FlT1>
        198c94:	e3300000 	teq	r0, #0	; 0x0
        198c98:	0a000001 	beq	198ca4 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x838>
        198c9c:	e3a00801 	mov	r0, #65536	; 0x10000
        198ca0:	e5a40028 	str	r0, [r4, #40]!	; fField40
        198ca4:	e5970004 	ldr	r0, [r7, #4]	; fField4
        198ca8:	e3100040 	tst	r0, #64	; 0x40
        198cac:	0a00000d 	beq	198ce8 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x87c>
        198cb0:	e59f1078 	ldr	r1, [pc, #78]	; 198d30 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x8c4>
        198cb4:	e1a00005 	mov	r0, r5
        198cb8:	e3a02000 	mov	r2, #0	; 0x0
        198cbc:	eb68ad69 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        198cc0:	e59d1000 	ldr	r1, [sp]
        198cc4:	e5810000 	str	r0, [r1]
        198cc8:	e3300002 	teq	r0, #2	; 0x2
        198ccc:	05970004 	ldreq	r0, [r7, #4]	; fField4
        198cd0:	03c00040 	biceq	r0, r0, #64	; 0x40
        198cd4:	05a70004 	streq	r0, [r7, #4]!	; fField4
        198cd8:	0a000002 	beq	198ce8 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x87c>
        198cdc:	e5981000 	ldr	r1, [r8]
        198ce0:	e3a09001 	mov	r9, #1	; 0x1
        198ce4:	e5810000 	str	r0, [r1]
        198ce8:	e59d0000 	ldr	r0, [sp]
        198cec:	eb68a932 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        198cf0:	e28dd004 	add	sp, sp, #4	; 0x4
        198cf4:	e3390000 	teq	r9, #0	; 0x0
        198cf8:	1a000003 	bne	198d0c <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x8a0>
        198cfc:	e59f0030 	ldr	r0, [pc, #30]	; 198d34 <TStyleSave::SetStyle(RefVar const &, TPoint const &, long)+0x8c8>
        198d00:	eb63f77f 	bl	1a96b04 <$GetPreference(RefVar const &)>
        198d04:	e5981000 	ldr	r1, [r8]
        198d08:	e5810000 	str	r0, [r1]
        198d0c:	e1a0000a 	mov	r0, sl
        198d10:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        198d14:	00682d80 	rsbeq	r2, r8, r0, lsl #27
        198d18:	00684c60 	rsbeq	r4, r8, r0, ror #24
        198d1c:	00683d90 	streqb	r3, [r8], -#208
        198d20:	00684ae8 	rsbeq	r4, r8, r8, ror #21
        198d24:	00683368 	rsbeq	r3, r8, r8, ror #6
        198d28:	00682368 	rsbeq	r2, r8, r8, ror #6
        198d2c:	00684360 	rsbeq	r4, r8, r0, ror #6
        198d30:	00682e30 	rsbeq	r2, r8, r0, lsr lr
        198d34:	00684e48 	rsbeq	r4, r8, r8, asr #28
    */
}

/**
 * Symbol: TStyleSave::BeginLevel(SaveLevel *)
 * Address: 00198d38
 */
TStyleSave::BeginLevel(SaveLevel *) {
    /*
        198d38:	e1a0c00d 	mov	ip, sp
        198d3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        198d40:	e24cb004 	sub	fp, ip, #4	; 0x4
        198d44:	e1a05000 	mov	r5, r0
        198d48:	e1a04001 	mov	r4, r1
        198d4c:	e5901030 	ldr	r1, [r0, #48]	; fField48
        198d50:	e1a00004 	mov	r0, r4
        198d54:	eb00001f 	bl	198dd8 <SaveLevel::Init(SaveLevel *)>
        198d58:	e5a54030 	str	r4, [r5, #48]!	; fField48
        198d5c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStyleSave::EndLevel(void)
 * Address: 00198d60
 */
TStyleSave::EndLevel(void) {
    /*
        198d60:	e1a0c00d 	mov	ip, sp
        198d64:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        198d68:	e24cb004 	sub	fp, ip, #4	; 0x4
        198d6c:	e1a04000 	mov	r4, r0
        198d70:	e5900030 	ldr	r0, [r0, #48]	; fField48
        198d74:	e590000c 	ldr	r0, [r0, #12]
        198d78:	e3100001 	tst	r0, #1	; 0x1
        198d7c:	0a000003 	beq	198d90 <TStyleSave::EndLevel(void)+0x30>
        198d80:	eb64ef22 	bl	1ad4a10 <$StopScaling__9TQDScalerSFv>
        198d84:	e5940048 	ldr	r0, [r4, #72]	; fField72
        198d88:	e2400001 	sub	r0, r0, #1	; 0x1
        198d8c:	e5840048 	str	r0, [r4, #72]	; fField72
        198d90:	e5940030 	ldr	r0, [r4, #48]	; fField48
        198d94:	e590100c 	ldr	r1, [r0, #12]
        198d98:	e3110002 	tst	r1, #2	; 0x2
        198d9c:	0a000009 	beq	198dc8 <TStyleSave::EndLevel(void)+0x68>
        198da0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        198da4:	e1a05000 	mov	r5, r0
        198da8:	e3a02000 	mov	r2, #0	; 0x0
        198dac:	e3a01000 	mov	r1, #0	; 0x0
        198db0:	eb651433 	bl	1adde84 <$ReplaceClip__9TQDScalerSFPP6RegionT1l>
        198db4:	e1a00005 	mov	r0, r5
        198db8:	eb66d248 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        198dbc:	e5940044 	ldr	r0, [r4, #68]	; fField68
        198dc0:	e2400001 	sub	r0, r0, #1	; 0x1
        198dc4:	e5840044 	str	r0, [r4, #68]	; fField68
        198dc8:	e5940030 	ldr	r0, [r4, #48]	; fField48
        198dcc:	e5900000 	ldr	r0, [r0]
        198dd0:	e5a40030 	str	r0, [r4, #48]!	; fField48
        198dd4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

