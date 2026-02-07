#include "include/TAnimate.h"

/**
 * Symbol: TAnimate::__ct(void)
 * Address: 00042a70
 */
TAnimate::TAnimate(void) {
    /*
         42a70:	e1a0c00d 	mov	ip, sp
         42a74:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         42a78:	e24cb004 	sub	fp, ip, #4	; 0x4
         42a7c:	e1b04000 	movs	r4, r0
         42a80:	1a000003 	bne	42a94 <TAnimate::__ct(void)+0x24>
         42a84:	e3a000bc 	mov	r0, #188	; 0xbc
         42a88:	eb6e2f2a 	bl	1bce738 <$__nw(unsigned int)>
         42a8c:	e1b04000 	movs	r4, r0
         42a90:	0a000023 	beq	42b24 <TAnimate::__ct(void)+0xb4>
         42a94:	e1a00004 	mov	r0, r4
         42a98:	eb69165e 	bl	1a88418 <TBits::$__ct(void)>
         42a9c:	e2840034 	add	r0, r4, #52	; 0x34
         42aa0:	eb6c4c01 	bl	1b55aac <TSaveScreenBits::$__ct(void)>
         42aa4:	e2840060 	add	r0, r4, #96	; 0x60
         42aa8:	eb691251 	bl	1a873f4 <TRegionStruct::$__ct(void)>
         42aac:	e3a00002 	mov	r0, #2	; 0x2
         42ab0:	eb6dfda5 	bl	1bc214c <$AllocateRefHandle(long)>
         42ab4:	e58400a0 	str	r0, [r4, #160]	; fField160
         42ab8:	e1a01000 	mov	r1, r0
         42abc:	e3a00000 	mov	r0, #0	; 0x0
         42ac0:	e5a10004 	str	r0, [r1, #4]!
         42ac4:	e5c400a5 	strb	r0, [r4, #165]	; fField165
         42ac8:	e3a00001 	mov	r0, #1	; 0x1
         42acc:	e58400ac 	str	r0, [r4, #172]
         42ad0:	e59f0054 	ldr	r0, [pc, #54]	; 42b2c <TAnimate::__ct(void)+0xbc>
         42ad4:	e58400b8 	str	r0, [r4, #184]
         42ad8:	e58440b4 	str	r4, [r4, #180]
         42adc:	e28400ac 	add	r0, r4, #172	; 0xac
         42ae0:	eb6e7565 	bl	1be007c <$AddExceptionHandler>
         42ae4:	e59f0044 	ldr	r0, [pc, #44]	; 42b30 <TAnimate::__ct(void)+0xc0>
         42ae8:	eb695005 	bl	1a96b04 <$GetPreference(RefVar const &)>
         42aec:	eb6dfd96 	bl	1bc214c <$AllocateRefHandle(long)>
         42af0:	e1a05000 	mov	r5, r0
         42af4:	e5900000 	ldr	r0, [r0]
         42af8:	e3300002 	teq	r0, #2	; 0x2
         42afc:	03e00000 	mvneq	r0, #0	; 0x0
         42b00:	0a000004 	beq	42b18 <TAnimate::__ct(void)+0xa8>
         42b04:	e3100003 	tst	r0, #3	; 0x3
         42b08:	01a00140 	moveq	r0, r0, asr #2
         42b0c:	0a000000 	beq	42b14 <TAnimate::__ct(void)+0xa4>
         42b10:	eb6dfd81 	bl	1bc211c <$_RINTError(long)>
         42b14:	e1e00000 	mvn	r0, r0
         42b18:	e58400a8 	str	r0, [r4, #168]	; fField168
         42b1c:	e1a00005 	mov	r0, r5
         42b20:	eb6e01a5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         42b24:	e1a00004 	mov	r0, r4
         42b28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         42b2c:	00042a68 	andeq	r2, r4, r8, ror #20
         42b30:	00683a40 	rsbeq	r3, r8, r0, asr #20
    */
}

/**
 * Symbol: TAnimate::__dt(void)
 * Address: 00042b34
 */
TAnimate::~TAnimate(void) {
    /*
         42b34:	e1a0c00d 	mov	ip, sp
         42b38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         42b3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         42b40:	e1a04000 	mov	r4, r0
         42b44:	e1a05001 	mov	r5, r1
         42b48:	e28000ac 	add	r0, r0, #172	; 0xac
         42b4c:	eb6e7d84 	bl	1be2164 <$RemoveExceptionHandler>
         42b50:	e59400a0 	ldr	r0, [r4, #160]	; fField160
         42b54:	eb6e0198 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         42b58:	e2840060 	add	r0, r4, #96	; 0x60
         42b5c:	e3a01000 	mov	r1, #0	; 0x0
         42b60:	eb69163c 	bl	1a88458 <TRegionStruct::$__dt(void)>
         42b64:	e2840034 	add	r0, r4, #52	; 0x34
         42b68:	e3a01000 	mov	r1, #0	; 0x0
         42b6c:	eb6c4bd0 	bl	1b55ab4 <TSaveScreenBits::$__dt(void)>
         42b70:	e1a00004 	mov	r0, r4
         42b74:	e3a01000 	mov	r1, #0	; 0x0
         42b78:	eb69163e 	bl	1a88478 <TBits::$__dt(void)>
         42b7c:	e3150001 	tst	r5, #1	; 0x1
         42b80:	11a00004 	movne	r0, r4
         42b84:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         42b88:	1a6e2ad4 	bne	1bcd6e0 <$__dl(void *)>
         42b8c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAnimate::SetupPlainEffect(TView *, unsigned char, long)
 * Address: 00042b90
 */
TAnimate::SetupPlainEffect(TView *, unsigned char, long) {
    /*
         42b90:	e1a0c00d 	mov	ip, sp
         42b94:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         42b98:	e24cb004 	sub	fp, ip, #4	; 0x4
         42b9c:	e1a04000 	mov	r4, r0
         42ba0:	e1a05001 	mov	r5, r1
         42ba4:	e1a06003 	mov	r6, r3
         42ba8:	e20280ff 	and	r8, r2, #255	; 0xff
         42bac:	e59000a8 	ldr	r0, [r0, #168]	; fField168
         42bb0:	e3100001 	tst	r0, #1	; 0x1
         42bb4:	1a000005 	bne	42bd0 <TAnimate::SetupPlainEffect(TView *, unsigned char, long)+0x40>
         42bb8:	e5845088 	str	r5, [r4, #136]	; fField136
         42bbc:	e5951024 	ldr	r1, [r5, #36]
         42bc0:	e5911000 	ldr	r1, [r1]
         42bc4:	e59400a0 	ldr	r0, [r4, #160]	; fField160
         42bc8:	e5801000 	str	r1, [r0]
         42bcc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         42bd0:	e2841064 	add	r1, r4, #100	; 0x64
         42bd4:	e1a07001 	mov	r7, r1
         42bd8:	e1a00005 	mov	r0, r5
         42bdc:	e5952000 	ldr	r2, [r5]
         42be0:	e1a0e00f 	mov	lr, pc
         42be4:	e282f024 	add	pc, r2, #36	; 0x24
         42be8:	e24dd004 	sub	sp, sp, #4	; 0x4
         42bec:	e1a0000d 	mov	r0, sp
         42bf0:	eb6eb2eb 	bl	1bef7a4 <$GetPort(GrafPort **)>
         42bf4:	e49d0004 	ldr	r0, [sp], #4
         42bf8:	e280001c 	add	r0, r0, #28	; 0x1c
         42bfc:	e5972004 	ldr	r2, [r7, #4]
         42c00:	e1a02822 	mov	r2, r2, lsr #16
         42c04:	e5971000 	ldr	r1, [r7]
         42c08:	e1a01821 	mov	r1, r1, lsr #16
         42c0c:	e0421001 	sub	r1, r2, r1
         42c10:	e1a01801 	mov	r1, r1, lsl #16
         42c14:	e1a01841 	mov	r1, r1, asr #16
         42c18:	e5902004 	ldr	r2, [r0, #4]
         42c1c:	e1a02822 	mov	r2, r2, lsr #16
         42c20:	e5903000 	ldr	r3, [r0]
         42c24:	e1a03823 	mov	r3, r3, lsr #16
         42c28:	e0422003 	sub	r2, r2, r3
         42c2c:	e1a02802 	mov	r2, r2, lsl #16
         42c30:	e1510842 	cmp	r1, r2, asr #16
         42c34:	ca00000e 	bgt	42c74 <TAnimate::SetupPlainEffect(TView *, unsigned char, long)+0xe4>
         42c38:	e5972006 	ldr	r2, [r7, #6]
         42c3c:	e1a02822 	mov	r2, r2, lsr #16
         42c40:	e5971002 	ldr	r1, [r7, #2]
         42c44:	e1a01821 	mov	r1, r1, lsr #16
         42c48:	e0421001 	sub	r1, r2, r1
         42c4c:	e1a01801 	mov	r1, r1, lsl #16
         42c50:	e1a01841 	mov	r1, r1, asr #16
         42c54:	e5902006 	ldr	r2, [r0, #6]
         42c58:	e1a02822 	mov	r2, r2, lsr #16
         42c5c:	e5903002 	ldr	r3, [r0, #2]
         42c60:	e1a03823 	mov	r3, r3, lsr #16
         42c64:	e0422003 	sub	r2, r2, r3
         42c68:	e1a02802 	mov	r2, r2, lsl #16
         42c6c:	e1510842 	cmp	r1, r2, asr #16
         42c70:	da000002 	ble	42c80 <TAnimate::SetupPlainEffect(TView *, unsigned char, long)+0xf0>
         42c74:	e1a01007 	mov	r1, r7
         42c78:	e1a02007 	mov	r2, r7
         42c7c:	eb6c4352 	bl	1b539cc <$SectRect__FP4RectN21>
         42c80:	e1a01005 	mov	r1, r5
         42c84:	e1a00004 	mov	r0, r4
         42c88:	e3a02000 	mov	r2, #0	; 0x0
         42c8c:	eb6a95f8 	bl	1ae8474 <TAnimate::$PreSetup(TView *, TAnimate::EffectKind)>
         42c90:	e3a09000 	mov	r9, #0	; 0x0
         42c94:	e3360000 	teq	r6, #0	; 0x0
         42c98:	1584609c 	strne	r6, [r4, #156]	; fField156
         42c9c:	1a000013 	bne	42cf0 <TAnimate::SetupPlainEffect(TView *, unsigned char, long)+0x160>
         42ca0:	e59f1034 	ldr	r1, [pc, #34]	; 42cdc <TAnimate::SetupPlainEffect(TView *, unsigned char, long)+0x14c>
         42ca4:	e1a00005 	mov	r0, r5
         42ca8:	eb6e1e26 	bl	1bca548 <TView::$GetProto( const(RefVar const &))>
         42cac:	eb6dfd26 	bl	1bc214c <$AllocateRefHandle(long)>
         42cb0:	e1a05000 	mov	r5, r0
         42cb4:	e5900000 	ldr	r0, [r0]
         42cb8:	e3300002 	teq	r0, #2	; 0x2
         42cbc:	0a000007 	beq	42ce0 <TAnimate::SetupPlainEffect(TView *, unsigned char, long)+0x150>
         42cc0:	e2001003 	and	r1, r0, #3	; 0x3
         42cc4:	e3510000 	cmp	r1, #0	; 0x0
         42cc8:	1a000004 	bne	42ce0 <TAnimate::SetupPlainEffect(TView *, unsigned char, long)+0x150>
         42ccc:	01a00140 	moveq	r0, r0, asr #2
         42cd0:	0a000003 	beq	42ce4 <TAnimate::SetupPlainEffect(TView *, unsigned char, long)+0x154>
         42cd4:	eb6dfd10 	bl	1bc211c <$_RINTError(long)>
         42cd8:	ea000001 	b	42ce4 <TAnimate::SetupPlainEffect(TView *, unsigned char, long)+0x154>
         42cdc:	00684fa0 	rsbeq	r4, r8, r0, lsr #31
         42ce0:	e3a00000 	mov	r0, #0	; 0x0
         42ce4:	e584009c 	str	r0, [r4, #156]	; fField156
         42ce8:	e1a00005 	mov	r0, r5
         42cec:	eb6e0132 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         42cf0:	e594009c 	ldr	r0, [r4, #156]	; fField156
         42cf4:	e3300000 	teq	r0, #0	; 0x0
         42cf8:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         42cfc:	e24dd008 	sub	sp, sp, #8	; 0x8
         42d00:	e5c480a4 	strb	r8, [r4, #164]	; fField164
         42d04:	e3380000 	teq	r8, #0	; 0x0
         42d08:	058d9004 	streq	r9, [sp, #4]
         42d0c:	058d9000 	streq	r9, [sp]
         42d10:	18971008 	ldmneia	r7, {r3, ip}
         42d14:	188d1008 	stmneia	sp, {r3, ip}
         42d18:	e1a03007 	mov	r3, r7
         42d1c:	e1a01007 	mov	r1, r7
         42d20:	e1a0200d 	mov	r2, sp
         42d24:	e1a00004 	mov	r0, r4
         42d28:	eb696c72 	bl	1a9def8 <TAnimate::$PostSetup(TRect const &, TRect const &, TRect const &)>
         42d2c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)
 * Address: 00042d30
 */
TAnimate::SetupSlideEffect(TView *, TRect const &, long, long) {
    /*
         42d30:	e1a0c00d 	mov	ip, sp
         42d34:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         42d38:	e24cb004 	sub	fp, ip, #4	; 0x4
         42d3c:	e1a04000 	mov	r4, r0
         42d40:	e1a06002 	mov	r6, r2
         42d44:	e1a05003 	mov	r5, r3
         42d48:	e59b7004 	ldr	r7, [fp, #4]
         42d4c:	e59000a8 	ldr	r0, [r0, #168]	; fField168
         42d50:	e3100004 	tst	r0, #4	; 0x4
         42d54:	1a000005 	bne	42d70 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x40>
         42d58:	e5841088 	str	r1, [r4, #136]	; fField136
         42d5c:	e5911024 	ldr	r1, [r1, #36]
         42d60:	e5911000 	ldr	r1, [r1]
         42d64:	e59400a0 	ldr	r0, [r4, #160]	; fField160
         42d68:	e5801000 	str	r1, [r0]
         42d6c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         42d70:	e24dd008 	sub	sp, sp, #8	; 0x8
         42d74:	e8961008 	ldmia	r6, {r3, ip}
         42d78:	e88d1008 	stmia	sp, {r3, ip}
         42d7c:	e2848064 	add	r8, r4, #100	; 0x64
         42d80:	e8965000 	ldmia	r6, {ip, lr}
         42d84:	e8885000 	stmia	r8, {ip, lr}
         42d88:	e1a00004 	mov	r0, r4
         42d8c:	e3a02002 	mov	r2, #2	; 0x2
         42d90:	eb6a95b7 	bl	1ae8474 <TAnimate::$PreSetup(TView *, TAnimate::EffectKind)>
         42d94:	e5960004 	ldr	r0, [r6, #4]
         42d98:	e1a00820 	mov	r0, r0, lsr #16
         42d9c:	e5961000 	ldr	r1, [r6]
         42da0:	e1a01821 	mov	r1, r1, lsr #16
         42da4:	e0400001 	sub	r0, r0, r1
         42da8:	e1a01800 	mov	r1, r0, lsl #16
         42dac:	e1a01841 	mov	r1, r1, asr #16
         42db0:	e3570000 	cmp	r7, #0	; 0x0
         42db4:	e5841090 	str	r1, [r4, #144]	; fField144
         42db8:	b3a00000 	movlt	r0, #0	; 0x0
         42dbc:	a3a00001 	movge	r0, #1	; 0x1
         42dc0:	e5c400a4 	strb	r0, [r4, #164]	; fField164
         42dc4:	e1a00805 	mov	r0, r5, lsl #16
         42dc8:	e1a00840 	mov	r0, r0, asr #16
         42dcc:	da000018 	ble	42e34 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x104>
         42dd0:	e3550000 	cmp	r5, #0	; 0x0
         42dd4:	da00000b 	ble	42e08 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0xd8>
         42dd8:	e5942068 	ldr	r2, [r4, #104]	; fField104
         42ddc:	e1a02822 	mov	r2, r2, lsr #16
         42de0:	e0822000 	add	r2, r2, r0
         42de4:	e5c42069 	strb	r2, [r4, #105]	; fField105
         42de8:	e1a02442 	mov	r2, r2, asr #8
         42dec:	e5c42068 	strb	r2, [r4, #104]	; fField104
         42df0:	e59d2002 	ldr	r2, [sp, #2]
         42df4:	e0422000 	sub	r2, r2, r0
         42df8:	e5cd2001 	strb	r2, [sp, #1]
         42dfc:	e1a02442 	mov	r2, r2, asr #8
         42e00:	e5cd2000 	strb	r2, [sp]
         42e04:	ea00000a 	b	42e34 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x104>
         42e08:	e5942064 	ldr	r2, [r4, #100]	; fField100
         42e0c:	e1a02822 	mov	r2, r2, lsr #16
         42e10:	e0822000 	add	r2, r2, r0
         42e14:	e5c42065 	strb	r2, [r4, #101]	; fField101
         42e18:	e1a02442 	mov	r2, r2, asr #8
         42e1c:	e5c42064 	strb	r2, [r4, #100]	; fField100
         42e20:	e59d2006 	ldr	r2, [sp, #6]
         42e24:	e0422000 	sub	r2, r2, r0
         42e28:	e5cd2005 	strb	r2, [sp, #5]
         42e2c:	e1a02442 	mov	r2, r2, asr #8
         42e30:	e5cd2004 	strb	r2, [sp, #4]
         42e34:	e24dd008 	sub	sp, sp, #8	; 0x8
         42e38:	e8985000 	ldmia	r8, {ip, lr}
         42e3c:	e88d5000 	stmia	sp, {ip, lr}
         42e40:	e3570000 	cmp	r7, #0	; 0x0
         42e44:	1a00001a 	bne	42eb4 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x184>
         42e48:	e3550000 	cmp	r5, #0	; 0x0
         42e4c:	e5841098 	str	r1, [r4, #152]	; fField152
         42e50:	da00000b 	ble	42e84 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x154>
         42e54:	e5941068 	ldr	r1, [r4, #104]	; fField104
         42e58:	e1a01821 	mov	r1, r1, lsr #16
         42e5c:	e0811000 	add	r1, r1, r0
         42e60:	e5c41069 	strb	r1, [r4, #105]	; fField105
         42e64:	e1a01441 	mov	r1, r1, asr #8
         42e68:	e5c41068 	strb	r1, [r4, #104]	; fField104
         42e6c:	e59d100a 	ldr	r1, [sp, #10]
         42e70:	e0410000 	sub	r0, r1, r0
         42e74:	e5cd0009 	strb	r0, [sp, #9]
         42e78:	e1a00440 	mov	r0, r0, asr #8
         42e7c:	e5cd0008 	strb	r0, [sp, #8]
         42e80:	ea00001c 	b	42ef8 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x1c8>
         42e84:	e5941064 	ldr	r1, [r4, #100]	; fField100
         42e88:	e1a01821 	mov	r1, r1, lsr #16
         42e8c:	e0811000 	add	r1, r1, r0
         42e90:	e5c41065 	strb	r1, [r4, #101]	; fField101
         42e94:	e1a01441 	mov	r1, r1, asr #8
         42e98:	e5c41064 	strb	r1, [r4, #100]	; fField100
         42e9c:	e59d100e 	ldr	r1, [sp, #14]
         42ea0:	e0410000 	sub	r0, r1, r0
         42ea4:	e5cd000d 	strb	r0, [sp, #13]
         42ea8:	e1a00440 	mov	r0, r0, asr #8
         42eac:	e5cd000c 	strb	r0, [sp, #12]
         42eb0:	ea000010 	b	42ef8 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x1c8>
         42eb4:	aa00000f 	bge	42ef8 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x1c8>
         42eb8:	e5941090 	ldr	r1, [r4, #144]	; fField144
         42ebc:	e0411005 	sub	r1, r1, r5
         42ec0:	e3550000 	cmp	r5, #0	; 0x0
         42ec4:	e5841090 	str	r1, [r4, #144]	; fField144
         42ec8:	da000005 	ble	42ee4 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x1b4>
         42ecc:	e59d1002 	ldr	r1, [sp, #2]
         42ed0:	e0810000 	add	r0, r1, r0
         42ed4:	e5cd0001 	strb	r0, [sp, #1]
         42ed8:	e1a00440 	mov	r0, r0, asr #8
         42edc:	e5cd0000 	strb	r0, [sp]
         42ee0:	ea000004 	b	42ef8 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x1c8>
         42ee4:	e59d1006 	ldr	r1, [sp, #6]
         42ee8:	e0810000 	add	r0, r1, r0
         42eec:	e5cd0005 	strb	r0, [sp, #5]
         42ef0:	e1a00440 	mov	r0, r0, asr #8
         42ef4:	e5cd0004 	strb	r0, [sp, #4]
         42ef8:	e3550000 	cmp	r5, #0	; 0x0
         42efc:	d3a00000 	movle	r0, #0	; 0x0
         42f00:	c3a00001 	movgt	r0, #1	; 0x1
         42f04:	e3570000 	cmp	r7, #0	; 0x0
         42f08:	b3a01000 	movlt	r1, #0	; 0x0
         42f0c:	a3a01001 	movge	r1, #1	; 0x1
         42f10:	e1300001 	teq	r0, r1
         42f14:	13a00b82 	movne	r0, #133120	; 0x20800
         42f18:	03a00802 	moveq	r0, #131072	; 0x20000
         42f1c:	e28d3008 	add	r3, sp, #8	; 0x8
         42f20:	e1a0200d 	mov	r2, sp
         42f24:	e1a01006 	mov	r1, r6
         42f28:	e584009c 	str	r0, [r4, #156]	; fField156
         42f2c:	e1a00004 	mov	r0, r4
         42f30:	eb696bf0 	bl	1a9def8 <TAnimate::$PostSetup(TRect const &, TRect const &, TRect const &)>
         42f34:	e284007c 	add	r0, r4, #124	; 0x7c
         42f38:	e2846084 	add	r6, r4, #132	; 0x84
         42f3c:	e3370000 	teq	r7, #0	; 0x0
         42f40:	0a000017 	beq	42fa4 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x274>
         42f44:	e284106c 	add	r1, r4, #108	; 0x6c
         42f48:	e8915000 	ldmia	r1, {ip, lr}
         42f4c:	e8805000 	stmia	r0, {ip, lr}
         42f50:	e5940066 	ldr	r0, [r4, #102]	; fField102
         42f54:	e1a00840 	mov	r0, r0, asr #16
         42f58:	e59d1006 	ldr	r1, [sp, #6]
         42f5c:	e41d2004 	ldr	r2, [sp], -#4
         42f60:	e1a02822 	mov	r2, r2, lsr #16
         42f64:	e0411002 	sub	r1, r1, r2
         42f68:	e5942068 	ldr	r2, [r4, #104]	; fField104
         42f6c:	e1a02822 	mov	r2, r2, lsr #16
         42f70:	e0421001 	sub	r1, r2, r1
         42f74:	e1a01801 	mov	r1, r1, lsl #16
         42f78:	e1a01841 	mov	r1, r1, asr #16
         42f7c:	e5cd0003 	strb	r0, [sp, #3]
         42f80:	e1a00440 	mov	r0, r0, asr #8
         42f84:	e5cd0002 	strb	r0, [sp, #2]
         42f88:	e5cd1001 	strb	r1, [sp, #1]
         42f8c:	e1a00441 	mov	r0, r1, asr #8
         42f90:	e5cd0000 	strb	r0, [sp]
         42f94:	e59d0000 	ldr	r0, [sp]
         42f98:	e5860000 	str	r0, [r6]
         42f9c:	e28dd004 	add	sp, sp, #4	; 0x4
         42fa0:	ea000004 	b	42fb8 <TAnimate::SetupSlideEffect(TView *, TRect const &, long, long)+0x288>
         42fa4:	e1a02005 	mov	r2, r5
         42fa8:	e3a01000 	mov	r1, #0	; 0x0
         42fac:	eb6c3a4d 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         42fb0:	e5980000 	ldr	r0, [r8]
         42fb4:	e5860000 	str	r0, [r6]
         42fb8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TAnimate::SetupTrashEffect(TView *)
 * Address: 00043010
 */
TAnimate::SetupTrashEffect(TView *) {
    /*
         43010:	e1a0c00d 	mov	ip, sp
         43014:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         43018:	e24cb004 	sub	fp, ip, #4	; 0x4
         4301c:	e1a04000 	mov	r4, r0
         43020:	e1a05001 	mov	r5, r1
         43024:	e59000a8 	ldr	r0, [r0, #168]	; fField168
         43028:	e3100002 	tst	r0, #2	; 0x2
         4302c:	1a000005 	bne	43048 <TAnimate::SetupTrashEffect(TView *)+0x38>
         43030:	e5845088 	str	r5, [r4, #136]	; fField136
         43034:	e5951024 	ldr	r1, [r5, #36]
         43038:	e5911000 	ldr	r1, [r1]
         4303c:	e59400a0 	ldr	r0, [r4, #160]	; fField160
         43040:	e5801000 	str	r1, [r0]
         43044:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         43048:	e2841064 	add	r1, r4, #100	; 0x64
         4304c:	e1a06001 	mov	r6, r1
         43050:	e1a00005 	mov	r0, r5
         43054:	e5952000 	ldr	r2, [r5]
         43058:	e1a0e00f 	mov	lr, pc
         4305c:	e282f024 	add	pc, r2, #36	; 0x24
         43060:	e5941068 	ldr	r1, [r4, #104]	; fField104
         43064:	e59f70b8 	ldr	r7, [pc, #b8]	; 43124 <TAnimate::SetupTrashEffect(TView *)+0x114>
         43068:	e5970000 	ldr	r0, [r7]
         4306c:	e1a00800 	mov	r0, r0, lsl #16
         43070:	e1a00840 	mov	r0, r0, asr #16
         43074:	e1500841 	cmp	r0, r1, asr #16
         43078:	b5c40069 	strltb	r0, [r4, #105]	; fField105
         4307c:	b1a00440 	movlt	r0, r0, asr #8
         43080:	b5c40068 	strltb	r0, [r4, #104]	; fField104
         43084:	e1a01005 	mov	r1, r5
         43088:	e1a00004 	mov	r0, r4
         4308c:	e3a02001 	mov	r2, #1	; 0x1
         43090:	eb6a94f7 	bl	1ae8474 <TAnimate::$PreSetup(TView *, TAnimate::EffectKind)>
         43094:	e24dd008 	sub	sp, sp, #8	; 0x8
         43098:	e3a05000 	mov	r5, #0	; 0x0
         4309c:	e58d5004 	str	r5, [sp, #4]
         430a0:	e1a03006 	mov	r3, r6
         430a4:	e1a01006 	mov	r1, r6
         430a8:	e58d5000 	str	r5, [sp]
         430ac:	e1a0200d 	mov	r2, sp
         430b0:	e1a00004 	mov	r0, r4
         430b4:	eb696b8f 	bl	1a9def8 <TAnimate::$PostSetup(TRect const &, TRect const &, TRect const &)>
         430b8:	e2840074 	add	r0, r4, #116	; 0x74
         430bc:	e5901004 	ldr	r1, [r0, #4]
         430c0:	e1a01821 	mov	r1, r1, lsr #16
         430c4:	e5900000 	ldr	r0, [r0]
         430c8:	e1a00820 	mov	r0, r0, lsr #16
         430cc:	e0410000 	sub	r0, r1, r0
         430d0:	e1a00800 	mov	r0, r0, lsl #16
         430d4:	e3500712 	cmp	r0, #4718592	; 0x480000
         430d8:	aa000007 	bge	430fc <TAnimate::SetupTrashEffect(TView *)+0xec>
         430dc:	e5940078 	ldr	r0, [r4, #120]	; fField120
         430e0:	e1a00840 	mov	r0, r0, asr #16
         430e4:	e2400048 	sub	r0, r0, #72	; 0x48
         430e8:	e3500000 	cmp	r0, #0	; 0x0
         430ec:	d1a00005 	movle	r0, r5
         430f0:	e5c40075 	strb	r0, [r4, #117]	; fField117
         430f4:	e1a00440 	mov	r0, r0, asr #8
         430f8:	e5c40074 	strb	r0, [r4, #116]	; fField116
         430fc:	e5970000 	ldr	r0, [r7]
         43100:	e5c40079 	strb	r0, [r4, #121]	; fField121
         43104:	e1a00440 	mov	r0, r0, asr #8
         43108:	e5c40078 	strb	r0, [r4, #120]	; fField120
         4310c:	e59f0014 	ldr	r0, [pc, #14]	; 43128 <TAnimate::SetupTrashEffect(TView *)+0x118>
         43110:	e5900000 	ldr	r0, [r0]
         43114:	e5c4007b 	strb	r0, [r4, #123]	; fField123
         43118:	e1a00440 	mov	r0, r0, asr #8
         4311c:	e5c4007a 	strb	r0, [r4, #122]	; fField122
         43120:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         43124:	0c104c5c 	ldceq	12, cr4, [r0], -#368
         43128:	0c104c58 	ldceq	12, cr4, [r0], -#352
    */
}

/**
 * Symbol: TAnimate::SetupPoofEffect(TView *, TRect const &)
 * Address: 0004312c
 */
TAnimate::SetupPoofEffect(TView *, TRect const &) {
    /*
         4312c:	e1a0c00d 	mov	ip, sp
         43130:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         43134:	e24cb004 	sub	fp, ip, #4	; 0x4
         43138:	e1a04000 	mov	r4, r0
         4313c:	e59000a8 	ldr	r0, [r0, #168]	; fField168
         43140:	e3100008 	tst	r0, #8	; 0x8
         43144:	1a000005 	bne	43160 <TAnimate::SetupPoofEffect(TView *, TRect const &)+0x34>
         43148:	e5841088 	str	r1, [r4, #136]	; fField136
         4314c:	e5911024 	ldr	r1, [r1, #36]
         43150:	e5911000 	ldr	r1, [r1]
         43154:	e59400a0 	ldr	r0, [r4, #160]	; fField160
         43158:	e5801000 	str	r1, [r0]
         4315c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         43160:	e2845064 	add	r5, r4, #100	; 0x64
         43164:	e8921008 	ldmia	r2, {r3, ip}
         43168:	e8851008 	stmia	r5, {r3, ip}
         4316c:	e5923006 	ldr	r3, [r2, #6]
         43170:	e1a03843 	mov	r3, r3, asr #16
         43174:	e5920002 	ldr	r0, [r2, #2]
         43178:	e1a00840 	mov	r0, r0, asr #16
         4317c:	e043c000 	sub	ip, r3, r0
         43180:	e1a0c80c 	mov	ip, ip, lsl #16
         43184:	e35c0859 	cmp	ip, #5832704	; 0x590000
         43188:	ba000007 	blt	431ac <TAnimate::SetupPoofEffect(TView *, TRect const &)+0x80>
         4318c:	e592e004 	ldr	lr, [r2, #4]
         43190:	e1a0e82e 	mov	lr, lr, lsr #16
         43194:	e592c000 	ldr	ip, [r2]
         43198:	e1a0c82c 	mov	ip, ip, lsr #16
         4319c:	e04ec00c 	sub	ip, lr, ip
         431a0:	e1a0c80c 	mov	ip, ip, lsl #16
         431a4:	e35c0836 	cmp	ip, #3538944	; 0x360000
         431a8:	aa00001c 	bge	43220 <TAnimate::SetupPoofEffect(TView *, TRect const &)+0xf4>
         431ac:	e0800003 	add	r0, r0, r3
         431b0:	e0800fa0 	add	r0, r0, r0, lsr #31
         431b4:	e1a000c0 	mov	r0, r0, asr #1
         431b8:	e240002c 	sub	r0, r0, #44	; 0x2c
         431bc:	e5c40067 	strb	r0, [r4, #103]	; fField103
         431c0:	e1a00440 	mov	r0, r0, asr #8
         431c4:	e5c40066 	strb	r0, [r4, #102]	; fField102
         431c8:	e5940066 	ldr	r0, [r4, #102]	; fField102
         431cc:	e1a00820 	mov	r0, r0, lsr #16
         431d0:	e2800059 	add	r0, r0, #89	; 0x59
         431d4:	e5c4006b 	strb	r0, [r4, #107]	; fField107
         431d8:	e1a00440 	mov	r0, r0, asr #8
         431dc:	e5c4006a 	strb	r0, [r4, #106]	; fField106
         431e0:	e5920004 	ldr	r0, [r2, #4]
         431e4:	e1a00840 	mov	r0, r0, asr #16
         431e8:	e5922000 	ldr	r2, [r2]
         431ec:	e0800842 	add	r0, r0, r2, asr #16
         431f0:	e0800fa0 	add	r0, r0, r0, lsr #31
         431f4:	e1a000c0 	mov	r0, r0, asr #1
         431f8:	e240001b 	sub	r0, r0, #27	; 0x1b
         431fc:	e5c40065 	strb	r0, [r4, #101]	; fField101
         43200:	e1a00440 	mov	r0, r0, asr #8
         43204:	e5c40064 	strb	r0, [r4, #100]	; fField100
         43208:	e5940064 	ldr	r0, [r4, #100]	; fField100
         4320c:	e1a00820 	mov	r0, r0, lsr #16
         43210:	e2800036 	add	r0, r0, #54	; 0x36
         43214:	e5c40069 	strb	r0, [r4, #105]	; fField105
         43218:	e1a00440 	mov	r0, r0, asr #8
         4321c:	e5c40068 	strb	r0, [r4, #104]	; fField104
         43220:	e1a00004 	mov	r0, r4
         43224:	e3a02003 	mov	r2, #3	; 0x3
         43228:	eb6a9491 	bl	1ae8474 <TAnimate::$PreSetup(TView *, TAnimate::EffectKind)>
         4322c:	e24dd008 	sub	sp, sp, #8	; 0x8
         43230:	e3a00000 	mov	r0, #0	; 0x0
         43234:	e58d0004 	str	r0, [sp, #4]
         43238:	e1a03005 	mov	r3, r5
         4323c:	e1a01005 	mov	r1, r5
         43240:	e58d0000 	str	r0, [sp]
         43244:	e1a0200d 	mov	r2, sp
         43248:	e1a00004 	mov	r0, r4
         4324c:	eb696b29 	bl	1a9def8 <TAnimate::$PostSetup(TRect const &, TRect const &, TRect const &)>
         43250:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAnimate::PreSetup(TView *, TAnimate::EffectKind)
 * Address: 00043254
 */
TAnimate::PreSetup(TView *, TAnimate::EffectKind) {
    /*
         43254:	e2800088 	add	r0, r0, #136	; 0x88
         43258:	e8800006 	stmia	r0, {r1, r2}
         4325c:	e2400088 	sub	r0, r0, #136	; 0x88
         43260:	e3a02000 	mov	r2, #0	; 0x0
         43264:	e5c020a4 	strb	r2, [r0, #164]	; fField164
         43268:	e5802090 	str	r2, [r0, #144]	; fField144
         4326c:	e5802094 	str	r2, [r0, #148]	; fField148
         43270:	e3a02902 	mov	r2, #32768	; 0x8000
         43274:	e2422002 	sub	r2, r2, #2	; 0x2
         43278:	e5802098 	str	r2, [r0, #152]	; fField152
         4327c:	e5911024 	ldr	r1, [r1, #36]
         43280:	e5911000 	ldr	r1, [r1]
         43284:	e59000a0 	ldr	r0, [r0, #160]	; fField160
         43288:	e5801000 	str	r1, [r0]
         4328c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)
 * Address: 0004336c
 */
TAnimate::PostSetup(TRect const &, TRect const &, TRect const &) {
    /*
         4336c:	e1a0c00d 	mov	ip, sp
         43370:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         43374:	e24cb004 	sub	fp, ip, #4	; 0x4
         43378:	e1a04000 	mov	r4, r0
         4337c:	e1a05001 	mov	r5, r1
         43380:	e1a07002 	mov	r7, r2
         43384:	e1a06003 	mov	r6, r3
         43388:	e280006c 	add	r0, r0, #108	; 0x6c
         4338c:	e8975000 	ldmia	r7, {ip, lr}
         43390:	e8805000 	stmia	r0, {ip, lr}
         43394:	e2842074 	add	r2, r4, #116	; 0x74
         43398:	e1a01007 	mov	r1, r7
         4339c:	e1a00005 	mov	r0, r5
         433a0:	eb6983b4 	bl	1aa4278 <$TrimRect__FRC5TRectT1P5TRect>
         433a4:	e1a00005 	mov	r0, r5
         433a8:	eb6c2cda 	bl	1b4e718 <$EmptyRect(Rect *)>
         433ac:	e3300000 	teq	r0, #0	; 0x0
         433b0:	13a00000 	movne	r0, #0	; 0x0
         433b4:	03a00001 	moveq	r0, #1	; 0x1
         433b8:	e5c400a5 	strb	r0, [r4, #165]	; fField165
         433bc:	e31000ff 	tst	r0, #255	; 0xff
         433c0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         433c4:	e1a01006 	mov	r1, r6
         433c8:	e1a00004 	mov	r0, r4
         433cc:	eb6928bf 	bl	1a8d6d0 <TBits::$Constructor(TRect const &)>
         433d0:	e5c400a5 	strb	r0, [r4, #165]	; fField165
         433d4:	e24dd004 	sub	sp, sp, #4	; 0x4
         433d8:	e31000ff 	tst	r0, #255	; 0xff
         433dc:	1a000005 	bne	433f8 <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x8c>
         433e0:	e59f02bc 	ldr	r0, [pc, #2bc]	; 436a4 <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x338>
         433e4:	e5900000 	ldr	r0, [r0]
         433e8:	e3a02000 	mov	r2, #0	; 0x0
         433ec:	e3a010e9 	mov	r1, #233	; 0xe9
         433f0:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
         433f4:	eb6e7f68 	bl	1be319c <$Throw>
         433f8:	e1a0000d 	mov	r0, sp
         433fc:	e5941088 	ldr	r1, [r4, #136]	; fField136
         43400:	eb6e1c4f 	bl	1bca544 <TView::$GetFrontMask( const(void))>
         43404:	e1a0100d 	mov	r1, sp
         43408:	e2840060 	add	r0, r4, #96	; 0x60
         4340c:	e1a0a000 	mov	sl, r0
         43410:	eb690fef 	bl	1a873d4 <TRegionStruct::$__as(TRegion &)>
         43414:	e1a0000d 	mov	r0, sp
         43418:	e3a01000 	mov	r1, #0	; 0x0
         4341c:	eb691818 	bl	1a89484 <TRegion::$__dt(void)>
         43420:	e5940088 	ldr	r0, [r4, #136]	; fField136
         43424:	e5b0801c 	ldr	r8, [r0, #28]!
         43428:	e59f9278 	ldr	r9, [pc, #278]	; 436a8 <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x33c>
         4342c:	e5990000 	ldr	r0, [r9]
         43430:	e1380000 	teq	r8, r0
         43434:	0a000015 	beq	43490 <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x124>
         43438:	e24dd018 	sub	sp, sp, #24	; 0x18
         4343c:	e1a01008 	mov	r1, r8
         43440:	e1a0000d 	mov	r0, sp
         43444:	eb6e1c3e 	bl	1bca544 <TView::$GetFrontMask( const(void))>
         43448:	e1a0100d 	mov	r1, sp
         4344c:	e28d0004 	add	r0, sp, #4	; 0x4
         43450:	eb690fe1 	bl	1a873dc <TRegionVar::$__ct(TRegion &)>
         43454:	e1a0000d 	mov	r0, sp
         43458:	e3a01000 	mov	r1, #0	; 0x0
         4345c:	eb691808 	bl	1a89484 <TRegion::$__dt(void)>
         43460:	e59d1004 	ldr	r1, [sp, #4]
         43464:	e59a2000 	ldr	r2, [sl]
         43468:	e1a00002 	mov	r0, r2
         4346c:	eb6c4985 	bl	1b55a88 <$UnionRgn__FPP6RegionN21>
         43470:	e598801c 	ldr	r8, [r8, #28]
         43474:	e28d0004 	add	r0, sp, #4	; 0x4
         43478:	e3a01000 	mov	r1, #0	; 0x0
         4347c:	eb6913f0 	bl	1a88444 <TRegionVar::$__dt(void)>
         43480:	e28dd018 	add	sp, sp, #24	; 0x18
         43484:	e5990000 	ldr	r0, [r9]
         43488:	e1380000 	teq	r8, r0
         4348c:	1affffe9 	bne	43438 <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0xcc>
         43490:	e24dd030 	sub	sp, sp, #48	; 0x30
         43494:	e59f0210 	ldr	r0, [pc, #210]	; 436ac <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x340>
         43498:	e5900000 	ldr	r0, [r0]
         4349c:	e1a01800 	mov	r1, r0, lsl #16
         434a0:	e1a01841 	mov	r1, r1, asr #16
         434a4:	e59f0204 	ldr	r0, [pc, #204]	; 436b0 <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x344>
         434a8:	e5900000 	ldr	r0, [r0]
         434ac:	e1a00800 	mov	r0, r0, lsl #16
         434b0:	e1a00840 	mov	r0, r0, asr #16
         434b4:	e3a02000 	mov	r2, #0	; 0x0
         434b8:	e5cd2029 	strb	r2, [sp, #41]
         434bc:	e5cd2028 	strb	r2, [sp, #40]
         434c0:	e5cd202b 	strb	r2, [sp, #43]
         434c4:	e5cd202a 	strb	r2, [sp, #42]
         434c8:	e5cd102d 	strb	r1, [sp, #45]
         434cc:	e1a01441 	mov	r1, r1, asr #8
         434d0:	e5cd102c 	strb	r1, [sp, #44]
         434d4:	e5cd002f 	strb	r0, [sp, #47]
         434d8:	e1a00440 	mov	r0, r0, asr #8
         434dc:	e5cd002e 	strb	r0, [sp, #46]
         434e0:	e59a0000 	ldr	r0, [sl]
         434e4:	e1a08000 	mov	r8, r0
         434e8:	e52d0004 	str	r0, [sp, -#4]!
         434ec:	e28d102c 	add	r1, sp, #44	; 0x2c
         434f0:	e28d0004 	add	r0, sp, #4	; 0x4
         434f4:	eb6913c5 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
         434f8:	e28d0004 	add	r0, sp, #4	; 0x4
         434fc:	e1a02008 	mov	r2, r8
         43500:	e49d1004 	ldr	r1, [sp], #4
         43504:	eb6c2870 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
         43508:	e59a0000 	ldr	r0, [sl]
         4350c:	e1a08000 	mov	r8, r0
         43510:	e52d0004 	str	r0, [sp, -#4]!
         43514:	e3a00001 	mov	r0, #1	; 0x1
         43518:	e2400902 	sub	r0, r0, #32768	; 0x8000
         4351c:	e3a02902 	mov	r2, #32768	; 0x8000
         43520:	e2422002 	sub	r2, r2, #2	; 0x2
         43524:	e5cd0025 	strb	r0, [sp, #37]
         43528:	e3e0107f 	mvn	r1, #127	; 0x7f
         4352c:	e5cd1024 	strb	r1, [sp, #36]
         43530:	e5cd0027 	strb	r0, [sp, #39]
         43534:	e5cd1026 	strb	r1, [sp, #38]
         43538:	e5cd2029 	strb	r2, [sp, #41]
         4353c:	e3a0007f 	mov	r0, #127	; 0x7f
         43540:	e5cd0028 	strb	r0, [sp, #40]
         43544:	e5cd202b 	strb	r2, [sp, #43]
         43548:	e5cd002a 	strb	r0, [sp, #42]
         4354c:	e28d1024 	add	r1, sp, #36	; 0x24
         43550:	e28d0014 	add	r0, sp, #20	; 0x14
         43554:	eb6913ad 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
         43558:	e28d0014 	add	r0, sp, #20	; 0x14
         4355c:	e1a02008 	mov	r2, r8
         43560:	e49d1004 	ldr	r1, [sp], #4
         43564:	eb6c2858 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
         43568:	e1a00007 	mov	r0, r7
         4356c:	eb6c2c69 	bl	1b4e718 <$EmptyRect(Rect *)>
         43570:	e284807c 	add	r8, r4, #124	; 0x7c
         43574:	e3300000 	teq	r0, #0	; 0x0
         43578:	1a000004 	bne	43590 <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x224>
         4357c:	e1a01006 	mov	r1, r6
         43580:	e1a00005 	mov	r0, r5
         43584:	eb6c2c68 	bl	1b4e72c <$EqualRect__FP4RectT1>
         43588:	e3300000 	teq	r0, #0	; 0x0
         4358c:	1a000049 	bne	436b8 <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x34c>
         43590:	e24dd024 	sub	sp, sp, #36	; 0x24
         43594:	e28d0010 	add	r0, sp, #16	; 0x10
         43598:	eb690f90 	bl	1a873e0 <TRegionVar::$__ct(void)>
         4359c:	e1a01005 	mov	r1, r5
         435a0:	e59d7010 	ldr	r7, [sp, #16]
         435a4:	e1a0000d 	mov	r0, sp
         435a8:	eb691398 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
         435ac:	e1a0100d 	mov	r1, sp
         435b0:	e1a02007 	mov	r2, r7
         435b4:	e59a0000 	ldr	r0, [sl]
         435b8:	eb6c4104 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
         435bc:	e28d204c 	add	r2, sp, #76	; 0x4c
         435c0:	e28d104c 	add	r1, sp, #76	; 0x4c
         435c4:	e1a00005 	mov	r0, r5
         435c8:	eb6c40ff 	bl	1b539cc <$SectRect__FP4RectN21>
         435cc:	e24dd008 	sub	sp, sp, #8	; 0x8
         435d0:	e1a0100d 	mov	r1, sp
         435d4:	e5990000 	ldr	r0, [r9]
         435d8:	eb6a3084 	bl	1acf7f0 <TRootView::$GetCaretRect(TRect *)>
         435dc:	e1a0200d 	mov	r2, sp
         435e0:	e1a0100d 	mov	r1, sp
         435e4:	e1a00006 	mov	r0, r6
         435e8:	eb6c40f7 	bl	1b539cc <$SectRect__FP4RectN21>
         435ec:	e1a0000d 	mov	r0, sp
         435f0:	eb6c2c48 	bl	1b4e718 <$EmptyRect(Rect *)>
         435f4:	e3300000 	teq	r0, #0	; 0x0
         435f8:	1a000003 	bne	4360c <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x2a0>
         435fc:	e5990000 	ldr	r0, [r9]
         43600:	eb6a40e1 	bl	1ad398c <TRootView::$RestoreBitsUnderCaret(void)>
         43604:	e5990000 	ldr	r0, [r9]
         43608:	eb6a2c3e 	bl	1ace708 <TRootView::$DirtyCaret(void)>
         4360c:	e3a03000 	mov	r3, #0	; 0x0
         43610:	e92d0008 	stmdb	sp!, {r3}
         43614:	e28d2058 	add	r2, sp, #88	; 0x58
         43618:	e28d1058 	add	r1, sp, #88	; 0x58
         4361c:	e1a00004 	mov	r0, r4
         43620:	eb692c4b 	bl	1a8e754 <TBits::$CopyFromScreen(TRect const &, TRect const &, long, Region **)>
         43624:	e28dd004 	add	sp, sp, #4	; 0x4
         43628:	e59d0018 	ldr	r0, [sp, #24]
         4362c:	eb6c2c3a 	bl	1b4e71c <$EmptyRgn(Region **)>
         43630:	e3300000 	teq	r0, #0	; 0x0
         43634:	1a000010 	bne	4367c <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x310>
         43638:	e24dd004 	sub	sp, sp, #4	; 0x4
         4363c:	e5960000 	ldr	r0, [r6]
         43640:	e58d0000 	str	r0, [sp]
         43644:	e1a00004 	mov	r0, r4
         43648:	e49d1004 	ldr	r1, [sp], #4
         4364c:	eb691bc2 	bl	1a8a55c <TBits::$BeginDrawing(TPoint)>
         43650:	e3a00001 	mov	r0, #1	; 0x1
         43654:	e59f7058 	ldr	r7, [pc, #58]	; 436b4 <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x348>
         43658:	e5c70000 	strb	r0, [r7]
         4365c:	e3a02000 	mov	r2, #0	; 0x0
         43660:	e5940088 	ldr	r0, [r4, #136]	; fField136
         43664:	e59d1018 	ldr	r1, [sp, #24]
         43668:	eb6e23f3 	bl	1bcc63c <TView::$Update(TBaseRegion, TView *)>
         4366c:	e3a02000 	mov	r2, #0	; 0x0
         43670:	e5c72000 	strb	r2, [r7]
         43674:	e1a00004 	mov	r0, r4
         43678:	eb693cba 	bl	1a92968 <TBits::$EndDrawing(void)>
         4367c:	e1a02008 	mov	r2, r8
         43680:	e1a01005 	mov	r1, r5
         43684:	e1a00006 	mov	r0, r6
         43688:	eb6982fa 	bl	1aa4278 <$TrimRect__FRC5TRectT1P5TRect>
         4368c:	e28dd008 	add	sp, sp, #8	; 0x8
         43690:	e28d0010 	add	r0, sp, #16	; 0x10
         43694:	e3a01000 	mov	r1, #0	; 0x0
         43698:	eb691369 	bl	1a88444 <TRegionVar::$__dt(void)>
         4369c:	e28dd024 	add	sp, sp, #36	; 0x24
         436a0:	ea000006 	b	436c0 <TAnimate::PostSetup(TRect const &, TRect const &, TRect const &)+0x354>
         436a4:	00371318 	eoreqs	r1, r7, r8, lsl r3
         436a8:	0c101934 	ldceq	9, cr1, [r0], -#208
         436ac:	0c104c5c 	ldceq	12, cr4, [r0], -#368
         436b0:	0c104c58 	ldceq	12, cr4, [r0], -#352
         436b4:	0c104f60 	ldceq	15, cr4, [r0], -#384
         436b8:	e8971008 	ldmia	r7, {r3, ip}
         436bc:	e8881008 	stmia	r8, {r3, ip}
         436c0:	e2840084 	add	r0, r4, #132	; 0x84
         436c4:	e5981000 	ldr	r1, [r8]
         436c8:	e5801000 	str	r1, [r0]
         436cc:	e2841064 	add	r1, r4, #100	; 0x64
         436d0:	e1a00004 	mov	r0, r4
         436d4:	eb697a89 	bl	1aa2100 <TBits::$SetBounds(TRect const &)>
         436d8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TAnimate::DoEffect(RefVar const &)
 * Address: 000436dc
 */
TAnimate::DoEffect(RefVar const &) {
    /*
         436dc:	e1a0c00d 	mov	ip, sp
         436e0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         436e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         436e8:	e1a04000 	mov	r4, r0
         436ec:	e1a05001 	mov	r5, r1
         436f0:	e59010a8 	ldr	r1, [r0, #168]	; fField168
         436f4:	e590208c 	ldr	r2, [r0, #140]	; fField140
         436f8:	e3a00001 	mov	r0, #1	; 0x1
         436fc:	e1110210 	tst	r1, r0, lsl r2
         43700:	e59f6198 	ldr	r6, [pc, #198]	; 438a0 <TAnimate::DoEffect(RefVar const &)+0x1c4>
         43704:	1a000008 	bne	4372c <TAnimate::DoEffect(RefVar const &)+0x50>
         43708:	e5940088 	ldr	r0, [r4, #136]	; fField136
         4370c:	e3300000 	teq	r0, #0	; 0x0
         43710:	0a000005 	beq	4372c <TAnimate::DoEffect(RefVar const &)+0x50>
         43714:	e2801010 	add	r1, r0, #16	; 0x10
         43718:	e5960000 	ldr	r0, [r6]
         4371c:	eb697ea4 	bl	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
         43720:	e3a01000 	mov	r1, #0	; 0x0
         43724:	e5960000 	ldr	r0, [r6]
         43728:	eb6986dd 	bl	1aa52a4 <TRootView::$Update(TRect *)>
         4372c:	e2840074 	add	r0, r4, #116	; 0x74
         43730:	e1a09000 	mov	r9, r0
         43734:	eb6c2bf7 	bl	1b4e718 <$EmptyRect(Rect *)>
         43738:	e3300000 	teq	r0, #0	; 0x0
         4373c:	13a00000 	movne	r0, #0	; 0x0
         43740:	03a00001 	moveq	r0, #1	; 0x1
         43744:	e200a0ff 	and	sl, r0, #255	; 0xff
         43748:	e5d400a5 	ldrb	r0, [r4, #165]	; fField165
         4374c:	e3300000 	teq	r0, #0	; 0x0
         43750:	0a00005b 	beq	438c4 <TAnimate::DoEffect(RefVar const &)+0x1e8>
         43754:	e2848034 	add	r8, r4, #52	; 0x34
         43758:	e33a0000 	teq	sl, #0	; 0x0
         4375c:	0a000004 	beq	43774 <TAnimate::DoEffect(RefVar const &)+0x98>
         43760:	e1a01009 	mov	r1, r9
         43764:	e1a00008 	mov	r0, r8
         43768:	eb6c23b4 	bl	1b4c640 <TSaveScreenBits::$AllocateBuffers(Rect *)>
         4376c:	e3300000 	teq	r0, #0	; 0x0
         43770:	0a000053 	beq	438c4 <TAnimate::DoEffect(RefVar const &)+0x1e8>
         43774:	e59f7128 	ldr	r7, [pc, #128]	; 438a4 <TAnimate::DoEffect(RefVar const &)+0x1c8>
         43778:	e5970000 	ldr	r0, [r7]
         4377c:	e3300000 	teq	r0, #0	; 0x0
         43780:	03a01000 	moveq	r1, #0	; 0x0
         43784:	0b6c23a3 	bleq	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         43788:	e24dd008 	sub	sp, sp, #8	; 0x8
         4378c:	e1a0100d 	mov	r1, sp
         43790:	e5960000 	ldr	r0, [r6]
         43794:	eb6a3015 	bl	1acf7f0 <TRootView::$GetCaretRect(TRect *)>
         43798:	e33a0000 	teq	sl, #0	; 0x0
         4379c:	0a000021 	beq	43828 <TAnimate::DoEffect(RefVar const &)+0x14c>
         437a0:	e24dd010 	sub	sp, sp, #16	; 0x10
         437a4:	e284006c 	add	r0, r4, #108	; 0x6c
         437a8:	eb6c2bda 	bl	1b4e718 <$EmptyRect(Rect *)>
         437ac:	e3300000 	teq	r0, #0	; 0x0
         437b0:	1a000009 	bne	437dc <TAnimate::DoEffect(RefVar const &)+0x100>
         437b4:	e24dd004 	sub	sp, sp, #4	; 0x4
         437b8:	e5940088 	ldr	r0, [r4, #136]	; fField136
         437bc:	e2801010 	add	r1, r0, #16	; 0x10
         437c0:	e28d0004 	add	r0, sp, #4	; 0x4
         437c4:	eb691311 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
         437c8:	e28d0004 	add	r0, sp, #4	; 0x4
         437cc:	e58d0000 	str	r0, [sp]
         437d0:	e5960000 	ldr	r0, [r6]
         437d4:	e49d1004 	ldr	r1, [sp], #4
         437d8:	eb6986bf 	bl	1aa52dc <TRootView::$Validate(TBaseRegion const)>
         437dc:	e3a01000 	mov	r1, #0	; 0x0
         437e0:	e5960000 	ldr	r0, [r6]
         437e4:	eb6986ae 	bl	1aa52a4 <TRootView::$Update(TRect *)>
         437e8:	e24dd008 	sub	sp, sp, #8	; 0x8
         437ec:	e28d1018 	add	r1, sp, #24	; 0x18
         437f0:	e8915000 	ldmia	r1, {ip, lr}
         437f4:	e88d5000 	stmia	sp, {ip, lr}
         437f8:	e1a00009 	mov	r0, r9
         437fc:	e1a0200d 	mov	r2, sp
         43800:	e1a0100d 	mov	r1, sp
         43804:	eb6c4070 	bl	1b539cc <$SectRect__FP4RectN21>
         43808:	e1a0000d 	mov	r0, sp
         4380c:	eb6c2bc1 	bl	1b4e718 <$EmptyRect(Rect *)>
         43810:	e3300000 	teq	r0, #0	; 0x0
         43814:	05960000 	ldreq	r0, [r6]
         43818:	0b6a405b 	bleq	1ad398c <TRootView::$RestoreBitsUnderCaret(void)>
         4381c:	e1a00008 	mov	r0, r8
         43820:	eb6c4062 	bl	1b539b0 <TSaveScreenBits::$SaveScreenBits(void)>
         43824:	e28dd018 	add	sp, sp, #24	; 0x18
         43828:	e2840064 	add	r0, r4, #100	; 0x64
         4382c:	e1a0200d 	mov	r2, sp
         43830:	e1a0100d 	mov	r1, sp
         43834:	eb6c4064 	bl	1b539cc <$SectRect__FP4RectN21>
         43838:	e1a0000d 	mov	r0, sp
         4383c:	eb6c2bb5 	bl	1b4e718 <$EmptyRect(Rect *)>
         43840:	e3300000 	teq	r0, #0	; 0x0
         43844:	05960000 	ldreq	r0, [r6]
         43848:	0b6a2bae 	bleq	1ace708 <TRootView::$DirtyCaret(void)>
         4384c:	e5970000 	ldr	r0, [r7]
         43850:	e3300000 	teq	r0, #0	; 0x0
         43854:	1a00000a 	bne	43884 <TAnimate::DoEffect(RefVar const &)+0x1a8>
         43858:	e594008c 	ldr	r0, [r4, #140]	; fField140
         4385c:	e3300000 	teq	r0, #0	; 0x0
         43860:	0a000010 	beq	438a8 <TAnimate::DoEffect(RefVar const &)+0x1cc>
         43864:	e3300001 	teq	r0, #1	; 0x1
         43868:	0a000012 	beq	438b8 <TAnimate::DoEffect(RefVar const &)+0x1dc>
         4386c:	e3300002 	teq	r0, #2	; 0x2
         43870:	0a00000c 	beq	438a8 <TAnimate::DoEffect(RefVar const &)+0x1cc>
         43874:	e3300003 	teq	r0, #3	; 0x3
         43878:	1a000004 	bne	43890 <TAnimate::DoEffect(RefVar const &)+0x1b4>
         4387c:	e1a00004 	mov	r0, r4
         43880:	eb696991 	bl	1a9decc <TAnimate::$PoofEffect(void)>
         43884:	e5970000 	ldr	r0, [r7]
         43888:	e3300000 	teq	r0, #0	; 0x0
         4388c:	1a000002 	bne	4389c <TAnimate::DoEffect(RefVar const &)+0x1c0>
         43890:	e3a01000 	mov	r1, #0	; 0x0
         43894:	e3a00000 	mov	r0, #0	; 0x0
         43898:	eb6c2360 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         4389c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         438a0:	0c101934 	ldceq	9, cr1, [r0], -#208
         438a4:	0c101940 	ldceq	9, cr1, [r0], -#256
         438a8:	e1a01005 	mov	r1, r5
         438ac:	e1a00004 	mov	r0, r4
         438b0:	eb69614e 	bl	1a9bdf0 <TAnimate::$MultiEffect(RefVar const &)>
         438b4:	eafffff2 	b	43884 <TAnimate::DoEffect(RefVar const &)+0x1a8>
         438b8:	e1a00004 	mov	r0, r4
         438bc:	eb692fb6 	bl	1a8f79c <TAnimate::$CrumpleEffect(void)>
         438c0:	eaffffef 	b	43884 <TAnimate::DoEffect(RefVar const &)+0x1a8>
         438c4:	e28400a0 	add	r0, r4, #160	; 0xa0
         438c8:	e5901000 	ldr	r1, [r0]
         438cc:	e5911000 	ldr	r1, [r1]
         438d0:	e3310002 	teq	r1, #2	; 0x2
         438d4:	11a01005 	movne	r1, r5
         438d8:	191b6ff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         438dc:	1a696969 	bne	1a9de88 <$PlaySound__FRC6RefVarT1>
         438e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TAnimate::MultiEffect(RefVar const &)
 * Address: 000438e4
 */
TAnimate::MultiEffect(RefVar const &) {
    /*
         438e4:	e1a0c00d 	mov	ip, sp
         438e8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         438ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         438f0:	e1a04000 	mov	r4, r0
         438f4:	e1a06001 	mov	r6, r1
         438f8:	e24dd090 	sub	sp, sp, #144	; 0x90
         438fc:	e590009c 	ldr	r0, [r0, #156]	; fField156
         43900:	e1a01000 	mov	r1, r0
         43904:	e200201f 	and	r2, r0, #31	; 0x1f
         43908:	e2822001 	add	r2, r2, #1	; 0x1
         4390c:	e58d2034 	str	r2, [sp, #52]
         43910:	e2002e3e 	and	r2, r0, #992	; 0x3e0
         43914:	e3a08001 	mov	r8, #1	; 0x1
         43918:	e08822c2 	add	r2, r8, r2, asr #5
         4391c:	e0087540 	and	r7, r8, r0, asr #10
         43920:	e58d2030 	str	r2, [sp, #48]
         43924:	e00825c0 	and	r2, r8, r0, asr #11
         43928:	e58d2028 	str	r2, [sp, #40]
         4392c:	e58d702c 	str	r7, [sp, #44]
         43930:	e0082641 	and	r2, r8, r1, asr #12
         43934:	e58d2024 	str	r2, [sp, #36]
         43938:	e00826c1 	and	r2, r8, r1, asr #13
         4393c:	e58d2020 	str	r2, [sp, #32]
         43940:	e0082741 	and	r2, r8, r1, asr #14
         43944:	e58d201c 	str	r2, [sp, #28]
         43948:	e00827c1 	and	r2, r8, r1, asr #15
         4394c:	e58d2018 	str	r2, [sp, #24]
         43950:	e0082841 	and	r2, r8, r1, asr #16
         43954:	e58d2014 	str	r2, [sp, #20]
         43958:	e00828c1 	and	r2, r8, r1, asr #17
         4395c:	e58d2010 	str	r2, [sp, #16]
         43960:	e0082941 	and	r2, r8, r1, asr #18
         43964:	e58d200c 	str	r2, [sp, #12]
         43968:	e00829c1 	and	r2, r8, r1, asr #19
         4396c:	e201161e 	and	r1, r1, #31457280	; 0x1e00000
         43970:	e1b01aa1 	movs	r1, r1, lsr #21
         43974:	e58d2008 	str	r2, [sp, #8]
         43978:	12811001 	addne	r1, r1, #1	; 0x1
         4397c:	03a01003 	moveq	r1, #3	; 0x3
         43980:	e200041e 	and	r0, r0, #503316480	; 0x1e000000
         43984:	e58d1004 	str	r1, [sp, #4]
         43988:	e1b01ca0 	movs	r1, r0, lsr #25
         4398c:	e58d1000 	str	r1, [sp]
         43990:	03a01003 	moveq	r1, #3	; 0x3
         43994:	058d1000 	streq	r1, [sp]
         43998:	e24dd008 	sub	sp, sp, #8	; 0x8
         4399c:	e2840064 	add	r0, r4, #100	; 0x64
         439a0:	e58d0004 	str	r0, [sp, #4]
         439a4:	e2840034 	add	r0, r4, #52	; 0x34
         439a8:	e58d0094 	str	r0, [sp, #148]	; fField148
         439ac:	e5900000 	ldr	r0, [r0]
         439b0:	e1b00000 	movs	r0, r0
         439b4:	13a00001 	movne	r0, #1	; 0x1
         439b8:	e20000ff 	and	r0, r0, #255	; 0xff
         439bc:	e58d0000 	str	r0, [sp]
         439c0:	e284007c 	add	r0, r4, #124	; 0x7c
         439c4:	e1a07000 	mov	r7, r0
         439c8:	eb6c2b52 	bl	1b4e718 <$EmptyRect(Rect *)>
         439cc:	e3a05000 	mov	r5, #0	; 0x0
         439d0:	e3300000 	teq	r0, #0	; 0x0
         439d4:	1a000013 	bne	43a28 <TAnimate::MultiEffect(RefVar const &)+0x144>
         439d8:	e24dd010 	sub	sp, sp, #16	; 0x10
         439dc:	e1a00004 	mov	r0, r4
         439e0:	e5941084 	ldr	r1, [r4, #132]	; fField132
         439e4:	eb691adc 	bl	1a8a55c <TBits::$BeginDrawing(TPoint)>
         439e8:	e59f94c8 	ldr	r9, [pc, #4c8]	; 43eb8 <TAnimate::MultiEffect(RefVar const &)+0x5d4>
         439ec:	e5c98000 	strb	r8, [r9]
         439f0:	e24dd004 	sub	sp, sp, #4	; 0x4
         439f4:	e1a01007 	mov	r1, r7
         439f8:	e28d0004 	add	r0, sp, #4	; 0x4
         439fc:	eb691283 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
         43a00:	e28d0004 	add	r0, sp, #4	; 0x4
         43a04:	e58d0000 	str	r0, [sp]
         43a08:	e3a02000 	mov	r2, #0	; 0x0
         43a0c:	e5940088 	ldr	r0, [r4, #136]	; fField136
         43a10:	e49d1004 	ldr	r1, [sp], #4
         43a14:	eb6e2308 	bl	1bcc63c <TView::$Update(TBaseRegion, TView *)>
         43a18:	e5c95000 	strb	r5, [r9]
         43a1c:	e1a00004 	mov	r0, r4
         43a20:	eb693bd0 	bl	1a92968 <TBits::$EndDrawing(void)>
         43a24:	e28dd010 	add	sp, sp, #16	; 0x10
         43a28:	e24dd008 	sub	sp, sp, #8	; 0x8
         43a2c:	e59d000c 	ldr	r0, [sp, #12]
         43a30:	e5900006 	ldr	r0, [r0, #6]
         43a34:	e1a00820 	mov	r0, r0, lsr #16
         43a38:	e59d100c 	ldr	r1, [sp, #12]
         43a3c:	e5911002 	ldr	r1, [r1, #2]
         43a40:	e1a01821 	mov	r1, r1, lsr #16
         43a44:	e0400001 	sub	r0, r0, r1
         43a48:	e1a01800 	mov	r1, r0, lsl #16
         43a4c:	e1a01841 	mov	r1, r1, asr #16
         43a50:	e58d1004 	str	r1, [sp, #4]
         43a54:	e59d000c 	ldr	r0, [sp, #12]
         43a58:	e5901004 	ldr	r1, [r0, #4]
         43a5c:	e1a01821 	mov	r1, r1, lsr #16
         43a60:	e5900000 	ldr	r0, [r0]
         43a64:	e1a00820 	mov	r0, r0, lsr #16
         43a68:	e0410000 	sub	r0, r1, r0
         43a6c:	e1a01800 	mov	r1, r0, lsl #16
         43a70:	e1a01841 	mov	r1, r1, asr #16
         43a74:	e58d1000 	str	r1, [sp]
         43a78:	e59d1018 	ldr	r1, [sp, #24]
         43a7c:	e3310000 	teq	r1, #0	; 0x0
         43a80:	0a000005 	beq	43a9c <TAnimate::MultiEffect(RefVar const &)+0x1b8>
         43a84:	e59d703c 	ldr	r7, [sp, #60]
         43a88:	e2277001 	eor	r7, r7, #1	; 0x1
         43a8c:	e58d703c 	str	r7, [sp, #60]
         43a90:	e59d0038 	ldr	r0, [sp, #56]
         43a94:	e2200001 	eor	r0, r0, #1	; 0x1
         43a98:	e58d0038 	str	r0, [sp, #56]
         43a9c:	e24dd010 	sub	sp, sp, #16	; 0x10
         43aa0:	e1a0000d 	mov	r0, sp
         43aa4:	eb6c2f49 	bl	1b4f7d0 <$GetPenState(PenState *)>
         43aa8:	eb6c3b9d 	bl	1b52924 <$PenNormal(void)>
         43aac:	e3a00000 	mov	r0, #0	; 0x0
         43ab0:	e52d0004 	str	r0, [sp, -#4]!
         43ab4:	e59d0030 	ldr	r0, [sp, #48]
         43ab8:	e3300000 	teq	r0, #0	; 0x0
         43abc:	0a000008 	beq	43ae4 <TAnimate::MultiEffect(RefVar const &)+0x200>
         43ac0:	e5940088 	ldr	r0, [r4, #136]	; fField136
         43ac4:	e590000c 	ldr	r0, [r0, #12]
         43ac8:	e2000c0f 	and	r0, r0, #3840	; 0xf00
         43acc:	e1a00420 	mov	r0, r0, lsr #8
         43ad0:	e1a00800 	mov	r0, r0, lsl #16
         43ad4:	e1a00840 	mov	r0, r0, asr #16
         43ad8:	e58d0000 	str	r0, [sp]
         43adc:	e1a01000 	mov	r1, r0
         43ae0:	eb6c3b90 	bl	1b52928 <$PenSize__FlT1>
         43ae4:	e3a07000 	mov	r7, #0	; 0x0
         43ae8:	e5940088 	ldr	r0, [r4, #136]	; fField136
         43aec:	eb6e1a9f 	bl	1bca570 <TView::$HasVisRgn( const(void))>
         43af0:	e2841060 	add	r1, r4, #96	; 0x60
         43af4:	e3300000 	teq	r0, #0	; 0x0
         43af8:	e58d10ac 	str	r1, [sp, #172]
         43afc:	0a00000c 	beq	43b34 <TAnimate::MultiEffect(RefVar const &)+0x250>
         43b00:	e5940088 	ldr	r0, [r4, #136]	; fField136
         43b04:	eb6e1672 	bl	1bc94d4 <TView::$Clipper( const(void))>
         43b08:	e5900000 	ldr	r0, [r0]
         43b0c:	e5901000 	ldr	r1, [r0]
         43b10:	e5911000 	ldr	r1, [r1]
         43b14:	e1a01841 	mov	r1, r1, asr #16
         43b18:	e331000c 	teq	r1, #12	; 0xc
         43b1c:	0a000004 	beq	43b34 <TAnimate::MultiEffect(RefVar const &)+0x250>
         43b20:	e3a07001 	mov	r7, #1	; 0x1
         43b24:	e59d20ac 	ldr	r2, [sp, #172]
         43b28:	e5921000 	ldr	r1, [r2]
         43b2c:	e5922000 	ldr	r2, [r2]
         43b30:	eb6c26e5 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
         43b34:	e24dd010 	sub	sp, sp, #16	; 0x10
         43b38:	e3370000 	teq	r7, #0	; 0x0
         43b3c:	1a00000c 	bne	43b74 <TAnimate::MultiEffect(RefVar const &)+0x290>
         43b40:	e24dd004 	sub	sp, sp, #4	; 0x4
         43b44:	e59d1034 	ldr	r1, [sp, #52]
         43b48:	e28d0004 	add	r0, sp, #4	; 0x4
         43b4c:	eb69122f 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
         43b50:	e28d0004 	add	r0, sp, #4	; 0x4
         43b54:	e58d0000 	str	r0, [sp]
         43b58:	e59d00c0 	ldr	r0, [sp, #192]
         43b5c:	e5901000 	ldr	r1, [r0]
         43b60:	e59d0000 	ldr	r0, [sp]
         43b64:	e59d20c0 	ldr	r2, [sp, #192]
         43b68:	e5922000 	ldr	r2, [r2]
         43b6c:	eb6c26d6 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
         43b70:	e28dd004 	add	sp, sp, #4	; 0x4
         43b74:	e59d00bc 	ldr	r0, [sp, #188]
         43b78:	e5900000 	ldr	r0, [r0]
         43b7c:	eb6c3f96 	bl	1b539dc <$SetClip(Region **)>
         43b80:	e3a00000 	mov	r0, #0	; 0x0
         43b84:	e24dd068 	sub	sp, sp, #104	; 0x68
         43b88:	e92d0021 	stmdb	sp!, {r0, r5}
         43b8c:	e28d000c 	add	r0, sp, #12	; 0xc
         43b90:	eb6dbb77 	bl	1bb2974 <$setjmp>
         43b94:	e3300000 	teq	r0, #0	; 0x0
         43b98:	1a00017e 	bne	44198 <TAnimate::MultiEffect(RefVar const &)+0x8b4>
         43b9c:	e28d0004 	add	r0, sp, #4	; 0x4
         43ba0:	eb6e7135 	bl	1be007c <$AddExceptionHandler>
         43ba4:	e28400a0 	add	r0, r4, #160	; 0xa0
         43ba8:	e1a01006 	mov	r1, r6
         43bac:	eb6968b5 	bl	1a9de88 <$PlaySound__FRC6RefVarT1>
         43bb0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         43bb4:	e3a00001 	mov	r0, #1	; 0x1
         43bb8:	e58d0010 	str	r0, [sp, #16]
         43bbc:	e59d00c4 	ldr	r0, [sp, #196]
         43bc0:	e3500001 	cmp	r0, #1	; 0x1
         43bc4:	ba00015d 	blt	44140 <TAnimate::MultiEffect(RefVar const &)+0x85c>
         43bc8:	e284103c 	add	r1, r4, #60	; 0x3c
         43bcc:	e58d1144 	str	r1, [sp, #324]
         43bd0:	e24dd004 	sub	sp, sp, #4	; 0x4
         43bd4:	eb6ebb51 	bl	1bf2920 <$Ticks(void)>
         43bd8:	e59d10c4 	ldr	r1, [sp, #196]
         43bdc:	e0800001 	add	r0, r0, r1
         43be0:	e58d0000 	str	r0, [sp]
         43be4:	e59d00bc 	ldr	r0, [sp, #188]
         43be8:	e3300000 	teq	r0, #0	; 0x0
         43bec:	0a000011 	beq	43c38 <TAnimate::MultiEffect(RefVar const &)+0x354>
         43bf0:	e59d0014 	ldr	r0, [sp, #20]
         43bf4:	e3500001 	cmp	r0, #1	; 0x1
         43bf8:	da000009 	ble	43c24 <TAnimate::MultiEffect(RefVar const &)+0x340>
         43bfc:	e28d2018 	add	r2, sp, #24	; 0x18
         43c00:	e59d1148 	ldr	r1, [sp, #328]
         43c04:	e28d0018 	add	r0, sp, #24	; 0x18
         43c08:	eb6c3f6f 	bl	1b539cc <$SectRect__FP4RectN21>
         43c0c:	e3300000 	teq	r0, #0	; 0x0
         43c10:	0a000003 	beq	43c24 <TAnimate::MultiEffect(RefVar const &)+0x340>
         43c14:	e28d1018 	add	r1, sp, #24	; 0x18
         43c18:	e3a02000 	mov	r2, #0	; 0x0
         43c1c:	e59d0150 	ldr	r0, [sp, #336]
         43c20:	eb6c3f5e 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
         43c24:	e59d00bc 	ldr	r0, [sp, #188]
         43c28:	e3300000 	teq	r0, #0	; 0x0
         43c2c:	13a05000 	movne	r5, #0	; 0x0
         43c30:	158d501c 	strne	r5, [sp, #28]
         43c34:	158d5018 	strne	r5, [sp, #24]
         43c38:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
         43c3c:	e3300000 	teq	r0, #0	; 0x0
         43c40:	05940090 	ldreq	r0, [r4, #144]	; fField144
         43c44:	03300000 	teqeq	r0, #0	; 0x0
         43c48:	05940094 	ldreq	r0, [r4, #148]	; fField148
         43c4c:	03300000 	teqeq	r0, #0	; 0x0
         43c50:	1a000003 	bne	43c64 <TAnimate::MultiEffect(RefVar const &)+0x380>
         43c54:	e59d00c8 	ldr	r0, [sp, #200]
         43c58:	e59d1014 	ldr	r1, [sp, #20]
         43c5c:	e1510000 	cmp	r1, r0
         43c60:	aa00012f 	bge	44124 <TAnimate::MultiEffect(RefVar const &)+0x840>
         43c64:	e24dd008 	sub	sp, sp, #8	; 0x8
         43c68:	e59d10c8 	ldr	r1, [sp, #200]
         43c6c:	e5910000 	ldr	r0, [r1]
         43c70:	e1a00840 	mov	r0, r0, asr #16
         43c74:	e58d0004 	str	r0, [sp, #4]
         43c78:	e3a00035 	mov	r0, #53	; 0x35
         43c7c:	eb6a0160 	bl	1ac4204 <$BusyBoxSend(long)>
         43c80:	e3a00001 	mov	r0, #1	; 0x1
         43c84:	e52d0004 	str	r0, [sp, -#4]!
         43c88:	e59d0100 	ldr	r0, [sp, #256]
         43c8c:	e3500001 	cmp	r0, #1	; 0x1
         43c90:	ba000114 	blt	440e8 <TAnimate::MultiEffect(RefVar const &)+0x804>
         43c94:	e59d0000 	ldr	r0, [sp]
         43c98:	e59d10c0 	ldr	r1, [sp, #192]
         43c9c:	e0010190 	mul	r1, r0, r1
         43ca0:	e59d0100 	ldr	r0, [sp, #256]
         43ca4:	e28d70f8 	add	r7, sp, #248	; 0xf8
         43ca8:	e89700c0 	ldmia	r7, {r6, r7}
         43cac:	eb6dbb23 	bl	1bb2940 <$__rt_sdiv>
         43cb0:	e59d10cc 	ldr	r1, [sp, #204]
         43cb4:	e5911000 	ldr	r1, [r1]
         43cb8:	e0801841 	add	r1, r0, r1, asr #16
         43cbc:	e58d1004 	str	r1, [sp, #4]
         43cc0:	e59d0008 	ldr	r0, [sp, #8]
         43cc4:	e0410000 	sub	r0, r1, r0
         43cc8:	e1a09000 	mov	r9, r0
         43ccc:	e3a08000 	mov	r8, #0	; 0x0
         43cd0:	e59d10e0 	ldr	r1, [sp, #224]
         43cd4:	e3310000 	teq	r1, #0	; 0x0
         43cd8:	0a00000d 	beq	43d14 <TAnimate::MultiEffect(RefVar const &)+0x430>
         43cdc:	e5945090 	ldr	r5, [r4, #144]	; fField144
         43ce0:	e0401005 	sub	r1, r0, r5
         43ce4:	e59d0020 	ldr	r0, [sp, #32]
         43ce8:	e0010190 	mul	r1, r0, r1
         43cec:	e59d00d4 	ldr	r0, [sp, #212]
         43cf0:	eb6dbb12 	bl	1bb2940 <$__rt_sdiv>
         43cf4:	e5d410a4 	ldrb	r1, [r4, #164]	; fField164
         43cf8:	e3310000 	teq	r1, #0	; 0x0
         43cfc:	00490000 	subeq	r0, r9, r0
         43d00:	10850000 	addne	r0, r5, r0
         43d04:	e5941098 	ldr	r1, [r4, #152]	; fField152
         43d08:	e1510000 	cmp	r1, r0
         43d0c:	b0418000 	sublt	r8, r1, r0
         43d10:	b1a00001 	movlt	r0, r1
         43d14:	e24dd004 	sub	sp, sp, #4	; 0x4
         43d18:	e59d10d0 	ldr	r1, [sp, #208]
         43d1c:	e5919002 	ldr	r9, [r1, #2]
         43d20:	e1a09849 	mov	r9, r9, asr #16
         43d24:	e3a01001 	mov	r1, #1	; 0x1
         43d28:	e52d1004 	str	r1, [sp, -#4]!
         43d2c:	e59d110c 	ldr	r1, [sp, #268]
         43d30:	e3510001 	cmp	r1, #1	; 0x1
         43d34:	ba0000db 	blt	440a8 <TAnimate::MultiEffect(RefVar const &)+0x7c4>
         43d38:	e59d1010 	ldr	r1, [sp, #16]
         43d3c:	e1a02801 	mov	r2, r1, lsl #16
         43d40:	e1a02842 	mov	r2, r2, asr #16
         43d44:	e58d2158 	str	r2, [sp, #344]
         43d48:	e1a02442 	mov	r2, r2, asr #8
         43d4c:	e0811000 	add	r1, r1, r0
         43d50:	e1a01801 	mov	r1, r1, lsl #16
         43d54:	e1a01841 	mov	r1, r1, asr #16
         43d58:	e58d1150 	str	r1, [sp, #336]
         43d5c:	e58d2154 	str	r2, [sp, #340]
         43d60:	e1a01441 	mov	r1, r1, asr #8
         43d64:	e2682000 	rsb	r2, r8, #0	; 0x0
         43d68:	e58d114c 	str	r1, [sp, #332]
         43d6c:	e58d2148 	str	r2, [sp, #328]
         43d70:	e59d100c 	ldr	r1, [sp, #12]
         43d74:	e1a02801 	mov	r2, r1, lsl #16
         43d78:	e1a02842 	mov	r2, r2, asr #16
         43d7c:	e58d2144 	str	r2, [sp, #324]
         43d80:	e1a02442 	mov	r2, r2, asr #8
         43d84:	e0411000 	sub	r1, r1, r0
         43d88:	e1a01801 	mov	r1, r1, lsl #16
         43d8c:	e1a01841 	mov	r1, r1, asr #16
         43d90:	e58d113c 	str	r1, [sp, #316]
         43d94:	e58d2140 	str	r2, [sp, #320]
         43d98:	e1a01441 	mov	r1, r1, asr #8
         43d9c:	e58d1138 	str	r1, [sp, #312]
         43da0:	e59d10b4 	ldr	r1, [sp, #180]
         43da4:	e0401001 	sub	r1, r0, r1
         43da8:	e58d1134 	str	r1, [sp, #308]
         43dac:	e59d0000 	ldr	r0, [sp]
         43db0:	e59d10cc 	ldr	r1, [sp, #204]
         43db4:	e0010190 	mul	r1, r0, r1
         43db8:	e59d010c 	ldr	r0, [sp, #268]
         43dbc:	eb6dbadf 	bl	1bb2940 <$__rt_sdiv>
         43dc0:	e59d10d4 	ldr	r1, [sp, #212]
         43dc4:	e5911002 	ldr	r1, [r1, #2]
         43dc8:	e0802841 	add	r2, r0, r1, asr #16
         43dcc:	e58d2004 	str	r2, [sp, #4]
         43dd0:	e0425009 	sub	r5, r2, r9
         43dd4:	e1a0a005 	mov	sl, r5
         43dd8:	e59d10ec 	ldr	r1, [sp, #236]
         43ddc:	e3310000 	teq	r1, #0	; 0x0
         43de0:	0a00000b 	beq	43e14 <TAnimate::MultiEffect(RefVar const &)+0x530>
         43de4:	e5940094 	ldr	r0, [r4, #148]	; fField148
         43de8:	e58d0130 	str	r0, [sp, #304]
         43dec:	e0451000 	sub	r1, r5, r0
         43df0:	e59d0028 	ldr	r0, [sp, #40]
         43df4:	e0010190 	mul	r1, r0, r1
         43df8:	e59d00dc 	ldr	r0, [sp, #220]
         43dfc:	eb6dbacf 	bl	1bb2940 <$__rt_sdiv>
         43e00:	e5d410a4 	ldrb	r1, [r4, #164]	; fField164
         43e04:	e3310000 	teq	r1, #0	; 0x0
         43e08:	004a5000 	subeq	r5, sl, r0
         43e0c:	159d1130 	ldrne	r1, [sp, #304]
         43e10:	10815000 	addne	r5, r1, r0
         43e14:	e24dd010 	sub	sp, sp, #16	; 0x10
         43e18:	e28d0008 	add	r0, sp, #8	; 0x8
         43e1c:	e3a0a000 	mov	sl, #0	; 0x0
         43e20:	e1a01809 	mov	r1, r9, lsl #16
         43e24:	e1a01841 	mov	r1, r1, asr #16
         43e28:	e58d113c 	str	r1, [sp, #316]
         43e2c:	e1a01441 	mov	r1, r1, asr #8
         43e30:	e58d1138 	str	r1, [sp, #312]
         43e34:	e1a01005 	mov	r1, r5
         43e38:	e0892005 	add	r2, r9, r5
         43e3c:	e1a02802 	mov	r2, r2, lsl #16
         43e40:	e1a02842 	mov	r2, r2, asr #16
         43e44:	e58d2134 	str	r2, [sp, #308]
         43e48:	e1a02442 	mov	r2, r2, asr #8
         43e4c:	e58d2130 	str	r2, [sp, #304]
         43e50:	e59d2014 	ldr	r2, [sp, #20]
         43e54:	e1a03802 	mov	r3, r2, lsl #16
         43e58:	e1a03843 	mov	r3, r3, asr #16
         43e5c:	e58d312c 	str	r3, [sp, #300]
         43e60:	e1a03443 	mov	r3, r3, asr #8
         43e64:	e0421001 	sub	r1, r2, r1
         43e68:	e1a01801 	mov	r1, r1, lsl #16
         43e6c:	e1a01841 	mov	r1, r1, asr #16
         43e70:	e58d1124 	str	r1, [sp, #292]
         43e74:	e58d3128 	str	r3, [sp, #296]
         43e78:	e1a01441 	mov	r1, r1, asr #8
         43e7c:	e58d1120 	str	r1, [sp, #288]
         43e80:	e3370000 	teq	r7, #0	; 0x0
         43e84:	1a000002 	bne	43e94 <TAnimate::MultiEffect(RefVar const &)+0x5b0>
         43e88:	e59d10fc 	ldr	r1, [sp, #252]
         43e8c:	e3310000 	teq	r1, #0	; 0x0
         43e90:	1a000009 	bne	43ebc <TAnimate::MultiEffect(RefVar const &)+0x5d8>
         43e94:	e59d113c 	ldr	r1, [sp, #316]
         43e98:	e5c01003 	strb	r1, [r0, #3]
         43e9c:	e59d1138 	ldr	r1, [sp, #312]
         43ea0:	e5c01002 	strb	r1, [r0, #2]
         43ea4:	e59d1134 	ldr	r1, [sp, #308]
         43ea8:	e5c01007 	strb	r1, [r0, #7]
         43eac:	e59d1130 	ldr	r1, [sp, #304]
         43eb0:	e5c01006 	strb	r1, [r0, #6]
         43eb4:	ea000008 	b	43edc <TAnimate::MultiEffect(RefVar const &)+0x5f8>
         43eb8:	0c104f60 	ldceq	15, cr4, [r0], -#384
         43ebc:	e59d112c 	ldr	r1, [sp, #300]
         43ec0:	e5c01007 	strb	r1, [r0, #7]
         43ec4:	e59d1128 	ldr	r1, [sp, #296]
         43ec8:	e5c01006 	strb	r1, [r0, #6]
         43ecc:	e59d1124 	ldr	r1, [sp, #292]
         43ed0:	e5c01003 	strb	r1, [r0, #3]
         43ed4:	e59d1120 	ldr	r1, [sp, #288]
         43ed8:	e5c01002 	strb	r1, [r0, #2]
         43edc:	e3360000 	teq	r6, #0	; 0x0
         43ee0:	1a000002 	bne	43ef0 <TAnimate::MultiEffect(RefVar const &)+0x60c>
         43ee4:	e59d10f8 	ldr	r1, [sp, #248]
         43ee8:	e3310000 	teq	r1, #0	; 0x0
         43eec:	1a00000d 	bne	43f28 <TAnimate::MultiEffect(RefVar const &)+0x644>
         43ef0:	e59d1168 	ldr	r1, [sp, #360]
         43ef4:	e5c01001 	strb	r1, [r0, #1]
         43ef8:	e59d1164 	ldr	r1, [sp, #356]
         43efc:	e5c01000 	strb	r1, [r0]
         43f00:	e59d1160 	ldr	r1, [sp, #352]
         43f04:	e5c01005 	strb	r1, [r0, #5]
         43f08:	e59d115c 	ldr	r1, [sp, #348]
         43f0c:	e5c01004 	strb	r1, [r0, #4]
         43f10:	e33a0000 	teq	sl, #0	; 0x0
         43f14:	1a000012 	bne	43f64 <TAnimate::MultiEffect(RefVar const &)+0x680>
         43f18:	e3380000 	teq	r8, #0	; 0x0
         43f1c:	159d2158 	ldrne	r2, [sp, #344]
         43f20:	1a00000d 	bne	43f5c <TAnimate::MultiEffect(RefVar const &)+0x678>
         43f24:	ea00000e 	b	43f64 <TAnimate::MultiEffect(RefVar const &)+0x680>
         43f28:	e59d1154 	ldr	r1, [sp, #340]
         43f2c:	e5c01005 	strb	r1, [r0, #5]
         43f30:	e59d1150 	ldr	r1, [sp, #336]
         43f34:	e5c01004 	strb	r1, [r0, #4]
         43f38:	e59d114c 	ldr	r1, [sp, #332]
         43f3c:	e5c01001 	strb	r1, [r0, #1]
         43f40:	e59d1148 	ldr	r1, [sp, #328]
         43f44:	e5c01000 	strb	r1, [r0]
         43f48:	e33a0000 	teq	sl, #0	; 0x0
         43f4c:	1a000004 	bne	43f64 <TAnimate::MultiEffect(RefVar const &)+0x680>
         43f50:	e3380000 	teq	r8, #0	; 0x0
         43f54:	0a000002 	beq	43f64 <TAnimate::MultiEffect(RefVar const &)+0x680>
         43f58:	e1a02008 	mov	r2, r8
         43f5c:	e3a01000 	mov	r1, #0	; 0x0
         43f60:	eb6c3660 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         43f64:	e1a0000d 	mov	r0, sp
         43f68:	e59d10f0 	ldr	r1, [sp, #240]
         43f6c:	e3310000 	teq	r1, #0	; 0x0
         43f70:	02277001 	eoreq	r7, r7, #1	; 0x1
         43f74:	02266001 	eoreq	r6, r6, #1	; 0x1
         43f78:	e28aa001 	add	sl, sl, #1	; 0x1
         43f7c:	e35a0002 	cmp	sl, #2	; 0x2
         43f80:	baffffbe 	blt	43e80 <TAnimate::MultiEffect(RefVar const &)+0x59c>
         43f84:	e3a03000 	mov	r3, #0	; 0x0
         43f88:	e92d0008 	stmdb	sp!, {r3}
         43f8c:	e28d2004 	add	r2, sp, #4	; 0x4
         43f90:	e28d100c 	add	r1, sp, #12	; 0xc
         43f94:	e1a00004 	mov	r0, r4
         43f98:	eb69364f 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         43f9c:	e28dd004 	add	sp, sp, #4	; 0x4
         43fa0:	e59d00e0 	ldr	r0, [sp, #224]
         43fa4:	e3300000 	teq	r0, #0	; 0x0
         43fa8:	11a0100d 	movne	r1, sp
         43fac:	128d003c 	addne	r0, sp, #60	; 0x3c
         43fb0:	1b6984b6 	blne	1aa5290 <TRect::$Union(TRect const &)>
         43fb4:	e59d00f4 	ldr	r0, [sp, #244]
         43fb8:	e3300000 	teq	r0, #0	; 0x0
         43fbc:	0a00002d 	beq	44078 <TAnimate::MultiEffect(RefVar const &)+0x794>
         43fc0:	e59d00ec 	ldr	r0, [sp, #236]
         43fc4:	e59d1038 	ldr	r1, [sp, #56]
         43fc8:	e1510000 	cmp	r1, r0
         43fcc:	aa000029 	bge	44078 <TAnimate::MultiEffect(RefVar const &)+0x794>
         43fd0:	e59d10fc 	ldr	r1, [sp, #252]
         43fd4:	e3310000 	teq	r1, #0	; 0x0
         43fd8:	0a000010 	beq	44020 <TAnimate::MultiEffect(RefVar const &)+0x73c>
         43fdc:	e59d0002 	ldr	r0, [sp, #2]
         43fe0:	e1390840 	teq	r9, r0, asr #16
         43fe4:	13a00000 	movne	r0, #0	; 0x0
         43fe8:	03a00001 	moveq	r0, #1	; 0x1
         43fec:	e59d10f0 	ldr	r1, [sp, #240]
         43ff0:	e1300001 	teq	r0, r1
         43ff4:	159d0002 	ldrne	r0, [sp, #2]
         43ff8:	11a00840 	movne	r0, r0, asr #16
         43ffc:	059d0006 	ldreq	r0, [sp, #6]
         44000:	059d10c4 	ldreq	r1, [sp, #196]
         44004:	00610840 	rsbeq	r0, r1, r0, asr #16
         44008:	e59d1000 	ldr	r1, [sp]
         4400c:	e1a01841 	mov	r1, r1, asr #16
         44010:	eb6c362a 	bl	1b518c0 <$MoveTo__FlT1>
         44014:	e3a00000 	mov	r0, #0	; 0x0
         44018:	e59d1144 	ldr	r1, [sp, #324]
         4401c:	eb6c3617 	bl	1b51880 <$Line__FlT1>
         44020:	e59d10f8 	ldr	r1, [sp, #248]
         44024:	e3310000 	teq	r1, #0	; 0x0
         44028:	0a000012 	beq	44078 <TAnimate::MultiEffect(RefVar const &)+0x794>
         4402c:	e59d0000 	ldr	r0, [sp]
         44030:	e59d1020 	ldr	r1, [sp, #32]
         44034:	e1310840 	teq	r1, r0, asr #16
         44038:	13a00000 	movne	r0, #0	; 0x0
         4403c:	03a00001 	moveq	r0, #1	; 0x1
         44040:	e59d10f0 	ldr	r1, [sp, #240]
         44044:	e1300001 	teq	r0, r1
         44048:	159d1000 	ldrne	r1, [sp]
         4404c:	11a01841 	movne	r1, r1, asr #16
         44050:	059d0004 	ldreq	r0, [sp, #4]
         44054:	059d10c4 	ldreq	r1, [sp, #196]
         44058:	00611840 	rsbeq	r1, r1, r0, asr #16
         4405c:	e59d0002 	ldr	r0, [sp, #2]
         44060:	e1a00840 	mov	r0, r0, asr #16
         44064:	eb6c3615 	bl	1b518c0 <$MoveTo__FlT1>
         44068:	e59d10c4 	ldr	r1, [sp, #196]
         4406c:	e0450001 	sub	r0, r5, r1
         44070:	e3a01000 	mov	r1, #0	; 0x0
         44074:	eb6c3601 	bl	1b51880 <$Line__FlT1>
         44078:	e59d010c 	ldr	r0, [sp, #268]
         4407c:	e0277000 	eor	r7, r7, r0
         44080:	e59d0108 	ldr	r0, [sp, #264]
         44084:	e0266000 	eor	r6, r6, r0
         44088:	e28d9010 	add	r9, sp, #16	; 0x10
         4408c:	e8990201 	ldmia	r9, {r0, r9}
         44090:	e28dd010 	add	sp, sp, #16	; 0x10
         44094:	e2801001 	add	r1, r0, #1	; 0x1
         44098:	e58d1000 	str	r1, [sp]
         4409c:	e59d010c 	ldr	r0, [sp, #268]
         440a0:	e1510000 	cmp	r1, r0
         440a4:	daffff40 	ble	43dac <TAnimate::MultiEffect(RefVar const &)+0x4c8>
         440a8:	e59d000c 	ldr	r0, [sp, #12]
         440ac:	e58d0010 	str	r0, [sp, #16]
         440b0:	e59d00f4 	ldr	r0, [sp, #244]
         440b4:	e59d7104 	ldr	r7, [sp, #260]
         440b8:	e0277000 	eor	r7, r7, r0
         440bc:	e58d7104 	str	r7, [sp, #260]
         440c0:	e59d00f0 	ldr	r0, [sp, #240]
         440c4:	e59d6100 	ldr	r6, [sp, #256]
         440c8:	e0266000 	eor	r6, r6, r0
         440cc:	e58d6100 	str	r6, [sp, #256]
         440d0:	e5bd0008 	ldr	r0, [sp, #8]!
         440d4:	e2800001 	add	r0, r0, #1	; 0x1
         440d8:	e58d0000 	str	r0, [sp]
         440dc:	e59d1100 	ldr	r1, [sp, #256]
         440e0:	e1500001 	cmp	r0, r1
         440e4:	dafffeea 	ble	43c94 <TAnimate::MultiEffect(RefVar const &)+0x3b0>
         440e8:	e59d00d4 	ldr	r0, [sp, #212]
         440ec:	e59d1020 	ldr	r1, [sp, #32]
         440f0:	e1510000 	cmp	r1, r0
         440f4:	aa000007 	bge	44118 <TAnimate::MultiEffect(RefVar const &)+0x834>
         440f8:	e3a01000 	mov	r1, #0	; 0x0
         440fc:	e3a00000 	mov	r0, #0	; 0x0
         44100:	eb6c2146 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         44104:	e59d000c 	ldr	r0, [sp, #12]
         44108:	eb697c28 	bl	1aa31b0 <$SleepTillTicks(unsigned long)>
         4410c:	e3a01000 	mov	r1, #0	; 0x0
         44110:	e3a00000 	mov	r0, #0	; 0x0
         44114:	eb6c213f 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         44118:	e3a00036 	mov	r0, #54	; 0x36
         4411c:	eb6a0038 	bl	1ac4204 <$BusyBoxSend(long)>
         44120:	e28dd00c 	add	sp, sp, #12	; 0xc
         44124:	e28dd004 	add	sp, sp, #4	; 0x4
         44128:	e59d0010 	ldr	r0, [sp, #16]
         4412c:	e2800001 	add	r0, r0, #1	; 0x1
         44130:	e58d0010 	str	r0, [sp, #16]
         44134:	e59d10c4 	ldr	r1, [sp, #196]
         44138:	e1500001 	cmp	r0, r1
         4413c:	dafffea3 	ble	43bd0 <TAnimate::MultiEffect(RefVar const &)+0x2ec>
         44140:	e24dd004 	sub	sp, sp, #4	; 0x4
         44144:	e2841008 	add	r1, r4, #8	; 0x8
         44148:	e59d514c 	ldr	r5, [sp, #332]
         4414c:	e28d0004 	add	r0, sp, #4	; 0x4
         44150:	eb6910ae 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
         44154:	e28d0004 	add	r0, sp, #4	; 0x4
         44158:	e58d0000 	str	r0, [sp]
         4415c:	e1a01000 	mov	r1, r0
         44160:	e5952000 	ldr	r2, [r5]
         44164:	e1a00002 	mov	r0, r2
         44168:	eb6c3e18 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
         4416c:	e28dd004 	add	sp, sp, #4	; 0x4
         44170:	e59d1148 	ldr	r1, [sp, #328]
         44174:	e59f0018 	ldr	r0, [pc, #18]	; 44194 <TAnimate::MultiEffect(RefVar const &)+0x8b0>
         44178:	e5900000 	ldr	r0, [r0]
         4417c:	e5911000 	ldr	r1, [r1]
         44180:	eb698455 	bl	1aa52dc <TRootView::$Validate(TBaseRegion const)>
         44184:	e28dd01c 	add	sp, sp, #28	; 0x1c
         44188:	e28d0004 	add	r0, sp, #4	; 0x4
         4418c:	eb6e73c9 	bl	1be10b8 <$ExitHandler>
         44190:	ea000002 	b	441a0 <TAnimate::MultiEffect(RefVar const &)+0x8bc>
         44194:	0c101934 	ldceq	9, cr1, [r0], -#208
         44198:	e3a00001 	mov	r0, #1	; 0x1
         4419c:	e58d0000 	str	r0, [sp]
         441a0:	e24dd008 	sub	sp, sp, #8	; 0x8
         441a4:	e3a00001 	mov	r0, #1	; 0x1
         441a8:	e2400902 	sub	r0, r0, #32768	; 0x8000
         441ac:	e3a02902 	mov	r2, #32768	; 0x8000
         441b0:	e2422002 	sub	r2, r2, #2	; 0x2
         441b4:	e5cd0001 	strb	r0, [sp, #1]
         441b8:	e3e0107f 	mvn	r1, #127	; 0x7f
         441bc:	e5cd1000 	strb	r1, [sp]
         441c0:	e5cd0003 	strb	r0, [sp, #3]
         441c4:	e5cd1002 	strb	r1, [sp, #2]
         441c8:	e5cd2005 	strb	r2, [sp, #5]
         441cc:	e3a0007f 	mov	r0, #127	; 0x7f
         441d0:	e5cd0004 	strb	r0, [sp, #4]
         441d4:	e5cd2007 	strb	r2, [sp, #7]
         441d8:	e5cd0006 	strb	r0, [sp, #6]
         441dc:	e1a0000d 	mov	r0, sp
         441e0:	eb6c252c 	bl	1b4d698 <$ClipRect(Rect *)>
         441e4:	e28dd008 	add	sp, sp, #8	; 0x8
         441e8:	e28d0084 	add	r0, sp, #132	; 0x84
         441ec:	eb6c3e01 	bl	1b539f8 <$SetPenState(PenState *)>
         441f0:	e59d0000 	ldr	r0, [sp]
         441f4:	e3300000 	teq	r0, #0	; 0x0
         441f8:	128d0004 	addne	r0, sp, #4	; 0x4
         441fc:	1b6e77d4 	blne	1be2154 <$NextHandler>
         44200:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TAnimate::CrumpleSprite(TRect *, TRect *)
 * Address: 00044488
 */
TAnimate::CrumpleSprite(TRect *, TRect *) {
    /*
         44488:	e1a0c00d 	mov	ip, sp
         4448c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         44490:	e24cb004 	sub	fp, ip, #4	; 0x4
         44494:	e1a04000 	mov	r4, r0
         44498:	e1a05002 	mov	r5, r2
         4449c:	e24dd050 	sub	sp, sp, #80	; 0x50
         444a0:	e2807064 	add	r7, r0, #100	; 0x64
         444a4:	e28d104c 	add	r1, sp, #76	; 0x4c
         444a8:	e59f3220 	ldr	r3, [pc, #220]	; 446d0 <TAnimate::CrumpleSprite(TRect *, TRect *)+0x248>
         444ac:	e28d000c 	add	r0, sp, #12	; 0xc
         444b0:	e3a02008 	mov	r2, #8	; 0x8
         444b4:	eb670372 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         444b8:	e1a00005 	mov	r0, r5
         444bc:	e28d100c 	add	r1, sp, #12	; 0xc
         444c0:	e8975000 	ldmia	r7, {ip, lr}
         444c4:	e8815000 	stmia	r1, {ip, lr}
         444c8:	e8915000 	ldmia	r1, {ip, lr}
         444cc:	e8805000 	stmia	r0, {ip, lr}
         444d0:	e51b1030 	ldr	r1, [fp, -#48]
         444d4:	e8905000 	ldmia	r0, {ip, lr}
         444d8:	e8815000 	stmia	r1, {ip, lr}
         444dc:	e5970006 	ldr	r0, [r7, #6]
         444e0:	e1a00820 	mov	r0, r0, lsr #16
         444e4:	e5971002 	ldr	r1, [r7, #2]
         444e8:	e1a01821 	mov	r1, r1, lsr #16
         444ec:	e0400001 	sub	r0, r0, r1
         444f0:	e1a0a800 	mov	sl, r0, lsl #16
         444f4:	e1b0a84a 	movs	sl, sl, asr #16
         444f8:	e5970004 	ldr	r0, [r7, #4]
         444fc:	e1a00820 	mov	r0, r0, lsr #16
         44500:	e5971000 	ldr	r1, [r7]
         44504:	e1a01821 	mov	r1, r1, lsr #16
         44508:	e0400001 	sub	r0, r0, r1
         4450c:	e1a06800 	mov	r6, r0, lsl #16
         44510:	e1a06846 	mov	r6, r6, asr #16
         44514:	e1a0900a 	mov	r9, sl
         44518:	42899007 	addmi	r9, r9, #7	; 0x7
         4451c:	e1a091c9 	mov	r9, r9, asr #3
         44520:	e59d000c 	ldr	r0, [sp, #12]
         44524:	e0800009 	add	r0, r0, r9
         44528:	e5cd0013 	strb	r0, [sp, #19]
         4452c:	e1a00440 	mov	r0, r0, asr #8
         44530:	e5cd0012 	strb	r0, [sp, #18]
         44534:	e24dd004 	sub	sp, sp, #4	; 0x4
         44538:	e3a08001 	mov	r8, #1	; 0x1
         4453c:	e28d0010 	add	r0, sp, #16	; 0x10
         44540:	e0800188 	add	r0, r0, r8, lsl #3
         44544:	e2401008 	sub	r1, r0, #8	; 0x8
         44548:	e8915000 	ldmia	r1, {ip, lr}
         4454c:	e8805000 	stmia	r0, {ip, lr}
         44550:	e3a02000 	mov	r2, #0	; 0x0
         44554:	e1a01009 	mov	r1, r9
         44558:	eb6c34e2 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         4455c:	e2888001 	add	r8, r8, #1	; 0x1
         44560:	e3580008 	cmp	r8, #8	; 0x8
         44564:	bafffff4 	blt	4453c <TAnimate::CrumpleSprite(TRect *, TRect *)+0xb4>
         44568:	e5970006 	ldr	r0, [r7, #6]
         4456c:	e1a00820 	mov	r0, r0, lsr #16
         44570:	e5cd004f 	strb	r0, [sp, #79]
         44574:	e1a00440 	mov	r0, r0, asr #8
         44578:	e5cd004e 	strb	r0, [sp, #78]
         4457c:	e24a0010 	sub	r0, sl, #16	; 0x10
         44580:	e1a01780 	mov	r1, r0, lsl #15
         44584:	e3a00006 	mov	r0, #6	; 0x6
         44588:	eb6db8ec 	bl	1bb2940 <$__rt_sdiv>
         4458c:	e1a09000 	mov	r9, r0
         44590:	e2460010 	sub	r0, r6, #16	; 0x10
         44594:	e1a01780 	mov	r1, r0, lsl #15
         44598:	e3a00006 	mov	r0, #6	; 0x6
         4459c:	eb6db8e7 	bl	1bb2940 <$__rt_sdiv>
         445a0:	e3a07000 	mov	r7, #0	; 0x0
         445a4:	e3a06000 	mov	r6, #0	; 0x0
         445a8:	e58d0004 	str	r0, [sp, #4]
         445ac:	e24dd014 	sub	sp, sp, #20	; 0x14
         445b0:	e1a0000d 	mov	r0, sp
         445b4:	eb690b89 	bl	1a873e0 <TRegionVar::$__ct(void)>
         445b8:	e3a01002 	mov	r1, #2	; 0x2
         445bc:	e1a02001 	mov	r2, r1
         445c0:	e51b0030 	ldr	r0, [fp, -#48]
         445c4:	eb6c309d 	bl	1b50840 <$InsetRect__FP4RectlT2>
         445c8:	e24dd010 	sub	sp, sp, #16	; 0x10
         445cc:	e1a0000d 	mov	r0, sp
         445d0:	eb6c2c7e 	bl	1b4f7d0 <$GetPenState(PenState *)>
         445d4:	eb6c38d2 	bl	1b52924 <$PenNormal(void)>
         445d8:	e3a01002 	mov	r1, #2	; 0x2
         445dc:	e3a00002 	mov	r0, #2	; 0x2
         445e0:	eb6c38d0 	bl	1b52928 <$PenSize__FlT1>
         445e4:	e28400a0 	add	r0, r4, #160	; 0xa0
         445e8:	e59f10e4 	ldr	r1, [pc, #e4]	; 446d4 <TAnimate::CrumpleSprite(TRect *, TRect *)+0x24c>
         445ec:	eb696625 	bl	1a9de88 <$PlaySound__FRC6RefVarT1>
         445f0:	e3a02000 	mov	r2, #0	; 0x0
         445f4:	e2840034 	add	r0, r4, #52	; 0x34
         445f8:	e58d0074 	str	r0, [sp, #116]	; fField116
         445fc:	e58d2024 	str	r2, [sp, #36]
         44600:	e24dd004 	sub	sp, sp, #4	; 0x4
         44604:	eb6eb8c5 	bl	1bf2920 <$Ticks(void)>
         44608:	e2800008 	add	r0, r0, #8	; 0x8
         4460c:	e58d0000 	str	r0, [sp]
         44610:	e51b1030 	ldr	r1, [fp, -#48]
         44614:	e3a00005 	mov	r0, #5	; 0x5
         44618:	e59d2028 	ldr	r2, [sp, #40]
         4461c:	e0802082 	add	r2, r0, r2, lsl #1
         44620:	e59d0014 	ldr	r0, [sp, #20]
         44624:	eb692c5e 	bl	1a8f7a4 <$CrumpleRect(TBaseRegion, Rect *, long)>
         44628:	e0870009 	add	r0, r7, r9
         4462c:	e58d0034 	str	r0, [sp, #52]
         44630:	e59d002c 	ldr	r0, [sp, #44]
         44634:	e0860000 	add	r0, r6, r0
         44638:	e58d0030 	str	r0, [sp, #48]
         4463c:	e59d2028 	ldr	r2, [sp, #40]
         44640:	e3520000 	cmp	r2, #0	; 0x0
         44644:	da000093 	ble	44898 <TAnimate::CrumpleSprite(TRect *, TRect *)+0x410>
         44648:	e24dd00c 	sub	sp, sp, #12	; 0xc
         4464c:	e3a08000 	mov	r8, #0	; 0x0
         44650:	e3a07003 	mov	r7, #3	; 0x3
         44654:	e28d0044 	add	r0, sp, #68	; 0x44
         44658:	e0806187 	add	r6, r0, r7, lsl #3
         4465c:	e1a0a006 	mov	sl, r6
         44660:	e28d0004 	add	r0, sp, #4	; 0x4
         44664:	e8965000 	ldmia	r6, {ip, lr}
         44668:	e8805000 	stmia	r0, {ip, lr}
         4466c:	e2870001 	add	r0, r7, #1	; 0x1
         44670:	e1a01009 	mov	r1, r9
         44674:	e58d8000 	str	r8, [sp]
         44678:	eb6db8b0 	bl	1bb2940 <$__rt_sdiv>
         4467c:	e2800902 	add	r0, r0, #32768	; 0x8000
         44680:	e1a00840 	mov	r0, r0, asr #16
         44684:	e1a08800 	mov	r8, r0, lsl #16
         44688:	e1a08848 	mov	r8, r8, asr #16
         4468c:	e3570003 	cmp	r7, #3	; 0x3
         44690:	aa000010 	bge	446d8 <TAnimate::CrumpleSprite(TRect *, TRect *)+0x250>
         44694:	e59a000a 	ldr	r0, [sl, #10]
         44698:	e1a00820 	mov	r0, r0, lsr #16
         4469c:	e59d1000 	ldr	r1, [sp]
         446a0:	e0481001 	sub	r1, r8, r1
         446a4:	e0800001 	add	r0, r0, r1
         446a8:	e5ca000b 	strb	r0, [sl, #11]
         446ac:	e1a00440 	mov	r0, r0, asr #8
         446b0:	e5ca000a 	strb	r0, [sl, #10]
         446b4:	e59a0006 	ldr	r0, [sl, #6]
         446b8:	e1a00820 	mov	r0, r0, lsr #16
         446bc:	e0800008 	add	r0, r0, r8
         446c0:	e5c60007 	strb	r0, [r6, #7]
         446c4:	e1a00440 	mov	r0, r0, asr #8
         446c8:	e5c60006 	strb	r0, [r6, #6]
         446cc:	ea000006 	b	446ec <TAnimate::CrumpleSprite(TRect *, TRect *)+0x264>
         446d0:	0038ae54 	eoreqs	sl, r8, r4, asr lr
         446d4:	006802f0 	streqd	r0, [r8], -#32
         446d8:	e59d0008 	ldr	r0, [sp, #8]
         446dc:	e0400008 	sub	r0, r0, r8
         446e0:	e5cd000b 	strb	r0, [sp, #11]
         446e4:	e1a00440 	mov	r0, r0, asr #8
         446e8:	e5cd000a 	strb	r0, [sp, #10]
         446ec:	e5960002 	ldr	r0, [r6, #2]
         446f0:	e1a00820 	mov	r0, r0, lsr #16
         446f4:	e0800008 	add	r0, r0, r8
         446f8:	e5c60003 	strb	r0, [r6, #3]
         446fc:	e1a00440 	mov	r0, r0, asr #8
         44700:	e5c60002 	strb	r0, [r6, #2]
         44704:	e59d100a 	ldr	r1, [sp, #10]
         44708:	e1a00807 	mov	r0, r7, lsl #16
         4470c:	e1a00840 	mov	r0, r0, asr #16
         44710:	e0411000 	sub	r1, r1, r0
         44714:	e5cd1009 	strb	r1, [sp, #9]
         44718:	e1a01441 	mov	r1, r1, asr #8
         4471c:	e5cd1008 	strb	r1, [sp, #8]
         44720:	e5961000 	ldr	r1, [r6]
         44724:	e1a01821 	mov	r1, r1, lsr #16
         44728:	e0810000 	add	r0, r1, r0
         4472c:	e5c60001 	strb	r0, [r6, #1]
         44730:	e1a00440 	mov	r0, r0, asr #8
         44734:	e5c60000 	strb	r0, [r6]
         44738:	e3a03000 	mov	r3, #0	; 0x0
         4473c:	e3a02000 	mov	r2, #0	; 0x0
         44740:	e92d000c 	stmdb	sp!, {r2, r3}
         44744:	e1a03006 	mov	r3, r6
         44748:	e28d200c 	add	r2, sp, #12	; 0xc
         4474c:	e1a01004 	mov	r1, r4
         44750:	e1a00004 	mov	r0, r4
         44754:	eb6eac11 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
         44758:	e28dd008 	add	sp, sp, #8	; 0x8
         4475c:	e2577001 	subs	r7, r7, #1	; 0x1
         44760:	5affffbb 	bpl	44654 <TAnimate::CrumpleSprite(TRect *, TRect *)+0x1cc>
         44764:	e3a08000 	mov	r8, #0	; 0x0
         44768:	e3a07004 	mov	r7, #4	; 0x4
         4476c:	e28d0044 	add	r0, sp, #68	; 0x44
         44770:	e0806187 	add	r6, r0, r7, lsl #3
         44774:	e1a0a006 	mov	sl, r6
         44778:	e28d0004 	add	r0, sp, #4	; 0x4
         4477c:	e8965000 	ldmia	r6, {ip, lr}
         44780:	e8805000 	stmia	r0, {ip, lr}
         44784:	e2670008 	rsb	r0, r7, #8	; 0x8
         44788:	e1a01009 	mov	r1, r9
         4478c:	e58d8000 	str	r8, [sp]
         44790:	eb6db86a 	bl	1bb2940 <$__rt_sdiv>
         44794:	e2800902 	add	r0, r0, #32768	; 0x8000
         44798:	e1a00840 	mov	r0, r0, asr #16
         4479c:	e1a08800 	mov	r8, r0, lsl #16
         447a0:	e1a08848 	mov	r8, r8, asr #16
         447a4:	e3570004 	cmp	r7, #4	; 0x4
         447a8:	da00000e 	ble	447e8 <TAnimate::CrumpleSprite(TRect *, TRect *)+0x360>
         447ac:	e51a0002 	ldr	r0, [sl, -#2]
         447b0:	e1a00820 	mov	r0, r0, lsr #16
         447b4:	e59d1000 	ldr	r1, [sp]
         447b8:	e0481001 	sub	r1, r8, r1
         447bc:	e0400001 	sub	r0, r0, r1
         447c0:	e54a0001 	strb	r0, [sl, -#1]
         447c4:	e1a00440 	mov	r0, r0, asr #8
         447c8:	e54a0002 	strb	r0, [sl, -#2]
         447cc:	e59a0002 	ldr	r0, [sl, #2]
         447d0:	e1a00820 	mov	r0, r0, lsr #16
         447d4:	e0400008 	sub	r0, r0, r8
         447d8:	e5c60003 	strb	r0, [r6, #3]
         447dc:	e1a00440 	mov	r0, r0, asr #8
         447e0:	e5c60002 	strb	r0, [r6, #2]
         447e4:	ea000004 	b	447fc <TAnimate::CrumpleSprite(TRect *, TRect *)+0x374>
         447e8:	e59d0004 	ldr	r0, [sp, #4]
         447ec:	e0800008 	add	r0, r0, r8
         447f0:	e5cd0007 	strb	r0, [sp, #7]
         447f4:	e1a00440 	mov	r0, r0, asr #8
         447f8:	e5cd0006 	strb	r0, [sp, #6]
         447fc:	e5960006 	ldr	r0, [r6, #6]
         44800:	e1a00820 	mov	r0, r0, lsr #16
         44804:	e0400008 	sub	r0, r0, r8
         44808:	e5c60007 	strb	r0, [r6, #7]
         4480c:	e1a00440 	mov	r0, r0, asr #8
         44810:	e5c60006 	strb	r0, [r6, #6]
         44814:	e59d1006 	ldr	r1, [sp, #6]
         44818:	e1a00807 	mov	r0, r7, lsl #16
         4481c:	e1a00840 	mov	r0, r0, asr #16
         44820:	e0811000 	add	r1, r1, r0
         44824:	e5cd1005 	strb	r1, [sp, #5]
         44828:	e1a01441 	mov	r1, r1, asr #8
         4482c:	e5cd1004 	strb	r1, [sp, #4]
         44830:	e5961004 	ldr	r1, [r6, #4]
         44834:	e1a01821 	mov	r1, r1, lsr #16
         44838:	e0410000 	sub	r0, r1, r0
         4483c:	e5c60005 	strb	r0, [r6, #5]
         44840:	e1a00440 	mov	r0, r0, asr #8
         44844:	e5c60004 	strb	r0, [r6, #4]
         44848:	e3a03000 	mov	r3, #0	; 0x0
         4484c:	e3a02000 	mov	r2, #0	; 0x0
         44850:	e92d000c 	stmdb	sp!, {r2, r3}
         44854:	e1a03006 	mov	r3, r6
         44858:	e28d200c 	add	r2, sp, #12	; 0xc
         4485c:	e1a01004 	mov	r1, r4
         44860:	e1a00004 	mov	r0, r4
         44864:	eb6eabcd 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
         44868:	e28dd008 	add	sp, sp, #8	; 0x8
         4486c:	e2877001 	add	r7, r7, #1	; 0x1
         44870:	e3570008 	cmp	r7, #8	; 0x8
         44874:	baffffbc 	blt	4476c <TAnimate::CrumpleSprite(TRect *, TRect *)+0x2e4>
         44878:	e3a01000 	mov	r1, #0	; 0x0
         4487c:	e3a00000 	mov	r0, #0	; 0x0
         44880:	eb6c1f64 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         44884:	e1a01005 	mov	r1, r5
         44888:	e3a02000 	mov	r2, #0	; 0x0
         4488c:	e59d0084 	ldr	r0, [sp, #132]	; fField132
         44890:	eb6c3c42 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
         44894:	e28dd00c 	add	sp, sp, #12	; 0xc
         44898:	e59d0014 	ldr	r0, [sp, #20]
         4489c:	eb6c27ab 	bl	1b4e750 <$EraseRgn(Region **)>
         448a0:	e59d0014 	ldr	r0, [sp, #20]
         448a4:	eb6c3c4c 	bl	1b539dc <$SetClip(Region **)>
         448a8:	e3a03000 	mov	r3, #0	; 0x0
         448ac:	e92d0008 	stmdb	sp!, {r3}
         448b0:	e1a02005 	mov	r2, r5
         448b4:	e1a01005 	mov	r1, r5
         448b8:	e1a00004 	mov	r0, r4
         448bc:	eb693406 	bl	1a918dc <TBits::$Draw(TRect const &, TRect const &, long, Region **)>
         448c0:	e24dd004 	sub	sp, sp, #4	; 0x4
         448c4:	e3a01001 	mov	r1, #1	; 0x1
         448c8:	e2411902 	sub	r1, r1, #32768	; 0x8000
         448cc:	e3a02902 	mov	r2, #32768	; 0x8000
         448d0:	e2422002 	sub	r2, r2, #2	; 0x2
         448d4:	e5cd1001 	strb	r1, [sp, #1]
         448d8:	e3e0007f 	mvn	r0, #127	; 0x7f
         448dc:	e5cd0000 	strb	r0, [sp]
         448e0:	e5cd1003 	strb	r1, [sp, #3]
         448e4:	e5cd0002 	strb	r0, [sp, #2]
         448e8:	e5cd2005 	strb	r2, [sp, #5]
         448ec:	e3a0007f 	mov	r0, #127	; 0x7f
         448f0:	e5cd0004 	strb	r0, [sp, #4]
         448f4:	e5cd2007 	strb	r2, [sp, #7]
         448f8:	e5cd0006 	strb	r0, [sp, #6]
         448fc:	e1a0000d 	mov	r0, sp
         44900:	eb6c2364 	bl	1b4d698 <$ClipRect(Rect *)>
         44904:	e28dd008 	add	sp, sp, #8	; 0x8
         44908:	e59d0014 	ldr	r0, [sp, #20]
         4490c:	eb6c2ba3 	bl	1b4f7a0 <$FrameRgn(Region **)>
         44910:	e3a01000 	mov	r1, #0	; 0x0
         44914:	e3a00000 	mov	r0, #0	; 0x0
         44918:	eb6c1f40 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         4491c:	e59d0000 	ldr	r0, [sp]
         44920:	eb697a22 	bl	1aa31b0 <$SleepTillTicks(unsigned long)>
         44924:	e59d0034 	ldr	r0, [sp, #52]
         44928:	e1a01840 	mov	r1, r0, asr #16
         4492c:	e59d0030 	ldr	r0, [sp, #48]
         44930:	e1a02840 	mov	r2, r0, asr #16
         44934:	e51b0030 	ldr	r0, [fp, -#48]
         44938:	eb6c2fc0 	bl	1b50840 <$InsetRect__FP4RectlT2>
         4493c:	e59d0034 	ldr	r0, [sp, #52]
         44940:	e1a07800 	mov	r7, r0, lsl #16
         44944:	e1a07827 	mov	r7, r7, lsr #16
         44948:	e59d0030 	ldr	r0, [sp, #48]
         4494c:	e1a06800 	mov	r6, r0, lsl #16
         44950:	e1a06826 	mov	r6, r6, lsr #16
         44954:	e59d0014 	ldr	r0, [sp, #20]
         44958:	e5900000 	ldr	r0, [r0]
         4495c:	e2800004 	add	r0, r0, #4	; 0x4
         44960:	e8905000 	ldmia	r0, {ip, lr}
         44964:	e8855000 	stmia	r5, {ip, lr}
         44968:	e28d0004 	add	r0, sp, #4	; 0x4
         4496c:	eb6c3c21 	bl	1b539f8 <$SetPenState(PenState *)>
         44970:	e28dd004 	add	sp, sp, #4	; 0x4
         44974:	e59d2024 	ldr	r2, [sp, #36]
         44978:	e2822001 	add	r2, r2, #1	; 0x1
         4497c:	e58d2024 	str	r2, [sp, #36]
         44980:	e3520006 	cmp	r2, #6	; 0x6
         44984:	baffff1d 	blt	44600 <TAnimate::CrumpleSprite(TRect *, TRect *)+0x178>
         44988:	e28dd010 	add	sp, sp, #16	; 0x10
         4498c:	e1a0000d 	mov	r0, sp
         44990:	e3a01000 	mov	r1, #0	; 0x0
         44994:	eb690eaa 	bl	1a88444 <TRegionVar::$__dt(void)>
         44998:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TAnimate::CrumpleEffect(void)
 * Address: 000449c8
 */
TAnimate::CrumpleEffect(void) {
    /*
         449c8:	e1a0c00d 	mov	ip, sp
         449cc:	e92ddff1 	stmdb	sp!, {r0, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         449d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         449d4:	e24dd010 	sub	sp, sp, #16	; 0x10
         449d8:	e1a0200d 	mov	r2, sp
         449dc:	e28d1008 	add	r1, sp, #8	; 0x8
         449e0:	e51b002c 	ldr	r0, [fp, -#44]
         449e4:	eb692b6f 	bl	1a8f7a8 <TAnimate::$CrumpleSprite(TRect *, TRect *)>
         449e8:	e24dd004 	sub	sp, sp, #4	; 0x4
         449ec:	e59f43b4 	ldr	r4, [pc, #3b4]	; 44da8 <TAnimate::CrumpleEffect(void)+0x3e0>
         449f0:	e5940000 	ldr	r0, [r4]
         449f4:	e5901000 	ldr	r1, [r0]
         449f8:	e59f03ac 	ldr	r0, [pc, #3ac]	; 44dac <TAnimate::CrumpleEffect(void)+0x3e4>
         449fc:	e5900000 	ldr	r0, [r0]
         44a00:	e5900000 	ldr	r0, [r0]
         44a04:	eb6dfe15 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         44a08:	eb6df5cf 	bl	1bc214c <$AllocateRefHandle(long)>
         44a0c:	e40d0008 	str	r0, [sp], -#8
         44a10:	e1a0100d 	mov	r1, sp
         44a14:	e28d0008 	add	r0, sp, #8	; 0x8
         44a18:	eb694016 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         44a1c:	e3300000 	teq	r0, #0	; 0x0
         44a20:	028f0fe2 	addeq	r0, pc, #904	; 0x388
         44a24:	0b6e79dd 	bleq	1be31a0 <$ThrowMsg>
         44a28:	e24dd004 	sub	sp, sp, #4	; 0x4
         44a2c:	e59f0390 	ldr	r0, [pc, #390]	; 44dc4 <TAnimate::CrumpleEffect(void)+0x3fc>
         44a30:	e5900000 	ldr	r0, [r0]
         44a34:	eb6df5c4 	bl	1bc214c <$AllocateRefHandle(long)>
         44a38:	e1a05000 	mov	r5, r0
         44a3c:	e59f0384 	ldr	r0, [pc, #384]	; 44dc8 <TAnimate::CrumpleEffect(void)+0x400>
         44a40:	e5900000 	ldr	r0, [r0]
         44a44:	e5901000 	ldr	r1, [r0]
         44a48:	e5950000 	ldr	r0, [r5]
         44a4c:	eb6dfe03 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         44a50:	eb6df5bd 	bl	1bc214c <$AllocateRefHandle(long)>
         44a54:	e58d0000 	str	r0, [sp]
         44a58:	e1a00005 	mov	r0, r5
         44a5c:	eb6df9d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         44a60:	e3a05000 	mov	r5, #0	; 0x0
         44a64:	e59f1360 	ldr	r1, [pc, #360]	; 44dcc <TAnimate::CrumpleEffect(void)+0x404>
         44a68:	e1a0000d 	mov	r0, sp
         44a6c:	e3a02000 	mov	r2, #0	; 0x0
         44a70:	eb6dfdfc 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         44a74:	e3100003 	tst	r0, #3	; 0x3
         44a78:	01a00140 	moveq	r0, r0, asr #2
         44a7c:	0a000000 	beq	44a84 <TAnimate::CrumpleEffect(void)+0xbc>
         44a80:	eb6df5a5 	bl	1bc211c <$_RINTError(long)>
         44a84:	e1a06000 	mov	r6, r0
         44a88:	e59f1340 	ldr	r1, [pc, #340]	; 44dd0 <TAnimate::CrumpleEffect(void)+0x408>
         44a8c:	e1a0000d 	mov	r0, sp
         44a90:	e3a02000 	mov	r2, #0	; 0x0
         44a94:	eb6dfdf3 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         44a98:	e3100003 	tst	r0, #3	; 0x3
         44a9c:	01a00140 	moveq	r0, r0, asr #2
         44aa0:	0a000000 	beq	44aa8 <TAnimate::CrumpleEffect(void)+0xe0>
         44aa4:	eb6df59c 	bl	1bc211c <$_RINTError(long)>
         44aa8:	e0866000 	add	r6, r6, r0
         44aac:	e59f1320 	ldr	r1, [pc, #320]	; 44dd4 <TAnimate::CrumpleEffect(void)+0x40c>
         44ab0:	e1a0000d 	mov	r0, sp
         44ab4:	e3a02000 	mov	r2, #0	; 0x0
         44ab8:	eb6dfdea 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         44abc:	e3100003 	tst	r0, #3	; 0x3
         44ac0:	01a00140 	moveq	r0, r0, asr #2
         44ac4:	0a000000 	beq	44acc <TAnimate::CrumpleEffect(void)+0x104>
         44ac8:	eb6df593 	bl	1bc211c <$_RINTError(long)>
         44acc:	e1a07000 	mov	r7, r0
         44ad0:	e59f1300 	ldr	r1, [pc, #300]	; 44dd8 <TAnimate::CrumpleEffect(void)+0x410>
         44ad4:	e1a0000d 	mov	r0, sp
         44ad8:	e3a02000 	mov	r2, #0	; 0x0
         44adc:	eb6dfde1 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         44ae0:	e3100003 	tst	r0, #3	; 0x3
         44ae4:	01a00140 	moveq	r0, r0, asr #2
         44ae8:	0a000000 	beq	44af0 <TAnimate::CrumpleEffect(void)+0x128>
         44aec:	eb6df58a 	bl	1bc211c <$_RINTError(long)>
         44af0:	e0870000 	add	r0, r7, r0
         44af4:	e59d100a 	ldr	r1, [sp, #10]
         44af8:	e0461841 	sub	r1, r6, r1, asr #16
         44afc:	e59d2008 	ldr	r2, [sp, #8]
         44b00:	e0402842 	sub	r2, r0, r2, asr #16
         44b04:	e28d0004 	add	r0, sp, #4	; 0x4
         44b08:	eb6c3376 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         44b0c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         44b10:	e59f92c4 	ldr	r9, [pc, #2c4]	; 44ddc <TAnimate::CrumpleEffect(void)+0x414>
         44b14:	e5990000 	ldr	r0, [r9]
         44b18:	e5900000 	ldr	r0, [r0]
         44b1c:	e1a01005 	mov	r1, r5
         44b20:	eb6dfdcb 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         44b24:	eb6df588 	bl	1bc214c <$AllocateRefHandle(long)>
         44b28:	e1a05000 	mov	r5, r0
         44b2c:	e5940000 	ldr	r0, [r4]
         44b30:	e5901000 	ldr	r1, [r0]
         44b34:	e5950000 	ldr	r0, [r5]
         44b38:	eb6dfdc8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         44b3c:	eb6df582 	bl	1bc214c <$AllocateRefHandle(long)>
         44b40:	e58d0000 	str	r0, [sp]
         44b44:	e1a00005 	mov	r0, r5
         44b48:	eb6df99b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         44b4c:	e28d1004 	add	r1, sp, #4	; 0x4
         44b50:	e1a0000d 	mov	r0, sp
         44b54:	eb693fc7 	bl	1a94a78 <$FromObject(RefVar const &, TRect &)>
         44b58:	e3300000 	teq	r0, #0	; 0x0
         44b5c:	028f0f9f 	addeq	r0, pc, #636	; 0x27c
         44b60:	0b6e798e 	bleq	1be31a0 <$ThrowMsg>
         44b64:	e59d0008 	ldr	r0, [sp, #8]
         44b68:	e59d1004 	ldr	r1, [sp, #4]
         44b6c:	e0400001 	sub	r0, r0, r1
         44b70:	e59d1024 	ldr	r1, [sp, #36]
         44b74:	e0800001 	add	r0, r0, r1
         44b78:	e5cd002b 	strb	r0, [sp, #43]
         44b7c:	e1a00440 	mov	r0, r0, asr #8
         44b80:	e5cd002a 	strb	r0, [sp, #42]
         44b84:	e59d000a 	ldr	r0, [sp, #10]
         44b88:	e59d1006 	ldr	r1, [sp, #6]
         44b8c:	e0400001 	sub	r0, r0, r1
         44b90:	e59d1026 	ldr	r1, [sp, #38]
         44b94:	e0800001 	add	r0, r0, r1
         44b98:	e5cd0029 	strb	r0, [sp, #41]
         44b9c:	e1a00440 	mov	r0, r0, asr #8
         44ba0:	e5cd0028 	strb	r0, [sp, #40]
         44ba4:	e24dd0f0 	sub	sp, sp, #240	; 0xf0
         44ba8:	e3a01005 	mov	r1, #5	; 0x5
         44bac:	e59d0114 	ldr	r0, [sp, #276]
         44bb0:	e5cd0003 	strb	r0, [sp, #3]
         44bb4:	e1a00440 	mov	r0, r0, asr #8
         44bb8:	e5cd0002 	strb	r0, [sp, #2]
         44bbc:	e59d0116 	ldr	r0, [sp, #278]
         44bc0:	e5cd0001 	strb	r0, [sp, #1]
         44bc4:	e1a00440 	mov	r0, r0, asr #8
         44bc8:	e5cd0000 	strb	r0, [sp]
         44bcc:	e3a00001 	mov	r0, #1	; 0x1
         44bd0:	e3a03005 	mov	r3, #5	; 0x5
         44bd4:	e0432000 	sub	r2, r3, r0
         44bd8:	e00c0292 	mul	ip, r2, r2
         44bdc:	e08d2100 	add	r2, sp, r0, lsl #2
         44be0:	e512e004 	ldr	lr, [r2, -#4]
         44be4:	e1a0e82e 	mov	lr, lr, lsr #16
         44be8:	e04ec00c 	sub	ip, lr, ip
         44bec:	e5c2c001 	strb	ip, [r2, #1]
         44bf0:	e1a0c44c 	mov	ip, ip, asr #8
         44bf4:	e5c2c000 	strb	ip, [r2]
         44bf8:	e2800001 	add	r0, r0, #1	; 0x1
         44bfc:	e3500005 	cmp	r0, #5	; 0x5
         44c00:	bafffff3 	blt	44bd4 <TAnimate::CrumpleEffect(void)+0x20c>
         44c04:	e3a00005 	mov	r0, #5	; 0x5
         44c08:	e2402005 	sub	r2, r0, #5	; 0x5
         44c0c:	e0130292 	muls	r3, r2, r2
         44c10:	4283300f 	addmi	r3, r3, #15	; 0xf
         44c14:	e08d2100 	add	r2, sp, r0, lsl #2
         44c18:	e512c004 	ldr	ip, [r2, -#4]
         44c1c:	e1a0c82c 	mov	ip, ip, lsr #16
         44c20:	e08c3243 	add	r3, ip, r3, asr #4
         44c24:	e5c23001 	strb	r3, [r2, #1]
         44c28:	e1a03443 	mov	r3, r3, asr #8
         44c2c:	e5c23000 	strb	r3, [r2]
         44c30:	e79d2100 	ldr	r2, [sp, r0, lsl #2]
         44c34:	e1a02842 	mov	r2, r2, asr #16
         44c38:	e59d3100 	ldr	r3, [sp, #256]
         44c3c:	e1520843 	cmp	r2, r3, asr #16
         44c40:	aa000003 	bge	44c54 <TAnimate::CrumpleEffect(void)+0x28c>
         44c44:	e2800001 	add	r0, r0, #1	; 0x1
         44c48:	e1a01000 	mov	r1, r0
         44c4c:	e350003c 	cmp	r0, #60	; 0x3c
         44c50:	baffffec 	blt	44c08 <TAnimate::CrumpleEffect(void)+0x240>
         44c54:	e59d0102 	ldr	r0, [sp, #258]
         44c58:	e2814001 	add	r4, r1, #1	; 0x1
         44c5c:	e08d1101 	add	r1, sp, r1, lsl #2
         44c60:	e5c10001 	strb	r0, [r1, #1]
         44c64:	e1a00440 	mov	r0, r0, asr #8
         44c68:	e5c10000 	strb	r0, [r1]
         44c6c:	e51b002c 	ldr	r0, [fp, -#44]
         44c70:	e5900066 	ldr	r0, [r0, #102]	; fField102
         44c74:	e1a00840 	mov	r0, r0, asr #16
         44c78:	e51b102c 	ldr	r1, [fp, -#44]
         44c7c:	e591106a 	ldr	r1, [r1, #106]	; fField106
         44c80:	e0800841 	add	r0, r0, r1, asr #16
         44c84:	e0800fa0 	add	r0, r0, r0, lsr #31
         44c88:	e59d2102 	ldr	r2, [sp, #258]
         44c8c:	e1a02842 	mov	r2, r2, asr #16
         44c90:	e59d1106 	ldr	r1, [sp, #262]
         44c94:	e0821841 	add	r1, r2, r1, asr #16
         44c98:	e0811fa1 	add	r1, r1, r1, lsr #31
         44c9c:	e1a010c1 	mov	r1, r1, asr #1
         44ca0:	e04160c0 	sub	r6, r1, r0, asr #1
         44ca4:	e24dd010 	sub	sp, sp, #16	; 0x10
         44ca8:	e3a05001 	mov	r5, #1	; 0x1
         44cac:	e3540001 	cmp	r4, #1	; 0x1
         44cb0:	da00000c 	ble	44ce8 <TAnimate::CrumpleEffect(void)+0x320>
         44cb4:	e0010596 	mul	r1, r6, r5
         44cb8:	e1a00004 	mov	r0, r4
         44cbc:	eb6db71f 	bl	1bb2940 <$__rt_sdiv>
         44cc0:	e59d1124 	ldr	r1, [sp, #292]
         44cc4:	e0800001 	add	r0, r0, r1
         44cc8:	e28d1010 	add	r1, sp, #16	; 0x10
         44ccc:	e0811105 	add	r1, r1, r5, lsl #2
         44cd0:	e5c10003 	strb	r0, [r1, #3]
         44cd4:	e1a00440 	mov	r0, r0, asr #8
         44cd8:	e5c10002 	strb	r0, [r1, #2]
         44cdc:	e2855001 	add	r5, r5, #1	; 0x1
         44ce0:	e1550004 	cmp	r5, r4
         44ce4:	bafffff2 	blt	44cb4 <TAnimate::CrumpleEffect(void)+0x2ec>
         44ce8:	e28d1e11 	add	r1, sp, #272	; 0x110
         44cec:	e59f00b8 	ldr	r0, [pc, #b8]	; 44dac <TAnimate::CrumpleEffect(void)+0x3e4>
         44cf0:	e1a05000 	mov	r5, r0
         44cf4:	e3e03002 	mvn	r3, #2	; 0x2
         44cf8:	e3a02000 	mov	r2, #0	; 0x0
         44cfc:	eb693708 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
         44d00:	e28d1e11 	add	r1, sp, #272	; 0x110
         44d04:	e1a00005 	mov	r0, r5
         44d08:	e3a03001 	mov	r3, #1	; 0x1
         44d0c:	e3a02000 	mov	r2, #0	; 0x0
         44d10:	eb693703 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
         44d14:	e28d0f41 	add	r0, sp, #260	; 0x104
         44d18:	e28d1e11 	add	r1, sp, #272	; 0x110
         44d1c:	e8915000 	ldmia	r1, {ip, lr}
         44d20:	e8805000 	stmia	r0, {ip, lr}
         44d24:	e59d0104 	ldr	r0, [sp, #260]
         44d28:	e2400019 	sub	r0, r0, #25	; 0x19
         44d2c:	e5cd0107 	strb	r0, [sp, #263]
         44d30:	e1a00440 	mov	r0, r0, asr #8
         44d34:	e5cd0106 	strb	r0, [sp, #262]
         44d38:	e59f00b8 	ldr	r0, [pc, #b8]	; 44df8 <TAnimate::CrumpleEffect(void)+0x430>
         44d3c:	e5900000 	ldr	r0, [r0]
         44d40:	e5cd010b 	strb	r0, [sp, #267]
         44d44:	e1a00440 	mov	r0, r0, asr #8
         44d48:	e5cd010a 	strb	r0, [sp, #266]
         44d4c:	e24dd008 	sub	sp, sp, #8	; 0x8
         44d50:	e1a0000d 	mov	r0, sp
         44d54:	eb6eaa92 	bl	1bef7a4 <$GetPort(GrafPort **)>
         44d58:	e49d0004 	ldr	r0, [sp], #4
         44d5c:	e28d1f42 	add	r1, sp, #264	; 0x108
         44d60:	e5b05028 	ldr	r5, [r0, #40]!
         44d64:	e28d0004 	add	r0, sp, #4	; 0x4
         44d68:	eb690da8 	bl	1a88410 <TRectangularRegion::$__ct(TRect const &)>
         44d6c:	e28d0004 	add	r0, sp, #4	; 0x4
         44d70:	e58d0000 	str	r0, [sp]
         44d74:	e1a01000 	mov	r1, r0
         44d78:	e1a02005 	mov	r2, r5
         44d7c:	e1a00005 	mov	r0, r5
         44d80:	eb6c2251 	bl	1b4d6cc <$DiffRgn__FPP6RegionN21>
         44d84:	e28dd004 	add	sp, sp, #4	; 0x4
         44d88:	e3a06000 	mov	r6, #0	; 0x0
         44d8c:	e3a08001 	mov	r8, #1	; 0x1
         44d90:	e3a05000 	mov	r5, #0	; 0x0
         44d94:	e51b002c 	ldr	r0, [fp, -#44]
         44d98:	e2807034 	add	r7, r0, #52	; 0x34
         44d9c:	e3540000 	cmp	r4, #0	; 0x0
         44da0:	ba00006d 	blt	44f5c <TAnimate::CrumpleEffect(void)+0x594>
         44da4:	ea000017 	b	44e08 <TAnimate::CrumpleEffect(void)+0x440>
         44da8:	00682190 	streqb	r2, [r8], -#16
         44dac:	00680e80 	rsbeq	r0, r8, r0, lsl #29
         44db0:	62616420 	rsbvs	r6, r1, #536870912	; 0x20000000
         44db4:	74726173 	ldrvcbt	r6, [r2], -#371
         44db8:	6820626f 	stmvsda	r0!, {r0, r1, r2, r3, r5, r6, r9, sp, lr}
         44dbc:	756e6473 	strvcb	r6, [lr, -#1139]!
         44dc0:	00000000 	andeq	r0, r0, r0
         44dc4:	0c10180c 	ldceq	8, cr1, [r0], -#48
         44dc8:	006829d0 	ldreqd	r2, [r8], -#144	; fField144
         44dcc:	00681e88 	rsbeq	r1, r8, r8, lsl #29
         44dd0:	00681eb0 	streqh	r1, [r8], -#224
         44dd4:	00681e90 	streqb	r1, [r8], -#224
         44dd8:	00681e98 	streqb	r1, [r8], -#232
         44ddc:	00680e90 	streqb	r0, [r8], -#224
         44de0:	62616420 	rsbvs	r6, r1, #536870912	; 0x20000000
         44de4:	70696374 	rsbvc	r6, r9, r4, ror r3
         44de8:	426f756e 	rsbmi	r7, pc, #461373440	; 0x1b800000
         44dec:	64732066 	ldrvsbt	r2, [r3], -#102	; fField102
         44df0:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
         44df4:	00000000 	andeq	r0, r0, r0
         44df8:	0c104c58 	ldceq	12, cr4, [r0], -#352
         44dfc:	e3390000 	teq	r9, #0	; 0x0
         44e00:	03a00001 	moveq	r0, #1	; 0x1
         44e04:	0a000000 	beq	44e0c <TAnimate::CrumpleEffect(void)+0x444>
         44e08:	e3a00000 	mov	r0, #0	; 0x0
         44e0c:	e21090ff 	ands	r9, r0, #255	; 0xff
         44e10:	1a00004e 	bne	44f50 <TAnimate::CrumpleEffect(void)+0x588>
         44e14:	eb6eb6c1 	bl	1bf2920 <$Ticks(void)>
         44e18:	e280a004 	add	sl, r0, #4	; 0x4
         44e1c:	e1550004 	cmp	r5, r4
         44e20:	aa000025 	bge	44ebc <TAnimate::CrumpleEffect(void)+0x4f4>
         44e24:	e24dd004 	sub	sp, sp, #4	; 0x4
         44e28:	e28d0014 	add	r0, sp, #20	; 0x14
         44e2c:	e0800105 	add	r0, r0, r5, lsl #2
         44e30:	e5902002 	ldr	r2, [r0, #2]
         44e34:	e1a02822 	mov	r2, r2, lsr #16
         44e38:	e59d1128 	ldr	r1, [sp, #296]
         44e3c:	e0421001 	sub	r1, r2, r1
         44e40:	e1a01801 	mov	r1, r1, lsl #16
         44e44:	e1a01841 	mov	r1, r1, asr #16
         44e48:	e5900000 	ldr	r0, [r0]
         44e4c:	e1a00820 	mov	r0, r0, lsr #16
         44e50:	e59d212a 	ldr	r2, [sp, #298]
         44e54:	e0400002 	sub	r0, r0, r2
         44e58:	e1a00800 	mov	r0, r0, lsl #16
         44e5c:	e1a00840 	mov	r0, r0, asr #16
         44e60:	e24dd004 	sub	sp, sp, #4	; 0x4
         44e64:	e5cd1003 	strb	r1, [sp, #3]
         44e68:	e1a01441 	mov	r1, r1, asr #8
         44e6c:	e5cd1002 	strb	r1, [sp, #2]
         44e70:	e5cd0001 	strb	r0, [sp, #1]
         44e74:	e1a00440 	mov	r0, r0, asr #8
         44e78:	e5cd0000 	strb	r0, [sp]
         44e7c:	e49d0004 	ldr	r0, [sp], #4
         44e80:	e58d0000 	str	r0, [sp]
         44e84:	e28d0f4a 	add	r0, sp, #296	; 0x128
         44e88:	e59d1002 	ldr	r1, [sp, #2]
         44e8c:	e1a01841 	mov	r1, r1, asr #16
         44e90:	e59d2000 	ldr	r2, [sp]
         44e94:	e1a02842 	mov	r2, r2, asr #16
         44e98:	eb6c3292 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
         44e9c:	e28dd004 	add	sp, sp, #4	; 0x4
         44ea0:	e51f00cc 	ldr	r0, [pc, #ffffff34]	; 44ddc <TAnimate::CrumpleEffect(void)+0x414>
         44ea4:	e5900000 	ldr	r0, [r0]
         44ea8:	e5900000 	ldr	r0, [r0]
         44eac:	e1a01006 	mov	r1, r6
         44eb0:	eb6dfce7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         44eb4:	e59d1100 	ldr	r1, [sp, #256]
         44eb8:	e5810000 	str	r0, [r1]
         44ebc:	e3a01000 	mov	r1, #0	; 0x0
         44ec0:	e3a00000 	mov	r0, #0	; 0x0
         44ec4:	eb6c1dd3 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         44ec8:	e28d1f47 	add	r1, sp, #284	; 0x11c
         44ecc:	e1a00007 	mov	r0, r7
         44ed0:	e3a02000 	mov	r2, #0	; 0x0
         44ed4:	eb6c3ab1 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
         44ed8:	e1550004 	cmp	r5, r4
         44edc:	aa000009 	bge	44f08 <TAnimate::CrumpleEffect(void)+0x540>
         44ee0:	e28d1f49 	add	r1, sp, #292	; 0x124
         44ee4:	e28d0c01 	add	r0, sp, #256	; 0x100
         44ee8:	e3e03002 	mvn	r3, #2	; 0x2
         44eec:	e3a02000 	mov	r2, #0	; 0x0
         44ef0:	eb69368b 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
         44ef4:	e28d1f49 	add	r1, sp, #292	; 0x124
         44ef8:	e28d0c01 	add	r0, sp, #256	; 0x100
         44efc:	e3a03001 	mov	r3, #1	; 0x1
         44f00:	e3a02000 	mov	r2, #0	; 0x0
         44f04:	eb693686 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
         44f08:	e3a01000 	mov	r1, #0	; 0x0
         44f0c:	e3a00000 	mov	r0, #0	; 0x0
         44f10:	eb6c1dc2 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         44f14:	e1a0000a 	mov	r0, sl
         44f18:	eb6978a4 	bl	1aa31b0 <$SleepTillTicks(unsigned long)>
         44f1c:	e3380000 	teq	r8, #0	; 0x0
         44f20:	13a00000 	movne	r0, #0	; 0x0
         44f24:	03a00001 	moveq	r0, #1	; 0x1
         44f28:	e21080ff 	ands	r8, r0, #255	; 0xff
         44f2c:	0a000003 	beq	44f40 <TAnimate::CrumpleEffect(void)+0x578>
         44f30:	e2861001 	add	r1, r6, #1	; 0x1
         44f34:	e3a00006 	mov	r0, #6	; 0x6
         44f38:	eb6db680 	bl	1bb2940 <$__rt_sdiv>
         44f3c:	e1a06001 	mov	r6, r1
         44f40:	e28d1f47 	add	r1, sp, #284	; 0x11c
         44f44:	e28d0f49 	add	r0, sp, #292	; 0x124
         44f48:	e8901008 	ldmia	r0, {r3, ip}
         44f4c:	e8811008 	stmia	r1, {r3, ip}
         44f50:	e2855001 	add	r5, r5, #1	; 0x1
         44f54:	e1550004 	cmp	r5, r4
         44f58:	daffffa7 	ble	44dfc <TAnimate::CrumpleEffect(void)+0x434>
         44f5c:	e51b002c 	ldr	r0, [fp, -#44]
         44f60:	e28000a0 	add	r0, r0, #160	; 0xa0
         44f64:	e59f108c 	ldr	r1, [pc, #8c]	; 44ff8 <TAnimate::CrumpleEffect(void)+0x630>
         44f68:	eb6963c6 	bl	1a9de88 <$PlaySound__FRC6RefVarT1>
         44f6c:	e3a01000 	mov	r1, #0	; 0x0
         44f70:	e3a00000 	mov	r0, #0	; 0x0
         44f74:	eb6c1da7 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         44f78:	e24dd008 	sub	sp, sp, #8	; 0x8
         44f7c:	e3a00001 	mov	r0, #1	; 0x1
         44f80:	e2400902 	sub	r0, r0, #32768	; 0x8000
         44f84:	e3a02902 	mov	r2, #32768	; 0x8000
         44f88:	e2422002 	sub	r2, r2, #2	; 0x2
         44f8c:	e5cd0001 	strb	r0, [sp, #1]
         44f90:	e3e0107f 	mvn	r1, #127	; 0x7f
         44f94:	e5cd1000 	strb	r1, [sp]
         44f98:	e5cd0003 	strb	r0, [sp, #3]
         44f9c:	e5cd1002 	strb	r1, [sp, #2]
         44fa0:	e5cd2005 	strb	r2, [sp, #5]
         44fa4:	e3a0007f 	mov	r0, #127	; 0x7f
         44fa8:	e5cd0004 	strb	r0, [sp, #4]
         44fac:	e5cd2007 	strb	r2, [sp, #7]
         44fb0:	e5cd0006 	strb	r0, [sp, #6]
         44fb4:	e1a0000d 	mov	r0, sp
         44fb8:	eb6c21b6 	bl	1b4d698 <$ClipRect(Rect *)>
         44fbc:	e28dd008 	add	sp, sp, #8	; 0x8
         44fc0:	eb6eb656 	bl	1bf2920 <$Ticks(void)>
         44fc4:	e280001e 	add	r0, r0, #30	; 0x1e
         44fc8:	eb697878 	bl	1aa31b0 <$SleepTillTicks(unsigned long)>
         44fcc:	e28d1e11 	add	r1, sp, #272	; 0x110
         44fd0:	e1a00007 	mov	r0, r7
         44fd4:	e3a02000 	mov	r2, #0	; 0x0
         44fd8:	eb6c3a70 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
         44fdc:	e5bd0100 	ldr	r0, [sp, #256]!
         44fe0:	eb6df875 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         44fe4:	e5bd000c 	ldr	r0, [sp, #12]!
         44fe8:	eb6df873 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         44fec:	e5bd000c 	ldr	r0, [sp, #12]!
         44ff0:	eb6df871 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         44ff4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         44ff8:	00680b80 	rsbeq	r0, r8, r0, lsl #23
    */
}

/**
 * Symbol: TAnimate::PoofEffect(void)
 * Address: 00044ffc
 */
TAnimate::PoofEffect(void) {
    /*
         44ffc:	e1a0c00d 	mov	ip, sp
         45000:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         45004:	e24cb004 	sub	fp, ip, #4	; 0x4
         45008:	e1a04000 	mov	r4, r0
         4500c:	e28000a0 	add	r0, r0, #160	; 0xa0
         45010:	e59f10f0 	ldr	r1, [pc, #f0]	; 45108 <TAnimate::PoofEffect(void)+0x10c>
         45014:	eb69639b 	bl	1a9de88 <$PlaySound__FRC6RefVarT1>
         45018:	e2841064 	add	r1, r4, #100	; 0x64
         4501c:	e1a07001 	mov	r7, r1
         45020:	e59f00e4 	ldr	r0, [pc, #e4]	; 4510c <TAnimate::PoofEffect(void)+0x110>
         45024:	e3a03008 	mov	r3, #8	; 0x8
         45028:	e3a0200f 	mov	r2, #15	; 0xf
         4502c:	eb69363c 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
         45030:	e3a01000 	mov	r1, #0	; 0x0
         45034:	e3a00000 	mov	r0, #0	; 0x0
         45038:	eb6c1d78 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         4503c:	e3a00002 	mov	r0, #2	; 0x2
         45040:	eb6980ac 	bl	1aa52f8 <$Wait(unsigned long)>
         45044:	e3a01000 	mov	r1, #0	; 0x0
         45048:	e3a00000 	mov	r0, #0	; 0x0
         4504c:	eb6c1d71 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         45050:	e2841074 	add	r1, r4, #116	; 0x74
         45054:	e1a05001 	mov	r5, r1
         45058:	e2840034 	add	r0, r4, #52	; 0x34
         4505c:	e1a06000 	mov	r6, r0
         45060:	e3a02000 	mov	r2, #0	; 0x0
         45064:	eb6c3a4d 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
         45068:	e1a01007 	mov	r1, r7
         4506c:	e59f009c 	ldr	r0, [pc, #9c]	; 45110 <TAnimate::PoofEffect(void)+0x114>
         45070:	e3a03008 	mov	r3, #8	; 0x8
         45074:	e3a0200f 	mov	r2, #15	; 0xf
         45078:	eb693629 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
         4507c:	e3a01000 	mov	r1, #0	; 0x0
         45080:	e3a00000 	mov	r0, #0	; 0x0
         45084:	eb6c1d65 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         45088:	e3a00002 	mov	r0, #2	; 0x2
         4508c:	eb698099 	bl	1aa52f8 <$Wait(unsigned long)>
         45090:	e3a01000 	mov	r1, #0	; 0x0
         45094:	e3a00000 	mov	r0, #0	; 0x0
         45098:	eb6c1d5e 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         4509c:	e1a01005 	mov	r1, r5
         450a0:	e1a00006 	mov	r0, r6
         450a4:	e3a02000 	mov	r2, #0	; 0x0
         450a8:	eb6c3a3c 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
         450ac:	e1a01007 	mov	r1, r7
         450b0:	e59f005c 	ldr	r0, [pc, #5c]	; 45114 <TAnimate::PoofEffect(void)+0x118>
         450b4:	e3a03008 	mov	r3, #8	; 0x8
         450b8:	e3a0200f 	mov	r2, #15	; 0xf
         450bc:	eb693618 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
         450c0:	e3a01000 	mov	r1, #0	; 0x0
         450c4:	e3a00000 	mov	r0, #0	; 0x0
         450c8:	eb6c1d54 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
         450cc:	e3a00001 	mov	r0, #1	; 0x1
         450d0:	eb698088 	bl	1aa52f8 <$Wait(unsigned long)>
         450d4:	e3a01000 	mov	r1, #0	; 0x0
         450d8:	e3a00000 	mov	r0, #0	; 0x0
         450dc:	eb6c1d4d 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
         450e0:	e1a01005 	mov	r1, r5
         450e4:	e1a00006 	mov	r0, r6
         450e8:	e3a02000 	mov	r2, #0	; 0x0
         450ec:	eb6c3a2b 	bl	1b539a0 <TSaveScreenBits::$RestoreScreenBits(Rect *, Region **)>
         450f0:	e1a01005 	mov	r1, r5
         450f4:	e5b42088 	ldr	r2, [r4, #136]!	; fField136
         450f8:	e1a00002 	mov	r0, r2
         450fc:	e5922000 	ldr	r2, [r2]
         45100:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         45104:	e282f054 	add	pc, r2, #84	; 0x54
         45108:	00680628 	rsbeq	r0, r8, r8, lsr #12
         4510c:	0067fb78 	rsbeq	pc, r7, r8, ror fp
         45110:	00681098 	streqb	r1, [r8], -#8
         45114:	00680398 	streqb	r0, [r8], -#56
    */
}

/**
 * Symbol: TAnimate::SetupDragEffect(TView *)
 * Address: 00045118
 */
TAnimate::SetupDragEffect(TView *) {
    /*
         45118:	e3e02000 	mvn	r2, #0	; 0x0
         4511c:	e3a03b82 	mov	r3, #133120	; 0x20800
         45120:	e58020a8 	str	r2, [r0, #168]	; fField168
         45124:	e3a02000 	mov	r2, #0	; 0x0
         45128:	ea69740e 	b	1aa2168 <TAnimate::$SetupPlainEffect(TView *, unsigned char, long)>
    */
}

