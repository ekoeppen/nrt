#include "include/TLZRelocStoreDecompressor.h"

/**
 * Symbol: Sizeof__25TLZRelocStoreDecompressorSFv
 * Address: 001f9d34
 */
void TLZRelocStoreDecompressor::Sizeof() {
    /*
        1f9d34:	e3a0001c 	mov	r0, #28	; 0x1c
        1f9d38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZRelocStoreDecompressor::New(void)
 * Address: 001f9d3c
 */
TLZRelocStoreDecompressor::New(void) {
    /*
        1f9d3c:	e3a01000 	mov	r1, #0	; 0x0
        1f9d40:	e5801010 	str	r1, [r0, #16]	; fField16
        1f9d44:	e5801014 	str	r1, [r0, #20]	; fField20
        1f9d48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZRelocStoreDecompressor::Delete(void)
 * Address: 001f9d4c
 */
TLZRelocStoreDecompressor::Delete(void) {
    /*
        1f9d4c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1f9d50:	e3300000 	teq	r0, #0	; 0x0
        1f9d54:	1a063e51 	bne	3896a0 <TDecompressor::Delete(void)>
        1f9d58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZRelocStoreDecompressor::Init(TStore *, unsigned long)
 * Address: 001f9d5c
 */
TLZRelocStoreDecompressor::Init(TStore *, unsigned long) {
    /*
        1f9d5c:	e1a0c00d 	mov	ip, sp
        1f9d60:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f9d64:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9d68:	e1a04000 	mov	r4, r0
        1f9d6c:	e3a05000 	mov	r5, #0	; 0x0
        1f9d70:	e3a060e9 	mov	r6, #233	; 0xe9
        1f9d74:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        1f9d78:	e5802010 	str	r2, [r0, #16]	; fField16
        1f9d7c:	e3320000 	teq	r2, #0	; 0x0
        1f9d80:	e5801018 	str	r1, [r0, #24]	; fField24
        1f9d84:	0a000005 	beq	1f9da0 <TLZRelocStoreDecompressor::Init(TStore *, unsigned long)+0x44>
        1f9d88:	e28f1f07 	add	r1, pc, #28	; 0x1c
        1f9d8c:	e28f0f0a 	add	r0, pc, #40	; 0x28
        1f9d90:	eb67777d 	bl	1bd7b8c <$NewByName__FPCcT1>
        1f9d94:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1f9d98:	e3300000 	teq	r0, #0	; 0x0
        1f9d9c:	1a000000 	bne	1f9da4 <TLZRelocStoreDecompressor::Init(TStore *, unsigned long)+0x48>
        1f9da0:	e1a05006 	mov	r5, r6
        1f9da4:	e1a00005 	mov	r0, r5
        1f9da8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1f9dac:	544c5a44 	strplb	r5, [ip], -#2628
        1f9db0:	65636f6d 	strvsb	r6, [r3, -#3949]!
        1f9db4:	70726573 	rsbvcs	r6, r2, r3, ror r5
        1f9db8:	736f7200 	cmnvc	pc, #0	; 0x0
        1f9dbc:	54446563 	strplb	r6, [r4], -#1379	; fField1379
        1f9dc0:	6f6d7072 	swivs	0x006d7072
        1f9dc4:	6573736f 	ldrvsb	r7, [r3, -#879]!
        1f9dc8:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

/**
 * Symbol: TLZRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)
 * Address: 001f9dcc
 */
TLZRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long) {
    /*
        1f9dcc:	e1a0c00d 	mov	ip, sp
        1f9dd0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1f9dd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f9dd8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1f9ddc:	e24ddd05 	sub	sp, sp, #320	; 0x140
        1f9de0:	e28d0008 	add	r0, sp, #8	; 0x8
        1f9de4:	eb6462db 	bl	1b12958 <TSimpleCRelocator::$__ct(void)>
        1f9de8:	e59b0004 	ldr	r0, [fp, #4]
        1f9dec:	e28d3004 	add	r3, sp, #4	; 0x4
        1f9df0:	e5b01018 	ldr	r1, [r0, #24]!	; fField24
        1f9df4:	e28d0008 	add	r0, sp, #8	; 0x8
        1f9df8:	e59b2008 	ldr	r2, [fp, #8]
        1f9dfc:	eb645a80 	bl	1b10804 <TSimpleCRelocator::$Init(TStore *, unsigned long, long *)>
        1f9e00:	e1b04000 	movs	r4, r0
        1f9e04:	1a000009 	bne	1f9e30 <TLZRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0x64>
        1f9e08:	e3a03004 	mov	r3, #4	; 0x4
        1f9e0c:	e92d0008 	stmdb	sp!, {r3}
        1f9e10:	e59b0004 	ldr	r0, [fp, #4]
        1f9e14:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1f9e18:	e08d3003 	add	r3, sp, r3
        1f9e1c:	e59d2008 	ldr	r2, [sp, #8]
        1f9e20:	e59b1008 	ldr	r1, [fp, #8]
        1f9e24:	eb6420c5 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1f9e28:	e28dd004 	add	sp, sp, #4	; 0x4
        1f9e2c:	e1a04000 	mov	r4, r0
        1f9e30:	e3340000 	teq	r4, #0	; 0x0
        1f9e34:	1a000005 	bne	1f9e50 <TLZRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0x84>
        1f9e38:	e59b0004 	ldr	r0, [fp, #4]
        1f9e3c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1f9e40:	e28d2f4f 	add	r2, sp, #316	; 0x13c
        1f9e44:	e59b1008 	ldr	r1, [fp, #8]
        1f9e48:	eb6403ac 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1f9e4c:	e1a04000 	mov	r4, r0
        1f9e50:	e3340000 	teq	r4, #0	; 0x0
        1f9e54:	1a000023 	bne	1f9ee8 <TLZRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0x11c>
        1f9e58:	e59d013c 	ldr	r0, [sp, #316]
        1f9e5c:	e2400004 	sub	r0, r0, #4	; 0x4
        1f9e60:	e59d1004 	ldr	r1, [sp, #4]
        1f9e64:	e0403001 	sub	r3, r0, r1
        1f9e68:	e58b3010 	str	r3, [fp, #16]	; fField16
        1f9e6c:	e92d0008 	stmdb	sp!, {r3}
        1f9e70:	e59b0004 	ldr	r0, [fp, #4]
        1f9e74:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1f9e78:	e59d1008 	ldr	r1, [sp, #8]
        1f9e7c:	e2812004 	add	r2, r1, #4	; 0x4
        1f9e80:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1f9e84:	e59b1008 	ldr	r1, [fp, #8]
        1f9e88:	eb6420ac 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1f9e8c:	e28dd004 	add	sp, sp, #4	; 0x4
        1f9e90:	e1b04000 	movs	r4, r0
        1f9e94:	1a000013 	bne	1f9ee8 <TLZRelocStoreDecompressor::Read(unsigned long, char *, long, unsigned long)+0x11c>
        1f9e98:	e59b0004 	ldr	r0, [fp, #4]
        1f9e9c:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1f9ea0:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1f9ea4:	e92d000c 	stmdb	sp!, {r2, r3}
        1f9ea8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1f9eac:	e59b200c 	ldr	r2, [fp, #12]
        1f9eb0:	e28b1010 	add	r1, fp, #16	; 0x10
        1f9eb4:	e3a03b01 	mov	r3, #1024	; 0x400
        1f9eb8:	eb063e02 	bl	3896c8 <TDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        1f9ebc:	e28dd008 	add	sp, sp, #8	; 0x8
        1f9ec0:	e28d0008 	add	r0, sp, #8	; 0x8
        1f9ec4:	e59b100c 	ldr	r1, [fp, #12]
        1f9ec8:	e59b2014 	ldr	r2, [fp, #20]	; fField20
        1f9ecc:	e1a0e00f 	mov	lr, pc
        1f9ed0:	e59df008 	ldr	pc, [sp, #8]
        1f9ed4:	e28d3008 	add	r3, sp, #8	; 0x8
        1f9ed8:	e1a0000d 	mov	r0, sp
        1f9edc:	e59b100c 	ldr	r1, [fp, #12]
        1f9ee0:	e59b2014 	ldr	r2, [fp, #20]	; fField20
        1f9ee4:	eb617320 	bl	1a56b6c <$RelocateFramesInPage(FrameRelocationHeader *, char *, long, TCRelocator *)>
        1f9ee8:	e28d0008 	add	r0, sp, #8	; 0x8
        1f9eec:	e3a01000 	mov	r1, #0	; 0x0
        1f9ef0:	e59d2008 	ldr	r2, [sp, #8]
        1f9ef4:	e1a0e00f 	mov	lr, pc
        1f9ef8:	e282f008 	add	pc, r2, #8	; 0x8
        1f9efc:	e1a00004 	mov	r0, r4
        1f9f00:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__25TLZRelocStoreDecompressorSFv
 * Address: 00387740
 */
void TLZRelocStoreDecompressor::ClassInfo() {
    /*
        387740:	e24f0044 	sub	r0, pc, #68	; 0x44
        387744:	e1a0f00e 	mov	pc, lr
        387748:	e3a00000 	mov	r0, #0	; 0x0
        38774c:	e1a0f00e 	mov	pc, lr
        387750:	544c5a52 	strplb	r5, [ip], -#2642
        387754:	656c6f63 	strvsb	r6, [ip, -#3939]!
        387758:	53746f72 	cmnpl	r4, #456	; 0x1c8
        38775c:	65446563 	strvsb	r6, [r4, -#1379]	; fField1379
        387760:	6f6d7072 	swivs	0x006d7072
        387764:	6573736f 	ldrvsb	r7, [r3, -#879]!
        387768:	72005453 	andvc	r5, r0, #1392508928	; 0x53000000
        38776c:	746f7265 	strvcbt	r7, [pc], #265	; 387774 <ClassInfo__25TLZRelocStoreDecompressorSFv+0x34>
        387770:	4465636f 	strmibt	r6, [r5], -#879
        387774:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        387778:	73736f72 	cmnvc	r3, #456	; 0x1c8
        387784:	eaffffed 	b	387740 <ClassInfo__25TLZRelocStoreDecompressorSFv>
        387788:	ea5e2845 	b	1b118a4 <TLZRelocStoreDecompressor::$New(void)>
        38778c:	ea5e1bf8 	b	1b0e774 <TLZRelocStoreDecompressor::$Delete(void)>
        387790:	ea5e2422 	b	1b10820 <TLZRelocStoreDecompressor::$Init(TStore *, unsigned long)>
        387794:	ea5e13ae 	b	1b0c654 <TLZRelocStoreDecompressor::$Read(unsigned long, char *, long, unsigned long)>
        387798:	00000000 	andeq	r0, r0, r0
        38779c:	00000048 	andeq	r0, r0, r8, asr #32
        3877a0:	00000061 	andeq	r0, r0, r1, rrx
        3877a4:	00000070 	andeq	r0, r0, r0, ror r0
        3877a8:	00000070 	andeq	r0, r0, r0, ror r0
        3877ac:	00000084 	andeq	r0, r0, r4, lsl #1
        3877b0:	ea5e2c5a 	b	1b12920 <$Sizeof__28TZippyRelocStoreDecompressorSFv>
        3877bc:	ea5e2839 	b	1b118a8 <TZippyRelocStoreDecompressor::$New(void)>
        3877c0:	ea5e1bec 	b	1b0e778 <TZippyRelocStoreDecompressor::$Delete(void)>
        3877d0:	ea000001 	b	3877dc <ClassInfo__28TZippyRelocStoreDecompressorSFv+0x8>
    */
}

