#include "include/TNBPNameTable.h"

/**
 * Symbol: TNBPNameTable::UnRegisterName(TNBPNameEntry &)
 * Address: 0012e630
 */
TNBPNameTable::UnRegisterName(TNBPNameEntry &) {
    /*
        12e630:	e1a0c00d 	mov	ip, sp
        12e634:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12e638:	e24cb004 	sub	fp, ip, #4	; 0x4
        12e63c:	eb655b25 	bl	1a852d8 <TNBPNameTable::$Remove(TNBPNameEntry &)>
        12e640:	e3300000 	teq	r0, #0	; 0x0
        12e644:	03e0000e 	mvneq	r0, #14	; 0xe
        12e648:	02400a03 	subeq	r0, r0, #12288	; 0x3000
        12e64c:	13a00000 	movne	r0, #0	; 0x0
        12e650:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNBPNameTable::Add(TNBPNameEntry *)
 * Address: 0012e654
 */
TNBPNameTable::Add(TNBPNameEntry *) {
    /*
        12e654:	e1a0c00d 	mov	ip, sp
        12e658:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12e65c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12e660:	e1a05000 	mov	r5, r0
        12e664:	e1a04001 	mov	r4, r1
        12e668:	eb6552d1 	bl	1a831b4 <TNBPNameTable::$Hash(TNBPNameEntry &)>
        12e66c:	e0850100 	add	r0, r5, r0, lsl #2
        12e670:	e5901008 	ldr	r1, [r0, #8]	; fField8
        12e674:	e3310000 	teq	r1, #0	; 0x0
        12e678:	15841074 	strne	r1, [r4, #116]	; fField116
        12e67c:	e5a04008 	str	r4, [r0, #8]!	; fField8
        12e680:	e5d41000 	ldrb	r1, [r4]
        12e684:	e1a00005 	mov	r0, r5
        12e688:	eb6552bd 	bl	1a83184 <TNBPNameTable::$GetEnumeratorSeed(unsigned char)>
        12e68c:	e5c40001 	strb	r0, [r4, #1]
        12e690:	e5950004 	ldr	r0, [r5, #4]	; fField4
        12e694:	e2800001 	add	r0, r0, #1	; 0x1
        12e698:	e5a50004 	str	r0, [r5, #4]!	; fField4
        12e69c:	e3a00001 	mov	r0, #1	; 0x1
        12e6a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPNameTable::Remove(TNBPNameEntry &)
 * Address: 0012e6a4
 */
TNBPNameTable::Remove(TNBPNameEntry &) {
    /*
        12e6a4:	e1a0c00d 	mov	ip, sp
        12e6a8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        12e6ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        12e6b0:	e1a04000 	mov	r4, r0
        12e6b4:	e1a05001 	mov	r5, r1
        12e6b8:	e3a08000 	mov	r8, #0	; 0x0
        12e6bc:	eb6552bc 	bl	1a831b4 <TNBPNameTable::$Hash(TNBPNameEntry &)>
        12e6c0:	e0849100 	add	r9, r4, r0, lsl #2
        12e6c4:	e3a07000 	mov	r7, #0	; 0x0
        12e6c8:	e5996008 	ldr	r6, [r9, #8]	; fField8
        12e6cc:	e3360000 	teq	r6, #0	; 0x0
        12e6d0:	0a000013 	beq	12e724 <TNBPNameTable::Remove(TNBPNameEntry &)+0x80>
        12e6d4:	e1a01005 	mov	r1, r5
        12e6d8:	e1a00006 	mov	r0, r6
        12e6dc:	eb65632b 	bl	1a87390 <TNBPNameEntry::$__eq(TNBPNameEntry &)>
        12e6e0:	e3300000 	teq	r0, #0	; 0x0
        12e6e4:	0a00000a 	beq	12e714 <TNBPNameTable::Remove(TNBPNameEntry &)+0x70>
        12e6e8:	e3370000 	teq	r7, #0	; 0x0
        12e6ec:	e5960074 	ldr	r0, [r6, #116]	; fField116
        12e6f0:	15a70074 	strne	r0, [r7, #116]!	; fField116
        12e6f4:	05a90008 	streq	r0, [r9, #8]!	; fField8
        12e6f8:	e1a00006 	mov	r0, r6
        12e6fc:	eb6a7bf7 	bl	1bcd6e0 <$__dl(void *)>
        12e700:	e5940004 	ldr	r0, [r4, #4]	; fField4
        12e704:	e2400001 	sub	r0, r0, #1	; 0x1
        12e708:	e3a08001 	mov	r8, #1	; 0x1
        12e70c:	e5a40004 	str	r0, [r4, #4]!	; fField4
        12e710:	ea000003 	b	12e724 <TNBPNameTable::Remove(TNBPNameEntry &)+0x80>
        12e714:	e1a07006 	mov	r7, r6
        12e718:	e5966074 	ldr	r6, [r6, #116]	; fField116
        12e71c:	e3360000 	teq	r6, #0	; 0x0
        12e720:	1affffeb 	bne	12e6d4 <TNBPNameTable::Remove(TNBPNameEntry &)+0x30>
        12e724:	e1a00008 	mov	r0, r8
        12e728:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPNameTable::Hash(TNBPNameEntry &)
 * Address: 0012e72c
 */
TNBPNameTable::Hash(TNBPNameEntry &) {
    /*
        12e72c:	e1a0c00d 	mov	ip, sp
        12e730:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12e734:	e24cb004 	sub	fp, ip, #4	; 0x4
        12e738:	e24dd004 	sub	sp, sp, #4	; 0x4
        12e73c:	e5d10008 	ldrb	r0, [r1, #8]	; fField8
        12e740:	e1a00120 	mov	r0, r0, lsr #2
        12e744:	e20030ff 	and	r3, r0, #255	; 0xff
        12e748:	e3a02001 	mov	r2, #1	; 0x1
        12e74c:	e3a00000 	mov	r0, #0	; 0x0
        12e750:	e081c002 	add	ip, r1, r2
        12e754:	e5dce008 	ldrb	lr, [ip, #8]	; fField8
        12e758:	e7cde000 	strb	lr, [sp, r0]
        12e75c:	e0822003 	add	r2, r2, r3
        12e760:	e20220ff 	and	r2, r2, #255	; 0xff
        12e764:	e2800001 	add	r0, r0, #1	; 0x1
        12e768:	e20000ff 	and	r0, r0, #255	; 0xff
        12e76c:	e3500004 	cmp	r0, #4	; 0x4
        12e770:	bafffff6 	blt	12e750 <TNBPNameTable::Hash(TNBPNameEntry &)+0x24>
        12e774:	e3a00005 	mov	r0, #5	; 0x5
        12e778:	e59d1000 	ldr	r1, [sp]
        12e77c:	eb6a1071 	bl	1bb2948 <$__rt_udiv>
        12e780:	e20100ff 	and	r0, r1, #255	; 0xff
        12e784:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNBPNameTable::GetEnumeratorSeed(unsigned char)
 * Address: 0012e788
 */
TNBPNameTable::GetEnumeratorSeed(unsigned char) {
    /*
        12e788:	e20110ff 	and	r1, r1, #255	; 0xff
        12e78c:	e0801001 	add	r1, r0, r1
        12e790:	e5d1001b 	ldrb	r0, [r1, #27]
        12e794:	e2802001 	add	r2, r0, #1	; 0x1
        12e798:	e5c1201b 	strb	r2, [r1, #27]
        12e79c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPNameTable::MatchFromTable(unsigned char &, TNBPNameEntry **, TNBPEntityName &)
 * Address: 0012e7a0
 */
TNBPNameTable::MatchFromTable(unsigned char &, TNBPNameEntry **, TNBPEntityName &) {
    /*
        12e7a0:	e1a0c00d 	mov	ip, sp
        12e7a4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        12e7a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12e7ac:	e1a07000 	mov	r7, r0
        12e7b0:	e1a05001 	mov	r5, r1
        12e7b4:	e1a04002 	mov	r4, r2
        12e7b8:	e1a06003 	mov	r6, r3
        12e7bc:	e5d18000 	ldrb	r8, [r1]
        12e7c0:	e3580005 	cmp	r8, #5	; 0x5
        12e7c4:	aa00001f 	bge	12e848 <TNBPNameTable::MatchFromTable(unsigned char &, TNBPNameEntry **, TNBPEntityName &)+0xa8>
        12e7c8:	e5940000 	ldr	r0, [r4]
        12e7cc:	e3300000 	teq	r0, #0	; 0x0
        12e7d0:	00870108 	addeq	r0, r7, r8, lsl #2
        12e7d4:	05900008 	ldreq	r0, [r0, #8]	; fField8
        12e7d8:	05840000 	streq	r0, [r4]
        12e7dc:	e5940000 	ldr	r0, [r4]
        12e7e0:	e3300000 	teq	r0, #0	; 0x0
        12e7e4:	0a000013 	beq	12e838 <TNBPNameTable::MatchFromTable(unsigned char &, TNBPNameEntry **, TNBPEntityName &)+0x98>
        12e7e8:	e5940000 	ldr	r0, [r4]
        12e7ec:	e2800008 	add	r0, r0, #8	; 0x8
        12e7f0:	e1a01006 	mov	r1, r6
        12e7f4:	eb65568a 	bl	1a84224 <TNBPEntityName::$Match(TNBPEntityName &)>
        12e7f8:	e3300000 	teq	r0, #0	; 0x0
        12e7fc:	e5940000 	ldr	r0, [r4]
        12e800:	0a000008 	beq	12e828 <TNBPNameTable::MatchFromTable(unsigned char &, TNBPNameEntry **, TNBPEntityName &)+0x88>
        12e804:	e5c58000 	strb	r8, [r5]
        12e808:	e5941000 	ldr	r1, [r4]
        12e80c:	e5911074 	ldr	r1, [r1, #116]	; fField116
        12e810:	e5841000 	str	r1, [r4]
        12e814:	e3310000 	teq	r1, #0	; 0x0
        12e818:	05d51000 	ldreqb	r1, [r5]
        12e81c:	02811001 	addeq	r1, r1, #1	; 0x1
        12e820:	05c51000 	streqb	r1, [r5]
        12e824:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        12e828:	e5900074 	ldr	r0, [r0, #116]	; fField116
        12e82c:	e5840000 	str	r0, [r4]
        12e830:	e3300000 	teq	r0, #0	; 0x0
        12e834:	1affffeb 	bne	12e7e8 <TNBPNameTable::MatchFromTable(unsigned char &, TNBPNameEntry **, TNBPEntityName &)+0x48>
        12e838:	e2880001 	add	r0, r8, #1	; 0x1
        12e83c:	e20080ff 	and	r8, r0, #255	; 0xff
        12e840:	e3580005 	cmp	r8, #5	; 0x5
        12e844:	baffffdf 	blt	12e7c8 <TNBPNameTable::MatchFromTable(unsigned char &, TNBPNameEntry **, TNBPEntityName &)+0x28>
        12e848:	e3a000ff 	mov	r0, #255	; 0xff
        12e84c:	e5c50000 	strb	r0, [r5]
        12e850:	e3a00000 	mov	r0, #0	; 0x0
        12e854:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPNameTable::SendLookupReply(unsigned char, unsigned long, TNBP *, unsigned char *, unsigned long, TAddress *)
 * Address: 0012e858
 */
TNBPNameTable::SendLookupReply(unsigned char, unsigned long, TNBP *, unsigned char *, unsigned long, TAddress *) {
    /*
        12e858:	e1a0c00d 	mov	ip, sp
        12e85c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        12e860:	e24cb004 	sub	fp, ip, #4	; 0x4
        12e864:	e1a05002 	mov	r5, r2
        12e868:	e1a04003 	mov	r4, r3
        12e86c:	e20160ff 	and	r6, r1, #255	; 0xff
        12e870:	e59b700c 	ldr	r7, [fp, #12]
        12e874:	e99b0300 	ldmib	fp, {r8, r9}
        12e878:	e24dd010 	sub	sp, sp, #16	; 0x10
        12e87c:	e28d0004 	add	r0, sp, #4	; 0x4
        12e880:	eb650c09 	bl	1a718ac <TWriteChain::$__ct(void)>
        12e884:	e1a01006 	mov	r1, r6
        12e888:	e1a0000d 	mov	r0, sp
        12e88c:	eb655e9b 	bl	1a86300 <TNBPHeader::$SetForLookupReply(unsigned char)>
        12e890:	e59d1000 	ldr	r1, [sp]
        12e894:	e3c1140f 	bic	r1, r1, #251658240	; 0xf000000
        12e898:	e205000f 	and	r0, r5, #15	; 0xf
        12e89c:	e1810c00 	orr	r0, r1, r0, lsl #24
        12e8a0:	e40d0018 	str	r0, [sp], -#24	; fField24
        12e8a4:	e1a0000d 	mov	r0, sp
        12e8a8:	eb650c0d 	bl	1a718e4 <TWriteElement::$__ct(void)>
        12e8ac:	e28d1018 	add	r1, sp, #24	; 0x18
        12e8b0:	e1a0000d 	mov	r0, sp
        12e8b4:	e3a03002 	mov	r3, #2	; 0x2
        12e8b8:	e3a02002 	mov	r2, #2	; 0x2
        12e8bc:	eb65353e 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        12e8c0:	e1a0100d 	mov	r1, sp
        12e8c4:	e28d001c 	add	r0, sp, #28	; 0x1c
        12e8c8:	eb651856 	bl	1a74a28 <TWriteChain::$AddToEnd(TWriteElement *)>
        12e8cc:	e24dd018 	sub	sp, sp, #24	; 0x18
        12e8d0:	e1a0000d 	mov	r0, sp
        12e8d4:	eb650c02 	bl	1a718e4 <TWriteElement::$__ct(void)>
        12e8d8:	e1a02009 	mov	r2, r9
        12e8dc:	e1a01008 	mov	r1, r8
        12e8e0:	e1a0000d 	mov	r0, sp
        12e8e4:	e3a03002 	mov	r3, #2	; 0x2
        12e8e8:	eb653533 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
        12e8ec:	e1a0100d 	mov	r1, sp
        12e8f0:	e28d0034 	add	r0, sp, #52	; 0x34
        12e8f4:	eb65184b 	bl	1a74a28 <TWriteChain::$AddToEnd(TWriteElement *)>
        12e8f8:	e24dd030 	sub	sp, sp, #48	; 0x30
        12e8fc:	e1a0000d 	mov	r0, sp
        12e900:	eb6ad64c 	bl	1be4238 <TAEvent::$__ct(void)>
        12e904:	e59f0078 	ldr	r0, [pc, #78]	; 12e984 <TNBPNameTable::SendLookupReply(unsigned char, unsigned long, TNBP *, unsigned char *, unsigned long, TAddress *)+0x12c>
        12e908:	e58d0000 	str	r0, [sp]
        12e90c:	e3a00000 	mov	r0, #0	; 0x0
        12e910:	e58d000c 	str	r0, [sp, #12]
        12e914:	e58d0008 	str	r0, [sp, #8]	; fField8
        12e918:	e28d0014 	add	r0, sp, #20	; 0x14
        12e91c:	e1a05000 	mov	r5, r0
        12e920:	e3a01001 	mov	r1, #1	; 0x1
        12e924:	eb6b1420 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        12e928:	e1a00005 	mov	r0, r5
        12e92c:	e1a01007 	mov	r1, r7
        12e930:	eb6b141e 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        12e934:	e3a00002 	mov	r0, #2	; 0x2
        12e938:	e5cd0020 	strb	r0, [sp, #32]
        12e93c:	e28d0064 	add	r0, sp, #100	; 0x64
        12e940:	e58d002c 	str	r0, [sp, #44]
        12e944:	e1a0100d 	mov	r1, sp
        12e948:	e1a00004 	mov	r0, r4
        12e94c:	eb6549cd 	bl	1a81088 <TNBP::$Write(TAppleTalkMessage *)>
        12e950:	e1a04000 	mov	r4, r0
        12e954:	e28d0030 	add	r0, sp, #48	; 0x30
        12e958:	e3a01000 	mov	r1, #0	; 0x0
        12e95c:	e1a0e00f 	mov	lr, pc
        12e960:	e59df030 	ldr	pc, [sp, #48]
        12e964:	e28d0048 	add	r0, sp, #72	; 0x48
        12e968:	e3a01000 	mov	r1, #0	; 0x0
        12e96c:	e1a0e00f 	mov	lr, pc
        12e970:	e59df048 	ldr	pc, [sp, #72]
        12e974:	e28d0064 	add	r0, sp, #100	; 0x64
        12e978:	eb6528ab 	bl	1a78c2c <TWriteChain::$Destroy(void)>
        12e97c:	e1a00004 	mov	r0, r4
        12e980:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        12e984:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

/**
 * Symbol: TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)
 * Address: 0012e988
 */
TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *) {
    /*
        12e988:	e1a0c00d 	mov	ip, sp
        12e98c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12e990:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        12e994:	e24cb014 	sub	fp, ip, #20	; 0x14
        12e998:	e1a04000 	mov	r4, r0
        12e99c:	e1a05003 	mov	r5, r3
        12e9a0:	e20110ff 	and	r1, r1, #255	; 0xff
        12e9a4:	e59ba018 	ldr	sl, [fp, #24]	; fField24
        12e9a8:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        12e9ac:	e20210ff 	and	r1, r2, #255	; 0xff
        12e9b0:	e3a00000 	mov	r0, #0	; 0x0
        12e9b4:	e5942004 	ldr	r2, [r4, #4]	; fField4
        12e9b8:	e3320000 	teq	r2, #0	; 0x0
        12e9bc:	1a000000 	bne	12e9c4 <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0x3c>
        12e9c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        12e9c4:	e3310001 	teq	r1, #1	; 0x1
        12e9c8:	1a000070 	bne	12eb90 <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0x208>
        12e9cc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        12e9d0:	e1a0000d 	mov	r0, sp
        12e9d4:	e3a01001 	mov	r1, #1	; 0x1
        12e9d8:	eb6b13f3 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        12e9dc:	e5d53003 	ldrb	r3, [r5, #3]
        12e9e0:	e92d0008 	stmdb	sp!, {r3}
        12e9e4:	e5d50001 	ldrb	r0, [r5, #1]
        12e9e8:	e5d51000 	ldrb	r1, [r5]
        12e9ec:	e0802401 	add	r2, r0, r1, lsl #8
        12e9f0:	e5d53002 	ldrb	r3, [r5, #2]
        12e9f4:	e28d0004 	add	r0, sp, #4	; 0x4
        12e9f8:	e59b1014 	ldr	r1, [fp, #20]
        12e9fc:	eb6b13f7 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
        12ea00:	e28dd004 	add	sp, sp, #4	; 0x4
        12ea04:	e3a00002 	mov	r0, #2	; 0x2
        12ea08:	e5cd0001 	strb	r0, [sp, #1]
        12ea0c:	e2855005 	add	r5, r5, #5	; 0x5
        12ea10:	e24dd06c 	sub	sp, sp, #108	; 0x6c
        12ea14:	e1a01005 	mov	r1, r5
        12ea18:	e1a0000d 	mov	r0, sp
        12ea1c:	eb655e4c 	bl	1a86354 <TNBPEntityName::$__ct(unsigned char *)>
        12ea20:	e24dde25 	sub	sp, sp, #592	; 0x250
        12ea24:	e3a00000 	mov	r0, #0	; 0x0
        12ea28:	e5cd024c 	strb	r0, [sp, #588]
        12ea2c:	e3a06000 	mov	r6, #0	; 0x0
        12ea30:	e3a05000 	mov	r5, #0	; 0x0
        12ea34:	e58d0248 	str	r0, [sp, #584]
        12ea38:	e1a0800d 	mov	r8, sp
        12ea3c:	e28d3e25 	add	r3, sp, #592	; 0x250
        12ea40:	e28d2f92 	add	r2, sp, #584	; 0x248
        12ea44:	e28d1f93 	add	r1, sp, #588	; 0x24c
        12ea48:	e1a00004 	mov	r0, r4
        12ea4c:	eb6555f2 	bl	1a8421c <TNBPNameTable::$MatchFromTable(unsigned char &, TNBPNameEntry **, TNBPEntityName &)>
        12ea50:	e1b07000 	movs	r7, r0
        12ea54:	0a00004c 	beq	12eb8c <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0x204>
        12ea58:	ea000001 	b	12ea64 <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0xdc>
        12ea5c:	e335000f 	teq	r5, #15	; 0xf
        12ea60:	0a000005 	beq	12ea7c <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0xf4>
        12ea64:	e2870008 	add	r0, r7, #8	; 0x8
        12ea68:	eb6555e4 	bl	1a84200 <TNBPEntityName::$Length(void)>
        12ea6c:	e2800005 	add	r0, r0, #5	; 0x5
        12ea70:	e0800006 	add	r0, r0, r6
        12ea74:	e3500f92 	cmp	r0, #584	; 0x248
        12ea78:	9a00000e 	bls	12eab8 <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0x130>
        12ea7c:	e28d3faf 	add	r3, sp, #700	; 0x2bc
        12ea80:	e1a02006 	mov	r2, r6
        12ea84:	e1a0100d 	mov	r1, sp
        12ea88:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        12ea8c:	e1a0300a 	mov	r3, sl
        12ea90:	e1a02005 	mov	r2, r5
        12ea94:	e1a00004 	mov	r0, r4
        12ea98:	e59d12d4 	ldr	r1, [sp, #724]
        12ea9c:	eb655a13 	bl	1a852f0 <TNBPNameTable::$SendLookupReply(unsigned char, unsigned long, TNBP *, unsigned char *, unsigned long, TAddress *)>
        12eaa0:	e28dd00c 	add	sp, sp, #12	; 0xc
        12eaa4:	e3300000 	teq	r0, #0	; 0x0
        12eaa8:	1a00002b 	bne	12eb5c <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0x1d4>
        12eaac:	e3a06000 	mov	r6, #0	; 0x0
        12eab0:	e3a05000 	mov	r5, #0	; 0x0
        12eab4:	e1a0800d 	mov	r8, sp
        12eab8:	e1a09008 	mov	r9, r8
        12eabc:	e1a00008 	mov	r0, r8
        12eac0:	e59b1014 	ldr	r1, [fp, #20]
        12eac4:	eb654537 	bl	1a7ffa8 <TNBPTupleHeader::$SetNetworkInfo(unsigned long)>
        12eac8:	e5d70000 	ldrb	r0, [r7]
        12eacc:	e5c90003 	strb	r0, [r9, #3]
        12ead0:	e5d70001 	ldrb	r0, [r7, #1]
        12ead4:	e5c90004 	strb	r0, [r9, #4]	; fField4
        12ead8:	e2888005 	add	r8, r8, #5	; 0x5
        12eadc:	e2866005 	add	r6, r6, #5	; 0x5
        12eae0:	e2870008 	add	r0, r7, #8	; 0x8
        12eae4:	e1a01008 	mov	r1, r8
        12eae8:	eb65454c 	bl	1a80020 <TNBPEntityName::$StreamOut(unsigned char *)>
        12eaec:	e0888000 	add	r8, r8, r0
        12eaf0:	e0866000 	add	r6, r6, r0
        12eaf4:	e2850001 	add	r0, r5, #1	; 0x1
        12eaf8:	e20050ff 	and	r5, r0, #255	; 0xff
        12eafc:	e335000f 	teq	r5, #15	; 0xf
        12eb00:	1a00000e 	bne	12eb40 <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0x1b8>
        12eb04:	e28d3faf 	add	r3, sp, #700	; 0x2bc
        12eb08:	e1a02006 	mov	r2, r6
        12eb0c:	e1a0100d 	mov	r1, sp
        12eb10:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        12eb14:	e1a0300a 	mov	r3, sl
        12eb18:	e1a02005 	mov	r2, r5
        12eb1c:	e1a00004 	mov	r0, r4
        12eb20:	e59d12d4 	ldr	r1, [sp, #724]
        12eb24:	eb6559f1 	bl	1a852f0 <TNBPNameTable::$SendLookupReply(unsigned char, unsigned long, TNBP *, unsigned char *, unsigned long, TAddress *)>
        12eb28:	e28dd00c 	add	sp, sp, #12	; 0xc
        12eb2c:	e3300000 	teq	r0, #0	; 0x0
        12eb30:	1a00000b 	bne	12eb64 <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0x1dc>
        12eb34:	e3a06000 	mov	r6, #0	; 0x0
        12eb38:	e3a05000 	mov	r5, #0	; 0x0
        12eb3c:	e1a0800d 	mov	r8, sp
        12eb40:	e28d3e25 	add	r3, sp, #592	; 0x250
        12eb44:	e28d2f92 	add	r2, sp, #584	; 0x248
        12eb48:	e28d1f93 	add	r1, sp, #588	; 0x24c
        12eb4c:	e1a00004 	mov	r0, r4
        12eb50:	eb6555b1 	bl	1a8421c <TNBPNameTable::$MatchFromTable(unsigned char &, TNBPNameEntry **, TNBPEntityName &)>
        12eb54:	e1b07000 	movs	r7, r0
        12eb58:	1affffbf 	bne	12ea5c <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0xd4>
        12eb5c:	e3350000 	teq	r5, #0	; 0x0
        12eb60:	0a000009 	beq	12eb8c <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0x204>
        12eb64:	e28d3faf 	add	r3, sp, #700	; 0x2bc
        12eb68:	e1a02006 	mov	r2, r6
        12eb6c:	e1a0100d 	mov	r1, sp
        12eb70:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        12eb74:	e1a0300a 	mov	r3, sl
        12eb78:	e1a02005 	mov	r2, r5
        12eb7c:	e1a00004 	mov	r0, r4
        12eb80:	e59d12d4 	ldr	r1, [sp, #724]
        12eb84:	eb6559d9 	bl	1a852f0 <TNBPNameTable::$SendLookupReply(unsigned char, unsigned long, TNBP *, unsigned char *, unsigned long, TAddress *)>
        12eb88:	e28dd00c 	add	sp, sp, #12	; 0xc
        12eb8c:	e28ddfb2 	add	sp, sp, #712	; 0x2c8
        12eb90:	e3a00000 	mov	r0, #0	; 0x0
        12eb94:	eaffff89 	b	12e9c0 <TNBPNameTable::HandleLookupRequest(unsigned char, unsigned char, unsigned char *, unsigned long, TNBP *)+0x38>
    */
}

/**
 * Symbol: TNBPNameTable::AddPending(TRegisterPending *)
 * Address: 0012eb98
 */
TNBPNameTable::AddPending(TRegisterPending *) {
    /*
        12eb98:	e1a0c00d 	mov	ip, sp
        12eb9c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12eba0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12eba4:	e1a05000 	mov	r5, r0
        12eba8:	e1a04001 	mov	r4, r1
        12ebac:	e2800f49 	add	r0, r0, #292	; 0x124
        12ebb0:	eb6538ae 	bl	1a7ce70 <TIDServer::$NewID(void)>
        12ebb4:	e5840004 	str	r0, [r4, #4]	; fField4
        12ebb8:	e5950120 	ldr	r0, [r5, #288]	; fField288
        12ebbc:	e3300000 	teq	r0, #0	; 0x0
        12ebc0:	15840028 	strne	r0, [r4, #40]	; fField40
        12ebc4:	e5a54120 	str	r4, [r5, #288]!	; fField288
        12ebc8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPNameTable::RemovePending(unsigned long)
 * Address: 0012ebcc
 */
TNBPNameTable::RemovePending(unsigned long) {
    /*
        12ebcc:	e1a0c00d 	mov	ip, sp
        12ebd0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12ebd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        12ebd8:	e1a02000 	mov	r2, r0
        12ebdc:	e3a0c000 	mov	ip, #0	; 0x0
        12ebe0:	e5900120 	ldr	r0, [r0, #288]	; fField288
        12ebe4:	e3a03000 	mov	r3, #0	; 0x0
        12ebe8:	e3300000 	teq	r0, #0	; 0x0
        12ebec:	0a00000d 	beq	12ec28 <TNBPNameTable::RemovePending(unsigned long)+0x5c>
        12ebf0:	e590e004 	ldr	lr, [r0, #4]	; fField4
        12ebf4:	e13e0001 	teq	lr, r1
        12ebf8:	1a000006 	bne	12ec18 <TNBPNameTable::RemovePending(unsigned long)+0x4c>
        12ebfc:	e3330000 	teq	r3, #0	; 0x0
        12ec00:	e5901028 	ldr	r1, [r0, #40]	; fField40
        12ec04:	15a31028 	strne	r1, [r3, #40]!	; fField40
        12ec08:	05a21120 	streq	r1, [r2, #288]!	; fField288
        12ec0c:	eb6a7ab3 	bl	1bcd6e0 <$__dl(void *)>
        12ec10:	e3a0c001 	mov	ip, #1	; 0x1
        12ec14:	ea000003 	b	12ec28 <TNBPNameTable::RemovePending(unsigned long)+0x5c>
        12ec18:	e1a03000 	mov	r3, r0
        12ec1c:	e5900028 	ldr	r0, [r0, #40]	; fField40
        12ec20:	e3300000 	teq	r0, #0	; 0x0
        12ec24:	1afffff1 	bne	12ebf0 <TNBPNameTable::RemovePending(unsigned long)+0x24>
        12ec28:	e1a0000c 	mov	r0, ip
        12ec2c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNBPNameTable::__ct(void)
 * Address: 0012ec30
 */
TNBPNameTable::TNBPNameTable(void) {
    /*
        12ec30:	e1a0c00d 	mov	ip, sp
        12ec34:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12ec38:	e24cb004 	sub	fp, ip, #4	; 0x4
        12ec3c:	e1b04000 	movs	r4, r0
        12ec40:	1a000005 	bne	12ec5c <TNBPNameTable::__ct(void)+0x2c>
        12ec44:	e3a00f4a 	mov	r0, #296	; 0x128
        12ec48:	eb6a7eba 	bl	1bce738 <$__nw(unsigned int)>
        12ec4c:	e1b04000 	movs	r4, r0
        12ec50:	1a000001 	bne	12ec5c <TNBPNameTable::__ct(void)+0x2c>
        12ec54:	e1a00004 	mov	r0, r4
        12ec58:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        12ec5c:	e59f0054 	ldr	r0, [pc, #54]	; 12ecb8 <TNBPNameTable::__ct(void)+0x88>
        12ec60:	e5840000 	str	r0, [r4]
        12ec64:	e2840f49 	add	r0, r4, #292	; 0x124
        12ec68:	eb650f40 	bl	1a72970 <TIDServer::$__ct(void)>
        12ec6c:	e59f0048 	ldr	r0, [pc, #48]	; 12ecbc <TNBPNameTable::__ct(void)+0x8c>
        12ec70:	e3a01000 	mov	r1, #0	; 0x0
        12ec74:	e8840003 	stmia	r4, {r0, r1}
        12ec78:	e3a00000 	mov	r0, #0	; 0x0
        12ec7c:	e0842100 	add	r2, r4, r0, lsl #2
        12ec80:	e2800001 	add	r0, r0, #1	; 0x1
        12ec84:	e20000ff 	and	r0, r0, #255	; 0xff
        12ec88:	e3500005 	cmp	r0, #5	; 0x5
        12ec8c:	e5a21008 	str	r1, [r2, #8]!	; fField8
        12ec90:	bafffff9 	blt	12ec7c <TNBPNameTable::__ct(void)+0x4c>
        12ec94:	e3a00000 	mov	r0, #0	; 0x0
        12ec98:	e0842000 	add	r2, r4, r0
        12ec9c:	e5c2101c 	strb	r1, [r2, #28]
        12eca0:	e2800001 	add	r0, r0, #1	; 0x1
        12eca4:	e20000ff 	and	r0, r0, #255	; 0xff
        12eca8:	e35000fe 	cmp	r0, #254	; 0xfe
        12ecac:	dafffff9 	ble	12ec98 <TNBPNameTable::__ct(void)+0x68>
        12ecb0:	e5841120 	str	r1, [r4, #288]	; fField288
        12ecb4:	eaffffe6 	b	12ec54 <TNBPNameTable::__ct(void)+0x24>
        12ecb8:	0001e488 	andeq	lr, r1, r8, lsl #9
        12ecbc:	0001d02c 	andeq	sp, r1, ip, lsr #32
    */
}

/**
 * Symbol: TNBPNameTable::GetPending(unsigned long)
 * Address: 0012ecc0
 */
TNBPNameTable::GetPending(unsigned long) {
    /*
        12ecc0:	e5900120 	ldr	r0, [r0, #288]	; fField288
        12ecc4:	e3300000 	teq	r0, #0	; 0x0
        12ecc8:	0a000005 	beq	12ece4 <TNBPNameTable::GetPending(unsigned long)+0x24>
        12eccc:	e5902004 	ldr	r2, [r0, #4]	; fField4
        12ecd0:	e1320001 	teq	r2, r1
        12ecd4:	01a0f00e 	moveq	pc, lr
        12ecd8:	e5900028 	ldr	r0, [r0, #40]	; fField40
        12ecdc:	e3300000 	teq	r0, #0	; 0x0
        12ece0:	1afffff9 	bne	12eccc <TNBPNameTable::GetPending(unsigned long)+0xc>
        12ece4:	e3a00000 	mov	r0, #0	; 0x0
        12ece8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPNameTable::GetPendingByReference(unsigned long)
 * Address: 0012ecec
 */
TNBPNameTable::GetPendingByReference(unsigned long) {
    /*
        12ecec:	e5900120 	ldr	r0, [r0, #288]	; fField288
        12ecf0:	e3300000 	teq	r0, #0	; 0x0
        12ecf4:	0a000005 	beq	12ed10 <TNBPNameTable::GetPendingByReference(unsigned long)+0x24>
        12ecf8:	e5902018 	ldr	r2, [r0, #24]	; fField24
        12ecfc:	e1320001 	teq	r2, r1
        12ed00:	01a0f00e 	moveq	pc, lr
        12ed04:	e5900028 	ldr	r0, [r0, #40]	; fField40
        12ed08:	e3300000 	teq	r0, #0	; 0x0
        12ed0c:	1afffff9 	bne	12ecf8 <TNBPNameTable::GetPendingByReference(unsigned long)+0xc>
        12ed10:	e3a00000 	mov	r0, #0	; 0x0
        12ed14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPNameTable::__dt(void)
 * Address: 0012ed78
 */
TNBPNameTable::~TNBPNameTable(void) {
    /*
        12ed78:	e59f200c 	ldr	r2, [pc, #c]	; 12ed8c <TNBPNameTable::__dt(void)+0x14>
        12ed7c:	e3110001 	tst	r1, #1	; 0x1
        12ed80:	e5802000 	str	r2, [r0]
        12ed84:	1a6a7a55 	bne	1bcd6e0 <$__dl(void *)>
        12ed88:	e1a0f00e 	mov	pc, lr
        12ed8c:	0001d02c 	andeq	sp, r1, ip, lsr #32
    */
}

/**
 * Symbol: TNBPNameTable::Init(TNBPLookupManager *)
 * Address: 0012ed90
 */
TNBPNameTable::Init(TNBPLookupManager *) {
    /*
        12ed90:	e5a0111c 	str	r1, [r0, #284]!	; fField284
        12ed94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPNameTable::Completion(long, unsigned long)
 * Address: 0012ed98
 */
TNBPNameTable::Completion(long, unsigned long) {
    /*
        12ed98:	ea655947 	b	1a852bc <TNBPNameTable::$RegisterNameCompletion(long, unsigned long)>
    */
}

/**
 * Symbol: TNBPNameTable::NameInTable(TNBPNameEntry &)
 * Address: 0012ed9c
 */
TNBPNameTable::NameInTable(TNBPNameEntry &) {
    /*
        12ed9c:	e1a0c00d 	mov	ip, sp
        12eda0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12eda4:	e24cb004 	sub	fp, ip, #4	; 0x4
        12eda8:	e1a05000 	mov	r5, r0
        12edac:	e1a04001 	mov	r4, r1
        12edb0:	eb6550ff 	bl	1a831b4 <TNBPNameTable::$Hash(TNBPNameEntry &)>
        12edb4:	e0850100 	add	r0, r5, r0, lsl #2
        12edb8:	e5b05008 	ldr	r5, [r0, #8]!	; fField8
        12edbc:	e3350000 	teq	r5, #0	; 0x0
        12edc0:	0a000008 	beq	12ede8 <TNBPNameTable::NameInTable(TNBPNameEntry &)+0x4c>
        12edc4:	e1a01004 	mov	r1, r4
        12edc8:	e1a00005 	mov	r0, r5
        12edcc:	eb65616f 	bl	1a87390 <TNBPNameEntry::$__eq(TNBPNameEntry &)>
        12edd0:	e3300000 	teq	r0, #0	; 0x0
        12edd4:	13a00001 	movne	r0, #1	; 0x1
        12edd8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        12eddc:	e5955074 	ldr	r5, [r5, #116]	; fField116
        12ede0:	e3350000 	teq	r5, #0	; 0x0
        12ede4:	1afffff6 	bne	12edc4 <TNBPNameTable::NameInTable(TNBPNameEntry &)+0x28>
        12ede8:	e3a00000 	mov	r0, #0	; 0x0
        12edec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)
 * Address: 0012edf0
 */
TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *) {
    /*
        12edf0:	e1a0c00d 	mov	ip, sp
        12edf4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        12edf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12edfc:	e1a04000 	mov	r4, r0
        12ee00:	e1a07001 	mov	r7, r1
        12ee04:	e1a05002 	mov	r5, r2
        12ee08:	e1a06003 	mov	r6, r3
        12ee0c:	e5d20018 	ldrb	r0, [r2, #24]	; fField24
        12ee10:	e3300000 	teq	r0, #0	; 0x0
        12ee14:	133000ff 	teqne	r0, #255	; 0xff
        12ee18:	059f8134 	ldreq	r8, [pc, #134]	; 12ef54 <TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)+0x164>
        12ee1c:	0a000044 	beq	12ef34 <TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)+0x144>
        12ee20:	e3a00000 	mov	r0, #0	; 0x0
        12ee24:	eb655d47 	bl	1a86348 <TNBPNameEntry::$__ct(void)>
        12ee28:	e1b0a000 	movs	sl, r0
        12ee2c:	03a080a8 	moveq	r8, #168	; 0xa8
        12ee30:	02488b07 	subeq	r8, r8, #7168	; 0x1c00
        12ee34:	0a000041 	beq	12ef40 <TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)+0x150>
        12ee38:	e5d50018 	ldrb	r0, [r5, #24]	; fField24
        12ee3c:	e5ca0000 	strb	r0, [sl]
        12ee40:	e28a0008 	add	r0, sl, #8	; 0x8
        12ee44:	e5951014 	ldr	r1, [r5, #20]
        12ee48:	eb6550cc 	bl	1a83180 <TNBPEntityName::$FormFromEntityName(unsigned long)>
        12ee4c:	e1b08000 	movs	r8, r0
        12ee50:	1a000035 	bne	12ef2c <TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)+0x13c>
        12ee54:	e1a0100a 	mov	r1, sl
        12ee58:	e1a00004 	mov	r0, r4
        12ee5c:	eb6554fb 	bl	1a84250 <TNBPNameTable::$NameInTable(TNBPNameEntry &)>
        12ee60:	e3300000 	teq	r0, #0	; 0x0
        12ee64:	13e0800c 	mvnne	r8, #12	; 0xc
        12ee68:	12488a03 	subne	r8, r8, #12288	; 0x3000
        12ee6c:	1a000030 	bne	12ef34 <TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)+0x144>
        12ee70:	e3a00000 	mov	r0, #0	; 0x0
        12ee74:	eb655d3b 	bl	1a86368 <TRegisterPending::$__ct(void)>
        12ee78:	e1b09000 	movs	r9, r0
        12ee7c:	03a080a8 	moveq	r8, #168	; 0xa8
        12ee80:	02488b07 	subeq	r8, r8, #7168	; 0x1c00
        12ee84:	0a00002a 	beq	12ef34 <TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)+0x144>
        12ee88:	e1a01009 	mov	r1, r9
        12ee8c:	e1a00004 	mov	r0, r4
        12ee90:	eb654891 	bl	1a810dc <TNBPNameTable::$AddPending(TRegisterPending *)>
        12ee94:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        12ee98:	e1a01007 	mov	r1, r7
        12ee9c:	e1a0000d 	mov	r0, sp
        12eea0:	eb650a7f 	bl	1a718a4 <TCompletion::$__ct(TUMsgToken *)>
        12eea4:	eb6a92ca 	bl	1bd39d4 <$GetGlobals>
        12eea8:	eb6ad90c 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
        12eeac:	e1a0200d 	mov	r2, sp
        12eeb0:	e1a0100a 	mov	r1, sl
        12eeb4:	e1a00009 	mov	r0, r9
        12eeb8:	eb6550c4 	bl	1a831d0 <TRegisterPending::$Init(TNBPNameEntry *, TCompletion const &)>
        12eebc:	e24dd038 	sub	sp, sp, #56	; 0x38
        12eec0:	e1a0000d 	mov	r0, sp
        12eec4:	eb6ad4db 	bl	1be4238 <TAEvent::$__ct(void)>
        12eec8:	e59f0088 	ldr	r0, [pc, #88]	; 12ef58 <TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)+0x168>
        12eecc:	e58d0000 	str	r0, [sp]
        12eed0:	e3a00000 	mov	r0, #0	; 0x0
        12eed4:	e58d000c 	str	r0, [sp, #12]
        12eed8:	e58d0008 	str	r0, [sp, #8]	; fField8
        12eedc:	e28d0018 	add	r0, sp, #24	; 0x18
        12eee0:	eb650a7b 	bl	1a718d4 <TNBPRetryInfo::$__ct(void)>
        12eee4:	e5b50014 	ldr	r0, [r5, #20]!
        12eee8:	e58d0014 	str	r0, [sp, #20]
        12eeec:	e3a00002 	mov	r0, #2	; 0x2
        12eef0:	e58d0030 	str	r0, [sp, #48]
        12eef4:	e3a0003c 	mov	r0, #60	; 0x3c
        12eef8:	e58d0034 	str	r0, [sp, #52]
        12eefc:	e58d4028 	str	r4, [sp, #40]	; fField40
        12ef00:	e5990004 	ldr	r0, [r9, #4]	; fField4
        12ef04:	e58d002c 	str	r0, [sp, #44]
        12ef08:	e24dd004 	sub	sp, sp, #4	; 0x4
        12ef0c:	e1a0300d 	mov	r3, sp
        12ef10:	e1a02006 	mov	r2, r6
        12ef14:	e28d1004 	add	r1, sp, #4	; 0x4
        12ef18:	e594011c 	ldr	r0, [r4, #284]	; fField284
        12ef1c:	eb6554b8 	bl	1a84204 <TNBPLookupManager::$LookupForRegister(TLookupNamesRegisteringMessage *, TNBP *, unsigned char *)>
        12ef20:	e1b08000 	movs	r8, r0
        12ef24:	0a00000c 	beq	12ef5c <TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)+0x16c>
        12ef28:	e28dd058 	add	sp, sp, #88	; 0x58
        12ef2c:	e3380000 	teq	r8, #0	; 0x0
        12ef30:	0a00000c 	beq	12ef68 <TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)+0x178>
        12ef34:	e33a0000 	teq	sl, #0	; 0x0
        12ef38:	11a0000a 	movne	r0, sl
        12ef3c:	1b6a79e7 	blne	1bcd6e0 <$__dl(void *)>
        12ef40:	e3390000 	teq	r9, #0	; 0x0
        12ef44:	11a00004 	movne	r0, r4
        12ef48:	15b91004 	ldrne	r1, [r9, #4]!	; fField4
        12ef4c:	1b6558e0 	blne	1a852d4 <TNBPNameTable::$RemovePending(unsigned long)>
        12ef50:	ea000004 	b	12ef68 <TNBPNameTable::RegisterName(TUMsgToken *, TRegisterNameMessage *, TNBP *)+0x178>
        12ef54:	ffffd057 	swinv	0x00ffd057
        12ef58:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12ef5c:	e5dd0000 	ldrb	r0, [sp]
        12ef60:	e5c90000 	strb	r0, [r9]
        12ef64:	e28dd058 	add	sp, sp, #88	; 0x58
        12ef68:	e1a00008 	mov	r0, r8
        12ef6c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPNameTable::RegisterNameCompletion(long, unsigned long)
 * Address: 0012ef70
 */
TNBPNameTable::RegisterNameCompletion(long, unsigned long) {
    /*
        12ef70:	e3310000 	teq	r1, #0	; 0x0
        12ef74:	11a0f00e 	movne	pc, lr
        12ef78:	e1a0c00d 	mov	ip, sp
        12ef7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12ef80:	e24cb004 	sub	fp, ip, #4	; 0x4
        12ef84:	e1a04000 	mov	r4, r0
        12ef88:	e1a01002 	mov	r1, r2
        12ef8c:	eb65507e 	bl	1a8318c <TNBPNameTable::$GetPending(unsigned long)>
        12ef90:	e1b05000 	movs	r5, r0
        12ef94:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        12ef98:	e5d51000 	ldrb	r1, [r5]
        12ef9c:	e594011c 	ldr	r0, [r4, #284]	; fField284
        12efa0:	eb652f59 	bl	1a7ad0c <TNBPLookupManager::$GetLookup(unsigned char)>
        12efa4:	e3a06000 	mov	r6, #0	; 0x0
        12efa8:	e5900024 	ldr	r0, [r0, #36]
        12efac:	e3300000 	teq	r0, #0	; 0x0
        12efb0:	1a000003 	bne	12efc4 <TNBPNameTable::RegisterNameCompletion(long, unsigned long)+0x54>
        12efb4:	e1a00004 	mov	r0, r4
        12efb8:	e5951008 	ldr	r1, [r5, #8]	; fField8
        12efbc:	eb654848 	bl	1a810e4 <TNBPNameTable::$Add(TNBPNameEntry *)>
        12efc0:	ea000001 	b	12efcc <TNBPNameTable::RegisterNameCompletion(long, unsigned long)+0x5c>
        12efc4:	e3e0600c 	mvn	r6, #12	; 0xc
        12efc8:	e2466a03 	sub	r6, r6, #12288	; 0x3000
        12efcc:	e285000c 	add	r0, r5, #12	; 0xc
        12efd0:	e1a01006 	mov	r1, r6
        12efd4:	eb6522fe 	bl	1a77bd4 <TCompletion::$Complete(long)>
        12efd8:	e1a00004 	mov	r0, r4
        12efdc:	e5b51004 	ldr	r1, [r5, #4]!	; fField4
        12efe0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        12efe4:	ea6558ba 	b	1a852d4 <TNBPNameTable::$RemovePending(unsigned long)>
    */
}

/**
 * Symbol: TNBPNameTable::Cancel(unsigned long)
 * Address: 0012efe8
 */
TNBPNameTable::Cancel(unsigned long) {
    /*
        12efe8:	e1a0c00d 	mov	ip, sp
        12efec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12eff0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12eff4:	e1a04000 	mov	r4, r0
        12eff8:	e1a05001 	mov	r5, r1
        12effc:	eb655061 	bl	1a83188 <TNBPNameTable::$GetPendingByReference(unsigned long)>
        12f000:	e1b07000 	movs	r7, r0
        12f004:	0a00000a 	beq	12f034 <TNBPNameTable::Cancel(unsigned long)+0x4c>
        12f008:	e1a01005 	mov	r1, r5
        12f00c:	e594011c 	ldr	r0, [r4, #284]	; fField284
        12f010:	eb651ed8 	bl	1a76b78 <TNBPLookupManager::$Cancel(unsigned long)>
        12f014:	e1b06000 	movs	r6, r0
        12f018:	1a000005 	bne	12f034 <TNBPNameTable::Cancel(unsigned long)+0x4c>
        12f01c:	e1a00004 	mov	r0, r4
        12f020:	e5b71004 	ldr	r1, [r7, #4]!	; fField4
        12f024:	eb6558aa 	bl	1a852d4 <TNBPNameTable::$RemovePending(unsigned long)>
        12f028:	e3300000 	teq	r0, #0	; 0x0
        12f02c:	03a06f47 	moveq	r6, #284	; 0x11c
        12f030:	02466a03 	subeq	r6, r6, #12288	; 0x3000
        12f034:	e1a00006 	mov	r0, r6
        12f038:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

