#include "include/TXHilite.h"

/**
 * Symbol: TXHilite::__ct(void)
 * Address: 0023b124
 */
TXHilite::TXHilite(void) {
    /*
        23b124:	e1a0c00d 	mov	ip, sp
        23b128:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23b12c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23b130:	e1b04000 	movs	r4, r0
        23b134:	1a000003 	bne	23b148 <TXHilite::__ct(void)+0x24>
        23b138:	e3a00048 	mov	r0, #72	; 0x48
        23b13c:	eb664d7d 	bl	1bce738 <$__nw(unsigned int)>
        23b140:	e1b04000 	movs	r4, r0
        23b144:	0a000019 	beq	23b1b0 <TXHilite::__ct(void)+0x8c>
        23b148:	e59f0068 	ldr	r0, [pc, #68]	; 23b1b8 <TXHilite::__ct(void)+0x94>	; fField68
        23b14c:	e5840000 	str	r0, [r4]
        23b150:	e3a00002 	mov	r0, #2	; 0x2
        23b154:	e5c40019 	strb	r0, [r4, #25]	; fField25
        23b158:	e3a05000 	mov	r5, #0	; 0x0
        23b15c:	e5c4501a 	strb	r5, [r4, #26]	; fField26
        23b160:	e584501c 	str	r5, [r4, #28]	; fField28
        23b164:	eb658739 	bl	1b9ce50 <$TXCurrentTicks(void)>
        23b168:	e5840010 	str	r0, [r4, #16]	; fField16
        23b16c:	e584500c 	str	r5, [r4, #12]	; fField12
        23b170:	e5c45015 	strb	r5, [r4, #21]
        23b174:	e5c45014 	strb	r5, [r4, #20]	; fField20
        23b178:	e5c45017 	strb	r5, [r4, #23]
        23b17c:	e5c45016 	strb	r5, [r4, #22]	; fField22
        23b180:	e3a00001 	mov	r0, #1	; 0x1
        23b184:	e5c40018 	strb	r0, [r4, #24]	; fField24
        23b188:	e5845034 	str	r5, [r4, #52]	; fField52
        23b18c:	e5c45038 	strb	r5, [r4, #56]	; fField56
        23b190:	e284003c 	add	r0, r4, #60	; 0x3c
        23b194:	e2841034 	add	r1, r4, #52	; 0x34
        23b198:	e8915000 	ldmia	r1, {ip, lr}
        23b19c:	e8805000 	stmia	r0, {ip, lr}
        23b1a0:	e3e00000 	mvn	r0, #0	; 0x0
        23b1a4:	e5840020 	str	r0, [r4, #32]	; fField32
        23b1a8:	e5840044 	str	r0, [r4, #68]	; fField68
        23b1ac:	e5c4501b 	strb	r5, [r4, #27]	; fField27
        23b1b0:	e1a00004 	mov	r0, r4
        23b1b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        23b1b8:	00020604 	andeq	r0, r2, r4, lsl #12
    */
}

/**
 * Symbol: TXHilite::SetHandlers(Textension *, TXDisplay *)
 * Address: 0023b1bc
 */
TXHilite::SetHandlers(Textension *, TXDisplay *) {
    /*
        23b1bc:	e9a00006 	stmib	r0!, {r1, r2}
        23b1c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXHilite::CalcCountClicks(Point, long, long)
 * Address: 0023b1c4
 */
TXHilite::CalcCountClicks(Point, long, long) {
    /*
        23b1c4:	e1a0c00d 	mov	ip, sp
        23b1c8:	e92dd80f 	stmdb	sp!, {r0, r1, r2, r3, fp, ip, lr, pc}
        23b1cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23b1d0:	e5901010 	ldr	r1, [r0, #16]	; fField16
        23b1d4:	e0421001 	sub	r1, r2, r1
        23b1d8:	e1510003 	cmp	r1, r3
        23b1dc:	ca000016 	bgt	23b23c <TXHilite::CalcCountClicks(Point, long, long)+0x78>
        23b1e0:	e51b1018 	ldr	r1, [fp, -#24]	; fField24
        23b1e4:	e5902016 	ldr	r2, [r0, #22]	; fField22
        23b1e8:	e1a02822 	mov	r2, r2, lsr #16
        23b1ec:	e0411002 	sub	r1, r1, r2
        23b1f0:	e1a01801 	mov	r1, r1, lsl #16
        23b1f4:	e1b01841 	movs	r1, r1, asr #16
        23b1f8:	42611000 	rsbmi	r1, r1, #0	; 0x0
        23b1fc:	e1a01801 	mov	r1, r1, lsl #16
        23b200:	e3510801 	cmp	r1, #65536	; 0x10000
        23b204:	ca00000c 	bgt	23b23c <TXHilite::CalcCountClicks(Point, long, long)+0x78>
        23b208:	e5902014 	ldr	r2, [r0, #20]	; fField20
        23b20c:	e1a02822 	mov	r2, r2, lsr #16
        23b210:	e51b1016 	ldr	r1, [fp, -#22]	; fField22
        23b214:	e0411002 	sub	r1, r1, r2
        23b218:	e1a01801 	mov	r1, r1, lsl #16
        23b21c:	e1b01841 	movs	r1, r1, asr #16
        23b220:	42611000 	rsbmi	r1, r1, #0	; 0x0
        23b224:	e1a01801 	mov	r1, r1, lsl #16
        23b228:	e3510801 	cmp	r1, #65536	; 0x10000
        23b22c:	d590000c 	ldrle	r0, [r0, #12]	; fField12
        23b230:	d2800001 	addle	r0, r0, #1	; 0x1
        23b234:	d20000ff 	andle	r0, r0, #255	; 0xff
        23b238:	d91ba800 	ldmledb	fp, {fp, sp, pc}
        23b23c:	e3a00001 	mov	r0, #1	; 0x1
        23b240:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)
 * Address: 0023b244
 */
TXHilite::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *) {
    /*
        23b244:	e1a0c00d 	mov	ip, sp
        23b248:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23b24c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23b250:	e24cb014 	sub	fp, ip, #20	; 0x14
        23b254:	e1a04000 	mov	r4, r0
        23b258:	e1a05001 	mov	r5, r1
        23b25c:	e1a07002 	mov	r7, r2
        23b260:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        23b264:	e5d00019 	ldrb	r0, [r0, #25]	; fField25
        23b268:	e3300002 	teq	r0, #2	; 0x2
        23b26c:	03a00000 	moveq	r0, #0	; 0x0
        23b270:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23b274:	e24dd004 	sub	sp, sp, #4	; 0x4
        23b278:	e1a0000d 	mov	r0, sp
        23b27c:	eb66d148 	bl	1bef7a4 <$GetPort(GrafPort **)>
        23b280:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23b284:	eb657ea5 	bl	1b9ad20 <TXStyledText::$GetTextPort( const(void))>
        23b288:	eb66d147 	bl	1bef7ac <$SetPort(GrafPort *)>
        23b28c:	e24dd004 	sub	sp, sp, #4	; 0x4
        23b290:	e1a01005 	mov	r1, r5
        23b294:	e1a0000d 	mov	r0, sp
        23b298:	e1a0e00f 	mov	lr, pc
        23b29c:	e595f000 	ldr	pc, [r5]
        23b2a0:	e49d6004 	ldr	r6, [sp], #4	; fField4
        23b2a4:	e59d0000 	ldr	r0, [sp]
        23b2a8:	eb66d13f 	bl	1bef7ac <$SetPort(GrafPort *)>
        23b2ac:	eb6586e7 	bl	1b9ce50 <$TXCurrentTicks(void)>
        23b2b0:	e1a09000 	mov	r9, r0
        23b2b4:	e1a08004 	mov	r8, r4
        23b2b8:	e1a00005 	mov	r0, r5
        23b2bc:	e5951000 	ldr	r1, [r5]
        23b2c0:	e1a0e00f 	mov	lr, pc
        23b2c4:	e281f00c 	add	pc, r1, #12	; 0xc
        23b2c8:	e1a03000 	mov	r3, r0
        23b2cc:	e1a02009 	mov	r2, r9
        23b2d0:	e1a00008 	mov	r0, r8
        23b2d4:	e1a01006 	mov	r1, r6
        23b2d8:	e598c000 	ldr	ip, [r8]
        23b2dc:	e1a0e00f 	mov	lr, pc
        23b2e0:	e28cf00c 	add	pc, ip, #12	; 0xc
        23b2e4:	e284400c 	add	r4, r4, #12	; 0xc
        23b2e8:	e8840201 	stmia	r4, {r0, r9}
        23b2ec:	e244400c 	sub	r4, r4, #12	; 0xc
        23b2f0:	e2840014 	add	r0, r4, #20	; 0x14
        23b2f4:	e5806000 	str	r6, [r0]
        23b2f8:	e24dd010 	sub	sp, sp, #16	; 0x10
        23b2fc:	e1a0300d 	mov	r3, sp
        23b300:	e594200c 	ldr	r2, [r4, #12]	; fField12
        23b304:	e1a00004 	mov	r0, r4
        23b308:	e1a01006 	mov	r1, r6
        23b30c:	eb65554d 	bl	1b90848 <TXHilite::$GetClickRange(Point, int, TXOffsetRange *)>
        23b310:	e3300000 	teq	r0, #0	; 0x0
        23b314:	0a000065 	beq	23b4b0 <TXHilite::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)+0x26c>
        23b318:	e3a06000 	mov	r6, #0	; 0x0
        23b31c:	e3170002 	tst	r7, #2	; 0x2
        23b320:	e2848034 	add	r8, r4, #52	; 0x34
        23b324:	e3a09001 	mov	r9, #1	; 0x1
        23b328:	0a000029 	beq	23b3d4 <TXHilite::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)+0x190>
        23b32c:	e24dd010 	sub	sp, sp, #16	; 0x10
        23b330:	e1a01008 	mov	r1, r8
        23b334:	e28d0008 	add	r0, sp, #8	; 0x8
        23b338:	e3a02005 	mov	r2, #5	; 0x5
        23b33c:	eb65e5c3 	bl	1bb4a50 <$memcpy>
        23b340:	e284103c 	add	r1, r4, #60	; 0x3c
        23b344:	e1a0000d 	mov	r0, sp
        23b348:	e3a02005 	mov	r2, #5	; 0x5
        23b34c:	eb65e5bf 	bl	1bb4a50 <$memcpy>
        23b350:	e28d1020 	add	r1, sp, #32	; 0x20
        23b354:	e931500c 	ldmdb	r1!, {r2, r3, ip, lr}
        23b358:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        23b35c:	e1a00004 	mov	r0, r4
        23b360:	e8bd000e 	ldmia	sp!, {r1, r2, r3}
        23b364:	eb655536 	bl	1b90844 <TXHilite::$ExtendHilite(TXOffsetRange)>
        23b368:	e28dd004 	add	sp, sp, #4	; 0x4
        23b36c:	e5941034 	ldr	r1, [r4, #52]	; fField52
        23b370:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        23b374:	e0510000 	subs	r0, r1, r0
        23b378:	13a00001 	movne	r0, #1	; 0x1
        23b37c:	e21000ff 	ands	r0, r0, #255	; 0xff
        23b380:	0594203c 	ldreq	r2, [r4, #60]	; fField60
        23b384:	059d1000 	ldreq	r1, [sp]
        23b388:	01320001 	teqeq	r2, r1
        23b38c:	1a000005 	bne	23b3a8 <TXHilite::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)+0x164>
        23b390:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        23b394:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        23b398:	e1300001 	teq	r0, r1
        23b39c:	13a00000 	movne	r0, #0	; 0x0
        23b3a0:	03a00001 	moveq	r0, #1	; 0x1
        23b3a4:	e20000ff 	and	r0, r0, #255	; 0xff
        23b3a8:	e28d1018 	add	r1, sp, #24	; 0x18
        23b3ac:	e3300000 	teq	r0, #0	; 0x0
        23b3b0:	028d0008 	addeq	r0, sp, #8	; 0x8
        23b3b4:	11a0000d 	movne	r0, sp
        23b3b8:	e8901008 	ldmia	r0, {r3, ip}
        23b3bc:	e8811008 	stmia	r1, {r3, ip}
        23b3c0:	e28d0010 	add	r0, sp, #16	; 0x10
        23b3c4:	e8911008 	ldmia	r1, {r3, ip}
        23b3c8:	e8801008 	stmia	r0, {r3, ip}
        23b3cc:	e28dd010 	add	sp, sp, #16	; 0x10
        23b3d0:	ea000014 	b	23b428 <TXHilite::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)+0x1e4>
        23b3d4:	e3a01000 	mov	r1, #0	; 0x0
        23b3d8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23b3dc:	eb6592f7 	bl	1b9ffc0 <Textension::$IsRangeGraphicsRun(TXOffsetRange const *)>
        23b3e0:	e1b06000 	movs	r6, r0
        23b3e4:	0a000004 	beq	23b3fc <TXHilite::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)+0x1b8>
        23b3e8:	e1a00008 	mov	r0, r8
        23b3ec:	e1a0100d 	mov	r1, sp
        23b3f0:	ebffe32c 	bl	2340a8 <TXOffsetRange::operator==( const(TXOffsetRange const &))>
        23b3f4:	e3300000 	teq	r0, #0	; 0x0
        23b3f8:	1a00000a 	bne	23b428 <TXHilite::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)+0x1e4>
        23b3fc:	e1a0100d 	mov	r1, sp
        23b400:	e1a00004 	mov	r0, r4
        23b404:	e3a03001 	mov	r3, #1	; 0x1
        23b408:	e3a02001 	mov	r2, #1	; 0x1
        23b40c:	e594c000 	ldr	ip, [r4]
        23b410:	e1a0e00f 	mov	lr, pc
        23b414:	e28cf008 	add	pc, ip, #8	; 0x8
        23b418:	e3a01000 	mov	r1, #0	; 0x0
        23b41c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23b420:	eb6592e6 	bl	1b9ffc0 <Textension::$IsRangeGraphicsRun(TXOffsetRange const *)>
        23b424:	e1a06000 	mov	r6, r0
        23b428:	e1a0e004 	mov	lr, r4
        23b42c:	e1a0200a 	mov	r2, sl
        23b430:	e1a00006 	mov	r0, r6
        23b434:	e59b1010 	ldr	r1, [fp, #16]	; fField16
        23b438:	e59b3018 	ldr	r3, [fp, #24]	; fField24
        23b43c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23b440:	e1a03007 	mov	r3, r7
        23b444:	e1a02005 	mov	r2, r5
        23b448:	e92d000c 	stmdb	sp!, {r2, r3}
        23b44c:	e28d1028 	add	r1, sp, #40	; 0x28
        23b450:	e9311008 	ldmdb	r1!, {r3, ip}
        23b454:	e92d1008 	stmdb	sp!, {r3, ip}
        23b458:	e9311008 	ldmdb	r1!, {r3, ip}
        23b45c:	e92d1008 	stmdb	sp!, {r3, ip}
        23b460:	e1a0000e 	mov	r0, lr
        23b464:	e8bd000e 	ldmia	sp!, {r1, r2, r3}
        23b468:	e59ec000 	ldr	ip, [lr]
        23b46c:	e1a0e00f 	mov	lr, pc
        23b470:	e28cf014 	add	pc, ip, #20	; 0x14
        23b474:	e28dd01c 	add	sp, sp, #28	; 0x1c
        23b478:	e5980008 	ldr	r0, [r8, #8]	; fField8
        23b47c:	e5981000 	ldr	r1, [r8]
        23b480:	e1300001 	teq	r0, r1
        23b484:	e3a00000 	mov	r0, #0	; 0x0
        23b488:	0a000006 	beq	23b4a8 <TXHilite::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)+0x264>
        23b48c:	e594100c 	ldr	r1, [r4, #12]	; fField12
        23b490:	e3310002 	teq	r1, #2	; 0x2
        23b494:	13a01000 	movne	r1, #0	; 0x0
        23b498:	03a01001 	moveq	r1, #1	; 0x1
        23b49c:	e5c4101b 	strb	r1, [r4, #27]	; fField27
        23b4a0:	e5c40038 	strb	r0, [r4, #56]	; fField56
        23b4a4:	ea000000 	b	23b4ac <TXHilite::Click(TXPointingDevice *, long, TXClickCommandInfo *, void (*)(unsigned char, void *, long), void *)+0x268>
        23b4a8:	e5c4001b 	strb	r0, [r4, #27]	; fField27
        23b4ac:	e1a00009 	mov	r0, r9
        23b4b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::DoClickLoop(unsigned char, void *)
 * Address: 0023b4b4
 */
TXHilite::DoClickLoop(unsigned char, void *) {
    /*
        23b4b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXHilite::AdjustCharOffset(TXOffset *)
 * Address: 0023b4b8
 */
TXHilite::AdjustCharOffset(TXOffset *) {
    /*
        23b4b8:	e1a0c00d 	mov	ip, sp
        23b4bc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23b4c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23b4c4:	e1a05000 	mov	r5, r0
        23b4c8:	e1a04001 	mov	r4, r1
        23b4cc:	e3a06000 	mov	r6, #0	; 0x0
        23b4d0:	e5910000 	ldr	r0, [r1]
        23b4d4:	e3300000 	teq	r0, #0	; 0x0
        23b4d8:	0a000015 	beq	23b534 <TXHilite::AdjustCharOffset(TXOffset *)+0x7c>
        23b4dc:	e2401001 	sub	r1, r0, #1	; 0x1
        23b4e0:	e5950004 	ldr	r0, [r5, #4]	; fField4
        23b4e4:	e5900018 	ldr	r0, [r0, #24]	; fField24
        23b4e8:	eb654463 	bl	1b8c67c <TXFormatter::$IsLineFeed( const(long))>
        23b4ec:	e3300000 	teq	r0, #0	; 0x0
        23b4f0:	1a00000f 	bne	23b534 <TXHilite::AdjustCharOffset(TXOffset *)+0x7c>
        23b4f4:	e5d40004 	ldrb	r0, [r4, #4]	; fField4
        23b4f8:	e3300000 	teq	r0, #0	; 0x0
        23b4fc:	1a000007 	bne	23b520 <TXHilite::AdjustCharOffset(TXOffset *)+0x68>
        23b500:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        23b504:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23b508:	e5901000 	ldr	r1, [r0]
        23b50c:	e1a0e00f 	mov	lr, pc
        23b510:	e281f004 	add	pc, r1, #4	; 0x4
        23b514:	e5941000 	ldr	r1, [r4]
        23b518:	e1300001 	teq	r0, r1
        23b51c:	1a000001 	bne	23b528 <TXHilite::AdjustCharOffset(TXOffset *)+0x70>
        23b520:	e3a00001 	mov	r0, #1	; 0x1
        23b524:	ea000000 	b	23b52c <TXHilite::AdjustCharOffset(TXOffset *)+0x74>
        23b528:	e3a00000 	mov	r0, #0	; 0x0
        23b52c:	e5c40004 	strb	r0, [r4, #4]	; fField4
        23b530:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23b534:	e5c46004 	strb	r6, [r4, #4]	; fField4
        23b538:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::ArrowKey(unsigned char, long)
 * Address: 0023b53c
 */
TXHilite::ArrowKey(unsigned char, long) {
    /*
        23b53c:	e1a0c00d 	mov	ip, sp
        23b540:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23b544:	e24cb004 	sub	fp, ip, #4	; 0x4
        23b548:	e1a04000 	mov	r4, r0
        23b54c:	e1a05002 	mov	r5, r2
        23b550:	e20100ff 	and	r0, r1, #255	; 0xff
        23b554:	e24dd010 	sub	sp, sp, #16	; 0x10
        23b558:	e3a01000 	mov	r1, #0	; 0x0
        23b55c:	e5c4101b 	strb	r1, [r4, #27]	; fField27
        23b560:	e330001e 	teq	r0, #30	; 0x1e
        23b564:	03a01001 	moveq	r1, #1	; 0x1
        23b568:	0a000002 	beq	23b578 <TXHilite::ArrowKey(unsigned char, long)+0x3c>
        23b56c:	e330001f 	teq	r0, #31	; 0x1f
        23b570:	1a000007 	bne	23b594 <TXHilite::ArrowKey(unsigned char, long)+0x58>
        23b574:	e3a01000 	mov	r1, #0	; 0x0
        23b578:	e1a0300d 	mov	r3, sp
        23b57c:	e1a02005 	mov	r2, r5
        23b580:	e1a00004 	mov	r0, r4
        23b584:	eb6554b8 	bl	1b9086c <TXHilite::$UpDownArrows(unsigned char, long, TXOffset *)>
        23b588:	e3300000 	teq	r0, #0	; 0x0
        23b58c:	1a00000a 	bne	23b5bc <TXHilite::ArrowKey(unsigned char, long)+0x80>
        23b590:	ea000008 	b	23b5b8 <TXHilite::ArrowKey(unsigned char, long)+0x7c>
        23b594:	e330001d 	teq	r0, #29	; 0x1d
        23b598:	13a01000 	movne	r1, #0	; 0x0
        23b59c:	03a01001 	moveq	r1, #1	; 0x1
        23b5a0:	e1a0300d 	mov	r3, sp
        23b5a4:	e1a02005 	mov	r2, r5
        23b5a8:	e1a00004 	mov	r0, r4
        23b5ac:	eb6554ad 	bl	1b90868 <TXHilite::$LeftRightArrows(unsigned char, long, TXOffset *)>
        23b5b0:	e3300000 	teq	r0, #0	; 0x0
        23b5b4:	1a000000 	bne	23b5bc <TXHilite::ArrowKey(unsigned char, long)+0x80>
        23b5b8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23b5bc:	e1a0100d 	mov	r1, sp
        23b5c0:	e1a00004 	mov	r0, r4
        23b5c4:	eb6554a5 	bl	1b90860 <TXHilite::$AdjustCharOffset(TXOffset *)>
        23b5c8:	e28d1008 	add	r1, sp, #8	; 0x8
        23b5cc:	e89d5000 	ldmia	sp, {ip, lr}
        23b5d0:	e8815000 	stmia	r1, {ip, lr}
        23b5d4:	e5947044 	ldr	r7, [r4, #68]	; fField68
        23b5d8:	e5d4601b 	ldrb	r6, [r4, #27]	; fField27
        23b5dc:	e3150002 	tst	r5, #2	; 0x2
        23b5e0:	0a000007 	beq	23b604 <TXHilite::ArrowKey(unsigned char, long)+0xc8>
        23b5e4:	e28d1010 	add	r1, sp, #16	; 0x10
        23b5e8:	e931500c 	ldmdb	r1!, {r2, r3, ip, lr}
        23b5ec:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        23b5f0:	e1a00004 	mov	r0, r4
        23b5f4:	e8bd000e 	ldmia	sp!, {r1, r2, r3}
        23b5f8:	eb655491 	bl	1b90844 <TXHilite::$ExtendHilite(TXOffsetRange)>
        23b5fc:	e28dd004 	add	sp, sp, #4	; 0x4
        23b600:	ea000006 	b	23b620 <TXHilite::ArrowKey(unsigned char, long)+0xe4>
        23b604:	e1a0100d 	mov	r1, sp
        23b608:	e1a00004 	mov	r0, r4
        23b60c:	e3a03001 	mov	r3, #1	; 0x1
        23b610:	e3a02001 	mov	r2, #1	; 0x1
        23b614:	e594c000 	ldr	ip, [r4]
        23b618:	e1a0e00f 	mov	lr, pc
        23b61c:	e28cf008 	add	pc, ip, #8	; 0x8
        23b620:	e5847044 	str	r7, [r4, #68]	; fField68
        23b624:	e5c4601b 	strb	r6, [r4, #27]	; fField27
        23b628:	eaffffe2 	b	23b5b8 <TXHilite::ArrowKey(unsigned char, long)+0x7c>
    */
}

/**
 * Symbol: TXHilite::LeftRightArrows(unsigned char, long, TXOffset *)
 * Address: 0023b62c
 */
TXHilite::LeftRightArrows(unsigned char, long, TXOffset *) {
    /*
        23b62c:	e1a0c00d 	mov	ip, sp
        23b630:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23b634:	e24cb004 	sub	fp, ip, #4	; 0x4
        23b638:	e1a05000 	mov	r5, r0
        23b63c:	e1a06002 	mov	r6, r2
        23b640:	e1a04003 	mov	r4, r3
        23b644:	e20170ff 	and	r7, r1, #255	; 0xff
        23b648:	e24dd010 	sub	sp, sp, #16	; 0x10
        23b64c:	e1a0100d 	mov	r1, sp
        23b650:	eb655489 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        23b654:	e3e00000 	mvn	r0, #0	; 0x0
        23b658:	e3370000 	teq	r7, #0	; 0x0
        23b65c:	e5850044 	str	r0, [r5, #68]	; fField68
        23b660:	e1a0000d 	mov	r0, sp
        23b664:	12800008 	addne	r0, r0, #8	; 0x8
        23b668:	e8901008 	ldmia	r0, {r3, ip}
        23b66c:	e8841008 	stmia	r4, {r3, ip}
        23b670:	e3160009 	tst	r6, #9	; 0x9
        23b674:	e3a08001 	mov	r8, #1	; 0x1
        23b678:	0a00001c 	beq	23b6f0 <TXHilite::LeftRightArrows(unsigned char, long, TXOffset *)+0xc4>
        23b67c:	e24dd010 	sub	sp, sp, #16	; 0x10
        23b680:	e3160008 	tst	r6, #8	; 0x8
        23b684:	0a00000e 	beq	23b6c4 <TXHilite::LeftRightArrows(unsigned char, long, TXOffset *)+0x98>
        23b688:	e3370000 	teq	r7, #0	; 0x0
        23b68c:	13a00000 	movne	r0, #0	; 0x0
        23b690:	03a00001 	moveq	r0, #1	; 0x1
        23b694:	e5c40004 	strb	r0, [r4, #4]	; fField4
        23b698:	e3a03000 	mov	r3, #0	; 0x0
        23b69c:	e92d0008 	stmdb	sp!, {r3}
        23b6a0:	e28d3004 	add	r3, sp, #4	; 0x4
        23b6a4:	e5950004 	ldr	r0, [r5, #4]	; fField4
        23b6a8:	e8940006 	ldmia	r4, {r1, r2}
        23b6ac:	eb657d9d 	bl	1b9ad28 <TXStyledText::$CharToWord(TXOffset, TXOffsetRange *, char)>
        23b6b0:	e28dd004 	add	sp, sp, #4	; 0x4
        23b6b4:	e3300000 	teq	r0, #0	; 0x0
        23b6b8:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23b6bc:	e5c5801b 	strb	r8, [r5, #27]	; fField27
        23b6c0:	ea000003 	b	23b6d4 <TXHilite::LeftRightArrows(unsigned char, long, TXOffset *)+0xa8>
        23b6c4:	e1a0300d 	mov	r3, sp
        23b6c8:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        23b6cc:	e8940006 	ldmia	r4, {r1, r2}
        23b6d0:	eb659236 	bl	1b9ffb0 <Textension::$CharToLine( const(TXOffset, TXOffsetRange *))>
        23b6d4:	e3370000 	teq	r7, #0	; 0x0
        23b6d8:	e1a0000d 	mov	r0, sp
        23b6dc:	12800008 	addne	r0, r0, #8	; 0x8
        23b6e0:	e8901008 	ldmia	r0, {r3, ip}
        23b6e4:	e8841008 	stmia	r4, {r3, ip}
        23b6e8:	e28dd010 	add	sp, sp, #16	; 0x10
        23b6ec:	ea00000e 	b	23b72c <TXHilite::LeftRightArrows(unsigned char, long, TXOffset *)+0x100>
        23b6f0:	e3160002 	tst	r6, #2	; 0x2
        23b6f4:	1a000003 	bne	23b708 <TXHilite::LeftRightArrows(unsigned char, long, TXOffset *)+0xdc>
        23b6f8:	e59d0000 	ldr	r0, [sp]
        23b6fc:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        23b700:	e1310000 	teq	r1, r0
        23b704:	1a000008 	bne	23b72c <TXHilite::LeftRightArrows(unsigned char, long, TXOffset *)+0x100>
        23b708:	e5941000 	ldr	r1, [r4]
        23b70c:	e1a02007 	mov	r2, r7
        23b710:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        23b714:	eb657d84 	bl	1b9ad2c <TXStyledText::$AdvanceOffset(long, unsigned char)>
        23b718:	e3370000 	teq	r7, #0	; 0x0
        23b71c:	e5941000 	ldr	r1, [r4]
        23b720:	00410000 	subeq	r0, r1, r0
        23b724:	10810000 	addne	r0, r1, r0
        23b728:	e5840000 	str	r0, [r4]
        23b72c:	e5c47004 	strb	r7, [r4, #4]	; fField4
        23b730:	e1a00008 	mov	r0, r8
        23b734:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::UpDownArrows(unsigned char, long, TXOffset *)
 * Address: 0023b738
 */
TXHilite::UpDownArrows(unsigned char, long, TXOffset *) {
    /*
        23b738:	e1a0c00d 	mov	ip, sp
        23b73c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        23b740:	e24cb004 	sub	fp, ip, #4	; 0x4
        23b744:	e1a05000 	mov	r5, r0
        23b748:	e1a04003 	mov	r4, r3
        23b74c:	e20160ff 	and	r6, r1, #255	; 0xff
        23b750:	e3120001 	tst	r2, #1	; 0x1
        23b754:	e3a08000 	mov	r8, #0	; 0x0
        23b758:	e3a07001 	mov	r7, #1	; 0x1
        23b75c:	0a00000b 	beq	23b790 <TXHilite::UpDownArrows(unsigned char, long, TXOffset *)+0x58>
        23b760:	e3360000 	teq	r6, #0	; 0x0
        23b764:	15848000 	strne	r8, [r4]
        23b768:	15c48004 	strneb	r8, [r4, #4]	; fField4
        23b76c:	1a00005a 	bne	23b8dc <TXHilite::UpDownArrows(unsigned char, long, TXOffset *)+0x1a4>
        23b770:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        23b774:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23b778:	e5901000 	ldr	r1, [r0]
        23b77c:	e1a0e00f 	mov	lr, pc
        23b780:	e281f004 	add	pc, r1, #4	; 0x4
        23b784:	e5840000 	str	r0, [r4]
        23b788:	e5c47004 	strb	r7, [r4, #4]	; fField4
        23b78c:	ea000052 	b	23b8dc <TXHilite::UpDownArrows(unsigned char, long, TXOffset *)+0x1a4>
        23b790:	e24dd010 	sub	sp, sp, #16	; 0x10
        23b794:	e1a0100d 	mov	r1, sp
        23b798:	e1a00005 	mov	r0, r5
        23b79c:	eb655436 	bl	1b9087c <TXHilite::$GetHiliteRange( const(TXOffsetRange *))>
        23b7a0:	e3360000 	teq	r6, #0	; 0x0
        23b7a4:	e1a0000d 	mov	r0, sp
        23b7a8:	02800008 	addeq	r0, r0, #8	; 0x8
        23b7ac:	e8901008 	ldmia	r0, {r3, ip}
        23b7b0:	e8841008 	stmia	r4, {r3, ip}
        23b7b4:	e5950044 	ldr	r0, [r5, #68]	; fField68
        23b7b8:	e3500000 	cmp	r0, #0	; 0x0
        23b7bc:	aa00000b 	bge	23b7f0 <TXHilite::UpDownArrows(unsigned char, long, TXOffset *)+0xb8>
        23b7c0:	e24dd008 	sub	sp, sp, #8	; 0x8
        23b7c4:	e3a03000 	mov	r3, #0	; 0x0
        23b7c8:	e3a02000 	mov	r2, #0	; 0x0
        23b7cc:	e92d000c 	stmdb	sp!, {r2, r3}
        23b7d0:	e28d3008 	add	r3, sp, #8	; 0x8
        23b7d4:	e5950008 	ldr	r0, [r5, #8]	; fField8
        23b7d8:	e8940006 	ldmia	r4, {r1, r2}
        23b7dc:	eb654396 	bl	1b8c63c <TXDisplay::$CharToPoint(TXOffset, TXLongPoint *, int *, int *)>
        23b7e0:	e28dd008 	add	sp, sp, #8	; 0x8
        23b7e4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        23b7e8:	e5850044 	str	r0, [r5, #68]	; fField68
        23b7ec:	e28dd008 	add	sp, sp, #8	; 0x8
        23b7f0:	e3a03000 	mov	r3, #0	; 0x0
        23b7f4:	e5950004 	ldr	r0, [r5, #4]	; fField4
        23b7f8:	e8940006 	ldmia	r4, {r1, r2}
        23b7fc:	eb6591eb 	bl	1b9ffb0 <Textension::$CharToLine( const(TXOffset, TXOffsetRange *))>
        23b800:	e3360000 	teq	r6, #0	; 0x0
        23b804:	0a000003 	beq	23b818 <TXHilite::UpDownArrows(unsigned char, long, TXOffset *)+0xe0>
        23b808:	e2501001 	subs	r1, r0, #1	; 0x1
        23b80c:	45848000 	strmi	r8, [r4]
        23b810:	45c48004 	strmib	r8, [r4, #4]	; fField4
        23b814:	ea00000d 	b	23b850 <TXHilite::UpDownArrows(unsigned char, long, TXOffset *)+0x118>
        23b818:	e2801001 	add	r1, r0, #1	; 0x1
        23b81c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        23b820:	e5902018 	ldr	r2, [r0, #24]	; fField24
        23b824:	e592202c 	ldr	r2, [r2, #44]
        23b828:	e2822001 	add	r2, r2, #1	; 0x1
        23b82c:	e1520001 	cmp	r2, r1
        23b830:	ca000006 	bgt	23b850 <TXHilite::UpDownArrows(unsigned char, long, TXOffset *)+0x118>
        23b834:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23b838:	e5901000 	ldr	r1, [r0]
        23b83c:	e1a0e00f 	mov	lr, pc
        23b840:	e281f004 	add	pc, r1, #4	; 0x4
        23b844:	e5840000 	str	r0, [r4]
        23b848:	e5c47004 	strb	r7, [r4, #4]	; fField4
        23b84c:	ea000021 	b	23b8d8 <TXHilite::UpDownArrows(unsigned char, long, TXOffset *)+0x1a0>
        23b850:	e3510000 	cmp	r1, #0	; 0x0
        23b854:	ba00001f 	blt	23b8d8 <TXHilite::UpDownArrows(unsigned char, long, TXOffset *)+0x1a0>
        23b858:	e24dd010 	sub	sp, sp, #16	; 0x10
        23b85c:	e5950008 	ldr	r0, [r5, #8]	; fField8
        23b860:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23b864:	e1a0200d 	mov	r2, sp
        23b868:	eb654fcf 	bl	1b8f7ac <TXFrames::$GetLineBounds( const(long, TXLongRect *))>
        23b86c:	e24dd020 	sub	sp, sp, #32	; 0x20
        23b870:	e5951044 	ldr	r1, [r5, #68]	; fField68
        23b874:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        23b878:	e58d0018 	str	r0, [sp, #24]	; fField24
        23b87c:	e58d101c 	str	r1, [sp, #28]	; fField28
        23b880:	e24dd004 	sub	sp, sp, #4	; 0x4
        23b884:	e5b56004 	ldr	r6, [r5, #4]!	; fField4
        23b888:	e5950004 	ldr	r0, [r5, #4]	; fField4
        23b88c:	e28d201c 	add	r2, sp, #28	; 0x1c
        23b890:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
        23b894:	e1a0000d 	mov	r0, sp
        23b898:	ebfffa03 	bl	23a0ac <TXFrames::AbsToDraw( const(TXLongPoint const &))>
        23b89c:	e28d1018 	add	r1, sp, #24	; 0x18
        23b8a0:	e28d3014 	add	r3, sp, #20	; 0x14
        23b8a4:	e92d0008 	stmdb	sp!, {r3}
        23b8a8:	e1a03001 	mov	r3, r1
        23b8ac:	e28d2008 	add	r2, sp, #8	; 0x8
        23b8b0:	e5b60010 	ldr	r0, [r6, #16]!	; fField16
        23b8b4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        23b8b8:	eb65435e 	bl	1b8c638 <TXDisplay::$PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        23b8bc:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        23b8c0:	e3500000 	cmp	r0, #0	; 0x0
        23b8c4:	b1a00008 	movlt	r0, r8
        23b8c8:	b91ba9f0 	ldmltdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23b8cc:	e89d1008 	ldmia	sp, {r3, ip}
        23b8d0:	e8841008 	stmia	r4, {r3, ip}
        23b8d4:	e28dd030 	add	sp, sp, #48	; 0x30
        23b8d8:	e28dd010 	add	sp, sp, #16	; 0x10
        23b8dc:	e1a00007 	mov	r0, r7
        23b8e0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::Activate(unsigned char, unsigned char)
 * Address: 0023b8e4
 */
TXHilite::Activate(unsigned char, unsigned char) {
    /*
        23b8e4:	e31100ff 	tst	r1, #255	; 0xff
        23b8e8:	e20220ff 	and	r2, r2, #255	; 0xff
        23b8ec:	0a000003 	beq	23b900 <TXHilite::Activate(unsigned char, unsigned char)+0x1c>
        23b8f0:	e1b01002 	movs	r1, r2
        23b8f4:	13a01001 	movne	r1, #1	; 0x1
        23b8f8:	e20110ff 	and	r1, r1, #255	; 0xff
        23b8fc:	ea000000 	b	23b904 <TXHilite::Activate(unsigned char, unsigned char)+0x20>
        23b900:	e3a01002 	mov	r1, #2	; 0x2
        23b904:	e5902000 	ldr	r2, [r0]
        23b908:	e282f004 	add	pc, r2, #4	; 0x4
    */
}

/**
 * Symbol: TXHilite::Draw(void)
 * Address: 0023b90c
 */
TXHilite::Draw(void) {
    /*
        23b90c:	e1a0c00d 	mov	ip, sp
        23b910:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23b914:	e24cb004 	sub	fp, ip, #4	; 0x4
        23b918:	e1a04000 	mov	r4, r0
        23b91c:	e3a00001 	mov	r0, #1	; 0x1
        23b920:	e5c4001a 	strb	r0, [r4, #26]	; fField26
        23b924:	e594001c 	ldr	r0, [r4, #28]	; fField28
        23b928:	e3500000 	cmp	r0, #0	; 0x0
        23b92c:	b91ba830 	ldmltdb	fp, {r4, r5, fp, sp, pc}
        23b930:	e1a00004 	mov	r0, r4
        23b934:	e3a01000 	mov	r1, #0	; 0x0
        23b938:	eb6553be 	bl	1b90838 <TXHilite::$IsCustomHilite(TXOffsetRange const *)>
        23b93c:	e1b05000 	movs	r5, r0
        23b940:	05d40019 	ldreqb	r0, [r4, #25]	; fField25
        23b944:	03300000 	teqeq	r0, #0	; 0x0
        23b948:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        23b94c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23b950:	e1a0100d 	mov	r1, sp
        23b954:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23b958:	eb654329 	bl	1b8c604 <TXDisplay::$SetDrawEnv(TXDrawEnv *)>
        23b95c:	e2840034 	add	r0, r4, #52	; 0x34
        23b960:	e3350000 	teq	r5, #0	; 0x0
        23b964:	e24dd010 	sub	sp, sp, #16	; 0x10
        23b968:	0a00000f 	beq	23b9ac <TXHilite::Draw(void)+0xa0>
        23b96c:	e1a0300d 	mov	r3, sp
        23b970:	e92d0008 	stmdb	sp!, {r3}
        23b974:	e2800010 	add	r0, r0, #16	; 0x10
        23b978:	e930500c 	ldmdb	r0!, {r2, r3, ip, lr}
        23b97c:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        23b980:	e1a00004 	mov	r0, r4
        23b984:	e8bd000e 	ldmia	sp!, {r1, r2, r3}
        23b988:	eb6557bf 	bl	1b9188c <TXHilite::$CalcRangePosition(TXOffsetRange, TXRunPositionInfo *)>
        23b98c:	e28dd008 	add	sp, sp, #8	; 0x8
        23b990:	e1a0100d 	mov	r1, sp
        23b994:	e1a00005 	mov	r0, r5
        23b998:	e5952000 	ldr	r2, [r5]
        23b99c:	e1a0e00f 	mov	lr, pc
        23b9a0:	e282f080 	add	pc, r2, #128	; 0x80
        23b9a4:	e28dd010 	add	sp, sp, #16	; 0x10
        23b9a8:	ea000007 	b	23b9cc <TXHilite::Draw(void)+0xc0>
        23b9ac:	e28dd010 	add	sp, sp, #16	; 0x10
        23b9b0:	e2801010 	add	r1, r0, #16	; 0x10
        23b9b4:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        23b9b8:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        23b9bc:	e1a00004 	mov	r0, r4
        23b9c0:	e8bd000e 	ldmia	sp!, {r1, r2, r3}
        23b9c4:	eb6557b5 	bl	1b918a0 <TXHilite::$HiliteRange(TXOffsetRange)>
        23b9c8:	e28dd004 	add	sp, sp, #4	; 0x4
        23b9cc:	e1a0100d 	mov	r1, sp
        23b9d0:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        23b9d4:	eb65430b 	bl	1b8c608 <TXDisplay::$RestoreDrawEnv(TXDrawEnv const &)>
        23b9d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::SetHiliteState(char)
 * Address: 0023b9dc
 */
TXHilite::SetHiliteState(char) {
    /*
        23b9dc:	e1a0c00d 	mov	ip, sp
        23b9e0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23b9e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23b9e8:	e1a04000 	mov	r4, r0
        23b9ec:	e20150ff 	and	r5, r1, #255	; 0xff
        23b9f0:	e5d00019 	ldrb	r0, [r0, #25]	; fField25
        23b9f4:	e1300005 	teq	r0, r5
        23b9f8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23b9fc:	e594001c 	ldr	r0, [r4, #28]	; fField28
        23ba00:	e3500000 	cmp	r0, #0	; 0x0
        23ba04:	b3a00000 	movlt	r0, #0	; 0x0
        23ba08:	a3a00001 	movge	r0, #1	; 0x1
        23ba0c:	e20060ff 	and	r6, r0, #255	; 0xff
        23ba10:	e1a00004 	mov	r0, r4
        23ba14:	e3a01000 	mov	r1, #0	; 0x0
        23ba18:	eb655386 	bl	1b90838 <TXHilite::$IsCustomHilite(TXOffsetRange const *)>
        23ba1c:	e1b07000 	movs	r7, r0
        23ba20:	1a000001 	bne	23ba2c <TXHilite::SetHiliteState(char)+0x50>
        23ba24:	e3360000 	teq	r6, #0	; 0x0
        23ba28:	1a00001f 	bne	23baac <TXHilite::SetHiliteState(char)+0xd0>
        23ba2c:	e5c45019 	strb	r5, [r4, #25]	; fField25
        23ba30:	e3370000 	teq	r7, #0	; 0x0
        23ba34:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23ba38:	e3350002 	teq	r5, #2	; 0x2
        23ba3c:	03a05000 	moveq	r5, #0	; 0x0
        23ba40:	e24dd010 	sub	sp, sp, #16	; 0x10
        23ba44:	e3360000 	teq	r6, #0	; 0x0
        23ba48:	0a000008 	beq	23ba70 <TXHilite::SetHiliteState(char)+0x94>
        23ba4c:	e1a0300d 	mov	r3, sp
        23ba50:	e92d0008 	stmdb	sp!, {r3}
        23ba54:	e2841044 	add	r1, r4, #68	; 0x44
        23ba58:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        23ba5c:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        23ba60:	e1a00004 	mov	r0, r4
        23ba64:	e8bd000e 	ldmia	sp!, {r1, r2, r3}
        23ba68:	eb655787 	bl	1b9188c <TXHilite::$CalcRangePosition(TXOffsetRange, TXRunPositionInfo *)>
        23ba6c:	e28dd008 	add	sp, sp, #8	; 0x8
        23ba70:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23ba74:	e1a0100d 	mov	r1, sp
        23ba78:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23ba7c:	eb6542e0 	bl	1b8c604 <TXDisplay::$SetDrawEnv(TXDrawEnv *)>
        23ba80:	e1a03006 	mov	r3, r6
        23ba84:	e28d200c 	add	r2, sp, #12	; 0xc
        23ba88:	e1a01005 	mov	r1, r5
        23ba8c:	e1a00007 	mov	r0, r7
        23ba90:	e597c000 	ldr	ip, [r7]
        23ba94:	e1a0e00f 	mov	lr, pc
        23ba98:	e28cf07c 	add	pc, ip, #124	; 0x7c
        23ba9c:	e1a0100d 	mov	r1, sp
        23baa0:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        23baa4:	eb6542d7 	bl	1b8c608 <TXDisplay::$RestoreDrawEnv(TXDrawEnv const &)>
        23baa8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23baac:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23bab0:	e1a0100d 	mov	r1, sp
        23bab4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23bab8:	eb6542d1 	bl	1b8c604 <TXDisplay::$SetDrawEnv(TXDrawEnv *)>
        23babc:	e5d4001a 	ldrb	r0, [r4, #26]	; fField26
        23bac0:	e3300000 	teq	r0, #0	; 0x0
        23bac4:	11a00004 	movne	r0, r4
        23bac8:	1b655369 	blne	1b90874 <TXHilite::$Draw(void)>
        23bacc:	e5c45019 	strb	r5, [r4, #25]	; fField25
        23bad0:	e1a00004 	mov	r0, r4
        23bad4:	eb655366 	bl	1b90874 <TXHilite::$Draw(void)>
        23bad8:	e1a0100d 	mov	r1, sp
        23badc:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        23bae0:	eb6542c8 	bl	1b8c608 <TXDisplay::$RestoreDrawEnv(TXDrawEnv const &)>
        23bae4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::Invalid(unsigned char)
 * Address: 0023bae8
 */
TXHilite::Invalid(unsigned char) {
    /*
        23bae8:	e1a0c00d 	mov	ip, sp
        23baec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23baf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23baf4:	e1a04000 	mov	r4, r0
        23baf8:	e31100ff 	tst	r1, #255	; 0xff
        23bafc:	0a000004 	beq	23bb14 <TXHilite::Invalid(unsigned char)+0x2c>
        23bb00:	e1a00004 	mov	r0, r4
        23bb04:	e3a01000 	mov	r1, #0	; 0x0
        23bb08:	e5942000 	ldr	r2, [r4]
        23bb0c:	e1a0e00f 	mov	lr, pc
        23bb10:	e282f004 	add	pc, r2, #4	; 0x4
        23bb14:	e3e00000 	mvn	r0, #0	; 0x0
        23bb18:	e5840020 	str	r0, [r4, #32]	; fField32
        23bb1c:	e5a40044 	str	r0, [r4, #68]!	; fField68
        23bb20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::GetHiliteRange( const(TXOffsetRange *))
 * Address: 0023bb24
 */
TXHilite::GetHiliteRange( const(TXOffsetRange *)) {
    /*
        23bb24:	e1a02001 	mov	r2, r1
        23bb28:	e2801034 	add	r1, r0, #52	; 0x34
        23bb2c:	e891100b 	ldmia	r1, {r0, r1, r3, ip}
        23bb30:	e882100b 	stmia	r2, {r0, r1, r3, ip}
        23bb34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXHilite::HiliteRect( const(TXLongRect const &, long))
 * Address: 0023bb38
 */
TXHilite::HiliteRect( const(TXLongRect const &, long)) {
    /*
        23bb38:	e1a0c00d 	mov	ip, sp
        23bb3c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23bb40:	e24cb004 	sub	fp, ip, #4	; 0x4
        23bb44:	e1a04000 	mov	r4, r0
        23bb48:	e1a05001 	mov	r5, r1
        23bb4c:	e1a01002 	mov	r1, r2
        23bb50:	e24dd010 	sub	sp, sp, #16	; 0x10
        23bb54:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23bb58:	e1a0200d 	mov	r2, sp
        23bb5c:	e5b06008 	ldr	r6, [r0, #8]!	; fField8
        23bb60:	e1a00006 	mov	r0, r6
        23bb64:	e5963000 	ldr	r3, [r6]
        23bb68:	e1a0e00f 	mov	lr, pc
        23bb6c:	e283f010 	add	pc, r3, #16	; 0x10
        23bb70:	e1a0200d 	mov	r2, sp
        23bb74:	e1a01005 	mov	r1, r5
        23bb78:	e1a0000d 	mov	r0, sp
        23bb7c:	eb65364e 	bl	1b894bc <TXLongRect::$Sect( const(TXLongRect const &, TXLongRect *))>
        23bb80:	e3300000 	teq	r0, #0	; 0x0
        23bb84:	1a000000 	bne	23bb8c <TXHilite::HiliteRect( const(TXLongRect const &, long))+0x54>
        23bb88:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23bb8c:	e24dd008 	sub	sp, sp, #8	; 0x8
        23bb90:	e1a0200d 	mov	r2, sp
        23bb94:	e28d1008 	add	r1, sp, #8	; 0x8
        23bb98:	e1a00006 	mov	r0, r6
        23bb9c:	ebfff90a 	bl	239fcc <TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))>
        23bba0:	e24dd004 	sub	sp, sp, #4	; 0x4
        23bba4:	e1a0000d 	mov	r0, sp
        23bba8:	eb66cefd 	bl	1bef7a4 <$GetPort(GrafPort **)>
        23bbac:	e59d0000 	ldr	r0, [sp]
        23bbb0:	e5900048 	ldr	r0, [r0, #72]
        23bbb4:	e3300000 	teq	r0, #0	; 0x0
        23bbb8:	0a000002 	beq	23bbc8 <TXHilite::HiliteRect( const(TXLongRect const &, long))+0x90>
        23bbbc:	e28d0004 	add	r0, sp, #4	; 0x4
        23bbc0:	eb644ef5 	bl	1b4f79c <$FrameRect(Rect *)>
        23bbc4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23bbc8:	e28dd004 	add	sp, sp, #4	; 0x4
        23bbcc:	e5d40019 	ldrb	r0, [r4, #25]	; fField25
        23bbd0:	e3300002 	teq	r0, #2	; 0x2
        23bbd4:	1a00000e 	bne	23bc14 <TXHilite::HiliteRect( const(TXLongRect const &, long))+0xdc>
        23bbd8:	e24dd010 	sub	sp, sp, #16	; 0x10
        23bbdc:	e1a0000d 	mov	r0, sp
        23bbe0:	eb644efa 	bl	1b4f7d0 <$GetPenState(PenState *)>
        23bbe4:	eb645b4e 	bl	1b52924 <$PenNormal(void)>
        23bbe8:	e3a01001 	mov	r1, #1	; 0x1
        23bbec:	e3a00001 	mov	r0, #1	; 0x1
        23bbf0:	eb645b4c 	bl	1b52928 <$PenSize__FlT1>
        23bbf4:	e3a0000a 	mov	r0, #10	; 0xa
        23bbf8:	eb645b48 	bl	1b52920 <$PenMode(long)>
        23bbfc:	e28d0010 	add	r0, sp, #16	; 0x10
        23bc00:	eb644ee5 	bl	1b4f79c <$FrameRect(Rect *)>
        23bc04:	e1a0000d 	mov	r0, sp
        23bc08:	eb645f7a 	bl	1b539f8 <$SetPenState(PenState *)>
        23bc0c:	e28dd010 	add	sp, sp, #16	; 0x10
        23bc10:	ea000001 	b	23bc1c <TXHilite::HiliteRect( const(TXLongRect const &, long))+0xe4>
        23bc14:	e1a0000d 	mov	r0, sp
        23bc18:	eb645311 	bl	1b50864 <$InvertRect(Rect *)>
        23bc1c:	e28dd008 	add	sp, sp, #8	; 0x8
        23bc20:	eaffffd8 	b	23bb88 <TXHilite::HiliteRect( const(TXLongRect const &, long))+0x50>
    */
}

/**
 * Symbol: HiliteLine__8TXHiliteCFlT113TXOffsetRangeP10TXLongRect
 * Address: 0023bc24
 */
void TXHilite::HiliteLine() {
    /*
        23bc24:	e1a0c00d 	mov	ip, sp
        23bc28:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23bc2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23bc30:	e24cb014 	sub	fp, ip, #20	; 0x14
        23bc34:	e1a05000 	mov	r5, r0
        23bc38:	e1a04001 	mov	r4, r1
        23bc3c:	e1a06002 	mov	r6, r2
        23bc40:	e59b7020 	ldr	r7, [fp, #32]	; fField32
        23bc44:	e24dd008 	sub	sp, sp, #8	; 0x8
        23bc48:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23bc4c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        23bc50:	e590002c 	ldr	r0, [r0, #44]
        23bc54:	e0500001 	subs	r0, r0, r1
        23bc58:	13a00001 	movne	r0, #1	; 0x1
        23bc5c:	e20030ff 	and	r3, r0, #255	; 0xff
        23bc60:	e1a0200d 	mov	r2, sp
        23bc64:	e92d000c 	stmdb	sp!, {r2, r3}
        23bc68:	e28b1020 	add	r1, fp, #32	; 0x20
        23bc6c:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        23bc70:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        23bc74:	e1a01004 	mov	r1, r4
        23bc78:	e5950008 	ldr	r0, [r5, #8]	; fField8
        23bc7c:	e8bd000c 	ldmia	sp!, {r2, r3}
        23bc80:	eb654270 	bl	1b8c648 <TXDisplay::$GetLineHilite(long, TXOffsetRange, TXLineHilite *, unsigned char)>
        23bc84:	e5970000 	ldr	r0, [r7]
        23bc88:	e58d0000 	str	r0, [sp]
        23bc8c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        23bc90:	e590001c 	ldr	r0, [r0, #28]	; fField28
        23bc94:	e1a02004 	mov	r2, r4
        23bc98:	e1a01004 	mov	r1, r4
        23bc9c:	eb65468a 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        23bca0:	e59d1000 	ldr	r1, [sp]
        23bca4:	e0800001 	add	r0, r0, r1
        23bca8:	e58d0008 	str	r0, [sp, #8]	; fField8
        23bcac:	e5970004 	ldr	r0, [r7, #4]	; fField4
        23bcb0:	e58d0004 	str	r0, [sp, #4]	; fField4
        23bcb4:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        23bcb8:	e2811902 	add	r1, r1, #32768	; 0x8000
        23bcbc:	e1a01841 	mov	r1, r1, asr #16
        23bcc0:	e1a01801 	mov	r1, r1, lsl #16
        23bcc4:	e0800841 	add	r0, r0, r1, asr #16
        23bcc8:	e58d0004 	str	r0, [sp, #4]	; fField4
        23bccc:	e5971004 	ldr	r1, [r7, #4]	; fField4
        23bcd0:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        23bcd4:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        23bcd8:	e0800002 	add	r0, r0, r2
        23bcdc:	e2800902 	add	r0, r0, #32768	; 0x8000
        23bce0:	e1a00840 	mov	r0, r0, asr #16
        23bce4:	e1a00800 	mov	r0, r0, lsl #16
        23bce8:	e0810840 	add	r0, r1, r0, asr #16
        23bcec:	e58d000c 	str	r0, [sp, #12]	; fField12
        23bcf0:	e1a01000 	mov	r1, r0
        23bcf4:	e597000c 	ldr	r0, [r7, #12]	; fField12
        23bcf8:	e1510000 	cmp	r1, r0
        23bcfc:	c58d000c 	strgt	r0, [sp, #12]	; fField12
        23bd00:	e1a02006 	mov	r2, r6
        23bd04:	e1a0100d 	mov	r1, sp
        23bd08:	e1a00005 	mov	r0, r5
        23bd0c:	eb6556db 	bl	1b91880 <TXHilite::$HiliteRect( const(TXLongRect const &, long))>
        23bd10:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        23bd14:	e5870000 	str	r0, [r7]
        23bd18:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21
 * Address: 0023bd1c
 */
void TXHilite::HiliteFrame() {
    /*
        23bd1c:	e1a0c00d 	mov	ip, sp
        23bd20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23bd24:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23bd28:	e24cb014 	sub	fp, ip, #20	; 0x14
        23bd2c:	e1a05000 	mov	r5, r0
        23bd30:	e1a04001 	mov	r4, r1
        23bd34:	e59b8020 	ldr	r8, [fp, #32]	; fField32
        23bd38:	e59ba01c 	ldr	sl, [fp, #28]	; fField28
        23bd3c:	e24dd008 	sub	sp, sp, #8	; 0x8
        23bd40:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23bd44:	e1a0200d 	mov	r2, sp
        23bd48:	e5b0901c 	ldr	r9, [r0, #28]!	; fField28
        23bd4c:	e1a00009 	mov	r0, r9
        23bd50:	e5993000 	ldr	r3, [r9]
        23bd54:	e1a0e00f 	mov	lr, pc
        23bd58:	e283f030 	add	pc, r3, #48	; 0x30
        23bd5c:	e3300000 	teq	r0, #0	; 0x0
        23bd60:	0a000004 	beq	23bd78 <HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21+0x5c>
        23bd64:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        23bd68:	e150000a 	cmp	r0, sl
        23bd6c:	a59d0000 	ldrge	r0, [sp]
        23bd70:	a1580000 	cmpge	r8, r0
        23bd74:	aa000000 	bge	23bd7c <HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21+0x60>
        23bd78:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23bd7c:	e24dd010 	sub	sp, sp, #16	; 0x10
        23bd80:	e5950008 	ldr	r0, [r5, #8]	; fField8
        23bd84:	e1a0200d 	mov	r2, sp
        23bd88:	e1a01004 	mov	r1, r4
        23bd8c:	e5b03008 	ldr	r3, [r0, #8]!	; fField8
        23bd90:	e1a00003 	mov	r0, r3
        23bd94:	e5933000 	ldr	r3, [r3]
        23bd98:	e1a0e00f 	mov	lr, pc
        23bd9c:	e283f010 	add	pc, r3, #16	; 0x10
        23bda0:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        23bda4:	e15a0000 	cmp	sl, r0
        23bda8:	b59d0014 	ldrlt	r0, [sp, #20]	; fField20
        23bdac:	b1500008 	cmplt	r0, r8
        23bdb0:	aa00000c 	bge	23bde8 <HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21+0xcc>
        23bdb4:	e1a01004 	mov	r1, r4
        23bdb8:	e1a00009 	mov	r0, r9
        23bdbc:	e5992000 	ldr	r2, [r9]
        23bdc0:	e1a0e00f 	mov	lr, pc
        23bdc4:	e282f020 	add	pc, r2, #32	; 0x20
        23bdc8:	e59d1000 	ldr	r1, [sp]
        23bdcc:	e0800001 	add	r0, r0, r1
        23bdd0:	e1a02004 	mov	r2, r4
        23bdd4:	e58d0008 	str	r0, [sp, #8]	; fField8
        23bdd8:	e1a0100d 	mov	r1, sp
        23bddc:	e1a00005 	mov	r0, r5
        23bde0:	eb6556a6 	bl	1b91880 <TXHilite::$HiliteRect( const(TXLongRect const &, long))>
        23bde4:	ea000034 	b	23bebc <HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21+0x1a0>
        23bde8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        23bdec:	e15a0000 	cmp	sl, r0
        23bdf0:	c1a0000a 	movgt	r0, sl
        23bdf4:	e1a06000 	mov	r6, r0
        23bdf8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        23bdfc:	e1580000 	cmp	r8, r0
        23be00:	b1a00008 	movlt	r0, r8
        23be04:	e1a07000 	mov	r7, r0
        23be08:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        23be0c:	e1560000 	cmp	r6, r0
        23be10:	da000006 	ble	23be30 <HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21+0x114>
        23be14:	e2462001 	sub	r2, r6, #1	; 0x1
        23be18:	e1a00009 	mov	r0, r9
        23be1c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        23be20:	eb654629 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        23be24:	e59d1000 	ldr	r1, [sp]
        23be28:	e0800001 	add	r0, r0, r1
        23be2c:	e58d0000 	str	r0, [sp]
        23be30:	e136000a 	teq	r6, sl
        23be34:	1a00000d 	bne	23be70 <HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21+0x154>
        23be38:	e1a0300d 	mov	r3, sp
        23be3c:	e92d0008 	stmdb	sp!, {r3}
        23be40:	e28b101c 	add	r1, fp, #28	; 0x1c
        23be44:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        23be48:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        23be4c:	e1a02004 	mov	r2, r4
        23be50:	e1a01006 	mov	r1, r6
        23be54:	e1a00005 	mov	r0, r5
        23be58:	e49d3004 	ldr	r3, [sp], #4	; fField4
        23be5c:	eb655688 	bl	1b91884 <$HiliteLine__8TXHiliteCFlT113TXOffsetRangeP10TXLongRect>
        23be60:	e28dd010 	add	sp, sp, #16	; 0x10
        23be64:	e2866001 	add	r6, r6, #1	; 0x1
        23be68:	e1560007 	cmp	r6, r7
        23be6c:	ca000012 	bgt	23bebc <HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21+0x1a0>
        23be70:	e1360007 	teq	r6, r7
        23be74:	01370008 	teqeq	r7, r8
        23be78:	0a000012 	beq	23bec8 <HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21+0x1ac>
        23be7c:	e1a0a007 	mov	sl, r7
        23be80:	e1370008 	teq	r7, r8
        23be84:	024aa001 	subeq	sl, sl, #1	; 0x1
        23be88:	e1a0200a 	mov	r2, sl
        23be8c:	e1a01006 	mov	r1, r6
        23be90:	e1a00009 	mov	r0, r9
        23be94:	eb65460c 	bl	1b8d6cc <$GetLinesHeight__14TXLinesHeightsCFlT1>
        23be98:	e59d1000 	ldr	r1, [sp]
        23be9c:	e0800001 	add	r0, r0, r1
        23bea0:	e1a02004 	mov	r2, r4
        23bea4:	e58d0008 	str	r0, [sp, #8]	; fField8
        23bea8:	e1a0100d 	mov	r1, sp
        23beac:	e1a00005 	mov	r0, r5
        23beb0:	eb655672 	bl	1b91880 <TXHilite::$HiliteRect( const(TXLongRect const &, long))>
        23beb4:	e13a0007 	teq	sl, r7
        23beb8:	1a000000 	bne	23bec0 <HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21+0x1a4>
        23bebc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23bec0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        23bec4:	e58d0000 	str	r0, [sp]
        23bec8:	e1a0300d 	mov	r3, sp
        23becc:	e92d0008 	stmdb	sp!, {r3}
        23bed0:	e28b101c 	add	r1, fp, #28	; 0x1c
        23bed4:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        23bed8:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        23bedc:	e1a02004 	mov	r2, r4
        23bee0:	e1a01007 	mov	r1, r7
        23bee4:	e1a00005 	mov	r0, r5
        23bee8:	e49d3004 	ldr	r3, [sp], #4	; fField4
        23beec:	eb655664 	bl	1b91884 <$HiliteLine__8TXHiliteCFlT113TXOffsetRangeP10TXLongRect>
        23bef0:	e28dd020 	add	sp, sp, #32	; 0x20
        23bef4:	eaffff9f 	b	23bd78 <HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21+0x5c>
    */
}

/**
 * Symbol: TXHilite::CalcRangePosition(TXOffsetRange, TXRunPositionInfo *)
 * Address: 0023bef8
 */
TXHilite::CalcRangePosition(TXOffsetRange, TXRunPositionInfo *) {
    /*
        23bef8:	e1a0c00d 	mov	ip, sp
        23befc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23bf00:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23bf04:	e24cb014 	sub	fp, ip, #20	; 0x14
        23bf08:	e24dd010 	sub	sp, sp, #16	; 0x10
        23bf0c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23bf10:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23bf14:	e1a0200d 	mov	r2, sp
        23bf18:	e28b1008 	add	r1, fp, #8	; 0x8
        23bf1c:	eb659024 	bl	1b9ffb4 <Textension::$GetRangeBounds(TXOffsetRange const &, TXLongRect *)>
        23bf20:	e24dd008 	sub	sp, sp, #8	; 0x8
        23bf24:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23bf28:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23bf2c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23bf30:	e1a0200d 	mov	r2, sp
        23bf34:	e28d1008 	add	r1, sp, #8	; 0x8
        23bf38:	ebfff823 	bl	239fcc <TXFrames::AbsToDraw( const(TXLongRect const &, Rect *))>
        23bf3c:	e59d1000 	ldr	r1, [sp]
        23bf40:	e1a01841 	mov	r1, r1, asr #16
        23bf44:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        23bf48:	e5801000 	str	r1, [r0]
        23bf4c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        23bf50:	e1a01841 	mov	r1, r1, asr #16
        23bf54:	e59d0000 	ldr	r0, [sp]
        23bf58:	e0410840 	sub	r0, r1, r0, asr #16
        23bf5c:	e59b1018 	ldr	r1, [fp, #24]	; fField24
        23bf60:	e5a10004 	str	r0, [r1, #4]!	; fField4
        23bf64:	e59d0000 	ldr	r0, [sp]
        23bf68:	e1a00800 	mov	r0, r0, lsl #16
        23bf6c:	e59b1018 	ldr	r1, [fp, #24]	; fField24
        23bf70:	e5a10008 	str	r0, [r1, #8]!	; fField8
        23bf74:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        23bf78:	e59d0000 	ldr	r0, [sp]
        23bf7c:	e0410000 	sub	r0, r1, r0
        23bf80:	e1a00800 	mov	r0, r0, lsl #16
        23bf84:	e59b1018 	ldr	r1, [fp, #24]	; fField24
        23bf88:	e5a1000c 	str	r0, [r1, #12]!	; fField12
        23bf8c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::CalcCaretRect(void)
 * Address: 0023bf90
 */
TXHilite::CalcCaretRect(void) {
    /*
        23bf90:	e1a0c00d 	mov	ip, sp
        23bf94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23bf98:	e24cb004 	sub	fp, ip, #4	; 0x4
        23bf9c:	e1a04000 	mov	r4, r0
        23bfa0:	e24dd010 	sub	sp, sp, #16	; 0x10
        23bfa4:	e2801034 	add	r1, r0, #52	; 0x34
        23bfa8:	e1a05001 	mov	r5, r1
        23bfac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23bfb0:	e1a0200d 	mov	r2, sp
        23bfb4:	eb658ffe 	bl	1b9ffb4 <Textension::$GetRangeBounds(TXOffsetRange const &, TXLongRect *)>
        23bfb8:	e2840020 	add	r0, r4, #32	; 0x20
        23bfbc:	e89d500c 	ldmia	sp, {r2, r3, ip, lr}
        23bfc0:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        23bfc4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23bfc8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        23bfcc:	e8950006 	ldmia	r5, {r1, r2}
        23bfd0:	eb6549cb 	bl	1b8e704 <TXFrameFormatter::$CharToFrame( const(TXOffset))>
        23bfd4:	e5a40030 	str	r0, [r4, #48]!	; fField48
        23bfd8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::GetHiliteRgn(unsigned char, unsigned char)
 * Address: 0023bfdc
 */
TXHilite::GetHiliteRgn(unsigned char, unsigned char) {
    /*
        23bfdc:	e1a0c00d 	mov	ip, sp
        23bfe0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23bfe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23bfe8:	e1a04000 	mov	r4, r0
        23bfec:	e20150ff 	and	r5, r1, #255	; 0xff
        23bff0:	e20260ff 	and	r6, r2, #255	; 0xff
        23bff4:	e24dd004 	sub	sp, sp, #4	; 0x4
        23bff8:	e1a0000d 	mov	r0, sp
        23bffc:	eb66cde8 	bl	1bef7a4 <$GetPort(GrafPort **)>
        23c000:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23c004:	eb657b45 	bl	1b9ad20 <TXStyledText::$GetTextPort( const(void))>
        23c008:	eb66cde7 	bl	1bef7ac <$SetPort(GrafPort *)>
        23c00c:	eb645638 	bl	1b518f4 <$OpenRgn(void)>
        23c010:	e1a00004 	mov	r0, r4
        23c014:	eb655216 	bl	1b90874 <TXHilite::$Draw(void)>
        23c018:	eb64562a 	bl	1b518c8 <$NewRgn(void)>
        23c01c:	e1a04000 	mov	r4, r0
        23c020:	eb6445a0 	bl	1b4d6a8 <$CloseRgn(Region **)>
        23c024:	e3350000 	teq	r5, #0	; 0x0
        23c028:	0a000011 	beq	23c074 <TXHilite::GetHiliteRgn(unsigned char, unsigned char)+0x98>
        23c02c:	e59f7084 	ldr	r7, [pc, #84]	; 23c0b8 <TXHilite::GetHiliteRgn(unsigned char, unsigned char)+0xdc>
        23c030:	e5970000 	ldr	r0, [r7]
        23c034:	eb653523 	bl	1b894c8 <TXTempReferences::$Get(void)>
        23c038:	e1a01000 	mov	r1, r0
        23c03c:	e1a05000 	mov	r5, r0
        23c040:	e1a00004 	mov	r0, r4
        23c044:	eb64459a 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        23c048:	e1a00005 	mov	r0, r5
        23c04c:	e3a02001 	mov	r2, #1	; 0x1
        23c050:	e3a01001 	mov	r1, #1	; 0x1
        23c054:	eb6451fa 	bl	1b50844 <$InsetRgn__FPP6RegionlT2>
        23c058:	e1a02004 	mov	r2, r4
        23c05c:	e1a01005 	mov	r1, r5
        23c060:	e1a00004 	mov	r0, r4
        23c064:	eb644598 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
        23c068:	e1a01005 	mov	r1, r5
        23c06c:	e5970000 	ldr	r0, [r7]
        23c070:	eb653515 	bl	1b894cc <TXTempReferences::$Done(void *)>
        23c074:	e3360000 	teq	r6, #0	; 0x0
        23c078:	0a00000a 	beq	23c0a8 <TXHilite::GetHiliteRgn(unsigned char, unsigned char)+0xcc>
        23c07c:	e3a00000 	mov	r0, #0	; 0x0
        23c080:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        23c084:	e1a0000d 	mov	r0, sp
        23c088:	eb6455fe 	bl	1b51888 <$LocalToGlobal(Point *)>
        23c08c:	e59d1002 	ldr	r1, [sp, #2]
        23c090:	e1a01841 	mov	r1, r1, asr #16
        23c094:	e59d2000 	ldr	r2, [sp]
        23c098:	e1a02842 	mov	r2, r2, asr #16
        23c09c:	e1a00004 	mov	r0, r4
        23c0a0:	eb645611 	bl	1b518ec <$OffsetRgn__FPP6RegionlT2>
        23c0a4:	e28dd004 	add	sp, sp, #4	; 0x4
        23c0a8:	e59d0000 	ldr	r0, [sp]
        23c0ac:	eb66cdbe 	bl	1bef7ac <$SetPort(GrafPort *)>
        23c0b0:	e1a00004 	mov	r0, r4
        23c0b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23c0b8:	0c104d78 	ldceq	13, cr4, [r0], -#480
    */
}

/**
 * Symbol: TXHilite::IsPointInHilite(Point)
 * Address: 0023c0bc
 */
TXHilite::IsPointInHilite(Point) {
    /*
        23c0bc:	e1a0c00d 	mov	ip, sp
        23c0c0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23c0c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23c0c8:	e1a04000 	mov	r4, r0
        23c0cc:	e2800034 	add	r0, r0, #52	; 0x34
        23c0d0:	e1a05000 	mov	r5, r0
        23c0d4:	e3a07001 	mov	r7, #1	; 0x1
        23c0d8:	e4902008 	ldr	r2, [r0], #8	; fField8
        23c0dc:	e5903000 	ldr	r3, [r0]
        23c0e0:	e3a00000 	mov	r0, #0	; 0x0
        23c0e4:	e1330002 	teq	r3, r2
        23c0e8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23c0ec:	e1a06000 	mov	r6, r0
        23c0f0:	e24dd018 	sub	sp, sp, #24	; 0x18
        23c0f4:	e28d2004 	add	r2, sp, #4	; 0x4
        23c0f8:	e1a0300d 	mov	r3, sp
        23c0fc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23c100:	e92d0008 	stmdb	sp!, {r3}
        23c104:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23c108:	e1a03002 	mov	r3, r2
        23c10c:	e28d200c 	add	r2, sp, #12	; 0xc
        23c110:	eb654148 	bl	1b8c638 <TXDisplay::$PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        23c114:	e5fd0004 	ldrb	r0, [sp, #4]!	; fField4
        23c118:	e3300000 	teq	r0, #0	; 0x0
        23c11c:	1a000013 	bne	23c170 <TXHilite::IsPointInHilite(Point)+0xb4>
        23c120:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        23c124:	e5950000 	ldr	r0, [r5]
        23c128:	e1510000 	cmp	r1, r0
        23c12c:	da000005 	ble	23c148 <TXHilite::IsPointInHilite(Point)+0x8c>
        23c130:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        23c134:	e5950008 	ldr	r0, [r5, #8]	; fField8
        23c138:	e1510000 	cmp	r1, r0
        23c13c:	aa000001 	bge	23c148 <TXHilite::IsPointInHilite(Point)+0x8c>
        23c140:	e1a00007 	mov	r0, r7
        23c144:	ea00000a 	b	23c174 <TXHilite::IsPointInHilite(Point)+0xb8>
        23c148:	e1a01005 	mov	r1, r5
        23c14c:	e28d0008 	add	r0, sp, #8	; 0x8
        23c150:	ebffdf9e 	bl	233fd0 <TXOffset::operator==( const(TXOffset const &))>
        23c154:	e3300000 	teq	r0, #0	; 0x0
        23c158:	1afffff8 	bne	23c140 <TXHilite::IsPointInHilite(Point)+0x84>
        23c15c:	e284103c 	add	r1, r4, #60	; 0x3c
        23c160:	e28d0010 	add	r0, sp, #16	; 0x10
        23c164:	ebffdf99 	bl	233fd0 <TXOffset::operator==( const(TXOffset const &))>
        23c168:	e3300000 	teq	r0, #0	; 0x0
        23c16c:	1afffff3 	bne	23c140 <TXHilite::IsPointInHilite(Point)+0x84>
        23c170:	e1a00006 	mov	r0, r6
        23c174:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::GetCaretRect(TXLongRect *)
 * Address: 0023c178
 */
TXHilite::GetCaretRect(TXLongRect *) {
    /*
        23c178:	e1a0c00d 	mov	ip, sp
        23c17c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23c180:	e24cb004 	sub	fp, ip, #4	; 0x4
        23c184:	e1a04000 	mov	r4, r0
        23c188:	e1a05001 	mov	r5, r1
        23c18c:	e5900020 	ldr	r0, [r0, #32]	; fField32
        23c190:	e3500000 	cmp	r0, #0	; 0x0
        23c194:	b1a00004 	movlt	r0, r4
        23c198:	bb6555bc 	bllt	1b91890 <TXHilite::$CalcCaretRect(void)>
        23c19c:	e2840020 	add	r0, r4, #32	; 0x20
        23c1a0:	e890500c 	ldmia	r0, {r2, r3, ip, lr}
        23c1a4:	e885500c 	stmia	r5, {r2, r3, ip, lr}
        23c1a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::HiliteRange(TXOffsetRange)
 * Address: 0023c1ac
 */
TXHilite::HiliteRange(TXOffsetRange) {
    /*
        23c1ac:	e1a0c00d 	mov	ip, sp
        23c1b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23c1b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23c1b8:	e24cb014 	sub	fp, ip, #20	; 0x14
        23c1bc:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        23c1c0:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        23c1c4:	e1300001 	teq	r0, r1
        23c1c8:	059b0004 	ldreq	r0, [fp, #4]	; fField4
        23c1cc:	05b01034 	ldreq	r1, [r0, #52]!	; fField52
        23c1d0:	059b0008 	ldreq	r0, [fp, #8]	; fField8
        23c1d4:	01310000 	teqeq	r1, r0
        23c1d8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        23c1dc:	e24dd024 	sub	sp, sp, #36	; 0x24
        23c1e0:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23c1e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23c1e8:	e3a03000 	mov	r3, #0	; 0x0
        23c1ec:	e28b2008 	add	r2, fp, #8	; 0x8
        23c1f0:	e8920006 	ldmia	r2, {r1, r2}
        23c1f4:	eb658f6d 	bl	1b9ffb0 <Textension::$CharToLine( const(TXOffset, TXOffsetRange *))>
        23c1f8:	e1a05000 	mov	r5, r0
        23c1fc:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23c200:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23c204:	e3a03000 	mov	r3, #0	; 0x0
        23c208:	e28b2010 	add	r2, fp, #16	; 0x10
        23c20c:	e8920006 	ldmia	r2, {r1, r2}
        23c210:	eb658f66 	bl	1b9ffb0 <Textension::$CharToLine( const(TXOffset, TXOffsetRange *))>
        23c214:	e1a04000 	mov	r4, r0
        23c218:	e3e00001 	mvn	r0, #1	; 0x1
        23c21c:	e58d0020 	str	r0, [sp, #32]	; fField32
        23c220:	e3a00000 	mov	r0, #0	; 0x0
        23c224:	e58d0014 	str	r0, [sp, #20]	; fField20
        23c228:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23c22c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23c230:	e1a0100d 	mov	r1, sp
        23c234:	eb6540f5 	bl	1b8c610 <TXDisplay::$GetViewFrames( const(TXSectFrames *))>
        23c238:	e1a0000d 	mov	r0, sp
        23c23c:	eb654947 	bl	1b8e760 <TXSectFrames::$GetNextFrame(void)>
        23c240:	e3500000 	cmp	r0, #0	; 0x0
        23c244:	ba00000e 	blt	23c284 <TXHilite::HiliteRange(TXOffsetRange)+0xd8>
        23c248:	e1a03004 	mov	r3, r4
        23c24c:	e1a02005 	mov	r2, r5
        23c250:	e92d000c 	stmdb	sp!, {r2, r3}
        23c254:	e28b2018 	add	r2, fp, #24	; 0x18
        23c258:	e912500c 	ldmdb	r2, {r2, r3, ip, lr}
        23c25c:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        23c260:	e1a01000 	mov	r1, r0
        23c264:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        23c268:	e8bd000c 	ldmia	sp!, {r2, r3}
        23c26c:	eb655585 	bl	1b91888 <$HiliteFrame__8TXHiliteCFl13TXOffsetRangeN21>
        23c270:	e28dd010 	add	sp, sp, #16	; 0x10
        23c274:	e1a0000d 	mov	r0, sp
        23c278:	eb654938 	bl	1b8e760 <TXSectFrames::$GetNextFrame(void)>
        23c27c:	e3500000 	cmp	r0, #0	; 0x0
        23c280:	aafffff0 	bge	23c248 <TXHilite::HiliteRange(TXOffsetRange)+0x9c>
        23c284:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::IsCustomHilite(TXOffsetRange const *)
 * Address: 0023c288
 */
TXHilite::IsCustomHilite(TXOffsetRange const *) {
    /*
        23c288:	e1a0c00d 	mov	ip, sp
        23c28c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23c290:	e24cb004 	sub	fp, ip, #4	; 0x4
        23c294:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23c298:	eb658f48 	bl	1b9ffc0 <Textension::$IsRangeGraphicsRun(TXOffsetRange const *)>
        23c29c:	e1b04000 	movs	r4, r0
        23c2a0:	0a000006 	beq	23c2c0 <TXHilite::IsCustomHilite(TXOffsetRange const *)+0x38>
        23c2a4:	e1a00004 	mov	r0, r4
        23c2a8:	e5941000 	ldr	r1, [r4]
        23c2ac:	e1a0e00f 	mov	lr, pc
        23c2b0:	e281f01c 	add	pc, r1, #28	; 0x1c
        23c2b4:	e3100001 	tst	r0, #1	; 0x1
        23c2b8:	11a00004 	movne	r0, r4
        23c2bc:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        23c2c0:	e3a00000 	mov	r0, #0	; 0x0
        23c2c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)
 * Address: 0023c2c8
 */
TXHilite::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char) {
    /*
        23c2c8:	e1a0c00d 	mov	ip, sp
        23c2cc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        23c2d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23c2d4:	e1a04000 	mov	r4, r0
        23c2d8:	e1a05001 	mov	r5, r1
        23c2dc:	e20260ff 	and	r6, r2, #255	; 0xff
        23c2e0:	e5d07019 	ldrb	r7, [r0, #25]	; fField25
        23c2e4:	e3370002 	teq	r7, #2	; 0x2
        23c2e8:	03a06000 	moveq	r6, #0	; 0x0
        23c2ec:	e2840034 	add	r0, r4, #52	; 0x34
        23c2f0:	e1a09000 	mov	r9, r0
        23c2f4:	e1a01005 	mov	r1, r5
        23c2f8:	ebffdf6a 	bl	2340a8 <TXOffsetRange::operator==( const(TXOffsetRange const &))>
        23c2fc:	e1b08000 	movs	r8, r0
        23c300:	0a000002 	beq	23c310 <TXHilite::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)+0x48>
        23c304:	e3360000 	teq	r6, #0	; 0x0
        23c308:	13370001 	teqne	r7, #1	; 0x1
        23c30c:	0a00000d 	beq	23c348 <TXHilite::SetHiliteRange(TXOffsetRange const &, unsigned char, unsigned char)+0x80>
        23c310:	e3a00001 	mov	r0, #1	; 0x1
        23c314:	e5c4001b 	strb	r0, [r4, #27]	; fField27
        23c318:	e1a00004 	mov	r0, r4
        23c31c:	e3a01001 	mov	r1, #1	; 0x1
        23c320:	eb655143 	bl	1b90834 <TXHilite::$Invalid(unsigned char)>
        23c324:	e895500c 	ldmia	r5, {r2, r3, ip, lr}
        23c328:	e889500c 	stmia	r9, {r2, r3, ip, lr}
        23c32c:	e3360000 	teq	r6, #0	; 0x0
        23c330:	01a01007 	moveq	r1, r7
        23c334:	13a01001 	movne	r1, #1	; 0x1
        23c338:	e1a00004 	mov	r0, r4
        23c33c:	e5942000 	ldr	r2, [r4]
        23c340:	e1a0e00f 	mov	lr, pc
        23c344:	e282f004 	add	pc, r2, #4	; 0x4
        23c348:	e3380000 	teq	r8, #0	; 0x0
        23c34c:	13a00000 	movne	r0, #0	; 0x0
        23c350:	03a00001 	moveq	r0, #1	; 0x1
        23c354:	e20000ff 	and	r0, r0, #255	; 0xff
        23c358:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::SetHiliteStart(TXOffset)
 * Address: 0023c35c
 */
TXHilite::SetHiliteStart(TXOffset) {
    /*
        23c35c:	e1a0c00d 	mov	ip, sp
        23c360:	e92dd837 	stmdb	sp!, {r0, r1, r2, r4, r5, fp, ip, lr, pc}
        23c364:	e24cb004 	sub	fp, ip, #4	; 0x4
        23c368:	e24dd010 	sub	sp, sp, #16	; 0x10
        23c36c:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c370:	e5902034 	ldr	r2, [r0, #52]	; fField52
        23c374:	e51b101c 	ldr	r1, [fp, -#28]	; fField28
        23c378:	e0424001 	sub	r4, r2, r1
        23c37c:	e280203c 	add	r2, r0, #60	; 0x3c
        23c380:	e24b101c 	sub	r1, fp, #28	; 0x1c
        23c384:	e1a0000d 	mov	r0, sp
        23c388:	ebffdf1a 	bl	233ff8 <TXOffsetRange::__ct(TXOffset const &, TXOffset const &)>
        23c38c:	e3340000 	teq	r4, #0	; 0x0
        23c390:	0a000052 	beq	23c4e0 <TXHilite::SetHiliteStart(TXOffset)+0x184>
        23c394:	e3a01000 	mov	r1, #0	; 0x0
        23c398:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c39c:	eb655125 	bl	1b90838 <TXHilite::$IsCustomHilite(TXOffsetRange const *)>
        23c3a0:	e3300000 	teq	r0, #0	; 0x0
        23c3a4:	1a000004 	bne	23c3bc <TXHilite::SetHiliteStart(TXOffset)+0x60>
        23c3a8:	e1a0100d 	mov	r1, sp
        23c3ac:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c3b0:	eb655120 	bl	1b90838 <TXHilite::$IsCustomHilite(TXOffsetRange const *)>
        23c3b4:	e3300000 	teq	r0, #0	; 0x0
        23c3b8:	0a000001 	beq	23c3c4 <TXHilite::SetHiliteStart(TXOffset)+0x68>
        23c3bc:	e3a00001 	mov	r0, #1	; 0x1
        23c3c0:	ea000000 	b	23c3c8 <TXHilite::SetHiliteStart(TXOffset)+0x6c>
        23c3c4:	e3a00000 	mov	r0, #0	; 0x0
        23c3c8:	e20020ff 	and	r2, r0, #255	; 0xff
        23c3cc:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c3d0:	e2801034 	add	r1, r0, #52	; 0x34
        23c3d4:	e3a05001 	mov	r5, #1	; 0x1
        23c3d8:	e5913008 	ldr	r3, [r1, #8]	; fField8
        23c3dc:	e591c000 	ldr	ip, [r1]
        23c3e0:	e133000c 	teq	r3, ip
        23c3e4:	0a000001 	beq	23c3f0 <TXHilite::SetHiliteStart(TXOffset)+0x94>
        23c3e8:	e3320000 	teq	r2, #0	; 0x0
        23c3ec:	0a000010 	beq	23c434 <TXHilite::SetHiliteStart(TXOffset)+0xd8>
        23c3f0:	e3a01000 	mov	r1, #0	; 0x0
        23c3f4:	e5902000 	ldr	r2, [r0]
        23c3f8:	e1a0e00f 	mov	lr, pc
        23c3fc:	e282f004 	add	pc, r2, #4	; 0x4
        23c400:	e51bc020 	ldr	ip, [fp, -#32]	; fField32
        23c404:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        23c408:	e59d1000 	ldr	r1, [sp]
        23c40c:	e1300001 	teq	r0, r1
        23c410:	13a02001 	movne	r2, #1	; 0x1
        23c414:	03a02000 	moveq	r2, #0	; 0x0
        23c418:	e1a0100d 	mov	r1, sp
        23c41c:	e1a0000c 	mov	r0, ip
        23c420:	e3a03001 	mov	r3, #1	; 0x1
        23c424:	e59cc000 	ldr	ip, [ip]
        23c428:	e1a0e00f 	mov	lr, pc
        23c42c:	e28cf008 	add	pc, ip, #8	; 0x8
        23c430:	ea00002a 	b	23c4e0 <TXHilite::SetHiliteStart(TXOffset)+0x184>
        23c434:	e24dd010 	sub	sp, sp, #16	; 0x10
        23c438:	e24b201c 	sub	r2, fp, #28	; 0x1c
        23c43c:	e1a0000d 	mov	r0, sp
        23c440:	ebffdeec 	bl	233ff8 <TXOffsetRange::__ct(TXOffset const &, TXOffset const &)>
        23c444:	e3540000 	cmp	r4, #0	; 0x0
        23c448:	c5cd5004 	strgtb	r5, [sp, #4]	; fField4
        23c44c:	e1a0000d 	mov	r0, sp
        23c450:	eb65341a 	bl	1b894c0 <TXOffsetRange::$CheckBounds(void)>
        23c454:	e28d1010 	add	r1, sp, #16	; 0x10
        23c458:	e931500c 	ldmdb	r1!, {r2, r3, ip, lr}
        23c45c:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        23c460:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c464:	e8bd000e 	ldmia	sp!, {r1, r2, r3}
        23c468:	eb65550c 	bl	1b918a0 <TXHilite::$HiliteRange(TXOffsetRange)>
        23c46c:	e28dd004 	add	sp, sp, #4	; 0x4
        23c470:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c474:	e590101c 	ldr	r1, [r0, #28]	; fField28
        23c478:	e2411001 	sub	r1, r1, #1	; 0x1
        23c47c:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        23c480:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c484:	e1a02000 	mov	r2, r0
        23c488:	e5b0103c 	ldr	r1, [r0, #60]!	; fField60
        23c48c:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        23c490:	e1310000 	teq	r1, r0
        23c494:	13a01001 	movne	r1, #1	; 0x1
        23c498:	03a01000 	moveq	r1, #0	; 0x0
        23c49c:	e1a00002 	mov	r0, r2
        23c4a0:	e5922000 	ldr	r2, [r2]
        23c4a4:	e1a0e00f 	mov	lr, pc
        23c4a8:	e282f004 	add	pc, r2, #4	; 0x4
        23c4ac:	e28d1010 	add	r1, sp, #16	; 0x10
        23c4b0:	e51bc020 	ldr	ip, [fp, -#32]	; fField32
        23c4b4:	e1a0000c 	mov	r0, ip
        23c4b8:	e3a03001 	mov	r3, #1	; 0x1
        23c4bc:	e3a02000 	mov	r2, #0	; 0x0
        23c4c0:	e59cc000 	ldr	ip, [ip]
        23c4c4:	e1a0e00f 	mov	lr, pc
        23c4c8:	e28cf008 	add	pc, ip, #8	; 0x8
        23c4cc:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c4d0:	e590101c 	ldr	r1, [r0, #28]	; fField28
        23c4d4:	e2811001 	add	r1, r1, #1	; 0x1
        23c4d8:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        23c4dc:	e28dd010 	add	sp, sp, #16	; 0x10
        23c4e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::SetHiliteEnd(TXOffset)
 * Address: 0023c4e4
 */
TXHilite::SetHiliteEnd(TXOffset) {
    /*
        23c4e4:	e1a0c00d 	mov	ip, sp
        23c4e8:	e92dd837 	stmdb	sp!, {r0, r1, r2, r4, r5, fp, ip, lr, pc}
        23c4ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        23c4f0:	e24dd010 	sub	sp, sp, #16	; 0x10
        23c4f4:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c4f8:	e590203c 	ldr	r2, [r0, #60]	; fField60
        23c4fc:	e51b101c 	ldr	r1, [fp, -#28]	; fField28
        23c500:	e0414002 	sub	r4, r1, r2
        23c504:	e2801034 	add	r1, r0, #52	; 0x34
        23c508:	e24b201c 	sub	r2, fp, #28	; 0x1c
        23c50c:	e1a0000d 	mov	r0, sp
        23c510:	ebffdeb8 	bl	233ff8 <TXOffsetRange::__ct(TXOffset const &, TXOffset const &)>
        23c514:	e3340000 	teq	r4, #0	; 0x0
        23c518:	0a000054 	beq	23c670 <TXHilite::SetHiliteEnd(TXOffset)+0x18c>
        23c51c:	e3a01000 	mov	r1, #0	; 0x0
        23c520:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c524:	eb6550c3 	bl	1b90838 <TXHilite::$IsCustomHilite(TXOffsetRange const *)>
        23c528:	e3300000 	teq	r0, #0	; 0x0
        23c52c:	1a000004 	bne	23c544 <TXHilite::SetHiliteEnd(TXOffset)+0x60>
        23c530:	e1a0100d 	mov	r1, sp
        23c534:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c538:	eb6550be 	bl	1b90838 <TXHilite::$IsCustomHilite(TXOffsetRange const *)>
        23c53c:	e3300000 	teq	r0, #0	; 0x0
        23c540:	0a000001 	beq	23c54c <TXHilite::SetHiliteEnd(TXOffset)+0x68>
        23c544:	e3a00001 	mov	r0, #1	; 0x1
        23c548:	ea000000 	b	23c550 <TXHilite::SetHiliteEnd(TXOffset)+0x6c>
        23c54c:	e3a00000 	mov	r0, #0	; 0x0
        23c550:	e20010ff 	and	r1, r0, #255	; 0xff
        23c554:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c558:	e2802034 	add	r2, r0, #52	; 0x34
        23c55c:	e5923008 	ldr	r3, [r2, #8]	; fField8
        23c560:	e5922000 	ldr	r2, [r2]
        23c564:	e1330002 	teq	r3, r2
        23c568:	0a000002 	beq	23c578 <TXHilite::SetHiliteEnd(TXOffset)+0x94>
        23c56c:	e3a05000 	mov	r5, #0	; 0x0
        23c570:	e3310000 	teq	r1, #0	; 0x0
        23c574:	0a000010 	beq	23c5bc <TXHilite::SetHiliteEnd(TXOffset)+0xd8>
        23c578:	e3a01000 	mov	r1, #0	; 0x0
        23c57c:	e5902000 	ldr	r2, [r0]
        23c580:	e1a0e00f 	mov	lr, pc
        23c584:	e282f004 	add	pc, r2, #4	; 0x4
        23c588:	e51bc020 	ldr	ip, [fp, -#32]	; fField32
        23c58c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        23c590:	e59d1000 	ldr	r1, [sp]
        23c594:	e1300001 	teq	r0, r1
        23c598:	13a02001 	movne	r2, #1	; 0x1
        23c59c:	03a02000 	moveq	r2, #0	; 0x0
        23c5a0:	e1a0100d 	mov	r1, sp
        23c5a4:	e1a0000c 	mov	r0, ip
        23c5a8:	e3a03001 	mov	r3, #1	; 0x1
        23c5ac:	e59cc000 	ldr	ip, [ip]
        23c5b0:	e1a0e00f 	mov	lr, pc
        23c5b4:	e28cf008 	add	pc, ip, #8	; 0x8
        23c5b8:	ea00002c 	b	23c670 <TXHilite::SetHiliteEnd(TXOffset)+0x18c>
        23c5bc:	e24dd010 	sub	sp, sp, #16	; 0x10
        23c5c0:	e280103c 	add	r1, r0, #60	; 0x3c
        23c5c4:	e24b201c 	sub	r2, fp, #28	; 0x1c
        23c5c8:	e1a0000d 	mov	r0, sp
        23c5cc:	ebffde89 	bl	233ff8 <TXOffsetRange::__ct(TXOffset const &, TXOffset const &)>
        23c5d0:	e3540000 	cmp	r4, #0	; 0x0
        23c5d4:	d5cd500c 	strleb	r5, [sp, #12]	; fField12
        23c5d8:	c5cd5004 	strgtb	r5, [sp, #4]	; fField4
        23c5dc:	e1a0000d 	mov	r0, sp
        23c5e0:	eb6533b6 	bl	1b894c0 <TXOffsetRange::$CheckBounds(void)>
        23c5e4:	e28d1010 	add	r1, sp, #16	; 0x10
        23c5e8:	e931500c 	ldmdb	r1!, {r2, r3, ip, lr}
        23c5ec:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        23c5f0:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c5f4:	e8bd000e 	ldmia	sp!, {r1, r2, r3}
        23c5f8:	eb6554a8 	bl	1b918a0 <TXHilite::$HiliteRange(TXOffsetRange)>
        23c5fc:	e28dd004 	add	sp, sp, #4	; 0x4
        23c600:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c604:	e590101c 	ldr	r1, [r0, #28]	; fField28
        23c608:	e2411001 	sub	r1, r1, #1	; 0x1
        23c60c:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        23c610:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c614:	e1a02000 	mov	r2, r0
        23c618:	e5b01034 	ldr	r1, [r0, #52]!	; fField52
        23c61c:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        23c620:	e1310000 	teq	r1, r0
        23c624:	13a01001 	movne	r1, #1	; 0x1
        23c628:	03a01000 	moveq	r1, #0	; 0x0
        23c62c:	e1a00002 	mov	r0, r2
        23c630:	e5922000 	ldr	r2, [r2]
        23c634:	e1a0e00f 	mov	lr, pc
        23c638:	e282f004 	add	pc, r2, #4	; 0x4
        23c63c:	e28d1010 	add	r1, sp, #16	; 0x10
        23c640:	e51bc020 	ldr	ip, [fp, -#32]	; fField32
        23c644:	e1a0000c 	mov	r0, ip
        23c648:	e3a03001 	mov	r3, #1	; 0x1
        23c64c:	e3a02000 	mov	r2, #0	; 0x0
        23c650:	e59cc000 	ldr	ip, [ip]
        23c654:	e1a0e00f 	mov	lr, pc
        23c658:	e28cf008 	add	pc, ip, #8	; 0x8
        23c65c:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        23c660:	e590101c 	ldr	r1, [r0, #28]	; fField28
        23c664:	e2811001 	add	r1, r1, #1	; 0x1
        23c668:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        23c66c:	e28dd010 	add	sp, sp, #16	; 0x10
        23c670:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::ExtendHilite(TXOffsetRange)
 * Address: 0023c674
 */
TXHilite::ExtendHilite(TXOffsetRange) {
    /*
        23c674:	e1a0c00d 	mov	ip, sp
        23c678:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23c67c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23c680:	e24cb014 	sub	fp, ip, #20	; 0x14
        23c684:	e1a04000 	mov	r4, r0
        23c688:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23c68c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23c690:	e1a0100d 	mov	r1, sp
        23c694:	eb653fda 	bl	1b8c604 <TXDisplay::$SetDrawEnv(TXDrawEnv *)>
        23c698:	e5941034 	ldr	r1, [r4, #52]	; fField52
        23c69c:	e59b0008 	ldr	r0, [fp, #8]	; fField8
        23c6a0:	e0410000 	sub	r0, r1, r0
        23c6a4:	e59b1010 	ldr	r1, [fp, #16]	; fField16
        23c6a8:	e594203c 	ldr	r2, [r4, #60]	; fField60
        23c6ac:	e0411002 	sub	r1, r1, r2
        23c6b0:	e3500000 	cmp	r0, #0	; 0x0
        23c6b4:	d3510000 	cmple	r1, #0	; 0x0
        23c6b8:	c3a02001 	movgt	r2, #1	; 0x1
        23c6bc:	d3a02000 	movle	r2, #0	; 0x0
        23c6c0:	e20220ff 	and	r2, r2, #255	; 0xff
        23c6c4:	e3500000 	cmp	r0, #0	; 0x0
        23c6c8:	ca000007 	bgt	23c6ec <TXHilite::ExtendHilite(TXOffsetRange)+0x78>
        23c6cc:	e3320000 	teq	r2, #0	; 0x0
        23c6d0:	1a00000a 	bne	23c700 <TXHilite::ExtendHilite(TXOffsetRange)+0x8c>
        23c6d4:	e3500000 	cmp	r0, #0	; 0x0
        23c6d8:	b2600000 	rsblt	r0, r0, #0	; 0x0
        23c6dc:	e3510000 	cmp	r1, #0	; 0x0
        23c6e0:	b2611000 	rsblt	r1, r1, #0	; 0x0
        23c6e4:	e1500001 	cmp	r0, r1
        23c6e8:	aa000004 	bge	23c700 <TXHilite::ExtendHilite(TXOffsetRange)+0x8c>
        23c6ec:	e1a00004 	mov	r0, r4
        23c6f0:	e28b2008 	add	r2, fp, #8	; 0x8
        23c6f4:	e8920006 	ldmia	r2, {r1, r2}
        23c6f8:	eb65504f 	bl	1b9083c <TXHilite::$SetHiliteStart(TXOffset)>
        23c6fc:	ea000003 	b	23c710 <TXHilite::ExtendHilite(TXOffsetRange)+0x9c>
        23c700:	e1a00004 	mov	r0, r4
        23c704:	e28b2010 	add	r2, fp, #16	; 0x10
        23c708:	e8920006 	ldmia	r2, {r1, r2}
        23c70c:	eb65504b 	bl	1b90840 <TXHilite::$SetHiliteEnd(TXOffset)>
        23c710:	e1a0100d 	mov	r1, sp
        23c714:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        23c718:	eb653fba 	bl	1b8c608 <TXDisplay::$RestoreDrawEnv(TXDrawEnv const &)>
        23c71c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::GetClickRange(Point, int, TXOffsetRange *)
 * Address: 0023c720
 */
TXHilite::GetClickRange(Point, int, TXOffsetRange *) {
    /*
        23c720:	e1a0c00d 	mov	ip, sp
        23c724:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23c728:	e24cb004 	sub	fp, ip, #4	; 0x4
        23c72c:	e1a04003 	mov	r4, r3
        23c730:	e24dd008 	sub	sp, sp, #8	; 0x8
        23c734:	e3320001 	teq	r2, #1	; 0x1
        23c738:	0a00000f 	beq	23c77c <TXHilite::GetClickRange(Point, int, TXOffsetRange *)+0x5c>
        23c73c:	e3a05000 	mov	r5, #0	; 0x0
        23c740:	e3320002 	teq	r2, #2	; 0x2
        23c744:	1a000016 	bne	23c7a4 <TXHilite::GetClickRange(Point, int, TXOffsetRange *)+0x84>
        23c748:	e1a0300d 	mov	r3, sp
        23c74c:	e92d0008 	stmdb	sp!, {r3}
        23c750:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23c754:	e28d3008 	add	r3, sp, #8	; 0x8
        23c758:	e1a02004 	mov	r2, r4
        23c75c:	eb658e12 	bl	1b9ffac <Textension::$PointToWord(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        23c760:	e28dd004 	add	sp, sp, #4	; 0x4
        23c764:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23c768:	e5941000 	ldr	r1, [r4]
        23c76c:	e1500001 	cmp	r0, r1
        23c770:	aa000016 	bge	23c7d0 <TXHilite::GetClickRange(Point, int, TXOffsetRange *)+0xb0>
        23c774:	e1a00005 	mov	r0, r5
        23c778:	ea000019 	b	23c7e4 <TXHilite::GetClickRange(Point, int, TXOffsetRange *)+0xc4>
        23c77c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23c780:	e28d2004 	add	r2, sp, #4	; 0x4
        23c784:	e1a0300d 	mov	r3, sp
        23c788:	e92d0008 	stmdb	sp!, {r3}
        23c78c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23c790:	e1a03002 	mov	r3, r2
        23c794:	e1a02004 	mov	r2, r4
        23c798:	eb653fa6 	bl	1b8c638 <TXDisplay::$PointToChar(Point, TXOffsetRange *, unsigned char *, unsigned char *)>
        23c79c:	e28dd004 	add	sp, sp, #4	; 0x4
        23c7a0:	ea00000a 	b	23c7d0 <TXHilite::GetClickRange(Point, int, TXOffsetRange *)+0xb0>
        23c7a4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        23c7a8:	e28d2004 	add	r2, sp, #4	; 0x4
        23c7ac:	e1a0300d 	mov	r3, sp
        23c7b0:	e92d0008 	stmdb	sp!, {r3}
        23c7b4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23c7b8:	e1a03002 	mov	r3, r2
        23c7bc:	e1a02004 	mov	r2, r4
        23c7c0:	eb653f9f 	bl	1b8c644 <$PointToLine__9TXDisplayCF5PointP13TXOffsetRangePUcT3>
        23c7c4:	e28dd004 	add	sp, sp, #4	; 0x4
        23c7c8:	e3500000 	cmp	r0, #0	; 0x0
        23c7cc:	baffffe8 	blt	23c774 <TXHilite::GetClickRange(Point, int, TXOffsetRange *)+0x54>
        23c7d0:	e5940000 	ldr	r0, [r4]
        23c7d4:	e3500000 	cmp	r0, #0	; 0x0
        23c7d8:	b3a00000 	movlt	r0, #0	; 0x0
        23c7dc:	a3a00001 	movge	r0, #1	; 0x1
        23c7e0:	e20000ff 	and	r0, r0, #255	; 0xff
        23c7e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXHilite::CalcAutoScrollParams(Point *, long, TXLongPoint *)
 * Address: 0023c7e8
 */
TXHilite::CalcAutoScrollParams(Point *, long, TXLongPoint *) {
    /*
        23c7e8:	e1a0c00d 	mov	ip, sp
        23c7ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23c7f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23c7f4:	e1a05000 	mov	r5, r0
        23c7f8:	e1a06002 	mov	r6, r2
        23c7fc:	e1a04003 	mov	r4, r3
        23c800:	e3a00000 	mov	r0, #0	; 0x0
        23c804:	e5830000 	str	r0, [r3]
        23c808:	e5830004 	str	r0, [r3, #4]	; fField4
        23c80c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23c810:	e28d0004 	add	r0, sp, #4	; 0x4
        23c814:	e5952004 	ldr	r2, [r5, #4]	; fField4
        23c818:	e5922010 	ldr	r2, [r2, #16]	; fField16
        23c81c:	e5922020 	ldr	r2, [r2, #32]	; fField32
        23c820:	e5922000 	ldr	r2, [r2]
        23c824:	e2822004 	add	r2, r2, #4	; 0x4
        23c828:	e8925000 	ldmia	r2, {ip, lr}
        23c82c:	e8805000 	stmia	r0, {ip, lr}
        23c830:	e5910000 	ldr	r0, [r1]
        23c834:	e58d0000 	str	r0, [sp]
        23c838:	e28d1004 	add	r1, sp, #4	; 0x4
        23c83c:	eb64583e 	bl	1b5293c <$PtInRect(Point, Rect *)>
        23c840:	e3300000 	teq	r0, #0	; 0x0
        23c844:	0a000000 	beq	23c84c <TXHilite::CalcAutoScrollParams(Point *, long, TXLongPoint *)+0x64>
        23c848:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23c84c:	e1a01006 	mov	r1, r6
        23c850:	e3a0003c 	mov	r0, #60	; 0x3c
        23c854:	eb65d839 	bl	1bb2940 <$__rt_sdiv>
        23c858:	e3a01003 	mov	r1, #3	; 0x3
        23c85c:	e3500003 	cmp	r0, #3	; 0x3
        23c860:	a1a00001 	movge	r0, r1
        23c864:	e3a01012 	mov	r1, #18	; 0x12
        23c868:	e1a00011 	mov	r0, r1, lsl r0
        23c86c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        23c870:	e59d2000 	ldr	r2, [sp]
        23c874:	e1a02842 	mov	r2, r2, asr #16
        23c878:	e0421841 	sub	r1, r2, r1, asr #16
        23c87c:	e3510000 	cmp	r1, #0	; 0x0
        23c880:	c2601000 	rsbgt	r1, r0, #0	; 0x0
        23c884:	c5841000 	strgt	r1, [r4]
        23c888:	ca000005 	bgt	23c8a4 <TXHilite::CalcAutoScrollParams(Point *, long, TXLongPoint *)+0xbc>
        23c88c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        23c890:	e1a01841 	mov	r1, r1, asr #16
        23c894:	e59d2000 	ldr	r2, [sp]
        23c898:	e0411842 	sub	r1, r1, r2, asr #16
        23c89c:	e3510000 	cmp	r1, #0	; 0x0
        23c8a0:	c5840000 	strgt	r0, [r4]
        23c8a4:	e59d2002 	ldr	r2, [sp, #2]
        23c8a8:	e1a02842 	mov	r2, r2, asr #16
        23c8ac:	e59d100a 	ldr	r1, [sp, #10]
        23c8b0:	e0421841 	sub	r1, r2, r1, asr #16
        23c8b4:	e3510000 	cmp	r1, #0	; 0x0
        23c8b8:	c2600000 	rsbgt	r0, r0, #0	; 0x0
        23c8bc:	ca000005 	bgt	23c8d8 <TXHilite::CalcAutoScrollParams(Point *, long, TXLongPoint *)+0xf0>
        23c8c0:	e59d2006 	ldr	r2, [sp, #6]
        23c8c4:	e1a02842 	mov	r2, r2, asr #16
        23c8c8:	e59d1002 	ldr	r1, [sp, #2]
        23c8cc:	e0421841 	sub	r1, r2, r1, asr #16
        23c8d0:	e3510000 	cmp	r1, #0	; 0x0
        23c8d4:	da000000 	ble	23c8dc <TXHilite::CalcAutoScrollParams(Point *, long, TXLongPoint *)+0xf4>
        23c8d8:	e5840004 	str	r0, [r4, #4]	; fField4
        23c8dc:	e1a01004 	mov	r1, r4
        23c8e0:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        23c8e4:	eb653b3b 	bl	1b8b5d8 <TXDisplay::$AdjustScrollValues(TXLongPoint *)>
        23c8e8:	eaffffd6 	b	23c848 <TXHilite::CalcAutoScrollParams(Point *, long, TXLongPoint *)+0x60>
    */
}

/**
 * Symbol: TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)
 * Address: 0023c8ec
 */
TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *) {
    /*
        23c8ec:	e1a0c00d 	mov	ip, sp
        23c8f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        23c8f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        23c8f8:	e24cb014 	sub	fp, ip, #20	; 0x14
        23c8fc:	e1a04000 	mov	r4, r0
        23c900:	e28ba018 	add	sl, fp, #24	; 0x18
        23c904:	e89a0420 	ldmia	sl, {r5, sl}
        23c908:	e59b6020 	ldr	r6, [fp, #32]	; fField32
        23c90c:	e59b9028 	ldr	r9, [fp, #40]
        23c910:	e24dd010 	sub	sp, sp, #16	; 0x10
        23c914:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23c918:	e1a0100d 	mov	r1, sp
        23c91c:	eb653f38 	bl	1b8c604 <TXDisplay::$SetDrawEnv(TXDrawEnv *)>
        23c920:	e24dd028 	sub	sp, sp, #40	; 0x28
        23c924:	e2840034 	add	r0, r4, #52	; 0x34
        23c928:	e28d1018 	add	r1, sp, #24	; 0x18
        23c92c:	e890500c 	ldmia	r0, {r2, r3, ip, lr}
        23c930:	e881500c 	stmia	r1, {r2, r3, ip, lr}
        23c934:	eb658145 	bl	1b9ce50 <$TXCurrentTicks(void)>
        23c938:	e1a07000 	mov	r7, r0
        23c93c:	e3360000 	teq	r6, #0	; 0x0
        23c940:	0a000020 	beq	23c9c8 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0xdc>
        23c944:	e1a0300d 	mov	r3, sp
        23c948:	e92d0008 	stmdb	sp!, {r3}
        23c94c:	e28b1018 	add	r1, fp, #24	; 0x18
        23c950:	e931500c 	ldmdb	r1!, {r2, r3, ip, lr}
        23c954:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        23c958:	e1a00004 	mov	r0, r4
        23c95c:	e8bd000e 	ldmia	sp!, {r1, r2, r3}
        23c960:	eb6553c9 	bl	1b9188c <TXHilite::$CalcRangePosition(TXOffsetRange, TXRunPositionInfo *)>
        23c964:	e28dd008 	add	sp, sp, #8	; 0x8
        23c968:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23c96c:	e590001c 	ldr	r0, [r0, #28]	; fField28
        23c970:	e28b2008 	add	r2, fp, #8	; 0x8
        23c974:	e8920006 	ldmia	r2, {r1, r2}
        23c978:	eb654761 	bl	1b8e704 <TXFrameFormatter::$CharToFrame( const(TXOffset))>
        23c97c:	e1a01000 	mov	r1, r0
        23c980:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23c984:	e5900008 	ldr	r0, [r0, #8]	; fField8
        23c988:	e28d2010 	add	r2, sp, #16	; 0x10
        23c98c:	eb654b7f 	bl	1b8f790 <TXFrames::$GetTextBounds( const(long, Rect *))>
        23c990:	e28d2010 	add	r2, sp, #16	; 0x10
        23c994:	e59b3024 	ldr	r3, [fp, #36]
        23c998:	e594100c 	ldr	r1, [r4, #12]	; fField12
        23c99c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        23c9a0:	e1a0300a 	mov	r3, sl
        23c9a4:	e1a02005 	mov	r2, r5
        23c9a8:	e28d100c 	add	r1, sp, #12	; 0xc
        23c9ac:	e1a00006 	mov	r0, r6
        23c9b0:	e596c000 	ldr	ip, [r6]
        23c9b4:	e1a0e00f 	mov	lr, pc
        23c9b8:	e28cf078 	add	pc, ip, #120	; 0x78
        23c9bc:	e28dd00c 	add	sp, sp, #12	; 0xc
        23c9c0:	e3100001 	tst	r0, #1	; 0x1
        23c9c4:	1a000073 	bne	23cb98 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x2ac>
        23c9c8:	e1a00005 	mov	r0, r5
        23c9cc:	e5951000 	ldr	r1, [r5]
        23c9d0:	e1a0e00f 	mov	lr, pc
        23c9d4:	e281f008 	add	pc, r1, #8	; 0x8
        23c9d8:	e3300000 	teq	r0, #0	; 0x0
        23c9dc:	0a00006d 	beq	23cb98 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x2ac>
        23c9e0:	e2841014 	add	r1, r4, #20	; 0x14
        23c9e4:	e58d1034 	str	r1, [sp, #52]	; fField52
        23c9e8:	e24dd010 	sub	sp, sp, #16	; 0x10
        23c9ec:	e1a01005 	mov	r1, r5
        23c9f0:	e1a0000d 	mov	r0, sp
        23c9f4:	e5952000 	ldr	r2, [r5]
        23c9f8:	e1a0e00f 	mov	lr, pc
        23c9fc:	e282f004 	add	pc, r2, #4	; 0x4
        23ca00:	e49d0004 	ldr	r0, [sp], #4	; fField4
        23ca04:	e58d0000 	str	r0, [sp]
        23ca08:	eb658110 	bl	1b9ce50 <$TXCurrentTicks(void)>
        23ca0c:	e0402007 	sub	r2, r0, r7
        23ca10:	e28d3004 	add	r3, sp, #4	; 0x4
        23ca14:	e1a0100d 	mov	r1, sp
        23ca18:	e1a00004 	mov	r0, r4
        23ca1c:	eb654f8a 	bl	1b9084c <TXHilite::$CalcAutoScrollParams(Point *, long, TXLongPoint *)>
        23ca20:	e59d1040 	ldr	r1, [sp, #64]
        23ca24:	e41d0004 	ldr	r0, [sp], -#4	; fField4
        23ca28:	e5810000 	str	r0, [r1]
        23ca2c:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        23ca30:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        23ca34:	e1900001 	orrs	r0, r0, r1
        23ca38:	e58d0000 	str	r0, [sp]
        23ca3c:	13a08003 	movne	r8, #3	; 0x3
        23ca40:	1a000002 	bne	23ca50 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x164>
        23ca44:	e594800c 	ldr	r8, [r4, #12]	; fField12
        23ca48:	eb658100 	bl	1b9ce50 <$TXCurrentTicks(void)>
        23ca4c:	e1a07000 	mov	r7, r0
        23ca50:	e3360000 	teq	r6, #0	; 0x0
        23ca54:	0a00000e 	beq	23ca94 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x1a8>
        23ca58:	e28d2020 	add	r2, sp, #32	; 0x20
        23ca5c:	e59b3024 	ldr	r3, [fp, #36]
        23ca60:	e594100c 	ldr	r1, [r4, #12]	; fField12
        23ca64:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        23ca68:	e1a0300a 	mov	r3, sl
        23ca6c:	e1a02005 	mov	r2, r5
        23ca70:	e28d101c 	add	r1, sp, #28	; 0x1c
        23ca74:	e1a00006 	mov	r0, r6
        23ca78:	e596c000 	ldr	ip, [r6]
        23ca7c:	e1a0e00f 	mov	lr, pc
        23ca80:	e28cf078 	add	pc, ip, #120	; 0x78
        23ca84:	e28dd00c 	add	sp, sp, #12	; 0xc
        23ca88:	e3100001 	tst	r0, #1	; 0x1
        23ca8c:	128dd010 	addne	sp, sp, #16	; 0x10
        23ca90:	1a000040 	bne	23cb98 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x2ac>
        23ca94:	e24dd010 	sub	sp, sp, #16	; 0x10
        23ca98:	e1a0300d 	mov	r3, sp
        23ca9c:	e1a02008 	mov	r2, r8
        23caa0:	e1a00004 	mov	r0, r4
        23caa4:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        23caa8:	eb654f66 	bl	1b90848 <TXHilite::$GetClickRange(Point, int, TXOffsetRange *)>
        23caac:	e3300000 	teq	r0, #0	; 0x0
        23cab0:	0a000016 	beq	23cb10 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x224>
        23cab4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        23cab8:	e59b1010 	ldr	r1, [fp, #16]	; fField16
        23cabc:	e1500001 	cmp	r0, r1
        23cac0:	da000007 	ble	23cae4 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x1f8>
        23cac4:	e1a00004 	mov	r0, r4
        23cac8:	e28b2008 	add	r2, fp, #8	; 0x8
        23cacc:	e8920006 	ldmia	r2, {r1, r2}
        23cad0:	eb654f59 	bl	1b9083c <TXHilite::$SetHiliteStart(TXOffset)>
        23cad4:	e1a00004 	mov	r0, r4
        23cad8:	e28d2008 	add	r2, sp, #8	; 0x8
        23cadc:	e8920006 	ldmia	r2, {r1, r2}
        23cae0:	ea000009 	b	23cb0c <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x220>
        23cae4:	e59d0000 	ldr	r0, [sp]
        23cae8:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        23caec:	e1500001 	cmp	r0, r1
        23caf0:	aa000006 	bge	23cb10 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x224>
        23caf4:	e1a00004 	mov	r0, r4
        23caf8:	e89d0006 	ldmia	sp, {r1, r2}
        23cafc:	eb654f4e 	bl	1b9083c <TXHilite::$SetHiliteStart(TXOffset)>
        23cb00:	e1a00004 	mov	r0, r4
        23cb04:	e28b2010 	add	r2, fp, #16	; 0x10
        23cb08:	e8920006 	ldmia	r2, {r1, r2}
        23cb0c:	eb654f4b 	bl	1b90840 <TXHilite::$SetHiliteEnd(TXOffset)>
        23cb10:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        23cb14:	e3300000 	teq	r0, #0	; 0x0
        23cb18:	0a000017 	beq	23cb7c <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x290>
        23cb1c:	e5d40018 	ldrb	r0, [r4, #24]	; fField24
        23cb20:	e3300000 	teq	r0, #0	; 0x0
        23cb24:	128d1018 	addne	r1, sp, #24	; 0x18
        23cb28:	15940008 	ldrne	r0, [r4, #8]	; fField8
        23cb2c:	1b653aaa 	blne	1b8b5dc <TXDisplay::$Scroll(TXLongPoint *)>
        23cb30:	e28d1048 	add	r1, sp, #72	; 0x48
        23cb34:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23cb38:	eb653eb2 	bl	1b8c608 <TXDisplay::$RestoreDrawEnv(TXDrawEnv const &)>
        23cb3c:	e28d2018 	add	r2, sp, #24	; 0x18
        23cb40:	e1a00004 	mov	r0, r4
        23cb44:	e3a01001 	mov	r1, #1	; 0x1
        23cb48:	e5943000 	ldr	r3, [r4]
        23cb4c:	e1a0e00f 	mov	lr, pc
        23cb50:	e283f010 	add	pc, r3, #16	; 0x10
        23cb54:	e3390000 	teq	r9, #0	; 0x0
        23cb58:	0a000004 	beq	23cb70 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0x284>
        23cb5c:	e28d1018 	add	r1, sp, #24	; 0x18
        23cb60:	e3a00001 	mov	r0, #1	; 0x1
        23cb64:	e59b202c 	ldr	r2, [fp, #44]
        23cb68:	e1a0e00f 	mov	lr, pc
        23cb6c:	e1a0f009 	mov	pc, r9
        23cb70:	e28d1048 	add	r1, sp, #72	; 0x48
        23cb74:	e5940008 	ldr	r0, [r4, #8]	; fField8
        23cb78:	eb653ea1 	bl	1b8c604 <TXDisplay::$SetDrawEnv(TXDrawEnv *)>
        23cb7c:	e28dd020 	add	sp, sp, #32	; 0x20
        23cb80:	e1a00005 	mov	r0, r5
        23cb84:	e5951000 	ldr	r1, [r5]
        23cb88:	e1a0e00f 	mov	lr, pc
        23cb8c:	e281f008 	add	pc, r1, #8	; 0x8
        23cb90:	e3300000 	teq	r0, #0	; 0x0
        23cb94:	1affff93 	bne	23c9e8 <TXHilite::DragHilite(TXOffsetRange, TXPointingDevice *, long, TXRun *, TXClickCommandInfo *, void (*)(unsigned char, void *, TXPointingDevice *), void *)+0xfc>
        23cb98:	e28d1028 	add	r1, sp, #40	; 0x28
        23cb9c:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        23cba0:	eb653e98 	bl	1b8c608 <TXDisplay::$RestoreDrawEnv(TXDrawEnv const &)>
        23cba4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

