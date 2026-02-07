#include "include/PNTKOutTranslator.h"

/**
 * Symbol: Sizeof__17PNTKOutTranslatorSFv
 * Address: 0012a218
 */
void PNTKOutTranslator::Sizeof() {
    /*
        12a218:	e3a00030 	mov	r0, #48	; 0x30
        12a21c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNTKOutTranslator::New(void)
 * Address: 0012a220
 */
PNTKOutTranslator::New(void) {
    /*
        12a220:	e3a01000 	mov	r1, #0	; 0x0
        12a224:	e5801018 	str	r1, [r0, #24]	; fField24
        12a228:	e5801010 	str	r1, [r0, #16]	; fField16
        12a22c:	e5801014 	str	r1, [r0, #20]	; fField20
        12a230:	e580101c 	str	r1, [r0, #28]	; fField28
        12a234:	e5801020 	str	r1, [r0, #32]	; fField32
        12a238:	e5801024 	str	r1, [r0, #36]	; fField36
        12a23c:	e5801028 	str	r1, [r0, #40]	; fField40
        12a240:	e580102c 	str	r1, [r0, #44]	; fField44
        12a244:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNTKOutTranslator::EnterBreakLoop(int)
 * Address: 0012a248
 */
PNTKOutTranslator::EnterBreakLoop(int) {
    /*
        12a248:	e1a0c00d 	mov	ip, sp
        12a24c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12a250:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a254:	e59f0014 	ldr	r0, [pc, #14]	; 12a270 <PNTKOutTranslator::EnterBreakLoop(int)+0x28>
        12a258:	e5900000 	ldr	r0, [r0]
        12a25c:	eb666c0b 	bl	1ac5290 <TNTKNub::$EnterBreakLoop(int)>
        12a260:	e3300000 	teq	r0, #0	; 0x0
        12a264:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        12a268:	1a66786f 	bne	1ac842c <$NTKShutdown(long)>
        12a26c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        12a270:	0c10155c 	ldceq	5, cr1, [r0], -#368
    */
}

/**
 * Symbol: PNTKOutTranslator::ExitBreakLoop(void)
 * Address: 0012a274
 */
PNTKOutTranslator::ExitBreakLoop(void) {
    /*
        12a274:	e1a0c00d 	mov	ip, sp
        12a278:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12a27c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a280:	e59f0014 	ldr	r0, [pc, #14]	; 12a29c <PNTKOutTranslator::ExitBreakLoop(void)+0x28>
        12a284:	e5900000 	ldr	r0, [r0]
        12a288:	eb666c06 	bl	1ac52a8 <TNTKNub::$ExitBreakLoop(void)>
        12a28c:	e3300000 	teq	r0, #0	; 0x0
        12a290:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        12a294:	1a667864 	bne	1ac842c <$NTKShutdown(long)>
        12a298:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        12a29c:	0c10155c 	ldceq	5, cr1, [r0], -#368
    */
}

/**
 * Symbol: PNTKOutTranslator::StackTrace(void *)
 * Address: 0012a2a0
 */
PNTKOutTranslator::StackTrace(void *) {
    /*
        12a2a0:	e1a0c00d 	mov	ip, sp
        12a2a4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12a2a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a2ac:	e1a00001 	mov	r0, r1
        12a2b0:	eb64b216 	bl	1a56b10 <$NTKStackTrace(void *)>
        12a2b4:	e3300000 	teq	r0, #0	; 0x0
        12a2b8:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        12a2bc:	1a66785a 	bne	1ac842c <$NTKShutdown(long)>
        12a2c0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PNTKOutTranslator::ExceptionNotify(Exception *)
 * Address: 0012a2c4
 */
PNTKOutTranslator::ExceptionNotify(Exception *) {
    /*
        12a2c4:	e1a0c00d 	mov	ip, sp
        12a2c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12a2cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a2d0:	e59f0014 	ldr	r0, [pc, #14]	; 12a2ec <PNTKOutTranslator::ExceptionNotify(Exception *)+0x28>
        12a2d4:	e5900000 	ldr	r0, [r0]
        12a2d8:	eb666bef 	bl	1ac529c <TNTKNub::$ExceptionNotify(Exception *)>
        12a2dc:	e3300000 	teq	r0, #0	; 0x0
        12a2e0:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        12a2e4:	1a667850 	bne	1ac842c <$NTKShutdown(long)>
        12a2e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        12a2ec:	0c10155c 	ldceq	5, cr1, [r0], -#368
    */
}

/**
 * Symbol: PNTKOutTranslator::SendHeader(unsigned long, unsigned long)
 * Address: 0012a2f0
 */
PNTKOutTranslator::SendHeader(unsigned long, unsigned long) {
    /*
        12a2f0:	e1a0c00d 	mov	ip, sp
        12a2f4:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        12a2f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a2fc:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12a300:	e280c014 	add	ip, r0, #20	; 0x14
        12a304:	e89c1008 	ldmia	ip, {r3, ip}
        12a308:	e92d0008 	stmdb	sp!, {r3}
        12a30c:	e24b1014 	sub	r1, fp, #20	; 0x14
        12a310:	e5b03010 	ldr	r3, [r0, #16]!	; fField16
        12a314:	e1a0000c 	mov	r0, ip
        12a318:	e3a02004 	mov	r2, #4	; 0x4
        12a31c:	e59cc000 	ldr	ip, [ip]
        12a320:	e1a0e00f 	mov	lr, pc
        12a324:	e28cf060 	add	pc, ip, #96	; 0x60
        12a328:	e28dd004 	add	sp, sp, #4	; 0x4
        12a32c:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12a330:	e280c014 	add	ip, r0, #20	; 0x14
        12a334:	e89c1008 	ldmia	ip, {r3, ip}
        12a338:	e92d0008 	stmdb	sp!, {r3}
        12a33c:	e24b1010 	sub	r1, fp, #16	; 0x10
        12a340:	e5b03010 	ldr	r3, [r0, #16]!	; fField16
        12a344:	e1a0000c 	mov	r0, ip
        12a348:	e3a02004 	mov	r2, #4	; 0x4
        12a34c:	e59cc000 	ldr	ip, [ip]
        12a350:	e1a0e00f 	mov	lr, pc
        12a354:	e28cf060 	add	pc, ip, #96	; 0x60
        12a358:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PNTKOutTranslator::SendCommand(unsigned long, unsigned long)
 * Address: 0012a35c
 */
PNTKOutTranslator::SendCommand(unsigned long, unsigned long) {
    /*
        12a35c:	e1a0c00d 	mov	ip, sp
        12a360:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        12a364:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a368:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12a36c:	e280c014 	add	ip, r0, #20	; 0x14
        12a370:	e89c1008 	ldmia	ip, {r3, ip}
        12a374:	e92d0008 	stmdb	sp!, {r3}
        12a378:	e24b1014 	sub	r1, fp, #20	; 0x14
        12a37c:	e5b03010 	ldr	r3, [r0, #16]!	; fField16
        12a380:	e1a0000c 	mov	r0, ip
        12a384:	e3a02004 	mov	r2, #4	; 0x4
        12a388:	e59cc000 	ldr	ip, [ip]
        12a38c:	e1a0e00f 	mov	lr, pc
        12a390:	e28cf060 	add	pc, ip, #96	; 0x60
        12a394:	e28dd004 	add	sp, sp, #4	; 0x4
        12a398:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12a39c:	e280c014 	add	ip, r0, #20	; 0x14
        12a3a0:	e89c1008 	ldmia	ip, {r3, ip}
        12a3a4:	e92d0008 	stmdb	sp!, {r3}
        12a3a8:	e24b1010 	sub	r1, fp, #16	; 0x10
        12a3ac:	e5b03010 	ldr	r3, [r0, #16]!	; fField16
        12a3b0:	e1a0000c 	mov	r0, ip
        12a3b4:	e3a02004 	mov	r2, #4	; 0x4
        12a3b8:	e59cc000 	ldr	ip, [ip]
        12a3bc:	e1a0e00f 	mov	lr, pc
        12a3c0:	e28cf060 	add	pc, ip, #96	; 0x60
        12a3c4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PNTKOutTranslator::SendData(void *, long)
 * Address: 0012a3c8
 */
PNTKOutTranslator::SendData(void *, long) {
    /*
        12a3c8:	e1a0c00d 	mov	ip, sp
        12a3cc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12a3d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a3d4:	e280c014 	add	ip, r0, #20	; 0x14
        12a3d8:	e89c1008 	ldmia	ip, {r3, ip}
        12a3dc:	e92d0008 	stmdb	sp!, {r3}
        12a3e0:	e5b03010 	ldr	r3, [r0, #16]!	; fField16
        12a3e4:	e1a0000c 	mov	r0, ip
        12a3e8:	e59cc000 	ldr	ip, [ip]
        12a3ec:	e1a0e00f 	mov	lr, pc
        12a3f0:	e28cf060 	add	pc, ip, #96	; 0x60
        12a3f4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PNTKOutTranslator::ConsumeFrameReally(RefVar const &)
 * Address: 0012a3f8
 */
PNTKOutTranslator::ConsumeFrameReally(RefVar const &) {
    /*
        12a3f8:	e1a0c00d 	mov	ip, sp
        12a3fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12a400:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a404:	e1a04000 	mov	r4, r0
        12a408:	e24dd028 	sub	sp, sp, #40	; 0x28
        12a40c:	e5902024 	ldr	r2, [r0, #36]	; fField36
        12a410:	e1a0000d 	mov	r0, sp
        12a414:	e3a03000 	mov	r3, #0	; 0x0
        12a418:	eb6a5b33 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
        12a41c:	e3a00000 	mov	r0, #0	; 0x0
        12a420:	e52d006c 	str	r0, [sp, -#108]!
        12a424:	e28d0008 	add	r0, sp, #8	; 0x8
        12a428:	eb6a2151 	bl	1bb2974 <$setjmp>
        12a42c:	e3300000 	teq	r0, #0	; 0x0
        12a430:	1a000015 	bne	12a48c <PNTKOutTranslator::ConsumeFrameReally(RefVar const &)+0x94>
        12a434:	e1a0000d 	mov	r0, sp
        12a438:	eb6ad70f 	bl	1be007c <$AddExceptionHandler>
        12a43c:	e24dd004 	sub	sp, sp, #4	; 0x4
        12a440:	e28d0070 	add	r0, sp, #112	; 0x70
        12a444:	eb6a6fca 	bl	1bc6374 <TObjectWriter::$Size(void)>
        12a448:	e58d0000 	str	r0, [sp]
        12a44c:	e1a0100d 	mov	r1, sp
        12a450:	e1a00004 	mov	r0, r4
        12a454:	e3a02004 	mov	r2, #4	; 0x4
        12a458:	eb667c0f 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12a45c:	e28d0070 	add	r0, sp, #112	; 0x70
        12a460:	eb6a7805 	bl	1bc847c <TObjectWriter::$Write(void)>
        12a464:	e1a00004 	mov	r0, r4
        12a468:	eb6673c6 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12a46c:	e28dd004 	add	sp, sp, #4	; 0x4
        12a470:	e1a0000d 	mov	r0, sp
        12a474:	eb6adb0f 	bl	1be10b8 <$ExitHandler>
        12a478:	e28dd06c 	add	sp, sp, #108	; 0x6c
        12a47c:	e1a0000d 	mov	r0, sp
        12a480:	e3a01000 	mov	r1, #0	; 0x0
        12a484:	eb6490b7 	bl	1a4e768 <TObjectWriter::$__dt(void)>
        12a488:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        12a48c:	e28d006c 	add	r0, sp, #108	; 0x6c
        12a490:	e3a01000 	mov	r1, #0	; 0x0
        12a494:	eb6490b3 	bl	1a4e768 <TObjectWriter::$__dt(void)>
        12a498:	e1a0000d 	mov	r0, sp
        12a49c:	eb6adf2c 	bl	1be2154 <$NextHandler>
        12a4a0:	eafffff9 	b	12a48c <PNTKOutTranslator::ConsumeFrameReally(RefVar const &)+0x94>
    */
}

/**
 * Symbol: PNTKOutTranslator::ConsumeExceptionFrame(RefVar const &, char *)
 * Address: 0012a4a4
 */
PNTKOutTranslator::ConsumeExceptionFrame(RefVar const &, char *) {
    /*
        12a4a4:	e1a0c00d 	mov	ip, sp
        12a4a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12a4ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a4b0:	e1a04000 	mov	r4, r0
        12a4b4:	e1a06001 	mov	r6, r1
        12a4b8:	e1a05002 	mov	r5, r2
        12a4bc:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        12a4c0:	e1a00002 	mov	r0, r2
        12a4c4:	eb6a2d79 	bl	1bb5ab0 <$strlen>
        12a4c8:	e2800001 	add	r0, r0, #1	; 0x1
        12a4cc:	e58d0028 	str	r0, [sp, #40]	; fField40
        12a4d0:	e1a01006 	mov	r1, r6
        12a4d4:	e1a0000d 	mov	r0, sp
        12a4d8:	e3a03000 	mov	r3, #0	; 0x0
        12a4dc:	e5942024 	ldr	r2, [r4, #36]	; fField36
        12a4e0:	eb6a5b01 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
        12a4e4:	e3a00000 	mov	r0, #0	; 0x0
        12a4e8:	e52d006c 	str	r0, [sp, -#108]!
        12a4ec:	e28d0008 	add	r0, sp, #8	; 0x8
        12a4f0:	eb6a211f 	bl	1bb2974 <$setjmp>
        12a4f4:	e3300000 	teq	r0, #0	; 0x0
        12a4f8:	1a000024 	bne	12a590 <PNTKOutTranslator::ConsumeExceptionFrame(RefVar const &, char *)+0xec>
        12a4fc:	e1a0000d 	mov	r0, sp
        12a500:	eb6ad6dd 	bl	1be007c <$AddExceptionHandler>
        12a504:	e24dd008 	sub	sp, sp, #8	; 0x8
        12a508:	e28d0074 	add	r0, sp, #116	; 0x74
        12a50c:	eb6a6f98 	bl	1bc6374 <TObjectWriter::$Size(void)>
        12a510:	e58d0004 	str	r0, [sp, #4]
        12a514:	e59d109c 	ldr	r1, [sp, #156]
        12a518:	e0810000 	add	r0, r1, r0
        12a51c:	e58d0000 	str	r0, [sp]
        12a520:	e1a0100d 	mov	r1, sp
        12a524:	e1a00004 	mov	r0, r4
        12a528:	e3a02004 	mov	r2, #4	; 0x4
        12a52c:	eb667bda 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12a530:	e28d109c 	add	r1, sp, #156	; 0x9c
        12a534:	e1a00004 	mov	r0, r4
        12a538:	e3a02004 	mov	r2, #4	; 0x4
        12a53c:	eb667bd6 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12a540:	e1a01005 	mov	r1, r5
        12a544:	e1a00004 	mov	r0, r4
        12a548:	e59d209c 	ldr	r2, [sp, #156]
        12a54c:	eb667bd2 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12a550:	e28d1004 	add	r1, sp, #4	; 0x4
        12a554:	e1a00004 	mov	r0, r4
        12a558:	e3a02004 	mov	r2, #4	; 0x4
        12a55c:	eb667bce 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12a560:	e28d0074 	add	r0, sp, #116	; 0x74
        12a564:	eb6a77c4 	bl	1bc847c <TObjectWriter::$Write(void)>
        12a568:	e1a00004 	mov	r0, r4
        12a56c:	eb667385 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12a570:	e28dd008 	add	sp, sp, #8	; 0x8
        12a574:	e1a0000d 	mov	r0, sp
        12a578:	eb6adace 	bl	1be10b8 <$ExitHandler>
        12a57c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        12a580:	e1a0000d 	mov	r0, sp
        12a584:	e3a01000 	mov	r1, #0	; 0x0
        12a588:	eb649076 	bl	1a4e768 <TObjectWriter::$__dt(void)>
        12a58c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        12a590:	e28d006c 	add	r0, sp, #108	; 0x6c
        12a594:	e3a01000 	mov	r1, #0	; 0x0
        12a598:	eb649072 	bl	1a4e768 <TObjectWriter::$__dt(void)>
        12a59c:	e1a0000d 	mov	r0, sp
        12a5a0:	eb6adeeb 	bl	1be2154 <$NextHandler>
        12a5a4:	eafffff9 	b	12a590 <PNTKOutTranslator::ConsumeExceptionFrame(RefVar const &, char *)+0xec>
    */
}

/**
 * Symbol: PNTKOutTranslator::FlushText(void)
 * Address: 0012a5a8
 */
PNTKOutTranslator::FlushText(void) {
    /*
        12a5a8:	e1a0c00d 	mov	ip, sp
        12a5ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12a5b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a5b4:	e1a04000 	mov	r4, r0
        12a5b8:	e5901020 	ldr	r1, [r0, #32]	; fField32
        12a5bc:	e590002c 	ldr	r0, [r0, #44]	; fField44
        12a5c0:	e0415000 	sub	r5, r1, r0
        12a5c4:	e3550000 	cmp	r5, #0	; 0x0
        12a5c8:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
        12a5cc:	e1a01005 	mov	r1, r5
        12a5d0:	e59f0048 	ldr	r0, [pc, #48]	; 12a620 <PNTKOutTranslator::FlushText(void)+0x78>
        12a5d4:	e5900000 	ldr	r0, [r0]
        12a5d8:	eb667bba 	bl	1ac94c8 <TNTKNub::$SendTextHeader(unsigned long)>
        12a5dc:	e3300000 	teq	r0, #0	; 0x0
        12a5e0:	1b667791 	blne	1ac842c <$NTKShutdown(long)>
        12a5e4:	e284c014 	add	ip, r4, #20	; 0x14
        12a5e8:	e89c1008 	ldmia	ip, {r3, ip}
        12a5ec:	e92d0008 	stmdb	sp!, {r3}
        12a5f0:	e1a02005 	mov	r2, r5
        12a5f4:	e1a0000c 	mov	r0, ip
        12a5f8:	e594101c 	ldr	r1, [r4, #28]	; fField28
        12a5fc:	e5943010 	ldr	r3, [r4, #16]	; fField16
        12a600:	e59cc000 	ldr	ip, [ip]
        12a604:	e1a0e00f 	mov	lr, pc
        12a608:	e28cf060 	add	pc, ip, #96	; 0x60
        12a60c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        12a610:	e5840028 	str	r0, [r4, #40]	; fField40
        12a614:	e5940020 	ldr	r0, [r4, #32]	; fField32
        12a618:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        12a61c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        12a620:	0c10155c 	ldceq	5, cr1, [r0], -#368
    */
}

/**
 * Symbol: PNTKOutTranslator::Delete(void)
 * Address: 0012a624
 */
PNTKOutTranslator::Delete(void) {
    /*
        12a624:	e1a0c00d 	mov	ip, sp
        12a628:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12a62c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a630:	e1a04000 	mov	r4, r0
        12a634:	e5900024 	ldr	r0, [r0, #36]	; fField36
        12a638:	e3300000 	teq	r0, #0	; 0x0
        12a63c:	0a000002 	beq	12a64c <PNTKOutTranslator::Delete(void)+0x28>
        12a640:	e3a01001 	mov	r1, #1	; 0x1
        12a644:	e1a0e00f 	mov	lr, pc
        12a648:	e590f000 	ldr	pc, [r0]
        12a64c:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        12a650:	e3300000 	teq	r0, #0	; 0x0
        12a654:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        12a658:	1a6aa0be 	bne	1bd2958 <$free>
        12a65c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PNTKOutTranslator::SetTimeout(unsigned long)
 * Address: 0012a660
 */
PNTKOutTranslator::SetTimeout(unsigned long) {
    /*
        12a660:	e5a01014 	str	r1, [r0, #20]!	; fField20
        12a664:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNTKOutTranslator::Init(void *)
 * Address: 0012a668
 */
PNTKOutTranslator::Init(void *) {
    /*
        12a668:	e1a0c00d 	mov	ip, sp
        12a66c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12a670:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a674:	e1a04000 	mov	r4, r0
        12a678:	e3a05000 	mov	r5, #0	; 0x0
        12a67c:	e3310000 	teq	r1, #0	; 0x0
        12a680:	0a00002b 	beq	12a734 <PNTKOutTranslator::Init(void *)+0xcc>
        12a684:	e1a00001 	mov	r0, r1
        12a688:	e5911004 	ldr	r1, [r1, #4]
        12a68c:	e5841010 	str	r1, [r4, #16]	; fField16
        12a690:	e5901008 	ldr	r1, [r0, #8]	; fField8
        12a694:	e5841014 	str	r1, [r4, #20]	; fField20
        12a698:	e5901000 	ldr	r1, [r0]
        12a69c:	e5841018 	str	r1, [r4, #24]	; fField24
        12a6a0:	e590000c 	ldr	r0, [r0, #12]
        12a6a4:	e5840020 	str	r0, [r4, #32]	; fField32
        12a6a8:	eb6ab12e 	bl	1bd6b68 <$malloc>
        12a6ac:	e584001c 	str	r0, [r4, #28]	; fField28
        12a6b0:	e3300000 	teq	r0, #0	; 0x0
        12a6b4:	0a000007 	beq	12a6d8 <PNTKOutTranslator::Init(void *)+0x70>
        12a6b8:	e59f1014 	ldr	r1, [pc, #14]	; 12a6d4 <PNTKOutTranslator::Init(void *)+0x6c>
        12a6bc:	eb6ad649 	bl	1bdffe8 <$SetPtrName>
        12a6c0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        12a6c4:	e5840028 	str	r0, [r4, #40]	; fField40
        12a6c8:	e5940020 	ldr	r0, [r4, #32]	; fField32
        12a6cc:	e584002c 	str	r0, [r4, #44]	; fField44
        12a6d0:	ea000003 	b	12a6e4 <PNTKOutTranslator::Init(void *)+0x7c>
        12a6d4:	72657062 	rsbvc	r7, r5, #98	; 0x62
        12a6d8:	eb6ade90 	bl	1be2120 <$MemError>
        12a6dc:	e1b05000 	movs	r5, r0
        12a6e0:	1a000014 	bne	12a738 <PNTKOutTranslator::Init(void *)+0xd0>
        12a6e4:	e3a00000 	mov	r0, #0	; 0x0
        12a6e8:	eb6a1852 	bl	1bb0838 <TTaskSafeRingPipe::$__ct(void)>
        12a6ec:	e5840024 	str	r0, [r4, #36]	; fField36
        12a6f0:	e3300000 	teq	r0, #0	; 0x0
        12a6f4:	0a00000b 	beq	12a728 <PNTKOutTranslator::Init(void *)+0xc0>
        12a6f8:	e59f1024 	ldr	r1, [pc, #24]	; 12a724 <PNTKOutTranslator::Init(void *)+0xbc>	; fField24
        12a6fc:	eb6ad639 	bl	1bdffe8 <$SetPtrName>
        12a700:	e5943014 	ldr	r3, [r4, #20]	; fField20
        12a704:	e92d0008 	stmdb	sp!, {r3}
        12a708:	e3a02000 	mov	r2, #0	; 0x0
        12a70c:	e5b43010 	ldr	r3, [r4, #16]!	; fField16
        12a710:	e5941008 	ldr	r1, [r4, #8]	; fField8
        12a714:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12a718:	eb6a0bf1 	bl	1bad6e4 <TTaskSafeRingPipe::$Init(TTaskSafeRingBuffer *, unsigned char, unsigned long, unsigned long)>
        12a71c:	e28dd004 	add	sp, sp, #4	; 0x4
        12a720:	ea000004 	b	12a738 <PNTKOutTranslator::Init(void *)+0xd0>
        12a724:	6e746b50 	mrcvs	11, 3, r6, cr4, cr0, {2}
        12a728:	eb6ade7c 	bl	1be2120 <$MemError>
        12a72c:	e1a05000 	mov	r5, r0
        12a730:	ea000000 	b	12a738 <PNTKOutTranslator::Init(void *)+0xd0>
        12a734:	e3e05000 	mvn	r5, #0	; 0x0
        12a738:	e1a00005 	mov	r0, r5
        12a73c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PNTKOutTranslator::Idle(void)
 * Address: 0012a740
 */
PNTKOutTranslator::Idle(void) {
    /*
        12a740:	e3a009e1 	mov	r0, #3686400	; 0x384000
        12a744:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNTKOutTranslator::ConsumeFrame(RefVar const &, int, int)
 * Address: 0012a748
 */
PNTKOutTranslator::ConsumeFrame(RefVar const &, int, int) {
    /*
        12a748:	e1a0c00d 	mov	ip, sp
        12a74c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12a750:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a754:	e1a04000 	mov	r4, r0
        12a758:	e1a00001 	mov	r0, r1
        12a75c:	e1a01003 	mov	r1, r3
        12a760:	eb645e78 	bl	1a42148 <$PrintObjectAux__FRC6RefVarlT2>
        12a764:	e1a00004 	mov	r0, r4
        12a768:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        12a76c:	ea667304 	b	1ac7384 <PNTKOutTranslator::$FlushText(void)>
    */
}

/**
 * Symbol: PNTKOutTranslator::Print(char const *,...)
 * Address: 0012a770
 */
PNTKOutTranslator::Print(char const *,...) {
    /*
        12a770:	e1a0c00d 	mov	ip, sp
        12a774:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12a778:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12a77c:	e24cb014 	sub	fp, ip, #20	; 0x14
        12a780:	e28b000c 	add	r0, fp, #12	; 0xc
        12a784:	e52d0104 	str	r0, [sp, -#260]!
        12a788:	e1a0200d 	mov	r2, sp
        12a78c:	e28d0004 	add	r0, sp, #4	; 0x4
        12a790:	e59b1008 	ldr	r1, [fp, #8]	; fField8
        12a794:	eb6a2cd1 	bl	1bb5ae0 <$vsprintf>
        12a798:	e1a04000 	mov	r4, r0
        12a79c:	e3e000ff 	mvn	r0, #255	; 0xff
        12a7a0:	e58d0000 	str	r0, [sp]
        12a7a4:	e59f202c 	ldr	r2, [pc, #2c]	; 12a7d8 <PNTKOutTranslator::Print(char const *,...)+0x68>
        12a7a8:	e3a010ad 	mov	r1, #173	; 0xad
        12a7ac:	e2411cbd 	sub	r1, r1, #48384	; 0xbd00
        12a7b0:	e3540c01 	cmp	r4, #256	; 0x100
        12a7b4:	ca000003 	bgt	12a7c8 <PNTKOutTranslator::Print(char const *,...)+0x58>
        12a7b8:	e59b0004 	ldr	r0, [fp, #4]
        12a7bc:	e5903020 	ldr	r3, [r0, #32]	; fField32
        12a7c0:	e1530004 	cmp	r3, r4
        12a7c4:	aa000004 	bge	12a7dc <PNTKOutTranslator::Print(char const *,...)+0x6c>
        12a7c8:	e5920000 	ldr	r0, [r2]
        12a7cc:	e3a02000 	mov	r2, #0	; 0x0
        12a7d0:	eb6ae271 	bl	1be319c <$Throw>
        12a7d4:	ea00001f 	b	12a858 <PNTKOutTranslator::Print(char const *,...)+0xe8>
        12a7d8:	00371328 	eoreqs	r1, r7, r8, lsr #6
        12a7dc:	e3540000 	cmp	r4, #0	; 0x0
        12a7e0:	da00001c 	ble	12a858 <PNTKOutTranslator::Print(char const *,...)+0xe8>
        12a7e4:	e590102c 	ldr	r1, [r0, #44]	; fField44
        12a7e8:	e1510004 	cmp	r1, r4
        12a7ec:	bb6672e4 	bllt	1ac7384 <PNTKOutTranslator::$FlushText(void)>
        12a7f0:	e59b0004 	ldr	r0, [fp, #4]
        12a7f4:	e1a02004 	mov	r2, r4
        12a7f8:	e5b01028 	ldr	r1, [r0, #40]!	; fField40
        12a7fc:	e28d0004 	add	r0, sp, #4	; 0x4
        12a800:	eb6ad1d3 	bl	1bdef54 <$BlockMove>
        12a804:	e59b0004 	ldr	r0, [fp, #4]
        12a808:	e5901028 	ldr	r1, [r0, #40]	; fField40
        12a80c:	e0811004 	add	r1, r1, r4
        12a810:	e5a01028 	str	r1, [r0, #40]!	; fField40
        12a814:	e59b0004 	ldr	r0, [fp, #4]
        12a818:	e590102c 	ldr	r1, [r0, #44]	; fField44
        12a81c:	e0411004 	sub	r1, r1, r4
        12a820:	e5a0102c 	str	r1, [r0, #44]!	; fField44
        12a824:	e28d1004 	add	r1, sp, #4	; 0x4
        12a828:	e3a00000 	mov	r0, #0	; 0x0
        12a82c:	e3540000 	cmp	r4, #0	; 0x0
        12a830:	da000008 	ble	12a858 <PNTKOutTranslator::Print(char const *,...)+0xe8>
        12a834:	e4d12001 	ldrb	r2, [r1], #1
        12a838:	e332000d 	teq	r2, #13	; 0xd
        12a83c:	1a000002 	bne	12a84c <PNTKOutTranslator::Print(char const *,...)+0xdc>
        12a840:	e59b0004 	ldr	r0, [fp, #4]
        12a844:	eb6672ce 	bl	1ac7384 <PNTKOutTranslator::$FlushText(void)>
        12a848:	ea000002 	b	12a858 <PNTKOutTranslator::Print(char const *,...)+0xe8>
        12a84c:	e2800001 	add	r0, r0, #1	; 0x1
        12a850:	e1500004 	cmp	r0, r4
        12a854:	bafffff6 	blt	12a834 <PNTKOutTranslator::Print(char const *,...)+0xc4>
        12a858:	e1a00004 	mov	r0, r4
        12a85c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PNTKOutTranslator::Putc(int)
 * Address: 0012a860
 */
PNTKOutTranslator::Putc(int) {
    /*
        12a860:	e1a0c00d 	mov	ip, sp
        12a864:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12a868:	e24cb004 	sub	fp, ip, #4	; 0x4
        12a86c:	e1a04001 	mov	r4, r1
        12a870:	e1a02001 	mov	r2, r1
        12a874:	e28f1f02 	add	r1, pc, #8	; 0x8
        12a878:	eb66e67b 	bl	1ae426c <PNTKOutTranslator::$Print(char const *,...)>
        12a87c:	e1a00004 	mov	r0, r4
        12a880:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        12a884:	25630000 	strcsb	r0, [r3]!
    */
}

/**
 * Symbol: PNTKOutTranslator::Prompt(int)
 * Address: 0012a888
 */
PNTKOutTranslator::Prompt(int) {
    /*
        12a888:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNTKOutTranslator::Flush(void)
 * Address: 0012a88c
 */
PNTKOutTranslator::Flush(void) {
    /*
        12a88c:	ea6672bc 	b	1ac7384 <PNTKOutTranslator::$FlushText(void)>
    */
}

/**
 * Symbol: ClassInfo__17PNTKOutTranslatorSFv
 * Address: 0038594c
 */
void PNTKOutTranslator::ClassInfo() {
    /*
        38594c:	e24f0044 	sub	r0, pc, #68	; 0x44
        385950:	e1a0f00e 	mov	pc, lr
        385954:	e3a00000 	mov	r0, #0	; 0x0
        385958:	e1a0f00e 	mov	pc, lr
        38595c:	504e544b 	subpl	r5, lr, fp, asr #8
        385960:	4f757454 	swimi	0x00757454
        385964:	72616e73 	rsbvc	r6, r1, #1840	; 0x730
        385968:	6c61746f 	stcvsl	4, cr7, [r1], -#444
        38596c:	7200504f 	andvc	r5, r0, #79	; 0x4f
        385970:	75745472 	ldrvcb	r5, [r4, -#1138]!
        385974:	616e736c 	cmnvs	lr, ip, ror #6
        385978:	61746f72 	cmnvs	r4, r2, ror pc
        385984:	eafffff0 	b	38594c <ClassInfo__17PNTKOutTranslatorSFv>
        385988:	ea5d0aa9 	b	1ac8434 <PNTKOutTranslator::$New(void)>
        38598c:	ea5cfa37 	b	1ac4270 <PNTKOutTranslator::$Delete(void)>
        385990:	ea5d0692 	b	1ac73e0 <PNTKOutTranslator::$Init(void *)>
        385994:	ea5d068a 	b	1ac73c4 <PNTKOutTranslator::$Idle(void)>
        385998:	ea5cfa27 	b	1ac423c <PNTKOutTranslator::$ConsumeFrame(RefVar const &, int, int)>
        38599c:	ea5d0679 	b	1ac7388 <PNTKOutTranslator::$Flush(void)>
        3859a0:	ea5d0ab0 	b	1ac8468 <PNTKOutTranslator::$Prompt(int)>
        3859a4:	ea5d7a30 	b	1ae426c <PNTKOutTranslator::$Print(char const *,...)>
        3859a8:	ea5d0ab0 	b	1ac8470 <PNTKOutTranslator::$Putc(int)>
        3859ac:	ea5cfe35 	b	1ac5288 <PNTKOutTranslator::$EnterBreakLoop(int)>
        3859b0:	ea5cfe3a 	b	1ac52a0 <PNTKOutTranslator::$ExitBreakLoop(void)>
        3859b4:	ea5d12d1 	b	1aca500 <PNTKOutTranslator::$StackTrace(void *)>
        3859b8:	ea5cfe35 	b	1ac5294 <PNTKOutTranslator::$ExceptionNotify(Exception *)>
        3859bc:	00000000 	andeq	r0, r0, r0
        3859c0:	00000048 	andeq	r0, r0, r8, asr #32
        3859c4:	00000058 	andeq	r0, r0, r8, asr r0
        3859c8:	00000062 	andeq	r0, r0, r2, rrx
        3859cc:	00000060 	andeq	r0, r0, r0, rrx
        3859d0:	0000007c 	andeq	r0, r0, ip, ror r0
        3859d4:	ea5d0ec6 	b	1ac94f4 <$Sizeof__19PSerialInTranslatorSFv>
        3859e0:	ea5d0a94 	b	1ac8438 <PSerialInTranslator::$New(void)>
        3859e4:	ea5cfa22 	b	1ac4274 <PSerialInTranslator::$Delete(void)>
        3859f4:	ea000001 	b	385a00 <ClassInfo__19PSerialInTranslatorSFv+0x8>
    */
}

