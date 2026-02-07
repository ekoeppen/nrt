#include "include/TStoreReadPipe.h"

/**
 * Symbol: TStoreReadPipe::DecompCallback(void *, long *, unsigned char *)
 * Address: 002dd230
 */
TStoreReadPipe::DecompCallback(void *, long *, unsigned char *) {
    /*
        2dd230:	e1a0c00d 	mov	ip, sp
        2dd234:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2dd238:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd23c:	e1a04000 	mov	r4, r0
        2dd240:	e1a05002 	mov	r5, r2
        2dd244:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2dd248:	e5922000 	ldr	r2, [r2]
        2dd24c:	e3a06000 	mov	r6, #0	; 0x0
        2dd250:	e1500002 	cmp	r0, r2
        2dd254:	c5c36000 	strgtb	r6, [r3]
        2dd258:	d5850000 	strle	r0, [r5]
        2dd25c:	d3a00001 	movle	r0, #1	; 0x1
        2dd260:	d5c30000 	strleb	r0, [r3]
        2dd264:	e8941001 	ldmia	r4, {r0, ip}
        2dd268:	e594200c 	ldr	r2, [r4, #12]	; fField12
        2dd26c:	e5953000 	ldr	r3, [r5]
        2dd270:	e92d0008 	stmdb	sp!, {r3}
        2dd274:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2dd278:	e1a03001 	mov	r3, r1
        2dd27c:	e1a0100c 	mov	r1, ip
        2dd280:	eb6093ae 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2dd284:	e28dd004 	add	sp, sp, #4	; 0x4
        2dd288:	e3300000 	teq	r0, #0	; 0x0
        2dd28c:	1b5d7ee5 	blne	1a3ce28 <$_OSErr(long)>
        2dd290:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dd294:	e5951000 	ldr	r1, [r5]
        2dd298:	e0400001 	sub	r0, r0, r1
        2dd29c:	e5840010 	str	r0, [r4, #16]	; fField16
        2dd2a0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2dd2a4:	e5951000 	ldr	r1, [r5]
        2dd2a8:	e0800001 	add	r0, r0, r1
        2dd2ac:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        2dd2b0:	e1a00006 	mov	r0, r6
        2dd2b4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreReadPipe::__ct(TStoreWrapper *, CompressionType)
 * Address: 002dd2d0
 */
TStoreReadPipe::TStoreReadPipe(TStoreWrapper *, CompressionType) {
    /*
        2dd2d0:	e1a0c00d 	mov	ip, sp
        2dd2d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2dd2d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd2dc:	e1b04000 	movs	r4, r0
        2dd2e0:	e1a06001 	mov	r6, r1
        2dd2e4:	e1a05002 	mov	r5, r2
        2dd2e8:	1a000005 	bne	2dd304 <TStoreReadPipe::__ct(TStoreWrapper *, CompressionType)+0x34>
        2dd2ec:	e3a00e12 	mov	r0, #288	; 0x120
        2dd2f0:	eb63c510 	bl	1bce738 <$__nw(unsigned int)>
        2dd2f4:	e1b04000 	movs	r4, r0
        2dd2f8:	1a000001 	bne	2dd304 <TStoreReadPipe::__ct(TStoreWrapper *, CompressionType)+0x34>
        2dd2fc:	e1a00004 	mov	r0, r4
        2dd300:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2dd304:	e3e00000 	mvn	r0, #0	; 0x0
        2dd308:	e5846000 	str	r6, [r4]
        2dd30c:	e3a06000 	mov	r6, #0	; 0x0
        2dd310:	e3350000 	teq	r5, #0	; 0x0
        2dd314:	e5840004 	str	r0, [r4, #4]	; fField4
        2dd318:	0a000006 	beq	2dd338 <TStoreReadPipe::__ct(TStoreWrapper *, CompressionType)+0x68>
        2dd31c:	e1a02004 	mov	r2, r4
        2dd320:	e59f100c 	ldr	r1, [pc, #c]	; 2dd334 <TStoreReadPipe::__ct(TStoreWrapper *, CompressionType)+0x64>
        2dd324:	e1a00005 	mov	r0, r5
        2dd328:	eb5db064 	bl	1a494c0 <$NewDecompressor(CompressionType, long (*)(unsigned long, void *, long *, unsigned char *), unsigned long)>
        2dd32c:	e5840008 	str	r0, [r4, #8]	; fField8
        2dd330:	ea000001 	b	2dd33c <TStoreReadPipe::__ct(TStoreWrapper *, CompressionType)+0x6c>
        2dd334:	01a3dec8 	moveq	sp, r8, asr #29
        2dd338:	e5846008 	str	r6, [r4, #8]	; fField8
        2dd33c:	e284001c 	add	r0, r4, #28	; 0x1c
        2dd340:	e584011c 	str	r0, [r4, #284]	; fField284
        2dd344:	e584600c 	str	r6, [r4, #12]	; fField12
        2dd348:	e5846010 	str	r6, [r4, #16]	; fField16
        2dd34c:	e5846014 	str	r6, [r4, #20]	; fField20
        2dd350:	e5846018 	str	r6, [r4, #24]	; fField24
        2dd354:	eaffffe8 	b	2dd2fc <TStoreReadPipe::__ct(TStoreWrapper *, CompressionType)+0x2c>
    */
}

/**
 * Symbol: TStoreReadPipe::__ct(char *, long)
 * Address: 002dd358
 */
TStoreReadPipe::TStoreReadPipe(char *, long) {
    /*
        2dd358:	e1a0c00d 	mov	ip, sp
        2dd35c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dd360:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd364:	e1a05001 	mov	r5, r1
        2dd368:	e1a04002 	mov	r4, r2
        2dd36c:	e3300000 	teq	r0, #0	; 0x0
        2dd370:	1a000003 	bne	2dd384 <TStoreReadPipe::__ct(char *, long)+0x2c>
        2dd374:	e3a00e12 	mov	r0, #288	; 0x120
        2dd378:	eb63c4ee 	bl	1bce738 <$__nw(unsigned int)>
        2dd37c:	e3300000 	teq	r0, #0	; 0x0
        2dd380:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2dd384:	e3a01000 	mov	r1, #0	; 0x0
        2dd388:	e3e02000 	mvn	r2, #0	; 0x0
        2dd38c:	e8800006 	stmia	r0, {r1, r2}
        2dd390:	e580511c 	str	r5, [r0, #284]	; fField284
        2dd394:	e2800008 	add	r0, r0, #8	; 0x8
        2dd398:	e8800012 	stmia	r0, {r1, r4}
        2dd39c:	e580100c 	str	r1, [r0, #12]	; fField12
        2dd3a0:	e5804008 	str	r4, [r0, #8]	; fField8
        2dd3a4:	e5804010 	str	r4, [r0, #16]	; fField16
        2dd3a8:	e2400008 	sub	r0, r0, #8	; 0x8
        2dd3ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreReadPipe::__dt(void)
 * Address: 002dd3b0
 */
TStoreReadPipe::~TStoreReadPipe(void) {
    /*
        2dd3b0:	e1a0c00d 	mov	ip, sp
        2dd3b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dd3b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd3bc:	e1a04000 	mov	r4, r0
        2dd3c0:	e1a05001 	mov	r5, r1
        2dd3c4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2dd3c8:	e3300000 	teq	r0, #0	; 0x0
        2dd3cc:	1b02b0d3 	blne	389720 <TCallbackDecompressor::Delete(void)>
        2dd3d0:	e3150001 	tst	r5, #1	; 0x1
        2dd3d4:	11a00004 	movne	r0, r4
        2dd3d8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2dd3dc:	1a63c0bf 	bne	1bcd6e0 <$__dl(void *)>
        2dd3e0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreReadPipe::SetPSSID(unsigned long)
 * Address: 002dd3e4
 */
TStoreReadPipe::SetPSSID(unsigned long) {
    /*
        2dd3e4:	e1a0c00d 	mov	ip, sp
        2dd3e8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2dd3ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd3f0:	e5801004 	str	r1, [r0, #4]	; fField4
        2dd3f4:	e5903000 	ldr	r3, [r0]
        2dd3f8:	e2802010 	add	r2, r0, #16	; 0x10
        2dd3fc:	e5b3007c 	ldr	r0, [r3, #124]!	; fField124
        2dd400:	eb60763e 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        2dd404:	e3300000 	teq	r0, #0	; 0x0
        2dd408:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        2dd40c:	1a5d7e85 	bne	1a3ce28 <$_OSErr(long)>
        2dd410:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStoreReadPipe::SetPosition(long)
 * Address: 002dd414
 */
TStoreReadPipe::SetPosition(long) {
    /*
        2dd414:	e280300c 	add	r3, r0, #12	; 0xc
        2dd418:	e893000c 	ldmia	r3, {r2, r3}
        2dd41c:	e0422001 	sub	r2, r2, r1
        2dd420:	e0832002 	add	r2, r3, r2
        2dd424:	e280000c 	add	r0, r0, #12	; 0xc
        2dd428:	e8800006 	stmia	r0, {r1, r2}
        2dd42c:	e240000c 	sub	r0, r0, #12	; 0xc
        2dd430:	e3a01000 	mov	r1, #0	; 0x0
        2dd434:	e5801014 	str	r1, [r0, #20]	; fField20
        2dd438:	e5a01018 	str	r1, [r0, #24]!	; fField24
        2dd43c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreReadPipe::ReadFromStore(char *, long)
 * Address: 002dd440
 */
TStoreReadPipe::ReadFromStore(char *, long) {
    /*
        2dd440:	e1a0c00d 	mov	ip, sp
        2dd444:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        2dd448:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd44c:	e51b1018 	ldr	r1, [fp, -#24]	; fField24
        2dd450:	e5910008 	ldr	r0, [r1, #8]	; fField8
        2dd454:	e3300000 	teq	r0, #0	; 0x0
        2dd458:	0a000008 	beq	2dd480 <TStoreReadPipe::ReadFromStore(char *, long)+0x40>
        2dd45c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2dd460:	e1a0300d 	mov	r3, sp
        2dd464:	e24b2010 	sub	r2, fp, #16	; 0x10
        2dd468:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
        2dd46c:	eb02b0b8 	bl	389754 <TCallbackDecompressor::ReadChunk(void *, long *, unsigned char *)>
        2dd470:	e3300000 	teq	r0, #0	; 0x0
        2dd474:	1b5d7e6b 	blne	1a3ce28 <$_OSErr(long)>
        2dd478:	e28dd004 	add	sp, sp, #4	; 0x4
        2dd47c:	ea000019 	b	2dd4e8 <TStoreReadPipe::ReadFromStore(char *, long)+0xa8>
        2dd480:	e5b10010 	ldr	r0, [r1, #16]!	; fField16
        2dd484:	e51b1010 	ldr	r1, [fp, -#16]	; fField16
        2dd488:	e1500001 	cmp	r0, r1
        2dd48c:	b50b0010 	strlt	r0, [fp, -#16]	; fField16
        2dd490:	e51b2018 	ldr	r2, [fp, -#24]	; fField24
        2dd494:	e8920003 	ldmia	r2, {r0, r1}
        2dd498:	e592200c 	ldr	r2, [r2, #12]	; fField12
        2dd49c:	e51b3010 	ldr	r3, [fp, -#16]	; fField16
        2dd4a0:	e51bc014 	ldr	ip, [fp, -#20]	; fField20
        2dd4a4:	e92d0008 	stmdb	sp!, {r3}
        2dd4a8:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2dd4ac:	e1a0300c 	mov	r3, ip
        2dd4b0:	eb609322 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        2dd4b4:	e28dd004 	add	sp, sp, #4	; 0x4
        2dd4b8:	e3300000 	teq	r0, #0	; 0x0
        2dd4bc:	1b5d7e59 	blne	1a3ce28 <$_OSErr(long)>
        2dd4c0:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2dd4c4:	e5901010 	ldr	r1, [r0, #16]	; fField16
        2dd4c8:	e51b2010 	ldr	r2, [fp, -#16]	; fField16
        2dd4cc:	e0411002 	sub	r1, r1, r2
        2dd4d0:	e5a01010 	str	r1, [r0, #16]!	; fField16
        2dd4d4:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        2dd4d8:	e590100c 	ldr	r1, [r0, #12]	; fField12
        2dd4dc:	e51b2010 	ldr	r2, [fp, -#16]	; fField16
        2dd4e0:	e0811002 	add	r1, r1, r2
        2dd4e4:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        2dd4e8:	e51b0010 	ldr	r0, [fp, -#16]	; fField16
        2dd4ec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStoreReadPipe::FillBuffer(void)
 * Address: 002dd4f0
 */
TStoreReadPipe::FillBuffer(void) {
    /*
        2dd4f0:	e1a0c00d 	mov	ip, sp
        2dd4f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dd4f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd4fc:	e1a04000 	mov	r4, r0
        2dd500:	e3a02c01 	mov	r2, #256	; 0x100
        2dd504:	e590111c 	ldr	r1, [r0, #284]	; fField284
        2dd508:	eb5d9317 	bl	1a4216c <TStoreReadPipe::$ReadFromStore(char *, long)>
        2dd50c:	e3a01000 	mov	r1, #0	; 0x0
        2dd510:	e5a41014 	str	r1, [r4, #20]!	; fField20
        2dd514:	e5840004 	str	r0, [r4, #4]	; fField4
        2dd518:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreReadPipe::Read(char *, long)
 * Address: 002dd51c
 */
TStoreReadPipe::Read(char *, long) {
    /*
        2dd51c:	e1a0c00d 	mov	ip, sp
        2dd520:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2dd524:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd528:	e1a04000 	mov	r4, r0
        2dd52c:	e1a06001 	mov	r6, r1
        2dd530:	e1a05002 	mov	r5, r2
        2dd534:	e2801014 	add	r1, r0, #20	; 0x14
        2dd538:	e8910003 	ldmia	r1, {r0, r1}
        2dd53c:	e0417000 	sub	r7, r1, r0
        2dd540:	e1520007 	cmp	r2, r7
        2dd544:	d594111c 	ldrle	r1, [r4, #284]	; fField284
        2dd548:	d0810000 	addle	r0, r1, r0
        2dd54c:	da000015 	ble	2dd5a8 <TStoreReadPipe::Read(char *, long)+0x8c>
        2dd550:	e3570000 	cmp	r7, #0	; 0x0
        2dd554:	da000009 	ble	2dd580 <TStoreReadPipe::Read(char *, long)+0x64>
        2dd558:	e594111c 	ldr	r1, [r4, #284]	; fField284
        2dd55c:	e0810000 	add	r0, r1, r0
        2dd560:	e1a02007 	mov	r2, r7
        2dd564:	e1a01006 	mov	r1, r6
        2dd568:	eb640679 	bl	1bdef54 <$BlockMove>
        2dd56c:	e0866007 	add	r6, r6, r7
        2dd570:	e0455007 	sub	r5, r5, r7
        2dd574:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dd578:	e0800007 	add	r0, r0, r7
        2dd57c:	e5840014 	str	r0, [r4, #20]	; fField20
        2dd580:	e3550c01 	cmp	r5, #256	; 0x100
        2dd584:	ba000004 	blt	2dd59c <TStoreReadPipe::Read(char *, long)+0x80>
        2dd588:	e1a02005 	mov	r2, r5
        2dd58c:	e1a01006 	mov	r1, r6
        2dd590:	e1a00004 	mov	r0, r4
        2dd594:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2dd598:	ea5d92f3 	b	1a4216c <TStoreReadPipe::$ReadFromStore(char *, long)>
        2dd59c:	e1a00004 	mov	r0, r4
        2dd5a0:	eb5d8660 	bl	1a3ef28 <TStoreReadPipe::$FillBuffer(void)>
        2dd5a4:	e594011c 	ldr	r0, [r4, #284]	; fField284
        2dd5a8:	e1a02005 	mov	r2, r5
        2dd5ac:	e1a01006 	mov	r1, r6
        2dd5b0:	eb640667 	bl	1bdef54 <$BlockMove>
        2dd5b4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dd5b8:	e0800005 	add	r0, r0, r5
        2dd5bc:	e5a40014 	str	r0, [r4, #20]!	; fField20
        2dd5c0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreReadPipe::Skip(long)
 * Address: 002dd5c4
 */
TStoreReadPipe::Skip(long) {
    /*
        2dd5c4:	e1a0c00d 	mov	ip, sp
        2dd5c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dd5cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd5d0:	e1a05000 	mov	r5, r0
        2dd5d4:	e1a04001 	mov	r4, r1
        2dd5d8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2dd5dc:	e5951014 	ldr	r1, [r5, #20]	; fField20
        2dd5e0:	e0400001 	sub	r0, r0, r1
        2dd5e4:	e1540000 	cmp	r4, r0
        2dd5e8:	d0810004 	addle	r0, r1, r4
        2dd5ec:	da00000e 	ble	2dd62c <TStoreReadPipe::Skip(long)+0x68>
        2dd5f0:	e3500000 	cmp	r0, #0	; 0x0
        2dd5f4:	c0444000 	subgt	r4, r4, r0
        2dd5f8:	c0810000 	addgt	r0, r1, r0
        2dd5fc:	c5850014 	strgt	r0, [r5, #20]	; fField20
        2dd600:	e3540c01 	cmp	r4, #256	; 0x100
        2dd604:	ba000004 	blt	2dd61c <TStoreReadPipe::Skip(long)+0x58>
        2dd608:	e1a00005 	mov	r0, r5
        2dd60c:	eb5d8645 	bl	1a3ef28 <TStoreReadPipe::$FillBuffer(void)>
        2dd610:	e2444c01 	sub	r4, r4, #256	; 0x100
        2dd614:	e3540c01 	cmp	r4, #256	; 0x100
        2dd618:	aafffffa 	bge	2dd608 <TStoreReadPipe::Skip(long)+0x44>
        2dd61c:	e1a00005 	mov	r0, r5
        2dd620:	eb5d8640 	bl	1a3ef28 <TStoreReadPipe::$FillBuffer(void)>
        2dd624:	e5950014 	ldr	r0, [r5, #20]	; fField20
        2dd628:	e0800004 	add	r0, r0, r4
        2dd62c:	e5a50014 	str	r0, [r5, #20]!	; fField20
        2dd630:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2dd634:	e1a0c00d 	mov	ip, sp
        2dd638:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dd63c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd640:	e1a04000 	mov	r4, r0
        2dd644:	e2802014 	add	r2, r0, #20	; 0x14
        2dd648:	e8920005 	ldmia	r2, {r0, r2}
        2dd64c:	e0422000 	sub	r2, r2, r0
        2dd650:	e3520001 	cmp	r2, #1	; 0x1
        2dd654:	3a000006 	bcc	2dd674 <TStoreReadPipe::operator>>(unsigned char &)+0x40>
        2dd658:	e594211c 	ldr	r2, [r4, #284]	; fField284
        2dd65c:	e7d20000 	ldrb	r0, [r2, r0]
        2dd660:	e5c10000 	strb	r0, [r1]
        2dd664:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dd668:	e2800001 	add	r0, r0, #1	; 0x1
        2dd66c:	e5840014 	str	r0, [r4, #20]	; fField20
        2dd670:	ea000002 	b	2dd680 <TStoreReadPipe::operator>>(unsigned char &)+0x4c>
        2dd674:	e1a00004 	mov	r0, r4
        2dd678:	e3a02001 	mov	r2, #1	; 0x1
        2dd67c:	eb5d92b6 	bl	1a4215c <TStoreReadPipe::$Read(char *, long)>
        2dd680:	e1a00004 	mov	r0, r4
        2dd684:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreReadPipe::SkipUByte(void)
 * Address: 002dd720
 */
TStoreReadPipe::SkipUByte(void) {
    /*
        2dd720:	e2802014 	add	r2, r0, #20	; 0x14
        2dd724:	e8920006 	ldmia	r2, {r1, r2}
        2dd728:	e0422001 	sub	r2, r2, r1
        2dd72c:	e3520001 	cmp	r2, #1	; 0x1
        2dd730:	33a01001 	movcc	r1, #1	; 0x1
        2dd734:	3a5daf63 	bcc	1a494c8 <TStoreReadPipe::$Skip(long)>
        2dd738:	22811001 	addcs	r1, r1, #1	; 0x1
        2dd73c:	25a01014 	strcs	r1, [r0, #20]!	; fField20
        2dd740:	e1a0f00e 	mov	pc, lr
    */
}

