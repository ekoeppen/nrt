#include "include/CRefPipe.h"

/**
 * Symbol: CRefPipe::__ct(void)
 * Address: 001a43fc
 */
CRefPipe::CRefPipe(void) {
    /*
        1a43fc:	e1a0c00d 	mov	ip, sp
        1a4400:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1a4404:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a4408:	e1b04000 	movs	r4, r0
        1a440c:	1a000003 	bne	1a4420 <CRefPipe::__ct(void)+0x24>
        1a4410:	e3a0001c 	mov	r0, #28	; 0x1c
        1a4414:	eb68a8c7 	bl	1bce738 <$__nw(unsigned int)>
        1a4418:	e1b04000 	movs	r4, r0
        1a441c:	0a00000b 	beq	1a4450 <CRefPipe::__ct(void)+0x54>
        1a4420:	e1a00004 	mov	r0, r4
        1a4424:	eb683105 	bl	1bb0840 <CPtrPipe::$__ct(void)>
        1a4428:	e3a00002 	mov	r0, #2	; 0x2
        1a442c:	eb687746 	bl	1bc214c <$AllocateRefHandle(long)>
        1a4430:	e3a01000 	mov	r1, #0	; 0x0
        1a4434:	e5840018 	str	r0, [r4, #24]
        1a4438:	e5a01004 	str	r1, [r0, #4]!	; fField4
        1a443c:	e59f0014 	ldr	r0, [pc, #14]	; 1a4458 <CRefPipe::__ct(void)+0x5c>
        1a4440:	e3a01002 	mov	r1, #2	; 0x2
        1a4444:	e5840000 	str	r0, [r4]
        1a4448:	e5940018 	ldr	r0, [r4, #24]
        1a444c:	e5801000 	str	r1, [r0]
        1a4450:	e1a00004 	mov	r0, r4
        1a4454:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1a4458:	0001ff98 	muleq	r1, r8, pc
    */
}

/**
 * Symbol: CRefPipe::__dt(void)
 * Address: 001a445c
 */
CRefPipe::~CRefPipe(void) {
    /*
        1a445c:	e1a0c00d 	mov	ip, sp
        1a4460:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a4464:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a4468:	e1a04000 	mov	r4, r0
        1a446c:	e1a05001 	mov	r5, r1
        1a4470:	e59f004c 	ldr	r0, [pc, #4c]	; 1a44c4 <CRefPipe::__dt(void)+0x68>	; fField4
        1a4474:	e5840000 	str	r0, [r4]
        1a4478:	e2840018 	add	r0, r4, #24	; 0x18
        1a447c:	e1a06000 	mov	r6, r0
        1a4480:	e5900000 	ldr	r0, [r0]
        1a4484:	e5900000 	ldr	r0, [r0]
        1a4488:	e3300002 	teq	r0, #2	; 0x2
        1a448c:	1b688ff7 	blne	1bc8470 <$UnlockRef(long)>
        1a4490:	e3a01002 	mov	r1, #2	; 0x2
        1a4494:	e5960000 	ldr	r0, [r6]
        1a4498:	e5801000 	str	r1, [r0]
        1a449c:	e5960000 	ldr	r0, [r6]
        1a44a0:	eb687b45 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a44a4:	e1a00004 	mov	r0, r4
        1a44a8:	e3a01000 	mov	r1, #0	; 0x0
        1a44ac:	eb6830ef 	bl	1bb0870 <CPtrPipe::$__dt(void)>
        1a44b0:	e3150001 	tst	r5, #1	; 0x1
        1a44b4:	11a00004 	movne	r0, r4
        1a44b8:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        1a44bc:	1a68a487 	bne	1bcd6e0 <$__dl(void *)>
        1a44c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1a44c4:	0001ff98 	muleq	r1, r8, pc
    */
}

/**
 * Symbol: CRefPipe::InitSink(long, RefVar const &, PipeCallBack *)
 * Address: 001a44c8
 */
CRefPipe::InitSink(long, RefVar const &, PipeCallBack *) {
    /*
        1a44c8:	e1a0c00d 	mov	ip, sp
        1a44cc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a44d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a44d4:	e1a06000 	mov	r6, r0
        1a44d8:	e1a04001 	mov	r4, r1
        1a44dc:	e1a05002 	mov	r5, r2
        1a44e0:	e1a07003 	mov	r7, r3
        1a44e4:	e5920000 	ldr	r0, [r2]
        1a44e8:	e5900000 	ldr	r0, [r0]
        1a44ec:	e59f9044 	ldr	r9, [pc, #44]	; 1a4538 <CRefPipe::InitSink(long, RefVar const &, PipeCallBack *)+0x70>
        1a44f0:	e2868018 	add	r8, r6, #24	; 0x18
        1a44f4:	e3300002 	teq	r0, #2	; 0x2
        1a44f8:	0a00000f 	beq	1a453c <CRefPipe::InitSink(long, RefVar const &, PipeCallBack *)+0x74>
        1a44fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1a4500:	e1a0a008 	mov	sl, r8
        1a4504:	e1a00104 	mov	r0, r4, lsl #2
        1a4508:	eb68770f 	bl	1bc214c <$AllocateRefHandle(long)>
        1a450c:	e58d0000 	str	r0, [sp]
        1a4510:	e1a0200d 	mov	r2, sp
        1a4514:	e1a01009 	mov	r1, r9
        1a4518:	e1a00005 	mov	r0, r5
        1a451c:	ebfd6f44 	bl	100234 <FLBAlloc>
        1a4520:	e59a1000 	ldr	r1, [sl]
        1a4524:	e5810000 	str	r0, [r1]
        1a4528:	e59d0000 	ldr	r0, [sp]
        1a452c:	eb687b22 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1a4530:	e28dd004 	add	sp, sp, #4	; 0x4
        1a4534:	ea000006 	b	1a4554 <CRefPipe::InitSink(long, RefVar const &, PipeCallBack *)+0x8c>
        1a4538:	006820a0 	rsbeq	r2, r8, r0, lsr #1
        1a453c:	e1a05008 	mov	r5, r8
        1a4540:	e1a01004 	mov	r1, r4
        1a4544:	e1a00009 	mov	r0, r9
        1a4548:	eb6876fb 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        1a454c:	e5951000 	ldr	r1, [r5]
        1a4550:	e5810000 	str	r0, [r1]
        1a4554:	e5980000 	ldr	r0, [r8]
        1a4558:	e5900000 	ldr	r0, [r0]
        1a455c:	eb688354 	bl	1bc52b4 <$LockRef(long)>
        1a4560:	e1a03007 	mov	r3, r7
        1a4564:	e92d0008 	stmdb	sp!, {r3}
        1a4568:	e5980000 	ldr	r0, [r8]
        1a456c:	e5900000 	ldr	r0, [r0]
        1a4570:	eb6876f9 	bl	1bc215c <$BinaryData(long)>
        1a4574:	e1a01000 	mov	r1, r0
        1a4578:	e1a02004 	mov	r2, r4
        1a457c:	e1a00006 	mov	r0, r6
        1a4580:	e3a03000 	mov	r3, #0	; 0x0
        1a4584:	eb680b7e 	bl	1ba7384 <CPtrPipe::$Init(void *, long, unsigned char, PipeCallBack *)>
        1a4588:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: CRefPipe::InitSource(RefVar const &, PipeCallBack *)
 * Address: 001a458c
 */
CRefPipe::InitSource(RefVar const &, PipeCallBack *) {
    /*
        1a458c:	e1a0c00d 	mov	ip, sp
        1a4590:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1a4594:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a4598:	e1a04000 	mov	r4, r0
        1a459c:	e1a05002 	mov	r5, r2
        1a45a0:	e2800018 	add	r0, r0, #24	; 0x18
        1a45a4:	e1a06000 	mov	r6, r0
        1a45a8:	e5911000 	ldr	r1, [r1]
        1a45ac:	e5911000 	ldr	r1, [r1]
        1a45b0:	e5900000 	ldr	r0, [r0]
        1a45b4:	e5801000 	str	r1, [r0]
        1a45b8:	e5960000 	ldr	r0, [r6]
        1a45bc:	e5900000 	ldr	r0, [r0]
        1a45c0:	eb68833b 	bl	1bc52b4 <$LockRef(long)>
        1a45c4:	e1a03005 	mov	r3, r5
        1a45c8:	e92d0008 	stmdb	sp!, {r3}
        1a45cc:	e5960000 	ldr	r0, [r6]
        1a45d0:	e5900000 	ldr	r0, [r0]
        1a45d4:	eb688334 	bl	1bc52ac <$Length(long)>
        1a45d8:	e1a05000 	mov	r5, r0
        1a45dc:	e5960000 	ldr	r0, [r6]
        1a45e0:	e5900000 	ldr	r0, [r0]
        1a45e4:	eb6876dc 	bl	1bc215c <$BinaryData(long)>
        1a45e8:	e1a01000 	mov	r1, r0
        1a45ec:	e1a00004 	mov	r0, r4
        1a45f0:	e3a03000 	mov	r3, #0	; 0x0
        1a45f4:	e1a02005 	mov	r2, r5
        1a45f8:	eb680b61 	bl	1ba7384 <CPtrPipe::$Init(void *, long, unsigned char, PipeCallBack *)>
        1a45fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

