#include "include/TRichString.h"

/**
 * Symbol: TRichString::SetStringData(RefVar const &)
 * Address: 001ab21c
 */
TRichString::SetStringData(RefVar const &) {
    /*
        1ab21c:	e1a0c00d 	mov	ip, sp
        1ab220:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ab224:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ab228:	e1a04000 	mov	r4, r0
        1ab22c:	e5910000 	ldr	r0, [r1]
        1ab230:	e5900000 	ldr	r0, [r0]
        1ab234:	e5941000 	ldr	r1, [r4]
        1ab238:	e5810000 	str	r0, [r1]
        1ab23c:	e3a00000 	mov	r0, #0	; 0x0
        1ab240:	e5840004 	str	r0, [r4, #4]	; fField4
        1ab244:	e5c40024 	strb	r0, [r4, #36]	; fField36
        1ab248:	e1a00004 	mov	r0, r4
        1ab24c:	eb000507 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1ab250:	e1a05000 	mov	r5, r0
        1ab254:	e5940000 	ldr	r0, [r4]
        1ab258:	e5900000 	ldr	r0, [r0]
        1ab25c:	eb686812 	bl	1bc52ac <$Length(long)>
        1ab260:	e1a02000 	mov	r2, r0
        1ab264:	e1a01005 	mov	r1, r5
        1ab268:	e1a00004 	mov	r0, r4
        1ab26c:	eb68198b 	bl	1bb18a0 <TRichString::$SetFormatAndLength(unsigned short *, unsigned long)>
        1ab270:	e1a00004 	mov	r0, r4
        1ab274:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1ab278:	ea00050a 	b	1ac6a8 <TRichString::ReleasePtr( const(void))>
    */
}

/**
 * Symbol: TRichString::SetCStringData(unsigned short *, unsigned long)
 * Address: 001ab27c
 */
TRichString::SetCStringData(unsigned short *, unsigned long) {
    /*
        1ab27c:	e3a0c002 	mov	ip, #2	; 0x2
        1ab280:	e5903000 	ldr	r3, [r0]
        1ab284:	e583c000 	str	ip, [r3]
        1ab288:	e3a03000 	mov	r3, #0	; 0x0
        1ab28c:	e5801004 	str	r1, [r0, #4]	; fField4
        1ab290:	e5c03024 	strb	r3, [r0, #36]	; fField36
        1ab294:	ea681981 	b	1bb18a0 <TRichString::$SetFormatAndLength(unsigned short *, unsigned long)>
    */
}

/**
 * Symbol: TRichString::SetCPlainStringData(unsigned short *)
 * Address: 001ab298
 */
TRichString::SetCPlainStringData(unsigned short *) {
    /*
        1ab298:	e1a0c00d 	mov	ip, sp
        1ab29c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ab2a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ab2a4:	e1a05000 	mov	r5, r0
        1ab2a8:	e1a04001 	mov	r4, r1
        1ab2ac:	e1a00001 	mov	r0, r1
        1ab2b0:	eb690d2a 	bl	1bee760 <$Ustrlen>
        1ab2b4:	e3a01002 	mov	r1, #2	; 0x2
        1ab2b8:	e0812080 	add	r2, r1, r0, lsl #1
        1ab2bc:	e1a01004 	mov	r1, r4
        1ab2c0:	e1a00005 	mov	r0, r5
        1ab2c4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1ab2c8:	ea681973 	b	1bb189c <TRichString::$SetCStringData(unsigned short *, unsigned long)>
    */
}

/**
 * Symbol: TRichString::DeleteRange(unsigned long, unsigned long)
 * Address: 001ab2cc
 */
TRichString::DeleteRange(unsigned long, unsigned long) {
    /*
        1ab2cc:	e1a0c00d 	mov	ip, sp
        1ab2d0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1ab2d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ab2d8:	e1a0c002 	mov	ip, r2
        1ab2dc:	e3a03000 	mov	r3, #0	; 0x0
        1ab2e0:	e3a02000 	mov	r2, #0	; 0x0
        1ab2e4:	e92d000c 	stmdb	sp!, {r2, r3}
        1ab2e8:	e1a0200c 	mov	r2, ip
        1ab2ec:	eb681969 	bl	1bb1898 <TRichString::$MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)>
        1ab2f0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::InsertRange(TRichString const &, unsigned long, unsigned long, unsigned long)
 * Address: 001ab2f4
 */
TRichString::InsertRange(TRichString const &, unsigned long, unsigned long, unsigned long) {
    /*
        1ab2f4:	e1a0c00d 	mov	ip, sp
        1ab2f8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1ab2fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ab300:	e59bc004 	ldr	ip, [fp, #4]	; fField4
        1ab304:	e92d000c 	stmdb	sp!, {r2, r3}
        1ab308:	e1a03001 	mov	r3, r1
        1ab30c:	e1a0100c 	mov	r1, ip
        1ab310:	e3a02000 	mov	r2, #0	; 0x0
        1ab314:	eb68195f 	bl	1bb1898 <TRichString::$MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)>
        1ab318:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)
 * Address: 001ab31c
 */
TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long) {
    /*
        1ab31c:	e1a0c00d 	mov	ip, sp
        1ab320:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1ab324:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ab328:	e24cb014 	sub	fp, ip, #20	; 0x14
        1ab32c:	e1a04000 	mov	r4, r0
        1ab330:	e1b05003 	movs	r5, r3
        1ab334:	e24dd024 	sub	sp, sp, #36	; 0x24
        1ab338:	e590100c 	ldr	r1, [r0, #12]	; fField12
        1ab33c:	e58d100c 	str	r1, [sp, #12]	; fField12
        1ab340:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1ab344:	e3a00000 	mov	r0, #0	; 0x0
        1ab348:	e98d0003 	stmib	sp, {r0, r1}
        1ab34c:	e58d0000 	str	r0, [sp]
        1ab350:	0a000007 	beq	1ab374 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x58>
        1ab354:	e1a0300d 	mov	r3, sp
        1ab358:	e92d0008 	stmdb	sp!, {r3}
        1ab35c:	e28d3008 	add	r3, sp, #8	; 0x8
        1ab360:	e1a00005 	mov	r0, r5
        1ab364:	e28b2014 	add	r2, fp, #20	; 0x14
        1ab368:	e8920006 	ldmia	r2, {r1, r2}
        1ab36c:	eb681542 	bl	1bb087c <$GetInkData__11TRichStringCFUlT1PUlT3>
        1ab370:	e28dd004 	add	sp, sp, #4	; 0x4
        1ab374:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ab378:	e1a0300d 	mov	r3, sp
        1ab37c:	e92d0008 	stmdb	sp!, {r3}
        1ab380:	e28d3008 	add	r3, sp, #8	; 0x8
        1ab384:	e1a00004 	mov	r0, r4
        1ab388:	e28b2008 	add	r2, fp, #8	; 0x8
        1ab38c:	e8920006 	ldmia	r2, {r1, r2}
        1ab390:	eb681539 	bl	1bb087c <$GetInkData__11TRichStringCFUlT1PUlT3>
        1ab394:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ab398:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        1ab39c:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        1ab3a0:	e0400002 	sub	r0, r0, r2
        1ab3a4:	e1a07080 	mov	r7, r0, lsl #1
        1ab3a8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        1ab3ac:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1ab3b0:	e0401001 	sub	r1, r0, r1
        1ab3b4:	e58d1004 	str	r1, [sp, #4]	; fField4
        1ab3b8:	e3a01000 	mov	r1, #0	; 0x0
        1ab3bc:	e1a00004 	mov	r0, r4
        1ab3c0:	e58d1000 	str	r1, [sp]
        1ab3c4:	eb0004e2 	bl	1ac754 <TRichString::Format( const(void))>
        1ab3c8:	e1a06000 	mov	r6, r0
        1ab3cc:	e3a00000 	mov	r0, #0	; 0x0
        1ab3d0:	e3560000 	cmp	r6, #0	; 0x0
        1ab3d4:	1a000006 	bne	1ab3f4 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0xd8>
        1ab3d8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1ab3dc:	e3510000 	cmp	r1, #0	; 0x0
        1ab3e0:	c3a01004 	movgt	r1, #4	; 0x4
        1ab3e4:	c3a06001 	movgt	r6, #1	; 0x1
        1ab3e8:	c58d1000 	strgt	r1, [sp]
        1ab3ec:	ca00000e 	bgt	1ab42c <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x110>
        1ab3f0:	ea00000e 	b	1ab430 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x114>
        1ab3f4:	0a00000d 	beq	1ab430 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x114>
        1ab3f8:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        1ab3fc:	e3310000 	teq	r1, #0	; 0x0
        1ab400:	1a00000a 	bne	1ab430 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x114>
        1ab404:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1ab408:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        1ab40c:	e0421001 	sub	r1, r2, r1
        1ab410:	e2412004 	sub	r2, r1, #4	; 0x4
        1ab414:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1ab418:	e1320001 	teq	r2, r1
        1ab41c:	1a000003 	bne	1ab430 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x114>
        1ab420:	e3e01003 	mvn	r1, #3	; 0x3
        1ab424:	e3a06000 	mov	r6, #0	; 0x0
        1ab428:	e58d1000 	str	r1, [sp]
        1ab42c:	e3a00001 	mov	r0, #1	; 0x1
        1ab430:	e3a01002 	mov	r1, #2	; 0x2
        1ab434:	e59d201c 	ldr	r2, [sp, #28]	; fField28
        1ab438:	e0811082 	add	r1, r1, r2, lsl #1
        1ab43c:	e0811007 	add	r1, r1, r7
        1ab440:	e3560000 	cmp	r6, #0	; 0x0
        1ab444:	12811003 	addne	r1, r1, #3	; 0x3
        1ab448:	13c11003 	bicne	r1, r1, #3	; 0x3
        1ab44c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ab450:	e5942014 	ldr	r2, [r4, #20]	; fField20
        1ab454:	e0412002 	sub	r2, r1, r2
        1ab458:	e58d2004 	str	r2, [sp, #4]	; fField4
        1ab45c:	e28d2008 	add	r2, sp, #8	; 0x8
        1ab460:	e8920006 	ldmia	r2, {r1, r2}
        1ab464:	e0821001 	add	r1, r2, r1
        1ab468:	03300000 	teqeq	r0, #0	; 0x0
        1ab46c:	159d0004 	ldrne	r0, [sp, #4]	; fField4
        1ab470:	01a00007 	moveq	r0, r7
        1ab474:	e0800001 	add	r0, r0, r1
        1ab478:	e58d0000 	str	r0, [sp]
        1ab47c:	e3500000 	cmp	r0, #0	; 0x0
        1ab480:	da000004 	ble	1ab498 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x17c>
        1ab484:	e59d0000 	ldr	r0, [sp]
        1ab488:	e59d1020 	ldr	r1, [sp, #32]	; fField32
        1ab48c:	e0811000 	add	r1, r1, r0
        1ab490:	e1a00004 	mov	r0, r4
        1ab494:	eb0000b2 	bl	1ab764 <TRichString::SetObjectSize(long)>
        1ab498:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ab49c:	e3350000 	teq	r5, #0	; 0x0
        1ab4a0:	0a000002 	beq	1ab4b0 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x194>
        1ab4a4:	e1a00005 	mov	r0, r5
        1ab4a8:	eb000470 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1ab4ac:	e58d0000 	str	r0, [sp]
        1ab4b0:	e1a00004 	mov	r0, r4
        1ab4b4:	eb00046d 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1ab4b8:	e1a08000 	mov	r8, r0
        1ab4bc:	e3370000 	teq	r7, #0	; 0x0
        1ab4c0:	0a000044 	beq	1ab5d8 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x2bc>
        1ab4c4:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        1ab4c8:	e0880081 	add	r0, r8, r1, lsl #1
        1ab4cc:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        1ab4d0:	e0809082 	add	r9, r0, r2, lsl #1
        1ab4d4:	e3170003 	tst	r7, #3	; 0x3
        1ab4d8:	0a000003 	beq	1ab4ec <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x1d0>
        1ab4dc:	e1a00004 	mov	r0, r4
        1ab4e0:	eb00049b 	bl	1ac754 <TRichString::Format( const(void))>
        1ab4e4:	e3300000 	teq	r0, #0	; 0x0
        1ab4e8:	1a000006 	bne	1ab508 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x1ec>
        1ab4ec:	e0490008 	sub	r0, r9, r8
        1ab4f0:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        1ab4f4:	e0412000 	sub	r2, r1, r0
        1ab4f8:	e0891007 	add	r1, r9, r7
        1ab4fc:	e1a00009 	mov	r0, r9
        1ab500:	eb68ce93 	bl	1bdef54 <$BlockMove>
        1ab504:	ea000033 	b	1ab5d8 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x2bc>
        1ab508:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1ab50c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ab510:	e3570000 	cmp	r7, #0	; 0x0
        1ab514:	a3a01000 	movge	r1, #0	; 0x0
        1ab518:	b3a01001 	movlt	r1, #1	; 0x1
        1ab51c:	e201a0ff 	and	sl, r1, #255	; 0xff
        1ab520:	e3a01001 	mov	r1, #1	; 0x1
        1ab524:	e58d1000 	str	r1, [sp]
        1ab528:	e0891007 	add	r1, r9, r7
        1ab52c:	e58d1040 	str	r1, [sp, #64]
        1ab530:	e59d102c 	ldr	r1, [sp, #44]
        1ab534:	e2811001 	add	r1, r1, #1	; 0x1
        1ab538:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        1ab53c:	e59b3008 	ldr	r3, [fp, #8]	; fField8
        1ab540:	e0832002 	add	r2, r3, r2
        1ab544:	e0411002 	sub	r1, r1, r2
        1ab548:	e1a02081 	mov	r2, r1, lsl #1
        1ab54c:	e0881000 	add	r1, r8, r0
        1ab550:	e58d1038 	str	r1, [sp, #56]
        1ab554:	e58d203c 	str	r2, [sp, #60]
        1ab558:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        1ab55c:	e0811002 	add	r1, r1, r2
        1ab560:	e58d1034 	str	r1, [sp, #52]
        1ab564:	e59d1028 	ldr	r1, [sp, #40]
        1ab568:	e0412000 	sub	r2, r1, r0
        1ab56c:	e58d2030 	str	r2, [sp, #48]
        1ab570:	e33a0000 	teq	sl, #0	; 0x0
        1ab574:	0a000007 	beq	1ab598 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x27c>
        1ab578:	e1a00009 	mov	r0, r9
        1ab57c:	e59d1040 	ldr	r1, [sp, #64]
        1ab580:	e59d203c 	ldr	r2, [sp, #60]
        1ab584:	eb68ce72 	bl	1bdef54 <$BlockMove>
        1ab588:	e33a0000 	teq	sl, #0	; 0x0
        1ab58c:	1a000009 	bne	1ab5b8 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x29c>
        1ab590:	e3a00001 	mov	r0, #1	; 0x1
        1ab594:	ea000008 	b	1ab5bc <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x2a0>
        1ab598:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        1ab59c:	e3320000 	teq	r2, #0	; 0x0
        1ab5a0:	0afffffa 	beq	1ab590 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x274>
        1ab5a4:	e59d0038 	ldr	r0, [sp, #56]
        1ab5a8:	e59d1034 	ldr	r1, [sp, #52]
        1ab5ac:	e59d2030 	ldr	r2, [sp, #48]
        1ab5b0:	eb68ce67 	bl	1bdef54 <$BlockMove>
        1ab5b4:	eafffff5 	b	1ab590 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x274>
        1ab5b8:	e3a00000 	mov	r0, #0	; 0x0
        1ab5bc:	e200a0ff 	and	sl, r0, #255	; 0xff
        1ab5c0:	e59d0000 	ldr	r0, [sp]
        1ab5c4:	e2401001 	sub	r1, r0, #1	; 0x1
        1ab5c8:	e3300000 	teq	r0, #0	; 0x0
        1ab5cc:	e58d1000 	str	r1, [sp]
        1ab5d0:	1affffe6 	bne	1ab570 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x254>
        1ab5d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1ab5d8:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        1ab5dc:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        1ab5e0:	e0819002 	add	r9, r1, r2
        1ab5e4:	e3350000 	teq	r5, #0	; 0x0
        1ab5e8:	159b0018 	ldrne	r0, [fp, #24]	; fField24
        1ab5ec:	13300000 	teqne	r0, #0	; 0x0
        1ab5f0:	0a000007 	beq	1ab614 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x2f8>
        1ab5f4:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        1ab5f8:	e1a02080 	mov	r2, r0, lsl #1
        1ab5fc:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        1ab600:	e0881081 	add	r1, r8, r1, lsl #1
        1ab604:	e59d3000 	ldr	r3, [sp]
        1ab608:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        1ab60c:	e0830080 	add	r0, r3, r0, lsl #1
        1ab610:	eb68ce4f 	bl	1bdef54 <$BlockMove>
        1ab614:	e0877fa7 	add	r7, r7, r7, lsr #31
        1ab618:	e59d1028 	ldr	r1, [sp, #40]
        1ab61c:	e08170c7 	add	r7, r1, r7, asr #1
        1ab620:	e5846010 	str	r6, [r4, #16]	; fField16
        1ab624:	e584700c 	str	r7, [r4, #12]	; fField12
        1ab628:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1ab62c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1ab630:	e0800001 	add	r0, r0, r1
        1ab634:	e3360001 	teq	r6, #1	; 0x1
        1ab638:	e5840008 	str	r0, [r4, #8]	; fField8
        1ab63c:	1a000005 	bne	1ab658 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x33c>
        1ab640:	e3a01002 	mov	r1, #2	; 0x2
        1ab644:	e0810087 	add	r0, r1, r7, lsl #1
        1ab648:	e2800003 	add	r0, r0, #3	; 0x3
        1ab64c:	e3c00003 	bic	r0, r0, #3	; 0x3
        1ab650:	e5840014 	str	r0, [r4, #20]	; fField20
        1ab654:	e5840018 	str	r0, [r4, #24]	; fField24
        1ab658:	e3350000 	teq	r5, #0	; 0x0
        1ab65c:	15950018 	ldrne	r0, [r5, #24]	; fField24
        1ab660:	159d3000 	ldrne	r3, [sp]
        1ab664:	1080a003 	addne	sl, r0, r3
        1ab668:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ab66c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1ab670:	e0802008 	add	r2, r0, r8
        1ab674:	e58d2000 	str	r2, [sp]
        1ab678:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        1ab67c:	e59d1020 	ldr	r1, [sp, #32]	; fField32
        1ab680:	e1310000 	teq	r1, r0
        1ab684:	0a00000a 	beq	1ab6b4 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x398>
        1ab688:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        1ab68c:	e59d2000 	ldr	r2, [sp]
        1ab690:	e0821001 	add	r1, r2, r1
        1ab694:	e0810000 	add	r0, r1, r0
        1ab698:	e0401008 	sub	r1, r0, r8
        1ab69c:	e0492001 	sub	r2, r9, r1
        1ab6a0:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        1ab6a4:	e0801001 	add	r1, r0, r1
        1ab6a8:	eb68ce29 	bl	1bdef54 <$BlockMove>
        1ab6ac:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        1ab6b0:	e0899001 	add	r9, r9, r1
        1ab6b4:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        1ab6b8:	e0899001 	add	r9, r9, r1
        1ab6bc:	e3350000 	teq	r5, #0	; 0x0
        1ab6c0:	159d2020 	ldrne	r2, [sp, #32]	; fField32
        1ab6c4:	13320000 	teqne	r2, #0	; 0x0
        1ab6c8:	0a000005 	beq	1ab6e4 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x3c8>
        1ab6cc:	e59d0000 	ldr	r0, [sp]
        1ab6d0:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        1ab6d4:	e0801001 	add	r1, r0, r1
        1ab6d8:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        1ab6dc:	e08a0000 	add	r0, sl, r0
        1ab6e0:	eb68ce1b 	bl	1bdef54 <$BlockMove>
        1ab6e4:	e3360001 	teq	r6, #1	; 0x1
        1ab6e8:	13a00000 	movne	r0, #0	; 0x0
        1ab6ec:	15840018 	strne	r0, [r4, #24]	; fField24
        1ab6f0:	15849014 	strne	r9, [r4, #20]	; fField20
        1ab6f4:	1a00000b 	bne	1ab728 <TRichString::MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)+0x40c>
        1ab6f8:	e1860207 	orr	r0, r6, r7, lsl #4
        1ab6fc:	e0881009 	add	r1, r8, r9
        1ab700:	e1a02c40 	mov	r2, r0, asr #24
        1ab704:	e5612004 	strb	r2, [r1, -#4]!	; fField4
        1ab708:	e1a02840 	mov	r2, r0, asr #16
        1ab70c:	e5e12001 	strb	r2, [r1, #1]!	; fField1
        1ab710:	e1a02440 	mov	r2, r0, asr #8
        1ab714:	e5e12001 	strb	r2, [r1, #1]!	; fField1
        1ab718:	e5e10001 	strb	r0, [r1, #1]!	; fField1
        1ab71c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1ab720:	e0490000 	sub	r0, r9, r0
        1ab724:	e2400004 	sub	r0, r0, #4	; 0x4
        1ab728:	e584001c 	str	r0, [r4, #28]	; fField28
        1ab72c:	e3350000 	teq	r5, #0	; 0x0
        1ab730:	e5840020 	str	r0, [r4, #32]	; fField32
        1ab734:	11a00005 	movne	r0, r5
        1ab738:	1b0003da 	blne	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1ab73c:	e1a00004 	mov	r0, r4
        1ab740:	eb0003d8 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1ab744:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1ab748:	e3500000 	cmp	r0, #0	; 0x0
        1ab74c:	b1a01009 	movlt	r1, r9
        1ab750:	b1a00004 	movlt	r0, r4
        1ab754:	bb000002 	bllt	1ab764 <TRichString::SetObjectSize(long)>
        1ab758:	e1a00004 	mov	r0, r4
        1ab75c:	eb0003fc 	bl	1ac754 <TRichString::Format( const(void))>
        1ab760:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::SetObjectSize(long)
 * Address: 001ab764
 */
TRichString::SetObjectSize(long) {
    /*
        1ab764:	ea686b00 	b	1bc636c <$SetLength(RefVar const &, long)>
    */
}

/**
 * Symbol: TRichString::DoStringerStuff(char *, long *, char *, long *)
 * Address: 001ab768
 */
TRichString::DoStringerStuff(char *, long *, char *, long *) {
    /*
        1ab768:	e1a0c00d 	mov	ip, sp
        1ab76c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1ab770:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ab774:	e1a04000 	mov	r4, r0
        1ab778:	e1b06001 	movs	r6, r1
        1ab77c:	e1a07002 	mov	r7, r2
        1ab780:	e1a05003 	mov	r5, r3
        1ab784:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1ab788:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1ab78c:	e1a01081 	mov	r1, r1, lsl #1
        1ab790:	e5821000 	str	r1, [r2]
        1ab794:	e594101c 	ldr	r1, [r4, #28]	; fField28
        1ab798:	e5801000 	str	r1, [r0]
        1ab79c:	03350000 	teqeq	r5, #0	; 0x0
        1ab7a0:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1ab7a4:	e1a00004 	mov	r0, r4
        1ab7a8:	eb0003b0 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1ab7ac:	e1a08000 	mov	r8, r0
        1ab7b0:	e3360000 	teq	r6, #0	; 0x0
        1ab7b4:	0a000003 	beq	1ab7c8 <TRichString::DoStringerStuff(char *, long *, char *, long *)+0x60>
        1ab7b8:	e1a01006 	mov	r1, r6
        1ab7bc:	e1a00008 	mov	r0, r8
        1ab7c0:	e5972000 	ldr	r2, [r7]
        1ab7c4:	eb68cde2 	bl	1bdef54 <$BlockMove>
        1ab7c8:	e3350000 	teq	r5, #0	; 0x0
        1ab7cc:	1594201c 	ldrne	r2, [r4, #28]	; fField28
        1ab7d0:	13320000 	teqne	r2, #0	; 0x0
        1ab7d4:	0a000003 	beq	1ab7e8 <TRichString::DoStringerStuff(char *, long *, char *, long *)+0x80>
        1ab7d8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1ab7dc:	e0800008 	add	r0, r0, r8
        1ab7e0:	e1a01005 	mov	r1, r5
        1ab7e4:	eb68cdda 	bl	1bdef54 <$BlockMove>
        1ab7e8:	e1a00004 	mov	r0, r4
        1ab7ec:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        1ab7f0:	ea0003ac 	b	1ac6a8 <TRichString::ReleasePtr( const(void))>
    */
}

/**
 * Symbol: GetInkData__11TRichStringCFUlT1PUlT3
 * Address: 001ab7f4
 */
void TRichString::GetInkData() {
    /*
        1ab7f4:	e1a0c00d 	mov	ip, sp
        1ab7f8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ab7fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ab800:	e1a04000 	mov	r4, r0
        1ab804:	e1a07001 	mov	r7, r1
        1ab808:	e1a05002 	mov	r5, r2
        1ab80c:	e1a06003 	mov	r6, r3
        1ab810:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        1ab814:	eb000395 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1ab818:	e1a01000 	mov	r1, r0
        1ab81c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1ab820:	e0800001 	add	r0, r0, r1
        1ab824:	e3a09000 	mov	r9, #0	; 0x0
        1ab828:	e3a08000 	mov	r8, #0	; 0x0
        1ab82c:	e0972005 	adds	r2, r7, r5
        1ab830:	e3a07000 	mov	r7, #0	; 0x0
        1ab834:	e2423001 	sub	r3, r2, #1	; 0x1
        1ab838:	0a000015 	beq	1ab894 <GetInkData__11TRichStringCFUlT1PUlT3+0xa0>
        1ab83c:	e5912000 	ldr	r2, [r1]
        1ab840:	e1a02822 	mov	r2, r2, lsr #16
        1ab844:	e2811002 	add	r1, r1, #2	; 0x2
        1ab848:	e3320cf7 	teq	r2, #63232	; 0xf700
        1ab84c:	1a00000d 	bne	1ab888 <GetInkData__11TRichStringCFUlT1PUlT3+0x94>
        1ab850:	e5902000 	ldr	r2, [r0]
        1ab854:	e1a02822 	mov	r2, r2, lsr #16
        1ab858:	e2822005 	add	r2, r2, #5	; 0x5
        1ab85c:	e3c22003 	bic	r2, r2, #3	; 0x3
        1ab860:	e1530005 	cmp	r3, r5
        1ab864:	2a000004 	bcs	1ab87c <GetInkData__11TRichStringCFUlT1PUlT3+0x88>
        1ab868:	e3370000 	teq	r7, #0	; 0x0
        1ab86c:	03a07001 	moveq	r7, #1	; 0x1
        1ab870:	01a09008 	moveq	r9, r8
        1ab874:	03a08000 	moveq	r8, #0	; 0x0
        1ab878:	ea000000 	b	1ab880 <GetInkData__11TRichStringCFUlT1PUlT3+0x8c>
        1ab87c:	e0889002 	add	r9, r8, r2
        1ab880:	e0888002 	add	r8, r8, r2
        1ab884:	e0800002 	add	r0, r0, r2
        1ab888:	e1b02003 	movs	r2, r3
        1ab88c:	e2433001 	sub	r3, r3, #1	; 0x1
        1ab890:	1affffe9 	bne	1ab83c <GetInkData__11TRichStringCFUlT1PUlT3+0x48>
        1ab894:	e1a00004 	mov	r0, r4
        1ab898:	eb000382 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1ab89c:	e3370000 	teq	r7, #0	; 0x0
        1ab8a0:	e5869000 	str	r9, [r6]
        1ab8a4:	03a08000 	moveq	r8, #0	; 0x0
        1ab8a8:	e58a8000 	str	r8, [sl]
        1ab8ac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::SetChar(unsigned long, unsigned short)
 * Address: 001ab8f4
 */
TRichString::SetChar(unsigned long, unsigned short) {
    /*
        1ab8f4:	e1a0c00d 	mov	ip, sp
        1ab8f8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1ab8fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ab900:	e1a04000 	mov	r4, r0
        1ab904:	e1a06001 	mov	r6, r1
        1ab908:	e1a05002 	mov	r5, r2
        1ab90c:	e1a07802 	mov	r7, r2, lsl #16
        1ab910:	e1a07827 	mov	r7, r7, lsr #16
        1ab914:	eb000355 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1ab918:	e0800086 	add	r0, r0, r6, lsl #1
        1ab91c:	e5901000 	ldr	r1, [r0]
        1ab920:	e1a01821 	mov	r1, r1, lsr #16
        1ab924:	e1a02805 	mov	r2, r5, lsl #16
        1ab928:	e1a02822 	mov	r2, r2, lsr #16
        1ab92c:	e1a02422 	mov	r2, r2, lsr #8
        1ab930:	e3310cf7 	teq	r1, #63232	; 0xf700
        1ab934:	1a000014 	bne	1ab98c <TRichString::SetChar(unsigned long, unsigned short)+0x98>
        1ab938:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ab93c:	e5cd7001 	strb	r7, [sp, #1]	; fField1
        1ab940:	e44d2028 	strb	r2, [sp], -#40
        1ab944:	e3a00000 	mov	r0, #0	; 0x0
        1ab948:	e5cd002b 	strb	r0, [sp, #43]
        1ab94c:	e5cd002a 	strb	r0, [sp, #42]
        1ab950:	e28d1028 	add	r1, sp, #40	; 0x28
        1ab954:	e1a0000d 	mov	r0, sp
        1ab958:	eb000462 	bl	1acae8 <TRichString::__ct(unsigned short *)>
        1ab95c:	e3a03001 	mov	r3, #1	; 0x1
        1ab960:	e3a02000 	mov	r2, #0	; 0x0
        1ab964:	e92d000c 	stmdb	sp!, {r2, r3}
        1ab968:	e28d3008 	add	r3, sp, #8	; 0x8
        1ab96c:	e1a01006 	mov	r1, r6
        1ab970:	e1a00004 	mov	r0, r4
        1ab974:	e3a02001 	mov	r2, #1	; 0x1
        1ab978:	eb6817c6 	bl	1bb1898 <TRichString::$MungeRange(unsigned long, unsigned long, TRichString const *, unsigned long, unsigned long)>
        1ab97c:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        1ab980:	eb685e0d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ab984:	e28dd02c 	add	sp, sp, #44	; 0x2c
        1ab988:	ea000001 	b	1ab994 <TRichString::SetChar(unsigned long, unsigned short)+0xa0>
        1ab98c:	e5c07001 	strb	r7, [r0, #1]	; fField1
        1ab990:	e5c02000 	strb	r2, [r0]
        1ab994:	e1a00004 	mov	r0, r4
        1ab998:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1ab99c:	ea000341 	b	1ac6a8 <TRichString::ReleasePtr( const(void))>
    */
}

/**
 * Symbol: TRichString::CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))
 * Address: 001ab9bc
 */
TRichString::CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char)) {
    /*
        1ab9bc:	e1a0c00d 	mov	ip, sp
        1ab9c0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1ab9c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ab9c8:	e1a05000 	mov	r5, r0
        1ab9cc:	e1a04001 	mov	r4, r1
        1ab9d0:	e1a07002 	mov	r7, r2
        1ab9d4:	e1a06003 	mov	r6, r3
        1ab9d8:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1ab9dc:	e20090ff 	and	r9, r0, #255	; 0xff
        1ab9e0:	e3730001 	cmn	r3, #1	; 0x1
        1ab9e4:	0595000c 	ldreq	r0, [r5, #12]	; fField12
        1ab9e8:	00406007 	subeq	r6, r0, r7
        1ab9ec:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1ab9f0:	e1a00005 	mov	r0, r5
        1ab9f4:	eb00031d 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1ab9f8:	e0808087 	add	r8, r0, r7, lsl #1
        1ab9fc:	e1a00004 	mov	r0, r4
        1aba00:	eb00031a 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1aba04:	e1a0c000 	mov	ip, r0
        1aba08:	e58d4008 	str	r4, [sp, #8]	; fField8
        1aba0c:	e88d00a0 	stmia	sp, {r5, r7}
        1aba10:	e1a0300d 	mov	r3, sp
        1aba14:	e59f203c 	ldr	r2, [pc, #3c]	; 1aba58 <TRichString::CompareSubStringCommon( const(TRichString const &, unsigned long, long, unsigned char))+0x9c>
        1aba18:	e1a01009 	mov	r1, r9
        1aba1c:	e3a00001 	mov	r0, #1	; 0x1
        1aba20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1aba24:	e1a0200c 	mov	r2, ip
        1aba28:	e1a01006 	mov	r1, r6
        1aba2c:	e1a00008 	mov	r0, r8
        1aba30:	e594300c 	ldr	r3, [r4, #12]	; fField12
        1aba34:	eb67f288 	bl	1ba845c <$CompareUnicodeText(unsigned short const *, long, long, long, TSortingTable const *, unsigned char, long (*)(long, long, void *), void *)>
        1aba38:	e28dd010 	add	sp, sp, #16	; 0x10
        1aba3c:	e1a06000 	mov	r6, r0
        1aba40:	e1a00004 	mov	r0, r4
        1aba44:	eb000317 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1aba48:	e1a00005 	mov	r0, r5
        1aba4c:	eb000315 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1aba50:	e1a00006 	mov	r0, r6
        1aba54:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1aba58:	001ab9a0 	andeqs	fp, sl, r0, lsr #19
    */
}

/**
 * Symbol: CompareInk__11TRichStringCFPC11TRichStringUlT2
 * Address: 001aba5c
 */
void TRichString::CompareInk() {
    /*
        1aba5c:	e1a0c00d 	mov	ip, sp
        1aba60:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1aba64:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aba68:	e1a05000 	mov	r5, r0
        1aba6c:	e1a04001 	mov	r4, r1
        1aba70:	e1a07002 	mov	r7, r2
        1aba74:	e1a06003 	mov	r6, r3
        1aba78:	eb0002fc 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1aba7c:	e1a0a000 	mov	sl, r0
        1aba80:	e1a00004 	mov	r0, r4
        1aba84:	eb0002f9 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1aba88:	e1a08000 	mov	r8, r0
        1aba8c:	e1a01007 	mov	r1, r7
        1aba90:	e1a00005 	mov	r0, r5
        1aba94:	eb68177b 	bl	1bb1888 <TRichString::$InkWordNoAtOffset( const(unsigned long))>
        1aba98:	e1a01000 	mov	r1, r0
        1aba9c:	e1a00005 	mov	r0, r5
        1abaa0:	eb681776 	bl	1bb1880 <TRichString::$GetInkWordNoInfoOffset( const(unsigned long))>
        1abaa4:	e1a09000 	mov	r9, r0
        1abaa8:	e79a7000 	ldr	r7, [sl, r0]
        1abaac:	e1a07847 	mov	r7, r7, asr #16
        1abab0:	e1a01006 	mov	r1, r6
        1abab4:	e1a00004 	mov	r0, r4
        1abab8:	eb681772 	bl	1bb1888 <TRichString::$InkWordNoAtOffset( const(unsigned long))>
        1ababc:	e1a01000 	mov	r1, r0
        1abac0:	e1a00004 	mov	r0, r4
        1abac4:	eb68176d 	bl	1bb1880 <TRichString::$GetInkWordNoInfoOffset( const(unsigned long))>
        1abac8:	e7986000 	ldr	r6, [r8, r0]
        1abacc:	e1a06846 	mov	r6, r6, asr #16
        1abad0:	e1570006 	cmp	r7, r6
        1abad4:	a1a02006 	movge	r2, r6
        1abad8:	b1a02007 	movlt	r2, r7
        1abadc:	e0880000 	add	r0, r8, r0
        1abae0:	e2801002 	add	r1, r0, #2	; 0x2
        1abae4:	e08a0009 	add	r0, sl, r9
        1abae8:	e2800002 	add	r0, r0, #2	; 0x2
        1abaec:	eb6823d6 	bl	1bb4a4c <$memcmp>
        1abaf0:	e1b08000 	movs	r8, r0
        1abaf4:	00478006 	subeq	r8, r7, r6
        1abaf8:	e1a00005 	mov	r0, r5
        1abafc:	eb0002e9 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1abb00:	e1a00004 	mov	r0, r4
        1abb04:	eb0002e7 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1abb08:	e1a00008 	mov	r0, r8
        1abb0c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::NumInkWords( const(void))
 * Address: 001abb10
 */
TRichString::NumInkWords( const(void)) {
    /*
        1abb10:	e1a0c00d 	mov	ip, sp
        1abb14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1abb18:	e24cb004 	sub	fp, ip, #4	; 0x4
        1abb1c:	e1a04000 	mov	r4, r0
        1abb20:	eb00030b 	bl	1ac754 <TRichString::Format( const(void))>
        1abb24:	e3300000 	teq	r0, #0	; 0x0
        1abb28:	03a00000 	moveq	r0, #0	; 0x0
        1abb2c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1abb30:	e1a00004 	mov	r0, r4
        1abb34:	eb0002cd 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1abb38:	e1a01000 	mov	r1, r0
        1abb3c:	e3a05000 	mov	r5, #0	; 0x0
        1abb40:	e5900000 	ldr	r0, [r0]
        1abb44:	e1b00820 	movs	r0, r0, lsr #16
        1abb48:	e2811002 	add	r1, r1, #2	; 0x2
        1abb4c:	0a000005 	beq	1abb68 <TRichString::NumInkWords( const(void))+0x58>
        1abb50:	e3300cf7 	teq	r0, #63232	; 0xf700
        1abb54:	02855001 	addeq	r5, r5, #1	; 0x1
        1abb58:	e5910000 	ldr	r0, [r1]
        1abb5c:	e1b00820 	movs	r0, r0, lsr #16
        1abb60:	e2811002 	add	r1, r1, #2	; 0x2
        1abb64:	1afffff9 	bne	1abb50 <TRichString::NumInkWords( const(void))+0x40>
        1abb68:	e1a00004 	mov	r0, r4
        1abb6c:	eb0002cd 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1abb70:	e1a00005 	mov	r0, r5
        1abb74:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NumInkWordsInRange__11TRichStringCFUlT1
 * Address: 001abb78
 */
void TRichString::NumInkWordsInRange() {
    /*
        1abb78:	e1a0c00d 	mov	ip, sp
        1abb7c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1abb80:	e24cb004 	sub	fp, ip, #4	; 0x4
        1abb84:	e1a05000 	mov	r5, r0
        1abb88:	e1a04001 	mov	r4, r1
        1abb8c:	e1a06002 	mov	r6, r2
        1abb90:	eb0002ef 	bl	1ac754 <TRichString::Format( const(void))>
        1abb94:	e3a07000 	mov	r7, #0	; 0x0
        1abb98:	e3300000 	teq	r0, #0	; 0x0
        1abb9c:	1a000001 	bne	1abba8 <NumInkWordsInRange__11TRichStringCFUlT1+0x30>
        1abba0:	e1a00007 	mov	r0, r7
        1abba4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1abba8:	e1a00005 	mov	r0, r5
        1abbac:	eb0002af 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1abbb0:	e1b01004 	movs	r1, r4
        1abbb4:	e2444001 	sub	r4, r4, #1	; 0x1
        1abbb8:	0a000009 	beq	1abbe4 <NumInkWordsInRange__11TRichStringCFUlT1+0x6c>
        1abbbc:	e5901000 	ldr	r1, [r0]
        1abbc0:	e1b01821 	movs	r1, r1, lsr #16
        1abbc4:	e2800002 	add	r0, r0, #2	; 0x2
        1abbc8:	1a000002 	bne	1abbd8 <NumInkWordsInRange__11TRichStringCFUlT1+0x60>
        1abbcc:	e1a00005 	mov	r0, r5
        1abbd0:	eb0002b4 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1abbd4:	eafffff1 	b	1abba0 <NumInkWordsInRange__11TRichStringCFUlT1+0x28>
        1abbd8:	e1b01004 	movs	r1, r4
        1abbdc:	e2444001 	sub	r4, r4, #1	; 0x1
        1abbe0:	1afffff5 	bne	1abbbc <NumInkWordsInRange__11TRichStringCFUlT1+0x44>
        1abbe4:	e3a04000 	mov	r4, #0	; 0x0
        1abbe8:	ea000001 	b	1abbf4 <NumInkWordsInRange__11TRichStringCFUlT1+0x7c>
        1abbec:	e3310cf7 	teq	r1, #63232	; 0xf700
        1abbf0:	02844001 	addeq	r4, r4, #1	; 0x1
        1abbf4:	e1b01006 	movs	r1, r6
        1abbf8:	e2466001 	sub	r6, r6, #1	; 0x1
        1abbfc:	15901000 	ldrne	r1, [r0]
        1abc00:	11a01821 	movne	r1, r1, lsr #16
        1abc04:	12800002 	addne	r0, r0, #2	; 0x2
        1abc08:	13310000 	teqne	r1, #0	; 0x0
        1abc0c:	1afffff6 	bne	1abbec <NumInkWordsInRange__11TRichStringCFUlT1+0x74>
        1abc10:	e1a00005 	mov	r0, r5
        1abc14:	eb0002a3 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1abc18:	e1a00004 	mov	r0, r4
        1abc1c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::InkWordNoAtOffset( const(unsigned long))
 * Address: 001abc20
 */
TRichString::InkWordNoAtOffset( const(unsigned long)) {
    /*
        1abc20:	e1a0c00d 	mov	ip, sp
        1abc24:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1abc28:	e24cb004 	sub	fp, ip, #4	; 0x4
        1abc2c:	e1a05000 	mov	r5, r0
        1abc30:	e1a04001 	mov	r4, r1
        1abc34:	e3e06000 	mvn	r6, #0	; 0x0
        1abc38:	eb00028c 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1abc3c:	e7901084 	ldr	r1, [r0, r4, lsl #1]	; fField1
        1abc40:	e1a01821 	mov	r1, r1, lsr #16
        1abc44:	e3310cf7 	teq	r1, #63232	; 0xf700
        1abc48:	02844001 	addeq	r4, r4, #1	; 0x1
        1abc4c:	0a000002 	beq	1abc5c <TRichString::InkWordNoAtOffset( const(unsigned long))+0x3c>
        1abc50:	ea000008 	b	1abc78 <TRichString::InkWordNoAtOffset( const(unsigned long))+0x58>
        1abc54:	e3310cf7 	teq	r1, #63232	; 0xf700
        1abc58:	02866001 	addeq	r6, r6, #1	; 0x1
        1abc5c:	e1b01004 	movs	r1, r4
        1abc60:	e2444001 	sub	r4, r4, #1	; 0x1
        1abc64:	15901000 	ldrne	r1, [r0]
        1abc68:	11a01821 	movne	r1, r1, lsr #16
        1abc6c:	12800002 	addne	r0, r0, #2	; 0x2
        1abc70:	13310000 	teqne	r1, #0	; 0x0
        1abc74:	1afffff6 	bne	1abc54 <TRichString::InkWordNoAtOffset( const(unsigned long))+0x34>
        1abc78:	e1a00005 	mov	r0, r5
        1abc7c:	eb000289 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1abc80:	e1a00006 	mov	r0, r6
        1abc84:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: NumInkAndTextRunsInRange__11TRichStringCFUlT1
 * Address: 001abc88
 */
void TRichString::NumInkAndTextRunsInRange() {
    /*
        1abc88:	e1a0c00d 	mov	ip, sp
        1abc8c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1abc90:	e24cb004 	sub	fp, ip, #4	; 0x4
        1abc94:	e1a05000 	mov	r5, r0
        1abc98:	e1a04001 	mov	r4, r1
        1abc9c:	e1a06002 	mov	r6, r2
        1abca0:	eb000272 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1abca4:	e0800084 	add	r0, r0, r4, lsl #1
        1abca8:	e3a07000 	mov	r7, #0	; 0x0
        1abcac:	e0862004 	add	r2, r6, r4
        1abcb0:	e595100c 	ldr	r1, [r5, #12]	; fField12
        1abcb4:	e1520001 	cmp	r2, r1
        1abcb8:	80416004 	subhi	r6, r1, r4
        1abcbc:	e2461001 	sub	r1, r6, #1	; 0x1
        1abcc0:	e3560000 	cmp	r6, #0	; 0x0
        1abcc4:	da000011 	ble	1abd10 <NumInkAndTextRunsInRange__11TRichStringCFUlT1+0x88>
        1abcc8:	e5902000 	ldr	r2, [r0]
        1abccc:	e1a02822 	mov	r2, r2, lsr #16
        1abcd0:	e2800002 	add	r0, r0, #2	; 0x2
        1abcd4:	e3320cf7 	teq	r2, #63232	; 0xf700
        1abcd8:	0a000007 	beq	1abcfc <NumInkAndTextRunsInRange__11TRichStringCFUlT1+0x74>
        1abcdc:	ea000001 	b	1abce8 <NumInkAndTextRunsInRange__11TRichStringCFUlT1+0x60>
        1abce0:	e2411001 	sub	r1, r1, #1	; 0x1
        1abce4:	e2800002 	add	r0, r0, #2	; 0x2
        1abce8:	e3310000 	teq	r1, #0	; 0x0
        1abcec:	15902000 	ldrne	r2, [r0]
        1abcf0:	11a02822 	movne	r2, r2, lsr #16
        1abcf4:	13320cf7 	teqne	r2, #63232	; 0xf700
        1abcf8:	1afffff8 	bne	1abce0 <NumInkAndTextRunsInRange__11TRichStringCFUlT1+0x58>
        1abcfc:	e2877001 	add	r7, r7, #1	; 0x1
        1abd00:	e1a02001 	mov	r2, r1
        1abd04:	e2411001 	sub	r1, r1, #1	; 0x1
        1abd08:	e3520000 	cmp	r2, #0	; 0x0
        1abd0c:	caffffed 	bgt	1abcc8 <NumInkAndTextRunsInRange__11TRichStringCFUlT1+0x40>
        1abd10:	e1a00005 	mov	r0, r5
        1abd14:	eb000263 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1abd18:	e1a00007 	mov	r0, r7
        1abd1c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: GetLengthsAndDataInRange__11TRichStringCFUlT1PsPc
 * Address: 001abd20
 */
void TRichString::GetLengthsAndDataInRange() {
    /*
        1abd20:	e1a0c00d 	mov	ip, sp
        1abd24:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1abd28:	e24cb004 	sub	fp, ip, #4	; 0x4
        1abd2c:	e1a04000 	mov	r4, r0
        1abd30:	e1a07001 	mov	r7, r1
        1abd34:	e1a06002 	mov	r6, r2
        1abd38:	e1a05003 	mov	r5, r3
        1abd3c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        1abd40:	eb00024a 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1abd44:	e1a0a000 	mov	sl, r0
        1abd48:	e0862007 	add	r2, r6, r7
        1abd4c:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1abd50:	e1520001 	cmp	r2, r1
        1abd54:	80416007 	subhi	r6, r1, r7
        1abd58:	e3a09000 	mov	r9, #0	; 0x0
        1abd5c:	e3a01001 	mov	r1, #1	; 0x1
        1abd60:	e3570000 	cmp	r7, #0	; 0x0
        1abd64:	9a000008 	bls	1abd8c <GetLengthsAndDataInRange__11TRichStringCFUlT1PsPc+0x6c>
        1abd68:	e5902000 	ldr	r2, [r0]
        1abd6c:	e1a02822 	mov	r2, r2, lsr #16
        1abd70:	e2800002 	add	r0, r0, #2	; 0x2
        1abd74:	e3320cf7 	teq	r2, #63232	; 0xf700
        1abd78:	02899001 	addeq	r9, r9, #1	; 0x1
        1abd7c:	e1a02001 	mov	r2, r1
        1abd80:	e2811001 	add	r1, r1, #1	; 0x1
        1abd84:	e1520007 	cmp	r2, r7
        1abd88:	3afffff6 	bcc	1abd68 <GetLengthsAndDataInRange__11TRichStringCFUlT1PsPc+0x48>
        1abd8c:	e08a7087 	add	r7, sl, r7, lsl #1
        1abd90:	e3560000 	cmp	r6, #0	; 0x0
        1abd94:	9a00001b 	bls	1abe08 <GetLengthsAndDataInRange__11TRichStringCFUlT1PsPc+0xe8>
        1abd98:	e5970000 	ldr	r0, [r7]
        1abd9c:	e1a00820 	mov	r0, r0, lsr #16
        1abda0:	e3300cf7 	teq	r0, #63232	; 0xf700
        1abda4:	0a000008 	beq	1abdcc <GetLengthsAndDataInRange__11TRichStringCFUlT1PsPc+0xac>
        1abda8:	e3a00000 	mov	r0, #0	; 0x0
        1abdac:	e5880000 	str	r0, [r8]
        1abdb0:	e2800001 	add	r0, r0, #1	; 0x1
        1abdb4:	e2566001 	subs	r6, r6, #1	; 0x1
        1abdb8:	15b71002 	ldrne	r1, [r7, #2]!
        1abdbc:	11a01821 	movne	r1, r1, lsr #16
        1abdc0:	13310cf7 	teqne	r1, #63232	; 0xf700
        1abdc4:	1afffff9 	bne	1abdb0 <GetLengthsAndDataInRange__11TRichStringCFUlT1PsPc+0x90>
        1abdc8:	ea000008 	b	1abdf0 <GetLengthsAndDataInRange__11TRichStringCFUlT1PsPc+0xd0>
        1abdcc:	e1a01009 	mov	r1, r9
        1abdd0:	e2899001 	add	r9, r9, #1	; 0x1
        1abdd4:	e1a00004 	mov	r0, r4
        1abdd8:	eb6816a8 	bl	1bb1880 <TRichString::$GetInkWordNoInfoOffset( const(unsigned long))>
        1abddc:	e080000a 	add	r0, r0, sl
        1abde0:	e5880000 	str	r0, [r8]
        1abde4:	e3a00001 	mov	r0, #1	; 0x1
        1abde8:	e2466001 	sub	r6, r6, #1	; 0x1
        1abdec:	e2877002 	add	r7, r7, #2	; 0x2
        1abdf0:	e2888004 	add	r8, r8, #4	; 0x4
        1abdf4:	e5c50001 	strb	r0, [r5, #1]	; fField1
        1abdf8:	e1a00440 	mov	r0, r0, asr #8
        1abdfc:	e4c50002 	strb	r0, [r5], #2
        1abe00:	e3560000 	cmp	r6, #0	; 0x0
        1abe04:	8affffe3 	bhi	1abd98 <GetLengthsAndDataInRange__11TRichStringCFUlT1PsPc+0x78>
        1abe08:	e1a00004 	mov	r0, r4
        1abe0c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1abe10:	ea000224 	b	1ac6a8 <TRichString::ReleasePtr( const(void))>
    */
}

/**
 * Symbol: TRichString::GetInkWordNoInfoOffset( const(unsigned long))
 * Address: 001abe2c
 */
TRichString::GetInkWordNoInfoOffset( const(unsigned long)) {
    /*
        1abe2c:	e1a0c00d 	mov	ip, sp
        1abe30:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1abe34:	e24cb004 	sub	fp, ip, #4	; 0x4
        1abe38:	e1a04000 	mov	r4, r0
        1abe3c:	e1a05001 	mov	r5, r1
        1abe40:	e3a06000 	mov	r6, #0	; 0x0
        1abe44:	eb000209 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1abe48:	e1a03000 	mov	r3, r0
        1abe4c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1abe50:	e0831000 	add	r1, r3, r0
        1abe54:	e5932000 	ldr	r2, [r3]
        1abe58:	e1b02822 	movs	r2, r2, lsr #16
        1abe5c:	e2833002 	add	r3, r3, #2	; 0x2
        1abe60:	0a000010 	beq	1abea8 <TRichString::GetInkWordNoInfoOffset( const(unsigned long))+0x7c>
        1abe64:	e3320cf7 	teq	r2, #63232	; 0xf700
        1abe68:	1a00000a 	bne	1abe98 <TRichString::GetInkWordNoInfoOffset( const(unsigned long))+0x6c>
        1abe6c:	e5912000 	ldr	r2, [r1]
        1abe70:	e1a02842 	mov	r2, r2, asr #16
        1abe74:	e1b0c005 	movs	ip, r5
        1abe78:	e2455001 	sub	r5, r5, #1	; 0x1
        1abe7c:	12822005 	addne	r2, r2, #5	; 0x5
        1abe80:	13c22003 	bicne	r2, r2, #3	; 0x3
        1abe84:	10811002 	addne	r1, r1, r2
        1abe88:	10800002 	addne	r0, r0, r2
        1abe8c:	1a000001 	bne	1abe98 <TRichString::GetInkWordNoInfoOffset( const(unsigned long))+0x6c>
        1abe90:	e1a06000 	mov	r6, r0
        1abe94:	ea000003 	b	1abea8 <TRichString::GetInkWordNoInfoOffset( const(unsigned long))+0x7c>
        1abe98:	e5932000 	ldr	r2, [r3]
        1abe9c:	e1b02822 	movs	r2, r2, lsr #16
        1abea0:	e2833002 	add	r3, r3, #2	; 0x2
        1abea4:	1affffee 	bne	1abe64 <TRichString::GetInkWordNoInfoOffset( const(unsigned long))+0x38>
        1abea8:	e1a00004 	mov	r0, r4
        1abeac:	eb0001fd 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1abeb0:	e1a00006 	mov	r0, r6
        1abeb4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::CloneInkWordNo( const(unsigned long))
 * Address: 001abeb8
 */
TRichString::CloneInkWordNo( const(unsigned long)) {
    /*
        1abeb8:	e1a0c00d 	mov	ip, sp
        1abebc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1abec0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1abec4:	e1a04000 	mov	r4, r0
        1abec8:	e1a05001 	mov	r5, r1
        1abecc:	eb0001e7 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1abed0:	e1a07000 	mov	r7, r0
        1abed4:	e1a01005 	mov	r1, r5
        1abed8:	e1a00004 	mov	r0, r4
        1abedc:	eb681667 	bl	1bb1880 <TRichString::$GetInkWordNoInfoOffset( const(unsigned long))>
        1abee0:	e7976000 	ldr	r6, [r7, r0]
        1abee4:	e1a06846 	mov	r6, r6, asr #16
        1abee8:	e2808002 	add	r8, r0, #2	; 0x2
        1abeec:	e1a01006 	mov	r1, r6
        1abef0:	e59f003c 	ldr	r0, [pc, #3c]	; 1abf34 <TRichString::CloneInkWordNo( const(unsigned long))+0x7c>
        1abef4:	eb685890 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1abef8:	eb685893 	bl	1bc214c <$AllocateRefHandle(long)>
        1abefc:	e1a05000 	mov	r5, r0
        1abf00:	e5900000 	ldr	r0, [r0]
        1abf04:	eb685894 	bl	1bc215c <$BinaryData(long)>
        1abf08:	e1a01000 	mov	r1, r0
        1abf0c:	e0870008 	add	r0, r7, r8
        1abf10:	e1a02006 	mov	r2, r6
        1abf14:	eb68cc0e 	bl	1bdef54 <$BlockMove>
        1abf18:	e1a00004 	mov	r0, r4
        1abf1c:	eb0001e1 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1abf20:	e5954000 	ldr	r4, [r5]
        1abf24:	e1a00005 	mov	r0, r5
        1abf28:	eb685ca3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1abf2c:	e1a00004 	mov	r0, r4
        1abf30:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1abf34:	00683240 	rsbeq	r3, r8, r0, asr #4
    */
}

/**
 * Symbol: TRichString::GetChar( const(unsigned long))
 * Address: 001abf38
 */
TRichString::GetChar( const(unsigned long)) {
    /*
        1abf38:	e1a0c00d 	mov	ip, sp
        1abf3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1abf40:	e24cb004 	sub	fp, ip, #4	; 0x4
        1abf44:	e1a04000 	mov	r4, r0
        1abf48:	e1a05001 	mov	r5, r1
        1abf4c:	eb0001c7 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1abf50:	e0800085 	add	r0, r0, r5, lsl #1
        1abf54:	e5905000 	ldr	r5, [r0]
        1abf58:	e1a05825 	mov	r5, r5, lsr #16
        1abf5c:	e1a00004 	mov	r0, r4
        1abf60:	eb0001d0 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1abf64:	e1a00005 	mov	r0, r5
        1abf68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::MakeParagraphTextSlot( const(void))
 * Address: 001abf6c
 */
TRichString::MakeParagraphTextSlot( const(void)) {
    /*
        1abf6c:	e1a0c00d 	mov	ip, sp
        1abf70:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1abf74:	e24cb004 	sub	fp, ip, #4	; 0x4
        1abf78:	e1a04000 	mov	r4, r0
        1abf7c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1abf80:	e590600c 	ldr	r6, [r0, #12]	; fField12
        1abf84:	e3a00002 	mov	r0, #2	; 0x2
        1abf88:	e0807086 	add	r7, r0, r6, lsl #1
        1abf8c:	e1a01007 	mov	r1, r7
        1abf90:	e59f009c 	ldr	r0, [pc, #9c]	; 1ac034 <TRichString::MakeParagraphTextSlot( const(void))+0xc8>
        1abf94:	eb685868 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1abf98:	eb68586b 	bl	1bc214c <$AllocateRefHandle(long)>
        1abf9c:	e58d0004 	str	r0, [sp, #4]	; fField4
        1abfa0:	e28d1004 	add	r1, sp, #4	; 0x4
        1abfa4:	e1a0000d 	mov	r0, sp
        1abfa8:	eb68544a 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        1abfac:	e1a0000d 	mov	r0, sp
        1abfb0:	eb685857 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1abfb4:	e1a05000 	mov	r5, r0
        1abfb8:	e1a00004 	mov	r0, r4
        1abfbc:	eb0001ab 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1abfc0:	e1a02007 	mov	r2, r7
        1abfc4:	e1a01005 	mov	r1, r5
        1abfc8:	eb68cbe1 	bl	1bdef54 <$BlockMove>
        1abfcc:	e3a00000 	mov	r0, #0	; 0x0
        1abfd0:	e3560000 	cmp	r6, #0	; 0x0
        1abfd4:	9a00000b 	bls	1ac008 <TRichString::MakeParagraphTextSlot( const(void))+0x9c>
        1abfd8:	e3a02001 	mov	r2, #1	; 0x1
        1abfdc:	e2822cf7 	add	r2, r2, #63232	; 0xf700
        1abfe0:	e3a010f7 	mov	r1, #247	; 0xf7
        1abfe4:	e7953080 	ldr	r3, [r5, r0, lsl #1]	; fField1
        1abfe8:	e1a03823 	mov	r3, r3, lsr #16
        1abfec:	e3330cf7 	teq	r3, #63232	; 0xf700
        1abff0:	00853080 	addeq	r3, r5, r0, lsl #1
        1abff4:	05c32001 	streqb	r2, [r3, #1]	; fField1
        1abff8:	05c31000 	streqb	r1, [r3]
        1abffc:	e2800001 	add	r0, r0, #1	; 0x1
        1ac000:	e1500006 	cmp	r0, r6
        1ac004:	3afffff6 	bcc	1abfe4 <TRichString::MakeParagraphTextSlot( const(void))+0x78>
        1ac008:	e1a00004 	mov	r0, r4
        1ac00c:	eb0001a5 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1ac010:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ac014:	e5904000 	ldr	r4, [r0]
        1ac018:	e1a0000d 	mov	r0, sp
        1ac01c:	e3a01000 	mov	r1, #0	; 0x0
        1ac020:	eb685836 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1ac024:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ac028:	eb685c63 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ac02c:	e1a00004 	mov	r0, r4
        1ac030:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1ac034:	006848d0 	ldreqd	r4, [r8], -#128
    */
}

/**
 * Symbol: TRichString::MakeParagraphStylesSlot( const(RefVar const &))
 * Address: 001ac038
 */
TRichString::MakeParagraphStylesSlot( const(RefVar const &)) {
    /*
        1ac038:	e1a0c00d 	mov	ip, sp
        1ac03c:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ac040:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ac044:	e1a04000 	mov	r4, r0
        1ac048:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ac04c:	ebfffeaf 	bl	1abb10 <TRichString::NumInkWords( const(void))>
        1ac050:	e1a06000 	mov	r6, r0
        1ac054:	e3a00002 	mov	r0, #2	; 0x2
        1ac058:	eb68583b 	bl	1bc214c <$AllocateRefHandle(long)>
        1ac05c:	e1a05000 	mov	r5, r0
        1ac060:	e1b00006 	movs	r0, r6
        1ac064:	e59f6058 	ldr	r6, [pc, #58]	; 1ac0c4 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x8c>
        1ac068:	e3a07000 	mov	r7, #0	; 0x0
        1ac06c:	1a000015 	bne	1ac0c8 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x90>
        1ac070:	e1a00006 	mov	r0, r6
        1ac074:	e3a01002 	mov	r1, #2	; 0x2
        1ac078:	eb68582e 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1ac07c:	e5850000 	str	r0, [r5]
        1ac080:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        1ac084:	e1a00100 	mov	r0, r0, lsl #2
        1ac088:	eb68582f 	bl	1bc214c <$AllocateRefHandle(long)>
        1ac08c:	e1a04000 	mov	r4, r0
        1ac090:	e5902000 	ldr	r2, [r0]
        1ac094:	e1a01007 	mov	r1, r7
        1ac098:	e5950000 	ldr	r0, [r5]
        1ac09c:	eb6868ad 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ac0a0:	e1a00004 	mov	r0, r4
        1ac0a4:	eb685c44 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ac0a8:	e51b002c 	ldr	r0, [fp, -#44]
        1ac0ac:	e5900000 	ldr	r0, [r0]
        1ac0b0:	e5902000 	ldr	r2, [r0]
        1ac0b4:	e3a01001 	mov	r1, #1	; 0x1
        1ac0b8:	e5950000 	ldr	r0, [r5]
        1ac0bc:	eb6868a5 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ac0c0:	ea000092 	b	1ac310 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x2d8>
        1ac0c4:	00684930 	rsbeq	r4, r8, r0, lsr r9
        1ac0c8:	e1a00004 	mov	r0, r4
        1ac0cc:	eb000167 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1ac0d0:	e1a07000 	mov	r7, r0
        1ac0d4:	e3a01000 	mov	r1, #0	; 0x0
        1ac0d8:	e3a00000 	mov	r0, #0	; 0x0
        1ac0dc:	e5972000 	ldr	r2, [r7]
        1ac0e0:	e1b02822 	movs	r2, r2, lsr #16
        1ac0e4:	0a00000f 	beq	1ac128 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0xf0>
        1ac0e8:	e3320cf7 	teq	r2, #63232	; 0xf700
        1ac0ec:	02811001 	addeq	r1, r1, #1	; 0x1
        1ac0f0:	02800001 	addeq	r0, r0, #1	; 0x1
        1ac0f4:	0a000007 	beq	1ac118 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0xe0>
        1ac0f8:	ea000000 	b	1ac100 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0xc8>
        1ac0fc:	e2800001 	add	r0, r0, #1	; 0x1
        1ac100:	e7972080 	ldr	r2, [r7, r0, lsl #1]	; fField1
        1ac104:	e1a02822 	mov	r2, r2, lsr #16
        1ac108:	e3320cf7 	teq	r2, #63232	; 0xf700
        1ac10c:	13320000 	teqne	r2, #0	; 0x0
        1ac110:	1afffff9 	bne	1ac0fc <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0xc4>
        1ac114:	e2811001 	add	r1, r1, #1	; 0x1
        1ac118:	e7972080 	ldr	r2, [r7, r0, lsl #1]	; fField1
        1ac11c:	e1a02822 	mov	r2, r2, lsr #16
        1ac120:	e3320000 	teq	r2, #0	; 0x0
        1ac124:	1affffef 	bne	1ac0e8 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0xb0>
        1ac128:	e1a01081 	mov	r1, r1, lsl #1
        1ac12c:	e1a00006 	mov	r0, r6
        1ac130:	eb685800 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        1ac134:	e3a06000 	mov	r6, #0	; 0x0
        1ac138:	e3a0a000 	mov	sl, #0	; 0x0
        1ac13c:	e3a08000 	mov	r8, #0	; 0x0
        1ac140:	e3a09000 	mov	r9, #0	; 0x0
        1ac144:	e5850000 	str	r0, [r5]
        1ac148:	e5970000 	ldr	r0, [r7]
        1ac14c:	e1b00820 	movs	r0, r0, lsr #16
        1ac150:	0a00006c 	beq	1ac308 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x2d0>
        1ac154:	e59f1130 	ldr	r1, [pc, #130]	; 1ac28c <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x254>
        1ac158:	e58d1000 	str	r1, [sp]
        1ac15c:	e3300cf7 	teq	r0, #63232	; 0xf700
        1ac160:	1a00004c 	bne	1ac298 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x260>
        1ac164:	e3380000 	teq	r8, #0	; 0x0
        1ac168:	0a000013 	beq	1ac1bc <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x184>
        1ac16c:	e1a01086 	mov	r1, r6, lsl #1
        1ac170:	e1a00108 	mov	r0, r8, lsl #2
        1ac174:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        1ac178:	eb6857f3 	bl	1bc214c <$AllocateRefHandle(long)>
        1ac17c:	e1a08000 	mov	r8, r0
        1ac180:	e5902000 	ldr	r2, [r0]
        1ac184:	e5950000 	ldr	r0, [r5]
        1ac188:	e59d1000 	ldr	r1, [sp]
        1ac18c:	eb686871 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ac190:	e28dd004 	add	sp, sp, #4	; 0x4
        1ac194:	e1a00008 	mov	r0, r8
        1ac198:	eb685c07 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ac19c:	e3a00001 	mov	r0, #1	; 0x1
        1ac1a0:	e0801086 	add	r1, r0, r6, lsl #1
        1ac1a4:	e51b002c 	ldr	r0, [fp, -#44]
        1ac1a8:	e5900000 	ldr	r0, [r0]
        1ac1ac:	e5902000 	ldr	r2, [r0]
        1ac1b0:	e5950000 	ldr	r0, [r5]
        1ac1b4:	eb686867 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ac1b8:	e2866001 	add	r6, r6, #1	; 0x1
        1ac1bc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1ac1c0:	e1a0100a 	mov	r1, sl
        1ac1c4:	e1a00004 	mov	r0, r4
        1ac1c8:	eb6815ac 	bl	1bb1880 <TRichString::$GetInkWordNoInfoOffset( const(unsigned long))>
        1ac1cc:	e7978000 	ldr	r8, [r7, r0]
        1ac1d0:	e1a08848 	mov	r8, r8, asr #16
        1ac1d4:	e2800002 	add	r0, r0, #2	; 0x2
        1ac1d8:	e1a01008 	mov	r1, r8
        1ac1dc:	e58d0008 	str	r0, [sp, #8]	; fField8
        1ac1e0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1ac1e4:	eb6857d4 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1ac1e8:	eb6857d7 	bl	1bc214c <$AllocateRefHandle(long)>
        1ac1ec:	e58d0004 	str	r0, [sp, #4]	; fField4
        1ac1f0:	e28d1004 	add	r1, sp, #4	; 0x4
        1ac1f4:	e1a0000d 	mov	r0, sp
        1ac1f8:	eb6853b6 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        1ac1fc:	e1a0000d 	mov	r0, sp
        1ac200:	eb6857c3 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        1ac204:	e1a01000 	mov	r1, r0
        1ac208:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1ac20c:	e0870000 	add	r0, r7, r0
        1ac210:	e1a02008 	mov	r2, r8
        1ac214:	eb68cb4e 	bl	1bdef54 <$BlockMove>
        1ac218:	e28aa001 	add	sl, sl, #1	; 0x1
        1ac21c:	e1a01086 	mov	r1, r6, lsl #1
        1ac220:	e3a00004 	mov	r0, #4	; 0x4
        1ac224:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        1ac228:	eb6857c7 	bl	1bc214c <$AllocateRefHandle(long)>
        1ac22c:	e1a08000 	mov	r8, r0
        1ac230:	e5902000 	ldr	r2, [r0]
        1ac234:	e5950000 	ldr	r0, [r5]
        1ac238:	e59d1000 	ldr	r1, [sp]
        1ac23c:	eb686845 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ac240:	e28dd004 	add	sp, sp, #4	; 0x4
        1ac244:	e1a00008 	mov	r0, r8
        1ac248:	eb685bdb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ac24c:	e3a00001 	mov	r0, #1	; 0x1
        1ac250:	e0801086 	add	r1, r0, r6, lsl #1
        1ac254:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ac258:	e5902000 	ldr	r2, [r0]
        1ac25c:	e5950000 	ldr	r0, [r5]
        1ac260:	eb68683c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ac264:	e2866001 	add	r6, r6, #1	; 0x1
        1ac268:	e2899001 	add	r9, r9, #1	; 0x1
        1ac26c:	e3a08000 	mov	r8, #0	; 0x0
        1ac270:	e1a0000d 	mov	r0, sp
        1ac274:	e3a01000 	mov	r1, #0	; 0x0
        1ac278:	eb6857a0 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        1ac27c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ac280:	eb685bcd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ac284:	e28dd00c 	add	sp, sp, #12	; 0xc
        1ac288:	ea000007 	b	1ac2ac <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x274>
        1ac28c:	00683240 	rsbeq	r3, r8, r0, asr #4
        1ac290:	e2899001 	add	r9, r9, #1	; 0x1
        1ac294:	e2888001 	add	r8, r8, #1	; 0x1
        1ac298:	e7970089 	ldr	r0, [r7, r9, lsl #1]	; fField1
        1ac29c:	e1a00820 	mov	r0, r0, lsr #16
        1ac2a0:	e3300cf7 	teq	r0, #63232	; 0xf700
        1ac2a4:	13300000 	teqne	r0, #0	; 0x0
        1ac2a8:	1afffff8 	bne	1ac290 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x258>
        1ac2ac:	e7970089 	ldr	r0, [r7, r9, lsl #1]	; fField1
        1ac2b0:	e1a00820 	mov	r0, r0, lsr #16
        1ac2b4:	e3300000 	teq	r0, #0	; 0x0
        1ac2b8:	1affffa7 	bne	1ac15c <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x124>
        1ac2bc:	e3380000 	teq	r8, #0	; 0x0
        1ac2c0:	0a000010 	beq	1ac308 <TRichString::MakeParagraphStylesSlot( const(RefVar const &))+0x2d0>
        1ac2c4:	e1a07086 	mov	r7, r6, lsl #1
        1ac2c8:	e1a00108 	mov	r0, r8, lsl #2
        1ac2cc:	eb68579e 	bl	1bc214c <$AllocateRefHandle(long)>
        1ac2d0:	e1a08000 	mov	r8, r0
        1ac2d4:	e5902000 	ldr	r2, [r0]
        1ac2d8:	e1a01007 	mov	r1, r7
        1ac2dc:	e5950000 	ldr	r0, [r5]
        1ac2e0:	eb68681c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ac2e4:	e1a00008 	mov	r0, r8
        1ac2e8:	eb685bb3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ac2ec:	e3a00001 	mov	r0, #1	; 0x1
        1ac2f0:	e0801086 	add	r1, r0, r6, lsl #1
        1ac2f4:	e51b002c 	ldr	r0, [fp, -#44]
        1ac2f8:	e5900000 	ldr	r0, [r0]
        1ac2fc:	e5902000 	ldr	r2, [r0]
        1ac300:	e5950000 	ldr	r0, [r5]
        1ac304:	eb686813 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1ac308:	e1a00004 	mov	r0, r4
        1ac30c:	eb0000e5 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1ac310:	e5954000 	ldr	r4, [r5]
        1ac314:	e1a00005 	mov	r0, r5
        1ac318:	eb685ba7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1ac31c:	e1a00004 	mov	r0, r4
        1ac320:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::Verify( const(void))
 * Address: 001ac324
 */
TRichString::Verify( const(void)) {
    /*
        1ac324:	e1a0c00d 	mov	ip, sp
        1ac328:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ac32c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ac330:	e1a04000 	mov	r4, r0
        1ac334:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1ac338:	e3a05000 	mov	r5, #0	; 0x0
        1ac33c:	eb0000cb 	bl	1ac670 <TRichString::GrabPtr( const(void))>
        1ac340:	e3a06000 	mov	r6, #0	; 0x0
        1ac344:	e3a07000 	mov	r7, #0	; 0x0
        1ac348:	e58d0008 	str	r0, [sp, #8]	; fField8
        1ac34c:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1ac350:	e3310000 	teq	r1, #0	; 0x0
        1ac354:	05941008 	ldreq	r1, [r4, #8]	; fField8
        1ac358:	e0811000 	add	r1, r1, r0
        1ac35c:	e3a09000 	mov	r9, #0	; 0x0
        1ac360:	e3a08000 	mov	r8, #0	; 0x0
        1ac364:	e58d1000 	str	r1, [sp]
        1ac368:	e590a000 	ldr	sl, [r0]
        1ac36c:	e1b0a82a 	movs	sl, sl, lsr #16
        1ac370:	e2800002 	add	r0, r0, #2	; 0x2
        1ac374:	e58d0004 	str	r0, [sp, #4]	; fField4
        1ac378:	0a000020 	beq	1ac400 <TRichString::Verify( const(void))+0xdc>
        1ac37c:	e1a01006 	mov	r1, r6
        1ac380:	e1a00004 	mov	r0, r4
        1ac384:	ebfffeeb 	bl	1abf38 <TRichString::GetChar( const(unsigned long))>
        1ac388:	e130000a 	teq	r0, sl
        1ac38c:	12865ffa 	addne	r5, r6, #1000	; 0x3e8
        1ac390:	1a0000ae 	bne	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac394:	e33a0cf7 	teq	sl, #63232	; 0xf700
        1ac398:	1a000009 	bne	1ac3c4 <TRichString::Verify( const(void))+0xa0>
        1ac39c:	e1a01006 	mov	r1, r6
        1ac3a0:	e1a00004 	mov	r0, r4
        1ac3a4:	eb681537 	bl	1bb1888 <TRichString::$InkWordNoAtOffset( const(unsigned long))>
        1ac3a8:	e1300007 	teq	r0, r7
        1ac3ac:	02877001 	addeq	r7, r7, #1	; 0x1
        1ac3b0:	02888001 	addeq	r8, r8, #1	; 0x1
        1ac3b4:	03a09000 	moveq	r9, #0	; 0x0
        1ac3b8:	0a000004 	beq	1ac3d0 <TRichString::Verify( const(void))+0xac>
        1ac3bc:	e2865e7d 	add	r5, r6, #2000	; 0x7d0
        1ac3c0:	ea0000a2 	b	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac3c4:	e3390000 	teq	r9, #0	; 0x0
        1ac3c8:	02888001 	addeq	r8, r8, #1	; 0x1
        1ac3cc:	03a09001 	moveq	r9, #1	; 0x1
        1ac3d0:	e2866001 	add	r6, r6, #1	; 0x1
        1ac3d4:	e89d0003 	ldmia	sp, {r0, r1}
        1ac3d8:	e1510000 	cmp	r1, r0
        1ac3dc:	22865fee 	addcs	r5, r6, #952	; 0x3b8
        1ac3e0:	22855b02 	addcs	r5, r5, #2048	; 0x800
        1ac3e4:	2a000099 	bcs	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac3e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ac3ec:	e590a000 	ldr	sl, [r0]
        1ac3f0:	e1b0a82a 	movs	sl, sl, lsr #16
        1ac3f4:	e2800002 	add	r0, r0, #2	; 0x2
        1ac3f8:	e58d0004 	str	r0, [sp, #4]	; fField4
        1ac3fc:	1affffde 	bne	1ac37c <TRichString::Verify( const(void))+0x58>
        1ac400:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1ac404:	e1300006 	teq	r0, r6
        1ac408:	13a05064 	movne	r5, #100	; 0x64
        1ac40c:	1a00008f 	bne	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac410:	e1a00004 	mov	r0, r4
        1ac414:	ebfffdbd 	bl	1abb10 <TRichString::NumInkWords( const(void))>
        1ac418:	e1300007 	teq	r0, r7
        1ac41c:	13a0506e 	movne	r5, #110	; 0x6e
        1ac420:	1a00008a 	bne	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac424:	e1a02006 	mov	r2, r6
        1ac428:	e1a00004 	mov	r0, r4
        1ac42c:	e3a01000 	mov	r1, #0	; 0x0
        1ac430:	ebfffe14 	bl	1abc88 <NumInkAndTextRunsInRange__11TRichStringCFUlT1>
        1ac434:	e1300008 	teq	r0, r8
        1ac438:	13a05078 	movne	r5, #120	; 0x78
        1ac43c:	1a000083 	bne	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac440:	e3a08002 	mov	r8, #2	; 0x2
        1ac444:	e0886086 	add	r6, r8, r6, lsl #1
        1ac448:	e5d40024 	ldrb	r0, [r4, #36]	; fField36
        1ac44c:	e3300000 	teq	r0, #0	; 0x0
        1ac450:	1a00000e 	bne	1ac490 <TRichString::Verify( const(void))+0x16c>
        1ac454:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1ac458:	e3300000 	teq	r0, #0	; 0x0
        1ac45c:	1a000004 	bne	1ac474 <TRichString::Verify( const(void))+0x150>
        1ac460:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1ac464:	e1300006 	teq	r0, r6
        1ac468:	13a05082 	movne	r5, #130	; 0x82
        1ac46c:	1a000077 	bne	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac470:	ea00000e 	b	1ac4b0 <TRichString::Verify( const(void))+0x18c>
        1ac474:	e2860003 	add	r0, r6, #3	; 0x3
        1ac478:	e3c00003 	bic	r0, r0, #3	; 0x3
        1ac47c:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1ac480:	e1300001 	teq	r0, r1
        1ac484:	13a0508c 	movne	r5, #140	; 0x8c
        1ac488:	1a000070 	bne	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac48c:	ea000007 	b	1ac4b0 <TRichString::Verify( const(void))+0x18c>
        1ac490:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1ac494:	e1500006 	cmp	r0, r6
        1ac498:	33a05096 	movcc	r5, #150	; 0x96
        1ac49c:	3a00006b 	bcc	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac4a0:	e0401006 	sub	r1, r0, r6
        1ac4a4:	e28f0f0a 	add	r0, pc, #40	; 0x28
        1ac4a8:	eb6914f4 	bl	1bf1880 <$printf>
        1ac4ac:	e5946014 	ldr	r6, [r4, #20]	; fField20
        1ac4b0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1ac4b4:	e3300000 	teq	r0, #0	; 0x0
        1ac4b8:	0a000009 	beq	1ac4e4 <TRichString::Verify( const(void))+0x1c0>
        1ac4bc:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1ac4c0:	ebfffe53 	bl	1abe14 <GetCStringFormat(unsigned short *, unsigned long)>
        1ac4c4:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1ac4c8:	e1300001 	teq	r0, r1
        1ac4cc:	0a00000f 	beq	1ac510 <TRichString::Verify( const(void))+0x1ec>
        1ac4d0:	ea00000c 	b	1ac508 <TRichString::Verify( const(void))+0x1e4>
        1ac4d4:	74657874 	strvcbt	r7, [r5], -#2164
        1ac4d8:	20736c6f 	rsbcss	r6, r3, pc, ror #24
        1ac4dc:	703a2025 	eorvcs	r2, sl, r5, lsr #32
        1ac4e0:	6c640000 	stcvsl	0, cr0, [r4]
        1ac4e4:	e5940000 	ldr	r0, [r4]
        1ac4e8:	e5900000 	ldr	r0, [r0]
        1ac4ec:	e3300002 	teq	r0, #2	; 0x2
        1ac4f0:	0a000006 	beq	1ac510 <TRichString::Verify( const(void))+0x1ec>
        1ac4f4:	e1a00004 	mov	r0, r4
        1ac4f8:	ebfffcec 	bl	1ab8b0 <GetStringFormat(RefVar const &)>
        1ac4fc:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1ac500:	e1300001 	teq	r0, r1
        1ac504:	0a000001 	beq	1ac510 <TRichString::Verify( const(void))+0x1ec>
        1ac508:	e3a0509b 	mov	r5, #155	; 0x9b
        1ac50c:	ea00004f 	b	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac510:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1ac514:	e3300000 	teq	r0, #0	; 0x0
        1ac518:	1a000006 	bne	1ac538 <TRichString::Verify( const(void))+0x214>
        1ac51c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1ac520:	e1300006 	teq	r0, r6
        1ac524:	13a050a0 	movne	r5, #160	; 0xa0
        1ac528:	1a000048 	bne	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac52c:	e3370000 	teq	r7, #0	; 0x0
        1ac530:	13a050aa 	movne	r5, #170	; 0xaa
        1ac534:	ea000045 	b	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac538:	e2860003 	add	r0, r6, #3	; 0x3
        1ac53c:	e3c0a003 	bic	sl, r0, #3	; 0x3
        1ac540:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1ac544:	e081600a 	add	r6, r1, sl
        1ac548:	e3a08002 	mov	r8, #2	; 0x2
        1ac54c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1ac550:	e0880080 	add	r0, r8, r0, lsl #1
        1ac554:	e2800003 	add	r0, r0, #3	; 0x3
        1ac558:	e3c00003 	bic	r0, r0, #3	; 0x3
        1ac55c:	e130000a 	teq	r0, sl
        1ac560:	13a050b4 	movne	r5, #180	; 0xb4
        1ac564:	1a000039 	bne	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac568:	e3a08000 	mov	r8, #0	; 0x0
        1ac56c:	e3a09000 	mov	r9, #0	; 0x0
        1ac570:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1ac574:	e0800006 	add	r0, r0, r6
        1ac578:	e58d0000 	str	r0, [sp]
        1ac57c:	e1b00007 	movs	r0, r7
        1ac580:	e2477001 	sub	r7, r7, #1	; 0x1
        1ac584:	0a000015 	beq	1ac5e0 <TRichString::Verify( const(void))+0x2bc>
        1ac588:	e1a01008 	mov	r1, r8
        1ac58c:	e1a00004 	mov	r0, r4
        1ac590:	eb6814ba 	bl	1bb1880 <TRichString::$GetInkWordNoInfoOffset( const(unsigned long))>
        1ac594:	e08a1009 	add	r1, sl, r9
        1ac598:	e1300001 	teq	r0, r1
        1ac59c:	12885efa 	addne	r5, r8, #4000	; 0xfa0
        1ac5a0:	1a00002a 	bne	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac5a4:	e5960000 	ldr	r0, [r6]
        1ac5a8:	e1a00820 	mov	r0, r0, lsr #16
        1ac5ac:	e2800005 	add	r0, r0, #5	; 0x5
        1ac5b0:	e3c00003 	bic	r0, r0, #3	; 0x3
        1ac5b4:	e0899000 	add	r9, r9, r0
        1ac5b8:	e0866000 	add	r6, r6, r0
        1ac5bc:	e2888001 	add	r8, r8, #1	; 0x1
        1ac5c0:	e59d0000 	ldr	r0, [sp]
        1ac5c4:	e1560000 	cmp	r6, r0
        1ac5c8:	22885fe2 	addcs	r5, r8, #904	; 0x388
        1ac5cc:	22855a01 	addcs	r5, r5, #4096	; 0x1000
        1ac5d0:	2a00001e 	bcs	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac5d4:	e1b00007 	movs	r0, r7
        1ac5d8:	e2477001 	sub	r7, r7, #1	; 0x1
        1ac5dc:	1affffe9 	bne	1ac588 <TRichString::Verify( const(void))+0x264>
        1ac5e0:	e5d40024 	ldrb	r0, [r4, #36]	; fField36
        1ac5e4:	e3300000 	teq	r0, #0	; 0x0
        1ac5e8:	0a000014 	beq	1ac640 <TRichString::Verify( const(void))+0x31c>
        1ac5ec:	e3a08002 	mov	r8, #2	; 0x2
        1ac5f0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1ac5f4:	e0880080 	add	r0, r8, r0, lsl #1
        1ac5f8:	e2800003 	add	r0, r0, #3	; 0x3
        1ac5fc:	e3c00003 	bic	r0, r0, #3	; 0x3
        1ac600:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1ac604:	e0461001 	sub	r1, r6, r1
        1ac608:	e0411000 	sub	r1, r1, r0
        1ac60c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1ac610:	e1510000 	cmp	r1, r0
        1ac614:	83a050c8 	movhi	r5, #200	; 0xc8
        1ac618:	8a00000c 	bhi	1ac650 <TRichString::Verify( const(void))+0x32c>
        1ac61c:	e0401009 	sub	r1, r0, r9
        1ac620:	e28f0f0e 	add	r0, pc, #56	; 0x38
        1ac624:	eb691495 	bl	1bf1880 <$printf>
        1ac628:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1ac62c:	e0460000 	sub	r0, r6, r0
        1ac630:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1ac634:	e0800001 	add	r0, r0, r1
        1ac638:	e2800003 	add	r0, r0, #3	; 0x3
        1ac63c:	e3c06003 	bic	r6, r0, #3	; 0x3
        1ac640:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1ac644:	e5961000 	ldr	r1, [r6]
        1ac648:	e1300241 	teq	r0, r1, asr #4
        1ac64c:	13a050d2 	movne	r5, #210	; 0xd2
        1ac650:	e1a00004 	mov	r0, r4
        1ac654:	eb000013 	bl	1ac6a8 <TRichString::ReleasePtr( const(void))>
        1ac658:	e1a00005 	mov	r0, r5
        1ac65c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1ac660:	696e6b20 	stmvsdb	lr!, {r5, r8, r9, fp, sp, lr}^
        1ac664:	736c6f70 	cmnvc	ip, #448	; 0x1c0
        1ac668:	3a20256c 	bcc	9b5c20 <ROM$$Size+0x295fd4>
        1ac66c:	64000000 	strvs	r0, [r0]
    */
}

/**
 * Symbol: TRichString::GrabPtr( const(void))
 * Address: 001ac670
 */
TRichString::GrabPtr( const(void)) {
    /*
        1ac670:	e1a0c00d 	mov	ip, sp
        1ac674:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ac678:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ac67c:	e1a04000 	mov	r4, r0
        1ac680:	e5900000 	ldr	r0, [r0]
        1ac684:	e5900000 	ldr	r0, [r0]
        1ac688:	e3300002 	teq	r0, #2	; 0x2
        1ac68c:	05b40004 	ldreq	r0, [r4, #4]!	; fField4
        1ac690:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1ac694:	eb686306 	bl	1bc52b4 <$LockRef(long)>
        1ac698:	e5940000 	ldr	r0, [r4]
        1ac69c:	e5900000 	ldr	r0, [r0]
        1ac6a0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1ac6a4:	ea6856ac 	b	1bc215c <$BinaryData(long)>
    */
}

/**
 * Symbol: TRichString::ReleasePtr( const(void))
 * Address: 001ac6a8
 */
TRichString::ReleasePtr( const(void)) {
    /*
        1ac6a8:	e5900000 	ldr	r0, [r0]
        1ac6ac:	e5900000 	ldr	r0, [r0]
        1ac6b0:	e3300002 	teq	r0, #2	; 0x2
        1ac6b4:	1a686f6d 	bne	1bc8470 <$UnlockRef(long)>
        1ac6b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRichString::SetFormatAndLength(unsigned short *, unsigned long)
 * Address: 001ac6bc
 */
TRichString::SetFormatAndLength(unsigned short *, unsigned long) {
    /*
        1ac6bc:	e92d4000 	stmdb	sp!, {lr}
        1ac6c0:	e1a030a2 	mov	r3, r2, lsr #1
        1ac6c4:	e243c001 	sub	ip, r3, #1	; 0x1
        1ac6c8:	e791308c 	ldr	r3, [r1, ip, lsl #1]	; fField1
        1ac6cc:	e1a03823 	mov	r3, r3, lsr #16
        1ac6d0:	e2033003 	and	r3, r3, #3	; 0x3
        1ac6d4:	e3330001 	teq	r3, #1	; 0x1
        1ac6d8:	1a000009 	bne	1ac704 <TRichString::SetFormatAndLength(unsigned short *, unsigned long)+0x48>
        1ac6dc:	e081108c 	add	r1, r1, ip, lsl #1
        1ac6e0:	e241c002 	sub	ip, r1, #2	; 0x2
        1ac6e4:	e4dc1001 	ldrb	r1, [ip], #1	; fField1
        1ac6e8:	e4dce001 	ldrb	lr, [ip], #1	; fField1
        1ac6ec:	e18e1401 	orr	r1, lr, r1, lsl #8
        1ac6f0:	e4dce001 	ldrb	lr, [ip], #1	; fField1
        1ac6f4:	e18e1401 	orr	r1, lr, r1, lsl #8
        1ac6f8:	e5dcc000 	ldrb	ip, [ip]
        1ac6fc:	e18c1401 	orr	r1, ip, r1, lsl #8
        1ac700:	e1a0c221 	mov	ip, r1, lsr #4
        1ac704:	e5803010 	str	r3, [r0, #16]	; fField16
        1ac708:	e2800008 	add	r0, r0, #8	; 0x8
        1ac70c:	e8801004 	stmia	r0, {r2, ip}
        1ac710:	e2400008 	sub	r0, r0, #8	; 0x8
        1ac714:	e3330000 	teq	r3, #0	; 0x0
        1ac718:	03a01000 	moveq	r1, #0	; 0x0
        1ac71c:	05801018 	streq	r1, [r0, #24]	; fField24
        1ac720:	05802014 	streq	r2, [r0, #20]	; fField20
        1ac724:	0a000007 	beq	1ac748 <TRichString::SetFormatAndLength(unsigned short *, unsigned long)+0x8c>
        1ac728:	e3a01002 	mov	r1, #2	; 0x2
        1ac72c:	e081108c 	add	r1, r1, ip, lsl #1
        1ac730:	e2811003 	add	r1, r1, #3	; 0x3
        1ac734:	e3c11003 	bic	r1, r1, #3	; 0x3
        1ac738:	e5801014 	str	r1, [r0, #20]	; fField20
        1ac73c:	e5801018 	str	r1, [r0, #24]	; fField24
        1ac740:	e0421001 	sub	r1, r2, r1
        1ac744:	e2411004 	sub	r1, r1, #4	; 0x4
        1ac748:	e580101c 	str	r1, [r0, #28]	; fField28
        1ac74c:	e5a01020 	str	r1, [r0, #32]!	; fField32
        1ac750:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TRichString::Format( const(void))
 * Address: 001ac754
 */
TRichString::Format( const(void)) {
    /*
        1ac754:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1ac758:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRichString::__ct(void)
 * Address: 001ac9d8
 */
TRichString::TRichString(void) {
    /*
        1ac9d8:	e1a0c00d 	mov	ip, sp
        1ac9dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ac9e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ac9e4:	e1b04000 	movs	r4, r0
        1ac9e8:	1a000003 	bne	1ac9fc <TRichString::__ct(void)+0x24>
        1ac9ec:	e3a00028 	mov	r0, #40	; 0x28
        1ac9f0:	eb688750 	bl	1bce738 <$__nw(unsigned int)>
        1ac9f4:	e1b04000 	movs	r4, r0
        1ac9f8:	0a000006 	beq	1aca18 <TRichString::__ct(void)+0x40>
        1ac9fc:	e3a00002 	mov	r0, #2	; 0x2
        1aca00:	eb6855d1 	bl	1bc214c <$AllocateRefHandle(long)>
        1aca04:	e3a01000 	mov	r1, #0	; 0x0
        1aca08:	e5840000 	str	r0, [r4]
        1aca0c:	e5a01004 	str	r1, [r0, #4]!	; fField4
        1aca10:	e1a00004 	mov	r0, r4
        1aca14:	eb6813a2 	bl	1bb18a4 <TRichString::$SetNoStringData(void)>
        1aca18:	e1a00004 	mov	r0, r4
        1aca1c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::__ct(RefVar const &)
 * Address: 001aca20
 */
TRichString::TRichString(RefVar const &) {
    /*
        1aca20:	e1a0c00d 	mov	ip, sp
        1aca24:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1aca28:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aca2c:	e1b04000 	movs	r4, r0
        1aca30:	e1a05001 	mov	r5, r1
        1aca34:	1a000005 	bne	1aca50 <TRichString::__ct(RefVar const &)+0x30>
        1aca38:	e3a00028 	mov	r0, #40	; 0x28
        1aca3c:	eb68873d 	bl	1bce738 <$__nw(unsigned int)>
        1aca40:	e1b04000 	movs	r4, r0
        1aca44:	1a000001 	bne	1aca50 <TRichString::__ct(RefVar const &)+0x30>
        1aca48:	e1a00004 	mov	r0, r4
        1aca4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1aca50:	e3a00002 	mov	r0, #2	; 0x2
        1aca54:	eb6855bc 	bl	1bc214c <$AllocateRefHandle(long)>
        1aca58:	e3a01000 	mov	r1, #0	; 0x0
        1aca5c:	e5840000 	str	r0, [r4]
        1aca60:	e5a01004 	str	r1, [r0, #4]!	; fField4
        1aca64:	e1a00005 	mov	r0, r5
        1aca68:	eb68620b 	bl	1bc529c <$IsString(RefVar const &)>
        1aca6c:	e3300000 	teq	r0, #0	; 0x0
        1aca70:	01a01005 	moveq	r1, r5
        1aca74:	03a000ee 	moveq	r0, #238	; 0xee
        1aca78:	02400cbe 	subeq	r0, r0, #48640	; 0xbe00
        1aca7c:	0b696e76 	bleq	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        1aca80:	e1a01005 	mov	r1, r5
        1aca84:	e1a00004 	mov	r0, r4
        1aca88:	eb681386 	bl	1bb18a8 <TRichString::$SetStringData(RefVar const &)>
        1aca8c:	eaffffed 	b	1aca48 <TRichString::__ct(RefVar const &)+0x28>
    */
}

/**
 * Symbol: TRichString::__ct(unsigned short *, unsigned long)
 * Address: 001aca90
 */
TRichString::TRichString(unsigned short *, unsigned long) {
    /*
        1aca90:	e1a0c00d 	mov	ip, sp
        1aca94:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1aca98:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aca9c:	e1b04000 	movs	r4, r0
        1acaa0:	e1a05001 	mov	r5, r1
        1acaa4:	e1a06002 	mov	r6, r2
        1acaa8:	1a000003 	bne	1acabc <TRichString::__ct(unsigned short *, unsigned long)+0x2c>
        1acaac:	e3a00028 	mov	r0, #40	; 0x28
        1acab0:	eb688720 	bl	1bce738 <$__nw(unsigned int)>
        1acab4:	e1b04000 	movs	r4, r0
        1acab8:	0a000008 	beq	1acae0 <TRichString::__ct(unsigned short *, unsigned long)+0x50>
        1acabc:	e3a00002 	mov	r0, #2	; 0x2
        1acac0:	eb6855a1 	bl	1bc214c <$AllocateRefHandle(long)>
        1acac4:	e3a01000 	mov	r1, #0	; 0x0
        1acac8:	e5840000 	str	r0, [r4]
        1acacc:	e1a02006 	mov	r2, r6
        1acad0:	e5a01004 	str	r1, [r0, #4]!	; fField4
        1acad4:	e1a01005 	mov	r1, r5
        1acad8:	e1a00004 	mov	r0, r4
        1acadc:	eb68136e 	bl	1bb189c <TRichString::$SetCStringData(unsigned short *, unsigned long)>
        1acae0:	e1a00004 	mov	r0, r4
        1acae4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::__ct(unsigned short *)
 * Address: 001acae8
 */
TRichString::TRichString(unsigned short *) {
    /*
        1acae8:	e1a0c00d 	mov	ip, sp
        1acaec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1acaf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1acaf4:	e1b04000 	movs	r4, r0
        1acaf8:	e1a05001 	mov	r5, r1
        1acafc:	1a000003 	bne	1acb10 <TRichString::__ct(unsigned short *)+0x28>
        1acb00:	e3a00028 	mov	r0, #40	; 0x28
        1acb04:	eb68870b 	bl	1bce738 <$__nw(unsigned int)>
        1acb08:	e1b04000 	movs	r4, r0
        1acb0c:	0a000007 	beq	1acb30 <TRichString::__ct(unsigned short *)+0x48>
        1acb10:	e3a00002 	mov	r0, #2	; 0x2
        1acb14:	eb68558c 	bl	1bc214c <$AllocateRefHandle(long)>
        1acb18:	e3a01000 	mov	r1, #0	; 0x0
        1acb1c:	e5840000 	str	r0, [r4]
        1acb20:	e5a01004 	str	r1, [r0, #4]!	; fField4
        1acb24:	e1a01005 	mov	r1, r5
        1acb28:	e1a00004 	mov	r0, r4
        1acb2c:	ebfff9d9 	bl	1ab298 <TRichString::SetCPlainStringData(unsigned short *)>
        1acb30:	e1a00004 	mov	r0, r4
        1acb34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRichString::SetNoStringData(void)
 * Address: 001acb38
 */
TRichString::SetNoStringData(void) {
    /*
        1acb38:	e1a0c00d 	mov	ip, sp
        1acb3c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1acb40:	e24cb004 	sub	fp, ip, #4	; 0x4
        1acb44:	e3a02002 	mov	r2, #2	; 0x2
        1acb48:	e5901000 	ldr	r1, [r0]
        1acb4c:	e5812000 	str	r2, [r1]
        1acb50:	e3a01000 	mov	r1, #0	; 0x0
        1acb54:	e5801004 	str	r1, [r0, #4]	; fField4
        1acb58:	e5c01024 	strb	r1, [r0, #36]	; fField36
        1acb5c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1acb60:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        1acb64:	e5cd1000 	strb	r1, [sp]
        1acb68:	e1a0100d 	mov	r1, sp
        1acb6c:	e3a02000 	mov	r2, #0	; 0x0
        1acb70:	eb68134a 	bl	1bb18a0 <TRichString::$SetFormatAndLength(unsigned short *, unsigned long)>
        1acb74:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

