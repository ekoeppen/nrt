#include "Newton.h"

/**
 * Symbol: ExpandDict(unsigned long)
 * Address: 0002998c
 */
ExpandDict(unsigned long) {
    /*
         2998c:	e1a0c00d 	mov	ip, sp
         29990:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         29994:	e24cb004 	sub	fp, ip, #4	; 0x4
         29998:	e3a06000 	mov	r6, #0	; 0x0
         2999c:	e59f4078 	ldr	r4, [pc, #78]	; 29a1c <ExpandDict(unsigned long)+0x90>
         299a0:	e5941000 	ldr	r1, [r4]
         299a4:	e5912010 	ldr	r2, [r1, #16]
         299a8:	e591300c 	ldr	r3, [r1, #12]
         299ac:	e0422003 	sub	r2, r2, r3
         299b0:	e0825000 	add	r5, r2, r0
         299b4:	e5b10014 	ldr	r0, [r1, #20]!
         299b8:	e1500005 	cmp	r0, r5
         299bc:	2a000012 	bcs	29a0c <ExpandDict(unsigned long)+0x80>
         299c0:	e5940000 	ldr	r0, [r4]
         299c4:	e5901018 	ldr	r1, [r0, #24]
         299c8:	e5902014 	ldr	r2, [r0, #20]
         299cc:	e0821001 	add	r1, r2, r1
         299d0:	e5900008 	ldr	r0, [r0, #8]
         299d4:	eb6ee1e8 	bl	1be217c <$SetHandleSize>
         299d8:	eb6ee1d0 	bl	1be2120 <$MemError>
         299dc:	e3300000 	teq	r0, #0	; 0x0
         299e0:	13a06002 	movne	r6, #2	; 0x2
         299e4:	1a000008 	bne	29a0c <ExpandDict(unsigned long)+0x80>
         299e8:	e5940000 	ldr	r0, [r4]
         299ec:	eb675dc1 	bl	1a010f8 <$CheckDictPtrs(AirusAParmBlock *)>
         299f0:	e5940000 	ldr	r0, [r4]
         299f4:	e5901018 	ldr	r1, [r0, #24]
         299f8:	e5902014 	ldr	r2, [r0, #20]
         299fc:	e0821001 	add	r1, r2, r1
         29a00:	e5a01014 	str	r1, [r0, #20]!
         29a04:	e1510005 	cmp	r1, r5
         29a08:	3affffec 	bcc	299c0 <ExpandDict(unsigned long)+0x34>
         29a0c:	e1a00006 	mov	r0, r6
         29a10:	e5941000 	ldr	r1, [r4]
         29a14:	e5a1602c 	str	r6, [r1, #44]!
         29a18:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         29a1c:	0c10082c 	ldceq	8, cr0, [r0], -#176
    */
}

/**
 * Symbol: EraseDRect(Rect *)
 * Address: 0002f0f4
 */
EraseDRect(Rect *) {
    /*
         2f0f4:	e3a01002 	mov	r1, #2	; 0x2
         2f0f8:	ea6dc7e2 	b	1ba1088 <$PaintDRect(Rect *, TDMode)>
    */
}

/**
 * Symbol: ExpandIRCodeWord(IRCodeWord *, int)
 * Address: 0003d2ec
 */
ExpandIRCodeWord(IRCodeWord *, int) {
    /*
         3d2ec:	e1a0c00d 	mov	ip, sp
         3d2f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3d2f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         3d2f8:	e1a04000 	mov	r4, r0
         3d2fc:	e1a05001 	mov	r5, r1
         3d300:	e5900008 	ldr	r0, [r0, #8]
         3d304:	e3a01000 	mov	r1, #0	; 0x0
         3d308:	e5942014 	ldr	r2, [r4, #20]
         3d30c:	e3520000 	cmp	r2, #0	; 0x0
         3d310:	9a000005 	bls	3d32c <ExpandIRCodeWord(IRCodeWord *, int)+0x40>
         3d314:	e0843101 	add	r3, r4, r1, lsl #2
         3d318:	e5933018 	ldr	r3, [r3, #24]
         3d31c:	e0830000 	add	r0, r3, r0
         3d320:	e2811001 	add	r1, r1, #1	; 0x1
         3d324:	e1520001 	cmp	r2, r1
         3d328:	8afffff9 	bhi	3d314 <ExpandIRCodeWord(IRCodeWord *, int)+0x28>
         3d32c:	e3550001 	cmp	r5, #1	; 0x1
         3d330:	c594100c 	ldrgt	r1, [r4, #12]
         3d334:	ca000001 	bgt	3d340 <ExpandIRCodeWord(IRCodeWord *, int)+0x54>
         3d338:	1a000001 	bne	3d344 <ExpandIRCodeWord(IRCodeWord *, int)+0x58>
         3d33c:	e5941010 	ldr	r1, [r4, #16]
         3d340:	e0810000 	add	r0, r1, r0
         3d344:	e1a011a0 	mov	r1, r0, lsr #3
         3d348:	e3100007 	tst	r0, #7	; 0x7
         3d34c:	12811001 	addne	r1, r1, #1	; 0x1
         3d350:	e1a00001 	mov	r0, r1
         3d354:	e59f1048 	ldr	r1, [pc, #48]	; 3d3a4 <ExpandIRCodeWord(IRCodeWord *, int)+0xb8>
         3d358:	eb6e9377 	bl	1be213c <$NewNamedPtr>
         3d35c:	e3300000 	teq	r0, #0	; 0x0
         3d360:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         3d364:	e1a03000 	mov	r3, r0
         3d368:	e3a01000 	mov	r1, #0	; 0x0
         3d36c:	e3a02000 	mov	r2, #0	; 0x0
         3d370:	e3a0e001 	mov	lr, #1	; 0x1
         3d374:	e594c008 	ldr	ip, [r4, #8]
         3d378:	e25cc001 	subs	ip, ip, #1	; 0x1
         3d37c:	4a00000d 	bmi	3d3b8 <ExpandIRCodeWord(IRCodeWord *, int)+0xcc>
         3d380:	e20110ff 	and	r1, r1, #255	; 0xff
         3d384:	e3811080 	orr	r1, r1, #128	; 0x80
         3d388:	e2822001 	add	r2, r2, #1	; 0x1
         3d38c:	e3320008 	teq	r2, #8	; 0x8
         3d390:	1a000004 	bne	3d3a8 <ExpandIRCodeWord(IRCodeWord *, int)+0xbc>
         3d394:	e4c31001 	strb	r1, [r3], #1
         3d398:	e3a01000 	mov	r1, #0	; 0x0
         3d39c:	e3a02000 	mov	r2, #0	; 0x0
         3d3a0:	ea000002 	b	3d3b0 <ExpandIRCodeWord(IRCodeWord *, int)+0xc4>
         3d3a4:	64617461 	strvsbt	r7, [r1], -#1121
         3d3a8:	e1a010c1 	mov	r1, r1, asr #1
         3d3ac:	e20110ff 	and	r1, r1, #255	; 0xff
         3d3b0:	e25cc001 	subs	ip, ip, #1	; 0x1
         3d3b4:	5afffff1 	bpl	3d380 <ExpandIRCodeWord(IRCodeWord *, int)+0x94>
         3d3b8:	e3a0c000 	mov	ip, #0	; 0x0
         3d3bc:	e5946014 	ldr	r6, [r4, #20]
         3d3c0:	e3560000 	cmp	r6, #0	; 0x0
         3d3c4:	9a000019 	bls	3d430 <ExpandIRCodeWord(IRCodeWord *, int)+0x144>
         3d3c8:	e33e0000 	teq	lr, #0	; 0x0
         3d3cc:	13a0e000 	movne	lr, #0	; 0x0
         3d3d0:	03a0e001 	moveq	lr, #1	; 0x1
         3d3d4:	e20ee0ff 	and	lr, lr, #255	; 0xff
         3d3d8:	e084610c 	add	r6, r4, ip, lsl #2
         3d3dc:	e5966018 	ldr	r6, [r6, #24]
         3d3e0:	e2566001 	subs	r6, r6, #1	; 0x1
         3d3e4:	4a00000d 	bmi	3d420 <ExpandIRCodeWord(IRCodeWord *, int)+0x134>
         3d3e8:	e33e0000 	teq	lr, #0	; 0x0
         3d3ec:	120110ff 	andne	r1, r1, #255	; 0xff
         3d3f0:	13811080 	orrne	r1, r1, #128	; 0x80
         3d3f4:	e2822001 	add	r2, r2, #1	; 0x1
         3d3f8:	e3320008 	teq	r2, #8	; 0x8
         3d3fc:	1a000003 	bne	3d410 <ExpandIRCodeWord(IRCodeWord *, int)+0x124>
         3d400:	e4c31001 	strb	r1, [r3], #1
         3d404:	e3a01000 	mov	r1, #0	; 0x0
         3d408:	e3a02000 	mov	r2, #0	; 0x0
         3d40c:	ea000001 	b	3d418 <ExpandIRCodeWord(IRCodeWord *, int)+0x12c>
         3d410:	e1a010c1 	mov	r1, r1, asr #1
         3d414:	e20110ff 	and	r1, r1, #255	; 0xff
         3d418:	e2566001 	subs	r6, r6, #1	; 0x1
         3d41c:	5afffff1 	bpl	3d3e8 <ExpandIRCodeWord(IRCodeWord *, int)+0xfc>
         3d420:	e28cc001 	add	ip, ip, #1	; 0x1
         3d424:	e5946014 	ldr	r6, [r4, #20]
         3d428:	e156000c 	cmp	r6, ip
         3d42c:	8affffe5 	bhi	3d3c8 <ExpandIRCodeWord(IRCodeWord *, int)+0xdc>
         3d430:	e3550001 	cmp	r5, #1	; 0x1
         3d434:	c5b4c00c 	ldrgt	ip, [r4, #12]!
         3d438:	ca000001 	bgt	3d444 <ExpandIRCodeWord(IRCodeWord *, int)+0x158>
         3d43c:	13a0c000 	movne	ip, #0	; 0x0
         3d440:	05b4c010 	ldreq	ip, [r4, #16]!
         3d444:	e25cc001 	subs	ip, ip, #1	; 0x1
         3d448:	4a00000a 	bmi	3d478 <ExpandIRCodeWord(IRCodeWord *, int)+0x18c>
         3d44c:	e2822001 	add	r2, r2, #1	; 0x1
         3d450:	e3320008 	teq	r2, #8	; 0x8
         3d454:	1a000003 	bne	3d468 <ExpandIRCodeWord(IRCodeWord *, int)+0x17c>
         3d458:	e4c31001 	strb	r1, [r3], #1
         3d45c:	e3a01000 	mov	r1, #0	; 0x0
         3d460:	e3a02000 	mov	r2, #0	; 0x0
         3d464:	ea000001 	b	3d470 <ExpandIRCodeWord(IRCodeWord *, int)+0x184>
         3d468:	e1a010c1 	mov	r1, r1, asr #1
         3d46c:	e20110ff 	and	r1, r1, #255	; 0xff
         3d470:	e25cc001 	subs	ip, ip, #1	; 0x1
         3d474:	5afffff4 	bpl	3d44c <ExpandIRCodeWord(IRCodeWord *, int)+0x160>
         3d478:	e3520000 	cmp	r2, #0	; 0x0
         3d47c:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
         3d480:	e2822001 	add	r2, r2, #1	; 0x1
         3d484:	e3520008 	cmp	r2, #8	; 0x8
         3d488:	aa000004 	bge	3d4a0 <ExpandIRCodeWord(IRCodeWord *, int)+0x1b4>
         3d48c:	e1a010c1 	mov	r1, r1, asr #1
         3d490:	e20110ff 	and	r1, r1, #255	; 0xff
         3d494:	e2822001 	add	r2, r2, #1	; 0x1
         3d498:	e3520008 	cmp	r2, #8	; 0x8
         3d49c:	bafffffa 	blt	3d48c <ExpandIRCodeWord(IRCodeWord *, int)+0x1a0>
         3d4a0:	e5c31000 	strb	r1, [r3]
         3d4a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ExtractNameFromNetAddress(RefVar const &)
 * Address: 000669d4
 */
ExtractNameFromNetAddress(RefVar const &) {
    /*
         669d4:	e1a0c00d 	mov	ip, sp
         669d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         669dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         669e0:	e24dd00c 	sub	sp, sp, #12	; 0xc
         669e4:	eb6d6de0 	bl	1bc216c <$Clone(RefVar const &)>
         669e8:	eb6d6dd7 	bl	1bc214c <$AllocateRefHandle(long)>
         669ec:	e58d0008 	str	r0, [sp, #8]
         669f0:	e28d1008 	add	r1, sp, #8	; 0x8
         669f4:	e1a0000d 	mov	r0, sp
         669f8:	eb6d69b6 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         669fc:	e1a0100d 	mov	r1, sp
         66a00:	e28d0004 	add	r0, sp, #4	; 0x4
         66a04:	eb6d69b2 	bl	1bc10d4 <TObjectPtr::$__ct(TObjectPtr const &)>
         66a08:	e1a0000d 	mov	r0, sp
         66a0c:	e3a01000 	mov	r1, #0	; 0x0
         66a10:	eb6d6dba 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         66a14:	e3a05000 	mov	r5, #0	; 0x0
         66a18:	e28d0004 	add	r0, sp, #4	; 0x4
         66a1c:	eb6d6dbc 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         66a20:	e1a04000 	mov	r4, r0
         66a24:	e3a0003a 	mov	r0, #58	; 0x3a
         66a28:	eb6cfa32 	bl	1ba52f8 <$U_CONST_CHAR>
         66a2c:	e1a02000 	mov	r2, r0
         66a30:	e3a00000 	mov	r0, #0	; 0x0
         66a34:	ea000000 	b	66a3c <ExtractNameFromNetAddress(RefVar const &)+0x68>
         66a38:	e2800001 	add	r0, r0, #1	; 0x1
         66a3c:	e7941080 	ldr	r1, [r4, r0, lsl #1]
         66a40:	e1a01821 	mov	r1, r1, lsr #16
         66a44:	e1310002 	teq	r1, r2
         66a48:	13310000 	teqne	r1, #0	; 0x0
         66a4c:	1afffff9 	bne	66a38 <ExtractNameFromNetAddress(RefVar const &)+0x64>
         66a50:	e0840080 	add	r0, r4, r0, lsl #1
         66a54:	e5c05001 	strb	r5, [r0, #1]
         66a58:	e5c05000 	strb	r5, [r0]
         66a5c:	e1a00004 	mov	r0, r4
         66a60:	eb6d7a1b 	bl	1bc52d4 <$MakeString(unsigned short const *)>
         66a64:	e1a04000 	mov	r4, r0
         66a68:	e28d0004 	add	r0, sp, #4	; 0x4
         66a6c:	e3a01000 	mov	r1, #0	; 0x0
         66a70:	eb6d6da2 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         66a74:	e59d0008 	ldr	r0, [sp, #8]
         66a78:	eb6d71cf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         66a7c:	e1a00004 	mov	r0, r4
         66a80:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: encode_offset_case10_bin__FlT1P10Pushpopper
 * Address: 000755e0
 */
void globals::encode_offset_case10_bin() {
    /*
         755e0:	e1a0c00d 	mov	ip, sp
         755e4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         755e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         755ec:	e1a05000 	mov	r5, r0
         755f0:	e1a06001 	mov	r6, r1
         755f4:	e1a04002 	mov	r4, r2
         755f8:	e3300001 	teq	r0, #1	; 0x1
         755fc:	01a00004 	moveq	r0, r4
         75600:	03a02000 	moveq	r2, #0	; 0x0
         75604:	03a01001 	moveq	r1, #1	; 0x1
         75608:	0a000015 	beq	75664 <encode_offset_case10_bin__FlT1P10Pushpopper+0x84>
         7560c:	e3550005 	cmp	r5, #5	; 0x5
         75610:	d2852006 	addle	r2, r5, #6	; 0x6
         75614:	da000010 	ble	7565c <encode_offset_case10_bin__FlT1P10Pushpopper+0x7c>
         75618:	e3550015 	cmp	r5, #21	; 0x15
         7561c:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         75620:	e1a00004 	mov	r0, r4
         75624:	e3a02003 	mov	r2, #3	; 0x3
         75628:	e3a01002 	mov	r1, #2	; 0x2
         7562c:	eb6cbb0d 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         75630:	e3a01001 	mov	r1, #1	; 0x1
         75634:	e2452006 	sub	r2, r5, #6	; 0x6
         75638:	e59f002c 	ldr	r0, [pc, #2c]	; 7566c <encode_offset_case10_bin__FlT1P10Pushpopper+0x8c>
         7563c:	e0803101 	add	r3, r0, r1, lsl #2
         75640:	e5133004 	ldr	r3, [r3, -#4]
         75644:	e1530006 	cmp	r3, r6
         75648:	21a00004 	movcs	r0, r4
         7564c:	2a000004 	bcs	75664 <encode_offset_case10_bin__FlT1P10Pushpopper+0x84>
         75650:	e2811001 	add	r1, r1, #1	; 0x1
         75654:	e3510003 	cmp	r1, #3	; 0x3
         75658:	dafffff7 	ble	7563c <encode_offset_case10_bin__FlT1P10Pushpopper+0x5c>
         7565c:	e1a00004 	mov	r0, r4
         75660:	e3a01004 	mov	r1, #4	; 0x4
         75664:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         75668:	ea6cbafe 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         7566c:	00371a60 	eoreqs	r1, r7, r0, ror #20
    */
}

/**
 * Symbol: encode_offset_case9_bin__FlT1P10Pushpopper
 * Address: 00075670
 */
void globals::encode_offset_case9_bin() {
    /*
         75670:	e1a0c00d 	mov	ip, sp
         75674:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         75678:	e24cb004 	sub	fp, ip, #4	; 0x4
         7567c:	e1a04000 	mov	r4, r0
         75680:	e1a06001 	mov	r6, r1
         75684:	e1a05002 	mov	r5, r2
         75688:	e3500002 	cmp	r0, #2	; 0x2
         7568c:	d2442001 	suble	r2, r4, #1	; 0x1
         75690:	d1a00005 	movle	r0, r5
         75694:	d3a01002 	movle	r1, #2	; 0x2
         75698:	da000015 	ble	756f4 <encode_offset_case9_bin__FlT1P10Pushpopper+0x84>
         7569c:	e354000a 	cmp	r4, #10	; 0xa
         756a0:	d284200d 	addle	r2, r4, #13	; 0xd
         756a4:	da000010 	ble	756ec <encode_offset_case9_bin__FlT1P10Pushpopper+0x7c>
         756a8:	e354002a 	cmp	r4, #42	; 0x2a
         756ac:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         756b0:	e1a00005 	mov	r0, r5
         756b4:	e3a02003 	mov	r2, #3	; 0x3
         756b8:	e3a01002 	mov	r1, #2	; 0x2
         756bc:	eb6cbae9 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         756c0:	e3a01001 	mov	r1, #1	; 0x1
         756c4:	e244200b 	sub	r2, r4, #11	; 0xb
         756c8:	e59f002c 	ldr	r0, [pc, #2c]	; 756fc <encode_offset_case9_bin__FlT1P10Pushpopper+0x8c>
         756cc:	e0803101 	add	r3, r0, r1, lsl #2
         756d0:	e5133004 	ldr	r3, [r3, -#4]
         756d4:	e1530006 	cmp	r3, r6
         756d8:	21a00005 	movcs	r0, r5
         756dc:	2a000004 	bcs	756f4 <encode_offset_case9_bin__FlT1P10Pushpopper+0x84>
         756e0:	e2811001 	add	r1, r1, #1	; 0x1
         756e4:	e3510004 	cmp	r1, #4	; 0x4
         756e8:	dafffff7 	ble	756cc <encode_offset_case9_bin__FlT1P10Pushpopper+0x5c>
         756ec:	e1a00005 	mov	r0, r5
         756f0:	e3a01005 	mov	r1, #5	; 0x5
         756f4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         756f8:	ea6cbada 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         756fc:	00371a6c 	eoreqs	r1, r7, ip, ror #20
    */
}

/**
 * Symbol: encode_offset_case8_bin__FlT1P10Pushpopper
 * Address: 00075d50
 */
void globals::encode_offset_case8_bin() {
    /*
         75d50:	e1a0c00d 	mov	ip, sp
         75d54:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         75d58:	e24cb004 	sub	fp, ip, #4	; 0x4
         75d5c:	e1a04000 	mov	r4, r0
         75d60:	e1a06001 	mov	r6, r1
         75d64:	e1a05002 	mov	r5, r2
         75d68:	e3500004 	cmp	r0, #4	; 0x4
         75d6c:	d2442001 	suble	r2, r4, #1	; 0x1
         75d70:	d1a00005 	movle	r0, r5
         75d74:	d3a01003 	movle	r1, #3	; 0x3
         75d78:	da000015 	ble	75dd4 <encode_offset_case8_bin__FlT1P10Pushpopper+0x84>
         75d7c:	e3540014 	cmp	r4, #20	; 0x14
         75d80:	d284201b 	addle	r2, r4, #27	; 0x1b
         75d84:	da000010 	ble	75dcc <encode_offset_case8_bin__FlT1P10Pushpopper+0x7c>
         75d88:	e3540054 	cmp	r4, #84	; 0x54
         75d8c:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         75d90:	e1a00005 	mov	r0, r5
         75d94:	e3a02003 	mov	r2, #3	; 0x3
         75d98:	e3a01002 	mov	r1, #2	; 0x2
         75d9c:	eb6cb931 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         75da0:	e3a01001 	mov	r1, #1	; 0x1
         75da4:	e2442015 	sub	r2, r4, #21	; 0x15
         75da8:	e59f002c 	ldr	r0, [pc, #2c]	; 75ddc <encode_offset_case8_bin__FlT1P10Pushpopper+0x8c>
         75dac:	e0803101 	add	r3, r0, r1, lsl #2
         75db0:	e5133004 	ldr	r3, [r3, -#4]
         75db4:	e1530006 	cmp	r3, r6
         75db8:	21a00005 	movcs	r0, r5
         75dbc:	2a000004 	bcs	75dd4 <encode_offset_case8_bin__FlT1P10Pushpopper+0x84>
         75dc0:	e2811001 	add	r1, r1, #1	; 0x1
         75dc4:	e3510005 	cmp	r1, #5	; 0x5
         75dc8:	dafffff7 	ble	75dac <encode_offset_case8_bin__FlT1P10Pushpopper+0x5c>
         75dcc:	e1a00005 	mov	r0, r5
         75dd0:	e3a01006 	mov	r1, #6	; 0x6
         75dd4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         75dd8:	ea6cb922 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         75ddc:	00371a7c 	eoreqs	r1, r7, ip, ror sl
    */
}

/**
 * Symbol: encode_offset_case7_bin__FlT1P10Pushpopper
 * Address: 00075de0
 */
void globals::encode_offset_case7_bin() {
    /*
         75de0:	e1a0c00d 	mov	ip, sp
         75de4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         75de8:	e24cb004 	sub	fp, ip, #4	; 0x4
         75dec:	e1a04000 	mov	r4, r0
         75df0:	e1a06001 	mov	r6, r1
         75df4:	e1a05002 	mov	r5, r2
         75df8:	e3500008 	cmp	r0, #8	; 0x8
         75dfc:	d2442001 	suble	r2, r4, #1	; 0x1
         75e00:	d1a00005 	movle	r0, r5
         75e04:	d3a01004 	movle	r1, #4	; 0x4
         75e08:	da000015 	ble	75e64 <encode_offset_case7_bin__FlT1P10Pushpopper+0x84>
         75e0c:	e3540028 	cmp	r4, #40	; 0x28
         75e10:	d2842037 	addle	r2, r4, #55	; 0x37
         75e14:	da000010 	ble	75e5c <encode_offset_case7_bin__FlT1P10Pushpopper+0x7c>
         75e18:	e35400a8 	cmp	r4, #168	; 0xa8
         75e1c:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         75e20:	e1a00005 	mov	r0, r5
         75e24:	e3a02003 	mov	r2, #3	; 0x3
         75e28:	e3a01002 	mov	r1, #2	; 0x2
         75e2c:	eb6cb90d 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         75e30:	e3a01001 	mov	r1, #1	; 0x1
         75e34:	e2442029 	sub	r2, r4, #41	; 0x29
         75e38:	e59f002c 	ldr	r0, [pc, #2c]	; 75e6c <encode_offset_case7_bin__FlT1P10Pushpopper+0x8c>
         75e3c:	e0803101 	add	r3, r0, r1, lsl #2
         75e40:	e5133004 	ldr	r3, [r3, -#4]
         75e44:	e1530006 	cmp	r3, r6
         75e48:	21a00005 	movcs	r0, r5
         75e4c:	2a000004 	bcs	75e64 <encode_offset_case7_bin__FlT1P10Pushpopper+0x84>
         75e50:	e2811001 	add	r1, r1, #1	; 0x1
         75e54:	e3510006 	cmp	r1, #6	; 0x6
         75e58:	dafffff7 	ble	75e3c <encode_offset_case7_bin__FlT1P10Pushpopper+0x5c>
         75e5c:	e1a00005 	mov	r0, r5
         75e60:	e3a01007 	mov	r1, #7	; 0x7
         75e64:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         75e68:	ea6cb8fe 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         75e6c:	00371a90 	mlaeqs	r7, r0, sl, r1
    */
}

/**
 * Symbol: encode_offset_case6_bin__FlT1P10Pushpopper
 * Address: 00075e70
 */
void globals::encode_offset_case6_bin() {
    /*
         75e70:	e1a0c00d 	mov	ip, sp
         75e74:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         75e78:	e24cb004 	sub	fp, ip, #4	; 0x4
         75e7c:	e1a04000 	mov	r4, r0
         75e80:	e1a06001 	mov	r6, r1
         75e84:	e1a05002 	mov	r5, r2
         75e88:	e3500010 	cmp	r0, #16	; 0x10
         75e8c:	d2442001 	suble	r2, r4, #1	; 0x1
         75e90:	d1a00005 	movle	r0, r5
         75e94:	d3a01005 	movle	r1, #5	; 0x5
         75e98:	da000015 	ble	75ef4 <encode_offset_case6_bin__FlT1P10Pushpopper+0x84>
         75e9c:	e3540050 	cmp	r4, #80	; 0x50
         75ea0:	d284206f 	addle	r2, r4, #111	; 0x6f
         75ea4:	da000010 	ble	75eec <encode_offset_case6_bin__FlT1P10Pushpopper+0x7c>
         75ea8:	e3540e15 	cmp	r4, #336	; 0x150
         75eac:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         75eb0:	e1a00005 	mov	r0, r5
         75eb4:	e3a02003 	mov	r2, #3	; 0x3
         75eb8:	e3a01002 	mov	r1, #2	; 0x2
         75ebc:	eb6cb8e9 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         75ec0:	e3a01001 	mov	r1, #1	; 0x1
         75ec4:	e2442051 	sub	r2, r4, #81	; 0x51
         75ec8:	e59f002c 	ldr	r0, [pc, #2c]	; 75efc <encode_offset_case6_bin__FlT1P10Pushpopper+0x8c>
         75ecc:	e0803101 	add	r3, r0, r1, lsl #2
         75ed0:	e5133004 	ldr	r3, [r3, -#4]
         75ed4:	e1530006 	cmp	r3, r6
         75ed8:	21a00005 	movcs	r0, r5
         75edc:	2a000004 	bcs	75ef4 <encode_offset_case6_bin__FlT1P10Pushpopper+0x84>
         75ee0:	e2811001 	add	r1, r1, #1	; 0x1
         75ee4:	e3510007 	cmp	r1, #7	; 0x7
         75ee8:	dafffff7 	ble	75ecc <encode_offset_case6_bin__FlT1P10Pushpopper+0x5c>
         75eec:	e1a00005 	mov	r0, r5
         75ef0:	e3a01008 	mov	r1, #8	; 0x8
         75ef4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         75ef8:	ea6cb8da 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         75efc:	00371aa8 	eoreqs	r1, r7, r8, lsr #21
    */
}

/**
 * Symbol: encode_offset_case5_bin__FlT1P10Pushpopper
 * Address: 00075f00
 */
void globals::encode_offset_case5_bin() {
    /*
         75f00:	e1a0c00d 	mov	ip, sp
         75f04:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         75f08:	e24cb004 	sub	fp, ip, #4	; 0x4
         75f0c:	e1a04000 	mov	r4, r0
         75f10:	e1a06001 	mov	r6, r1
         75f14:	e1a05002 	mov	r5, r2
         75f18:	e3500020 	cmp	r0, #32	; 0x20
         75f1c:	d2442001 	suble	r2, r4, #1	; 0x1
         75f20:	d1a00005 	movle	r0, r5
         75f24:	d3a01006 	movle	r1, #6	; 0x6
         75f28:	da000015 	ble	75f84 <encode_offset_case5_bin__FlT1P10Pushpopper+0x84>
         75f2c:	e35400a0 	cmp	r4, #160	; 0xa0
         75f30:	d28420df 	addle	r2, r4, #223	; 0xdf
         75f34:	da000010 	ble	75f7c <encode_offset_case5_bin__FlT1P10Pushpopper+0x7c>
         75f38:	e3540e2a 	cmp	r4, #672	; 0x2a0
         75f3c:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         75f40:	e1a00005 	mov	r0, r5
         75f44:	e3a02003 	mov	r2, #3	; 0x3
         75f48:	e3a01002 	mov	r1, #2	; 0x2
         75f4c:	eb6cb8c5 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         75f50:	e3a01001 	mov	r1, #1	; 0x1
         75f54:	e24420a1 	sub	r2, r4, #161	; 0xa1
         75f58:	e59f002c 	ldr	r0, [pc, #2c]	; 75f8c <encode_offset_case5_bin__FlT1P10Pushpopper+0x8c>
         75f5c:	e0803101 	add	r3, r0, r1, lsl #2
         75f60:	e5133004 	ldr	r3, [r3, -#4]
         75f64:	e1530006 	cmp	r3, r6
         75f68:	21a00005 	movcs	r0, r5
         75f6c:	2a000004 	bcs	75f84 <encode_offset_case5_bin__FlT1P10Pushpopper+0x84>
         75f70:	e2811001 	add	r1, r1, #1	; 0x1
         75f74:	e3510008 	cmp	r1, #8	; 0x8
         75f78:	dafffff7 	ble	75f5c <encode_offset_case5_bin__FlT1P10Pushpopper+0x5c>
         75f7c:	e1a00005 	mov	r0, r5
         75f80:	e3a01009 	mov	r1, #9	; 0x9
         75f84:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         75f88:	ea6cb8b6 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         75f8c:	00371ac4 	eoreqs	r1, r7, r4, asr #21
    */
}

/**
 * Symbol: encode_offset_case4_bin__FlT1P10Pushpopper
 * Address: 00075f90
 */
void globals::encode_offset_case4_bin() {
    /*
         75f90:	e1a0c00d 	mov	ip, sp
         75f94:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         75f98:	e24cb004 	sub	fp, ip, #4	; 0x4
         75f9c:	e1a04000 	mov	r4, r0
         75fa0:	e1a06001 	mov	r6, r1
         75fa4:	e1a05002 	mov	r5, r2
         75fa8:	e3500040 	cmp	r0, #64	; 0x40
         75fac:	d2442001 	suble	r2, r4, #1	; 0x1
         75fb0:	d1a00005 	movle	r0, r5
         75fb4:	d3a01007 	movle	r1, #7	; 0x7
         75fb8:	da000017 	ble	7601c <encode_offset_case4_bin__FlT1P10Pushpopper+0x8c>
         75fbc:	e3540d05 	cmp	r4, #320	; 0x140
         75fc0:	d28420bf 	addle	r2, r4, #191	; 0xbf
         75fc4:	d2822c01 	addle	r2, r2, #256	; 0x100
         75fc8:	da000011 	ble	76014 <encode_offset_case4_bin__FlT1P10Pushpopper+0x84>
         75fcc:	e3540d15 	cmp	r4, #1344	; 0x540
         75fd0:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         75fd4:	e1a00005 	mov	r0, r5
         75fd8:	e3a02003 	mov	r2, #3	; 0x3
         75fdc:	e3a01002 	mov	r1, #2	; 0x2
         75fe0:	eb6cb8a0 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         75fe4:	e3a01001 	mov	r1, #1	; 0x1
         75fe8:	e28420bf 	add	r2, r4, #191	; 0xbf
         75fec:	e2422c02 	sub	r2, r2, #512	; 0x200
         75ff0:	e59f002c 	ldr	r0, [pc, #2c]	; 76024 <encode_offset_case4_bin__FlT1P10Pushpopper+0x94>
         75ff4:	e0803101 	add	r3, r0, r1, lsl #2
         75ff8:	e5133004 	ldr	r3, [r3, -#4]
         75ffc:	e1530006 	cmp	r3, r6
         76000:	21a00005 	movcs	r0, r5
         76004:	2a000004 	bcs	7601c <encode_offset_case4_bin__FlT1P10Pushpopper+0x8c>
         76008:	e2811001 	add	r1, r1, #1	; 0x1
         7600c:	e3510009 	cmp	r1, #9	; 0x9
         76010:	dafffff7 	ble	75ff4 <encode_offset_case4_bin__FlT1P10Pushpopper+0x64>
         76014:	e1a00005 	mov	r0, r5
         76018:	e3a0100a 	mov	r1, #10	; 0xa
         7601c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         76020:	ea6cb890 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         76024:	00371ae4 	eoreqs	r1, r7, r4, ror #21
    */
}

/**
 * Symbol: encode_offset_case3_bin__FlT1P10Pushpopper
 * Address: 00076028
 */
void globals::encode_offset_case3_bin() {
    /*
         76028:	e1a0c00d 	mov	ip, sp
         7602c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         76030:	e24cb004 	sub	fp, ip, #4	; 0x4
         76034:	e1a04000 	mov	r4, r0
         76038:	e1a06001 	mov	r6, r1
         7603c:	e1a05002 	mov	r5, r2
         76040:	e3500080 	cmp	r0, #128	; 0x80
         76044:	d2442001 	suble	r2, r4, #1	; 0x1
         76048:	d1a00005 	movle	r0, r5
         7604c:	d3a01008 	movle	r1, #8	; 0x8
         76050:	da000017 	ble	760b4 <encode_offset_case3_bin__FlT1P10Pushpopper+0x8c>
         76054:	e3540d0a 	cmp	r4, #640	; 0x280
         76058:	d2442081 	suble	r2, r4, #129	; 0x81
         7605c:	d2822b01 	addle	r2, r2, #1024	; 0x400
         76060:	da000011 	ble	760ac <encode_offset_case3_bin__FlT1P10Pushpopper+0x84>
         76064:	e3540d2a 	cmp	r4, #2688	; 0xa80
         76068:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         7606c:	e1a00005 	mov	r0, r5
         76070:	e3a02003 	mov	r2, #3	; 0x3
         76074:	e3a01002 	mov	r1, #2	; 0x2
         76078:	eb6cb87a 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         7607c:	e3a01001 	mov	r1, #1	; 0x1
         76080:	e284207f 	add	r2, r4, #127	; 0x7f
         76084:	e2422c03 	sub	r2, r2, #768	; 0x300
         76088:	e59f002c 	ldr	r0, [pc, #2c]	; 760bc <encode_offset_case3_bin__FlT1P10Pushpopper+0x94>
         7608c:	e0803101 	add	r3, r0, r1, lsl #2
         76090:	e5133004 	ldr	r3, [r3, -#4]
         76094:	e1530006 	cmp	r3, r6
         76098:	21a00005 	movcs	r0, r5
         7609c:	2a000004 	bcs	760b4 <encode_offset_case3_bin__FlT1P10Pushpopper+0x8c>
         760a0:	e2811001 	add	r1, r1, #1	; 0x1
         760a4:	e351000a 	cmp	r1, #10	; 0xa
         760a8:	dafffff7 	ble	7608c <encode_offset_case3_bin__FlT1P10Pushpopper+0x64>
         760ac:	e1a00005 	mov	r0, r5
         760b0:	e3a0100b 	mov	r1, #11	; 0xb
         760b4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         760b8:	ea6cb86a 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         760bc:	00371b08 	eoreqs	r1, r7, r8, lsl #22
    */
}

/**
 * Symbol: encode_offset_case2_bin__FlT1P10Pushpopper
 * Address: 000760c0
 */
void globals::encode_offset_case2_bin() {
    /*
         760c0:	e1a0c00d 	mov	ip, sp
         760c4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         760c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         760cc:	e1a04000 	mov	r4, r0
         760d0:	e1a06001 	mov	r6, r1
         760d4:	e1a05002 	mov	r5, r2
         760d8:	e3500c01 	cmp	r0, #256	; 0x100
         760dc:	d2442001 	suble	r2, r4, #1	; 0x1
         760e0:	d1a00005 	movle	r0, r5
         760e4:	d3a01009 	movle	r1, #9	; 0x9
         760e8:	da000017 	ble	7614c <encode_offset_case2_bin__FlT1P10Pushpopper+0x8c>
         760ec:	e3540c05 	cmp	r4, #1280	; 0x500
         760f0:	d28420ff 	addle	r2, r4, #255	; 0xff
         760f4:	d2822c06 	addle	r2, r2, #1536	; 0x600
         760f8:	da000011 	ble	76144 <encode_offset_case2_bin__FlT1P10Pushpopper+0x84>
         760fc:	e3540c15 	cmp	r4, #5376	; 0x1500
         76100:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         76104:	e1a00005 	mov	r0, r5
         76108:	e3a02003 	mov	r2, #3	; 0x3
         7610c:	e3a01002 	mov	r1, #2	; 0x2
         76110:	eb6cb854 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         76114:	e3a01001 	mov	r1, #1	; 0x1
         76118:	e28420ff 	add	r2, r4, #255	; 0xff
         7611c:	e2422c06 	sub	r2, r2, #1536	; 0x600
         76120:	e59f002c 	ldr	r0, [pc, #2c]	; 76154 <encode_offset_case2_bin__FlT1P10Pushpopper+0x94>
         76124:	e0803101 	add	r3, r0, r1, lsl #2
         76128:	e5133004 	ldr	r3, [r3, -#4]
         7612c:	e1530006 	cmp	r3, r6
         76130:	21a00005 	movcs	r0, r5
         76134:	2a000004 	bcs	7614c <encode_offset_case2_bin__FlT1P10Pushpopper+0x8c>
         76138:	e2811001 	add	r1, r1, #1	; 0x1
         7613c:	e351000b 	cmp	r1, #11	; 0xb
         76140:	dafffff7 	ble	76124 <encode_offset_case2_bin__FlT1P10Pushpopper+0x64>
         76144:	e1a00005 	mov	r0, r5
         76148:	e3a0100c 	mov	r1, #12	; 0xc
         7614c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         76150:	ea6cb844 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         76154:	00371b30 	eoreqs	r1, r7, r0, lsr fp
    */
}

/**
 * Symbol: encode_offset_case1_bin__FlT1P10Pushpopper
 * Address: 00076158
 */
void globals::encode_offset_case1_bin() {
    /*
         76158:	e1a0c00d 	mov	ip, sp
         7615c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         76160:	e24cb004 	sub	fp, ip, #4	; 0x4
         76164:	e1a04000 	mov	r4, r0
         76168:	e1a06001 	mov	r6, r1
         7616c:	e1a05002 	mov	r5, r2
         76170:	e3500c02 	cmp	r0, #512	; 0x200
         76174:	d2442001 	suble	r2, r4, #1	; 0x1
         76178:	d1a00005 	movle	r0, r5
         7617c:	d3a0100a 	movle	r1, #10	; 0xa
         76180:	da000017 	ble	761e4 <encode_offset_case1_bin__FlT1P10Pushpopper+0x8c>
         76184:	e3540c0a 	cmp	r4, #2560	; 0xa00
         76188:	d28420ff 	addle	r2, r4, #255	; 0xff
         7618c:	d2822c0d 	addle	r2, r2, #3328	; 0xd00
         76190:	da000011 	ble	761dc <encode_offset_case1_bin__FlT1P10Pushpopper+0x84>
         76194:	e3540c2a 	cmp	r4, #10752	; 0x2a00
         76198:	c91ba870 	ldmgtdb	fp, {r4, r5, r6, fp, sp, pc}
         7619c:	e1a00005 	mov	r0, r5
         761a0:	e3a02003 	mov	r2, #3	; 0x3
         761a4:	e3a01002 	mov	r1, #2	; 0x2
         761a8:	eb6cb82e 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         761ac:	e3a01001 	mov	r1, #1	; 0x1
         761b0:	e28420ff 	add	r2, r4, #255	; 0xff
         761b4:	e2422c0b 	sub	r2, r2, #2816	; 0xb00
         761b8:	e59f002c 	ldr	r0, [pc, #2c]	; 761ec <encode_offset_case1_bin__FlT1P10Pushpopper+0x94>
         761bc:	e0803101 	add	r3, r0, r1, lsl #2
         761c0:	e5133004 	ldr	r3, [r3, -#4]
         761c4:	e1530006 	cmp	r3, r6
         761c8:	21a00005 	movcs	r0, r5
         761cc:	2a000004 	bcs	761e4 <encode_offset_case1_bin__FlT1P10Pushpopper+0x8c>
         761d0:	e2811001 	add	r1, r1, #1	; 0x1
         761d4:	e351000c 	cmp	r1, #12	; 0xc
         761d8:	dafffff7 	ble	761bc <encode_offset_case1_bin__FlT1P10Pushpopper+0x64>
         761dc:	e1a00005 	mov	r0, r5
         761e0:	e3a0100d 	mov	r1, #13	; 0xd
         761e4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         761e8:	ea6cb81e 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         761ec:	00371b5c 	eoreqs	r1, r7, ip, asr fp
    */
}

/**
 * Symbol: ExtractRange__FRC6RefVarP5TViewlT3
 * Address: 00077190
 */
void globals::ExtractRange() {
    /*
         77190:	e1a0c00d 	mov	ip, sp
         77194:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         77198:	e24cb004 	sub	fp, ip, #4	; 0x4
         7719c:	e1a04000 	mov	r4, r0
         771a0:	e1a06001 	mov	r6, r1
         771a4:	e1a09003 	mov	r9, r3
         771a8:	e3a00002 	mov	r0, #2	; 0x2
         771ac:	eb6d2be6 	bl	1bc214c <$AllocateRefHandle(long)>
         771b0:	e1a05000 	mov	r5, r0
         771b4:	e5940000 	ldr	r0, [r4]
         771b8:	e5900000 	ldr	r0, [r0]
         771bc:	e3300002 	teq	r0, #2	; 0x2
         771c0:	0a000063 	beq	77354 <ExtractRange__FRC6RefVarP5TViewlT3+0x1c4>
         771c4:	e24dd008 	sub	sp, sp, #8	; 0x8
         771c8:	e5b61004 	ldr	r1, [r6, #4]!
         771cc:	e58d1004 	str	r1, [sp, #4]
         771d0:	eb68fe5a 	bl	1ab6b40 <$NewCorrectInfo(void)>
         771d4:	eb6d2bdc 	bl	1bc214c <$AllocateRefHandle(long)>
         771d8:	e58d0000 	str	r0, [sp]
         771dc:	e59f0184 	ldr	r0, [pc, #184]	; 77368 <ExtractRange__FRC6RefVarP5TViewlT3+0x1d8>
         771e0:	e5900000 	ldr	r0, [r0]
         771e4:	e5901000 	ldr	r1, [r0]
         771e8:	e5940000 	ldr	r0, [r4]
         771ec:	e5900000 	ldr	r0, [r0]
         771f0:	eb6d341a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         771f4:	eb6d2bd4 	bl	1bc214c <$AllocateRefHandle(long)>
         771f8:	e1a04000 	mov	r4, r0
         771fc:	e5900000 	ldr	r0, [r0]
         77200:	eb6d3829 	bl	1bc52ac <$Length(long)>
         77204:	e1a07000 	mov	r7, r0
         77208:	e3a06000 	mov	r6, #0	; 0x0
         7720c:	e3500000 	cmp	r0, #0	; 0x0
         77210:	da00003e 	ble	77310 <ExtractRange__FRC6RefVarP5TViewlT3+0x180>
         77214:	e24dd004 	sub	sp, sp, #4	; 0x4
         77218:	e1a01006 	mov	r1, r6
         7721c:	e5940000 	ldr	r0, [r4]
         77220:	eb6d340b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         77224:	eb6d2bc8 	bl	1bc214c <$AllocateRefHandle(long)>
         77228:	e58d0000 	str	r0, [sp]
         7722c:	e59f0138 	ldr	r0, [pc, #138]	; 7736c <ExtractRange__FRC6RefVarP5TViewlT3+0x1dc>
         77230:	e5900000 	ldr	r0, [r0]
         77234:	e5901000 	ldr	r1, [r0]
         77238:	e59d0000 	ldr	r0, [sp]
         7723c:	e5900000 	ldr	r0, [r0]
         77240:	eb6d3406 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         77244:	e3100003 	tst	r0, #3	; 0x3
         77248:	01a00140 	moveq	r0, r0, asr #2
         7724c:	0a000000 	beq	77254 <ExtractRange__FRC6RefVarP5TViewlT3+0xc4>
         77250:	eb6d2bb1 	bl	1bc211c <$_RINTError(long)>
         77254:	e1a0a000 	mov	sl, r0
         77258:	e59f0110 	ldr	r0, [pc, #110]	; 77370 <ExtractRange__FRC6RefVarP5TViewlT3+0x1e0>
         7725c:	e5900000 	ldr	r0, [r0]
         77260:	e5901000 	ldr	r1, [r0]
         77264:	e59d0000 	ldr	r0, [sp]
         77268:	e5900000 	ldr	r0, [r0]
         7726c:	eb6d33fb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         77270:	e3100003 	tst	r0, #3	; 0x3
         77274:	01a00140 	moveq	r0, r0, asr #2
         77278:	0a000000 	beq	77280 <ExtractRange__FRC6RefVarP5TViewlT3+0xf0>
         7727c:	eb6d2ba6 	bl	1bc211c <$_RINTError(long)>
         77280:	e1a08000 	mov	r8, r0
         77284:	e59f00e8 	ldr	r0, [pc, #e8]	; 77374 <ExtractRange__FRC6RefVarP5TViewlT3+0x1e4>
         77288:	e5900000 	ldr	r0, [r0]
         7728c:	e5901000 	ldr	r1, [r0]
         77290:	e59d0000 	ldr	r0, [sp]
         77294:	e5900000 	ldr	r0, [r0]
         77298:	eb6d33f0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         7729c:	e3100003 	tst	r0, #3	; 0x3
         772a0:	01a00140 	moveq	r0, r0, asr #2
         772a4:	0a000000 	beq	772ac <ExtractRange__FRC6RefVarP5TViewlT3+0x11c>
         772a8:	eb6d2b9b 	bl	1bc211c <$_RINTError(long)>
         772ac:	e59d1008 	ldr	r1, [sp, #8]
         772b0:	e1300001 	teq	r0, r1
         772b4:	1a00000f 	bne	772f8 <ExtractRange__FRC6RefVarP5TViewlT3+0x168>
         772b8:	e15a0009 	cmp	sl, r9
         772bc:	2a00000d 	bcs	772f8 <ExtractRange__FRC6RefVarP5TViewlT3+0x168>
         772c0:	e51b2030 	ldr	r2, [fp, -#48]
         772c4:	e1580002 	cmp	r8, r2
         772c8:	ba00000a 	blt	772f8 <ExtractRange__FRC6RefVarP5TViewlT3+0x168>
         772cc:	e24dd004 	sub	sp, sp, #4	; 0x4
         772d0:	e28d0004 	add	r0, sp, #4	; 0x4
         772d4:	eb6d2ba4 	bl	1bc216c <$Clone(RefVar const &)>
         772d8:	eb6d2b9b 	bl	1bc214c <$AllocateRefHandle(long)>
         772dc:	e58d0000 	str	r0, [sp]
         772e0:	e1a0100d 	mov	r1, sp
         772e4:	e28d0008 	add	r0, sp, #8	; 0x8
         772e8:	eb68c45c 	bl	1aa8460 <$AddWordInfo__FRC6RefVarT1>
         772ec:	e59d0000 	ldr	r0, [sp]
         772f0:	eb6d2fb1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         772f4:	e28dd004 	add	sp, sp, #4	; 0x4
         772f8:	e59d0000 	ldr	r0, [sp]
         772fc:	eb6d2fae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77300:	e28dd004 	add	sp, sp, #4	; 0x4
         77304:	e2866001 	add	r6, r6, #1	; 0x1
         77308:	e1560007 	cmp	r6, r7
         7730c:	baffffc0 	blt	77214 <ExtractRange__FRC6RefVarP5TViewlT3+0x84>
         77310:	e59f0050 	ldr	r0, [pc, #50]	; 77368 <ExtractRange__FRC6RefVarP5TViewlT3+0x1d8>
         77314:	e5900000 	ldr	r0, [r0]
         77318:	e5901000 	ldr	r1, [r0]
         7731c:	e59d0000 	ldr	r0, [sp]
         77320:	e5900000 	ldr	r0, [r0]
         77324:	eb6d33cd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         77328:	e5840000 	str	r0, [r4]
         7732c:	eb6d37de 	bl	1bc52ac <$Length(long)>
         77330:	e3500000 	cmp	r0, #0	; 0x0
         77334:	c59d0000 	ldrgt	r0, [sp]
         77338:	c5900000 	ldrgt	r0, [r0]
         7733c:	c5850000 	strgt	r0, [r5]
         77340:	e1a00004 	mov	r0, r4
         77344:	eb6d2f9c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77348:	e59d0000 	ldr	r0, [sp]
         7734c:	eb6d2f9a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77350:	e28dd008 	add	sp, sp, #8	; 0x8
         77354:	e5954000 	ldr	r4, [r5]
         77358:	e1a00005 	mov	r0, r5
         7735c:	eb6d2f96 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         77360:	e1a00004 	mov	r0, r4
         77364:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         77368:	006831f8 	streqd	r3, [r8], -#24
         7736c:	00684800 	rsbeq	r4, r8, r0, lsl #16
         77370:	00684850 	rsbeq	r4, r8, r0, asr r8
         77374:	00683160 	rsbeq	r3, r8, r0, ror #2
    */
}

/**
 * Symbol: EncodeUnitID(TUnitPublic *)
 * Address: 00077bb0
 */
EncodeUnitID(TUnitPublic *) {
    /*
         77bb0:	e1a0c00d 	mov	ip, sp
         77bb4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         77bb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         77bbc:	e24dd008 	sub	sp, sp, #8	; 0x8
         77bc0:	eb687be1 	bl	1a96b4c <TUnitPublic::$GetType(void)>
         77bc4:	e58d0000 	str	r0, [sp]
         77bc8:	e3a00000 	mov	r0, #0	; 0x0
         77bcc:	e5cd0005 	strb	r0, [sp, #5]
         77bd0:	e5cd0004 	strb	r0, [sp, #4]
         77bd4:	e1a0000d 	mov	r0, sp
         77bd8:	e3a01002 	mov	r1, #2	; 0x2
         77bdc:	eb689079 	bl	1a9bdc8 <$MakeString(unsigned short const *, long)>
         77be0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: EncodeAttribute(unsigned short *)
 * Address: 0008ec00
 */
EncodeAttribute(unsigned short *) {
    /*
         8ec00:	e1a0c00d 	mov	ip, sp
         8ec04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         8ec08:	e24cb004 	sub	fp, ip, #4	; 0x4
         8ec0c:	e1a04000 	mov	r4, r0
         8ec10:	e3a05000 	mov	r5, #0	; 0x0
         8ec14:	e5900000 	ldr	r0, [r0]
         8ec18:	e1a00820 	mov	r0, r0, lsr #16
         8ec1c:	eb6c726d 	bl	1bab5d8 <$UToLower(unsigned short)>
         8ec20:	e5941000 	ldr	r1, [r4]
         8ec24:	e1300821 	teq	r0, r1, lsr #16
         8ec28:	13a05080 	movne	r5, #128	; 0x80
         8ec2c:	e1a00005 	mov	r0, r5
         8ec30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: EncodeRecognitionWord(unsigned short *)
 * Address: 0008ec9c
 */
EncodeRecognitionWord(unsigned short *) {
    /*
         8ec9c:	e1a0c00d 	mov	ip, sp
         8eca0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         8eca4:	e24cb004 	sub	fp, ip, #4	; 0x4
         8eca8:	e1a04000 	mov	r4, r0
         8ecac:	eb68b027 	bl	1abad50 <$StripRecognitionWord(unsigned short *)>
         8ecb0:	e1a00004 	mov	r0, r4
         8ecb4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         8ecb8:	ea687e98 	b	1aae720 <$EncodeAttribute(unsigned short *)>
    */
}

/**
 * Symbol: EncodeRecognitionWordDiacritsOK(unsigned short *)
 * Address: 0008ecbc
 */
EncodeRecognitionWordDiacritsOK(unsigned short *) {
    /*
         8ecbc:	e1a0c00d 	mov	ip, sp
         8ecc0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         8ecc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         8ecc8:	e1a04000 	mov	r4, r0
         8eccc:	eb6944e1 	bl	1ae0058 <$StripRecognitionWordDiacritsOK(unsigned short *)>
         8ecd0:	e1a00004 	mov	r0, r4
         8ecd4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         8ecd8:	ea687e90 	b	1aae720 <$EncodeAttribute(unsigned short *)>
    */
}

/**
 * Symbol: EngineInitInk(void)
 * Address: 000ada2c
 */
EngineInitInk(void) {
    /*
         ada2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EngineInitSFNT(void)
 * Address: 000adf28
 */
EngineInitSFNT(void) {
    /*
         adf28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ExitHandler
 * Address: 000b0058
 */
void globals::ExitHandler() {
    /*
         b0058:	e1a0c00d 	mov	ip, sp
         b005c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b0060:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0064:	e1a04000 	mov	r4, r0
         b0068:	eb6cc41d 	bl	1be10e4 <$GetExceptionHandler(void)>
         b006c:	ea000000 	b	b0074 <ExitHandler+0x1c>
         b0070:	e5900004 	ldr	r0, [r0, #4]
         b0074:	e3300000 	teq	r0, #0	; 0x0
         b0078:	0a000002 	beq	b0088 <ExitHandler+0x30>
         b007c:	e5901000 	ldr	r1, [r0]
         b0080:	e3310001 	teq	r1, #1	; 0x1
         b0084:	0afffff9 	beq	b0070 <ExitHandler+0x18>
         b0088:	e1340000 	teq	r4, r0
         b008c:	01a00004 	moveq	r0, r4
         b0090:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         b0094:	0a6cc832 	beq	1be2164 <$RemoveExceptionHandler>
         b0098:	e5940060 	ldr	r0, [r4, #96]
         b009c:	eb669267 	bl	1a54a40 <$ForgetDeveloperNotified(char *)>
         b00a0:	e5940064 	ldr	r0, [r4, #100]
         b00a4:	e3300000 	teq	r0, #0	; 0x0
         b00a8:	15b41068 	ldrne	r1, [r4, #104]!
         b00ac:	13310000 	teqne	r1, #0	; 0x0
         b00b0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b00b4:	1281f000 	addne	pc, r1, #0	; 0x0
         b00b8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: EzSerialOptions__FP12TOptionArrayPPclT3
 * Address: 000b0b28
 */
void globals::EzSerialOptions() {
    /*
         b0b28:	e1a0c00d 	mov	ip, sp
         b0b2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b0b30:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0b34:	e1a04000 	mov	r4, r0
         b0b38:	e1a06002 	mov	r6, r2
         b0b3c:	e1a05003 	mov	r5, r3
         b0b40:	e24dd00c 	sub	sp, sp, #12	; 0xc
         b0b44:	e1a0000d 	mov	r0, sp
         b0b48:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b0b4c:	eb6c17f5 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b0b50:	e1a0000d 	mov	r0, sp
         b0b54:	e59f10a0 	ldr	r1, [pc, #a0]	; b0bfc <EzSerialOptions__FP12TOptionArrayPPclT3+0xd4>
         b0b58:	eb6c2875 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
         b0b5c:	e1a0200d 	mov	r2, sp
         b0b60:	e5941000 	ldr	r1, [r4]
         b0b64:	e1a00004 	mov	r0, r4
         b0b68:	eb6c244d 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0b6c:	e3300000 	teq	r0, #0	; 0x0
         b0b70:	e28dd00c 	add	sp, sp, #12	; 0xc
         b0b74:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b0b78:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         b0b7c:	e1a0000d 	mov	r0, sp
         b0b80:	eb6c2c9a 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
         b0b84:	e3a00c96 	mov	r0, #38400	; 0x9600
         b0b88:	e58d0018 	str	r0, [sp, #24]
         b0b8c:	e1a0200d 	mov	r2, sp
         b0b90:	e5941000 	ldr	r1, [r4]
         b0b94:	e1a00004 	mov	r0, r4
         b0b98:	eb6c2441 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0b9c:	e3300000 	teq	r0, #0	; 0x0
         b0ba0:	e28dd01c 	add	sp, sp, #28	; 0x1c
         b0ba4:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b0ba8:	e24dd014 	sub	sp, sp, #20	; 0x14
         b0bac:	e1a0000d 	mov	r0, sp
         b0bb0:	eb6c30a1 	bl	1bbce3c <TCMOInputFlowControlParms::$__ct(void)>
         b0bb4:	e3a07001 	mov	r7, #1	; 0x1
         b0bb8:	e5cd700f 	strb	r7, [sp, #15]
         b0bbc:	e1a0200d 	mov	r2, sp
         b0bc0:	e5941000 	ldr	r1, [r4]
         b0bc4:	e1a00004 	mov	r0, r4
         b0bc8:	eb6c2435 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0bcc:	e3300000 	teq	r0, #0	; 0x0
         b0bd0:	1a000008 	bne	b0bf8 <EzSerialOptions__FP12TOptionArrayPPclT3+0xd0>
         b0bd4:	e1a0000d 	mov	r0, sp
         b0bd8:	eb6c3098 	bl	1bbce40 <TCMOOutputFlowControlParms::$__ct(void)>
         b0bdc:	e5cd700f 	strb	r7, [sp, #15]
         b0be0:	e1a0200d 	mov	r2, sp
         b0be4:	e5941000 	ldr	r1, [r4]
         b0be8:	e1a00004 	mov	r0, r4
         b0bec:	eb6c242c 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0bf0:	e3300000 	teq	r0, #0	; 0x0
         b0bf4:	0a000001 	beq	b0c00 <EzSerialOptions__FP12TOptionArrayPPclT3+0xd8>
         b0bf8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b0bfc:	61736572 	cmnvs	r3, r2, ror r5
         b0c00:	e28dd014 	add	sp, sp, #20	; 0x14
         b0c04:	e3560000 	cmp	r6, #0	; 0x0
         b0c08:	c3550000 	cmpgt	r5, #0	; 0x0
         b0c0c:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b0c10:	e24dd018 	sub	sp, sp, #24	; 0x18
         b0c14:	e1a0000d 	mov	r0, sp
         b0c18:	eb6c2c72 	bl	1bbbde8 <TCMOSerialBuffers::$__ct(void)>
         b0c1c:	e58d5010 	str	r5, [sp, #16]
         b0c20:	e58d600c 	str	r6, [sp, #12]
         b0c24:	e1a0200d 	mov	r2, sp
         b0c28:	e5941000 	ldr	r1, [r4]
         b0c2c:	e1a00004 	mov	r0, r4
         b0c30:	eb6c241b 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0c34:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: EzNBPLookup(TCMAAppleTalkAddr *, char **)
 * Address: 000b0c38
 */
EzNBPLookup(TCMAAppleTalkAddr *, char **) {
    /*
         b0c38:	e1a0c00d 	mov	ip, sp
         b0c3c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b0c40:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0c44:	e1a04000 	mov	r4, r0
         b0c48:	e1a05001 	mov	r5, r1
         b0c4c:	e24ddf56 	sub	sp, sp, #344	; 0x158
         b0c50:	e28d0078 	add	r0, sp, #120	; 0x78
         b0c54:	eb6d0b4f 	bl	1bf3998 <TLookupNames::$__ct(void)>
         b0c58:	e1a0000d 	mov	r0, sp
         b0c5c:	eb6d0b4e 	bl	1bf399c <TNBPName::$__ct(void)>
         b0c60:	e1a00005 	mov	r0, r5
         b0c64:	eb6cc528 	bl	1be210c <$HLock>
         b0c68:	e59f3094 	ldr	r3, [pc, #94]	; b0d04 <EzNBPLookup(TCMAAppleTalkAddr *, char **)+0xcc>
         b0c6c:	e3a02019 	mov	r2, #25	; 0x19
         b0c70:	e59f1090 	ldr	r1, [pc, #90]	; b0d08 <EzNBPLookup(TCMAAppleTalkAddr *, char **)+0xd0>
         b0c74:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         b0c78:	e28d0084 	add	r0, sp, #132	; 0x84
         b0c7c:	e3a03001 	mov	r3, #1	; 0x1
         b0c80:	e3a02001 	mov	r2, #1	; 0x1
         b0c84:	e5951000 	ldr	r1, [r5]
         b0c88:	eb6d3076 	bl	1bfce68 <TLookupNames::$LookupNames(unsigned short *, unsigned long, unsigned char, unsigned long, unsigned long, unsigned long)>
         b0c8c:	e28dd00c 	add	sp, sp, #12	; 0xc
         b0c90:	e1a06000 	mov	r6, r0
         b0c94:	e1a00005 	mov	r0, r5
         b0c98:	eb6cc51d 	bl	1be2114 <$HUnlock>
         b0c9c:	e3360000 	teq	r6, #0	; 0x0
         b0ca0:	1a000004 	bne	b0cb8 <EzNBPLookup(TCMAAppleTalkAddr *, char **)+0x80>
         b0ca4:	e1a0100d 	mov	r1, sp
         b0ca8:	e28d0078 	add	r0, sp, #120	; 0x78
         b0cac:	e3a02001 	mov	r2, #1	; 0x1
         b0cb0:	eb6d0b3b 	bl	1bf39a4 <TLookupNames::$GetName(TNBPName &, unsigned long)>
         b0cb4:	e1a06000 	mov	r6, r0
         b0cb8:	e3360000 	teq	r6, #0	; 0x0
         b0cbc:	1a000009 	bne	b0ce8 <EzNBPLookup(TCMAAppleTalkAddr *, char **)+0xb0>
         b0cc0:	e59d0004 	ldr	r0, [sp, #4]
         b0cc4:	e5840010 	str	r0, [r4, #16]
         b0cc8:	e59d000a 	ldr	r0, [sp, #10]
         b0ccc:	e5c40015 	strb	r0, [r4, #21]
         b0cd0:	e1a00440 	mov	r0, r0, asr #8
         b0cd4:	e5c40014 	strb	r0, [r4, #20]
         b0cd8:	e5dd000a 	ldrb	r0, [sp, #10]
         b0cdc:	e5c40016 	strb	r0, [r4, #22]
         b0ce0:	e5dd000b 	ldrb	r0, [sp, #11]
         b0ce4:	e5c40017 	strb	r0, [r4, #23]
         b0ce8:	e28d0078 	add	r0, sp, #120	; 0x78
         b0cec:	eb671bad 	bl	1a77ba8 <TLookupNames::$Close(void)>
         b0cf0:	e28d0078 	add	r0, sp, #120	; 0x78
         b0cf4:	e3a01000 	mov	r1, #0	; 0x0
         b0cf8:	eb6d0b2a 	bl	1bf39a8 <TLookupNames::$__dt(void)>
         b0cfc:	e1a00006 	mov	r0, r6
         b0d00:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b0d04:	001c1f38 	andeqs	r1, ip, r8, lsr pc
         b0d08:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
    */
}

/**
 * Symbol: EzADSPConnectOptions__FP12TOptionArrayPPclT3
 * Address: 000b0d0c
 */
void globals::EzADSPConnectOptions() {
    /*
         b0d0c:	e1a0c00d 	mov	ip, sp
         b0d10:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b0d14:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0d18:	e1a04000 	mov	r4, r0
         b0d1c:	e1a07001 	mov	r7, r1
         b0d20:	e1a06002 	mov	r6, r2
         b0d24:	e1a05003 	mov	r5, r3
         b0d28:	e24dd018 	sub	sp, sp, #24	; 0x18
         b0d2c:	e1a0000d 	mov	r0, sp
         b0d30:	eb655161 	bl	1a052bc <TCMAAppleTalkAddr::$__ct(void)>
         b0d34:	e1a01007 	mov	r1, r7
         b0d38:	e1a0000d 	mov	r0, sp
         b0d3c:	eb6559ab 	bl	1a073f0 <$EzNBPLookup(TCMAAppleTalkAddr *, char **)>
         b0d40:	e3300000 	teq	r0, #0	; 0x0
         b0d44:	1a000005 	bne	b0d60 <EzADSPConnectOptions__FP12TOptionArrayPPclT3+0x54>
         b0d48:	e1a0200d 	mov	r2, sp
         b0d4c:	e5941000 	ldr	r1, [r4]
         b0d50:	e1a00004 	mov	r0, r4
         b0d54:	eb6c23d2 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0d58:	e3300000 	teq	r0, #0	; 0x0
         b0d5c:	0a000000 	beq	b0d64 <EzADSPConnectOptions__FP12TOptionArrayPPclT3+0x58>
         b0d60:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b0d64:	e28dd018 	add	sp, sp, #24	; 0x18
         b0d68:	e3560000 	cmp	r6, #0	; 0x0
         b0d6c:	da00000b 	ble	b0da0 <EzADSPConnectOptions__FP12TOptionArrayPPclT3+0x94>
         b0d70:	e24dd014 	sub	sp, sp, #20	; 0x14
         b0d74:	e1a02006 	mov	r2, r6
         b0d78:	e1a0000d 	mov	r0, sp
         b0d7c:	e3a01001 	mov	r1, #1	; 0x1
         b0d80:	eb67557a 	bl	1a86370 <TCMOAppleTalkBuffer::$__ct(unsigned long, long)>
         b0d84:	e1a0200d 	mov	r2, sp
         b0d88:	e5941000 	ldr	r1, [r4]
         b0d8c:	e1a00004 	mov	r0, r4
         b0d90:	eb6c23c3 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0d94:	e3300000 	teq	r0, #0	; 0x0
         b0d98:	1a00000b 	bne	b0dcc <EzADSPConnectOptions__FP12TOptionArrayPPclT3+0xc0>
         b0d9c:	e28dd014 	add	sp, sp, #20	; 0x14
         b0da0:	e3550000 	cmp	r5, #0	; 0x0
         b0da4:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b0da8:	e24dd014 	sub	sp, sp, #20	; 0x14
         b0dac:	e1a02005 	mov	r2, r5
         b0db0:	e1a0000d 	mov	r0, sp
         b0db4:	e3a01002 	mov	r1, #2	; 0x2
         b0db8:	eb67556c 	bl	1a86370 <TCMOAppleTalkBuffer::$__ct(unsigned long, long)>
         b0dbc:	e1a0200d 	mov	r2, sp
         b0dc0:	e5941000 	ldr	r1, [r4]
         b0dc4:	e1a00004 	mov	r0, r4
         b0dc8:	eb6c23b5 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0dcc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: EzMNPSerialOptions(TOptionArray *, char **)
 * Address: 000b0e38
 */
EzMNPSerialOptions(TOptionArray *, char **) {
    /*
         b0e38:	e1a0c00d 	mov	ip, sp
         b0e3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b0e40:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0e44:	e1a04000 	mov	r4, r0
         b0e48:	e24dd00c 	sub	sp, sp, #12	; 0xc
         b0e4c:	e1a0000d 	mov	r0, sp
         b0e50:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b0e54:	eb6c1733 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b0e58:	e1a0000d 	mov	r0, sp
         b0e5c:	e59f1044 	ldr	r1, [pc, #44]	; b0ea8 <EzMNPSerialOptions(TOptionArray *, char **)+0x70>
         b0e60:	eb6c27b3 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
         b0e64:	e1a0200d 	mov	r2, sp
         b0e68:	e5941000 	ldr	r1, [r4]
         b0e6c:	e1a00004 	mov	r0, r4
         b0e70:	eb6c238b 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0e74:	e3300000 	teq	r0, #0	; 0x0
         b0e78:	e28dd00c 	add	sp, sp, #12	; 0xc
         b0e7c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         b0e80:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         b0e84:	e1a0000d 	mov	r0, sp
         b0e88:	eb6c2bd8 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
         b0e8c:	e3a00c96 	mov	r0, #38400	; 0x9600
         b0e90:	e58d0018 	str	r0, [sp, #24]
         b0e94:	e1a0200d 	mov	r2, sp
         b0e98:	e5941000 	ldr	r1, [r4]
         b0e9c:	e1a00004 	mov	r0, r4
         b0ea0:	eb6c237f 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0ea4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b0ea8:	6d6e7073 	stcvsl	0, cr7, [lr, -#460]!
    */
}

/**
 * Symbol: EzMNPConnectOptions(TOptionArray *, char **)
 * Address: 000b0eac
 */
EzMNPConnectOptions(TOptionArray *, char **) {
    /*
         b0eac:	e1a0c00d 	mov	ip, sp
         b0eb0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b0eb4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0eb8:	e1a04000 	mov	r4, r0
         b0ebc:	e24dd010 	sub	sp, sp, #16	; 0x10
         b0ec0:	e1a0000d 	mov	r0, sp
         b0ec4:	eb6c2bb6 	bl	1bbbda4 <TCMOMNPDataRate::$__ct(void)>
         b0ec8:	e3a00c96 	mov	r0, #38400	; 0x9600
         b0ecc:	e58d000c 	str	r0, [sp, #12]
         b0ed0:	e1a0200d 	mov	r2, sp
         b0ed4:	e5941000 	ldr	r1, [r4]
         b0ed8:	e1a00004 	mov	r0, r4
         b0edc:	eb6c2370 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0ee0:	e3300000 	teq	r0, #0	; 0x0
         b0ee4:	1a000007 	bne	b0f08 <EzMNPConnectOptions(TOptionArray *, char **)+0x5c>
         b0ee8:	e1a0000d 	mov	r0, sp
         b0eec:	eb6c2ba5 	bl	1bbbd88 <TCMOIdleTimer::$__ct(void)>
         b0ef0:	e3a0001e 	mov	r0, #30	; 0x1e
         b0ef4:	e58d000c 	str	r0, [sp, #12]
         b0ef8:	e1a0200d 	mov	r2, sp
         b0efc:	e5941000 	ldr	r1, [r4]
         b0f00:	e1a00004 	mov	r0, r4
         b0f04:	eb6c2366 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0f08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: EzSharpIROptions(TOptionArray *, char **)
 * Address: 000b0f0c
 */
EzSharpIROptions(TOptionArray *, char **) {
    /*
         b0f0c:	e1a0c00d 	mov	ip, sp
         b0f10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b0f14:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0f18:	e1a04000 	mov	r4, r0
         b0f1c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         b0f20:	e1a0000d 	mov	r0, sp
         b0f24:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b0f28:	eb6c16fe 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b0f2c:	e1a0000d 	mov	r0, sp
         b0f30:	e59f1014 	ldr	r1, [pc, #14]	; b0f4c <EzSharpIROptions(TOptionArray *, char **)+0x40>
         b0f34:	eb6c277e 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
         b0f38:	e1a0200d 	mov	r2, sp
         b0f3c:	e5941000 	ldr	r1, [r4]
         b0f40:	e1a00004 	mov	r0, r4
         b0f44:	eb6c2356 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0f48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b0f4c:	736c6972 	cmnvc	ip, #1867776	; 0x1c8000
    */
}

/**
 * Symbol: EzMNPModemOptions(TOptionArray *, char **)
 * Address: 000b0f50
 */
EzMNPModemOptions(TOptionArray *, char **) {
    /*
         b0f50:	e1a0c00d 	mov	ip, sp
         b0f54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b0f58:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0f5c:	e1a04000 	mov	r4, r0
         b0f60:	e24dd00c 	sub	sp, sp, #12	; 0xc
         b0f64:	e1a0000d 	mov	r0, sp
         b0f68:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b0f6c:	eb6c16ed 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b0f70:	e1a0000d 	mov	r0, sp
         b0f74:	e59f1084 	ldr	r1, [pc, #84]	; b1000 <EzMNPModemOptions(TOptionArray *, char **)+0xb0>
         b0f78:	eb6c276d 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
         b0f7c:	e1a0200d 	mov	r2, sp
         b0f80:	e5941000 	ldr	r1, [r4]
         b0f84:	e1a00004 	mov	r0, r4
         b0f88:	eb6c2345 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0f8c:	e3300000 	teq	r0, #0	; 0x0
         b0f90:	e28dd00c 	add	sp, sp, #12	; 0xc
         b0f94:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         b0f98:	e24dd010 	sub	sp, sp, #16	; 0x10
         b0f9c:	e1a0000d 	mov	r0, sp
         b0fa0:	eb6c2b80 	bl	1bbbda8 <TCMOModemECType::$__ct(void)>
         b0fa4:	e3a00002 	mov	r0, #2	; 0x2
         b0fa8:	e58d000c 	str	r0, [sp, #12]
         b0fac:	e59d0008 	ldr	r0, [sp, #8]
         b0fb0:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         b0fb4:	e3800c02 	orr	r0, r0, #512	; 0x200
         b0fb8:	e58d0008 	str	r0, [sp, #8]
         b0fbc:	e1a0200d 	mov	r2, sp
         b0fc0:	e5941000 	ldr	r1, [r4]
         b0fc4:	e1a00004 	mov	r0, r4
         b0fc8:	eb6c2335 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0fcc:	e3300000 	teq	r0, #0	; 0x0
         b0fd0:	e28dd010 	add	sp, sp, #16	; 0x10
         b0fd4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         b0fd8:	e24dd020 	sub	sp, sp, #32	; 0x20
         b0fdc:	e1a0000d 	mov	r0, sp
         b0fe0:	eb6c2b7b 	bl	1bbbdd4 <TCMOModemDialing::$__ct(void)>
         b0fe4:	e1a0000d 	mov	r0, sp
         b0fe8:	eb67c448 	bl	1aa2110 <$SetDialingOptionsFromPrefs(TCMOModemDialing *)>
         b0fec:	e1a0200d 	mov	r2, sp
         b0ff0:	e5941000 	ldr	r1, [r4]
         b0ff4:	e1a00004 	mov	r0, r4
         b0ff8:	eb6c2329 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b0ffc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b1000:	6d6f6473 	stcvsl	4, cr6, [pc, -#460]!
    */
}

/**
 * Symbol: EzIrDAOptions(TOptionArray *, char **)
 * Address: 000b1004
 */
EzIrDAOptions(TOptionArray *, char **) {
    /*
         b1004:	e1a0c00d 	mov	ip, sp
         b1008:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b100c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1010:	e1a04000 	mov	r4, r0
         b1014:	e24dd00c 	sub	sp, sp, #12	; 0xc
         b1018:	e1a0000d 	mov	r0, sp
         b101c:	e3a01303 	mov	r1, #201326592	; 0xc000000
         b1020:	eb6c16c0 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
         b1024:	e1a0000d 	mov	r0, sp
         b1028:	e59f1014 	ldr	r1, [pc, #14]	; b1044 <EzIrDAOptions(TOptionArray *, char **)+0x40>
         b102c:	eb6c2740 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
         b1030:	e1a0200d 	mov	r2, sp
         b1034:	e5941000 	ldr	r1, [r4]
         b1038:	e1a00004 	mov	r0, r4
         b103c:	eb6c2318 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b1040:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b1044:	69726461 	ldmvsdb	r2!, {r0, r5, r6, sl, sp, lr}^
    */
}

/**
 * Symbol: EzConvertOptions__FRC6RefVarPP12TOptionArrayN22
 * Address: 000b1124
 */
void globals::EzConvertOptions() {
    /*
         b1124:	e1a0c00d 	mov	ip, sp
         b1128:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         b112c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1130:	e1a07000 	mov	r7, r0
         b1134:	e1a06001 	mov	r6, r1
         b1138:	e1a05002 	mov	r5, r2
         b113c:	e1a04003 	mov	r4, r3
         b1140:	e24dd00c 	sub	sp, sp, #12	; 0xc
         b1144:	e3a00000 	mov	r0, #0	; 0x0
         b1148:	e58d0004 	str	r0, [sp, #4]
         b114c:	e3a08000 	mov	r8, #0	; 0x0
         b1150:	e58d0000 	str	r0, [sp]
         b1154:	eb6c1262 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b1158:	e5860000 	str	r0, [r6]
         b115c:	eb6cc3ef 	bl	1be2120 <$MemError>
         b1160:	e58d0000 	str	r0, [sp]
         b1164:	e5960000 	ldr	r0, [r6]
         b1168:	e59f1040 	ldr	r1, [pc, #40]	; b11b0 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x8c>
         b116c:	e3300000 	teq	r0, #0	; 0x0
         b1170:	e58d1008 	str	r1, [sp, #8]
         b1174:	0a000077 	beq	b1358 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x234>
         b1178:	eb6c1ebf 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b117c:	e58d0000 	str	r0, [sp]
         b1180:	e3300000 	teq	r0, #0	; 0x0
         b1184:	1a00006f 	bne	b1348 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x224>
         b1188:	e28f1f09 	add	r1, pc, #36	; 0x24
         b118c:	e28f0f0c 	add	r0, pc, #48	; 0x30
         b1190:	eb6c9a7d 	bl	1bd7b8c <$NewByName__FPCcT1>
         b1194:	e1b0a000 	movs	sl, r0
         b1198:	1a00000e 	bne	b11d8 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0xb4>
         b119c:	eb6cc3df 	bl	1be2120 <$MemError>
         b11a0:	e3300000 	teq	r0, #0	; 0x0
         b11a4:	0a000009 	beq	b11d0 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0xac>
         b11a8:	eb6cc3dc 	bl	1be2120 <$MemError>
         b11ac:	ea000008 	b	b11d4 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0xb0>
         b11b0:	00371324 	eoreqs	r1, r7, r4, lsr #6
         b11b4:	504f7074 	subpl	r7, pc, r4, ror r0
         b11b8:	696f6e44 	stmvsdb	pc!, {r2, r6, r9, sl, fp, sp, lr}^
         b11bc:	6174614f 	cmnvs	r4, pc, asr #2
         b11c0:	75740000 	ldrvcb	r0, [r4]!
         b11c4:	50467261 	subpl	r7, r6, r1, ror #4
         b11c8:	6d655369 	stcvsl	3, cr5, [r5, -#420]!
         b11cc:	6e6b0000 	cdpvs	0, 6, cr0, cr11, cr0, {0}
         b11d0:	e3e00000 	mvn	r0, #0	; 0x0
         b11d4:	e58d0000 	str	r0, [sp]
         b11d8:	e59d0000 	ldr	r0, [sp]
         b11dc:	e3300000 	teq	r0, #0	; 0x0
         b11e0:	1a000052 	bne	b1330 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x20c>
         b11e4:	e28f1f08 	add	r1, pc, #32	; 0x20
         b11e8:	e24f0f0b 	sub	r0, pc, #44	; 0x2c
         b11ec:	eb6c9a66 	bl	1bd7b8c <$NewByName__FPCcT1>
         b11f0:	e1b08000 	movs	r8, r0
         b11f4:	1a00000a 	bne	b1224 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x100>
         b11f8:	eb6cc3c8 	bl	1be2120 <$MemError>
         b11fc:	e3300000 	teq	r0, #0	; 0x0
         b1200:	0a000005 	beq	b121c <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0xf8>
         b1204:	eb6cc3c5 	bl	1be2120 <$MemError>
         b1208:	ea000004 	b	b1220 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0xfc>
         b120c:	50536372 	subpls	r6, r3, r2, ror r3
         b1210:	69707444 	ldmvsdb	r0!, {r2, r6, sl, ip, sp, lr}^
         b1214:	6174614f 	cmnvs	r4, pc, asr #2
         b1218:	75740000 	ldrvcb	r0, [r4]!
         b121c:	e3e00000 	mvn	r0, #0	; 0x0
         b1220:	e58d0000 	str	r0, [sp]
         b1224:	e59d0000 	ldr	r0, [sp]
         b1228:	e3300000 	teq	r0, #0	; 0x0
         b122c:	1a00003f 	bne	b1330 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x20c>
         b1230:	e3a00000 	mov	r0, #0	; 0x0
         b1234:	e52d006c 	str	r0, [sp, -#108]!
         b1238:	e28d0008 	add	r0, sp, #8	; 0x8
         b123c:	eb6c05cc 	bl	1bb2974 <$setjmp>
         b1240:	e3300000 	teq	r0, #0	; 0x0
         b1244:	1a0000a4 	bne	b14dc <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x3b8>
         b1248:	e1a0000d 	mov	r0, sp
         b124c:	eb6cbb8a 	bl	1be007c <$AddExceptionHandler>
         b1250:	e24dd010 	sub	sp, sp, #16	; 0x10
         b1254:	e3a00002 	mov	r0, #2	; 0x2
         b1258:	eb6c43bb 	bl	1bc214c <$AllocateRefHandle(long)>
         b125c:	e1a09000 	mov	r9, r0
         b1260:	e3a00000 	mov	r0, #0	; 0x0
         b1264:	eb67aacc 	bl	1a9bd9c <$MakeArray(long)>
         b1268:	eb6c43b7 	bl	1bc214c <$AllocateRefHandle(long)>
         b126c:	e58d000c 	str	r0, [sp, #12]
         b1270:	e3a00002 	mov	r0, #2	; 0x2
         b1274:	eb6c43b4 	bl	1bc214c <$AllocateRefHandle(long)>
         b1278:	e58d0004 	str	r0, [sp, #4]
         b127c:	e5960000 	ldr	r0, [r6]
         b1280:	e58d0000 	str	r0, [sp]
         b1284:	e28d200c 	add	r2, sp, #12	; 0xc
         b1288:	e59f110c 	ldr	r1, [pc, #10c]	; b139c <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x278>
         b128c:	e1a00007 	mov	r0, r7
         b1290:	eb6c47cf 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         b1294:	e5890000 	str	r0, [r9]
         b1298:	e3300002 	teq	r0, #2	; 0x2
         b129c:	1a000004 	bne	b12b4 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x190>
         b12a0:	e59d0084 	ldr	r0, [sp, #132]
         b12a4:	e5900000 	ldr	r0, [r0]
         b12a8:	e3a02000 	mov	r2, #0	; 0x0
         b12ac:	e3e01000 	mvn	r1, #0	; 0x0
         b12b0:	eb6cc7b9 	bl	1be319c <$Throw>
         b12b4:	e5991000 	ldr	r1, [r9]
         b12b8:	e59d0004 	ldr	r0, [sp, #4]
         b12bc:	e5801000 	str	r1, [r0]
         b12c0:	e58d8008 	str	r8, [sp, #8]
         b12c4:	e1a0100d 	mov	r1, sp
         b12c8:	e1a0000a 	mov	r0, sl
         b12cc:	e3a02000 	mov	r2, #0	; 0x0
         b12d0:	eb6bdc4d 	bl	1ba840c <PFrameSink::$Translate(void *, PipeCallBack *)>
         b12d4:	e59f00c4 	ldr	r0, [pc, #c4]	; b13a0 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x27c>
         b12d8:	e5900000 	ldr	r0, [r0]
         b12dc:	e5901000 	ldr	r1, [r0]
         b12e0:	e5970000 	ldr	r0, [r7]
         b12e4:	e5900000 	ldr	r0, [r0]
         b12e8:	eb6c4bd6 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         b12ec:	e3300000 	teq	r0, #0	; 0x0
         b12f0:	0a000040 	beq	b13f8 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x2d4>
         b12f4:	e3a00000 	mov	r0, #0	; 0x0
         b12f8:	eb6c11f9 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b12fc:	e5850000 	str	r0, [r5]
         b1300:	eb6cc386 	bl	1be2120 <$MemError>
         b1304:	e58d007c 	str	r0, [sp, #124]
         b1308:	e5950000 	ldr	r0, [r5]
         b130c:	e3300000 	teq	r0, #0	; 0x0
         b1310:	1a000023 	bne	b13a4 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x280>
         b1314:	e59d0004 	ldr	r0, [sp, #4]
         b1318:	eb6c47a7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         b131c:	e59d000c 	ldr	r0, [sp, #12]
         b1320:	eb6c47a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         b1324:	e1a00009 	mov	r0, r9
         b1328:	eb6c47a3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         b132c:	e28dd07c 	add	sp, sp, #124	; 0x7c
         b1330:	e33a0000 	teq	sl, #0	; 0x0
         b1334:	11a0000a 	movne	r0, sl
         b1338:	1b6bd3fe 	blne	1ba6338 <PFrameSink::$Delete(void)>
         b133c:	e3380000 	teq	r8, #0	; 0x0
         b1340:	11a00008 	movne	r0, r8
         b1344:	1b6bd3fb 	blne	1ba6338 <PFrameSink::$Delete(void)>
         b1348:	e5960000 	ldr	r0, [r6]
         b134c:	e3300000 	teq	r0, #0	; 0x0
         b1350:	13a01001 	movne	r1, #1	; 0x1
         b1354:	1b6c15f4 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         b1358:	e5950000 	ldr	r0, [r5]
         b135c:	e3300000 	teq	r0, #0	; 0x0
         b1360:	13a01001 	movne	r1, #1	; 0x1
         b1364:	1b6c15f0 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         b1368:	e5940000 	ldr	r0, [r4]
         b136c:	e3300000 	teq	r0, #0	; 0x0
         b1370:	13a01001 	movne	r1, #1	; 0x1
         b1374:	1b6c15ec 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         b1378:	e59d1000 	ldr	r1, [sp]
         b137c:	e3310000 	teq	r1, #0	; 0x0
         b1380:	0a000003 	beq	b1394 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x270>
         b1384:	e59d0008 	ldr	r0, [sp, #8]
         b1388:	e5900000 	ldr	r0, [r0]
         b138c:	e3a02000 	mov	r2, #0	; 0x0
         b1390:	eb6cc781 	bl	1be319c <$Throw>
         b1394:	e3a00000 	mov	r0, #0	; 0x0
         b1398:	ea00008c 	b	b15d0 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x4ac>
         b139c:	00683b68 	rsbeq	r3, r8, r8, ror #22
         b13a0:	006820b0 	streqh	r2, [r8]
         b13a4:	eb6c1e34 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b13a8:	e58d007c 	str	r0, [sp, #124]
         b13ac:	e3300000 	teq	r0, #0	; 0x0
         b13b0:	1affffd7 	bne	b1314 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x1f0>
         b13b4:	e28d200c 	add	r2, sp, #12	; 0xc
         b13b8:	e51f1020 	ldr	r1, [pc, #ffffffe0]	; b13a0 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x27c>
         b13bc:	e1a00007 	mov	r0, r7
         b13c0:	eb6c4783 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         b13c4:	e5890000 	str	r0, [r9]
         b13c8:	e3300002 	teq	r0, #2	; 0x2
         b13cc:	0a000009 	beq	b13f8 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x2d4>
         b13d0:	e5950000 	ldr	r0, [r5]
         b13d4:	e58d0000 	str	r0, [sp]
         b13d8:	e5991000 	ldr	r1, [r9]
         b13dc:	e59d0004 	ldr	r0, [sp, #4]
         b13e0:	e5801000 	str	r1, [r0]
         b13e4:	e58d8008 	str	r8, [sp, #8]
         b13e8:	e1a0100d 	mov	r1, sp
         b13ec:	e1a0000a 	mov	r0, sl
         b13f0:	e3a02000 	mov	r2, #0	; 0x0
         b13f4:	eb6bdc04 	bl	1ba840c <PFrameSink::$Translate(void *, PipeCallBack *)>
         b13f8:	e59f00d4 	ldr	r0, [pc, #d4]	; b14d4 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x3b0>
         b13fc:	e5900000 	ldr	r0, [r0]
         b1400:	e5901000 	ldr	r1, [r0]
         b1404:	e5970000 	ldr	r0, [r7]
         b1408:	e5900000 	ldr	r0, [r0]
         b140c:	eb6c4b8d 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         b1410:	e3300000 	teq	r0, #0	; 0x0
         b1414:	0a00001c 	beq	b148c <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x368>
         b1418:	e3a00000 	mov	r0, #0	; 0x0
         b141c:	eb6c11b0 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b1420:	e5840000 	str	r0, [r4]
         b1424:	eb6cc33d 	bl	1be2120 <$MemError>
         b1428:	e58d007c 	str	r0, [sp, #124]
         b142c:	e5940000 	ldr	r0, [r4]
         b1430:	e3300000 	teq	r0, #0	; 0x0
         b1434:	0affffb6 	beq	b1314 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x1f0>
         b1438:	eb6c1e0f 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b143c:	e58d007c 	str	r0, [sp, #124]
         b1440:	e3300000 	teq	r0, #0	; 0x0
         b1444:	1affffb2 	bne	b1314 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x1f0>
         b1448:	e28d200c 	add	r2, sp, #12	; 0xc
         b144c:	e59f1080 	ldr	r1, [pc, #80]	; b14d4 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x3b0>
         b1450:	e1a00007 	mov	r0, r7
         b1454:	eb6c475e 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         b1458:	e5890000 	str	r0, [r9]
         b145c:	e3300002 	teq	r0, #2	; 0x2
         b1460:	0a000009 	beq	b148c <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x368>
         b1464:	e5940000 	ldr	r0, [r4]
         b1468:	e58d0000 	str	r0, [sp]
         b146c:	e5990000 	ldr	r0, [r9]
         b1470:	e59d1004 	ldr	r1, [sp, #4]
         b1474:	e5810000 	str	r0, [r1]
         b1478:	e58d8008 	str	r8, [sp, #8]
         b147c:	e1a0100d 	mov	r1, sp
         b1480:	e1a0000a 	mov	r0, sl
         b1484:	e3a02000 	mov	r2, #0	; 0x0
         b1488:	eb6bdbdf 	bl	1ba840c <PFrameSink::$Translate(void *, PipeCallBack *)>
         b148c:	e59f0044 	ldr	r0, [pc, #44]	; b14d8 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x3b4>
         b1490:	e5900000 	ldr	r0, [r0]
         b1494:	e5901000 	ldr	r1, [r0]
         b1498:	e5970000 	ldr	r0, [r7]
         b149c:	e5900000 	ldr	r0, [r0]
         b14a0:	eb6c4b6e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         b14a4:	e2500002 	subs	r0, r0, #2	; 0x2
         b14a8:	13a00001 	movne	r0, #1	; 0x1
         b14ac:	e20000ff 	and	r0, r0, #255	; 0xff
         b14b0:	e58d0080 	str	r0, [sp, #128]
         b14b4:	e59d0004 	ldr	r0, [sp, #4]
         b14b8:	eb6c473f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         b14bc:	e59d000c 	ldr	r0, [sp, #12]
         b14c0:	eb6c473d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         b14c4:	e1a00009 	mov	r0, r9
         b14c8:	eb6c473b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         b14cc:	e28dd010 	add	sp, sp, #16	; 0x10
         b14d0:	ea000036 	b	b15b0 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x48c>
         b14d4:	006825c8 	rsbeq	r2, r8, r8, asr #11
         b14d8:	00684db0 	streqh	r4, [r8], -#208
         b14dc:	e59d0060 	ldr	r0, [sp, #96]
         b14e0:	e59f106c 	ldr	r1, [pc, #6c]	; b1554 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x430>
         b14e4:	e5911000 	ldr	r1, [r1]
         b14e8:	eb6cc729 	bl	1be3194 <$Subexception>
         b14ec:	e3300000 	teq	r0, #0	; 0x0
         b14f0:	e59d006c 	ldr	r0, [sp, #108]
         b14f4:	0a000017 	beq	b1558 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x434>
         b14f8:	e3300000 	teq	r0, #0	; 0x0
         b14fc:	059d0064 	ldreq	r0, [sp, #100]
         b1500:	e33a0000 	teq	sl, #0	; 0x0
         b1504:	e58d006c 	str	r0, [sp, #108]
         b1508:	11a0000a 	movne	r0, sl
         b150c:	1b6bd389 	blne	1ba6338 <PFrameSink::$Delete(void)>
         b1510:	e3380000 	teq	r8, #0	; 0x0
         b1514:	11a00008 	movne	r0, r8
         b1518:	1b6bd386 	blne	1ba6338 <PFrameSink::$Delete(void)>
         b151c:	e5960000 	ldr	r0, [r6]
         b1520:	e3300000 	teq	r0, #0	; 0x0
         b1524:	13a01001 	movne	r1, #1	; 0x1
         b1528:	1b6c157f 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         b152c:	e5950000 	ldr	r0, [r5]
         b1530:	e3300000 	teq	r0, #0	; 0x0
         b1534:	13a01001 	movne	r1, #1	; 0x1
         b1538:	1b6c157b 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         b153c:	e5940000 	ldr	r0, [r4]
         b1540:	e3300000 	teq	r0, #0	; 0x0
         b1544:	0a000017 	beq	b15a8 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x484>
         b1548:	e3a01001 	mov	r1, #1	; 0x1
         b154c:	eb6c1576 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b1550:	ea000014 	b	b15a8 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x484>
         b1554:	00371328 	eoreqs	r1, r7, r8, lsr #6
         b1558:	e3300000 	teq	r0, #0	; 0x0
         b155c:	03e00000 	mvneq	r0, #0	; 0x0
         b1560:	e33a0000 	teq	sl, #0	; 0x0
         b1564:	e58d006c 	str	r0, [sp, #108]
         b1568:	11a0000a 	movne	r0, sl
         b156c:	1b6bd371 	blne	1ba6338 <PFrameSink::$Delete(void)>
         b1570:	e3380000 	teq	r8, #0	; 0x0
         b1574:	11a00008 	movne	r0, r8
         b1578:	1b6bd36e 	blne	1ba6338 <PFrameSink::$Delete(void)>
         b157c:	e5960000 	ldr	r0, [r6]
         b1580:	e3300000 	teq	r0, #0	; 0x0
         b1584:	13a01001 	movne	r1, #1	; 0x1
         b1588:	1b6c1567 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         b158c:	e5950000 	ldr	r0, [r5]
         b1590:	e3300000 	teq	r0, #0	; 0x0
         b1594:	13a01001 	movne	r1, #1	; 0x1
         b1598:	1b6c1563 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         b159c:	e5940000 	ldr	r0, [r4]
         b15a0:	e3300000 	teq	r0, #0	; 0x0
         b15a4:	1affffe7 	bne	b1548 <EzConvertOptions__FRC6RefVarPP12TOptionArrayN22+0x424>
         b15a8:	e1a0000d 	mov	r0, sp
         b15ac:	eb6cc2e8 	bl	1be2154 <$NextHandler>
         b15b0:	e1a0000d 	mov	r0, sp
         b15b4:	eb6cbebf 	bl	1be10b8 <$ExitHandler>
         b15b8:	e28dd06c 	add	sp, sp, #108	; 0x6c
         b15bc:	e1a0000a 	mov	r0, sl
         b15c0:	eb6bd35c 	bl	1ba6338 <PFrameSink::$Delete(void)>
         b15c4:	e1a00008 	mov	r0, r8
         b15c8:	eb6bd35a 	bl	1ba6338 <PFrameSink::$Delete(void)>
         b15cc:	e59d0004 	ldr	r0, [sp, #4]
         b15d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EmptyFixedRect
 * Address: 000bdac8
 */
void globals::EmptyFixedRect() {
    /*
         bdac8:	e5901004 	ldr	r1, [r0, #4]
         bdacc:	e3310000 	teq	r1, #0	; 0x0
         bdad0:	0590100c 	ldreq	r1, [r0, #12]
         bdad4:	03310000 	teqeq	r1, #0	; 0x0
         bdad8:	05901000 	ldreq	r1, [r0]
         bdadc:	03310000 	teqeq	r1, #0	; 0x0
         bdae0:	05900008 	ldreq	r0, [r0, #8]
         bdae4:	03300000 	teqeq	r0, #0	; 0x0
         bdae8:	13a00000 	movne	r0, #0	; 0x0
         bdaec:	03a00001 	moveq	r0, #1	; 0x1
         bdaf0:	e20000ff 	and	r0, r0, #255	; 0xff
         bdaf4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EnvironmentHasDomain__FUlT1PUcT3
 * Address: 000d9258
 */
void globals::EnvironmentHasDomain() {
    /*
         d9258:	e1a0c00d 	mov	ip, sp
         d925c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         d9260:	e24cb004 	sub	fp, ip, #4	; 0x4
         d9264:	e1a0a000 	mov	sl, r0
         d9268:	e1a04001 	mov	r4, r1
         d926c:	e1a06002 	mov	r6, r2
         d9270:	e1a05003 	mov	r5, r3
         d9274:	eb0aec65 	bl	394410 <IsSuperMode>
         d9278:	e3300000 	teq	r0, #0	; 0x0
         d927c:	0a000025 	beq	d9318 <EnvironmentHasDomain__FUlT1PUcT3+0xc0>
         d9280:	e59f9030 	ldr	r9, [pc, #30]	; d92b8 <EnvironmentHasDomain__FUlT1PUcT3+0x60>
         d9284:	e20a100f 	and	r1, sl, #15	; 0xf
         d9288:	e3a08001 	mov	r8, #1	; 0x1
         d928c:	e3a07000 	mov	r7, #0	; 0x0
         d9290:	e3310004 	teq	r1, #4	; 0x4
         d9294:	e5990000 	ldr	r0, [r9]
         d9298:	11a01007 	movne	r1, r7
         d929c:	01a01008 	moveq	r1, r8
         d92a0:	e3310000 	teq	r1, #0	; 0x0
         d92a4:	0a000004 	beq	d92bc <EnvironmentHasDomain__FUlT1PUcT3+0x64>
         d92a8:	e1a0100a 	mov	r1, sl
         d92ac:	eb090318 	bl	319f14 <TObjectTable::Get(unsigned long)>
         d92b0:	e1a0a000 	mov	sl, r0
         d92b4:	ea000001 	b	d92c0 <EnvironmentHasDomain__FUlT1PUcT3+0x68>
         d92b8:	0c100fc8 	ldceq	15, cr0, [r0], -#800
         d92bc:	e1a0a007 	mov	sl, r7
         d92c0:	e33a0000 	teq	sl, #0	; 0x0
         d92c4:	0a00000b 	beq	d92f8 <EnvironmentHasDomain__FUlT1PUcT3+0xa0>
         d92c8:	e204100f 	and	r1, r4, #15	; 0xf
         d92cc:	e3310005 	teq	r1, #5	; 0x5
         d92d0:	e5990000 	ldr	r0, [r9]
         d92d4:	11a08007 	movne	r8, r7
         d92d8:	e3380000 	teq	r8, #0	; 0x0
         d92dc:	0a000002 	beq	d92ec <EnvironmentHasDomain__FUlT1PUcT3+0x94>
         d92e0:	e1a01004 	mov	r1, r4
         d92e4:	eb09030a 	bl	319f14 <TObjectTable::Get(unsigned long)>
         d92e8:	ea000000 	b	d92f0 <EnvironmentHasDomain__FUlT1PUcT3+0x98>
         d92ec:	e1a00007 	mov	r0, r7
         d92f0:	e1b01000 	movs	r1, r0
         d92f4:	1a000002 	bne	d9304 <EnvironmentHasDomain__FUlT1PUcT3+0xac>
         d92f8:	e3a000e1 	mov	r0, #225	; 0xe1
         d92fc:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         d9300:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         d9304:	e1a03005 	mov	r3, r5
         d9308:	e1a02006 	mov	r2, r6
         d930c:	e1a0000a 	mov	r0, sl
         d9310:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         d9314:	ea688a99 	b	1afbd80 <TEnvironment::$HasDomain(TKDomain *, unsigned char *, unsigned char *)>
         d9318:	e3a03000 	mov	r3, #0	; 0x0
         d931c:	e1a02005 	mov	r2, r5
         d9320:	e1a01006 	mov	r1, r6
         d9324:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         d9328:	e1a02004 	mov	r2, r4
         d932c:	e1a0100a 	mov	r1, sl
         d9330:	e3a00027 	mov	r0, #39	; 0x27
         d9334:	eb0b53a1 	bl	3ae1c0 <GenericWithReturnSWI>
         d9338:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EnableInterrupt
 * Address: 000e5768
 */
void globals::EnableInterrupt() {
    /*
         e5768:	e1a0c00d 	mov	ip, sp
         e576c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         e5770:	e24cb004 	sub	fp, ip, #4	; 0x4
         e5774:	e1a04000 	mov	r4, r0
         e5778:	e1a05001 	mov	r5, r1
         e577c:	eb65f69a 	bl	1a631ec <$CheckEnables(InterruptObject *, unsigned long)>
         e5780:	e3300000 	teq	r0, #0	; 0x0
         e5784:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         e5788:	e5940008 	ldr	r0, [r4, #8]
         e578c:	e3c00b01 	bic	r0, r0, #1024	; 0x400
         e5790:	e3c0000f 	bic	r0, r0, #15	; 0xf
         e5794:	e1a01a05 	mov	r1, r5, lsl #20
         e5798:	e1a01a21 	mov	r1, r1, lsr #20
         e579c:	e3c11ebf 	bic	r1, r1, #3056	; 0xbf0
         e57a0:	e1800001 	orr	r0, r0, r1
         e57a4:	e3800080 	orr	r0, r0, #128	; 0x80
         e57a8:	e5840008 	str	r0, [r4, #8]
         e57ac:	e1a00004 	mov	r0, r4
         e57b0:	eb6c9357 	bl	1c0a514 <$QuickEnableInterrupt>
         e57b4:	e3a00000 	mov	r0, #0	; 0x0
         e57b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: EnableInterruptBits(unsigned long)
 * Address: 000e5868
 */
EnableInterruptBits(unsigned long) {
    /*
         e5868:	e1a0c00d 	mov	ip, sp
         e586c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         e5870:	e24cb004 	sub	fp, ip, #4	; 0x4
         e5874:	e1a01000 	mov	r1, r0
         e5878:	e3a02000 	mov	r2, #0	; 0x0
         e587c:	e3a00961 	mov	r0, #1589248	; 0x184000
         e5880:	e280040f 	add	r0, r0, #251658240	; 0xf000000
         e5884:	eb6bd535 	bl	1bdad60 <$SetAndClearBitsAtomic>
         e5888:	e3a00000 	mov	r0, #0	; 0x0
         e588c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ExpandIMA__FPScT1P8IMAStateUlN24
 * Address: 000e8500
 */
void globals::ExpandIMA() {
    /*
         e8500:	e1a0c00d 	mov	ip, sp
         e8504:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         e8508:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         e850c:	e24cb014 	sub	fp, ip, #20	; 0x14
         e8510:	e1a04000 	mov	r4, r0
         e8514:	e1a05001 	mov	r5, r1
         e8518:	e1a06002 	mov	r6, r2
         e851c:	e28b9014 	add	r9, fp, #20	; 0x14
         e8520:	e8990201 	ldmia	r9, {r0, r9}
         e8524:	e24dd00c 	sub	sp, sp, #12	; 0xc
         e8528:	e3a08000 	mov	r8, #0	; 0x0
         e852c:	e1a07001 	mov	r7, r1
         e8530:	e59b3010 	ldr	r3, [fp, #16]
         e8534:	e3330000 	teq	r3, #0	; 0x0
         e8538:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         e853c:	e3a02002 	mov	r2, #2	; 0x2
         e8540:	e3190001 	tst	r9, #1	; 0x1
         e8544:	e58d2000 	str	r2, [sp]
         e8548:	0a000006 	beq	e8568 <ExpandIMA__FPScT1P8IMAStateUlN24+0x68>
         e854c:	e2400001 	sub	r0, r0, #1	; 0x1
         e8550:	e0801200 	add	r1, r0, r0, lsl #4
         e8554:	e0844081 	add	r4, r4, r1, lsl #1
         e8558:	e0855000 	add	r5, r5, r0
         e855c:	e0877080 	add	r7, r7, r0, lsl #1
         e8560:	e3a02024 	mov	r2, #36	; 0x24
         e8564:	e58d2000 	str	r2, [sp]
         e8568:	e1a01006 	mov	r1, r6
         e856c:	e1a00004 	mov	r0, r4
         e8570:	eb6a5234 	bl	1b7ce48 <$CheckState(signed char *, IMAState *)>
         e8574:	e2844002 	add	r4, r4, #2	; 0x2
         e8578:	e5960000 	ldr	r0, [r6]
         e857c:	e5961004 	ldr	r1, [r6, #4]
         e8580:	e1a01841 	mov	r1, r1, asr #16
         e8584:	e59f210c 	ldr	r2, [pc, #10c]	; e8698 <ExpandIMA__FPScT1P8IMAStateUlN24+0x198>
         e8588:	e58d2008 	str	r2, [sp, #8]
         e858c:	e792e081 	ldr	lr, [r2, r1, lsl #1]
         e8590:	e1a0e84e 	mov	lr, lr, asr #16
         e8594:	e59fc100 	ldr	ip, [pc, #100]	; e869c <ExpandIMA__FPScT1P8IMAStateUlN24+0x19c>
         e8598:	e58dc004 	str	ip, [sp, #4]
         e859c:	e3a03040 	mov	r3, #64	; 0x40
         e85a0:	e3130001 	tst	r3, #1	; 0x1
         e85a4:	05d48000 	ldreqb	r8, [r4]
         e85a8:	01a08c08 	moveq	r8, r8, lsl #24
         e85ac:	01a08c48 	moveq	r8, r8, asr #24
         e85b0:	02844001 	addeq	r4, r4, #1	; 0x1
         e85b4:	0208200f 	andeq	r2, r8, #15	; 0xf
         e85b8:	13a0200f 	movne	r2, #15	; 0xf
         e85bc:	10022228 	andne	r2, r2, r8, lsr #4
         e85c0:	e3a0c000 	mov	ip, #0	; 0x0
         e85c4:	e3120004 	tst	r2, #4	; 0x4
         e85c8:	11a0c00e 	movne	ip, lr
         e85cc:	e3120002 	tst	r2, #2	; 0x2
         e85d0:	108cc0ce 	addne	ip, ip, lr, asr #1
         e85d4:	e3120001 	tst	r2, #1	; 0x1
         e85d8:	108cc14e 	addne	ip, ip, lr, asr #2
         e85dc:	e08cc1ce 	add	ip, ip, lr, asr #3
         e85e0:	e3120008 	tst	r2, #8	; 0x8
         e85e4:	126cc000 	rsbne	ip, ip, #0	; 0x0
         e85e8:	e080000c 	add	r0, r0, ip
         e85ec:	e3a0e902 	mov	lr, #32768	; 0x8000
         e85f0:	e24ee001 	sub	lr, lr, #1	; 0x1
         e85f4:	e150000e 	cmp	r0, lr
         e85f8:	c1a0000e 	movgt	r0, lr
         e85fc:	ca000002 	bgt	e860c <ExpandIMA__FPScT1P8IMAStateUlN24+0x10c>
         e8600:	e3700902 	cmn	r0, #32768	; 0x8000
         e8604:	b3a009fe 	movlt	r0, #4161536	; 0x3f8000
         e8608:	b2400501 	sublt	r0, r0, #4194304	; 0x400000
         e860c:	e3390000 	teq	r9, #0	; 0x0
         e8610:	0a000022 	beq	e86a0 <ExpandIMA__FPScT1P8IMAStateUlN24+0x1a0>
         e8614:	e3390001 	teq	r9, #1	; 0x1
         e8618:	0a000024 	beq	e86b0 <ExpandIMA__FPScT1P8IMAStateUlN24+0x1b0>
         e861c:	e3390002 	teq	r9, #2	; 0x2
         e8620:	0a000026 	beq	e86c0 <ExpandIMA__FPScT1P8IMAStateUlN24+0x1c0>
         e8624:	e3390003 	teq	r9, #3	; 0x3
         e8628:	1a000002 	bne	e8638 <ExpandIMA__FPScT1P8IMAStateUlN24+0x138>
         e862c:	e5c70001 	strb	r0, [r7, #1]
         e8630:	e1a0c440 	mov	ip, r0, asr #8
         e8634:	e4c7c004 	strb	ip, [r7], #4
         e8638:	e59dc004 	ldr	ip, [sp, #4]
         e863c:	e79c2082 	ldr	r2, [ip, r2, lsl #1]
         e8640:	e1a02842 	mov	r2, r2, asr #16
         e8644:	e0921001 	adds	r1, r2, r1
         e8648:	43a01000 	movmi	r1, #0	; 0x0
         e864c:	4a000001 	bmi	e8658 <ExpandIMA__FPScT1P8IMAStateUlN24+0x158>
         e8650:	e3510058 	cmp	r1, #88	; 0x58
         e8654:	c3a01058 	movgt	r1, #88	; 0x58
         e8658:	e59d2008 	ldr	r2, [sp, #8]
         e865c:	e792e081 	ldr	lr, [r2, r1, lsl #1]
         e8660:	e1a0e84e 	mov	lr, lr, asr #16
         e8664:	e2533001 	subs	r3, r3, #1	; 0x1
         e8668:	1affffcc 	bne	e85a0 <ExpandIMA__FPScT1P8IMAStateUlN24+0xa0>
         e866c:	e59d2000 	ldr	r2, [sp]
         e8670:	e0844002 	add	r4, r4, r2
         e8674:	e59b3010 	ldr	r3, [fp, #16]
         e8678:	e2533001 	subs	r3, r3, #1	; 0x1
         e867c:	e58b3010 	str	r3, [fp, #16]
         e8680:	1affffc5 	bne	e859c <ExpandIMA__FPScT1P8IMAStateUlN24+0x9c>
         e8684:	e5860000 	str	r0, [r6]
         e8688:	e5c61005 	strb	r1, [r6, #5]
         e868c:	e1a00441 	mov	r0, r1, asr #8
         e8690:	e5c60004 	strb	r0, [r6, #4]
         e8694:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         e8698:	003716a4 	eoreqs	r1, r7, r4, lsr #13
         e869c:	00371684 	eoreqs	r1, r7, r4, lsl #13
         e86a0:	e3a0c080 	mov	ip, #128	; 0x80
         e86a4:	e02cc440 	eor	ip, ip, r0, asr #8
         e86a8:	e4c5c001 	strb	ip, [r5], #1
         e86ac:	eaffffe1 	b	e8638 <ExpandIMA__FPScT1P8IMAStateUlN24+0x138>
         e86b0:	e3a0c080 	mov	ip, #128	; 0x80
         e86b4:	e02cc440 	eor	ip, ip, r0, asr #8
         e86b8:	e4c5c002 	strb	ip, [r5], #2
         e86bc:	eaffffdd 	b	e8638 <ExpandIMA__FPScT1P8IMAStateUlN24+0x138>
         e86c0:	e5c70001 	strb	r0, [r7, #1]
         e86c4:	e1a0c440 	mov	ip, r0, asr #8
         e86c8:	e4c7c002 	strb	ip, [r7], #2
         e86cc:	eaffffd9 	b	e8638 <ExpandIMA__FPScT1P8IMAStateUlN24+0x138>
    */
}

/**
 * Symbol: EnterKMEMode
 * Address: 000f9fec
 */
void globals::EnterKMEMode() {
    /*
         f9fec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ExitKMEMode
 * Address: 000f9ff0
 */
void globals::ExitKMEMode() {
    /*
         f9ff0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EndOfPage(LetterCursor *)
 * Address: 001076cc
 */
EndOfPage(LetterCursor *) {
    /*
        1076cc:	e5901010 	ldr	r1, [r0, #16]
        1076d0:	e5900008 	ldr	r0, [r0, #8]
        1076d4:	e1510000 	cmp	r1, r0
        1076d8:	b3a00000 	movlt	r0, #0	; 0x0
        1076dc:	a3a00001 	movge	r0, #1	; 0x1
        1076e0:	e20000ff 	and	r0, r0, #255	; 0xff
        1076e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ExtractWords__FPUsPlT2
 * Address: 00109220
 */
void globals::ExtractWords() {
    /*
        109220:	e1a0c00d 	mov	ip, sp
        109224:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        109228:	e24cb004 	sub	fp, ip, #4	; 0x4
        10922c:	e1a04000 	mov	r4, r0
        109230:	e1a06001 	mov	r6, r1
        109234:	e1a05002 	mov	r5, r2
        109238:	e3a09001 	mov	r9, #1	; 0x1
        10923c:	e3a00009 	mov	r0, #9	; 0x9
        109240:	eb6a702c 	bl	1ba52f8 <$U_CONST_CHAR>
        109244:	e1a07000 	mov	r7, r0
        109248:	e3a0000d 	mov	r0, #13	; 0xd
        10924c:	eb6a7029 	bl	1ba52f8 <$U_CONST_CHAR>
        109250:	e1a08000 	mov	r8, r0
        109254:	e3a00020 	mov	r0, #32	; 0x20
        109258:	eb6a7026 	bl	1ba52f8 <$U_CONST_CHAR>
        10925c:	e1a01000 	mov	r1, r0
        109260:	e5960000 	ldr	r0, [r6]
        109264:	e1a03000 	mov	r3, r0
        109268:	e3500000 	cmp	r0, #0	; 0x0
        10926c:	da00000c 	ble	1092a4 <ExtractWords__FPUsPlT2+0x84>
        109270:	e7942080 	ldr	r2, [r4, r0, lsl #1]
        109274:	e1a02822 	mov	r2, r2, lsr #16
        109278:	e1320007 	teq	r2, r7
        10927c:	11320001 	teqne	r2, r1
        109280:	0a000005 	beq	10929c <ExtractWords__FPUsPlT2+0x7c>
        109284:	e1320008 	teq	r2, r8
        109288:	03a09000 	moveq	r9, #0	; 0x0
        10928c:	0a000010 	beq	1092d4 <ExtractWords__FPUsPlT2+0xb4>
        109290:	e2400001 	sub	r0, r0, #1	; 0x1
        109294:	e3500000 	cmp	r0, #0	; 0x0
        109298:	cafffff4 	bgt	109270 <ExtractWords__FPUsPlT2+0x50>
        10929c:	e3390000 	teq	r9, #0	; 0x0
        1092a0:	0a00000b 	beq	1092d4 <ExtractWords__FPUsPlT2+0xb4>
        1092a4:	e2400001 	sub	r0, r0, #1	; 0x1
        1092a8:	e3500000 	cmp	r0, #0	; 0x0
        1092ac:	da000008 	ble	1092d4 <ExtractWords__FPUsPlT2+0xb4>
        1092b0:	e7942080 	ldr	r2, [r4, r0, lsl #1]
        1092b4:	e1a02822 	mov	r2, r2, lsr #16
        1092b8:	e1320008 	teq	r2, r8
        1092bc:	11320007 	teqne	r2, r7
        1092c0:	11320001 	teqne	r2, r1
        1092c4:	0a000002 	beq	1092d4 <ExtractWords__FPUsPlT2+0xb4>
        1092c8:	e2400001 	sub	r0, r0, #1	; 0x1
        1092cc:	e3500000 	cmp	r0, #0	; 0x0
        1092d0:	cafffff6 	bgt	1092b0 <ExtractWords__FPUsPlT2+0x90>
        1092d4:	e5952000 	ldr	r2, [r5]
        1092d8:	e1530002 	cmp	r3, r2
        1092dc:	aa000008 	bge	109304 <ExtractWords__FPUsPlT2+0xe4>
        1092e0:	e794c083 	ldr	ip, [r4, r3, lsl #1]
        1092e4:	e1a0c82c 	mov	ip, ip, lsr #16
        1092e8:	e13c0008 	teq	ip, r8
        1092ec:	113c0007 	teqne	ip, r7
        1092f0:	113c0001 	teqne	ip, r1
        1092f4:	0a000002 	beq	109304 <ExtractWords__FPUsPlT2+0xe4>
        1092f8:	e2833001 	add	r3, r3, #1	; 0x1
        1092fc:	e1530002 	cmp	r3, r2
        109300:	bafffff6 	blt	1092e0 <ExtractWords__FPUsPlT2+0xc0>
        109304:	e2833001 	add	r3, r3, #1	; 0x1
        109308:	e1530002 	cmp	r3, r2
        10930c:	aa000008 	bge	109334 <ExtractWords__FPUsPlT2+0x114>
        109310:	e794c083 	ldr	ip, [r4, r3, lsl #1]
        109314:	e1a0c82c 	mov	ip, ip, lsr #16
        109318:	e13c0008 	teq	ip, r8
        10931c:	113c0007 	teqne	ip, r7
        109320:	113c0001 	teqne	ip, r1
        109324:	0a000002 	beq	109334 <ExtractWords__FPUsPlT2+0x114>
        109328:	e2833001 	add	r3, r3, #1	; 0x1
        10932c:	e1530002 	cmp	r3, r2
        109330:	bafffff6 	blt	109310 <ExtractWords__FPUsPlT2+0xf0>
        109334:	e3390000 	teq	r9, #0	; 0x0
        109338:	1a00000b 	bne	10936c <ExtractWords__FPUsPlT2+0x14c>
        10933c:	e2833001 	add	r3, r3, #1	; 0x1
        109340:	e1530002 	cmp	r3, r2
        109344:	aa000008 	bge	10936c <ExtractWords__FPUsPlT2+0x14c>
        109348:	e794c083 	ldr	ip, [r4, r3, lsl #1]
        10934c:	e1a0c82c 	mov	ip, ip, lsr #16
        109350:	e13c0008 	teq	ip, r8
        109354:	113c0007 	teqne	ip, r7
        109358:	113c0001 	teqne	ip, r1
        10935c:	0a000002 	beq	10936c <ExtractWords__FPUsPlT2+0x14c>
        109360:	e2833001 	add	r3, r3, #1	; 0x1
        109364:	e1530002 	cmp	r3, r2
        109368:	bafffff6 	blt	109348 <ExtractWords__FPUsPlT2+0x128>
        10936c:	e3a01000 	mov	r1, #0	; 0x0
        109370:	e3500000 	cmp	r0, #0	; 0x0
        109374:	d1a00001 	movle	r0, r1
        109378:	e0431000 	sub	r1, r3, r0
        10937c:	e5851000 	str	r1, [r5]
        109380:	e5860000 	str	r0, [r6]
        109384:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: EarlyBootGetTempPage(void)
 * Address: 0011e8dc
 */
EarlyBootGetTempPage(void) {
    /*
        11e8dc:	e1a0c00d 	mov	ip, sp
        11e8e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11e8e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e8e8:	e59f003c 	ldr	r0, [pc, #3c]	; 11e92c <EarlyBootGetTempPage(void)+0x50>
        11e8ec:	e8900003 	ldmia	r0, {r0, r1}
        11e8f0:	e0810000 	add	r0, r1, r0
        11e8f4:	e2400a01 	sub	r0, r0, #4096	; 0x1000
        11e8f8:	e1a01600 	mov	r1, r0, lsl #12
        11e8fc:	e1a01621 	mov	r1, r1, lsr #12
        11e900:	e2414801 	sub	r4, r1, #65536	; 0x10000
        11e904:	e1a00a20 	mov	r0, r0, lsr #20
        11e908:	e1a01a00 	mov	r1, r0, lsl #20
        11e90c:	e3a03001 	mov	r3, #1	; 0x1
        11e910:	e92d0008 	stmdb	sp!, {r3}
        11e914:	e3a03003 	mov	r3, #3	; 0x3
        11e918:	e3a02000 	mov	r2, #0	; 0x0
        11e91c:	e3a0050d 	mov	r0, #54525952	; 0x3400000
        11e920:	eb00ef2d 	bl	15a5dc <AddNewSecPNJT__FUlN214PermUc>
        11e924:	e284050d 	add	r0, r4, #54525952	; 0x3400000
        11e928:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11e92c:	0c1063e4 	ldceq	3, cr6, [r0], -#912
    */
}

/**
 * Symbol: EveryDayString(long, unsigned short *)
 * Address: 00121238
 */
EveryDayString(long, unsigned short *) {
    /*
        121238:	e1a0c00d 	mov	ip, sp
        12123c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        121240:	e24cb004 	sub	fp, ip, #4	; 0x4
        121244:	e1a04001 	mov	r4, r1
        121248:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        12124c:	e1a01000 	mov	r1, r0
        121250:	e1a0000d 	mov	r0, sp
        121254:	eb661010 	bl	1aa529c <$UnPackDays(long *, long)>
        121258:	e3300007 	teq	r0, #7	; 0x7
        12125c:	1a000005 	bne	121278 <EveryDayString(long, unsigned short *)+0x40>
        121260:	e3a00000 	mov	r0, #0	; 0x0
        121264:	eb65a8ce 	bl	1a8b5a4 <$CalendarString(long)>
        121268:	e1a01000 	mov	r1, r0
        12126c:	e1a00004 	mov	r0, r4
        121270:	eb6b3536 	bl	1bee750 <$Ustrcat>
        121274:	ea000027 	b	121318 <EveryDayString(long, unsigned short *)+0xe0>
        121278:	e3500006 	cmp	r0, #6	; 0x6
        12127c:	908ff100 	addls	pc, pc, r0, lsl #2
        121280:	ea000024 	b	121318 <EveryDayString(long, unsigned short *)+0xe0>
        121284:	ea000023 	b	121318 <EveryDayString(long, unsigned short *)+0xe0>
        121288:	ea000023 	b	12131c <EveryDayString(long, unsigned short *)+0xe4>
        12128c:	ea00002d 	b	121348 <EveryDayString(long, unsigned short *)+0x110>
        121290:	ea00003c 	b	121388 <EveryDayString(long, unsigned short *)+0x150>
        121294:	ea00004f 	b	1213d8 <EveryDayString(long, unsigned short *)+0x1a0>
        121298:	ea000066 	b	121438 <EveryDayString(long, unsigned short *)+0x200>
        12129c:	e59d0014 	ldr	r0, [sp, #20]
        1212a0:	eb65b950 	bl	1a8f7e8 <$DayName(long)>
        1212a4:	e1a03000 	mov	r3, r0
        1212a8:	e92d0008 	stmdb	sp!, {r3}
        1212ac:	e59d0014 	ldr	r0, [sp, #20]
        1212b0:	eb65b94c 	bl	1a8f7e8 <$DayName(long)>
        1212b4:	e1a03000 	mov	r3, r0
        1212b8:	e92d0008 	stmdb	sp!, {r3}
        1212bc:	e59d0014 	ldr	r0, [sp, #20]
        1212c0:	eb65b948 	bl	1a8f7e8 <$DayName(long)>
        1212c4:	e1a03000 	mov	r3, r0
        1212c8:	e92d0008 	stmdb	sp!, {r3}
        1212cc:	e59d0014 	ldr	r0, [sp, #20]
        1212d0:	eb65b944 	bl	1a8f7e8 <$DayName(long)>
        1212d4:	e1a03000 	mov	r3, r0
        1212d8:	e92d0008 	stmdb	sp!, {r3}
        1212dc:	e59d0014 	ldr	r0, [sp, #20]
        1212e0:	eb65b940 	bl	1a8f7e8 <$DayName(long)>
        1212e4:	e1a03000 	mov	r3, r0
        1212e8:	e92d0008 	stmdb	sp!, {r3}
        1212ec:	e59d0014 	ldr	r0, [sp, #20]
        1212f0:	eb65b93c 	bl	1a8f7e8 <$DayName(long)>
        1212f4:	e1a05000 	mov	r5, r0
        1212f8:	e3a0000c 	mov	r0, #12	; 0xc
        1212fc:	eb65a8a8 	bl	1a8b5a4 <$CalendarString(long)>
        121300:	e1a02000 	mov	r2, r0
        121304:	e1a00004 	mov	r0, r4
        121308:	e3a01063 	mov	r1, #99	; 0x63
        12130c:	e1a03005 	mov	r3, r5
        121310:	eb6b28a6 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        121314:	e28dd014 	add	sp, sp, #20	; 0x14
        121318:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        12131c:	e59d0000 	ldr	r0, [sp]
        121320:	eb65b930 	bl	1a8f7e8 <$DayName(long)>
        121324:	e1a05000 	mov	r5, r0
        121328:	e3a00007 	mov	r0, #7	; 0x7
        12132c:	eb65a89c 	bl	1a8b5a4 <$CalendarString(long)>
        121330:	e1a02000 	mov	r2, r0
        121334:	e1a00004 	mov	r0, r4
        121338:	e3a01063 	mov	r1, #99	; 0x63
        12133c:	e1a03005 	mov	r3, r5
        121340:	eb6b289a 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        121344:	eafffff3 	b	121318 <EveryDayString(long, unsigned short *)+0xe0>
        121348:	e59d0004 	ldr	r0, [sp, #4]
        12134c:	eb65b925 	bl	1a8f7e8 <$DayName(long)>
        121350:	e1a03000 	mov	r3, r0
        121354:	e92d0008 	stmdb	sp!, {r3}
        121358:	e59d0004 	ldr	r0, [sp, #4]
        12135c:	eb65b921 	bl	1a8f7e8 <$DayName(long)>
        121360:	e1a05000 	mov	r5, r0
        121364:	e3a00008 	mov	r0, #8	; 0x8
        121368:	eb65a88d 	bl	1a8b5a4 <$CalendarString(long)>
        12136c:	e1a02000 	mov	r2, r0
        121370:	e1a00004 	mov	r0, r4
        121374:	e3a01063 	mov	r1, #99	; 0x63
        121378:	e1a03005 	mov	r3, r5
        12137c:	eb6b288b 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        121380:	e28dd004 	add	sp, sp, #4	; 0x4
        121384:	eaffffe3 	b	121318 <EveryDayString(long, unsigned short *)+0xe0>
        121388:	e59d0008 	ldr	r0, [sp, #8]
        12138c:	eb65b915 	bl	1a8f7e8 <$DayName(long)>
        121390:	e1a03000 	mov	r3, r0
        121394:	e92d0008 	stmdb	sp!, {r3}
        121398:	e59d0008 	ldr	r0, [sp, #8]
        12139c:	eb65b911 	bl	1a8f7e8 <$DayName(long)>
        1213a0:	e1a03000 	mov	r3, r0
        1213a4:	e92d0008 	stmdb	sp!, {r3}
        1213a8:	e59d0008 	ldr	r0, [sp, #8]
        1213ac:	eb65b90d 	bl	1a8f7e8 <$DayName(long)>
        1213b0:	e1a05000 	mov	r5, r0
        1213b4:	e3a00009 	mov	r0, #9	; 0x9
        1213b8:	eb65a879 	bl	1a8b5a4 <$CalendarString(long)>
        1213bc:	e1a02000 	mov	r2, r0
        1213c0:	e1a00004 	mov	r0, r4
        1213c4:	e3a01063 	mov	r1, #99	; 0x63
        1213c8:	e1a03005 	mov	r3, r5
        1213cc:	eb6b2877 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        1213d0:	e28dd008 	add	sp, sp, #8	; 0x8
        1213d4:	eaffffcf 	b	121318 <EveryDayString(long, unsigned short *)+0xe0>
        1213d8:	e59d000c 	ldr	r0, [sp, #12]
        1213dc:	eb65b901 	bl	1a8f7e8 <$DayName(long)>
        1213e0:	e1a03000 	mov	r3, r0
        1213e4:	e92d0008 	stmdb	sp!, {r3}
        1213e8:	e59d000c 	ldr	r0, [sp, #12]
        1213ec:	eb65b8fd 	bl	1a8f7e8 <$DayName(long)>
        1213f0:	e1a03000 	mov	r3, r0
        1213f4:	e92d0008 	stmdb	sp!, {r3}
        1213f8:	e59d000c 	ldr	r0, [sp, #12]
        1213fc:	eb65b8f9 	bl	1a8f7e8 <$DayName(long)>
        121400:	e1a03000 	mov	r3, r0
        121404:	e92d0008 	stmdb	sp!, {r3}
        121408:	e59d000c 	ldr	r0, [sp, #12]
        12140c:	eb65b8f5 	bl	1a8f7e8 <$DayName(long)>
        121410:	e1a05000 	mov	r5, r0
        121414:	e3a0000a 	mov	r0, #10	; 0xa
        121418:	eb65a861 	bl	1a8b5a4 <$CalendarString(long)>
        12141c:	e1a02000 	mov	r2, r0
        121420:	e1a00004 	mov	r0, r4
        121424:	e3a01063 	mov	r1, #99	; 0x63
        121428:	e1a03005 	mov	r3, r5
        12142c:	eb6b285f 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        121430:	e28dd00c 	add	sp, sp, #12	; 0xc
        121434:	eaffffb7 	b	121318 <EveryDayString(long, unsigned short *)+0xe0>
        121438:	e59d0010 	ldr	r0, [sp, #16]
        12143c:	eb65b8e9 	bl	1a8f7e8 <$DayName(long)>
        121440:	e1a03000 	mov	r3, r0
        121444:	e92d0008 	stmdb	sp!, {r3}
        121448:	e59d0010 	ldr	r0, [sp, #16]
        12144c:	eb65b8e5 	bl	1a8f7e8 <$DayName(long)>
        121450:	e1a03000 	mov	r3, r0
        121454:	e92d0008 	stmdb	sp!, {r3}
        121458:	e59d0010 	ldr	r0, [sp, #16]
        12145c:	eb65b8e1 	bl	1a8f7e8 <$DayName(long)>
        121460:	e1a03000 	mov	r3, r0
        121464:	e92d0008 	stmdb	sp!, {r3}
        121468:	e59d0010 	ldr	r0, [sp, #16]
        12146c:	eb65b8dd 	bl	1a8f7e8 <$DayName(long)>
        121470:	e1a03000 	mov	r3, r0
        121474:	e92d0008 	stmdb	sp!, {r3}
        121478:	e59d0010 	ldr	r0, [sp, #16]
        12147c:	eb65b8d9 	bl	1a8f7e8 <$DayName(long)>
        121480:	e1a05000 	mov	r5, r0
        121484:	e3a0000b 	mov	r0, #11	; 0xb
        121488:	eb65a845 	bl	1a8b5a4 <$CalendarString(long)>
        12148c:	e1a02000 	mov	r2, r0
        121490:	e1a00004 	mov	r0, r4
        121494:	e3a01063 	mov	r1, #99	; 0x63
        121498:	e1a03005 	mov	r3, r5
        12149c:	eb6b2843 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        1214a0:	e28dd010 	add	sp, sp, #16	; 0x10
        1214a4:	eaffff9b 	b	121318 <EveryDayString(long, unsigned short *)+0xe0>
    */
}

/**
 * Symbol: EveryOtherWeekString(long, unsigned short *)
 * Address: 00121670
 */
EveryOtherWeekString(long, unsigned short *) {
    /*
        121670:	e1a0c00d 	mov	ip, sp
        121674:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        121678:	e24cb004 	sub	fp, ip, #4	; 0x4
        12167c:	e1a05000 	mov	r5, r0
        121680:	e1a04001 	mov	r4, r1
        121684:	e24dd028 	sub	sp, sp, #40	; 0x28
        121688:	e1a0000d 	mov	r0, sp
        12168c:	eb6b762a 	bl	1bfef3c <TDate::$__ct(void)>
        121690:	e1a00445 	mov	r0, r5, asr #8
        121694:	e0601200 	rsb	r1, r0, r0, lsl #4
        121698:	e0811081 	add	r1, r1, r1, lsl #1
        12169c:	e1a01281 	mov	r1, r1, lsl #5
        1216a0:	e1a0000d 	mov	r0, sp
        1216a4:	eb6b7629 	bl	1bfef50 <TDate::$InitWithMinutes(unsigned long)>
        1216a8:	e24dd0cc 	sub	sp, sp, #204	; 0xcc
        1216ac:	e59f0098 	ldr	r0, [pc, #98]	; 12174c <EveryOtherWeekString(long, unsigned short *)+0xdc>
        1216b0:	e5900000 	ldr	r0, [r0]
        1216b4:	e5901000 	ldr	r1, [r0]
        1216b8:	e59f0090 	ldr	r0, [pc, #90]	; 121750 <EveryOtherWeekString(long, unsigned short *)+0xe0>
        1216bc:	e5900000 	ldr	r0, [r0]
        1216c0:	e5900000 	ldr	r0, [r0]
        1216c4:	eb6a8ae5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1216c8:	e3100003 	tst	r0, #3	; 0x3
        1216cc:	01a00140 	moveq	r0, r0, asr #2
        1216d0:	0a000000 	beq	1216d8 <EveryOtherWeekString(long, unsigned short *)+0x68>
        1216d4:	eb6a8290 	bl	1bc211c <$_RINTError(long)>
        1216d8:	e1a05000 	mov	r5, r0
        1216dc:	e3a00002 	mov	r0, #2	; 0x2
        1216e0:	eb6a8299 	bl	1bc214c <$AllocateRefHandle(long)>
        1216e4:	e58d0000 	str	r0, [sp]
        1216e8:	e1a0300d 	mov	r3, sp
        1216ec:	e92d0008 	stmdb	sp!, {r3}
        1216f0:	e28d00d0 	add	r0, sp, #208	; 0xd0
        1216f4:	eb6b7a25 	bl	1bfff90 <TDate::$TotalMinutes( const(void))>
        1216f8:	e28d2008 	add	r2, sp, #8	; 0x8
        1216fc:	e1a01005 	mov	r1, r5
        121700:	e3a03064 	mov	r3, #100	; 0x64
        121704:	eb65e9a0 	bl	1a9bd8c <$LongDateString__FUlT1PUsT1RC6RefVar>
        121708:	e5bd0004 	ldr	r0, [sp, #4]!
        12170c:	eb6a86aa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121710:	e3a00006 	mov	r0, #6	; 0x6
        121714:	eb65a7a2 	bl	1a8b5a4 <$CalendarString(long)>
        121718:	e1a02000 	mov	r2, r0
        12171c:	e28d3004 	add	r3, sp, #4	; 0x4
        121720:	e1a00004 	mov	r0, r4
        121724:	e3a01063 	mov	r1, #99	; 0x63
        121728:	eb6b27a0 	bl	1beb5b0 <$ParamString(unsigned short *, long const, unsigned short const *,...)>
        12172c:	e28dd0cc 	add	sp, sp, #204	; 0xcc
        121730:	e59d0024 	ldr	r0, [sp, #36]
        121734:	eb6a86a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121738:	e59d0020 	ldr	r0, [sp, #32]
        12173c:	eb6a869e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121740:	e59d001c 	ldr	r0, [sp, #28]
        121744:	eb6a869c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        121748:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        12174c:	00683650 	rsbeq	r3, r8, r0, asr r6
        121750:	0067fa50 	rsbeq	pc, r7, r0, asr sl
    */
}

/**
 * Symbol: EXP(long)
 * Address: 00128a44
 */
EXP(long) {
    /*
        128a44:	e3700c05 	cmn	r0, #1280	; 0x500
        128a48:	d3a00000 	movle	r0, #0	; 0x0
        128a4c:	d1a0f00e 	movle	pc, lr
        128a50:	e1a0c00d 	mov	ip, sp
        128a54:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        128a58:	e24cb004 	sub	fp, ip, #4	; 0x4
        128a5c:	e1b01000 	movs	r1, r0
        128a60:	e3a00c01 	mov	r0, #256	; 0x100
        128a64:	591ba8f0 	ldmpldb	fp, {r4, r5, r6, r7, fp, sp, pc}
        128a68:	e081c181 	add	ip, r1, r1, lsl #3
        128a6c:	e08c1201 	add	r1, ip, r1, lsl #4
        128a70:	e1a01181 	mov	r1, r1, lsl #3
        128a74:	e2611000 	rsb	r1, r1, #0	; 0x0
        128a78:	e1a04441 	mov	r4, r1, asr #8
        128a7c:	e0415404 	sub	r5, r1, r4, lsl #8
        128a80:	e59f602c 	ldr	r6, [pc, #2c]	; 128ab4 <EXP(long)+0x70>
        128a84:	e7961084 	ldr	r1, [r6, r4, lsl #1]
        128a88:	e1a01841 	mov	r1, r1, asr #16
        128a8c:	e0400005 	sub	r0, r0, r5
        128a90:	eb682bbf 	bl	1b33994 <$FixMul32__FlT1>
        128a94:	e1a07000 	mov	r7, r0
        128a98:	e0860084 	add	r0, r6, r4, lsl #1
        128a9c:	e5901002 	ldr	r1, [r0, #2]
        128aa0:	e1a01841 	mov	r1, r1, asr #16
        128aa4:	e1a00005 	mov	r0, r5
        128aa8:	eb682bb9 	bl	1b33994 <$FixMul32__FlT1>
        128aac:	e0870000 	add	r0, r7, r0
        128ab0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        128ab4:	00378410 	eoreqs	r8, r7, r0, lsl r4
    */
}

/**
 * Symbol: ExpandPackedInkWordInfo(PackedInkWordInfo *, InkWordInfo *)
 * Address: 001400ac
 */
ExpandPackedInkWordInfo(PackedInkWordInfo *, InkWordInfo *) {
    /*
        1400ac:	e1a0c00d 	mov	ip, sp
        1400b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1400b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1400b8:	e1a04001 	mov	r4, r1
        1400bc:	e5901000 	ldr	r1, [r0]
        1400c0:	e1a01b21 	mov	r1, r1, lsr #22
        1400c4:	e5841000 	str	r1, [r4]
        1400c8:	e3a01b01 	mov	r1, #1024	; 0x400
        1400cc:	e2411001 	sub	r1, r1, #1	; 0x1
        1400d0:	e5902000 	ldr	r2, [r0]
        1400d4:	e0012622 	and	r2, r1, r2, lsr #12
        1400d8:	e5842004 	str	r2, [r4, #4]
        1400dc:	e5902000 	ldr	r2, [r0]
        1400e0:	e0011122 	and	r1, r1, r2, lsr #2
        1400e4:	e5841008 	str	r1, [r4, #8]
        1400e8:	e5901000 	ldr	r1, [r0]
        1400ec:	e2011003 	and	r1, r1, #3	; 0x3
        1400f0:	e2811001 	add	r1, r1, #1	; 0x1
        1400f4:	e5841018 	str	r1, [r4, #24]
        1400f8:	e5901004 	ldr	r1, [r0, #4]
        1400fc:	e1a01b21 	mov	r1, r1, lsr #22
        140100:	e584100c 	str	r1, [r4, #12]
        140104:	e5901004 	ldr	r1, [r0, #4]
        140108:	e1a01501 	mov	r1, r1, lsl #10
        14010c:	e1a01521 	mov	r1, r1, lsr #10
        140110:	e3c1103f 	bic	r1, r1, #63	; 0x3f
        140114:	e1a05101 	mov	r5, r1, lsl #2
        140118:	e5845014 	str	r5, [r4, #20]
        14011c:	e5900004 	ldr	r0, [r0, #4]
        140120:	e200003f 	and	r0, r0, #63	; 0x3f
        140124:	eb65ca0d 	bl	1ab2960 <$GetQDFace(unsigned long)>
        140128:	e5840010 	str	r0, [r4, #16]
        14012c:	e594000c 	ldr	r0, [r4, #12]
        140130:	eb6641bf 	bl	1ad0834 <$GetInkWordFontSize(unsigned long)>
        140134:	e584001c 	str	r0, [r4, #28]
        140138:	e1a00800 	mov	r0, r0, lsl #16
        14013c:	e1a01005 	mov	r1, r5
        140140:	eb6a83df 	bl	1be10c4 <$FixedMultiply>
        140144:	e2800902 	add	r0, r0, #32768	; 0x8000
        140148:	e1a00840 	mov	r0, r0, asr #16
        14014c:	e1a00800 	mov	r0, r0, lsl #16
        140150:	e1a00840 	mov	r0, r0, asr #16
        140154:	e5840020 	str	r0, [r4, #32]
        140158:	eb666f1a 	bl	1adbdc8 <$GetStdInkWordPenWidth(unsigned long)>
        14015c:	e5840024 	str	r0, [r4, #36]
        140160:	e5940000 	ldr	r0, [r4]
        140164:	e1a00800 	mov	r0, r0, lsl #16
        140168:	e1a01005 	mov	r1, r5
        14016c:	eb6a83d4 	bl	1be10c4 <$FixedMultiply>
        140170:	e2800902 	add	r0, r0, #32768	; 0x8000
        140174:	e1a00840 	mov	r0, r0, asr #16
        140178:	e1a01800 	mov	r1, r0, lsl #16
        14017c:	e5940024 	ldr	r0, [r4, #36]
        140180:	e0800841 	add	r0, r0, r1, asr #16
        140184:	e5840028 	str	r0, [r4, #40]
        140188:	e5940004 	ldr	r0, [r4, #4]
        14018c:	e1a00800 	mov	r0, r0, lsl #16
        140190:	e5941008 	ldr	r1, [r4, #8]
        140194:	e0800801 	add	r0, r0, r1, lsl #16
        140198:	e1a01005 	mov	r1, r5
        14019c:	eb6a83c8 	bl	1be10c4 <$FixedMultiply>
        1401a0:	e2800902 	add	r0, r0, #32768	; 0x8000
        1401a4:	e1a00840 	mov	r0, r0, asr #16
        1401a8:	e1a00800 	mov	r0, r0, lsl #16
        1401ac:	e5941024 	ldr	r1, [r4, #36]
        1401b0:	e0810840 	add	r0, r1, r0, asr #16
        1401b4:	e584002c 	str	r0, [r4, #44]
        1401b8:	e5940004 	ldr	r0, [r4, #4]
        1401bc:	e1a00800 	mov	r0, r0, lsl #16
        1401c0:	e1a01005 	mov	r1, r5
        1401c4:	eb6a83be 	bl	1be10c4 <$FixedMultiply>
        1401c8:	e2800902 	add	r0, r0, #32768	; 0x8000
        1401cc:	e1a00840 	mov	r0, r0, asr #16
        1401d0:	e1a00800 	mov	r0, r0, lsl #16
        1401d4:	e5941024 	ldr	r1, [r4, #36]
        1401d8:	e0810840 	add	r0, r1, r0, asr #16
        1401dc:	e5840030 	str	r0, [r4, #48]
        1401e0:	e594000c 	ldr	r0, [r4, #12]
        1401e4:	e1a00800 	mov	r0, r0, lsl #16
        1401e8:	e1a01005 	mov	r1, r5
        1401ec:	eb6a83b4 	bl	1be10c4 <$FixedMultiply>
        1401f0:	e2800902 	add	r0, r0, #32768	; 0x8000
        1401f4:	e1a00840 	mov	r0, r0, asr #16
        1401f8:	e1a00800 	mov	r0, r0, lsl #16
        1401fc:	e1a00840 	mov	r0, r0, asr #16
        140200:	e5840034 	str	r0, [r4, #52]
        140204:	e5940008 	ldr	r0, [r4, #8]
        140208:	e1a00800 	mov	r0, r0, lsl #16
        14020c:	e1a01005 	mov	r1, r5
        140210:	eb6a83ab 	bl	1be10c4 <$FixedMultiply>
        140214:	e2800902 	add	r0, r0, #32768	; 0x8000
        140218:	e1a00840 	mov	r0, r0, asr #16
        14021c:	e1a00800 	mov	r0, r0, lsl #16
        140220:	e1a00840 	mov	r0, r0, asr #16
        140224:	e5a40038 	str	r0, [r4, #56]!
        140228:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ExpireUsingCommand(TUnitPublic **)
 * Address: 00145030
 */
ExpireUsingCommand(TUnitPublic **) {
    /*
        145030:	e1a0c00d 	mov	ip, sp
        145034:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        145038:	e24cb004 	sub	fp, ip, #4	; 0x4
        14503c:	e1a04000 	mov	r4, r0
        145040:	e5900000 	ldr	r0, [r0]
        145044:	e3a01402 	mov	r1, #33554432	; 0x2000000
        145048:	e2411c02 	sub	r1, r1, #512	; 0x200
        14504c:	eb65b21b 	bl	1ab18c0 <TUnitPublic::$FindView(unsigned long)>
        145050:	e1b05000 	movs	r5, r0
        145054:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        145058:	e24dd004 	sub	sp, sp, #4	; 0x4
        14505c:	e5950008 	ldr	r0, [r5, #8]
        145060:	e3c014fe 	bic	r1, r0, #-33554432	; 0xfe000000
        145064:	e3c110ff 	bic	r1, r1, #255	; 0xff
        145068:	e1a00005 	mov	r0, r5
        14506c:	eb65910c 	bl	1aa94a4 <$BuildRecConfig(TView *, unsigned long)>
        145070:	eb69f435 	bl	1bc214c <$AllocateRefHandle(long)>
        145074:	e58d0000 	str	r0, [sp]
        145078:	e59f10d8 	ldr	r1, [pc, #d8]	; 145158 <ExpireUsingCommand(TUnitPublic **)+0x128>
        14507c:	e1a0000d 	mov	r0, sp
        145080:	e3a03000 	mov	r3, #0	; 0x0
        145084:	e3a02000 	mov	r2, #0	; 0x0
        145088:	eb69fc79 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        14508c:	e41d1010 	ldr	r1, [sp], -#16
        145090:	e5810000 	str	r0, [r1]
        145094:	e3300002 	teq	r0, #2	; 0x2
        145098:	03a00015 	moveq	r0, #21	; 0x15
        14509c:	13a00018 	movne	r0, #24	; 0x18
        1450a0:	e1a01005 	mov	r1, r5
        1450a4:	e3a02000 	mov	r2, #0	; 0x0
        1450a8:	eb6584a4 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        1450ac:	eb69f426 	bl	1bc214c <$AllocateRefHandle(long)>
        1450b0:	e58d000c 	str	r0, [sp, #12]
        1450b4:	e28d1004 	add	r1, sp, #4	; 0x4
        1450b8:	e1a00004 	mov	r0, r4
        1450bc:	eb65d726 	bl	1abad5c <$StrokeBundle(TUnitPublic **, TRect *)>
        1450c0:	eb69f421 	bl	1bc214c <$AllocateRefHandle(long)>
        1450c4:	e58d0000 	str	r0, [sp]
        1450c8:	e1a0100d 	mov	r1, sp
        1450cc:	e28d000c 	add	r0, sp, #12	; 0xc
        1450d0:	eb6584a3 	bl	1aa6364 <$CommandSetFrameParameter__FRC6RefVarT1>
        1450d4:	e59f0080 	ldr	r0, [pc, #80]	; 14515c <ExpireUsingCommand(TUnitPublic **)+0x12c>
        1450d8:	e5900000 	ldr	r0, [r0]
        1450dc:	e28d100c 	add	r1, sp, #12	; 0xc
        1450e0:	eb652dd4 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        1450e4:	e28d0004 	add	r0, sp, #4	; 0x4
        1450e8:	eb03a34f 	bl	22de2c <AdjustForInk(TRect *)>
        1450ec:	e28d1004 	add	r1, sp, #4	; 0x4
        1450f0:	e59f0068 	ldr	r0, [pc, #68]	; 145160 <ExpireUsingCommand(TUnitPublic **)+0x130>
        1450f4:	e5900000 	ldr	r0, [r0]
        1450f8:	eb65782d 	bl	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
        1450fc:	e59f7060 	ldr	r7, [pc, #60]	; 145164 <ExpireUsingCommand(TUnitPublic **)+0x134>
        145100:	e3a0a000 	mov	sl, #0	; 0x0
        145104:	e5970000 	ldr	r0, [r7]
        145108:	e3500000 	cmp	r0, #0	; 0x0
        14510c:	da000037 	ble	1451f0 <ExpireUsingCommand(TUnitPublic **)+0x1c0>
        145110:	e59f5050 	ldr	r5, [pc, #50]	; 145168 <ExpireUsingCommand(TUnitPublic **)+0x138>
        145114:	e5950000 	ldr	r0, [r5]
        145118:	e3100001 	tst	r0, #1	; 0x1
        14511c:	0a000033 	beq	1451f0 <ExpireUsingCommand(TUnitPublic **)+0x1c0>
        145120:	e59f0044 	ldr	r0, [pc, #44]	; 14516c <ExpireUsingCommand(TUnitPublic **)+0x13c>
        145124:	e1a08000 	mov	r8, r0
        145128:	eb654675 	bl	1a96b04 <$GetPreference(RefVar const &)>
        14512c:	eb69f406 	bl	1bc214c <$AllocateRefHandle(long)>
        145130:	e1a04000 	mov	r4, r0
        145134:	e5900000 	ldr	r0, [r0]
        145138:	e2001003 	and	r1, r0, #3	; 0x3
        14513c:	e3510000 	cmp	r1, #0	; 0x0
        145140:	1a00000a 	bne	145170 <ExpireUsingCommand(TUnitPublic **)+0x140>
        145144:	01a00140 	moveq	r0, r0, asr #2
        145148:	0a000000 	beq	145150 <ExpireUsingCommand(TUnitPublic **)+0x120>
        14514c:	eb69f3f2 	bl	1bc211c <$_RINTError(long)>
        145150:	e1a09000 	mov	r9, r0
        145154:	ea000006 	b	145174 <ExpireUsingCommand(TUnitPublic **)+0x144>
        145158:	00682a38 	rsbeq	r2, r8, r8, lsr sl
        14515c:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        145160:	0c101934 	ldceq	9, cr1, [r0], -#208
        145164:	0c104f78 	ldceq	15, cr4, [r0], -#480
        145168:	0c101688 	ldceq	6, cr1, [r0], -#544
        14516c:	00683490 	streqb	r3, [r8], -#64
        145170:	e3a09000 	mov	r9, #0	; 0x0
        145174:	eb65677b 	bl	1a9ef68 <$RealClock(void)>
        145178:	e1a01000 	mov	r1, r0
        14517c:	e3a00e5a 	mov	r0, #1440	; 0x5a0
        145180:	eb69b5f0 	bl	1bb2948 <$__rt_udiv>
        145184:	e1a06000 	mov	r6, r0
        145188:	e1500009 	cmp	r0, r9
        14518c:	9a000014 	bls	1451e4 <ExpireUsingCommand(TUnitPublic **)+0x1b4>
        145190:	e24dd008 	sub	sp, sp, #8	; 0x8
        145194:	e5950000 	ldr	r0, [r5]
        145198:	e3100002 	tst	r0, #2	; 0x2
        14519c:	03a0001a 	moveq	r0, #26	; 0x1a
        1451a0:	13a00002 	movne	r0, #2	; 0x2
        1451a4:	eb69f3e8 	bl	1bc214c <$AllocateRefHandle(long)>
        1451a8:	e58d0000 	str	r0, [sp]
        1451ac:	e1a0100d 	mov	r1, sp
        1451b0:	e59f0054 	ldr	r0, [pc, #54]	; 14520c <ExpireUsingCommand(TUnitPublic **)+0x1dc>
        1451b4:	eb6aeb99 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
        1451b8:	e59d0000 	ldr	r0, [sp]
        1451bc:	eb69f7fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1451c0:	e1a00106 	mov	r0, r6, lsl #2
        1451c4:	eb69f3e0 	bl	1bc214c <$AllocateRefHandle(long)>
        1451c8:	e58d0004 	str	r0, [sp, #4]
        1451cc:	e28d1004 	add	r1, sp, #4	; 0x4
        1451d0:	e1a00008 	mov	r0, r8
        1451d4:	eb6573d6 	bl	1aa2134 <$SetPreference__FRC6RefVarT1>
        1451d8:	e59d0004 	ldr	r0, [sp, #4]
        1451dc:	eb69f7f6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1451e0:	e28dd008 	add	sp, sp, #8	; 0x8
        1451e4:	e1a00004 	mov	r0, r4
        1451e8:	e587a000 	str	sl, [r7]
        1451ec:	eb69f7f2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1451f0:	e59d0000 	ldr	r0, [sp]
        1451f4:	eb69f7f0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1451f8:	e59d000c 	ldr	r0, [sp, #12]
        1451fc:	eb69f7ee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        145200:	e5bd0010 	ldr	r0, [sp, #16]!
        145204:	eb69f7ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        145208:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        14520c:	00684188 	rsbeq	r4, r8, r8, lsl #3
    */
}

/**
 * Symbol: ErrorNotify__FlT1
 * Address: 001465a4
 */
void globals::ErrorNotify() {
    /*
        1465a4:	e1a0c00d 	mov	ip, sp
        1465a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1465ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1465b0:	e1a04000 	mov	r4, r0
        1465b4:	e1a05001 	mov	r5, r1
        1465b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1465bc:	e3a00003 	mov	r0, #3	; 0x3
        1465c0:	eb6555f5 	bl	1a9bd9c <$MakeArray(long)>
        1465c4:	eb69eee0 	bl	1bc214c <$AllocateRefHandle(long)>
        1465c8:	e58d0000 	str	r0, [sp]
        1465cc:	e1a00105 	mov	r0, r5, lsl #2
        1465d0:	eb69eedd 	bl	1bc214c <$AllocateRefHandle(long)>
        1465d4:	e1a05000 	mov	r5, r0
        1465d8:	e3a01000 	mov	r1, #0	; 0x0
        1465dc:	e5902000 	ldr	r2, [r0]
        1465e0:	e59d0000 	ldr	r0, [sp]
        1465e4:	e5900000 	ldr	r0, [r0]
        1465e8:	eb69ff5a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1465ec:	e1a00005 	mov	r0, r5
        1465f0:	eb69f2f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1465f4:	e1a00104 	mov	r0, r4, lsl #2
        1465f8:	eb69eed3 	bl	1bc214c <$AllocateRefHandle(long)>
        1465fc:	e1a04000 	mov	r4, r0
        146600:	e3a01001 	mov	r1, #1	; 0x1
        146604:	e5902000 	ldr	r2, [r0]
        146608:	e59d0000 	ldr	r0, [sp]
        14660c:	e5900000 	ldr	r0, [r0]
        146610:	eb69ff50 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        146614:	e1a00004 	mov	r0, r4
        146618:	eb69f2e7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14661c:	e59f001c 	ldr	r0, [pc, #1c]	; 146640 <ErrorNotify__FlT1+0x9c>
        146620:	e5900000 	ldr	r0, [r0]
        146624:	e2800024 	add	r0, r0, #36	; 0x24
        146628:	e1a0200d 	mov	r2, sp
        14662c:	e59f1010 	ldr	r1, [pc, #10]	; 146644 <ErrorNotify__FlT1+0xa0>
        146630:	eb69f2e7 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        146634:	e59d0000 	ldr	r0, [sp]
        146638:	eb69f2df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        14663c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        146640:	0c101934 	ldceq	9, cr1, [r0], -#208
        146644:	00683aa8 	rsbeq	r3, r8, r8, lsr #21
    */
}

/**
 * Symbol: ExceptionNotify(Exception *)
 * Address: 001468d4
 */
ExceptionNotify(Exception *) {
    /*
        1468d4:	e1a0c00d 	mov	ip, sp
        1468d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1468dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1468e0:	e1a04000 	mov	r4, r0
        1468e4:	e3a00b01 	mov	r0, #1024	; 0x400
        1468e8:	eb6a6e14 	bl	1be2140 <$NewPtr>
        1468ec:	e1b05000 	movs	r5, r0
        1468f0:	1a000005 	bne	14690c <ExceptionNotify(Exception *)+0x38>
        1468f4:	e59f007c 	ldr	r0, [pc, #7c]	; 146978 <ExceptionNotify(Exception *)+0xa4>
        1468f8:	e5900000 	ldr	r0, [r0]
        1468fc:	e3a02000 	mov	r2, #0	; 0x0
        146900:	e3a010e9 	mov	r1, #233	; 0xe9
        146904:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        146908:	eb6a7223 	bl	1be319c <$Throw>
        14690c:	e1a00005 	mov	r0, r5
        146910:	eb6a69e7 	bl	1be10b4 <$DisposPtr>
        146914:	e3a00c01 	mov	r0, #256	; 0x100
        146918:	eb65551f 	bl	1a9bd9c <$MakeArray(long)>
        14691c:	eb69ee0a 	bl	1bc214c <$AllocateRefHandle(long)>
        146920:	e1a06000 	mov	r6, r0
        146924:	e3a05002 	mov	r5, #2	; 0x2
        146928:	e5805000 	str	r5, [r0]
        14692c:	e24dd008 	sub	sp, sp, #8	; 0x8
        146930:	e1a00004 	mov	r0, r4
        146934:	eb667650 	bl	1ae427c <$GetExceptionErr(Exception *)>
        146938:	e1a07000 	mov	r7, r0
        14693c:	e1a00005 	mov	r0, r5
        146940:	eb69ee01 	bl	1bc214c <$AllocateRefHandle(long)>
        146944:	e58d0004 	str	r0, [sp, #4]
        146948:	e1a00005 	mov	r0, r5
        14694c:	eb69edfe 	bl	1bc214c <$AllocateRefHandle(long)>
        146950:	e40d0018 	str	r0, [sp], -#24
        146954:	e59f0020 	ldr	r0, [pc, #20]	; 14697c <ExceptionNotify(Exception *)+0xa8>
        146958:	e5901000 	ldr	r1, [r0]
        14695c:	e5940000 	ldr	r0, [r4]
        146960:	eb6a720b 	bl	1be3194 <$Subexception>
        146964:	e3300000 	teq	r0, #0	; 0x0
        146968:	0a000004 	beq	146980 <ExceptionNotify(Exception *)+0xac>
        14696c:	e5940004 	ldr	r0, [r4, #4]
        146970:	eb69fa56 	bl	1bc52d0 <$MakeString(char const *)>
        146974:	ea000016 	b	1469d4 <ExceptionNotify(Exception *)+0x100>
        146978:	00371318 	eoreqs	r1, r7, r8, lsl r3
        14697c:	003712ac 	eoreqs	r1, r7, ip, lsr #5
        146980:	e59f0150 	ldr	r0, [pc, #150]	; 146ad8 <ExceptionNotify(Exception *)+0x204>
        146984:	e5901000 	ldr	r1, [r0]
        146988:	e5940000 	ldr	r0, [r4]
        14698c:	eb6a7200 	bl	1be3194 <$Subexception>
        146990:	e3300000 	teq	r0, #0	; 0x0
        146994:	0a000010 	beq	1469dc <ExceptionNotify(Exception *)+0x108>
        146998:	e5940004 	ldr	r0, [r4, #4]
        14699c:	e5900000 	ldr	r0, [r0]
        1469a0:	e5900000 	ldr	r0, [r0]
        1469a4:	e59d1018 	ldr	r1, [sp, #24]
        1469a8:	e5810000 	str	r0, [r1]
        1469ac:	e28d0018 	add	r0, sp, #24	; 0x18
        1469b0:	eb6ab3f6 	bl	1bf3990 <$IsFrame(RefVar const &)>
        1469b4:	e3300000 	teq	r0, #0	; 0x0
        1469b8:	0a000007 	beq	1469dc <ExceptionNotify(Exception *)+0x108>
        1469bc:	e59f0118 	ldr	r0, [pc, #118]	; 146adc <ExceptionNotify(Exception *)+0x208>
        1469c0:	e5900000 	ldr	r0, [r0]
        1469c4:	e5901000 	ldr	r1, [r0]
        1469c8:	e59d0018 	ldr	r0, [sp, #24]
        1469cc:	e5900000 	ldr	r0, [r0]
        1469d0:	eb69f622 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1469d4:	e59d101c 	ldr	r1, [sp, #28]
        1469d8:	e5810000 	str	r0, [r1]
        1469dc:	e5940000 	ldr	r0, [r4]
        1469e0:	eb69fa3a 	bl	1bc52d0 <$MakeString(char const *)>
        1469e4:	eb69edd8 	bl	1bc214c <$AllocateRefHandle(long)>
        1469e8:	e58d0000 	str	r0, [sp]
        1469ec:	e1a0400d 	mov	r4, sp
        1469f0:	e59f50e8 	ldr	r5, [pc, #e8]	; 146ae0 <ExceptionNotify(Exception *)+0x20c>
        1469f4:	e5950000 	ldr	r0, [r5]
        1469f8:	eb69edd3 	bl	1bc214c <$AllocateRefHandle(long)>
        1469fc:	e58d0004 	str	r0, [sp, #4]
        146a00:	e28d0004 	add	r0, sp, #4	; 0x4
        146a04:	e59f10d8 	ldr	r1, [pc, #d8]	; 146ae4 <ExceptionNotify(Exception *)+0x210>
        146a08:	e1a02004 	mov	r2, r4
        146a0c:	eb69fe55 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        146a10:	e59d0000 	ldr	r0, [sp]
        146a14:	eb69f1e8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146a18:	e59d0004 	ldr	r0, [sp, #4]
        146a1c:	eb69f1e6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146a20:	e5950000 	ldr	r0, [r5]
        146a24:	eb69edc8 	bl	1bc214c <$AllocateRefHandle(long)>
        146a28:	e58d0008 	str	r0, [sp, #8]
        146a2c:	e28d0008 	add	r0, sp, #8	; 0x8
        146a30:	e28d201c 	add	r2, sp, #28	; 0x1c
        146a34:	e59f10ac 	ldr	r1, [pc, #ac]	; 146ae8 <ExceptionNotify(Exception *)+0x214>
        146a38:	eb69fe4a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        146a3c:	e59d0008 	ldr	r0, [sp, #8]
        146a40:	eb69f1dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146a44:	e1a00107 	mov	r0, r7, lsl #2
        146a48:	eb69edbf 	bl	1bc214c <$AllocateRefHandle(long)>
        146a4c:	e58d000c 	str	r0, [sp, #12]
        146a50:	e28d400c 	add	r4, sp, #12	; 0xc
        146a54:	e5950000 	ldr	r0, [r5]
        146a58:	eb69edbb 	bl	1bc214c <$AllocateRefHandle(long)>
        146a5c:	e58d0010 	str	r0, [sp, #16]
        146a60:	e28d0010 	add	r0, sp, #16	; 0x10
        146a64:	e59f1080 	ldr	r1, [pc, #80]	; 146aec <ExceptionNotify(Exception *)+0x218>
        146a68:	e1a02004 	mov	r2, r4
        146a6c:	eb69fe3d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        146a70:	e59d000c 	ldr	r0, [sp, #12]
        146a74:	eb69f1d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146a78:	e59d0010 	ldr	r0, [sp, #16]
        146a7c:	eb69f1ce 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146a80:	e5950000 	ldr	r0, [r5]
        146a84:	eb69edb0 	bl	1bc214c <$AllocateRefHandle(long)>
        146a88:	e58d0014 	str	r0, [sp, #20]
        146a8c:	e28d0014 	add	r0, sp, #20	; 0x14
        146a90:	e28d2018 	add	r2, sp, #24	; 0x18
        146a94:	e59f1054 	ldr	r1, [pc, #54]	; 146af0 <ExceptionNotify(Exception *)+0x21c>
        146a98:	eb69fe32 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        146a9c:	e59d0014 	ldr	r0, [sp, #20]
        146aa0:	eb69f1c5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146aa4:	e59f0048 	ldr	r0, [pc, #48]	; 146af4 <ExceptionNotify(Exception *)+0x220>
        146aa8:	eb6aa33f 	bl	1bef7ac <$SetPort(GrafPort *)>
        146aac:	eb6812c9 	bl	1b4b5d8 <$ReleaseScreenLock(void)>
        146ab0:	e1a00007 	mov	r0, r7
        146ab4:	e3a01003 	mov	r1, #3	; 0x3
        146ab8:	eb650a7b 	bl	1a894ac <$ActionErrorNotify__FlT1>
        146abc:	e5bd0018 	ldr	r0, [sp, #24]!
        146ac0:	eb69f1bd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146ac4:	e59d0004 	ldr	r0, [sp, #4]
        146ac8:	eb69f1bb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146acc:	e1a00006 	mov	r0, r6
        146ad0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        146ad4:	ea69f1b8 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146ad8:	00380880 	eoreqs	r0, r8, r0, lsl #17
        146adc:	00683840 	rsbeq	r3, r8, r0, asr #16
        146ae0:	0c10180c 	ldceq	8, cr1, [r0], -#48
        146ae4:	00683450 	rsbeq	r3, r8, r0, asr r4
        146ae8:	00683468 	rsbeq	r3, r8, r8, ror #8
        146aec:	00683460 	rsbeq	r3, r8, r0, ror #8
        146af0:	00683458 	rsbeq	r3, r8, r8, asr r4
        146af4:	0c1067cc 	ldceq	7, cr6, [r0], -#816
    */
}

/**
 * Symbol: EndStroke(_EXPAND_PARAMS *)
 * Address: 00153d94
 */
EndStroke(_EXPAND_PARAMS *) {
    /*
        153d94:	e1a0c00d 	mov	ip, sp
        153d98:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        153d9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        153da0:	e1a04000 	mov	r4, r0
        153da4:	e5d00020 	ldrb	r0, [r0, #32]
        153da8:	e3300000 	teq	r0, #0	; 0x0
        153dac:	0a000003 	beq	153dc0 <EndStroke(_EXPAND_PARAMS *)+0x2c>
        153db0:	e594001c 	ldr	r0, [r4, #28]
        153db4:	e3300000 	teq	r0, #0	; 0x0
        153db8:	1b685dfe 	blne	1b6b5b8 <TStroke::$EndStroke(void)>
        153dbc:	ea00000a 	b	153dec <EndStroke(_EXPAND_PARAMS *)+0x58>
        153dc0:	e5940018 	ldr	r0, [r4, #24]
        153dc4:	e3300008 	teq	r0, #8	; 0x8
        153dc8:	1a000004 	bne	153de0 <EndStroke(_EXPAND_PARAMS *)+0x4c>
        153dcc:	e5940010 	ldr	r0, [r4, #16]
        153dd0:	e5900000 	ldr	r0, [r0]
        153dd4:	e8900006 	ldmia	r0, {r1, r2}
        153dd8:	e1a00004 	mov	r0, r4
        153ddc:	eb00000b 	bl	153e10 <AddStrokePoint__FP14_EXPAND_PARAMSlT2>
        153de0:	e5940010 	ldr	r0, [r4, #16]
        153de4:	e5941018 	ldr	r1, [r4, #24]
        153de8:	eb6a38e3 	bl	1be217c <$SetHandleSize>
        153dec:	e5940028 	ldr	r0, [r4, #40]
        153df0:	e2800001 	add	r0, r0, #1	; 0x1
        153df4:	e5840028 	str	r0, [r4, #40]
        153df8:	e1a01000 	mov	r1, r0
        153dfc:	e3500064 	cmp	r0, #100	; 0x64
        153e00:	b3a00000 	movlt	r0, #0	; 0x0
        153e04:	b5b42024 	ldrlt	r2, [r4, #36]!
        153e08:	b7820101 	strlt	r0, [r2, r1, lsl #2]
        153e0c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: Enum_fcn9CB__FUlN31
 * Address: 00168994
 */
void globals::Enum_fcn9CB() {
    /*
        168994:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        168998:	e201e0ff 	and	lr, r1, #255	; 0xff
        16899c:	e590c020 	ldr	ip, [r0, #32]
        1689a0:	e08ee08e 	add	lr, lr, lr, lsl #1
        1689a4:	e08cc10e 	add	ip, ip, lr, lsl #2
        1689a8:	e5d0e024 	ldrb	lr, [r0, #36]
        1689ac:	e1a04000 	mov	r4, r0
        1689b0:	e1e00fa2 	mvn	r0, r2, lsr #31
        1689b4:	e0000f22 	and	r0, r0, r2, lsr #30
        1689b8:	e2800002 	add	r0, r0, #2	; 0x2
        1689bc:	e20000ff 	and	r0, r0, #255	; 0xff
        1689c0:	e1a062a1 	mov	r6, r1, lsr #5
        1689c4:	e7945106 	ldr	r5, [r4, r6, lsl #2]
        1689c8:	e201701f 	and	r7, r1, #31	; 0x1f
        1689cc:	e3a01102 	mov	r1, #-2147483648	; 0x80000000
        1689d0:	e1a01731 	mov	r1, r1, lsr r7
        1689d4:	e1150001 	tst	r5, r1
        1689d8:	e20330ff 	and	r3, r3, #255	; 0xff
        1689dc:	e3c22103 	bic	r2, r2, #-1073741824	; 0xc0000000
        1689e0:	1a000006 	bne	168a00 <Enum_fcn9CB__FUlN31+0x6c>
        1689e4:	e1851001 	orr	r1, r5, r1
        1689e8:	e7841106 	str	r1, [r4, r6, lsl #2]
        1689ec:	e5cc0001 	strb	r0, [ip, #1]
        1689f0:	e5cc3002 	strb	r3, [ip, #2]
        1689f4:	e5cce003 	strb	lr, [ip, #3]
        1689f8:	e5ac2004 	str	r2, [ip, #4]!
        1689fc:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        168a00:	e3a01003 	mov	r1, #3	; 0x3
        168a04:	e3500004 	cmp	r0, #4	; 0x4
        168a08:	aa000005 	bge	168a24 <Enum_fcn9CB__FUlN31+0x90>
        168a0c:	e5dc4001 	ldrb	r4, [ip, #1]
        168a10:	e3340004 	teq	r4, #4	; 0x4
        168a14:	05cce003 	streqb	lr, [ip, #3]
        168a18:	058c2004 	streq	r2, [ip, #4]
        168a1c:	05cc1001 	streqb	r1, [ip, #1]
        168a20:	08bd80f0 	ldmeqia	sp!, {r4, r5, r6, r7, pc}
        168a24:	e5dc2003 	ldrb	r2, [ip, #3]
        168a28:	e3500004 	cmp	r0, #4	; 0x4
        168a2c:	a3a0e000 	movge	lr, #0	; 0x0
        168a30:	e182200e 	orr	r2, r2, lr
        168a34:	e5cc2003 	strb	r2, [ip, #3]
        168a38:	e3500003 	cmp	r0, #3	; 0x3
        168a3c:	b8bd80f0 	ldmltia	sp!, {r4, r5, r6, r7, pc}
        168a40:	e5dc0001 	ldrb	r0, [ip, #1]
        168a44:	e3300002 	teq	r0, #2	; 0x2
        168a48:	05cc1001 	streqb	r1, [ip, #1]
        168a4c:	05cc3002 	streqb	r3, [ip, #2]
        168a50:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: EqualStyles__FRC6RefVarT1
 * Address: 0016fa08
 */
void globals::EqualStyles() {
    /*
        16fa08:	e1a0c00d 	mov	ip, sp
        16fa0c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        16fa10:	e24cb004 	sub	fp, ip, #4	; 0x4
        16fa14:	e1a05000 	mov	r5, r0
        16fa18:	e1a04001 	mov	r4, r1
        16fa1c:	eb6a0fdb 	bl	1bf3990 <$IsFrame(RefVar const &)>
        16fa20:	e3300000 	teq	r0, #0	; 0x0
        16fa24:	0a000058 	beq	16fb8c <EqualStyles__FRC6RefVarT1+0x184>
        16fa28:	e1a00004 	mov	r0, r4
        16fa2c:	eb6a0fd7 	bl	1bf3990 <$IsFrame(RefVar const &)>
        16fa30:	e3300000 	teq	r0, #0	; 0x0
        16fa34:	0a000054 	beq	16fb8c <EqualStyles__FRC6RefVarT1+0x184>
        16fa38:	e59f6140 	ldr	r6, [pc, #140]	; 16fb80 <EqualStyles__FRC6RefVarT1+0x178>
        16fa3c:	e5960000 	ldr	r0, [r6]
        16fa40:	e5901000 	ldr	r1, [r0]
        16fa44:	e5950000 	ldr	r0, [r5]
        16fa48:	e5900000 	ldr	r0, [r0]
        16fa4c:	eb695203 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        16fa50:	eb6949bd 	bl	1bc214c <$AllocateRefHandle(long)>
        16fa54:	e1a07000 	mov	r7, r0
        16fa58:	e5960000 	ldr	r0, [r6]
        16fa5c:	e5901000 	ldr	r1, [r0]
        16fa60:	e5940000 	ldr	r0, [r4]
        16fa64:	e5900000 	ldr	r0, [r0]
        16fa68:	eb6951fc 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        16fa6c:	eb6949b6 	bl	1bc214c <$AllocateRefHandle(long)>
        16fa70:	e1a08000 	mov	r8, r0
        16fa74:	e5901000 	ldr	r1, [r0]
        16fa78:	e5970000 	ldr	r0, [r7]
        16fa7c:	eb6951eb 	bl	1bc4230 <$EQRef__FlT1>
        16fa80:	e1b06000 	movs	r6, r0
        16fa84:	13a06001 	movne	r6, #1	; 0x1
        16fa88:	e1a00008 	mov	r0, r8
        16fa8c:	eb694dca 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fa90:	e3a08000 	mov	r8, #0	; 0x0
        16fa94:	e1a00007 	mov	r0, r7
        16fa98:	eb694dc7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fa9c:	e3360000 	teq	r6, #0	; 0x0
        16faa0:	0a000034 	beq	16fb78 <EqualStyles__FRC6RefVarT1+0x170>
        16faa4:	e59f60d8 	ldr	r6, [pc, #d8]	; 16fb84 <EqualStyles__FRC6RefVarT1+0x17c>
        16faa8:	e5960000 	ldr	r0, [r6]
        16faac:	e5901000 	ldr	r1, [r0]
        16fab0:	e5950000 	ldr	r0, [r5]
        16fab4:	e5900000 	ldr	r0, [r0]
        16fab8:	eb6951e8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        16fabc:	eb6949a2 	bl	1bc214c <$AllocateRefHandle(long)>
        16fac0:	e1a07000 	mov	r7, r0
        16fac4:	e5960000 	ldr	r0, [r6]
        16fac8:	e5901000 	ldr	r1, [r0]
        16facc:	e5940000 	ldr	r0, [r4]
        16fad0:	e5900000 	ldr	r0, [r0]
        16fad4:	eb6951e1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        16fad8:	eb69499b 	bl	1bc214c <$AllocateRefHandle(long)>
        16fadc:	e1a06000 	mov	r6, r0
        16fae0:	e5901000 	ldr	r1, [r0]
        16fae4:	e5970000 	ldr	r0, [r7]
        16fae8:	eb6951d0 	bl	1bc4230 <$EQRef__FlT1>
        16faec:	e1b09000 	movs	r9, r0
        16faf0:	13a09001 	movne	r9, #1	; 0x1
        16faf4:	e1a00006 	mov	r0, r6
        16faf8:	eb694daf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fafc:	e1a00007 	mov	r0, r7
        16fb00:	eb694dad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fb04:	e3390000 	teq	r9, #0	; 0x0
        16fb08:	0a00001a 	beq	16fb78 <EqualStyles__FRC6RefVarT1+0x170>
        16fb0c:	e59f6074 	ldr	r6, [pc, #74]	; 16fb88 <EqualStyles__FRC6RefVarT1+0x180>
        16fb10:	e5960000 	ldr	r0, [r6]
        16fb14:	e5901000 	ldr	r1, [r0]
        16fb18:	e5950000 	ldr	r0, [r5]
        16fb1c:	e5900000 	ldr	r0, [r0]
        16fb20:	eb6951ce 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        16fb24:	eb694988 	bl	1bc214c <$AllocateRefHandle(long)>
        16fb28:	e1a05000 	mov	r5, r0
        16fb2c:	e5960000 	ldr	r0, [r6]
        16fb30:	e5901000 	ldr	r1, [r0]
        16fb34:	e5940000 	ldr	r0, [r4]
        16fb38:	e5900000 	ldr	r0, [r0]
        16fb3c:	eb6951c7 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        16fb40:	eb694981 	bl	1bc214c <$AllocateRefHandle(long)>
        16fb44:	e1a04000 	mov	r4, r0
        16fb48:	e5901000 	ldr	r1, [r0]
        16fb4c:	e5950000 	ldr	r0, [r5]
        16fb50:	eb6951b6 	bl	1bc4230 <$EQRef__FlT1>
        16fb54:	e1b06000 	movs	r6, r0
        16fb58:	13a06001 	movne	r6, #1	; 0x1
        16fb5c:	e1a00004 	mov	r0, r4
        16fb60:	eb694d95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fb64:	e1a00005 	mov	r0, r5
        16fb68:	eb694d93 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fb6c:	e3360000 	teq	r6, #0	; 0x0
        16fb70:	13a00001 	movne	r0, #1	; 0x1
        16fb74:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        16fb78:	e1a00008 	mov	r0, r8
        16fb7c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        16fb80:	006846a8 	rsbeq	r4, r8, r8, lsr #13
        16fb84:	00682d28 	rsbeq	r2, r8, r8, lsr #26
        16fb88:	00682d30 	rsbeq	r2, r8, r0, lsr sp
        16fb8c:	e5940000 	ldr	r0, [r4]
        16fb90:	e5901000 	ldr	r1, [r0]
        16fb94:	e5950000 	ldr	r0, [r5]
        16fb98:	e5900000 	ldr	r0, [r0]
        16fb9c:	eb6951a3 	bl	1bc4230 <$EQRef__FlT1>
        16fba0:	e20000ff 	and	r0, r0, #255	; 0xff
        16fba4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        16fba8:	e1a0c00d 	mov	ip, sp
        16fbac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        16fbb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        16fbb4:	e1a04000 	mov	r4, r0
        16fbb8:	e1a05001 	mov	r5, r1
        16fbbc:	e1a07002 	mov	r7, r2
        16fbc0:	e1a06003 	mov	r6, r3
        16fbc4:	e3a0a000 	mov	sl, #0	; 0x0
        16fbc8:	e5910000 	ldr	r0, [r1]
        16fbcc:	e3300000 	teq	r0, #0	; 0x0
        16fbd0:	0a000026 	beq	16fc70 <EqualStyles__FRC6RefVarT1+0x268>
        16fbd4:	e24dd004 	sub	sp, sp, #4	; 0x4
        16fbd8:	e2401001 	sub	r1, r0, #1	; 0x1
        16fbdc:	e5940000 	ldr	r0, [r4]
        16fbe0:	e5900000 	ldr	r0, [r0]
        16fbe4:	eb69519a 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        16fbe8:	eb694957 	bl	1bc214c <$AllocateRefHandle(long)>
        16fbec:	e58d0000 	str	r0, [sp]
        16fbf0:	e1a0100d 	mov	r1, sp
        16fbf4:	e1a00006 	mov	r0, r6
        16fbf8:	eb6597a3 	bl	1ad5a8c <$EqualStyles__FRC6RefVarT1>
        16fbfc:	e3300000 	teq	r0, #0	; 0x0
        16fc00:	0a000015 	beq	16fc5c <EqualStyles__FRC6RefVarT1+0x254>
        16fc04:	e3a0a001 	mov	sl, #1	; 0x1
        16fc08:	e5950000 	ldr	r0, [r5]
        16fc0c:	e2408002 	sub	r8, r0, #2	; 0x2
        16fc10:	e5940000 	ldr	r0, [r4]
        16fc14:	e5900000 	ldr	r0, [r0]
        16fc18:	e1a01008 	mov	r1, r8
        16fc1c:	eb69518c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        16fc20:	e3100003 	tst	r0, #3	; 0x3
        16fc24:	01a00140 	moveq	r0, r0, asr #2
        16fc28:	0a000000 	beq	16fc30 <EqualStyles__FRC6RefVarT1+0x228>
        16fc2c:	eb69493a 	bl	1bc211c <$_RINTError(long)>
        16fc30:	e0800007 	add	r0, r0, r7
        16fc34:	e1a00100 	mov	r0, r0, lsl #2
        16fc38:	eb694943 	bl	1bc214c <$AllocateRefHandle(long)>
        16fc3c:	e1a09000 	mov	r9, r0
        16fc40:	e5902000 	ldr	r2, [r0]
        16fc44:	e5940000 	ldr	r0, [r4]
        16fc48:	e5900000 	ldr	r0, [r0]
        16fc4c:	e1a01008 	mov	r1, r8
        16fc50:	eb6959c0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        16fc54:	e1a00009 	mov	r0, r9
        16fc58:	eb694d57 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fc5c:	e59d0000 	ldr	r0, [sp]
        16fc60:	eb694d55 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fc64:	e28dd004 	add	sp, sp, #4	; 0x4
        16fc68:	e33a0000 	teq	sl, #0	; 0x0
        16fc6c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        16fc70:	e5958000 	ldr	r8, [r5]
        16fc74:	e1a01005 	mov	r1, r5
        16fc78:	e1a00004 	mov	r0, r4
        16fc7c:	e3a02002 	mov	r2, #2	; 0x2
        16fc80:	ebffff4a 	bl	16f9b0 <TParagraphView::HandleReplaceText(RefVar const &)+0xab0>
        16fc84:	e1a00107 	mov	r0, r7, lsl #2
        16fc88:	eb69492f 	bl	1bc214c <$AllocateRefHandle(long)>
        16fc8c:	e1a05000 	mov	r5, r0
        16fc90:	e5902000 	ldr	r2, [r0]
        16fc94:	e5940000 	ldr	r0, [r4]
        16fc98:	e5900000 	ldr	r0, [r0]
        16fc9c:	e1a01008 	mov	r1, r8
        16fca0:	eb6959ac 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        16fca4:	e1a00005 	mov	r0, r5
        16fca8:	eb694d43 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fcac:	e2881001 	add	r1, r8, #1	; 0x1
        16fcb0:	e5960000 	ldr	r0, [r6]
        16fcb4:	e5902000 	ldr	r2, [r0]
        16fcb8:	e5940000 	ldr	r0, [r4]
        16fcbc:	e5900000 	ldr	r0, [r0]
        16fcc0:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        16fcc4:	ea6959a3 	b	1bc6358 <$SetArraySlotRef__FlN21>
        16fcc8:	e1a0c00d 	mov	ip, sp
        16fccc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        16fcd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        16fcd4:	e1a05000 	mov	r5, r0
        16fcd8:	e1a04001 	mov	r4, r1
        16fcdc:	e5900000 	ldr	r0, [r0]
        16fce0:	e5900000 	ldr	r0, [r0]
        16fce4:	eb695570 	bl	1bc52ac <$Length(long)>
        16fce8:	e3a01002 	mov	r1, #2	; 0x2
        16fcec:	e3300000 	teq	r0, #0	; 0x0
        16fcf0:	e1a00001 	mov	r0, r1
        16fcf4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        16fcf8:	eb694913 	bl	1bc214c <$AllocateRefHandle(long)>
        16fcfc:	e1a06000 	mov	r6, r0
        16fd00:	e3a07000 	mov	r7, #0	; 0x0
        16fd04:	ea000013 	b	16fd58 <EqualStyles__FRC6RefVarT1+0x350>
        16fd08:	e24dd004 	sub	sp, sp, #4	; 0x4
        16fd0c:	e5950000 	ldr	r0, [r5]
        16fd10:	e5900000 	ldr	r0, [r0]
        16fd14:	e1a01004 	mov	r1, r4
        16fd18:	eb69514d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        16fd1c:	eb69490a 	bl	1bc214c <$AllocateRefHandle(long)>
        16fd20:	e58d0000 	str	r0, [sp]
        16fd24:	e1a0000d 	mov	r0, sp
        16fd28:	eb6586e9 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        16fd2c:	e3300000 	teq	r0, #0	; 0x0
        16fd30:	1a000004 	bne	16fd48 <EqualStyles__FRC6RefVarT1+0x340>
        16fd34:	e59d0000 	ldr	r0, [sp]
        16fd38:	e5900000 	ldr	r0, [r0]
        16fd3c:	e3a07001 	mov	r7, #1	; 0x1
        16fd40:	e5860000 	str	r0, [r6]
        16fd44:	ea000000 	b	16fd4c <EqualStyles__FRC6RefVarT1+0x344>
        16fd48:	e2444002 	sub	r4, r4, #2	; 0x2
        16fd4c:	e59d0000 	ldr	r0, [sp]
        16fd50:	eb694d19 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fd54:	e28dd004 	add	sp, sp, #4	; 0x4
        16fd58:	e3540000 	cmp	r4, #0	; 0x0
        16fd5c:	ba000001 	blt	16fd68 <EqualStyles__FRC6RefVarT1+0x360>
        16fd60:	e3370000 	teq	r7, #0	; 0x0
        16fd64:	0affffe7 	beq	16fd08 <EqualStyles__FRC6RefVarT1+0x300>
        16fd68:	e5964000 	ldr	r4, [r6]
        16fd6c:	e1a00006 	mov	r0, r6
        16fd70:	eb694d11 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        16fd74:	e1a00004 	mov	r0, r4
        16fd78:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        16fd7c:	e1a0c00d 	mov	ip, sp
        16fd80:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        16fd84:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        16fd88:	e24cb014 	sub	fp, ip, #20	; 0x14
        16fd8c:	e1a04002 	mov	r4, r2
        16fd90:	e1a05003 	mov	r5, r3
        16fd94:	e28b901c 	add	r9, fp, #28	; 0x1c
        16fd98:	e8990281 	ldmia	r9, {r0, r7, r9}
        16fd9c:	e31000ff 	tst	r0, #255	; 0xff
        16fda0:	e59b602c 	ldr	r6, [fp, #44]
        16fda4:	e59b8018 	ldr	r8, [fp, #24]
        16fda8:	e59ba014 	ldr	sl, [fp, #20]
        16fdac:	e24dd010 	sub	sp, sp, #16	; 0x10
        16fdb0:	e3a00000 	mov	r0, #0	; 0x0
        16fdb4:	0a000046 	beq	16fed4 <EqualStyles__FRC6RefVarT1+0x4cc>
        16fdb8:	e59b0004 	ldr	r0, [fp, #4]
        16fdbc:	e5900000 	ldr	r0, [r0]
        16fdc0:	e5900000 	ldr	r0, [r0]
        16fdc4:	e3300002 	teq	r0, #2	; 0x2
        16fdc8:	e1a00007 	mov	r0, r7
        16fdcc:	0a00000d 	beq	16fe08 <EqualStyles__FRC6RefVarT1+0x400>
        16fdd0:	eb694ceb 	bl	1bc3184 <$GetCString(RefVar const &)>
        16fdd4:	eb69fa61 	bl	1bee760 <$Ustrlen>
        16fdd8:	e1a03000 	mov	r3, r0
        16fddc:	e92d0008 	stmdb	sp!, {r3}
        16fde0:	e1a00007 	mov	r0, r7
        16fde4:	eb694ce6 	bl	1bc3184 <$GetCString(RefVar const &)>
        16fde8:	e52d0004 	str	r0, [sp, -#4]!
        16fdec:	e59b0004 	ldr	r0, [fp, #4]
        16fdf0:	eb694ce3 	bl	1bc3184 <$GetCString(RefVar const &)>
        16fdf4:	e1a01000 	mov	r1, r0
        16fdf8:	e28d000c 	add	r0, sp, #12	; 0xc
        16fdfc:	e59b3008 	ldr	r3, [fp, #8]
        16fe00:	e49d2004 	ldr	r2, [sp], #4
        16fe04:	ea00000f 	b	16fe48 <EqualStyles__FRC6RefVarT1+0x440>
        16fe08:	eb694cdd 	bl	1bc3184 <$GetCString(RefVar const &)>
        16fe0c:	eb69fa53 	bl	1bee760 <$Ustrlen>
        16fe10:	e1a03000 	mov	r3, r0
        16fe14:	e92d0008 	stmdb	sp!, {r3}
        16fe18:	e1a00004 	mov	r0, r4
        16fe1c:	eb694cd8 	bl	1bc3184 <$GetCString(RefVar const &)>
        16fe20:	eb69fa4e 	bl	1bee760 <$Ustrlen>
        16fe24:	e52d0004 	str	r0, [sp, -#4]!
        16fe28:	e1a00007 	mov	r0, r7
        16fe2c:	eb694cd4 	bl	1bc3184 <$GetCString(RefVar const &)>
        16fe30:	e52d0004 	str	r0, [sp, -#4]!
        16fe34:	e1a00004 	mov	r0, r4
        16fe38:	eb694cd1 	bl	1bc3184 <$GetCString(RefVar const &)>
        16fe3c:	e1a01000 	mov	r1, r0
        16fe40:	e28d0010 	add	r0, sp, #16	; 0x10
        16fe44:	e8bd000c 	ldmia	sp!, {r2, r3}
        16fe48:	eb68cce5 	bl	1ba31e4 <$GetAppendDelimiter__FPUsPCUsT2CUlT4>
        16fe4c:	e28dd004 	add	sp, sp, #4	; 0x4
        16fe50:	e28d0004 	add	r0, sp, #4	; 0x4
        16fe54:	eb69fa41 	bl	1bee760 <$Ustrlen>
        16fe58:	e5860000 	str	r0, [r6]
        16fe5c:	e5962000 	ldr	r2, [r6]
        16fe60:	e3520000 	cmp	r2, #0	; 0x0
        16fe64:	da00001b 	ble	16fed8 <EqualStyles__FRC6RefVarT1+0x4d0>
        16fe68:	e59a1000 	ldr	r1, [sl]
        16fe6c:	e58d1000 	str	r1, [sp]
        16fe70:	e1a0100a 	mov	r1, sl
        16fe74:	e1a00004 	mov	r0, r4
        16fe78:	ebfffeb5 	bl	16f954 <TParagraphView::HandleReplaceText(RefVar const &)+0xa54>
        16fe7c:	e24dd004 	sub	sp, sp, #4	; 0x4
        16fe80:	e1a01004 	mov	r1, r4
        16fe84:	e1a0000d 	mov	r0, sp
        16fe88:	eb694492 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        16fe8c:	e1a0000d 	mov	r0, sp
        16fe90:	eb69489f 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        16fe94:	e5961000 	ldr	r1, [r6]
        16fe98:	e1a02081 	mov	r2, r1, lsl #1
        16fe9c:	e59d1004 	ldr	r1, [sp, #4]
        16fea0:	e0801081 	add	r1, r0, r1, lsl #1
        16fea4:	e28d0008 	add	r0, sp, #8	; 0x8
        16fea8:	eb69bc29 	bl	1bdef54 <$BlockMove>
        16feac:	e59b3028 	ldr	r3, [fp, #40]
        16feb0:	e1a01008 	mov	r1, r8
        16feb4:	e1a00005 	mov	r0, r5
        16feb8:	e5962000 	ldr	r2, [r6]
        16febc:	ebffff39 	bl	16fba8 <EqualStyles__FRC6RefVarT1+0x1a0>
        16fec0:	e1a0000d 	mov	r0, sp
        16fec4:	e3a01000 	mov	r1, #0	; 0x0
        16fec8:	eb69488c 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        16fecc:	e28dd004 	add	sp, sp, #4	; 0x4
        16fed0:	ea000000 	b	16fed8 <EqualStyles__FRC6RefVarT1+0x4d0>
        16fed4:	e5860000 	str	r0, [r6]
        16fed8:	e5970000 	ldr	r0, [r7]
        16fedc:	e5900000 	ldr	r0, [r0]
        16fee0:	eb6954f1 	bl	1bc52ac <$Length(long)>
        16fee4:	e1a000a0 	mov	r0, r0, lsr #1
        16fee8:	e2406001 	sub	r6, r0, #1	; 0x1
        16feec:	e59a0000 	ldr	r0, [sl]
        16fef0:	e1a02006 	mov	r2, r6
        16fef4:	e1a0100a 	mov	r1, sl
        16fef8:	e58d0000 	str	r0, [sp]
        16fefc:	e1a00004 	mov	r0, r4
        16ff00:	ebfffe93 	bl	16f954 <TParagraphView::HandleReplaceText(RefVar const &)+0xa54>
        16ff04:	e24dd008 	sub	sp, sp, #8	; 0x8
        16ff08:	e1a01004 	mov	r1, r4
        16ff0c:	e28d0004 	add	r0, sp, #4	; 0x4
        16ff10:	eb694470 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        16ff14:	e28d0004 	add	r0, sp, #4	; 0x4
        16ff18:	eb69487d 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        16ff1c:	e1a04000 	mov	r4, r0
        16ff20:	e1a01007 	mov	r1, r7
        16ff24:	e1a0000d 	mov	r0, sp
        16ff28:	eb69446a 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        16ff2c:	e1a0000d 	mov	r0, sp
        16ff30:	eb694877 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        16ff34:	e1a02086 	mov	r2, r6, lsl #1
        16ff38:	e59d1008 	ldr	r1, [sp, #8]
        16ff3c:	e0841081 	add	r1, r4, r1, lsl #1
        16ff40:	eb69bc03 	bl	1bdef54 <$BlockMove>
        16ff44:	e1a00009 	mov	r0, r9
        16ff48:	eb6a0e8f 	bl	1bf398c <$IsArray(RefVar const &)>
        16ff4c:	e3300000 	teq	r0, #0	; 0x0
        16ff50:	0a000012 	beq	16ffa0 <EqualStyles__FRC6RefVarT1+0x598>
        16ff54:	e5990000 	ldr	r0, [r9]
        16ff58:	e5900000 	ldr	r0, [r0]
        16ff5c:	eb6954d2 	bl	1bc52ac <$Length(long)>
        16ff60:	e1a04000 	mov	r4, r0
        16ff64:	e1a02000 	mov	r2, r0
        16ff68:	e5986000 	ldr	r6, [r8]
        16ff6c:	e1a01008 	mov	r1, r8
        16ff70:	e1a00005 	mov	r0, r5
        16ff74:	ebfffe8d 	bl	16f9b0 <TParagraphView::HandleReplaceText(RefVar const &)+0xab0>
        16ff78:	e1a03004 	mov	r3, r4
        16ff7c:	e3a02000 	mov	r2, #0	; 0x0
        16ff80:	e92d000c 	stmdb	sp!, {r2, r3}
        16ff84:	e1a03009 	mov	r3, r9
        16ff88:	e1a02004 	mov	r2, r4
        16ff8c:	e1a01006 	mov	r1, r6
        16ff90:	e1a00005 	mov	r0, r5
        16ff94:	eb69486d 	bl	1bc2150 <$ArrayMunger__FRC6RefVarlT2T1N22>
        16ff98:	e28dd008 	add	sp, sp, #8	; 0x8
        16ff9c:	ea00001c 	b	170014 <EqualStyles__FRC6RefVarT1+0x60c>
        16ffa0:	e24dd004 	sub	sp, sp, #4	; 0x4
        16ffa4:	e5990000 	ldr	r0, [r9]
        16ffa8:	e5900000 	ldr	r0, [r0]
        16ffac:	eb694866 	bl	1bc214c <$AllocateRefHandle(long)>
        16ffb0:	e58d0000 	str	r0, [sp]
        16ffb4:	e5900000 	ldr	r0, [r0]
        16ffb8:	e3300002 	teq	r0, #2	; 0x2
        16ffbc:	1a00000c 	bne	16fff4 <EqualStyles__FRC6RefVarT1+0x5ec>
        16ffc0:	e5980000 	ldr	r0, [r8]
        16ffc4:	e2401001 	sub	r1, r0, #1	; 0x1
        16ffc8:	e1a00005 	mov	r0, r5
        16ffcc:	ebffff3d 	bl	16fcc8 <EqualStyles__FRC6RefVarT1+0x2c0>
        16ffd0:	e59d1000 	ldr	r1, [sp]
        16ffd4:	e5810000 	str	r0, [r1]
        16ffd8:	e3300002 	teq	r0, #2	; 0x2
        16ffdc:	1a000004 	bne	16fff4 <EqualStyles__FRC6RefVarT1+0x5ec>
        16ffe0:	e59b3028 	ldr	r3, [fp, #40]
        16ffe4:	e5930000 	ldr	r0, [r3]
        16ffe8:	e5900000 	ldr	r0, [r0]
        16ffec:	e59d1000 	ldr	r1, [sp]
        16fff0:	e5810000 	str	r0, [r1]
        16fff4:	e1a0300d 	mov	r3, sp
        16fff8:	e1a02006 	mov	r2, r6
        16fffc:	e1a01008 	mov	r1, r8
        170000:	e1a00005 	mov	r0, r5
        170004:	ebfffee7 	bl	16fba8 <EqualStyles__FRC6RefVarT1+0x1a0>
        170008:	e59d0000 	ldr	r0, [sp]
        17000c:	eb694c6a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        170010:	e28dd004 	add	sp, sp, #4	; 0x4
        170014:	e1a0000d 	mov	r0, sp
        170018:	e3a01000 	mov	r1, #0	; 0x0
        17001c:	eb694837 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        170020:	e28d0004 	add	r0, sp, #4	; 0x4
        170024:	e3a01000 	mov	r1, #0	; 0x0
        170028:	eb694834 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        17002c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        170030:	e1a0c00d 	mov	ip, sp
        170034:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        170038:	e24cb004 	sub	fp, ip, #4	; 0x4
        17003c:	e1a04000 	mov	r4, r0
        170040:	e1a05001 	mov	r5, r1
        170044:	eb6a0e50 	bl	1bf398c <$IsArray(RefVar const &)>
        170048:	e3300000 	teq	r0, #0	; 0x0
        17004c:	e5940000 	ldr	r0, [r4]
        170050:	e5900000 	ldr	r0, [r0]
        170054:	11a01005 	movne	r1, r5
        170058:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        17005c:	1a69507c 	bne	1bc4254 <$GetArraySlotRef__FlT1>
        170060:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        170064:	e1a0c00d 	mov	ip, sp
        170068:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        17006c:	e24cb004 	sub	fp, ip, #4	; 0x4
        170070:	e1a04000 	mov	r4, r0
        170074:	eb6a0e44 	bl	1bf398c <$IsArray(RefVar const &)>
        170078:	e3300000 	teq	r0, #0	; 0x0
        17007c:	03a00001 	moveq	r0, #1	; 0x1
        170080:	15940000 	ldrne	r0, [r4]
        170084:	15900000 	ldrne	r0, [r0]
        170088:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        17008c:	1a695486 	bne	1bc52ac <$Length(long)>
        170090:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ExtractStylesArray(RefVar const &)
 * Address: 0017aa58
 */
ExtractStylesArray(RefVar const &) {
    /*
        17aa58:	e1a0c00d 	mov	ip, sp
        17aa5c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        17aa60:	e24cb004 	sub	fp, ip, #4	; 0x4
        17aa64:	e1a04000 	mov	r4, r0
        17aa68:	e5900000 	ldr	r0, [r0]
        17aa6c:	e5900000 	ldr	r0, [r0]
        17aa70:	e3300002 	teq	r0, #2	; 0x2
        17aa74:	03a00002 	moveq	r0, #2	; 0x2
        17aa78:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        17aa7c:	e1a00004 	mov	r0, r4
        17aa80:	eb69e3c1 	bl	1bf398c <$IsArray(RefVar const &)>
        17aa84:	e3300000 	teq	r0, #0	; 0x0
        17aa88:	15940000 	ldrne	r0, [r4]
        17aa8c:	15900000 	ldrne	r0, [r0]
        17aa90:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        17aa94:	e59f0014 	ldr	r0, [pc, #14]	; 17aab0 <ExtractStylesArray(RefVar const &)+0x58>
        17aa98:	e5900000 	ldr	r0, [r0]
        17aa9c:	e5901000 	ldr	r1, [r0]
        17aaa0:	e5940000 	ldr	r0, [r4]
        17aaa4:	e5900000 	ldr	r0, [r0]
        17aaa8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        17aaac:	ea6925eb 	b	1bc4260 <$GetFrameSlotRef__FlT1>
        17aab0:	00684930 	rsbeq	r4, r8, r0, lsr r9
    */
}

/**
 * Symbol: ExtractTabStopsArray(RefVar const &)
 * Address: 0017aab4
 */
ExtractTabStopsArray(RefVar const &) {
    /*
        17aab4:	e1a0c00d 	mov	ip, sp
        17aab8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        17aabc:	e24cb004 	sub	fp, ip, #4	; 0x4
        17aac0:	e1a04000 	mov	r4, r0
        17aac4:	e5900000 	ldr	r0, [r0]
        17aac8:	e5900000 	ldr	r0, [r0]
        17aacc:	e3300002 	teq	r0, #2	; 0x2
        17aad0:	0a000003 	beq	17aae4 <ExtractTabStopsArray(RefVar const &)+0x30>
        17aad4:	e1a00004 	mov	r0, r4
        17aad8:	eb69e3ab 	bl	1bf398c <$IsArray(RefVar const &)>
        17aadc:	e3300000 	teq	r0, #0	; 0x0
        17aae0:	0a000001 	beq	17aaec <ExtractTabStopsArray(RefVar const &)+0x38>
        17aae4:	e3a00002 	mov	r0, #2	; 0x2
        17aae8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        17aaec:	e59f0014 	ldr	r0, [pc, #14]	; 17ab08 <ExtractTabStopsArray(RefVar const &)+0x54>
        17aaf0:	e5900000 	ldr	r0, [r0]
        17aaf4:	e5901000 	ldr	r1, [r0]
        17aaf8:	e5940000 	ldr	r0, [r4]
        17aafc:	e5900000 	ldr	r0, [r0]
        17ab00:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        17ab04:	ea6925d5 	b	1bc4260 <$GetFrameSlotRef__FlT1>
        17ab08:	00684a18 	rsbeq	r4, r8, r8, lsl sl
    */
}

/**
 * Symbol: ExtractCorrectInfo(RefVar const &)
 * Address: 0017ab0c
 */
ExtractCorrectInfo(RefVar const &) {
    /*
        17ab0c:	e1a0c00d 	mov	ip, sp
        17ab10:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        17ab14:	e24cb004 	sub	fp, ip, #4	; 0x4
        17ab18:	e1a04000 	mov	r4, r0
        17ab1c:	e5900000 	ldr	r0, [r0]
        17ab20:	e5900000 	ldr	r0, [r0]
        17ab24:	e3300002 	teq	r0, #2	; 0x2
        17ab28:	0a000003 	beq	17ab3c <ExtractCorrectInfo(RefVar const &)+0x30>
        17ab2c:	e1a00004 	mov	r0, r4
        17ab30:	eb69e396 	bl	1bf3990 <$IsFrame(RefVar const &)>
        17ab34:	e3300000 	teq	r0, #0	; 0x0
        17ab38:	1a000001 	bne	17ab44 <ExtractCorrectInfo(RefVar const &)+0x38>
        17ab3c:	e3a00002 	mov	r0, #2	; 0x2
        17ab40:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        17ab44:	e59f0014 	ldr	r0, [pc, #14]	; 17ab60 <ExtractCorrectInfo(RefVar const &)+0x54>
        17ab48:	e5900000 	ldr	r0, [r0]
        17ab4c:	e5901000 	ldr	r1, [r0]
        17ab50:	e5940000 	ldr	r0, [r4]
        17ab54:	e5900000 	ldr	r0, [r0]
        17ab58:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        17ab5c:	ea6925bf 	b	1bc4260 <$GetFrameSlotRef__FlT1>
        17ab60:	00682660 	rsbeq	r2, r8, r0, ror #12
    */
}

/**
 * Symbol: ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3
 * Address: 0017d6c0
 */
void globals::ExtractRichStringFromParaSlots() {
    /*
        17d6c0:	e1a0c00d 	mov	ip, sp
        17d6c4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        17d6c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        17d6cc:	e1a07000 	mov	r7, r0
        17d6d0:	e1a06001 	mov	r6, r1
        17d6d4:	e1a05002 	mov	r5, r2
        17d6d8:	e1a04003 	mov	r4, r3
        17d6dc:	e24dd028 	sub	sp, sp, #40	; 0x28
        17d6e0:	e1a01000 	mov	r1, r0
        17d6e4:	e1a0000d 	mov	r0, sp
        17d6e8:	eb00bccc 	bl	1aca20 <TRichString::__ct(RefVar const &)>
        17d6ec:	e59d0000 	ldr	r0, [sp]
        17d6f0:	e59d800c 	ldr	r8, [sp, #12]
        17d6f4:	eb6916b0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17d6f8:	e3a09000 	mov	r9, #0	; 0x0
        17d6fc:	e28dd024 	add	sp, sp, #36	; 0x24
        17d700:	e1a01007 	mov	r1, r7
        17d704:	e1a0000d 	mov	r0, sp
        17d708:	eb690e72 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        17d70c:	e1a0000d 	mov	r0, sp
        17d710:	eb69127f 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        17d714:	e1a07000 	mov	r7, r0
        17d718:	e1550008 	cmp	r5, r8
        17d71c:	81a05008 	movhi	r5, r8
        17d720:	e0850004 	add	r0, r5, r4
        17d724:	e1500008 	cmp	r0, r8
        17d728:	80484005 	subhi	r4, r8, r5
        17d72c:	e24dd004 	sub	sp, sp, #4	; 0x4
        17d730:	e3a00002 	mov	r0, #2	; 0x2
        17d734:	e0801084 	add	r1, r0, r4, lsl #1
        17d738:	e59f0110 	ldr	r0, [pc, #110]	; 17d850 <ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3+0x190>
        17d73c:	eb69127e 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        17d740:	eb691281 	bl	1bc214c <$AllocateRefHandle(long)>
        17d744:	e58d0000 	str	r0, [sp]
        17d748:	e5900000 	ldr	r0, [r0]
        17d74c:	eb691282 	bl	1bc215c <$BinaryData(long)>
        17d750:	e1a01000 	mov	r1, r0
        17d754:	e1a02084 	mov	r2, r4, lsl #1
        17d758:	e0870085 	add	r0, r7, r5, lsl #1
        17d75c:	eb6985fc 	bl	1bdef54 <$BlockMove>
        17d760:	e59d0000 	ldr	r0, [sp]
        17d764:	e5900000 	ldr	r0, [r0]
        17d768:	eb69127b 	bl	1bc215c <$BinaryData(long)>
        17d76c:	e0800084 	add	r0, r0, r4, lsl #1
        17d770:	e5c09001 	strb	r9, [r0, #1]
        17d774:	e5c09000 	strb	r9, [r0]
        17d778:	e1a00006 	mov	r0, r6
        17d77c:	eb69d882 	bl	1bf398c <$IsArray(RefVar const &)>
        17d780:	e3300000 	teq	r0, #0	; 0x0
        17d784:	0a000040 	beq	17d88c <ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3+0x1cc>
        17d788:	e5960000 	ldr	r0, [r6]
        17d78c:	e5900000 	ldr	r0, [r0]
        17d790:	eb691ec5 	bl	1bc52ac <$Length(long)>
        17d794:	e3500000 	cmp	r0, #0	; 0x0
        17d798:	da00003b 	ble	17d88c <ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3+0x1cc>
        17d79c:	e24dd004 	sub	sp, sp, #4	; 0x4
        17d7a0:	e3a00002 	mov	r0, #2	; 0x2
        17d7a4:	eb691268 	bl	1bc214c <$AllocateRefHandle(long)>
        17d7a8:	e1a07000 	mov	r7, r0
        17d7ac:	e1a02004 	mov	r2, r4
        17d7b0:	e1a01005 	mov	r1, r5
        17d7b4:	e1a00006 	mov	r0, r6
        17d7b8:	e3a03000 	mov	r3, #0	; 0x0
        17d7bc:	eb6464dc 	bl	1a96b34 <$GetStylesOfRange__FRC6RefVarlT2Uc>
        17d7c0:	eb691261 	bl	1bc214c <$AllocateRefHandle(long)>
        17d7c4:	e58d0000 	str	r0, [sp]
        17d7c8:	e5900000 	ldr	r0, [r0]
        17d7cc:	eb691eb6 	bl	1bc52ac <$Length(long)>
        17d7d0:	e1a05000 	mov	r5, r0
        17d7d4:	e3a08000 	mov	r8, #0	; 0x0
        17d7d8:	e3a04001 	mov	r4, #1	; 0x1
        17d7dc:	e3500001 	cmp	r0, #1	; 0x1
        17d7e0:	9a000022 	bls	17d870 <ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3+0x1b0>
        17d7e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        17d7e8:	e1a01004 	mov	r1, r4
        17d7ec:	e59d0004 	ldr	r0, [sp, #4]
        17d7f0:	e5900000 	ldr	r0, [r0]
        17d7f4:	eb691a96 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        17d7f8:	eb691253 	bl	1bc214c <$AllocateRefHandle(long)>
        17d7fc:	e58d0000 	str	r0, [sp]
        17d800:	e1a0000d 	mov	r0, sp
        17d804:	eb655032 	bl	1ad18d4 <$IsInkWord(RefVar const &)>
        17d808:	e1b06000 	movs	r6, r0
        17d80c:	13a06001 	movne	r6, #1	; 0x1
        17d810:	e59d0000 	ldr	r0, [sp]
        17d814:	eb691668 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17d818:	e3360000 	teq	r6, #0	; 0x0
        17d81c:	e28dd004 	add	sp, sp, #4	; 0x4
        17d820:	1a000004 	bne	17d838 <ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3+0x178>
        17d824:	e2844002 	add	r4, r4, #2	; 0x2
        17d828:	e1540005 	cmp	r4, r5
        17d82c:	3affffec 	bcc	17d7e4 <ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3+0x124>
        17d830:	e3380000 	teq	r8, #0	; 0x0
        17d834:	0a00000d 	beq	17d870 <ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3+0x1b0>
        17d838:	e1a0100d 	mov	r1, sp
        17d83c:	e28d0004 	add	r0, sp, #4	; 0x4
        17d840:	e3a02000 	mov	r2, #0	; 0x0
        17d844:	eb68d012 	bl	1bb1894 <$MakeRichString__FRC6RefVarT1Uc>
        17d848:	e1a04000 	mov	r4, r0
        17d84c:	ea000009 	b	17d878 <ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3+0x1b8>
        17d850:	006848d0 	ldreqd	r4, [r8], -#128
        17d854:	e59d0004 	ldr	r0, [sp, #4]
        17d858:	eb691657 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17d85c:	e28d0008 	add	r0, sp, #8	; 0x8
        17d860:	e3a01000 	mov	r1, #0	; 0x0
        17d864:	eb691225 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        17d868:	e1a00004 	mov	r0, r4
        17d86c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        17d870:	e59d0004 	ldr	r0, [sp, #4]
        17d874:	e5904000 	ldr	r4, [r0]
        17d878:	e59d0000 	ldr	r0, [sp]
        17d87c:	eb69164e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17d880:	e1a00007 	mov	r0, r7
        17d884:	eb69164c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17d888:	eafffff1 	b	17d854 <ExtractRichStringFromParaSlots__FRC6RefVarT1UlT3+0x194>
        17d88c:	e59d0000 	ldr	r0, [sp]
        17d890:	e5904000 	ldr	r4, [r0]
        17d894:	eb691648 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        17d898:	e28d0004 	add	r0, sp, #4	; 0x4
        17d89c:	e3a01000 	mov	r1, #0	; 0x0
        17d8a0:	eb691216 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        17d8a4:	e1a00004 	mov	r0, r4
        17d8a8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ExtractHiliteFromIntervals__FPlT1lN23UcN41
 * Address: 0018ecb4
 */
void globals::ExtractHiliteFromIntervals() {
    /*
        18ecb4:	e1a0c00d 	mov	ip, sp
        18ecb8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        18ecbc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        18ecc0:	e24cb014 	sub	fp, ip, #20	; 0x14
        18ecc4:	e1a04000 	mov	r4, r0
        18ecc8:	e1a07001 	mov	r7, r1
        18eccc:	e1b06002 	movs	r6, r2
        18ecd0:	e1a05003 	mov	r5, r3
        18ecd4:	e59b0018 	ldr	r0, [fp, #24]
        18ecd8:	e200a0ff 	and	sl, r0, #255	; 0xff
        18ecdc:	e59b8014 	ldr	r8, [fp, #20]
        18ece0:	4a000036 	bmi	18edc0 <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0x10c>
        18ece4:	e1560008 	cmp	r6, r8
        18ece8:	ca000034 	bgt	18edc0 <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0x10c>
        18ecec:	e3550000 	cmp	r5, #0	; 0x0
        18ecf0:	ba000032 	blt	18edc0 <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0x10c>
        18ecf4:	e1550008 	cmp	r5, r8
        18ecf8:	ca000030 	bgt	18edc0 <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0x10c>
        18ecfc:	e5970000 	ldr	r0, [r7]
        18ed00:	e1a09080 	mov	r9, r0, lsl #1
        18ed04:	e24dd004 	sub	sp, sp, #4	; 0x4
        18ed08:	e1a02009 	mov	r2, r9
        18ed0c:	e1a01004 	mov	r1, r4
        18ed10:	e1a00006 	mov	r0, r6
        18ed14:	eb6461ae 	bl	1aa73d4 <$IntervalIndex(long, long *, long *)>
        18ed18:	e1a02009 	mov	r2, r9
        18ed1c:	e1a01004 	mov	r1, r4
        18ed20:	e58d0000 	str	r0, [sp]
        18ed24:	e1a00005 	mov	r0, r5
        18ed28:	eb6461a9 	bl	1aa73d4 <$IntervalIndex(long, long *, long *)>
        18ed2c:	e1560005 	cmp	r6, r5
        18ed30:	ca000012 	bgt	18ed80 <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0xcc>
        18ed34:	e59d1000 	ldr	r1, [sp]
        18ed38:	e1510000 	cmp	r1, r0
        18ed3c:	ba00000a 	blt	18ed6c <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0xb8>
        18ed40:	e33a0000 	teq	sl, #0	; 0x0
        18ed44:	0a00001c 	beq	18edbc <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0x108>
        18ed48:	e3360000 	teq	r6, #0	; 0x0
        18ed4c:	00840109 	addeq	r0, r4, r9, lsl #2
        18ed50:	05100004 	ldreq	r0, [r0, -#4]
        18ed54:	01300008 	teqeq	r0, r8
        18ed58:	0a000003 	beq	18ed6c <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0xb8>
        18ed5c:	e1350008 	teq	r5, r8
        18ed60:	05940000 	ldreq	r0, [r4]
        18ed64:	03300000 	teqeq	r0, #0	; 0x0
        18ed68:	1a000013 	bne	18edbc <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0x108>
        18ed6c:	e1a03007 	mov	r3, r7
        18ed70:	e1a02004 	mov	r2, r4
        18ed74:	e1a01005 	mov	r1, r5
        18ed78:	e1a00006 	mov	r0, r6
        18ed7c:	ea00000d 	b	18edb8 <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0x104>
        18ed80:	e3500000 	cmp	r0, #0	; 0x0
        18ed84:	ca000002 	bgt	18ed94 <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0xe0>
        18ed88:	e59d0000 	ldr	r0, [sp]
        18ed8c:	e1500009 	cmp	r0, r9
        18ed90:	aa000009 	bge	18edbc <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0x108>
        18ed94:	e1a03007 	mov	r3, r7
        18ed98:	e1a02004 	mov	r2, r4
        18ed9c:	e1a01008 	mov	r1, r8
        18eda0:	e1a00006 	mov	r0, r6
        18eda4:	eb64618b 	bl	1aa73d8 <$AddInterval__FlT1PlT3>
        18eda8:	e1a03007 	mov	r3, r7
        18edac:	e1a02004 	mov	r2, r4
        18edb0:	e1a01005 	mov	r1, r5
        18edb4:	e3a00000 	mov	r0, #0	; 0x0
        18edb8:	eb646186 	bl	1aa73d8 <$AddInterval__FlT1PlT3>
        18edbc:	e28dd004 	add	sp, sp, #4	; 0x4
        18edc0:	e5970000 	ldr	r0, [r7]
        18edc4:	e1a01080 	mov	r1, r0, lsl #1
        18edc8:	e3a00000 	mov	r0, #0	; 0x0
        18edcc:	e3510004 	cmp	r1, #4	; 0x4
        18edd0:	ba00000b 	blt	18ee04 <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0x150>
        18edd4:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18edd8:	e33a0000 	teq	sl, #0	; 0x0
        18eddc:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18ede0:	e5942000 	ldr	r2, [r4]
        18ede4:	e3320000 	teq	r2, #0	; 0x0
        18ede8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18edec:	e0842101 	add	r2, r4, r1, lsl #2
        18edf0:	e5122004 	ldr	r2, [r2, -#4]
        18edf4:	e2483001 	sub	r3, r8, #1	; 0x1
        18edf8:	e1520003 	cmp	r2, r3
        18edfc:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18ee00:	ea000001 	b	18ee0c <ExtractHiliteFromIntervals__FPlT1lN23UcN41+0x158>
        18ee04:	e3510002 	cmp	r1, #2	; 0x2
        18ee08:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        18ee0c:	e0840101 	add	r0, r4, r1, lsl #2
        18ee10:	e5101008 	ldr	r1, [r0, -#8]
        18ee14:	e1a01841 	mov	r1, r1, asr #16
        18ee18:	e59b201c 	ldr	r2, [fp, #28]
        18ee1c:	e5821000 	str	r1, [r2]
        18ee20:	e5100008 	ldr	r0, [r0, -#8]
        18ee24:	e1a00800 	mov	r0, r0, lsl #16
        18ee28:	e1a00820 	mov	r0, r0, lsr #16
        18ee2c:	e59b1020 	ldr	r1, [fp, #32]
        18ee30:	e5810000 	str	r0, [r1]
        18ee34:	e3a00001 	mov	r0, #1	; 0x1
        18ee38:	e5941004 	ldr	r1, [r4, #4]
        18ee3c:	e0801841 	add	r1, r0, r1, asr #16
        18ee40:	e59b2024 	ldr	r2, [fp, #36]
        18ee44:	e5821000 	str	r1, [r2]
        18ee48:	e5b41004 	ldr	r1, [r4, #4]!
        18ee4c:	e1a01801 	mov	r1, r1, lsl #16
        18ee50:	e1a01821 	mov	r1, r1, lsr #16
        18ee54:	e59b2028 	ldr	r2, [fp, #40]
        18ee58:	e5821000 	str	r1, [r2]
        18ee5c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EarlyIOPowerOn(unsigned long)
 * Address: 0019261c
 */
EarlyIOPowerOn(unsigned long) {
    /*
        19261c:	e1a0c00d 	mov	ip, sp
        192620:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        192624:	e24cb004 	sub	fp, ip, #4	; 0x4
        192628:	e59f0060 	ldr	r0, [pc, #60]	; 192690 <EarlyIOPowerOn(unsigned long)+0x74>
        19262c:	e5901000 	ldr	r1, [r0]
        192630:	e3811030 	orr	r1, r1, #48	; 0x30
        192634:	e5801000 	str	r1, [r0]
        192638:	e59f4054 	ldr	r4, [pc, #54]	; 192694 <EarlyIOPowerOn(unsigned long)+0x78>
        19263c:	e5940000 	ldr	r0, [r4]
        192640:	e2000010 	and	r0, r0, #16	; 0x10
        192644:	e3300010 	teq	r0, #16	; 0x10
        192648:	0a000005 	beq	192664 <EarlyIOPowerOn(unsigned long)+0x48>
        19264c:	e5940000 	ldr	r0, [r4]
        192650:	e3800010 	orr	r0, r0, #16	; 0x10
        192654:	e5840000 	str	r0, [r4]
        192658:	e3a00a09 	mov	r0, #36864	; 0x9000
        19265c:	e2400004 	sub	r0, r0, #4	; 0x4
        192660:	eb69ae18 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
        192664:	e5940000 	ldr	r0, [r4]
        192668:	e2000020 	and	r0, r0, #32	; 0x20
        19266c:	e3300020 	teq	r0, #32	; 0x20
        192670:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        192674:	e5940000 	ldr	r0, [r4]
        192678:	e3800020 	orr	r0, r0, #32	; 0x20
        19267c:	e5840000 	str	r0, [r4]
        192680:	e3a000fe 	mov	r0, #254	; 0xfe
        192684:	e2800c47 	add	r0, r0, #18176	; 0x4700
        192688:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        19268c:	ea69ae0d 	b	1bfdec8 <$ShortTimerDelay(unsigned long)>
        192690:	0f18e800 	swieq	0x0018e800
        192694:	0f18ec00 	swieq	0x0018ec00
    */
}

/**
 * Symbol: EarlyIOPowerOff(unsigned long)
 * Address: 00192698
 */
EarlyIOPowerOff(unsigned long) {
    /*
        192698:	e59f0014 	ldr	r0, [pc, #14]	; 1926b4 <EarlyIOPowerOff(unsigned long)+0x1c>
        19269c:	e5901000 	ldr	r1, [r0]
        1926a0:	e3c11030 	bic	r1, r1, #48	; 0x30
        1926a4:	e5801000 	str	r1, [r0]
        1926a8:	e3a00a09 	mov	r0, #36864	; 0x9000
        1926ac:	e2400004 	sub	r0, r0, #4	; 0x4
        1926b0:	ea69ae04 	b	1bfdec8 <$ShortTimerDelay(unsigned long)>
        1926b4:	0f18ec00 	swieq	0x0018ec00
    */
}

/**
 * Symbol: EnableSysPowerInterrupt(void)
 * Address: 00192738
 */
EnableSysPowerInterrupt(void) {
    /*
        192738:	e1a0c00d 	mov	ip, sp
        19273c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        192740:	e24cb004 	sub	fp, ip, #4	; 0x4
        192744:	eb69ebde 	bl	1c0d6c4 <$GetPlatformDriver(void)>
        192748:	e3300000 	teq	r0, #0	; 0x0
        19274c:	03a00000 	moveq	r0, #0	; 0x0
        192750:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        192754:	1a07d5c2 	bne	387e64 <TPlatformDriver::EnableSysPowerInterrupt(void)>
        192758:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ExpandInk(RefVar const &, long)
 * Address: 001a2344
 */
ExpandInk(RefVar const &, long) {
    /*
        1a2344:	e1a0c00d 	mov	ip, sp
        1a2348:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a234c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a2350:	e1a04000 	mov	r4, r0
        1a2354:	e1a05001 	mov	r5, r1
        1a2358:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a235c:	e3a00002 	mov	r0, #2	; 0x2
        1a2360:	eb687f79 	bl	1bc214c <$AllocateRefHandle(long)>
        1a2364:	e3a01000 	mov	r1, #0	; 0x0
        1a2368:	e58d0000 	str	r0, [sp]
        1a236c:	e1a00004 	mov	r0, r4
        1a2370:	eb644179 	bl	1ab295c <$GetPolyAsTStrokes(RefVar const &, unsigned long)>
        1a2374:	e1b05000 	movs	r5, r0
        1a2378:	0a000033 	beq	1a244c <ExpandInk(RefVar const &, long)+0x108>
        1a237c:	e1a00005 	mov	r0, r5
        1a2380:	eb64249a 	bl	1aab5f0 <$CountTStrokes(TStroke **)>
        1a2384:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a2388:	e1a01000 	mov	r1, r0
        1a238c:	e59f00cc 	ldr	r0, [pc, #cc]	; 1a2460 <ExpandInk(RefVar const &, long)+0x11c>
        1a2390:	eb687f68 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1a2394:	eb687f6c 	bl	1bc214c <$AllocateRefHandle(long)>
        1a2398:	e3a06000 	mov	r6, #0	; 0x0
        1a239c:	e58d0000 	str	r0, [sp]
        1a23a0:	e5950000 	ldr	r0, [r5]
        1a23a4:	e3300000 	teq	r0, #0	; 0x0
        1a23a8:	0a00000d 	beq	1a23e4 <ExpandInk(RefVar const &, long)+0xa0>
        1a23ac:	eb644dcf 	bl	1ab5af0 <$MakeStrokeRef(TStroke *)>
        1a23b0:	eb687f65 	bl	1bc214c <$AllocateRefHandle(long)>
        1a23b4:	e1a07000 	mov	r7, r0
        1a23b8:	e1a01006 	mov	r1, r6
        1a23bc:	e5902000 	ldr	r2, [r0]
        1a23c0:	e59d0000 	ldr	r0, [sp]
        1a23c4:	e5900000 	ldr	r0, [r0]
        1a23c8:	eb688fe2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1a23cc:	e1a00007 	mov	r0, r7
        1a23d0:	eb688379 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a23d4:	e2866001 	add	r6, r6, #1	; 0x1
        1a23d8:	e7950106 	ldr	r0, [r5, r6, lsl #2]
        1a23dc:	e3300000 	teq	r0, #0	; 0x0
        1a23e0:	1afffff1 	bne	1a23ac <ExpandInk(RefVar const &, long)+0x68>
        1a23e4:	e59f0078 	ldr	r0, [pc, #78]	; 1a2464 <ExpandInk(RefVar const &, long)+0x120>
        1a23e8:	eb687f5f 	bl	1bc216c <$Clone(RefVar const &)>
        1a23ec:	e59d1004 	ldr	r1, [sp, #4]
        1a23f0:	e5810000 	str	r0, [r1]
        1a23f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a23f8:	e59f1068 	ldr	r1, [pc, #68]	; 1a2468 <ExpandInk(RefVar const &, long)+0x124>
        1a23fc:	e1a00004 	mov	r0, r4
        1a2400:	e3a02000 	mov	r2, #0	; 0x0
        1a2404:	eb688797 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1a2408:	eb687f4f 	bl	1bc214c <$AllocateRefHandle(long)>
        1a240c:	e58d0000 	str	r0, [sp]
        1a2410:	e1a0200d 	mov	r2, sp
        1a2414:	e59f1050 	ldr	r1, [pc, #50]	; 1a246c <ExpandInk(RefVar const &, long)+0x128>
        1a2418:	e28d0008 	add	r0, sp, #8	; 0x8
        1a241c:	eb688fd1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1a2420:	e28d2004 	add	r2, sp, #4	; 0x4
        1a2424:	e59f1044 	ldr	r1, [pc, #44]	; 1a2470 <ExpandInk(RefVar const &, long)+0x12c>
        1a2428:	e28d0008 	add	r0, sp, #8	; 0x8
        1a242c:	eb688fcd 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1a2430:	e1a00005 	mov	r0, r5
        1a2434:	eb642877 	bl	1aac618 <$DisposeTStrokes(TStroke **)>
        1a2438:	e59d0000 	ldr	r0, [sp]
        1a243c:	eb68835e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2440:	e5bd0004 	ldr	r0, [sp, #4]!
        1a2444:	eb68835c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2448:	e28dd004 	add	sp, sp, #4	; 0x4
        1a244c:	e59d0000 	ldr	r0, [sp]
        1a2450:	e5904000 	ldr	r4, [r0]
        1a2454:	eb688358 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2458:	e1a00004 	mov	r0, r4
        1a245c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a2460:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        1a2464:	00681860 	rsbeq	r1, r8, r0, ror #16
        1a2468:	00684f08 	rsbeq	r4, r8, r8, lsl #30
        1a246c:	00682190 	streqb	r2, [r8], -#16
        1a2470:	00684900 	rsbeq	r4, r8, r0, lsl #18
    */
}

/**
 * Symbol: ExpandUnit(TUnitPublic *)
 * Address: 001a2554
 */
ExpandUnit(TUnitPublic *) {
    /*
        1a2554:	e1a0c00d 	mov	ip, sp
        1a2558:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a255c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a2560:	e1a04000 	mov	r4, r0
        1a2564:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a2568:	e3a00002 	mov	r0, #2	; 0x2
        1a256c:	eb687ef6 	bl	1bc214c <$AllocateRefHandle(long)>
        1a2570:	e58d0000 	str	r0, [sp]
        1a2574:	e5940000 	ldr	r0, [r4]
        1a2578:	e5901000 	ldr	r1, [r0]
        1a257c:	e1a0e00f 	mov	lr, pc
        1a2580:	e281f044 	add	pc, r1, #68	; 0x44
        1a2584:	e1b06000 	movs	r6, r0
        1a2588:	0a00003a 	beq	1a2678 <ExpandUnit(TUnitPublic *)+0x124>
        1a258c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1a2590:	e596500c 	ldr	r5, [r6, #12]
        1a2594:	e1a01005 	mov	r1, r5
        1a2598:	e59f00ec 	ldr	r0, [pc, #ec]	; 1a268c <ExpandUnit(TUnitPublic *)+0x138>
        1a259c:	eb687ee5 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1a25a0:	eb687ee9 	bl	1bc214c <$AllocateRefHandle(long)>
        1a25a4:	e58d0008 	str	r0, [sp, #8]
        1a25a8:	e1a0100d 	mov	r1, sp
        1a25ac:	e1a00004 	mov	r0, r4
        1a25b0:	eb639fee 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        1a25b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a25b8:	e28d0004 	add	r0, sp, #4	; 0x4
        1a25bc:	eb693476 	bl	1bef79c <$ToObject(TRect const &)>
        1a25c0:	eb687ee1 	bl	1bc214c <$AllocateRefHandle(long)>
        1a25c4:	e3a04000 	mov	r4, #0	; 0x0
        1a25c8:	e3550000 	cmp	r5, #0	; 0x0
        1a25cc:	e58d0000 	str	r0, [sp]
        1a25d0:	da000013 	ble	1a2624 <ExpandUnit(TUnitPublic *)+0xd0>
        1a25d4:	e1a01004 	mov	r1, r4
        1a25d8:	e1a00006 	mov	r0, r6
        1a25dc:	eb66f672 	bl	1b5ffac <TUnitList::$GetUnit(unsigned long)>
        1a25e0:	e3a01000 	mov	r1, #0	; 0x0
        1a25e4:	e5902000 	ldr	r2, [r0]
        1a25e8:	e1a0e00f 	mov	lr, pc
        1a25ec:	e282f040 	add	pc, r2, #64	; 0x40
        1a25f0:	eb644d3e 	bl	1ab5af0 <$MakeStrokeRef(TStroke *)>
        1a25f4:	eb687ed4 	bl	1bc214c <$AllocateRefHandle(long)>
        1a25f8:	e1a07000 	mov	r7, r0
        1a25fc:	e1a01004 	mov	r1, r4
        1a2600:	e5902000 	ldr	r2, [r0]
        1a2604:	e59d000c 	ldr	r0, [sp, #12]
        1a2608:	e5900000 	ldr	r0, [r0]
        1a260c:	eb688f51 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1a2610:	e1a00007 	mov	r0, r7
        1a2614:	eb6882e8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2618:	e2844001 	add	r4, r4, #1	; 0x1
        1a261c:	e1540005 	cmp	r4, r5
        1a2620:	baffffeb 	blt	1a25d4 <ExpandUnit(TUnitPublic *)+0x80>
        1a2624:	e59f0064 	ldr	r0, [pc, #64]	; 1a2690 <ExpandUnit(TUnitPublic *)+0x13c>
        1a2628:	eb687ecf 	bl	1bc216c <$Clone(RefVar const &)>
        1a262c:	e59d1010 	ldr	r1, [sp, #16]
        1a2630:	e1a0200d 	mov	r2, sp
        1a2634:	e5810000 	str	r0, [r1]
        1a2638:	e59f1054 	ldr	r1, [pc, #54]	; 1a2694 <ExpandUnit(TUnitPublic *)+0x140>
        1a263c:	e28d0010 	add	r0, sp, #16	; 0x10
        1a2640:	eb688f48 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1a2644:	e28d200c 	add	r2, sp, #12	; 0xc
        1a2648:	e59f1048 	ldr	r1, [pc, #48]	; 1a2698 <ExpandUnit(TUnitPublic *)+0x144>
        1a264c:	e28d0010 	add	r0, sp, #16	; 0x10
        1a2650:	eb688f44 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1a2654:	e1a00006 	mov	r0, r6
        1a2658:	e1a0e00f 	mov	lr, pc
        1a265c:	e596f000 	ldr	pc, [r6]
        1a2660:	e59d0000 	ldr	r0, [sp]
        1a2664:	eb6882d4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2668:	e28dd004 	add	sp, sp, #4	; 0x4
        1a266c:	e59d0008 	ldr	r0, [sp, #8]
        1a2670:	eb6882d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2674:	e28dd00c 	add	sp, sp, #12	; 0xc
        1a2678:	e59d0000 	ldr	r0, [sp]
        1a267c:	e5904000 	ldr	r4, [r0]
        1a2680:	eb6882cd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a2684:	e1a00004 	mov	r0, r4
        1a2688:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a268c:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        1a2690:	00681860 	rsbeq	r1, r8, r0, ror #16
        1a2694:	00682190 	streqb	r2, [r8], -#16
        1a2698:	00684900 	rsbeq	r4, r8, r0, lsl #18
    */
}

/**
 * Symbol: EmptyRectangle
 * Address: 001a3fec
 */
void globals::EmptyRectangle() {
    /*
        1a3fec:	e5901004 	ldr	r1, [r0, #4]
        1a3ff0:	e590200c 	ldr	r2, [r0, #12]
        1a3ff4:	e1510002 	cmp	r1, r2
        1a3ff8:	aa000003 	bge	1a400c <EmptyRectangle+0x20>
        1a3ffc:	e5901008 	ldr	r1, [r0, #8]
        1a4000:	e5900000 	ldr	r0, [r0]
        1a4004:	e1510000 	cmp	r1, r0
        1a4008:	ca000001 	bgt	1a4014 <EmptyRectangle+0x28>
        1a400c:	e3a00001 	mov	r0, #1	; 0x1
        1a4010:	ea000000 	b	1a4018 <EmptyRectangle+0x2c>
        1a4014:	e3a00000 	mov	r0, #0	; 0x0
        1a4018:	e20000ff 	and	r0, r0, #255	; 0xff
        1a401c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ExpandWord(unsigned short *)
 * Address: 001aa930
 */
ExpandWord(unsigned short *) {
    /*
        1aa930:	e1a0c00d 	mov	ip, sp
        1aa934:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1aa938:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aa93c:	e1a06000 	mov	r6, r0
        1aa940:	e24dd008 	sub	sp, sp, #8	; 0x8
        1aa944:	e3a05000 	mov	r5, #0	; 0x0
        1aa948:	eb690f84 	bl	1bee760 <$Ustrlen>
        1aa94c:	e2800001 	add	r0, r0, #1	; 0x1
        1aa950:	e1a00080 	mov	r0, r0, lsl #1
        1aa954:	e1a07000 	mov	r7, r0
        1aa958:	eb68ddf8 	bl	1be2140 <$NewPtr>
        1aa95c:	e1b04000 	movs	r4, r0
        1aa960:	0a000080 	beq	1aab68 <ExpandWord(unsigned short *)+0x238>
        1aa964:	e1a02007 	mov	r2, r7
        1aa968:	e1a01004 	mov	r1, r4
        1aa96c:	e1a00006 	mov	r0, r6
        1aa970:	eb68d177 	bl	1bdef54 <$BlockMove>
        1aa974:	e24dd008 	sub	sp, sp, #8	; 0x8
        1aa978:	e1a0200d 	mov	r2, sp
        1aa97c:	e28d1004 	add	r1, sp, #4	; 0x4
        1aa980:	e1a00004 	mov	r0, r4
        1aa984:	eb640301 	bl	1aab590 <$CollectPunctSymbols__FPUsPPUsT2>
        1aa988:	e24dd004 	sub	sp, sp, #4	; 0x4
        1aa98c:	e59d0008 	ldr	r0, [sp, #8]
        1aa990:	e3300000 	teq	r0, #0	; 0x0
        1aa994:	0a000001 	beq	1aa9a0 <ExpandWord(unsigned short *)+0x70>
        1aa998:	eb690f70 	bl	1bee760 <$Ustrlen>
        1aa99c:	ea000000 	b	1aa9a4 <ExpandWord(unsigned short *)+0x74>
        1aa9a0:	e3a00000 	mov	r0, #0	; 0x0
        1aa9a4:	e1a06000 	mov	r6, r0
        1aa9a8:	e59d0004 	ldr	r0, [sp, #4]
        1aa9ac:	e3300000 	teq	r0, #0	; 0x0
        1aa9b0:	0a000001 	beq	1aa9bc <ExpandWord(unsigned short *)+0x8c>
        1aa9b4:	eb690f69 	bl	1bee760 <$Ustrlen>
        1aa9b8:	ea000000 	b	1aa9c0 <ExpandWord(unsigned short *)+0x90>
        1aa9bc:	e3a00000 	mov	r0, #0	; 0x0
        1aa9c0:	e1a0a000 	mov	sl, r0
        1aa9c4:	e1a00004 	mov	r0, r4
        1aa9c8:	eb63fee2 	bl	1aaa558 <$Capitalized(unsigned short *)>
        1aa9cc:	e58d0000 	str	r0, [sp]
        1aa9d0:	e1a00004 	mov	r0, r4
        1aa9d4:	e3a01001 	mov	r1, #1	; 0x1
        1aa9d8:	eb68fedd 	bl	1bea554 <$LowercaseText(unsigned short *, long)>
        1aa9dc:	e1a00004 	mov	r0, r4
        1aa9e0:	eb690f5e 	bl	1bee760 <$Ustrlen>
        1aa9e4:	e3500000 	cmp	r0, #0	; 0x0
        1aa9e8:	9a000054 	bls	1aab40 <ExpandWord(unsigned short *)+0x210>
        1aa9ec:	e28d100c 	add	r1, sp, #12	; 0xc
        1aa9f0:	e1a00004 	mov	r0, r4
        1aa9f4:	eb641fc9 	bl	1ab2920 <$GetExpandIndex(unsigned short *, unsigned long *)>
        1aa9f8:	e3300000 	teq	r0, #0	; 0x0
        1aa9fc:	0a00004f 	beq	1aab40 <ExpandWord(unsigned short *)+0x210>
        1aaa00:	e3a00023 	mov	r0, #35	; 0x23
        1aaa04:	eb641ba6 	bl	1ab18a4 <$FindDictionaryFrame(unsigned long)>
        1aaa08:	eb685dcf 	bl	1bc214c <$AllocateRefHandle(long)>
        1aaa0c:	e1a09000 	mov	r9, r0
        1aaa10:	e59f0158 	ldr	r0, [pc, #158]	; 1aab70 <ExpandWord(unsigned short *)+0x240>
        1aaa14:	e5900000 	ldr	r0, [r0]
        1aaa18:	e5901000 	ldr	r1, [r0]
        1aaa1c:	e5990000 	ldr	r0, [r9]
        1aaa20:	eb68660e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1aaa24:	eb685dc8 	bl	1bc214c <$AllocateRefHandle(long)>
        1aaa28:	e1a08000 	mov	r8, r0
        1aaa2c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1aaa30:	e59d1010 	ldr	r1, [sp, #16]
        1aaa34:	e5900000 	ldr	r0, [r0]
        1aaa38:	eb686605 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1aaa3c:	eb685dc2 	bl	1bc214c <$AllocateRefHandle(long)>
        1aaa40:	e58d0000 	str	r0, [sp]
        1aaa44:	e5900000 	ldr	r0, [r0]
        1aaa48:	e3300002 	teq	r0, #2	; 0x2
        1aaa4c:	0a000034 	beq	1aab24 <ExpandWord(unsigned short *)+0x1f4>
        1aaa50:	eb686a15 	bl	1bc52ac <$Length(long)>
        1aaa54:	e2400002 	sub	r0, r0, #2	; 0x2
        1aaa58:	e1a070a0 	mov	r7, r0, lsr #1
        1aaa5c:	e3570000 	cmp	r7, #0	; 0x0
        1aaa60:	da00002f 	ble	1aab24 <ExpandWord(unsigned short *)+0x1f4>
        1aaa64:	e0860007 	add	r0, r6, r7
        1aaa68:	e080000a 	add	r0, r0, sl
        1aaa6c:	e58d0014 	str	r0, [sp, #20]
        1aaa70:	e2800001 	add	r0, r0, #1	; 0x1
        1aaa74:	e1a00080 	mov	r0, r0, lsl #1
        1aaa78:	eb68ddab 	bl	1be212c <$NewHandle>
        1aaa7c:	e1b05000 	movs	r5, r0
        1aaa80:	0a000027 	beq	1aab24 <ExpandWord(unsigned short *)+0x1f4>
        1aaa84:	e59d000c 	ldr	r0, [sp, #12]
        1aaa88:	e3300000 	teq	r0, #0	; 0x0
        1aaa8c:	11a02086 	movne	r2, r6, lsl #1
        1aaa90:	15951000 	ldrne	r1, [r5]
        1aaa94:	1b68d12e 	blne	1bdef54 <$BlockMove>
        1aaa98:	e24dd004 	sub	sp, sp, #4	; 0x4
        1aaa9c:	e28d0004 	add	r0, sp, #4	; 0x4
        1aaaa0:	eb6861b7 	bl	1bc3184 <$GetCString(RefVar const &)>
        1aaaa4:	e1a02087 	mov	r2, r7, lsl #1
        1aaaa8:	e58d0000 	str	r0, [sp]
        1aaaac:	e5950000 	ldr	r0, [r5]
        1aaab0:	e0801086 	add	r1, r0, r6, lsl #1
        1aaab4:	e59d0000 	ldr	r0, [sp]
        1aaab8:	eb68d125 	bl	1bdef54 <$BlockMove>
        1aaabc:	e59d0008 	ldr	r0, [sp, #8]
        1aaac0:	e3300000 	teq	r0, #0	; 0x0
        1aaac4:	0a000007 	beq	1aaae8 <ExpandWord(unsigned short *)+0x1b8>
        1aaac8:	e59d0000 	ldr	r0, [sp]
        1aaacc:	eb63fea1 	bl	1aaa558 <$Capitalized(unsigned short *)>
        1aaad0:	e3300000 	teq	r0, #0	; 0x0
        1aaad4:	1a000003 	bne	1aaae8 <ExpandWord(unsigned short *)+0x1b8>
        1aaad8:	e5950000 	ldr	r0, [r5]
        1aaadc:	e0800086 	add	r0, r0, r6, lsl #1
        1aaae0:	e3a01001 	mov	r1, #1	; 0x1
        1aaae4:	eb690f18 	bl	1bee74c <$UppercaseText(unsigned short *, long)>
        1aaae8:	e59d000c 	ldr	r0, [sp, #12]
        1aaaec:	e3300000 	teq	r0, #0	; 0x0
        1aaaf0:	0a000004 	beq	1aab08 <ExpandWord(unsigned short *)+0x1d8>
        1aaaf4:	e5951000 	ldr	r1, [r5]
        1aaaf8:	e0811086 	add	r1, r1, r6, lsl #1
        1aaafc:	e0811087 	add	r1, r1, r7, lsl #1
        1aab00:	e1a0208a 	mov	r2, sl, lsl #1
        1aab04:	eb68d112 	bl	1bdef54 <$BlockMove>
        1aab08:	e3a00000 	mov	r0, #0	; 0x0
        1aab0c:	e59d1018 	ldr	r1, [sp, #24]
        1aab10:	e5952000 	ldr	r2, [r5]
        1aab14:	e0821081 	add	r1, r2, r1, lsl #1
        1aab18:	e5c10001 	strb	r0, [r1, #1]
        1aab1c:	e5c10000 	strb	r0, [r1]
        1aab20:	e28dd004 	add	sp, sp, #4	; 0x4
        1aab24:	e59d0000 	ldr	r0, [sp]
        1aab28:	eb6861a3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aab2c:	e28dd004 	add	sp, sp, #4	; 0x4
        1aab30:	e1a00008 	mov	r0, r8
        1aab34:	eb6861a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aab38:	e1a00009 	mov	r0, r9
        1aab3c:	eb68619e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1aab40:	e59d0008 	ldr	r0, [sp, #8]
        1aab44:	e3300000 	teq	r0, #0	; 0x0
        1aab48:	1b68d959 	blne	1be10b4 <$DisposPtr>
        1aab4c:	e59d0004 	ldr	r0, [sp, #4]
        1aab50:	e3300000 	teq	r0, #0	; 0x0
        1aab54:	1b68d956 	blne	1be10b4 <$DisposPtr>
        1aab58:	e28dd00c 	add	sp, sp, #12	; 0xc
        1aab5c:	e3340000 	teq	r4, #0	; 0x0
        1aab60:	11a00004 	movne	r0, r4
        1aab64:	1b68d952 	blne	1be10b4 <$DisposPtr>
        1aab68:	e1a00005 	mov	r0, r5
        1aab6c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1aab70:	006835c8 	rsbeq	r3, r8, r8, asr #11
    */
}

/**
 * Symbol: extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps
 * Address: 001bc434
 */
void globals::extract_all_extr() {
    /*
        1bc434:	e1a0c00d 	mov	ip, sp
        1bc438:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1bc43c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1bc440:	e24cb014 	sub	fp, ip, #20	; 0x14
        1bc444:	e1a05002 	mov	r5, r2
        1bc448:	e1a04003 	mov	r4, r3
        1bc44c:	e20190ff 	and	r9, r1, #255	; 0xff
        1bc450:	e24dd020 	sub	sp, sp, #32	; 0x20
        1bc454:	e3a07000 	mov	r7, #0	; 0x0
        1bc458:	e3a08000 	mov	r8, #0	; 0x0
        1bc45c:	e3a0a000 	mov	sl, #0	; 0x0
        1bc460:	e5901004 	ldr	r1, [r0, #4]
        1bc464:	e5906040 	ldr	r6, [r0, #64]
        1bc468:	e58d1018 	str	r1, [sp, #24]
        1bc46c:	e590100c 	ldr	r1, [r0, #12]
        1bc470:	e58d1014 	str	r1, [sp, #20]
        1bc474:	e5b02014 	ldr	r2, [r0, #20]!
        1bc478:	e3a00000 	mov	r0, #0	; 0x0
        1bc47c:	e58d2010 	str	r2, [sp, #16]
        1bc480:	e5cd000b 	strb	r0, [sp, #11]
        1bc484:	e5cd000a 	strb	r0, [sp, #10]
        1bc488:	e5cd000f 	strb	r0, [sp, #15]
        1bc48c:	e5cd000e 	strb	r0, [sp, #14]
        1bc490:	e5cd0009 	strb	r0, [sp, #9]
        1bc494:	e5cd0008 	strb	r0, [sp, #8]
        1bc498:	e5cd000d 	strb	r0, [sp, #13]
        1bc49c:	e5cd000c 	strb	r0, [sp, #12]
        1bc4a0:	e3360000 	teq	r6, #0	; 0x0
        1bc4a4:	e5840000 	str	r0, [r4]
        1bc4a8:	0a000080 	beq	1bc6b0 <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x27c>
        1bc4ac:	e5d60000 	ldrb	r0, [r6]
        1bc4b0:	e3300010 	teq	r0, #16	; 0x10
        1bc4b4:	1a000005 	bne	1bc4d0 <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x9c>
        1bc4b8:	e5960004 	ldr	r0, [r6, #4]
        1bc4bc:	e1a00840 	mov	r0, r0, asr #16
        1bc4c0:	e58d001c 	str	r0, [sp, #28]
        1bc4c4:	e28d1008 	add	r1, sp, #8	; 0x8
        1bc4c8:	e8911008 	ldmia	r1, {r3, ip}
        1bc4cc:	e88d1008 	stmia	sp, {r3, ip}
        1bc4d0:	e5d60000 	ldrb	r0, [r6]
        1bc4d4:	e1300009 	teq	r0, r9
        1bc4d8:	1a000007 	bne	1bc4fc <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0xc8>
        1bc4dc:	e5d60002 	ldrb	r0, [r6, #2]
        1bc4e0:	e3300001 	teq	r0, #1	; 0x1
        1bc4e4:	13300005 	teqne	r0, #5	; 0x5
        1bc4e8:	13300003 	teqne	r0, #3	; 0x3
        1bc4ec:	13300008 	teqne	r0, #8	; 0x8
        1bc4f0:	05940000 	ldreq	r0, [r4]
        1bc4f4:	02800001 	addeq	r0, r0, #1	; 0x1
        1bc4f8:	05840000 	streq	r0, [r4]
        1bc4fc:	e5d60000 	ldrb	r0, [r6]
        1bc500:	e1300009 	teq	r0, r9
        1bc504:	1a000028 	bne	1bc5ac <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x178>
        1bc508:	e5d60001 	ldrb	r0, [r6, #1]
        1bc50c:	e330006f 	teq	r0, #111	; 0x6f
        1bc510:	0a000025 	beq	1bc5ac <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x178>
        1bc514:	e5d61002 	ldrb	r1, [r6, #2]
        1bc518:	e3310001 	teq	r1, #1	; 0x1
        1bc51c:	13310005 	teqne	r1, #5	; 0x5
        1bc520:	1330006e 	teqne	r0, #110	; 0x6e
        1bc524:	1a000020 	bne	1bc5ac <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x178>
        1bc528:	e3570032 	cmp	r7, #50	; 0x32
        1bc52c:	a3a00001 	movge	r0, #1	; 0x1
        1bc530:	aa000063 	bge	1bc6c4 <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x290>
        1bc534:	e5961008 	ldr	r1, [r6, #8]
        1bc538:	e1a01841 	mov	r1, r1, asr #16
        1bc53c:	e59d0018 	ldr	r0, [sp, #24]
        1bc540:	e7902081 	ldr	r2, [r0, r1, lsl #1]
        1bc544:	e1a02822 	mov	r2, r2, lsr #16
        1bc548:	e0850207 	add	r0, r5, r7, lsl #4
        1bc54c:	e5c02003 	strb	r2, [r0, #3]
        1bc550:	e1a02442 	mov	r2, r2, asr #8
        1bc554:	e5c02002 	strb	r2, [r0, #2]
        1bc558:	e59d2014 	ldr	r2, [sp, #20]
        1bc55c:	e7922081 	ldr	r2, [r2, r1, lsl #1]
        1bc560:	e1a02822 	mov	r2, r2, lsr #16
        1bc564:	e5c02005 	strb	r2, [r0, #5]
        1bc568:	e1a02442 	mov	r2, r2, asr #8
        1bc56c:	e5c02004 	strb	r2, [r0, #4]
        1bc570:	e59d2010 	ldr	r2, [sp, #16]
        1bc574:	e7921081 	ldr	r1, [r2, r1, lsl #1]
        1bc578:	e1a01821 	mov	r1, r1, lsr #16
        1bc57c:	e5c01007 	strb	r1, [r0, #7]
        1bc580:	e1a01441 	mov	r1, r1, asr #8
        1bc584:	e5c01006 	strb	r1, [r0, #6]
        1bc588:	e3a01000 	mov	r1, #0	; 0x0
        1bc58c:	e5c01001 	strb	r1, [r0, #1]
        1bc590:	e5c01000 	strb	r1, [r0]
        1bc594:	e5a0600c 	str	r6, [r0, #12]!
        1bc598:	e5d60001 	ldrb	r0, [r6, #1]
        1bc59c:	e330006e 	teq	r0, #110	; 0x6e
        1bc5a0:	13a00064 	movne	r0, #100	; 0x64
        1bc5a4:	15c60001 	strneb	r0, [r6, #1]
        1bc5a8:	e2877001 	add	r7, r7, #1	; 0x1
        1bc5ac:	e5d60000 	ldrb	r0, [r6]
        1bc5b0:	e3300020 	teq	r0, #32	; 0x20
        1bc5b4:	1a000036 	bne	1bc694 <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x260>
        1bc5b8:	e5d60002 	ldrb	r0, [r6, #2]
        1bc5bc:	e3300008 	teq	r0, #8	; 0x8
        1bc5c0:	0a000033 	beq	1bc694 <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x260>
        1bc5c4:	e5960006 	ldr	r0, [r6, #6]
        1bc5c8:	e1a00840 	mov	r0, r0, asr #16
        1bc5cc:	e28d3008 	add	r3, sp, #8	; 0x8
        1bc5d0:	e92d0008 	stmdb	sp!, {r3}
        1bc5d4:	e1a03000 	mov	r3, r0
        1bc5d8:	e59d0020 	ldr	r0, [sp, #32]
        1bc5dc:	e1a02800 	mov	r2, r0, lsl #16
        1bc5e0:	e1a02842 	mov	r2, r2, asr #16
        1bc5e4:	e59d001c 	ldr	r0, [sp, #28]
        1bc5e8:	e59d1018 	ldr	r1, [sp, #24]
        1bc5ec:	eb658e8c 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1bc5f0:	e28dd004 	add	sp, sp, #4	; 0x4
        1bc5f4:	e59d0004 	ldr	r0, [sp, #4]
        1bc5f8:	e1b00840 	movs	r0, r0, asr #16
        1bc5fc:	0a000008 	beq	1bc624 <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x1f0>
        1bc600:	e59d1004 	ldr	r1, [sp, #4]
        1bc604:	e59d0008 	ldr	r0, [sp, #8]
        1bc608:	e1a00840 	mov	r0, r0, asr #16
        1bc60c:	e0400841 	sub	r0, r0, r1, asr #16
        1bc610:	e3a01001 	mov	r1, #1	; 0x1
        1bc614:	e0811080 	add	r1, r1, r0, lsl #1
        1bc618:	e3a00003 	mov	r0, #3	; 0x3
        1bc61c:	eb67d8c7 	bl	1bb2940 <$__rt_sdiv>
        1bc620:	e1a0a000 	mov	sl, r0
        1bc624:	e35a0000 	cmp	sl, #0	; 0x0
        1bc628:	c088800a 	addgt	r8, r8, sl
        1bc62c:	e5c68002 	strb	r8, [r6, #2]
        1bc630:	e1a02007 	mov	r2, r7
        1bc634:	e5960010 	ldr	r0, [r6, #16]
        1bc638:	e5d01000 	ldrb	r1, [r0]
        1bc63c:	e3310010 	teq	r1, #16	; 0x10
        1bc640:	0a000013 	beq	1bc694 <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x260>
        1bc644:	e1a01808 	mov	r1, r8, lsl #16
        1bc648:	e1a01841 	mov	r1, r1, asr #16
        1bc64c:	e1a03441 	mov	r3, r1, asr #8
        1bc650:	e5d0c000 	ldrb	ip, [r0]
        1bc654:	e13c0009 	teq	ip, r9
        1bc658:	1a000009 	bne	1bc684 <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x250>
        1bc65c:	e5d0c002 	ldrb	ip, [r0, #2]
        1bc660:	e33c0001 	teq	ip, #1	; 0x1
        1bc664:	133c0005 	teqne	ip, #5	; 0x5
        1bc668:	15d0c001 	ldrneb	ip, [r0, #1]
        1bc66c:	133c006e 	teqne	ip, #110	; 0x6e
        1bc670:	1a000003 	bne	1bc684 <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x250>
        1bc674:	e2422001 	sub	r2, r2, #1	; 0x1
        1bc678:	e085c202 	add	ip, r5, r2, lsl #4
        1bc67c:	e5cc1009 	strb	r1, [ip, #9]
        1bc680:	e5cc3008 	strb	r3, [ip, #8]
        1bc684:	e5900010 	ldr	r0, [r0, #16]
        1bc688:	e5d0c000 	ldrb	ip, [r0]
        1bc68c:	e33c0010 	teq	ip, #16	; 0x10
        1bc690:	1affffee 	bne	1bc650 <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x21c>
        1bc694:	e596000c 	ldr	r0, [r6, #12]
        1bc698:	e3300000 	teq	r0, #0	; 0x0
        1bc69c:	059b0014 	ldreq	r0, [fp, #20]
        1bc6a0:	05807000 	streq	r7, [r0]
        1bc6a4:	e596600c 	ldr	r6, [r6, #12]
        1bc6a8:	e3360000 	teq	r6, #0	; 0x0
        1bc6ac:	1affff7e 	bne	1bc4ac <extract_all_extr__FP8low_typeUcP4EXTRPiT4Ps+0x78>
        1bc6b0:	e59b0018 	ldr	r0, [fp, #24]
        1bc6b4:	e5c08001 	strb	r8, [r0, #1]
        1bc6b8:	e1a01448 	mov	r1, r8, asr #8
        1bc6bc:	e5c01000 	strb	r1, [r0]
        1bc6c0:	e3a00000 	mov	r0, #0	; 0x0
        1bc6c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: extract_num_extr(low_type *, unsigned char, EXTR *, int *)
 * Address: 001bdff0
 */
extract_num_extr(low_type *, unsigned char, EXTR *, int *) {
    /*
        1bdff0:	e1a0c00d 	mov	ip, sp
        1bdff4:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1bdff8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1bdffc:	e20170ff 	and	r7, r1, #255	; 0xff
        1be000:	e24dd008 	sub	sp, sp, #8	; 0x8
        1be004:	e3a05000 	mov	r5, #0	; 0x0
        1be008:	e5b08004 	ldr	r8, [r0, #4]!
        1be00c:	e5b06008 	ldr	r6, [r0, #8]!
        1be010:	e5b09008 	ldr	r9, [r0, #8]!
        1be014:	e590402c 	ldr	r4, [r0, #44]
        1be018:	e3340000 	teq	r4, #0	; 0x0
        1be01c:	0a000054 	beq	1be174 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0x184>
        1be020:	e5d40000 	ldrb	r0, [r4]
        1be024:	e3300010 	teq	r0, #16	; 0x10
        1be028:	0594a004 	ldreq	sl, [r4, #4]
        1be02c:	01a0a84a 	moveq	sl, sl, asr #16
        1be030:	0a000048 	beq	1be158 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0x168>
        1be034:	e3300020 	teq	r0, #32	; 0x20
        1be038:	1a000046 	bne	1be158 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0x168>
        1be03c:	e5d40002 	ldrb	r0, [r4, #2]
        1be040:	e3300001 	teq	r0, #1	; 0x1
        1be044:	133000ca 	teqne	r0, #202	; 0xca
        1be048:	0a000002 	beq	1be058 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0x68>
        1be04c:	e33000cd 	teq	r0, #205	; 0xcd
        1be050:	03370001 	teqeq	r7, #1	; 0x1
        1be054:	1a00003f 	bne	1be158 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0x168>
        1be058:	e5940006 	ldr	r0, [r4, #6]
        1be05c:	e1a00840 	mov	r0, r0, asr #16
        1be060:	e1a0300d 	mov	r3, sp
        1be064:	e92d0008 	stmdb	sp!, {r3}
        1be068:	e1a03000 	mov	r3, r0
        1be06c:	e1a0280a 	mov	r2, sl, lsl #16
        1be070:	e1a02842 	mov	r2, r2, asr #16
        1be074:	e1a01006 	mov	r1, r6
        1be078:	e1a00008 	mov	r0, r8
        1be07c:	eb6587e8 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1be080:	e28dd004 	add	sp, sp, #4	; 0x4
        1be084:	e3370001 	teq	r7, #1	; 0x1
        1be088:	159d1006 	ldrne	r1, [sp, #6]
        1be08c:	11a01841 	movne	r1, r1, asr #16
        1be090:	059d1002 	ldreq	r1, [sp, #2]
        1be094:	01a01841 	moveq	r1, r1, asr #16
        1be098:	e1a00004 	mov	r0, r4
        1be09c:	e5d42000 	ldrb	r2, [r4]
        1be0a0:	e3320010 	teq	r2, #16	; 0x10
        1be0a4:	0a00002b 	beq	1be158 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0x168>
        1be0a8:	e5d02000 	ldrb	r2, [r0]
        1be0ac:	e1320007 	teq	r2, r7
        1be0b0:	05902008 	ldreq	r2, [r0, #8]
        1be0b4:	01a02842 	moveq	r2, r2, asr #16
        1be0b8:	07962082 	ldreq	r2, [r6, r2, lsl #1]
        1be0bc:	01a02842 	moveq	r2, r2, asr #16
        1be0c0:	01320001 	teqeq	r2, r1
        1be0c4:	1a00001f 	bne	1be148 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0x158>
        1be0c8:	e3550032 	cmp	r5, #50	; 0x32
        1be0cc:	a3a00001 	movge	r0, #1	; 0x1
        1be0d0:	aa000028 	bge	1be178 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0x188>
        1be0d4:	e5d41002 	ldrb	r1, [r4, #2]
        1be0d8:	e5c01002 	strb	r1, [r0, #2]
        1be0dc:	e5902008 	ldr	r2, [r0, #8]
        1be0e0:	e1a02842 	mov	r2, r2, asr #16
        1be0e4:	e7983082 	ldr	r3, [r8, r2, lsl #1]
        1be0e8:	e1a03823 	mov	r3, r3, lsr #16
        1be0ec:	e51b1030 	ldr	r1, [fp, -#48]
        1be0f0:	e0811205 	add	r1, r1, r5, lsl #4
        1be0f4:	e5c13003 	strb	r3, [r1, #3]
        1be0f8:	e1a03443 	mov	r3, r3, asr #8
        1be0fc:	e5c13002 	strb	r3, [r1, #2]
        1be100:	e7963082 	ldr	r3, [r6, r2, lsl #1]
        1be104:	e1a03823 	mov	r3, r3, lsr #16
        1be108:	e5c13005 	strb	r3, [r1, #5]
        1be10c:	e1a03443 	mov	r3, r3, asr #8
        1be110:	e5c13004 	strb	r3, [r1, #4]
        1be114:	e7992082 	ldr	r2, [r9, r2, lsl #1]
        1be118:	e1a02822 	mov	r2, r2, lsr #16
        1be11c:	e5c12007 	strb	r2, [r1, #7]
        1be120:	e1a02442 	mov	r2, r2, asr #8
        1be124:	e5c12006 	strb	r2, [r1, #6]
        1be128:	e3a02000 	mov	r2, #0	; 0x0
        1be12c:	e5c12001 	strb	r2, [r1, #1]
        1be130:	e5c12000 	strb	r2, [r1]
        1be134:	e5a1000c 	str	r0, [r1, #12]!
        1be138:	e3a01064 	mov	r1, #100	; 0x64
        1be13c:	e5c01001 	strb	r1, [r0, #1]
        1be140:	e2855001 	add	r5, r5, #1	; 0x1
        1be144:	ea000003 	b	1be158 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0x168>
        1be148:	e5900010 	ldr	r0, [r0, #16]
        1be14c:	e5d02000 	ldrb	r2, [r0]
        1be150:	e3320010 	teq	r2, #16	; 0x10
        1be154:	1affffd3 	bne	1be0a8 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0xb8>
        1be158:	e594000c 	ldr	r0, [r4, #12]
        1be15c:	e3300000 	teq	r0, #0	; 0x0
        1be160:	051b302c 	ldreq	r3, [fp, -#44]
        1be164:	05835000 	streq	r5, [r3]
        1be168:	e594400c 	ldr	r4, [r4, #12]
        1be16c:	e3340000 	teq	r4, #0	; 0x0
        1be170:	1affffaa 	bne	1be020 <extract_num_extr(low_type *, unsigned char, EXTR *, int *)+0x30>
        1be174:	e3a00000 	mov	r0, #0	; 0x0
        1be178:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)
 * Address: 001c347c
 */
extrs_open(low_type *, SPEC_TYPE *, unsigned char, int) {
    /*
        1c347c:	e1a0c00d 	mov	ip, sp
        1c3480:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1c3484:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c3488:	e1a04001 	mov	r4, r1
        1c348c:	e20210ff 	and	r1, r2, #255	; 0xff
        1c3490:	e24dd014 	sub	sp, sp, #20	; 0x14
        1c3494:	e5902000 	ldr	r2, [r0]
        1c3498:	e592a0e0 	ldr	sl, [r2, #224]
        1c349c:	e1a0a84a 	mov	sl, sl, asr #16
        1c34a0:	e5b07004 	ldr	r7, [r0, #4]!
        1c34a4:	e5906008 	ldr	r6, [r0, #8]
        1c34a8:	e594000c 	ldr	r0, [r4, #12]
        1c34ac:	ea000000 	b	1c34b4 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x38>
        1c34b0:	e590000c 	ldr	r0, [r0, #12]
        1c34b4:	e5d02000 	ldrb	r2, [r0]
        1c34b8:	e3320020 	teq	r2, #32	; 0x20
        1c34bc:	0a000004 	beq	1c34d4 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x58>
        1c34c0:	e1320001 	teq	r2, r1
        1c34c4:	1afffff9 	bne	1c34b0 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x34>
        1c34c8:	e5d02000 	ldrb	r2, [r0]
        1c34cc:	e3320020 	teq	r2, #32	; 0x20
        1c34d0:	1590000c 	ldrne	r0, [r0, #12]
        1c34d4:	e5900006 	ldr	r0, [r0, #6]
        1c34d8:	e1a00840 	mov	r0, r0, asr #16
        1c34dc:	e58d0010 	str	r0, [sp, #16]
        1c34e0:	e5940010 	ldr	r0, [r4, #16]
        1c34e4:	e1a08004 	mov	r8, r4
        1c34e8:	e3530001 	cmp	r3, #1	; 0x1
        1c34ec:	da00000b 	ble	1c3520 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0xa4>
        1c34f0:	ea000000 	b	1c34f8 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x7c>
        1c34f4:	e5900010 	ldr	r0, [r0, #16]
        1c34f8:	e5d02000 	ldrb	r2, [r0]
        1c34fc:	e3320010 	teq	r2, #16	; 0x10
        1c3500:	0a000004 	beq	1c3518 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x9c>
        1c3504:	e1320001 	teq	r2, r1
        1c3508:	1afffff9 	bne	1c34f4 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x78>
        1c350c:	e5d02001 	ldrb	r2, [r0, #1]
        1c3510:	e3320000 	teq	r2, #0	; 0x0
        1c3514:	0afffff6 	beq	1c34f4 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x78>
        1c3518:	e1a08000 	mov	r8, r0
        1c351c:	e5900010 	ldr	r0, [r0, #16]
        1c3520:	e5d02000 	ldrb	r2, [r0]
        1c3524:	e3320010 	teq	r2, #16	; 0x10
        1c3528:	0a000004 	beq	1c3540 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0xc4>
        1c352c:	e1320001 	teq	r2, r1
        1c3530:	1afffff9 	bne	1c351c <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0xa0>
        1c3534:	e5d02000 	ldrb	r2, [r0]
        1c3538:	e3320010 	teq	r2, #16	; 0x10
        1c353c:	15900010 	ldrne	r0, [r0, #16]
        1c3540:	e5905004 	ldr	r5, [r0, #4]
        1c3544:	e1a05845 	mov	r5, r5, asr #16
        1c3548:	e5940008 	ldr	r0, [r4, #8]
        1c354c:	e1a00840 	mov	r0, r0, asr #16
        1c3550:	e7962080 	ldr	r2, [r6, r0, lsl #1]
        1c3554:	e1a02842 	mov	r2, r2, asr #16
        1c3558:	e58d2008 	str	r2, [sp, #8]
        1c355c:	e7970080 	ldr	r0, [r7, r0, lsl #1]
        1c3560:	e1a00840 	mov	r0, r0, asr #16
        1c3564:	e58d000c 	str	r0, [sp, #12]
        1c3568:	e5980008 	ldr	r0, [r8, #8]
        1c356c:	e1a00840 	mov	r0, r0, asr #16
        1c3570:	e7962080 	ldr	r2, [r6, r0, lsl #1]
        1c3574:	e1a02842 	mov	r2, r2, asr #16
        1c3578:	e58d2000 	str	r2, [sp]
        1c357c:	e7970080 	ldr	r0, [r7, r0, lsl #1]
        1c3580:	e1a00840 	mov	r0, r0, asr #16
        1c3584:	e3310001 	teq	r1, #1	; 0x1
        1c3588:	e58d0004 	str	r0, [sp, #4]
        1c358c:	13e09000 	mvnne	r9, #0	; 0x0
        1c3590:	03a09001 	moveq	r9, #1	; 0x1
        1c3594:	e59d0010 	ldr	r0, [sp, #16]
        1c3598:	e1550000 	cmp	r5, r0
        1c359c:	aa00002d 	bge	1c3658 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x1dc>
        1c35a0:	e5940004 	ldr	r0, [r4, #4]
        1c35a4:	e1550840 	cmp	r5, r0, asr #16
        1c35a8:	ba000002 	blt	1c35b8 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x13c>
        1c35ac:	e5940006 	ldr	r0, [r4, #6]
        1c35b0:	e1550840 	cmp	r5, r0, asr #16
        1c35b4:	da00000d 	ble	1c35f0 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x174>
        1c35b8:	e7960085 	ldr	r0, [r6, r5, lsl #1]
        1c35bc:	e1a00840 	mov	r0, r0, asr #16
        1c35c0:	e59d1008 	ldr	r1, [sp, #8]
        1c35c4:	e0410000 	sub	r0, r1, r0
        1c35c8:	e0000099 	mul	r0, r9, r0
        1c35cc:	e3500000 	cmp	r0, #0	; 0x0
        1c35d0:	da000006 	ble	1c35f0 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x174>
        1c35d4:	e7970085 	ldr	r0, [r7, r5, lsl #1]
        1c35d8:	e1a00840 	mov	r0, r0, asr #16
        1c35dc:	e59d100c 	ldr	r1, [sp, #12]
        1c35e0:	e0410000 	sub	r0, r1, r0
        1c35e4:	eb62b076 	bl	1a6f7c4 <$HWRAbs(int)>
        1c35e8:	e15000ca 	cmp	r0, sl, asr #1
        1c35ec:	ba000013 	blt	1c3640 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x1c4>
        1c35f0:	e5980004 	ldr	r0, [r8, #4]
        1c35f4:	e1550840 	cmp	r5, r0, asr #16
        1c35f8:	ba000002 	blt	1c3608 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x18c>
        1c35fc:	e5980006 	ldr	r0, [r8, #6]
        1c3600:	e1550840 	cmp	r5, r0, asr #16
        1c3604:	da00000f 	ble	1c3648 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x1cc>
        1c3608:	e7960085 	ldr	r0, [r6, r5, lsl #1]
        1c360c:	e1a00840 	mov	r0, r0, asr #16
        1c3610:	e59d1000 	ldr	r1, [sp]
        1c3614:	e0410000 	sub	r0, r1, r0
        1c3618:	e0000099 	mul	r0, r9, r0
        1c361c:	e3500000 	cmp	r0, #0	; 0x0
        1c3620:	da000008 	ble	1c3648 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x1cc>
        1c3624:	e7970085 	ldr	r0, [r7, r5, lsl #1]
        1c3628:	e1a00840 	mov	r0, r0, asr #16
        1c362c:	e59d1004 	ldr	r1, [sp, #4]
        1c3630:	e0410000 	sub	r0, r1, r0
        1c3634:	eb62b062 	bl	1a6f7c4 <$HWRAbs(int)>
        1c3638:	e15000ca 	cmp	r0, sl, asr #1
        1c363c:	aa000001 	bge	1c3648 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x1cc>
        1c3640:	e3a00000 	mov	r0, #0	; 0x0
        1c3644:	ea000004 	b	1c365c <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x1e0>
        1c3648:	e2855001 	add	r5, r5, #1	; 0x1
        1c364c:	e59d0010 	ldr	r0, [sp, #16]
        1c3650:	e1550000 	cmp	r5, r0
        1c3654:	baffffd1 	blt	1c35a0 <extrs_open(low_type *, SPEC_TYPE *, unsigned char, int)+0x124>
        1c3658:	e3a00001 	mov	r0, #1	; 0x1
        1c365c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: extract_ampl(low_type *, short *, int *)
 * Address: 001c4f74
 */
extract_ampl(low_type *, short *, int *) {
    /*
        1c4f74:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        1c4f78:	e3a0c000 	mov	ip, #0	; 0x0
        1c4f7c:	e5b0e00c 	ldr	lr, [r0, #12]!
        1c4f80:	e5903034 	ldr	r3, [r0, #52]
        1c4f84:	e3330000 	teq	r3, #0	; 0x0
        1c4f88:	0a000034 	beq	1c5060 <extract_ampl(low_type *, short *, int *)+0xec>
        1c4f8c:	e3a00001 	mov	r0, #1	; 0x1
        1c4f90:	e5d34000 	ldrb	r4, [r3]
        1c4f94:	e3340001 	teq	r4, #1	; 0x1
        1c4f98:	1a00002a 	bne	1c5048 <extract_ampl(low_type *, short *, int *)+0xd4>
        1c4f9c:	e5d34002 	ldrb	r4, [r3, #2]
        1c4fa0:	e3340001 	teq	r4, #1	; 0x1
        1c4fa4:	13340005 	teqne	r4, #5	; 0x5
        1c4fa8:	133400ca 	teqne	r4, #202	; 0xca
        1c4fac:	1a000025 	bne	1c5048 <extract_ampl(low_type *, short *, int *)+0xd4>
        1c4fb0:	e5934008 	ldr	r4, [r3, #8]
        1c4fb4:	e1a04844 	mov	r4, r4, asr #16
        1c4fb8:	e79e4084 	ldr	r4, [lr, r4, lsl #1]
        1c4fbc:	e1a04844 	mov	r4, r4, asr #16
        1c4fc0:	e283600c 	add	r6, r3, #12	; 0xc
        1c4fc4:	e8960060 	ldmia	r6, {r5, r6}
        1c4fc8:	e5d67000 	ldrb	r7, [r6]
        1c4fcc:	e3370003 	teq	r7, #3	; 0x3
        1c4fd0:	1a00000c 	bne	1c5008 <extract_ampl(low_type *, short *, int *)+0x94>
        1c4fd4:	e35c0064 	cmp	ip, #100	; 0x64
        1c4fd8:	a8bd80f0 	ldmgeia	sp!, {r4, r5, r6, r7, pc}
        1c4fdc:	e5966008 	ldr	r6, [r6, #8]
        1c4fe0:	e1a06846 	mov	r6, r6, asr #16
        1c4fe4:	e79e6086 	ldr	r6, [lr, r6, lsl #1]
        1c4fe8:	e1a06826 	mov	r6, r6, lsr #16
        1c4fec:	e0467004 	sub	r7, r6, r4
        1c4ff0:	e1a0600c 	mov	r6, ip
        1c4ff4:	e28cc001 	add	ip, ip, #1	; 0x1
        1c4ff8:	e0816086 	add	r6, r1, r6, lsl #1
        1c4ffc:	e5c67001 	strb	r7, [r6, #1]
        1c5000:	e1a07447 	mov	r7, r7, asr #8
        1c5004:	e5c67000 	strb	r7, [r6]
        1c5008:	e5d56000 	ldrb	r6, [r5]
        1c500c:	e3360003 	teq	r6, #3	; 0x3
        1c5010:	1a00000c 	bne	1c5048 <extract_ampl(low_type *, short *, int *)+0xd4>
        1c5014:	e35c0064 	cmp	ip, #100	; 0x64
        1c5018:	a8bd80f0 	ldmgeia	sp!, {r4, r5, r6, r7, pc}
        1c501c:	e5955008 	ldr	r5, [r5, #8]
        1c5020:	e1a05845 	mov	r5, r5, asr #16
        1c5024:	e79e5085 	ldr	r5, [lr, r5, lsl #1]
        1c5028:	e1a05825 	mov	r5, r5, lsr #16
        1c502c:	e0455004 	sub	r5, r5, r4
        1c5030:	e1a0400c 	mov	r4, ip
        1c5034:	e28cc001 	add	ip, ip, #1	; 0x1
        1c5038:	e0814084 	add	r4, r1, r4, lsl #1
        1c503c:	e5c45001 	strb	r5, [r4, #1]
        1c5040:	e1a05445 	mov	r5, r5, asr #8
        1c5044:	e5c45000 	strb	r5, [r4]
        1c5048:	e593400c 	ldr	r4, [r3, #12]
        1c504c:	e3340000 	teq	r4, #0	; 0x0
        1c5050:	0582c000 	streq	ip, [r2]
        1c5054:	e593300c 	ldr	r3, [r3, #12]
        1c5058:	e3330000 	teq	r3, #0	; 0x0
        1c505c:	1affffcb 	bne	1c4f90 <extract_ampl(low_type *, short *, int *)+0x1c>
        1c5060:	e3a00000 	mov	r0, #0	; 0x0
        1c5064:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: end_punct(low_type *, SPEC_TYPE *, int)
 * Address: 001c519c
 */
end_punct(low_type *, SPEC_TYPE *, int) {
    /*
        1c519c:	e1a0c00d 	mov	ip, sp
        1c51a0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1c51a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c51a8:	e1a04000 	mov	r4, r0
        1c51ac:	e1a05001 	mov	r5, r1
        1c51b0:	e1a06002 	mov	r6, r2
        1c51b4:	e24dd020 	sub	sp, sp, #32	; 0x20
        1c51b8:	e5900000 	ldr	r0, [r0]
        1c51bc:	e59080e0 	ldr	r8, [r0, #224]
        1c51c0:	e1a08848 	mov	r8, r8, asr #16
        1c51c4:	e5940004 	ldr	r0, [r4, #4]
        1c51c8:	e58d0018 	str	r0, [sp, #24]
        1c51cc:	e594100c 	ldr	r1, [r4, #12]
        1c51d0:	e58d1014 	str	r1, [sp, #20]
        1c51d4:	e5957006 	ldr	r7, [r5, #6]
        1c51d8:	e1a07847 	mov	r7, r7, asr #16
        1c51dc:	e595a010 	ldr	sl, [r5, #16]
        1c51e0:	e5da0000 	ldrb	r0, [sl]
        1c51e4:	e3300010 	teq	r0, #16	; 0x10
        1c51e8:	0a000003 	beq	1c51fc <end_punct(low_type *, SPEC_TYPE *, int)+0x60>
        1c51ec:	e59aa010 	ldr	sl, [sl, #16]
        1c51f0:	e5da0000 	ldrb	r0, [sl]
        1c51f4:	e3300010 	teq	r0, #16	; 0x10
        1c51f8:	1afffffb 	bne	1c51ec <end_punct(low_type *, SPEC_TYPE *, int)+0x50>
        1c51fc:	e59a9004 	ldr	r9, [sl, #4]
        1c5200:	e1a09849 	mov	r9, r9, asr #16
        1c5204:	e28d300c 	add	r3, sp, #12	; 0xc
        1c5208:	e92d0008 	stmdb	sp!, {r3}
        1c520c:	e1a03807 	mov	r3, r7, lsl #16
        1c5210:	e1a03843 	mov	r3, r3, asr #16
        1c5214:	e1a02009 	mov	r2, r9
        1c5218:	e59d001c 	ldr	r0, [sp, #28]
        1c521c:	e59d1018 	ldr	r1, [sp, #24]
        1c5220:	eb656b7f 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1c5224:	e5ba0010 	ldr	r0, [sl, #16]!
        1c5228:	e5ad0004 	str	r0, [sp, #4]!
        1c522c:	e5901006 	ldr	r1, [r0, #6]
        1c5230:	e1a01841 	mov	r1, r1, asr #16
        1c5234:	e58d101c 	str	r1, [sp, #28]
        1c5238:	e5d01000 	ldrb	r1, [r0]
        1c523c:	e3310010 	teq	r1, #16	; 0x10
        1c5240:	0a000003 	beq	1c5254 <end_punct(low_type *, SPEC_TYPE *, int)+0xb8>
        1c5244:	e5900010 	ldr	r0, [r0, #16]
        1c5248:	e5d01000 	ldrb	r1, [r0]
        1c524c:	e3310010 	teq	r1, #16	; 0x10
        1c5250:	1afffffb 	bne	1c5244 <end_punct(low_type *, SPEC_TYPE *, int)+0xa8>
        1c5254:	e590a004 	ldr	sl, [r0, #4]
        1c5258:	e1a0a84a 	mov	sl, sl, asr #16
        1c525c:	e28d3004 	add	r3, sp, #4	; 0x4
        1c5260:	e92d0008 	stmdb	sp!, {r3}
        1c5264:	e59d0020 	ldr	r0, [sp, #32]
        1c5268:	e1a03800 	mov	r3, r0, lsl #16
        1c526c:	e1a03843 	mov	r3, r3, asr #16
        1c5270:	e1a0200a 	mov	r2, sl
        1c5274:	e59d001c 	ldr	r0, [sp, #28]
        1c5278:	e59d1018 	ldr	r1, [sp, #24]
        1c527c:	eb656b68 	bl	1b20024 <$GetTraceBox__FPsT1iT3P5_RECT>
        1c5280:	e28dd004 	add	sp, sp, #4	; 0x4
        1c5284:	e1a02006 	mov	r2, r6
        1c5288:	e28d100c 	add	r1, sp, #12	; 0xc
        1c528c:	e8910003 	ldmia	r1, {r0, r1}
        1c5290:	eb658423 	bl	1b26324 <$pnt(_RECT, int)>
        1c5294:	e3300001 	teq	r0, #1	; 0x1
        1c5298:	1a00004b 	bne	1c53cc <end_punct(low_type *, SPEC_TYPE *, int)+0x230>
        1c529c:	e1a02006 	mov	r2, r6
        1c52a0:	e99d0003 	ldmib	sp, {r0, r1}
        1c52a4:	eb65841e 	bl	1b26324 <$pnt(_RECT, int)>
        1c52a8:	e3300001 	teq	r0, #1	; 0x1
        1c52ac:	1a000014 	bne	1c5304 <end_punct(low_type *, SPEC_TYPE *, int)+0x168>
        1c52b0:	e59d100c 	ldr	r1, [sp, #12]
        1c52b4:	e1a01841 	mov	r1, r1, asr #16
        1c52b8:	e59d0004 	ldr	r0, [sp, #4]
        1c52bc:	e0410840 	sub	r0, r1, r0, asr #16
        1c52c0:	eb62a93f 	bl	1a6f7c4 <$HWRAbs(int)>
        1c52c4:	e5941000 	ldr	r1, [r4]
        1c52c8:	e59110e0 	ldr	r1, [r1, #224]
        1c52cc:	e1500841 	cmp	r0, r1, asr #16
        1c52d0:	aa00000b 	bge	1c5304 <end_punct(low_type *, SPEC_TYPE *, int)+0x168>
        1c52d4:	e59d100e 	ldr	r1, [sp, #14]
        1c52d8:	e1a01841 	mov	r1, r1, asr #16
        1c52dc:	e59d000a 	ldr	r0, [sp, #10]
        1c52e0:	e1510840 	cmp	r1, r0, asr #16
        1c52e4:	ca000004 	bgt	1c52fc <end_punct(low_type *, SPEC_TYPE *, int)+0x160>
        1c52e8:	e59d1012 	ldr	r1, [sp, #18]
        1c52ec:	e1a01841 	mov	r1, r1, asr #16
        1c52f0:	e59d0006 	ldr	r0, [sp, #6]
        1c52f4:	e1510840 	cmp	r1, r0, asr #16
        1c52f8:	aa000001 	bge	1c5304 <end_punct(low_type *, SPEC_TYPE *, int)+0x168>
        1c52fc:	e3a00002 	mov	r0, #2	; 0x2
        1c5300:	ea0000a4 	b	1c5598 <end_punct(low_type *, SPEC_TYPE *, int)+0x3fc>
        1c5304:	e3a03005 	mov	r3, #5	; 0x5
        1c5308:	e92d0008 	stmdb	sp!, {r3}
        1c530c:	e1a0000a 	mov	r0, sl
        1c5310:	e59d1020 	ldr	r1, [sp, #32]
        1c5314:	e59d201c 	ldr	r2, [sp, #28]
        1c5318:	e59d3018 	ldr	r3, [sp, #24]
        1c531c:	eb658409 	bl	1b26348 <$str_com__FiT1PsT3T1>
        1c5320:	e28dd004 	add	sp, sp, #4	; 0x4
        1c5324:	e3300001 	teq	r0, #1	; 0x1
        1c5328:	1a000016 	bne	1c5388 <end_punct(low_type *, SPEC_TYPE *, int)+0x1ec>
        1c532c:	e59d100e 	ldr	r1, [sp, #14]
        1c5330:	e1a01841 	mov	r1, r1, asr #16
        1c5334:	e59d000a 	ldr	r0, [sp, #10]
        1c5338:	e1510840 	cmp	r1, r0, asr #16
        1c533c:	da000011 	ble	1c5388 <end_punct(low_type *, SPEC_TYPE *, int)+0x1ec>
        1c5340:	e59d1010 	ldr	r1, [sp, #16]
        1c5344:	e1a01841 	mov	r1, r1, asr #16
        1c5348:	e59d0004 	ldr	r0, [sp, #4]
        1c534c:	e0410840 	sub	r0, r1, r0, asr #16
        1c5350:	eb62a91b 	bl	1a6f7c4 <$HWRAbs(int)>
        1c5354:	e5941000 	ldr	r1, [r4]
        1c5358:	e59110e0 	ldr	r1, [r1, #224]
        1c535c:	e1500841 	cmp	r0, r1, asr #16
        1c5360:	baffffe5 	blt	1c52fc <end_punct(low_type *, SPEC_TYPE *, int)+0x160>
        1c5364:	e59d1008 	ldr	r1, [sp, #8]
        1c5368:	e59d000c 	ldr	r0, [sp, #12]
        1c536c:	e1a00840 	mov	r0, r0, asr #16
        1c5370:	e0400841 	sub	r0, r0, r1, asr #16
        1c5374:	eb62a912 	bl	1a6f7c4 <$HWRAbs(int)>
        1c5378:	e5941000 	ldr	r1, [r4]
        1c537c:	e59110e0 	ldr	r1, [r1, #224]
        1c5380:	e1500841 	cmp	r0, r1, asr #16
        1c5384:	baffffdc 	blt	1c52fc <end_punct(low_type *, SPEC_TYPE *, int)+0x160>
        1c5388:	e59d100e 	ldr	r1, [sp, #14]
        1c538c:	e1a01841 	mov	r1, r1, asr #16
        1c5390:	e59d000a 	ldr	r0, [sp, #10]
        1c5394:	e1510840 	cmp	r1, r0, asr #16
        1c5398:	da000009 	ble	1c53c4 <end_punct(low_type *, SPEC_TYPE *, int)+0x228>
        1c539c:	e59d1010 	ldr	r1, [sp, #16]
        1c53a0:	e1a01841 	mov	r1, r1, asr #16
        1c53a4:	e59d0008 	ldr	r0, [sp, #8]
        1c53a8:	e1510840 	cmp	r1, r0, asr #16
        1c53ac:	aa000004 	bge	1c53c4 <end_punct(low_type *, SPEC_TYPE *, int)+0x228>
        1c53b0:	e59d100c 	ldr	r1, [sp, #12]
        1c53b4:	e1a01841 	mov	r1, r1, asr #16
        1c53b8:	e59d0004 	ldr	r0, [sp, #4]
        1c53bc:	e1510840 	cmp	r1, r0, asr #16
        1c53c0:	caffffcd 	bgt	1c52fc <end_punct(low_type *, SPEC_TYPE *, int)+0x160>
        1c53c4:	e3a00001 	mov	r0, #1	; 0x1
        1c53c8:	ea000072 	b	1c5598 <end_punct(low_type *, SPEC_TYPE *, int)+0x3fc>
        1c53cc:	e3a03005 	mov	r3, #5	; 0x5
        1c53d0:	e92d0008 	stmdb	sp!, {r3}
        1c53d4:	e1a03007 	mov	r3, r7
        1c53d8:	e1a02009 	mov	r2, r9
        1c53dc:	e1a01005 	mov	r1, r5
        1c53e0:	e1a00004 	mov	r0, r4
        1c53e4:	eb657b93 	bl	1b24238 <$com__FP8low_typeP9SPEC_TYPEiN23>
        1c53e8:	e28dd004 	add	sp, sp, #4	; 0x4
        1c53ec:	e3300001 	teq	r0, #1	; 0x1
        1c53f0:	1a000027 	bne	1c5494 <end_punct(low_type *, SPEC_TYPE *, int)+0x2f8>
        1c53f4:	e1a02006 	mov	r2, r6
        1c53f8:	e99d0003 	ldmib	sp, {r0, r1}
        1c53fc:	eb6583c8 	bl	1b26324 <$pnt(_RECT, int)>
        1c5400:	e3300001 	teq	r0, #1	; 0x1
        1c5404:	1a00000e 	bne	1c5444 <end_punct(low_type *, SPEC_TYPE *, int)+0x2a8>
        1c5408:	e59d000e 	ldr	r0, [sp, #14]
        1c540c:	e1a00840 	mov	r0, r0, asr #16
        1c5410:	e59d100a 	ldr	r1, [sp, #10]
        1c5414:	e1500841 	cmp	r0, r1, asr #16
        1c5418:	da000009 	ble	1c5444 <end_punct(low_type *, SPEC_TYPE *, int)+0x2a8>
        1c541c:	e59d1008 	ldr	r1, [sp, #8]
        1c5420:	e59d0010 	ldr	r0, [sp, #16]
        1c5424:	e0880840 	add	r0, r8, r0, asr #16
        1c5428:	e1500841 	cmp	r0, r1, asr #16
        1c542c:	da000004 	ble	1c5444 <end_punct(low_type *, SPEC_TYPE *, int)+0x2a8>
        1c5430:	e59d1008 	ldr	r1, [sp, #8]
        1c5434:	e59d000c 	ldr	r0, [sp, #12]
        1c5438:	e0680840 	rsb	r0, r8, r0, asr #16
        1c543c:	e1500841 	cmp	r0, r1, asr #16
        1c5440:	baffffad 	blt	1c52fc <end_punct(low_type *, SPEC_TYPE *, int)+0x160>
        1c5444:	e1a02006 	mov	r2, r6
        1c5448:	e99d0003 	ldmib	sp, {r0, r1}
        1c544c:	eb6583b4 	bl	1b26324 <$pnt(_RECT, int)>
        1c5450:	e3300001 	teq	r0, #1	; 0x1
        1c5454:	1a00000e 	bne	1c5494 <end_punct(low_type *, SPEC_TYPE *, int)+0x2f8>
        1c5458:	e59d1006 	ldr	r1, [sp, #6]
        1c545c:	e1a01841 	mov	r1, r1, asr #16
        1c5460:	e59d0012 	ldr	r0, [sp, #18]
        1c5464:	e1510840 	cmp	r1, r0, asr #16
        1c5468:	da000009 	ble	1c5494 <end_punct(low_type *, SPEC_TYPE *, int)+0x2f8>
        1c546c:	e59d0008 	ldr	r0, [sp, #8]
        1c5470:	e59d1010 	ldr	r1, [sp, #16]
        1c5474:	e0881841 	add	r1, r8, r1, asr #16
        1c5478:	e1510840 	cmp	r1, r0, asr #16
        1c547c:	da000004 	ble	1c5494 <end_punct(low_type *, SPEC_TYPE *, int)+0x2f8>
        1c5480:	e59d1008 	ldr	r1, [sp, #8]
        1c5484:	e59d000c 	ldr	r0, [sp, #12]
        1c5488:	e0680840 	rsb	r0, r8, r0, asr #16
        1c548c:	e1500841 	cmp	r0, r1, asr #16
        1c5490:	baffff99 	blt	1c52fc <end_punct(low_type *, SPEC_TYPE *, int)+0x160>
        1c5494:	e3a03005 	mov	r3, #5	; 0x5
        1c5498:	e92d0008 	stmdb	sp!, {r3}
        1c549c:	e1a03007 	mov	r3, r7
        1c54a0:	e1a02009 	mov	r2, r9
        1c54a4:	e1a01005 	mov	r1, r5
        1c54a8:	e1a00004 	mov	r0, r4
        1c54ac:	eb657b61 	bl	1b24238 <$com__FP8low_typeP9SPEC_TYPEiN23>
        1c54b0:	e28dd004 	add	sp, sp, #4	; 0x4
        1c54b4:	e3300001 	teq	r0, #1	; 0x1
        1c54b8:	1a00001a 	bne	1c5528 <end_punct(low_type *, SPEC_TYPE *, int)+0x38c>
        1c54bc:	e5940076 	ldr	r0, [r4, #118]
        1c54c0:	e1a00840 	mov	r0, r0, asr #16
        1c54c4:	e1a000c0 	mov	r0, r0, asr #1
        1c54c8:	e594107a 	ldr	r1, [r4, #122]
        1c54cc:	e08018c1 	add	r1, r0, r1, asr #17
        1c54d0:	e59d0012 	ldr	r0, [sp, #18]
        1c54d4:	e1510840 	cmp	r1, r0, asr #16
        1c54d8:	da000012 	ble	1c5528 <end_punct(low_type *, SPEC_TYPE *, int)+0x38c>
        1c54dc:	e3a03005 	mov	r3, #5	; 0x5
        1c54e0:	e92d0008 	stmdb	sp!, {r3}
        1c54e4:	e1a0200a 	mov	r2, sl
        1c54e8:	e1a00004 	mov	r0, r4
        1c54ec:	e59d1004 	ldr	r1, [sp, #4]
        1c54f0:	e59d3020 	ldr	r3, [sp, #32]
        1c54f4:	eb657b4f 	bl	1b24238 <$com__FP8low_typeP9SPEC_TYPEiN23>
        1c54f8:	e28dd004 	add	sp, sp, #4	; 0x4
        1c54fc:	e3300001 	teq	r0, #1	; 0x1
        1c5500:	1affffaf 	bne	1c53c4 <end_punct(low_type *, SPEC_TYPE *, int)+0x228>
        1c5504:	e5940076 	ldr	r0, [r4, #118]
        1c5508:	e1a00840 	mov	r0, r0, asr #16
        1c550c:	e1a000c0 	mov	r0, r0, asr #1
        1c5510:	e594107a 	ldr	r1, [r4, #122]
        1c5514:	e08018c1 	add	r1, r0, r1, asr #17
        1c5518:	e59d000a 	ldr	r0, [sp, #10]
        1c551c:	e1510840 	cmp	r1, r0, asr #16
        1c5520:	daffffa7 	ble	1c53c4 <end_punct(low_type *, SPEC_TYPE *, int)+0x228>
        1c5524:	eaffff74 	b	1c52fc <end_punct(low_type *, SPEC_TYPE *, int)+0x160>
        1c5528:	e3a03005 	mov	r3, #5	; 0x5
        1c552c:	e92d0008 	stmdb	sp!, {r3}
        1c5530:	e1a03007 	mov	r3, r7
        1c5534:	e1a02009 	mov	r2, r9
        1c5538:	e1a01005 	mov	r1, r5
        1c553c:	e1a00004 	mov	r0, r4
        1c5540:	eb657b3c 	bl	1b24238 <$com__FP8low_typeP9SPEC_TYPEiN23>
        1c5544:	e28dd004 	add	sp, sp, #4	; 0x4
        1c5548:	e3300001 	teq	r0, #1	; 0x1
        1c554c:	1a000010 	bne	1c5594 <end_punct(low_type *, SPEC_TYPE *, int)+0x3f8>
        1c5550:	e5940076 	ldr	r0, [r4, #118]
        1c5554:	e1a00840 	mov	r0, r0, asr #16
        1c5558:	e3a05001 	mov	r5, #1	; 0x1
        1c555c:	e0851080 	add	r1, r5, r0, lsl #1
        1c5560:	e3a00003 	mov	r0, #3	; 0x3
        1c5564:	eb67b4f5 	bl	1bb2940 <$__rt_sdiv>
        1c5568:	e1a06000 	mov	r6, r0
        1c556c:	e594007a 	ldr	r0, [r4, #122]
        1c5570:	e1a00840 	mov	r0, r0, asr #16
        1c5574:	e2801001 	add	r1, r0, #1	; 0x1
        1c5578:	e3a00003 	mov	r0, #3	; 0x3
        1c557c:	eb67b4ef 	bl	1bb2940 <$__rt_sdiv>
        1c5580:	e0861000 	add	r1, r6, r0
        1c5584:	e59d000e 	ldr	r0, [sp, #14]
        1c5588:	e1510840 	cmp	r1, r0, asr #16
        1c558c:	b1a00005 	movlt	r0, r5
        1c5590:	ba000000 	blt	1c5598 <end_punct(low_type *, SPEC_TYPE *, int)+0x3fc>
        1c5594:	e3a00000 	mov	r0, #0	; 0x0
        1c5598:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: extend_a_child1__FP6TTNodeT1lT3
 * Address: 001ce56c
 */
void globals::extend_a_child1() {
    /*
        1ce56c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EnableExtSoundSource(long)
 * Address: 001e7ec8
 */
EnableExtSoundSource(long) {
    /*
        1e7ec8:	e1a01000 	mov	r1, r0
        1e7ecc:	e59f0004 	ldr	r0, [pc, #4]	; 1e7ed8 <EnableExtSoundSource(long)+0x10>
        1e7ed0:	e5900004 	ldr	r0, [r0, #4]
        1e7ed4:	ea6657f3 	b	1b7dea8 <PSoundDriver::$EnableExtSoundSource(long)>
        1e7ed8:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: ExtendedGestalt
 * Address: 00201bfc
 */
void globals::ExtendedGestalt() {
    /*
        201bfc:	e1a0c00d 	mov	ip, sp
        201c00:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        201c04:	e24cb004 	sub	fp, ip, #4	; 0x4
        201c08:	e1a04000 	mov	r4, r0
        201c0c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        201c10:	e3a08002 	mov	r8, #2	; 0x2
        201c14:	e1a00008 	mov	r0, r8
        201c18:	eb67014b 	bl	1bc214c <$AllocateRefHandle(long)>
        201c1c:	e1a06000 	mov	r6, r0
        201c20:	e3a00000 	mov	r0, #0	; 0x0
        201c24:	e58d0008 	str	r0, [sp, #8]
        201c28:	e1a0000d 	mov	r0, sp
        201c2c:	eb672ea9 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
        201c30:	e5940000 	ldr	r0, [r4]
        201c34:	e5900000 	ldr	r0, [r0]
        201c38:	e3a05000 	mov	r5, #0	; 0x0
        201c3c:	e1a01005 	mov	r1, r5
        201c40:	eb670983 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        201c44:	e3100003 	tst	r0, #3	; 0x3
        201c48:	1a000066 	bne	201de8 <ExtendedGestalt+0x1ec>
        201c4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        201c50:	e5940000 	ldr	r0, [r4]
        201c54:	e5900000 	ldr	r0, [r0]
        201c58:	e1a01005 	mov	r1, r5
        201c5c:	eb67097c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        201c60:	e3100003 	tst	r0, #3	; 0x3
        201c64:	01a00140 	moveq	r0, r0, asr #2
        201c68:	0a000000 	beq	201c70 <ExtendedGestalt+0x74>
        201c6c:	eb67012a 	bl	1bc211c <$_RINTError(long)>
        201c70:	e1a07000 	mov	r7, r0
        201c74:	e5940000 	ldr	r0, [r4]
        201c78:	e5900000 	ldr	r0, [r0]
        201c7c:	e3a0a001 	mov	sl, #1	; 0x1
        201c80:	e1a0100a 	mov	r1, sl
        201c84:	eb670972 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        201c88:	eb67012f 	bl	1bc214c <$AllocateRefHandle(long)>
        201c8c:	e58d0000 	str	r0, [sp]
        201c90:	e1a0000d 	mov	r0, sp
        201c94:	eb67c73c 	bl	1bf398c <$IsArray(RefVar const &)>
        201c98:	e1a05000 	mov	r5, r0
        201c9c:	e59d0000 	ldr	r0, [sp]
        201ca0:	eb670545 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        201ca4:	e5940000 	ldr	r0, [r4]
        201ca8:	e5900000 	ldr	r0, [r0]
        201cac:	e1a01008 	mov	r1, r8
        201cb0:	eb670967 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        201cb4:	e3100003 	tst	r0, #3	; 0x3
        201cb8:	13a00000 	movne	r0, #0	; 0x0
        201cbc:	03a00001 	moveq	r0, #1	; 0x1
        201cc0:	e3350000 	teq	r5, #0	; 0x0
        201cc4:	13300000 	teqne	r0, #0	; 0x0
        201cc8:	0a000045 	beq	201de4 <ExtendedGestalt+0x1e8>
        201ccc:	e297c4ff 	adds	ip, r7, #-16777216	; 0xff000000
        201cd0:	235c0001 	cmpcs	ip, #1	; 0x1
        201cd4:	3a000002 	bcc	201ce4 <ExtendedGestalt+0xe8>
        201cd8:	e297c4fe 	adds	ip, r7, #-33554432	; 0xfe000000
        201cdc:	235c0001 	cmpcs	ip, #1	; 0x1
        201ce0:	3a00003f 	bcc	201de4 <ExtendedGestalt+0x1e8>
        201ce4:	e24dd004 	sub	sp, sp, #4	; 0x4
        201ce8:	e59f9118 	ldr	r9, [pc, #118]	; 201e08 <ExtendedGestalt+0x20c>
        201cec:	e599000c 	ldr	r0, [r9, #12]
        201cf0:	e58d0000 	str	r0, [sp]
        201cf4:	eb67539b 	bl	1bd6b68 <$malloc>
        201cf8:	e1b05000 	movs	r5, r0
        201cfc:	0a000037 	beq	201de0 <ExtendedGestalt+0x1e4>
        201d00:	e1a0300d 	mov	r3, sp
        201d04:	e1a02005 	mov	r2, r5
        201d08:	e1a01007 	mov	r1, r7
        201d0c:	e28d0008 	add	r0, sp, #8	; 0x8
        201d10:	eb67ec58 	bl	1bfce78 <TUGestalt::$Gestalt(unsigned long, void *, unsigned long *)>
        201d14:	e58d0010 	str	r0, [sp, #16]
        201d18:	e59d0000 	ldr	r0, [sp]
        201d1c:	e599100c 	ldr	r1, [r9, #12]
        201d20:	e1500001 	cmp	r0, r1
        201d24:	9a00000c 	bls	201d5c <ExtendedGestalt+0x160>
        201d28:	e5a9000c 	str	r0, [r9, #12]!
        201d2c:	e1a00005 	mov	r0, r5
        201d30:	eb674308 	bl	1bd2958 <$free>
        201d34:	e59d0000 	ldr	r0, [sp]
        201d38:	eb67538a 	bl	1bd6b68 <$malloc>
        201d3c:	e1b05000 	movs	r5, r0
        201d40:	0a000005 	beq	201d5c <ExtendedGestalt+0x160>
        201d44:	e1a0300d 	mov	r3, sp
        201d48:	e1a02005 	mov	r2, r5
        201d4c:	e1a01007 	mov	r1, r7
        201d50:	e28d0008 	add	r0, sp, #8	; 0x8
        201d54:	eb67ec47 	bl	1bfce78 <TUGestalt::$Gestalt(unsigned long, void *, unsigned long *)>
        201d58:	e58d0010 	str	r0, [sp, #16]
        201d5c:	e24dd004 	sub	sp, sp, #4	; 0x4
        201d60:	e59d0014 	ldr	r0, [sp, #20]
        201d64:	e3300000 	teq	r0, #0	; 0x0
        201d68:	1a000016 	bne	201dc8 <ExtendedGestalt+0x1cc>
        201d6c:	e5940000 	ldr	r0, [r4]
        201d70:	e5900000 	ldr	r0, [r0]
        201d74:	e1a01008 	mov	r1, r8
        201d78:	eb670935 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        201d7c:	e3100003 	tst	r0, #3	; 0x3
        201d80:	01a00140 	moveq	r0, r0, asr #2
        201d84:	0a000000 	beq	201d8c <ExtendedGestalt+0x190>
        201d88:	eb6700e3 	bl	1bc211c <$_RINTError(long)>
        201d8c:	e1a07000 	mov	r7, r0
        201d90:	e5940000 	ldr	r0, [r4]
        201d94:	e5900000 	ldr	r0, [r0]
        201d98:	e1a0100a 	mov	r1, sl
        201d9c:	eb67092c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        201da0:	eb6700e9 	bl	1bc214c <$AllocateRefHandle(long)>
        201da4:	e58d0000 	str	r0, [sp]
        201da8:	e1a0100d 	mov	r1, sp
        201dac:	e28d2014 	add	r2, sp, #20	; 0x14
        201db0:	e1a00005 	mov	r0, r5
        201db4:	e1a03007 	mov	r3, r7
        201db8:	eb66aa26 	bl	1bac658 <$ConstructReturnValue(void *, RefVar const &, long *, int)>
        201dbc:	e5860000 	str	r0, [r6]
        201dc0:	e59d0000 	ldr	r0, [sp]
        201dc4:	eb6704fc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        201dc8:	e1a00005 	mov	r0, r5
        201dcc:	eb6742e1 	bl	1bd2958 <$free>
        201dd0:	e59d0014 	ldr	r0, [sp, #20]
        201dd4:	e3300000 	teq	r0, #0	; 0x0
        201dd8:	15868000 	strne	r8, [r6]
        201ddc:	e28dd004 	add	sp, sp, #4	; 0x4
        201de0:	e28dd004 	add	sp, sp, #4	; 0x4
        201de4:	e28dd004 	add	sp, sp, #4	; 0x4
        201de8:	e1a0000d 	mov	r0, sp
        201dec:	e3a01000 	mov	r1, #0	; 0x0
        201df0:	e5964000 	ldr	r4, [r6]
        201df4:	eb67324a 	bl	1bce724 <TUObject::$__dt(void)>
        201df8:	e1a00006 	mov	r0, r6
        201dfc:	eb6704ee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        201e00:	e1a00004 	mov	r0, r4
        201e04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        201e08:	0c104c48 	ldceq	12, cr4, [r0], -#288
    */
}

/**
 * Symbol: EncodeT4(unsigned char *, int, int, int, int, int, int)
 * Address: 00204f60
 */
EncodeT4(unsigned char *, int, int, int, int, int, int) {
    /*
        204f60:	e1a0c00d 	mov	ip, sp
        204f64:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        204f68:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        204f6c:	e24cb014 	sub	fp, ip, #20	; 0x14
        204f70:	e24dd008 	sub	sp, sp, #8	; 0x8
        204f74:	e59b0008 	ldr	r0, [fp, #8]
        204f78:	e59b1004 	ldr	r1, [fp, #4]
        204f7c:	e0819000 	add	r9, r1, r0
        204f80:	e59b0010 	ldr	r0, [fp, #16]
        204f84:	e59b800c 	ldr	r8, [fp, #12]
        204f88:	e0886000 	add	r6, r8, r0
        204f8c:	e3a04000 	mov	r4, #0	; 0x0
        204f90:	e3a02b02 	mov	r2, #2048	; 0x800
        204f94:	e59b0018 	ldr	r0, [fp, #24]
        204f98:	e58d2004 	str	r2, [sp, #4]
        204f9c:	e3a0200c 	mov	r2, #12	; 0xc
        204fa0:	e1510009 	cmp	r1, r9
        204fa4:	e58d2000 	str	r2, [sp]
        204fa8:	2a000030 	bcs	205070 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x110>
        204fac:	e59b2004 	ldr	r2, [fp, #4]
        204fb0:	e4d21001 	ldrb	r1, [r2], #1
        204fb4:	e0211004 	eor	r1, r1, r4
        204fb8:	e21150ff 	ands	r5, r1, #255	; 0xff
        204fbc:	e58b2004 	str	r2, [fp, #4]
        204fc0:	02800008 	addeq	r0, r0, #8	; 0x8
        204fc4:	0a000017 	beq	205028 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0xc8>
        204fc8:	e3a07008 	mov	r7, #8	; 0x8
        204fcc:	e3150080 	tst	r5, #128	; 0x80
        204fd0:	e1a02085 	mov	r2, r5, lsl #1
        204fd4:	e20250ff 	and	r5, r2, #255	; 0xff
        204fd8:	e2477001 	sub	r7, r7, #1	; 0x1
        204fdc:	0a00000e 	beq	20501c <EncodeT4(unsigned char *, int, int, int, int, int, int)+0xbc>
        204fe0:	e1a0300d 	mov	r3, sp
        204fe4:	e28d2004 	add	r2, sp, #4	; 0x4
        204fe8:	e92d000c 	stmdb	sp!, {r2, r3}
        204fec:	e1a03004 	mov	r3, r4
        204ff0:	e1a02000 	mov	r2, r0
        204ff4:	e1a01006 	mov	r1, r6
        204ff8:	e28b000c 	add	r0, fp, #12	; 0xc
        204ffc:	eb6042ae 	bl	1a15abc <$outputRun(unsigned char *&, unsigned char *, int, unsigned char, unsigned long &, int &)>
        205000:	e28dd008 	add	sp, sp, #8	; 0x8
        205004:	e3a00001 	mov	r0, #1	; 0x1
        205008:	e22410ff 	eor	r1, r4, #255	; 0xff
        20500c:	e20140ff 	and	r4, r1, #255	; 0xff
        205010:	e22510ff 	eor	r1, r5, #255	; 0xff
        205014:	e20150ff 	and	r5, r1, #255	; 0xff
        205018:	ea000000 	b	205020 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0xc0>
        20501c:	e2800001 	add	r0, r0, #1	; 0x1
        205020:	e3570000 	cmp	r7, #0	; 0x0
        205024:	caffffe8 	bgt	204fcc <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x6c>
        205028:	e59b1004 	ldr	r1, [fp, #4]
        20502c:	e1510009 	cmp	r1, r9
        205030:	3affffdd 	bcc	204fac <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x4c>
        205034:	e33400ff 	teq	r4, #255	; 0xff
        205038:	1a00000c 	bne	205070 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x110>
        20503c:	e3300000 	teq	r0, #0	; 0x0
        205040:	0a00000a 	beq	205070 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x110>
        205044:	e1a0300d 	mov	r3, sp
        205048:	e28d2004 	add	r2, sp, #4	; 0x4
        20504c:	e92d000c 	stmdb	sp!, {r2, r3}
        205050:	e1a03004 	mov	r3, r4
        205054:	e1a02000 	mov	r2, r0
        205058:	e1a01006 	mov	r1, r6
        20505c:	e28b000c 	add	r0, fp, #12	; 0xc
        205060:	eb604295 	bl	1a15abc <$outputRun(unsigned char *&, unsigned char *, int, unsigned char, unsigned long &, int &)>
        205064:	e28dd008 	add	sp, sp, #8	; 0x8
        205068:	e3a00000 	mov	r0, #0	; 0x0
        20506c:	e3a04000 	mov	r4, #0	; 0x0
        205070:	e59b1018 	ldr	r1, [fp, #24]
        205074:	e59b2014 	ldr	r2, [fp, #20]
        205078:	e0421001 	sub	r1, r2, r1
        20507c:	e59b2008 	ldr	r2, [fp, #8]
        205080:	e0411182 	sub	r1, r1, r2, lsl #3
        205084:	e0910000 	adds	r0, r1, r0
        205088:	0a000008 	beq	2050b0 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x150>
        20508c:	e1a0300d 	mov	r3, sp
        205090:	e28d2004 	add	r2, sp, #4	; 0x4
        205094:	e92d000c 	stmdb	sp!, {r2, r3}
        205098:	e1a03004 	mov	r3, r4
        20509c:	e1a02000 	mov	r2, r0
        2050a0:	e1a01006 	mov	r1, r6
        2050a4:	e28b000c 	add	r0, fp, #12	; 0xc
        2050a8:	eb604283 	bl	1a15abc <$outputRun(unsigned char *&, unsigned char *, int, unsigned char, unsigned long &, int &)>
        2050ac:	e28dd008 	add	sp, sp, #8	; 0x8
        2050b0:	e59b000c 	ldr	r0, [fp, #12]
        2050b4:	e1500006 	cmp	r0, r6
        2050b8:	2a000005 	bcs	2050d4 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x174>
        2050bc:	e59d1000 	ldr	r1, [sp]
        2050c0:	e3310000 	teq	r1, #0	; 0x0
        2050c4:	0a000002 	beq	2050d4 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x174>
        2050c8:	e59d1004 	ldr	r1, [sp, #4]
        2050cc:	e4c01001 	strb	r1, [r0], #1
        2050d0:	e58b000c 	str	r0, [fp, #12]
        2050d4:	e59b000c 	ldr	r0, [fp, #12]
        2050d8:	e1500006 	cmp	r0, r6
        2050dc:	23e00000 	mvncs	r0, #0	; 0x0
        2050e0:	2a000016 	bcs	205140 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x1e0>
        2050e4:	e0400008 	sub	r0, r0, r8
        2050e8:	e2400002 	sub	r0, r0, #2	; 0x2
        2050ec:	e59b101c 	ldr	r1, [fp, #28]
        2050f0:	e0410000 	sub	r0, r1, r0
        2050f4:	e58b001c 	str	r0, [fp, #28]
        2050f8:	e3500000 	cmp	r0, #0	; 0x0
        2050fc:	ca000003 	bgt	205110 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x1b0>
        205100:	e3a00001 	mov	r0, #1	; 0x1
        205104:	e58b001c 	str	r0, [fp, #28]
        205108:	e3a00000 	mov	r0, #0	; 0x0
        20510c:	ea000001 	b	205118 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x1b8>
        205110:	cafffffc 	bgt	205108 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x1a8>
        205114:	ea000007 	b	205138 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x1d8>
        205118:	e59b100c 	ldr	r1, [fp, #12]
        20511c:	e4c10001 	strb	r0, [r1], #1
        205120:	e58b100c 	str	r1, [fp, #12]
        205124:	e59b101c 	ldr	r1, [fp, #28]
        205128:	e2411001 	sub	r1, r1, #1	; 0x1
        20512c:	e58b101c 	str	r1, [fp, #28]
        205130:	e3510000 	cmp	r1, #0	; 0x0
        205134:	cafffff7 	bgt	205118 <EncodeT4(unsigned char *, int, int, int, int, int, int)+0x1b8>
        205138:	e59b000c 	ldr	r0, [fp, #12]
        20513c:	e0400008 	sub	r0, r0, r8
        205140:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ExtractEnds(TStrokeUnit *, TGeneralShapeUnit *, FPoint **)
 * Address: 00210e60
 */
ExtractEnds(TStrokeUnit *, TGeneralShapeUnit *, FPoint **) {
    /*
        210e60:	e1a0c00d 	mov	ip, sp
        210e64:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        210e68:	e24cb004 	sub	fp, ip, #4	; 0x4
        210e6c:	e1b04001 	movs	r4, r1
        210e70:	e1a05002 	mov	r5, r2
        210e74:	e59f80c8 	ldr	r8, [pc, #c8]	; 210f44 <ExtractEnds(TStrokeUnit *, TGeneralShapeUnit *, FPoint **)+0xe4>
        210e78:	e5828000 	str	r8, [r2]
        210e7c:	e2889008 	add	r9, r8, #8	; 0x8
        210e80:	e5829004 	str	r9, [r2, #4]
        210e84:	0a000009 	beq	210eb0 <ExtractEnds(TStrokeUnit *, TGeneralShapeUnit *, FPoint **)+0x50>
        210e88:	e1a00004 	mov	r0, r4
        210e8c:	e5941000 	ldr	r1, [r4]
        210e90:	e1a0e00f 	mov	lr, pc
        210e94:	e281f01c 	add	pc, r1, #28	; 0x1c
        210e98:	e1a06000 	mov	r6, r0
        210e9c:	e2401001 	sub	r1, r0, #1	; 0x1
        210ea0:	e1a00004 	mov	r0, r4
        210ea4:	e5942000 	ldr	r2, [r4]
        210ea8:	e1a0e00f 	mov	lr, pc
        210eac:	e282f058 	add	pc, r2, #88	; 0x58
        210eb0:	e5b07040 	ldr	r7, [r0, #64]!
        210eb4:	e1a02008 	mov	r2, r8
        210eb8:	e597a00c 	ldr	sl, [r7, #12]
        210ebc:	e1a00007 	mov	r0, r7
        210ec0:	e3a01000 	mov	r1, #0	; 0x0
        210ec4:	eb6569c5 	bl	1b6b5e0 <TStroke::$GetFPoint(long, FPoint *)>
        210ec8:	e1a02009 	mov	r2, r9
        210ecc:	e24a1001 	sub	r1, sl, #1	; 0x1
        210ed0:	e1a0a001 	mov	sl, r1
        210ed4:	e1a00007 	mov	r0, r7
        210ed8:	eb6569c0 	bl	1b6b5e0 <TStroke::$GetFPoint(long, FPoint *)>
        210edc:	e3340000 	teq	r4, #0	; 0x0
        210ee0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        210ee4:	e3560001 	cmp	r6, #1	; 0x1
        210ee8:	d91baff0 	ldmledb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        210eec:	e5940040 	ldr	r0, [r4, #64]
        210ef0:	e0800006 	add	r0, r0, r6
        210ef4:	e5d00007 	ldrb	r0, [r0, #7]
        210ef8:	e3300000 	teq	r0, #0	; 0x0
        210efc:	0a000007 	beq	210f20 <ExtractEnds(TStrokeUnit *, TGeneralShapeUnit *, FPoint **)+0xc0>
        210f00:	e1a0100a 	mov	r1, sl
        210f04:	e1a02008 	mov	r2, r8
        210f08:	e1a00007 	mov	r0, r7
        210f0c:	eb6569b3 	bl	1b6b5e0 <TStroke::$GetFPoint(long, FPoint *)>
        210f10:	e1a02009 	mov	r2, r9
        210f14:	e1a00007 	mov	r0, r7
        210f18:	e3a01000 	mov	r1, #0	; 0x0
        210f1c:	eb6569af 	bl	1b6b5e0 <TStroke::$GetFPoint(long, FPoint *)>
        210f20:	e5b40040 	ldr	r0, [r4, #64]!
        210f24:	e0800006 	add	r0, r0, r6
        210f28:	e5500001 	ldrb	r0, [r0, -#1]
        210f2c:	e2462001 	sub	r2, r6, #1	; 0x1
        210f30:	e3a01000 	mov	r1, #0	; 0x0
        210f34:	e1300002 	teq	r0, r2
        210f38:	15a51004 	strne	r1, [r5, #4]!
        210f3c:	05851000 	streq	r1, [r5]
        210f40:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        210f44:	0c107010 	ldceq	0, cr7, [r0], -#64
    */
}

/**
 * Symbol: ExtendTurn(TurnData *, FPoint)
 * Address: 0021f1a8
 */
ExtendTurn(TurnData *, FPoint) {
    /*
        21f1a8:	e28000ac 	add	r0, r0, #172	; 0xac
        21f1ac:	e8800006 	stmia	r0, {r1, r2}
        21f1b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EndTurn(TurnData *, FPoint)
 * Address: 0021f1b4
 */
EndTurn(TurnData *, FPoint) {
    /*
        21f1b4:	e1a0c00d 	mov	ip, sp
        21f1b8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21f1bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        21f1c0:	e1a04000 	mov	r4, r0
        21f1c4:	e28050ac 	add	r5, r0, #172	; 0xac
        21f1c8:	e8850006 	stmia	r5, {r1, r2}
        21f1cc:	e1a01005 	mov	r1, r5
        21f1d0:	e28000a4 	add	r0, r0, #164	; 0xa4
        21f1d4:	e1a06000 	mov	r6, r0
        21f1d8:	eb64f2fa 	bl	1b5bdc8 <$CheapDistPoint__FP6FPointT1>
        21f1dc:	e2800902 	add	r0, r0, #32768	; 0x8000
        21f1e0:	e1a00840 	mov	r0, r0, asr #16
        21f1e4:	e1a00800 	mov	r0, r0, lsl #16
        21f1e8:	e3500806 	cmp	r0, #393216	; 0x60000
        21f1ec:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        21f1f0:	e1a01006 	mov	r1, r6
        21f1f4:	e1a00005 	mov	r0, r5
        21f1f8:	eb650365 	bl	1b5ff94 <$GetSlope>
        21f1fc:	e5941000 	ldr	r1, [r4]
        21f200:	e0841101 	add	r1, r4, r1, lsl #2
        21f204:	e5a10004 	str	r0, [r1, #4]!
        21f208:	e5940000 	ldr	r0, [r4]
        21f20c:	e2800001 	add	r0, r0, #1	; 0x1
        21f210:	e5840000 	str	r0, [r4]
        21f214:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: EncodeLine__FlPcN22
 * Address: 0024ff54
 */
void globals::EncodeLine() {
    /*
        24ff54:	e1a0c00d 	mov	ip, sp
        24ff58:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24ff5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        24ff60:	e1a04000 	mov	r4, r0
        24ff64:	e1a05002 	mov	r5, r2
        24ff68:	e1a06003 	mov	r6, r3
        24ff6c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        24ff70:	e58d0008 	str	r0, [sp, #8]
        24ff74:	e88d0006 	stmia	sp, {r1, r2}
        24ff78:	e5d10000 	ldrb	r0, [r1]
        24ff7c:	e3300000 	teq	r0, #0	; 0x0
        24ff80:	1a000008 	bne	24ffa8 <EncodeLine__FlPcN22+0x54>
        24ff84:	e1a00004 	mov	r0, r4
        24ff88:	eb63b7d4 	bl	1b3dee0 <$AllWhiteScan(long, char *)>
        24ff8c:	e3300000 	teq	r0, #0	; 0x0
        24ff90:	0a000004 	beq	24ffa8 <EncodeLine__FlPcN22+0x54>
        24ff94:	e3a01080 	mov	r1, #128	; 0x80
        24ff98:	e59d0004 	ldr	r0, [sp, #4]
        24ff9c:	e4c01001 	strb	r1, [r0], #1
        24ffa0:	e58d0004 	str	r0, [sp, #4]
        24ffa4:	ea000038 	b	25008c <EncodeLine__FlPcN22+0x138>
        24ffa8:	e3360000 	teq	r6, #0	; 0x0
        24ffac:	0a00000a 	beq	24ffdc <EncodeLine__FlPcN22+0x88>
        24ffb0:	e1a02006 	mov	r2, r6
        24ffb4:	e1a00004 	mov	r0, r4
        24ffb8:	e59d1000 	ldr	r1, [sp]
        24ffbc:	eb63c858 	bl	1b42124 <$IsScanEqual__FlPcT2>
        24ffc0:	e3300000 	teq	r0, #0	; 0x0
        24ffc4:	0a000004 	beq	24ffdc <EncodeLine__FlPcN22+0x88>
        24ffc8:	e3a000c0 	mov	r0, #192	; 0xc0
        24ffcc:	e59d1004 	ldr	r1, [sp, #4]
        24ffd0:	e4c10001 	strb	r0, [r1], #1
        24ffd4:	e58d1004 	str	r1, [sp, #4]
        24ffd8:	ea00002b 	b	25008c <EncodeLine__FlPcN22+0x138>
        24ffdc:	e59d0008 	ldr	r0, [sp, #8]
        24ffe0:	e3500000 	cmp	r0, #0	; 0x0
        24ffe4:	da000028 	ble	25008c <EncodeLine__FlPcN22+0x138>
        24ffe8:	e59d0000 	ldr	r0, [sp]
        24ffec:	e5d04000 	ldrb	r4, [r0]
        24fff0:	e5d01001 	ldrb	r1, [r0, #1]
        24fff4:	e1340001 	teq	r4, r1
        24fff8:	1a00001c 	bne	250070 <EncodeLine__FlPcN22+0x11c>
        24fffc:	e33400ff 	teq	r4, #255	; 0xff
        250000:	03a030c0 	moveq	r3, #192	; 0xc0
        250004:	0a000002 	beq	250014 <EncodeLine__FlPcN22+0xc0>
        250008:	e3340000 	teq	r4, #0	; 0x0
        25000c:	1a000008 	bne	250034 <EncodeLine__FlPcN22+0xe0>
        250010:	e3a03080 	mov	r3, #128	; 0x80
        250014:	e92d0008 	stmdb	sp!, {r3}
        250018:	e1a03004 	mov	r3, r4
        25001c:	e28d200c 	add	r2, sp, #12	; 0xc
        250020:	e28d1008 	add	r1, sp, #8	; 0x8
        250024:	e28d0004 	add	r0, sp, #4	; 0x4
        250028:	eb63d076 	bl	1b44208 <$RepeatScan__FPPcT1PlcT4>
        25002c:	e28dd004 	add	sp, sp, #4	; 0x4
        250030:	ea000012 	b	250080 <EncodeLine__FlPcN22+0x12c>
        250034:	e5d00002 	ldrb	r0, [r0, #2]
        250038:	e1300004 	teq	r0, r4
        25003c:	1a00000b 	bne	250070 <EncodeLine__FlPcN22+0x11c>
        250040:	e3a03040 	mov	r3, #64	; 0x40
        250044:	e92d0008 	stmdb	sp!, {r3}
        250048:	e1a03004 	mov	r3, r4
        25004c:	e28d200c 	add	r2, sp, #12	; 0xc
        250050:	e28d1008 	add	r1, sp, #8	; 0x8
        250054:	e28d0004 	add	r0, sp, #4	; 0x4
        250058:	eb63d06a 	bl	1b44208 <$RepeatScan__FPPcT1PlcT4>
        25005c:	e28dd004 	add	sp, sp, #4	; 0x4
        250060:	e59d0004 	ldr	r0, [sp, #4]
        250064:	e4c04001 	strb	r4, [r0], #1
        250068:	e58d0004 	str	r0, [sp, #4]
        25006c:	ea000003 	b	250080 <EncodeLine__FlPcN22+0x12c>
        250070:	e28d2008 	add	r2, sp, #8	; 0x8
        250074:	e28d1004 	add	r1, sp, #4	; 0x4
        250078:	e1a0000d 	mov	r0, sp
        25007c:	eb63bfcc 	bl	1b3ffb4 <$CopyScan__FPPcT1Pl>
        250080:	e59d0008 	ldr	r0, [sp, #8]
        250084:	e3500000 	cmp	r0, #0	; 0x0
        250088:	caffffd6 	bgt	24ffe8 <EncodeLine__FlPcN22+0x94>
        25008c:	e59d0004 	ldr	r0, [sp, #4]
        250090:	e0400005 	sub	r0, r0, r5
        250094:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ExportReporter(TTestReporter *)
 * Address: 002527ac
 */
ExportReporter(TTestReporter *) {
    /*
        2527ac:	e59f1004 	ldr	r1, [pc, #4]	; 2527b8 <ExportReporter(TTestReporter *)+0xc>
        2527b0:	e5810000 	str	r0, [r1]
        2527b4:	e1a0f00e 	mov	pc, lr
        2527b8:	0c104ecc 	ldceq	14, cr4, [r0], -#816
    */
}

/**
 * Symbol: Exists(TViewList *, RefVar const &)
 * Address: 00261d80
 */
Exists(TViewList *, RefVar const &) {
    /*
        261d80:	e1a0c00d 	mov	ip, sp
        261d84:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        261d88:	e24cb004 	sub	fp, ip, #4	; 0x4
        261d8c:	e1a04001 	mov	r4, r1
        261d90:	e24dd00c 	sub	sp, sp, #12	; 0xc
        261d94:	e3a06000 	mov	r6, #0	; 0x0
        261d98:	e1a01000 	mov	r1, r0
        261d9c:	e1a0000d 	mov	r0, sp
        261da0:	eb6099a3 	bl	1a88434 <TListLoop::$__ct(CList *)>
        261da4:	e1a0000d 	mov	r0, sp
        261da8:	eb60ec1c 	bl	1a9ce20 <TListLoop::$Next(void)>
        261dac:	e1b05000 	movs	r5, r0
        261db0:	0a000009 	beq	261ddc <Exists(TViewList *, RefVar const &)+0x5c>
        261db4:	e2850024 	add	r0, r5, #36	; 0x24
        261db8:	e1a01004 	mov	r1, r4
        261dbc:	eb65a5fc 	bl	1bcb5b4 <$ProtoEQ__FRC6RefVarT1>
        261dc0:	e3300000 	teq	r0, #0	; 0x0
        261dc4:	11a06005 	movne	r6, r5
        261dc8:	1a000003 	bne	261ddc <Exists(TViewList *, RefVar const &)+0x5c>
        261dcc:	e1a0000d 	mov	r0, sp
        261dd0:	eb60ec12 	bl	1a9ce20 <TListLoop::$Next(void)>
        261dd4:	e1b05000 	movs	r5, r0
        261dd8:	1afffff5 	bne	261db4 <Exists(TViewList *, RefVar const &)+0x34>
        261ddc:	e1a00006 	mov	r0, r6
        261de0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: EncoderOpen(unsigned short, unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 0027f938
 */
EncoderOpen(unsigned short, unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        27f938:	e1a0c00d 	mov	ip, sp
        27f93c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27f940:	e24cb004 	sub	fp, ip, #4	; 0x4
        27f944:	e1a05001 	mov	r5, r1
        27f948:	e1a04003 	mov	r4, r3
        27f94c:	e59b1004 	ldr	r1, [fp, #4]
        27f950:	e1a09800 	mov	r9, r0, lsl #16
        27f954:	e1a09829 	mov	r9, r9, lsr #16
        27f958:	e1a08802 	mov	r8, r2, lsl #16
        27f95c:	e1a08828 	mov	r8, r8, lsr #16
        27f960:	e1a0a801 	mov	sl, r1, lsl #16
        27f964:	e1a0a82a 	mov	sl, sl, lsr #16
        27f968:	e3a00ee6 	mov	r0, #3680	; 0xe60
        27f96c:	eb5fbf8e 	bl	1a6f7ac <$HWRMemoryAllocHandle(unsigned long)>
        27f970:	e1b07000 	movs	r7, r0
        27f974:	0a000059 	beq	27fae0 <EncoderOpen(unsigned short, unsigned long, unsigned long, unsigned long, unsigned long)+0x1a8>
        27f978:	e1a00007 	mov	r0, r7
        27f97c:	eb5fbf8b 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        27f980:	e1a06000 	mov	r6, r0
        27f984:	e3a01b02 	mov	r1, #2048	; 0x800
        27f988:	e5c01001 	strb	r1, [r0, #1]
        27f98c:	e3a00008 	mov	r0, #8	; 0x8
        27f990:	e5c60000 	strb	r0, [r6]
        27f994:	e5c61003 	strb	r1, [r6, #3]
        27f998:	e5c60002 	strb	r0, [r6, #2]
        27f99c:	e3a00000 	mov	r0, #0	; 0x0
        27f9a0:	e5c60005 	strb	r0, [r6, #5]
        27f9a4:	e5c60004 	strb	r0, [r6, #4]
        27f9a8:	e5c60007 	strb	r0, [r6, #7]
        27f9ac:	e5c60006 	strb	r0, [r6, #6]
        27f9b0:	e5c60009 	strb	r0, [r6, #9]
        27f9b4:	e5c60008 	strb	r0, [r6, #8]
        27f9b8:	e5c6000b 	strb	r0, [r6, #11]
        27f9bc:	e5c6000a 	strb	r0, [r6, #10]
        27f9c0:	e5c6000d 	strb	r0, [r6, #13]
        27f9c4:	e5c6000c 	strb	r0, [r6, #12]
        27f9c8:	e5c6000f 	strb	r0, [r6, #15]
        27f9cc:	e5c6000e 	strb	r0, [r6, #14]
        27f9d0:	e5860010 	str	r0, [r6, #16]
        27f9d4:	e5860020 	str	r0, [r6, #32]
        27f9d8:	e3590000 	cmp	r9, #0	; 0x0
        27f9dc:	0a000039 	beq	27fac8 <EncoderOpen(unsigned short, unsigned long, unsigned long, unsigned long, unsigned long)+0x190>
        27f9e0:	e3550000 	cmp	r5, #0	; 0x0
        27f9e4:	0a000037 	beq	27fac8 <EncoderOpen(unsigned short, unsigned long, unsigned long, unsigned long, unsigned long)+0x190>
        27f9e8:	e5c60015 	strb	r0, [r6, #21]
        27f9ec:	e5c60014 	strb	r0, [r6, #20]
        27f9f0:	e5c69017 	strb	r9, [r6, #23]
        27f9f4:	e1a01429 	mov	r1, r9, lsr #8
        27f9f8:	e5c61016 	strb	r1, [r6, #22]
        27f9fc:	e5865018 	str	r5, [r6, #24]
        27fa00:	e59f10bc 	ldr	r1, [pc, #bc]	; 27fac4 <EncoderOpen(unsigned short, unsigned long, unsigned long, unsigned long, unsigned long)+0x18c>
        27fa04:	e5860e2c 	str	r0, [r6, #3628]
        27fa08:	e586101c 	str	r1, [r6, #28]
        27fa0c:	e3580000 	cmp	r8, #0	; 0x0
        27fa10:	0a00002c 	beq	27fac8 <EncoderOpen(unsigned short, unsigned long, unsigned long, unsigned long, unsigned long)+0x190>
        27fa14:	e3540000 	cmp	r4, #0	; 0x0
        27fa18:	0a00002a 	beq	27fac8 <EncoderOpen(unsigned short, unsigned long, unsigned long, unsigned long, unsigned long)+0x190>
        27fa1c:	e5c60031 	strb	r0, [r6, #49]
        27fa20:	e5c60030 	strb	r0, [r6, #48]
        27fa24:	e5c68033 	strb	r8, [r6, #51]
        27fa28:	e1a01428 	mov	r1, r8, lsr #8
        27fa2c:	e5c61032 	strb	r1, [r6, #50]
        27fa30:	e5860024 	str	r0, [r6, #36]
        27fa34:	e5864034 	str	r4, [r6, #52]
        27fa38:	e5860028 	str	r0, [r6, #40]
        27fa3c:	e586002c 	str	r0, [r6, #44]
        27fa40:	e5c6003d 	strb	r0, [r6, #61]
        27fa44:	e5c6003c 	strb	r0, [r6, #60]
        27fa48:	e5c6003f 	strb	r0, [r6, #63]
        27fa4c:	e5c6003e 	strb	r0, [r6, #62]
        27fa50:	e5860df4 	str	r0, [r6, #3572]
        27fa54:	e3a01001 	mov	r1, #1	; 0x1
        27fa58:	e5c61e5b 	strb	r1, [r6, #3675]
        27fa5c:	e5c60e5a 	strb	r0, [r6, #3674]
        27fa60:	e5860dc4 	str	r0, [r6, #3524]
        27fa64:	e5860dc8 	str	r0, [r6, #3528]
        27fa68:	e5860dfc 	str	r0, [r6, #3580]
        27fa6c:	e5860e00 	str	r0, [r6, #3584]
        27fa70:	e5860e04 	str	r0, [r6, #3588]
        27fa74:	e5860e08 	str	r0, [r6, #3592]
        27fa78:	e5860e0c 	str	r0, [r6, #3596]
        27fa7c:	e3a00d09 	mov	r0, #576	; 0x240
        27fa80:	e280093d 	add	r0, r0, #999424	; 0xf4000
        27fa84:	e5860168 	str	r0, [r6, #360]
        27fa88:	e5860178 	str	r0, [r6, #376]
        27fa8c:	e586016c 	str	r0, [r6, #364]
        27fa90:	e586017c 	str	r0, [r6, #380]
        27fa94:	e1a0000a 	mov	r0, sl
        27fa98:	e5c60e59 	strb	r0, [r6, #3673]
        27fa9c:	e1a0044a 	mov	r0, sl, asr #8
        27faa0:	e5c60e58 	strb	r0, [r6, #3672]
        27faa4:	e1a00006 	mov	r0, r6
        27faa8:	eb5fbb24 	bl	1a6e740 <$EcdrSelectCodeBook(_CDC *)>
        27faac:	e3500000 	cmp	r0, #0	; 0x0
        27fab0:	0a000004 	beq	27fac8 <EncoderOpen(unsigned short, unsigned long, unsigned long, unsigned long, unsigned long)+0x190>
        27fab4:	e1a00007 	mov	r0, r7
        27fab8:	eb5fbf3d 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        27fabc:	e1a00007 	mov	r0, r7
        27fac0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        27fac4:	01a70830 	moveq	r0, r0, lsr r8
        27fac8:	e3560000 	cmp	r6, #0	; 0x0
        27facc:	0a000001 	beq	27fad8 <EncoderOpen(unsigned short, unsigned long, unsigned long, unsigned long, unsigned long)+0x1a0>
        27fad0:	e1a00007 	mov	r0, r7
        27fad4:	eb5fbf36 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        27fad8:	e1a00007 	mov	r0, r7
        27fadc:	eb5fbf35 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        27fae0:	e3a00000 	mov	r0, #0	; 0x0
        27fae4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EncoderClose(unsigned long, long *)
 * Address: 0027fae8
 */
EncoderClose(unsigned long, long *) {
    /*
        27fae8:	e1a0c00d 	mov	ip, sp
        27faec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        27faf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        27faf4:	e1a04000 	mov	r4, r0
        27faf8:	e1a05001 	mov	r5, r1
        27fafc:	eb5fbf2b 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        27fb00:	e1b06000 	movs	r6, r0
        27fb04:	03a00000 	moveq	r0, #0	; 0x0
        27fb08:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        27fb0c:	e5960e58 	ldr	r0, [r6, #3672]
        27fb10:	e1a00820 	mov	r0, r0, lsr #16
        27fb14:	e1a00800 	mov	r0, r0, lsl #16
        27fb18:	e1a00820 	mov	r0, r0, lsr #16
        27fb1c:	eb5fc344 	bl	1a70834 <$UnlockCodeBook(unsigned short)>
        27fb20:	e5960034 	ldr	r0, [r6, #52]
        27fb24:	e3500000 	cmp	r0, #0	; 0x0
        27fb28:	0a000005 	beq	27fb44 <EncoderClose(unsigned long, long *)+0x5c>
        27fb2c:	e5960030 	ldr	r0, [r6, #48]
        27fb30:	e1a00820 	mov	r0, r0, lsr #16
        27fb34:	e3500001 	cmp	r0, #1	; 0x1
        27fb38:	1a000001 	bne	27fb44 <EncoderClose(unsigned long, long *)+0x5c>
        27fb3c:	e5960034 	ldr	r0, [r6, #52]
        27fb40:	eb5fbf1c 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        27fb44:	e5960010 	ldr	r0, [r6, #16]
        27fb48:	e3500000 	cmp	r0, #0	; 0x0
        27fb4c:	0a000005 	beq	27fb68 <EncoderClose(unsigned long, long *)+0x80>
        27fb50:	e596000c 	ldr	r0, [r6, #12]
        27fb54:	e1a00820 	mov	r0, r0, lsr #16
        27fb58:	e3500001 	cmp	r0, #1	; 0x1
        27fb5c:	1a000001 	bne	27fb68 <EncoderClose(unsigned long, long *)+0x80>
        27fb60:	e5960010 	ldr	r0, [r6, #16]
        27fb64:	eb5fbf13 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        27fb68:	e5960018 	ldr	r0, [r6, #24]
        27fb6c:	e3500000 	cmp	r0, #0	; 0x0
        27fb70:	0a000005 	beq	27fb8c <EncoderClose(unsigned long, long *)+0xa4>
        27fb74:	e5960014 	ldr	r0, [r6, #20]
        27fb78:	e1a00820 	mov	r0, r0, lsr #16
        27fb7c:	e3500001 	cmp	r0, #1	; 0x1
        27fb80:	1a000001 	bne	27fb8c <EncoderClose(unsigned long, long *)+0xa4>
        27fb84:	e5960018 	ldr	r0, [r6, #24]
        27fb88:	eb5fbf0a 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        27fb8c:	e5b60e00 	ldr	r0, [r6, #3584]!
        27fb90:	e5850000 	str	r0, [r5]
        27fb94:	e1a00004 	mov	r0, r4
        27fb98:	eb5fbf05 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        27fb9c:	e1a00004 	mov	r0, r4
        27fba0:	eb5fbf04 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        27fba4:	e3a00001 	mov	r0, #1	; 0x1
        27fba8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: EncoderRun(unsigned long)
 * Address: 002804f8
 */
EncoderRun(unsigned long) {
    /*
        2804f8:	e1a0c00d 	mov	ip, sp
        2804fc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        280500:	e24cb004 	sub	fp, ip, #4	; 0x4
        280504:	e1b04000 	movs	r4, r0
        280508:	e24dd004 	sub	sp, sp, #4	; 0x4
        28050c:	1a000001 	bne	280518 <EncoderRun(unsigned long)+0x20>
        280510:	e3a00000 	mov	r0, #0	; 0x0
        280514:	ea00006b 	b	2806c8 <EncoderRun(unsigned long)+0x1d0>
        280518:	e1a00004 	mov	r0, r4
        28051c:	eb5fbca3 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        280520:	e1b05000 	movs	r5, r0
        280524:	0afffff9 	beq	280510 <EncoderRun(unsigned long)+0x18>
        280528:	e5950034 	ldr	r0, [r5, #52]
        28052c:	eb5fbc9f 	bl	1a6f7b0 <$HWRMemoryLockHandle(unsigned long)>
        280530:	e5850038 	str	r0, [r5, #56]
        280534:	e5950038 	ldr	r0, [r5, #56]
        280538:	e3500000 	cmp	r0, #0	; 0x0
        28053c:	0a000051 	beq	280688 <EncoderRun(unsigned long)+0x190>
        280540:	e595001c 	ldr	r0, [r5, #28]
        280544:	e3a06000 	mov	r6, #0	; 0x0
        280548:	e3500000 	cmp	r0, #0	; 0x0
        28054c:	03a00007 	moveq	r0, #7	; 0x7
        280550:	0a00000b 	beq	280584 <EncoderRun(unsigned long)+0x8c>
        280554:	e5950032 	ldr	r0, [r5, #50]
        280558:	e1a00820 	mov	r0, r0, lsr #16
        28055c:	e1a00180 	mov	r0, r0, lsl #3
        280560:	e5850dfc 	str	r0, [r5, #3580]
        280564:	e1a02005 	mov	r2, r5
        280568:	e1a0100d 	mov	r1, sp
        28056c:	e3a00001 	mov	r0, #1	; 0x1
        280570:	e1a0e00f 	mov	lr, pc
        280574:	e595f01c 	ldr	pc, [r5, #28]
        280578:	e3500000 	cmp	r0, #0	; 0x0
        28057c:	1a000003 	bne	280590 <EncoderRun(unsigned long)+0x98>
        280580:	e3a0000c 	mov	r0, #12	; 0xc
        280584:	e5c5003d 	strb	r0, [r5, #61]
        280588:	e5c5603c 	strb	r6, [r5, #60]
        28058c:	ea00003d 	b	280688 <EncoderRun(unsigned long)+0x190>
        280590:	e5856df4 	str	r6, [r5, #3572]
        280594:	e1a07006 	mov	r7, r6
        280598:	e3a08001 	mov	r8, #1	; 0x1
        28059c:	ea000032 	b	28066c <EncoderRun(unsigned long)+0x174>
        2805a0:	e5c57dc1 	strb	r7, [r5, #3521]
        2805a4:	e5c57dc0 	strb	r7, [r5, #3520]
        2805a8:	ea000011 	b	2805f4 <EncoderRun(unsigned long)+0xfc>
        2805ac:	e1a02005 	mov	r2, r5
        2805b0:	e1a0100d 	mov	r1, sp
        2805b4:	e3a00000 	mov	r0, #0	; 0x0
        2805b8:	e1a0e00f 	mov	lr, pc
        2805bc:	e595f01c 	ldr	pc, [r5, #28]
        2805c0:	e1a06000 	mov	r6, r0
        2805c4:	e3500002 	cmp	r0, #2	; 0x2
        2805c8:	1a000001 	bne	2805d4 <EncoderRun(unsigned long)+0xdc>
        2805cc:	e5858df8 	str	r8, [r5, #3576]
        2805d0:	ea00000b 	b	280604 <EncoderRun(unsigned long)+0x10c>
        2805d4:	e3560004 	cmp	r6, #4	; 0x4
        2805d8:	05858df4 	streq	r8, [r5, #3572]
        2805dc:	0afffffa 	beq	2805cc <EncoderRun(unsigned long)+0xd4>
        2805e0:	e3560003 	cmp	r6, #3	; 0x3
        2805e4:	1a000002 	bne	2805f4 <EncoderRun(unsigned long)+0xfc>
        2805e8:	e1a0100d 	mov	r1, sp
        2805ec:	e1a00005 	mov	r0, r5
        2805f0:	eb5fc08c 	bl	1a70828 <$AddPointToOdata(_CDC *, _POINT *)>
        2805f4:	e5950dc0 	ldr	r0, [r5, #3520]
        2805f8:	e1a00820 	mov	r0, r0, lsr #16
        2805fc:	e3500002 	cmp	r0, #2	; 0x2
        280600:	baffffe9 	blt	2805ac <EncoderRun(unsigned long)+0xb4>
        280604:	e5950df4 	ldr	r0, [r5, #3572]
        280608:	e3500000 	cmp	r0, #0	; 0x0
        28060c:	1a000019 	bne	280678 <EncoderRun(unsigned long)+0x180>
        280610:	e5950dc0 	ldr	r0, [r5, #3520]
        280614:	e1b00820 	movs	r0, r0, lsr #16
        280618:	0a000013 	beq	28066c <EncoderRun(unsigned long)+0x174>
        28061c:	e3500002 	cmp	r0, #2	; 0x2
        280620:	e1a00005 	mov	r0, r5
        280624:	aa000008 	bge	28064c <EncoderRun(unsigned long)+0x154>
        280628:	e3a01001 	mov	r1, #1	; 0x1
        28062c:	eb5fbc5b 	bl	1a6f7a0 <$WriteNewStroke(_CDC *, short)>
        280630:	e3500000 	cmp	r0, #0	; 0x0
        280634:	0a000013 	beq	280688 <EncoderRun(unsigned long)+0x190>
        280638:	e1a00005 	mov	r0, r5
        28063c:	eb5fbc59 	bl	1a6f7a8 <$WriteShortStroke(_CDC *)>
        280640:	e3500000 	cmp	r0, #0	; 0x0
        280644:	0a00000f 	beq	280688 <EncoderRun(unsigned long)+0x190>
        280648:	ea000007 	b	28066c <EncoderRun(unsigned long)+0x174>
        28064c:	e3a01000 	mov	r1, #0	; 0x0
        280650:	eb5fbc52 	bl	1a6f7a0 <$WriteNewStroke(_CDC *, short)>
        280654:	e3500000 	cmp	r0, #0	; 0x0
        280658:	0a00000a 	beq	280688 <EncoderRun(unsigned long)+0x190>
        28065c:	e1a00005 	mov	r0, r5
        280660:	eb5fbc4d 	bl	1a6f79c <$WriteLongStroke(_CDC *)>
        280664:	e3500000 	cmp	r0, #0	; 0x0
        280668:	0a000006 	beq	280688 <EncoderRun(unsigned long)+0x190>
        28066c:	e5950df4 	ldr	r0, [r5, #3572]
        280670:	e3500000 	cmp	r0, #0	; 0x0
        280674:	0affffc9 	beq	2805a0 <EncoderRun(unsigned long)+0xa8>
        280678:	e1a00005 	mov	r0, r5
        28067c:	e3a01002 	mov	r1, #2	; 0x2
        280680:	eb5fbc46 	bl	1a6f7a0 <$WriteNewStroke(_CDC *, short)>
        280684:	e3500000 	cmp	r0, #0	; 0x0
        280688:	e3550000 	cmp	r5, #0	; 0x0
        28068c:	03a06010 	moveq	r6, #16	; 0x10
        280690:	1595003c 	ldrne	r0, [r5, #60]
        280694:	11a00820 	movne	r0, r0, lsr #16
        280698:	11a06800 	movne	r6, r0, lsl #16
        28069c:	11a06846 	movne	r6, r6, asr #16
        2806a0:	e5950038 	ldr	r0, [r5, #56]
        2806a4:	e3500000 	cmp	r0, #0	; 0x0
        2806a8:	0a000001 	beq	2806b4 <EncoderRun(unsigned long)+0x1bc>
        2806ac:	e5b50034 	ldr	r0, [r5, #52]!
        2806b0:	eb5fbc3f 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        2806b4:	e3540000 	cmp	r4, #0	; 0x0
        2806b8:	0a000001 	beq	2806c4 <EncoderRun(unsigned long)+0x1cc>
        2806bc:	e1a00004 	mov	r0, r4
        2806c0:	eb5fbc3b 	bl	1a6f7b4 <$HWRMemoryUnlockHandle(unsigned long)>
        2806c4:	e1a00006 	mov	r0, r6
        2806c8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: EcdrSelectCodeBook(_CDC *)
 * Address: 0028294c
 */
EcdrSelectCodeBook(_CDC *) {
    /*
        28294c:	e1a0c00d 	mov	ip, sp
        282950:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        282954:	e24cb004 	sub	fp, ip, #4	; 0x4
        282958:	e1a04000 	mov	r4, r0
        28295c:	e5900e58 	ldr	r0, [r0, #3672]
        282960:	e1a00840 	mov	r0, r0, asr #16
        282964:	e3a0a001 	mov	sl, #1	; 0x1
        282968:	e3a09b01 	mov	r9, #1024	; 0x400
        28296c:	e3a08004 	mov	r8, #4	; 0x4
        282970:	e3a07000 	mov	r7, #0	; 0x0
        282974:	e59f604c 	ldr	r6, [pc, #4c]	; 2829c8 <EcdrSelectCodeBook(_CDC *)+0x7c>
        282978:	e3a0501e 	mov	r5, #30	; 0x1e
        28297c:	e3500001 	cmp	r0, #1	; 0x1
        282980:	0a000011 	beq	2829cc <EcdrSelectCodeBook(_CDC *)+0x80>
        282984:	e3500002 	cmp	r0, #2	; 0x2
        282988:	13500003 	cmpne	r0, #3	; 0x3
        28298c:	1a000026 	bne	282a2c <EcdrSelectCodeBook(_CDC *)+0xe0>
        282990:	e3a00002 	mov	r0, #2	; 0x2
        282994:	eb5fb7a9 	bl	1a70840 <$LockCodeBook(unsigned short)>
        282998:	e5c49e11 	strb	r9, [r4, #3601]
        28299c:	e5c48e10 	strb	r8, [r4, #3600]
        2829a0:	e5c4ae13 	strb	sl, [r4, #3603]
        2829a4:	e5c47e12 	strb	r7, [r4, #3602]
        2829a8:	e3a01ed5 	mov	r1, #3408	; 0xd50
        2829ac:	e2811a01 	add	r1, r1, #4096	; 0x1000
        2829b0:	e5841e18 	str	r1, [r4, #3608]
        2829b4:	e3a010aa 	mov	r1, #170	; 0xaa
        2829b8:	e2811a01 	add	r1, r1, #4096	; 0x1000
        2829bc:	e5841e1c 	str	r1, [r4, #3612]
        2829c0:	e3a01a02 	mov	r1, #8192	; 0x2000
        2829c4:	ea00000c 	b	2829fc <EcdrSelectCodeBook(_CDC *)+0xb0>
        2829c8:	00f0bc10 	rsceqs	fp, r0, r0, lsl ip
        2829cc:	e3a00001 	mov	r0, #1	; 0x1
        2829d0:	eb5fb79a 	bl	1a70840 <$LockCodeBook(unsigned short)>
        2829d4:	e5c49e11 	strb	r9, [r4, #3601]
        2829d8:	e5c48e10 	strb	r8, [r4, #3600]
        2829dc:	e5c4ae13 	strb	sl, [r4, #3603]
        2829e0:	e5c47e12 	strb	r7, [r4, #3602]
        2829e4:	e3a010cc 	mov	r1, #204	; 0xcc
        2829e8:	e2811b02 	add	r1, r1, #2048	; 0x800
        2829ec:	e5841e18 	str	r1, [r4, #3608]
        2829f0:	e3a01c0a 	mov	r1, #2560	; 0xa00
        2829f4:	e5841e1c 	str	r1, [r4, #3612]
        2829f8:	e3a01b02 	mov	r1, #2048	; 0x800
        2829fc:	e5841e20 	str	r1, [r4, #3616]
        282a00:	e2444f77 	sub	r4, r4, #476	; 0x1dc
        282a04:	e2844a01 	add	r4, r4, #4096	; 0x1000
        282a08:	e8840042 	stmia	r4, {r1, r6}
        282a0c:	e2844f77 	add	r4, r4, #476	; 0x1dc
        282a10:	e2444a01 	sub	r4, r4, #4096	; 0x1000
        282a14:	e5c45e15 	strb	r5, [r4, #3605]
        282a18:	e5c47e14 	strb	r7, [r4, #3604]
        282a1c:	e5c45e17 	strb	r5, [r4, #3607]
        282a20:	e5c47e16 	strb	r7, [r4, #3606]
        282a24:	e3500000 	cmp	r0, #0	; 0x0
        282a28:	1a000001 	bne	282a34 <EcdrSelectCodeBook(_CDC *)+0xe8>
        282a2c:	e3a00000 	mov	r0, #0	; 0x0
        282a30:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        282a34:	e5840e38 	str	r0, [r4, #3640]
        282a38:	e5901000 	ldr	r1, [r0]
        282a3c:	e0800821 	add	r0, r0, r1, lsr #16
        282a40:	e5840e3c 	str	r0, [r4, #3644]
        282a44:	e1a01000 	mov	r1, r0
        282a48:	e5900000 	ldr	r0, [r0]
        282a4c:	e0810820 	add	r0, r1, r0, lsr #16
        282a50:	e5840e40 	str	r0, [r4, #3648]
        282a54:	e5901000 	ldr	r1, [r0]
        282a58:	e0800821 	add	r0, r0, r1, lsr #16
        282a5c:	e5840e44 	str	r0, [r4, #3652]
        282a60:	e1a01000 	mov	r1, r0
        282a64:	e5900000 	ldr	r0, [r0]
        282a68:	e0810820 	add	r0, r1, r0, lsr #16
        282a6c:	e5840e48 	str	r0, [r4, #3656]
        282a70:	e5901000 	ldr	r1, [r0]
        282a74:	e0800821 	add	r0, r0, r1, lsr #16
        282a78:	e5840e4c 	str	r0, [r4, #3660]
        282a7c:	e1a01000 	mov	r1, r0
        282a80:	e5900000 	ldr	r0, [r0]
        282a84:	e0810820 	add	r0, r1, r0, lsr #16
        282a88:	e5840e50 	str	r0, [r4, #3664]
        282a8c:	e5901000 	ldr	r1, [r0]
        282a90:	e0800821 	add	r0, r0, r1, lsr #16
        282a94:	e5a40e54 	str	r0, [r4, #3668]!
        282a98:	e3a00001 	mov	r0, #1	; 0x1
        282a9c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EncodeWord_OLD(_CDC *, short, _CODETABLE *)
 * Address: 00282c04
 */
EncodeWord_OLD(_CDC *, short, _CODETABLE *) {
    /*
        282c04:	e1a0c00d 	mov	ip, sp
        282c08:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        282c0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        282c10:	e1a05000 	mov	r5, r0
        282c14:	e1a04002 	mov	r4, r2
        282c18:	e1a07801 	mov	r7, r1, lsl #16
        282c1c:	e1a07847 	mov	r7, r7, asr #16
        282c20:	e5920006 	ldr	r0, [r2, #6]
        282c24:	e282600c 	add	r6, r2, #12	; 0xc
        282c28:	e1570840 	cmp	r7, r0, asr #16
        282c2c:	ba000012 	blt	282c7c <EncodeWord_OLD(_CDC *, short, _CODETABLE *)+0x78>
        282c30:	e1a02006 	mov	r2, r6
        282c34:	e5940002 	ldr	r0, [r4, #2]
        282c38:	e1a00820 	mov	r0, r0, lsr #16
        282c3c:	e1a01800 	mov	r1, r0, lsl #16
        282c40:	e1a01821 	mov	r1, r1, lsr #16
        282c44:	e5940008 	ldr	r0, [r4, #8]
        282c48:	e1a00840 	mov	r0, r0, asr #16
        282c4c:	eb5fb703 	bl	1a70860 <$FindCodeWord(short, unsigned short, _CODEWORD *)>
        282c50:	e3500000 	cmp	r0, #0	; 0x0
        282c54:	ba00002c 	blt	282d0c <EncodeWord_OLD(_CDC *, short, _CODETABLE *)+0x108>
        282c58:	e0860180 	add	r0, r6, r0, lsl #3
        282c5c:	e5902002 	ldr	r2, [r0, #2]
        282c60:	e1a02822 	mov	r2, r2, lsr #16
        282c64:	e5b01004 	ldr	r1, [r0, #4]!
        282c68:	e1a00005 	mov	r0, r5
        282c6c:	eb5fb6fa 	bl	1a7085c <$PutBits(_CDC *, unsigned long, unsigned short)>
        282c70:	e5940006 	ldr	r0, [r4, #6]
        282c74:	e1a00820 	mov	r0, r0, lsr #16
        282c78:	ea000014 	b	282cd0 <EncodeWord_OLD(_CDC *, short, _CODETABLE *)+0xcc>
        282c7c:	e5940004 	ldr	r0, [r4, #4]
        282c80:	e1570840 	cmp	r7, r0, asr #16
        282c84:	e1a02006 	mov	r2, r6
        282c88:	ca000017 	bgt	282cec <EncodeWord_OLD(_CDC *, short, _CODETABLE *)+0xe8>
        282c8c:	e5940002 	ldr	r0, [r4, #2]
        282c90:	e1a00820 	mov	r0, r0, lsr #16
        282c94:	e1a01800 	mov	r1, r0, lsl #16
        282c98:	e1a01821 	mov	r1, r1, lsr #16
        282c9c:	e594000a 	ldr	r0, [r4, #10]
        282ca0:	e1a00840 	mov	r0, r0, asr #16
        282ca4:	eb5fb6ed 	bl	1a70860 <$FindCodeWord(short, unsigned short, _CODEWORD *)>
        282ca8:	e3500000 	cmp	r0, #0	; 0x0
        282cac:	ba000016 	blt	282d0c <EncodeWord_OLD(_CDC *, short, _CODETABLE *)+0x108>
        282cb0:	e0860180 	add	r0, r6, r0, lsl #3
        282cb4:	e5902002 	ldr	r2, [r0, #2]
        282cb8:	e1a02822 	mov	r2, r2, lsr #16
        282cbc:	e5b01004 	ldr	r1, [r0, #4]!
        282cc0:	e1a00005 	mov	r0, r5
        282cc4:	eb5fb6e4 	bl	1a7085c <$PutBits(_CDC *, unsigned long, unsigned short)>
        282cc8:	e5940004 	ldr	r0, [r4, #4]
        282ccc:	e1a00820 	mov	r0, r0, lsr #16
        282cd0:	e0470000 	sub	r0, r7, r0
        282cd4:	e1a01800 	mov	r1, r0, lsl #16
        282cd8:	e1a01841 	mov	r1, r1, asr #16
        282cdc:	e1a02004 	mov	r2, r4
        282ce0:	e1a00005 	mov	r0, r5
        282ce4:	ebffffc6 	bl	282c04 <EncodeWord_OLD(_CDC *, short, _CODETABLE *)>
        282ce8:	ea00000f 	b	282d2c <EncodeWord_OLD(_CDC *, short, _CODETABLE *)+0x128>
        282cec:	e5940002 	ldr	r0, [r4, #2]
        282cf0:	e1a00820 	mov	r0, r0, lsr #16
        282cf4:	e1a01800 	mov	r1, r0, lsl #16
        282cf8:	e1a01821 	mov	r1, r1, lsr #16
        282cfc:	e1a00007 	mov	r0, r7
        282d00:	eb5fb6d6 	bl	1a70860 <$FindCodeWord(short, unsigned short, _CODEWORD *)>
        282d04:	e3500000 	cmp	r0, #0	; 0x0
        282d08:	aa000001 	bge	282d14 <EncodeWord_OLD(_CDC *, short, _CODETABLE *)+0x110>
        282d0c:	e3a00000 	mov	r0, #0	; 0x0
        282d10:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        282d14:	e0860180 	add	r0, r6, r0, lsl #3
        282d18:	e5902002 	ldr	r2, [r0, #2]
        282d1c:	e1a02822 	mov	r2, r2, lsr #16
        282d20:	e5b01004 	ldr	r1, [r0, #4]!
        282d24:	e1a00005 	mov	r0, r5
        282d28:	eb5fb6cb 	bl	1a7085c <$PutBits(_CDC *, unsigned long, unsigned short)>
        282d2c:	e1a00800 	mov	r0, r0, lsl #16
        282d30:	e1a00840 	mov	r0, r0, asr #16
        282d34:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: EncodeWord_NEW(_CDC *, short, _CODEWORD *)
 * Address: 00282d38
 */
EncodeWord_NEW(_CDC *, short, _CODEWORD *) {
    /*
        282d38:	e1a03001 	mov	r3, r1
        282d3c:	e1a01002 	mov	r1, r2
        282d40:	e1a02803 	mov	r2, r3, lsl #16
        282d44:	e1a02842 	mov	r2, r2, asr #16
        282d48:	ea000000 	b	282d50 <EncodeWord_NEW(_CDC *, short, _CODEWORD *)+0x18>
        282d4c:	e2811008 	add	r1, r1, #8	; 0x8
        282d50:	e5913000 	ldr	r3, [r1]
        282d54:	e1a03843 	mov	r3, r3, asr #16
        282d58:	e1530002 	cmp	r3, r2
        282d5c:	15913002 	ldrne	r3, [r1, #2]
        282d60:	11a03823 	movne	r3, r3, lsr #16
        282d64:	13530000 	cmpne	r3, #0	; 0x0
        282d68:	1afffff7 	bne	282d4c <EncodeWord_NEW(_CDC *, short, _CODEWORD *)+0x14>
        282d6c:	e5912002 	ldr	r2, [r1, #2]
        282d70:	e1b02822 	movs	r2, r2, lsr #16
        282d74:	15911004 	ldrne	r1, [r1, #4]
        282d78:	1a5fb6b7 	bne	1a7085c <$PutBits(_CDC *, unsigned long, unsigned short)>
        282d7c:	03a00000 	moveq	r0, #0	; 0x0
        282d80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi
 * Address: 0028877c
 */
void globals::ExtrWordTrace_V() {
    /*
        28877c:	e1a0c00d 	mov	ip, sp
        288780:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        288784:	e24cb004 	sub	fp, ip, #4	; 0x4
        288788:	e1a04000 	mov	r4, r0
        28878c:	e1a05002 	mov	r5, r2
        288790:	e24dd034 	sub	sp, sp, #52	; 0x34
        288794:	e3e0c000 	mvn	ip, #0	; 0x0
        288798:	e58dc028 	str	ip, [sp, #40]
        28879c:	e3a00000 	mov	r0, #0	; 0x0
        2887a0:	e58d0020 	str	r0, [sp, #32]
        2887a4:	e58dc024 	str	ip, [sp, #36]
        2887a8:	e58d0008 	str	r0, [sp, #8]
        2887ac:	e58d000c 	str	r0, [sp, #12]
        2887b0:	e58d0010 	str	r0, [sp, #16]
        2887b4:	e58d0014 	str	r0, [sp, #20]
        2887b8:	e58d0018 	str	r0, [sp, #24]
        2887bc:	e3a0ae45 	mov	sl, #1104	; 0x450
        2887c0:	e28aaa01 	add	sl, sl, #4096	; 0x1000
        2887c4:	e58d001c 	str	r0, [sp, #28]
        2887c8:	e1a0000a 	mov	r0, sl
        2887cc:	eb5f9bfa 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        2887d0:	e1b06000 	movs	r6, r0
        2887d4:	1a000001 	bne	2887e0 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x64>
        2887d8:	e3e00000 	mvn	r0, #0	; 0x0
        2887dc:	ea000159 	b	288d48 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5cc>
        2887e0:	e1a00006 	mov	r0, r6
        2887e4:	e1a0200a 	mov	r2, sl
        2887e8:	e3a01000 	mov	r1, #0	; 0x0
        2887ec:	eb64b099 	bl	1bb4a58 <$memset>
        2887f0:	e3a00000 	mov	r0, #0	; 0x0
        2887f4:	e3e0a000 	mvn	sl, #0	; 0x0
        2887f8:	ea000056 	b	288958 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x1dc>
        2887fc:	e0841180 	add	r1, r4, r0, lsl #3
        288800:	e5911002 	ldr	r1, [r1, #2]
        288804:	e1a01841 	mov	r1, r1, asr #16
        288808:	e3710001 	cmn	r1, #1	; 0x1
        28880c:	1a000038 	bne	2888f4 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x178>
        288810:	e35a0000 	cmp	sl, #0	; 0x0
        288814:	ba00002d 	blt	2888d0 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x154>
        288818:	e08a110a 	add	r1, sl, sl, lsl #2
        28881c:	e081118a 	add	r1, r1, sl, lsl #3
        288820:	e59d201c 	ldr	r2, [sp, #28]
        288824:	e7862101 	str	r2, [r6, r1, lsl #2]
        288828:	e0861101 	add	r1, r6, r1, lsl #2
        28882c:	e59d2018 	ldr	r2, [sp, #24]
        288830:	e5812004 	str	r2, [r1, #4]
        288834:	e59d2014 	ldr	r2, [sp, #20]
        288838:	e5812008 	str	r2, [r1, #8]
        28883c:	e59d2010 	ldr	r2, [sp, #16]
        288840:	e581200c 	str	r2, [r1, #12]
        288844:	e59d300c 	ldr	r3, [sp, #12]
        288848:	e5813010 	str	r3, [r1, #16]
        28884c:	e59d3008 	ldr	r3, [sp, #8]
        288850:	e5813014 	str	r3, [r1, #20]
        288854:	e59d300c 	ldr	r3, [sp, #12]
        288858:	e7942183 	ldr	r2, [r4, r3, lsl #3]
        28885c:	e1a02842 	mov	r2, r2, asr #16
        288860:	e5812028 	str	r2, [r1, #40]
        288864:	e59d2014 	ldr	r2, [sp, #20]
        288868:	e0842182 	add	r2, r4, r2, lsl #3
        28886c:	e5923002 	ldr	r3, [r2, #2]
        288870:	e1a03843 	mov	r3, r3, asr #16
        288874:	e5813024 	str	r3, [r1, #36]
        288878:	e59d3008 	ldr	r3, [sp, #8]
        28887c:	e7943183 	ldr	r3, [r4, r3, lsl #3]
        288880:	e1a03843 	mov	r3, r3, asr #16
        288884:	e5813020 	str	r3, [r1, #32]
        288888:	e59d3010 	ldr	r3, [sp, #16]
        28888c:	e0843183 	add	r3, r4, r3, lsl #3
        288890:	e593c002 	ldr	ip, [r3, #2]
        288894:	e1a0c84c 	mov	ip, ip, asr #16
        288898:	e581c02c 	str	ip, [r1, #44]
        28889c:	e59dc00c 	ldr	ip, [sp, #12]
        2888a0:	e794c18c 	ldr	ip, [r4, ip, lsl #3]
        2888a4:	e1a0c84c 	mov	ip, ip, asr #16
        2888a8:	e59de008 	ldr	lr, [sp, #8]
        2888ac:	e794e18e 	ldr	lr, [r4, lr, lsl #3]
        2888b0:	e1a0e84e 	mov	lr, lr, asr #16
        2888b4:	e04cc00e 	sub	ip, ip, lr
        2888b8:	e581c018 	str	ip, [r1, #24]
        2888bc:	e5933002 	ldr	r3, [r3, #2]
        2888c0:	e1a03843 	mov	r3, r3, asr #16
        2888c4:	e5922002 	ldr	r2, [r2, #2]
        2888c8:	e0432842 	sub	r2, r3, r2, asr #16
        2888cc:	e5a1201c 	str	r2, [r1, #28]!
        2888d0:	e28aa001 	add	sl, sl, #1	; 0x1
        2888d4:	e2802001 	add	r2, r0, #1	; 0x1
        2888d8:	e58d2008 	str	r2, [sp, #8]
        2888dc:	e58d200c 	str	r2, [sp, #12]
        2888e0:	e58d2010 	str	r2, [sp, #16]
        2888e4:	e58d2014 	str	r2, [sp, #20]
        2888e8:	e58d2018 	str	r2, [sp, #24]
        2888ec:	e58d201c 	str	r2, [sp, #28]
        2888f0:	ea000017 	b	288954 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x1d8>
        2888f4:	e7942180 	ldr	r2, [r4, r0, lsl #3]
        2888f8:	e1a02842 	mov	r2, r2, asr #16
        2888fc:	e59d3008 	ldr	r3, [sp, #8]
        288900:	e7943183 	ldr	r3, [r4, r3, lsl #3]
        288904:	e1a03843 	mov	r3, r3, asr #16
        288908:	e1520003 	cmp	r2, r3
        28890c:	b58d0008 	strlt	r0, [sp, #8]
        288910:	ba000004 	blt	288928 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x1ac>
        288914:	e59d300c 	ldr	r3, [sp, #12]
        288918:	e7943183 	ldr	r3, [r4, r3, lsl #3]
        28891c:	e1a03843 	mov	r3, r3, asr #16
        288920:	e1520003 	cmp	r2, r3
        288924:	c58d000c 	strgt	r0, [sp, #12]
        288928:	e59d2014 	ldr	r2, [sp, #20]
        28892c:	e0842182 	add	r2, r4, r2, lsl #3
        288930:	e5922002 	ldr	r2, [r2, #2]
        288934:	e1510842 	cmp	r1, r2, asr #16
        288938:	b58d0014 	strlt	r0, [sp, #20]
        28893c:	ba000004 	blt	288954 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x1d8>
        288940:	e59d2010 	ldr	r2, [sp, #16]
        288944:	e0842182 	add	r2, r4, r2, lsl #3
        288948:	e5922002 	ldr	r2, [r2, #2]
        28894c:	e1510842 	cmp	r1, r2, asr #16
        288950:	c58d0010 	strgt	r0, [sp, #16]
        288954:	e2800001 	add	r0, r0, #1	; 0x1
        288958:	e51b1034 	ldr	r1, [fp, -#52]
        28895c:	e1500001 	cmp	r0, r1
        288960:	b35a0064 	cmplt	sl, #100	; 0x64
        288964:	baffffa4 	blt	2887fc <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x80>
        288968:	e35a0064 	cmp	sl, #100	; 0x64
        28896c:	aa000005 	bge	288988 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x20c>
        288970:	e1a0010a 	mov	r0, sl, lsl #2
        288974:	e58d0030 	str	r0, [sp, #48]
        288978:	eb5f9b8f 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        28897c:	e58d0004 	str	r0, [sp, #4]
        288980:	e3300000 	teq	r0, #0	; 0x0
        288984:	1a000002 	bne	288994 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x218>
        288988:	e1a00006 	mov	r0, r6
        28898c:	eb5f9b8b 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        288990:	eaffff90 	b	2887d8 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5c>
        288994:	e3a01000 	mov	r1, #0	; 0x0
        288998:	e59d0004 	ldr	r0, [sp, #4]
        28899c:	e59d2030 	ldr	r2, [sp, #48]
        2889a0:	eb64b02c 	bl	1bb4a58 <$memset>
        2889a4:	e3a01000 	mov	r1, #0	; 0x0
        2889a8:	e35a0000 	cmp	sl, #0	; 0x0
        2889ac:	da00001d 	ble	288a28 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x2ac>
        2889b0:	e3a03902 	mov	r3, #32768	; 0x8000
        2889b4:	e2433001 	sub	r3, r3, #1	; 0x1
        2889b8:	e3a00000 	mov	r0, #0	; 0x0
        2889bc:	e1a02003 	mov	r2, r3
        2889c0:	e35a0000 	cmp	sl, #0	; 0x0
        2889c4:	da00000c 	ble	2889fc <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x280>
        2889c8:	e080e100 	add	lr, r0, r0, lsl #2
        2889cc:	e08ee180 	add	lr, lr, r0, lsl #3
        2889d0:	e086c10e 	add	ip, r6, lr, lsl #2
        2889d4:	e59ce030 	ldr	lr, [ip, #48]
        2889d8:	e33e0000 	teq	lr, #0	; 0x0
        2889dc:	1a000003 	bne	2889f0 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x274>
        2889e0:	e59cc01c 	ldr	ip, [ip, #28]
        2889e4:	e15c0002 	cmp	ip, r2
        2889e8:	b1a0200c 	movlt	r2, ip
        2889ec:	b58d0000 	strlt	r0, [sp]
        2889f0:	e2800001 	add	r0, r0, #1	; 0x1
        2889f4:	e150000a 	cmp	r0, sl
        2889f8:	bafffff2 	blt	2889c8 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x24c>
        2889fc:	e89d0005 	ldmia	sp, {r0, r2}
        288a00:	e7820101 	str	r0, [r2, r1, lsl #2]
        288a04:	e3a02001 	mov	r2, #1	; 0x1
        288a08:	e59d0000 	ldr	r0, [sp]
        288a0c:	e080c100 	add	ip, r0, r0, lsl #2
        288a10:	e08c0180 	add	r0, ip, r0, lsl #3
        288a14:	e0860100 	add	r0, r6, r0, lsl #2
        288a18:	e5a02030 	str	r2, [r0, #48]!
        288a1c:	e0811002 	add	r1, r1, r2
        288a20:	e151000a 	cmp	r1, sl
        288a24:	baffffe3 	blt	2889b8 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x23c>
        288a28:	e08a0faa 	add	r0, sl, sl, lsr #31
        288a2c:	e1b000c0 	movs	r0, r0, asr #1
        288a30:	0a000001 	beq	288a3c <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x2c0>
        288a34:	e15a0080 	cmp	sl, r0, lsl #1
        288a38:	c2800001 	addgt	r0, r0, #1	; 0x1
        288a3c:	e2400001 	sub	r0, r0, #1	; 0x1
        288a40:	e3700001 	cmn	r0, #1	; 0x1
        288a44:	03a00000 	moveq	r0, #0	; 0x0
        288a48:	e59d2004 	ldr	r2, [sp, #4]
        288a4c:	e7921100 	ldr	r1, [r2, r0, lsl #2]
        288a50:	e081c101 	add	ip, r1, r1, lsl #2
        288a54:	e08c1181 	add	r1, ip, r1, lsl #3
        288a58:	e0861101 	add	r1, r6, r1, lsl #2
        288a5c:	e591101c 	ldr	r1, [r1, #28]
        288a60:	e2800001 	add	r0, r0, #1	; 0x1
        288a64:	e150000a 	cmp	r0, sl
        288a68:	aa000011 	bge	288ab4 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x338>
        288a6c:	e59d2004 	ldr	r2, [sp, #4]
        288a70:	e7922100 	ldr	r2, [r2, r0, lsl #2]
        288a74:	e082c102 	add	ip, r2, r2, lsl #2
        288a78:	e08c2182 	add	r2, ip, r2, lsl #3
        288a7c:	e0862102 	add	r2, r6, r2, lsl #2
        288a80:	e592201c 	ldr	r2, [r2, #28]
        288a84:	e1520001 	cmp	r2, r1
        288a88:	ba000006 	blt	288aa8 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x32c>
        288a8c:	e59d2004 	ldr	r2, [sp, #4]
        288a90:	e7920100 	ldr	r0, [r2, r0, lsl #2]
        288a94:	e080c100 	add	ip, r0, r0, lsl #2
        288a98:	e08c0180 	add	r0, ip, r0, lsl #3
        288a9c:	e0860100 	add	r0, r6, r0, lsl #2
        288aa0:	e5b0101c 	ldr	r1, [r0, #28]!
        288aa4:	ea000002 	b	288ab4 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x338>
        288aa8:	e2800001 	add	r0, r0, #1	; 0x1
        288aac:	e150000a 	cmp	r0, sl
        288ab0:	baffffed 	blt	288a6c <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x2f0>
        288ab4:	e51b302c 	ldr	r3, [fp, -#44]
        288ab8:	e3550000 	cmp	r5, #0	; 0x0
        288abc:	e5831000 	str	r1, [r3]
        288ac0:	da000002 	ble	288ad0 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x354>
        288ac4:	e1a00005 	mov	r0, r5
        288ac8:	eb64a79c 	bl	1bb2940 <$__rt_sdiv>
        288acc:	e1a05000 	mov	r5, r0
        288ad0:	e3a0c000 	mov	ip, #0	; 0x0
        288ad4:	e1a0000c 	mov	r0, ip
        288ad8:	e3a02000 	mov	r2, #0	; 0x0
        288adc:	e3a01000 	mov	r1, #0	; 0x0
        288ae0:	e51b3034 	ldr	r3, [fp, -#52]
        288ae4:	e3530000 	cmp	r3, #0	; 0x0
        288ae8:	da000091 	ble	288d34 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5b8>
        288aec:	e0843181 	add	r3, r4, r1, lsl #3
        288af0:	e593c002 	ldr	ip, [r3, #2]
        288af4:	e1a0c84c 	mov	ip, ip, asr #16
        288af8:	e37c0001 	cmn	ip, #1	; 0x1
        288afc:	e59dc028 	ldr	ip, [sp, #40]
        288b00:	1a000025 	bne	288b9c <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x420>
        288b04:	e29cc001 	adds	ip, ip, #1	; 0x1
        288b08:	e58dc02c 	str	ip, [sp, #44]
        288b0c:	0a000013 	beq	288b60 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3e4>
        288b10:	e3300000 	teq	r0, #0	; 0x0
        288b14:	0a000006 	beq	288b34 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3b8>
        288b18:	e3300001 	teq	r0, #1	; 0x1
        288b1c:	0a000012 	beq	288b6c <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3f0>
        288b20:	e3300002 	teq	r0, #2	; 0x2
        288b24:	0a000007 	beq	288b48 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3cc>
        288b28:	e3300003 	teq	r0, #3	; 0x3
        288b2c:	1a00000b 	bne	288b60 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3e4>
        288b30:	ea000007 	b	288b54 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3d8>
        288b34:	e3320001 	teq	r2, #1	; 0x1
        288b38:	0a000002 	beq	288b48 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3cc>
        288b3c:	e3320002 	teq	r2, #2	; 0x2
        288b40:	1a000006 	bne	288b60 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3e4>
        288b44:	ea000002 	b	288b54 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3d8>
        288b48:	e513c004 	ldr	ip, [r3, -#4]
        288b4c:	e38cc002 	orr	ip, ip, #2	; 0x2
        288b50:	ea000001 	b	288b5c <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3e0>
        288b54:	e513c004 	ldr	ip, [r3, -#4]
        288b58:	e38cc001 	orr	ip, ip, #1	; 0x1
        288b5c:	e523c004 	str	ip, [r3, -#4]!
        288b60:	e59dc02c 	ldr	ip, [sp, #44]
        288b64:	e58dc028 	str	ip, [sp, #40]
        288b68:	ea00006d 	b	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288b6c:	e084c187 	add	ip, r4, r7, lsl #3
        288b70:	e59ce002 	ldr	lr, [ip, #2]
        288b74:	e1a0e84e 	mov	lr, lr, asr #16
        288b78:	e513a006 	ldr	sl, [r3, -#6]
        288b7c:	e15e084a 	cmp	lr, sl, asr #16
        288b80:	e59ce004 	ldr	lr, [ip, #4]
        288b84:	a38ee001 	orrge	lr, lr, #1	; 0x1
        288b88:	a5ace004 	strge	lr, [ip, #4]!
        288b8c:	aaffffed 	bge	288b48 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3cc>
        288b90:	e38ee002 	orr	lr, lr, #2	; 0x2
        288b94:	e5ace004 	str	lr, [ip, #4]!
        288b98:	eaffffed 	b	288b54 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x3d8>
        288b9c:	e59de024 	ldr	lr, [sp, #36]
        288ba0:	e13c000e 	teq	ip, lr
        288ba4:	03a0c000 	moveq	ip, #0	; 0x0
        288ba8:	0a000008 	beq	288bd0 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x454>
        288bac:	e59dc028 	ldr	ip, [sp, #40]
        288bb0:	e1a07001 	mov	r7, r1
        288bb4:	e58dc024 	str	ip, [sp, #36]
        288bb8:	e5930002 	ldr	r0, [r3, #2]
        288bbc:	e0659840 	rsb	r9, r5, r0, asr #16
        288bc0:	e5930002 	ldr	r0, [r3, #2]
        288bc4:	e0858840 	add	r8, r5, r0, asr #16
        288bc8:	e3a00001 	mov	r0, #1	; 0x1
        288bcc:	ea000054 	b	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288bd0:	e3300000 	teq	r0, #0	; 0x0
        288bd4:	0a00000b 	beq	288c08 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x48c>
        288bd8:	e3300001 	teq	r0, #1	; 0x1
        288bdc:	0a00003d 	beq	288cd8 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x55c>
        288be0:	e3300002 	teq	r0, #2	; 0x2
        288be4:	0a000024 	beq	288c7c <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x500>
        288be8:	e3300003 	teq	r0, #3	; 0x3
        288bec:	1a00004c 	bne	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288bf0:	e593e002 	ldr	lr, [r3, #2]
        288bf4:	e1a0e84e 	mov	lr, lr, asr #16
        288bf8:	e15e0008 	cmp	lr, r8
        288bfc:	da00002c 	ble	288cb4 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x538>
        288c00:	e1a0000c 	mov	r0, ip
        288c04:	ea000046 	b	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288c08:	e593c00a 	ldr	ip, [r3, #10]
        288c0c:	e1a0c84c 	mov	ip, ip, asr #16
        288c10:	e37c0001 	cmn	ip, #1	; 0x1
        288c14:	0a000042 	beq	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288c18:	e593e002 	ldr	lr, [r3, #2]
        288c1c:	e15c084e 	cmp	ip, lr, asr #16
        288c20:	b3a0c003 	movlt	ip, #3	; 0x3
        288c24:	a3a0c004 	movge	ip, #4	; 0x4
        288c28:	e3320001 	teq	r2, #1	; 0x1
        288c2c:	0a000009 	beq	288c58 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x4dc>
        288c30:	e3320002 	teq	r2, #2	; 0x2
        288c34:	033c0003 	teqeq	ip, #3	; 0x3
        288c38:	1a000039 	bne	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288c3c:	e1a07001 	mov	r7, r1
        288c40:	e5930002 	ldr	r0, [r3, #2]
        288c44:	e0659840 	rsb	r9, r5, r0, asr #16
        288c48:	e5930002 	ldr	r0, [r3, #2]
        288c4c:	e0858840 	add	r8, r5, r0, asr #16
        288c50:	e3a00003 	mov	r0, #3	; 0x3
        288c54:	ea000032 	b	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288c58:	e33c0004 	teq	ip, #4	; 0x4
        288c5c:	1a000030 	bne	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288c60:	e1a07001 	mov	r7, r1
        288c64:	e5930002 	ldr	r0, [r3, #2]
        288c68:	e0659840 	rsb	r9, r5, r0, asr #16
        288c6c:	e5930002 	ldr	r0, [r3, #2]
        288c70:	e0858840 	add	r8, r5, r0, asr #16
        288c74:	e3a00002 	mov	r0, #2	; 0x2
        288c78:	ea000029 	b	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288c7c:	e593e002 	ldr	lr, [r3, #2]
        288c80:	e1a0e84e 	mov	lr, lr, asr #16
        288c84:	e15e0008 	cmp	lr, r8
        288c88:	da000006 	ble	288ca8 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x52c>
        288c8c:	e1a0000c 	mov	r0, ip
        288c90:	e0842187 	add	r2, r4, r7, lsl #3
        288c94:	e592e004 	ldr	lr, [r2, #4]
        288c98:	e38ee002 	orr	lr, lr, #2	; 0x2
        288c9c:	e5a2e004 	str	lr, [r2, #4]!
        288ca0:	e3a02002 	mov	r2, #2	; 0x2
        288ca4:	eaffffc9 	b	288bd0 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x454>
        288ca8:	e15e0009 	cmp	lr, r9
        288cac:	baffffd3 	blt	288c00 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x484>
        288cb0:	ea00001b 	b	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288cb4:	e15e0009 	cmp	lr, r9
        288cb8:	aa000019 	bge	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288cbc:	e1a0000c 	mov	r0, ip
        288cc0:	e0842187 	add	r2, r4, r7, lsl #3
        288cc4:	e592e004 	ldr	lr, [r2, #4]
        288cc8:	e38ee001 	orr	lr, lr, #1	; 0x1
        288ccc:	e5a2e004 	str	lr, [r2, #4]!
        288cd0:	e3a02001 	mov	r2, #1	; 0x1
        288cd4:	eaffffbd 	b	288bd0 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x454>
        288cd8:	e5933002 	ldr	r3, [r3, #2]
        288cdc:	e1a03843 	mov	r3, r3, asr #16
        288ce0:	e1530009 	cmp	r3, r9
        288ce4:	ca000006 	bgt	288d04 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x588>
        288ce8:	e1a0000c 	mov	r0, ip
        288cec:	e0842187 	add	r2, r4, r7, lsl #3
        288cf0:	e5923004 	ldr	r3, [r2, #4]
        288cf4:	e3833001 	orr	r3, r3, #1	; 0x1
        288cf8:	e5a23004 	str	r3, [r2, #4]!
        288cfc:	e3a02001 	mov	r2, #1	; 0x1
        288d00:	ea000007 	b	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288d04:	e1530008 	cmp	r3, r8
        288d08:	ba000005 	blt	288d24 <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x5a8>
        288d0c:	e1a0000c 	mov	r0, ip
        288d10:	e0842187 	add	r2, r4, r7, lsl #3
        288d14:	e5923004 	ldr	r3, [r2, #4]
        288d18:	e3833002 	orr	r3, r3, #2	; 0x2
        288d1c:	e5a23004 	str	r3, [r2, #4]!
        288d20:	e3a02002 	mov	r2, #2	; 0x2
        288d24:	e2811001 	add	r1, r1, #1	; 0x1
        288d28:	e51b3034 	ldr	r3, [fp, -#52]
        288d2c:	e1510003 	cmp	r1, r3
        288d30:	baffff6d 	blt	288aec <ExtrWordTrace_V__FP14tag_WORD_TRACEiT2Pi+0x370>
        288d34:	e59d0004 	ldr	r0, [sp, #4]
        288d38:	eb5f9aa0 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        288d3c:	e1a00006 	mov	r0, r6
        288d40:	eb5f9a9e 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        288d44:	e59d0020 	ldr	r0, [sp, #32]
        288d48:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EraseArc__FP4RectlT2
 * Address: 002aa930
 */
void globals::EraseArc() {
    /*
        2aa930:	e1a03002 	mov	r3, r2
        2aa934:	e1a02001 	mov	r2, r1
        2aa938:	e1a01000 	mov	r1, r0
        2aa93c:	e3a00002 	mov	r0, #2	; 0x2
        2aa940:	ea628747 	b	1b4c664 <$CallArc__FUcP4RectlT3>
    */
}

/**
 * Symbol: Extr__FP8low_typesN52
 * Address: 002ba52c
 */
void globals::Extr() {
    /*
        2ba52c:	e1a0c00d 	mov	ip, sp
        2ba530:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ba534:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ba538:	e1a04000 	mov	r4, r0
        2ba53c:	e1a01801 	mov	r1, r1, lsl #16
        2ba540:	e1a01841 	mov	r1, r1, asr #16
        2ba544:	e59b000c 	ldr	r0, [fp, #12]
        2ba548:	e59bc008 	ldr	ip, [fp, #8]
        2ba54c:	e59be004 	ldr	lr, [fp, #4]
        2ba550:	e52d1028 	str	r1, [sp, -#40]!
        2ba554:	e1a01802 	mov	r1, r2, lsl #16
        2ba558:	e1a01841 	mov	r1, r1, asr #16
        2ba55c:	e1a03803 	mov	r3, r3, lsl #16
        2ba560:	e1a03843 	mov	r3, r3, asr #16
        2ba564:	e98d000a 	stmib	sp, {r1, r3}
        2ba568:	e1a0380e 	mov	r3, lr, lsl #16
        2ba56c:	e1a03843 	mov	r3, r3, asr #16
        2ba570:	e1a0a80c 	mov	sl, ip, lsl #16
        2ba574:	e1a0a84a 	mov	sl, sl, asr #16
        2ba578:	e1a00800 	mov	r0, r0, lsl #16
        2ba57c:	e1a00840 	mov	r0, r0, asr #16
        2ba580:	e58d300c 	str	r3, [sp, #12]
        2ba584:	e24dd018 	sub	sp, sp, #24	; 0x18
        2ba588:	e5941054 	ldr	r1, [r4, #84]
        2ba58c:	e58d1014 	str	r1, [sp, #20]
        2ba590:	e5941058 	ldr	r1, [r4, #88]
        2ba594:	e1a01841 	mov	r1, r1, asr #16
        2ba598:	e58d1010 	str	r1, [sp, #16]
        2ba59c:	e594204c 	ldr	r2, [r4, #76]
        2ba5a0:	e58d200c 	str	r2, [sp, #12]
        2ba5a4:	e5949050 	ldr	r9, [r4, #80]
        2ba5a8:	e1a09849 	mov	r9, r9, asr #16
        2ba5ac:	e5943040 	ldr	r3, [r4, #64]
        2ba5b0:	e58d3008 	str	r3, [sp, #8]
        2ba5b4:	e5941046 	ldr	r1, [r4, #70]
        2ba5b8:	e1a01841 	mov	r1, r1, asr #16
        2ba5bc:	e58d1004 	str	r1, [sp, #4]
        2ba5c0:	e59d1010 	ldr	r1, [sp, #16]
        2ba5c4:	e3510000 	cmp	r1, #0	; 0x0
        2ba5c8:	e3a07000 	mov	r7, #0	; 0x0
        2ba5cc:	da000098 	ble	2ba834 <Extr__FP8low_typesN52+0x308>
        2ba5d0:	e3a01000 	mov	r1, #0	; 0x0
        2ba5d4:	e58d1000 	str	r1, [sp]
        2ba5d8:	da000093 	ble	2ba82c <Extr__FP8low_typesN52+0x300>
        2ba5dc:	e2001002 	and	r1, r0, #2	; 0x2
        2ba5e0:	e58d103c 	str	r1, [sp, #60]
        2ba5e4:	e2841046 	add	r1, r4, #70	; 0x46
        2ba5e8:	e28a8001 	add	r8, sl, #1	; 0x1
        2ba5ec:	e58d1038 	str	r1, [sp, #56]
        2ba5f0:	e2001001 	and	r1, r0, #1	; 0x1
        2ba5f4:	e58d1030 	str	r1, [sp, #48]
        2ba5f8:	e58d8034 	str	r8, [sp, #52]
        2ba5fc:	e2001004 	and	r1, r0, #4	; 0x4
        2ba600:	e200000c 	and	r0, r0, #12	; 0xc
        2ba604:	e58d0028 	str	r0, [sp, #40]
        2ba608:	e58d102c 	str	r1, [sp, #44]
        2ba60c:	e0870087 	add	r0, r7, r7, lsl #1
        2ba610:	e59d1014 	ldr	r1, [sp, #20]
        2ba614:	e7916100 	ldr	r6, [r1, r0, lsl #2]
        2ba618:	e1a06846 	mov	r6, r6, asr #16
        2ba61c:	e0810100 	add	r0, r1, r0, lsl #2
        2ba620:	e5905002 	ldr	r5, [r0, #2]
        2ba624:	e1a05845 	mov	r5, r5, asr #16
        2ba628:	e3a01001 	mov	r1, #1	; 0x1
        2ba62c:	e59d0000 	ldr	r0, [sp]
        2ba630:	e1500009 	cmp	r0, r9
        2ba634:	aa000010 	bge	2ba67c <Extr__FP8low_typesN52+0x150>
        2ba638:	e59d200c 	ldr	r2, [sp, #12]
        2ba63c:	e7922080 	ldr	r2, [r2, r0, lsl #1]
        2ba640:	e1a02842 	mov	r2, r2, asr #16
        2ba644:	e0822102 	add	r2, r2, r2, lsl #2
        2ba648:	e59d3008 	ldr	r3, [sp, #8]
        2ba64c:	e0832102 	add	r2, r3, r2, lsl #2
        2ba650:	e5923004 	ldr	r3, [r2, #4]
        2ba654:	e1360843 	teq	r6, r3, asr #16
        2ba658:	05922006 	ldreq	r2, [r2, #6]
        2ba65c:	01350842 	teqeq	r5, r2, asr #16
        2ba660:	058d0000 	streq	r0, [sp]
        2ba664:	0a00006c 	beq	2ba81c <Extr__FP8low_typesN52+0x2f0>
        2ba668:	e2800001 	add	r0, r0, #1	; 0x1
        2ba66c:	e1500009 	cmp	r0, r9
        2ba670:	bafffff0 	blt	2ba638 <Extr__FP8low_typesN52+0x10c>
        2ba674:	e3310000 	teq	r1, #0	; 0x0
        2ba678:	0a000067 	beq	2ba81c <Extr__FP8low_typesN52+0x2f0>
        2ba67c:	e1a03006 	mov	r3, r6
        2ba680:	e1a02006 	mov	r2, r6
        2ba684:	e1a01006 	mov	r1, r6
        2ba688:	e1a00006 	mov	r0, r6
        2ba68c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ba690:	e3a03000 	mov	r3, #0	; 0x0
        2ba694:	e92d0008 	stmdb	sp!, {r3}
        2ba698:	e1a00004 	mov	r0, r4
        2ba69c:	e3a02000 	mov	r2, #0	; 0x0
        2ba6a0:	e3a01010 	mov	r1, #16	; 0x10
        2ba6a4:	eb619a93 	bl	1b210f8 <$Mark__FP8low_typeUcN32sN36>
        2ba6a8:	e28dd014 	add	sp, sp, #20	; 0x14
        2ba6ac:	e3300001 	teq	r0, #1	; 0x1
        2ba6b0:	0a00005f 	beq	2ba834 <Extr__FP8low_typesN52+0x308>
        2ba6b4:	e59d003c 	ldr	r0, [sp, #60]
        2ba6b8:	e3300000 	teq	r0, #0	; 0x0
        2ba6bc:	0a000021 	beq	2ba748 <Extr__FP8low_typesN52+0x21c>
        2ba6c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ba6c4:	e3a08000 	mov	r8, #0	; 0x0
        2ba6c8:	e59d0040 	ldr	r0, [sp, #64]
        2ba6cc:	e58d0004 	str	r0, [sp, #4]
        2ba6d0:	e5901000 	ldr	r1, [r0]
        2ba6d4:	e1a01841 	mov	r1, r1, asr #16
        2ba6d8:	e58d1000 	str	r1, [sp]
        2ba6dc:	ea000011 	b	2ba728 <Extr__FP8low_typesN52+0x1fc>
        2ba6e0:	e2888001 	add	r8, r8, #1	; 0x1
        2ba6e4:	e1a00008 	mov	r0, r8
        2ba6e8:	e59d1020 	ldr	r1, [sp, #32]
        2ba6ec:	eb63e093 	bl	1bb2940 <$__rt_sdiv>
        2ba6f0:	e3500001 	cmp	r0, #1	; 0x1
        2ba6f4:	d3a00002 	movle	r0, #2	; 0x2
        2ba6f8:	d59d803c 	ldrle	r8, [sp, #60]
        2ba6fc:	e1a03000 	mov	r3, r0
        2ba700:	e92d0008 	stmdb	sp!, {r3}
        2ba704:	e1a02005 	mov	r2, r5
        2ba708:	e1a01006 	mov	r1, r6
        2ba70c:	e1a00004 	mov	r0, r4
        2ba710:	e3a03002 	mov	r3, #2	; 0x2
        2ba714:	eb618de1 	bl	1b1dea0 <$BigExtr__FP8low_typesN32>
        2ba718:	e28dd004 	add	sp, sp, #4	; 0x4
        2ba71c:	e3300001 	teq	r0, #1	; 0x1
        2ba720:	028dd008 	addeq	sp, sp, #8	; 0x8
        2ba724:	0a000042 	beq	2ba834 <Extr__FP8low_typesN52+0x308>
        2ba728:	e59d0004 	ldr	r0, [sp, #4]
        2ba72c:	e59d1000 	ldr	r1, [sp]
        2ba730:	e5900000 	ldr	r0, [r0]
        2ba734:	e1310840 	teq	r1, r0, asr #16
        2ba738:	1a000001 	bne	2ba744 <Extr__FP8low_typesN52+0x218>
        2ba73c:	e158000a 	cmp	r8, sl
        2ba740:	daffffe6 	ble	2ba6e0 <Extr__FP8low_typesN52+0x1b4>
        2ba744:	e28dd008 	add	sp, sp, #8	; 0x8
        2ba748:	e59d0030 	ldr	r0, [sp, #48]
        2ba74c:	e3300000 	teq	r0, #0	; 0x0
        2ba750:	0a000009 	beq	2ba77c <Extr__FP8low_typesN52+0x250>
        2ba754:	e59d301c 	ldr	r3, [sp, #28]
        2ba758:	e92d0008 	stmdb	sp!, {r3}
        2ba75c:	e1a02005 	mov	r2, r5
        2ba760:	e1a01006 	mov	r1, r6
        2ba764:	e1a00004 	mov	r0, r4
        2ba768:	e3a03001 	mov	r3, #1	; 0x1
        2ba76c:	eb618dcb 	bl	1b1dea0 <$BigExtr__FP8low_typesN32>
        2ba770:	e28dd004 	add	sp, sp, #4	; 0x4
        2ba774:	e3300001 	teq	r0, #1	; 0x1
        2ba778:	0a00002d 	beq	2ba834 <Extr__FP8low_typesN52+0x308>
        2ba77c:	e59d002c 	ldr	r0, [sp, #44]
        2ba780:	e3300000 	teq	r0, #0	; 0x0
        2ba784:	0a000009 	beq	2ba7b0 <Extr__FP8low_typesN52+0x284>
        2ba788:	e59d3020 	ldr	r3, [sp, #32]
        2ba78c:	e92d0008 	stmdb	sp!, {r3}
        2ba790:	e1a02005 	mov	r2, r5
        2ba794:	e1a01006 	mov	r1, r6
        2ba798:	e1a00004 	mov	r0, r4
        2ba79c:	e3a03004 	mov	r3, #4	; 0x4
        2ba7a0:	eb618dbe 	bl	1b1dea0 <$BigExtr__FP8low_typesN32>
        2ba7a4:	e28dd004 	add	sp, sp, #4	; 0x4
        2ba7a8:	e3300001 	teq	r0, #1	; 0x1
        2ba7ac:	0a000020 	beq	2ba834 <Extr__FP8low_typesN52+0x308>
        2ba7b0:	e59d0028 	ldr	r0, [sp, #40]
        2ba7b4:	e3300000 	teq	r0, #0	; 0x0
        2ba7b8:	0a000009 	beq	2ba7e4 <Extr__FP8low_typesN52+0x2b8>
        2ba7bc:	e59d3024 	ldr	r3, [sp, #36]
        2ba7c0:	e92d0008 	stmdb	sp!, {r3}
        2ba7c4:	e1a02005 	mov	r2, r5
        2ba7c8:	e1a01006 	mov	r1, r6
        2ba7cc:	e1a00004 	mov	r0, r4
        2ba7d0:	e3a03008 	mov	r3, #8	; 0x8
        2ba7d4:	eb618db1 	bl	1b1dea0 <$BigExtr__FP8low_typesN32>
        2ba7d8:	e28dd004 	add	sp, sp, #4	; 0x4
        2ba7dc:	e3300001 	teq	r0, #1	; 0x1
        2ba7e0:	0a000013 	beq	2ba834 <Extr__FP8low_typesN52+0x308>
        2ba7e4:	e1a03005 	mov	r3, r5
        2ba7e8:	e1a02005 	mov	r2, r5
        2ba7ec:	e1a01005 	mov	r1, r5
        2ba7f0:	e1a00005 	mov	r0, r5
        2ba7f4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2ba7f8:	e3a03000 	mov	r3, #0	; 0x0
        2ba7fc:	e92d0008 	stmdb	sp!, {r3}
        2ba800:	e1a00004 	mov	r0, r4
        2ba804:	e3a02000 	mov	r2, #0	; 0x0
        2ba808:	e3a01020 	mov	r1, #32	; 0x20
        2ba80c:	eb619a39 	bl	1b210f8 <$Mark__FP8low_typeUcN32sN36>
        2ba810:	e28dd014 	add	sp, sp, #20	; 0x14
        2ba814:	e3300001 	teq	r0, #1	; 0x1
        2ba818:	0a000005 	beq	2ba834 <Extr__FP8low_typesN52+0x308>
        2ba81c:	e2877001 	add	r7, r7, #1	; 0x1
        2ba820:	e59d0010 	ldr	r0, [sp, #16]
        2ba824:	e1570000 	cmp	r7, r0
        2ba828:	baffff77 	blt	2ba60c <Extr__FP8low_typesN52+0xe0>
        2ba82c:	e3a00000 	mov	r0, #0	; 0x0
        2ba830:	ea000007 	b	2ba854 <Extr__FP8low_typesN52+0x328>
        2ba834:	e5c4705d 	strb	r7, [r4, #93]
        2ba838:	e1a00447 	mov	r0, r7, asr #8
        2ba83c:	e5c4005c 	strb	r0, [r4, #92]
        2ba840:	e59d1004 	ldr	r1, [sp, #4]
        2ba844:	e5c41047 	strb	r1, [r4, #71]
        2ba848:	e1a00441 	mov	r0, r1, asr #8
        2ba84c:	e5c40046 	strb	r0, [r4, #70]
        2ba850:	e3a00001 	mov	r0, #1	; 0x1
        2ba854:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: end_min_has_right_point__FPsT1P9SPEC_TYPET3T1
 * Address: 002bc874
 */
void globals::end_min_has_right_point() {
    /*
        2bc874:	e1a0c00d 	mov	ip, sp
        2bc878:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2bc87c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2bc880:	e1a04000 	mov	r4, r0
        2bc884:	e1a05003 	mov	r5, r3
        2bc888:	e59b8004 	ldr	r8, [fp, #4]
        2bc88c:	e5930006 	ldr	r0, [r3, #6]
        2bc890:	e1a00840 	mov	r0, r0, asr #16
        2bc894:	e1a07000 	mov	r7, r0
        2bc898:	e0841080 	add	r1, r4, r0, lsl #1
        2bc89c:	e5911002 	ldr	r1, [r1, #2]
        2bc8a0:	e7940080 	ldr	r0, [r4, r0, lsl #1]
        2bc8a4:	e1a00840 	mov	r0, r0, asr #16
        2bc8a8:	e1500841 	cmp	r0, r1, asr #16
        2bc8ac:	c3a00000 	movgt	r0, #0	; 0x0
        2bc8b0:	c91babf0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2bc8b4:	e5920004 	ldr	r0, [r2, #4]
        2bc8b8:	e0671840 	rsb	r1, r7, r0, asr #16
        2bc8bc:	e1a09001 	mov	r9, r1
        2bc8c0:	e3a00006 	mov	r0, #6	; 0x6
        2bc8c4:	eb63d81d 	bl	1bb2940 <$__rt_sdiv>
        2bc8c8:	e0800007 	add	r0, r0, r7
        2bc8cc:	e1a06800 	mov	r6, r0, lsl #16
        2bc8d0:	e1a06846 	mov	r6, r6, asr #16
        2bc8d4:	e1a01009 	mov	r1, r9
        2bc8d8:	e3a00003 	mov	r0, #3	; 0x3
        2bc8dc:	eb63d817 	bl	1bb2940 <$__rt_sdiv>
        2bc8e0:	e0800007 	add	r0, r0, r7
        2bc8e4:	e1a00800 	mov	r0, r0, lsl #16
        2bc8e8:	e1a00840 	mov	r0, r0, asr #16
        2bc8ec:	e7942080 	ldr	r2, [r4, r0, lsl #1]
        2bc8f0:	e1a02842 	mov	r2, r2, asr #16
        2bc8f4:	e5951004 	ldr	r1, [r5, #4]
        2bc8f8:	e1a01841 	mov	r1, r1, asr #16
        2bc8fc:	e7941081 	ldr	r1, [r4, r1, lsl #1]
        2bc900:	e1a01841 	mov	r1, r1, asr #16
        2bc904:	e1520001 	cmp	r2, r1
        2bc908:	a5c80001 	strgeb	r0, [r8, #1]
        2bc90c:	a1a00440 	movge	r0, r0, asr #8
        2bc910:	aa000005 	bge	2bc92c <end_min_has_right_point__FPsT1P9SPEC_TYPET3T1+0xb8>
        2bc914:	e7940086 	ldr	r0, [r4, r6, lsl #1]
        2bc918:	e1a00840 	mov	r0, r0, asr #16
        2bc91c:	e1500001 	cmp	r0, r1
        2bc920:	ba000003 	blt	2bc934 <end_min_has_right_point__FPsT1P9SPEC_TYPET3T1+0xc0>
        2bc924:	e5c86001 	strb	r6, [r8, #1]
        2bc928:	e1a00446 	mov	r0, r6, asr #8
        2bc92c:	e5c80000 	strb	r0, [r8]
        2bc930:	ea000014 	b	2bc988 <end_min_has_right_point__FPsT1P9SPEC_TYPET3T1+0x114>
        2bc934:	e2870001 	add	r0, r7, #1	; 0x1
        2bc938:	e1a00800 	mov	r0, r0, lsl #16
        2bc93c:	e1a00840 	mov	r0, r0, asr #16
        2bc940:	e1500006 	cmp	r0, r6
        2bc944:	aa00000f 	bge	2bc988 <end_min_has_right_point__FPsT1P9SPEC_TYPET3T1+0x114>
        2bc948:	e7942080 	ldr	r2, [r4, r0, lsl #1]
        2bc94c:	e1a02842 	mov	r2, r2, asr #16
        2bc950:	e5951006 	ldr	r1, [r5, #6]
        2bc954:	e1a01841 	mov	r1, r1, asr #16
        2bc958:	e7941081 	ldr	r1, [r4, r1, lsl #1]
        2bc95c:	e1a01841 	mov	r1, r1, asr #16
        2bc960:	e1520001 	cmp	r2, r1
        2bc964:	ba000007 	blt	2bc988 <end_min_has_right_point__FPsT1P9SPEC_TYPET3T1+0x114>
        2bc968:	e5c80001 	strb	r0, [r8, #1]
        2bc96c:	e1a01440 	mov	r1, r0, asr #8
        2bc970:	e5c81000 	strb	r1, [r8]
        2bc974:	e2800001 	add	r0, r0, #1	; 0x1
        2bc978:	e1a00800 	mov	r0, r0, lsl #16
        2bc97c:	e1a00840 	mov	r0, r0, asr #16
        2bc980:	e1500006 	cmp	r0, r6
        2bc984:	baffffef 	blt	2bc948 <end_min_has_right_point__FPsT1P9SPEC_TYPET3T1+0xd4>
        2bc988:	e3a00001 	mov	r0, #1	; 0x1
        2bc98c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: exchange(low_type *, xrdata_type *)
 * Address: 002c7a00
 */
exchange(low_type *, xrdata_type *) {
    /*
        2c7a00:	e1a0c00d 	mov	ip, sp
        2c7a04:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2c7a08:	e24cb004 	sub	fp, ip, #4	; 0x4
        2c7a0c:	e1a04000 	mov	r4, r0
        2c7a10:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2c7a14:	e5902040 	ldr	r2, [r0, #64]
        2c7a18:	e58d2018 	str	r2, [sp, #24]
        2c7a1c:	e5900024 	ldr	r0, [r0, #36]
        2c7a20:	e58d0014 	str	r0, [sp, #20]
        2c7a24:	e51b102c 	ldr	r1, [fp, -#44]
        2c7a28:	e3a00005 	mov	r0, #5	; 0x5
        2c7a2c:	e5b19008 	ldr	r9, [r1, #8]!
        2c7a30:	e58d0004 	str	r0, [sp, #4]
        2c7a34:	e5941034 	ldr	r1, [r4, #52]
        2c7a38:	e58d1000 	str	r1, [sp]
        2c7a3c:	e3a07000 	mov	r7, #0	; 0x0
        2c7a40:	e1a06009 	mov	r6, r9
        2c7a44:	e3a00001 	mov	r0, #1	; 0x1
        2c7a48:	e5948014 	ldr	r8, [r4, #20]
        2c7a4c:	e594a038 	ldr	sl, [r4, #56]
        2c7a50:	e5c90000 	strb	r0, [r9]
        2c7a54:	e3a01000 	mov	r1, #0	; 0x0
        2c7a58:	e5c91001 	strb	r1, [r9, #1]
        2c7a5c:	e3a00005 	mov	r0, #5	; 0x5
        2c7a60:	e5c90002 	strb	r0, [r9, #2]
        2c7a64:	e3a00007 	mov	r0, #7	; 0x7
        2c7a68:	e5c90003 	strb	r0, [r9, #3]
        2c7a6c:	e3a00006 	mov	r0, #6	; 0x6
        2c7a70:	e5c90006 	strb	r0, [r9, #6]
        2c7a74:	e1a01004 	mov	r1, r4
        2c7a78:	e1a00006 	mov	r0, r6
        2c7a7c:	e59d2018 	ldr	r2, [sp, #24]
        2c7a80:	eb61afdb 	bl	1b339f4 <$MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)>
        2c7a84:	e3a00001 	mov	r0, #1	; 0x1
        2c7a88:	e5c6000b 	strb	r0, [r6, #11]
        2c7a8c:	e3a01000 	mov	r1, #0	; 0x0
        2c7a90:	e5c6100a 	strb	r1, [r6, #10]
        2c7a94:	e5c60009 	strb	r0, [r6, #9]
        2c7a98:	e5c61008 	strb	r1, [r6, #8]
        2c7a9c:	e59d2018 	ldr	r2, [sp, #24]
        2c7aa0:	e5b2000c 	ldr	r0, [r2, #12]!
        2c7aa4:	e3300000 	teq	r0, #0	; 0x0
        2c7aa8:	0a000010 	beq	2c7af0 <exchange(low_type *, xrdata_type *)+0xf0>
        2c7aac:	e5d01001 	ldrb	r1, [r0, #1]
        2c7ab0:	e331000d 	teq	r1, #13	; 0xd
        2c7ab4:	13310010 	teqne	r1, #16	; 0x10
        2c7ab8:	1a000008 	bne	2c7ae0 <exchange(low_type *, xrdata_type *)+0xe0>
        2c7abc:	e590200c 	ldr	r2, [r0, #12]
        2c7ac0:	e3320000 	teq	r2, #0	; 0x0
        2c7ac4:	15d21001 	ldrneb	r1, [r2, #1]
        2c7ac8:	13310012 	teqne	r1, #18	; 0x12
        2c7acc:	13310001 	teqne	r1, #1	; 0x1
        2c7ad0:	13310013 	teqne	r1, #19	; 0x13
        2c7ad4:	13310014 	teqne	r1, #20	; 0x14
        2c7ad8:	11a00002 	movne	r0, r2
        2c7adc:	1afffff2 	bne	2c7aac <exchange(low_type *, xrdata_type *)+0xac>
        2c7ae0:	e3300000 	teq	r0, #0	; 0x0
        2c7ae4:	15900004 	ldrne	r0, [r0, #4]
        2c7ae8:	11a00820 	movne	r0, r0, lsr #16
        2c7aec:	1a000005 	bne	2c7b08 <exchange(low_type *, xrdata_type *)+0x108>
        2c7af0:	e3a00001 	mov	r0, #1	; 0x1
        2c7af4:	e5c6000d 	strb	r0, [r6, #13]
        2c7af8:	e3a00000 	mov	r0, #0	; 0x0
        2c7afc:	e5c6000c 	strb	r0, [r6, #12]
        2c7b00:	ea00000c 	b	2c7b38 <exchange(low_type *, xrdata_type *)+0x138>
        2c7b04:	e2400001 	sub	r0, r0, #1	; 0x1
        2c7b08:	e5c6000d 	strb	r0, [r6, #13]
        2c7b0c:	e1a00440 	mov	r0, r0, asr #8
        2c7b10:	e5c6000c 	strb	r0, [r6, #12]
        2c7b14:	e596000c 	ldr	r0, [r6, #12]
        2c7b18:	e1a00840 	mov	r0, r0, asr #16
        2c7b1c:	e3500000 	cmp	r0, #0	; 0x0
        2c7b20:	da000004 	ble	2c7b38 <exchange(low_type *, xrdata_type *)+0x138>
        2c7b24:	e08a1080 	add	r1, sl, r0, lsl #1
        2c7b28:	e5111002 	ldr	r1, [r1, -#2]
        2c7b2c:	e1a01841 	mov	r1, r1, asr #16
        2c7b30:	e3710001 	cmn	r1, #1	; 0x1
        2c7b34:	1afffff2 	bne	2c7b04 <exchange(low_type *, xrdata_type *)+0x104>
        2c7b38:	e59d1000 	ldr	r1, [sp]
        2c7b3c:	e5912002 	ldr	r2, [r1, #2]
        2c7b40:	e1a02842 	mov	r2, r2, asr #16
        2c7b44:	e596000c 	ldr	r0, [r6, #12]
        2c7b48:	e1a00840 	mov	r0, r0, asr #16
        2c7b4c:	e7911080 	ldr	r1, [r1, r0, lsl #1]
        2c7b50:	e1a01841 	mov	r1, r1, asr #16
        2c7b54:	e1520001 	cmp	r2, r1
        2c7b58:	b1a01002 	movlt	r1, r2
        2c7b5c:	e5c6100f 	strb	r1, [r6, #15]
        2c7b60:	e1a01441 	mov	r1, r1, asr #8
        2c7b64:	e5c6100e 	strb	r1, [r6, #14]
        2c7b68:	e59a1002 	ldr	r1, [sl, #2]
        2c7b6c:	e1a01841 	mov	r1, r1, asr #16
        2c7b70:	e79a2080 	ldr	r2, [sl, r0, lsl #1]
        2c7b74:	e1a02842 	mov	r2, r2, asr #16
        2c7b78:	e1510002 	cmp	r1, r2
        2c7b7c:	a1a01002 	movge	r1, r2
        2c7b80:	e5c61011 	strb	r1, [r6, #17]
        2c7b84:	e1a01441 	mov	r1, r1, asr #8
        2c7b88:	e5c61010 	strb	r1, [r6, #16]
        2c7b8c:	e59d1000 	ldr	r1, [sp]
        2c7b90:	e5912002 	ldr	r2, [r1, #2]
        2c7b94:	e1a02842 	mov	r2, r2, asr #16
        2c7b98:	e7911080 	ldr	r1, [r1, r0, lsl #1]
        2c7b9c:	e1a01841 	mov	r1, r1, asr #16
        2c7ba0:	e1520001 	cmp	r2, r1
        2c7ba4:	c1a01002 	movgt	r1, r2
        2c7ba8:	e5c61013 	strb	r1, [r6, #19]
        2c7bac:	e1a01441 	mov	r1, r1, asr #8
        2c7bb0:	e5c61012 	strb	r1, [r6, #18]
        2c7bb4:	e59a1002 	ldr	r1, [sl, #2]
        2c7bb8:	e1a01841 	mov	r1, r1, asr #16
        2c7bbc:	e79a0080 	ldr	r0, [sl, r0, lsl #1]
        2c7bc0:	e1a00840 	mov	r0, r0, asr #16
        2c7bc4:	e1510000 	cmp	r1, r0
        2c7bc8:	c1a00001 	movgt	r0, r1
        2c7bcc:	e5c60015 	strb	r0, [r6, #21]
        2c7bd0:	e1a00440 	mov	r0, r0, asr #8
        2c7bd4:	e5c60014 	strb	r0, [r6, #20]
        2c7bd8:	e2870001 	add	r0, r7, #1	; 0x1
        2c7bdc:	e1a00800 	mov	r0, r0, lsl #16
        2c7be0:	e1a00840 	mov	r0, r0, asr #16
        2c7be4:	e2866018 	add	r6, r6, #24	; 0x18
        2c7be8:	e58d0010 	str	r0, [sp, #16]
        2c7bec:	e59d2018 	ldr	r2, [sp, #24]
        2c7bf0:	e5b2700c 	ldr	r7, [r2, #12]!
        2c7bf4:	e3370000 	teq	r7, #0	; 0x0
        2c7bf8:	0a00014e 	beq	2c8138 <exchange(low_type *, xrdata_type *)+0x738>
        2c7bfc:	e5d70001 	ldrb	r0, [r7, #1]
        2c7c00:	e3300001 	teq	r0, #1	; 0x1
        2c7c04:	13300012 	teqne	r0, #18	; 0x12
        2c7c08:	13300013 	teqne	r0, #19	; 0x13
        2c7c0c:	0597700c 	ldreq	r7, [r7, #12]
        2c7c10:	e3370000 	teq	r7, #0	; 0x0
        2c7c14:	0a000145 	beq	2c8130 <exchange(low_type *, xrdata_type *)+0x730>
        2c7c18:	e5d75001 	ldrb	r5, [r7, #1]
        2c7c1c:	e5d71002 	ldrb	r1, [r7, #2]
        2c7c20:	e201000f 	and	r0, r1, #15	; 0xf
        2c7c24:	e2011030 	and	r1, r1, #48	; 0x30
        2c7c28:	e3a02000 	mov	r2, #0	; 0x0
        2c7c2c:	e5c62009 	strb	r2, [r6, #9]
        2c7c30:	e5c62008 	strb	r2, [r6, #8]
        2c7c34:	e1a03805 	mov	r3, r5, lsl #16
        2c7c38:	e1a03843 	mov	r3, r3, asr #16
        2c7c3c:	e3530029 	cmp	r3, #41	; 0x29
        2c7c40:	908ff103 	addls	pc, pc, r3, lsl #2
        2c7c44:	ea000136 	b	2c8124 <exchange(low_type *, xrdata_type *)+0x724>
        2c7c48:	ea000135 	b	2c8124 <exchange(low_type *, xrdata_type *)+0x724>
        2c7c4c:	ea0000e5 	b	2c7fe8 <exchange(low_type *, xrdata_type *)+0x5e8>
        2c7c50:	ea00007f 	b	2c7e54 <exchange(low_type *, xrdata_type *)+0x454>
        2c7c54:	ea000026 	b	2c7cf4 <exchange(low_type *, xrdata_type *)+0x2f4>
        2c7c58:	ea000062 	b	2c7de8 <exchange(low_type *, xrdata_type *)+0x3e8>
        2c7c5c:	ea000130 	b	2c8124 <exchange(low_type *, xrdata_type *)+0x724>
        2c7c60:	ea000062 	b	2c7df0 <exchange(low_type *, xrdata_type *)+0x3f0>
        2c7c64:	ea00003d 	b	2c7d60 <exchange(low_type *, xrdata_type *)+0x360>
        2c7c68:	ea00007d 	b	2c7e64 <exchange(low_type *, xrdata_type *)+0x464>
        2c7c6c:	ea000094 	b	2c7ec4 <exchange(low_type *, xrdata_type *)+0x4c4>
        2c7c70:	ea00008f 	b	2c7eb4 <exchange(low_type *, xrdata_type *)+0x4b4>
        2c7c74:	ea00009a 	b	2c7ee4 <exchange(low_type *, xrdata_type *)+0x4e4>
        2c7c78:	ea000095 	b	2c7ed4 <exchange(low_type *, xrdata_type *)+0x4d4>
        2c7c7c:	ea000050 	b	2c7dc4 <exchange(low_type *, xrdata_type *)+0x3c4>
        2c7c80:	ea000054 	b	2c7dd8 <exchange(low_type *, xrdata_type *)+0x3d8>
        2c7c84:	ea000045 	b	2c7da0 <exchange(low_type *, xrdata_type *)+0x3a0>
        2c7c88:	ea000048 	b	2c7db0 <exchange(low_type *, xrdata_type *)+0x3b0>
        2c7c8c:	ea000053 	b	2c7de0 <exchange(low_type *, xrdata_type *)+0x3e0>
        2c7c90:	ea0000d9 	b	2c7ffc <exchange(low_type *, xrdata_type *)+0x5fc>
        2c7c94:	ea0000ce 	b	2c7fd4 <exchange(low_type *, xrdata_type *)+0x5d4>
        2c7c98:	ea0000db 	b	2c800c <exchange(low_type *, xrdata_type *)+0x60c>
        2c7c9c:	ea000094 	b	2c7ef4 <exchange(low_type *, xrdata_type *)+0x4f4>
        2c7ca0:	ea000099 	b	2c7f0c <exchange(low_type *, xrdata_type *)+0x50c>
        2c7ca4:	ea0000a0 	b	2c7f2c <exchange(low_type *, xrdata_type *)+0x52c>
        2c7ca8:	ea0000a7 	b	2c7f4c <exchange(low_type *, xrdata_type *)+0x54c>
        2c7cac:	ea0000ac 	b	2c7f64 <exchange(low_type *, xrdata_type *)+0x564>
        2c7cb0:	ea0000b1 	b	2c7f7c <exchange(low_type *, xrdata_type *)+0x57c>
        2c7cb4:	ea0000b8 	b	2c7f9c <exchange(low_type *, xrdata_type *)+0x59c>
        2c7cb8:	ea0000bf 	b	2c7fbc <exchange(low_type *, xrdata_type *)+0x5bc>
        2c7cbc:	ea00004d 	b	2c7df8 <exchange(low_type *, xrdata_type *)+0x3f8>
        2c7cc0:	ea000059 	b	2c7e2c <exchange(low_type *, xrdata_type *)+0x42c>
        2c7cc4:	ea00005e 	b	2c7e44 <exchange(low_type *, xrdata_type *)+0x444>
        2c7cc8:	ea00005f 	b	2c7e4c <exchange(low_type *, xrdata_type *)+0x44c>
        2c7ccc:	ea000068 	b	2c7e74 <exchange(low_type *, xrdata_type *)+0x474>
        2c7cd0:	ea00006f 	b	2c7e94 <exchange(low_type *, xrdata_type *)+0x494>
        2c7cd4:	ea0000ce 	b	2c8014 <exchange(low_type *, xrdata_type *)+0x614>
        2c7cd8:	ea0000cf 	b	2c801c <exchange(low_type *, xrdata_type *)+0x61c>
        2c7cdc:	ea0000d0 	b	2c8024 <exchange(low_type *, xrdata_type *)+0x624>
        2c7ce0:	ea0000d1 	b	2c802c <exchange(low_type *, xrdata_type *)+0x62c>
        2c7ce4:	ea00002f 	b	2c7da8 <exchange(low_type *, xrdata_type *)+0x3a8>
        2c7ce8:	ea0000d1 	b	2c8034 <exchange(low_type *, xrdata_type *)+0x634>
        2c7cec:	e3a0503d 	mov	r5, #61	; 0x3d
        2c7cf0:	ea0000d0 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c7cf4:	e5d73000 	ldrb	r3, [r7]
        2c7cf8:	e1a0c803 	mov	ip, r3, lsl #16
        2c7cfc:	e1a0c84c 	mov	ip, ip, asr #16
        2c7d00:	e33c0010 	teq	ip, #16	; 0x10
        2c7d04:	03a0500b 	moveq	r5, #11	; 0xb
        2c7d08:	0a00000f 	beq	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7d0c:	e33c0020 	teq	ip, #32	; 0x20
        2c7d10:	03a05012 	moveq	r5, #18	; 0x12
        2c7d14:	0a00000c 	beq	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7d18:	e3310010 	teq	r1, #16	; 0x10
        2c7d1c:	1a000009 	bne	2c7d48 <exchange(low_type *, xrdata_type *)+0x348>
        2c7d20:	e3330009 	teq	r3, #9	; 0x9
        2c7d24:	0a000005 	beq	2c7d40 <exchange(low_type *, xrdata_type *)+0x340>
        2c7d28:	e3330006 	teq	r3, #6	; 0x6
        2c7d2c:	05d71016 	ldreqb	r1, [r7, #22]
        2c7d30:	02011030 	andeq	r1, r1, #48	; 0x30
        2c7d34:	03310020 	teqeq	r1, #32	; 0x20
        2c7d38:	13a05006 	movne	r5, #6	; 0x6
        2c7d3c:	1a000002 	bne	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7d40:	e3a0500c 	mov	r5, #12	; 0xc
        2c7d44:	ea000000 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7d48:	e3a0500d 	mov	r5, #13	; 0xd
        2c7d4c:	e5971008 	ldr	r1, [r7, #8]
        2c7d50:	e1a01841 	mov	r1, r1, asr #16
        2c7d54:	e7981081 	ldr	r1, [r8, r1, lsl #1]
        2c7d58:	e1a01821 	mov	r1, r1, lsr #16
        2c7d5c:	ea00002e 	b	2c7e1c <exchange(low_type *, xrdata_type *)+0x41c>
        2c7d60:	e5d73000 	ldrb	r3, [r7]
        2c7d64:	e1a0c803 	mov	ip, r3, lsl #16
        2c7d68:	e1a0c84c 	mov	ip, ip, asr #16
        2c7d6c:	e33c0010 	teq	ip, #16	; 0x10
        2c7d70:	03a0501f 	moveq	r5, #31	; 0x1f
        2c7d74:	0afffff4 	beq	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7d78:	e33c0020 	teq	ip, #32	; 0x20
        2c7d7c:	03a05018 	moveq	r5, #24	; 0x18
        2c7d80:	0afffff1 	beq	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7d84:	e3310020 	teq	r1, #32	; 0x20
        2c7d88:	13a0501a 	movne	r5, #26	; 0x1a
        2c7d8c:	1affffee 	bne	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7d90:	e3330009 	teq	r3, #9	; 0x9
        2c7d94:	13a05013 	movne	r5, #19	; 0x13
        2c7d98:	03a05019 	moveq	r5, #25	; 0x19
        2c7d9c:	eaffffea 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7da0:	e3a05035 	mov	r5, #53	; 0x35
        2c7da4:	ea0000a3 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c7da8:	e3a05039 	mov	r5, #57	; 0x39
        2c7dac:	ea0000a1 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c7db0:	e5d71003 	ldrb	r1, [r7, #3]
        2c7db4:	e3110002 	tst	r1, #2	; 0x2
        2c7db8:	03a05034 	moveq	r5, #52	; 0x34
        2c7dbc:	13a0503b 	movne	r5, #59	; 0x3b
        2c7dc0:	ea00009c 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c7dc4:	e5d71003 	ldrb	r1, [r7, #3]
        2c7dc8:	e3110004 	tst	r1, #4	; 0x4
        2c7dcc:	03a0503a 	moveq	r5, #58	; 0x3a
        2c7dd0:	13a05036 	movne	r5, #54	; 0x36
        2c7dd4:	ea000097 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c7dd8:	e3a0502d 	mov	r5, #45	; 0x2d
        2c7ddc:	eaffffda 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7de0:	e3a05030 	mov	r5, #48	; 0x30
        2c7de4:	eaffffd8 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7de8:	e3a05028 	mov	r5, #40	; 0x28
        2c7dec:	eaffffd6 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7df0:	e3a0502b 	mov	r5, #43	; 0x2b
        2c7df4:	eaffffd4 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7df8:	e3a05029 	mov	r5, #41	; 0x29
        2c7dfc:	e5971008 	ldr	r1, [r7, #8]
        2c7e00:	e1a01841 	mov	r1, r1, asr #16
        2c7e04:	e3710002 	cmn	r1, #2	; 0x2
        2c7e08:	0a000002 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7e0c:	e7981081 	ldr	r1, [r8, r1, lsl #1]
        2c7e10:	e1a01841 	mov	r1, r1, asr #16
        2c7e14:	ea000000 	b	2c7e1c <exchange(low_type *, xrdata_type *)+0x41c>
        2c7e18:	e3a01000 	mov	r1, #0	; 0x0
        2c7e1c:	e5c61009 	strb	r1, [r6, #9]
        2c7e20:	e1a01441 	mov	r1, r1, asr #8
        2c7e24:	e5c61008 	strb	r1, [r6, #8]
        2c7e28:	ea000082 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c7e2c:	e3a0502a 	mov	r5, #42	; 0x2a
        2c7e30:	e5971008 	ldr	r1, [r7, #8]
        2c7e34:	e1a01841 	mov	r1, r1, asr #16
        2c7e38:	e3710002 	cmn	r1, #2	; 0x2
        2c7e3c:	0afffff5 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7e40:	eafffff1 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7e44:	e3a0502c 	mov	r5, #44	; 0x2c
        2c7e48:	ea00007a 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c7e4c:	e3a05031 	mov	r5, #49	; 0x31
        2c7e50:	ea000078 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c7e54:	e3310010 	teq	r1, #16	; 0x10
        2c7e58:	13a0500e 	movne	r5, #14	; 0xe
        2c7e5c:	03a05007 	moveq	r5, #7	; 0x7
        2c7e60:	eaffffb9 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7e64:	e3310010 	teq	r1, #16	; 0x10
        2c7e68:	13a05014 	movne	r5, #20	; 0x14
        2c7e6c:	03a0501b 	moveq	r5, #27	; 0x1b
        2c7e70:	eaffffb5 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7e74:	e3310010 	teq	r1, #16	; 0x10
        2c7e78:	13a0500f 	movne	r5, #15	; 0xf
        2c7e7c:	03a05008 	moveq	r5, #8	; 0x8
        2c7e80:	e5971008 	ldr	r1, [r7, #8]
        2c7e84:	e1a01841 	mov	r1, r1, asr #16
        2c7e88:	e3710002 	cmn	r1, #2	; 0x2
        2c7e8c:	0affffe1 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7e90:	eaffffdd 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7e94:	e3310010 	teq	r1, #16	; 0x10
        2c7e98:	13a05015 	movne	r5, #21	; 0x15
        2c7e9c:	03a0501c 	moveq	r5, #28	; 0x1c
        2c7ea0:	e5971008 	ldr	r1, [r7, #8]
        2c7ea4:	e1a01841 	mov	r1, r1, asr #16
        2c7ea8:	e3710002 	cmn	r1, #2	; 0x2
        2c7eac:	0affffd9 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7eb0:	eaffffd5 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7eb4:	e3310010 	teq	r1, #16	; 0x10
        2c7eb8:	13a05011 	movne	r5, #17	; 0x11
        2c7ebc:	03a0500a 	moveq	r5, #10	; 0xa
        2c7ec0:	eaffffa1 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7ec4:	e3310010 	teq	r1, #16	; 0x10
        2c7ec8:	13a05010 	movne	r5, #16	; 0x10
        2c7ecc:	03a05009 	moveq	r5, #9	; 0x9
        2c7ed0:	eaffff9d 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7ed4:	e3310010 	teq	r1, #16	; 0x10
        2c7ed8:	13a05017 	movne	r5, #23	; 0x17
        2c7edc:	03a0501e 	moveq	r5, #30	; 0x1e
        2c7ee0:	eaffff99 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7ee4:	e3310010 	teq	r1, #16	; 0x10
        2c7ee8:	13a05016 	movne	r5, #22	; 0x16
        2c7eec:	03a0501d 	moveq	r5, #29	; 0x1d
        2c7ef0:	eaffff95 	b	2c7d4c <exchange(low_type *, xrdata_type *)+0x34c>
        2c7ef4:	e3a05020 	mov	r5, #32	; 0x20
        2c7ef8:	e597100a 	ldr	r1, [r7, #10]
        2c7efc:	e1a01841 	mov	r1, r1, asr #16
        2c7f00:	e3710002 	cmn	r1, #2	; 0x2
        2c7f04:	0affffc3 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7f08:	eaffffbf 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7f0c:	e3a05021 	mov	r5, #33	; 0x21
        2c7f10:	e5d71000 	ldrb	r1, [r7]
        2c7f14:	e3310006 	teq	r1, #6	; 0x6
        2c7f18:	1597100a 	ldrne	r1, [r7, #10]
        2c7f1c:	11a01841 	movne	r1, r1, asr #16
        2c7f20:	13710002 	cmnne	r1, #2	; 0x2
        2c7f24:	0affffbb 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7f28:	eaffffb7 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7f2c:	e3a05022 	mov	r5, #34	; 0x22
        2c7f30:	e5d71000 	ldrb	r1, [r7]
        2c7f34:	e3310006 	teq	r1, #6	; 0x6
        2c7f38:	1597100a 	ldrne	r1, [r7, #10]
        2c7f3c:	11a01841 	movne	r1, r1, asr #16
        2c7f40:	13710002 	cmnne	r1, #2	; 0x2
        2c7f44:	0affffb3 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7f48:	eaffffaf 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7f4c:	e3a05023 	mov	r5, #35	; 0x23
        2c7f50:	e597100a 	ldr	r1, [r7, #10]
        2c7f54:	e1a01841 	mov	r1, r1, asr #16
        2c7f58:	e3710002 	cmn	r1, #2	; 0x2
        2c7f5c:	0affffad 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7f60:	eaffffa9 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7f64:	e3a05024 	mov	r5, #36	; 0x24
        2c7f68:	e597100a 	ldr	r1, [r7, #10]
        2c7f6c:	e1a01841 	mov	r1, r1, asr #16
        2c7f70:	e3710002 	cmn	r1, #2	; 0x2
        2c7f74:	0affffa7 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7f78:	eaffffa3 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7f7c:	e3a05025 	mov	r5, #37	; 0x25
        2c7f80:	e5d71000 	ldrb	r1, [r7]
        2c7f84:	e3310006 	teq	r1, #6	; 0x6
        2c7f88:	1597100a 	ldrne	r1, [r7, #10]
        2c7f8c:	11a01841 	movne	r1, r1, asr #16
        2c7f90:	13710002 	cmnne	r1, #2	; 0x2
        2c7f94:	0affff9f 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7f98:	eaffff9b 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7f9c:	e3a05026 	mov	r5, #38	; 0x26
        2c7fa0:	e5d71000 	ldrb	r1, [r7]
        2c7fa4:	e3310006 	teq	r1, #6	; 0x6
        2c7fa8:	1597100a 	ldrne	r1, [r7, #10]
        2c7fac:	11a01841 	movne	r1, r1, asr #16
        2c7fb0:	13710002 	cmnne	r1, #2	; 0x2
        2c7fb4:	0affff97 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7fb8:	eaffff93 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7fbc:	e3a05027 	mov	r5, #39	; 0x27
        2c7fc0:	e597100a 	ldr	r1, [r7, #10]
        2c7fc4:	e1a01841 	mov	r1, r1, asr #16
        2c7fc8:	e3710002 	cmn	r1, #2	; 0x2
        2c7fcc:	0affff91 	beq	2c7e18 <exchange(low_type *, xrdata_type *)+0x418>
        2c7fd0:	eaffff8d 	b	2c7e0c <exchange(low_type *, xrdata_type *)+0x40c>
        2c7fd4:	e597100c 	ldr	r1, [r7, #12]
        2c7fd8:	e3310000 	teq	r1, #0	; 0x0
        2c7fdc:	13a05004 	movne	r5, #4	; 0x4
        2c7fe0:	1a000014 	bne	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c7fe4:	ea000008 	b	2c800c <exchange(low_type *, xrdata_type *)+0x60c>
        2c7fe8:	e597100c 	ldr	r1, [r7, #12]
        2c7fec:	e3310000 	teq	r1, #0	; 0x0
        2c7ff0:	13a05003 	movne	r5, #3	; 0x3
        2c7ff4:	1a00000f 	bne	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c7ff8:	ea000003 	b	2c800c <exchange(low_type *, xrdata_type *)+0x60c>
        2c7ffc:	e597100c 	ldr	r1, [r7, #12]
        2c8000:	e3310000 	teq	r1, #0	; 0x0
        2c8004:	13a05002 	movne	r5, #2	; 0x2
        2c8008:	1a00000a 	bne	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c800c:	e3a05001 	mov	r5, #1	; 0x1
        2c8010:	ea000008 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c8014:	e3a05032 	mov	r5, #50	; 0x32
        2c8018:	ea000006 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c801c:	e3a05033 	mov	r5, #51	; 0x33
        2c8020:	ea000004 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c8024:	e3a0502f 	mov	r5, #47	; 0x2f
        2c8028:	ea000002 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c802c:	e3a0502e 	mov	r5, #46	; 0x2e
        2c8030:	ea000000 	b	2c8038 <exchange(low_type *, xrdata_type *)+0x638>
        2c8034:	e3a0503c 	mov	r5, #60	; 0x3c
        2c8038:	e5c65000 	strb	r5, [r6]
        2c803c:	e5c60003 	strb	r0, [r6, #3]
        2c8040:	e5c62001 	strb	r2, [r6, #1]
        2c8044:	e1a01006 	mov	r1, r6
        2c8048:	e1a00007 	mov	r0, r7
        2c804c:	eb61aa41 	bl	1b32958 <$AssignInputPenaltyAndStrict(SPEC_TYPE *, xrd_el_type *)>
        2c8050:	e5d70001 	ldrb	r0, [r7, #1]
        2c8054:	e3300001 	teq	r0, #1	; 0x1
        2c8058:	1a000004 	bne	2c8070 <exchange(low_type *, xrdata_type *)+0x670>
        2c805c:	e5d70003 	ldrb	r0, [r7, #3]
        2c8060:	e3100004 	tst	r0, #4	; 0x4
        2c8064:	15d60001 	ldrneb	r0, [r6, #1]
        2c8068:	13800002 	orrne	r0, r0, #2	; 0x2
        2c806c:	15c60001 	strneb	r0, [r6, #1]
        2c8070:	e5970004 	ldr	r0, [r7, #4]
        2c8074:	e1a00820 	mov	r0, r0, lsr #16
        2c8078:	e5c6000b 	strb	r0, [r6, #11]
        2c807c:	e1a00440 	mov	r0, r0, asr #8
        2c8080:	e5c6000a 	strb	r0, [r6, #10]
        2c8084:	e5970006 	ldr	r0, [r7, #6]
        2c8088:	e1a00820 	mov	r0, r0, lsr #16
        2c808c:	e5c6000d 	strb	r0, [r6, #13]
        2c8090:	e1a00440 	mov	r0, r0, asr #8
        2c8094:	e5c6000c 	strb	r0, [r6, #12]
        2c8098:	e1a02006 	mov	r2, r6
        2c809c:	e1a01007 	mov	r1, r7
        2c80a0:	e1a00004 	mov	r0, r4
        2c80a4:	eb617cc5 	bl	1b273c0 <$GetLinkBetweenThisAndNextXr(low_type *, SPEC_TYPE *, xrd_el_type *)>
        2c80a8:	e1a02007 	mov	r2, r7
        2c80ac:	e1a01004 	mov	r1, r4
        2c80b0:	e1a00006 	mov	r0, r6
        2c80b4:	eb61ae4e 	bl	1b339f4 <$MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)>
        2c80b8:	e5960008 	ldr	r0, [r6, #8]
        2c80bc:	e1b00840 	movs	r0, r0, asr #16
        2c80c0:	1a00000f 	bne	2c8104 <exchange(low_type *, xrdata_type *)+0x704>
        2c80c4:	e5d70001 	ldrb	r0, [r7, #1]
        2c80c8:	e3300012 	teq	r0, #18	; 0x12
        2c80cc:	13300001 	teqne	r0, #1	; 0x1
        2c80d0:	13300013 	teqne	r0, #19	; 0x13
        2c80d4:	13300014 	teqne	r0, #20	; 0x14
        2c80d8:	0a000009 	beq	2c8104 <exchange(low_type *, xrdata_type *)+0x704>
        2c80dc:	e5970004 	ldr	r0, [r7, #4]
        2c80e0:	e1a00840 	mov	r0, r0, asr #16
        2c80e4:	e5971006 	ldr	r1, [r7, #6]
        2c80e8:	e0800841 	add	r0, r0, r1, asr #16
        2c80ec:	e1a000c0 	mov	r0, r0, asr #1
        2c80f0:	e7980080 	ldr	r0, [r8, r0, lsl #1]
        2c80f4:	e1a00820 	mov	r0, r0, lsr #16
        2c80f8:	e5c60009 	strb	r0, [r6, #9]
        2c80fc:	e1a00440 	mov	r0, r0, asr #8
        2c8100:	e5c60008 	strb	r0, [r6, #8]
        2c8104:	e59d0010 	ldr	r0, [sp, #16]
        2c8108:	e2800001 	add	r0, r0, #1	; 0x1
        2c810c:	e1a00800 	mov	r0, r0, lsl #16
        2c8110:	e1a00840 	mov	r0, r0, asr #16
        2c8114:	e2866018 	add	r6, r6, #24	; 0x18
        2c8118:	e58d0010 	str	r0, [sp, #16]
        2c811c:	e3500075 	cmp	r0, #117	; 0x75
        2c8120:	ca000002 	bgt	2c8130 <exchange(low_type *, xrdata_type *)+0x730>
        2c8124:	e597700c 	ldr	r7, [r7, #12]
        2c8128:	e3370000 	teq	r7, #0	; 0x0
        2c812c:	1afffeb9 	bne	2c7c18 <exchange(low_type *, xrdata_type *)+0x218>
        2c8130:	e3350001 	teq	r5, #1	; 0x1
        2c8134:	0a000032 	beq	2c8204 <exchange(low_type *, xrdata_type *)+0x804>
        2c8138:	e3a00001 	mov	r0, #1	; 0x1
        2c813c:	e5c60000 	strb	r0, [r6]
        2c8140:	e3a00007 	mov	r0, #7	; 0x7
        2c8144:	e5c60003 	strb	r0, [r6, #3]
        2c8148:	e3a00006 	mov	r0, #6	; 0x6
        2c814c:	e5c60006 	strb	r0, [r6, #6]
        2c8150:	e5c60005 	strb	r0, [r6, #5]
        2c8154:	e59d0004 	ldr	r0, [sp, #4]
        2c8158:	e5c60002 	strb	r0, [r6, #2]
        2c815c:	e3a00000 	mov	r0, #0	; 0x0
        2c8160:	e5c60001 	strb	r0, [r6, #1]
        2c8164:	e1a01004 	mov	r1, r4
        2c8168:	e1a00006 	mov	r0, r6
        2c816c:	e59d2018 	ldr	r2, [sp, #24]
        2c8170:	eb61ae1f 	bl	1b339f4 <$MarkXrAsLastInLetter(xrd_el_type *, low_type *, SPEC_TYPE *)>
        2c8174:	e516000c 	ldr	r0, [r6, -#12]
        2c8178:	e1a00840 	mov	r0, r0, asr #16
        2c817c:	e5c6000b 	strb	r0, [r6, #11]
        2c8180:	e1a01440 	mov	r1, r0, asr #8
        2c8184:	e5c6100a 	strb	r1, [r6, #10]
        2c8188:	e5c6000d 	strb	r0, [r6, #13]
        2c818c:	e5c6100c 	strb	r1, [r6, #12]
        2c8190:	e7981080 	ldr	r1, [r8, r0, lsl #1]
        2c8194:	e1a01821 	mov	r1, r1, lsr #16
        2c8198:	e5c61009 	strb	r1, [r6, #9]
        2c819c:	e1a01441 	mov	r1, r1, asr #8
        2c81a0:	e5c61008 	strb	r1, [r6, #8]
        2c81a4:	e59d1000 	ldr	r1, [sp]
        2c81a8:	e7911080 	ldr	r1, [r1, r0, lsl #1]
        2c81ac:	e1a01821 	mov	r1, r1, lsr #16
        2c81b0:	e5c6100f 	strb	r1, [r6, #15]
        2c81b4:	e1a01441 	mov	r1, r1, asr #8
        2c81b8:	e5c6100e 	strb	r1, [r6, #14]
        2c81bc:	e79a1080 	ldr	r1, [sl, r0, lsl #1]
        2c81c0:	e1a01821 	mov	r1, r1, lsr #16
        2c81c4:	e5c61011 	strb	r1, [r6, #17]
        2c81c8:	e1a01441 	mov	r1, r1, asr #8
        2c81cc:	e5c61010 	strb	r1, [r6, #16]
        2c81d0:	e59d1000 	ldr	r1, [sp]
        2c81d4:	e7911080 	ldr	r1, [r1, r0, lsl #1]
        2c81d8:	e1a01821 	mov	r1, r1, lsr #16
        2c81dc:	e5c61013 	strb	r1, [r6, #19]
        2c81e0:	e1a01441 	mov	r1, r1, asr #8
        2c81e4:	e5c61012 	strb	r1, [r6, #18]
        2c81e8:	e79a0080 	ldr	r0, [sl, r0, lsl #1]
        2c81ec:	e1a00820 	mov	r0, r0, lsr #16
        2c81f0:	e5c60015 	strb	r0, [r6, #21]
        2c81f4:	e1a00440 	mov	r0, r0, asr #8
        2c81f8:	e5c60014 	strb	r0, [r6, #20]
        2c81fc:	e2866018 	add	r6, r6, #24	; 0x18
        2c8200:	ea00000e 	b	2c8240 <exchange(low_type *, xrdata_type *)+0x840>
        2c8204:	e59d0010 	ldr	r0, [sp, #16]
        2c8208:	e3500002 	cmp	r0, #2	; 0x2
        2c820c:	da00000b 	ble	2c8240 <exchange(low_type *, xrdata_type *)+0x840>
        2c8210:	e5160024 	ldr	r0, [r6, -#36]
        2c8214:	e1a00840 	mov	r0, r0, asr #16
        2c8218:	e546000d 	strb	r0, [r6, -#13]
        2c821c:	e1a01440 	mov	r1, r0, asr #8
        2c8220:	e546100e 	strb	r1, [r6, -#14]
        2c8224:	e546000b 	strb	r0, [r6, -#11]
        2c8228:	e546100c 	strb	r1, [r6, -#12]
        2c822c:	e7980080 	ldr	r0, [r8, r0, lsl #1]
        2c8230:	e1a00820 	mov	r0, r0, lsr #16
        2c8234:	e546000f 	strb	r0, [r6, -#15]
        2c8238:	e1a00440 	mov	r0, r0, asr #8
        2c823c:	e5460010 	strb	r0, [r6, -#16]
        2c8240:	e1a00006 	mov	r0, r6
        2c8244:	e3a02018 	mov	r2, #24	; 0x18
        2c8248:	e3a01000 	mov	r1, #0	; 0x0
        2c824c:	eb63b201 	bl	1bb4a58 <$memset>
        2c8250:	e3a05000 	mov	r5, #0	; 0x0
        2c8254:	ea00002e 	b	2c8314 <exchange(low_type *, xrdata_type *)+0x914>
        2c8258:	e0890180 	add	r0, r9, r0, lsl #3
        2c825c:	e1a06000 	mov	r6, r0
        2c8260:	eb61807c 	bl	1b28458 <$X_IsBreak(xrd_el_type *)>
        2c8264:	e3300000 	teq	r0, #0	; 0x0
        2c8268:	0a000024 	beq	2c8300 <exchange(low_type *, xrdata_type *)+0x900>
        2c826c:	e3550000 	cmp	r5, #0	; 0x0
        2c8270:	c5560017 	ldrgtb	r0, [r6, -#23]
        2c8274:	c3800080 	orrgt	r0, r0, #128	; 0x80
        2c8278:	c5460017 	strgtb	r0, [r6, -#23]
        2c827c:	e5d60019 	ldrb	r0, [r6, #25]
        2c8280:	e3800080 	orr	r0, r0, #128	; 0x80
        2c8284:	e5c60019 	strb	r0, [r6, #25]
        2c8288:	e5d60018 	ldrb	r0, [r6, #24]
        2c828c:	e330000b 	teq	r0, #11	; 0xb
        2c8290:	13300009 	teqne	r0, #9	; 0x9
        2c8294:	13300011 	teqne	r0, #17	; 0x11
        2c8298:	1330002c 	teqne	r0, #44	; 0x2c
        2c829c:	13300029 	teqne	r0, #41	; 0x29
        2c82a0:	1a000016 	bne	2c8300 <exchange(low_type *, xrdata_type *)+0x900>
        2c82a4:	e5d60030 	ldrb	r0, [r6, #48]
        2c82a8:	e3300014 	teq	r0, #20	; 0x14
        2c82ac:	0a000003 	beq	2c82c0 <exchange(low_type *, xrdata_type *)+0x8c0>
        2c82b0:	e330002d 	teq	r0, #45	; 0x2d
        2c82b4:	05d61048 	ldreqb	r1, [r6, #72]
        2c82b8:	03310014 	teqeq	r1, #20	; 0x14
        2c82bc:	1a00000f 	bne	2c8300 <exchange(low_type *, xrdata_type *)+0x900>
        2c82c0:	e330002d 	teq	r0, #45	; 0x2d
        2c82c4:	12850002 	addne	r0, r5, #2	; 0x2
        2c82c8:	02850003 	addeq	r0, r5, #3	; 0x3
        2c82cc:	e0800080 	add	r0, r0, r0, lsl #1
        2c82d0:	e0890180 	add	r0, r9, r0, lsl #3
        2c82d4:	e5d01003 	ldrb	r1, [r0, #3]
        2c82d8:	e5d6201b 	ldrb	r2, [r6, #27]
        2c82dc:	e0511002 	subs	r1, r1, r2
        2c82e0:	4a000006 	bmi	2c8300 <exchange(low_type *, xrdata_type *)+0x900>
        2c82e4:	e3350000 	teq	r5, #0	; 0x0
        2c82e8:	0a000001 	beq	2c82f4 <exchange(low_type *, xrdata_type *)+0x8f4>
        2c82ec:	e3510003 	cmp	r1, #3	; 0x3
        2c82f0:	ca000002 	bgt	2c8300 <exchange(low_type *, xrdata_type *)+0x900>
        2c82f4:	e5d01001 	ldrb	r1, [r0, #1]
        2c82f8:	e3811080 	orr	r1, r1, #128	; 0x80
        2c82fc:	e5c01001 	strb	r1, [r0, #1]
        2c8300:	e2850001 	add	r0, r5, #1	; 0x1
        2c8304:	e1a05800 	mov	r5, r0, lsl #16
        2c8308:	e1a05845 	mov	r5, r5, asr #16
        2c830c:	e3550078 	cmp	r5, #120	; 0x78
        2c8310:	aa000003 	bge	2c8324 <exchange(low_type *, xrdata_type *)+0x924>
        2c8314:	e0850085 	add	r0, r5, r5, lsl #1
        2c8318:	e7d91180 	ldrb	r1, [r9, r0, lsl #3]
        2c831c:	e3310000 	teq	r1, #0	; 0x0
        2c8320:	1affffcc 	bne	2c8258 <exchange(low_type *, xrdata_type *)+0x858>
        2c8324:	e3a06000 	mov	r6, #0	; 0x0
        2c8328:	ea00006e 	b	2c84e8 <exchange(low_type *, xrdata_type *)+0xae8>
        2c832c:	e0895180 	add	r5, r9, r0, lsl #3
        2c8330:	e595000a 	ldr	r0, [r5, #10]
        2c8334:	e1a00840 	mov	r0, r0, asr #16
        2c8338:	e7980080 	ldr	r0, [r8, r0, lsl #1]
        2c833c:	e1a00820 	mov	r0, r0, lsr #16
        2c8340:	e5c5000b 	strb	r0, [r5, #11]
        2c8344:	e1a00440 	mov	r0, r0, asr #8
        2c8348:	e5c5000a 	strb	r0, [r5, #10]
        2c834c:	e595000c 	ldr	r0, [r5, #12]
        2c8350:	e1a00840 	mov	r0, r0, asr #16
        2c8354:	e7980080 	ldr	r0, [r8, r0, lsl #1]
        2c8358:	e1a00820 	mov	r0, r0, lsr #16
        2c835c:	e5c5000d 	strb	r0, [r5, #13]
        2c8360:	e1a00440 	mov	r0, r0, asr #8
        2c8364:	e5c5000c 	strb	r0, [r5, #12]
        2c8368:	e1a00005 	mov	r0, r5
        2c836c:	eb618039 	bl	1b28458 <$X_IsBreak(xrd_el_type *)>
        2c8370:	e3300000 	teq	r0, #0	; 0x0
        2c8374:	0595000a 	ldreq	r0, [r5, #10]
        2c8378:	01a00840 	moveq	r0, r0, asr #16
        2c837c:	0595200c 	ldreq	r2, [r5, #12]
        2c8380:	01a02842 	moveq	r2, r2, asr #16
        2c8384:	01300002 	teqeq	r0, r2
        2c8388:	1a00003a 	bne	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c838c:	e59d1014 	ldr	r1, [sp, #20]
        2c8390:	e0811100 	add	r1, r1, r0, lsl #2
        2c8394:	e5113002 	ldr	r3, [r1, -#2]
        2c8398:	e1a03843 	mov	r3, r3, asr #16
        2c839c:	e3730001 	cmn	r3, #1	; 0x1
        2c83a0:	1a000005 	bne	2c83bc <exchange(low_type *, xrdata_type *)+0x9bc>
        2c83a4:	e5910006 	ldr	r0, [r1, #6]
        2c83a8:	e1a00840 	mov	r0, r0, asr #16
        2c83ac:	e3700001 	cmn	r0, #1	; 0x1
        2c83b0:	0a000030 	beq	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c83b4:	e2820001 	add	r0, r2, #1	; 0x1
        2c83b8:	ea00002b 	b	2c846c <exchange(low_type *, xrdata_type *)+0xa6c>
        2c83bc:	e5911006 	ldr	r1, [r1, #6]
        2c83c0:	e1a01841 	mov	r1, r1, asr #16
        2c83c4:	e3710001 	cmn	r1, #1	; 0x1
        2c83c8:	0a00001b 	beq	2c843c <exchange(low_type *, xrdata_type *)+0xa3c>
        2c83cc:	e5d51000 	ldrb	r1, [r5]
        2c83d0:	e2411009 	sub	r1, r1, #9	; 0x9
        2c83d4:	e3510016 	cmp	r1, #22	; 0x16
        2c83d8:	908ff101 	addls	pc, pc, r1, lsl #2
        2c83dc:	ea000025 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c83e0:	eafffff3 	b	2c83b4 <exchange(low_type *, xrdata_type *)+0x9b4>
        2c83e4:	ea000014 	b	2c843c <exchange(low_type *, xrdata_type *)+0xa3c>
        2c83e8:	eafffff1 	b	2c83b4 <exchange(low_type *, xrdata_type *)+0x9b4>
        2c83ec:	ea000017 	b	2c8450 <exchange(low_type *, xrdata_type *)+0xa50>
        2c83f0:	ea000020 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c83f4:	ea00001f 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c83f8:	ea00001e 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c83fc:	ea00000e 	b	2c843c <exchange(low_type *, xrdata_type *)+0xa3c>
        2c8400:	eaffffeb 	b	2c83b4 <exchange(low_type *, xrdata_type *)+0x9b4>
        2c8404:	ea00000c 	b	2c843c <exchange(low_type *, xrdata_type *)+0xa3c>
        2c8408:	ea00001a 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c840c:	ea000019 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c8410:	ea000018 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c8414:	eaffffe6 	b	2c83b4 <exchange(low_type *, xrdata_type *)+0x9b4>
        2c8418:	ea000007 	b	2c843c <exchange(low_type *, xrdata_type *)+0xa3c>
        2c841c:	ea000006 	b	2c843c <exchange(low_type *, xrdata_type *)+0xa3c>
        2c8420:	ea00000a 	b	2c8450 <exchange(low_type *, xrdata_type *)+0xa50>
        2c8424:	ea000013 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c8428:	ea000012 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c842c:	ea000011 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c8430:	ea000001 	b	2c843c <exchange(low_type *, xrdata_type *)+0xa3c>
        2c8434:	eaffffde 	b	2c83b4 <exchange(low_type *, xrdata_type *)+0x9b4>
        2c8438:	eaffffdd 	b	2c83b4 <exchange(low_type *, xrdata_type *)+0x9b4>
        2c843c:	e2400001 	sub	r0, r0, #1	; 0x1
        2c8440:	e5c5000b 	strb	r0, [r5, #11]
        2c8444:	e1a00440 	mov	r0, r0, asr #8
        2c8448:	e5c5000a 	strb	r0, [r5, #10]
        2c844c:	ea000009 	b	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c8450:	e2450018 	sub	r0, r5, #24	; 0x18
        2c8454:	eb617fff 	bl	1b28458 <$X_IsBreak(xrd_el_type *)>
        2c8458:	e3300000 	teq	r0, #0	; 0x0
        2c845c:	0a000005 	beq	2c8478 <exchange(low_type *, xrdata_type *)+0xa78>
        2c8460:	e595000c 	ldr	r0, [r5, #12]
        2c8464:	e1a00820 	mov	r0, r0, lsr #16
        2c8468:	e2800001 	add	r0, r0, #1	; 0x1
        2c846c:	e5c5000d 	strb	r0, [r5, #13]
        2c8470:	e1a00440 	mov	r0, r0, asr #8
        2c8474:	e5c5000c 	strb	r0, [r5, #12]
        2c8478:	e595200c 	ldr	r2, [r5, #12]
        2c847c:	e1a02842 	mov	r2, r2, asr #16
        2c8480:	e595100a 	ldr	r1, [r5, #10]
        2c8484:	e1a01841 	mov	r1, r1, asr #16
        2c8488:	e28d3008 	add	r3, sp, #8	; 0x8
        2c848c:	e59d0014 	ldr	r0, [sp, #20]
        2c8490:	eb615edd 	bl	1b2000c <$GetBoxFromTrace__FP13PS_point_typeiT2P5_RECT>
        2c8494:	e59d000a 	ldr	r0, [sp, #10]
        2c8498:	e5c5000f 	strb	r0, [r5, #15]
        2c849c:	e1a00440 	mov	r0, r0, asr #8
        2c84a0:	e5c5000e 	strb	r0, [r5, #14]
        2c84a4:	e59d0008 	ldr	r0, [sp, #8]
        2c84a8:	e5c50011 	strb	r0, [r5, #17]
        2c84ac:	e1a00440 	mov	r0, r0, asr #8
        2c84b0:	e5c50010 	strb	r0, [r5, #16]
        2c84b4:	e59d000e 	ldr	r0, [sp, #14]
        2c84b8:	e5c50013 	strb	r0, [r5, #19]
        2c84bc:	e1a00440 	mov	r0, r0, asr #8
        2c84c0:	e5c50012 	strb	r0, [r5, #18]
        2c84c4:	e59d000c 	ldr	r0, [sp, #12]
        2c84c8:	e5c50015 	strb	r0, [r5, #21]
        2c84cc:	e1a00440 	mov	r0, r0, asr #8
        2c84d0:	e5c50014 	strb	r0, [r5, #20]
        2c84d4:	e2860001 	add	r0, r6, #1	; 0x1
        2c84d8:	e1a06800 	mov	r6, r0, lsl #16
        2c84dc:	e1a06846 	mov	r6, r6, asr #16
        2c84e0:	e3560078 	cmp	r6, #120	; 0x78
        2c84e4:	aa000003 	bge	2c84f8 <exchange(low_type *, xrdata_type *)+0xaf8>
        2c84e8:	e0860086 	add	r0, r6, r6, lsl #1
        2c84ec:	e7d91180 	ldrb	r1, [r9, r0, lsl #3]
        2c84f0:	e3310000 	teq	r1, #0	; 0x0
        2c84f4:	1affff8c 	bne	2c832c <exchange(low_type *, xrdata_type *)+0x92c>
        2c84f8:	e1a01004 	mov	r1, r4
        2c84fc:	e1a00009 	mov	r0, r9
        2c8500:	eb61b55f 	bl	1b35a84 <$check_xrdata(xrd_el_type *, low_type *)>
        2c8504:	e3a00000 	mov	r0, #0	; 0x0
        2c8508:	ea000004 	b	2c8520 <exchange(low_type *, xrdata_type *)+0xb20>
        2c850c:	e2800001 	add	r0, r0, #1	; 0x1
        2c8510:	e1a00800 	mov	r0, r0, lsl #16
        2c8514:	e1a00840 	mov	r0, r0, asr #16
        2c8518:	e3500078 	cmp	r0, #120	; 0x78
        2c851c:	aa000003 	bge	2c8530 <exchange(low_type *, xrdata_type *)+0xb30>
        2c8520:	e0801080 	add	r1, r0, r0, lsl #1
        2c8524:	e7d91181 	ldrb	r1, [r9, r1, lsl #3]
        2c8528:	e3310000 	teq	r1, #0	; 0x0
        2c852c:	1afffff6 	bne	2c850c <exchange(low_type *, xrdata_type *)+0xb0c>
        2c8530:	e51b102c 	ldr	r1, [fp, -#44]
        2c8534:	e5810000 	str	r0, [r1]
        2c8538:	e1a01004 	mov	r1, r4
        2c853c:	e51b002c 	ldr	r0, [fp, -#44]
        2c8540:	eb61ad12 	bl	1b33990 <$FillXrFeatures(xrdata_type *, low_type *)>
        2c8544:	e3a00000 	mov	r0, #0	; 0x0
        2c8548:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EndIUIDNearStick__FP9SPEC_TYPET1PsT3
 * Address: 002ca0a0
 */
void globals::EndIUIDNearStick() {
    /*
        2ca0a0:	e1a0c00d 	mov	ip, sp
        2ca0a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ca0a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ca0ac:	e1b05001 	movs	r5, r1
        2ca0b0:	e1a06002 	mov	r6, r2
        2ca0b4:	e1a04003 	mov	r4, r3
        2ca0b8:	0a000092 	beq	2ca308 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x268>
        2ca0bc:	e5d51000 	ldrb	r1, [r5]
        2ca0c0:	e3310009 	teq	r1, #9	; 0x9
        2ca0c4:	1a00008f 	bne	2ca308 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x268>
        2ca0c8:	e5901004 	ldr	r1, [r0, #4]
        2ca0cc:	e1a01841 	mov	r1, r1, asr #16
        2ca0d0:	e5952004 	ldr	r2, [r5, #4]
        2ca0d4:	e1510842 	cmp	r1, r2, asr #16
        2ca0d8:	ba00008a 	blt	2ca308 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x268>
        2ca0dc:	e5955010 	ldr	r5, [r5, #16]
        2ca0e0:	e5958004 	ldr	r8, [r5, #4]
        2ca0e4:	e1a08848 	mov	r8, r8, asr #16
        2ca0e8:	e595200c 	ldr	r2, [r5, #12]
        2ca0ec:	e5927004 	ldr	r7, [r2, #4]
        2ca0f0:	e1a07847 	mov	r7, r7, asr #16
        2ca0f4:	e5959006 	ldr	r9, [r5, #6]
        2ca0f8:	e1a09849 	mov	r9, r9, asr #16
        2ca0fc:	e5900006 	ldr	r0, [r0, #6]
        2ca100:	e0810840 	add	r0, r1, r0, asr #16
        2ca104:	e15900c0 	cmp	r9, r0, asr #1
        2ca108:	da00007e 	ble	2ca308 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x268>
        2ca10c:	e7940089 	ldr	r0, [r4, r9, lsl #1]
        2ca110:	e1a00840 	mov	r0, r0, asr #16
        2ca114:	e7941088 	ldr	r1, [r4, r8, lsl #1]
        2ca118:	e1a01841 	mov	r1, r1, asr #16
        2ca11c:	e0400001 	sub	r0, r0, r1
        2ca120:	eb5e95a7 	bl	1a6f7c4 <$HWRAbs(int)>
        2ca124:	e1a0a000 	mov	sl, r0
        2ca128:	e7960089 	ldr	r0, [r6, r9, lsl #1]
        2ca12c:	e1a00840 	mov	r0, r0, asr #16
        2ca130:	e7961088 	ldr	r1, [r6, r8, lsl #1]
        2ca134:	e1a01841 	mov	r1, r1, asr #16
        2ca138:	e0400001 	sub	r0, r0, r1
        2ca13c:	eb5e95a0 	bl	1a6f7c4 <$HWRAbs(int)>
        2ca140:	e15a00c0 	cmp	sl, r0, asr #1
        2ca144:	aa00006f 	bge	2ca308 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x268>
        2ca148:	e5959010 	ldr	r9, [r5, #16]
        2ca14c:	e3390000 	teq	r9, #0	; 0x0
        2ca150:	0a00006c 	beq	2ca308 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x268>
        2ca154:	e5d90000 	ldrb	r0, [r9]
        2ca158:	e3300006 	teq	r0, #6	; 0x6
        2ca15c:	1330000a 	teqne	r0, #10	; 0xa
        2ca160:	13300009 	teqne	r0, #9	; 0x9
        2ca164:	0a000012 	beq	2ca1b4 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x114>
        2ca168:	e5d90001 	ldrb	r0, [r9, #1]
        2ca16c:	e330000e 	teq	r0, #14	; 0xe
        2ca170:	13300011 	teqne	r0, #17	; 0x11
        2ca174:	13300028 	teqne	r0, #40	; 0x28
        2ca178:	13300029 	teqne	r0, #41	; 0x29
        2ca17c:	1a000009 	bne	2ca1a8 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x108>
        2ca180:	e5990006 	ldr	r0, [r9, #6]
        2ca184:	e1a00840 	mov	r0, r0, asr #16
        2ca188:	e7940080 	ldr	r0, [r4, r0, lsl #1]
        2ca18c:	e1a00840 	mov	r0, r0, asr #16
        2ca190:	e7941087 	ldr	r1, [r4, r7, lsl #1]
        2ca194:	e1a01841 	mov	r1, r1, asr #16
        2ca198:	e0400001 	sub	r0, r0, r1
        2ca19c:	eb5e9588 	bl	1a6f7c4 <$HWRAbs(int)>
        2ca1a0:	e350000a 	cmp	r0, #10	; 0xa
        2ca1a4:	ba000002 	blt	2ca1b4 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x114>
        2ca1a8:	e5990004 	ldr	r0, [r9, #4]
        2ca1ac:	e1570840 	cmp	r7, r0, asr #16
        2ca1b0:	ca000003 	bgt	2ca1c4 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x124>
        2ca1b4:	e5999010 	ldr	r9, [r9, #16]
        2ca1b8:	e3390000 	teq	r9, #0	; 0x0
        2ca1bc:	1affffe4 	bne	2ca154 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0xb4>
        2ca1c0:	ea000050 	b	2ca308 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x268>
        2ca1c4:	e3390000 	teq	r9, #0	; 0x0
        2ca1c8:	15990010 	ldrne	r0, [r9, #16]
        2ca1cc:	13300000 	teqne	r0, #0	; 0x0
        2ca1d0:	0a00004c 	beq	2ca308 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x268>
        2ca1d4:	e5992004 	ldr	r2, [r9, #4]
        2ca1d8:	e5991006 	ldr	r1, [r9, #6]
        2ca1dc:	e1a01841 	mov	r1, r1, asr #16
        2ca1e0:	e0812842 	add	r2, r1, r2, asr #16
        2ca1e4:	e08720c2 	add	r2, r7, r2, asr #1
        2ca1e8:	e1a0a0c2 	mov	sl, r2, asr #1
        2ca1ec:	e1510007 	cmp	r1, r7
        2ca1f0:	da000026 	ble	2ca290 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x1f0>
        2ca1f4:	e1a09000 	mov	r9, r0
        2ca1f8:	e5d90000 	ldrb	r0, [r9]
        2ca1fc:	e3300006 	teq	r0, #6	; 0x6
        2ca200:	1330000a 	teqne	r0, #10	; 0xa
        2ca204:	13300009 	teqne	r0, #9	; 0x9
        2ca208:	0a000012 	beq	2ca258 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x1b8>
        2ca20c:	e5d90001 	ldrb	r0, [r9, #1]
        2ca210:	e330000e 	teq	r0, #14	; 0xe
        2ca214:	13300011 	teqne	r0, #17	; 0x11
        2ca218:	13300028 	teqne	r0, #40	; 0x28
        2ca21c:	13300029 	teqne	r0, #41	; 0x29
        2ca220:	1a000009 	bne	2ca24c <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x1ac>
        2ca224:	e5990006 	ldr	r0, [r9, #6]
        2ca228:	e1a00840 	mov	r0, r0, asr #16
        2ca22c:	e7940080 	ldr	r0, [r4, r0, lsl #1]
        2ca230:	e1a00840 	mov	r0, r0, asr #16
        2ca234:	e7941087 	ldr	r1, [r4, r7, lsl #1]
        2ca238:	e1a01841 	mov	r1, r1, asr #16
        2ca23c:	e0400001 	sub	r0, r0, r1
        2ca240:	eb5e955f 	bl	1a6f7c4 <$HWRAbs(int)>
        2ca244:	e350000a 	cmp	r0, #10	; 0xa
        2ca248:	ba000002 	blt	2ca258 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x1b8>
        2ca24c:	e5990006 	ldr	r0, [r9, #6]
        2ca250:	e1570840 	cmp	r7, r0, asr #16
        2ca254:	aa000003 	bge	2ca268 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x1c8>
        2ca258:	e5999010 	ldr	r9, [r9, #16]
        2ca25c:	e3390000 	teq	r9, #0	; 0x0
        2ca260:	1affffe4 	bne	2ca1f8 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x158>
        2ca264:	ea000009 	b	2ca290 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x1f0>
        2ca268:	e3390000 	teq	r9, #0	; 0x0
        2ca26c:	15990010 	ldrne	r0, [r9, #16]
        2ca270:	13300000 	teqne	r0, #0	; 0x0
        2ca274:	0a000005 	beq	2ca290 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x1f0>
        2ca278:	e5990004 	ldr	r0, [r9, #4]
        2ca27c:	e1a00840 	mov	r0, r0, asr #16
        2ca280:	e5991006 	ldr	r1, [r9, #6]
        2ca284:	e0800841 	add	r0, r0, r1, asr #16
        2ca288:	e08700c0 	add	r0, r7, r0, asr #1
        2ca28c:	e1a0a0c0 	mov	sl, r0, asr #1
        2ca290:	e1a03008 	mov	r3, r8
        2ca294:	e1a0200a 	mov	r2, sl
        2ca298:	e1a01004 	mov	r1, r4
        2ca29c:	e1a00006 	mov	r0, r6
        2ca2a0:	eb616c01 	bl	1b252ac <$iMostFarFromChord__FPsT1iT3>
        2ca2a4:	e7962080 	ldr	r2, [r6, r0, lsl #1]
        2ca2a8:	e1a02842 	mov	r2, r2, asr #16
        2ca2ac:	e7961088 	ldr	r1, [r6, r8, lsl #1]
        2ca2b0:	e1a01841 	mov	r1, r1, asr #16
        2ca2b4:	e1320001 	teq	r2, r1
        2ca2b8:	008a0000 	addeq	r0, sl, r0
        2ca2bc:	01a000c0 	moveq	r0, r0, asr #1
        2ca2c0:	e794208a 	ldr	r2, [r4, sl, lsl #1]
        2ca2c4:	e1a02842 	mov	r2, r2, asr #16
        2ca2c8:	e7943088 	ldr	r3, [r4, r8, lsl #1]
        2ca2cc:	e1a03843 	mov	r3, r3, asr #16
        2ca2d0:	e1520003 	cmp	r2, r3
        2ca2d4:	e7960080 	ldr	r0, [r6, r0, lsl #1]
        2ca2d8:	e1a00840 	mov	r0, r0, asr #16
        2ca2dc:	da000003 	ble	2ca2f0 <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x250>
        2ca2e0:	e1500001 	cmp	r0, r1
        2ca2e4:	a3a00018 	movge	r0, #24	; 0x18
        2ca2e8:	b3a00015 	movlt	r0, #21	; 0x15
        2ca2ec:	ea000002 	b	2ca2fc <EndIUIDNearStick__FP9SPEC_TYPET1PsT3+0x25c>
        2ca2f0:	e1500001 	cmp	r0, r1
        2ca2f4:	a3a0001c 	movge	r0, #28	; 0x1c
        2ca2f8:	b3a00019 	movlt	r0, #25	; 0x19
        2ca2fc:	e5c50001 	strb	r0, [r5, #1]
        2ca300:	e3a00001 	mov	r0, #1	; 0x1
        2ca304:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ca308:	e3a00000 	mov	r0, #0	; 0x0
        2ca30c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EachSoupCursorDo(RefVar const &, long, long, long)
 * Address: 002cdd7c
 */
EachSoupCursorDo(RefVar const &, long, long, long) {
    /*
        2cdd7c:	e1a0c00d 	mov	ip, sp
        2cdd80:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2cdd84:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cdd88:	e1a05000 	mov	r5, r0
        2cdd8c:	e1a07001 	mov	r7, r1
        2cdd90:	e1a04002 	mov	r4, r2
        2cdd94:	e1a06003 	mov	r6, r3
        2cdd98:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cdd9c:	e5900000 	ldr	r0, [r0]
        2cdda0:	e5900000 	ldr	r0, [r0]
        2cdda4:	e59f108c 	ldr	r1, [pc, #8c]	; 2cde38 <EachSoupCursorDo(RefVar const &, long, long, long)+0xbc>
        2cdda8:	e5911000 	ldr	r1, [r1]
        2cddac:	e5911000 	ldr	r1, [r1]
        2cddb0:	eb63d92a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2cddb4:	eb63d0e4 	bl	1bc214c <$AllocateRefHandle(long)>
        2cddb8:	e1a08000 	mov	r8, r0
        2cddbc:	e3a00002 	mov	r0, #2	; 0x2
        2cddc0:	eb63d0e1 	bl	1bc214c <$AllocateRefHandle(long)>
        2cddc4:	e58d0000 	str	r0, [sp]
        2cddc8:	e5980000 	ldr	r0, [r8]
        2cddcc:	eb63dd36 	bl	1bc52ac <$Length(long)>
        2cddd0:	e2509001 	subs	r9, r0, #1	; 0x1
        2cddd4:	4a000036 	bmi	2cdeb4 <EachSoupCursorDo(RefVar const &, long, long, long)+0x138>
        2cddd8:	e1a01009 	mov	r1, r9
        2cdddc:	e5980000 	ldr	r0, [r8]
        2cdde0:	eb63d91b 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2cdde4:	e59d1000 	ldr	r1, [sp]
        2cdde8:	e5810000 	str	r0, [r1]
        2cddec:	e3300002 	teq	r0, #2	; 0x2
        2cddf0:	0a00002d 	beq	2cdeac <EachSoupCursorDo(RefVar const &, long, long, long)+0x130>
        2cddf4:	e1a0000d 	mov	r0, sp
        2cddf8:	eb5de57b 	bl	1a473ec <$CursorObj(RefVar const &)>
        2cddfc:	e3570008 	cmp	r7, #8	; 0x8
        2cde00:	908ff107 	addls	pc, pc, r7, lsl #2
        2cde04:	ea000028 	b	2cdeac <EachSoupCursorDo(RefVar const &, long, long, long)+0x130>
        2cde08:	ea00000b 	b	2cde3c <EachSoupCursorDo(RefVar const &, long, long, long)+0xc0>
        2cde0c:	ea00000d 	b	2cde48 <EachSoupCursorDo(RefVar const &, long, long, long)+0xcc>
        2cde10:	ea00000f 	b	2cde54 <EachSoupCursorDo(RefVar const &, long, long, long)+0xd8>
        2cde14:	ea000013 	b	2cde68 <EachSoupCursorDo(RefVar const &, long, long, long)+0xec>
        2cde18:	ea000015 	b	2cde74 <EachSoupCursorDo(RefVar const &, long, long, long)+0xf8>
        2cde1c:	ea000017 	b	2cde80 <EachSoupCursorDo(RefVar const &, long, long, long)+0x104>
        2cde20:	ea000018 	b	2cde88 <EachSoupCursorDo(RefVar const &, long, long, long)+0x10c>
        2cde24:	ea00001d 	b	2cdea0 <EachSoupCursorDo(RefVar const &, long, long, long)+0x124>
        2cde28:	e1a02004 	mov	r2, r4
        2cde2c:	e1a01005 	mov	r1, r5
        2cde30:	eb5de55e 	bl	1a473b0 <TCursor::$IndexRemoved(RefVar const &, RefVar const &)>
        2cde34:	ea00001c 	b	2cdeac <EachSoupCursorDo(RefVar const &, long, long, long)+0x130>
        2cde38:	00682770 	rsbeq	r2, r8, r0, ror r7
        2cde3c:	e1a01004 	mov	r1, r4
        2cde40:	eb5de557 	bl	1a473a4 <TCursor::$SoupAdded(RefVar const &)>
        2cde44:	ea000018 	b	2cdeac <EachSoupCursorDo(RefVar const &, long, long, long)+0x130>
        2cde48:	e1a01004 	mov	r1, r4
        2cde4c:	eb5de553 	bl	1a473a0 <TCursor::$SoupRemoved(RefVar const &)>
        2cde50:	ea000015 	b	2cdeac <EachSoupCursorDo(RefVar const &, long, long, long)+0x130>
        2cde54:	e1a01004 	mov	r1, r4
        2cde58:	e5902000 	ldr	r2, [r0]
        2cde5c:	e1a0e00f 	mov	lr, pc
        2cde60:	e282f014 	add	pc, r2, #20	; 0x14
        2cde64:	ea000010 	b	2cdeac <EachSoupCursorDo(RefVar const &, long, long, long)+0x130>
        2cde68:	e1a01004 	mov	r1, r4
        2cde6c:	eb5de54e 	bl	1a473ac <TCursor::$SetSoup(RefVar const &)>
        2cde70:	ea00000d 	b	2cdeac <EachSoupCursorDo(RefVar const &, long, long, long)+0x130>
        2cde74:	e1a01005 	mov	r1, r5
        2cde78:	eb5de54e 	bl	1a473b8 <TCursor::$SoupTagsChanged(RefVar const &)>
        2cde7c:	ea00000a 	b	2cdeac <EachSoupCursorDo(RefVar const &, long, long, long)+0x130>
        2cde80:	eb5de54b 	bl	1a473b4 <TCursor::$IndexObjectsChanged(void)>
        2cde84:	ea000008 	b	2cdeac <EachSoupCursorDo(RefVar const &, long, long, long)+0x130>
        2cde88:	e1a02006 	mov	r2, r6
        2cde8c:	e1a01004 	mov	r1, r4
        2cde90:	e5903000 	ldr	r3, [r0]
        2cde94:	e1a0e00f 	mov	lr, pc
        2cde98:	e283f018 	add	pc, r3, #24	; 0x18
        2cde9c:	ea000002 	b	2cdeac <EachSoupCursorDo(RefVar const &, long, long, long)+0x130>
        2cdea0:	e1a02006 	mov	r2, r6
        2cdea4:	e1a01004 	mov	r1, r4
        2cdea8:	eb5de549 	bl	1a473d4 <TCursor::$EntryReadded(RefVar const &, RefVar const &)>
        2cdeac:	e2599001 	subs	r9, r9, #1	; 0x1
        2cdeb0:	5affffc8 	bpl	2cddd8 <EachSoupCursorDo(RefVar const &, long, long, long)+0x5c>
        2cdeb4:	e59d0000 	ldr	r0, [sp]
        2cdeb8:	eb63d4bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cdebc:	e1a00008 	mov	r0, r8
        2cdec0:	eb63d4bd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cdec4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: EachSoupCursorDo(RefVar const &, long)
 * Address: 002cdec8
 */
EachSoupCursorDo(RefVar const &, long) {
    /*
        2cdec8:	e1a0c00d 	mov	ip, sp
        2cdecc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2cded0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cded4:	e1a06000 	mov	r6, r0
        2cded8:	e1a04001 	mov	r4, r1
        2cdedc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2cdee0:	e3a07002 	mov	r7, #2	; 0x2
        2cdee4:	e1a00007 	mov	r0, r7
        2cdee8:	eb63d097 	bl	1bc214c <$AllocateRefHandle(long)>
        2cdeec:	e58d0000 	str	r0, [sp]
        2cdef0:	e1a0500d 	mov	r5, sp
        2cdef4:	e1a00007 	mov	r0, r7
        2cdef8:	eb63d093 	bl	1bc214c <$AllocateRefHandle(long)>
        2cdefc:	e58d0004 	str	r0, [sp, #4]
        2cdf00:	e28d2004 	add	r2, sp, #4	; 0x4
        2cdf04:	e1a01004 	mov	r1, r4
        2cdf08:	e1a00006 	mov	r0, r6
        2cdf0c:	e1a03005 	mov	r3, r5
        2cdf10:	eb5de10c 	bl	1a46348 <$EachSoupCursorDo(RefVar const &, long, long, long)>
        2cdf14:	e59d0000 	ldr	r0, [sp]
        2cdf18:	eb63d4a7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cdf1c:	e59d0004 	ldr	r0, [sp, #4]
        2cdf20:	eb63d4a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cdf24:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: EachSoupCursorDo(RefVar const &, long, long)
 * Address: 002cdf28
 */
EachSoupCursorDo(RefVar const &, long, long) {
    /*
        2cdf28:	e1a0c00d 	mov	ip, sp
        2cdf2c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2cdf30:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cdf34:	e1a06000 	mov	r6, r0
        2cdf38:	e1a05001 	mov	r5, r1
        2cdf3c:	e1a04002 	mov	r4, r2
        2cdf40:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cdf44:	e3a00002 	mov	r0, #2	; 0x2
        2cdf48:	eb63d07f 	bl	1bc214c <$AllocateRefHandle(long)>
        2cdf4c:	e58d0000 	str	r0, [sp]
        2cdf50:	e1a0300d 	mov	r3, sp
        2cdf54:	e1a02004 	mov	r2, r4
        2cdf58:	e1a01005 	mov	r1, r5
        2cdf5c:	e1a00006 	mov	r0, r6
        2cdf60:	eb5de0f8 	bl	1a46348 <$EachSoupCursorDo(RefVar const &, long, long, long)>
        2cdf64:	e59d0000 	ldr	r0, [sp]
        2cdf68:	eb63d493 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cdf6c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: EncodeTags__FRC6RefVarT1P8TagsBits
 * Address: 002d0e30
 */
void globals::EncodeTags() {
    /*
        2d0e30:	e1a0c00d 	mov	ip, sp
        2d0e34:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d0e38:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d0e3c:	e1a06000 	mov	r6, r0
        2d0e40:	e1a04001 	mov	r4, r1
        2d0e44:	e1a05002 	mov	r5, r2
        2d0e48:	e1a00002 	mov	r0, r2
        2d0e4c:	e3a01000 	mov	r1, #0	; 0x0
        2d0e50:	eb5e40a6 	bl	1a610f0 <SKey::$SetSize(short)>
        2d0e54:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d0e58:	e3a08001 	mov	r8, #1	; 0x1
        2d0e5c:	e3a00002 	mov	r0, #2	; 0x2
        2d0e60:	eb63c4b9 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0e64:	e1a07000 	mov	r7, r0
        2d0e68:	e3a00002 	mov	r0, #2	; 0x2
        2d0e6c:	eb63c4b6 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0e70:	e58d0000 	str	r0, [sp]
        2d0e74:	e1a00004 	mov	r0, r4
        2d0e78:	eb648ac3 	bl	1bf398c <$IsArray(RefVar const &)>
        2d0e7c:	e3a0a0e6 	mov	sl, #230	; 0xe6
        2d0e80:	e24aacbe 	sub	sl, sl, #48640	; 0xbe00
        2d0e84:	e3300000 	teq	r0, #0	; 0x0
        2d0e88:	0a00002c 	beq	2d0f40 <EncodeTags__FRC6RefVarT1P8TagsBits+0x110>
        2d0e8c:	e5940000 	ldr	r0, [r4]
        2d0e90:	e5900000 	ldr	r0, [r0]
        2d0e94:	eb63d104 	bl	1bc52ac <$Length(long)>
        2d0e98:	e2509001 	subs	r9, r0, #1	; 0x1
        2d0e9c:	4a000047 	bmi	2d0fc0 <EncodeTags__FRC6RefVarT1P8TagsBits+0x190>
        2d0ea0:	e3a0a002 	mov	sl, #2	; 0x2
        2d0ea4:	e5940000 	ldr	r0, [r4]
        2d0ea8:	e5900000 	ldr	r0, [r0]
        2d0eac:	e1a01009 	mov	r1, r9
        2d0eb0:	eb63cce7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d0eb4:	e41d1004 	ldr	r1, [sp], -#4
        2d0eb8:	e5810000 	str	r0, [r1]
        2d0ebc:	eb63d0f8 	bl	1bc52a4 <$IsSymbol(long)>
        2d0ec0:	e3300000 	teq	r0, #0	; 0x0
        2d0ec4:	028d1004 	addeq	r1, sp, #4	; 0x4
        2d0ec8:	03a000e6 	moveq	r0, #230	; 0xe6
        2d0ecc:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        2d0ed0:	0b5dccd7 	bleq	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d0ed4:	e1a0000a 	mov	r0, sl
        2d0ed8:	eb63c49b 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0edc:	e58d0000 	str	r0, [sp]
        2d0ee0:	e1a0000d 	mov	r0, sp
        2d0ee4:	e28d2004 	add	r2, sp, #4	; 0x4
        2d0ee8:	e1a01006 	mov	r1, r6
        2d0eec:	eb5e33ef 	bl	1a5deb0 <$FSetContains>
        2d0ef0:	e5870000 	str	r0, [r7]
        2d0ef4:	e59d0000 	ldr	r0, [sp]
        2d0ef8:	eb63c8af 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0efc:	e5970000 	ldr	r0, [r7]
        2d0f00:	e2001003 	and	r1, r0, #3	; 0x3
        2d0f04:	e3510000 	cmp	r1, #0	; 0x0
        2d0f08:	1a000007 	bne	2d0f2c <EncodeTags__FRC6RefVarT1P8TagsBits+0xfc>
        2d0f0c:	01a00140 	moveq	r0, r0, asr #2
        2d0f10:	0a000000 	beq	2d0f18 <EncodeTags__FRC6RefVarT1P8TagsBits+0xe8>
        2d0f14:	eb63c480 	bl	1bc211c <$_RINTError(long)>
        2d0f18:	e1a01800 	mov	r1, r0, lsl #16
        2d0f1c:	e1a01841 	mov	r1, r1, asr #16
        2d0f20:	e1a00005 	mov	r0, r5
        2d0f24:	eb5ddd35 	bl	1a48400 <TagsBits::$SetTag(short)>
        2d0f28:	ea000000 	b	2d0f30 <EncodeTags__FRC6RefVarT1P8TagsBits+0x100>
        2d0f2c:	e3a08000 	mov	r8, #0	; 0x0
        2d0f30:	e28dd004 	add	sp, sp, #4	; 0x4
        2d0f34:	e2599001 	subs	r9, r9, #1	; 0x1
        2d0f38:	5affffd9 	bpl	2d0ea4 <EncodeTags__FRC6RefVarT1P8TagsBits+0x74>
        2d0f3c:	ea00001f 	b	2d0fc0 <EncodeTags__FRC6RefVarT1P8TagsBits+0x190>
        2d0f40:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d0f44:	e5940000 	ldr	r0, [r4]
        2d0f48:	e5900000 	ldr	r0, [r0]
        2d0f4c:	eb63d0d4 	bl	1bc52a4 <$IsSymbol(long)>
        2d0f50:	e3300000 	teq	r0, #0	; 0x0
        2d0f54:	01a01004 	moveq	r1, r4
        2d0f58:	01a0000a 	moveq	r0, sl
        2d0f5c:	0b5dccb4 	bleq	1a44234 <$ThrowExFramesWithBadValue(long, RefVar const &)>
        2d0f60:	e3a00002 	mov	r0, #2	; 0x2
        2d0f64:	eb63c478 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0f68:	e58d0000 	str	r0, [sp]
        2d0f6c:	e1a0000d 	mov	r0, sp
        2d0f70:	e1a02004 	mov	r2, r4
        2d0f74:	e1a01006 	mov	r1, r6
        2d0f78:	eb5e33cc 	bl	1a5deb0 <$FSetContains>
        2d0f7c:	e5870000 	str	r0, [r7]
        2d0f80:	e59d0000 	ldr	r0, [sp]
        2d0f84:	eb63c88c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0f88:	e5970000 	ldr	r0, [r7]
        2d0f8c:	e2001003 	and	r1, r0, #3	; 0x3
        2d0f90:	e3510000 	cmp	r1, #0	; 0x0
        2d0f94:	1a000007 	bne	2d0fb8 <EncodeTags__FRC6RefVarT1P8TagsBits+0x188>
        2d0f98:	01a00140 	moveq	r0, r0, asr #2
        2d0f9c:	0a000000 	beq	2d0fa4 <EncodeTags__FRC6RefVarT1P8TagsBits+0x174>
        2d0fa0:	eb63c45d 	bl	1bc211c <$_RINTError(long)>
        2d0fa4:	e1a01800 	mov	r1, r0, lsl #16
        2d0fa8:	e1a01841 	mov	r1, r1, asr #16
        2d0fac:	e1a00005 	mov	r0, r5
        2d0fb0:	eb5ddd12 	bl	1a48400 <TagsBits::$SetTag(short)>
        2d0fb4:	ea000000 	b	2d0fbc <EncodeTags__FRC6RefVarT1P8TagsBits+0x18c>
        2d0fb8:	e3a08000 	mov	r8, #0	; 0x0
        2d0fbc:	e28dd004 	add	sp, sp, #4	; 0x4
        2d0fc0:	e59d0000 	ldr	r0, [sp]
        2d0fc4:	eb63c87c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0fc8:	e1a00007 	mov	r0, r7
        2d0fcc:	eb63c87a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0fd0:	e1a00008 	mov	r0, r8
        2d0fd4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d0fd8:	e1a0c00d 	mov	ip, sp
        2d0fdc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d0fe0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d0fe4:	e1a05000 	mov	r5, r0
        2d0fe8:	e1a04003 	mov	r4, r3
        2d0fec:	e59b7004 	ldr	r7, [fp, #4]
        2d0ff0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d0ff4:	e5910000 	ldr	r0, [r1]
        2d0ff8:	e5900000 	ldr	r0, [r0]
        2d0ffc:	e5921000 	ldr	r1, [r2]
        2d1000:	e5911000 	ldr	r1, [r1]
        2d1004:	eb63cc95 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d1008:	eb63c44f 	bl	1bc214c <$AllocateRefHandle(long)>
        2d100c:	e58d0000 	str	r0, [sp]
        2d1010:	e5900000 	ldr	r0, [r0]
        2d1014:	e3a06000 	mov	r6, #0	; 0x0
        2d1018:	e3300002 	teq	r0, #2	; 0x2
        2d101c:	0a000021 	beq	2d10a8 <EncodeTags__FRC6RefVarT1P8TagsBits+0x278>
        2d1020:	e24dd050 	sub	sp, sp, #80	; 0x50
        2d1024:	e5cd6001 	strb	r6, [sp, #1]
        2d1028:	e44d6008 	strb	r6, [sp], -#8
        2d102c:	e28d2008 	add	r2, sp, #8	; 0x8
        2d1030:	e28d1058 	add	r1, sp, #88	; 0x58
        2d1034:	e1a00005 	mov	r0, r5
        2d1038:	eb5ddcf2 	bl	1a48408 <$EncodeTags__FRC6RefVarT1P8TagsBits>
        2d103c:	e3300000 	teq	r0, #0	; 0x0
        2d1040:	1a000006 	bne	2d1060 <EncodeTags__FRC6RefVarT1P8TagsBits+0x230>
        2d1044:	e3340000 	teq	r4, #0	; 0x0
        2d1048:	13340001 	teqne	r4, #1	; 0x1
        2d104c:	1a000003 	bne	2d1060 <EncodeTags__FRC6RefVarT1P8TagsBits+0x230>
        2d1050:	e59d0058 	ldr	r0, [sp, #88]
        2d1054:	eb63c858 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1058:	e1a00006 	mov	r0, r6
        2d105c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2d1060:	e1a00104 	mov	r0, r4, lsl #2
        2d1064:	eb63c438 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1068:	e58d0000 	str	r0, [sp]
        2d106c:	e1a0100d 	mov	r1, sp
        2d1070:	e1a00007 	mov	r0, r7
        2d1074:	eb63c42b 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        2d1078:	e59d0000 	ldr	r0, [sp]
        2d107c:	eb63c84e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1080:	e28d0008 	add	r0, sp, #8	; 0x8
        2d1084:	ebffff51 	bl	2d0dd0 <TagsBits::ValidTest( const(TagsBits const &, long))+0xc4>
        2d1088:	eb63c42f 	bl	1bc214c <$AllocateRefHandle(long)>
        2d108c:	e58d0004 	str	r0, [sp, #4]
        2d1090:	e28d1004 	add	r1, sp, #4	; 0x4
        2d1094:	e1a00007 	mov	r0, r7
        2d1098:	eb63c422 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        2d109c:	e59d0004 	ldr	r0, [sp, #4]
        2d10a0:	eb63c845 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d10a4:	e28dd058 	add	sp, sp, #88	; 0x58
        2d10a8:	e3a04001 	mov	r4, #1	; 0x1
        2d10ac:	e59d0000 	ldr	r0, [sp]
        2d10b0:	eb63c841 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d10b4:	e1a00004 	mov	r0, r4
        2d10b8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: EncodeQueryTags__FRC6RefVarT1
 * Address: 002d10bc
 */
void globals::EncodeQueryTags() {
    /*
        2d10bc:	e1a0c00d 	mov	ip, sp
        2d10c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d10c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d10c8:	e1a05000 	mov	r5, r0
        2d10cc:	e1a04001 	mov	r4, r1
        2d10d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d10d4:	e59f0118 	ldr	r0, [pc, #118]	; 2d11f4 <EncodeQueryTags__FRC6RefVarT1+0x138>
        2d10d8:	e3a01000 	mov	r1, #0	; 0x0
        2d10dc:	eb63c415 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2d10e0:	eb63c419 	bl	1bc214c <$AllocateRefHandle(long)>
        2d10e4:	e58d0004 	str	r0, [sp, #4]
        2d10e8:	e5950000 	ldr	r0, [r5]
        2d10ec:	e5900000 	ldr	r0, [r0]
        2d10f0:	e59f1100 	ldr	r1, [pc, #100]	; 2d11f8 <EncodeQueryTags__FRC6RefVarT1+0x13c>
        2d10f4:	e5911000 	ldr	r1, [r1]
        2d10f8:	e5911000 	ldr	r1, [r1]
        2d10fc:	eb63cc57 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d1100:	eb63c411 	bl	1bc214c <$AllocateRefHandle(long)>
        2d1104:	e58d0000 	str	r0, [sp]
        2d1108:	e28d3004 	add	r3, sp, #4	; 0x4
        2d110c:	e92d0008 	stmdb	sp!, {r3}
        2d1110:	e59f20e4 	ldr	r2, [pc, #e4]	; 2d11fc <EncodeQueryTags__FRC6RefVarT1+0x140>
        2d1114:	e1a01004 	mov	r1, r4
        2d1118:	e28d0004 	add	r0, sp, #4	; 0x4
        2d111c:	e3a03000 	mov	r3, #0	; 0x0
        2d1120:	ebffffac 	bl	2d0fd8 <EncodeTags__FRC6RefVarT1P8TagsBits+0x1a8>
        2d1124:	e28dd004 	add	sp, sp, #4	; 0x4
        2d1128:	e3300000 	teq	r0, #0	; 0x0
        2d112c:	0a000037 	beq	2d1210 <EncodeQueryTags__FRC6RefVarT1+0x154>
        2d1130:	e28d3004 	add	r3, sp, #4	; 0x4
        2d1134:	e92d0008 	stmdb	sp!, {r3}
        2d1138:	e59f20c0 	ldr	r2, [pc, #c0]	; 2d1200 <EncodeQueryTags__FRC6RefVarT1+0x144>
        2d113c:	e1a01004 	mov	r1, r4
        2d1140:	e28d0004 	add	r0, sp, #4	; 0x4
        2d1144:	e3a03001 	mov	r3, #1	; 0x1
        2d1148:	ebffffa2 	bl	2d0fd8 <EncodeTags__FRC6RefVarT1P8TagsBits+0x1a8>
        2d114c:	e28dd004 	add	sp, sp, #4	; 0x4
        2d1150:	e3300000 	teq	r0, #0	; 0x0
        2d1154:	0a00002d 	beq	2d1210 <EncodeQueryTags__FRC6RefVarT1+0x154>
        2d1158:	e28d3004 	add	r3, sp, #4	; 0x4
        2d115c:	e92d0008 	stmdb	sp!, {r3}
        2d1160:	e59f209c 	ldr	r2, [pc, #9c]	; 2d1204 <EncodeQueryTags__FRC6RefVarT1+0x148>
        2d1164:	e1a01004 	mov	r1, r4
        2d1168:	e28d0004 	add	r0, sp, #4	; 0x4
        2d116c:	e3a03002 	mov	r3, #2	; 0x2
        2d1170:	ebffff98 	bl	2d0fd8 <EncodeTags__FRC6RefVarT1P8TagsBits+0x1a8>
        2d1174:	e28dd004 	add	sp, sp, #4	; 0x4
        2d1178:	e3300000 	teq	r0, #0	; 0x0
        2d117c:	0a000023 	beq	2d1210 <EncodeQueryTags__FRC6RefVarT1+0x154>
        2d1180:	e28d3004 	add	r3, sp, #4	; 0x4
        2d1184:	e92d0008 	stmdb	sp!, {r3}
        2d1188:	e59f2078 	ldr	r2, [pc, #78]	; 2d1208 <EncodeQueryTags__FRC6RefVarT1+0x14c>
        2d118c:	e1a01004 	mov	r1, r4
        2d1190:	e28d0004 	add	r0, sp, #4	; 0x4
        2d1194:	e3a03003 	mov	r3, #3	; 0x3
        2d1198:	ebffff8e 	bl	2d0fd8 <EncodeTags__FRC6RefVarT1P8TagsBits+0x1a8>
        2d119c:	e28dd004 	add	sp, sp, #4	; 0x4
        2d11a0:	e3300000 	teq	r0, #0	; 0x0
        2d11a4:	0a000019 	beq	2d1210 <EncodeQueryTags__FRC6RefVarT1+0x154>
        2d11a8:	e59d0004 	ldr	r0, [sp, #4]
        2d11ac:	e5900000 	ldr	r0, [r0]
        2d11b0:	eb63d03d 	bl	1bc52ac <$Length(long)>
        2d11b4:	e3300000 	teq	r0, #0	; 0x0
        2d11b8:	1a000005 	bne	2d11d4 <EncodeQueryTags__FRC6RefVarT1+0x118>
        2d11bc:	e3a01064 	mov	r1, #100	; 0x64
        2d11c0:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        2d11c4:	e59f0040 	ldr	r0, [pc, #40]	; 2d120c <EncodeQueryTags__FRC6RefVarT1+0x150>
        2d11c8:	e5900000 	ldr	r0, [r0]
        2d11cc:	e3a02000 	mov	r2, #0	; 0x0
        2d11d0:	eb6447f1 	bl	1be319c <$Throw>
        2d11d4:	e59d0004 	ldr	r0, [sp, #4]
        2d11d8:	e5904000 	ldr	r4, [r0]
        2d11dc:	e59d0000 	ldr	r0, [sp]
        2d11e0:	eb63c7f5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d11e4:	e59d0004 	ldr	r0, [sp, #4]
        2d11e8:	eb63c7f3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d11ec:	e1a00004 	mov	r0, r4
        2d11f0:	ea00000b 	b	2d1224 <EncodeQueryTags__FRC6RefVarT1+0x168>
        2d11f4:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2d11f8:	00684a48 	rsbeq	r4, r8, r8, asr #20
        2d11fc:	00682c80 	rsbeq	r2, r8, r0, lsl #25
        2d1200:	00681e08 	rsbeq	r1, r8, r8, lsl #28
        2d1204:	00681e78 	rsbeq	r1, r8, r8, ror lr
        2d1208:	00683a68 	rsbeq	r3, r8, r8, ror #20
        2d120c:	003712fc 	ldreqsh	r1, [r7], -ip
        2d1210:	e59d0000 	ldr	r0, [sp]
        2d1214:	eb63c7e8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1218:	e59d0004 	ldr	r0, [sp, #4]
        2d121c:	eb63c7e6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d1220:	e3a00002 	mov	r0, #2	; 0x2
        2d1224:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: EqualCurve__FP5curveT1
 * Address: 002d1d58
 */
void globals::EqualCurve() {
    /*
        2d1d58:	e92d4000 	stmdb	sp!, {lr}
        2d1d5c:	e1a03000 	mov	r3, r0
        2d1d60:	e1a02001 	mov	r2, r1
        2d1d64:	e3a00001 	mov	r0, #1	; 0x1
        2d1d68:	e1330001 	teq	r3, r1
        2d1d6c:	08bd8000 	ldmeqia	sp!, {pc}
        2d1d70:	e3a01006 	mov	r1, #6	; 0x6
        2d1d74:	e493e004 	ldr	lr, [r3], #4
        2d1d78:	e492c004 	ldr	ip, [r2], #4
        2d1d7c:	e13e000c 	teq	lr, ip
        2d1d80:	13a00000 	movne	r0, #0	; 0x0
        2d1d84:	18bd8000 	ldmneia	sp!, {pc}
        2d1d88:	e2411001 	sub	r1, r1, #1	; 0x1
        2d1d8c:	e3510000 	cmp	r1, #0	; 0x0
        2d1d90:	cafffff7 	bgt	2d1d74 <EqualCurve__FP5curveT1+0x1c>
        2d1d94:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: EraseCurve(curve *)
 * Address: 002d1fdc
 */
EraseCurve(curve *) {
    /*
        2d1fdc:	e1a01000 	mov	r1, r0
        2d1fe0:	e3a00002 	mov	r0, #2	; 0x2
        2d1fe4:	ea61e9a0 	b	1b4c66c <$CallCurve(unsigned char, curve *)>
    */
}

/**
 * Symbol: EnableFramesFunctionProfiling(unsigned char)
 * Address: 002d41f4
 */
EnableFramesFunctionProfiling(unsigned char) {
    /*
        2d41f4:	e1a0c00d 	mov	ip, sp
        2d41f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d41fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d4200:	e20010ff 	and	r1, r0, #255	; 0xff
        2d4204:	e59f0034 	ldr	r0, [pc, #34]	; 2d4240 <EnableFramesFunctionProfiling(unsigned char)+0x4c>
        2d4208:	e5903000 	ldr	r3, [r0]
        2d420c:	e59f2030 	ldr	r2, [pc, #30]	; 2d4244 <EnableFramesFunctionProfiling(unsigned char)+0x50>
        2d4210:	e1330002 	teq	r3, r2
        2d4214:	13a03000 	movne	r3, #0	; 0x0
        2d4218:	03a03001 	moveq	r3, #1	; 0x1
        2d421c:	e20340ff 	and	r4, r3, #255	; 0xff
        2d4220:	e3310000 	teq	r1, #0	; 0x0
        2d4224:	03a02000 	moveq	r2, #0	; 0x0
        2d4228:	e5802000 	str	r2, [r0]
        2d422c:	e59f0014 	ldr	r0, [pc, #14]	; 2d4248 <EnableFramesFunctionProfiling(unsigned char)+0x54>
        2d4230:	e5900000 	ldr	r0, [r0]
        2d4234:	eb5e0e56 	bl	1a57b94 <TInterpreter::$SetFastLoopFlag(void)>
        2d4238:	e1a00004 	mov	r0, r4
        2d423c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2d4240:	0c10535c 	ldceq	3, cr5, [r0], -#368
        2d4244:	66667065 	strvsbt	r7, [r6], -r5, rrx
        2d4248:	0c105458 	ldceq	4, cr5, [r0], -#352
    */
}

/**
 * Symbol: EWInstantiate
 * Address: 002d6fc8
 */
void globals::EWInstantiate() {
    /*
        2d6fc8:	e1a0c00d 	mov	ip, sp
        2d6fcc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d6fd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d6fd4:	e1a04001 	mov	r4, r1
        2d6fd8:	e1a05002 	mov	r5, r2
        2d6fdc:	e3a00000 	mov	r0, #0	; 0x0
        2d6fe0:	eb5fb07a 	bl	1ac31d0 <TEWorldClient::$__ct(void)>
        2d6fe4:	e3300000 	teq	r0, #0	; 0x0
        2d6fe8:	03a000a8 	moveq	r0, #168	; 0xa8
        2d6fec:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
        2d6ff0:	0a000005 	beq	2d700c <EWInstantiate+0x44>
        2d6ff4:	e1a02005 	mov	r2, r5
        2d6ff8:	e1a01004 	mov	r1, r4
        2d6ffc:	eb5fac45 	bl	1ac2118 <TEWorldClient::$InitEWorldClient(RefVar const &, RefVar const &)>
        2d7000:	e3300000 	teq	r0, #0	; 0x0
        2d7004:	03a00002 	moveq	r0, #2	; 0x2
        2d7008:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2d700c:	e1a00100 	mov	r0, r0, lsl #2
        2d7010:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: EWSend
 * Address: 002d7014
 */
void globals::EWSend() {
    /*
        2d7014:	e1a0c00d 	mov	ip, sp
        2d7018:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d701c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d7020:	e1a04001 	mov	r4, r1
        2d7024:	e59f1030 	ldr	r1, [pc, #30]	; 2d705c <EWSend+0x48>
        2d7028:	e3a03000 	mov	r3, #0	; 0x0
        2d702c:	e3a02000 	mov	r2, #0	; 0x0
        2d7030:	eb63b48f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d7034:	eb5f23e9 	bl	1a9ffe0 <$RefToAddress(long)>
        2d7038:	e3300000 	teq	r0, #0	; 0x0
        2d703c:	03e00000 	mvneq	r0, #0	; 0x0
        2d7040:	0a00000a 	beq	2d7070 <EWSend+0x5c>
        2d7044:	e5941000 	ldr	r1, [r4]
        2d7048:	e5911000 	ldr	r1, [r1]
        2d704c:	e3310002 	teq	r1, #2	; 0x2
        2d7050:	0a000002 	beq	2d7060 <EWSend+0x4c>
        2d7054:	eb5fb049 	bl	1ac3180 <TEWorldClient::$SendP3BufferEscaped(void)>
        2d7058:	ea000001 	b	2d7064 <EWSend+0x50>
        2d705c:	006823f0 	streqd	r2, [r8], -#48
        2d7060:	eb5fb048 	bl	1ac3188 <TEWorldClient::$SendP3Buffer(void)>
        2d7064:	e3300000 	teq	r0, #0	; 0x0
        2d7068:	03a00002 	moveq	r0, #2	; 0x2
        2d706c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2d7070:	e1a00100 	mov	r0, r0, lsl #2
        2d7074:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: EWOutput
 * Address: 002d7078
 */
void globals::EWOutput() {
    /*
        2d7078:	e1a0c00d 	mov	ip, sp
        2d707c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d7080:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d7084:	e1a06001 	mov	r6, r1
        2d7088:	e1a05002 	mov	r5, r2
        2d708c:	e1a04003 	mov	r4, r3
        2d7090:	e59f1058 	ldr	r1, [pc, #58]	; 2d70f0 <EWOutput+0x78>
        2d7094:	e3a03000 	mov	r3, #0	; 0x0
        2d7098:	e3a02000 	mov	r2, #0	; 0x0
        2d709c:	eb63b474 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d70a0:	eb5f23ce 	bl	1a9ffe0 <$RefToAddress(long)>
        2d70a4:	e1b07000 	movs	r7, r0
        2d70a8:	03e00000 	mvneq	r0, #0	; 0x0
        2d70ac:	0a00000d 	beq	2d70e8 <EWOutput+0x70>
        2d70b0:	e1a02005 	mov	r2, r5
        2d70b4:	e1a01006 	mov	r1, r6
        2d70b8:	e1a00007 	mov	r0, r7
        2d70bc:	eb5fa3bb 	bl	1abffb0 <TEWorldClient::$DoOutput(RefVar const &, RefVar const &)>
        2d70c0:	e3300000 	teq	r0, #0	; 0x0
        2d70c4:	1a000005 	bne	2d70e0 <EWOutput+0x68>
        2d70c8:	e5940000 	ldr	r0, [r4]
        2d70cc:	e5900000 	ldr	r0, [r0]
        2d70d0:	e3300002 	teq	r0, #2	; 0x2
        2d70d4:	1a000006 	bne	2d70f4 <EWOutput+0x7c>
        2d70d8:	e1a00007 	mov	r0, r7
        2d70dc:	eb5fb029 	bl	1ac3188 <TEWorldClient::$SendP3Buffer(void)>
        2d70e0:	e3300000 	teq	r0, #0	; 0x0
        2d70e4:	0a000002 	beq	2d70f4 <EWOutput+0x7c>
        2d70e8:	e1a00100 	mov	r0, r0, lsl #2
        2d70ec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2d70f0:	006823f0 	streqd	r2, [r8], -#48
        2d70f4:	e3a00002 	mov	r0, #2	; 0x2
        2d70f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: EWOutputAtom
 * Address: 002d734c
 */
void globals::EWOutputAtom() {
    /*
        2d734c:	e1a0c00d 	mov	ip, sp
        2d7350:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2d7354:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d7358:	e1a06001 	mov	r6, r1
        2d735c:	e1a05002 	mov	r5, r2
        2d7360:	e1a04003 	mov	r4, r3
        2d7364:	e59b7004 	ldr	r7, [fp, #4]
        2d7368:	e59f1048 	ldr	r1, [pc, #48]	; 2d73b8 <EWOutputAtom+0x6c>
        2d736c:	e3a03000 	mov	r3, #0	; 0x0
        2d7370:	e3a02000 	mov	r2, #0	; 0x0
        2d7374:	eb63b3be 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d7378:	eb5f2318 	bl	1a9ffe0 <$RefToAddress(long)>
        2d737c:	e3300000 	teq	r0, #0	; 0x0
        2d7380:	03e00000 	mvneq	r0, #0	; 0x0
        2d7384:	0a000009 	beq	2d73b0 <EWOutputAtom+0x64>
        2d7388:	e1a03007 	mov	r3, r7
        2d738c:	e92d0008 	stmdb	sp!, {r3}
        2d7390:	e1a03004 	mov	r3, r4
        2d7394:	e1a02005 	mov	r2, r5
        2d7398:	e1a01006 	mov	r1, r6
        2d739c:	eb5fa302 	bl	1abffac <TEWorldClient::$DoOutputAtom(RefVar const &, RefVar const &, RefVar const &, RefVar const &)>
        2d73a0:	e28dd004 	add	sp, sp, #4	; 0x4
        2d73a4:	e3300000 	teq	r0, #0	; 0x0
        2d73a8:	03a00002 	moveq	r0, #2	; 0x2
        2d73ac:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2d73b0:	e1a00100 	mov	r0, r0, lsl #2
        2d73b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2d73b8:	006823f0 	streqd	r2, [r8], -#48
    */
}

/**
 * Symbol: EWEscape
 * Address: 002d73bc
 */
void globals::EWEscape() {
    /*
        2d73bc:	e1a0c00d 	mov	ip, sp
        2d73c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d73c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d73c8:	e1a05000 	mov	r5, r0
        2d73cc:	e1a04001 	mov	r4, r1
        2d73d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d73d4:	e5920000 	ldr	r0, [r2]
        2d73d8:	e5900000 	ldr	r0, [r0]
        2d73dc:	e3100003 	tst	r0, #3	; 0x3
        2d73e0:	01a00140 	moveq	r0, r0, asr #2
        2d73e4:	0a000000 	beq	2d73ec <EWEscape+0x30>
        2d73e8:	eb63ab4b 	bl	1bc211c <$_RINTError(long)>
        2d73ec:	e58d0000 	str	r0, [sp]
        2d73f0:	e59f1040 	ldr	r1, [pc, #40]	; 2d7438 <EWEscape+0x7c>
        2d73f4:	e1a00005 	mov	r0, r5
        2d73f8:	e3a03000 	mov	r3, #0	; 0x0
        2d73fc:	e3a02000 	mov	r2, #0	; 0x0
        2d7400:	eb63b39b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d7404:	eb5f22f5 	bl	1a9ffe0 <$RefToAddress(long)>
        2d7408:	e1b05000 	movs	r5, r0
        2d740c:	0a000006 	beq	2d742c <EWEscape+0x70>
        2d7410:	e5940000 	ldr	r0, [r4]
        2d7414:	e5900000 	ldr	r0, [r0]
        2d7418:	eb5f22f0 	bl	1a9ffe0 <$RefToAddress(long)>
        2d741c:	e1a01000 	mov	r1, r0
        2d7420:	e1a0200d 	mov	r2, sp
        2d7424:	e1a00005 	mov	r0, r5
        2d7428:	eb5fa2f4 	bl	1ac0000 <TEWorldClient::$Escape(unsigned char *, unsigned long *)>
        2d742c:	e49d0004 	ldr	r0, [sp], #4
        2d7430:	e1a00100 	mov	r0, r0, lsl #2
        2d7434:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d7438:	006823f0 	streqd	r2, [r8], -#48
    */
}

/**
 * Symbol: EWUnEscape
 * Address: 002d743c
 */
void globals::EWUnEscape() {
    /*
        2d743c:	e1a0c00d 	mov	ip, sp
        2d7440:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d7444:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d7448:	e1a05000 	mov	r5, r0
        2d744c:	e1a04001 	mov	r4, r1
        2d7450:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d7454:	e5920000 	ldr	r0, [r2]
        2d7458:	e5900000 	ldr	r0, [r0]
        2d745c:	e3100003 	tst	r0, #3	; 0x3
        2d7460:	01a00140 	moveq	r0, r0, asr #2
        2d7464:	0a000000 	beq	2d746c <EWUnEscape+0x30>
        2d7468:	eb63ab2b 	bl	1bc211c <$_RINTError(long)>
        2d746c:	e58d0000 	str	r0, [sp]
        2d7470:	e59f1040 	ldr	r1, [pc, #40]	; 2d74b8 <EWUnEscape+0x7c>
        2d7474:	e1a00005 	mov	r0, r5
        2d7478:	e3a03000 	mov	r3, #0	; 0x0
        2d747c:	e3a02000 	mov	r2, #0	; 0x0
        2d7480:	eb63b37b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d7484:	eb5f22d5 	bl	1a9ffe0 <$RefToAddress(long)>
        2d7488:	e1b05000 	movs	r5, r0
        2d748c:	0a000006 	beq	2d74ac <EWUnEscape+0x70>
        2d7490:	e5940000 	ldr	r0, [r4]
        2d7494:	e5900000 	ldr	r0, [r0]
        2d7498:	eb5f22d0 	bl	1a9ffe0 <$RefToAddress(long)>
        2d749c:	e1a01000 	mov	r1, r0
        2d74a0:	e1a0200d 	mov	r2, sp
        2d74a4:	e1a00005 	mov	r0, r5
        2d74a8:	eb5faf41 	bl	1ac31b4 <TEWorldClient::$UnEscape(unsigned char *, unsigned long *)>
        2d74ac:	e49d0004 	ldr	r0, [sp], #4
        2d74b0:	e1a00100 	mov	r0, r0, lsl #2
        2d74b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d74b8:	006823f0 	streqd	r2, [r8], -#48
    */
}

/**
 * Symbol: EWGetData
 * Address: 002d74bc
 */
void globals::EWGetData() {
    /*
        2d74bc:	e1a0c00d 	mov	ip, sp
        2d74c0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d74c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d74c8:	e1a07001 	mov	r7, r1
        2d74cc:	e1a06002 	mov	r6, r2
        2d74d0:	e1a04003 	mov	r4, r3
        2d74d4:	e59b5004 	ldr	r5, [fp, #4]
        2d74d8:	e59f10ac 	ldr	r1, [pc, #ac]	; 2d758c <EWGetData+0xd0>
        2d74dc:	e3a03000 	mov	r3, #0	; 0x0
        2d74e0:	e3a02000 	mov	r2, #0	; 0x0
        2d74e4:	eb63b362 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d74e8:	eb5f22bc 	bl	1a9ffe0 <$RefToAddress(long)>
        2d74ec:	e1a0a000 	mov	sl, r0
        2d74f0:	e5940000 	ldr	r0, [r4]
        2d74f4:	e5900000 	ldr	r0, [r0]
        2d74f8:	e3100003 	tst	r0, #3	; 0x3
        2d74fc:	01a00140 	moveq	r0, r0, asr #2
        2d7500:	0a000000 	beq	2d7508 <EWGetData+0x4c>
        2d7504:	eb63ab04 	bl	1bc211c <$_RINTError(long)>
        2d7508:	e1a04000 	mov	r4, r0
        2d750c:	e5970000 	ldr	r0, [r7]
        2d7510:	e5900000 	ldr	r0, [r0]
        2d7514:	eb5f22b1 	bl	1a9ffe0 <$RefToAddress(long)>
        2d7518:	e1a07000 	mov	r7, r0
        2d751c:	e5960000 	ldr	r0, [r6]
        2d7520:	e5900000 	ldr	r0, [r0]
        2d7524:	e3100003 	tst	r0, #3	; 0x3
        2d7528:	01a00140 	moveq	r0, r0, asr #2
        2d752c:	0a000000 	beq	2d7534 <EWGetData+0x78>
        2d7530:	eb63aaf9 	bl	1bc211c <$_RINTError(long)>
        2d7534:	e0877000 	add	r7, r7, r0
        2d7538:	e59f0050 	ldr	r0, [pc, #50]	; 2d7590 <EWGetData+0xd4>
        2d753c:	e5900000 	ldr	r0, [r0]
        2d7540:	e5901000 	ldr	r1, [r0]
        2d7544:	e5950000 	ldr	r0, [r5]
        2d7548:	e5900000 	ldr	r0, [r0]
        2d754c:	eb63b337 	bl	1bc4230 <$EQRef__FlT1>
        2d7550:	e3a08002 	mov	r8, #2	; 0x2
        2d7554:	e3a01000 	mov	r1, #0	; 0x0
        2d7558:	e3300000 	teq	r0, #0	; 0x0
        2d755c:	0a00000c 	beq	2d7594 <EWGetData+0xd8>
        2d7560:	e3540004 	cmp	r4, #4	; 0x4
        2d7564:	8a00005b 	bhi	2d76d8 <EWGetData+0x21c>
        2d7568:	e52d1004 	str	r1, [sp, -#4]!
        2d756c:	e2641004 	rsb	r1, r4, #4	; 0x4
        2d7570:	e081100d 	add	r1, r1, sp
        2d7574:	e1a02004 	mov	r2, r4
        2d7578:	e1a00007 	mov	r0, r7
        2d757c:	eb641e74 	bl	1bdef54 <$BlockMove>
        2d7580:	e49d0004 	ldr	r0, [sp], #4
        2d7584:	e1a00100 	mov	r0, r0, lsl #2
        2d7588:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d758c:	006823f0 	streqd	r2, [r8], -#48
        2d7590:	006832c0 	rsbeq	r3, r8, r0, asr #5
        2d7594:	e59f00ac 	ldr	r0, [pc, #ac]	; 2d7648 <EWGetData+0x18c>
        2d7598:	e5900000 	ldr	r0, [r0]
        2d759c:	e5901000 	ldr	r1, [r0]
        2d75a0:	e5950000 	ldr	r0, [r5]
        2d75a4:	e5900000 	ldr	r0, [r0]
        2d75a8:	eb63b320 	bl	1bc4230 <$EQRef__FlT1>
        2d75ac:	e59f9098 	ldr	r9, [pc, #98]	; 2d764c <EWGetData+0x190>
        2d75b0:	e3300000 	teq	r0, #0	; 0x0
        2d75b4:	1a000006 	bne	2d75d4 <EWGetData+0x118>
        2d75b8:	e5990000 	ldr	r0, [r9]
        2d75bc:	e5901000 	ldr	r1, [r0]
        2d75c0:	e5950000 	ldr	r0, [r5]
        2d75c4:	e5900000 	ldr	r0, [r0]
        2d75c8:	eb63b318 	bl	1bc4230 <$EQRef__FlT1>
        2d75cc:	e3300000 	teq	r0, #0	; 0x0
        2d75d0:	0a00001e 	beq	2d7650 <EWGetData+0x194>
        2d75d4:	e0880084 	add	r0, r8, r4, lsl #1
        2d75d8:	eb642ad8 	bl	1be2140 <$NewPtr>
        2d75dc:	e1b06000 	movs	r6, r0
        2d75e0:	0a00003c 	beq	2d76d8 <EWGetData+0x21c>
        2d75e4:	e5990000 	ldr	r0, [r9]
        2d75e8:	e5901000 	ldr	r1, [r0]
        2d75ec:	e5950000 	ldr	r0, [r5]
        2d75f0:	e5900000 	ldr	r0, [r0]
        2d75f4:	eb63b30d 	bl	1bc4230 <$EQRef__FlT1>
        2d75f8:	e3300000 	teq	r0, #0	; 0x0
        2d75fc:	11a01007 	movne	r1, r7
        2d7600:	11a0000a 	movne	r0, sl
        2d7604:	1b5fa260 	blne	1abff8c <TEWorldClient::$DecodeTextCR(char *)>
        2d7608:	e1a03004 	mov	r3, r4
        2d760c:	e1a01006 	mov	r1, r6
        2d7610:	e1a00007 	mov	r0, r7
        2d7614:	e3a02001 	mov	r2, #1	; 0x1
        2d7618:	eb643f59 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        2d761c:	e1a00006 	mov	r0, r6
        2d7620:	eb63b72b 	bl	1bc52d4 <$MakeString(unsigned short const *)>
        2d7624:	eb63aac8 	bl	1bc214c <$AllocateRefHandle(long)>
        2d7628:	e1a04000 	mov	r4, r0
        2d762c:	e1a00006 	mov	r0, r6
        2d7630:	eb64269f 	bl	1be10b4 <$DisposPtr>
        2d7634:	e5945000 	ldr	r5, [r4]
        2d7638:	e1a00004 	mov	r0, r4
        2d763c:	eb63aede 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d7640:	e1a00005 	mov	r0, r5
        2d7644:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d7648:	006848d0 	ldreqd	r4, [r8], -#128
        2d764c:	00682b48 	rsbeq	r2, r8, r8, asr #22
        2d7650:	e59f007c 	ldr	r0, [pc, #7c]	; 2d76d4 <EWGetData+0x218>
        2d7654:	e5900000 	ldr	r0, [r0]
        2d7658:	e5901000 	ldr	r1, [r0]
        2d765c:	e5950000 	ldr	r0, [r5]
        2d7660:	e5900000 	ldr	r0, [r0]
        2d7664:	eb63b2f1 	bl	1bc4230 <$EQRef__FlT1>
        2d7668:	e3300000 	teq	r0, #0	; 0x0
        2d766c:	0a000019 	beq	2d76d8 <EWGetData+0x21c>
        2d7670:	e1a00004 	mov	r0, r4
        2d7674:	eb5f11c8 	bl	1a9bd9c <$MakeArray(long)>
        2d7678:	eb63aab3 	bl	1bc214c <$AllocateRefHandle(long)>
        2d767c:	e1a05000 	mov	r5, r0
        2d7680:	e3a06000 	mov	r6, #0	; 0x0
        2d7684:	e3540000 	cmp	r4, #0	; 0x0
        2d7688:	9a00000c 	bls	2d76c0 <EWGetData+0x204>
        2d768c:	e4d70001 	ldrb	r0, [r7], #1
        2d7690:	e1a00100 	mov	r0, r0, lsl #2
        2d7694:	eb63aaac 	bl	1bc214c <$AllocateRefHandle(long)>
        2d7698:	e1a08000 	mov	r8, r0
        2d769c:	e1a01006 	mov	r1, r6
        2d76a0:	e5902000 	ldr	r2, [r0]
        2d76a4:	e5950000 	ldr	r0, [r5]
        2d76a8:	eb63bb2a 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d76ac:	e1a00008 	mov	r0, r8
        2d76b0:	eb63aec1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d76b4:	e2866001 	add	r6, r6, #1	; 0x1
        2d76b8:	e1560004 	cmp	r6, r4
        2d76bc:	3afffff2 	bcc	2d768c <EWGetData+0x1d0>
        2d76c0:	e5954000 	ldr	r4, [r5]
        2d76c4:	e1a00005 	mov	r0, r5
        2d76c8:	eb63aebb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d76cc:	e1a00004 	mov	r0, r4
        2d76d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d76d4:	00682260 	rsbeq	r2, r8, r0, ror #4
        2d76d8:	e1a00008 	mov	r0, r8
        2d76dc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EWUniAtomHandler
 * Address: 002d76e0
 */
void globals::EWUniAtomHandler() {
    /*
        2d76e0:	e1a0c00d 	mov	ip, sp
        2d76e4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d76e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d76ec:	e1a07003 	mov	r7, r3
        2d76f0:	e59b5008 	ldr	r5, [fp, #8]
        2d76f4:	e59b6004 	ldr	r6, [fp, #4]
        2d76f8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2d76fc:	e59f10c8 	ldr	r1, [pc, #c8]	; 2d77cc <EWUniAtomHandler+0xec>
        2d7700:	e3a03000 	mov	r3, #0	; 0x0
        2d7704:	e3a02000 	mov	r2, #0	; 0x0
        2d7708:	eb63b2d9 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d770c:	eb5f2233 	bl	1a9ffe0 <$RefToAddress(long)>
        2d7710:	e1a04000 	mov	r4, r0
        2d7714:	e5970000 	ldr	r0, [r7]
        2d7718:	e5900000 	ldr	r0, [r0]
        2d771c:	e3100003 	tst	r0, #3	; 0x3
        2d7720:	01a00140 	moveq	r0, r0, asr #2
        2d7724:	0a000000 	beq	2d772c <EWUniAtomHandler+0x4c>
        2d7728:	eb63aa7b 	bl	1bc211c <$_RINTError(long)>
        2d772c:	e1a08000 	mov	r8, r0
        2d7730:	e5960000 	ldr	r0, [r6]
        2d7734:	e5900000 	ldr	r0, [r0]
        2d7738:	e3100003 	tst	r0, #3	; 0x3
        2d773c:	01a00140 	moveq	r0, r0, asr #2
        2d7740:	0a000000 	beq	2d7748 <EWUniAtomHandler+0x68>
        2d7744:	eb63aa74 	bl	1bc211c <$_RINTError(long)>
        2d7748:	e1a06000 	mov	r6, r0
        2d774c:	e5950000 	ldr	r0, [r5]
        2d7750:	e5900000 	ldr	r0, [r0]
        2d7754:	eb5f2221 	bl	1a9ffe0 <$RefToAddress(long)>
        2d7758:	e1a05000 	mov	r5, r0
        2d775c:	e3a07000 	mov	r7, #0	; 0x0
        2d7760:	e3a09002 	mov	r9, #2	; 0x2
        2d7764:	e358000b 	cmp	r8, #11	; 0xb
        2d7768:	0a00000d 	beq	2d77a4 <EWUniAtomHandler+0xc4>
        2d776c:	ca000017 	bgt	2d77d0 <EWUniAtomHandler+0xf0>
        2d7770:	e358000a 	cmp	r8, #10	; 0xa
        2d7774:	908ff108 	addls	pc, pc, r8, lsl #2
        2d7778:	ea0000d2 	b	2d7ac8 <EWUniAtomHandler+0x3e8>
        2d777c:	ea0000c5 	b	2d7a98 <EWUniAtomHandler+0x3b8>
        2d7780:	ea00003b 	b	2d7874 <EWUniAtomHandler+0x194>
        2d7784:	ea000040 	b	2d788c <EWUniAtomHandler+0x1ac>
        2d7788:	ea000047 	b	2d78ac <EWUniAtomHandler+0x1cc>
        2d778c:	ea000049 	b	2d78b8 <EWUniAtomHandler+0x1d8>
        2d7790:	ea00004f 	b	2d78d4 <EWUniAtomHandler+0x1f4>
        2d7794:	ea000058 	b	2d78fc <EWUniAtomHandler+0x21c>
        2d7798:	ea0000ca 	b	2d7ac8 <EWUniAtomHandler+0x3e8>
        2d779c:	ea0000c9 	b	2d7ac8 <EWUniAtomHandler+0x3e8>
        2d77a0:	ea0000c8 	b	2d7ac8 <EWUniAtomHandler+0x3e8>
        2d77a4:	e338000a 	teq	r8, #10	; 0xa
        2d77a8:	1a00006c 	bne	2d7960 <EWUniAtomHandler+0x280>
        2d77ac:	e59402f4 	ldr	r0, [r4, #756]
        2d77b0:	e3300000 	teq	r0, #0	; 0x0
        2d77b4:	03a00002 	moveq	r0, #2	; 0x2
        2d77b8:	058d0000 	streq	r0, [sp]
        2d77bc:	0a0000c1 	beq	2d7ac8 <EWUniAtomHandler+0x3e8>
        2d77c0:	eb6378ba 	bl	1bb5ab0 <$strlen>
        2d77c4:	e1a07000 	mov	r7, r0
        2d77c8:	ea000065 	b	2d7964 <EWUniAtomHandler+0x284>
        2d77cc:	006823f0 	streqd	r2, [r8], -#48
        2d77d0:	e358002d 	cmp	r8, #45	; 0x2d
        2d77d4:	0a0000a9 	beq	2d7a80 <EWUniAtomHandler+0x3a0>
        2d77d8:	ca000011 	bgt	2d7824 <EWUniAtomHandler+0x144>
        2d77dc:	e338000c 	teq	r8, #12	; 0xc
        2d77e0:	059402f4 	ldreq	r0, [r4, #756]
        2d77e4:	058402f8 	streq	r0, [r4, #760]
        2d77e8:	0a0000aa 	beq	2d7a98 <EWUniAtomHandler+0x3b8>
        2d77ec:	e3380015 	teq	r8, #21	; 0x15
        2d77f0:	059402f8 	ldreq	r0, [r4, #760]
        2d77f4:	0a000091 	beq	2d7a40 <EWUniAtomHandler+0x360>
        2d77f8:	e338002a 	teq	r8, #42	; 0x2a
        2d77fc:	1a0000b1 	bne	2d7ac8 <EWUniAtomHandler+0x3e8>
        2d7800:	e59402f4 	ldr	r0, [r4, #756]
        2d7804:	eb6378a9 	bl	1bb5ab0 <$strlen>
        2d7808:	e2800001 	add	r0, r0, #1	; 0x1
        2d780c:	e350001f 	cmp	r0, #31	; 0x1f
        2d7810:	2a00008c 	bcs	2d7a48 <EWUniAtomHandler+0x368>
        2d7814:	e59402f4 	ldr	r0, [r4, #756]
        2d7818:	eb6378a4 	bl	1bb5ab0 <$strlen>
        2d781c:	e2805001 	add	r5, r0, #1	; 0x1
        2d7820:	ea000089 	b	2d7a4c <EWUniAtomHandler+0x36c>
        2d7824:	e3380032 	teq	r8, #50	; 0x32
        2d7828:	059402c0 	ldreq	r0, [r4, #704]
        2d782c:	0a000083 	beq	2d7a40 <EWUniAtomHandler+0x360>
        2d7830:	e3380033 	teq	r8, #51	; 0x33
        2d7834:	0a00003f 	beq	2d7938 <EWUniAtomHandler+0x258>
        2d7838:	e3380034 	teq	r8, #52	; 0x34
        2d783c:	1a0000a1 	bne	2d7ac8 <EWUniAtomHandler+0x3e8>
        2d7840:	e3560002 	cmp	r6, #2	; 0x2
        2d7844:	e59472fc 	ldr	r7, [r4, #764]
        2d7848:	93a02000 	movls	r2, #0	; 0x0
        2d784c:	82462001 	subhi	r2, r6, #1	; 0x1
        2d7850:	e2853002 	add	r3, r5, #2	; 0x2
        2d7854:	e92d000c 	stmdb	sp!, {r2, r3}
        2d7858:	e5d52001 	ldrb	r2, [r5, #1]
        2d785c:	e5d53000 	ldrb	r3, [r5]
        2d7860:	e1a00004 	mov	r0, r4
        2d7864:	e3a01001 	mov	r1, #1	; 0x1
        2d7868:	eb5f9dba 	bl	1abef58 <TEWorldClient::$AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)>
        2d786c:	e28dd008 	add	sp, sp, #8	; 0x8
        2d7870:	ea000048 	b	2d7998 <EWUniAtomHandler+0x2b8>
        2d7874:	e3a00001 	mov	r0, #1	; 0x1
        2d7878:	e5c402bc 	strb	r0, [r4, #700]
        2d787c:	e5940300 	ldr	r0, [r4, #768]
        2d7880:	e2800001 	add	r0, r0, #1	; 0x1
        2d7884:	e5840300 	str	r0, [r4, #768]
        2d7888:	ea000082 	b	2d7a98 <EWUniAtomHandler+0x3b8>
        2d788c:	e5d402bc 	ldrb	r0, [r4, #700]
        2d7890:	e3300000 	teq	r0, #0	; 0x0
        2d7894:	0a00007f 	beq	2d7a98 <EWUniAtomHandler+0x3b8>
        2d7898:	e5940300 	ldr	r0, [r4, #768]
        2d789c:	e2500001 	subs	r0, r0, #1	; 0x1
        2d78a0:	e5840300 	str	r0, [r4, #768]
        2d78a4:	05c472bc 	streqb	r7, [r4, #700]
        2d78a8:	ea00007a 	b	2d7a98 <EWUniAtomHandler+0x3b8>
        2d78ac:	e1a00004 	mov	r0, r4
        2d78b0:	eb5f9dae 	bl	1abef70 <TEWorldClient::$ClearAtomizer(void)>
        2d78b4:	ea000077 	b	2d7a98 <EWUniAtomHandler+0x3b8>
        2d78b8:	e3a03000 	mov	r3, #0	; 0x0
        2d78bc:	e3a02000 	mov	r2, #0	; 0x0
        2d78c0:	e92d000c 	stmdb	sp!, {r2, r3}
        2d78c4:	e5d52001 	ldrb	r2, [r5, #1]
        2d78c8:	e5d53000 	ldrb	r3, [r5]
        2d78cc:	e1a00004 	mov	r0, r4
        2d78d0:	ea000005 	b	2d78ec <EWUniAtomHandler+0x20c>
        2d78d4:	e1a03005 	mov	r3, r5
        2d78d8:	e1a02006 	mov	r2, r6
        2d78dc:	e92d000c 	stmdb	sp!, {r2, r3}
        2d78e0:	e1a00004 	mov	r0, r4
        2d78e4:	e3a03000 	mov	r3, #0	; 0x0
        2d78e8:	e3a02000 	mov	r2, #0	; 0x0
        2d78ec:	e3a01000 	mov	r1, #0	; 0x0
        2d78f0:	eb5f9d98 	bl	1abef58 <TEWorldClient::$AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)>
        2d78f4:	e28dd008 	add	sp, sp, #8	; 0x8
        2d78f8:	ea000066 	b	2d7a98 <EWUniAtomHandler+0x3b8>
        2d78fc:	e3360000 	teq	r6, #0	; 0x0
        2d7900:	0a000008 	beq	2d7928 <EWUniAtomHandler+0x248>
        2d7904:	e1a03005 	mov	r3, r5
        2d7908:	e1a02006 	mov	r2, r6
        2d790c:	e92d000c 	stmdb	sp!, {r2, r3}
        2d7910:	e1a00004 	mov	r0, r4
        2d7914:	e3a03000 	mov	r3, #0	; 0x0
        2d7918:	e3a02000 	mov	r2, #0	; 0x0
        2d791c:	e3a01000 	mov	r1, #0	; 0x0
        2d7920:	eb5f9d8c 	bl	1abef58 <TEWorldClient::$AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)>
        2d7924:	e28dd008 	add	sp, sp, #8	; 0x8
        2d7928:	e1a0200d 	mov	r2, sp
        2d792c:	e1a00004 	mov	r0, r4
        2d7930:	e3a01000 	mov	r1, #0	; 0x0
        2d7934:	ea000040 	b	2d7a3c <EWUniAtomHandler+0x35c>
        2d7938:	e1a03006 	mov	r3, r6
        2d793c:	e92d0008 	stmdb	sp!, {r3}
        2d7940:	e1a02006 	mov	r2, r6
        2d7944:	e1a01005 	mov	r1, r5
        2d7948:	e1a00004 	mov	r0, r4
        2d794c:	e3a03000 	mov	r3, #0	; 0x0
        2d7950:	eb5fa5dc 	bl	1ac10c8 <TEWorldClient::$GetAtomBytes(unsigned char *, unsigned long, unsigned long, unsigned long)>
        2d7954:	e28dd004 	add	sp, sp, #4	; 0x4
        2d7958:	e58402fc 	str	r0, [r4, #764]
        2d795c:	ea00004d 	b	2d7a98 <EWUniAtomHandler+0x3b8>
        2d7960:	e3a07004 	mov	r7, #4	; 0x4
        2d7964:	e3560003 	cmp	r6, #3	; 0x3
        2d7968:	22462001 	subcs	r2, r6, #1	; 0x1
        2d796c:	33a02000 	movcc	r2, #0	; 0x0
        2d7970:	e2853002 	add	r3, r5, #2	; 0x2
        2d7974:	e92d000c 	stmdb	sp!, {r2, r3}
        2d7978:	e5d52001 	ldrb	r2, [r5, #1]
        2d797c:	e5d53000 	ldrb	r3, [r5]
        2d7980:	e1a00004 	mov	r0, r4
        2d7984:	e3a01001 	mov	r1, #1	; 0x1
        2d7988:	eb5f9d72 	bl	1abef58 <TEWorldClient::$AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)>
        2d798c:	e28dd008 	add	sp, sp, #8	; 0x8
        2d7990:	e338000a 	teq	r8, #10	; 0xa
        2d7994:	1a000009 	bne	2d79c0 <EWUniAtomHandler+0x2e0>
        2d7998:	e1a02007 	mov	r2, r7
        2d799c:	e59432f4 	ldr	r3, [r4, #756]
        2d79a0:	e92d000c 	stmdb	sp!, {r2, r3}
        2d79a4:	e1a00004 	mov	r0, r4
        2d79a8:	e3a03000 	mov	r3, #0	; 0x0
        2d79ac:	e3a02000 	mov	r2, #0	; 0x0
        2d79b0:	e3a01001 	mov	r1, #1	; 0x1
        2d79b4:	eb5f9d67 	bl	1abef58 <TEWorldClient::$AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)>
        2d79b8:	e28dd008 	add	sp, sp, #8	; 0x8
        2d79bc:	ea00001b 	b	2d7a30 <EWUniAtomHandler+0x350>
        2d79c0:	e2870001 	add	r0, r7, #1	; 0x1
        2d79c4:	eb6429dd 	bl	1be2140 <$NewPtr>
        2d79c8:	e1b05000 	movs	r5, r0
        2d79cc:	0a000017 	beq	2d7a30 <EWUniAtomHandler+0x350>
        2d79d0:	e59402f4 	ldr	r0, [r4, #756]
        2d79d4:	e58d0004 	str	r0, [sp, #4]
        2d79d8:	e3a00000 	mov	r0, #0	; 0x0
        2d79dc:	e3570000 	cmp	r7, #0	; 0x0
        2d79e0:	9a000007 	bls	2d7a04 <EWUniAtomHandler+0x324>
        2d79e4:	e2671004 	rsb	r1, r7, #4	; 0x4
        2d79e8:	e0812000 	add	r2, r1, r0
        2d79ec:	e28d3004 	add	r3, sp, #4	; 0x4
        2d79f0:	e7d32002 	ldrb	r2, [r3, r2]
        2d79f4:	e7c52000 	strb	r2, [r5, r0]
        2d79f8:	e2800001 	add	r0, r0, #1	; 0x1
        2d79fc:	e1500007 	cmp	r0, r7
        2d7a00:	3afffff8 	bcc	2d79e8 <EWUniAtomHandler+0x308>
        2d7a04:	e1a03005 	mov	r3, r5
        2d7a08:	e1a02007 	mov	r2, r7
        2d7a0c:	e92d000c 	stmdb	sp!, {r2, r3}
        2d7a10:	e1a00004 	mov	r0, r4
        2d7a14:	e3a03000 	mov	r3, #0	; 0x0
        2d7a18:	e3a02000 	mov	r2, #0	; 0x0
        2d7a1c:	e3a01001 	mov	r1, #1	; 0x1
        2d7a20:	eb5f9d4c 	bl	1abef58 <TEWorldClient::$AddToStreamBuffer(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char *)>
        2d7a24:	e28dd008 	add	sp, sp, #8	; 0x8
        2d7a28:	e1a00005 	mov	r0, r5
        2d7a2c:	eb6425a0 	bl	1be10b4 <$DisposPtr>
        2d7a30:	e1a0200d 	mov	r2, sp
        2d7a34:	e1a00004 	mov	r0, r4
        2d7a38:	e3a01001 	mov	r1, #1	; 0x1
        2d7a3c:	eb5fa157 	bl	1abffa0 <TEWorldClient::$DoAtomStreamLocal(unsigned long, unsigned long *)>
        2d7a40:	e58d0008 	str	r0, [sp, #8]
        2d7a44:	ea000013 	b	2d7a98 <EWUniAtomHandler+0x3b8>
        2d7a48:	e3a0501f 	mov	r5, #31	; 0x1f
        2d7a4c:	e1a02005 	mov	r2, r5
        2d7a50:	e59402f4 	ldr	r0, [r4, #756]
        2d7a54:	e59f101c 	ldr	r1, [pc, #1c]	; 2d7a78 <EWUniAtomHandler+0x398>
        2d7a58:	e1a06001 	mov	r6, r1
        2d7a5c:	eb641d3c 	bl	1bdef54 <$BlockMove>
        2d7a60:	e7c67005 	strb	r7, [r6, r5]
        2d7a64:	e28d2008 	add	r2, sp, #8	; 0x8
        2d7a68:	e1a00006 	mov	r0, r6
        2d7a6c:	e28f1f02 	add	r1, pc, #8	; 0x8
        2d7a70:	eb63780a 	bl	1bb5aa0 <$sscanf>
        2d7a74:	ea000007 	b	2d7a98 <EWUniAtomHandler+0x3b8>
        2d7a78:	0c107958 	ldceq	9, cr7, [r0], -#352
        2d7a7c:	25640000 	strcsb	r0, [r4]!
        2d7a80:	e59422f4 	ldr	r2, [r4, #756]
        2d7a84:	e59f0030 	ldr	r0, [pc, #30]	; 2d7abc <EWUniAtomHandler+0x3dc>
        2d7a88:	e1a05000 	mov	r5, r0
        2d7a8c:	e28f1f0b 	add	r1, pc, #44	; 0x2c
        2d7a90:	eb6377ff 	bl	1bb5a94 <$sprintf>
        2d7a94:	e58d5008 	str	r5, [sp, #8]
        2d7a98:	e59d0000 	ldr	r0, [sp]
        2d7a9c:	e3300000 	teq	r0, #0	; 0x0
        2d7aa0:	03a00001 	moveq	r0, #1	; 0x1
        2d7aa4:	058d0000 	streq	r0, [sp]
        2d7aa8:	e59d0000 	ldr	r0, [sp]
        2d7aac:	e58402d0 	str	r0, [r4, #720]
        2d7ab0:	e59d0008 	ldr	r0, [sp, #8]
        2d7ab4:	e5a40304 	str	r0, [r4, #772]!
        2d7ab8:	ea000003 	b	2d7acc <EWUniAtomHandler+0x3ec>
        2d7abc:	0c107978 	ldceq	9, cr7, [r0], -#480
        2d7ac0:	25313064 	ldrcs	r3, [r1, -#100]!
        2d7ac4:	00000000 	andeq	r0, r0, r0
        2d7ac8:	e5a47304 	str	r7, [r4, #772]!
        2d7acc:	e1a00009 	mov	r0, r9
        2d7ad0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: EWDecodePacket
 * Address: 002d7ad4
 */
void globals::EWDecodePacket() {
    /*
        2d7ad4:	e1a0c00d 	mov	ip, sp
        2d7ad8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d7adc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d7ae0:	e1a06001 	mov	r6, r1
        2d7ae4:	e1a05002 	mov	r5, r2
        2d7ae8:	e1a04003 	mov	r4, r3
        2d7aec:	e59b800c 	ldr	r8, [fp, #12]
        2d7af0:	e99b0600 	ldmib	fp, {r9, sl}
        2d7af4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d7af8:	e59f10e8 	ldr	r1, [pc, #e8]	; 2d7be8 <EWDecodePacket+0x114>
        2d7afc:	e3a03000 	mov	r3, #0	; 0x0
        2d7b00:	e3a02000 	mov	r2, #0	; 0x0
        2d7b04:	eb63b1da 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d7b08:	eb5f2134 	bl	1a9ffe0 <$RefToAddress(long)>
        2d7b0c:	e1a07000 	mov	r7, r0
        2d7b10:	e59a0000 	ldr	r0, [sl]
        2d7b14:	e5900000 	ldr	r0, [r0]
        2d7b18:	e3100003 	tst	r0, #3	; 0x3
        2d7b1c:	01a00140 	moveq	r0, r0, asr #2
        2d7b20:	0a000000 	beq	2d7b28 <EWDecodePacket+0x54>
        2d7b24:	eb63a97c 	bl	1bc211c <$_RINTError(long)>
        2d7b28:	e58d0004 	str	r0, [sp, #4]
        2d7b2c:	e5950000 	ldr	r0, [r5]
        2d7b30:	e5900000 	ldr	r0, [r0]
        2d7b34:	e3100003 	tst	r0, #3	; 0x3
        2d7b38:	01a00140 	moveq	r0, r0, asr #2
        2d7b3c:	0a000000 	beq	2d7b44 <EWDecodePacket+0x70>
        2d7b40:	eb63a975 	bl	1bc211c <$_RINTError(long)>
        2d7b44:	e1a05000 	mov	r5, r0
        2d7b48:	e1a01006 	mov	r1, r6
        2d7b4c:	e1a0000d 	mov	r0, sp
        2d7b50:	eb63a560 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d7b54:	e1a0000d 	mov	r0, sp
        2d7b58:	eb63a96d 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2d7b5c:	e0806005 	add	r6, r0, r5
        2d7b60:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d7b64:	e1a0300d 	mov	r3, sp
        2d7b68:	e92d0008 	stmdb	sp!, {r3}
        2d7b6c:	e5980000 	ldr	r0, [r8]
        2d7b70:	e5900000 	ldr	r0, [r0]
        2d7b74:	e3100003 	tst	r0, #3	; 0x3
        2d7b78:	01a00140 	moveq	r0, r0, asr #2
        2d7b7c:	0a000000 	beq	2d7b84 <EWDecodePacket+0xb0>
        2d7b80:	eb63a965 	bl	1bc211c <$_RINTError(long)>
        2d7b84:	e1a03000 	mov	r3, r0
        2d7b88:	e92d0008 	stmdb	sp!, {r3}
        2d7b8c:	e5940000 	ldr	r0, [r4]
        2d7b90:	e5900000 	ldr	r0, [r0]
        2d7b94:	eb5f2111 	bl	1a9ffe0 <$RefToAddress(long)>
        2d7b98:	e1a04000 	mov	r4, r0
        2d7b9c:	e5990000 	ldr	r0, [r9]
        2d7ba0:	e5900000 	ldr	r0, [r0]
        2d7ba4:	e3100003 	tst	r0, #3	; 0x3
        2d7ba8:	01a00140 	moveq	r0, r0, asr #2
        2d7bac:	0a000000 	beq	2d7bb4 <EWDecodePacket+0xe0>
        2d7bb0:	eb63a959 	bl	1bc211c <$_RINTError(long)>
        2d7bb4:	e0842000 	add	r2, r4, r0
        2d7bb8:	e28d3010 	add	r3, sp, #16	; 0x10
        2d7bbc:	e1a01006 	mov	r1, r6
        2d7bc0:	e1a00007 	mov	r0, r7
        2d7bc4:	eb5fa0ef 	bl	1abff88 <TEWorldClient::$DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)>
        2d7bc8:	e5bd0008 	ldr	r0, [sp, #8]!
        2d7bcc:	e0800005 	add	r0, r0, r5
        2d7bd0:	e1a04100 	mov	r4, r0, lsl #2
        2d7bd4:	e28d0004 	add	r0, sp, #4	; 0x4
        2d7bd8:	e3a01000 	mov	r1, #0	; 0x0
        2d7bdc:	eb63a947 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d7be0:	e1a00004 	mov	r0, r4
        2d7be4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d7be8:	006823f0 	streqd	r2, [r8], -#48
    */
}

/**
 * Symbol: EWAllocateFile
 * Address: 002d7bec
 */
void globals::EWAllocateFile() {
    /*
        2d7bec:	e1a0c00d 	mov	ip, sp
        2d7bf0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2d7bf4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d7bf8:	e5910000 	ldr	r0, [r1]
        2d7bfc:	e5900000 	ldr	r0, [r0]
        2d7c00:	e3100003 	tst	r0, #3	; 0x3
        2d7c04:	01a00140 	moveq	r0, r0, asr #2
        2d7c08:	0a000000 	beq	2d7c10 <EWAllocateFile+0x24>
        2d7c0c:	eb63a942 	bl	1bc211c <$_RINTError(long)>
        2d7c10:	e2801001 	add	r1, r0, #1	; 0x1
        2d7c14:	e59f0004 	ldr	r0, [pc, #4]	; 2d7c20 <EWAllocateFile+0x34>
        2d7c18:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        2d7c1c:	ea63a946 	b	1bc213c <$AllocateBinary(RefVar const &, long)>
        2d7c20:	006820d8 	ldreqd	r2, [r8], -#8
    */
}

/**
 * Symbol: EWGetMacHeader
 * Address: 002d7c24
 */
void globals::EWGetMacHeader() {
    /*
        2d7c24:	e1a0c00d 	mov	ip, sp
        2d7c28:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d7c2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d7c30:	e1a05001 	mov	r5, r1
        2d7c34:	e1a04002 	mov	r4, r2
        2d7c38:	e24dd030 	sub	sp, sp, #48	; 0x30
        2d7c3c:	e59f10e8 	ldr	r1, [pc, #e8]	; 2d7d2c <EWGetMacHeader+0x108>
        2d7c40:	e3a03000 	mov	r3, #0	; 0x0
        2d7c44:	e3a02000 	mov	r2, #0	; 0x0
        2d7c48:	eb63b189 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d7c4c:	eb5f20e3 	bl	1a9ffe0 <$RefToAddress(long)>
        2d7c50:	e1a06000 	mov	r6, r0
        2d7c54:	eb63a939 	bl	1bc2140 <$AllocateFrame(void)>
        2d7c58:	eb63a93b 	bl	1bc214c <$AllocateRefHandle(long)>
        2d7c5c:	e58d002c 	str	r0, [sp, #44]
        2d7c60:	e5940000 	ldr	r0, [r4]
        2d7c64:	e5900000 	ldr	r0, [r0]
        2d7c68:	e3100003 	tst	r0, #3	; 0x3
        2d7c6c:	01a00140 	moveq	r0, r0, asr #2
        2d7c70:	0a000000 	beq	2d7c78 <EWGetMacHeader+0x54>
        2d7c74:	eb63a928 	bl	1bc211c <$_RINTError(long)>
        2d7c78:	e58d0008 	str	r0, [sp, #8]
        2d7c7c:	e5950000 	ldr	r0, [r5]
        2d7c80:	e5900000 	ldr	r0, [r0]
        2d7c84:	eb5f20d5 	bl	1a9ffe0 <$RefToAddress(long)>
        2d7c88:	e2800002 	add	r0, r0, #2	; 0x2
        2d7c8c:	e28d3004 	add	r3, sp, #4	; 0x4
        2d7c90:	e3a02020 	mov	r2, #32	; 0x20
        2d7c94:	e92d000c 	stmdb	sp!, {r2, r3}
        2d7c98:	e28d3010 	add	r3, sp, #16	; 0x10
        2d7c9c:	e1a02000 	mov	r2, r0
        2d7ca0:	e28d1014 	add	r1, sp, #20	; 0x14
        2d7ca4:	e1a00006 	mov	r0, r6
        2d7ca8:	eb5fa0b6 	bl	1abff88 <TEWorldClient::$DecodePacket(unsigned char *, unsigned char *, unsigned long *, unsigned long, unsigned long *)>
        2d7cac:	e28dd008 	add	sp, sp, #8	; 0x8
        2d7cb0:	e1a04000 	mov	r4, r0
        2d7cb4:	e3a03004 	mov	r3, #4	; 0x4
        2d7cb8:	e92d0008 	stmdb	sp!, {r3}
        2d7cbc:	e28d3020 	add	r3, sp, #32	; 0x20
        2d7cc0:	e59f2068 	ldr	r2, [pc, #68]	; 2d7d30 <EWGetMacHeader+0x10c>
        2d7cc4:	e28d1030 	add	r1, sp, #48	; 0x30
        2d7cc8:	e1a00006 	mov	r0, r6
        2d7ccc:	eb5fad30 	bl	1ac3194 <TEWorldClient::$SetStrSlot(RefVar const &, RefVar const &, unsigned char *, unsigned long)>
        2d7cd0:	e28dd004 	add	sp, sp, #4	; 0x4
        2d7cd4:	e3a03004 	mov	r3, #4	; 0x4
        2d7cd8:	e92d0008 	stmdb	sp!, {r3}
        2d7cdc:	e28d3024 	add	r3, sp, #36	; 0x24
        2d7ce0:	e59f204c 	ldr	r2, [pc, #4c]	; 2d7d34 <EWGetMacHeader+0x110>
        2d7ce4:	e28d1030 	add	r1, sp, #48	; 0x30
        2d7ce8:	e1a00006 	mov	r0, r6
        2d7cec:	eb5fad28 	bl	1ac3194 <TEWorldClient::$SetStrSlot(RefVar const &, RefVar const &, unsigned char *, unsigned long)>
        2d7cf0:	e28dd004 	add	sp, sp, #4	; 0x4
        2d7cf4:	e1a00104 	mov	r0, r4, lsl #2
        2d7cf8:	eb63a913 	bl	1bc214c <$AllocateRefHandle(long)>
        2d7cfc:	e58d0000 	str	r0, [sp]
        2d7d00:	e1a0200d 	mov	r2, sp
        2d7d04:	e59f102c 	ldr	r1, [pc, #2c]	; 2d7d38 <EWGetMacHeader+0x114>
        2d7d08:	e28d002c 	add	r0, sp, #44	; 0x2c
        2d7d0c:	eb63b995 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d7d10:	e59d0000 	ldr	r0, [sp]
        2d7d14:	eb63ad28 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d7d18:	e59d002c 	ldr	r0, [sp, #44]
        2d7d1c:	e5904000 	ldr	r4, [r0]
        2d7d20:	eb63ad25 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d7d24:	e1a00004 	mov	r0, r4
        2d7d28:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2d7d2c:	006823f0 	streqd	r2, [r8], -#48
        2d7d30:	00684cb0 	streqh	r4, [r8], -#192
        2d7d34:	006826b8 	streqh	r2, [r8], -#104
        2d7d38:	00683500 	rsbeq	r3, r8, r0, lsl #10
    */
}

/**
 * Symbol: EWLoadPackage
 * Address: 002d7d3c
 */
void globals::EWLoadPackage() {
    /*
        2d7d3c:	e1a0c00d 	mov	ip, sp
        2d7d40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d7d44:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d7d48:	e1a05001 	mov	r5, r1
        2d7d4c:	e1a04002 	mov	r4, r2
        2d7d50:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        2d7d54:	e28d002c 	add	r0, sp, #44	; 0x2c
        2d7d58:	eb642d19 	bl	1be31c4 <CBufferPipe::$__ct(void)>
        2d7d5c:	e59f00f4 	ldr	r0, [pc, #f4]	; 2d7e58 <EWLoadPackage+0x11c>
        2d7d60:	e58d002c 	str	r0, [sp, #44]
        2d7d64:	e28d0004 	add	r0, sp, #4	; 0x4
        2d7d68:	eb643125 	bl	1be4204 <CBufferSegment::$__ct(void)>
        2d7d6c:	e1a01005 	mov	r1, r5
        2d7d70:	e1a0000d 	mov	r0, sp
        2d7d74:	eb63a4d7 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d7d78:	e1a0000d 	mov	r0, sp
        2d7d7c:	eb63a8e4 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2d7d80:	e1a05000 	mov	r5, r0
        2d7d84:	e5940000 	ldr	r0, [r4]
        2d7d88:	e5900000 	ldr	r0, [r0]
        2d7d8c:	e3100003 	tst	r0, #3	; 0x3
        2d7d90:	01a00140 	moveq	r0, r0, asr #2
        2d7d94:	0a000000 	beq	2d7d9c <EWLoadPackage+0x60>
        2d7d98:	eb63a8df 	bl	1bc211c <$_RINTError(long)>
        2d7d9c:	e3e03000 	mvn	r3, #0	; 0x0
        2d7da0:	e3a02000 	mov	r2, #0	; 0x0
        2d7da4:	e92d000c 	stmdb	sp!, {r2, r3}
        2d7da8:	e2802001 	add	r2, r0, #1	; 0x1
        2d7dac:	e1a01005 	mov	r1, r5
        2d7db0:	e28d000c 	add	r0, sp, #12	; 0xc
        2d7db4:	e3a03000 	mov	r3, #0	; 0x0
        2d7db8:	eb6445bb 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        2d7dbc:	e28dd008 	add	sp, sp, #8	; 0x8
        2d7dc0:	e28d1004 	add	r1, sp, #4	; 0x4
        2d7dc4:	e28d002c 	add	r0, sp, #44	; 0x2c
        2d7dc8:	e3a03000 	mov	r3, #0	; 0x0
        2d7dcc:	e3a02000 	mov	r2, #0	; 0x0
        2d7dd0:	eb6445af 	bl	1be9494 <CBufferPipe::$Init(CBufferSegment *, CBufferSegment *, unsigned char)>
        2d7dd4:	e28d0004 	add	r0, sp, #4	; 0x4
        2d7dd8:	e59d1004 	ldr	r1, [sp, #4]
        2d7ddc:	e1a0e00f 	mov	lr, pc
        2d7de0:	e281f028 	add	pc, r1, #40	; 0x28
        2d7de4:	e3a00000 	mov	r0, #0	; 0x0
        2d7de8:	e52d006c 	str	r0, [sp, -#108]!
        2d7dec:	e28d0008 	add	r0, sp, #8	; 0x8
        2d7df0:	eb636adf 	bl	1bb2974 <$setjmp>
        2d7df4:	e3300000 	teq	r0, #0	; 0x0
        2d7df8:	1a000018 	bne	2d7e60 <EWLoadPackage+0x124>
        2d7dfc:	e1a0000d 	mov	r0, sp
        2d7e00:	eb64209d 	bl	1be007c <$AddExceptionHandler>
        2d7e04:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d7e08:	e3a00002 	mov	r0, #2	; 0x2
        2d7e0c:	eb63a8ce 	bl	1bc214c <$AllocateRefHandle(long)>
        2d7e10:	e58d0000 	str	r0, [sp]
        2d7e14:	e1a0400d 	mov	r4, sp
        2d7e18:	e59f003c 	ldr	r0, [pc, #3c]	; 2d7e5c <EWLoadPackage+0x120>
        2d7e1c:	eb64a07e 	bl	1c0001c <$NSCallGlobalFn(RefVar const &)>
        2d7e20:	eb63a8c9 	bl	1bc214c <$AllocateRefHandle(long)>
        2d7e24:	e58d0004 	str	r0, [sp, #4]
        2d7e28:	e28d1004 	add	r1, sp, #4	; 0x4
        2d7e2c:	e28d00a0 	add	r0, sp, #160	; 0xa0
        2d7e30:	e3a03000 	mov	r3, #0	; 0x0
        2d7e34:	e1a02004 	mov	r2, r4
        2d7e38:	eb64a499 	bl	1c010a4 <$NewPackage__FP5CPipeRC6RefVarT2Ul>
        2d7e3c:	e1a06000 	mov	r6, r0
        2d7e40:	e59d0000 	ldr	r0, [sp]
        2d7e44:	eb63acdc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d7e48:	e59d0004 	ldr	r0, [sp, #4]
        2d7e4c:	eb63acda 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d7e50:	e28dd008 	add	sp, sp, #8	; 0x8
        2d7e54:	ea00000a 	b	2d7e84 <EWLoadPackage+0x148>
        2d7e58:	0001b0b0 	streqh	fp, [r1], -r0
        2d7e5c:	00682f90 	streqb	r2, [r8], -#240
        2d7e60:	e59d0060 	ldr	r0, [sp, #96]
        2d7e64:	e59f1058 	ldr	r1, [pc, #58]	; 2d7ec4 <EWLoadPackage+0x188>
        2d7e68:	e5911000 	ldr	r1, [r1]
        2d7e6c:	eb642cc8 	bl	1be3194 <$Subexception>
        2d7e70:	e3300000 	teq	r0, #0	; 0x0
        2d7e74:	159d6064 	ldrne	r6, [sp, #100]
        2d7e78:	1a000001 	bne	2d7e84 <EWLoadPackage+0x148>
        2d7e7c:	e1a0000d 	mov	r0, sp
        2d7e80:	eb6428b3 	bl	1be2154 <$NextHandler>
        2d7e84:	e1a0000d 	mov	r0, sp
        2d7e88:	eb64248a 	bl	1be10b8 <$ExitHandler>
        2d7e8c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2d7e90:	e1a0000d 	mov	r0, sp
        2d7e94:	e3a01000 	mov	r1, #0	; 0x0
        2d7e98:	eb63a898 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d7e9c:	e28d0004 	add	r0, sp, #4	; 0x4
        2d7ea0:	e3a01000 	mov	r1, #0	; 0x0
        2d7ea4:	e1a0e00f 	mov	lr, pc
        2d7ea8:	e59df004 	ldr	pc, [sp, #4]
        2d7eac:	e28d002c 	add	r0, sp, #44	; 0x2c
        2d7eb0:	e3a01000 	mov	r1, #0	; 0x0
        2d7eb4:	e1a0e00f 	mov	lr, pc
        2d7eb8:	e59df02c 	ldr	pc, [sp, #44]
        2d7ebc:	e1a00006 	mov	r0, r6
        2d7ec0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2d7ec4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: EWFrameToFile
 * Address: 002d7ec8
 */
void globals::EWFrameToFile() {
    /*
        2d7ec8:	e1a0c00d 	mov	ip, sp
        2d7ecc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2d7ed0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d7ed4:	e1a04001 	mov	r4, r1
        2d7ed8:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        2d7edc:	e28d002c 	add	r0, sp, #44	; 0x2c
        2d7ee0:	eb642cb7 	bl	1be31c4 <CBufferPipe::$__ct(void)>
        2d7ee4:	e59f0164 	ldr	r0, [pc, #164]	; 2d8050 <EWFrameToFile+0x188>
        2d7ee8:	e58d002c 	str	r0, [sp, #44]
        2d7eec:	e28d0004 	add	r0, sp, #4	; 0x4
        2d7ef0:	eb6430c3 	bl	1be4204 <CBufferSegment::$__ct(void)>
        2d7ef4:	e3a00002 	mov	r0, #2	; 0x2
        2d7ef8:	eb63a893 	bl	1bc214c <$AllocateRefHandle(long)>
        2d7efc:	e58d0000 	str	r0, [sp]
        2d7f00:	e28d2004 	add	r2, sp, #4	; 0x4
        2d7f04:	e28d002c 	add	r0, sp, #44	; 0x2c
        2d7f08:	e3a03000 	mov	r3, #0	; 0x0
        2d7f0c:	e3a01000 	mov	r1, #0	; 0x0
        2d7f10:	eb64455f 	bl	1be9494 <CBufferPipe::$Init(CBufferSegment *, CBufferSegment *, unsigned char)>
        2d7f14:	e24dd028 	sub	sp, sp, #40	; 0x28
        2d7f18:	e28d2054 	add	r2, sp, #84	; 0x54
        2d7f1c:	e1a01004 	mov	r1, r4
        2d7f20:	e1a0000d 	mov	r0, sp
        2d7f24:	e3a03000 	mov	r3, #0	; 0x0
        2d7f28:	eb63a46f 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
        2d7f2c:	e3a09000 	mov	r9, #0	; 0x0
        2d7f30:	e52d906c 	str	r9, [sp, -#108]!
        2d7f34:	e28d0008 	add	r0, sp, #8	; 0x8
        2d7f38:	eb636a8d 	bl	1bb2974 <$setjmp>
        2d7f3c:	e3300000 	teq	r0, #0	; 0x0
        2d7f40:	1a0000b5 	bne	2d821c <EWFrameToFile+0x354>
        2d7f44:	e1a0000d 	mov	r0, sp
        2d7f48:	eb64204b 	bl	1be007c <$AddExceptionHandler>
        2d7f4c:	e28d006c 	add	r0, sp, #108	; 0x6c
        2d7f50:	eb5de243 	bl	1a50864 <TObjectWriter::$SetCompressLargeBinaries(void)>
        2d7f54:	e28d006c 	add	r0, sp, #108	; 0x6c
        2d7f58:	eb63b905 	bl	1bc6374 <TObjectWriter::$Size(void)>
        2d7f5c:	e1a05000 	mov	r5, r0
        2d7f60:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d7f64:	e3a00002 	mov	r0, #2	; 0x2
        2d7f68:	eb63a877 	bl	1bc214c <$AllocateRefHandle(long)>
        2d7f6c:	e58d0000 	str	r0, [sp]
        2d7f70:	eb63b0bd 	bl	1bc426c <$GetStores(void)>
        2d7f74:	eb63a874 	bl	1bc214c <$AllocateRefHandle(long)>
        2d7f78:	e1a04000 	mov	r4, r0
        2d7f7c:	e2857b05 	add	r7, r5, #5120	; 0x1400
        2d7f80:	e3a06000 	mov	r6, #0	; 0x0
        2d7f84:	e5900000 	ldr	r0, [r0]
        2d7f88:	eb63b4c7 	bl	1bc52ac <$Length(long)>
        2d7f8c:	e3a0a002 	mov	sl, #2	; 0x2
        2d7f90:	e3500000 	cmp	r0, #0	; 0x0
        2d7f94:	da00001b 	ble	2d8008 <EWFrameToFile+0x140>
        2d7f98:	e1a01006 	mov	r1, r6
        2d7f9c:	e5940000 	ldr	r0, [r4]
        2d7fa0:	eb63b0ab 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d7fa4:	e59d1000 	ldr	r1, [sp]
        2d7fa8:	e5810000 	str	r0, [r1]
        2d7fac:	e1a0000d 	mov	r0, sp
        2d7fb0:	eb63c119 	bl	1bc841c <$StoreTotalSize>
        2d7fb4:	e3100003 	tst	r0, #3	; 0x3
        2d7fb8:	01a00140 	moveq	r0, r0, asr #2
        2d7fbc:	0a000000 	beq	2d7fc4 <EWFrameToFile+0xfc>
        2d7fc0:	eb63a855 	bl	1bc211c <$_RINTError(long)>
        2d7fc4:	e1a08000 	mov	r8, r0
        2d7fc8:	e1a0000d 	mov	r0, sp
        2d7fcc:	eb63c114 	bl	1bc8424 <$StoreUsedSize>
        2d7fd0:	e3100003 	tst	r0, #3	; 0x3
        2d7fd4:	01a00140 	moveq	r0, r0, asr #2
        2d7fd8:	0a000000 	beq	2d7fe0 <EWFrameToFile+0x118>
        2d7fdc:	eb63a84e 	bl	1bc211c <$_RINTError(long)>
        2d7fe0:	e0480000 	sub	r0, r8, r0
        2d7fe4:	e1500007 	cmp	r0, r7
        2d7fe8:	aa000006 	bge	2d8008 <EWFrameToFile+0x140>
        2d7fec:	e59d0000 	ldr	r0, [sp]
        2d7ff0:	e2866001 	add	r6, r6, #1	; 0x1
        2d7ff4:	e580a000 	str	sl, [r0]
        2d7ff8:	e5940000 	ldr	r0, [r4]
        2d7ffc:	eb63b4aa 	bl	1bc52ac <$Length(long)>
        2d8000:	e1500006 	cmp	r0, r6
        2d8004:	caffffe3 	bgt	2d7f98 <EWFrameToFile+0xd0>
        2d8008:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d800c:	e59d0004 	ldr	r0, [sp, #4]
        2d8010:	e5900000 	ldr	r0, [r0]
        2d8014:	e59f6038 	ldr	r6, [pc, #38]	; 2d8054 <EWFrameToFile+0x18c>
        2d8018:	e3300002 	teq	r0, #2	; 0x2
        2d801c:	0a00000d 	beq	2d8058 <EWFrameToFile+0x190>
        2d8020:	e1a00105 	mov	r0, r5, lsl #2
        2d8024:	eb63a848 	bl	1bc214c <$AllocateRefHandle(long)>
        2d8028:	e58d0000 	str	r0, [sp]
        2d802c:	e1a0200d 	mov	r2, sp
        2d8030:	e1a01006 	mov	r1, r6
        2d8034:	e28d0004 	add	r0, sp, #4	; 0x4
        2d8038:	ebf8a07d 	bl	100234 <FLBAlloc>
        2d803c:	e59d109c 	ldr	r1, [sp, #156]
        2d8040:	e5810000 	str	r0, [r1]
        2d8044:	e59d0000 	ldr	r0, [sp]
        2d8048:	eb63ac5b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d804c:	ea000006 	b	2d806c <EWFrameToFile+0x1a4>
        2d8050:	0001b0b0 	streqh	fp, [r1], -r0
        2d8054:	006820d8 	ldreqd	r2, [r8], -#8
        2d8058:	e1a01005 	mov	r1, r5
        2d805c:	e1a00006 	mov	r0, r6
        2d8060:	eb63a835 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        2d8064:	e59d109c 	ldr	r1, [sp, #156]
        2d8068:	e5810000 	str	r0, [r1]
        2d806c:	e59d009c 	ldr	r0, [sp, #156]
        2d8070:	e5900000 	ldr	r0, [r0]
        2d8074:	e3300002 	teq	r0, #2	; 0x2
        2d8078:	1a000012 	bne	2d80c8 <EWFrameToFile+0x200>
        2d807c:	e1a00004 	mov	r0, r4
        2d8080:	eb63ac4d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d8084:	e59d0004 	ldr	r0, [sp, #4]
        2d8088:	eb63ac4b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d808c:	e28d0074 	add	r0, sp, #116	; 0x74
        2d8090:	e3a01000 	mov	r1, #0	; 0x0
        2d8094:	eb5dd9b3 	bl	1a4e768 <TObjectWriter::$__dt(void)>
        2d8098:	e59d009c 	ldr	r0, [sp, #156]
        2d809c:	eb63ac46 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d80a0:	e28d00a0 	add	r0, sp, #160	; 0xa0
        2d80a4:	e3a01000 	mov	r1, #0	; 0x0
        2d80a8:	e1a0e00f 	mov	lr, pc
        2d80ac:	e59df0a0 	ldr	pc, [sp, #160]
        2d80b0:	e28d00c8 	add	r0, sp, #200	; 0xc8
        2d80b4:	e3a01000 	mov	r1, #0	; 0x0
        2d80b8:	e1a0e00f 	mov	lr, pc
        2d80bc:	e59df0c8 	ldr	pc, [sp, #200]
        2d80c0:	e1a0000a 	mov	r0, sl
        2d80c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d80c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d80cc:	e28d10a0 	add	r1, sp, #160	; 0xa0
        2d80d0:	e1a0000d 	mov	r0, sp
        2d80d4:	eb63a3ff 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d80d8:	e1a0000d 	mov	r0, sp
        2d80dc:	eb63a80c 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2d80e0:	e1a06000 	mov	r6, r0
        2d80e4:	e52d906c 	str	r9, [sp, -#108]!
        2d80e8:	e28d0008 	add	r0, sp, #8	; 0x8
        2d80ec:	eb636a20 	bl	1bb2974 <$setjmp>
        2d80f0:	e3300000 	teq	r0, #0	; 0x0
        2d80f4:	1a00000d 	bne	2d8130 <EWFrameToFile+0x268>
        2d80f8:	e1a0000d 	mov	r0, sp
        2d80fc:	eb641fde 	bl	1be007c <$AddExceptionHandler>
        2d8100:	e3e03000 	mvn	r3, #0	; 0x0
        2d8104:	e3a02000 	mov	r2, #0	; 0x0
        2d8108:	e92d000c 	stmdb	sp!, {r2, r3}
        2d810c:	e1a02005 	mov	r2, r5
        2d8110:	e1a01006 	mov	r1, r6
        2d8114:	e28d0f46 	add	r0, sp, #280	; 0x118
        2d8118:	e3a03000 	mov	r3, #0	; 0x0
        2d811c:	eb6444e2 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        2d8120:	e28dd008 	add	sp, sp, #8	; 0x8
        2d8124:	e28d00e4 	add	r0, sp, #228	; 0xe4
        2d8128:	eb63c0d3 	bl	1bc847c <TObjectWriter::$Write(void)>
        2d812c:	ea000006 	b	2d814c <EWFrameToFile+0x284>
        2d8130:	e59d0060 	ldr	r0, [sp, #96]
        2d8134:	e59f10d4 	ldr	r1, [pc, #d4]	; 2d8210 <EWFrameToFile+0x348>
        2d8138:	e5911000 	ldr	r1, [r1]
        2d813c:	eb642c14 	bl	1be3194 <$Subexception>
        2d8140:	e3300000 	teq	r0, #0	; 0x0
        2d8144:	01a0000d 	moveq	r0, sp
        2d8148:	0b642801 	bleq	1be2154 <$NextHandler>
        2d814c:	e1a0000d 	mov	r0, sp
        2d8150:	eb6423d8 	bl	1be10b8 <$ExitHandler>
        2d8154:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2d8158:	e1a0000d 	mov	r0, sp
        2d815c:	e3a01000 	mov	r1, #0	; 0x0
        2d8160:	eb63a7e6 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d8164:	e28dd008 	add	sp, sp, #8	; 0x8
        2d8168:	e1a00004 	mov	r0, r4
        2d816c:	eb63ac12 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d8170:	e59d0000 	ldr	r0, [sp]
        2d8174:	eb63ac10 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d8178:	e28dd004 	add	sp, sp, #4	; 0x4
        2d817c:	e1a0000d 	mov	r0, sp
        2d8180:	eb6423cc 	bl	1be10b8 <$ExitHandler>
        2d8184:	e28dd064 	add	sp, sp, #100	; 0x64
        2d8188:	eb63a7ec 	bl	1bc2140 <$AllocateFrame(void)>
        2d818c:	eb63a7ee 	bl	1bc214c <$AllocateRefHandle(long)>
        2d8190:	e58d0004 	str	r0, [sp, #4]
        2d8194:	e28d2030 	add	r2, sp, #48	; 0x30
        2d8198:	e59f1074 	ldr	r1, [pc, #74]	; 2d8214 <EWFrameToFile+0x34c>
        2d819c:	e28d0004 	add	r0, sp, #4	; 0x4
        2d81a0:	eb63b870 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d81a4:	e1a00105 	mov	r0, r5, lsl #2
        2d81a8:	eb63a7e7 	bl	1bc214c <$AllocateRefHandle(long)>
        2d81ac:	e58d0000 	str	r0, [sp]
        2d81b0:	e1a0200d 	mov	r2, sp
        2d81b4:	e59f105c 	ldr	r1, [pc, #5c]	; 2d8218 <EWFrameToFile+0x350>
        2d81b8:	e28d0004 	add	r0, sp, #4	; 0x4
        2d81bc:	eb63b869 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d81c0:	e59d0000 	ldr	r0, [sp]
        2d81c4:	eb63abfc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d81c8:	e59d0004 	ldr	r0, [sp, #4]
        2d81cc:	e5904000 	ldr	r4, [r0]
        2d81d0:	eb63abf9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d81d4:	e28d0008 	add	r0, sp, #8	; 0x8
        2d81d8:	e3a01000 	mov	r1, #0	; 0x0
        2d81dc:	eb5dd961 	bl	1a4e768 <TObjectWriter::$__dt(void)>
        2d81e0:	e59d0030 	ldr	r0, [sp, #48]
        2d81e4:	eb63abf4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d81e8:	e28d0034 	add	r0, sp, #52	; 0x34
        2d81ec:	e3a01000 	mov	r1, #0	; 0x0
        2d81f0:	e1a0e00f 	mov	lr, pc
        2d81f4:	e59df034 	ldr	pc, [sp, #52]
        2d81f8:	e28d005c 	add	r0, sp, #92	; 0x5c
        2d81fc:	e3a01000 	mov	r1, #0	; 0x0
        2d8200:	e1a0e00f 	mov	lr, pc
        2d8204:	e59df05c 	ldr	pc, [sp, #92]
        2d8208:	e1a00004 	mov	r0, r4
        2d820c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2d8210:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        2d8214:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        2d8218:	00682d70 	rsbeq	r2, r8, r0, ror sp
        2d821c:	e28d006c 	add	r0, sp, #108	; 0x6c
        2d8220:	e3a01000 	mov	r1, #0	; 0x0
        2d8224:	eb5dd94f 	bl	1a4e768 <TObjectWriter::$__dt(void)>
        2d8228:	e1a0000d 	mov	r0, sp
        2d822c:	eb6427c8 	bl	1be2154 <$NextHandler>
        2d8230:	eafffff9 	b	2d821c <EWFrameToFile+0x354>
    */
}

/**
 * Symbol: EWFileToFrame
 * Address: 002d8260
 */
void globals::EWFileToFrame() {
    /*
        2d8260:	e1a0c00d 	mov	ip, sp
        2d8264:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d8268:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d826c:	e1a05001 	mov	r5, r1
        2d8270:	e1a04002 	mov	r4, r2
        2d8274:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        2d8278:	e28d002c 	add	r0, sp, #44	; 0x2c
        2d827c:	eb642bd0 	bl	1be31c4 <CBufferPipe::$__ct(void)>
        2d8280:	e59f00d8 	ldr	r0, [pc, #d8]	; 2d8360 <EWFileToFrame+0x100>
        2d8284:	e58d002c 	str	r0, [sp, #44]
        2d8288:	e28d0004 	add	r0, sp, #4	; 0x4
        2d828c:	eb642fdc 	bl	1be4204 <CBufferSegment::$__ct(void)>
        2d8290:	e3a00002 	mov	r0, #2	; 0x2
        2d8294:	eb63a7ac 	bl	1bc214c <$AllocateRefHandle(long)>
        2d8298:	e1a06000 	mov	r6, r0
        2d829c:	e5940000 	ldr	r0, [r4]
        2d82a0:	e5900000 	ldr	r0, [r0]
        2d82a4:	e3100003 	tst	r0, #3	; 0x3
        2d82a8:	01a00140 	moveq	r0, r0, asr #2
        2d82ac:	0a000000 	beq	2d82b4 <EWFileToFrame+0x54>
        2d82b0:	eb63a799 	bl	1bc211c <$_RINTError(long)>
        2d82b4:	e1a04000 	mov	r4, r0
        2d82b8:	e1a01005 	mov	r1, r5
        2d82bc:	e1a0000d 	mov	r0, sp
        2d82c0:	eb63a384 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        2d82c4:	e1a0000d 	mov	r0, sp
        2d82c8:	eb63a791 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2d82cc:	e3e03000 	mvn	r3, #0	; 0x0
        2d82d0:	e3a02000 	mov	r2, #0	; 0x0
        2d82d4:	e92d000c 	stmdb	sp!, {r2, r3}
        2d82d8:	e2842001 	add	r2, r4, #1	; 0x1
        2d82dc:	e1a01000 	mov	r1, r0
        2d82e0:	e28d000c 	add	r0, sp, #12	; 0xc
        2d82e4:	e3a03000 	mov	r3, #0	; 0x0
        2d82e8:	eb64446f 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        2d82ec:	e28dd008 	add	sp, sp, #8	; 0x8
        2d82f0:	e28d1004 	add	r1, sp, #4	; 0x4
        2d82f4:	e28d002c 	add	r0, sp, #44	; 0x2c
        2d82f8:	e3a03000 	mov	r3, #0	; 0x0
        2d82fc:	e3a02000 	mov	r2, #0	; 0x0
        2d8300:	eb644463 	bl	1be9494 <CBufferPipe::$Init(CBufferSegment *, CBufferSegment *, unsigned char)>
        2d8304:	e28d0004 	add	r0, sp, #4	; 0x4
        2d8308:	e59d1004 	ldr	r1, [sp, #4]
        2d830c:	e1a0e00f 	mov	lr, pc
        2d8310:	e281f028 	add	pc, r1, #40	; 0x28
        2d8314:	e24dd014 	sub	sp, sp, #20	; 0x14
        2d8318:	eb602fbe 	bl	1ae4218 <$GetIOBoxStore(void)>
        2d831c:	eb63a78a 	bl	1bc214c <$AllocateRefHandle(long)>
        2d8320:	e58d0010 	str	r0, [sp, #16]
        2d8324:	e28d2010 	add	r2, sp, #16	; 0x10
        2d8328:	e28d1040 	add	r1, sp, #64	; 0x40
        2d832c:	e1a0000d 	mov	r0, sp
        2d8330:	eb5dd90f 	bl	1a4e774 <TObjectReader::$__ct(CPipe &, RefVar const &)>
        2d8334:	e3a00000 	mov	r0, #0	; 0x0
        2d8338:	e52d006c 	str	r0, [sp, -#108]!
        2d833c:	e28d0008 	add	r0, sp, #8	; 0x8
        2d8340:	eb63698b 	bl	1bb2974 <$setjmp>
        2d8344:	e3300000 	teq	r0, #0	; 0x0
        2d8348:	1a000005 	bne	2d8364 <EWFileToFrame+0x104>
        2d834c:	e1a0000d 	mov	r0, sp
        2d8350:	eb641f49 	bl	1be007c <$AddExceptionHandler>
        2d8354:	e28d006c 	add	r0, sp, #108	; 0x6c
        2d8358:	eb63b7eb 	bl	1bc630c <TObjectReader::$Read(void)>
        2d835c:	ea000007 	b	2d8380 <EWFileToFrame+0x120>
        2d8360:	0001b0b0 	streqh	fp, [r1], -r0
        2d8364:	e59d0060 	ldr	r0, [sp, #96]
        2d8368:	e59f1018 	ldr	r1, [pc, #18]	; 2d8388 <EWFileToFrame+0x128>
        2d836c:	e5911000 	ldr	r1, [r1]
        2d8370:	eb642b87 	bl	1be3194 <$Subexception>
        2d8374:	e3300000 	teq	r0, #0	; 0x0
        2d8378:	0a000003 	beq	2d838c <EWFileToFrame+0x12c>
        2d837c:	e3a00002 	mov	r0, #2	; 0x2
        2d8380:	e5860000 	str	r0, [r6]
        2d8384:	ea000002 	b	2d8394 <EWFileToFrame+0x134>
        2d8388:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        2d838c:	e1a0000d 	mov	r0, sp
        2d8390:	eb64276f 	bl	1be2154 <$NextHandler>
        2d8394:	e1a0000d 	mov	r0, sp
        2d8398:	eb642346 	bl	1be10b8 <$ExitHandler>
        2d839c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2d83a0:	e1a0000d 	mov	r0, sp
        2d83a4:	e3a01000 	mov	r1, #0	; 0x0
        2d83a8:	e5964000 	ldr	r4, [r6]
        2d83ac:	eb5dd8ef 	bl	1a4e770 <TObjectReader::$__dt(void)>
        2d83b0:	e59d0010 	ldr	r0, [sp, #16]
        2d83b4:	eb63ab80 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d83b8:	e28d0014 	add	r0, sp, #20	; 0x14
        2d83bc:	e3a01000 	mov	r1, #0	; 0x0
        2d83c0:	eb63a74e 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2d83c4:	e1a00006 	mov	r0, r6
        2d83c8:	eb63ab7b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d83cc:	e28d0018 	add	r0, sp, #24	; 0x18
        2d83d0:	e3a01000 	mov	r1, #0	; 0x0
        2d83d4:	e1a0e00f 	mov	lr, pc
        2d83d8:	e59df018 	ldr	pc, [sp, #24]
        2d83dc:	e28d0040 	add	r0, sp, #64	; 0x40
        2d83e0:	e3a01000 	mov	r1, #0	; 0x0
        2d83e4:	e1a0e00f 	mov	lr, pc
        2d83e8:	e59df040 	ldr	pc, [sp, #64]
        2d83ec:	e1a00004 	mov	r0, r4
        2d83f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: EWUploadFile
 * Address: 002d83f4
 */
void globals::EWUploadFile() {
    /*
        2d83f4:	e1a0c00d 	mov	ip, sp
        2d83f8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d83fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d8400:	e1a06001 	mov	r6, r1
        2d8404:	e1a05002 	mov	r5, r2
        2d8408:	e1a04003 	mov	r4, r3
        2d840c:	e59b8008 	ldr	r8, [fp, #8]
        2d8410:	e59b9004 	ldr	r9, [fp, #4]
        2d8414:	e59f1060 	ldr	r1, [pc, #60]	; 2d847c <EWUploadFile+0x88>
        2d8418:	e3a03000 	mov	r3, #0	; 0x0
        2d841c:	e3a02000 	mov	r2, #0	; 0x0
        2d8420:	eb63af93 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d8424:	eb5f1eed 	bl	1a9ffe0 <$RefToAddress(long)>
        2d8428:	e1a07000 	mov	r7, r0
        2d842c:	e1a03008 	mov	r3, r8
        2d8430:	e1a02009 	mov	r2, r9
        2d8434:	e92d000c 	stmdb	sp!, {r2, r3}
        2d8438:	e5950000 	ldr	r0, [r5]
        2d843c:	e5900000 	ldr	r0, [r0]
        2d8440:	e3100003 	tst	r0, #3	; 0x3
        2d8444:	01a00140 	moveq	r0, r0, asr #2
        2d8448:	0a000000 	beq	2d8450 <EWUploadFile+0x5c>
        2d844c:	eb63a732 	bl	1bc211c <$_RINTError(long)>
        2d8450:	e1a02000 	mov	r2, r0
        2d8454:	e1a03004 	mov	r3, r4
        2d8458:	e1a01006 	mov	r1, r6
        2d845c:	e1a00007 	mov	r0, r7
        2d8460:	eb5fab56 	bl	1ac31c0 <TEWorldClient::$UploadFile(RefVar const &, unsigned long, RefVar const &, RefVar const &, RefVar const &)>
        2d8464:	e28dd008 	add	sp, sp, #8	; 0x8
        2d8468:	e5b702a8 	ldr	r0, [r7, #680]!
        2d846c:	e3300000 	teq	r0, #0	; 0x0
        2d8470:	03a00002 	moveq	r0, #2	; 0x2
        2d8474:	11a00100 	movne	r0, r0, lsl #2
        2d8478:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2d847c:	006823f0 	streqd	r2, [r8], -#48
    */
}

/**
 * Symbol: EWConnectToHost
 * Address: 002d8480
 */
void globals::EWConnectToHost() {
    /*
        2d8480:	e1a0c00d 	mov	ip, sp
        2d8484:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d8488:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d848c:	e1a04001 	mov	r4, r1
        2d8490:	e59f1024 	ldr	r1, [pc, #24]	; 2d84bc <EWConnectToHost+0x3c>
        2d8494:	e3a03000 	mov	r3, #0	; 0x0
        2d8498:	e3a02000 	mov	r2, #0	; 0x0
        2d849c:	eb63af74 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d84a0:	eb5f1ece 	bl	1a9ffe0 <$RefToAddress(long)>
        2d84a4:	e1a01004 	mov	r1, r4
        2d84a8:	eb5f9ab2 	bl	1abef78 <TEWorldClient::$ConnectToHost(RefVar const &)>
        2d84ac:	e3300000 	teq	r0, #0	; 0x0
        2d84b0:	03a00002 	moveq	r0, #2	; 0x2
        2d84b4:	11a00100 	movne	r0, r0, lsl #2
        2d84b8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2d84bc:	006823f0 	streqd	r2, [r8], -#48
    */
}

/**
 * Symbol: EWBufferStart
 * Address: 002d84c0
 */
void globals::EWBufferStart() {
    /*
        2d84c0:	e1a0c00d 	mov	ip, sp
        2d84c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d84c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d84cc:	e1a05001 	mov	r5, r1
        2d84d0:	e1a04002 	mov	r4, r2
        2d84d4:	e59f1020 	ldr	r1, [pc, #20]	; 2d84fc <EWBufferStart+0x3c>
        2d84d8:	e3a03000 	mov	r3, #0	; 0x0
        2d84dc:	e3a02000 	mov	r2, #0	; 0x0
        2d84e0:	eb63af63 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d84e4:	eb5f1ebd 	bl	1a9ffe0 <$RefToAddress(long)>
        2d84e8:	e1a02004 	mov	r2, r4
        2d84ec:	e1a01005 	mov	r1, r5
        2d84f0:	eb5f9a9a 	bl	1abef60 <TEWorldClient::$BufferStart(RefVar const &, RefVar const &)>
        2d84f4:	e3a00002 	mov	r0, #2	; 0x2
        2d84f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d84fc:	006823f0 	streqd	r2, [r8], -#48
    */
}

/**
 * Symbol: EWSetError
 * Address: 002d8500
 */
void globals::EWSetError() {
    /*
        2d8500:	e1a0c00d 	mov	ip, sp
        2d8504:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d8508:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d850c:	e1a04001 	mov	r4, r1
        2d8510:	e59f1034 	ldr	r1, [pc, #34]	; 2d854c <EWSetError+0x4c>
        2d8514:	e3a03000 	mov	r3, #0	; 0x0
        2d8518:	e3a02000 	mov	r2, #0	; 0x0
        2d851c:	eb63af54 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d8520:	eb5f1eae 	bl	1a9ffe0 <$RefToAddress(long)>
        2d8524:	e1a05000 	mov	r5, r0
        2d8528:	e5940000 	ldr	r0, [r4]
        2d852c:	e5900000 	ldr	r0, [r0]
        2d8530:	e3100003 	tst	r0, #3	; 0x3
        2d8534:	01a00140 	moveq	r0, r0, asr #2
        2d8538:	0a000000 	beq	2d8540 <EWSetError+0x40>
        2d853c:	eb63a6f6 	bl	1bc211c <$_RINTError(long)>
        2d8540:	e5a502a8 	str	r0, [r5, #680]!
        2d8544:	e3a00002 	mov	r0, #2	; 0x2
        2d8548:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d854c:	006823f0 	streqd	r2, [r8], -#48
    */
}

/**
 * Symbol: EWGetError
 * Address: 002d8550
 */
void globals::EWGetError() {
    /*
        2d8550:	e1a0c00d 	mov	ip, sp
        2d8554:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2d8558:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d855c:	e59f1020 	ldr	r1, [pc, #20]	; 2d8584 <EWGetError+0x34>
        2d8560:	e3a03000 	mov	r3, #0	; 0x0
        2d8564:	e3a02000 	mov	r2, #0	; 0x0
        2d8568:	eb63af41 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        2d856c:	eb5f1e9b 	bl	1a9ffe0 <$RefToAddress(long)>
        2d8570:	e59002a8 	ldr	r0, [r0, #680]
        2d8574:	e3300000 	teq	r0, #0	; 0x0
        2d8578:	03a00002 	moveq	r0, #2	; 0x2
        2d857c:	11a00100 	movne	r0, r0, lsl #2
        2d8580:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2d8584:	006823f0 	streqd	r2, [r8], -#48
    */
}

/**
 * Symbol: EntryStore(RefVar const &)
 * Address: 002d9c04
 */
EntryStore(RefVar const &) {
    /*
        2d9c04:	e1a0c00d 	mov	ip, sp
        2d9c08:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d9c0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d9c10:	e1a04000 	mov	r4, r0
        2d9c14:	eb5dba0c 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2d9c18:	e3300000 	teq	r0, #0	; 0x0
        2d9c1c:	159f1024 	ldrne	r1, [pc, #24]	; 2d9c48 <EntryStore(RefVar const &)+0x44>
        2d9c20:	11a00004 	movne	r0, r4
        2d9c24:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2d9c28:	1a5ddafe 	bne	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2d9c2c:	e1a00004 	mov	r0, r4
        2d9c30:	eb63a979 	bl	1bc421c <$EntrySoup(RefVar const &)>
        2d9c34:	e59f1010 	ldr	r1, [pc, #10]	; 2d9c4c <EntryStore(RefVar const &)+0x48>
        2d9c38:	e5911000 	ldr	r1, [r1]
        2d9c3c:	e5911000 	ldr	r1, [r1]
        2d9c40:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2d9c44:	ea63a985 	b	1bc4260 <$GetFrameSlotRef__FlT1>
        2d9c48:	00682c48 	rsbeq	r2, r8, r8, asr #24
        2d9c4c:	00684880 	rsbeq	r4, r8, r0, lsl #17
    */
}

/**
 * Symbol: EnsureEntryInternal(RefVar const &)
 * Address: 002d9c50
 */
EnsureEntryInternal(RefVar const &) {
    /*
        2d9c50:	e1a0c00d 	mov	ip, sp
        2d9c54:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d9c58:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d9c5c:	e1a04000 	mov	r4, r0
        2d9c60:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d9c64:	e5900000 	ldr	r0, [r0]
        2d9c68:	e5900000 	ldr	r0, [r0]
        2d9c6c:	e59f103c 	ldr	r1, [pc, #3c]	; 2d9cb0 <EnsureEntryInternal(RefVar const &)+0x60>
        2d9c70:	e5911000 	ldr	r1, [r1]
        2d9c74:	e5911000 	ldr	r1, [r1]
        2d9c78:	eb63a978 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d9c7c:	eb63a132 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9c80:	e58d0000 	str	r0, [sp]
        2d9c84:	e5900000 	ldr	r0, [r0]
        2d9c88:	e3a06000 	mov	r6, #0	; 0x0
        2d9c8c:	e3300002 	teq	r0, #2	; 0x2
        2d9c90:	1a000007 	bne	2d9cb4 <EnsureEntryInternal(RefVar const &)+0x64>
        2d9c94:	e1a00004 	mov	r0, r4
        2d9c98:	eb63a553 	bl	1bc31ec <$EnsureInternal(RefVar const &)>
        2d9c9c:	e1a04000 	mov	r4, r0
        2d9ca0:	e59d0000 	ldr	r0, [sp]
        2d9ca4:	eb63a544 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d9ca8:	e1a00004 	mov	r0, r4
        2d9cac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2d9cb0:	00685390 	streqb	r5, [r8], -#48
        2d9cb4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d9cb8:	e3a00002 	mov	r0, #2	; 0x2
        2d9cbc:	eb63a122 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9cc0:	e58d0004 	str	r0, [sp, #4]
        2d9cc4:	e3a00002 	mov	r0, #2	; 0x2
        2d9cc8:	eb63a11f 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9ccc:	e58d0000 	str	r0, [sp]
        2d9cd0:	e1a0200d 	mov	r2, sp
        2d9cd4:	e51f102c 	ldr	r1, [pc, #ffffffd4]	; 2d9cb0 <EnsureEntryInternal(RefVar const &)+0x60>
        2d9cd8:	e1a05001 	mov	r5, r1
        2d9cdc:	e1a00004 	mov	r0, r4
        2d9ce0:	eb63b1a0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d9ce4:	e59d0000 	ldr	r0, [sp]
        2d9ce8:	eb63a533 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d9cec:	e52d606c 	str	r6, [sp, -#108]!
        2d9cf0:	e28d0008 	add	r0, sp, #8	; 0x8
        2d9cf4:	eb63631e 	bl	1bb2974 <$setjmp>
        2d9cf8:	e3300000 	teq	r0, #0	; 0x0
        2d9cfc:	1a000017 	bne	2d9d60 <EnsureEntryInternal(RefVar const &)+0x110>
        2d9d00:	e1a0000d 	mov	r0, sp
        2d9d04:	eb6418dc 	bl	1be007c <$AddExceptionHandler>
        2d9d08:	e1a00004 	mov	r0, r4
        2d9d0c:	eb63a536 	bl	1bc31ec <$EnsureInternal(RefVar const &)>
        2d9d10:	e59d1070 	ldr	r1, [sp, #112]
        2d9d14:	e28d2074 	add	r2, sp, #116	; 0x74
        2d9d18:	e5810000 	str	r0, [r1]
        2d9d1c:	e1a01005 	mov	r1, r5
        2d9d20:	e28d0070 	add	r0, sp, #112	; 0x70
        2d9d24:	eb63b18f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d9d28:	e28d2074 	add	r2, sp, #116	; 0x74
        2d9d2c:	e1a01005 	mov	r1, r5
        2d9d30:	e1a00004 	mov	r0, r4
        2d9d34:	eb63b18b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d9d38:	e1a0000d 	mov	r0, sp
        2d9d3c:	eb641cdd 	bl	1be10b8 <$ExitHandler>
        2d9d40:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2d9d44:	e59d0004 	ldr	r0, [sp, #4]
        2d9d48:	e5904000 	ldr	r4, [r0]
        2d9d4c:	eb63a51a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d9d50:	e59d0008 	ldr	r0, [sp, #8]
        2d9d54:	eb63a518 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d9d58:	e1a00004 	mov	r0, r4
        2d9d5c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2d9d60:	e28d2074 	add	r2, sp, #116	; 0x74
        2d9d64:	e1a01005 	mov	r1, r5
        2d9d68:	e1a00004 	mov	r0, r4
        2d9d6c:	eb63b17d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d9d70:	e1a0000d 	mov	r0, sp
        2d9d74:	eb6420f6 	bl	1be2154 <$NextHandler>
        2d9d78:	eafffff8 	b	2d9d60 <EnsureEntryInternal(RefVar const &)+0x110>
    */
}

/**
 * Symbol: EntryChangeCommon(RefVar const &, int)
 * Address: 002d9d7c
 */
EntryChangeCommon(RefVar const &, int) {
    /*
        2d9d7c:	e1a0c00d 	mov	ip, sp
        2d9d80:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d9d84:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d9d88:	e1a05000 	mov	r5, r0
        2d9d8c:	e1a04001 	mov	r4, r1
        2d9d90:	e5900000 	ldr	r0, [r0]
        2d9d94:	e5900000 	ldr	r0, [r0]
        2d9d98:	eb63ad3a 	bl	1bc5288 <$IsFaultBlock(long)>
        2d9d9c:	e59f736c 	ldr	r7, [pc, #36c]	; 2da110 <EntryChangeCommon(RefVar const &, int)+0x394>
        2d9da0:	e3300000 	teq	r0, #0	; 0x0
        2d9da4:	1a000003 	bne	2d9db8 <EntryChangeCommon(RefVar const &, int)+0x3c>
        2d9da8:	e59f1364 	ldr	r1, [pc, #364]	; 2da114 <EntryChangeCommon(RefVar const &, int)+0x398>
        2d9dac:	e3a02000 	mov	r2, #0	; 0x0
        2d9db0:	e5970000 	ldr	r0, [r7]
        2d9db4:	eb6424f8 	bl	1be319c <$Throw>
        2d9db8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d9dbc:	e3140002 	tst	r4, #2	; 0x2
        2d9dc0:	0a00000a 	beq	2d9df0 <EntryChangeCommon(RefVar const &, int)+0x74>
        2d9dc4:	eb5f1467 	bl	1a9ef68 <$RealClock(void)>
        2d9dc8:	e3c0020e 	bic	r0, r0, #-536870912	; 0xe0000000
        2d9dcc:	e1a00100 	mov	r0, r0, lsl #2
        2d9dd0:	eb63a0dd 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9dd4:	e58d0000 	str	r0, [sp]
        2d9dd8:	e1a0200d 	mov	r2, sp
        2d9ddc:	e59f1334 	ldr	r1, [pc, #334]	; 2da118 <EntryChangeCommon(RefVar const &, int)+0x39c>
        2d9de0:	e1a00005 	mov	r0, r5
        2d9de4:	eb63b15f 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d9de8:	e59d0000 	ldr	r0, [sp]
        2d9dec:	eb63a4f2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d9df0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d9df4:	e3a00002 	mov	r0, #2	; 0x2
        2d9df8:	eb63a0d3 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9dfc:	e58d0004 	str	r0, [sp, #4]
        2d9e00:	e3a00002 	mov	r0, #2	; 0x2
        2d9e04:	eb63a0d0 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9e08:	e58d0000 	str	r0, [sp]
        2d9e0c:	e5950000 	ldr	r0, [r5]
        2d9e10:	e5900000 	ldr	r0, [r0]
        2d9e14:	eb5da0bd 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2d9e18:	e590100c 	ldr	r1, [r0, #12]
        2d9e1c:	e59d2004 	ldr	r2, [sp, #4]
        2d9e20:	e5821000 	str	r1, [r2]
        2d9e24:	e5901018 	ldr	r1, [r0, #24]
        2d9e28:	e41d2004 	ldr	r2, [sp], -#4
        2d9e2c:	e5821000 	str	r1, [r2]
        2d9e30:	e5906010 	ldr	r6, [r0, #16]
        2d9e34:	e5900014 	ldr	r0, [r0, #20]
        2d9e38:	e3100003 	tst	r0, #3	; 0x3
        2d9e3c:	01a00140 	moveq	r0, r0, asr #2
        2d9e40:	0a000000 	beq	2d9e48 <EntryChangeCommon(RefVar const &, int)+0xcc>
        2d9e44:	eb63a0b4 	bl	1bc211c <$_RINTError(long)>
        2d9e48:	e58d0000 	str	r0, [sp]
        2d9e4c:	e596007c 	ldr	r0, [r6, #124]
        2d9e50:	eb5d900b 	bl	1a3de84 <$CheckWriteProtect(TStore *)>
        2d9e54:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d9e58:	e3a09000 	mov	r9, #0	; 0x0
        2d9e5c:	e5cd9004 	strb	r9, [sp, #4]
        2d9e60:	e59d0010 	ldr	r0, [sp, #16]
        2d9e64:	e5900000 	ldr	r0, [r0]
        2d9e68:	e59f12ac 	ldr	r1, [pc, #2ac]	; 2da11c <EntryChangeCommon(RefVar const &, int)+0x3a0>
        2d9e6c:	e5911000 	ldr	r1, [r1]
        2d9e70:	e5911000 	ldr	r1, [r1]
        2d9e74:	eb63a8f9 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d9e78:	eb63a0b3 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9e7c:	e58d0000 	str	r0, [sp]
        2d9e80:	e5900000 	ldr	r0, [r0]
        2d9e84:	e3300002 	teq	r0, #2	; 0x2
        2d9e88:	1a000004 	bne	2d9ea0 <EntryChangeCommon(RefVar const &, int)+0x124>
        2d9e8c:	e3a0106e 	mov	r1, #110	; 0x6e
        2d9e90:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        2d9e94:	e3a02000 	mov	r2, #0	; 0x0
        2d9e98:	e5970000 	ldr	r0, [r7]
        2d9e9c:	eb6424be 	bl	1be319c <$Throw>
        2d9ea0:	e59d000c 	ldr	r0, [sp, #12]
        2d9ea4:	e5900000 	ldr	r0, [r0]
        2d9ea8:	e3300002 	teq	r0, #2	; 0x2
        2d9eac:	0a000090 	beq	2da0f4 <EntryChangeCommon(RefVar const &, int)+0x378>
        2d9eb0:	e3140008 	tst	r4, #8	; 0x8
        2d9eb4:	1a000003 	bne	2d9ec8 <EntryChangeCommon(RefVar const &, int)+0x14c>
        2d9eb8:	e28d000c 	add	r0, sp, #12	; 0xc
        2d9ebc:	eb5dd649 	bl	1a4f7e8 <$EnsureEntryInternal(RefVar const &)>
        2d9ec0:	e59d100c 	ldr	r1, [sp, #12]
        2d9ec4:	e5810000 	str	r0, [r1]
        2d9ec8:	e3a00000 	mov	r0, #0	; 0x0
        2d9ecc:	e52d0004 	str	r0, [sp, -#4]!
        2d9ed0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d9ed4:	e28d2004 	add	r2, sp, #4	; 0x4
        2d9ed8:	e1a00006 	mov	r0, r6
        2d9edc:	e59d1010 	ldr	r1, [sp, #16]
        2d9ee0:	eb5dbd84 	bl	1a494f8 <$LoadPermObject(TStoreWrapper *, unsigned long, CDynamicArray **)>
        2d9ee4:	eb63a098 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9ee8:	e40d0004 	str	r0, [sp], -#4
        2d9eec:	e3140001 	tst	r4, #1	; 0x1
        2d9ef0:	0a00001d 	beq	2d9f6c <EntryChangeCommon(RefVar const &, int)+0x1f0>
        2d9ef4:	e59d0018 	ldr	r0, [sp, #24]
        2d9ef8:	e5900000 	ldr	r0, [r0]
        2d9efc:	e59f721c 	ldr	r7, [pc, #21c]	; 2da120 <EntryChangeCommon(RefVar const &, int)+0x3a4>
        2d9f00:	e5971000 	ldr	r1, [r7]
        2d9f04:	e5911000 	ldr	r1, [r1]
        2d9f08:	eb63a8d4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d9f0c:	e1a08000 	mov	r8, r0
        2d9f10:	e59d0004 	ldr	r0, [sp, #4]
        2d9f14:	e5900000 	ldr	r0, [r0]
        2d9f18:	e5971000 	ldr	r1, [r7]
        2d9f1c:	e5911000 	ldr	r1, [r1]
        2d9f20:	eb63a8ce 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d9f24:	e1a01000 	mov	r1, r0
        2d9f28:	e1a00008 	mov	r0, r8
        2d9f2c:	eb63a8bf 	bl	1bc4230 <$EQRef__FlT1>
        2d9f30:	e3300000 	teq	r0, #0	; 0x0
        2d9f34:	1a00000c 	bne	2d9f6c <EntryChangeCommon(RefVar const &, int)+0x1f0>
        2d9f38:	e59d0004 	ldr	r0, [sp, #4]
        2d9f3c:	e5900000 	ldr	r0, [r0]
        2d9f40:	e5971000 	ldr	r1, [r7]
        2d9f44:	e5911000 	ldr	r1, [r1]
        2d9f48:	eb63a8c4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d9f4c:	eb63a07e 	bl	1bc214c <$AllocateRefHandle(long)>
        2d9f50:	e58d0000 	str	r0, [sp]
        2d9f54:	e1a0200d 	mov	r2, sp
        2d9f58:	e1a01007 	mov	r1, r7
        2d9f5c:	e28d0018 	add	r0, sp, #24	; 0x18
        2d9f60:	eb63b100 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2d9f64:	e59d0000 	ldr	r0, [sp]
        2d9f68:	eb63a493 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d9f6c:	e1a00006 	mov	r0, r6
        2d9f70:	eb5dda34 	bl	1a50848 <TStoreWrapper::$LockStore(void)>
        2d9f74:	e52d906c 	str	r9, [sp, -#108]!
        2d9f78:	e28d0008 	add	r0, sp, #8	; 0x8
        2d9f7c:	eb63627c 	bl	1bb2974 <$setjmp>
        2d9f80:	e3300000 	teq	r0, #0	; 0x0
        2d9f84:	1a000067 	bne	2da128 <EntryChangeCommon(RefVar const &, int)+0x3ac>
        2d9f88:	e1a0000d 	mov	r0, sp
        2d9f8c:	eb64183a 	bl	1be007c <$AddExceptionHandler>
        2d9f90:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d9f94:	e1a0300d 	mov	r3, sp
        2d9f98:	e92d0008 	stmdb	sp!, {r3}
        2d9f9c:	e59d307c 	ldr	r3, [sp, #124]
        2d9fa0:	e28d2088 	add	r2, sp, #136	; 0x88
        2d9fa4:	e1a01006 	mov	r1, r6
        2d9fa8:	e28d008c 	add	r0, sp, #140	; 0x8c
        2d9fac:	eb5dc154 	bl	1a4a504 <$StorePermObject(RefVar const &, TStoreWrapper *, unsigned long &, CDynamicArray *, unsigned char *)>
        2d9fb0:	e5fd0004 	ldrb	r0, [sp, #4]!
        2d9fb4:	e3300000 	teq	r0, #0	; 0x0
        2d9fb8:	13844008 	orrne	r4, r4, #8	; 0x8
        2d9fbc:	e59d0078 	ldr	r0, [sp, #120]
        2d9fc0:	e3300000 	teq	r0, #0	; 0x0
        2d9fc4:	0a000003 	beq	2d9fd8 <EntryChangeCommon(RefVar const &, int)+0x25c>
        2d9fc8:	e3a01001 	mov	r1, #1	; 0x1
        2d9fcc:	eb6428a4 	bl	1be4264 <CDynamicArray::$__dt(void)>
        2d9fd0:	e3a00000 	mov	r0, #0	; 0x0
        2d9fd4:	e58d0078 	str	r0, [sp, #120]
        2d9fd8:	e2140004 	ands	r0, r4, #4	; 0x4
        2d9fdc:	13a00001 	movne	r0, #1	; 0x1
        2d9fe0:	e5cd0080 	strb	r0, [sp, #128]
        2d9fe4:	e28d3080 	add	r3, sp, #128	; 0x80
        2d9fe8:	e92d0008 	stmdb	sp!, {r3}
        2d9fec:	e59d3088 	ldr	r3, [sp, #136]
        2d9ff0:	e28d2078 	add	r2, sp, #120	; 0x78
        2d9ff4:	e28d108c 	add	r1, sp, #140	; 0x8c
        2d9ff8:	e28d0090 	add	r0, sp, #144	; 0x90
        2d9ffc:	eb5dc983 	bl	1a4c610 <$UpdateIndexes__FRC6RefVarN21UlPUc>
        2da000:	e28dd004 	add	sp, sp, #4	; 0x4
        2da004:	e1a07000 	mov	r7, r0
        2da008:	e28d007c 	add	r0, sp, #124	; 0x7c
        2da00c:	e3a01001 	mov	r1, #1	; 0x1
        2da010:	eb5dc981 	bl	1a4c61c <$SoupChanged(RefVar const &, unsigned char)>
        2da014:	e28dd004 	add	sp, sp, #4	; 0x4
        2da018:	e1a0000d 	mov	r0, sp
        2da01c:	eb641c25 	bl	1be10b8 <$ExitHandler>
        2da020:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2da024:	e1a00006 	mov	r0, r6
        2da028:	eb5dde16 	bl	1a51888 <TStoreWrapper::$UnlockStore(void)>
        2da02c:	e3370000 	teq	r7, #0	; 0x0
        2da030:	05dd0010 	ldreqb	r0, [sp, #16]
        2da034:	03300000 	teqeq	r0, #0	; 0x0
        2da038:	0a000023 	beq	2da0cc <EntryChangeCommon(RefVar const &, int)+0x350>
        2da03c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2da040:	e59d0020 	ldr	r0, [sp, #32]
        2da044:	e5900000 	ldr	r0, [r0]
        2da048:	e59f10d4 	ldr	r1, [pc, #d4]	; 2da124 <EntryChangeCommon(RefVar const &, int)+0x3a8>
        2da04c:	e5911000 	ldr	r1, [r1]
        2da050:	e5911000 	ldr	r1, [r1]
        2da054:	eb63a881 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2da058:	eb63a03b 	bl	1bc214c <$AllocateRefHandle(long)>
        2da05c:	e1a06000 	mov	r6, r0
        2da060:	e3a00002 	mov	r0, #2	; 0x2
        2da064:	eb63a038 	bl	1bc214c <$AllocateRefHandle(long)>
        2da068:	e58d0000 	str	r0, [sp]
        2da06c:	e5960000 	ldr	r0, [r6]
        2da070:	eb63ac8d 	bl	1bc52ac <$Length(long)>
        2da074:	e2508001 	subs	r8, r0, #1	; 0x1
        2da078:	4a00000e 	bmi	2da0b8 <EntryChangeCommon(RefVar const &, int)+0x33c>
        2da07c:	e1a01008 	mov	r1, r8
        2da080:	e5960000 	ldr	r0, [r6]
        2da084:	eb63a872 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2da088:	e59d1000 	ldr	r1, [sp]
        2da08c:	e5810000 	str	r0, [r1]
        2da090:	e3300002 	teq	r0, #2	; 0x2
        2da094:	0a000005 	beq	2da0b0 <EntryChangeCommon(RefVar const &, int)+0x334>
        2da098:	e1a0000d 	mov	r0, sp
        2da09c:	eb5db4d2 	bl	1a473ec <$CursorObj(RefVar const &)>
        2da0a0:	e5dd3014 	ldrb	r3, [sp, #20]
        2da0a4:	e1a02007 	mov	r2, r7
        2da0a8:	e1a01005 	mov	r1, r5
        2da0ac:	eb5db4c7 	bl	1a473d0 <TCursor::$EntryChanged(RefVar const &, unsigned char, unsigned char)>
        2da0b0:	e2588001 	subs	r8, r8, #1	; 0x1
        2da0b4:	5afffff0 	bpl	2da07c <EntryChangeCommon(RefVar const &, int)+0x300>
        2da0b8:	e59d0000 	ldr	r0, [sp]
        2da0bc:	eb63a43e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da0c0:	e1a00006 	mov	r0, r6
        2da0c4:	eb63a43c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da0c8:	e28dd004 	add	sp, sp, #4	; 0x4
        2da0cc:	e3140008 	tst	r4, #8	; 0x8
        2da0d0:	0a000004 	beq	2da0e8 <EntryChangeCommon(RefVar const &, int)+0x36c>
        2da0d4:	e5950000 	ldr	r0, [r5]
        2da0d8:	e5900000 	ldr	r0, [r0]
        2da0dc:	eb5da00b 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2da0e0:	e3a01002 	mov	r1, #2	; 0x2
        2da0e4:	e5a01018 	str	r1, [r0, #24]!
        2da0e8:	e5bd0004 	ldr	r0, [sp, #4]!
        2da0ec:	eb63a432 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da0f0:	e28dd008 	add	sp, sp, #8	; 0x8
        2da0f4:	e59d0000 	ldr	r0, [sp]
        2da0f8:	eb63a42f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da0fc:	e5bd000c 	ldr	r0, [sp, #12]!
        2da100:	eb63a42d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da104:	e59d0004 	ldr	r0, [sp, #4]
        2da108:	eb63a42b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da10c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2da110:	003712fc 	ldreqsh	r1, [r7], -ip
        2da114:	ffff4477 	swinv	0x00ff4477
        2da118:	00685360 	rsbeq	r5, r8, r0, ror #6
        2da11c:	00685390 	streqb	r5, [r8], -#48
        2da120:	006853d0 	ldreqd	r5, [r8], -#48
        2da124:	00682770 	rsbeq	r2, r8, r0, ror r7
        2da128:	e1a00006 	mov	r0, r6
        2da12c:	eb5dd5a9 	bl	1a4f7d8 <TStoreWrapper::$Abort(void)>
        2da130:	e28d0088 	add	r0, sp, #136	; 0x88
        2da134:	eb5dc936 	bl	1a4c614 <$AbortSoupIndexes(RefVar const &)>
        2da138:	e59d0074 	ldr	r0, [sp, #116]
        2da13c:	e3300000 	teq	r0, #0	; 0x0
        2da140:	13a01001 	movne	r1, #1	; 0x1
        2da144:	1b642846 	blne	1be4264 <CDynamicArray::$__dt(void)>
        2da148:	e1a0000d 	mov	r0, sp
        2da14c:	eb642000 	bl	1be2154 <$NextHandler>
        2da150:	eafffff4 	b	2da128 <EntryChangeCommon(RefVar const &, int)+0x3ac>
    */
}

/**
 * Symbol: EntryChangeWithModTime(RefVar const &)
 * Address: 002da154
 */
EntryChangeWithModTime(RefVar const &) {
    /*
        2da154:	e1a0c00d 	mov	ip, sp
        2da158:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2da15c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2da160:	e1a04000 	mov	r4, r0
        2da164:	eb5db8b8 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2da168:	e3300000 	teq	r0, #0	; 0x0
        2da16c:	159f1014 	ldrne	r1, [pc, #14]	; 2da188 <EntryChangeWithModTime(RefVar const &)+0x34>
        2da170:	e1a00004 	mov	r0, r4
        2da174:	03a01005 	moveq	r1, #5	; 0x5
        2da178:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        2da17c:	0a5d9364 	beq	1a3ef14 <$EntryChangeCommon(RefVar const &, int)>
        2da180:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2da184:	1a5dd9a7 	bne	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2da188:	00682be0 	rsbeq	r2, r8, r0, ror #23
    */
}

/**
 * Symbol: EntryChangeVerbatim(RefVar const &)
 * Address: 002da18c
 */
EntryChangeVerbatim(RefVar const &) {
    /*
        2da18c:	e1a0c00d 	mov	ip, sp
        2da190:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2da194:	e24cb004 	sub	fp, ip, #4	; 0x4
        2da198:	e1a04000 	mov	r4, r0
        2da19c:	eb5db8aa 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2da1a0:	e3300000 	teq	r0, #0	; 0x0
        2da1a4:	159f1014 	ldrne	r1, [pc, #14]	; 2da1c0 <EntryChangeVerbatim(RefVar const &)+0x34>
        2da1a8:	e1a00004 	mov	r0, r4
        2da1ac:	03a01004 	moveq	r1, #4	; 0x4
        2da1b0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        2da1b4:	0a5d9356 	beq	1a3ef14 <$EntryChangeCommon(RefVar const &, int)>
        2da1b8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2da1bc:	1a5dd999 	bne	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2da1c0:	00682bd8 	ldreqd	r2, [r8], -#184
    */
}

/**
 * Symbol: EntryChange(RefVar const &)
 * Address: 002da1c4
 */
EntryChange(RefVar const &) {
    /*
        2da1c4:	e1a0c00d 	mov	ip, sp
        2da1c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2da1cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2da1d0:	e1a04000 	mov	r4, r0
        2da1d4:	eb5db89c 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2da1d8:	e3300000 	teq	r0, #0	; 0x0
        2da1dc:	159f1014 	ldrne	r1, [pc, #14]	; 2da1f8 <EntryChange(RefVar const &)+0x34>
        2da1e0:	e1a00004 	mov	r0, r4
        2da1e4:	03a01007 	moveq	r1, #7	; 0x7
        2da1e8:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        2da1ec:	0a5d9348 	beq	1a3ef14 <$EntryChangeCommon(RefVar const &, int)>
        2da1f0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2da1f4:	1a5dd98b 	bne	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2da1f8:	00682bc8 	rsbeq	r2, r8, r8, asr #23
    */
}

/**
 * Symbol: EntryFlush(RefVar const &)
 * Address: 002da1fc
 */
EntryFlush(RefVar const &) {
    /*
        2da1fc:	e1a0c00d 	mov	ip, sp
        2da200:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2da204:	e24cb004 	sub	fp, ip, #4	; 0x4
        2da208:	e1a04000 	mov	r4, r0
        2da20c:	eb5db88e 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2da210:	e3300000 	teq	r0, #0	; 0x0
        2da214:	159f1014 	ldrne	r1, [pc, #14]	; 2da230 <EntryFlush(RefVar const &)+0x34>
        2da218:	e1a00004 	mov	r0, r4
        2da21c:	03a0100f 	moveq	r1, #15	; 0xf
        2da220:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        2da224:	0a5d933a 	beq	1a3ef14 <$EntryChangeCommon(RefVar const &, int)>
        2da228:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2da22c:	1a5dd97d 	bne	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2da230:	00682bc8 	rsbeq	r2, r8, r8, asr #23
    */
}

/**
 * Symbol: EntryFlushWithModTime(RefVar const &)
 * Address: 002da234
 */
EntryFlushWithModTime(RefVar const &) {
    /*
        2da234:	e1a0c00d 	mov	ip, sp
        2da238:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2da23c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2da240:	e1a04000 	mov	r4, r0
        2da244:	eb5db880 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2da248:	e3300000 	teq	r0, #0	; 0x0
        2da24c:	159f1014 	ldrne	r1, [pc, #14]	; 2da268 <EntryFlushWithModTime(RefVar const &)+0x34>
        2da250:	e1a00004 	mov	r0, r4
        2da254:	03a0100d 	moveq	r1, #13	; 0xd
        2da258:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        2da25c:	0a5d932c 	beq	1a3ef14 <$EntryChangeCommon(RefVar const &, int)>
        2da260:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2da264:	1a5dd96f 	bne	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2da268:	00682bc8 	rsbeq	r2, r8, r8, asr #23
    */
}

/**
 * Symbol: EntryRemoveFromSoup(RefVar const &)
 * Address: 002da26c
 */
EntryRemoveFromSoup(RefVar const &) {
    /*
        2da26c:	e1a0c00d 	mov	ip, sp
        2da270:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2da274:	e24cb004 	sub	fp, ip, #4	; 0x4
        2da278:	e1a04000 	mov	r4, r0
        2da27c:	e5900000 	ldr	r0, [r0]
        2da280:	e5900000 	ldr	r0, [r0]
        2da284:	eb63abff 	bl	1bc5288 <$IsFaultBlock(long)>
        2da288:	e59f712c 	ldr	r7, [pc, #12c]	; 2da3bc <EntryRemoveFromSoup(RefVar const &)+0x150>
        2da28c:	e3300000 	teq	r0, #0	; 0x0
        2da290:	1a000003 	bne	2da2a4 <EntryRemoveFromSoup(RefVar const &)+0x38>
        2da294:	e59f1124 	ldr	r1, [pc, #124]	; 2da3c0 <EntryRemoveFromSoup(RefVar const &)+0x154>
        2da298:	e3a02000 	mov	r2, #0	; 0x0
        2da29c:	e5970000 	ldr	r0, [r7]
        2da2a0:	eb6423bd 	bl	1be319c <$Throw>
        2da2a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2da2a8:	e3a00002 	mov	r0, #2	; 0x2
        2da2ac:	eb639fa6 	bl	1bc214c <$AllocateRefHandle(long)>
        2da2b0:	e58d0004 	str	r0, [sp, #4]
        2da2b4:	e3a00002 	mov	r0, #2	; 0x2
        2da2b8:	eb639fa3 	bl	1bc214c <$AllocateRefHandle(long)>
        2da2bc:	e58d0000 	str	r0, [sp]
        2da2c0:	e5940000 	ldr	r0, [r4]
        2da2c4:	e5900000 	ldr	r0, [r0]
        2da2c8:	eb5d9f90 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2da2cc:	e1a06000 	mov	r6, r0
        2da2d0:	e5900010 	ldr	r0, [r0, #16]
        2da2d4:	e3300002 	teq	r0, #2	; 0x2
        2da2d8:	059f10e4 	ldreq	r1, [pc, #e4]	; 2da3c4 <EntryRemoveFromSoup(RefVar const &)+0x158>
        2da2dc:	01a00004 	moveq	r0, r4
        2da2e0:	0b5dd950 	bleq	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2da2e4:	e596000c 	ldr	r0, [r6, #12]
        2da2e8:	e59d1004 	ldr	r1, [sp, #4]
        2da2ec:	e5810000 	str	r0, [r1]
        2da2f0:	e5965010 	ldr	r5, [r6, #16]
        2da2f4:	e3350000 	teq	r5, #0	; 0x0
        2da2f8:	1a000004 	bne	2da310 <EntryRemoveFromSoup(RefVar const &)+0xa4>
        2da2fc:	e3a0106e 	mov	r1, #110	; 0x6e
        2da300:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        2da304:	e3a02000 	mov	r2, #0	; 0x0
        2da308:	e5970000 	ldr	r0, [r7]
        2da30c:	eb6423a2 	bl	1be319c <$Throw>
        2da310:	e5960014 	ldr	r0, [r6, #20]
        2da314:	e3100003 	tst	r0, #3	; 0x3
        2da318:	01a00140 	moveq	r0, r0, asr #2
        2da31c:	0a000000 	beq	2da324 <EntryRemoveFromSoup(RefVar const &)+0xb8>
        2da320:	eb639f7d 	bl	1bc211c <$_RINTError(long)>
        2da324:	e1a07000 	mov	r7, r0
        2da328:	e5b60018 	ldr	r0, [r6, #24]!
        2da32c:	e59d1000 	ldr	r1, [sp]
        2da330:	e5810000 	str	r0, [r1]
        2da334:	e595007c 	ldr	r0, [r5, #124]
        2da338:	eb5d8ed1 	bl	1a3de84 <$CheckWriteProtect(TStore *)>
        2da33c:	e1a02004 	mov	r2, r4
        2da340:	e28d0004 	add	r0, sp, #4	; 0x4
        2da344:	e3a01002 	mov	r1, #2	; 0x2
        2da348:	ebffcef6 	bl	2cdf28 <EachSoupCursorDo(RefVar const &, long, long)>
        2da34c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2da350:	e59d000c 	ldr	r0, [sp, #12]
        2da354:	e5900000 	ldr	r0, [r0]
        2da358:	e59f1068 	ldr	r1, [pc, #68]	; 2da3c8 <EntryRemoveFromSoup(RefVar const &)+0x15c>
        2da35c:	e5911000 	ldr	r1, [r1]
        2da360:	e5911000 	ldr	r1, [r1]
        2da364:	eb63a7bd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2da368:	eb639f77 	bl	1bc214c <$AllocateRefHandle(long)>
        2da36c:	e58d0004 	str	r0, [sp, #4]
        2da370:	e3a00002 	mov	r0, #2	; 0x2
        2da374:	eb639f74 	bl	1bc214c <$AllocateRefHandle(long)>
        2da378:	e58d0000 	str	r0, [sp]
        2da37c:	e59d0008 	ldr	r0, [sp, #8]
        2da380:	e5900000 	ldr	r0, [r0]
        2da384:	e3300002 	teq	r0, #2	; 0x2
        2da388:	0a000004 	beq	2da3a0 <EntryRemoveFromSoup(RefVar const &)+0x134>
        2da38c:	e5940000 	ldr	r0, [r4]
        2da390:	e5900000 	ldr	r0, [r0]
        2da394:	eb63a799 	bl	1bc4200 <$EntryDirty(long)>
        2da398:	e3300000 	teq	r0, #0	; 0x0
        2da39c:	0a00000a 	beq	2da3cc <EntryRemoveFromSoup(RefVar const &)+0x160>
        2da3a0:	e1a01007 	mov	r1, r7
        2da3a4:	e1a00005 	mov	r0, r5
        2da3a8:	e3a02000 	mov	r2, #0	; 0x0
        2da3ac:	eb5dbc51 	bl	1a494f8 <$LoadPermObject(TStoreWrapper *, unsigned long, CDynamicArray **)>
        2da3b0:	e59d1000 	ldr	r1, [sp]
        2da3b4:	e5810000 	str	r0, [r1]
        2da3b8:	ea000007 	b	2da3dc <EntryRemoveFromSoup(RefVar const &)+0x170>
        2da3bc:	003712fc 	ldreqsh	r1, [r7], -ip
        2da3c0:	ffff4477 	swinv	0x00ff4477
        2da3c4:	00682c18 	rsbeq	r2, r8, r8, lsl ip
        2da3c8:	00685390 	streqb	r5, [r8], -#48
        2da3cc:	e59d0008 	ldr	r0, [sp, #8]
        2da3d0:	e5901000 	ldr	r1, [r0]
        2da3d4:	e59d0000 	ldr	r0, [sp]
        2da3d8:	e5801000 	str	r1, [r0]
        2da3dc:	e1a00005 	mov	r0, r5
        2da3e0:	eb5dd918 	bl	1a50848 <TStoreWrapper::$LockStore(void)>
        2da3e4:	e3a00000 	mov	r0, #0	; 0x0
        2da3e8:	e52d006c 	str	r0, [sp, -#108]!
        2da3ec:	e28d0008 	add	r0, sp, #8	; 0x8
        2da3f0:	eb63615f 	bl	1bb2974 <$setjmp>
        2da3f4:	e3300000 	teq	r0, #0	; 0x0
        2da3f8:	1a00005b 	bne	2da56c <EntryRemoveFromSoup(RefVar const &)+0x300>
        2da3fc:	e1a0000d 	mov	r0, sp
        2da400:	eb64171d 	bl	1be007c <$AddExceptionHandler>
        2da404:	e24dd004 	sub	sp, sp, #4	; 0x4
        2da408:	e1a03007 	mov	r3, r7
        2da40c:	e28d2070 	add	r2, sp, #112	; 0x70
        2da410:	e28d107c 	add	r1, sp, #124	; 0x7c
        2da414:	e3a00000 	mov	r0, #0	; 0x0
        2da418:	eb5dc878 	bl	1a4c600 <$AlterIndexes__FUcRC6RefVarT2Ul>
        2da41c:	e59d007c 	ldr	r0, [sp, #124]
        2da420:	e5900000 	ldr	r0, [r0]
        2da424:	e59f1130 	ldr	r1, [pc, #130]	; 2da55c <EntryRemoveFromSoup(RefVar const &)+0x2f0>
        2da428:	e5911000 	ldr	r1, [r1]
        2da42c:	e5911000 	ldr	r1, [r1]
        2da430:	eb63a78a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2da434:	eb639f44 	bl	1bc214c <$AllocateRefHandle(long)>
        2da438:	e58d0000 	str	r0, [sp]
        2da43c:	e1a0000d 	mov	r0, sp
        2da440:	e1a01004 	mov	r1, r4
        2da444:	eb5d8ea3 	bl	1a3ded8 <$DeleteEntryFromCache__FRC6RefVarT1>
        2da448:	e59d0000 	ldr	r0, [sp]
        2da44c:	eb63a35a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da450:	e5940000 	ldr	r0, [r4]
        2da454:	e5900000 	ldr	r0, [r0]
        2da458:	e59d1078 	ldr	r1, [sp, #120]
        2da45c:	e5911000 	ldr	r1, [r1]
        2da460:	e3310002 	teq	r1, #2	; 0x2
        2da464:	128d1078 	addne	r1, sp, #120	; 0x78
        2da468:	028d1070 	addeq	r1, sp, #112	; 0x70
        2da46c:	e5911000 	ldr	r1, [r1]
        2da470:	e5911000 	ldr	r1, [r1]
        2da474:	eb63afb1 	bl	1bc6340 <$ReplaceObjectRef__FlT1>
        2da478:	e1a01007 	mov	r1, r7
        2da47c:	e1a00005 	mov	r0, r5
        2da480:	eb63a34a 	bl	1bc31b0 <$DeletePermObject(TStoreWrapper *, unsigned long)>
        2da484:	e24dd004 	sub	sp, sp, #4	; 0x4
        2da488:	e59d0080 	ldr	r0, [sp, #128]
        2da48c:	e5900000 	ldr	r0, [r0]
        2da490:	e59f10c8 	ldr	r1, [pc, #c8]	; 2da560 <EntryRemoveFromSoup(RefVar const &)+0x2f4>
        2da494:	e5911000 	ldr	r1, [r1]
        2da498:	e5911000 	ldr	r1, [r1]
        2da49c:	eb63a76f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2da4a0:	eb639f29 	bl	1bc214c <$AllocateRefHandle(long)>
        2da4a4:	e58d0000 	str	r0, [sp]
        2da4a8:	e5940000 	ldr	r0, [r4]
        2da4ac:	e5900000 	ldr	r0, [r0]
        2da4b0:	e59f10ac 	ldr	r1, [pc, #ac]	; 2da564 <EntryRemoveFromSoup(RefVar const &)+0x2f8>
        2da4b4:	e5911000 	ldr	r1, [r1]
        2da4b8:	e5911000 	ldr	r1, [r1]
        2da4bc:	eb63a767 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2da4c0:	e3100003 	tst	r0, #3	; 0x3
        2da4c4:	01a00140 	moveq	r0, r0, asr #2
        2da4c8:	0a000000 	beq	2da4d0 <EntryRemoveFromSoup(RefVar const &)+0x264>
        2da4cc:	eb639f12 	bl	1bc211c <$_RINTError(long)>
        2da4d0:	e2804001 	add	r4, r0, #1	; 0x1
        2da4d4:	e59d0000 	ldr	r0, [sp]
        2da4d8:	e5900000 	ldr	r0, [r0]
        2da4dc:	e3100003 	tst	r0, #3	; 0x3
        2da4e0:	01a00140 	moveq	r0, r0, asr #2
        2da4e4:	0a000000 	beq	2da4ec <EntryRemoveFromSoup(RefVar const &)+0x280>
        2da4e8:	eb639f0b 	bl	1bc211c <$_RINTError(long)>
        2da4ec:	e1340000 	teq	r4, r0
        2da4f0:	1a000005 	bne	2da50c <EntryRemoveFromSoup(RefVar const &)+0x2a0>
        2da4f4:	e1a0200d 	mov	r2, sp
        2da4f8:	e59f1068 	ldr	r1, [pc, #68]	; 2da568 <EntryRemoveFromSoup(RefVar const &)+0x2fc>
        2da4fc:	e28d0078 	add	r0, sp, #120	; 0x78
        2da500:	eb63af98 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2da504:	e28d0078 	add	r0, sp, #120	; 0x78
        2da508:	eb63bbdc 	bl	1bc9480 <$WriteFaultBlock(RefVar const &)>
        2da50c:	e28d0078 	add	r0, sp, #120	; 0x78
        2da510:	e3a01001 	mov	r1, #1	; 0x1
        2da514:	eb5dc840 	bl	1a4c61c <$SoupChanged(RefVar const &, unsigned char)>
        2da518:	e59d0000 	ldr	r0, [sp]
        2da51c:	eb63a326 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da520:	e28dd008 	add	sp, sp, #8	; 0x8
        2da524:	e1a0000d 	mov	r0, sp
        2da528:	eb641ae2 	bl	1be10b8 <$ExitHandler>
        2da52c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2da530:	e1a00005 	mov	r0, r5
        2da534:	eb5ddcd3 	bl	1a51888 <TStoreWrapper::$UnlockStore(void)>
        2da538:	e59d0000 	ldr	r0, [sp]
        2da53c:	eb63a31e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da540:	e59d0004 	ldr	r0, [sp, #4]
        2da544:	eb63a31c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da548:	e5bd0008 	ldr	r0, [sp, #8]!
        2da54c:	eb63a31a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da550:	e59d0004 	ldr	r0, [sp, #4]
        2da554:	eb63a318 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da558:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2da55c:	00682268 	rsbeq	r2, r8, r8, ror #4
        2da560:	006831d8 	ldreqd	r3, [r8], -#24
        2da564:	006853d0 	ldreqd	r5, [r8], -#48
        2da568:	006834b0 	streqh	r3, [r8], -#64
        2da56c:	e1a00005 	mov	r0, r5
        2da570:	eb5dd498 	bl	1a4f7d8 <TStoreWrapper::$Abort(void)>
        2da574:	e28d0078 	add	r0, sp, #120	; 0x78
        2da578:	eb5dc825 	bl	1a4c614 <$AbortSoupIndexes(RefVar const &)>
        2da57c:	e1a0000d 	mov	r0, sp
        2da580:	eb641ef3 	bl	1be2154 <$NextHandler>
        2da584:	eafffff8 	b	2da56c <EntryRemoveFromSoup(RefVar const &)+0x300>
    */
}

/**
 * Symbol: EntryReplaceCommon__FRC6RefVarT1i
 * Address: 002da588
 */
void globals::EntryReplaceCommon() {
    /*
        2da588:	e1a0c00d 	mov	ip, sp
        2da58c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2da590:	e24cb004 	sub	fp, ip, #4	; 0x4
        2da594:	e1a04000 	mov	r4, r0
        2da598:	e1a05001 	mov	r5, r1
        2da59c:	e1a06002 	mov	r6, r2
        2da5a0:	e5900000 	ldr	r0, [r0]
        2da5a4:	e5900000 	ldr	r0, [r0]
        2da5a8:	eb63ab36 	bl	1bc5288 <$IsFaultBlock(long)>
        2da5ac:	e3300000 	teq	r0, #0	; 0x0
        2da5b0:	1a000004 	bne	2da5c8 <EntryReplaceCommon__FRC6RefVarT1i+0x40>
        2da5b4:	e59f1154 	ldr	r1, [pc, #154]	; 2da710 <EntryReplaceCommon__FRC6RefVarT1i+0x188>
        2da5b8:	e59f0154 	ldr	r0, [pc, #154]	; 2da714 <EntryReplaceCommon__FRC6RefVarT1i+0x18c>
        2da5bc:	e5900000 	ldr	r0, [r0]
        2da5c0:	e3a02000 	mov	r2, #0	; 0x0
        2da5c4:	eb6422f4 	bl	1be319c <$Throw>
        2da5c8:	e1a00004 	mov	r0, r4
        2da5cc:	eb5db79e 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2da5d0:	e3300000 	teq	r0, #0	; 0x0
        2da5d4:	0a000006 	beq	2da5f4 <EntryReplaceCommon__FRC6RefVarT1i+0x6c>
        2da5d8:	e3360000 	teq	r6, #0	; 0x0
        2da5dc:	059f1134 	ldreq	r1, [pc, #134]	; 2da718 <EntryReplaceCommon__FRC6RefVarT1i+0x190>
        2da5e0:	159f1134 	ldrne	r1, [pc, #134]	; 2da71c <EntryReplaceCommon__FRC6RefVarT1i+0x194>
        2da5e4:	e1a02005 	mov	r2, r5
        2da5e8:	e1a00004 	mov	r0, r4
        2da5ec:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2da5f0:	ea5dd88b 	b	1a50824 <$ForwardEntryMessage__FRC6RefVarN21>
        2da5f4:	e5950000 	ldr	r0, [r5]
        2da5f8:	e5900000 	ldr	r0, [r0]
        2da5fc:	e3100001 	tst	r0, #1	; 0x1
        2da600:	0a000002 	beq	2da610 <EntryReplaceCommon__FRC6RefVarT1i+0x88>
        2da604:	eb63ab39 	bl	1bc52f0 <$ObjectFlags(long)>
        2da608:	e3100002 	tst	r0, #2	; 0x2
        2da60c:	1a000005 	bne	2da628 <EntryReplaceCommon__FRC6RefVarT1i+0xa0>
        2da610:	e59f0108 	ldr	r0, [pc, #108]	; 2da720 <EntryReplaceCommon__FRC6RefVarT1i+0x198>
        2da614:	e5900000 	ldr	r0, [r0]
        2da618:	e3a02000 	mov	r2, #0	; 0x0
        2da61c:	e3a01e2f 	mov	r1, #752	; 0x2f0
        2da620:	e2411903 	sub	r1, r1, #49152	; 0xc000
        2da624:	eb6422dc 	bl	1be319c <$Throw>
        2da628:	e5940000 	ldr	r0, [r4]
        2da62c:	e5900000 	ldr	r0, [r0]
        2da630:	e5951000 	ldr	r1, [r5]
        2da634:	e5911000 	ldr	r1, [r1]
        2da638:	eb63a6fc 	bl	1bc4230 <$EQRef__FlT1>
        2da63c:	e3300000 	teq	r0, #0	; 0x0
        2da640:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2da644:	e5940000 	ldr	r0, [r4]
        2da648:	e5900000 	ldr	r0, [r0]
        2da64c:	eb5d9eaf 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2da650:	e5900010 	ldr	r0, [r0, #16]
        2da654:	e590007c 	ldr	r0, [r0, #124]
        2da658:	eb5d8e09 	bl	1a3de84 <$CheckWriteProtect(TStore *)>
        2da65c:	e5950000 	ldr	r0, [r5]
        2da660:	e5900000 	ldr	r0, [r0]
        2da664:	eb63ab07 	bl	1bc5288 <$IsFaultBlock(long)>
        2da668:	e3300000 	teq	r0, #0	; 0x0
        2da66c:	0a00002d 	beq	2da728 <EntryReplaceCommon__FRC6RefVarT1i+0x1a0>
        2da670:	e5950000 	ldr	r0, [r5]
        2da674:	e5900000 	ldr	r0, [r0]
        2da678:	eb63ab1d 	bl	1bc52f4 <$ObjectPtr(long)>
        2da67c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2da680:	e3a00002 	mov	r0, #2	; 0x2
        2da684:	eb639eb0 	bl	1bc214c <$AllocateRefHandle(long)>
        2da688:	e1a08000 	mov	r8, r0
        2da68c:	e3a00002 	mov	r0, #2	; 0x2
        2da690:	eb639ead 	bl	1bc214c <$AllocateRefHandle(long)>
        2da694:	e1a07000 	mov	r7, r0
        2da698:	e5950000 	ldr	r0, [r5]
        2da69c:	e5900000 	ldr	r0, [r0]
        2da6a0:	eb5d9e9a 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2da6a4:	e590100c 	ldr	r1, [r0, #12]
        2da6a8:	e5881000 	str	r1, [r8]
        2da6ac:	e5900018 	ldr	r0, [r0, #24]
        2da6b0:	e5870000 	str	r0, [r7]
        2da6b4:	e5980000 	ldr	r0, [r8]
        2da6b8:	e59f1064 	ldr	r1, [pc, #64]	; 2da724 <EntryReplaceCommon__FRC6RefVarT1i+0x19c>
        2da6bc:	e5911000 	ldr	r1, [r1]
        2da6c0:	e5911000 	ldr	r1, [r1]
        2da6c4:	eb63a6e5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2da6c8:	eb639e9f 	bl	1bc214c <$AllocateRefHandle(long)>
        2da6cc:	e58d0000 	str	r0, [sp]
        2da6d0:	e1a0000d 	mov	r0, sp
        2da6d4:	e1a01005 	mov	r1, r5
        2da6d8:	eb5d8dfe 	bl	1a3ded8 <$DeleteEntryFromCache__FRC6RefVarT1>
        2da6dc:	e59d0000 	ldr	r0, [sp]
        2da6e0:	eb63a2b5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da6e4:	e5979000 	ldr	r9, [r7]
        2da6e8:	e5940000 	ldr	r0, [r4]
        2da6ec:	e5900000 	ldr	r0, [r0]
        2da6f0:	eb5d9e86 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2da6f4:	e5a09018 	str	r9, [r0, #24]!
        2da6f8:	e1a00007 	mov	r0, r7
        2da6fc:	eb63a2ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da700:	e1a00008 	mov	r0, r8
        2da704:	eb63a2ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da708:	e28dd004 	add	sp, sp, #4	; 0x4
        2da70c:	ea00000c 	b	2da744 <EntryReplaceCommon__FRC6RefVarT1i+0x1bc>
        2da710:	ffff4477 	swinv	0x00ff4477
        2da714:	003712fc 	ldreqsh	r1, [r7], -ip
        2da718:	00682c20 	rsbeq	r2, r8, r0, lsr #24
        2da71c:	00682c30 	rsbeq	r2, r8, r0, lsr ip
        2da720:	00371310 	eoreqs	r1, r7, r0, lsl r3
        2da724:	00682268 	rsbeq	r2, r8, r8, ror #4
        2da728:	e1a00005 	mov	r0, r5
        2da72c:	eb639e8e 	bl	1bc216c <$Clone(RefVar const &)>
        2da730:	e1a07000 	mov	r7, r0
        2da734:	e5940000 	ldr	r0, [r4]
        2da738:	e5900000 	ldr	r0, [r0]
        2da73c:	eb5d9e73 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2da740:	e5a07018 	str	r7, [r0, #24]!
        2da744:	e3360000 	teq	r6, #0	; 0x0
        2da748:	e1a00004 	mov	r0, r4
        2da74c:	0a000001 	beq	2da758 <EntryReplaceCommon__FRC6RefVarT1i+0x1d0>
        2da750:	eb63a2a8 	bl	1bc31f8 <$EntryChangeWithModTime(RefVar const &)>
        2da754:	ea000000 	b	2da75c <EntryReplaceCommon__FRC6RefVarT1i+0x1d4>
        2da758:	eb63a2a4 	bl	1bc31f0 <$EntryChange(RefVar const &)>
        2da75c:	e5950000 	ldr	r0, [r5]
        2da760:	e5900000 	ldr	r0, [r0]
        2da764:	e5941000 	ldr	r1, [r4]
        2da768:	e5911000 	ldr	r1, [r1]
        2da76c:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2da770:	ea63aef2 	b	1bc6340 <$ReplaceObjectRef__FlT1>
    */
}

/**
 * Symbol: EntryReplace__FRC6RefVarT1
 * Address: 002da860
 */
void globals::EntryReplace() {
    /*
        2da860:	e3a02000 	mov	r2, #0	; 0x0
        2da864:	ea5d91ac 	b	1a3ef1c <$EntryReplaceCommon__FRC6RefVarT1i>
    */
}

/**
 * Symbol: EntryReplaceWithModTime__FRC6RefVarT1
 * Address: 002da868
 */
void globals::EntryReplaceWithModTime() {
    /*
        2da868:	e3a02001 	mov	r2, #1	; 0x1
        2da86c:	ea5d91aa 	b	1a3ef1c <$EntryReplaceCommon__FRC6RefVarT1i>
    */
}

/**
 * Symbol: EntryUndoChanges(RefVar const &)
 * Address: 002da870
 */
EntryUndoChanges(RefVar const &) {
    /*
        2da870:	e1a0c00d 	mov	ip, sp
        2da874:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2da878:	e24cb004 	sub	fp, ip, #4	; 0x4
        2da87c:	e1a04000 	mov	r4, r0
        2da880:	e5900000 	ldr	r0, [r0]
        2da884:	e5900000 	ldr	r0, [r0]
        2da888:	eb63aa7e 	bl	1bc5288 <$IsFaultBlock(long)>
        2da88c:	e3300000 	teq	r0, #0	; 0x0
        2da890:	1a000004 	bne	2da8a8 <EntryUndoChanges(RefVar const &)+0x38>
        2da894:	e59f103c 	ldr	r1, [pc, #3c]	; 2da8d8 <EntryUndoChanges(RefVar const &)+0x68>
        2da898:	e59f003c 	ldr	r0, [pc, #3c]	; 2da8dc <EntryUndoChanges(RefVar const &)+0x6c>
        2da89c:	e5900000 	ldr	r0, [r0]
        2da8a0:	e3a02000 	mov	r2, #0	; 0x0
        2da8a4:	eb64223c 	bl	1be319c <$Throw>
        2da8a8:	e1a00004 	mov	r0, r4
        2da8ac:	eb5db6e6 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2da8b0:	e3300000 	teq	r0, #0	; 0x0
        2da8b4:	159f1024 	ldrne	r1, [pc, #24]	; 2da8e0 <EntryUndoChanges(RefVar const &)+0x70>
        2da8b8:	11a00004 	movne	r0, r4
        2da8bc:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2da8c0:	1a5dd7d8 	bne	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2da8c4:	e1a00004 	mov	r0, r4
        2da8c8:	eb5daa82 	bl	1a452d8 <$AbortLargeBinaries(RefVar const &)>
        2da8cc:	e1a00004 	mov	r0, r4
        2da8d0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2da8d4:	ea5da65e 	b	1a44254 <$UncacheIfFaultBlock(RefVar const &)>
        2da8d8:	ffff4477 	swinv	0x00ff4477
        2da8dc:	003712fc 	ldreqsh	r1, [r7], -ip
        2da8e0:	00682c58 	rsbeq	r2, r8, r8, asr ip
    */
}

/**
 * Symbol: EntryCopy__FRC6RefVarT1
 * Address: 002da8e4
 */
void globals::EntryCopy() {
    /*
        2da8e4:	e1a0c00d 	mov	ip, sp
        2da8e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2da8ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2da8f0:	e1a04000 	mov	r4, r0
        2da8f4:	e1a05001 	mov	r5, r1
        2da8f8:	eb5db6d3 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2da8fc:	e3300000 	teq	r0, #0	; 0x0
        2da900:	0a000004 	beq	2da918 <EntryCopy__FRC6RefVarT1+0x34>
        2da904:	e1a02005 	mov	r2, r5
        2da908:	e59f1054 	ldr	r1, [pc, #54]	; 2da964 <EntryCopy__FRC6RefVarT1+0x80>
        2da90c:	e1a00004 	mov	r0, r4
        2da910:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2da914:	ea5dd7c2 	b	1a50824 <$ForwardEntryMessage__FRC6RefVarN21>
        2da918:	e24dd008 	sub	sp, sp, #8	; 0x8
        2da91c:	e1a00004 	mov	r0, r4
        2da920:	eb639e11 	bl	1bc216c <$Clone(RefVar const &)>
        2da924:	eb639e08 	bl	1bc214c <$AllocateRefHandle(long)>
        2da928:	e58d0000 	str	r0, [sp]
        2da92c:	e1a0100d 	mov	r1, sp
        2da930:	e1a00005 	mov	r0, r5
        2da934:	eb63b291 	bl	1bc7380 <$SoupAdd__FRC6RefVarT1>
        2da938:	eb639e03 	bl	1bc214c <$AllocateRefHandle(long)>
        2da93c:	e58d0004 	str	r0, [sp, #4]
        2da940:	e59d0000 	ldr	r0, [sp]
        2da944:	eb63a21c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da948:	e28d0004 	add	r0, sp, #4	; 0x4
        2da94c:	eb5da640 	bl	1a44254 <$UncacheIfFaultBlock(RefVar const &)>
        2da950:	e59d0004 	ldr	r0, [sp, #4]
        2da954:	e5904000 	ldr	r4, [r0]
        2da958:	eb63a217 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da95c:	e1a00004 	mov	r0, r4
        2da960:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2da964:	00682be8 	rsbeq	r2, r8, r8, ror #23
    */
}

/**
 * Symbol: EntryMove__FRC6RefVarT1
 * Address: 002da968
 */
void globals::EntryMove() {
    /*
        2da968:	e1a0c00d 	mov	ip, sp
        2da96c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2da970:	e24cb004 	sub	fp, ip, #4	; 0x4
        2da974:	e1a04000 	mov	r4, r0
        2da978:	e1a05001 	mov	r5, r1
        2da97c:	e5900000 	ldr	r0, [r0]
        2da980:	e5900000 	ldr	r0, [r0]
        2da984:	eb63aa3f 	bl	1bc5288 <$IsFaultBlock(long)>
        2da988:	e59f803c 	ldr	r8, [pc, #3c]	; 2da9cc <EntryMove__FRC6RefVarT1+0x64>
        2da98c:	e3300000 	teq	r0, #0	; 0x0
        2da990:	1a000003 	bne	2da9a4 <EntryMove__FRC6RefVarT1+0x3c>
        2da994:	e59f1034 	ldr	r1, [pc, #34]	; 2da9d0 <EntryMove__FRC6RefVarT1+0x68>
        2da998:	e3a02000 	mov	r2, #0	; 0x0
        2da99c:	e5980000 	ldr	r0, [r8]
        2da9a0:	eb6421fd 	bl	1be319c <$Throw>
        2da9a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2da9a8:	e1a00004 	mov	r0, r4
        2da9ac:	eb5db6a6 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2da9b0:	e3300000 	teq	r0, #0	; 0x0
        2da9b4:	0a000007 	beq	2da9d8 <EntryMove__FRC6RefVarT1+0x70>
        2da9b8:	e1a02005 	mov	r2, r5
        2da9bc:	e59f1010 	ldr	r1, [pc, #10]	; 2da9d4 <EntryMove__FRC6RefVarT1+0x6c>
        2da9c0:	e1a00004 	mov	r0, r4
        2da9c4:	eb5dd796 	bl	1a50824 <$ForwardEntryMessage__FRC6RefVarN21>
        2da9c8:	ea000064 	b	2dab60 <EntryMove__FRC6RefVarT1+0x1f8>
        2da9cc:	003712fc 	ldreqsh	r1, [r7], -ip
        2da9d0:	ffff4477 	swinv	0x00ff4477
        2da9d4:	00682c00 	rsbeq	r2, r8, r0, lsl #24
        2da9d8:	e1a00005 	mov	r0, r5
        2da9dc:	eb5e159f 	bl	1a60060 <$PlainSoupGetStore>
        2da9e0:	eb639dd9 	bl	1bc214c <$AllocateRefHandle(long)>
        2da9e4:	e58d0000 	str	r0, [sp]
        2da9e8:	e1a0000d 	mov	r0, sp
        2da9ec:	eb5dcb38 	bl	1a4d6d4 <$CheckWriteProtect(RefVar const &)>
        2da9f0:	e59d0000 	ldr	r0, [sp]
        2da9f4:	eb63a1f0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2da9f8:	e5940000 	ldr	r0, [r4]
        2da9fc:	e5900000 	ldr	r0, [r0]
        2daa00:	eb63aa3b 	bl	1bc52f4 <$ObjectPtr(long)>
        2daa04:	e24dd004 	sub	sp, sp, #4	; 0x4
        2daa08:	e3a00002 	mov	r0, #2	; 0x2
        2daa0c:	eb639dce 	bl	1bc214c <$AllocateRefHandle(long)>
        2daa10:	e1a06000 	mov	r6, r0
        2daa14:	e3a00002 	mov	r0, #2	; 0x2
        2daa18:	eb639dcb 	bl	1bc214c <$AllocateRefHandle(long)>
        2daa1c:	e58d0000 	str	r0, [sp]
        2daa20:	e5940000 	ldr	r0, [r4]
        2daa24:	e5900000 	ldr	r0, [r0]
        2daa28:	eb5d9db8 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2daa2c:	e1a07000 	mov	r7, r0
        2daa30:	e590000c 	ldr	r0, [r0, #12]
        2daa34:	e5860000 	str	r0, [r6]
        2daa38:	e5979010 	ldr	r9, [r7, #16]
        2daa3c:	e3390000 	teq	r9, #0	; 0x0
        2daa40:	1a000004 	bne	2daa58 <EntryMove__FRC6RefVarT1+0xf0>
        2daa44:	e3a0106e 	mov	r1, #110	; 0x6e
        2daa48:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        2daa4c:	e3a02000 	mov	r2, #0	; 0x0
        2daa50:	e5980000 	ldr	r0, [r8]
        2daa54:	eb6421d0 	bl	1be319c <$Throw>
        2daa58:	e5b9007c 	ldr	r0, [r9, #124]!
        2daa5c:	eb5d8d08 	bl	1a3de84 <$CheckWriteProtect(TStore *)>
        2daa60:	e5970018 	ldr	r0, [r7, #24]
        2daa64:	e59d1000 	ldr	r1, [sp]
        2daa68:	e5810000 	str	r0, [r1]
        2daa6c:	e3a00002 	mov	r0, #2	; 0x2
        2daa70:	e5a70018 	str	r0, [r7, #24]!
        2daa74:	e5960000 	ldr	r0, [r6]
        2daa78:	e5951000 	ldr	r1, [r5]
        2daa7c:	e5911000 	ldr	r1, [r1]
        2daa80:	eb63a5ea 	bl	1bc4230 <$EQRef__FlT1>
        2daa84:	e3300000 	teq	r0, #0	; 0x0
        2daa88:	0a000004 	beq	2daaa0 <EntryMove__FRC6RefVarT1+0x138>
        2daa8c:	e59d0000 	ldr	r0, [sp]
        2daa90:	eb63a1c9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2daa94:	e1a00006 	mov	r0, r6
        2daa98:	eb63a1c7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2daa9c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2daaa0:	e1a0100d 	mov	r1, sp
        2daaa4:	e1a00005 	mov	r0, r5
        2daaa8:	eb5e1563 	bl	1a6003c <$PlainSoupAdd>
        2daaac:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2daab0:	e5960000 	ldr	r0, [r6]
        2daab4:	e59f10a8 	ldr	r1, [pc, #a8]	; 2dab64 <EntryMove__FRC6RefVarT1+0x1fc>
        2daab8:	e5911000 	ldr	r1, [r1]
        2daabc:	e5911000 	ldr	r1, [r1]
        2daac0:	eb63a5e6 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2daac4:	eb639da0 	bl	1bc214c <$AllocateRefHandle(long)>
        2daac8:	e58d0000 	str	r0, [sp]
        2daacc:	e1a0500d 	mov	r5, sp
        2daad0:	e59f0090 	ldr	r0, [pc, #90]	; 2dab68 <EntryMove__FRC6RefVarT1+0x200>
        2daad4:	e5900000 	ldr	r0, [r0]
        2daad8:	eb639d9b 	bl	1bc214c <$AllocateRefHandle(long)>
        2daadc:	e58d0004 	str	r0, [sp, #4]
        2daae0:	e28d0004 	add	r0, sp, #4	; 0x4
        2daae4:	e1a01005 	mov	r1, r5
        2daae8:	eb5d911c 	bl	1a3ef60 <$FindSoupInCache__FRC6RefVarT1>
        2daaec:	eb639d96 	bl	1bc214c <$AllocateRefHandle(long)>
        2daaf0:	e58d0008 	str	r0, [sp, #8]
        2daaf4:	e59d0000 	ldr	r0, [sp]
        2daaf8:	eb63a1af 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2daafc:	e59d0004 	ldr	r0, [sp, #4]
        2dab00:	eb63a1ad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dab04:	e59d0008 	ldr	r0, [sp, #8]
        2dab08:	e5900000 	ldr	r0, [r0]
        2dab0c:	e3300002 	teq	r0, #2	; 0x2
        2dab10:	0a000004 	beq	2dab28 <EntryMove__FRC6RefVarT1+0x1c0>
        2dab14:	e28d300c 	add	r3, sp, #12	; 0xc
        2dab18:	e1a02004 	mov	r2, r4
        2dab1c:	e28d0008 	add	r0, sp, #8	; 0x8
        2dab20:	e3a01006 	mov	r1, #6	; 0x6
        2dab24:	eb5dae07 	bl	1a46348 <$EachSoupCursorDo(RefVar const &, long, long, long)>
        2dab28:	e1a00004 	mov	r0, r4
        2dab2c:	eb63a5b6 	bl	1bc420c <$EntryRemoveFromSoup(RefVar const &)>
        2dab30:	e5940000 	ldr	r0, [r4]
        2dab34:	e5900000 	ldr	r0, [r0]
        2dab38:	e59d100c 	ldr	r1, [sp, #12]
        2dab3c:	e5911000 	ldr	r1, [r1]
        2dab40:	eb63adfe 	bl	1bc6340 <$ReplaceObjectRef__FlT1>
        2dab44:	e59d0008 	ldr	r0, [sp, #8]
        2dab48:	eb63a19b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dab4c:	e5bd000c 	ldr	r0, [sp, #12]!
        2dab50:	eb63a199 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dab54:	e1a00006 	mov	r0, r6
        2dab58:	eb63a197 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dab5c:	e28dd004 	add	sp, sp, #4	; 0x4
        2dab60:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2dab64:	00684b10 	rsbeq	r4, r8, r0, lsl fp
        2dab68:	0c105700 	ldceq	7, cr5, [r0]
    */
}

/**
 * Symbol: EntryDirty1(Object *, EntryDirtyLink *)
 * Address: 002dab6c
 */
EntryDirty1(Object *, EntryDirtyLink *) {
    /*
        2dab6c:	e1a0c00d 	mov	ip, sp
        2dab70:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2dab74:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dab78:	e1a04000 	mov	r4, r0
        2dab7c:	e1b00001 	movs	r0, r1
        2dab80:	e3a08000 	mov	r8, #0	; 0x0
        2dab84:	0a000005 	beq	2daba0 <EntryDirty1(Object *, EntryDirtyLink *)+0x34>
        2dab88:	e5902000 	ldr	r2, [r0]
        2dab8c:	e1340002 	teq	r4, r2
        2dab90:	0a000021 	beq	2dac1c <EntryDirty1(Object *, EntryDirtyLink *)+0xb0>
        2dab94:	e5900004 	ldr	r0, [r0, #4]
        2dab98:	e3300000 	teq	r0, #0	; 0x0
        2dab9c:	1afffff9 	bne	2dab88 <EntryDirty1(Object *, EntryDirtyLink *)+0x1c>
        2daba0:	e5940000 	ldr	r0, [r4]
        2daba4:	e3100080 	tst	r0, #128	; 0x80
        2daba8:	e3a07001 	mov	r7, #1	; 0x1
        2dabac:	11a00007 	movne	r0, r7
        2dabb0:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2dabb4:	e3100001 	tst	r0, #1	; 0x1
        2dabb8:	0a000017 	beq	2dac1c <EntryDirty1(Object *, EntryDirtyLink *)+0xb0>
        2dabbc:	e52d1004 	str	r1, [sp, -#4]!
        2dabc0:	e52d4004 	str	r4, [sp, -#4]!
        2dabc4:	e3e00007 	mvn	r0, #7	; 0x7
        2dabc8:	e5941000 	ldr	r1, [r4]
        2dabcc:	e0800421 	add	r0, r0, r1, lsr #8
        2dabd0:	e1a06120 	mov	r6, r0, lsr #2
        2dabd4:	e3a05001 	mov	r5, #1	; 0x1
        2dabd8:	e3560001 	cmp	r6, #1	; 0x1
        2dabdc:	da00000d 	ble	2dac18 <EntryDirty1(Object *, EntryDirtyLink *)+0xac>
        2dabe0:	e0840105 	add	r0, r4, r5, lsl #2
        2dabe4:	e5900008 	ldr	r0, [r0, #8]
        2dabe8:	e2001003 	and	r1, r0, #3	; 0x3
        2dabec:	e3310001 	teq	r1, #1	; 0x1
        2dabf0:	1a000005 	bne	2dac0c <EntryDirty1(Object *, EntryDirtyLink *)+0xa0>
        2dabf4:	eb63a9be 	bl	1bc52f4 <$ObjectPtr(long)>
        2dabf8:	e1a0100d 	mov	r1, sp
        2dabfc:	eb5d90c5 	bl	1a3ef18 <$EntryDirty1(Object *, EntryDirtyLink *)>
        2dac00:	e3300000 	teq	r0, #0	; 0x0
        2dac04:	11a00007 	movne	r0, r7
        2dac08:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2dac0c:	e2855001 	add	r5, r5, #1	; 0x1
        2dac10:	e1550006 	cmp	r5, r6
        2dac14:	bafffff1 	blt	2dabe0 <EntryDirty1(Object *, EntryDirtyLink *)+0x74>
        2dac18:	e28dd008 	add	sp, sp, #8	; 0x8
        2dac1c:	e1a00008 	mov	r0, r8
        2dac20:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: EntryDirty(long)
 * Address: 002dac24
 */
EntryDirty(long) {
    /*
        2dac24:	e1a0c00d 	mov	ip, sp
        2dac28:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dac2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dac30:	e1a04000 	mov	r4, r0
        2dac34:	e2000003 	and	r0, r0, #3	; 0x3
        2dac38:	e3a05000 	mov	r5, #0	; 0x0
        2dac3c:	e3300001 	teq	r0, #1	; 0x1
        2dac40:	1a000008 	bne	2dac68 <EntryDirty(long)+0x44>
        2dac44:	e1a00004 	mov	r0, r4
        2dac48:	eb63a98e 	bl	1bc5288 <$IsFaultBlock(long)>
        2dac4c:	e3300000 	teq	r0, #0	; 0x0
        2dac50:	0a000006 	beq	2dac70 <EntryDirty(long)+0x4c>
        2dac54:	e1a00004 	mov	r0, r4
        2dac58:	eb5d9d2c 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2dac5c:	e5900018 	ldr	r0, [r0, #24]
        2dac60:	e3300002 	teq	r0, #2	; 0x2
        2dac64:	1a000001 	bne	2dac70 <EntryDirty(long)+0x4c>
        2dac68:	e1a00005 	mov	r0, r5
        2dac6c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2dac70:	e1a00004 	mov	r0, r4
        2dac74:	eb63a99e 	bl	1bc52f4 <$ObjectPtr(long)>
        2dac78:	e3a01000 	mov	r1, #0	; 0x0
        2dac7c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2dac80:	ea5d90a4 	b	1a3ef18 <$EntryDirty1(Object *, EntryDirtyLink *)>
    */
}

/**
 * Symbol: EntryIsResident(long)
 * Address: 002dac84
 */
EntryIsResident(long) {
    /*
        2dac84:	e1a0c00d 	mov	ip, sp
        2dac88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dac8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dac90:	e1a04000 	mov	r4, r0
        2dac94:	eb63a97b 	bl	1bc5288 <$IsFaultBlock(long)>
        2dac98:	e3300000 	teq	r0, #0	; 0x0
        2dac9c:	1a000004 	bne	2dacb4 <EntryIsResident(long)+0x30>
        2daca0:	e59f1024 	ldr	r1, [pc, #24]	; 2daccc <EntryIsResident(long)+0x48>
        2daca4:	e59f0024 	ldr	r0, [pc, #24]	; 2dacd0 <EntryIsResident(long)+0x4c>
        2daca8:	e5900000 	ldr	r0, [r0]
        2dacac:	e3a02000 	mov	r2, #0	; 0x0
        2dacb0:	eb642139 	bl	1be319c <$Throw>
        2dacb4:	e1a00004 	mov	r0, r4
        2dacb8:	eb5d9d14 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2dacbc:	e5900018 	ldr	r0, [r0, #24]
        2dacc0:	e2500002 	subs	r0, r0, #2	; 0x2
        2dacc4:	13a00001 	movne	r0, #1	; 0x1
        2dacc8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2daccc:	ffff4477 	swinv	0x00ff4477
        2dacd0:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: EntryValid(RefVar const &)
 * Address: 002dacd4
 */
EntryValid(RefVar const &) {
    /*
        2dacd4:	e1a0c00d 	mov	ip, sp
        2dacd8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2dacdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dace0:	e1a05000 	mov	r5, r0
        2dace4:	e3a04000 	mov	r4, #0	; 0x0
        2dace8:	e5900000 	ldr	r0, [r0]
        2dacec:	e5900000 	ldr	r0, [r0]
        2dacf0:	eb63a964 	bl	1bc5288 <$IsFaultBlock(long)>
        2dacf4:	e3300000 	teq	r0, #0	; 0x0
        2dacf8:	0a00002b 	beq	2dadac <EntryValid(RefVar const &)+0xd8>
        2dacfc:	e5950000 	ldr	r0, [r5]
        2dad00:	e5900000 	ldr	r0, [r0]
        2dad04:	eb5d9d01 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2dad08:	e5900010 	ldr	r0, [r0, #16]
        2dad0c:	e3300002 	teq	r0, #2	; 0x2
        2dad10:	1a000006 	bne	2dad30 <EntryValid(RefVar const &)+0x5c>
        2dad14:	e59f1010 	ldr	r1, [pc, #10]	; 2dad2c <EntryValid(RefVar const &)+0x58>
        2dad18:	e1a00005 	mov	r0, r5
        2dad1c:	eb5dd6c1 	bl	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2dad20:	e3300002 	teq	r0, #2	; 0x2
        2dad24:	0a00001f 	beq	2dada8 <EntryValid(RefVar const &)+0xd4>
        2dad28:	ea00001a 	b	2dad98 <EntryValid(RefVar const &)+0xc4>
        2dad2c:	00682c68 	rsbeq	r2, r8, r8, ror #24
        2dad30:	e3300000 	teq	r0, #0	; 0x0
        2dad34:	0a00001c 	beq	2dadac <EntryValid(RefVar const &)+0xd8>
        2dad38:	e590007c 	ldr	r0, [r0, #124]
        2dad3c:	e1a06000 	mov	r6, r0
        2dad40:	eb60e32b 	bl	1b139f4 <$IsValidStore(TStore const *)>
        2dad44:	e1b04000 	movs	r4, r0
        2dad48:	1a000017 	bne	2dadac <EntryValid(RefVar const &)+0xd8>
        2dad4c:	e59f504c 	ldr	r5, [pc, #4c]	; 2dada0 <EntryValid(RefVar const &)+0xcc>
        2dad50:	e5950000 	ldr	r0, [r5]
        2dad54:	eb63a954 	bl	1bc52ac <$Length(long)>
        2dad58:	e2504001 	subs	r4, r0, #1	; 0x1
        2dad5c:	4a00000b 	bmi	2dad90 <EntryValid(RefVar const &)+0xbc>
        2dad60:	e59f703c 	ldr	r7, [pc, #3c]	; 2dada4 <EntryValid(RefVar const &)+0xd0>
        2dad64:	e1a01004 	mov	r1, r4
        2dad68:	e5950000 	ldr	r0, [r5]
        2dad6c:	eb63a538 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2dad70:	e5971000 	ldr	r1, [r7]
        2dad74:	e5911000 	ldr	r1, [r1]
        2dad78:	eb63a538 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2dad7c:	e590007c 	ldr	r0, [r0, #124]
        2dad80:	e1300006 	teq	r0, r6
        2dad84:	0a000001 	beq	2dad90 <EntryValid(RefVar const &)+0xbc>
        2dad88:	e2544001 	subs	r4, r4, #1	; 0x1
        2dad8c:	5afffff4 	bpl	2dad64 <EntryValid(RefVar const &)+0x90>
        2dad90:	e3540000 	cmp	r4, #0	; 0x0
        2dad94:	ba000003 	blt	2dada8 <EntryValid(RefVar const &)+0xd4>
        2dad98:	e3a04001 	mov	r4, #1	; 0x1
        2dad9c:	ea000002 	b	2dadac <EntryValid(RefVar const &)+0xd8>
        2dada0:	0c1016e0 	ldceq	6, cr1, [r0], -#896
        2dada4:	00684868 	rsbeq	r4, r8, r8, ror #16
        2dada8:	e3a04000 	mov	r4, #0	; 0x0
        2dadac:	e1a00004 	mov	r0, r4
        2dadb0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: EntryCachedObject(RefVar const &)
 * Address: 002daf84
 */
EntryCachedObject(RefVar const &) {
    /*
        2daf84:	e1a0c00d 	mov	ip, sp
        2daf88:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2daf8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2daf90:	e1a04000 	mov	r4, r0
        2daf94:	eb5db52b 	bl	1a48448 <$CheckProxyEntry(RefVar const &)>
        2daf98:	e5940000 	ldr	r0, [r4]
        2daf9c:	e5900000 	ldr	r0, [r0]
        2dafa0:	eb5d9c5a 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2dafa4:	e5900018 	ldr	r0, [r0, #24]
        2dafa8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: EntrySetCachedObject__FRC6RefVarT1
 * Address: 002dafac
 */
void globals::EntrySetCachedObject() {
    /*
        2dafac:	e1a0c00d 	mov	ip, sp
        2dafb0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dafb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dafb8:	e1a04000 	mov	r4, r0
        2dafbc:	e1a05001 	mov	r5, r1
        2dafc0:	eb5db520 	bl	1a48448 <$CheckProxyEntry(RefVar const &)>
        2dafc4:	e5950000 	ldr	r0, [r5]
        2dafc8:	e5905000 	ldr	r5, [r0]
        2dafcc:	e5940000 	ldr	r0, [r4]
        2dafd0:	e5900000 	ldr	r0, [r0]
        2dafd4:	eb5d9c4d 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2dafd8:	e5a05018 	str	r5, [r0, #24]!
        2dafdc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: EntryHandler(RefVar const &)
 * Address: 002dafe0
 */
EntryHandler(RefVar const &) {
    /*
        2dafe0:	e1a0c00d 	mov	ip, sp
        2dafe4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dafe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dafec:	e1a04000 	mov	r4, r0
        2daff0:	eb5db514 	bl	1a48448 <$CheckProxyEntry(RefVar const &)>
        2daff4:	e5940000 	ldr	r0, [r4]
        2daff8:	e5900000 	ldr	r0, [r0]
        2daffc:	eb5d9c43 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2db000:	e590000c 	ldr	r0, [r0, #12]
        2db004:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: EntrySetHandler__FRC6RefVarT1
 * Address: 002db008
 */
void globals::EntrySetHandler() {
    /*
        2db008:	e1a0c00d 	mov	ip, sp
        2db00c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2db010:	e24cb004 	sub	fp, ip, #4	; 0x4
        2db014:	e1a04000 	mov	r4, r0
        2db018:	e1a05001 	mov	r5, r1
        2db01c:	eb5db509 	bl	1a48448 <$CheckProxyEntry(RefVar const &)>
        2db020:	e5950000 	ldr	r0, [r5]
        2db024:	e5905000 	ldr	r5, [r0]
        2db028:	e5940000 	ldr	r0, [r4]
        2db02c:	e5900000 	ldr	r0, [r0]
        2db030:	eb5d9c36 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2db034:	e5a0500c 	str	r5, [r0, #12]!
        2db038:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: EntrySoup(RefVar const &)
 * Address: 002db310
 */
EntrySoup(RefVar const &) {
    /*
        2db310:	e1a0c00d 	mov	ip, sp
        2db314:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2db318:	e24cb004 	sub	fp, ip, #4	; 0x4
        2db31c:	e1a04000 	mov	r4, r0
        2db320:	e5900000 	ldr	r0, [r0]
        2db324:	e5900000 	ldr	r0, [r0]
        2db328:	eb63a7d6 	bl	1bc5288 <$IsFaultBlock(long)>
        2db32c:	e3300000 	teq	r0, #0	; 0x0
        2db330:	1a000004 	bne	2db348 <EntrySoup(RefVar const &)+0x38>
        2db334:	e59f1040 	ldr	r1, [pc, #40]	; 2db37c <EntrySoup(RefVar const &)+0x6c>
        2db338:	e59f0040 	ldr	r0, [pc, #40]	; 2db380 <EntrySoup(RefVar const &)+0x70>
        2db33c:	e5900000 	ldr	r0, [r0]
        2db340:	e3a02000 	mov	r2, #0	; 0x0
        2db344:	eb641f94 	bl	1be319c <$Throw>
        2db348:	e5940000 	ldr	r0, [r4]
        2db34c:	e5900000 	ldr	r0, [r0]
        2db350:	eb5d9b6e 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2db354:	e1a05000 	mov	r5, r0
        2db358:	e1a00004 	mov	r0, r4
        2db35c:	eb5db43a 	bl	1a4844c <$IsProxyEntry(RefVar const &)>
        2db360:	e3300000 	teq	r0, #0	; 0x0
        2db364:	05b5000c 	ldreq	r0, [r5, #12]!
        2db368:	159f1014 	ldrne	r1, [pc, #14]	; 2db384 <EntrySoup(RefVar const &)+0x74>
        2db36c:	11a00004 	movne	r0, r4
        2db370:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2db374:	1a5dd52b 	bne	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2db378:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2db37c:	ffff4477 	swinv	0x00ff4477
        2db380:	003712fc 	ldreqsh	r1, [r7], -ip
        2db384:	00682c40 	rsbeq	r2, r8, r0, asr #24
    */
}

/**
 * Symbol: EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)
 * Address: 002db7f0
 */
EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long) {
    /*
        2db7f0:	e1a0c00d 	mov	ip, sp
        2db7f4:	e92dd8f3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, fp, ip, lr, pc}
        2db7f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2db7fc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2db800:	e3a00000 	mov	r0, #0	; 0x0
        2db804:	e58d0004 	str	r0, [sp, #4]
        2db808:	e51b0024 	ldr	r0, [fp, -#36]
        2db80c:	e5900000 	ldr	r0, [r0]
        2db810:	e5900000 	ldr	r0, [r0]
        2db814:	e59f10a0 	ldr	r1, [pc, #a0]	; 2db8bc <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0xcc>
        2db818:	e5911000 	ldr	r1, [r1]
        2db81c:	e5911000 	ldr	r1, [r1]
        2db820:	eb63a28e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2db824:	eb639a48 	bl	1bc214c <$AllocateRefHandle(long)>
        2db828:	e58d0000 	str	r0, [sp]
        2db82c:	e5900000 	ldr	r0, [r0]
        2db830:	e59f1088 	ldr	r1, [pc, #88]	; 2db8c0 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0xd0>
        2db834:	e5911000 	ldr	r1, [r1]
        2db838:	e5911000 	ldr	r1, [r1]
        2db83c:	eb63a287 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2db840:	eb639a41 	bl	1bc214c <$AllocateRefHandle(long)>
        2db844:	e1a04000 	mov	r4, r0
        2db848:	e5900000 	ldr	r0, [r0]
        2db84c:	e3a06000 	mov	r6, #0	; 0x0
        2db850:	e3300002 	teq	r0, #2	; 0x2
        2db854:	1a000067 	bne	2db9f8 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0x208>
        2db858:	e51b0024 	ldr	r0, [fp, -#36]
        2db85c:	e5900000 	ldr	r0, [r0]
        2db860:	e5900000 	ldr	r0, [r0]
        2db864:	e59f1058 	ldr	r1, [pc, #58]	; 2db8c4 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0xd4>
        2db868:	e5911000 	ldr	r1, [r1]
        2db86c:	e5911000 	ldr	r1, [r1]
        2db870:	eb63a27a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2db874:	e1a07000 	mov	r7, r0
        2db878:	e590007c 	ldr	r0, [r0, #124]
        2db87c:	e1a05000 	mov	r5, r0
        2db880:	eb000087 	bl	2dbaa4 <StoreWritable(TStore *)>
        2db884:	e3300000 	teq	r0, #0	; 0x0
        2db888:	059f5038 	ldreq	r5, [pc, #38]	; 2db8c8 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0xd8>
        2db88c:	0a000004 	beq	2db8a4 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0xb4>
        2db890:	e1a00005 	mov	r0, r5
        2db894:	eb5db6fc 	bl	1a4948c <$CanCreateLargeObjectsOnStore(TStore *)>
        2db898:	e3300000 	teq	r0, #0	; 0x0
        2db89c:	1a00000b 	bne	2db8d0 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0xe0>
        2db8a0:	e59f5024 	ldr	r5, [pc, #24]	; 2db8cc <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0xdc>
        2db8a4:	e1a00004 	mov	r0, r4
        2db8a8:	eb639e43 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2db8ac:	e59d0000 	ldr	r0, [sp]
        2db8b0:	eb639e41 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2db8b4:	e1a00005 	mov	r0, r5
        2db8b8:	ea000053 	b	2dba0c <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0x21c>
        2db8bc:	00685390 	streqb	r5, [r8], -#48
        2db8c0:	00682c78 	rsbeq	r2, r8, r8, ror ip
        2db8c4:	00684868 	rsbeq	r4, r8, r8, ror #16
        2db8c8:	ffffd693 	swinv	0x00ffd693
        2db8cc:	ffff4463 	swinv	0x00ff4463
        2db8d0:	e1a00005 	mov	r0, r5
        2db8d4:	eb608da0 	bl	1afef5c <TStore::$LockStore(void)>
        2db8d8:	e58d0004 	str	r0, [sp, #4]
        2db8dc:	e59d0004 	ldr	r0, [sp, #4]
        2db8e0:	e3300000 	teq	r0, #0	; 0x0
        2db8e4:	1a000029 	bne	2db990 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0x1a0>
        2db8e8:	e52d606c 	str	r6, [sp, -#108]!
        2db8ec:	e28d0008 	add	r0, sp, #8	; 0x8
        2db8f0:	eb635c1f 	bl	1bb2974 <$setjmp>
        2db8f4:	e51f603c 	ldr	r6, [pc, #ffffffc4]	; 2db8c0 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0xd0>
        2db8f8:	e3300000 	teq	r0, #0	; 0x0
        2db8fc:	13a04002 	movne	r4, #2	; 0x2
        2db900:	1a00002c 	bne	2db9b8 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0x1c8>
        2db904:	e1a0000d 	mov	r0, sp
        2db908:	eb6411db 	bl	1be007c <$AddExceptionHandler>
        2db90c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2db910:	e1a0200d 	mov	r2, sp
        2db914:	e1a00005 	mov	r0, r5
        2db918:	e3a01000 	mov	r1, #0	; 0x0
        2db91c:	eb6091bb 	bl	1b00010 <TStore::$NewObject(long, unsigned long *)>
        2db920:	e58d0074 	str	r0, [sp, #116]
        2db924:	e59d0074 	ldr	r0, [sp, #116]
        2db928:	e3300000 	teq	r0, #0	; 0x0
        2db92c:	1a000011 	bne	2db978 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0x188>
        2db930:	e24dd004 	sub	sp, sp, #4	; 0x4
        2db934:	e59d0004 	ldr	r0, [sp, #4]
        2db938:	e1a00100 	mov	r0, r0, lsl #2
        2db93c:	eb639a02 	bl	1bc214c <$AllocateRefHandle(long)>
        2db940:	e58d0000 	str	r0, [sp]
        2db944:	e1a0200d 	mov	r2, sp
        2db948:	e1a01006 	mov	r1, r6
        2db94c:	e28d0074 	add	r0, sp, #116	; 0x74
        2db950:	eb63aa84 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2db954:	e59d0000 	ldr	r0, [sp]
        2db958:	eb639e17 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2db95c:	e3a03000 	mov	r3, #0	; 0x0
        2db960:	e92d0008 	stmdb	sp!, {r3}
        2db964:	e24b2020 	sub	r2, fp, #32	; 0x20
        2db968:	e1a01007 	mov	r1, r7
        2db96c:	e28d0078 	add	r0, sp, #120	; 0x78
        2db970:	eb5dbae3 	bl	1a4a504 <$StorePermObject(RefVar const &, TStoreWrapper *, unsigned long &, CDynamicArray *, unsigned char *)>
        2db974:	e28dd008 	add	sp, sp, #8	; 0x8
        2db978:	e28dd004 	add	sp, sp, #4	; 0x4
        2db97c:	e1a0000d 	mov	r0, sp
        2db980:	eb6415cc 	bl	1be10b8 <$ExitHandler>
        2db984:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2db988:	e1a00005 	mov	r0, r5
        2db98c:	eb60b2b8 	bl	1b08474 <TStore::$UnlockStore(void)>
        2db990:	e24dd004 	sub	sp, sp, #4	; 0x4
        2db994:	e59d0008 	ldr	r0, [sp, #8]
        2db998:	e58d0000 	str	r0, [sp]
        2db99c:	e1a00004 	mov	r0, r4
        2db9a0:	eb639e05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2db9a4:	e59d0004 	ldr	r0, [sp, #4]
        2db9a8:	eb639e03 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2db9ac:	e59d0000 	ldr	r0, [sp]
        2db9b0:	e28dd004 	add	sp, sp, #4	; 0x4
        2db9b4:	ea000014 	b	2dba0c <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0x21c>
        2db9b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2db9bc:	e1a00004 	mov	r0, r4
        2db9c0:	eb6399e1 	bl	1bc214c <$AllocateRefHandle(long)>
        2db9c4:	e58d0000 	str	r0, [sp]
        2db9c8:	e1a0200d 	mov	r2, sp
        2db9cc:	e1a01006 	mov	r1, r6
        2db9d0:	e28d0070 	add	r0, sp, #112	; 0x70
        2db9d4:	eb63aa63 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2db9d8:	e59d0000 	ldr	r0, [sp]
        2db9dc:	eb639df6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2db9e0:	e1a00005 	mov	r0, r5
        2db9e4:	eb6057b0 	bl	1af18ac <TStore::$Abort(void)>
        2db9e8:	e28dd004 	add	sp, sp, #4	; 0x4
        2db9ec:	e1a0000d 	mov	r0, sp
        2db9f0:	eb6419d7 	bl	1be2154 <$NextHandler>
        2db9f4:	eaffffef 	b	2db9b8 <EnsureStoreHasEphemeralTracker(RefVar const &, unsigned long)+0x1c8>
        2db9f8:	e1a00004 	mov	r0, r4
        2db9fc:	eb639dee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dba00:	e59d0000 	ldr	r0, [sp]
        2dba04:	eb639dec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2dba08:	e1a00006 	mov	r0, r6
        2dba0c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: erf
 * Address: 002dbd8c
 */
void globals::erf() {
    /*
        2dbd8c:	e1a0c00d 	mov	ip, sp
        2dbd90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dbd94:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dbd98:	ed6d4206 	sfm	f4, 2, [sp, -#24]!
        2dbd9c:	e92d0003 	stmdb	sp!, {r0, r1}
        2dbda0:	ecbdc102 	ldfd	f4, [sp], #8
        2dbda4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2dbda8:	e3a04000 	mov	r4, #0	; 0x0
        2dbdac:	e1a0000d 	mov	r0, sp
        2dbdb0:	eb635f0f 	bl	1bb39f4 <$feholdexcept>
        2dbdb4:	ed2dc102 	stfd	f4, [sp, -#8]!
        2dbdb8:	e8bd0003 	ldmia	sp!, {r0, r1}
        2dbdbc:	eb649d07 	bl	1c031e0 <$__fpclassifyd>
        2dbdc0:	e3300000 	teq	r0, #0	; 0x0
        2dbdc4:	0a000006 	beq	2dbde4 <erf+0x58>
        2dbdc8:	ee00d189 	mvfd	f5, #1.0
        2dbdcc:	e3300001 	teq	r0, #1	; 0x1
        2dbdd0:	0a000008 	beq	2dbdf8 <erf+0x6c>
        2dbdd4:	e3300002 	teq	r0, #2	; 0x2
        2dbdd8:	0a000002 	beq	2dbde8 <erf+0x5c>
        2dbddc:	e3300063 	teq	r0, #99	; 0x63
        2dbde0:	1a00000b 	bne	2dbe14 <erf+0x88>
        2dbde4:	ee14418a 	mufd	f4, f4, #2.0
        2dbde8:	e1a0000d 	mov	r0, sp
        2dbdec:	eb636306 	bl	1bb4a0c <$feupdateenv>
        2dbdf0:	ee008184 	mvfd	f0, f4
        2dbdf4:	ea000004 	b	2dbe0c <erf+0x80>
        2dbdf8:	e1a0000d 	mov	r0, sp
        2dbdfc:	eb636302 	bl	1bb4a0c <$feupdateenv>
        2dbe00:	eed4f118 	cmfe	f4, #0.0
        2dbe04:	de108189 	mnfled	f0, #1.0
        2dbe08:	ce008185 	mvfgtd	f0, f5
        2dbe0c:	ed5b420a 	lfm	f4, 2, [fp, -#40]
        2dbe10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2dbe14:	e1a03004 	mov	r3, r4
        2dbe18:	e92d0008 	stmdb	sp!, {r3}
        2dbe1c:	ed2dd102 	stfd	f5, [sp, -#8]!
        2dbe20:	ed2dc102 	stfd	f4, [sp, -#8]!
        2dbe24:	e8bd000f 	ldmia	sp!, {r0, r1, r2, r3}
        2dbe28:	eb00003b 	bl	2dbf1c <ErrFunApprox>
        2dbe2c:	e28dd004 	add	sp, sp, #4	; 0x4
        2dbe30:	ed2dc102 	stfd	f4, [sp, -#8]!
        2dbe34:	ed2d8102 	stfd	f0, [sp, -#8]!
        2dbe38:	e8bd000f 	ldmia	sp!, {r0, r1, r2, r3}
        2dbe3c:	eb635ede 	bl	1bb39bc <$copysign>
        2dbe40:	ee00c180 	mvfd	f4, f0
        2dbe44:	eaffffe7 	b	2dbde8 <erf+0x5c>
    */
}

/**
 * Symbol: erfc
 * Address: 002dbe48
 */
void globals::erfc() {
    /*
        2dbe48:	e1a0c00d 	mov	ip, sp
        2dbe4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dbe50:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dbe54:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        2dbe58:	e92d0003 	stmdb	sp!, {r0, r1}
        2dbe5c:	ecbdc102 	ldfd	f4, [sp], #8
        2dbe60:	e24dd004 	sub	sp, sp, #4	; 0x4
        2dbe64:	e3a04001 	mov	r4, #1	; 0x1
        2dbe68:	ee00d188 	mvfd	f5, #0.0
        2dbe6c:	e1a0000d 	mov	r0, sp
        2dbe70:	eb635edf 	bl	1bb39f4 <$feholdexcept>
        2dbe74:	ed2dc102 	stfd	f4, [sp, -#8]!
        2dbe78:	e8bd0003 	ldmia	sp!, {r0, r1}
        2dbe7c:	eb649cd7 	bl	1c031e0 <$__fpclassifyd>
        2dbe80:	e3300000 	teq	r0, #0	; 0x0
        2dbe84:	0a000006 	beq	2dbea4 <erfc+0x5c>
        2dbe88:	ee00e18a 	mvfd	f6, #2.0
        2dbe8c:	e3300001 	teq	r0, #1	; 0x1
        2dbe90:	0a00000c 	beq	2dbec8 <erfc+0x80>
        2dbe94:	e3300002 	teq	r0, #2	; 0x2
        2dbe98:	0a000006 	beq	2dbeb8 <erfc+0x70>
        2dbe9c:	e3300063 	teq	r0, #99	; 0x63
        2dbea0:	1a00000f 	bne	2dbee4 <erfc+0x9c>
        2dbea4:	ee14418a 	mufd	f4, f4, #2.0
        2dbea8:	e1a0000d 	mov	r0, sp
        2dbeac:	eb6362d6 	bl	1bb4a0c <$feupdateenv>
        2dbeb0:	ee008184 	mvfd	f0, f4
        2dbeb4:	ea000008 	b	2dbedc <erfc+0x94>
        2dbeb8:	e1a0000d 	mov	r0, sp
        2dbebc:	eb6362d2 	bl	1bb4a0c <$feupdateenv>
        2dbec0:	ee008189 	mvfd	f0, #1.0
        2dbec4:	ea000004 	b	2dbedc <erfc+0x94>
        2dbec8:	e1a0000d 	mov	r0, sp
        2dbecc:	eb6362ce 	bl	1bb4a0c <$feupdateenv>
        2dbed0:	eed4f118 	cmfe	f4, #0.0
        2dbed4:	ca00000e 	bgt	2dbf14 <erfc+0xcc>
        2dbed8:	ee008186 	mvfd	f0, f6
        2dbedc:	ed5bc20d 	lfm	f4, 3, [fp, -#52]
        2dbee0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2dbee4:	e1a03004 	mov	r3, r4
        2dbee8:	e92d0008 	stmdb	sp!, {r3}
        2dbeec:	ed2dd102 	stfd	f5, [sp, -#8]!
        2dbef0:	ed2dc102 	stfd	f4, [sp, -#8]!
        2dbef4:	e8bd000f 	ldmia	sp!, {r0, r1, r2, r3}
        2dbef8:	eb000007 	bl	2dbf1c <ErrFunApprox>
        2dbefc:	e28dd004 	add	sp, sp, #4	; 0x4
        2dbf00:	ee00d180 	mvfd	f5, f0
        2dbf04:	e1a0000d 	mov	r0, sp
        2dbf08:	eb6362bf 	bl	1bb4a0c <$feupdateenv>
        2dbf0c:	eed4f118 	cmfe	f4, #0.0
        2dbf10:	be265185 	sufltd	f5, f6, f5
        2dbf14:	ee008185 	mvfd	f0, f5
        2dbf18:	eaffffef 	b	2dbedc <erfc+0x94>
    */
}

/**
 * Symbol: ErrFunApprox
 * Address: 002dbf1c
 */
void globals::ErrFunApprox() {
    /*
        2dbf1c:	e1a0c00d 	mov	ip, sp
        2dbf20:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dbf24:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dbf28:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        2dbf2c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2dbf30:	ecbd8102 	ldfd	f0, [sp], #8
        2dbf34:	ecbdd102 	ldfd	f5, [sp], #8
        2dbf38:	e59b4004 	ldr	r4, [fp, #4]
        2dbf3c:	ed2d8102 	stfd	f0, [sp, -#8]!
        2dbf40:	e8bd0003 	ldmia	sp!, {r0, r1}
        2dbf44:	eb635ea4 	bl	1bb39dc <$fabs>
        2dbf48:	ee00c180 	mvfd	f4, f0
        2dbf4c:	ed9fa120 	ldfd	f2, [pc, #128]
        2dbf50:	ee009189 	mvfd	f1, #1.0
        2dbf54:	eed0f112 	cmfe	f0, f2
        2dbf58:	ca000023 	bgt	2dbfec <ErrFunApprox+0xd0>
        2dbf5c:	ee008188 	mvfd	f0, #0.0
        2dbf60:	ed9fa11d 	ldfd	f2, [pc, #116]
        2dbf64:	eed4f112 	cmfe	f4, f2
        2dbf68:	ce140184 	mufgtd	f0, f4, f4
        2dbf6c:	e59f2070 	ldr	r2, [pc, #70]	; 2dbfe4 <ErrFunApprox+0xc8>
        2dbf70:	ed92a108 	ldfd	f2, [r2, #32]
        2dbf74:	ee123180 	mufd	f3, f2, f0
        2dbf78:	ee00a180 	mvfd	f2, f0
        2dbf7c:	e3a00000 	mov	r0, #0	; 0x0
        2dbf80:	e59f1060 	ldr	r1, [pc, #60]	; 2dbfe8 <ErrFunApprox+0xcc>
        2dbf84:	e0823180 	add	r3, r2, r0, lsl #3
        2dbf88:	ed93d100 	ldfd	f5, [r3]
        2dbf8c:	ee053183 	adfd	f3, f5, f3
        2dbf90:	ee133180 	mufd	f3, f3, f0
        2dbf94:	e0813180 	add	r3, r1, r0, lsl #3
        2dbf98:	ed93d100 	ldfd	f5, [r3]
        2dbf9c:	ee052182 	adfd	f2, f5, f2
        2dbfa0:	ee122180 	mufd	f2, f2, f0
        2dbfa4:	e2800001 	add	r0, r0, #1	; 0x1
        2dbfa8:	e3500003 	cmp	r0, #3	; 0x3
        2dbfac:	bafffff4 	blt	2dbf84 <ErrFunApprox+0x68>
        2dbfb0:	ed928106 	ldfd	f0, [r2, #24]
        2dbfb4:	ee000183 	adfd	f0, f0, f3
        2dbfb8:	ee103184 	mufd	f3, f0, f4
        2dbfbc:	ed918106 	ldfd	f0, [r1, #24]
        2dbfc0:	ee000182 	adfd	f0, f0, f2
        2dbfc4:	ee435180 	dvfd	f5, f3, f0
        2dbfc8:	e3340000 	teq	r4, #0	; 0x0
        2dbfcc:	1e215185 	sufned	f5, f1, f5
        2dbfd0:	ea000068 	b	2dc178 <ErrFunApprox+0x25c>
        2dbfd4:	3fde0000 	swicc	0x00de0000
        2dbfd8:	00000000 	andeq	r0, r0, r0
        2dbfdc:	3c9ffe5a 	ldccc	14, cr15, [pc], #360
        2dbfe0:	b7e8ad5e 	undefined
        2dbfe4:	00380650 	eoreqs	r0, r8, r0, asr r6
        2dbfe8:	00380678 	eoreqs	r0, r8, r8, ror r6
        2dbfec:	ed9fe118 	ldfd	f6, [pc, #96]
        2dbff0:	eed4f11c 	cmfe	f4, #4.0
        2dbff4:	ca00001a 	bgt	2dc064 <ErrFunApprox+0x148>
        2dbff8:	e59f105c 	ldr	r1, [pc, #5c]	; 2dc05c <ErrFunApprox+0x140>
        2dbffc:	ed918110 	ldfd	f0, [r1, #64]
        2dc000:	ee101184 	mufd	f1, f0, f4
        2dc004:	ee008184 	mvfd	f0, f4
        2dc008:	e3a00000 	mov	r0, #0	; 0x0
        2dc00c:	e59f204c 	ldr	r2, [pc, #4c]	; 2dc060 <ErrFunApprox+0x144>
        2dc010:	e0813180 	add	r3, r1, r0, lsl #3
        2dc014:	ed93a100 	ldfd	f2, [r3]
        2dc018:	ee021181 	adfd	f1, f2, f1
        2dc01c:	ee111184 	mufd	f1, f1, f4
        2dc020:	e0823180 	add	r3, r2, r0, lsl #3
        2dc024:	ed93a100 	ldfd	f2, [r3]
        2dc028:	ee020180 	adfd	f0, f2, f0
        2dc02c:	ee100184 	mufd	f0, f0, f4
        2dc030:	e2800001 	add	r0, r0, #1	; 0x1
        2dc034:	e3500007 	cmp	r0, #7	; 0x7
        2dc038:	bafffff4 	blt	2dc010 <ErrFunApprox+0xf4>
        2dc03c:	ed91a10e 	ldfd	f2, [r1, #56]
        2dc040:	ee022181 	adfd	f2, f2, f1
        2dc044:	ed92910e 	ldfd	f1, [r2, #56]
        2dc048:	ee010180 	adfd	f0, f1, f0
        2dc04c:	ee425180 	dvfd	f5, f2, f0
        2dc050:	ea00002d 	b	2dc10c <ErrFunApprox+0x1f0>
        2dc054:	40300000 	eormis	r0, r0, r0
        2dc058:	00000000 	andeq	r0, r0, r0
        2dc05c:	00380698 	mlaeqs	r8, r8, r6, r0
        2dc060:	003806e0 	eoreqs	r0, r8, r0, ror #13
        2dc064:	e51f1088 	ldr	r1, [pc, #ffffff78]	; 2dbfe4 <ErrFunApprox+0xc8>
        2dc068:	ed91814c 	ldfd	f0, [r1, #304]
        2dc06c:	eed4f110 	cmfe	f4, f0
        2dc070:	ba000009 	blt	2dc09c <ErrFunApprox+0x180>
        2dc074:	e3340002 	teq	r4, #2	; 0x2
        2dc078:	1a00003e 	bne	2dc178 <ErrFunApprox+0x25c>
        2dc07c:	ed91814e 	ldfd	f0, [r1, #312]
        2dc080:	eed4f110 	cmfe	f4, f0
        2dc084:	aa00003b 	bge	2dc178 <ErrFunApprox+0x25c>
        2dc088:	ed918150 	ldfd	f0, [r1, #320]
        2dc08c:	eed4f110 	cmfe	f4, f0
        2dc090:	ad91814a 	ldfged	f0, [r1, #296]
        2dc094:	ae400184 	dvfged	f0, f0, f4
        2dc098:	aa000037 	bge	2dc17c <ErrFunApprox+0x260>
        2dc09c:	ee140184 	mufd	f0, f4, f4
        2dc0a0:	ee410180 	dvfd	f0, f1, f0
        2dc0a4:	e59f20d8 	ldr	r2, [pc, #d8]	; 2dc184 <ErrFunApprox+0x268>
        2dc0a8:	ed92910a 	ldfd	f1, [r2, #40]
        2dc0ac:	ee112180 	mufd	f2, f1, f0
        2dc0b0:	ee009180 	mvfd	f1, f0
        2dc0b4:	e3a00000 	mov	r0, #0	; 0x0
        2dc0b8:	e59f30c8 	ldr	r3, [pc, #c8]	; 2dc188 <ErrFunApprox+0x26c>
        2dc0bc:	e082c180 	add	ip, r2, r0, lsl #3
        2dc0c0:	ed9cb100 	ldfd	f3, [ip]
        2dc0c4:	ee032182 	adfd	f2, f3, f2
        2dc0c8:	ee122180 	mufd	f2, f2, f0
        2dc0cc:	e083c180 	add	ip, r3, r0, lsl #3
        2dc0d0:	ed9cb100 	ldfd	f3, [ip]
        2dc0d4:	ee031181 	adfd	f1, f3, f1
        2dc0d8:	ee111180 	mufd	f1, f1, f0
        2dc0dc:	e2800001 	add	r0, r0, #1	; 0x1
        2dc0e0:	e3500004 	cmp	r0, #4	; 0x4
        2dc0e4:	bafffff4 	blt	2dc0bc <ErrFunApprox+0x1a0>
        2dc0e8:	ed92b108 	ldfd	f3, [r2, #32]
        2dc0ec:	ee032182 	adfd	f2, f3, f2
        2dc0f0:	ee122180 	mufd	f2, f2, f0
        2dc0f4:	ed938108 	ldfd	f0, [r3, #32]
        2dc0f8:	ee000181 	adfd	f0, f0, f1
        2dc0fc:	ee425180 	dvfd	f5, f2, f0
        2dc100:	ed91814a 	ldfd	f0, [r1, #296]
        2dc104:	ee200185 	sufd	f0, f0, f5
        2dc108:	ee405184 	dvfd	f5, f0, f4
        2dc10c:	ee140186 	mufd	f0, f4, f6
        2dc110:	ed2d8102 	stfd	f0, [sp, -#8]!
        2dc114:	e8bd0003 	ldmia	sp!, {r0, r1}
        2dc118:	eb63666f 	bl	1bb5adc <$trunc>
        2dc11c:	ee400186 	dvfd	f0, f0, f6
        2dc120:	ee241180 	sufd	f1, f4, f0
        2dc124:	ee042180 	adfd	f2, f4, f0
        2dc128:	ee114182 	mufd	f4, f1, f2
        2dc12c:	ee109180 	mnfd	f1, f0
        2dc130:	ee110180 	mufd	f0, f1, f0
        2dc134:	ed2d8102 	stfd	f0, [sp, -#8]!
        2dc138:	e8bd0003 	ldmia	sp!, {r0, r1}
        2dc13c:	eb635e23 	bl	1bb39d0 <$exp>
        2dc140:	ee00e180 	mvfd	f6, f0
        2dc144:	ee108184 	mnfd	f0, f4
        2dc148:	ed2d8102 	stfd	f0, [sp, -#8]!
        2dc14c:	e8bd0003 	ldmia	sp!, {r0, r1}
        2dc150:	eb635e1e 	bl	1bb39d0 <$exp>
        2dc154:	ee009180 	mvfd	f1, f0
        2dc158:	ee008186 	mvfd	f0, f6
        2dc15c:	ee100181 	mufd	f0, f0, f1
        2dc160:	ee105185 	mufd	f5, f0, f5
        2dc164:	e3340000 	teq	r4, #0	; 0x0
        2dc168:	0e00818e 	mvfeqd	f0, #0.5
        2dc16c:	0e200185 	sufeqd	f0, f0, f5
        2dc170:	0e00018e 	adfeqd	f0, f0, #0.5
        2dc174:	0a000000 	beq	2dc17c <ErrFunApprox+0x260>
        2dc178:	ee008185 	mvfd	f0, f5
        2dc17c:	ed5bc20d 	lfm	f4, 3, [fp, -#52]
        2dc180:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2dc184:	00380720 	eoreqs	r0, r8, r0, lsr #14
        2dc188:	00380750 	eoreqs	r0, r8, r0, asr r7
    */
}

/**
 * Symbol: EntrySize(unsigned long, TStoreWrapper *, unsigned char)
 * Address: 002e0678
 */
EntrySize(unsigned long, TStoreWrapper *, unsigned char) {
    /*
        2e0678:	e1a0c00d 	mov	ip, sp
        2e067c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2e0680:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e0684:	e1a05000 	mov	r5, r0
        2e0688:	e1a04001 	mov	r4, r1
        2e068c:	e20270ff 	and	r7, r2, #255	; 0xff
        2e0690:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e0694:	e1a0200d 	mov	r2, sp
        2e0698:	e591007c 	ldr	r0, [r1, #124]
        2e069c:	e1a01005 	mov	r1, r5
        2e06a0:	eb606996 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2e06a4:	e3300000 	teq	r0, #0	; 0x0
        2e06a8:	1b5d71de 	blne	1a3ce28 <$_OSErr(long)>
        2e06ac:	e24dd010 	sub	sp, sp, #16	; 0x10
        2e06b0:	e3a03010 	mov	r3, #16	; 0x10
        2e06b4:	e92d0008 	stmdb	sp!, {r3}
        2e06b8:	e28d3004 	add	r3, sp, #4	; 0x4
        2e06bc:	e3a06000 	mov	r6, #0	; 0x0
        2e06c0:	e1a02006 	mov	r2, r6
        2e06c4:	e1a01005 	mov	r1, r5
        2e06c8:	e594007c 	ldr	r0, [r4, #124]
        2e06cc:	eb60869b 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2e06d0:	e28dd004 	add	sp, sp, #4	; 0x4
        2e06d4:	e3300000 	teq	r0, #0	; 0x0
        2e06d8:	1b5d71d2 	blne	1a3ce28 <$_OSErr(long)>
        2e06dc:	e59d0008 	ldr	r0, [sp, #8]
        2e06e0:	e3300000 	teq	r0, #0	; 0x0
        2e06e4:	0a00000c 	beq	2e071c <EntrySize(unsigned long, TStoreWrapper *, unsigned char)+0xa4>
        2e06e8:	e3a00000 	mov	r0, #0	; 0x0
        2e06ec:	e52d0004 	str	r0, [sp, -#4]!
        2e06f0:	e59d100c 	ldr	r1, [sp, #12]
        2e06f4:	e1a0200d 	mov	r2, sp
        2e06f8:	e594007c 	ldr	r0, [r4, #124]
        2e06fc:	eb60697f 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2e0700:	e3300000 	teq	r0, #0	; 0x0
        2e0704:	1b5d71c7 	blne	1a3ce28 <$_OSErr(long)>
        2e0708:	e59d0000 	ldr	r0, [sp]
        2e070c:	e59d1014 	ldr	r1, [sp, #20]
        2e0710:	e28dd004 	add	sp, sp, #4	; 0x4
        2e0714:	e0810000 	add	r0, r1, r0
        2e0718:	e58d0010 	str	r0, [sp, #16]
        2e071c:	e3370000 	teq	r7, #0	; 0x0
        2e0720:	15dd000d 	ldrneb	r0, [sp, #13]
        2e0724:	12000001 	andne	r0, r0, #1	; 0x1
        2e0728:	13300000 	teqne	r0, #0	; 0x0
        2e072c:	0a000017 	beq	2e0790 <EntrySize(unsigned long, TStoreWrapper *, unsigned char)+0x118>
        2e0730:	e24ddf96 	sub	sp, sp, #600	; 0x258
        2e0734:	e1a02005 	mov	r2, r5
        2e0738:	e1a01004 	mov	r1, r4
        2e073c:	e1a0000d 	mov	r0, sp
        2e0740:	e3a03000 	mov	r3, #0	; 0x0
        2e0744:	eb5d6da5 	bl	1a3bde0 <TStoreObjectReader::$__ct(TStoreWrapper *, unsigned long, CDynamicArray **)>
        2e0748:	e52d606c 	str	r6, [sp, -#108]!
        2e074c:	e28d0008 	add	r0, sp, #8	; 0x8
        2e0750:	eb634887 	bl	1bb2974 <$setjmp>
        2e0754:	e3300000 	teq	r0, #0	; 0x0
        2e0758:	1a00000f 	bne	2e079c <EntrySize(unsigned long, TStoreWrapper *, unsigned char)+0x124>
        2e075c:	e1a0000d 	mov	r0, sp
        2e0760:	eb63fe45 	bl	1be007c <$AddExceptionHandler>
        2e0764:	e28d2fb5 	add	r2, sp, #724	; 0x2d4
        2e0768:	e59f1028 	ldr	r1, [pc, #28]	; 2e0798 <EntrySize(unsigned long, TStoreWrapper *, unsigned char)+0x120>
        2e076c:	e28d006c 	add	r0, sp, #108	; 0x6c
        2e0770:	eb5da35f 	bl	1a494f4 <TStoreObjectReader::$EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)>
        2e0774:	e1a0000d 	mov	r0, sp
        2e0778:	eb64024e 	bl	1be10b8 <$ExitHandler>
        2e077c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e0780:	e1a0000d 	mov	r0, sp
        2e0784:	e3a01000 	mov	r1, #0	; 0x0
        2e0788:	eb5d719f 	bl	1a3ce0c <TStoreObjectReader::$__dt(void)>
        2e078c:	e28ddf96 	add	sp, sp, #600	; 0x258
        2e0790:	e59d0010 	ldr	r0, [sp, #16]
        2e0794:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2e0798:	002e064c 	eoreq	r0, lr, ip, asr #12
        2e079c:	e28d006c 	add	r0, sp, #108	; 0x6c
        2e07a0:	e3a01000 	mov	r1, #0	; 0x0
        2e07a4:	eb5d7198 	bl	1a3ce0c <TStoreObjectReader::$__dt(void)>
        2e07a8:	e1a0000d 	mov	r0, sp
        2e07ac:	eb640668 	bl	1be2154 <$NextHandler>
        2e07b0:	eafffff9 	b	2e079c <EntrySize(unsigned long, TStoreWrapper *, unsigned char)+0x124>
    */
}

/**
 * Symbol: EntrySize(RefVar const &)
 * Address: 002e07b4
 */
EntrySize(RefVar const &) {
    /*
        2e07b4:	e1a0c00d 	mov	ip, sp
        2e07b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e07bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e07c0:	e1a04000 	mov	r4, r0
        2e07c4:	e5900000 	ldr	r0, [r0]
        2e07c8:	e5900000 	ldr	r0, [r0]
        2e07cc:	eb6392ad 	bl	1bc5288 <$IsFaultBlock(long)>
        2e07d0:	e3300000 	teq	r0, #0	; 0x0
        2e07d4:	1a000004 	bne	2e07ec <EntrySize(RefVar const &)+0x38>
        2e07d8:	e59f1048 	ldr	r1, [pc, #48]	; 2e0828 <EntrySize(RefVar const &)+0x74>
        2e07dc:	e59f0048 	ldr	r0, [pc, #48]	; 2e082c <EntrySize(RefVar const &)+0x78>
        2e07e0:	e5900000 	ldr	r0, [r0]
        2e07e4:	e3a02000 	mov	r2, #0	; 0x0
        2e07e8:	eb640a6b 	bl	1be319c <$Throw>
        2e07ec:	e5940000 	ldr	r0, [r4]
        2e07f0:	e5900000 	ldr	r0, [r0]
        2e07f4:	eb5d8645 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2e07f8:	e1a05000 	mov	r5, r0
        2e07fc:	e5900010 	ldr	r0, [r0, #16]
        2e0800:	e3300002 	teq	r0, #2	; 0x2
        2e0804:	1a00000a 	bne	2e0834 <EntrySize(RefVar const &)+0x80>
        2e0808:	e59f1020 	ldr	r1, [pc, #20]	; 2e0830 <EntrySize(RefVar const &)+0x7c>
        2e080c:	e1a00004 	mov	r0, r4
        2e0810:	eb5dc004 	bl	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2e0814:	e3100003 	tst	r0, #3	; 0x3
        2e0818:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2e081c:	1a63863e 	bne	1bc211c <$_RINTError(long)>
        2e0820:	01a00140 	moveq	r0, r0, asr #2
        2e0824:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2e0828:	ffff4477 	swinv	0x00ff4477
        2e082c:	003712fc 	ldreqsh	r1, [r7], -ip
        2e0830:	00682c38 	rsbeq	r2, r8, r8, lsr ip
        2e0834:	e5950014 	ldr	r0, [r5, #20]
        2e0838:	e3100003 	tst	r0, #3	; 0x3
        2e083c:	01a00140 	moveq	r0, r0, asr #2
        2e0840:	0a000000 	beq	2e0848 <EntrySize(RefVar const &)+0x94>
        2e0844:	eb638634 	bl	1bc211c <$_RINTError(long)>
        2e0848:	e3a02001 	mov	r2, #1	; 0x1
        2e084c:	e5b51010 	ldr	r1, [r5, #16]!
        2e0850:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2e0854:	ea5da735 	b	1a4a530 <$EntrySize(unsigned long, TStoreWrapper *, unsigned char)>
    */
}

/**
 * Symbol: EntrySizeWithoutVBOs(RefVar const &)
 * Address: 002e0858
 */
EntrySizeWithoutVBOs(RefVar const &) {
    /*
        2e0858:	e1a0c00d 	mov	ip, sp
        2e085c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e0860:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e0864:	e1a04000 	mov	r4, r0
        2e0868:	e5900000 	ldr	r0, [r0]
        2e086c:	e5900000 	ldr	r0, [r0]
        2e0870:	eb639284 	bl	1bc5288 <$IsFaultBlock(long)>
        2e0874:	e3300000 	teq	r0, #0	; 0x0
        2e0878:	1a000004 	bne	2e0890 <EntrySizeWithoutVBOs(RefVar const &)+0x38>
        2e087c:	e59f1048 	ldr	r1, [pc, #48]	; 2e08cc <EntrySizeWithoutVBOs(RefVar const &)+0x74>
        2e0880:	e59f0048 	ldr	r0, [pc, #48]	; 2e08d0 <EntrySizeWithoutVBOs(RefVar const &)+0x78>
        2e0884:	e5900000 	ldr	r0, [r0]
        2e0888:	e3a02000 	mov	r2, #0	; 0x0
        2e088c:	eb640a42 	bl	1be319c <$Throw>
        2e0890:	e5940000 	ldr	r0, [r4]
        2e0894:	e5900000 	ldr	r0, [r0]
        2e0898:	eb5d861c 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2e089c:	e1a05000 	mov	r5, r0
        2e08a0:	e5900010 	ldr	r0, [r0, #16]
        2e08a4:	e3300002 	teq	r0, #2	; 0x2
        2e08a8:	1a00000a 	bne	2e08d8 <EntrySizeWithoutVBOs(RefVar const &)+0x80>
        2e08ac:	e59f1020 	ldr	r1, [pc, #20]	; 2e08d4 <EntrySizeWithoutVBOs(RefVar const &)+0x7c>
        2e08b0:	e1a00004 	mov	r0, r4
        2e08b4:	eb5dbfdb 	bl	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2e08b8:	e3100003 	tst	r0, #3	; 0x3
        2e08bc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2e08c0:	1a638615 	bne	1bc211c <$_RINTError(long)>
        2e08c4:	01a00140 	moveq	r0, r0, asr #2
        2e08c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2e08cc:	ffff4477 	swinv	0x00ff4477
        2e08d0:	003712fc 	ldreqsh	r1, [r7], -ip
        2e08d4:	00682c38 	rsbeq	r2, r8, r8, lsr ip
        2e08d8:	e5950014 	ldr	r0, [r5, #20]
        2e08dc:	e3100003 	tst	r0, #3	; 0x3
        2e08e0:	01a00140 	moveq	r0, r0, asr #2
        2e08e4:	0a000000 	beq	2e08ec <EntrySizeWithoutVBOs(RefVar const &)+0x94>
        2e08e8:	eb63860b 	bl	1bc211c <$_RINTError(long)>
        2e08ec:	e3a02000 	mov	r2, #0	; 0x0
        2e08f0:	e5b51010 	ldr	r1, [r5, #16]!
        2e08f4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2e08f8:	ea5da70c 	b	1a4a530 <$EntrySize(unsigned long, TStoreWrapper *, unsigned char)>
    */
}

/**
 * Symbol: EntryTextSize(RefVar const &)
 * Address: 002e08fc
 */
EntryTextSize(RefVar const &) {
    /*
        2e08fc:	e1a0c00d 	mov	ip, sp
        2e0900:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e0904:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e0908:	e1a04000 	mov	r4, r0
        2e090c:	e5900000 	ldr	r0, [r0]
        2e0910:	e5900000 	ldr	r0, [r0]
        2e0914:	eb63925b 	bl	1bc5288 <$IsFaultBlock(long)>
        2e0918:	e3300000 	teq	r0, #0	; 0x0
        2e091c:	1a000004 	bne	2e0934 <EntryTextSize(RefVar const &)+0x38>
        2e0920:	e59f1044 	ldr	r1, [pc, #44]	; 2e096c <EntryTextSize(RefVar const &)+0x70>
        2e0924:	e59f0044 	ldr	r0, [pc, #44]	; 2e0970 <EntryTextSize(RefVar const &)+0x74>
        2e0928:	e5900000 	ldr	r0, [r0]
        2e092c:	e3a02000 	mov	r2, #0	; 0x0
        2e0930:	eb640a19 	bl	1be319c <$Throw>
        2e0934:	e5940000 	ldr	r0, [r4]
        2e0938:	e5900000 	ldr	r0, [r0]
        2e093c:	eb5d85f3 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2e0940:	e5901010 	ldr	r1, [r0, #16]
        2e0944:	e3310002 	teq	r1, #2	; 0x2
        2e0948:	1a00000a 	bne	2e0978 <EntryTextSize(RefVar const &)+0x7c>
        2e094c:	e59f1020 	ldr	r1, [pc, #20]	; 2e0974 <EntryTextSize(RefVar const &)+0x78>
        2e0950:	e1a00004 	mov	r0, r4
        2e0954:	eb5dbfb3 	bl	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2e0958:	e3100003 	tst	r0, #3	; 0x3
        2e095c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2e0960:	1a6385ed 	bne	1bc211c <$_RINTError(long)>
        2e0964:	01a00140 	moveq	r0, r0, asr #2
        2e0968:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e096c:	ffff4477 	swinv	0x00ff4477
        2e0970:	003712fc 	ldreqsh	r1, [r7], -ip
        2e0974:	00682c50 	rsbeq	r2, r8, r0, asr ip
        2e0978:	e24dd014 	sub	sp, sp, #20	; 0x14
        2e097c:	e1a04001 	mov	r4, r1
        2e0980:	e5900014 	ldr	r0, [r0, #20]
        2e0984:	e3100003 	tst	r0, #3	; 0x3
        2e0988:	01a00140 	moveq	r0, r0, asr #2
        2e098c:	0a000000 	beq	2e0994 <EntryTextSize(RefVar const &)+0x98>
        2e0990:	eb6385e1 	bl	1bc211c <$_RINTError(long)>
        2e0994:	e1a01000 	mov	r1, r0
        2e0998:	e3a00000 	mov	r0, #0	; 0x0
        2e099c:	e3a03010 	mov	r3, #16	; 0x10
        2e09a0:	e58d0010 	str	r0, [sp, #16]
        2e09a4:	e92d0008 	stmdb	sp!, {r3}
        2e09a8:	e28d3004 	add	r3, sp, #4	; 0x4
        2e09ac:	e3a02000 	mov	r2, #0	; 0x0
        2e09b0:	e594007c 	ldr	r0, [r4, #124]
        2e09b4:	eb6085e1 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2e09b8:	e28dd004 	add	sp, sp, #4	; 0x4
        2e09bc:	e3300000 	teq	r0, #0	; 0x0
        2e09c0:	1b5d7118 	blne	1a3ce28 <$_OSErr(long)>
        2e09c4:	e59d0008 	ldr	r0, [sp, #8]
        2e09c8:	e3300000 	teq	r0, #0	; 0x0
        2e09cc:	0a000005 	beq	2e09e8 <EntryTextSize(RefVar const &)+0xec>
        2e09d0:	e59d1008 	ldr	r1, [sp, #8]
        2e09d4:	e28d2010 	add	r2, sp, #16	; 0x10
        2e09d8:	e5b4007c 	ldr	r0, [r4, #124]!
        2e09dc:	eb6068c7 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2e09e0:	e3300000 	teq	r0, #0	; 0x0
        2e09e4:	1b5d710f 	blne	1a3ce28 <$_OSErr(long)>
        2e09e8:	e59d0010 	ldr	r0, [sp, #16]
        2e09ec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: EntryUniqueID(RefVar const &)
 * Address: 002e09f0
 */
EntryUniqueID(RefVar const &) {
    /*
        2e09f0:	e1a0c00d 	mov	ip, sp
        2e09f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e09f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e09fc:	e1a04000 	mov	r4, r0
        2e0a00:	e5900000 	ldr	r0, [r0]
        2e0a04:	e5900000 	ldr	r0, [r0]
        2e0a08:	eb63921e 	bl	1bc5288 <$IsFaultBlock(long)>
        2e0a0c:	e3300000 	teq	r0, #0	; 0x0
        2e0a10:	1a000004 	bne	2e0a28 <EntryUniqueID(RefVar const &)+0x38>
        2e0a14:	e59f1044 	ldr	r1, [pc, #44]	; 2e0a60 <EntryUniqueID(RefVar const &)+0x70>
        2e0a18:	e59f0044 	ldr	r0, [pc, #44]	; 2e0a64 <EntryUniqueID(RefVar const &)+0x74>
        2e0a1c:	e5900000 	ldr	r0, [r0]
        2e0a20:	e3a02000 	mov	r2, #0	; 0x0
        2e0a24:	eb6409dc 	bl	1be319c <$Throw>
        2e0a28:	e5940000 	ldr	r0, [r4]
        2e0a2c:	e5900000 	ldr	r0, [r0]
        2e0a30:	eb5d85b6 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2e0a34:	e5901010 	ldr	r1, [r0, #16]
        2e0a38:	e3310002 	teq	r1, #2	; 0x2
        2e0a3c:	1a00000a 	bne	2e0a6c <EntryUniqueID(RefVar const &)+0x7c>
        2e0a40:	e59f1020 	ldr	r1, [pc, #20]	; 2e0a68 <EntryUniqueID(RefVar const &)+0x78>
        2e0a44:	e1a00004 	mov	r0, r4
        2e0a48:	eb5dbf76 	bl	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2e0a4c:	e3100003 	tst	r0, #3	; 0x3
        2e0a50:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2e0a54:	1a6385b0 	bne	1bc211c <$_RINTError(long)>
        2e0a58:	01a00140 	moveq	r0, r0, asr #2
        2e0a5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e0a60:	ffff4477 	swinv	0x00ff4477
        2e0a64:	003712fc 	ldreqsh	r1, [r7], -ip
        2e0a68:	00682c60 	rsbeq	r2, r8, r0, ror #24
        2e0a6c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e0a70:	e1a04001 	mov	r4, r1
        2e0a74:	e5900014 	ldr	r0, [r0, #20]
        2e0a78:	e3100003 	tst	r0, #3	; 0x3
        2e0a7c:	01a00140 	moveq	r0, r0, asr #2
        2e0a80:	0a000000 	beq	2e0a88 <EntryUniqueID(RefVar const &)+0x98>
        2e0a84:	eb6385a4 	bl	1bc211c <$_RINTError(long)>
        2e0a88:	e1a01000 	mov	r1, r0
        2e0a8c:	e3a03004 	mov	r3, #4	; 0x4
        2e0a90:	e92d0008 	stmdb	sp!, {r3}
        2e0a94:	e08d3003 	add	r3, sp, r3
        2e0a98:	e3a02000 	mov	r2, #0	; 0x0
        2e0a9c:	e5b4007c 	ldr	r0, [r4, #124]!
        2e0aa0:	eb6085a6 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2e0aa4:	e28dd004 	add	sp, sp, #4	; 0x4
        2e0aa8:	e3300000 	teq	r0, #0	; 0x0
        2e0aac:	1b5d70dd 	blne	1a3ce28 <$_OSErr(long)>
        2e0ab0:	e49d0004 	ldr	r0, [sp], #4
        2e0ab4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: EntryModTime(RefVar const &)
 * Address: 002e0ab8
 */
EntryModTime(RefVar const &) {
    /*
        2e0ab8:	e1a0c00d 	mov	ip, sp
        2e0abc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e0ac0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e0ac4:	e1a04000 	mov	r4, r0
        2e0ac8:	e5900000 	ldr	r0, [r0]
        2e0acc:	e5900000 	ldr	r0, [r0]
        2e0ad0:	eb6391ec 	bl	1bc5288 <$IsFaultBlock(long)>
        2e0ad4:	e3300000 	teq	r0, #0	; 0x0
        2e0ad8:	1a000004 	bne	2e0af0 <EntryModTime(RefVar const &)+0x38>
        2e0adc:	e59f1044 	ldr	r1, [pc, #44]	; 2e0b28 <EntryModTime(RefVar const &)+0x70>
        2e0ae0:	e59f0044 	ldr	r0, [pc, #44]	; 2e0b2c <EntryModTime(RefVar const &)+0x74>
        2e0ae4:	e5900000 	ldr	r0, [r0]
        2e0ae8:	e3a02000 	mov	r2, #0	; 0x0
        2e0aec:	eb6409aa 	bl	1be319c <$Throw>
        2e0af0:	e5940000 	ldr	r0, [r4]
        2e0af4:	e5900000 	ldr	r0, [r0]
        2e0af8:	eb5d8584 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2e0afc:	e5901010 	ldr	r1, [r0, #16]
        2e0b00:	e3310002 	teq	r1, #2	; 0x2
        2e0b04:	1a00000a 	bne	2e0b34 <EntryModTime(RefVar const &)+0x7c>
        2e0b08:	e59f1020 	ldr	r1, [pc, #20]	; 2e0b30 <EntryModTime(RefVar const &)+0x78>
        2e0b0c:	e1a00004 	mov	r0, r4
        2e0b10:	eb5dbf44 	bl	1a50828 <$ForwardEntryMessage__FRC6RefVarT1>
        2e0b14:	e3100003 	tst	r0, #3	; 0x3
        2e0b18:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2e0b1c:	1a63857e 	bne	1bc211c <$_RINTError(long)>
        2e0b20:	01a00140 	moveq	r0, r0, asr #2
        2e0b24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2e0b28:	ffff4477 	swinv	0x00ff4477
        2e0b2c:	003712fc 	ldreqsh	r1, [r7], -ip
        2e0b30:	00682bf8 	streqd	r2, [r8], -#184
        2e0b34:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e0b38:	e1a04001 	mov	r4, r1
        2e0b3c:	e5900014 	ldr	r0, [r0, #20]
        2e0b40:	e3100003 	tst	r0, #3	; 0x3
        2e0b44:	01a00140 	moveq	r0, r0, asr #2
        2e0b48:	0a000000 	beq	2e0b50 <EntryModTime(RefVar const &)+0x98>
        2e0b4c:	eb638572 	bl	1bc211c <$_RINTError(long)>
        2e0b50:	e1a01000 	mov	r1, r0
        2e0b54:	e3a03004 	mov	r3, #4	; 0x4
        2e0b58:	e92d0008 	stmdb	sp!, {r3}
        2e0b5c:	e08d3003 	add	r3, sp, r3
        2e0b60:	e3a02004 	mov	r2, #4	; 0x4
        2e0b64:	e5b4007c 	ldr	r0, [r4, #124]!
        2e0b68:	eb608574 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2e0b6c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e0b70:	e3300000 	teq	r0, #0	; 0x0
        2e0b74:	1b5d70ab 	blne	1a3ce28 <$_OSErr(long)>
        2e0b78:	e59d0000 	ldr	r0, [sp]
        2e0b7c:	e3700001 	cmn	r0, #1	; 0x1
        2e0b80:	03a00000 	moveq	r0, #0	; 0x0
        2e0b84:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: Errorprov(low_type *)
 * Address: 002e0f1c
 */
Errorprov(low_type *) {
    /*
        2e0f1c:	e1a0c00d 	mov	ip, sp
        2e0f20:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e0f24:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e0f28:	e1a04000 	mov	r4, r0
        2e0f2c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e0f30:	e590500c 	ldr	r5, [r0, #12]
        2e0f34:	e5906038 	ldr	r6, [r0, #56]
        2e0f38:	e5907034 	ldr	r7, [r0, #52]
        2e0f3c:	e5908004 	ldr	r8, [r0, #4]
        2e0f40:	e590901c 	ldr	r9, [r0, #28]
        2e0f44:	e590003c 	ldr	r0, [r0, #60]
        2e0f48:	e1a00820 	mov	r0, r0, lsr #16
        2e0f4c:	e2400002 	sub	r0, r0, #2	; 0x2
        2e0f50:	e1a0a800 	mov	sl, r0, lsl #16
        2e0f54:	e1a0a84a 	mov	sl, sl, asr #16
        2e0f58:	e28a0003 	add	r0, sl, #3	; 0x3
        2e0f5c:	e1a02080 	mov	r2, r0, lsl #1
        2e0f60:	e1a01007 	mov	r1, r7
        2e0f64:	e1a00008 	mov	r0, r8
        2e0f68:	e58d2000 	str	r2, [sp]
        2e0f6c:	eb634eb8 	bl	1bb4a54 <$memmove>
        2e0f70:	e1a01006 	mov	r1, r6
        2e0f74:	e1a00005 	mov	r0, r5
        2e0f78:	e59d2000 	ldr	r2, [sp]
        2e0f7c:	eb634eb4 	bl	1bb4a54 <$memmove>
        2e0f80:	e3a01000 	mov	r1, #0	; 0x0
        2e0f84:	e3a00000 	mov	r0, #0	; 0x0
        2e0f88:	e35a0000 	cmp	sl, #0	; 0x0
        2e0f8c:	ba00001f 	blt	2e1010 <Errorprov(low_type *)+0xf4>
        2e0f90:	e7952080 	ldr	r2, [r5, r0, lsl #1]
        2e0f94:	e1a02842 	mov	r2, r2, asr #16
        2e0f98:	e3720001 	cmn	r2, #1	; 0x1
        2e0f9c:	00852080 	addeq	r2, r5, r0, lsl #1
        2e0fa0:	05922002 	ldreq	r2, [r2, #2]
        2e0fa4:	01a02842 	moveq	r2, r2, asr #16
        2e0fa8:	03720001 	cmneq	r2, #1	; 0x1
        2e0fac:	0a000012 	beq	2e0ffc <Errorprov(low_type *)+0xe0>
        2e0fb0:	e7982080 	ldr	r2, [r8, r0, lsl #1]
        2e0fb4:	e1a02822 	mov	r2, r2, lsr #16
        2e0fb8:	e0873081 	add	r3, r7, r1, lsl #1
        2e0fbc:	e5c32001 	strb	r2, [r3, #1]
        2e0fc0:	e1a02442 	mov	r2, r2, asr #8
        2e0fc4:	e5c32000 	strb	r2, [r3]
        2e0fc8:	e7952080 	ldr	r2, [r5, r0, lsl #1]
        2e0fcc:	e1a02822 	mov	r2, r2, lsr #16
        2e0fd0:	e0863081 	add	r3, r6, r1, lsl #1
        2e0fd4:	e5c32001 	strb	r2, [r3, #1]
        2e0fd8:	e1a02442 	mov	r2, r2, asr #8
        2e0fdc:	e5c32000 	strb	r2, [r3]
        2e0fe0:	e0892081 	add	r2, r9, r1, lsl #1
        2e0fe4:	e5c20001 	strb	r0, [r2, #1]
        2e0fe8:	e1a03440 	mov	r3, r0, asr #8
        2e0fec:	e5c23000 	strb	r3, [r2]
        2e0ff0:	e2811001 	add	r1, r1, #1	; 0x1
        2e0ff4:	e1a01801 	mov	r1, r1, lsl #16
        2e0ff8:	e1a01841 	mov	r1, r1, asr #16
        2e0ffc:	e2800001 	add	r0, r0, #1	; 0x1
        2e1000:	e1a00800 	mov	r0, r0, lsl #16
        2e1004:	e1a00840 	mov	r0, r0, asr #16
        2e1008:	e150000a 	cmp	r0, sl
        2e100c:	daffffdf 	ble	2e0f90 <Errorprov(low_type *)+0x74>
        2e1010:	e7982080 	ldr	r2, [r8, r0, lsl #1]
        2e1014:	e1a02822 	mov	r2, r2, lsr #16
        2e1018:	e0873081 	add	r3, r7, r1, lsl #1
        2e101c:	e5c32001 	strb	r2, [r3, #1]
        2e1020:	e1a02442 	mov	r2, r2, asr #8
        2e1024:	e5c32000 	strb	r2, [r3]
        2e1028:	e7952080 	ldr	r2, [r5, r0, lsl #1]
        2e102c:	e1a02822 	mov	r2, r2, lsr #16
        2e1030:	e0863081 	add	r3, r6, r1, lsl #1
        2e1034:	e5c32001 	strb	r2, [r3, #1]
        2e1038:	e1a02442 	mov	r2, r2, asr #8
        2e103c:	e5c32000 	strb	r2, [r3]
        2e1040:	e0892081 	add	r2, r9, r1, lsl #1
        2e1044:	e5c20001 	strb	r0, [r2, #1]
        2e1048:	e1a00440 	mov	r0, r0, asr #8
        2e104c:	e5c20000 	strb	r0, [r2]
        2e1050:	e2810001 	add	r0, r1, #1	; 0x1
        2e1054:	e5c4003d 	strb	r0, [r4, #61]
        2e1058:	e1a00440 	mov	r0, r0, asr #8
        2e105c:	e5c4003c 	strb	r0, [r4, #60]
        2e1060:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: exp2
 * Address: 002e2d10
 */
void globals::exp2() {
    /*
        2e2d10:	e92d0003 	stmdb	sp!, {r0, r1}
        2e2d14:	ecbd8102 	ldfd	f0, [sp], #8
        2e2d18:	ed9f9103 	ldfd	f1, [pc, #12]
        2e2d1c:	ee100181 	mufd	f0, f0, f1
        2e2d20:	ed2d8102 	stfd	f0, [sp, -#8]!
        2e2d24:	e8bd0003 	ldmia	sp!, {r0, r1}
        2e2d28:	ea634328 	b	1bb39d0 <$exp>
        2e2d2c:	3fe62e42 	swicc	0x00e62e42
        2e2d30:	fefa39ef 	cdp2	9, 15, cr3, cr10, cr15, {7}
    */
}

/**
 * Symbol: extremum__FUcsT2Ps
 * Address: 002f9dd8
 */
void globals::extremum() {
    /*
        2f9dd8:	e92d4000 	stmdb	sp!, {lr}
        2f9ddc:	e20000ff 	and	r0, r0, #255	; 0xff
        2f9de0:	e1a01801 	mov	r1, r1, lsl #16
        2f9de4:	e1a01841 	mov	r1, r1, asr #16
        2f9de8:	e1a02802 	mov	r2, r2, lsl #16
        2f9dec:	e1a02842 	mov	r2, r2, asr #16
        2f9df0:	e1a0e001 	mov	lr, r1
        2f9df4:	e793c081 	ldr	ip, [r3, r1, lsl #1]
        2f9df8:	e1a0c84c 	mov	ip, ip, asr #16
        2f9dfc:	e1a00800 	mov	r0, r0, lsl #16
        2f9e00:	e1a00840 	mov	r0, r0, asr #16
        2f9e04:	e3300001 	teq	r0, #1	; 0x1
        2f9e08:	0a00000f 	beq	2f9e4c <extremum__FUcsT2Ps+0x74>
        2f9e0c:	e3300003 	teq	r0, #3	; 0x3
        2f9e10:	13a00000 	movne	r0, #0	; 0x0
        2f9e14:	18bd8000 	ldmneia	sp!, {pc}
        2f9e18:	e1510002 	cmp	r1, r2
        2f9e1c:	ca000016 	bgt	2f9e7c <extremum__FUcsT2Ps+0xa4>
        2f9e20:	e7930081 	ldr	r0, [r3, r1, lsl #1]
        2f9e24:	e1a00840 	mov	r0, r0, asr #16
        2f9e28:	e150000c 	cmp	r0, ip
        2f9e2c:	c1a0c000 	movgt	ip, r0
        2f9e30:	c1a0e001 	movgt	lr, r1
        2f9e34:	e2810001 	add	r0, r1, #1	; 0x1
        2f9e38:	e1a01800 	mov	r1, r0, lsl #16
        2f9e3c:	e1a01841 	mov	r1, r1, asr #16
        2f9e40:	e1510002 	cmp	r1, r2
        2f9e44:	dafffff5 	ble	2f9e20 <extremum__FUcsT2Ps+0x48>
        2f9e48:	ea00000b 	b	2f9e7c <extremum__FUcsT2Ps+0xa4>
        2f9e4c:	e1510002 	cmp	r1, r2
        2f9e50:	ca000009 	bgt	2f9e7c <extremum__FUcsT2Ps+0xa4>
        2f9e54:	e7930081 	ldr	r0, [r3, r1, lsl #1]
        2f9e58:	e1a00840 	mov	r0, r0, asr #16
        2f9e5c:	e150000c 	cmp	r0, ip
        2f9e60:	b1a0c000 	movlt	ip, r0
        2f9e64:	b1a0e001 	movlt	lr, r1
        2f9e68:	e2810001 	add	r0, r1, #1	; 0x1
        2f9e6c:	e1a01800 	mov	r1, r0, lsl #16
        2f9e70:	e1a01841 	mov	r1, r1, asr #16
        2f9e74:	e1510002 	cmp	r1, r2
        2f9e78:	dafffff5 	ble	2f9e54 <extremum__FUcsT2Ps+0x7c>
        2f9e7c:	e1a0000e 	mov	r0, lr
        2f9e80:	e15e0002 	cmp	lr, r2
        2f9e84:	ca000008 	bgt	2f9eac <extremum__FUcsT2Ps+0xd4>
        2f9e88:	e7931080 	ldr	r1, [r3, r0, lsl #1]
        2f9e8c:	e1a01841 	mov	r1, r1, asr #16
        2f9e90:	e131000c 	teq	r1, ip
        2f9e94:	1a000004 	bne	2f9eac <extremum__FUcsT2Ps+0xd4>
        2f9e98:	e2800001 	add	r0, r0, #1	; 0x1
        2f9e9c:	e1a00800 	mov	r0, r0, lsl #16
        2f9ea0:	e1a00840 	mov	r0, r0, asr #16
        2f9ea4:	e1500002 	cmp	r0, r2
        2f9ea8:	dafffff6 	ble	2f9e88 <extremum__FUcsT2Ps+0xb0>
        2f9eac:	e08e0000 	add	r0, lr, r0
        2f9eb0:	e1a000c0 	mov	r0, r0, asr #1
        2f9eb4:	e1a00800 	mov	r0, r0, lsl #16
        2f9eb8:	e1a00840 	mov	r0, r0, asr #16
        2f9ebc:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: ExtendVMHeap
 * Address: 0031091c
 */
void globals::ExtendVMHeap() {
    /*
        31091c:	e1a0c00d 	mov	ip, sp
        310920:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        310924:	e24cb004 	sub	fp, ip, #4	; 0x4
        310928:	e1a04000 	mov	r4, r0
        31092c:	e1a05001 	mov	r5, r1
        310930:	e5900024 	ldr	r0, [r0, #36]
        310934:	e3300000 	teq	r0, #0	; 0x0
        310938:	0a000007 	beq	31095c <ExtendVMHeap+0x40>
        31093c:	e1a01000 	mov	r1, r0
        310940:	e5900000 	ldr	r0, [r0]
        310944:	e0810000 	add	r0, r1, r0
        310948:	e2801010 	add	r1, r0, #16	; 0x10
        31094c:	e5940004 	ldr	r0, [r4, #4]
        310950:	e1310000 	teq	r1, r0
        310954:	03a00001 	moveq	r0, #1	; 0x1
        310958:	0a000000 	beq	310960 <ExtendVMHeap+0x44>
        31095c:	e3a00000 	mov	r0, #0	; 0x0
        310960:	e20070ff 	and	r7, r0, #255	; 0xff
        310964:	e5940038 	ldr	r0, [r4, #56]
        310968:	e0801005 	add	r1, r0, r5
        31096c:	e2411001 	sub	r1, r1, #1	; 0x1
        310970:	e2400001 	sub	r0, r0, #1	; 0x1
        310974:	e1c15000 	bic	r5, r1, r0
        310978:	e594002c 	ldr	r0, [r4, #44]
        31097c:	e0800005 	add	r0, r0, r5
        310980:	e3a06000 	mov	r6, #0	; 0x0
        310984:	e5941028 	ldr	r1, [r4, #40]
        310988:	e1500001 	cmp	r0, r1
        31098c:	da000001 	ble	310998 <ExtendVMHeap+0x7c>
        310990:	e1a00006 	mov	r0, r6
        310994:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        310998:	e594103c 	ldr	r1, [r4, #60]
        31099c:	e3310000 	teq	r1, #0	; 0x0
        3109a0:	0a000023 	beq	310a34 <ExtendVMHeap+0x118>
        3109a4:	e5840034 	str	r0, [r4, #52]
        3109a8:	e5942030 	ldr	r2, [r4, #48]
        3109ac:	e1500002 	cmp	r0, r2
        3109b0:	da00001f 	ble	310a34 <ExtendVMHeap+0x118>
        3109b4:	e1a01000 	mov	r1, r0
        3109b8:	e5940000 	ldr	r0, [r4]
        3109bc:	e0811000 	add	r1, r1, r0
        3109c0:	eb632cff 	bl	1bdbdc4 <$SetHeapLimits>
        3109c4:	e3300000 	teq	r0, #0	; 0x0
        3109c8:	1a000014 	bne	310a20 <ExtendVMHeap+0x104>
        3109cc:	e5940000 	ldr	r0, [r4]
        3109d0:	e5941034 	ldr	r1, [r4, #52]
        3109d4:	e0811000 	add	r1, r1, r0
        3109d8:	e5942030 	ldr	r2, [r4, #48]
        3109dc:	e0820000 	add	r0, r2, r0
        3109e0:	eb63185b 	bl	1bd6b54 <$LockHeapRange>
        3109e4:	e3300000 	teq	r0, #0	; 0x0
        3109e8:	0a000004 	beq	310a00 <ExtendVMHeap+0xe4>
        3109ec:	e5940000 	ldr	r0, [r4]
        3109f0:	e5941030 	ldr	r1, [r4, #48]
        3109f4:	e0811000 	add	r1, r1, r0
        3109f8:	eb632cf1 	bl	1bdbdc4 <$SetHeapLimits>
        3109fc:	ea000007 	b	310a20 <ExtendVMHeap+0x104>
        310a00:	e5940000 	ldr	r0, [r4]
        310a04:	e5941034 	ldr	r1, [r4, #52]
        310a08:	e0811000 	add	r1, r1, r0
        310a0c:	e5942030 	ldr	r2, [r4, #48]
        310a10:	e0820000 	add	r0, r2, r0
        310a14:	eb633521 	bl	1bddea0 <$UnlockHeapRange>
        310a18:	e3300000 	teq	r0, #0	; 0x0
        310a1c:	0a000002 	beq	310a2c <ExtendVMHeap+0x110>
        310a20:	e594002c 	ldr	r0, [r4, #44]
        310a24:	e5a40034 	str	r0, [r4, #52]!
        310a28:	eaffffd8 	b	310990 <ExtendVMHeap+0x74>
        310a2c:	e5940034 	ldr	r0, [r4, #52]
        310a30:	e5840030 	str	r0, [r4, #48]
        310a34:	e5940004 	ldr	r0, [r4, #4]
        310a38:	e0801005 	add	r1, r0, r5
        310a3c:	e2411010 	sub	r1, r1, #16	; 0x10
        310a40:	e2400010 	sub	r0, r0, #16	; 0x10
        310a44:	e3a02010 	mov	r2, #16	; 0x10
        310a48:	eb633941 	bl	1bdef54 <$BlockMove>
        310a4c:	e594002c 	ldr	r0, [r4, #44]
        310a50:	e0800005 	add	r0, r0, r5
        310a54:	e584002c 	str	r0, [r4, #44]
        310a58:	e594101c 	ldr	r1, [r4, #28]
        310a5c:	e0811005 	add	r1, r1, r5
        310a60:	e584101c 	str	r1, [r4, #28]
        310a64:	e5941000 	ldr	r1, [r4]
        310a68:	e0800001 	add	r0, r0, r1
        310a6c:	e3370000 	teq	r7, #0	; 0x0
        310a70:	e5840004 	str	r0, [r4, #4]
        310a74:	0a000004 	beq	310a8c <ExtendVMHeap+0x170>
        310a78:	e5b40024 	ldr	r0, [r4, #36]!
        310a7c:	e5901000 	ldr	r1, [r0]
        310a80:	e0811005 	add	r1, r1, r5
        310a84:	e5801000 	str	r1, [r0]
        310a88:	ea00000c 	b	310ac0 <ExtendVMHeap+0x1a4>
        310a8c:	e0400005 	sub	r0, r0, r5
        310a90:	e5205010 	str	r5, [r0, -#16]!
        310a94:	e5941024 	ldr	r1, [r4, #36]
        310a98:	e5801008 	str	r1, [r0, #8]
        310a9c:	e5806004 	str	r6, [r0, #4]
        310aa0:	e5941020 	ldr	r1, [r4, #32]
        310aa4:	e3310000 	teq	r1, #0	; 0x0
        310aa8:	05840020 	streq	r0, [r4, #32]
        310aac:	e5941024 	ldr	r1, [r4, #36]
        310ab0:	e3310000 	teq	r1, #0	; 0x0
        310ab4:	15a10004 	strne	r0, [r1, #4]!
        310ab8:	e5840024 	str	r0, [r4, #36]
        310abc:	e5a40048 	str	r0, [r4, #72]!
        310ac0:	e3a00001 	mov	r0, #1	; 0x1
        310ac4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: EqualBytes
 * Address: 00311594
 */
void globals::EqualBytes() {
    /*
        311594:	e92d4010 	stmdb	sp!, {r4, lr}
        311598:	e1a03000 	mov	r3, r0
        31159c:	e3a0c003 	mov	ip, #3	; 0x3
        3115a0:	e3a00000 	mov	r0, #0	; 0x0
        3115a4:	ea000006 	b	3115c4 <EqualBytes+0x30>
        3115a8:	e5d34000 	ldrb	r4, [r3]
        3115ac:	e5d1e000 	ldrb	lr, [r1]
        3115b0:	e134000e 	teq	r4, lr
        3115b4:	18bd8010 	ldmneia	sp!, {r4, pc}
        3115b8:	e2833001 	add	r3, r3, #1	; 0x1
        3115bc:	e2811001 	add	r1, r1, #1	; 0x1
        3115c0:	e2422001 	sub	r2, r2, #1	; 0x1
        3115c4:	e113000c 	tst	r3, ip
        3115c8:	13320000 	teqne	r2, #0	; 0x0
        3115cc:	1afffff5 	bne	3115a8 <EqualBytes+0x14>
        3115d0:	e002c00c 	and	ip, r2, ip
        3115d4:	e1b0e142 	movs	lr, r2, asr #2
        3115d8:	e24e2001 	sub	r2, lr, #1	; 0x1
        3115dc:	0a000006 	beq	3115fc <EqualBytes+0x68>
        3115e0:	e4934004 	ldr	r4, [r3], #4
        3115e4:	e491e004 	ldr	lr, [r1], #4
        3115e8:	e134000e 	teq	r4, lr
        3115ec:	18bd8010 	ldmneia	sp!, {r4, pc}
        3115f0:	e1b0e002 	movs	lr, r2
        3115f4:	e2422001 	sub	r2, r2, #1	; 0x1
        3115f8:	1afffff8 	bne	3115e0 <EqualBytes+0x4c>
        3115fc:	e24c2001 	sub	r2, ip, #1	; 0x1
        311600:	e33c0000 	teq	ip, #0	; 0x0
        311604:	0a000008 	beq	31162c <EqualBytes+0x98>
        311608:	e5d3c000 	ldrb	ip, [r3]
        31160c:	e5d1e000 	ldrb	lr, [r1]
        311610:	e13c000e 	teq	ip, lr
        311614:	18bd8010 	ldmneia	sp!, {r4, pc}
        311618:	e2833001 	add	r3, r3, #1	; 0x1
        31161c:	e2811001 	add	r1, r1, #1	; 0x1
        311620:	e1b0c002 	movs	ip, r2
        311624:	e2422001 	sub	r2, r2, #1	; 0x1
        311628:	1afffff6 	bne	311608 <EqualBytes+0x74>
        31162c:	e3a00001 	mov	r0, #1	; 0x1
        311630:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: EQ1__FlT1
 * Address: 003195dc
 */
void globals::EQ1() {
    /*
        3195dc:	e1a0c00d 	mov	ip, sp
        3195e0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        3195e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3195e8:	e1a05000 	mov	r5, r0
        3195ec:	e1a04001 	mov	r4, r1
        3195f0:	e2000003 	and	r0, r0, #3	; 0x3
        3195f4:	e3300001 	teq	r0, #1	; 0x1
        3195f8:	1a000007 	bne	31961c <EQ1__FlT1+0x40>
        3195fc:	e2456001 	sub	r6, r5, #1	; 0x1
        319600:	e5960000 	ldr	r0, [r6]
        319604:	e3100020 	tst	r0, #32	; 0x20
        319608:	0a000006 	beq	319628 <EQ1__FlT1+0x4c>
        31960c:	e1a00005 	mov	r0, r5
        319610:	eb5c9a5f 	bl	1a3ff94 <$ForwardReference(long)>
        319614:	e2406001 	sub	r6, r0, #1	; 0x1
        319618:	ea000002 	b	319628 <EQ1__FlT1+0x4c>
        31961c:	e1a00005 	mov	r0, r5
        319620:	eb5ca2ba 	bl	1a42110 <$NoFaultObjectPtr(long)>
        319624:	e1a06000 	mov	r6, r0
        319628:	e2040003 	and	r0, r4, #3	; 0x3
        31962c:	e3300001 	teq	r0, #1	; 0x1
        319630:	1a000007 	bne	319654 <EQ1__FlT1+0x78>
        319634:	e2440001 	sub	r0, r4, #1	; 0x1
        319638:	e5901000 	ldr	r1, [r0]
        31963c:	e3110020 	tst	r1, #32	; 0x20
        319640:	0a000005 	beq	31965c <EQ1__FlT1+0x80>
        319644:	e1a00004 	mov	r0, r4
        319648:	eb5c9a51 	bl	1a3ff94 <$ForwardReference(long)>
        31964c:	e2400001 	sub	r0, r0, #1	; 0x1
        319650:	ea000001 	b	31965c <EQ1__FlT1+0x80>
        319654:	e1a00004 	mov	r0, r4
        319658:	eb5ca2ac 	bl	1a42110 <$NoFaultObjectPtr(long)>
        31965c:	e3a07001 	mov	r7, #1	; 0x1
        319660:	e1360000 	teq	r6, r0
        319664:	0a000012 	beq	3196b4 <EQ1__FlT1+0xd8>
        319668:	e59f104c 	ldr	r1, [pc, #4c]	; 3196bc <EQ1__FlT1+0xe0>
        31966c:	e3a08000 	mov	r8, #0	; 0x0
        319670:	e1550001 	cmp	r5, r1
        319674:	31540001 	cmpcc	r4, r1
        319678:	3a000011 	bcc	3196c4 <EQ1__FlT1+0xe8>
        31967c:	e5962008 	ldr	r2, [r6, #8]
        319680:	e59f1038 	ldr	r1, [pc, #38]	; 3196c0 <EQ1__FlT1+0xe4>
        319684:	e1320001 	teq	r2, r1
        319688:	05902008 	ldreq	r2, [r0, #8]
        31968c:	01320001 	teqeq	r2, r1
        319690:	0596200c 	ldreq	r2, [r6, #12]
        319694:	0590100c 	ldreq	r1, [r0, #12]
        319698:	01320001 	teqeq	r2, r1
        31969c:	1a000008 	bne	3196c4 <EQ1__FlT1+0xe8>
        3196a0:	e2801010 	add	r1, r0, #16	; 0x10
        3196a4:	e2860010 	add	r0, r6, #16	; 0x10
        3196a8:	eb63bb6c 	bl	1c08460 <$symcmp__FPcT1>
        3196ac:	e3300000 	teq	r0, #0	; 0x0
        3196b0:	1a000003 	bne	3196c4 <EQ1__FlT1+0xe8>
        3196b4:	e1a00007 	mov	r0, r7
        3196b8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        3196bc:	0071fc4c 	rsbeqs	pc, r1, ip, asr #24
        3196c0:	00055552 	andeq	r5, r5, r2, asr r5
        3196c4:	e1a00008 	mov	r0, r8
        3196c8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: EQRef__FlT1
 * Address: 003196cc
 */
void globals::EQRef() {
    /*
        3196cc:	e1300001 	teq	r0, r1
        3196d0:	03a00001 	moveq	r0, #1	; 0x1
        3196d4:	01a0f00e 	moveq	pc, lr
        3196d8:	e0002001 	and	r2, r0, r1
        3196dc:	e3120001 	tst	r2, #1	; 0x1
        3196e0:	1a5ce49b 	bne	1a52954 <$EQ1__FlT1>
        3196e4:	03a00000 	moveq	r0, #0	; 0x0
        3196e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EQ__FRC6RefVarT1
 * Address: 0031c820
 */
void globals::EQ() {
    /*
        31c820:	e5911000 	ldr	r1, [r1]
        31c824:	e5911000 	ldr	r1, [r1]
        31c828:	e5900000 	ldr	r0, [r0]
        31c82c:	e5900000 	ldr	r0, [r0]
        31c830:	ea629e7e 	b	1bc4230 <$EQRef__FlT1>
    */
}

/**
 * Symbol: ExpandObjectTable(RefHandle *)
 * Address: 0031d1e0
 */
ExpandObjectTable(RefHandle *) {
    /*
        31d1e0:	e1a0c00d 	mov	ip, sp
        31d1e4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31d1e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d1ec:	e1a04000 	mov	r4, r0
        31d1f0:	e59f006c 	ldr	r0, [pc, #6c]	; 31d264 <ExpandObjectTable(RefHandle *)+0x84>
        31d1f4:	e5905000 	ldr	r5, [r0]
        31d1f8:	e5950014 	ldr	r0, [r5, #20]
        31d1fc:	e5900000 	ldr	r0, [r0]
        31d200:	e1a06420 	mov	r6, r0, lsr #8
        31d204:	e2860003 	add	r0, r6, #3	; 0x3
        31d208:	e2800c01 	add	r0, r0, #256	; 0x100
        31d20c:	e3c00003 	bic	r0, r0, #3	; 0x3
        31d210:	e5850020 	str	r0, [r5, #32]
        31d214:	eb629c0c 	bl	1bc424c <$GC(void)>
        31d218:	e5950014 	ldr	r0, [r5, #20]
        31d21c:	e5901000 	ldr	r1, [r0]
        31d220:	e0761421 	rsbs	r1, r6, r1, lsr #8
        31d224:	42811007 	addmi	r1, r1, #7	; 0x7
        31d228:	e1b011c1 	movs	r1, r1, asr #3
        31d22c:	1a00000a 	bne	31d25c <ExpandObjectTable(RefHandle *)+0x7c>
        31d230:	e2800008 	add	r0, r0, #8	; 0x8
        31d234:	e2700000 	rsbs	r0, r0, #0	; 0x0
        31d238:	42800007 	addmi	r0, r0, #7	; 0x7
        31d23c:	e1a001c0 	mov	r0, r0, asr #3
        31d240:	e5a50018 	str	r0, [r5, #24]!
        31d244:	e59f001c 	ldr	r0, [pc, #1c]	; 31d268 <ExpandObjectTable(RefHandle *)+0x88>
        31d248:	e5900000 	ldr	r0, [r0]
        31d24c:	e3a02000 	mov	r2, #0	; 0x0
        31d250:	e3a010e9 	mov	r1, #233	; 0xe9
        31d254:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        31d258:	eb6317cf 	bl	1be319c <$Throw>
        31d25c:	e1a00004 	mov	r0, r4
        31d260:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        31d264:	0c105548 	ldceq	5, cr5, [r0], -#288
        31d268:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: EnsureInternal(RefVar const &)
 * Address: 0031ff50
 */
EnsureInternal(RefVar const &) {
    /*
        31ff50:	e1a0c00d 	mov	ip, sp
        31ff54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        31ff58:	e24cb004 	sub	fp, ip, #4	; 0x4
        31ff5c:	e1a04000 	mov	r4, r0
        31ff60:	e5900000 	ldr	r0, [r0]
        31ff64:	e5900000 	ldr	r0, [r0]
        31ff68:	e2001003 	and	r1, r0, #3	; 0x3
        31ff6c:	e3310001 	teq	r1, #1	; 0x1
        31ff70:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        31ff74:	eb6294ca 	bl	1bc52a4 <$IsSymbol(long)>
        31ff78:	e3300000 	teq	r0, #0	; 0x0
        31ff7c:	0a000011 	beq	31ffc8 <EnsureInternal(RefVar const &)+0x78>
        31ff80:	e5940000 	ldr	r0, [r4]
        31ff84:	e5901000 	ldr	r1, [r0]
        31ff88:	e59f0034 	ldr	r0, [pc, #34]	; 31ffc4 <EnsureInternal(RefVar const &)+0x74>
        31ff8c:	e5900000 	ldr	r0, [r0]
        31ff90:	eb5c8014 	bl	1a3ffe8 <TObjectHeap::$InHeap(long)>
        31ff94:	e3300000 	teq	r0, #0	; 0x0
        31ff98:	1a000006 	bne	31ffb8 <EnsureInternal(RefVar const &)+0x68>
        31ff9c:	e5940000 	ldr	r0, [r4]
        31ffa0:	e5900000 	ldr	r0, [r0]
        31ffa4:	e350050e 	cmp	r0, #58720256	; 0x3800000
        31ffa8:	3a000002 	bcc	31ffb8 <EnsureInternal(RefVar const &)+0x68>
        31ffac:	eb62a129 	bl	1bc8458 <$SymbolName(long)>
        31ffb0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        31ffb4:	ea6294b1 	b	1bc5280 <$Intern(char *)>
        31ffb8:	e5940000 	ldr	r0, [r4]
        31ffbc:	e5900000 	ldr	r0, [r0]
        31ffc0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        31ffc4:	0c105548 	ldceq	5, cr5, [r0], -#288
        31ffc8:	e24dd010 	sub	sp, sp, #16	; 0x10
        31ffcc:	e28d0008 	add	r0, sp, #8	; 0x8
        31ffd0:	eb5c6f7f 	bl	1a3bdd4 <TPrecedentsVar::$__ct(void)>
        31ffd4:	e1a0000d 	mov	r0, sp
        31ffd8:	eb5c6f7d 	bl	1a3bdd4 <TPrecedentsVar::$__ct(void)>
        31ffdc:	e1a0200d 	mov	r2, sp
        31ffe0:	e28d1008 	add	r1, sp, #8	; 0x8
        31ffe4:	e1a00004 	mov	r0, r4
        31ffe8:	e3a03001 	mov	r3, #1	; 0x1
        31ffec:	eb5c9093 	bl	1a44240 <$TotalClone1__FRC6RefVarR14TPrecedentsVarT2i>
        31fff0:	e3300002 	teq	r0, #2	; 0x2
        31fff4:	11a04000 	movne	r4, r0
        31fff8:	05940000 	ldreq	r0, [r4]
        31fffc:	05904000 	ldreq	r4, [r0]
        320000:	e59d0000 	ldr	r0, [sp]
        320004:	eb628c6c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        320008:	e59d0008 	ldr	r0, [sp, #8]
        32000c:	eb628c6a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        320010:	e1a00004 	mov	r0, r4
        320014:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ExtendSharedMap(RefVar const &, int)
 * Address: 003204d0
 */
ExtendSharedMap(RefVar const &, int) {
    /*
        3204d0:	e1a0c00d 	mov	ip, sp
        3204d4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        3204d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3204dc:	e1a04000 	mov	r4, r0
        3204e0:	e1a05001 	mov	r5, r1
        3204e4:	eb5c7672 	bl	1a3deb4 <$ComputeMapSize(RefVar const &)>
        3204e8:	e1b06000 	movs	r6, r0
        3204ec:	13a06001 	movne	r6, #1	; 0x1
        3204f0:	e3a00010 	mov	r0, #16	; 0x10
        3204f4:	e0801105 	add	r1, r0, r5, lsl #2
        3204f8:	e59f004c 	ldr	r0, [pc, #4c]	; 32054c <ExtendSharedMap(RefVar const &, int)+0x7c>
        3204fc:	e5900000 	ldr	r0, [r0]
        320500:	e3a02001 	mov	r2, #1	; 0x1
        320504:	eb5c7252 	bl	1a3ce54 <TObjectHeap::$AllocateObject(long, unsigned long)>
        320508:	e1a05000 	mov	r5, r0
        32050c:	e5940000 	ldr	r0, [r4]
        320510:	e5900000 	ldr	r0, [r0]
        320514:	eb629376 	bl	1bc52f4 <$ObjectPtr(long)>
        320518:	e1a07000 	mov	r7, r0
        32051c:	e1a00005 	mov	r0, r5
        320520:	eb629373 	bl	1bc52f4 <$ObjectPtr(long)>
        320524:	e5b71008 	ldr	r1, [r7, #8]!
        320528:	e2011010 	and	r1, r1, #16	; 0x10
        32052c:	e3360000 	teq	r6, #0	; 0x0
        320530:	e5801008 	str	r1, [r0, #8]
        320534:	03a01002 	moveq	r1, #2	; 0x2
        320538:	15941000 	ldrne	r1, [r4]
        32053c:	15911000 	ldrne	r1, [r1]
        320540:	e5a0100c 	str	r1, [r0, #12]!
        320544:	e1a00005 	mov	r0, r5
        320548:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        32054c:	0c105548 	ldceq	5, cr5, [r0], -#288
    */
}

/**
 * Symbol: EraseOval(Rect *)
 * Address: 00320568
 */
EraseOval(Rect *) {
    /*
        320568:	e1a01000 	mov	r1, r0
        32056c:	e3a00002 	mov	r0, #2	; 0x2
        320570:	ea60b03f 	b	1b4c674 <$CallOval(unsigned char, Rect *)>
    */
}

/**
 * Symbol: ErasePaths(paths **)
 * Address: 00327c74
 */
ErasePaths(paths **) {
    /*
        327c74:	e1a01000 	mov	r1, r0
        327c78:	e3a00002 	mov	r0, #2	; 0x2
        327c7c:	ea60927d 	b	1b4c678 <$CallPaths(unsigned char, paths **)>
    */
}

/**
 * Symbol: EqualPat__FPP8PixelMapT1
 * Address: 00328628
 */
void globals::EqualPat() {
    /*
        328628:	e1a0c00d 	mov	ip, sp
        32862c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        328630:	e24cb004 	sub	fp, ip, #4	; 0x4
        328634:	e5902000 	ldr	r2, [r0]
        328638:	e5914000 	ldr	r4, [r1]
        32863c:	e1300001 	teq	r0, r1
        328640:	03a00001 	moveq	r0, #1	; 0x1
        328644:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        328648:	e5925004 	ldr	r5, [r2, #4]
        32864c:	e1a05845 	mov	r5, r5, asr #16
        328650:	e592100c 	ldr	r1, [r2, #12]
        328654:	e1a01841 	mov	r1, r1, asr #16
        328658:	e5920008 	ldr	r0, [r2, #8]
        32865c:	e0416840 	sub	r6, r1, r0, asr #16
        328660:	e592100e 	ldr	r1, [r2, #14]
        328664:	e1a01841 	mov	r1, r1, asr #16
        328668:	e592000a 	ldr	r0, [r2, #10]
        32866c:	e0413840 	sub	r3, r1, r0, asr #16
        328670:	e5920010 	ldr	r0, [r2, #16]
        328674:	e20010ff 	and	r1, r0, #255	; 0xff
        328678:	e594c004 	ldr	ip, [r4, #4]
        32867c:	e3a00000 	mov	r0, #0	; 0x0
        328680:	e135084c 	teq	r5, ip, asr #16
        328684:	0594c00c 	ldreq	ip, [r4, #12]
        328688:	01a0c84c 	moveq	ip, ip, asr #16
        32868c:	0594e008 	ldreq	lr, [r4, #8]
        328690:	004cc84e 	subeq	ip, ip, lr, asr #16
        328694:	013c0006 	teqeq	ip, r6
        328698:	0594e00e 	ldreq	lr, [r4, #14]
        32869c:	01a0e84e 	moveq	lr, lr, asr #16
        3286a0:	0594c00a 	ldreq	ip, [r4, #10]
        3286a4:	004ec84c 	subeq	ip, lr, ip, asr #16
        3286a8:	013c0003 	teqeq	ip, r3
        3286ac:	05943010 	ldreq	r3, [r4, #16]
        3286b0:	020330ff 	andeq	r3, r3, #255	; 0xff
        3286b4:	01330001 	teqeq	r3, r1
        3286b8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        3286bc:	e1a00002 	mov	r0, r2
        3286c0:	eb638fd0 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        3286c4:	e1a07000 	mov	r7, r0
        3286c8:	e1a00004 	mov	r0, r4
        3286cc:	eb638fcd 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        3286d0:	e0020596 	mul	r2, r6, r5
        3286d4:	e1a01000 	mov	r1, r0
        3286d8:	e1a00007 	mov	r0, r7
        3286dc:	eb62da20 	bl	1bdef64 <$EqualBytes>
        3286e0:	e20000ff 	and	r0, r0, #255	; 0xff
        3286e4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: EOPPicCodes(long, PicPlay *, GrafPort *)
 * Address: 00330cc0
 */
EOPPicCodes(long, PicPlay *, GrafPort *) {
    /*
        330cc0:	e33000ff 	teq	r0, #255	; 0xff
        330cc4:	11a0f00e 	movne	pc, lr
        330cc8:	e1a0c00d 	mov	ip, sp
        330ccc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        330cd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        330cd4:	e1a04001 	mov	r4, r1
        330cd8:	e1a01002 	mov	r1, r2
        330cdc:	e1a00004 	mov	r0, r4
        330ce0:	eb60a3f0 	bl	1b59ca8 <$FlushAnyInk(PicPlay *, GrafPort *)>
        330ce4:	e1a00004 	mov	r0, r4
        330ce8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        330cec:	ea60a3f2 	b	1b59cbc <$flushShape(PicPlay *)>
    */
}

/**
 * Symbol: EarlyPicCodes(long, PicPlay *, GrafPort *)
 * Address: 0033196c
 */
EarlyPicCodes(long, PicPlay *, GrafPort *) {
    /*
        33196c:	e3500000 	cmp	r0, #0	; 0x0
        331970:	b1a00001 	movlt	r0, r1
        331974:	b1a01002 	movlt	r1, r2
        331978:	ba60a0ca 	blt	1b59ca8 <$FlushAnyInk(PicPlay *, GrafPort *)>
        33197c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EqualPt__F5PointT1
 * Address: 00335278
 */
void globals::EqualPt() {
    /*
        335278:	e1a0c00d 	mov	ip, sp
        33527c:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        335280:	e24cb004 	sub	fp, ip, #4	; 0x4
        335284:	e51b1012 	ldr	r1, [fp, -#18]
        335288:	e1a01841 	mov	r1, r1, asr #16
        33528c:	e51b000e 	ldr	r0, [fp, -#14]
        335290:	e1310840 	teq	r1, r0, asr #16
        335294:	051b1014 	ldreq	r1, [fp, -#20]
        335298:	01a01841 	moveq	r1, r1, asr #16
        33529c:	051b0010 	ldreq	r0, [fp, -#16]
        3352a0:	01310840 	teqeq	r1, r0, asr #16
        3352a4:	13a00000 	movne	r0, #0	; 0x0
        3352a8:	03a00001 	moveq	r0, #1	; 0x1
        3352ac:	e20000ff 	and	r0, r0, #255	; 0xff
        3352b0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ErasePoly(Polygon **)
 * Address: 003358ac
 */
ErasePoly(Polygon **) {
    /*
        3358ac:	e1a01000 	mov	r1, r0
        3358b0:	e3a00002 	mov	r0, #2	; 0x2
        3358b4:	ea605b70 	b	1b4c67c <$CallPoly(unsigned char, Polygon **)>
    */
}

/**
 * Symbol: EvaluateCharQuality(_POST_PARAMS *)
 * Address: 00335fe0
 */
EvaluateCharQuality(_POST_PARAMS *) {
    /*
        335fe0:	e1a0c00d 	mov	ip, sp
        335fe4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        335fe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        335fec:	e1a04000 	mov	r4, r0
        335ff0:	e24dd05c 	sub	sp, sp, #92	; 0x5c
        335ff4:	e3a00000 	mov	r0, #0	; 0x0
        335ff8:	e58d0040 	str	r0, [sp, #64]
        335ffc:	e58d003c 	str	r0, [sp, #60]
        336000:	e5940018 	ldr	r0, [r4, #24]
        336004:	e58d0004 	str	r0, [sp, #4]
        336008:	e594501c 	ldr	r5, [r4, #28]
        33600c:	e5946040 	ldr	r6, [r4, #64]
        336010:	e1a06846 	mov	r6, r6, asr #16
        336014:	e3a00000 	mov	r0, #0	; 0x0
        336018:	e5c40047 	strb	r0, [r4, #71]
        33601c:	e5c40046 	strb	r0, [r4, #70]
        336020:	e28d0020 	add	r0, sp, #32	; 0x20
        336024:	e5840024 	str	r0, [r4, #36]
        336028:	e28d0008 	add	r0, sp, #8	; 0x8
        33602c:	e5840028 	str	r0, [r4, #40]
        336030:	e3a00000 	mov	r0, #0	; 0x0
        336034:	e3e02000 	mvn	r2, #0	; 0x0
        336038:	e28d1020 	add	r1, sp, #32	; 0x20
        33603c:	e0811080 	add	r1, r1, r0, lsl #1
        336040:	e5c12001 	strb	r2, [r1, #1]
        336044:	e5c12000 	strb	r2, [r1]
        336048:	e28d1008 	add	r1, sp, #8	; 0x8
        33604c:	e0811080 	add	r1, r1, r0, lsl #1
        336050:	e5c12001 	strb	r2, [r1, #1]
        336054:	e5c12000 	strb	r2, [r1]
        336058:	e2800001 	add	r0, r0, #1	; 0x1
        33605c:	e1a00800 	mov	r0, r0, lsl #16
        336060:	e1a00840 	mov	r0, r0, asr #16
        336064:	e350000b 	cmp	r0, #11	; 0xb
        336068:	bafffff1 	blt	336034 <EvaluateCharQuality(_POST_PARAMS *)+0x54>
        33606c:	e3e07000 	mvn	r7, #0	; 0x0
        336070:	e3360000 	teq	r6, #0	; 0x0
        336074:	e58d704c 	str	r7, [sp, #76]
        336078:	0a00004c 	beq	3361b0 <EvaluateCharQuality(_POST_PARAMS *)+0x1d0>
        33607c:	e59d0004 	ldr	r0, [sp, #4]
        336080:	e5d00000 	ldrb	r0, [r0]
        336084:	e3300001 	teq	r0, #1	; 0x1
        336088:	e0858206 	add	r8, r5, r6, lsl #4
        33608c:	e558000e 	ldrb	r0, [r8, -#14]
        336090:	1a000009 	bne	3360bc <EvaluateCharQuality(_POST_PARAMS *)+0xdc>
        336094:	e3300001 	teq	r0, #1	; 0x1
        336098:	1a000044 	bne	3361b0 <EvaluateCharQuality(_POST_PARAMS *)+0x1d0>
        33609c:	e3a00000 	mov	r0, #0	; 0x0
        3360a0:	e58d0038 	str	r0, [sp, #56]
        3360a4:	e5580010 	ldrb	r0, [r8, -#16]
        3360a8:	eb5fe5d3 	bl	1b2f7fc <$OSToRec(int)>
        3360ac:	e3300001 	teq	r0, #1	; 0x1
        3360b0:	1a000009 	bne	3360dc <EvaluateCharQuality(_POST_PARAMS *)+0xfc>
        3360b4:	e2460001 	sub	r0, r6, #1	; 0x1
        3360b8:	ea00004e 	b	3361f8 <EvaluateCharQuality(_POST_PARAMS *)+0x218>
        3360bc:	e3300001 	teq	r0, #1	; 0x1
        3360c0:	13300003 	teqne	r0, #3	; 0x3
        3360c4:	11a08006 	movne	r8, r6
        3360c8:	1a000030 	bne	336190 <EvaluateCharQuality(_POST_PARAMS *)+0x1b0>
        3360cc:	e3a01000 	mov	r1, #0	; 0x0
        3360d0:	e3300001 	teq	r0, #1	; 0x1
        3360d4:	e58d1038 	str	r1, [sp, #56]
        3360d8:	1a000008 	bne	336100 <EvaluateCharQuality(_POST_PARAMS *)+0x120>
        3360dc:	e558000f 	ldrb	r0, [r8, -#15]
        3360e0:	eb5fe5c5 	bl	1b2f7fc <$OSToRec(int)>
        3360e4:	e1a07800 	mov	r7, r0, lsl #16
        3360e8:	e1a07847 	mov	r7, r7, asr #16
        3360ec:	e558000d 	ldrb	r0, [r8, -#13]
        3360f0:	e1a02800 	mov	r2, r0, lsl #16
        3360f4:	e1a02842 	mov	r2, r2, asr #16
        3360f8:	e58d204c 	str	r2, [sp, #76]
        3360fc:	eaffffec 	b	3360b4 <EvaluateCharQuality(_POST_PARAMS *)+0xd4>
        336100:	e2460001 	sub	r0, r6, #1	; 0x1
        336104:	e1a00800 	mov	r0, r0, lsl #16
        336108:	e1a00840 	mov	r0, r0, asr #16
        33610c:	e3a01000 	mov	r1, #0	; 0x0
        336110:	e0852200 	add	r2, r5, r0, lsl #4
        336114:	e5d22002 	ldrb	r2, [r2, #2]
        336118:	e3320002 	teq	r2, #2	; 0x2
        33611c:	0a000059 	beq	336288 <EvaluateCharQuality(_POST_PARAMS *)+0x2a8>
        336120:	e0852200 	add	r2, r5, r0, lsl #4
        336124:	e5d23002 	ldrb	r3, [r2, #2]
        336128:	e3330001 	teq	r3, #1	; 0x1
        33612c:	1a00000c 	bne	336164 <EvaluateCharQuality(_POST_PARAMS *)+0x184>
        336130:	e5d22012 	ldrb	r2, [r2, #18]
        336134:	e3320001 	teq	r2, #1	; 0x1
        336138:	0a000009 	beq	336164 <EvaluateCharQuality(_POST_PARAMS *)+0x184>
        33613c:	e351000a 	cmp	r1, #10	; 0xa
        336140:	aa000050 	bge	336288 <EvaluateCharQuality(_POST_PARAMS *)+0x2a8>
        336144:	e28d2020 	add	r2, sp, #32	; 0x20
        336148:	e0822081 	add	r2, r2, r1, lsl #1
        33614c:	e5c20001 	strb	r0, [r2, #1]
        336150:	e1a03440 	mov	r3, r0, asr #8
        336154:	e5c23000 	strb	r3, [r2]
        336158:	e2811001 	add	r1, r1, #1	; 0x1
        33615c:	e1a01801 	mov	r1, r1, lsl #16
        336160:	e1a01841 	mov	r1, r1, asr #16
        336164:	e2400001 	sub	r0, r0, #1	; 0x1
        336168:	e1a00800 	mov	r0, r0, lsl #16
        33616c:	e1a00840 	mov	r0, r0, asr #16
        336170:	e0852200 	add	r2, r5, r0, lsl #4
        336174:	e5d22002 	ldrb	r2, [r2, #2]
        336178:	e3320002 	teq	r2, #2	; 0x2
        33617c:	1affffe7 	bne	336120 <EvaluateCharQuality(_POST_PARAMS *)+0x140>
        336180:	ea000040 	b	336288 <EvaluateCharQuality(_POST_PARAMS *)+0x2a8>
        336184:	e2480001 	sub	r0, r8, #1	; 0x1
        336188:	e1a08800 	mov	r8, r0, lsl #16
        33618c:	e1a08848 	mov	r8, r8, asr #16
        336190:	e3580000 	cmp	r8, #0	; 0x0
        336194:	da000003 	ble	3361a8 <EvaluateCharQuality(_POST_PARAMS *)+0x1c8>
        336198:	e0850208 	add	r0, r5, r8, lsl #4
        33619c:	e5d00002 	ldrb	r0, [r0, #2]
        3361a0:	e3300002 	teq	r0, #2	; 0x2
        3361a4:	1afffff6 	bne	336184 <EvaluateCharQuality(_POST_PARAMS *)+0x1a4>
        3361a8:	e3380000 	teq	r8, #0	; 0x0
        3361ac:	1a000002 	bne	3361bc <EvaluateCharQuality(_POST_PARAMS *)+0x1dc>
        3361b0:	e3a00001 	mov	r0, #1	; 0x1
        3361b4:	e58d0038 	str	r0, [sp, #56]
        3361b8:	ea000032 	b	336288 <EvaluateCharQuality(_POST_PARAMS *)+0x2a8>
        3361bc:	e3a00000 	mov	r0, #0	; 0x0
        3361c0:	e0859208 	add	r9, r5, r8, lsl #4
        3361c4:	e58d0038 	str	r0, [sp, #56]
        3361c8:	e559000e 	ldrb	r0, [r9, -#14]
        3361cc:	e3300001 	teq	r0, #1	; 0x1
        3361d0:	1a00000c 	bne	336208 <EvaluateCharQuality(_POST_PARAMS *)+0x228>
        3361d4:	e559000f 	ldrb	r0, [r9, -#15]
        3361d8:	eb5fe587 	bl	1b2f7fc <$OSToRec(int)>
        3361dc:	e1a07800 	mov	r7, r0, lsl #16
        3361e0:	e1a07847 	mov	r7, r7, asr #16
        3361e4:	e559000d 	ldrb	r0, [r9, -#13]
        3361e8:	e1a02800 	mov	r2, r0, lsl #16
        3361ec:	e1a02842 	mov	r2, r2, asr #16
        3361f0:	e2480001 	sub	r0, r8, #1	; 0x1
        3361f4:	e58d204c 	str	r2, [sp, #76]
        3361f8:	e5cd0021 	strb	r0, [sp, #33]
        3361fc:	e1a00440 	mov	r0, r0, asr #8
        336200:	e5cd0020 	strb	r0, [sp, #32]
        336204:	ea00001f 	b	336288 <EvaluateCharQuality(_POST_PARAMS *)+0x2a8>
        336208:	e2480001 	sub	r0, r8, #1	; 0x1
        33620c:	e1a00800 	mov	r0, r0, lsl #16
        336210:	e1a00840 	mov	r0, r0, asr #16
        336214:	e3a01000 	mov	r1, #0	; 0x0
        336218:	e0852200 	add	r2, r5, r0, lsl #4
        33621c:	e5d22002 	ldrb	r2, [r2, #2]
        336220:	e3320002 	teq	r2, #2	; 0x2
        336224:	0a000017 	beq	336288 <EvaluateCharQuality(_POST_PARAMS *)+0x2a8>
        336228:	e0852200 	add	r2, r5, r0, lsl #4
        33622c:	e5d23002 	ldrb	r3, [r2, #2]
        336230:	e3330001 	teq	r3, #1	; 0x1
        336234:	1a00000c 	bne	33626c <EvaluateCharQuality(_POST_PARAMS *)+0x28c>
        336238:	e5d22012 	ldrb	r2, [r2, #18]
        33623c:	e3320001 	teq	r2, #1	; 0x1
        336240:	0a000009 	beq	33626c <EvaluateCharQuality(_POST_PARAMS *)+0x28c>
        336244:	e351000a 	cmp	r1, #10	; 0xa
        336248:	aa00000e 	bge	336288 <EvaluateCharQuality(_POST_PARAMS *)+0x2a8>
        33624c:	e28d2020 	add	r2, sp, #32	; 0x20
        336250:	e0822081 	add	r2, r2, r1, lsl #1
        336254:	e5c20001 	strb	r0, [r2, #1]
        336258:	e1a03440 	mov	r3, r0, asr #8
        33625c:	e5c23000 	strb	r3, [r2]
        336260:	e2811001 	add	r1, r1, #1	; 0x1
        336264:	e1a01801 	mov	r1, r1, lsl #16
        336268:	e1a01841 	mov	r1, r1, asr #16
        33626c:	e2400001 	sub	r0, r0, #1	; 0x1
        336270:	e1a00800 	mov	r0, r0, lsl #16
        336274:	e1a00840 	mov	r0, r0, asr #16
        336278:	e0852200 	add	r2, r5, r0, lsl #4
        33627c:	e5d22002 	ldrb	r2, [r2, #2]
        336280:	e3320002 	teq	r2, #2	; 0x2
        336284:	1affffe7 	bne	336228 <EvaluateCharQuality(_POST_PARAMS *)+0x248>
        336288:	e3e09000 	mvn	r9, #0	; 0x0
        33628c:	e2861001 	add	r1, r6, #1	; 0x1
        336290:	e58d1058 	str	r1, [sp, #88]
        336294:	e58d9048 	str	r9, [sp, #72]
        336298:	e59d0004 	ldr	r0, [sp, #4]
        33629c:	e5900004 	ldr	r0, [r0, #4]
        3362a0:	e1510000 	cmp	r1, r0
        3362a4:	aa00004f 	bge	3363e8 <EvaluateCharQuality(_POST_PARAMS *)+0x408>
        3362a8:	e59d0004 	ldr	r0, [sp, #4]
        3362ac:	e5d00000 	ldrb	r0, [r0]
        3362b0:	e3300001 	teq	r0, #1	; 0x1
        3362b4:	e0850206 	add	r0, r5, r6, lsl #4
        3362b8:	e1a0a000 	mov	sl, r0
        3362bc:	e5d00012 	ldrb	r0, [r0, #18]
        3362c0:	1a000008 	bne	3362e8 <EvaluateCharQuality(_POST_PARAMS *)+0x308>
        3362c4:	e3300001 	teq	r0, #1	; 0x1
        3362c8:	1a000046 	bne	3363e8 <EvaluateCharQuality(_POST_PARAMS *)+0x408>
        3362cc:	e3a08000 	mov	r8, #0	; 0x0
        3362d0:	e5da0010 	ldrb	r0, [sl, #16]
        3362d4:	eb5fe548 	bl	1b2f7fc <$OSToRec(int)>
        3362d8:	e3300001 	teq	r0, #1	; 0x1
        3362dc:	1a000007 	bne	336300 <EvaluateCharQuality(_POST_PARAMS *)+0x320>
        3362e0:	e59d0058 	ldr	r0, [sp, #88]
        3362e4:	ea000052 	b	336434 <EvaluateCharQuality(_POST_PARAMS *)+0x454>
        3362e8:	e3300001 	teq	r0, #1	; 0x1
        3362ec:	13300002 	teqne	r0, #2	; 0x2
        3362f0:	1a00002c 	bne	3363a8 <EvaluateCharQuality(_POST_PARAMS *)+0x3c8>
        3362f4:	e3a08000 	mov	r8, #0	; 0x0
        3362f8:	e3300001 	teq	r0, #1	; 0x1
        3362fc:	1a000008 	bne	336324 <EvaluateCharQuality(_POST_PARAMS *)+0x344>
        336300:	e5da0011 	ldrb	r0, [sl, #17]
        336304:	eb5fe53c 	bl	1b2f7fc <$OSToRec(int)>
        336308:	e1a09800 	mov	r9, r0, lsl #16
        33630c:	e1a09849 	mov	r9, r9, asr #16
        336310:	e5da0013 	ldrb	r0, [sl, #19]
        336314:	e1a00800 	mov	r0, r0, lsl #16
        336318:	e1a00840 	mov	r0, r0, asr #16
        33631c:	e58d0048 	str	r0, [sp, #72]
        336320:	eaffffee 	b	3362e0 <EvaluateCharQuality(_POST_PARAMS *)+0x300>
        336324:	e59d0058 	ldr	r0, [sp, #88]
        336328:	e1a00800 	mov	r0, r0, lsl #16
        33632c:	e1a00840 	mov	r0, r0, asr #16
        336330:	e3a01000 	mov	r1, #0	; 0x0
        336334:	e0852200 	add	r2, r5, r0, lsl #4
        336338:	e5d22002 	ldrb	r2, [r2, #2]
        33633c:	e3320003 	teq	r2, #3	; 0x3
        336340:	0a00005f 	beq	3364c4 <EvaluateCharQuality(_POST_PARAMS *)+0x4e4>
        336344:	e0852200 	add	r2, r5, r0, lsl #4
        336348:	e5d23002 	ldrb	r3, [r2, #2]
        33634c:	e3330001 	teq	r3, #1	; 0x1
        336350:	1a00000c 	bne	336388 <EvaluateCharQuality(_POST_PARAMS *)+0x3a8>
        336354:	e552200e 	ldrb	r2, [r2, -#14]
        336358:	e3320001 	teq	r2, #1	; 0x1
        33635c:	0a000009 	beq	336388 <EvaluateCharQuality(_POST_PARAMS *)+0x3a8>
        336360:	e351000a 	cmp	r1, #10	; 0xa
        336364:	aa000056 	bge	3364c4 <EvaluateCharQuality(_POST_PARAMS *)+0x4e4>
        336368:	e28d2008 	add	r2, sp, #8	; 0x8
        33636c:	e0822081 	add	r2, r2, r1, lsl #1
        336370:	e5c20001 	strb	r0, [r2, #1]
        336374:	e1a03440 	mov	r3, r0, asr #8
        336378:	e5c23000 	strb	r3, [r2]
        33637c:	e2811001 	add	r1, r1, #1	; 0x1
        336380:	e1a01801 	mov	r1, r1, lsl #16
        336384:	e1a01841 	mov	r1, r1, asr #16
        336388:	e2800001 	add	r0, r0, #1	; 0x1
        33638c:	e1a00800 	mov	r0, r0, lsl #16
        336390:	e1a00840 	mov	r0, r0, asr #16
        336394:	e0852200 	add	r2, r5, r0, lsl #4
        336398:	e5d22002 	ldrb	r2, [r2, #2]
        33639c:	e3320003 	teq	r2, #3	; 0x3
        3363a0:	1affffe7 	bne	336344 <EvaluateCharQuality(_POST_PARAMS *)+0x364>
        3363a4:	ea000046 	b	3364c4 <EvaluateCharQuality(_POST_PARAMS *)+0x4e4>
        3363a8:	e1a0a006 	mov	sl, r6
        3363ac:	e59d0004 	ldr	r0, [sp, #4]
        3363b0:	e5900004 	ldr	r0, [r0, #4]
        3363b4:	e2400001 	sub	r0, r0, #1	; 0x1
        3363b8:	ea000002 	b	3363c8 <EvaluateCharQuality(_POST_PARAMS *)+0x3e8>
        3363bc:	e28a1001 	add	r1, sl, #1	; 0x1
        3363c0:	e1a0a801 	mov	sl, r1, lsl #16
        3363c4:	e1a0a84a 	mov	sl, sl, asr #16
        3363c8:	e150000a 	cmp	r0, sl
        3363cc:	da000003 	ble	3363e0 <EvaluateCharQuality(_POST_PARAMS *)+0x400>
        3363d0:	e085120a 	add	r1, r5, sl, lsl #4
        3363d4:	e5d11002 	ldrb	r1, [r1, #2]
        3363d8:	e3310003 	teq	r1, #3	; 0x3
        3363dc:	1afffff6 	bne	3363bc <EvaluateCharQuality(_POST_PARAMS *)+0x3dc>
        3363e0:	e130000a 	teq	r0, sl
        3363e4:	1a000001 	bne	3363f0 <EvaluateCharQuality(_POST_PARAMS *)+0x410>
        3363e8:	e3a08001 	mov	r8, #1	; 0x1
        3363ec:	ea000034 	b	3364c4 <EvaluateCharQuality(_POST_PARAMS *)+0x4e4>
        3363f0:	e3a08000 	mov	r8, #0	; 0x0
        3363f4:	e085020a 	add	r0, r5, sl, lsl #4
        3363f8:	e58d0054 	str	r0, [sp, #84]
        3363fc:	e5d00012 	ldrb	r0, [r0, #18]
        336400:	e3300001 	teq	r0, #1	; 0x1
        336404:	1a00000e 	bne	336444 <EvaluateCharQuality(_POST_PARAMS *)+0x464>
        336408:	e59d0054 	ldr	r0, [sp, #84]
        33640c:	e5d00011 	ldrb	r0, [r0, #17]
        336410:	eb5fe4f9 	bl	1b2f7fc <$OSToRec(int)>
        336414:	e1a09800 	mov	r9, r0, lsl #16
        336418:	e1a09849 	mov	r9, r9, asr #16
        33641c:	e59d0054 	ldr	r0, [sp, #84]
        336420:	e5d00013 	ldrb	r0, [r0, #19]
        336424:	e1a00800 	mov	r0, r0, lsl #16
        336428:	e1a00840 	mov	r0, r0, asr #16
        33642c:	e58d0048 	str	r0, [sp, #72]
        336430:	e28a0001 	add	r0, sl, #1	; 0x1
        336434:	e5cd0009 	strb	r0, [sp, #9]
        336438:	e1a00440 	mov	r0, r0, asr #8
        33643c:	e5cd0008 	strb	r0, [sp, #8]
        336440:	ea00001f 	b	3364c4 <EvaluateCharQuality(_POST_PARAMS *)+0x4e4>
        336444:	e28a0001 	add	r0, sl, #1	; 0x1
        336448:	e1a00800 	mov	r0, r0, lsl #16
        33644c:	e1a00840 	mov	r0, r0, asr #16
        336450:	e3a01000 	mov	r1, #0	; 0x0
        336454:	e0852200 	add	r2, r5, r0, lsl #4
        336458:	e5d22002 	ldrb	r2, [r2, #2]
        33645c:	e3320003 	teq	r2, #3	; 0x3
        336460:	0a000017 	beq	3364c4 <EvaluateCharQuality(_POST_PARAMS *)+0x4e4>
        336464:	e0852200 	add	r2, r5, r0, lsl #4
        336468:	e5d23002 	ldrb	r3, [r2, #2]
        33646c:	e3330001 	teq	r3, #1	; 0x1
        336470:	1a00000c 	bne	3364a8 <EvaluateCharQuality(_POST_PARAMS *)+0x4c8>
        336474:	e552200e 	ldrb	r2, [r2, -#14]
        336478:	e3320001 	teq	r2, #1	; 0x1
        33647c:	0a000009 	beq	3364a8 <EvaluateCharQuality(_POST_PARAMS *)+0x4c8>
        336480:	e351000a 	cmp	r1, #10	; 0xa
        336484:	aa00000e 	bge	3364c4 <EvaluateCharQuality(_POST_PARAMS *)+0x4e4>
        336488:	e28d2008 	add	r2, sp, #8	; 0x8
        33648c:	e0822081 	add	r2, r2, r1, lsl #1
        336490:	e5c20001 	strb	r0, [r2, #1]
        336494:	e1a03440 	mov	r3, r0, asr #8
        336498:	e5c23000 	strb	r3, [r2]
        33649c:	e2811001 	add	r1, r1, #1	; 0x1
        3364a0:	e1a01801 	mov	r1, r1, lsl #16
        3364a4:	e1a01841 	mov	r1, r1, asr #16
        3364a8:	e2800001 	add	r0, r0, #1	; 0x1
        3364ac:	e1a00800 	mov	r0, r0, lsl #16
        3364b0:	e1a00840 	mov	r0, r0, asr #16
        3364b4:	e0852200 	add	r2, r5, r0, lsl #4
        3364b8:	e5d22002 	ldrb	r2, [r2, #2]
        3364bc:	e3320003 	teq	r2, #3	; 0x3
        3364c0:	1affffe7 	bne	336464 <EvaluateCharQuality(_POST_PARAMS *)+0x484>
        3364c4:	e0856206 	add	r6, r5, r6, lsl #4
        3364c8:	e58d6050 	str	r6, [sp, #80]
        3364cc:	e5d60001 	ldrb	r0, [r6, #1]
        3364d0:	eb5fe4c9 	bl	1b2f7fc <$OSToRec(int)>
        3364d4:	e1a05800 	mov	r5, r0, lsl #16
        3364d8:	e1a05845 	mov	r5, r5, asr #16
        3364dc:	e5d60003 	ldrb	r0, [r6, #3]
        3364e0:	e1a06800 	mov	r6, r0, lsl #16
        3364e4:	e1a06846 	mov	r6, r6, asr #16
        3364e8:	e335003b 	teq	r5, #59	; 0x3b
        3364ec:	1a000008 	bne	336514 <EvaluateCharQuality(_POST_PARAMS *)+0x534>
        3364f0:	e59d0004 	ldr	r0, [sp, #4]
        3364f4:	e5d00000 	ldrb	r0, [r0]
        3364f8:	e3300001 	teq	r0, #1	; 0x1
        3364fc:	0a000007 	beq	336520 <EvaluateCharQuality(_POST_PARAMS *)+0x540>
        336500:	e3380000 	teq	r8, #0	; 0x0
        336504:	03a00ee7 	moveq	r0, #3696	; 0xe70
        336508:	02400a01 	subeq	r0, r0, #4096	; 0x1000
        33650c:	0a0000bc 	beq	336804 <EvaluateCharQuality(_POST_PARAMS *)+0x824>
        336510:	ea000002 	b	336520 <EvaluateCharQuality(_POST_PARAMS *)+0x540>
        336514:	e3350020 	teq	r5, #32	; 0x20
        336518:	03a00000 	moveq	r0, #0	; 0x0
        33651c:	0a0000b8 	beq	336804 <EvaluateCharQuality(_POST_PARAMS *)+0x824>
        336520:	e3370020 	teq	r7, #32	; 0x20
        336524:	1a000006 	bne	336544 <EvaluateCharQuality(_POST_PARAMS *)+0x564>
        336528:	e3e07000 	mvn	r7, #0	; 0x0
        33652c:	e3a00001 	mov	r0, #1	; 0x1
        336530:	e58d0038 	str	r0, [sp, #56]
        336534:	e3e00000 	mvn	r0, #0	; 0x0
        336538:	e58d704c 	str	r7, [sp, #76]
        33653c:	e5cd0021 	strb	r0, [sp, #33]
        336540:	e5cd0020 	strb	r0, [sp, #32]
        336544:	e3390020 	teq	r9, #32	; 0x20
        336548:	1a000005 	bne	336564 <EvaluateCharQuality(_POST_PARAMS *)+0x584>
        33654c:	e3e09000 	mvn	r9, #0	; 0x0
        336550:	e3a08001 	mov	r8, #1	; 0x1
        336554:	e3e00000 	mvn	r0, #0	; 0x0
        336558:	e58d9048 	str	r9, [sp, #72]
        33655c:	e5cd0009 	strb	r0, [sp, #9]
        336560:	e5cd0008 	strb	r0, [sp, #8]
        336564:	e3a0a000 	mov	sl, #0	; 0x0
        336568:	e28d3044 	add	r3, sp, #68	; 0x44
        33656c:	e3e02000 	mvn	r2, #0	; 0x0
        336570:	e92d000c 	stmdb	sp!, {r2, r3}
        336574:	e1a02006 	mov	r2, r6
        336578:	e1a01005 	mov	r1, r5
        33657c:	e5940000 	ldr	r0, [r4]
        336580:	e5900000 	ldr	r0, [r0]
        336584:	e3e03000 	mvn	r3, #0	; 0x0
        336588:	eb5fcff2 	bl	1b2a558 <$PDFGetRule__FP15PDF_MAIN_HEADERsN32PP15PDF_RULE_HEADER>
        33658c:	e28dd008 	add	sp, sp, #8	; 0x8
        336590:	e3300000 	teq	r0, #0	; 0x0
        336594:	0a000005 	beq	3365b0 <EvaluateCharQuality(_POST_PARAMS *)+0x5d0>
        336598:	e59d0044 	ldr	r0, [sp, #68]
        33659c:	e590a000 	ldr	sl, [r0]
        3365a0:	e1a0a82a 	mov	sl, sl, lsr #16
        3365a4:	e5940070 	ldr	r0, [r4, #112]
        3365a8:	e3100001 	tst	r0, #1	; 0x1
        3365ac:	1a000001 	bne	3365b8 <EvaluateCharQuality(_POST_PARAMS *)+0x5d8>
        3365b0:	e3a00000 	mov	r0, #0	; 0x0
        3365b4:	e58d0044 	str	r0, [sp, #68]
        3365b8:	e3770001 	cmn	r7, #1	; 0x1
        3365bc:	0a000013 	beq	336610 <EvaluateCharQuality(_POST_PARAMS *)+0x630>
        3365c0:	e28d3040 	add	r3, sp, #64	; 0x40
        3365c4:	e59d204c 	ldr	r2, [sp, #76]
        3365c8:	e92d000c 	stmdb	sp!, {r2, r3}
        3365cc:	e1a03007 	mov	r3, r7
        3365d0:	e1a02006 	mov	r2, r6
        3365d4:	e1a01005 	mov	r1, r5
        3365d8:	e5940000 	ldr	r0, [r4]
        3365dc:	e5900000 	ldr	r0, [r0]
        3365e0:	eb5fcfdc 	bl	1b2a558 <$PDFGetRule__FP15PDF_MAIN_HEADERsN32PP15PDF_RULE_HEADER>
        3365e4:	e28dd008 	add	sp, sp, #8	; 0x8
        3365e8:	e3300000 	teq	r0, #0	; 0x0
        3365ec:	0a000005 	beq	336608 <EvaluateCharQuality(_POST_PARAMS *)+0x628>
        3365f0:	e59d0040 	ldr	r0, [sp, #64]
        3365f4:	e5900000 	ldr	r0, [r0]
        3365f8:	e08aa820 	add	sl, sl, r0, lsr #16
        3365fc:	e5940070 	ldr	r0, [r4, #112]
        336600:	e3100002 	tst	r0, #2	; 0x2
        336604:	1a000001 	bne	336610 <EvaluateCharQuality(_POST_PARAMS *)+0x630>
        336608:	e3a00000 	mov	r0, #0	; 0x0
        33660c:	e58d0040 	str	r0, [sp, #64]
        336610:	e3790001 	cmn	r9, #1	; 0x1
        336614:	0a000013 	beq	336668 <EvaluateCharQuality(_POST_PARAMS *)+0x688>
        336618:	e28d303c 	add	r3, sp, #60	; 0x3c
        33661c:	e59d2048 	ldr	r2, [sp, #72]
        336620:	e92d000c 	stmdb	sp!, {r2, r3}
        336624:	e1a03009 	mov	r3, r9
        336628:	e1a02006 	mov	r2, r6
        33662c:	e1a01005 	mov	r1, r5
        336630:	e5940000 	ldr	r0, [r4]
        336634:	e5900000 	ldr	r0, [r0]
        336638:	eb5fcfc6 	bl	1b2a558 <$PDFGetRule__FP15PDF_MAIN_HEADERsN32PP15PDF_RULE_HEADER>
        33663c:	e28dd008 	add	sp, sp, #8	; 0x8
        336640:	e3300000 	teq	r0, #0	; 0x0
        336644:	0a000005 	beq	336660 <EvaluateCharQuality(_POST_PARAMS *)+0x680>
        336648:	e59d003c 	ldr	r0, [sp, #60]
        33664c:	e5900000 	ldr	r0, [r0]
        336650:	e08aa820 	add	sl, sl, r0, lsr #16
        336654:	e5940070 	ldr	r0, [r4, #112]
        336658:	e3100002 	tst	r0, #2	; 0x2
        33665c:	1a000001 	bne	336668 <EvaluateCharQuality(_POST_PARAMS *)+0x688>
        336660:	e3a00000 	mov	r0, #0	; 0x0
        336664:	e58d003c 	str	r0, [sp, #60]
        336668:	e1a0220a 	mov	r2, sl, lsl #4
        33666c:	e1a00004 	mov	r0, r4
        336670:	e58d2000 	str	r2, [sp]
        336674:	eb5fe86e 	bl	1b30834 <$ResetChangePPDLetterInfo(_POST_PARAMS *)>
        336678:	e3a06000 	mov	r6, #0	; 0x0
        33667c:	e59d0038 	ldr	r0, [sp, #56]
        336680:	e2844038 	add	r4, r4, #56	; 0x38
        336684:	e8840101 	stmia	r4, {r0, r8}
        336688:	e2444038 	sub	r4, r4, #56	; 0x38
        33668c:	e5c4508c 	strb	r5, [r4, #140]
        336690:	e5c4708d 	strb	r7, [r4, #141]
        336694:	e5c4908e 	strb	r9, [r4, #142]
        336698:	e59d0044 	ldr	r0, [sp, #68]
        33669c:	e3300000 	teq	r0, #0	; 0x0
        3366a0:	0a000007 	beq	3366c4 <EvaluateCharQuality(_POST_PARAMS *)+0x6e4>
        3366a4:	e3a00000 	mov	r0, #0	; 0x0
        3366a8:	e5840030 	str	r0, [r4, #48]
        3366ac:	e5840034 	str	r0, [r4, #52]
        3366b0:	e1a00004 	mov	r0, r4
        3366b4:	e59d1044 	ldr	r1, [sp, #68]
        3366b8:	e59d2000 	ldr	r2, [sp]
        3366bc:	eb5fd3c4 	bl	1b2b5d4 <$CalculateGroupResult(_POST_PARAMS *, PDF_RULE_HEADER *, long)>
        3366c0:	e1a06000 	mov	r6, r0
        3366c4:	e3a08001 	mov	r8, #1	; 0x1
        3366c8:	e59d0040 	ldr	r0, [sp, #64]
        3366cc:	e3300000 	teq	r0, #0	; 0x0
        3366d0:	0a000007 	beq	3366f4 <EvaluateCharQuality(_POST_PARAMS *)+0x714>
        3366d4:	e3a00000 	mov	r0, #0	; 0x0
        3366d8:	e5840034 	str	r0, [r4, #52]
        3366dc:	e5848030 	str	r8, [r4, #48]
        3366e0:	e1a00004 	mov	r0, r4
        3366e4:	e59d1040 	ldr	r1, [sp, #64]
        3366e8:	e59d2000 	ldr	r2, [sp]
        3366ec:	eb5fd3b8 	bl	1b2b5d4 <$CalculateGroupResult(_POST_PARAMS *, PDF_RULE_HEADER *, long)>
        3366f0:	e0806006 	add	r6, r0, r6
        3366f4:	e59d003c 	ldr	r0, [sp, #60]
        3366f8:	e3300000 	teq	r0, #0	; 0x0
        3366fc:	0a000008 	beq	336724 <EvaluateCharQuality(_POST_PARAMS *)+0x744>
        336700:	e3a00000 	mov	r0, #0	; 0x0
        336704:	e2844030 	add	r4, r4, #48	; 0x30
        336708:	e8840101 	stmia	r4, {r0, r8}
        33670c:	e2444030 	sub	r4, r4, #48	; 0x30
        336710:	e1a00004 	mov	r0, r4
        336714:	e59d103c 	ldr	r1, [sp, #60]
        336718:	e59d2000 	ldr	r2, [sp]
        33671c:	eb5fd3ac 	bl	1b2b5d4 <$CalculateGroupResult(_POST_PARAMS *, PDF_RULE_HEADER *, long)>
        336720:	e0806006 	add	r6, r0, r6
        336724:	e33a0000 	teq	sl, #0	; 0x0
        336728:	0a000003 	beq	33673c <EvaluateCharQuality(_POST_PARAMS *)+0x75c>
        33672c:	e1a01106 	mov	r1, r6, lsl #2
        336730:	e1a0000a 	mov	r0, sl
        336734:	eb61f081 	bl	1bb2940 <$__rt_sdiv>
        336738:	e1a06000 	mov	r6, r0
        33673c:	e5940070 	ldr	r0, [r4, #112]
        336740:	e3100004 	tst	r0, #4	; 0x4
        336744:	0a00000a 	beq	336774 <EvaluateCharQuality(_POST_PARAMS *)+0x794>
        336748:	e5940004 	ldr	r0, [r4, #4]
        33674c:	e5900090 	ldr	r0, [r0, #144]
        336750:	e1a00820 	mov	r0, r0, lsr #16
        336754:	e3100b02 	tst	r0, #2048	; 0x800
        336758:	1a000005 	bne	336774 <EvaluateCharQuality(_POST_PARAMS *)+0x794>
        33675c:	e59d0050 	ldr	r0, [sp, #80]
        336760:	e5d00001 	ldrb	r0, [r0, #1]
        336764:	eb5fe424 	bl	1b2f7fc <$OSToRec(int)>
        336768:	e1a01004 	mov	r1, r4
        33676c:	eb5fdbcd 	bl	1b2d6a8 <$EvaluateLetterUsingSideReasoning(unsigned char, _POST_PARAMS *)>
        336770:	e0866100 	add	r6, r6, r0, lsl #2
        336774:	e5940070 	ldr	r0, [r4, #112]
        336778:	e3100001 	tst	r0, #1	; 0x1
        33677c:	15940004 	ldrne	r0, [r4, #4]
        336780:	15900006 	ldrne	r0, [r0, #6]
        336784:	11a00820 	movne	r0, r0, lsr #16
        336788:	1200000c 	andne	r0, r0, #12	; 0xc
        33678c:	13300000 	teqne	r0, #0	; 0x0
        336790:	0a000010 	beq	3367d8 <EvaluateCharQuality(_POST_PARAMS *)+0x7f8>
        336794:	e24dd004 	sub	sp, sp, #4	; 0x4
        336798:	e3a00000 	mov	r0, #0	; 0x0
        33679c:	e5cd0001 	strb	r0, [sp, #1]
        3367a0:	e5cd0000 	strb	r0, [sp]
        3367a4:	e1a0300d 	mov	r3, sp
        3367a8:	e92d0008 	stmdb	sp!, {r3}
        3367ac:	e5942008 	ldr	r2, [r4, #8]
        3367b0:	e1a00004 	mov	r0, r4
        3367b4:	e3a03000 	mov	r3, #0	; 0x0
        3367b8:	e3a01000 	mov	r1, #0	; 0x0
        3367bc:	eb5ff05b 	bl	1b32930 <$CheckDiacriticsDirections(_POST_PARAMS *, rec_w_type *, xrdata_type *, short, short *)>
        3367c0:	e28dd004 	add	sp, sp, #4	; 0x4
        3367c4:	e3300000 	teq	r0, #0	; 0x0
        3367c8:	159d0000 	ldrne	r0, [sp]
        3367cc:	11a00840 	movne	r0, r0, asr #16
        3367d0:	10466100 	subne	r6, r6, r0, lsl #2
        3367d4:	e28dd004 	add	sp, sp, #4	; 0x4
        3367d8:	e5940070 	ldr	r0, [r4, #112]
        3367dc:	e3100004 	tst	r0, #4	; 0x4
        3367e0:	0a000004 	beq	3367f8 <EvaluateCharQuality(_POST_PARAMS *)+0x818>
        3367e4:	e1a02004 	mov	r2, r4
        3367e8:	e1a01007 	mov	r1, r7
        3367ec:	e1a00005 	mov	r0, r5
        3367f0:	eb5fd373 	bl	1b2b5c4 <$CalculateBoxes_Side_Result__FsT1P12_POST_PARAMS>
        3367f4:	e0866100 	add	r6, r6, r0, lsl #2
        3367f8:	e1a00004 	mov	r0, r4
        3367fc:	eb5fd368 	bl	1b2b5a4 <$ApplyChangePPDLetterInfo(_POST_PARAMS *)>
        336800:	e1a00006 	mov	r0, r6
        336804:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EvaluateWordUsingSideReasoning(char *, xrdata_type *)
 * Address: 003368f4
 */
EvaluateWordUsingSideReasoning(char *, xrdata_type *) {
    /*
        3368f4:	e1a0c00d 	mov	ip, sp
        3368f8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        3368fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        336900:	e1a05000 	mov	r5, r0
        336904:	e1a04001 	mov	r4, r1
        336908:	e59f201c 	ldr	r2, [pc, #1c]	; 33692c <EvaluateWordUsingSideReasoning(char *, xrdata_type *)+0x38>
        33690c:	eb5fdb68 	bl	1b2d6b4 <$EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)>
        336910:	e1a06000 	mov	r6, r0
        336914:	e59f2014 	ldr	r2, [pc, #14]	; 336930 <EvaluateWordUsingSideReasoning(char *, xrdata_type *)+0x3c>
        336918:	e1a01004 	mov	r1, r4
        33691c:	e1a00005 	mov	r0, r5
        336920:	eb5fdb63 	bl	1b2d6b4 <$EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)>
        336924:	e1a00006 	mov	r0, r6
        336928:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        33692c:	0c1056bc 	ldceq	6, cr5, [r0], -#752
        336930:	0c1056cc 	ldceq	6, cr5, [r0], -#816
    */
}

/**
 * Symbol: EvaluateLetterUsingSideReasoning(unsigned char, _POST_PARAMS *)
 * Address: 00336934
 */
EvaluateLetterUsingSideReasoning(unsigned char, _POST_PARAMS *) {
    /*
        336934:	e1a0c00d 	mov	ip, sp
        336938:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        33693c:	e24cb004 	sub	fp, ip, #4	; 0x4
        336940:	e20000ff 	and	r0, r0, #255	; 0xff
        336944:	e59f200c 	ldr	r2, [pc, #c]	; 336958 <EvaluateLetterUsingSideReasoning(unsigned char, _POST_PARAMS *)+0x24>
        336948:	eb5fdb57 	bl	1b2d6ac <$EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)>
        33694c:	e1a00800 	mov	r0, r0, lsl #16
        336950:	e1a00840 	mov	r0, r0, asr #16
        336954:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        336958:	0c1056dc 	ldceq	6, cr5, [r0], -#880
    */
}

/**
 * Symbol: EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)
 * Address: 0033695c
 */
EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *) {
    /*
        33695c:	e1a0c00d 	mov	ip, sp
        336960:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        336964:	e24cb004 	sub	fp, ip, #4	; 0x4
        336968:	e1a05000 	mov	r5, r0
        33696c:	e1a04002 	mov	r4, r2
        336970:	e3a09000 	mov	r9, #0	; 0x0
        336974:	e5b12008 	ldr	r2, [r1, #8]!
        336978:	e3a01000 	mov	r1, #0	; 0x0
        33697c:	e3a08000 	mov	r8, #0	; 0x0
        336980:	e5946000 	ldr	r6, [r4]
        336984:	e5d60000 	ldrb	r0, [r6]
        336988:	e3300000 	teq	r0, #0	; 0x0
        33698c:	0a000042 	beq	336a9c <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x140>
        336990:	e5d2e000 	ldrb	lr, [r2]
        336994:	e1a00002 	mov	r0, r2
        336998:	e33e0000 	teq	lr, #0	; 0x0
        33699c:	0a00000e 	beq	3369dc <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x80>
        3369a0:	e5943000 	ldr	r3, [r4]
        3369a4:	e7d3c001 	ldrb	ip, [r3, r1]
        3369a8:	e5d03000 	ldrb	r3, [r0]
        3369ac:	e13c0003 	teq	ip, r3
        3369b0:	1a000006 	bne	3369d0 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x74>
        3369b4:	e5d03003 	ldrb	r3, [r0, #3]
        3369b8:	e5d4700e 	ldrb	r7, [r4, #14]
        3369bc:	e1530007 	cmp	r3, r7
        3369c0:	ba000002 	blt	3369d0 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x74>
        3369c4:	e5d4700f 	ldrb	r7, [r4, #15]
        3369c8:	e1530007 	cmp	r3, r7
        3369cc:	d2888001 	addle	r8, r8, #1	; 0x1
        3369d0:	e5f03018 	ldrb	r3, [r0, #24]!
        3369d4:	e3330000 	teq	r3, #0	; 0x0
        3369d8:	1afffff2 	bne	3369a8 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x4c>
        3369dc:	e2811001 	add	r1, r1, #1	; 0x1
        3369e0:	e7d60001 	ldrb	r0, [r6, r1]
        3369e4:	e3300000 	teq	r0, #0	; 0x0
        3369e8:	1affffe9 	bne	336994 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x38>
        3369ec:	e3580000 	cmp	r8, #0	; 0x0
        3369f0:	c3a07000 	movgt	r7, #0	; 0x0
        3369f4:	c3a06000 	movgt	r6, #0	; 0x0
        3369f8:	ca000009 	bgt	336a24 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0xc8>
        3369fc:	ea000026 	b	336a9c <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x140>
        336a00:	eb5fe37d 	bl	1b2f7fc <$OSToRec(int)>
        336a04:	e1a01000 	mov	r1, r0
        336a08:	e5940004 	ldr	r0, [r4, #4]
        336a0c:	eb5ce798 	bl	1a70874 <$HWRStrChr(char *, int)>
        336a10:	e3300000 	teq	r0, #0	; 0x0
        336a14:	12866001 	addne	r6, r6, #1	; 0x1
        336a18:	e2877001 	add	r7, r7, #1	; 0x1
        336a1c:	e3570018 	cmp	r7, #24	; 0x18
        336a20:	aa000002 	bge	336a30 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0xd4>
        336a24:	e7d50007 	ldrb	r0, [r5, r7]
        336a28:	e3300000 	teq	r0, #0	; 0x0
        336a2c:	1afffff3 	bne	336a00 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0xa4>
        336a30:	e5940008 	ldr	r0, [r4, #8]
        336a34:	e3300000 	teq	r0, #0	; 0x0
        336a38:	13a07000 	movne	r7, #0	; 0x0
        336a3c:	1a000009 	bne	336a68 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x10c>
        336a40:	ea00000b 	b	336a74 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x118>
        336a44:	eb5fe36c 	bl	1b2f7fc <$OSToRec(int)>
        336a48:	e1a01000 	mov	r1, r0
        336a4c:	e5940008 	ldr	r0, [r4, #8]
        336a50:	eb5ce787 	bl	1a70874 <$HWRStrChr(char *, int)>
        336a54:	e3300000 	teq	r0, #0	; 0x0
        336a58:	12866001 	addne	r6, r6, #1	; 0x1
        336a5c:	e2877001 	add	r7, r7, #1	; 0x1
        336a60:	e3570018 	cmp	r7, #24	; 0x18
        336a64:	aa000002 	bge	336a74 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x118>
        336a68:	e7d50007 	ldrb	r0, [r5, r7]
        336a6c:	e3300000 	teq	r0, #0	; 0x0
        336a70:	1afffff3 	bne	336a44 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0xe8>
        336a74:	e3360000 	teq	r6, #0	; 0x0
        336a78:	0a000002 	beq	336a88 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x12c>
        336a7c:	e0480006 	sub	r0, r8, r6
        336a80:	e3500002 	cmp	r0, #2	; 0x2
        336a84:	ba000004 	blt	336a9c <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x140>
        336a88:	e594000c 	ldr	r0, [r4, #12]
        336a8c:	e1a00820 	mov	r0, r0, lsr #16
        336a90:	e2600000 	rsb	r0, r0, #0	; 0x0
        336a94:	e1a09800 	mov	r9, r0, lsl #16
        336a98:	e1a09849 	mov	r9, r9, asr #16
        336a9c:	e1a00009 	mov	r0, r9
        336aa0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        336aa4:	e1a0c00d 	mov	ip, sp
        336aa8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        336aac:	e24cb004 	sub	fp, ip, #4	; 0x4
        336ab0:	e1a05001 	mov	r5, r1
        336ab4:	e1a04003 	mov	r4, r3
        336ab8:	e1a08800 	mov	r8, r0, lsl #16
        336abc:	e1a08848 	mov	r8, r8, asr #16
        336ac0:	e3a06000 	mov	r6, #0	; 0x0
        336ac4:	e0880108 	add	r0, r8, r8, lsl #2
        336ac8:	e0800188 	add	r0, r0, r8, lsl #3
        336acc:	e0810100 	add	r0, r1, r0, lsl #2
        336ad0:	e1a07000 	mov	r7, r0
        336ad4:	e5b29008 	ldr	r9, [r2, #8]!
        336ad8:	e5d00001 	ldrb	r0, [r0, #1]
        336adc:	e3300000 	teq	r0, #0	; 0x0
        336ae0:	0a000020 	beq	336b68 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x20c>
        336ae4:	e0870106 	add	r0, r7, r6, lsl #2
        336ae8:	e5d00001 	ldrb	r0, [r0, #1]
        336aec:	e3300003 	teq	r0, #3	; 0x3
        336af0:	1a000015 	bne	336b4c <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x1f0>
        336af4:	e1a02006 	mov	r2, r6
        336af8:	e1a01008 	mov	r1, r8
        336afc:	e1a00005 	mov	r0, r5
        336b00:	eb5fdaf8 	bl	1b2d6e8 <$FindXrIndex__FPA13_15RWG_PPD_el_typesi>
        336b04:	e1b01000 	movs	r1, r0
        336b08:	4a00000f 	bmi	336b4c <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x1f0>
        336b0c:	e3a00000 	mov	r0, #0	; 0x0
        336b10:	e5d42000 	ldrb	r2, [r4]
        336b14:	e3320000 	teq	r2, #0	; 0x0
        336b18:	0a00000b 	beq	336b4c <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x1f0>
        336b1c:	e0811081 	add	r1, r1, r1, lsl #1
        336b20:	e7d91181 	ldrb	r1, [r9, r1, lsl #3]
        336b24:	e7d42000 	ldrb	r2, [r4, r0]
        336b28:	e1320001 	teq	r2, r1
        336b2c:	03a00001 	moveq	r0, #1	; 0x1
        336b30:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        336b34:	e2800001 	add	r0, r0, #1	; 0x1
        336b38:	e1a00800 	mov	r0, r0, lsl #16
        336b3c:	e1a00840 	mov	r0, r0, asr #16
        336b40:	e7d42000 	ldrb	r2, [r4, r0]
        336b44:	e3320000 	teq	r2, #0	; 0x0
        336b48:	1afffff5 	bne	336b24 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x1c8>
        336b4c:	e2860001 	add	r0, r6, #1	; 0x1
        336b50:	e1a06800 	mov	r6, r0, lsl #16
        336b54:	e1a06846 	mov	r6, r6, asr #16
        336b58:	e0870106 	add	r0, r7, r6, lsl #2
        336b5c:	e5d00001 	ldrb	r0, [r0, #1]
        336b60:	e3300000 	teq	r0, #0	; 0x0
        336b64:	1affffde 	bne	336ae4 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x188>
        336b68:	e3a00000 	mov	r0, #0	; 0x0
        336b6c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)
 * Address: 00337078
 */
EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *) {
    /*
        337078:	e1a0c00d 	mov	ip, sp
        33707c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        337080:	e24cb004 	sub	fp, ip, #4	; 0x4
        337084:	e1a04001 	mov	r4, r1
        337088:	e1a05002 	mov	r5, r2
        33708c:	e20010ff 	and	r1, r0, #255	; 0xff
        337090:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        337094:	e3a08000 	mov	r8, #0	; 0x0
        337098:	e5cd8019 	strb	r8, [sp, #25]
        33709c:	e5cd8018 	strb	r8, [sp, #24]
        3370a0:	e5946008 	ldr	r6, [r4, #8]
        3370a4:	e5967008 	ldr	r7, [r6, #8]
        3370a8:	e5920000 	ldr	r0, [r2]
        3370ac:	eb5ce5f0 	bl	1a70874 <$HWRStrChr(char *, int)>
        3370b0:	e3300000 	teq	r0, #0	; 0x0
        3370b4:	0a000016 	beq	337114 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x9c>
        3370b8:	e5953008 	ldr	r3, [r5, #8]
        3370bc:	e5941020 	ldr	r1, [r4, #32]
        3370c0:	e5940040 	ldr	r0, [r4, #64]
        3370c4:	e1a00840 	mov	r0, r0, asr #16
        3370c8:	e1a02006 	mov	r2, r6
        3370cc:	ebfffe74 	bl	336aa4 <EvaluateXrToLetters(char *, xrdata_type *, XR_TO_LETTERS *)+0x148>
        3370d0:	e3300000 	teq	r0, #0	; 0x0
        3370d4:	1a00000e 	bne	337114 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x9c>
        3370d8:	e5940040 	ldr	r0, [r4, #64]
        3370dc:	e1a00820 	mov	r0, r0, lsr #16
        3370e0:	e5cd0001 	strb	r0, [sp, #1]
        3370e4:	e1a00440 	mov	r0, r0, asr #8
        3370e8:	e5cd0000 	strb	r0, [sp]
        3370ec:	e3e00000 	mvn	r0, #0	; 0x0
        3370f0:	e5cd0003 	strb	r0, [sp, #3]
        3370f4:	e5cd0002 	strb	r0, [sp, #2]
        3370f8:	e28d3010 	add	r3, sp, #16	; 0x10
        3370fc:	e28d2014 	add	r2, sp, #20	; 0x14
        337100:	e1a0000d 	mov	r0, sp
        337104:	e5941020 	ldr	r1, [r4, #32]
        337108:	eb5fd974 	bl	1b2d6e0 <$FindMinMaxXrIndex__FPsPA13_15RWG_PPD_el_typeN21>
        33710c:	e3300000 	teq	r0, #0	; 0x0
        337110:	1a000001 	bne	33711c <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0xa4>
        337114:	e1a00008 	mov	r0, r8
        337118:	ea00009d 	b	337394 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x31c>
        33711c:	e59d1010 	ldr	r1, [sp, #16]
        337120:	e1a01841 	mov	r1, r1, asr #16
        337124:	e58d1004 	str	r1, [sp, #4]
        337128:	e59d1010 	ldr	r1, [sp, #16]
        33712c:	e1a01841 	mov	r1, r1, asr #16
        337130:	e59d0014 	ldr	r0, [sp, #20]
        337134:	e0410840 	sub	r0, r1, r0, asr #16
        337138:	e2806001 	add	r6, r0, #1	; 0x1
        33713c:	e5940038 	ldr	r0, [r4, #56]
        337140:	e3300000 	teq	r0, #0	; 0x0
        337144:	1a000018 	bne	3371ac <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x134>
        337148:	e28d3008 	add	r3, sp, #8	; 0x8
        33714c:	e28d200c 	add	r2, sp, #12	; 0xc
        337150:	e5940024 	ldr	r0, [r4, #36]
        337154:	e5941020 	ldr	r1, [r4, #32]
        337158:	eb5fd960 	bl	1b2d6e0 <$FindMinMaxXrIndex__FPsPA13_15RWG_PPD_el_typeN21>
        33715c:	e3300000 	teq	r0, #0	; 0x0
        337160:	0a000011 	beq	3371ac <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x134>
        337164:	e59d000c 	ldr	r0, [sp, #12]
        337168:	e1a00840 	mov	r0, r0, asr #16
        33716c:	e59d1014 	ldr	r1, [sp, #20]
        337170:	e1500841 	cmp	r0, r1, asr #16
        337174:	aa000003 	bge	337188 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x110>
        337178:	e59d000e 	ldr	r0, [sp, #14]
        33717c:	e5cd0015 	strb	r0, [sp, #21]
        337180:	e1a00440 	mov	r0, r0, asr #8
        337184:	e5cd0014 	strb	r0, [sp, #20]
        337188:	e59d1008 	ldr	r1, [sp, #8]
        33718c:	e1a01841 	mov	r1, r1, asr #16
        337190:	e59d0010 	ldr	r0, [sp, #16]
        337194:	e1510840 	cmp	r1, r0, asr #16
        337198:	da000003 	ble	3371ac <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x134>
        33719c:	e59d000a 	ldr	r0, [sp, #10]
        3371a0:	e5cd0011 	strb	r0, [sp, #17]
        3371a4:	e1a00440 	mov	r0, r0, asr #8
        3371a8:	e5cd0010 	strb	r0, [sp, #16]
        3371ac:	e594003c 	ldr	r0, [r4, #60]
        3371b0:	e3300000 	teq	r0, #0	; 0x0
        3371b4:	1a000018 	bne	33721c <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x1a4>
        3371b8:	e28d3008 	add	r3, sp, #8	; 0x8
        3371bc:	e28d200c 	add	r2, sp, #12	; 0xc
        3371c0:	e5940028 	ldr	r0, [r4, #40]
        3371c4:	e5941020 	ldr	r1, [r4, #32]
        3371c8:	eb5fd944 	bl	1b2d6e0 <$FindMinMaxXrIndex__FPsPA13_15RWG_PPD_el_typeN21>
        3371cc:	e3300000 	teq	r0, #0	; 0x0
        3371d0:	0a000011 	beq	33721c <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x1a4>
        3371d4:	e59d000c 	ldr	r0, [sp, #12]
        3371d8:	e1a00840 	mov	r0, r0, asr #16
        3371dc:	e59d1014 	ldr	r1, [sp, #20]
        3371e0:	e1500841 	cmp	r0, r1, asr #16
        3371e4:	aa000003 	bge	3371f8 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x180>
        3371e8:	e59d000e 	ldr	r0, [sp, #14]
        3371ec:	e5cd0015 	strb	r0, [sp, #21]
        3371f0:	e1a00440 	mov	r0, r0, asr #8
        3371f4:	e5cd0014 	strb	r0, [sp, #20]
        3371f8:	e59d1008 	ldr	r1, [sp, #8]
        3371fc:	e1a01841 	mov	r1, r1, asr #16
        337200:	e59d0010 	ldr	r0, [sp, #16]
        337204:	e1510840 	cmp	r1, r0, asr #16
        337208:	da000003 	ble	33721c <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x1a4>
        33720c:	e59d000a 	ldr	r0, [sp, #10]
        337210:	e5cd0011 	strb	r0, [sp, #17]
        337214:	e1a00440 	mov	r0, r0, asr #8
        337218:	e5cd0010 	strb	r0, [sp, #16]
        33721c:	e59d0014 	ldr	r0, [sp, #20]
        337220:	e1a00840 	mov	r0, r0, asr #16
        337224:	e59d1010 	ldr	r1, [sp, #16]
        337228:	e1500841 	cmp	r0, r1, asr #16
        33722c:	caffffb8 	bgt	337114 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x9c>
        337230:	e59d0014 	ldr	r0, [sp, #20]
        337234:	e1b00840 	movs	r0, r0, asr #16
        337238:	4affffb5 	bmi	337114 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x9c>
        33723c:	e59d0010 	ldr	r0, [sp, #16]
        337240:	e1a00840 	mov	r0, r0, asr #16
        337244:	e3500077 	cmp	r0, #119	; 0x77
        337248:	caffffb1 	bgt	337114 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x9c>
        33724c:	e59d0014 	ldr	r0, [sp, #20]
        337250:	e1a00840 	mov	r0, r0, asr #16
        337254:	e3500000 	cmp	r0, #0	; 0x0
        337258:	da000004 	ble	337270 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x1f8>
        33725c:	e59d0016 	ldr	r0, [sp, #22]
        337260:	e2400001 	sub	r0, r0, #1	; 0x1
        337264:	e5cd0015 	strb	r0, [sp, #21]
        337268:	e1a00440 	mov	r0, r0, asr #8
        33726c:	e5cd0014 	strb	r0, [sp, #20]
        337270:	e59d1014 	ldr	r1, [sp, #20]
        337274:	e1a01841 	mov	r1, r1, asr #16
        337278:	e3a02000 	mov	r2, #0	; 0x0
        33727c:	e59d0010 	ldr	r0, [sp, #16]
        337280:	e1510840 	cmp	r1, r0, asr #16
        337284:	ca000022 	bgt	337314 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x29c>
        337288:	e5953004 	ldr	r3, [r5, #4]
        33728c:	e5d39000 	ldrb	r9, [r3]
        337290:	e3a00000 	mov	r0, #0	; 0x0
        337294:	e3390000 	teq	r9, #0	; 0x0
        337298:	0a000012 	beq	3372e8 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x270>
        33729c:	e081e081 	add	lr, r1, r1, lsl #1
        3372a0:	e7d7818e 	ldrb	r8, [r7, lr, lsl #3]
        3372a4:	e087e18e 	add	lr, r7, lr, lsl #3
        3372a8:	e7d3c000 	ldrb	ip, [r3, r0]
        3372ac:	e13c0008 	teq	ip, r8
        3372b0:	1a000006 	bne	3372d0 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x258>
        3372b4:	e5dec003 	ldrb	ip, [lr, #3]
        3372b8:	e5d5a00e 	ldrb	sl, [r5, #14]
        3372bc:	e15c000a 	cmp	ip, sl
        3372c0:	ba000002 	blt	3372d0 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x258>
        3372c4:	e5d5a00f 	ldrb	sl, [r5, #15]
        3372c8:	e15c000a 	cmp	ip, sl
        3372cc:	da00002e 	ble	33738c <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x314>
        3372d0:	e2800001 	add	r0, r0, #1	; 0x1
        3372d4:	e1a00800 	mov	r0, r0, lsl #16
        3372d8:	e1a00840 	mov	r0, r0, asr #16
        3372dc:	e7d3c000 	ldrb	ip, [r3, r0]
        3372e0:	e33c0000 	teq	ip, #0	; 0x0
        3372e4:	1affffef 	bne	3372a8 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x230>
        3372e8:	e3320000 	teq	r2, #0	; 0x0
        3372ec:	1a000006 	bne	33730c <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x294>
        3372f0:	e2810001 	add	r0, r1, #1	; 0x1
        3372f4:	e1a01800 	mov	r1, r0, lsl #16
        3372f8:	e1a01841 	mov	r1, r1, asr #16
        3372fc:	e59d0010 	ldr	r0, [sp, #16]
        337300:	e1510840 	cmp	r1, r0, asr #16
        337304:	daffffe1 	ble	337290 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x218>
        337308:	ea000001 	b	337314 <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x29c>
        33730c:	e3320000 	teq	r2, #0	; 0x0
        337310:	1a00001d 	bne	33738c <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x314>
        337314:	e594003c 	ldr	r0, [r4, #60]
        337318:	e3300000 	teq	r0, #0	; 0x0
        33731c:	1a000006 	bne	33733c <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x2c4>
        337320:	e28d3018 	add	r3, sp, #24	; 0x18
        337324:	e1a02005 	mov	r2, r5
        337328:	e1a00004 	mov	r0, r4
        33732c:	e59d1004 	ldr	r1, [sp, #4]
        337330:	eb5fe959 	bl	1b3189c <$SmthAboveOrBelowAtNeededHeight(_POST_PARAMS *, short, LETTERS_TO_XR *, short *)>
        337334:	e3300000 	teq	r0, #0	; 0x0
        337338:	1a000013 	bne	33738c <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x314>
        33733c:	e595100c 	ldr	r1, [r5, #12]
        337340:	e1a01821 	mov	r1, r1, lsr #16
        337344:	e59d001a 	ldr	r0, [sp, #26]
        337348:	e0400001 	sub	r0, r0, r1
        33734c:	e5cd0019 	strb	r0, [sp, #25]
        337350:	e1a00440 	mov	r0, r0, asr #8
        337354:	e5cd0018 	strb	r0, [sp, #24]
        337358:	e3560003 	cmp	r6, #3	; 0x3
        33735c:	da00000a 	ble	33738c <EvaluateLettersToXr(unsigned char, _POST_PARAMS *, LETTERS_TO_XR *)+0x314>
        337360:	e0860fa6 	add	r0, r6, r6, lsr #31
        337364:	e1a000c0 	mov	r0, r0, asr #1
        337368:	e59d1018 	ldr	r1, [sp, #24]
        33736c:	e1a01841 	mov	r1, r1, asr #16
        337370:	e0400101 	sub	r0, r0, r1, lsl #2
        337374:	e2601000 	rsb	r1, r0, #0	; 0x0
        337378:	e1a00006 	mov	r0, r6
        33737c:	eb61ed6f 	bl	1bb2940 <$__rt_sdiv>
        337380:	e5cd0019 	strb	r0, [sp, #25]
        337384:	e1a00440 	mov	r0, r0, asr #8
        337388:	e5cd0018 	strb	r0, [sp, #24]
        33738c:	e59d0018 	ldr	r0, [sp, #24]
        337390:	e1a00840 	mov	r0, r0, asr #16
        337394:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EvaluateMissingCross__FP12_POST_PARAMSiT2
 * Address: 003373c8
 */
void globals::EvaluateMissingCross() {
    /*
        3373c8:	e1a0c00d 	mov	ip, sp
        3373cc:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3373d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        3373d4:	e24ddffd 	sub	sp, sp, #1012	; 0x3f4
        3373d8:	e3a00000 	mov	r0, #0	; 0x0
        3373dc:	e3a08000 	mov	r8, #0	; 0x0
        3373e0:	e3a04000 	mov	r4, #0	; 0x0
        3373e4:	e3a05000 	mov	r5, #0	; 0x0
        3373e8:	e58d03ec 	str	r0, [sp, #1004]
        3373ec:	e51b0034 	ldr	r0, [fp, -#52]
        3373f0:	e590001c 	ldr	r0, [r0, #28]
        3373f4:	e58d03e4 	str	r0, [sp, #996]
        3373f8:	e51b0034 	ldr	r0, [fp, -#52]
        3373fc:	e5900020 	ldr	r0, [r0, #32]
        337400:	e58d03e0 	str	r0, [sp, #992]
        337404:	e51b0034 	ldr	r0, [fp, -#52]
        337408:	e5900008 	ldr	r0, [r0, #8]
        33740c:	e5900008 	ldr	r0, [r0, #8]
        337410:	e1a06001 	mov	r6, r1
        337414:	e58d0000 	str	r0, [sp]
        337418:	e0810002 	add	r0, r1, r2
        33741c:	e58d03f0 	str	r0, [sp, #1008]
        337420:	e1500001 	cmp	r0, r1
        337424:	da000069 	ble	3375d0 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x208>
        337428:	e59d03e4 	ldr	r0, [sp, #996]
        33742c:	e0800206 	add	r0, r0, r6, lsl #4
        337430:	e5d01002 	ldrb	r1, [r0, #2]
        337434:	e3310001 	teq	r1, #1	; 0x1
        337438:	1a000041 	bne	337544 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x17c>
        33743c:	e51b1034 	ldr	r1, [fp, -#52]
        337440:	e5911004 	ldr	r1, [r1, #4]
        337444:	e5b13030 	ldr	r3, [r1, #48]!
        337448:	e5d01003 	ldrb	r1, [r0, #3]
        33744c:	e5d00001 	ldrb	r0, [r0, #1]
        337450:	e28d2004 	add	r2, sp, #4	; 0x4
        337454:	ebf542c3 	bl	87f68 <GetVarOfChar__FUcT1P8xrp_typePv>
        337458:	e3a07000 	mov	r7, #0	; 0x0
        33745c:	e58d03e8 	str	r0, [sp, #1000]
        337460:	e3500000 	cmp	r0, #0	; 0x0
        337464:	da000036 	ble	337544 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x17c>
        337468:	e0860106 	add	r0, r6, r6, lsl #2
        33746c:	e0800186 	add	r0, r0, r6, lsl #3
        337470:	e59d13e0 	ldr	r1, [sp, #992]
        337474:	e081a100 	add	sl, r1, r0, lsl #2
        337478:	e0870087 	add	r0, r7, r7, lsl #1
        33747c:	e0800207 	add	r0, r0, r7, lsl #4
        337480:	e28d1004 	add	r1, sp, #4	; 0x4
        337484:	e7d11100 	ldrb	r1, [r1, r0, lsl #2]
        337488:	e3310036 	teq	r1, #54	; 0x36
        33748c:	1331003a 	teqne	r1, #58	; 0x3a
        337490:	1331003b 	teqne	r1, #59	; 0x3b
        337494:	1a000006 	bne	3374b4 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0xec>
        337498:	e2844001 	add	r4, r4, #1	; 0x1
        33749c:	e28d1004 	add	r1, sp, #4	; 0x4
        3374a0:	e0810100 	add	r0, r1, r0, lsl #2
        3374a4:	e5d00003 	ldrb	r0, [r0, #3]
        3374a8:	e3500002 	cmp	r0, #2	; 0x2
        3374ac:	c2888001 	addgt	r8, r8, #1	; 0x1
        3374b0:	ea00001f 	b	337534 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x16c>
        3374b4:	e28d1004 	add	r1, sp, #4	; 0x4
        3374b8:	e0810100 	add	r0, r1, r0, lsl #2
        3374bc:	e2800004 	add	r0, r0, #4	; 0x4
        3374c0:	e1a09000 	mov	r9, r0
        3374c4:	e3a01036 	mov	r1, #54	; 0x36
        3374c8:	eb5ff139 	bl	1b339b4 <$GetCorr(unsigned char *, int)>
        3374cc:	e3500004 	cmp	r0, #4	; 0x4
        3374d0:	aa000009 	bge	3374fc <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x134>
        3374d4:	e1a00009 	mov	r0, r9
        3374d8:	e3a0103a 	mov	r1, #58	; 0x3a
        3374dc:	eb5ff134 	bl	1b339b4 <$GetCorr(unsigned char *, int)>
        3374e0:	e3500004 	cmp	r0, #4	; 0x4
        3374e4:	aa000004 	bge	3374fc <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x134>
        3374e8:	e1a00009 	mov	r0, r9
        3374ec:	e3a0103b 	mov	r1, #59	; 0x3b
        3374f0:	eb5ff12f 	bl	1b339b4 <$GetCorr(unsigned char *, int)>
        3374f4:	e3500004 	cmp	r0, #4	; 0x4
        3374f8:	ba00000d 	blt	337534 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x16c>
        3374fc:	e08a0107 	add	r0, sl, r7, lsl #2
        337500:	e5d00001 	ldrb	r0, [r0, #1]
        337504:	e3300003 	teq	r0, #3	; 0x3
        337508:	1a000009 	bne	337534 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x16c>
        33750c:	e7da0107 	ldrb	r0, [sl, r7, lsl #2]
        337510:	e3500000 	cmp	r0, #0	; 0x0
        337514:	ba000006 	blt	337534 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x16c>
        337518:	e0800080 	add	r0, r0, r0, lsl #1
        33751c:	e59d1000 	ldr	r1, [sp]
        337520:	e7d10180 	ldrb	r0, [r1, r0, lsl #3]
        337524:	e3300036 	teq	r0, #54	; 0x36
        337528:	1330003a 	teqne	r0, #58	; 0x3a
        33752c:	1330003b 	teqne	r0, #59	; 0x3b
        337530:	02844001 	addeq	r4, r4, #1	; 0x1
        337534:	e2877001 	add	r7, r7, #1	; 0x1
        337538:	e59d03e8 	ldr	r0, [sp, #1000]
        33753c:	e1570000 	cmp	r7, r0
        337540:	baffffcc 	blt	337478 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0xb0>
        337544:	e2866001 	add	r6, r6, #1	; 0x1
        337548:	e59d03f0 	ldr	r0, [sp, #1008]
        33754c:	e1500006 	cmp	r0, r6
        337550:	caffffb4 	bgt	337428 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x60>
        337554:	e3340000 	teq	r4, #0	; 0x0
        337558:	0a00001c 	beq	3375d0 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x208>
        33755c:	e3a00000 	mov	r0, #0	; 0x0
        337560:	e51b1034 	ldr	r1, [fp, -#52]
        337564:	e5911008 	ldr	r1, [r1, #8]
        337568:	e5912000 	ldr	r2, [r1]
        33756c:	e3520000 	cmp	r2, #0	; 0x0
        337570:	da000009 	ble	33759c <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x1d4>
        337574:	e0801080 	add	r1, r0, r0, lsl #1
        337578:	e59d3000 	ldr	r3, [sp]
        33757c:	e7d31181 	ldrb	r1, [r3, r1, lsl #3]
        337580:	e3310036 	teq	r1, #54	; 0x36
        337584:	1331003a 	teqne	r1, #58	; 0x3a
        337588:	1331003b 	teqne	r1, #59	; 0x3b
        33758c:	02855001 	addeq	r5, r5, #1	; 0x1
        337590:	e2800001 	add	r0, r0, #1	; 0x1
        337594:	e1520000 	cmp	r2, r0
        337598:	cafffff5 	bgt	337574 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x1ac>
        33759c:	e1550008 	cmp	r5, r8
        3375a0:	b0480005 	sublt	r0, r8, r5
        3375a4:	ba000002 	blt	3375b4 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x1ec>
        3375a8:	e1550004 	cmp	r5, r4
        3375ac:	da000001 	ble	3375b8 <EvaluateMissingCross__FP12_POST_PARAMSiT2+0x1f0>
        3375b0:	e0450004 	sub	r0, r5, r4
        3375b4:	e58d03ec 	str	r0, [sp, #1004]
        3375b8:	e59d03ec 	ldr	r0, [sp, #1004]
        3375bc:	e1a00080 	mov	r0, r0, lsl #1
        3375c0:	e58d03ec 	str	r0, [sp, #1004]
        3375c4:	e3500006 	cmp	r0, #6	; 0x6
        3375c8:	c3a00006 	movgt	r0, #6	; 0x6
        3375cc:	c58d03ec 	strgt	r0, [sp, #1004]
        3375d0:	e59d03ec 	ldr	r0, [sp, #1004]
        3375d4:	e2600000 	rsb	r0, r0, #0	; 0x0
        3375d8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)
 * Address: 00337624
 */
EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *) {
    /*
        337624:	e1a0c00d 	mov	ip, sp
        337628:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        33762c:	e24cb004 	sub	fp, ip, #4	; 0x4
        337630:	e1a04000 	mov	r4, r0
        337634:	e1a05001 	mov	r5, r1
        337638:	e1a07003 	mov	r7, r3
        33763c:	e24dde39 	sub	sp, sp, #912	; 0x390
        337640:	e3a08000 	mov	r8, #0	; 0x0
        337644:	e3a00000 	mov	r0, #0	; 0x0
        337648:	e58d033c 	str	r0, [sp, #828]
        33764c:	e58d837c 	str	r8, [sp, #892]
        337650:	e58d0330 	str	r0, [sp, #816]
        337654:	e3a00001 	mov	r0, #1	; 0x1
        337658:	e3a0a000 	mov	sl, #0	; 0x0
        33765c:	e58d032c 	str	r0, [sp, #812]
        337660:	e5940004 	ldr	r0, [r4, #4]
        337664:	e5946018 	ldr	r6, [r4, #24]
        337668:	e58d0004 	str	r0, [sp, #4]
        33766c:	e5941008 	ldr	r1, [r4, #8]
        337670:	e58d1000 	str	r1, [sp]
        337674:	e28d0d0d 	add	r0, sp, #832	; 0x340
        337678:	e584002c 	str	r0, [r4, #44]
        33767c:	e3a0003c 	mov	r0, #60	; 0x3c
        337680:	e5c40045 	strb	r0, [r4, #69]
        337684:	e3a00000 	mov	r0, #0	; 0x0
        337688:	e5c40044 	strb	r0, [r4, #68]
        33768c:	e5840010 	str	r0, [r4, #16]
        337690:	e5870000 	str	r0, [r7]
        337694:	e5940000 	ldr	r0, [r4]
        337698:	e5900000 	ldr	r0, [r0]
        33769c:	e3300000 	teq	r0, #0	; 0x0
        3376a0:	0a0001fe 	beq	337ea0 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x87c>
        3376a4:	e59fc020 	ldr	ip, [pc, #20]	; 3376cc <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0xa8>
        3376a8:	e58dc38c 	str	ip, [sp, #908]
        3376ac:	e3350000 	teq	r5, #0	; 0x0
        3376b0:	0a000023 	beq	337744 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x120>
        3376b4:	e3a01000 	mov	r1, #0	; 0x0
        3376b8:	e5d60000 	ldrb	r0, [r6]
        3376bc:	e3300001 	teq	r0, #1	; 0x1
        3376c0:	03a00000 	moveq	r0, #0	; 0x0
        3376c4:	0a00000a 	beq	3376f4 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0xd0>
        3376c8:	ea00001d 	b	337744 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x120>
        3376cc:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        3376d0:	e59dc38c 	ldr	ip, [sp, #908]
        3376d4:	e7dc3003 	ldrb	r3, [ip, r3]
        3376d8:	e3130020 	tst	r3, #32	; 0x20
        3376dc:	02800001 	addeq	r0, r0, #1	; 0x1
        3376e0:	0a000001 	beq	3376ec <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0xc8>
        3376e4:	e3a01001 	mov	r1, #1	; 0x1
        3376e8:	ea000004 	b	337700 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0xdc>
        3376ec:	e3500018 	cmp	r0, #24	; 0x18
        3376f0:	aa000002 	bge	337700 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0xdc>
        3376f4:	e7d53000 	ldrb	r3, [r5, r0]
        3376f8:	e3330000 	teq	r3, #0	; 0x0
        3376fc:	1afffff3 	bne	3376d0 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0xac>
        337700:	e595004a 	ldr	r0, [r5, #74]
        337704:	e1b00840 	movs	r0, r0, asr #16
        337708:	4a00000d 	bmi	337744 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x120>
        33770c:	e3310000 	teq	r1, #0	; 0x0
        337710:	1a00000b 	bne	337744 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x120>
        337714:	e5950048 	ldr	r0, [r5, #72]
        337718:	e1a00840 	mov	r0, r0, asr #16
        33771c:	e5921000 	ldr	r1, [r2]
        337720:	e1500841 	cmp	r0, r1, asr #16
        337724:	ba000004 	blt	33773c <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x118>
        337728:	e5951098 	ldr	r1, [r5, #152]
        33772c:	e0400841 	sub	r0, r0, r1, asr #16
        337730:	e5921002 	ldr	r1, [r2, #2]
        337734:	e1500841 	cmp	r0, r1, asr #16
        337738:	da000001 	ble	337744 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x120>
        33773c:	e3a00000 	mov	r0, #0	; 0x0
        337740:	e58d032c 	str	r0, [sp, #812]
        337744:	e59d0004 	ldr	r0, [sp, #4]
        337748:	e5d000af 	ldrb	r0, [r0, #175]
        33774c:	e3300000 	teq	r0, #0	; 0x0
        337750:	058d032c 	streq	r0, [sp, #812]
        337754:	e5d60000 	ldrb	r0, [r6]
        337758:	e3300004 	teq	r0, #4	; 0x4
        33775c:	1a000003 	bne	337770 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x14c>
        337760:	e3a00001 	mov	r0, #1	; 0x1
        337764:	e5c60000 	strb	r0, [r6]
        337768:	e3a0000e 	mov	r0, #14	; 0xe
        33776c:	e5840070 	str	r0, [r4, #112]
        337770:	e5960008 	ldr	r0, [r6, #8]
        337774:	e3300000 	teq	r0, #0	; 0x0
        337778:	11a08000 	movne	r8, r0
        33777c:	e3380000 	teq	r8, #0	; 0x0
        337780:	0a0001c6 	beq	337ea0 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x87c>
        337784:	e584801c 	str	r8, [r4, #28]
        337788:	e596000c 	ldr	r0, [r6, #12]
        33778c:	e3300000 	teq	r0, #0	; 0x0
        337790:	158d037c 	strne	r0, [sp, #892]
        337794:	e59d037c 	ldr	r0, [sp, #892]
        337798:	e3300000 	teq	r0, #0	; 0x0
        33779c:	0a000109 	beq	337bc8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x5a4>
        3377a0:	e59d037c 	ldr	r0, [sp, #892]
        3377a4:	e5840020 	str	r0, [r4, #32]
        3377a8:	e5960004 	ldr	r0, [r6, #4]
        3377ac:	e3300000 	teq	r0, #0	; 0x0
        3377b0:	0a0001ba 	beq	337ea0 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x87c>
        3377b4:	e5d60000 	ldrb	r0, [r6]
        3377b8:	e3300001 	teq	r0, #1	; 0x1
        3377bc:	13350000 	teqne	r5, #0	; 0x0
        3377c0:	0a000004 	beq	3377d8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x1b4>
        3377c4:	e3a000f0 	mov	r0, #240	; 0xf0
        3377c8:	eb5cdffb 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        3377cc:	e58d0330 	str	r0, [sp, #816]
        3377d0:	e3300000 	teq	r0, #0	; 0x0
        3377d4:	0a0001b1 	beq	337ea0 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x87c>
        3377d8:	e59d032c 	ldr	r0, [sp, #812]
        3377dc:	e3300000 	teq	r0, #0	; 0x0
        3377e0:	0a0000f8 	beq	337bc8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x5a4>
        3377e4:	e5940042 	ldr	r0, [r4, #66]
        3377e8:	e1a00840 	mov	r0, r0, asr #16
        3377ec:	e1a00080 	mov	r0, r0, lsl #1
        3377f0:	e1a00080 	mov	r0, r0, lsl #1
        3377f4:	eb5cdff0 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        3377f8:	e5840010 	str	r0, [r4, #16]
        3377fc:	e3300000 	teq	r0, #0	; 0x0
        337800:	0a0000f0 	beq	337bc8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x5a4>
        337804:	e5942042 	ldr	r2, [r4, #66]
        337808:	e1a02842 	mov	r2, r2, asr #16
        33780c:	e0801082 	add	r1, r0, r2, lsl #1
        337810:	e5841014 	str	r1, [r4, #20]
        337814:	e594300c 	ldr	r3, [r4, #12]
        337818:	eb5fbace 	bl	1b26358 <$trace_to_xy__FPsT1iP13PS_point_type>
        33781c:	e5d60000 	ldrb	r0, [r6]
        337820:	e3300001 	teq	r0, #1	; 0x1
        337824:	0a000017 	beq	337888 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x264>
        337828:	e3a00001 	mov	r0, #1	; 0x1
        33782c:	e5870000 	str	r0, [r7]
        337830:	e5d60000 	ldrb	r0, [r6]
        337834:	e3300001 	teq	r0, #1	; 0x1
        337838:	0a000012 	beq	337888 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x264>
        33783c:	e3a00000 	mov	r0, #0	; 0x0
        337840:	e5961004 	ldr	r1, [r6, #4]
        337844:	e3510000 	cmp	r1, #0	; 0x0
        337848:	da00000e 	ble	337888 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x264>
        33784c:	e0882200 	add	r2, r8, r0, lsl #4
        337850:	e5d22002 	ldrb	r2, [r2, #2]
        337854:	e3320001 	teq	r2, #1	; 0x1
        337858:	0a000005 	beq	337874 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x250>
        33785c:	e3320002 	teq	r2, #2	; 0x2
        337860:	0a000002 	beq	337870 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x24c>
        337864:	e3320003 	teq	r2, #3	; 0x3
        337868:	03a0a000 	moveq	sl, #0	; 0x0
        33786c:	ea000000 	b	337874 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x250>
        337870:	e3a0a001 	mov	sl, #1	; 0x1
        337874:	e2800001 	add	r0, r0, #1	; 0x1
        337878:	e1a00800 	mov	r0, r0, lsl #16
        33787c:	e1a00840 	mov	r0, r0, asr #16
        337880:	e1510000 	cmp	r1, r0
        337884:	cafffff0 	bgt	33784c <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x228>
        337888:	e3a07000 	mov	r7, #0	; 0x0
        33788c:	e3a01000 	mov	r1, #0	; 0x0
        337890:	e58d1008 	str	r1, [sp, #8]
        337894:	e58d7338 	str	r7, [sp, #824]
        337898:	e5960004 	ldr	r0, [r6, #4]
        33789c:	e3500000 	cmp	r0, #0	; 0x0
        3378a0:	da0000c6 	ble	337bc0 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x59c>
        3378a4:	e5d60000 	ldrb	r0, [r6]
        3378a8:	e3300001 	teq	r0, #1	; 0x1
        3378ac:	1a000017 	bne	337910 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x2ec>
        3378b0:	e0881207 	add	r1, r8, r7, lsl #4
        3378b4:	e5d11002 	ldrb	r1, [r1, #2]
        3378b8:	e3310002 	teq	r1, #2	; 0x2
        3378bc:	13310004 	teqne	r1, #4	; 0x4
        3378c0:	02871001 	addeq	r1, r7, #1	; 0x1
        3378c4:	01a07801 	moveq	r7, r1, lsl #16
        3378c8:	01a07847 	moveq	r7, r7, asr #16
        3378cc:	e3a09000 	mov	r9, #0	; 0x0
        3378d0:	e5961004 	ldr	r1, [r6, #4]
        3378d4:	e1570001 	cmp	r7, r1
        3378d8:	aa0000b8 	bge	337bc0 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x59c>
        3378dc:	e0872009 	add	r2, r7, r9
        3378e0:	e0882202 	add	r2, r8, r2, lsl #4
        3378e4:	e5d22002 	ldrb	r2, [r2, #2]
        3378e8:	e3320001 	teq	r2, #1	; 0x1
        3378ec:	1a000005 	bne	337908 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x2e4>
        3378f0:	e2892001 	add	r2, r9, #1	; 0x1
        3378f4:	e1a09802 	mov	r9, r2, lsl #16
        3378f8:	e1a09849 	mov	r9, r9, asr #16
        3378fc:	e0872009 	add	r2, r7, r9
        337900:	e1520001 	cmp	r2, r1
        337904:	bafffff4 	blt	3378dc <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x2b8>
        337908:	e3390000 	teq	r9, #0	; 0x0
        33790c:	0a0000ab 	beq	337bc0 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x59c>
        337910:	e3300001 	teq	r0, #1	; 0x1
        337914:	e58d7384 	str	r7, [sp, #900]
        337918:	1a00006b 	bne	337acc <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x4a8>
        33791c:	e3a0a000 	mov	sl, #0	; 0x0
        337920:	e3590000 	cmp	r9, #0	; 0x0
        337924:	e58da334 	str	sl, [sp, #820]
        337928:	da000032 	ble	3379f8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x3d4>
        33792c:	e5c47041 	strb	r7, [r4, #65]
        337930:	e1a00447 	mov	r0, r7, asr #8
        337934:	e5c40040 	strb	r0, [r4, #64]
        337938:	e1a00004 	mov	r0, r4
        33793c:	eb5fd758 	bl	1b2d6a4 <$EvaluateCharQuality(_POST_PARAMS *)>
        337940:	e1a00800 	mov	r0, r0, lsl #16
        337944:	e1b00840 	movs	r0, r0, asr #16
        337948:	42800003 	addmi	r0, r0, #3	; 0x3
        33794c:	e1a00140 	mov	r0, r0, asr #2
        337950:	e1a01800 	mov	r1, r0, lsl #16
        337954:	e1a01841 	mov	r1, r1, asr #16
        337958:	e08a0001 	add	r0, sl, r1
        33795c:	e1a0a800 	mov	sl, r0, lsl #16
        337960:	e1a0a84a 	mov	sl, sl, asr #16
        337964:	e371007f 	cmn	r1, #127	; 0x7f
        337968:	ba000002 	blt	337978 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x354>
        33796c:	e2612000 	rsb	r2, r1, #0	; 0x0
        337970:	e3520020 	cmp	r2, #32	; 0x20
        337974:	da000000 	ble	33797c <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x358>
        337978:	e3a02020 	mov	r2, #32	; 0x20
        33797c:	e0880207 	add	r0, r8, r7, lsl #4
        337980:	e5d03005 	ldrb	r3, [r0, #5]
        337984:	e0030392 	mul	r3, r2, r3
        337988:	e0832103 	add	r2, r3, r3, lsl #2
        33798c:	e1b02082 	movs	r2, r2, lsl #1
        337990:	4282201f 	addmi	r2, r2, #31	; 0x1f
        337994:	e1b022c2 	movs	r2, r2, asr #5
        337998:	1a000003 	bne	3379ac <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x388>
        33799c:	e3510000 	cmp	r1, #0	; 0x0
        3379a0:	b3a02001 	movlt	r2, #1	; 0x1
        3379a4:	ba000000 	blt	3379ac <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x388>
        3379a8:	c3e02000 	mvngt	r2, #0	; 0x0
        3379ac:	e5d0100b 	ldrb	r1, [r0, #11]
        3379b0:	e1a01c01 	mov	r1, r1, lsl #24
        3379b4:	e0821c41 	add	r1, r2, r1, asr #24
        3379b8:	e351007f 	cmp	r1, #127	; 0x7f
        3379bc:	c3a0107f 	movgt	r1, #127	; 0x7f
        3379c0:	ca000001 	bgt	3379cc <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x3a8>
        3379c4:	e371007f 	cmn	r1, #127	; 0x7f
        3379c8:	b3e0107e 	mvnlt	r1, #126	; 0x7e
        3379cc:	e5c0100b 	strb	r1, [r0, #11]
        3379d0:	e2870001 	add	r0, r7, #1	; 0x1
        3379d4:	e1a07800 	mov	r7, r0, lsl #16
        3379d8:	e1a07847 	mov	r7, r7, asr #16
        3379dc:	e59d0334 	ldr	r0, [sp, #820]
        3379e0:	e2800001 	add	r0, r0, #1	; 0x1
        3379e4:	e1a00800 	mov	r0, r0, lsl #16
        3379e8:	e1a00840 	mov	r0, r0, asr #16
        3379ec:	e58d0334 	str	r0, [sp, #820]
        3379f0:	e1500009 	cmp	r0, r9
        3379f4:	baffffcc 	blt	33792c <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x308>
        3379f8:	e3350000 	teq	r5, #0	; 0x0
        3379fc:	0a00002c 	beq	337ab4 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x490>
        337a00:	e5940070 	ldr	r0, [r4, #112]
        337a04:	e3100008 	tst	r0, #8	; 0x8
        337a08:	0a00001b 	beq	337a7c <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x458>
        337a0c:	e59d0338 	ldr	r0, [sp, #824]
        337a10:	e0800100 	add	r0, r0, r0, lsl #2
        337a14:	e0850200 	add	r0, r5, r0, lsl #4
        337a18:	e59d1000 	ldr	r1, [sp]
        337a1c:	eb5fd723 	bl	1b2d6b0 <$EvaluateWordUsingSideReasoning(char *, xrdata_type *)>
        337a20:	e1a01800 	mov	r1, r0, lsl #16
        337a24:	e1a01841 	mov	r1, r1, asr #16
        337a28:	e1a02009 	mov	r2, r9
        337a2c:	e58d1388 	str	r1, [sp, #904]
        337a30:	e1a00004 	mov	r0, r4
        337a34:	e59d1384 	ldr	r1, [sp, #900]
        337a38:	eb5febcd 	bl	1b32974 <$EvaluateMissingCross__FP12_POST_PARAMSiT2>
        337a3c:	e59d1388 	ldr	r1, [sp, #904]
        337a40:	e0800001 	add	r0, r0, r1
        337a44:	e1a01800 	mov	r1, r0, lsl #16
        337a48:	e1a01841 	mov	r1, r1, asr #16
        337a4c:	e59d0384 	ldr	r0, [sp, #900]
        337a50:	e0802009 	add	r2, r0, r9
        337a54:	e1520000 	cmp	r2, r0
        337a58:	da000004 	ble	337a70 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x44c>
        337a5c:	e0883200 	add	r3, r8, r0, lsl #4
        337a60:	e5c31008 	strb	r1, [r3, #8]
        337a64:	e2800001 	add	r0, r0, #1	; 0x1
        337a68:	e1520000 	cmp	r2, r0
        337a6c:	cafffffa 	bgt	337a5c <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x438>
        337a70:	e08a0001 	add	r0, sl, r1
        337a74:	e1a0a800 	mov	sl, r0, lsl #16
        337a78:	e1a0a84a 	mov	sl, sl, asr #16
        337a7c:	e3350000 	teq	r5, #0	; 0x0
        337a80:	0a00000b 	beq	337ab4 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x490>
        337a84:	e59d0338 	ldr	r0, [sp, #824]
        337a88:	e0800100 	add	r0, r0, r0, lsl #2
        337a8c:	e0850200 	add	r0, r5, r0, lsl #4
        337a90:	e5901048 	ldr	r1, [r0, #72]
        337a94:	e08a1841 	add	r1, sl, r1, asr #16
        337a98:	e3510000 	cmp	r1, #0	; 0x0
        337a9c:	d3a01001 	movle	r1, #1	; 0x1
        337aa0:	d5c01049 	strleb	r1, [r0, #73]
        337aa4:	d3a01000 	movle	r1, #0	; 0x0
        337aa8:	c5c01049 	strgtb	r1, [r0, #73]
        337aac:	c1a01441 	movgt	r1, r1, asr #8
        337ab0:	e5c01048 	strb	r1, [r0, #72]
        337ab4:	e59d0338 	ldr	r0, [sp, #824]
        337ab8:	e2800001 	add	r0, r0, #1	; 0x1
        337abc:	e1a00800 	mov	r0, r0, lsl #16
        337ac0:	e1a00840 	mov	r0, r0, asr #16
        337ac4:	e58d0338 	str	r0, [sp, #824]
        337ac8:	ea000039 	b	337bb4 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x590>
        337acc:	e088a207 	add	sl, r8, r7, lsl #4
        337ad0:	e5da0002 	ldrb	r0, [sl, #2]
        337ad4:	e3300002 	teq	r0, #2	; 0x2
        337ad8:	03a01001 	moveq	r1, #1	; 0x1
        337adc:	0a000002 	beq	337aec <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x4c8>
        337ae0:	e3300003 	teq	r0, #3	; 0x3
        337ae4:	1a000002 	bne	337af4 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x4d0>
        337ae8:	e3a01000 	mov	r1, #0	; 0x0
        337aec:	e58d1008 	str	r1, [sp, #8]
        337af0:	ea00002c 	b	337ba8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x584>
        337af4:	e3300001 	teq	r0, #1	; 0x1
        337af8:	1a00002a 	bne	337ba8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x584>
        337afc:	e5c47041 	strb	r7, [r4, #65]
        337b00:	e1a00447 	mov	r0, r7, asr #8
        337b04:	e5c40040 	strb	r0, [r4, #64]
        337b08:	e1a00004 	mov	r0, r4
        337b0c:	eb5fd6e4 	bl	1b2d6a4 <$EvaluateCharQuality(_POST_PARAMS *)>
        337b10:	e1a00100 	mov	r0, r0, lsl #2
        337b14:	e1a00800 	mov	r0, r0, lsl #16
        337b18:	e1b00840 	movs	r0, r0, asr #16
        337b1c:	42800003 	addmi	r0, r0, #3	; 0x3
        337b20:	e1a00140 	mov	r0, r0, asr #2
        337b24:	e1a00800 	mov	r0, r0, lsl #16
        337b28:	e1a00840 	mov	r0, r0, asr #16
        337b2c:	e5da1006 	ldrb	r1, [sl, #6]
        337b30:	e1a02801 	mov	r2, r1, lsl #16
        337b34:	e0802842 	add	r2, r0, r2, asr #16
        337b38:	e3520000 	cmp	r2, #0	; 0x0
        337b3c:	d3a01001 	movle	r1, #1	; 0x1
        337b40:	c0811000 	addgt	r1, r1, r0
        337b44:	e5ca1006 	strb	r1, [sl, #6]
        337b48:	e59d1008 	ldr	r1, [sp, #8]
        337b4c:	e3310000 	teq	r1, #0	; 0x0
        337b50:	0a000014 	beq	337ba8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x584>
        337b54:	e3e01000 	mvn	r1, #0	; 0x0
        337b58:	e55a200e 	ldrb	r2, [sl, -#14]
        337b5c:	e3320001 	teq	r2, #1	; 0x1
        337b60:	02471001 	subeq	r1, r7, #1	; 0x1
        337b64:	01a01801 	moveq	r1, r1, lsl #16
        337b68:	01a01841 	moveq	r1, r1, asr #16
        337b6c:	e5da2012 	ldrb	r2, [sl, #18]
        337b70:	e3320001 	teq	r2, #1	; 0x1
        337b74:	02871001 	addeq	r1, r7, #1	; 0x1
        337b78:	01a01801 	moveq	r1, r1, lsl #16
        337b7c:	01a01841 	moveq	r1, r1, asr #16
        337b80:	e3710001 	cmn	r1, #1	; 0x1
        337b84:	0a000007 	beq	337ba8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x584>
        337b88:	e0881201 	add	r1, r8, r1, lsl #4
        337b8c:	e5d12006 	ldrb	r2, [r1, #6]
        337b90:	e1a03802 	mov	r3, r2, lsl #16
        337b94:	e0803843 	add	r3, r0, r3, asr #16
        337b98:	e3530000 	cmp	r3, #0	; 0x0
        337b9c:	d3a00001 	movle	r0, #1	; 0x1
        337ba0:	c0820000 	addgt	r0, r2, r0
        337ba4:	e5c10006 	strb	r0, [r1, #6]
        337ba8:	e2870001 	add	r0, r7, #1	; 0x1
        337bac:	e1a07800 	mov	r7, r0, lsl #16
        337bb0:	e1a07847 	mov	r7, r7, asr #16
        337bb4:	e5960004 	ldr	r0, [r6, #4]
        337bb8:	e1500007 	cmp	r0, r7
        337bbc:	caffff38 	bgt	3378a4 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x280>
        337bc0:	e3a00001 	mov	r0, #1	; 0x1
        337bc4:	e58d033c 	str	r0, [sp, #828]
        337bc8:	e5d60000 	ldrb	r0, [r6]
        337bcc:	e3300001 	teq	r0, #1	; 0x1
        337bd0:	0a000080 	beq	337dd8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x7b4>
        337bd4:	e3350000 	teq	r5, #0	; 0x0
        337bd8:	0a00007b 	beq	337dcc <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x7a8>
        337bdc:	e3a00000 	mov	r0, #0	; 0x0
        337be0:	e5cd000c 	strb	r0, [sp, #12]
        337be4:	e5960004 	ldr	r0, [r6, #4]
        337be8:	e2800001 	add	r0, r0, #1	; 0x1
        337bec:	e1a00200 	mov	r0, r0, lsl #4
        337bf0:	eb5cdef1 	bl	1a6f7bc <$HWRMemoryAlloc(unsigned long)>
        337bf4:	e58d0380 	str	r0, [sp, #896]
        337bf8:	e3300000 	teq	r0, #0	; 0x0
        337bfc:	0a000045 	beq	337d18 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x6f4>
        337c00:	e3a07000 	mov	r7, #0	; 0x0
        337c04:	e5960004 	ldr	r0, [r6, #4]
        337c08:	e3500000 	cmp	r0, #0	; 0x0
        337c0c:	ba000033 	blt	337ce0 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x6bc>
        337c10:	e59d0380 	ldr	r0, [sp, #896]
        337c14:	e0802207 	add	r2, r0, r7, lsl #4
        337c18:	e1a09002 	mov	r9, r2
        337c1c:	e0881207 	add	r1, r8, r7, lsl #4
        337c20:	e1a0a001 	mov	sl, r1
        337c24:	e1a00001 	mov	r0, r1
        337c28:	e8b11008 	ldmia	r1!, {r3, ip}
        337c2c:	e8a21008 	stmia	r2!, {r3, ip}
        337c30:	e8911008 	ldmia	r1, {r3, ip}
        337c34:	e8821008 	stmia	r2, {r3, ip}
        337c38:	e5d00002 	ldrb	r0, [r0, #2]
        337c3c:	e3300001 	teq	r0, #1	; 0x1
        337c40:	1a000011 	bne	337c8c <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x668>
        337c44:	e7d80207 	ldrb	r0, [r8, r7, lsl #4]
        337c48:	e59dc38c 	ldr	ip, [sp, #908]
        337c4c:	e7dc1000 	ldrb	r1, [ip, r0]
        337c50:	e3110020 	tst	r1, #32	; 0x20
        337c54:	1a000005 	bne	337c70 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x64c>
        337c58:	eb5fdee7 	bl	1b2f7fc <$OSToRec(int)>
        337c5c:	e20010ff 	and	r1, r0, #255	; 0xff
        337c60:	e28f0f45 	add	r0, pc, #276	; 0x114
        337c64:	eb5ce302 	bl	1a70874 <$HWRStrChr(char *, int)>
        337c68:	e3300000 	teq	r0, #0	; 0x0
        337c6c:	0a000006 	beq	337c8c <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x668>
        337c70:	e5da0006 	ldrb	r0, [sl, #6]
        337c74:	e2400064 	sub	r0, r0, #100	; 0x64
        337c78:	e1a00800 	mov	r0, r0, lsl #16
        337c7c:	e1a00840 	mov	r0, r0, asr #16
        337c80:	e3500000 	cmp	r0, #0	; 0x0
        337c84:	d3a00001 	movle	r0, #1	; 0x1
        337c88:	e5ca0006 	strb	r0, [sl, #6]
        337c8c:	e5d90002 	ldrb	r0, [r9, #2]
        337c90:	e3300001 	teq	r0, #1	; 0x1
        337c94:	1a00000b 	bne	337cc8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x6a4>
        337c98:	e59d0380 	ldr	r0, [sp, #896]
        337c9c:	e7d00207 	ldrb	r0, [r0, r7, lsl #4]
        337ca0:	eb5fdab1 	bl	1b2e76c <$IsAlpha>
        337ca4:	e3300000 	teq	r0, #0	; 0x0
        337ca8:	0a000006 	beq	337cc8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x6a4>
        337cac:	e5d90006 	ldrb	r0, [r9, #6]
        337cb0:	e2400064 	sub	r0, r0, #100	; 0x64
        337cb4:	e1a00800 	mov	r0, r0, lsl #16
        337cb8:	e1a00840 	mov	r0, r0, asr #16
        337cbc:	e3500000 	cmp	r0, #0	; 0x0
        337cc0:	d3a00001 	movle	r0, #1	; 0x1
        337cc4:	e5c90006 	strb	r0, [r9, #6]
        337cc8:	e2870001 	add	r0, r7, #1	; 0x1
        337ccc:	e1a07800 	mov	r7, r0, lsl #16
        337cd0:	e1a07847 	mov	r7, r7, asr #16
        337cd4:	e5960004 	ldr	r0, [r6, #4]
        337cd8:	e1500007 	cmp	r0, r7
        337cdc:	aaffffcb 	bge	337c10 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x5ec>
        337ce0:	e28d000c 	add	r0, sp, #12	; 0xc
        337ce4:	e3a02e32 	mov	r2, #800	; 0x320
        337ce8:	e3a01000 	mov	r1, #0	; 0x0
        337cec:	eb61f359 	bl	1bb4a58 <$memset>
        337cf0:	e59d337c 	ldr	r3, [sp, #892]
        337cf4:	e92d0008 	stmdb	sp!, {r3}
        337cf8:	e5961004 	ldr	r1, [r6, #4]
        337cfc:	e59d3334 	ldr	r3, [sp, #820]
        337d00:	e28d2010 	add	r2, sp, #16	; 0x10
        337d04:	e59d0384 	ldr	r0, [sp, #900]
        337d08:	eb5fdeaf 	bl	1b2f7cc <$MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type>
        337d0c:	e28dd004 	add	sp, sp, #4	; 0x4
        337d10:	e59d0380 	ldr	r0, [sp, #896]
        337d14:	eb5cdea9 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        337d18:	e1a00005 	mov	r0, r5
        337d1c:	e3a02e32 	mov	r2, #800	; 0x320
        337d20:	e3a01000 	mov	r1, #0	; 0x0
        337d24:	eb61f34b 	bl	1bb4a58 <$memset>
        337d28:	e59d337c 	ldr	r3, [sp, #892]
        337d2c:	e92d0008 	stmdb	sp!, {r3}
        337d30:	e5961004 	ldr	r1, [r6, #4]
        337d34:	e1a02005 	mov	r2, r5
        337d38:	e1a00008 	mov	r0, r8
        337d3c:	e59d3334 	ldr	r3, [sp, #820]
        337d40:	eb5fdea1 	bl	1b2f7cc <$MakeRecWordsFromGraph__FP8RWS_typeUsP10rec_w_typePUcPA13_15RWG_PPD_el_type>
        337d44:	e28dd004 	add	sp, sp, #4	; 0x4
        337d48:	e5dd000c 	ldrb	r0, [sp, #12]
        337d4c:	e3300000 	teq	r0, #0	; 0x0
        337d50:	128d100c 	addne	r1, sp, #12	; 0xc
        337d54:	11a00005 	movne	r0, r5
        337d58:	1b5fde9d 	blne	1b2f7d4 <$MergeTwoRecWordsSets__FP10rec_w_typeT1>
        337d5c:	e59d032c 	ldr	r0, [sp, #812]
        337d60:	e3300000 	teq	r0, #0	; 0x0
        337d64:	15940070 	ldrne	r0, [r4, #112]
        337d68:	12000008 	andne	r0, r0, #8	; 0x8
        337d6c:	13300000 	teqne	r0, #0	; 0x0
        337d70:	13a07000 	movne	r7, #0	; 0x0
        337d74:	1a000010 	bne	337dbc <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x798>
        337d78:	ea000013 	b	337dcc <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x7a8>
        337d7c:	2b3d2500 	blcs	1281184 <ROM$$Size+0xb61538>
        337d80:	e0850200 	add	r0, r5, r0, lsl #4
        337d84:	e1a08000 	mov	r8, r0
        337d88:	e59d1000 	ldr	r1, [sp]
        337d8c:	eb5fd647 	bl	1b2d6b0 <$EvaluateWordUsingSideReasoning(char *, xrdata_type *)>
        337d90:	e5981048 	ldr	r1, [r8, #72]
        337d94:	e1a01821 	mov	r1, r1, lsr #16
        337d98:	e0800001 	add	r0, r0, r1
        337d9c:	e5c80049 	strb	r0, [r8, #73]
        337da0:	e1a00440 	mov	r0, r0, asr #8
        337da4:	e5c80048 	strb	r0, [r8, #72]
        337da8:	e2870001 	add	r0, r7, #1	; 0x1
        337dac:	e1a07800 	mov	r7, r0, lsl #16
        337db0:	e1a07847 	mov	r7, r7, asr #16
        337db4:	e357000a 	cmp	r7, #10	; 0xa
        337db8:	aa000003 	bge	337dcc <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x7a8>
        337dbc:	e0870107 	add	r0, r7, r7, lsl #2
        337dc0:	e7d51200 	ldrb	r1, [r5, r0, lsl #4]
        337dc4:	e3310000 	teq	r1, #0	; 0x0
        337dc8:	1affffec 	bne	337d80 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x75c>
        337dcc:	e5d60000 	ldrb	r0, [r6]
        337dd0:	e3300001 	teq	r0, #1	; 0x1
        337dd4:	1a000003 	bne	337de8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x7c4>
        337dd8:	e3350000 	teq	r5, #0	; 0x0
        337ddc:	11a01006 	movne	r1, r6
        337de0:	11a00005 	movne	r0, r5
        337de4:	1b5fe6c3 	blne	1b318f8 <$fill_RW_aliases( (*)[1])(RWG_type *)>
        337de8:	e59d032c 	ldr	r0, [sp, #812]
        337dec:	e3300000 	teq	r0, #0	; 0x0
        337df0:	13350000 	teqne	r5, #0	; 0x0
        337df4:	0a00002b 	beq	337ea8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x884>
        337df8:	e59d0004 	ldr	r0, [sp, #4]
        337dfc:	e5900008 	ldr	r0, [r0, #8]
        337e00:	e1a00840 	mov	r0, r0, asr #16
        337e04:	e3100001 	tst	r0, #1	; 0x1
        337e08:	1a000006 	bne	337e28 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x804>
        337e0c:	e3100002 	tst	r0, #2	; 0x2
        337e10:	159d0004 	ldrne	r0, [sp, #4]
        337e14:	15900002 	ldrne	r0, [r0, #2]
        337e18:	11a00780 	movne	r0, r0, lsl #15
        337e1c:	11a00fa0 	movne	r0, r0, lsr #31
        337e20:	13300000 	teqne	r0, #0	; 0x0
        337e24:	0a00001f 	beq	337ea8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x884>
        337e28:	e24dd004 	sub	sp, sp, #4	; 0x4
        337e2c:	e3a07000 	mov	r7, #0	; 0x0
        337e30:	ea000014 	b	337e88 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x864>
        337e34:	e0850200 	add	r0, r5, r0, lsl #4
        337e38:	e1a08000 	mov	r8, r0
        337e3c:	e1a0200d 	mov	r2, sp
        337e40:	e59d1004 	ldr	r1, [sp, #4]
        337e44:	eb5fd1f0 	bl	1b2c60c <$CheckDigitsLine(rec_w_type *, xrdata_type *, short *)>
        337e48:	e3300001 	teq	r0, #1	; 0x1
        337e4c:	1a000008 	bne	337e74 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x850>
        337e50:	e5981048 	ldr	r1, [r8, #72]
        337e54:	e1a01821 	mov	r1, r1, lsr #16
        337e58:	e59d0002 	ldr	r0, [sp, #2]
        337e5c:	e0410000 	sub	r0, r1, r0
        337e60:	e5c80049 	strb	r0, [r8, #73]
        337e64:	e1a00440 	mov	r0, r0, asr #8
        337e68:	e5c80048 	strb	r0, [r8, #72]
        337e6c:	e3a00001 	mov	r0, #1	; 0x1
        337e70:	e58d0340 	str	r0, [sp, #832]
        337e74:	e2870001 	add	r0, r7, #1	; 0x1
        337e78:	e1a07800 	mov	r7, r0, lsl #16
        337e7c:	e1a07847 	mov	r7, r7, asr #16
        337e80:	e357000a 	cmp	r7, #10	; 0xa
        337e84:	aa000003 	bge	337e98 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x874>
        337e88:	e0870107 	add	r0, r7, r7, lsl #2
        337e8c:	e7d51200 	ldrb	r1, [r5, r0, lsl #4]
        337e90:	e3310000 	teq	r1, #0	; 0x0
        337e94:	1affffe6 	bne	337e34 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x810>
        337e98:	e28dd004 	add	sp, sp, #4	; 0x4
        337e9c:	ea000001 	b	337ea8 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x884>
        337ea0:	e3a00000 	mov	r0, #0	; 0x0
        337ea4:	e58d033c 	str	r0, [sp, #828]
        337ea8:	e5940010 	ldr	r0, [r4, #16]
        337eac:	e3300000 	teq	r0, #0	; 0x0
        337eb0:	0a000002 	beq	337ec0 <EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)+0x89c>
        337eb4:	eb5cde41 	bl	1a6f7c0 <$HWRMemoryFree(void *)>
        337eb8:	e3a00000 	mov	r0, #0	; 0x0
        337ebc:	e5a40010 	str	r0, [r4, #16]!
        337ec0:	e59d0330 	ldr	r0, [sp, #816]
        337ec4:	e3300000 	teq	r0, #0	; 0x0
        337ec8:	159d0330 	ldrne	r0, [sp, #816]
        337ecc:	1b5cde3b 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        337ed0:	e5d60000 	ldrb	r0, [r6]
        337ed4:	e3300001 	teq	r0, #1	; 0x1
        337ed8:	03a00004 	moveq	r0, #4	; 0x4
        337edc:	05c60000 	streqb	r0, [r6]
        337ee0:	e59d033c 	ldr	r0, [sp, #828]
        337ee4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EvaluateAndSortAnswers(rec_w_type *, rc_type *, xrdata_type *, RWG_type *)
 * Address: 00337ee8
 */
EvaluateAndSortAnswers(rec_w_type *, rc_type *, xrdata_type *, RWG_type *) {
    /*
        337ee8:	e1a0c00d 	mov	ip, sp
        337eec:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        337ef0:	e24cb004 	sub	fp, ip, #4	; 0x4
        337ef4:	e1a05000 	mov	r5, r0
        337ef8:	e1a04001 	mov	r4, r1
        337efc:	e1a07002 	mov	r7, r2
        337f00:	e1a06003 	mov	r6, r3
        337f04:	e24dd094 	sub	sp, sp, #148	; 0x94
        337f08:	e5910030 	ldr	r0, [r1, #48]
        337f0c:	e5b0a0b8 	ldr	sl, [r0, #184]!
        337f10:	e59190f8 	ldr	r9, [r1, #248]
        337f14:	e5918096 	ldr	r8, [r1, #150]
        337f18:	e1a08848 	mov	r8, r8, asr #16
        337f1c:	e1a0000d 	mov	r0, sp
        337f20:	e3a02090 	mov	r2, #144	; 0x90
        337f24:	e3a01000 	mov	r1, #0	; 0x0
        337f28:	eb61f2ca 	bl	1bb4a58 <$memset>
        337f2c:	e98d0290 	stmib	sp, {r4, r7, r9}
        337f30:	e58da000 	str	sl, [sp]
        337f34:	e5cd8043 	strb	r8, [sp, #67]
        337f38:	e1a00448 	mov	r0, r8, asr #8
        337f3c:	e5cd0042 	strb	r0, [sp, #66]
        337f40:	e3350000 	teq	r5, #0	; 0x0
        337f44:	e58d6018 	str	r6, [sp, #24]
        337f48:	13a0000f 	movne	r0, #15	; 0xf
        337f4c:	03a00003 	moveq	r0, #3	; 0x3
        337f50:	e58d0070 	str	r0, [sp, #112]
        337f54:	e3a00001 	mov	r0, #1	; 0x1
        337f58:	e58d0088 	str	r0, [sp, #136]
        337f5c:	e3a00000 	mov	r0, #0	; 0x0
        337f60:	e58d007c 	str	r0, [sp, #124]
        337f64:	e5d61000 	ldrb	r1, [r6]
        337f68:	e3310001 	teq	r1, #1	; 0x1
        337f6c:	13310004 	teqne	r1, #4	; 0x4
        337f70:	1a000004 	bne	337f88 <EvaluateAndSortAnswers(rec_w_type *, rc_type *, xrdata_type *, RWG_type *)+0xa0>
        337f74:	e1a01005 	mov	r1, r5
        337f78:	e1a00006 	mov	r0, r6
        337f7c:	e3a02000 	mov	r2, #0	; 0x0
        337f80:	eb5fde12 	bl	1b2f7d0 <$MakeRecWordsFromWordGraph(RWG_type *, rec_w_type *, int)>
        337f84:	ea000000 	b	337f8c <EvaluateAndSortAnswers(rec_w_type *, rc_type *, xrdata_type *, RWG_type *)+0xa4>
        337f88:	e5c50000 	strb	r0, [r5]
        337f8c:	e2842c01 	add	r2, r4, #256	; 0x100
        337f90:	e28d3090 	add	r3, sp, #144	; 0x90
        337f94:	e1a01005 	mov	r1, r5
        337f98:	e1a0000d 	mov	r0, sp
        337f9c:	eb5fd5bf 	bl	1b2d6a0 <$EvaluateAnswers(_POST_PARAMS *, rec_w_type *, POST_CONTROLS *, unsigned int *)>
        337fa0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: EraseRect(Rect *)
 * Address: 00340068
 */
EraseRect(Rect *) {
    /*
        340068:	e1a01000 	mov	r1, r0
        34006c:	e3a00002 	mov	r0, #2	; 0x2
        340070:	ea603583 	b	1b4d684 <$CallRect(unsigned char, Rect *)>
    */
}

/**
 * Symbol: EqualRect__FP4RectT1
 * Address: 00340f60
 */
void globals::EqualRect() {
    /*
        340f60:	e4903004 	ldr	r3, [r0], #4
        340f64:	e4912004 	ldr	r2, [r1], #4
        340f68:	e1330002 	teq	r3, r2
        340f6c:	05900000 	ldreq	r0, [r0]
        340f70:	05911000 	ldreq	r1, [r1]
        340f74:	01300001 	teqeq	r0, r1
        340f78:	13a00000 	movne	r0, #0	; 0x0
        340f7c:	03a00001 	moveq	r0, #1	; 0x1
        340f80:	e20000ff 	and	r0, r0, #255	; 0xff
        340f84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EmptyRect(Rect *)
 * Address: 00340f88
 */
EmptyRect(Rect *) {
    /*
        340f88:	e5901004 	ldr	r1, [r0, #4]
        340f8c:	e1a01841 	mov	r1, r1, asr #16
        340f90:	e5902000 	ldr	r2, [r0]
        340f94:	e1510842 	cmp	r1, r2, asr #16
        340f98:	da000004 	ble	340fb0 <EmptyRect(Rect *)+0x28>
        340f9c:	e5901002 	ldr	r1, [r0, #2]
        340fa0:	e1a01841 	mov	r1, r1, asr #16
        340fa4:	e5900006 	ldr	r0, [r0, #6]
        340fa8:	e1510840 	cmp	r1, r0, asr #16
        340fac:	ba000001 	blt	340fb8 <EmptyRect(Rect *)+0x30>
        340fb0:	e3a00001 	mov	r0, #1	; 0x1
        340fb4:	ea000000 	b	340fbc <EmptyRect(Rect *)+0x34>
        340fb8:	e3a00000 	mov	r0, #0	; 0x0
        340fbc:	e20000ff 	and	r0, r0, #255	; 0xff
        340fc0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EqualRgn__FPP6RegionT1
 * Address: 00341350
 */
void globals::EqualRgn() {
    /*
        341350:	e1a0c00d 	mov	ip, sp
        341354:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        341358:	e24cb004 	sub	fp, ip, #4	; 0x4
        34135c:	e1a05000 	mov	r5, r0
        341360:	e1a04001 	mov	r4, r1
        341364:	e3a07001 	mov	r7, #1	; 0x1
        341368:	e1300001 	teq	r0, r1
        34136c:	0a000023 	beq	341400 <EqualRgn__FPP6RegionT1+0xb0>
        341370:	e5952000 	ldr	r2, [r5]
        341374:	e5923000 	ldr	r3, [r2]
        341378:	e1a03843 	mov	r3, r3, asr #16
        34137c:	e5940000 	ldr	r0, [r4]
        341380:	e5901000 	ldr	r1, [r0]
        341384:	e3a06000 	mov	r6, #0	; 0x0
        341388:	e1330841 	teq	r3, r1, asr #16
        34138c:	1a000016 	bne	3413ec <EqualRgn__FPP6RegionT1+0x9c>
        341390:	e2801004 	add	r1, r0, #4	; 0x4
        341394:	e2820004 	add	r0, r2, #4	; 0x4
        341398:	eb6034e3 	bl	1b4e72c <$EqualRect__FP4RectT1>
        34139c:	e3300000 	teq	r0, #0	; 0x0
        3413a0:	0a000011 	beq	3413ec <EqualRgn__FPP6RegionT1+0x9c>
        3413a4:	e5951000 	ldr	r1, [r5]
        3413a8:	e5910000 	ldr	r0, [r1]
        3413ac:	e1a00840 	mov	r0, r0, asr #16
        3413b0:	e240000c 	sub	r0, r0, #12	; 0xc
        3413b4:	e1a000a0 	mov	r0, r0, lsr #1
        3413b8:	e281100c 	add	r1, r1, #12	; 0xc
        3413bc:	e5942000 	ldr	r2, [r4]
        3413c0:	e282300c 	add	r3, r2, #12	; 0xc
        3413c4:	e3a02000 	mov	r2, #0	; 0x0
        3413c8:	e3500000 	cmp	r0, #0	; 0x0
        3413cc:	da00000b 	ble	341400 <EqualRgn__FPP6RegionT1+0xb0>
        3413d0:	e591e000 	ldr	lr, [r1]
        3413d4:	e1a0e84e 	mov	lr, lr, asr #16
        3413d8:	e2811002 	add	r1, r1, #2	; 0x2
        3413dc:	e593c000 	ldr	ip, [r3]
        3413e0:	e2833002 	add	r3, r3, #2	; 0x2
        3413e4:	e13e084c 	teq	lr, ip, asr #16
        3413e8:	0a000001 	beq	3413f4 <EqualRgn__FPP6RegionT1+0xa4>
        3413ec:	e1a00006 	mov	r0, r6
        3413f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        3413f4:	e2822001 	add	r2, r2, #1	; 0x1
        3413f8:	e1520000 	cmp	r2, r0
        3413fc:	bafffff3 	blt	3413d0 <EqualRgn__FPP6RegionT1+0x80>
        341400:	e1a00007 	mov	r0, r7
        341404:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: EmptyRgn(Region **)
 * Address: 00341408
 */
EmptyRgn(Region **) {
    /*
        341408:	e5900000 	ldr	r0, [r0]
        34140c:	e2800004 	add	r0, r0, #4	; 0x4
        341410:	ea6034c0 	b	1b4e718 <$EmptyRect(Rect *)>
    */
}

/**
 * Symbol: EraseRgn(Region **)
 * Address: 003414b4
 */
EraseRgn(Region **) {
    /*
        3414b4:	e1a01000 	mov	r1, r0
        3414b8:	e3a00002 	mov	r0, #2	; 0x2
        3414bc:	ea603071 	b	1b4d688 <$CallRgn(unsigned char, Region **)>
    */
}

/**
 * Symbol: Expand(TrueRegion ***, TrueRegion **, TrueRegion *)
 * Address: 00341ab0
 */
Expand(TrueRegion ***, TrueRegion **, TrueRegion *) {
    /*
        341ab0:	e5903000 	ldr	r3, [r0]
        341ab4:	e5933000 	ldr	r3, [r3]
        341ab8:	e593c000 	ldr	ip, [r3]
        341abc:	e1a0c84c 	mov	ip, ip, asr #16
        341ac0:	e33c000c 	teq	ip, #12	; 0xc
        341ac4:	11a0f00e 	movne	pc, lr
        341ac8:	e5801000 	str	r1, [r0]
        341acc:	e3a0000c 	mov	r0, #12	; 0xc
        341ad0:	e5812000 	str	r2, [r1]
        341ad4:	e5c20001 	strb	r0, [r2, #1]
        341ad8:	e3a00000 	mov	r0, #0	; 0x0
        341adc:	e5c20000 	strb	r0, [r2]
        341ae0:	e282000c 	add	r0, r2, #12	; 0xc
        341ae4:	e5931004 	ldr	r1, [r3, #4]
        341ae8:	e1a01821 	mov	r1, r1, lsr #16
        341aec:	e5c01001 	strb	r1, [r0, #1]
        341af0:	e1a01441 	mov	r1, r1, asr #8
        341af4:	e4c01002 	strb	r1, [r0], #2
        341af8:	e5931006 	ldr	r1, [r3, #6]
        341afc:	e1a01821 	mov	r1, r1, lsr #16
        341b00:	e5c01001 	strb	r1, [r0, #1]
        341b04:	e1a01441 	mov	r1, r1, asr #8
        341b08:	e4c01002 	strb	r1, [r0], #2
        341b0c:	e593100a 	ldr	r1, [r3, #10]
        341b10:	e1a01821 	mov	r1, r1, lsr #16
        341b14:	e1a02000 	mov	r2, r0
        341b18:	e5c01001 	strb	r1, [r0, #1]
        341b1c:	e1a00441 	mov	r0, r1, asr #8
        341b20:	e4c20002 	strb	r0, [r2], #2
        341b24:	e3a01902 	mov	r1, #32768	; 0x8000
        341b28:	e2411001 	sub	r1, r1, #1	; 0x1
        341b2c:	e5c21001 	strb	r1, [r2, #1]
        341b30:	e3a0007f 	mov	r0, #127	; 0x7f
        341b34:	e4c20002 	strb	r0, [r2], #2
        341b38:	e593c008 	ldr	ip, [r3, #8]
        341b3c:	e1a0c82c 	mov	ip, ip, lsr #16
        341b40:	e5c2c001 	strb	ip, [r2, #1]
        341b44:	e1a0c44c 	mov	ip, ip, asr #8
        341b48:	e4c2c002 	strb	ip, [r2], #2
        341b4c:	e593c006 	ldr	ip, [r3, #6]
        341b50:	e1a0c82c 	mov	ip, ip, lsr #16
        341b54:	e5c2c001 	strb	ip, [r2, #1]
        341b58:	e1a0c44c 	mov	ip, ip, asr #8
        341b5c:	e4c2c002 	strb	ip, [r2], #2
        341b60:	e593300a 	ldr	r3, [r3, #10]
        341b64:	e1a03823 	mov	r3, r3, lsr #16
        341b68:	e5c23001 	strb	r3, [r2, #1]
        341b6c:	e1a03443 	mov	r3, r3, asr #8
        341b70:	e4c23002 	strb	r3, [r2], #2
        341b74:	e5c21001 	strb	r1, [r2, #1]
        341b78:	e4c20002 	strb	r0, [r2], #2
        341b7c:	e5c21001 	strb	r1, [r2, #1]
        341b80:	e5c20000 	strb	r0, [r2]
        341b84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EraseRoundRect__FP4RectlT2
 * Address: 00344d84
 */
void globals::EraseRoundRect() {
    /*
        344d84:	e1a03002 	mov	r3, r2
        344d88:	e1a02001 	mov	r2, r1
        344d8c:	e1a01000 	mov	r1, r0
        344d90:	e3a00002 	mov	r0, #2	; 0x2
        344d94:	ea602239 	b	1b4d680 <$CallRRect__FUcP4RectlT3>
    */
}

/**
 * Symbol: EnlargeSymbolTable(void)
 * Address: 00358718
 */
EnlargeSymbolTable(void) {
    /*
        358718:	e59f0010 	ldr	r0, [pc, #10]	; 358730 <EnlargeSymbolTable(void)+0x18>
        35871c:	e5901008 	ldr	r1, [r0, #8]
        358720:	e2411001 	sub	r1, r1, #1	; 0x1
        358724:	e5900004 	ldr	r0, [r0, #4]
        358728:	e1a00080 	mov	r0, r0, lsl #1
        35872c:	ea5bfd14 	b	1a57b84 <$ResizeSymbolTable__FlT1>
        358730:	0c10599c 	ldceq	9, cr5, [r0], -#624
    */
}

/**
 * Symbol: exp
 * Address: 00358ef0
 */
void globals::exp() {
    /*
        358ef0:	e1a0c00d 	mov	ip, sp
        358ef4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        358ef8:	e24cb004 	sub	fp, ip, #4	; 0x4
        358efc:	ed6dc209 	sfm	f4, 3, [sp, -#36]!
        358f00:	e92d0003 	stmdb	sp!, {r0, r1}
        358f04:	ecbdc102 	ldfd	f4, [sp], #8
        358f08:	e24dd004 	sub	sp, sp, #4	; 0x4
        358f0c:	e1a0000d 	mov	r0, sp
        358f10:	eb616ab7 	bl	1bb39f4 <$feholdexcept>
        358f14:	ed2dc102 	stfd	f4, [sp, -#8]!
        358f18:	e8bd0003 	ldmia	sp!, {r0, r1}
        358f1c:	eb62a8af 	bl	1c031e0 <$__fpclassifyd>
        358f20:	e3300000 	teq	r0, #0	; 0x0
        358f24:	0a000008 	beq	358f4c <exp+0x5c>
        358f28:	ee00e188 	mvfd	f6, #0.0
        358f2c:	e3300001 	teq	r0, #1	; 0x1
        358f30:	0a000007 	beq	358f54 <exp+0x64>
        358f34:	ee00d189 	mvfd	f5, #1.0
        358f38:	e3300002 	teq	r0, #2	; 0x2
        358f3c:	0e00c185 	mvfeqd	f4, f5
        358f40:	0a000063 	beq	3590d4 <exp+0x1e4>
        358f44:	e3300063 	teq	r0, #99	; 0x63
        358f48:	1a000004 	bne	358f60 <exp+0x70>
        358f4c:	ee14418a 	mufd	f4, f4, #2.0
        358f50:	ea00005f 	b	3590d4 <exp+0x1e4>
        358f54:	eed4f118 	cmfe	f4, #0.0
        358f58:	de00c186 	mvfled	f4, f6
        358f5c:	ea00005c 	b	3590d4 <exp+0x1e4>
        358f60:	e59f0020 	ldr	r0, [pc, #20]	; 358f88 <exp+0x98>
        358f64:	ed908100 	ldfd	f0, [r0]
        358f68:	eed4f110 	cmfe	f4, f0
        358f6c:	da000006 	ble	358f8c <exp+0x9c>
        358f70:	e3a00004 	mov	r0, #4	; 0x4
        358f74:	eb616a9f 	bl	1bb39f8 <$feraiseexcept>
        358f78:	e1a0000d 	mov	r0, sp
        358f7c:	eb616ea2 	bl	1bb4a0c <$feupdateenv>
        358f80:	eb62a897 	bl	1c031e4 <$__inf>
        358f84:	ea000055 	b	3590e0 <exp+0x1f0>
        358f88:	00381744 	eoreqs	r1, r8, r4, asr #14
        358f8c:	e59f0040 	ldr	r0, [pc, #40]	; 358fd4 <exp+0xe4>
        358f90:	ed908100 	ldfd	f0, [r0]
        358f94:	eed4f110 	cmfe	f4, f0
        358f98:	aa000003 	bge	358fac <exp+0xbc>
        358f9c:	ee108180 	mnfd	f0, f0
        358fa0:	eed4f110 	cmfe	f4, f0
        358fa4:	ce008185 	mvfgtd	f0, f5
        358fa8:	ca00004c 	bgt	3590e0 <exp+0x1f0>
        358fac:	e59f0024 	ldr	r0, [pc, #24]	; 358fd8 <exp+0xe8>
        358fb0:	ed908100 	ldfd	f0, [r0]
        358fb4:	eed4f110 	cmfe	f4, f0
        358fb8:	aa000007 	bge	358fdc <exp+0xec>
        358fbc:	e3a00008 	mov	r0, #8	; 0x8
        358fc0:	eb616a8c 	bl	1bb39f8 <$feraiseexcept>
        358fc4:	e1a0000d 	mov	r0, sp
        358fc8:	eb616e8f 	bl	1bb4a0c <$feupdateenv>
        358fcc:	ee008186 	mvfd	f0, f6
        358fd0:	ea000042 	b	3590e0 <exp+0x1f0>
        358fd4:	0038174c 	eoreqs	r1, r8, ip, asr #14
        358fd8:	00381754 	eoreqs	r1, r8, r4, asr r7
        358fdc:	e59f0104 	ldr	r0, [pc, #104]	; 3590e8 <exp+0x1f8>
        358fe0:	ed908100 	ldfd	f0, [r0]
        358fe4:	ee140180 	mufd	f0, f4, f0
        358fe8:	ed2d8102 	stfd	f0, [sp, -#8]!
        358fec:	e8bd0003 	ldmia	sp!, {r0, r1}
        358ff0:	eb616ea1 	bl	1bb4a7c <$rint>
        358ff4:	ee104170 	fixz	r4, f0
        358ff8:	ee064190 	fltd	f6, r4
        358ffc:	e28f2f3a 	add	r2, pc, #232	; 0xe8
        359000:	ed2de102 	stfd	f6, [sp, -#8]!
        359004:	e8bd0003 	ldmia	sp!, {r0, r1}
        359008:	e892000c 	ldmia	r2, {r2, r3}
        35900c:	eb616e82 	bl	1bb4a1c <$fmod>
        359010:	ee100170 	fixz	r0, f0
        359014:	e3500000 	cmp	r0, #0	; 0x0
        359018:	b2800020 	addlt	r0, r0, #32	; 0x20
        35901c:	e0542000 	subs	r2, r4, r0
        359020:	4282201f 	addmi	r2, r2, #31	; 0x1f
        359024:	e1a022c2 	mov	r2, r2, asr #5
        359028:	e59f10c4 	ldr	r1, [pc, #c4]	; 3590f4 <exp+0x204>
        35902c:	ed918100 	ldfd	f0, [r1]
        359030:	ee160180 	mufd	f0, f6, f0
        359034:	ee240180 	sufd	f0, f4, f0
        359038:	e59f10b8 	ldr	r1, [pc, #b8]	; 3590f8 <exp+0x208>
        35903c:	ed919100 	ldfd	f1, [r1]
        359040:	ee161181 	mufd	f1, f6, f1
        359044:	ee10a181 	mnfd	f2, f1
        359048:	ee001182 	adfd	f1, f0, f2
        35904c:	e59f10a8 	ldr	r1, [pc, #a8]	; 3590fc <exp+0x20c>
        359050:	ed91c106 	ldfd	f4, [r1, #24]
        359054:	ed91b108 	ldfd	f3, [r1, #32]
        359058:	ee133181 	mufd	f3, f3, f1
        35905c:	ee043183 	adfd	f3, f4, f3
        359060:	ee134181 	mufd	f4, f3, f1
        359064:	ed91b104 	ldfd	f3, [r1, #16]
        359068:	ee043183 	adfd	f3, f4, f3
        35906c:	ee133181 	mufd	f3, f3, f1
        359070:	ed91c102 	ldfd	f4, [r1, #8]
        359074:	ee033184 	adfd	f3, f3, f4
        359078:	ee133181 	mufd	f3, f3, f1
        35907c:	ed91c100 	ldfd	f4, [r1]
        359080:	ee033184 	adfd	f3, f3, f4
        359084:	ee111181 	mufd	f1, f1, f1
        359088:	ee131181 	mufd	f1, f3, f1
        35908c:	ee021181 	adfd	f1, f2, f1
        359090:	ee014180 	adfd	f4, f1, f0
        359094:	e59f1064 	ldr	r1, [pc, #64]	; 359100 <exp+0x210>
        359098:	e0814180 	add	r4, r1, r0, lsl #3
        35909c:	ed949100 	ldfd	f1, [r4]
        3590a0:	e59f105c 	ldr	r1, [pc, #5c]	; 359104 <exp+0x214>
        3590a4:	e0815180 	add	r5, r1, r0, lsl #3
        3590a8:	ed958100 	ldfd	f0, [r5]
        3590ac:	ee016180 	adfd	f6, f1, f0
        3590b0:	ed2dd102 	stfd	f5, [sp, -#8]!
        3590b4:	e8bd0003 	ldmia	sp!, {r0, r1}
        3590b8:	eb617272 	bl	1bb5a88 <$scalb>
        3590bc:	ed959100 	ldfd	f1, [r5]
        3590c0:	ee162184 	mufd	f2, f6, f4
        3590c4:	ee012182 	adfd	f2, f1, f2
        3590c8:	ed949100 	ldfd	f1, [r4]
        3590cc:	ee021181 	adfd	f1, f2, f1
        3590d0:	ee104181 	mufd	f4, f0, f1
        3590d4:	e1a0000d 	mov	r0, sp
        3590d8:	eb616e4b 	bl	1bb4a0c <$feupdateenv>
        3590dc:	ee008184 	mvfd	f0, f4
        3590e0:	ed5bc20e 	lfm	f4, 3, [fp, -#56]
        3590e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        3590e8:	0038175c 	eoreqs	r1, r8, ip, asr r7
        3590ec:	40400000 	submi	r0, r0, r0
        3590f0:	00000000 	andeq	r0, r0, r0
        3590f4:	00381764 	eoreqs	r1, r8, r4, ror #14
        3590f8:	0038176c 	eoreqs	r1, r8, ip, ror #14
        3590fc:	00381774 	eoreqs	r1, r8, r4, ror r7
        359100:	0038179c 	mlaeqs	r8, ip, r7, r1
        359104:	0038189c 	mlaeqs	r8, ip, r8, r1
    */
}

/**
 * Symbol: expm1
 * Address: 00359108
 */
void globals::expm1() {
    /*
        359108:	e1a0c00d 	mov	ip, sp
        35910c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        359110:	e24cb004 	sub	fp, ip, #4	; 0x4
        359114:	ed2d420c 	sfm	f4, 4, [sp, -#48]!
        359118:	e92d0003 	stmdb	sp!, {r0, r1}
        35911c:	ecbdc102 	ldfd	f4, [sp], #8
        359120:	e24dd004 	sub	sp, sp, #4	; 0x4
        359124:	e1a0000d 	mov	r0, sp
        359128:	eb616a31 	bl	1bb39f4 <$feholdexcept>
        35912c:	ed2dc102 	stfd	f4, [sp, -#8]!
        359130:	e8bd0003 	ldmia	sp!, {r0, r1}
        359134:	eb62a829 	bl	1c031e0 <$__fpclassifyd>
        359138:	e3300000 	teq	r0, #0	; 0x0
        35913c:	0a000005 	beq	359158 <expm1+0x50>
        359140:	e3300001 	teq	r0, #1	; 0x1
        359144:	0a000008 	beq	35916c <expm1+0x64>
        359148:	e3300002 	teq	r0, #2	; 0x2
        35914c:	0a000002 	beq	35915c <expm1+0x54>
        359150:	e3300063 	teq	r0, #99	; 0x63
        359154:	1a000008 	bne	35917c <expm1+0x74>
        359158:	ee14418a 	mufd	f4, f4, #2.0
        35915c:	e1a0000d 	mov	r0, sp
        359160:	eb616e29 	bl	1bb4a0c <$feupdateenv>
        359164:	ee008184 	mvfd	f0, f4
        359168:	ea0000d1 	b	3594b4 <expm1+0x3ac>
        35916c:	eed4f118 	cmfe	f4, #0.0
        359170:	cafffff9 	bgt	35915c <expm1+0x54>
        359174:	ee10c189 	mnfd	f4, #1.0
        359178:	eafffff7 	b	35915c <expm1+0x54>
        35917c:	e59f003c 	ldr	r0, [pc, #3c]	; 3591c0 <expm1+0xb8>
        359180:	ed908100 	ldfd	f0, [r0]
        359184:	ee109180 	mnfd	f1, f0
        359188:	e59f4034 	ldr	r4, [pc, #34]	; 3591c4 <expm1+0xbc>
        35918c:	eed1f114 	cmfe	f1, f4
        359190:	bed4f110 	cmfelt	f4, f0
        359194:	aa00000c 	bge	3591cc <expm1+0xc4>
        359198:	ed2dc102 	stfd	f4, [sp, -#8]!
        35919c:	e8bd0003 	ldmia	sp!, {r0, r1}
        3591a0:	eb616a0d 	bl	1bb39dc <$fabs>
        3591a4:	e59f001c 	ldr	r0, [pc, #1c]	; 3591c8 <expm1+0xc0>
        3591a8:	ed909100 	ldfd	f1, [r0]
        3591ac:	ee111184 	mufd	f1, f1, f4
        3591b0:	ee001181 	adfd	f1, f0, f1
        3591b4:	ed948100 	ldfd	f0, [r4]
        3591b8:	ee114180 	mufd	f4, f1, f0
        3591bc:	eaffffe6 	b	35915c <expm1+0x54>
        3591c0:	0038199c 	mlaeqs	r8, ip, r9, r1
        3591c4:	003819cc 	eoreqs	r1, r8, ip, asr #19
        3591c8:	003819c4 	eoreqs	r1, r8, r4, asr #19
        3591cc:	e59f00a8 	ldr	r0, [pc, #a8]	; 35927c <expm1+0x174>
        3591d0:	ed908100 	ldfd	f0, [r0]
        3591d4:	eed0f114 	cmfe	f0, f4
        3591d8:	b59f00a0 	ldrlt	r0, [pc, #a0]	; 359280 <expm1+0x178>
        3591dc:	bd908100 	ldfltd	f0, [r0]
        3591e0:	bed4f110 	cmfelt	f4, f0
        3591e4:	aa000028 	bge	35928c <expm1+0x184>
        3591e8:	ee008104 	mvfs	f0, f4
        3591ec:	ee245180 	sufd	f5, f4, f0
        3591f0:	ee101180 	mufd	f1, f0, f0
        3591f4:	ee11218e 	mufd	f2, f1, #0.5
        3591f8:	ee041180 	adfd	f1, f4, f0
        3591fc:	ee111185 	mufd	f1, f1, f5
        359200:	ee11318e 	mufd	f3, f1, #0.5
        359204:	e59f1078 	ldr	r1, [pc, #78]	; 359284 <expm1+0x17c>
        359208:	ed91e10e 	ldfd	f6, [r1, #56]
        35920c:	ed919110 	ldfd	f1, [r1, #64]
        359210:	ee111184 	mufd	f1, f1, f4
        359214:	ee061181 	adfd	f1, f6, f1
        359218:	e3a00000 	mov	r0, #0	; 0x0
        35921c:	e3a02006 	mov	r2, #6	; 0x6
        359220:	e0423000 	sub	r3, r2, r0
        359224:	e0813183 	add	r3, r1, r3, lsl #3
        359228:	ed93e100 	ldfd	f6, [r3]
        35922c:	ee141181 	mufd	f1, f4, f1
        359230:	ee061181 	adfd	f1, f6, f1
        359234:	e2800001 	add	r0, r0, #1	; 0x1
        359238:	e3500007 	cmp	r0, #7	; 0x7
        35923c:	bafffff7 	blt	359220 <expm1+0x118>
        359240:	ee141181 	mufd	f1, f4, f1
        359244:	ee111184 	mufd	f1, f1, f4
        359248:	ee111184 	mufd	f1, f1, f4
        35924c:	e59f0034 	ldr	r0, [pc, #34]	; 359288 <expm1+0x180>
        359250:	ed90e100 	ldfd	f6, [r0]
        359254:	eed2f116 	cmfe	f2, f6
        359258:	be010183 	adfltd	f0, f1, f3
        35925c:	be000182 	adfltd	f0, f0, f2
        359260:	be004184 	adfltd	f4, f0, f4
        359264:	baffffbc 	blt	35915c <expm1+0x54>
        359268:	ee000182 	adfd	f0, f0, f2
        35926c:	ee052183 	adfd	f2, f5, f3
        359270:	ee021181 	adfd	f1, f2, f1
        359274:	ee004181 	adfd	f4, f0, f1
        359278:	eaffffb7 	b	35915c <expm1+0x54>
        35927c:	003819b4 	ldreqh	r1, [r8], -r4
        359280:	003819bc 	ldreqh	r1, [r8], -ip
        359284:	003819dc 	ldreqsb	r1, [r8], -ip
        359288:	003819d4 	ldreqsb	r1, [r8], -r4
        35928c:	e59f0138 	ldr	r0, [pc, #138]	; 3593cc <expm1+0x2c4>
        359290:	ed908100 	ldfd	f0, [r0]
        359294:	eed0f114 	cmfe	f0, f4
        359298:	d59f0130 	ldrle	r0, [pc, #130]	; 3593d0 <expm1+0x2c8>
        35929c:	dd908100 	ldfled	f0, [r0]
        3592a0:	ded4f110 	cmfele	f4, f0
        3592a4:	ca000074 	bgt	35947c <expm1+0x374>
        3592a8:	e59f0124 	ldr	r0, [pc, #124]	; 3593d4 <expm1+0x2cc>
        3592ac:	ed908100 	ldfd	f0, [r0]
        3592b0:	ee140180 	mufd	f0, f4, f0
        3592b4:	ed2d8102 	stfd	f0, [sp, -#8]!
        3592b8:	e8bd0003 	ldmia	sp!, {r0, r1}
        3592bc:	eb616dee 	bl	1bb4a7c <$rint>
        3592c0:	ee104170 	fixz	r4, f0
        3592c4:	ee054190 	fltd	f5, r4
        3592c8:	e28f2f42 	add	r2, pc, #264	; 0x108
        3592cc:	ed2dd102 	stfd	f5, [sp, -#8]!
        3592d0:	e8bd0003 	ldmia	sp!, {r0, r1}
        3592d4:	e892000c 	ldmia	r2, {r2, r3}
        3592d8:	eb616dcf 	bl	1bb4a1c <$fmod>
        3592dc:	ee100170 	fixz	r0, f0
        3592e0:	e3500000 	cmp	r0, #0	; 0x0
        3592e4:	b2800020 	addlt	r0, r0, #32	; 0x20
        3592e8:	e0544000 	subs	r4, r4, r0
        3592ec:	4284401f 	addmi	r4, r4, #31	; 0x1f
        3592f0:	e1a042c4 	mov	r4, r4, asr #5
        3592f4:	e59f10e4 	ldr	r1, [pc, #e4]	; 3593e0 <expm1+0x2d8>
        3592f8:	ed918100 	ldfd	f0, [r1]
        3592fc:	ee150180 	mufd	f0, f5, f0
        359300:	ee240180 	sufd	f0, f4, f0
        359304:	e59f10d8 	ldr	r1, [pc, #d8]	; 3593e4 <expm1+0x2dc>
        359308:	ed919100 	ldfd	f1, [r1]
        35930c:	ee151181 	mufd	f1, f5, f1
        359310:	ee10a181 	mnfd	f2, f1
        359314:	ee001182 	adfd	f1, f0, f2
        359318:	e59f10c8 	ldr	r1, [pc, #c8]	; 3593e8 <expm1+0x2e0>
        35931c:	ed91c106 	ldfd	f4, [r1, #24]
        359320:	ed91b108 	ldfd	f3, [r1, #32]
        359324:	ee133181 	mufd	f3, f3, f1
        359328:	ee043183 	adfd	f3, f4, f3
        35932c:	ee133181 	mufd	f3, f3, f1
        359330:	ed91c104 	ldfd	f4, [r1, #16]
        359334:	ee033184 	adfd	f3, f3, f4
        359338:	ee133181 	mufd	f3, f3, f1
        35933c:	ed91c102 	ldfd	f4, [r1, #8]
        359340:	ee033184 	adfd	f3, f3, f4
        359344:	ee134181 	mufd	f4, f3, f1
        359348:	ed91b100 	ldfd	f3, [r1]
        35934c:	ee043183 	adfd	f3, f4, f3
        359350:	ee111181 	mufd	f1, f1, f1
        359354:	ee131181 	mufd	f1, f3, f1
        359358:	ee021181 	adfd	f1, f2, f1
        35935c:	ee015180 	adfd	f5, f1, f0
        359360:	e59f1084 	ldr	r1, [pc, #84]	; 3593ec <expm1+0x2e4>
        359364:	e0816180 	add	r6, r1, r0, lsl #3
        359368:	ed969100 	ldfd	f1, [r6]
        35936c:	e59f107c 	ldr	r1, [pc, #7c]	; 3593f0 <expm1+0x2e8>
        359370:	e0815180 	add	r5, r1, r0, lsl #3
        359374:	ed958100 	ldfd	f0, [r5]
        359378:	ee016180 	adfd	f6, f1, f0
        35937c:	ee00c189 	mvfd	f4, #1.0
        359380:	e3540035 	cmp	r4, #53	; 0x35
        359384:	ba00001a 	blt	3593f4 <expm1+0x2ec>
        359388:	e1a02004 	mov	r2, r4
        35938c:	ed2dc102 	stfd	f4, [sp, -#8]!
        359390:	e8bd0003 	ldmia	sp!, {r0, r1}
        359394:	eb6171bb 	bl	1bb5a88 <$scalb>
        359398:	ee00f180 	mvfd	f7, f0
        35939c:	e2642000 	rsb	r2, r4, #0	; 0x0
        3593a0:	ed2dc102 	stfd	f4, [sp, -#8]!
        3593a4:	e8bd0003 	ldmia	sp!, {r0, r1}
        3593a8:	eb6171b6 	bl	1bb5a88 <$scalb>
        3593ac:	ee009180 	mvfd	f1, f0
        3593b0:	ee008187 	mvfd	f0, f7
        3593b4:	ed95a100 	ldfd	f2, [r5]
        3593b8:	ee221181 	sufd	f1, f2, f1
        3593bc:	ee162185 	mufd	f2, f6, f5
        3593c0:	ee012182 	adfd	f2, f1, f2
        3593c4:	ed969100 	ldfd	f1, [r6]
        3593c8:	ea000028 	b	359470 <expm1+0x368>
        3593cc:	003819ac 	eoreqs	r1, r8, ip, lsr #19
        3593d0:	003819a4 	eoreqs	r1, r8, r4, lsr #19
        3593d4:	0038175c 	eoreqs	r1, r8, ip, asr r7
        3593d8:	40400000 	submi	r0, r0, r0
        3593dc:	00000000 	andeq	r0, r0, r0
        3593e0:	00381764 	eoreqs	r1, r8, r4, ror #14
        3593e4:	0038176c 	eoreqs	r1, r8, ip, ror #14
        3593e8:	00381774 	eoreqs	r1, r8, r4, ror r7
        3593ec:	0038179c 	mlaeqs	r8, ip, r7, r1
        3593f0:	0038189c 	mlaeqs	r8, ip, r8, r1
        3593f4:	e3740008 	cmn	r4, #8	; 0x8
        3593f8:	e1a02004 	mov	r2, r4
        3593fc:	ca00000a 	bgt	35942c <expm1+0x324>
        359400:	ed2dc102 	stfd	f4, [sp, -#8]!
        359404:	e8bd0003 	ldmia	sp!, {r0, r1}
        359408:	eb61719e 	bl	1bb5a88 <$scalb>
        35940c:	ee161185 	mufd	f1, f6, f5
        359410:	ed95a100 	ldfd	f2, [r5]
        359414:	ee012182 	adfd	f2, f1, f2
        359418:	ed969100 	ldfd	f1, [r6]
        35941c:	ee021181 	adfd	f1, f2, f1
        359420:	ee100181 	mufd	f0, f0, f1
        359424:	ee204189 	sufd	f4, f0, #1.0
        359428:	eaffff4b 	b	35915c <expm1+0x54>
        35942c:	ed2dc102 	stfd	f4, [sp, -#8]!
        359430:	e8bd0003 	ldmia	sp!, {r0, r1}
        359434:	eb617193 	bl	1bb5a88 <$scalb>
        359438:	ee00e180 	mvfd	f6, f0
        35943c:	e2642000 	rsb	r2, r4, #0	; 0x0
        359440:	ed2dc102 	stfd	f4, [sp, -#8]!
        359444:	e8bd0003 	ldmia	sp!, {r0, r1}
        359448:	eb61718e 	bl	1bb5a88 <$scalb>
        35944c:	ee00a180 	mvfd	f2, f0
        359450:	ee008186 	mvfd	f0, f6
        359454:	ed969100 	ldfd	f1, [r6]
        359458:	ee212182 	sufd	f2, f1, f2
        35945c:	ed95c100 	ldfd	f4, [r5]
        359460:	ee053189 	adfd	f3, f5, #1.0
        359464:	ee143183 	mufd	f3, f4, f3
        359468:	ee111185 	mufd	f1, f1, f5
        35946c:	ee031181 	adfd	f1, f3, f1
        359470:	ee021181 	adfd	f1, f2, f1
        359474:	ee104181 	mufd	f4, f0, f1
        359478:	eaffff37 	b	35915c <expm1+0x54>
        35947c:	eed4f118 	cmfe	f4, #0.0
        359480:	da000005 	ble	35949c <expm1+0x394>
        359484:	e3a00004 	mov	r0, #4	; 0x4
        359488:	eb61695a 	bl	1bb39f8 <$feraiseexcept>
        35948c:	e1a0000d 	mov	r0, sp
        359490:	eb616d5d 	bl	1bb4a0c <$feupdateenv>
        359494:	eb62a752 	bl	1c031e4 <$__inf>
        359498:	ea000005 	b	3594b4 <expm1+0x3ac>
        35949c:	e3a00008 	mov	r0, #8	; 0x8
        3594a0:	eb616954 	bl	1bb39f8 <$feraiseexcept>
        3594a4:	e1a0000d 	mov	r0, sp
        3594a8:	eb616d57 	bl	1bb4a0c <$feupdateenv>
        3594ac:	ed948100 	ldfd	f0, [r4]
        3594b0:	ee200189 	sufd	f0, f0, #1.0
        3594b4:	ed1b4212 	lfm	f4, 4, [fp, -#72]
        3594b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: EqualStyle__FP11StyleRecordT1
 * Address: 00359cb8
 */
void globals::EqualStyle() {
    /*
        359cb8:	e1a0c00d 	mov	ip, sp
        359cbc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        359cc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        359cc4:	e1a05000 	mov	r5, r0
        359cc8:	e1a04001 	mov	r4, r1
        359ccc:	e5910000 	ldr	r0, [r1]
        359cd0:	e5901000 	ldr	r1, [r0]
        359cd4:	e5950000 	ldr	r0, [r5]
        359cd8:	e5900000 	ldr	r0, [r0]
        359cdc:	eb61a953 	bl	1bc4230 <$EQRef__FlT1>
        359ce0:	e3300000 	teq	r0, #0	; 0x0
        359ce4:	0a000013 	beq	359d38 <EqualStyle__FP11StyleRecordT1+0x80>
        359ce8:	e5951004 	ldr	r1, [r5, #4]
        359cec:	e5940004 	ldr	r0, [r4, #4]
        359cf0:	e1310000 	teq	r1, r0
        359cf4:	05951008 	ldreq	r1, [r5, #8]
        359cf8:	05940008 	ldreq	r0, [r4, #8]
        359cfc:	01310000 	teqeq	r1, r0
        359d00:	0595000c 	ldreq	r0, [r5, #12]
        359d04:	0594100c 	ldreq	r1, [r4, #12]
        359d08:	01300001 	teqeq	r0, r1
        359d0c:	05950010 	ldreq	r0, [r5, #16]
        359d10:	05941010 	ldreq	r1, [r4, #16]
        359d14:	01300001 	teqeq	r0, r1
        359d18:	05951014 	ldreq	r1, [r5, #20]
        359d1c:	05940014 	ldreq	r0, [r4, #20]
        359d20:	01310000 	teqeq	r1, r0
        359d24:	05b50018 	ldreq	r0, [r5, #24]!
        359d28:	05b41018 	ldreq	r1, [r4, #24]!
        359d2c:	01300001 	teqeq	r0, r1
        359d30:	03a00001 	moveq	r0, #1	; 0x1
        359d34:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        359d38:	e3a00000 	mov	r0, #0	; 0x0
        359d3c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: evRootEvent
 * Address: 003712a0
 */
void globals::evRootEvent() {
    /*
        3712a0:	000afd64 	andeq	pc, sl, r4, ror #26
    */
}

/**
 * Symbol: exRootException
 * Address: 003712a4
 */
void globals::exRootException() {
    /*
        3712a4:	000afd68 	andeq	pc, sl, r8, ror #26
    */
}

/**
 * Symbol: exSkia
 * Address: 003712a8
 */
void globals::exSkia() {
    /*
        3712a8:	000afd70 	andeq	pc, sl, r0, ror sp
    */
}

/**
 * Symbol: exMsgException
 * Address: 003712ac
 */
void globals::exMsgException() {
    /*
        3712ac:	000afd7c 	andeq	pc, sl, ip, ror sp
    */
}

/**
 * Symbol: exDivideByZero
 * Address: 003712b0
 */
void globals::exDivideByZero() {
    /*
        3712b0:	000afd88 	andeq	pc, sl, r8, lsl #27
    */
}

/**
 * Symbol: exAbort
 * Address: 003712b4
 */
void globals::exAbort() {
    /*
        3712b4:	000afd94 	muleq	sl, r4, sp
    */
}

/**
 * Symbol: exBusError
 * Address: 003712b8
 */
void globals::exBusError() {
    /*
        3712b8:	000afda0 	andeq	pc, sl, r0, lsr #27
    */
}

/**
 * Symbol: exAlignment
 * Address: 003712bc
 */
void globals::exAlignment() {
    /*
        3712bc:	000afdb0 	streqh	pc, [sl], -r0
    */
}

/**
 * Symbol: exIllegalInstr
 * Address: 003712c0
 */
void globals::exIllegalInstr() {
    /*
        3712c0:	000afdc4 	andeq	pc, sl, r4, asr #27
    */
}

/**
 * Symbol: exPermissionViolation
 * Address: 003712c4
 */
void globals::exPermissionViolation() {
    /*
        3712c4:	000afdd8 	ldreqd	pc, [sl], -r8
    */
}

/**
 * Symbol: exWriteProtected
 * Address: 003712c8
 */
void globals::exWriteProtected() {
    /*
        3712c8:	000afde8 	andeq	pc, sl, r8, ror #27
    */
}

/**
 * Symbol: exOutOfStack
 * Address: 003712cc
 */
void globals::exOutOfStack() {
    /*
        3712cc:	000afdf8 	streqd	pc, [sl], -r8
    */
}

/**
 * Symbol: exLongErrorException
 * Address: 003712d0
 */
void globals::exLongErrorException() {
    /*
        3712d0:	000afe0c 	andeq	pc, sl, ip, lsl #28
    */
}

/**
 * Symbol: exErrorException
 * Address: 003712d4
 */
void globals::exErrorException() {
    /*
        3712d4:	000afe20 	andeq	pc, sl, r0, lsr #28
    */
}

/**
 * Symbol: exNoSoupDefException
 * Address: 003712d8
 */
void globals::exNoSoupDefException() {
    /*
        3712d8:	000afe30 	andeq	pc, sl, r0, lsr lr
    */
}

/**
 * Symbol: exDateQuery
 * Address: 003712dc
 */
void globals::exDateQuery() {
    /*
        3712dc:	000afe44 	andeq	pc, sl, r4, asr #28
    */
}

/**
 * Symbol: exGrafException
 * Address: 003712e0
 */
void globals::exGrafException() {
    /*
        3712e0:	000afe50 	andeq	pc, sl, r0, asr lr
    */
}

/**
 * Symbol: exCommException
 * Address: 003712e4
 */
void globals::exCommException() {
    /*
        3712e4:	000afe5c 	andeq	pc, sl, ip, asr lr
    */
}

/**
 * Symbol: exAll
 * Address: 003712e8
 */
void globals::exAll() {
    /*
        3712e8:	000afe68 	andeq	pc, sl, r8, ror #28
    */
}

/**
 * Symbol: exNewtException
 * Address: 003712ec
 */
void globals::exNewtException() {
    /*
        3712ec:	000afe70 	andeq	pc, sl, r0, ror lr
    */
}

/**
 * Symbol: exFaxBufOverrunException
 * Address: 003712f0
 */
void globals::exFaxBufOverrunException() {
    /*
        3712f0:	000afe80 	andeq	pc, sl, r0, lsl #29
    */
}

/**
 * Symbol: exCompiler
 * Address: 003712f4
 */
void globals::exCompiler() {
    /*
        3712f4:	000afe88 	andeq	pc, sl, r8, lsl #29
    */
}

/**
 * Symbol: exCompilerWithFrameData
 * Address: 003712f8
 */
void globals::exCompilerWithFrameData() {
    /*
        3712f8:	000afe98 	muleq	sl, r8, lr
    */
}

/**
 * Symbol: exStoreError
 * Address: 003712fc
 */
void globals::exStoreError() {
    /*
        3712fc:	000afeb8 	streqh	pc, [sl], -r8
    */
}

/**
 * Symbol: exInterpreter
 * Address: 00371300
 */
void globals::exInterpreter() {
    /*
        371300:	000afec8 	andeq	pc, sl, r8, asr #29
    */
}

/**
 * Symbol: exInterpreterWithFrameData
 * Address: 00371304
 */
void globals::exInterpreterWithFrameData() {
    /*
        371304:	000afed8 	ldreqd	pc, [sl], -r8
    */
}

/**
 * Symbol: exFrames
 * Address: 00371308
 */
void globals::exFrames() {
    /*
        371308:	000afef8 	streqd	pc, [sl], -r8
    */
}

/**
 * Symbol: exFramesWithFrameData
 * Address: 0037130c
 */
void globals::exFramesWithFrameData() {
    /*
        37130c:	000aff04 	andeq	pc, sl, r4, lsl #30
    */
}

/**
 * Symbol: exBadType
 * Address: 00371310
 */
void globals::exBadType() {
    /*
        371310:	000aff20 	andeq	pc, sl, r0, lsr #30
    */
}

/**
 * Symbol: exBadTypeWithFrameData
 * Address: 00371314
 */
void globals::exBadTypeWithFrameData() {
    /*
        371314:	000aff30 	andeq	pc, sl, r0, lsr pc
    */
}

/**
 * Symbol: exOutOfMemory
 * Address: 00371318
 */
void globals::exOutOfMemory() {
    /*
        371318:	000aff50 	andeq	pc, sl, r0, asr pc
    */
}

/**
 * Symbol: exStdioPipeException
 * Address: 0037131c
 */
void globals::exStdioPipeException() {
    /*
        37131c:	000aff60 	andeq	pc, sl, r0, ror #30
    */
}

/**
 * Symbol: exCompressionException
 * Address: 00371320
 */
void globals::exCompressionException() {
    /*
        371320:	000aff70 	andeq	pc, sl, r0, ror pc
    */
}

/**
 * Symbol: exPipeException
 * Address: 00371324
 */
void globals::exPipeException() {
    /*
        371324:	000aff7c 	andeq	pc, sl, ip, ror pc
    */
}

/**
 * Symbol: exTranslatorException
 * Address: 00371328
 */
void globals::exTranslatorException() {
    /*
        371328:	000aff88 	andeq	pc, sl, r8, lsl #31
        37132c:	008040c0 	addeq	r4, r0, r0, asr #1
        371330:	20a060e0 	adccs	r6, r0, r0, ror #1
        371334:	109050d0 	ldrnesb	r5, [r0], r0
        371338:	30b070f0 	ldrccsh	r7, [r0], r0
        37133c:	088848c8 	stmeqia	r8, {r3, r6, r7, fp, lr}
        371340:	28a868e8 	stmcsia	r8!, {r3, r5, r6, r7, fp, sp, lr}
        371344:	189858d8 	ldmneia	r8, {r3, r4, r6, r7, fp, ip, lr}
        371348:	38b878f8 	ldmccia	r8!, {r3, r4, r5, r6, r7, fp, ip, sp, lr}
        37134c:	048444c4 	streq	r4, [r4], #1220
        371350:	24a464e4 	strcst	r6, [r4], #1252
        371354:	149454d4 	ldrne	r5, [r4], #1236
        371358:	34b474f4 	ldrcct	r7, [r4], #1268
        37135c:	0c8c4ccc 	stceq	12, cr4, [ip], #816
        371360:	2cac6cec 	stccs	12, cr6, [ip], #944
        371364:	1c9c5cdc 	ldcne	12, cr5, [ip], #880
        371368:	3cbc7cfc 	ldccc	12, cr7, [ip], #1008
        37136c:	028242c2 	addeq	r4, r2, #536870924	; 0x2000000c
        371370:	22a262e2 	adccs	r6, r2, #536870926	; 0x2000000e
        371374:	129252d2 	addnes	r5, r2, #536870925	; 0x2000000d
        371378:	32b272f2 	adcccs	r7, r2, #536870927	; 0x2000000f
        37137c:	0a8a4aca 	beq	fe603eac <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfc9f3654>
        371380:	2aaa6aea 	bcs	fee0bf30 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd1fb6d8>
        371384:	1a9a5ada 	bne	fea07ef4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfcdf769c>
        371388:	3aba7afa 	bcc	ff20ff78 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd5ff720>
        37138c:	068646c6 	streq	r4, [r6], r6, asr #13
        371390:	26a666e6 	strcst	r6, [r6], r6, ror #13
        371394:	169656d6 	undefined
        371398:	36b676f6 	undefined
        37139c:	0e8e4ece 	cdpeq	14, 8, cr4, cr14, cr14, {6}
        3713a0:	2eae6eee 	cdpcs	14, 10, cr6, cr14, cr14, {7}
        3713a4:	1e9e5ede 	mrcne	14, 4, r5, cr14, cr14, {6}
        3713a8:	3ebe7efe 	mrccc	14, 5, r7, cr14, cr14, {7}
        3713ac:	018141c1 	orreq	r4, r1, r1, asr #3
        3713b0:	21a161e1 	movcs	r6, r1, ror #3
        3713b4:	119151d1 	ldrnesb	r5, [r1, r1]
        3713b8:	31b171f1 	ldrccsh	r7, [r1, r1]!
        3713bc:	098949c9 	stmeqib	r9, {r0, r3, r6, r7, r8, fp, lr}
        3713c0:	29a969e9 	stmcsib	r9!, {r0, r3, r5, r6, r7, r8, fp, sp, lr}
        3713c4:	199959d9 	ldmneib	r9, {r0, r3, r4, r6, r7, r8, fp, ip, lr}
        3713c8:	39b979f9 	ldmccib	r9!, {r0, r3, r4, r5, r6, r7, r8, fp, ip, sp, lr}
        3713cc:	058545c5 	streq	r4, [r5, #1477]
        3713d0:	25a565e5 	strcs	r6, [r5, #1509]!
        3713d4:	159555d5 	ldrne	r5, [r5, #1493]
        3713d8:	35b575f5 	ldrcc	r7, [r5, #1525]!
        3713dc:	0d8d4dcd 	stceq	13, cr4, [sp, #820]
        3713e0:	2dad6ded 	stccs	13, cr6, [sp, #948]!
        3713e4:	1d9d5ddd 	ldcne	13, cr5, [sp, #884]
        3713e8:	3dbd7dfd 	ldccc	13, cr7, [sp, #1012]!
        3713ec:	038343c3 	orreq	r4, r3, #201326595	; 0xc000003
        3713f0:	23a363e3 	movcs	r6, #-1946157053	; 0x8c000003
        3713f4:	139353d3 	orrnes	r5, r3, #1275068419	; 0x4c000003
        3713f8:	33b373f3 	movccs	r7, #-872415229	; 0xcc000003
        3713fc:	0b8b4bcb 	bleq	fe644330 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfca33ad8>
        371400:	2bab6beb 	blcs	fee4c3b4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd23bb5c>
        371404:	1b9b5bdb 	blne	fea48378 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfce37b20>
        371408:	3bbb7bfb 	blcc	ff2503fc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd63fba4>
        37140c:	078747c7 	streq	r4, [r7, r7, asr #15]
        371410:	27a767e7 	strcs	r6, [r7, r7, ror #15]!
        371414:	179757d7 	undefined
        371418:	37b777f7 	undefined
        37141c:	0f8f4fcf 	swieq	0x008f4fcf
        371420:	2faf6fef 	swics	0x00af6fef
        371424:	1f9f5fdf 	swine	0x009f5fdf
        371428:	3fbf7fff 	swicc	0x00bf7fff
    */
}

/**
 * Symbol: eps0
 * Address: 003743f0
 */
void globals::eps0() {
    /*
        374400:	00000001 	andeq	r0, r0, r1
        374404:	00030005 	andeq	r0, r3, r5
        374408:	0008000b 	andeq	r0, r8, fp
        37440c:	000f0014 	andeq	r0, pc, r4, lsl r0
        374410:	0019001e 	andeqs	r0, r9, lr, lsl r0
        374414:	0024002a 	eoreq	r0, r4, sl, lsr #32
        374418:	00300037 	eoreqs	r0, r0, r7, lsr r0
        37441c:	003e0045 	eoreqs	r0, lr, r5, asr #32
        374420:	004d0055 	subeq	r0, sp, r5, asr r0
        374424:	005c0065 	subeqs	r0, ip, r5, rrx
        374428:	006d0075 	rsbeq	r0, sp, r5, ror r0
        37442c:	007e0087 	rsbeqs	r0, lr, r7, lsl #1
        374430:	00870087 	addeq	r0, r7, r7, lsl #1
        374434:	00870087 	addeq	r0, r7, r7, lsl #1
        374438:	00870087 	addeq	r0, r7, r7, lsl #1
        37443c:	00870087 	addeq	r0, r7, r7, lsl #1
        374440:	00870087 	addeq	r0, r7, r7, lsl #1
        374444:	00870087 	addeq	r0, r7, r7, lsl #1
        374448:	00870087 	addeq	r0, r7, r7, lsl #1
        37444c:	00870087 	addeq	r0, r7, r7, lsl #1
        374450:	00870087 	addeq	r0, r7, r7, lsl #1
        374454:	00870087 	addeq	r0, r7, r7, lsl #1
        374458:	00870087 	addeq	r0, r7, r7, lsl #1
        37445c:	00870087 	addeq	r0, r7, r7, lsl #1
        374460:	00870087 	addeq	r0, r7, r7, lsl #1
        374464:	00870087 	addeq	r0, r7, r7, lsl #1
        374468:	00870087 	addeq	r0, r7, r7, lsl #1
        37446c:	00870087 	addeq	r0, r7, r7, lsl #1
    */
}

/**
 * Symbol: eps1
 * Address: 00374470
 */
void globals::eps1() {
    /*
        37447c:	0009001e 	andeq	r0, r9, lr, lsl r0
        374480:	0036004e 	eoreqs	r0, r6, lr, asr #32
        374484:	00640076 	rsbeq	r0, r4, r6, ror r0
        374488:	00860092 	umulleq	r0, r6, r2, r0
        37448c:	009d00a5 	addeqs	r0, sp, r5, lsr #1
        374490:	00ac00b1 	streqh	r0, [ip], r1
        374494:	00b500b8 	ldreqh	r0, [r5], r8
        374498:	00bb00bd 	ldreqh	r0, [fp], sp
        37449c:	00be00c0 	adceqs	r0, lr, r0, asr #1
        3744a0:	00c100c1 	sbceq	r0, r1, r1, asr #1
        3744a4:	00c200c2 	sbceq	r0, r2, r2, asr #1
        3744a8:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744ac:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744b0:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744b4:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744b8:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744bc:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744c0:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744c4:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744c8:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744cc:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744d0:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744d4:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744d8:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744dc:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744e0:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744e4:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744e8:	00c300c3 	sbceq	r0, r3, r3, asr #1
        3744ec:	00c300c3 	sbceq	r0, r3, r3, asr #1
    */
}

/**
 * Symbol: eps2
 * Address: 003744f0
 */
void globals::eps2() {
    /*
        3744f0:	00000001 	andeq	r0, r0, r1
        3744f4:	0009001a 	andeq	r0, r9, sl, lsl r0
        3744f8:	002c003b 	eoreq	r0, ip, fp, lsr r0
        3744fc:	00470050 	subeq	r0, r7, r0, asr r0
        374500:	0057005c 	subeqs	r0, r7, ip, asr r0
        374504:	005f0062 	subeqs	r0, pc, r2, rrx
        374508:	00620062 	rsbeq	r0, r2, r2, rrx
        37450c:	00620062 	rsbeq	r0, r2, r2, rrx
        374510:	00620062 	rsbeq	r0, r2, r2, rrx
        374514:	00620062 	rsbeq	r0, r2, r2, rrx
        374518:	00620062 	rsbeq	r0, r2, r2, rrx
        37451c:	00620062 	rsbeq	r0, r2, r2, rrx
        374520:	00620062 	rsbeq	r0, r2, r2, rrx
        374524:	00620062 	rsbeq	r0, r2, r2, rrx
        374528:	00620062 	rsbeq	r0, r2, r2, rrx
        37452c:	00620062 	rsbeq	r0, r2, r2, rrx
        374530:	00620062 	rsbeq	r0, r2, r2, rrx
        374534:	00620062 	rsbeq	r0, r2, r2, rrx
        374538:	00620062 	rsbeq	r0, r2, r2, rrx
        37453c:	00620062 	rsbeq	r0, r2, r2, rrx
        374540:	00620062 	rsbeq	r0, r2, r2, rrx
        374544:	00620062 	rsbeq	r0, r2, r2, rrx
        374548:	00620062 	rsbeq	r0, r2, r2, rrx
        37454c:	00620062 	rsbeq	r0, r2, r2, rrx
        374550:	00620062 	rsbeq	r0, r2, r2, rrx
        374554:	00620062 	rsbeq	r0, r2, r2, rrx
        374558:	00620062 	rsbeq	r0, r2, r2, rrx
        37455c:	00620062 	rsbeq	r0, r2, r2, rrx
        374560:	00620062 	rsbeq	r0, r2, r2, rrx
        374564:	00620062 	rsbeq	r0, r2, r2, rrx
        374568:	00620062 	rsbeq	r0, r2, r2, rrx
        37456c:	00620062 	rsbeq	r0, r2, r2, rrx
    */
}

/**
 * Symbol: eps3
 * Address: 00374570
 */
void globals::eps3() {
    /*
        374570:	0009001b 	andeq	r0, r9, fp, lsl r0
        374574:	002e003d 	eoreq	r0, lr, sp, lsr r0
        374578:	004a0054 	subeq	r0, sl, r4, asr r0
        37457c:	005b0060 	subeqs	r0, fp, r0, rrx
        374580:	00600060 	rsbeq	r0, r0, r0, rrx
        374584:	00600060 	rsbeq	r0, r0, r0, rrx
        374588:	00600060 	rsbeq	r0, r0, r0, rrx
        37458c:	00600060 	rsbeq	r0, r0, r0, rrx
        374590:	00600060 	rsbeq	r0, r0, r0, rrx
        374594:	00600060 	rsbeq	r0, r0, r0, rrx
        374598:	00600060 	rsbeq	r0, r0, r0, rrx
        37459c:	00600060 	rsbeq	r0, r0, r0, rrx
        3745a0:	00600060 	rsbeq	r0, r0, r0, rrx
        3745a4:	00600060 	rsbeq	r0, r0, r0, rrx
        3745a8:	00600060 	rsbeq	r0, r0, r0, rrx
        3745ac:	00600060 	rsbeq	r0, r0, r0, rrx
        3745b0:	00600060 	rsbeq	r0, r0, r0, rrx
        3745b4:	00600060 	rsbeq	r0, r0, r0, rrx
        3745b8:	00600060 	rsbeq	r0, r0, r0, rrx
        3745bc:	00600060 	rsbeq	r0, r0, r0, rrx
        3745c0:	00600060 	rsbeq	r0, r0, r0, rrx
        3745c4:	00600060 	rsbeq	r0, r0, r0, rrx
        3745c8:	00600060 	rsbeq	r0, r0, r0, rrx
        3745cc:	00600060 	rsbeq	r0, r0, r0, rrx
        3745d0:	00600060 	rsbeq	r0, r0, r0, rrx
        3745d4:	00600060 	rsbeq	r0, r0, r0, rrx
        3745d8:	00600060 	rsbeq	r0, r0, r0, rrx
        3745dc:	00600060 	rsbeq	r0, r0, r0, rrx
        3745e0:	00600060 	rsbeq	r0, r0, r0, rrx
        3745e4:	00600060 	rsbeq	r0, r0, r0, rrx
        3745e8:	00600060 	rsbeq	r0, r0, r0, rrx
        3745ec:	00600060 	rsbeq	r0, r0, r0, rrx
    */
}

/**
 * Symbol: epunct_charset
 * Address: 0037506c
 */
void globals::epunct_charset() {
    /*
        37506c:	27222e2c 	strcs	r2, [r2, -ip, lsr #28]!
        375070:	212d3f3a 	teqcs	sp, sl, lsr pc
        375074:	295f3b00 	ldmcsdb	pc, {r8, r9, fp, ip, sp}^
    */
}

/**
 * Symbol: exRosetta
 * Address: 003774f8
 */
void globals::exRosetta() {
    /*
        3774f8:	001b7110 	andeqs	r7, fp, r0, lsl r1
        377504:	08002000 	stmeqda	r0, {sp}
        377508:	80000200 	andhi	r0, r0, r0, lsl #4
        37750c:	08402001 	stmeqda	r0, {r0, sp}^
        377510:	80100204 	andhis	r0, r0, r4, lsl #4
        377514:	88402801 	stmhida	r0, {r0, fp, sp}^
        377518:	82102204 	andhis	r2, r0, #1073741824	; 0x40000000
        37751c:	88412841 	stmhida	r1, {r0, r6, fp, sp}^
        377520:	82142214 	andhis	r2, r4, #1073741825	; 0x40000001
        377524:	a8412a41 	stmgeda	r1, {r0, r6, r9, fp, sp}^
        377528:	8a14a214 	bhi	89fd80 <ROM$$Size+0x180134>
        37752c:	a8452a51 	stmgeda	r5, {r0, r4, r6, r9, fp, sp}^
        377530:	8a54a215 	bhi	189fd8c <ROM$$Size+0x1180140>
        377534:	aa45aa51 	bge	14e1e80 <ROM$$Size+0xdc2234>
        377538:	aa54aa15 	bge	18a1d94 <ROM$$Size+0x1182148>
        37753c:	aa55aa55 	bge	18e1e98 <ROM$$Size+0x11c224c>
        377540:	aa55aa55 	bge	18e1e9c <ROM$$Size+0x11c2250>
        377544:	ba55ab55 	blt	18e22a0 <ROM$$Size+0x11c2654>
        377548:	ba55ab55 	blt	18e22a4 <ROM$$Size+0x11c2658>
        37754c:	b6d56b5d 	undefined
        377550:	b6d56b5d 	undefined
        377554:	bbd6bbd6 	bllt	ff9264b4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdd15c5c>
        377558:	bbd6bbd6 	bllt	ff9264b8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdd15c60>
        37755c:	bbeebbee 	bllt	fff2651c <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe315cc4>
        377560:	bbeebbee 	bllt	fff26520 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe315cc8>
        377564:	fbddbfdd 	blx	ffae74e2 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfded6c8a>
        377568:	fbddbfdd 	blx	ffae74e6 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfded6c8e>
        37756c:	bffdbfdf 	swilt	0x00fdbfdf
        377570:	bffdbfdf 	swilt	0x00fdbfdf
        377574:	ffffffff 	swinv	0x00ffffff
        377578:	ffffffff 	swinv	0x00ffffff
        37757c:	6c617272 	sfmvs	f7, 2, [r1], -#456
        377580:	79790000 	ldmvcdb	r9!, {}^
        377584:	004c6172 	subeq	r6, ip, r2, ror r1
        377588:	72790000 	rsbvcs	r0, r9, #0	; 0x0
        37758c:	00004d6f 	andeq	r4, r0, pc, ror #26
        377590:	6e64656c 	cdpvs	5, 6, cr6, cr4, cr12, {3}
        377594:	6c6f0042 	stcvsl	0, cr0, [pc], -#264
        377598:	72616e64 	rsbvc	r6, r1, #1600	; 0x640
        37759c:	796e0000 	stmvcdb	lr!, {}^
        3775a0:	526f7365 	rsbpl	r7, pc, #-1811939327	; 0x94000001
        3775a4:	74746121 	ldrvcbt	r6, [r4], -#289
        3775a8:	00737461 	rsbeqs	r7, r3, r1, ror #8
        3775ac:	66666f72 	undefined
        3775b0:	64004c65 	strvs	r4, [r0], -#3173
        3775b4:	73000000 	tstvc	r0, #0	; 0x0
        3775b8:	0000006c 	andeq	r0, r0, ip, rrx
        3775bc:	796f6e00 	stmvcdb	pc!, {r9, sl, fp, sp, lr}^
        3775c0:	00000000 	andeq	r0, r0, r0
        3775c4:	54686520 	strplbt	r6, [r8], -#1312
        3775c8:	446f6374 	strmibt	r6, [pc], #374	; 3775d0 <exRosetta+0xd8>
        3775cc:	6f722069 	swivs	0x00722069
        3775d0:	73206f6e 	teqvc	r0, #440	; 0x1b8
        3775d4:	2e000000 	cdpcs	0, 0, cr0, cr0, cr0, {0}
        3775d8:	0000006c 	andeq	r0, r0, ip, rrx
        3775dc:	61727279 	cmnvs	r2, r9, ror r2
        3775e0:	79406170 	stmvcdb	r0, {r4, r5, r6, r8, sp, lr}^
        3775e4:	706c652e 	rsbvc	r6, ip, lr, lsr #10
        3775e8:	636f6d00 	cmnvs	pc, #0	; 0x0
        3775ec:	00000000 	andeq	r0, r0, r0
        3775f0:	00004669 	andeq	r4, r0, r9, ror #12
        3775f4:	6e652066 	cdpvs	0, 6, cr2, cr5, cr6, {3}
        3775f8:	6f6f6420 	swivs	0x006f6420
        3775fc:	3430382f 	ldrcct	r3, [r0], -#2095
        377600:	3235372d 	eorccs	r3, r5, #11796480	; 0xb40000
        377604:	32333833 	eorccs	r3, r3, #3342336	; 0x330000
        377608:	00627261 	rsbeq	r7, r2, r1, ror #4
        37760c:	6e64796e 	cdpvs	9, 6, cr7, cr4, cr14, {3}
        377610:	40627261 	rsbmi	r7, r2, r1, ror #4
        377614:	696e7374 	stmvsdb	lr!, {r2, r4, r5, r6, r8, r9, ip, sp, lr}^
        377618:	6f726d2e 	swivs	0x00726d2e
        37761c:	636f6d00 	cmnvs	pc, #0	; 0x0
        377620:	4865792c 	stmmida	r5!, {r2, r3, r5, r8, fp, ip, sp, lr}^
        377624:	20746861 	rsbcss	r6, r4, r1, ror #16
        377628:	74277320 	strvct	r7, [r7], -#800
        37762c:	6d652100 	stfvse	f2, [r5]
        377630:	00000000 	andeq	r0, r0, r0
        377634:	00000062 	andeq	r0, r0, r2, rrx
        377638:	696c6c00 	stmvsdb	ip!, {sl, fp, sp, lr}^
        37764c:	00006c65 	andeq	r6, r0, r5, ror #24
        377650:	73764061 	cmnvc	r6, #97	; 0x61
        377654:	6e67656c 	cdpvs	5, 6, cr6, cr7, cr12, {3}
        377658:	74656368 	strvcbt	r6, [r5], -#872
        37765c:	2e636f6d 	cdpcs	15, 6, cr6, cr3, cr13, {3}
        377660:	00000000 	andeq	r0, r0, r0
        377664:	00526963 	subeqs	r6, r2, r3, ror #18
        377668:	68617264 	stmvsda	r1!, {r2, r5, r6, r9, ip, sp, lr}^
        37768c:	00060002 	andeq	r0, r6, r2
        377690:	00422822 	subeq	r2, r2, r2, lsr #16
        377694:	f9f91900 	ldmnvib	r9!, {r8, fp, ip}^
        377698:	00000000 	andeq	r0, r0, r0
        37769c:	b8310000 	ldmltda	r1!, {}
        3776a0:	0a000822 	beq	379730 <gPostscriptHeader+0xa94>
        3776a4:	60e70000 	rscvs	r0, r7, r0
        3776a8:	07000000 	streq	r0, [r0, -r0]
        3776ac:	00060002 	andeq	r0, r6, r2
        3776b0:	00422820 	subeq	r2, r2, r0, lsr #16
        3776b4:	e1e10100 	mvn	r0, r0, lsl #2
        3776b8:	0b000000 	bleq	3776c0 <exRosetta+0x1c8>
        3776bc:	00060002 	andeq	r0, r6, r2
        3776c0:	00422820 	subeq	r2, r2, r0, lsr #16
        3776c4:	e1e10100 	mvn	r0, r0, lsl #2
        3776c8:	00000000 	andeq	r0, r0, r0
        3776cc:	00060002 	andeq	r0, r6, r2
        3776d0:	00422822 	subeq	r2, r2, r2, lsr #16
        3776d4:	f9f91900 	ldmnvib	r9!, {r8, fp, ip}^
        3776d8:	00000000 	andeq	r0, r0, r0
        3776dc:	00000006 	andeq	r0, r0, r6
        3776e0:	00030717 	andeq	r0, r3, r7, lsl r7
        3776e4:	05ff077f 	ldreqb	r0, [pc, #77f]!	; 377e6b <kWhite_e+0x3>
        3776e8:	00000000 	andeq	r0, r0, r0
        3776ec:	03000102 	tsteq	r0, #-2147483648	; 0x80000000
        3776f0:	07004217 	undefined
        3776f4:	05ff077f 	ldreqb	r0, [pc, #77f]!	; 377e7b <kMajorIndexWhite+0xb>
        3776f8:	00000000 	andeq	r0, r0, r0
        3776fc:	03000002 	tsteq	r0, #2	; 0x2
        377700:	07034717 	undefined
        377704:	05ff077f 	ldreqb	r0, [pc, #77f]!	; 377e8b <kMajorIndexWhite+0x1b>
        377708:	00000000 	andeq	r0, r0, r0
        37770c:	01080502 	tsteq	r8, r2, lsl #10
        377710:	05080917 	streq	r0, [r8, -#2327]
        377714:	5fff077f 	swipl	0x00ff077f
        377718:	00000000 	andeq	r0, r0, r0
        37771c:	02080502 	andeq	r0, r8, #8388608	; 0x800000
        377720:	05080917 	streq	r0, [r8, -#2327]
        377724:	5fff077f 	swipl	0x00ff077f
        377728:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: EXP_TABL
 * Address: 00378410
 */
void globals::EXP_TABL() {
    /*
        378410:	010000fe 	streqd	r0, [r0, -lr]
        378414:	00fd00fc 	ldreqsh	r0, [sp], #12
        378418:	00fa00f9 	ldreqsh	r0, [sl], #9
        37841c:	00f800f7 	ldreqsh	r0, [r8], #7
        378420:	00f500f4 	ldreqsh	r0, [r5], #4
        378424:	00f300f2 	ldreqsh	r0, [r3], #2
        378428:	00f100ef 	rsceqs	r0, r1, pc, ror #1
        37842c:	00ee00ed 	rsceq	r0, lr, sp, ror #1
        378430:	00ec00eb 	rsceq	r0, ip, fp, ror #1
        378434:	00e900e8 	rsceq	r0, r9, r8, ror #1
        378438:	00e700e6 	rsceq	r0, r7, r6, ror #1
        37843c:	00e500e4 	rsceq	r0, r5, r4, ror #1
        378440:	00e300e1 	rsceq	r0, r3, r1, ror #1
        378444:	00e000df 	ldreqd	r0, [r0], #15
        378448:	00de00dd 	ldreqsb	r0, [lr], #13
        37844c:	00dc00db 	ldreqsb	r0, [ip], #11
        378450:	00da00d9 	ldreqsb	r0, [sl], #9
        378454:	00d700d6 	ldreqsb	r0, [r7], #6
        378458:	00d500d4 	ldreqsb	r0, [r5], #4
        37845c:	00d300d2 	ldreqsb	r0, [r3], #2
        378460:	00d100d0 	ldreqsb	r0, [r1]
        378464:	00cf00ce 	sbceq	r0, pc, lr, asr #1
        378468:	00cd00cc 	sbceq	r0, sp, ip, asr #1
        37846c:	00cb00ca 	sbceq	r0, fp, sl, asr #1
        378470:	00c900c8 	sbceq	r0, r9, r8, asr #1
        378474:	00c700c6 	sbceq	r0, r7, r6, asr #1
        378478:	00c500c4 	sbceq	r0, r5, r4, asr #1
        37847c:	00c300c2 	sbceq	r0, r3, r2, asr #1
        378480:	00c100c0 	sbceq	r0, r1, r0, asr #1
        378484:	00bf00be 	ldreqh	r0, [pc], lr
        378488:	00bd00bc 	ldreqh	r0, [sp], ip
        37848c:	00bb00ba 	ldreqh	r0, [fp], sl
        378490:	00b900b8 	ldreqh	r0, [r9], r8
        378494:	00b800b7 	ldreqh	r0, [r8], r7
        378498:	00b600b5 	ldreqh	r0, [r6], r5
        37849c:	00b400b3 	ldreqh	r0, [r4], r3
        3784a0:	00b200b1 	ldreqh	r0, [r2], r1
        3784a4:	00b000af 	adceqs	r0, r0, pc, lsr #1
        3784a8:	00af00ae 	adceq	r0, pc, lr, lsr #1
        3784ac:	00ad00ac 	adceq	r0, sp, ip, lsr #1
        3784b0:	00ab00aa 	adceq	r0, fp, sl, lsr #1
        3784b4:	00a900a9 	adceq	r0, r9, r9, lsr #1
        3784b8:	00a800a7 	adceq	r0, r8, r7, lsr #1
        3784bc:	00a600a5 	adceq	r0, r6, r5, lsr #1
        3784c0:	00a400a4 	adceq	r0, r4, r4, lsr #1
        3784c4:	00a300a2 	adceq	r0, r3, r2, lsr #1
        3784c8:	00a100a0 	adceq	r0, r1, r0, lsr #1
        3784cc:	00a0009f 	umlaleq	r0, r0, pc, r0
        3784d0:	009e009d 	umulleqs	r0, lr, sp, r0
        3784d4:	009c009c 	umulleqs	r0, ip, ip, r0
        3784d8:	009b009a 	umulleqs	r0, fp, sl, r0
        3784dc:	00990098 	umulleqs	r0, r9, r8, r0
        3784e0:	00980097 	umulleqs	r0, r8, r7, r0
        3784e4:	00960095 	umulleqs	r0, r6, r5, r0
        3784e8:	00950094 	umulleqs	r0, r5, r4, r0
        3784ec:	00930092 	umulleqs	r0, r3, r2, r0
        3784f0:	00920091 	umulleqs	r0, r2, r1, r0
        3784f4:	00900090 	umulleqs	r0, r0, r0, r0
        3784f8:	008f008e 	addeq	r0, pc, lr, lsl #1
        3784fc:	008d008d 	addeq	r0, sp, sp, lsl #1
        378500:	008c008b 	addeq	r0, ip, fp, lsl #1
        378504:	008b008a 	addeq	r0, fp, sl, lsl #1
        378508:	00890089 	addeq	r0, r9, r9, lsl #1
        37850c:	00880087 	addeq	r0, r8, r7, lsl #1
        378510:	00860086 	addeq	r0, r6, r6, lsl #1
        378514:	00850084 	addeq	r0, r5, r4, lsl #1
        378518:	00840083 	addeq	r0, r4, r3, lsl #1
        37851c:	00820082 	addeq	r0, r2, r2, lsl #1
        378520:	00810081 	addeq	r0, r1, r1, lsl #1
        378524:	0080007f 	addeq	r0, r0, pc, ror r0
        378528:	007f007e 	rsbeqs	r0, pc, lr, ror r0
        37852c:	007d007d 	rsbeqs	r0, sp, sp, ror r0
        378530:	007c007b 	rsbeqs	r0, ip, fp, ror r0
        378534:	007b007a 	rsbeqs	r0, fp, sl, ror r0
        378538:	007a0079 	rsbeqs	r0, sl, r9, ror r0
        37853c:	00780078 	rsbeqs	r0, r8, r8, ror r0
        378540:	00770077 	rsbeqs	r0, r7, r7, ror r0
        378544:	00760075 	rsbeqs	r0, r6, r5, ror r0
        378548:	00750074 	rsbeqs	r0, r5, r4, ror r0
        37854c:	00740073 	rsbeqs	r0, r4, r3, ror r0
        378550:	00730072 	rsbeqs	r0, r3, r2, ror r0
        378554:	00710071 	rsbeqs	r0, r1, r1, ror r0
        378558:	00700070 	rsbeqs	r0, r0, r0, ror r0
        37855c:	006f006f 	rsbeq	r0, pc, pc, rrx
        378560:	006e006d 	rsbeq	r0, lr, sp, rrx
        378564:	006d006c 	rsbeq	r0, sp, ip, rrx
        378568:	006c006b 	rsbeq	r0, ip, fp, rrx
        37856c:	006b006a 	rsbeq	r0, fp, sl, rrx
        378570:	006a0069 	rsbeq	r0, sl, r9, rrx
        378574:	00690068 	rsbeq	r0, r9, r8, rrx
        378578:	00680067 	rsbeq	r0, r8, r7, rrx
        37857c:	00670066 	rsbeq	r0, r7, r6, rrx
        378580:	00660065 	rsbeq	r0, r6, r5, rrx
        378584:	00650064 	rsbeq	r0, r5, r4, rrx
        378588:	00640063 	rsbeq	r0, r4, r3, rrx
        37858c:	00630062 	rsbeq	r0, r3, r2, rrx
        378590:	00620061 	rsbeq	r0, r2, r1, rrx
        378594:	00610060 	rsbeq	r0, r1, r0, rrx
        378598:	0060005f 	rsbeq	r0, r0, pc, asr r0
        37859c:	005f005e 	subeqs	r0, pc, lr, asr r0
        3785a0:	005e005d 	subeqs	r0, lr, sp, asr r0
        3785a4:	005d005c 	subeqs	r0, sp, ip, asr r0
        3785a8:	005c005b 	subeqs	r0, ip, fp, asr r0
        3785ac:	005b005a 	subeqs	r0, fp, sl, asr r0
        3785b0:	005a005a 	subeqs	r0, sl, sl, asr r0
        3785b4:	00590059 	subeqs	r0, r9, r9, asr r0
        3785b8:	00580058 	subeqs	r0, r8, r8, asr r0
        3785bc:	00570057 	subeqs	r0, r7, r7, asr r0
        3785c0:	00560056 	subeqs	r0, r6, r6, asr r0
        3785c4:	00560055 	subeqs	r0, r6, r5, asr r0
        3785c8:	00550054 	subeqs	r0, r5, r4, asr r0
        3785cc:	00540053 	subeqs	r0, r4, r3, asr r0
        3785d0:	00530053 	subeqs	r0, r3, r3, asr r0
        3785d4:	00520052 	subeqs	r0, r2, r2, asr r0
        3785d8:	00510051 	subeqs	r0, r1, r1, asr r0
        3785dc:	00510050 	subeqs	r0, r1, r0, asr r0
        3785e0:	0050004f 	subeqs	r0, r0, pc, asr #32
        3785e4:	004f004f 	subeq	r0, pc, pc, asr #32
        3785e8:	004e004e 	subeq	r0, lr, lr, asr #32
        3785ec:	004d004d 	subeq	r0, sp, sp, asr #32
        3785f0:	004d004c 	subeq	r0, sp, ip, asr #32
        3785f4:	004c004b 	subeq	r0, ip, fp, asr #32
        3785f8:	004b004b 	subeq	r0, fp, fp, asr #32
        3785fc:	004a004a 	subeq	r0, sl, sl, asr #32
        378600:	004a0049 	subeq	r0, sl, r9, asr #32
        378604:	00490048 	subeq	r0, r9, r8, asr #32
        378608:	00480048 	subeq	r0, r8, r8, asr #32
        37860c:	00470047 	subeq	r0, r7, r7, asr #32
        378610:	00470046 	subeq	r0, r7, r6, asr #32
        378614:	00460046 	subeq	r0, r6, r6, asr #32
        378618:	00450045 	subeq	r0, r5, r5, asr #32
        37861c:	00450044 	subeq	r0, r5, r4, asr #32
        378620:	00440044 	subeq	r0, r4, r4, asr #32
        378624:	00430043 	subeq	r0, r3, r3, asr #32
        378628:	00430042 	subeq	r0, r3, r2, asr #32
        37862c:	00420042 	subeq	r0, r2, r2, asr #32
        378630:	00410041 	subeq	r0, r1, r1, asr #32
        378634:	00410040 	subeq	r0, r1, r0, asr #32
        378638:	00400040 	subeq	r0, r0, r0, asr #32
        37863c:	003f003f 	eoreqs	r0, pc, pc, lsr r0
        378640:	003f003e 	eoreqs	r0, pc, lr, lsr r0
        378644:	003e003e 	eoreqs	r0, lr, lr, lsr r0
        378648:	003d003d 	eoreqs	r0, sp, sp, lsr r0
        37864c:	003d003c 	eoreqs	r0, sp, ip, lsr r0
        378650:	003c003c 	eoreqs	r0, ip, ip, lsr r0
        378654:	003c003b 	eoreqs	r0, ip, fp, lsr r0
        378658:	003b003b 	eoreqs	r0, fp, fp, lsr r0
        37865c:	003a003a 	eoreqs	r0, sl, sl, lsr r0
        378660:	003a0039 	eoreqs	r0, sl, r9, lsr r0
        378664:	00390039 	eoreqs	r0, r9, r9, lsr r0
        378668:	00390038 	eoreqs	r0, r9, r8, lsr r0
        37866c:	00380038 	eoreqs	r0, r8, r8, lsr r0
        378670:	00370037 	eoreqs	r0, r7, r7, lsr r0
        378674:	00370037 	eoreqs	r0, r7, r7, lsr r0
        378678:	00360036 	eoreqs	r0, r6, r6, lsr r0
        37867c:	00360036 	eoreqs	r0, r6, r6, lsr r0
        378680:	00350035 	eoreqs	r0, r5, r5, lsr r0
        378684:	00350034 	eoreqs	r0, r5, r4, lsr r0
        378688:	00340034 	eoreqs	r0, r4, r4, lsr r0
        37868c:	00340033 	eoreqs	r0, r4, r3, lsr r0
        378690:	00330033 	eoreqs	r0, r3, r3, lsr r0
        378694:	00330032 	eoreqs	r0, r3, r2, lsr r0
        378698:	00320032 	eoreqs	r0, r2, r2, lsr r0
        37869c:	00320031 	eoreqs	r0, r2, r1, lsr r0
        3786a0:	00310031 	eoreqs	r0, r1, r1, lsr r0
        3786a4:	00310030 	eoreqs	r0, r1, r0, lsr r0
        3786a8:	00300030 	eoreqs	r0, r0, r0, lsr r0
        3786ac:	0030002f 	eoreqs	r0, r0, pc, lsr #32
        3786b0:	002f002f 	eoreq	r0, pc, pc, lsr #32
        3786b4:	002f002f 	eoreq	r0, pc, pc, lsr #32
        3786b8:	002e002e 	eoreq	r0, lr, lr, lsr #32
        3786bc:	002e002e 	eoreq	r0, lr, lr, lsr #32
        3786c0:	002d002d 	eoreq	r0, sp, sp, lsr #32
        3786c4:	002d002d 	eoreq	r0, sp, sp, lsr #32
        3786c8:	002c002c 	eoreq	r0, ip, ip, lsr #32
        3786cc:	002c002c 	eoreq	r0, ip, ip, lsr #32
        3786d0:	002c002b 	eoreq	r0, ip, fp, lsr #32
        3786d4:	002b002b 	eoreq	r0, fp, fp, lsr #32
        3786d8:	002b002a 	eoreq	r0, fp, sl, lsr #32
        3786dc:	002a002a 	eoreq	r0, sl, sl, lsr #32
        3786e0:	002a002a 	eoreq	r0, sl, sl, lsr #32
        3786e4:	00290029 	eoreq	r0, r9, r9, lsr #32
        3786e8:	00290029 	eoreq	r0, r9, r9, lsr #32
        3786ec:	00290028 	eoreq	r0, r9, r8, lsr #32
        3786f0:	00280028 	eoreq	r0, r8, r8, lsr #32
        3786f4:	00280028 	eoreq	r0, r8, r8, lsr #32
        3786f8:	00270027 	eoreq	r0, r7, r7, lsr #32
        3786fc:	00270027 	eoreq	r0, r7, r7, lsr #32
        378700:	00270026 	eoreq	r0, r7, r6, lsr #32
        378704:	00260026 	eoreq	r0, r6, r6, lsr #32
        378708:	00260026 	eoreq	r0, r6, r6, lsr #32
        37870c:	00250025 	eoreq	r0, r5, r5, lsr #32
        378710:	00250025 	eoreq	r0, r5, r5, lsr #32
        378714:	00250024 	eoreq	r0, r5, r4, lsr #32
        378718:	00240024 	eoreq	r0, r4, r4, lsr #32
        37871c:	00240024 	eoreq	r0, r4, r4, lsr #32
        378720:	00240023 	eoreq	r0, r4, r3, lsr #32
        378724:	00230023 	eoreq	r0, r3, r3, lsr #32
        378728:	00230023 	eoreq	r0, r3, r3, lsr #32
        37872c:	00220022 	eoreq	r0, r2, r2, lsr #32
        378730:	00220022 	eoreq	r0, r2, r2, lsr #32
        378734:	00220022 	eoreq	r0, r2, r2, lsr #32
        378738:	00210021 	eoreq	r0, r1, r1, lsr #32
        37873c:	00210021 	eoreq	r0, r1, r1, lsr #32
        378740:	00210021 	eoreq	r0, r1, r1, lsr #32
        378744:	00200020 	eoreq	r0, r0, r0, lsr #32
        378748:	00200020 	eoreq	r0, r0, r0, lsr #32
        37874c:	00200020 	eoreq	r0, r0, r0, lsr #32
        378750:	001f001f 	andeqs	r0, pc, pc, lsl r0
        378754:	001f001f 	andeqs	r0, pc, pc, lsl r0
        378758:	001f001f 	andeqs	r0, pc, pc, lsl r0
        37875c:	001f001e 	andeqs	r0, pc, lr, lsl r0
        378760:	001e001e 	andeqs	r0, lr, lr, lsl r0
        378764:	001e001e 	andeqs	r0, lr, lr, lsl r0
        378768:	001e001d 	andeqs	r0, lr, sp, lsl r0
        37876c:	001d001d 	andeqs	r0, sp, sp, lsl r0
        378770:	001d001d 	andeqs	r0, sp, sp, lsl r0
        378774:	001d001d 	andeqs	r0, sp, sp, lsl r0
        378778:	001c001c 	andeqs	r0, ip, ip, lsl r0
        37877c:	001c001c 	andeqs	r0, ip, ip, lsl r0
        378780:	001c001c 	andeqs	r0, ip, ip, lsl r0
        378784:	001c001b 	andeqs	r0, ip, fp, lsl r0
        378788:	001b001b 	andeqs	r0, fp, fp, lsl r0
        37878c:	001b001b 	andeqs	r0, fp, fp, lsl r0
        378790:	001b001b 	andeqs	r0, fp, fp, lsl r0
        378794:	001a001a 	andeqs	r0, sl, sl, lsl r0
        378798:	001a001a 	andeqs	r0, sl, sl, lsl r0
        37879c:	001a001a 	andeqs	r0, sl, sl, lsl r0
        3787a0:	001a001a 	andeqs	r0, sl, sl, lsl r0
        3787a4:	00190019 	andeqs	r0, r9, r9, lsl r0
        3787a8:	00190019 	andeqs	r0, r9, r9, lsl r0
        3787ac:	00190019 	andeqs	r0, r9, r9, lsl r0
        3787b0:	00190019 	andeqs	r0, r9, r9, lsl r0
        3787b4:	00180018 	andeqs	r0, r8, r8, lsl r0
        3787b8:	00180018 	andeqs	r0, r8, r8, lsl r0
        3787bc:	00180018 	andeqs	r0, r8, r8, lsl r0
        3787c0:	00180018 	andeqs	r0, r8, r8, lsl r0
        3787c4:	00170017 	andeqs	r0, r7, r7, lsl r0
        3787c8:	00170017 	andeqs	r0, r7, r7, lsl r0
        3787cc:	00170017 	andeqs	r0, r7, r7, lsl r0
        3787d0:	00170017 	andeqs	r0, r7, r7, lsl r0
        3787d4:	00160016 	andeqs	r0, r6, r6, lsl r0
        3787d8:	00160016 	andeqs	r0, r6, r6, lsl r0
        3787dc:	00160016 	andeqs	r0, r6, r6, lsl r0
        3787e0:	00160016 	andeqs	r0, r6, r6, lsl r0
        3787e4:	00160015 	andeqs	r0, r6, r5, lsl r0
        3787e8:	00150015 	andeqs	r0, r5, r5, lsl r0
        3787ec:	00150015 	andeqs	r0, r5, r5, lsl r0
        3787f0:	00150015 	andeqs	r0, r5, r5, lsl r0
        3787f4:	00150015 	andeqs	r0, r5, r5, lsl r0
        3787f8:	00150014 	andeqs	r0, r5, r4, lsl r0
        3787fc:	00140014 	andeqs	r0, r4, r4, lsl r0
        378800:	00140014 	andeqs	r0, r4, r4, lsl r0
        378804:	00140014 	andeqs	r0, r4, r4, lsl r0
        378808:	00140014 	andeqs	r0, r4, r4, lsl r0
        37880c:	00130013 	andeqs	r0, r3, r3, lsl r0
        378810:	00130013 	andeqs	r0, r3, r3, lsl r0
        378814:	00130013 	andeqs	r0, r3, r3, lsl r0
        378818:	00130013 	andeqs	r0, r3, r3, lsl r0
        37881c:	00130013 	andeqs	r0, r3, r3, lsl r0
        378820:	00130012 	andeqs	r0, r3, r2, lsl r0
        378824:	00120012 	andeqs	r0, r2, r2, lsl r0
        378828:	00120012 	andeqs	r0, r2, r2, lsl r0
        37882c:	00120012 	andeqs	r0, r2, r2, lsl r0
        378830:	00120012 	andeqs	r0, r2, r2, lsl r0
        378834:	00120011 	andeqs	r0, r2, r1, lsl r0
        378838:	00110011 	andeqs	r0, r1, r1, lsl r0
        37883c:	00110011 	andeqs	r0, r1, r1, lsl r0
        378840:	00110011 	andeqs	r0, r1, r1, lsl r0
        378844:	00110011 	andeqs	r0, r1, r1, lsl r0
        378848:	00110011 	andeqs	r0, r1, r1, lsl r0
        37884c:	00110010 	andeqs	r0, r1, r0, lsl r0
        378850:	00100010 	andeqs	r0, r0, r0, lsl r0
        378854:	00100010 	andeqs	r0, r0, r0, lsl r0
        378858:	00100010 	andeqs	r0, r0, r0, lsl r0
        37885c:	00100010 	andeqs	r0, r0, r0, lsl r0
        378860:	00100010 	andeqs	r0, r0, r0, lsl r0
        378864:	0010000f 	andeqs	r0, r0, pc
        378868:	000f000f 	andeq	r0, pc, pc
        37886c:	000f000f 	andeq	r0, pc, pc
        378870:	000f000f 	andeq	r0, pc, pc
        378874:	000f000f 	andeq	r0, pc, pc
        378878:	000f000f 	andeq	r0, pc, pc
        37887c:	000f000f 	andeq	r0, pc, pc
        378880:	000e000e 	andeq	r0, lr, lr
        378884:	000e000e 	andeq	r0, lr, lr
        378888:	000e000e 	andeq	r0, lr, lr
        37888c:	000e000e 	andeq	r0, lr, lr
        378890:	000e000e 	andeq	r0, lr, lr
        378894:	000e000e 	andeq	r0, lr, lr
        378898:	000e000e 	andeq	r0, lr, lr
        37889c:	000d000d 	andeq	r0, sp, sp
        3788a0:	000d000d 	andeq	r0, sp, sp
        3788a4:	000d000d 	andeq	r0, sp, sp
        3788a8:	000d000d 	andeq	r0, sp, sp
        3788ac:	000d000d 	andeq	r0, sp, sp
        3788b0:	000d000d 	andeq	r0, sp, sp
        3788b4:	000d000d 	andeq	r0, sp, sp
        3788b8:	000d000c 	andeq	r0, sp, ip
        3788bc:	000c000c 	andeq	r0, ip, ip
        3788c0:	000c000c 	andeq	r0, ip, ip
        3788c4:	000c000c 	andeq	r0, ip, ip
        3788c8:	000c000c 	andeq	r0, ip, ip
        3788cc:	000c000c 	andeq	r0, ip, ip
        3788d0:	000c000c 	andeq	r0, ip, ip
        3788d4:	000c000c 	andeq	r0, ip, ip
        3788d8:	000c000b 	andeq	r0, ip, fp
        3788dc:	000b000b 	andeq	r0, fp, fp
        3788e0:	000b000b 	andeq	r0, fp, fp
        3788e4:	000b000b 	andeq	r0, fp, fp
        3788e8:	000b000b 	andeq	r0, fp, fp
        3788ec:	000b000b 	andeq	r0, fp, fp
        3788f0:	000b000b 	andeq	r0, fp, fp
        3788f4:	000b000b 	andeq	r0, fp, fp
        3788f8:	000b000b 	andeq	r0, fp, fp
        3788fc:	000a000a 	andeq	r0, sl, sl
        378900:	000a000a 	andeq	r0, sl, sl
        378904:	000a000a 	andeq	r0, sl, sl
        378908:	000a000a 	andeq	r0, sl, sl
        37890c:	000a000a 	andeq	r0, sl, sl
        378910:	000a000a 	andeq	r0, sl, sl
        378914:	000a000a 	andeq	r0, sl, sl
        378918:	000a000a 	andeq	r0, sl, sl
        37891c:	000a000a 	andeq	r0, sl, sl
        378920:	000a0009 	andeq	r0, sl, r9
        378924:	00090009 	andeq	r0, r9, r9
        378928:	00090009 	andeq	r0, r9, r9
        37892c:	00090009 	andeq	r0, r9, r9
        378930:	00090009 	andeq	r0, r9, r9
        378934:	00090009 	andeq	r0, r9, r9
        378938:	00090009 	andeq	r0, r9, r9
        37893c:	00090009 	andeq	r0, r9, r9
        378940:	00090009 	andeq	r0, r9, r9
        378944:	00090009 	andeq	r0, r9, r9
        378948:	00090009 	andeq	r0, r9, r9
        37894c:	00080008 	andeq	r0, r8, r8
        378950:	00080008 	andeq	r0, r8, r8
        378954:	00080008 	andeq	r0, r8, r8
        378958:	00080008 	andeq	r0, r8, r8
        37895c:	00080008 	andeq	r0, r8, r8
        378960:	00080008 	andeq	r0, r8, r8
        378964:	00080008 	andeq	r0, r8, r8
        378968:	00080008 	andeq	r0, r8, r8
        37896c:	00080008 	andeq	r0, r8, r8
        378970:	00080008 	andeq	r0, r8, r8
        378974:	00080008 	andeq	r0, r8, r8
        378978:	00080008 	andeq	r0, r8, r8
        37897c:	00070007 	andeq	r0, r7, r7
        378980:	00070007 	andeq	r0, r7, r7
        378984:	00070007 	andeq	r0, r7, r7
        378988:	00070007 	andeq	r0, r7, r7
        37898c:	00070007 	andeq	r0, r7, r7
        378990:	00070007 	andeq	r0, r7, r7
        378994:	00070007 	andeq	r0, r7, r7
        378998:	00070007 	andeq	r0, r7, r7
        37899c:	00070007 	andeq	r0, r7, r7
        3789a0:	00070007 	andeq	r0, r7, r7
        3789a4:	00070007 	andeq	r0, r7, r7
        3789a8:	00070007 	andeq	r0, r7, r7
        3789ac:	00070007 	andeq	r0, r7, r7
        3789b0:	00060006 	andeq	r0, r6, r6
        3789b4:	00060006 	andeq	r0, r6, r6
        3789b8:	00060006 	andeq	r0, r6, r6
        3789bc:	00060006 	andeq	r0, r6, r6
        3789c0:	00060006 	andeq	r0, r6, r6
        3789c4:	00060006 	andeq	r0, r6, r6
        3789c8:	00060006 	andeq	r0, r6, r6
        3789cc:	00060006 	andeq	r0, r6, r6
        3789d0:	00060006 	andeq	r0, r6, r6
        3789d4:	00060006 	andeq	r0, r6, r6
        3789d8:	00060006 	andeq	r0, r6, r6
        3789dc:	00060006 	andeq	r0, r6, r6
        3789e0:	00060006 	andeq	r0, r6, r6
        3789e4:	00060006 	andeq	r0, r6, r6
        3789e8:	00060006 	andeq	r0, r6, r6
        3789ec:	00060005 	andeq	r0, r6, r5
        3789f0:	00050005 	andeq	r0, r5, r5
        3789f4:	00050005 	andeq	r0, r5, r5
        3789f8:	00050005 	andeq	r0, r5, r5
        3789fc:	00050005 	andeq	r0, r5, r5
        378a00:	00050005 	andeq	r0, r5, r5
        378a04:	00050005 	andeq	r0, r5, r5
        378a08:	00050005 	andeq	r0, r5, r5
        378a0c:	00050005 	andeq	r0, r5, r5
        378a10:	00050005 	andeq	r0, r5, r5
        378a14:	00050005 	andeq	r0, r5, r5
        378a18:	00050005 	andeq	r0, r5, r5
        378a1c:	00050005 	andeq	r0, r5, r5
        378a20:	00050005 	andeq	r0, r5, r5
        378a24:	00050005 	andeq	r0, r5, r5
        378a28:	00050005 	andeq	r0, r5, r5
        378a2c:	00050005 	andeq	r0, r5, r5
        378a30:	00050005 	andeq	r0, r5, r5
        378a34:	00050005 	andeq	r0, r5, r5
        378a38:	00040004 	andeq	r0, r4, r4
        378a3c:	00040004 	andeq	r0, r4, r4
        378a40:	00040004 	andeq	r0, r4, r4
        378a44:	00040004 	andeq	r0, r4, r4
        378a48:	00040004 	andeq	r0, r4, r4
        378a4c:	00040004 	andeq	r0, r4, r4
        378a50:	00040004 	andeq	r0, r4, r4
        378a54:	00040004 	andeq	r0, r4, r4
        378a58:	00040004 	andeq	r0, r4, r4
        378a5c:	00040004 	andeq	r0, r4, r4
        378a60:	00040004 	andeq	r0, r4, r4
        378a64:	00040004 	andeq	r0, r4, r4
        378a68:	00040004 	andeq	r0, r4, r4
        378a6c:	00040004 	andeq	r0, r4, r4
        378a70:	00040004 	andeq	r0, r4, r4
        378a74:	00040004 	andeq	r0, r4, r4
        378a78:	00040004 	andeq	r0, r4, r4
        378a7c:	00040004 	andeq	r0, r4, r4
        378a80:	00040004 	andeq	r0, r4, r4
        378a84:	00040004 	andeq	r0, r4, r4
        378a88:	00040004 	andeq	r0, r4, r4
        378a8c:	00040004 	andeq	r0, r4, r4
        378a90:	00030003 	andeq	r0, r3, r3
        378a94:	00030003 	andeq	r0, r3, r3
        378a98:	00030003 	andeq	r0, r3, r3
        378a9c:	00030003 	andeq	r0, r3, r3
        378aa0:	00030003 	andeq	r0, r3, r3
        378aa4:	00030003 	andeq	r0, r3, r3
        378aa8:	00030003 	andeq	r0, r3, r3
        378aac:	00030003 	andeq	r0, r3, r3
        378ab0:	00030003 	andeq	r0, r3, r3
        378ab4:	00030003 	andeq	r0, r3, r3
        378ab8:	00030003 	andeq	r0, r3, r3
        378abc:	00030003 	andeq	r0, r3, r3
        378ac0:	00030003 	andeq	r0, r3, r3
        378ac4:	00030003 	andeq	r0, r3, r3
        378ac8:	00030003 	andeq	r0, r3, r3
        378acc:	00030003 	andeq	r0, r3, r3
        378ad0:	00030003 	andeq	r0, r3, r3
        378ad4:	00030003 	andeq	r0, r3, r3
        378ad8:	00030003 	andeq	r0, r3, r3
        378adc:	00030003 	andeq	r0, r3, r3
        378ae0:	00030003 	andeq	r0, r3, r3
        378ae4:	00030003 	andeq	r0, r3, r3
        378ae8:	00030003 	andeq	r0, r3, r3
        378aec:	00030003 	andeq	r0, r3, r3
        378af0:	00030003 	andeq	r0, r3, r3
        378af4:	00030003 	andeq	r0, r3, r3
        378af8:	00030003 	andeq	r0, r3, r3
        378afc:	00030003 	andeq	r0, r3, r3
        378b00:	00030003 	andeq	r0, r3, r3
        378b04:	00020002 	andeq	r0, r2, r2
        378b08:	00020002 	andeq	r0, r2, r2
        378b0c:	00020002 	andeq	r0, r2, r2
        378b10:	00020002 	andeq	r0, r2, r2
        378b14:	00020002 	andeq	r0, r2, r2
        378b18:	00020002 	andeq	r0, r2, r2
        378b1c:	00020002 	andeq	r0, r2, r2
        378b20:	00020002 	andeq	r0, r2, r2
        378b24:	00020002 	andeq	r0, r2, r2
        378b28:	00020002 	andeq	r0, r2, r2
        378b2c:	00020002 	andeq	r0, r2, r2
        378b30:	00020002 	andeq	r0, r2, r2
        378b34:	00020002 	andeq	r0, r2, r2
        378b38:	00020002 	andeq	r0, r2, r2
        378b3c:	00020002 	andeq	r0, r2, r2
        378b40:	00020002 	andeq	r0, r2, r2
        378b44:	00020002 	andeq	r0, r2, r2
        378b48:	00020002 	andeq	r0, r2, r2
        378b4c:	00020002 	andeq	r0, r2, r2
        378b50:	00020002 	andeq	r0, r2, r2
        378b54:	00020002 	andeq	r0, r2, r2
        378b58:	00020002 	andeq	r0, r2, r2
        378b5c:	00020002 	andeq	r0, r2, r2
        378b60:	00020002 	andeq	r0, r2, r2
        378b64:	00020002 	andeq	r0, r2, r2
        378b68:	00020002 	andeq	r0, r2, r2
        378b6c:	00020002 	andeq	r0, r2, r2
        378b70:	00020002 	andeq	r0, r2, r2
        378b74:	00020002 	andeq	r0, r2, r2
        378b78:	00020002 	andeq	r0, r2, r2
        378b7c:	00020002 	andeq	r0, r2, r2
        378b80:	00020002 	andeq	r0, r2, r2
        378b84:	00020002 	andeq	r0, r2, r2
        378b88:	00020002 	andeq	r0, r2, r2
        378b8c:	00020002 	andeq	r0, r2, r2
        378b90:	00020002 	andeq	r0, r2, r2
        378b94:	00020002 	andeq	r0, r2, r2
        378b98:	00020002 	andeq	r0, r2, r2
        378b9c:	00020002 	andeq	r0, r2, r2
        378ba0:	00020002 	andeq	r0, r2, r2
        378ba4:	00020001 	andeq	r0, r2, r1
        378ba8:	00010001 	andeq	r0, r1, r1
        378bac:	00010001 	andeq	r0, r1, r1
        378bb0:	00010001 	andeq	r0, r1, r1
        378bb4:	00010001 	andeq	r0, r1, r1
        378bb8:	00010001 	andeq	r0, r1, r1
        378bbc:	00010001 	andeq	r0, r1, r1
        378bc0:	00010001 	andeq	r0, r1, r1
        378bc4:	00010001 	andeq	r0, r1, r1
        378bc8:	00010001 	andeq	r0, r1, r1
        378bcc:	00010001 	andeq	r0, r1, r1
        378bd0:	00010001 	andeq	r0, r1, r1
        378bd4:	00010001 	andeq	r0, r1, r1
        378bd8:	00010001 	andeq	r0, r1, r1
        378bdc:	00010001 	andeq	r0, r1, r1
        378be0:	00000000 	andeq	r0, r0, r0
        378be4:	00c80000 	sbceq	r0, r8, r0
        378be8:	00c80000 	sbceq	r0, r8, r0
        378bec:	08020672 	stmeqda	r2, {r1, r4, r5, r6, r9, sl}
        378bf0:	00c80000 	sbceq	r0, r8, r0
        378bf4:	00640000 	rsbeq	r0, r4, r0
        378bf8:	04010672 	streq	r0, [r1], -#1650
        378bfc:	00c80000 	sbceq	r0, r8, r0
        378c00:	00c80000 	sbceq	r0, r8, r0
        378c04:	088c063c 	stmeqia	ip, {r2, r3, r4, r5, r9, sl}
        378c08:	00c80000 	sbceq	r0, r8, r0
        378c0c:	00640000 	rsbeq	r0, r4, r0
        378c10:	0446063c 	streqb	r0, [r6], -#1596
        378c14:	00000019 	andeq	r0, r0, r9, lsl r0
        378c18:	00000019 	andeq	r0, r0, r9, lsl r0
        378c1c:	01010000 	tsteq	r1, r0
    */
}

/**
 * Symbol: exRefException
 * Address: 00380880
 */
void globals::exRefException() {
    /*
        380880:	002f56fc 	streqd	r5, [pc], -ip
        380884:	bfe2788c 	swilt	0x00e2788c
        380888:	fc6fb619 	stc2l	6, cr11, [pc], -#100
        38088c:	4013c7eb 	andmis	ip, r3, fp, ror #15
        380890:	c72ccf1b 	undefined
        380894:	406939f5 	strmid	r3, [r9], -#149
        380898:	dbe7cf07 	blle	ffd744bc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe163c64>
        38089c:	40a1e5ad 	adcmi	lr, r1, sp, lsr #11
        3808a0:	3f55b6e9 	swicc	0x0055b6e9
        3808a4:	40c61bd6 	ldrmid	r1, [r6], #182
        3808a8:	0607c998 	undefined
        3808ac:	40dbe34f 	sbcmis	lr, fp, pc, asr #6
        3808b0:	c44ef5f9 	strgtb	pc, [lr], -#1529
        3808b4:	40e2ca9e 	smlalmi	ip, r2, lr, sl
        3808b8:	cb08bbcc 	blgt	5af7f0 <SYMtimeoutoptionslider+0x254>
        3808bc:	40d9c25f 	sbcmis	ip, r9, pc, asr r2
        3808c0:	395d45ec 	ldmccdb	sp, {r2, r3, r5, r6, r7, r8, sl, lr}^
        3808c4:	40bc39d0 	ldrmisb	r3, [ip], r0
        3808c8:	60f94058 	rscvss	r4, r9, r8, asr r0
        3808cc:	4050dedb 	ldrmisb	sp, [r0], -#235
        3808d0:	24ed0759 	strcsbt	r0, [sp], #1881
        3808d4:	40916554 	addmis	r6, r1, r4, asr r5
        3808d8:	5f0e2840 	swipl	0x000e2840
        3808dc:	40be3ac1 	adcmis	r3, lr, r1, asr #21
        3808e0:	ce7bbabf 	mrcgt	10, 3, fp, cr11, cr15, {5}
        3808e4:	40dafdf7 	ldrmish	pc, [sl], #215
        3808e8:	ba452eab 	blt	14cc39c <ROM$$Size+0xdac750>
        3808ec:	40eada23 	rscmi	sp, sl, r3, lsr #20
        3808f0:	44181374 	ldrmi	r1, [r8], -#884
        3808f4:	40ee1567 	rscmi	r1, lr, r7, ror #10
        3808f8:	18fdb2a1 	ldmneia	sp!, {r0, r5, r7, r9, ip, sp, pc}^
        3808fc:	40e1bfe8 	rscmi	fp, r1, r8, ror #31
        380900:	d44bbc1a 	strleb	fp, [fp], -#3098
        380904:	40c128c4 	sbcmi	r2, r1, r4, asr #17
        380908:	a58edcfc 	strge	sp, [lr, #3324]
        38090c:	3fdb0ee6 	swicc	0x00db0ee6
        380910:	072093ce 	streq	r9, [r0, -lr, asr #7]!
        380914:	4013e5ff 	ldrmish	lr, [r3], -pc
        380918:	995c9307 	ldmlsdb	ip, {r0, r1, r2, r8, r9, ip, pc}^
        38091c:	4080f34f 	addmi	pc, r0, pc, asr #6
        380920:	95d372b4 	ldrlsb	r7, [r3, #692]
        380924:	40ce4978 	sbcmi	r4, lr, r8, ror r9
        380928:	25ad1596 	strcs	r1, [sp, #1430]!
        38092c:	41068eca 	smlabtmi	r6, sl, lr, r8
        380930:	52d49963 	sbcpls	r9, r4, #1622016	; 0x18c000
        380934:	41309acc 	teqmi	r0, ip, asr #21
        380938:	c4fbe8bf 	ldrgtbt	lr, [fp], #2239
        38093c:	414977d4 	ldrmid	r7, [r9, -#116]
        380940:	7be6ffbe 	blvc	ffd40840 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe12ffe8>
        380944:	41537af9 	ldrmish	r7, [r3, -#169]
        380948:	6b738bb6 	blvs	2063828 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x452fd0>
        38094c:	4147741e 	cmpmi	r7, lr, lsl r4
        380950:	870557ad 	strhi	r5, [r5, -sp, lsr #15]
        380954:	4066e10d 	rsbmi	lr, r6, sp, lsl #2
        380958:	0656f583 	ldreqb	pc, [r6], -r3, lsl #11
        38095c:	40be550c 	adcmis	r5, lr, ip, lsl #10
        380960:	a054894b 	subges	r8, r4, fp, asr #18
        380964:	41004233 	tstmi	r0, r3, lsr r2
        380968:	0ff7aaef 	swieq	0x00f7aaef
        38096c:	41315841 	teqmi	r1, r1, asr #16
        380970:	d2422817 	suble	r2, r2, #1507328	; 0x170000
        380974:	4154187f 	cmpmi	r4, pc, ror r8
        380978:	07841a73 	undefined
        38097c:	4169afb0 	strmih	sl, [r9, -#240]!
        380980:	d1612a5b 	cmnle	r1, fp, asr sl
        380984:	41710062 	cmnmi	r1, r2, rrx
        380988:	54db4526 	ldrplb	r4, [fp], #1318
        38098c:	41622ed4 	ldrmid	r2, [r2, -#228]!
        380990:	f2f06392 	rscnvs	r6, r0, #1207959554	; 0x48000002
        380994:	3ffcab0b 	swicc	0x00fcab0b
        380998:	fa2a2002 	blx	e089a8 <ROM$$Size+0x6e8d5c>
        38099c:	40cccc82 	sbcmi	ip, ip, r2, lsl #25
        3809a0:	c5c64704 	strgtb	r4, [r6, #1796]
        3809a4:	414283de 	ldrmid	r8, [r2, -#62]
        3809a8:	af4b5720 	swige	0x004b5720
        3809ac:	419cf647 	orrmis	pc, ip, r7, asr #12
        3809b0:	959e37b1 	ldrls	r3, [lr, #1969]
        3809b4:	41e3d818 	mvnmi	sp, r8, lsl r8
        3809b8:	203430f7 	ldrcssh	r3, [r4], -r7
        3809bc:	421b6268 	andmis	r6, fp, #-2147483642	; 0x80000006
        3809c0:	e3f961d5 	mvns	r6, #1073741877	; 0x40000035
        3809c4:	4243d256 	submi	sp, r3, #1610612741	; 0x60000005
        3809c8:	dde8451b 	stclel	5, cr4, [r8, #108]!
        3809cc:	425cac7f 	submis	sl, ip, #32512	; 0x7f00
        3809d0:	dc026f8f 	stcle	15, cr6, [r2], -#572
        3809d4:	426050fb 	rsbmi	r5, r0, #251	; 0xfb
        3809d8:	ae6acca5 	cdpge	12, 6, cr12, cr10, cr5, {5}
        3809dc:	40a5050f 	adcmi	r0, r5, pc, lsl #10
        3809e0:	73363548 	teqvc	r6, #301989888	; 0x12000000
        3809e4:	41238339 	teqmi	r3, r9, lsr r3
        3809e8:	21800acc 	orrcs	r0, r0, ip, asr #21
        3809ec:	4183b856 	orrmi	fp, r3, r6, asr r8
        3809f0:	fa6b57f8 	blx	1e569d8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x246180>
        3809f4:	41d0b3c9 	bicmis	fp, r0, r9, asr #7
        3809f8:	ab676ef8 	blge	1d5c5e0 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x14bd88>
        3809fc:	420bba43 	andmi	fp, fp, #274432	; 0x43000
        380a00:	6e364e1b 	mrcvs	14, 1, r4, cr6, cr11, {0}
        380a04:	4237ac9f 	eormis	sl, r7, #40704	; 0x9f00
        380a08:	24e33e6b 	strcsbt	r3, [r3], #3691
        380a0c:	4253e46f 	submis	lr, r3, #1862270976	; 0x6f000000
        380a10:	c45daf37 	ldrgtb	sl, [sp], -#3895
        380a14:	4259fa9f 	submis	pc, r9, #651264	; 0x9f000
        380a18:	bbbd7e2a 	bllt	ff2e02c8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfd6cfa70>
        380a1c:	bf5f4cfb 	swilt	0x005f4cfb
        380a20:	b56b5ff7 	strltb	r5, [fp, -#4087]!
        380a24:	3f4b94ce 	swicc	0x004b94ce
        380a28:	c9f537d1 	ldmgtib	r5!, {r0, r4, r6, r7, r8, r9, sl, ip, sp}^
        380a2c:	bf438137 	swilt	0x00438137
        380a30:	da5dd682 	ble	1af6440 <TFlashTracker::$Deinit(void)+0x944>
        380a34:	3f4a01a0 	swicc	0x004a01a0
        380a38:	19ec73cf 	stmneib	ip!, {r0, r1, r2, r3, r6, r7, r8, r9, ip, sp, lr}^
        380a3c:	bf66c16c 	swilt	0x0066c16c
        380a40:	16c16b39 	undefined
        380a44:	3fb55555 	swicc	0x00b55555
        380a48:	55555555 	ldrplb	r5, [r5, -#1365]
        380a4c:	3f7761ac 	swicc	0x007761ac
        380a50:	88ec07d7 	stmhiia	ip!, {r0, r1, r2, r4, r6, r7, r8, r9, sl}^
        380a54:	3fed67f1 	swicc	0x00ed67f1
        380a58:	c864beb5 	stmgtda	r4!, {r0, r2, r4, r5, r7, r9, sl, fp, ip, sp, pc}^
        380a5c:	7f573d8e 	swivc	0x00573d8e
        380a60:	39b3a267 	ldmccib	r3!, {r0, r1, r2, r5, r6, r9, sp, pc}
        380a64:	4fc8df46 	swimi	0x00c8df46
        380a68:	3bf3cc38 	blcc	73b50 <TContainerView::DeleteHilited(RefVar const &)+0xb4>
        380a6c:	3caffe5a 	stccc	14, cr15, [pc], #360
        380a70:	b7e8ad5e 	undefined
        380a74:	3fe5c000 	swicc	0x00e5c000
        380a78:	00000000 	andeq	r0, r0, r0
        380a7c:	7ff00000 	swivc	0x00f00000	; IMB
        380a80:	00000000 	andeq	r0, r0, r0
        380a84:	fff00000 	swinv	0x00f00000	; IMB
        380a88:	00000000 	andeq	r0, r0, r0
        380a8c:	7ff80000 	swivc	0x00f80000
        380a90:	40000000 	andmi	r0, r0, r0
    */
}

/**
 * Symbol: ExitToShell
 * Address: 0038ce74
 */
void globals::ExitToShell() {
    /*
        38ce74:	e6000110 	undefined
    */
}

