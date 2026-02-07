#include "include/TPolygonHilite.h"

/**
 * Symbol: TPolygonHilite::__ct(long)
 * Address: 00191364
 */
TPolygonHilite::TPolygonHilite(long) {
    /*
        191364:	e1a0c00d 	mov	ip, sp
        191368:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19136c:	e24cb004 	sub	fp, ip, #4	; 0x4
        191370:	e1b04000 	movs	r4, r0
        191374:	e1a05001 	mov	r5, r1
        191378:	1a000005 	bne	191394 <TPolygonHilite::__ct(long)+0x30>
        19137c:	e3a00024 	mov	r0, #36	; 0x24
        191380:	eb68f4ec 	bl	1bce738 <$__nw(unsigned int)>
        191384:	e1b04000 	movs	r4, r0
        191388:	1a000001 	bne	191394 <TPolygonHilite::__ct(long)+0x30>
        19138c:	e1a00004 	mov	r0, r4
        191390:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        191394:	e1a00004 	mov	r0, r4
        191398:	eb63dc20 	bl	1a88420 <THilite::$__ct(void)>
        19139c:	e59f0044 	ldr	r0, [pc, #44]	; 1913e8 <TPolygonHilite::__ct(long)+0x84>
        1913a0:	e5840000 	str	r0, [r4]
        1913a4:	e3a00004 	mov	r0, #4	; 0x4
        1913a8:	e0800105 	add	r0, r0, r5, lsl #2
        1913ac:	eb694363 	bl	1be2140 <$NewPtr>
        1913b0:	e5840020 	str	r0, [r4, #32]	; fField32
        1913b4:	e3300000 	teq	r0, #0	; 0x0
        1913b8:	1a000005 	bne	1913d4 <TPolygonHilite::__ct(long)+0x70>
        1913bc:	e59f0028 	ldr	r0, [pc, #28]	; 1913ec <TPolygonHilite::__ct(long)+0x88>
        1913c0:	e5900000 	ldr	r0, [r0]
        1913c4:	e3a02000 	mov	r2, #0	; 0x0
        1913c8:	e3a010e9 	mov	r1, #233	; 0xe9
        1913cc:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        1913d0:	eb694771 	bl	1be319c <$Throw>
        1913d4:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1913d8:	e5c05003 	strb	r5, [r0, #3]	; fField3
        1913dc:	e1a01445 	mov	r1, r5, asr #8
        1913e0:	e5c01002 	strb	r1, [r0, #2]	; fField2
        1913e4:	eaffffe8 	b	19138c <TPolygonHilite::__ct(long)+0x28>
        1913e8:	0001dba8 	andeq	sp, r1, r8, lsr #23
        1913ec:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TPolygonHilite::Clone(void)
 * Address: 001913f0
 */
TPolygonHilite::Clone(void) {
    /*
        1913f0:	e1a0c00d 	mov	ip, sp
        1913f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1913f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1913fc:	e1a04000 	mov	r4, r0
        191400:	e5900020 	ldr	r0, [r0, #32]	; fField32
        191404:	e5901002 	ldr	r1, [r0, #2]	; fField2
        191408:	e1a01841 	mov	r1, r1, asr #16
        19140c:	e3a00000 	mov	r0, #0	; 0x0
        191410:	eb63dbfa 	bl	1a88400 <TPolygonHilite::$__ct(long)>
        191414:	e1b05000 	movs	r5, r0
        191418:	1a000005 	bne	191434 <TPolygonHilite::Clone(void)+0x44>
        19141c:	e59f0024 	ldr	r0, [pc, #24]	; 191448 <TPolygonHilite::Clone(void)+0x58>
        191420:	e5900000 	ldr	r0, [r0]
        191424:	e3a02000 	mov	r2, #0	; 0x0
        191428:	e3a010e9 	mov	r1, #233	; 0xe9
        19142c:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        191430:	eb694759 	bl	1be319c <$Throw>
        191434:	e1a01004 	mov	r1, r4
        191438:	e1a00005 	mov	r0, r5
        19143c:	eb63f4c0 	bl	1a8e744 <TPolygonHilite::$CopyFrom(THilite *)>
        191440:	e1a00005 	mov	r0, r5
        191444:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        191448:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TPolygonHilite::CopyFrom(THilite *)
 * Address: 0019144c
 */
TPolygonHilite::CopyFrom(THilite *) {
    /*
        19144c:	e92d4010 	stmdb	sp!, {r4, lr}
        191450:	e5902020 	ldr	r2, [r0, #32]	; fField32
        191454:	e280e004 	add	lr, r0, #4	; 0x4
        191458:	e2814004 	add	r4, r1, #4	; 0x4
        19145c:	e8941008 	ldmia	r4, {r3, ip}
        191460:	e88e1008 	stmia	lr, {r3, ip}
        191464:	e280e00c 	add	lr, r0, #12	; 0xc
        191468:	e281400c 	add	r4, r1, #12	; 0xc
        19146c:	e8b41008 	ldmia	r4!, {r3, ip}
        191470:	e8ae1008 	stmia	lr!, {r3, ip}
        191474:	e8b41008 	ldmia	r4!, {r3, ip}
        191478:	e8ae1008 	stmia	lr!, {r3, ip}
        19147c:	e8941008 	ldmia	r4, {r3, ip}
        191480:	e88e1008 	stmia	lr, {r3, ip}
        191484:	e5a02020 	str	r2, [r0, #32]!	; fField32
        191488:	e1a03002 	mov	r3, r2
        19148c:	e5b10020 	ldr	r0, [r1, #32]!	; fField32
        191490:	e5901002 	ldr	r1, [r0, #2]	; fField2
        191494:	e1a01841 	mov	r1, r1, asr #16
        191498:	e3a02004 	mov	r2, #4	; 0x4
        19149c:	e0822101 	add	r2, r2, r1, lsl #2
        1914a0:	e1a01003 	mov	r1, r3
        1914a4:	e8bd4010 	ldmia	sp!, {r4, lr}
        1914a8:	ea6936a9 	b	1bdef54 <$BlockMove>
    */
}

/**
 * Symbol: TPolygonHilite::__dt(void)
 * Address: 001914ac
 */
TPolygonHilite::~TPolygonHilite(void) {
    /*
        1914ac:	e1a0c00d 	mov	ip, sp
        1914b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1914b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1914b8:	e1a04000 	mov	r4, r0
        1914bc:	e1a05001 	mov	r5, r1
        1914c0:	e59f0028 	ldr	r0, [pc, #28]	; 1914f0 <TPolygonHilite::__dt(void)+0x44>
        1914c4:	e5840000 	str	r0, [r4]
        1914c8:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1914cc:	eb693ef8 	bl	1be10b4 <$DisposPtr>
        1914d0:	e1a00004 	mov	r0, r4
        1914d4:	e3a01000 	mov	r1, #0	; 0x0
        1914d8:	eb63dfe8 	bl	1a89480 <THilite::$__dt(void)>
        1914dc:	e3150001 	tst	r5, #1	; 0x1
        1914e0:	11a00004 	movne	r0, r4
        1914e4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1914e8:	1a68f07c 	bne	1bcd6e0 <$__dl(void *)>
        1914ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1914f0:	0001dba8 	andeq	sp, r1, r8, lsr #23
    */
}

/**
 * Symbol: TPolygonHilite::UpdateBounds(void)
 * Address: 001914f4
 */
TPolygonHilite::UpdateBounds(void) {
    /*
        1914f4:	e1a0c00d 	mov	ip, sp
        1914f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1914fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        191500:	e1a04000 	mov	r4, r0
        191504:	e5900020 	ldr	r0, [r0, #32]	; fField32
        191508:	e5901000 	ldr	r1, [r0]
        19150c:	e1a01841 	mov	r1, r1, asr #16
        191510:	e331000e 	teq	r1, #14	; 0xe
        191514:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        191518:	e2841004 	add	r1, r4, #4	; 0x4
        19151c:	e1a05001 	mov	r5, r1
        191520:	eb63e81e 	bl	1a8b5a0 <PolygonShape::$CalcBounds(TRect *)>
        191524:	e1a00005 	mov	r0, r5
        191528:	e3e01003 	mvn	r1, #3	; 0x3
        19152c:	e1a02001 	mov	r2, r1
        191530:	eb66fcc2 	bl	1b50840 <$InsetRect__FP4RectlT2>
        191534:	e5940008 	ldr	r0, [r4, #8]	; fField8
        191538:	e1a00820 	mov	r0, r0, lsr #16
        19153c:	e2800004 	add	r0, r0, #4	; 0x4
        191540:	e5c40009 	strb	r0, [r4, #9]	; fField9
        191544:	e1a00440 	mov	r0, r0, asr #8
        191548:	e5c40008 	strb	r0, [r4, #8]	; fField8
        19154c:	e594000a 	ldr	r0, [r4, #10]	; fField10
        191550:	e1a00820 	mov	r0, r0, lsr #16
        191554:	e2800004 	add	r0, r0, #4	; 0x4
        191558:	e5c4000b 	strb	r0, [r4, #11]	; fField11
        19155c:	e1a00440 	mov	r0, r0, asr #8
        191560:	e5c4000a 	strb	r0, [r4, #10]	; fField10
        191564:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPolygonHilite::Overlaps(TRect const &)
 * Address: 00191568
 */
TPolygonHilite::Overlaps(TRect const &) {
    /*
        191568:	ea642e3b 	b	1a9ce5c <THilite::$Overlaps(TRect const &)>
    */
}

/**
 * Symbol: TPolygonHilite::Encloses(TPoint const &)
 * Address: 0019156c
 */
TPolygonHilite::Encloses(TPoint const &) {
    /*
        19156c:	e1a0c00d 	mov	ip, sp
        191570:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        191574:	e24cb004 	sub	fp, ip, #4	; 0x4
        191578:	e1a04000 	mov	r4, r0
        19157c:	e1a05001 	mov	r5, r1
        191580:	e5900020 	ldr	r0, [r0, #32]	; fField32
        191584:	eb6425f2 	bl	1a9ad54 <PolygonShape::$IsCurvy(void)>
        191588:	e3300000 	teq	r0, #0	; 0x0
        19158c:	11a01005 	movne	r1, r5
        191590:	11a00004 	movne	r0, r4
        191594:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        191598:	1a6404f0 	bne	1a92960 <THilite::$Encloses(TPoint const &)>
        19159c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1915a0:	e2801004 	add	r1, r0, #4	; 0x4
        1915a4:	e3a06001 	mov	r6, #1	; 0x1
        1915a8:	e5900002 	ldr	r0, [r0, #2]	; fField2
        1915ac:	e1a00840 	mov	r0, r0, asr #16
        1915b0:	e3500001 	cmp	r0, #1	; 0x1
        1915b4:	da00000f 	ble	1915f8 <TPolygonHilite::Encloses(TPoint const &)+0x8c>
        1915b8:	e2812004 	add	r2, r1, #4	; 0x4
        1915bc:	e1a07002 	mov	r7, r2
        1915c0:	e1a00005 	mov	r0, r5
        1915c4:	e3a03010 	mov	r3, #16	; 0x10
        1915c8:	eb6425e8 	bl	1a9ad70 <$LineHitRatio__6TPointCFRC6TPointT1l>
        1915cc:	e3300102 	teq	r0, #-2147483648	; 0x80000000
        1915d0:	0a000002 	beq	1915e0 <TPolygonHilite::Encloses(TPoint const &)+0x74>
        1915d4:	e3500801 	cmp	r0, #65536	; 0x10000
        1915d8:	b3a00001 	movlt	r0, #1	; 0x1
        1915dc:	b91ba8f0 	ldmltdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1915e0:	e1a01007 	mov	r1, r7
        1915e4:	e2866001 	add	r6, r6, #1	; 0x1
        1915e8:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1915ec:	e5900002 	ldr	r0, [r0, #2]	; fField2
        1915f0:	e1560840 	cmp	r6, r0, asr #16
        1915f4:	baffffef 	blt	1915b8 <TPolygonHilite::Encloses(TPoint const &)+0x4c>
        1915f8:	e3a00000 	mov	r0, #0	; 0x0
        1915fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

