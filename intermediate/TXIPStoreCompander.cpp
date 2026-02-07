#include "include/TXIPStoreCompander.h"

/**
 * Symbol: Sizeof__18TXIPStoreCompanderSFv
 * Address: 0027a81c
 */
void TXIPStoreCompander::Sizeof() {
    /*
        27a81c:	e3a00028 	mov	r0, #40	; 0x28
        27a820:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXIPStoreCompander::New(void)
 * Address: 0027a824
 */
TXIPStoreCompander::New(void) {
    /*
        27a824:	e3a01000 	mov	r1, #0	; 0x0
        27a828:	e5801010 	str	r1, [r0, #16]	; fField16
        27a82c:	e5c0101c 	strb	r1, [r0, #28]	; fField28
        27a830:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXIPStoreCompander::Delete(void)
 * Address: 0027a834
 */
TXIPStoreCompander::Delete(void) {
    /*
        27a834:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXIPStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 0027a838
 */
TXIPStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
        27a838:	e1a0c00d 	mov	ip, sp
        27a83c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        27a840:	e24cb004 	sub	fp, ip, #4	; 0x4
        27a844:	e1a04000 	mov	r4, r0
        27a848:	e1a05001 	mov	r5, r1
        27a84c:	e1a07002 	mov	r7, r2
        27a850:	e1a06003 	mov	r6, r3
        27a854:	e59b0004 	ldr	r0, [fp, #4]
        27a858:	e20080ff 	and	r8, r0, #255	; 0xff
        27a85c:	e24dd008 	sub	sp, sp, #8	; 0x8
        27a860:	e1a0000d 	mov	r0, sp
        27a864:	eb62603d 	bl	1b12960 <XIPParameterBlock::$__ct(void)>
        27a868:	e2844010 	add	r4, r4, #16	; 0x10
        27a86c:	e88400a0 	stmia	r4, {r5, r7}
        27a870:	e2444010 	sub	r4, r4, #16	; 0x10
        27a874:	e5c4801c 	strb	r8, [r4, #28]	; fField28
        27a878:	e2848018 	add	r8, r4, #24	; 0x18
        27a87c:	e24dd014 	sub	sp, sp, #20	; 0x14
        27a880:	e1a0000d 	mov	r0, sp
        27a884:	eb61d3cf 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        27a888:	e3a03014 	mov	r3, #20	; 0x14
        27a88c:	e92d0008 	stmdb	sp!, {r3}
        27a890:	e28d3004 	add	r3, sp, #4	; 0x4
        27a894:	e1a01007 	mov	r1, r7
        27a898:	e1a00005 	mov	r0, r5
        27a89c:	e3a02000 	mov	r2, #0	; 0x0
        27a8a0:	eb621e26 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a8a4:	e5bd1004 	ldr	r1, [sp, #4]!
        27a8a8:	e5881000 	str	r1, [r8]
        27a8ac:	e28dd014 	add	sp, sp, #20	; 0x14
        27a8b0:	e3300000 	teq	r0, #0	; 0x0
        27a8b4:	1a00000d 	bne	27a8f0 <TXIPStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0xb8>
        27a8b8:	e3a03008 	mov	r3, #8	; 0x8
        27a8bc:	e92d0008 	stmdb	sp!, {r3}
        27a8c0:	e28d3004 	add	r3, sp, #4	; 0x4
        27a8c4:	e1a01006 	mov	r1, r6
        27a8c8:	e1a00005 	mov	r0, r5
        27a8cc:	e3a02000 	mov	r2, #0	; 0x0
        27a8d0:	eb621e1a 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a8d4:	e28dd004 	add	sp, sp, #4	; 0x4
        27a8d8:	e3300000 	teq	r0, #0	; 0x0
        27a8dc:	1a000003 	bne	27a8f0 <TXIPStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0xb8>
        27a8e0:	e59d1000 	ldr	r1, [sp]
        27a8e4:	e5841020 	str	r1, [r4, #32]	; fField32
        27a8e8:	e59d1004 	ldr	r1, [sp, #4]
        27a8ec:	e5a41024 	str	r1, [r4, #36]!	; fField36
        27a8f0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPStoreCompander::BlockSize(void)
 * Address: 0027a8f4
 */
TXIPStoreCompander::BlockSize(void) {
    /*
        27a8f4:	e3a00b01 	mov	r0, #1024	; 0x400
        27a8f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXIPStoreCompander::Read(unsigned long, char *, long, unsigned long)
 * Address: 0027a8fc
 */
TXIPStoreCompander::Read(unsigned long, char *, long, unsigned long) {
    /*
        27a8fc:	e1a0c00d 	mov	ip, sp
        27a900:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        27a904:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        27a908:	e24cb014 	sub	fp, ip, #20	; 0x14
        27a90c:	e1a04000 	mov	r4, r0
        27a910:	e1a06001 	mov	r6, r1
        27a914:	e1a05002 	mov	r5, r2
        27a918:	e59ba014 	ldr	sl, [fp, #20]
        27a91c:	e24ddf53 	sub	sp, sp, #332	; 0x14c
        27a920:	e28d0004 	add	r0, sp, #4	; 0x4
        27a924:	eb626008 	bl	1b1294c <TXIPCRelocator::$__ct(void)>
        27a928:	e5940024 	ldr	r0, [r4, #36]	; fField36
        27a92c:	e1a07000 	mov	r7, r0
        27a930:	e1a01006 	mov	r1, r6
        27a934:	eb64e003 	bl	1bb2948 <$__rt_udiv>
        27a938:	e0010790 	mul	r1, r0, r7
        27a93c:	e0461001 	sub	r1, r6, r1
        27a940:	e1a09521 	mov	r9, r1, lsr #10
        27a944:	e3a03004 	mov	r3, #4	; 0x4
        27a948:	e92d0008 	stmdb	sp!, {r3}
        27a94c:	e1a02100 	mov	r2, r0, lsl #2
        27a950:	e28d3f52 	add	r3, sp, #328	; 0x148
        27a954:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27a958:	e5941018 	ldr	r1, [r4, #24]	; fField24
        27a95c:	eb621df7 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a960:	e28dd004 	add	sp, sp, #4	; 0x4
        27a964:	e1b07000 	movs	r7, r0
        27a968:	1a000004 	bne	27a980 <TXIPStoreCompander::Read(unsigned long, char *, long, unsigned long)+0x84>
        27a96c:	e28d2f52 	add	r2, sp, #328	; 0x148
        27a970:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27a974:	e59d1144 	ldr	r1, [sp, #324]
        27a978:	eb6200e0 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        27a97c:	e1a07000 	mov	r7, r0
        27a980:	e3370000 	teq	r7, #0	; 0x0
        27a984:	1a000031 	bne	27aa50 <TXIPStoreCompander::Read(unsigned long, char *, long, unsigned long)+0x154>
        27a988:	e59d8148 	ldr	r8, [sp, #328]
        27a98c:	e3580000 	cmp	r8, #0	; 0x0
        27a990:	b2488001 	sublt	r8, r8, #1	; 0x1
        27a994:	b2888b01 	addlt	r8, r8, #1024	; 0x400
        27a998:	e1a08548 	mov	r8, r8, asr #10
        27a99c:	e3a03004 	mov	r3, #4	; 0x4
        27a9a0:	e92d0008 	stmdb	sp!, {r3}
        27a9a4:	e1a00108 	mov	r0, r8, lsl #2
        27a9a8:	e0800109 	add	r0, r0, r9, lsl #2
        27a9ac:	e280200c 	add	r2, r0, #12	; 0xc
        27a9b0:	e28d3f51 	add	r3, sp, #324	; 0x144
        27a9b4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27a9b8:	e59d1148 	ldr	r1, [sp, #328]
        27a9bc:	eb621ddf 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a9c0:	e28dd004 	add	sp, sp, #4	; 0x4
        27a9c4:	e1b07000 	movs	r7, r0
        27a9c8:	1a000020 	bne	27aa50 <TXIPStoreCompander::Read(unsigned long, char *, long, unsigned long)+0x154>
        27a9cc:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        27a9d0:	e92d0008 	stmdb	sp!, {r3}
        27a9d4:	e1a00188 	mov	r0, r8, lsl #3
        27a9d8:	e0800509 	add	r0, r0, r9, lsl #10
        27a9dc:	e280200c 	add	r2, r0, #12	; 0xc
        27a9e0:	e1a03005 	mov	r3, r5
        27a9e4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27a9e8:	e59d1148 	ldr	r1, [sp, #328]
        27a9ec:	eb621dd3 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27a9f0:	e28dd004 	add	sp, sp, #4	; 0x4
        27a9f4:	e1b07000 	movs	r7, r0
        27a9f8:	1a000014 	bne	27aa50 <TXIPStoreCompander::Read(unsigned long, char *, long, unsigned long)+0x154>
        27a9fc:	e1a0300d 	mov	r3, sp
        27aa00:	e1a02008 	mov	r2, r8
        27aa04:	e92d000c 	stmdb	sp!, {r2, r3}
        27aa08:	e1a03526 	mov	r3, r6, lsr #10
        27aa0c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        27aa10:	e59d214c 	ldr	r2, [sp, #332]
        27aa14:	e28d000c 	add	r0, sp, #12	; 0xc
        27aa18:	eb625376 	bl	1b0f7f8 <TXIPCRelocator::$Init(TStore *, unsigned long, unsigned long, unsigned long, unsigned long *)>
        27aa1c:	e28dd008 	add	sp, sp, #8	; 0x8
        27aa20:	e28d0004 	add	r0, sp, #4	; 0x4
        27aa24:	e5941020 	ldr	r1, [r4, #32]	; fField32
        27aa28:	e04a2001 	sub	r2, sl, r1
        27aa2c:	e1a01005 	mov	r1, r5
        27aa30:	e1a0e00f 	mov	lr, pc
        27aa34:	e59df004 	ldr	pc, [sp, #4]
        27aa38:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        27aa3c:	e04a2000 	sub	r2, sl, r0
        27aa40:	e28d3004 	add	r3, sp, #4	; 0x4
        27aa44:	e1a01005 	mov	r1, r5
        27aa48:	e28d0d05 	add	r0, sp, #320	; 0x140
        27aa4c:	eb5f7046 	bl	1a56b6c <$RelocateFramesInPage(FrameRelocationHeader *, char *, long, TCRelocator *)>
        27aa50:	e28d0004 	add	r0, sp, #4	; 0x4
        27aa54:	e3a01000 	mov	r1, #0	; 0x0
        27aa58:	e59d2004 	ldr	r2, [sp, #4]
        27aa5c:	e1a0e00f 	mov	lr, pc
        27aa60:	e282f008 	add	pc, r2, #8	; 0x8
        27aa64:	e1a00007 	mov	r0, r7
        27aa68:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPStoreCompander::Write(unsigned long, char *, long, unsigned long)
 * Address: 0027aa6c
 */
TXIPStoreCompander::Write(unsigned long, char *, long, unsigned long) {
    /*
        27aa6c:	e59f0000 	ldr	r0, [pc, #0]	; 27aa74 <TXIPStoreCompander::Write(unsigned long, char *, long, unsigned long)+0x8>
        27aa70:	e1a0f00e 	mov	pc, lr
        27aa74:	ffffd8af 	swinv	0x00ffd8af
    */
}

/**
 * Symbol: TXIPStoreCompander::DoTransactionAgainst(long, unsigned long)
 * Address: 0027aa78
 */
TXIPStoreCompander::DoTransactionAgainst(long, unsigned long) {
    /*
        27aa78:	e1a0c00d 	mov	ip, sp
        27aa7c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        27aa80:	e24cb004 	sub	fp, ip, #4	; 0x4
        27aa84:	e1a04000 	mov	r4, r0
        27aa88:	e1a05001 	mov	r5, r1
        27aa8c:	e24dd010 	sub	sp, sp, #16	; 0x10
        27aa90:	e3a03004 	mov	r3, #4	; 0x4
        27aa94:	e92d0008 	stmdb	sp!, {r3}
        27aa98:	e5901018 	ldr	r1, [r0, #24]	; fField24
        27aa9c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        27aaa0:	e28d3010 	add	r3, sp, #16	; 0x10
        27aaa4:	e3a02000 	mov	r2, #0	; 0x0
        27aaa8:	eb621da4 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27aaac:	e28dd004 	add	sp, sp, #4	; 0x4
        27aab0:	e3300000 	teq	r0, #0	; 0x0
        27aab4:	1a000026 	bne	27ab54 <TXIPStoreCompander::DoTransactionAgainst(long, unsigned long)+0xdc>
        27aab8:	e3a0300c 	mov	r3, #12	; 0xc
        27aabc:	e92d0008 	stmdb	sp!, {r3}
        27aac0:	e28d3004 	add	r3, sp, #4	; 0x4
        27aac4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27aac8:	e3a02000 	mov	r2, #0	; 0x0
        27aacc:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        27aad0:	eb621d9a 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        27aad4:	e28dd004 	add	sp, sp, #4	; 0x4
        27aad8:	e3300000 	teq	r0, #0	; 0x0
        27aadc:	1a00001c 	bne	27ab54 <TXIPStoreCompander::DoTransactionAgainst(long, unsigned long)+0xdc>
        27aae0:	e59d0000 	ldr	r0, [sp]
        27aae4:	e3300000 	teq	r0, #0	; 0x0
        27aae8:	0a000012 	beq	27ab38 <TXIPStoreCompander::DoTransactionAgainst(long, unsigned long)+0xc0>
        27aaec:	e3350000 	teq	r5, #0	; 0x0
        27aaf0:	0a000009 	beq	27ab1c <TXIPStoreCompander::DoTransactionAgainst(long, unsigned long)+0xa4>
        27aaf4:	e3350001 	teq	r5, #1	; 0x1
        27aaf8:	0a00000b 	beq	27ab2c <TXIPStoreCompander::DoTransactionAgainst(long, unsigned long)+0xb4>
        27aafc:	e3350002 	teq	r5, #2	; 0x2
        27ab00:	1a00000c 	bne	27ab38 <TXIPStoreCompander::DoTransactionAgainst(long, unsigned long)+0xc0>
        27ab04:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27ab08:	e59d1000 	ldr	r1, [sp]
        27ab0c:	eb04302f 	bl	386bd0 <TStore::AddToCurrentTransaction(unsigned long)>
        27ab10:	e3300000 	teq	r0, #0	; 0x0
        27ab14:	1a00000e 	bne	27ab54 <TXIPStoreCompander::DoTransactionAgainst(long, unsigned long)+0xdc>
        27ab18:	ea000006 	b	27ab38 <TXIPStoreCompander::DoTransactionAgainst(long, unsigned long)+0xc0>
        27ab1c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27ab20:	e59d1000 	ldr	r1, [sp]
        27ab24:	eb043023 	bl	386bb8 <TStore::StartTransactionAgainst(unsigned long)>
        27ab28:	eafffff8 	b	27ab10 <TXIPStoreCompander::DoTransactionAgainst(long, unsigned long)+0x98>
        27ab2c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        27ab30:	e59d1000 	ldr	r1, [sp]
        27ab34:	eb043022 	bl	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        27ab38:	e3a03001 	mov	r3, #1	; 0x1
        27ab3c:	e92d0008 	stmdb	sp!, {r3}
        27ab40:	e1a03005 	mov	r3, r5
        27ab44:	e284400c 	add	r4, r4, #12	; 0xc
        27ab48:	e9b40007 	ldmib	r4!, {r0, r1, r2}
        27ab4c:	eb6246c9 	bl	1b0c678 <$LODefaultDoTransaction__FP6TStoreUlT2lUc>
        27ab50:	e28dd004 	add	sp, sp, #4	; 0x4
        27ab54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPStoreCompander::IsReadOnly(void)
 * Address: 0027ab58
 */
TXIPStoreCompander::IsReadOnly(void) {
    /*
        27ab58:	e3a00001 	mov	r0, #1	; 0x1
        27ab5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__18TXIPStoreCompanderSFv
 * Address: 00387cbc
 */
void TXIPStoreCompander::ClassInfo() {
    /*
        387cbc:	e24f0044 	sub	r0, pc, #68	; 0x44
        387cc0:	e1a0f00e 	mov	pc, lr
        387cc4:	e3a00000 	mov	r0, #0	; 0x0
        387cc8:	e1a0f00e 	mov	pc, lr
        387ccc:	54584950 	ldrplb	r4, [r8], -#2384
        387cd0:	53746f72 	cmnpl	r4, #456	; 0x1c8
        387cd4:	65436f6d 	strvsb	r6, [r3, -#3949]
        387cd8:	70616e64 	rsbvc	r6, r1, r4, ror #28
        387cdc:	65720054 	ldrvsb	r0, [r2, -#84]!
        387ce0:	53746f72 	cmnpl	r4, #456	; 0x1c8
        387ce4:	65436f6d 	strvsb	r6, [r3, -#3949]
        387ce8:	70616e64 	rsbvc	r6, r1, r4, ror #28
        387cec:	65720000 	ldrvsb	r0, [r2]!
        387cf0:	00000000 	andeq	r0, r0, r0
        387cf4:	eafffff0 	b	387cbc <ClassInfo__18TXIPStoreCompanderSFv>
        387cf8:	ea5e26e5 	b	1b11894 <TXIPStoreCompander::$New(void)>
        387cfc:	ea5e1a99 	b	1b0e768 <TXIPStoreCompander::$Delete(void)>
        387d00:	ea5e22c0 	b	1b10808 <TXIPStoreCompander::$Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)>
        387d04:	ea5e1673 	b	1b0d6d8 <TXIPStoreCompander::$BlockSize(void)>
        387d08:	ea5e166a 	b	1b0d6b8 <TXIPStoreCompander::$Read(unsigned long, char *, long, unsigned long)>
        387d0c:	ea5e2b09 	b	1b12938 <TXIPStoreCompander::$Write(unsigned long, char *, long, unsigned long)>
        387d10:	ea5e1e9b 	b	1b0f784 <TXIPStoreCompander::$DoTransactionAgainst(long, unsigned long)>
        387d14:	ea5e22c5 	b	1b10830 <TXIPStoreCompander::$IsReadOnly(void)>
        387d18:	00000000 	andeq	r0, r0, r0
        387d1c:	00000048 	andeq	r0, r0, r8, asr #32
        387d20:	00000055 	andeq	r0, r0, r5, asr r0
        387d24:	00000061 	andeq	r0, r0, r1, rrx
        387d28:	00000060 	andeq	r0, r0, r0, rrx
        387d2c:	000000b4 	streqh	r0, [r0], -r4
        387d30:	ea621ea3 	b	1c0f7c4 <$Sizeof__16TVoyagerPlatformSFv>
        387d3c:	ea621ea1 	b	1c0f7c8 <TVoyagerPlatform::$New(void)>
        387d40:	ea621ea1 	b	1c0f7cc <TVoyagerPlatform::$Delete(void)>
        387d50:	ea000001 	b	387d5c <ClassInfo__16TVoyagerPlatformSFv+0x8>
    */
}

