#include "include/TXAttrValues.h"

/**
 * Symbol: TXAttrValues::__ct(void)
 * Address: 00231340
 */
TXAttrValues::TXAttrValues(void) {
    /*
        231340:	e1a0c00d 	mov	ip, sp
        231344:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        231348:	e24cb004 	sub	fp, ip, #4	; 0x4
        23134c:	e1b04000 	movs	r4, r0
        231350:	1a000003 	bne	231364 <TXAttrValues::__ct(void)+0x24>
        231354:	e3a00018 	mov	r0, #24	; 0x18
        231358:	eb6674f6 	bl	1bce738 <$__nw(unsigned int)>
        23135c:	e1b04000 	movs	r4, r0
        231360:	0a000005 	beq	23137c <TXAttrValues::__ct(void)+0x3c>
        231364:	e1a00004 	mov	r0, r4
        231368:	e3a02000 	mov	r2, #0	; 0x0
        23136c:	e3a01020 	mov	r1, #32	; 0x20
        231370:	eb654fd4 	bl	1b852c8 <TXArray::$__ct(unsigned char, int)>
        231374:	e59f0008 	ldr	r0, [pc, #8]	; 231384 <TXAttrValues::__ct(void)+0x44>	; fField8
        231378:	e5840000 	str	r0, [r4]
        23137c:	e1a00004 	mov	r0, r4
        231380:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        231384:	0001c70c 	andeq	ip, r1, ip, lsl #14
    */
}

/**
 * Symbol: TXAttrValues::__dt(void)
 * Address: 00231388
 */
TXAttrValues::~TXAttrValues(void) {
    /*
        231388:	e1a0c00d 	mov	ip, sp
        23138c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        231390:	e24cb004 	sub	fp, ip, #4	; 0x4
        231394:	e1a04000 	mov	r4, r0
        231398:	e1a05001 	mov	r5, r1
        23139c:	e59f0060 	ldr	r0, [pc, #60]	; 231404 <TXAttrValues::__dt(void)+0x7c>
        2313a0:	e5840000 	str	r0, [r4]
        2313a4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2313a8:	e2506001 	subs	r6, r0, #1	; 0x1
        2313ac:	4a00000c 	bmi	2313e4 <TXAttrValues::__dt(void)+0x5c>
        2313b0:	e1a01006 	mov	r1, r6
        2313b4:	e1a00004 	mov	r0, r4
        2313b8:	eb654fc4 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2313bc:	e5d01004 	ldrb	r1, [r0, #4]	; fField4
        2313c0:	e3310000 	teq	r1, #0	; 0x0
        2313c4:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        2313c8:	13300000 	teqne	r0, #0	; 0x0
        2313cc:	0a000002 	beq	2313dc <TXAttrValues::__dt(void)+0x54>
        2313d0:	e3a01001 	mov	r1, #1	; 0x1
        2313d4:	e1a0e00f 	mov	lr, pc
        2313d8:	e590f000 	ldr	pc, [r0]
        2313dc:	e2566001 	subs	r6, r6, #1	; 0x1
        2313e0:	5afffff2 	bpl	2313b0 <TXAttrValues::__dt(void)+0x28>
        2313e4:	e1a00004 	mov	r0, r4
        2313e8:	e3a01000 	mov	r1, #0	; 0x0
        2313ec:	eb654fb6 	bl	1b852cc <TXArray::$__dt(void)>
        2313f0:	e3150001 	tst	r5, #1	; 0x1
        2313f4:	11a00004 	movne	r0, r4
        2313f8:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        2313fc:	1a6670b7 	bne	1bcd6e0 <$__dl(void *)>
        231400:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        231404:	0001c70c 	andeq	ip, r1, ip, lsl #14
    */
}

/**
 * Symbol: TXAttrValues::Add(unsigned long, void const *, int, unsigned char)
 * Address: 00231408
 */
TXAttrValues::Add(unsigned long, void const *, int, unsigned char) {
    /*
        231408:	e1a0c00d 	mov	ip, sp
        23140c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        231410:	e24cb004 	sub	fp, ip, #4	; 0x4
        231414:	e1a06001 	mov	r6, r1
        231418:	e1a05002 	mov	r5, r2
        23141c:	e1a04003 	mov	r4, r3
        231420:	e59b1004 	ldr	r1, [fp, #4]	; fField4
        231424:	e20180ff 	and	r8, r1, #255	; 0xff
        231428:	e3e03000 	mvn	r3, #0	; 0x0
        23142c:	e3a02001 	mov	r2, #1	; 0x1
        231430:	e3a01000 	mov	r1, #0	; 0x0
        231434:	eb654fa9 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        231438:	e1a07000 	mov	r7, r0
        23143c:	e5804008 	str	r4, [r0, #8]	; fField8
        231440:	e5806000 	str	r6, [r0]
        231444:	e280100c 	add	r1, r0, #12	; 0xc
        231448:	e1a02004 	mov	r2, r4
        23144c:	e1a00005 	mov	r0, r5
        231450:	eb66b6bf 	bl	1bdef54 <$BlockMove>
        231454:	e5c78004 	strb	r8, [r7, #4]	; fField4
        231458:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXAttrValues::Remove(long, long)
 * Address: 0023145c
 */
TXAttrValues::Remove(long, long) {
    /*
        23145c:	e1a0c00d 	mov	ip, sp
        231460:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        231464:	e24cb004 	sub	fp, ip, #4	; 0x4
        231468:	e1a06000 	mov	r6, r0
        23146c:	e1a05001 	mov	r5, r1
        231470:	e1a04002 	mov	r4, r2
        231474:	e3a07000 	mov	r7, #0	; 0x0
        231478:	e3520000 	cmp	r2, #0	; 0x0
        23147c:	da00000d 	ble	2314b8 <TXAttrValues::Remove(long, long)+0x5c>
        231480:	e0871005 	add	r1, r7, r5
        231484:	e1a00006 	mov	r0, r6
        231488:	eb654f90 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23148c:	e5d01004 	ldrb	r1, [r0, #4]	; fField4
        231490:	e3310000 	teq	r1, #0	; 0x0
        231494:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        231498:	13300000 	teqne	r0, #0	; 0x0
        23149c:	0a000002 	beq	2314ac <TXAttrValues::Remove(long, long)+0x50>
        2314a0:	e3a01001 	mov	r1, #1	; 0x1
        2314a4:	e1a0e00f 	mov	lr, pc
        2314a8:	e590f000 	ldr	pc, [r0]
        2314ac:	e2877001 	add	r7, r7, #1	; 0x1
        2314b0:	e1570004 	cmp	r7, r4
        2314b4:	bafffff1 	blt	231480 <TXAttrValues::Remove(long, long)+0x24>
        2314b8:	e1a02004 	mov	r2, r4
        2314bc:	e1a01005 	mov	r1, r5
        2314c0:	e1a00006 	mov	r0, r6
        2314c4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2314c8:	ea654f85 	b	1b852e4 <TXArray::$Remove(long, long)>
    */
}

/**
 * Symbol: TXAttrValues::GetIndAttrData( const(long, unsigned long *, void *, int *))
 * Address: 002314cc
 */
TXAttrValues::GetIndAttrData( const(long, unsigned long *, void *, int *)) {
    /*
        2314cc:	e1a0c00d 	mov	ip, sp
        2314d0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2314d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2314d8:	e1a05002 	mov	r5, r2
        2314dc:	e1a04003 	mov	r4, r3
        2314e0:	e59b6004 	ldr	r6, [fp, #4]	; fField4
        2314e4:	eb654f79 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2314e8:	e5901000 	ldr	r1, [r0]
        2314ec:	e5851000 	str	r1, [r5]
        2314f0:	e5901008 	ldr	r1, [r0, #8]	; fField8
        2314f4:	e5861000 	str	r1, [r6]
        2314f8:	e1a01004 	mov	r1, r4
        2314fc:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
        231500:	e2800004 	add	r0, r0, #4	; 0x4
        231504:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        231508:	ea66b691 	b	1bdef54 <$BlockMove>
    */
}

/**
 * Symbol: TXAttrValues::SetIndAttrData(long, unsigned long, void const *, int)
 * Address: 0023150c
 */
TXAttrValues::SetIndAttrData(long, unsigned long, void const *, int) {
    /*
        23150c:	e1a0c00d 	mov	ip, sp
        231510:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        231514:	e24cb004 	sub	fp, ip, #4	; 0x4
        231518:	e1a05002 	mov	r5, r2
        23151c:	e1a04003 	mov	r4, r3
        231520:	e59b6004 	ldr	r6, [fp, #4]	; fField4
        231524:	eb654f69 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        231528:	e5805000 	str	r5, [r0]
        23152c:	e5806008 	str	r6, [r0, #8]	; fField8
        231530:	e280100c 	add	r1, r0, #12	; 0xc
        231534:	e1a02006 	mov	r2, r6
        231538:	e1a00004 	mov	r0, r4
        23153c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        231540:	ea66b683 	b	1bdef54 <$BlockMove>
    */
}

/**
 * Symbol: TXAttrValues::GetValue( const(unsigned long, void *))
 * Address: 00231544
 */
TXAttrValues::GetValue( const(unsigned long, void *)) {
    /*
        231544:	e1a0c00d 	mov	ip, sp
        231548:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23154c:	e24cb004 	sub	fp, ip, #4	; 0x4
        231550:	e1a04000 	mov	r4, r0
        231554:	e1a06001 	mov	r6, r1
        231558:	e1a05002 	mov	r5, r2
        23155c:	e3a01000 	mov	r1, #0	; 0x0
        231560:	eb654f5a 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        231564:	e1a07000 	mov	r7, r0
        231568:	e1a00004 	mov	r0, r4
        23156c:	eb654f58 	bl	1b852d4 <TXArray::$GetLastElementPtr( const(void))>
        231570:	e1570000 	cmp	r7, r0
        231574:	8a00000b 	bhi	2315a8 <TXAttrValues::GetValue( const(unsigned long, void *))+0x64>
        231578:	e5971000 	ldr	r1, [r7]
        23157c:	e1310006 	teq	r1, r6
        231580:	1a000005 	bne	23159c <TXAttrValues::GetValue( const(unsigned long, void *))+0x58>
        231584:	e5972008 	ldr	r2, [r7, #8]	; fField8
        231588:	e287000c 	add	r0, r7, #12	; 0xc
        23158c:	e1a01005 	mov	r1, r5
        231590:	eb66b66f 	bl	1bdef54 <$BlockMove>
        231594:	e3a00001 	mov	r0, #1	; 0x1
        231598:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23159c:	e2877020 	add	r7, r7, #32	; 0x20
        2315a0:	e1570000 	cmp	r7, r0
        2315a4:	9afffff3 	bls	231578 <TXAttrValues::GetValue( const(unsigned long, void *))+0x34>
        2315a8:	e3a00000 	mov	r0, #0	; 0x0
        2315ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

