#include "include/TArbiter.h"

/**
 * Symbol: Make__8TArbiterSFP11TController
 * Address: 00206bf0
 */
void TArbiter::Make() {
    /*
        206bf0:	e1a0c00d 	mov	ip, sp
        206bf4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        206bf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        206bfc:	e1a04000 	mov	r4, r0
        206c00:	e3a00028 	mov	r0, #40	; 0x28
        206c04:	eb671ecb 	bl	1bce738 <$__nw(unsigned int)>
        206c08:	e1a05000 	mov	r5, r0
        206c0c:	e1a01004 	mov	r1, r4
        206c10:	eb6564e8 	bl	1b5ffb8 <TArbiter::$IArbiter(TController *)>
        206c14:	e1a01005 	mov	r1, r5
        206c18:	e1a00004 	mov	r0, r4
        206c1c:	eb656d3f 	bl	1b62120 <TController::$RegisterArbiter(TArbiter *)>
        206c20:	e1a00005 	mov	r0, r5
        206c24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)
 * Address: 00206cc4
 */
TArbiter::GatherUnits(unsigned long, unsigned char, TArray *) {
    /*
        206cc4:	e1a0c00d 	mov	ip, sp
        206cc8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        206ccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        206cd0:	e1a04000 	mov	r4, r0
        206cd4:	e1a05001 	mov	r5, r1
        206cd8:	e1a06003 	mov	r6, r3
        206cdc:	e20200ff 	and	r0, r2, #255	; 0xff
        206ce0:	e3a07000 	mov	r7, #0	; 0x0
        206ce4:	e52d0004 	str	r0, [sp, -#4]!
        206ce8:	e24dd054 	sub	sp, sp, #84	; 0x54
        206cec:	e5940014 	ldr	r0, [r4, #20]	; fField20
        206cf0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        206cf4:	e3500000 	cmp	r0, #0	; 0x0
        206cf8:	9a00000b 	bls	206d2c <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x68>
        206cfc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        206d00:	e5901000 	ldr	r1, [r0]
        206d04:	e1a0e00f 	mov	lr, pc
        206d08:	e281f018 	add	pc, r1, #24	; 0x18
        206d0c:	e3300000 	teq	r0, #0	; 0x0
        206d10:	0a000091 	beq	206f5c <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x298>
        206d14:	e2877001 	add	r7, r7, #1	; 0x1
        206d18:	e5805000 	str	r5, [r0]
        206d1c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        206d20:	e590000c 	ldr	r0, [r0, #12]	; fField12
        206d24:	e1500007 	cmp	r0, r7
        206d28:	8afffff3 	bhi	206cfc <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x38>
        206d2c:	e3a01000 	mov	r1, #0	; 0x0
        206d30:	e5940014 	ldr	r0, [r4, #20]	; fField20
        206d34:	e5902000 	ldr	r2, [r0]
        206d38:	e1a0e00f 	mov	lr, pc
        206d3c:	e282f01c 	add	pc, r2, #28	; 0x1c
        206d40:	e590a000 	ldr	sl, [r0]
        206d44:	e5940014 	ldr	r0, [r4, #20]	; fField20
        206d48:	e590000c 	ldr	r0, [r0, #12]	; fField12
        206d4c:	e58d0050 	str	r0, [sp, #80]
        206d50:	e2401001 	sub	r1, r0, #1	; 0x1
        206d54:	e5942014 	ldr	r2, [r4, #20]	; fField20
        206d58:	e1a00002 	mov	r0, r2
        206d5c:	e5922000 	ldr	r2, [r2]
        206d60:	e1a0e00f 	mov	lr, pc
        206d64:	e282f01c 	add	pc, r2, #28	; 0x1c
        206d68:	e5900000 	ldr	r0, [r0]
        206d6c:	e58d004c 	str	r0, [sp, #76]
        206d70:	e3a00000 	mov	r0, #0	; 0x0
        206d74:	e58d0000 	str	r0, [sp]
        206d78:	e3a09000 	mov	r9, #0	; 0x0
        206d7c:	e28d1004 	add	r1, sp, #4	; 0x4
        206d80:	e5940008 	ldr	r0, [r4, #8]	; fField8
        206d84:	eb65607a 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        206d88:	e1a0e000 	mov	lr, r0
        206d8c:	e3a08000 	mov	r8, #0	; 0x0
        206d90:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        206d94:	e3500000 	cmp	r0, #0	; 0x0
        206d98:	9a00004b 	bls	206ecc <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x208>
        206d9c:	e28d0024 	add	r0, sp, #36	; 0x24
        206da0:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        206da4:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        206da8:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        206dac:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        206db0:	e89e1008 	ldmia	lr, {r3, ip}
        206db4:	e8801008 	stmia	r0, {r3, ip}
        206db8:	e59d0024 	ldr	r0, [sp, #36]
        206dbc:	e1a07000 	mov	r7, r0
        206dc0:	e3a01502 	mov	r1, #8388608	; 0x800000
        206dc4:	e2811101 	add	r1, r1, #1073741824	; 0x40000000
        206dc8:	eb657106 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        206dcc:	e3300000 	teq	r0, #0	; 0x0
        206dd0:	1a00002e 	bne	206e90 <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x1cc>
        206dd4:	e597002c 	ldr	r0, [r7, #44]
        206dd8:	e15a0820 	cmp	sl, r0, lsr #16
        206ddc:	8a00002b 	bhi	206e90 <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x1cc>
        206de0:	e597002a 	ldr	r0, [r7, #42]
        206de4:	e59d104c 	ldr	r1, [sp, #76]
        206de8:	e1510820 	cmp	r1, r0, lsr #16
        206dec:	3a000027 	bcc	206e90 <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x1cc>
        206df0:	e3a09001 	mov	r9, #1	; 0x1
        206df4:	e1a00007 	mov	r0, r7
        206df8:	e3a01502 	mov	r1, #8388608	; 0x800000
        206dfc:	eb656cdc 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        206e00:	e1a00007 	mov	r0, r7
        206e04:	e594101c 	ldr	r1, [r4, #28]	; fField28
        206e08:	eb6553e6 	bl	1b5bda8 <$ArbiterGetUnitStrokes(TSIUnit *, TDArray *)>
        206e0c:	e3300000 	teq	r0, #0	; 0x0
        206e10:	1a000051 	bne	206f5c <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x298>
        206e14:	e28d304c 	add	r3, sp, #76	; 0x4c
        206e18:	e28d2050 	add	r2, sp, #80	; 0x50
        206e1c:	e92d000c 	stmdb	sp!, {r2, r3}
        206e20:	e1a02005 	mov	r2, r5
        206e24:	e2843014 	add	r3, r4, #20	; 0x14
        206e28:	e893000b 	ldmia	r3, {r0, r1, r3}
        206e2c:	eb6574f3 	bl	1b64200 <$UnionStrokes__FP7TDArrayT1UlT1PUlT5>
        206e30:	e28dd008 	add	sp, sp, #8	; 0x8
        206e34:	e3300000 	teq	r0, #0	; 0x0
        206e38:	1a000047 	bne	206f5c <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x298>
        206e3c:	e1a00006 	mov	r0, r6
        206e40:	e5961000 	ldr	r1, [r6]
        206e44:	e1a0e00f 	mov	lr, pc
        206e48:	e281f018 	add	pc, r1, #24	; 0x18
        206e4c:	e3300000 	teq	r0, #0	; 0x0
        206e50:	0a000041 	beq	206f5c <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x298>
        206e54:	e28de024 	add	lr, sp, #36	; 0x24
        206e58:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        206e5c:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        206e60:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        206e64:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        206e68:	e89e1008 	ldmia	lr, {r3, ip}
        206e6c:	e8801008 	stmia	r0, {r3, ip}
        206e70:	e59d0050 	ldr	r0, [sp, #80]
        206e74:	e3300000 	teq	r0, #0	; 0x0
        206e78:	0a000013 	beq	206ecc <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x208>
        206e7c:	e3a01000 	mov	r1, #0	; 0x0
        206e80:	e594001c 	ldr	r0, [r4, #28]	; fField28
        206e84:	e5902000 	ldr	r2, [r0]
        206e88:	e1a0e00f 	mov	lr, pc
        206e8c:	e282f028 	add	pc, r2, #40	; 0x28
        206e90:	e28d0004 	add	r0, sp, #4	; 0x4
        206e94:	e1a0e00f 	mov	lr, pc
        206e98:	e59df01c 	ldr	pc, [sp, #28]	; fField28
        206e9c:	e1a0e000 	mov	lr, r0
        206ea0:	e2888001 	add	r8, r8, #1	; 0x1
        206ea4:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        206ea8:	e1500008 	cmp	r0, r8
        206eac:	8affffba 	bhi	206d9c <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0xd8>
        206eb0:	e3390000 	teq	r9, #0	; 0x0
        206eb4:	159d0050 	ldrne	r0, [sp, #80]
        206eb8:	13300000 	teqne	r0, #0	; 0x0
        206ebc:	0a000002 	beq	206ecc <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x208>
        206ec0:	e59d0000 	ldr	r0, [sp]
        206ec4:	e3300000 	teq	r0, #0	; 0x0
        206ec8:	0affffaa 	beq	206d78 <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0xb4>
        206ecc:	e59d0054 	ldr	r0, [sp, #84]
        206ed0:	e3300000 	teq	r0, #0	; 0x0
        206ed4:	0a000010 	beq	206f1c <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x258>
        206ed8:	e28d1004 	add	r1, sp, #4	; 0x4
        206edc:	e5940008 	ldr	r0, [r4, #8]	; fField8
        206ee0:	eb656023 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        206ee4:	e3a05000 	mov	r5, #0	; 0x0
        206ee8:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        206eec:	e3510000 	cmp	r1, #0	; 0x0
        206ef0:	9a000009 	bls	206f1c <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x258>
        206ef4:	e5900000 	ldr	r0, [r0]
        206ef8:	e3a01502 	mov	r1, #8388608	; 0x800000
        206efc:	eb6574c2 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        206f00:	e28d0004 	add	r0, sp, #4	; 0x4
        206f04:	e1a0e00f 	mov	lr, pc
        206f08:	e59df01c 	ldr	pc, [sp, #28]	; fField28
        206f0c:	e2855001 	add	r5, r5, #1	; 0x1
        206f10:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        206f14:	e1510005 	cmp	r1, r5
        206f18:	8afffff5 	bhi	206ef4 <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x230>
        206f1c:	e3a01000 	mov	r1, #0	; 0x0
        206f20:	e594001c 	ldr	r0, [r4, #28]	; fField28
        206f24:	e5902000 	ldr	r2, [r0]
        206f28:	e1a0e00f 	mov	lr, pc
        206f2c:	e282f028 	add	pc, r2, #40	; 0x28
        206f30:	e3a01000 	mov	r1, #0	; 0x0
        206f34:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        206f38:	e5902000 	ldr	r2, [r0]
        206f3c:	e1a0e00f 	mov	lr, pc
        206f40:	e282f028 	add	pc, r2, #40	; 0x28
        206f44:	e59d0050 	ldr	r0, [sp, #80]
        206f48:	e3300000 	teq	r0, #0	; 0x0
        206f4c:	13a00000 	movne	r0, #0	; 0x0
        206f50:	03a00001 	moveq	r0, #1	; 0x1
        206f54:	e20000ff 	and	r0, r0, #255	; 0xff
        206f58:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        206f5c:	e5940000 	ldr	r0, [r4]
        206f60:	eb65708c 	bl	1b63198 <TController::$SignalMemoryError(void)>
        206f64:	eaffffec 	b	206f1c <TArbiter::GatherUnits(unsigned long, unsigned char, TArray *)+0x258>
    */
}

/**
 * Symbol: TArbiter::ArbitrateUnits(TRecArea *)
 * Address: 00207118
 */
TArbiter::ArbitrateUnits(TRecArea *) {
    /*
        207118:	e1a0c00d 	mov	ip, sp
        20711c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        207120:	e24cb004 	sub	fp, ip, #4	; 0x4
        207124:	e1a04000 	mov	r4, r0
        207128:	e1a06001 	mov	r6, r1
        20712c:	e24dd048 	sub	sp, sp, #72	; 0x48
        207130:	e59f0150 	ldr	r0, [pc, #150]	; 207288 <TArbiter::ArbitrateUnits(TRecArea *)+0x170>
        207134:	e5900000 	ldr	r0, [r0]
        207138:	e5900018 	ldr	r0, [r0, #24]	; fField24
        20713c:	e5d00021 	ldrb	r0, [r0, #33]	; fField33
        207140:	e3a09000 	mov	r9, #0	; 0x0
        207144:	e59f5140 	ldr	r5, [pc, #140]	; 20728c <TArbiter::ArbitrateUnits(TRecArea *)+0x174>
        207148:	e3300000 	teq	r0, #0	; 0x0
        20714c:	0a00002a 	beq	2071fc <TArbiter::ArbitrateUnits(TRecArea *)+0xe4>
        207150:	e28d1028 	add	r1, sp, #40	; 0x28
        207154:	e594000c 	ldr	r0, [r4, #12]	; fField12
        207158:	eb655f85 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20715c:	e1a0e000 	mov	lr, r0
        207160:	e3a07000 	mov	r7, #0	; 0x0
        207164:	e59d003c 	ldr	r0, [sp, #60]
        207168:	e3500000 	cmp	r0, #0	; 0x0
        20716c:	9a000022 	bls	2071fc <TArbiter::ArbitrateUnits(TRecArea *)+0xe4>
        207170:	e28dd028 	add	sp, sp, #40	; 0x28
        207174:	e28ee028 	add	lr, lr, #40	; 0x28
        207178:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        20717c:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        207180:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        207184:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        207188:	e93e1008 	ldmdb	lr!, {r3, ip}
        20718c:	e92d1008 	stmdb	sp!, {r3, ip}
        207190:	e59d0000 	ldr	r0, [sp]
        207194:	e5900008 	ldr	r0, [r0, #8]	; fField8
        207198:	e1a01005 	mov	r1, r5
        20719c:	eb060e8d 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        2071a0:	e3300000 	teq	r0, #0	; 0x0
        2071a4:	0a00000c 	beq	2071dc <TArbiter::ArbitrateUnits(TRecArea *)+0xc4>
        2071a8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2071ac:	e5901000 	ldr	r1, [r0]
        2071b0:	e1a0e00f 	mov	lr, pc
        2071b4:	e281f018 	add	pc, r1, #24	; 0x18
        2071b8:	e3300000 	teq	r0, #0	; 0x0
        2071bc:	0a0000b7 	beq	2074a0 <TArbiter::ArbitrateUnits(TRecArea *)+0x388>
        2071c0:	e1a0e00d 	mov	lr, sp
        2071c4:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        2071c8:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        2071cc:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        2071d0:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        2071d4:	e89e1008 	ldmia	lr, {r3, ip}
        2071d8:	e8801008 	stmia	r0, {r3, ip}
        2071dc:	e28d0028 	add	r0, sp, #40	; 0x28
        2071e0:	e1a0e00f 	mov	lr, pc
        2071e4:	e59df040 	ldr	pc, [sp, #64]
        2071e8:	e1a0e000 	mov	lr, r0
        2071ec:	e2877001 	add	r7, r7, #1	; 0x1
        2071f0:	e59d003c 	ldr	r0, [sp, #60]
        2071f4:	e1500007 	cmp	r0, r7
        2071f8:	8affffdc 	bhi	207170 <TArbiter::ArbitrateUnits(TRecArea *)+0x58>
        2071fc:	e1a00006 	mov	r0, r6
        207200:	eb656361 	bl	1b5ff8c <$GetRecognitionCase(TRecArea *)>
        207204:	e2400003 	sub	r0, r0, #3	; 0x3
        207208:	e350001c 	cmp	r0, #28	; 0x1c
        20720c:	908ff100 	addls	pc, pc, r0, lsl #2
        207210:	ea00002c 	b	2072c8 <TArbiter::ArbitrateUnits(TRecArea *)+0x1b0>
        207214:	ea00001d 	b	207290 <TArbiter::ArbitrateUnits(TRecArea *)+0x178>
        207218:	ea00002a 	b	2072c8 <TArbiter::ArbitrateUnits(TRecArea *)+0x1b0>
        20721c:	ea00001b 	b	207290 <TArbiter::ArbitrateUnits(TRecArea *)+0x178>
        207220:	ea000020 	b	2072a8 <TArbiter::ArbitrateUnits(TRecArea *)+0x190>
        207224:	ea00001f 	b	2072a8 <TArbiter::ArbitrateUnits(TRecArea *)+0x190>
        207228:	ea000026 	b	2072c8 <TArbiter::ArbitrateUnits(TRecArea *)+0x1b0>
        20722c:	ea000017 	b	207290 <TArbiter::ArbitrateUnits(TRecArea *)+0x178>
        207230:	ea000029 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207234:	ea000028 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207238:	ea000027 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        20723c:	ea000026 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207240:	ea000025 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207244:	ea000024 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207248:	ea00001e 	b	2072c8 <TArbiter::ArbitrateUnits(TRecArea *)+0x1b0>
        20724c:	ea00000f 	b	207290 <TArbiter::ArbitrateUnits(TRecArea *)+0x178>
        207250:	ea000021 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207254:	ea000020 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207258:	ea00001f 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        20725c:	ea00001e 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207260:	ea00001d 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207264:	ea00001c 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207268:	ea00001b 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        20726c:	ea00001a 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207270:	ea000019 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207274:	ea000018 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207278:	ea000017 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        20727c:	ea000016 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207280:	ea000015 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207284:	ea000014 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        207288:	0c10187c 	ldceq	8, cr1, [r0], -#496
        20728c:	5752504c 	ldrplb	r5, [r2, -ip, asr #32]
        207290:	e284100c 	add	r1, r4, #12	; 0xc
        207294:	e8910003 	ldmia	r1, {r0, r1}
        207298:	eb6552c6 	bl	1b5bdb8 <$ArbitrateWithScrubs__FP6TArrayT1>
        20729c:	e3300000 	teq	r0, #0	; 0x0
        2072a0:	1a00007e 	bne	2074a0 <TArbiter::ArbitrateUnits(TRecArea *)+0x388>
        2072a4:	ea00000c 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        2072a8:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2072ac:	e1a00004 	mov	r0, r4
        2072b0:	eb658ca3 	bl	1b6a544 <TArbiter::$ArbitrateGraphicsWords(TArray *)>
        2072b4:	e5940000 	ldr	r0, [r4]
        2072b8:	eb6556e2 	bl	1b5ce48 <TController::$ControllerError(void)>
        2072bc:	e3300000 	teq	r0, #0	; 0x0
        2072c0:	1a000076 	bne	2074a0 <TArbiter::ArbitrateUnits(TRecArea *)+0x388>
        2072c4:	ea000004 	b	2072dc <TArbiter::ArbitrateUnits(TRecArea *)+0x1c4>
        2072c8:	e284100c 	add	r1, r4, #12	; 0xc
        2072cc:	e8910003 	ldmia	r1, {r0, r1}
        2072d0:	eb655f1c 	bl	1b5ef48 <$GetBestInterpretation__FP6TArrayT1>
        2072d4:	e3300000 	teq	r0, #0	; 0x0
        2072d8:	1a000070 	bne	2074a0 <TArbiter::ArbitrateUnits(TRecArea *)+0x388>
        2072dc:	e5940000 	ldr	r0, [r4]
        2072e0:	eb6556d8 	bl	1b5ce48 <TController::$ControllerError(void)>
        2072e4:	e3300000 	teq	r0, #0	; 0x0
        2072e8:	1a00006c 	bne	2074a0 <TArbiter::ArbitrateUnits(TRecArea *)+0x388>
        2072ec:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
        2072f0:	e3300000 	teq	r0, #0	; 0x0
        2072f4:	0a00004d 	beq	207430 <TArbiter::ArbitrateUnits(TRecArea *)+0x318>
        2072f8:	e28d1028 	add	r1, sp, #40	; 0x28
        2072fc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        207300:	eb655f1b 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        207304:	e3a06000 	mov	r6, #0	; 0x0
        207308:	e59d103c 	ldr	r1, [sp, #60]
        20730c:	e3510000 	cmp	r1, #0	; 0x0
        207310:	9a00000f 	bls	207354 <TArbiter::ArbitrateUnits(TRecArea *)+0x23c>
        207314:	e28dd028 	add	sp, sp, #40	; 0x28
        207318:	e2800028 	add	r0, r0, #40	; 0x28
        20731c:	e930500e 	ldmdb	r0!, {r1, r2, r3, ip, lr}
        207320:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        207324:	e930500e 	ldmdb	r0!, {r1, r2, r3, ip, lr}
        207328:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        20732c:	e3a01502 	mov	r1, #8388608	; 0x800000
        207330:	e59d0000 	ldr	r0, [sp]
        207334:	eb656b8e 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        207338:	e28d0028 	add	r0, sp, #40	; 0x28
        20733c:	e1a0e00f 	mov	lr, pc
        207340:	e59df040 	ldr	pc, [sp, #64]
        207344:	e2866001 	add	r6, r6, #1	; 0x1
        207348:	e59d103c 	ldr	r1, [sp, #60]
        20734c:	e1510006 	cmp	r1, r6
        207350:	8affffef 	bhi	207314 <TArbiter::ArbitrateUnits(TRecArea *)+0x1fc>
        207354:	e28d1028 	add	r1, sp, #40	; 0x28
        207358:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20735c:	eb655f04 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        207360:	e1a0e000 	mov	lr, r0
        207364:	e3a07000 	mov	r7, #0	; 0x0
        207368:	e59d003c 	ldr	r0, [sp, #60]
        20736c:	e3500000 	cmp	r0, #0	; 0x0
        207370:	9a00002e 	bls	207430 <TArbiter::ArbitrateUnits(TRecArea *)+0x318>
        207374:	e59f6120 	ldr	r6, [pc, #120]	; 20749c <TArbiter::ArbitrateUnits(TRecArea *)+0x384>
        207378:	e28dd028 	add	sp, sp, #40	; 0x28
        20737c:	e28ee028 	add	lr, lr, #40	; 0x28
        207380:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        207384:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        207388:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        20738c:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        207390:	e93e1008 	ldmdb	lr!, {r3, ip}
        207394:	e92d1008 	stmdb	sp!, {r3, ip}
        207398:	e3a01502 	mov	r1, #8388608	; 0x800000
        20739c:	e59d0000 	ldr	r0, [sp]
        2073a0:	eb656f90 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        2073a4:	e3300000 	teq	r0, #0	; 0x0
        2073a8:	1a000018 	bne	207410 <TArbiter::ArbitrateUnits(TRecArea *)+0x2f8>
        2073ac:	e59d0000 	ldr	r0, [sp]
        2073b0:	e5b08008 	ldr	r8, [r0, #8]!	; fField8
        2073b4:	e1a00008 	mov	r0, r8
        2073b8:	e1a01006 	mov	r1, r6
        2073bc:	eb060e05 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        2073c0:	e3300000 	teq	r0, #0	; 0x0
        2073c4:	1a000011 	bne	207410 <TArbiter::ArbitrateUnits(TRecArea *)+0x2f8>
        2073c8:	e1a00008 	mov	r0, r8
        2073cc:	e1a01005 	mov	r1, r5
        2073d0:	eb060e00 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        2073d4:	e3300000 	teq	r0, #0	; 0x0
        2073d8:	1a00000c 	bne	207410 <TArbiter::ArbitrateUnits(TRecArea *)+0x2f8>
        2073dc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2073e0:	e5901000 	ldr	r1, [r0]
        2073e4:	e1a0e00f 	mov	lr, pc
        2073e8:	e281f018 	add	pc, r1, #24	; 0x18
        2073ec:	e3300000 	teq	r0, #0	; 0x0
        2073f0:	0a00002a 	beq	2074a0 <TArbiter::ArbitrateUnits(TRecArea *)+0x388>
        2073f4:	e1a0e00d 	mov	lr, sp
        2073f8:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        2073fc:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        207400:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        207404:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        207408:	e89e1008 	ldmia	lr, {r3, ip}
        20740c:	e8801008 	stmia	r0, {r3, ip}
        207410:	e28d0028 	add	r0, sp, #40	; 0x28
        207414:	e1a0e00f 	mov	lr, pc
        207418:	e59df040 	ldr	pc, [sp, #64]
        20741c:	e1a0e000 	mov	lr, r0
        207420:	e2877001 	add	r7, r7, #1	; 0x1
        207424:	e59d003c 	ldr	r0, [sp, #60]
        207428:	e1500007 	cmp	r0, r7
        20742c:	8affffd1 	bhi	207378 <TArbiter::ArbitrateUnits(TRecArea *)+0x260>
        207430:	e5940010 	ldr	r0, [r4, #16]	; fField16
        207434:	e590000c 	ldr	r0, [r0, #12]	; fField12
        207438:	e3300000 	teq	r0, #0	; 0x0
        20743c:	13a00001 	movne	r0, #1	; 0x1
        207440:	1a000014 	bne	207498 <TArbiter::ArbitrateUnits(TRecArea *)+0x380>
        207444:	e28d1028 	add	r1, sp, #40	; 0x28
        207448:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20744c:	eb655ec8 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        207450:	e3a06000 	mov	r6, #0	; 0x0
        207454:	e59d103c 	ldr	r1, [sp, #60]
        207458:	e3510000 	cmp	r1, #0	; 0x0
        20745c:	9a00000c 	bls	207494 <TArbiter::ArbitrateUnits(TRecArea *)+0x37c>
        207460:	e3a05501 	mov	r5, #4194304	; 0x400000
        207464:	e2855101 	add	r5, r5, #1073741824	; 0x40000000
        207468:	e5901000 	ldr	r1, [r0]
        20746c:	e1a02005 	mov	r2, r5
        207470:	e5940000 	ldr	r0, [r4]
        207474:	eb656712 	bl	1b610c4 <TController::$MarkUnits(TUnit *, unsigned long)>
        207478:	e28d0028 	add	r0, sp, #40	; 0x28
        20747c:	e1a0e00f 	mov	lr, pc
        207480:	e59df040 	ldr	pc, [sp, #64]
        207484:	e2866001 	add	r6, r6, #1	; 0x1
        207488:	e59d103c 	ldr	r1, [sp, #60]
        20748c:	e1510006 	cmp	r1, r6
        207490:	8afffff4 	bhi	207468 <TArbiter::ArbitrateUnits(TRecArea *)+0x350>
        207494:	e1a00009 	mov	r0, r9
        207498:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        20749c:	53435242 	cmppl	r3, #536870916	; 0x20000004
        2074a0:	e5940000 	ldr	r0, [r4]
        2074a4:	eb656f3b 	bl	1b63198 <TController::$SignalMemoryError(void)>
        2074a8:	eafffff9 	b	207494 <TArbiter::ArbitrateUnits(TRecArea *)+0x37c>
    */
}

/**
 * Symbol: TArbiter::ArbitrateGraphicsWords(TArray *)
 * Address: 0020770c
 */
TArbiter::ArbitrateGraphicsWords(TArray *) {
    /*
        20770c:	e1a0c00d 	mov	ip, sp
        207710:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        207714:	e24cb004 	sub	fp, ip, #4	; 0x4
        207718:	e1a04000 	mov	r4, r0
        20771c:	e3a00000 	mov	r0, #0	; 0x0
        207720:	e3a07000 	mov	r7, #0	; 0x0
        207724:	e1a08007 	mov	r8, r7
        207728:	e3a05000 	mov	r5, #0	; 0x0
        20772c:	e1a06005 	mov	r6, r5
        207730:	e52d0034 	str	r0, [sp, -#52]!
        207734:	e3a00001 	mov	r0, #1	; 0x1
        207738:	e58d0008 	str	r0, [sp, #8]	; fField8
        20773c:	e58d0004 	str	r0, [sp, #4]
        207740:	e28d1010 	add	r1, sp, #16	; 0x10
        207744:	e51b002c 	ldr	r0, [fp, -#44]
        207748:	eb655e09 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20774c:	e3a09000 	mov	r9, #0	; 0x0
        207750:	e59d1024 	ldr	r1, [sp, #36]
        207754:	e3510000 	cmp	r1, #0	; 0x0
        207758:	9a0000a0 	bls	2079e0 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2d4>
        20775c:	e5900000 	ldr	r0, [r0]
        207760:	e1a0a000 	mov	sl, r0
        207764:	e3a01501 	mov	r1, #4194304	; 0x400000
        207768:	eb656e9e 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20776c:	e58d000c 	str	r0, [sp, #12]	; fField12
        207770:	e59a0008 	ldr	r0, [sl, #8]	; fField8
        207774:	e58d0030 	str	r0, [sp, #48]
        207778:	e59f103c 	ldr	r1, [pc, #3c]	; 2077bc <TArbiter::ArbitrateGraphicsWords(TArray *)+0xb0>
        20777c:	eb060d15 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        207780:	e3300000 	teq	r0, #0	; 0x0
        207784:	0a000011 	beq	2077d0 <TArbiter::ArbitrateGraphicsWords(TArray *)+0xc4>
        207788:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        20778c:	e3300000 	teq	r0, #0	; 0x0
        207790:	1a00000a 	bne	2077c0 <TArbiter::ArbitrateGraphicsWords(TArray *)+0xb4>
        207794:	e1a0000a 	mov	r0, sl
        207798:	e3a01000 	mov	r1, #0	; 0x0
        20779c:	e59a2000 	ldr	r2, [sl]
        2077a0:	e1a0e00f 	mov	lr, pc
        2077a4:	e282f068 	add	pc, r2, #104	; 0x68
        2077a8:	e5900004 	ldr	r0, [r0, #4]
        2077ac:	e0806006 	add	r6, r0, r6
        2077b0:	e3a00000 	mov	r0, #0	; 0x0
        2077b4:	e58d0008 	str	r0, [sp, #8]	; fField8
        2077b8:	ea000002 	b	2077c8 <TArbiter::ArbitrateGraphicsWords(TArray *)+0xbc>
        2077bc:	574f5244 	strplb	r5, [pc, -r4, asr #4]
        2077c0:	e2866e71 	add	r6, r6, #1808	; 0x710
        2077c4:	e2866a02 	add	r6, r6, #8192	; 0x2000
        2077c8:	e2888001 	add	r8, r8, #1	; 0x1
        2077cc:	ea000011 	b	207818 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x10c>
        2077d0:	e59d0030 	ldr	r0, [sp, #48]
        2077d4:	e59f102c 	ldr	r1, [pc, #2c]	; 207808 <TArbiter::ArbitrateGraphicsWords(TArray *)+0xfc>
        2077d8:	eb060cfe 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        2077dc:	e3300000 	teq	r0, #0	; 0x0
        2077e0:	0a00000c 	beq	207818 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x10c>
        2077e4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2077e8:	e3300000 	teq	r0, #0	; 0x0
        2077ec:	1a000006 	bne	20780c <TArbiter::ArbitrateGraphicsWords(TArray *)+0x100>
        2077f0:	e1a0000a 	mov	r0, sl
        2077f4:	eb658b53 	bl	1b6a548 <$GetGraphicBiasedScore(TSIUnit *)>
        2077f8:	e0805005 	add	r5, r0, r5
        2077fc:	e3a00000 	mov	r0, #0	; 0x0
        207800:	e58d0004 	str	r0, [sp, #4]
        207804:	ea000002 	b	207814 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x108>
        207808:	47534850 	undefined
        20780c:	e2855e71 	add	r5, r5, #1808	; 0x710
        207810:	e2855a02 	add	r5, r5, #8192	; 0x2000
        207814:	e2877001 	add	r7, r7, #1	; 0x1
        207818:	e28d0010 	add	r0, sp, #16	; 0x10
        20781c:	e1a0e00f 	mov	lr, pc
        207820:	e59df028 	ldr	pc, [sp, #40]
        207824:	e2899001 	add	r9, r9, #1	; 0x1
        207828:	e59d1024 	ldr	r1, [sp, #36]
        20782c:	e1510009 	cmp	r1, r9
        207830:	8affffc9 	bhi	20775c <TArbiter::ArbitrateGraphicsWords(TArray *)+0x50>
        207834:	e3580000 	cmp	r8, #0	; 0x0
        207838:	9a000003 	bls	20784c <TArbiter::ArbitrateGraphicsWords(TArray *)+0x140>
        20783c:	e1a01006 	mov	r1, r6
        207840:	e1a00008 	mov	r0, r8
        207844:	eb66ac3f 	bl	1bb2948 <$__rt_udiv>
        207848:	e1a06000 	mov	r6, r0
        20784c:	e3570000 	cmp	r7, #0	; 0x0
        207850:	9a000003 	bls	207864 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x158>
        207854:	e1a01005 	mov	r1, r5
        207858:	e1a00007 	mov	r0, r7
        20785c:	eb66ac39 	bl	1bb2948 <$__rt_udiv>
        207860:	e1a05000 	mov	r5, r0
        207864:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        207868:	e3300000 	teq	r0, #0	; 0x0
        20786c:	159d0004 	ldrne	r0, [sp, #4]
        207870:	13300000 	teqne	r0, #0	; 0x0
        207874:	1a000059 	bne	2079e0 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2d4>
        207878:	e1a03008 	mov	r3, r8
        20787c:	e1a02006 	mov	r2, r6
        207880:	e92d000c 	stmdb	sp!, {r2, r3}
        207884:	e1a03007 	mov	r3, r7
        207888:	e1a02005 	mov	r2, r5
        20788c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        207890:	e51b002c 	ldr	r0, [fp, -#44]
        207894:	eb655144 	bl	1b5bdac <$ArbitrateByRules__FP6TArrayT1UlN33>
        207898:	e28dd008 	add	sp, sp, #8	; 0x8
        20789c:	e3500000 	cmp	r0, #0	; 0x0
        2078a0:	ba00004f 	blt	2079e4 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2d8>
        2078a4:	ca00004d 	bgt	2079e0 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2d4>
        2078a8:	e51b002c 	ldr	r0, [fp, -#44]
        2078ac:	eb6561ee 	bl	1b6006c <TArray::$Lock(void)>
        2078b0:	e3a00001 	mov	r0, #1	; 0x1
        2078b4:	e58d0000 	str	r0, [sp]
        2078b8:	e28d1010 	add	r1, sp, #16	; 0x10
        2078bc:	e51b002c 	ldr	r0, [fp, -#44]
        2078c0:	eb655dab 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        2078c4:	e1a07000 	mov	r7, r0
        2078c8:	e59f8084 	ldr	r8, [pc, #84]	; 207954 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x248>
        2078cc:	e1560005 	cmp	r6, r5
        2078d0:	e3a05000 	mov	r5, #0	; 0x0
        2078d4:	e59d0024 	ldr	r0, [sp, #36]
        2078d8:	2a00001e 	bcs	207958 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x24c>
        2078dc:	e3500000 	cmp	r0, #0	; 0x0
        2078e0:	9a00003c 	bls	2079d8 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2cc>
        2078e4:	e51f6130 	ldr	r6, [pc, #fffffed0]	; 2077bc <TArbiter::ArbitrateGraphicsWords(TArray *)+0xb0>
        2078e8:	e3a09002 	mov	r9, #2	; 0x2
        2078ec:	e5970000 	ldr	r0, [r7]
        2078f0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2078f4:	e1a01006 	mov	r1, r6
        2078f8:	eb060cb6 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        2078fc:	e3300000 	teq	r0, #0	; 0x0
        207900:	0a00000a 	beq	207930 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x224>
        207904:	e5940010 	ldr	r0, [r4, #16]	; fField16
        207908:	e5901000 	ldr	r1, [r0]
        20790c:	e1a0e00f 	mov	lr, pc
        207910:	e281f018 	add	pc, r1, #24	; 0x18
        207914:	e3300000 	teq	r0, #0	; 0x0
        207918:	0a000031 	beq	2079e4 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2d8>
        20791c:	e8b7500e 	ldmia	r7!, {r1, r2, r3, ip, lr}
        207920:	e8a0500e 	stmia	r0!, {r1, r2, r3, ip, lr}
        207924:	e897500e 	ldmia	r7, {r1, r2, r3, ip, lr}
        207928:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        20792c:	e5889000 	str	r9, [r8]
        207930:	e28d0010 	add	r0, sp, #16	; 0x10
        207934:	e1a0e00f 	mov	lr, pc
        207938:	e59df028 	ldr	pc, [sp, #40]
        20793c:	e1a07000 	mov	r7, r0
        207940:	e2855001 	add	r5, r5, #1	; 0x1
        207944:	e59d0024 	ldr	r0, [sp, #36]
        207948:	e1500005 	cmp	r0, r5
        20794c:	8affffe6 	bhi	2078ec <TArbiter::ArbitrateGraphicsWords(TArray *)+0x1e0>
        207950:	ea00001d 	b	2079cc <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2c0>
        207954:	0c104c64 	ldceq	12, cr4, [r0], -#400
        207958:	e3500000 	cmp	r0, #0	; 0x0
        20795c:	9a00001d 	bls	2079d8 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2cc>
        207960:	e51f6160 	ldr	r6, [pc, #fffffea0]	; 207808 <TArbiter::ArbitrateGraphicsWords(TArray *)+0xfc>
        207964:	e3a09001 	mov	r9, #1	; 0x1
        207968:	e5970000 	ldr	r0, [r7]
        20796c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        207970:	e1a01006 	mov	r1, r6
        207974:	eb060c97 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        207978:	e3300000 	teq	r0, #0	; 0x0
        20797c:	0a00000a 	beq	2079ac <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2a0>
        207980:	e5940010 	ldr	r0, [r4, #16]	; fField16
        207984:	e5901000 	ldr	r1, [r0]
        207988:	e1a0e00f 	mov	lr, pc
        20798c:	e281f018 	add	pc, r1, #24	; 0x18
        207990:	e3300000 	teq	r0, #0	; 0x0
        207994:	0a000012 	beq	2079e4 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2d8>
        207998:	e8b7500e 	ldmia	r7!, {r1, r2, r3, ip, lr}
        20799c:	e8a0500e 	stmia	r0!, {r1, r2, r3, ip, lr}
        2079a0:	e897500e 	ldmia	r7, {r1, r2, r3, ip, lr}
        2079a4:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        2079a8:	e5889000 	str	r9, [r8]
        2079ac:	e28d0010 	add	r0, sp, #16	; 0x10
        2079b0:	e1a0e00f 	mov	lr, pc
        2079b4:	e59df028 	ldr	pc, [sp, #40]
        2079b8:	e1a07000 	mov	r7, r0
        2079bc:	e2855001 	add	r5, r5, #1	; 0x1
        2079c0:	e59d0024 	ldr	r0, [sp, #36]
        2079c4:	e1500005 	cmp	r0, r5
        2079c8:	8affffe6 	bhi	207968 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x25c>
        2079cc:	e59d0000 	ldr	r0, [sp]
        2079d0:	e3300000 	teq	r0, #0	; 0x0
        2079d4:	0a000001 	beq	2079e0 <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2d4>
        2079d8:	e51b002c 	ldr	r0, [fp, -#44]
        2079dc:	eb657208 	bl	1b64204 <TArray::$Unlock(void)>
        2079e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2079e4:	e5940000 	ldr	r0, [r4]
        2079e8:	eb656dea 	bl	1b63198 <TController::$SignalMemoryError(void)>
        2079ec:	eafffff6 	b	2079cc <TArbiter::ArbitrateGraphicsWords(TArray *)+0x2c0>
    */
}

/**
 * Symbol: TArbiter::IArbiter(TController *)
 * Address: 00207d2c
 */
TArbiter::IArbiter(TController *) {
    /*
        207d2c:	e5801000 	str	r1, [r0]
        207d30:	ea657563 	b	1b652c4 <$InitArbiterState(TArbiter *)>
    */
}

/**
 * Symbol: TArbiter::CleanUp(void)
 * Address: 00207de0
 */
TArbiter::CleanUp(void) {
    /*
        207de0:	e1a0c00d 	mov	ip, sp
        207de4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        207de8:	e24cb004 	sub	fp, ip, #4	; 0x4
        207dec:	e1a04000 	mov	r4, r0
        207df0:	e24dd020 	sub	sp, sp, #32	; 0x20
        207df4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        207df8:	e1a0100d 	mov	r1, sp
        207dfc:	eb655c5c 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        207e00:	e3a05000 	mov	r5, #0	; 0x0
        207e04:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        207e08:	e3510000 	cmp	r1, #0	; 0x0
        207e0c:	9a000014 	bls	207e64 <TArbiter::CleanUp(void)+0x84>
        207e10:	e5900000 	ldr	r0, [r0]
        207e14:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        207e18:	eb656cf2 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        207e1c:	e3300000 	teq	r0, #0	; 0x0
        207e20:	0a000008 	beq	207e48 <TArbiter::CleanUp(void)+0x68>
        207e24:	e1a01005 	mov	r1, r5
        207e28:	e5942008 	ldr	r2, [r4, #8]	; fField8
        207e2c:	e1a00002 	mov	r0, r2
        207e30:	e5922000 	ldr	r2, [r2]
        207e34:	e1a0e00f 	mov	lr, pc
        207e38:	e282f040 	add	pc, r2, #64	; 0x40
        207e3c:	e1a0000d 	mov	r0, sp
        207e40:	eb65792f 	bl	1b66304 <$RemoveCurrent(TArrayIterator *)>
        207e44:	e2455001 	sub	r5, r5, #1	; 0x1
        207e48:	e1a0000d 	mov	r0, sp
        207e4c:	e1a0e00f 	mov	lr, pc
        207e50:	e59df018 	ldr	pc, [sp, #24]	; fField24
        207e54:	e2855001 	add	r5, r5, #1	; 0x1
        207e58:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        207e5c:	e1510005 	cmp	r1, r5
        207e60:	8affffea 	bhi	207e10 <TArbiter::CleanUp(void)+0x30>
        207e64:	e5940000 	ldr	r0, [r4]
        207e68:	e590000c 	ldr	r0, [r0, #12]	; fField12
        207e6c:	e1a0100d 	mov	r1, sp
        207e70:	eb655c3f 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        207e74:	e3a05000 	mov	r5, #0	; 0x0
        207e78:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        207e7c:	e3510000 	cmp	r1, #0	; 0x0
        207e80:	9a000013 	bls	207ed4 <TArbiter::CleanUp(void)+0xf4>
        207e84:	e5900000 	ldr	r0, [r0]
        207e88:	e1a06000 	mov	r6, r0
        207e8c:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        207e90:	eb656cd4 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        207e94:	e3300000 	teq	r0, #0	; 0x0
        207e98:	0a000006 	beq	207eb8 <TArbiter::CleanUp(void)+0xd8>
        207e9c:	e1a00006 	mov	r0, r6
        207ea0:	e3a01302 	mov	r1, #134217728	; 0x8000000
        207ea4:	eb656ccf 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        207ea8:	e3300000 	teq	r0, #0	; 0x0
        207eac:	01a01006 	moveq	r1, r6
        207eb0:	05940000 	ldreq	r0, [r4]
        207eb4:	0b65689c 	bleq	1b6212c <TController::$RegroupUnclaimedSubs(TUnit *)>
        207eb8:	e1a0000d 	mov	r0, sp
        207ebc:	e1a0e00f 	mov	lr, pc
        207ec0:	e59df018 	ldr	pc, [sp, #24]	; fField24
        207ec4:	e2855001 	add	r5, r5, #1	; 0x1
        207ec8:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        207ecc:	e1510005 	cmp	r1, r5
        207ed0:	8affffeb 	bhi	207e84 <TArbiter::CleanUp(void)+0xa4>
        207ed4:	e5940000 	ldr	r0, [r4]
        207ed8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        207edc:	e1a0100d 	mov	r1, sp
        207ee0:	eb655c23 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        207ee4:	e3a06000 	mov	r6, #0	; 0x0
        207ee8:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        207eec:	e3510000 	cmp	r1, #0	; 0x0
        207ef0:	9a000017 	bls	207f54 <TArbiter::CleanUp(void)+0x174>
        207ef4:	e5900000 	ldr	r0, [r0]
        207ef8:	e1a05000 	mov	r5, r0
        207efc:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        207f00:	eb656cb8 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        207f04:	e3300000 	teq	r0, #0	; 0x0
        207f08:	0a00000a 	beq	207f38 <TArbiter::CleanUp(void)+0x158>
        207f0c:	e1a00005 	mov	r0, r5
        207f10:	eb6553c1 	bl	1b5ce1c <$ClickInProgress(TUnit *)>
        207f14:	e3300000 	teq	r0, #0	; 0x0
        207f18:	1a000006 	bne	207f38 <TArbiter::CleanUp(void)+0x158>
        207f1c:	e1a00005 	mov	r0, r5
        207f20:	e3a01302 	mov	r1, #134217728	; 0x8000000
        207f24:	eb656caf 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        207f28:	e3300000 	teq	r0, #0	; 0x0
        207f2c:	01a01005 	moveq	r1, r5
        207f30:	05940000 	ldreq	r0, [r4]
        207f34:	0b65687c 	bleq	1b6212c <TController::$RegroupUnclaimedSubs(TUnit *)>
        207f38:	e1a0000d 	mov	r0, sp
        207f3c:	e1a0e00f 	mov	lr, pc
        207f40:	e59df018 	ldr	pc, [sp, #24]	; fField24
        207f44:	e2866001 	add	r6, r6, #1	; 0x1
        207f48:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        207f4c:	e1510006 	cmp	r1, r6
        207f50:	8affffe7 	bhi	207ef4 <TArbiter::CleanUp(void)+0x114>
        207f54:	e5940000 	ldr	r0, [r4]
        207f58:	e590000c 	ldr	r0, [r0, #12]	; fField12
        207f5c:	e1a0100d 	mov	r1, sp
        207f60:	eb655c03 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        207f64:	e3a05000 	mov	r5, #0	; 0x0
        207f68:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        207f6c:	e3510000 	cmp	r1, #0	; 0x0
        207f70:	9a000015 	bls	207fcc <TArbiter::CleanUp(void)+0x1ec>
        207f74:	e5900000 	ldr	r0, [r0]
        207f78:	e1a06000 	mov	r6, r0
        207f7c:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        207f80:	eb656c98 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        207f84:	e3300000 	teq	r0, #0	; 0x0
        207f88:	0a000008 	beq	207fb0 <TArbiter::CleanUp(void)+0x1d0>
        207f8c:	e1a01006 	mov	r1, r6
        207f90:	e5940000 	ldr	r0, [r4]
        207f94:	eb654f95 	bl	1b5bdf0 <TController::$CleanGroupQ(TUnit *)>
        207f98:	e1a01005 	mov	r1, r5
        207f9c:	e5940000 	ldr	r0, [r4]
        207fa0:	eb6553b5 	bl	1b5ce7c <TController::$DeleteUnit(long)>
        207fa4:	e1a0000d 	mov	r0, sp
        207fa8:	eb6578d5 	bl	1b66304 <$RemoveCurrent(TArrayIterator *)>
        207fac:	e2455001 	sub	r5, r5, #1	; 0x1
        207fb0:	e1a0000d 	mov	r0, sp
        207fb4:	e1a0e00f 	mov	lr, pc
        207fb8:	e59df018 	ldr	pc, [sp, #24]	; fField24
        207fbc:	e2855001 	add	r5, r5, #1	; 0x1
        207fc0:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        207fc4:	e1510005 	cmp	r1, r5
        207fc8:	8affffe9 	bhi	207f74 <TArbiter::CleanUp(void)+0x194>
        207fcc:	e5940000 	ldr	r0, [r4]
        207fd0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        207fd4:	e1a0100d 	mov	r1, sp
        207fd8:	eb655be5 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        207fdc:	e3a05000 	mov	r5, #0	; 0x0
        207fe0:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        207fe4:	e3510000 	cmp	r1, #0	; 0x0
        207fe8:	9a000027 	bls	20808c <TArbiter::CleanUp(void)+0x2ac>
        207fec:	e59f710c 	ldr	r7, [pc, #10c]	; 208100 <TArbiter::CleanUp(void)+0x320>
        207ff0:	e5900000 	ldr	r0, [r0]
        207ff4:	e1a06000 	mov	r6, r0
        207ff8:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        207ffc:	eb656c79 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        208000:	e3300000 	teq	r0, #0	; 0x0
        208004:	0a000019 	beq	208070 <TArbiter::CleanUp(void)+0x290>
        208008:	e1a00006 	mov	r0, r6
        20800c:	eb655382 	bl	1b5ce1c <$ClickInProgress(TUnit *)>
        208010:	e3300000 	teq	r0, #0	; 0x0
        208014:	1a000015 	bne	208070 <TArbiter::CleanUp(void)+0x290>
        208018:	e1a01006 	mov	r1, r6
        20801c:	e5940000 	ldr	r0, [r4]
        208020:	eb654f72 	bl	1b5bdf0 <TController::$CleanGroupQ(TUnit *)>
        208024:	e5960008 	ldr	r0, [r6, #8]	; fField8
        208028:	e1300007 	teq	r0, r7
        20802c:	1a000009 	bne	208058 <TArbiter::CleanUp(void)+0x278>
        208030:	e1a00006 	mov	r0, r6
        208034:	e3a01501 	mov	r1, #4194304	; 0x400000
        208038:	eb656c6a 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        20803c:	e3300000 	teq	r0, #0	; 0x0
        208040:	15940000 	ldrne	r0, [r4]
        208044:	15b0103c 	ldrne	r1, [r0, #60]!
        208048:	13310000 	teqne	r1, #0	; 0x0
        20804c:	11a00006 	movne	r0, r6
        208050:	11a0e00f 	movne	lr, pc
        208054:	11a0f001 	movne	pc, r1
        208058:	e1a01005 	mov	r1, r5
        20805c:	e5940000 	ldr	r0, [r4]
        208060:	eb655383 	bl	1b5ce74 <TController::$DeletePiece(long)>
        208064:	e1a0000d 	mov	r0, sp
        208068:	eb6578a5 	bl	1b66304 <$RemoveCurrent(TArrayIterator *)>
        20806c:	e2455001 	sub	r5, r5, #1	; 0x1
        208070:	e1a0000d 	mov	r0, sp
        208074:	e1a0e00f 	mov	lr, pc
        208078:	e59df018 	ldr	pc, [sp, #24]	; fField24
        20807c:	e2855001 	add	r5, r5, #1	; 0x1
        208080:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        208084:	e1510005 	cmp	r1, r5
        208088:	8affffd8 	bhi	207ff0 <TArbiter::CleanUp(void)+0x210>
        20808c:	e5940004 	ldr	r0, [r4, #4]
        208090:	e5901000 	ldr	r1, [r0]
        208094:	e1a0e00f 	mov	lr, pc
        208098:	e281f024 	add	pc, r1, #36	; 0x24
        20809c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2080a0:	e5901000 	ldr	r1, [r0]
        2080a4:	e1a0e00f 	mov	lr, pc
        2080a8:	e281f024 	add	pc, r1, #36	; 0x24
        2080ac:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2080b0:	e5901000 	ldr	r1, [r0]
        2080b4:	e1a0e00f 	mov	lr, pc
        2080b8:	e281f024 	add	pc, r1, #36	; 0x24
        2080bc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2080c0:	e5901000 	ldr	r1, [r0]
        2080c4:	e1a0e00f 	mov	lr, pc
        2080c8:	e281f024 	add	pc, r1, #36	; 0x24
        2080cc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2080d0:	e5901000 	ldr	r1, [r0]
        2080d4:	e1a0e00f 	mov	lr, pc
        2080d8:	e281f024 	add	pc, r1, #36	; 0x24
        2080dc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2080e0:	e5901000 	ldr	r1, [r0]
        2080e4:	e1a0e00f 	mov	lr, pc
        2080e8:	e281f024 	add	pc, r1, #36	; 0x24
        2080ec:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        2080f0:	e5901000 	ldr	r1, [r0]
        2080f4:	e1a0e00f 	mov	lr, pc
        2080f8:	e281f024 	add	pc, r1, #36	; 0x24
        2080fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        208100:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
    */
}

/**
 * Symbol: TArbiter::DoArbitration(void)
 * Address: 002085ec
 */
TArbiter::DoArbitration(void) {
    /*
        2085ec:	e1a0c00d 	mov	ip, sp
        2085f0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2085f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2085f8:	e1a04000 	mov	r4, r0
        2085fc:	e24dd094 	sub	sp, sp, #148	; 0x94
        208600:	e5900004 	ldr	r0, [r0, #4]
        208604:	e590100c 	ldr	r1, [r0, #12]	; fField12
        208608:	e3310000 	teq	r1, #0	; 0x0
        20860c:	0a000127 	beq	208ab0 <TArbiter::DoArbitration(void)+0x4c4>
        208610:	e3a06000 	mov	r6, #0	; 0x0
        208614:	e28d1020 	add	r1, sp, #32	; 0x20
        208618:	eb655a55 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        20861c:	e1a0e000 	mov	lr, r0
        208620:	e3a09000 	mov	r9, #0	; 0x0
        208624:	e59d0034 	ldr	r0, [sp, #52]
        208628:	e3500000 	cmp	r0, #0	; 0x0
        20862c:	9a000110 	bls	208a74 <TArbiter::DoArbitration(void)+0x488>
        208630:	e59f00a8 	ldr	r0, [pc, #a8]	; 2086e0 <TArbiter::DoArbitration(void)+0xf4>
        208634:	e58d0090 	str	r0, [sp, #144]
        208638:	e28d0068 	add	r0, sp, #104	; 0x68
        20863c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        208640:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        208644:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        208648:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        20864c:	e89e1008 	ldmia	lr, {r3, ip}
        208650:	e8801008 	stmia	r0, {r3, ip}
        208654:	e59d0068 	ldr	r0, [sp, #104]
        208658:	e1a05000 	mov	r5, r0
        20865c:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        208660:	eb656ae0 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        208664:	e3300000 	teq	r0, #0	; 0x0
        208668:	1a0000f4 	bne	208a40 <TArbiter::DoArbitration(void)+0x454>
        20866c:	e1a00005 	mov	r0, r5
        208670:	eb657302 	bl	1b65280 <TUnit::$GetArea(void)>
        208674:	e1b08000 	movs	r8, r0
        208678:	0a000114 	beq	208ad0 <TArbiter::DoArbitration(void)+0x4e4>
        20867c:	e5987014 	ldr	r7, [r8, #20]	; fField20
        208680:	e59d0070 	ldr	r0, [sp, #112]
        208684:	e3300000 	teq	r0, #0	; 0x0
        208688:	13370001 	teqne	r7, #1	; 0x1
        20868c:	1a00001a 	bne	2086fc <TArbiter::DoArbitration(void)+0x110>
        208690:	e3a06001 	mov	r6, #1	; 0x1
        208694:	e1a00005 	mov	r0, r5
        208698:	e3a01501 	mov	r1, #4194304	; 0x400000
        20869c:	eb656ad1 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        2086a0:	e3300000 	teq	r0, #0	; 0x0
        2086a4:	1a00000e 	bne	2086e4 <TArbiter::DoArbitration(void)+0xf8>
        2086a8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2086ac:	e5901000 	ldr	r1, [r0]
        2086b0:	e1a0e00f 	mov	lr, pc
        2086b4:	e281f018 	add	pc, r1, #24	; 0x18
        2086b8:	e3300000 	teq	r0, #0	; 0x0
        2086bc:	0a000103 	beq	208ad0 <TArbiter::DoArbitration(void)+0x4e4>
        2086c0:	e28de068 	add	lr, sp, #104	; 0x68
        2086c4:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        2086c8:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        2086cc:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        2086d0:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        2086d4:	e89e1008 	ldmia	lr, {r3, ip}
        2086d8:	e8801008 	stmia	r0, {r3, ip}
        2086dc:	ea00004b 	b	208810 <TArbiter::DoArbitration(void)+0x224>
        2086e0:	0c10187c 	ldceq	8, cr1, [r0], -#496
        2086e4:	e1a01005 	mov	r1, r5
        2086e8:	e3a02501 	mov	r2, #4194304	; 0x400000
        2086ec:	e2822101 	add	r2, r2, #1073741824	; 0x40000000
        2086f0:	e5940000 	ldr	r0, [r4]
        2086f4:	eb656272 	bl	1b610c4 <TController::$MarkUnits(TUnit *, unsigned long)>
        2086f8:	ea0000c6 	b	208a18 <TArbiter::DoArbitration(void)+0x42c>
        2086fc:	e1a00005 	mov	r0, r5
        208700:	e3a01501 	mov	r1, #4194304	; 0x400000
        208704:	eb656ab7 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        208708:	e3300000 	teq	r0, #0	; 0x0
        20870c:	1a000027 	bne	2087b0 <TArbiter::DoArbitration(void)+0x1c4>
        208710:	e28d0068 	add	r0, sp, #104	; 0x68
        208714:	eb654da5 	bl	1b5bdb0 <$ArbitrateEarly(BestMatch *)>
        208718:	e3300000 	teq	r0, #0	; 0x0
        20871c:	0a000023 	beq	2087b0 <TArbiter::DoArbitration(void)+0x1c4>
        208720:	e5940010 	ldr	r0, [r4, #16]	; fField16
        208724:	e5901000 	ldr	r1, [r0]
        208728:	e1a0e00f 	mov	lr, pc
        20872c:	e281f018 	add	pc, r1, #24	; 0x18
        208730:	e3300000 	teq	r0, #0	; 0x0
        208734:	0a0000e5 	beq	208ad0 <TArbiter::DoArbitration(void)+0x4e4>
        208738:	e28de068 	add	lr, sp, #104	; 0x68
        20873c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        208740:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        208744:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        208748:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        20874c:	e89e1008 	ldmia	lr, {r3, ip}
        208750:	e8801008 	stmia	r0, {r3, ip}
        208754:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        208758:	e5940000 	ldr	r0, [r4]
        20875c:	eb656684 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        208760:	e5940010 	ldr	r0, [r4, #16]	; fField16
        208764:	e1a0e00f 	mov	lr, pc
        208768:	e59df084 	ldr	pc, [sp, #132]
        20876c:	e20000ff 	and	r0, r0, #255	; 0xff
        208770:	e1860000 	orr	r0, r6, r0
        208774:	e20060ff 	and	r6, r0, #255	; 0xff
        208778:	e3a01000 	mov	r1, #0	; 0x0
        20877c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        208780:	e5902000 	ldr	r2, [r0]
        208784:	e1a0e00f 	mov	lr, pc
        208788:	e282f028 	add	pc, r2, #40	; 0x28
        20878c:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        208790:	e5940000 	ldr	r0, [r4]
        208794:	eb656e9c 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        208798:	e1a00005 	mov	r0, r5
        20879c:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        2087a0:	eb656a90 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        2087a4:	e3300000 	teq	r0, #0	; 0x0
        2087a8:	13a06001 	movne	r6, #1	; 0x1
        2087ac:	1a000099 	bne	208a18 <TArbiter::DoArbitration(void)+0x42c>
        2087b0:	e28d2068 	add	r2, sp, #104	; 0x68
        2087b4:	e1a01008 	mov	r1, r8
        2087b8:	e1a00004 	mov	r0, r4
        2087bc:	eb656e95 	bl	1b64218 <TArbiter::$WaitingForOtherUnits(TRecArea *, BestMatch *)>
        2087c0:	e1a0a000 	mov	sl, r0
        2087c4:	e5940000 	ldr	r0, [r4]
        2087c8:	eb65519e 	bl	1b5ce48 <TController::$ControllerError(void)>
        2087cc:	e3300000 	teq	r0, #0	; 0x0
        2087d0:	1a0000be 	bne	208ad0 <TArbiter::DoArbitration(void)+0x4e4>
        2087d4:	e33a0000 	teq	sl, #0	; 0x0
        2087d8:	13a08000 	movne	r8, #0	; 0x0
        2087dc:	1a000009 	bne	208808 <TArbiter::DoArbitration(void)+0x21c>
        2087e0:	e1a01008 	mov	r1, r8
        2087e4:	e1a00004 	mov	r0, r4
        2087e8:	eb654d71 	bl	1b5bdb4 <TArbiter::$ArbitrateUnits(TRecArea *)>
        2087ec:	e1a08000 	mov	r8, r0
        2087f0:	e5940000 	ldr	r0, [r4]
        2087f4:	eb655193 	bl	1b5ce48 <TController::$ControllerError(void)>
        2087f8:	e3300000 	teq	r0, #0	; 0x0
        2087fc:	1a0000b3 	bne	208ad0 <TArbiter::DoArbitration(void)+0x4e4>
        208800:	e3380000 	teq	r8, #0	; 0x0
        208804:	03a06001 	moveq	r6, #1	; 0x1
        208808:	e3380000 	teq	r8, #0	; 0x0
        20880c:	0a000081 	beq	208a18 <TArbiter::DoArbitration(void)+0x42c>
        208810:	e3a06001 	mov	r6, #1	; 0x1
        208814:	e3a01000 	mov	r1, #0	; 0x0
        208818:	e5940010 	ldr	r0, [r4, #16]	; fField16
        20881c:	e5902000 	ldr	r2, [r0]
        208820:	e1a0e00f 	mov	lr, pc
        208824:	e282f01c 	add	pc, r2, #28	; 0x1c
        208828:	e1a01000 	mov	r1, r0
        20882c:	e28d0040 	add	r0, sp, #64	; 0x40
        208830:	e3a02028 	mov	r2, #40	; 0x28
        208834:	eb66b085 	bl	1bb4a50 <$memcpy>
        208838:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        20883c:	e5940000 	ldr	r0, [r4]
        208840:	eb65664b 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        208844:	e59d0090 	ldr	r0, [sp, #144]
        208848:	e5900000 	ldr	r0, [r0]
        20884c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        208850:	e5d00021 	ldrb	r0, [r0, #33]	; fField33
        208854:	e3300000 	teq	r0, #0	; 0x0
        208858:	13a01000 	movne	r1, #0	; 0x0
        20885c:	15940010 	ldrne	r0, [r4, #16]	; fField16
        208860:	1b65663e 	blne	1b62160 <$SetCaseAndTime(TArray *, unsigned long)>
        208864:	e5940010 	ldr	r0, [r4, #16]	; fField16
        208868:	e1a0e00f 	mov	lr, pc
        20886c:	e59df05c 	ldr	pc, [sp, #92]
        208870:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        208874:	e5940000 	ldr	r0, [r4]
        208878:	eb656e63 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        20887c:	e1a0100d 	mov	r1, sp
        208880:	e5940010 	ldr	r0, [r4, #16]	; fField16
        208884:	eb6559ba 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        208888:	e3a08000 	mov	r8, #0	; 0x0
        20888c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        208890:	e3510000 	cmp	r1, #0	; 0x0
        208894:	9a000023 	bls	208928 <TArbiter::DoArbitration(void)+0x33c>
        208898:	e59fa228 	ldr	sl, [pc, #228]	; 208ac8 <TArbiter::DoArbitration(void)+0x4dc>
        20889c:	e28de068 	add	lr, sp, #104	; 0x68
        2088a0:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        2088a4:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        2088a8:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        2088ac:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        2088b0:	e8901008 	ldmia	r0, {r3, ip}
        2088b4:	e88e1008 	stmia	lr, {r3, ip}
        2088b8:	e59d0070 	ldr	r0, [sp, #112]
        2088bc:	e3300001 	teq	r0, #1	; 0x1
        2088c0:	1a000011 	bne	20890c <TArbiter::DoArbitration(void)+0x320>
        2088c4:	e59d0068 	ldr	r0, [sp, #104]
        2088c8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2088cc:	e1a0100a 	mov	r1, sl
        2088d0:	eb0608c0 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        2088d4:	e3300000 	teq	r0, #0	; 0x0
        2088d8:	13370001 	teqne	r7, #1	; 0x1
        2088dc:	1a00000a 	bne	20890c <TArbiter::DoArbitration(void)+0x320>
        2088e0:	e59d0068 	ldr	r0, [sp, #104]
        2088e4:	e1a05000 	mov	r5, r0
        2088e8:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        2088ec:	eb656a3d 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        2088f0:	e3300000 	teq	r0, #0	; 0x0
        2088f4:	1a000004 	bne	20890c <TArbiter::DoArbitration(void)+0x320>
        2088f8:	e1a01005 	mov	r1, r5
        2088fc:	e3a02501 	mov	r2, #4194304	; 0x400000
        208900:	e2822101 	add	r2, r2, #1073741824	; 0x40000000
        208904:	e5940000 	ldr	r0, [r4]
        208908:	eb6561ed 	bl	1b610c4 <TController::$MarkUnits(TUnit *, unsigned long)>
        20890c:	e1a0000d 	mov	r0, sp
        208910:	e1a0e00f 	mov	lr, pc
        208914:	e59df018 	ldr	pc, [sp, #24]	; fField24
        208918:	e2888001 	add	r8, r8, #1	; 0x1
        20891c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        208920:	e1510008 	cmp	r1, r8
        208924:	8affffdc 	bhi	20889c <TArbiter::DoArbitration(void)+0x2b0>
        208928:	e3370000 	teq	r7, #0	; 0x0
        20892c:	1a000019 	bne	208998 <TArbiter::DoArbitration(void)+0x3ac>
        208930:	e3a01000 	mov	r1, #0	; 0x0
        208934:	e5940010 	ldr	r0, [r4, #16]	; fField16
        208938:	e5902000 	ldr	r2, [r0]
        20893c:	e1a0e00f 	mov	lr, pc
        208940:	e282f01c 	add	pc, r2, #28	; 0x1c
        208944:	e1a01000 	mov	r1, r0
        208948:	e28d0068 	add	r0, sp, #104	; 0x68
        20894c:	e3a02028 	mov	r2, #40	; 0x28
        208950:	eb66b03e 	bl	1bb4a50 <$memcpy>
        208954:	e59d5068 	ldr	r5, [sp, #104]
        208958:	e5957008 	ldr	r7, [r5, #8]	; fField8
        20895c:	e1a00005 	mov	r0, r5
        208960:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        208964:	eb656a1f 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        208968:	e3300000 	teq	r0, #0	; 0x0
        20896c:	1a000009 	bne	208998 <TArbiter::DoArbitration(void)+0x3ac>
        208970:	e1a00007 	mov	r0, r7
        208974:	e59f1150 	ldr	r1, [pc, #150]	; 208acc <TArbiter::DoArbitration(void)+0x4e0>
        208978:	eb060896 	bl	38abd8 <C$$dtorvec$$Limit+0x264>
        20897c:	e3300000 	teq	r0, #0	; 0x0
        208980:	0a000004 	beq	208998 <TArbiter::DoArbitration(void)+0x3ac>
        208984:	e1a01005 	mov	r1, r5
        208988:	e3a02501 	mov	r2, #4194304	; 0x400000
        20898c:	e2822101 	add	r2, r2, #1073741824	; 0x40000000
        208990:	e5940000 	ldr	r0, [r4]
        208994:	eb6561ca 	bl	1b610c4 <TController::$MarkUnits(TUnit *, unsigned long)>
        208998:	e1a0100d 	mov	r1, sp
        20899c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2089a0:	eb655973 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        2089a4:	e3a07000 	mov	r7, #0	; 0x0
        2089a8:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        2089ac:	e3510000 	cmp	r1, #0	; 0x0
        2089b0:	9a000018 	bls	208a18 <TArbiter::DoArbitration(void)+0x42c>
        2089b4:	e3a08501 	mov	r8, #4194304	; 0x400000
        2089b8:	e2888101 	add	r8, r8, #1073741824	; 0x40000000
        2089bc:	e28de068 	add	lr, sp, #104	; 0x68
        2089c0:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        2089c4:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        2089c8:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        2089cc:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        2089d0:	e8901008 	ldmia	r0, {r3, ip}
        2089d4:	e88e1008 	stmia	lr, {r3, ip}
        2089d8:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        2089dc:	e59d0068 	ldr	r0, [sp, #104]
        2089e0:	eb656a00 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        2089e4:	e3300000 	teq	r0, #0	; 0x0
        2089e8:	1a000003 	bne	2089fc <TArbiter::DoArbitration(void)+0x410>
        2089ec:	e1a01005 	mov	r1, r5
        2089f0:	e1a02008 	mov	r2, r8
        2089f4:	e5940000 	ldr	r0, [r4]
        2089f8:	eb6561b1 	bl	1b610c4 <TController::$MarkUnits(TUnit *, unsigned long)>
        2089fc:	e1a0000d 	mov	r0, sp
        208a00:	e1a0e00f 	mov	lr, pc
        208a04:	e59df018 	ldr	pc, [sp, #24]	; fField24
        208a08:	e2877001 	add	r7, r7, #1	; 0x1
        208a0c:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        208a10:	e1510007 	cmp	r1, r7
        208a14:	8affffe8 	bhi	2089bc <TArbiter::DoArbitration(void)+0x3d0>
        208a18:	e3a01000 	mov	r1, #0	; 0x0
        208a1c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        208a20:	e5902000 	ldr	r2, [r0]
        208a24:	e1a0e00f 	mov	lr, pc
        208a28:	e282f028 	add	pc, r2, #40	; 0x28
        208a2c:	e3a01000 	mov	r1, #0	; 0x0
        208a30:	e5940010 	ldr	r0, [r4, #16]	; fField16
        208a34:	e5902000 	ldr	r2, [r0]
        208a38:	e1a0e00f 	mov	lr, pc
        208a3c:	e282f028 	add	pc, r2, #40	; 0x28
        208a40:	e28d0020 	add	r0, sp, #32	; 0x20
        208a44:	e1a0e00f 	mov	lr, pc
        208a48:	e59df038 	ldr	pc, [sp, #56]
        208a4c:	e1a0e000 	mov	lr, r0
        208a50:	e2899001 	add	r9, r9, #1	; 0x1
        208a54:	e59d0034 	ldr	r0, [sp, #52]
        208a58:	e1500009 	cmp	r0, r9
        208a5c:	8afffef5 	bhi	208638 <TArbiter::DoArbitration(void)+0x4c>
        208a60:	e3360000 	teq	r6, #0	; 0x0
        208a64:	0a000002 	beq	208a74 <TArbiter::DoArbitration(void)+0x488>
        208a68:	eb658ee5 	bl	1b6c604 <$GetTicks(void)>
        208a6c:	e5941000 	ldr	r1, [r4]
        208a70:	e5a1002c 	str	r0, [r1, #44]!
        208a74:	e3a01000 	mov	r1, #0	; 0x0
        208a78:	e594000c 	ldr	r0, [r4, #12]	; fField12
        208a7c:	e5902000 	ldr	r2, [r0]
        208a80:	e1a0e00f 	mov	lr, pc
        208a84:	e282f028 	add	pc, r2, #40	; 0x28
        208a88:	e3a01000 	mov	r1, #0	; 0x0
        208a8c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        208a90:	e5902000 	ldr	r2, [r0]
        208a94:	e1a0e00f 	mov	lr, pc
        208a98:	e282f028 	add	pc, r2, #40	; 0x28
        208a9c:	e3a01000 	mov	r1, #0	; 0x0
        208aa0:	e5940004 	ldr	r0, [r4, #4]
        208aa4:	e5902000 	ldr	r2, [r0]
        208aa8:	e1a0e00f 	mov	lr, pc
        208aac:	e282f028 	add	pc, r2, #40	; 0x28
        208ab0:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
        208ab4:	e3300000 	teq	r0, #0	; 0x0
        208ab8:	13360000 	teqne	r6, #0	; 0x0
        208abc:	11a00004 	movne	r0, r4
        208ac0:	1b654ccc 	blne	1b5bdf8 <TArbiter::$CleanUp(void)>
        208ac4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        208ac8:	53435242 	cmppl	r3, #536870916	; 0x20000004
        208acc:	434c494b 	cmpmi	ip, #1228800	; 0x12c000
        208ad0:	e5940000 	ldr	r0, [r4]
        208ad4:	eb6569af 	bl	1b63198 <TController::$SignalMemoryError(void)>
        208ad8:	eafffff9 	b	208ac4 <TArbiter::DoArbitration(void)+0x4d8>
    */
}

/**
 * Symbol: TArbiter::WaitingForOtherUnits(TRecArea *, BestMatch *)
 * Address: 00208ca8
 */
TArbiter::WaitingForOtherUnits(TRecArea *, BestMatch *) {
    /*
        208ca8:	e1a0c00d 	mov	ip, sp
        208cac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        208cb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        208cb4:	e1a04000 	mov	r4, r0
        208cb8:	e1a06001 	mov	r6, r1
        208cbc:	e1a05002 	mov	r5, r2
        208cc0:	e24dd024 	sub	sp, sp, #36	; 0x24
        208cc4:	e3a07001 	mov	r7, #1	; 0x1
        208cc8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        208ccc:	e5901000 	ldr	r1, [r0]
        208cd0:	e1a0e00f 	mov	lr, pc
        208cd4:	e281f018 	add	pc, r1, #24	; 0x18
        208cd8:	e3300000 	teq	r0, #0	; 0x0
        208cdc:	0a000033 	beq	208db0 <TArbiter::WaitingForOtherUnits(TRecArea *, BestMatch *)+0x108>
        208ce0:	e8b5500e 	ldmia	r5!, {r1, r2, r3, ip, lr}
        208ce4:	e8a0500e 	stmia	r0!, {r1, r2, r3, ip, lr}
        208ce8:	e895500e 	ldmia	r5, {r1, r2, r3, ip, lr}
        208cec:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        208cf0:	e3a00000 	mov	r0, #0	; 0x0
        208cf4:	e5969010 	ldr	r9, [r6, #16]	; fField16
        208cf8:	e58d0000 	str	r0, [sp]
        208cfc:	e28d1004 	add	r1, sp, #4	; 0x4
        208d00:	e5940008 	ldr	r0, [r4, #8]	; fField8
        208d04:	eb65589a 	bl	1b5ef74 <TArray::$GetIterator(TArrayIterator *)>
        208d08:	e1a05000 	mov	r5, r0
        208d0c:	e3a08000 	mov	r8, #0	; 0x0
        208d10:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        208d14:	e3500000 	cmp	r0, #0	; 0x0
        208d18:	9a000022 	bls	208da8 <TArbiter::WaitingForOtherUnits(TRecArea *, BestMatch *)+0x100>
        208d1c:	e5950000 	ldr	r0, [r5]
        208d20:	e1a0a000 	mov	sl, r0
        208d24:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        208d28:	eb65692e 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        208d2c:	e3300000 	teq	r0, #0	; 0x0
        208d30:	05da0024 	ldreqb	r0, [sl, #36]
        208d34:	01300009 	teqeq	r0, r9
        208d38:	0a00000a 	beq	208d68 <TArbiter::WaitingForOtherUnits(TRecArea *, BestMatch *)+0xc0>
        208d3c:	e28d0004 	add	r0, sp, #4	; 0x4
        208d40:	e1a0e00f 	mov	lr, pc
        208d44:	e59df01c 	ldr	pc, [sp, #28]	; fField28
        208d48:	e1a05000 	mov	r5, r0
        208d4c:	e2888001 	add	r8, r8, #1	; 0x1
        208d50:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        208d54:	e1500008 	cmp	r0, r8
        208d58:	8affffef 	bhi	208d1c <TArbiter::WaitingForOtherUnits(TRecArea *, BestMatch *)+0x74>
        208d5c:	e59d0000 	ldr	r0, [sp]
        208d60:	e3300000 	teq	r0, #0	; 0x0
        208d64:	0a00000f 	beq	208da8 <TArbiter::WaitingForOtherUnits(TRecArea *, BestMatch *)+0x100>
        208d68:	e5940008 	ldr	r0, [r4, #8]	; fField8
        208d6c:	eb655cbe 	bl	1b6006c <TArray::$Lock(void)>
        208d70:	e1a02005 	mov	r2, r5
        208d74:	e1a01006 	mov	r1, r6
        208d78:	e1a00004 	mov	r0, r4
        208d7c:	eb654c08 	bl	1b5bda4 <TArbiter::$AllUnitsPresent(TRecArea *, BestMatch *)>
        208d80:	e1a05000 	mov	r5, r0
        208d84:	e5940008 	ldr	r0, [r4, #8]	; fField8
        208d88:	eb656d1d 	bl	1b64204 <TArray::$Unlock(void)>
        208d8c:	e5940000 	ldr	r0, [r4]
        208d90:	eb65502c 	bl	1b5ce48 <TController::$ControllerError(void)>
        208d94:	e3300000 	teq	r0, #0	; 0x0
        208d98:	1a000004 	bne	208db0 <TArbiter::WaitingForOtherUnits(TRecArea *, BestMatch *)+0x108>
        208d9c:	e3350000 	teq	r5, #0	; 0x0
        208da0:	0a000000 	beq	208da8 <TArbiter::WaitingForOtherUnits(TRecArea *, BestMatch *)+0x100>
        208da4:	e3a07000 	mov	r7, #0	; 0x0
        208da8:	e1a00007 	mov	r0, r7
        208dac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        208db0:	e5940000 	ldr	r0, [r4]
        208db4:	eb6568f7 	bl	1b63198 <TController::$SignalMemoryError(void)>
        208db8:	eafffff9 	b	208da4 <TArbiter::WaitingForOtherUnits(TRecArea *, BestMatch *)+0xfc>
    */
}

/**
 * Symbol: TArbiter::AllUnitsPresent(TRecArea *, BestMatch *)
 * Address: 00208dbc
 */
TArbiter::AllUnitsPresent(TRecArea *, BestMatch *) {
    /*
        208dbc:	e1a0c00d 	mov	ip, sp
        208dc0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        208dc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        208dc8:	e1a04000 	mov	r4, r0
        208dcc:	e1a06001 	mov	r6, r1
        208dd0:	e1a05002 	mov	r5, r2
        208dd4:	e5900008 	ldr	r0, [r0, #8]	; fField8
        208dd8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        208ddc:	e3500001 	cmp	r0, #1	; 0x1
        208de0:	93a00000 	movls	r0, #0	; 0x0
        208de4:	991ba8f0 	ldmlsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        208de8:	e5950000 	ldr	r0, [r5]
        208dec:	e1a07000 	mov	r7, r0
        208df0:	e3a01502 	mov	r1, #8388608	; 0x800000
        208df4:	eb6564de 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        208df8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        208dfc:	e5901000 	ldr	r1, [r0]
        208e00:	e1a0e00f 	mov	lr, pc
        208e04:	e281f018 	add	pc, r1, #24	; 0x18
        208e08:	e3300000 	teq	r0, #0	; 0x0
        208e0c:	0a00001d 	beq	208e88 <TArbiter::AllUnitsPresent(TRecArea *, BestMatch *)+0xcc>
        208e10:	e8b5500e 	ldmia	r5!, {r1, r2, r3, ip, lr}
        208e14:	e8a0500e 	stmia	r0!, {r1, r2, r3, ip, lr}
        208e18:	e895500e 	ldmia	r5, {r1, r2, r3, ip, lr}
        208e1c:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        208e20:	e1a00007 	mov	r0, r7
        208e24:	e5941014 	ldr	r1, [r4, #20]	; fField20
        208e28:	eb654bde 	bl	1b5bda8 <$ArbiterGetUnitStrokes(TSIUnit *, TDArray *)>
        208e2c:	e3300000 	teq	r0, #0	; 0x0
        208e30:	1a000014 	bne	208e88 <TArbiter::AllUnitsPresent(TRecArea *, BestMatch *)+0xcc>
        208e34:	e594300c 	ldr	r3, [r4, #12]	; fField12
        208e38:	e5b60014 	ldr	r0, [r6, #20]!	; fField20
        208e3c:	e2401001 	sub	r1, r0, #1	; 0x1
        208e40:	e1a00004 	mov	r0, r4
        208e44:	e3a02001 	mov	r2, #1	; 0x1
        208e48:	eb655838 	bl	1b5ef30 <TArbiter::$GatherUnits(unsigned long, unsigned char, TArray *)>
        208e4c:	e1a05000 	mov	r5, r0
        208e50:	e5940000 	ldr	r0, [r4]
        208e54:	eb654ffb 	bl	1b5ce48 <TController::$ControllerError(void)>
        208e58:	e3300000 	teq	r0, #0	; 0x0
        208e5c:	1a000009 	bne	208e88 <TArbiter::AllUnitsPresent(TRecArea *, BestMatch *)+0xcc>
        208e60:	e3a01000 	mov	r1, #0	; 0x0
        208e64:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        208e68:	e5902000 	ldr	r2, [r0]
        208e6c:	e1a0e00f 	mov	lr, pc
        208e70:	e282f028 	add	pc, r2, #40	; 0x28
        208e74:	e1a00007 	mov	r0, r7
        208e78:	e3a01502 	mov	r1, #8388608	; 0x800000
        208e7c:	eb656ce2 	bl	1b6420c <TRecObject::$UnsetFlags(unsigned long)>
        208e80:	e1a00005 	mov	r0, r5
        208e84:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        208e88:	e5940000 	ldr	r0, [r4]
        208e8c:	eb6568c1 	bl	1b63198 <TController::$SignalMemoryError(void)>
        208e90:	e3a00001 	mov	r0, #1	; 0x1
        208e94:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

