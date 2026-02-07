#include "include/TArithmeticCompressor.h"

/**
 * Symbol: Sizeof__21TArithmeticCompressorSFv
 * Address: 00036c54
 */
void TArithmeticCompressor::Sizeof() {
    /*
         36c54:	e3a000d4 	mov	r0, #212	; 0xd4
         36c58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArithmeticCompressor::New(void)
 * Address: 00036c5c
 */
TArithmeticCompressor::New(void) {
    /*
         36c5c:	e3a01000 	mov	r1, #0	; 0x0
         36c60:	e580102c 	str	r1, [r0, #44]	; fField44
         36c64:	e5801034 	str	r1, [r0, #52]	; fField52
         36c68:	e5801030 	str	r1, [r0, #48]	; fField48
         36c6c:	e5801038 	str	r1, [r0, #56]	; fField56
         36c70:	e5c01028 	strb	r1, [r0, #40]	; fField40
         36c74:	e3a01001 	mov	r1, #1	; 0x1
         36c78:	e5c01029 	strb	r1, [r0, #41]	; fField41
         36c7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArithmeticCompressor::StartModel(void)
 * Address: 00036c80
 */
TArithmeticCompressor::StartModel(void) {
    /*
         36c80:	e92d4000 	stmdb	sp!, {lr}
         36c84:	e3a01000 	mov	r1, #0	; 0x0
         36c88:	e2812001 	add	r2, r1, #1	; 0x1
         36c8c:	e5903030 	ldr	r3, [r0, #48]	; fField48
         36c90:	e7832101 	str	r2, [r3, r1, lsl #2]
         36c94:	e5903034 	ldr	r3, [r0, #52]	; fField52
         36c98:	e0833001 	add	r3, r3, r1
         36c9c:	e5c31001 	strb	r1, [r3, #1]
         36ca0:	e1a01002 	mov	r1, r2
         36ca4:	e3520c01 	cmp	r2, #256	; 0x100
         36ca8:	bafffff6 	blt	36c88 <TArithmeticCompressor::StartModel(void)+0x8>
         36cac:	e3a01001 	mov	r1, #1	; 0x1
         36cb0:	e580103c 	str	r1, [r0, #60]	; fField60
         36cb4:	e3a01001 	mov	r1, #1	; 0x1
         36cb8:	e2811c01 	add	r1, r1, #256	; 0x100
         36cbc:	e590203c 	ldr	r2, [r0, #60]	; fField60
         36cc0:	e1a02082 	mov	r2, r2, lsl #1
         36cc4:	e580203c 	str	r2, [r0, #60]	; fField60
         36cc8:	e0822402 	add	r2, r2, r2, lsl #8
         36ccc:	e3520301 	cmp	r2, #67108864	; 0x4000000
         36cd0:	9afffff9 	bls	36cbc <TArithmeticCompressor::StartModel(void)+0x3c>
         36cd4:	e3a0c000 	mov	ip, #0	; 0x0
         36cd8:	e590202c 	ldr	r2, [r0, #44]	; fField44
         36cdc:	e5a2c404 	str	ip, [r2, #1028]!
         36ce0:	e2803038 	add	r3, r0, #56	; 0x38
         36ce4:	e893000c 	ldmia	r3, {r2, r3}
         36ce8:	e7823101 	str	r3, [r2, r1, lsl #2]
         36cec:	e590202c 	ldr	r2, [r0, #44]	; fField44
         36cf0:	e792e101 	ldr	lr, [r2, r1, lsl #2]
         36cf4:	e08e3003 	add	r3, lr, r3
         36cf8:	e0822101 	add	r2, r2, r1, lsl #2
         36cfc:	e2411001 	sub	r1, r1, #1	; 0x1
         36d00:	e3510000 	cmp	r1, #0	; 0x0
         36d04:	e5223004 	str	r3, [r2, -#4]!
         36d08:	cafffff4 	bgt	36ce0 <TArithmeticCompressor::StartModel(void)+0x60>
         36d0c:	e5900038 	ldr	r0, [r0, #56]	; fField56
         36d10:	e580c000 	str	ip, [r0]
         36d14:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TArithmeticCompressor::UpdateModel(int)
 * Address: 00036d18
 */
TArithmeticCompressor::UpdateModel(int) {
    /*
         36d18:	e92d4000 	stmdb	sp!, {lr}
         36d1c:	e1a02001 	mov	r2, r1
         36d20:	e5903038 	ldr	r3, [r0, #56]	; fField56
         36d24:	ea000000 	b	36d2c <TArithmeticCompressor::UpdateModel(int)+0x14>
         36d28:	e2422001 	sub	r2, r2, #1	; 0x1
         36d2c:	e793c102 	ldr	ip, [r3, r2, lsl #2]
         36d30:	e083e102 	add	lr, r3, r2, lsl #2
         36d34:	e51ee004 	ldr	lr, [lr, -#4]
         36d38:	e13c000e 	teq	ip, lr
         36d3c:	0afffff9 	beq	36d28 <TArithmeticCompressor::UpdateModel(int)+0x10>
         36d40:	e1520001 	cmp	r2, r1
         36d44:	aa000009 	bge	36d70 <TArithmeticCompressor::UpdateModel(int)+0x58>
         36d48:	e5903034 	ldr	r3, [r0, #52]	; fField52
         36d4c:	e7d3c002 	ldrb	ip, [r3, r2]
         36d50:	e7d3e001 	ldrb	lr, [r3, r1]
         36d54:	e7c3e002 	strb	lr, [r3, r2]
         36d58:	e5903034 	ldr	r3, [r0, #52]	; fField52
         36d5c:	e7c3c001 	strb	ip, [r3, r1]
         36d60:	e5903030 	ldr	r3, [r0, #48]	; fField48
         36d64:	e783110c 	str	r1, [r3, ip, lsl #2]
         36d68:	e5901030 	ldr	r1, [r0, #48]	; fField48
         36d6c:	e781210e 	str	r2, [r1, lr, lsl #2]
         36d70:	e5901038 	ldr	r1, [r0, #56]	; fField56
         36d74:	e0811102 	add	r1, r1, r2, lsl #2
         36d78:	e590303c 	ldr	r3, [r0, #60]	; fField60
         36d7c:	e591c000 	ldr	ip, [r1]
         36d80:	e083300c 	add	r3, r3, ip
         36d84:	e3520000 	cmp	r2, #0	; 0x0
         36d88:	e5813000 	str	r3, [r1]
         36d8c:	da000008 	ble	36db4 <TArithmeticCompressor::UpdateModel(int)+0x9c>
         36d90:	e2422001 	sub	r2, r2, #1	; 0x1
         36d94:	e590102c 	ldr	r1, [r0, #44]	; fField44
         36d98:	e0811102 	add	r1, r1, r2, lsl #2
         36d9c:	e590303c 	ldr	r3, [r0, #60]	; fField60
         36da0:	e591c000 	ldr	ip, [r1]
         36da4:	e083300c 	add	r3, r3, ip
         36da8:	e3520000 	cmp	r2, #0	; 0x0
         36dac:	e5813000 	str	r3, [r1]
         36db0:	cafffff6 	bgt	36d90 <TArithmeticCompressor::UpdateModel(int)+0x78>
         36db4:	e590102c 	ldr	r1, [r0, #44]	; fField44
         36db8:	e5912000 	ldr	r2, [r1]
         36dbc:	e3520302 	cmp	r2, #134217728	; 0x8000000
         36dc0:	98bd8000 	ldmlsia	sp!, {pc}
         36dc4:	e3a02000 	mov	r2, #0	; 0x0
         36dc8:	e5a12404 	str	r2, [r1, #1028]!
         36dcc:	e3a01001 	mov	r1, #1	; 0x1
         36dd0:	e2811c01 	add	r1, r1, #256	; 0x100
         36dd4:	e5902038 	ldr	r2, [r0, #56]	; fField56
         36dd8:	e7923101 	ldr	r3, [r2, r1, lsl #2]
         36ddc:	e2833001 	add	r3, r3, #1	; 0x1
         36de0:	e1a030a3 	mov	r3, r3, lsr #1
         36de4:	e7823101 	str	r3, [r2, r1, lsl #2]
         36de8:	e590202c 	ldr	r2, [r0, #44]	; fField44
         36dec:	e792c101 	ldr	ip, [r2, r1, lsl #2]
         36df0:	e08c3003 	add	r3, ip, r3
         36df4:	e0822101 	add	r2, r2, r1, lsl #2
         36df8:	e2411001 	sub	r1, r1, #1	; 0x1
         36dfc:	e3510000 	cmp	r1, #0	; 0x0
         36e00:	e5223004 	str	r3, [r2, -#4]!
         36e04:	cafffff2 	bgt	36dd4 <TArithmeticCompressor::UpdateModel(int)+0xbc>
         36e08:	e590103c 	ldr	r1, [r0, #60]	; fField60
         36e0c:	e3510001 	cmp	r1, #1	; 0x1
         36e10:	81a010a1 	movhi	r1, r1, lsr #1
         36e14:	85a0103c 	strhi	r1, [r0, #60]!	; fField60
         36e18:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TArithmeticCompressor::StartOutputtingBits(void)
 * Address: 00036e1c
 */
TArithmeticCompressor::StartOutputtingBits(void) {
    /*
         36e1c:	e3a01000 	mov	r1, #0	; 0x0
         36e20:	e5c01040 	strb	r1, [r0, #64]	; fField64
         36e24:	e3a01008 	mov	r1, #8	; 0x8
         36e28:	e5a01044 	str	r1, [r0, #68]!	; fField68
         36e2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArithmeticCompressor::WriteByte(unsigned char)
 * Address: 00036e30
 */
TArithmeticCompressor::WriteByte(unsigned char) {
    /*
         36e30:	e1a0c00d 	mov	ip, sp
         36e34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         36e38:	e24cb004 	sub	fp, ip, #4	; 0x4
         36e3c:	e1a04000 	mov	r4, r0
         36e40:	e20100ff 	and	r0, r1, #255	; 0xff
         36e44:	e59410cc 	ldr	r1, [r4, #204]	; fField204
         36e48:	e4c10001 	strb	r0, [r1], #1
         36e4c:	e58410cc 	str	r1, [r4, #204]	; fField204
         36e50:	e59400c8 	ldr	r0, [r4, #200]	; fField200
         36e54:	e1510000 	cmp	r1, r0
         36e58:	391ba830 	ldmccdb	fp, {r4, r5, fp, sp, pc}
         36e5c:	e2841048 	add	r1, r4, #72	; 0x48
         36e60:	e1a05001 	mov	r5, r1
         36e64:	e3a03000 	mov	r3, #0	; 0x0
         36e68:	e3a02080 	mov	r2, #128	; 0x80
         36e6c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         36e70:	e1a0e00f 	mov	lr, pc
         36e74:	e594f010 	ldr	pc, [r4, #16]	; fField16
         36e78:	e1b01000 	movs	r1, r0
         36e7c:	0a000003 	beq	36e90 <TArithmeticCompressor::WriteByte(unsigned char)+0x60>
         36e80:	e59f0010 	ldr	r0, [pc, #10]	; 36e98 <TArithmeticCompressor::WriteByte(unsigned char)+0x68>
         36e84:	e5900000 	ldr	r0, [r0]
         36e88:	e3a02000 	mov	r2, #0	; 0x0
         36e8c:	eb6eb0c2 	bl	1be319c <$Throw>
         36e90:	e5a450cc 	str	r5, [r4, #204]!	; fField204
         36e94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         36e98:	00371320 	eoreqs	r1, r7, r0, lsr #6
    */
}

/**
 * Symbol: TArithmeticCompressor::FlushBits(void)
 * Address: 00036e9c
 */
TArithmeticCompressor::FlushBits(void) {
    /*
         36e9c:	e1a0c00d 	mov	ip, sp
         36ea0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         36ea4:	e24cb004 	sub	fp, ip, #4	; 0x4
         36ea8:	e1a04000 	mov	r4, r0
         36eac:	e59000cc 	ldr	r0, [r0, #204]	; fField204
         36eb0:	e2841048 	add	r1, r4, #72	; 0x48
         36eb4:	e0402001 	sub	r2, r0, r1
         36eb8:	e3a03000 	mov	r3, #0	; 0x0
         36ebc:	e5940014 	ldr	r0, [r4, #20]	; fField20
         36ec0:	e1a0e00f 	mov	lr, pc
         36ec4:	e594f010 	ldr	pc, [r4, #16]	; fField16
         36ec8:	e1b01000 	movs	r1, r0
         36ecc:	e59f5048 	ldr	r5, [pc, #48]	; 36f1c <TArithmeticCompressor::FlushBits(void)+0x80>	; fField48
         36ed0:	13a02000 	movne	r2, #0	; 0x0
         36ed4:	15950000 	ldrne	r0, [r5]
         36ed8:	1b6eb0af 	blne	1be319c <$Throw>
         36edc:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         36ee0:	e5940044 	ldr	r0, [r4, #68]	; fField68
         36ee4:	e1a00031 	mov	r0, r1, lsr r0
         36ee8:	e5c40040 	strb	r0, [r4, #64]	; fField64
         36eec:	e2841040 	add	r1, r4, #64	; 0x40
         36ef0:	e3a02001 	mov	r2, #1	; 0x1
         36ef4:	e1a03002 	mov	r3, r2
         36ef8:	e5940014 	ldr	r0, [r4, #20]	; fField20
         36efc:	e1a0e00f 	mov	lr, pc
         36f00:	e594f010 	ldr	pc, [r4, #16]	; fField16
         36f04:	e1b01000 	movs	r1, r0
         36f08:	13a02000 	movne	r2, #0	; 0x0
         36f0c:	15950000 	ldrne	r0, [r5]
         36f10:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         36f14:	1a6eb0a0 	bne	1be319c <$Throw>
         36f18:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         36f1c:	00371320 	eoreqs	r1, r7, r0, lsr #6
    */
}

/**
 * Symbol: TArithmeticCompressor::Delete(void)
 * Address: 000370fc
 */
TArithmeticCompressor::Delete(void) {
    /*
         370fc:	ea6da7f8 	b	1ba10e4 <TArithmeticCompressor::$Cleanup(void)>
    */
}

/**
 * Symbol: TArithmeticCompressor::Cleanup(void)
 * Address: 000378c0
 */
TArithmeticCompressor::Cleanup(void) {
    /*
         378c0:	e1a0c00d 	mov	ip, sp
         378c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         378c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         378cc:	e1a04000 	mov	r4, r0
         378d0:	e5d00029 	ldrb	r0, [r0, #41]	; fField41
         378d4:	e3300000 	teq	r0, #0	; 0x0
         378d8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         378dc:	e594002c 	ldr	r0, [r4, #44]	; fField44
         378e0:	eb6e577e 	bl	1bcd6e0 <$__dl(void *)>
         378e4:	e5940034 	ldr	r0, [r4, #52]	; fField52
         378e8:	eb6e577c 	bl	1bcd6e0 <$__dl(void *)>
         378ec:	e5940038 	ldr	r0, [r4, #56]	; fField56
         378f0:	eb6e577a 	bl	1bcd6e0 <$__dl(void *)>
         378f4:	e5940030 	ldr	r0, [r4, #48]	; fField48
         378f8:	eb6e5778 	bl	1bcd6e0 <$__dl(void *)>
         378fc:	e3a00000 	mov	r0, #0	; 0x0
         37900:	e584002c 	str	r0, [r4, #44]	; fField44
         37904:	e5840034 	str	r0, [r4, #52]	; fField52
         37908:	e5840030 	str	r0, [r4, #48]	; fField48
         3790c:	e5840038 	str	r0, [r4, #56]	; fField56
         37910:	e5c40028 	strb	r0, [r4, #40]	; fField40
         37914:	e3a00001 	mov	r0, #1	; 0x1
         37918:	e5c40029 	strb	r0, [r4, #41]	; fField41
         3791c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TArithmeticCompressor::Init(void *)
 * Address: 00037920
 */
TArithmeticCompressor::Init(void *) {
    /*
         37920:	e1a0c00d 	mov	ip, sp
         37924:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         37928:	e24cb004 	sub	fp, ip, #4	; 0x4
         3792c:	e1a04000 	mov	r4, r0
         37930:	e1a05001 	mov	r5, r1
         37934:	e3a06000 	mov	r6, #0	; 0x0
         37938:	eb6da5e9 	bl	1ba10e4 <TArithmeticCompressor::$Cleanup(void)>
         3793c:	e3350000 	teq	r5, #0	; 0x0
         37940:	1a00001c 	bne	379b8 <TArithmeticCompressor::Init(void *)+0x98>
         37944:	e3a00001 	mov	r0, #1	; 0x1
         37948:	e5c40028 	strb	r0, [r4, #40]	; fField40
         3794c:	e5c40029 	strb	r0, [r4, #41]	; fField41
         37950:	e3a00008 	mov	r0, #8	; 0x8
         37954:	e2800b01 	add	r0, r0, #1024	; 0x400
         37958:	eb6e5b76 	bl	1bce738 <$__nw(unsigned int)>
         3795c:	e584002c 	str	r0, [r4, #44]	; fField44
         37960:	e3a00008 	mov	r0, #8	; 0x8
         37964:	e2800b01 	add	r0, r0, #1024	; 0x400
         37968:	eb6e5b72 	bl	1bce738 <$__nw(unsigned int)>
         3796c:	e5840038 	str	r0, [r4, #56]	; fField56
         37970:	e3a00002 	mov	r0, #2	; 0x2
         37974:	e2800c01 	add	r0, r0, #256	; 0x100
         37978:	eb6e5b6e 	bl	1bce738 <$__nw(unsigned int)>
         3797c:	e5840034 	str	r0, [r4, #52]	; fField52
         37980:	e3a00b01 	mov	r0, #1024	; 0x400
         37984:	eb6e5b6b 	bl	1bce738 <$__nw(unsigned int)>
         37988:	e5840030 	str	r0, [r4, #48]	; fField48
         3798c:	e594102c 	ldr	r1, [r4, #44]	; fField44
         37990:	e3310000 	teq	r1, #0	; 0x0
         37994:	15941038 	ldrne	r1, [r4, #56]	; fField56
         37998:	13310000 	teqne	r1, #0	; 0x0
         3799c:	15941034 	ldrne	r1, [r4, #52]	; fField52
         379a0:	13310000 	teqne	r1, #0	; 0x0
         379a4:	13300000 	teqne	r0, #0	; 0x0
         379a8:	03a060e9 	moveq	r6, #233	; 0xe9
         379ac:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
         379b0:	0a00001d 	beq	37a2c <TArithmeticCompressor::Init(void *)+0x10c>
         379b4:	ea00000b 	b	379e8 <TArithmeticCompressor::Init(void *)+0xc8>
         379b8:	e3a00000 	mov	r0, #0	; 0x0
         379bc:	e5c40029 	strb	r0, [r4, #41]	; fField41
         379c0:	e5950000 	ldr	r0, [r5]
         379c4:	e584002c 	str	r0, [r4, #44]	; fField44
         379c8:	e5950004 	ldr	r0, [r5, #4]
         379cc:	e5840030 	str	r0, [r4, #48]	; fField48
         379d0:	e5950008 	ldr	r0, [r5, #8]
         379d4:	e5840034 	str	r0, [r4, #52]	; fField52
         379d8:	e595000c 	ldr	r0, [r5, #12]
         379dc:	e5840038 	str	r0, [r4, #56]	; fField56
         379e0:	e5d50010 	ldrb	r0, [r5, #16]	; fField16
         379e4:	e5c40028 	strb	r0, [r4, #40]	; fField40
         379e8:	e1a00004 	mov	r0, r4
         379ec:	eb6db628 	bl	1ba5294 <TArithmeticCompressor::$Reset(void)>
         379f0:	e3a000ea 	mov	r0, #234	; 0xea
         379f4:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         379f8:	e594102c 	ldr	r1, [r4, #44]	; fField44
         379fc:	e3310000 	teq	r1, #0	; 0x0
         37a00:	15941030 	ldrne	r1, [r4, #48]	; fField48
         37a04:	13310000 	teqne	r1, #0	; 0x0
         37a08:	01a06000 	moveq	r6, r0
         37a0c:	e5d41028 	ldrb	r1, [r4, #40]	; fField40
         37a10:	e3310000 	teq	r1, #0	; 0x0
         37a14:	0a000004 	beq	37a2c <TArithmeticCompressor::Init(void *)+0x10c>
         37a18:	e5941034 	ldr	r1, [r4, #52]	; fField52
         37a1c:	e3310000 	teq	r1, #0	; 0x0
         37a20:	15b41038 	ldrne	r1, [r4, #56]!	; fField56
         37a24:	13310000 	teqne	r1, #0	; 0x0
         37a28:	01a06000 	moveq	r6, r0
         37a2c:	e1a00006 	mov	r0, r6
         37a30:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TArithmeticCompressor::Reset(void)
 * Address: 00037a34
 */
TArithmeticCompressor::Reset(void) {
    /*
         37a34:	e1a0c00d 	mov	ip, sp
         37a38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         37a3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         37a40:	e1a04000 	mov	r4, r0
         37a44:	e5d00028 	ldrb	r0, [r0, #40]	; fField40
         37a48:	e3300000 	teq	r0, #0	; 0x0
         37a4c:	11a00004 	movne	r0, r4
         37a50:	1b6db61f 	blne	1ba52d4 <TArithmeticCompressor::$StartModel(void)>
         37a54:	e1a00004 	mov	r0, r4
         37a58:	eb6db61f 	bl	1ba52dc <TArithmeticCompressor::$StartOutputtingBits(void)>
         37a5c:	e2840048 	add	r0, r4, #72	; 0x48
         37a60:	e58400cc 	str	r0, [r4, #204]	; fField204
         37a64:	e28400c8 	add	r0, r4, #200	; 0xc8
         37a68:	e58400c8 	str	r0, [r4, #200]	; fField200
         37a6c:	e3a00102 	mov	r0, #-2147483648	; 0x80000000
         37a70:	e5840018 	str	r0, [r4, #24]	; fField24
         37a74:	e584001c 	str	r0, [r4, #28]	; fField28
         37a78:	e3a00000 	mov	r0, #0	; 0x0
         37a7c:	e5a40024 	str	r0, [r4, #36]!	; fField36
         37a80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TArithmeticCompressor::WriteChunk(void *, long)
 * Address: 00037a84
 */
TArithmeticCompressor::WriteChunk(void *, long) {
    /*
         37a84:	e1a0c00d 	mov	ip, sp
         37a88:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         37a8c:	e24cb004 	sub	fp, ip, #4	; 0x4
         37a90:	e1a04000 	mov	r4, r0
         37a94:	e1a06001 	mov	r6, r1
         37a98:	e1a05002 	mov	r5, r2
         37a9c:	e3a08000 	mov	r8, #0	; 0x0
         37aa0:	e3a00000 	mov	r0, #0	; 0x0
         37aa4:	e52d006c 	str	r0, [sp, -#108]!
         37aa8:	e28d0008 	add	r0, sp, #8	; 0x8
         37aac:	eb6debb0 	bl	1bb2974 <$setjmp>
         37ab0:	e3300000 	teq	r0, #0	; 0x0
         37ab4:	1a000015 	bne	37b10 <TArithmeticCompressor::WriteChunk(void *, long)+0x8c>
         37ab8:	e1a0000d 	mov	r0, sp
         37abc:	eb6ea16e 	bl	1be007c <$AddExceptionHandler>
         37ac0:	e3a07000 	mov	r7, #0	; 0x0
         37ac4:	e3550000 	cmp	r5, #0	; 0x0
         37ac8:	da000019 	ble	37b34 <TArithmeticCompressor::WriteChunk(void *, long)+0xb0>
         37acc:	e7d60007 	ldrb	r0, [r6, r7]
         37ad0:	e5941030 	ldr	r1, [r4, #48]	; fField48
         37ad4:	e7919100 	ldr	r9, [r1, r0, lsl #2]
         37ad8:	e1a01009 	mov	r1, r9
         37adc:	e1a00004 	mov	r0, r4
         37ae0:	eb6db1d5 	bl	1ba423c <TArithmeticCompressor::$NarrowRegion(int)>
         37ae4:	e1a00004 	mov	r0, r4
         37ae8:	eb6db1df 	bl	1ba426c <TArithmeticCompressor::$PushOutBits(void)>
         37aec:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         37af0:	e3300000 	teq	r0, #0	; 0x0
         37af4:	11a01009 	movne	r1, r9
         37af8:	11a00004 	movne	r0, r4
         37afc:	1b6db9ff 	blne	1ba6300 <TArithmeticCompressor::$UpdateModel(int)>
         37b00:	e2877001 	add	r7, r7, #1	; 0x1
         37b04:	e1570005 	cmp	r7, r5
         37b08:	baffffef 	blt	37acc <TArithmeticCompressor::WriteChunk(void *, long)+0x48>
         37b0c:	ea000008 	b	37b34 <TArithmeticCompressor::WriteChunk(void *, long)+0xb0>
         37b10:	e59d0060 	ldr	r0, [sp, #96]
         37b14:	e59f1028 	ldr	r1, [pc, #28]	; 37b44 <TArithmeticCompressor::WriteChunk(void *, long)+0xc0>	; fField28
         37b18:	e5911000 	ldr	r1, [r1]
         37b1c:	eb6ead9c 	bl	1be3194 <$Subexception>
         37b20:	e3300000 	teq	r0, #0	; 0x0
         37b24:	159d8064 	ldrne	r8, [sp, #100]
         37b28:	1a000001 	bne	37b34 <TArithmeticCompressor::WriteChunk(void *, long)+0xb0>
         37b2c:	e1a0000d 	mov	r0, sp
         37b30:	eb6ea987 	bl	1be2154 <$NextHandler>
         37b34:	e1a0000d 	mov	r0, sp
         37b38:	eb6ea55e 	bl	1be10b8 <$ExitHandler>
         37b3c:	e1a00008 	mov	r0, r8
         37b40:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         37b44:	00371320 	eoreqs	r1, r7, r0, lsr #6
    */
}

/**
 * Symbol: TArithmeticCompressor::NarrowRegion(int)
 * Address: 00037b48
 */
TArithmeticCompressor::NarrowRegion(int) {
    /*
         37b48:	e92d4010 	stmdb	sp!, {r4, lr}
         37b4c:	e590301c 	ldr	r3, [r0, #28]	; fField28
         37b50:	e1a0c003 	mov	ip, r3
         37b54:	e590e02c 	ldr	lr, [r0, #44]	; fField44
         37b58:	e59e2000 	ldr	r2, [lr]
         37b5c:	e1a02202 	mov	r2, r2, lsl #4
         37b60:	e3310001 	teq	r1, #1	; 0x1
         37b64:	1a00001b 	bne	37bd8 <TArithmeticCompressor::NarrowRegion(int)+0x90>
         37b68:	e5be1004 	ldr	r1, [lr, #4]!
         37b6c:	e3a0e000 	mov	lr, #0	; 0x0
         37b70:	e15c0002 	cmp	ip, r2
         37b74:	204cc002 	subcs	ip, ip, r2
         37b78:	21a0e001 	movcs	lr, r1
         37b7c:	e1a0c08c 	mov	ip, ip, lsl #1
         37b80:	e1a0e08e 	mov	lr, lr, lsl #1
         37b84:	e15c0002 	cmp	ip, r2
         37b88:	204cc002 	subcs	ip, ip, r2
         37b8c:	208ee001 	addcs	lr, lr, r1
         37b90:	e1a0c08c 	mov	ip, ip, lsl #1
         37b94:	e1a0e08e 	mov	lr, lr, lsl #1
         37b98:	e15c0002 	cmp	ip, r2
         37b9c:	204cc002 	subcs	ip, ip, r2
         37ba0:	208ee001 	addcs	lr, lr, r1
         37ba4:	e1a0c08c 	mov	ip, ip, lsl #1
         37ba8:	e1a0e08e 	mov	lr, lr, lsl #1
         37bac:	e15c0002 	cmp	ip, r2
         37bb0:	204cc002 	subcs	ip, ip, r2
         37bb4:	208ee001 	addcs	lr, lr, r1
         37bb8:	e1a0e08e 	mov	lr, lr, lsl #1
         37bbc:	e152008c 	cmp	r2, ip, lsl #1
         37bc0:	908ee001 	addls	lr, lr, r1
         37bc4:	e5901018 	ldr	r1, [r0, #24]	; fField24
         37bc8:	e081100e 	add	r1, r1, lr
         37bcc:	e5801018 	str	r1, [r0, #24]	; fField24
         37bd0:	e043100e 	sub	r1, r3, lr
         37bd4:	ea000026 	b	37c74 <TArithmeticCompressor::NarrowRegion(int)+0x12c>
         37bd8:	e79e3101 	ldr	r3, [lr, r1, lsl #2]
         37bdc:	e08e1101 	add	r1, lr, r1, lsl #2
         37be0:	e5111004 	ldr	r1, [r1, -#4]
         37be4:	e3a0e000 	mov	lr, #0	; 0x0
         37be8:	e1a0400e 	mov	r4, lr
         37bec:	e15c0002 	cmp	ip, r2
         37bf0:	204cc002 	subcs	ip, ip, r2
         37bf4:	21a04003 	movcs	r4, r3
         37bf8:	21a0e001 	movcs	lr, r1
         37bfc:	e1a0c08c 	mov	ip, ip, lsl #1
         37c00:	e1a04084 	mov	r4, r4, lsl #1
         37c04:	e1a0e08e 	mov	lr, lr, lsl #1
         37c08:	e15c0002 	cmp	ip, r2
         37c0c:	204cc002 	subcs	ip, ip, r2
         37c10:	20844003 	addcs	r4, r4, r3
         37c14:	208ee001 	addcs	lr, lr, r1
         37c18:	e1a0c08c 	mov	ip, ip, lsl #1
         37c1c:	e1a04084 	mov	r4, r4, lsl #1
         37c20:	e1a0e08e 	mov	lr, lr, lsl #1
         37c24:	e15c0002 	cmp	ip, r2
         37c28:	204cc002 	subcs	ip, ip, r2
         37c2c:	20844003 	addcs	r4, r4, r3
         37c30:	208ee001 	addcs	lr, lr, r1
         37c34:	e1a0c08c 	mov	ip, ip, lsl #1
         37c38:	e1a04084 	mov	r4, r4, lsl #1
         37c3c:	e1a0e08e 	mov	lr, lr, lsl #1
         37c40:	e15c0002 	cmp	ip, r2
         37c44:	204cc002 	subcs	ip, ip, r2
         37c48:	20844003 	addcs	r4, r4, r3
         37c4c:	208ee001 	addcs	lr, lr, r1
         37c50:	e1a04084 	mov	r4, r4, lsl #1
         37c54:	e1a0e08e 	mov	lr, lr, lsl #1
         37c58:	e152008c 	cmp	r2, ip, lsl #1
         37c5c:	90844003 	addls	r4, r4, r3
         37c60:	908ee001 	addls	lr, lr, r1
         37c64:	e5901018 	ldr	r1, [r0, #24]	; fField24
         37c68:	e0811004 	add	r1, r1, r4
         37c6c:	e5801018 	str	r1, [r0, #24]	; fField24
         37c70:	e04e1004 	sub	r1, lr, r4
         37c74:	e5a0101c 	str	r1, [r0, #28]!	; fField28
         37c78:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TArithmeticCompressor::PushOutBits(void)
 * Address: 00037c7c
 */
TArithmeticCompressor::PushOutBits(void) {
    /*
         37c7c:	e1a0c00d 	mov	ip, sp
         37c80:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         37c84:	e24cb004 	sub	fp, ip, #4	; 0x4
         37c88:	e1a04000 	mov	r4, r0
         37c8c:	e590001c 	ldr	r0, [r0, #28]	; fField28
         37c90:	e3500101 	cmp	r0, #1073741824	; 0x40000000
         37c94:	891ba830 	ldmhidb	fp, {r4, r5, fp, sp, pc}
         37c98:	e3a05008 	mov	r5, #8	; 0x8
         37c9c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         37ca0:	e3500102 	cmp	r0, #-2147483648	; 0x80000000
         37ca4:	3a000027 	bcc	37d48 <TArithmeticCompressor::PushOutBits(void)+0xcc>
         37ca8:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37cac:	e3300000 	teq	r0, #0	; 0x0
         37cb0:	1a000003 	bne	37cc4 <TArithmeticCompressor::PushOutBits(void)+0x48>
         37cb4:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         37cb8:	e1a00004 	mov	r0, r4
         37cbc:	eb6db991 	bl	1ba6308 <TArithmeticCompressor::$WriteByte(unsigned char)>
         37cc0:	e5845044 	str	r5, [r4, #68]	; fField68
         37cc4:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37cc8:	e1a000a0 	mov	r0, r0, lsr #1
         37ccc:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37cd0:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37cd4:	e3800080 	orr	r0, r0, #128	; 0x80
         37cd8:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37cdc:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37ce0:	e2400001 	sub	r0, r0, #1	; 0x1
         37ce4:	e5840044 	str	r0, [r4, #68]	; fField68
         37ce8:	e5940024 	ldr	r0, [r4, #36]	; fField36
         37cec:	e3500000 	cmp	r0, #0	; 0x0
         37cf0:	9a000011 	bls	37d3c <TArithmeticCompressor::PushOutBits(void)+0xc0>
         37cf4:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37cf8:	e3300000 	teq	r0, #0	; 0x0
         37cfc:	1a000003 	bne	37d10 <TArithmeticCompressor::PushOutBits(void)+0x94>
         37d00:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         37d04:	e1a00004 	mov	r0, r4
         37d08:	eb6db97e 	bl	1ba6308 <TArithmeticCompressor::$WriteByte(unsigned char)>
         37d0c:	e5845044 	str	r5, [r4, #68]	; fField68
         37d10:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37d14:	e1a000a0 	mov	r0, r0, lsr #1
         37d18:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37d1c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37d20:	e2400001 	sub	r0, r0, #1	; 0x1
         37d24:	e5840044 	str	r0, [r4, #68]	; fField68
         37d28:	e5940024 	ldr	r0, [r4, #36]	; fField36
         37d2c:	e2400001 	sub	r0, r0, #1	; 0x1
         37d30:	e5840024 	str	r0, [r4, #36]	; fField36
         37d34:	e3500000 	cmp	r0, #0	; 0x0
         37d38:	8affffed 	bhi	37cf4 <TArithmeticCompressor::PushOutBits(void)+0x78>
         37d3c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         37d40:	e2800102 	add	r0, r0, #-2147483648	; 0x80000000
         37d44:	ea00002d 	b	37e00 <TArithmeticCompressor::PushOutBits(void)+0x184>
         37d48:	e594101c 	ldr	r1, [r4, #28]	; fField28
         37d4c:	e0801001 	add	r1, r0, r1
         37d50:	e3510102 	cmp	r1, #-2147483648	; 0x80000000
         37d54:	8a000025 	bhi	37df0 <TArithmeticCompressor::PushOutBits(void)+0x174>
         37d58:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37d5c:	e3300000 	teq	r0, #0	; 0x0
         37d60:	1a000003 	bne	37d74 <TArithmeticCompressor::PushOutBits(void)+0xf8>
         37d64:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         37d68:	e1a00004 	mov	r0, r4
         37d6c:	eb6db965 	bl	1ba6308 <TArithmeticCompressor::$WriteByte(unsigned char)>
         37d70:	e5845044 	str	r5, [r4, #68]	; fField68
         37d74:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37d78:	e1a000a0 	mov	r0, r0, lsr #1
         37d7c:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37d80:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37d84:	e2400001 	sub	r0, r0, #1	; 0x1
         37d88:	e5840044 	str	r0, [r4, #68]	; fField68
         37d8c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         37d90:	e3500000 	cmp	r0, #0	; 0x0
         37d94:	9a00001a 	bls	37e04 <TArithmeticCompressor::PushOutBits(void)+0x188>
         37d98:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37d9c:	e3300000 	teq	r0, #0	; 0x0
         37da0:	1a000003 	bne	37db4 <TArithmeticCompressor::PushOutBits(void)+0x138>
         37da4:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         37da8:	e1a00004 	mov	r0, r4
         37dac:	eb6db955 	bl	1ba6308 <TArithmeticCompressor::$WriteByte(unsigned char)>
         37db0:	e5845044 	str	r5, [r4, #68]	; fField68
         37db4:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37db8:	e1a000a0 	mov	r0, r0, lsr #1
         37dbc:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37dc0:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37dc4:	e3800080 	orr	r0, r0, #128	; 0x80
         37dc8:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37dcc:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37dd0:	e2400001 	sub	r0, r0, #1	; 0x1
         37dd4:	e5840044 	str	r0, [r4, #68]	; fField68
         37dd8:	e5940024 	ldr	r0, [r4, #36]	; fField36
         37ddc:	e2400001 	sub	r0, r0, #1	; 0x1
         37de0:	e5840024 	str	r0, [r4, #36]	; fField36
         37de4:	e3500000 	cmp	r0, #0	; 0x0
         37de8:	8affffea 	bhi	37d98 <TArithmeticCompressor::PushOutBits(void)+0x11c>
         37dec:	ea000004 	b	37e04 <TArithmeticCompressor::PushOutBits(void)+0x188>
         37df0:	e5941024 	ldr	r1, [r4, #36]	; fField36
         37df4:	e2811001 	add	r1, r1, #1	; 0x1
         37df8:	e2800103 	add	r0, r0, #-1073741824	; 0xc0000000
         37dfc:	e5841024 	str	r1, [r4, #36]	; fField36
         37e00:	e5840018 	str	r0, [r4, #24]	; fField24
         37e04:	e5940018 	ldr	r0, [r4, #24]	; fField24
         37e08:	e1a00080 	mov	r0, r0, lsl #1
         37e0c:	e5840018 	str	r0, [r4, #24]	; fField24
         37e10:	e594001c 	ldr	r0, [r4, #28]	; fField28
         37e14:	e1a00080 	mov	r0, r0, lsl #1
         37e18:	e584001c 	str	r0, [r4, #28]	; fField28
         37e1c:	e3500101 	cmp	r0, #1073741824	; 0x40000000
         37e20:	9affff9d 	bls	37c9c <TArithmeticCompressor::PushOutBits(void)+0x20>
         37e24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TArithmeticCompressor::Flush(void)
 * Address: 00037e28
 */
TArithmeticCompressor::Flush(void) {
    /*
         37e28:	e1a0c00d 	mov	ip, sp
         37e2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         37e30:	e24cb004 	sub	fp, ip, #4	; 0x4
         37e34:	e1a04000 	mov	r4, r0
         37e38:	e3a06000 	mov	r6, #0	; 0x0
         37e3c:	e3a00000 	mov	r0, #0	; 0x0
         37e40:	e52d006c 	str	r0, [sp, -#108]!
         37e44:	e28d0008 	add	r0, sp, #8	; 0x8
         37e48:	eb6deac9 	bl	1bb2974 <$setjmp>
         37e4c:	e3300000 	teq	r0, #0	; 0x0
         37e50:	1a000074 	bne	38028 <TArithmeticCompressor::Flush(void)+0x200>
         37e54:	e1a0000d 	mov	r0, sp
         37e58:	eb6ea087 	bl	1be007c <$AddExceptionHandler>
         37e5c:	e3a01001 	mov	r1, #1	; 0x1
         37e60:	e2811c01 	add	r1, r1, #256	; 0x100
         37e64:	e1a00004 	mov	r0, r4
         37e68:	eb6db0f3 	bl	1ba423c <TArithmeticCompressor::$NarrowRegion(int)>
         37e6c:	e1a00004 	mov	r0, r4
         37e70:	eb6db0fd 	bl	1ba426c <TArithmeticCompressor::$PushOutBits(void)>
         37e74:	e3a05008 	mov	r5, #8	; 0x8
         37e78:	e3a07102 	mov	r7, #-2147483648	; 0x80000000
         37e7c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         37e80:	e5941018 	ldr	r1, [r4, #24]	; fField24
         37e84:	e08100a0 	add	r0, r1, r0, lsr #1
         37e88:	e3500102 	cmp	r0, #-2147483648	; 0x80000000
         37e8c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37e90:	3a00002e 	bcc	37f50 <TArithmeticCompressor::Flush(void)+0x128>
         37e94:	e3300000 	teq	r0, #0	; 0x0
         37e98:	1a000003 	bne	37eac <TArithmeticCompressor::Flush(void)+0x84>
         37e9c:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         37ea0:	e1a00004 	mov	r0, r4
         37ea4:	eb6db917 	bl	1ba6308 <TArithmeticCompressor::$WriteByte(unsigned char)>
         37ea8:	e5845044 	str	r5, [r4, #68]	; fField68
         37eac:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37eb0:	e1a000a0 	mov	r0, r0, lsr #1
         37eb4:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37eb8:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37ebc:	e3800080 	orr	r0, r0, #128	; 0x80
         37ec0:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37ec4:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37ec8:	e2400001 	sub	r0, r0, #1	; 0x1
         37ecc:	e5840044 	str	r0, [r4, #68]	; fField68
         37ed0:	e5940024 	ldr	r0, [r4, #36]	; fField36
         37ed4:	e3500000 	cmp	r0, #0	; 0x0
         37ed8:	9a000011 	bls	37f24 <TArithmeticCompressor::Flush(void)+0xfc>
         37edc:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37ee0:	e3300000 	teq	r0, #0	; 0x0
         37ee4:	1a000003 	bne	37ef8 <TArithmeticCompressor::Flush(void)+0xd0>
         37ee8:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         37eec:	e1a00004 	mov	r0, r4
         37ef0:	eb6db904 	bl	1ba6308 <TArithmeticCompressor::$WriteByte(unsigned char)>
         37ef4:	e5845044 	str	r5, [r4, #68]	; fField68
         37ef8:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37efc:	e1a000a0 	mov	r0, r0, lsr #1
         37f00:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37f04:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37f08:	e2400001 	sub	r0, r0, #1	; 0x1
         37f0c:	e5840044 	str	r0, [r4, #68]	; fField68
         37f10:	e5940024 	ldr	r0, [r4, #36]	; fField36
         37f14:	e2400001 	sub	r0, r0, #1	; 0x1
         37f18:	e5840024 	str	r0, [r4, #36]	; fField36
         37f1c:	e3500000 	cmp	r0, #0	; 0x0
         37f20:	8affffed 	bhi	37edc <TArithmeticCompressor::Flush(void)+0xb4>
         37f24:	e5940018 	ldr	r0, [r4, #24]	; fField24
         37f28:	e1a01000 	mov	r1, r0
         37f2c:	e594201c 	ldr	r2, [r4, #28]	; fField28
         37f30:	e0802002 	add	r2, r0, r2
         37f34:	e2822102 	add	r2, r2, #-2147483648	; 0x80000000
         37f38:	e3500102 	cmp	r0, #-2147483648	; 0x80000000
         37f3c:	e584201c 	str	r2, [r4, #28]	; fField28
         37f40:	22810102 	addcs	r0, r1, #-2147483648	; 0x80000000
         37f44:	33a00000 	movcc	r0, #0	; 0x0
         37f48:	e5840018 	str	r0, [r4, #24]	; fField24
         37f4c:	ea000029 	b	37ff8 <TArithmeticCompressor::Flush(void)+0x1d0>
         37f50:	e3300000 	teq	r0, #0	; 0x0
         37f54:	1a000003 	bne	37f68 <TArithmeticCompressor::Flush(void)+0x140>
         37f58:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         37f5c:	e1a00004 	mov	r0, r4
         37f60:	eb6db8e8 	bl	1ba6308 <TArithmeticCompressor::$WriteByte(unsigned char)>
         37f64:	e5845044 	str	r5, [r4, #68]	; fField68
         37f68:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37f6c:	e1a000a0 	mov	r0, r0, lsr #1
         37f70:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37f74:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37f78:	e2400001 	sub	r0, r0, #1	; 0x1
         37f7c:	e5840044 	str	r0, [r4, #68]	; fField68
         37f80:	e5940024 	ldr	r0, [r4, #36]	; fField36
         37f84:	e3500000 	cmp	r0, #0	; 0x0
         37f88:	9a000014 	bls	37fe0 <TArithmeticCompressor::Flush(void)+0x1b8>
         37f8c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37f90:	e3300000 	teq	r0, #0	; 0x0
         37f94:	1a000003 	bne	37fa8 <TArithmeticCompressor::Flush(void)+0x180>
         37f98:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         37f9c:	e1a00004 	mov	r0, r4
         37fa0:	eb6db8d8 	bl	1ba6308 <TArithmeticCompressor::$WriteByte(unsigned char)>
         37fa4:	e5845044 	str	r5, [r4, #68]	; fField68
         37fa8:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37fac:	e1a000a0 	mov	r0, r0, lsr #1
         37fb0:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37fb4:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         37fb8:	e3800080 	orr	r0, r0, #128	; 0x80
         37fbc:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37fc0:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37fc4:	e2400001 	sub	r0, r0, #1	; 0x1
         37fc8:	e5840044 	str	r0, [r4, #68]	; fField68
         37fcc:	e5940024 	ldr	r0, [r4, #36]	; fField36
         37fd0:	e2400001 	sub	r0, r0, #1	; 0x1
         37fd4:	e5840024 	str	r0, [r4, #36]	; fField36
         37fd8:	e3500000 	cmp	r0, #0	; 0x0
         37fdc:	8affffea 	bhi	37f8c <TArithmeticCompressor::Flush(void)+0x164>
         37fe0:	e2841018 	add	r1, r4, #24	; 0x18
         37fe4:	e8910003 	ldmia	r1, {r0, r1}
         37fe8:	e0801001 	add	r1, r0, r1
         37fec:	e3510102 	cmp	r1, #-2147483648	; 0x80000000
         37ff0:	80470000 	subhi	r0, r7, r0
         37ff4:	8584001c 	strhi	r0, [r4, #28]	; fField28
         37ff8:	e594001c 	ldr	r0, [r4, #28]	; fField28
         37ffc:	e3300102 	teq	r0, #-2147483648	; 0x80000000
         38000:	0a000005 	beq	3801c <TArithmeticCompressor::Flush(void)+0x1f4>
         38004:	e5941018 	ldr	r1, [r4, #24]	; fField24
         38008:	e1a01081 	mov	r1, r1, lsl #1
         3800c:	e1a00080 	mov	r0, r0, lsl #1
         38010:	e584001c 	str	r0, [r4, #28]	; fField28
         38014:	e5841018 	str	r1, [r4, #24]	; fField24
         38018:	eaffff97 	b	37e7c <TArithmeticCompressor::Flush(void)+0x54>
         3801c:	e1a00004 	mov	r0, r4
         38020:	eb6dac66 	bl	1ba31c0 <TArithmeticCompressor::$FlushBits(void)>
         38024:	ea000008 	b	3804c <TArithmeticCompressor::Flush(void)+0x224>
         38028:	e59d0060 	ldr	r0, [sp, #96]
         3802c:	e59f1028 	ldr	r1, [pc, #28]	; 3805c <TArithmeticCompressor::Flush(void)+0x234>	; fField28
         38030:	e5911000 	ldr	r1, [r1]
         38034:	eb6eac56 	bl	1be3194 <$Subexception>
         38038:	e3300000 	teq	r0, #0	; 0x0
         3803c:	159d6064 	ldrne	r6, [sp, #100]
         38040:	1a000001 	bne	3804c <TArithmeticCompressor::Flush(void)+0x224>
         38044:	e1a0000d 	mov	r0, sp
         38048:	eb6ea841 	bl	1be2154 <$NextHandler>
         3804c:	e1a0000d 	mov	r0, sp
         38050:	eb6ea418 	bl	1be10b8 <$ExitHandler>
         38054:	e1a00006 	mov	r0, r6
         38058:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         3805c:	00371320 	eoreqs	r1, r7, r0, lsr #6
    */
}

/**
 * Symbol: ClassInfo__21TArithmeticCompressorSFv
 * Address: 00389454
 */
void TArithmeticCompressor::ClassInfo() {
    /*
        389454:	e24f0044 	sub	r0, pc, #68	; 0x44
        389458:	e1a0f00e 	mov	pc, lr
        38945c:	e3a00000 	mov	r0, #0	; 0x0
        389460:	e1a0f00e 	mov	pc, lr
        389464:	54417269 	strplb	r7, [r1], -#617
        389468:	74686d65 	strvcbt	r6, [r8], -#3429
        38946c:	74696343 	strvcbt	r6, [r9], -#835
        389470:	6f6d7072 	swivs	0x006d7072
        389474:	6573736f 	ldrvsb	r7, [r3, -#879]!
        389478:	72005443 	andvc	r5, r0, #1124073472	; 0x43000000
        38947c:	616c6c62 	cmnvs	ip, r2, ror #24
        389480:	61636b43 	cmnvs	r3, r3, asr #22
        389484:	6f6d7072 	swivs	0x006d7072
        389488:	6573736f 	ldrvsb	r7, [r3, -#879]!
        38948c:	72000000 	andvc	r0, r0, #0	; 0x0
        389490:	00000000 	andeq	r0, r0, r0
        389494:	eaffffee 	b	389454 <ClassInfo__21TArithmeticCompressorSFv>
        389498:	ea606b6d 	b	1ba4254 <TArithmeticCompressor::$New(void)>
        38949c:	ea60632d 	b	1ba2158 <TArithmeticCompressor::$Delete(void)>
        3894a0:	ea606b5a 	b	1ba4210 <TArithmeticCompressor::$Init(void *)>
        3894a4:	ea606f7a 	b	1ba5294 <TArithmeticCompressor::$Reset(void)>
        3894a8:	ea607398 	b	1ba6310 <TArithmeticCompressor::$WriteChunk(void *, long)>
        3894ac:	ea606740 	b	1ba31b4 <TArithmeticCompressor::$Flush(void)>
        3894b0:	00000000 	andeq	r0, r0, r0
        3894b4:	00000048 	andeq	r0, r0, r8, asr #32
        3894b8:	0000005c 	andeq	r0, r0, ip, asr r0
        3894bc:	0000006e 	andeq	r0, r0, lr, rrx
        3894c0:	0000006c 	andeq	r0, r0, ip, rrx
        3894c4:	00000084 	andeq	r0, r0, r4, lsl #1
        3894c8:	ea606f80 	b	1ba52d0 <$Sizeof__23TArithmeticDecompressorSFv>
        3894d4:	ea606b60 	b	1ba425c <TArithmeticDecompressor::$New(void)>
        3894d8:	ea606320 	b	1ba2160 <TArithmeticDecompressor::$Delete(void)>
        3894e8:	ea000001 	b	3894f4 <ClassInfo__23TArithmeticDecompressorSFv+0x8>
    */
}

