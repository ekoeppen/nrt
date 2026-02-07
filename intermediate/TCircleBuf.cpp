#include "DDKIncludes/HAL/SerialChipV2.h"

/**
 * Symbol: TCircleBuf::__ct(void)
 * Address: 00057768
 */
TCircleBuf::TCircleBuf(void) {
    /*
         57768:	e1a0c00d 	mov	ip, sp
         5776c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         57770:	e24cb004 	sub	fp, ip, #4	; 0x4
         57774:	e3300000 	teq	r0, #0	; 0x0
         57778:	1a000003 	bne	5778c <TCircleBuf::__ct(void)+0x24>
         5777c:	e3a00028 	mov	r0, #40	; 0x28
         57780:	eb6ddbec 	bl	1bce738 <$__nw(unsigned int)>
         57784:	e3300000 	teq	r0, #0	; 0x0
         57788:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         5778c:	e3a01000 	mov	r1, #0	; 0x0
         57790:	e5801004 	str	r1, [r0, #4]	; TCircleBuf
         57794:	e580101c 	str	r1, [r0, #28]	; fField28
         57798:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::__dt(void)
 * Address: 0005779c
 */
TCircleBuf::~TCircleBuf(void) {
    /*
         5779c:	e1a0c00d 	mov	ip, sp
         577a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         577a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         577a8:	e1a04000 	mov	r4, r0
         577ac:	e1a05001 	mov	r5, r1
         577b0:	eb6ebae9 	bl	1c0635c <TCircleBuf::$Deallocate(void)>
         577b4:	e3150001 	tst	r5, #1	; 0x1
         577b8:	11a00004 	movne	r0, r4
         577bc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         577c0:	1a6dd7c6 	bne	1bcd6e0 <$__dl(void *)>
         577c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::BufferCountToNextMarker(unsigned long *)
 * Address: 000577c8
 */
TCircleBuf::BufferCountToNextMarker(unsigned long *) {
    /*
         577c8:	e1a0c00d 	mov	ip, sp
         577cc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         577d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         577d4:	e1a04001 	mov	r4, r1
         577d8:	e3a08000 	mov	r8, #0	; 0x0
         577dc:	e2806008 	add	r6, r0, #8	; 0x8
         577e0:	e8960060 	ldmia	r6, {r5, r6}
         577e4:	e5907000 	ldr	r7, [r0]
         577e8:	eb000307 	bl	5840c <TCircleBuf::PeekNextEOMIndex(void)>
         577ec:	e1a01000 	mov	r1, r0
         577f0:	e0460005 	sub	r0, r6, r5
         577f4:	e1560005 	cmp	r6, r5
         577f8:	30800007 	addcc	r0, r0, r7
         577fc:	e3710001 	cmn	r1, #1	; 0x1
         57800:	0a000005 	beq	5781c <TCircleBuf::BufferCountToNextMarker(unsigned long *)+0x54>
         57804:	e0412005 	sub	r2, r1, r5
         57808:	e1510005 	cmp	r1, r5
         5780c:	30822007 	addcc	r2, r2, r7
         57810:	e1520000 	cmp	r2, r0
         57814:	91a00002 	movls	r0, r2
         57818:	93a08001 	movls	r8, #1	; 0x1
         5781c:	e5840000 	str	r0, [r4]
         57820:	e1a00008 	mov	r0, r8
         57824:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::FlushBytes(void)
 * Address: 00057828
 */
TCircleBuf::FlushBytes(void) {
    /*
         57828:	e1a0c00d 	mov	ip, sp
         5782c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         57830:	e24cb004 	sub	fp, ip, #4	; 0x4
         57834:	e1a04000 	mov	r4, r0
         57838:	e24dd004 	sub	sp, sp, #4	; 0x4
         5783c:	e1a0100d 	mov	r1, sp
         57840:	eb682a49 	bl	1a6216c <TCircleBuf::$GetEOMMark(unsigned long *)>
         57844:	e3700001 	cmn	r0, #1	; 0x1
         57848:	0a000004 	beq	57860 <TCircleBuf::FlushBytes(void)+0x38>
         5784c:	e1a0100d 	mov	r1, sp
         57850:	e1a00004 	mov	r0, r4
         57854:	eb682a44 	bl	1a6216c <TCircleBuf::$GetEOMMark(unsigned long *)>
         57858:	e3700001 	cmn	r0, #1	; 0x1
         5785c:	1afffffa 	bne	5784c <TCircleBuf::FlushBytes(void)+0x24>
         57860:	e594000c 	ldr	r0, [r4, #12]	; fField12
         57864:	e5a40008 	str	r0, [r4, #8]!	; fField8
         57868:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::FlushToNextMarker(unsigned long *)
 * Address: 0005786c
 */
TCircleBuf::FlushToNextMarker(unsigned long *) {
    /*
         5786c:	e1a0c00d 	mov	ip, sp
         57870:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         57874:	e24cb004 	sub	fp, ip, #4	; 0x4
         57878:	e1a04000 	mov	r4, r0
         5787c:	eb682a3a 	bl	1a6216c <TCircleBuf::$GetEOMMark(unsigned long *)>
         57880:	e3700001 	cmn	r0, #1	; 0x1
         57884:	15a40008 	strne	r0, [r4, #8]!	; fField8
         57888:	13a00000 	movne	r0, #0	; 0x0
         5788c:	03a00007 	moveq	r0, #7	; 0x7
         57890:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::Reset(void)
 * Address: 00057894
 */
TCircleBuf::Reset(void) {
    /*
         57894:	e3a01000 	mov	r1, #0	; 0x0
         57898:	e5801020 	str	r1, [r0, #32]	; fField32
         5789c:	e5801024 	str	r1, [r0, #36]	; fField36
         578a0:	e5801008 	str	r1, [r0, #8]	; fField8
         578a4:	e5a0100c 	str	r1, [r0, #12]!	; fField12
         578a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::ResetStart(void)
 * Address: 000578ac
 */
TCircleBuf::ResetStart(void) {
    /*
         578ac:	e3a01000 	mov	r1, #0	; 0x0
         578b0:	e5a01008 	str	r1, [r0, #8]!	; fField8
         578b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::CopyOut(CBufferList *, unsigned long *, unsigned long *)
 * Address: 000578b8
 */
TCircleBuf::CopyOut(CBufferList *, unsigned long *, unsigned long *) {
    /*
         578b8:	e1a0c00d 	mov	ip, sp
         578bc:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         578c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         578c4:	e1a04000 	mov	r4, r0
         578c8:	e1a05001 	mov	r5, r1
         578cc:	e1a06002 	mov	r6, r2
         578d0:	e24dd004 	sub	sp, sp, #4	; 0x4
         578d4:	e3a09000 	mov	r9, #0	; 0x0
         578d8:	e1a0100d 	mov	r1, sp
         578dc:	eb6eba91 	bl	1c06328 <TCircleBuf::$BufferCountToNextMarker(unsigned long *)>
         578e0:	e1a0a000 	mov	sl, r0
         578e4:	e59d2000 	ldr	r2, [sp]
         578e8:	e3320000 	teq	r2, #0	; 0x0
         578ec:	0a00002e 	beq	579ac <TCircleBuf::CopyOut(CBufferList *, unsigned long *, unsigned long *)+0xf4>
         578f0:	e5940008 	ldr	r0, [r4, #8]	; fField8
         578f4:	e5941000 	ldr	r1, [r4]
         578f8:	e0418000 	sub	r8, r1, r0
         578fc:	e1520008 	cmp	r2, r8
         57900:	e5941004 	ldr	r1, [r4, #4]	; TCircleBuf
         57904:	e0811000 	add	r1, r1, r0
         57908:	8a000003 	bhi	5791c <TCircleBuf::CopyOut(CBufferList *, unsigned long *, unsigned long *)+0x64>
         5790c:	e1a00005 	mov	r0, r5
         57910:	eb6e4f38 	bl	1beb5f8 <CBufferList::$Putn(unsigned char const *, long)>
         57914:	e1a07000 	mov	r7, r0
         57918:	ea00000b 	b	5794c <TCircleBuf::CopyOut(CBufferList *, unsigned long *, unsigned long *)+0x94>
         5791c:	e1a02008 	mov	r2, r8
         57920:	e1a00005 	mov	r0, r5
         57924:	eb6e4f33 	bl	1beb5f8 <CBufferList::$Putn(unsigned char const *, long)>
         57928:	e1a07000 	mov	r7, r0
         5792c:	e1300008 	teq	r0, r8
         57930:	1a000005 	bne	5794c <TCircleBuf::CopyOut(CBufferList *, unsigned long *, unsigned long *)+0x94>
         57934:	e59d0000 	ldr	r0, [sp]
         57938:	e0402008 	sub	r2, r0, r8
         5793c:	e1a00005 	mov	r0, r5
         57940:	e5941004 	ldr	r1, [r4, #4]	; TCircleBuf
         57944:	eb6e4f2b 	bl	1beb5f8 <CBufferList::$Putn(unsigned char const *, long)>
         57948:	e0807007 	add	r7, r0, r7
         5794c:	e5960000 	ldr	r0, [r6]
         57950:	e0500007 	subs	r0, r0, r7
         57954:	e5860000 	str	r0, [r6]
         57958:	03a09006 	moveq	r9, #6	; 0x6
         5795c:	e33a0000 	teq	sl, #0	; 0x0
         57960:	0a00000e 	beq	579a0 <TCircleBuf::CopyOut(CBufferList *, unsigned long *, unsigned long *)+0xe8>
         57964:	e59d0000 	ldr	r0, [sp]
         57968:	e1370000 	teq	r7, r0
         5796c:	1a00000b 	bne	579a0 <TCircleBuf::CopyOut(CBufferList *, unsigned long *, unsigned long *)+0xe8>
         57970:	e3a09001 	mov	r9, #1	; 0x1
         57974:	e1a00004 	mov	r0, r4
         57978:	e51b102c 	ldr	r1, [fp, -#44]
         5797c:	eb6829fa 	bl	1a6216c <TCircleBuf::$GetEOMMark(unsigned long *)>
         57980:	e1a01007 	mov	r1, r7
         57984:	e1a00004 	mov	r0, r4
         57988:	eb671115 	bl	1a1bde4 <TCircleBuf::$UpdateStart(unsigned long)>
         5798c:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         57990:	e3100001 	tst	r0, #1	; 0x1
         57994:	11a00004 	movne	r0, r4
         57998:	1b000267 	blne	5833c <TCircleBuf::GetAlignLong(void)>
         5799c:	ea000002 	b	579ac <TCircleBuf::CopyOut(CBufferList *, unsigned long *, unsigned long *)+0xf4>
         579a0:	e1a01007 	mov	r1, r7
         579a4:	e1a00004 	mov	r0, r4
         579a8:	eb67110d 	bl	1a1bde4 <TCircleBuf::$UpdateStart(unsigned long)>
         579ac:	e1a00009 	mov	r0, r9
         579b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::CopyOut(unsigned char *, unsigned long *, unsigned long *)
 * Address: 000579b4
 */
TCircleBuf::CopyOut(unsigned char *, unsigned long *, unsigned long *) {
    /*
         579b4:	e1a0c00d 	mov	ip, sp
         579b8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         579bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         579c0:	e1a04000 	mov	r4, r0
         579c4:	e1a06001 	mov	r6, r1
         579c8:	e1a05002 	mov	r5, r2
         579cc:	e1a07003 	mov	r7, r3
         579d0:	e24dd004 	sub	sp, sp, #4	; 0x4
         579d4:	e3a08000 	mov	r8, #0	; 0x0
         579d8:	e1a0100d 	mov	r1, sp
         579dc:	e592a000 	ldr	sl, [r2]
         579e0:	eb6eba50 	bl	1c06328 <TCircleBuf::$BufferCountToNextMarker(unsigned long *)>
         579e4:	e1a09000 	mov	r9, r0
         579e8:	e59d0000 	ldr	r0, [sp]
         579ec:	e3300000 	teq	r0, #0	; 0x0
         579f0:	0a000029 	beq	57a9c <TCircleBuf::CopyOut(unsigned char *, unsigned long *, unsigned long *)+0xe8>
         579f4:	e150000a 	cmp	r0, sl
         579f8:	83a09000 	movhi	r9, #0	; 0x0
         579fc:	83a08006 	movhi	r8, #6	; 0x6
         57a00:	858da000 	strhi	sl, [sp]
         57a04:	e5951000 	ldr	r1, [r5]
         57a08:	e59d0000 	ldr	r0, [sp]
         57a0c:	e0410000 	sub	r0, r1, r0
         57a10:	e5850000 	str	r0, [r5]
         57a14:	e5940008 	ldr	r0, [r4, #8]	; fField8
         57a18:	e5941000 	ldr	r1, [r4]
         57a1c:	e0415000 	sub	r5, r1, r0
         57a20:	e59d2000 	ldr	r2, [sp]
         57a24:	e1520005 	cmp	r2, r5
         57a28:	e5941004 	ldr	r1, [r4, #4]	; TCircleBuf
         57a2c:	e0811000 	add	r1, r1, r0
         57a30:	91a00006 	movls	r0, r6
         57a34:	9a000006 	bls	57a54 <TCircleBuf::CopyOut(unsigned char *, unsigned long *, unsigned long *)+0xa0>
         57a38:	e1a02005 	mov	r2, r5
         57a3c:	e1a00006 	mov	r0, r6
         57a40:	eb6d7402 	bl	1bb4a50 <$memcpy>
         57a44:	e59d0000 	ldr	r0, [sp]
         57a48:	e0402005 	sub	r2, r0, r5
         57a4c:	e0860005 	add	r0, r6, r5
         57a50:	e5941004 	ldr	r1, [r4, #4]	; TCircleBuf
         57a54:	eb6d73fd 	bl	1bb4a50 <$memcpy>
         57a58:	e3390000 	teq	r9, #0	; 0x0
         57a5c:	0a00000b 	beq	57a90 <TCircleBuf::CopyOut(unsigned char *, unsigned long *, unsigned long *)+0xdc>
         57a60:	e3a08001 	mov	r8, #1	; 0x1
         57a64:	e1a01007 	mov	r1, r7
         57a68:	e1a00004 	mov	r0, r4
         57a6c:	eb6829be 	bl	1a6216c <TCircleBuf::$GetEOMMark(unsigned long *)>
         57a70:	e1a00004 	mov	r0, r4
         57a74:	e59d1000 	ldr	r1, [sp]
         57a78:	eb6710d9 	bl	1a1bde4 <TCircleBuf::$UpdateStart(unsigned long)>
         57a7c:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         57a80:	e3100001 	tst	r0, #1	; 0x1
         57a84:	11a00004 	movne	r0, r4
         57a88:	1b00022b 	blne	5833c <TCircleBuf::GetAlignLong(void)>
         57a8c:	ea000002 	b	57a9c <TCircleBuf::CopyOut(unsigned char *, unsigned long *, unsigned long *)+0xe8>
         57a90:	e1a00004 	mov	r0, r4
         57a94:	e59d1000 	ldr	r1, [sp]
         57a98:	eb6710d1 	bl	1a1bde4 <TCircleBuf::$UpdateStart(unsigned long)>
         57a9c:	e1a00008 	mov	r0, r8
         57aa0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::CopyIn(CBufferList *, unsigned long *)
 * Address: 00057aa4
 */
TCircleBuf::CopyIn(CBufferList *, unsigned long *) {
    /*
         57aa4:	e1a0c00d 	mov	ip, sp
         57aa8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         57aac:	e24cb004 	sub	fp, ip, #4	; 0x4
         57ab0:	e1a04000 	mov	r4, r0
         57ab4:	e1a05001 	mov	r5, r1
         57ab8:	e1a06002 	mov	r6, r2
         57abc:	e3a09000 	mov	r9, #0	; 0x0
         57ac0:	eb6eba1b 	bl	1c06334 <TCircleBuf::$BufferSpace(void)>
         57ac4:	e1b0a000 	movs	sl, r0
         57ac8:	0a000021 	beq	57b54 <TCircleBuf::CopyIn(CBufferList *, unsigned long *)+0xb0>
         57acc:	e594000c 	ldr	r0, [r4, #12]	; fField12
         57ad0:	e5941000 	ldr	r1, [r4]
         57ad4:	e0417000 	sub	r7, r1, r0
         57ad8:	e5941008 	ldr	r1, [r4, #8]	; fField8
         57adc:	e3310000 	teq	r1, #0	; 0x0
         57ae0:	02477001 	subeq	r7, r7, #1	; 0x1
         57ae4:	e15a0007 	cmp	sl, r7
         57ae8:	e5941004 	ldr	r1, [r4, #4]	; TCircleBuf
         57aec:	e0811000 	add	r1, r1, r0
         57af0:	8a000004 	bhi	57b08 <TCircleBuf::CopyIn(CBufferList *, unsigned long *)+0x64>
         57af4:	e1a0200a 	mov	r2, sl
         57af8:	e1a00005 	mov	r0, r5
         57afc:	eb6e424f 	bl	1be8440 <CBufferList::$Getn(unsigned char *, long)>
         57b00:	e1a08000 	mov	r8, r0
         57b04:	ea00000a 	b	57b34 <TCircleBuf::CopyIn(CBufferList *, unsigned long *)+0x90>
         57b08:	e1a02007 	mov	r2, r7
         57b0c:	e1a00005 	mov	r0, r5
         57b10:	eb6e424a 	bl	1be8440 <CBufferList::$Getn(unsigned char *, long)>
         57b14:	e1a08000 	mov	r8, r0
         57b18:	e1300007 	teq	r0, r7
         57b1c:	1a000004 	bne	57b34 <TCircleBuf::CopyIn(CBufferList *, unsigned long *)+0x90>
         57b20:	e04a2007 	sub	r2, sl, r7
         57b24:	e1a00005 	mov	r0, r5
         57b28:	e5941004 	ldr	r1, [r4, #4]	; TCircleBuf
         57b2c:	eb6e4243 	bl	1be8440 <CBufferList::$Getn(unsigned char *, long)>
         57b30:	e0808008 	add	r8, r0, r8
         57b34:	e1a01008 	mov	r1, r8
         57b38:	e1a00004 	mov	r0, r4
         57b3c:	eb6710a7 	bl	1a1bde0 <TCircleBuf::$UpdateEnd(unsigned long)>
         57b40:	e5960000 	ldr	r0, [r6]
         57b44:	e0400008 	sub	r0, r0, r8
         57b48:	e3380000 	teq	r8, #0	; 0x0
         57b4c:	e5860000 	str	r0, [r6]
         57b50:	03a09005 	moveq	r9, #5	; 0x5
         57b54:	e1a00009 	mov	r0, r9
         57b58:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::CopyIn(unsigned char *, unsigned long *, unsigned char, unsigned long)
 * Address: 00057b5c
 */
TCircleBuf::CopyIn(unsigned char *, unsigned long *, unsigned char, unsigned long) {
    /*
         57b5c:	e1a0c00d 	mov	ip, sp
         57b60:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         57b64:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         57b68:	e24cb014 	sub	fp, ip, #20	; 0x14
         57b6c:	e1a04000 	mov	r4, r0
         57b70:	e1a06001 	mov	r6, r1
         57b74:	e1a05002 	mov	r5, r2
         57b78:	e20300ff 	and	r0, r3, #255	; 0xff
         57b7c:	e52d0004 	str	r0, [sp, -#4]!	; TCircleBuf
         57b80:	e3a09000 	mov	r9, #0	; 0x0
         57b84:	e1a00004 	mov	r0, r4
         57b88:	e5927000 	ldr	r7, [r2]
         57b8c:	eb6eb9e8 	bl	1c06334 <TCircleBuf::$BufferSpace(void)>
         57b90:	e1a08000 	mov	r8, r0
         57b94:	e1500007 	cmp	r0, r7
         57b98:	31a07008 	movcc	r7, r8
         57b9c:	33a09003 	movcc	r9, #3	; 0x3
         57ba0:	e59d0000 	ldr	r0, [sp]
         57ba4:	e3300000 	teq	r0, #0	; 0x0
         57ba8:	0a000004 	beq	57bc0 <TCircleBuf::CopyIn(unsigned char *, unsigned long *, unsigned char, unsigned long)+0x64>
         57bac:	e1a00004 	mov	r0, r4
         57bb0:	eb6eb9ef 	bl	1c06374 <TCircleBuf::$MarkerSpace(void)>
         57bb4:	e3300000 	teq	r0, #0	; 0x0
         57bb8:	03a00004 	moveq	r0, #4	; 0x4
         57bbc:	0a000005 	beq	57bd8 <TCircleBuf::CopyIn(unsigned char *, unsigned long *, unsigned char, unsigned long)+0x7c>
         57bc0:	e5950000 	ldr	r0, [r5]
         57bc4:	e0400007 	sub	r0, r0, r7
         57bc8:	e3380000 	teq	r8, #0	; 0x0
         57bcc:	e5850000 	str	r0, [r5]
         57bd0:	1a000001 	bne	57bdc <TCircleBuf::CopyIn(unsigned char *, unsigned long *, unsigned char, unsigned long)+0x80>
         57bd4:	e1a00009 	mov	r0, r9
         57bd8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         57bdc:	e24dd004 	sub	sp, sp, #4	; 0x4
         57be0:	e5940000 	ldr	r0, [r4]
         57be4:	e594a00c 	ldr	sl, [r4, #12]	; fField12
         57be8:	e58d0000 	str	r0, [sp]
         57bec:	e040800a 	sub	r8, r0, sl
         57bf0:	e5940008 	ldr	r0, [r4, #8]	; fField8
         57bf4:	e3300000 	teq	r0, #0	; 0x0
         57bf8:	02488001 	subeq	r8, r8, #1	; 0x1
         57bfc:	e1570008 	cmp	r7, r8
         57c00:	e5940004 	ldr	r0, [r4, #4]	; TCircleBuf
         57c04:	e080000a 	add	r0, r0, sl
         57c08:	91a02007 	movls	r2, r7
         57c0c:	91a01006 	movls	r1, r6
         57c10:	9a000005 	bls	57c2c <TCircleBuf::CopyIn(unsigned char *, unsigned long *, unsigned char, unsigned long)+0xd0>
         57c14:	e1a02008 	mov	r2, r8
         57c18:	e1a01006 	mov	r1, r6
         57c1c:	eb6d738b 	bl	1bb4a50 <$memcpy>
         57c20:	e0472008 	sub	r2, r7, r8
         57c24:	e0861008 	add	r1, r6, r8
         57c28:	e5940004 	ldr	r0, [r4, #4]	; TCircleBuf
         57c2c:	eb6d7387 	bl	1bb4a50 <$memcpy>
         57c30:	e08a6007 	add	r6, sl, r7
         57c34:	e59d0000 	ldr	r0, [sp]
         57c38:	e1560000 	cmp	r6, r0
         57c3c:	259d0000 	ldrcs	r0, [sp]
         57c40:	20466000 	subcs	r6, r6, r0
         57c44:	e59d0004 	ldr	r0, [sp, #4]	; TCircleBuf
         57c48:	e3300000 	teq	r0, #0	; 0x0
         57c4c:	0a000007 	beq	57c70 <TCircleBuf::CopyIn(unsigned char *, unsigned long *, unsigned char, unsigned long)+0x114>
         57c50:	e5950000 	ldr	r0, [r5]
         57c54:	e3300000 	teq	r0, #0	; 0x0
         57c58:	1a000004 	bne	57c70 <TCircleBuf::CopyIn(unsigned char *, unsigned long *, unsigned char, unsigned long)+0x114>
         57c5c:	e1a01006 	mov	r1, r6
         57c60:	e1a00004 	mov	r0, r4
         57c64:	e59b2014 	ldr	r2, [fp, #20]	; fField20
         57c68:	eb682d4a 	bl	1a63198 <TCircleBuf::$PutEOMMark(unsigned long, unsigned long)>
         57c6c:	e1a09000 	mov	r9, r0
         57c70:	e1a00009 	mov	r0, r9
         57c74:	e5a4600c 	str	r6, [r4, #12]!	; fField12
         57c78:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::GetNextByte(unsigned char *)
 * Address: 00057c7c
 */
TCircleBuf::GetNextByte(unsigned char *) {
    /*
         57c7c:	e1a0c00d 	mov	ip, sp
         57c80:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         57c84:	e24cb004 	sub	fp, ip, #4	; 0x4
         57c88:	e590201c 	ldr	r2, [r0, #28]	; fField28
         57c8c:	e3320000 	teq	r2, #0	; 0x0
         57c90:	0a000003 	beq	57ca4 <TCircleBuf::GetNextByte(unsigned char *)+0x28>
         57c94:	e24dd004 	sub	sp, sp, #4	; 0x4
         57c98:	e1a0200d 	mov	r2, sp
         57c9c:	eb6eb9b2 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         57ca0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         57ca4:	e3a03002 	mov	r3, #2	; 0x2
         57ca8:	e280c008 	add	ip, r0, #8	; 0x8
         57cac:	e89c1004 	ldmia	ip, {r2, ip}
         57cb0:	e13c0002 	teq	ip, r2
         57cb4:	0a000008 	beq	57cdc <TCircleBuf::GetNextByte(unsigned char *)+0x60>
         57cb8:	e5903004 	ldr	r3, [r0, #4]	; TCircleBuf
         57cbc:	e7d33002 	ldrb	r3, [r3, r2]
         57cc0:	e5c13000 	strb	r3, [r1]
         57cc4:	e2821001 	add	r1, r2, #1	; 0x1
         57cc8:	e5902000 	ldr	r2, [r0]
         57ccc:	e1310002 	teq	r1, r2
         57cd0:	03a01000 	moveq	r1, #0	; 0x0
         57cd4:	e3a03000 	mov	r3, #0	; 0x0
         57cd8:	e5a01008 	str	r1, [r0, #8]!	; fField8
         57cdc:	e1a00003 	mov	r0, r3
         57ce0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::Allocate(unsigned long)
 * Address: 00057ce4
 */
TCircleBuf::Allocate(unsigned long) {
    /*
         57ce4:	e1a0c00d 	mov	ip, sp
         57ce8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         57cec:	e24cb004 	sub	fp, ip, #4	; 0x4
         57cf0:	e3a03000 	mov	r3, #0	; 0x0
         57cf4:	e92d0008 	stmdb	sp!, {r3}
         57cf8:	e3a02000 	mov	r2, #0	; 0x0
         57cfc:	eb6eb988 	bl	1c06324 <TCircleBuf::$Allocate(unsigned long, int, unsigned char, unsigned char)>
         57d00:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::GetNextByte(unsigned char *, unsigned long *)
 * Address: 00057d04
 */
TCircleBuf::GetNextByte(unsigned char *, unsigned long *) {
    /*
         57d04:	e1a0c00d 	mov	ip, sp
         57d08:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         57d0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         57d10:	e1a04000 	mov	r4, r0
         57d14:	e1a05002 	mov	r5, r2
         57d18:	e3a06002 	mov	r6, #2	; 0x2
         57d1c:	e5900008 	ldr	r0, [r0, #8]	; fField8
         57d20:	e594200c 	ldr	r2, [r4, #12]	; fField12
         57d24:	e1320000 	teq	r2, r0
         57d28:	0a000011 	beq	57d74 <TCircleBuf::GetNextByte(unsigned char *, unsigned long *)+0x70>
         57d2c:	e5942004 	ldr	r2, [r4, #4]	; TCircleBuf
         57d30:	e7d22000 	ldrb	r2, [r2, r0]
         57d34:	e5c12000 	strb	r2, [r1]
         57d38:	e2807001 	add	r7, r0, #1	; 0x1
         57d3c:	e5940000 	ldr	r0, [r4]
         57d40:	e1370000 	teq	r7, r0
         57d44:	03a07000 	moveq	r7, #0	; 0x0
         57d48:	e1a00004 	mov	r0, r4
         57d4c:	eb0001ae 	bl	5840c <TCircleBuf::PeekNextEOMIndex(void)>
         57d50:	e1300007 	teq	r0, r7
         57d54:	1a000004 	bne	57d6c <TCircleBuf::GetNextByte(unsigned char *, unsigned long *)+0x68>
         57d58:	e3a06001 	mov	r6, #1	; 0x1
         57d5c:	e1a01005 	mov	r1, r5
         57d60:	e1a00004 	mov	r0, r4
         57d64:	eb682900 	bl	1a6216c <TCircleBuf::$GetEOMMark(unsigned long *)>
         57d68:	ea000000 	b	57d70 <TCircleBuf::GetNextByte(unsigned char *, unsigned long *)+0x6c>
         57d6c:	e3a06000 	mov	r6, #0	; 0x0
         57d70:	e5a47008 	str	r7, [r4, #8]!	; fField8
         57d74:	e1a00006 	mov	r0, r6
         57d78:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::PeekNextByte(unsigned char *)
 * Address: 00057d7c
 */
TCircleBuf::PeekNextByte(unsigned char *) {
    /*
         57d7c:	e3a03002 	mov	r3, #2	; 0x2
         57d80:	e280c008 	add	ip, r0, #8	; 0x8
         57d84:	e89c1004 	ldmia	ip, {r2, ip}
         57d88:	e13c0002 	teq	ip, r2
         57d8c:	0a000003 	beq	57da0 <TCircleBuf::PeekNextByte(unsigned char *)+0x24>
         57d90:	e5900004 	ldr	r0, [r0, #4]	; TCircleBuf
         57d94:	e7d00002 	ldrb	r0, [r0, r2]
         57d98:	e5c10000 	strb	r0, [r1]
         57d9c:	e3a03000 	mov	r3, #0	; 0x0
         57da0:	e1a00003 	mov	r0, r3
         57da4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::PeekNextByte(unsigned char *, unsigned long *)
 * Address: 00057da8
 */
TCircleBuf::PeekNextByte(unsigned char *, unsigned long *) {
    /*
         57da8:	e1a0c00d 	mov	ip, sp
         57dac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         57db0:	e24cb004 	sub	fp, ip, #4	; 0x4
         57db4:	e3a0c002 	mov	ip, #2	; 0x2
         57db8:	e280e008 	add	lr, r0, #8	; 0x8
         57dbc:	e89e4008 	ldmia	lr, {r3, lr}
         57dc0:	e13e0003 	teq	lr, r3
         57dc4:	0a00000b 	beq	57df8 <TCircleBuf::PeekNextByte(unsigned char *, unsigned long *)+0x50>
         57dc8:	e590c004 	ldr	ip, [r0, #4]	; TCircleBuf
         57dcc:	e7dcc003 	ldrb	ip, [ip, r3]
         57dd0:	e5c1c000 	strb	ip, [r1]
         57dd4:	e2834001 	add	r4, r3, #1	; 0x1
         57dd8:	e5901000 	ldr	r1, [r0]
         57ddc:	e1340001 	teq	r4, r1
         57de0:	03a04000 	moveq	r4, #0	; 0x0
         57de4:	e1a01002 	mov	r1, r2
         57de8:	eb683110 	bl	1a64230 <TCircleBuf::$PeekNextEOMIndex(unsigned long *)>
         57dec:	e1300004 	teq	r0, r4
         57df0:	13a0c000 	movne	ip, #0	; 0x0
         57df4:	03a0c001 	moveq	ip, #1	; 0x1
         57df8:	e1a0000c 	mov	r0, ip
         57dfc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::PutNextByte(unsigned char)
 * Address: 00057e00
 */
TCircleBuf::PutNextByte(unsigned char) {
    /*
         57e00:	e20130ff 	and	r3, r1, #255	; 0xff
         57e04:	e3a02003 	mov	r2, #3	; 0x3
         57e08:	e590100c 	ldr	r1, [r0, #12]	; fField12
         57e0c:	e590c004 	ldr	ip, [r0, #4]	; TCircleBuf
         57e10:	e7cc3001 	strb	r3, [ip, r1]
         57e14:	e2811001 	add	r1, r1, #1	; 0x1
         57e18:	e5903000 	ldr	r3, [r0]
         57e1c:	e1310003 	teq	r1, r3
         57e20:	03a01000 	moveq	r1, #0	; 0x0
         57e24:	e5903008 	ldr	r3, [r0, #8]	; fField8
         57e28:	e1330001 	teq	r3, r1
         57e2c:	13a02000 	movne	r2, #0	; 0x0
         57e30:	15a0100c 	strne	r1, [r0, #12]!	; fField12
         57e34:	e1a00002 	mov	r0, r2
         57e38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::PutNextByte(unsigned char, unsigned long)
 * Address: 00057e3c
 */
TCircleBuf::PutNextByte(unsigned char, unsigned long) {
    /*
         57e3c:	e1a0c00d 	mov	ip, sp
         57e40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         57e44:	e24cb004 	sub	fp, ip, #4	; 0x4
         57e48:	e1a04000 	mov	r4, r0
         57e4c:	e1a05002 	mov	r5, r2
         57e50:	e20160ff 	and	r6, r1, #255	; 0xff
         57e54:	eb6eb946 	bl	1c06374 <TCircleBuf::$MarkerSpace(void)>
         57e58:	e3300000 	teq	r0, #0	; 0x0
         57e5c:	03a00004 	moveq	r0, #4	; 0x4
         57e60:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         57e64:	e3a00003 	mov	r0, #3	; 0x3
         57e68:	e594100c 	ldr	r1, [r4, #12]	; fField12
         57e6c:	e5942004 	ldr	r2, [r4, #4]	; TCircleBuf
         57e70:	e7c26001 	strb	r6, [r2, r1]
         57e74:	e2816001 	add	r6, r1, #1	; 0x1
         57e78:	e5941000 	ldr	r1, [r4]
         57e7c:	e1360001 	teq	r6, r1
         57e80:	03a06000 	moveq	r6, #0	; 0x0
         57e84:	e5941008 	ldr	r1, [r4, #8]	; fField8
         57e88:	e1310006 	teq	r1, r6
         57e8c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         57e90:	e1a02005 	mov	r2, r5
         57e94:	e1a01006 	mov	r1, r6
         57e98:	e1a00004 	mov	r0, r4
         57e9c:	eb682cbd 	bl	1a63198 <TCircleBuf::$PutEOMMark(unsigned long, unsigned long)>
         57ea0:	e5a4600c 	str	r6, [r4, #12]!	; fField12
         57ea4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::PutEOM(unsigned long)
 * Address: 00057ea8
 */
TCircleBuf::PutEOM(unsigned long) {
    /*
         57ea8:	e1a02001 	mov	r2, r1
         57eac:	e590100c 	ldr	r1, [r0, #12]	; fField12
         57eb0:	ea682cb8 	b	1a63198 <TCircleBuf::$PutEOMMark(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCircleBuf::PutNextStart(void)
 * Address: 00057eb4
 */
TCircleBuf::PutNextStart(void) {
    /*
         57eb4:	e590100c 	ldr	r1, [r0, #12]	; fField12
         57eb8:	e5a01010 	str	r1, [r0, #16]!	; fField16
         57ebc:	e3a00000 	mov	r0, #0	; 0x0
         57ec0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::PutFirstPossible(unsigned char)
 * Address: 00057ec4
 */
TCircleBuf::PutFirstPossible(unsigned char) {
    /*
         57ec4:	e20110ff 	and	r1, r1, #255	; 0xff
         57ec8:	e590200c 	ldr	r2, [r0, #12]	; fField12
         57ecc:	e5802010 	str	r2, [r0, #16]	; fField16
         57ed0:	ea6ebd2d 	b	1c0738c <TCircleBuf::$PutNextPossible(unsigned char)>
    */
}

/**
 * Symbol: TCircleBuf::PutNextPossible(unsigned char)
 * Address: 00057ed4
 */
TCircleBuf::PutNextPossible(unsigned char) {
    /*
         57ed4:	e20130ff 	and	r3, r1, #255	; 0xff
         57ed8:	e3a02003 	mov	r2, #3	; 0x3
         57edc:	e5901010 	ldr	r1, [r0, #16]	; fField16
         57ee0:	e590c004 	ldr	ip, [r0, #4]	; TCircleBuf
         57ee4:	e7cc3001 	strb	r3, [ip, r1]
         57ee8:	e2811001 	add	r1, r1, #1	; 0x1
         57eec:	e5903000 	ldr	r3, [r0]
         57ef0:	e1310003 	teq	r1, r3
         57ef4:	03a01000 	moveq	r1, #0	; 0x0
         57ef8:	e5903008 	ldr	r3, [r0, #8]	; fField8
         57efc:	e1330001 	teq	r3, r1
         57f00:	13a02000 	movne	r2, #0	; 0x0
         57f04:	15a01010 	strne	r1, [r0, #16]!	; fField16
         57f08:	e1a00002 	mov	r0, r2
         57f0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::PutNextEOM(unsigned long)
 * Address: 00057f10
 */
TCircleBuf::PutNextEOM(unsigned long) {
    /*
         57f10:	e1a0c00d 	mov	ip, sp
         57f14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         57f18:	e24cb004 	sub	fp, ip, #4	; 0x4
         57f1c:	e1a04000 	mov	r4, r0
         57f20:	e1a02001 	mov	r2, r1
         57f24:	e5901010 	ldr	r1, [r0, #16]	; fField16
         57f28:	eb682c9a 	bl	1a63198 <TCircleBuf::$PutEOMMark(unsigned long, unsigned long)>
         57f2c:	e1b05000 	movs	r5, r0
         57f30:	1a000005 	bne	57f4c <TCircleBuf::PutNextEOM(unsigned long)+0x3c>
         57f34:	e5940010 	ldr	r0, [r4, #16]	; fField16
         57f38:	e584000c 	str	r0, [r4, #12]	; fField12
         57f3c:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         57f40:	e3100001 	tst	r0, #1	; 0x1
         57f44:	11a00004 	movne	r0, r4
         57f48:	1b000100 	blne	58350 <TCircleBuf::PutAlignLong(void)>
         57f4c:	e1a00005 	mov	r0, r5
         57f50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char)
 * Address: 00057f54
 */
TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char) {
    /*
         57f54:	e1a0c00d 	mov	ip, sp
         57f58:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         57f5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         57f60:	e1a04000 	mov	r4, r0
         57f64:	e1a05001 	mov	r5, r1
         57f68:	e1a06002 	mov	r6, r2
         57f6c:	e20380ff 	and	r8, r3, #255	; 0xff
         57f70:	e59b0004 	ldr	r0, [fp, #4]	; TCircleBuf
         57f74:	e20090ff 	and	r9, r0, #255	; 0xff
         57f78:	e5940004 	ldr	r0, [r4, #4]	; TCircleBuf
         57f7c:	e3300000 	teq	r0, #0	; 0x0
         57f80:	11a00004 	movne	r0, r4
         57f84:	1b6eb8f4 	blne	1c0635c <TCircleBuf::$Deallocate(void)>
         57f88:	e3a07000 	mov	r7, #0	; 0x0
         57f8c:	e2850004 	add	r0, r5, #4	; 0x4
         57f90:	e3c05003 	bic	r5, r0, #3	; 0x3
         57f94:	e1a01005 	mov	r1, r5
         57f98:	e3a00000 	mov	r0, #0	; 0x0
         57f9c:	e286a001 	add	sl, r6, #1	; 0x1
         57fa0:	e3360000 	teq	r6, #0	; 0x0
         57fa4:	11a0018a 	movne	r0, sl, lsl #3
         57fa8:	e0811000 	add	r1, r1, r0
         57fac:	e3380002 	teq	r8, #2	; 0x2
         57fb0:	1a000005 	bne	57fcc <TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char)+0x78>
         57fb4:	e3510d3f 	cmp	r1, #4032	; 0xfc0
         57fb8:	83a01d3f 	movhi	r1, #4032	; 0xfc0
         57fbc:	80415000 	subhi	r5, r1, r0
         57fc0:	e1a00001 	mov	r0, r1
         57fc4:	eb6e2861 	bl	1be2150 <$NewWiredPtr>
         57fc8:	ea000001 	b	57fd4 <TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char)+0x80>
         57fcc:	e1a00001 	mov	r0, r1
         57fd0:	eb6e285a 	bl	1be2140 <$NewPtr>
         57fd4:	e5840004 	str	r0, [r4, #4]	; TCircleBuf
         57fd8:	e5940004 	ldr	r0, [r4, #4]	; TCircleBuf
         57fdc:	e3300000 	teq	r0, #0	; 0x0
         57fe0:	03a070e9 	moveq	r7, #233	; 0xe9
         57fe4:	02477b0a 	subeq	r7, r7, #10240	; 0x2800
         57fe8:	0a00002a 	beq	58098 <TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char)+0x144>
         57fec:	e3380001 	teq	r8, #1	; 0x1
         57ff0:	1a000002 	bne	58000 <TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char)+0xac>
         57ff4:	eb6e2848 	bl	1be211c <$LockPtr>
         57ff8:	e1b07000 	movs	r7, r0
         57ffc:	1a000007 	bne	58020 <TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char)+0xcc>
         58000:	e3190002 	tst	r9, #2	; 0x2
         58004:	0a000005 	beq	58020 <TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char)+0xcc>
         58008:	e2192004 	ands	r2, r9, #4	; 0x4
         5800c:	13a02001 	movne	r2, #1	; 0x1
         58010:	e2841028 	add	r1, r4, #40	; 0x28
         58014:	e1a00004 	mov	r0, r4
         58018:	eb6dfacd 	bl	1bd6b54 <$LockHeapRange>
         5801c:	e1a07000 	mov	r7, r0
         58020:	e5c48014 	strb	r8, [r4, #20]	; fField20
         58024:	e5c49015 	strb	r9, [r4, #21]	; fField21
         58028:	e3a00000 	mov	r0, #0	; 0x0
         5802c:	e5840008 	str	r0, [r4, #8]	; fField8
         58030:	e5845000 	str	r5, [r4]
         58034:	e584000c 	str	r0, [r4, #12]	; fField12
         58038:	e5840010 	str	r0, [r4, #16]	; fField16
         5803c:	e5840020 	str	r0, [r4, #32]	; fField32
         58040:	e5840024 	str	r0, [r4, #36]	; fField36
         58044:	e584001c 	str	r0, [r4, #28]	; fField28
         58048:	e3360000 	teq	r6, #0	; 0x0
         5804c:	e5840018 	str	r0, [r4, #24]	; fField24
         58050:	0a000010 	beq	58098 <TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char)+0x144>
         58054:	e584a018 	str	sl, [r4, #24]	; fField24
         58058:	e5941004 	ldr	r1, [r4, #4]	; TCircleBuf
         5805c:	e0811005 	add	r1, r1, r5
         58060:	e584101c 	str	r1, [r4, #28]	; fField28
         58064:	e3a01000 	mov	r1, #0	; 0x0
         58068:	e35a0000 	cmp	sl, #0	; 0x0
         5806c:	9a000009 	bls	58098 <TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char)+0x144>
         58070:	e3e02000 	mvn	r2, #0	; 0x0
         58074:	e594301c 	ldr	r3, [r4, #28]	; fField28
         58078:	e7832181 	str	r2, [r3, r1, lsl #3]
         5807c:	e594301c 	ldr	r3, [r4, #28]	; fField28
         58080:	e0833181 	add	r3, r3, r1, lsl #3
         58084:	e2811001 	add	r1, r1, #1	; 0x1
         58088:	e5a30004 	str	r0, [r3, #4]!	; TCircleBuf
         5808c:	e5943018 	ldr	r3, [r4, #24]	; fField24
         58090:	e1530001 	cmp	r3, r1
         58094:	8afffff6 	bhi	58074 <TCircleBuf::Allocate(unsigned long, int, unsigned char, unsigned char)+0x120>
         58098:	e1a00007 	mov	r0, r7
         5809c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::PutNextCommit(void)
 * Address: 000580a0
 */
TCircleBuf::PutNextCommit(void) {
    /*
         580a0:	e5901010 	ldr	r1, [r0, #16]	; fField16
         580a4:	e5a0100c 	str	r1, [r0, #12]!	; fField12
         580a8:	e3a00000 	mov	r0, #0	; 0x0
         580ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::PeekFirstLong(unsigned long *)
 * Address: 000580b0
 */
TCircleBuf::PeekFirstLong(unsigned long *) {
    /*
         580b0:	e5902004 	ldr	r2, [r0, #4]	; TCircleBuf
         580b4:	e590000c 	ldr	r0, [r0, #12]	; fField12
         580b8:	e7920000 	ldr	r0, [r2, r0]
         580bc:	e5810000 	str	r0, [r1]
         580c0:	e3a00000 	mov	r0, #0	; 0x0
         580c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::GetBytes(TCircleBuf *)
 * Address: 000580c8
 */
TCircleBuf::GetBytes(TCircleBuf *) {
    /*
         580c8:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
         580cc:	e590200c 	ldr	r2, [r0, #12]	; fField12
         580d0:	e1a0e002 	mov	lr, r2
         580d4:	e5904008 	ldr	r4, [r0, #8]	; fField8
         580d8:	e5906004 	ldr	r6, [r0, #4]	; TCircleBuf
         580dc:	e5908000 	ldr	r8, [r0]
         580e0:	e281c008 	add	ip, r1, #8	; 0x8
         580e4:	e89c1008 	ldmia	ip, {r3, ip}
         580e8:	e5915004 	ldr	r5, [r1, #4]	; TCircleBuf
         580ec:	e5917000 	ldr	r7, [r1]
         580f0:	e133000c 	teq	r3, ip
         580f4:	03a02002 	moveq	r2, #2	; 0x2
         580f8:	0a00000b 	beq	5812c <TCircleBuf::GetBytes(TCircleBuf *)+0x64>
         580fc:	e7d59003 	ldrb	r9, [r5, r3]
         58100:	e7c69002 	strb	r9, [r6, r2]
         58104:	e2833001 	add	r3, r3, #1	; 0x1
         58108:	e1330007 	teq	r3, r7
         5810c:	03a03000 	moveq	r3, #0	; 0x0
         58110:	e2822001 	add	r2, r2, #1	; 0x1
         58114:	e1320008 	teq	r2, r8
         58118:	03a02000 	moveq	r2, #0	; 0x0
         5811c:	e1320004 	teq	r2, r4
         58120:	11a0e002 	movne	lr, r2
         58124:	1afffff1 	bne	580f0 <TCircleBuf::GetBytes(TCircleBuf *)+0x28>
         58128:	e3a02003 	mov	r2, #3	; 0x3
         5812c:	e5a0e00c 	str	lr, [r0, #12]!	; fField12
         58130:	e1a00002 	mov	r0, r2
         58134:	e5a1c008 	str	ip, [r1, #8]!	; fField8
         58138:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
    */
}

/**
 * Symbol: TCircleBuf::DMABufInfo(unsigned long *, unsigned long *, unsigned char *, unsigned char *)
 * Address: 0005813c
 */
TCircleBuf::DMABufInfo(unsigned long *, unsigned long *, unsigned char *, unsigned char *) {
    /*
         5813c:	e1a0c00d 	mov	ip, sp
         58140:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         58144:	e24cb004 	sub	fp, ip, #4	; 0x4
         58148:	e1a04000 	mov	r4, r0
         5814c:	e1a07001 	mov	r7, r1
         58150:	e1b06002 	movs	r6, r2
         58154:	e1a05003 	mov	r5, r3
         58158:	e59b8004 	ldr	r8, [fp, #4]	; TCircleBuf
         5815c:	0a000002 	beq	5816c <TCircleBuf::DMABufInfo(unsigned long *, unsigned long *, unsigned char *, unsigned char *)+0x30>
         58160:	e5940004 	ldr	r0, [r4, #4]	; TCircleBuf
         58164:	eb020559 	bl	d96d0 <VToP(unsigned long)>
         58168:	e5860000 	str	r0, [r6]
         5816c:	e3370000 	teq	r7, #0	; 0x0
         58170:	15940000 	ldrne	r0, [r4]
         58174:	15870000 	strne	r0, [r7]
         58178:	e3380000 	teq	r8, #0	; 0x0
         5817c:	15d40015 	ldrneb	r0, [r4, #21]	; fField21
         58180:	15c80000 	strneb	r0, [r8]
         58184:	e3350000 	teq	r5, #0	; 0x0
         58188:	15d40014 	ldrneb	r0, [r4, #20]	; fField20
         5818c:	15c50000 	strneb	r0, [r5]
         58190:	e5b40004 	ldr	r0, [r4, #4]!	; TCircleBuf
         58194:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::DMAGetInfo(unsigned long *)
 * Address: 00058198
 */
TCircleBuf::DMAGetInfo(unsigned long *) {
    /*
         58198:	e1a0c00d 	mov	ip, sp
         5819c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         581a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         581a4:	e1a04000 	mov	r4, r0
         581a8:	e3310000 	teq	r1, #0	; 0x0
         581ac:	e5905008 	ldr	r5, [r0, #8]	; fField8
         581b0:	15815000 	strne	r5, [r1]
         581b4:	e594001c 	ldr	r0, [r4, #28]	; fField28
         581b8:	e3300000 	teq	r0, #0	; 0x0
         581bc:	e594600c 	ldr	r6, [r4, #12]	; fField12
         581c0:	0a00000c 	beq	581f8 <TCircleBuf::DMAGetInfo(unsigned long *)+0x60>
         581c4:	e1a00004 	mov	r0, r4
         581c8:	eb00008f 	bl	5840c <TCircleBuf::PeekNextEOMIndex(void)>
         581cc:	e3700001 	cmn	r0, #1	; 0x1
         581d0:	0a000008 	beq	581f8 <TCircleBuf::DMAGetInfo(unsigned long *)+0x60>
         581d4:	e0462005 	sub	r2, r6, r5
         581d8:	e1560005 	cmp	r6, r5
         581dc:	e5943000 	ldr	r3, [r4]
         581e0:	30822003 	addcc	r2, r2, r3
         581e4:	e0401005 	sub	r1, r0, r5
         581e8:	e1500005 	cmp	r0, r5
         581ec:	30811003 	addcc	r1, r1, r3
         581f0:	e1510002 	cmp	r1, r2
         581f4:	91a06000 	movls	r6, r0
         581f8:	e1a00006 	mov	r0, r6
         581fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::DMAGetUpdate(unsigned long)
 * Address: 00058200
 */
TCircleBuf::DMAGetUpdate(unsigned long) {
    /*
         58200:	e1a0c00d 	mov	ip, sp
         58204:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         58208:	e24cb004 	sub	fp, ip, #4	; 0x4
         5820c:	e1a04000 	mov	r4, r0
         58210:	e1a05001 	mov	r5, r1
         58214:	e590001c 	ldr	r0, [r0, #28]	; fField28
         58218:	e3300000 	teq	r0, #0	; 0x0
         5821c:	0a000008 	beq	58244 <TCircleBuf::DMAGetUpdate(unsigned long)+0x44>
         58220:	e1a00004 	mov	r0, r4
         58224:	eb000078 	bl	5840c <TCircleBuf::PeekNextEOMIndex(void)>
         58228:	e1300005 	teq	r0, r5
         5822c:	1a000004 	bne	58244 <TCircleBuf::DMAGetUpdate(unsigned long)+0x44>
         58230:	e24dd004 	sub	sp, sp, #4	; 0x4
         58234:	e1a0100d 	mov	r1, sp
         58238:	e1a00004 	mov	r0, r4
         5823c:	eb6827ca 	bl	1a6216c <TCircleBuf::$GetEOMMark(unsigned long *)>
         58240:	e28dd004 	add	sp, sp, #4	; 0x4
         58244:	e3a00000 	mov	r0, #0	; 0x0
         58248:	e5a45008 	str	r5, [r4, #8]!	; fField8
         5824c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::DMAPutInfo(unsigned long *, unsigned long *)
 * Address: 00058250
 */
TCircleBuf::DMAPutInfo(unsigned long *, unsigned long *) {
    /*
         58250:	e3310000 	teq	r1, #0	; 0x0
         58254:	1590300c 	ldrne	r3, [r0, #12]	; fField12
         58258:	15813000 	strne	r3, [r1]
         5825c:	e3320000 	teq	r2, #0	; 0x0
         58260:	15901010 	ldrne	r1, [r0, #16]	; fField16
         58264:	15821000 	strne	r1, [r2]
         58268:	e5900008 	ldr	r0, [r0, #8]	; fField8
         5826c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::DMAPutUpdate(unsigned long, unsigned char, unsigned long)
 * Address: 00058270
 */
TCircleBuf::DMAPutUpdate(unsigned long, unsigned char, unsigned long) {
    /*
         58270:	e1a0c00d 	mov	ip, sp
         58274:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         58278:	e24cb004 	sub	fp, ip, #4	; 0x4
         5827c:	e31200ff 	tst	r2, #255	; 0xff
         58280:	e3a02000 	mov	r2, #0	; 0x0
         58284:	e5801010 	str	r1, [r0, #16]	; fField16
         58288:	0a000002 	beq	58298 <TCircleBuf::DMAPutUpdate(unsigned long, unsigned char, unsigned long)+0x28>
         5828c:	e1a01003 	mov	r1, r3
         58290:	eb6ebc3c 	bl	1c07388 <TCircleBuf::$PutNextEOM(unsigned long)>
         58294:	e1a02000 	mov	r2, r0
         58298:	e1a00002 	mov	r0, r2
         5829c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::UpdateStart(unsigned long)
 * Address: 000582a0
 */
TCircleBuf::UpdateStart(unsigned long) {
    /*
         582a0:	e5902008 	ldr	r2, [r0, #8]	; fField8
         582a4:	e0821001 	add	r1, r2, r1
         582a8:	e5902000 	ldr	r2, [r0]
         582ac:	e1510002 	cmp	r1, r2
         582b0:	20411002 	subcs	r1, r1, r2
         582b4:	e5a01008 	str	r1, [r0, #8]!	; fField8
         582b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::UpdateEnd(unsigned long)
 * Address: 000582bc
 */
TCircleBuf::UpdateEnd(unsigned long) {
    /*
         582bc:	e590200c 	ldr	r2, [r0, #12]	; fField12
         582c0:	e0821001 	add	r1, r2, r1
         582c4:	e5902000 	ldr	r2, [r0]
         582c8:	e1510002 	cmp	r1, r2
         582cc:	20411002 	subcs	r1, r1, r2
         582d0:	e5a0100c 	str	r1, [r0, #12]!	; fField12
         582d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::Deallocate(void)
 * Address: 000582d8
 */
TCircleBuf::Deallocate(void) {
    /*
         582d8:	e1a0c00d 	mov	ip, sp
         582dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         582e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         582e4:	e1a04000 	mov	r4, r0
         582e8:	e5900004 	ldr	r0, [r0, #4]	; TCircleBuf
         582ec:	e3300000 	teq	r0, #0	; 0x0
         582f0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         582f4:	e5d41014 	ldrb	r1, [r4, #20]	; fField20
         582f8:	e3310002 	teq	r1, #2	; 0x2
         582fc:	1a000001 	bne	58308 <TCircleBuf::Deallocate(void)+0x30>
         58300:	eb6e2369 	bl	1be10ac <$DisposeWiredPtr>
         58304:	ea000003 	b	58318 <TCircleBuf::Deallocate(void)+0x40>
         58308:	e3310001 	teq	r1, #1	; 0x1
         5830c:	0b6e2ba5 	bleq	1be31a8 <$UnlockPtr>
         58310:	e5940004 	ldr	r0, [r4, #4]	; TCircleBuf
         58314:	eb6e2366 	bl	1be10b4 <$DisposPtr>
         58318:	e3a00000 	mov	r0, #0	; 0x0
         5831c:	e5840004 	str	r0, [r4, #4]	; TCircleBuf
         58320:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         58324:	e3100002 	tst	r0, #2	; 0x2
         58328:	12841028 	addne	r1, r4, #40	; 0x28
         5832c:	11a00004 	movne	r0, r4
         58330:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         58334:	1a6e16d9 	bne	1bddea0 <$UnlockHeapRange>
         58338:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::GetAlignLong(void)
 * Address: 0005833c
 */
TCircleBuf::GetAlignLong(void) {
    /*
         5833c:	e5901008 	ldr	r1, [r0, #8]	; fField8
         58340:	e2111003 	ands	r1, r1, #3	; 0x3
         58344:	12611004 	rsbne	r1, r1, #4	; 0x4
         58348:	1a670ea5 	bne	1a1bde4 <TCircleBuf::$UpdateStart(unsigned long)>
         5834c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::PutAlignLong(void)
 * Address: 00058350
 */
TCircleBuf::PutAlignLong(void) {
    /*
         58350:	e590100c 	ldr	r1, [r0, #12]	; fField12
         58354:	e2111003 	ands	r1, r1, #3	; 0x3
         58358:	12611004 	rsbne	r1, r1, #4	; 0x4
         5835c:	1a670e9f 	bne	1a1bde0 <TCircleBuf::$UpdateEnd(unsigned long)>
         58360:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::GetEOMMark(unsigned long *)
 * Address: 00058364
 */
TCircleBuf::GetEOMMark(unsigned long *) {
    /*
         58364:	e92d4000 	stmdb	sp!, {lr}
         58368:	e1a02000 	mov	r2, r0
         5836c:	e590c01c 	ldr	ip, [r0, #28]	; fField28
         58370:	e3e00000 	mvn	r0, #0	; 0x0
         58374:	e33c0000 	teq	ip, #0	; 0x0
         58378:	1282e020 	addne	lr, r2, #32	; 0x20
         5837c:	189e4008 	ldmneia	lr, {r3, lr}
         58380:	113e0003 	teqne	lr, r3
         58384:	08bd8000 	ldmeqia	sp!, {pc}
         58388:	e3310000 	teq	r1, #0	; 0x0
         5838c:	108cc183 	addne	ip, ip, r3, lsl #3
         58390:	159cc004 	ldrne	ip, [ip, #4]	; TCircleBuf
         58394:	1581c000 	strne	ip, [r1]
         58398:	e592101c 	ldr	r1, [r2, #28]	; fField28
         5839c:	e791c183 	ldr	ip, [r1, r3, lsl #3]
         583a0:	e7810183 	str	r0, [r1, r3, lsl #3]
         583a4:	e2830001 	add	r0, r3, #1	; 0x1
         583a8:	e5921018 	ldr	r1, [r2, #24]	; fField24
         583ac:	e1310000 	teq	r1, r0
         583b0:	03a00000 	moveq	r0, #0	; 0x0
         583b4:	e5a20020 	str	r0, [r2, #32]!	; fField32
         583b8:	e1a0000c 	mov	r0, ip
         583bc:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TCircleBuf::PutEOMMark(unsigned long, unsigned long)
 * Address: 000583c0
 */
TCircleBuf::PutEOMMark(unsigned long, unsigned long) {
    /*
         583c0:	e92d4010 	stmdb	sp!, {r4, lr}
         583c4:	e3a0e004 	mov	lr, #4	; 0x4
         583c8:	e590c024 	ldr	ip, [r0, #36]	; fField36
         583cc:	e28c3001 	add	r3, ip, #1	; 0x1
         583d0:	e5904018 	ldr	r4, [r0, #24]	; fField24
         583d4:	e1340003 	teq	r4, r3
         583d8:	03a03000 	moveq	r3, #0	; 0x0
         583dc:	e5904020 	ldr	r4, [r0, #32]	; fField32
         583e0:	e1340003 	teq	r4, r3
         583e4:	0a000006 	beq	58404 <TCircleBuf::PutEOMMark(unsigned long, unsigned long)+0x44>
         583e8:	e590e01c 	ldr	lr, [r0, #28]	; fField28
         583ec:	e78e118c 	str	r1, [lr, ip, lsl #3]
         583f0:	e590101c 	ldr	r1, [r0, #28]	; fField28
         583f4:	e081118c 	add	r1, r1, ip, lsl #3
         583f8:	e5a12004 	str	r2, [r1, #4]!	; TCircleBuf
         583fc:	e3a0e000 	mov	lr, #0	; 0x0
         58400:	e5a03024 	str	r3, [r0, #36]!	; fField36
         58404:	e1a0000e 	mov	r0, lr
         58408:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TCircleBuf::PeekNextEOMIndex(void)
 * Address: 0005840c
 */
TCircleBuf::PeekNextEOMIndex(void) {
    /*
         5840c:	e590101c 	ldr	r1, [r0, #28]	; fField28
         58410:	e3310000 	teq	r1, #0	; 0x0
         58414:	03e00000 	mvneq	r0, #0	; 0x0
         58418:	01a0f00e 	moveq	pc, lr
         5841c:	e5900020 	ldr	r0, [r0, #32]	; fField32
         58420:	e7910180 	ldr	r0, [r1, r0, lsl #3]
         58424:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::PeekNextEOMIndex(unsigned long *)
 * Address: 00058428
 */
TCircleBuf::PeekNextEOMIndex(unsigned long *) {
    /*
         58428:	e590201c 	ldr	r2, [r0, #28]	; fField28
         5842c:	e3320000 	teq	r2, #0	; 0x0
         58430:	03e00000 	mvneq	r0, #0	; 0x0
         58434:	01a0f00e 	moveq	pc, lr
         58438:	e5903020 	ldr	r3, [r0, #32]	; fField32
         5843c:	e0822183 	add	r2, r2, r3, lsl #3
         58440:	e5922004 	ldr	r2, [r2, #4]	; TCircleBuf
         58444:	e5812000 	str	r2, [r1]
         58448:	e590101c 	ldr	r1, [r0, #28]	; fField28
         5844c:	e5900020 	ldr	r0, [r0, #32]	; fField32
         58450:	e7910180 	ldr	r0, [r1, r0, lsl #3]
         58454:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::BufferSpace(void)
 * Address: 00058458
 */
TCircleBuf::BufferSpace(void) {
    /*
         58458:	e590200c 	ldr	r2, [r0, #12]	; fField12
         5845c:	e5903008 	ldr	r3, [r0, #8]	; fField8
         58460:	e0431002 	sub	r1, r3, r2
         58464:	e2411001 	sub	r1, r1, #1	; 0x1
         58468:	e1530002 	cmp	r3, r2
         5846c:	95900000 	ldrls	r0, [r0]
         58470:	90811000 	addls	r1, r1, r0
         58474:	e1a00001 	mov	r0, r1
         58478:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::MarkerSpace(void)
 * Address: 0005847c
 */
TCircleBuf::MarkerSpace(void) {
    /*
         5847c:	e590101c 	ldr	r1, [r0, #28]	; fField28
         58480:	e3310000 	teq	r1, #0	; 0x0
         58484:	03a00000 	moveq	r0, #0	; 0x0
         58488:	01a0f00e 	moveq	pc, lr
         5848c:	e5902024 	ldr	r2, [r0, #36]	; fField36
         58490:	e5903020 	ldr	r3, [r0, #32]	; fField32
         58494:	e0431002 	sub	r1, r3, r2
         58498:	e2411001 	sub	r1, r1, #1	; 0x1
         5849c:	e1530002 	cmp	r3, r2
         584a0:	95900018 	ldrls	r0, [r0, #24]	; fField24
         584a4:	90801001 	addls	r1, r0, r1
         584a8:	e1a00001 	mov	r0, r1
         584ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::MarkerCount(void)
 * Address: 000584b0
 */
TCircleBuf::MarkerCount(void) {
    /*
         584b0:	e2803020 	add	r3, r0, #32	; 0x20
         584b4:	e893000c 	ldmia	r3, {r2, r3}
         584b8:	e0431002 	sub	r1, r3, r2
         584bc:	e1530002 	cmp	r3, r2
         584c0:	35900018 	ldrcc	r0, [r0, #24]	; fField24
         584c4:	30801001 	addcc	r1, r0, r1
         584c8:	e1a00001 	mov	r0, r1
         584cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCircleBuf::BufferSpace(unsigned long)
 * Address: 000584d0
 */
TCircleBuf::BufferSpace(unsigned long) {
    /*
         584d0:	e1a0c00d 	mov	ip, sp
         584d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         584d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         584dc:	e1a04000 	mov	r4, r0
         584e0:	e1a05001 	mov	r5, r1
         584e4:	e590001c 	ldr	r0, [r0, #28]	; fField28
         584e8:	e3300000 	teq	r0, #0	; 0x0
         584ec:	0a000004 	beq	58504 <TCircleBuf::BufferSpace(unsigned long)+0x34>
         584f0:	e1a00004 	mov	r0, r4
         584f4:	eb6eb79e 	bl	1c06374 <TCircleBuf::$MarkerSpace(void)>
         584f8:	e3300000 	teq	r0, #0	; 0x0
         584fc:	03a00004 	moveq	r0, #4	; 0x4
         58500:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         58504:	e1a00004 	mov	r0, r4
         58508:	eb6eb789 	bl	1c06334 <TCircleBuf::$BufferSpace(void)>
         5850c:	e1500005 	cmp	r0, r5
         58510:	23a00000 	movcs	r0, #0	; 0x0
         58514:	33a00003 	movcc	r0, #3	; 0x3
         58518:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCircleBuf::BufferCount(void)
 * Address: 0005851c
 */
TCircleBuf::BufferCount(void) {
    /*
         5851c:	e2803008 	add	r3, r0, #8	; 0x8
         58520:	e893000c 	ldmia	r3, {r2, r3}
         58524:	e0431002 	sub	r1, r3, r2
         58528:	e1530002 	cmp	r3, r2
         5852c:	35900000 	ldrcc	r0, [r0]
         58530:	30811000 	addcc	r1, r1, r0
         58534:	e1a00001 	mov	r0, r1
         58538:	e1a0f00e 	mov	pc, lr
    */
}

