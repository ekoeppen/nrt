#include "include/TMemoryObject.h"

/**
 * Symbol: TMemoryObject::__ct(void)
 * Address: 0011e36c
 */
TMemoryObject::TMemoryObject(void) {
    /*
        11e36c:	e1a0c00d 	mov	ip, sp
        11e370:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11e374:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e378:	e1b04000 	movs	r4, r0
        11e37c:	1a000003 	bne	11e390 <TMemoryObject::__ct(void)+0x24>
        11e380:	e3a00024 	mov	r0, #36	; 0x24
        11e384:	eb6ac0eb 	bl	1bce738 <$__nw(unsigned int)>
        11e388:	e1b04000 	movs	r4, r0
        11e38c:	0a00000f 	beq	11e3d0 <TMemoryObject::__ct(void)+0x64>
        11e390:	e3a05000 	mov	r5, #0	; 0x0
        11e394:	e5c45008 	strb	r5, [r4, #8]
        11e398:	e5845004 	str	r5, [r4, #4]	; fField4
        11e39c:	e584500c 	str	r5, [r4, #12]
        11e3a0:	e5845018 	str	r5, [r4, #24]
        11e3a4:	e5845010 	str	r5, [r4, #16]
        11e3a8:	e5845014 	str	r5, [r4, #20]
        11e3ac:	e5940000 	ldr	r0, [r4]
        11e3b0:	e3c00207 	bic	r0, r0, #1879048192	; 0x70000000
        11e3b4:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
        11e3b8:	e5840000 	str	r0, [r4]
        11e3bc:	e2840004 	add	r0, r4, #4	; 0x4
        11e3c0:	e1a01005 	mov	r1, r5
        11e3c4:	eb6ac91f 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        11e3c8:	e584501c 	str	r5, [r4, #28]	; fField28
        11e3cc:	e5845020 	str	r5, [r4, #32]	; fField32
        11e3d0:	e1a00004 	mov	r0, r4
        11e3d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMemoryObject::__dt(void)
 * Address: 0011e3d8
 */
TMemoryObject::~TMemoryObject(void) {
    /*
        11e3d8:	e1a0c00d 	mov	ip, sp
        11e3dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11e3e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e3e4:	e1a04000 	mov	r4, r0
        11e3e8:	e1a05001 	mov	r5, r1
        11e3ec:	eb656a0f 	bl	1a78c30 <TMemoryObject::$Destroy(void)>
        11e3f0:	e2840004 	add	r0, r4, #4	; 0x4
        11e3f4:	e3a01000 	mov	r1, #0	; 0x0
        11e3f8:	eb6ac0c9 	bl	1bce724 <TUObject::$__dt(void)>
        11e3fc:	e3150001 	tst	r5, #1	; 0x1
        11e400:	11a00004 	movne	r0, r4
        11e404:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        11e408:	1a6abcb4 	bne	1bcd6e0 <$__dl(void *)>
        11e40c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMemoryObject::GetPtr(void)
 * Address: 0011e410
 */
TMemoryObject::GetPtr(void) {
    /*
        11e410:	e5901000 	ldr	r1, [r0]
        11e414:	e3110102 	tst	r1, #-2147483648	; 0x80000000
        11e418:	03a00000 	moveq	r0, #0	; 0x0
        11e41c:	15900020 	ldrne	r0, [r0, #32]	; fField32
        11e420:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMemoryObject::Init(unsigned long, char *, unsigned char, unsigned long)
 * Address: 0011e424
 */
TMemoryObject::Init(unsigned long, char *, unsigned char, unsigned long) {
    /*
        11e424:	e1a0c00d 	mov	ip, sp
        11e428:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11e42c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e430:	e31300ff 	tst	r3, #255	; 0xff
        11e434:	e3a03000 	mov	r3, #0	; 0x0
        11e438:	e59be004 	ldr	lr, [fp, #4]	; fField4
        11e43c:	e280001c 	add	r0, r0, #28	; 0x1c
        11e440:	e8800006 	stmia	r0, {r1, r2}
        11e444:	e240001c 	sub	r0, r0, #28	; 0x1c
        11e448:	e5901000 	ldr	r1, [r0]
        11e44c:	e3811102 	orr	r1, r1, #-2147483648	; 0x80000000
        11e450:	e5801000 	str	r1, [r0]
        11e454:	0a000002 	beq	11e464 <TMemoryObject::Init(unsigned long, char *, unsigned char, unsigned long)+0x40>
        11e458:	e1a0100e 	mov	r1, lr
        11e45c:	eb657a75 	bl	1a7ce38 <TMemoryObject::$MakeShared(unsigned long)>
        11e460:	e1a03000 	mov	r3, r0
        11e464:	e1a00003 	mov	r0, r3
        11e468:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMemoryObject::Init(unsigned long, unsigned char, unsigned long)
 * Address: 0011e46c
 */
TMemoryObject::Init(unsigned long, unsigned char, unsigned long) {
    /*
        11e46c:	e1a0c00d 	mov	ip, sp
        11e470:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        11e474:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e478:	e1a04000 	mov	r4, r0
        11e47c:	e1a05001 	mov	r5, r1
        11e480:	e1a06003 	mov	r6, r3
        11e484:	e20280ff 	and	r8, r2, #255	; 0xff
        11e488:	e3a07000 	mov	r7, #0	; 0x0
        11e48c:	e5900000 	ldr	r0, [r0]
        11e490:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
        11e494:	e5840000 	str	r0, [r4]
        11e498:	e1a00001 	mov	r0, r1
        11e49c:	eb6ae1b1 	bl	1bd6b68 <$malloc>
        11e4a0:	e5840020 	str	r0, [r4, #32]	; fField32
        11e4a4:	e3300000 	teq	r0, #0	; 0x0
        11e4a8:	03a000e9 	moveq	r0, #233	; 0xe9
        11e4ac:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        11e4b0:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        11e4b4:	e584501c 	str	r5, [r4, #28]	; fField28
        11e4b8:	e5940000 	ldr	r0, [r4]
        11e4bc:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
        11e4c0:	e3380000 	teq	r8, #0	; 0x0
        11e4c4:	e5840000 	str	r0, [r4]
        11e4c8:	0a000003 	beq	11e4dc <TMemoryObject::Init(unsigned long, unsigned char, unsigned long)+0x70>
        11e4cc:	e1a01006 	mov	r1, r6
        11e4d0:	e1a00004 	mov	r0, r4
        11e4d4:	eb657a57 	bl	1a7ce38 <TMemoryObject::$MakeShared(unsigned long)>
        11e4d8:	e1a07000 	mov	r7, r0
        11e4dc:	e1a00007 	mov	r0, r7
        11e4e0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TMemoryObject::Destroy(void)
 * Address: 0011e4e4
 */
TMemoryObject::Destroy(void) {
    /*
        11e4e4:	e1a0c00d 	mov	ip, sp
        11e4e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11e4ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e4f0:	e1a04000 	mov	r4, r0
        11e4f4:	e5900000 	ldr	r0, [r0]
        11e4f8:	e3100102 	tst	r0, #-2147483648	; 0x80000000
        11e4fc:	12000101 	andne	r0, r0, #1073741824	; 0x40000000
        11e500:	13300000 	teqne	r0, #0	; 0x0
        11e504:	15940020 	ldrne	r0, [r4, #32]	; fField32
        11e508:	13300000 	teqne	r0, #0	; 0x0
        11e50c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        11e510:	eb6abc72 	bl	1bcd6e0 <$__dl(void *)>
        11e514:	e3a00000 	mov	r0, #0	; 0x0
        11e518:	e5a40020 	str	r0, [r4, #32]!	; fField32
        11e51c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMemoryObject::Make(unsigned long, TUMsgToken *)
 * Address: 0011e520
 */
TMemoryObject::Make(unsigned long, TUMsgToken *) {
    /*
        11e520:	e1a0c00d 	mov	ip, sp
        11e524:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11e528:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e52c:	e1a04000 	mov	r4, r0
        11e530:	e1a05002 	mov	r5, r2
        11e534:	e24dd008 	sub	sp, sp, #8	; 0x8
        11e538:	e3a00000 	mov	r0, #0	; 0x0
        11e53c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        11e540:	e2840004 	add	r0, r4, #4	; 0x4
        11e544:	e1a06000 	mov	r6, r0
        11e548:	e58d1000 	str	r1, [sp]
        11e54c:	eb6ac8bd 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        11e550:	e5940000 	ldr	r0, [r4]
        11e554:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
        11e558:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
        11e55c:	e3350000 	teq	r5, #0	; 0x0
        11e560:	e5840000 	str	r0, [r4]
        11e564:	0a000005 	beq	11e580 <TMemoryObject::Make(unsigned long, TUMsgToken *)+0x60>
        11e568:	e284000c 	add	r0, r4, #12	; 0xc
        11e56c:	e895500c 	ldmia	r5, {r2, r3, ip, lr}
        11e570:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        11e574:	e5940000 	ldr	r0, [r4]
        11e578:	e3800201 	orr	r0, r0, #268435456	; 0x10000000
        11e57c:	e5840000 	str	r0, [r4]
        11e580:	e284101c 	add	r1, r4, #28	; 0x1c
        11e584:	e1a00006 	mov	r0, r6
        11e588:	e3a02000 	mov	r2, #0	; 0x0
        11e58c:	eb6ad929 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
        11e590:	e1a04000 	mov	r4, r0
        11e594:	e1a0000d 	mov	r0, sp
        11e598:	e3a01000 	mov	r1, #0	; 0x0
        11e59c:	eb6ac060 	bl	1bce724 <TUObject::$__dt(void)>
        11e5a0:	e1a00004 	mov	r0, r4
        11e5a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMemoryObject::MakeShared(unsigned long)
 * Address: 0011e5a8
 */
TMemoryObject::MakeShared(unsigned long) {
    /*
        11e5a8:	e1a0c00d 	mov	ip, sp
        11e5ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11e5b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e5b4:	e1a04000 	mov	r4, r0
        11e5b8:	e1a05001 	mov	r5, r1
        11e5bc:	e5900000 	ldr	r0, [r0]
        11e5c0:	e3100202 	tst	r0, #536870912	; 0x20000000
        11e5c4:	e2846004 	add	r6, r4, #4	; 0x4
        11e5c8:	1a000003 	bne	11e5dc <TMemoryObject::MakeShared(unsigned long)+0x34>
        11e5cc:	e1a00006 	mov	r0, r6
        11e5d0:	eb6ad929 	bl	1bd4a7c <TUSharedMem::$Init(void)>
        11e5d4:	e3300000 	teq	r0, #0	; 0x0
        11e5d8:	1a000004 	bne	11e5f0 <TMemoryObject::MakeShared(unsigned long)+0x48>
        11e5dc:	e1a00006 	mov	r0, r6
        11e5e0:	e1a03005 	mov	r3, r5
        11e5e4:	e5941020 	ldr	r1, [r4, #32]	; fField32
        11e5e8:	e594201c 	ldr	r2, [r4, #28]	; fField28
        11e5ec:	eb6af1de 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        11e5f0:	e3300000 	teq	r0, #0	; 0x0
        11e5f4:	05941000 	ldreq	r1, [r4]
        11e5f8:	03811202 	orreq	r1, r1, #536870912	; 0x20000000
        11e5fc:	05841000 	streq	r1, [r4]
        11e600:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMemoryObject::CopyTo(void *, unsigned long, unsigned long)
 * Address: 0011e604
 */
TMemoryObject::CopyTo(void *, unsigned long, unsigned long) {
    /*
        11e604:	e1a0c00d 	mov	ip, sp
        11e608:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11e60c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e610:	e1a0c003 	mov	ip, r3
        11e614:	e5903000 	ldr	r3, [r0]
        11e618:	e3130102 	tst	r3, #-2147483648	; 0x80000000
        11e61c:	0a000006 	beq	11e63c <TMemoryObject::CopyTo(void *, unsigned long, unsigned long)+0x38>
        11e620:	e5900020 	ldr	r0, [r0, #32]	; fField32
        11e624:	e080300c 	add	r3, r0, ip
        11e628:	e1a00001 	mov	r0, r1
        11e62c:	e1a01003 	mov	r1, r3
        11e630:	eb6b0247 	bl	1bdef54 <$BlockMove>
        11e634:	e3a00000 	mov	r0, #0	; 0x0
        11e638:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        11e63c:	e3130201 	tst	r3, #268435456	; 0x10000000
        11e640:	e280e004 	add	lr, r0, #4	; 0x4
        11e644:	03a03000 	moveq	r3, #0	; 0x0
        11e648:	1280300c 	addne	r3, r0, #12	; 0xc
        11e64c:	e92d0008 	stmdb	sp!, {r3}
        11e650:	e1a0000e 	mov	r0, lr
        11e654:	e1a0300c 	mov	r3, ip
        11e658:	eb6ac880 	bl	1bd0860 <TUSharedMem::$CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)>
        11e65c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMemoryObject::CopyFrom(unsigned long *, void *, unsigned long, unsigned long)
 * Address: 0011e660
 */
TMemoryObject::CopyFrom(unsigned long *, void *, unsigned long, unsigned long) {
    /*
        11e660:	e1a0c00d 	mov	ip, sp
        11e664:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11e668:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e66c:	e1a0e002 	mov	lr, r2
        11e670:	e1a0c003 	mov	ip, r3
        11e674:	e59b2004 	ldr	r2, [fp, #4]	; fField4
        11e678:	e5903000 	ldr	r3, [r0]
        11e67c:	e3130102 	tst	r3, #-2147483648	; 0x80000000
        11e680:	0a00000b 	beq	11e6b4 <TMemoryObject::CopyFrom(unsigned long *, void *, unsigned long, unsigned long)+0x54>
        11e684:	e590301c 	ldr	r3, [r0, #28]	; fField28
        11e688:	e0433002 	sub	r3, r3, r2
        11e68c:	e153000c 	cmp	r3, ip
        11e690:	81a0300c 	movhi	r3, ip
        11e694:	e5813000 	str	r3, [r1]
        11e698:	e5900020 	ldr	r0, [r0, #32]	; fField32
        11e69c:	e0800002 	add	r0, r0, r2
        11e6a0:	e1a02003 	mov	r2, r3
        11e6a4:	e1a0100e 	mov	r1, lr
        11e6a8:	eb6b0229 	bl	1bdef54 <$BlockMove>
        11e6ac:	e3a00000 	mov	r0, #0	; 0x0
        11e6b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11e6b4:	e3130201 	tst	r3, #268435456	; 0x10000000
        11e6b8:	e2804004 	add	r4, r0, #4	; 0x4
        11e6bc:	03a03000 	moveq	r3, #0	; 0x0
        11e6c0:	1280300c 	addne	r3, r0, #12	; 0xc
        11e6c4:	e92d000c 	stmdb	sp!, {r2, r3}
        11e6c8:	e1a00004 	mov	r0, r4
        11e6cc:	e1a0300c 	mov	r3, ip
        11e6d0:	e1a0200e 	mov	r2, lr
        11e6d4:	eb6ac858 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        11e6d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMemoryObject::GetId(void)
 * Address: 0011e6dc
 */
TMemoryObject::GetId(void) {
    /*
        11e6dc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        11e6e0:	e1a0f00e 	mov	pc, lr
    */
}

