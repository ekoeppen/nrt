#include "include/TPackageIterator.h"

/**
 * Symbol: TPackageIterator::__ct(CPipe *)
 * Address: 0015c558
 */
TPackageIterator::TPackageIterator(CPipe *) {
    /*
        15c558:	e1a0c00d 	mov	ip, sp
        15c55c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15c560:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c564:	e1b04000 	movs	r4, r0
        15c568:	e1a05001 	mov	r5, r1
        15c56c:	1a000003 	bne	15c580 <TPackageIterator::__ct(CPipe *)+0x28>
        15c570:	e3a00028 	mov	r0, #40	; 0x28
        15c574:	eb69c86f 	bl	1bce738 <$__nw(unsigned int)>
        15c578:	e1b04000 	movs	r4, r0
        15c57c:	0a000006 	beq	15c59c <TPackageIterator::__ct(CPipe *)+0x44>
        15c580:	e1a00004 	mov	r0, r4
        15c584:	eb00dfd4 	bl	1944dc <TPrivatePackageIterator::__ct(void)>
        15c588:	e3a00001 	mov	r0, #1	; 0x1
        15c58c:	e5c40020 	strb	r0, [r4, #32]	; fField32
        15c590:	e3a00000 	mov	r0, #0	; 0x0
        15c594:	e5840004 	str	r0, [r4, #4]	; fField4
        15c598:	e5845024 	str	r5, [r4, #36]	; fField36
        15c59c:	e1a00004 	mov	r0, r4
        15c5a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageIterator::__ct(void *)
 * Address: 0015c5a4
 */
TPackageIterator::TPackageIterator(*) {
    /*
        15c5a4:	e1a0c00d 	mov	ip, sp
        15c5a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15c5ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c5b0:	e1b04000 	movs	r4, r0
        15c5b4:	e1a05001 	mov	r5, r1
        15c5b8:	1a000003 	bne	15c5cc <TPackageIterator::__ct(void *)+0x28>
        15c5bc:	e3a00028 	mov	r0, #40	; 0x28
        15c5c0:	eb69c85c 	bl	1bce738 <$__nw(unsigned int)>
        15c5c4:	e1b04000 	movs	r4, r0
        15c5c8:	0a000005 	beq	15c5e4 <TPackageIterator::__ct(void *)+0x40>
        15c5cc:	e1a00004 	mov	r0, r4
        15c5d0:	eb00dfc1 	bl	1944dc <TPrivatePackageIterator::__ct(void)>
        15c5d4:	e3a00000 	mov	r0, #0	; 0x0
        15c5d8:	e5c40020 	strb	r0, [r4, #32]	; fField32
        15c5dc:	e5840024 	str	r0, [r4, #36]	; fField36
        15c5e0:	e5845004 	str	r5, [r4, #4]	; fField4
        15c5e4:	e1a00004 	mov	r0, r4
        15c5e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageIterator::Copyright(void)
 * Address: 0015c5ec
 */
TPackageIterator::Copyright(void) {
    /*
        15c5ec:	e5901008 	ldr	r1, [r0, #8]	; fField8
        15c5f0:	e5912016 	ldr	r2, [r1, #22]
        15c5f4:	e1b02822 	movs	r2, r2, lsr #16
        15c5f8:	03a00000 	moveq	r0, #0	; 0x0
        15c5fc:	15900018 	ldrne	r0, [r0, #24]	; fField24
        15c600:	15911014 	ldrne	r1, [r1, #20]	; fField20
        15c604:	10800821 	addne	r0, r0, r1, lsr #16
        15c608:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::NumberOfParts(void)
 * Address: 0015c60c
 */
TPackageIterator::NumberOfParts(void) {
    /*
        15c60c:	e1a0c00d 	mov	ip, sp
        15c610:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15c614:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c618:	e1a04000 	mov	r4, r0
        15c61c:	e3a05000 	mov	r5, #0	; 0x0
        15c620:	e3a00000 	mov	r0, #0	; 0x0
        15c624:	e52d006c 	str	r0, [sp, -#108]!
        15c628:	e28d0008 	add	r0, sp, #8	; 0x8
        15c62c:	eb6958d0 	bl	1bb2974 <$setjmp>
        15c630:	e3300000 	teq	r0, #0	; 0x0
        15c634:	1a000005 	bne	15c650 <TPackageIterator::NumberOfParts(void)+0x44>
        15c638:	e1a0000d 	mov	r0, sp
        15c63c:	eb6a0e8e 	bl	1be007c <$AddExceptionHandler>
        15c640:	e1a00004 	mov	r0, r4
        15c644:	eb00dfc8 	bl	19456c <TPrivatePackageIterator::NumberOfParts(void)>
        15c648:	e1a05000 	mov	r5, r0
        15c64c:	ea000009 	b	15c678 <TPackageIterator::NumberOfParts(void)+0x6c>
        15c650:	e59d0060 	ldr	r0, [sp, #96]
        15c654:	e59f102c 	ldr	r1, [pc, #2c]	; 15c688 <TPackageIterator::NumberOfParts(void)+0x7c>
        15c658:	e5911000 	ldr	r1, [r1]
        15c65c:	eb6a1acc 	bl	1be3194 <$Subexception>
        15c660:	e3300000 	teq	r0, #0	; 0x0
        15c664:	13e05e8a 	mvnne	r5, #2208	; 0x8a0
        15c668:	12455a02 	subne	r5, r5, #8192	; 0x2000
        15c66c:	1a000001 	bne	15c678 <TPackageIterator::NumberOfParts(void)+0x6c>
        15c670:	e1a0000d 	mov	r0, sp
        15c674:	eb6a16b6 	bl	1be2154 <$NextHandler>
        15c678:	e1a0000d 	mov	r0, sp
        15c67c:	eb6a128d 	bl	1be10b8 <$ExitHandler>
        15c680:	e1a00005 	mov	r0, r5
        15c684:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15c688:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TPackageIterator::PackageSize(void)
 * Address: 0015c68c
 */
TPackageIterator::PackageSize(void) {
    /*
        15c68c:	e1a0c00d 	mov	ip, sp
        15c690:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15c694:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c698:	e1a04000 	mov	r4, r0
        15c69c:	e3a05000 	mov	r5, #0	; 0x0
        15c6a0:	e3a00000 	mov	r0, #0	; 0x0
        15c6a4:	e52d006c 	str	r0, [sp, -#108]!
        15c6a8:	e28d0008 	add	r0, sp, #8	; 0x8
        15c6ac:	eb6958b0 	bl	1bb2974 <$setjmp>
        15c6b0:	e3300000 	teq	r0, #0	; 0x0
        15c6b4:	1a000005 	bne	15c6d0 <TPackageIterator::PackageSize(void)+0x44>
        15c6b8:	e1a0000d 	mov	r0, sp
        15c6bc:	eb6a0e6e 	bl	1be007c <$AddExceptionHandler>
        15c6c0:	e1a00004 	mov	r0, r4
        15c6c4:	eb00dfad 	bl	194580 <TPrivatePackageIterator::PackageSize(void)>
        15c6c8:	e1a05000 	mov	r5, r0
        15c6cc:	ea000009 	b	15c6f8 <TPackageIterator::PackageSize(void)+0x6c>
        15c6d0:	e59d0060 	ldr	r0, [sp, #96]
        15c6d4:	e59f102c 	ldr	r1, [pc, #2c]	; 15c708 <TPackageIterator::PackageSize(void)+0x7c>
        15c6d8:	e5911000 	ldr	r1, [r1]
        15c6dc:	eb6a1aac 	bl	1be3194 <$Subexception>
        15c6e0:	e3300000 	teq	r0, #0	; 0x0
        15c6e4:	13e05e8a 	mvnne	r5, #2208	; 0x8a0
        15c6e8:	12455a02 	subne	r5, r5, #8192	; 0x2000
        15c6ec:	1a000001 	bne	15c6f8 <TPackageIterator::PackageSize(void)+0x6c>
        15c6f0:	e1a0000d 	mov	r0, sp
        15c6f4:	eb6a1696 	bl	1be2154 <$NextHandler>
        15c6f8:	e1a0000d 	mov	r0, sp
        15c6fc:	eb6a126d 	bl	1be10b8 <$ExitHandler>
        15c700:	e1a00005 	mov	r0, r5
        15c704:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15c708:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TPackageIterator::DirectorySize(void)
 * Address: 0015c70c
 */
TPackageIterator::DirectorySize(void) {
    /*
        15c70c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15c710:	e3300000 	teq	r0, #0	; 0x0
        15c714:	03a00000 	moveq	r0, #0	; 0x0
        15c718:	1590002c 	ldrne	r0, [r0, #44]	; fField44
        15c71c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::GetPackageId(void)
 * Address: 0015c720
 */
TPackageIterator::GetPackageId(void) {
    /*
        15c720:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15c724:	e3300000 	teq	r0, #0	; 0x0
        15c728:	03a00000 	moveq	r0, #0	; 0x0
        15c72c:	15900008 	ldrne	r0, [r0, #8]	; fField8
        15c730:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::GetVersion(void)
 * Address: 0015c734
 */
TPackageIterator::GetVersion(void) {
    /*
        15c734:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15c738:	e3300000 	teq	r0, #0	; 0x0
        15c73c:	03a00000 	moveq	r0, #0	; 0x0
        15c740:	15900010 	ldrne	r0, [r0, #16]	; fField16
        15c744:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::CreationDate(void)
 * Address: 0015c748
 */
TPackageIterator::CreationDate(void) {
    /*
        15c748:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15c74c:	e3300000 	teq	r0, #0	; 0x0
        15c750:	03a00000 	moveq	r0, #0	; 0x0
        15c754:	15900020 	ldrne	r0, [r0, #32]	; fField32
        15c758:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::ModifyDate(void)
 * Address: 0015c75c
 */
TPackageIterator::ModifyDate(void) {
    /*
        15c75c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15c760:	e3300000 	teq	r0, #0	; 0x0
        15c764:	03a00000 	moveq	r0, #0	; 0x0
        15c768:	15900024 	ldrne	r0, [r0, #36]	; fField36
        15c76c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::ForDispatchOnly(void)
 * Address: 0015c770
 */
TPackageIterator::ForDispatchOnly(void) {
    /*
        15c770:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15c774:	e3300000 	teq	r0, #0	; 0x0
        15c778:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        15c77c:	12000102 	andne	r0, r0, #-2147483648	; 0x80000000
        15c780:	13300000 	teqne	r0, #0	; 0x0
        15c784:	03a00000 	moveq	r0, #0	; 0x0
        15c788:	13a00001 	movne	r0, #1	; 0x1
        15c78c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::CopyProtected(void)
 * Address: 0015c790
 */
TPackageIterator::CopyProtected(void) {
    /*
        15c790:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15c794:	e3300000 	teq	r0, #0	; 0x0
        15c798:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        15c79c:	12000101 	andne	r0, r0, #1073741824	; 0x40000000
        15c7a0:	13300000 	teqne	r0, #0	; 0x0
        15c7a4:	03a00000 	moveq	r0, #0	; 0x0
        15c7a8:	13a00001 	movne	r0, #1	; 0x1
        15c7ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::__dt(void)
 * Address: 0015c7b0
 */
TPackageIterator::~TPackageIterator(void) {
    /*
        15c7b0:	e1a0c00d 	mov	ip, sp
        15c7b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15c7b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c7bc:	e1a04000 	mov	r4, r0
        15c7c0:	e1a05001 	mov	r5, r1
        15c7c4:	eb69d43d 	bl	1bd18c0 <TPackageIterator::$DisposeDirectory(void)>
        15c7c8:	e1a00004 	mov	r0, r4
        15c7cc:	e3a01000 	mov	r1, #0	; 0x0
        15c7d0:	eb00dff1 	bl	19479c <TPrivatePackageIterator::__dt(void)>
        15c7d4:	e3150001 	tst	r5, #1	; 0x1
        15c7d8:	11a00004 	movne	r0, r4
        15c7dc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        15c7e0:	1a69c3be 	bne	1bcd6e0 <$__dl(void *)>
        15c7e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageIterator::PackageFlags(void)
 * Address: 0015c7e8
 */
TPackageIterator::PackageFlags(void) {
    /*
        15c7e8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15c7ec:	e3300000 	teq	r0, #0	; 0x0
        15c7f0:	03a00000 	moveq	r0, #0	; 0x0
        15c7f4:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        15c7f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::GetPartInfo(unsigned long, PartInfo *const)
 * Address: 0015c7fc
 */
TPackageIterator::GetPartInfo(unsigned long, PartInfo *const) {
    /*
        15c7fc:	e1a0c00d 	mov	ip, sp
        15c800:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15c804:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c808:	e1a04000 	mov	r4, r0
        15c80c:	e1a05001 	mov	r5, r1
        15c810:	e1a06002 	mov	r6, r2
        15c814:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15c818:	e5900030 	ldr	r0, [r0, #48]
        15c81c:	e1500001 	cmp	r0, r1
        15c820:	991ba870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, pc}
        15c824:	e1a02006 	mov	r2, r6
        15c828:	e1a01005 	mov	r1, r5
        15c82c:	e1a00004 	mov	r0, r4
        15c830:	eb00df57 	bl	194594 <TPrivatePackageIterator::GetPartInfoDesc(unsigned long, PartInfo *const)>
        15c834:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        15c838:	e3300000 	teq	r0, #0	; 0x0
        15c83c:	e1a01005 	mov	r1, r5
        15c840:	e1a00004 	mov	r0, r4
        15c844:	0a000001 	beq	15c850 <TPackageIterator::GetPartInfo(unsigned long, PartInfo *const)+0x54>
        15c848:	eb69e06d 	bl	1bd4a04 <TPackageIterator::$GetPartDataOffset(unsigned long)>
        15c84c:	ea000002 	b	15c85c <TPackageIterator::GetPartInfo(unsigned long, PartInfo *const)+0x60>
        15c850:	eb69e06b 	bl	1bd4a04 <TPackageIterator::$GetPartDataOffset(unsigned long)>
        15c854:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
        15c858:	e0800001 	add	r0, r0, r1
        15c85c:	e5a6001c 	str	r0, [r6, #28]!	; fField28
        15c860:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageIterator::ProcessorTypeOfPart(unsigned long)
 * Address: 0015c864
 */
TPackageIterator::ProcessorTypeOfPart(unsigned long) {
    /*
        15c864:	e5902008 	ldr	r2, [r0, #8]	; fField8
        15c868:	e5922030 	ldr	r2, [r2, #48]
        15c86c:	e1520001 	cmp	r2, r1
        15c870:	93a00000 	movls	r0, #0	; 0x0
        15c874:	91a0f00e 	movls	pc, lr
        15c878:	e590000c 	ldr	r0, [r0, #12]	; fField12
        15c87c:	e0800281 	add	r0, r0, r1, lsl #5
        15c880:	e5900014 	ldr	r0, [r0, #20]	; fField20
        15c884:	e2000a0f 	and	r0, r0, #61440	; 0xf000
        15c888:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *)
 * Address: 0015c88c
 */
TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *) {
    /*
        15c88c:	e1a0c00d 	mov	ip, sp
        15c890:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        15c894:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c898:	e1a0c003 	mov	ip, r3
        15c89c:	e3a03000 	mov	r3, #0	; 0x0
        15c8a0:	e92d0008 	stmdb	sp!, {r3}
        15c8a4:	e1a0300c 	mov	r3, ip
        15c8a8:	eb000000 	bl	15c8b0 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)>
        15c8ac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)
 * Address: 0015c8b0
 */
TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *) {
    /*
        15c8b0:	e1a0c00d 	mov	ip, sp
        15c8b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15c8b8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15c8bc:	e24cb014 	sub	fp, ip, #20	; 0x14
        15c8c0:	e1a04000 	mov	r4, r0
        15c8c4:	e1a06001 	mov	r6, r1
        15c8c8:	e1a08002 	mov	r8, r2
        15c8cc:	e1a07003 	mov	r7, r3
        15c8d0:	e3a09000 	mov	r9, #0	; 0x0
        15c8d4:	e24dd07c 	sub	sp, sp, #124	; 0x7c
        15c8d8:	e28d0014 	add	r0, sp, #20	; 0x14
        15c8dc:	eb664fd3 	bl	1af0830 <TStorePackageWriter::$__ct(void)>
        15c8e0:	e3a00000 	mov	r0, #0	; 0x0
        15c8e4:	e58d0004 	str	r0, [sp, #4]	; fField4
        15c8e8:	e58d0000 	str	r0, [sp]
        15c8ec:	e58d0008 	str	r0, [sp, #8]	; fField8
        15c8f0:	e58d000c 	str	r0, [sp, #12]	; fField12
        15c8f4:	e3a0a000 	mov	sl, #0	; 0x0
        15c8f8:	e58d0010 	str	r0, [sp, #16]	; fField16
        15c8fc:	e1a00004 	mov	r0, r4
        15c900:	eb69ecb3 	bl	1bd7bd4 <TPackageIterator::$PackageName(void)>
        15c904:	e58d0008 	str	r0, [sp, #8]	; fField8
        15c908:	e1a00004 	mov	r0, r4
        15c90c:	eb69eca7 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15c910:	e58d0010 	str	r0, [sp, #16]	; fField16
        15c914:	e1a00004 	mov	r0, r4
        15c918:	eb69ecaf 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        15c91c:	e58d0000 	str	r0, [sp]
        15c920:	e1a00004 	mov	r0, r4
        15c924:	eb66cbaa 	bl	1b0f7d4 <TPackageIterator::$GetRelocationChunkInfo(void)>
        15c928:	e1b05000 	movs	r5, r0
        15c92c:	1a0000f5 	bne	15cd08 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x458>
        15c930:	e1a01007 	mov	r1, r7
        15c934:	e2843010 	add	r3, r4, #16	; 0x10
        15c938:	e893000c 	ldmia	r3, {r2, r3}
        15c93c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        15c940:	e1a00004 	mov	r0, r4
        15c944:	eb69eca4 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        15c948:	e1a03000 	mov	r3, r0
        15c94c:	e1a02008 	mov	r2, r8
        15c950:	e1a01006 	mov	r1, r6
        15c954:	e28d0020 	add	r0, sp, #32	; 0x20
        15c958:	eb66eca4 	bl	1b17bf0 <TStorePackageWriter::$Init(TStore *, unsigned long, unsigned long, TCallbackCompressor *, RelocationHeader *, RelocationEntry *)>
        15c95c:	e28dd00c 	add	sp, sp, #12	; 0xc
        15c960:	e1b05000 	movs	r5, r0
        15c964:	1a0000e7 	bne	15cd08 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x458>
        15c968:	e3a00b01 	mov	r0, #1024	; 0x400
        15c96c:	eb69c771 	bl	1bce738 <$__nw(unsigned int)>
        15c970:	e1a09000 	mov	r9, r0
        15c974:	eb6a15e9 	bl	1be2120 <$MemError>
        15c978:	e1b05000 	movs	r5, r0
        15c97c:	1a0000e1 	bne	15cd08 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x458>
        15c980:	e3a06000 	mov	r6, #0	; 0x0
        15c984:	e52d606c 	str	r6, [sp, -#108]!
        15c988:	e28d0008 	add	r0, sp, #8	; 0x8
        15c98c:	eb6957f8 	bl	1bb2974 <$setjmp>
        15c990:	e3300000 	teq	r0, #0	; 0x0
        15c994:	1a000005 	bne	15c9b0 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x100>
        15c998:	e1a0000d 	mov	r0, sp
        15c99c:	eb6a0db6 	bl	1be007c <$AddExceptionHandler>
        15c9a0:	eb650970 	bl	1a9ef68 <$RealClock(void)>
        15c9a4:	e5941008 	ldr	r1, [r4, #8]	; fField8
        15c9a8:	e5a10024 	str	r0, [r1, #36]!	; fField36
        15c9ac:	ea000006 	b	15c9cc <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x11c>
        15c9b0:	e59d0060 	ldr	r0, [sp, #96]
        15c9b4:	e59f11d8 	ldr	r1, [pc, #1d8]	; 15cb94 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x2e4>
        15c9b8:	e5911000 	ldr	r1, [r1]
        15c9bc:	eb6a19f4 	bl	1be3194 <$Subexception>
        15c9c0:	e3300000 	teq	r0, #0	; 0x0
        15c9c4:	01a0000d 	moveq	r0, sp
        15c9c8:	0b6a15e1 	bleq	1be2154 <$NextHandler>
        15c9cc:	e1a0000d 	mov	r0, sp
        15c9d0:	eb6a11b8 	bl	1be10b8 <$ExitHandler>
        15c9d4:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15c9d8:	e28d0014 	add	r0, sp, #20	; 0x14
        15c9dc:	e3a03000 	mov	r3, #0	; 0x0
        15c9e0:	e3a02034 	mov	r2, #52	; 0x34
        15c9e4:	e5941008 	ldr	r1, [r4, #8]	; fField8
        15c9e8:	eb66b6c8 	bl	1b0a510 <TStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        15c9ec:	e1b05000 	movs	r5, r0
        15c9f0:	1a0000c4 	bne	15cd08 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x458>
        15c9f4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        15c9f8:	e5900030 	ldr	r0, [r0, #48]
        15c9fc:	e1a02280 	mov	r2, r0, lsl #5
        15ca00:	e28d0014 	add	r0, sp, #20	; 0x14
        15ca04:	e3a03000 	mov	r3, #0	; 0x0
        15ca08:	e594100c 	ldr	r1, [r4, #12]	; fField12
        15ca0c:	eb66b6bf 	bl	1b0a510 <TStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        15ca10:	e1b05000 	movs	r5, r0
        15ca14:	1a0000bb 	bne	15cd08 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x458>
        15ca18:	e5940008 	ldr	r0, [r4, #8]	; fField8
        15ca1c:	e2800028 	add	r0, r0, #40	; 0x28
        15ca20:	e9b00006 	ldmib	r0!, {r1, r2}
        15ca24:	e3a00034 	mov	r0, #52	; 0x34
        15ca28:	e0800282 	add	r0, r0, r2, lsl #5
        15ca2c:	e0412000 	sub	r2, r1, r0
        15ca30:	e28d0014 	add	r0, sp, #20	; 0x14
        15ca34:	e3a03000 	mov	r3, #0	; 0x0
        15ca38:	e5941018 	ldr	r1, [r4, #24]	; fField24
        15ca3c:	eb66b6b3 	bl	1b0a510 <TStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        15ca40:	e1b05000 	movs	r5, r0
        15ca44:	1a0000af 	bne	15cd08 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x458>
        15ca48:	e5940008 	ldr	r0, [r4, #8]	; fField8
        15ca4c:	e5b0702c 	ldr	r7, [r0, #44]!	; fField44
        15ca50:	e5941010 	ldr	r1, [r4, #16]	; fField16
        15ca54:	e3310000 	teq	r1, #0	; 0x0
        15ca58:	0a000013 	beq	15caac <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x1fc>
        15ca5c:	e28d0014 	add	r0, sp, #20	; 0x14
        15ca60:	e3a03000 	mov	r3, #0	; 0x0
        15ca64:	e3a02014 	mov	r2, #20	; 0x14
        15ca68:	eb66b6a8 	bl	1b0a510 <TStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        15ca6c:	e1b05000 	movs	r5, r0
        15ca70:	1a0000a4 	bne	15cd08 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x458>
        15ca74:	e5941014 	ldr	r1, [r4, #20]	; fField20
        15ca78:	e3310000 	teq	r1, #0	; 0x0
        15ca7c:	0a000007 	beq	15caa0 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x1f0>
        15ca80:	e5940010 	ldr	r0, [r4, #16]	; fField16
        15ca84:	e5900004 	ldr	r0, [r0, #4]	; fField4
        15ca88:	e2402014 	sub	r2, r0, #20	; 0x14
        15ca8c:	e28d0014 	add	r0, sp, #20	; 0x14
        15ca90:	e3a03000 	mov	r3, #0	; 0x0
        15ca94:	eb66b69d 	bl	1b0a510 <TStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        15ca98:	e1b05000 	movs	r5, r0
        15ca9c:	1a000099 	bne	15cd08 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x458>
        15caa0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        15caa4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        15caa8:	e0807007 	add	r7, r0, r7
        15caac:	e3a00000 	mov	r0, #0	; 0x0
        15cab0:	e58d006c 	str	r0, [sp, #108]
        15cab4:	e1a00004 	mov	r0, r4
        15cab8:	eb69ec3c 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15cabc:	e3500000 	cmp	r0, #0	; 0x0
        15cac0:	9a00008d 	bls	15ccfc <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x44c>
        15cac4:	e24d006c 	sub	r0, sp, #108	; 0x6c
        15cac8:	e58d0078 	str	r0, [sp, #120]
        15cacc:	e59f10c4 	ldr	r1, [pc, #c4]	; 15cb98 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x2e8>
        15cad0:	e58d1074 	str	r1, [sp, #116]
        15cad4:	e24d006c 	sub	r0, sp, #108	; 0x6c
        15cad8:	e58d0070 	str	r0, [sp, #112]
        15cadc:	e28d2044 	add	r2, sp, #68	; 0x44
        15cae0:	e1a00004 	mov	r0, r4
        15cae4:	e59d106c 	ldr	r1, [sp, #108]
        15cae8:	eb69dfc6 	bl	1bd4a08 <TPackageIterator::$GetPartInfo(unsigned long, PartInfo *const)>
        15caec:	e24dd004 	sub	sp, sp, #4	; 0x4
        15caf0:	e59d0048 	ldr	r0, [sp, #72]
        15caf4:	e3300001 	teq	r0, #1	; 0x1
        15caf8:	e59d8050 	ldr	r8, [sp, #80]
        15cafc:	05dd006a 	ldreqb	r0, [sp, #106]
        15cb00:	03300000 	teqeq	r0, #0	; 0x0
        15cb04:	13a00000 	movne	r0, #0	; 0x0
        15cb08:	03a00001 	moveq	r0, #1	; 0x1
        15cb0c:	e20030ff 	and	r3, r0, #255	; 0xff
        15cb10:	e3380000 	teq	r8, #0	; 0x0
        15cb14:	e58d3000 	str	r3, [sp]
        15cb18:	0a00006e 	beq	15ccd8 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x428>
        15cb1c:	e24dd004 	sub	sp, sp, #4	; 0x4
        15cb20:	e1a06008 	mov	r6, r8
        15cb24:	e3a00b01 	mov	r0, #1024	; 0x400
        15cb28:	e3580b01 	cmp	r8, #1024	; 0x400
        15cb2c:	a1a06000 	movge	r6, r0
        15cb30:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        15cb34:	e3300000 	teq	r0, #0	; 0x0
        15cb38:	e24dd06c 	sub	sp, sp, #108	; 0x6c
        15cb3c:	e3a00000 	mov	r0, #0	; 0x0
        15cb40:	0a000037 	beq	15cc24 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x374>
        15cb44:	e58d0000 	str	r0, [sp]
        15cb48:	e59d00ec 	ldr	r0, [sp, #236]
        15cb4c:	eb695788 	bl	1bb2974 <$setjmp>
        15cb50:	e3300000 	teq	r0, #0	; 0x0
        15cb54:	1a000010 	bne	15cb9c <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x2ec>
        15cb58:	e1a0000d 	mov	r0, sp
        15cb5c:	eb6a0d46 	bl	1be007c <$AddExceptionHandler>
        15cb60:	e52d6004 	str	r6, [sp, -#4]!	; fField4
        15cb64:	e28d3070 	add	r3, sp, #112	; 0x70
        15cb68:	e1a0200d 	mov	r2, sp
        15cb6c:	e1a01009 	mov	r1, r9
        15cb70:	e594c024 	ldr	ip, [r4, #36]	; fField36
        15cb74:	e1a0000c 	mov	r0, ip
        15cb78:	e59cc000 	ldr	ip, [ip]
        15cb7c:	e1a0e00f 	mov	lr, pc
        15cb80:	e28cf014 	add	pc, ip, #20	; 0x14
        15cb84:	e0877006 	add	r7, r7, r6
        15cb88:	e08aa006 	add	sl, sl, r6
        15cb8c:	e28dd004 	add	sp, sp, #4	; 0x4
        15cb90:	ea00000d 	b	15cbcc <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x31c>
        15cb94:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        15cb98:	00371324 	eoreqs	r1, r7, r4, lsr #6
        15cb9c:	e59d0060 	ldr	r0, [sp, #96]
        15cba0:	e59d10e8 	ldr	r1, [sp, #232]
        15cba4:	e5911000 	ldr	r1, [r1]
        15cba8:	eb6a1979 	bl	1be3194 <$Subexception>
        15cbac:	e3300000 	teq	r0, #0	; 0x0
        15cbb0:	0a000003 	beq	15cbc4 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x314>
        15cbb4:	e59d5064 	ldr	r5, [sp, #100]
        15cbb8:	e28d0088 	add	r0, sp, #136	; 0x88
        15cbbc:	eb66ec0c 	bl	1b17bf4 <TStorePackageWriter::$Abort(void)>
        15cbc0:	ea000001 	b	15cbcc <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x31c>
        15cbc4:	e1a0000d 	mov	r0, sp
        15cbc8:	eb6a1561 	bl	1be2154 <$NextHandler>
        15cbcc:	e1a0000d 	mov	r0, sp
        15cbd0:	eb6a1138 	bl	1be10b8 <$ExitHandler>
        15cbd4:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15cbd8:	e3350000 	teq	r5, #0	; 0x0
        15cbdc:	1a000034 	bne	15ccb4 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x404>
        15cbe0:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        15cbe4:	e3300000 	teq	r0, #0	; 0x0
        15cbe8:	0a00002a 	beq	15cc98 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x3e8>
        15cbec:	e59b0014 	ldr	r0, [fp, #20]	; fField20
        15cbf0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        15cbf4:	e150000a 	cmp	r0, sl
        15cbf8:	8a000026 	bhi	15cc98 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x3e8>
        15cbfc:	e58d700c 	str	r7, [sp, #12]	; fField12
        15cc00:	e59d0074 	ldr	r0, [sp, #116]
        15cc04:	e58d0014 	str	r0, [sp, #20]	; fField20
        15cc08:	e28d1008 	add	r1, sp, #8	; 0x8
        15cc0c:	e59b2014 	ldr	r2, [fp, #20]	; fField20
        15cc10:	e1a00002 	mov	r0, r2
        15cc14:	e1a0e00f 	mov	lr, pc
        15cc18:	e592f000 	ldr	pc, [r2]
        15cc1c:	e3a0a000 	mov	sl, #0	; 0x0
        15cc20:	ea00001c 	b	15cc98 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x3e8>
        15cc24:	e58d0000 	str	r0, [sp]
        15cc28:	e59d00e4 	ldr	r0, [sp, #228]
        15cc2c:	eb695750 	bl	1bb2974 <$setjmp>
        15cc30:	e3300000 	teq	r0, #0	; 0x0
        15cc34:	1a000006 	bne	15cc54 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x3a4>
        15cc38:	e1a0000d 	mov	r0, sp
        15cc3c:	eb6a0d0e 	bl	1be007c <$AddExceptionHandler>
        15cc40:	e1a02006 	mov	r2, r6
        15cc44:	e1a01009 	mov	r1, r9
        15cc48:	e59d00d4 	ldr	r0, [sp, #212]
        15cc4c:	eb6a08c0 	bl	1bdef54 <$BlockMove>
        15cc50:	ea00000b 	b	15cc84 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x3d4>
        15cc54:	e59d0060 	ldr	r0, [sp, #96]
        15cc58:	e28f1f06 	add	r1, pc, #24	; 0x18
        15cc5c:	eb6a194c 	bl	1be3194 <$Subexception>
        15cc60:	e3300000 	teq	r0, #0	; 0x0
        15cc64:	0a000004 	beq	15cc7c <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x3cc>
        15cc68:	e59d5064 	ldr	r5, [sp, #100]
        15cc6c:	e28d0088 	add	r0, sp, #136	; 0x88
        15cc70:	eb66ebdf 	bl	1b17bf4 <TStorePackageWriter::$Abort(void)>
        15cc74:	ea000002 	b	15cc84 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x3d4>
        15cc78:	00000000 	andeq	r0, r0, r0
        15cc7c:	e1a0000d 	mov	r0, sp
        15cc80:	eb6a1533 	bl	1be2154 <$NextHandler>
        15cc84:	e1a0000d 	mov	r0, sp
        15cc88:	eb6a110a 	bl	1be10b8 <$ExitHandler>
        15cc8c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15cc90:	e3350000 	teq	r5, #0	; 0x0
        15cc94:	1a000006 	bne	15ccb4 <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x404>
        15cc98:	e1a02006 	mov	r2, r6
        15cc9c:	e1a01009 	mov	r1, r9
        15cca0:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        15cca4:	e28d001c 	add	r0, sp, #28	; 0x1c
        15cca8:	eb66b618 	bl	1b0a510 <TStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        15ccac:	e1b05000 	movs	r5, r0
        15ccb0:	0a000005 	beq	15cccc <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x41c>
        15ccb4:	e28d001c 	add	r0, sp, #28	; 0x1c
        15ccb8:	e3a01000 	mov	r1, #0	; 0x0
        15ccbc:	e1a0e00f 	mov	lr, pc
        15ccc0:	e59df01c 	ldr	pc, [sp, #28]	; fField28
        15ccc4:	e28dd04c 	add	sp, sp, #76	; 0x4c
        15ccc8:	ea000013 	b	15cd1c <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x46c>
        15cccc:	e0588006 	subs	r8, r8, r6
        15ccd0:	e28dd004 	add	sp, sp, #4	; 0x4
        15ccd4:	1affff90 	bne	15cb1c <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x26c>
        15ccd8:	e28dd004 	add	sp, sp, #4	; 0x4
        15ccdc:	e59d006c 	ldr	r0, [sp, #108]
        15cce0:	e2800001 	add	r0, r0, #1	; 0x1
        15cce4:	e58d006c 	str	r0, [sp, #108]
        15cce8:	e1a00004 	mov	r0, r4
        15ccec:	eb69ebaf 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        15ccf0:	e59d106c 	ldr	r1, [sp, #108]
        15ccf4:	e1500001 	cmp	r0, r1
        15ccf8:	8affff77 	bhi	15cadc <TPackageIterator::Store(TStore *, unsigned long, TCallbackCompressor *, TLOCallback *)+0x22c>
        15ccfc:	e28d0014 	add	r0, sp, #20	; 0x14
        15cd00:	eb666fc9 	bl	1af8c2c <TStorePackageWriter::$Flush(void)>
        15cd04:	e1a05000 	mov	r5, r0
        15cd08:	e28d0014 	add	r0, sp, #20	; 0x14
        15cd0c:	e3a01000 	mov	r1, #0	; 0x0
        15cd10:	e1a0e00f 	mov	lr, pc
        15cd14:	e59df014 	ldr	pc, [sp, #20]	; fField20
        15cd18:	e28dd044 	add	sp, sp, #68	; 0x44
        15cd1c:	e1a00009 	mov	r0, r9
        15cd20:	eb69c26e 	bl	1bcd6e0 <$__dl(void *)>
        15cd24:	e1a00005 	mov	r0, r5
        15cd28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageIterator::PackageName(void)
 * Address: 0015cd2c
 */
TPackageIterator::PackageName(void) {
    /*
        15cd2c:	ea00ddfc 	b	194524 <TPrivatePackageIterator::PackageName(void)>
    */
}

/**
 * Symbol: TPackageIterator::GetPartDataOffset(unsigned long)
 * Address: 0015cd30
 */
TPackageIterator::GetPartDataOffset(unsigned long) {
    /*
        15cd30:	ea00de00 	b	194538 <TPrivatePackageIterator::GetPartDataOffset(unsigned long)>
    */
}

/**
 * Symbol: TPackageIterator::InitFields(void)
 * Address: 0015cd34
 */
TPackageIterator::InitFields(void) {
    /*
        15cd34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPackageIterator::DisposeDirectory(void)
 * Address: 0015cd38
 */
TPackageIterator::DisposeDirectory(void) {
    /*
        15cd38:	e1a0c00d 	mov	ip, sp
        15cd3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15cd40:	e24cb004 	sub	fp, ip, #4	; 0x4
        15cd44:	e1a04000 	mov	r4, r0
        15cd48:	e5d00020 	ldrb	r0, [r0, #32]	; fField32
        15cd4c:	e3300000 	teq	r0, #0	; 0x0
        15cd50:	0a00000e 	beq	15cd90 <TPackageIterator::DisposeDirectory(void)+0x58>
        15cd54:	e5940008 	ldr	r0, [r4, #8]	; fField8
        15cd58:	e3300000 	teq	r0, #0	; 0x0
        15cd5c:	1b69c25f 	blne	1bcd6e0 <$__dl(void *)>
        15cd60:	e594000c 	ldr	r0, [r4, #12]	; fField12
        15cd64:	e3300000 	teq	r0, #0	; 0x0
        15cd68:	1b69d6fa 	blne	1bd2958 <$free>
        15cd6c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        15cd70:	e3300000 	teq	r0, #0	; 0x0
        15cd74:	1b69d6f7 	blne	1bd2958 <$free>
        15cd78:	e5940010 	ldr	r0, [r4, #16]	; fField16
        15cd7c:	e3300000 	teq	r0, #0	; 0x0
        15cd80:	1b69d6f4 	blne	1bd2958 <$free>
        15cd84:	e5940014 	ldr	r0, [r4, #20]	; fField20
        15cd88:	e3300000 	teq	r0, #0	; 0x0
        15cd8c:	1b69d6f1 	blne	1bd2958 <$free>
        15cd90:	e1a00004 	mov	r0, r4
        15cd94:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        15cd98:	ea00de8a 	b	1947c8 <TPrivatePackageIterator::DisposeDirectory(void)>
    */
}

/**
 * Symbol: TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)
 * Address: 0015cd9c
 */
TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &) {
    /*
        15cd9c:	e1a0c00d 	mov	ip, sp
        15cda0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15cda4:	e24cb004 	sub	fp, ip, #4	; 0x4
        15cda8:	e1a04000 	mov	r4, r0
        15cdac:	e1a06001 	mov	r6, r1
        15cdb0:	e1a05002 	mov	r5, r2
        15cdb4:	e24dd004 	sub	sp, sp, #4	; 0x4
        15cdb8:	e3a07000 	mov	r7, #0	; 0x0
        15cdbc:	e5d00020 	ldrb	r0, [r0, #32]	; fField32
        15cdc0:	e3300000 	teq	r0, #0	; 0x0
        15cdc4:	0a000051 	beq	15cf10 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0x174>
        15cdc8:	e5960000 	ldr	r0, [r6]
        15cdcc:	eb69e765 	bl	1bd6b68 <$malloc>
        15cdd0:	e3a0a0e9 	mov	sl, #233	; 0xe9
        15cdd4:	e24aab0a 	sub	sl, sl, #10240	; 0x2800
        15cdd8:	e584000c 	str	r0, [r4, #12]	; fField12
        15cddc:	e3300000 	teq	r0, #0	; 0x0
        15cde0:	0a000028 	beq	15ce88 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0xec>
        15cde4:	e3a09000 	mov	r9, #0	; 0x0
        15cde8:	e52d906c 	str	r9, [sp, -#108]!
        15cdec:	e28d0008 	add	r0, sp, #8	; 0x8
        15cdf0:	eb6956df 	bl	1bb2974 <$setjmp>
        15cdf4:	e59f8040 	ldr	r8, [pc, #40]	; 15ce3c <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0xa0>
        15cdf8:	e3300000 	teq	r0, #0	; 0x0
        15cdfc:	1a00000f 	bne	15ce40 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0xa4>
        15ce00:	e1a0000d 	mov	r0, sp
        15ce04:	eb6a0c9c 	bl	1be007c <$AddExceptionHandler>
        15ce08:	e24dd004 	sub	sp, sp, #4	; 0x4
        15ce0c:	e5960000 	ldr	r0, [r6]
        15ce10:	e58d0000 	str	r0, [sp]
        15ce14:	e28d3070 	add	r3, sp, #112	; 0x70
        15ce18:	e1a0200d 	mov	r2, sp
        15ce1c:	e594c024 	ldr	ip, [r4, #36]	; fField36
        15ce20:	e1a0000c 	mov	r0, ip
        15ce24:	e594100c 	ldr	r1, [r4, #12]	; fField12
        15ce28:	e59cc000 	ldr	ip, [ip]
        15ce2c:	e1a0e00f 	mov	lr, pc
        15ce30:	e28cf014 	add	pc, ip, #20	; 0x14
        15ce34:	e28dd004 	add	sp, sp, #4	; 0x4
        15ce38:	ea000008 	b	15ce60 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0xc4>
        15ce3c:	00371324 	eoreqs	r1, r7, r4, lsr #6
        15ce40:	e59d0060 	ldr	r0, [sp, #96]
        15ce44:	e5981000 	ldr	r1, [r8]
        15ce48:	eb6a18d1 	bl	1be3194 <$Subexception>
        15ce4c:	e3300000 	teq	r0, #0	; 0x0
        15ce50:	159d7064 	ldrne	r7, [sp, #100]
        15ce54:	1a000001 	bne	15ce60 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0xc4>
        15ce58:	e1a0000d 	mov	r0, sp
        15ce5c:	eb6a14bc 	bl	1be2154 <$NextHandler>
        15ce60:	e1a0000d 	mov	r0, sp
        15ce64:	eb6a1093 	bl	1be10b8 <$ExitHandler>
        15ce68:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15ce6c:	e3370000 	teq	r7, #0	; 0x0
        15ce70:	1a00002a 	bne	15cf20 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0x184>
        15ce74:	e5950000 	ldr	r0, [r5]
        15ce78:	eb69e73a 	bl	1bd6b68 <$malloc>
        15ce7c:	e5840018 	str	r0, [r4, #24]	; fField24
        15ce80:	e3300000 	teq	r0, #0	; 0x0
        15ce84:	1a000001 	bne	15ce90 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0xf4>
        15ce88:	e1a0700a 	mov	r7, sl
        15ce8c:	ea000023 	b	15cf20 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0x184>
        15ce90:	e52d906c 	str	r9, [sp, -#108]!
        15ce94:	e28d0008 	add	r0, sp, #8	; 0x8
        15ce98:	eb6956b5 	bl	1bb2974 <$setjmp>
        15ce9c:	e3300000 	teq	r0, #0	; 0x0
        15cea0:	1a00000e 	bne	15cee0 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0x144>
        15cea4:	e1a0000d 	mov	r0, sp
        15cea8:	eb6a0c73 	bl	1be007c <$AddExceptionHandler>
        15ceac:	e24dd004 	sub	sp, sp, #4	; 0x4
        15ceb0:	e5950000 	ldr	r0, [r5]
        15ceb4:	e58d0000 	str	r0, [sp]
        15ceb8:	e28d3070 	add	r3, sp, #112	; 0x70
        15cebc:	e1a0200d 	mov	r2, sp
        15cec0:	e5b41018 	ldr	r1, [r4, #24]!	; fField24
        15cec4:	e5b4c00c 	ldr	ip, [r4, #12]!	; fField12
        15cec8:	e1a0000c 	mov	r0, ip
        15cecc:	e59cc000 	ldr	ip, [ip]
        15ced0:	e1a0e00f 	mov	lr, pc
        15ced4:	e28cf014 	add	pc, ip, #20	; 0x14
        15ced8:	e28dd004 	add	sp, sp, #4	; 0x4
        15cedc:	ea000007 	b	15cf00 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0x164>
        15cee0:	e59d0060 	ldr	r0, [sp, #96]
        15cee4:	e5981000 	ldr	r1, [r8]
        15cee8:	eb6a18a9 	bl	1be3194 <$Subexception>
        15ceec:	e3300000 	teq	r0, #0	; 0x0
        15cef0:	159d7064 	ldrne	r7, [sp, #100]
        15cef4:	1a000001 	bne	15cf00 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0x164>
        15cef8:	e1a0000d 	mov	r0, sp
        15cefc:	eb6a1494 	bl	1be2154 <$NextHandler>
        15cf00:	e1a0000d 	mov	r0, sp
        15cf04:	eb6a106b 	bl	1be10b8 <$ExitHandler>
        15cf08:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15cf0c:	ea000003 	b	15cf20 <TPackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)+0x184>
        15cf10:	e1a02005 	mov	r2, r5
        15cf14:	e1a01006 	mov	r1, r6
        15cf18:	e1a00004 	mov	r0, r4
        15cf1c:	eb00de58 	bl	194884 <TPrivatePackageIterator::ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)>
        15cf20:	e1a00007 	mov	r0, r7
        15cf24:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageIterator::GetRelocationChunkInfo(void)
 * Address: 0015cf28
 */
TPackageIterator::GetRelocationChunkInfo(void) {
    /*
        15cf28:	e1a0c00d 	mov	ip, sp
        15cf2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15cf30:	e24cb004 	sub	fp, ip, #4	; 0x4
        15cf34:	e1a04000 	mov	r4, r0
        15cf38:	e3a05000 	mov	r5, #0	; 0x0
        15cf3c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        15cf40:	e3300000 	teq	r0, #0	; 0x0
        15cf44:	0a000034 	beq	15d01c <TPackageIterator::GetRelocationChunkInfo(void)+0xf4>
        15cf48:	e5d41020 	ldrb	r1, [r4, #32]	; fField32
        15cf4c:	e3310000 	teq	r1, #0	; 0x0
        15cf50:	0a00002e 	beq	15d010 <TPackageIterator::GetRelocationChunkInfo(void)+0xe8>
        15cf54:	e24dd004 	sub	sp, sp, #4	; 0x4
        15cf58:	e5900004 	ldr	r0, [r0, #4]	; fField4
        15cf5c:	e2400014 	sub	r0, r0, #20	; 0x14
        15cf60:	eb69e700 	bl	1bd6b68 <$malloc>
        15cf64:	e5840014 	str	r0, [r4, #20]	; fField20
        15cf68:	e3300000 	teq	r0, #0	; 0x0
        15cf6c:	03a050e9 	moveq	r5, #233	; 0xe9
        15cf70:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
        15cf74:	0a000022 	beq	15d004 <TPackageIterator::GetRelocationChunkInfo(void)+0xdc>
        15cf78:	e3a00000 	mov	r0, #0	; 0x0
        15cf7c:	e52d006c 	str	r0, [sp, -#108]!
        15cf80:	e28d0008 	add	r0, sp, #8	; 0x8
        15cf84:	eb69567a 	bl	1bb2974 <$setjmp>
        15cf88:	e3300000 	teq	r0, #0	; 0x0
        15cf8c:	1a000010 	bne	15cfd4 <TPackageIterator::GetRelocationChunkInfo(void)+0xac>
        15cf90:	e1a0000d 	mov	r0, sp
        15cf94:	eb6a0c38 	bl	1be007c <$AddExceptionHandler>
        15cf98:	e24dd004 	sub	sp, sp, #4	; 0x4
        15cf9c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        15cfa0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        15cfa4:	e2400014 	sub	r0, r0, #20	; 0x14
        15cfa8:	e58d0000 	str	r0, [sp]
        15cfac:	e28d3070 	add	r3, sp, #112	; 0x70
        15cfb0:	e1a0200d 	mov	r2, sp
        15cfb4:	e5b41014 	ldr	r1, [r4, #20]!	; fField20
        15cfb8:	e5b4c010 	ldr	ip, [r4, #16]!	; fField16
        15cfbc:	e1a0000c 	mov	r0, ip
        15cfc0:	e59cc000 	ldr	ip, [ip]
        15cfc4:	e1a0e00f 	mov	lr, pc
        15cfc8:	e28cf014 	add	pc, ip, #20	; 0x14
        15cfcc:	e28dd004 	add	sp, sp, #4	; 0x4
        15cfd0:	ea000008 	b	15cff8 <TPackageIterator::GetRelocationChunkInfo(void)+0xd0>
        15cfd4:	e59d0060 	ldr	r0, [sp, #96]
        15cfd8:	e59f102c 	ldr	r1, [pc, #2c]	; 15d00c <TPackageIterator::GetRelocationChunkInfo(void)+0xe4>
        15cfdc:	e5911000 	ldr	r1, [r1]
        15cfe0:	eb6a186b 	bl	1be3194 <$Subexception>
        15cfe4:	e3300000 	teq	r0, #0	; 0x0
        15cfe8:	159d5064 	ldrne	r5, [sp, #100]
        15cfec:	1a000001 	bne	15cff8 <TPackageIterator::GetRelocationChunkInfo(void)+0xd0>
        15cff0:	e1a0000d 	mov	r0, sp
        15cff4:	eb6a1456 	bl	1be2154 <$NextHandler>
        15cff8:	e1a0000d 	mov	r0, sp
        15cffc:	eb6a102d 	bl	1be10b8 <$ExitHandler>
        15d000:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15d004:	e28dd004 	add	sp, sp, #4	; 0x4
        15d008:	ea000003 	b	15d01c <TPackageIterator::GetRelocationChunkInfo(void)+0xf4>
        15d00c:	00371324 	eoreqs	r1, r7, r4, lsr #6
        15d010:	e1a00004 	mov	r0, r4
        15d014:	eb00de23 	bl	1948a8 <TPrivatePackageIterator::GetRelocationChunkInfo(void)>
        15d018:	e1a05000 	mov	r5, r0
        15d01c:	e1a00005 	mov	r0, r5
        15d020:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageIterator::SetupRelocationData(unsigned long, unsigned long *)
 * Address: 0015d024
 */
TPackageIterator::SetupRelocationData(unsigned long, unsigned long *) {
    /*
        15d024:	e1a0c00d 	mov	ip, sp
        15d028:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        15d02c:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d030:	e1a04000 	mov	r4, r0
        15d034:	e1a05002 	mov	r5, r2
        15d038:	e24dd004 	sub	sp, sp, #4	; 0x4
        15d03c:	e3a06000 	mov	r6, #0	; 0x0
        15d040:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15d044:	e590000c 	ldr	r0, [r0, #12]	; fField12
        15d048:	e3100301 	tst	r0, #67108864	; 0x4000000
        15d04c:	e3a07000 	mov	r7, #0	; 0x0
        15d050:	0a000037 	beq	15d134 <TPackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0x110>
        15d054:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        15d058:	e3300000 	teq	r0, #0	; 0x0
        15d05c:	0a00002f 	beq	15d120 <TPackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0xfc>
        15d060:	e3a00014 	mov	r0, #20	; 0x14
        15d064:	eb69e6bf 	bl	1bd6b68 <$malloc>
        15d068:	e5840010 	str	r0, [r4, #16]	; fField16
        15d06c:	e3300000 	teq	r0, #0	; 0x0
        15d070:	03a060e9 	moveq	r6, #233	; 0xe9
        15d074:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        15d078:	0a000030 	beq	15d140 <TPackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0x11c>
        15d07c:	e52d706c 	str	r7, [sp, -#108]!
        15d080:	e28d0008 	add	r0, sp, #8	; 0x8
        15d084:	eb69563a 	bl	1bb2974 <$setjmp>
        15d088:	e3300000 	teq	r0, #0	; 0x0
        15d08c:	1a00000d 	bne	15d0c8 <TPackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0xa4>
        15d090:	e1a0000d 	mov	r0, sp
        15d094:	eb6a0bf8 	bl	1be007c <$AddExceptionHandler>
        15d098:	e3a00014 	mov	r0, #20	; 0x14
        15d09c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        15d0a0:	e28d3070 	add	r3, sp, #112	; 0x70
        15d0a4:	e1a0200d 	mov	r2, sp
        15d0a8:	e594c024 	ldr	ip, [r4, #36]	; fField36
        15d0ac:	e1a0000c 	mov	r0, ip
        15d0b0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        15d0b4:	e59cc000 	ldr	ip, [ip]
        15d0b8:	e1a0e00f 	mov	lr, pc
        15d0bc:	e28cf014 	add	pc, ip, #20	; 0x14
        15d0c0:	e28dd004 	add	sp, sp, #4	; 0x4
        15d0c4:	ea000008 	b	15d0ec <TPackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0xc8>
        15d0c8:	e59d0060 	ldr	r0, [sp, #96]
        15d0cc:	e59f1048 	ldr	r1, [pc, #48]	; 15d11c <TPackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0xf8>
        15d0d0:	e5911000 	ldr	r1, [r1]
        15d0d4:	eb6a182e 	bl	1be3194 <$Subexception>
        15d0d8:	e3300000 	teq	r0, #0	; 0x0
        15d0dc:	159d6064 	ldrne	r6, [sp, #100]
        15d0e0:	1a000001 	bne	15d0ec <TPackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0xc8>
        15d0e4:	e1a0000d 	mov	r0, sp
        15d0e8:	eb6a1419 	bl	1be2154 <$NextHandler>
        15d0ec:	e1a0000d 	mov	r0, sp
        15d0f0:	eb6a0ff0 	bl	1be10b8 <$ExitHandler>
        15d0f4:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15d0f8:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        15d0fc:	e5901000 	ldr	r1, [r0]
        15d100:	e3310000 	teq	r1, #0	; 0x0
        15d104:	13e06e8a 	mvnne	r6, #2208	; 0x8a0
        15d108:	12466a02 	subne	r6, r6, #8192	; 0x2000
        15d10c:	15857000 	strne	r7, [r5]
        15d110:	05900004 	ldreq	r0, [r0, #4]	; fField4
        15d114:	05850000 	streq	r0, [r5]
        15d118:	ea000008 	b	15d140 <TPackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0x11c>
        15d11c:	00371324 	eoreqs	r1, r7, r4, lsr #6
        15d120:	e1a02005 	mov	r2, r5
        15d124:	e1a00004 	mov	r0, r4
        15d128:	eb00dde4 	bl	1948c0 <TPrivatePackageIterator::SetupRelocationData(unsigned long, unsigned long *)>
        15d12c:	e1a06000 	mov	r6, r0
        15d130:	ea000002 	b	15d140 <TPackageIterator::SetupRelocationData(unsigned long, unsigned long *)+0x11c>
        15d134:	e5847010 	str	r7, [r4, #16]	; fField16
        15d138:	e5a47014 	str	r7, [r4, #20]!	; fField20
        15d13c:	e5857000 	str	r7, [r5]
        15d140:	e1a00006 	mov	r0, r6
        15d144:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPackageIterator::Init(void)
 * Address: 0015d148
 */
TPackageIterator::Init(void) {
    /*
        15d148:	e1a0c00d 	mov	ip, sp
        15d14c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        15d150:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d154:	e1a04000 	mov	r4, r0
        15d158:	e3a05000 	mov	r5, #0	; 0x0
        15d15c:	e3a06000 	mov	r6, #0	; 0x0
        15d160:	e52d6070 	str	r6, [sp, -#112]!
        15d164:	e28d0008 	add	r0, sp, #8	; 0x8
        15d168:	eb695601 	bl	1bb2974 <$setjmp>
        15d16c:	e3300000 	teq	r0, #0	; 0x0
        15d170:	1a00005b 	bne	15d2e4 <TPackageIterator::Init(void)+0x19c>
        15d174:	e1a0000d 	mov	r0, sp
        15d178:	eb6a0bbf 	bl	1be007c <$AddExceptionHandler>
        15d17c:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        15d180:	e3300000 	teq	r0, #0	; 0x0
        15d184:	0a000051 	beq	15d2d0 <TPackageIterator::Init(void)+0x188>
        15d188:	e3a00034 	mov	r0, #52	; 0x34
        15d18c:	eb69c569 	bl	1bce738 <$__nw(unsigned int)>
        15d190:	e5840008 	str	r0, [r4, #8]	; fField8
        15d194:	e3300000 	teq	r0, #0	; 0x0
        15d198:	03a050e9 	moveq	r5, #233	; 0xe9
        15d19c:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
        15d1a0:	0a000044 	beq	15d2b8 <TPackageIterator::Init(void)+0x170>
        15d1a4:	e52d606c 	str	r6, [sp, -#108]!
        15d1a8:	e28d0008 	add	r0, sp, #8	; 0x8
        15d1ac:	eb6955f0 	bl	1bb2974 <$setjmp>
        15d1b0:	e3300000 	teq	r0, #0	; 0x0
        15d1b4:	1a00000d 	bne	15d1f0 <TPackageIterator::Init(void)+0xa8>
        15d1b8:	e1a0000d 	mov	r0, sp
        15d1bc:	eb6a0bae 	bl	1be007c <$AddExceptionHandler>
        15d1c0:	e3a00034 	mov	r0, #52	; 0x34
        15d1c4:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        15d1c8:	e28d30dc 	add	r3, sp, #220	; 0xdc
        15d1cc:	e1a0200d 	mov	r2, sp
        15d1d0:	e594c024 	ldr	ip, [r4, #36]	; fField36
        15d1d4:	e1a0000c 	mov	r0, ip
        15d1d8:	e5941008 	ldr	r1, [r4, #8]	; fField8
        15d1dc:	e59cc000 	ldr	ip, [ip]
        15d1e0:	e1a0e00f 	mov	lr, pc
        15d1e4:	e28cf014 	add	pc, ip, #20	; 0x14
        15d1e8:	e28dd004 	add	sp, sp, #4	; 0x4
        15d1ec:	ea000008 	b	15d214 <TPackageIterator::Init(void)+0xcc>
        15d1f0:	e59d0060 	ldr	r0, [sp, #96]
        15d1f4:	e59f10d0 	ldr	r1, [pc, #d0]	; 15d2cc <TPackageIterator::Init(void)+0x184>
        15d1f8:	e5911000 	ldr	r1, [r1]
        15d1fc:	eb6a17e4 	bl	1be3194 <$Subexception>
        15d200:	e3300000 	teq	r0, #0	; 0x0
        15d204:	159d5064 	ldrne	r5, [sp, #100]
        15d208:	1a000001 	bne	15d214 <TPackageIterator::Init(void)+0xcc>
        15d20c:	e1a0000d 	mov	r0, sp
        15d210:	eb6a13cf 	bl	1be2154 <$NextHandler>
        15d214:	e1a0000d 	mov	r0, sp
        15d218:	eb6a0fa6 	bl	1be10b8 <$ExitHandler>
        15d21c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15d220:	e3350000 	teq	r5, #0	; 0x0
        15d224:	1a000023 	bne	15d2b8 <TPackageIterator::Init(void)+0x170>
        15d228:	e1a00004 	mov	r0, r4
        15d22c:	eb00dd6d 	bl	1947e8 <TPrivatePackageIterator::CheckHeader(void)>
        15d230:	e1b05000 	movs	r5, r0
        15d234:	1a00001f 	bne	15d2b8 <TPackageIterator::Init(void)+0x170>
        15d238:	e24dd008 	sub	sp, sp, #8	; 0x8
        15d23c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        15d240:	e5900030 	ldr	r0, [r0, #48]
        15d244:	e1a00280 	mov	r0, r0, lsl #5
        15d248:	e58d0004 	str	r0, [sp, #4]	; fField4
        15d24c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        15d250:	e591102c 	ldr	r1, [r1, #44]	; fField44
        15d254:	e2800034 	add	r0, r0, #52	; 0x34
        15d258:	e0410000 	sub	r0, r1, r0
        15d25c:	e58d0000 	str	r0, [sp]
        15d260:	e1a0200d 	mov	r2, sp
        15d264:	e28d1004 	add	r1, sp, #4	; 0x4
        15d268:	e1a00004 	mov	r0, r4
        15d26c:	eb66c531 	bl	1b0e738 <TPackageIterator::$ComputeSizeOfEntriesAndData(unsigned long &, unsigned long &)>
        15d270:	e1b05000 	movs	r5, r0
        15d274:	1a00000e 	bne	15d2b4 <TPackageIterator::Init(void)+0x16c>
        15d278:	e24dd004 	sub	sp, sp, #4	; 0x4
        15d27c:	e99d0003 	ldmib	sp, {r0, r1}
        15d280:	e0811000 	add	r1, r1, r0
        15d284:	e1a0200d 	mov	r2, sp
        15d288:	e1a00004 	mov	r0, r4
        15d28c:	eb66ea47 	bl	1b17bb0 <TPackageIterator::$SetupRelocationData(unsigned long, unsigned long *)>
        15d290:	e1b05000 	movs	r5, r0
        15d294:	1a000005 	bne	15d2b0 <TPackageIterator::Init(void)+0x168>
        15d298:	e99d0003 	ldmib	sp, {r0, r1}
        15d29c:	e0811000 	add	r1, r1, r0
        15d2a0:	e59d0000 	ldr	r0, [sp]
        15d2a4:	e0810000 	add	r0, r1, r0
        15d2a8:	e2800034 	add	r0, r0, #52	; 0x34
        15d2ac:	e584001c 	str	r0, [r4, #28]	; fField28
        15d2b0:	e28dd004 	add	sp, sp, #4	; 0x4
        15d2b4:	e28dd008 	add	sp, sp, #8	; 0x8
        15d2b8:	e3350000 	teq	r5, #0	; 0x0
        15d2bc:	1a000012 	bne	15d30c <TPackageIterator::Init(void)+0x1c4>
        15d2c0:	e1a00004 	mov	r0, r4
        15d2c4:	eb6a0305 	bl	1bddee0 <TPackageIterator::$VerifyPackage(void)>
        15d2c8:	ea000003 	b	15d2dc <TPackageIterator::Init(void)+0x194>
        15d2cc:	00371324 	eoreqs	r1, r7, r4, lsr #6
        15d2d0:	e5941004 	ldr	r1, [r4, #4]	; fField4
        15d2d4:	e1a00004 	mov	r0, r4
        15d2d8:	eb00dd8f 	bl	19491c <TPrivatePackageIterator::Init(void *)>
        15d2dc:	e1a05000 	mov	r5, r0
        15d2e0:	ea000009 	b	15d30c <TPackageIterator::Init(void)+0x1c4>
        15d2e4:	e59d0060 	ldr	r0, [sp, #96]
        15d2e8:	e59f103c 	ldr	r1, [pc, #3c]	; 15d32c <TPackageIterator::Init(void)+0x1e4>
        15d2ec:	e5911000 	ldr	r1, [r1]
        15d2f0:	eb6a17a7 	bl	1be3194 <$Subexception>
        15d2f4:	e3300000 	teq	r0, #0	; 0x0
        15d2f8:	13e05e8a 	mvnne	r5, #2208	; 0x8a0
        15d2fc:	12455a02 	subne	r5, r5, #8192	; 0x2000
        15d300:	1a000001 	bne	15d30c <TPackageIterator::Init(void)+0x1c4>
        15d304:	e1a0000d 	mov	r0, sp
        15d308:	eb6a1391 	bl	1be2154 <$NextHandler>
        15d30c:	e1a0000d 	mov	r0, sp
        15d310:	eb6a0f68 	bl	1be10b8 <$ExitHandler>
        15d314:	e28dd06c 	add	sp, sp, #108	; 0x6c
        15d318:	e3350000 	teq	r5, #0	; 0x0
        15d31c:	11a00004 	movne	r0, r4
        15d320:	1b69d166 	blne	1bd18c0 <TPackageIterator::$DisposeDirectory(void)>
        15d324:	e1a00005 	mov	r0, r5
        15d328:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        15d32c:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TPackageIterator::VerifyPackage(void)
 * Address: 0015d330
 */
TPackageIterator::VerifyPackage(void) {
    /*
        15d330:	e1a0c00d 	mov	ip, sp
        15d334:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        15d338:	e24cb004 	sub	fp, ip, #4	; 0x4
        15d33c:	e1a04000 	mov	r4, r0
        15d340:	e3a05000 	mov	r5, #0	; 0x0
        15d344:	e3a00000 	mov	r0, #0	; 0x0
        15d348:	e52d006c 	str	r0, [sp, -#108]!
        15d34c:	e28d0008 	add	r0, sp, #8	; 0x8
        15d350:	eb695587 	bl	1bb2974 <$setjmp>
        15d354:	e3300000 	teq	r0, #0	; 0x0
        15d358:	1a000005 	bne	15d374 <TPackageIterator::VerifyPackage(void)+0x44>
        15d35c:	e1a0000d 	mov	r0, sp
        15d360:	eb6a0b45 	bl	1be007c <$AddExceptionHandler>
        15d364:	e1a00004 	mov	r0, r4
        15d368:	eb00dda0 	bl	1949f0 <TPrivatePackageIterator::VerifyPackage(void)>
        15d36c:	e1a05000 	mov	r5, r0
        15d370:	ea000009 	b	15d39c <TPackageIterator::VerifyPackage(void)+0x6c>
        15d374:	e59d0060 	ldr	r0, [sp, #96]
        15d378:	e59f102c 	ldr	r1, [pc, #2c]	; 15d3ac <TPackageIterator::VerifyPackage(void)+0x7c>
        15d37c:	e5911000 	ldr	r1, [r1]
        15d380:	eb6a1783 	bl	1be3194 <$Subexception>
        15d384:	e3300000 	teq	r0, #0	; 0x0
        15d388:	13e05e8a 	mvnne	r5, #2208	; 0x8a0
        15d38c:	12455a02 	subne	r5, r5, #8192	; 0x2000
        15d390:	1a000001 	bne	15d39c <TPackageIterator::VerifyPackage(void)+0x6c>
        15d394:	e1a0000d 	mov	r0, sp
        15d398:	eb6a136d 	bl	1be2154 <$NextHandler>
        15d39c:	e1a0000d 	mov	r0, sp
        15d3a0:	eb6a0f44 	bl	1be10b8 <$ExitHandler>
        15d3a4:	e1a00005 	mov	r0, r5
        15d3a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        15d3ac:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

