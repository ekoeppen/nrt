#include "include/TRecArea.h"

/**
 * Symbol: Make__8TRecAreaSFUlT1
 * Address: 0021c1ac
 */
void TRecArea::Make() {
    /*
        21c1ac:	e1a0c00d 	mov	ip, sp
        21c1b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21c1b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c1b8:	e1a05000 	mov	r5, r0
        21c1bc:	e1a04001 	mov	r4, r1
        21c1c0:	e3a00030 	mov	r0, #48	; 0x30
        21c1c4:	eb66c95b 	bl	1bce738 <$__nw(unsigned int)>
        21c1c8:	e1b06000 	movs	r6, r0
        21c1cc:	0a000003 	beq	21c1e0 <Make__8TRecAreaSFUlT1+0x34>
        21c1d0:	e1a00006 	mov	r0, r6
        21c1d4:	eb0001ea 	bl	21c984 <TRecObject::__ct(void)>
        21c1d8:	e59f0068 	ldr	r0, [pc, #68]	; 21c248 <Make__8TRecAreaSFUlT1+0x9c>
        21c1dc:	e5860000 	str	r0, [r6]
        21c1e0:	e3360000 	teq	r6, #0	; 0x0
        21c1e4:	0a000015 	beq	21c240 <Make__8TRecAreaSFUlT1+0x94>
        21c1e8:	e5864004 	str	r4, [r6, #4]	; fField4
        21c1ec:	e3a04000 	mov	r4, #0	; 0x0
        21c1f0:	e5864018 	str	r4, [r6, #24]	; fField24
        21c1f4:	e586500c 	str	r5, [r6, #12]
        21c1f8:	e586401c 	str	r4, [r6, #28]	; fField28
        21c1fc:	e3a00000 	mov	r0, #0	; 0x0
        21c200:	e5864014 	str	r4, [r6, #20]	; fField20
        21c204:	e0861100 	add	r1, r6, r0, lsl #2
        21c208:	e2800001 	add	r0, r0, #1	; 0x1
        21c20c:	e3500003 	cmp	r0, #3	; 0x3
        21c210:	e5a14020 	str	r4, [r1, #32]!
        21c214:	3afffffa 	bcc	21c204 <Make__8TRecAreaSFUlT1+0x58>
        21c218:	e586402c 	str	r4, [r6, #44]
        21c21c:	e5864008 	str	r4, [r6, #8]	; fField8
        21c220:	eb650f94 	bl	1b60078 <$Make__10TTypeAssocSFv>
        21c224:	e3300000 	teq	r0, #0	; 0x0
        21c228:	0a000007 	beq	21c24c <Make__8TRecAreaSFUlT1+0xa0>
        21c22c:	e5860018 	str	r0, [r6, #24]	; fField24
        21c230:	eb650f90 	bl	1b60078 <$Make__10TTypeAssocSFv>
        21c234:	e3300000 	teq	r0, #0	; 0x0
        21c238:	0a000003 	beq	21c24c <Make__8TRecAreaSFUlT1+0xa0>
        21c23c:	e586001c 	str	r0, [r6, #28]	; fField28
        21c240:	e1a00006 	mov	r0, r6
        21c244:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        21c248:	000203d8 	ldreqd	r0, [r2], -r8
        21c24c:	e1a00006 	mov	r0, r6
        21c250:	e1a0e00f 	mov	lr, pc
        21c254:	e596f000 	ldr	pc, [r6]
        21c258:	e1a00004 	mov	r0, r4
        21c25c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRecArea::Dispose(void)
 * Address: 0021c260
 */
TRecArea::Dispose(void) {
    /*
        21c260:	e1a0c00d 	mov	ip, sp
        21c264:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        21c268:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c26c:	e1a04000 	mov	r4, r0
        21c270:	eb6517b0 	bl	1b62138 <TRecArea::$Release(void)>
        21c274:	e3300000 	teq	r0, #0	; 0x0
        21c278:	11a00004 	movne	r0, r4
        21c27c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        21c280:	1a650f59 	bne	1b5ffec <TRecArea::$IDispose(void)>
        21c284:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRecArea::GetInfoFor(unsigned long, unsigned char)
 * Address: 0021c288
 */
TRecArea::GetInfoFor(unsigned long, unsigned char) {
    /*
        21c288:	e1a0c00d 	mov	ip, sp
        21c28c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21c290:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c294:	e1a04001 	mov	r4, r1
        21c298:	e20270ff 	and	r7, r2, #255	; 0xff
        21c29c:	e24dd024 	sub	sp, sp, #36	; 0x24
        21c2a0:	e590001c 	ldr	r0, [r0, #28]	; fField28
        21c2a4:	e1a0100d 	mov	r1, sp
        21c2a8:	eb650b31 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        21c2ac:	e1a05000 	mov	r5, r0
        21c2b0:	e3a06000 	mov	r6, #0	; 0x0
        21c2b4:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        21c2b8:	e3500000 	cmp	r0, #0	; 0x0
        21c2bc:	9a000030 	bls	21c384 <TRecArea::GetInfoFor(unsigned long, unsigned char)+0xfc>
        21c2c0:	e5950004 	ldr	r0, [r5, #4]	; fField4
        21c2c4:	e5900010 	ldr	r0, [r0, #16]
        21c2c8:	e1300004 	teq	r0, r4
        21c2cc:	1a000024 	bne	21c364 <TRecArea::GetInfoFor(unsigned long, unsigned char)+0xdc>
        21c2d0:	e5954008 	ldr	r4, [r5, #8]	; fField8
        21c2d4:	e3340000 	teq	r4, #0	; 0x0
        21c2d8:	1a00001e 	bne	21c358 <TRecArea::GetInfoFor(unsigned long, unsigned char)+0xd0>
        21c2dc:	e3370000 	teq	r7, #0	; 0x0
        21c2e0:	0a00001c 	beq	21c358 <TRecArea::GetInfoFor(unsigned long, unsigned char)+0xd0>
        21c2e4:	e28d2020 	add	r2, sp, #32	; 0x20
        21c2e8:	e5956004 	ldr	r6, [r5, #4]	; fField4
        21c2ec:	e1a00006 	mov	r0, r6
        21c2f0:	e3a03000 	mov	r3, #0	; 0x0
        21c2f4:	e3a01000 	mov	r1, #0	; 0x0
        21c2f8:	e596c000 	ldr	ip, [r6]
        21c2fc:	e1a0e00f 	mov	lr, pc
        21c300:	e28cf02c 	add	pc, ip, #44	; 0x2c
        21c304:	e59d0020 	ldr	r0, [sp, #32]
        21c308:	e3300000 	teq	r0, #0	; 0x0
        21c30c:	0a000010 	beq	21c354 <TRecArea::GetInfoFor(unsigned long, unsigned char)+0xcc>
        21c310:	eb6540d1 	bl	1b6c65c <$MakeHandle(long)>
        21c314:	e1a04000 	mov	r4, r0
        21c318:	e59f1040 	ldr	r1, [pc, #40]	; 21c360 <TRecArea::GetInfoFor(unsigned long, unsigned char)+0xd8>
        21c31c:	eb6544da 	bl	1b6d68c <$NameHandle(char **, unsigned long)>
        21c320:	e3340000 	teq	r4, #0	; 0x0
        21c324:	0a000006 	beq	21c344 <TRecArea::GetInfoFor(unsigned long, unsigned char)+0xbc>
        21c328:	e1a03004 	mov	r3, r4
        21c32c:	e1a00006 	mov	r0, r6
        21c330:	e3a02000 	mov	r2, #0	; 0x0
        21c334:	e3a01001 	mov	r1, #1	; 0x1
        21c338:	e596c000 	ldr	ip, [r6]
        21c33c:	e1a0e00f 	mov	lr, pc
        21c340:	e28cf02c 	add	pc, ip, #44	; 0x2c
        21c344:	e1a0000d 	mov	r0, sp
        21c348:	e1a0e00f 	mov	lr, pc
        21c34c:	e59df01c 	ldr	pc, [sp, #28]	; fField28
        21c350:	e1a05000 	mov	r5, r0
        21c354:	e5a54008 	str	r4, [r5, #8]!	; fField8
        21c358:	e1a00004 	mov	r0, r4
        21c35c:	ea000009 	b	21c388 <TRecArea::GetInfoFor(unsigned long, unsigned char)+0x100>
        21c360:	696e666f 	stmvsdb	lr!, {r0, r1, r2, r3, r5, r6, r9, sl, sp, lr}^
        21c364:	e1a0000d 	mov	r0, sp
        21c368:	e1a0e00f 	mov	lr, pc
        21c36c:	e59df018 	ldr	pc, [sp, #24]	; fField24
        21c370:	e1a05000 	mov	r5, r0
        21c374:	e2866001 	add	r6, r6, #1	; 0x1
        21c378:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        21c37c:	e1500006 	cmp	r0, r6
        21c380:	8affffce 	bhi	21c2c0 <TRecArea::GetInfoFor(unsigned long, unsigned char)+0x38>
        21c384:	e3a00000 	mov	r0, #0	; 0x0
        21c388:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TRecArea::IDispose(void)
 * Address: 0021c38c
 */
TRecArea::IDispose(void) {
    /*
        21c38c:	e1a0c00d 	mov	ip, sp
        21c390:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21c394:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c398:	e1a04000 	mov	r4, r0
        21c39c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        21c3a0:	e3300000 	teq	r0, #0	; 0x0
        21c3a4:	11a0e00f 	movne	lr, pc
        21c3a8:	1590f000 	ldrne	pc, [r0]
        21c3ac:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21c3b0:	e3300000 	teq	r0, #0	; 0x0
        21c3b4:	11a0e00f 	movne	lr, pc
        21c3b8:	1590f000 	ldrne	pc, [r0]
        21c3bc:	e3a05000 	mov	r5, #0	; 0x0
        21c3c0:	e0840105 	add	r0, r4, r5, lsl #2
        21c3c4:	e5900020 	ldr	r0, [r0, #32]
        21c3c8:	e3300000 	teq	r0, #0	; 0x0
        21c3cc:	11a0e00f 	movne	lr, pc
        21c3d0:	1590f000 	ldrne	pc, [r0]
        21c3d4:	e2855001 	add	r5, r5, #1	; 0x1
        21c3d8:	e3550003 	cmp	r5, #3	; 0x3
        21c3dc:	3afffff7 	bcc	21c3c0 <TRecArea::IDispose(void)+0x34>
        21c3e0:	e3340000 	teq	r4, #0	; 0x0
        21c3e4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        21c3e8:	e1a00004 	mov	r0, r4
        21c3ec:	e3a01000 	mov	r1, #0	; 0x0
        21c3f0:	eb000170 	bl	21c9b8 <TRecObject::__dt(void)>
        21c3f4:	e1a00004 	mov	r0, r4
        21c3f8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        21c3fc:	ea66c4b7 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TRecArea::ParamsAllSet(unsigned long)
 * Address: 0021c400
 */
TRecArea::ParamsAllSet(unsigned long) {
    /*
        21c400:	e1a0c00d 	mov	ip, sp
        21c404:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        21c408:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c40c:	e1a04000 	mov	r4, r0
        21c410:	e1a05001 	mov	r5, r1
        21c414:	e24dd020 	sub	sp, sp, #32	; 0x20
        21c418:	e590001c 	ldr	r0, [r0, #28]	; fField28
        21c41c:	e1a0100d 	mov	r1, sp
        21c420:	eb650ad3 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        21c424:	e1a06000 	mov	r6, r0
        21c428:	e3a07000 	mov	r7, #0	; 0x0
        21c42c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        21c430:	e3500000 	cmp	r0, #0	; 0x0
        21c434:	9a000016 	bls	21c494 <TRecArea::ParamsAllSet(unsigned long)+0x94>
        21c438:	e5960004 	ldr	r0, [r6, #4]	; fField4
        21c43c:	e5900010 	ldr	r0, [r0, #16]
        21c440:	e1300005 	teq	r0, r5
        21c444:	1a00000a 	bne	21c474 <TRecArea::ParamsAllSet(unsigned long)+0x74>
        21c448:	e5960004 	ldr	r0, [r6, #4]	; fField4
        21c44c:	e5901000 	ldr	r1, [r0]
        21c450:	e1a0e00f 	mov	lr, pc
        21c454:	e281f034 	add	pc, r1, #52	; 0x34
        21c458:	e1a01004 	mov	r1, r4
        21c45c:	e5b62004 	ldr	r2, [r6, #4]!	; fField4
        21c460:	e1a00002 	mov	r0, r2
        21c464:	e5922000 	ldr	r2, [r2]
        21c468:	e1a0e00f 	mov	lr, pc
        21c46c:	e282f038 	add	pc, r2, #56	; 0x38
        21c470:	ea000007 	b	21c494 <TRecArea::ParamsAllSet(unsigned long)+0x94>
        21c474:	e1a0000d 	mov	r0, sp
        21c478:	e1a0e00f 	mov	lr, pc
        21c47c:	e59df018 	ldr	pc, [sp, #24]	; fField24
        21c480:	e1a06000 	mov	r6, r0
        21c484:	e2877001 	add	r7, r7, #1	; 0x1
        21c488:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        21c48c:	e1500007 	cmp	r0, r7
        21c490:	8affffe8 	bhi	21c438 <TRecArea::ParamsAllSet(unsigned long)+0x38>
        21c494:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TRecArea::Clone(void)
 * Address: 0021c67c
 */
TRecArea::Clone(void) {
    /*
        21c67c:	e5901008 	ldr	r1, [r0, #8]	; fField8
        21c680:	e2811001 	add	r1, r1, #1	; 0x1
        21c684:	e5a01008 	str	r1, [r0, #8]!	; fField8
        21c688:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecArea::Release(void)
 * Address: 0021c6e8
 */
TRecArea::Release(void) {
    /*
        21c6e8:	e5901008 	ldr	r1, [r0, #8]	; fField8
        21c6ec:	e2511001 	subs	r1, r1, #1	; 0x1
        21c6f0:	e5a01008 	str	r1, [r0, #8]!	; fField8
        21c6f4:	53a00000 	movpl	r0, #0	; 0x0
        21c6f8:	43a00001 	movmi	r0, #1	; 0x1
        21c6fc:	e20000ff 	and	r0, r0, #255	; 0xff
        21c700:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecArea::SizeInBytes(void)
 * Address: 0021c704
 */
TRecArea::SizeInBytes(void) {
    /*
        21c704:	e1a0c00d 	mov	ip, sp
        21c708:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21c70c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c710:	e1a04000 	mov	r4, r0
        21c714:	e5900018 	ldr	r0, [r0, #24]	; fField24
        21c718:	e5901000 	ldr	r1, [r0]
        21c71c:	e1a0e00f 	mov	lr, pc
        21c720:	e281f008 	add	pc, r1, #8	; 0x8
        21c724:	e1a05000 	mov	r5, r0
        21c728:	e594001c 	ldr	r0, [r4, #28]	; fField28
        21c72c:	e5901000 	ldr	r1, [r0]
        21c730:	e1a0e00f 	mov	lr, pc
        21c734:	e281f008 	add	pc, r1, #8	; 0x8
        21c738:	e0805005 	add	r5, r0, r5
        21c73c:	e1a00004 	mov	r0, r4
        21c740:	eb651a96 	bl	1b631a0 <TRecObject::$SizeInBytes(void)>
        21c744:	e0800005 	add	r0, r0, r5
        21c748:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRecArea::AddAType(unsigned long, unsigned long (*)(TArray *), unsigned long, dInfoRec *)
 * Address: 0021c74c
 */
TRecArea::AddAType(unsigned long, unsigned long (*)(TArray *), unsigned long, dInfoRec *) {
    /*
        21c74c:	e1a0c00d 	mov	ip, sp
        21c750:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        21c754:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c758:	e1a04000 	mov	r4, r0
        21c75c:	e1a05003 	mov	r5, r3
        21c760:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        21c764:	e52d101c 	str	r1, [sp, -#28]!	; fField28
        21c768:	e3a01000 	mov	r1, #0	; 0x0
        21c76c:	e58d1004 	str	r1, [sp, #4]	; fField4
        21c770:	e58d100c 	str	r1, [sp, #12]
        21c774:	e5cd1018 	strb	r1, [sp, #24]	; fField24
        21c778:	e3300000 	teq	r0, #0	; 0x0
        21c77c:	158d000c 	strne	r0, [sp, #12]
        21c780:	e58d1008 	str	r1, [sp, #8]	; fField8
        21c784:	e58d2010 	str	r2, [sp, #16]
        21c788:	e58d5014 	str	r5, [sp, #20]	; fField20
        21c78c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21c790:	e1a0100d 	mov	r1, sp
        21c794:	e590600c 	ldr	r6, [r0, #12]
        21c798:	eb64f972 	bl	1b5ad68 <TTypeAssoc::$AddAssoc(Assoc *)>
        21c79c:	e3350001 	teq	r5, #1	; 0x1
        21c7a0:	1a000005 	bne	21c7bc <TRecArea::AddAType(unsigned long, unsigned long (*)(TArray *), unsigned long, dInfoRec *)+0x70>
        21c7a4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        21c7a8:	e590000c 	ldr	r0, [r0, #12]
        21c7ac:	e1500006 	cmp	r0, r6
        21c7b0:	85940014 	ldrhi	r0, [r4, #20]	; fField20
        21c7b4:	82800001 	addhi	r0, r0, #1	; 0x1
        21c7b8:	85a40014 	strhi	r0, [r4, #20]!	; fField20
        21c7bc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TRecArea::Dump(TMsg *)
 * Address: 0021c7c0
 */
TRecArea::Dump(TMsg *) {
    /*
        21c7c0:	e1a0f00e 	mov	pc, lr
    */
}

