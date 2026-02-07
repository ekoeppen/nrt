#include "include/TUnitPublic.h"

/**
 * Symbol: TUnitPublic::__ct(TUnit *, unsigned long)
 * Address: 0022ced0
 */
TUnitPublic::TUnitPublic(TUnit *, unsigned long) {
    /*
        22ced0:	e1a0c00d 	mov	ip, sp
        22ced4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22ced8:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cedc:	e1b04000 	movs	r4, r0
        22cee0:	e1a05001 	mov	r5, r1
        22cee4:	1a000003 	bne	22cef8 <TUnitPublic::__ct(TUnit *, unsigned long)+0x28>
        22cee8:	e3a0003c 	mov	r0, #60	; 0x3c
        22ceec:	eb668611 	bl	1bce738 <$__nw(unsigned int)>
        22cef0:	e1b04000 	movs	r4, r0
        22cef4:	0a000017 	beq	22cf58 <TUnitPublic::__ct(TUnit *, unsigned long)+0x88>
        22cef8:	e3a00002 	mov	r0, #2	; 0x2
        22cefc:	eb665492 	bl	1bc214c <$AllocateRefHandle(long)>
        22cf00:	e5840030 	str	r0, [r4, #48]	; fField48
        22cf04:	e1a01000 	mov	r1, r0
        22cf08:	e3a00000 	mov	r0, #0	; 0x0
        22cf0c:	e5a10004 	str	r0, [r1, #4]!	; fField4
        22cf10:	e5840014 	str	r0, [r4, #20]	; fField20
        22cf14:	e5845000 	str	r5, [r4]
        22cf18:	e5840018 	str	r0, [r4, #24]	; fField24
        22cf1c:	e584001c 	str	r0, [r4, #28]	; fField28
        22cf20:	e5840034 	str	r0, [r4, #52]
        22cf24:	e3a01002 	mov	r1, #2	; 0x2
        22cf28:	e5840004 	str	r0, [r4, #4]	; fField4
        22cf2c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        22cf30:	e5801000 	str	r1, [r0]
        22cf34:	e2841028 	add	r1, r4, #40	; 0x28
        22cf38:	e3a029fe 	mov	r2, #4161536	; 0x3f8000
        22cf3c:	e2422501 	sub	r2, r2, #4194304	; 0x400000
        22cf40:	e5c12001 	strb	r2, [r1, #1]
        22cf44:	e3e0007f 	mvn	r0, #127	; 0x7f
        22cf48:	e5c10000 	strb	r0, [r1]
        22cf4c:	e284102c 	add	r1, r4, #44	; 0x2c
        22cf50:	e5c12001 	strb	r2, [r1, #1]
        22cf54:	e5c10000 	strb	r0, [r1]
        22cf58:	e1a00004 	mov	r0, r4
        22cf5c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::__dt(void)
 * Address: 0022cf60
 */
TUnitPublic::~TUnitPublic(void) {
    /*
        22cf60:	e1a0c00d 	mov	ip, sp
        22cf64:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22cf68:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cf6c:	e1a04000 	mov	r4, r0
        22cf70:	e1a05001 	mov	r5, r1
        22cf74:	e590001c 	ldr	r0, [r0, #28]	; fField28
        22cf78:	e3300000 	teq	r0, #0	; 0x0
        22cf7c:	13a01001 	movne	r1, #1	; 0x1
        22cf80:	1b616d35 	blne	1a8845c <TStrokePublic::$__dt(void)>
        22cf84:	e5940014 	ldr	r0, [r4, #20]	; fField20
        22cf88:	e3300000 	teq	r0, #0	; 0x0
        22cf8c:	1b648e39 	blne	1b50878 <$KillPoly(Polygon **)>
        22cf90:	e5940018 	ldr	r0, [r4, #24]	; fField24
        22cf94:	e3300000 	teq	r0, #0	; 0x0
        22cf98:	1b648e36 	blne	1b50878 <$KillPoly(Polygon **)>
        22cf9c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        22cfa0:	e3300000 	teq	r0, #0	; 0x0
        22cfa4:	13a01001 	movne	r1, #1	; 0x1
        22cfa8:	1b61713d 	blne	1a894a4 <TWordList::$__dt(void)>
        22cfac:	e5940030 	ldr	r0, [r4, #48]	; fField48
        22cfb0:	eb665881 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22cfb4:	e3150001 	tst	r5, #1	; 0x1
        22cfb8:	11a00004 	movne	r0, r4
        22cfbc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        22cfc0:	1a6681c6 	bne	1bcd6e0 <$__dl(void *)>
        22cfc4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::CaretType(void)
 * Address: 0022cfc8
 */
TUnitPublic::CaretType(void) {
    /*
        22cfc8:	e1a0c00d 	mov	ip, sp
        22cfcc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22cfd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22cfd4:	e24dd010 	sub	sp, sp, #16	; 0x10
        22cfd8:	e1a0400d 	mov	r4, sp
        22cfdc:	e5902000 	ldr	r2, [r0]
        22cfe0:	e1a00002 	mov	r0, r2
        22cfe4:	e3a01000 	mov	r1, #0	; 0x0
        22cfe8:	e5922000 	ldr	r2, [r2]
        22cfec:	e1a0e00f 	mov	lr, pc
        22cff0:	e282f068 	add	pc, r2, #104	; 0x68
        22cff4:	e890500c 	ldmia	r0, {r2, r3, ip, lr}
        22cff8:	e884500c 	stmia	r4, {r2, r3, ip, lr}
        22cffc:	e59d0000 	ldr	r0, [sp]
        22d000:	e3300002 	teq	r0, #2	; 0x2
        22d004:	13300003 	teqne	r0, #3	; 0x3
        22d008:	13300005 	teqne	r0, #5	; 0x5
        22d00c:	13300006 	teqne	r0, #6	; 0x6
        22d010:	059d0000 	ldreq	r0, [sp]
        22d014:	13a00000 	movne	r0, #0	; 0x0
        22d018:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::GesturePoint(long)
 * Address: 0022d01c
 */
TUnitPublic::GesturePoint(long) {
    /*
        22d01c:	e1a0c00d 	mov	ip, sp
        22d020:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22d024:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d028:	e1a04000 	mov	r4, r0
        22d02c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        22d030:	e5910000 	ldr	r0, [r1]
        22d034:	e1a01002 	mov	r1, r2
        22d038:	e5b0303c 	ldr	r3, [r0, #60]!
        22d03c:	e1a00003 	mov	r0, r3
        22d040:	e5932000 	ldr	r2, [r3]
        22d044:	e1a0e00f 	mov	lr, pc
        22d048:	e282f01c 	add	pc, r2, #28	; 0x1c
        22d04c:	e1a01000 	mov	r1, r0
        22d050:	e1a0000d 	mov	r0, sp
        22d054:	e3a0200c 	mov	r2, #12	; 0xc
        22d058:	eb661e7c 	bl	1bb4a50 <$memcpy>
        22d05c:	e41d0004 	ldr	r0, [sp], -#4	; fField4
        22d060:	e2800902 	add	r0, r0, #32768	; 0x8000
        22d064:	e1a00840 	mov	r0, r0, asr #16
        22d068:	e1a00800 	mov	r0, r0, lsl #16
        22d06c:	e1a00840 	mov	r0, r0, asr #16
        22d070:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        22d074:	e2811902 	add	r1, r1, #32768	; 0x8000
        22d078:	e1a01841 	mov	r1, r1, asr #16
        22d07c:	e1a01801 	mov	r1, r1, lsl #16
        22d080:	e1a01841 	mov	r1, r1, asr #16
        22d084:	e5cd0003 	strb	r0, [sp, #3]
        22d088:	e1a00440 	mov	r0, r0, asr #8
        22d08c:	e5cd0002 	strb	r0, [sp, #2]
        22d090:	e5cd1001 	strb	r1, [sp, #1]
        22d094:	e1a00441 	mov	r0, r1, asr #8
        22d098:	e5cd0000 	strb	r0, [sp]
        22d09c:	e59d0000 	ldr	r0, [sp]
        22d0a0:	e5840000 	str	r0, [r4]
        22d0a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::GestureAngle(void)
 * Address: 0022d0b8
 */
TUnitPublic::GestureAngle(void) {
    /*
        22d0b8:	e1a0c00d 	mov	ip, sp
        22d0bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22d0c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d0c4:	e24dd010 	sub	sp, sp, #16	; 0x10
        22d0c8:	e1a0400d 	mov	r4, sp
        22d0cc:	e5902000 	ldr	r2, [r0]
        22d0d0:	e1a00002 	mov	r0, r2
        22d0d4:	e3a01000 	mov	r1, #0	; 0x0
        22d0d8:	e5922000 	ldr	r2, [r2]
        22d0dc:	e1a0e00f 	mov	lr, pc
        22d0e0:	e282f068 	add	pc, r2, #104	; 0x68
        22d0e4:	e890500c 	ldmia	r0, {r2, r3, ip, lr}
        22d0e8:	e884500c 	stmia	r4, {r2, r3, ip, lr}
        22d0ec:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        22d0f0:	e2800902 	add	r0, r0, #32768	; 0x8000
        22d0f4:	e1a00840 	mov	r0, r0, asr #16
        22d0f8:	e1a00800 	mov	r0, r0, lsl #16
        22d0fc:	e1a00840 	mov	r0, r0, asr #16
        22d100:	e59d1000 	ldr	r1, [sp]
        22d104:	e3310005 	teq	r1, #5	; 0x5
        22d108:	13a01014 	movne	r1, #20	; 0x14
        22d10c:	03a0101e 	moveq	r1, #30	; 0x1e
        22d110:	e3500000 	cmp	r0, #0	; 0x0
        22d114:	a1a02000 	movge	r2, r0
        22d118:	b2602000 	rsblt	r2, r0, #0	; 0x0
        22d11c:	e1520001 	cmp	r2, r1
        22d120:	d3a00000 	movle	r0, #0	; 0x0
        22d124:	da000017 	ble	22d188 <TUnitPublic::GestureAngle(void)+0xd0>
        22d128:	e250205a 	subs	r2, r0, #90	; 0x5a
        22d12c:	42622000 	rsbmi	r2, r2, #0	; 0x0
        22d130:	e1520001 	cmp	r2, r1
        22d134:	d3a0005a 	movle	r0, #90	; 0x5a
        22d138:	da000012 	ble	22d188 <TUnitPublic::GestureAngle(void)+0xd0>
        22d13c:	e290205a 	adds	r2, r0, #90	; 0x5a
        22d140:	42622000 	rsbmi	r2, r2, #0	; 0x0
        22d144:	e1520001 	cmp	r2, r1
        22d148:	d3e00059 	mvnle	r0, #89	; 0x59
        22d14c:	da00000d 	ble	22d188 <TUnitPublic::GestureAngle(void)+0xd0>
        22d150:	e25020b4 	subs	r2, r0, #180	; 0xb4
        22d154:	42622000 	rsbmi	r2, r2, #0	; 0x0
        22d158:	e1520001 	cmp	r2, r1
        22d15c:	da000008 	ble	22d184 <TUnitPublic::GestureAngle(void)+0xcc>
        22d160:	e2502087 	subs	r2, r0, #135	; 0x87
        22d164:	42622000 	rsbmi	r2, r2, #0	; 0x0
        22d168:	e1520001 	cmp	r2, r1
        22d16c:	d3a00087 	movle	r0, #135	; 0x87
        22d170:	da000004 	ble	22d188 <TUnitPublic::GestureAngle(void)+0xd0>
        22d174:	e29020b4 	adds	r2, r0, #180	; 0xb4
        22d178:	42622000 	rsbmi	r2, r2, #0	; 0x0
        22d17c:	e1520001 	cmp	r2, r1
        22d180:	ca000000 	bgt	22d188 <TUnitPublic::GestureAngle(void)+0xd0>
        22d184:	e3a000b4 	mov	r0, #180	; 0xb4
        22d188:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::ContextID(void)
 * Address: 0022d18c
 */
TUnitPublic::ContextID(void) {
    /*
        22d18c:	e5900000 	ldr	r0, [r0]
        22d190:	e5901000 	ldr	r1, [r0]
        22d194:	e281f04c 	add	pc, r1, #76	; 0x4c
    */
}

/**
 * Symbol: TUnitPublic::RoughShape(void)
 * Address: 0022d198
 */
TUnitPublic::RoughShape(void) {
    /*
        22d198:	e1a0c00d 	mov	ip, sp
        22d19c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22d1a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d1a4:	e1a04000 	mov	r4, r0
        22d1a8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        22d1ac:	e3300000 	teq	r0, #0	; 0x0
        22d1b0:	1a000006 	bne	22d1d0 <TUnitPublic::RoughShape(void)+0x38>
        22d1b4:	e3a01000 	mov	r1, #0	; 0x0
        22d1b8:	e5940000 	ldr	r0, [r4]
        22d1bc:	e5902000 	ldr	r2, [r0]
        22d1c0:	e1a0e00f 	mov	lr, pc
        22d1c4:	e282f040 	add	pc, r2, #64	; 0x40
        22d1c8:	eb6174e0 	bl	1a8a550 <$AsPolygon(TStroke *)>
        22d1cc:	e5840018 	str	r0, [r4, #24]	; fField24
        22d1d0:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        22d1d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::CleanShape(void)
 * Address: 0022d1d8
 */
TUnitPublic::CleanShape(void) {
    /*
        22d1d8:	e1a0c00d 	mov	ip, sp
        22d1dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22d1e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d1e4:	e1a04000 	mov	r4, r0
        22d1e8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        22d1ec:	e3300000 	teq	r0, #0	; 0x0
        22d1f0:	05940000 	ldreq	r0, [r4]
        22d1f4:	05901008 	ldreq	r1, [r0, #8]	; fField8
        22d1f8:	059fc030 	ldreq	ip, [pc, #30]	; 22d230 <TUnitPublic::CleanShape(void)+0x58>
        22d1fc:	0131000c 	teqeq	r1, ip
        22d200:	1a000008 	bne	22d228 <TUnitPublic::CleanShape(void)+0x50>
        22d204:	eb64e86f 	bl	1b673c8 <TGeneralShapeUnit::$GetGSAsStroke(void)>
        22d208:	e1b05000 	movs	r5, r0
        22d20c:	0a000005 	beq	22d228 <TUnitPublic::CleanShape(void)+0x50>
        22d210:	e1a00005 	mov	r0, r5
        22d214:	eb6174cd 	bl	1a8a550 <$AsPolygon(TStroke *)>
        22d218:	e5840014 	str	r0, [r4, #20]	; fField20
        22d21c:	e1a00005 	mov	r0, r5
        22d220:	e1a0e00f 	mov	lr, pc
        22d224:	e595f000 	ldr	pc, [r5]
        22d228:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        22d22c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22d230:	47534850 	undefined
    */
}

/**
 * Symbol: TUnitPublic::ShapeType(void)
 * Address: 0022d234
 */
TUnitPublic::ShapeType(void) {
    /*
        22d234:	e1a01000 	mov	r1, r0
        22d238:	e3a00000 	mov	r0, #0	; 0x0
        22d23c:	e5911000 	ldr	r1, [r1]
        22d240:	e5912008 	ldr	r2, [r1, #8]	; fField8
        22d244:	e59fc018 	ldr	ip, [pc, #18]	; 22d264 <TUnitPublic::ShapeType(void)+0x30>
        22d248:	e132000c 	teq	r2, ip
        22d24c:	11a0f00e 	movne	pc, lr
        22d250:	e1a00001 	mov	r0, r1
        22d254:	e1a02001 	mov	r2, r1
        22d258:	e3a01000 	mov	r1, #0	; 0x0
        22d25c:	e5922000 	ldr	r2, [r2]
        22d260:	e282f08c 	add	pc, r2, #140	; 0x8c
        22d264:	47534850 	undefined
    */
}

/**
 * Symbol: TUnitPublic::MakeWordList(unsigned char, unsigned char)
 * Address: 0022d268
 */
TUnitPublic::MakeWordList(unsigned char, unsigned char) {
    /*
        22d268:	e1a0c00d 	mov	ip, sp
        22d26c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        22d270:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d274:	e20130ff 	and	r3, r1, #255	; 0xff
        22d278:	e20210ff 	and	r1, r2, #255	; 0xff
        22d27c:	e3a05000 	mov	r5, #0	; 0x0
        22d280:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        22d284:	e52d3004 	str	r3, [sp, -#4]!	; fField4
        22d288:	e51b0034 	ldr	r0, [fp, -#52]
        22d28c:	eb61a62e 	bl	1a96b4c <TUnitPublic::$GetType(void)>
        22d290:	e59f1188 	ldr	r1, [pc, #188]	; 22d420 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x1b8>
        22d294:	e5911000 	ldr	r1, [r1]
        22d298:	e1300001 	teq	r0, r1
        22d29c:	1a0000f3 	bne	22d670 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x408>
        22d2a0:	e3a00000 	mov	r0, #0	; 0x0
        22d2a4:	eb616c63 	bl	1a88438 <TWordList::$__ct(void)>
        22d2a8:	e1b05000 	movs	r5, r0
        22d2ac:	0a0000ef 	beq	22d670 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x408>
        22d2b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        22d2b4:	e51b0034 	ldr	r0, [fp, -#52]
        22d2b8:	e5900000 	ldr	r0, [r0]
        22d2bc:	e5901000 	ldr	r1, [r0]
        22d2c0:	e1a0e00f 	mov	lr, pc
        22d2c4:	e281f020 	add	pc, r1, #32	; 0x20
        22d2c8:	e3a08000 	mov	r8, #0	; 0x0
        22d2cc:	e40d000c 	str	r0, [sp], -#12
        22d2d0:	e51b0034 	ldr	r0, [fp, -#52]
        22d2d4:	eb6221ea 	bl	1ab5a84 <TUnitPublic::$InputMask(void)>
        22d2d8:	e3c014fe 	bic	r1, r0, #-33554432	; 0xfe000000
        22d2dc:	e3c11c01 	bic	r1, r1, #256	; 0x100
        22d2e0:	e3c110ff 	bic	r1, r1, #255	; 0xff
        22d2e4:	e241c77f 	sub	ip, r1, #33292288	; 0x1fc0000
        22d2e8:	e24ccbff 	sub	ip, ip, #261120	; 0x3fc00
        22d2ec:	e33c0c02 	teq	ip, #512	; 0x200
        22d2f0:	12001502 	andne	r1, r0, #8388608	; 0x800000
        22d2f4:	13310000 	teqne	r1, #0	; 0x0
        22d2f8:	03a01000 	moveq	r1, #0	; 0x0
        22d2fc:	13a01001 	movne	r1, #1	; 0x1
        22d300:	e20110ff 	and	r1, r1, #255	; 0xff
        22d304:	e58d1008 	str	r1, [sp, #8]	; fField8
        22d308:	e3100a02 	tst	r0, #8192	; 0x2000
        22d30c:	0a000005 	beq	22d328 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0xc0>
        22d310:	e3c004fe 	bic	r0, r0, #-33554432	; 0xfe000000
        22d314:	e3c00881 	bic	r0, r0, #8454144	; 0x810000
        22d318:	e3c00caf 	bic	r0, r0, #44800	; 0xaf00
        22d31c:	e3d000ff 	bics	r0, r0, #255	; 0xff
        22d320:	03a00001 	moveq	r0, #1	; 0x1
        22d324:	0a000000 	beq	22d32c <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0xc4>
        22d328:	e3a00000 	mov	r0, #0	; 0x0
        22d32c:	e20000ff 	and	r0, r0, #255	; 0xff
        22d330:	e58d0004 	str	r0, [sp, #4]	; fField4
        22d334:	e3a00002 	mov	r0, #2	; 0x2
        22d338:	e3a06000 	mov	r6, #0	; 0x0
        22d33c:	e58d0000 	str	r0, [sp]
        22d340:	e3a09000 	mov	r9, #0	; 0x0
        22d344:	e59d000c 	ldr	r0, [sp, #12]
        22d348:	e3500000 	cmp	r0, #0	; 0x0
        22d34c:	da000096 	ble	22d5ac <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x344>
        22d350:	e24dd004 	sub	sp, sp, #4	; 0x4
        22d354:	e51b0034 	ldr	r0, [fp, -#52]
        22d358:	e1a01009 	mov	r1, r9
        22d35c:	e5902000 	ldr	r2, [r0]
        22d360:	e1a00002 	mov	r0, r2
        22d364:	e5922000 	ldr	r2, [r2]
        22d368:	e1a0e00f 	mov	lr, pc
        22d36c:	e282f068 	add	pc, r2, #104	; 0x68
        22d370:	e5902004 	ldr	r2, [r0, #4]	; fField4
        22d374:	e5907000 	ldr	r7, [r0]
        22d378:	e3770001 	cmn	r7, #1	; 0x1
        22d37c:	e58d2000 	str	r2, [sp]
        22d380:	0a000084 	beq	22d598 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x330>
        22d384:	e51b0034 	ldr	r0, [fp, -#52]
        22d388:	e1a01009 	mov	r1, r9
        22d38c:	e5902000 	ldr	r2, [r0]
        22d390:	e1a00002 	mov	r0, r2
        22d394:	e5922000 	ldr	r2, [r2]
        22d398:	e1a0e00f 	mov	lr, pc
        22d39c:	e282f0bc 	add	pc, r2, #188	; 0xbc
        22d3a0:	e1a04000 	mov	r4, r0
        22d3a4:	e5900000 	ldr	r0, [r0]
        22d3a8:	eb6704ec 	bl	1bee760 <$Ustrlen>
        22d3ac:	e1a01000 	mov	r1, r0
        22d3b0:	e5942000 	ldr	r2, [r4]
        22d3b4:	e5920000 	ldr	r0, [r2]
        22d3b8:	e1b00820 	movs	r0, r0, lsr #16
        22d3bc:	0a000075 	beq	22d598 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x330>
        22d3c0:	e59d3014 	ldr	r3, [sp, #20]	; fField20
        22d3c4:	e3530000 	cmp	r3, #0	; 0x0
        22d3c8:	1a000032 	bne	22d498 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x230>
        22d3cc:	e3360000 	teq	r6, #0	; 0x0
        22d3d0:	1a000013 	bne	22d424 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x1bc>
        22d3d4:	e3370028 	teq	r7, #40	; 0x28
        22d3d8:	1a000028 	bne	22d480 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x218>
        22d3dc:	e3310002 	teq	r1, #2	; 0x2
        22d3e0:	1a000004 	bne	22d3f8 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x190>
        22d3e4:	e5921002 	ldr	r1, [r2, #2]
        22d3e8:	e1a01821 	mov	r1, r1, lsr #16
        22d3ec:	e331002e 	teq	r1, #46	; 0x2e
        22d3f0:	13310029 	teqne	r1, #41	; 0x29
        22d3f4:	0a000021 	beq	22d480 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x218>
        22d3f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        22d3fc:	eb66f446 	bl	1bea51c <$IsAlphabet(unsigned short)>
        22d400:	e3300000 	teq	r0, #0	; 0x0
        22d404:	0a00001c 	beq	22d47c <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x214>
        22d408:	e1a0100d 	mov	r1, sp
        22d40c:	e5940000 	ldr	r0, [r4]
        22d410:	eb61ba5e 	bl	1a9bd90 <$LookupWord(unsigned short *, unsigned long *)>
        22d414:	e3700001 	cmn	r0, #1	; 0x1
        22d418:	1a000017 	bne	22d47c <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x214>
        22d41c:	ea000014 	b	22d474 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x20c>
        22d420:	0c101844 	ldceq	8, cr1, [r0], -#272
        22d424:	e3360001 	teq	r6, #1	; 0x1
        22d428:	1a000014 	bne	22d480 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x218>
        22d42c:	e3370028 	teq	r7, #40	; 0x28
        22d430:	1a000058 	bne	22d598 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x330>
        22d434:	e3310002 	teq	r1, #2	; 0x2
        22d438:	1a000004 	bne	22d450 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x1e8>
        22d43c:	e5921002 	ldr	r1, [r2, #2]
        22d440:	e1a01821 	mov	r1, r1, lsr #16
        22d444:	e331002e 	teq	r1, #46	; 0x2e
        22d448:	13310029 	teqne	r1, #41	; 0x29
        22d44c:	0a000051 	beq	22d598 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x330>
        22d450:	e24dd004 	sub	sp, sp, #4	; 0x4
        22d454:	eb66f430 	bl	1bea51c <$IsAlphabet(unsigned short)>
        22d458:	e3300000 	teq	r0, #0	; 0x0
        22d45c:	0a000004 	beq	22d474 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x20c>
        22d460:	e1a0100d 	mov	r1, sp
        22d464:	e5940000 	ldr	r0, [r4]
        22d468:	eb61ba48 	bl	1a9bd90 <$LookupWord(unsigned short *, unsigned long *)>
        22d46c:	e3700001 	cmn	r0, #1	; 0x1
        22d470:	0a000001 	beq	22d47c <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x214>
        22d474:	e28dd008 	add	sp, sp, #8	; 0x8
        22d478:	ea000047 	b	22d59c <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x334>
        22d47c:	e28dd004 	add	sp, sp, #4	; 0x4
        22d480:	e59d000c 	ldr	r0, [sp, #12]
        22d484:	e3300000 	teq	r0, #0	; 0x0
        22d488:	13a01001 	movne	r1, #1	; 0x1
        22d48c:	15940000 	ldrne	r0, [r4]
        22d490:	1b6704ad 	blne	1bee74c <$UppercaseText(unsigned short *, long)>
        22d494:	ea000016 	b	22d4f4 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x28c>
        22d498:	0a000015 	beq	22d4f4 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x28c>
        22d49c:	e3370028 	teq	r7, #40	; 0x28
        22d4a0:	1a00003c 	bne	22d598 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x330>
        22d4a4:	e3510001 	cmp	r1, #1	; 0x1
        22d4a8:	8a00003a 	bhi	22d598 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x330>
        22d4ac:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        22d4b0:	e3310000 	teq	r1, #0	; 0x0
        22d4b4:	0a000005 	beq	22d4d0 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x268>
        22d4b8:	eb000686 	bl	22eed8 <InTryString(unsigned short)>
        22d4bc:	e3360000 	teq	r6, #0	; 0x0
        22d4c0:	13a01000 	movne	r1, #0	; 0x0
        22d4c4:	03a01001 	moveq	r1, #1	; 0x1
        22d4c8:	e1300001 	teq	r0, r1
        22d4cc:	0a000031 	beq	22d598 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x330>
        22d4d0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        22d4d4:	e3300000 	teq	r0, #0	; 0x0
        22d4d8:	0a000005 	beq	22d4f4 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x28c>
        22d4dc:	e5940000 	ldr	r0, [r4]
        22d4e0:	e5900000 	ldr	r0, [r0]
        22d4e4:	e1a00820 	mov	r0, r0, lsr #16
        22d4e8:	eb66f40f 	bl	1bea52c <$IsDigit(unsigned short)>
        22d4ec:	e3300000 	teq	r0, #0	; 0x0
        22d4f0:	0a000028 	beq	22d598 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x330>
        22d4f4:	e3340000 	teq	r4, #0	; 0x0
        22d4f8:	0a000024 	beq	22d590 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x328>
        22d4fc:	e59d3014 	ldr	r3, [sp, #20]	; fField20
        22d500:	e3330000 	teq	r3, #0	; 0x0
        22d504:	1a000014 	bne	22d55c <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x2f4>
        22d508:	e1a00004 	mov	r0, r4
        22d50c:	eb66d2fe 	bl	1be210c <$HLock>
        22d510:	e5940000 	ldr	r0, [r4]
        22d514:	eb620488 	bl	1aae73c <$ExpandWord(unsigned short *)>
        22d518:	e1b0a000 	movs	sl, r0
        22d51c:	0a00000e 	beq	22d55c <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x2f4>
        22d520:	e1a0100a 	mov	r1, sl
        22d524:	e1a00005 	mov	r0, r5
        22d528:	eb6210e8 	bl	1ab18d0 <TWordList::$Find(unsigned short **)>
        22d52c:	e3500000 	cmp	r0, #0	; 0x0
        22d530:	aa000005 	bge	22d54c <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x2e4>
        22d534:	e1a03007 	mov	r3, r7
        22d538:	e1a0100a 	mov	r1, sl
        22d53c:	e1a00005 	mov	r0, r5
        22d540:	e59d2000 	ldr	r2, [sp]
        22d544:	eb622150 	bl	1ab5a8c <TWordList::$InsertLast(unsigned short **, long, long)>
        22d548:	e2888001 	add	r8, r8, #1	; 0x1
        22d54c:	e1a00004 	mov	r0, r4
        22d550:	eb66d2ef 	bl	1be2114 <$HUnlock>
        22d554:	e1a0000a 	mov	r0, sl
        22d558:	eb66ced4 	bl	1be10b0 <$DisposHandle>
        22d55c:	e1a01004 	mov	r1, r4
        22d560:	e1a00005 	mov	r0, r5
        22d564:	eb6210d9 	bl	1ab18d0 <TWordList::$Find(unsigned short **)>
        22d568:	e3500000 	cmp	r0, #0	; 0x0
        22d56c:	aa000005 	bge	22d588 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x320>
        22d570:	e1a03007 	mov	r3, r7
        22d574:	e1a01004 	mov	r1, r4
        22d578:	e1a00005 	mov	r0, r5
        22d57c:	e59d2000 	ldr	r2, [sp]
        22d580:	eb622141 	bl	1ab5a8c <TWordList::$InsertLast(unsigned short **, long, long)>
        22d584:	e2888001 	add	r8, r8, #1	; 0x1
        22d588:	e3580005 	cmp	r8, #5	; 0x5
        22d58c:	ba000001 	blt	22d598 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x330>
        22d590:	e28dd004 	add	sp, sp, #4	; 0x4
        22d594:	ea000004 	b	22d5ac <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x344>
        22d598:	e28dd004 	add	sp, sp, #4	; 0x4
        22d59c:	e2899001 	add	r9, r9, #1	; 0x1
        22d5a0:	e59d000c 	ldr	r0, [sp, #12]
        22d5a4:	e1590000 	cmp	r9, r0
        22d5a8:	baffff68 	blt	22d350 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0xe8>
        22d5ac:	e59d3010 	ldr	r3, [sp, #16]
        22d5b0:	e3330000 	teq	r3, #0	; 0x0
        22d5b4:	0a000012 	beq	22d604 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x39c>
        22d5b8:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        22d5bc:	e3310000 	teq	r1, #0	; 0x0
        22d5c0:	0a00000c 	beq	22d5f8 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x390>
        22d5c4:	e3360000 	teq	r6, #0	; 0x0
        22d5c8:	1a00000a 	bne	22d5f8 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x390>
        22d5cc:	eb6239ee 	bl	1abbd8c <$TryStringLength(void)>
        22d5d0:	e3300001 	teq	r0, #1	; 0x1
        22d5d4:	1a000007 	bne	22d5f8 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x390>
        22d5d8:	e51b0034 	ldr	r0, [fp, -#52]
        22d5dc:	e5900000 	ldr	r0, [r0]
        22d5e0:	e5901000 	ldr	r1, [r0]
        22d5e4:	e1a0e00f 	mov	lr, pc
        22d5e8:	e281f03c 	add	pc, r1, #60	; 0x3c
        22d5ec:	e3300001 	teq	r0, #1	; 0x1
        22d5f0:	01a00005 	moveq	r0, r5
        22d5f4:	0b62be05 	bleq	1adce10 <TWordList::$Reorder(void)>
        22d5f8:	e59d3010 	ldr	r3, [sp, #16]
        22d5fc:	e3530000 	cmp	r3, #0	; 0x0
        22d600:	1a000003 	bne	22d614 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x3ac>
        22d604:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        22d608:	e3300000 	teq	r0, #0	; 0x0
        22d60c:	1a000008 	bne	22d634 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x3cc>
        22d610:	ea000003 	b	22d624 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x3bc>
        22d614:	0a000002 	beq	22d624 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x3bc>
        22d618:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        22d61c:	e3310000 	teq	r1, #0	; 0x0
        22d620:	0a000003 	beq	22d634 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x3cc>
        22d624:	e2866001 	add	r6, r6, #1	; 0x1
        22d628:	e59d0000 	ldr	r0, [sp]
        22d62c:	e1560000 	cmp	r6, r0
        22d630:	baffff42 	blt	22d340 <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0xd8>
        22d634:	e3380000 	teq	r8, #0	; 0x0
        22d638:	1a00000b 	bne	22d66c <TUnitPublic::MakeWordList(unsigned char, unsigned char)+0x404>
        22d63c:	e24dd008 	sub	sp, sp, #8	; 0x8
        22d640:	e3a00000 	mov	r0, #0	; 0x0
        22d644:	e5cd0005 	strb	r0, [sp, #5]
        22d648:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        22d64c:	e28d0004 	add	r0, sp, #4	; 0x4
        22d650:	e58d0000 	str	r0, [sp]
        22d654:	e1a0100d 	mov	r1, sp
        22d658:	e1a00005 	mov	r0, r5
        22d65c:	e3e03000 	mvn	r3, #0	; 0x0
        22d660:	e3a02ffa 	mov	r2, #1000	; 0x3e8
        22d664:	eb622108 	bl	1ab5a8c <TWordList::$InsertLast(unsigned short **, long, long)>
        22d668:	e28dd008 	add	sp, sp, #8	; 0x8
        22d66c:	e28dd010 	add	sp, sp, #16	; 0x10
        22d670:	e1a00005 	mov	r0, r5
        22d674:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::GetType(void)
 * Address: 0022d678
 */
TUnitPublic::GetType(void) {
    /*
        22d678:	e5900000 	ldr	r0, [r0]
        22d67c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        22d680:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnitPublic::WordInfo(void)
 * Address: 0022d684
 */
TUnitPublic::WordInfo(void) {
    /*
        22d684:	e1a0c00d 	mov	ip, sp
        22d688:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22d68c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d690:	e2801030 	add	r1, r0, #48	; 0x30
        22d694:	e1a04001 	mov	r4, r1
        22d698:	e5911000 	ldr	r1, [r1]
        22d69c:	e5911000 	ldr	r1, [r1]
        22d6a0:	e3310002 	teq	r1, #2	; 0x2
        22d6a4:	1a000003 	bne	22d6b8 <TUnitPublic::WordInfo(void)+0x34>
        22d6a8:	e1a05004 	mov	r5, r4
        22d6ac:	eb622111 	bl	1ab5af8 <$MakeWordInfo(TUnitPublic *)>
        22d6b0:	e5951000 	ldr	r1, [r5]
        22d6b4:	e5810000 	str	r0, [r1]
        22d6b8:	e5940000 	ldr	r0, [r4]
        22d6bc:	e5900000 	ldr	r0, [r0]
        22d6c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::ExtractWords(void)
 * Address: 0022d6c4
 */
TUnitPublic::ExtractWords(void) {
    /*
        22d6c4:	e1a0c00d 	mov	ip, sp
        22d6c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22d6cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d6d0:	e1a04000 	mov	r4, r0
        22d6d4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        22d6d8:	e3300000 	teq	r0, #0	; 0x0
        22d6dc:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        22d6e0:	e1a00004 	mov	r0, r4
        22d6e4:	e3a02000 	mov	r2, #0	; 0x0
        22d6e8:	e3a01000 	mov	r1, #0	; 0x0
        22d6ec:	eb622506 	bl	1ab6b0c <TUnitPublic::$MakeWordList(unsigned char, unsigned char)>
        22d6f0:	e5a40004 	str	r0, [r4, #4]!	; fField4
        22d6f4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::Word(void)
 * Address: 0022d6f8
 */
TUnitPublic::Word(void) {
    /*
        22d6f8:	e1a0c00d 	mov	ip, sp
        22d6fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22d700:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d704:	e1a04000 	mov	r4, r0
        22d708:	eb61989e 	bl	1a93988 <TUnitPublic::$ExtractWords(void)>
        22d70c:	e3a01000 	mov	r1, #0	; 0x0
        22d710:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        22d714:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        22d718:	ea61e2fc 	b	1aa6310 <TWordList::$Word(long)>
    */
}

/**
 * Symbol: TUnitPublic::WordScore(void)
 * Address: 0022d71c
 */
TUnitPublic::WordScore(void) {
    /*
        22d71c:	e1a0c00d 	mov	ip, sp
        22d720:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22d724:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d728:	e1a04000 	mov	r4, r0
        22d72c:	eb619895 	bl	1a93988 <TUnitPublic::$ExtractWords(void)>
        22d730:	e3a01000 	mov	r1, #0	; 0x0
        22d734:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        22d738:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        22d73c:	ea61ce62 	b	1aa10cc <TWordList::$Score(long)>
    */
}

/**
 * Symbol: TUnitPublic::Words(void)
 * Address: 0022d740
 */
TUnitPublic::Words(void) {
    /*
        22d740:	e1a0c00d 	mov	ip, sp
        22d744:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22d748:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d74c:	e1a04000 	mov	r4, r0
        22d750:	eb61988c 	bl	1a93988 <TUnitPublic::$ExtractWords(void)>
        22d754:	e3a01000 	mov	r1, #0	; 0x0
        22d758:	e5940004 	ldr	r0, [r4, #4]	; fField4
        22d75c:	e5a41004 	str	r1, [r4, #4]!	; fField4
        22d760:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::SetWordBase(void)
 * Address: 0022d764
 */
TUnitPublic::SetWordBase(void) {
    /*
        22d764:	e1a0c00d 	mov	ip, sp
        22d768:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22d76c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d770:	e1a04000 	mov	r4, r0
        22d774:	e24dd010 	sub	sp, sp, #16	; 0x10
        22d778:	e1a0200d 	mov	r2, sp
        22d77c:	e28d1008 	add	r1, sp, #8	; 0x8
        22d780:	e590c000 	ldr	ip, [r0]
        22d784:	e1a0000c 	mov	r0, ip
        22d788:	e3a03000 	mov	r3, #0	; 0x0
        22d78c:	e59cc000 	ldr	ip, [ip]
        22d790:	e1a0e00f 	mov	lr, pc
        22d794:	e28cf0c4 	add	pc, ip, #196	; 0xc4
        22d798:	e59d000c 	ldr	r0, [sp, #12]
        22d79c:	e2800902 	add	r0, r0, #32768	; 0x8000
        22d7a0:	e1a00840 	mov	r0, r0, asr #16
        22d7a4:	e5c40029 	strb	r0, [r4, #41]	; fField41
        22d7a8:	e1a00440 	mov	r0, r0, asr #8
        22d7ac:	e5c40028 	strb	r0, [r4, #40]	; fField40
        22d7b0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        22d7b4:	e2800902 	add	r0, r0, #32768	; 0x8000
        22d7b8:	e1a00840 	mov	r0, r0, asr #16
        22d7bc:	e5c4002b 	strb	r0, [r4, #43]	; fField43
        22d7c0:	e1a00440 	mov	r0, r0, asr #8
        22d7c4:	e5c4002a 	strb	r0, [r4, #42]	; fField42
        22d7c8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        22d7cc:	e2800902 	add	r0, r0, #32768	; 0x8000
        22d7d0:	e1a00840 	mov	r0, r0, asr #16
        22d7d4:	e5c4002d 	strb	r0, [r4, #45]	; fField45
        22d7d8:	e1a00440 	mov	r0, r0, asr #8
        22d7dc:	e5c4002c 	strb	r0, [r4, #44]	; fField44
        22d7e0:	e59d0000 	ldr	r0, [sp]
        22d7e4:	e2800902 	add	r0, r0, #32768	; 0x8000
        22d7e8:	e1a00840 	mov	r0, r0, asr #16
        22d7ec:	e5c4002f 	strb	r0, [r4, #47]	; fField47
        22d7f0:	e1a00440 	mov	r0, r0, asr #8
        22d7f4:	e5c4002e 	strb	r0, [r4, #46]	; fField46
        22d7f8:	e3a01000 	mov	r1, #0	; 0x0
        22d7fc:	e5940000 	ldr	r0, [r4]
        22d800:	e5902000 	ldr	r2, [r0]
        22d804:	e1a0e00f 	mov	lr, pc
        22d808:	e282f0bc 	add	pc, r2, #188	; 0xbc
        22d80c:	e1b05000 	movs	r5, r0
        22d810:	0a000015 	beq	22d86c <TUnitPublic::SetWordBase(void)+0x108>
        22d814:	e5950000 	ldr	r0, [r5]
        22d818:	eb6703d0 	bl	1bee760 <$Ustrlen>
        22d81c:	e3300001 	teq	r0, #1	; 0x1
        22d820:	1a000011 	bne	22d86c <TUnitPublic::SetWordBase(void)+0x108>
        22d824:	e5950000 	ldr	r0, [r5]
        22d828:	e5900000 	ldr	r0, [r0]
        22d82c:	e1a00820 	mov	r0, r0, lsr #16
        22d830:	e330003f 	teq	r0, #63	; 0x3f
        22d834:	13300021 	teqne	r0, #33	; 0x21
        22d838:	1a00000b 	bne	22d86c <TUnitPublic::SetWordBase(void)+0x108>
        22d83c:	e24dd008 	sub	sp, sp, #8	; 0x8
        22d840:	e1a0100d 	mov	r1, sp
        22d844:	e1a00004 	mov	r0, r4
        22d848:	eb617348 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        22d84c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        22d850:	e1a01841 	mov	r1, r1, asr #16
        22d854:	e5c4102d 	strb	r1, [r4, #45]	; fField45
        22d858:	e1a00441 	mov	r0, r1, asr #8
        22d85c:	e5c4002c 	strb	r0, [r4, #44]	; fField44
        22d860:	e5c41029 	strb	r1, [r4, #41]	; fField41
        22d864:	e5c40028 	strb	r0, [r4, #40]	; fField40
        22d868:	e28dd008 	add	sp, sp, #8	; 0x8
        22d86c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::Strokes(void)
 * Address: 0022d870
 */
TUnitPublic::Strokes(void) {
    /*
        22d870:	e1a0c00d 	mov	ip, sp
        22d874:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22d878:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d87c:	eb62395b 	bl	1abbdf0 <TUnitPublic::$WordInfo(void)>
        22d880:	eb665231 	bl	1bc214c <$AllocateRefHandle(long)>
        22d884:	e1a04000 	mov	r4, r0
        22d888:	e59f0020 	ldr	r0, [pc, #20]	; 22d8b0 <TUnitPublic::Strokes(void)+0x40>	; fField20
        22d88c:	e5900000 	ldr	r0, [r0]
        22d890:	e5901000 	ldr	r1, [r0]
        22d894:	e5940000 	ldr	r0, [r4]
        22d898:	eb665a70 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        22d89c:	e1a05000 	mov	r5, r0
        22d8a0:	e1a00004 	mov	r0, r4
        22d8a4:	eb665644 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22d8a8:	e1a00005 	mov	r0, r5
        22d8ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22d8b0:	00684900 	rsbeq	r4, r8, r0, lsl #18
    */
}

/**
 * Symbol: TUnitPublic::TrainingData(void)
 * Address: 0022d8b4
 */
TUnitPublic::TrainingData(void) {
    /*
        22d8b4:	e1a0c00d 	mov	ip, sp
        22d8b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22d8bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d8c0:	e1a04000 	mov	r4, r0
        22d8c4:	e3a00002 	mov	r0, #2	; 0x2
        22d8c8:	eb66521f 	bl	1bc214c <$AllocateRefHandle(long)>
        22d8cc:	e1a05000 	mov	r5, r0
        22d8d0:	e59f001c 	ldr	r0, [pc, #1c]	; 22d8f4 <TUnitPublic::TrainingData(void)+0x40>
        22d8d4:	e5d00000 	ldrb	r0, [r0]
        22d8d8:	e3300000 	teq	r0, #0	; 0x0
        22d8dc:	1a000005 	bne	22d8f8 <TUnitPublic::TrainingData(void)+0x44>
        22d8e0:	e5954000 	ldr	r4, [r5]
        22d8e4:	e1a00005 	mov	r0, r5
        22d8e8:	eb665633 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        22d8ec:	e1a00004 	mov	r0, r4
        22d8f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22d8f4:	0c101864 	ldceq	8, cr1, [r0], -#400
        22d8f8:	e1a00004 	mov	r0, r4
        22d8fc:	eb61a492 	bl	1a96b4c <TUnitPublic::$GetType(void)>
        22d900:	e1a01000 	mov	r1, r0
        22d904:	e59f0024 	ldr	r0, [pc, #24]	; 22d930 <TUnitPublic::TrainingData(void)+0x7c>	; fField24
        22d908:	e5900014 	ldr	r0, [r0, #20]	; fField20
        22d90c:	eb620fea 	bl	1ab18bc <TRecognizerList::$FindRecognizer(unsigned long)>
        22d910:	e3300000 	teq	r0, #0	; 0x0
        22d914:	0afffff1 	beq	22d8e0 <TUnitPublic::TrainingData(void)+0x2c>
        22d918:	e1a01004 	mov	r1, r4
        22d91c:	e5902000 	ldr	r2, [r0]
        22d920:	e1a0e00f 	mov	lr, pc
        22d924:	e282f044 	add	pc, r2, #68	; 0x44
        22d928:	e5850000 	str	r0, [r5]
        22d92c:	eaffffeb 	b	22d8e0 <TUnitPublic::TrainingData(void)+0x2c>
        22d930:	0c106e88 	ldceq	14, cr6, [r0], -#544
    */
}

/**
 * Symbol: TUnitPublic::StartTime(void)
 * Address: 0022d934
 */
TUnitPublic::StartTime(void) {
    /*
        22d934:	e5900000 	ldr	r0, [r0]
        22d938:	e590001c 	ldr	r0, [r0, #28]	; fField28
        22d93c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnitPublic::FindView(unsigned long)
 * Address: 0022d940
 */
TUnitPublic::FindView(unsigned long) {
    /*
        22d940:	e1a0c00d 	mov	ip, sp
        22d944:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22d948:	e24cb004 	sub	fp, ip, #4	; 0x4
        22d94c:	e1a05000 	mov	r5, r0
        22d950:	e1a04001 	mov	r4, r1
        22d954:	e5900034 	ldr	r0, [r0, #52]
        22d958:	e3300000 	teq	r0, #0	; 0x0
        22d95c:	0a000002 	beq	22d96c <TUnitPublic::FindView(unsigned long)+0x2c>
        22d960:	e5951038 	ldr	r1, [r5, #56]	; fField56
        22d964:	e1310004 	teq	r1, r4
        22d968:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        22d96c:	e59f0048 	ldr	r0, [pc, #48]	; 22d9bc <TUnitPublic::FindView(unsigned long)+0x7c>	; fField48
        22d970:	e5900000 	ldr	r0, [r0]
        22d974:	e5d00021 	ldrb	r0, [r0, #33]
        22d978:	e59f6040 	ldr	r6, [pc, #40]	; 22d9c0 <TUnitPublic::FindView(unsigned long)+0x80>	; fField40
        22d97c:	e3300000 	teq	r0, #0	; 0x0
        22d980:	0a00000f 	beq	22d9c4 <TUnitPublic::FindView(unsigned long)+0x84>
        22d984:	e24dd004 	sub	sp, sp, #4	; 0x4
        22d988:	e5960000 	ldr	r0, [r6]
        22d98c:	e2801010 	add	r1, r0, #16	; 0x10
        22d990:	e1a0000d 	mov	r0, sp
        22d994:	ebfda7ba 	bl	197884 <TRect::MidPoint( const(void))>
        22d998:	e3a03000 	mov	r3, #0	; 0x0
        22d99c:	e3a02402 	mov	r2, #33554432	; 0x2000000
        22d9a0:	e2422c02 	sub	r2, r2, #512	; 0x200
        22d9a4:	e5960000 	ldr	r0, [r6]
        22d9a8:	e59d1000 	ldr	r1, [sp]
        22d9ac:	eb6672dd 	bl	1bca528 <TView::$FindView(TPoint, unsigned long, TPoint *)>
        22d9b0:	e1a07000 	mov	r7, r0
        22d9b4:	e28dd004 	add	sp, sp, #4	; 0x4
        22d9b8:	ea000024 	b	22da50 <TUnitPublic::FindView(unsigned long)+0x110>
        22d9bc:	0c101880 	ldceq	8, cr1, [r0], -#512
        22d9c0:	0c101934 	ldceq	9, cr1, [r0], -#208
        22d9c4:	e24dd008 	sub	sp, sp, #8	; 0x8
        22d9c8:	e1a0100d 	mov	r1, sp
        22d9cc:	e1a00005 	mov	r0, r5
        22d9d0:	eb6172e6 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        22d9d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        22d9d8:	e28d1004 	add	r1, sp, #4	; 0x4
        22d9dc:	e1a0000d 	mov	r0, sp
        22d9e0:	ebfda7a7 	bl	197884 <TRect::MidPoint( const(void))>
        22d9e4:	e1a02004 	mov	r2, r4
        22d9e8:	e3a03000 	mov	r3, #0	; 0x0
        22d9ec:	e5960000 	ldr	r0, [r6]
        22d9f0:	e49d1004 	ldr	r1, [sp], #4	; fField4
        22d9f4:	eb6672cb 	bl	1bca528 <TView::$FindView(TPoint, unsigned long, TPoint *)>
        22d9f8:	e1b07000 	movs	r7, r0
        22d9fc:	1a000012 	bne	22da4c <TUnitPublic::FindView(unsigned long)+0x10c>
        22da00:	e3a0100a 	mov	r1, #10	; 0xa
        22da04:	e24dd008 	sub	sp, sp, #8	; 0x8
        22da08:	e5cd1003 	strb	r1, [sp, #3]
        22da0c:	e3a00000 	mov	r0, #0	; 0x0
        22da10:	e5cd0002 	strb	r0, [sp, #2]
        22da14:	e5cd1001 	strb	r1, [sp, #1]
        22da18:	e5cd0000 	strb	r0, [sp]
        22da1c:	e49d0004 	ldr	r0, [sp], #4	; fField4
        22da20:	e40d0004 	str	r0, [sp], -#4	; fField4
        22da24:	e28d1008 	add	r1, sp, #8	; 0x8
        22da28:	e1a0000d 	mov	r0, sp
        22da2c:	ebfda794 	bl	197884 <TRect::MidPoint( const(void))>
        22da30:	e28d3004 	add	r3, sp, #4	; 0x4
        22da34:	e1a02004 	mov	r2, r4
        22da38:	e5960000 	ldr	r0, [r6]
        22da3c:	e49d1004 	ldr	r1, [sp], #4	; fField4
        22da40:	eb6672b8 	bl	1bca528 <TView::$FindView(TPoint, unsigned long, TPoint *)>
        22da44:	e1a07000 	mov	r7, r0
        22da48:	e28dd004 	add	sp, sp, #4	; 0x4
        22da4c:	e28dd008 	add	sp, sp, #8	; 0x8
        22da50:	e1a02004 	mov	r2, r4
        22da54:	e1a01007 	mov	r1, r7
        22da58:	e1a00005 	mov	r0, r5
        22da5c:	eb6234af 	bl	1abad20 <TUnitPublic::$SetViewHit(TView *, unsigned long)>
        22da60:	e1a00007 	mov	r0, r7
        22da64:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::EndTime(void)
 * Address: 0022da68
 */
TUnitPublic::EndTime(void) {
    /*
        22da68:	e1a0c00d 	mov	ip, sp
        22da6c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        22da70:	e24cb004 	sub	fp, ip, #4	; 0x4
        22da74:	e5900000 	ldr	r0, [r0]
        22da78:	e590102c 	ldr	r1, [r0, #44]	; fField44
        22da7c:	e1a01821 	mov	r1, r1, lsr #16
        22da80:	e59f0014 	ldr	r0, [pc, #14]	; 22da9c <TUnitPublic::EndTime(void)+0x34>
        22da84:	e5900000 	ldr	r0, [r0]
        22da88:	eb64c535 	bl	1b5ef64 <TController::$GetIndexedStroke(unsigned long)>
        22da8c:	e590101c 	ldr	r1, [r0, #28]	; fField28
        22da90:	e5900020 	ldr	r0, [r0, #32]	; fField32
        22da94:	e0810820 	add	r0, r1, r0, lsr #16
        22da98:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        22da9c:	0c10187c 	ldceq	8, cr1, [r0], -#496
    */
}

/**
 * Symbol: TUnitPublic::SetViewHit(TView *, unsigned long)
 * Address: 0022daa0
 */
TUnitPublic::SetViewHit(TView *, unsigned long) {
    /*
        22daa0:	e2800030 	add	r0, r0, #48	; 0x30
        22daa4:	e9a00006 	stmib	r0!, {r1, r2}
        22daa8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnitPublic::InputMask(void)
 * Address: 0022daac
 */
TUnitPublic::InputMask(void) {
    /*
        22daac:	e1a0c00d 	mov	ip, sp
        22dab0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22dab4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22dab8:	e1a04000 	mov	r4, r0
        22dabc:	e3a05000 	mov	r5, #0	; 0x0
        22dac0:	eb623075 	bl	1ab9c9c <TUnitPublic::$RequiredMask(void)>
        22dac4:	e1a01000 	mov	r1, r0
        22dac8:	e1a00004 	mov	r0, r4
        22dacc:	eb620f7b 	bl	1ab18c0 <TUnitPublic::$FindView(unsigned long)>
        22dad0:	e3300000 	teq	r0, #0	; 0x0
        22dad4:	15900008 	ldrne	r0, [r0, #8]	; fField8
        22dad8:	13c054fe 	bicne	r5, r0, #-33554432	; 0xfe000000
        22dadc:	13c550ff 	bicne	r5, r5, #255	; 0xff
        22dae0:	e1a00005 	mov	r0, r5
        22dae4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::Cleanup(void)
 * Address: 0022dae8
 */
TUnitPublic::Cleanup(void) {
    /*
        22dae8:	e5901000 	ldr	r1, [r0]
        22daec:	e5911008 	ldr	r1, [r1, #8]	; fField8
        22daf0:	e59fc028 	ldr	ip, [pc, #28]	; 22db20 <TUnitPublic::Cleanup(void)+0x38>	; fField28
        22daf4:	e131000c 	teq	r1, ip
        22daf8:	11a0f00e 	movne	pc, lr
        22dafc:	e1a0c00d 	mov	ip, sp
        22db00:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        22db04:	e24cb004 	sub	fp, ip, #4	; 0x4
        22db08:	eb61d5b8 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        22db0c:	e3a01001 	mov	r1, #1	; 0x1
        22db10:	eb61b079 	bl	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        22db14:	e59f0008 	ldr	r0, [pc, #8]	; 22db24 <TUnitPublic::Cleanup(void)+0x3c>	; fField8
        22db18:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        22db1c:	ea61b485 	b	1a9ad38 <StrokeCentral::$InvalidateCurrentStroke(void)>
        22db20:	434c494b 	cmpmi	ip, #1228800	; 0x12c000
        22db24:	0c1018cc 	ldceq	8, cr1, [r0], -#816
    */
}

/**
 * Symbol: TUnitPublic::RequiredMask(void)
 * Address: 0022db28
 */
TUnitPublic::RequiredMask(void) {
    /*
        22db28:	e1a0c00d 	mov	ip, sp
        22db2c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22db30:	e24cb004 	sub	fp, ip, #4	; 0x4
        22db34:	e3a04000 	mov	r4, #0	; 0x0
        22db38:	e5900000 	ldr	r0, [r0]
        22db3c:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
        22db40:	e59f0038 	ldr	r0, [pc, #38]	; 22db80 <TUnitPublic::RequiredMask(void)+0x58>
        22db44:	e5900014 	ldr	r0, [r0, #20]	; fField20
        22db48:	eb620f5b 	bl	1ab18bc <TRecognizerList::$FindRecognizer(unsigned long)>
        22db4c:	e3300000 	teq	r0, #0	; 0x0
        22db50:	0a000003 	beq	22db64 <TUnitPublic::RequiredMask(void)+0x3c>
        22db54:	e5901000 	ldr	r1, [r0]
        22db58:	e1a0e00f 	mov	lr, pc
        22db5c:	e281f020 	add	pc, r1, #32	; 0x20
        22db60:	e1a04000 	mov	r4, r0
        22db64:	e3140b01 	tst	r4, #1024	; 0x400
        22db68:	13844617 	orrne	r4, r4, #24117248	; 0x1700000
        22db6c:	13844aef 	orrne	r4, r4, #978944	; 0xef000
        22db70:	e3140b02 	tst	r4, #2048	; 0x800
        22db74:	13844c02 	orrne	r4, r4, #512	; 0x200
        22db78:	e1a00004 	mov	r0, r4
        22db7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22db80:	0c106e88 	ldceq	14, cr6, [r0], -#544
    */
}

/**
 * Symbol: TUnitPublic::IsTap(void)
 * Address: 0022db84
 */
TUnitPublic::IsTap(void) {
    /*
        22db84:	e1a0c00d 	mov	ip, sp
        22db88:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        22db8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        22db90:	e24dd008 	sub	sp, sp, #8	; 0x8
        22db94:	e1a0100d 	mov	r1, sp
        22db98:	eb617274 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        22db9c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        22dba0:	e59d0000 	ldr	r0, [sp]
        22dba4:	e0410000 	sub	r0, r1, r0
        22dba8:	e1a00800 	mov	r0, r0, lsl #16
        22dbac:	e3500806 	cmp	r0, #393216	; 0x60000
        22dbb0:	2a000006 	bcs	22dbd0 <TUnitPublic::IsTap(void)+0x4c>
        22dbb4:	e59d0006 	ldr	r0, [sp, #6]
        22dbb8:	e59d1002 	ldr	r1, [sp, #2]
        22dbbc:	e0400001 	sub	r0, r0, r1
        22dbc0:	e1a00800 	mov	r0, r0, lsl #16
        22dbc4:	e3500806 	cmp	r0, #393216	; 0x60000
        22dbc8:	33a00001 	movcc	r0, #1	; 0x1
        22dbcc:	3a000000 	bcc	22dbd4 <TUnitPublic::IsTap(void)+0x50>
        22dbd0:	e3a00000 	mov	r0, #0	; 0x0
        22dbd4:	e20000ff 	and	r0, r0, #255	; 0xff
        22dbd8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::Stroke(void)
 * Address: 0022dbdc
 */
TUnitPublic::Stroke(void) {
    /*
        22dbdc:	e1a0c00d 	mov	ip, sp
        22dbe0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22dbe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        22dbe8:	e1a04000 	mov	r4, r0
        22dbec:	e590001c 	ldr	r0, [r0, #28]	; fField28
        22dbf0:	e3300000 	teq	r0, #0	; 0x0
        22dbf4:	1a000009 	bne	22dc20 <TUnitPublic::Stroke(void)+0x44>
        22dbf8:	e3a01000 	mov	r1, #0	; 0x0
        22dbfc:	e5940000 	ldr	r0, [r4]
        22dc00:	e5902000 	ldr	r2, [r0]
        22dc04:	e1a0e00f 	mov	lr, pc
        22dc08:	e282f040 	add	pc, r2, #64	; 0x40
        22dc0c:	e3300000 	teq	r0, #0	; 0x0
        22dc10:	0a000002 	beq	22dc20 <TUnitPublic::Stroke(void)+0x44>
        22dc14:	e3a01000 	mov	r1, #0	; 0x0
        22dc18:	eb61b85d 	bl	1a9bd94 <$Make__13TStrokePublicSFP7TStrokeUc>
        22dc1c:	e584001c 	str	r0, [r4, #28]	; fField28
        22dc20:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        22dc24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::Bounds(TRect *)
 * Address: 0022dc28
 */
TUnitPublic::Bounds(TRect *) {
    /*
        22dc28:	e1a0c00d 	mov	ip, sp
        22dc2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22dc30:	e24cb004 	sub	fp, ip, #4	; 0x4
        22dc34:	e1a05000 	mov	r5, r0
        22dc38:	e1a04001 	mov	r4, r1
        22dc3c:	eb61a3c2 	bl	1a96b4c <TUnitPublic::$GetType(void)>
        22dc40:	e1a01000 	mov	r1, r0
        22dc44:	e59f005c 	ldr	r0, [pc, #5c]	; 22dca8 <TUnitPublic::Bounds(TRect *)+0x80>
        22dc48:	e5900014 	ldr	r0, [r0, #20]	; fField20
        22dc4c:	eb620f1a 	bl	1ab18bc <TRecognizerList::$FindRecognizer(unsigned long)>
        22dc50:	e3a029fe 	mov	r2, #4161536	; 0x3f8000
        22dc54:	e2422501 	sub	r2, r2, #4194304	; 0x400000
        22dc58:	e5c42005 	strb	r2, [r4, #5]
        22dc5c:	e3e0107f 	mvn	r1, #127	; 0x7f
        22dc60:	e5c41004 	strb	r1, [r4, #4]	; fField4
        22dc64:	e5c42001 	strb	r2, [r4, #1]
        22dc68:	e5c41000 	strb	r1, [r4]
        22dc6c:	e3300000 	teq	r0, #0	; 0x0
        22dc70:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        22dc74:	e3a01008 	mov	r1, #8	; 0x8
        22dc78:	e5902000 	ldr	r2, [r0]
        22dc7c:	e1a0e00f 	mov	lr, pc
        22dc80:	e282f018 	add	pc, r2, #24	; 0x18
        22dc84:	e3300000 	teq	r0, #0	; 0x0
        22dc88:	0a000007 	beq	22dcac <TUnitPublic::Bounds(TRect *)+0x84>
        22dc8c:	e1a00005 	mov	r0, r5
        22dc90:	eb61d556 	bl	1aa31f0 <TUnitPublic::$Stroke(void)>
        22dc94:	e3300000 	teq	r0, #0	; 0x0
        22dc98:	11a01004 	movne	r1, r4
        22dc9c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        22dca0:	1a617233 	bne	1a8a574 <TStrokePublic::$Bounds(TRect *)>
        22dca4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22dca8:	0c106e88 	ldceq	14, cr6, [r0], -#544
        22dcac:	e24dd010 	sub	sp, sp, #16	; 0x10
        22dcb0:	e1a0100d 	mov	r1, sp
        22dcb4:	e5950000 	ldr	r0, [r5]
        22dcb8:	eb64dd72 	bl	1b65288 <TUnit::$GetBBox(FRect *)>
        22dcbc:	e1a01004 	mov	r1, r4
        22dcc0:	e1a0000d 	mov	r0, sp
        22dcc4:	eb64d54c 	bl	1b631fc <$UnfixRect>
        22dcc8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        22dccc:	e1a00820 	mov	r0, r0, lsr #16
        22dcd0:	e2800001 	add	r0, r0, #1	; 0x1
        22dcd4:	e5c40005 	strb	r0, [r4, #5]
        22dcd8:	e1a00440 	mov	r0, r0, asr #8
        22dcdc:	e5c40004 	strb	r0, [r4, #4]	; fField4
        22dce0:	e5940006 	ldr	r0, [r4, #6]
        22dce4:	e1a00820 	mov	r0, r0, lsr #16
        22dce8:	e2800001 	add	r0, r0, #1	; 0x1
        22dcec:	e5c40007 	strb	r0, [r4, #7]
        22dcf0:	e1a00440 	mov	r0, r0, asr #8
        22dcf4:	e5c40006 	strb	r0, [r4, #6]
        22dcf8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUnitPublic::Invalidate(void)
 * Address: 0022dcfc
 */
TUnitPublic::Invalidate(void) {
    /*
        22dcfc:	e1a0c00d 	mov	ip, sp
        22dd00:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        22dd04:	e24cb004 	sub	fp, ip, #4	; 0x4
        22dd08:	e1a04000 	mov	r4, r0
        22dd0c:	e590001c 	ldr	r0, [r0, #28]	; fField28
        22dd10:	e3300000 	teq	r0, #0	; 0x0
        22dd14:	191b69f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        22dd18:	1a61b404 	bne	1a9ad30 <TStrokePublic::$Invalidate(void)>
        22dd1c:	e24dd008 	sub	sp, sp, #8	; 0x8
        22dd20:	e1a0100d 	mov	r1, sp
        22dd24:	e1a00004 	mov	r0, r4
        22dd28:	eb617210 	bl	1a8a570 <TUnitPublic::$Bounds(TRect *)>
        22dd2c:	e1a0000d 	mov	r0, sp
        22dd30:	eb00003d 	bl	22de2c <AdjustForInk(TRect *)>
        22dd34:	e1a0100d 	mov	r1, sp
        22dd38:	e59f7090 	ldr	r7, [pc, #90]	; 22ddd0 <TUnitPublic::Invalidate(void)+0xd4>
        22dd3c:	e5970000 	ldr	r0, [r7]
        22dd40:	eb61d51b 	bl	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
        22dd44:	e24dd010 	sub	sp, sp, #16	; 0x10
        22dd48:	e3a00000 	mov	r0, #0	; 0x0
        22dd4c:	e58d000c 	str	r0, [sp, #12]
        22dd50:	e58d0008 	str	r0, [sp, #8]	; fField8
        22dd54:	e58d0004 	str	r0, [sp, #4]	; fField4
        22dd58:	e58d0000 	str	r0, [sp]
        22dd5c:	e5940000 	ldr	r0, [r4]
        22dd60:	e5901000 	ldr	r1, [r0]
        22dd64:	e1a0e00f 	mov	lr, pc
        22dd68:	e281f03c 	add	pc, r1, #60	; 0x3c
        22dd6c:	e1a08000 	mov	r8, r0
        22dd70:	e3a06000 	mov	r6, #0	; 0x0
        22dd74:	e3500000 	cmp	r0, #0	; 0x0
        22dd78:	9a00001e 	bls	22ddf8 <TUnitPublic::Invalidate(void)+0xfc>
        22dd7c:	e24dd008 	sub	sp, sp, #8	; 0x8
        22dd80:	e1a01006 	mov	r1, r6
        22dd84:	e5942000 	ldr	r2, [r4]
        22dd88:	e1a00002 	mov	r0, r2
        22dd8c:	e5922000 	ldr	r2, [r2]
        22dd90:	e1a0e00f 	mov	lr, pc
        22dd94:	e282f040 	add	pc, r2, #64	; 0x40
        22dd98:	e1a05000 	mov	r5, r0
        22dd9c:	e1a0100d 	mov	r1, sp
        22dda0:	eb6216fa 	bl	1ab3990 <$GetStrokeRect(TStroke *, TRect *)>
        22dda4:	e1a0000d 	mov	r0, sp
        22dda8:	eb00001f 	bl	22de2c <AdjustForInk(TRect *)>
        22ddac:	e1a00005 	mov	r0, r5
        22ddb0:	e3a01301 	mov	r1, #67108864	; 0x4000000
        22ddb4:	eb64d50b 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        22ddb8:	e3300000 	teq	r0, #0	; 0x0
        22ddbc:	e1a0100d 	mov	r1, sp
        22ddc0:	0a000003 	beq	22ddd4 <TUnitPublic::Invalidate(void)+0xd8>
        22ddc4:	e28d0010 	add	r0, sp, #16	; 0x10
        22ddc8:	eb61dd30 	bl	1aa5290 <TRect::$Union(TRect const &)>
        22ddcc:	ea000005 	b	22dde8 <TUnitPublic::Invalidate(void)+0xec>
        22ddd0:	0c101934 	ldceq	9, cr1, [r0], -#208
        22ddd4:	e28d0008 	add	r0, sp, #8	; 0x8
        22ddd8:	eb61dd2c 	bl	1aa5290 <TRect::$Union(TRect const &)>
        22dddc:	e1a00005 	mov	r0, r5
        22dde0:	e3a01202 	mov	r1, #536870912	; 0x20000000
        22dde4:	eb64d0e2 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        22dde8:	e28dd008 	add	sp, sp, #8	; 0x8
        22ddec:	e2866001 	add	r6, r6, #1	; 0x1
        22ddf0:	e1560008 	cmp	r6, r8
        22ddf4:	3affffe0 	bcc	22dd7c <TUnitPublic::Invalidate(void)+0x80>
        22ddf8:	e28d0008 	add	r0, sp, #8	; 0x8
        22ddfc:	eb648245 	bl	1b4e718 <$EmptyRect(Rect *)>
        22de00:	e3300000 	teq	r0, #0	; 0x0
        22de04:	028d1008 	addeq	r1, sp, #8	; 0x8
        22de08:	05970000 	ldreq	r0, [r7]
        22de0c:	0b61d4e8 	bleq	1aa31b4 <TRootView::$SmartInvalidate(TRect const &)>
        22de10:	e1a0000d 	mov	r0, sp
        22de14:	eb64823f 	bl	1b4e718 <$EmptyRect(Rect *)>
        22de18:	e3300000 	teq	r0, #0	; 0x0
        22de1c:	01a0100d 	moveq	r1, sp
        22de20:	05970000 	ldreq	r0, [r7]
        22de24:	0b61d4e3 	bleq	1aa31b8 <TRootView::$SmartScreenDirty(TRect const &)>
        22de28:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

