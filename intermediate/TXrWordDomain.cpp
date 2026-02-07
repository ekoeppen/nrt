#include "include/TXrWordDomain.h"

/**
 * Symbol: Make__13TXrWordDomainSFP11TController
 * Address: 0024dff4
 */
void TXrWordDomain::Make() {
    /*
        24dff4:	e1a0c00d 	mov	ip, sp
        24dff8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24dffc:	e24cb004 	sub	fp, ip, #4	; 0x4
        24e000:	e1a04000 	mov	r4, r0
        24e004:	e3a00e16 	mov	r0, #352	; 0x160
        24e008:	eb6601ca 	bl	1bce738 <$__nw(unsigned int)>
        24e00c:	e1b05000 	movs	r5, r0
        24e010:	0a000003 	beq	24e024 <Make__13TXrWordDomainSFP11TController+0x30>
        24e014:	e1a00005 	mov	r0, r5
        24e018:	eb64334a 	bl	1b5ad48 <TDomain::$__ct(void)>
        24e01c:	e59f0014 	ldr	r0, [pc, #14]	; 24e038 <Make__13TXrWordDomainSFP11TController+0x44>
        24e020:	e5850000 	str	r0, [r5]
        24e024:	e1a01004 	mov	r1, r4
        24e028:	e1a00005 	mov	r0, r5
        24e02c:	eb633755 	bl	1b1bd88 <TXrWordDomain::$IXrWordDomain(TController *)>
        24e030:	e1a00005 	mov	r0, r5
        24e034:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24e038:	0001d368 	andeq	sp, r1, r8, ror #6
    */
}

/**
 * Symbol: TXrWordDomain::IXrWordDomain(TController *)
 * Address: 0024e03c
 */
TXrWordDomain::IXrWordDomain(TController *) {
    /*
        24e03c:	e1a0c00d 	mov	ip, sp
        24e040:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24e044:	e24cb004 	sub	fp, ip, #4	; 0x4
        24e048:	e1a04000 	mov	r4, r0
        24e04c:	e1a05001 	mov	r5, r1
        24e050:	e28f3f0a 	add	r3, pc, #40	; 0x28
        24e054:	e59f2038 	ldr	r2, [pc, #38]	; 24e094 <TXrWordDomain::IXrWordDomain(TController *)+0x58>
        24e058:	eb6447e6 	bl	1b5fff8 <TDomain::$IDomain(TController *, unsigned long, char *)>
        24e05c:	e3a00000 	mov	r0, #0	; 0x0
        24e060:	e5840018 	str	r0, [r4, #24]	; fField24
        24e064:	e1a00004 	mov	r0, r4
        24e068:	e59f1028 	ldr	r1, [pc, #28]	; 24e098 <TXrWordDomain::IXrWordDomain(TController *)+0x5c>
        24e06c:	eb643342 	bl	1b5ad7c <TDomain::$AddPieceType(unsigned long)>
        24e070:	e1a01004 	mov	r1, r4
        24e074:	e1a00005 	mov	r0, r5
        24e078:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        24e07c:	ea645028 	b	1b62124 <TController::$RegisterDomain(TDomain *)>
        24e080:	58727320 	ldmplda	r2!, {r5, r8, r9, ip, sp, lr}^
        24e084:	746f2057 	strvcbt	r2, [pc], #57	; 24e08c <TXrWordDomain::IXrWordDomain(TController *)+0x50>
        24e088:	6f726420 	swivs	0x00726420
        24e08c:	446f6d61 	strmibt	r6, [pc], #d61	; 24e094 <TXrWordDomain::IXrWordDomain(TController *)+0x58>
        24e090:	696e0000 	stmvsdb	lr!, {}^
        24e094:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
        24e098:	53545852 	cmppl	r4, #5373952	; 0x520000
    */
}

/**
 * Symbol: TXrWordDomain::ClassifyXrWord(TXrWordUnit *)
 * Address: 0024e09c
 */
TXrWordDomain::ClassifyXrWord(TXrWordUnit *) {
    /*
        24e09c:	e1a0c00d 	mov	ip, sp
        24e0a0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        24e0a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        24e0a8:	e1a05000 	mov	r5, r0
        24e0ac:	e1a04001 	mov	r4, r1
        24e0b0:	e24dd008 	sub	sp, sp, #8	; 0x8
        24e0b4:	e3a00000 	mov	r0, #0	; 0x0
        24e0b8:	e3a0a000 	mov	sl, #0	; 0x0
        24e0bc:	e58d0004 	str	r0, [sp, #4]	; fField4
        24e0c0:	e5cda001 	strb	sl, [sp, #1]
        24e0c4:	e5cda000 	strb	sl, [sp]
        24e0c8:	e1a00001 	mov	r0, r1
        24e0cc:	e1a02001 	mov	r2, r1
        24e0d0:	e3a01000 	mov	r1, #0	; 0x0
        24e0d4:	e5922000 	ldr	r2, [r2]
        24e0d8:	e1a0e00f 	mov	lr, pc
        24e0dc:	e282f058 	add	pc, r2, #88	; 0x58
        24e0e0:	e1b06000 	movs	r6, r0
        24e0e4:	0a000066 	beq	24e284 <TXrWordDomain::ClassifyXrWord(TXrWordUnit *)+0x1e8>
        24e0e8:	e5d600ad 	ldrb	r0, [r6, #173]
        24e0ec:	e3300000 	teq	r0, #0	; 0x0
        24e0f0:	1a000063 	bne	24e284 <TXrWordDomain::ClassifyXrWord(TXrWordUnit *)+0x1e8>
        24e0f4:	e5968074 	ldr	r8, [r6, #116]
        24e0f8:	e3380000 	teq	r8, #0	; 0x0
        24e0fc:	0a000060 	beq	24e284 <TXrWordDomain::ClassifyXrWord(TXrWordUnit *)+0x1e8>
        24e100:	e5969072 	ldr	r9, [r6, #114]
        24e104:	e1a09849 	mov	r9, r9, asr #16
        24e108:	e3a07000 	mov	r7, #0	; 0x0
        24e10c:	e3590000 	cmp	r9, #0	; 0x0
        24e110:	da00002a 	ble	24e1c0 <TXrWordDomain::ClassifyXrWord(TXrWordUnit *)+0x124>
        24e114:	e5d80000 	ldrb	r0, [r8]
        24e118:	e3300000 	teq	r0, #0	; 0x0
        24e11c:	15980048 	ldrne	r0, [r8, #72]
        24e120:	11a00840 	movne	r0, r0, asr #16
        24e124:	13300000 	teqne	r0, #0	; 0x0
        24e128:	0a000024 	beq	24e1c0 <TXrWordDomain::ClassifyXrWord(TXrWordUnit *)+0x124>
        24e12c:	e1a00004 	mov	r0, r4
        24e130:	e5941000 	ldr	r1, [r4]
        24e134:	e1a0e00f 	mov	lr, pc
        24e138:	e281f0ac 	add	pc, r1, #172	; 0xac
        24e13c:	e3700001 	cmn	r0, #1	; 0x1
        24e140:	0a00001e 	beq	24e1c0 <TXrWordDomain::ClassifyXrWord(TXrWordUnit *)+0x124>
        24e144:	e1a02008 	mov	r2, r8
        24e148:	e1a01007 	mov	r1, r7
        24e14c:	e1a00004 	mov	r0, r4
        24e150:	e5943000 	ldr	r3, [r4]
        24e154:	e1a0e00f 	mov	lr, pc
        24e158:	e283f0b4 	add	pc, r3, #180	; 0xb4
        24e15c:	e1a03004 	mov	r3, r4
        24e160:	e5980048 	ldr	r0, [r8, #72]
        24e164:	e1a00840 	mov	r0, r0, asr #16
        24e168:	e2700064 	rsbs	r0, r0, #100	; 0x64
        24e16c:	42600000 	rsbmi	r0, r0, #0	; 0x0
        24e170:	e0802100 	add	r2, r0, r0, lsl #2
        24e174:	e1a02082 	mov	r2, r2, lsl #1
        24e178:	e1a01007 	mov	r1, r7
        24e17c:	e1a00003 	mov	r0, r3
        24e180:	e5933000 	ldr	r3, [r3]
        24e184:	e1a0e00f 	mov	lr, pc
        24e188:	e283f0a0 	add	pc, r3, #160	; 0xa0
        24e18c:	e598204a 	ldr	r2, [r8, #74]
        24e190:	e1b02842 	movs	r2, r2, asr #16
        24e194:	e1a03004 	mov	r3, r4
        24e198:	e1a01007 	mov	r1, r7
        24e19c:	e1a00004 	mov	r0, r4
        24e1a0:	43e02003 	mvnmi	r2, #3	; 0x3
        24e1a4:	e5933000 	ldr	r3, [r3]
        24e1a8:	e1a0e00f 	mov	lr, pc
        24e1ac:	e283f09c 	add	pc, r3, #156	; 0x9c
        24e1b0:	e2877001 	add	r7, r7, #1	; 0x1
        24e1b4:	e2888050 	add	r8, r8, #80	; 0x50
        24e1b8:	e1570009 	cmp	r7, r9
        24e1bc:	baffffd4 	blt	24e114 <TXrWordDomain::ClassifyXrWord(TXrWordUnit *)+0x78>
        24e1c0:	e284003c 	add	r0, r4, #60	; 0x3c
        24e1c4:	e286e040 	add	lr, r6, #64	; 0x40
        24e1c8:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        24e1cc:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        24e1d0:	e89e500e 	ldmia	lr, {r1, r2, r3, ip, lr}
        24e1d4:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        24e1d8:	e5960078 	ldr	r0, [r6, #120]
        24e1dc:	e5840060 	str	r0, [r4, #96]
        24e1e0:	e586a078 	str	sl, [r6, #120]
        24e1e4:	e59500da 	ldr	r0, [r5, #218]	; fField218
        24e1e8:	e1a00820 	mov	r0, r0, lsr #16
        24e1ec:	e3100002 	tst	r0, #2	; 0x2
        24e1f0:	0a000010 	beq	24e238 <TXrWordDomain::ClassifyXrWord(TXrWordUnit *)+0x19c>
        24e1f4:	e1a0200d 	mov	r2, sp
        24e1f8:	e28d1004 	add	r1, sp, #4	; 0x4
        24e1fc:	e1a00006 	mov	r0, r6
        24e200:	eb6332c0 	bl	1b1ad08 <$GetTraceFromStrXrUnit(TStrXrUnit *, PS_point_type **, short *)>
        24e204:	e5d630ac 	ldrb	r3, [r6, #172]
        24e208:	e3330000 	teq	r3, #0	; 0x0
        24e20c:	159d0004 	ldrne	r0, [sp, #4]	; fField4
        24e210:	13300000 	teqne	r0, #0	; 0x0
        24e214:	0a000007 	beq	24e238 <TXrWordDomain::ClassifyXrWord(TXrWordUnit *)+0x19c>
        24e218:	e92d0008 	stmdb	sp!, {r3}
        24e21c:	e59630aa 	ldr	r3, [r6, #170]
        24e220:	e1a03843 	mov	r3, r3, asr #16
        24e224:	e59620a8 	ldr	r2, [r6, #168]
        24e228:	e1a02842 	mov	r2, r2, asr #16
        24e22c:	e28d1004 	add	r1, sp, #4	; 0x4
        24e230:	eb638135 	bl	1b2e70c <$GCMergeLinesAndRemoveDash__FP13PS_point_typePssT3Uc>
        24e234:	e28dd004 	add	sp, sp, #4	; 0x4
        24e238:	e3a03000 	mov	r3, #0	; 0x0
        24e23c:	e3a02000 	mov	r2, #0	; 0x0
        24e240:	e5961072 	ldr	r1, [r6, #114]
        24e244:	e1a01841 	mov	r1, r1, asr #16
        24e248:	e5b60074 	ldr	r0, [r6, #116]!
        24e24c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        24e250:	e59d1010 	ldr	r1, [sp, #16]
        24e254:	e1a01841 	mov	r1, r1, asr #16
        24e258:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        24e25c:	e59510da 	ldr	r1, [r5, #218]	; fField218
        24e260:	e1a01821 	mov	r1, r1, lsr #16
        24e264:	e2840060 	add	r0, r4, #96	; 0x60
        24e268:	e3a02000 	mov	r2, #0	; 0x0
        24e26c:	e59d3020 	ldr	r3, [sp, #32]
        24e270:	eb6395c9 	bl	1b3399c <$GCFillLearningHandle(unsigned long *, unsigned short, rc_type *, PS_point_type *, short, xrdata_type *, RWG_type *, rec_w_type *, xrdata_type *, void *, unsigned long)>
        24e274:	e28dd01c 	add	sp, sp, #28	; 0x1c
        24e278:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        24e27c:	e3300000 	teq	r0, #0	; 0x0
        24e280:	1b60854e 	blne	1a6f7c0 <$HWRMemoryFree(void *)>
        24e284:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXrWordDomain::Dispose(void)
 * Address: 0024ea2c
 */
TXrWordDomain::Dispose(void) {
    /*
        24ea2c:	ea643d1a 	b	1b5de9c <TDomain::$Dispose(void)>
    */
}

/**
 * Symbol: TXrWordDomain::Classify(TUnit *)
 * Address: 0024ea30
 */
TXrWordDomain::Classify(TUnit *) {
    /*
        24ea30:	e1a0c00d 	mov	ip, sp
        24ea34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24ea38:	e24cb004 	sub	fp, ip, #4	; 0x4
        24ea3c:	e1a05000 	mov	r5, r0
        24ea40:	e1a04001 	mov	r4, r1
        24ea44:	e1a00001 	mov	r0, r1
        24ea48:	e3a01501 	mov	r1, #4194304	; 0x400000
        24ea4c:	eb6451e5 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        24ea50:	e3300000 	teq	r0, #0	; 0x0
        24ea54:	1a000012 	bne	24eaa4 <TXrWordDomain::Classify(TUnit *)+0x74>
        24ea58:	e1a01004 	mov	r1, r4
        24ea5c:	e1a00005 	mov	r0, r5
        24ea60:	eb6338ef 	bl	1b1ce24 <$SetUpChains(TXrWordDomain *, TUnit *)>
        24ea64:	e1a01004 	mov	r1, r4
        24ea68:	e1a00005 	mov	r0, r5
        24ea6c:	eb632880 	bl	1b18c74 <TXrWordDomain::$ClassifyXrWord(TXrWordUnit *)>
        24ea70:	e1a00004 	mov	r0, r4
        24ea74:	e5941000 	ldr	r1, [r4]
        24ea78:	e1a0e00f 	mov	lr, pc
        24ea7c:	e281f020 	add	pc, r1, #32	; 0x20
        24ea80:	e3300000 	teq	r0, #0	; 0x0
        24ea84:	1a000006 	bne	24eaa4 <TXrWordDomain::Classify(TUnit *)+0x74>
        24ea88:	e1a00004 	mov	r0, r4
        24ea8c:	e3a01501 	mov	r1, #4194304	; 0x400000
        24ea90:	eb644db7 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        24ea94:	e1a00004 	mov	r0, r4
        24ea98:	e5941000 	ldr	r1, [r4]
        24ea9c:	e1a0e00f 	mov	lr, pc
        24eaa0:	e281f060 	add	pc, r1, #96	; 0x60
        24eaa4:	e1a01004 	mov	r1, r4
        24eaa8:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        24eaac:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        24eab0:	ea644988 	b	1b610d8 <TController::$NewClassification(TUnit *)>
    */
}

/**
 * Symbol: TXrWordDomain::Reclassify(TUnit *)
 * Address: 0024eab4
 */
TXrWordDomain::Reclassify(TUnit *) {
    /*
        24eab4:	e1a0c00d 	mov	ip, sp
        24eab8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24eabc:	e24cb004 	sub	fp, ip, #4	; 0x4
        24eac0:	e1a05000 	mov	r5, r0
        24eac4:	e1a04001 	mov	r4, r1
        24eac8:	eb6338d5 	bl	1b1ce24 <$SetUpChains(TXrWordDomain *, TUnit *)>
        24eacc:	e1a00004 	mov	r0, r4
        24ead0:	e5941000 	ldr	r1, [r4]
        24ead4:	e1a0e00f 	mov	lr, pc
        24ead8:	e281f020 	add	pc, r1, #32	; 0x20
        24eadc:	e2506001 	subs	r6, r0, #1	; 0x1
        24eae0:	4a000006 	bmi	24eb00 <TXrWordDomain::Reclassify(TUnit *)+0x4c>
        24eae4:	e1a01006 	mov	r1, r6
        24eae8:	e1a00004 	mov	r0, r4
        24eaec:	e5942000 	ldr	r2, [r4]
        24eaf0:	e1a0e00f 	mov	lr, pc
        24eaf4:	e282f070 	add	pc, r2, #112	; 0x70
        24eaf8:	e2566001 	subs	r6, r6, #1	; 0x1
        24eafc:	5afffff8 	bpl	24eae4 <TXrWordDomain::Reclassify(TUnit *)+0x30>
        24eb00:	e5940060 	ldr	r0, [r4, #96]
        24eb04:	e3300000 	teq	r0, #0	; 0x0
        24eb08:	0a000002 	beq	24eb18 <TXrWordDomain::Reclassify(TUnit *)+0x64>
        24eb0c:	eb608329 	bl	1a6f7b8 <$HWRMemoryFreeHandle(unsigned long)>
        24eb10:	e3a00000 	mov	r0, #0	; 0x0
        24eb14:	e5840060 	str	r0, [r4, #96]
        24eb18:	e1a01004 	mov	r1, r4
        24eb1c:	e1a00005 	mov	r0, r5
        24eb20:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        24eb24:	ea632852 	b	1b18c74 <TXrWordDomain::$ClassifyXrWord(TXrWordUnit *)>
    */
}

/**
 * Symbol: TXrWordDomain::Group(TUnit *, dInfoRec *)
 * Address: 0024eb28
 */
TXrWordDomain::Group(TUnit *, dInfoRec *) {
    /*
        24eb28:	e1a0c00d 	mov	ip, sp
        24eb2c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24eb30:	e24cb004 	sub	fp, ip, #4	; 0x4
        24eb34:	e1a05000 	mov	r5, r0
        24eb38:	e1a04001 	mov	r4, r1
        24eb3c:	e3a08000 	mov	r8, #0	; 0x0
        24eb40:	e1a00001 	mov	r0, r1
        24eb44:	e3a01302 	mov	r1, #134217728	; 0x8000000
        24eb48:	eb6451a6 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        24eb4c:	e3300000 	teq	r0, #0	; 0x0
        24eb50:	1a000027 	bne	24ebf4 <TXrWordDomain::Group(TUnit *, dInfoRec *)+0xcc>
        24eb54:	e1a00004 	mov	r0, r4
        24eb58:	eb6459c9 	bl	1b65284 <TUnit::$GetAreas(void)>
        24eb5c:	e1a07000 	mov	r7, r0
        24eb60:	e5d40024 	ldrb	r0, [r4, #36]
        24eb64:	e2801001 	add	r1, r0, #1	; 0x1
        24eb68:	e1a02007 	mov	r2, r7
        24eb6c:	e1a00005 	mov	r0, r5
        24eb70:	eb63348f 	bl	1b1bdb4 <$Make__11TXrWordUnitSFP7TDomainUlP6TArray>
        24eb74:	e1a06000 	mov	r6, r0
        24eb78:	e3370000 	teq	r7, #0	; 0x0
        24eb7c:	11a00007 	movne	r0, r7
        24eb80:	11a0e00f 	movne	lr, pc
        24eb84:	1597f000 	ldrne	pc, [r7]
        24eb88:	e3360000 	teq	r6, #0	; 0x0
        24eb8c:	0a000014 	beq	24ebe4 <TXrWordDomain::Group(TUnit *, dInfoRec *)+0xbc>
        24eb90:	e1a01004 	mov	r1, r4
        24eb94:	e1a00006 	mov	r0, r6
        24eb98:	e5962000 	ldr	r2, [r6]
        24eb9c:	e1a0e00f 	mov	lr, pc
        24eba0:	e282f054 	add	pc, r2, #84	; 0x54
        24eba4:	e1a00004 	mov	r0, r4
        24eba8:	e3a01501 	mov	r1, #4194304	; 0x400000
        24ebac:	eb64518d 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        24ebb0:	e3300000 	teq	r0, #0	; 0x0
        24ebb4:	0a000006 	beq	24ebd4 <TXrWordDomain::Group(TUnit *, dInfoRec *)+0xac>
        24ebb8:	e1a00006 	mov	r0, r6
        24ebbc:	e3a01501 	mov	r1, #4194304	; 0x400000
        24ebc0:	eb644d6b 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        24ebc4:	e1a00006 	mov	r0, r6
        24ebc8:	e5961000 	ldr	r1, [r6]
        24ebcc:	e1a0e00f 	mov	lr, pc
        24ebd0:	e281f060 	add	pc, r1, #96	; 0x60
        24ebd4:	e1a01006 	mov	r1, r6
        24ebd8:	e5950008 	ldr	r0, [r5, #8]	; fField8
        24ebdc:	eb64493f 	bl	1b610e0 <TController::$NewGroup(TUnit *)>
        24ebe0:	ea000000 	b	24ebe8 <TXrWordDomain::Group(TUnit *, dInfoRec *)+0xc0>
        24ebe4:	e3a08001 	mov	r8, #1	; 0x1
        24ebe8:	e3380000 	teq	r8, #0	; 0x0
        24ebec:	15b50008 	ldrne	r0, [r5, #8]!	; fField8
        24ebf0:	1b645168 	blne	1b63198 <TController::$SignalMemoryError(void)>
        24ebf4:	e3a00001 	mov	r0, #1	; 0x1
        24ebf8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)
 * Address: 0024ebfc
 */
TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long) {
    /*
        24ebfc:	e1a0c00d 	mov	ip, sp
        24ec00:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        24ec04:	e24cb004 	sub	fp, ip, #4	; 0x4
        24ec08:	e1a06000 	mov	r6, r0
        24ec0c:	e1a09001 	mov	r9, r1
        24ec10:	e1a04002 	mov	r4, r2
        24ec14:	e1b05003 	movs	r5, r3
        24ec18:	e24dd048 	sub	sp, sp, #72	; 0x48
        24ec1c:	e3a07000 	mov	r7, #0	; 0x0
        24ec20:	0a000002 	beq	24ec30 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x34>
        24ec24:	e1a00005 	mov	r0, r5
        24ec28:	eb647683 	bl	1b6c63c <$LockHandle(char **)>
        24ec2c:	e5957000 	ldr	r7, [r5]
        24ec30:	e1a01009 	mov	r1, r9
        24ec34:	e3a02020 	mov	r2, #32	; 0x20
        24ec38:	e2822802 	add	r2, r2, #131072	; 0x20000
        24ec3c:	e3a09000 	mov	r9, #0	; 0x0
        24ec40:	e1510002 	cmp	r1, r2
        24ec44:	05c7910c 	streqb	r9, [r7, #268]
        24ec48:	0a0002a1 	beq	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ec4c:	e3a0a001 	mov	sl, #1	; 0x1
        24ec50:	ca00004f 	bgt	24ed94 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x198>
        24ec54:	e3a00008 	mov	r0, #8	; 0x8
        24ec58:	e2800802 	add	r0, r0, #131072	; 0x20000
        24ec5c:	e1510000 	cmp	r1, r0
        24ec60:	0a0000ba 	beq	24ef50 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x354>
        24ec64:	ca000033 	bgt	24ed38 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x13c>
        24ec68:	e3a03002 	mov	r3, #2	; 0x2
        24ec6c:	e2833802 	add	r3, r3, #131072	; 0x20000
        24ec70:	e1510003 	cmp	r1, r3
        24ec74:	0a00008f 	beq	24eeb8 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x2bc>
        24ec78:	ca000023 	bgt	24ed0c <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x110>
        24ec7c:	e3a0e001 	mov	lr, #1	; 0x1
        24ec80:	e28ee802 	add	lr, lr, #131072	; 0x20000
        24ec84:	e3510002 	cmp	r1, #2	; 0x2
        24ec88:	0a000232 	beq	24f558 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x95c>
        24ec8c:	ca000015 	bgt	24ece8 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xec>
        24ec90:	e3310000 	teq	r1, #0	; 0x0
        24ec94:	03a00e16 	moveq	r0, #352	; 0x160
        24ec98:	0a000176 	beq	24f278 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x67c>
        24ec9c:	e3310001 	teq	r1, #1	; 0x1
        24eca0:	1a00028e 	bne	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24eca4:	e1a01007 	mov	r1, r7
        24eca8:	e1a00006 	mov	r0, r6
        24ecac:	eb633021 	bl	1b1ad38 <TXrWordDomain::$InitializeParamStruct(XRWORDPARAM *)>
        24ecb0:	e1a08000 	mov	r8, r0
        24ecb4:	e5879114 	str	r9, [r7, #276]
        24ecb8:	e5879120 	str	r9, [r7, #288]
        24ecbc:	e5c7915e 	strb	r9, [r7, #350]
        24ecc0:	e5c7a15f 	strb	sl, [r7, #351]
        24ecc4:	e587a110 	str	sl, [r7, #272]
        24ecc8:	e1a0000a 	mov	r0, sl
        24eccc:	e1a01007 	mov	r1, r7
        24ecd0:	eb633856 	bl	1b1ce30 <$SetXrWordFieldType(unsigned long, rc_type *)>
        24ecd4:	e5970114 	ldr	r0, [r7, #276]
        24ecd8:	e5972110 	ldr	r2, [r7, #272]
        24ecdc:	e1a01007 	mov	r1, r7
        24ece0:	eb633851 	bl	1b1ce2c <$SetXrWordFieldSpeed(unsigned long, rc_type *, rc_type *)>
        24ece4:	ea00027d 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ece8:	e3310003 	teq	r1, #3	; 0x3
        24ecec:	0a00005f 	beq	24ee70 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x274>
        24ecf0:	e131000e 	teq	r1, lr
        24ecf4:	1a000279 	bne	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ecf8:	e5970118 	ldr	r0, [r7, #280]
        24ecfc:	e5840000 	str	r0, [r4]
        24ed00:	e5b7011c 	ldr	r0, [r7, #284]!
        24ed04:	e5a40004 	str	r0, [r4, #4]!	; fField4
        24ed08:	ea000271 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ed0c:	e2410003 	sub	r0, r1, #3	; 0x3
        24ed10:	e2400802 	sub	r0, r0, #131072	; 0x20000
        24ed14:	e3500004 	cmp	r0, #4	; 0x4
        24ed18:	908ff100 	addls	pc, pc, r0, lsl #2
        24ed1c:	ea00026f 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ed20:	ea00026b 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ed24:	ea00026a 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ed28:	ea000078 	b	24ef10 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x314>
        24ed2c:	ea00007c 	b	24ef24 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x328>
        24ed30:	e5b70114 	ldr	r0, [r7, #276]!
        24ed34:	ea00014f 	b	24f278 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x67c>
        24ed38:	e2410009 	sub	r0, r1, #9	; 0x9
        24ed3c:	e2400802 	sub	r0, r0, #131072	; 0x20000
        24ed40:	e3500010 	cmp	r0, #16	; 0x10
        24ed44:	908ff100 	addls	pc, pc, r0, lsl #2
        24ed48:	ea000264 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ed4c:	ea000086 	b	24ef6c <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x370>
        24ed50:	ea00008c 	b	24ef88 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x38c>
        24ed54:	ea000261 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ed58:	ea000260 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ed5c:	ea00025f 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ed60:	ea00025e 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ed64:	ea00025d 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ed68:	ea000097 	b	24efcc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x3d0>
        24ed6c:	ea000160 	b	24f2f4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6f8>
        24ed70:	ea000164 	b	24f308 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x70c>
        24ed74:	ea000259 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ed78:	ea000171 	b	24f344 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x748>
        24ed7c:	ea000097 	b	24efe0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x3e4>
        24ed80:	ea0000a9 	b	24f02c <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x430>
        24ed84:	ea0000ca 	b	24f0b4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4b8>
        24ed88:	ea000142 	b	24f298 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x69c>
        24ed8c:	e5c7a10c 	strb	sl, [r7, #268]
        24ed90:	ea00024f 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ed94:	e2410021 	sub	r0, r1, #33	; 0x21
        24ed98:	e2400802 	sub	r0, r0, #131072	; 0x20000
        24ed9c:	e3500026 	cmp	r0, #38	; 0x26
        24eda0:	908ff100 	addls	pc, pc, r0, lsl #2
        24eda4:	ea00024d 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24eda8:	ea0000e0 	b	24f130 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x534>
        24edac:	ea0000ec 	b	24f164 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x568>
        24edb0:	ea0000f8 	b	24f198 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x59c>
        24edb4:	ea0000f1 	b	24f180 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x584>
        24edb8:	ea000248 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24edbc:	ea000247 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24edc0:	ea000246 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24edc4:	ea000245 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24edc8:	ea000162 	b	24f358 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x75c>
        24edcc:	ea000243 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24edd0:	ea000242 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24edd4:	ea000241 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24edd8:	ea000240 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24eddc:	ea00023f 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ede0:	ea00023e 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ede4:	ea000173 	b	24f3b8 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x7bc>
        24ede8:	ea00017d 	b	24f3e4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x7e8>
        24edec:	ea000183 	b	24f400 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x804>
        24edf0:	ea0000eb 	b	24f1a4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5a8>
        24edf4:	ea0000ec 	b	24f1ac <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5b0>
        24edf8:	ea0000ee 	b	24f1b8 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5bc>
        24edfc:	ea0000f5 	b	24f1d8 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5dc>
        24ee00:	ea0000fb 	b	24f1f4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5f8>
        24ee04:	ea000108 	b	24f22c <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x630>
        24ee08:	ea000114 	b	24f260 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x664>
        24ee0c:	ea000233 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ee10:	ea000232 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ee14:	ea000231 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ee18:	ea000230 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ee1c:	ea00022f 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ee20:	ea00022e 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ee24:	ea000115 	b	24f280 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x684>
        24ee28:	ea000178 	b	24f410 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x814>
        24ee2c:	ea00022b 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ee30:	ea000227 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ee34:	ea000226 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ee38:	ea000225 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ee3c:	ea00019f 	b	24f4c0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x8c4>
        24ee40:	e5849000 	str	r9, [r4]
        24ee44:	e5970006 	ldr	r0, [r7, #6]
        24ee48:	e1a00780 	mov	r0, r0, lsl #15
        24ee4c:	e1b00fa0 	movs	r0, r0, lsr #31
        24ee50:	1584a000 	strne	sl, [r4]
        24ee54:	e5970006 	ldr	r0, [r7, #6]
        24ee58:	e1a00820 	mov	r0, r0, lsr #16
        24ee5c:	e3100008 	tst	r0, #8	; 0x8
        24ee60:	15940000 	ldrne	r0, [r4]
        24ee64:	13800008 	orrne	r0, r0, #8	; 0x8
        24ee68:	1a000102 	bne	24f278 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x67c>
        24ee6c:	ea000218 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ee70:	e3a04000 	mov	r4, #0	; 0x0
        24ee74:	e0870104 	add	r0, r7, r4, lsl #2
        24ee78:	e5901034 	ldr	r1, [r0, #52]	; fField52
        24ee7c:	e3310000 	teq	r1, #0	; 0x0
        24ee80:	12800034 	addne	r0, r0, #52	; 0x34
        24ee84:	1b6371be 	blne	1b2b584 <$UnloadVoc(void **)>
        24ee88:	e2844001 	add	r4, r4, #1	; 0x1
        24ee8c:	e354000f 	cmp	r4, #15	; 0xf
        24ee90:	bafffff7 	blt	24ee74 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x278>
        24ee94:	e5970030 	ldr	r0, [r7, #48]
        24ee98:	e3300000 	teq	r0, #0	; 0x0
        24ee9c:	12870030 	addne	r0, r7, #48	; 0x30
        24eea0:	1b6371b6 	blne	1b2b580 <$UnloadData(void **)>
        24eea4:	e5970070 	ldr	r0, [r7, #112]
        24eea8:	e3300000 	teq	r0, #0	; 0x0
        24eeac:	12870070 	addne	r0, r7, #112	; 0x70
        24eeb0:	1b638a87 	blne	1b318d4 <$UnloadTrigram(void **)>
        24eeb4:	ea000206 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24eeb8:	e5940000 	ldr	r0, [r4]
        24eebc:	e5870118 	str	r0, [r7, #280]
        24eec0:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
        24eec4:	e3a03000 	mov	r3, #0	; 0x0
        24eec8:	e587111c 	str	r1, [r7, #284]
        24eecc:	e92d0008 	stmdb	sp!, {r3}
        24eed0:	e2872034 	add	r2, r7, #52	; 0x34
        24eed4:	e28f3f0a 	add	r3, pc, #40	; 0x28
        24eed8:	eb6337d2 	bl	1b1ce28 <$SetUpVocAdders__FPP15AirusAParmBlockT1PPvPcs>
        24eedc:	e28dd004 	add	sp, sp, #4	; 0x4
        24eee0:	e5970118 	ldr	r0, [r7, #280]
        24eee4:	e3300000 	teq	r0, #0	; 0x0
        24eee8:	0597011c 	ldreq	r0, [r7, #284]
        24eeec:	03300000 	teqeq	r0, #0	; 0x0
        24eef0:	05970008 	ldreq	r0, [r7, #8]	; fField8
        24eef4:	01a00820 	moveq	r0, r0, lsr #16
        24eef8:	03c00001 	biceq	r0, r0, #1	; 0x1
        24eefc:	0a00010c 	beq	24f334 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x738>
        24ef00:	ea0001f3 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ef04:	45726e69 	ldrmib	r6, [r2, -#3689]!
        24ef08:	65277320 	strvs	r7, [r7, -#800]!
        24ef0c:	766f6300 	strvcbt	r6, [pc], -r0, lsl #6
        24ef10:	e5970110 	ldr	r0, [r7, #272]
        24ef14:	e5840000 	str	r0, [r4]
        24ef18:	e5b70110 	ldr	r0, [r7, #272]!
        24ef1c:	eb6333b6 	bl	1b1bdfc <$PrintFieldType(unsigned long)>
        24ef20:	ea0001eb 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ef24:	e1a01007 	mov	r1, r7
        24ef28:	e1a00004 	mov	r0, r4
        24ef2c:	eb6337bf 	bl	1b1ce30 <$SetXrWordFieldType(unsigned long, rc_type *)>
        24ef30:	e1b08000 	movs	r8, r0
        24ef34:	1a0001e9 	bne	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ef38:	e5874110 	str	r4, [r7, #272]
        24ef3c:	e1a02004 	mov	r2, r4
        24ef40:	e5970114 	ldr	r0, [r7, #276]
        24ef44:	e1a01007 	mov	r1, r7
        24ef48:	eb6337b7 	bl	1b1ce2c <$SetXrWordFieldSpeed(unsigned long, rc_type *, rc_type *)>
        24ef4c:	ea000021 	b	24efd8 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x3dc>
        24ef50:	e5972110 	ldr	r2, [r7, #272]
        24ef54:	e1a01007 	mov	r1, r7
        24ef58:	e1a00004 	mov	r0, r4
        24ef5c:	eb6337b2 	bl	1b1ce2c <$SetXrWordFieldSpeed(unsigned long, rc_type *, rc_type *)>
        24ef60:	e1b08000 	movs	r8, r0
        24ef64:	05a74114 	streq	r4, [r7, #276]!
        24ef68:	ea0001dc 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24ef6c:	e5971120 	ldr	r1, [r7, #288]
        24ef70:	e3310000 	teq	r1, #0	; 0x0
        24ef74:	0a0001d6 	beq	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ef78:	e5970118 	ldr	r0, [r7, #280]
        24ef7c:	eb6454a6 	bl	1b6421c <TDictChain::$AddDictToChain(AirusAParmBlock **)>
        24ef80:	e5a79120 	str	r9, [r7, #288]!
        24ef84:	ea0001d2 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ef88:	e5970120 	ldr	r0, [r7, #288]
        24ef8c:	e3300000 	teq	r0, #0	; 0x0
        24ef90:	1a0001cf 	bne	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24ef94:	e1a01804 	mov	r1, r4, lsl #16
        24ef98:	e1a01821 	mov	r1, r1, lsr #16
        24ef9c:	e1a04001 	mov	r4, r1
        24efa0:	e5970118 	ldr	r0, [r7, #280]
        24efa4:	eb6458d2 	bl	1b652f4 <TDictChain::$PositionToHandle(unsigned long)>
        24efa8:	e5870120 	str	r0, [r7, #288]
        24efac:	e5c74125 	strb	r4, [r7, #293]
        24efb0:	e1a01424 	mov	r1, r4, lsr #8
        24efb4:	e5c71124 	strb	r1, [r7, #292]
        24efb8:	e1a01000 	mov	r1, r0
        24efbc:	e5b72118 	ldr	r2, [r7, #280]!
        24efc0:	e1a00002 	mov	r0, r2
        24efc4:	eb645ccf 	bl	1b66308 <TDictChain::$RemoveDictFromChain(AirusAParmBlock **)>
        24efc8:	ea0001c1 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24efcc:	e1a01007 	mov	r1, r7
        24efd0:	e1a00004 	mov	r0, r4
        24efd4:	eb63548b 	bl	1b24208 <$XRWDoLearning(unsigned long, XRWORDPARAM *)>
        24efd8:	e1a08000 	mov	r8, r0
        24efdc:	ea0001bf 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24efe0:	e3a08000 	mov	r8, #0	; 0x0
        24efe4:	e1a0100d 	mov	r1, sp
        24efe8:	e1a00007 	mov	r0, r7
        24efec:	eb638e50 	bl	1b32934 <$GCLockDTEAndLearningData(void *, RcHandlesType *)>
        24eff0:	e3300000 	teq	r0, #0	; 0x0
        24eff4:	0a0001b8 	beq	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24eff8:	e5970030 	ldr	r0, [r7, #48]
        24effc:	eb637dcc 	bl	1b2e734 <$GetLearnInfoPtr(void *)>
        24f000:	e3300000 	teq	r0, #0	; 0x0
        24f004:	0a000003 	beq	24f018 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x41c>
        24f008:	e5970030 	ldr	r0, [r7, #48]
        24f00c:	eb63967f 	bl	1b34a10 <$SetDefaultsWeights(void *)>
        24f010:	e3700001 	cmn	r0, #1	; 0x1
        24f014:	03e08000 	mvneq	r8, #0	; 0x0
        24f018:	eb6381f3 	bl	1b2f7ec <$ORGetDBSize(void)>
        24f01c:	e1a01000 	mov	r1, r0
        24f020:	e59700bc 	ldr	r0, [r7, #188]
        24f024:	eb6381f1 	bl	1b2f7f0 <$ORInitDB(void *, unsigned long)>
        24f028:	ea0000ad 	b	24f2e4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6e8>
        24f02c:	e3a08000 	mov	r8, #0	; 0x0
        24f030:	e5d40002 	ldrb	r0, [r4, #2]
        24f034:	e3300000 	teq	r0, #0	; 0x0
        24f038:	03a06000 	moveq	r6, #0	; 0x0
        24f03c:	0a000005 	beq	24f058 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x45c>
        24f040:	e3300001 	teq	r0, #1	; 0x1
        24f044:	03a06003 	moveq	r6, #3	; 0x3
        24f048:	0a000002 	beq	24f058 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x45c>
        24f04c:	e3300002 	teq	r0, #2	; 0x2
        24f050:	1a0001a1 	bne	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f054:	e3a06007 	mov	r6, #7	; 0x7
        24f058:	e1a0100d 	mov	r1, sp
        24f05c:	e1a00007 	mov	r0, r7
        24f060:	eb638e33 	bl	1b32934 <$GCLockDTEAndLearningData(void *, RcHandlesType *)>
        24f064:	e3300000 	teq	r0, #0	; 0x0
        24f068:	0a00019b 	beq	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f06c:	e5970030 	ldr	r0, [r7, #48]
        24f070:	eb637daf 	bl	1b2e734 <$GetLearnInfoPtr(void *)>
        24f074:	e3300000 	teq	r0, #0	; 0x0
        24f078:	0a00000b 	beq	24f0ac <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4b0>
        24f07c:	e5973030 	ldr	r3, [r7, #48]
        24f080:	e92d0008 	stmdb	sp!, {r3}
        24f084:	e5970004 	ldr	r0, [r7, #4]	; fField4
        24f088:	e1a03400 	mov	r3, r0, lsl #8
        24f08c:	e1a03c23 	mov	r3, r3, lsr #24
        24f090:	e5d41001 	ldrb	r1, [r4, #1]
        24f094:	e20620ff 	and	r2, r6, #255	; 0xff
        24f098:	e5d40000 	ldrb	r0, [r4]
        24f09c:	eb639660 	bl	1b34a24 <$SetVariantState__FUcT1iT1Pv>
        24f0a0:	e28dd004 	add	sp, sp, #4	; 0x4
        24f0a4:	e3700001 	cmn	r0, #1	; 0x1
        24f0a8:	1a00008d 	bne	24f2e4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6e8>
        24f0ac:	e3e08000 	mvn	r8, #0	; 0x0
        24f0b0:	ea00008b 	b	24f2e4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6e8>
        24f0b4:	e3a08000 	mov	r8, #0	; 0x0
        24f0b8:	e1a0100d 	mov	r1, sp
        24f0bc:	e1a00007 	mov	r0, r7
        24f0c0:	eb638e1b 	bl	1b32934 <$GCLockDTEAndLearningData(void *, RcHandlesType *)>
        24f0c4:	e3300000 	teq	r0, #0	; 0x0
        24f0c8:	0a000183 	beq	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f0cc:	e5970030 	ldr	r0, [r7, #48]
        24f0d0:	eb637d97 	bl	1b2e734 <$GetLearnInfoPtr(void *)>
        24f0d4:	e3300000 	teq	r0, #0	; 0x0
        24f0d8:	0afffff3 	beq	24f0ac <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4b0>
        24f0dc:	e5973030 	ldr	r3, [r7, #48]
        24f0e0:	e5970004 	ldr	r0, [r7, #4]	; fField4
        24f0e4:	e1a02400 	mov	r2, r0, lsl #8
        24f0e8:	e1a02c22 	mov	r2, r2, lsr #24
        24f0ec:	e5d41001 	ldrb	r1, [r4, #1]
        24f0f0:	e5d40000 	ldrb	r0, [r4]
        24f0f4:	eb639235 	bl	1b339d0 <$GetVariantState__FUcN21Pv>
        24f0f8:	e3700001 	cmn	r0, #1	; 0x1
        24f0fc:	0affffea 	beq	24f0ac <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4b0>
        24f100:	e3500000 	cmp	r0, #0	; 0x0
        24f104:	ba000001 	blt	24f110 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x514>
        24f108:	e3500003 	cmp	r0, #3	; 0x3
        24f10c:	b5c49002 	strltb	r9, [r4, #2]
        24f110:	e3500003 	cmp	r0, #3	; 0x3
        24f114:	ba000001 	blt	24f120 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x524>
        24f118:	e3500007 	cmp	r0, #7	; 0x7
        24f11c:	b5c4a002 	strltb	sl, [r4, #2]
        24f120:	e3500007 	cmp	r0, #7	; 0x7
        24f124:	a3a00002 	movge	r0, #2	; 0x2
        24f128:	a5c40002 	strgeb	r0, [r4, #2]
        24f12c:	ea00006c 	b	24f2e4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6e8>
        24f130:	e3a08000 	mov	r8, #0	; 0x0
        24f134:	e5970030 	ldr	r0, [r7, #48]
        24f138:	eb636cff 	bl	1b2a53c <$GetDTELearnInfoHandle(void *)>
        24f13c:	e3300000 	teq	r0, #0	; 0x0
        24f140:	0a000004 	beq	24f158 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x55c>
        24f144:	e5b70030 	ldr	r0, [r7, #48]!
        24f148:	eb636cfc 	bl	1b2a540 <$GetDTELearnInfoSize(void *)>
        24f14c:	e3500000 	cmp	r0, #0	; 0x0
        24f150:	c2800004 	addgt	r0, r0, #4	; 0x4
        24f154:	ca00004d 	bgt	24f290 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x694>
        24f158:	e3e08000 	mvn	r8, #0	; 0x0
        24f15c:	e5849000 	str	r9, [r4]
        24f160:	ea00015e 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24f164:	e3a08000 	mov	r8, #0	; 0x0
        24f168:	e5b70030 	ldr	r0, [r7, #48]!
        24f16c:	eb636cf2 	bl	1b2a53c <$GetDTELearnInfoHandle(void *)>
        24f170:	e5840000 	str	r0, [r4]
        24f174:	e3300000 	teq	r0, #0	; 0x0
        24f178:	1a000158 	bne	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24f17c:	ea000156 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f180:	e5970030 	ldr	r0, [r7, #48]
        24f184:	eb636cec 	bl	1b2a53c <$GetDTELearnInfoHandle(void *)>
        24f188:	e3300000 	teq	r0, #0	; 0x0
        24f18c:	15c7a025 	strneb	sl, [r7, #37]
        24f190:	1a000001 	bne	24f19c <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5a0>
        24f194:	ea000150 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f198:	e5c79025 	strb	r9, [r7, #37]
        24f19c:	e5c79024 	strb	r9, [r7, #36]
        24f1a0:	ea00014b 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f1a4:	e5c7a023 	strb	sl, [r7, #35]
        24f1a8:	ea000000 	b	24f1b0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5b4>
        24f1ac:	e5c79023 	strb	r9, [r7, #35]
        24f1b0:	e5c79022 	strb	r9, [r7, #34]
        24f1b4:	ea000146 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f1b8:	eb633b33 	bl	1b1de8c <$AllocOrtographLearnInfo(void)>
        24f1bc:	e58700bc 	str	r0, [r7, #188]
        24f1c0:	e3300000 	teq	r0, #0	; 0x0
        24f1c4:	159700b8 	ldrne	r0, [r7, #184]
        24f1c8:	11a00820 	movne	r0, r0, lsr #16
        24f1cc:	13800003 	orrne	r0, r0, #3	; 0x3
        24f1d0:	1a000003 	bne	24f1e4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x5e8>
        24f1d4:	ea000140 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f1d8:	e59700b8 	ldr	r0, [r7, #184]
        24f1dc:	e1a00820 	mov	r0, r0, lsr #16
        24f1e0:	e3c00003 	bic	r0, r0, #3	; 0x3
        24f1e4:	e5c700b9 	strb	r0, [r7, #185]
        24f1e8:	e1a00440 	mov	r0, r0, asr #8
        24f1ec:	e5c700b8 	strb	r0, [r7, #184]
        24f1f0:	ea000137 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f1f4:	eb633b24 	bl	1b1de8c <$AllocOrtographLearnInfo(void)>
        24f1f8:	e58700bc 	str	r0, [r7, #188]
        24f1fc:	e3300000 	teq	r0, #0	; 0x0
        24f200:	0a000135 	beq	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f204:	e59700b8 	ldr	r0, [r7, #184]
        24f208:	e1a00820 	mov	r0, r0, lsr #16
        24f20c:	e3800008 	orr	r0, r0, #8	; 0x8
        24f210:	e5c700b9 	strb	r0, [r7, #185]
        24f214:	e1a00440 	mov	r0, r0, asr #8
        24f218:	e5c700b8 	strb	r0, [r7, #184]
        24f21c:	e59700b2 	ldr	r0, [r7, #178]
        24f220:	e1a00820 	mov	r0, r0, lsr #16
        24f224:	e3800040 	orr	r0, r0, #64	; 0x40
        24f228:	ea000008 	b	24f250 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x654>
        24f22c:	e59700b8 	ldr	r0, [r7, #184]
        24f230:	e1a00820 	mov	r0, r0, lsr #16
        24f234:	e3c00008 	bic	r0, r0, #8	; 0x8
        24f238:	e5c700b9 	strb	r0, [r7, #185]
        24f23c:	e1a00440 	mov	r0, r0, asr #8
        24f240:	e5c700b8 	strb	r0, [r7, #184]
        24f244:	e59700b2 	ldr	r0, [r7, #178]
        24f248:	e1a00820 	mov	r0, r0, lsr #16
        24f24c:	e3c00040 	bic	r0, r0, #64	; 0x40
        24f250:	e5c700b3 	strb	r0, [r7, #179]
        24f254:	e1a00440 	mov	r0, r0, asr #8
        24f258:	e5c700b2 	strb	r0, [r7, #178]
        24f25c:	ea00011c 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f260:	e5b700bc 	ldr	r0, [r7, #188]!
        24f264:	e3300000 	teq	r0, #0	; 0x0
        24f268:	05849000 	streq	r9, [r4]
        24f26c:	0a00011a 	beq	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f270:	eb63815d 	bl	1b2f7ec <$ORGetDBSize(void)>
        24f274:	e2800004 	add	r0, r0, #4	; 0x4
        24f278:	e5840000 	str	r0, [r4]
        24f27c:	ea000114 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f280:	e5b700bc 	ldr	r0, [r7, #188]!
        24f284:	e3300000 	teq	r0, #0	; 0x0
        24f288:	13a08000 	movne	r8, #0	; 0x0
        24f28c:	03e08000 	mvneq	r8, #0	; 0x0
        24f290:	e5840000 	str	r0, [r4]
        24f294:	ea000111 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24f298:	e3a08000 	mov	r8, #0	; 0x0
        24f29c:	e1a0100d 	mov	r1, sp
        24f2a0:	e1a00007 	mov	r0, r7
        24f2a4:	eb638da2 	bl	1b32934 <$GCLockDTEAndLearningData(void *, RcHandlesType *)>
        24f2a8:	e3300000 	teq	r0, #0	; 0x0
        24f2ac:	0a00010a 	beq	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f2b0:	e3a06000 	mov	r6, #0	; 0x0
        24f2b4:	e5d40000 	ldrb	r0, [r4]
        24f2b8:	e3300000 	teq	r0, #0	; 0x0
        24f2bc:	0a000008 	beq	24f2e4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6e8>
        24f2c0:	e5971030 	ldr	r1, [r7, #48]
        24f2c4:	e7d40006 	ldrb	r0, [r4, r6]
        24f2c8:	eb636c9d 	bl	1b2a544 <$GetNumVarsOfChar(unsigned char, void *)>
        24f2cc:	e3300000 	teq	r0, #0	; 0x0
        24f2d0:	0affff75 	beq	24f0ac <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x4b0>
        24f2d4:	e2866001 	add	r6, r6, #1	; 0x1
        24f2d8:	e7d40006 	ldrb	r0, [r4, r6]
        24f2dc:	e3300000 	teq	r0, #0	; 0x0
        24f2e0:	1afffff6 	bne	24f2c0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x6c4>
        24f2e4:	e1a0100d 	mov	r1, sp
        24f2e8:	e1a00007 	mov	r0, r7
        24f2ec:	eb638d92 	bl	1b3293c <$GCUnlockDTEAndLearningData(void *, RcHandlesType *)>
        24f2f0:	ea0000fa 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24f2f4:	e2871f4a 	add	r1, r7, #296	; 0x128
        24f2f8:	e1a00004 	mov	r0, r4
        24f2fc:	e3a0200c 	mov	r2, #12	; 0xc
        24f300:	eb6595d2 	bl	1bb4a50 <$memcpy>
        24f304:	ea0000f2 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f308:	e2870f4a 	add	r0, r7, #296	; 0x128
        24f30c:	e1a01004 	mov	r1, r4
        24f310:	e3a0200c 	mov	r2, #12	; 0xc
        24f314:	eb6595cd 	bl	1bb4a50 <$memcpy>
        24f318:	e5970128 	ldr	r0, [r7, #296]
        24f31c:	e5870074 	str	r0, [r7, #116]
        24f320:	e3300000 	teq	r0, #0	; 0x0
        24f324:	e5970008 	ldr	r0, [r7, #8]	; fField8
        24f328:	e1a00820 	mov	r0, r0, lsr #16
        24f32c:	13800008 	orrne	r0, r0, #8	; 0x8
        24f330:	03c00008 	biceq	r0, r0, #8	; 0x8
        24f334:	e5c70009 	strb	r0, [r7, #9]
        24f338:	e1a00440 	mov	r0, r0, asr #8
        24f33c:	e5c70008 	strb	r0, [r7, #8]	; fField8
        24f340:	ea0000e3 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f344:	e1a00004 	mov	r0, r4
        24f348:	eb608548 	bl	1a70870 <$HWRStrLen(char *)>
        24f34c:	e3300000 	teq	r0, #0	; 0x0
        24f350:	0a0000e1 	beq	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f354:	ea0000de 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f358:	e5940000 	ldr	r0, [r4]
        24f35c:	e3300000 	teq	r0, #0	; 0x0
        24f360:	15941004 	ldrne	r1, [r4, #4]	; fField4
        24f364:	13310000 	teqne	r1, #0	; 0x0
        24f368:	0a0000db 	beq	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f36c:	eb60853f 	bl	1a70870 <$HWRStrLen(char *)>
        24f370:	e3500014 	cmp	r0, #20	; 0x14
        24f374:	8a0000d8 	bhi	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f378:	e5940004 	ldr	r0, [r4, #4]	; fField4
        24f37c:	eb60853b 	bl	1a70870 <$HWRStrLen(char *)>
        24f380:	e3500014 	cmp	r0, #20	; 0x14
        24f384:	8a0000d4 	bhi	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f388:	e2870f4d 	add	r0, r7, #308	; 0x134
        24f38c:	e1a06000 	mov	r6, r0
        24f390:	e5941000 	ldr	r1, [r4]
        24f394:	eb60810b 	bl	1a6f7c8 <$HWRStrCpy__FPcT1>
        24f398:	e2870049 	add	r0, r7, #73	; 0x49
        24f39c:	e2800c01 	add	r0, r0, #256	; 0x100
        24f3a0:	e5b41004 	ldr	r1, [r4, #4]!	; fField4
        24f3a4:	e1a04000 	mov	r4, r0
        24f3a8:	eb608106 	bl	1a6f7c8 <$HWRStrCpy__FPcT1>
        24f3ac:	e5a76084 	str	r6, [r7, #132]!
        24f3b0:	e5874004 	str	r4, [r7, #4]	; fField4
        24f3b4:	ea0000c6 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f3b8:	e5940000 	ldr	r0, [r4]
        24f3bc:	e3300000 	teq	r0, #0	; 0x0
        24f3c0:	15941004 	ldrne	r1, [r4, #4]	; fField4
        24f3c4:	13310000 	teqne	r1, #0	; 0x0
        24f3c8:	0a0000c3 	beq	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f3cc:	e5971084 	ldr	r1, [r7, #132]
        24f3d0:	eb6080fc 	bl	1a6f7c8 <$HWRStrCpy__FPcT1>
        24f3d4:	e5b71088 	ldr	r1, [r7, #136]!
        24f3d8:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        24f3dc:	eb6080f9 	bl	1a6f7c8 <$HWRStrCpy__FPcT1>
        24f3e0:	ea0000bb 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f3e4:	e59f000c 	ldr	r0, [pc, #c]	; 24f3f8 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x7fc>
        24f3e8:	e5870084 	str	r0, [r7, #132]
        24f3ec:	e59f0008 	ldr	r0, [pc, #8]	; 24f3fc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x800>	; fField8
        24f3f0:	e5a70088 	str	r0, [r7, #136]!
        24f3f4:	ea0000b6 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f3f8:	00375064 	eoreqs	r5, r7, r4, rrx
        24f3fc:	0037506c 	eoreqs	r5, r7, ip, rrx
        24f400:	e1a01007 	mov	r1, r7
        24f404:	e1a00004 	mov	r0, r4
        24f408:	eb634f64 	bl	1b231a0 <$SetXrWordRC(unsigned long, XRWORDPARAM *)>
        24f40c:	ea0000b0 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f410:	e2870030 	add	r0, r7, #48	; 0x30
        24f414:	e1a01004 	mov	r1, r4
        24f418:	eb633a9a 	bl	1b1de88 <$AllocLearnInfo(void **, unsigned long)>
        24f41c:	e3300000 	teq	r0, #0	; 0x0
        24f420:	1a0000ad 	bne	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f424:	e5c79091 	strb	r9, [r7, #145]
        24f428:	e5c79090 	strb	r9, [r7, #144]
        24f42c:	e3a01004 	mov	r1, #4	; 0x4
        24f430:	e3a00008 	mov	r0, #8	; 0x8
        24f434:	e3540004 	cmp	r4, #4	; 0x4
        24f438:	908ff104 	addls	pc, pc, r4, lsl #2
        24f43c:	ea000005 	b	24f458 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x85c>
        24f440:	ea000004 	b	24f458 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x85c>
        24f444:	ea000004 	b	24f45c <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x860>
        24f448:	ea000005 	b	24f464 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x868>
        24f44c:	ea000007 	b	24f470 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x874>
        24f450:	e5c7a005 	strb	sl, [r7, #5]
        24f454:	ea000003 	b	24f468 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x86c>
        24f458:	e3a00002 	mov	r0, #2	; 0x2
        24f45c:	e5c70005 	strb	r0, [r7, #5]
        24f460:	ea000000 	b	24f468 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x86c>
        24f464:	e5c71005 	strb	r1, [r7, #5]
        24f468:	e5c79004 	strb	r9, [r7, #4]	; fField4
        24f46c:	ea000004 	b	24f484 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x888>
        24f470:	e5c71005 	strb	r1, [r7, #5]
        24f474:	e5c79004 	strb	r9, [r7, #4]	; fField4
        24f478:	e3a01000 	mov	r1, #0	; 0x0
        24f47c:	e5c71091 	strb	r1, [r7, #145]
        24f480:	e5c70090 	strb	r0, [r7, #144]
        24f484:	e5970110 	ldr	r0, [r7, #272]
        24f488:	e1a01007 	mov	r1, r7
        24f48c:	eb633667 	bl	1b1ce30 <$SetXrWordFieldType(unsigned long, rc_type *)>
        24f490:	e1b08000 	movs	r8, r0
        24f494:	1a000004 	bne	24f4ac <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x8b0>
        24f498:	e5970114 	ldr	r0, [r7, #276]
        24f49c:	e5972110 	ldr	r2, [r7, #272]
        24f4a0:	e1a01007 	mov	r1, r7
        24f4a4:	eb633660 	bl	1b1ce2c <$SetXrWordFieldSpeed(unsigned long, rc_type *, rc_type *)>
        24f4a8:	e1a08000 	mov	r8, r0
        24f4ac:	e5970030 	ldr	r0, [r7, #48]
        24f4b0:	eb636c21 	bl	1b2a53c <$GetDTELearnInfoHandle(void *)>
        24f4b4:	e3300000 	teq	r0, #0	; 0x0
        24f4b8:	1a000088 	bne	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24f4bc:	ea000022 	b	24f54c <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x950>
        24f4c0:	e5c79007 	strb	r9, [r7, #7]
        24f4c4:	e5c79006 	strb	r9, [r7, #6]
        24f4c8:	e3140001 	tst	r4, #1	; 0x1
        24f4cc:	0a000005 	beq	24f4e8 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x8ec>
        24f4d0:	e5970006 	ldr	r0, [r7, #6]
        24f4d4:	e1a00820 	mov	r0, r0, lsr #16
        24f4d8:	e3800001 	orr	r0, r0, #1	; 0x1
        24f4dc:	e5c70007 	strb	r0, [r7, #7]
        24f4e0:	e1a00440 	mov	r0, r0, asr #8
        24f4e4:	e5c70006 	strb	r0, [r7, #6]
        24f4e8:	e3140008 	tst	r4, #8	; 0x8
        24f4ec:	0a000005 	beq	24f508 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x90c>
        24f4f0:	e5970006 	ldr	r0, [r7, #6]
        24f4f4:	e1a00820 	mov	r0, r0, lsr #16
        24f4f8:	e3800008 	orr	r0, r0, #8	; 0x8
        24f4fc:	e5c70007 	strb	r0, [r7, #7]
        24f500:	e1a00440 	mov	r0, r0, asr #8
        24f504:	e5c70006 	strb	r0, [r7, #6]
        24f508:	e1a00007 	mov	r0, r7
        24f50c:	e3a01001 	mov	r1, #1	; 0x1
        24f510:	eb638d08 	bl	1b32938 <$GCSetUpRecTableAndCharset(rc_type *, unsigned int)>
        24f514:	e5970110 	ldr	r0, [r7, #272]
        24f518:	e1a01007 	mov	r1, r7
        24f51c:	eb633643 	bl	1b1ce30 <$SetXrWordFieldType(unsigned long, rc_type *)>
        24f520:	e1b08000 	movs	r8, r0
        24f524:	1a000004 	bne	24f53c <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x940>
        24f528:	e5970114 	ldr	r0, [r7, #276]
        24f52c:	e5972110 	ldr	r2, [r7, #272]
        24f530:	e1a01007 	mov	r1, r7
        24f534:	eb63363c 	bl	1b1ce2c <$SetXrWordFieldSpeed(unsigned long, rc_type *, rc_type *)>
        24f538:	e1a08000 	mov	r8, r0
        24f53c:	e5970030 	ldr	r0, [r7, #48]
        24f540:	eb636bfd 	bl	1b2a53c <$GetDTELearnInfoHandle(void *)>
        24f544:	e3300000 	teq	r0, #0	; 0x0
        24f548:	1a000064 	bne	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24f54c:	e5c79025 	strb	r9, [r7, #37]
        24f550:	e5c79024 	strb	r9, [r7, #36]
        24f554:	ea000061 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24f558:	e1540002 	cmp	r4, r2
        24f55c:	0a00005c 	beq	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f560:	ca000030 	bgt	24f628 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xa2c>
        24f564:	e1540000 	cmp	r4, r0
        24f568:	0a000059 	beq	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f56c:	ca000017 	bgt	24f5d0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x9d4>
        24f570:	e1540003 	cmp	r4, r3
        24f574:	0a000056 	beq	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f578:	ca00000a 	bgt	24f5a8 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x9ac>
        24f57c:	e3540002 	cmp	r4, #2	; 0x2
        24f580:	0a000053 	beq	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f584:	ca000003 	bgt	24f598 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x99c>
        24f588:	e3340000 	teq	r4, #0	; 0x0
        24f58c:	13340001 	teqne	r4, #1	; 0x1
        24f590:	1a000051 	bne	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f594:	ea00004e 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f598:	e3340003 	teq	r4, #3	; 0x3
        24f59c:	1134000e 	teqne	r4, lr
        24f5a0:	1a00004d 	bne	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f5a4:	ea00004a 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f5a8:	e2440003 	sub	r0, r4, #3	; 0x3
        24f5ac:	e2400802 	sub	r0, r0, #131072	; 0x20000
        24f5b0:	e3500004 	cmp	r0, #4	; 0x4
        24f5b4:	908ff100 	addls	pc, pc, r0, lsl #2
        24f5b8:	ea000047 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f5bc:	ea000044 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f5c0:	ea000043 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f5c4:	ea000042 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f5c8:	ea000041 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f5cc:	ea000040 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f5d0:	e2440009 	sub	r0, r4, #9	; 0x9
        24f5d4:	e2400802 	sub	r0, r0, #131072	; 0x20000
        24f5d8:	e3500010 	cmp	r0, #16	; 0x10
        24f5dc:	908ff100 	addls	pc, pc, r0, lsl #2
        24f5e0:	ea00003d 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f5e4:	ea00003a 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f5e8:	ea000039 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f5ec:	ea00003a 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f5f0:	ea000039 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f5f4:	ea000038 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f5f8:	ea000037 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f5fc:	ea000036 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f600:	ea000033 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f604:	ea000032 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f608:	ea000031 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f60c:	ea000032 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f610:	ea00002f 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f614:	ea00002e 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f618:	ea00002d 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f61c:	ea00002c 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f620:	ea00002d 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f624:	ea00002a 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f628:	e2440021 	sub	r0, r4, #33	; 0x21
        24f62c:	e2400802 	sub	r0, r0, #131072	; 0x20000
        24f630:	e3500026 	cmp	r0, #38	; 0x26
        24f634:	908ff100 	addls	pc, pc, r0, lsl #2
        24f638:	ea000027 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f63c:	ea000024 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f640:	ea000023 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f644:	ea000022 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f648:	ea000021 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f64c:	ea000022 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f650:	ea000021 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f654:	ea000020 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f658:	ea00001f 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f65c:	ea00001c 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f660:	ea00001d 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f664:	ea00001c 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f668:	ea00001b 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f66c:	ea00001a 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f670:	ea000019 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f674:	ea000018 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f678:	ea000015 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f67c:	ea000014 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f680:	ea000013 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f684:	ea000012 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f688:	ea000011 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f68c:	ea000010 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f690:	ea00000f 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f694:	ea00000e 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f698:	ea00000d 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f69c:	ea00000c 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f6a0:	ea00000d 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f6a4:	ea00000c 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f6a8:	ea00000b 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f6ac:	ea00000a 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f6b0:	ea000009 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f6b4:	ea000008 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f6b8:	ea000005 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f6bc:	ea000004 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f6c0:	ea000005 	b	24f6dc <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae0>
        24f6c4:	ea000002 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f6c8:	ea000001 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f6cc:	ea000000 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f6d0:	eaffffff 	b	24f6d4 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xad8>
        24f6d4:	e3a08000 	mov	r8, #0	; 0x0
        24f6d8:	ea000000 	b	24f6e0 <TXrWordDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xae4>
        24f6dc:	e3e08000 	mvn	r8, #0	; 0x0
        24f6e0:	e3350000 	teq	r5, #0	; 0x0
        24f6e4:	11a00005 	movne	r0, r5
        24f6e8:	1b647c08 	blne	1b6e710 <$UnlockHandle(char **)>
        24f6ec:	e1a00008 	mov	r0, r8
        24f6f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXrWordDomain::ConfigureSubDomain(TRecArea *)
 * Address: 0024f6f4
 */
TXrWordDomain::ConfigureSubDomain(TRecArea *) {
    /*
        24f6f4:	e1a0c00d 	mov	ip, sp
        24f6f8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24f6fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        24f700:	e1a05000 	mov	r5, r0
        24f704:	e1a04001 	mov	r4, r1
        24f708:	e24dd004 	sub	sp, sp, #4	; 0x4
        24f70c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        24f710:	e59f107c 	ldr	r1, [pc, #7c]	; 24f794 <TXrWordDomain::ConfigureSubDomain(TRecArea *)+0xa0>
        24f714:	eb644222 	bl	1b5ffa4 <TController::$GetTypedDomain(unsigned long)>
        24f718:	e1a08000 	mov	r8, r0
        24f71c:	e1a00004 	mov	r0, r4
        24f720:	e3a02001 	mov	r2, #1	; 0x1
        24f724:	e59f106c 	ldr	r1, [pc, #6c]	; 24f798 <TXrWordDomain::ConfigureSubDomain(TRecArea *)+0xa4>
        24f728:	eb643e0e 	bl	1b5ef68 <TRecArea::$GetInfoFor(unsigned long, unsigned char)>
        24f72c:	e1a07000 	mov	r7, r0
        24f730:	e1a00004 	mov	r0, r4
        24f734:	e3a02001 	mov	r2, #1	; 0x1
        24f738:	e59f1054 	ldr	r1, [pc, #54]	; 24f794 <TXrWordDomain::ConfigureSubDomain(TRecArea *)+0xa0>
        24f73c:	eb643e09 	bl	1b5ef68 <TRecArea::$GetInfoFor(unsigned long, unsigned char)>
        24f740:	e1a06000 	mov	r6, r0
        24f744:	e1a03007 	mov	r3, r7
        24f748:	e1a0200d 	mov	r2, sp
        24f74c:	e1a00005 	mov	r0, r5
        24f750:	e3a01005 	mov	r1, #5	; 0x5
        24f754:	e2811802 	add	r1, r1, #131072	; 0x20000
        24f758:	e595c000 	ldr	ip, [r5]
        24f75c:	e1a0e00f 	mov	lr, pc
        24f760:	e28cf02c 	add	pc, ip, #44	; 0x2c
        24f764:	e1a03006 	mov	r3, r6
        24f768:	e1a00008 	mov	r0, r8
        24f76c:	e3a01006 	mov	r1, #6	; 0x6
        24f770:	e2811802 	add	r1, r1, #131072	; 0x20000
        24f774:	e59d2000 	ldr	r2, [sp]
        24f778:	e598c000 	ldr	ip, [r8]
        24f77c:	e1a0e00f 	mov	lr, pc
        24f780:	e28cf02c 	add	pc, ip, #44	; 0x2c
        24f784:	e1a00004 	mov	r0, r4
        24f788:	e59f1004 	ldr	r1, [pc, #4]	; 24f794 <TXrWordDomain::ConfigureSubDomain(TRecArea *)+0xa0>	; fField4
        24f78c:	eb644659 	bl	1b610f8 <TRecArea::$ParamsAllSet(unsigned long)>
        24f790:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        24f794:	53545852 	cmppl	r4, #5373952	; 0x520000
        24f798:	58525752 	ldmplda	r2, {r1, r4, r6, r8, r9, sl, ip, lr}^
    */
}

/**
 * Symbol: TXrWordDomain::SetParameters(char **)
 * Address: 0024f79c
 */
TXrWordDomain::SetParameters(char **) {
    /*
        24f79c:	e1a0c00d 	mov	ip, sp
        24f7a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24f7a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        24f7a8:	e2804028 	add	r4, r0, #40	; 0x28
        24f7ac:	e591e000 	ldr	lr, [r1]
        24f7b0:	e1a0600e 	mov	r6, lr
        24f7b4:	e1a05004 	mov	r5, r4
        24f7b8:	e3a0c016 	mov	ip, #22	; 0x16
        24f7bc:	e8b6000e 	ldmia	r6!, {r1, r2, r3}
        24f7c0:	e8a5000e 	stmia	r5!, {r1, r2, r3}
        24f7c4:	e25cc001 	subs	ip, ip, #1	; 0x1
        24f7c8:	1afffffb 	bne	24f7bc <TXrWordDomain::SetParameters(char **)+0x20>
        24f7cc:	e8960008 	ldmia	r6, {r3}
        24f7d0:	e8850008 	stmia	r5, {r3}
        24f7d4:	e5de110c 	ldrb	r1, [lr, #268]
        24f7d8:	e5c01134 	strb	r1, [r0, #308]	; fField308
        24f7dc:	e59e1110 	ldr	r1, [lr, #272]
        24f7e0:	e5801138 	str	r1, [r0, #312]	; fField312
        24f7e4:	e59e1114 	ldr	r1, [lr, #276]
        24f7e8:	e580113c 	str	r1, [r0, #316]	; fField316
        24f7ec:	e59e1118 	ldr	r1, [lr, #280]
        24f7f0:	e5801140 	str	r1, [r0, #320]	; fField320
        24f7f4:	e59e111c 	ldr	r1, [lr, #284]
        24f7f8:	e5801144 	str	r1, [r0, #324]	; fField324
        24f7fc:	e59e1120 	ldr	r1, [lr, #288]
        24f800:	e5801148 	str	r1, [r0, #328]	; fField328
        24f804:	e59e1124 	ldr	r1, [lr, #292]
        24f808:	e1a01821 	mov	r1, r1, lsr #16
        24f80c:	e5c0114d 	strb	r1, [r0, #333]	; fField333
        24f810:	e1a01441 	mov	r1, r1, asr #8
        24f814:	e5c0114c 	strb	r1, [r0, #332]	; fField332
        24f818:	e2802e15 	add	r2, r0, #336	; 0x150
        24f81c:	e28e1f4a 	add	r1, lr, #296	; 0x128
        24f820:	e891100a 	ldmia	r1, {r1, r3, ip}
        24f824:	e882100a 	stmia	r2, {r1, r3, ip}
        24f828:	e5de115e 	ldrb	r1, [lr, #350]
        24f82c:	e5c0115c 	strb	r1, [r0, #348]	; fField348
        24f830:	e5de115f 	ldrb	r1, [lr, #351]
        24f834:	e5c0115d 	strb	r1, [r0, #349]	; fField349
        24f838:	e1a00004 	mov	r0, r4
        24f83c:	e3a01000 	mov	r1, #0	; 0x0
        24f840:	eb638c3c 	bl	1b32938 <$GCSetUpRecTableAndCharset(rc_type *, unsigned int)>
        24f844:	e3a00000 	mov	r0, #0	; 0x0
        24f848:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)
 * Address: 0024f84c
 */
TXrWordDomain::InitializeParamStruct(XRWORDPARAM *) {
    /*
        24f84c:	e1a0c00d 	mov	ip, sp
        24f850:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        24f854:	e24cb004 	sub	fp, ip, #4	; 0x4
        24f858:	e1a04001 	mov	r4, r1
        24f85c:	e24ddf43 	sub	sp, sp, #268	; 0x10c
        24f860:	e1a0000d 	mov	r0, sp
        24f864:	e3a02f43 	mov	r2, #268	; 0x10c
        24f868:	e3a01000 	mov	r1, #0	; 0x0
        24f86c:	eb659479 	bl	1bb4a58 <$memset>
        24f870:	e3a07001 	mov	r7, #1	; 0x1
        24f874:	e5cd7007 	strb	r7, [sp, #7]
        24f878:	e3a05000 	mov	r5, #0	; 0x0
        24f87c:	e5cd5006 	strb	r5, [sp, #6]
        24f880:	e59f8030 	ldr	r8, [pc, #30]	; 24f8b8 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x6c>
        24f884:	e3a01008 	mov	r1, #8	; 0x8
        24f888:	e3a02002 	mov	r2, #2	; 0x2
        24f88c:	e3a00004 	mov	r0, #4	; 0x4
        24f890:	e5983000 	ldr	r3, [r8]
        24f894:	e3530004 	cmp	r3, #4	; 0x4
        24f898:	908ff103 	addls	pc, pc, r3, lsl #2
        24f89c:	ea000006 	b	24f8bc <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x70>
        24f8a0:	ea000005 	b	24f8bc <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x70>
        24f8a4:	ea000006 	b	24f8c4 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x78>
        24f8a8:	ea000007 	b	24f8cc <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x80>
        24f8ac:	ea000009 	b	24f8d8 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x8c>
        24f8b0:	e5cd7005 	strb	r7, [sp, #5]
        24f8b4:	ea000005 	b	24f8d0 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x84>
        24f8b8:	0c10184c 	ldceq	8, cr1, [r0], -#304
        24f8bc:	e5cd2005 	strb	r2, [sp, #5]
        24f8c0:	ea000002 	b	24f8d0 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x84>
        24f8c4:	e5cd1005 	strb	r1, [sp, #5]
        24f8c8:	ea000000 	b	24f8d0 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x84>
        24f8cc:	e5cd0005 	strb	r0, [sp, #5]
        24f8d0:	e5cd5004 	strb	r5, [sp, #4]	; fField4
        24f8d4:	ea000004 	b	24f8ec <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0xa0>
        24f8d8:	e5cd0005 	strb	r0, [sp, #5]
        24f8dc:	e5cd5004 	strb	r5, [sp, #4]	; fField4
        24f8e0:	e3a03000 	mov	r3, #0	; 0x0
        24f8e4:	e5c43091 	strb	r3, [r4, #145]
        24f8e8:	e5c41090 	strb	r1, [r4, #144]
        24f8ec:	e3a01014 	mov	r1, #20	; 0x14
        24f8f0:	e5cd1011 	strb	r1, [sp, #17]
        24f8f4:	e5cd5010 	strb	r5, [sp, #16]
        24f8f8:	e3a0103c 	mov	r1, #60	; 0x3c
        24f8fc:	e5cd1015 	strb	r1, [sp, #21]
        24f900:	e5cd5014 	strb	r5, [sp, #20]
        24f904:	e3a03055 	mov	r3, #85	; 0x55
        24f908:	e5cd3019 	strb	r3, [sp, #25]
        24f90c:	e5cd5018 	strb	r5, [sp, #24]	; fField24
        24f910:	e3a0300f 	mov	r3, #15	; 0xf
        24f914:	e5cd3017 	strb	r3, [sp, #23]
        24f918:	e5cd5016 	strb	r5, [sp, #22]
        24f91c:	e3a0301e 	mov	r3, #30	; 0x1e
        24f920:	e5cd301b 	strb	r3, [sp, #27]
        24f924:	e5cd501a 	strb	r5, [sp, #26]
        24f928:	e3a0300c 	mov	r3, #12	; 0xc
        24f92c:	e5cd301d 	strb	r3, [sp, #29]
        24f930:	e5cd501c 	strb	r5, [sp, #28]
        24f934:	e58d500c 	str	r5, [sp, #12]
        24f938:	e5cd7023 	strb	r7, [sp, #35]
        24f93c:	e5cd5022 	strb	r5, [sp, #34]
        24f940:	e5cd7025 	strb	r7, [sp, #37]
        24f944:	e5cd5024 	strb	r5, [sp, #36]
        24f948:	e3a03037 	mov	r3, #55	; 0x37
        24f94c:	e5cd301f 	strb	r3, [sp, #31]
        24f950:	e5cd501e 	strb	r5, [sp, #30]
        24f954:	e5cd7021 	strb	r7, [sp, #33]
        24f958:	e5cd5020 	strb	r5, [sp, #32]
        24f95c:	e3a0305c 	mov	r3, #92	; 0x5c
        24f960:	e5cd3027 	strb	r3, [sp, #39]
        24f964:	e5cd5026 	strb	r5, [sp, #38]
        24f968:	e5cd3029 	strb	r3, [sp, #41]
        24f96c:	e5cd5028 	strb	r5, [sp, #40]
        24f970:	e5cd202b 	strb	r2, [sp, #43]
        24f974:	e5cd502a 	strb	r5, [sp, #42]
        24f978:	e3a03005 	mov	r3, #5	; 0x5
        24f97c:	e5cd302d 	strb	r3, [sp, #45]
        24f980:	e5cd502c 	strb	r5, [sp, #44]
        24f984:	e59f3108 	ldr	r3, [pc, #108]	; 24fa94 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x248>
        24f988:	e58d307c 	str	r3, [sp, #124]
        24f98c:	e59f3104 	ldr	r3, [pc, #104]	; 24fa98 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x24c>
        24f990:	e58d3080 	str	r3, [sp, #128]
        24f994:	e59f3100 	ldr	r3, [pc, #100]	; 24fa9c <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x250>
        24f998:	e58d3084 	str	r3, [sp, #132]
        24f99c:	e59f30fc 	ldr	r3, [pc, #fc]	; 24faa0 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x254>
        24f9a0:	e58d3088 	str	r3, [sp, #136]
        24f9a4:	e59f30f8 	ldr	r3, [pc, #f8]	; 24faa4 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x258>
        24f9a8:	e58d308c 	str	r3, [sp, #140]
        24f9ac:	e5cd2001 	strb	r2, [sp, #1]
        24f9b0:	e5cd5000 	strb	r5, [sp]
        24f9b4:	e3a0203a 	mov	r2, #58	; 0x3a
        24f9b8:	e5cd2003 	strb	r2, [sp, #3]
        24f9bc:	e5cd5002 	strb	r5, [sp, #2]
        24f9c0:	e3a02003 	mov	r2, #3	; 0x3
        24f9c4:	e5cd2009 	strb	r2, [sp, #9]
        24f9c8:	e5cd5008 	strb	r5, [sp, #8]	; fField8
        24f9cc:	e5cd50b5 	strb	r5, [sp, #181]
        24f9d0:	e5cd50b4 	strb	r5, [sp, #180]
        24f9d4:	e3a02020 	mov	r2, #32	; 0x20
        24f9d8:	e5cd20b3 	strb	r2, [sp, #179]
        24f9dc:	e5cd50b2 	strb	r5, [sp, #178]
        24f9e0:	e5cd00b9 	strb	r0, [sp, #185]
        24f9e4:	e5cd50b8 	strb	r5, [sp, #184]
        24f9e8:	e5cd1101 	strb	r1, [sp, #257]
        24f9ec:	e5cd5100 	strb	r5, [sp, #256]
        24f9f0:	e3a0000a 	mov	r0, #10	; 0xa
        24f9f4:	e5cd0103 	strb	r0, [sp, #259]
        24f9f8:	e5cd5102 	strb	r5, [sp, #258]
        24f9fc:	e1a0000d 	mov	r0, sp
        24fa00:	e3a01001 	mov	r1, #1	; 0x1
        24fa04:	eb638bcb 	bl	1b32938 <$GCSetUpRecTableAndCharset(rc_type *, unsigned int)>
        24fa08:	e2843f47 	add	r3, r4, #284	; 0x11c
        24fa0c:	e2842f46 	add	r2, r4, #280	; 0x118
        24fa10:	e28d1070 	add	r1, sp, #112	; 0x70
        24fa14:	e28d0030 	add	r0, sp, #48	; 0x30
        24fa18:	e1a06000 	mov	r6, r0
        24fa1c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        24fa20:	e28d3044 	add	r3, sp, #68	; 0x44
        24fa24:	e28f2f1f 	add	r2, pc, #124	; 0x7c
        24fa28:	e28f1f20 	add	r1, pc, #128	; 0x80
        24fa2c:	e28f0f22 	add	r0, pc, #136	; 0x88
        24fa30:	eb636ac5 	bl	1b2a54c <$LoadVocAndData__FPcN21PPvN24PPPcT7>
        24fa34:	e28dd010 	add	sp, sp, #16	; 0x10
        24fa38:	e3300000 	teq	r0, #0	; 0x0
        24fa3c:	1a000021 	bne	24fac8 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x27c>
        24fa40:	e1a00006 	mov	r0, r6
        24fa44:	e5981000 	ldr	r1, [r8]
        24fa48:	eb63390e 	bl	1b1de88 <$AllocLearnInfo(void **, unsigned long)>
        24fa4c:	e3300000 	teq	r0, #0	; 0x0
        24fa50:	1a00001c 	bne	24fac8 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x27c>
        24fa54:	e59d0030 	ldr	r0, [sp, #48]
        24fa58:	eb636ab7 	bl	1b2a53c <$GetDTELearnInfoHandle(void *)>
        24fa5c:	e3300000 	teq	r0, #0	; 0x0
        24fa60:	05cd5025 	streqb	r5, [sp, #37]
        24fa64:	05cd5024 	streqb	r5, [sp, #36]
        24fa68:	e5c4710c 	strb	r7, [r4, #268]
        24fa6c:	e1a0000d 	mov	r0, sp
        24fa70:	e3a0c016 	mov	ip, #22	; 0x16
        24fa74:	e8b0000e 	ldmia	r0!, {r1, r2, r3}
        24fa78:	e8a4000e 	stmia	r4!, {r1, r2, r3}
        24fa7c:	e25cc001 	subs	ip, ip, #1	; 0x1
        24fa80:	1afffffb 	bne	24fa74 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x228>
        24fa84:	e8900008 	ldmia	r0, {r3}
        24fa88:	e8840008 	stmia	r4, {r3}
        24fa8c:	e1a00005 	mov	r0, r5
        24fa90:	ea00001a 	b	24fb00 <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x2b4>
        24fa94:	00375088 	eoreqs	r5, r7, r8, lsl #1
        24fa98:	00375094 	mlaeqs	r7, r4, r0, r5
        24fa9c:	00375064 	eoreqs	r5, r7, r4, rrx
        24faa0:	0037506c 	eoreqs	r5, r7, ip, rrx
        24faa4:	00375078 	eoreqs	r5, r7, r8, ror r0
        24faa8:	6176702e 	cmnvs	r6, lr, lsr #32
        24faac:	64746500 	ldrvsbt	r6, [r4], -#1280
        24fab0:	4e455754 	mcrmi	7, 2, r5, cr5, cr4, {2}
        24fab4:	4f4e312e 	swimi	0x004e312e
        24fab8:	4c535400 	mrrcmi	4, 0, r5, r3, cr0
        24fabc:	4e455754 	mcrmi	7, 2, r5, cr5, cr4, {2}
        24fac0:	4f4e302e 	swimi	0x004e302e
        24fac4:	4c535400 	mrrcmi	4, 0, r5, r3, cr0
        24fac8:	e3a04000 	mov	r4, #0	; 0x0
        24facc:	e08d0104 	add	r0, sp, r4, lsl #2
        24fad0:	e5901034 	ldr	r1, [r0, #52]	; fField52
        24fad4:	e3310000 	teq	r1, #0	; 0x0
        24fad8:	12800034 	addne	r0, r0, #52	; 0x34
        24fadc:	1b636ea8 	blne	1b2b584 <$UnloadVoc(void **)>
        24fae0:	e2844001 	add	r4, r4, #1	; 0x1
        24fae4:	e354000f 	cmp	r4, #15	; 0xf
        24fae8:	bafffff7 	blt	24facc <TXrWordDomain::InitializeParamStruct(XRWORDPARAM *)+0x280>
        24faec:	e59d0030 	ldr	r0, [sp, #48]
        24faf0:	e3300000 	teq	r0, #0	; 0x0
        24faf4:	11a00006 	movne	r0, r6
        24faf8:	1b636ea0 	blne	1b2b580 <$UnloadData(void **)>
        24fafc:	e3e00000 	mvn	r0, #0	; 0x0
        24fb00:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

