#include "include/TDoubleQContainer.h"

/**
 * Symbol: TDoubleQContainer::AddBefore(void *, void *)
 * Address: 0009c714
 */
TDoubleQContainer::AddBefore(void *, void *) {
    /*
         9c714:	e1a0c00d 	mov	ip, sp
         9c718:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         9c71c:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c720:	e1a04000 	mov	r4, r0
         9c724:	e1a05002 	mov	r5, r2
         9c728:	e5900008 	ldr	r0, [r0, #8]	; fField8
         9c72c:	e0806002 	add	r6, r0, r2
         9c730:	e0807001 	add	r7, r0, r1
         9c734:	e1a01002 	mov	r1, r2
         9c738:	e1a00004 	mov	r0, r4
         9c73c:	eb6ccc2a 	bl	1bcf7ec <TDoubleQContainer::$CheckBeforeAdd(void *)>
         9c740:	e5940000 	ldr	r0, [r4]
         9c744:	e3300000 	teq	r0, #0	; 0x0
         9c748:	11300007 	teqne	r0, r7
         9c74c:	01a01005 	moveq	r1, r5
         9c750:	01a00004 	moveq	r0, r4
         9c754:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         9c758:	0a6ccc0a 	beq	1bcf788 <TDoubleQContainer::$AddToFront(void *)>
         9c75c:	e5970004 	ldr	r0, [r7, #4]	; fField4
         9c760:	e5860004 	str	r0, [r6, #4]	; fField4
         9c764:	e5867000 	str	r7, [r6]
         9c768:	e5a76004 	str	r6, [r7, #4]!	; fField4
         9c76c:	e5960004 	ldr	r0, [r6, #4]	; fField4
         9c770:	e5806000 	str	r6, [r0]
         9c774:	e5a64008 	str	r4, [r6, #8]!	; fField8
         9c778:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDoubleQContainer::Remove(void)
 * Address: 0009c77c
 */
TDoubleQContainer::Remove(void) {
    /*
         9c77c:	e5901000 	ldr	r1, [r0]
         9c780:	e3310000 	teq	r1, #0	; 0x0
         9c784:	0a00000c 	beq	9c7bc <TDoubleQContainer::Remove(void)+0x40>
         9c788:	e5913000 	ldr	r3, [r1]
         9c78c:	e3a02000 	mov	r2, #0	; 0x0
         9c790:	e5803000 	str	r3, [r0]
         9c794:	e3330000 	teq	r3, #0	; 0x0
         9c798:	15a32004 	strne	r2, [r3, #4]!	; fField4
         9c79c:	05802004 	streq	r2, [r0, #4]	; fField4
         9c7a0:	e5812004 	str	r2, [r1, #4]	; fField4
         9c7a4:	e5812000 	str	r2, [r1]
         9c7a8:	e5812008 	str	r2, [r1, #8]	; fField8
         9c7ac:	e3310000 	teq	r1, #0	; 0x0
         9c7b0:	15900008 	ldrne	r0, [r0, #8]	; fField8
         9c7b4:	10410000 	subne	r0, r1, r0
         9c7b8:	11a0f00e 	movne	pc, lr
         9c7bc:	e3a00000 	mov	r0, #0	; 0x0
         9c7c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDoubleQContainer::RemoveFromQueue(void *)
 * Address: 0009c7c4
 */
TDoubleQContainer::RemoveFromQueue(void *) {
    /*
         9c7c4:	e92d4000 	stmdb	sp!, {lr}
         9c7c8:	e5902008 	ldr	r2, [r0, #8]	; fField8
         9c7cc:	e0822001 	add	r2, r2, r1
         9c7d0:	e3a03000 	mov	r3, #0	; 0x0
         9c7d4:	e3310000 	teq	r1, #0	; 0x0
         9c7d8:	0a000017 	beq	9c83c <TDoubleQContainer::RemoveFromQueue(void *)+0x78>
         9c7dc:	e5921008 	ldr	r1, [r2, #8]	; fField8
         9c7e0:	e1310000 	teq	r1, r0
         9c7e4:	1a000014 	bne	9c83c <TDoubleQContainer::RemoveFromQueue(void *)+0x78>
         9c7e8:	e8921002 	ldmia	r2, {r1, ip}
         9c7ec:	e590e000 	ldr	lr, [r0]
         9c7f0:	e13e0002 	teq	lr, r2
         9c7f4:	1a000006 	bne	9c814 <TDoubleQContainer::RemoveFromQueue(void *)+0x50>
         9c7f8:	e590c004 	ldr	ip, [r0, #4]	; fField4
         9c7fc:	e13c000e 	teq	ip, lr
         9c800:	15801000 	strne	r1, [r0]
         9c804:	15a13004 	strne	r3, [r1, #4]!	; fField4
         9c808:	05803000 	streq	r3, [r0]
         9c80c:	05a03004 	streq	r3, [r0, #4]!	; fField4
         9c810:	ea000004 	b	9c828 <TDoubleQContainer::RemoveFromQueue(void *)+0x64>
         9c814:	e58c1000 	str	r1, [ip]
         9c818:	e590e004 	ldr	lr, [r0, #4]	; fField4
         9c81c:	e13e0002 	teq	lr, r2
         9c820:	15a1c004 	strne	ip, [r1, #4]!	; fField4
         9c824:	05a0c004 	streq	ip, [r0, #4]!	; fField4
         9c828:	e5823004 	str	r3, [r2, #4]	; fField4
         9c82c:	e5823000 	str	r3, [r2]
         9c830:	e3a00001 	mov	r0, #1	; 0x1
         9c834:	e5a23008 	str	r3, [r2, #8]!	; fField8
         9c838:	e8bd8000 	ldmia	sp!, {pc}
         9c83c:	e1a00003 	mov	r0, r3
         9c840:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TDoubleQContainer::DeleteFromQueue(void *)
 * Address: 0009c844
 */
TDoubleQContainer::DeleteFromQueue(void *) {
    /*
         9c844:	e1a0c00d 	mov	ip, sp
         9c848:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9c84c:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c850:	e1a04000 	mov	r4, r0
         9c854:	e1a05001 	mov	r5, r1
         9c858:	eb6cf520 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
         9c85c:	e3300000 	teq	r0, #0	; 0x0
         9c860:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         9c864:	e594200c 	ldr	r2, [r4, #12]	; fField12
         9c868:	e3320000 	teq	r2, #0	; 0x0
         9c86c:	11a01005 	movne	r1, r5
         9c870:	15b40010 	ldrne	r0, [r4, #16]!	; fField16
         9c874:	11a0e00f 	movne	lr, pc
         9c878:	11a0f002 	movne	pc, r2
         9c87c:	e3a00001 	mov	r0, #1	; 0x1
         9c880:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDoubleQContainer::Peek(void)
 * Address: 0009c884
 */
TDoubleQContainer::Peek(void) {
    /*
         9c884:	e5901000 	ldr	r1, [r0]
         9c888:	e3310000 	teq	r1, #0	; 0x0
         9c88c:	03a00000 	moveq	r0, #0	; 0x0
         9c890:	15900008 	ldrne	r0, [r0, #8]	; fField8
         9c894:	10410000 	subne	r0, r1, r0
         9c898:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDoubleQContainer::GetNext(void *)
 * Address: 0009c89c
 */
TDoubleQContainer::GetNext(void *) {
    /*
         9c89c:	e3310000 	teq	r1, #0	; 0x0
         9c8a0:	0a000008 	beq	9c8c8 <TDoubleQContainer::GetNext(void *)+0x2c>
         9c8a4:	e5902008 	ldr	r2, [r0, #8]	; fField8
         9c8a8:	e0821001 	add	r1, r2, r1
         9c8ac:	e5913008 	ldr	r3, [r1, #8]	; fField8
         9c8b0:	e1330000 	teq	r3, r0
         9c8b4:	1a000003 	bne	9c8c8 <TDoubleQContainer::GetNext(void *)+0x2c>
         9c8b8:	e5910000 	ldr	r0, [r1]
         9c8bc:	e3300000 	teq	r0, #0	; 0x0
         9c8c0:	10400002 	subne	r0, r0, r2
         9c8c4:	11a0f00e 	movne	pc, lr
         9c8c8:	e3a00000 	mov	r0, #0	; 0x0
         9c8cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDoubleQContainer::__ct(void)
 * Address: 0009c8d0
 */
TDoubleQContainer::TDoubleQContainer(void) {
    /*
         9c8d0:	e1a0c00d 	mov	ip, sp
         9c8d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         9c8d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c8dc:	e1b04000 	movs	r4, r0
         9c8e0:	1a000003 	bne	9c8f4 <TDoubleQContainer::__ct(void)+0x24>
         9c8e4:	e3a00014 	mov	r0, #20	; 0x14
         9c8e8:	eb6cc792 	bl	1bce738 <$__nw(unsigned int)>
         9c8ec:	e1b04000 	movs	r4, r0
         9c8f0:	0a000002 	beq	9c900 <TDoubleQContainer::__ct(void)+0x30>
         9c8f4:	e1a00004 	mov	r0, r4
         9c8f8:	e3a01000 	mov	r1, #0	; 0x0
         9c8fc:	eb6ce46b 	bl	1bd5ab0 <TDoubleQContainer::$Init(char *)>
         9c900:	e1a00004 	mov	r0, r4
         9c904:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TDoubleQContainer::__ct(char *)
 * Address: 0009c908
 */
TDoubleQContainer::TDoubleQContainer(char *) {
    /*
         9c908:	e1a0c00d 	mov	ip, sp
         9c90c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9c910:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c914:	e1b04000 	movs	r4, r0
         9c918:	e1a05001 	mov	r5, r1
         9c91c:	1a000003 	bne	9c930 <TDoubleQContainer::__ct(char *)+0x28>
         9c920:	e3a00014 	mov	r0, #20	; 0x14
         9c924:	eb6cc783 	bl	1bce738 <$__nw(unsigned int)>
         9c928:	e1b04000 	movs	r4, r0
         9c92c:	0a000002 	beq	9c93c <TDoubleQContainer::__ct(char *)+0x34>
         9c930:	e1a01005 	mov	r1, r5
         9c934:	e1a00004 	mov	r0, r4
         9c938:	eb6ce45c 	bl	1bd5ab0 <TDoubleQContainer::$Init(char *)>
         9c93c:	e1a00004 	mov	r0, r4
         9c940:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDoubleQContainer::__ct(char *, void (*)(void *, char *), void *)
 * Address: 0009c944
 */
TDoubleQContainer::TDoubleQContainer(char *, (*)(*, char *), *) {
    /*
         9c944:	e1a0c00d 	mov	ip, sp
         9c948:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         9c94c:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c950:	e1b04000 	movs	r4, r0
         9c954:	e1a07001 	mov	r7, r1
         9c958:	e1a06002 	mov	r6, r2
         9c95c:	e1a05003 	mov	r5, r3
         9c960:	1a000003 	bne	9c974 <TDoubleQContainer::__ct(char *, void (*)(void *, char *), void *)+0x30>
         9c964:	e3a00014 	mov	r0, #20	; 0x14
         9c968:	eb6cc772 	bl	1bce738 <$__nw(unsigned int)>
         9c96c:	e1b04000 	movs	r4, r0
         9c970:	0a000004 	beq	9c988 <TDoubleQContainer::__ct(char *, void (*)(void *, char *), void *)+0x44>
         9c974:	e1a01007 	mov	r1, r7
         9c978:	e1a00004 	mov	r0, r4
         9c97c:	eb6ce44b 	bl	1bd5ab0 <TDoubleQContainer::$Init(char *)>
         9c980:	e5845010 	str	r5, [r4, #16]	; fField16
         9c984:	e584600c 	str	r6, [r4, #12]	; fField12
         9c988:	e1a00004 	mov	r0, r4
         9c98c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDoubleQContainer::Init(char *)
 * Address: 0009c990
 */
TDoubleQContainer::Init(char *) {
    /*
         9c990:	e3a02000 	mov	r2, #0	; 0x0
         9c994:	e5802000 	str	r2, [r0]
         9c998:	e5801008 	str	r1, [r0, #8]	; fField8
         9c99c:	e5802004 	str	r2, [r0, #4]	; fField4
         9c9a0:	e580200c 	str	r2, [r0, #12]	; fField12
         9c9a4:	e5a02010 	str	r2, [r0, #16]!	; fField16
         9c9a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDoubleQContainer::CheckBeforeAdd(void *)
 * Address: 0009c9ac
 */
TDoubleQContainer::CheckBeforeAdd(void *) {
    /*
         9c9ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDoubleQContainer::Add(void *)
 * Address: 0009c9b0
 */
TDoubleQContainer::Add(void *) {
    /*
         9c9b0:	e1a0c00d 	mov	ip, sp
         9c9b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9c9b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c9bc:	e1a04000 	mov	r4, r0
         9c9c0:	e5900008 	ldr	r0, [r0, #8]	; fField8
         9c9c4:	e0805001 	add	r5, r0, r1
         9c9c8:	e1a00004 	mov	r0, r4
         9c9cc:	eb6ccb86 	bl	1bcf7ec <TDoubleQContainer::$CheckBeforeAdd(void *)>
         9c9d0:	e3a00000 	mov	r0, #0	; 0x0
         9c9d4:	e5850000 	str	r0, [r5]
         9c9d8:	e5940000 	ldr	r0, [r4]
         9c9dc:	e3300000 	teq	r0, #0	; 0x0
         9c9e0:	05845000 	streq	r5, [r4]
         9c9e4:	05854004 	streq	r4, [r5, #4]	; fField4
         9c9e8:	0a000003 	beq	9c9fc <TDoubleQContainer::Add(void *)+0x4c>
         9c9ec:	e5940004 	ldr	r0, [r4, #4]	; fField4
         9c9f0:	e5805000 	str	r5, [r0]
         9c9f4:	e5940004 	ldr	r0, [r4, #4]	; fField4
         9c9f8:	e5850004 	str	r0, [r5, #4]	; fField4
         9c9fc:	e5845004 	str	r5, [r4, #4]	; fField4
         9ca00:	e5a54008 	str	r4, [r5, #8]!	; fField8
         9ca04:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDoubleQContainer::AddToFront(void *)
 * Address: 0009ca08
 */
TDoubleQContainer::AddToFront(void *) {
    /*
         9ca08:	e1a0c00d 	mov	ip, sp
         9ca0c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9ca10:	e24cb004 	sub	fp, ip, #4	; 0x4
         9ca14:	e1a04000 	mov	r4, r0
         9ca18:	e5900008 	ldr	r0, [r0, #8]	; fField8
         9ca1c:	e0805001 	add	r5, r0, r1
         9ca20:	e1a00004 	mov	r0, r4
         9ca24:	eb6ccb70 	bl	1bcf7ec <TDoubleQContainer::$CheckBeforeAdd(void *)>
         9ca28:	e3a00000 	mov	r0, #0	; 0x0
         9ca2c:	e5850000 	str	r0, [r5]
         9ca30:	e5850004 	str	r0, [r5, #4]	; fField4
         9ca34:	e5940000 	ldr	r0, [r4]
         9ca38:	e3300000 	teq	r0, #0	; 0x0
         9ca3c:	15a05004 	strne	r5, [r0, #4]!	; fField4
         9ca40:	15940000 	ldrne	r0, [r4]
         9ca44:	15850000 	strne	r0, [r5]
         9ca48:	05845004 	streq	r5, [r4, #4]	; fField4
         9ca4c:	e5845000 	str	r5, [r4]
         9ca50:	e5a54008 	str	r4, [r5, #8]!	; fField8
         9ca54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

