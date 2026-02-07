#include "include/TObjRef.h"

/**
 * Symbol: TObjRef::operator=(TObjRef const &)
 * Address: 001482fc
 */
TObjRef::operator=(TObjRef const &) {
    /*
        1482fc:	e8911008 	ldmia	r1, {r3, ip}
        148300:	e8801008 	stmia	r0, {r3, ip}
        148304:	e5912008 	ldr	r2, [r1, #8]	; fField8
        148308:	e5802008 	str	r2, [r0, #8]	; fField8
        14830c:	e591100c 	ldr	r1, [r1, #12]	; fField12
        148310:	e580100c 	str	r1, [r0, #12]	; fField12
        148314:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TObjRef::Set(unsigned long, unsigned long)
 * Address: 00148318
 */
TObjRef::Set(unsigned long, unsigned long) {
    /*
        148318:	e1a0c00d 	mov	ip, sp
        14831c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        148320:	e24cb004 	sub	fp, ip, #4	; 0x4
        148324:	e1a04000 	mov	r4, r0
        148328:	e5801008 	str	r1, [r0, #8]	; fField8
        14832c:	e1a00002 	mov	r0, r2
        148330:	e3710001 	cmn	r1, #1	; 0x1
        148334:	e584200c 	str	r2, [r4, #12]	; fField12
        148338:	1a000010 	bne	148380 <TObjRef::Set(unsigned long, unsigned long)+0x68>
        14833c:	e3720001 	cmn	r2, #1	; 0x1
        148340:	0a00000e 	beq	148380 <TObjRef::Set(unsigned long, unsigned long)+0x68>
        148344:	e24dd004 	sub	sp, sp, #4	; 0x4
        148348:	e1a01000 	mov	r1, r0
        14834c:	e5945010 	ldr	r5, [r4, #16]	; fField16
        148350:	e1a00005 	mov	r0, r5
        148354:	eb67003c 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        148358:	e1a01000 	mov	r1, r0
        14835c:	e1a0200d 	mov	r2, sp
        148360:	e1a00005 	mov	r0, r5
        148364:	e3a03004 	mov	r3, #4	; 0x4
        148368:	eb66ad92 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
        14836c:	e59d0000 	ldr	r0, [sp]
        148370:	e1a00420 	mov	r0, r0, lsr #8
        148374:	e1a00100 	mov	r0, r0, lsl #2
        148378:	e5840008 	str	r0, [r4, #8]	; fField8
        14837c:	e28dd004 	add	sp, sp, #4	; 0x4
        148380:	e5940010 	ldr	r0, [r4, #16]	; fField16
        148384:	e5941008 	ldr	r1, [r4, #8]	; fField8
        148388:	eb67002f 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        14838c:	e1a01000 	mov	r1, r0
        148390:	e5940010 	ldr	r0, [r4, #16]	; fField16
        148394:	e1a02004 	mov	r2, r4
        148398:	e3a03008 	mov	r3, #8	; 0x8
        14839c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1483a0:	ea66ad84 	b	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
    */
}

/**
 * Symbol: TObjRef::FindSuperceeded(TObjRef &)
 * Address: 001483a4
 */
TObjRef::FindSuperceeded(TObjRef &) {
    /*
        1483a4:	e1a03001 	mov	r3, r1
        1483a8:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1483ac:	e1a0c001 	mov	ip, r1
        1483b0:	e5d1103d 	ldrb	r1, [r1, #61]
        1483b4:	e3310000 	teq	r1, #0	; 0x0
        1483b8:	03a0200c 	moveq	r2, #12	; 0xc
        1483bc:	13a02005 	movne	r2, #5	; 0x5
        1483c0:	e5900000 	ldr	r0, [r0]
        1483c4:	e3c0120f 	bic	r1, r0, #-268435456	; 0xf0000000
        1483c8:	e1a0000c 	mov	r0, ip
        1483cc:	ea66dae7 	b	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
    */
}

/**
 * Symbol: TObjRef::Delete(void)
 * Address: 001483d0
 */
TObjRef::Delete(void) {
    /*
        1483d0:	e1a0c00d 	mov	ip, sp
        1483d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1483d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1483dc:	e1a04000 	mov	r4, r0
        1483e0:	eb66c638 	bl	1af9cc8 <TObjRef::$GetDirEntOffset(void)>
        1483e4:	e1a01000 	mov	r1, r0
        1483e8:	e3700001 	cmn	r0, #1	; 0x1
        1483ec:	0a000005 	beq	148408 <TObjRef::Delete(void)+0x38>
        1483f0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1483f4:	e590202c 	ldr	r2, [r0, #44]
        1483f8:	e5900058 	ldr	r0, [r0, #88]
        1483fc:	e1a00031 	mov	r0, r1, lsr r0
        148400:	e7920100 	ldr	r0, [r2, r0, lsl #2]
        148404:	eb670848 	bl	1b0a52c <TFlashBlock::$ZapDirEnt(unsigned long)>
        148408:	e5940010 	ldr	r0, [r4, #16]	; fField16
        14840c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        148410:	e590302c 	ldr	r3, [r0, #44]
        148414:	e5900058 	ldr	r0, [r0, #88]
        148418:	e1a00031 	mov	r0, r1, lsr r0
        14841c:	e7930100 	ldr	r0, [r3, r0, lsl #2]
        148420:	eb670843 	bl	1b0a534 <TFlashBlock::$ZapObject(unsigned long)>
        148424:	e5940000 	ldr	r0, [r4]
        148428:	e380040f 	orr	r0, r0, #251658240	; 0xf000000
        14842c:	e38008ff 	orr	r0, r0, #16711680	; 0xff0000
        148430:	e3800cff 	orr	r0, r0, #65280	; 0xff00
        148434:	e38000ff 	orr	r0, r0, #255	; 0xff
        148438:	e5840000 	str	r0, [r4]
        14843c:	e3a00000 	mov	r0, #0	; 0x0
        148440:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjRef::Write(void *, unsigned long, unsigned long)
 * Address: 00148444
 */
TObjRef::Write(void *, unsigned long, unsigned long) {
    /*
        148444:	e1a0c00d 	mov	ip, sp
        148448:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14844c:	e24cb004 	sub	fp, ip, #4	; 0x4
        148450:	e1a04000 	mov	r4, r0
        148454:	e1a06001 	mov	r6, r1
        148458:	e1a05003 	mov	r5, r3
        14845c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        148460:	e0800002 	add	r0, r0, r2
        148464:	e2801008 	add	r1, r0, #8	; 0x8
        148468:	e5940010 	ldr	r0, [r4, #16]	; fField16
        14846c:	eb66fff6 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        148470:	e1a01000 	mov	r1, r0
        148474:	e1a03005 	mov	r3, r5
        148478:	e1a02006 	mov	r2, r6
        14847c:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        148480:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        148484:	ea66ad4d 	b	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
    */
}

/**
 * Symbol: TObjRef::Read(void *, unsigned long, unsigned long)
 * Address: 00148488
 */
TObjRef::Read(void *, unsigned long, unsigned long) {
    /*
        148488:	e1a0c00d 	mov	ip, sp
        14848c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        148490:	e24cb004 	sub	fp, ip, #4	; 0x4
        148494:	e1a04000 	mov	r4, r0
        148498:	e1a06001 	mov	r6, r1
        14849c:	e1a05003 	mov	r5, r3
        1484a0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1484a4:	e0800002 	add	r0, r0, r2
        1484a8:	e2801008 	add	r1, r0, #8	; 0x8
        1484ac:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1484b0:	eb66ffe5 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1484b4:	e1a01000 	mov	r1, r0
        1484b8:	e1a03005 	mov	r3, r5
        1484bc:	e1a02006 	mov	r2, r6
        1484c0:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        1484c4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1484c8:	ea66ad3a 	b	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
    */
}

/**
 * Symbol: TObjRef::SetSeparateTranny(void)
 * Address: 001484cc
 */
TObjRef::SetSeparateTranny(void) {
    /*
        1484cc:	e1a0c00d 	mov	ip, sp
        1484d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1484d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1484d8:	e1a04000 	mov	r4, r0
        1484dc:	e3a05000 	mov	r5, #0	; 0x0
        1484e0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1484e4:	e1a01e80 	mov	r1, r0, lsl #29
        1484e8:	e1b01f21 	movs	r1, r1, lsr #30
        1484ec:	0a00000b 	beq	148520 <TObjRef::SetSeparateTranny(void)+0x54>
        1484f0:	e3310002 	teq	r1, #2	; 0x2
        1484f4:	0a000007 	beq	148518 <TObjRef::SetSeparateTranny(void)+0x4c>
        1484f8:	e3310003 	teq	r1, #3	; 0x3
        1484fc:	1a000005 	bne	148518 <TObjRef::SetSeparateTranny(void)+0x4c>
        148500:	e3c00006 	bic	r0, r0, #6	; 0x6
        148504:	e3800004 	orr	r0, r0, #4	; 0x4
        148508:	e5840004 	str	r0, [r4, #4]	; fField4
        14850c:	e1a00004 	mov	r0, r4
        148510:	eb000036 	bl	1485f0 <TObjRef::ReWriteObjHeader(void)>
        148514:	e1a05000 	mov	r5, r0
        148518:	e1a00005 	mov	r0, r5
        14851c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        148520:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        148524:	e5940010 	ldr	r0, [r4, #16]	; fField16
        148528:	e590104c 	ldr	r1, [r0, #76]
        14852c:	e59d2000 	ldr	r2, [sp]
        148530:	e202220f 	and	r2, r2, #-268435456	; 0xf0000000
        148534:	e3c1120f 	bic	r1, r1, #-268435456	; 0xf0000000
        148538:	e1821001 	orr	r1, r2, r1
        14853c:	e58d0010 	str	r0, [sp, #16]	; fField16
        148540:	e58d1000 	str	r1, [sp]
        148544:	e1a0100d 	mov	r1, sp
        148548:	eb66a4dc 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
        14854c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        148550:	e1a00800 	mov	r0, r0, lsl #16
        148554:	e5941010 	ldr	r1, [r4, #16]	; fField16
        148558:	e591104c 	ldr	r1, [r1, #76]
        14855c:	e0210c20 	eor	r0, r1, r0, lsr #24
        148560:	e20010ff 	and	r1, r0, #255	; 0xff
        148564:	e59f0040 	ldr	r0, [pc, #40]	; 1485ac <TObjRef::SetSeparateTranny(void)+0xe0>
        148568:	e7d01001 	ldrb	r1, [r0, r1]
        14856c:	e1a0200d 	mov	r2, sp
        148570:	e1a00004 	mov	r0, r4
        148574:	e3a03001 	mov	r3, #1	; 0x1
        148578:	eb672d12 	bl	1b139c8 <TObjRef::$Clone(int, TObjRef &, unsigned char)>
        14857c:	e1b05000 	movs	r5, r0
        148580:	1a000004 	bne	148598 <TObjRef::SetSeparateTranny(void)+0xcc>
        148584:	e1a00004 	mov	r0, r4
        148588:	eb66b963 	bl	1af6b1c <TObjRef::$Delete(void)>
        14858c:	e1a0100d 	mov	r1, sp
        148590:	e1a00004 	mov	r0, r4
        148594:	ebffff58 	bl	1482fc <TObjRef::operator=(TObjRef const &)>
        148598:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        14859c:	e1a0100d 	mov	r1, sp
        1485a0:	eb66eb09 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
        1485a4:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1485a8:	eaffffda 	b	148518 <TObjRef::SetSeparateTranny(void)+0x4c>
        1485ac:	0037143c 	eoreqs	r1, r7, ip, lsr r4
    */
}

/**
 * Symbol: TObjRef::ClearSeparateTranny(void)
 * Address: 001485b0
 */
TObjRef::ClearSeparateTranny(void) {
    /*
        1485b0:	e1a0c00d 	mov	ip, sp
        1485b4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1485b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1485bc:	e3a01000 	mov	r1, #0	; 0x0
        1485c0:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1485c4:	e1a03e82 	mov	r3, r2, lsl #29
        1485c8:	e1b03f23 	movs	r3, r3, lsr #30
        1485cc:	0a000005 	beq	1485e8 <TObjRef::ClearSeparateTranny(void)+0x38>
        1485d0:	e3330002 	teq	r3, #2	; 0x2
        1485d4:	1a000003 	bne	1485e8 <TObjRef::ClearSeparateTranny(void)+0x38>
        1485d8:	e3c21006 	bic	r1, r2, #6	; 0x6
        1485dc:	e5801004 	str	r1, [r0, #4]	; fField4
        1485e0:	eb000002 	bl	1485f0 <TObjRef::ReWriteObjHeader(void)>
        1485e4:	e1a01000 	mov	r1, r0
        1485e8:	e1a00001 	mov	r0, r1
        1485ec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TObjRef::ReWriteObjHeader(void)
 * Address: 001485f0
 */
TObjRef::ReWriteObjHeader(void) {
    /*
        1485f0:	e1a0c00d 	mov	ip, sp
        1485f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1485f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1485fc:	e1a04000 	mov	r4, r0
        148600:	e5901008 	ldr	r1, [r0, #8]	; fField8
        148604:	e5900010 	ldr	r0, [r0, #16]	; fField16
        148608:	eb66ff8f 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        14860c:	e1a01000 	mov	r1, r0
        148610:	e5940010 	ldr	r0, [r4, #16]	; fField16
        148614:	e1a02004 	mov	r2, r4
        148618:	e3a03008 	mov	r3, #8	; 0x8
        14861c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        148620:	ea66ace6 	b	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
    */
}

/**
 * Symbol: TObjRef::GetDirEntOffset(void)
 * Address: 00148624
 */
TObjRef::GetDirEntOffset(void) {
    /*
        148624:	e1a0c00d 	mov	ip, sp
        148628:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14862c:	e24cb004 	sub	fp, ip, #4	; 0x4
        148630:	e1a04000 	mov	r4, r0
        148634:	e590000c 	ldr	r0, [r0, #12]	; fField12
        148638:	e3700001 	cmn	r0, #1	; 0x1
        14863c:	1a00001d 	bne	1486b8 <TObjRef::GetDirEntOffset(void)+0x94>
        148640:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        148644:	e5940010 	ldr	r0, [r4, #16]	; fField16
        148648:	e590104c 	ldr	r1, [r0, #76]
        14864c:	e59d2000 	ldr	r2, [sp]
        148650:	e202220f 	and	r2, r2, #-268435456	; 0xf0000000
        148654:	e3c1120f 	bic	r1, r1, #-268435456	; 0xf0000000
        148658:	e1821001 	orr	r1, r2, r1
        14865c:	e58d0010 	str	r0, [sp, #16]	; fField16
        148660:	e58d1000 	str	r1, [sp]
        148664:	e1a0100d 	mov	r1, sp
        148668:	eb66a494 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
        14866c:	e5942004 	ldr	r2, [r4, #4]	; fField4
        148670:	e1a02802 	mov	r2, r2, lsl #16
        148674:	e5940010 	ldr	r0, [r4, #16]	; fField16
        148678:	e590104c 	ldr	r1, [r0, #76]
        14867c:	e0211c22 	eor	r1, r1, r2, lsr #24
        148680:	e20120ff 	and	r2, r1, #255	; 0xff
        148684:	e59f1034 	ldr	r1, [pc, #34]	; 1486c0 <TObjRef::GetDirEntOffset(void)+0x9c>
        148688:	e7d12002 	ldrb	r2, [r1, r2]
        14868c:	e5941000 	ldr	r1, [r4]
        148690:	e3c1120f 	bic	r1, r1, #-268435456	; 0xf0000000
        148694:	e1a0300d 	mov	r3, sp
        148698:	eb66da34 	bl	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
        14869c:	e3300000 	teq	r0, #0	; 0x0
        1486a0:	059d000c 	ldreq	r0, [sp, #12]	; fField12
        1486a4:	0584000c 	streq	r0, [r4, #12]	; fField12
        1486a8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        1486ac:	e1a0100d 	mov	r1, sp
        1486b0:	eb66eac5 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
        1486b4:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1486b8:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        1486bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1486c0:	0037143c 	eoreqs	r1, r7, ip, lsr r4
    */
}

/**
 * Symbol: TObjRef::CloneEmpty(int, unsigned long, TObjRef &, unsigned char)
 * Address: 001486c4
 */
TObjRef::CloneEmpty(int, unsigned long, TObjRef &, unsigned char) {
    /*
        1486c4:	e1a0c00d 	mov	ip, sp
        1486c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1486cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1486d0:	e1a0e001 	mov	lr, r1
        1486d4:	e1a0c002 	mov	ip, r2
        1486d8:	e1a01003 	mov	r1, r3
        1486dc:	e59b2004 	ldr	r2, [fp, #4]	; fField4
        1486e0:	e20220ff 	and	r2, r2, #255	; 0xff
        1486e4:	e3a03000 	mov	r3, #0	; 0x0
        1486e8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1486ec:	e5901000 	ldr	r1, [r0]
        1486f0:	e3c1120f 	bic	r1, r1, #-268435456	; 0xf0000000
        1486f4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1486f8:	e1a0300c 	mov	r3, ip
        1486fc:	e1a0200e 	mov	r2, lr
        148700:	eb67079a 	bl	1b0a570 <TFlashStore::$AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)>
        148704:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TObjRef::CloneEmpty(int, TObjRef &, unsigned char)
 * Address: 00148708
 */
TObjRef::CloneEmpty(int, TObjRef &, unsigned char) {
    /*
        148708:	e1a0c00d 	mov	ip, sp
        14870c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        148710:	e24cb004 	sub	fp, ip, #4	; 0x4
        148714:	e1a0c002 	mov	ip, r2
        148718:	e20330ff 	and	r3, r3, #255	; 0xff
        14871c:	e92d0008 	stmdb	sp!, {r3}
        148720:	e5902004 	ldr	r2, [r0, #4]	; fField4
        148724:	e1a02822 	mov	r2, r2, lsr #16
        148728:	e1a0300c 	mov	r3, ip
        14872c:	ebffffe4 	bl	1486c4 <TObjRef::CloneEmpty(int, unsigned long, TObjRef &, unsigned char)>
        148730:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TObjRef::Clone(int, TObjRef &, unsigned char)
 * Address: 00148734
 */
TObjRef::Clone(int, TObjRef &, unsigned char) {
    /*
        148734:	e1a0c00d 	mov	ip, sp
        148738:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        14873c:	e24cb004 	sub	fp, ip, #4	; 0x4
        148740:	e1a05000 	mov	r5, r0
        148744:	e1a06001 	mov	r6, r1
        148748:	e1a04002 	mov	r4, r2
        14874c:	e20370ff 	and	r7, r3, #255	; 0xff
        148750:	e59f8044 	ldr	r8, [pc, #44]	; 14879c <TObjRef::Clone(int, TObjRef &, unsigned char)+0x68>
        148754:	e1a03007 	mov	r3, r7
        148758:	e1a02004 	mov	r2, r4
        14875c:	e1a01006 	mov	r1, r6
        148760:	e1a00005 	mov	r0, r5
        148764:	ebffffe7 	bl	148708 <TObjRef::CloneEmpty(int, TObjRef &, unsigned char)>
        148768:	e3300000 	teq	r0, #0	; 0x0
        14876c:	1a000005 	bne	148788 <TObjRef::Clone(int, TObjRef &, unsigned char)+0x54>
        148770:	e5950004 	ldr	r0, [r5, #4]	; fField4
        148774:	e1a03820 	mov	r3, r0, lsr #16
        148778:	e1a01004 	mov	r1, r4
        14877c:	e1a00005 	mov	r0, r5
        148780:	e3a02000 	mov	r2, #0	; 0x0
        148784:	eb66b4d2 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
        148788:	e1300008 	teq	r0, r8
        14878c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        148790:	e1a00004 	mov	r0, r4
        148794:	eb66b8e0 	bl	1af6b1c <TObjRef::$Delete(void)>
        148798:	eaffffed 	b	148754 <TObjRef::Clone(int, TObjRef &, unsigned char)+0x20>
        14879c:	ffffd68f 	swinv	0x00ffd68f
    */
}

/**
 * Symbol: TObjRef::CopyTo(TObjRef &, unsigned long, unsigned long)
 * Address: 001487a0
 */
TObjRef::CopyTo(TObjRef &, unsigned long, unsigned long) {
    /*
        1487a0:	e1a0c00d 	mov	ip, sp
        1487a4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1487a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1487ac:	e1a04000 	mov	r4, r0
        1487b0:	e1a05002 	mov	r5, r2
        1487b4:	e1a06003 	mov	r6, r3
        1487b8:	e5b10008 	ldr	r0, [r1, #8]!	; fField8
        1487bc:	e0800002 	add	r0, r0, r2
        1487c0:	e2801008 	add	r1, r0, #8	; 0x8
        1487c4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1487c8:	eb66ff1f 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1487cc:	e1a07000 	mov	r7, r0
        1487d0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        1487d4:	e0800005 	add	r0, r0, r5
        1487d8:	e2801008 	add	r1, r0, #8	; 0x8
        1487dc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1487e0:	eb66ff19 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        1487e4:	e1a01000 	mov	r1, r0
        1487e8:	e1a03006 	mov	r3, r6
        1487ec:	e1a02007 	mov	r2, r7
        1487f0:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        1487f4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1487f8:	ea66ac6d 	b	1af39b4 <TFlashStore::$BasicCopy(unsigned long, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TObjRef::SetState(int)
 * Address: 001487fc
 */
TObjRef::SetState(int) {
    /*
        1487fc:	e1a0c00d 	mov	ip, sp
        148800:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        148804:	e24cb004 	sub	fp, ip, #4	; 0x4
        148808:	e1a04000 	mov	r4, r0
        14880c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        148810:	e1a02000 	mov	r2, r0
        148814:	e5d0303d 	ldrb	r3, [r0, #61]
        148818:	e59f0050 	ldr	r0, [pc, #50]	; 148870 <TObjRef::SetState(int)+0x74>
        14881c:	e3330000 	teq	r3, #0	; 0x0
        148820:	e7d00001 	ldrb	r0, [r0, r1]
        148824:	e1e00000 	mvn	r0, r0
        148828:	e5941004 	ldr	r1, [r4, #4]	; fField4
        14882c:	13c11cff 	bicne	r1, r1, #65280	; 0xff00
        148830:	120000ff 	andne	r0, r0, #255	; 0xff
        148834:	11810400 	orrne	r0, r1, r0, lsl #8
        148838:	1a000002 	bne	148848 <TObjRef::SetState(int)+0x4c>
        14883c:	e1e00400 	mvn	r0, r0, lsl #8
        148840:	e2000cff 	and	r0, r0, #65280	; 0xff00
        148844:	e1c10000 	bic	r0, r1, r0
        148848:	e5840004 	str	r0, [r4, #4]	; fField4
        14884c:	e1a00002 	mov	r0, r2
        148850:	e5941008 	ldr	r1, [r4, #8]	; fField8
        148854:	eb66fefc 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
        148858:	e1a01000 	mov	r1, r0
        14885c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        148860:	e1a02004 	mov	r2, r4
        148864:	e3a03008 	mov	r3, #8	; 0x8
        148868:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        14886c:	ea66ac53 	b	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
        148870:	0037142c 	eoreqs	r1, r7, ip, lsr #8
    */
}

/**
 * Symbol: TObjRef::SetCommittedState(void)
 * Address: 00148874
 */
TObjRef::SetCommittedState(void) {
    /*
        148874:	e5901004 	ldr	r1, [r0, #4]	; fField4
        148878:	e2012006 	and	r2, r1, #6	; 0x6
        14887c:	e3320004 	teq	r2, #4	; 0x4
        148880:	03c11006 	biceq	r1, r1, #6	; 0x6
        148884:	05801004 	streq	r1, [r0, #4]	; fField4
        148888:	e5901010 	ldr	r1, [r0, #16]	; fField16
        14888c:	e5d1103d 	ldrb	r1, [r1, #61]
        148890:	e3310000 	teq	r1, #0	; 0x0
        148894:	03a0100b 	moveq	r1, #11	; 0xb
        148898:	13a01004 	movne	r1, #4	; 0x4
        14889c:	ea66f6a7 	b	1b06340 <TObjRef::$SetState(int)>
    */
}

/**
 * Symbol: TObjRef::FindSuperceeder(TObjRef &)
 * Address: 001488a0
 */
TObjRef::FindSuperceeder(TObjRef &) {
    /*
        1488a0:	e1a03001 	mov	r3, r1
        1488a4:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1488a8:	e1a0c001 	mov	ip, r1
        1488ac:	e5d1103d 	ldrb	r1, [r1, #61]
        1488b0:	e3310000 	teq	r1, #0	; 0x0
        1488b4:	03a0200d 	moveq	r2, #13	; 0xd
        1488b8:	13a02006 	movne	r2, #6	; 0x6
        1488bc:	e5900000 	ldr	r0, [r0]
        1488c0:	e3c0120f 	bic	r1, r0, #-268435456	; 0xf0000000
        1488c4:	e1a0000c 	mov	r0, ip
        1488c8:	ea66d9a8 	b	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
    */
}

