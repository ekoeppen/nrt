#include "include/TBits.h"

/**
 * Symbol: TBits::__ct(void)
 * Address: 000422b4
 */
TBits::TBits(void) {
    /*
         422b4:	e1a0c00d 	mov	ip, sp
         422b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         422bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         422c0:	e1b04000 	movs	r4, r0
         422c4:	1a000005 	bne	422e0 <TBits::__ct(void)+0x2c>
         422c8:	e3a00034 	mov	r0, #52	; 0x34
         422cc:	eb6e3119 	bl	1bce738 <$__nw(unsigned int)>
         422d0:	e1b04000 	movs	r4, r0
         422d4:	1a000001 	bne	422e0 <TBits::__ct(void)+0x2c>
         422d8:	e1a00004 	mov	r0, r4
         422dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         422e0:	e3a01000 	mov	r1, #0	; 0x0
         422e4:	e584101c 	str	r1, [r4, #28]	; fField28
         422e8:	e5c41020 	strb	r1, [r4, #32]	; fField32
         422ec:	e3a00001 	mov	r0, #1	; 0x1
         422f0:	e5841000 	str	r1, [r4]
         422f4:	e5c40021 	strb	r0, [r4, #33]	; fField33
         422f8:	e24dd004 	sub	sp, sp, #4	; 0x4
         422fc:	e154000d 	cmp	r4, sp
         42300:	da000007 	ble	42324 <TBits::__ct(void)+0x70>
         42304:	e5840024 	str	r0, [r4, #36]
         42308:	e59f0010 	ldr	r0, [pc, #10]	; 42320 <TBits::__ct(void)+0x6c>
         4230c:	e5840030 	str	r0, [r4, #48]
         42310:	e584402c 	str	r4, [r4, #44]
         42314:	e2840024 	add	r0, r4, #36	; 0x24
         42318:	eb6e7757 	bl	1be007c <$AddExceptionHandler>
         4231c:	ea000001 	b	42328 <TBits::__ct(void)+0x74>
         42320:	000422ac 	andeq	r2, r4, ip, lsr #5
         42324:	e5841030 	str	r1, [r4, #48]
         42328:	e28dd004 	add	sp, sp, #4	; 0x4
         4232c:	eaffffe9 	b	422d8 <TBits::__ct(void)+0x24>
    */
}

/**
 * Symbol: TBits::Draw(TRect const &, long, Region **)
 * Address: 00042330
 */
TBits::Draw(TRect const &, long, Region **) {
    /*
         42330:	e1a0c00d 	mov	ip, sp
         42334:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         42338:	e24cb004 	sub	fp, ip, #4	; 0x4
         4233c:	e24dd008 	sub	sp, sp, #8	; 0x8
         42340:	e92d0008 	stmdb	sp!, {r3}
         42344:	e280e008 	add	lr, r0, #8	; 0x8
         42348:	e28d4004 	add	r4, sp, #4	; 0x4
         4234c:	e89e1008 	ldmia	lr, {r3, ip}
         42350:	e8841008 	stmia	r4, {r3, ip}
         42354:	e28dc004 	add	ip, sp, #4	; 0x4
         42358:	e1a03002 	mov	r3, r2
         4235c:	e1a02001 	mov	r2, r1
         42360:	e1a0100c 	mov	r1, ip
         42364:	eb693d5c 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         42368:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TBits::CopyIntoBitmap(PixelMap *, long, Region **)
 * Address: 0004236c
 */
TBits::CopyIntoBitmap(PixelMap *, long, Region **) {
    /*
         4236c:	e1a0c00d 	mov	ip, sp
         42370:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         42374:	e24cb004 	sub	fp, ip, #4	; 0x4
         42378:	e92d000c 	stmdb	sp!, {r2, r3}
         4237c:	e2813008 	add	r3, r1, #8	; 0x8
         42380:	e2802008 	add	r2, r0, #8	; 0x8
         42384:	eb6eb505 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
         42388:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TBits::CopyFromScreen(TRect const &, TRect const &, long, Region **)
 * Address: 0004238c
 */
TBits::CopyFromScreen(TRect const &, TRect const &, long, Region **) {
    /*
         4238c:	e1a0c00d 	mov	ip, sp
         42390:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         42394:	e24cb004 	sub	fp, ip, #4	; 0x4
         42398:	e1a04000 	mov	r4, r0
         4239c:	e1a05001 	mov	r5, r1
         423a0:	e1a06002 	mov	r6, r2
         423a4:	e1a02003 	mov	r2, r3
         423a8:	e59b3004 	ldr	r3, [fp, #4]	; fField4
         423ac:	e92d000c 	stmdb	sp!, {r2, r3}
         423b0:	e24dd004 	sub	sp, sp, #4	; 0x4
         423b4:	e1a0000d 	mov	r0, sp
         423b8:	eb6eb4f9 	bl	1bef7a4 <$GetPort(GrafPort **)>
         423bc:	e1a03006 	mov	r3, r6
         423c0:	e1a02005 	mov	r2, r5
         423c4:	e1a01004 	mov	r1, r4
         423c8:	e49d0004 	ldr	r0, [sp], #4	; fField4
         423cc:	eb6eb4f3 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
         423d0:	e3a00001 	mov	r0, #1	; 0x1
         423d4:	e5c40020 	strb	r0, [r4, #32]	; fField32
         423d8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TBits::Draw(TRect const &, TRect const &, long, Region **)
 * Address: 000423dc
 */
TBits::Draw(TRect const &, TRect const &, long, Region **) {
    /*
         423dc:	e1a0c00d 	mov	ip, sp
         423e0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         423e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         423e8:	e1a04000 	mov	r4, r0
         423ec:	e1a05001 	mov	r5, r1
         423f0:	e1a06002 	mov	r6, r2
         423f4:	e1a02003 	mov	r2, r3
         423f8:	e59b3004 	ldr	r3, [fp, #4]	; fField4
         423fc:	e92d000c 	stmdb	sp!, {r2, r3}
         42400:	e24dd004 	sub	sp, sp, #4	; 0x4
         42404:	e1a0000d 	mov	r0, sp
         42408:	eb6eb4e5 	bl	1bef7a4 <$GetPort(GrafPort **)>
         4240c:	e1a03006 	mov	r3, r6
         42410:	e1a02005 	mov	r2, r5
         42414:	e1a00004 	mov	r0, r4
         42418:	e49d1004 	ldr	r1, [sp], #4	; fField4
         4241c:	eb6eb4df 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
         42420:	e3a00001 	mov	r0, #1	; 0x1
         42424:	e5c40020 	strb	r0, [r4, #32]	; fField32
         42428:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TBits::SetPort(void)
 * Address: 0004242c
 */
TBits::SetPort(void) {
    /*
         4242c:	e590001c 	ldr	r0, [r0, #28]	; fField28
         42430:	e5900004 	ldr	r0, [r0, #4]	; fField4
         42434:	ea6eb4dc 	b	1bef7ac <$SetPort(GrafPort *)>
    */
}

/**
 * Symbol: TBits::RestorePort(void)
 * Address: 00042438
 */
TBits::RestorePort(void) {
    /*
         42438:	e590001c 	ldr	r0, [r0, #28]	; fField28
         4243c:	e5900008 	ldr	r0, [r0, #8]	; fField8
         42440:	ea6eb4d9 	b	1bef7ac <$SetPort(GrafPort *)>
    */
}

/**
 * Symbol: TBits::Fill(long)
 * Address: 00042444
 */
TBits::Fill(long) {
    /*
         42444:	e5902010 	ldr	r2, [r0, #16]	; fField16
         42448:	e3120101 	tst	r2, #1073741824	; 0x40000000
         4244c:	05902000 	ldreq	r2, [r0]
         42450:	05923000 	ldreq	r3, [r2]
         42454:	15903000 	ldrne	r3, [r0]
         42458:	e590c00c 	ldr	ip, [r0, #12]	; fField12
         4245c:	e1a0c84c 	mov	ip, ip, asr #16
         42460:	e5902008 	ldr	r2, [r0, #8]	; fField8
         42464:	e04c2842 	sub	r2, ip, r2, asr #16
         42468:	e590c004 	ldr	ip, [r0, #4]	; fField4
         4246c:	e1a0c84c 	mov	ip, ip, asr #16
         42470:	e000029c 	mul	r0, ip, r2
         42474:	e1a02001 	mov	r2, r1
         42478:	e1a01000 	mov	r1, r0
         4247c:	e1a00003 	mov	r0, r3
         42480:	ea6e72ba 	b	1bdef70 <$FillLongs>
    */
}

/**
 * Symbol: InitBitMap__5TBitsSFRC5TRectP8PixelMap
 * Address: 000425b4
 */
void TBits::InitBitMap() {
    /*
         425b4:	e1a0c00d 	mov	ip, sp
         425b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         425bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         425c0:	e1a05000 	mov	r5, r0
         425c4:	e1a04001 	mov	r4, r1
         425c8:	e24dd004 	sub	sp, sp, #4	; 0x4
         425cc:	e1a0100d 	mov	r1, sp
         425d0:	e3a00002 	mov	r0, #2	; 0x2
         425d4:	eb6ebcaf 	bl	1bf1898 <$GetGrafInfo(long, void *)>
         425d8:	e5950006 	ldr	r0, [r5, #6]	; fField6
         425dc:	e1a00820 	mov	r0, r0, lsr #16
         425e0:	e5951002 	ldr	r1, [r5, #2]	; fField2
         425e4:	e1a01821 	mov	r1, r1, lsr #16
         425e8:	e0400001 	sub	r0, r0, r1
         425ec:	e1a00800 	mov	r0, r0, lsl #16
         425f0:	e1a00840 	mov	r0, r0, asr #16
         425f4:	e59d1000 	ldr	r1, [sp]
         425f8:	e0000091 	mul	r0, r1, r0
         425fc:	e280001f 	add	r0, r0, #31	; 0x1f
         42600:	e3c0001f 	bic	r0, r0, #31	; 0x1f
         42604:	e1a021a0 	mov	r2, r0, lsr #3
         42608:	e5950004 	ldr	r0, [r5, #4]	; fField4
         4260c:	e1a00820 	mov	r0, r0, lsr #16
         42610:	e5951000 	ldr	r1, [r5]
         42614:	e1a01821 	mov	r1, r1, lsr #16
         42618:	e0400001 	sub	r0, r0, r1
         4261c:	e1a00800 	mov	r0, r0, lsl #16
         42620:	e1a00840 	mov	r0, r0, asr #16
         42624:	e0000092 	mul	r0, r2, r0
         42628:	e3a01000 	mov	r1, #0	; 0x0
         4262c:	e5841000 	str	r1, [r4]
         42630:	e5c42005 	strb	r2, [r4, #5]
         42634:	e1a02442 	mov	r2, r2, asr #8
         42638:	e5c42004 	strb	r2, [r4, #4]	; fField4
         4263c:	e2842008 	add	r2, r4, #8	; 0x8
         42640:	e8955000 	ldmia	r5, {ip, lr}
         42644:	e8825000 	stmia	r2, {ip, lr}
         42648:	e59d2000 	ldr	r2, [sp]
         4264c:	e5842010 	str	r2, [r4, #16]	; fField16
         42650:	e3a02048 	mov	r2, #72	; 0x48
         42654:	e5c42015 	strb	r2, [r4, #21]
         42658:	e5c41014 	strb	r1, [r4, #20]
         4265c:	e5c42017 	strb	r2, [r4, #23]
         42660:	e5c41016 	strb	r1, [r4, #22]
         42664:	e5a41018 	str	r1, [r4, #24]!
         42668:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBits::Constructor(TRect const &)
 * Address: 00042fbc
 */
TBits::Constructor(TRect const &) {
    /*
         42fbc:	e1a0c00d 	mov	ip, sp
         42fc0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         42fc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         42fc8:	e1a04000 	mov	r4, r0
         42fcc:	e1a05001 	mov	r5, r1
         42fd0:	e1a00001 	mov	r0, r1
         42fd4:	eb6c2dcf 	bl	1b4e718 <$EmptyRect(Rect *)>
         42fd8:	e3a06000 	mov	r6, #0	; 0x0
         42fdc:	e3300000 	teq	r0, #0	; 0x0
         42fe0:	11a00006 	movne	r0, r6
         42fe4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         42fe8:	e1a01004 	mov	r1, r4
         42fec:	e1a00005 	mov	r0, r5
         42ff0:	eb6a637a 	bl	1adbde0 <$InitBitMap__5TBitsSFRC5TRectP8PixelMap>
         42ff4:	eb6e7c4c 	bl	1be212c <$NewHandle>
         42ff8:	e5840000 	str	r0, [r4]
         42ffc:	e5c46020 	strb	r6, [r4, #32]	; fField32
         43000:	e1b00000 	movs	r0, r0
         43004:	13a00001 	movne	r0, #1	; 0x1
         43008:	e20000ff 	and	r0, r0, #255	; 0xff
         4300c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TBits::Constructor(PixelMap const &)
 * Address: 0004499c
 */
TBits::Constructor(PixelMap const &) {
    /*
         4499c:	e92d4010 	stmdb	sp!, {r4, lr}
         449a0:	e1a0e001 	mov	lr, r1
         449a4:	e1a04000 	mov	r4, r0
         449a8:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
         449ac:	e8a4100e 	stmia	r4!, {r1, r2, r3, ip}
         449b0:	e89e100c 	ldmia	lr, {r2, r3, ip}
         449b4:	e884100c 	stmia	r4, {r2, r3, ip}
         449b8:	e3a01000 	mov	r1, #0	; 0x0
         449bc:	e5c01021 	strb	r1, [r0, #33]	; fField33
         449c0:	e5c01020 	strb	r1, [r0, #32]	; fField32
         449c4:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TBits::__dt(void)
 * Address: 0004512c
 */
TBits::~TBits(void) {
    /*
         4512c:	e1a0c00d 	mov	ip, sp
         45130:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         45134:	e24cb004 	sub	fp, ip, #4	; 0x4
         45138:	e1a04000 	mov	r4, r0
         4513c:	e1a05001 	mov	r5, r1
         45140:	e5900030 	ldr	r0, [r0, #48]
         45144:	e3300000 	teq	r0, #0	; 0x0
         45148:	12840024 	addne	r0, r4, #36	; 0x24
         4514c:	1b6e7404 	blne	1be2164 <$RemoveExceptionHandler>
         45150:	e1a00004 	mov	r0, r4
         45154:	eb6a4249 	bl	1ad5a80 <TBits::$Cleanup(void)>
         45158:	e3150001 	tst	r5, #1	; 0x1
         4515c:	11a00004 	movne	r0, r4
         45160:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         45164:	1a6e215d 	bne	1bcd6e0 <$__dl(void *)>
         45168:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBits::Cleanup(void)
 * Address: 0004516c
 */
TBits::Cleanup(void) {
    /*
         4516c:	e1a0c00d 	mov	ip, sp
         45170:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         45174:	e24cb004 	sub	fp, ip, #4	; 0x4
         45178:	e1a04000 	mov	r4, r0
         4517c:	e5900000 	ldr	r0, [r0]
         45180:	e3300000 	teq	r0, #0	; 0x0
         45184:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         45188:	e1a00004 	mov	r0, r4
         4518c:	eb6935f5 	bl	1a92968 <TBits::$EndDrawing(void)>
         45190:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
         45194:	e3a05000 	mov	r5, #0	; 0x0
         45198:	e3300000 	teq	r0, #0	; 0x0
         4519c:	0a000002 	beq	451ac <TBits::Cleanup(void)+0x40>
         451a0:	e5940000 	ldr	r0, [r4]
         451a4:	eb6e6fc1 	bl	1be10b0 <$DisposHandle>
         451a8:	e5c45021 	strb	r5, [r4, #33]	; fField33
         451ac:	e5845000 	str	r5, [r4]
         451b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TBits::SetBounds(TRect const &)
 * Address: 000451b4
 */
TBits::SetBounds(TRect const &) {
    /*
         451b4:	e2800008 	add	r0, r0, #8	; 0x8
         451b8:	e8911008 	ldmia	r1, {r3, ip}
         451bc:	e8801008 	stmia	r0, {r3, ip}
         451c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TBits::BeginDrawing(TPoint)
 * Address: 000451c4
 */
TBits::BeginDrawing(TPoint) {
    /*
         451c4:	e1a0c00d 	mov	ip, sp
         451c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         451cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         451d0:	e1a04001 	mov	r4, r1
         451d4:	e1a05000 	mov	r5, r0
         451d8:	e590001c 	ldr	r0, [r0, #28]	; fField28
         451dc:	e3300000 	teq	r0, #0	; 0x0
         451e0:	1a000014 	bne	45238 <TBits::BeginDrawing(TPoint)+0x74>
         451e4:	e3a0000c 	mov	r0, #12	; 0xc
         451e8:	eb6e2552 	bl	1bce738 <$__nw(unsigned int)>
         451ec:	e3500000 	cmp	r0, #0	; 0x0
         451f0:	e585001c 	str	r0, [r5, #28]	; fField28
         451f4:	1a000005 	bne	45210 <TBits::BeginDrawing(TPoint)+0x4c>
         451f8:	e59f0034 	ldr	r0, [pc, #34]	; 45234 <TBits::BeginDrawing(TPoint)+0x70>
         451fc:	e5900000 	ldr	r0, [r0]
         45200:	e3a02000 	mov	r2, #0	; 0x0
         45204:	e3a010e9 	mov	r1, #233	; 0xe9
         45208:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         4520c:	eb6e77e2 	bl	1be319c <$Throw>
         45210:	e5d50020 	ldrb	r0, [r5, #32]	; fField32
         45214:	e3300000 	teq	r0, #0	; 0x0
         45218:	13a03000 	movne	r3, #0	; 0x0
         4521c:	03a03001 	moveq	r3, #1	; 0x1
         45220:	e595001c 	ldr	r0, [r5, #28]	; fField28
         45224:	e1a01005 	mov	r1, r5
         45228:	e1a02004 	mov	r2, r4
         4522c:	eb692129 	bl	1a8d6d8 <TBitsPort::$Constructor(TBits *, TPoint, unsigned char)>
         45230:	ea000009 	b	4525c <TBits::BeginDrawing(TPoint)+0x98>
         45234:	00371318 	eoreqs	r1, r7, r8, lsl r3
         45238:	e1a00005 	mov	r0, r5
         4523c:	eb6973bb 	bl	1aa2130 <TBits::$SetPort(void)>
         45240:	e52d4004 	str	r4, [sp, -#4]!	; fField4
         45244:	e59d0002 	ldr	r0, [sp, #2]	; fField2
         45248:	e1a00840 	mov	r0, r0, asr #16
         4524c:	e59d1000 	ldr	r1, [sp]
         45250:	e1a01841 	mov	r1, r1, asr #16
         45254:	eb6c39e6 	bl	1b539f4 <$SetOrigin__FlT1>
         45258:	e28dd004 	add	sp, sp, #4	; 0x4
         4525c:	e59f0014 	ldr	r0, [pc, #14]	; 45278 <TBits::BeginDrawing(TPoint)+0xb4>
         45260:	e5900000 	ldr	r0, [r0]
         45264:	e3300000 	teq	r0, #0	; 0x0
         45268:	11a00005 	movne	r0, r5
         4526c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         45270:	1a696b77 	bne	1aa0054 <TBits::$RestorePort(void)>
         45274:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         45278:	0c101940 	ldceq	9, cr1, [r0], -#256
    */
}

/**
 * Symbol: TBits::EndDrawing(void)
 * Address: 0004527c
 */
TBits::EndDrawing(void) {
    /*
         4527c:	e1a0c00d 	mov	ip, sp
         45280:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         45284:	e24cb004 	sub	fp, ip, #4	; 0x4
         45288:	e1a04000 	mov	r4, r0
         4528c:	e24dd010 	sub	sp, sp, #16	; 0x10
         45290:	e59f0060 	ldr	r0, [pc, #60]	; 452f8 <TBits::EndDrawing(void)+0x7c>
         45294:	e5900000 	ldr	r0, [r0]
         45298:	e3300000 	teq	r0, #0	; 0x0
         4529c:	0a00000e 	beq	452dc <TBits::EndDrawing(void)+0x60>
         452a0:	e3a03000 	mov	r3, #0	; 0x0
         452a4:	e92d0008 	stmdb	sp!, {r3}
         452a8:	e2840008 	add	r0, r4, #8	; 0x8
         452ac:	e28d2004 	add	r2, sp, #4	; 0x4
         452b0:	e8901008 	ldmia	r0, {r3, ip}
         452b4:	e8821008 	stmia	r2, {r3, ip}
         452b8:	e28d2004 	add	r2, sp, #4	; 0x4
         452bc:	e28d100c 	add	r1, sp, #12	; 0xc
         452c0:	e8905000 	ldmia	r0, {ip, lr}
         452c4:	e8815000 	stmia	r1, {ip, lr}
         452c8:	e28d100c 	add	r1, sp, #12	; 0xc
         452cc:	e1a00004 	mov	r0, r4
         452d0:	e3a03000 	mov	r3, #0	; 0x0
         452d4:	eb69251e 	bl	1a8e754 <TBits::$CopyFromScreen(TRect const &, TRect const &, long, Region **)>
         452d8:	e28dd004 	add	sp, sp, #4	; 0x4
         452dc:	e594001c 	ldr	r0, [r4, #28]	; fField28
         452e0:	e3300000 	teq	r0, #0	; 0x0
         452e4:	13a01001 	movne	r1, #1	; 0x1
         452e8:	1b69106a 	blne	1a89498 <TBitsPort::$__dt(void)>
         452ec:	e3a00000 	mov	r0, #0	; 0x0
         452f0:	e5a4001c 	str	r0, [r4, #28]!	; fField28
         452f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         452f8:	0c101940 	ldceq	9, cr1, [r0], -#256
    */
}

