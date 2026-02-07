#include "include/TArithmeticDecompressor.h"

/**
 * Symbol: Sizeof__23TArithmeticDecompressorSFv
 * Address: 00036f20
 */
void TArithmeticDecompressor::Sizeof() {
    /*
         36f20:	e3a000d8 	mov	r0, #216	; 0xd8
         36f24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArithmeticDecompressor::New(void)
 * Address: 00036f28
 */
TArithmeticDecompressor::New(void) {
    /*
         36f28:	e3a01000 	mov	r1, #0	; 0x0
         36f2c:	e580102c 	str	r1, [r0, #44]	; fField44
         36f30:	e5801034 	str	r1, [r0, #52]	; fField52
         36f34:	e5801030 	str	r1, [r0, #48]	; fField48
         36f38:	e5801038 	str	r1, [r0, #56]	; fField56
         36f3c:	e5c01029 	strb	r1, [r0, #41]	; fField41
         36f40:	e3a01001 	mov	r1, #1	; 0x1
         36f44:	e5c01028 	strb	r1, [r0, #40]	; fField40
         36f48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArithmeticDecompressor::Delete(void)
 * Address: 00036f4c
 */
TArithmeticDecompressor::Delete(void) {
    /*
         36f4c:	e1a0c00d 	mov	ip, sp
         36f50:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         36f54:	e24cb004 	sub	fp, ip, #4	; 0x4
         36f58:	e1a04000 	mov	r4, r0
         36f5c:	e5d00029 	ldrb	r0, [r0, #41]	; fField41
         36f60:	e3300000 	teq	r0, #0	; 0x0
         36f64:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         36f68:	e594002c 	ldr	r0, [r4, #44]	; fField44
         36f6c:	eb6e59db 	bl	1bcd6e0 <$__dl(void *)>
         36f70:	e5940034 	ldr	r0, [r4, #52]	; fField52
         36f74:	eb6e59d9 	bl	1bcd6e0 <$__dl(void *)>
         36f78:	e5940038 	ldr	r0, [r4, #56]	; fField56
         36f7c:	eb6e59d7 	bl	1bcd6e0 <$__dl(void *)>
         36f80:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
         36f84:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         36f88:	ea6e59d4 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TArithmeticDecompressor::Cleanup(void)
 * Address: 00036f8c
 */
TArithmeticDecompressor::Cleanup(void) {
    /*
         36f8c:	e1a0c00d 	mov	ip, sp
         36f90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         36f94:	e24cb004 	sub	fp, ip, #4	; 0x4
         36f98:	e1a04000 	mov	r4, r0
         36f9c:	e5d0002a 	ldrb	r0, [r0, #42]	; fField42
         36fa0:	e3300000 	teq	r0, #0	; 0x0
         36fa4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         36fa8:	e594002c 	ldr	r0, [r4, #44]	; fField44
         36fac:	eb6e59cb 	bl	1bcd6e0 <$__dl(void *)>
         36fb0:	e5940034 	ldr	r0, [r4, #52]	; fField52
         36fb4:	eb6e59c9 	bl	1bcd6e0 <$__dl(void *)>
         36fb8:	e5940038 	ldr	r0, [r4, #56]	; fField56
         36fbc:	eb6e59c7 	bl	1bcd6e0 <$__dl(void *)>
         36fc0:	e5940030 	ldr	r0, [r4, #48]	; fField48
         36fc4:	eb6e59c5 	bl	1bcd6e0 <$__dl(void *)>
         36fc8:	e3a00000 	mov	r0, #0	; 0x0
         36fcc:	e584002c 	str	r0, [r4, #44]	; fField44
         36fd0:	e5840034 	str	r0, [r4, #52]	; fField52
         36fd4:	e5840030 	str	r0, [r4, #48]	; fField48
         36fd8:	e5840038 	str	r0, [r4, #56]	; fField56
         36fdc:	e5c40029 	strb	r0, [r4, #41]	; fField41
         36fe0:	e3a00001 	mov	r0, #1	; 0x1
         36fe4:	e5c4002a 	strb	r0, [r4, #42]	; fField42
         36fe8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TArithmeticDecompressor::Init(void *)
 * Address: 00036fec
 */
TArithmeticDecompressor::Init(void *) {
    /*
         36fec:	e1a0c00d 	mov	ip, sp
         36ff0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         36ff4:	e24cb004 	sub	fp, ip, #4	; 0x4
         36ff8:	e1a04000 	mov	r4, r0
         36ffc:	e1a05001 	mov	r5, r1
         37000:	e3a06000 	mov	r6, #0	; 0x0
         37004:	eb6da837 	bl	1ba10e8 <TArithmeticDecompressor::$Cleanup(void)>
         37008:	e3350000 	teq	r5, #0	; 0x0
         3700c:	1a00001b 	bne	37080 <TArithmeticDecompressor::Init(void *)+0x94>
         37010:	e3a00001 	mov	r0, #1	; 0x1
         37014:	e5c40029 	strb	r0, [r4, #41]	; fField41
         37018:	e3a00008 	mov	r0, #8	; 0x8
         3701c:	e2800b01 	add	r0, r0, #1024	; 0x400
         37020:	eb6e5dc4 	bl	1bce738 <$__nw(unsigned int)>
         37024:	e584002c 	str	r0, [r4, #44]	; fField44
         37028:	e3a00008 	mov	r0, #8	; 0x8
         3702c:	e2800b01 	add	r0, r0, #1024	; 0x400
         37030:	eb6e5dc0 	bl	1bce738 <$__nw(unsigned int)>
         37034:	e5840038 	str	r0, [r4, #56]	; fField56
         37038:	e3a00002 	mov	r0, #2	; 0x2
         3703c:	e2800c01 	add	r0, r0, #256	; 0x100
         37040:	eb6e5dbc 	bl	1bce738 <$__nw(unsigned int)>
         37044:	e5840034 	str	r0, [r4, #52]	; fField52
         37048:	e3a00b01 	mov	r0, #1024	; 0x400
         3704c:	eb6e5db9 	bl	1bce738 <$__nw(unsigned int)>
         37050:	e5840030 	str	r0, [r4, #48]	; fField48
         37054:	e594102c 	ldr	r1, [r4, #44]	; fField44
         37058:	e3310000 	teq	r1, #0	; 0x0
         3705c:	15941038 	ldrne	r1, [r4, #56]	; fField56
         37060:	13310000 	teqne	r1, #0	; 0x0
         37064:	15941034 	ldrne	r1, [r4, #52]	; fField52
         37068:	13310000 	teqne	r1, #0	; 0x0
         3706c:	13300000 	teqne	r0, #0	; 0x0
         37070:	03a060e9 	moveq	r6, #233	; 0xe9
         37074:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
         37078:	0a00001d 	beq	370f4 <TArithmeticDecompressor::Init(void *)+0x108>
         3707c:	ea00000b 	b	370b0 <TArithmeticDecompressor::Init(void *)+0xc4>
         37080:	e3a00000 	mov	r0, #0	; 0x0
         37084:	e5c4002a 	strb	r0, [r4, #42]	; fField42
         37088:	e5950000 	ldr	r0, [r5]
         3708c:	e584002c 	str	r0, [r4, #44]	; fField44
         37090:	e5950004 	ldr	r0, [r5, #4]
         37094:	e5840030 	str	r0, [r4, #48]	; fField48
         37098:	e5950008 	ldr	r0, [r5, #8]
         3709c:	e5840034 	str	r0, [r4, #52]	; fField52
         370a0:	e595000c 	ldr	r0, [r5, #12]
         370a4:	e5840038 	str	r0, [r4, #56]	; fField56
         370a8:	e5d50010 	ldrb	r0, [r5, #16]	; fField16
         370ac:	e5c40029 	strb	r0, [r4, #41]	; fField41
         370b0:	e1a00004 	mov	r0, r4
         370b4:	eb6db878 	bl	1ba529c <TArithmeticDecompressor::$Reset(void)>
         370b8:	e3a000ea 	mov	r0, #234	; 0xea
         370bc:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         370c0:	e594102c 	ldr	r1, [r4, #44]	; fField44
         370c4:	e3310000 	teq	r1, #0	; 0x0
         370c8:	15941030 	ldrne	r1, [r4, #48]	; fField48
         370cc:	13310000 	teqne	r1, #0	; 0x0
         370d0:	01a06000 	moveq	r6, r0
         370d4:	e5d41029 	ldrb	r1, [r4, #41]	; fField41
         370d8:	e3310000 	teq	r1, #0	; 0x0
         370dc:	0a000004 	beq	370f4 <TArithmeticDecompressor::Init(void *)+0x108>
         370e0:	e5941034 	ldr	r1, [r4, #52]	; fField52
         370e4:	e3310000 	teq	r1, #0	; 0x0
         370e8:	15b41038 	ldrne	r1, [r4, #56]!	; fField56
         370ec:	13310000 	teqne	r1, #0	; 0x0
         370f0:	01a06000 	moveq	r6, r0
         370f4:	e1a00006 	mov	r0, r6
         370f8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TArithmeticDecompressor::Reset(void)
 * Address: 00037100
 */
TArithmeticDecompressor::Reset(void) {
    /*
         37100:	e1a0c00d 	mov	ip, sp
         37104:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         37108:	e24cb004 	sub	fp, ip, #4	; 0x4
         3710c:	e1a04000 	mov	r4, r0
         37110:	e5d00029 	ldrb	r0, [r0, #41]	; fField41
         37114:	e3300000 	teq	r0, #0	; 0x0
         37118:	11a00004 	movne	r0, r4
         3711c:	1b6db86d 	blne	1ba52d8 <TArithmeticDecompressor::$StartModel(void)>
         37120:	e1a00004 	mov	r0, r4
         37124:	eb6db86d 	bl	1ba52e0 <TArithmeticDecompressor::$StartReadingBits(void)>
         37128:	e284004c 	add	r0, r4, #76	; 0x4c
         3712c:	e58400cc 	str	r0, [r4, #204]	; fField204
         37130:	e58400d0 	str	r0, [r4, #208]	; fField208
         37134:	e3a00001 	mov	r0, #1	; 0x1
         37138:	e5c40028 	strb	r0, [r4, #40]	; fField40
         3713c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)
 * Address: 00037140
 */
TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *) {
    /*
         37140:	e1a0c00d 	mov	ip, sp
         37144:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         37148:	e24cb004 	sub	fp, ip, #4	; 0x4
         3714c:	e1a04000 	mov	r4, r0
         37150:	e1a07001 	mov	r7, r1
         37154:	e1a05002 	mov	r5, r2
         37158:	e1a06003 	mov	r6, r3
         3715c:	e3a09000 	mov	r9, #0	; 0x0
         37160:	e3a0a000 	mov	sl, #0	; 0x0
         37164:	e52da06c 	str	sl, [sp, -#108]!
         37168:	e28d0008 	add	r0, sp, #8	; 0x8
         3716c:	eb6dee00 	bl	1bb2974 <$setjmp>
         37170:	e3300000 	teq	r0, #0	; 0x0
         37174:	1a00005f 	bne	372f8 <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1b8>
         37178:	e1a0000d 	mov	r0, sp
         3717c:	eb6ea3be 	bl	1be007c <$AddExceptionHandler>
         37180:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         37184:	e3300000 	teq	r0, #0	; 0x0
         37188:	0a00002f 	beq	3724c <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0x10c>
         3718c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37190:	e3300000 	teq	r0, #0	; 0x0
         37194:	1a000004 	bne	371ac <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0x6c>
         37198:	e1a00004 	mov	r0, r4
         3719c:	eb6db435 	bl	1ba4278 <TArithmeticDecompressor::$ReadByte(void)>
         371a0:	e5c40040 	strb	r0, [r4, #64]	; fField64
         371a4:	e3a00008 	mov	r0, #8	; 0x8
         371a8:	e5840044 	str	r0, [r4, #68]	; fField68
         371ac:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         371b0:	e2010001 	and	r0, r1, #1	; 0x1
         371b4:	e1a010a1 	mov	r1, r1, lsr #1
         371b8:	e5c41040 	strb	r1, [r4, #64]	; fField64
         371bc:	e5941044 	ldr	r1, [r4, #68]	; fField68
         371c0:	e2411001 	sub	r1, r1, #1	; 0x1
         371c4:	e5840020 	str	r0, [r4, #32]	; fField32
         371c8:	e3300001 	teq	r0, #1	; 0x1
         371cc:	e5841044 	str	r1, [r4, #68]	; fField68
         371d0:	128f0f3e 	addne	r0, pc, #248	; 0xf8
         371d4:	1b6ee9a9 	blne	1bf1880 <$printf>
         371d8:	e3a08001 	mov	r8, #1	; 0x1
         371dc:	e5940020 	ldr	r0, [r4, #32]	; fField32
         371e0:	e1a00080 	mov	r0, r0, lsl #1
         371e4:	e5840020 	str	r0, [r4, #32]	; fField32
         371e8:	e5940044 	ldr	r0, [r4, #68]	; fField68
         371ec:	e3300000 	teq	r0, #0	; 0x0
         371f0:	1a000004 	bne	37208 <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0xc8>
         371f4:	e1a00004 	mov	r0, r4
         371f8:	eb6db41e 	bl	1ba4278 <TArithmeticDecompressor::$ReadByte(void)>
         371fc:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37200:	e3a00008 	mov	r0, #8	; 0x8
         37204:	e5840044 	str	r0, [r4, #68]	; fField68
         37208:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
         3720c:	e2001001 	and	r1, r0, #1	; 0x1
         37210:	e1a000a0 	mov	r0, r0, lsr #1
         37214:	e5c40040 	strb	r0, [r4, #64]	; fField64
         37218:	e5940044 	ldr	r0, [r4, #68]	; fField68
         3721c:	e2400001 	sub	r0, r0, #1	; 0x1
         37220:	e5840044 	str	r0, [r4, #68]	; fField68
         37224:	e5940020 	ldr	r0, [r4, #32]	; fField32
         37228:	e0810000 	add	r0, r1, r0
         3722c:	e2888001 	add	r8, r8, #1	; 0x1
         37230:	e3580020 	cmp	r8, #32	; 0x20
         37234:	e5840020 	str	r0, [r4, #32]	; fField32
         37238:	baffffe7 	blt	371dc <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0x9c>
         3723c:	e3a00102 	mov	r0, #-2147483648	; 0x80000000
         37240:	e5840018 	str	r0, [r4, #24]	; fField24
         37244:	e584001c 	str	r0, [r4, #28]	; fField28
         37248:	e5c4a028 	strb	sl, [r4, #40]	; fField40
         3724c:	e3a08000 	mov	r8, #0	; 0x0
         37250:	e5950000 	ldr	r0, [r5]
         37254:	e3500000 	cmp	r0, #0	; 0x0
         37258:	da00002f 	ble	3731c <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1dc>
         3725c:	e1a00004 	mov	r0, r4
         37260:	eb6dafd0 	bl	1ba31a8 <TArithmeticDecompressor::$FindSymbol(void)>
         37264:	e1a01000 	mov	r1, r0
         37268:	e1a0a000 	mov	sl, r0
         3726c:	e1a00004 	mov	r0, r4
         37270:	eb6db3f2 	bl	1ba4240 <TArithmeticDecompressor::$NarrowRegion(int)>
         37274:	e1a00004 	mov	r0, r4
         37278:	eb6dabb9 	bl	1ba2164 <TArithmeticDecompressor::$DiscardBits(void)>
         3727c:	e1a0100a 	mov	r1, sl
         37280:	e24acc01 	sub	ip, sl, #256	; 0x100
         37284:	e33c0001 	teq	ip, #1	; 0x1
         37288:	03a00001 	moveq	r0, #1	; 0x1
         3728c:	05858000 	streq	r8, [r5]
         37290:	05c60000 	streqb	r0, [r6]
         37294:	0a000020 	beq	3731c <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1dc>
         37298:	e3a0a000 	mov	sl, #0	; 0x0
         3729c:	e5c6a000 	strb	sl, [r6]
         372a0:	e5940034 	ldr	r0, [r4, #52]	; fField52
         372a4:	e7d00001 	ldrb	r0, [r0, r1]
         372a8:	e7c70008 	strb	r0, [r7, r8]
         372ac:	e5d40029 	ldrb	r0, [r4, #41]	; fField41
         372b0:	e3300000 	teq	r0, #0	; 0x0
         372b4:	11a00004 	movne	r0, r4
         372b8:	1b6dbc11 	blne	1ba6304 <TArithmeticDecompressor::$UpdateModel(int)>
         372bc:	e2888001 	add	r8, r8, #1	; 0x1
         372c0:	e5950000 	ldr	r0, [r5]
         372c4:	e1580000 	cmp	r8, r0
         372c8:	baffffe3 	blt	3725c <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0x11c>
         372cc:	ea000012 	b	3731c <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1dc>
         372d0:	41726974 	cmnmi	r2, r4, ror r9
         372d4:	686d6574 	stmvsda	sp!, {r2, r4, r5, r6, r8, sl, sp, lr}^
         372d8:	69632045 	stmvsdb	r3!, {r0, r2, r6, sp}^
         372dc:	6e636f64 	cdpvs	15, 6, cr6, cr3, cr4, {3}
         372e0:	65723a20 	ldrvsb	r3, [r2, -#2592]!
         372e4:	42616420 	rsbmi	r6, r1, #536870912	; 0x20000000
         372e8:	696e7075 	stmvsdb	lr!, {r0, r2, r4, r5, r6, ip, sp, lr}^
         372ec:	74206669 	strvct	r6, [r0], -#1641
         372f0:	6c652028 	stcvsl	0, cr2, [r5], -#160
         372f4:	31290d00 	teqcc	r9, r0, lsl #26
         372f8:	e59d0060 	ldr	r0, [sp, #96]
         372fc:	e59f1028 	ldr	r1, [pc, #28]	; 3732c <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1ec>	; fField28
         37300:	e5911000 	ldr	r1, [r1]
         37304:	eb6eafa2 	bl	1be3194 <$Subexception>
         37308:	e3300000 	teq	r0, #0	; 0x0
         3730c:	159d9064 	ldrne	r9, [sp, #100]
         37310:	1a000001 	bne	3731c <TArithmeticDecompressor::ReadChunk(void *, long *, unsigned char *)+0x1dc>
         37314:	e1a0000d 	mov	r0, sp
         37318:	eb6eab8d 	bl	1be2154 <$NextHandler>
         3731c:	e1a0000d 	mov	r0, sp
         37320:	eb6ea764 	bl	1be10b8 <$ExitHandler>
         37324:	e1a00009 	mov	r0, r9
         37328:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         3732c:	00371320 	eoreqs	r1, r7, r0, lsr #6
    */
}

/**
 * Symbol: TArithmeticDecompressor::NarrowRegion(int)
 * Address: 00037330
 */
TArithmeticDecompressor::NarrowRegion(int) {
    /*
         37330:	e92d4010 	stmdb	sp!, {r4, lr}
         37334:	e590301c 	ldr	r3, [r0, #28]	; fField28
         37338:	e1a0c003 	mov	ip, r3
         3733c:	e590e02c 	ldr	lr, [r0, #44]	; fField44
         37340:	e59e2000 	ldr	r2, [lr]
         37344:	e1a02202 	mov	r2, r2, lsl #4
         37348:	e3310001 	teq	r1, #1	; 0x1
         3734c:	1a00001b 	bne	373c0 <TArithmeticDecompressor::NarrowRegion(int)+0x90>
         37350:	e5be1004 	ldr	r1, [lr, #4]!
         37354:	e3a0e000 	mov	lr, #0	; 0x0
         37358:	e15c0002 	cmp	ip, r2
         3735c:	204cc002 	subcs	ip, ip, r2
         37360:	21a0e001 	movcs	lr, r1
         37364:	e1a0c08c 	mov	ip, ip, lsl #1
         37368:	e1a0e08e 	mov	lr, lr, lsl #1
         3736c:	e15c0002 	cmp	ip, r2
         37370:	204cc002 	subcs	ip, ip, r2
         37374:	208ee001 	addcs	lr, lr, r1
         37378:	e1a0c08c 	mov	ip, ip, lsl #1
         3737c:	e1a0e08e 	mov	lr, lr, lsl #1
         37380:	e15c0002 	cmp	ip, r2
         37384:	204cc002 	subcs	ip, ip, r2
         37388:	208ee001 	addcs	lr, lr, r1
         3738c:	e1a0c08c 	mov	ip, ip, lsl #1
         37390:	e1a0e08e 	mov	lr, lr, lsl #1
         37394:	e15c0002 	cmp	ip, r2
         37398:	204cc002 	subcs	ip, ip, r2
         3739c:	208ee001 	addcs	lr, lr, r1
         373a0:	e1a0e08e 	mov	lr, lr, lsl #1
         373a4:	e152008c 	cmp	r2, ip, lsl #1
         373a8:	908ee001 	addls	lr, lr, r1
         373ac:	e5901018 	ldr	r1, [r0, #24]	; fField24
         373b0:	e081100e 	add	r1, r1, lr
         373b4:	e5801018 	str	r1, [r0, #24]	; fField24
         373b8:	e043100e 	sub	r1, r3, lr
         373bc:	ea000026 	b	3745c <TArithmeticDecompressor::NarrowRegion(int)+0x12c>
         373c0:	e79e3101 	ldr	r3, [lr, r1, lsl #2]
         373c4:	e08e1101 	add	r1, lr, r1, lsl #2
         373c8:	e5111004 	ldr	r1, [r1, -#4]
         373cc:	e3a0e000 	mov	lr, #0	; 0x0
         373d0:	e1a0400e 	mov	r4, lr
         373d4:	e15c0002 	cmp	ip, r2
         373d8:	204cc002 	subcs	ip, ip, r2
         373dc:	21a04003 	movcs	r4, r3
         373e0:	21a0e001 	movcs	lr, r1
         373e4:	e1a0c08c 	mov	ip, ip, lsl #1
         373e8:	e1a04084 	mov	r4, r4, lsl #1
         373ec:	e1a0e08e 	mov	lr, lr, lsl #1
         373f0:	e15c0002 	cmp	ip, r2
         373f4:	204cc002 	subcs	ip, ip, r2
         373f8:	20844003 	addcs	r4, r4, r3
         373fc:	208ee001 	addcs	lr, lr, r1
         37400:	e1a0c08c 	mov	ip, ip, lsl #1
         37404:	e1a04084 	mov	r4, r4, lsl #1
         37408:	e1a0e08e 	mov	lr, lr, lsl #1
         3740c:	e15c0002 	cmp	ip, r2
         37410:	204cc002 	subcs	ip, ip, r2
         37414:	20844003 	addcs	r4, r4, r3
         37418:	208ee001 	addcs	lr, lr, r1
         3741c:	e1a0c08c 	mov	ip, ip, lsl #1
         37420:	e1a04084 	mov	r4, r4, lsl #1
         37424:	e1a0e08e 	mov	lr, lr, lsl #1
         37428:	e15c0002 	cmp	ip, r2
         3742c:	204cc002 	subcs	ip, ip, r2
         37430:	20844003 	addcs	r4, r4, r3
         37434:	208ee001 	addcs	lr, lr, r1
         37438:	e1a04084 	mov	r4, r4, lsl #1
         3743c:	e1a0e08e 	mov	lr, lr, lsl #1
         37440:	e152008c 	cmp	r2, ip, lsl #1
         37444:	90844003 	addls	r4, r4, r3
         37448:	908ee001 	addls	lr, lr, r1
         3744c:	e5901018 	ldr	r1, [r0, #24]	; fField24
         37450:	e0811004 	add	r1, r1, r4
         37454:	e5801018 	str	r1, [r0, #24]	; fField24
         37458:	e04e1004 	sub	r1, lr, r4
         3745c:	e5a0101c 	str	r1, [r0, #28]!	; fField28
         37460:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TArithmeticDecompressor::StartModel(void)
 * Address: 00037464
 */
TArithmeticDecompressor::StartModel(void) {
    /*
         37464:	e92d4000 	stmdb	sp!, {lr}
         37468:	e3a01000 	mov	r1, #0	; 0x0
         3746c:	e2812001 	add	r2, r1, #1	; 0x1
         37470:	e5903030 	ldr	r3, [r0, #48]	; fField48
         37474:	e7832101 	str	r2, [r3, r1, lsl #2]
         37478:	e5903034 	ldr	r3, [r0, #52]	; fField52
         3747c:	e0833001 	add	r3, r3, r1
         37480:	e5c31001 	strb	r1, [r3, #1]
         37484:	e1a01002 	mov	r1, r2
         37488:	e3520c01 	cmp	r2, #256	; 0x100
         3748c:	bafffff6 	blt	3746c <TArithmeticDecompressor::StartModel(void)+0x8>
         37490:	e3a01001 	mov	r1, #1	; 0x1
         37494:	e580103c 	str	r1, [r0, #60]	; fField60
         37498:	e3a01001 	mov	r1, #1	; 0x1
         3749c:	e2811c01 	add	r1, r1, #256	; 0x100
         374a0:	e590203c 	ldr	r2, [r0, #60]	; fField60
         374a4:	e1a02082 	mov	r2, r2, lsl #1
         374a8:	e580203c 	str	r2, [r0, #60]	; fField60
         374ac:	e0822402 	add	r2, r2, r2, lsl #8
         374b0:	e3520301 	cmp	r2, #67108864	; 0x4000000
         374b4:	9afffff9 	bls	374a0 <TArithmeticDecompressor::StartModel(void)+0x3c>
         374b8:	e3a0c000 	mov	ip, #0	; 0x0
         374bc:	e590202c 	ldr	r2, [r0, #44]	; fField44
         374c0:	e5a2c404 	str	ip, [r2, #1028]!
         374c4:	e2803038 	add	r3, r0, #56	; 0x38
         374c8:	e893000c 	ldmia	r3, {r2, r3}
         374cc:	e7823101 	str	r3, [r2, r1, lsl #2]
         374d0:	e590202c 	ldr	r2, [r0, #44]	; fField44
         374d4:	e792e101 	ldr	lr, [r2, r1, lsl #2]
         374d8:	e08e3003 	add	r3, lr, r3
         374dc:	e0822101 	add	r2, r2, r1, lsl #2
         374e0:	e2411001 	sub	r1, r1, #1	; 0x1
         374e4:	e3510000 	cmp	r1, #0	; 0x0
         374e8:	e5223004 	str	r3, [r2, -#4]!
         374ec:	cafffff4 	bgt	374c4 <TArithmeticDecompressor::StartModel(void)+0x60>
         374f0:	e5900038 	ldr	r0, [r0, #56]	; fField56
         374f4:	e580c000 	str	ip, [r0]
         374f8:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TArithmeticDecompressor::UpdateModel(int)
 * Address: 000374fc
 */
TArithmeticDecompressor::UpdateModel(int) {
    /*
         374fc:	e92d4000 	stmdb	sp!, {lr}
         37500:	e1a02001 	mov	r2, r1
         37504:	e5903038 	ldr	r3, [r0, #56]	; fField56
         37508:	ea000000 	b	37510 <TArithmeticDecompressor::UpdateModel(int)+0x14>
         3750c:	e2422001 	sub	r2, r2, #1	; 0x1
         37510:	e793c102 	ldr	ip, [r3, r2, lsl #2]
         37514:	e083e102 	add	lr, r3, r2, lsl #2
         37518:	e51ee004 	ldr	lr, [lr, -#4]
         3751c:	e13c000e 	teq	ip, lr
         37520:	0afffff9 	beq	3750c <TArithmeticDecompressor::UpdateModel(int)+0x10>
         37524:	e1520001 	cmp	r2, r1
         37528:	aa000009 	bge	37554 <TArithmeticDecompressor::UpdateModel(int)+0x58>
         3752c:	e5903034 	ldr	r3, [r0, #52]	; fField52
         37530:	e7d3c002 	ldrb	ip, [r3, r2]
         37534:	e7d3e001 	ldrb	lr, [r3, r1]
         37538:	e7c3e002 	strb	lr, [r3, r2]
         3753c:	e5903034 	ldr	r3, [r0, #52]	; fField52
         37540:	e7c3c001 	strb	ip, [r3, r1]
         37544:	e5903030 	ldr	r3, [r0, #48]	; fField48
         37548:	e783110c 	str	r1, [r3, ip, lsl #2]
         3754c:	e5901030 	ldr	r1, [r0, #48]	; fField48
         37550:	e781210e 	str	r2, [r1, lr, lsl #2]
         37554:	e5901038 	ldr	r1, [r0, #56]	; fField56
         37558:	e0811102 	add	r1, r1, r2, lsl #2
         3755c:	e590303c 	ldr	r3, [r0, #60]	; fField60
         37560:	e591c000 	ldr	ip, [r1]
         37564:	e083300c 	add	r3, r3, ip
         37568:	e3520000 	cmp	r2, #0	; 0x0
         3756c:	e5813000 	str	r3, [r1]
         37570:	da000008 	ble	37598 <TArithmeticDecompressor::UpdateModel(int)+0x9c>
         37574:	e2422001 	sub	r2, r2, #1	; 0x1
         37578:	e590102c 	ldr	r1, [r0, #44]	; fField44
         3757c:	e0811102 	add	r1, r1, r2, lsl #2
         37580:	e590303c 	ldr	r3, [r0, #60]	; fField60
         37584:	e591c000 	ldr	ip, [r1]
         37588:	e083300c 	add	r3, r3, ip
         3758c:	e3520000 	cmp	r2, #0	; 0x0
         37590:	e5813000 	str	r3, [r1]
         37594:	cafffff6 	bgt	37574 <TArithmeticDecompressor::UpdateModel(int)+0x78>
         37598:	e590102c 	ldr	r1, [r0, #44]	; fField44
         3759c:	e5912000 	ldr	r2, [r1]
         375a0:	e3520302 	cmp	r2, #134217728	; 0x8000000
         375a4:	98bd8000 	ldmlsia	sp!, {pc}
         375a8:	e3a02000 	mov	r2, #0	; 0x0
         375ac:	e5a12404 	str	r2, [r1, #1028]!
         375b0:	e3a01001 	mov	r1, #1	; 0x1
         375b4:	e2811c01 	add	r1, r1, #256	; 0x100
         375b8:	e5902038 	ldr	r2, [r0, #56]	; fField56
         375bc:	e7923101 	ldr	r3, [r2, r1, lsl #2]
         375c0:	e2833001 	add	r3, r3, #1	; 0x1
         375c4:	e1a030a3 	mov	r3, r3, lsr #1
         375c8:	e7823101 	str	r3, [r2, r1, lsl #2]
         375cc:	e590202c 	ldr	r2, [r0, #44]	; fField44
         375d0:	e792c101 	ldr	ip, [r2, r1, lsl #2]
         375d4:	e08c3003 	add	r3, ip, r3
         375d8:	e0822101 	add	r2, r2, r1, lsl #2
         375dc:	e2411001 	sub	r1, r1, #1	; 0x1
         375e0:	e3510000 	cmp	r1, #0	; 0x0
         375e4:	e5223004 	str	r3, [r2, -#4]!
         375e8:	cafffff2 	bgt	375b8 <TArithmeticDecompressor::UpdateModel(int)+0xbc>
         375ec:	e590103c 	ldr	r1, [r0, #60]	; fField60
         375f0:	e3510001 	cmp	r1, #1	; 0x1
         375f4:	81a010a1 	movhi	r1, r1, lsr #1
         375f8:	85a0103c 	strhi	r1, [r0, #60]!	; fField60
         375fc:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TArithmeticDecompressor::StartReadingBits(void)
 * Address: 00037600
 */
TArithmeticDecompressor::StartReadingBits(void) {
    /*
         37600:	e3a01000 	mov	r1, #0	; 0x0
         37604:	e5801044 	str	r1, [r0, #68]	; fField68
         37608:	e5a01048 	str	r1, [r0, #72]!	; fField72
         3760c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TArithmeticDecompressor::FindSymbol(void)
 * Address: 00037610
 */
TArithmeticDecompressor::FindSymbol(void) {
    /*
         37610:	e92d4030 	stmdb	sp!, {r4, r5, lr}
         37614:	e590102c 	ldr	r1, [r0, #44]	; fField44
         37618:	e590c01c 	ldr	ip, [r0, #28]	; fField28
         3761c:	e5912000 	ldr	r2, [r1]
         37620:	e1a02202 	mov	r2, r2, lsl #4
         37624:	e3a03000 	mov	r3, #0	; 0x0
         37628:	e15c0002 	cmp	ip, r2
         3762c:	204cc002 	subcs	ip, ip, r2
         37630:	23a03001 	movcs	r3, #1	; 0x1
         37634:	e1a0c08c 	mov	ip, ip, lsl #1
         37638:	e1a03083 	mov	r3, r3, lsl #1
         3763c:	e15c0002 	cmp	ip, r2
         37640:	204cc002 	subcs	ip, ip, r2
         37644:	22833001 	addcs	r3, r3, #1	; 0x1
         37648:	e1a0c08c 	mov	ip, ip, lsl #1
         3764c:	e1a03083 	mov	r3, r3, lsl #1
         37650:	e15c0002 	cmp	ip, r2
         37654:	204cc002 	subcs	ip, ip, r2
         37658:	22833001 	addcs	r3, r3, #1	; 0x1
         3765c:	e1a0c08c 	mov	ip, ip, lsl #1
         37660:	e1a03083 	mov	r3, r3, lsl #1
         37664:	e15c0002 	cmp	ip, r2
         37668:	204cc002 	subcs	ip, ip, r2
         3766c:	22833001 	addcs	r3, r3, #1	; 0x1
         37670:	e1a03083 	mov	r3, r3, lsl #1
         37674:	e152008c 	cmp	r2, ip, lsl #1
         37678:	92833001 	addls	r3, r3, #1	; 0x1
         3767c:	e5902020 	ldr	r2, [r0, #32]	; fField32
         37680:	e5900018 	ldr	r0, [r0, #24]	; fField24
         37684:	e042e000 	sub	lr, r2, r0
         37688:	e3a02301 	mov	r2, #67108864	; 0x4000000
         3768c:	e1a03d03 	mov	r3, r3, lsl #26
         37690:	e3a0c000 	mov	ip, #0	; 0x0
         37694:	e3a00001 	mov	r0, #1	; 0x1
         37698:	e5914004 	ldr	r4, [r1, #4]
         3769c:	e3540000 	cmp	r4, #0	; 0x0
         376a0:	98bd8030 	ldmlsia	sp!, {r4, r5, pc}
         376a4:	e15e0003 	cmp	lr, r3
         376a8:	204ee003 	subcs	lr, lr, r3
         376ac:	208cc002 	addcs	ip, ip, r2
         376b0:	2a000007 	bcs	376d4 <TArithmeticDecompressor::FindSymbol(void)+0xc4>
         376b4:	e08c4002 	add	r4, ip, r2
         376b8:	e7915100 	ldr	r5, [r1, r0, lsl #2]
         376bc:	e1550004 	cmp	r5, r4
         376c0:	3a000003 	bcc	376d4 <TArithmeticDecompressor::FindSymbol(void)+0xc4>
         376c4:	e2800001 	add	r0, r0, #1	; 0x1
         376c8:	e7915100 	ldr	r5, [r1, r0, lsl #2]
         376cc:	e1550004 	cmp	r5, r4
         376d0:	2afffffb 	bcs	376c4 <TArithmeticDecompressor::FindSymbol(void)+0xb4>
         376d4:	e1a020a2 	mov	r2, r2, lsr #1
         376d8:	e1a030a3 	mov	r3, r3, lsr #1
         376dc:	e7914100 	ldr	r4, [r1, r0, lsl #2]
         376e0:	e154000c 	cmp	r4, ip
         376e4:	8affffee 	bhi	376a4 <TArithmeticDecompressor::FindSymbol(void)+0x94>
         376e8:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: TArithmeticDecompressor::DiscardBits(void)
 * Address: 000376ec
 */
TArithmeticDecompressor::DiscardBits(void) {
    /*
         376ec:	e1a0c00d 	mov	ip, sp
         376f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         376f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         376f8:	e1a04000 	mov	r4, r0
         376fc:	e590001c 	ldr	r0, [r0, #28]	; fField28
         37700:	e3500101 	cmp	r0, #1073741824	; 0x40000000
         37704:	891ba830 	ldmhidb	fp, {r4, r5, fp, sp, pc}
         37708:	e3a05008 	mov	r5, #8	; 0x8
         3770c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         37710:	e3500102 	cmp	r0, #-2147483648	; 0x80000000
         37714:	3a000004 	bcc	3772c <TArithmeticDecompressor::DiscardBits(void)+0x40>
         37718:	e2800102 	add	r0, r0, #-2147483648	; 0x80000000
         3771c:	e5840018 	str	r0, [r4, #24]	; fField24
         37720:	e5940020 	ldr	r0, [r4, #32]	; fField32
         37724:	e2800102 	add	r0, r0, #-2147483648	; 0x80000000
         37728:	ea000007 	b	3774c <TArithmeticDecompressor::DiscardBits(void)+0x60>
         3772c:	e594101c 	ldr	r1, [r4, #28]	; fField28
         37730:	e0801001 	add	r1, r0, r1
         37734:	e3510102 	cmp	r1, #-2147483648	; 0x80000000
         37738:	9a000004 	bls	37750 <TArithmeticDecompressor::DiscardBits(void)+0x64>
         3773c:	e2800103 	add	r0, r0, #-1073741824	; 0xc0000000
         37740:	e5840018 	str	r0, [r4, #24]	; fField24
         37744:	e5940020 	ldr	r0, [r4, #32]	; fField32
         37748:	e2800103 	add	r0, r0, #-1073741824	; 0xc0000000
         3774c:	e5840020 	str	r0, [r4, #32]	; fField32
         37750:	e5940018 	ldr	r0, [r4, #24]	; fField24
         37754:	e1a00080 	mov	r0, r0, lsl #1
         37758:	e5840018 	str	r0, [r4, #24]	; fField24
         3775c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         37760:	e1a00080 	mov	r0, r0, lsl #1
         37764:	e584001c 	str	r0, [r4, #28]	; fField28
         37768:	e5940020 	ldr	r0, [r4, #32]	; fField32
         3776c:	e1a00080 	mov	r0, r0, lsl #1
         37770:	e5840020 	str	r0, [r4, #32]	; fField32
         37774:	e5940044 	ldr	r0, [r4, #68]	; fField68
         37778:	e3300000 	teq	r0, #0	; 0x0
         3777c:	1a000003 	bne	37790 <TArithmeticDecompressor::DiscardBits(void)+0xa4>
         37780:	e1a00004 	mov	r0, r4
         37784:	eb6db2bb 	bl	1ba4278 <TArithmeticDecompressor::$ReadByte(void)>
         37788:	e5c40040 	strb	r0, [r4, #64]	; fField64
         3778c:	e5845044 	str	r5, [r4, #68]	; fField68
         37790:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
         37794:	e2010001 	and	r0, r1, #1	; 0x1
         37798:	e1a010a1 	mov	r1, r1, lsr #1
         3779c:	e5c41040 	strb	r1, [r4, #64]	; fField64
         377a0:	e5941044 	ldr	r1, [r4, #68]	; fField68
         377a4:	e2411001 	sub	r1, r1, #1	; 0x1
         377a8:	e5841044 	str	r1, [r4, #68]	; fField68
         377ac:	e5941020 	ldr	r1, [r4, #32]	; fField32
         377b0:	e0800001 	add	r0, r0, r1
         377b4:	e5840020 	str	r0, [r4, #32]	; fField32
         377b8:	e594001c 	ldr	r0, [r4, #28]	; fField28
         377bc:	e3500101 	cmp	r0, #1073741824	; 0x40000000
         377c0:	9affffd1 	bls	3770c <TArithmeticDecompressor::DiscardBits(void)+0x20>
         377c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TArithmeticDecompressor::ReadByte(void)
 * Address: 000377c8
 */
TArithmeticDecompressor::ReadByte(void) {
    /*
         377c8:	e1a0c00d 	mov	ip, sp
         377cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         377d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         377d4:	e1a04000 	mov	r4, r0
         377d8:	e24dd008 	sub	sp, sp, #8	; 0x8
         377dc:	e59000d0 	ldr	r0, [r0, #208]	; fField208
         377e0:	e59410cc 	ldr	r1, [r4, #204]	; fField204
         377e4:	e1500001 	cmp	r0, r1
         377e8:	2a000003 	bcs	377fc <TArithmeticDecompressor::ReadByte(void)+0x34>
         377ec:	e4d01001 	ldrb	r1, [r0], #1
         377f0:	e5a400d0 	str	r0, [r4, #208]!	; fField208
         377f4:	e1a00001 	mov	r0, r1
         377f8:	ea00001e 	b	37878 <TArithmeticDecompressor::ReadByte(void)+0xb0>
         377fc:	e3a00080 	mov	r0, #128	; 0x80
         37800:	e284104c 	add	r1, r4, #76	; 0x4c
         37804:	e1a05001 	mov	r5, r1
         37808:	e58d0004 	str	r0, [sp, #4]
         3780c:	e1a0300d 	mov	r3, sp
         37810:	e28d2004 	add	r2, sp, #4	; 0x4
         37814:	e5940014 	ldr	r0, [r4, #20]	; fField20
         37818:	e1a0e00f 	mov	lr, pc
         3781c:	e594f010 	ldr	pc, [r4, #16]	; fField16
         37820:	e59d2004 	ldr	r2, [sp, #4]
         37824:	e59f1050 	ldr	r1, [pc, #50]	; 3787c <TArithmeticDecompressor::ReadByte(void)+0xb4>
         37828:	e3320000 	teq	r2, #0	; 0x0
         3782c:	1a000002 	bne	3783c <TArithmeticDecompressor::ReadByte(void)+0x74>
         37830:	e5dd2000 	ldrb	r2, [sp]
         37834:	e3320000 	teq	r2, #0	; 0x0
         37838:	1a000002 	bne	37848 <TArithmeticDecompressor::ReadByte(void)+0x80>
         3783c:	e3300000 	teq	r0, #0	; 0x0
         37840:	11300001 	teqne	r0, r1
         37844:	0a00000e 	beq	37884 <TArithmeticDecompressor::ReadByte(void)+0xbc>
         37848:	e3a00020 	mov	r0, #32	; 0x20
         3784c:	e5942048 	ldr	r2, [r4, #72]	; fField72
         37850:	e1500182 	cmp	r0, r2, lsl #3
         37854:	ca000003 	bgt	37868 <TArithmeticDecompressor::ReadByte(void)+0xa0>
         37858:	e59f0020 	ldr	r0, [pc, #20]	; 37880 <TArithmeticDecompressor::ReadByte(void)+0xb8>	; fField20
         3785c:	e5900000 	ldr	r0, [r0]
         37860:	e3a02000 	mov	r2, #0	; 0x0
         37864:	eb6eae4c 	bl	1be319c <$Throw>
         37868:	e5940048 	ldr	r0, [r4, #72]	; fField72
         3786c:	e2800001 	add	r0, r0, #1	; 0x1
         37870:	e5a40048 	str	r0, [r4, #72]!	; fField72
         37874:	e3a00000 	mov	r0, #0	; 0x0
         37878:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         3787c:	ffff829b 	swinv	0x00ff829b
         37880:	00371320 	eoreqs	r1, r7, r0, lsr #6
         37884:	e1a00005 	mov	r0, r5
         37888:	e58450d0 	str	r5, [r4, #208]	; fField208
         3788c:	e59d1004 	ldr	r1, [sp, #4]
         37890:	e0841001 	add	r1, r4, r1
         37894:	e281104c 	add	r1, r1, #76	; 0x4c
         37898:	e58410cc 	str	r1, [r4, #204]	; fField204
         3789c:	eaffffd2 	b	377ec <TArithmeticDecompressor::ReadByte(void)+0x24>
    */
}

/**
 * Symbol: ClassInfo__23TArithmeticDecompressorSFv
 * Address: 003894ec
 */
void TArithmeticDecompressor::ClassInfo() {
    /*
        3894ec:	e24f0044 	sub	r0, pc, #68	; 0x44
        3894f0:	e1a0f00e 	mov	pc, lr
        3894f4:	e3a00000 	mov	r0, #0	; 0x0
        3894f8:	e1a0f00e 	mov	pc, lr
        3894fc:	54417269 	strplb	r7, [r1], -#617
        389500:	74686d65 	strvcbt	r6, [r8], -#3429
        389504:	74696344 	strvcbt	r6, [r9], -#836
        389508:	65636f6d 	strvsb	r6, [r3, -#3949]!
        38950c:	70726573 	rsbvcs	r6, r2, r3, ror r5
        389510:	736f7200 	cmnvc	pc, #0	; 0x0
        389514:	5443616c 	strplb	r6, [r3], -#364
        389518:	6c626163 	stfvse	f6, [r2], -#396
        38951c:	6b446563 	blvs	14a2ab0 <ROM$$Size+0xd82e64>
        389520:	6f6d7072 	swivs	0x006d7072
        389524:	6573736f 	ldrvsb	r7, [r3, -#879]!
        389528:	72000000 	andvc	r0, r0, #0	; 0x0
        38952c:	00000000 	andeq	r0, r0, r0
        389530:	eaffffed 	b	3894ec <ClassInfo__23TArithmeticDecompressorSFv>
        389534:	ea606b48 	b	1ba425c <TArithmeticDecompressor::$New(void)>
        389538:	ea606308 	b	1ba2160 <TArithmeticDecompressor::$Delete(void)>
        38953c:	ea606b35 	b	1ba4218 <TArithmeticDecompressor::$Init(void *)>
        389540:	ea606f55 	b	1ba529c <TArithmeticDecompressor::$Reset(void)>
        389544:	ea606f4d 	b	1ba5280 <TArithmeticDecompressor::$ReadChunk(void *, long *, unsigned char *)>
        389548:	e1a0000f 	mov	r0, pc
        38954c:	e1a0f00e 	mov	pc, lr
        389550:	54436f6d 	strplb	r6, [r3], -#3949
        389554:	70726573 	rsbvcs	r6, r2, r3, ror r5
        389558:	736f7200 	cmnvc	pc, #0	; 0x0
    */
}

