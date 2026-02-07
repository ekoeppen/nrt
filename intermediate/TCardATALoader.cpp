#include "include/TCardATALoader.h"

/**
 * Symbol: TCardATALoader::__ct(void)
 * Address: 0004a1f4
 */
TCardATALoader::TCardATALoader(void) {
    /*
         4a1f4:	e1a0c00d 	mov	ip, sp
         4a1f8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         4a1fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         4a200:	e3300000 	teq	r0, #0	; 0x0
         4a204:	1a000003 	bne	4a218 <TCardATALoader::__ct(void)+0x24>
         4a208:	e3a00014 	mov	r0, #20	; 0x14
         4a20c:	eb6e1149 	bl	1bce738 <$__nw(unsigned int)>
         4a210:	e3300000 	teq	r0, #0	; 0x0
         4a214:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         4a218:	e3a01000 	mov	r1, #0	; 0x0
         4a21c:	e5801000 	str	r1, [r0]
         4a220:	e5801004 	str	r1, [r0, #4]	; fField4
         4a224:	e5801008 	str	r1, [r0, #8]	; fField8
         4a228:	e580100c 	str	r1, [r0, #12]	; fField12
         4a22c:	e5801010 	str	r1, [r0, #16]	; fField16
         4a230:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardATALoader::__dt(void)
 * Address: 0004a234
 */
TCardATALoader::~TCardATALoader(void) {
    /*
         4a234:	e1a0c00d 	mov	ip, sp
         4a238:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         4a23c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4a240:	e1a04000 	mov	r4, r0
         4a244:	e1a05001 	mov	r5, r1
         4a248:	e5900000 	ldr	r0, [r0]
         4a24c:	eb6e0d23 	bl	1bcd6e0 <$__dl(void *)>
         4a250:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4a254:	eb6e0d21 	bl	1bcd6e0 <$__dl(void *)>
         4a258:	e594000c 	ldr	r0, [r4, #12]	; fField12
         4a25c:	eb6e0d1f 	bl	1bcd6e0 <$__dl(void *)>
         4a260:	e3150001 	tst	r5, #1	; 0x1
         4a264:	11a00004 	movne	r0, r4
         4a268:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         4a26c:	1a6e0d1b 	bne	1bcd6e0 <$__dl(void *)>
         4a270:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardATALoader::GetCardType(TCardPCMCIA *)
 * Address: 0004a274
 */
TCardATALoader::GetCardType(TCardPCMCIA *) {
    /*
         4a274:	e92d4000 	stmdb	sp!, {lr}
         4a278:	e3a00000 	mov	r0, #0	; 0x0
         4a27c:	e5912000 	ldr	r2, [r1]
         4a280:	e3120302 	tst	r2, #134217728	; 0x8000000
         4a284:	08bd8000 	ldmeqia	sp!, {pc}
         4a288:	e5d1201c 	ldrb	r2, [r1, #28]
         4a28c:	e3320004 	teq	r2, #4	; 0x4
         4a290:	18bd8000 	ldmneia	sp!, {pc}
         4a294:	e3a02000 	mov	r2, #0	; 0x0
         4a298:	e5d1c026 	ldrb	ip, [r1, #38]
         4a29c:	ea000008 	b	4a2c4 <TCardATALoader::GetCardType(TCardPCMCIA *)+0x50>
         4a2a0:	e0813102 	add	r3, r1, r2, lsl #2
         4a2a4:	e5d3e01e 	ldrb	lr, [r3, #30]
         4a2a8:	e33e0001 	teq	lr, #1	; 0x1
         4a2ac:	05d3301f 	ldreqb	r3, [r3, #31]
         4a2b0:	03330001 	teqeq	r3, #1	; 0x1
         4a2b4:	03a00001 	moveq	r0, #1	; 0x1
         4a2b8:	e2822001 	add	r2, r2, #1	; 0x1
         4a2bc:	e3300000 	teq	r0, #0	; 0x0
         4a2c0:	18bd8000 	ldmneia	sp!, {pc}
         4a2c4:	e15c0002 	cmp	ip, r2
         4a2c8:	8afffff4 	bhi	4a2a0 <TCardATALoader::GetCardType(TCardPCMCIA *)+0x2c>
         4a2cc:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)
 * Address: 0004a2d0
 */
TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long) {
    /*
         4a2d0:	e1a0c00d 	mov	ip, sp
         4a2d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4a2d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         4a2dc:	e24cb014 	sub	fp, ip, #20	; 0x14
         4a2e0:	e1a04000 	mov	r4, r0
         4a2e4:	e1a07002 	mov	r7, r2
         4a2e8:	e59b0018 	ldr	r0, [fp, #24]
         4a2ec:	e59b5014 	ldr	r5, [fp, #20]
         4a2f0:	e24ddf89 	sub	sp, sp, #548	; 0x224
         4a2f4:	e3a01000 	mov	r1, #0	; 0x0
         4a2f8:	e58d1204 	str	r1, [sp, #516]
         4a2fc:	e3300001 	teq	r0, #1	; 0x1
         4a300:	e58d1200 	str	r1, [sp, #512]
         4a304:	13a000ea 	movne	r0, #234	; 0xea
         4a308:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         4a30c:	1a000007 	bne	4a330 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x60>
         4a310:	e3350000 	teq	r5, #0	; 0x0
         4a314:	1a00000c 	bne	4a34c <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x7c>
         4a318:	e28f0f06 	add	r0, pc, #24	; 0x18
         4a31c:	eb6ef42f 	bl	1c073e0 <$New__4TATASFPc>
         4a320:	e1b05000 	movs	r5, r0
         4a324:	1a000006 	bne	4a344 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x74>
         4a328:	e3a000e9 	mov	r0, #233	; 0xe9
         4a32c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         4a330:	e58d0204 	str	r0, [sp, #516]
         4a334:	ea00017c 	b	4a92c <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x65c>
         4a338:	54415441 	strplb	r5, [r1], -#1089
         4a33c:	53696d70 	cmnpl	r9, #7168	; 0x1c00
         4a340:	6c650000 	stcvsl	0, cr0, [r5]
         4a344:	e3a01001 	mov	r1, #1	; 0x1
         4a348:	e58d1200 	str	r1, [sp, #512]
         4a34c:	e59b1008 	ldr	r1, [fp, #8]	; fField8
         4a350:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         4a354:	e5831000 	str	r1, [r3]
         4a358:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         4a35c:	e5a35004 	str	r5, [r3, #4]!	; fField4
         4a360:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         4a364:	e5b30008 	ldr	r0, [r3, #8]!	; fField8
         4a368:	e1a06000 	mov	r6, r0
         4a36c:	eb6ecab4 	bl	1bfce44 <TATAPartitionInfo::$Clear(void)>
         4a370:	eb6bbe5b 	bl	1b39ce4 <$PatchPoint(void)>
         4a374:	e3e09000 	mvn	r9, #0	; 0x0
         4a378:	e1a0a009 	mov	sl, r9
         4a37c:	e3a08000 	mov	r8, #0	; 0x0
         4a380:	e5d70028 	ldrb	r0, [r7, #40]
         4a384:	e3500000 	cmp	r0, #0	; 0x0
         4a388:	9a000013 	bls	4a3dc <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x10c>
         4a38c:	e1a01008 	mov	r1, r8
         4a390:	e1a00007 	mov	r0, r7
         4a394:	eb6e257a 	bl	1bd3984 <TCardPCMCIA::$GetCardConfiguration(unsigned long const)>
         4a398:	e5d01156 	ldrb	r1, [r0, #342]
         4a39c:	e3310000 	teq	r1, #0	; 0x0
         4a3a0:	01a09008 	moveq	r9, r8
         4a3a4:	0a000007 	beq	4a3c8 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0xf8>
         4a3a8:	e3310001 	teq	r1, #1	; 0x1
         4a3ac:	05d00152 	ldreqb	r0, [r0, #338]
         4a3b0:	03300004 	teqeq	r0, #4	; 0x4
         4a3b4:	01a0a008 	moveq	sl, r8
         4a3b8:	e2888001 	add	r8, r8, #1	; 0x1
         4a3bc:	e5d70028 	ldrb	r0, [r7, #40]
         4a3c0:	e1500008 	cmp	r0, r8
         4a3c4:	8afffff0 	bhi	4a38c <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0xbc>
         4a3c8:	e3790001 	cmn	r9, #1	; 0x1
         4a3cc:	1a000003 	bne	4a3e0 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x110>
         4a3d0:	e37a0001 	cmn	sl, #1	; 0x1
         4a3d4:	11a0900a 	movne	r9, sl
         4a3d8:	1a000000 	bne	4a3e0 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x110>
         4a3dc:	e3a09000 	mov	r9, #0	; 0x0
         4a3e0:	e1a03009 	mov	r3, r9
         4a3e4:	e1a02007 	mov	r2, r7
         4a3e8:	e1a00005 	mov	r0, r5
         4a3ec:	e59b1008 	ldr	r1, [fp, #8]	; fField8
         4a3f0:	eb6ef3f4 	bl	1c073c8 <TATA::$Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)>
         4a3f4:	e58d0204 	str	r0, [sp, #516]
         4a3f8:	e3300000 	teq	r0, #0	; 0x0
         4a3fc:	1a000141 	bne	4a908 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x638>
         4a400:	eb6bbe37 	bl	1b39ce4 <$PatchPoint(void)>
         4a404:	e1a0700d 	mov	r7, sp
         4a408:	e3a03000 	mov	r3, #0	; 0x0
         4a40c:	e3a02020 	mov	r2, #32	; 0x20
         4a410:	e92d000c 	stmdb	sp!, {r2, r3}
         4a414:	e28d1008 	add	r1, sp, #8	; 0x8
         4a418:	e1a00005 	mov	r0, r5
         4a41c:	e3a03001 	mov	r3, #1	; 0x1
         4a420:	e3a02000 	mov	r2, #0	; 0x0
         4a424:	eb6ef3ee 	bl	1c073e4 <TATA::$Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)>
         4a428:	e28dd008 	add	sp, sp, #8	; 0x8
         4a42c:	e58d0204 	str	r0, [sp, #516]
         4a430:	e3300000 	teq	r0, #0	; 0x0
         4a434:	1a000133 	bne	4a908 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x638>
         4a438:	e3a08000 	mov	r8, #0	; 0x0
         4a43c:	e5dd01fe 	ldrb	r0, [sp, #510]
         4a440:	e3300055 	teq	r0, #85	; 0x55
         4a444:	05dd01ff 	ldreqb	r0, [sp, #511]
         4a448:	033000aa 	teqeq	r0, #170	; 0xaa
         4a44c:	1a000024 	bne	4a4e4 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x214>
         4a450:	eb6bbe23 	bl	1b39ce4 <$PatchPoint(void)>
         4a454:	e3a01004 	mov	r1, #4	; 0x4
         4a458:	e1a08001 	mov	r8, r1
         4a45c:	e3a00000 	mov	r0, #0	; 0x0
         4a460:	e0872200 	add	r2, r7, r0, lsl #4
         4a464:	e28220be 	add	r2, r2, #190	; 0xbe
         4a468:	e2822c01 	add	r2, r2, #256	; 0x100
         4a46c:	e5d23004 	ldrb	r3, [r2, #4]	; fField4
         4a470:	e3330083 	teq	r3, #131	; 0x83
         4a474:	1a000005 	bne	4a490 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x1c0>
         4a478:	e5d22000 	ldrb	r2, [r2]
         4a47c:	e3320080 	teq	r2, #128	; 0x80
         4a480:	01a08000 	moveq	r8, r0
         4a484:	0a000004 	beq	4a49c <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x1cc>
         4a488:	e3310004 	teq	r1, #4	; 0x4
         4a48c:	01a01000 	moveq	r1, r0
         4a490:	e2800001 	add	r0, r0, #1	; 0x1
         4a494:	e3500004 	cmp	r0, #4	; 0x4
         4a498:	3afffff0 	bcc	4a460 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x190>
         4a49c:	e3380004 	teq	r8, #4	; 0x4
         4a4a0:	1a000002 	bne	4a4b0 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x1e0>
         4a4a4:	e3310004 	teq	r1, #4	; 0x4
         4a4a8:	0a00001f 	beq	4a52c <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x25c>
         4a4ac:	e1a08001 	mov	r8, r1
         4a4b0:	eb6bbe0b 	bl	1b39ce4 <$PatchPoint(void)>
         4a4b4:	e5868000 	str	r8, [r6]
         4a4b8:	e0870208 	add	r0, r7, r8, lsl #4
         4a4bc:	e28000be 	add	r0, r0, #190	; 0xbe
         4a4c0:	e2800c01 	add	r0, r0, #256	; 0x100
         4a4c4:	e5d0100b 	ldrb	r1, [r0, #11]
         4a4c8:	e1a01c01 	mov	r1, r1, lsl #24
         4a4cc:	e5d0200a 	ldrb	r2, [r0, #10]
         4a4d0:	e0811802 	add	r1, r1, r2, lsl #16
         4a4d4:	e5d02009 	ldrb	r2, [r0, #9]
         4a4d8:	e0811402 	add	r1, r1, r2, lsl #8
         4a4dc:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
         4a4e0:	e0818000 	add	r8, r1, r0
         4a4e4:	eb6bbdfe 	bl	1b39ce4 <$PatchPoint(void)>
         4a4e8:	e3a03000 	mov	r3, #0	; 0x0
         4a4ec:	e3a02020 	mov	r2, #32	; 0x20
         4a4f0:	e92d000c 	stmdb	sp!, {r2, r3}
         4a4f4:	e1a02008 	mov	r2, r8
         4a4f8:	e28d1008 	add	r1, sp, #8	; 0x8
         4a4fc:	e1a00005 	mov	r0, r5
         4a500:	e3a03001 	mov	r3, #1	; 0x1
         4a504:	eb6ef3b6 	bl	1c073e4 <TATA::$Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)>
         4a508:	e28dd008 	add	sp, sp, #8	; 0x8
         4a50c:	e58d0204 	str	r0, [sp, #516]
         4a510:	e3300000 	teq	r0, #0	; 0x0
         4a514:	1a0000fb 	bne	4a908 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x638>
         4a518:	e59d0000 	ldr	r0, [sp]
         4a51c:	e1a00820 	mov	r0, r0, lsr #16
         4a520:	e240cc45 	sub	ip, r0, #17664	; 0x4500
         4a524:	e33c0052 	teq	ip, #82	; 0x52
         4a528:	0a000002 	beq	4a538 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x268>
         4a52c:	e3a000aa 	mov	r0, #170	; 0xaa
         4a530:	e2400c2a 	sub	r0, r0, #10752	; 0x2a00
         4a534:	ea0000b6 	b	4a814 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x544>
         4a538:	e5868004 	str	r8, [r6, #4]	; fField4
         4a53c:	eb6bbde8 	bl	1b39ce4 <$PatchPoint(void)>
         4a540:	e1a0700d 	mov	r7, sp
         4a544:	e28d9088 	add	r9, sp, #136	; 0x88
         4a548:	e24dd008 	sub	sp, sp, #8	; 0x8
         4a54c:	e2888001 	add	r8, r8, #1	; 0x1
         4a550:	e3a00064 	mov	r0, #100	; 0x64
         4a554:	e3a0a000 	mov	sl, #0	; 0x0
         4a558:	e58d0004 	str	r0, [sp, #4]	; fField4
         4a55c:	e58da000 	str	sl, [sp]
         4a560:	e59f2100 	ldr	r2, [pc, #100]	; 4a668 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x398>
         4a564:	e1a00004 	mov	r0, r4
         4a568:	e2843010 	add	r3, r4, #16	; 0x10
         4a56c:	e58d2228 	str	r2, [sp, #552]
         4a570:	e284200c 	add	r2, r4, #12	; 0xc
         4a574:	e2871030 	add	r1, r7, #48	; 0x30
         4a578:	e58d121c 	str	r1, [sp, #540]
         4a57c:	e58d2220 	str	r2, [sp, #544]
         4a580:	e58d3224 	str	r3, [sp, #548]
         4a584:	e59f20e0 	ldr	r2, [pc, #e0]	; 4a66c <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x39c>
         4a588:	e2843008 	add	r3, r4, #8	; 0x8
         4a58c:	e58d2218 	str	r2, [sp, #536]
         4a590:	e2802004 	add	r2, r0, #4	; 0x4
         4a594:	e58d2210 	str	r2, [sp, #528]
         4a598:	e58d3214 	str	r3, [sp, #532]
         4a59c:	e3a03000 	mov	r3, #0	; 0x0
         4a5a0:	e3a02020 	mov	r2, #32	; 0x20
         4a5a4:	e92d000c 	stmdb	sp!, {r2, r3}
         4a5a8:	e1a02008 	mov	r2, r8
         4a5ac:	e28d1010 	add	r1, sp, #16	; 0x10
         4a5b0:	e1a00005 	mov	r0, r5
         4a5b4:	e3a03001 	mov	r3, #1	; 0x1
         4a5b8:	eb6ef389 	bl	1c073e4 <TATA::$Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)>
         4a5bc:	e28dd008 	add	sp, sp, #8	; 0x8
         4a5c0:	e58d020c 	str	r0, [sp, #524]
         4a5c4:	e3300000 	teq	r0, #0	; 0x0
         4a5c8:	1a000077 	bne	4a7ac <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4dc>
         4a5cc:	e5970000 	ldr	r0, [r7]
         4a5d0:	e1a00820 	mov	r0, r0, lsr #16
         4a5d4:	e240ca05 	sub	ip, r0, #20480	; 0x5000
         4a5d8:	e33c004d 	teq	ip, #77	; 0x4d
         4a5dc:	1a000065 	bne	4a778 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4a8>
         4a5e0:	e59d0000 	ldr	r0, [sp]
         4a5e4:	e3300000 	teq	r0, #0	; 0x0
         4a5e8:	1a000004 	bne	4a600 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x330>
         4a5ec:	e3a00001 	mov	r0, #1	; 0x1
         4a5f0:	e58d0000 	str	r0, [sp]
         4a5f4:	e5970004 	ldr	r0, [r7, #4]	; fField4
         4a5f8:	e3a0a000 	mov	sl, #0	; 0x0
         4a5fc:	e58d0004 	str	r0, [sp, #4]	; fField4
         4a600:	e5990000 	ldr	r0, [r9]
         4a604:	e59fc064 	ldr	ip, [pc, #64]	; 4a670 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x3a0>
         4a608:	e130000c 	teq	r0, ip
         4a60c:	1a000059 	bne	4a778 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4a8>
         4a610:	e5990004 	ldr	r0, [r9, #4]	; fField4
         4a614:	e3100c01 	tst	r0, #256	; 0x100
         4a618:	0a000056 	beq	4a778 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4a8>
         4a61c:	e1a00004 	mov	r0, r4
         4a620:	e3a03020 	mov	r3, #32	; 0x20
         4a624:	e59d121c 	ldr	r1, [sp, #540]
         4a628:	e59d2228 	ldr	r2, [sp, #552]
         4a62c:	eb6ef372 	bl	1c073fc <TCardATALoader::$SameStrings(char *, char *, unsigned long)>
         4a630:	e3300000 	teq	r0, #0	; 0x0
         4a634:	0a000027 	beq	4a6d8 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x408>
         4a638:	e5960010 	ldr	r0, [r6, #16]	; fField16
         4a63c:	e3700001 	cmn	r0, #1	; 0x1
         4a640:	1a00004c 	bne	4a778 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4a8>
         4a644:	e3a00c02 	mov	r0, #512	; 0x200
         4a648:	e5868010 	str	r8, [r6, #16]	; fField16
         4a64c:	eb6e1039 	bl	1bce738 <$__nw(unsigned int)>
         4a650:	e5860014 	str	r0, [r6, #20]
         4a654:	e3300000 	teq	r0, #0	; 0x0
         4a658:	1a000005 	bne	4a674 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x3a4>
         4a65c:	e3a000e9 	mov	r0, #233	; 0xe9
         4a660:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         4a664:	ea00004f 	b	4a7a8 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4d8>
         4a668:	00366f00 	eoreqs	r6, r6, r0, lsl #30
         4a66c:	00366f10 	eoreqs	r6, r6, r0, lsl pc
         4a670:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         4a674:	e1a0e000 	mov	lr, r0
         4a678:	e1a00007 	mov	r0, r7
         4a67c:	e3a0c02a 	mov	ip, #42	; 0x2a
         4a680:	e8b0000e 	ldmia	r0!, {r1, r2, r3}
         4a684:	e8ae000e 	stmia	lr!, {r1, r2, r3}
         4a688:	e25cc001 	subs	ip, ip, #1	; 0x1
         4a68c:	1afffffb 	bne	4a680 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x3b0>
         4a690:	e890000c 	ldmia	r0, {r2, r3}
         4a694:	e88e000c 	stmia	lr, {r2, r3}
         4a698:	e599100c 	ldr	r1, [r9, #12]	; fField12
         4a69c:	e3310000 	teq	r1, #0	; 0x0
         4a6a0:	0a000034 	beq	4a778 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4a8>
         4a6a4:	e28d3e22 	add	r3, sp, #544	; 0x220
         4a6a8:	e893000c 	ldmia	r3, {r2, r3}
         4a6ac:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         4a6b0:	e5973008 	ldr	r3, [r7, #8]	; fField8
         4a6b4:	e1a01005 	mov	r1, r5
         4a6b8:	e1a00004 	mov	r0, r4
         4a6bc:	e59b2008 	ldr	r2, [fp, #8]	; fField8
         4a6c0:	eb6ef344 	bl	1c073d8 <TCardATALoader::$LoadDriverPackage(TATA *, TCardSocket *, unsigned long, unsigned long, unsigned char **, unsigned long *)>
         4a6c4:	e28dd00c 	add	sp, sp, #12	; 0xc
         4a6c8:	e58d020c 	str	r0, [sp, #524]
         4a6cc:	e3300000 	teq	r0, #0	; 0x0
         4a6d0:	1a000035 	bne	4a7ac <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4dc>
         4a6d4:	ea000027 	b	4a778 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4a8>
         4a6d8:	e1a00004 	mov	r0, r4
         4a6dc:	e3a03020 	mov	r3, #32	; 0x20
         4a6e0:	e59d121c 	ldr	r1, [sp, #540]
         4a6e4:	e59d2218 	ldr	r2, [sp, #536]
         4a6e8:	eb6ef343 	bl	1c073fc <TCardATALoader::$SameStrings(char *, char *, unsigned long)>
         4a6ec:	e3300000 	teq	r0, #0	; 0x0
         4a6f0:	0a000020 	beq	4a778 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4a8>
         4a6f4:	e5960008 	ldr	r0, [r6, #8]	; fField8
         4a6f8:	e3700001 	cmn	r0, #1	; 0x1
         4a6fc:	1a00001d 	bne	4a778 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4a8>
         4a700:	e3a00c02 	mov	r0, #512	; 0x200
         4a704:	e5868008 	str	r8, [r6, #8]	; fField8
         4a708:	eb6e100a 	bl	1bce738 <$__nw(unsigned int)>
         4a70c:	e586000c 	str	r0, [r6, #12]	; fField12
         4a710:	e3300000 	teq	r0, #0	; 0x0
         4a714:	0affffd0 	beq	4a65c <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x38c>
         4a718:	e1a0e000 	mov	lr, r0
         4a71c:	e1a00007 	mov	r0, r7
         4a720:	e3a0c02a 	mov	ip, #42	; 0x2a
         4a724:	e8b0000e 	ldmia	r0!, {r1, r2, r3}
         4a728:	e8ae000e 	stmia	lr!, {r1, r2, r3}
         4a72c:	e25cc001 	subs	ip, ip, #1	; 0x1
         4a730:	1afffffb 	bne	4a724 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x454>
         4a734:	e890000c 	ldmia	r0, {r2, r3}
         4a738:	e88e000c 	stmia	lr, {r2, r3}
         4a73c:	e599100c 	ldr	r1, [r9, #12]	; fField12
         4a740:	e3310000 	teq	r1, #0	; 0x0
         4a744:	0a00000b 	beq	4a778 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4a8>
         4a748:	e28d3e21 	add	r3, sp, #528	; 0x210
         4a74c:	e893000c 	ldmia	r3, {r2, r3}
         4a750:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         4a754:	e5973008 	ldr	r3, [r7, #8]	; fField8
         4a758:	e1a01005 	mov	r1, r5
         4a75c:	e1a00004 	mov	r0, r4
         4a760:	e59b2008 	ldr	r2, [fp, #8]	; fField8
         4a764:	eb6ef31b 	bl	1c073d8 <TCardATALoader::$LoadDriverPackage(TATA *, TCardSocket *, unsigned long, unsigned long, unsigned char **, unsigned long *)>
         4a768:	e28dd00c 	add	sp, sp, #12	; 0xc
         4a76c:	e58d020c 	str	r0, [sp, #524]
         4a770:	e3300000 	teq	r0, #0	; 0x0
         4a774:	1a00000c 	bne	4a7ac <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4dc>
         4a778:	e28aa001 	add	sl, sl, #1	; 0x1
         4a77c:	e2888001 	add	r8, r8, #1	; 0x1
         4a780:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         4a784:	e15a0000 	cmp	sl, r0
         4a788:	3affff83 	bcc	4a59c <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x2cc>
         4a78c:	e59d0000 	ldr	r0, [sp]
         4a790:	e3300000 	teq	r0, #0	; 0x0
         4a794:	15960010 	ldrne	r0, [r6, #16]	; fField16
         4a798:	13700001 	cmnne	r0, #1	; 0x1
         4a79c:	1a000004 	bne	4a7b4 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x4e4>
         4a7a0:	e3a000aa 	mov	r0, #170	; 0xaa
         4a7a4:	e2400c2a 	sub	r0, r0, #10752	; 0x2a00
         4a7a8:	e58d020c 	str	r0, [sp, #524]
         4a7ac:	e28dd008 	add	sp, sp, #8	; 0x8
         4a7b0:	ea000054 	b	4a908 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x638>
         4a7b4:	e28dd008 	add	sp, sp, #8	; 0x8
         4a7b8:	eb6bbd49 	bl	1b39ce4 <$PatchPoint(void)>
         4a7bc:	e5966014 	ldr	r6, [r6, #20]
         4a7c0:	e3360000 	teq	r6, #0	; 0x0
         4a7c4:	15967060 	ldrne	r7, [r6, #96]
         4a7c8:	13370000 	teqne	r7, #0	; 0x0
         4a7cc:	0a00004d 	beq	4a908 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x638>
         4a7d0:	e2861078 	add	r1, r6, #120	; 0x78
         4a7d4:	e59f2040 	ldr	r2, [pc, #40]	; 4a81c <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x54c>
         4a7d8:	e1a00004 	mov	r0, r4
         4a7dc:	e3a03010 	mov	r3, #16	; 0x10
         4a7e0:	eb6ef305 	bl	1c073fc <TCardATALoader::$SameStrings(char *, char *, unsigned long)>
         4a7e4:	e3300000 	teq	r0, #0	; 0x0
         4a7e8:	0a000046 	beq	4a908 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x638>
         4a7ec:	e28700ff 	add	r0, r7, #255	; 0xff
         4a7f0:	e2800c01 	add	r0, r0, #256	; 0x100
         4a7f4:	e1a084a0 	mov	r8, r0, lsr #9
         4a7f8:	e1a00488 	mov	r0, r8, lsl #9
         4a7fc:	eb6e0fcd 	bl	1bce738 <$__nw(unsigned int)>
         4a800:	e5840000 	str	r0, [r4]
         4a804:	e3300000 	teq	r0, #0	; 0x0
         4a808:	1a000004 	bne	4a820 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x550>
         4a80c:	e3a000e9 	mov	r0, #233	; 0xe9
         4a810:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         4a814:	e58d0204 	str	r0, [sp, #516]
         4a818:	ea00003a 	b	4a908 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x638>
         4a81c:	00366f24 	eoreqs	r6, r6, r4, lsr #30
         4a820:	e3a03000 	mov	r3, #0	; 0x0
         4a824:	e3a02020 	mov	r2, #32	; 0x20
         4a828:	e92d000c 	stmdb	sp!, {r2, r3}
         4a82c:	e5961008 	ldr	r1, [r6, #8]	; fField8
         4a830:	e596205c 	ldr	r2, [r6, #92]
         4a834:	e0812002 	add	r2, r1, r2
         4a838:	e1a03008 	mov	r3, r8
         4a83c:	e1a01000 	mov	r1, r0
         4a840:	e1a00005 	mov	r0, r5
         4a844:	eb6ef2e6 	bl	1c073e4 <TATA::$Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)>
         4a848:	e28dd008 	add	sp, sp, #8	; 0x8
         4a84c:	e3a08000 	mov	r8, #0	; 0x0
         4a850:	e58d0204 	str	r0, [sp, #516]
         4a854:	e3300000 	teq	r0, #0	; 0x0
         4a858:	1a000024 	bne	4a8f0 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x620>
         4a85c:	e1a02007 	mov	r2, r7
         4a860:	e5941000 	ldr	r1, [r4]
         4a864:	e1a00004 	mov	r0, r4
         4a868:	eb6ef2cc 	bl	1c073a0 <TCardATALoader::$ChecksumOf(unsigned char *, unsigned long)>
         4a86c:	e5b61074 	ldr	r1, [r6, #116]!
         4a870:	e1300001 	teq	r0, r1
         4a874:	13e00022 	mvnne	r0, #34	; 0x22
         4a878:	12400c29 	subne	r0, r0, #10496	; 0x2900
         4a87c:	158d0204 	strne	r0, [sp, #516]
         4a880:	1a00001d 	bne	4a8fc <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x62c>
         4a884:	e52d806c 	str	r8, [sp, -#108]!
         4a888:	e28d0008 	add	r0, sp, #8	; 0x8
         4a88c:	eb6da038 	bl	1bb2974 <$setjmp>
         4a890:	e3300000 	teq	r0, #0	; 0x0
         4a894:	1a000006 	bne	4a8b4 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x5e4>
         4a898:	e1a0000d 	mov	r0, sp
         4a89c:	eb6e55f6 	bl	1be007c <$AddExceptionHandler>
         4a8a0:	e59b0010 	ldr	r0, [fp, #16]	; fField16
         4a8a4:	e5941000 	ldr	r1, [r4]
         4a8a8:	e1a0e00f 	mov	lr, pc
         4a8ac:	e591f000 	ldr	pc, [r1]
         4a8b0:	ea000006 	b	4a8d0 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x600>
         4a8b4:	e59d0060 	ldr	r0, [sp, #96]
         4a8b8:	e28f1f06 	add	r1, pc, #24	; 0x18
         4a8bc:	eb6e6234 	bl	1be3194 <$Subexception>
         4a8c0:	e3300000 	teq	r0, #0	; 0x0
         4a8c4:	0a000004 	beq	4a8dc <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x60c>
         4a8c8:	e3a000c9 	mov	r0, #201	; 0xc9
         4a8cc:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         4a8d0:	e58d0270 	str	r0, [sp, #624]
         4a8d4:	ea000002 	b	4a8e4 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x614>
         4a8d8:	00000000 	andeq	r0, r0, r0
         4a8dc:	e1a0000d 	mov	r0, sp
         4a8e0:	eb6e5e1b 	bl	1be2154 <$NextHandler>
         4a8e4:	e1a0000d 	mov	r0, sp
         4a8e8:	eb6e59f2 	bl	1be10b8 <$ExitHandler>
         4a8ec:	e28dd06c 	add	sp, sp, #108	; 0x6c
         4a8f0:	e59d0204 	ldr	r0, [sp, #516]
         4a8f4:	e3300000 	teq	r0, #0	; 0x0
         4a8f8:	0a000002 	beq	4a908 <TCardATALoader::LoadATAPackages(TCardSocket *, TCardPCMCIA *, TATABootParamBlock *, void *, unsigned long)+0x638>
         4a8fc:	e5940000 	ldr	r0, [r4]
         4a900:	eb6e0b76 	bl	1bcd6e0 <$__dl(void *)>
         4a904:	e5848000 	str	r8, [r4]
         4a908:	e1a00005 	mov	r0, r5
         4a90c:	e3a03000 	mov	r3, #0	; 0x0
         4a910:	e3a02000 	mov	r2, #0	; 0x0
         4a914:	e3a01096 	mov	r1, #150	; 0x96
         4a918:	eb6ef6bd 	bl	1c08414 <TATA::$SetPowerMode(unsigned char, unsigned char, unsigned char)>
         4a91c:	e59d1200 	ldr	r1, [sp, #512]
         4a920:	e3310000 	teq	r1, #0	; 0x0
         4a924:	11a00005 	movne	r0, r5
         4a928:	1b6ef29d 	blne	1c073a4 <TATA::$Delete(void)>
         4a92c:	e59d0204 	ldr	r0, [sp, #516]
         4a930:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardATALoader::LoadDriverPackage(TATA *, TCardSocket *, unsigned long, unsigned long, unsigned char **, unsigned long *)
 * Address: 0004a934
 */
TCardATALoader::LoadDriverPackage(TATA *, TCardSocket *, unsigned long, unsigned long, unsigned char **, unsigned long *) {
    /*
         4a934:	e1a0c00d 	mov	ip, sp
         4a938:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         4a93c:	e24cb004 	sub	fp, ip, #4	; 0x4
         4a940:	e1a06001 	mov	r6, r1
         4a944:	e1a05002 	mov	r5, r2
         4a948:	e1a04003 	mov	r4, r3
         4a94c:	e59b9004 	ldr	r9, [fp, #4]	; fField4
         4a950:	e1a00489 	mov	r0, r9, lsl #9
         4a954:	e28b8008 	add	r8, fp, #8	; 0x8
         4a958:	e8980180 	ldmia	r8, {r7, r8}
         4a95c:	eb6e0f75 	bl	1bce738 <$__nw(unsigned int)>
         4a960:	e5870000 	str	r0, [r7]
         4a964:	e3300000 	teq	r0, #0	; 0x0
         4a968:	03a040e9 	moveq	r4, #233	; 0xe9
         4a96c:	02444b0a 	subeq	r4, r4, #10240	; 0x2800
         4a970:	0a000026 	beq	4aa10 <TCardATALoader::LoadDriverPackage(TATA *, TCardSocket *, unsigned long, unsigned long, unsigned char **, unsigned long *)+0xdc>
         4a974:	e3a03000 	mov	r3, #0	; 0x0
         4a978:	e3a02020 	mov	r2, #32	; 0x20
         4a97c:	e92d000c 	stmdb	sp!, {r2, r3}
         4a980:	e1a03009 	mov	r3, r9
         4a984:	e1a02004 	mov	r2, r4
         4a988:	e1a01000 	mov	r1, r0
         4a98c:	e1a00006 	mov	r0, r6
         4a990:	eb6ef293 	bl	1c073e4 <TATA::$Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)>
         4a994:	e28dd008 	add	sp, sp, #8	; 0x8
         4a998:	e1b04000 	movs	r4, r0
         4a99c:	1a000014 	bne	4a9f4 <TCardATALoader::LoadDriverPackage(TATA *, TCardSocket *, unsigned long, unsigned long, unsigned char **, unsigned long *)+0xc0>
         4a9a0:	e5971000 	ldr	r1, [r7]
         4a9a4:	e59f006c 	ldr	r0, [pc, #6c]	; 4aa18 <TCardATALoader::LoadDriverPackage(TATA *, TCardSocket *, unsigned long, unsigned long, unsigned char **, unsigned long *)+0xe4>
         4a9a8:	e3a02007 	mov	r2, #7	; 0x7
         4a9ac:	eb6dac41 	bl	1bb5ab8 <$strncmp>
         4a9b0:	e3300000 	teq	r0, #0	; 0x0
         4a9b4:	1a00000e 	bne	4a9f4 <TCardATALoader::LoadDriverPackage(TATA *, TCardSocket *, unsigned long, unsigned long, unsigned char **, unsigned long *)+0xc0>
         4a9b8:	e3a00003 	mov	r0, #3	; 0x3
         4a9bc:	e56d0008 	strb	r0, [sp, -#8]!	; fField8
         4a9c0:	e3a00001 	mov	r0, #1	; 0x1
         4a9c4:	e5cd0001 	strb	r0, [sp, #1]
         4a9c8:	e1a00005 	mov	r0, r5
         4a9cc:	eb6e491a 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         4a9d0:	e5cd0003 	strb	r0, [sp, #3]
         4a9d4:	e1a00420 	mov	r0, r0, lsr #8
         4a9d8:	e5cd0002 	strb	r0, [sp, #2]
         4a9dc:	e1a03008 	mov	r3, r8
         4a9e0:	e5970000 	ldr	r0, [r7]
         4a9e4:	e89d0006 	ldmia	sp, {r1, r2}
         4a9e8:	eb6e3057 	bl	1bd6b4c <$LoadPackage(char *, SourceType, unsigned long *)>
         4a9ec:	e1a04000 	mov	r4, r0
         4a9f0:	e28dd008 	add	sp, sp, #8	; 0x8
         4a9f4:	e5980000 	ldr	r0, [r8]
         4a9f8:	e3300000 	teq	r0, #0	; 0x0
         4a9fc:	1a000003 	bne	4aa10 <TCardATALoader::LoadDriverPackage(TATA *, TCardSocket *, unsigned long, unsigned long, unsigned char **, unsigned long *)+0xdc>
         4aa00:	e5970000 	ldr	r0, [r7]
         4aa04:	eb6e0b35 	bl	1bcd6e0 <$__dl(void *)>
         4aa08:	e3a00000 	mov	r0, #0	; 0x0
         4aa0c:	e5870000 	str	r0, [r7]
         4aa10:	e1a00004 	mov	r0, r4
         4aa14:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         4aa18:	003773d4 	ldreqsb	r7, [r7], -r4
    */
}

/**
 * Symbol: TCardATALoader::RemoveATAPackages(TATABootParamBlock *, void *, unsigned long)
 * Address: 0004aa1c
 */
TCardATALoader::RemoveATAPackages(TATABootParamBlock *, void *, unsigned long) {
    /*
         4aa1c:	e1a0c00d 	mov	ip, sp
         4aa20:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         4aa24:	e24cb004 	sub	fp, ip, #4	; 0x4
         4aa28:	e1a04000 	mov	r4, r0
         4aa2c:	e1a05001 	mov	r5, r1
         4aa30:	e5900008 	ldr	r0, [r0, #8]	; fField8
         4aa34:	e3a06000 	mov	r6, #0	; 0x0
         4aa38:	e3300000 	teq	r0, #0	; 0x0
         4aa3c:	0a000001 	beq	4aa48 <TCardATALoader::RemoveATAPackages(TATABootParamBlock *, void *, unsigned long)+0x2c>
         4aa40:	eb6e3ca7 	bl	1bd9ce4 <$RemovePackage(unsigned long)>
         4aa44:	e5846008 	str	r6, [r4, #8]	; fField8
         4aa48:	e5940010 	ldr	r0, [r4, #16]	; fField16
         4aa4c:	e3300000 	teq	r0, #0	; 0x0
         4aa50:	0a000001 	beq	4aa5c <TCardATALoader::RemoveATAPackages(TATABootParamBlock *, void *, unsigned long)+0x40>
         4aa54:	eb6e3ca2 	bl	1bd9ce4 <$RemovePackage(unsigned long)>
         4aa58:	e5846010 	str	r6, [r4, #16]	; fField16
         4aa5c:	e5940000 	ldr	r0, [r4]
         4aa60:	eb6e0b1e 	bl	1bcd6e0 <$__dl(void *)>
         4aa64:	e5846000 	str	r6, [r4]
         4aa68:	e5940004 	ldr	r0, [r4, #4]	; fField4
         4aa6c:	eb6e0b1b 	bl	1bcd6e0 <$__dl(void *)>
         4aa70:	e5846004 	str	r6, [r4, #4]	; fField4
         4aa74:	e594000c 	ldr	r0, [r4, #12]	; fField12
         4aa78:	eb6e0b18 	bl	1bcd6e0 <$__dl(void *)>
         4aa7c:	e5a4600c 	str	r6, [r4, #12]!	; fField12
         4aa80:	e5950008 	ldr	r0, [r5, #8]	; fField8
         4aa84:	e3300000 	teq	r0, #0	; 0x0
         4aa88:	1b6ec8ed 	blne	1bfce44 <TATAPartitionInfo::$Clear(void)>
         4aa8c:	e1a00006 	mov	r0, r6
         4aa90:	e5856000 	str	r6, [r5]
         4aa94:	e5a56004 	str	r6, [r5, #4]!	; fField4
         4aa98:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCardATALoader::SameStrings(char *, char *, unsigned long)
 * Address: 0004aa9c
 */
TCardATALoader::SameStrings(char *, char *, unsigned long) {
    /*
         4aa9c:	e4d10001 	ldrb	r0, [r1], #1
         4aaa0:	e3500041 	cmp	r0, #65	; 0x41
         4aaa4:	ba000002 	blt	4aab4 <TCardATALoader::SameStrings(char *, char *, unsigned long)+0x18>
         4aaa8:	e350005a 	cmp	r0, #90	; 0x5a
         4aaac:	d2800020 	addle	r0, r0, #32	; 0x20
         4aab0:	d20000ff 	andle	r0, r0, #255	; 0xff
         4aab4:	e4d2c001 	ldrb	ip, [r2], #1
         4aab8:	e35c0041 	cmp	ip, #65	; 0x41
         4aabc:	ba000002 	blt	4aacc <TCardATALoader::SameStrings(char *, char *, unsigned long)+0x30>
         4aac0:	e35c005a 	cmp	ip, #90	; 0x5a
         4aac4:	d28cc020 	addle	ip, ip, #32	; 0x20
         4aac8:	d20cc0ff 	andle	ip, ip, #255	; 0xff
         4aacc:	e3300000 	teq	r0, #0	; 0x0
         4aad0:	0a000007 	beq	4aaf4 <TCardATALoader::SameStrings(char *, char *, unsigned long)+0x58>
         4aad4:	e33c0000 	teq	ip, #0	; 0x0
         4aad8:	0a000003 	beq	4aaec <TCardATALoader::SameStrings(char *, char *, unsigned long)+0x50>
         4aadc:	e130000c 	teq	r0, ip
         4aae0:	1a000001 	bne	4aaec <TCardATALoader::SameStrings(char *, char *, unsigned long)+0x50>
         4aae4:	e2533001 	subs	r3, r3, #1	; 0x1
         4aae8:	1affffeb 	bne	4aa9c <TCardATALoader::SameStrings(char *, char *, unsigned long)>
         4aaec:	e3300000 	teq	r0, #0	; 0x0
         4aaf0:	1a000002 	bne	4ab00 <TCardATALoader::SameStrings(char *, char *, unsigned long)+0x64>
         4aaf4:	e33c0000 	teq	ip, #0	; 0x0
         4aaf8:	03a00001 	moveq	r0, #1	; 0x1
         4aafc:	0a000000 	beq	4ab04 <TCardATALoader::SameStrings(char *, char *, unsigned long)+0x68>
         4ab00:	e3a00000 	mov	r0, #0	; 0x0
         4ab04:	e20000ff 	and	r0, r0, #255	; 0xff
         4ab08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardATALoader::ChecksumOf(unsigned char *, unsigned long)
 * Address: 0004ab0c
 */
TCardATALoader::ChecksumOf(unsigned char *, unsigned long) {
    /*
         4ab0c:	e3a03000 	mov	r3, #0	; 0x0
         4ab10:	e3a00000 	mov	r0, #0	; 0x0
         4ab14:	e3520000 	cmp	r2, #0	; 0x0
         4ab18:	9a000007 	bls	4ab3c <TCardATALoader::ChecksumOf(unsigned char *, unsigned long)+0x30>
         4ab1c:	e4d1c001 	ldrb	ip, [r1], #1
         4ab20:	e08c3003 	add	r3, ip, r3
         4ab24:	e1a03083 	mov	r3, r3, lsl #1
         4ab28:	e203c801 	and	ip, r3, #65536	; 0x10000
         4ab2c:	e183382c 	orr	r3, r3, ip, lsr #16
         4ab30:	e2800001 	add	r0, r0, #1	; 0x1
         4ab34:	e1500002 	cmp	r0, r2
         4ab38:	3afffff7 	bcc	4ab1c <TCardATALoader::ChecksumOf(unsigned char *, unsigned long)+0x10>
         4ab3c:	e1a00803 	mov	r0, r3, lsl #16
         4ab40:	e1b00820 	movs	r0, r0, lsr #16
         4ab44:	03a00801 	moveq	r0, #65536	; 0x10000
         4ab48:	02400001 	subeq	r0, r0, #1	; 0x1
         4ab4c:	e1a0f00e 	mov	pc, lr
    */
}

