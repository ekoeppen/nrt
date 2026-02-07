#include "include/TATASimple.h"

/**
 * Symbol: Sizeof__10TATASimpleSFv
 * Address: 00026408
 */
void TATASimple::Sizeof() {
    /*
         26408:	e3a00e12 	mov	r0, #288	; 0x120
         2640c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::New(void)
 * Address: 00026410
 */
TATASimple::New(void) {
    /*
         26410:	e3a01000 	mov	r1, #0	; 0x0
         26414:	e5801010 	str	r1, [r0, #16]	; fField16
         26418:	e5801014 	str	r1, [r0, #20]	; fField20
         2641c:	e5801018 	str	r1, [r0, #24]	; fField24
         26420:	e580101c 	str	r1, [r0, #28]	; fField28
         26424:	e5c01020 	strb	r1, [r0, #32]	; fField32
         26428:	e5c01021 	strb	r1, [r0, #33]	; fField33
         2642c:	e5c01022 	strb	r1, [r0, #34]	; fField34
         26430:	e5c01023 	strb	r1, [r0, #35]	; fField35
         26434:	e5c01025 	strb	r1, [r0, #37]	; fField37
         26438:	e5c01024 	strb	r1, [r0, #36]	; fField36
         2643c:	e5c01027 	strb	r1, [r0, #39]	; fField39
         26440:	e5c01026 	strb	r1, [r0, #38]	; fField38
         26444:	e580102c 	str	r1, [r0, #44]	; fField44
         26448:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::Format(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)
 * Address: 0002644c
 */
TATASimple::Format(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char) {
    /*
         2644c:	e1a0c00d 	mov	ip, sp
         26450:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         26454:	e24cb004 	sub	fp, ip, #4	; 0x4
         26458:	e59bc008 	ldr	ip, [fp, #8]
         2645c:	e20cc0ff 	and	ip, ip, #255	; 0xff
         26460:	e59be004 	ldr	lr, [fp, #4]
         26464:	e5d04022 	ldrb	r4, [r0, #34]	; fField34
         26468:	e154000c 	cmp	r4, ip
         2646c:	b3a000ea 	movlt	r0, #234	; 0xea
         26470:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
         26474:	b24dd018 	sublt	sp, sp, #24	; 0x18
         26478:	ba000013 	blt	264cc <TATASimple::Format(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)+0x80>
         2647c:	e52d1018 	str	r1, [sp, -#24]!	; fField24
         26480:	e3a01000 	mov	r1, #0	; 0x0
         26484:	e5cd1004 	strb	r1, [sp, #4]
         26488:	e5cde005 	strb	lr, [sp, #5]
         2648c:	e5cd1006 	strb	r1, [sp, #6]
         26490:	e5cd2007 	strb	r2, [sp, #7]
         26494:	e1a02422 	mov	r2, r2, lsr #8
         26498:	e5cd2008 	strb	r2, [sp, #8]
         2649c:	e3a02010 	mov	r2, #16	; 0x10
         264a0:	e002220c 	and	r2, r2, ip, lsl #4
         264a4:	e0822003 	add	r2, r2, r3
         264a8:	e5cd2009 	strb	r2, [sp, #9]
         264ac:	e3a02050 	mov	r2, #80	; 0x50
         264b0:	e5cd200a 	strb	r2, [sp, #10]
         264b4:	e58d100c 	str	r1, [sp, #12]
         264b8:	e5cd1015 	strb	r1, [sp, #21]
         264bc:	e5cd1016 	strb	r1, [sp, #22]
         264c0:	e5cd1017 	strb	r1, [sp, #23]
         264c4:	e1a0100d 	mov	r1, sp
         264c8:	eb6c4def 	bl	1b39c8c <TATASimple::$DoATARegCommand(TATARegCommandBlock *)>
         264cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::Reset(unsigned char)
 * Address: 000264d0
 */
TATASimple::Reset(unsigned char) {
    /*
         264d0:	e1a0c00d 	mov	ip, sp
         264d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         264d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         264dc:	e1a04000 	mov	r4, r0
         264e0:	e20150ff 	and	r5, r1, #255	; 0xff
         264e4:	e3a00004 	mov	r0, #4	; 0x4
         264e8:	e594102c 	ldr	r1, [r4, #44]	; fField44
         264ec:	e5c1000d 	strb	r0, [r1, #13]
         264f0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         264f4:	e1a0000d 	mov	r0, sp
         264f8:	eb6f5e73 	bl	1bfdecc <TDelayTimer::$__ct(void)>
         264fc:	e1a0000d 	mov	r0, sp
         26500:	e3a01064 	mov	r1, #100	; 0x64
         26504:	eb6f5e74 	bl	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
         26508:	e5d40023 	ldrb	r0, [r4, #35]	; fField35
         2650c:	e3c01004 	bic	r1, r0, #4	; 0x4
         26510:	e594002c 	ldr	r0, [r4, #44]	; fField44
         26514:	e5c0100d 	strb	r1, [r0, #13]
         26518:	e1a0000d 	mov	r0, sp
         2651c:	e3a01004 	mov	r1, #4	; 0x4
         26520:	eb6f5e6d 	bl	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
         26524:	e3350000 	teq	r5, #0	; 0x0
         26528:	0a000004 	beq	26540 <TATASimple::Reset(unsigned char)+0x70>
         2652c:	e594202c 	ldr	r2, [r4, #44]	; fField44
         26530:	e1a00004 	mov	r0, r4
         26534:	e3a01040 	mov	r1, #64	; 0x40
         26538:	eb6c51fe 	bl	1b3ad38 <TATASimple::$WaitFor(unsigned char, TATARegisters *)>
         2653c:	ea000000 	b	26544 <TATASimple::Reset(unsigned char)+0x74>
         26540:	e3a00000 	mov	r0, #0	; 0x0
         26544:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::IdentifyDrive(TATADriveInfo *, unsigned char)
 * Address: 00026548
 */
TATASimple::IdentifyDrive(TATADriveInfo *, unsigned char) {
    /*
         26548:	e1a0c00d 	mov	ip, sp
         2654c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         26550:	e24cb004 	sub	fp, ip, #4	; 0x4
         26554:	e20220ff 	and	r2, r2, #255	; 0xff
         26558:	e5d03022 	ldrb	r3, [r0, #34]	; fField34
         2655c:	e1530002 	cmp	r3, r2
         26560:	b3a000ea 	movlt	r0, #234	; 0xea
         26564:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
         26568:	b24dd018 	sublt	sp, sp, #24	; 0x18
         2656c:	ba00000b 	blt	265a0 <TATASimple::IdentifyDrive(TATADriveInfo *, unsigned char)+0x58>
         26570:	e52d1018 	str	r1, [sp, -#24]!	; fField24
         26574:	e3a01001 	mov	r1, #1	; 0x1
         26578:	e5cd1005 	strb	r1, [sp, #5]
         2657c:	e3a01010 	mov	r1, #16	; 0x10
         26580:	e0011202 	and	r1, r1, r2, lsl #4
         26584:	e5cd1009 	strb	r1, [sp, #9]
         26588:	e3a010ec 	mov	r1, #236	; 0xec
         2658c:	e5cd100a 	strb	r1, [sp, #10]
         26590:	e3a01000 	mov	r1, #0	; 0x0
         26594:	e58d100c 	str	r1, [sp, #12]
         26598:	e1a0100d 	mov	r1, sp
         2659c:	eb6c4dba 	bl	1b39c8c <TATASimple::$DoATARegCommand(TATARegCommandBlock *)>
         265a0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::CheckPowerMode(unsigned char *, unsigned char)
 * Address: 000265a4
 */
TATASimple::CheckPowerMode(unsigned char *, unsigned char) {
    /*
         265a4:	e1a0c00d 	mov	ip, sp
         265a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         265ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         265b0:	e1a04001 	mov	r4, r1
         265b4:	e20210ff 	and	r1, r2, #255	; 0xff
         265b8:	e5d02022 	ldrb	r2, [r0, #34]	; fField34
         265bc:	e1520001 	cmp	r2, r1
         265c0:	b3a000ea 	movlt	r0, #234	; 0xea
         265c4:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
         265c8:	b24dd018 	sublt	sp, sp, #24	; 0x18
         265cc:	ba00000b 	blt	26600 <TATASimple::CheckPowerMode(unsigned char *, unsigned char)+0x5c>
         265d0:	e24dd018 	sub	sp, sp, #24	; 0x18
         265d4:	e3a02010 	mov	r2, #16	; 0x10
         265d8:	e0021201 	and	r1, r2, r1, lsl #4
         265dc:	e5cd1009 	strb	r1, [sp, #9]
         265e0:	e3a01098 	mov	r1, #152	; 0x98
         265e4:	e5cd100a 	strb	r1, [sp, #10]
         265e8:	e3a01000 	mov	r1, #0	; 0x0
         265ec:	e58d100c 	str	r1, [sp, #12]
         265f0:	e1a0100d 	mov	r1, sp
         265f4:	eb6c4da4 	bl	1b39c8c <TATASimple::$DoATARegCommand(TATARegCommandBlock *)>
         265f8:	e5dd1005 	ldrb	r1, [sp, #5]
         265fc:	e5c41000 	strb	r1, [r4]
         26600:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::SetPowerMode(unsigned char, unsigned char, unsigned char)
 * Address: 00026604
 */
TATASimple::SetPowerMode(unsigned char, unsigned char, unsigned char) {
    /*
         26604:	e1a0c00d 	mov	ip, sp
         26608:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         2660c:	e24cb004 	sub	fp, ip, #4	; 0x4
         26610:	e20110ff 	and	r1, r1, #255	; 0xff
         26614:	e20220ff 	and	r2, r2, #255	; 0xff
         26618:	e20330ff 	and	r3, r3, #255	; 0xff
         2661c:	e5d0c022 	ldrb	ip, [r0, #34]	; fField34
         26620:	e15c0003 	cmp	ip, r3
         26624:	b3a000ea 	movlt	r0, #234	; 0xea
         26628:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
         2662c:	b24dd018 	sublt	sp, sp, #24	; 0x18
         26630:	ba000009 	blt	2665c <TATASimple::SetPowerMode(unsigned char, unsigned char, unsigned char)+0x58>
         26634:	e24dd018 	sub	sp, sp, #24	; 0x18
         26638:	e5cd2005 	strb	r2, [sp, #5]
         2663c:	e3a02010 	mov	r2, #16	; 0x10
         26640:	e0022203 	and	r2, r2, r3, lsl #4
         26644:	e5cd2009 	strb	r2, [sp, #9]
         26648:	e5cd100a 	strb	r1, [sp, #10]
         2664c:	e3a01000 	mov	r1, #0	; 0x0
         26650:	e58d100c 	str	r1, [sp, #12]
         26654:	e1a0100d 	mov	r1, sp
         26658:	eb6c4d8b 	bl	1b39c8c <TATASimple::$DoATARegCommand(TATARegCommandBlock *)>
         2665c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::SetFeatures(unsigned char, unsigned char, unsigned char)
 * Address: 00026660
 */
TATASimple::SetFeatures(unsigned char, unsigned char, unsigned char) {
    /*
         26660:	e1a0c00d 	mov	ip, sp
         26664:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         26668:	e24cb004 	sub	fp, ip, #4	; 0x4
         2666c:	e20110ff 	and	r1, r1, #255	; 0xff
         26670:	e20220ff 	and	r2, r2, #255	; 0xff
         26674:	e20330ff 	and	r3, r3, #255	; 0xff
         26678:	e5d0c022 	ldrb	ip, [r0, #34]	; fField34
         2667c:	e15c0003 	cmp	ip, r3
         26680:	b3a000ea 	movlt	r0, #234	; 0xea
         26684:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
         26688:	b24dd018 	sublt	sp, sp, #24	; 0x18
         2668c:	ba00000b 	blt	266c0 <TATASimple::SetFeatures(unsigned char, unsigned char, unsigned char)+0x60>
         26690:	e24dd018 	sub	sp, sp, #24	; 0x18
         26694:	e5cd1004 	strb	r1, [sp, #4]
         26698:	e5cd2005 	strb	r2, [sp, #5]
         2669c:	e3a01010 	mov	r1, #16	; 0x10
         266a0:	e0011203 	and	r1, r1, r3, lsl #4
         266a4:	e5cd1009 	strb	r1, [sp, #9]
         266a8:	e3a010ef 	mov	r1, #239	; 0xef
         266ac:	e5cd100a 	strb	r1, [sp, #10]
         266b0:	e3a01000 	mov	r1, #0	; 0x0
         266b4:	e58d100c 	str	r1, [sp, #12]
         266b8:	e1a0100d 	mov	r1, sp
         266bc:	eb6c4d72 	bl	1b39c8c <TATASimple::$DoATARegCommand(TATARegCommandBlock *)>
         266c0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::SetMultipleMode(unsigned char, unsigned char)
 * Address: 000266c4
 */
TATASimple::SetMultipleMode(unsigned char, unsigned char) {
    /*
         266c4:	e1a0c00d 	mov	ip, sp
         266c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         266cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         266d0:	e20110ff 	and	r1, r1, #255	; 0xff
         266d4:	e20220ff 	and	r2, r2, #255	; 0xff
         266d8:	e5d03022 	ldrb	r3, [r0, #34]	; fField34
         266dc:	e1530002 	cmp	r3, r2
         266e0:	b3a000ea 	movlt	r0, #234	; 0xea
         266e4:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
         266e8:	b24dd018 	sublt	sp, sp, #24	; 0x18
         266ec:	ba00000a 	blt	2671c <TATASimple::SetMultipleMode(unsigned char, unsigned char)+0x58>
         266f0:	e24dd018 	sub	sp, sp, #24	; 0x18
         266f4:	e5cd1005 	strb	r1, [sp, #5]
         266f8:	e3a01010 	mov	r1, #16	; 0x10
         266fc:	e0011202 	and	r1, r1, r2, lsl #4
         26700:	e5cd1009 	strb	r1, [sp, #9]
         26704:	e3a010c6 	mov	r1, #198	; 0xc6
         26708:	e5cd100a 	strb	r1, [sp, #10]
         2670c:	e3a01000 	mov	r1, #0	; 0x0
         26710:	e58d100c 	str	r1, [sp, #12]
         26714:	e1a0100d 	mov	r1, sp
         26718:	eb6c4d5b 	bl	1b39c8c <TATASimple::$DoATARegCommand(TATARegCommandBlock *)>
         2671c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::InitDriveParam(unsigned char, unsigned char, unsigned char)
 * Address: 00026720
 */
TATASimple::InitDriveParam(unsigned char, unsigned char, unsigned char) {
    /*
         26720:	e1a0c00d 	mov	ip, sp
         26724:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         26728:	e24cb004 	sub	fp, ip, #4	; 0x4
         2672c:	e20110ff 	and	r1, r1, #255	; 0xff
         26730:	e20220ff 	and	r2, r2, #255	; 0xff
         26734:	e20330ff 	and	r3, r3, #255	; 0xff
         26738:	e5d0c022 	ldrb	ip, [r0, #34]	; fField34
         2673c:	e15c0003 	cmp	ip, r3
         26740:	b3a000ea 	movlt	r0, #234	; 0xea
         26744:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
         26748:	b24dd018 	sublt	sp, sp, #24	; 0x18
         2674c:	ba00000c 	blt	26784 <TATASimple::InitDriveParam(unsigned char, unsigned char, unsigned char)+0x64>
         26750:	e24dd018 	sub	sp, sp, #24	; 0x18
         26754:	e5cd1005 	strb	r1, [sp, #5]
         26758:	e3a01010 	mov	r1, #16	; 0x10
         2675c:	e0011203 	and	r1, r1, r3, lsl #4
         26760:	e202200f 	and	r2, r2, #15	; 0xf
         26764:	e1811002 	orr	r1, r1, r2
         26768:	e5cd1009 	strb	r1, [sp, #9]
         2676c:	e3a01091 	mov	r1, #145	; 0x91
         26770:	e5cd100a 	strb	r1, [sp, #10]
         26774:	e3a01000 	mov	r1, #0	; 0x0
         26778:	e58d100c 	str	r1, [sp, #12]
         2677c:	e1a0100d 	mov	r1, sp
         26780:	eb6c4d41 	bl	1b39c8c <TATASimple::$DoATARegCommand(TATARegCommandBlock *)>
         26784:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::DoATALBACommand(TATALBACommandBlock *)
 * Address: 00026788
 */
TATASimple::DoATALBACommand(TATALBACommandBlock *) {
    /*
         26788:	e1a0c00d 	mov	ip, sp
         2678c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         26790:	e24cb004 	sub	fp, ip, #4	; 0x4
         26794:	e1a05000 	mov	r5, r0
         26798:	e1a04001 	mov	r4, r1
         2679c:	e5d12019 	ldrb	r2, [r1, #25]
         267a0:	e5d00022 	ldrb	r0, [r0, #34]	; fField34
         267a4:	e1500002 	cmp	r0, r2
         267a8:	b3a000ea 	movlt	r0, #234	; 0xea
         267ac:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
         267b0:	b24dd018 	sublt	sp, sp, #24	; 0x18
         267b4:	ba000087 	blt	269d8 <TATASimple::DoATALBACommand(TATALBACommandBlock *)+0x250>
         267b8:	e5947004 	ldr	r7, [r4, #4]
         267bc:	e3a00000 	mov	r0, #0	; 0x0
         267c0:	e3a01050 	mov	r1, #80	; 0x50
         267c4:	e5840010 	str	r0, [r4, #16]	; fField16
         267c8:	e584700c 	str	r7, [r4, #12]
         267cc:	e5c4101b 	strb	r1, [r4, #27]
         267d0:	e5c4001c 	strb	r0, [r4, #28]	; fField28
         267d4:	e0620202 	rsb	r0, r2, r2, lsl #4
         267d8:	e0850180 	add	r0, r5, r0, lsl #3
         267dc:	e2806030 	add	r6, r0, #48	; 0x30
         267e0:	e5950018 	ldr	r0, [r5, #24]	; fField24
         267e4:	e3100001 	tst	r0, #1	; 0x1
         267e8:	1a00000a 	bne	26818 <TATASimple::DoATALBACommand(TATALBACommandBlock *)+0x90>
         267ec:	e24ddc02 	sub	sp, sp, #512	; 0x200
         267f0:	e1a0100d 	mov	r1, sp
         267f4:	e1a00005 	mov	r0, r5
         267f8:	eb6c4d2b 	bl	1b39cac <TATASimple::$IdentifyDrive(TATADriveInfo *, unsigned char)>
         267fc:	e3300000 	teq	r0, #0	; 0x0
         26800:	128ddf7a 	addne	sp, sp, #488	; 0x1e8
         26804:	1a000073 	bne	269d8 <TATASimple::DoATALBACommand(TATALBACommandBlock *)+0x250>
         26808:	e5950018 	ldr	r0, [r5, #24]	; fField24
         2680c:	e3800001 	orr	r0, r0, #1	; 0x1
         26810:	e5850018 	str	r0, [r5, #24]	; fField24
         26814:	e28ddc02 	add	sp, sp, #512	; 0x200
         26818:	e24dd018 	sub	sp, sp, #24	; 0x18
         2681c:	e3a0a00f 	mov	sl, #15	; 0xf
         26820:	e3a090ff 	mov	r9, #255	; 0xff
         26824:	e3a08010 	mov	r8, #16	; 0x10
         26828:	e5960062 	ldr	r0, [r6, #98]
         2682c:	e1a00820 	mov	r0, r0, lsr #16
         26830:	e3100c02 	tst	r0, #512	; 0x200
         26834:	0a00000a 	beq	26864 <TATASimple::DoATALBACommand(TATALBACommandBlock *)+0xdc>
         26838:	e5cd7006 	strb	r7, [sp, #6]
         2683c:	e0090427 	and	r0, r9, r7, lsr #8
         26840:	e5cd0007 	strb	r0, [sp, #7]
         26844:	e0090827 	and	r0, r9, r7, lsr #16
         26848:	e5cd0008 	strb	r0, [sp, #8]
         2684c:	e00a1c27 	and	r1, sl, r7, lsr #24
         26850:	e5d40019 	ldrb	r0, [r4, #25]
         26854:	e0080200 	and	r0, r8, r0, lsl #4
         26858:	e1810000 	orr	r0, r1, r0
         2685c:	e38000e0 	orr	r0, r0, #224	; 0xe0
         26860:	ea00001b 	b	268d4 <TATASimple::DoATALBACommand(TATALBACommandBlock *)+0x14c>
         26864:	e5960070 	ldr	r0, [r6, #112]
         26868:	e1a00820 	mov	r0, r0, lsr #16
         2686c:	e596106e 	ldr	r1, [r6, #110]
         26870:	e1a01821 	mov	r1, r1, lsr #16
         26874:	e0000091 	mul	r0, r1, r0
         26878:	e1a01007 	mov	r1, r7
         2687c:	eb6e3031 	bl	1bb2948 <$__rt_udiv>
         26880:	e5cd0007 	strb	r0, [sp, #7]
         26884:	e0090420 	and	r0, r9, r0, lsr #8
         26888:	e5cd0008 	strb	r0, [sp, #8]
         2688c:	e5960070 	ldr	r0, [r6, #112]
         26890:	e1a00820 	mov	r0, r0, lsr #16
         26894:	e1a01007 	mov	r1, r7
         26898:	eb6e302a 	bl	1bb2948 <$__rt_udiv>
         2689c:	e2810001 	add	r0, r1, #1	; 0x1
         268a0:	e5cd0006 	strb	r0, [sp, #6]
         268a4:	e5960070 	ldr	r0, [r6, #112]
         268a8:	e1a00820 	mov	r0, r0, lsr #16
         268ac:	e1a01007 	mov	r1, r7
         268b0:	eb6e3024 	bl	1bb2948 <$__rt_udiv>
         268b4:	e1a01000 	mov	r1, r0
         268b8:	e596006e 	ldr	r0, [r6, #110]
         268bc:	e1a00820 	mov	r0, r0, lsr #16
         268c0:	eb6e3020 	bl	1bb2948 <$__rt_udiv>
         268c4:	e5d40019 	ldrb	r0, [r4, #25]
         268c8:	e0080200 	and	r0, r8, r0, lsl #4
         268cc:	e1810000 	orr	r0, r1, r0
         268d0:	e38000a0 	orr	r0, r0, #160	; 0xa0
         268d4:	e5cd0009 	strb	r0, [sp, #9]
         268d8:	e5940014 	ldr	r0, [r4, #20]	; fField20
         268dc:	e58d000c 	str	r0, [sp, #12]
         268e0:	e5d4001a 	ldrb	r0, [r4, #26]
         268e4:	e5cd0004 	strb	r0, [sp, #4]
         268e8:	e5d40018 	ldrb	r0, [r4, #24]	; fField24
         268ec:	e5cd000a 	strb	r0, [sp, #10]
         268f0:	e5940008 	ldr	r0, [r4, #8]
         268f4:	e35000ff 	cmp	r0, #255	; 0xff
         268f8:	920000ff 	andls	r0, r0, #255	; 0xff
         268fc:	83a000ff 	movhi	r0, #255	; 0xff
         26900:	e20070ff 	and	r7, r0, #255	; 0xff
         26904:	e5cd7005 	strb	r7, [sp, #5]
         26908:	e5940000 	ldr	r0, [r4]
         2690c:	e5941010 	ldr	r1, [r4, #16]	; fField16
         26910:	e0800481 	add	r0, r0, r1, lsl #9
         26914:	e58d0000 	str	r0, [sp]
         26918:	e1a0100d 	mov	r1, sp
         2691c:	e1a00005 	mov	r0, r5
         26920:	eb6c4cd9 	bl	1b39c8c <TATASimple::$DoATARegCommand(TATARegCommandBlock *)>
         26924:	e3300000 	teq	r0, #0	; 0x0
         26928:	e5942010 	ldr	r2, [r4, #16]	; fField16
         2692c:	15dd1005 	ldrneb	r1, [sp, #5]
         26930:	01a01007 	moveq	r1, r7
         26934:	e0821001 	add	r1, r2, r1
         26938:	e5841010 	str	r1, [r4, #16]	; fField16
         2693c:	e5941008 	ldr	r1, [r4, #8]
         26940:	e0411007 	sub	r1, r1, r7
         26944:	e5841008 	str	r1, [r4, #8]
         26948:	e5962062 	ldr	r2, [r6, #98]
         2694c:	e1a02822 	mov	r2, r2, lsr #16
         26950:	e3120c02 	tst	r2, #512	; 0x200
         26954:	0a000009 	beq	26980 <TATASimple::DoATALBACommand(TATALBACommandBlock *)+0x1f8>
         26958:	e5dd2009 	ldrb	r2, [sp, #9]
         2695c:	e202200f 	and	r2, r2, #15	; 0xf
         26960:	e1a02c02 	mov	r2, r2, lsl #24
         26964:	e5dd3008 	ldrb	r3, [sp, #8]
         26968:	e0823803 	add	r3, r2, r3, lsl #16
         2696c:	e5dd2007 	ldrb	r2, [sp, #7]
         26970:	e0832402 	add	r2, r3, r2, lsl #8
         26974:	e5dd3006 	ldrb	r3, [sp, #6]
         26978:	e0822003 	add	r2, r2, r3
         2697c:	ea00000e 	b	269bc <TATASimple::DoATALBACommand(TATALBACommandBlock *)+0x234>
         26980:	e5dd2007 	ldrb	r2, [sp, #7]
         26984:	e5dd3008 	ldrb	r3, [sp, #8]
         26988:	e0822403 	add	r2, r2, r3, lsl #8
         2698c:	e596306e 	ldr	r3, [r6, #110]
         26990:	e1a03823 	mov	r3, r3, lsr #16
         26994:	e0030392 	mul	r3, r2, r3
         26998:	e5dd2009 	ldrb	r2, [sp, #9]
         2699c:	e202200f 	and	r2, r2, #15	; 0xf
         269a0:	e0832002 	add	r2, r3, r2
         269a4:	e5963070 	ldr	r3, [r6, #112]
         269a8:	e1a03823 	mov	r3, r3, lsr #16
         269ac:	e0030392 	mul	r3, r2, r3
         269b0:	e5dd2006 	ldrb	r2, [sp, #6]
         269b4:	e0832002 	add	r2, r3, r2
         269b8:	e2422001 	sub	r2, r2, #1	; 0x1
         269bc:	e584200c 	str	r2, [r4, #12]
         269c0:	e594200c 	ldr	r2, [r4, #12]
         269c4:	e2827001 	add	r7, r2, #1	; 0x1
         269c8:	e3300000 	teq	r0, #0	; 0x0
         269cc:	1a000001 	bne	269d8 <TATASimple::DoATALBACommand(TATALBACommandBlock *)+0x250>
         269d0:	e3510000 	cmp	r1, #0	; 0x0
         269d4:	8affff93 	bhi	26828 <TATASimple::DoATALBACommand(TATALBACommandBlock *)+0xa0>
         269d8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::DoATARegCommand(TATARegCommandBlock *)
 * Address: 000269dc
 */
TATASimple::DoATARegCommand(TATARegCommandBlock *) {
    /*
         269dc:	e1a0c00d 	mov	ip, sp
         269e0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         269e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         269e8:	e1a05000 	mov	r5, r0
         269ec:	e1a04001 	mov	r4, r1
         269f0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         269f4:	e3a00000 	mov	r0, #0	; 0x0
         269f8:	e2811018 	add	r1, r1, #24	; 0x18
         269fc:	e5ad0018 	str	r0, [sp, #24]!	; fField24
         26a00:	e9315008 	ldmdb	r1!, {r3, ip, lr}
         26a04:	e92d5008 	stmdb	sp!, {r3, ip, lr}
         26a08:	e9315008 	ldmdb	r1!, {r3, ip, lr}
         26a0c:	e92d5008 	stmdb	sp!, {r3, ip, lr}
         26a10:	e24dd004 	sub	sp, sp, #4	; 0x4
         26a14:	e5950010 	ldr	r0, [r5, #16]	; fField16
         26a18:	eb6eb3e3 	bl	1bd39ac <TCardSocket::$GetControl(void)>
         26a1c:	e58d0000 	str	r0, [sp]
         26a20:	e5950018 	ldr	r0, [r5, #24]	; fField24
         26a24:	e3100002 	tst	r0, #2	; 0x2
         26a28:	e5950010 	ldr	r0, [r5, #16]	; fField16
         26a2c:	0a000003 	beq	26a40 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x64>
         26a30:	eb6ed901 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         26a34:	e3a01000 	mov	r1, #0	; 0x0
         26a38:	eb6ee138 	bl	1bdef20 <$VppOn(int, unsigned char)>
         26a3c:	ea000002 	b	26a4c <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x70>
         26a40:	eb6ed8fd 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         26a44:	e3a01000 	mov	r1, #0	; 0x0
         26a48:	eb6edd22 	bl	1bdded8 <$VccOn(int, unsigned char)>
         26a4c:	e24dd004 	sub	sp, sp, #4	; 0x4
         26a50:	e5d40009 	ldrb	r0, [r4, #9]
         26a54:	e2000010 	and	r0, r0, #16	; 0x10
         26a58:	e1a00220 	mov	r0, r0, lsr #4
         26a5c:	e58d0000 	str	r0, [sp]
         26a60:	e5d50022 	ldrb	r0, [r5, #34]	; fField34
         26a64:	e59d1000 	ldr	r1, [sp]
         26a68:	e1500001 	cmp	r0, r1
         26a6c:	b3a000ea 	movlt	r0, #234	; 0xea
         26a70:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
         26a74:	b58d0020 	strlt	r0, [sp, #32]	; fField32
         26a78:	ba0000d5 	blt	26dd4 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x3f8>
         26a7c:	e3a00000 	mov	r0, #0	; 0x0
         26a80:	e52d006c 	str	r0, [sp, -#108]!
         26a84:	e28d0008 	add	r0, sp, #8	; 0x8
         26a88:	eb6e2fb9 	bl	1bb2974 <$setjmp>
         26a8c:	e3300000 	teq	r0, #0	; 0x0
         26a90:	1a0000c2 	bne	26da0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x3c4>
         26a94:	e1a0000d 	mov	r0, sp
         26a98:	eb6ee577 	bl	1be007c <$AddExceptionHandler>
         26a9c:	e3a01001 	mov	r1, #1	; 0x1
         26aa0:	e595602c 	ldr	r6, [r5, #44]	; fField44
         26aa4:	e5d4000a 	ldrb	r0, [r4, #10]
         26aa8:	e33000ec 	teq	r0, #236	; 0xec
         26aac:	13300022 	teqne	r0, #34	; 0x22
         26ab0:	13300032 	teqne	r0, #50	; 0x32
         26ab4:	13300050 	teqne	r0, #80	; 0x50
         26ab8:	05c41005 	streqb	r1, [r4, #5]
         26abc:	e1a02006 	mov	r2, r6
         26ac0:	e1a00005 	mov	r0, r5
         26ac4:	e3a01040 	mov	r1, #64	; 0x40
         26ac8:	eb6c509a 	bl	1b3ad38 <TATASimple::$WaitFor(unsigned char, TATARegisters *)>
         26acc:	e58d008c 	str	r0, [sp, #140]
         26ad0:	e3300000 	teq	r0, #0	; 0x0
         26ad4:	124dd004 	subne	sp, sp, #4	; 0x4
         26ad8:	1a0000ae 	bne	26d98 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x3bc>
         26adc:	e5d40004 	ldrb	r0, [r4, #4]
         26ae0:	e5c60002 	strb	r0, [r6, #2]
         26ae4:	e5d40005 	ldrb	r0, [r4, #5]
         26ae8:	e5c60001 	strb	r0, [r6, #1]
         26aec:	e5d40006 	ldrb	r0, [r4, #6]
         26af0:	e5c60000 	strb	r0, [r6]
         26af4:	e5d40007 	ldrb	r0, [r4, #7]
         26af8:	e5c60007 	strb	r0, [r6, #7]
         26afc:	e5d40008 	ldrb	r0, [r4, #8]
         26b00:	e5c60006 	strb	r0, [r6, #6]
         26b04:	e5d40009 	ldrb	r0, [r4, #9]
         26b08:	e5c60005 	strb	r0, [r6, #5]
         26b0c:	e5d4000a 	ldrb	r0, [r4, #10]
         26b10:	e5c60004 	strb	r0, [r6, #4]
         26b14:	eb6c4c72 	bl	1b39ce4 <$PatchPoint(void)>
         26b18:	e3a00000 	mov	r0, #0	; 0x0
         26b1c:	e52d0004 	str	r0, [sp, -#4]!
         26b20:	e5d4000a 	ldrb	r0, [r4, #10]
         26b24:	e3500097 	cmp	r0, #151	; 0x97
         26b28:	0a00006c 	beq	26ce0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x304>
         26b2c:	ca00000c 	bgt	26b64 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x188>
         26b30:	e350003c 	cmp	r0, #60	; 0x3c
         26b34:	0a00001e 	beq	26bb4 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x1d8>
         26b38:	ca000006 	bgt	26b58 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x17c>
         26b3c:	e3300020 	teq	r0, #32	; 0x20
         26b40:	13300022 	teqne	r0, #34	; 0x22
         26b44:	0a000017 	beq	26ba8 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x1cc>
         26b48:	e3300030 	teq	r0, #48	; 0x30
         26b4c:	13300032 	teqne	r0, #50	; 0x32
         26b50:	1a000062 	bne	26ce0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x304>
         26b54:	ea000016 	b	26bb4 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x1d8>
         26b58:	e3300050 	teq	r0, #80	; 0x50
         26b5c:	1a00005f 	bne	26ce0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x304>
         26b60:	ea000013 	b	26bb4 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x1d8>
         26b64:	e35000c6 	cmp	r0, #198	; 0xc6
         26b68:	0a000055 	beq	26cc4 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x2e8>
         26b6c:	ca000007 	bgt	26b90 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x1b4>
         26b70:	e3300098 	teq	r0, #152	; 0x98
         26b74:	13300099 	teqne	r0, #153	; 0x99
         26b78:	0a000058 	beq	26ce0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x304>
         26b7c:	e33000c4 	teq	r0, #196	; 0xc4
         26b80:	0a000008 	beq	26ba8 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x1cc>
         26b84:	e33000c5 	teq	r0, #197	; 0xc5
         26b88:	1a000054 	bne	26ce0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x304>
         26b8c:	ea000008 	b	26bb4 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x1d8>
         26b90:	e33000e4 	teq	r0, #228	; 0xe4
         26b94:	0a000003 	beq	26ba8 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x1cc>
         26b98:	e33000e8 	teq	r0, #232	; 0xe8
         26b9c:	0a000004 	beq	26bb4 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x1d8>
         26ba0:	e33000ec 	teq	r0, #236	; 0xec
         26ba4:	1a00004d 	bne	26ce0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x304>
         26ba8:	eb6c4c4d 	bl	1b39ce4 <$PatchPoint(void)>
         26bac:	e3a00001 	mov	r0, #1	; 0x1
         26bb0:	e58d0000 	str	r0, [sp]
         26bb4:	eb6c4c4a 	bl	1b39ce4 <$PatchPoint(void)>
         26bb8:	e24dd004 	sub	sp, sp, #4	; 0x4
         26bbc:	e5d40005 	ldrb	r0, [r4, #5]
         26bc0:	e58d0000 	str	r0, [sp]
         26bc4:	e3300000 	teq	r0, #0	; 0x0
         26bc8:	03a00c01 	moveq	r0, #256	; 0x100
         26bcc:	058d0000 	streq	r0, [sp]
         26bd0:	e3a00c02 	mov	r0, #512	; 0x200
         26bd4:	e5d4100a 	ldrb	r1, [r4, #10]
         26bd8:	e3310032 	teq	r1, #50	; 0x32
         26bdc:	1a000005 	bne	26bf8 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x21c>
         26be0:	e59d0074 	ldr	r0, [sp, #116]
         26be4:	e0600200 	rsb	r0, r0, r0, lsl #4
         26be8:	e0850180 	add	r0, r5, r0, lsl #3
         26bec:	e590005c 	ldr	r0, [r0, #92]
         26bf0:	e1a00820 	mov	r0, r0, lsr #16
         26bf4:	e2800c02 	add	r0, r0, #512	; 0x200
         26bf8:	e2861003 	add	r1, r6, #3	; 0x3
         26bfc:	e3c1a001 	bic	sl, r1, #1	; 0x1
         26c00:	e1a080a0 	mov	r8, r0, lsr #1
         26c04:	e5947000 	ldr	r7, [r4]
         26c08:	e59d0078 	ldr	r0, [sp, #120]
         26c0c:	e3c0101a 	bic	r1, r0, #26	; 0x1a
         26c10:	e5950010 	ldr	r0, [r5, #16]	; fField16
         26c14:	eb6ed45f 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         26c18:	e3a09000 	mov	r9, #0	; 0x0
         26c1c:	ea000020 	b	26ca4 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x2c8>
         26c20:	e1a02006 	mov	r2, r6
         26c24:	e1a00005 	mov	r0, r5
         26c28:	e3a01008 	mov	r1, #8	; 0x8
         26c2c:	eb6c5041 	bl	1b3ad38 <TATASimple::$WaitFor(unsigned char, TATARegisters *)>
         26c30:	e58d0094 	str	r0, [sp, #148]
         26c34:	e3300000 	teq	r0, #0	; 0x0
         26c38:	128dd004 	addne	sp, sp, #4	; 0x4
         26c3c:	1a000055 	bne	26d98 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x3bc>
         26c40:	e59d0004 	ldr	r0, [sp, #4]
         26c44:	e3300000 	teq	r0, #0	; 0x0
         26c48:	e3a00000 	mov	r0, #0	; 0x0
         26c4c:	0a00000a 	beq	26c7c <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x2a0>
         26c50:	e3580000 	cmp	r8, #0	; 0x0
         26c54:	9a000011 	bls	26ca0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x2c4>
         26c58:	e59a1000 	ldr	r1, [sl]
         26c5c:	e1a02821 	mov	r2, r1, lsr #16
         26c60:	e4c72001 	strb	r2, [r7], #1
         26c64:	e1a01c21 	mov	r1, r1, lsr #24
         26c68:	e4c71001 	strb	r1, [r7], #1
         26c6c:	e2800001 	add	r0, r0, #1	; 0x1
         26c70:	e1500008 	cmp	r0, r8
         26c74:	3afffff7 	bcc	26c58 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x27c>
         26c78:	ea000008 	b	26ca0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x2c4>
         26c7c:	e3580000 	cmp	r8, #0	; 0x0
         26c80:	9a000006 	bls	26ca0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x2c4>
         26c84:	e5d72001 	ldrb	r2, [r7, #1]
         26c88:	e4d71002 	ldrb	r1, [r7], #2
         26c8c:	e0811402 	add	r1, r1, r2, lsl #8
         26c90:	e2800001 	add	r0, r0, #1	; 0x1
         26c94:	e1500008 	cmp	r0, r8
         26c98:	e58a1000 	str	r1, [sl]
         26c9c:	3afffff8 	bcc	26c84 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x2a8>
         26ca0:	e2899001 	add	r9, r9, #1	; 0x1
         26ca4:	e59d0000 	ldr	r0, [sp]
         26ca8:	e1590000 	cmp	r9, r0
         26cac:	2a000002 	bcs	26cbc <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x2e0>
         26cb0:	e59d0094 	ldr	r0, [sp, #148]
         26cb4:	e3300000 	teq	r0, #0	; 0x0
         26cb8:	0affffd8 	beq	26c20 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x244>
         26cbc:	e28dd004 	add	sp, sp, #4	; 0x4
         26cc0:	ea000006 	b	26ce0 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x304>
         26cc4:	e5d41005 	ldrb	r1, [r4, #5]
         26cc8:	e59d0070 	ldr	r0, [sp, #112]
         26ccc:	e0600200 	rsb	r0, r0, r0, lsl #4
         26cd0:	e0850180 	add	r0, r5, r0, lsl #3
         26cd4:	e5c0108f 	strb	r1, [r0, #143]
         26cd8:	e1a01441 	mov	r1, r1, asr #8
         26cdc:	e5c0108e 	strb	r1, [r0, #142]
         26ce0:	eb6c4bff 	bl	1b39ce4 <$PatchPoint(void)>
         26ce4:	e1a02006 	mov	r2, r6
         26ce8:	e1a00005 	mov	r0, r5
         26cec:	e3a01040 	mov	r1, #64	; 0x40
         26cf0:	eb6c5010 	bl	1b3ad38 <TATASimple::$WaitFor(unsigned char, TATARegisters *)>
         26cf4:	e58d0090 	str	r0, [sp, #144]
         26cf8:	e3300000 	teq	r0, #0	; 0x0
         26cfc:	1a000025 	bne	26d98 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x3bc>
         26d00:	e5d4000a 	ldrb	r0, [r4, #10]
         26d04:	e33000ec 	teq	r0, #236	; 0xec
         26d08:	1a000009 	bne	26d34 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x358>
         26d0c:	e1a00005 	mov	r0, r5
         26d10:	e5941000 	ldr	r1, [r4]
         26d14:	eb6c5003 	bl	1b3ad28 <TATASimple::$SwapDriveInfoBytes(TATADriveBasicInfo *)>
         26d18:	e59d0070 	ldr	r0, [sp, #112]
         26d1c:	e0600200 	rsb	r0, r0, r0, lsl #4
         26d20:	e0850180 	add	r0, r5, r0, lsl #3
         26d24:	e2800030 	add	r0, r0, #48	; 0x30
         26d28:	e3a02078 	mov	r2, #120	; 0x78
         26d2c:	e5941000 	ldr	r1, [r4]
         26d30:	eb6e3746 	bl	1bb4a50 <$memcpy>
         26d34:	eb6c4bea 	bl	1b39ce4 <$PatchPoint(void)>
         26d38:	e5d60002 	ldrb	r0, [r6, #2]
         26d3c:	e5c40004 	strb	r0, [r4, #4]
         26d40:	e5d60001 	ldrb	r0, [r6, #1]
         26d44:	e5c40005 	strb	r0, [r4, #5]
         26d48:	e5d60000 	ldrb	r0, [r6]
         26d4c:	e5c40006 	strb	r0, [r4, #6]
         26d50:	e5d60007 	ldrb	r0, [r6, #7]
         26d54:	e5c40007 	strb	r0, [r4, #7]
         26d58:	e5d60006 	ldrb	r0, [r6, #6]
         26d5c:	e5c40008 	strb	r0, [r4, #8]
         26d60:	e5d60005 	ldrb	r0, [r6, #5]
         26d64:	e5c40009 	strb	r0, [r4, #9]
         26d68:	e5d60004 	ldrb	r0, [r6, #4]
         26d6c:	e5c4000a 	strb	r0, [r4, #10]
         26d70:	e5d6000c 	ldrb	r0, [r6, #12]
         26d74:	e5c4000b 	strb	r0, [r4, #11]
         26d78:	eb6c4bd9 	bl	1b39ce4 <$PatchPoint(void)>
         26d7c:	e5d4000a 	ldrb	r0, [r4, #10]
         26d80:	e3100001 	tst	r0, #1	; 0x1
         26d84:	0a000003 	beq	26d98 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x3bc>
         26d88:	e5d41004 	ldrb	r1, [r4, #4]
         26d8c:	e1a00005 	mov	r0, r5
         26d90:	eb6c47b7 	bl	1b38c74 <TATASimple::$CheckError(unsigned char)>
         26d94:	e58d0090 	str	r0, [sp, #144]
         26d98:	e28dd004 	add	sp, sp, #4	; 0x4
         26d9c:	ea000009 	b	26dc8 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x3ec>
         26da0:	e59d0060 	ldr	r0, [sp, #96]
         26da4:	e28f1f11 	add	r1, pc, #68	; 0x44
         26da8:	eb6ef0f9 	bl	1be3194 <$Subexception>
         26dac:	e3300000 	teq	r0, #0	; 0x0
         26db0:	13a000b5 	movne	r0, #181	; 0xb5
         26db4:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         26db8:	158d008c 	strne	r0, [sp, #140]
         26dbc:	1a000001 	bne	26dc8 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x3ec>
         26dc0:	e1a0000d 	mov	r0, sp
         26dc4:	eb6eece2 	bl	1be2154 <$NextHandler>
         26dc8:	e1a0000d 	mov	r0, sp
         26dcc:	eb6ee8b9 	bl	1be10b8 <$ExitHandler>
         26dd0:	e28dd06c 	add	sp, sp, #108	; 0x6c
         26dd4:	e5950018 	ldr	r0, [r5, #24]	; fField24
         26dd8:	e3100002 	tst	r0, #2	; 0x2
         26ddc:	e5950010 	ldr	r0, [r5, #16]	; fField16
         26de0:	0a000003 	beq	26df4 <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x418>
         26de4:	eb6ed814 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         26de8:	eb6ee049 	bl	1bdef14 <$VppOff(int)>
         26dec:	ea000002 	b	26dfc <TATASimple::DoATARegCommand(TATARegCommandBlock *)+0x420>
         26df0:	00000000 	andeq	r0, r0, r0
         26df4:	eb6ed810 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         26df8:	eb6edc33 	bl	1bddecc <$VccOff(int)>
         26dfc:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
         26e00:	e59d1004 	ldr	r1, [sp, #4]
         26e04:	eb6ed3e3 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         26e08:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         26e0c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::Delete(void)
 * Address: 00026e10
 */
TATASimple::Delete(void) {
    /*
         26e10:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::SetDeviceControlReg(unsigned char)
 * Address: 00026e14
 */
TATASimple::SetDeviceControlReg(unsigned char) {
    /*
         26e14:	e20110ff 	and	r1, r1, #255	; 0xff
         26e18:	e590202c 	ldr	r2, [r0, #44]	; fField44
         26e1c:	e5c2100d 	strb	r1, [r2, #13]
         26e20:	e5c01023 	strb	r1, [r0, #35]	; fField35
         26e24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::SwapDriveInfoBytes(TATADriveBasicInfo *)
 * Address: 00026e28
 */
TATASimple::SwapDriveInfoBytes(TATADriveBasicInfo *) {
    /*
         26e28:	e1a0c00d 	mov	ip, sp
         26e2c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         26e30:	e24cb004 	sub	fp, ip, #4	; 0x4
         26e34:	e1a04001 	mov	r4, r1
         26e38:	e3a02072 	mov	r2, #114	; 0x72
         26e3c:	eb6c4fba 	bl	1b3ad2c <TATASimple::$SwapShorts(unsigned char *, unsigned long)>
         26e40:	e5d40072 	ldrb	r0, [r4, #114]
         26e44:	e5d41075 	ldrb	r1, [r4, #117]
         26e48:	e5c41072 	strb	r1, [r4, #114]
         26e4c:	e5c40075 	strb	r0, [r4, #117]
         26e50:	e5d40073 	ldrb	r0, [r4, #115]
         26e54:	e5d41074 	ldrb	r1, [r4, #116]
         26e58:	e5c41073 	strb	r1, [r4, #115]
         26e5c:	e5c40074 	strb	r0, [r4, #116]
         26e60:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::SwapShorts(unsigned char *, unsigned long)
 * Address: 00026e64
 */
TATASimple::SwapShorts(unsigned char *, unsigned long) {
    /*
         26e64:	e3a00000 	mov	r0, #0	; 0x0
         26e68:	e1a020a2 	mov	r2, r2, lsr #1
         26e6c:	e3520000 	cmp	r2, #0	; 0x0
         26e70:	91a0f00e 	movls	pc, lr
         26e74:	e5d13000 	ldrb	r3, [r1]
         26e78:	e5d1c001 	ldrb	ip, [r1, #1]
         26e7c:	e5c1c000 	strb	ip, [r1]
         26e80:	e5c13001 	strb	r3, [r1, #1]
         26e84:	e2811002 	add	r1, r1, #2	; 0x2
         26e88:	e2800001 	add	r0, r0, #1	; 0x1
         26e8c:	e1520000 	cmp	r2, r0
         26e90:	8afffff7 	bhi	26e74 <TATASimple::SwapShorts(unsigned char *, unsigned long)+0x10>
         26e94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::ATASpecific(unsigned long, void *, unsigned long)
 * Address: 00026e98
 */
TATASimple::ATASpecific(unsigned long, void *, unsigned long) {
    /*
         26e98:	e3a00000 	mov	r0, #0	; 0x0
         26e9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::WaitFor(unsigned char, TATARegisters *)
 * Address: 00026ea0
 */
TATASimple::WaitFor(unsigned char, TATARegisters *) {
    /*
         26ea0:	e1a0c00d 	mov	ip, sp
         26ea4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         26ea8:	e24cb004 	sub	fp, ip, #4	; 0x4
         26eac:	e1a05000 	mov	r5, r0
         26eb0:	e1a04002 	mov	r4, r2
         26eb4:	e20180ff 	and	r8, r1, #255	; 0xff
         26eb8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         26ebc:	e3a07000 	mov	r7, #0	; 0x0
         26ec0:	e1a0000d 	mov	r0, sp
         26ec4:	eb6f5c00 	bl	1bfdecc <TDelayTimer::$__ct(void)>
         26ec8:	e1a0000d 	mov	r0, sp
         26ecc:	e59f104c 	ldr	r1, [pc, #4c]	; 26f20 <TATASimple::WaitFor(unsigned char, TATARegisters *)+0x80>
         26ed0:	eb6f5c02 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
         26ed4:	e2849004 	add	r9, r4, #4	; 0x4
         26ed8:	e5d96000 	ldrb	r6, [r9]
         26edc:	e1a0000d 	mov	r0, sp
         26ee0:	eb6f5c00 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
         26ee4:	e3300000 	teq	r0, #0	; 0x0
         26ee8:	02060001 	andeq	r0, r6, #1	; 0x1
         26eec:	03300000 	teqeq	r0, #0	; 0x0
         26ef0:	1a000003 	bne	26f04 <TATASimple::WaitFor(unsigned char, TATARegisters *)+0x64>
         26ef4:	e3160080 	tst	r6, #128	; 0x80
         26ef8:	1afffff6 	bne	26ed8 <TATASimple::WaitFor(unsigned char, TATARegisters *)+0x38>
         26efc:	e1160008 	tst	r6, r8
         26f00:	0afffff4 	beq	26ed8 <TATASimple::WaitFor(unsigned char, TATARegisters *)+0x38>
         26f04:	e3160001 	tst	r6, #1	; 0x1
         26f08:	0a000005 	beq	26f24 <TATASimple::WaitFor(unsigned char, TATARegisters *)+0x84>
         26f0c:	e5d41002 	ldrb	r1, [r4, #2]
         26f10:	e1a00005 	mov	r0, r5
         26f14:	eb6c4756 	bl	1b38c74 <TATASimple::$CheckError(unsigned char)>
         26f18:	e1a07000 	mov	r7, r0
         26f1c:	ea00000a 	b	26f4c <TATASimple::WaitFor(unsigned char, TATARegisters *)+0xac>
         26f20:	00a8bb50 	adceq	fp, r8, r0, asr fp
         26f24:	e3160080 	tst	r6, #128	; 0x80
         26f28:	13e07052 	mvnne	r7, #82	; 0x52
         26f2c:	12477c29 	subne	r7, r7, #10496	; 0x2900
         26f30:	1a000005 	bne	26f4c <TATASimple::WaitFor(unsigned char, TATARegisters *)+0xac>
         26f34:	e1160008 	tst	r6, r8
         26f38:	1a000003 	bne	26f4c <TATASimple::WaitFor(unsigned char, TATARegisters *)+0xac>
         26f3c:	e3380040 	teq	r8, #64	; 0x40
         26f40:	159f700c 	ldrne	r7, [pc, #c]	; 26f54 <TATASimple::WaitFor(unsigned char, TATARegisters *)+0xb4>
         26f44:	03e07053 	mvneq	r7, #83	; 0x53
         26f48:	02477c29 	subeq	r7, r7, #10496	; 0x2900
         26f4c:	e1a00007 	mov	r0, r7
         26f50:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         26f54:	ffffd6ab 	swinv	0x00ffd6ab
    */
}

/**
 * Symbol: TATASimple::CheckError(unsigned char)
 * Address: 00026f58
 */
TATASimple::CheckError(unsigned char) {
    /*
         26f58:	e20120ff 	and	r2, r1, #255	; 0xff
         26f5c:	e3e00049 	mvn	r0, #73	; 0x49
         26f60:	e2400c29 	sub	r0, r0, #10496	; 0x2900
         26f64:	e3a01000 	mov	r1, #0	; 0x0
         26f68:	ea000003 	b	26f7c <TATASimple::CheckError(unsigned char)+0x24>
         26f6c:	e1a020c2 	mov	r2, r2, asr #1
         26f70:	e20220ff 	and	r2, r2, #255	; 0xff
         26f74:	e2400001 	sub	r0, r0, #1	; 0x1
         26f78:	e2811001 	add	r1, r1, #1	; 0x1
         26f7c:	e3120001 	tst	r2, #1	; 0x1
         26f80:	11a0f00e 	movne	pc, lr
         26f84:	e3510008 	cmp	r1, #8	; 0x8
         26f88:	3afffff7 	bcc	26f6c <TATASimple::CheckError(unsigned char)+0x14>
         26f8c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 00026f90
 */
TATASimple::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long) {
    /*
         26f90:	e1a0c00d 	mov	ip, sp
         26f94:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         26f98:	e24cb004 	sub	fp, ip, #4	; 0x4
         26f9c:	e1a04000 	mov	r4, r0
         26fa0:	e1a05001 	mov	r5, r1
         26fa4:	e1a06002 	mov	r6, r2
         26fa8:	e1a01003 	mov	r1, r3
         26fac:	e3a07000 	mov	r7, #0	; 0x0
         26fb0:	e5805010 	str	r5, [r0, #16]	; fField16
         26fb4:	e1a00002 	mov	r0, r2
         26fb8:	eb6eb271 	bl	1bd3984 <TCardPCMCIA::$GetCardConfiguration(unsigned long const)>
         26fbc:	e1a08000 	mov	r8, r0
         26fc0:	e5d00156 	ldrb	r0, [r0, #342]
         26fc4:	e5c40021 	strb	r0, [r4, #33]	; fField33
         26fc8:	e5d80155 	ldrb	r0, [r8, #341]
         26fcc:	e5c40020 	strb	r0, [r4, #32]	; fField32
         26fd0:	e1a00005 	mov	r0, r5
         26fd4:	eb6ea1f5 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         26fd8:	e5b61010 	ldr	r1, [r6, #16]!	; fField16
         26fdc:	e0800001 	add	r0, r0, r1
         26fe0:	e584001c 	str	r0, [r4, #28]	; fField28
         26fe4:	e5d41020 	ldrb	r1, [r4, #32]	; fField32
         26fe8:	e5c01003 	strb	r1, [r0, #3]
         26fec:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
         26ff0:	e3300000 	teq	r0, #0	; 0x0
         26ff4:	e1a00005 	mov	r0, r5
         26ff8:	1a000002 	bne	27008 <TATASimple::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)+0x78>
         26ffc:	eb6ea60b 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         27000:	e59810e8 	ldr	r1, [r8, #232]
         27004:	ea000001 	b	27010 <TATASimple::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)+0x80>
         27008:	eb6ebebd 	bl	1bd6b04 <TCardSocket::$IOBaseAddr(void)>
         2700c:	e59810a8 	ldr	r1, [r8, #168]
         27010:	e0800001 	add	r0, r0, r1
         27014:	e584002c 	str	r0, [r4, #44]	; fField44
         27018:	e1a00005 	mov	r0, r5
         2701c:	eb6ea603 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         27020:	e2800b01 	add	r0, r0, #1024	; 0x400
         27024:	e5840028 	str	r0, [r4, #40]	; fField40
         27028:	e5b8001c 	ldr	r0, [r8, #28]!	; fField28
         2702c:	e240c8b7 	sub	ip, r0, #11993088	; 0xb70000
         27030:	e33c0c1b 	teq	ip, #6912	; 0x1b00
         27034:	05940018 	ldreq	r0, [r4, #24]	; fField24
         27038:	03800002 	orreq	r0, r0, #2	; 0x2
         2703c:	05840018 	streq	r0, [r4, #24]	; fField24
         27040:	e3a06000 	mov	r6, #0	; 0x0
         27044:	ea000009 	b	27070 <TATASimple::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)+0xe0>
         27048:	e24ddc02 	sub	sp, sp, #512	; 0x200
         2704c:	e1a02006 	mov	r2, r6
         27050:	e1a0100d 	mov	r1, sp
         27054:	e1a00004 	mov	r0, r4
         27058:	eb6c4b13 	bl	1b39cac <TATASimple::$IdentifyDrive(TATADriveInfo *, unsigned char)>
         2705c:	e1b07000 	movs	r7, r0
         27060:	e28ddc02 	add	sp, sp, #512	; 0x200
         27064:	e2860001 	add	r0, r6, #1	; 0x1
         27068:	e20060ff 	and	r6, r0, #255	; 0xff
         2706c:	1a000003 	bne	27080 <TATASimple::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)+0xf0>
         27070:	e5d40022 	ldrb	r0, [r4, #34]	; fField34
         27074:	e1500006 	cmp	r0, r6
         27078:	aafffff2 	bge	27048 <TATASimple::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)+0xb8>
         2707c:	ea000001 	b	27088 <TATASimple::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)+0xf8>
         27080:	e3370000 	teq	r7, #0	; 0x0
         27084:	1a000006 	bne	270a4 <TATASimple::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)+0x114>
         27088:	e5940018 	ldr	r0, [r4, #24]	; fField24
         2708c:	e3800001 	orr	r0, r0, #1	; 0x1
         27090:	e5840018 	str	r0, [r4, #24]	; fField24
         27094:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
         27098:	e3300001 	teq	r0, #1	; 0x1
         2709c:	01a00005 	moveq	r0, r5
         270a0:	0b6ecf1f 	bleq	1bdad24 <TCardSocket::$SelectIOInterface(void)>
         270a4:	e1a00007 	mov	r0, r7
         270a8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::SuspendService(void)
 * Address: 000270ac
 */
TATASimple::SuspendService(void) {
    /*
         270ac:	e3a00000 	mov	r0, #0	; 0x0
         270b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 000270b4
 */
TATASimple::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long) {
    /*
         270b4:	e3a00000 	mov	r0, #0	; 0x0
         270b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::SetAttributes(unsigned long)
 * Address: 000270bc
 */
TATASimple::SetAttributes(unsigned long) {
    /*
         270bc:	e5a01014 	str	r1, [r0, #20]!	; fField20
         270c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::GetAttributes(void)
 * Address: 000270c4
 */
TATASimple::GetAttributes(void) {
    /*
         270c4:	e5900014 	ldr	r0, [r0, #20]	; fField20
         270c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATASimple::Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 000270cc
 */
TATASimple::Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
         270cc:	e1a0c00d 	mov	ip, sp
         270d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         270d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         270d8:	e59be004 	ldr	lr, [fp, #4]
         270dc:	e20ee0ff 	and	lr, lr, #255	; 0xff
         270e0:	e59bc008 	ldr	ip, [fp, #8]
         270e4:	e20cc0ff 	and	ip, ip, #255	; 0xff
         270e8:	e5d04022 	ldrb	r4, [r0, #34]	; fField34
         270ec:	e154000c 	cmp	r4, ip
         270f0:	ba000001 	blt	270fc <TATASimple::Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)+0x30>
         270f4:	e3310000 	teq	r1, #0	; 0x0
         270f8:	1a000003 	bne	2710c <TATASimple::Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)+0x40>
         270fc:	e3a000ea 	mov	r0, #234	; 0xea
         27100:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         27104:	e24dd020 	sub	sp, sp, #32	; 0x20
         27108:	ea00000b 	b	2713c <TATASimple::Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)+0x70>
         2710c:	e24dd014 	sub	sp, sp, #20	; 0x14
         27110:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         27114:	e3a01000 	mov	r1, #0	; 0x0
         27118:	e58d1014 	str	r1, [sp, #20]	; fField20
         2711c:	e5cde018 	strb	lr, [sp, #24]	; fField24
         27120:	e5cdc019 	strb	ip, [sp, #25]
         27124:	e5cd101a 	strb	r1, [sp, #26]
         27128:	e5cd101d 	strb	r1, [sp, #29]
         2712c:	e5cd101e 	strb	r1, [sp, #30]
         27130:	e5cd101f 	strb	r1, [sp, #31]
         27134:	e1a0100d 	mov	r1, sp
         27138:	eb6c4ad2 	bl	1b39c88 <TATASimple::$DoATALBACommand(TATALBACommandBlock *)>
         2713c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TATASimple::Write(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 00027140
 */
TATASimple::Write(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
         27140:	e1a0c00d 	mov	ip, sp
         27144:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         27148:	e24cb004 	sub	fp, ip, #4	; 0x4
         2714c:	e1a0c002 	mov	ip, r2
         27150:	e1a0e003 	mov	lr, r3
         27154:	e99b000c 	ldmib	fp, {r2, r3}
         27158:	e20220ff 	and	r2, r2, #255	; 0xff
         2715c:	e20330ff 	and	r3, r3, #255	; 0xff
         27160:	e92d000c 	stmdb	sp!, {r2, r3}
         27164:	e1a0300e 	mov	r3, lr
         27168:	e1a0200c 	mov	r2, ip
         2716c:	eb6c4add 	bl	1b39ce8 <TATASimple::$Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)>
         27170:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__10TATASimpleSFv
 * Address: 003866b4
 */
void TATASimple::ClassInfo() {
    /*
        3866b4:	e24f0044 	sub	r0, pc, #68	; 0x44
        3866b8:	e1a0f00e 	mov	pc, lr
        3866bc:	e3a00000 	mov	r0, #0	; 0x0
        3866c0:	e1a0f00e 	mov	pc, lr
        3866c4:	54415441 	strplb	r5, [r1], -#1089
        3866c8:	53696d70 	cmnpl	r9, #7168	; 0x1c00
        3866cc:	6c650054 	stcvsl	0, cr0, [r5], -#336
        3866d0:	41544100 	cmpmi	r4, r0, lsl #2
        3866dc:	eafffff4 	b	3866b4 <ClassInfo__10TATASimpleSFv>
        3866e0:	ea5ecd7d 	b	1b39cdc <TATASimple::$New(void)>
        3866e4:	ea5ecd66 	b	1b39c84 <TATASimple::$Delete(void)>
        3866e8:	ea5ed185 	b	1b3ad04 <TATASimple::$SetAttributes(unsigned long)>
        3866ec:	ea5ecd6d 	b	1b39ca8 <TATASimple::$GetAttributes(void)>
        3866f0:	ea5ecd7c 	b	1b39ce8 <TATASimple::$Read(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)>
        3866f4:	ea5ed190 	b	1b3ad3c <TATASimple::$Write(unsigned char *, unsigned long, unsigned long, unsigned char, unsigned char)>
        3866f8:	ea5ecd69 	b	1b39ca4 <TATASimple::$Format(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned char)>
        3866fc:	ea5ecd7b 	b	1b39cf0 <TATASimple::$Reset(unsigned char)>
        386700:	ea5ecd69 	b	1b39cac <TATASimple::$IdentifyDrive(TATADriveInfo *, unsigned char)>
        386704:	ea5ec95b 	b	1b38c78 <TATASimple::$CheckPowerMode(unsigned char *, unsigned char)>
        386708:	ea5ed180 	b	1b3ad10 <TATASimple::$SetMultipleMode(unsigned char, unsigned char)>
        38670c:	ea5ed17e 	b	1b3ad0c <TATASimple::$SetFeatures(unsigned char, unsigned char, unsigned char)>
        386710:	ea5ed180 	b	1b3ad18 <TATASimple::$SetPowerMode(unsigned char, unsigned char, unsigned char)>
        386714:	ea5ecd65 	b	1b39cb0 <TATASimple::$InitDriveParam(unsigned char, unsigned char, unsigned char)>
        386718:	ea5ecd5a 	b	1b39c88 <TATASimple::$DoATALBACommand(TATALBACommandBlock *)>
        38671c:	ea5ecd5a 	b	1b39c8c <TATASimple::$DoATARegCommand(TATARegCommandBlock *)>
        386720:	ea5ed178 	b	1b3ad08 <TATASimple::$SetDeviceControlReg(unsigned char)>
        386724:	ea5ec94f 	b	1b38c68 <TATASimple::$ATASpecific(unsigned long, void *, unsigned long)>
        386728:	ea5ecd62 	b	1b39cb8 <TATASimple::$Initialize(TCardSocket *, TCardPCMCIA *, unsigned long)>
        38672c:	ea5ed17b 	b	1b3ad20 <TATASimple::$SuspendService(void)>
        386730:	ea5ecd6f 	b	1b39cf4 <TATASimple::$ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)>
        386734:	00000000 	andeq	r0, r0, r0
        386738:	00000048 	andeq	r0, r0, r8, asr #32
        38673c:	00000050 	andeq	r0, r0, r0, asr r0
        386740:	00000059 	andeq	r0, r0, r9, asr r0
        386744:	00000058 	andeq	r0, r0, r8, asr r0
        386748:	000000a4 	andeq	r0, r0, r4, lsr #1
        38674c:	eaf307cf 	b	48690 <Sizeof__11TCHMemModemSFv>
        386758:	ea5ed182 	b	1b3ad68 <TCHMemModem::$New(void)>
        38675c:	ea5ed182 	b	1b3ad6c <TCHMemModem::$Delete(void)>
        38676c:	ea000001 	b	386778 <ClassInfo__11TCHMemModemSFv+0x8>
    */
}

