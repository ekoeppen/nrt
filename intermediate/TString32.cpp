#include "include/TString32.h"

/**
 * Symbol: TString32::operator<( const(TString32 const &))
 * Address: 0025c8dc
 */
TString32::operator<( const(TString32 const &)) {
    /*
        25c8dc:	e1a0c00d 	mov	ip, sp
        25c8e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25c8e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c8e8:	e1a05000 	mov	r5, r0
        25c8ec:	e1a04001 	mov	r4, r1
        25c8f0:	e24dd048 	sub	sp, sp, #72	; 0x48
        25c8f4:	e28d0024 	add	r0, sp, #36	; 0x24
        25c8f8:	eb60581e 	bl	1a72978 <TString32::$__ct(void)>
        25c8fc:	e1a0000d 	mov	r0, sp
        25c900:	eb60581c 	bl	1a72978 <TString32::$__ct(void)>
        25c904:	e3a00001 	mov	r0, #1	; 0x1
        25c908:	e5d51000 	ldrb	r1, [r5]
        25c90c:	e3510001 	cmp	r1, #1	; 0x1
        25c910:	ba000008 	blt	25c938 <TString32::operator<( const(TString32 const &))+0x5c>
        25c914:	e7d52000 	ldrb	r2, [r5, r0]
        25c918:	e28d1024 	add	r1, sp, #36	; 0x24
        25c91c:	e0811000 	add	r1, r1, r0
        25c920:	e5412001 	strb	r2, [r1, -#1]
        25c924:	e2800001 	add	r0, r0, #1	; 0x1
        25c928:	e20000ff 	and	r0, r0, #255	; 0xff
        25c92c:	e5d51000 	ldrb	r1, [r5]
        25c930:	e1510000 	cmp	r1, r0
        25c934:	aafffff6 	bge	25c914 <TString32::operator<( const(TString32 const &))+0x38>
        25c938:	e5d50000 	ldrb	r0, [r5]
        25c93c:	e28d2024 	add	r2, sp, #36	; 0x24
        25c940:	e3a01000 	mov	r1, #0	; 0x0
        25c944:	e7c21000 	strb	r1, [r2, r0]
        25c948:	e3a00001 	mov	r0, #1	; 0x1
        25c94c:	e5d42000 	ldrb	r2, [r4]
        25c950:	e3520001 	cmp	r2, #1	; 0x1
        25c954:	ba000007 	blt	25c978 <TString32::operator<( const(TString32 const &))+0x9c>
        25c958:	e7d43000 	ldrb	r3, [r4, r0]
        25c95c:	e08d2000 	add	r2, sp, r0
        25c960:	e5423001 	strb	r3, [r2, -#1]
        25c964:	e2800001 	add	r0, r0, #1	; 0x1
        25c968:	e20000ff 	and	r0, r0, #255	; 0xff
        25c96c:	e5d42000 	ldrb	r2, [r4]
        25c970:	e1520000 	cmp	r2, r0
        25c974:	aafffff7 	bge	25c958 <TString32::operator<( const(TString32 const &))+0x7c>
        25c978:	e5d40000 	ldrb	r0, [r4]
        25c97c:	e7cd1000 	strb	r1, [sp, r0]
        25c980:	e28d1024 	add	r1, sp, #36	; 0x24
        25c984:	e1a0000d 	mov	r0, sp
        25c988:	eb656446 	bl	1bb5aa8 <$strcmp>
        25c98c:	e3500000 	cmp	r0, #0	; 0x0
        25c990:	a3a00000 	movge	r0, #0	; 0x0
        25c994:	b3a00001 	movlt	r0, #1	; 0x1
        25c998:	e20000ff 	and	r0, r0, #255	; 0xff
        25c99c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TString32::StreamOut( const(unsigned char *))
 * Address: 0025c9a0
 */
TString32::StreamOut( const(unsigned char *)) {
    /*
        25c9a0:	e1a02001 	mov	r2, r1
        25c9a4:	e3a01000 	mov	r1, #0	; 0x0
        25c9a8:	e5d03000 	ldrb	r3, [r0]
        25c9ac:	e3530000 	cmp	r3, #0	; 0x0
        25c9b0:	ba000006 	blt	25c9d0 <TString32::StreamOut( const(unsigned char *))+0x30>
        25c9b4:	e7d03001 	ldrb	r3, [r0, r1]
        25c9b8:	e4c23001 	strb	r3, [r2], #1
        25c9bc:	e2811001 	add	r1, r1, #1	; 0x1
        25c9c0:	e20110ff 	and	r1, r1, #255	; 0xff
        25c9c4:	e5d03000 	ldrb	r3, [r0]
        25c9c8:	e1510003 	cmp	r1, r3
        25c9cc:	dafffff8 	ble	25c9b4 <TString32::StreamOut( const(unsigned char *))+0x14>
        25c9d0:	e5d00000 	ldrb	r0, [r0]
        25c9d4:	e2800001 	add	r0, r0, #1	; 0x1
        25c9d8:	e20000ff 	and	r0, r0, #255	; 0xff
        25c9dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TString32::StartsWith( const(TString32 const &))
 * Address: 0025c9e0
 */
TString32::StartsWith( const(TString32 const &)) {
    /*
        25c9e0:	e92d4010 	stmdb	sp!, {r4, lr}
        25c9e4:	e5d02000 	ldrb	r2, [r0]
        25c9e8:	e5d13000 	ldrb	r3, [r1]
        25c9ec:	e3a0c000 	mov	ip, #0	; 0x0
        25c9f0:	e1520003 	cmp	r2, r3
        25c9f4:	ba000006 	blt	25ca14 <TString32::StartsWith( const(TString32 const &))+0x34>
        25c9f8:	e3a02001 	mov	r2, #1	; 0x1
        25c9fc:	e3530001 	cmp	r3, #1	; 0x1
        25ca00:	ba000009 	blt	25ca2c <TString32::StartsWith( const(TString32 const &))+0x4c>
        25ca04:	e7d0e002 	ldrb	lr, [r0, r2]
        25ca08:	e7d14002 	ldrb	r4, [r1, r2]
        25ca0c:	e13e0004 	teq	lr, r4
        25ca10:	0a000001 	beq	25ca1c <TString32::StartsWith( const(TString32 const &))+0x3c>
        25ca14:	e1a0000c 	mov	r0, ip
        25ca18:	e8bd8010 	ldmia	sp!, {r4, pc}
        25ca1c:	e2822001 	add	r2, r2, #1	; 0x1
        25ca20:	e20220ff 	and	r2, r2, #255	; 0xff
        25ca24:	e1530002 	cmp	r3, r2
        25ca28:	aafffff5 	bge	25ca04 <TString32::StartsWith( const(TString32 const &))+0x24>
        25ca2c:	e3a00001 	mov	r0, #1	; 0x1
        25ca30:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TString32::__ct(unsigned char const *)
 * Address: 0025ca80
 */
TString32::TString32(unsigned char const *) {
    /*
        25ca80:	e1a0c00d 	mov	ip, sp
        25ca84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25ca88:	e24cb004 	sub	fp, ip, #4	; 0x4
        25ca8c:	e1b04000 	movs	r4, r0
        25ca90:	e1a05001 	mov	r5, r1
        25ca94:	1a000003 	bne	25caa8 <TString32::__ct(unsigned char const *)+0x28>
        25ca98:	e3a00024 	mov	r0, #36	; 0x24
        25ca9c:	eb65c725 	bl	1bce738 <$__nw(unsigned int)>
        25caa0:	e1b04000 	movs	r4, r0
        25caa4:	0a000002 	beq	25cab4 <TString32::__ct(unsigned char const *)+0x34>
        25caa8:	e1a01005 	mov	r1, r5
        25caac:	e1a00004 	mov	r0, r4
        25cab0:	eb60a622 	bl	1a86340 <TString32::$__as(unsigned char const *)>
        25cab4:	e1a00004 	mov	r0, r4
        25cab8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TString32::__ct(void)
 * Address: 0025cabc
 */
TString32::TString32(void) {
    /*
        25cabc:	e1a0c00d 	mov	ip, sp
        25cac0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25cac4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25cac8:	e3300000 	teq	r0, #0	; 0x0
        25cacc:	1a000003 	bne	25cae0 <TString32::__ct(void)+0x24>
        25cad0:	e3a00024 	mov	r0, #36	; 0x24
        25cad4:	eb65c717 	bl	1bce738 <$__nw(unsigned int)>
        25cad8:	e3300000 	teq	r0, #0	; 0x0
        25cadc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        25cae0:	e3a01000 	mov	r1, #0	; 0x0
        25cae4:	e5c01000 	strb	r1, [r0]
        25cae8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TString32::operator=(unsigned char const *)
 * Address: 0025caec
 */
TString32::operator=(unsigned char const *) {
    /*
        25caec:	e5d13000 	ldrb	r3, [r1]
        25caf0:	e3530020 	cmp	r3, #32	; 0x20
        25caf4:	c3a03020 	movgt	r3, #32	; 0x20
        25caf8:	e3a02000 	mov	r2, #0	; 0x0
        25cafc:	e3530000 	cmp	r3, #0	; 0x0
        25cb00:	b1a0f00e 	movlt	pc, lr
        25cb04:	e4d1c001 	ldrb	ip, [r1], #1
        25cb08:	e7c0c002 	strb	ip, [r0, r2]
        25cb0c:	e2822001 	add	r2, r2, #1	; 0x1
        25cb10:	e20220ff 	and	r2, r2, #255	; 0xff
        25cb14:	e1520003 	cmp	r2, r3
        25cb18:	dafffff9 	ble	25cb04 <TString32::operator=(unsigned char const *)+0x18>
        25cb1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TString32::operator=(TString32 const &)
 * Address: 0025cb20
 */
TString32::operator=(TString32 const &) {
    /*
        25cb20:	e5d13000 	ldrb	r3, [r1]
        25cb24:	e3530020 	cmp	r3, #32	; 0x20
        25cb28:	c3a03020 	movgt	r3, #32	; 0x20
        25cb2c:	e3a02000 	mov	r2, #0	; 0x0
        25cb30:	e3530000 	cmp	r3, #0	; 0x0
        25cb34:	31a0f00e 	movcc	pc, lr
        25cb38:	e7d1c002 	ldrb	ip, [r1, r2]
        25cb3c:	e7c0c002 	strb	ip, [r0, r2]
        25cb40:	e2822001 	add	r2, r2, #1	; 0x1
        25cb44:	e1520003 	cmp	r2, r3
        25cb48:	9afffffa 	bls	25cb38 <TString32::operator=(TString32 const &)+0x18>
        25cb4c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TString32::operator==( const(TString32 const &))
 * Address: 0025cb50
 */
TString32::operator==( const(TString32 const &)) {
    /*
        25cb50:	e92d4010 	stmdb	sp!, {r4, lr}
        25cb54:	e5d02000 	ldrb	r2, [r0]
        25cb58:	e1a03002 	mov	r3, r2
        25cb5c:	e5d1e000 	ldrb	lr, [r1]
        25cb60:	e3a0c000 	mov	ip, #0	; 0x0
        25cb64:	e132000e 	teq	r2, lr
        25cb68:	1a000006 	bne	25cb88 <TString32::operator==( const(TString32 const &))+0x38>
        25cb6c:	e3a02001 	mov	r2, #1	; 0x1
        25cb70:	e3530001 	cmp	r3, #1	; 0x1
        25cb74:	ba000009 	blt	25cba0 <TString32::operator==( const(TString32 const &))+0x50>
        25cb78:	e7d0e002 	ldrb	lr, [r0, r2]
        25cb7c:	e7d14002 	ldrb	r4, [r1, r2]
        25cb80:	e13e0004 	teq	lr, r4
        25cb84:	0a000001 	beq	25cb90 <TString32::operator==( const(TString32 const &))+0x40>
        25cb88:	e1a0000c 	mov	r0, ip
        25cb8c:	e8bd8010 	ldmia	sp!, {r4, pc}
        25cb90:	e2822001 	add	r2, r2, #1	; 0x1
        25cb94:	e20220ff 	and	r2, r2, #255	; 0xff
        25cb98:	e1530002 	cmp	r3, r2
        25cb9c:	aafffff5 	bge	25cb78 <TString32::operator==( const(TString32 const &))+0x28>
        25cba0:	e3a00001 	mov	r0, #1	; 0x1
        25cba4:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

