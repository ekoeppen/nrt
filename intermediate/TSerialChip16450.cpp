#include "include/TSerialChip16450.h"

/**
 * Symbol: Sizeof__16TSerialChip16450SFv
 * Address: 001d52a0
 */
void TSerialChip16450::Sizeof() {
    /*
        1d52a0:	e3a0005c 	mov	r0, #92	; 0x5c
        1d52a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::New(void)
 * Address: 001d52a8
 */
TSerialChip16450::New(void) {
    /*
        1d52a8:	e1a0c00d 	mov	ip, sp
        1d52ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d52b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d52b4:	e1a04000 	mov	r4, r0
        1d52b8:	e3a05000 	mov	r5, #0	; 0x0
        1d52bc:	e5805030 	str	r5, [r0, #48]	; fField48
        1d52c0:	e5805024 	str	r5, [r0, #36]	; fField36
        1d52c4:	e5805028 	str	r5, [r0, #40]	; fField40
        1d52c8:	e5805038 	str	r5, [r0, #56]	; fField56
        1d52cc:	e5c05053 	strb	r5, [r0, #83]	; fField83
        1d52d0:	e3a000ff 	mov	r0, #255	; 0xff
        1d52d4:	e5840034 	str	r0, [r4, #52]	; fField52
        1d52d8:	e5845010 	str	r5, [r4, #16]	; fField16
        1d52dc:	e59f001c 	ldr	r0, [pc, #1c]	; 1d5300 <TSerialChip16450::New(void)+0x58>
        1d52e0:	e584002c 	str	r0, [r4, #44]	; fField44
        1d52e4:	e5c45051 	strb	r5, [r4, #81]	; fField81
        1d52e8:	e5c45052 	strb	r5, [r4, #82]	; fField82
        1d52ec:	e1a00004 	mov	r0, r4
        1d52f0:	eb00009c 	bl	1d5568 <TSerialChip16450::ResetState(void)>
        1d52f4:	e5c45050 	strb	r5, [r4, #80]	; fField80
        1d52f8:	e1a00004 	mov	r0, r4
        1d52fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1d5300:	0f181800 	swieq	0x00181800
    */
}

/**
 * Symbol: TSerialChip16450::GetByte(void)
 * Address: 001d5304
 */
TSerialChip16450::GetByte(void) {
    /*
        1d5304:	e3a01003 	mov	r1, #3	; 0x3
        1d5308:	ea000300 	b	1d5f10 <TSerialChip16450::ReadSerReg(unsigned long)>
    */
}

/**
 * Symbol: TSerialChip16450::TxBufEmpty(void)
 * Address: 001d530c
 */
TSerialChip16450::TxBufEmpty(void) {
    /*
        1d530c:	e1a0c00d 	mov	ip, sp
        1d5310:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d5314:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5318:	e1a04000 	mov	r4, r0
        1d531c:	eb000268 	bl	1d5cc4 <TSerialChip16450::CheckLineStatusReg(void)>
        1d5320:	e2100020 	ands	r0, r0, #32	; 0x20
        1d5324:	13a00001 	movne	r0, #1	; 0x1
        1d5328:	e20000ff 	and	r0, r0, #255	; 0xff
        1d532c:	e5941034 	ldr	r1, [r4, #52]	; fField52
        1d5330:	e3310002 	teq	r1, #2	; 0x2
        1d5334:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1d5338:	e3300000 	teq	r0, #0	; 0x0
        1d533c:	13a01010 	movne	r1, #16	; 0x10
        1d5340:	15c4104f 	strneb	r1, [r4, #79]	; fField79
        1d5344:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1d5348:	e5d4004f 	ldrb	r0, [r4, #79]	; fField79
        1d534c:	e3300000 	teq	r0, #0	; 0x0
        1d5350:	13a00001 	movne	r0, #1	; 0x1
        1d5354:	e20000ff 	and	r0, r0, #255	; 0xff
        1d5358:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::RxBufFull(void)
 * Address: 001d535c
 */
TSerialChip16450::RxBufFull(void) {
    /*
        1d535c:	e1a0c00d 	mov	ip, sp
        1d5360:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1d5364:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5368:	eb000255 	bl	1d5cc4 <TSerialChip16450::CheckLineStatusReg(void)>
        1d536c:	e2100001 	ands	r0, r0, #1	; 0x1
        1d5370:	13a00001 	movne	r0, #1	; 0x1
        1d5374:	e20000ff 	and	r0, r0, #255	; 0xff
        1d5378:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::GetRxErrorStatus(void)
 * Address: 001d537c
 */
TSerialChip16450::GetRxErrorStatus(void) {
    /*
        1d537c:	e1a0c00d 	mov	ip, sp
        1d5380:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d5384:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5388:	e1a04000 	mov	r4, r0
        1d538c:	eb00024c 	bl	1d5cc4 <TSerialChip16450::CheckLineStatusReg(void)>
        1d5390:	e210100e 	ands	r1, r0, #14	; 0xe
        1d5394:	e3a00000 	mov	r0, #0	; 0x0
        1d5398:	e5d42048 	ldrb	r2, [r4, #72]	; fField72
        1d539c:	e3c2200e 	bic	r2, r2, #14	; 0xe
        1d53a0:	e5c42048 	strb	r2, [r4, #72]	; fField72
        1d53a4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1d53a8:	e3110004 	tst	r1, #4	; 0x4
        1d53ac:	13a00010 	movne	r0, #16	; 0x10
        1d53b0:	e3110002 	tst	r1, #2	; 0x2
        1d53b4:	13800020 	orrne	r0, r0, #32	; 0x20
        1d53b8:	e3110008 	tst	r1, #8	; 0x8
        1d53bc:	13800040 	orrne	r0, r0, #64	; 0x40
        1d53c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::GetSerialStatus(void)
 * Address: 001d53c4
 */
TSerialChip16450::GetSerialStatus(void) {
    /*
        1d53c4:	e1a0c00d 	mov	ip, sp
        1d53c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d53cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d53d0:	e1a04000 	mov	r4, r0
        1d53d4:	e5d00051 	ldrb	r0, [r0, #81]	; fField81
        1d53d8:	e3300001 	teq	r0, #1	; 0x1
        1d53dc:	03a00c01 	moveq	r0, #256	; 0x100
        1d53e0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1d53e4:	e3a05000 	mov	r5, #0	; 0x0
        1d53e8:	e1a00004 	mov	r0, r4
        1d53ec:	eb000234 	bl	1d5cc4 <TSerialChip16450::CheckLineStatusReg(void)>
        1d53f0:	e3100001 	tst	r0, #1	; 0x1
        1d53f4:	13a05001 	movne	r5, #1	; 0x1
        1d53f8:	e3100020 	tst	r0, #32	; 0x20
        1d53fc:	120510ff 	andne	r1, r5, #255	; 0xff
        1d5400:	13815004 	orrne	r5, r1, #4	; 0x4
        1d5404:	e3100010 	tst	r0, #16	; 0x10
        1d5408:	120500ff 	andne	r0, r5, #255	; 0xff
        1d540c:	13805080 	orrne	r5, r0, #128	; 0x80
        1d5410:	e5d40049 	ldrb	r0, [r4, #73]	; fField73
        1d5414:	e3100010 	tst	r0, #16	; 0x10
        1d5418:	120510ff 	andne	r1, r5, #255	; 0xff
        1d541c:	13815020 	orrne	r5, r1, #32	; 0x20
        1d5420:	e3100080 	tst	r0, #128	; 0x80
        1d5424:	120510ff 	andne	r1, r5, #255	; 0xff
        1d5428:	13815008 	orrne	r5, r1, #8	; 0x8
        1d542c:	e3100020 	tst	r0, #32	; 0x20
        1d5430:	120510ff 	andne	r1, r5, #255	; 0xff
        1d5434:	13815002 	orrne	r5, r1, #2	; 0x2
        1d5438:	e3100040 	tst	r0, #64	; 0x40
        1d543c:	120500ff 	andne	r0, r5, #255	; 0xff
        1d5440:	13805010 	orrne	r5, r0, #16	; 0x10
        1d5444:	e1a00005 	mov	r0, r5
        1d5448:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::ResetSerialStatus(void)
 * Address: 001d544c
 */
TSerialChip16450::ResetSerialStatus(void) {
    /*
        1d544c:	e5d01048 	ldrb	r1, [r0, #72]	; fField72
        1d5450:	e3c11071 	bic	r1, r1, #113	; 0x71
        1d5454:	e5c01048 	strb	r1, [r0, #72]	; fField72
        1d5458:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::SetSerialOutputs(unsigned long)
 * Address: 001d545c
 */
TSerialChip16450::SetSerialOutputs(unsigned long) {
    /*
        1d545c:	e3110001 	tst	r1, #1	; 0x1
        1d5460:	15d0204d 	ldrneb	r2, [r0, #77]	; fField77
        1d5464:	13822001 	orrne	r2, r2, #1	; 0x1
        1d5468:	15c0204d 	strneb	r2, [r0, #77]	; fField77
        1d546c:	e3110002 	tst	r1, #2	; 0x2
        1d5470:	15d0104d 	ldrneb	r1, [r0, #77]	; fField77
        1d5474:	13811002 	orrne	r1, r1, #2	; 0x2
        1d5478:	15c0104d 	strneb	r1, [r0, #77]	; fField77
        1d547c:	e5d0204d 	ldrb	r2, [r0, #77]	; fField77
        1d5480:	e3a01007 	mov	r1, #7	; 0x7
        1d5484:	ea000291 	b	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TSerialChip16450::ClearSerialOutputs(unsigned long)
 * Address: 001d5488
 */
TSerialChip16450::ClearSerialOutputs(unsigned long) {
    /*
        1d5488:	e3110001 	tst	r1, #1	; 0x1
        1d548c:	15d0204d 	ldrneb	r2, [r0, #77]	; fField77
        1d5490:	13c22001 	bicne	r2, r2, #1	; 0x1
        1d5494:	15c0204d 	strneb	r2, [r0, #77]	; fField77
        1d5498:	e3110002 	tst	r1, #2	; 0x2
        1d549c:	15d0104d 	ldrneb	r1, [r0, #77]	; fField77
        1d54a0:	13c11002 	bicne	r1, r1, #2	; 0x2
        1d54a4:	15c0104d 	strneb	r1, [r0, #77]	; fField77
        1d54a8:	e5d0204d 	ldrb	r2, [r0, #77]	; fField77
        1d54ac:	e3a01007 	mov	r1, #7	; 0x7
        1d54b0:	ea000286 	b	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TSerialChip16450::GetSerialOutputs(void)
 * Address: 001d54b4
 */
TSerialChip16450::GetSerialOutputs(void) {
    /*
        1d54b4:	e1a0c00d 	mov	ip, sp
        1d54b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d54bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d54c0:	e3a04000 	mov	r4, #0	; 0x0
        1d54c4:	e3a01007 	mov	r1, #7	; 0x7
        1d54c8:	eb000290 	bl	1d5f10 <TSerialChip16450::ReadSerReg(unsigned long)>
        1d54cc:	e3100001 	tst	r0, #1	; 0x1
        1d54d0:	13a04001 	movne	r4, #1	; 0x1
        1d54d4:	e3100002 	tst	r0, #2	; 0x2
        1d54d8:	13844002 	orrne	r4, r4, #2	; 0x2
        1d54dc:	e1a00004 	mov	r0, r4
        1d54e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::PowerOff(void)
 * Address: 001d54e4
 */
TSerialChip16450::PowerOff(void) {
    /*
        1d54e4:	e1a0c00d 	mov	ip, sp
        1d54e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d54ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d54f0:	e1a04000 	mov	r4, r0
        1d54f4:	e5d00053 	ldrb	r0, [r0, #83]	; fField83
        1d54f8:	e3300000 	teq	r0, #0	; 0x0
        1d54fc:	0a000005 	beq	1d5518 <TSerialChip16450::PowerOff(void)+0x34>
        1d5500:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d5504:	e1a03004 	mov	r3, r4
        1d5508:	e3a02000 	mov	r2, #0	; 0x0
        1d550c:	e3a0100c 	mov	r1, #12	; 0xc
        1d5510:	eb67e8b3 	bl	1bcf7e4 <TCardHandler::$CardSpecific(unsigned long, void *, unsigned long)>
        1d5514:	ea000002 	b	1d5524 <TSerialChip16450::PowerOff(void)+0x40>
        1d5518:	e3a01004 	mov	r1, #4	; 0x4
        1d551c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d5520:	eb67f0e5 	bl	1bd18bc <TCardSocket::$DisableSocketInterrupt(TSocketInt)>
        1d5524:	e1a00004 	mov	r0, r4
        1d5528:	e3a02000 	mov	r2, #0	; 0x0
        1d552c:	e3a01002 	mov	r1, #2	; 0x2
        1d5530:	eb000266 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d5534:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d5538:	e1a03004 	mov	r3, r4
        1d553c:	e3a02000 	mov	r2, #0	; 0x0
        1d5540:	e3a01002 	mov	r1, #2	; 0x2
        1d5544:	eb67e8a6 	bl	1bcf7e4 <TCardHandler::$CardSpecific(unsigned long, void *, unsigned long)>
        1d5548:	e3a00000 	mov	r0, #0	; 0x0
        1d554c:	e5c40050 	strb	r0, [r4, #80]	; fField80
        1d5550:	e5d40054 	ldrb	r0, [r4, #84]	; fField84
        1d5554:	e3300000 	teq	r0, #0	; 0x0
        1d5558:	15b40058 	ldrne	r0, [r4, #88]!	; fField88
        1d555c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        1d5560:	1a66aa8c 	bne	1b7ff98 <$DisableExtSoundSource(long)>
        1d5564:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::ResetState(void)
 * Address: 001d5568
 */
TSerialChip16450::ResetState(void) {
    /*
        1d5568:	e3a01000 	mov	r1, #0	; 0x0
        1d556c:	e5c01048 	strb	r1, [r0, #72]	; fField72
        1d5570:	e3a0200c 	mov	r2, #12	; 0xc
        1d5574:	e5c0204a 	strb	r2, [r0, #74]	; fField74
        1d5578:	e5c0104b 	strb	r1, [r0, #75]	; fField75
        1d557c:	e3a02066 	mov	r2, #102	; 0x66
        1d5580:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        1d5584:	e5802040 	str	r2, [r0, #64]	; fField64
        1d5588:	e5802044 	str	r2, [r0, #68]	; fField68
        1d558c:	e3a02003 	mov	r2, #3	; 0x3
        1d5590:	e5c0204c 	strb	r2, [r0, #76]	; fField76
        1d5594:	e3a0200b 	mov	r2, #11	; 0xb
        1d5598:	e5c0204d 	strb	r2, [r0, #77]	; fField77
        1d559c:	e3a0200f 	mov	r2, #15	; 0xf
        1d55a0:	e5c0204e 	strb	r2, [r0, #78]	; fField78
        1d55a4:	e5c01054 	strb	r1, [r0, #84]	; fField84
        1d55a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::PowerOn(void)
 * Address: 001d55ac
 */
TSerialChip16450::PowerOn(void) {
    /*
        1d55ac:	e1a0c00d 	mov	ip, sp
        1d55b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d55b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d55b8:	e1a04000 	mov	r4, r0
        1d55bc:	e3a00001 	mov	r0, #1	; 0x1
        1d55c0:	e5c40050 	strb	r0, [r4, #80]	; fField80
        1d55c4:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d55c8:	e1a03004 	mov	r3, r4
        1d55cc:	e3a02000 	mov	r2, #0	; 0x0
        1d55d0:	e3a01001 	mov	r1, #1	; 0x1
        1d55d4:	eb67e882 	bl	1bcf7e4 <TCardHandler::$CardSpecific(unsigned long, void *, unsigned long)>
        1d55d8:	e5d40053 	ldrb	r0, [r4, #83]	; fField83
        1d55dc:	e3300000 	teq	r0, #0	; 0x0
        1d55e0:	0a000005 	beq	1d55fc <TSerialChip16450::PowerOn(void)+0x50>
        1d55e4:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d55e8:	e1a03004 	mov	r3, r4
        1d55ec:	e3a02001 	mov	r2, #1	; 0x1
        1d55f0:	e3a0100c 	mov	r1, #12	; 0xc
        1d55f4:	eb67e87a 	bl	1bcf7e4 <TCardHandler::$CardSpecific(unsigned long, void *, unsigned long)>
        1d55f8:	ea000002 	b	1d5608 <TSerialChip16450::PowerOn(void)+0x5c>
        1d55fc:	e3a01004 	mov	r1, #4	; 0x4
        1d5600:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d5604:	eb67f0b3 	bl	1bd18d8 <TCardSocket::$EnableSocketInterrupt(TSocketInt)>
        1d5608:	e5d40054 	ldrb	r0, [r4, #84]	; fField84
        1d560c:	e3300000 	teq	r0, #0	; 0x0
        1d5610:	15b40058 	ldrne	r0, [r4, #88]!	; fField88
        1d5614:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        1d5618:	1a66aa5d 	bne	1b7ff94 <$EnableExtSoundSource(long)>
        1d561c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::PowerIsOn(void)
 * Address: 001d5620
 */
TSerialChip16450::PowerIsOn(void) {
    /*
        1d5620:	e5d00050 	ldrb	r0, [r0, #80]	; fField80
        1d5624:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::SetInterruptEnable(unsigned char)
 * Address: 001d5628
 */
TSerialChip16450::SetInterruptEnable(unsigned char) {
    /*
        1d5628:	e31100ff 	tst	r1, #255	; 0xff
        1d562c:	e3a02000 	mov	r2, #0	; 0x0
        1d5630:	13a0200f 	movne	r2, #15	; 0xf
        1d5634:	e5c0204e 	strb	r2, [r0, #78]	; fField78
        1d5638:	e3a01002 	mov	r1, #2	; 0x2
        1d563c:	ea000223 	b	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TSerialChip16450::Reset(void)
 * Address: 001d5640
 */
TSerialChip16450::Reset(void) {
    /*
        1d5640:	e3a01000 	mov	r1, #0	; 0x0
        1d5644:	eafffff7 	b	1d5628 <TSerialChip16450::SetInterruptEnable(unsigned char)>
    */
}

/**
 * Symbol: TSerialChip16450::SetBreak(unsigned char)
 * Address: 001d5648
 */
TSerialChip16450::SetBreak(unsigned char) {
    /*
        1d5648:	e31100ff 	tst	r1, #255	; 0xff
        1d564c:	e5d0104c 	ldrb	r1, [r0, #76]	; fField76
        1d5650:	03c11040 	biceq	r1, r1, #64	; 0x40
        1d5654:	13811040 	orrne	r1, r1, #64	; 0x40
        1d5658:	e5c0104c 	strb	r1, [r0, #76]	; fField76
        1d565c:	e20120ff 	and	r2, r1, #255	; 0xff
        1d5660:	e3a01000 	mov	r1, #0	; 0x0
        1d5664:	ea000219 	b	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TSerialChip16450::SetSpeed(unsigned long)
 * Address: 001d5668
 */
TSerialChip16450::SetSpeed(unsigned long) {
    /*
        1d5668:	e1a0c00d 	mov	ip, sp
        1d566c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d5670:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5674:	e1a05000 	mov	r5, r0
        1d5678:	e1a04001 	mov	r4, r1
        1d567c:	e3a01cc2 	mov	r1, #49664	; 0xc200
        1d5680:	e2811801 	add	r1, r1, #65536	; 0x10000
        1d5684:	e3540ce1 	cmp	r4, #57600	; 0xe100
        1d5688:	83a04ce1 	movhi	r4, #57600	; 0xe100
        1d568c:	8a000001 	bhi	1d5698 <TSerialChip16450::SetSpeed(unsigned long)+0x30>
        1d5690:	e3540002 	cmp	r4, #2	; 0x2
        1d5694:	33a04f4b 	movcc	r4, #300	; 0x12c
        1d5698:	e1a00004 	mov	r0, r4
        1d569c:	eb6774a9 	bl	1bb2948 <$__rt_udiv>
        1d56a0:	e5c5004a 	strb	r0, [r5, #74]	; fField74
        1d56a4:	e1a00420 	mov	r0, r0, lsr #8
        1d56a8:	e5c5004b 	strb	r0, [r5, #75]	; fField75
        1d56ac:	e1a00004 	mov	r0, r4
        1d56b0:	e59f1010 	ldr	r1, [pc, #10]	; 1d56c8 <TSerialChip16450::SetSpeed(unsigned long)+0x60>
        1d56b4:	eb6774a3 	bl	1bb2948 <$__rt_udiv>
        1d56b8:	e1a00100 	mov	r0, r0, lsl #2
        1d56bc:	e5a50044 	str	r0, [r5, #68]!	; fField68
        1d56c0:	e1a00004 	mov	r0, r4
        1d56c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1d56c8:	00989680 	addeqs	r9, r8, r0, lsl #13
    */
}

/**
 * Symbol: TSerialChip16450::SetIOParms(TCMOSerialIOParms *)
 * Address: 001d56cc
 */
TSerialChip16450::SetIOParms(TCMOSerialIOParms *) {
    /*
        1d56cc:	e5912014 	ldr	r2, [r1, #20]	; fField20
        1d56d0:	e3320005 	teq	r2, #5	; 0x5
        1d56d4:	03a02000 	moveq	r2, #0	; 0x0
        1d56d8:	0a000005 	beq	1d56f4 <TSerialChip16450::SetIOParms(TCMOSerialIOParms *)+0x28>
        1d56dc:	e3320006 	teq	r2, #6	; 0x6
        1d56e0:	03a02001 	moveq	r2, #1	; 0x1
        1d56e4:	0a000002 	beq	1d56f4 <TSerialChip16450::SetIOParms(TCMOSerialIOParms *)+0x28>
        1d56e8:	e3320007 	teq	r2, #7	; 0x7
        1d56ec:	03a02002 	moveq	r2, #2	; 0x2
        1d56f0:	13a02003 	movne	r2, #3	; 0x3
        1d56f4:	e5913010 	ldr	r3, [r1, #16]	; fField16
        1d56f8:	e3330000 	teq	r3, #0	; 0x0
        1d56fc:	0a000005 	beq	1d5718 <TSerialChip16450::SetIOParms(TCMOSerialIOParms *)+0x4c>
        1d5700:	e3330001 	teq	r3, #1	; 0x1
        1d5704:	03a03008 	moveq	r3, #8	; 0x8
        1d5708:	0a000003 	beq	1d571c <TSerialChip16450::SetIOParms(TCMOSerialIOParms *)+0x50>
        1d570c:	e3330002 	teq	r3, #2	; 0x2
        1d5710:	03a03018 	moveq	r3, #24	; 0x18
        1d5714:	0a000000 	beq	1d571c <TSerialChip16450::SetIOParms(TCMOSerialIOParms *)+0x50>
        1d5718:	e3a03000 	mov	r3, #0	; 0x0
        1d571c:	e591100c 	ldr	r1, [r1, #12]
        1d5720:	e3310000 	teq	r1, #0	; 0x0
        1d5724:	0a000002 	beq	1d5734 <TSerialChip16450::SetIOParms(TCMOSerialIOParms *)+0x68>
        1d5728:	e3310002 	teq	r1, #2	; 0x2
        1d572c:	03a01004 	moveq	r1, #4	; 0x4
        1d5730:	0a000000 	beq	1d5738 <TSerialChip16450::SetIOParms(TCMOSerialIOParms *)+0x6c>
        1d5734:	e3a01000 	mov	r1, #0	; 0x0
        1d5738:	e0831001 	add	r1, r3, r1
        1d573c:	e0811002 	add	r1, r1, r2
        1d5740:	e5c0104c 	strb	r1, [r0, #76]	; fField76
        1d5744:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::Reconfigure(void)
 * Address: 001d5748
 */
TSerialChip16450::Reconfigure(void) {
    /*
        1d5748:	e1a0c00d 	mov	ip, sp
        1d574c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d5750:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5754:	e1a04000 	mov	r4, r0
        1d5758:	e5d0004c 	ldrb	r0, [r0, #76]	; fField76
        1d575c:	e3802080 	orr	r2, r0, #128	; 0x80
        1d5760:	e1a00004 	mov	r0, r4
        1d5764:	e3a01000 	mov	r1, #0	; 0x0
        1d5768:	eb0001d8 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d576c:	e5d4204a 	ldrb	r2, [r4, #74]	; fField74
        1d5770:	e1a00004 	mov	r0, r4
        1d5774:	e3a01003 	mov	r1, #3	; 0x3
        1d5778:	eb0001d4 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d577c:	e5d4204b 	ldrb	r2, [r4, #75]	; fField75
        1d5780:	e1a00004 	mov	r0, r4
        1d5784:	e3a01002 	mov	r1, #2	; 0x2
        1d5788:	eb0001d0 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d578c:	e5940044 	ldr	r0, [r4, #68]	; fField68
        1d5790:	e5840040 	str	r0, [r4, #64]	; fField64
        1d5794:	e5d4204c 	ldrb	r2, [r4, #76]	; fField76
        1d5798:	e1a00004 	mov	r0, r4
        1d579c:	e3a01000 	mov	r1, #0	; 0x0
        1d57a0:	eb0001ca 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d57a4:	e5d4204d 	ldrb	r2, [r4, #77]	; fField77
        1d57a8:	e1a00004 	mov	r0, r4
        1d57ac:	e3a01007 	mov	r1, #7	; 0x7
        1d57b0:	eb0001c6 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d57b4:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1d57b8:	e3300001 	teq	r0, #1	; 0x1
        1d57bc:	0a000017 	beq	1d5820 <TSerialChip16450::Reconfigure(void)+0xd8>
        1d57c0:	e1a00004 	mov	r0, r4
        1d57c4:	e3a02081 	mov	r2, #129	; 0x81
        1d57c8:	e3a01001 	mov	r1, #1	; 0x1
        1d57cc:	eb0001bf 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d57d0:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1d57d4:	e33000ff 	teq	r0, #255	; 0xff
        1d57d8:	1a000010 	bne	1d5820 <TSerialChip16450::Reconfigure(void)+0xd8>
        1d57dc:	e1a00004 	mov	r0, r4
        1d57e0:	e3a01001 	mov	r1, #1	; 0x1
        1d57e4:	eb0001c9 	bl	1d5f10 <TSerialChip16450::ReadSerReg(unsigned long)>
        1d57e8:	e20000c0 	and	r0, r0, #192	; 0xc0
        1d57ec:	e33000c0 	teq	r0, #192	; 0xc0
        1d57f0:	03a00002 	moveq	r0, #2	; 0x2
        1d57f4:	05840034 	streq	r0, [r4, #52]	; fField52
        1d57f8:	03a00010 	moveq	r0, #16	; 0x10
        1d57fc:	0a000006 	beq	1d581c <TSerialChip16450::Reconfigure(void)+0xd4>
        1d5800:	e1a00004 	mov	r0, r4
        1d5804:	e3a02000 	mov	r2, #0	; 0x0
        1d5808:	e3a01001 	mov	r1, #1	; 0x1
        1d580c:	eb0001af 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d5810:	e3a00001 	mov	r0, #1	; 0x1
        1d5814:	e5840034 	str	r0, [r4, #52]	; fField52
        1d5818:	e3a00000 	mov	r0, #0	; 0x0
        1d581c:	e5c4004f 	strb	r0, [r4, #79]	; fField79
        1d5820:	e5d4204e 	ldrb	r2, [r4, #78]	; fField78
        1d5824:	e1a00004 	mov	r0, r4
        1d5828:	e3a01002 	mov	r1, #2	; 0x2
        1d582c:	eb0001a7 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d5830:	e1a00004 	mov	r0, r4
        1d5834:	e3a01006 	mov	r1, #6	; 0x6
        1d5838:	eb0001b4 	bl	1d5f10 <TSerialChip16450::ReadSerReg(unsigned long)>
        1d583c:	e1a00004 	mov	r0, r4
        1d5840:	eb00011f 	bl	1d5cc4 <TSerialChip16450::CheckLineStatusReg(void)>
        1d5844:	e1a00004 	mov	r0, r4
        1d5848:	e3a01005 	mov	r1, #5	; 0x5
        1d584c:	eb0001af 	bl	1d5f10 <TSerialChip16450::ReadSerReg(unsigned long)>
        1d5850:	e1a00004 	mov	r0, r4
        1d5854:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1d5858:	ea00012c 	b	1d5d10 <TSerialChip16450::CheckModemStatusReg(void)>
    */
}

/**
 * Symbol: TSerialChip16450::GetFeatures(void)
 * Address: 001d585c
 */
TSerialChip16450::GetFeatures(void) {
    /*
        1d585c:	e59f0000 	ldr	r0, [pc, #0]	; 1d5864 <TSerialChip16450::GetFeatures(void)+0x8>
        1d5860:	e1a0f00e 	mov	pc, lr
        1d5864:	00100123 	andeqs	r0, r0, r3, lsr #2
    */
}

/**
 * Symbol: TSerialChip16450::InitByOption(TOption *)
 * Address: 001d5868
 */
TSerialChip16450::InitByOption(TOption *) {
    /*
        1d5868:	e5912000 	ldr	r2, [r1]
        1d586c:	e59fc030 	ldr	ip, [pc, #30]	; 1d58a4 <TSerialChip16450::InitByOption(TOption *)+0x3c>
        1d5870:	e132000c 	teq	r2, ip
        1d5874:	13a00069 	movne	r0, #105	; 0x69
        1d5878:	12400c3f 	subne	r0, r0, #16128	; 0x3f00
        1d587c:	11a0f00e 	movne	pc, lr
        1d5880:	e5912004 	ldr	r2, [r1, #4]
        1d5884:	e3520010 	cmp	r2, #16	; 0x10
        1d5888:	ba000002 	blt	1d5898 <TSerialChip16450::InitByOption(TOption *)+0x30>
        1d588c:	e5912018 	ldr	r2, [r1, #24]	; fField24
        1d5890:	e3320000 	teq	r2, #0	; 0x0
        1d5894:	15802038 	strne	r2, [r0, #56]	; fField56
        1d5898:	e281300c 	add	r3, r1, #12	; 0xc
        1d589c:	e893000e 	ldmia	r3, {r1, r2, r3}
        1d58a0:	ea000122 	b	1d5d30 <TSerialChip16450::Init(TCardSocket *, TCardHandler *, unsigned char *)>
        1d58a4:	31367835 	teqcc	r6, r5, lsr r8
    */
}

/**
 * Symbol: TSerialChip16450::Delete(void)
 * Address: 001d58a8
 */
TSerialChip16450::Delete(void) {
    /*
        1d58a8:	e1a0c00d 	mov	ip, sp
        1d58ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d58b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d58b4:	e1a04000 	mov	r4, r0
        1d58b8:	e5d00052 	ldrb	r0, [r0, #82]	; fField82
        1d58bc:	e3300000 	teq	r0, #0	; 0x0
        1d58c0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1d58c4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d58c8:	e3300000 	teq	r0, #0	; 0x0
        1d58cc:	0a000003 	beq	1d58e0 <TSerialChip16450::Delete(void)+0x38>
        1d58d0:	eb06f47a 	bl	392ac0 <EnterAtomic>
        1d58d4:	e1a00004 	mov	r0, r4
        1d58d8:	eb0000c0 	bl	1d5be0 <TSerialChip16450::CardRemoved(void)>
        1d58dc:	eb06f48e 	bl	392b1c <ExitAtomic>
        1d58e0:	e5d40053 	ldrb	r0, [r4, #83]	; fField83
        1d58e4:	e3300000 	teq	r0, #0	; 0x0
        1d58e8:	0a000005 	beq	1d5904 <TSerialChip16450::Delete(void)+0x5c>
        1d58ec:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d58f0:	e1a03004 	mov	r3, r4
        1d58f4:	e3a02000 	mov	r2, #0	; 0x0
        1d58f8:	e3a0100b 	mov	r1, #11	; 0xb
        1d58fc:	eb67e7b8 	bl	1bcf7e4 <TCardHandler::$CardSpecific(unsigned long, void *, unsigned long)>
        1d5900:	ea000002 	b	1d5910 <TSerialChip16450::Delete(void)+0x68>
        1d5904:	e3a01004 	mov	r1, #4	; 0x4
        1d5908:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d590c:	eb67efde 	bl	1bd188c <TCardSocket::$DeregisterSocketInterrupt(TSocketInt)>
        1d5910:	e3a00000 	mov	r0, #0	; 0x0
        1d5914:	e5c40052 	strb	r0, [r4, #82]	; fField82
        1d5918:	eb68b1fc 	bl	1c02110 <$GetSerialChipRegistry(void)>
        1d591c:	e1a01004 	mov	r1, r4
        1d5920:	eb06bd5b 	bl	384e94 <PSerialChipRegistry::UnRegister(TSerialChip *)>
        1d5924:	e284105c 	add	r1, r4, #92	; 0x5c
        1d5928:	e1a00004 	mov	r0, r4
        1d592c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1d5930:	ea68215a 	b	1bddea0 <$UnlockHeapRange>
    */
}

/**
 * Symbol: TSerialChip16450::ProcessOption(TOption *)
 * Address: 001d5934
 */
TSerialChip16450::ProcessOption(TOption *) {
    /*
        1d5934:	e1a0c00d 	mov	ip, sp
        1d5938:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d593c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5940:	e1a04000 	mov	r4, r0
        1d5944:	e1a05001 	mov	r5, r1
        1d5948:	e5910008 	ldr	r0, [r1, #8]
        1d594c:	e2000cff 	and	r0, r0, #65280	; 0xff00
        1d5950:	e5911000 	ldr	r1, [r1]
        1d5954:	e3a06000 	mov	r6, #0	; 0x0
        1d5958:	e59fc0b8 	ldr	ip, [pc, #b8]	; 1d5a18 <TSerialChip16450::ProcessOption(TOption *)+0xe4>
        1d595c:	e131000c 	teq	r1, ip
        1d5960:	0a00002f 	beq	1d5a24 <TSerialChip16450::ProcessOption(TOption *)+0xf0>
        1d5964:	e59fc0b0 	ldr	ip, [pc, #b0]	; 1d5a1c <TSerialChip16450::ProcessOption(TOption *)+0xe8>
        1d5968:	e131000c 	teq	r1, ip
        1d596c:	0a000044 	beq	1d5a84 <TSerialChip16450::ProcessOption(TOption *)+0x150>
        1d5970:	e59fc0a8 	ldr	ip, [pc, #a8]	; 1d5a20 <TSerialChip16450::ProcessOption(TOption *)+0xec>
        1d5974:	e131000c 	teq	r1, ip
        1d5978:	1a00004f 	bne	1d5abc <TSerialChip16450::ProcessOption(TOption *)+0x188>
        1d597c:	e3300b01 	teq	r0, #1024	; 0x400
        1d5980:	1a000042 	bne	1d5a90 <TSerialChip16450::ProcessOption(TOption *)+0x15c>
        1d5984:	e24dd020 	sub	sp, sp, #32	; 0x20
        1d5988:	e1a0000d 	mov	r0, sp
        1d598c:	eb68ba37 	bl	1c04270 <TCMOSerialChipSpec::$__ct(void)>
        1d5990:	e5940038 	ldr	r0, [r4, #56]	; fField56
        1d5994:	e58d000c 	str	r0, [sp, #12]
        1d5998:	e1a00004 	mov	r0, r4
        1d599c:	eb6231f3 	bl	1a62170 <TSerialChip16450::$GetFeatures(void)>
        1d59a0:	e58d0010 	str	r0, [sp, #16]	; fField16
        1d59a4:	e3a0000f 	mov	r0, #15	; 0xf
        1d59a8:	e5cd0016 	strb	r0, [sp, #22]
        1d59ac:	e3a00003 	mov	r0, #3	; 0x3
        1d59b0:	e5cd0014 	strb	r0, [sp, #20]	; fField20
        1d59b4:	e3a0003a 	mov	r0, #58	; 0x3a
        1d59b8:	e5cd0015 	strb	r0, [sp, #21]
        1d59bc:	e3a0007f 	mov	r0, #127	; 0x7f
        1d59c0:	e5cd0017 	strb	r0, [sp, #23]
        1d59c4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d59c8:	e3300000 	teq	r0, #0	; 0x0
        1d59cc:	13a00000 	movne	r0, #0	; 0x0
        1d59d0:	03a00001 	moveq	r0, #1	; 0x1
        1d59d4:	e5cd0019 	strb	r0, [sp, #25]
        1d59d8:	e59d0008 	ldr	r0, [sp, #8]
        1d59dc:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        1d59e0:	e3800b01 	orr	r0, r0, #1024	; 0x400
        1d59e4:	e58d0008 	str	r0, [sp, #8]
        1d59e8:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d59ec:	e1a03004 	mov	r3, r4
        1d59f0:	e1a0200d 	mov	r2, sp
        1d59f4:	e3a01000 	mov	r1, #0	; 0x0
        1d59f8:	eb67e779 	bl	1bcf7e4 <TCardHandler::$CardSpecific(unsigned long, void *, unsigned long)>
        1d59fc:	e5b40034 	ldr	r0, [r4, #52]!	; fField52
        1d5a00:	e5cd0018 	strb	r0, [sp, #24]	; fField24
        1d5a04:	e1a0100d 	mov	r1, sp
        1d5a08:	e1a00005 	mov	r0, r5
        1d5a0c:	eb67886f 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
        1d5a10:	e28dd020 	add	sp, sp, #32	; 0x20
        1d5a14:	ea000031 	b	1d5ae0 <TSerialChip16450::ProcessOption(TOption *)+0x1ac>
        1d5a18:	64626763 	strvsbt	r6, [r2], -#1891
        1d5a1c:	6d736e64 	ldcvsl	14, cr6, [r3, -#400]!
        1d5a20:	73657273 	cmnvc	r5, #805306375	; 0x30000007
        1d5a24:	e3300c02 	teq	r0, #512	; 0x200
        1d5a28:	1a000018 	bne	1d5a90 <TSerialChip16450::ProcessOption(TOption *)+0x15c>
        1d5a2c:	e5d50020 	ldrb	r0, [r5, #32]	; fField32
        1d5a30:	e3300000 	teq	r0, #0	; 0x0
        1d5a34:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d5a38:	1a000002 	bne	1d5a48 <TSerialChip16450::ProcessOption(TOption *)+0x114>
        1d5a3c:	e3300000 	teq	r0, #0	; 0x0
        1d5a40:	1a000012 	bne	1d5a90 <TSerialChip16450::ProcessOption(TOption *)+0x15c>
        1d5a44:	ea000006 	b	1d5a64 <TSerialChip16450::ProcessOption(TOption *)+0x130>
        1d5a48:	e3300000 	teq	r0, #0	; 0x0
        1d5a4c:	0a000004 	beq	1d5a64 <TSerialChip16450::ProcessOption(TOption *)+0x130>
        1d5a50:	e1a00004 	mov	r0, r4
        1d5a54:	ebfffea2 	bl	1d54e4 <TSerialChip16450::PowerOff(void)>
        1d5a58:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1d5a5c:	e1a00004 	mov	r0, r4
        1d5a60:	eb00014d 	bl	1d5f9c <TSerialChip16450::RemoveChipHandler(void *)>
        1d5a64:	e2852010 	add	r2, r5, #16	; 0x10
        1d5a68:	e1a00004 	mov	r0, r4
        1d5a6c:	e5b5100c 	ldr	r1, [r5, #12]!
        1d5a70:	eb000133 	bl	1d5f44 <TSerialChip16450::InstallChipHandler(void *, SCCChannelInts *)>
        1d5a74:	e1a00004 	mov	r0, r4
        1d5a78:	e3a01008 	mov	r1, #8	; 0x8
        1d5a7c:	eb6235ce 	bl	1a631bc <TSerialChip16450::$SetSerialMode(unsigned long)>
        1d5a80:	ea000016 	b	1d5ae0 <TSerialChip16450::ProcessOption(TOption *)+0x1ac>
        1d5a84:	e3300c01 	teq	r0, #256	; 0x100
        1d5a88:	13300c02 	teqne	r0, #512	; 0x200
        1d5a8c:	0a000001 	beq	1d5a98 <TSerialChip16450::ProcessOption(TOption *)+0x164>
        1d5a90:	e3e06000 	mvn	r6, #0	; 0x0
        1d5a94:	ea000011 	b	1d5ae0 <TSerialChip16450::ProcessOption(TOption *)+0x1ac>
        1d5a98:	e5d5500c 	ldrb	r5, [r5, #12]
        1d5a9c:	e3350000 	teq	r5, #0	; 0x0
        1d5aa0:	e5940058 	ldr	r0, [r4, #88]	; fField88
        1d5aa4:	0a000001 	beq	1d5ab0 <TSerialChip16450::ProcessOption(TOption *)+0x17c>
        1d5aa8:	eb66a939 	bl	1b7ff94 <$EnableExtSoundSource(long)>
        1d5aac:	ea000000 	b	1d5ab4 <TSerialChip16450::ProcessOption(TOption *)+0x180>
        1d5ab0:	eb66a938 	bl	1b7ff98 <$DisableExtSoundSource(long)>
        1d5ab4:	e5c45054 	strb	r5, [r4, #84]	; fField84
        1d5ab8:	ea000008 	b	1d5ae0 <TSerialChip16450::ProcessOption(TOption *)+0x1ac>
        1d5abc:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d5ac0:	e1a03004 	mov	r3, r4
        1d5ac4:	e1a02005 	mov	r2, r5
        1d5ac8:	e3a01000 	mov	r1, #0	; 0x0
        1d5acc:	eb67e744 	bl	1bcf7e4 <TCardHandler::$CardSpecific(unsigned long, void *, unsigned long)>
        1d5ad0:	e1a06000 	mov	r6, r0
        1d5ad4:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1d5ad8:	e37c0015 	cmn	ip, #21	; 0x15
        1d5adc:	03e06003 	mvneq	r6, #3	; 0x3
        1d5ae0:	e1a00006 	mov	r0, r6
        1d5ae4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::SysEventNotify(unsigned long)
 * Address: 001d5ae8
 */
TSerialChip16450::SysEventNotify(unsigned long) {
    /*
        1d5ae8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::SetTxDTransceiverEnable(unsigned char)
 * Address: 001d5aec
 */
TSerialChip16450::SetTxDTransceiverEnable(unsigned char) {
    /*
        1d5aec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::GetByteAndStatus(unsigned char *)
 * Address: 001d5af0
 */
TSerialChip16450::GetByteAndStatus(unsigned char *) {
    /*
        1d5af0:	e1a0c00d 	mov	ip, sp
        1d5af4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d5af8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5afc:	e1a04000 	mov	r4, r0
        1d5b00:	e1a05001 	mov	r5, r1
        1d5b04:	ebfffe1c 	bl	1d537c <TSerialChip16450::GetRxErrorStatus(void)>
        1d5b08:	e1a06000 	mov	r6, r0
        1d5b0c:	e1a00004 	mov	r0, r4
        1d5b10:	e3a01003 	mov	r1, #3	; 0x3
        1d5b14:	eb0000fd 	bl	1d5f10 <TSerialChip16450::ReadSerReg(unsigned long)>
        1d5b18:	e5c50000 	strb	r0, [r5]
        1d5b1c:	e1a00006 	mov	r0, r6
        1d5b20:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::SetIntSourceEnable(unsigned long, unsigned char)
 * Address: 001d5b24
 */
TSerialChip16450::SetIntSourceEnable(unsigned long, unsigned char) {
    /*
        1d5b24:	e1a0c00d 	mov	ip, sp
        1d5b28:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d5b2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5b30:	e20230ff 	and	r3, r2, #255	; 0xff
        1d5b34:	e3a04000 	mov	r4, #0	; 0x0
        1d5b38:	e3310040 	teq	r1, #64	; 0x40
        1d5b3c:	1a000008 	bne	1d5b64 <TSerialChip16450::SetIntSourceEnable(unsigned long, unsigned char)+0x40>
        1d5b40:	e5d0104e 	ldrb	r1, [r0, #78]	; fField78
        1d5b44:	e20120fa 	and	r2, r1, #250	; 0xfa
        1d5b48:	e3330000 	teq	r3, #0	; 0x0
        1d5b4c:	120210ff 	andne	r1, r2, #255	; 0xff
        1d5b50:	13812005 	orrne	r2, r1, #5	; 0x5
        1d5b54:	e5c0204e 	strb	r2, [r0, #78]	; fField78
        1d5b58:	e3a01002 	mov	r1, #2	; 0x2
        1d5b5c:	eb0000db 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d5b60:	ea000001 	b	1d5b6c <TSerialChip16450::SetIntSourceEnable(unsigned long, unsigned char)+0x48>
        1d5b64:	e3a04069 	mov	r4, #105	; 0x69
        1d5b68:	e2444c3f 	sub	r4, r4, #16128	; 0x3f00
        1d5b6c:	e1a00004 	mov	r0, r4
        1d5b70:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::AllSent(void)
 * Address: 001d5b74
 */
TSerialChip16450::AllSent(void) {
    /*
        1d5b74:	e1a0c00d 	mov	ip, sp
        1d5b78:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1d5b7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5b80:	eb00004f 	bl	1d5cc4 <TSerialChip16450::CheckLineStatusReg(void)>
        1d5b84:	e2100040 	ands	r0, r0, #64	; 0x40
        1d5b88:	13a00001 	movne	r0, #1	; 0x1
        1d5b8c:	e20000ff 	and	r0, r0, #255	; 0xff
        1d5b90:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::ConfigureForOutput(unsigned char)
 * Address: 001d5b94
 */
TSerialChip16450::ConfigureForOutput(unsigned char) {
    /*
        1d5b94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::SetSerialMode(unsigned long)
 * Address: 001d5b98
 */
TSerialChip16450::SetSerialMode(unsigned long) {
    /*
        1d5b98:	e3a02000 	mov	r2, #0	; 0x0
        1d5b9c:	e3110003 	tst	r1, #3	; 0x3
        1d5ba0:	13a02069 	movne	r2, #105	; 0x69
        1d5ba4:	12422c3f 	subne	r2, r2, #16128	; 0x3f00
        1d5ba8:	1a000004 	bne	1d5bc0 <TSerialChip16450::SetSerialMode(unsigned long)+0x28>
        1d5bac:	e580103c 	str	r1, [r0, #60]	; fField60
        1d5bb0:	e3110008 	tst	r1, #8	; 0x8
        1d5bb4:	03a0100f 	moveq	r1, #15	; 0xf
        1d5bb8:	13a01000 	movne	r1, #0	; 0x0
        1d5bbc:	e5c0104e 	strb	r1, [r0, #78]	; fField78
        1d5bc0:	e1a00002 	mov	r0, r2
        1d5bc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::InitTxDMA(TCircleBuf *, void (*)(void *))
 * Address: 001d5bc8
 */
TSerialChip16450::InitTxDMA(TCircleBuf *, void (*)(void *)) {
    /*
        1d5bc8:	e3a00f5a 	mov	r0, #360	; 0x168
        1d5bcc:	e2400901 	sub	r0, r0, #16384	; 0x4000
        1d5bd0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))
 * Address: 001d5bd4
 */
TSerialChip16450::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long)) {
    /*
        1d5bd4:	e3a00f5a 	mov	r0, #360	; 0x168
        1d5bd8:	e2400901 	sub	r0, r0, #16384	; 0x4000
        1d5bdc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::CardRemoved(void)
 * Address: 001d5be0
 */
TSerialChip16450::CardRemoved(void) {
    /*
        1d5be0:	e1a0c00d 	mov	ip, sp
        1d5be4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d5be8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5bec:	e1a04000 	mov	r4, r0
        1d5bf0:	e3a00001 	mov	r0, #1	; 0x1
        1d5bf4:	e5c40051 	strb	r0, [r4, #81]	; fField81
        1d5bf8:	e5d40052 	ldrb	r0, [r4, #82]	; fField82
        1d5bfc:	e3300000 	teq	r0, #0	; 0x0
        1d5c00:	15940010 	ldrne	r0, [r4, #16]	; fField16
        1d5c04:	13300000 	teqne	r0, #0	; 0x0
        1d5c08:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1d5c0c:	e5d40053 	ldrb	r0, [r4, #83]	; fField83
        1d5c10:	e3300000 	teq	r0, #0	; 0x0
        1d5c14:	0a000005 	beq	1d5c30 <TSerialChip16450::CardRemoved(void)+0x50>
        1d5c18:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d5c1c:	e1a03004 	mov	r3, r4
        1d5c20:	e3a02000 	mov	r2, #0	; 0x0
        1d5c24:	e3a0100c 	mov	r1, #12	; 0xc
        1d5c28:	eb67e6ed 	bl	1bcf7e4 <TCardHandler::$CardSpecific(unsigned long, void *, unsigned long)>
        1d5c2c:	ea000002 	b	1d5c3c <TSerialChip16450::CardRemoved(void)+0x5c>
        1d5c30:	e3a01004 	mov	r1, #4	; 0x4
        1d5c34:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d5c38:	eb67ef1f 	bl	1bd18bc <TCardSocket::$DisableSocketInterrupt(TSocketInt)>
        1d5c3c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d5c40:	e594c018 	ldr	ip, [r4, #24]	; fField24
        1d5c44:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1d5c48:	e1a0f00c 	mov	pc, ip
    */
}

/**
 * Symbol: TSerialChip16450::TxDMAControl(unsigned char)
 * Address: 001d5c4c
 */
TSerialChip16450::TxDMAControl(unsigned char) {
    /*
        1d5c4c:	e3a00f5a 	mov	r0, #360	; 0x168
        1d5c50:	e2400901 	sub	r0, r0, #16384	; 0x4000
        1d5c54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::RxDMAControl(unsigned char)
 * Address: 001d5c58
 */
TSerialChip16450::RxDMAControl(unsigned char) {
    /*
        1d5c58:	e3a00f5a 	mov	r0, #360	; 0x168
        1d5c5c:	e2400901 	sub	r0, r0, #16384	; 0x4000
        1d5c60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::SetSDLCAddress(unsigned char)
 * Address: 001d5c64
 */
TSerialChip16450::SetSDLCAddress(unsigned char) {
    /*
        1d5c64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::ReEnableReceiver(unsigned char)
 * Address: 001d5c68
 */
TSerialChip16450::ReEnableReceiver(unsigned char) {
    /*
        1d5c68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::LinkIsFree(unsigned char)
 * Address: 001d5c6c
 */
TSerialChip16450::LinkIsFree(unsigned char) {
    /*
        1d5c6c:	e3a00000 	mov	r0, #0	; 0x0
        1d5c70:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::SendControlPacket(unsigned char, unsigned char, unsigned char)
 * Address: 001d5c74
 */
TSerialChip16450::SendControlPacket(unsigned char, unsigned char, unsigned char) {
    /*
        1d5c74:	e3a00000 	mov	r0, #0	; 0x0
        1d5c78:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::WaitForPacket(unsigned long)
 * Address: 001d5c7c
 */
TSerialChip16450::WaitForPacket(unsigned long) {
    /*
        1d5c7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::WaitForAllSent(void)
 * Address: 001d5c80
 */
TSerialChip16450::WaitForAllSent(void) {
    /*
        1d5c80:	e1a0c00d 	mov	ip, sp
        1d5c84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d5c88:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5c8c:	e1a04000 	mov	r4, r0
        1d5c90:	e3a05000 	mov	r5, #0	; 0x0
        1d5c94:	ea000004 	b	1d5cac <TSerialChip16450::WaitForAllSent(void)+0x2c>
        1d5c98:	e2855001 	add	r5, r5, #1	; 0x1
        1d5c9c:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1d5ca0:	eb681c61 	bl	1bdce2c <$Sleep(unsigned long)>
        1d5ca4:	e3350010 	teq	r5, #16	; 0x10
        1d5ca8:	0a000003 	beq	1d5cbc <TSerialChip16450::WaitForAllSent(void)+0x3c>
        1d5cac:	e1a00004 	mov	r0, r4
        1d5cb0:	ebffffaf 	bl	1d5b74 <TSerialChip16450::AllSent(void)>
        1d5cb4:	e3300000 	teq	r0, #0	; 0x0
        1d5cb8:	0afffff6 	beq	1d5c98 <TSerialChip16450::WaitForAllSent(void)+0x18>
        1d5cbc:	e3a00000 	mov	r0, #0	; 0x0
        1d5cc0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::CheckLineStatusReg(void)
 * Address: 001d5cc4
 */
TSerialChip16450::CheckLineStatusReg(void) {
    /*
        1d5cc4:	e1a0c00d 	mov	ip, sp
        1d5cc8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d5ccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5cd0:	e1a04000 	mov	r4, r0
        1d5cd4:	e5900030 	ldr	r0, [r0, #48]	; fField48
        1d5cd8:	e3300000 	teq	r0, #0	; 0x0
        1d5cdc:	03a00000 	moveq	r0, #0	; 0x0
        1d5ce0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1d5ce4:	e1a00004 	mov	r0, r4
        1d5ce8:	e3a01006 	mov	r1, #6	; 0x6
        1d5cec:	eb000087 	bl	1d5f10 <TSerialChip16450::ReadSerReg(unsigned long)>
        1d5cf0:	e5d41048 	ldrb	r1, [r4, #72]	; fField72
        1d5cf4:	e201101e 	and	r1, r1, #30	; 0x1e
        1d5cf8:	e5c41048 	strb	r1, [r4, #72]	; fField72
        1d5cfc:	e5d41048 	ldrb	r1, [r4, #72]	; fField72
        1d5d00:	e1810000 	orr	r0, r1, r0
        1d5d04:	e5c40048 	strb	r0, [r4, #72]	; fField72
        1d5d08:	e20000ff 	and	r0, r0, #255	; 0xff
        1d5d0c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::CheckModemStatusReg(void)
 * Address: 001d5d10
 */
TSerialChip16450::CheckModemStatusReg(void) {
    /*
        1d5d10:	e1a0c00d 	mov	ip, sp
        1d5d14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d5d18:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5d1c:	e1a04000 	mov	r4, r0
        1d5d20:	e3a01005 	mov	r1, #5	; 0x5
        1d5d24:	eb000079 	bl	1d5f10 <TSerialChip16450::ReadSerReg(unsigned long)>
        1d5d28:	e5c40049 	strb	r0, [r4, #73]	; fField73
        1d5d2c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::Init(TCardSocket *, TCardHandler *, unsigned char *)
 * Address: 001d5d30
 */
TSerialChip16450::Init(TCardSocket *, TCardHandler *, unsigned char *) {
    /*
        1d5d30:	e1a0c00d 	mov	ip, sp
        1d5d34:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1d5d38:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5d3c:	e1a04000 	mov	r4, r0
        1d5d40:	e1a05001 	mov	r5, r1
        1d5d44:	e1a07002 	mov	r7, r2
        1d5d48:	e1a06003 	mov	r6, r3
        1d5d4c:	e1a00001 	mov	r0, r1
        1d5d50:	eb681c39 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
        1d5d54:	e1a09000 	mov	r9, r0
        1d5d58:	eb68b0ec 	bl	1c02110 <$GetSerialChipRegistry(void)>
        1d5d5c:	e1a0a000 	mov	sl, r0
        1d5d60:	e284105c 	add	r1, r4, #92	; 0x5c
        1d5d64:	e1a00004 	mov	r0, r4
        1d5d68:	e3a02001 	mov	r2, #1	; 0x1
        1d5d6c:	eb680378 	bl	1bd6b54 <$LockHeapRange>
        1d5d70:	e1b08000 	movs	r8, r0
        1d5d74:	1a000021 	bne	1d5e00 <TSerialChip16450::Init(TCardSocket *, TCardHandler *, unsigned char *)+0xd0>
        1d5d78:	e5940038 	ldr	r0, [r4, #56]	; fField56
        1d5d7c:	e3300000 	teq	r0, #0	; 0x0
        1d5d80:	028901c5 	addeq	r0, r9, #1073741873	; 0x40000031
        1d5d84:	02400be3 	subeq	r0, r0, #232448	; 0x38c00
        1d5d88:	024006c9 	subeq	r0, r0, #210763776	; 0xc900000
        1d5d8c:	02800101 	addeq	r0, r0, #1073741824	; 0x40000000
        1d5d90:	05840038 	streq	r0, [r4, #56]	; fField56
        1d5d94:	e2890001 	add	r0, r9, #1	; 0x1
        1d5d98:	e5840058 	str	r0, [r4, #88]	; fField88
        1d5d9c:	e5942038 	ldr	r2, [r4, #56]	; fField56
        1d5da0:	e1a01004 	mov	r1, r4
        1d5da4:	e1a0000a 	mov	r0, sl
        1d5da8:	eb06bc36 	bl	384e88 <PSerialChipRegistry::Register(TSerialChip *, unsigned long)>
        1d5dac:	e1b08000 	movs	r8, r0
        1d5db0:	1a000012 	bne	1d5e00 <TSerialChip16450::Init(TCardSocket *, TCardHandler *, unsigned char *)+0xd0>
        1d5db4:	e1a00007 	mov	r0, r7
        1d5db8:	e5845028 	str	r5, [r4, #40]	; fField40
        1d5dbc:	e5846030 	str	r6, [r4, #48]	; fField48
        1d5dc0:	e5847024 	str	r7, [r4, #36]	; fField36
        1d5dc4:	e1a03004 	mov	r3, r4
        1d5dc8:	e59f6038 	ldr	r6, [pc, #38]	; 1d5e08 <TSerialChip16450::Init(TCardSocket *, TCardHandler *, unsigned char *)+0xd8>
        1d5dcc:	e1a02006 	mov	r2, r6
        1d5dd0:	e3a0100a 	mov	r1, #10	; 0xa
        1d5dd4:	eb67e682 	bl	1bcf7e4 <TCardHandler::$CardSpecific(unsigned long, void *, unsigned long)>
        1d5dd8:	e3a05001 	mov	r5, #1	; 0x1
        1d5ddc:	e3300000 	teq	r0, #0	; 0x0
        1d5de0:	05c45053 	streqb	r5, [r4, #83]	; fField83
        1d5de4:	0a000004 	beq	1d5dfc <TSerialChip16450::Init(TCardSocket *, TCardHandler *, unsigned char *)+0xcc>
        1d5de8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d5dec:	e1a03004 	mov	r3, r4
        1d5df0:	e1a02006 	mov	r2, r6
        1d5df4:	e3a01004 	mov	r1, #4	; 0x4
        1d5df8:	eb680fa1 	bl	1bd9c84 <TCardSocket::$RegisterSocketInterrupt(TSocketInt, long (*)(void *, TCardSocket *), void *)>
        1d5dfc:	e5c45052 	strb	r5, [r4, #82]	; fField82
        1d5e00:	e1a00008 	mov	r0, r8
        1d5e04:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1d5e08:	001d5e0c 	andeqs	r5, sp, ip, lsl #28
    */
}

/**
 * Symbol: TSerialChip16450::SerialInterrupt(TCardSocket *)
 * Address: 001d5e0c
 */
TSerialChip16450::SerialInterrupt(TCardSocket *) {
    /*
        1d5e0c:	e1a0c00d 	mov	ip, sp
        1d5e10:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d5e14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5e18:	e1a04000 	mov	r4, r0
        1d5e1c:	e3a01001 	mov	r1, #1	; 0x1
        1d5e20:	eb00003a 	bl	1d5f10 <TSerialChip16450::ReadSerReg(unsigned long)>
        1d5e24:	e3100001 	tst	r0, #1	; 0x1
        1d5e28:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1d5e2c:	e3a06010 	mov	r6, #16	; 0x10
        1d5e30:	e3a05000 	mov	r5, #0	; 0x0
        1d5e34:	e2100006 	ands	r0, r0, #6	; 0x6
        1d5e38:	0a000021 	beq	1d5ec4 <TSerialChip16450::SerialInterrupt(TCardSocket *)+0xb8>
        1d5e3c:	e3300002 	teq	r0, #2	; 0x2
        1d5e40:	0a000012 	beq	1d5e90 <TSerialChip16450::SerialInterrupt(TCardSocket *)+0x84>
        1d5e44:	e3300004 	teq	r0, #4	; 0x4
        1d5e48:	0a00000a 	beq	1d5e78 <TSerialChip16450::SerialInterrupt(TCardSocket *)+0x6c>
        1d5e4c:	e3300006 	teq	r0, #6	; 0x6
        1d5e50:	1a000012 	bne	1d5ea0 <TSerialChip16450::SerialInterrupt(TCardSocket *)+0x94>
        1d5e54:	e5945020 	ldr	r5, [r4, #32]	; fField32
        1d5e58:	e1a00004 	mov	r0, r4
        1d5e5c:	ebffff98 	bl	1d5cc4 <TSerialChip16450::CheckLineStatusReg(void)>
        1d5e60:	e310000e 	tst	r0, #14	; 0xe
        1d5e64:	1a00000d 	bne	1d5ea0 <TSerialChip16450::SerialInterrupt(TCardSocket *)+0x94>
        1d5e68:	e3100010 	tst	r0, #16	; 0x10
        1d5e6c:	0a00000b 	beq	1d5ea0 <TSerialChip16450::SerialInterrupt(TCardSocket *)+0x94>
        1d5e70:	e5945018 	ldr	r5, [r4, #24]	; fField24
        1d5e74:	ea000009 	b	1d5ea0 <TSerialChip16450::SerialInterrupt(TCardSocket *)+0x94>
        1d5e78:	e594501c 	ldr	r5, [r4, #28]	; fField28
        1d5e7c:	e1a00004 	mov	r0, r4
        1d5e80:	ebffff8f 	bl	1d5cc4 <TSerialChip16450::CheckLineStatusReg(void)>
        1d5e84:	e310000e 	tst	r0, #14	; 0xe
        1d5e88:	15945020 	ldrne	r5, [r4, #32]	; fField32
        1d5e8c:	ea000003 	b	1d5ea0 <TSerialChip16450::SerialInterrupt(TCardSocket *)+0x94>
        1d5e90:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1d5e94:	e3300002 	teq	r0, #2	; 0x2
        1d5e98:	05c4604f 	streqb	r6, [r4, #79]	; fField79
        1d5e9c:	e5945014 	ldr	r5, [r4, #20]	; fField20
        1d5ea0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d5ea4:	e1a0e00f 	mov	lr, pc
        1d5ea8:	e1a0f005 	mov	pc, r5
        1d5eac:	e1a00004 	mov	r0, r4
        1d5eb0:	e3a01001 	mov	r1, #1	; 0x1
        1d5eb4:	eb000015 	bl	1d5f10 <TSerialChip16450::ReadSerReg(unsigned long)>
        1d5eb8:	e3100001 	tst	r0, #1	; 0x1
        1d5ebc:	0affffdb 	beq	1d5e30 <TSerialChip16450::SerialInterrupt(TCardSocket *)+0x24>
        1d5ec0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1d5ec4:	e1a00004 	mov	r0, r4
        1d5ec8:	ebffff90 	bl	1d5d10 <TSerialChip16450::CheckModemStatusReg(void)>
        1d5ecc:	eaffffe7 	b	1d5e70 <TSerialChip16450::SerialInterrupt(TCardSocket *)+0x64>
    */
}

/**
 * Symbol: TSerialChip16450::WriteSerReg(unsigned long, unsigned char)
 * Address: 001d5ed0
 */
TSerialChip16450::WriteSerReg(unsigned long, unsigned char) {
    /*
        1d5ed0:	e92d4000 	stmdb	sp!, {lr}
        1d5ed4:	e202c0ff 	and	ip, r2, #255	; 0xff
        1d5ed8:	e590302c 	ldr	r3, [r0, #44]	; fField44
        1d5edc:	e1a0e003 	mov	lr, r3
        1d5ee0:	e5932000 	ldr	r2, [r3]
        1d5ee4:	e59ee000 	ldr	lr, [lr]
        1d5ee8:	e04ee002 	sub	lr, lr, r2
        1d5eec:	e35e0004 	cmp	lr, #4	; 0x4
        1d5ef0:	2a000003 	bcs	1d5f04 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)+0x34>
        1d5ef4:	e593e000 	ldr	lr, [r3]
        1d5ef8:	e04ee002 	sub	lr, lr, r2
        1d5efc:	e35e0004 	cmp	lr, #4	; 0x4
        1d5f00:	3afffffb 	bcc	1d5ef4 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)+0x24>
        1d5f04:	e5900030 	ldr	r0, [r0, #48]	; fField48
        1d5f08:	e7c0c001 	strb	ip, [r0, r1]
        1d5f0c:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TSerialChip16450::ReadSerReg(unsigned long)
 * Address: 001d5f10
 */
TSerialChip16450::ReadSerReg(unsigned long) {
    /*
        1d5f10:	e590202c 	ldr	r2, [r0, #44]	; fField44
        1d5f14:	e5923000 	ldr	r3, [r2]
        1d5f18:	e592c000 	ldr	ip, [r2]
        1d5f1c:	e04cc003 	sub	ip, ip, r3
        1d5f20:	e35c0004 	cmp	ip, #4	; 0x4
        1d5f24:	2a000003 	bcs	1d5f38 <TSerialChip16450::ReadSerReg(unsigned long)+0x28>
        1d5f28:	e592c000 	ldr	ip, [r2]
        1d5f2c:	e04cc003 	sub	ip, ip, r3
        1d5f30:	e35c0004 	cmp	ip, #4	; 0x4
        1d5f34:	3afffffb 	bcc	1d5f28 <TSerialChip16450::ReadSerReg(unsigned long)+0x18>
        1d5f38:	e5900030 	ldr	r0, [r0, #48]	; fField48
        1d5f3c:	e7d00001 	ldrb	r0, [r0, r1]
        1d5f40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::InstallChipHandler(void *, SCCChannelInts *)
 * Address: 001d5f44
 */
TSerialChip16450::InstallChipHandler(void *, SCCChannelInts *) {
    /*
        1d5f44:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1d5f48:	e3330000 	teq	r3, #0	; 0x0
        1d5f4c:	13a00e9b 	movne	r0, #2480	; 0x9b0
        1d5f50:	12400a05 	subne	r0, r0, #20480	; 0x5000
        1d5f54:	11a0f00e 	movne	pc, lr
        1d5f58:	e5d03051 	ldrb	r3, [r0, #81]	; fField81
        1d5f5c:	e3330000 	teq	r3, #0	; 0x0
        1d5f60:	13e00005 	mvnne	r0, #5	; 0x5
        1d5f64:	12400c29 	subne	r0, r0, #10496	; 0x2900
        1d5f68:	11a0f00e 	movne	pc, lr
        1d5f6c:	e1a0c00d 	mov	ip, sp
        1d5f70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d5f74:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5f78:	e5801010 	str	r1, [r0, #16]	; fField16
        1d5f7c:	e2801014 	add	r1, r0, #20	; 0x14
        1d5f80:	e892500c 	ldmia	r2, {r2, r3, ip, lr}
        1d5f84:	e881500c 	stmia	r1, {r2, r3, ip, lr}
        1d5f88:	e3a04000 	mov	r4, #0	; 0x0
        1d5f8c:	e580403c 	str	r4, [r0, #60]	; fField60
        1d5f90:	ebfffd74 	bl	1d5568 <TSerialChip16450::ResetState(void)>
        1d5f94:	e1a00004 	mov	r0, r4
        1d5f98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::RemoveChipHandler(void *)
 * Address: 001d5f9c
 */
TSerialChip16450::RemoveChipHandler(void *) {
    /*
        1d5f9c:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1d5fa0:	e1320001 	teq	r2, r1
        1d5fa4:	13e00051 	mvnne	r0, #81	; 0x51
        1d5fa8:	12400c46 	subne	r0, r0, #17920	; 0x4600
        1d5fac:	11a0f00e 	movne	pc, lr
        1d5fb0:	e3a01000 	mov	r1, #0	; 0x0
        1d5fb4:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1d5fb8:	e1a00001 	mov	r0, r1
        1d5fbc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialChip16450::PutByte(unsigned char)
 * Address: 001d5fc0
 */
TSerialChip16450::PutByte(unsigned char) {
    /*
        1d5fc0:	e1a0c00d 	mov	ip, sp
        1d5fc4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d5fc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5fcc:	e1a04000 	mov	r4, r0
        1d5fd0:	e20120ff 	and	r2, r1, #255	; 0xff
        1d5fd4:	e3a01003 	mov	r1, #3	; 0x3
        1d5fd8:	ebffffbc 	bl	1d5ed0 <TSerialChip16450::WriteSerReg(unsigned long, unsigned char)>
        1d5fdc:	e5d4004f 	ldrb	r0, [r4, #79]	; fField79
        1d5fe0:	e3300000 	teq	r0, #0	; 0x0
        1d5fe4:	12400001 	subne	r0, r0, #1	; 0x1
        1d5fe8:	15c4004f 	strneb	r0, [r4, #79]	; fField79
        1d5fec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialChip16450::ResetTxBEmpty(void)
 * Address: 001d5ff0
 */
TSerialChip16450::ResetTxBEmpty(void) {
    /*
        1d5ff0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__16TSerialChip16450SFv
 * Address: 003848d0
 */
void TSerialChip16450::ClassInfo() {
    /*
        3848d0:	e24f0044 	sub	r0, pc, #68	; 0x44
        3848d4:	e1a0f00e 	mov	pc, lr
        3848d8:	e3a00000 	mov	r0, #0	; 0x0
        3848dc:	e1a0f00e 	mov	pc, lr
        3848e0:	54536572 	ldrplb	r6, [r3], -#1394
        3848e4:	69616c43 	stmvsdb	r1!, {r0, r1, r6, sl, fp, sp, lr}^
        3848e8:	68697031 	stmvsda	r9!, {r0, r4, r5, ip, sp, lr}^
        3848ec:	36343530 	undefined
        3848f0:	00545365 	subeqs	r5, r4, r5, ror #6
        3848f4:	7269616c 	rsbvc	r6, r9, #27	; 0x1b
        3848f8:	43686970 	cmnmi	r8, #1835008	; 0x1c0000
        3848fc:	0076322e 	rsbeqs	r3, r6, lr, lsr #4
        384900:	30000000 	andcc	r0, r0, r0
        384904:	00000000 	andeq	r0, r0, r0
        384908:	eafffff0 	b	3848d0 <ClassInfo__16TSerialChip16450SFv>
        38490c:	eaf94265 	b	1d52a8 <TSerialChip16450::New(void)>
        384910:	eaf943e4 	b	1d58a8 <TSerialChip16450::Delete(void)>
        384914:	eaf9458a 	b	1d5f44 <TSerialChip16450::InstallChipHandler(void *, SCCChannelInts *)>
        384918:	eaf9459f 	b	1d5f9c <TSerialChip16450::RemoveChipHandler(void *)>
        38491c:	eaf945a7 	b	1d5fc0 <TSerialChip16450::PutByte(unsigned char)>
        384920:	eaf945b2 	b	1d5ff0 <TSerialChip16450::ResetTxBEmpty(void)>
        384924:	eaf94276 	b	1d5304 <TSerialChip16450::GetByte(void)>
        384928:	eaf94277 	b	1d530c <TSerialChip16450::TxBufEmpty(void)>
        38492c:	eaf9428a 	b	1d535c <TSerialChip16450::RxBufFull(void)>
        384930:	eaf94291 	b	1d537c <TSerialChip16450::GetRxErrorStatus(void)>
        384934:	eaf942a2 	b	1d53c4 <TSerialChip16450::GetSerialStatus(void)>
        384938:	eaf942c3 	b	1d544c <TSerialChip16450::ResetSerialStatus(void)>
        38493c:	eaf942c6 	b	1d545c <TSerialChip16450::SetSerialOutputs(unsigned long)>
        384940:	eaf942d0 	b	1d5488 <TSerialChip16450::ClearSerialOutputs(unsigned long)>
        384944:	eaf942da 	b	1d54b4 <TSerialChip16450::GetSerialOutputs(void)>
        384948:	eaf942e5 	b	1d54e4 <TSerialChip16450::PowerOff(void)>
        38494c:	eaf94316 	b	1d55ac <TSerialChip16450::PowerOn(void)>
        384950:	eaf94332 	b	1d5620 <TSerialChip16450::PowerIsOn(void)>
        384954:	eaf94333 	b	1d5628 <TSerialChip16450::SetInterruptEnable(unsigned char)>
        384958:	eaf94338 	b	1d5640 <TSerialChip16450::Reset(void)>
        38495c:	eaf94339 	b	1d5648 <TSerialChip16450::SetBreak(unsigned char)>
        384960:	eaf94340 	b	1d5668 <TSerialChip16450::SetSpeed(unsigned long)>
        384964:	eaf94358 	b	1d56cc <TSerialChip16450::SetIOParms(TCMOSerialIOParms *)>
        384968:	eaf94376 	b	1d5748 <TSerialChip16450::Reconfigure(void)>
        38496c:	eaf944ef 	b	1d5d30 <TSerialChip16450::Init(TCardSocket *, TCardHandler *, unsigned char *)>
        384970:	eaf9449a 	b	1d5be0 <TSerialChip16450::CardRemoved(void)>
        384974:	ea5b75fd 	b	1a62170 <TSerialChip16450::$GetFeatures(void)>
        384978:	ea5b7a00 	b	1a63180 <TSerialChip16450::$InitByOption(TOption *)>
        38497c:	ea5b7a04 	b	1a63194 <TSerialChip16450::$ProcessOption(TOption *)>
        384980:	ea5b7a0d 	b	1a631bc <TSerialChip16450::$SetSerialMode(unsigned long)>
        384984:	eaf94457 	b	1d5ae8 <TSerialChip16450::SysEventNotify(unsigned long)>
        384988:	eaf94457 	b	1d5aec <TSerialChip16450::SetTxDTransceiverEnable(unsigned char)>
        38498c:	ea5b75f2 	b	1a6215c <TSerialChip16450::$GetByteAndStatus(unsigned char *)>
        384990:	ea5b7a08 	b	1a631b8 <TSerialChip16450::$SetIntSourceEnable(unsigned long, unsigned char)>
        384994:	eaf94476 	b	1d5b74 <TSerialChip16450::AllSent(void)>
        384998:	eaf9447d 	b	1d5b94 <TSerialChip16450::ConfigureForOutput(unsigned char)>
        38499c:	eaf94489 	b	1d5bc8 <TSerialChip16450::InitTxDMA(TCircleBuf *, void (*)(void *))>
        3849a0:	eaf9448b 	b	1d5bd4 <TSerialChip16450::InitRxDMA(TCircleBuf *, unsigned long, void (*)(void *, unsigned long))>
        3849a4:	eaf944a8 	b	1d5c4c <TSerialChip16450::TxDMAControl(unsigned char)>
        3849a8:	eaf944aa 	b	1d5c58 <TSerialChip16450::RxDMAControl(unsigned char)>
        3849ac:	eaf944ac 	b	1d5c64 <TSerialChip16450::SetSDLCAddress(unsigned char)>
        3849b0:	eaf944ac 	b	1d5c68 <TSerialChip16450::ReEnableReceiver(unsigned char)>
        3849b4:	eaf944ac 	b	1d5c6c <TSerialChip16450::LinkIsFree(unsigned char)>
        3849b8:	eaf944ad 	b	1d5c74 <TSerialChip16450::SendControlPacket(unsigned char, unsigned char, unsigned char)>
        3849bc:	eaf944ae 	b	1d5c7c <TSerialChip16450::WaitForPacket(unsigned long)>
        3849c0:	ea5b7e19 	b	1a6422c <TSerialChip16450::$WaitForAllSent(void)>
        3849c4:	00000000 	andeq	r0, r0, r0
        3849c8:	00000048 	andeq	r0, r0, r8, asr #32
        3849cc:	00000057 	andeq	r0, r0, r7, asr r0
        3849d0:	0000005f 	andeq	r0, r0, pc, asr r0
        3849d4:	00000064 	andeq	r0, r0, r4, rrx
        3849d8:	00000120 	andeq	r0, r0, r0, lsr #2
        3849dc:	eaf94f9e 	b	1d885c <Sizeof__18TSerialChipVoyagerSFv>
        3849e8:	eaf950e8 	b	1d8d90 <TSerialChipVoyager::New(void)>
        3849ec:	eaf95206 	b	1d920c <TSerialChipVoyager::Delete(void)>
        3849f0:	00030000 	andeq	r0, r3, r0
        3849fc:	ea000001 	b	384a08 <ClassInfo__18TSerialChipVoyagerSFv+0x8>
    */
}

