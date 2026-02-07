#include "include/TNBPString.h"

/**
 * Symbol: TNBPString::operator==( const(TNBPString const &))
 * Address: 00127a6c
 */
TNBPString::operator==( const(TNBPString const &)) {
    /*
        127a6c:	e1a0c00d 	mov	ip, sp
        127a70:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        127a74:	e24cb004 	sub	fp, ip, #4	; 0x4
        127a78:	e1a04000 	mov	r4, r0
        127a7c:	e1a05001 	mov	r5, r1
        127a80:	e5d01000 	ldrb	r1, [r0]
        127a84:	e5d50000 	ldrb	r0, [r5]
        127a88:	e3a06000 	mov	r6, #0	; 0x0
        127a8c:	e1310000 	teq	r1, r0
        127a90:	11a00006 	movne	r0, r6
        127a94:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        127a98:	e2840024 	add	r0, r4, #36	; 0x24
        127a9c:	e930500e 	ldmdb	r0!, {r1, r2, r3, ip, lr}
        127aa0:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        127aa4:	e930500c 	ldmdb	r0!, {r2, r3, ip, lr}
        127aa8:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        127aac:	e1a0000d 	mov	r0, sp
        127ab0:	eb6569a1 	bl	1a8213c <TNBPString::$ConvertToUpper(void)>
        127ab4:	e2855024 	add	r5, r5, #36	; 0x24
        127ab8:	e935500e 	ldmdb	r5!, {r1, r2, r3, ip, lr}
        127abc:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        127ac0:	e935500c 	ldmdb	r5!, {r2, r3, ip, lr}
        127ac4:	e92d500c 	stmdb	sp!, {r2, r3, ip, lr}
        127ac8:	e1a0000d 	mov	r0, sp
        127acc:	eb65699a 	bl	1a8213c <TNBPString::$ConvertToUpper(void)>
        127ad0:	e3a00001 	mov	r0, #1	; 0x1
        127ad4:	e5d41000 	ldrb	r1, [r4]
        127ad8:	e3510001 	cmp	r1, #1	; 0x1
        127adc:	ba000009 	blt	127b08 <TNBPString::operator==( const(TNBPString const &))+0x9c>
        127ae0:	e28d2024 	add	r2, sp, #36	; 0x24
        127ae4:	e7d23000 	ldrb	r3, [r2, r0]
        127ae8:	e7dd2000 	ldrb	r2, [sp, r0]
        127aec:	e1330002 	teq	r3, r2
        127af0:	11a00006 	movne	r0, r6
        127af4:	1a000004 	bne	127b0c <TNBPString::operator==( const(TNBPString const &))+0xa0>
        127af8:	e2800001 	add	r0, r0, #1	; 0x1
        127afc:	e20000ff 	and	r0, r0, #255	; 0xff
        127b00:	e1510000 	cmp	r1, r0
        127b04:	aafffff5 	bge	127ae0 <TNBPString::operator==( const(TNBPString const &))+0x74>
        127b08:	e3a00001 	mov	r0, #1	; 0x1
        127b0c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPString::ConvertToUpper(void)
 * Address: 00127b10
 */
TNBPString::ConvertToUpper(void) {
    /*
        127b10:	e3a01001 	mov	r1, #1	; 0x1
        127b14:	e5d02000 	ldrb	r2, [r0]
        127b18:	e3520001 	cmp	r2, #1	; 0x1
        127b1c:	b1a0f00e 	movlt	pc, lr
        127b20:	e92d47f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, lr}
        127b24:	e3a080e7 	mov	r8, #231	; 0xe7
        127b28:	e3a070cb 	mov	r7, #203	; 0xcb
        127b2c:	e3a060e5 	mov	r6, #229	; 0xe5
        127b30:	e3a05080 	mov	r5, #128	; 0x80
        127b34:	e3a040cc 	mov	r4, #204	; 0xcc
        127b38:	e3a0e081 	mov	lr, #129	; 0x81
        127b3c:	e3a09082 	mov	r9, #130	; 0x82
        127b40:	e3a0c083 	mov	ip, #131	; 0x83
        127b44:	e3a030e9 	mov	r3, #233	; 0xe9
        127b48:	e3a020e6 	mov	r2, #230	; 0xe6
        127b4c:	e7d0a001 	ldrb	sl, [r0, r1]
        127b50:	e35a0061 	cmp	sl, #97	; 0x61
        127b54:	ba000002 	blt	127b64 <TNBPString::ConvertToUpper(void)+0x54>
        127b58:	e35a007a 	cmp	sl, #122	; 0x7a
        127b5c:	d24aa020 	suble	sl, sl, #32	; 0x20
        127b60:	da000062 	ble	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127b64:	e35a0087 	cmp	sl, #135	; 0x87
        127b68:	ba000061 	blt	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127b6c:	e35a0095 	cmp	sl, #149	; 0x95
        127b70:	03a0a0ec 	moveq	sl, #236	; 0xec
        127b74:	0a00005d 	beq	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127b78:	ca000012 	bgt	127bc8 <TNBPString::ConvertToUpper(void)+0xb8>
        127b7c:	e24aa087 	sub	sl, sl, #135	; 0x87
        127b80:	e35a000d 	cmp	sl, #13	; 0xd
        127b84:	908ff10a 	addls	pc, pc, sl, lsl #2
        127b88:	ea000059 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127b8c:	ea000032 	b	127c5c <TNBPString::ConvertToUpper(void)+0x14c>
        127b90:	ea000033 	b	127c64 <TNBPString::ConvertToUpper(void)+0x154>
        127b94:	ea000034 	b	127c6c <TNBPString::ConvertToUpper(void)+0x15c>
        127b98:	ea000035 	b	127c74 <TNBPString::ConvertToUpper(void)+0x164>
        127b9c:	ea000036 	b	127c7c <TNBPString::ConvertToUpper(void)+0x16c>
        127ba0:	ea000037 	b	127c84 <TNBPString::ConvertToUpper(void)+0x174>
        127ba4:	ea000038 	b	127c8c <TNBPString::ConvertToUpper(void)+0x17c>
        127ba8:	ea000039 	b	127c94 <TNBPString::ConvertToUpper(void)+0x184>
        127bac:	ea00003a 	b	127c9c <TNBPString::ConvertToUpper(void)+0x18c>
        127bb0:	ea00003b 	b	127ca4 <TNBPString::ConvertToUpper(void)+0x194>
        127bb4:	ea00003c 	b	127cac <TNBPString::ConvertToUpper(void)+0x19c>
        127bb8:	ea00003d 	b	127cb4 <TNBPString::ConvertToUpper(void)+0x1a4>
        127bbc:	ea00003e 	b	127cbc <TNBPString::ConvertToUpper(void)+0x1ac>
        127bc0:	e3a0a0eb 	mov	sl, #235	; 0xeb
        127bc4:	ea000049 	b	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127bc8:	e35a009d 	cmp	sl, #157	; 0x9d
        127bcc:	03a0a0f4 	moveq	sl, #244	; 0xf4
        127bd0:	0a000046 	beq	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127bd4:	ca00000b 	bgt	127c08 <TNBPString::ConvertToUpper(void)+0xf8>
        127bd8:	e24aa096 	sub	sl, sl, #150	; 0x96
        127bdc:	e35a0006 	cmp	sl, #6	; 0x6
        127be0:	908ff10a 	addls	pc, pc, sl, lsl #2
        127be4:	ea000042 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127be8:	ea000035 	b	127cc4 <TNBPString::ConvertToUpper(void)+0x1b4>
        127bec:	ea000036 	b	127ccc <TNBPString::ConvertToUpper(void)+0x1bc>
        127bf0:	ea000037 	b	127cd4 <TNBPString::ConvertToUpper(void)+0x1c4>
        127bf4:	ea000038 	b	127cdc <TNBPString::ConvertToUpper(void)+0x1cc>
        127bf8:	ea000039 	b	127ce4 <TNBPString::ConvertToUpper(void)+0x1d4>
        127bfc:	ea00003a 	b	127cec <TNBPString::ConvertToUpper(void)+0x1dc>
        127c00:	e3a0a0f2 	mov	sl, #242	; 0xf2
        127c04:	ea000039 	b	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127c08:	e35a00bf 	cmp	sl, #191	; 0xbf
        127c0c:	03a0a0af 	moveq	sl, #175	; 0xaf
        127c10:	0a000036 	beq	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127c14:	ca000009 	bgt	127c40 <TNBPString::ConvertToUpper(void)+0x130>
        127c18:	e33a009e 	teq	sl, #158	; 0x9e
        127c1c:	03a0a0f3 	moveq	sl, #243	; 0xf3
        127c20:	0a000032 	beq	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127c24:	e33a009f 	teq	sl, #159	; 0x9f
        127c28:	03a0a086 	moveq	sl, #134	; 0x86
        127c2c:	0a00002f 	beq	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127c30:	e33a00be 	teq	sl, #190	; 0xbe
        127c34:	03a0a0ae 	moveq	sl, #174	; 0xae
        127c38:	0a00002c 	beq	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127c3c:	ea00002c 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127c40:	e33a00cf 	teq	sl, #207	; 0xcf
        127c44:	03a0a0ce 	moveq	sl, #206	; 0xce
        127c48:	0a000028 	beq	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127c4c:	e33a00d8 	teq	sl, #216	; 0xd8
        127c50:	03a0a0d9 	moveq	sl, #217	; 0xd9
        127c54:	0a000025 	beq	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127c58:	ea000025 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127c5c:	e7c08001 	strb	r8, [r0, r1]
        127c60:	ea000023 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127c64:	e7c07001 	strb	r7, [r0, r1]
        127c68:	ea000021 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127c6c:	e7c06001 	strb	r6, [r0, r1]
        127c70:	ea00001f 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127c74:	e7c05001 	strb	r5, [r0, r1]
        127c78:	ea00001d 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127c7c:	e7c04001 	strb	r4, [r0, r1]
        127c80:	ea00001b 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127c84:	e7c0e001 	strb	lr, [r0, r1]
        127c88:	ea000019 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127c8c:	e7c09001 	strb	r9, [r0, r1]
        127c90:	ea000017 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127c94:	e7c0c001 	strb	ip, [r0, r1]
        127c98:	ea000015 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127c9c:	e7c03001 	strb	r3, [r0, r1]
        127ca0:	ea000013 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127ca4:	e7c02001 	strb	r2, [r0, r1]
        127ca8:	ea000011 	b	127cf4 <TNBPString::ConvertToUpper(void)+0x1e4>
        127cac:	e3a0a0e8 	mov	sl, #232	; 0xe8
        127cb0:	ea00000e 	b	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127cb4:	e3a0a0ea 	mov	sl, #234	; 0xea
        127cb8:	ea00000c 	b	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127cbc:	e3a0a0ed 	mov	sl, #237	; 0xed
        127cc0:	ea00000a 	b	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127cc4:	e3a0a084 	mov	sl, #132	; 0x84
        127cc8:	ea000008 	b	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127ccc:	e3a0a0ee 	mov	sl, #238	; 0xee
        127cd0:	ea000006 	b	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127cd4:	e3a0a0f1 	mov	sl, #241	; 0xf1
        127cd8:	ea000004 	b	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127cdc:	e3a0a0ef 	mov	sl, #239	; 0xef
        127ce0:	ea000002 	b	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127ce4:	e3a0a085 	mov	sl, #133	; 0x85
        127ce8:	ea000000 	b	127cf0 <TNBPString::ConvertToUpper(void)+0x1e0>
        127cec:	e3a0a0cd 	mov	sl, #205	; 0xcd
        127cf0:	e7c0a001 	strb	sl, [r0, r1]
        127cf4:	e2811001 	add	r1, r1, #1	; 0x1
        127cf8:	e20110ff 	and	r1, r1, #255	; 0xff
        127cfc:	e5d0a000 	ldrb	sl, [r0]
        127d00:	e15a0001 	cmp	sl, r1
        127d04:	aaffff90 	bge	127b4c <TNBPString::ConvertToUpper(void)+0x3c>
        127d08:	e8bd87f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
    */
}

/**
 * Symbol: TNBPString::Match( const(TNBPString &))
 * Address: 00127d0c
 */
TNBPString::Match( const(TNBPString &)) {
    /*
        127d0c:	e1a0c00d 	mov	ip, sp
        127d10:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        127d14:	e24cb004 	sub	fp, ip, #4	; 0x4
        127d18:	e1a05000 	mov	r5, r0
        127d1c:	e1a04001 	mov	r4, r1
        127d20:	e5d00000 	ldrb	r0, [r0]
        127d24:	e3300000 	teq	r0, #0	; 0x0
        127d28:	15d40000 	ldrneb	r0, [r4]
        127d2c:	13300000 	teqne	r0, #0	; 0x0
        127d30:	03a00000 	moveq	r0, #0	; 0x0
        127d34:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        127d38:	e5d40001 	ldrb	r0, [r4, #1]
        127d3c:	e330003d 	teq	r0, #61	; 0x3d
        127d40:	03a00001 	moveq	r0, #1	; 0x1
        127d44:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        127d48:	e1a00004 	mov	r0, r4
        127d4c:	eb6568fa 	bl	1a8213c <TNBPString::$ConvertToUpper(void)>
        127d50:	e24dd024 	sub	sp, sp, #36	; 0x24
        127d54:	e1a0000d 	mov	r0, sp
        127d58:	eb652b06 	bl	1a72978 <TString32::$__ct(void)>
        127d5c:	e1a01005 	mov	r1, r5
        127d60:	e1a0000d 	mov	r0, sp
        127d64:	eb6526c7 	bl	1a71888 <TString32::$__as(TString32 const &)>
        127d68:	e1a0000d 	mov	r0, sp
        127d6c:	eb6568f2 	bl	1a8213c <TNBPString::$ConvertToUpper(void)>
        127d70:	e3a00001 	mov	r0, #1	; 0x1
        127d74:	e3a02001 	mov	r2, #1	; 0x1
        127d78:	e3a01001 	mov	r1, #1	; 0x1
        127d7c:	e5d43000 	ldrb	r3, [r4]
        127d80:	e3530001 	cmp	r3, #1	; 0x1
        127d84:	ba00002a 	blt	127e34 <TNBPString::Match( const(TNBPString &))+0x128>
        127d88:	e2822001 	add	r2, r2, #1	; 0x1
        127d8c:	e20220ff 	and	r2, r2, #255	; 0xff
        127d90:	e7d4c002 	ldrb	ip, [r4, r2]
        127d94:	e33c00c5 	teq	ip, #197	; 0xc5
        127d98:	0afffffa 	beq	127d88 <TNBPString::Match( const(TNBPString &))+0x7c>
        127d9c:	e2422001 	sub	r2, r2, #1	; 0x1
        127da0:	e20220ff 	and	r2, r2, #255	; 0xff
        127da4:	e7d4c002 	ldrb	ip, [r4, r2]
        127da8:	e33c00c5 	teq	ip, #197	; 0xc5
        127dac:	1a000010 	bne	127df4 <TNBPString::Match( const(TNBPString &))+0xe8>
        127db0:	e1330002 	teq	r3, r2
        127db4:	0a00001e 	beq	127e34 <TNBPString::Match( const(TNBPString &))+0x128>
        127db8:	e084c002 	add	ip, r4, r2
        127dbc:	e5dcc001 	ldrb	ip, [ip, #1]
        127dc0:	e7dde001 	ldrb	lr, [sp, r1]
        127dc4:	e13c000e 	teq	ip, lr
        127dc8:	0a000013 	beq	127e1c <TNBPString::Match( const(TNBPString &))+0x110>
        127dcc:	e5dde000 	ldrb	lr, [sp]
        127dd0:	e13e0001 	teq	lr, r1
        127dd4:	03a00000 	moveq	r0, #0	; 0x0
        127dd8:	0a00000f 	beq	127e1c <TNBPString::Match( const(TNBPString &))+0x110>
        127ddc:	e2811001 	add	r1, r1, #1	; 0x1
        127de0:	e20110ff 	and	r1, r1, #255	; 0xff
        127de4:	e7dde001 	ldrb	lr, [sp, r1]
        127de8:	e13c000e 	teq	ip, lr
        127dec:	1afffff6 	bne	127dcc <TNBPString::Match( const(TNBPString &))+0xc0>
        127df0:	ea000009 	b	127e1c <TNBPString::Match( const(TNBPString &))+0x110>
        127df4:	e7dde001 	ldrb	lr, [sp, r1]
        127df8:	e13c000e 	teq	ip, lr
        127dfc:	1a000004 	bne	127e14 <TNBPString::Match( const(TNBPString &))+0x108>
        127e00:	e5ddc000 	ldrb	ip, [sp]
        127e04:	e13c0001 	teq	ip, r1
        127e08:	1a000003 	bne	127e1c <TNBPString::Match( const(TNBPString &))+0x110>
        127e0c:	e1330002 	teq	r3, r2
        127e10:	0a000001 	beq	127e1c <TNBPString::Match( const(TNBPString &))+0x110>
        127e14:	e3a00000 	mov	r0, #0	; 0x0
        127e18:	ea000005 	b	127e34 <TNBPString::Match( const(TNBPString &))+0x128>
        127e1c:	e2822001 	add	r2, r2, #1	; 0x1
        127e20:	e20220ff 	and	r2, r2, #255	; 0xff
        127e24:	e2811001 	add	r1, r1, #1	; 0x1
        127e28:	e20110ff 	and	r1, r1, #255	; 0xff
        127e2c:	e1530002 	cmp	r3, r2
        127e30:	aaffffd4 	bge	127d88 <TNBPString::Match( const(TNBPString &))+0x7c>
        127e34:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPString::Make(unsigned short *)
 * Address: 00127e38
 */
TNBPString::Make(unsigned short *) {
    /*
        127e38:	e1a0c00d 	mov	ip, sp
        127e3c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        127e40:	e24cb004 	sub	fp, ip, #4	; 0x4
        127e44:	e1a04000 	mov	r4, r0
        127e48:	e1a05001 	mov	r5, r1
        127e4c:	e1a00001 	mov	r0, r1
        127e50:	eb6b1a42 	bl	1bee760 <$Ustrlen>
        127e54:	e1a03000 	mov	r3, r0
        127e58:	e3500001 	cmp	r0, #1	; 0x1
        127e5c:	33a00000 	movcc	r0, #0	; 0x0
        127e60:	35c40000 	strccb	r0, [r4]
        127e64:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
        127e68:	e3a06001 	mov	r6, #1	; 0x1
        127e6c:	e3530020 	cmp	r3, #32	; 0x20
        127e70:	83a06000 	movhi	r6, #0	; 0x0
        127e74:	83a03020 	movhi	r3, #32	; 0x20
        127e78:	e24dd044 	sub	sp, sp, #68	; 0x44
        127e7c:	e1a0100d 	mov	r1, sp
        127e80:	e1a00005 	mov	r0, r5
        127e84:	e3a02001 	mov	r2, #1	; 0x1
        127e88:	eb6afd3c 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
        127e8c:	e1a0000d 	mov	r0, sp
        127e90:	eb6a3706 	bl	1bb5ab0 <$strlen>
        127e94:	e1a02000 	mov	r2, r0
        127e98:	e3500020 	cmp	r0, #32	; 0x20
        127e9c:	83a06000 	movhi	r6, #0	; 0x0
        127ea0:	83a02020 	movhi	r2, #32	; 0x20
        127ea4:	e5c42000 	strb	r2, [r4]
        127ea8:	e2841001 	add	r1, r4, #1	; 0x1
        127eac:	e1a0000d 	mov	r0, sp
        127eb0:	eb6adc27 	bl	1bdef54 <$BlockMove>
        127eb4:	e1a00006 	mov	r0, r6
        127eb8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

