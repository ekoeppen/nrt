#include "include/CPackageArchivalPipe.h"

/**
 * Symbol: CPackageArchivalPipe::__ct(void)
 * Address: 0010d190
 */
CPackageArchivalPipe::CPackageArchivalPipe(void) {
    /*
        10d190:	e1a0c00d 	mov	ip, sp
        10d194:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10d198:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d19c:	e1b04000 	movs	r4, r0
        10d1a0:	1a000003 	bne	10d1b4 <CPackageArchivalPipe::__ct(void)+0x24>
        10d1a4:	e3a00020 	mov	r0, #32	; 0x20
        10d1a8:	eb6b0562 	bl	1bce738 <$__nw(unsigned int)>
        10d1ac:	e1b04000 	movs	r4, r0
        10d1b0:	0a000010 	beq	10d1f8 <CPackageArchivalPipe::__ct(void)+0x68>
        10d1b4:	e1a00004 	mov	r0, r4
        10d1b8:	eb6b5801 	bl	1be31c4 <CBufferPipe::$__ct(void)>
        10d1bc:	e3a00002 	mov	r0, #2	; 0x2
        10d1c0:	eb6ad3e1 	bl	1bc214c <$AllocateRefHandle(long)>
        10d1c4:	e3a05000 	mov	r5, #0	; 0x0
        10d1c8:	e5840010 	str	r0, [r4, #16]	; fField16
        10d1cc:	e5a05004 	str	r5, [r0, #4]!	; fField4
        10d1d0:	e3a00002 	mov	r0, #2	; 0x2
        10d1d4:	eb6ad3dc 	bl	1bc214c <$AllocateRefHandle(long)>
        10d1d8:	e5840014 	str	r0, [r4, #20]	; fField20
        10d1dc:	e5a05004 	str	r5, [r0, #4]!	; fField4
        10d1e0:	e3a00002 	mov	r0, #2	; 0x2
        10d1e4:	eb6ad3d8 	bl	1bc214c <$AllocateRefHandle(long)>
        10d1e8:	e584001c 	str	r0, [r4, #28]	; fField28
        10d1ec:	e5a05004 	str	r5, [r0, #4]!	; fField4
        10d1f0:	e59f0008 	ldr	r0, [pc, #8]	; 10d200 <CPackageArchivalPipe::__ct(void)+0x70>	; fField8
        10d1f4:	e5840000 	str	r0, [r4]
        10d1f8:	e1a00004 	mov	r0, r4
        10d1fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        10d200:	0001ef60 	andeq	lr, r1, r0, ror #30
    */
}

/**
 * Symbol: CPackageArchivalPipe::__dt(void)
 * Address: 0010d204
 */
CPackageArchivalPipe::~CPackageArchivalPipe(void) {
    /*
        10d204:	e1a0c00d 	mov	ip, sp
        10d208:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        10d20c:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d210:	e1a04000 	mov	r4, r0
        10d214:	e1a05001 	mov	r5, r1
        10d218:	e59f0038 	ldr	r0, [pc, #38]	; 10d258 <CPackageArchivalPipe::__dt(void)+0x54>
        10d21c:	e5840000 	str	r0, [r4]
        10d220:	e594001c 	ldr	r0, [r4, #28]	; fField28
        10d224:	eb6ad7e4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d228:	e5940014 	ldr	r0, [r4, #20]	; fField20
        10d22c:	eb6ad7e2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d230:	e5940010 	ldr	r0, [r4, #16]	; fField16
        10d234:	eb6ad7e0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d238:	e1a00004 	mov	r0, r4
        10d23c:	e3a01000 	mov	r1, #0	; 0x0
        10d240:	eb6b5c03 	bl	1be4254 <CBufferPipe::$__dt(void)>
        10d244:	e3150001 	tst	r5, #1	; 0x1
        10d248:	11a00004 	movne	r0, r4
        10d24c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        10d250:	1a6b0122 	bne	1bcd6e0 <$__dl(void *)>
        10d254:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        10d258:	0001ef60 	andeq	lr, r1, r0, ror #30
    */
}

/**
 * Symbol: CPackageArchivalPipe::Reset(void)
 * Address: 0010d25c
 */
CPackageArchivalPipe::Reset(void) {
    /*
        10d25c:	e1a0c00d 	mov	ip, sp
        10d260:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10d264:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d268:	e1a04000 	mov	r4, r0
        10d26c:	eb6b7cfb 	bl	1bec660 <CBufferPipe::$Reset(void)>
        10d270:	e3a00000 	mov	r0, #0	; 0x0
        10d274:	e5a40018 	str	r0, [r4, #24]!	; fField24
        10d278:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)
 * Address: 0010d27c
 */
CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char) {
    /*
        10d27c:	e1a0c00d 	mov	ip, sp
        10d280:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        10d284:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d288:	e1a04000 	mov	r4, r0
        10d28c:	e20330ff 	and	r3, r3, #255	; 0xff
        10d290:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        10d294:	e20080ff 	and	r8, r0, #255	; 0xff
        10d298:	e3a07000 	mov	r7, #0	; 0x0
        10d29c:	e3a06000 	mov	r6, #0	; 0x0
        10d2a0:	e2840010 	add	r0, r4, #16	; 0x10
        10d2a4:	e1a05000 	mov	r5, r0
        10d2a8:	e5911000 	ldr	r1, [r1]
        10d2ac:	e5911000 	ldr	r1, [r1]
        10d2b0:	e5900000 	ldr	r0, [r0]
        10d2b4:	e5801000 	str	r1, [r0]
        10d2b8:	e5921000 	ldr	r1, [r2]
        10d2bc:	e5911000 	ldr	r1, [r1]
        10d2c0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        10d2c4:	e5801000 	str	r1, [r0]
        10d2c8:	e3a00000 	mov	r0, #0	; 0x0
        10d2cc:	e3330000 	teq	r3, #0	; 0x0
        10d2d0:	e5840018 	str	r0, [r4, #24]	; fField24
        10d2d4:	0a000025 	beq	10d370 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0xf4>
        10d2d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        10d2dc:	e3a00002 	mov	r0, #2	; 0x2
        10d2e0:	eb6ad399 	bl	1bc214c <$AllocateRefHandle(long)>
        10d2e4:	e58d0000 	str	r0, [sp]
        10d2e8:	eb6ad394 	bl	1bc2140 <$AllocateFrame(void)>
        10d2ec:	e59d1000 	ldr	r1, [sp]
        10d2f0:	e5810000 	str	r0, [r1]
        10d2f4:	e59f203c 	ldr	r2, [pc, #3c]	; 10d338 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0xbc>
        10d2f8:	e59f103c 	ldr	r1, [pc, #3c]	; 10d33c <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0xc0>
        10d2fc:	e1a0000d 	mov	r0, sp
        10d300:	eb6ae418 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10d304:	e284701c 	add	r7, r4, #28	; 0x1c
        10d308:	e1a00005 	mov	r0, r5
        10d30c:	e1a0100d 	mov	r1, sp
        10d310:	eb6ae3fb 	bl	1bc6304 <$Query__FRC6RefVarT1>
        10d314:	e5971000 	ldr	r1, [r7]
        10d318:	e5810000 	str	r0, [r1]
        10d31c:	e3a00000 	mov	r0, #0	; 0x0
        10d320:	eb6b5bb7 	bl	1be4204 <CBufferSegment::$__ct(void)>
        10d324:	e1b07000 	movs	r7, r0
        10d328:	1a000004 	bne	10d340 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0xc4>
        10d32c:	eb6b537b 	bl	1be2120 <$MemError>
        10d330:	e1a05000 	mov	r5, r0
        10d334:	ea000006 	b	10d354 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0xd8>
        10d338:	006831c0 	rsbeq	r3, r8, r0, asr #3
        10d33c:	00684cb0 	streqh	r4, [r8], -#192
        10d340:	e1a00007 	mov	r0, r7
        10d344:	e3a01a01 	mov	r1, #4096	; 0x1000
        10d348:	eb6b7056 	bl	1be94a8 <CBufferSegment::$Init(long)>
        10d34c:	e1b05000 	movs	r5, r0
        10d350:	0a000003 	beq	10d364 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0xe8>
        10d354:	e59d0000 	ldr	r0, [sp]
        10d358:	eb6ad797 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d35c:	e28dd004 	add	sp, sp, #4	; 0x4
        10d360:	ea000016 	b	10d3c0 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0x144>
        10d364:	e59d0000 	ldr	r0, [sp]
        10d368:	eb6ad793 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d36c:	e28dd004 	add	sp, sp, #4	; 0x4
        10d370:	e3380000 	teq	r8, #0	; 0x0
        10d374:	0a00000b 	beq	10d3a8 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0x12c>
        10d378:	e3a00000 	mov	r0, #0	; 0x0
        10d37c:	eb6b5ba0 	bl	1be4204 <CBufferSegment::$__ct(void)>
        10d380:	e1b06000 	movs	r6, r0
        10d384:	1a000002 	bne	10d394 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0x118>
        10d388:	eb6b5364 	bl	1be2120 <$MemError>
        10d38c:	e1a05000 	mov	r5, r0
        10d390:	ea00000a 	b	10d3c0 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0x144>
        10d394:	e1a00006 	mov	r0, r6
        10d398:	e3a01a01 	mov	r1, #4096	; 0x1000
        10d39c:	eb6b7041 	bl	1be94a8 <CBufferSegment::$Init(long)>
        10d3a0:	e1b05000 	movs	r5, r0
        10d3a4:	1a000005 	bne	10d3c0 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0x144>
        10d3a8:	e1a02006 	mov	r2, r6
        10d3ac:	e1a01007 	mov	r1, r7
        10d3b0:	e1a00004 	mov	r0, r4
        10d3b4:	e3a03001 	mov	r3, #1	; 0x1
        10d3b8:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        10d3bc:	ea6b7034 	b	1be9494 <CBufferPipe::$Init(CBufferSegment *, CBufferSegment *, unsigned char)>
        10d3c0:	e3350000 	teq	r5, #0	; 0x0
        10d3c4:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        10d3c8:	e1b00007 	movs	r0, r7
        10d3cc:	0a000002 	beq	10d3dc <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0x160>
        10d3d0:	e3a01001 	mov	r1, #1	; 0x1
        10d3d4:	e1a0e00f 	mov	lr, pc
        10d3d8:	e590f000 	ldr	pc, [r0]
        10d3dc:	e1b00006 	movs	r0, r6
        10d3e0:	0a000002 	beq	10d3f0 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0x174>
        10d3e4:	e3a01001 	mov	r1, #1	; 0x1
        10d3e8:	e1a0e00f 	mov	lr, pc
        10d3ec:	e590f000 	ldr	pc, [r0]
        10d3f0:	e1a01005 	mov	r1, r5
        10d3f4:	e59f000c 	ldr	r0, [pc, #c]	; 10d408 <CPackageArchivalPipe::Init(RefVar const &, RefVar const &, unsigned char, unsigned char)+0x18c>
        10d3f8:	e5900000 	ldr	r0, [r0]
        10d3fc:	e3a02000 	mov	r2, #0	; 0x0
        10d400:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        10d404:	ea6b5764 	b	1be319c <$Throw>
        10d408:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: CPackageArchivalPipe::MakeNewPackageChunk(long)
 * Address: 0010d40c
 */
CPackageArchivalPipe::MakeNewPackageChunk(long) {
    /*
        10d40c:	e1a0c00d 	mov	ip, sp
        10d410:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10d414:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d418:	e1a04000 	mov	r4, r0
        10d41c:	e1a05001 	mov	r5, r1
        10d420:	e24dd008 	sub	sp, sp, #8	; 0x8
        10d424:	eb6ad345 	bl	1bc2140 <$AllocateFrame(void)>
        10d428:	eb6ad347 	bl	1bc214c <$AllocateRefHandle(long)>
        10d42c:	e1a01005 	mov	r1, r5
        10d430:	e58d0004 	str	r0, [sp, #4]	; fField4
        10d434:	e59f0048 	ldr	r0, [pc, #48]	; 10d484 <CPackageArchivalPipe::MakeNewPackageChunk(long)+0x78>
        10d438:	e1a06000 	mov	r6, r0
        10d43c:	eb6ad33e 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        10d440:	eb6ad341 	bl	1bc214c <$AllocateRefHandle(long)>
        10d444:	e58d0000 	str	r0, [sp]
        10d448:	e1a0200d 	mov	r2, sp
        10d44c:	e1a01006 	mov	r1, r6
        10d450:	e28d0004 	add	r0, sp, #4	; 0x4
        10d454:	eb6ae3c3 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        10d458:	e2840010 	add	r0, r4, #16	; 0x10
        10d45c:	e28d1004 	add	r1, sp, #4	; 0x4
        10d460:	eb6ae7c6 	bl	1bc7380 <$SoupAdd__FRC6RefVarT1>
        10d464:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10d468:	e5904000 	ldr	r4, [r0]
        10d46c:	e59d0000 	ldr	r0, [sp]
        10d470:	eb6ad751 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d474:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10d478:	eb6ad74f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d47c:	e1a00004 	mov	r0, r4
        10d480:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        10d484:	00683c28 	rsbeq	r3, r8, r8, lsr #24
    */
}

/**
 * Symbol: CPackageArchivalPipe::UpdateKeyList(RefVar const &)
 * Address: 0010d488
 */
CPackageArchivalPipe::UpdateKeyList(RefVar const &) {
    /*
        10d488:	e1a0c00d 	mov	ip, sp
        10d48c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        10d490:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d494:	e1a04000 	mov	r4, r0
        10d498:	e1a00001 	mov	r0, r1
        10d49c:	e24dd004 	sub	sp, sp, #4	; 0x4
        10d4a0:	e59f1030 	ldr	r1, [pc, #30]	; 10d4d8 <CPackageArchivalPipe::UpdateKeyList(RefVar const &)+0x50>
        10d4a4:	e5911000 	ldr	r1, [r1]
        10d4a8:	e5911000 	ldr	r1, [r1]
        10d4ac:	e5900000 	ldr	r0, [r0]
        10d4b0:	e5900000 	ldr	r0, [r0]
        10d4b4:	eb6adb69 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10d4b8:	eb6ad323 	bl	1bc214c <$AllocateRefHandle(long)>
        10d4bc:	e58d0000 	str	r0, [sp]
        10d4c0:	e1a0100d 	mov	r1, sp
        10d4c4:	e2840014 	add	r0, r4, #20	; 0x14
        10d4c8:	eb6ad316 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        10d4cc:	e59d0000 	ldr	r0, [sp]
        10d4d0:	eb6ad739 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d4d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        10d4d8:	006853d0 	ldreqd	r5, [r8], -#48
    */
}

/**
 * Symbol: CPackageArchivalPipe::GetPackageChunk(unsigned char **, unsigned long *)
 * Address: 0010d4dc
 */
CPackageArchivalPipe::GetPackageChunk(unsigned char **, unsigned long *) {
    /*
        10d4dc:	e1a0c00d 	mov	ip, sp
        10d4e0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        10d4e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d4e8:	e1a04000 	mov	r4, r0
        10d4ec:	e1a06001 	mov	r6, r1
        10d4f0:	e1a05002 	mov	r5, r2
        10d4f4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10d4f8:	e5941018 	ldr	r1, [r4, #24]	; fField24
        10d4fc:	e5900014 	ldr	r0, [r0, #20]	; fField20
        10d500:	e5900000 	ldr	r0, [r0]
        10d504:	eb6adb52 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        10d508:	eb6ad30f 	bl	1bc214c <$AllocateRefHandle(long)>
        10d50c:	e58d0000 	str	r0, [sp]
        10d510:	e1a0100d 	mov	r1, sp
        10d514:	e284001c 	add	r0, r4, #28	; 0x1c
        10d518:	eb6ad71d 	bl	1bc3194 <$CursorGotoKey__FRC6RefVarT1>
        10d51c:	eb6ad30a 	bl	1bc214c <$AllocateRefHandle(long)>
        10d520:	e1a07000 	mov	r7, r0
        10d524:	e59f0070 	ldr	r0, [pc, #70]	; 10d59c <CPackageArchivalPipe::GetPackageChunk(unsigned char **, unsigned long *)+0xc0>
        10d528:	e5900000 	ldr	r0, [r0]
        10d52c:	e5901000 	ldr	r1, [r0]
        10d530:	e5970000 	ldr	r0, [r7]
        10d534:	eb6adb49 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10d538:	eb6ad303 	bl	1bc214c <$AllocateRefHandle(long)>
        10d53c:	e58d0008 	str	r0, [sp, #8]	; fField8
        10d540:	e1a00007 	mov	r0, r7
        10d544:	eb6ad71c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d548:	e59d0000 	ldr	r0, [sp]
        10d54c:	eb6ad71a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d550:	e5940018 	ldr	r0, [r4, #24]	; fField24
        10d554:	e2800001 	add	r0, r0, #1	; 0x1
        10d558:	e28d1008 	add	r1, sp, #8	; 0x8
        10d55c:	e5a40018 	str	r0, [r4, #24]!	; fField24
        10d560:	e28d0004 	add	r0, sp, #4	; 0x4
        10d564:	eb6acedb 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        10d568:	e28d0004 	add	r0, sp, #4	; 0x4
        10d56c:	eb6ad2e8 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        10d570:	e5860000 	str	r0, [r6]
        10d574:	e28d0004 	add	r0, sp, #4	; 0x4
        10d578:	e3a01000 	mov	r1, #0	; 0x0
        10d57c:	eb6ad2df 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        10d580:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10d584:	e5900000 	ldr	r0, [r0]
        10d588:	eb6adf47 	bl	1bc52ac <$Length(long)>
        10d58c:	e5850000 	str	r0, [r5]
        10d590:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10d594:	eb6ad708 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d598:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        10d59c:	00683c28 	rsbeq	r3, r8, r8, lsr #24
    */
}

/**
 * Symbol: CPackageArchivalPipe::FlushRead(void)
 * Address: 0010d5a0
 */
CPackageArchivalPipe::FlushRead(void) {
    /*
        10d5a0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        10d5a4:	e3300000 	teq	r0, #0	; 0x0
        10d5a8:	01a0f00e 	moveq	pc, lr
        10d5ac:	e3a02001 	mov	r2, #1	; 0x1
        10d5b0:	e3a01000 	mov	r1, #0	; 0x0
        10d5b4:	e5903000 	ldr	r3, [r0]
        10d5b8:	e283f038 	add	pc, r3, #56	; 0x38
    */
}

/**
 * Symbol: CPackageArchivalPipe::FlushWrite(void)
 * Address: 0010d5bc
 */
CPackageArchivalPipe::FlushWrite(void) {
    /*
        10d5bc:	e5901000 	ldr	r1, [r0]
        10d5c0:	e281f030 	add	pc, r1, #48	; 0x30
    */
}

/**
 * Symbol: CPackageArchivalPipe::Overflow(void)
 * Address: 0010d5c4
 */
CPackageArchivalPipe::Overflow(void) {
    /*
        10d5c4:	e1a0c00d 	mov	ip, sp
        10d5c8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        10d5cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d5d0:	e1a04000 	mov	r4, r0
        10d5d4:	e3a05000 	mov	r5, #0	; 0x0
        10d5d8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        10d5dc:	e59f6120 	ldr	r6, [pc, #120]	; 10d704 <CPackageArchivalPipe::Overflow(void)+0x140>
        10d5e0:	e3300000 	teq	r0, #0	; 0x0
        10d5e4:	0a00005d 	beq	10d760 <CPackageArchivalPipe::Overflow(void)+0x19c>
        10d5e8:	e24dd004 	sub	sp, sp, #4	; 0x4
        10d5ec:	e5901000 	ldr	r1, [r0]
        10d5f0:	e1a0e00f 	mov	lr, pc
        10d5f4:	e281f03c 	add	pc, r1, #60	; 0x3c
        10d5f8:	e58d0000 	str	r0, [sp]
        10d5fc:	e3300000 	teq	r0, #0	; 0x0
        10d600:	0a000051 	beq	10d74c <CPackageArchivalPipe::Overflow(void)+0x188>
        10d604:	e3a07000 	mov	r7, #0	; 0x0
        10d608:	e52d706c 	str	r7, [sp, -#108]!
        10d60c:	e28d0008 	add	r0, sp, #8	; 0x8
        10d610:	eb6a94d7 	bl	1bb2974 <$setjmp>
        10d614:	e3300000 	teq	r0, #0	; 0x0
        10d618:	1a000041 	bne	10d724 <CPackageArchivalPipe::Overflow(void)+0x160>
        10d61c:	e1a0000d 	mov	r0, sp
        10d620:	eb6b4a95 	bl	1be007c <$AddExceptionHandler>
        10d624:	e24dd00c 	sub	sp, sp, #12	; 0xc
        10d628:	e1a00004 	mov	r0, r4
        10d62c:	e59d1078 	ldr	r1, [sp, #120]
        10d630:	eb675afe 	bl	1ae4230 <CPackageArchivalPipe::$MakeNewPackageChunk(long)>
        10d634:	eb6ad2c4 	bl	1bc214c <$AllocateRefHandle(long)>
        10d638:	e58d0008 	str	r0, [sp, #8]	; fField8
        10d63c:	e59f00c4 	ldr	r0, [pc, #c4]	; 10d708 <CPackageArchivalPipe::Overflow(void)+0x144>
        10d640:	e5900000 	ldr	r0, [r0]
        10d644:	e5901000 	ldr	r1, [r0]
        10d648:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10d64c:	e5900000 	ldr	r0, [r0]
        10d650:	eb6adb02 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        10d654:	eb6ad2bc 	bl	1bc214c <$AllocateRefHandle(long)>
        10d658:	e58d0004 	str	r0, [sp, #4]	; fField4
        10d65c:	e28d1004 	add	r1, sp, #4	; 0x4
        10d660:	e1a0000d 	mov	r0, sp
        10d664:	eb6ace9b 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
        10d668:	e52d706c 	str	r7, [sp, -#108]!
        10d66c:	e28d0008 	add	r0, sp, #8	; 0x8
        10d670:	eb6a94bf 	bl	1bb2974 <$setjmp>
        10d674:	e3300000 	teq	r0, #0	; 0x0
        10d678:	1a000023 	bne	10d70c <CPackageArchivalPipe::Overflow(void)+0x148>
        10d67c:	e1a0000d 	mov	r0, sp
        10d680:	eb6b4a7d 	bl	1be007c <$AddExceptionHandler>
        10d684:	e3e02000 	mvn	r2, #0	; 0x0
        10d688:	e3a01000 	mov	r1, #0	; 0x0
        10d68c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        10d690:	e5903000 	ldr	r3, [r0]
        10d694:	e1a0e00f 	mov	lr, pc
        10d698:	e283f038 	add	pc, r3, #56	; 0x38
        10d69c:	e28d006c 	add	r0, sp, #108	; 0x6c
        10d6a0:	e5947008 	ldr	r7, [r4, #8]	; fField8
        10d6a4:	eb6ad29a 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        10d6a8:	e1a01000 	mov	r1, r0
        10d6ac:	e28d20e4 	add	r2, sp, #228	; 0xe4
        10d6b0:	e1a00007 	mov	r0, r7
        10d6b4:	e5973000 	ldr	r3, [r7]
        10d6b8:	e1a0e00f 	mov	lr, pc
        10d6bc:	e283f018 	add	pc, r3, #24	; 0x18
        10d6c0:	e28d0074 	add	r0, sp, #116	; 0x74
        10d6c4:	eb6ad6c9 	bl	1bc31f0 <$EntryChange(RefVar const &)>
        10d6c8:	e28d1074 	add	r1, sp, #116	; 0x74
        10d6cc:	e1a00004 	mov	r0, r4
        10d6d0:	eb675ad7 	bl	1ae4234 <CPackageArchivalPipe::$UpdateKeyList(RefVar const &)>
        10d6d4:	e1a0000d 	mov	r0, sp
        10d6d8:	eb6b4e76 	bl	1be10b8 <$ExitHandler>
        10d6dc:	e28dd06c 	add	sp, sp, #108	; 0x6c
        10d6e0:	e1a0000d 	mov	r0, sp
        10d6e4:	e3a01000 	mov	r1, #0	; 0x0
        10d6e8:	eb6ad284 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        10d6ec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        10d6f0:	eb6ad6b1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d6f4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        10d6f8:	eb6ad6af 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        10d6fc:	e28dd00c 	add	sp, sp, #12	; 0xc
        10d700:	ea000008 	b	10d728 <CPackageArchivalPipe::Overflow(void)+0x164>
        10d704:	00371324 	eoreqs	r1, r7, r4, lsr #6
        10d708:	00683c28 	rsbeq	r3, r8, r8, lsr #24
        10d70c:	e28d006c 	add	r0, sp, #108	; 0x6c
        10d710:	e3a01000 	mov	r1, #0	; 0x0
        10d714:	eb6ad279 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        10d718:	e1a0000d 	mov	r0, sp
        10d71c:	eb6b528c 	bl	1be2154 <$NextHandler>
        10d720:	eafffff9 	b	10d70c <CPackageArchivalPipe::Overflow(void)+0x148>
        10d724:	e59d5064 	ldr	r5, [sp, #100]
        10d728:	e1a0000d 	mov	r0, sp
        10d72c:	eb6b4e61 	bl	1be10b8 <$ExitHandler>
        10d730:	e28dd06c 	add	sp, sp, #108	; 0x6c
        10d734:	e3350000 	teq	r5, #0	; 0x0
        10d738:	0a000003 	beq	10d74c <CPackageArchivalPipe::Overflow(void)+0x188>
        10d73c:	e1a01005 	mov	r1, r5
        10d740:	e3a02000 	mov	r2, #0	; 0x0
        10d744:	e5960000 	ldr	r0, [r6]
        10d748:	eb6b5693 	bl	1be319c <$Throw>
        10d74c:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        10d750:	e5901000 	ldr	r1, [r0]
        10d754:	e1a0e00f 	mov	lr, pc
        10d758:	e281f028 	add	pc, r1, #40	; 0x28
        10d75c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        10d760:	e3a02000 	mov	r2, #0	; 0x0
        10d764:	e3a010ea 	mov	r1, #234	; 0xea
        10d768:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        10d76c:	e5960000 	ldr	r0, [r6]
        10d770:	eb6b5689 	bl	1be319c <$Throw>
        10d774:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: CPackageArchivalPipe::Underflow(long, unsigned char &)
 * Address: 0010d778
 */
CPackageArchivalPipe::Underflow(long, unsigned char &) {
    /*
        10d778:	e1a0c00d 	mov	ip, sp
        10d77c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        10d780:	e24cb004 	sub	fp, ip, #4	; 0x4
        10d784:	e1a04000 	mov	r4, r0
        10d788:	e3a05000 	mov	r5, #0	; 0x0
        10d78c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        10d790:	e59f6048 	ldr	r6, [pc, #48]	; 10d7e0 <CPackageArchivalPipe::Underflow(long, unsigned char &)+0x68>
        10d794:	e3300000 	teq	r0, #0	; 0x0
        10d798:	0a000031 	beq	10d864 <CPackageArchivalPipe::Underflow(long, unsigned char &)+0xec>
        10d79c:	e24dd008 	sub	sp, sp, #8	; 0x8
        10d7a0:	e5901000 	ldr	r1, [r0]
        10d7a4:	e1a0e00f 	mov	lr, pc
        10d7a8:	e281f028 	add	pc, r1, #40	; 0x28
        10d7ac:	e3a00000 	mov	r0, #0	; 0x0
        10d7b0:	e52d006c 	str	r0, [sp, -#108]!
        10d7b4:	e28d0008 	add	r0, sp, #8	; 0x8
        10d7b8:	eb6a946d 	bl	1bb2974 <$setjmp>
        10d7bc:	e3300000 	teq	r0, #0	; 0x0
        10d7c0:	1a000007 	bne	10d7e4 <CPackageArchivalPipe::Underflow(long, unsigned char &)+0x6c>
        10d7c4:	e1a0000d 	mov	r0, sp
        10d7c8:	eb6b4a2b 	bl	1be007c <$AddExceptionHandler>
        10d7cc:	e28d206c 	add	r2, sp, #108	; 0x6c
        10d7d0:	e28d1070 	add	r1, sp, #112	; 0x70
        10d7d4:	e1a00004 	mov	r0, r4
        10d7d8:	eb675a96 	bl	1ae4238 <CPackageArchivalPipe::$GetPackageChunk(unsigned char **, unsigned long *)>
        10d7dc:	ea000008 	b	10d804 <CPackageArchivalPipe::Underflow(long, unsigned char &)+0x8c>
        10d7e0:	00371324 	eoreqs	r1, r7, r4, lsr #6
        10d7e4:	e59d0060 	ldr	r0, [sp, #96]
        10d7e8:	e28f1f1c 	add	r1, pc, #112	; 0x70
        10d7ec:	eb6b5668 	bl	1be3194 <$Subexception>
        10d7f0:	e3300000 	teq	r0, #0	; 0x0
        10d7f4:	159d5064 	ldrne	r5, [sp, #100]
        10d7f8:	1a000001 	bne	10d804 <CPackageArchivalPipe::Underflow(long, unsigned char &)+0x8c>
        10d7fc:	e1a0000d 	mov	r0, sp
        10d800:	eb6b5253 	bl	1be2154 <$NextHandler>
        10d804:	e1a0000d 	mov	r0, sp
        10d808:	eb6b4e2a 	bl	1be10b8 <$ExitHandler>
        10d80c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        10d810:	e3350000 	teq	r5, #0	; 0x0
        10d814:	0a000003 	beq	10d828 <CPackageArchivalPipe::Underflow(long, unsigned char &)+0xb0>
        10d818:	e1a01005 	mov	r1, r5
        10d81c:	e3a02000 	mov	r2, #0	; 0x0
        10d820:	e5960000 	ldr	r0, [r6]
        10d824:	eb6b565c 	bl	1be319c <$Throw>
        10d828:	e5943004 	ldr	r3, [r4, #4]	; fField4
        10d82c:	e1a00003 	mov	r0, r3
        10d830:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        10d834:	e59d2000 	ldr	r2, [sp]
        10d838:	e5933000 	ldr	r3, [r3]
        10d83c:	e1a0e00f 	mov	lr, pc
        10d840:	e283f020 	add	pc, r3, #32	; 0x20
        10d844:	e3e02000 	mvn	r2, #0	; 0x0
        10d848:	e3a01000 	mov	r1, #0	; 0x0
        10d84c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        10d850:	e5903000 	ldr	r3, [r0]
        10d854:	e1a0e00f 	mov	lr, pc
        10d858:	e283f038 	add	pc, r3, #56	; 0x38
        10d85c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        10d860:	00000000 	andeq	r0, r0, r0
        10d864:	e3a02000 	mov	r2, #0	; 0x0
        10d868:	e3a010ea 	mov	r1, #234	; 0xea
        10d86c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        10d870:	e5960000 	ldr	r0, [r6]
        10d874:	eb6b5648 	bl	1be319c <$Throw>
        10d878:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

