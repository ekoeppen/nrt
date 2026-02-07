#include "include/TForkWorld.h"

/**
 * Symbol: TForkWorld::__ct(void)
 * Address: 000cb188
 */
TForkWorld::TForkWorld(void) {
    /*
         cb188:	e1a0c00d 	mov	ip, sp
         cb18c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         cb190:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb194:	e1b04000 	movs	r4, r0
         cb198:	1a000003 	bne	cb1ac <TForkWorld::__ct(void)+0x24>
         cb19c:	e3a00030 	mov	r0, #48	; 0x30
         cb1a0:	eb6c0d64 	bl	1bce738 <$__nw(unsigned int)>
         cb1a4:	e1b04000 	movs	r4, r0
         cb1a8:	0a000012 	beq	cb1f8 <TForkWorld::__ct(void)+0x70>
         cb1ac:	e1a00004 	mov	r0, r4
         cb1b0:	eb6c052e 	bl	1bcc670 <TUTaskWorld::$__ct(void)>
         cb1b4:	e59f0044 	ldr	r0, [pc, #44]	; cb200 <TForkWorld::__ct(void)+0x78>	; fField44
         cb1b8:	e3a01001 	mov	r1, #1	; 0x1
         cb1bc:	e5840000 	str	r0, [r4]
         cb1c0:	e5c4101c 	strb	r1, [r4, #28]	; fField28
         cb1c4:	e5c4101d 	strb	r1, [r4, #29]	; fField29
         cb1c8:	e3a00000 	mov	r0, #0	; 0x0
         cb1cc:	e5c4001e 	strb	r0, [r4, #30]	; fField30
         cb1d0:	e5c4101f 	strb	r1, [r4, #31]	; fField31
         cb1d4:	e3a01e77 	mov	r1, #1904	; 0x770
         cb1d8:	e2811a01 	add	r1, r1, #4096	; 0x1000
         cb1dc:	e2844020 	add	r4, r4, #32	; 0x20
         cb1e0:	e8840003 	stmia	r4, {r0, r1}
         cb1e4:	e2444020 	sub	r4, r4, #32	; 0x20
         cb1e8:	e3a0100a 	mov	r1, #10	; 0xa
         cb1ec:	e584002c 	str	r0, [r4, #44]	; fField44
         cb1f0:	e5841028 	str	r1, [r4, #40]	; fField40
         cb1f4:	e5840018 	str	r0, [r4, #24]	; fField24
         cb1f8:	e1a00004 	mov	r0, r4
         cb1fc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         cb200:	0001a884 	andeq	sl, r1, r4, lsl #17
    */
}

/**
 * Symbol: TForkWorld::__dt(void)
 * Address: 000cb204
 */
TForkWorld::~TForkWorld(void) {
    /*
         cb204:	e1a0c00d 	mov	ip, sp
         cb208:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         cb20c:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb210:	e1a04000 	mov	r4, r0
         cb214:	e1a05001 	mov	r5, r1
         cb218:	e59f0020 	ldr	r0, [pc, #20]	; cb240 <TForkWorld::__dt(void)+0x3c>
         cb21c:	e5840000 	str	r0, [r4]
         cb220:	e1a00004 	mov	r0, r4
         cb224:	e3a01000 	mov	r1, #0	; 0x0
         cb228:	eb6c0931 	bl	1bcd6f4 <TUTaskWorld::$__dt(void)>
         cb22c:	e3150001 	tst	r5, #1	; 0x1
         cb230:	11a00004 	movne	r0, r4
         cb234:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         cb238:	1a6c0928 	bne	1bcd6e0 <$__dl(void *)>
         cb23c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         cb240:	0001a884 	andeq	sl, r1, r4, lsl #17
    */
}

/**
 * Symbol: TForkWorld::TaskMain(void)
 * Address: 000cb244
 */
TForkWorld::TaskMain(void) {
    /*
         cb244:	e1a0c00d 	mov	ip, sp
         cb248:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         cb24c:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb250:	e1a04000 	mov	r4, r0
         cb254:	eb6b80e6 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
         cb258:	e3300000 	teq	r0, #0	; 0x0
         cb25c:	1a000018 	bne	cb2c4 <TForkWorld::TaskMain(void)+0x80>
         cb260:	e3a00001 	mov	r0, #1	; 0x1
         cb264:	e5c4001e 	strb	r0, [r4, #30]	; fField30
         cb268:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
         cb26c:	e3300000 	teq	r0, #0	; 0x0
         cb270:	0a000008 	beq	cb298 <TForkWorld::TaskMain(void)+0x54>
         cb274:	e1a00004 	mov	r0, r4
         cb278:	e5941000 	ldr	r1, [r4]
         cb27c:	e1a0e00f 	mov	lr, pc
         cb280:	e281f030 	add	pc, r1, #48	; 0x30
         cb284:	e5d4101d 	ldrb	r1, [r4, #29]	; fField29
         cb288:	e3310000 	teq	r1, #0	; 0x0
         cb28c:	0a000005 	beq	cb2a8 <TForkWorld::TaskMain(void)+0x64>
         cb290:	e3300000 	teq	r0, #0	; 0x0
         cb294:	1a000003 	bne	cb2a8 <TForkWorld::TaskMain(void)+0x64>
         cb298:	e1a00004 	mov	r0, r4
         cb29c:	e5941000 	ldr	r1, [r4]
         cb2a0:	e1a0e00f 	mov	lr, pc
         cb2a4:	e281f034 	add	pc, r1, #52	; 0x34
         cb2a8:	e5d4001d 	ldrb	r0, [r4, #29]	; fField29
         cb2ac:	e3300000 	teq	r0, #0	; 0x0
         cb2b0:	0a000003 	beq	cb2c4 <TForkWorld::TaskMain(void)+0x80>
         cb2b4:	e1a00004 	mov	r0, r4
         cb2b8:	e5941000 	ldr	r1, [r4]
         cb2bc:	e1a0e00f 	mov	lr, pc
         cb2c0:	e281f038 	add	pc, r1, #56	; 0x38
         cb2c4:	e1a00004 	mov	r0, r4
         cb2c8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         cb2cc:	ea6b8d23 	b	1bae760 <TForkWorld::$ReleaseMutex(void)>
    */
}

/**
 * Symbol: TForkWorld::MainConstructor(void)
 * Address: 000cb2d0
 */
TForkWorld::MainConstructor(void) {
    /*
         cb2d0:	ea6c46e7 	b	1bdce74 <TUTaskWorld::$TaskConstructor(void)>
    */
}

/**
 * Symbol: TForkWorld::MainDestructor(void)
 * Address: 000cb2d4
 */
TForkWorld::MainDestructor(void) {
    /*
         cb2d4:	ea6c46e7 	b	1bdce78 <TUTaskWorld::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TForkWorld::ForkConstructor(TForkWorld *)
 * Address: 000cb2d8
 */
TForkWorld::ForkConstructor(TForkWorld *) {
    /*
         cb2d8:	e3a00000 	mov	r0, #0	; 0x0
         cb2dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TForkWorld::ForkDestructor(void)
 * Address: 000cb2e0
 */
TForkWorld::ForkDestructor(void) {
    /*
         cb2e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TForkWorld::ForkInit(TForkWorld *)
 * Address: 000cb2e4
 */
TForkWorld::ForkInit(TForkWorld *) {
    /*
         cb2e4:	e3a02000 	mov	r2, #0	; 0x0
         cb2e8:	e5c0201c 	strb	r2, [r0, #28]	; fField28
         cb2ec:	e5913018 	ldr	r3, [r1, #24]	; fField24
         cb2f0:	e5801020 	str	r1, [r0, #32]	; fField32
         cb2f4:	e5803018 	str	r3, [r0, #24]	; fField24
         cb2f8:	e5913024 	ldr	r3, [r1, #36]	; fField36
         cb2fc:	e5803024 	str	r3, [r0, #36]	; fField36
         cb300:	e5913028 	ldr	r3, [r1, #40]	; fField40
         cb304:	e5803028 	str	r3, [r0, #40]	; fField40
         cb308:	e591302c 	ldr	r3, [r1, #44]	; fField44
         cb30c:	e580302c 	str	r3, [r0, #44]	; fField44
         cb310:	e5d1101f 	ldrb	r1, [r1, #31]	; fField31
         cb314:	e5c0101f 	strb	r1, [r0, #31]	; fField31
         cb318:	e1a00002 	mov	r0, r2
         cb31c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TForkWorld::Fork(TForkWorld *)
 * Address: 000cb320
 */
TForkWorld::Fork(TForkWorld *) {
    /*
         cb320:	e1a0c00d 	mov	ip, sp
         cb324:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         cb328:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb32c:	e1a04000 	mov	r4, r0
         cb330:	e3a06000 	mov	r6, #0	; 0x0
         cb334:	e5d0001f 	ldrb	r0, [r0, #31]	; fField31
         cb338:	e3300000 	teq	r0, #0	; 0x0
         cb33c:	15d4001e 	ldrneb	r0, [r4, #30]	; fField30
         cb340:	13300000 	teqne	r0, #0	; 0x0
         cb344:	0a00002a 	beq	cb3f4 <TForkWorld::Fork(TForkWorld *)+0xd4>
         cb348:	e3a07000 	mov	r7, #0	; 0x0
         cb34c:	e3310000 	teq	r1, #0	; 0x0
         cb350:	05d4001d 	ldreqb	r0, [r4, #29]	; fField29
         cb354:	03300000 	teqeq	r0, #0	; 0x0
         cb358:	01a00007 	moveq	r0, r7
         cb35c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         cb360:	e3310000 	teq	r1, #0	; 0x0
         cb364:	1a000004 	bne	cb37c <TForkWorld::Fork(TForkWorld *)+0x5c>
         cb368:	e1a00004 	mov	r0, r4
         cb36c:	e5941000 	ldr	r1, [r4]
         cb370:	e1a0e00f 	mov	lr, pc
         cb374:	e281f040 	add	pc, r1, #64	; 0x40
         cb378:	ea000000 	b	cb380 <TForkWorld::Fork(TForkWorld *)+0x60>
         cb37c:	e1a00001 	mov	r0, r1
         cb380:	e1b05000 	movs	r5, r0
         cb384:	0a000019 	beq	cb3f0 <TForkWorld::Fork(TForkWorld *)+0xd0>
         cb388:	e1a01004 	mov	r1, r4
         cb38c:	e1a00005 	mov	r0, r5
         cb390:	e5952000 	ldr	r2, [r5]
         cb394:	e1a0e00f 	mov	lr, pc
         cb398:	e282f014 	add	pc, r2, #20	; 0x14
         cb39c:	e1b06000 	movs	r6, r0
         cb3a0:	1a00000d 	bne	cb3dc <TForkWorld::Fork(TForkWorld *)+0xbc>
         cb3a4:	e2853024 	add	r3, r5, #36	; 0x24
         cb3a8:	e893000e 	ldmia	r3, {r1, r2, r3}
         cb3ac:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         cb3b0:	e1a00005 	mov	r0, r5
         cb3b4:	e3a03000 	mov	r3, #0	; 0x0
         cb3b8:	e3a02000 	mov	r2, #0	; 0x0
         cb3bc:	e3a01001 	mov	r1, #1	; 0x1
         cb3c0:	eb6c46a1 	bl	1bdce4c <TUTaskWorld::$StartTask(unsigned char, unsigned char, unsigned long, unsigned long, unsigned long, unsigned long)>
         cb3c4:	e28dd00c 	add	sp, sp, #12	; 0xc
         cb3c8:	e1b06000 	movs	r6, r0
         cb3cc:	1a000002 	bne	cb3dc <TForkWorld::Fork(TForkWorld *)+0xbc>
         cb3d0:	e5950010 	ldr	r0, [r5, #16]
         cb3d4:	eb6c3e63 	bl	1bdad68 <$SetBequeathId(unsigned long)>
         cb3d8:	e5c4701d 	strb	r7, [r4, #29]	; fField29
         cb3dc:	e1a00005 	mov	r0, r5
         cb3e0:	e3a01001 	mov	r1, #1	; 0x1
         cb3e4:	e1a0e00f 	mov	lr, pc
         cb3e8:	e595f000 	ldr	pc, [r5]
         cb3ec:	ea000000 	b	cb3f4 <TForkWorld::Fork(TForkWorld *)+0xd4>
         cb3f0:	e59f6004 	ldr	r6, [pc, #4]	; cb3fc <TForkWorld::Fork(TForkWorld *)+0xdc>
         cb3f4:	e1a00006 	mov	r0, r6
         cb3f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         cb3fc:	ffffd8e7 	swinv	0x00ffd8e7
    */
}

/**
 * Symbol: TForkWorld::Yield(void)
 * Address: 000cb400
 */
TForkWorld::Yield(void) {
    /*
         cb400:	e1a0c00d 	mov	ip, sp
         cb404:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         cb408:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb40c:	e1a04000 	mov	r4, r0
         cb410:	eb6b8cd2 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
         cb414:	e3300000 	teq	r0, #0	; 0x0
         cb418:	01a00004 	moveq	r0, r4
         cb41c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         cb420:	0a6b8073 	beq	1bab5f4 <TForkWorld::$AcquireMutex(void)>
         cb424:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TForkWorld::EnableForking(unsigned char)
 * Address: 000cb428
 */
TForkWorld::EnableForking(unsigned char) {
    /*
         cb428:	e20120ff 	and	r2, r1, #255	; 0xff
         cb42c:	e5d0101f 	ldrb	r1, [r0, #31]	; fField31
         cb430:	e5c0201f 	strb	r2, [r0, #31]	; fField31
         cb434:	e1a00001 	mov	r0, r1
         cb438:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TForkWorld::ForkSwitch(unsigned char)
 * Address: 000cb43c
 */
TForkWorld::ForkSwitch(unsigned char) {
    /*
         cb43c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TForkWorld::GetSizeOf(void)
 * Address: 000cb440
 */
TForkWorld::GetSizeOf(void) {
    /*
         cb440:	e3a00030 	mov	r0, #48	; 0x30
         cb444:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TForkWorld::AcquireMutex(void)
 * Address: 000cb448
 */
TForkWorld::AcquireMutex(void) {
    /*
         cb448:	e1a0c00d 	mov	ip, sp
         cb44c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         cb450:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb454:	e1a04000 	mov	r4, r0
         cb458:	e5900018 	ldr	r0, [r0, #24]	; fField24
         cb45c:	e3a01000 	mov	r1, #0	; 0x0
         cb460:	eb6c0cbb 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
         cb464:	e1a05000 	mov	r5, r0
         cb468:	e1a00004 	mov	r0, r4
         cb46c:	e3a01001 	mov	r1, #1	; 0x1
         cb470:	e5942000 	ldr	r2, [r4]
         cb474:	e1a0e00f 	mov	lr, pc
         cb478:	e282f03c 	add	pc, r2, #60	; 0x3c
         cb47c:	e1a00005 	mov	r0, r5
         cb480:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TForkWorld::ReleaseMutex(void)
 * Address: 000cb484
 */
TForkWorld::ReleaseMutex(void) {
    /*
         cb484:	e1a0c00d 	mov	ip, sp
         cb488:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         cb48c:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb490:	e1a04000 	mov	r4, r0
         cb494:	e3a01000 	mov	r1, #0	; 0x0
         cb498:	e5902000 	ldr	r2, [r0]
         cb49c:	e1a0e00f 	mov	lr, pc
         cb4a0:	e282f03c 	add	pc, r2, #60	; 0x3c
         cb4a4:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
         cb4a8:	eb6c39fa 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
         cb4ac:	e280cc27 	add	ip, r0, #9984	; 0x2700
         cb4b0:	e37c0029 	cmn	ip, #41	; 0x29
         cb4b4:	03a00000 	moveq	r0, #0	; 0x0
         cb4b8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TForkWorld::MainInit(unsigned long, unsigned long)
 * Address: 000cb4bc
 */
TForkWorld::MainInit(unsigned long, unsigned long) {
    /*
         cb4bc:	e1a0c00d 	mov	ip, sp
         cb4c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         cb4c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb4c8:	e1a0c002 	mov	ip, r2
         cb4cc:	e580102c 	str	r1, [r0, #44]	; fField44
         cb4d0:	e1a03001 	mov	r3, r1
         cb4d4:	e5802024 	str	r2, [r0, #36]	; fField36
         cb4d8:	e1a0100c 	mov	r1, ip
         cb4dc:	e5902028 	ldr	r2, [r0, #40]	; fField40
         cb4e0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         cb4e4:	e3a03000 	mov	r3, #0	; 0x0
         cb4e8:	e3a02000 	mov	r2, #0	; 0x0
         cb4ec:	e3a01001 	mov	r1, #1	; 0x1
         cb4f0:	eb6c4655 	bl	1bdce4c <TUTaskWorld::$StartTask(unsigned char, unsigned char, unsigned long, unsigned long, unsigned long, unsigned long)>
         cb4f4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TForkWorld::MainInit(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 000cb4f8
 */
TForkWorld::MainInit(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
         cb4f8:	e1a0c00d 	mov	ip, sp
         cb4fc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         cb500:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb504:	e1a0c000 	mov	ip, r0
         cb508:	e1a00002 	mov	r0, r2
         cb50c:	e1a0e003 	mov	lr, r3
         cb510:	e59b3004 	ldr	r3, [fp, #4]
         cb514:	e58c102c 	str	r1, [ip, #44]	; fField44
         cb518:	e28cc024 	add	ip, ip, #36	; 0x24
         cb51c:	e88c4004 	stmia	ip, {r2, lr}
         cb520:	e24cc024 	sub	ip, ip, #36	; 0x24
         cb524:	e1a02001 	mov	r2, r1
         cb528:	e1a0100e 	mov	r1, lr
         cb52c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         cb530:	e1a0000c 	mov	r0, ip
         cb534:	e3a03000 	mov	r3, #0	; 0x0
         cb538:	e3a02000 	mov	r2, #0	; 0x0
         cb53c:	e3a01001 	mov	r1, #1	; 0x1
         cb540:	eb6c4642 	bl	1bdce50 <TUTaskWorld::$StartTask(unsigned char, unsigned char, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)>
         cb544:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TForkWorld::MakeFork(void)
 * Address: 000cb548
 */
TForkWorld::MakeFork(void) {
    /*
         cb548:	e3a00000 	mov	r0, #0	; 0x0
         cb54c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TForkWorld::TaskConstructor(void)
 * Address: 000cb550
 */
TForkWorld::TaskConstructor(void) {
    /*
         cb550:	e1a0c00d 	mov	ip, sp
         cb554:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         cb558:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb55c:	e1a04000 	mov	r4, r0
         cb560:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
         cb564:	e3300000 	teq	r0, #0	; 0x0
         cb568:	0a00001e 	beq	cb5e8 <TForkWorld::TaskConstructor(void)+0x98>
         cb56c:	e3a00014 	mov	r0, #20	; 0x14
         cb570:	eb6c0c70 	bl	1bce738 <$__nw(unsigned int)>
         cb574:	e1b05000 	movs	r5, r0
         cb578:	0a000007 	beq	cb59c <TForkWorld::TaskConstructor(void)+0x4c>
         cb57c:	e3a06000 	mov	r6, #0	; 0x0
         cb580:	e5c56004 	strb	r6, [r5, #4]
         cb584:	e5856000 	str	r6, [r5]
         cb588:	e2851008 	add	r1, r5, #8	; 0x8
         cb58c:	e1a00005 	mov	r0, r5
         cb590:	eb6c2523 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
         cb594:	e585600c 	str	r6, [r5, #12]
         cb598:	e5856010 	str	r6, [r5, #16]
         cb59c:	e5845018 	str	r5, [r4, #24]	; fField24
         cb5a0:	e3350000 	teq	r5, #0	; 0x0
         cb5a4:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         cb5a8:	0a6c5adc 	beq	1be2120 <$MemError>
         cb5ac:	e1a00005 	mov	r0, r5
         cb5b0:	eb6c2940 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
         cb5b4:	e3300000 	teq	r0, #0	; 0x0
         cb5b8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         cb5bc:	e5940018 	ldr	r0, [r4, #24]	; fField24
         cb5c0:	e590100c 	ldr	r1, [r0, #12]
         cb5c4:	e2811001 	add	r1, r1, #1	; 0x1
         cb5c8:	e580100c 	str	r1, [r0, #12]
         cb5cc:	e5901010 	ldr	r1, [r0, #16]
         cb5d0:	e2811001 	add	r1, r1, #1	; 0x1
         cb5d4:	e5a01010 	str	r1, [r0, #16]!
         cb5d8:	e1a00004 	mov	r0, r4
         cb5dc:	e5941000 	ldr	r1, [r4]
         cb5e0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         cb5e4:	e281f028 	add	pc, r1, #40	; 0x28
         cb5e8:	e5940018 	ldr	r0, [r4, #24]	; fField24
         cb5ec:	e590100c 	ldr	r1, [r0, #12]
         cb5f0:	e2811001 	add	r1, r1, #1	; 0x1
         cb5f4:	e580100c 	str	r1, [r0, #12]
         cb5f8:	e5901010 	ldr	r1, [r0, #16]
         cb5fc:	e2811001 	add	r1, r1, #1	; 0x1
         cb600:	e5a01010 	str	r1, [r0, #16]!
         cb604:	e5941020 	ldr	r1, [r4, #32]	; fField32
         cb608:	e1a00004 	mov	r0, r4
         cb60c:	e5942000 	ldr	r2, [r4]
         cb610:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         cb614:	e282f018 	add	pc, r2, #24	; 0x18
    */
}

/**
 * Symbol: TForkWorld::TaskDestructor(void)
 * Address: 000cb618
 */
TForkWorld::TaskDestructor(void) {
    /*
         cb618:	e1a0c00d 	mov	ip, sp
         cb61c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         cb620:	e24cb004 	sub	fp, ip, #4	; 0x4
         cb624:	e1a04000 	mov	r4, r0
         cb628:	e5900018 	ldr	r0, [r0, #24]	; fField24
         cb62c:	e590100c 	ldr	r1, [r0, #12]
         cb630:	e2411001 	sub	r1, r1, #1	; 0x1
         cb634:	e5a0100c 	str	r1, [r0, #12]!
         cb638:	e5d4001d 	ldrb	r0, [r4, #29]	; fField29
         cb63c:	e3300000 	teq	r0, #0	; 0x0
         cb640:	e1a00004 	mov	r0, r4
         cb644:	05941000 	ldreq	r1, [r4]
         cb648:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         cb64c:	0281f01c 	addeq	pc, r1, #28	; 0x1c
         cb650:	e5941000 	ldr	r1, [r4]
         cb654:	e1a0e00f 	mov	lr, pc
         cb658:	e281f02c 	add	pc, r1, #44	; 0x2c
         cb65c:	e5944018 	ldr	r4, [r4, #24]	; fField24
         cb660:	e3340000 	teq	r4, #0	; 0x0
         cb664:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         cb668:	e1a00004 	mov	r0, r4
         cb66c:	e3a01000 	mov	r1, #0	; 0x0
         cb670:	eb6c0c2a 	bl	1bce720 <TULockingSemaphore::$__dt(void)>
         cb674:	e1a00004 	mov	r0, r4
         cb678:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         cb67c:	ea6c0817 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TForkWorld::PreMain(void)
 * Address: 000cb680
 */
TForkWorld::PreMain(void) {
    /*
         cb680:	e3a00000 	mov	r0, #0	; 0x0
         cb684:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TForkWorld::PostMain(void)
 * Address: 000cb688
 */
TForkWorld::PostMain(void) {
    /*
         cb688:	e1a0f00e 	mov	pc, lr
    */
}

