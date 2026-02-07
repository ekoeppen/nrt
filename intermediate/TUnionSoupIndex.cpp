#include "include/TUnionSoupIndex.h"

/**
 * Symbol: TUnionSoupIndex::__ct(long, UnionIndexData *)
 * Address: 002e87d8
 */
TUnionSoupIndex::TUnionSoupIndex(long, UnionIndexData *) {
    /*
        2e87d8:	e1a0c00d 	mov	ip, sp
        2e87dc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2e87e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e87e4:	e1b04000 	movs	r4, r0
        2e87e8:	e1a06001 	mov	r6, r1
        2e87ec:	e1a05002 	mov	r5, r2
        2e87f0:	1a000003 	bne	2e8804 <TUnionSoupIndex::__ct(long, UnionIndexData *)+0x2c>
        2e87f4:	e3a00014 	mov	r0, #20	; 0x14
        2e87f8:	eb6397ce 	bl	1bce738 <$__nw(unsigned int)>
        2e87fc:	e1b04000 	movs	r4, r0
        2e8800:	0a000006 	beq	2e8820 <TUnionSoupIndex::__ct(long, UnionIndexData *)+0x48>
        2e8804:	e1a00004 	mov	r0, r4
        2e8808:	ebffffe5 	bl	2e87a4 <TAbstractSoupIndex::__ct(void)>
        2e880c:	e59f0014 	ldr	r0, [pc, #14]	; 2e8828 <TUnionSoupIndex::__ct(long, UnionIndexData *)+0x50>
        2e8810:	e8840041 	stmia	r4, {r0, r6}
        2e8814:	e3a00000 	mov	r0, #0	; 0x0
        2e8818:	e584000c 	str	r0, [r4, #12]	; fField12
        2e881c:	e5845008 	str	r5, [r4, #8]	; fField8
        2e8820:	e1a00004 	mov	r0, r4
        2e8824:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2e8828:	0001e1d0 	ldreqd	lr, [r1], -r0
    */
}

/**
 * Symbol: TUnionSoupIndex::__dt(void)
 * Address: 002e882c
 */
TUnionSoupIndex::~TUnionSoupIndex(void) {
    /*
        2e882c:	e1a0c00d 	mov	ip, sp
        2e8830:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e8834:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8838:	e1a04000 	mov	r4, r0
        2e883c:	e1a05001 	mov	r5, r1
        2e8840:	e59f0024 	ldr	r0, [pc, #24]	; 2e886c <TUnionSoupIndex::__dt(void)+0x40>
        2e8844:	e5840000 	str	r0, [r4]
        2e8848:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e884c:	e59f201c 	ldr	r2, [pc, #1c]	; 2e8870 <TUnionSoupIndex::__dt(void)+0x44>
        2e8850:	e3a01084 	mov	r1, #132	; 0x84
        2e8854:	eb5c6e86 	bl	1a04274 <$__dl_v(void *, unsigned int, void (*)(void *, int))>
        2e8858:	e3150001 	tst	r5, #1	; 0x1
        2e885c:	11a00004 	movne	r0, r4
        2e8860:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2e8864:	1a63939d 	bne	1bcd6e0 <$__dl(void *)>
        2e8868:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2e886c:	0001e1d0 	ldreqd	lr, [r1], -r0
        2e8870:	002e8798 	mlaeq	lr, r8, r7, r8
    */
}

/**
 * Symbol: TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)
 * Address: 002e8874
 */
TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char) {
    /*
        2e8874:	e1a0c00d 	mov	ip, sp
        2e8878:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e887c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e8880:	e24cb014 	sub	fp, ip, #20	; 0x14
        2e8884:	e1a04000 	mov	r4, r0
        2e8888:	e1a05002 	mov	r5, r2
        2e888c:	e59b0014 	ldr	r0, [fp, #20]
        2e8890:	e20090ff 	and	r9, r0, #255	; 0xff
        2e8894:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8898:	e3300001 	teq	r0, #1	; 0x1
        2e889c:	1a000009 	bne	2e88c8 <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x54>
        2e88a0:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2e88a4:	e1a03009 	mov	r3, r9
        2e88a8:	e590c000 	ldr	ip, [r0]
        2e88ac:	e92d0008 	stmdb	sp!, {r3}
        2e88b0:	e1a02005 	mov	r2, r5
        2e88b4:	e1a0000c 	mov	r0, ip
        2e88b8:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        2e88bc:	e1a0e00f 	mov	lr, pc
        2e88c0:	e59cf000 	ldr	pc, [ip]
        2e88c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e88c8:	e24dd050 	sub	sp, sp, #80	; 0x50
        2e88cc:	e3a00000 	mov	r0, #0	; 0x0
        2e88d0:	e5cd0001 	strb	r0, [sp, #1]
        2e88d4:	e4cd0050 	strb	r0, [sp], #80
        2e88d8:	e2816050 	add	r6, r1, #80	; 0x50
        2e88dc:	e3a0c006 	mov	ip, #6	; 0x6
        2e88e0:	e936000e 	ldmdb	r6!, {r1, r2, r3}
        2e88e4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        2e88e8:	e25cc001 	subs	ip, ip, #1	; 0x1
        2e88ec:	1afffffb 	bne	2e88e0 <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x6c>
        2e88f0:	e936000c 	ldmdb	r6!, {r2, r3}
        2e88f4:	e92d000c 	stmdb	sp!, {r2, r3}
        2e88f8:	e24dd0a4 	sub	sp, sp, #164	; 0xa4
        2e88fc:	e5cd0055 	strb	r0, [sp, #85]
        2e8900:	e5cd0054 	strb	r0, [sp, #84]
        2e8904:	e5cd0005 	strb	r0, [sp, #5]
        2e8908:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2e890c:	e3a00000 	mov	r0, #0	; 0x0
        2e8910:	e3a08003 	mov	r8, #3	; 0x3
        2e8914:	e3a07000 	mov	r7, #0	; 0x0
        2e8918:	e58d0000 	str	r0, [sp]
        2e891c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8920:	e3500000 	cmp	r0, #0	; 0x0
        2e8924:	da00003c 	ble	2e8a1c <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x1a8>
        2e8928:	e0871287 	add	r1, r7, r7, lsl #5
        2e892c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e8930:	e7906101 	ldr	r6, [r0, r1, lsl #2]
        2e8934:	e1a03009 	mov	r3, r9
        2e8938:	e92d0008 	stmdb	sp!, {r3}
        2e893c:	e28d3008 	add	r3, sp, #8	; 0x8
        2e8940:	e28d2058 	add	r2, sp, #88	; 0x58
        2e8944:	e28d10a8 	add	r1, sp, #168	; 0xa8
        2e8948:	e1a00006 	mov	r0, r6
        2e894c:	e1a0e00f 	mov	lr, pc
        2e8950:	e596f000 	ldr	pc, [r6]
        2e8954:	e28dd004 	add	sp, sp, #4	; 0x4
        2e8958:	e1b0a000 	movs	sl, r0
        2e895c:	1a000008 	bne	2e8984 <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x110>
        2e8960:	e5960040 	ldr	r0, [r6, #64]
        2e8964:	e3300000 	teq	r0, #0	; 0x0
        2e8968:	0a000001 	beq	2e8974 <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x100>
        2e896c:	e3390000 	teq	r9, #0	; 0x0
        2e8970:	0a000005 	beq	2e898c <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x118>
        2e8974:	e3380002 	teq	r8, #2	; 0x2
        2e8978:	13380003 	teqne	r8, #3	; 0x3
        2e897c:	1a000022 	bne	2e8a0c <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x198>
        2e8980:	ea000001 	b	2e898c <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x118>
        2e8984:	e33a0002 	teq	sl, #2	; 0x2
        2e8988:	1a00001f 	bne	2e8a0c <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x198>
        2e898c:	e59d0000 	ldr	r0, [sp]
        2e8990:	e3300000 	teq	r0, #0	; 0x0
        2e8994:	0a000005 	beq	2e89b0 <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x13c>
        2e8998:	e1a02005 	mov	r2, r5
        2e899c:	e28d1054 	add	r1, sp, #84	; 0x54
        2e89a0:	e1a00006 	mov	r0, r6
        2e89a4:	eb5d86e5 	bl	1a4a540 <TSoupIndex::$CompareKeys(SKey const &, SKey const &)>
        2e89a8:	e3500000 	cmp	r0, #0	; 0x0
        2e89ac:	aa000016 	bge	2e8a0c <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x198>
        2e89b0:	e1a0800a 	mov	r8, sl
        2e89b4:	e28d1054 	add	r1, sp, #84	; 0x54
        2e89b8:	e1a00006 	mov	r0, r6
        2e89bc:	eb5d61b5 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2e89c0:	e1a02000 	mov	r2, r0
        2e89c4:	e28d1054 	add	r1, sp, #84	; 0x54
        2e89c8:	e1a00005 	mov	r0, r5
        2e89cc:	eb63301f 	bl	1bb4a50 <$memcpy>
        2e89d0:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        2e89d4:	e3300000 	teq	r0, #0	; 0x0
        2e89d8:	0a000006 	beq	2e89f8 <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0x184>
        2e89dc:	e28d1004 	add	r1, sp, #4	; 0x4
        2e89e0:	e1a00006 	mov	r0, r6
        2e89e4:	eb5d61aa 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2e89e8:	e1a02000 	mov	r2, r0
        2e89ec:	e28d1004 	add	r1, sp, #4	; 0x4
        2e89f0:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        2e89f4:	eb633015 	bl	1bb4a50 <$memcpy>
        2e89f8:	e1a01007 	mov	r1, r7
        2e89fc:	e1a00004 	mov	r0, r4
        2e8a00:	eb5d8aea 	bl	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2e8a04:	e3a00001 	mov	r0, #1	; 0x1
        2e8a08:	e58d0000 	str	r0, [sp]
        2e8a0c:	e2877001 	add	r7, r7, #1	; 0x1
        2e8a10:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8a14:	e1500007 	cmp	r0, r7
        2e8a18:	caffffc2 	bgt	2e8928 <TUnionSoupIndex::Find(SKey *, SKey *, SKey *, unsigned char)+0xb4>
        2e8a1c:	e1a00008 	mov	r0, r8
        2e8a20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TUnionSoupIndex::First(SKey *, SKey *)
 * Address: 002e8a24
 */
TUnionSoupIndex::First(SKey *, SKey *) {
    /*
        2e8a24:	e1a0c00d 	mov	ip, sp
        2e8a28:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e8a2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8a30:	e1a04000 	mov	r4, r0
        2e8a34:	e1a05001 	mov	r5, r1
        2e8a38:	e1a06002 	mov	r6, r2
        2e8a3c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e8a40:	e3300001 	teq	r0, #1	; 0x1
        2e8a44:	1a000007 	bne	2e8a68 <TUnionSoupIndex::First(SKey *, SKey *)+0x44>
        2e8a48:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2e8a4c:	e1a02006 	mov	r2, r6
        2e8a50:	e1a01005 	mov	r1, r5
        2e8a54:	e5903000 	ldr	r3, [r0]
        2e8a58:	e1a00003 	mov	r0, r3
        2e8a5c:	e5933000 	ldr	r3, [r3]
        2e8a60:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2e8a64:	e283f004 	add	pc, r3, #4	; 0x4
        2e8a68:	e24dd0a0 	sub	sp, sp, #160	; 0xa0
        2e8a6c:	e3a00000 	mov	r0, #0	; 0x0
        2e8a70:	e5cd0051 	strb	r0, [sp, #81]
        2e8a74:	e5cd0050 	strb	r0, [sp, #80]
        2e8a78:	e5cd0001 	strb	r0, [sp, #1]
        2e8a7c:	e5cd0000 	strb	r0, [sp]
        2e8a80:	e3a0a000 	mov	sl, #0	; 0x0
        2e8a84:	e3a09002 	mov	r9, #2	; 0x2
        2e8a88:	e3a07000 	mov	r7, #0	; 0x0
        2e8a8c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8a90:	e3500000 	cmp	r0, #0	; 0x0
        2e8a94:	da000029 	ble	2e8b40 <TUnionSoupIndex::First(SKey *, SKey *)+0x11c>
        2e8a98:	e0870287 	add	r0, r7, r7, lsl #5
        2e8a9c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2e8aa0:	e7918100 	ldr	r8, [r1, r0, lsl #2]
        2e8aa4:	e1a0200d 	mov	r2, sp
        2e8aa8:	e28d1050 	add	r1, sp, #80	; 0x50
        2e8aac:	e1a00008 	mov	r0, r8
        2e8ab0:	e5983000 	ldr	r3, [r8]
        2e8ab4:	e1a0e00f 	mov	lr, pc
        2e8ab8:	e283f004 	add	pc, r3, #4	; 0x4
        2e8abc:	e3300000 	teq	r0, #0	; 0x0
        2e8ac0:	1a00001a 	bne	2e8b30 <TUnionSoupIndex::First(SKey *, SKey *)+0x10c>
        2e8ac4:	e1a09000 	mov	r9, r0
        2e8ac8:	e33a0000 	teq	sl, #0	; 0x0
        2e8acc:	0a000005 	beq	2e8ae8 <TUnionSoupIndex::First(SKey *, SKey *)+0xc4>
        2e8ad0:	e1a02005 	mov	r2, r5
        2e8ad4:	e28d1050 	add	r1, sp, #80	; 0x50
        2e8ad8:	e1a00008 	mov	r0, r8
        2e8adc:	eb5d8697 	bl	1a4a540 <TSoupIndex::$CompareKeys(SKey const &, SKey const &)>
        2e8ae0:	e3500000 	cmp	r0, #0	; 0x0
        2e8ae4:	aa000011 	bge	2e8b30 <TUnionSoupIndex::First(SKey *, SKey *)+0x10c>
        2e8ae8:	e28d1050 	add	r1, sp, #80	; 0x50
        2e8aec:	e1a00008 	mov	r0, r8
        2e8af0:	eb5d6168 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2e8af4:	e1a02000 	mov	r2, r0
        2e8af8:	e28d1050 	add	r1, sp, #80	; 0x50
        2e8afc:	e1a00005 	mov	r0, r5
        2e8b00:	eb632fd2 	bl	1bb4a50 <$memcpy>
        2e8b04:	e1a0100d 	mov	r1, sp
        2e8b08:	e1a00008 	mov	r0, r8
        2e8b0c:	eb5d6160 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2e8b10:	e1a02000 	mov	r2, r0
        2e8b14:	e1a0100d 	mov	r1, sp
        2e8b18:	e1a00006 	mov	r0, r6
        2e8b1c:	eb632fcb 	bl	1bb4a50 <$memcpy>
        2e8b20:	e1a01007 	mov	r1, r7
        2e8b24:	e1a00004 	mov	r0, r4
        2e8b28:	eb5d8aa0 	bl	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2e8b2c:	e3a0a001 	mov	sl, #1	; 0x1
        2e8b30:	e2877001 	add	r7, r7, #1	; 0x1
        2e8b34:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8b38:	e1500007 	cmp	r0, r7
        2e8b3c:	caffffd5 	bgt	2e8a98 <TUnionSoupIndex::First(SKey *, SKey *)+0x74>
        2e8b40:	e1a00009 	mov	r0, r9
        2e8b44:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TUnionSoupIndex::Last(SKey *, SKey *)
 * Address: 002e8b48
 */
TUnionSoupIndex::Last(SKey *, SKey *) {
    /*
        2e8b48:	e1a0c00d 	mov	ip, sp
        2e8b4c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e8b50:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8b54:	e1a04000 	mov	r4, r0
        2e8b58:	e1a05001 	mov	r5, r1
        2e8b5c:	e1a06002 	mov	r6, r2
        2e8b60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e8b64:	e3300001 	teq	r0, #1	; 0x1
        2e8b68:	1a000007 	bne	2e8b8c <TUnionSoupIndex::Last(SKey *, SKey *)+0x44>
        2e8b6c:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2e8b70:	e1a02006 	mov	r2, r6
        2e8b74:	e1a01005 	mov	r1, r5
        2e8b78:	e5903000 	ldr	r3, [r0]
        2e8b7c:	e1a00003 	mov	r0, r3
        2e8b80:	e5933000 	ldr	r3, [r3]
        2e8b84:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2e8b88:	e283f008 	add	pc, r3, #8	; 0x8
        2e8b8c:	e24dd0a0 	sub	sp, sp, #160	; 0xa0
        2e8b90:	e3a00000 	mov	r0, #0	; 0x0
        2e8b94:	e5cd0051 	strb	r0, [sp, #81]
        2e8b98:	e5cd0050 	strb	r0, [sp, #80]
        2e8b9c:	e5cd0001 	strb	r0, [sp, #1]
        2e8ba0:	e5cd0000 	strb	r0, [sp]
        2e8ba4:	e3a0a000 	mov	sl, #0	; 0x0
        2e8ba8:	e3a09002 	mov	r9, #2	; 0x2
        2e8bac:	e3a07000 	mov	r7, #0	; 0x0
        2e8bb0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8bb4:	e3500000 	cmp	r0, #0	; 0x0
        2e8bb8:	da000029 	ble	2e8c64 <TUnionSoupIndex::Last(SKey *, SKey *)+0x11c>
        2e8bbc:	e0870287 	add	r0, r7, r7, lsl #5
        2e8bc0:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2e8bc4:	e7918100 	ldr	r8, [r1, r0, lsl #2]
        2e8bc8:	e1a0200d 	mov	r2, sp
        2e8bcc:	e28d1050 	add	r1, sp, #80	; 0x50
        2e8bd0:	e1a00008 	mov	r0, r8
        2e8bd4:	e5983000 	ldr	r3, [r8]
        2e8bd8:	e1a0e00f 	mov	lr, pc
        2e8bdc:	e283f008 	add	pc, r3, #8	; 0x8
        2e8be0:	e3300000 	teq	r0, #0	; 0x0
        2e8be4:	1a00001a 	bne	2e8c54 <TUnionSoupIndex::Last(SKey *, SKey *)+0x10c>
        2e8be8:	e1a09000 	mov	r9, r0
        2e8bec:	e33a0000 	teq	sl, #0	; 0x0
        2e8bf0:	0a000005 	beq	2e8c0c <TUnionSoupIndex::Last(SKey *, SKey *)+0xc4>
        2e8bf4:	e1a02005 	mov	r2, r5
        2e8bf8:	e28d1050 	add	r1, sp, #80	; 0x50
        2e8bfc:	e1a00008 	mov	r0, r8
        2e8c00:	eb5d864e 	bl	1a4a540 <TSoupIndex::$CompareKeys(SKey const &, SKey const &)>
        2e8c04:	e3500000 	cmp	r0, #0	; 0x0
        2e8c08:	ba000011 	blt	2e8c54 <TUnionSoupIndex::Last(SKey *, SKey *)+0x10c>
        2e8c0c:	e28d1050 	add	r1, sp, #80	; 0x50
        2e8c10:	e1a00008 	mov	r0, r8
        2e8c14:	eb5d611f 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2e8c18:	e1a02000 	mov	r2, r0
        2e8c1c:	e28d1050 	add	r1, sp, #80	; 0x50
        2e8c20:	e1a00005 	mov	r0, r5
        2e8c24:	eb632f89 	bl	1bb4a50 <$memcpy>
        2e8c28:	e1a0100d 	mov	r1, sp
        2e8c2c:	e1a00008 	mov	r0, r8
        2e8c30:	eb5d6117 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2e8c34:	e1a02000 	mov	r2, r0
        2e8c38:	e1a0100d 	mov	r1, sp
        2e8c3c:	e1a00006 	mov	r0, r6
        2e8c40:	eb632f82 	bl	1bb4a50 <$memcpy>
        2e8c44:	e1a01007 	mov	r1, r7
        2e8c48:	e1a00004 	mov	r0, r4
        2e8c4c:	eb5d8a57 	bl	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2e8c50:	e3a0a001 	mov	sl, #1	; 0x1
        2e8c54:	e2877001 	add	r7, r7, #1	; 0x1
        2e8c58:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8c5c:	e1500007 	cmp	r0, r7
        2e8c60:	caffffd5 	bgt	2e8bbc <TUnionSoupIndex::Last(SKey *, SKey *)+0x74>
        2e8c64:	e1a00009 	mov	r0, r9
        2e8c68:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TUnionSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *)
 * Address: 002e8c6c
 */
TUnionSoupIndex::Next(SKey *, SKey *, int, SKey *, SKey *) {
    /*
        2e8c6c:	e1a0c00d 	mov	ip, sp
        2e8c70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e8c74:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8c78:	e1a04000 	mov	r4, r0
        2e8c7c:	e1a0e001 	mov	lr, r1
        2e8c80:	e1a0c002 	mov	ip, r2
        2e8c84:	e3a00000 	mov	r0, #0	; 0x0
        2e8c88:	e99b0006 	ldmib	fp, {r1, r2}
        2e8c8c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e8c90:	e3a03000 	mov	r3, #0	; 0x0
        2e8c94:	e92d0008 	stmdb	sp!, {r3}
        2e8c98:	e1a0300c 	mov	r3, ip
        2e8c9c:	e1a0200e 	mov	r2, lr
        2e8ca0:	e1a00004 	mov	r0, r4
        2e8ca4:	e3a01001 	mov	r1, #1	; 0x1
        2e8ca8:	eb5d8a3d 	bl	1a4b5a4 <TUnionSoupIndex::$Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)>
        2e8cac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnionSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *)
 * Address: 002e8cb0
 */
TUnionSoupIndex::Prior(SKey *, SKey *, unsigned char, SKey *, SKey *) {
    /*
        2e8cb0:	e1a0c00d 	mov	ip, sp
        2e8cb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e8cb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8cbc:	e1a0e000 	mov	lr, r0
        2e8cc0:	e1a0c001 	mov	ip, r1
        2e8cc4:	e1a04002 	mov	r4, r2
        2e8cc8:	e21330ff 	ands	r3, r3, #255	; 0xff
        2e8ccc:	e99b0006 	ldmib	fp, {r1, r2}
        2e8cd0:	13a03001 	movne	r3, #1	; 0x1
        2e8cd4:	e3a00000 	mov	r0, #0	; 0x0
        2e8cd8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e8cdc:	e3a03000 	mov	r3, #0	; 0x0
        2e8ce0:	e92d0008 	stmdb	sp!, {r3}
        2e8ce4:	e1a03004 	mov	r3, r4
        2e8ce8:	e1a0200c 	mov	r2, ip
        2e8cec:	e1a0000e 	mov	r0, lr
        2e8cf0:	e3a01000 	mov	r1, #0	; 0x0
        2e8cf4:	eb5d8a2a 	bl	1a4b5a4 <TUnionSoupIndex::$Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)>
        2e8cf8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)
 * Address: 002e8cfc
 */
TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char) {
    /*
        2e8cfc:	e1a0c00d 	mov	ip, sp
        2e8d00:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e8d04:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e8d08:	e24cb014 	sub	fp, ip, #20	; 0x14
        2e8d0c:	e1a04000 	mov	r4, r0
        2e8d10:	e59b0014 	ldr	r0, [fp, #20]
        2e8d14:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e8d18:	e20190ff 	and	r9, r1, #255	; 0xff
        2e8d1c:	e31000ff 	tst	r0, #255	; 0xff
        2e8d20:	0a000004 	beq	2e8d38 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x3c>
        2e8d24:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e8d28:	e2406001 	sub	r6, r0, #1	; 0x1
        2e8d2c:	e3a07000 	mov	r7, #0	; 0x0
        2e8d30:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8d34:	ea000006 	b	2e8d54 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x58>
        2e8d38:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2e8d3c:	e1a06001 	mov	r6, r1
        2e8d40:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8d44:	e2400001 	sub	r0, r0, #1	; 0x1
        2e8d48:	e0811281 	add	r1, r1, r1, lsl #5
        2e8d4c:	e5942008 	ldr	r2, [r4, #8]	; fField8
        2e8d50:	e0827101 	add	r7, r2, r1, lsl #2
        2e8d54:	e3a08000 	mov	r8, #0	; 0x0
        2e8d58:	e250a001 	subs	sl, r0, #1	; 0x1
        2e8d5c:	4a000056 	bmi	2e8ebc <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1c0>
        2e8d60:	e2866001 	add	r6, r6, #1	; 0x1
        2e8d64:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e8d68:	e1300006 	teq	r0, r6
        2e8d6c:	03a06000 	moveq	r6, #0	; 0x0
        2e8d70:	03a08001 	moveq	r8, #1	; 0x1
        2e8d74:	e0860286 	add	r0, r6, r6, lsl #5
        2e8d78:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2e8d7c:	e0815100 	add	r5, r1, r0, lsl #2
        2e8d80:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2e8d84:	e3300002 	teq	r0, #2	; 0x2
        2e8d88:	0a000049 	beq	2e8eb4 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1b8>
        2e8d8c:	e3300001 	teq	r0, #1	; 0x1
        2e8d90:	0a00002d 	beq	2e8e4c <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x150>
        2e8d94:	e595107c 	ldr	r1, [r5, #124]
        2e8d98:	e59b2010 	ldr	r2, [fp, #16]	; fField16
        2e8d9c:	e3a03000 	mov	r3, #0	; 0x0
        2e8da0:	e5950000 	ldr	r0, [r5]
        2e8da4:	eb5d5cad 	bl	1a40060 <TSoupIndex::$kfAssembleKeyField(KeyField *, void *, void *)>
        2e8da8:	e3390000 	teq	r9, #0	; 0x0
        2e8dac:	0a000014 	beq	2e8e04 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x108>
        2e8db0:	e2852008 	add	r2, r5, #8	; 0x8
        2e8db4:	e58d2000 	str	r2, [sp]
        2e8db8:	e5950000 	ldr	r0, [r5]
        2e8dbc:	e595107c 	ldr	r1, [r5, #124]
        2e8dc0:	eb5d85e8 	bl	1a4a568 <TSoupIndex::$FindAndGetState(KeyField *, IndexState *)>
        2e8dc4:	e3300000 	teq	r0, #0	; 0x0
        2e8dc8:	1a000016 	bne	2e8e28 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x12c>
        2e8dcc:	e3380000 	teq	r8, #0	; 0x0
        2e8dd0:	1a000002 	bne	2e8de0 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0xe4>
        2e8dd4:	e59b200c 	ldr	r2, [fp, #12]	; fField12
        2e8dd8:	e3320001 	teq	r2, #1	; 0x1
        2e8ddc:	1a000018 	bne	2e8e44 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x148>
        2e8de0:	e59d3000 	ldr	r3, [sp]
        2e8de4:	e92d0008 	stmdb	sp!, {r3}
        2e8de8:	e1a01009 	mov	r1, r9
        2e8dec:	e3a02001 	mov	r2, #1	; 0x1
        2e8df0:	e5950000 	ldr	r0, [r5]
        2e8df4:	e595307c 	ldr	r3, [r5, #124]
        2e8df8:	eb5d85de 	bl	1a4a578 <TSoupIndex::$MoveUsingState(unsigned char, int, KeyField *, IndexState *)>
        2e8dfc:	e28dd004 	add	sp, sp, #4	; 0x4
        2e8e00:	ea000008 	b	2e8e28 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x12c>
        2e8e04:	e3380000 	teq	r8, #0	; 0x0
        2e8e08:	159b200c 	ldrne	r2, [fp, #12]	; fField12
        2e8e0c:	13320001 	teqne	r2, #1	; 0x1
        2e8e10:	03a02001 	moveq	r2, #1	; 0x1
        2e8e14:	13a02000 	movne	r2, #0	; 0x0
        2e8e18:	e2853008 	add	r3, r5, #8	; 0x8
        2e8e1c:	e5950000 	ldr	r0, [r5]
        2e8e20:	e595107c 	ldr	r1, [r5, #124]
        2e8e24:	eb5d85d1 	bl	1a4a570 <TSoupIndex::$FindPriorAndGetState(KeyField *, unsigned char, IndexState *)>
        2e8e28:	e3300003 	teq	r0, #3	; 0x3
        2e8e2c:	03a00002 	moveq	r0, #2	; 0x2
        2e8e30:	05a50004 	streq	r0, [r5, #4]!	; fField4
        2e8e34:	0a00001e 	beq	2e8eb4 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1b8>
        2e8e38:	e3300000 	teq	r0, #0	; 0x0
        2e8e3c:	13300002 	teqne	r0, #2	; 0x2
        2e8e40:	1a000024 	bne	2e8ed8 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1dc>
        2e8e44:	e3a00001 	mov	r0, #1	; 0x1
        2e8e48:	e5850004 	str	r0, [r5, #4]	; fField4
        2e8e4c:	e3370000 	teq	r7, #0	; 0x0
        2e8e50:	0a000015 	beq	2e8eac <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1b0>
        2e8e54:	e5970004 	ldr	r0, [r7, #4]	; fField4
        2e8e58:	e3300001 	teq	r0, #1	; 0x1
        2e8e5c:	1a000012 	bne	2e8eac <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1b0>
        2e8e60:	e597007c 	ldr	r0, [r7, #124]
        2e8e64:	e2802002 	add	r2, r0, #2	; 0x2
        2e8e68:	e595007c 	ldr	r0, [r5, #124]
        2e8e6c:	e2801002 	add	r1, r0, #2	; 0x2
        2e8e70:	e5950000 	ldr	r0, [r5]
        2e8e74:	eb5d85b1 	bl	1a4a540 <TSoupIndex::$CompareKeys(SKey const &, SKey const &)>
        2e8e78:	e3390000 	teq	r9, #0	; 0x0
        2e8e7c:	0a000016 	beq	2e8edc <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1e0>
        2e8e80:	e3500000 	cmp	r0, #0	; 0x0
        2e8e84:	ba000003 	blt	2e8e98 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x19c>
        2e8e88:	1a000004 	bne	2e8ea0 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1a4>
        2e8e8c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e8e90:	e1500006 	cmp	r0, r6
        2e8e94:	da000001 	ble	2e8ea0 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1a4>
        2e8e98:	e3a00001 	mov	r0, #1	; 0x1
        2e8e9c:	ea000000 	b	2e8ea4 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1a8>
        2e8ea0:	e3a00000 	mov	r0, #0	; 0x0
        2e8ea4:	e31000ff 	tst	r0, #255	; 0xff
        2e8ea8:	0a000001 	beq	2e8eb4 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1b8>
        2e8eac:	e1a07005 	mov	r7, r5
        2e8eb0:	e584600c 	str	r6, [r4, #12]	; fField12
        2e8eb4:	e25aa001 	subs	sl, sl, #1	; 0x1
        2e8eb8:	5affffa8 	bpl	2e8d60 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x64>
        2e8ebc:	e3370000 	teq	r7, #0	; 0x0
        2e8ec0:	0a000003 	beq	2e8ed4 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1d8>
        2e8ec4:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        2e8ec8:	e3300001 	teq	r0, #1	; 0x1
        2e8ecc:	03a00000 	moveq	r0, #0	; 0x0
        2e8ed0:	0a000000 	beq	2e8ed8 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1dc>
        2e8ed4:	e3a00003 	mov	r0, #3	; 0x3
        2e8ed8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e8edc:	e3500000 	cmp	r0, #0	; 0x0
        2e8ee0:	caffffec 	bgt	2e8e98 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x19c>
        2e8ee4:	1affffed 	bne	2e8ea0 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1a4>
        2e8ee8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e8eec:	e1500006 	cmp	r0, r6
        2e8ef0:	aaffffea 	bge	2e8ea0 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x1a4>
        2e8ef4:	eaffffe7 	b	2e8e98 <TUnionSoupIndex::MoveToNextSoup(unsigned char, int, SKey *, unsigned char)+0x19c>
    */
}

/**
 * Symbol: TUnionSoupIndex::InvalidateState(void)
 * Address: 002e8ef8
 */
TUnionSoupIndex::InvalidateState(void) {
    /*
        2e8ef8:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2e8efc:	e2511001 	subs	r1, r1, #1	; 0x1
        2e8f00:	e3a02000 	mov	r2, #0	; 0x0
        2e8f04:	41a0f00e 	movmi	pc, lr
        2e8f08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        2e8f0c:	e0813281 	add	r3, r1, r1, lsl #5
        2e8f10:	e08c3103 	add	r3, ip, r3, lsl #2
        2e8f14:	e2511001 	subs	r1, r1, #1	; 0x1
        2e8f18:	e5a32004 	str	r2, [r3, #4]!	; fField4
        2e8f1c:	5afffff9 	bpl	2e8f08 <TUnionSoupIndex::InvalidateState(void)+0x10>
        2e8f20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnionSoupIndex::IsValidState(SKey *, SKey *)
 * Address: 002e8f24
 */
TUnionSoupIndex::IsValidState(SKey *, SKey *) {
    /*
        2e8f24:	e1a0c00d 	mov	ip, sp
        2e8f28:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e8f2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e8f30:	e1a04000 	mov	r4, r0
        2e8f34:	e1a05001 	mov	r5, r1
        2e8f38:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e8f3c:	e2508001 	subs	r8, r0, #1	; 0x1
        2e8f40:	4a00003b 	bmi	2e9034 <TUnionSoupIndex::IsValidState(SKey *, SKey *)+0x110>
        2e8f44:	e0880288 	add	r0, r8, r8, lsl #5
        2e8f48:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2e8f4c:	e0817100 	add	r7, r1, r0, lsl #2
        2e8f50:	e5976000 	ldr	r6, [r7]
        2e8f54:	e5960008 	ldr	r0, [r6, #8]	; fField8
        2e8f58:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2e8f5c:	e5971080 	ldr	r1, [r7, #128]
        2e8f60:	e1300001 	teq	r0, r1
        2e8f64:	1a000029 	bne	2e9010 <TUnionSoupIndex::IsValidState(SKey *, SKey *)+0xec>
        2e8f68:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2e8f6c:	e1300008 	teq	r0, r8
        2e8f70:	1a000028 	bne	2e9018 <TUnionSoupIndex::IsValidState(SKey *, SKey *)+0xf4>
        2e8f74:	e5970004 	ldr	r0, [r7, #4]	; fField4
        2e8f78:	e3300001 	teq	r0, #1	; 0x1
        2e8f7c:	1a000023 	bne	2e9010 <TUnionSoupIndex::IsValidState(SKey *, SKey *)+0xec>
        2e8f80:	e1a00006 	mov	r0, r6
        2e8f84:	e597107c 	ldr	r1, [r7, #124]
        2e8f88:	eb5d5c39 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2e8f8c:	e1a09000 	mov	r9, r0
        2e8f90:	e1a00006 	mov	r0, r6
        2e8f94:	e51b102c 	ldr	r1, [fp, -#44]
        2e8f98:	eb5d603d 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2e8f9c:	e1a0a000 	mov	sl, r0
        2e8fa0:	e1a01009 	mov	r1, r9
        2e8fa4:	e1a00006 	mov	r0, r6
        2e8fa8:	eb5d6039 	bl	1a41094 <TSoupIndex::$kfSizeOfData(void *)>
        2e8fac:	e13a0000 	teq	sl, r0
        2e8fb0:	1a000016 	bne	2e9010 <TUnionSoupIndex::IsValidState(SKey *, SKey *)+0xec>
        2e8fb4:	e1a0200a 	mov	r2, sl
        2e8fb8:	e1a00009 	mov	r0, r9
        2e8fbc:	e51b102c 	ldr	r1, [fp, -#44]
        2e8fc0:	eb632ea1 	bl	1bb4a4c <$memcmp>
        2e8fc4:	e3300000 	teq	r0, #0	; 0x0
        2e8fc8:	1a000010 	bne	2e9010 <TUnionSoupIndex::IsValidState(SKey *, SKey *)+0xec>
        2e8fcc:	e1a01005 	mov	r1, r5
        2e8fd0:	e1a00006 	mov	r0, r6
        2e8fd4:	eb5d602f 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2e8fd8:	e1a09000 	mov	r9, r0
        2e8fdc:	e597007c 	ldr	r0, [r7, #124]
        2e8fe0:	e2801002 	add	r1, r0, #2	; 0x2
        2e8fe4:	e1a00006 	mov	r0, r6
        2e8fe8:	eb5d602a 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2e8fec:	e1390000 	teq	r9, r0
        2e8ff0:	1a000006 	bne	2e9010 <TUnionSoupIndex::IsValidState(SKey *, SKey *)+0xec>
        2e8ff4:	e597007c 	ldr	r0, [r7, #124]
        2e8ff8:	e2800002 	add	r0, r0, #2	; 0x2
        2e8ffc:	e1a02009 	mov	r2, r9
        2e9000:	e1a01005 	mov	r1, r5
        2e9004:	eb632e90 	bl	1bb4a4c <$memcmp>
        2e9008:	e3300000 	teq	r0, #0	; 0x0
        2e900c:	0a000001 	beq	2e9018 <TUnionSoupIndex::IsValidState(SKey *, SKey *)+0xf4>
        2e9010:	e3a00000 	mov	r0, #0	; 0x0
        2e9014:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2e9018:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        2e901c:	e3300001 	teq	r0, #1	; 0x1
        2e9020:	05960008 	ldreq	r0, [r6, #8]	; fField8
        2e9024:	01a01006 	moveq	r1, r6
        2e9028:	0b5d8962 	bleq	1a4b5b8 <TNodeCache::$Reuse(TSoupIndex *)>
        2e902c:	e2588001 	subs	r8, r8, #1	; 0x1
        2e9030:	5affffc3 	bpl	2e8f44 <TUnionSoupIndex::IsValidState(SKey *, SKey *)+0x20>
        2e9034:	e3a00001 	mov	r0, #1	; 0x1
        2e9038:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)
 * Address: 002e903c
 */
TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int) {
    /*
        2e903c:	e1a0c00d 	mov	ip, sp
        2e9040:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2e9044:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2e9048:	e24cb014 	sub	fp, ip, #20	; 0x14
        2e904c:	e1a04000 	mov	r4, r0
        2e9050:	e1a05002 	mov	r5, r2
        2e9054:	e1a08003 	mov	r8, r3
        2e9058:	e20190ff 	and	r9, r1, #255	; 0xff
        2e905c:	e59ba024 	ldr	sl, [fp, #36]
        2e9060:	e5d00010 	ldrb	r0, [r0, #16]	; fField16
        2e9064:	e1300009 	teq	r0, r9
        2e9068:	1a000005 	bne	2e9084 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x48>
        2e906c:	e1a02008 	mov	r2, r8
        2e9070:	e1a01005 	mov	r1, r5
        2e9074:	e1a00004 	mov	r0, r4
        2e9078:	eb5d8948 	bl	1a4b5a0 <TUnionSoupIndex::$IsValidState(SKey *, SKey *)>
        2e907c:	e3300000 	teq	r0, #0	; 0x0
        2e9080:	1a00000d 	bne	2e90bc <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x80>
        2e9084:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e9088:	e2501001 	subs	r1, r0, #1	; 0x1
        2e908c:	e3a03000 	mov	r3, #0	; 0x0
        2e9090:	4a000009 	bmi	2e90bc <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x80>
        2e9094:	e0810281 	add	r0, r1, r1, lsl #5
        2e9098:	e5942008 	ldr	r2, [r4, #8]	; fField8
        2e909c:	e0820100 	add	r0, r2, r0, lsl #2
        2e90a0:	e5803004 	str	r3, [r0, #4]	; fField4
        2e90a4:	e5902000 	ldr	r2, [r0]
        2e90a8:	e5922008 	ldr	r2, [r2, #8]	; fField8
        2e90ac:	e592200c 	ldr	r2, [r2, #12]	; fField12
        2e90b0:	e2511001 	subs	r1, r1, #1	; 0x1
        2e90b4:	e5a02080 	str	r2, [r0, #128]!
        2e90b8:	5afffff5 	bpl	2e9094 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x58>
        2e90bc:	e5c49010 	strb	r9, [r4, #16]	; fField16
        2e90c0:	e2841008 	add	r1, r4, #8	; 0x8
        2e90c4:	e8910003 	ldmia	r1, {r0, r1}
        2e90c8:	e0811281 	add	r1, r1, r1, lsl #5
        2e90cc:	e0806101 	add	r6, r0, r1, lsl #2
        2e90d0:	e1a03008 	mov	r3, r8
        2e90d4:	e1a02005 	mov	r2, r5
        2e90d8:	e5967000 	ldr	r7, [r6]
        2e90dc:	e1a00007 	mov	r0, r7
        2e90e0:	e596107c 	ldr	r1, [r6, #124]
        2e90e4:	eb5d5bdd 	bl	1a40060 <TSoupIndex::$kfAssembleKeyField(KeyField *, void *, void *)>
        2e90e8:	e3a08000 	mov	r8, #0	; 0x0
        2e90ec:	e52d806c 	str	r8, [sp, -#108]!
        2e90f0:	e28d0008 	add	r0, sp, #8	; 0x8
        2e90f4:	eb63261e 	bl	1bb2974 <$setjmp>
        2e90f8:	e3300000 	teq	r0, #0	; 0x0
        2e90fc:	1a00004b 	bne	2e9230 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x1f4>
        2e9100:	e1a0000d 	mov	r0, sp
        2e9104:	eb63dbdc 	bl	1be007c <$AddExceptionHandler>
        2e9108:	e3a00001 	mov	r0, #1	; 0x1
        2e910c:	e5960004 	ldr	r0, [r6, #4]	; fField4
        2e9110:	e3300001 	teq	r0, #1	; 0x1
        2e9114:	e2863008 	add	r3, r6, #8	; 0x8
        2e9118:	e92d0008 	stmdb	sp!, {r3}
        2e911c:	e1a0200a 	mov	r2, sl
        2e9120:	e1a01009 	mov	r1, r9
        2e9124:	e1a00007 	mov	r0, r7
        2e9128:	e596307c 	ldr	r3, [r6, #124]
        2e912c:	1a000001 	bne	2e9138 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0xfc>
        2e9130:	eb5d8510 	bl	1a4a578 <TSoupIndex::$MoveUsingState(unsigned char, int, KeyField *, IndexState *)>
        2e9134:	ea000000 	b	2e913c <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x100>
        2e9138:	eb5d850d 	bl	1a4a574 <TSoupIndex::$MoveAndGetState(unsigned char, int, KeyField *, IndexState *)>
        2e913c:	e28dd004 	add	sp, sp, #4	; 0x4
        2e9140:	e1b08000 	movs	r8, r0
        2e9144:	1a00000c 	bne	2e917c <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x140>
        2e9148:	e3a00001 	mov	r0, #1	; 0x1
        2e914c:	e5860004 	str	r0, [r6, #4]	; fField4
        2e9150:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2e9154:	e3300001 	teq	r0, #1	; 0x1
        2e9158:	0a00001d 	beq	2e91d4 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x198>
        2e915c:	e596007c 	ldr	r0, [r6, #124]
        2e9160:	e2802002 	add	r2, r0, #2	; 0x2
        2e9164:	e1a01005 	mov	r1, r5
        2e9168:	e1a00007 	mov	r0, r7
        2e916c:	eb5d84f3 	bl	1a4a540 <TSoupIndex::$CompareKeys(SKey const &, SKey const &)>
        2e9170:	e3300000 	teq	r0, #0	; 0x0
        2e9174:	0a000016 	beq	2e91d4 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x198>
        2e9178:	ea000006 	b	2e9198 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x15c>
        2e917c:	e3380003 	teq	r8, #3	; 0x3
        2e9180:	03a00002 	moveq	r0, #2	; 0x2
        2e9184:	05860004 	streq	r0, [r6, #4]	; fField4
        2e9188:	0a000002 	beq	2e9198 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x15c>
        2e918c:	e3a00000 	mov	r0, #0	; 0x0
        2e9190:	e5860004 	str	r0, [r6, #4]	; fField4
        2e9194:	ea00002a 	b	2e9244 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x208>
        2e9198:	e3a03000 	mov	r3, #0	; 0x0
        2e919c:	e92d0008 	stmdb	sp!, {r3}
        2e91a0:	e1a03005 	mov	r3, r5
        2e91a4:	e1a0200a 	mov	r2, sl
        2e91a8:	e1a01009 	mov	r1, r9
        2e91ac:	e1a00004 	mov	r0, r4
        2e91b0:	eb5d88f8 	bl	1a4b598 <TUnionSoupIndex::$MoveToNextSoup(unsigned char, int, SKey *, unsigned char)>
        2e91b4:	e28dd004 	add	sp, sp, #4	; 0x4
        2e91b8:	e1b08000 	movs	r8, r0
        2e91bc:	1a000020 	bne	2e9244 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x208>
        2e91c0:	e2841008 	add	r1, r4, #8	; 0x8
        2e91c4:	e8910003 	ldmia	r1, {r0, r1}
        2e91c8:	e0811281 	add	r1, r1, r1, lsl #5
        2e91cc:	e0806101 	add	r6, r0, r1, lsl #2
        2e91d0:	e5967000 	ldr	r7, [r6]
        2e91d4:	e59b3014 	ldr	r3, [fp, #20]
        2e91d8:	e3330000 	teq	r3, #0	; 0x0
        2e91dc:	0a000018 	beq	2e9244 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x208>
        2e91e0:	e1a00007 	mov	r0, r7
        2e91e4:	e596107c 	ldr	r1, [r6, #124]
        2e91e8:	eb5d5ba1 	bl	1a40074 <TSoupIndex::$kfFirstDataAdr(KeyField *)>
        2e91ec:	e1a01000 	mov	r1, r0
        2e91f0:	e596007c 	ldr	r0, [r6, #124]
        2e91f4:	e2800002 	add	r0, r0, #2	; 0x2
        2e91f8:	e59b2018 	ldr	r2, [fp, #24]
        2e91fc:	e1a0e00f 	mov	lr, pc
        2e9200:	e59bf014 	ldr	pc, [fp, #20]
        2e9204:	e3300000 	teq	r0, #0	; 0x0
        2e9208:	1a00000d 	bne	2e9244 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x208>
        2e920c:	e5970008 	ldr	r0, [r7, #8]	; fField8
        2e9210:	e5901000 	ldr	r1, [r0]
        2e9214:	e3510020 	cmp	r1, #32	; 0x20
        2e9218:	daffffbb 	ble	2e910c <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0xd0>
        2e921c:	e1a01007 	mov	r1, r7
        2e9220:	eb5d88e3 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e9224:	e3a08000 	mov	r8, #0	; 0x0
        2e9228:	e5868004 	str	r8, [r6, #4]	; fField4
        2e922c:	eaffffb6 	b	2e910c <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0xd0>
        2e9230:	e1a00004 	mov	r0, r4
        2e9234:	eb5d88dc 	bl	1a4b5ac <TUnionSoupIndex::$Commit(void)>
        2e9238:	e1a0000d 	mov	r0, sp
        2e923c:	eb63e3c4 	bl	1be2154 <$NextHandler>
        2e9240:	eafffffa 	b	2e9230 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x1f4>
        2e9244:	e1a0000d 	mov	r0, sp
        2e9248:	eb63df9a 	bl	1be10b8 <$ExitHandler>
        2e924c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e9250:	e1a00004 	mov	r0, r4
        2e9254:	eb5d88d4 	bl	1a4b5ac <TUnionSoupIndex::$Commit(void)>
        2e9258:	e3380000 	teq	r8, #0	; 0x0
        2e925c:	1a000004 	bne	2e9274 <TUnionSoupIndex::Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)+0x238>
        2e9260:	e5b6107c 	ldr	r1, [r6, #124]!
        2e9264:	e1a00007 	mov	r0, r7
        2e9268:	e28b301c 	add	r3, fp, #28	; 0x1c
        2e926c:	e893000c 	ldmia	r3, {r2, r3}
        2e9270:	eb5d88d2 	bl	1a4b5c0 <TSoupIndex::$kfDisassembleKeyField(KeyField *, SKey *, SKey *)>
        2e9274:	e1a00008 	mov	r0, r8
        2e9278:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TUnionSoupIndex::CurrentSoupGone(SKey *, SKey *, SKey *)
 * Address: 002e927c
 */
TUnionSoupIndex::CurrentSoupGone(SKey *, SKey *, SKey *) {
    /*
        2e927c:	e1a0c00d 	mov	ip, sp
        2e9280:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2e9284:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9288:	e1a04000 	mov	r4, r0
        2e928c:	e1a07001 	mov	r7, r1
        2e9290:	e1a06002 	mov	r6, r2
        2e9294:	e1a05003 	mov	r5, r3
        2e9298:	e3a00000 	mov	r0, #0	; 0x0
        2e929c:	e52d006c 	str	r0, [sp, -#108]!
        2e92a0:	e28d0008 	add	r0, sp, #8	; 0x8
        2e92a4:	eb6325b2 	bl	1bb2974 <$setjmp>
        2e92a8:	e3300000 	teq	r0, #0	; 0x0
        2e92ac:	1a000019 	bne	2e9318 <TUnionSoupIndex::CurrentSoupGone(SKey *, SKey *, SKey *)+0x9c>
        2e92b0:	e1a0000d 	mov	r0, sp
        2e92b4:	eb63db70 	bl	1be007c <$AddExceptionHandler>
        2e92b8:	e3a03001 	mov	r3, #1	; 0x1
        2e92bc:	e92d0008 	stmdb	sp!, {r3}
        2e92c0:	e1a03007 	mov	r3, r7
        2e92c4:	e1a00004 	mov	r0, r4
        2e92c8:	e3a02000 	mov	r2, #0	; 0x0
        2e92cc:	e3a01001 	mov	r1, #1	; 0x1
        2e92d0:	eb5d88b0 	bl	1a4b598 <TUnionSoupIndex::$MoveToNextSoup(unsigned char, int, SKey *, unsigned char)>
        2e92d4:	e28dd004 	add	sp, sp, #4	; 0x4
        2e92d8:	e1b07000 	movs	r7, r0
        2e92dc:	1a000009 	bne	2e9308 <TUnionSoupIndex::CurrentSoupGone(SKey *, SKey *, SKey *)+0x8c>
        2e92e0:	e2841008 	add	r1, r4, #8	; 0x8
        2e92e4:	e8910003 	ldmia	r1, {r0, r1}
        2e92e8:	e0811281 	add	r1, r1, r1, lsl #5
        2e92ec:	e0800101 	add	r0, r0, r1, lsl #2
        2e92f0:	e1a03005 	mov	r3, r5
        2e92f4:	e1a02006 	mov	r2, r6
        2e92f8:	e590107c 	ldr	r1, [r0, #124]
        2e92fc:	e5900000 	ldr	r0, [r0]
        2e9300:	eb5d88ae 	bl	1a4b5c0 <TSoupIndex::$kfDisassembleKeyField(KeyField *, SKey *, SKey *)>
        2e9304:	ea000004 	b	2e931c <TUnionSoupIndex::CurrentSoupGone(SKey *, SKey *, SKey *)+0xa0>
        2e9308:	e1a00004 	mov	r0, r4
        2e930c:	e3a01000 	mov	r1, #0	; 0x0
        2e9310:	eb5d88a6 	bl	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2e9314:	ea000000 	b	2e931c <TUnionSoupIndex::CurrentSoupGone(SKey *, SKey *, SKey *)+0xa0>
        2e9318:	e59d7064 	ldr	r7, [sp, #100]
        2e931c:	e1a0000d 	mov	r0, sp
        2e9320:	eb63df64 	bl	1be10b8 <$ExitHandler>
        2e9324:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2e9328:	e1a00004 	mov	r0, r4
        2e932c:	eb5d889e 	bl	1a4b5ac <TUnionSoupIndex::$Commit(void)>
        2e9330:	e1a00007 	mov	r0, r7
        2e9334:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUnionSoupIndex::Commit(void)
 * Address: 002e941c
 */
TUnionSoupIndex::Commit(void) {
    /*
        2e941c:	e1a0c00d 	mov	ip, sp
        2e9420:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2e9424:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9428:	e1a04000 	mov	r4, r0
        2e942c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2e9430:	e2505001 	subs	r5, r0, #1	; 0x1
        2e9434:	491ba830 	ldmmidb	fp, {r4, r5, fp, sp, pc}
        2e9438:	e0851285 	add	r1, r5, r5, lsl #5
        2e943c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2e9440:	e7901101 	ldr	r1, [r0, r1, lsl #2]
        2e9444:	e5910008 	ldr	r0, [r1, #8]	; fField8
        2e9448:	eb5d8859 	bl	1a4b5b4 <TNodeCache::$Commit(TSoupIndex *)>
        2e944c:	e2555001 	subs	r5, r5, #1	; 0x1
        2e9450:	5afffff8 	bpl	2e9438 <TUnionSoupIndex::Commit(void)+0x1c>
        2e9454:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnionSoupIndex::SetCurrentSoup(long)
 * Address: 002e9458
 */
TUnionSoupIndex::SetCurrentSoup(long) {
    /*
        2e9458:	e580100c 	str	r1, [r0, #12]	; fField12
        2e945c:	ea5d884e 	b	1a4b59c <TUnionSoupIndex::$InvalidateState(void)>
    */
}

