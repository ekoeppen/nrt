#include "include/TUnicodeDecompressor.h"

/**
 * Symbol: TUnicodeDecompressor::Delete(void)
 * Address: 00256c90
 */
TUnicodeDecompressor::Delete(void) {
    /*
        256c90:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnicodeDecompressor::Init(void *)
 * Address: 00256c94
 */
TUnicodeDecompressor::Init(void *) {
    /*
        256c94:	e3a00000 	mov	r0, #0	; 0x0
        256c98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnicodeDecompressor::Reset(void)
 * Address: 00256c9c
 */
TUnicodeDecompressor::Reset(void) {
    /*
        256c9c:	e3a01000 	mov	r1, #0	; 0x0
        256ca0:	e5c01020 	strb	r1, [r0, #32]	; fField32
        256ca4:	e5c01018 	strb	r1, [r0, #24]	; fField24
        256ca8:	e580101c 	str	r1, [r0, #28]	; fField28
        256cac:	e5c01121 	strb	r1, [r0, #289]	; fField289
        256cb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)
 * Address: 00256cb4
 */
TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *) {
    /*
        256cb4:	e1a0c00d 	mov	ip, sp
        256cb8:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        256cbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        256cc0:	e1a04000 	mov	r4, r0
        256cc4:	e1a05003 	mov	r5, r3
        256cc8:	e24dd010 	sub	sp, sp, #16	; 0x10
        256ccc:	e3a00000 	mov	r0, #0	; 0x0
        256cd0:	e51b2030 	ldr	r2, [fp, -#48]
        256cd4:	e5922000 	ldr	r2, [r2]
        256cd8:	e1a09002 	mov	r9, r2
        256cdc:	e3120001 	tst	r2, #1	; 0x1
        256ce0:	13a000ea 	movne	r0, #234	; 0xea
        256ce4:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        256ce8:	1a00006e 	bne	256ea8 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1f4>
        256cec:	e1a06001 	mov	r6, r1
        256cf0:	e3a01000 	mov	r1, #0	; 0x0
        256cf4:	e5c51000 	strb	r1, [r5]
        256cf8:	e0899fa9 	add	r9, r9, r9, lsr #31
        256cfc:	e1a090c9 	mov	r9, r9, asr #1
        256d00:	e3a08000 	mov	r8, #0	; 0x0
        256d04:	e3590000 	cmp	r9, #0	; 0x0
        256d08:	da00005e 	ble	256e88 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1d4>
        256d0c:	e284a020 	add	sl, r4, #32	; 0x20
        256d10:	e2843018 	add	r3, r4, #24	; 0x18
        256d14:	e58d300c 	str	r3, [sp, #12]
        256d18:	e59f3070 	ldr	r3, [pc, #70]	; 256d90 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0xdc>
        256d1c:	e2847021 	add	r7, r4, #33	; 0x21
        256d20:	e2877c01 	add	r7, r7, #256	; 0x100
        256d24:	e2842021 	add	r2, r4, #33	; 0x21
        256d28:	e98d000c 	stmib	sp, {r2, r3}
        256d2c:	e5d41121 	ldrb	r1, [r4, #289]	; fField289
        256d30:	e3310000 	teq	r1, #0	; 0x0
        256d34:	0a000005 	beq	256d50 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x9c>
        256d38:	e5d41018 	ldrb	r1, [r4, #24]	; fField24
        256d3c:	e3310000 	teq	r1, #0	; 0x0
        256d40:	01a01088 	moveq	r1, r8, lsl #1
        256d44:	051b2030 	ldreq	r2, [fp, -#48]
        256d48:	05821000 	streq	r1, [r2]
        256d4c:	0a000053 	beq	256ea0 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1ec>
        256d50:	e5d41018 	ldrb	r1, [r4, #24]	; fField24
        256d54:	e3510000 	cmp	r1, #0	; 0x0
        256d58:	da00000d 	ble	256d94 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0xe0>
        256d5c:	e5d41020 	ldrb	r1, [r4, #32]	; fField32
        256d60:	e4c61001 	strb	r1, [r6], #1
        256d64:	e594201c 	ldr	r2, [r4, #28]	; fField28
        256d68:	e2821001 	add	r1, r2, #1	; 0x1
        256d6c:	e584101c 	str	r1, [r4, #28]	; fField28
        256d70:	e0821004 	add	r1, r2, r4
        256d74:	e5d11021 	ldrb	r1, [r1, #33]
        256d78:	e4c61001 	strb	r1, [r6], #1
        256d7c:	e594201c 	ldr	r2, [r4, #28]	; fField28
        256d80:	e5d41018 	ldrb	r1, [r4, #24]	; fField24
        256d84:	e1520001 	cmp	r2, r1
        256d88:	3a00003b 	bcc	256e7c <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1c8>
        256d8c:	ea000032 	b	256e5c <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1a8>
        256d90:	0037ac18 	eoreqs	sl, r7, r8, lsl ip
        256d94:	e3a00001 	mov	r0, #1	; 0x1
        256d98:	e1a0100a 	mov	r1, sl
        256d9c:	e1a03007 	mov	r3, r7
        256da0:	e58d0000 	str	r0, [sp]
        256da4:	e1a0200d 	mov	r2, sp
        256da8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        256dac:	e1a0e00f 	mov	lr, pc
        256db0:	e594f010 	ldr	pc, [r4, #16]	; fField16
        256db4:	e3300000 	teq	r0, #0	; 0x0
        256db8:	1a00003a 	bne	256ea8 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1f4>
        256dbc:	e3a00001 	mov	r0, #1	; 0x1
        256dc0:	e58d0000 	str	r0, [sp]
        256dc4:	e1a03007 	mov	r3, r7
        256dc8:	e59d100c 	ldr	r1, [sp, #12]
        256dcc:	e1a0200d 	mov	r2, sp
        256dd0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        256dd4:	e1a0e00f 	mov	lr, pc
        256dd8:	e594f010 	ldr	pc, [r4, #16]	; fField16
        256ddc:	e3300000 	teq	r0, #0	; 0x0
        256de0:	1a000030 	bne	256ea8 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1f4>
        256de4:	e5d41020 	ldrb	r1, [r4, #32]	; fField32
        256de8:	e4c61001 	strb	r1, [r6], #1
        256dec:	e5d41020 	ldrb	r1, [r4, #32]	; fField32
        256df0:	e59d2008 	ldr	r2, [sp, #8]
        256df4:	e7d221c1 	ldrb	r2, [r2, r1, asr #3]
        256df8:	e2011007 	and	r1, r1, #7	; 0x7
        256dfc:	e3a03080 	mov	r3, #128	; 0x80
        256e00:	e0021133 	and	r1, r2, r3, lsr r1
        256e04:	e31100ff 	tst	r1, #255	; 0xff
        256e08:	0a000017 	beq	256e6c <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1b8>
        256e0c:	e5d40018 	ldrb	r0, [r4, #24]	; fField24
        256e10:	e58d0000 	str	r0, [sp]
        256e14:	e1a03007 	mov	r3, r7
        256e18:	e59d1004 	ldr	r1, [sp, #4]
        256e1c:	e1a0200d 	mov	r2, sp
        256e20:	e5940014 	ldr	r0, [r4, #20]	; fField20
        256e24:	e1a0e00f 	mov	lr, pc
        256e28:	e594f010 	ldr	pc, [r4, #16]	; fField16
        256e2c:	e3300000 	teq	r0, #0	; 0x0
        256e30:	1a00001c 	bne	256ea8 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1f4>
        256e34:	e594201c 	ldr	r2, [r4, #28]	; fField28
        256e38:	e2821001 	add	r1, r2, #1	; 0x1
        256e3c:	e584101c 	str	r1, [r4, #28]	; fField28
        256e40:	e0821004 	add	r1, r2, r4
        256e44:	e5d11021 	ldrb	r1, [r1, #33]
        256e48:	e4c61001 	strb	r1, [r6], #1
        256e4c:	e594201c 	ldr	r2, [r4, #28]	; fField28
        256e50:	e5d41018 	ldrb	r1, [r4, #24]	; fField24
        256e54:	e1520001 	cmp	r2, r1
        256e58:	3a000007 	bcc	256e7c <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1c8>
        256e5c:	e3a01000 	mov	r1, #0	; 0x0
        256e60:	e5c41018 	strb	r1, [r4, #24]	; fField24
        256e64:	e584101c 	str	r1, [r4, #28]	; fField28
        256e68:	ea000003 	b	256e7c <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1c8>
        256e6c:	e5d41018 	ldrb	r1, [r4, #24]	; fField24
        256e70:	e4c61001 	strb	r1, [r6], #1
        256e74:	e3a01000 	mov	r1, #0	; 0x0
        256e78:	e5c41018 	strb	r1, [r4, #24]	; fField24
        256e7c:	e2888001 	add	r8, r8, #1	; 0x1
        256e80:	e1580009 	cmp	r8, r9
        256e84:	baffffa8 	blt	256d2c <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x78>
        256e88:	e5d41121 	ldrb	r1, [r4, #289]	; fField289
        256e8c:	e3310000 	teq	r1, #0	; 0x0
        256e90:	0a000004 	beq	256ea8 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1f4>
        256e94:	e5d41018 	ldrb	r1, [r4, #24]	; fField24
        256e98:	e3310000 	teq	r1, #0	; 0x0
        256e9c:	1a000001 	bne	256ea8 <TUnicodeDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1f4>
        256ea0:	e3a01001 	mov	r1, #1	; 0x1
        256ea4:	e5c51000 	strb	r1, [r5]
        256ea8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: Sizeof__20TUnicodeDecompressorSFv
 * Address: 002571dc
 */
void TUnicodeDecompressor::Sizeof() {
    /*
        2571dc:	e3a00f49 	mov	r0, #292	; 0x124
        2571e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnicodeDecompressor::New(void)
 * Address: 002571e4
 */
TUnicodeDecompressor::New(void) {
    /*
        2571e4:	e3a01000 	mov	r1, #0	; 0x0
        2571e8:	e580101c 	str	r1, [r0, #28]	; fField28
        2571ec:	e5c01020 	strb	r1, [r0, #32]	; fField32
        2571f0:	e5c01018 	strb	r1, [r0, #24]	; fField24
        2571f4:	e5c01121 	strb	r1, [r0, #289]	; fField289
        2571f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__20TUnicodeDecompressorSFv
 * Address: 00389be4
 */
void TUnicodeDecompressor::ClassInfo() {
    /*
        389be4:	e24f0044 	sub	r0, pc, #68	; 0x44
        389be8:	e1a0f00e 	mov	pc, lr
        389bec:	e3a00000 	mov	r0, #0	; 0x0
        389bf0:	e1a0f00e 	mov	pc, lr
        389bf4:	54556e69 	ldrplb	r6, [r5], -#3689
        389bf8:	636f6465 	cmnvs	pc, #1694498816	; 0x65000000
        389bfc:	4465636f 	strmibt	r6, [r5], -#879
        389c00:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        389c04:	73736f72 	cmnvc	r3, #456	; 0x1c8
        389c08:	00544361 	subeqs	r4, r4, r1, ror #6
        389c0c:	6c6c6261 	sfmvs	f6, 2, [ip], -#388
        389c10:	636b4465 	cmnvs	fp, #1694498816	; 0x65000000
        389c14:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        389c18:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        389c1c:	6f720000 	swivs	0x00720000
        389c20:	00000000 	andeq	r0, r0, r0
        389c24:	eaffffee 	b	389be4 <ClassInfo__20TUnicodeDecompressorSFv>
        389c28:	ea606988 	b	1ba4250 <TUnicodeDecompressor::$New(void)>
        389c2c:	ea606148 	b	1ba2154 <TUnicodeDecompressor::$Delete(void)>
        389c30:	ea606975 	b	1ba420c <TUnicodeDecompressor::$Init(void *)>
        389c34:	ea606d95 	b	1ba5290 <TUnicodeDecompressor::$Reset(void)>
        389c38:	ea60698f 	b	1ba427c <TUnicodeDecompressor::$ReadChunk(void *, long *, unsigned char *)>
        389c3c:	e1a0000f 	mov	r0, pc
        389c40:	e1a0f00e 	mov	pc, lr
        389c44:	54457665 	strplb	r7, [r5], -#1637
        389c48:	6e74436f 	cdpvs	3, 7, cr4, cr4, cr15, {3}
        389c4c:	6c6c6563 	stcvsl	5, cr6, [ip], -#396
        389c50:	746f7200 	strvcbt	r7, [pc], #200	; 389c58 <New__15TEventCollectorSFPc+0x4>
    */
}

