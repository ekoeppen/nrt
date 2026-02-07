#include "include/TRing.h"

/**
 * Symbol: TRing::Rotate(int)
 * Address: 0025c314
 */
TRing::Rotate(int) {
    /*
        25c314:	e1a0c00d 	mov	ip, sp
        25c318:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25c31c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c320:	e1a04000 	mov	r4, r0
        25c324:	e3510000 	cmp	r1, #0	; 0x0
        25c328:	e5905008 	ldr	r5, [r0, #8]
        25c32c:	ba000008 	blt	25c354 <TRing::Rotate(int)+0x40>
        25c330:	e1a00005 	mov	r0, r5
        25c334:	eb655981 	bl	1bb2940 <$__rt_sdiv>
        25c338:	e5940000 	ldr	r0, [r4]
        25c33c:	e0800001 	add	r0, r0, r1
        25c340:	e5840000 	str	r0, [r4]
        25c344:	e1500005 	cmp	r0, r5
        25c348:	a0400005 	subge	r0, r0, r5
        25c34c:	aa000009 	bge	25c378 <TRing::Rotate(int)+0x64>
        25c350:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25c354:	e2611000 	rsb	r1, r1, #0	; 0x0
        25c358:	e1a00005 	mov	r0, r5
        25c35c:	eb655977 	bl	1bb2940 <$__rt_sdiv>
        25c360:	e5940000 	ldr	r0, [r4]
        25c364:	e0500001 	subs	r0, r0, r1
        25c368:	e5840000 	str	r0, [r4]
        25c36c:	e1a01000 	mov	r1, r0
        25c370:	591ba830 	ldmpldb	fp, {r4, r5, fp, sp, pc}
        25c374:	e0810005 	add	r0, r1, r5
        25c378:	e5840000 	str	r0, [r4]
        25c37c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRing::operator[](int const)
 * Address: 0025c380
 */
TRing::operator[](int const) {
    /*
        25c380:	e2802004 	add	r2, r0, #4	; 0x4
        25c384:	e1a03002 	mov	r3, r2
        25c388:	e5922004 	ldr	r2, [r2, #4]
        25c38c:	e5900000 	ldr	r0, [r0]
        25c390:	e0800001 	add	r0, r0, r1
        25c394:	e1500002 	cmp	r0, r2
        25c398:	a0400002 	subge	r0, r0, r2
        25c39c:	e5b31008 	ldr	r1, [r3, #8]!
        25c3a0:	e0810100 	add	r0, r1, r0, lsl #2
        25c3a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRing::Push(void *)
 * Address: 0025c3a8
 */
TRing::Push(void *) {
    /*
        25c3a8:	e1a0c00d 	mov	ip, sp
        25c3ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25c3b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c3b4:	e1a04000 	mov	r4, r0
        25c3b8:	e1a05001 	mov	r5, r1
        25c3bc:	e2800004 	add	r0, r0, #4	; 0x4
        25c3c0:	e1a06000 	mov	r6, r0
        25c3c4:	e3a01001 	mov	r1, #1	; 0x1
        25c3c8:	eb629f9f 	bl	1b0424c <TDynArray::$Resize(int)>
        25c3cc:	e3700001 	cmn	r0, #1	; 0x1
        25c3d0:	03e00000 	mvneq	r0, #0	; 0x0
        25c3d4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        25c3d8:	e5960004 	ldr	r0, [r6, #4]
        25c3dc:	e2400001 	sub	r0, r0, #1	; 0x1
        25c3e0:	e5941000 	ldr	r1, [r4]
        25c3e4:	e1500001 	cmp	r0, r1
        25c3e8:	da00000a 	ble	25c418 <TRing::Push(void *)+0x70>
        25c3ec:	e2401001 	sub	r1, r0, #1	; 0x1
        25c3f0:	e1a02001 	mov	r2, r1
        25c3f4:	e5963008 	ldr	r3, [r6, #8]
        25c3f8:	e0831101 	add	r1, r3, r1, lsl #2
        25c3fc:	e5911000 	ldr	r1, [r1]
        25c400:	e0830100 	add	r0, r3, r0, lsl #2
        25c404:	e5801000 	str	r1, [r0]
        25c408:	e1a00002 	mov	r0, r2
        25c40c:	e5941000 	ldr	r1, [r4]
        25c410:	e1520001 	cmp	r2, r1
        25c414:	cafffff4 	bgt	25c3ec <TRing::Push(void *)+0x44>
        25c418:	e5940000 	ldr	r0, [r4]
        25c41c:	e5b61008 	ldr	r1, [r6, #8]!
        25c420:	e0810100 	add	r0, r1, r0, lsl #2
        25c424:	e5805000 	str	r5, [r0]
        25c428:	e3a00000 	mov	r0, #0	; 0x0
        25c42c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRing::Pop(void)
 * Address: 0025c430
 */
TRing::Pop(void) {
    /*
        25c430:	e1a0c00d 	mov	ip, sp
        25c434:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25c438:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c43c:	e2801004 	add	r1, r0, #4	; 0x4
        25c440:	e5900000 	ldr	r0, [r0]
        25c444:	e5913008 	ldr	r3, [r1, #8]
        25c448:	e0832100 	add	r2, r3, r0, lsl #2
        25c44c:	e5924000 	ldr	r4, [r2]
        25c450:	e2800001 	add	r0, r0, #1	; 0x1
        25c454:	e5912004 	ldr	r2, [r1, #4]
        25c458:	e1500002 	cmp	r0, r2
        25c45c:	aa000008 	bge	25c484 <TRing::Pop(void)+0x54>
        25c460:	e591c008 	ldr	ip, [r1, #8]
        25c464:	e08c3100 	add	r3, ip, r0, lsl #2
        25c468:	e593e000 	ldr	lr, [r3]
        25c46c:	e2403001 	sub	r3, r0, #1	; 0x1
        25c470:	e08c3103 	add	r3, ip, r3, lsl #2
        25c474:	e2800001 	add	r0, r0, #1	; 0x1
        25c478:	e1500002 	cmp	r0, r2
        25c47c:	e583e000 	str	lr, [r3]
        25c480:	bafffff6 	blt	25c460 <TRing::Pop(void)+0x30>
        25c484:	e1a00001 	mov	r0, r1
        25c488:	e3e01000 	mvn	r1, #0	; 0x0
        25c48c:	eb629f6e 	bl	1b0424c <TDynArray::$Resize(int)>
        25c490:	e1a00004 	mov	r0, r4
        25c494:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

