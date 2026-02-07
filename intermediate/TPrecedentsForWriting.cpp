#include "include/TPrecedentsForWriting.h"

/**
 * Symbol: TPrecedentsForWriting::__ct(void)
 * Address: 003557ac
 */
TPrecedentsForWriting::TPrecedentsForWriting(void) {
    /*
        3557ac:	e1a0c00d 	mov	ip, sp
        3557b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3557b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3557b8:	e1b04000 	movs	r4, r0
        3557bc:	1a000003 	bne	3557d0 <TPrecedentsForWriting::__ct(void)+0x24>
        3557c0:	e3a00010 	mov	r0, #16	; 0x10
        3557c4:	eb61e3db 	bl	1bce738 <$__nw(unsigned int)>
        3557c8:	e1b04000 	movs	r4, r0
        3557cc:	0a00000b 	beq	355800 <TPrecedentsForWriting::__ct(void)+0x54>
        3557d0:	e1a00004 	mov	r0, r4
        3557d4:	e3a0100c 	mov	r1, #12	; 0xc
        3557d8:	ebffffcc 	bl	355710 <TBucketArray::__ct(long)>
        3557dc:	e1a00004 	mov	r0, r4
        3557e0:	eb5be3d4 	bl	1a4e738 <TPrecedentsForWriting::$Reset(void)>
        3557e4:	e59f101c 	ldr	r1, [pc, #1c]	; 355808 <TPrecedentsForWriting::__ct(void)+0x5c>
        3557e8:	e1a00004 	mov	r0, r4
        3557ec:	eb5bfc9d 	bl	1a54a68 <$GCRegister(void *, void (*)(void *))>
        3557f0:	e59f2014 	ldr	r2, [pc, #14]	; 35580c <TPrecedentsForWriting::__ct(void)+0x60>
        3557f4:	e59f1014 	ldr	r1, [pc, #14]	; 355810 <TPrecedentsForWriting::__ct(void)+0x64>
        3557f8:	e1a00004 	mov	r0, r4
        3557fc:	eb61b670 	bl	1bc31c4 <$DIYGCRegister__FPvPFPv_vT2>
        355800:	e1a00004 	mov	r0, r4
        355804:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        355808:	01a4e744 	moveq	lr, r4, asr #14
        35580c:	00355d64 	eoreqs	r5, r5, r4, ror #26
        355810:	00355d18 	eoreqs	r5, r5, r8, lsl sp
    */
}

/**
 * Symbol: TPrecedentsForWriting::__dt(void)
 * Address: 00355814
 */
TPrecedentsForWriting::~TPrecedentsForWriting(void) {
    /*
        355814:	e1a0c00d 	mov	ip, sp
        355818:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        35581c:	e24cb004 	sub	fp, ip, #4	; 0x4
        355820:	e1a04000 	mov	r4, r0
        355824:	e1a05001 	mov	r5, r1
        355828:	eb61b666 	bl	1bc31c8 <$DIYGCUnregister(void *)>
        35582c:	e1a00004 	mov	r0, r4
        355830:	eb5bfc8d 	bl	1a54a6c <$GCUnregister(void *)>
        355834:	e1a00004 	mov	r0, r4
        355838:	e3a01000 	mov	r1, #0	; 0x0
        35583c:	eb5be3bf 	bl	1a4e740 <TBucketArray::$__dt(void)>
        355840:	e3150001 	tst	r5, #1	; 0x1
        355844:	11a00004 	movne	r0, r4
        355848:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        35584c:	1a61dfa3 	bne	1bcd6e0 <$__dl(void *)>
        355850:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPrecedentsForWriting::Append(RefVar const &)
 * Address: 00355854
 */
TPrecedentsForWriting::Append(RefVar const &) {
    /*
        355854:	e1a0c00d 	mov	ip, sp
        355858:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        35585c:	e24cb004 	sub	fp, ip, #4	; 0x4
        355860:	e1a04000 	mov	r4, r0
        355864:	e1a05001 	mov	r5, r1
        355868:	e5906004 	ldr	r6, [r0, #4]	; fField4
        35586c:	e2861001 	add	r1, r6, #1	; 0x1
        355870:	eb5be3bd 	bl	1a4e76c <TBucketArray::$SetNumberOfElements(long)>
        355874:	e5950000 	ldr	r0, [r5]
        355878:	e1a01006 	mov	r1, r6
        35587c:	e5905000 	ldr	r5, [r0]
        355880:	e1a00004 	mov	r0, r4
        355884:	eb0000ee 	bl	355c44 <TBucketArray::ElementAt(long)>
        355888:	e1a01006 	mov	r1, r6
        35588c:	e5805000 	str	r5, [r0]
        355890:	e1a00004 	mov	r0, r4
        355894:	eb5bebe9 	bl	1a50840 <TPrecedentsForWriting::$GenerateLinks(long)>
        355898:	e2460001 	sub	r0, r6, #1	; 0x1
        35589c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPrecedentsForWriting::Find(RefVar const &)
 * Address: 003558a0
 */
TPrecedentsForWriting::Find(RefVar const &) {
    /*
        3558a0:	e1a0c00d 	mov	ip, sp
        3558a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        3558a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3558ac:	e1a05000 	mov	r5, r0
        3558b0:	e1a04001 	mov	r4, r1
        3558b4:	eb5be3a0 	bl	1a4e73c <TPrecedentsForWriting::$Search(RefVar const &)>
        3558b8:	e1a06000 	mov	r6, r0
        3558bc:	e5940000 	ldr	r0, [r4]
        3558c0:	e1a01006 	mov	r1, r6
        3558c4:	e5904000 	ldr	r4, [r0]
        3558c8:	e1a00005 	mov	r0, r5
        3558cc:	eb0000dc 	bl	355c44 <TBucketArray::ElementAt(long)>
        3558d0:	e5900000 	ldr	r0, [r0]
        3558d4:	e1340000 	teq	r4, r0
        3558d8:	13e00000 	mvnne	r0, #0	; 0x0
        3558dc:	02460001 	subeq	r0, r6, #1	; 0x1
        3558e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPrecedentsForWriting::Reset(void)
 * Address: 003558e4
 */
TPrecedentsForWriting::Reset(void) {
    /*
        3558e4:	e1a0c00d 	mov	ip, sp
        3558e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        3558ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        3558f0:	e1a04000 	mov	r4, r0
        3558f4:	e3a01001 	mov	r1, #1	; 0x1
        3558f8:	eb5be39b 	bl	1a4e76c <TBucketArray::$SetNumberOfElements(long)>
        3558fc:	e3a05000 	mov	r5, #0	; 0x0
        355900:	e1a01005 	mov	r1, r5
        355904:	e1a00004 	mov	r0, r4
        355908:	eb0000cd 	bl	355c44 <TBucketArray::ElementAt(long)>
        35590c:	e3a01002 	mov	r1, #2	; 0x2
        355910:	e5801000 	str	r1, [r0]
        355914:	e1a01005 	mov	r1, r5
        355918:	e1a00004 	mov	r0, r4
        35591c:	eb0000c8 	bl	355c44 <TBucketArray::ElementAt(long)>
        355920:	e5a05004 	str	r5, [r0, #4]!	; fField4
        355924:	e1a01005 	mov	r1, r5
        355928:	e1a00004 	mov	r0, r4
        35592c:	eb0000c4 	bl	355c44 <TBucketArray::ElementAt(long)>
        355930:	e5b01008 	ldr	r1, [r0, #8]!
        355934:	e20114ff 	and	r1, r1, #-16777216	; 0xff000000
        355938:	e5801000 	str	r1, [r0]
        35593c:	e1a01005 	mov	r1, r5
        355940:	e1a00004 	mov	r0, r4
        355944:	eb0000be 	bl	355c44 <TBucketArray::ElementAt(long)>
        355948:	e5b01008 	ldr	r1, [r0, #8]!
        35594c:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        355950:	e381141f 	orr	r1, r1, #520093696	; 0x1f000000
        355954:	e5801000 	str	r1, [r0]
        355958:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPrecedentsForWriting::Search(RefVar const &)
 * Address: 0035595c
 */
TPrecedentsForWriting::Search(RefVar const &) {
    /*
        35595c:	e1a0c00d 	mov	ip, sp
        355960:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        355964:	e24cb004 	sub	fp, ip, #4	; 0x4
        355968:	e1a04000 	mov	r4, r0
        35596c:	e5910000 	ldr	r0, [r1]
        355970:	e3a06000 	mov	r6, #0	; 0x0
        355974:	e1a01006 	mov	r1, r6
        355978:	e5907000 	ldr	r7, [r0]
        35597c:	e1a00004 	mov	r0, r4
        355980:	eb0000af 	bl	355c44 <TBucketArray::ElementAt(long)>
        355984:	e5900008 	ldr	r0, [r0, #8]
        355988:	e1a00c20 	mov	r0, r0, lsr #24
        35598c:	e3a08001 	mov	r8, #1	; 0x1
        355990:	e1170018 	tst	r7, r8, lsl r0
        355994:	e1a01006 	mov	r1, r6
        355998:	e1a00004 	mov	r0, r4
        35599c:	1a000002 	bne	3559ac <TPrecedentsForWriting::Search(RefVar const &)+0x50>
        3559a0:	eb0000a7 	bl	355c44 <TBucketArray::ElementAt(long)>
        3559a4:	e5b05004 	ldr	r5, [r0, #4]!	; fField4
        3559a8:	ea000002 	b	3559b8 <TPrecedentsForWriting::Search(RefVar const &)+0x5c>
        3559ac:	eb0000a4 	bl	355c44 <TBucketArray::ElementAt(long)>
        3559b0:	e5900008 	ldr	r0, [r0, #8]
        3559b4:	e3c054ff 	bic	r5, r0, #-16777216	; 0xff000000
        3559b8:	e1a01006 	mov	r1, r6
        3559bc:	e1a00004 	mov	r0, r4
        3559c0:	eb00009f 	bl	355c44 <TBucketArray::ElementAt(long)>
        3559c4:	e5900008 	ldr	r0, [r0, #8]
        3559c8:	e1a06c20 	mov	r6, r0, lsr #24
        3559cc:	e1a01005 	mov	r1, r5
        3559d0:	e1a00004 	mov	r0, r4
        3559d4:	eb00009a 	bl	355c44 <TBucketArray::ElementAt(long)>
        3559d8:	e5900008 	ldr	r0, [r0, #8]
        3559dc:	e1a00c20 	mov	r0, r0, lsr #24
        3559e0:	e1500006 	cmp	r0, r6
        3559e4:	aa000016 	bge	355a44 <TPrecedentsForWriting::Search(RefVar const &)+0xe8>
        3559e8:	e1a06000 	mov	r6, r0
        3559ec:	e1a01005 	mov	r1, r5
        3559f0:	e1a00004 	mov	r0, r4
        3559f4:	eb000092 	bl	355c44 <TBucketArray::ElementAt(long)>
        3559f8:	e5900008 	ldr	r0, [r0, #8]
        3559fc:	e1a00c20 	mov	r0, r0, lsr #24
        355a00:	e1170018 	tst	r7, r8, lsl r0
        355a04:	e1a01005 	mov	r1, r5
        355a08:	e1a00004 	mov	r0, r4
        355a0c:	1a000002 	bne	355a1c <TPrecedentsForWriting::Search(RefVar const &)+0xc0>
        355a10:	eb00008b 	bl	355c44 <TBucketArray::ElementAt(long)>
        355a14:	e5b05004 	ldr	r5, [r0, #4]!	; fField4
        355a18:	ea000002 	b	355a28 <TPrecedentsForWriting::Search(RefVar const &)+0xcc>
        355a1c:	eb000088 	bl	355c44 <TBucketArray::ElementAt(long)>
        355a20:	e5900008 	ldr	r0, [r0, #8]
        355a24:	e3c054ff 	bic	r5, r0, #-16777216	; 0xff000000
        355a28:	e1a01005 	mov	r1, r5
        355a2c:	e1a00004 	mov	r0, r4
        355a30:	eb000083 	bl	355c44 <TBucketArray::ElementAt(long)>
        355a34:	e5900008 	ldr	r0, [r0, #8]
        355a38:	e1a00c20 	mov	r0, r0, lsr #24
        355a3c:	e1500006 	cmp	r0, r6
        355a40:	baffffe8 	blt	3559e8 <TPrecedentsForWriting::Search(RefVar const &)+0x8c>
        355a44:	e1a00005 	mov	r0, r5
        355a48:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPrecedentsForWriting::GenerateLinks(long)
 * Address: 00355a4c
 */
TPrecedentsForWriting::GenerateLinks(long) {
    /*
        355a4c:	e1a0c00d 	mov	ip, sp
        355a50:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        355a54:	e24cb004 	sub	fp, ip, #4	; 0x4
        355a58:	e1a04000 	mov	r4, r0
        355a5c:	e1a05001 	mov	r5, r1
        355a60:	e24dd004 	sub	sp, sp, #4	; 0x4
        355a64:	eb000076 	bl	355c44 <TBucketArray::ElementAt(long)>
        355a68:	e5900000 	ldr	r0, [r0]
        355a6c:	eb61b1b6 	bl	1bc214c <$AllocateRefHandle(long)>
        355a70:	e58d0000 	str	r0, [sp]
        355a74:	e1a0100d 	mov	r1, sp
        355a78:	e1a00004 	mov	r0, r4
        355a7c:	eb5be32e 	bl	1a4e73c <TPrecedentsForWriting::$Search(RefVar const &)>
        355a80:	e1a01000 	mov	r1, r0
        355a84:	e59d0000 	ldr	r0, [sp]
        355a88:	e3a0701f 	mov	r7, #31	; 0x1f
        355a8c:	e5908000 	ldr	r8, [r0]
        355a90:	e1a00004 	mov	r0, r4
        355a94:	eb00006a 	bl	355c44 <TBucketArray::ElementAt(long)>
        355a98:	e5900000 	ldr	r0, [r0]
        355a9c:	e0300008 	eors	r0, r0, r8
        355aa0:	4a000002 	bmi	355ab0 <TPrecedentsForWriting::GenerateLinks(long)+0x64>
        355aa4:	e2477001 	sub	r7, r7, #1	; 0x1
        355aa8:	e1b00080 	movs	r0, r0, lsl #1
        355aac:	5afffffc 	bpl	355aa4 <TPrecedentsForWriting::GenerateLinks(long)+0x58>
        355ab0:	e1a01005 	mov	r1, r5
        355ab4:	e1a00004 	mov	r0, r4
        355ab8:	eb000061 	bl	355c44 <TBucketArray::ElementAt(long)>
        355abc:	e5b01008 	ldr	r1, [r0, #8]!
        355ac0:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
        355ac4:	e1811c07 	orr	r1, r1, r7, lsl #24
        355ac8:	e3a09000 	mov	r9, #0	; 0x0
        355acc:	e3a0a000 	mov	sl, #0	; 0x0
        355ad0:	e5801000 	str	r1, [r0]
        355ad4:	e1a0100a 	mov	r1, sl
        355ad8:	e1a00004 	mov	r0, r4
        355adc:	eb000058 	bl	355c44 <TBucketArray::ElementAt(long)>
        355ae0:	e5900008 	ldr	r0, [r0, #8]
        355ae4:	e1a00c20 	mov	r0, r0, lsr #24
        355ae8:	e3a01001 	mov	r1, #1	; 0x1
        355aec:	e1180011 	tst	r8, r1, lsl r0
        355af0:	e1a0100a 	mov	r1, sl
        355af4:	e1a00004 	mov	r0, r4
        355af8:	1a000002 	bne	355b08 <TPrecedentsForWriting::GenerateLinks(long)+0xbc>
        355afc:	eb000050 	bl	355c44 <TBucketArray::ElementAt(long)>
        355b00:	e5b06004 	ldr	r6, [r0, #4]!	; fField4
        355b04:	ea000002 	b	355b14 <TPrecedentsForWriting::GenerateLinks(long)+0xc8>
        355b08:	eb00004d 	bl	355c44 <TBucketArray::ElementAt(long)>
        355b0c:	e5900008 	ldr	r0, [r0, #8]
        355b10:	e3c064ff 	bic	r6, r0, #-16777216	; 0xff000000
        355b14:	e1a0100a 	mov	r1, sl
        355b18:	e1a00004 	mov	r0, r4
        355b1c:	eb000048 	bl	355c44 <TBucketArray::ElementAt(long)>
        355b20:	e5900008 	ldr	r0, [r0, #8]
        355b24:	e1a0ac20 	mov	sl, r0, lsr #24
        355b28:	ea000011 	b	355b74 <TPrecedentsForWriting::GenerateLinks(long)+0x128>
        355b2c:	e1a09006 	mov	r9, r6
        355b30:	e1a0a000 	mov	sl, r0
        355b34:	e1a01006 	mov	r1, r6
        355b38:	e1a00004 	mov	r0, r4
        355b3c:	eb000040 	bl	355c44 <TBucketArray::ElementAt(long)>
        355b40:	e5900008 	ldr	r0, [r0, #8]
        355b44:	e1a00c20 	mov	r0, r0, lsr #24
        355b48:	e3a01001 	mov	r1, #1	; 0x1
        355b4c:	e1180011 	tst	r8, r1, lsl r0
        355b50:	e1a01006 	mov	r1, r6
        355b54:	e1a00004 	mov	r0, r4
        355b58:	1a000002 	bne	355b68 <TPrecedentsForWriting::GenerateLinks(long)+0x11c>
        355b5c:	eb000038 	bl	355c44 <TBucketArray::ElementAt(long)>
        355b60:	e5b06004 	ldr	r6, [r0, #4]!	; fField4
        355b64:	ea000002 	b	355b74 <TPrecedentsForWriting::GenerateLinks(long)+0x128>
        355b68:	eb000035 	bl	355c44 <TBucketArray::ElementAt(long)>
        355b6c:	e5900008 	ldr	r0, [r0, #8]
        355b70:	e3c064ff 	bic	r6, r0, #-16777216	; 0xff000000
        355b74:	e1a01006 	mov	r1, r6
        355b78:	e1a00004 	mov	r0, r4
        355b7c:	eb000030 	bl	355c44 <TBucketArray::ElementAt(long)>
        355b80:	e5900008 	ldr	r0, [r0, #8]
        355b84:	e1a00c20 	mov	r0, r0, lsr #24
        355b88:	e1570000 	cmp	r7, r0
        355b8c:	b150000a 	cmplt	r0, sl
        355b90:	baffffe5 	blt	355b2c <TPrecedentsForWriting::GenerateLinks(long)+0xe0>
        355b94:	e3a00001 	mov	r0, #1	; 0x1
        355b98:	e0187710 	ands	r7, r8, r0, lsl r7
        355b9c:	13a07001 	movne	r7, #1	; 0x1
        355ba0:	e3370000 	teq	r7, #0	; 0x0
        355ba4:	01a0a005 	moveq	sl, r5
        355ba8:	11a0a006 	movne	sl, r6
        355bac:	e1a01005 	mov	r1, r5
        355bb0:	e1a00004 	mov	r0, r4
        355bb4:	eb000022 	bl	355c44 <TBucketArray::ElementAt(long)>
        355bb8:	e3370000 	teq	r7, #0	; 0x0
        355bbc:	e5a0a004 	str	sl, [r0, #4]!	; fField4
        355bc0:	11a06005 	movne	r6, r5
        355bc4:	e1a01005 	mov	r1, r5
        355bc8:	e1a00004 	mov	r0, r4
        355bcc:	eb00001c 	bl	355c44 <TBucketArray::ElementAt(long)>
        355bd0:	e5b01008 	ldr	r1, [r0, #8]!
        355bd4:	e20114ff 	and	r1, r1, #-16777216	; 0xff000000
        355bd8:	e1811006 	orr	r1, r1, r6
        355bdc:	e5801000 	str	r1, [r0]
        355be0:	e1a01009 	mov	r1, r9
        355be4:	e1a00004 	mov	r0, r4
        355be8:	eb000015 	bl	355c44 <TBucketArray::ElementAt(long)>
        355bec:	e5900008 	ldr	r0, [r0, #8]
        355bf0:	e1a00c20 	mov	r0, r0, lsr #24
        355bf4:	e3a01001 	mov	r1, #1	; 0x1
        355bf8:	e1180011 	tst	r8, r1, lsl r0
        355bfc:	13a00000 	movne	r0, #0	; 0x0
        355c00:	03a00001 	moveq	r0, #1	; 0x1
        355c04:	e3300000 	teq	r0, #0	; 0x0
        355c08:	e1a01009 	mov	r1, r9
        355c0c:	e1a00004 	mov	r0, r4
        355c10:	0a000002 	beq	355c20 <TPrecedentsForWriting::GenerateLinks(long)+0x1d4>
        355c14:	eb00000a 	bl	355c44 <TBucketArray::ElementAt(long)>
        355c18:	e5a05004 	str	r5, [r0, #4]!	; fField4
        355c1c:	ea000004 	b	355c34 <TPrecedentsForWriting::GenerateLinks(long)+0x1e8>
        355c20:	eb000007 	bl	355c44 <TBucketArray::ElementAt(long)>
        355c24:	e5b01008 	ldr	r1, [r0, #8]!
        355c28:	e20114ff 	and	r1, r1, #-16777216	; 0xff000000
        355c2c:	e1811005 	orr	r1, r1, r5
        355c30:	e5801000 	str	r1, [r0]
        355c34:	e59d0000 	ldr	r0, [sp]
        355c38:	eb61b55f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        355c3c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: GCOccured__21TPrecedentsForWritingSFPv
 * Address: 00355c40
 */
void TPrecedentsForWriting::GCOccured() {
    /*
        355c40:	ea5be2c0 	b	1a4e748 <TPrecedentsForWriting::$RebuildTable(void)>
    */
}

/**
 * Symbol: TPrecedentsForWriting::RebuildTable(void)
 * Address: 00355ca0
 */
TPrecedentsForWriting::RebuildTable(void) {
    /*
        355ca0:	e1a0c00d 	mov	ip, sp
        355ca4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        355ca8:	e24cb004 	sub	fp, ip, #4	; 0x4
        355cac:	e1a04000 	mov	r4, r0
        355cb0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        355cb4:	e3500001 	cmp	r0, #1	; 0x1
        355cb8:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        355cbc:	e3a05000 	mov	r5, #0	; 0x0
        355cc0:	e1a01005 	mov	r1, r5
        355cc4:	e1a00004 	mov	r0, r4
        355cc8:	ebffffdd 	bl	355c44 <TBucketArray::ElementAt(long)>
        355ccc:	e5a05004 	str	r5, [r0, #4]!	; fField4
        355cd0:	e1a01005 	mov	r1, r5
        355cd4:	e1a00004 	mov	r0, r4
        355cd8:	ebffffd9 	bl	355c44 <TBucketArray::ElementAt(long)>
        355cdc:	e5b01008 	ldr	r1, [r0, #8]!
        355ce0:	e20114ff 	and	r1, r1, #-16777216	; 0xff000000
        355ce4:	e3a05001 	mov	r5, #1	; 0x1
        355ce8:	e5801000 	str	r1, [r0]
        355cec:	e5940004 	ldr	r0, [r4, #4]	; fField4
        355cf0:	e3500001 	cmp	r0, #1	; 0x1
        355cf4:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        355cf8:	e1a01005 	mov	r1, r5
        355cfc:	e1a00004 	mov	r0, r4
        355d00:	eb5beace 	bl	1a50840 <TPrecedentsForWriting::$GenerateLinks(long)>
        355d04:	e2855001 	add	r5, r5, #1	; 0x1
        355d08:	e5940004 	ldr	r0, [r4, #4]	; fField4
        355d0c:	e1500005 	cmp	r0, r5
        355d10:	cafffff8 	bgt	355cf8 <TPrecedentsForWriting::RebuildTable(void)+0x58>
        355d14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: GCMark__21TPrecedentsForWritingSFPv
 * Address: 00355d18
 */
void TPrecedentsForWriting::GCMark() {
    /*
        355d18:	ea5be28b 	b	1a4e74c <TPrecedentsForWriting::$MarkAllRefs(void)>
    */
}

/**
 * Symbol: TPrecedentsForWriting::MarkAllRefs(void)
 * Address: 00355d1c
 */
TPrecedentsForWriting::MarkAllRefs(void) {
    /*
        355d1c:	e1a0c00d 	mov	ip, sp
        355d20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        355d24:	e24cb004 	sub	fp, ip, #4	; 0x4
        355d28:	e1a04000 	mov	r4, r0
        355d2c:	e3a05001 	mov	r5, #1	; 0x1
        355d30:	e5900004 	ldr	r0, [r0, #4]	; fField4
        355d34:	e3500001 	cmp	r0, #1	; 0x1
        355d38:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        355d3c:	e1a01005 	mov	r1, r5
        355d40:	e1a00004 	mov	r0, r4
        355d44:	ebffffbe 	bl	355c44 <TBucketArray::ElementAt(long)>
        355d48:	e5900000 	ldr	r0, [r0]
        355d4c:	eb61b51b 	bl	1bc31c0 <$DIYGCMark(long)>
        355d50:	e2855001 	add	r5, r5, #1	; 0x1
        355d54:	e5940004 	ldr	r0, [r4, #4]	; fField4
        355d58:	e1500005 	cmp	r0, r5
        355d5c:	cafffff6 	bgt	355d3c <TPrecedentsForWriting::MarkAllRefs(void)+0x20>
        355d60:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: GCUpdate__21TPrecedentsForWritingSFPv
 * Address: 00355d64
 */
void TPrecedentsForWriting::GCUpdate() {
    /*
        355d64:	ea5be279 	b	1a4e750 <TPrecedentsForWriting::$UpdateAllRefs(void)>
    */
}

/**
 * Symbol: TPrecedentsForWriting::UpdateAllRefs(void)
 * Address: 00355d68
 */
TPrecedentsForWriting::UpdateAllRefs(void) {
    /*
        355d68:	e1a0c00d 	mov	ip, sp
        355d6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        355d70:	e24cb004 	sub	fp, ip, #4	; 0x4
        355d74:	e1a04000 	mov	r4, r0
        355d78:	e3a05001 	mov	r5, #1	; 0x1
        355d7c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        355d80:	e3500001 	cmp	r0, #1	; 0x1
        355d84:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        355d88:	e1a01005 	mov	r1, r5
        355d8c:	e1a00004 	mov	r0, r4
        355d90:	ebffffab 	bl	355c44 <TBucketArray::ElementAt(long)>
        355d94:	e5900000 	ldr	r0, [r0]
        355d98:	eb61b50b 	bl	1bc31cc <$DIYGCUpdate(long)>
        355d9c:	e1a06000 	mov	r6, r0
        355da0:	e1a01005 	mov	r1, r5
        355da4:	e1a00004 	mov	r0, r4
        355da8:	ebffffa5 	bl	355c44 <TBucketArray::ElementAt(long)>
        355dac:	e2855001 	add	r5, r5, #1	; 0x1
        355db0:	e5806000 	str	r6, [r0]
        355db4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        355db8:	e1500005 	cmp	r0, r5
        355dbc:	cafffff1 	bgt	355d88 <TPrecedentsForWriting::UpdateAllRefs(void)+0x20>
        355dc0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

