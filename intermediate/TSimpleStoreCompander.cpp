#include "include/TSimpleStoreCompander.h"

/**
 * Symbol: Sizeof__21TSimpleStoreCompanderSFv
 * Address: 001fa384
 */
void TSimpleStoreCompander::Sizeof() {
    /*
        1fa384:	e3a00020 	mov	r0, #32	; 0x20
        1fa388:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleStoreCompander::New(void)
 * Address: 001fa3fc
 */
TSimpleStoreCompander::New(void) {
    /*
        1fa3fc:	e3a01000 	mov	r1, #0	; 0x0
        1fa400:	e5801010 	str	r1, [r0, #16]	; fField16
        1fa404:	e5c0101c 	strb	r1, [r0, #28]	; fField28
        1fa408:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleStoreCompander::Delete(void)
 * Address: 001fa40c
 */
TSimpleStoreCompander::Delete(void) {
    /*
        1fa40c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 001fa410
 */
TSimpleStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
        1fa410:	e1a0c00d 	mov	ip, sp
        1fa414:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1fa418:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa41c:	e1a04001 	mov	r4, r1
        1fa420:	e59b1004 	ldr	r1, [fp, #4]
        1fa424:	e5802014 	str	r2, [r0, #20]	; fField20
        1fa428:	e1a06002 	mov	r6, r2
        1fa42c:	e5804010 	str	r4, [r0, #16]	; fField16
        1fa430:	e5c0101c 	strb	r1, [r0, #28]	; fField28
        1fa434:	e2805018 	add	r5, r0, #24	; 0x18
        1fa438:	e24dd014 	sub	sp, sp, #20	; 0x14
        1fa43c:	e1a0000d 	mov	r0, sp
        1fa440:	eb63d4e0 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        1fa444:	e3a03014 	mov	r3, #20	; 0x14
        1fa448:	e92d0008 	stmdb	sp!, {r3}
        1fa44c:	e28d3004 	add	r3, sp, #4	; 0x4
        1fa450:	e1a01006 	mov	r1, r6
        1fa454:	e1a00004 	mov	r0, r4
        1fa458:	e3a02000 	mov	r2, #0	; 0x0
        1fa45c:	eb641f37 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa460:	e5bd0004 	ldr	r0, [sp, #4]!
        1fa464:	e5850000 	str	r0, [r5]
        1fa468:	e3a00000 	mov	r0, #0	; 0x0
        1fa46c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSimpleStoreCompander::BlockSize(void)
 * Address: 001fa470
 */
TSimpleStoreCompander::BlockSize(void) {
    /*
        1fa470:	e3a00b01 	mov	r0, #1024	; 0x400
        1fa474:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSimpleStoreCompander::Read(unsigned long, char *, long, unsigned long)
 * Address: 001fa478
 */
TSimpleStoreCompander::Read(unsigned long, char *, long, unsigned long) {
    /*
        1fa478:	e1a0c00d 	mov	ip, sp
        1fa47c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1fa480:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa484:	e1a04000 	mov	r4, r0
        1fa488:	e1a0c001 	mov	ip, r1
        1fa48c:	e1a06002 	mov	r6, r2
        1fa490:	e1a05003 	mov	r5, r3
        1fa494:	e24dd008 	sub	sp, sp, #8	; 0x8
        1fa498:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1fa49c:	e3a03004 	mov	r3, #4	; 0x4
        1fa4a0:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1fa4a4:	e92d0008 	stmdb	sp!, {r3}
        1fa4a8:	e1a0252c 	mov	r2, ip, lsr #10
        1fa4ac:	e1a02102 	mov	r2, r2, lsl #2
        1fa4b0:	e08d3003 	add	r3, sp, r3
        1fa4b4:	eb641f21 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa4b8:	e28dd004 	add	sp, sp, #4	; 0x4
        1fa4bc:	e1b07000 	movs	r7, r0
        1fa4c0:	1a000017 	bne	1fa524 <TSimpleStoreCompander::Read(unsigned long, char *, long, unsigned long)+0xac>
        1fa4c4:	e28d2004 	add	r2, sp, #4	; 0x4
        1fa4c8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1fa4cc:	e59d1000 	ldr	r1, [sp]
        1fa4d0:	eb64020a 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1fa4d4:	e1b07000 	movs	r7, r0
        1fa4d8:	1a000011 	bne	1fa524 <TSimpleStoreCompander::Read(unsigned long, char *, long, unsigned long)+0xac>
        1fa4dc:	e59d0004 	ldr	r0, [sp, #4]
        1fa4e0:	e3300000 	teq	r0, #0	; 0x0
        1fa4e4:	1a000003 	bne	1fa4f8 <TSimpleStoreCompander::Read(unsigned long, char *, long, unsigned long)+0x80>
        1fa4e8:	e1a01005 	mov	r1, r5
        1fa4ec:	e1a00006 	mov	r0, r6
        1fa4f0:	eb6796c9 	bl	1be001c <$ZeroBytes>
        1fa4f4:	ea00000a 	b	1fa524 <TSimpleStoreCompander::Read(unsigned long, char *, long, unsigned long)+0xac>
        1fa4f8:	e1500005 	cmp	r0, r5
        1fa4fc:	a1a03005 	movge	r3, r5
        1fa500:	b1a03000 	movlt	r3, r0
        1fa504:	e92d0008 	stmdb	sp!, {r3}
        1fa508:	e1a03006 	mov	r3, r6
        1fa50c:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        1fa510:	e3a02000 	mov	r2, #0	; 0x0
        1fa514:	e59d1004 	ldr	r1, [sp, #4]
        1fa518:	eb641f08 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa51c:	e28dd004 	add	sp, sp, #4	; 0x4
        1fa520:	e1a07000 	mov	r7, r0
        1fa524:	e1a00007 	mov	r0, r7
        1fa528:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSimpleStoreCompander::Write(unsigned long, char *, long, unsigned long)
 * Address: 001fa52c
 */
TSimpleStoreCompander::Write(unsigned long, char *, long, unsigned long) {
    /*
        1fa52c:	e1a0c00d 	mov	ip, sp
        1fa530:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1fa534:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa538:	e1a04000 	mov	r4, r0
        1fa53c:	e1a0c001 	mov	ip, r1
        1fa540:	e1a06002 	mov	r6, r2
        1fa544:	e1a05003 	mov	r5, r3
        1fa548:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fa54c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1fa550:	e3a03004 	mov	r3, #4	; 0x4
        1fa554:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1fa558:	e92d0008 	stmdb	sp!, {r3}
        1fa55c:	e1a0252c 	mov	r2, ip, lsr #10
        1fa560:	e1a02102 	mov	r2, r2, lsl #2
        1fa564:	e08d3003 	add	r3, sp, r3
        1fa568:	eb641ef4 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1fa56c:	e28dd004 	add	sp, sp, #4	; 0x4
        1fa570:	e3300000 	teq	r0, #0	; 0x0
        1fa574:	1a000004 	bne	1fa58c <TSimpleStoreCompander::Write(unsigned long, char *, long, unsigned long)+0x60>
        1fa578:	e1a03005 	mov	r3, r5
        1fa57c:	e1a02006 	mov	r2, r6
        1fa580:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        1fa584:	e59d1000 	ldr	r1, [sp]
        1fa588:	eb0631a2 	bl	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
        1fa58c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSimpleStoreCompander::DoTransactionAgainst(long, unsigned long)
 * Address: 001fa590
 */
TSimpleStoreCompander::DoTransactionAgainst(long, unsigned long) {
    /*
        1fa590:	e1a0c00d 	mov	ip, sp
        1fa594:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1fa598:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fa59c:	e1a0c001 	mov	ip, r1
        1fa5a0:	e3a03001 	mov	r3, #1	; 0x1
        1fa5a4:	e92d0008 	stmdb	sp!, {r3}
        1fa5a8:	e2802010 	add	r2, r0, #16	; 0x10
        1fa5ac:	e8920007 	ldmia	r2, {r0, r1, r2}
        1fa5b0:	e1a0300c 	mov	r3, ip
        1fa5b4:	eb64482f 	bl	1b0c678 <$LODefaultDoTransaction__FP6TStoreUlT2lUc>
        1fa5b8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSimpleStoreCompander::IsReadOnly(void)
 * Address: 001fa5bc
 */
TSimpleStoreCompander::IsReadOnly(void) {
    /*
        1fa5bc:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
        1fa5c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__21TSimpleStoreCompanderSFv
 * Address: 00387908
 */
void TSimpleStoreCompander::ClassInfo() {
    /*
        387908:	e24f0044 	sub	r0, pc, #68	; 0x44
        38790c:	e1a0f00e 	mov	pc, lr
        387910:	e3a00000 	mov	r0, #0	; 0x0
        387914:	e1a0f00e 	mov	pc, lr
        387918:	5453696d 	ldrplb	r6, [r3], -#2413
        38791c:	706c6553 	rsbvc	r6, ip, r3, asr r5
        387920:	746f7265 	strvcbt	r7, [pc], #265	; 387928 <ClassInfo__21TSimpleStoreCompanderSFv+0x20>
        387924:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        387928:	616e6465 	cmnvs	lr, r5, ror #8
        38792c:	72005453 	andvc	r5, r0, #1392508928	; 0x53000000
        387930:	746f7265 	strvcbt	r7, [pc], #265	; 387938 <ClassInfo__21TSimpleStoreCompanderSFv+0x30>
        387934:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        387938:	616e6465 	cmnvs	lr, r5, ror #8
        38793c:	72000000 	andvc	r0, r0, #0	; 0x0
        387940:	00000000 	andeq	r0, r0, r0
        387944:	eaffffef 	b	387908 <ClassInfo__21TSimpleStoreCompanderSFv>
        387948:	ea5e27d2 	b	1b11898 <TSimpleStoreCompander::$New(void)>
        38794c:	ea5e1b86 	b	1b0e76c <TSimpleStoreCompander::$Delete(void)>
        387950:	ea5e23ae 	b	1b10810 <TSimpleStoreCompander::$Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)>
        387954:	ea5e1760 	b	1b0d6dc <TSimpleStoreCompander::$BlockSize(void)>
        387958:	ea5e1343 	b	1b0c66c <TSimpleStoreCompander::$Read(unsigned long, char *, long, unsigned long)>
        38795c:	ea5e1343 	b	1b0c670 <TSimpleStoreCompander::$Write(unsigned long, char *, long, unsigned long)>
        387960:	ea5e1f88 	b	1b0f788 <TSimpleStoreCompander::$DoTransactionAgainst(long, unsigned long)>
        387964:	ea5e23b2 	b	1b10834 <TSimpleStoreCompander::$IsReadOnly(void)>
        387968:	00000000 	andeq	r0, r0, r0
        38796c:	00000048 	andeq	r0, r0, r8, asr #32
        387970:	00000056 	andeq	r0, r0, r6, asr r0
        387974:	00000062 	andeq	r0, r0, r2, rrx
        387978:	00000060 	andeq	r0, r0, r0, rrx
        38797c:	00000084 	andeq	r0, r0, r4, lsl #1
        387980:	ea5e2be0 	b	1b12908 <$Sizeof__17TLZStoreCompanderSFv>
        38798c:	ea5e27bf 	b	1b11890 <TLZStoreCompander::$New(void)>
        387990:	ea5e1331 	b	1b0c65c <TLZStoreCompander::$Delete(void)>
        3879a0:	ea000001 	b	3879ac <ClassInfo__17TLZStoreCompanderSFv+0x8>
    */
}

